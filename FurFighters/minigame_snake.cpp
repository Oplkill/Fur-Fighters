#include "minigame_snake.h"

#include "defs.h"
#include "minigame_global.h"
#include "maybe.h"
#include "files.h"
#include "tempplace.h"
#include "save.h"

char aBatnballsubgam[] = "batnballsubgame.chb"; // idb
char aSnakeTokenSpr[16] = "snake\\token.spr"; // weak
char aSnakeSnakeSpr[16] = "snake\\snake.spr"; // weak
char aSnakeBlankSpr[16] = "snake\\blank.spr"; // weak
char aSnakeBorderSpr[17] = "snake\\border.spr"; // weak
char aSnakeMaze1Spr[16] = "snake\\maze1.spr"; // weak
char aSnakeMaze2Spr[16] = "snake\\maze2.spr"; // weak
char aSnakeMaze3Spr[16] = "snake\\maze3.spr"; // weak
char aSnakeMaze4Spr[16] = "snake\\maze4.spr"; // weak
char aSnakeMaze5Spr[16] = "snake\\maze5.spr"; // weak
char aSnakeMaze6Spr[16] = "snake\\maze6.spr"; // weak
char aSnakeOverEnSpr[18] = "snake\\over_en.spr"; // weak
char aSnakePressEnSp[19] = "snake\\press_en.spr"; // weak
char aSnakeReadyEnSp[19] = "snake\\ready_en.spr"; // weak
char aSnakeOverFrSpr[18] = "snake\\over_fr.spr"; // weak
char aSnakePressFrSp[19] = "snake\\press_fr.spr"; // weak
char aSnakeReadyFrSp[19] = "snake\\ready_fr.spr"; // weak
char aSnakeOverGeSpr[18] = "snake\\over_ge.spr"; // weak
char aSnakePressGeSp[19] = "snake\\press_ge.spr"; // weak
char aSnakeReadyGeSp[19] = "snake\\ready_ge.spr"; // weak
char aSnakeOverEnSpr_0[18] = "snake\\over_en.spr"; // weak
char aSnakePressEnSp_0[19] = "snake\\press_en.spr"; // weak
char aSnakeReadyEnSp_0[19] = "snake\\ready_en.spr"; // weak
char aSnakeOverSpSpr[18] = "snake\\over_sp.spr"; // weak
char aSnakePressSpSp[19] = "snake\\press_sp.spr"; // weak
char aSnakeReadySpSp[19] = "snake\\ready_sp.spr"; // weak
char aSnakeOverEnSpr_1[18] = "snake\\over_en.spr"; // weak
char aSnakePressEnSp_1[19] = "snake\\press_en.spr"; // weak
char aSnakeReadyEnSp_1[19] = "snake\\ready_en.spr"; // weak
char aSnakeOverFrSpr_0[18] = "snake\\over_fr.spr"; // weak
char aSnakePressFrSp_0[19] = "snake\\press_fr.spr"; // weak
char aSnakeReadyFrSp_0[19] = "snake\\ready_fr.spr"; // weak
char aSnakeOverGeSpr_0[18] = "snake\\over_ge.spr"; // weak
char aSnakePressGeSp_0[19] = "snake\\press_ge.spr"; // weak
char aSnakeReadyGeSp_0[19] = "snake\\ready_ge.spr"; // weak
char aSnakeOverEnSpr_2[18] = "snake\\over_en.spr"; // weak
char aSnakePressEnSp_2[19] = "snake\\press_en.spr"; // weak
char aSnakeReadyEnSp_2[19] = "snake\\ready_en.spr"; // weak
char aSnakeOverSpSpr_0[18] = "snake\\over_sp.spr"; // weak
char aSnakePressSpSp_0[19] = "snake\\press_sp.spr"; // weak
char aSnakeReadySpSp_0[19] = "snake\\ready_sp.spr"; // weak
char aSnakesubgameCh[] = "snakesubgame.chb"; // idb
char aSnakeTokenSpr_0[16] = "snake\\token.spr"; // weak
char aSnakeSnakeSpr_0[16] = "snake\\snake.spr"; // weak
char aSnakeBlankSpr_0[16] = "snake\\blank.spr"; // weak
char aSnakeBorderSpr_0[17] = "snake\\border.spr"; // weak
char aSnakeOverEnSpr_3[18] = "snake\\over_en.spr"; // weak
char aSnakePressEnSp_3[19] = "snake\\press_en.spr"; // weak
char aSnakeReadyEnSp_3[19] = "snake\\ready_en.spr"; // weak
char aSnakeOverFrSpr_1[18] = "snake\\over_fr.spr"; // weak
char aSnakePressFrSp_1[19] = "snake\\press_fr.spr"; // weak
char aSnakeReadyFrSp_1[19] = "snake\\ready_fr.spr"; // weak
char aSnakeOverGeSpr_1[18] = "snake\\over_ge.spr"; // weak
char aSnakePressGeSp_1[19] = "snake\\press_ge.spr"; // weak
char aSnakeReadyGeSp_1[19] = "snake\\ready_ge.spr"; // weak
char aSnakeOverEnSpr_4[18] = "snake\\over_en.spr"; // weak
char aSnakePressEnSp_4[19] = "snake\\press_en.spr"; // weak
char aSnakeReadyEnSp_4[19] = "snake\\ready_en.spr"; // weak
char aSnakeOverSpSpr_1[18] = "snake\\over_sp.spr"; // weak
char aSnakePressSpSp_1[19] = "snake\\press_sp.spr"; // weak
char aSnakeReadySpSp_1[19] = "snake\\ready_sp.spr"; // weak
char aSnakeOverEnSpr_5[18] = "snake\\over_en.spr"; // weak
char aSnakePressEnSp_5[19] = "snake\\press_en.spr"; // weak
char aSnakeReadyEnSp_5[19] = "snake\\ready_en.spr"; // weak
char aSnakeOverFrSpr_2[18] = "snake\\over_fr.spr"; // weak
char aSnakePressFrSp_2[19] = "snake\\press_fr.spr"; // weak
char aSnakeReadyFrSp_2[19] = "snake\\ready_fr.spr"; // weak
char aSnakeOverGeSpr_2[18] = "snake\\over_ge.spr"; // weak
char aSnakePressGeSp_2[19] = "snake\\press_ge.spr"; // weak
char aSnakeReadyGeSp_2[19] = "snake\\ready_ge.spr"; // weak
char aSnakeOverEnSpr_6[18] = "snake\\over_en.spr"; // weak
char aSnakePressEnSp_6[19] = "snake\\press_en.spr"; // weak
char aSnakeReadyEnSp_6[19] = "snake\\ready_en.spr"; // weak
char aSnakeOverSpSpr_2[18] = "snake\\over_sp.spr"; // weak
char aSnakePressSpSp_2[19] = "snake\\press_sp.spr"; // weak
char aSnakeReadySpSp_2[19] = "snake\\ready_sp.spr"; // weak

char byte_5CAA48; // weak
char byte_5CAA38; // weak
int dword_5A03AC = 196638; // weak
int dword_5A03B0 = 196639; // weak

int __cdecl sub_4D2AFC(_DWORD* a1, int a2);
int __cdecl sub_4DBA37(int a1, int a2);
int __cdecl sub_4DB7DC(int a1, int a2);
int __cdecl sub_4DB6D0(int a1, int a2);
int __cdecl sub_4E0499(_DWORD* a1);
int __cdecl sub_4E0BA7(_DWORD* a1);
int __cdecl sub_4D3057(_DWORD* a1, int a2);
int __cdecl sub_4DBDEC(int a1, int a2);
int __cdecl sub_4DBEEC(int a1, int a2);
__int64 __cdecl sub_4DC035(int a1);
int __cdecl sub_4DC165(int a1, int a2);
int __cdecl sub_4DC241(int a1, int a2);
int __cdecl sub_4D098D(int a1, int a2);
int __cdecl sub_4D07C6(int a1, int a2);
__int64 __cdecl sub_4DBA77(int a1);
int __cdecl sub_4DBBA7(int a1, int a2);
int __cdecl sub_4DBCB6(int a1, int a2);

//----- (004D6089) --------------------------------------------------------
int* __cdecl sub_4D6089(int* a1)
{
    char* v2; // eax
    int i; // [esp+4h] [ebp-8h]
    int v4; // [esp+8h] [ebp-4h]

    if (!sub_56EA26(*a1, a1[2], a1[3], 2))
        return 0;
    a1[11] = maybe_allocateMemory(424);
    v4 = a1[11];
    a1[7] = 1;
    a1[10] = (int)sub_4E0499;
    a1[1] = *(_DWORD*)(*a1 + 44);
    a1[4] = maybe_allocateMemory(2 * a1[3] * a1[2] + 31);
    a1[4] = (a1[4] + 31) & 0xFFFFFFE0;
    a1[6] = 0;
    *(_DWORD*)(v4 + 300) = 900;
    *(_DWORD*)(v4 + 304) = maybe_allocateMemory(8 * *(_DWORD*)(v4 + 300));
    *(_BYTE*)(v4 + 401) = 5;
    *(_DWORD*)(v4 + 316) = 5;
    *(_DWORD*)(v4 + 312) = 0;
    *(_DWORD*)(v4 + 308) = 4;
    *(_DWORD*)(v4 + 280) = 6;
    *(_DWORD*)(v4 + 292) = 25;
    loadCHBfile(aBatnballsubgam);
    loadSprite(v4 + 12, aSnakeTokenSpr);
    loadSprite(v4, aSnakeSnakeSpr);
    loadSprite(v4 + 24, aSnakeBlankSpr);
    loadSprite(v4 + 156, aSnakeBorderSpr);
    loadSprite(v4 + 204, aSnakeMaze1Spr);
    loadSprite(v4 + 216, aSnakeMaze2Spr);
    loadSprite(v4 + 228, aSnakeMaze3Spr);
    loadSprite(v4 + 240, aSnakeMaze4Spr);
    loadSprite(v4 + 252, aSnakeMaze5Spr);
    loadSprite(v4 + 264, aSnakeMaze6Spr);
    for (i = 0; i < 10; ++i)
    {
        v2 = getFormattedString("snake\\digi%d.spr", i);
        loadSprite(v4 + 12 * i + 36, v2);
    }
    if (loadAllLanguageSpritesAtOnce)
    {
        loadSprite(v4 + 180, aSnakeOverEnSpr);
        loadSprite(v4 + 168, aSnakePressEnSp);
        loadSprite(v4 + 192, aSnakeReadyEnSp);
        loadSprite(v4 + 180, aSnakeOverFrSpr);
        loadSprite(v4 + 168, aSnakePressFrSp);
        loadSprite(v4 + 192, aSnakeReadyFrSp);
        loadSprite(v4 + 180, aSnakeOverGeSpr);
        loadSprite(v4 + 168, aSnakePressGeSp);
        loadSprite(v4 + 192, aSnakeReadyGeSp);
        loadSprite(v4 + 180, aSnakeOverEnSpr_0);
        loadSprite(v4 + 168, aSnakePressEnSp_0);
        loadSprite(v4 + 192, aSnakeReadyEnSp_0);
        loadSprite(v4 + 180, aSnakeOverSpSpr);
        loadSprite(v4 + 168, aSnakePressSpSp);
        loadSprite(v4 + 192, aSnakeReadySpSp);
    }
    else
    {
        switch (languageId)
        {
        case language::English:
            loadSprite(v4 + 180, aSnakeOverEnSpr_1);
            loadSprite(v4 + 168, aSnakePressEnSp_1);
            loadSprite(v4 + 192, aSnakeReadyEnSp_1);
            break;
        case language::French:
            loadSprite(v4 + 180, aSnakeOverFrSpr_0);
            loadSprite(v4 + 168, aSnakePressFrSp_0);
            loadSprite(v4 + 192, aSnakeReadyFrSp_0);
            break;
        case language::German:
            loadSprite(v4 + 180, aSnakeOverGeSpr_0);
            loadSprite(v4 + 168, aSnakePressGeSp_0);
            loadSprite(v4 + 192, aSnakeReadyGeSp_0);
            break;
        case language::Spanish:
            loadSprite(v4 + 180, aSnakeOverEnSpr_2);
            loadSprite(v4 + 168, aSnakePressEnSp_2);
            loadSprite(v4 + 192, aSnakeReadyEnSp_2);
            break;
        case language::Italy:
            loadSprite(v4 + 180, aSnakeOverSpSpr_0);
            loadSprite(v4 + 168, aSnakePressSpSp_0);
            loadSprite(v4 + 192, aSnakeReadySpSp_0);
            break;
        default:
            break;
        }
    }
    sub_53F37A();
    byte_5CAA48 = 1;
    byte_5CAA31 = 0;
    *(_BYTE*)(v4 + 393) = 3;
    *(_DWORD*)(v4 + 396) = 5;
    *(_WORD*)(v4 + 412) = 0;
    if (HIWORD(dword_6041EA))
        *(_WORD*)(v4 + 414) = HIWORD(dword_6041EA);
    else
        *(_WORD*)(v4 + 414) = 75;
    *(_DWORD*)(v4 + 320) = 64;
    *(_DWORD*)(v4 + 324) = 44;
    *(_DWORD*)(v4 + 328) = 8;
    *(_DWORD*)(v4 + 332) = 16;
    *(_DWORD*)(v4 + 336) = 116;
    *(_DWORD*)(v4 + 340) = 16;
    *(_DWORD*)(v4 + 344) = 8;
    *(_DWORD*)(v4 + 348) = 16;
    *(_DWORD*)(v4 + 352) = 12;
    *(_DWORD*)(v4 + 356) = 20;
    *(_DWORD*)(v4 + 360) = 8;
    *(_DWORD*)(v4 + 364) = 16;
    *(_DWORD*)(v4 + 368) = 1;
    *(_DWORD*)(v4 + 372) = 3;
    *(_DWORD*)(v4 + 376) = 1;
    *(_DWORD*)(v4 + 380) = 3;
    *(_DWORD*)(v4 + 384) = 3;
    *(_DWORD*)(v4 + 388) = 1;
    *(_BYTE*)(v4 + 400) = 0;
    *(_WORD*)(v4 + 422) = 1;
    *(_DWORD*)(dword_5CAA34 + 32) = 1;
    sub_4E0499(a1);
    sub_4D2AFC(a1, v4);
    *(_DWORD*)(dword_5CAA34 + 32) = 0;
    return a1;
}
// 5CAA31: using guessed type char byte_5CAA31;
// 5CAA34: using guessed type int dword_5CAA34;
// 5CAA48: using guessed type char byte_5CAA48;
// 6041EA: using guessed type int dword_6041EA;
// 6045D4: using guessed type int languageId;
// 622C50: using guessed type char byte_622C50;
// 667394: using guessed type int loadAllLanguageSpritesAtOnce;

//----- (004D6781) --------------------------------------------------------
_DWORD* __cdecl sub_4D6781(_DWORD* a1)
{
    char* v2; // eax
    int i; // [esp+4h] [ebp-8h]
    int v4; // [esp+8h] [ebp-4h]

    if (!sub_56EA26(*a1, a1[2], a1[3], 2))
        return 0;
    a1[11] = maybe_allocateMemory(260);
    v4 = a1[11];
    a1[7] = 1;
    a1[10] = sub_4E0BA7;
    a1[1] = *(_DWORD*)(*a1 + 44);
    a1[4] = maybe_allocateMemory(2 * a1[3] * a1[2] + 31);
    a1[4] = (a1[4] + 31) & 0xFFFFFFE0;
    a1[6] = 0;
    *(_DWORD*)(v4 + 208) = 900;
    *(_DWORD*)(v4 + 212) = maybe_allocateMemory(8 * *(_DWORD*)(v4 + 208));
    *(_DWORD*)(v4 + 224) = 5;
    *(_DWORD*)(v4 + 220) = 0;
    *(_DWORD*)(v4 + 216) = 4;
    loadCHBfile(aSnakesubgameCh);
    loadSprite(v4 + 12, aSnakeTokenSpr_0);
    loadSprite(v4, aSnakeSnakeSpr_0);
    loadSprite(v4 + 24, aSnakeBlankSpr_0);
    loadSprite(v4 + 156, aSnakeBorderSpr_0);
    for (i = 0; i < 10; ++i)
    {
        v2 = getFormattedString("snake\\digi%d.spr", i);
        loadSprite(v4 + 12 * i + 36, v2);
    }
    if (loadAllLanguageSpritesAtOnce)
    {
        loadSprite(v4 + 180, aSnakeOverEnSpr_3);
        loadSprite(v4 + 168, aSnakePressEnSp_3);
        loadSprite(v4 + 192, aSnakeReadyEnSp_3);
        loadSprite(v4 + 180, aSnakeOverFrSpr_1);
        loadSprite(v4 + 168, aSnakePressFrSp_1);
        loadSprite(v4 + 192, aSnakeReadyFrSp_1);
        loadSprite(v4 + 180, aSnakeOverGeSpr_1);
        loadSprite(v4 + 168, aSnakePressGeSp_1);
        loadSprite(v4 + 192, aSnakeReadyGeSp_1);
        loadSprite(v4 + 180, aSnakeOverEnSpr_4);
        loadSprite(v4 + 168, aSnakePressEnSp_4);
        loadSprite(v4 + 192, aSnakeReadyEnSp_4);
        loadSprite(v4 + 180, aSnakeOverSpSpr_1);
        loadSprite(v4 + 168, aSnakePressSpSp_1);
        loadSprite(v4 + 192, aSnakeReadySpSp_1);
    }
    else
    {
        switch (languageId)
        {
        case language::English:
            loadSprite(v4 + 180, aSnakeOverEnSpr_5);
            loadSprite(v4 + 168, aSnakePressEnSp_5);
            loadSprite(v4 + 192, aSnakeReadyEnSp_5);
            break;
        case language::French:
            loadSprite(v4 + 180, aSnakeOverFrSpr_2);
            loadSprite(v4 + 168, aSnakePressFrSp_2);
            loadSprite(v4 + 192, aSnakeReadyFrSp_2);
            break;
        case language::German:
            loadSprite(v4 + 180, aSnakeOverGeSpr_2);
            loadSprite(v4 + 168, aSnakePressGeSp_2);
            loadSprite(v4 + 192, aSnakeReadyGeSp_2);
            break;
        case language::Spanish:
            loadSprite(v4 + 180, aSnakeOverEnSpr_6);
            loadSprite(v4 + 168, aSnakePressEnSp_6);
            loadSprite(v4 + 192, aSnakeReadyEnSp_6);
            break;
        case language::Italy:
            loadSprite(v4 + 180, aSnakeOverSpSpr_2);
            loadSprite(v4 + 168, aSnakePressSpSp_2);
            loadSprite(v4 + 192, aSnakeReadySpSp_2);
            break;
        default:
            break;
        }
    }
    sub_53F37A();
    byte_5CAA38 = 1;
    byte_5CAA58 = 0;
    *(_DWORD*)(v4 + 204) = 0;
    *(_BYTE*)(v4 + 229) = 3;
    *(_DWORD*)(v4 + 232) = 4;
    *(_WORD*)(v4 + 248) = 0;
    if (HIWORD(dword_6041EA))
        *(_WORD*)(v4 + 250) = HIWORD(dword_6041EA);
    else
        *(_WORD*)(v4 + 250) = 30;
    *(_BYTE*)(v4 + 236) = 0;
    *(_BYTE*)(v4 + 237) = 5;
    *(_WORD*)(v4 + 258) = 1;
    *(_DWORD*)(dword_5CAA24 + 32) = 1;
    sub_4E0BA7(a1);
    sub_4D3057(a1, v4);
    *(_DWORD*)(dword_5CAA24 + 32) = 0;
    return a1;
}
// 4D03AB: using guessed type int __cdecl loadSprite(_DWORD, _DWORD);
// 4D3057: using guessed type _DWORD __cdecl sub_4D3057(_DWORD, _DWORD);
// 4E0BA7: using guessed type _DWORD __cdecl sub_4E0BA7(_DWORD);
// 56EA26: using guessed type _DWORD __cdecl sub_56EA26(_DWORD, _DWORD, _DWORD, _DWORD);
// 5CAA24: using guessed type int dword_5CAA24;
// 5CAA38: using guessed type char byte_5CAA38;
// 5CAA58: using guessed type char byte_5CAA58;
// 6041EA: using guessed type int dword_6041EA;
// 6045D4: using guessed type int languageId;
// 622C50: using guessed type char byte_622C50;
// 667394: using guessed type int loadAllLanguageSpritesAtOnce;

//----- (004E0499) --------------------------------------------------------
int __cdecl sub_4E0499(_DWORD* a1)
{
    int result; // eax
    __int16 v2; // dx
    int v3; // [esp+8h] [ebp-14h]
    int v4; // [esp+Ch] [ebp-10h]
    int v5; // [esp+10h] [ebp-Ch]
    __int64 v6; // [esp+14h] [ebp-8h]

    result = (int)a1;
    v5 = a1[11];
    if (*(_DWORD*)(dword_5CAA34 + 32))
    {
        result = word_60430E;
        if (!word_60430E)
        {
            ++a1[6];
            if ((byte_5CAA31 & 1) != 0)
            {
                byte_5CAA48 = 0;
                byte_5CAA31 &= 0xFEu;
                byte_5CAA31 |= 4u;
                *(_WORD*)(v5 + 422) = 1;
                if ((byte_5CAA31 & 4) != 0)
                    sub_4D07B5(dword_5A03B4);
            }
            if (byte_5CAA48 != 1)
            {
                v3 = dword_6043C8[word_60431C];
                word_668762 = 1;
                sub_553C3C(*(_WORD*)(v3 + 128));
                word_604312 = 1;
            }
            if (byte_5CAA48)
            {
                if (byte_5CAA48 == 2 && (byte_622128 & 0x80) != 0)
                {
                    byte_5CAA48 = 0;
                    *(_WORD*)(v5 + 422) = 1;
                }
            }
            else if (!*(_WORD*)(v5 + 422))
            {
                if ((byte_622128 & 0x80) != 0)
                {
                    if (*(_BYTE*)(v5 + 394) != 1)
                        *(_BYTE*)(v5 + 393) = 4;
                }
                else if ((byte_622130 & 0x80) != 0)
                {
                    if (*(_BYTE*)(v5 + 394) != 4)
                        *(_BYTE*)(v5 + 393) = 1;
                }
                else if ((byte_62212B & 0x80) != 0)
                {
                    if (*(_BYTE*)(v5 + 394) != 3)
                        *(_BYTE*)(v5 + 393) = 2;
                }
                else if ((byte_62212D & 0x80) != 0 && *(_BYTE*)(v5 + 394) != 2)
                {
                    *(_BYTE*)(v5 + 393) = 3;
                }
            }
            v2 = *(_WORD*)(v5 + 422);
            if (v2)
            {
                if (v2 == 1)
                {
                    sub_4DBA37(v5, (int)a1);
                    *(_BYTE*)(v5 + 420) = 3;
                    *(_BYTE*)(v5 + 421) = 90;
                }
                else if (v2 == 2 && (char)-- * (_BYTE*)(v5 + 421) < 0)
                {
                    *(_BYTE*)(v5 + 421) = 0;
                    switch (*(_BYTE*)(v5 + 420))
                    {
                    case 1:
                        sub_4DB7DC(v5, (int)a1);
                        *(_BYTE*)(v5 + 420) = 3;
                        *(_BYTE*)(v5 + 421) = 40;
                        break;
                    case 2:
                        *(_BYTE*)(v5 + 420) = 1;
                        *(_BYTE*)(v5 + 421) = 90;
                        if (++ * (_DWORD*)(v5 + 276) > *(_DWORD*)(v5 + 280) - 1)
                            *(_DWORD*)(v5 + 276) = 0;
                        break;
                    case 3:
                        sub_4DB6D0(v5, (int)a1);
                        *(_WORD*)(v5 + 422) = 0;
                        break;
                    case 4:
                        if (-- * (_DWORD*)(v5 + 296))
                        {
                            *(_BYTE*)(v5 + 420) = 1;
                            *(_BYTE*)(v5 + 421) = 90;
                        }
                        else
                        {
                            if (*(unsigned __int16*)(v5 + 412) > (int)*(unsigned __int16*)(v5 + 414))
                            {
                                *(_WORD*)(v5 + 414) = *(_WORD*)(v5 + 412);
                                HIWORD(dword_6041EA) = *(_WORD*)(v5 + 414);
                                if ((dword_6041E0 & 0x800) == 0)
                                {
                                    sub_47641B(11);
                                    saveGame(-1, 0);
                                }
                            }
                            *(_BYTE*)(v5 + 420) = 5;
                            *(_BYTE*)(v5 + 421) = 60;
                        }
                        break;
                    case 5:
                        if (!byte_5CAA48)
                            byte_5CAA48 = 2;
                        *(_WORD*)(v5 + 422) = 1;
                        break;
                    default:
                        break;
                    }
                }
            }
            else if (!(a1[6] % *(_DWORD*)(v5 + 396)))
            {
                if (byte_5CAA48 && (a1[6] >= *(_DWORD*)(v5 + 416) || sub_4DBBA7(v5, (int)a1) == 1))
                    sub_4DBCB6(v5, (int)a1);
                v6 = sub_4DBA77(v5);
                v4 = sub_4DBBA7(v5, (int)a1);
                if (v4 == 1)
                {
                    if ((byte_5CAA31 & 4) != 0)
                        sub_4D07B5(dword_5A03B0);
                    *(_WORD*)(v5 + 422) = 2;
                    *(_BYTE*)(v5 + 420) = 4;
                    *(_BYTE*)(v5 + 421) = 90;
                }
                else
                {
                    if (v4 == 2)
                    {
                        if ((byte_5CAA31 & 4) != 0)
                            sub_4D07B5(dword_5A03AC);
                        if (++ * (_DWORD*)(v5 + 288) < *(_DWORD*)(v5 + 292))
                        {
                            sub_4DB6D0(v5, (int)a1);
                            if (byte_5CAA48)
                                *(_BYTE*)(v5 + 400) += 10;
                            else
                                *(_BYTE*)(v5 + 400) += *(_BYTE*)(v5 + 401);
                        }
                        else
                        {
                            ++* (_WORD*)(v5 + 412);
                            *(_WORD*)(v5 + 422) = 2;
                            *(_BYTE*)(v5 + 420) = 2;
                            *(_BYTE*)(v5 + 421) = 60;
                        }
                    }
                    if (*(_BYTE*)(v5 + 400))
                    {
                        --* (_BYTE*)(v5 + 400);
                        ++* (_DWORD*)(v5 + 316);
                    }
                    else
                    {
                        ++* (_DWORD*)(v5 + 312);
                    }
                    if (*(_DWORD*)(v5 + 312) == *(_DWORD*)(v5 + 300))
                        *(_DWORD*)(v5 + 312) = 0;
                    if (++ * (_DWORD*)(v5 + 308) == *(_DWORD*)(v5 + 300))
                        *(_DWORD*)(v5 + 308) = 0;
                    *(_QWORD*)(*(_DWORD*)(v5 + 304) + 8 * *(_DWORD*)(v5 + 308)) = v6;
                    *(_BYTE*)(v5 + 394) = *(_BYTE*)(v5 + 393);
                }
            }
            if ((byte_62207C & 0x80) != 0 && (byte_5CAA31 & 4) != 0)
            {
                byte_5CAA48 = 1;
                byte_5CAA31 |= 2u;
                byte_5CAA31 &= 0xFBu;
                *(_WORD*)(v5 + 422) = 1;
            }
            result = sub_4D2AFC(a1, v5);
        }
    }
    return result;
}
// 5A03AC: using guessed type int dword_5A03AC;
// 5A03B0: using guessed type int dword_5A03B0;
// 5A03B4: using guessed type int dword_5A03B4;
// 5CAA31: using guessed type char byte_5CAA31;
// 5CAA34: using guessed type int dword_5CAA34;
// 5CAA48: using guessed type char byte_5CAA48;
// 6041E0: using guessed type int dword_6041E0;
// 6041EA: using guessed type int dword_6041EA;
// 60430E: using guessed type __int16 word_60430E;
// 604312: using guessed type __int16 word_604312;
// 60431C: using guessed type __int16 word_60431C;
// 6043C8: using guessed type int dword_6043C8[];
// 62207C: using guessed type char byte_62207C;
// 622128: using guessed type char byte_622128;
// 62212B: using guessed type char byte_62212B;
// 62212D: using guessed type char byte_62212D;
// 622130: using guessed type char byte_622130;
// 668762: using guessed type __int16 word_668762;

//----- (004D2AFC) --------------------------------------------------------
int __cdecl sub_4D2AFC(_DWORD* a1, int a2)
{
    int result; // eax
    float v3; // [esp+0h] [ebp-24h]
    float v4; // [esp+8h] [ebp-1Ch]
    int i; // [esp+10h] [ebp-14h]
    int v6; // [esp+10h] [ebp-14h]
    int j; // [esp+10h] [ebp-14h]
    int k; // [esp+10h] [ebp-14h]
    int v9; // [esp+10h] [ebp-14h]
    int v10; // [esp+14h] [ebp-10h]
    int v11; // [esp+18h] [ebp-Ch]
    int v12; // [esp+18h] [ebp-Ch]
    _DWORD* v13; // [esp+1Ch] [ebp-8h]
    int v14; // [esp+20h] [ebp-4h]

    v13 = (_DWORD*)(a1[4] + 0x8000);
    for (i = 0; i < 0x2000; ++i)
        *--v13 = 0;
    if (*(_WORD*)(a2 + 422) != 1)
        sub_4D05E6(a1, 4, 12, (int*)(a2 + 12 * *(_DWORD*)(a2 + 276) + 204));
    if ((*(_WORD*)(a2 + 422) != 2 || *(_BYTE*)(a2 + 420) && *(_BYTE*)(a2 + 420) != 5 && *(_BYTE*)(a2 + 420) != 1)
        && *(_WORD*)(a2 + 422) != 1)
    {
        v6 = 0;
        v14 = *(_DWORD*)(a2 + 312);
        while (v6 < *(_DWORD*)(a2 + 316))
        {
            sub_4D05E6(
                a1,
                *(_DWORD*)(*(_DWORD*)(a2 + 304) + 8 * v14),
                *(_DWORD*)(*(_DWORD*)(a2 + 304) + 8 * v14 + 4),
                (int*)a2);
            if (++v14 == *(_DWORD*)(a2 + 300))
                v14 = 0;
            ++v6;
        }
        if (*(_WORD*)(a2 + 422) != 2 || *(_BYTE*)(a2 + 420) != 2 && *(_BYTE*)(a2 + 420) != 3)
            sub_4D05E6(a1, *(_DWORD*)(a2 + 404), *(_DWORD*)(a2 + 408), (int*)(a2 + 12));
    }
    if (*(_WORD*)(a2 + 422) == 2 && *(_BYTE*)(a2 + 420) == 4)
        sub_4D07C6(a2, (int)a1);
    v10 = 8;
    for (j = 0; j < 30; ++j)
    {
        sub_4D05E6(a1, 0, v10, (int*)(a2 + 156));
        sub_4D05E6(a1, 124, v10, (int*)(a2 + 156));
        v10 += *(_DWORD*)(a2 + 160);
    }
    v11 = 0;
    for (k = 0; k < 32; ++k)
    {
        sub_4D05E6(a1, v11, 8, (int*)(a2 + 156));
        sub_4D05E6(a1, v11, 124, (int*)(a2 + 156));
        v11 += *(_DWORD*)(a2 + 156);
    }
    if (*(_WORD*)(a2 + 422) != 1)
    {
        if (byte_5CAA48 == 2)
        {
            v4 = (float)(a1[6] % 120);
            if (v4 > 60.0)
                sub_4D05E6(a1, a1[2] / 2 - *(_DWORD*)(a2 + 168) / 2, 0, (int*)(a2 + 168));
        }
        else
        {
            if (*(_WORD*)(a2 + 422) == 2
                && (!*(_BYTE*)(a2 + 420) || *(_BYTE*)(a2 + 420) == 1 || *(_BYTE*)(a2 + 420) == 3)
                && !byte_5CAA48)
            {
                sub_4D05E6(a1, a1[2] / 2 - *(_DWORD*)(a2 + 192) / 2, a1[3] / 2 - *(_DWORD*)(a2 + 196) / 2, (int*)(a2 + 192));
            }
            if (*(_WORD*)(a2 + 422) == 2 && *(_BYTE*)(a2 + 420) == 5)
                sub_4D05E6(a1, a1[2] / 2 - *(_DWORD*)(a2 + 180) / 2, a1[3] / 2, (int*)(a2 + 180));
        }
    }
    if (*(_WORD*)(a2 + 422) != 1 && !byte_5CAA48)
    {
        v9 = 0;
        v12 = 122;
        while (v9 < *(_DWORD*)(a2 + 296) - 1)
        {
            sub_4D05E6(a1, v12, 2, (int*)a2);
            ++v9;
            v12 -= 8;
        }
    }
    result = *(unsigned __int16*)(a2 + 422);
    if ((unsigned __int16)result != 1)
    {
        if (byte_5CAA48 == 2 && (v3 = (float)(a1[6] % 120), v3 < 60.0) || byte_5CAA48 == 1 || (result = byte_5CAA48) == 0)
            result = sub_4D290F(
                100 * *(unsigned __int16*)(a2 + 412),
                100 * *(unsigned __int16*)(a2 + 414),
                (_DWORD*)(a2 + 36),
                a1,
                byte_5CAA48);
    }
    if (a1[1])
        result = sub_569C41(a1[1], a1[4]);
    return result;
}
// 5CAA48: using guessed type char byte_5CAA48;

//----- (004DBA37) --------------------------------------------------------
int __cdecl sub_4DBA37(int a1, int a2)
{
    *(_WORD*)(a1 + 412) = 0;
    *(_DWORD*)(a1 + 296) = 3;
    *(_DWORD*)(a1 + 276) = *(_DWORD*)(a1 + 284);
    return sub_4DB7DC(a1, a2);
}

//----- (004DB7DC) --------------------------------------------------------
int __cdecl sub_4DB7DC(int a1, int a2)
{
    int v2; // esi
    int v3; // edx
    int result; // eax
    int i; // [esp+8h] [ebp-4h]

    *(_DWORD*)(a1 + 288) = 0;
    *(_DWORD*)(a1 + 316) = 5;
    *(_DWORD*)(a1 + 312) = 0;
    *(_DWORD*)(a1 + 308) = 4;
    **(_DWORD**)(a1 + 304) = *(_DWORD*)(a1 + 8 * *(_DWORD*)(a1 + 276) + 320);
    *(_DWORD*)(*(_DWORD*)(a1 + 304) + 4) = *(_DWORD*)(a1 + 8 * *(_DWORD*)(a1 + 276) + 324);
    *(_BYTE*)(a1 + 392) = 0;
    *(_BYTE*)(a1 + 393) = *(_BYTE*)(a1 + 4 * *(_DWORD*)(a1 + 276) + 368);
    for (i = 1; i < 5; ++i)
    {
        switch (*(_BYTE*)(a1 + 393))
        {
        case 1:
            *(_DWORD*)(*(_DWORD*)(a1 + 304) + 8 * i) = **(_DWORD**)(a1 + 304);
            *(_DWORD*)(*(_DWORD*)(a1 + 304) + 8 * i + 4) = i * *(_DWORD*)(a1 + 4)
                + *(_DWORD*)(*(_DWORD*)(a1 + 304) + 4);
            break;
        case 2:
            *(_DWORD*)(*(_DWORD*)(a1 + 304) + 8 * i) = **(_DWORD**)(a1 + 304) - i * *(_DWORD*)a1;
            *(_DWORD*)(*(_DWORD*)(a1 + 304) + 8 * i + 4) = *(_DWORD*)(*(_DWORD*)(a1 + 304) + 4);
            break;
        case 3:
            *(_DWORD*)(*(_DWORD*)(a1 + 304) + 8 * i) = i * *(_DWORD*)a1 + **(_DWORD**)(a1 + 304);
            *(_DWORD*)(*(_DWORD*)(a1 + 304) + 8 * i + 4) = *(_DWORD*)(*(_DWORD*)(a1 + 304) + 4);
            break;
        case 4:
            *(_DWORD*)(*(_DWORD*)(a1 + 304) + 8 * i) = **(_DWORD**)(a1 + 304);
            *(_DWORD*)(*(_DWORD*)(a1 + 304) + 8 * i + 4) = *(_DWORD*)(*(_DWORD*)(a1 + 304) + 4)
                - i * *(_DWORD*)(a1 + 4);
            break;
        default:
            continue;
        }
    }
    *(_BYTE*)(a1 + 400) = 0;
    *(_WORD*)(a1 + 422) = 2;
    *(_BYTE*)(a1 + 420) = 1;
    *(_BYTE*)(a1 + 421) = 60;
    v2 = *(_DWORD*)(a2 + 24);
    v3 = v2 + rand() % 50 + 60;
    result = a1;
    *(_DWORD*)(a1 + 416) = v3;
    return result;
}

//----- (004DB6D0) --------------------------------------------------------
int __cdecl sub_4DB6D0(int a1, int a2)
{
    int result; // eax
    _WORD* v3; // [esp+0h] [ebp-14h]
    int i; // [esp+10h] [ebp-4h]

    result = a1;
    if (*(_DWORD*)(a1 + 288))
    {
        result = a1;
        ++* (_WORD*)(a1 + 412);
    }
    for (i = 0; i < 0x4000; ++i)
    {
        *(_DWORD*)(a1 + 404) = 4 * (rand() % 30) + 4;
        *(_DWORD*)(a1 + 408) = 4 * (rand() % 27) + 12;
        v3 = (_WORD*)(*(_DWORD*)(a2 + 16) + 2 * *(_DWORD*)(a1 + 404) + 2 * *(_DWORD*)(a2 + 8) * *(_DWORD*)(a1 + 408));
        result = (int)v3;
        if ((*v3 & 0x1F) == 0)
        {
            result = ((int)(unsigned __int16)*v3 >> 5) & 0x1F;
            if ((((int)(unsigned __int16)*v3 >> 5) & 0x1F) == 0 && (((int)(unsigned __int16)*v3 >> 10) & 0x1F) == 0)
                break;
        }
    }
    return result;
}

//----- (004D3057) --------------------------------------------------------
int __cdecl sub_4D3057(_DWORD* a1, int a2)
{
    int result; // eax
    __int16 v3; // fps
    bool v4; // c0
    char v5; // c2
    bool v6; // c3
    float v7; // [esp+0h] [ebp-24h]
    float v8; // [esp+8h] [ebp-1Ch]
    int i; // [esp+10h] [ebp-14h]
    int v10; // [esp+10h] [ebp-14h]
    int j; // [esp+10h] [ebp-14h]
    int k; // [esp+10h] [ebp-14h]
    int v13; // [esp+14h] [ebp-10h]
    int v14; // [esp+18h] [ebp-Ch]
    _DWORD* v15; // [esp+1Ch] [ebp-8h]
    int v16; // [esp+20h] [ebp-4h]

    v15 = (_DWORD*)(a1[4] + 0x8000);
    for (i = 0; i < 0x2000; ++i)
        *--v15 = 0;
    result = *(unsigned __int16*)(a2 + 258);
    if ((unsigned __int16)result != 2 || *(_BYTE*)(a2 + 256) && (result = a2, *(_BYTE*)(a2 + 256) != 5))
    {
        result = *(unsigned __int16*)(a2 + 258);
        if ((unsigned __int16)result != 1)
        {
            v10 = 0;
            v16 = *(_DWORD*)(a2 + 220);
            while (v10 < *(_DWORD*)(a2 + 224))
            {
                sub_4D05E6(
                    a1,
                    *(_DWORD*)(*(_DWORD*)(a2 + 212) + 8 * v16),
                    *(_DWORD*)(*(_DWORD*)(a2 + 212) + 8 * v16 + 4),
                    (int*)a2);
                if (++v16 == *(_DWORD*)(a2 + 208))
                    v16 = 0;
                ++v10;
            }
            result = (int)sub_4D05E6(a1, *(_DWORD*)(a2 + 240), *(_DWORD*)(a2 + 244), (int*)(a2 + 12));
        }
    }
    if (*(_WORD*)(a2 + 258) == 2)
    {
        result = a2;
        if (*(_BYTE*)(a2 + 256) == 4)
            result = sub_4D098D(a2, (int)a1);
    }
    v13 = 8;
    for (j = 0; j < 30; ++j)
    {
        sub_4D05E6(a1, 0, v13, (int*)(a2 + 156));
        sub_4D05E6(a1, 124, v13, (int*)(a2 + 156));
        result = *(_DWORD*)(a2 + 160) + v13;
        v13 = result;
    }
    v14 = 0;
    for (k = 0; k < 32; ++k)
    {
        sub_4D05E6(a1, v14, 8, (int*)(a2 + 156));
        sub_4D05E6(a1, v14, 124, (int*)(a2 + 156));
        result = *(_DWORD*)(a2 + 156) + v14;
        v14 = result;
    }
    if (*(_WORD*)(a2 + 258) != 1)
    {
        result = byte_5CAA38;
        if (byte_5CAA38 == 2)
        {
            HIWORD(result) = (unsigned int)(a1[6] / 120) >> 16;
            v8 = (float)(a1[6] % 120);
            v4 = v8 < 60.0;
            v5 = 0;
            v6 = v8 == 60.0;
            LOWORD(result) = v3;
            if (v8 > 60.0)
                result = (int)sub_4D05E6(a1, a1[2] / 2 - *(_DWORD*)(a2 + 168) / 2, 0, (int*)(a2 + 168));
        }
        else
        {
            if (*(_WORD*)(a2 + 258) == 2)
            {
                result = a2;
                if (!*(_BYTE*)(a2 + 256) && !byte_5CAA38)
                    result = (int)sub_4D05E6(
                        a1,
                        a1[2] / 2 - *(_DWORD*)(a2 + 192) / 2,
                        a1[3] / 2 - *(_DWORD*)(a2 + 196) / 2,
                        (int*)(a2 + 192));
            }
            if (*(_WORD*)(a2 + 258) == 2)
            {
                result = a2;
                if (*(_BYTE*)(a2 + 256) == 5)
                    result = (int)sub_4D05E6(a1, a1[2] / 2 - *(_DWORD*)(a2 + 180) / 2, a1[3] / 2, (int*)(a2 + 180));
            }
        }
    }
    if (*(_WORD*)(a2 + 258) != 1)
    {
        if (byte_5CAA38 == 2 && (v7 = (float)(a1[6] % 120), v7 < 60.0) || byte_5CAA38 == 1 || (result = byte_5CAA38) == 0)
            result = sub_4D290F(
                100 * *(unsigned __int16*)(a2 + 248),
                100 * *(unsigned __int16*)(a2 + 250),
                (_DWORD*)(a2 + 36),
                a1,
                byte_5CAA38);
    }
    if (a1[1])
        result = sub_569C41(a1[1], a1[4]);
    return result;
}
// 5CAA38: using guessed type char byte_5CAA38;

//----- (004E0BA7) --------------------------------------------------------
int __cdecl sub_4E0BA7(_DWORD* a1)
{
    int result; // eax
    __int16 v2; // dx
    char v3; // [esp+0h] [ebp-1Ch]
    int v4; // [esp+8h] [ebp-14h]
    int v5; // [esp+Ch] [ebp-10h]
    int v6; // [esp+10h] [ebp-Ch]
    __int64 v7; // [esp+14h] [ebp-8h]

    result = (int)a1;
    v6 = a1[11];
    if (*(_DWORD*)(dword_5CAA24 + 32))
    {
        result = word_60430E;
        if (!word_60430E)
        {
            ++a1[6];
            if ((byte_5CAA58 & 1) != 0)
            {
                byte_5CAA38 = 0;
                byte_5CAA58 &= 0xFEu;
                byte_5CAA58 |= 4u;
                *(_WORD*)(v6 + 258) = 1;
                if ((byte_5CAA58 & 4) != 0)
                    sub_4D07B5(dword_5A03B4);
            }
            if (byte_5CAA38 != 1)
            {
                v4 = dword_6043C8[word_60431C];
                word_668762 = 1;
                sub_553C3C(*(_WORD*)(v4 + 128));
                word_604312 = 1;
            }
            if (byte_5CAA38)
            {
                if (byte_5CAA38 == 2 && (byte_622128 & 0x80) != 0)
                {
                    byte_5CAA38 = 0;
                    *(_WORD*)(v6 + 258) = 1;
                }
            }
            else if (!*(_WORD*)(v6 + 258))
            {
                if ((byte_622128 & 0x80) != 0)
                {
                    if (*(_BYTE*)(v6 + 230) != 1)
                        *(_BYTE*)(v6 + 229) = 4;
                }
                else if ((byte_622130 & 0x80) != 0)
                {
                    if (*(_BYTE*)(v6 + 230) != 4)
                        *(_BYTE*)(v6 + 229) = 1;
                }
                else if ((byte_62212B & 0x80) != 0)
                {
                    if (*(_BYTE*)(v6 + 230) != 3)
                        *(_BYTE*)(v6 + 229) = 2;
                }
                else if ((byte_62212D & 0x80) != 0 && *(_BYTE*)(v6 + 230) != 2)
                {
                    *(_BYTE*)(v6 + 229) = 3;
                }
            }
            v2 = *(_WORD*)(v6 + 258);
            if (v2)
            {
                if (v2 == 1)
                {
                    sub_4DBEEC(v6, (int)a1);
                }
                else if (v2 == 2 && (char)-- * (_BYTE*)(v6 + 257) < 0)
                {
                    *(_BYTE*)(v6 + 257) = 0;
                    v3 = *(_BYTE*)(v6 + 256);
                    if (v3)
                    {
                        if (v3 == 4)
                        {
                            *(_BYTE*)(v6 + 256) = 5;
                            *(_BYTE*)(v6 + 257) = 60;
                        }
                        else if (v3 == 5)
                        {
                            if (!byte_5CAA38)
                                byte_5CAA38 = 2;
                            *(_WORD*)(v6 + 258) = 1;
                        }
                    }
                    else
                    {
                        *(_WORD*)(v6 + 258) = 0;
                    }
                }
            }
            else if (!(a1[6] % *(_DWORD*)(v6 + 232)))
            {
                if (byte_5CAA38 && (a1[6] >= *(_DWORD*)(v6 + 252) || sub_4DC165(v6, (int)a1) == 1))
                    sub_4DC241(v6, (int)a1);
                v7 = sub_4DC035(v6);
                v5 = sub_4DC165(v6, (int)a1);
                if (v5 == 1)
                {
                    if (*(unsigned __int16*)(v6 + 248) > (int)*(unsigned __int16*)(v6 + 250))
                    {
                        *(_WORD*)(v6 + 250) = *(_WORD*)(v6 + 248);
                        HIWORD(dword_6041EA) = *(_WORD*)(v6 + 250);
                        if ((dword_6041E0 & 0x100) == 0)
                        {
                            sub_47641B(8);
                            saveGame(-1, 0);
                        }
                    }
                    if ((byte_5CAA58 & 4) != 0)
                        sub_4D07B5(dword_5A03B0);
                    *(_WORD*)(v6 + 258) = 2;
                    *(_BYTE*)(v6 + 256) = 4;
                    *(_BYTE*)(v6 + 257) = 120;
                }
                else
                {
                    if (v5 == 2)
                    {
                        if ((byte_5CAA58 & 4) != 0)
                            sub_4D07B5(dword_5A03AC);
                        ++* (_DWORD*)(v6 + 204);
                        sub_4DBDEC(v6, (int)a1);
                        if (byte_5CAA38)
                            *(_BYTE*)(v6 + 236) += 10;
                        else
                            *(_BYTE*)(v6 + 236) += *(_BYTE*)(v6 + 237);
                    }
                    if (*(_BYTE*)(v6 + 236))
                    {
                        --* (_BYTE*)(v6 + 236);
                        ++* (_DWORD*)(v6 + 224);
                    }
                    else
                    {
                        ++* (_DWORD*)(v6 + 220);
                    }
                    if (*(_DWORD*)(v6 + 220) == *(_DWORD*)(v6 + 208))
                        *(_DWORD*)(v6 + 220) = 0;
                    if (++ * (_DWORD*)(v6 + 216) == *(_DWORD*)(v6 + 208))
                        *(_DWORD*)(v6 + 216) = 0;
                    *(_QWORD*)(*(_DWORD*)(v6 + 212) + 8 * *(_DWORD*)(v6 + 216)) = v7;
                    *(_BYTE*)(v6 + 230) = *(_BYTE*)(v6 + 229);
                }
            }
            if ((byte_62207C & 0x80) != 0 && (byte_5CAA58 & 4) != 0)
            {
                byte_5CAA38 = 1;
                byte_5CAA58 |= 2u;
                byte_5CAA58 &= 0xFBu;
                *(_WORD*)(v6 + 258) = 1;
            }
            result = sub_4D3057(a1, v6);
        }
    }
    return result;
}
// 5A03AC: using guessed type int dword_5A03AC;
// 5A03B0: using guessed type int dword_5A03B0;
// 5A03B4: using guessed type int dword_5A03B4;
// 5CAA24: using guessed type int dword_5CAA24;
// 5CAA38: using guessed type char byte_5CAA38;
// 5CAA58: using guessed type char byte_5CAA58;
// 6041E0: using guessed type int dword_6041E0;
// 6041EA: using guessed type int dword_6041EA;
// 60430E: using guessed type __int16 word_60430E;
// 604312: using guessed type __int16 word_604312;
// 60431C: using guessed type __int16 word_60431C;
// 6043C8: using guessed type int dword_6043C8[];
// 62207C: using guessed type char byte_62207C;
// 622128: using guessed type char byte_622128;
// 62212B: using guessed type char byte_62212B;
// 62212D: using guessed type char byte_62212D;
// 622130: using guessed type char byte_622130;
// 668762: using guessed type __int16 word_668762;

//----- (004DBDEC) --------------------------------------------------------
int __cdecl sub_4DBDEC(int a1, int a2)
{
    int result; // eax
    _WORD* v3; // [esp+0h] [ebp-14h]
    int i; // [esp+10h] [ebp-4h]

    result = a1;
    ++* (_WORD*)(a1 + 248);
    for (i = 0; i < 0x4000; ++i)
    {
        *(_DWORD*)(a1 + 240) = 4 * (rand() % 30) + 4;
        *(_DWORD*)(a1 + 244) = 4 * (rand() % 27) + 12;
        v3 = (_WORD*)(*(_DWORD*)(a2 + 16) + 2 * *(_DWORD*)(a1 + 240) + 2 * *(_DWORD*)(a2 + 8) * *(_DWORD*)(a1 + 244));
        if ((*v3 & 0x1F) == 0)
        {
            result = ((int)(unsigned __int16)*v3 >> 5) & 0x1F;
            if ((((int)(unsigned __int16)*v3 >> 5) & 0x1F) == 0 && (((int)(unsigned __int16)*v3 >> 10) & 0x1F) == 0)
                break;
        }
        result = i + 1;
    }
    return result;
}

//----- (004DBEEC) --------------------------------------------------------
int __cdecl sub_4DBEEC(int a1, int a2)
{
    int v2; // esi
    int v3; // edx
    int result; // eax
    int i; // [esp+4h] [ebp-4h]

    sub_4DBDEC(a1, a2);
    *(_DWORD*)(a1 + 204) = 0;
    *(_WORD*)(a1 + 248) = 0;
    *(_DWORD*)(a1 + 224) = 5;
    *(_DWORD*)(a1 + 220) = 0;
    *(_DWORD*)(a1 + 216) = 4;
    **(_DWORD**)(a1 + 212) = 64;
    *(_DWORD*)(*(_DWORD*)(a1 + 212) + 4) = 64;
    *(_BYTE*)(a1 + 228) = 0;
    for (i = 1; i < 5; ++i)
    {
        *(_DWORD*)(*(_DWORD*)(a1 + 212) + 8 * i) = i * *(_DWORD*)a1 + **(_DWORD**)(a1 + 212);
        *(_DWORD*)(*(_DWORD*)(a1 + 212) + 8 * i + 4) = *(_DWORD*)(*(_DWORD*)(a1 + 212) + 4);
    }
    if (byte_5CAA38)
        *(_BYTE*)(a1 + 236) = 5;
    else
        *(_BYTE*)(a1 + 236) = 0;
    *(_BYTE*)(a1 + 229) = 3;
    *(_WORD*)(a1 + 258) = 2;
    *(_BYTE*)(a1 + 256) = 0;
    *(_BYTE*)(a1 + 257) = 90;
    v2 = *(_DWORD*)(a2 + 24);
    v3 = v2 + rand() % 50 + 60;
    result = a1;
    *(_DWORD*)(a1 + 252) = v3;
    return result;
}
// 5CAA38: using guessed type char byte_5CAA38;

//----- (004DC035) --------------------------------------------------------
__int64 __cdecl sub_4DC035(int a1)
{
    __int64 v2; // [esp+4h] [ebp-8h]

    switch (*(_BYTE*)(a1 + 229))
    {
    case 1:
        LODWORD(v2) = *(_DWORD*)(*(_DWORD*)(a1 + 212) + 8 * *(_DWORD*)(a1 + 216));
        HIDWORD(v2) = *(_DWORD*)(a1 + 4) + *(_DWORD*)(*(_DWORD*)(a1 + 212) + 8 * *(_DWORD*)(a1 + 216) + 4);
        break;
    case 2:
        LODWORD(v2) = *(_DWORD*)(*(_DWORD*)(a1 + 212) + 8 * *(_DWORD*)(a1 + 216)) - *(_DWORD*)(a1 + 4);
        HIDWORD(v2) = *(_DWORD*)(*(_DWORD*)(a1 + 212) + 8 * *(_DWORD*)(a1 + 216) + 4);
        break;
    case 3:
        LODWORD(v2) = *(_DWORD*)(a1 + 4) + *(_DWORD*)(*(_DWORD*)(a1 + 212) + 8 * *(_DWORD*)(a1 + 216));
        HIDWORD(v2) = *(_DWORD*)(*(_DWORD*)(a1 + 212) + 8 * *(_DWORD*)(a1 + 216) + 4);
        break;
    case 4:
        LODWORD(v2) = *(_DWORD*)(*(_DWORD*)(a1 + 212) + 8 * *(_DWORD*)(a1 + 216));
        HIDWORD(v2) = *(_DWORD*)(*(_DWORD*)(a1 + 212) + 8 * *(_DWORD*)(a1 + 216) + 4) - *(_DWORD*)(a1 + 4);
        break;
    default:
        return v2;
    }
    return v2;
}
// 4DC14B: variable 'v2' is possibly undefined

//----- (004DC165) --------------------------------------------------------
int __cdecl sub_4DC165(int a1, int a2)
{
    __int64 v3; // [esp+0h] [ebp-18h]
    _WORD* v4; // [esp+Ch] [ebp-Ch]

    v3 = sub_4DC035(a1);
    if ((int)v3 < 4 || (int)v3 >= 124 || SHIDWORD(v3) < 12 || SHIDWORD(v3) >= 124)
        return 1;
    if (v3 == *(_QWORD*)(a1 + 240))
        return 2;
    v4 = (_WORD*)(*(_DWORD*)(a2 + 16) + 2 * v3 + 2 * *(_DWORD*)(a2 + 8) * HIDWORD(v3));
    return (*v4 & 0x1F) != 0
        || (((int)(unsigned __int16)*v4 >> 5) & 0x1F) != 0
        || (((int)(unsigned __int16)*v4 >> 10) & 0x1F) != 0;
}

//----- (004DC241) --------------------------------------------------------
int __cdecl sub_4DC241(int a1, int a2)
{
    int v3; // [esp+4h] [ebp-20h]
    int i; // [esp+8h] [ebp-1Ch]
    int v5; // [esp+Ch] [ebp-18h]
    int v6; // [esp+10h] [ebp-14h]
    int v7[4]; // [esp+14h] [ebp-10h]

    v5 = 0;
    v3 = *(unsigned __int8*)(a1 + 229);
    for (i = 1; i < 5; ++i)
    {
        v6 = 0;
        switch (i)
        {
        case 1:
            if (v3 == 4)
                v6 = 1;
            break;
        case 2:
            if (v3 == 3)
                v6 = 1;
            break;
        case 3:
            if (v3 == 2)
                v6 = 1;
            break;
        case 4:
            if (v3 == 1)
                v6 = 1;
            break;
        default:
            break;
        }
        if (!v6)
        {
            *(_BYTE*)(a1 + 229) = i;
            if (sub_4DC165(a1, a2) != 1)
                v7[v5++] = i;
        }
    }
    if (v5)
    {
        *(_DWORD*)(a1 + 252) = *(_DWORD*)(a2 + 24) + rand() % 20 + 10;
        *(_BYTE*)(a1 + 229) = v7[rand() % v5];
    }
    else
    {
        *(_BYTE*)(a1 + 229) = v3;
    }
    return 0;
}

//----- (004D098D) --------------------------------------------------------
int __cdecl sub_4D098D(int a1, int a2)
{
    int result; // eax
    float v3; // [esp+0h] [ebp-48h]
    int v4; // [esp+10h] [ebp-38h]
    int v5; // [esp+14h] [ebp-34h]
    int v6; // [esp+18h] [ebp-30h]
    int v7; // [esp+1Ch] [ebp-2Ch]
    int v8; // [esp+20h] [ebp-28h]
    unsigned __int8 v9; // [esp+24h] [ebp-24h]
    int v10; // [esp+28h] [ebp-20h]
    int v11; // [esp+2Ch] [ebp-1Ch]
    int v12; // [esp+30h] [ebp-18h]
    int v13; // [esp+34h] [ebp-14h]
    unsigned __int8 v14; // [esp+3Ch] [ebp-Ch]
    unsigned __int8 v15; // [esp+40h] [ebp-8h]

    v7 = 0;
    v4 = *(_DWORD*)(a1 + 220);
    while (1)
    {
        result = a1;
        if (v7 >= *(_DWORD*)(a1 + 224))
            break;
        v13 = *(_DWORD*)(*(_DWORD*)(a1 + 212) + 8 * v4);
        v11 = *(_DWORD*)(*(_DWORD*)(a1 + 212) + 8 * v4 + 4);
        v3 = (float)*(char*)(a1 + 257);
        v5 = (__int64)(v3 / 90.0 * 31.0);
        if (v5)
        {
            v14 = rand() % v5;
            v9 = rand() % v5;
            v15 = rand() % v5;
        }
        else
        {
            v14 = 0;
            v9 = 0;
            v15 = 0;
        }
        v6 = v11;
        v10 = 0;
        while (v6 < v11 + 4)
        {
            v8 = v13;
            v12 = 0;
            while (v8 < v13 + 4)
            {
                *(_WORD*)(*(_DWORD*)(a2 + 16) + 2 * v8++ + 2 * *(_DWORD*)(a2 + 8) * v6) = v15
                    + 32 * v9
                    + (v14 << 10)
                    + 0x8000;
                ++v12;
            }
            ++v6;
            ++v10;
        }
        if (++v4 == *(_DWORD*)(a1 + 208))
            v4 = 0;
        ++v7;
    }
    return result;
}

//----- (004D07C6) --------------------------------------------------------
int __cdecl sub_4D07C6(int a1, int a2)
{
    int result; // eax
    float v3; // [esp+0h] [ebp-48h]
    int v4; // [esp+10h] [ebp-38h]
    int v5; // [esp+14h] [ebp-34h]
    int v6; // [esp+18h] [ebp-30h]
    int v7; // [esp+1Ch] [ebp-2Ch]
    int v8; // [esp+20h] [ebp-28h]
    unsigned __int8 v9; // [esp+24h] [ebp-24h]
    int v10; // [esp+28h] [ebp-20h]
    int v11; // [esp+2Ch] [ebp-1Ch]
    int v12; // [esp+30h] [ebp-18h]
    int v13; // [esp+34h] [ebp-14h]
    unsigned __int8 v14; // [esp+3Ch] [ebp-Ch]
    unsigned __int8 v15; // [esp+40h] [ebp-8h]

    v7 = 0;
    v4 = *(_DWORD*)(a1 + 312);
    while (1)
    {
        result = a1;
        if (v7 >= *(_DWORD*)(a1 + 316))
            break;
        v13 = *(_DWORD*)(*(_DWORD*)(a1 + 304) + 8 * v4);
        v11 = *(_DWORD*)(*(_DWORD*)(a1 + 304) + 8 * v4 + 4);
        v3 = (float)*(char*)(a1 + 421);
        v5 = (__int64)(v3 / 90.0 * 31.0);
        if (v5)
        {
            v14 = rand() % v5;
            v9 = rand() % v5;
            v15 = rand() % v5;
        }
        else
        {
            v14 = 0;
            v9 = 0;
            v15 = 0;
        }
        v6 = v11;
        v10 = 0;
        while (v6 < v11 + 4)
        {
            v8 = v13;
            v12 = 0;
            while (v8 < v13 + 4)
            {
                *(_WORD*)(*(_DWORD*)(a2 + 16) + 2 * v8++ + 2 * *(_DWORD*)(a2 + 8) * v6) = v15
                    + 32 * v9
                    + (v14 << 10)
                    + 0x8000;
                ++v12;
            }
            ++v6;
            ++v10;
        }
        if (++v4 == *(_DWORD*)(a1 + 300))
            v4 = 0;
        ++v7;
    }
    return result;
}

//----- (004DBA77) --------------------------------------------------------
__int64 __cdecl sub_4DBA77(int a1)
{
    __int64 v2; // [esp+4h] [ebp-8h]

    switch (*(_BYTE*)(a1 + 393))
    {
    case 1:
        LODWORD(v2) = *(_DWORD*)(*(_DWORD*)(a1 + 304) + 8 * *(_DWORD*)(a1 + 308));
        HIDWORD(v2) = *(_DWORD*)(a1 + 4) + *(_DWORD*)(*(_DWORD*)(a1 + 304) + 8 * *(_DWORD*)(a1 + 308) + 4);
        break;
    case 2:
        LODWORD(v2) = *(_DWORD*)(*(_DWORD*)(a1 + 304) + 8 * *(_DWORD*)(a1 + 308)) - *(_DWORD*)(a1 + 4);
        HIDWORD(v2) = *(_DWORD*)(*(_DWORD*)(a1 + 304) + 8 * *(_DWORD*)(a1 + 308) + 4);
        break;
    case 3:
        LODWORD(v2) = *(_DWORD*)(a1 + 4) + *(_DWORD*)(*(_DWORD*)(a1 + 304) + 8 * *(_DWORD*)(a1 + 308));
        HIDWORD(v2) = *(_DWORD*)(*(_DWORD*)(a1 + 304) + 8 * *(_DWORD*)(a1 + 308) + 4);
        break;
    case 4:
        LODWORD(v2) = *(_DWORD*)(*(_DWORD*)(a1 + 304) + 8 * *(_DWORD*)(a1 + 308));
        HIDWORD(v2) = *(_DWORD*)(*(_DWORD*)(a1 + 304) + 8 * *(_DWORD*)(a1 + 308) + 4) - *(_DWORD*)(a1 + 4);
        break;
    default:
        return v2;
    }
    return v2;
}
// 4DBB8D: variable 'v2' is possibly undefined

//----- (004DBBA7) --------------------------------------------------------
int __cdecl sub_4DBBA7(int a1, int a2)
{
    __int64 v3; // [esp+0h] [ebp-18h]
    _WORD* v4; // [esp+Ch] [ebp-Ch]
    char v5; // [esp+10h] [ebp-8h]

    v3 = sub_4DBA77(a1);
    if ((int)v3 < 4 || (int)v3 >= 124 || SHIDWORD(v3) < 12 || SHIDWORD(v3) >= 124)
        return 1;
    if (v3 == *(_QWORD*)(a1 + 404))
        return 2;
    v4 = (_WORD*)(*(_DWORD*)(a2 + 16) + 2 * v3 + 2 * *(_DWORD*)(a2 + 8) * HIDWORD(v3));
    v5 = *v4 & 0x1F;
    if (!v5 && (((int)(unsigned __int16)*v4 >> 5) & 0x1F) == 0 && (((int)(unsigned __int16)*v4 >> 10) & 0x1F) == 0)
        return 0;
    if (v5 == 8 && (((int)(unsigned __int16)*v4 >> 5) & 0x1F) == 8 && (((int)(unsigned __int16)*v4 >> 10) & 0x1F) == 8)
        return 2;
    return 1;
}

//----- (004DBCB6) --------------------------------------------------------
int __cdecl sub_4DBCB6(int a1, int a2)
{
    int v3; // [esp+4h] [ebp-20h]
    int i; // [esp+8h] [ebp-1Ch]
    int v5; // [esp+Ch] [ebp-18h]
    int v6; // [esp+10h] [ebp-14h]
    int v7[4]; // [esp+14h] [ebp-10h]

    v5 = 0;
    v3 = *(unsigned __int8*)(a1 + 393);
    for (i = 1; i < 5; ++i)
    {
        v6 = 0;
        switch (i)
        {
        case 1:
            if (v3 == 4)
                v6 = 1;
            break;
        case 2:
            if (v3 == 3)
                v6 = 1;
            break;
        case 3:
            if (v3 == 2)
                v6 = 1;
            break;
        case 4:
            if (v3 == 1)
                v6 = 1;
            break;
        default:
            break;
        }
        if (!v6)
        {
            *(_BYTE*)(a1 + 393) = i;
            if (sub_4DBBA7(a1, a2) != 1)
                v7[v5++] = i;
        }
    }
    if (v5)
    {
        *(_DWORD*)(a1 + 416) = *(_DWORD*)(a2 + 24) + rand() % 40 + 10;
        *(_BYTE*)(a1 + 393) = v7[rand() % v5];
    }
    else
    {
        *(_BYTE*)(a1 + 393) = v3;
    }
    return 0;
}