#include "gamespy.h"

#include <cstdio>
#include "debug.h"

char cp[] = "master.gamespy.com"; // idb

int g_UseGameSpy; // weak

//----- (00523060) --------------------------------------------------------
int __cdecl sub_523060(char* Buffer)
{
	writeDebug("GameSpy: Basic Callback");
	return sprintf(Buffer, "\\gamename\\%s\\gamever\\%s\\location\\%d", aFurfighters, a001, dword_5BABCC);
}
// 5BABCC: using guessed type int dword_5BABCC;

//----- (00523093) --------------------------------------------------------
int __cdecl sub_523093(char* a1)
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
        sprintf(Buffer, aMapnameLobby);
        v1 = strlen(Buffer) + 1;
        v2 = &a1[strlen(a1) + 1];
    }
    qmemcpy(v2 - 1, Buffer, v1);
    v5 = 0;
    for (i = 0; i < dword_5B9970; ++i)
    {
        if (sub_521DA4(i))
            ++v5;
    }
    sprintf(Buffer, "\\numplayers\\%d", v5);
    strcat(a1, Buffer);
    sprintf(Buffer, "\\maxplayers\\%d", dword_5B9970);
    strcat(a1, Buffer);
    sprintf(Buffer, "\\gamemode\\%s", aOpenplaying);
    result = 0;
    strcat(a1, Buffer);
    return result;
}
// 5B9970: using guessed type int dword_5B9970;
// 5BAD06: using guessed type int dword_5BAD06;
// 5BAE98: using guessed type int dword_5BAE98;
// 604302: using guessed type __int16 word_604302;

//----- (005232EC) --------------------------------------------------------
int __cdecl sub_5232EC(char* a1)
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
int __cdecl sub_5233A4(char* a1)
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
void sub_52348B()
{
    char v0[32]; // [esp+0h] [ebp-24h] BYREF

    if (g_UseGameSpy && dword_668784 == 1)
    {
        if (dword_5BABEC)
            sub_52354B();
        strcpy(v0, "furfighters");
        if (sub_51B880(
            0,
            0,
            0,
            (int)aFurfighters_0,
            (int)v0,
            (int)sub_523060,
            (int)sub_523093,
            (int)sub_5232EC,
            (int)sub_5233A4,
            0))
        {
            writeDebug("GameSpy: Init FALIED!");
        }
        else
        {
            writeDebug("GameSpy: Init OK!");
            dword_5BABEC = 1;
        }
    }
}
// 5B9F50: using guessed type int g_UseGameSpy;
// 5BABEC: using guessed type int dword_5BABEC;
// 668784: using guessed type int dword_668784;