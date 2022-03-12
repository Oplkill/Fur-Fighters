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

char textUseless1[16];
int dword_5B8D5C = 0; // weak
int dword_5B8D60 = 0; // weak

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