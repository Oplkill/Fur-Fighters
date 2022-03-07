#include "multiplayer.h"

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
#include "FakeDP.h"
#include "maybe.h"
#include "sounds.h"

CHAR aFurFight[] = "Fur Fight"; // idb
CHAR aYouMustEnterAV[] = "You must enter a valid player name."; // idb
CHAR aFurFight_0[] = "Fur Fight"; // idb
CHAR aErrorEnumerati[] = "Error enumerating DirectPlay games."; // idb
char aWaitForLobbyCo[26] = "Wait for Lobby Connection"; // weak
char aInternet[9] = "Internet"; // weak
char Str1[] = "Internet"; // idb
CHAR aStartSearch[] = "Start Search"; // idb
CHAR aSearching[] = "Searching..."; // idb
CHAR aFurFight_1[] = "Fur Fight"; // idb
CHAR aErrorEnumerati_0[] = "Error enumerating DirectPlay games."; // idb
CHAR aStartSearch_0[] = "Start Search"; // idb
CHAR aFurFight_2[] = "Fur Fight"; // idb
CHAR aUnableToJoinGa[] = "Unable to join game."; // idb
CHAR aFurFight_3[] = "Fur Fight"; // idb
CHAR aUnableToCreate[] = "Unable to create game."; // idb
char aLookingForGame[21] = "Looking for games..."; // weak
char aClickStartSear[78] = "Click Start Search to see a list of games.  Click Create to start a new game."; // weak
CHAR aFurFight_4[] = "Fur Fight"; // idb
CHAR aThereAreNoGame[] = "There are no games to join."; // idb

int g_MultiplayerMaxPlayers; // weak
LPCVOID pMem; // idb
void* off_5AEAF8 = &unk_5BBF70; // weak
_UNKNOWN unk_5BBF70; // weak
HANDLE hObject; // idb
int dword_5BAE80; // weak
int dword_5B94E8; // weak
int dword_5B9610; // weak
int dword_5B9970; // weak
int dword_5B9F08; // weak
int dword_66878C; // weak
int dword_594AF0 = 1881618624; // weak
__int16 word_5BACFC; // weak
int dword_5AEAFC = 4096; // weak
int dword_5AD580[] = { 14 }; // weak
char g_UselessVariableMultiplayerStage[256]; // idb

int __cdecl sub_520169(HWND hWnd); // idb
int __stdcall sub_51EA40(int a1, void* a2, size_t Size, int a4, int a5, HWND a6);
int __stdcall sub_51EB97(_DWORD* a1, void* a2, size_t Size, int a4, int a5, void** a6);
int __cdecl sub_51F3CC(HWND hDlg); // idb
int __cdecl sub_51F809(HWND hDlg); // idb
int __cdecl sub_51FC21(HWND hWnd); // idb
int sub_523CD4();
DWORD sub_5235C0();
INT_PTR __stdcall sub_51FF63(HWND, UINT, WPARAM, LPARAM); // idb
int __cdecl sub_5210FE(int* a1);
int __cdecl sub_5293FE(int a1, int* a2, unsigned int a3, int a4, unsigned int a5);
void __cdecl sub_52C6C3(int a1);
int sub_52C95B();

//----- (0051E347) --------------------------------------------------------
int __cdecl sub_51E347(HINSTANCE a1)
{
    int result; // eax
    FakeDP* v2; // [esp+4h] [ebp-20h]
    FakeDP* lpMem; // [esp+8h] [ebp-1Ch]

    hInstance = a1;
    memset(&unk_5B94F0, 0, 0x114u);
    dword_5B9600 = (int)&unk_5B94F0;
    lpMem = (FakeDP*)operator new(0xCu);
    if (lpMem)
    {
        FakeDP::FakeDP(lpMem);
        *(_DWORD*)lpMem = &off_594AE8;
        v2 = lpMem;
    }
    else
    {
        v2 = 0;
    }
    if ((int)FakeDP::EnumConnections(
        v2,
        (const struct _GUID*)&dword_594AF0,
        (int(__stdcall*)(const struct _GUID*, void*, unsigned int, const struct DPNAME*, unsigned int, void*))sub_51EB97,
        &pMem,
        0) >= 0)
    {
        if (v2)
            (*(void(__thiscall**)(FakeDP*))(*(_DWORD*)v2 + 4))(v2);
        result = 1;
    }
    else
    {
        if (v2)
            (*(void(__thiscall**)(FakeDP*))(*(_DWORD*)v2 + 4))(v2);
        result = 0;
    }
    return result;
}
// 51EB97: using guessed type int __stdcall sub_51EB97(int, int, size_t Size, int, int, int);
// 594238: using guessed type FakeDP *__thiscall FakeDP::FakeDP(FakeDP *__hidden this);
// 59423C: using guessed type _DWORD __thiscall FakeDP::EnumConnections(FakeDP *__hidden this, const struct _GUID *, int (__stdcall *)(const struct _GUID *, void *, unsigned int, const struct DPNAME *, unsigned int, void *), void *, unsigned int);
// 594AE8: using guessed type int (__stdcall *off_594AE8)(int);
// 594AF0: using guessed type int dword_594AF0;
// 5B9600: using guessed type int dword_5B9600;

//----- (005239D2) --------------------------------------------------------
void __cdecl unloadGame()
{
    int v0; // [esp+0h] [ebp-10h]
    int v1; // [esp+0h] [ebp-10h]
    int v2; // [esp+4h] [ebp-Ch]

    if (!dword_5BAE80)
        goto LABEL_9;
    FakeDP::DestroyPlayer((FakeDP*)dword_5BAE80, dword_668794);
    FakeDP::Close((FakeDP*)dword_5BAE80);
    if (dword_5BAE84)
    {
        sub_585E40((LPVOID)dword_5BAE84);
        dword_5BAE84 = 0;
    }
    if (ppv)
    {
        (*(void(__stdcall**)(LPVOID))(*(_DWORD*)ppv + 8))(ppv);
        ppv = 0;
    }
    v2 = dword_5BAE80;
    if (!dword_5BAE80)
    {
        v0 = 0;
    LABEL_9:
        sub_52354B(v0, v2);
        goto LABEL_10;
    }
    v1 = (**(int(__thiscall***)(int, int))dword_5BAE80)(dword_5BAE80, 1);
    sub_52354B(v1, v2);
LABEL_10:
    CoUninitialize();
}
// 523A7B: variable 'v0' is possibly undefined
// 523A7B: variable 'v2' is possibly undefined
// 52354B: using guessed type int __cdecl sub_52354B(_DWORD, _DWORD);
// 594218: using guessed type _DWORD __thiscall FakeDP::DestroyPlayer(FakeDP *__hidden this, unsigned int);
// 59422C: using guessed type _DWORD __thiscall FakeDP::Close(FakeDP *__hidden this);
// 5BAE80: using guessed type int dword_5BAE80;
// 5BAE84: using guessed type int dword_5BAE84;
// 668794: using guessed type int dword_668794;

//----- (00523838) --------------------------------------------------------
void sub_523838()
{
    DWORD v0; // [esp+8h] [ebp-4h]

    dword_5BAE98 = 0;
    dword_5BCFB4 = 0;
    dword_668788 = 0;
    emptyFunction0();
    if (off_5AEAF8 != &unk_5BBF70)
    {
        if (off_5AEAF8)
        {
            sub_585E40(off_5AEAF8);
            off_5AEAF8 = 0;
        }
        off_5AEAF8 = &unk_5BBF70;
        dword_5AEAFC = 4096;
    }
    if (hObject)
    {
        v0 = WaitForSingleObject(hObject, 0x7D0u);
        if (v0)
        {
            if (v0 != 128)
            {
                emptyFunction0();
                if (v0 == -1)
                    sub_5235C0();
            }
        }
        if (!CloseHandle(hObject))
        {
            emptyFunction0();
            sub_5235C0();
        }
        hObject = 0;
    }
    if (dword_5BAE80)
    {
        if (dword_668794 && (emptyFunction0(), (int)FakeDP::DestroyPlayer((FakeDP*)dword_5BAE80, dword_668794) < 0))
            emptyFunction0();
        else
            FakeDP::Close((FakeDP*)dword_5BAE80);
    }
}
// 594218: using guessed type _DWORD __thiscall FakeDP::DestroyPlayer(FakeDP *__hidden this, unsigned int);
// 59422C: using guessed type _DWORD __thiscall FakeDP::Close(FakeDP *__hidden this);
// 5AEAF8: using guessed type void *off_5AEAF8;
// 5AEAFC: using guessed type int dword_5AEAFC;
// 5BAE80: using guessed type int dword_5BAE80;
// 5BAE98: using guessed type int dword_5BAE98;
// 5BCFB4: using guessed type int dword_5BCFB4;
// 668788: using guessed type int dword_668788;
// 668794: using guessed type int dword_668794;

//----- (0051EF7A) --------------------------------------------------------
INT_PTR __stdcall sub_51EF7A(HWND hWnd, UINT a2, WPARAM a3, LPARAM a4)
{
    int v5[20]; // [esp+Ch] [ebp-15Ch] BYREF
    LPARAM lParam; // [esp+5Ch] [ebp-10Ch]
    CHAR String[256]; // [esp+60h] [ebp-108h] BYREF
    HINSTANCE hInstance; // [esp+160h] [ebp-8h]
    int v9; // [esp+164h] [ebp-4h]

    if (a2 > 0x111)
    {
        if (a2 != 275)
            return 0;
        if (sub_51F3CC(hWnd) < 0)
        {
            KillTimer(hWnd, 1u);
            MessageBoxA(hWnd, aErrorEnumerati, aFurFight_0, 0x10u);
        }
        return 1;
    }
    switch (a2)
    {
    case 0x111u:
        if ((unsigned __int16)a3 <= 0x3EBu)
        {
            switch ((unsigned __int16)a3)
            {
            case 0x3EBu:
                if (sub_51FC21(hWnd) < 0)
                    MessageBoxA(hWnd, aUnableToCreate, aFurFight_3, 0x10u);
                return 1;
            case 2u:
                EndDialog(hWnd, 3);
                return 1;
            case 0x3E9u:
                if (HIWORD(a3) != 2)
                    return 1;
                break;
            case 0x3EAu:
                break;
            default:
                return 0;
            }
            if (sub_51F809(hWnd) < 0)
                MessageBoxA(hWnd, aUnableToJoinGa, aFurFight_2, 0x10u);
            return 1;
        }
        if ((unsigned __int16)a3 == 1005)
        {
            EndDialog(hWnd, 2);
            return 1;
        }
        if ((unsigned __int16)a3 == 1014)
        {
            dword_5B94E8 = dword_5B94E8 == 0;
            if (dword_5B94E8)
            {
                SetDlgItemTextA(hWnd, 1014, aSearching);
                SetTimer(hWnd, 1u, 0xFAu, 0);
                if (sub_51F3CC(hWnd) < 0)
                {
                    KillTimer(hWnd, 1u);
                    MessageBoxA(hWnd, aErrorEnumerati_0, aFurFight_1, 0x10u);
                }
            }
            else
            {
                KillTimer(hWnd, 1u);
                memset(v5, 0, sizeof(v5));
                v5[0] = 80;
                v5[6] = 1881618624;
                v5[7] = 299086062;
                v5[8] = -2147457396;
                v5[9] = 1894125741;
                v9 = FakeDP::EnumSessions(
                    (FakeDP*)dword_5BAE80,
                    (struct DPSESSIONDESC2*)v5,
                    0,
                    (int(__stdcall*)(const struct DPSESSIONDESC2*, unsigned int*, unsigned int, void*))sub_51F744,
                    0,
                    0x20u);
                if (v9 != -2147467259 && v9 < 0)
                    EndDialog(hWnd, 4);
                SetDlgItemTextA(hWnd, 1014, aStartSearch_0);
                sub_51F32A(hWnd);
            }
            return 1;
        }
        return 0;
    case 2u:
        KillTimer(hWnd, 1u);
        sub_520111();
        break;
    case 0x110u:
        hInstance = (HINSTANCE)GetWindowLongA(hWnd, -6);
        lParam = (LPARAM)LoadIconA(hInstance, (LPCSTR)0x6B);
        SendMessageA(hWnd, 0x80u, 1u, lParam);
        SendMessageA(hWnd, 0x80u, 0, lParam);
        sprintf(String, "%s - Multiplayer Games", "FurBalls");
        SetWindowTextA(hWnd, String);
        dword_5B94E8 = 0;
        SetDlgItemTextA(hWnd, 1014, aStartSearch);
        sub_51F32A(hWnd);
        break;
    default:
        return 0;
    }
    return 1;
}
// 5941F8: using guessed type _DWORD __thiscall FakeDP::EnumSessions(FakeDP *__hidden this, struct DPSESSIONDESC2 *, unsigned int, int (__stdcall *)(const struct DPSESSIONDESC2 *, unsigned int *, unsigned int, void *), void *, unsigned int);
// 594AF0: using guessed type int dword_594AF0;
// 5B94E8: using guessed type int dword_5B94E8;
// 5BAE80: using guessed type int dword_5BAE80;

//----- (0051ED34) --------------------------------------------------------
int __cdecl sub_51ED34(HWND hDlg)
{
    int result; // eax
    FakeDP* v2; // [esp+4h] [ebp-28h]
    FakeDP* lpMem; // [esp+8h] [ebp-24h]
    int v4; // [esp+10h] [ebp-1Ch]
    int v5; // [esp+10h] [ebp-1Ch]
    HWND hWnd; // [esp+14h] [ebp-18h]
    void* v7; // [esp+18h] [ebp-14h]
    LRESULT wParam; // [esp+1Ch] [ebp-10h]

    GetDlgItemTextA(hDlg, 1000, (LPSTR)&String, 32);
    if (strlen((const char*)&String))
    {
        hWnd = GetDlgItem(hDlg, 1004);
        wParam = SendMessageA(hWnd, 0x188u, 0, 0);
        SendMessageA(hWnd, 0x189u, wParam, (LPARAM)&byte_5BABF4);
        v7 = (void*)SendMessageA(hWnd, 0x199u, wParam, 0);
        if (v7)
        {
            if (dword_5BAE80)
            {
                (*(void(__thiscall**)(int))(*(_DWORD*)dword_5BAE80 + 4))(dword_5BAE80);
                dword_5BAE80 = 0;
            }
            lpMem = (FakeDP*)operator new(0xCu);
            if (lpMem)
            {
                FakeDP::FakeDP(lpMem);
                *(_DWORD*)lpMem = &off_594AE8;
                v2 = lpMem;
            }
            else
            {
                v2 = 0;
            }
            dword_5BAE80 = (int)v2;
            v5 = FakeDP::InitializeConnection(v2, v7, 0);
            if (v5 >= 0)
            {
                EndDialog(hDlg, 1);
                result = 0;
            }
            else
            {
                result = v5;
            }
        }
        else
        {
            v4 = sub_520169(hDlg);
            if (v4 >= 0)
            {
                EndDialog(hDlg, 5);
                result = 0;
            }
            else if (v4 == -2005466856)
            {
                result = 0;
            }
            else
            {
                result = v4;
            }
        }
    }
    else
    {
        MessageBoxA(hDlg, aYouMustEnterAV, aFurFight, 0);
        result = 0;
    }
    return result;
}
// 594230: using guessed type _DWORD __thiscall FakeDP::InitializeConnection(FakeDP *__hidden this, void *, unsigned int);
// 594238: using guessed type FakeDP *__thiscall FakeDP::FakeDP(FakeDP *__hidden this);
// 594AE8: using guessed type int (__stdcall *off_594AE8)(int);
// 5BAE80: using guessed type int dword_5BAE80;

//----- (00520169) --------------------------------------------------------
int __cdecl sub_520169(HWND hWnd)
{
    int result; // eax
    LPARAM dwInitParam; // [esp+0h] [ebp-8h] BYREF
    int v3; // [esp+4h] [ebp-4h] BYREF

    if (ppv)
    {
        (*(void(__stdcall**)(LPVOID))(*(_DWORD*)ppv + 8))(ppv);
        ppv = 0;
    }
    dwInitParam = CoCreateInstance(&rclsid, 0, 1u, &riid, &ppv);
    if (dwInitParam < 0)
        return dwInitParam;
    dwInitParam = (*(int(__stdcall**)(LPVOID, _DWORD))(*(_DWORD*)ppv + 72))(ppv, 0);
    if (dwInitParam < 0)
        return dwInitParam;
    dword_5B9610 = 1;
    EnableWindow(hWnd, 0);
    DialogBoxParamA(0, (LPCSTR)0x72, hWnd, sub_5205B2, (LPARAM)&dwInitParam);
    EnableWindow(hWnd, 1);
    if (dwInitParam >= 0)
    {
        dwInitParam = sub_52027C(&v3);
        if (dwInitParam >= 0)
            result = 0;
        else
            result = dwInitParam;
    }
    else
    {
        (*(void(__stdcall**)(LPVOID, int))(*(_DWORD*)ppv + 72))(ppv, 1);
        if (ppv)
        {
            (*(void(__stdcall**)(LPVOID))(*(_DWORD*)ppv + 8))(ppv);
            ppv = 0;
        }
        result = dwInitParam;
    }
    return result;
}
// 5B9610: using guessed type int dword_5B9610;

//----- (0051FDEE) --------------------------------------------------------
int __cdecl sub_51FDEE(int a1, int a2)
{
    int v3[20]; // [esp+4h] [ebp-68h] BYREF
    int v4; // [esp+54h] [ebp-18h]
    int v5[4]; // [esp+58h] [ebp-14h] BYREF
    int v6; // [esp+68h] [ebp-4h] BYREF

    v6 = 0;
    dword_5B9970 = a2;
    memset(v3, 0, sizeof(v3));
    v3[0] = 80;
    v3[6] = 1881618624;
    v3[7] = 299086062;
    v3[8] = -2147457396;
    v3[9] = 1894125741;
    v3[12] = a1;
    v3[10] = a2;
    v3[1] = 40964;
    v3[17] = dword_5BAE98;
    dword_5BABF0 = 1;
    sub_52348B();
    v4 = FakeDP::Open((FakeDP*)dword_5BAE80, (struct DPSESSIONDESC2*)v3, 2u);
    if (v4 < 0)
        return v4;
    v5[1] = 0;
    v5[3] = 0;
    v5[0] = 16;
    v5[2] = (int)&String;
    v4 = FakeDP::CreatePlayer(
        (FakeDP*)dword_5BAE80,
        (unsigned int*)&dword_668794,
        (struct DPNAME*)v5,
        pHandles,
        0,
        0,
        0x100u);
    if (v4 < 0)
        return v4;
    v4 = FakeDP::CreateGroup((FakeDP*)dword_5BAE80, (unsigned int*)&dword_5BACFE, 0, 0, 0, 0);
    if (v4 < 0)
        return v4;
    dword_5B9F08 = 1;
    sub_5219C6();
    dword_66878C = 0;
    v4 = FakeDP::SetPlayerData((FakeDP*)dword_5BAE80, dword_668794, &v6, 4u, 2u);
    if (v4 < 0)
        emptyFunction0();
    sub_520870();
    return 0;
}
// 594210: using guessed type _DWORD __thiscall FakeDP::CreateGroup(FakeDP *__hidden this, unsigned int *, struct DPNAME *, void *, unsigned int, unsigned int);
// 59421C: using guessed type _DWORD __thiscall FakeDP::CreatePlayer(FakeDP *__hidden this, unsigned int *, struct DPNAME *, void *, void *, unsigned int, unsigned int);
// 594220: using guessed type _DWORD __thiscall FakeDP::SetPlayerData(FakeDP *__hidden this, unsigned int, void *, unsigned int, unsigned int);
// 594224: using guessed type _DWORD __thiscall FakeDP::Open(FakeDP *__hidden this, struct DPSESSIONDESC2 *, unsigned int);
// 594AF0: using guessed type int dword_594AF0;
// 5B9970: using guessed type int dword_5B9970;
// 5B9F08: using guessed type int dword_5B9F08;
// 5BABF0: using guessed type int dword_5BABF0;
// 5BACFE: using guessed type int dword_5BACFE;
// 5BAE80: using guessed type int dword_5BAE80;
// 5BAE98: using guessed type int dword_5BAE98;
// 66878C: using guessed type int dword_66878C;
// 668794: using guessed type int dword_668794;

//----- (0051E443) --------------------------------------------------------
int sub_51E443()
{
    FakeDP* v1; // [esp+0h] [ebp-Ch]
    FakeDP* v2; // [esp+4h] [ebp-8h]

    v2 = (FakeDP*)operator new(0xCu);
    if (v2)
    {
        FakeDP::FakeDP(v2);
        *(_DWORD*)v2 = &off_594AE8;
        v1 = v2;
    }
    else
    {
        v1 = 0;
    }
    dword_5BAE80 = (int)v1;
    return FakeDP::InitializeConnection(v1, (void*)pMem, 0);
}
// 594230: using guessed type _DWORD __thiscall FakeDP::InitializeConnection(FakeDP *__hidden this, void *, unsigned int);
// 594238: using guessed type FakeDP *__thiscall FakeDP::FakeDP(FakeDP *__hidden this);
// 594AE8: using guessed type int (__stdcall *off_594AE8)(int);
// 5BAE80: using guessed type int dword_5BAE80;

//----- (0051E8EB) --------------------------------------------------------
int __cdecl sub_51E8EB(HWND hDlg)
{
    int result; // eax
    FakeDP* v2; // [esp+0h] [ebp-28h]
    FakeDP* lpMem; // [esp+4h] [ebp-24h]
    LRESULT wParam; // [esp+Ch] [ebp-1Ch]
    int v5; // [esp+14h] [ebp-14h]
    HWND hWnd; // [esp+18h] [ebp-10h]

    hWnd = GetDlgItem(hDlg, 1004);
    lpMem = (FakeDP*)operator new(0xCu);
    if (lpMem)
    {
        FakeDP::FakeDP(lpMem);
        *(_DWORD*)lpMem = &off_594AE8;
        v2 = lpMem;
    }
    else
    {
        v2 = 0;
    }
    v5 = FakeDP::EnumConnections(
        v2,
        (const struct _GUID*)&dword_594AF0,
        (int(__stdcall*)(const struct _GUID*, void*, unsigned int, const struct DPNAME*, unsigned int, void*))sub_51EA40,
        hWnd,
        0);
    if (v5 >= 0)
    {
        if (v2)
            (*(void(__thiscall**)(FakeDP*))(*(_DWORD*)v2 + 4))(v2);
        SendMessageA(hWnd, 0x180u, 0, (LPARAM)aWaitForLobbyCo);
        SetFocus(hWnd);
        wParam = SendMessageA(hWnd, 0x1A2u, 0xFFFFFFFF, (LPARAM)&byte_5BABF4);
        if (wParam == -1)
            SendMessageA(hWnd, 0x186u, 0, 0);
        else
            SendMessageA(hWnd, 0x186u, wParam, 0);
        result = 0;
    }
    else
    {
        if (v2)
            (*(void(__thiscall**)(FakeDP*))(*(_DWORD*)v2 + 4))(v2);
        result = v5;
    }
    return result;
}
// 594238: using guessed type FakeDP *__thiscall FakeDP::FakeDP(FakeDP *__hidden this);
// 59423C: using guessed type _DWORD __thiscall FakeDP::EnumConnections(FakeDP *__hidden this, const struct _GUID *, int (__stdcall *)(const struct _GUID *, void *, unsigned int, const struct DPNAME *, unsigned int, void *), void *, unsigned int);
// 594AE8: using guessed type int (__stdcall *off_594AE8)(int);
// 594AF0: using guessed type int dword_594AF0;

//----- (0051EA40) --------------------------------------------------------
int __stdcall sub_51EA40(int a1, void* a2, size_t Size, int a4, int a5, HWND a6)
{
    FakeDP* v7; // [esp+Ch] [ebp-3Ch]
    FakeDP* lpMem; // [esp+1Ch] [ebp-2Ch]
    void* lParam; // [esp+30h] [ebp-18h]
    LRESULT wParam; // [esp+34h] [ebp-14h]
    int v11; // [esp+38h] [ebp-10h]

    v11 = 0;
    lpMem = (FakeDP*)operator new(0xCu);
    if (lpMem)
    {
        FakeDP::FakeDP(lpMem);
        *(_DWORD*)lpMem = &off_594AE8;
        v7 = lpMem;
    }
    else
    {
        v7 = 0;
    }
    if ((int)FakeDP::InitializeConnection(v7, a2, 0) >= 0)
    {
        wParam = SendMessageA(a6, 0x180u, 0, *(_DWORD*)(a4 + 8));
        if (wParam != -1)
        {
            lParam = operator new(Size);
            if (lParam)
            {
                qmemcpy(lParam, a2, Size);
                SendMessageA(a6, 0x19Au, wParam, (LPARAM)lParam);
                v11 = 1;
            }
        }
    }
    else
    {
        v11 = 1;
    }
    if (v7)
        (**(void(__thiscall***)(FakeDP*, int))v7)(v7, 1);
    return v11;
}
// 594230: using guessed type _DWORD __thiscall FakeDP::InitializeConnection(FakeDP *__hidden this, void *, unsigned int);
// 594238: using guessed type FakeDP *__thiscall FakeDP::FakeDP(FakeDP *__hidden this);
// 594AE8: using guessed type int (__stdcall *off_594AE8)(int);

//----- (0051EB97) --------------------------------------------------------
int __stdcall sub_51EB97(_DWORD* a1, void* a2, size_t Size, int a4, int a5, void** a6)
{
    HGLOBAL v6; // eax
    _DWORD* v8; // ecx
    FakeDP* v9; // [esp+Ch] [ebp-34h]
    FakeDP* lpMem; // [esp+1Ch] [ebp-24h]
    int v11; // [esp+30h] [ebp-10h]

    v11 = 0;
    lpMem = (FakeDP*)operator new(0xCu);
    if (lpMem)
    {
        FakeDP::FakeDP(lpMem);
        *(_DWORD*)lpMem = &off_594AE8;
        v9 = lpMem;
    }
    else
    {
        v9 = 0;
    }
    if ((int)FakeDP::InitializeConnection(v9, a2, 0) >= 0)
    {
        if (!strncmp(Str1, *(const char**)(a4 + 8), strlen(aInternet)))
        {
            *a6 = operator new(Size);
            if (*a6)
            {
                qmemcpy(*a6, a2, Size);
                v11 = 0;
                v6 = GlobalAlloc(0x42u, 0x10u);
                dword_5B94EC = (int)GlobalLock(v6);
                if (!dword_5B94EC)
                    return 1;
                v8 = (_DWORD*)dword_5B94EC;
                *(_DWORD*)dword_5B94EC = *a1;
                v8[1] = a1[1];
                v8[2] = a1[2];
                v8[3] = a1[3];
            }
        }
        else
        {
            v11 = 1;
        }
    }
    else
    {
        v11 = 1;
    }
    if (v9)
        (**(void(__thiscall***)(FakeDP*, int))v9)(v9, 1);
    return v11;
}
// 594230: using guessed type _DWORD __thiscall FakeDP::InitializeConnection(FakeDP *__hidden this, void *, unsigned int);
// 594238: using guessed type FakeDP *__thiscall FakeDP::FakeDP(FakeDP *__hidden this);
// 594AE8: using guessed type int (__stdcall *off_594AE8)(int);
// 5B94EC: using guessed type int dword_5B94EC;

//----- (0051F3CC) --------------------------------------------------------
int __cdecl sub_51F3CC(HWND hDlg)
{
    int result; // eax
    HWND v2; // eax
    int v3; // eax
    LRESULT v4; // [esp+4h] [ebp-80h]
    _DWORD* lParam; // [esp+8h] [ebp-7Ch]
    LRESULT wParam; // [esp+Ch] [ebp-78h]
    int v7[20]; // [esp+10h] [ebp-74h] BYREF
    int v8; // [esp+60h] [ebp-24h]
    int v9; // [esp+64h] [ebp-20h]
    HWND hWnd; // [esp+68h] [ebp-1Ch]
    int v11; // [esp+6Ch] [ebp-18h]
    int v12[4]; // [esp+70h] [ebp-14h] BYREF
    int* v13; // [esp+80h] [ebp-4h]

    hWnd = GetDlgItem(hDlg, 1001);
    v13 = 0;
    v9 = 0;
    v11 = 1;
    wParam = SendMessageA(hWnd, 0x188u, 0, 0);
    if (wParam != -1)
    {
        v13 = (int*)SendMessageA(hWnd, 0x199u, wParam, 0);
        if (v13)
        {
            v12[0] = *v13;
            v12[1] = v13[1];
            v12[2] = v13[2];
            v12[3] = v13[3];
            v9 = 1;
        }
    }
    sub_520111();
    memset(v7, 0, sizeof(v7));
    v7[0] = 80;
    v7[6] = 1881618624;
    v7[7] = 299086062;
    v7[8] = -2147457396;
    v7[9] = 1894125741;
    v8 = FakeDP::EnumSessions(
        (FakeDP*)dword_5BAE80,
        (struct DPSESSIONDESC2*)v7,
        0,
        (int(__stdcall*)(const struct DPSESSIONDESC2*, unsigned int*, unsigned int, void*))sub_51F744,
        0,
        0x12u);
    if (v8 >= 0)
    {
        SendMessageA(hWnd, 0xBu, 0, 0);
        if ((_UNKNOWN*)dword_5B9600 == &unk_5B94F0)
        {
            sub_51F32A(hDlg);
        }
        else
        {
            SendMessageA(hWnd, 0x184u, 0, 0);
            v2 = GetDlgItem(hDlg, 1002);
            EnableWindow(v2, 1);
            for (lParam = (_DWORD*)dword_5B9600; lParam != (_DWORD*)&unk_5B94F0; lParam = (_DWORD*)lParam[68])
            {
                v4 = SendMessageA(hWnd, 0x180u, 0, (LPARAM)(lParam + 4));
                SendMessageA(hWnd, 0x19Au, v4, (LPARAM)lParam);
                if (v9)
                {
                    LOBYTE(v3) = sub_520850(lParam, v12);
                    if (v3)
                    {
                        SendMessageA(hWnd, 0x186u, v4, 0);
                        v11 = 1;
                    }
                }
            }
            if (!v9 || !v11)
                SendMessageA(hWnd, 0x186u, 0, 0);
        }
        SendMessageA(hWnd, 0xBu, 1u, 0);
        InvalidateRect(hWnd, 0, 0);
        result = 0;
    }
    else if (v8 == -2005466856)
    {
        if (dword_5B94E8)
        {
            CheckDlgButton(hDlg, 1014, 0);
            SendMessageA(hDlg, 0x111u, 0x3F6u, 0);
        }
        result = 0;
    }
    else
    {
        sub_51F32A(hDlg);
        if (v8 == -2005466786)
            result = 0;
        else
            result = v8;
    }
    return result;
}
// 51F5C1: variable 'v3' is possibly undefined
// 5941F8: using guessed type _DWORD __thiscall FakeDP::EnumSessions(FakeDP *__hidden this, struct DPSESSIONDESC2 *, unsigned int, int (__stdcall *)(const struct DPSESSIONDESC2 *, unsigned int *, unsigned int, void *), void *, unsigned int);
// 594AF0: using guessed type int dword_594AF0;
// 5B94E8: using guessed type int dword_5B94E8;
// 5B9600: using guessed type int dword_5B9600;
// 5BAE80: using guessed type int dword_5BAE80;

//----- (0051F809) --------------------------------------------------------
int __cdecl sub_51F809(HWND hDlg)
{
    int result; // eax
    LRESULT wParam; // [esp+Ch] [ebp-7Ch]
    size_t Size[2]; // [esp+10h] [ebp-78h] BYREF
    int v4[20]; // [esp+18h] [ebp-70h] BYREF
    int v5; // [esp+68h] [ebp-20h]
    HWND hWnd; // [esp+6Ch] [ebp-1Ch]
    int v7[4]; // [esp+70h] [ebp-18h] BYREF
    void* v8; // [esp+80h] [ebp-8h]
    int* v9; // [esp+84h] [ebp-4h]

    hWnd = GetDlgItem(hDlg, 1001);
    v8 = 0;
    wParam = SendMessageA(hWnd, 0x188u, 0, 0);
    v9 = (int*)SendMessageA(hWnd, 0x199u, wParam, 0);
    if (v9)
    {
        memset(v4, 0, sizeof(v4));
        v4[0] = 80;
        v4[2] = *v9;
        v4[3] = v9[1];
        v4[4] = v9[2];
        v4[5] = v9[3];
        v4[6] = 1881618624;
        v4[7] = 299086062;
        v4[8] = -2147457396;
        v4[9] = 1894125741;
        dword_5BABF0 = 0;
        v5 = FakeDP::Open((FakeDP*)dword_5BAE80, (struct DPSESSIONDESC2*)v4, 1u);
        if (v5 >= 0)
        {
            v7[1] = 0;
            v7[3] = 0;
            v7[0] = 16;
            v7[2] = (int)&String;
            v5 = FakeDP::CreatePlayer(
                (FakeDP*)dword_5BAE80,
                (unsigned int*)&dword_668794,
                (struct DPNAME*)v7,
                pHandles,
                0,
                0,
                0);
            if (v5 >= 0)
            {
                emptyFunction0();
                EndDialog(hDlg, 1);
                FakeDP::GetSessionDesc((FakeDP*)dword_5BAE80, 0, Size);
                v8 = operator new(Size[0]);
                if (v8)
                {
                    v5 = FakeDP::GetSessionDesc((FakeDP*)dword_5BAE80, v8, Size);
                    if (v5 >= 0)
                    {
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
                        result = 0;
                    }
                    else
                    {
                        result = v5;
                    }
                }
                else
                {
                    result = -2147024882;
                }
            }
            else
            {
                result = v5;
            }
        }
        else
        {
            result = v5;
        }
    }
    else
    {
        MessageBoxA(hDlg, aThereAreNoGame, aFurFight_4, 0);
        result = 0;
    }
    return result;
}
// 59421C: using guessed type _DWORD __thiscall FakeDP::CreatePlayer(FakeDP *__hidden this, unsigned int *, struct DPNAME *, void *, void *, unsigned int, unsigned int);
// 594224: using guessed type _DWORD __thiscall FakeDP::Open(FakeDP *__hidden this, struct DPSESSIONDESC2 *, unsigned int);
// 594240: using guessed type _DWORD __thiscall FakeDP::GetSessionDesc(FakeDP *__hidden this, void *, unsigned int *);
// 594AF0: using guessed type int dword_594AF0;
// 5AE60C: using guessed type int dword_5AE60C;
// 5BABF0: using guessed type int dword_5BABF0;
// 5BAE80: using guessed type int dword_5BAE80;
// 66878C: using guessed type int dword_66878C;
// 668794: using guessed type int dword_668794;

//----- (0051FC21) --------------------------------------------------------
int __cdecl sub_51FC21(HWND hWnd)
{
    HMODULE v1; // eax
    HWND v3; // [esp-Ch] [ebp-80h]
    DWORD v4; // [esp+4h] [ebp-70h]
    int v5[20]; // [esp+8h] [ebp-6Ch] BYREF
    int v6; // [esp+58h] [ebp-1Ch]
    int v7[4]; // [esp+5Ch] [ebp-18h] BYREF
    int v8[2]; // [esp+6Ch] [ebp-8h] BYREF

    v8[0] = 0;
    v8[1] = GetWindowLongA(hWnd, -6);
    EnableWindow(hWnd, 0);
    v3 = GetForegroundWindow();
    v1 = GetModuleHandleA(0);
    v4 = DialogBoxParamA(v1, (LPCSTR)0x69, v3, sub_51FF63, 0);
    if (v4 == -1)
    {
        v4 = GetLastError();
        emptyFunction0();
    }
    EnableWindow(hWnd, 1);
    if (v4 == 2)
        return 0;
    memset(v5, 0, sizeof(v5));
    v5[0] = 80;
    v5[6] = 1881618624;
    v5[7] = 299086062;
    v5[8] = -2147457396;
    v5[9] = 1894125741;
    v5[12] = (int)&byte_5BAD14;
    v5[10] = dword_5B9970;
    v5[1] = 40964;
    v5[17] = dword_5BAE98;
    dword_5BABF0 = 1;
    v6 = FakeDP::Open((FakeDP*)dword_5BAE80, (struct DPSESSIONDESC2*)v5, 2u);
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
        0x100u);
    if (v6 < 0)
        return v6;
    v6 = FakeDP::CreateGroup((FakeDP*)dword_5BAE80, (unsigned int*)&dword_5BACFE, 0, 0, 0, 0);
    if (v6 < 0)
        return v6;
    sub_5219C6();
    dword_66878C = 0;
    v6 = FakeDP::SetPlayerData((FakeDP*)dword_5BAE80, dword_668794, v8, 4u, 2u);
    if (v6 < 0)
        emptyFunction0();
    EndDialog(hWnd, 1);
    return 0;
}
// 594210: using guessed type _DWORD __thiscall FakeDP::CreateGroup(FakeDP *__hidden this, unsigned int *, struct DPNAME *, void *, unsigned int, unsigned int);
// 59421C: using guessed type _DWORD __thiscall FakeDP::CreatePlayer(FakeDP *__hidden this, unsigned int *, struct DPNAME *, void *, void *, unsigned int, unsigned int);
// 594220: using guessed type _DWORD __thiscall FakeDP::SetPlayerData(FakeDP *__hidden this, unsigned int, void *, unsigned int, unsigned int);
// 594224: using guessed type _DWORD __thiscall FakeDP::Open(FakeDP *__hidden this, struct DPSESSIONDESC2 *, unsigned int);
// 594AF0: using guessed type int dword_594AF0;
// 5B9970: using guessed type int dword_5B9970;
// 5BABF0: using guessed type int dword_5BABF0;
// 5BACFE: using guessed type int dword_5BACFE;
// 5BAE80: using guessed type int dword_5BAE80;
// 5BAE98: using guessed type int dword_5BAE98;
// 66878C: using guessed type int dword_66878C;
// 668794: using guessed type int dword_668794;

//----- (0052046E) --------------------------------------------------------
LPARAM sub_52046E()
{
    LPARAM result; // eax
    LPARAM dwInitParam; // [esp+8h] [ebp-14h] BYREF
    int v2[4]; // [esp+Ch] [ebp-10h] BYREF

    dword_5BABF0 = (*(_DWORD*)(dword_5BAE84 + 4) & 2) != 0;
    *(_DWORD*)(*(_DWORD*)(dword_5BAE84 + 8) + 4) = 41028;
    dwInitParam = (*(int(__stdcall**)(LPVOID, _DWORD, _DWORD, int))(*(_DWORD*)ppv + 48))(ppv, 0, 0, dword_5BAE84);
    if (dwInitParam < 0)
        return dwInitParam;
    if (dword_5BABF0)
    {
        dwInitParam = (*(int(__stdcall**)(LPVOID, _DWORD, void*, int*, _DWORD))(*(_DWORD*)ppv + 60))(
            ppv,
            0,
            &unk_597350,
            &dword_5BAE80,
            0);
        if (dwInitParam < 0)
            return dwInitParam;
    }
    else
    {
        dword_5B9610 = 0;
        DialogBoxParamA(0, (LPCSTR)0x72, 0, sub_5205B2, (LPARAM)&dwInitParam);
        if (dwInitParam < 0)
            return dwInitParam;
    }
    strcpy((char*)&String, *(const char**)(*(_DWORD*)(dword_5BAE84 + 12) + 8));
    v2[1] = 0;
    v2[3] = 0;
    v2[0] = 16;
    v2[2] = (int)&String;
    dwInitParam = FakeDP::CreatePlayer(
        (FakeDP*)dword_5BAE80,
        (unsigned int*)&dword_668794,
        (struct DPNAME*)v2,
        pHandles,
        0,
        0,
        0);
    if (dwInitParam >= 0)
        result = 0;
    else
        result = dwInitParam;
    return result;
}
// 59421C: using guessed type _DWORD __thiscall FakeDP::CreatePlayer(FakeDP *__hidden this, unsigned int *, struct DPNAME *, void *, void *, unsigned int, unsigned int);
// 5B9610: using guessed type int dword_5B9610;
// 5BABF0: using guessed type int dword_5BABF0;
// 5BAE80: using guessed type int dword_5BAE80;
// 5BAE84: using guessed type int dword_5BAE84;
// 668794: using guessed type int dword_668794;

//----- (00521286) --------------------------------------------------------
int __cdecl sub_521286(const char* a1)
{
    int v2[3]; // [esp+0h] [ebp-10h] BYREF
    int v3; // [esp+Ch] [ebp-4h]

    v2[1] = 0;
    v2[0] = 12;
    v2[2] = (int)a1;
    v3 = FakeDP::SendChatMessage((FakeDP*)dword_5BAE80, dword_668794, 0, 1u, (struct DPCHAT*)v2);
    if (v3 < 0)
        return v3;
    online_maybeWriteTextChat(a1);
    return 0;
}
// 594204: using guessed type _DWORD __thiscall FakeDP::SendChatMessage(FakeDP *__hidden this, unsigned int, unsigned int, unsigned int, struct DPCHAT *);
// 5BAE80: using guessed type int dword_5BAE80;
// 668794: using guessed type int dword_668794;

//----- (005216ED) --------------------------------------------------------
int __cdecl sub_5216ED(int a1)
{
    int result; // eax
    const char* v2; // eax
    char Buffer[128]; // [esp+8h] [ebp-94h] BYREF
    int v4; // [esp+88h] [ebp-14h] BYREF
    int v5[2]; // [esp+8Ch] [ebp-10h] BYREF
    int v6; // [esp+94h] [ebp-8h] BYREF
    int v7; // [esp+98h] [ebp-4h]

    emptyFunction0();
    if (!dword_5BABF0)
        return -2147467259;
    v7 = sub_521552((unsigned int*)&v6);
    if (v7 < 0)
        return v7;
    if (v7 == 1)
    {
        v4 = 3;
        v7 = FakeDP::Send((FakeDP*)dword_5BAE80, dword_668794, *(_DWORD*)(a1 + 8), 0, &v4, 4u);
        if (v7 >= 0)
            result = 0;
        else
            result = v7;
    }
    else
    {
        dword_5B9EC8[v6] = 2;
        strcpy(&byte_5B9730[32 * v6], *(const char**)(a1 + 32));
        dword_5B9930[v6] = *(_DWORD*)(a1 + 8);
        v7 = FakeDP::SetPlayerData((FakeDP*)dword_5BAE80, *(_DWORD*)(a1 + 8), &v6, 4u, 1u);
        if (v7 >= 0)
        {
            v5[0] = 1;
            v5[1] = v6;
            v7 = FakeDP::Send((FakeDP*)dword_5BAE80, dword_668794, *(_DWORD*)(a1 + 8), 0, v5, 8u);
            if (v7 >= 0)
            {
                emptyFunction0();
                v7 = sub_5215A6();
                if (v7 >= 0)
                {
                    if (!dword_5BAE98)
                    {
                        v2 = (const char*)loadLanguageString(408);
                        sprintf(Buffer, "%s %s", *(const char**)(a1 + 32), v2);
                        sub_521286(Buffer);
                        sub_52358F();
                    }
                    result = 0;
                }
                else
                {
                    result = v7;
                }
            }
            else
            {
                result = v7;
            }
        }
        else
        {
            result = v7;
        }
    }
    return result;
}
// 59420C: using guessed type _DWORD __thiscall FakeDP::Send(FakeDP *__hidden this, unsigned int, unsigned int, unsigned int, void *, unsigned int);
// 594220: using guessed type _DWORD __thiscall FakeDP::SetPlayerData(FakeDP *__hidden this, unsigned int, void *, unsigned int, unsigned int);
// 5BABF0: using guessed type int dword_5BABF0;
// 5BAE80: using guessed type int dword_5BAE80;
// 5BAE98: using guessed type int dword_5BAE98;
// 668794: using guessed type int dword_668794;

//----- (005219C6) --------------------------------------------------------
int sub_5219C6()
{
    int v1; // eax
    size_t Size; // [esp+8h] [ebp-10h] BYREF
    struct DPSESSIONDESC2* v3; // [esp+Ch] [ebp-Ch]
    int v4; // [esp+10h] [ebp-8h]
    void* v5; // [esp+14h] [ebp-4h]

    v5 = 0;
    if (!dword_5BABF0)
        return -2147467259;
    FakeDP::GetSessionDesc((FakeDP*)dword_5BAE80, 0, &Size);
    v5 = operator new(Size);
    if (!v5)
        return -2147024882;
    v4 = FakeDP::GetSessionDesc((FakeDP*)dword_5BAE80, v5, &Size);
    if (v4 < 0)
        return v4;
    v3 = (struct DPSESSIONDESC2*)v5;
    *((_DWORD*)v5 + 10) = dword_5B9970;
    v1 = *((_DWORD*)v3 + 1);
    if (dword_5B9F08)
        LOBYTE(v1) = v1 & 0xDF;
    else
        LOBYTE(v1) = v1 | 0x20;
    *((_DWORD*)v3 + 1) = v1;
    *((_DWORD*)v3 + 16) = 0;
    *((_DWORD*)v3 + 17) = dword_5BAE98;
    *((_DWORD*)v3 + 18) = dword_5BACFE;
    v4 = FakeDP::SetSessionDesc((FakeDP*)dword_5BAE80, v3, 0);
    if (v4 < 0)
        return v4;
    if (v5)
    {
        sub_585E40(v5);
        v5 = 0;
    }
    return 0;
}
// 594208: using guessed type _DWORD __thiscall FakeDP::SetSessionDesc(FakeDP *__hidden this, struct DPSESSIONDESC2 *, unsigned int);
// 594240: using guessed type _DWORD __thiscall FakeDP::GetSessionDesc(FakeDP *__hidden this, void *, unsigned int *);
// 5B9970: using guessed type int dword_5B9970;
// 5B9F08: using guessed type int dword_5B9F08;
// 5BABF0: using guessed type int dword_5BABF0;
// 5BACFE: using guessed type int dword_5BACFE;
// 5BAE80: using guessed type int dword_5BAE80;
// 5BAE98: using guessed type int dword_5BAE98;

//----- (00521CF3) --------------------------------------------------------
int __cdecl sub_521CF3(unsigned int a1)
{
    int result; // eax
    int v2; // [esp+0h] [ebp-8h]
    int v3; // [esp+0h] [ebp-8h]
    int v4; // [esp+4h] [ebp-4h] BYREF

    if (!dword_5BABF0)
        return -2147467259;
    v4 = 6;
    v2 = sub_5219C6();
    if (v2 < 0)
        return v2;
    v3 = FakeDP::Send((FakeDP*)dword_5BAE80, dword_668794, a1, 0, &v4, 4u);
    if (v3 >= 0)
        result = 0;
    else
        result = v3;
    return result;
}
// 59420C: using guessed type _DWORD __thiscall FakeDP::Send(FakeDP *__hidden this, unsigned int, unsigned int, unsigned int, void *, unsigned int);
// 5BABF0: using guessed type int dword_5BABF0;
// 5BAE80: using guessed type int dword_5BAE80;
// 668794: using guessed type int dword_668794;

//----- (00521D56) --------------------------------------------------------
int sub_521D56()
{
    int result; // eax
    int v1; // [esp+0h] [ebp-8h] BYREF
    int v2; // [esp+4h] [ebp-4h]

    if (!dword_5BABF0)
        return -2147467259;
    v1 = 7;
    v2 = FakeDP::Send((FakeDP*)dword_5BAE80, dword_668794, 0, 0, &v1, 4u);
    if (v2 >= 0)
        result = 0;
    else
        result = v2;
    return result;
}
// 59420C: using guessed type _DWORD __thiscall FakeDP::Send(FakeDP *__hidden this, unsigned int, unsigned int, unsigned int, void *, unsigned int);
// 5BABF0: using guessed type int dword_5BABF0;
// 5BAE80: using guessed type int dword_5BAE80;
// 668794: using guessed type int dword_668794;

//----- (00521F00) --------------------------------------------------------
int __cdecl sub_521F00(int a1, int a2)
{
    int result; // eax
    int v3[3]; // [esp+0h] [ebp-10h] BYREF
    int v4; // [esp+Ch] [ebp-4h]

    v3[0] = 8;
    v3[1] = a1;
    v3[2] = a2;
    v4 = FakeDP::Send((FakeDP*)dword_5BAE80, dword_668794, 0, 0, v3, 0xCu);
    if (v4 >= 0)
        result = 0;
    else
        result = v4;
    return result;
}
// 59420C: using guessed type _DWORD __thiscall FakeDP::Send(FakeDP *__hidden this, unsigned int, unsigned int, unsigned int, void *, unsigned int);
// 5BAE80: using guessed type int dword_5BAE80;
// 668794: using guessed type int dword_668794;

//----- (005236FF) --------------------------------------------------------
int sub_5236FF()
{
    int v1; // [esp+8h] [ebp-28h] BYREF
    int v2; // [esp+Ch] [ebp-24h]

    v1 = 40;
    dword_5BCFB4 = 1;
    dword_5AE710 = 1;
    if ((int)FakeDP::GetCaps((FakeDP*)dword_5BAE80, (struct DPCAPS*)&v1, 0) >= 0)
    {
        if ((v2 & 0x8000) != 0)
        {
            dword_5BAD0A = 1;
            dword_5BAD0E = 2;
        }
        else
        {
            dword_5BAD0A = 0;
            dword_5BAD0E = 0;
        }
    }
    sub_523CD4();
    sub_52C6C3(g_hInstanceInt);
    strcpy((char*)&textUseless1, "test_l2_eng.fpp");
    dword_5BAE98 = 1;
    dword_668788 = 1;
    sub_5219C6();
    FakeDP::AddPlayerToGroup((FakeDP*)dword_5BAE80, dword_5BACFE, dword_668794);
    return emptyFunction0("sys.machine_no %lx slot %lx player %lx", dword_668794, dword_5BACF8, word_60431C);
}
// 5219C6: using guessed type int sub_5219C6(void);
// 5227D0: using guessed type int sub_5227D0(const char *, ...);
// 523CD4: using guessed type int sub_523CD4(void);
// 5941F4: using guessed type _DWORD __thiscall FakeDP::AddPlayerToGroup(FakeDP *__hidden this, unsigned int, unsigned int);
// 5941FC: using guessed type _DWORD __thiscall FakeDP::GetCaps(FakeDP *__hidden this, struct DPCAPS *, unsigned int);
// 5AE710: using guessed type int dword_5AE710;
// 5BACF8: using guessed type int dword_5BACF8;
// 5BACFE: using guessed type int dword_5BACFE;
// 5BAD0A: using guessed type int dword_5BAD0A;
// 5BAD0E: using guessed type int dword_5BAD0E;
// 5BAE14: using guessed type int g_hInstanceInt;
// 5BAE80: using guessed type int dword_5BAE80;
// 5BAE98: using guessed type int dword_5BAE98;
// 5BCFB4: using guessed type int dword_5BCFB4;
// 60431C: using guessed type __int16 word_60431C;
// 668788: using guessed type int dword_668788;
// 668794: using guessed type int dword_668794;

//----- (00523CD4) --------------------------------------------------------
int sub_523CD4()
{
    size_t Size[2]; // [esp+4h] [ebp-10h] BYREF
    int v2; // [esp+Ch] [ebp-8h]
    void* v3; // [esp+10h] [ebp-4h]

    v3 = 0;
    FakeDP::GetSessionDesc((FakeDP*)dword_5BAE80, 0, Size);
    v3 = operator new(Size[0]);
    if (!v3)
        return -2147024882;
    v2 = FakeDP::GetSessionDesc((FakeDP*)dword_5BAE80, v3, Size);
    if (v2 < 0)
        return v2;
    Size[1] = (size_t)v3;
    word_5BACFC = *((_WORD*)v3 + 22);
    dword_5BACFE = *((_DWORD*)v3 + 18);
    return 0;
}
// 594240: using guessed type _DWORD __thiscall FakeDP::GetSessionDesc(FakeDP *__hidden this, void *, unsigned int *);
// 5BACFC: using guessed type __int16 word_5BACFC;
// 5BACFE: using guessed type int dword_5BACFE;
// 5BAE80: using guessed type int dword_5BAE80;

//----- (005240DD) --------------------------------------------------------
void sub_5240DD()
{
    const char* v0; // eax
    const char* v1; // eax
    char Buffer[32]; // [esp+0h] [ebp-30h] BYREF
    int v3; // [esp+20h] [ebp-10h]
    int v4; // [esp+24h] [ebp-Ch]
    int v5; // [esp+28h] [ebp-8h]
    int i; // [esp+2Ch] [ebp-4h]

    v3 = 0;
    v5 = sub_52CA1A();
    if (v5 > dword_5BAE18 + 2000 || !dword_5BAE18)
    {
        if (!dword_5BAE18)
        {
            emptyFunction0();
            emptyFunction0();
            emptyFunction0();
            for (i = 0; i < 16; ++i)
                dword_5BAE1C[i] = v5;
        }
        sub_52BE83();
        dword_5BAE18 = v5;
    }
    if (dword_5BAE18)
    {
        if (dword_5BABF0)
        {
            for (i = 0; i < 16; ++i)
            {
                if (i != dword_5BACF8 && sub_521DA4(i))
                {
                    v4 = dword_5BAE1C[i];
                    if (dword_5BAE18 > v4 + 30000)
                    {
                        emptyFunction0();
                        v0 = (const char*)loadLanguageString(410);
                        sprintf(Buffer, "%s %s", &byte_5B9730[32 * i], v0);
                        online_maybeWriteTextChat(Buffer);
                        FakeDP::DestroyPlayer((FakeDP*)dword_5BAE80, dword_5B9930[i]);
                        v3 = 1;
                    }
                }
            }
        }
        else
        {
            v4 = dword_5BAE1C[dword_5BAD06];
            if (dword_5BAE18 > v4 + 40000)
            {
                emptyFunction0();
                v1 = (const char*)loadLanguageString(411);
                online_maybeWriteTextChat(v1);
                word_60430C = 2;
                word_60430A = 1;
            }
        }
    }
    if (v3)
        sub_5242F0();
}
// 594218: using guessed type _DWORD __thiscall FakeDP::DestroyPlayer(FakeDP *__hidden this, unsigned int);
// 5BABF0: using guessed type int dword_5BABF0;
// 5BACF8: using guessed type int dword_5BACF8;
// 5BAD06: using guessed type int dword_5BAD06;
// 5BAE18: using guessed type int dword_5BAE18;
// 5BAE80: using guessed type int dword_5BAE80;
// 60430A: using guessed type __int16 word_60430A;
// 60430C: using guessed type __int16 word_60430C;

//----- (0052A03C) --------------------------------------------------------
int __cdecl sub_52A03C(int a1, _DWORD* a2)
{
    int* v3; // edx
    const char* v4; // eax
    const char* v5; // eax
    int v6; // eax
    int v7; // [esp+0h] [ebp-BCh]
    int v8; // [esp+4h] [ebp-B8h]
    int v9; // [esp+Ch] [ebp-B0h]
    char Buffer[128]; // [esp+10h] [ebp-ACh] BYREF
    HANDLE hProcess; // [esp+90h] [ebp-2Ch]
    BOOL v12; // [esp+94h] [ebp-28h]
    unsigned int v13[2]; // [esp+98h] [ebp-24h] BYREF
    char v14[4]; // [esp+A0h] [ebp-1Ch] BYREF
    int v15; // [esp+A4h] [ebp-18h]
    _DWORD* v16; // [esp+A8h] [ebp-14h]
    _DWORD* v17; // [esp+ACh] [ebp-10h]
    int v18; // [esp+B0h] [ebp-Ch]
    int v19; // [esp+B4h] [ebp-8h] BYREF
    unsigned int v20; // [esp+B8h] [ebp-4h] BYREF

    v8 = *a2;
    if (*a2 > 0x101u)
    {
        if (v8 != 265)
        {
            if (v8 != 269 || !a2[8])
                return 0;
            emptyFunction0();
            v7 = a2[8];
            if (v7 > -2005466726)
            {
                if (v7 != -2005466716)
                    return 0;
            }
            else if (v7 != -2005466726 && v7 != -2147467259 && v7 != -2005466896)
            {
                return 0;
            }
            emptyFunction0();
            return 0;
        }
        v13[0] = 4;
        v13[1] = (unsigned int)a2;
        v15 = a2[5];
        FakeDP::GetPlayerData((FakeDP*)dword_5BAE80, a2[2], v14, v13, 0);
        online_maybeWriteTextChat(*(const char**)(v15 + 8));
    }
    else
    {
        switch (v8)
        {
        case 257:
            emptyFunction21();
            word_60430C = 2;
            word_60430A = 1;
            break;
        case 3:
            v17 = a2;
            if (a2[1] == 1)
            {
                if (dword_5BABF0)
                {
                    sub_5216ED((int)v17);
                    sub_521CF3(v17[2]);
                    v20 = 4;
                    v18 = FakeDP::GetPlayerData((FakeDP*)dword_5BAE80, v17[2], &v19, &v20, 1u);
                    if (v18 >= 0)
                    {
                        sub_52C622(v19);
                        hProcess = CreateThread(0, 0x8000u, StartAddress, (LPVOID)v17[2], 0, 0);
                        SetPriorityClass(hProcess, 0x80u);
                        v12 = SetThreadPriority(hProcess, 15);
                    }
                    else
                    {
                        emptyFunction0();
                    }
                    sub_52A83F(v19);
                }
                ++word_5BACFC;
                emptyFunction0();
                sub_52C45C(dword_5BACF8);
                sub_5242F0();
                sub_524091();
            }
            break;
        case 5:
            v16 = a2;
            sub_5242F0();
            if (a2[1] == 1 && (v16[3] || v16[5]))
            {
                if (v16[3])
                    v3 = (int*)v16[3];
                else
                    v3 = (int*)v16[5];
                v19 = *v3;
                emptyFunction0();
                if (dword_6043C8[v19])
                {
                    if (v19 == dword_5BACF8)
                    {
                        v4 = (const char*)loadLanguageString(411);
                        online_maybeWriteTextChat(v4);
                        emptyFunction0();
                        word_60430C = 2;
                        word_60430A = 1;
                    }
                    else
                    {
                        v5 = (const char*)loadLanguageString(409);
                        sprintf(Buffer, "%s %s", &byte_5B9730[32 * v19], v5);
                        online_maybeWriteTextChat(Buffer);
                        sub_52358F();
                    }
                    v6 = *(_DWORD*)(dword_6043C8[v19] + 120);
                    LOBYTE(v6) = v6 & 0xF7;
                    *(_DWORD*)(dword_6043C8[v19] + 120) = v6;
                    v9 = *(_DWORD*)(dword_6043C8[v19] + 424);
                    *(_WORD*)(v9 + 100) = 0;
                    *(_WORD*)(v9 + 138) = 0;
                }
                sub_52A83F(v19);
                sub_5218AD((int)v16);
                --word_5BACFC;
                emptyFunction0();
                if (v19 == dword_5BACF8)
                    dword_668794 = 0;
            }
            break;
        case 49:
            if (dword_5BABF0)
                return -2147467259;
            emptyFunction0();
            PostQuitMessage(-2005466826);
            break;
        }
    }
    return 0;
}
// 594244: using guessed type _DWORD __thiscall FakeDP::GetPlayerData(FakeDP *__hidden this, unsigned int, void *, unsigned int *, unsigned int);
// 5BABF0: using guessed type int dword_5BABF0;
// 5BACF8: using guessed type int dword_5BACF8;
// 5BACFC: using guessed type __int16 word_5BACFC;
// 5BAE80: using guessed type int dword_5BAE80;
// 60430A: using guessed type __int16 word_60430A;
// 60430C: using guessed type __int16 word_60430C;
// 6043C8: using guessed type int dword_6043C8[];
// 668794: using guessed type int dword_668794;

//----- (00520820) --------------------------------------------------------
FakeDP* __thiscall sub_520820(FakeDP* this, char a2)
{
    FakeDP::~FakeDP(this);
    if ((a2 & 1) != 0)
        sub_585E40(this);
    return this;
}
// 594228: using guessed type void __thiscall FakeDP::~FakeDP(FakeDP *__hidden this);

//----- (0052097E) --------------------------------------------------------
void sub_52097E()
{
    DWORD v0; // [esp+8h] [ebp-4h]

    if (off_5AEAF8 != &unk_5BBF70)
    {
        if (off_5AEAF8)
        {
            sub_585E40(off_5AEAF8);
            off_5AEAF8 = 0;
        }
        off_5AEAF8 = &unk_5BBF70;
        dword_5AEAFC = 4096;
    }
    if (hObject)
    {
        v0 = WaitForSingleObject(hObject, 0x7D0u);
        if (v0)
        {
            if (v0 != 128)
            {
                emptyFunction0();
                if (v0 == -1)
                    sub_5235C0();
            }
        }
        if (!CloseHandle(hObject))
        {
            emptyFunction0();
            sub_5235C0();
        }
        hObject = 0;
    }
    if (dword_5BAE80)
    {
        emptyFunction0();
        if ((int)FakeDP::DestroyPlayer((FakeDP*)dword_5BAE80, dword_668794) >= 0)
            FakeDP::Close((FakeDP*)dword_5BAE80);
        else
            emptyFunction0();
    }
}
// 594218: using guessed type _DWORD __thiscall FakeDP::DestroyPlayer(FakeDP *__hidden this, unsigned int);
// 59422C: using guessed type _DWORD __thiscall FakeDP::Close(FakeDP *__hidden this);
// 5AEAF8: using guessed type void *off_5AEAF8;
// 5AEAFC: using guessed type int dword_5AEAFC;
// 5BAE80: using guessed type int dword_5BAE80;
// 668794: using guessed type int dword_668794;

//----- (00520AD4) --------------------------------------------------------
int sub_520AD4()
{
    int result; // eax
    DWORD v1; // [esp+Ch] [ebp-24h]
    struct _SECURITY_ATTRIBUTES MutexAttributes; // [esp+10h] [ebp-20h] BYREF
    int v3; // [esp+1Ch] [ebp-14h] BYREF
    unsigned int v4; // [esp+20h] [ebp-10h] BYREF
    int* v5; // [esp+24h] [ebp-Ch]
    int v6; // [esp+28h] [ebp-8h]
    size_t Size; // [esp+2Ch] [ebp-4h] BYREF

    if (!hObject)
    {
        MutexAttributes.nLength = 12;
        MutexAttributes.lpSecurityDescriptor = 0;
        MutexAttributes.bInheritHandle = 1;
        hObject = CreateMutexA(&MutexAttributes, 0, Name);
        if (!hObject)
        {
            emptyFunction0();
            sub_5235C0();
        }
    }
    while (1)
    {
        v1 = WaitForSingleObject(hObject, 0x7D0u);
        if (v1)
        {
            if (v1 != 128)
                break;
        }
        v3 = 0;
        v4 = 0;
        v5 = (int*)off_5AEAF8;
        Size = dword_5AEAFC;
        v6 = FakeDP::Receive((FakeDP*)dword_5BAE80, (unsigned int*)&v3, &v4, 1u, off_5AEAF8, &Size);
        if (v6 == -2005467106)
        {
            emptyFunction0();
            if (v5)
            {
                if (Size <= dword_5AEAFC)
                {
                    v5 = (int*)off_5AEAF8;
                    Size = dword_5AEAFC;
                }
                else
                {
                    if (off_5AEAF8 != &unk_5BBF70)
                    {
                        sub_585E40(v5);
                        v5 = 0;
                        off_5AEAF8 = 0;
                        dword_5AEAFC = 0;
                    }
                    v5 = (int*)operator new(Size);
                    if (!v5)
                    {
                    LABEL_10:
                        emptyFunction0();
                        ReleaseMutex(hObject);
                        return -2147024882;
                    }
                }
            }
            else if (Size <= 0x1000)
            {
                v5 = (int*)&unk_5BBF70;
                Size = 4096;
            }
            else
            {
                v5 = (int*)operator new(Size);
                if (!v5)
                    goto LABEL_10;
            }
            off_5AEAF8 = v5;
            dword_5AEAFC = Size;
            ReleaseMutex(hObject);
        }
        else
        {
            if (v6 == -2005466946)
            {
                ReleaseMutex(hObject);
                return 0;
            }
            if (v6 < 0)
            {
                emptyFunction0();
                ReleaseMutex(hObject);
                return v6;
            }
            if (v3)
            {
                v6 = sub_520E43(v5, Size, v3, v4);
                if (v6 < 0)
                {
                LABEL_26:
                    ReleaseMutex(hObject);
                    return v6;
                }
            }
            else
            {
                v6 = sub_5210FE(v5);
                if (v6 < 0)
                    goto LABEL_26;
            }
            ReleaseMutex(hObject);
        }
    }
    if (v1 == -1)
    {
        emptyFunction0();
        sub_5235C0();
        if (hObject)
        {
            if (!CloseHandle(hObject))
            {
                emptyFunction0();
                sub_5235C0();
            }
            hObject = 0;
        }
        result = 0;
    }
    else
    {
        emptyFunction0();
        result = 0;
    }
    return result;
}
// 520C49: conditional instruction was optimized away because of '%var_C.4!=0'
// 594214: using guessed type _DWORD __thiscall FakeDP::Receive(FakeDP *__hidden this, unsigned int *, unsigned int *, unsigned int, void *, unsigned int *);
// 5AEAF8: using guessed type void *off_5AEAF8;
// 5AEAFC: using guessed type int dword_5AEAFC;
// 5BAE80: using guessed type int dword_5BAE80;

//----- (00520ACA) --------------------------------------------------------
int sub_520ACA()
{
    return sub_520AD4();
}

//----- (00520E43) --------------------------------------------------------
int __cdecl sub_520E43(_DWORD* a1, int a2, int a3, unsigned int a4)
{
    int v5; // [esp+20h] [ebp-8h]
    int v6; // [esp+20h] [ebp-8h]

    switch (*a1)
    {
    case 1:
        if (!dword_5BABF0)
        {
            dword_5BACF8 = a1[1];
            if ((int)FakeDP::SetPlayerData((FakeDP*)dword_5BAE80, a4, &dword_5BACF8, 4u, 2u) < 0)
                emptyFunction0();
            emptyFunction0();
            return 0;
        }
        return -2147467259;
    case 2:
        if (!dword_5BABF0)
        {
            sub_521DBE((int)a1);
            return 0;
        }
        return -2147467259;
    case 3:
        if (!dword_5BABF0)
            return 0;
        return -2147467259;
    case 4:
        if (!dword_5BABF0)
            return -2147467259;
        dword_5B9EC8[a1[1]] |= 0x10u;
        v5 = sub_5215A6();
        if (v5 >= 0)
            return 0;
        return v5;
    case 5:
        if (!dword_5BABF0)
            return -2147467259;
        dword_5B9EC8[a1[1]] &= 0xFFFFFFEF;
        v6 = sub_5215A6();
        if (v6 >= 0)
            return 0;
        return v6;
    case 6:
        if (!dword_5BABF0)
        {
            dword_5B9F28 = 1;
            off_5AE714(0);
            return 0;
        }
        return -2147467259;
    case 7:
        if (!dword_5BABF0)
        {
            dword_5B9F28 = 2;
            off_5AE714(1);
            return 0;
        }
        return -2147467259;
    case 8:
        off_5AE718(a1[1], a1[2]);
        return 0;
    case 0x69:
        sub_528EB0((int)a1);
        return 0;
    case 0x6A:
        sub_52A985(a1[1]);
        return 0;
    default:
        return 0;
    }
}
// 5AE714: invalid function type has been ignored
// 594220: using guessed type _DWORD __thiscall FakeDP::SetPlayerData(FakeDP *__hidden this, unsigned int, void *, unsigned int, unsigned int);
// 5AE714: using guessed type int (__cdecl *off_5AE714)(_DWORD);
// 5AE718: using guessed type int (__cdecl *off_5AE718)(_DWORD, _DWORD);
// 5B9F28: using guessed type int dword_5B9F28;
// 5BABF0: using guessed type int dword_5BABF0;
// 5BACF8: using guessed type int dword_5BACF8;
// 5BAE80: using guessed type int dword_5BAE80;

//----- (005215A6) --------------------------------------------------------
int sub_5215A6()
{
    int result; // eax
    int i; // [esp+8h] [ebp-28Ch]
    int v2; // [esp+Ch] [ebp-288h]
    int v3[161]; // [esp+10h] [ebp-284h] BYREF

    if (!dword_5BABF0)
        return -2147467259;
    v3[0] = 2;
    emptyFunction0();
    for (i = 0; i < 16; ++i)
    {
        v3[i + 1] = dword_5B9EC8[i];
        strcpy((char*)&v3[8 * i + 17], &byte_5B9730[32 * i]);
        v3[i + 145] = dword_5B9930[i];
    }
    v3[dword_5BACF8 + 1] |= 8u;
    v2 = FakeDP::Send((FakeDP*)dword_5BAE80, dword_668794, 0, 0, v3, 0x284u);
    emptyFunction0();
    if (v2 >= 0)
        result = 0;
    else
        result = v2;
    return result;
}
// 59420C: using guessed type _DWORD __thiscall FakeDP::Send(FakeDP *__hidden this, unsigned int, unsigned int, unsigned int, void *, unsigned int);
// 5BABF0: using guessed type int dword_5BABF0;
// 5BACF8: using guessed type int dword_5BACF8;
// 5BAE80: using guessed type int dword_5BAE80;
// 668794: using guessed type int dword_668794;

//----- (00529248) --------------------------------------------------------
DWORD __stdcall StartAddress(LPVOID lpThreadParameter)
{
    LPVOID v2[10]; // [esp+Ch] [ebp-4Ch] BYREF
    unsigned int v3; // [esp+34h] [ebp-24h] BYREF
    int v4; // [esp+38h] [ebp-20h]
    void* v5; // [esp+3Ch] [ebp-1Ch]
    DWORD v6; // [esp+40h] [ebp-18h]
    int v7; // [esp+44h] [ebp-14h]
    int v8; // [esp+48h] [ebp-10h]
    size_t Size; // [esp+4Ch] [ebp-Ch] BYREF
    int v10; // [esp+50h] [ebp-8h] BYREF
    unsigned int v11; // [esp+54h] [ebp-4h] BYREF

    v8 = 0;
    v7 = 0;
    v5 = 0;
    Size = 0;
    v11 = 4;
    v4 = FakeDP::GetPlayerData((FakeDP*)dword_5BAE80, (unsigned int)lpThreadParameter, &v10, &v11, 1u);
    if (v4 < 0)
        emptyFunction0();
    do
    {
        v6 = MsgWaitForMultipleObjects(1u, &pHandles, 0, 0xFFFFFFFF, 0xBFu);
        while (1)
        {
            while (1)
            {
                v2[0] = lpThreadParameter;
                v3 = 0;
                v4 = FakeDP::Receive((FakeDP*)dword_5BAE80, (unsigned int*)v2, &v3, 4u, v5, &Size);
                if (v4 != -2005467106)
                    break;
                if (v5)
                {
                    sub_585E40(v5);
                    v5 = 0;
                }
                v5 = operator new(Size);
                if (!v5)
                {
                    emptyFunction0();
                    return 0;
                }
            }
            if (v4 == -2005466946)
            {
                v4 = 0;
                goto LABEL_17;
            }
            if (v4 < 0)
                break;
            if (v2[0])
                v4 = sub_5293FE(v8, (int*)v5, Size, (int)v2[0], v3);
            else
                v4 = sub_52A03C(v8, v5);
        }
        emptyFunction0();
    LABEL_17:
        ;
    } while (!sub_52C6A2(v10));
    if (v5)
    {
        sub_585E40(v5);
        v5 = 0;
    }
    return 0;
}
// 52A03C: using guessed type _DWORD __cdecl sub_52A03C(_DWORD, _DWORD);
// 594214: using guessed type _DWORD __thiscall FakeDP::Receive(FakeDP *__hidden this, unsigned int *, unsigned int *, unsigned int, void *, unsigned int *);
// 594244: using guessed type _DWORD __thiscall FakeDP::GetPlayerData(FakeDP *__hidden this, unsigned int, void *, unsigned int *, unsigned int);
// 5BAE80: using guessed type int dword_5BAE80;

//----- (0052A4C2) --------------------------------------------------------
int __cdecl sub_52A4C2(int a1)
{
    int result; // eax
    DWORD v2; // [esp+Ch] [ebp-24h]
    struct _SECURITY_ATTRIBUTES MutexAttributes; // [esp+10h] [ebp-20h] BYREF
    int v4; // [esp+1Ch] [ebp-14h] BYREF
    unsigned int v5; // [esp+20h] [ebp-10h] BYREF
    int* v6; // [esp+24h] [ebp-Ch]
    int v7; // [esp+28h] [ebp-8h]
    size_t Size; // [esp+2Ch] [ebp-4h] BYREF

    v6 = 0;
    Size = 0;
    v7 = 0;
    if (dword_668788 == 1)
        sub_5291FB();
    if (!hObject)
    {
        MutexAttributes.nLength = 12;
        MutexAttributes.lpSecurityDescriptor = 0;
        MutexAttributes.bInheritHandle = 1;
        hObject = CreateMutexA(&MutexAttributes, 0, aGHdpmsgbufferm_0);
        if (!hObject)
            emptyFunction0();
    }
    sub_523577();
    if (!dword_5BAE80 || dword_5BCFB4 != 1)
        return v7;
    while (1)
    {
        v2 = WaitForSingleObject(hObject, 0x7D0u);
        if (v2)
        {
            if (v2 != 128)
                break;
        }
        v4 = 0;
        v5 = 0;
        v6 = (int*)off_5AEAF8;
        Size = dword_5AEAFC;
        v7 = FakeDP::Receive((FakeDP*)dword_5BAE80, (unsigned int*)&v4, &v5, 1u, off_5AEAF8, &Size);
        if (v7 == -2005467106)
        {
            emptyFunction0();
            if (v6)
            {
                if (Size <= dword_5AEAFC)
                {
                    v6 = (int*)off_5AEAF8;
                    Size = dword_5AEAFC;
                }
                else
                {
                    if (off_5AEAF8 != &unk_5BBF70)
                    {
                        sub_585E40(v6);
                        v6 = 0;
                        off_5AEAF8 = 0;
                        dword_5AEAFC = 0;
                    }
                    v6 = (int*)operator new(Size);
                    if (!v6)
                    {
                    LABEL_14:
                        emptyFunction0();
                        ReleaseMutex(hObject);
                        return -2147024882;
                    }
                }
            }
            else if (Size <= 0x1000)
            {
                v6 = (int*)&unk_5BBF70;
                Size = 4096;
            }
            else
            {
                v6 = (int*)operator new(Size);
                if (!v6)
                    goto LABEL_14;
            }
            off_5AEAF8 = v6;
            dword_5AEAFC = Size;
            ReleaseMutex(hObject);
        }
        else
        {
            if (v7 == -2005466946)
            {
                v7 = 0;
                ReleaseMutex(hObject);
                return v7;
            }
            if (v7 < 0)
            {
                emptyFunction0();
                ReleaseMutex(hObject);
                return v7;
            }
            if (v4)
                v7 = sub_5293FE(a1, v6, Size, v4, v5);
            else
                v7 = sub_52A03C(a1, v6);
            ReleaseMutex(hObject);
        }
    }
    if (v2 == -1)
    {
        emptyFunction0();
        sub_5235C0();
        if (hObject)
        {
            if (!CloseHandle(hObject))
            {
                emptyFunction0();
                sub_5235C0();
            }
            hObject = 0;
        }
        result = 0;
    }
    else
    {
        emptyFunction0();
        result = 0;
    }
    return result;
}
// 52A674: conditional instruction was optimized away because of '%var_C.4!=0'
// 594214: using guessed type _DWORD __thiscall FakeDP::Receive(FakeDP *__hidden this, unsigned int *, unsigned int *, unsigned int, void *, unsigned int *);
// 5AEAF8: using guessed type void *off_5AEAF8;
// 5AEAFC: using guessed type int dword_5AEAFC;
// 5BAE80: using guessed type int dword_5BAE80;
// 5BCFB4: using guessed type int dword_5BCFB4;
// 668788: using guessed type int dword_668788;

//----- (0052A880) --------------------------------------------------------
int __cdecl sub_52A880(unsigned int a1, int a2, int a3)
{
    int v4[8]; // [esp+0h] [ebp-24h] BYREF
    int v5; // [esp+20h] [ebp-4h]

    v5 = -1;
    v4[0] = 103;
    v4[1] = dword_5BACF8;
    v4[3] = a2;
    v4[2] = 1;
    v4[4] = a3;
    v5 = FakeDP::SendEx((FakeDP*)dword_5BAE80, dword_668794, a1, 0x200u, v4, 0x20u, 0, 0, 0, 0);
    if (v5 == -2147483638 || v5 >= 0)
        return 0;
    emptyFunction0();
    return v5;
}
// 594200: using guessed type _DWORD __thiscall FakeDP::SendEx(FakeDP *__hidden this, unsigned int, unsigned int, unsigned int, void *, unsigned int, unsigned int, unsigned int, void *, unsigned int *);
// 5BACF8: using guessed type int dword_5BACF8;
// 5BAE80: using guessed type int dword_5BAE80;
// 668794: using guessed type int dword_668794;

//----- (0052A908) --------------------------------------------------------
int __cdecl sub_52A908(int a1)
{
    int v2[3]; // [esp+0h] [ebp-10h] BYREF
    int v3; // [esp+Ch] [ebp-4h]

    v3 = -1;
    v2[0] = 104;
    v2[1] = dword_5BACF8;
    v2[2] = a1;
    v3 = FakeDP::SendEx((FakeDP*)dword_5BAE80, dword_668794, dword_5BACFE, 0x200u, v2, 0xCu, 0, 0, 0, 0);
    if (v3 == -2147483638 || v3 >= 0)
        return 0;
    emptyFunction0();
    return v3;
}
// 594200: using guessed type _DWORD __thiscall FakeDP::SendEx(FakeDP *__hidden this, unsigned int, unsigned int, unsigned int, void *, unsigned int, unsigned int, unsigned int, void *, unsigned int *);
// 5BACF8: using guessed type int dword_5BACF8;
// 5BACFE: using guessed type int dword_5BACFE;
// 5BAE80: using guessed type int dword_5BAE80;
// 668794: using guessed type int dword_668794;

//----- (0052A985) --------------------------------------------------------
int __cdecl sub_52A985(int a1)
{
    int v2[8]; // [esp+0h] [ebp-24h] BYREF
    int v3; // [esp+20h] [ebp-4h]

    v3 = -1;
    if (!dword_5BABF0)
        return v3;
    v2[0] = 105;
    v2[1] = dword_5BACF8;
    v2[2] = word_601DCC;
    v2[3] = byte_6041E8;
    v2[4] = dword_6041E4;
    v2[5] = 1;
    v2[6] = dword_5BACF4;
    v2[7] = dword_60425C;
    v3 = FakeDP::SendEx((FakeDP*)dword_5BAE80, dword_668794, dword_5B9930[a1], 0x200u, v2, 0x20u, 0, 0, 0, 0);
    if (v3 == -2147483638 || v3 >= 0)
        v3 = 0;
    else
        emptyFunction0();
    emptyFunction0();
    return v3;
}
// 594200: using guessed type _DWORD __thiscall FakeDP::SendEx(FakeDP *__hidden this, unsigned int, unsigned int, unsigned int, void *, unsigned int, unsigned int, unsigned int, void *, unsigned int *);
// 5BABF0: using guessed type int dword_5BABF0;
// 5BACF4: using guessed type int dword_5BACF4;
// 5BACF8: using guessed type int dword_5BACF8;
// 5BAE80: using guessed type int dword_5BAE80;
// 601DCC: using guessed type __int16 word_601DCC;
// 6041E4: using guessed type int dword_6041E4;
// 6041E8: using guessed type char byte_6041E8;
// 60425C: using guessed type int dword_60425C;
// 668794: using guessed type int dword_668794;

//----- (0052AA53) --------------------------------------------------------
int sub_52AA53()
{
    int v1[2]; // [esp+0h] [ebp-Ch] BYREF
    int v2; // [esp+8h] [ebp-4h]

    v2 = -1;
    v1[0] = 106;
    v1[1] = dword_5BACF8;
    v2 = FakeDP::SendEx((FakeDP*)dword_5BAE80, dword_668794, dword_5B9930[dword_5BAD06], 0x200u, v1, 8u, 0, 0, 0, 0);
    if (v2 == -2147483638 || v2 >= 0)
        v2 = 0;
    else
        emptyFunction0();
    emptyFunction0();
    return v2;
}
// 594200: using guessed type _DWORD __thiscall FakeDP::SendEx(FakeDP *__hidden this, unsigned int, unsigned int, unsigned int, void *, unsigned int, unsigned int, unsigned int, void *, unsigned int *);
// 5BACF8: using guessed type int dword_5BACF8;
// 5BAD06: using guessed type int dword_5BAD06;
// 5BAE80: using guessed type int dword_5BAE80;
// 668794: using guessed type int dword_668794;

//----- (0052AB78) --------------------------------------------------------
int __cdecl sub_52AB78(_DWORD* a1)
{
    int* v1; // ecx
    int v2; // ecx
    double v3; // st7
    _DWORD* v4; // ecx
    _DWORD* v5; // edx
    float v7; // [esp+94h] [ebp-120h]
    int v8[15]; // [esp+9Ch] [ebp-118h] BYREF
    int v9; // [esp+D8h] [ebp-DCh] BYREF
    int v10; // [esp+DCh] [ebp-D8h]
    int v11; // [esp+E0h] [ebp-D4h]
    int v12; // [esp+E4h] [ebp-D0h]
    size_t v13; // [esp+E8h] [ebp-CCh] BYREF
    float v14; // [esp+ECh] [ebp-C8h]
    int v15; // [esp+F4h] [ebp-C0h]
    int v16; // [esp+F8h] [ebp-BCh]
    int v17; // [esp+FCh] [ebp-B8h]
    float v18; // [esp+104h] [ebp-B0h]
    int v19; // [esp+108h] [ebp-ACh]
    _BYTE* v20; // [esp+10Ch] [ebp-A8h]
    char v21[44]; // [esp+110h] [ebp-A4h] BYREF
    int v22; // [esp+13Ch] [ebp-78h]
    LPVOID lpMem; // [esp+140h] [ebp-74h] BYREF
    float v24; // [esp+144h] [ebp-70h]
    float v25; // [esp+148h] [ebp-6Ch] BYREF
    float* v26; // [esp+14Ch] [ebp-68h]
    float v27[16]; // [esp+150h] [ebp-64h] BYREF
    float v28; // [esp+190h] [ebp-24h]
    int v29; // [esp+194h] [ebp-20h]
    float v30; // [esp+1A4h] [ebp-10h] BYREF
    float v31; // [esp+1A8h] [ebp-Ch]
    float v32; // [esp+1ACh] [ebp-8h]

    v19 = -1;
    v20 = *(_BYTE**)(dword_6043C8[dword_5BACF8] + 424);
    lpMem = 0;
    if ((byte_5BCFC4 & 1) == 0)
    {
        byte_5BCFC4 |= 1u;
        dword_5BCFBC = sub_52CA1A() + 1000;
    }
    v28 = 0.0;
    v14 = 0.0;
    v18 = 0.0;
    v22 = 0;
    v26 = (float*)dword_6043C8[dword_5BACF8];
    memset(v8, 0, sizeof(v8));
    *(int*)((char*)&v8[3] + 1) = sub_52C4B0();
    v29 = (int)&v8[4] + 1;
    v8[1] = dword_5BACF8;
    v1 = (int*)(dword_6043C8[dword_5BACF8] + 32);
    v9 = *v1;
    v10 = v1[1];
    v11 = v1[2];
    v12 = v1[3];
    sub_403220((float*)&v9);
    if (*(int*)((char*)&v8[3] + 1) != dword_5BD0D5[45 * v8[1]])
    {
        qmemcpy(v27, v26, sizeof(v27));
        *(_DWORD*)(v29 + 2) = (__int64)(v27[12] * 1000.0 + 0.5);
        *(_DWORD*)(v29 + 6) = (__int64)(v27[13] * 1000.0 + 0.5);
        *(_DWORD*)(v29 + 10) = (__int64)(v27[14] * 1000.0 + 0.5);
        v30 = v26[34];
        v31 = v26[35];
        v32 = v26[36];
        if (*((_DWORD*)v26 + 63))
        {
            *(_BYTE*)(v29 + 38) = 1;
            sub_53C180(&v30, v26 + 54);
        }
        else
        {
            *(_BYTE*)(v29 + 38) = 0;
        }
        v30 = v26[42] / flt_668728 + v30;
        v31 = v26[43] / flt_668728 + v31;
        v32 = v26[44] / flt_668728 + v32;
        v15 = (__int64)(v30 * 1000.0 + 0.5);
        v16 = (__int64)(v31 * 1000.0 + 0.5);
        v17 = (__int64)(v32 * 1000.0 + 0.5);
        v2 = v29 + 22;
        *(_DWORD*)(v29 + 22) = v15;
        *(_DWORD*)(v2 + 4) = v16;
        *(_DWORD*)(v2 + 8) = v17;
        v3 = v26[8];
        sub_583E90(v3, v26[10]);
        v7 = (float)(unsigned __int16)(__int64)((3.141592741012573 - v3) * 65536.0 / 6.283185482025146);
        v24 = v7 * 0.000095873802 - 3.1415927;
        *(_DWORD*)(v29 + 14) = (__int64)(v24 * 1000.0 + 0.5);
        *(_DWORD*)(v29 + 18) = (__int64)(v26[39] * 1000.0 + 0.5);
        *(_DWORD*)(v29 + 34) = (__int64)(v26[47] * 1000.0 + 0.5);
        *(_BYTE*)(v29 + 39) = *((_BYTE*)v26 + 244);
        *(_BYTE*)(v29 + 40) = v20[14];
        *(_BYTE*)(v29 + 41) = v20[136];
        *(_BYTE*)(v29 + 42) = v20[138];
        v8[0] = 100;
        v8[1] = dword_5BACF8;
        LOBYTE(v8[2]) = 0;
        *(int*)((char*)&v8[2] + 1) = sub_523D5C((int)v8);
        if (v22)
            goto LABEL_9;
        if (a1[110])
        {
            v22 = 0;
        }
        else
        {
        LABEL_9:
            v22 = sub_522BAD(*(unsigned int*)((char*)&v8[3] + 1), (int)v21, (int)&unk_5BD0C8 + 180 * v8[1]);
            if (v22)
            {
                sub_4B8DC8(a1, &v25);
                v18 = v25 / 128.0;
                v28 = sub_522DEF((int)v21, v29);
                v14 = 0.0;
                if (v28 < 0.0)
                    v28 = v14;
            }
        }
        if (*((_DWORD*)v26 + 61) != (unsigned __int8)byte_5BD100[180 * v8[1]]
            || *((_WORD*)v20 + 7) != (unsigned __int8)byte_5BD101[180 * v8[1]])
        {
            v22 = 0;
        }
        if (!v22 || v28 > (double)v18)
        {
            if (!a1[110])
            {
                if (sub_52B462(&lpMem, &v13, v8))
                {
                    v4 = (_DWORD*)((char*)&unk_5BCFC8 + 16 * v8[1]);
                    *v4 = v9;
                    v4[1] = v10;
                    v4[2] = v11;
                    v4[3] = v12;
                    qmemcpy((char*)&unk_5BD140 + 180 * v8[1], (char*)&unk_5BD104 + 180 * v8[1], 0x3Cu);
                    qmemcpy((char*)&unk_5BD104 + 180 * v8[1], (char*)&unk_5BD0C8 + 180 * v8[1], 0x3Cu);
                    qmemcpy((char*)&unk_5BD0C8 + 180 * v8[1], v8, 0x3Cu);
                    v19 = FakeDP::SendEx((FakeDP*)dword_5BAE80, dword_668794, dword_5BACFE, 0x200u, lpMem, v13, 0, 0, 0, 0);
                    if (v19 == -2147483638 || v19 >= 0)
                    {
                        dword_5BCFB8 = sub_52CA1A();
                        if (dword_5BCFB8 >= (unsigned int)dword_5BCFBC)
                        {
                            emptyFunction0();
                            dword_5BCFC0 = dword_5BCFB8;
                            dword_5BDC48 = 0;
                            dword_5BDC4C = 0;
                            dword_5BCFBC = sub_52CA1A() + 1000;
                        }
                        dword_5BDC48 += v13;
                        v19 = 0;
                    }
                    else
                    {
                        emptyFunction0();
                    }
                    sub_584E87(lpMem);
                    return 0;
                }
            LABEL_31:
                emptyFunction0();
                return 0;
            }
            emptyFunction0();
            v5 = (_DWORD*)((char*)&unk_5BCFC8 + 16 * v8[1]);
            *v5 = v9;
            v5[1] = v10;
            v5[2] = v11;
            v5[3] = v12;
            qmemcpy((char*)&unk_5BD140 + 180 * v8[1], (char*)&unk_5BD104 + 180 * v8[1], 0x3Cu);
            qmemcpy((char*)&unk_5BD104 + 180 * v8[1], (char*)&unk_5BD0C8 + 180 * v8[1], 0x3Cu);
            qmemcpy((char*)&unk_5BD0C8 + 180 * v8[1], v8, 0x3Cu);
            v19 = FakeDP::SendEx((FakeDP*)dword_5BAE80, dword_668794, dword_5BACFE, 0x200u, v8, 0x3Cu, 0, 0, 0, 0);
            if (v19 != -2147483638 && v19 < 0)
                goto LABEL_31;
            if (a1[110])
            {
                emptyFunction0();
                a1[110] = 0;
                v19 = 0;
            }
        }
    }
    return 0;
}
// 594200: using guessed type _DWORD __thiscall FakeDP::SendEx(FakeDP *__hidden this, unsigned int, unsigned int, unsigned int, void *, unsigned int, unsigned int, unsigned int, void *, unsigned int *);
// 5BACF8: using guessed type int dword_5BACF8;
// 5BACFE: using guessed type int dword_5BACFE;
// 5BAE80: using guessed type int dword_5BAE80;
// 5BCFB8: using guessed type int dword_5BCFB8;
// 5BCFBC: using guessed type int dword_5BCFBC;
// 5BCFC0: using guessed type int dword_5BCFC0;
// 5BCFC4: using guessed type char byte_5BCFC4;
// 5BD0D5: using guessed type int dword_5BD0D5[];
// 5BDC48: using guessed type int dword_5BDC48;
// 5BDC4C: using guessed type int dword_5BDC4C;
// 6043C8: using guessed type int dword_6043C8[];
// 668728: using guessed type float flt_668728;
// 668794: using guessed type int dword_668794;

//----- (0052B65C) --------------------------------------------------------
int __cdecl sub_52B65C(int a1, int a2, int a3, const void* a4, int a5)
{
    int v6[2]; // [esp+Ch] [ebp-58h] BYREF
    int v7; // [esp+14h] [ebp-50h] BYREF
    int v8; // [esp+18h] [ebp-4Ch]
    const void* v9; // [esp+1Ch] [ebp-48h]
    int v10; // [esp+20h] [ebp-44h]
    char v11[56]; // [esp+28h] [ebp-3Ch] BYREF
    int v12; // [esp+60h] [ebp-4h]

    v12 = -1;
    v6[0] = 101;
    v6[1] = dword_5BACF8;
    v7 = *(_DWORD*)(a1 + 128);
    if (a2)
    {
        if ((*(_DWORD*)(a2 + 72) & 0x10000) != 0)
            v8 = *(_DWORD*)(a2 + 128);
        else
            v8 = -1;
    }
    else
    {
        v8 = -1;
    }
    v10 = a3;
    v9 = a4;
    if (a3 == 5)
        qmemcpy(v11, a4, sizeof(v11));
    if (a3 != 8 || a5)
    {
        if (a3 == 8)
            emptyFunction0();
        v12 = FakeDP::SendEx((FakeDP*)dword_5BAE80, dword_668794, dword_5BACFE, 0x600u, v6, 0x54u, dword_5BAD0A, 0, 0, 0);
        if (v12 != -2147483638 && v12 < 0)
            emptyFunction0();
    }
    else if (dword_5BABF0)
    {
        sub_528C1C((int)&v7);
    }
    else
    {
        v12 = FakeDP::SendEx((FakeDP*)dword_5BAE80, dword_668794, dword_5BAD02, 0x600u, v6, 0x54u, dword_5BAD0A, 0, 0, 0);
        if (v12 != -2147483638 && v12 < 0)
            emptyFunction0();
    }
    return v12;
}
// 594200: using guessed type _DWORD __thiscall FakeDP::SendEx(FakeDP *__hidden this, unsigned int, unsigned int, unsigned int, void *, unsigned int, unsigned int, unsigned int, void *, unsigned int *);
// 5BABF0: using guessed type int dword_5BABF0;
// 5BACF8: using guessed type int dword_5BACF8;
// 5BACFE: using guessed type int dword_5BACFE;
// 5BAD02: using guessed type int dword_5BAD02;
// 5BAD0A: using guessed type int dword_5BAD0A;
// 5BAE80: using guessed type int dword_5BAE80;
// 668794: using guessed type int dword_668794;

//----- (0052B7C0) --------------------------------------------------------
int __cdecl sub_52B7C0(int a1, int a2, int a3)
{
    int v4[21]; // [esp+0h] [ebp-58h] BYREF
    int v5; // [esp+54h] [ebp-4h]

    v5 = -1;
    v4[0] = 102;
    v4[1] = dword_5BACF8;
    v4[2] = *(_DWORD*)(a1 + 128);
    v4[5] = 6;
    v4[6] = a3;
    v4[7] = a2;
    v5 = FakeDP::SendEx((FakeDP*)dword_5BAE80, dword_668794, dword_5BAD02, 0x200u, v4, 0x54u, 0, 0, 0, 0);
    if (v5 == -2147483638 || v5 >= 0)
        return 0;
    emptyFunction0();
    return v5;
}
// 594200: using guessed type _DWORD __thiscall FakeDP::SendEx(FakeDP *__hidden this, unsigned int, unsigned int, unsigned int, void *, unsigned int, unsigned int, unsigned int, void *, unsigned int *);
// 5BACF8: using guessed type int dword_5BACF8;
// 5BAD02: using guessed type int dword_5BAD02;
// 5BAE80: using guessed type int dword_5BAE80;
// 668794: using guessed type int dword_668794;

//----- (0052B856) --------------------------------------------------------
int __cdecl sub_52B856(int a1, int a2)
{
    int v3[21]; // [esp+0h] [ebp-58h] BYREF
    int v4; // [esp+54h] [ebp-4h]

    v4 = -1;
    v3[0] = 102;
    v3[1] = dword_5BACF8;
    v3[2] = *(_DWORD*)(a1 + 128);
    v3[5] = 7;
    v3[6] = sub_52C4B0();
    v3[7] = a2;
    v4 = FakeDP::SendEx((FakeDP*)dword_5BAE80, dword_668794, dword_5BACFE, 0x200u, v3, 0x54u, 0, 0, 0, 0);
    if (v4 == -2147483638 || v4 >= 0)
        return 0;
    emptyFunction0();
    return v4;
}
// 594200: using guessed type _DWORD __thiscall FakeDP::SendEx(FakeDP *__hidden this, unsigned int, unsigned int, unsigned int, void *, unsigned int, unsigned int, unsigned int, void *, unsigned int *);
// 5BACF8: using guessed type int dword_5BACF8;
// 5BACFE: using guessed type int dword_5BACFE;
// 5BAE80: using guessed type int dword_5BAE80;
// 668794: using guessed type int dword_668794;

//----- (0052B8EE) --------------------------------------------------------
int __cdecl sub_52B8EE(int a1, __int16 a2, int* a3, int* a4)
{
    int v5[15]; // [esp+0h] [ebp-58h] BYREF
    __int16 v6; // [esp+3Ch] [ebp-1Ch]
    int v7; // [esp+54h] [ebp-4h]

    v7 = -1;
    v5[0] = 102;
    v5[1] = dword_5BACF8;
    v5[2] = *(_DWORD*)(a1 + 128);
    v5[5] = 1;
    v6 = a2;
    v5[7] = *a3;
    v5[8] = a3[1];
    v5[9] = a3[2];
    v5[10] = a3[3];
    v5[11] = *a4;
    v5[12] = a4[1];
    v5[13] = a4[2];
    v5[14] = a4[3];
    v7 = FakeDP::SendEx((FakeDP*)dword_5BAE80, dword_668794, dword_5BACFE, 0x200u, v5, 0x54u, 0, 0, 0, 0);
    if (v7 == -2147483638 || v7 >= 0)
        return 0;
    emptyFunction0();
    return v7;
}
// 594200: using guessed type _DWORD __thiscall FakeDP::SendEx(FakeDP *__hidden this, unsigned int, unsigned int, unsigned int, void *, unsigned int, unsigned int, unsigned int, void *, unsigned int *);
// 5BACF8: using guessed type int dword_5BACF8;
// 5BACFE: using guessed type int dword_5BACFE;
// 5BAE80: using guessed type int dword_5BAE80;
// 668794: using guessed type int dword_668794;

//----- (0052B9B4) --------------------------------------------------------
int __cdecl sub_52B9B4(int a1, int a2, int a3)
{
    int v4[21]; // [esp+0h] [ebp-58h] BYREF
    int v5; // [esp+54h] [ebp-4h]

    v5 = -1;
    v4[0] = 102;
    v4[1] = dword_5BACF8;
    v4[2] = *(_DWORD*)(a1 + 128);
    v4[5] = 4;
    v4[7] = a2;
    v4[8] = a3;
    v5 = FakeDP::SendEx((FakeDP*)dword_5BAE80, dword_668794, dword_5BACFE, 0x200u, v4, 0x54u, 0, 0, 0, 0);
    if (v5 == -2147483638 || v5 >= 0)
        return 0;
    emptyFunction0();
    return v5;
}
// 594200: using guessed type _DWORD __thiscall FakeDP::SendEx(FakeDP *__hidden this, unsigned int, unsigned int, unsigned int, void *, unsigned int, unsigned int, unsigned int, void *, unsigned int *);
// 5BACF8: using guessed type int dword_5BACF8;
// 5BACFE: using guessed type int dword_5BACFE;
// 5BAE80: using guessed type int dword_5BAE80;
// 668794: using guessed type int dword_668794;

//----- (0052BA4A) --------------------------------------------------------
int __cdecl sub_52BA4A(int a1)
{
    int v2[21]; // [esp+0h] [ebp-58h] BYREF
    int v3; // [esp+54h] [ebp-4h]

    v3 = -1;
    v2[0] = 102;
    v2[1] = dword_5BACF8;
    v2[2] = *(_DWORD*)(a1 + 128);
    v2[5] = 2;
    v3 = FakeDP::SendEx((FakeDP*)dword_5BAE80, dword_668794, dword_5BACFE, 0x200u, v2, 0x54u, 0, 0, 0, 0);
    if (v3 == -2147483638 || v3 >= 0)
        return 0;
    emptyFunction0();
    return v3;
}
// 594200: using guessed type _DWORD __thiscall FakeDP::SendEx(FakeDP *__hidden this, unsigned int, unsigned int, unsigned int, void *, unsigned int, unsigned int, unsigned int, void *, unsigned int *);
// 5BACF8: using guessed type int dword_5BACF8;
// 5BACFE: using guessed type int dword_5BACFE;
// 5BAE80: using guessed type int dword_5BAE80;
// 668794: using guessed type int dword_668794;

//----- (0052BAD5) --------------------------------------------------------
int __cdecl sub_52BAD5(int a1, int a2, int a3)
{
    int v4[8]; // [esp+0h] [ebp-5Ch] BYREF
    int v5; // [esp+20h] [ebp-3Ch]
    int v6; // [esp+24h] [ebp-38h]
    int v7; // [esp+54h] [ebp-8h]
    int v8; // [esp+58h] [ebp-4h]

    v7 = -1;
    v8 = *(_DWORD*)(a1 + 424);
    if (dword_5BABF0)
        online_PlayerFluffedPlayer(a2, a3);
    v4[0] = 102;
    v4[1] = dword_5BACF8;
    v4[2] = *(_DWORD*)(a1 + 128);
    v4[5] = 5;
    v4[7] = *(__int16*)(v8 + 100);
    if (a2)
        v5 = *(_DWORD*)(a2 + 128);
    else
        v5 = -1;
    if (a3)
        v6 = *(_DWORD*)(a3 + 128);
    else
        v6 = -1;
    v7 = FakeDP::SendEx((FakeDP*)dword_5BAE80, dword_668794, dword_5BACFE, 0x200u, v4, 0x54u, 0, 0, 0, 0);
    if (v7 == -2147483638 || v7 >= 0)
        return 0;
    emptyFunction0();
    return v7;
}
// 594200: using guessed type _DWORD __thiscall FakeDP::SendEx(FakeDP *__hidden this, unsigned int, unsigned int, unsigned int, void *, unsigned int, unsigned int, unsigned int, void *, unsigned int *);
// 5BABF0: using guessed type int dword_5BABF0;
// 5BACF8: using guessed type int dword_5BACF8;
// 5BACFE: using guessed type int dword_5BACFE;
// 5BAE80: using guessed type int dword_5BAE80;
// 668794: using guessed type int dword_668794;

//----- (0052BC50) --------------------------------------------------------
int __cdecl sub_52BC50(int a1, int a2)
{
    int v3[8]; // [esp+0h] [ebp-24h] BYREF
    int v4; // [esp+20h] [ebp-4h]

    v4 = -1;
    v3[0] = 103;
    v3[1] = dword_5BACF8;
    v3[2] = 4;
    v3[6] = a2;
    v3[7] = sub_52CA1A();
    v4 = FakeDP::SendEx((FakeDP*)dword_5BAE80, dword_668794, dword_5B9930[a1], 0x600u, v3, 0x20u, dword_5BAD0E, 0, 0, 0);
    if (v4 == -2147483638 || v4 >= 0)
        return 0;
    emptyFunction0();
    return v4;
}
// 594200: using guessed type _DWORD __thiscall FakeDP::SendEx(FakeDP *__hidden this, unsigned int, unsigned int, unsigned int, void *, unsigned int, unsigned int, unsigned int, void *, unsigned int *);
// 5BACF8: using guessed type int dword_5BACF8;
// 5BAD0E: using guessed type int dword_5BAD0E;
// 5BAE80: using guessed type int dword_5BAE80;
// 668794: using guessed type int dword_668794;

//----- (0052BCE5) --------------------------------------------------------
int sub_52BCE5()
{
    int v1[8]; // [esp+0h] [ebp-24h] BYREF
    int v2; // [esp+20h] [ebp-4h]

    v2 = -1;
    v1[0] = 103;
    v1[1] = dword_5BACF8;
    v1[2] = 3;
    v1[6] = sub_52CA1A();
    v2 = FakeDP::SendEx((FakeDP*)dword_5BAE80, dword_668794, dword_5BAD02, 0x600u, v1, 0x20u, dword_5BAD0E, 0, 0, 0);
    if (v2 == -2147483638 || v2 >= 0)
        return 0;
    emptyFunction0();
    return v2;
}
// 594200: using guessed type _DWORD __thiscall FakeDP::SendEx(FakeDP *__hidden this, unsigned int, unsigned int, unsigned int, void *, unsigned int, unsigned int, unsigned int, void *, unsigned int *);
// 5BACF8: using guessed type int dword_5BACF8;
// 5BAD02: using guessed type int dword_5BAD02;
// 5BAD0E: using guessed type int dword_5BAD0E;
// 5BAE80: using guessed type int dword_5BAE80;
// 668794: using guessed type int dword_668794;

//----- (0052BD70) --------------------------------------------------------
int __cdecl sub_52BD70(int a1, int a2)
{
    int v3[8]; // [esp+0h] [ebp-24h] BYREF
    int v4; // [esp+20h] [ebp-4h]

    v4 = -1;
    v3[0] = 103;
    v3[1] = dword_5BACF8;
    v3[2] = 5;
    v3[6] = a2;
    v3[7] = sub_52C4B0();
    v4 = FakeDP::SendEx((FakeDP*)dword_5BAE80, dword_668794, dword_5B9930[a1], 0x200u, v3, 0x20u, dword_5BAD0E, 0, 0, 0);
    if (v4 == -2147483638 || v4 >= 0)
        return 0;
    emptyFunction0();
    return v4;
}
// 594200: using guessed type _DWORD __thiscall FakeDP::SendEx(FakeDP *__hidden this, unsigned int, unsigned int, unsigned int, void *, unsigned int, unsigned int, unsigned int, void *, unsigned int *);
// 5BACF8: using guessed type int dword_5BACF8;
// 5BAD0E: using guessed type int dword_5BAD0E;
// 5BAE80: using guessed type int dword_5BAE80;
// 668794: using guessed type int dword_668794;

//----- (0052BE05) --------------------------------------------------------
int sub_52BE05()
{
    int v1[8]; // [esp+0h] [ebp-24h] BYREF
    int v2; // [esp+20h] [ebp-4h]

    v2 = -1;
    v1[0] = 103;
    v1[1] = dword_5BACF8;
    v1[2] = 6;
    v2 = FakeDP::SendEx((FakeDP*)dword_5BAE80, dword_668794, 0, 0x200u, v1, 0x20u, dword_5BAD0E, 0, 0, 0);
    if (v2 == -2147483638 || v2 >= 0)
        return 0;
    emptyFunction0();
    return v2;
}
// 594200: using guessed type _DWORD __thiscall FakeDP::SendEx(FakeDP *__hidden this, unsigned int, unsigned int, unsigned int, void *, unsigned int, unsigned int, unsigned int, void *, unsigned int *);
// 5BACF8: using guessed type int dword_5BACF8;
// 5BAD0E: using guessed type int dword_5BAD0E;
// 5BAE80: using guessed type int dword_5BAE80;
// 668794: using guessed type int dword_668794;

//----- (0052BE83) --------------------------------------------------------
int sub_52BE83()
{
    int v1[8]; // [esp+0h] [ebp-24h] BYREF
    int v2; // [esp+20h] [ebp-4h]

    v2 = -1;
    v1[0] = 103;
    v1[1] = dword_5BACF8;
    v1[2] = 7;
    v1[6] = sub_52CA1A();
    if (!dword_5BABF0)
    {
        emptyFunction0();
        v2 = FakeDP::SendEx((FakeDP*)dword_5BAE80, dword_668794, dword_5BAD02, 0x200u, v1, 0x20u, dword_5BAD0E, 0, 0, 0);
        if (v2 == -2147483638 || v2 >= 0)
            return 0;
        goto LABEL_7;
    }
    emptyFunction0();
    v2 = FakeDP::SendEx((FakeDP*)dword_5BAE80, dword_668794, 0, 0x200u, v1, 0x20u, dword_5BAD0E, 0, 0, 0);
    if (v2 != -2147483638 && v2 < 0)
    {
    LABEL_7:
        emptyFunction0();
        return v2;
    }
    return 0;
}
// 594200: using guessed type _DWORD __thiscall FakeDP::SendEx(FakeDP *__hidden this, unsigned int, unsigned int, unsigned int, void *, unsigned int, unsigned int, unsigned int, void *, unsigned int *);
// 5BABF0: using guessed type int dword_5BABF0;
// 5BACF8: using guessed type int dword_5BACF8;
// 5BAD02: using guessed type int dword_5BAD02;
// 5BAD0E: using guessed type int dword_5BAD0E;
// 5BAE80: using guessed type int dword_5BAE80;
// 668794: using guessed type int dword_668794;

//----- (0052BF87) --------------------------------------------------------
int __cdecl sub_52BF87(int a1, int a2)
{
    int v3[8]; // [esp+0h] [ebp-24h] BYREF
    int v4; // [esp+20h] [ebp-4h]

    v4 = -1;
    v3[0] = 103;
    v3[1] = dword_5BACF8;
    v3[2] = 8;
    v3[6] = a2;
    emptyFunction0();
    v4 = FakeDP::SendEx((FakeDP*)dword_5BAE80, dword_668794, dword_5B9930[a1], 0x200u, v3, 0x20u, dword_5BAD0E, 0, 0, 0);
    if (v4 == -2147483638 || v4 >= 0)
        return 0;
    emptyFunction0();
    return v4;
}
// 594200: using guessed type _DWORD __thiscall FakeDP::SendEx(FakeDP *__hidden this, unsigned int, unsigned int, unsigned int, void *, unsigned int, unsigned int, unsigned int, void *, unsigned int *);
// 5BACF8: using guessed type int dword_5BACF8;
// 5BAD0E: using guessed type int dword_5BAD0E;
// 5BAE80: using guessed type int dword_5BAE80;
// 668794: using guessed type int dword_668794;

//todo

//----- (0052C0FC) --------------------------------------------------------
int __cdecl sub_52C0FC(_DWORD* a1, _DWORD* a2, int a3, _DWORD* a4, unsigned __int16 a5)
{
    int v6; // [esp+8h] [ebp-30h]
    int v7[3]; // [esp+Ch] [ebp-2Ch] BYREF
    unsigned int v8; // [esp+18h] [ebp-20h]
    int v9; // [esp+20h] [ebp-18h]
    int v10; // [esp+24h] [ebp-14h]
    unsigned __int16 v11; // [esp+28h] [ebp-10h]
    char v12[6]; // [esp+2Ah] [ebp-Eh] BYREF
    int v13; // [esp+30h] [ebp-8h]
    int v14; // [esp+34h] [ebp-4h]

    v13 = -1;
    v6 = sub_52C4B0();
    if (sub_528FBD((int)a1, (int)a2, a3, *a4, v6))
    {
        v7[0] = 107;
        v7[1] = dword_5BACF8;
        v7[2] = sub_4771C8(a1);
        if (a2)
            v8 = sub_4771C8(a2);
        else
            v8 = -1;
        v10 = v6;
        v9 = a3;
        v11 = a5;
        qmemcpy(v12, a4, a5);
        v14 = 30;
        v13 = FakeDP::SendEx((FakeDP*)dword_5BAE80, dword_668794, dword_5BACFE, 0x200u, v7, a5 + 30, 0, 0, 0, 0);
        if (v13 != -2147483638 && v13 < 0)
            emptyFunction0();
    }
    return v13;
}
// 594200: using guessed type _DWORD __thiscall FakeDP::SendEx(FakeDP *__hidden this, unsigned int, unsigned int, unsigned int, void *, unsigned int, unsigned int, unsigned int, void *, unsigned int *);
// 5BACF8: using guessed type int dword_5BACF8;
// 5BACFE: using guessed type int dword_5BACFE;
// 5BAE80: using guessed type int dword_5BAE80;
// 668794: using guessed type int dword_668794;

//----- (0052C211) --------------------------------------------------------
int __cdecl sub_52C211(int a1)
{
    int v1; // eax
    int v3[2]; // [esp+0h] [ebp-414h] BYREF
    int v4; // [esp+8h] [ebp-40Ch] BYREF
    int v5; // [esp+40Ch] [ebp-8h]
    unsigned int v6; // [esp+410h] [ebp-4h] BYREF

    v5 = -1;
    emptyFunction0();
    v3[0] = 110;
    v3[1] = dword_5BACF8;
    v1 = sub_52C4B0();
    sub_4685D6((int*)((char*)&v4 + 2), &v6, v1);
    LOWORD(v4) = v6;
    v6 = (unsigned __int16)v6 + 10;
    v5 = FakeDP::SendEx((FakeDP*)dword_5BAE80, dword_668794, dword_5B9930[a1], 0x200u, v3, v6, dword_5BAD0E, 0, 0, 0);
    if (v5 == -2147483638 || v5 >= 0)
        return 0;
    emptyFunction0();
    return v5;
}
// 594200: using guessed type _DWORD __thiscall FakeDP::SendEx(FakeDP *__hidden this, unsigned int, unsigned int, unsigned int, void *, unsigned int, unsigned int, unsigned int, void *, unsigned int *);
// 5BACF8: using guessed type int dword_5BACF8;
// 5BAD0E: using guessed type int dword_5BAD0E;
// 5BAE80: using guessed type int dword_5BAE80;
// 668794: using guessed type int dword_668794;

//----- (0052C2E3) --------------------------------------------------------
int sub_52C2E3()
{
    int v1[2]; // [esp+0h] [ebp-Ch] BYREF
    int v2; // [esp+8h] [ebp-4h]

    v2 = -1;
    v1[0] = 111;
    v1[1] = dword_5BACF8;
    emptyFunction0();
    v2 = FakeDP::SendEx((FakeDP*)dword_5BAE80, dword_668794, dword_5BAD02, 0x200u, v1, 8u, dword_5BAD0E, 0, 0, 0);
    if (v2 == -2147483638 || v2 >= 0)
        return 0;
    emptyFunction0();
    return v2;
}
// 594200: using guessed type _DWORD __thiscall FakeDP::SendEx(FakeDP *__hidden this, unsigned int, unsigned int, unsigned int, void *, unsigned int, unsigned int, unsigned int, void *, unsigned int *);
// 5BACF8: using guessed type int dword_5BACF8;
// 5BAD02: using guessed type int dword_5BAD02;
// 5BAD0E: using guessed type int dword_5BAD0E;
// 5BAE80: using guessed type int dword_5BAE80;
// 668794: using guessed type int dword_668794;

//----- (0052C36C) --------------------------------------------------------
int __cdecl sub_52C36C(__int16 a1)
{
    int v2[2]; // [esp+0h] [ebp-10h] BYREF
    __int16 v3; // [esp+8h] [ebp-8h]
    int v4; // [esp+Ch] [ebp-4h]

    v4 = -1;
    v2[0] = 108;
    v2[1] = dword_5BACF8;
    v3 = a1;
    v4 = FakeDP::SendEx((FakeDP*)dword_5BAE80, dword_668794, dword_5BACFE, 0x200u, v2, 0xAu, 0, 0, 0, 0);
    if (v4 != -2147483638 && v4 < 0)
        emptyFunction0();
    return v4;
}
// 594200: using guessed type _DWORD __thiscall FakeDP::SendEx(FakeDP *__hidden this, unsigned int, unsigned int, unsigned int, void *, unsigned int, unsigned int, unsigned int, void *, unsigned int *);
// 5BACF8: using guessed type int dword_5BACF8;
// 5BACFE: using guessed type int dword_5BACFE;
// 5BAE80: using guessed type int dword_5BAE80;
// 668794: using guessed type int dword_668794;

//----- (0052C3E2) --------------------------------------------------------
int sub_52C3E2()
{
    int v1[3]; // [esp+0h] [ebp-10h] BYREF
    int v2; // [esp+Ch] [ebp-4h]

    v2 = -1;
    v1[0] = 109;
    v1[1] = dword_5BACF8;
    emptyFunction0();
    v2 = FakeDP::SendEx((FakeDP*)dword_5BAE80, dword_668794, 0, 0x200u, v1, 0xAu, 0, 0, 0, 0);
    if (v2 != -2147483638 && v2 < 0)
        emptyFunction0();
    return v2;
}
// 594200: using guessed type _DWORD __thiscall FakeDP::SendEx(FakeDP *__hidden this, unsigned int, unsigned int, unsigned int, void *, unsigned int, unsigned int, unsigned int, void *, unsigned int *);
// 5BACF8: using guessed type int dword_5BACF8;
// 5BAE80: using guessed type int dword_5BAE80;
// 668794: using guessed type int dword_668794;

//----- (0052354B) --------------------------------------------------------
int sub_52354B()
{
    int result; // eax

    if (dword_5BABEC)
    {
        sub_51BCB4(0);
        result = sub_51BCD5(0);
        dword_5BABEC = 0;
    }
    return result;
}
// 5BABEC: using guessed type int dword_5BABEC;

//----- (005235C0) --------------------------------------------------------
DWORD sub_5235C0()
{
    DWORD result; // eax
    CHAR Buffer[4]; // [esp+0h] [ebp-8h] BYREF
    DWORD dwMessageId; // [esp+4h] [ebp-4h]

    result = GetLastError();
    dwMessageId = result;
    if (result)
    {
        FormatMessageA(0x1100u, 0, dwMessageId, 0x400u, Buffer, 0, 0);
        GetLastError();
        emptyFunction0();
        result = (DWORD)LocalFree(*(HLOCAL*)Buffer);
    }
    return result;
}

//----- (005205B2) --------------------------------------------------------
INT_PTR __stdcall sub_5205B2(HWND hDlg, UINT a2, WPARAM a3, LPARAM a4)
{
    if (a2 > 0x111)
    {
        if (a2 != 0x113)
            return 0;
        if (dword_5B9610)
        {
            *(_DWORD*)dword_5B9618 = sub_52071E();
            if (!*(_DWORD*)dword_5B9618)
                EndDialog(hDlg, 0);
        }
        else
        {
            *(_DWORD*)dword_5B9618 = (*(int(__stdcall**)(LPVOID, int, void*, int*, _DWORD))(*(_DWORD*)ppv + 60))(
                ppv,
                128,
                &unk_597350,
                &dword_5BAE80,
                0);
            if (*(_DWORD*)dword_5B9618 != 0x8877015E)
                EndDialog(hDlg, 0);
        }
    }
    else
    {
        switch (a2)
        {
        case 0x111u:
            if ((unsigned __int16)a3 != 2 && (unsigned __int16)a3 != 1029)
                return 0;
            *(_DWORD*)dword_5B9618 = 0x88770118;
            EndDialog(hDlg, 0);
            break;
        case 2u:
            KillTimer(hDlg, 0);
            break;
        case 0x110u:
            dword_5B9618 = a4;
            if (dword_5B9610)
                SetDlgItemTextA(hDlg, 1032, aWaitingForConn);
            else
                SetDlgItemTextA(hDlg, 1032, aFindingGame);
            SetTimer(hDlg, 0, 0xFAu, 0);
            break;
        default:
            return 0;
        }
    }
    return 1;
}
// 5B9610: using guessed type int dword_5B9610;
// 5B9618: using guessed type int dword_5B9618;
// 5BAE80: using guessed type int dword_5BAE80;

//----- (0051F32A) --------------------------------------------------------
BOOL __cdecl sub_51F32A(HWND hDlg)
{
    HWND v1; // eax
    HWND hWnd; // [esp+0h] [ebp-4h]

    hWnd = GetDlgItem(hDlg, 1001);
    SendMessageA(hWnd, 0x184u, 0, 0);
    if (dword_5B94E8)
        SendMessageA(hWnd, 0x180u, 0, (LPARAM)aLookingForGame);
    else
        SendMessageA(hWnd, 0x180u, 0, (LPARAM)aClickStartSear);
    SendMessageA(hWnd, 0x19Au, 0, 0);
    SendMessageA(hWnd, 0x186u, 0, 0);
    v1 = GetDlgItem(hDlg, 1002);
    return EnableWindow(v1, 0);
}
// 5B94E8: using guessed type int dword_5B94E8;

//----- (00520111) --------------------------------------------------------
int sub_520111()
{
    int result; // eax
    int v1; // [esp+4h] [ebp-8h]
    void* v2; // [esp+8h] [ebp-4h]

    result = dword_5B9600;
    v1 = dword_5B9600;
    while ((_UNKNOWN*)v1 != &unk_5B94F0)
    {
        v2 = (void*)v1;
        result = *(_DWORD*)(v1 + 272);
        v1 = result;
        if (v2)
            result = sub_585E40(v2);
    }
    dword_5B9600 = (int)&unk_5B94F0;
    return result;
}
// 5B9600: using guessed type int dword_5B9600;

//----- (0051FF63) --------------------------------------------------------
INT_PTR __stdcall sub_51FF63(HWND hDlg, UINT a2, WPARAM a3, LPARAM a4)
{
    INT_PTR result; // eax
    HWND v5; // [esp+0h] [ebp-1Ch]
    LRESULT wParam; // [esp+4h] [ebp-18h]
    BOOL Translated[2]; // [esp+8h] [ebp-14h] BYREF
    int i; // [esp+10h] [ebp-Ch]
    HWND hWnd; // [esp+14h] [ebp-8h]

    if (a2 == 272)
    {
        SetDlgItemTextA(hDlg, 1007, (LPCSTR)&byte_5BAD14);
        CheckDlgButton(hDlg, 1017, 1u);
        SetDlgItemInt(hDlg, 1006, 4u, 0);
        hWnd = GetDlgItem(hDlg, 1009);
        for (i = 0; i < 6; ++i)
        {
            wParam = SendMessageA(hWnd, 0x143u, 0, (LPARAM)&aGoodFluffers[36 * i]);
            if (dword_5AD580[9 * i] == 23)
                SendMessageA(hWnd, 0x14Eu, wParam, 0);
        }
        result = 1;
    }
    else if (a2 == 273)
    {
        if ((unsigned __int16)a3 == 1)
        {
            v5 = GetDlgItem(hDlg, 1009);
            Translated[1] = SendMessageA(v5, 0x147u, 0, 0);
            if (GetDlgItemTextA(hDlg, 1007, (LPSTR)&byte_5BAD14, 256))
            {
                dword_5B9970 = GetDlgItemInt(hDlg, 1006, Translated, 0);
                dword_5B9F08 = IsDlgButtonChecked(hDlg, 1017) == 1;
                EndDialog(hDlg, 1);
            }
            result = 1;
        }
        else
        {
            if ((unsigned __int16)a3 == 2)
                EndDialog(hDlg, 2);
            result = 1;
        }
    }
    else
    {
        result = 0;
    }
    return result;
}
// 5AD580: using guessed type int dword_5AD580[];
// 5B9970: using guessed type int dword_5B9970;
// 5B9F08: using guessed type int dword_5B9F08;

//----- (00520870) --------------------------------------------------------
int sub_520870()
{
    int result; // eax
    int i; // [esp+8h] [ebp-Ch]
    int v2; // [esp+Ch] [ebp-8h]

    strcpy(g_UselessVariableMultiplayerStage, "DirectPlay Multiplayer Stage");
    if (dword_5BABF0)
    {
        for (i = 0; i < 16; ++i)
        {
            dword_5B9EC8[i] = 0;
            dword_5B9930[i] = -1;
        }
        dword_5BACF8 = 0;
        dword_5B9EC8[0] = 2;
        dword_5B9930[0] = dword_668794;
        strcpy(byte_5B9730, (const char*)&String);
    }
    else
    {
        dword_5BACF8 = -1;
    }
    dword_5B9974 = 0;
    if (dword_5BABF0 && sub_5215A6() < 0)
        result = 0;
    else
        result = v2;
    return result;
}
// 520975: variable 'v2' is possibly undefined
// 5B9974: using guessed type int dword_5B9974;
// 5BABF0: using guessed type int dword_5BABF0;
// 5BACF8: using guessed type int dword_5BACF8;
// 668794: using guessed type int dword_668794;

//----- (00521345) --------------------------------------------------------
int __cdecl online_maybeWriteTextChat(const char* a1)
{
    int result; // eax

    emptyFunction0();
    if ((dword_5B9F24 + 1) % 10 == dword_5B9F20)
        dword_5B9F20 = (dword_5B9F20 + 1) % 10;
    else
        ++dword_5B9F1C;
    dword_5B9978[34 * dword_5B9F24] = 300;
    dword_5B997C[34 * dword_5B9F24] = 0;
    strcpy(&byte_5B9980[136 * dword_5B9F24], a1);
    result = (dword_5B9F24 + 1) / 10;
    dword_5B9F24 = (dword_5B9F24 + 1) % 10;
    return result;
}
// 5B9978: using guessed type int dword_5B9978[];
// 5B997C: using guessed type int dword_5B997C[];
// 5B9F1C: using guessed type int dword_5B9F1C;
// 5B9F20: using guessed type int dword_5B9F20;
// 5B9F24: using guessed type int dword_5B9F24;

//----- (005210FE) --------------------------------------------------------
int __cdecl sub_5210FE(int* a1)
{
    int v2; // [esp+0h] [ebp-18h]
    int v3; // [esp+14h] [ebp-4h]
    int v4; // [esp+14h] [ebp-4h]

    v2 = *a1;
    if ((unsigned int)*a1 > 0x31)
    {
        if (v2 == 265)
            online_maybeWriteTextChat(*(const char**)(a1[5] + 8));
    }
    else
    {
        switch (v2)
        {
        case 49:
            if (dword_5BABF0)
                return -2147467259;
            PostQuitMessage(6);
            break;
        case 3:
            if (a1[1] == 1)
            {
                if (dword_5BABF0)
                {
                    v3 = sub_5216ED((int)a1);
                    if (v3 < 0)
                        return v3;
                }
            }
            break;
        case 5:
            if (dword_5BABF0)
            {
                v4 = sub_5218AD((int)a1);
                if (v4 < 0)
                    return v4;
            }
            break;
        }
    }
    return 0;
}
// 5BABF0: using guessed type int dword_5BABF0;

//----- (00528CF7) --------------------------------------------------------
void __cdecl online_PlayerFluffedPlayer(int victim, int attacker)
{
    const char* v2; // eax
    const char* v3; // eax
    const char* v4; // eax
    const char* v5; // eax
    const char* v6; // eax
    const char* v7; // eax
    const char* v8; // eax
    const char* v9; // [esp-4h] [ebp-84h]
    char Buffer[128]; // [esp+0h] [ebp-80h] BYREF

    if (victim)
    {
        if (attacker)
        {
            if (attacker == victim)
            {
                //Check is victim local player
                if ((*(_DWORD*)(victim + 120) & 1) != 0)
                {
                    //Victim is local player
                    v4 = (const char*)loadLanguageString(414);
                    sprintf(Buffer, v4);
                }
                else
                {
                    //Victim is enemy player
                    v5 = (const char*)loadLanguageString(415);
                    sprintf(Buffer, "%s %s", &byte_5B9730[32 * *(_DWORD*)(victim + 128)], v5);
                }
            }
            else if ((*(_DWORD*)(victim + 120) & 1) != 0)
            {
                v6 = (const char*)loadLanguageString(416);
                sprintf(Buffer, "%s %s", &byte_5B9730[32 * *(_DWORD*)(attacker + 128)], v6);
            }
            else
            {
                v9 = &byte_5B9730[32 * *(_DWORD*)(victim + 128)];
                if ((*(_DWORD*)(attacker + 120) & 1) != 0)
                {
                    v7 = (const char*)loadLanguageString(417);
                    sprintf(Buffer, "%s %s", v7, v9);
                }
                else
                {
                    v8 = (const char*)loadLanguageString(418);
                    sprintf(Buffer, "%s %s %s", &byte_5B9730[32 * *(_DWORD*)(attacker + 128)], v8, v9);
                }
            }
        }
        else if ((*(_DWORD*)(victim + 120) & 1) != 0)
        {
            v2 = (const char*)loadLanguageString(412);
            sprintf(Buffer, v2);
        }
        else
        {
            v3 = (const char*)loadLanguageString(413);
            sprintf(Buffer, "%s %s", &byte_5B9730[32 * *(_DWORD*)(victim + 128)], v3);
        }
        online_maybeWriteTextChat(Buffer);
    }
}

//----- (00529BB6) --------------------------------------------------------
int __cdecl sub_529BB6(int a1, FILE* a2)
{
    int v3; // [esp+8h] [ebp-Ch]
    _DWORD* v4; // [esp+10h] [ebp-4h]

    v4 = (_DWORD*)dword_6043C8[*(_DWORD*)a1];
    switch (*(_DWORD*)(a1 + 12))
    {
    case 1:
        sub_5271BB((int)v4, (__int16)a2[1]._ptr, a2, (int)&a2->_file);
        break;
    case 2:
        sub_5269E0(v4);
        break;
    case 3:
        sub_529D71((int)v4, (__int16)a2->_ptr);
        break;
    case 4:
        sub_4AEA49((int)v4, (int)a2->_ptr, a2->_cnt);
        break;
    case 5:
        *(_WORD*)(v4[106] + 100) = a2->_ptr;
        emptyFunction0();
        if (a2->_cnt == -1)
            v3 = 0;
        else
            v3 = dword_6043C8[a2->_cnt];
        if (a2->_base == (char*)-1)
            online_PlayerFluffedPlayer(v3, 0);
        else
            online_PlayerFluffedPlayer(v3, dword_6043C8[(int)a2->_base]);
        break;
    case 6:
        if (dword_5BABF0)
            sub_528F60((_DWORD*)dword_6043C8[*(_DWORD*)a1], (int)a2->_ptr);
        break;
    case 7:
        if (!dword_5BABF0)
        {
            emptyFunction0();
            sub_48E3B1((_DWORD*)dword_6043C8[*(_DWORD*)a1], (int)a2->_ptr);
        }
        break;
    default:
        return 0;
    }
    return 0;
}
// 5BABF0: using guessed type int dword_5BABF0;
// 6043C8: using guessed type int dword_6043C8[];

//----- (005293FE) --------------------------------------------------------
int __cdecl sub_5293FE(int a1, int* a2, unsigned int a3, int a4, unsigned int a5)
{
    int v5; // eax
    const char* v6; // eax
    int v8; // [esp+8h] [ebp-4Ch]
    char Buffer[32]; // [esp+Ch] [ebp-48h] BYREF
    int* v10; // [esp+2Ch] [ebp-28h]
    int* v11; // [esp+30h] [ebp-24h]
    int* v12; // [esp+34h] [ebp-20h]
    int* v13; // [esp+38h] [ebp-1Ch]
    int v14; // [esp+3Ch] [ebp-18h]
    int* v15; // [esp+40h] [ebp-14h]
    int* v16; // [esp+44h] [ebp-10h]
    int* v17; // [esp+48h] [ebp-Ch]
    int* v18; // [esp+4Ch] [ebp-8h]
    int* v19; // [esp+50h] [ebp-4h]

    v14 = 0;
    v11 = a2;
    v19 = a2;
    v10 = a2;
    v12 = a2;
    v17 = a2;
    v18 = a2;
    v15 = a2;
    v13 = a2;
    v16 = a2;
    if (a4 && !dword_5B9930[a2[1]])
        dword_5B9930[a2[1]] = a4;
    if (dword_5BAE98)
    {
        if (*a2 == 100)
        {
            if (!sub_521DA4(a2[1]) || (*(_DWORD*)(dword_6043C8[a2[1]] + 120) & 8) != 0)
            {
                if (!sub_521DA4(a2[1]) && (*(_DWORD*)(dword_6043C8[a2[1]] + 120) & 8) != 0)
                {
                    *(_DWORD*)(dword_6043C8[a2[1]] + 120) &= 0xFFFFFFF7;
                    v8 = *(_DWORD*)(dword_6043C8[a2[1]] + 424);
                    *(_WORD*)(v8 + 100) = 0;
                    *(_WORD*)(v8 + 138) = 0;
                    sub_52A83F(a2[1]);
                }
            }
            else
            {
                v5 = *(_DWORD*)(dword_6043C8[a2[1]] + 120);
                LOBYTE(v5) = v5 | 8;
                *(_DWORD*)(dword_6043C8[a2[1]] + 120) = v5;
                sub_52C45C(dword_5BACF8);
                sub_5242F0();
                v6 = (const char*)loadLanguageString(408);
                sprintf(Buffer, "%s %s", &byte_5B9730[32 * a2[1]], v6);
                online_maybeWriteTextChat(Buffer);
                sub_52358F();
            }
        }
        switch (*a2)
        {
        case 'd':
            if (sub_52983C(a2, a3))
            {
                sub_52A880(a4, a2[1], *a2);
                sub_52A83F(a2[1]);
            }
            break;
        case 'e':
            v14 = sub_529B4B(v11 + 2, (int)(v11 + 7));
            break;
        case 'f':
            v14 = sub_529BB6((int)(v11 + 2), (FILE*)(v11 + 7));
            break;
        case 'g':
            v14 = sub_529D92(a2[1], v15 + 2);
            break;
        case 'h':
            sub_528C6B(v19[2]);
            break;
        case 'i':
            v14 = sub_528EB0((int)v12);
            break;
        case 'j':
            emptyFunction0();
            sub_52A985(a2[1]);
            break;
        case 'k':
            v14 = sub_529EFC(v17 + 2, (int*)((char*)v17 + 30));
            break;
        case 'l':
            v14 = sub_529F89(*((_WORD*)v18 + 4));
            break;
        case 'm':
            v14 = sub_529F9A(v18[1]);
            break;
        case 'n':
            v14 = sub_529FE4((int)v13 + 10);
            break;
        case 'o':
            v14 = sub_52A00A(v16[1]);
            break;
        default:
            v14 = sub_520E43(a2, a3, a4, a5);
            break;
        }
    }
    else
    {
        switch (*a2)
        {
        case 'g':
            v14 = sub_529D92(a2[1], a2 + 2);
            break;
        case 'i':
            v14 = sub_528EB0((int)v12);
            break;
        case 'j':
            emptyFunction0();
            sub_52A985(a2[1]);
            break;
        case 'l':
            v14 = sub_529F89(*((_WORD*)v18 + 4));
            break;
        case 'm':
            v14 = sub_529F9A(v18[1]);
            break;
        default:
            return v14;
        }
    }
    return v14;
}
// 5BACF8: using guessed type int dword_5BACF8;
// 5BAE98: using guessed type int dword_5BAE98;
// 6043C8: using guessed type int dword_6043C8[];

//----- (0052C6C3) --------------------------------------------------------
void __cdecl sub_52C6C3(int a1)
{
    int v1; // [esp+0h] [ebp-Ch]
    unsigned int v2; // [esp+0h] [ebp-Ch]
    unsigned int v3; // [esp+0h] [ebp-Ch]
    int j; // [esp+4h] [ebp-8h]
    int i; // [esp+8h] [ebp-4h]

    v1 = sub_52CA1A();
    if ((byte_5BDC54 & 1) == 0)
    {
        byte_5BDC54 |= 1u;
        dword_5BDC50 = v1;
    }
    if (dword_5BABF0)
    {
        dword_5BE258 = sub_52CA1A();
        emptyFunction0();
    }
    if (dword_5BABF0)
        sub_5243C7(dword_6041E4);
    emptyFunction0();
    for (i = 0; i < 16; ++i)
    {
        for (j = 0; j < 5; ++j)
        {
            dword_5BDC58[24 * i + j] = 0;
            dword_5BDC6C[24 * i + j] = 0;
            dword_5BDC80[24 * i + j] = 0;
            dword_5BDC94[24 * i + j] = 0;
        }
        dword_5BDCA8[24 * i] = 0;
        dword_5BDCAC[24 * i] = 0;
        dword_5BDCB0[24 * i] = 0;
        dword_5BDCB4[24 * i] = 0;
    }
    dword_5BE25C = 0;
    emptyFunction0();
    if (!dword_5BABF0)
    {
        while (!sub_52C68F())
        {
            v2 = sub_52CA1A();
            if (v2 >= dword_5BDC50)
            {
                sub_52AA53();
                dword_5BDC50 = v2 + 100;
            }
            sub_52C94A(a1);
        }
    }
    emptyFunction0();
    emptyFunction0();
    dword_5BDC50 = 0;
    while (!sub_52C95B() && !dword_5BE25C)
    {
        v3 = sub_52CA1A();
        if (v3 >= dword_5BDC50)
        {
            if (dword_5BABF0)
            {
                if (sub_52C9C4())
                {
                    dword_5BDCB0[24 * dword_5BACF8] = 1;
                    sub_52BE05();
                    sub_52BE05();
                    sub_52BE05();
                }
            }
            else if (dword_5BDCB0[24 * dword_5BACF8])
            {
                sub_52BE05();
            }
            else
            {
                sub_52BCE5();
            }
            dword_5BDC50 = v3 + 100;
        }
        sub_52C94A(a1);
    }
    dword_5BE25C = 1;
    sub_52C4B0();
    emptyFunction0();
}
// 5243C7: using guessed type _DWORD __cdecl sub_5243C7(_DWORD);
// 52AA53: using guessed type int sub_52AA53(void);
// 52BCE5: using guessed type int sub_52BCE5(void);
// 52BE05: using guessed type int sub_52BE05(void);
// 52C4B0: using guessed type int sub_52C4B0(void);
// 52C68F: using guessed type int sub_52C68F(void);
// 52C94A: using guessed type _DWORD __cdecl sub_52C94A(_DWORD);
// 52C95B: using guessed type int sub_52C95B(void);
// 52CA1A: using guessed type int sub_52CA1A(void);
// 5BABF0: using guessed type int dword_5BABF0;
// 5BACF8: using guessed type int dword_5BACF8;
// 5BDC50: using guessed type int dword_5BDC50;
// 5BDC54: using guessed type char byte_5BDC54;
// 5BDC58: using guessed type int dword_5BDC58[];
// 5BDC6C: using guessed type int dword_5BDC6C[];
// 5BDC80: using guessed type int dword_5BDC80[];
// 5BDC94: using guessed type int dword_5BDC94[];
// 5BDCA8: using guessed type int dword_5BDCA8[];
// 5BDCAC: using guessed type int dword_5BDCAC[];
// 5BDCB0: using guessed type int dword_5BDCB0[];
// 5BE258: using guessed type int dword_5BE258;
// 5BE25C: using guessed type int dword_5BE25C;
// 6041E4: using guessed type int dword_6041E4;

//----- (005218AD) --------------------------------------------------------
int __cdecl sub_5218AD(int a1)
{
    int result; // eax
    const char* v2; // eax
    char Buffer[128]; // [esp+8h] [ebp-88h] BYREF
    int v4; // [esp+88h] [ebp-8h]
    _DWORD* v5; // [esp+8Ch] [ebp-4h]

    if (!dword_5BABF0)
        return -2147467259;
    emptyFunction0();
    if (!*(_DWORD*)(a1 + 20))
        goto LABEL_10;
    v5 = *(_DWORD**)(a1 + 20);
    if (!v5)
        goto LABEL_10;
    if (!dword_5BAE98)
    {
        v2 = (const char*)loadLanguageString(409);
        sprintf(Buffer, "%s %s", &byte_5B9730[32 * *v5], v2);
        sub_521286(Buffer);
        sub_52358F();
    }
    if ((dword_5B9EC8[*v5] & 7) == 2
        && (dword_5B9EC8[*v5] = 0,
            dword_5B9930[*v5] = -1,
            strcpy(&byte_5B9730[32 * *v5], byte_5B9F2C),
            v4 = sub_5215A6(),
            v4 < 0))
    {
        result = v4;
    }
    else
    {
    LABEL_10:
        result = 0;
    }
    return result;
}
// 5BABF0: using guessed type int dword_5BABF0;
// 5BAE98: using guessed type int dword_5BAE98;

//----- (0052C95B) --------------------------------------------------------
int sub_52C95B()
{
    if (dword_5BAE98)
        return dword_5BDCB0[24 * dword_5BACF8];
    return dword_5BDCB0[24 * dword_5BACF8] && dword_5BDCB0[24 * dword_5BAD06];
}
// 5BACF8: using guessed type int dword_5BACF8;
// 5BAD06: using guessed type int dword_5BAD06;
// 5BAE98: using guessed type int dword_5BAE98;
// 5BDCB0: using guessed type int dword_5BDCB0[];