#include "dead_code.h"

#include <windows.h>
#include <cstdio>
#include "settings.h"
#include "files.h"
#include "emptyfunctions.h"
#include "debug.h"
#include "globalVariables.h"
#include "dead_code.h"
#include "tempplace.h"
#include "directx.h"
#include "multiplayer.h"
#include "gamespy.h"
#include "utils.h"
#include <cmath>
#include "sounds.h"

int dword_6049B8; // weak
int dword_604730; // weak
int dword_604738; // weak
int dword_604734; // weak
CHAR byte_60498E[22]; // idb
FILE* dword_622938; // idb
char textUseless1[16];
int dword_5B8D5C = 0; // weak
int dword_5B8D60 = 0; // weak
_UNKNOWN unk_597340; // weak
int dword_5C60A4; // weak
_UNKNOWN unk_5B7BB0; // weak
char asc_5B7D18[5] = "ÿÿÿÿ"; // weak
int dword_622934; // weak
int dword_62292C; // weak

int dword_5B7BB4[89] =
{
  22,
  2,
  2,
  3,
  2,
  4,
  24,
  5,
  13,
  6,
  9,
  7,
  12,
  8,
  12,
  9,
  12,
  10,
  7,
  11,
  8,
  12,
  22,
  13,
  22,
  15,
  2,
  16,
  13,
  17,
  18,
  18,
  2,
  33,
  13,
  53,
  2,
  65,
  13,
  67,
  2,
  80,
  17,
  82,
  13,
  83,
  13,
  87,
  22,
  89,
  11,
  108,
  13,
  109,
  32,
  112,
  28,
  114,
  9,
  6,
  22,
  128,
  10,
  129,
  10,
  130,
  9,
  131,
  22,
  132,
  13,
  145,
  41,
  158,
  13,
  161,
  2,
  164,
  11,
  167,
  13,
  183,
  17,
  206,
  2,
  215,
  11,
  1816,
  12
}; // idb

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

//----- (0058216D) --------------------------------------------------------
int sub_58216D()
{
    if (strcmp(sound3DProviderName, "Miles Fast 2D Positional Audio")
        && strcmp(sound3DProviderName, "RAD Game Tools RSX 3D Audio")
        && strcmp(sound3DProviderName, "DirectSound3D Hardware Support")
        && strcmp(sound3DProviderName, "DirectSound3D Software Emulation"))
    {
        if (!strcmp(sound3DProviderName, "Creative Labs EAX (TM)"))
        {
            debugFunc1();
            return 1;
        }
        strcmp(sound3DProviderName, "Aureal A3D Interactive (TM)");
    }
    debugFunc1();
    return 0;
}
// 607104: using guessed type char byte_607104;
// 6ADA48: using guessed type int dword_6ADA48;

//----- (0044D112) --------------------------------------------------------
LSTATUS sub_44D112()
{
    return RegSetValueExA(regKey, "Controller Configuration", 0, 3u, &g_ControllerSettings, 0xCCu);
}

//----- (00445B65) --------------------------------------------------------
void sub_445B65()
{
    switch (*(_DWORD*)dword_6046F0)
    {
    case 5:
        if (g_UseGameSpy)
            someCloseGame();
        if (sub_43FCB4())
        {
            dword_6234D4 = 0;
            dword_604960 = 0;
            sub_45E3F7(91, 255);
            *(_DWORD*)dword_6046F0 = 3;
        }
        else
        {
            dword_604960 = sub_448924((int)byte_6048DC, (int)&Count, 20, a0123456789);
            if (!dword_604960)
            {
                strcpy(byte_60498E, (const char*)byte_6048DC);
                *(_DWORD*)dword_6046F0 = 7;
                dword_5B8D5C = 5;
                dword_5B8D60 = 1;
            }
        }
        break;
    case 9:
        dword_5B8D5C = 300;
        strcpy(byte_60498E, Destination);
        *(_DWORD*)dword_6046F0 = 7;
        dword_5B8D60 = 5;
        break;
    case 7:
        if (!--dword_5B8D5C)
        {
            dword_6049A4 = 0;
            emptyFunction0();
            sub_51E4A4(byte_60498E, byte_5B8F7C);
            sub_51F6C5();
            dword_6049A4 = sub_51F63F();
            if (!--dword_5B8D60 || dword_6049A4)
            {
                *(_DWORD*)dword_6046F0 = 6;
                dword_604728 = 0;
            }
            else
            {
                dword_5B8D5C = 60;
            }
        }
        break;
    case 6:
        if (dword_6234D4 == 16 && dword_604728 > 0)
        {
            --dword_604728;
        }
        else if (dword_6234D4 == 32 && dword_604728 < dword_6049A4 - 1)
        {
            ++dword_604728;
        }
        if (sub_43FCB4())
        {
            if (g_UseGameSpy)
                someCloseGame();
            dword_6234D4 = 0;
            sub_45E3F7(91, 255);
            dword_604718 = sub_439511(dword_604718, 15.0);
            *(_DWORD*)dword_6046F0 = 5;
        }
        if (dword_6234D4 == 4)
        {
            if (dword_6049A4)
            {
                dword_6049A8 = 5;
                byte_6048DC[0] = 0;
                Count = 0;
                *(_DWORD*)dword_6046F0 = 8;
                sub_5239B8((int (*)())sub_448A71);
                sub_5239C5((int (*)())sub_448A99);
                sub_51FA21(dword_604728);
                sub_521F00(1, *(int*)dword_604778);
                sub_521F00(3, *(int*)dword_60477C);
                sub_521F00(8, dword_60425C);
                sub_521F00(7, dword_6046F4);
                sub_45E3F7(118, 255);
                dword_6234D4 = 0;
            }
            else
            {
                sub_45E3F7(91, 255);
            }
        }
        break;
    }
}
// 448A99: using guessed type int __cdecl sub_448A99(int, int);
// 5B8D5C: using guessed type int dword_5B8D5C;
// 5B8D60: using guessed type int dword_5B8D60;
// 5B9F50: using guessed type int g_UseGameSpy;
// 60425C: using guessed type int dword_60425C;
// 6046F4: using guessed type int dword_6046F4;
// 60471C: using guessed type float flt_60471C;
// 604728: using guessed type int dword_604728;
// 604960: using guessed type int dword_604960;
// 6049A4: using guessed type int dword_6049A4;
// 6049A8: using guessed type int dword_6049A8;
// 6234D4: using guessed type int dword_6234D4;

//----- (0051E4A4) --------------------------------------------------------
const void* __cdecl sub_51E4A4(LPCSTR lpString, char* String)
{
    _DWORD* v2; // edx
    _DWORD* v3; // eax
    int v4; // eax
    _DWORD* v5; // edx
    const void* result; // eax
    HGLOBAL v7; // eax
    HGLOBAL v8; // eax
    HGLOBAL v9; // eax
    int v10; // [esp+0h] [ebp-60h]
    FakeDP* v11; // [esp+4h] [ebp-5Ch]
    _QWORD v12[9]; // [esp+10h] [ebp-50h] BYREF
    int v13; // [esp+58h] [ebp-8h] BYREF
    int v14; // [esp+5Ch] [ebp-4h]

    v14 = 0;
    v11 = (FakeDP*)operator new(0xCu);
    if (v11)
    {
        FakeDP::FakeDP(v11);
        *(_DWORD*)v11 = &off_594AE8;
        v10 = (int)v11;
    }
    else
    {
        v10 = 0;
    }
    dword_5BAE80 = v10;
    CoCreateInstance(&rclsid, 0, 1u, &riid, &ppv);
    v2 = &v12[3 * v14];
    *v2 = 131667648;
    v2[1] = 298836143;
    v2[2] = -1610592612;
    v2[3] = 1581385161;
    LODWORD(v12[3 * v14 + 2]) = 16;
    HIDWORD(v12[3 * v14++ + 2]) = &unk_597340;
    v3 = &v12[3 * v14];
    *v3 = -995799648;
    v3[1] = 298836143;
    v3[2] = -1610592612;
    v3[3] = 1581385161;
    v4 = lstrlenA(lpString);
    LODWORD(v12[3 * v14 + 2]) = v4 + 1;
    HIDWORD(v12[3 * v14++ + 2]) = lpString;
    LOWORD(v13) = atoi(String);
    if ((_WORD)v13)
    {
        v5 = &v12[3 * v14];
        *v5 = -464370367;
        v5[1] = 298946213;
        v5[2] = 1610651274;
        v5[3] = 286568599;
        LODWORD(v12[3 * v14 + 2]) = 2;
        HIDWORD(v12[3 * v14++ + 2]) = &v13;
    }
    result = (const void*)(*(int(__stdcall**)(LPVOID, _QWORD*, int, _DWORD, SIZE_T*))(*(_DWORD*)ppv + 56))(
        ppv,
        v12,
        v14,
        0,
        &dwBytes);
    if (result == (const void*)-2005467106)
    {
        v7 = GlobalAlloc(0x42u, dwBytes);
        result = GlobalLock(v7);
        pMem = result;
        if (result)
        {
            if ((*(int(__stdcall**)(LPVOID, _QWORD*, int, LPCVOID, SIZE_T*))(*(_DWORD*)ppv + 56))(
                ppv,
                v12,
                v14,
                pMem,
                &dwBytes) >= 0)
            {
                result = (const void*)FakeDP::InitializeConnection((FakeDP*)dword_5BAE80, (void*)pMem, 0);
                if (ppv)
                {
                    result = (const void*)(*(int(__stdcall**)(LPVOID))(*(_DWORD*)ppv + 8))(ppv);
                    ppv = 0;
                }
            }
            else
            {
                v8 = GlobalHandle(pMem);
                GlobalUnlock(v8);
                v9 = GlobalHandle(pMem);
                result = GlobalFree(v9);
            }
        }
    }
    return result;
}
// 594230: using guessed type _DWORD __thiscall FakeDP::InitializeConnection(FakeDP *__hidden this, void *, unsigned int);
// 594238: using guessed type FakeDP *__thiscall FakeDP::FakeDP(FakeDP *__hidden this);
// 594AE8: using guessed type int (__stdcall *off_594AE8)(int);
// 5BAE80: using guessed type int dword_5BAE80;

//----- (0051F6C5) --------------------------------------------------------
int sub_51F6C5()
{
    int v1[23]; // [esp+4h] [ebp-5Ch] BYREF

    dword_5B9614 = 0;
    v1[21] = 0;
    v1[22] = 1;
    memset(v1, 0, 0x50u);
    v1[0] = 80;
    v1[6] = 1881618624;
    v1[7] = 299086062;
    v1[8] = -2147457396;
    v1[9] = 1894125741;
    v1[20] = FakeDP::EnumSessions(
        (FakeDP*)dword_5BAE80,
        (struct DPSESSIONDESC2*)v1,
        0,
        (int(__stdcall*)(const struct DPSESSIONDESC2*, unsigned int*, unsigned int, void*))sub_51F744,
        0,
        0x82u);
    return sub_51F63F();
}
// 5941F8: using guessed type _DWORD __thiscall FakeDP::EnumSessions(FakeDP *__hidden this, struct DPSESSIONDESC2 *, unsigned int, int (__stdcall *)(const struct DPSESSIONDESC2 *, unsigned int *, unsigned int, void *), void *, unsigned int);
// 594AF0: using guessed type int dword_594AF0;
// 5B9614: using guessed type int dword_5B9614;
// 5BAE80: using guessed type int dword_5BAE80;

//----- (0051FA21) --------------------------------------------------------
int __cdecl sub_51FA21(int a1)
{
    int v2; // [esp+Ch] [ebp-7Ch]
    int v3; // [esp+10h] [ebp-78h]
    size_t Size[2]; // [esp+14h] [ebp-74h] BYREF
    int v5[20]; // [esp+1Ch] [ebp-6Ch] BYREF
    int v6; // [esp+6Ch] [ebp-1Ch]
    int v7[4]; // [esp+70h] [ebp-18h] BYREF
    void* v8; // [esp+80h] [ebp-8h]
    int v9; // [esp+84h] [ebp-4h]

    v9 = 0;
    v8 = 0;
    memset(v5, 0, sizeof(v5));
    v5[0] = 80;
    if ((_UNKNOWN*)dword_5B9600 != &unk_5B94F0)
    {
        v3 = 0;
        v2 = dword_5B9600;
        while ((_UNKNOWN*)v2 != &unk_5B94F0)
        {
            if (v3 == a1)
            {
                v5[2] = *(_DWORD*)v2;
                v5[3] = *(_DWORD*)(v2 + 4);
                v5[4] = *(_DWORD*)(v2 + 8);
                v5[5] = *(_DWORD*)(v2 + 12);
                break;
            }
            v2 = *(_DWORD*)(v2 + 272);
            ++v3;
        }
    }
    v5[6] = 1881618624;
    v5[7] = 299086062;
    v5[8] = -2147457396;
    v5[9] = 1894125741;
    dword_5BABF0 = 0;
    v6 = FakeDP::Open((FakeDP*)dword_5BAE80, (struct DPSESSIONDESC2*)v5, 1u);
    if (v6 < 0)
        return v6;
    v7[1] = 0;
    v7[3] = 0;
    v7[0] = 16;
    v7[2] = (int)&String;
    v6 = FakeDP::CreatePlayer(
        (FakeDP*)dword_5BAE80,
        (unsigned int*)&dword_668794,
        (struct DPNAME*)v7,
        pHandles,
        0,
        0,
        0);
    if (v6 < 0)
        return v6;
    emptyFunction0();
    FakeDP::GetSessionDesc((FakeDP*)dword_5BAE80, 0, Size);
    v8 = operator new(Size[0]);
    if (!v8)
        return -2147024882;
    v6 = FakeDP::GetSessionDesc((FakeDP*)dword_5BAE80, v8, Size);
    if (v6 < 0)
        return v6;
    Size[1] = (size_t)v8;
    if (*((_DWORD*)v8 + 17))
    {
        emptyFunction0();
        dword_5AE60C = 0;
    }
    else
    {
        dword_5AE60C = 1;
    }
    sub_585E40(v8);
    dword_66878C = 1;
    sub_520870();
    return 0;
}
// 59421C: using guessed type _DWORD __thiscall FakeDP::CreatePlayer(FakeDP *__hidden this, unsigned int *, struct DPNAME *, void *, void *, unsigned int, unsigned int);
// 594224: using guessed type _DWORD __thiscall FakeDP::Open(FakeDP *__hidden this, struct DPSESSIONDESC2 *, unsigned int);
// 594240: using guessed type _DWORD __thiscall FakeDP::GetSessionDesc(FakeDP *__hidden this, void *, unsigned int *);
// 594AF0: using guessed type int dword_594AF0;
// 5AE60C: using guessed type int dword_5AE60C;
// 5B9600: using guessed type int dword_5B9600;
// 5BABF0: using guessed type int dword_5BABF0;
// 5BAE80: using guessed type int dword_5BAE80;
// 66878C: using guessed type int dword_66878C;
// 668794: using guessed type int dword_668794;

//----- (0051E270) --------------------------------------------------------
INT_PTR __cdecl sub_51E270(HINSTANCE hInstance, int a2)
{
    int v3; // [esp+8h] [ebp-8h]
    INT_PTR v4; // [esp+Ch] [ebp-4h]

    memset(&unk_5B94F0, 0, 0x114u);
    dword_5B9600 = (int)&unk_5B94F0;
    v3 = a2 != 0;
    do
    {
        if (v3)
        {
            if (v3 == 1)
                v4 = DialogBoxParamA(hInstance, (LPCSTR)0x66, 0, sub_51EF7A, 0);
        }
        else
        {
            v4 = DialogBoxParamA(hInstance, (LPCSTR)0x65, 0, DialogFunc, 0);
        }
        switch (v4)
        {
        case 4:
        case 3:
            return v4;
        case 2:
            --v3;
            break;
        case 5:
            return 5;
        default:
            ++v3;
            break;
        }
    } while (v3 != 2);
    return 1;
}
// 51E2FC: variable 'v4' is possibly undefined
// 5B9600: using guessed type int dword_5B9600;

//----- (0051E75A) --------------------------------------------------------
INT_PTR __stdcall DialogFunc(HWND hDlg, UINT a2, WPARAM a3, LPARAM a4)
{
    HICON lParam; // [esp+8h] [ebp-10Ch]
    CHAR String[256]; // [esp+Ch] [ebp-108h] BYREF
    HINSTANCE hInstance; // [esp+10Ch] [ebp-8h]
    int v8; // [esp+110h] [ebp-4h]

    switch (a2)
    {
    case 2u:
        sub_51EEEE(hDlg);
        break;
    case 0x110u:
        SetDlgItemTextA(hDlg, 1000, (LPCSTR) & ::String);
        hInstance = (HINSTANCE)GetWindowLongA(hDlg, -6);
        lParam = LoadIconA(hInstance, (LPCSTR)0x6B);
        SendMessageA(hDlg, 0x80u, 1u, (LPARAM)lParam);
        SendMessageA(hDlg, 0x80u, 0, (LPARAM)lParam);
        sprintf(String, "%s - Multiplayer Connect", "FurBalls");
        SetWindowTextA(hDlg, String);
        v8 = sub_51E8EB(hDlg);
        if (v8 < 0)
            EndDialog(hDlg, 4);
        return 1;
    case 0x111u:
        switch ((unsigned __int16)a3)
        {
        case 1u:
            goto LABEL_12;
        case 2u:
            EndDialog(hDlg, 3);
            break;
        case 0x3ECu:
            if (HIWORD(a3) == 2)
            {
            LABEL_12:
                if (sub_51ED34(hDlg) < 0)
                    EndDialog(hDlg, 4);
                return 1;
            }
            break;
        default:
            return 0;
        }
        break;
    default:
        return 0;
    }
    return 1;
}

//----- (00447815) --------------------------------------------------------
__int16 __cdecl sub_447815(int a1)
{
    __int16 result; // ax

    result = dword_6234D4 & 0x10;
    if ((dword_6234D4 & 0x10) != 0 && dword_604728 > 0)
    {
        --dword_604728;
    }
    else if ((dword_6234D4 & 0x20) != 0 && dword_604728 < 19)
    {
        result = ++dword_604728;
    }
    *(_DWORD*)(a1 + 24) = dword_604728;
    if (dword_6234D4 == 4)
    {
        sub_45E3F7(118, 255);
        result = dword_604728;
        word_6015C0 = dword_604728;
        if (word_5D36A4[4704 * dword_604728] == 1)
        {
            *(_DWORD*)dword_6046F0 = 6;
        }
        else
        {
            dword_604728 = 0;
            *(_DWORD*)dword_6046F0 = 5;
        }
    }
    return result;
}
// 5D36A4: using guessed type __int16 word_5D36A4[];
// 6015C0: using guessed type __int16 word_6015C0;
// 604728: using guessed type int dword_604728;
// 6234D4: using guessed type int dword_6234D4;

//----- (00581251) --------------------------------------------------------
int sub_581251()
{
    return g_NumAudioProviders;
}
// 6AE2D0: using guessed type int g_NumAudioProviders;

//----- (004394C5) --------------------------------------------------------
double __cdecl sub_4394C5(float a1, float a2)
{
    if (a1 >= 0.0)
    {
        if (a1 == 0.0)
            a1 = 1.0;
    }
    else
    {
        a1 = -a1;
    }
    if (a1 > (double)a2)
        a1 = a2;
    return a1;
}

//----- (0057F130) --------------------------------------------------------
int __cdecl sub_57F130(__int16 a1, int a2)
{
    int result; // eax

    if (a1 == -1)
        return 0;
    if (isSoundDisabled)
        return 0;
    if ((a1 & 0x8000) == 0x8000 || !maybe_setSound3DDistance(sound3DSampleHandle[a1], a2))
    {
        debugFunc1();
        result = 0;
    }
    else
    {
        debugFunc1();
        result = 1;
    }
    return result;
}
// 607114: using guessed type char byte_607114;
// 607115: using guessed type char byte_607115;
// 6AE838: using guessed type int isSoundDisabled;

//----- (0057EEDA) --------------------------------------------------------
int __cdecl sub_57EEDA(__int16 a1, float* a2)
{
    int result; // eax

    if (a1 == -1)
        return 0;
    if (isSoundDisabled)
        return 0;
    if ((a1 & 0x8000) == 0x8000 || !maybe_setSound3DVelocityVec2(sound3DSampleHandle[a1], a2))
    {
        debugFunc1();
        result = 0;
    }
    else
    {
        debugFunc1();
        result = 1;
    }
    return result;
}
// 607114: using guessed type char byte_607114;
// 607115: using guessed type char byte_607115;
// 6AE838: using guessed type int isSoundDisabled;

//----- (0057EE12) --------------------------------------------------------
int __cdecl sub_57EE12(__int16 a1, _DWORD* a2)
{
    int result; // eax

    if (a1 == -1)
        return 0;
    if (isSoundDisabled)
        return 0;
    if ((a1 & 0x8000) == 0x8000 || !maybe_setSound3DPosition2(sound3DSampleHandle[a1], a2))
    {
        debugFunc1();
        result = 0;
    }
    else
    {
        debugFunc1();
        result = 1;
    }
    return result;
}
// 607114: using guessed type char byte_607114;
// 607115: using guessed type char byte_607115;
// 6AE838: using guessed type int isSoundDisabled;

//----- (005832FB) --------------------------------------------------------
__int64 GetSoundMsCountFormatter2()
{
    float v1; // [esp+0h] [ebp-10h]

    v1 = (float)(unsigned int)AIL_ms_count();
    return (__int64)(v1 * 0.001 * 30.0);
}
// 59434C: using guessed type _DWORD __stdcall AIL_ms_count();

//----- (00583EA4) --------------------------------------------------------
int sub_583EA4()
{
    int result; // eax

    _cfltcvt_init_5();
    dword_5C60A4 = _ms_p5_mp_test_fdiv();
    result = _setdefaultprecision();
    __asm { fnclex }
    return result;
}
// 583EBC: using guessed type int _cfltcvt_init_5(void);
// 586CFA: using guessed type int _setdefaultprecision(void);
// 586D4A: using guessed type int _ms_p5_mp_test_fdiv(void);
// 5C60A4: using guessed type int dword_5C60A4;

//----- (00584D8B) --------------------------------------------------------
LPVOID __cdecl sub_584D8B(unsigned int a1)
{
    LPVOID result; // eax
    unsigned int v2; // esi
    int v3; // eax
    SIZE_T v4; // eax
    void* v5; // [esp+Ch] [ebp-1Ch]
    int v6; // [esp+Ch] [ebp-1Ch]

    if (dword_6AEBC4 == 3)
    {
        if (a1 <= dword_6AEBBC)
        {
            _lock(9);
            v5 = (void*)__sbh_alloc_block(a1);
            _unlock(9);
            result = v5;
            if (v5)
                return result;
        }
        goto LABEL_12;
    }
    if (dword_6AEBC4 != 2)
    {
    LABEL_12:
        v3 = a1;
        if (!a1)
            v3 = 1;
        v4 = v3 + 15;
        LOBYTE(v4) = v4 & 0xF0;
        return HeapAlloc(hHeap, 0, v4);
    }
    if (a1)
        v2 = (a1 + 15) & 0xFFFFFFF0;
    else
        v2 = 16;
    if (v2 > dword_5B7BAC || (_lock(9), v6 = sub_58A1B1(v2 >> 4), _unlock(9), (result = (LPVOID)v6) == 0))
        result = HeapAlloc(hHeap, 0, v2);
    return result;
}
// 588EF8: using guessed type _DWORD __cdecl _lock(_DWORD);
// 588F59: using guessed type _DWORD __cdecl _unlock(_DWORD);
// 58970E: using guessed type _DWORD __cdecl __sbh_alloc_block(_DWORD);
// 5B7BAC: using guessed type int dword_5B7BAC;
// 6AEBBC: using guessed type int dword_6AEBBC;
// 6AEBC4: using guessed type int dword_6AEBC4;

//----- (00589315) --------------------------------------------------------
int __cdecl strangefunc1Op(int a1)
{
    int v1; // eax
    int v2; // eax

    hHeap = HeapCreate(a1 == 0, 0x1000u, 0);
    if (!hHeap)
        return 0;
    v1 = sub_5891CD();
    dword_6AEBC4 = v1;
    if (v1 == 3)
    {
        v2 = __sbh_heap_init(1016);
    }
    else
    {
        if (v1 != 2)
            return 1;
        v2 = sub_589EB9();
    }
    if (!v2)
    {
        HeapDestroy(hHeap);
        return 0;
    }
    return 1;
}
// 5891CD: using guessed type int sub_5891CD(void);
// 589372: using guessed type _DWORD __cdecl __sbh_heap_init(_DWORD);
// 589EB9: using guessed type int sub_589EB9(void);
// 6AEBC4: using guessed type int dword_6AEBC4;

//----- (0058A7FD) --------------------------------------------------------
int sub_58A7FD()
{
    return flsall(1);
}
// 58A806: using guessed type _DWORD __cdecl flsall(_DWORD);

//----- (0058B327) --------------------------------------------------------
int* __cdecl sub_58B327(unsigned int a1)
{
    int v1; // esi
    char* v2; // eax
    int* result; // eax

    v1 = 0;
    *__doserrno() = a1;
    v2 = (char*)&unk_5B7BB0;
    do
    {
        if (a1 == *(_DWORD*)v2)
        {
            result = _errno();
            *result = dword_5B7BB4[2 * v1];
            return result;
        }
        v2 += 8;
        ++v1;
    } while (v2 < asc_5B7D18);
    if (a1 < 0x13 || a1 > 0x24)
    {
        if (a1 < 0xBC || a1 > 0xCA)
        {
            result = _errno();
            *result = 22;
        }
        else
        {
            result = _errno();
            *result = 8;
        }
    }
    else
    {
        result = _errno();
        *result = 13;
    }
    return result;
}

//----- (0058D88D) --------------------------------------------------------
void __usercall __noreturn sub_58D88D(EXCEPTION_POINTERS* a1, int a2, int a3, int a4)
{
    int v4; // [esp-Ch] [ebp-24h] BYREF
    int v5; // [esp-8h] [ebp-20h]
    int v6; // [esp-4h] [ebp-1Ch]
    CPPEH_RECORD ms_exc; // [esp+0h] [ebp-18h]

    ms_exc.registration.ScopeTable = stru_597740;
    ms_exc.registration.ExceptionHandler = _except_handler3;
    ms_exc.registration.Next = (struct _EH3_EXCEPTION_REGISTRATION*)NtCurrentTeb()->NtTib.ExceptionList;
    ms_exc.exc_ptr = a1;
    v6 = a2;
    v5 = a4;
    v4 = a3;
    ms_exc.old_esp = (DWORD)&v4;
    ms_exc.registration.TryLevel = 0;
    if (off_5B7EC0)
        off_5B7EC0(
            v4,
            v5,
            v6,
            ms_exc.old_esp,
            ms_exc.exc_ptr,
            ms_exc.registration.Next,
            ms_exc.registration.ExceptionHandler,
            ms_exc.registration.ScopeTable,
            1);
    ms_exc.registration.TryLevel = -1;
    terminate();
}
// 597740: using guessed type _SCOPETABLE_ENTRY stru_597740[2];
// 5B7EC0: using guessed type int (__cdecl *off_5B7EC0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (0058DA08) --------------------------------------------------------
SIZE_T __cdecl sub_58DA08(LPCVOID lpMem)
{
    int v1; // esi
    bool v2; // zf
    unsigned __int8* v3; // eax
    void** v5; // [esp+Ch] [ebp-2Ch] BYREF
    unsigned __int8* v6; // [esp+10h] [ebp-28h]
    unsigned int v7; // [esp+14h] [ebp-24h] BYREF
    int v8; // [esp+18h] [ebp-20h]
    int v9; // [esp+1Ch] [ebp-1Ch]
    CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

    if (dword_6AEBC4 == 3)
    {
        _lock(9);
        ms_exc.registration.TryLevel = 0;
        v9 = __sbh_find_block(lpMem);
        if (v9)
        {
            v1 = *((_DWORD*)lpMem - 1) - 9;
            v8 = v1;
        }
        else
        {
            v1 = v8;
        }
        ms_exc.registration.TryLevel = -1;
        _unlock(9);
        v2 = v9 == 0;
    }
    else
    {
        if (dword_6AEBC4 != 2)
            return HeapSize(hHeap, 0, lpMem);
        _lock(9);
        ms_exc.registration.TryLevel = 1;
        v3 = (unsigned __int8*)sub_58A115((unsigned int)lpMem, &v5, &v7);
        v6 = v3;
        if (v3)
        {
            v1 = 16 * *v3;
            v8 = v1;
        }
        else
        {
            v1 = v8;
        }
        ms_exc.registration.TryLevel = -1;
        _unlock(9);
        v2 = v6 == 0;
    }
    if (v2)
        return HeapSize(hHeap, 0, lpMem);
    return v1;
}
// 588EF8: using guessed type _DWORD __cdecl _lock(_DWORD);
// 588F59: using guessed type _DWORD __cdecl _unlock(_DWORD);
// 5893BA: using guessed type _DWORD __cdecl __sbh_find_block(_DWORD);
// 6AEBC4: using guessed type int dword_6AEBC4;

//----- (0058E137) --------------------------------------------------------
int* __cdecl sub_58E137(DWORD NumberOfBytesWritten)
{
    int v1; // ecx
    int* result; // eax
    int v3; // esi
    char* v4; // edi
    const char** v5; // esi
    HANDLE v6; // eax
    const char* v7; // [esp-14h] [ebp-1B8h]
    DWORD v8; // [esp-10h] [ebp-1B4h]
    DWORD* v9; // [esp-Ch] [ebp-1B0h]
    int v10; // [esp-8h] [ebp-1ACh]
    CHAR Filename[260]; // [esp+0h] [ebp-1A4h] BYREF
    char Destination[160]; // [esp+104h] [ebp-A0h] BYREF
    int savedregs; // [esp+1A4h] [ebp+0h] BYREF

    v1 = 0;
    result = dword_5B8168;
    do
    {
        if (NumberOfBytesWritten == *result)
            break;
        result += 2;
        ++v1;
    } while (result < (int*)&unk_5B81F8);
    v3 = 2 * v1;
    if (NumberOfBytesWritten == dword_5B8168[2 * v1])
    {
        result = (int*)dword_5C6118;
        if (dword_5C6118 == 1 || !dword_5C6118 && dword_5B54B4 == 1)
        {
            v5 = (const char**)&(&off_5B816C)[v3];
            v10 = 0;
            v9 = &NumberOfBytesWritten;
            v8 = strlen(*v5);
            v7 = *v5;
            v6 = GetStdHandle(0xFFFFFFF4);
            result = (int*)WriteFile(v6, v7, v8, &NumberOfBytesWritten, 0);
        }
        else if (NumberOfBytesWritten != 252)
        {
            if (!GetModuleFileNameA(0, Filename, 0x104u))
                strcpy(Filename, "<program name unknown>");
            v4 = Filename;
            if (strlen(Filename) + 1 > 0x3C)
            {
                v4 = (char*)&savedregs + strlen(Filename) - 479;
                strncpy(v4, "...", 3u);
            }
            strcpy(Destination, "Runtime Error!\n\nProgram: ");
            strcat(Destination, v4);
            strcat(Destination, "\n\n");
            strcat(Destination, (&off_5B816C)[v3]);
            result = (int*)__crtMessageBoxA(Destination, "Microsoft Visual C++ Runtime Library", 73744);
        }
    }
    return result;
}
// 590695: using guessed type _DWORD __cdecl __crtMessageBoxA(_DWORD, _DWORD, _DWORD);
// 5B54B4: using guessed type int dword_5B54B4;
// 5B8168: using guessed type int dword_5B8168[];
// 5B816C: using guessed type char *off_5B816C;
// 5C6118: using guessed type int dword_5C6118;

//----- (0058E35A) --------------------------------------------------------
LONG(__stdcall* sub_58E35A())(struct _EXCEPTION_POINTERS* ExceptionInfo)
{
    LONG(__stdcall * result)(struct _EXCEPTION_POINTERS*); // eax

    result = SetUnhandledExceptionFilter(__CxxUnhandledExceptionFilter);
    lpfn = result;
    return result;
}

//----- (0058E36B) --------------------------------------------------------
LPTOP_LEVEL_EXCEPTION_FILTER sub_58E36B()
{
    return SetUnhandledExceptionFilter(lpfn);
}

//----- (0058EA7A) --------------------------------------------------------
int __cdecl sub_58EA7A(int a1, int a2)
{
    char v3[12]; // [esp+0h] [ebp-Ch] BYREF

    __strgtold12(v3, &a2, a2, 0, 0, 0, 0);
    return sub_58EA4E((int)v3, a1);
}
// 590A7E: using guessed type _DWORD __cdecl __strgtold12(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (0058EA4E) --------------------------------------------------------
int __cdecl sub_58EA4E(int a1, int a2)
{
    return _ld12cvt(a1, a2, &unk_5B8200);
}
// 58E8E2: using guessed type _DWORD __cdecl _ld12cvt(_DWORD, _DWORD, _DWORD);

//----- (0058EA64) --------------------------------------------------------
int __cdecl sub_58EA64(int a1, int a2)
{
    return _ld12cvt(a1, a2, &unk_5B8218);
}
// 58E8E2: using guessed type _DWORD __cdecl _ld12cvt(_DWORD, _DWORD, _DWORD);

//----- (0058EAA7) --------------------------------------------------------
int __cdecl sub_58EAA7(int a1, int a2)
{
    char v3[12]; // [esp+0h] [ebp-Ch] BYREF

    __strgtold12(v3, &a2, a2, 0, 0, 0, 0);
    return sub_58EA64((int)v3, a1);
}
// 590A7E: using guessed type _DWORD __cdecl __strgtold12(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (0058ECC4) --------------------------------------------------------
int __cdecl sub_58ECC4(int a1, int a2)
{
    unsigned int v2; // esi
    int result; // eax
    void* v4; // [esp+14h] [ebp-20h]
    size_t v5; // [esp+18h] [ebp-1Ch]

    v2 = a2 * a1;
    v5 = a2 * a1;
    if ((unsigned int)(a2 * a1) <= 0xFFFFFFE0)
    {
        if (!v2)
            v2 = 1;
        v2 = (v2 + 15) & 0xFFFFFFF0;
    }
    while (1)
    {
        v4 = 0;
        if (v2 <= 0xFFFFFFE0)
        {
            if (dword_6AEBC4 == 3)
            {
                if (v5 > dword_6AEBBC)
                    goto LABEL_14;
                _lock(9);
                v4 = (void*)__sbh_alloc_block(v5);
                _unlock(9);
                if (v4)
                {
                    memset(v4, 0, v5);
                    goto LABEL_14;
                }
            LABEL_15:
                v4 = HeapAlloc(hHeap, 8u, v2);
                goto LABEL_16;
            }
            if (dword_6AEBC4 == 2 && v2 <= dword_5B7BAC)
            {
                _lock(9);
                v4 = (void*)sub_58A1B1(v2 >> 4);
                _unlock(9);
                if (!v4)
                    goto LABEL_15;
                memset(v4, 0, v2);
            }
        LABEL_14:
            if (v4)
                return (int)v4;
            goto LABEL_15;
        }
    LABEL_16:
        if (v4 || !dword_5C61B8)
            return (int)v4;
        result = _callnewh(v2);
        if (!result)
            return result;
    }
}
// 588EF8: using guessed type _DWORD __cdecl _lock(_DWORD);
// 588F59: using guessed type _DWORD __cdecl _unlock(_DWORD);
// 58970E: using guessed type _DWORD __cdecl __sbh_alloc_block(_DWORD);
// 5B7BAC: using guessed type int dword_5B7BAC;
// 6AEBBC: using guessed type int dword_6AEBBC;
// 6AEBC4: using guessed type int dword_6AEBC4;

//----- (0057CCCF) --------------------------------------------------------
int __cdecl sub_57CCCF(int a1)
{
    int result; // eax

    result = sub_56268C(*(_DWORD*)(a1 + 48));
    if (*(_DWORD*)(a1 + 44))
        result = sub_56268C(*(_DWORD*)(a1 + 44));
    return result;
}

//----- (0057CC62) --------------------------------------------------------
int __cdecl sub_57CC62(_DWORD* a1)
{
    unsigned int i; // [esp+0h] [ebp-4h]

    for (i = 0; i < a1[10]; ++i)
        sub_56268C(*(_DWORD*)(12 * (a1[10] - 1) + a1[12] - 12 * i + 8));
    sub_56268C(a1[12]);
    return sub_56268C(a1[11]);
}

//----- (0057C507) --------------------------------------------------------
int __cdecl sub_57C507(_DWORD* a1, const void** a2)
{
    int result; // eax

    qmemcpy(a1, *a2, 0x2Cu);
    *a2 = (char*)*a2 + 44;
    a1[11] = 0;
    result = *((unsigned __int16*)a1 + 20);
    switch ((__int16)result)
    {
    case 0:
    case 6:
    case 7:
    case 8:
    case 11:
    case 12:
        a1[11] = 0;
        a1[12] = sub_5625B6(*a1);
        qmemcpy((void*)a1[12], *a2, *a1);
        result = (int)a2;
        *a2 = (char*)*a2 + *a1;
        break;
    case 1:
        a1[11] = sub_5625B6(32);
        qmemcpy((void*)a1[11], *a2, 0x20u);
        *a2 = (char*)*a2 + 32;
        a1[12] = sub_5625B6(0);
        result = (int)*a2;
        *a2 = *a2;
        break;
    case 2:
        a1[11] = sub_5625B6(512);
        if (!a1[11])
            fatalError("Palette Malloc failed, MemLoadR2Texture(); File - preproc.c\n");
        qmemcpy((void*)a1[11], *a2, 0x200u);
        *a2 = (char*)*a2 + 512;
        a1[12] = sub_5625B6(*((unsigned __int16*)a1 + 19) * *((unsigned __int16*)a1 + 18));
        qmemcpy((void*)a1[12], *a2, *((unsigned __int16*)a1 + 19) * *((unsigned __int16*)a1 + 18));
        result = (int)*a2 + *((unsigned __int16*)a1 + 19) * *((unsigned __int16*)a1 + 18);
        *a2 = (const void*)result;
        break;
    case 14:
        a1[12] = 0;
        break;
    case 15:
        a1[11] = 0;
        a1[12] = sub_5625B6(*((unsigned __int16*)a1 + 19) * *((unsigned __int16*)a1 + 18));
        qmemcpy((void*)a1[12], *a2, *((unsigned __int16*)a1 + 19) * *((unsigned __int16*)a1 + 18));
        result = (int)*a2 + *((unsigned __int16*)a1 + 19) * *((unsigned __int16*)a1 + 18);
        *a2 = (const void*)result;
        break;
    default:
        a1[11] = 0;
        a1[12] = sub_5625B6(2 * *((unsigned __int16*)a1 + 19) * *((unsigned __int16*)a1 + 18));
        qmemcpy((void*)a1[12], *a2, 2 * *((unsigned __int16*)a1 + 19) * *((unsigned __int16*)a1 + 18));
        result = (int)*a2 + 2 * *((unsigned __int16*)a1 + 19) * *((unsigned __int16*)a1 + 18);
        *a2 = (const void*)result;
        break;
    }
    return result;
}

//----- (0057C42A) --------------------------------------------------------
int __cdecl sub_57C42A(int a1, const void** a2)
{
    int result; // eax
    unsigned int i; // [esp+8h] [ebp-4h]

    qmemcpy((void*)a1, *a2, 0x2Cu);
    *a2 = (char*)*a2 + 44;
    writeDebug("Loading R2 section :- %s", (const char*)(a1 + 4));
    *(_DWORD*)(a1 + 44) = sub_5625B6(12 * *(_DWORD*)(a1 + 36));
    qmemcpy(*(void**)(a1 + 44), *a2, 12 * *(_DWORD*)(a1 + 36));
    *a2 = (char*)*a2 + 12 * *(_DWORD*)(a1 + 36);
    result = sub_5625B6(12 * *(_DWORD*)(a1 + 40));
    *(_DWORD*)(a1 + 48) = result;
    for (i = 0; i < *(_DWORD*)(a1 + 40); ++i)
    {
        sub_57C3A0(12 * i + *(_DWORD*)(a1 + 48), a2);
        result = i + 1;
    }
    return result;
}

//----- (0057A38C) --------------------------------------------------------
int __cdecl sub_57A38C(int a1, int a2, int a3)
{
    int result; // eax

    result = a3;
    if (a3 == 2)
        result = sub_57A433(a1, *(_DWORD**)(a1 + 424));
    return result;
}

//----- (00579DED) --------------------------------------------------------
int __cdecl sub_579DED(int a1, int a2)
{
    return a2;
}

//----- (00579B75) --------------------------------------------------------
int __cdecl sub_579B75(int a1)
{
    LARGE_INTEGER PerformanceCount; // [esp+0h] [ebp-8h] BYREF

    QueryPerformanceCounter(&PerformanceCount);
    dword_60ED20[a1] = PerformanceCount.LowPart;
    dword_60EDA0[a1] += dword_60ED20[a1];
    ++dword_60ED40[a1];
    return dword_60ED20[a1];
}
// 60ED20: using guessed type int dword_60ED20[];

//----- (005713A1) --------------------------------------------------------
void __cdecl sub_5713A1(int a1, int a2, int a3)
{
    float v3; // [esp+0h] [ebp-40h]
    float v4; // [esp+4h] [ebp-3Ch]
    float v5; // [esp+8h] [ebp-38h]
    int v6; // [esp+Ch] [ebp-34h]
    int v7; // [esp+10h] [ebp-30h]
    int v8; // [esp+14h] [ebp-2Ch]
    _DWORD* v9; // [esp+1Ch] [ebp-24h]
    unsigned int* v10; // [esp+20h] [ebp-20h]
    unsigned int j; // [esp+24h] [ebp-1Ch]
    int v12; // [esp+28h] [ebp-18h]
    unsigned int i; // [esp+2Ch] [ebp-14h]
    unsigned int k; // [esp+2Ch] [ebp-14h]
    float v15; // [esp+30h] [ebp-10h]
    float v16; // [esp+34h] [ebp-Ch]
    float v17; // [esp+34h] [ebp-Ch]
    float v18; // [esp+38h] [ebp-8h]
    float* v19; // [esp+3Ch] [ebp-4h]

    if (((*(_DWORD*)(a2 + 112) >> 14) & 1) != 0)
    {
        *(_DWORD*)(a2 + 8) = *(_DWORD*)(a1 + 72);
        *(float*)(a3 + 48) = -(*(float*)(*(_DWORD*)(a2 + 16) + 48) - *(float*)a3);
        *(float*)(a3 + 52) = -(*(float*)(*(_DWORD*)(a2 + 16) + 52) - *(float*)(a3 + 4));
        *(float*)(a3 + 56) = -(*(float*)(*(_DWORD*)(a2 + 16) + 56) - *(float*)(a3 + 8));
        v16 = pointVectorLength((float*)(a3 + 48));
        v17 = *(float*)(a3 + 28) + *(float*)(a2 + 24) - v16;
        if (v17 > 0.0 && *(float*)(a3 + 28) != 0.0)
        {
            sub_52CB4C((float*)(a3 + 48), (float*)(a3 + 48), *(float**)(a2 + 20));
            v15 = 1.0 / *(float*)(a3 + 28);
            v5 = (float)*(int*)(a3 + 16);
            *(_DWORD*)(a3 + 36) = (__int64)(v5 * 256.0 * v15);
            v4 = (float)*(int*)(a3 + 20);
            *(_DWORD*)(a3 + 40) = (__int64)(v4 * 256.0 * v15);
            v3 = (float)*(int*)(a3 + 24);
            *(_DWORD*)(a3 + 44) = (__int64)(v3 * 256.0 * v15);
            v19 = *(float**)(a2 + 120);
            for (i = 0; i < *(_DWORD*)(a2 + 116); ++i)
            {
                dword_658920[3 * i] = 0;
                dword_658924[3 * i] = 0;
                dword_658928[3 * i] = 0;
                v18 = *(float*)(a3 + 28) - sub_53BF3D(v19, (float*)(a3 + 48));
                if (v18 > 0.0)
                {
                    v12 = (__int64)(v18 * 256.0);
                    dword_658920[3 * i] += (v12 * *(_DWORD*)(a3 + 36)) >> 16;
                    dword_658924[3 * i] += (v12 * *(_DWORD*)(a3 + 40)) >> 16;
                    dword_658928[3 * i] += (v12 * *(_DWORD*)(a3 + 44)) >> 16;
                }
                v19 += 4;
            }
            v10 = *(unsigned int**)(a2 + 140);
            for (j = 0; j < *(_DWORD*)(a2 + 128); ++j)
            {
                v9 = (_DWORD*)v10[3];
                for (k = 0; k < *v10; ++k)
                {
                    v7 = dword_658920[3 * *v9] + (unsigned __int8)BYTE2(v9[1]);
                    v6 = dword_658924[3 * *v9] + (unsigned __int8)BYTE1(v9[1]);
                    v8 = dword_658928[3 * *v9] + (unsigned __int8)v9[1];
                    if (v7 > 255)
                        LOBYTE(v7) = -1;
                    if (v6 > 255)
                        LOBYTE(v6) = -1;
                    if (v8 > 255)
                        LOBYTE(v8) = -1;
                    v9[1] = ((unsigned __int8)HIBYTE(v9[1]) << 24)
                        + ((unsigned __int8)v7 << 16)
                        + ((unsigned __int8)v6 << 8)
                        + (unsigned __int8)v8;
                    v9 += 4;
                }
                v10 += 5;
            }
        }
    }
}
// 658920: using guessed type int dword_658920[];
// 658924: using guessed type int dword_658924[];

//----- (005712EC) --------------------------------------------------------
unsigned int* __cdecl sub_5712EC(unsigned int* a1)
{
    unsigned int* result; // eax
    unsigned int v2; // [esp+0h] [ebp-8h]
    unsigned int v3; // [esp+0h] [ebp-8h]
    unsigned int i; // [esp+4h] [ebp-4h]
    unsigned int j; // [esp+4h] [ebp-4h]

    result = a1;
    if (*a1)
    {
        v2 = a1[1];
        for (i = 0; i < *a1; ++i)
        {
            emptyFunction18();
            v2 += 164;
        }
        result = a1;
        v3 = a1[3];
        for (j = 0; j < a1[2]; ++j)
        {
            emptyFunction18();
            result = (unsigned int*)(v3 + 164);
            v3 += 164;
        }
    }
    return result;
}

//----- (00570FA0) --------------------------------------------------------
_DWORD* __cdecl sub_570FA0(int a1, int a2, int* a3, unsigned __int8 a4, unsigned __int8 a5, unsigned __int8 a6)
{
    _DWORD* result; // eax
    int v7; // [esp+0h] [ebp-3Ch]
    int v8; // [esp+4h] [ebp-38h]
    int v9; // [esp+8h] [ebp-34h]
    _DWORD* v10; // [esp+10h] [ebp-2Ch]
    unsigned int* v11; // [esp+14h] [ebp-28h]
    unsigned int j; // [esp+18h] [ebp-24h]
    int v13; // [esp+1Ch] [ebp-20h]
    unsigned int i; // [esp+20h] [ebp-1Ch]
    unsigned int k; // [esp+20h] [ebp-1Ch]
    float v16; // [esp+24h] [ebp-18h]
    int v17[4]; // [esp+28h] [ebp-14h] BYREF
    int v18; // [esp+38h] [ebp-4h]

    result = (_DWORD*)a2;
    if (((*(_DWORD*)(a2 + 112) >> 14) & 1) != 0 && *(_DWORD*)(a2 + 124))
    {
        *(_DWORD*)(a2 + 8) = *(_DWORD*)(a1 + 72);
        v17[0] = *a3;
        v17[1] = a3[1];
        v17[2] = a3[2];
        sub_52CB4C((float*)v17, (float*)v17, *(float**)(a2 + 20));
        sub_403220((float*)v17);
        v18 = *(_DWORD*)(a2 + 120);
        for (i = 0; i < *(_DWORD*)(a2 + 116); ++i)
        {
            v16 = sub_4031F0((float*)v17, (float*)(16 * i + *(_DWORD*)(a2 + 124)));
            if (v16 <= 0.0)
                v13 = 0;
            else
                v13 = (__int64)(v16 * 255.0);
            dword_658920[3 * i] = (v13 * a4) >> 8;
            dword_658924[3 * i] = (v13 * a5) >> 8;
            dword_658928[3 * i] = (v13 * a6) >> 8;
            v18 += 16;
        }
        result = (_DWORD*)a2;
        v11 = *(unsigned int**)(a2 + 140);
        for (j = 0; j < *(_DWORD*)(a2 + 128); ++j)
        {
            v10 = (_DWORD*)v11[3];
            for (k = 0; k < *v11; ++k)
            {
                v8 = dword_658920[3 * *v10] + (unsigned __int8)BYTE2(v10[1]);
                v7 = dword_658924[3 * *v10] + (unsigned __int8)BYTE1(v10[1]);
                v9 = dword_658928[3 * *v10] + (unsigned __int8)v10[1];
                if (v8 > 255)
                    LOBYTE(v8) = -1;
                if (v7 > 255)
                    LOBYTE(v7) = -1;
                if (v9 > 255)
                    LOBYTE(v9) = -1;
                v10[1] = ((unsigned __int8)HIBYTE(v10[1]) << 24)
                    + ((unsigned __int8)v8 << 16)
                    + ((unsigned __int8)v7 << 8)
                    + (unsigned __int8)v9;
                v10 += 4;
            }
            result = v11 + 5;
            v11 += 5;
        }
    }
    return result;
}
// 658920: using guessed type int dword_658920[];
// 658924: using guessed type int dword_658924[];

//----- (0056EC1B) --------------------------------------------------------
int __cdecl sub_56EC1B(const char* a1)
{
    int v2[31]; // [esp+4h] [ebp-180h] BYREF
    char Buffer[256]; // [esp+80h] [ebp-104h] BYREF
    int v4; // [esp+180h] [ebp-4h]

    sprintf(Buffer, "screens\\%s", a1);
    memset(v2, 0, sizeof(v2));
    v2[0] = 124;
    (*(void(__thiscall**)(int, int, _DWORD, int*, int, _DWORD))(*(_DWORD*)dword_5BFFA8 + 100))(
        dword_5BFFA8,
        dword_5BFFA8,
        0,
        v2,
        33,
        0);
    v4 = v2[9];
    sub_56F5F2(Buffer, v2[9]);
    return (*(int(__thiscall**)(int, int, _DWORD))(*(_DWORD*)dword_5BFFA8 + 128))(dword_5BFFA8, dword_5BFFA8, 0);
}
// 5BFFA8: using guessed type int dword_5BFFA8;

//----- (0056ABE8) --------------------------------------------------------
unsigned int sub_56ABE8()
{
    unsigned int result; // eax
    void* v1; // eax
    void* v2; // eax
    unsigned int v3; // [esp-4h] [ebp-1Ch]
    unsigned int v4; // [esp-4h] [ebp-1Ch]
    char v5[4]; // [esp+8h] [ebp-10h] BYREF
    int v6; // [esp+Ch] [ebp-Ch]
    char v7[8]; // [esp+10h] [ebp-8h] BYREF

    v6 = 0;
    do
    {
        sub_56AAA8(v7, 4u);
        sub_56AAA8(v5, 4u);
        v7[4] = 0;
        if (!strcmp(v7, aFont))
        {
            result = sub_56AD90();
        }
        else if (!strcmp(v7, aVram))
        {
            result = sub_56B0EA();
        }
        else if (!strcmp(v7, aTpag))
        {
            result = sub_56B0F4();
        }
        else if (!strcmp(v7, aSprs))
        {
            result = sub_56B048();
        }
        else if (!strcmp(v7, aPics))
        {
            result = sub_56AFF3();
        }
        else if (!strcmp(v7, aData))
        {
            result = sub_56AE9F();
        }
        else if (!strcmp(v7, aSmpl))
        {
            result = sub_56AF9D();
        }
        else if (!strcmp(v7, aMods))
        {
            v3 = *(_DWORD*)v5;
            v1 = (void*)maybe_allocateMemory(0);
            sub_56AAA8(v1, v3);
            result = writeDebug("Model Loader NOT implemented - %d", *(_DWORD*)v5);
        }
        else
        {
            result = 0;
            if (!strcmp(v7, aMdec))
            {
                v4 = *(_DWORD*)v5;
                v2 = (void*)maybe_allocateMemory(0);
                sub_56AAA8(v2, v4);
                result = writeDebug("MDEC Loader NOT implemented");
            }
            else
            {
                v6 = 1;
            }
        }
    } while (!v6);
    if (strcmp(v7, aStop_0))
        result = writeDebug("\nUnknown PACK Header '%s'", v7);
    return result;
}

//----- (0056A9D0) --------------------------------------------------------
size_t __cdecl sub_56A9D0(const char* a1)
{
    int ElementSize; // [esp+0h] [ebp-104h]
    char Buffer[256]; // [esp+4h] [ebp-100h] BYREF

    sprintf(Buffer, "%s\\%s", (const char*)dword_622934, a1);
    dword_622938 = fopen(Buffer, aRb_6);
    if (!dword_622938)
        writeDebug("Cannot Open File %s", Buffer);
    fseek(dword_622938, 0, 2);
    ElementSize = ftell(dword_622938);
    fseek(dword_622938, 0, 0);
    dword_62292C = sub_5625B6(ElementSize);
    dword_622930 = (void*)dword_62292C;
    return readFromFile((void*)dword_62292C, ElementSize, 1u, dword_622938);
}
// 62292C: using guessed type int dword_62292C;
// 622934: using guessed type int dword_622934;

//----- (0056AADA) --------------------------------------------------------
int sub_56AADA()
{
    fclose(dword_622938);
    return sub_56268C(dword_62292C);
}
// 62292C: using guessed type int dword_62292C;

//----- (004451E4) --------------------------------------------------------
void sub_4451E4()
{
    if (g_UseGameSpy)
        someCloseGame();
    if (sub_43FCB4())
    {
        dword_6234D4 = 0;
        sub_45E3F7(91, 255);
        dword_604718 = sub_439511(dword_604718, 15.0);
        *(_DWORD*)dword_6046F0 = 2;
    }
    else
    {
        dword_604728 = sub_44D431(dword_604728, dword_5AB1D8);
        if (dword_6234D4 == 4)
        {
            sub_45E3F7(118, 255);
            if (dword_604728)
            {
                if (dword_604728 == 1)
                {
                    dword_6049F8 = 0;
                    strcpy(&byte_6048DC, byte_60498E);
                    Count = strlen(&byte_6048DC);
                    dword_604728 = 0;
                    *(_DWORD*)dword_6046F0 = 5;
                }
            }
            else
            {
                dword_6049F8 = 1;
                *(_DWORD*)dword_6046F0 = 4;
            }
            dword_6234D4 = 0;
        }
    }
}
// 5B9F50: using guessed type int g_UseGameSpy;
// 604728: using guessed type int dword_604728;
// 6049F8: using guessed type int dword_6049F8;
// 6234D4: using guessed type int dword_6234D4;

//----- (0051EEEE) --------------------------------------------------------
unsigned int __cdecl sub_51EEEE(HWND hDlg)
{
    unsigned int result; // eax
    HWND hWnd; // [esp+4h] [ebp-10h]
    void* v3; // [esp+8h] [ebp-Ch]
    unsigned int wParam; // [esp+Ch] [ebp-8h]
    unsigned int v5; // [esp+10h] [ebp-4h]

    hWnd = GetDlgItem(hDlg, 1004);
    v5 = SendMessageA(hWnd, 0x18Bu, 0, 0);
    for (wParam = 0; ; ++wParam)
    {
        result = wParam;
        if (wParam >= v5)
            break;
        v3 = (void*)SendMessageA(hWnd, 0x199u, wParam, 0);
        if (v3)
            sub_585E40(v3);
    }
    return result;
}

//----- (005891CD) --------------------------------------------------------
int sub_5891CD()
{
    int result; // eax
    CHAR* i; // ecx
    char v2; // al
    CHAR* v3; // eax
    CHAR* j; // ecx
    char v5; // al
    char* v6; // eax
    const char* v7; // eax
    const char* v8; // ecx
    CHAR Buffer[4240]; // [esp+4h] [ebp-122Ch] BYREF
    CHAR Filename[260]; // [esp+1094h] [ebp-19Ch] BYREF
    struct _OSVERSIONINFOA VersionInformation; // [esp+1198h] [ebp-98h] BYREF
    char v12[4]; // [esp+122Ch] [ebp-4h] BYREF

    VersionInformation.dwOSVersionInfoSize = 148;
    if (GetVersionExA(&VersionInformation)
        && VersionInformation.dwPlatformId == 2
        && VersionInformation.dwMajorVersion >= 5)
    {
        return 1;
    }
    if (!GetEnvironmentVariableA("__MSVCRT_HEAP_SELECT", Buffer, 0x1090u))
        goto LABEL_29;
    for (i = Buffer; *i; ++i)
    {
        v2 = *i;
        if (*i >= 97 && v2 <= 122)
            *i = v2 - 32;
    }
    if (!strncmp("__GLOBAL_HEAP_SELECTED", Buffer, 0x16u))
    {
        v3 = Buffer;
    }
    else
    {
        GetModuleFileNameA(0, Filename, 0x104u);
        for (j = Filename; *j; ++j)
        {
            v5 = *j;
            if (*j >= 97 && v5 <= 122)
                *j = v5 - 32;
        }
        v3 = strstr(Buffer, Filename);
    }
    if (!v3)
        goto LABEL_29;
    v6 = strchr(v3, 44);
    if (!v6)
        goto LABEL_29;
    v7 = v6 + 1;
    v8 = v7;
    while (*v8)
    {
        if (*v8 == 59)
            *v8 = 0;
        else
            ++v8;
    }
    result = strtol(v7, 0, 10);
    if (result != 2 && result != 3 && result != 1)
    {
    LABEL_29:
        sub_5891A0((int)v12);
        result = 3 - (v12[0] < 6u);
    }
    return result;
}

//----- (0056F5F2) --------------------------------------------------------
FILE* __cdecl sub_56F5F2(char* FileName, int a2)
{
    FILE* result; // eax
    int j; // [esp+0h] [ebp-2Ch]
    int i; // [esp+4h] [ebp-28h]
    char v6; // [esp+Ch] [ebp-20h] BYREF
    char v7; // [esp+Dh] [ebp-1Fh]
    char v8; // [esp+Eh] [ebp-1Eh]
    int Buffer[4]; // [esp+10h] [ebp-1Ch] BYREF
    __int16 v10; // [esp+20h] [ebp-Ch]
    FILE* Stream; // [esp+24h] [ebp-8h]
    int v12; // [esp+28h] [ebp-4h]

    v12 = 614400;
    result = fopen(FileName, aWb_1);
    Stream = result;
    if (result)
    {
        Buffer[0] = 0x20000;
        Buffer[1] = 0;
        Buffer[2] = 0;
        Buffer[3] = 31457920;
        v10 = 8216;
        writeInFile(Buffer, 1u, 0x12u, Stream);
        for (i = 0; i < 480; ++i)
        {
            for (j = 0; j < 640; ++j)
            {
                v8 = 8 * ((*(__int16*)a2 >> g_RedBitsShift) & 0x1F);
                if (g_GreenBits == 6)
                    v7 = 4 * ((*(__int16*)a2 >> g_GreenBitsShift) & 0x3F);
                else
                    v7 = 8 * ((*(__int16*)a2 >> g_GreenBitsShift) & 0x1F);
                v6 = 8 * ((*(__int16*)a2 >> g_BlueBitsShift) & 0x1F);
                writeInFile(&v6, 1u, 3u, Stream);
                a2 += 2;
            }
        }
        ++dword_5BFFB0;
        result = (FILE*)fclose(Stream);
    }
    return result;
}
// 5BFFB0: using guessed type int dword_5BFFB0;
// 622CE8: using guessed type __int16 g_GreenBits;
// 622CEC: using guessed type __int16 g_RedBitsShift;
// 622CEE: using guessed type __int16 g_GreenBitsShift;
// 622CF0: using guessed type __int16 g_BlueBitsShift;

//----- (0056AD90) --------------------------------------------------------
int sub_56AD90()
{
    int v1; // [esp+0h] [ebp-10h]
    int j; // [esp+4h] [ebp-Ch]
    int i; // [esp+8h] [ebp-8h]
    int v4; // [esp+Ch] [ebp-4h]

    sub_56AAA8(&dword_622C18, 4u);
    dword_622C10 = maybe_allocateMemory(780 * dword_622C18);
    sub_56AAA8((void*)dword_622C10, 780 * dword_622C18);
    v4 = dword_622C10;
    for (i = 0; i < dword_622C18; ++i)
    {
        for (j = 0; j < 93; ++j)
        {
            if (*(unsigned __int8*)(j + v4 + 640) == 255)
                LOBYTE(v1) = 0;
            else
                v1 = *(_DWORD*)(dword_622C58[*(unsigned __int8*)(j + v4 + 640)] + 4);
            *(_BYTE*)(j + v4 + 640) = v1;
        }
        *(_WORD*)(v4 + 776) = *(_WORD*)(dword_622C58[*(__int16*)(v4 + 776)] + 4);
        v4 += 780;
    }
    return sub_56B18C();
}
// 622C10: using guessed type int dword_622C10;
// 622C18: using guessed type int dword_622C18;

//----- (0056B0EA) --------------------------------------------------------
int sub_56B0EA()
{
    return sub_56B18C();
}

//----- (0056B0F4) --------------------------------------------------------
int sub_56B0F4()
{
    int v1; // [esp+0h] [ebp-Ch]
    char* v2; // [esp+4h] [ebp-8h]
    char* v3; // [esp+8h] [ebp-4h]

    v3 = (char*)dword_622930;
    v1 = 0;
    v2 = (char*)dword_622930;
    while (v1 < word_622C88)
    {
        dword_622C58[v1] = sub_56989C(256, 256, 2, 0, 1);
        sub_569ADA(dword_622C58[v1], (int)v2);
        v2 += 0x20000;
        ++v1;
    }
    dword_622930 = v3 + 0x200000;
    return sub_56B18C();
}
// 622C88: using guessed type __int16 word_622C88;

//----- (0056B048) --------------------------------------------------------
int sub_56B048()
{
    int i; // [esp+0h] [ebp-4h]

    sub_56AAA8(&dword_622C90, 4u);
    dword_622C8C = maybe_allocateMemory(12 * (dword_622C90 + 1));
    sub_56AAA8((void*)dword_622C8C, 12 * dword_622C90);
    for (i = 0; i < dword_622C90; ++i)
        *(_DWORD*)(dword_622C8C + 12 * i + 8) = dword_622C58[*(__int16*)(dword_622C8C + 12 * i + 6)];
    ++dword_622C90;
    return sub_56B18C();
}
// 622C8C: using guessed type int dword_622C8C;
// 622C90: using guessed type int dword_622C90;

//----- (0056AFF3) --------------------------------------------------------
unsigned int sub_56AFF3()
{
    unsigned int result; // eax
    int v1; // [esp+0h] [ebp-8h] BYREF
    unsigned int v2; // [esp+4h] [ebp-4h] BYREF

    result = sub_56AAA8(&v1, 4u);
    if (v1)
    {
        sub_56AAA8(&v2, 4u);
        dword_622C54 = maybe_allocateMemory(v2);
        sub_56AAA8((void*)dword_622C54, v2);
        result = sub_56B18C();
    }
    return result;
}
// 622C54: using guessed type int dword_622C54;

//----- (0056AE9F) --------------------------------------------------------
int sub_56AE9F()
{
    int v0; // eax
    int v2; // [esp+0h] [ebp-8h] BYREF
    int i; // [esp+4h] [ebp-4h]

    writeDebug("loading data");
    sub_56AAA8(&v2, 4u);
    dword_667E00 = maybe_allocateMemory(12 * v2);
    for (i = 0; i < v2; ++i)
    {
        sub_56AAA8((void*)(12 * i + dword_667E00), 4u);
        sub_56AAA8((void*)(dword_667E00 + 12 * i + 8), 4u);
        *(_DWORD*)(dword_667E00 + 12 * i) = (*(_DWORD*)(dword_667E00 + 12 * i) + 3) & 0xFFFFFFFC;
        ((void(__cdecl*)(void*, _DWORD))dword_667E20[i])(dword_622930, *(_DWORD*)(dword_667E00 + 12 * i));
        v0 = *(_DWORD*)(dword_667E00 + 12 * i) + 3;
        LOBYTE(v0) = v0 & 0xFC;
        dword_622930 = (char*)dword_622930 + v0;
    }
    return sub_56B18C();
}
// 667E00: using guessed type int dword_667E00;
// 667E20: using guessed type int dword_667E20[];

//----- (0056AF9D) --------------------------------------------------------
int sub_56AF9D()
{
    int v0; // eax
    int i; // [esp+0h] [ebp-Ch]
    int v3; // [esp+4h] [ebp-8h] BYREF
    int v4; // [esp+8h] [ebp-4h]

    v4 = 0;
    sub_56AAA8(&v3, 4u);
    for (i = 0; i < v3; ++i)
    {
        v0 = v4 + 3;
        LOBYTE(v0) = (v4 + 3) & 0xFC;
        dword_622930 = (char*)dword_622930 + v0;
    }
    return sub_56B18C();
}

//----- (005891A0) --------------------------------------------------------
char __cdecl sub_5891A0(int a1)
{
    HMODULE v1; // eax
    int v2; // ecx

    *(_DWORD*)a1 = 0;
    v1 = GetModuleHandleA(0);
    if (*(_WORD*)v1 == 23117)
    {
        v2 = *((_DWORD*)v1 + 15);
        if (v2)
        {
            v1 = (HMODULE)((char*)v1 + v2);
            *(_BYTE*)a1 = *((_BYTE*)v1 + 26);
            LOBYTE(v1) = *((_BYTE*)v1 + 27);
            *(_BYTE*)(a1 + 1) = (_BYTE)v1;
        }
    }
    return (char)v1;
}

//----- (0056B18C) --------------------------------------------------------
int sub_56B18C()
{
    int result; // eax

    result = sub_56271B(dword_62292C, (int)dword_622930);
    dword_62292C = result;
    return result;
}
// 62292C: using guessed type int dword_62292C;