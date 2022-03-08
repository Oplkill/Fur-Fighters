#include "gamespy.h"

#include <cstdio>
#include "debug.h"

char cp[] = "master.gamespy.com"; // idb

int g_UseGameSpy; // weak
int g_GameSpyConnectionType; // weak
int g_UselessVariable6; // weak
int g_IsGameSpyInited; // weak

int __cdecl GameSpyInitiliazation(int a1, char* cp, int hostshort, const char* a4, const char* a5, int a6, int a7, int a8, int a9, int a10);
int __cdecl GameSpyCallback(char* Buffer);
int __cdecl GameSpyInfoCallback(char* a1);
int __cdecl GameSpyRulesCallback(char* a1);
int __cdecl GameSpyPlayersCallback(char* a1);

//----- (00523060) --------------------------------------------------------
int __cdecl GameSpyCallback(char* Buffer)
{
	writeDebug("GameSpy: Basic Callback");
	return sprintf(Buffer, "\\gamename\\%s\\gamever\\%s\\location\\%d", "furfighters", "0.01", g_UselessVariable6);
}
// 5BABCC: using guessed type int g_UselessVariable6;

//----- (00523093) --------------------------------------------------------
int __cdecl GameSpyInfoCallback(char* a1)
{
    unsigned int v1; // ebx
    char* v2; // edi
    int result; // eax
    int i; // [esp+Ch] [ebp-D0h]
    int v5; // [esp+10h] [ebp-CCh]
    char Buffer[200]; // [esp+14h] [ebp-C8h] BYREF

    writeDebug("GameSpy: Info Callback");
    sprintf(Buffer, "\\hostname\\%s", &byte_5B9730[32 * dword_5BAD06]);
    strcat(a1, Buffer);
    if (dword_5BAE98)
    {
        sprintf(Buffer, "\\mapname\\%s", (const char*)&unk_5CF1A0 + 140 * word_604302);
        v1 = strlen(Buffer) + 1;
        v2 = &a1[strlen(a1) + 1];
    }
    else
    {
        sprintf(Buffer, "\\mapname\\Lobby");
        v1 = strlen(Buffer) + 1;
        v2 = &a1[strlen(a1) + 1];
    }
    qmemcpy(v2 - 1, Buffer, v1);
    v5 = 0;
    for (i = 0; i < g_maybeMaxPlayers; ++i)
    {
        if (sub_521DA4(i))
            ++v5;
    }
    sprintf(Buffer, "\\numplayers\\%d", v5);
    strcat(a1, Buffer);
    sprintf(Buffer, "\\maxplayers\\%d", g_maybeMaxPlayers);
    strcat(a1, Buffer);
    sprintf(Buffer, "\\gamemode\\%s", aOpenplaying);
    result = 0;
    strcat(a1, Buffer);
    return result;
}
// 5B9970: using guessed type int g_maybeMaxPlayers;
// 5BAD06: using guessed type int dword_5BAD06;
// 5BAE98: using guessed type int dword_5BAE98;
// 604302: using guessed type __int16 word_604302;

//----- (005232EC) --------------------------------------------------------
int __cdecl GameSpyRulesCallback(char* a1)
{
    int result; // eax
    char Buffer[80]; // [esp+Ch] [ebp-50h] BYREF

    result = writeDebug("GameSpy: Rules Callback");
    if (dword_5BAE98)
    {
        sprintf(Buffer, "\\timelimit\\%d", dword_6041E4);
        strcat(a1, Buffer);
        sprintf(Buffer, "\\flufflimit\\%d", byte_6041E8);
        result = 0;
        strcat(a1, Buffer);
    }
    return result;
}
// 5BAE98: using guessed type int dword_5BAE98;
// 6041E4: using guessed type int dword_6041E4;
// 6041E8: using guessed type char byte_6041E8;

//----- (005233A4) --------------------------------------------------------
int __cdecl GameSpyPlayersCallback(char* a1)
{
    int result; // eax
    int v2; // [esp+Ch] [ebp-ACh]
    char Buffer[160]; // [esp+10h] [ebp-A8h] BYREF
    int i; // [esp+B0h] [ebp-8h]

    v2 = 0;
    result = writeDebug("GameSpy: Players Callback");
    if (dword_5BAE98)
    {
        for (i = 0; i < 16; ++i)
        {
            if (sub_521DA4(i))
            {
                ++v2;
                sprintf(
                    Buffer,
                    "\\player_%d\\%s\\fluffs_%d\\%d\\",
                    v2,
                    &byte_5B9730[32 * i],
                    v2,
                    *(__int16*)(dword_5CB9A0[i] + 100));
                strcat(a1, Buffer);
            }
            result = i + 1;
        }
    }
    return result;
}
// 5BAE98: using guessed type int dword_5BAE98;

//----- (0052348B) --------------------------------------------------------
void GameSpyInitiliazation0()
{
    char v0[32]; // [esp+0h] [ebp-24h] BYREF

    if (g_UseGameSpy && g_GameSpyConnectionType == GameSpy::Host)
    {
        if (g_IsGameSpyInited)
            CloseGameSpy();
        strcpy(v0, "furfighters");
        if (GameSpyInitiliazation(
            0,
            0,
            0,
            "furfighters",
            v0,
            (int)GameSpyCallback,
            (int)GameSpyInfoCallback,
            (int)GameSpyRulesCallback,
            (int)GameSpyPlayersCallback,
            0))
        {
            writeDebug("GameSpy: Init FALIED!");
        }
        else
        {
            writeDebug("GameSpy: Init OK!");
            g_IsGameSpyInited = 1;
        }
    }
}
// 5B9F50: using guessed type int g_UseGameSpy;
// 5BABEC: using guessed type int g_IsGameSpyInited;
// 668784: using guessed type int g_GameSpyConnectionType;

//----- (0051B880) --------------------------------------------------------
int __cdecl GameSpyInitiliazation(int a1, char* cp, int hostshort, const char *a4, const char *a5, int a6, int a7, int a8, int a9, int a10)
{
    u_long v11; // eax
    struct sockaddr name; // [esp+8h] [ebp-24h] BYREF
    int v13; // [esp+18h] [ebp-14h]
    int namelen; // [esp+1Ch] [ebp-10h] BYREF
    int v15; // [esp+20h] [ebp-Ch]
    SOCKET s; // [esp+24h] [ebp-8h]
    int v17; // [esp+28h] [ebp-4h]

    if (a1)
        *(_DWORD*)a1 = 0;
    sub_51E1FA();
    s = socket(2, 2, 17);
    v17 = s;
    if (s == -1)
        return 1;
    v13 = hostshort + 100;
    while (hostshort < v13)
    {
        sub_51BD75(cp, hostshort, (int)&name, 0);
        v11 = htonl(0x7F000001u);
        if (*(_DWORD*)&name.sa_data[2] == v11)
            *(_DWORD*)&name.sa_data[2] = 0;
        v15 = bind(s, &name, 16);
        if (!v15)
            break;
        ++hostshort;
    }
    if (v15)
        return 2;
    if (!hostshort)
    {
        namelen = 16;
        v15 = getsockname(s, &name, &namelen);
        if (v15)
            return 2;
        hostshort = ntohs(*(u_short*)name.sa_data);
    }
    if (a1)
    {
        off_5AD418 = malloc(0xF0u);
        *(_DWORD*)a1 = off_5AD418;
    }
    else
    {
        off_5AD418 = &unk_5AD328;
    }
    strcpy((char*)off_5AD418 + 8, a4);
    strcpy((char*)off_5AD418 + 72, a5);
    *((_DWORD*)off_5AD418 + 57) = hostshort;
    *((_DWORD*)off_5AD418 + 54) = 0;
    *((_DWORD*)off_5AD418 + 1) = v17;
    *(_DWORD*)off_5AD418 = s;
    *((_DWORD*)off_5AD418 + 56) = 0;
    *((_DWORD*)off_5AD418 + 55) = 1;
    *((_BYTE*)off_5AD418 + 232) = 1;
    *((_DWORD*)off_5AD418 + 59) = a10;
    *((_DWORD*)off_5AD418 + 50) = a6;
    *((_DWORD*)off_5AD418 + 51) = a7;
    *((_DWORD*)off_5AD418 + 53) = a9;
    *((_DWORD*)off_5AD418 + 52) = a8;
    return sub_51BD57(v17, ::cp, 0x6CFCu);
}
// 5AD418: using guessed type void *off_5AD418;