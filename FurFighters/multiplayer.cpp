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

int __cdecl sub_520169(HWND hWnd); // idb
int __stdcall sub_51EA40(int a1, void* a2, size_t Size, int a4, int a5, HWND a6);
int __stdcall sub_51EB97(_DWORD* a1, void* a2, size_t Size, int a4, int a5, void** a6);
int __cdecl sub_51F3CC(HWND hDlg); // idb
int __cdecl sub_51F809(HWND hDlg); // idb
int __cdecl sub_51FC21(HWND hWnd); // idb

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
        sprintf(String, "%s - Multiplayer Games", aFurballs);
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