#include "save.h"

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

int dword_5D3660; // weak
const int g_SaveFileNumElements = 188228;

//----- (0044CC7D) --------------------------------------------------------
int __cdecl saveGame(int a1, int a2)
{
    FILE* Stream; // [esp+8h] [ebp-8h]
    int i; // [esp+Ch] [ebp-4h]

    dword_6045FC = 100;
    dword_5D3660 = 61644;
    qmemcpy(&unk_5D3664, &byte_6041D4, 64u);
    if (a2)
    {
        for (i = 0; i < 20; ++i)
        {
            word_5D36A4[4704 * i] = 1;
            strcpy((char*)&unk_5D36A6 + 9408 * i, "EMPTY");
        }
    }
    else
    {
        word_5D36A4[4704 * a1] = 0;
    }
    if (a1 >= 0)
    {
        qmemcpy((char*)&unk_5D36DC + 9408 * a1, word_6015C8, 128u);
        word_5D375C[4704 * a1] = word_601DCC;
        word_5D375E[4704 * a1] = word_601DCE;
        word_5D3760[4704 * a1] = word_601DD0;
        qmemcpy((char*)&unk_5D3764 + 9408 * a1, word_601DD4, 9216u);
    }
    writeDebug("********************************* Creating game save **************************");
    Stream = fopen("SAVE\\FUR_FIGHTERS.SAV", "wb");
    if (!Stream)
        fatalError("Cannot create save game.");
    if (writeInFile(&dword_5D3660, 1u, g_SaveFileNumElements, Stream) != g_SaveFileNumElements)
        fatalError("Cannot write to FF save game.");
    return fclose(Stream);
}
// 5D3660: using guessed type int dword_5D3660;
// 5D36A4: using guessed type __int16 word_5D36A4[];
// 5D375C: using guessed type __int16 word_5D375C[];
// 5D375E: using guessed type __int16 word_5D375E[];
// 5D3760: using guessed type __int16 word_5D3760[];
// 6015C8: using guessed type __int16 word_6015C8;
// 601DCC: using guessed type __int16 word_601DCC;
// 601DCE: using guessed type __int16 word_601DCE;
// 601DD0: using guessed type __int16 word_601DD0;
// 601DD4: using guessed type __int16 word_601DD4[];
// 6041D4: using guessed type char byte_6041D4;
// 6045FC: using guessed type int dword_6045FC;

//----- (0044CEE0) --------------------------------------------------------
int loadGameSave()
{
    FILE* Stream; // [esp+0h] [ebp-8h]

    Stream = fopen("SAVE\\FUR_FIGHTERS.SAV", "rb");
    if (!Stream)
    {
        saveGame(-1, 1);
        Stream = fopen("SAVE\\FUR_FIGHTERS.SAV", "rb");
        if (!Stream)
            fatalError("Cannot open or create the game save file.");
    }
    fseek(Stream, 0, 2);
    if (ftell(Stream) != g_SaveFileNumElements)
        fatalError("Saved game file is invalid.");
    fseek(Stream, 0, 0);
    readFromFile(&dword_5D3660, 1u, g_SaveFileNumElements, Stream);
    fclose(Stream);
    return 1;
}
// 5D3660: using guessed type int dword_5D3660;