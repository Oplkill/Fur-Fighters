#include "minigame_global.h"

int loadAllLanguageSpritesAtOnce; // weak
char byte_62207C; // weak
int dword_5A03B4 = 196640; // weak

//----- (004D0743) --------------------------------------------------------
int __cdecl sub_4D0743(int a1, int a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int8 a5, int a6)
{
    int result; // eax

    if (a1 < 128 && a1 >= 0 && a2 < 128 && a2 >= 0)
    {
        result = (a5 << 10) + a3 + 32 * a4 + 0x8000;
        *(_WORD*)(*(_DWORD*)(a6 + 16) + 2 * *(_DWORD*)(a6 + 8) * a2 + 2 * a1) = result;
    }
    return result;
}

//----- (004D290F) --------------------------------------------------------
int __cdecl sub_4D290F(int a1, int a2, _DWORD* a3, _DWORD* a4, char a5)
{
    int result; // eax
    char* v6; // [esp+8h] [ebp-10h]
    int v7; // [esp+Ch] [ebp-Ch]
    int v8; // [esp+14h] [ebp-4h]

    v8 = 0;
    if (a5)
    {
        v6 = getFormattedString("%d", a2);
        v7 = 64 - ((*a3 * strlen(v6)) >> 1);
    }
    else
    {
        v6 = getFormattedString("%d", a1);
        v7 = 0;
    }
    while (1)
    {
        result = v6[v8];
        if (!v6[v8])
            break;
        sub_4D05E6(a4, v7, 0, &a3[3 * v6[v8] - 144]);
        v7 += *a3;
        ++v8;
    }
    return result;
}

//----- (004D07B5) --------------------------------------------------------
__int16 __cdecl sub_4D07B5(int a1)
{
    return sub_57F848(a1);
}

//----- (0047641B) --------------------------------------------------------
int __cdecl sub_47641B(int a1)
{
    int result; // eax
    const char* v2; // eax
    int v3; // [esp+4h] [ebp-4h]

    result = a1;
    switch (a1)
    {
    case 0:
        v3 = 1;
        break;
    case 1:
        v3 = 2;
        break;
    case 2:
        v3 = 8;
        break;
    case 3:
        v3 = 16;
        break;
    case 4:
        v3 = 4;
        break;
    case 5:
        v3 = 32;
        break;
    case 6:
        v3 = 64;
        break;
    case 7:
        v3 = 128;
        break;
    case 8:
        v3 = 256;
        break;
    case 9:
        v3 = 512;
        break;
    case 10:
        v3 = 1024;
        break;
    case 11:
        v3 = 2048;
        break;
    case 12:
        v3 = 4096;
        break;
    case 13:
        v3 = 0x2000;
        break;
    case 14:
        v3 = 0x4000;
        break;
    case 15:
        v3 = 0x8000;
        break;
    case 16:
        v3 = 0x400000;
        break;
    default:
        break;
    }
    if ((v3 & dword_6041E0) == 0)
    {
        v2 = (const char*)loadLanguageString(257);
        sub_48B648(v2, 1);
        result = v3 | dword_6041E0;
        dword_6041E0 |= v3;
    }
    return result;
}
// 4764DE: variable 'v3' is possibly undefined
// 6041E0: using guessed type int dword_6041E0;

//----- (004D05E6) --------------------------------------------------------
_WORD* __cdecl sub_4D05E6(_DWORD* a1, int a2, int a3, int* a4)
{
    _WORD* result; // eax
    int v5; // [esp+0h] [ebp-28h]
    int v6; // [esp+4h] [ebp-24h]
    int v7; // [esp+8h] [ebp-20h]
    int v8; // [esp+Ch] [ebp-1Ch]
    int i; // [esp+10h] [ebp-18h]
    int j; // [esp+14h] [ebp-14h]
    _WORD* v11; // [esp+18h] [ebp-10h]
    _WORD* v12; // [esp+1Ch] [ebp-Ch]
    int v13; // [esp+20h] [ebp-8h]
    int v14; // [esp+24h] [ebp-4h]

    v14 = 0;
    v13 = 0;
    v8 = *a4;
    v6 = a4[1];
    if (a2 < 0)
        v14 = -a2;
    if (a3 < 0)
        v13 = -a3;
    if (v8 + a2 > a1[2])
        v8 = a1[2] - a2;
    if (v6 + a3 > a1[3])
        v6 = a1[3] - a3;
    v12 = (_WORD*)(a4[2] + 2 * v14 + 2 * *a4 * v13);
    v11 = (_WORD*)(a1[4] + 2 * (v14 + a2) + 2 * a1[2] * (v13 + a3));
    v5 = *a4 - (v8 - v14);
    v7 = a1[2] - (v8 - v14);
    result = (_WORD*)v13;
    for (i = v13; i < v6; ++i)
    {
        for (j = v14; j < v8; ++j)
        {
            if ((*v12 & 0x8000) != 0)
                *v11 = *v12;
            ++v12;
            ++v11;
        }
        v12 += v5;
        result = &v11[v7];
        v11 = result;
    }
    return result;
}

//----- (004D29D9) --------------------------------------------------------
char* __cdecl sub_4D29D9(int a1, int a2, int a3, _DWORD* a4, _DWORD* a5)
{
    char* result; // eax
    char* v6; // [esp+0h] [ebp-Ch]
    int v7; // [esp+8h] [ebp-4h]

    v7 = 0;
    result = getFormattedString("%d", a3);
    v6 = result;
    while (v6[v7])
    {
        sub_4D05E6(a5, a1, a2, &a4[3 * v6[v7] - 144]);
        a1 += *a4;
        result = (char*)++v7;
    }
    return result;
}