#include "defs.h"

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

_UNKNOWN unk_5BAEA8; // weak
_UNKNOWN unk_5BAEA4; // weak
_UNKNOWN unk_5BAEAC; // weak
char Destination[32]; // idb

int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd);
int sub_45C710(HRESULT initResult);
int __stdcall sub_523623(HINSTANCE a1, HINSTANCE a2, LPSTR a3, int a4);
int __cdecl parseArguments(LPSTR a1);
int sub_51ADB7();
int sub_4494D3();
int sub_575614();

//----- (0051A330) --------------------------------------------------------
int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    HRESULT initResult; // [esp+0h] [ebp-4h]

    *(_DWORD*)&g_IsDebug = 1;
    initResult = CoInitialize(0);
    if (initResult < 0)
        return 0;
    g_hInstance = hInstance;
    strcpy(textUseless1, "HomeW_HB");
    g_UseGameSpy = 0;
    initDebug(3);
    emptyFunction0("Network Debug");
    if (!initSettings(hInstance))
        return 0;
    sub_523623(hInstance, hPrevInstance, lpCmdLine, nShowCmd);
    SetFocus(hWnd);
    parseArguments(lpCmdLine);
    some_init();
    ClipCursor(&Point);
    sub_45C710(initResult);
    sub_51ADB7();
    PostQuitMessage(0);
    while (1)
    {
        while (!PeekMessageA(&Msg, 0, 0, 0, 0))
        {
            if (!dword_6673E0)
                WaitMessage();
        }
        if (!GetMessageA(&Msg, 0, 0, 0))
            break;
        TranslateMessage(&Msg);
        DispatchMessageA(&Msg);
    }
    ClipCursor(0);
    unloadGame();
    return Msg.wParam;
}
// 45C710: using guessed type int __cdecl sub_45C710(_DWORD);
// 51ADB7: using guessed type int sub_51ADB7(void);
// 51AE27: using guessed type int __cdecl parseArguments(_DWORD);
// 5227D0: using guessed type int sub_5227D0(const char *, ...);
// 523623: using guessed type _DWORD __stdcall sub_523623(_DWORD, _DWORD, _DWORD, _DWORD);
// 5B9F50: using guessed type int g_UseGameSpy;
// 6673E0: using guessed type int dword_6673E0;

//----- (0045C710) --------------------------------------------------------
int sub_45C710(HRESULT initResult)
{
    int result; // eax

    while (1)
    {
        result = 12 * dword_604524;
        if (!dword_604464[3 * dword_604524])
            break;
        sub_45C835(dword_60446C[3 * dword_604524], dword_604468[3 * dword_604524]);
        dword_604524 = ((_BYTE)dword_604524 + 1) & 0xF;
    }
    return result;
}
// 604464: using guessed type int dword_604464[];
// 604468: using guessed type int dword_604468[];
// 604524: using guessed type int dword_604524;

//----- (00523623) --------------------------------------------------------
int __stdcall sub_523623(HINSTANCE a1, HINSTANCE a2, LPSTR a3, int a4)
{
    sub_5242F0();
    atexit(unloadGame);
    g_hInstanceInt = (int)a1;
    ShowCursor(1);
    loadRegisterSetting(regKey, "Player Name", &String, 0x20u, (int)&unk_5BAEA4);
    loadRegisterSetting(regKey, "Session Name", &byte_5BAD14, 0x100u, (int)&unk_5BAEA8);
    loadRegisterSetting(regKey, "Preferred Provider", &byte_5BABF4, 0x100u, (int)&unk_5BAEAC);
    pHandles = CreateEventA(0, 0, 0, 0);
    if (CoInitialize(0) < 0)
        emptyFunction0();
    else
        sub_523C7A(a1);
    return 1;
}
// 5BAE14: using guessed type int g_hInstanceInt;

//----- (0051AE27) --------------------------------------------------------
int __cdecl parseArguments(LPSTR a1)
{
    int v1; // eax
    char* v2; // eax
    unsigned int v3; // eax
    char v5[4]; // [esp+4h] [ebp-94h] BYREF
    char v6[4]; // [esp+8h] [ebp-90h] BYREF
    char v7[32]; // [esp+Ch] [ebp-8Ch] BYREF
    char v8[64]; // [esp+2Ch] [ebp-6Ch] BYREF
    int v9; // [esp+6Ch] [ebp-2Ch]
    char Source[32]; // [esp+70h] [ebp-28h] BYREF
    char* Buffer; // [esp+90h] [ebp-8h]
    int v12; // [esp+94h] [ebp-4h]

    Buffer = a1;
    v9 = 0;
    v12 = 0;
    g_CharacterType = -1;
    g_IsFirstPerson = 0;
    g_MultiplayerMaxPlayers = 16;
    writeDebug("-----------------------------------------------------");
    writeDebug("Command line [%s]", a1);
    do
    {
        v1 = *Buffer++;
        if (v1 == 45)
        {
            if (isStringsEquals(Buffer, "gamespy"))
            {
                g_UseGameSpy = 1;
                writeDebug("use Gamespy");
            }
            else if (isStringsEquals(Buffer, "connect"))
            {
                sscanf(Buffer, "connect %[^:]:%s", Source, &v8[32]);
                v9 = 1;
                writeDebug("Connect : [%s]", Source);
                strncpy(Destination, Source, 0x20u);
            }
            else if (isStringsEquals(Buffer, "name"))
            {
                sscanf(Buffer, "name \"%[^\"]\"", v8);
                if (strlen(v8) > 0x14)
                    v8[21] = 0;
                loadPlayerName(v8);
                writeDebug("Player Name : [%s]", v8);
            }
            else if (isStringsEquals(Buffer, "gamename"))
            {
                sscanf(Buffer, "gamename \"%[^\"]\"", v7);
                loadGameSessionName(v7);
                writeDebug("Game Name : [%s]", v7);
            }
            else if (isStringsEquals(Buffer, "character"))
            {
                sscanf(Buffer, "character %d", v6);
                g_CharacterType = *(_DWORD*)v6;
                writeDebug("Character : %d", *(_DWORD*)v6);
            }
            else if (isStringsEquals(Buffer, "roofus"))
            {
                g_CharacterType = 0; //todo move to character enum
                writeDebug("Roofus");
            }
            else if (isStringsEquals(Buffer, "juliette"))
            {
                g_CharacterType = 1;
                writeDebug("juliette");
            }
            else if (isStringsEquals(Buffer, "bungalow"))
            {
                g_CharacterType = 2;
                writeDebug("bungalow");
            }
            else if (isStringsEquals(Buffer, "tweek"))
            {
                g_CharacterType = 3;
                writeDebug("tweek");
            }
            else if (isStringsEquals(Buffer, "rico"))
            {
                g_CharacterType = 4;
                writeDebug("rico");
            }
            else if (isStringsEquals(Buffer, "chang"))
            {
                g_CharacterType = 5;
                writeDebug("chang");
            }
            else if (isStringsEquals(Buffer, "firstperson"))
            {
                g_IsFirstPerson = 1;
                writeDebug("First Person On");
            }
            else if (isStringsEquals(Buffer, "host"))
            {
                v12 = 1;
                writeDebug("host");
            }
            else
            {
                if (!isStringsEquals(Buffer, "maxplayer"))
                {
                    writeDebug("Unknown option \"-%s\"", Buffer);
                    v2 = getFormattedString("Unknown option \"-%s\"", Buffer);
                    fatalError(v2);
                }
                sscanf(Buffer, "maxplayer %d", v5);
                g_MultiplayerMaxPlayers = *(_DWORD*)v5;
                writeDebug("Max Players : %d", *(_DWORD*)v5);
            }
        }
    } while (*Buffer);
    if (g_CharacterType == -1)
    {
        v3 = time(0);
        srand(v3);
        g_CharacterType = rand() % 6;
    }
    if (v12)
    {
        dword_668784 = 1;
    }
    else if (v9)
    {
        dword_668784 = 2;
    }
    else
    {
        dword_668784 = 0;
    }
    return writeDebug(asc_5AD274);
}
// 523AB8: using guessed type _DWORD __cdecl loadPlayerName(_DWORD);
// 523B2D: using guessed type _DWORD __cdecl loadGameSessionName(_DWORD);
// 5B9F50: using guessed type int g_UseGameSpy;
// 604600: using guessed type int g_CharacterType;
// 604604: using guessed type int g_IsFirstPerson;
// 604A18: using guessed type int g_MultiplayerMaxPlayers;
// 668784: using guessed type int dword_668784;

//----- (0051ADB7) --------------------------------------------------------
int sub_51ADB7()
{
    sub_4494D3();
    return ShowCursor(1);
}

//----- (004494D3) --------------------------------------------------------
int sub_4494D3()
{
    void* v0; // ecx

    RegCloseKey(regKey);
    sub_568F8A(v0);
    emptyFunction4();
    sub_584E87(dword_66D820);
    return sub_575614();
}
// 4494E2: variable 'v0' is possibly undefined
// 53F828: using guessed type int sub_53F828(void);
// 575614: using guessed type int sub_575614(void);

//----- (00575614) --------------------------------------------------------
int sub_575614()
{
    int result; // eax

    if (dword_622330)
    {
        (*(void(__thiscall**)(int, int))(*(_DWORD*)dword_622044 + 32))(dword_622044, dword_622044);
        dword_622330 = 0;
    }
    if (dword_622044)
        (*(void(__thiscall**)(int, int))(*(_DWORD*)dword_622044 + 8))(dword_622044, dword_622044);
    result = (*(int(__thiscall**)(int, int))(*(_DWORD*)dword_62232C + 8))(dword_62232C, dword_62232C);
    if (dword_622334)
        result = (*(int(__thiscall**)(int, int))(*(_DWORD*)dword_622334 + 8))(dword_622334, dword_622334);
    return result;
}
// 622044: using guessed type int dword_622044;
// 62232C: using guessed type int dword_62232C;
// 622330: using guessed type int dword_622330;
// 622334: using guessed type int dword_622334;