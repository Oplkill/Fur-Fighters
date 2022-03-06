#include "multiplayer.h"

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
void __cdecl sub_5239D2()
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