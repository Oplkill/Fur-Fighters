#include "dead_code.h"

int dword_6049B8; // weak
int dword_604730; // weak
int dword_604738; // weak
int dword_604734; // weak

//----- (004CF807) --------------------------------------------------------
int __cdecl sub_4CF807(int* a1)
{
    double v1; // st7
    double v2; // st7
    double v3; // st7
    int result; // eax
    float v5; // [esp+Ch] [ebp-7Ch]
    float v6; // [esp+10h] [ebp-78h]
    float v7; // [esp+14h] [ebp-74h]
    float v8; // [esp+18h] [ebp-70h]
    float v9; // [esp+1Ch] [ebp-6Ch]
    float v10; // [esp+20h] [ebp-68h]
    int v11; // [esp+24h] [ebp-64h]
    int* v12; // [esp+30h] [ebp-58h]
    int v13; // [esp+34h] [ebp-54h]
    int v14; // [esp+34h] [ebp-54h]
    int v15; // [esp+38h] [ebp-50h]
    int v16; // [esp+3Ch] [ebp-4Ch]
    int i; // [esp+40h] [ebp-48h]
    int v18; // [esp+40h] [ebp-48h]
    int j; // [esp+44h] [ebp-44h]
    int v20; // [esp+44h] [ebp-44h]
    int v21; // [esp+4Ch] [ebp-3Ch]
    int v22; // [esp+54h] [ebp-34h]
    int v23; // [esp+58h] [ebp-30h]
    int v24; // [esp+5Ch] [ebp-2Ch]
    int v25; // [esp+64h] [ebp-24h]
    int v26; // [esp+68h] [ebp-20h]
    int v27; // [esp+6Ch] [ebp-1Ch]
    int v28; // [esp+70h] [ebp-18h]
    int v29; // [esp+74h] [ebp-14h]
    int v30; // [esp+78h] [ebp-10h]

    v26 = a1[11];
    v16 = (__int64)(sin(2.0) * 35328.0);
    v28 = (__int64)(cos(2.0) * 35328.0);
    v11 = *(_DWORD*)(v26 + 135192);
    v25 = *(_DWORD*)(v26 + 135196);
    v15 = *(_DWORD*)(v26 + 135176);
    v12 = (int*)(*(_DWORD*)v26 + 4 * a1[5]);
    v27 = *(_DWORD*)v26 + 4 * (1 - a1[5]);
    for (i = 0; i < 64; ++i)
    {
        for (j = 0; j < 64; ++j)
        {
            v22 = 2 * (((_BYTE)j + 1) & 0x3F);
            v29 = 2 * (((_BYTE)j - 1) & 0x3F);
            v30 = (((_BYTE)i + 1) & 0x3F) << 7;
            v23 = (((_BYTE)i - 1) & 0x3F) << 7;
            *v12 = ((*(_DWORD*)(v27 + 4 * (v23 + 2 * j))
                + *(_DWORD*)(v27 + 4 * (v30 + 2 * j))
                + *(_DWORD*)(v27 + 4 * ((i << 7) + v22))
                + *(_DWORD*)(v27 + 4 * ((i << 7) + v29))) >> 1)
                - *v12;
            *v12 -= (v15 * *v12) >> 8;
            if (*v12 > 0x4000)
                *v12 = 0x4000;
            if (*v12 < -16384)
                *v12 = -16384;
            v24 = *(_DWORD*)(v27 + 4 * (v23 + v22))
                + *(_DWORD*)(v27 + 4 * (v30 + v22))
                - *(_DWORD*)(v27 + 4 * (v30 + v29))
                - *(_DWORD*)(v27 + 4 * (v23 + v29))
                + 2 * (*(_DWORD*)(v27 + 4 * ((i << 7) + v22)) - *(_DWORD*)(v27 + 4 * ((i << 7) + v29)));
            v21 = *(_DWORD*)(v27 + 4 * (v30 + v22))
                + *(_DWORD*)(v27 + 4 * (v30 + v29))
                - *(_DWORD*)(v27 + 4 * (v23 + v29))
                - *(_DWORD*)(v27 + 4 * (v23 + v22))
                + 2 * (*(_DWORD*)(v27 + 4 * (v30 + 2 * j)) - *(_DWORD*)(v27 + 4 * (v23 + 2 * j)));
            v13 = 255 - ((((v28 + v21) >> 8) * ((v28 + v21) >> 8) + ((v24 - v16) >> 8) * ((v24 - v16) >> 8)) >> 8);
            if (v13 < 48)
                v13 = 48;
            v14 = (v13 * v13) >> 8;
            if (v14 < 0)
                v14 = 0;
            if (v14 > 255)
                v14 = 255;
            *(_WORD*)(a1[4] + 2 * ((i << 6) + j)) = *(_WORD*)(v26
                + 2
                * ((*(unsigned __int8*)(v26
                    + ((((_BYTE)i
                        + (_BYTE)v25
                        - (unsigned __int8)(v21 >> 11)) & 0x3F) << 6)
                    + (((_BYTE)j
                        + (_BYTE)v11
                        - (unsigned __int8)(v24 >> 11)) & 0x3F)
                    + 131076) << 8)
                    + v14)
                + 4);
            v12 += 2;
        }
    }
    if (a1[1])
        sub_569C41(a1[1], a1[4]);
    a1[5] = 1 - a1[5];
    if (*(_DWORD*)(v26 + 135180))
    {
        v20 = *(_DWORD*)(v26 + 135184);
        v18 = *(_DWORD*)(v26 + 135188);
        v10 = (float)*(int*)(v26 + 135172);
        v1 = sin(v10 * *(float*)(v26 + 135200));
        v9 = (float)*(int*)(v26 + 135180);
        *(_DWORD*)(*(_DWORD*)v26 + 4 * (2 * v20 + (v18 << 7) + 1 - a1[5])) = (__int64)(v1 * v9);
        v8 = (float)*(int*)(v26 + 135172);
        v2 = sin(v8 * *(float*)(v26 + 135200));
        v7 = (float)*(int*)(v26 + 135180);
        *(_DWORD*)(*(_DWORD*)v26 + 4 * (1 - a1[5]) + 4176) = (__int64)(v2 * v7);
        v6 = (float)*(int*)(v26 + 135172);
        v3 = sin(v6 * *(float*)(v26 + 135200));
        v5 = (float)*(int*)(v26 + 135180);
        *(_DWORD*)(*(_DWORD*)v26 + 4 * (1 - a1[5]) + 20584) = (__int64)(v3 * v5);
    }
    if (!*(_DWORD*)(v26 + 135172))
    {
        *(_DWORD*)(v26 + 135176) = 2;
        *(_DWORD*)(v26 + 135180) = 4096;
    }
    if (*(_DWORD*)(v26 + 135172) == 128)
    {
        *(_DWORD*)(v26 + 135176) = 0;
        *(_DWORD*)(v26 + 135180) = 0;
    }
    result = *(_DWORD*)(v26 + 135172) + 1;
    *(_DWORD*)(v26 + 135172) = result;
    return result;
}

//----- (00442EB0) --------------------------------------------------------
int sub_442EB0()
{
    int result; // eax

    if (sub_581F8D() == -1)
        sub_581CBF(dword_6049B8);
    else
        dword_6049B8 = sub_58125B();
    dword_604730 = 0;
    result = sub_5822FE(0);
    dword_604738 = 255;
    dword_604734 = 255;
    return result;
}
// 604730: using guessed type int dword_604730;
// 604734: using guessed type int dword_604734;
// 604738: using guessed type int dword_604738;
// 6049B8: using guessed type int dword_6049B8;

//----- (00581F8D) --------------------------------------------------------
int sub_581F8D()
{
    if (sub_581F00())
        return *(_DWORD*)&g_SoundProviderId;
    isSoundDisabled = 0;
    isMusicDisabled = 0;
    return -1;
}
// 581F00: using guessed type int sub_581F00(void);
// 6AE834: using guessed type int dword_6AE834;
// 6AE838: using guessed type int dword_6AE838;

//----- (0058125B) --------------------------------------------------------
int sub_58125B()
{
    return *(_DWORD*)&g_SoundProviderId;
}

//----- (0058ECC1) --------------------------------------------------------
int return0_1()
{
    return 0;
}

//----- (0058396E) --------------------------------------------------------
int return0_8()
{
    return 0;
}

//----- (00571243) --------------------------------------------------------
void emptyFunction17()
{
    ;
}