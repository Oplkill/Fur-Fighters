#include "minigame_daleks.h"

#include "minigame_global.h"
#include "defs.h"
#include "maybe.h"
#include "files.h"
#include "tempplace.h"
#include "save.h"

char aDaleksubgameCh[] = "daleksubgame.chb"; // idb
char aDaleksDocSpr[15] = "daleks\\doc.spr"; // weak
char aDaleksDalekSpr[17] = "daleks\\dalek.spr"; // weak
char aDaleksSonicSpr[17] = "daleks\\sonic.spr"; // weak
char aDaleksWreck1Sp[18] = "daleks\\wreck1.spr"; // weak
char aDaleksWreck2Sp[18] = "daleks\\wreck2.spr"; // weak
char aDaleksBackgndS[19] = "daleks\\backgnd.spr"; // weak
char aDaleksBorderSp[18] = "daleks\\border.spr"; // weak
char aDaleksOverEnSp[19] = "daleks\\over_en.spr"; // weak
char aDaleksPressEnS[20] = "daleks\\press_en.spr"; // weak
char aDaleksRoundEnS[20] = "daleks\\round_en.spr"; // weak
char aDaleksOverFrSp[19] = "daleks\\over_fr.spr"; // weak
char aDaleksPressFrS[20] = "daleks\\press_fr.spr"; // weak
char aDaleksRoundFrS[20] = "daleks\\round_fr.spr"; // weak
char aDaleksOverGeSp[19] = "daleks\\over_ge.spr"; // weak
char aDaleksPressGeS[20] = "daleks\\press_ge.spr"; // weak
char aDaleksRoundGeS[20] = "daleks\\round_ge.spr"; // weak
char aDaleksOverEnSp_0[19] = "daleks\\over_en.spr"; // weak
char aDaleksPressEnS_0[20] = "daleks\\press_en.spr"; // weak
char aDaleksRoundEnS_0[20] = "daleks\\round_en.spr"; // weak
char aDaleksOverSpSp[19] = "daleks\\over_sp.spr"; // weak
char aDaleksPressSpS[20] = "daleks\\press_sp.spr"; // weak
char aDaleksRoundSpS[20] = "daleks\\round_sp.spr"; // weak
char aDaleksOverEnSp_1[19] = "daleks\\over_en.spr"; // weak
char aDaleksPressEnS_1[20] = "daleks\\press_en.spr"; // weak
char aDaleksRoundEnS_1[20] = "daleks\\round_en.spr"; // weak
char aDaleksOverFrSp_0[19] = "daleks\\over_fr.spr"; // weak
char aDaleksPressFrS_0[20] = "daleks\\press_fr.spr"; // weak
char aDaleksRoundFrS_0[20] = "daleks\\round_fr.spr"; // weak
char aDaleksOverGeSp_0[19] = "daleks\\over_ge.spr"; // weak
char aDaleksPressGeS_0[20] = "daleks\\press_ge.spr"; // weak
char aDaleksRoundGeS_0[20] = "daleks\\round_ge.spr"; // weak
char aDaleksOverEnSp_2[19] = "daleks\\over_en.spr"; // weak
char aDaleksPressEnS_2[20] = "daleks\\press_en.spr"; // weak
char aDaleksRoundEnS_2[20] = "daleks\\round_en.spr"; // weak
char aDaleksOverSpSp_0[19] = "daleks\\over_sp.spr"; // weak
char aDaleksPressSpS_0[20] = "daleks\\press_sp.spr"; // weak
char aDaleksRoundSpS_0[20] = "daleks\\round_sp.spr"; // weak

char byte_5CAA39; // weak

int __cdecl sub_4E1728(_DWORD* a1);
int __cdecl sub_4D3B6A(_DWORD* a1, int a2);
int __cdecl sub_4DD074(_DWORD* a1);
int __cdecl sub_4DCDAB(int a1);
int __cdecl sub_4DCFDB(int a1);
int __cdecl sub_4DDF7A(int a1);
int __cdecl sub_4D0EFF(int a1, int a2, int a3);
int __cdecl sub_4D20C5(int a1);
int __cdecl sub_4D2088(int a1);
int __cdecl sub_4D13D8(int a1);
__int16 __cdecl sub_4DD9B4(int a1);
int __cdecl sub_4DD0FC(int a1, int a2);
int __cdecl sub_4DD3DF(int a1, int a2, int a3);
int __cdecl sub_4D2441(int a1);
int __cdecl sub_4D261A(int a1);
int __cdecl sub_4DCB9D(int a1);
int __cdecl sub_4D1054(int a1);
int __cdecl sub_4DCEC6(int a1);
int __cdecl sub_4DD332(int a1, int a2, _DWORD* a3, int a4, int a5, int a6);
int __cdecl sub_4DD28A(int a1, int a2, _DWORD* a3, int a4, int a5, int a6);

//----- (004D7C34) --------------------------------------------------------
int* __cdecl sub_4D7C34(int* a1)
{
    char* v2; // eax
    int v3; // [esp+4h] [ebp-8h]
    int i; // [esp+8h] [ebp-4h]
    int j; // [esp+8h] [ebp-4h]

    if (!sub_56EA26(*a1, a1[2], a1[3], 2))
        return 0;
    a1[11] = maybe_allocateMemory(332);
    v3 = a1[11];
    a1[7] = 1;
    a1[10] = (int)sub_4E1728;
    a1[1] = *(_DWORD*)(*a1 + 44);
    a1[4] = maybe_allocateMemory(2 * a1[3] * a1[2] + 31);
    a1[4] = (a1[4] + 31) & 0xFFFFFFE0;
    a1[6] = 0;
    loadCHBfile(aDaleksubgameCh);
    loadSprite(v3 + 132, aDaleksDocSpr);
    loadSprite(v3 + 144, aDaleksDalekSpr);
    loadSprite(v3 + 168, aDaleksSonicSpr);
    loadSprite(v3 + 180, aDaleksWreck1Sp);
    loadSprite(v3 + 192, aDaleksWreck2Sp);
    loadSprite(v3 + 156, aDaleksBackgndS);
    loadSprite(v3, aDaleksBorderSp);
    if (loadAllLanguageSpritesAtOnce)
    {
        loadSprite(v3 + 228, aDaleksOverEnSp);
        loadSprite(v3 + 216, aDaleksPressEnS);
        loadSprite(v3 + 204, aDaleksRoundEnS);
        loadSprite(v3 + 228, aDaleksOverFrSp);
        loadSprite(v3 + 216, aDaleksPressFrS);
        loadSprite(v3 + 204, aDaleksRoundFrS);
        loadSprite(v3 + 228, aDaleksOverGeSp);
        loadSprite(v3 + 216, aDaleksPressGeS);
        loadSprite(v3 + 204, aDaleksRoundGeS);
        loadSprite(v3 + 228, aDaleksOverEnSp_0);
        loadSprite(v3 + 216, aDaleksPressEnS_0);
        loadSprite(v3 + 204, aDaleksRoundEnS_0);
        loadSprite(v3 + 228, aDaleksOverSpSp);
        loadSprite(v3 + 216, aDaleksPressSpS);
        loadSprite(v3 + 204, aDaleksRoundSpS);
    }
    else
    {
        switch (languageId)
        {
        case language::English:
            loadSprite(v3 + 228, aDaleksOverEnSp_1);
            loadSprite(v3 + 216, aDaleksPressEnS_1);
            loadSprite(v3 + 204, aDaleksRoundEnS_1);
            break;
        case language::French:
            loadSprite(v3 + 228, aDaleksOverFrSp_0);
            loadSprite(v3 + 216, aDaleksPressFrS_0);
            loadSprite(v3 + 204, aDaleksRoundFrS_0);
            break;
        case language::German:
            loadSprite(v3 + 228, aDaleksOverGeSp_0);
            loadSprite(v3 + 216, aDaleksPressGeS_0);
            loadSprite(v3 + 204, aDaleksRoundGeS_0);
            break;
        case language::Unknown1:
            loadSprite(v3 + 228, aDaleksOverEnSp_2);
            loadSprite(v3 + 216, aDaleksPressEnS_2);
            loadSprite(v3 + 204, aDaleksRoundEnS_2);
            break;
        case language::Spanish:
            loadSprite(v3 + 228, aDaleksOverSpSp_0);
            loadSprite(v3 + 216, aDaleksPressSpS_0);
            loadSprite(v3 + 204, aDaleksRoundSpS_0);
            break;
        default:
            break;
        }
    }
    for (i = 0; i < 10; ++i)
    {
        v2 = getFormattedString("daleks\\digi%d.spr", i);
        loadSprite(v3 + 12 * i + 12, v2);
    }
    sub_53F37A();
    *(_BYTE*)(v3 + 275) = 8;
    *(_BYTE*)(v3 + 276) = 8;
    *(_BYTE*)(v3 + 273) = 120 / *(unsigned __int8*)(v3 + 275);
    *(_BYTE*)(v3 + 274) = 112 / *(unsigned __int8*)(v3 + 276);
    *(_DWORD*)(v3 + 260) = 185;
    *(_DWORD*)(v3 + 264) = 6;
    *(_BYTE*)(v3 + 272) = 6;
    *(_DWORD*)(v3 + 240) = maybe_allocateMemory(12 * *(_DWORD*)(v3 + 260));
    *(_DWORD*)(v3 + 244) = *(unsigned __int8*)(v3 + 273) / 2;
    *(_DWORD*)(v3 + 248) = *(unsigned __int8*)(v3 + 274) / 2;
    *(_DWORD*)(v3 + 308) = 0;
    *(_DWORD*)(v3 + 312) = 0;
    *(_BYTE*)(v3 + 304) = 0;
    *(_BYTE*)(v3 + 305) = 31;
    *(_BYTE*)(v3 + 306) = 0;
    byte_5CAA39 = 1;
    byte_5CAA32 = 0;
    *(_DWORD*)(v3 + 280) = 0;
    *(_WORD*)(v3 + 290) = 3;
    *(_WORD*)(v3 + 286) = 0;
    if (HIWORD(dword_6041EE))
        *(_WORD*)(v3 + 288) = HIWORD(dword_6041EE);
    else
        *(_WORD*)(v3 + 288) = 200;
    *(_DWORD*)(v3 + 256) = 256;
    *(_DWORD*)(v3 + 252) = maybe_allocateMemory(32 * *(_DWORD*)(v3 + 256));
    for (j = 0; j < *(_DWORD*)(v3 + 256); ++j)
        *(_BYTE*)(*(_DWORD*)(v3 + 252) + 32 * j) = 0;
    *(_BYTE*)(v3 + 329) = 0;
    *(_BYTE*)(v3 + 330) = 0;
    *(_BYTE*)(v3 + 284) = 3;
    *(_BYTE*)(v3 + 317) = 0;
    *(_DWORD*)(v3 + 320) = 0;
    *(_BYTE*)(v3 + 328) = 0;
    *(_DWORD*)(dword_5CAA54 + 32) = 1;
    sub_4E1728(a1);
    sub_4D3B6A(a1, v3);
    *(_DWORD*)(dword_5CAA54 + 32) = 0;
    return a1;
}
// 5CAA32: using guessed type char byte_5CAA32;
// 5CAA39: using guessed type char byte_5CAA39;
// 5CAA54: using guessed type int dword_5CAA54;
// 6041EE: using guessed type int dword_6041EE;
// 6045D4: using guessed type int languageId;
// 667394: using guessed type int loadAllLanguageSpritesAtOnce;

//----- (004E1728) --------------------------------------------------------
int __cdecl sub_4E1728(_DWORD* a1)
{
    int result; // eax
    __int16 v2; // cx
    int v3; // [esp+Ch] [ebp-14h]
    int v4; // [esp+10h] [ebp-10h]
    int v5; // [esp+14h] [ebp-Ch]
    int i; // [esp+18h] [ebp-8h]
    int j; // [esp+18h] [ebp-8h]
    int k; // [esp+18h] [ebp-8h]
    int v9; // [esp+1Ch] [ebp-4h]

    result = (int)a1;
    v9 = a1[11];
    v4 = 0;
    if (*(_DWORD*)(dword_5CAA54 + 32))
    {
        result = word_60430E;
        if (!word_60430E)
        {
            ++a1[6];
            if ((byte_5CAA32 & 1) != 0)
            {
                byte_5CAA39 = 0;
                byte_5CAA32 &= 0xFEu;
                byte_5CAA32 |= 4u;
                *(_WORD*)(v9 + 290) = 3;
                if ((byte_5CAA32 & 4) != 0)
                    sub_4D07B5(dword_5A03B4);
            }
            if (byte_5CAA39 != 1)
            {
                v3 = dword_6043C8[word_60431C];
                word_668762 = 1;
                sub_553C3C(*(_WORD*)(v3 + 128));
                word_604312 = 1;
            }
            if (byte_5CAA39)
            {
                if (byte_5CAA39 == 2 && (byte_622128 & 0x80) != 0)
                {
                    byte_5CAA39 = 0;
                    *(_WORD*)(v9 + 290) = 3;
                }
                if (!(rand() % 55))
                    v4 = rand() % 4 + 1;
            }
            if (!byte_5CAA39 && *(_WORD*)(v9 + 290) != 4 || v4)
            {
                *(_BYTE*)(v9 + 292) = 0;
                *(_DWORD*)(v9 + 296) = *(_DWORD*)(v9 + 244);
                *(_DWORD*)(v9 + 300) = *(_DWORD*)(v9 + 248);
                *(_DWORD*)(v9 + 308) = 0;
                *(_DWORD*)(v9 + 312) = 0;
                if ((byte_622128 & 0x80) != 0 || v4 == 4)
                {
                    --* (_DWORD*)(v9 + 300);
                    --* (_DWORD*)(v9 + 312);
                }
                if ((byte_622130 & 0x80) != 0 || v4 == 1)
                {
                    ++* (_DWORD*)(v9 + 300);
                    ++* (_DWORD*)(v9 + 312);
                }
                if ((byte_62212B & 0x80) != 0 || v4 == 2)
                {
                    --* (_DWORD*)(v9 + 296);
                    --* (_DWORD*)(v9 + 308);
                }
                if ((byte_62212D & 0x80) != 0 || v4 == 3)
                {
                    ++* (_DWORD*)(v9 + 296);
                    ++* (_DWORD*)(v9 + 308);
                }
                v5 = sub_4DD074((_DWORD*)v9);
                *(_BYTE*)(v9 + 292) = *(int*)(v9 + 300) >= 0
                    && *(_DWORD*)(v9 + 300) <= *(unsigned __int8*)(v9 + 274) - 1
                    && *(int*)(v9 + 296) >= 0
                    && *(_DWORD*)(v9 + 296) <= *(unsigned __int8*)(v9 + 273) - 1
                    && !v5;
                if (!byte_5CAA39)
                {
                    if ((byte_6220FD & 0x80) != 0 || (byte_62207D & 0x80) != 0 || v4 >= 1 && v4 <= 4)
                    {
                        *(_BYTE*)(v9 + 329) = 1;
                    }
                    else if ((byte_622096 & 0x80) != 0 || (byte_62208A & 0x80) != 0)
                    {
                        sub_4DCDAB(v9);
                    }
                    else if ((byte_622099 & 0x80) != 0)
                    {
                        sub_4DCFDB(v9);
                    }
                    else
                    {
                        *(_BYTE*)(v9 + 329) = 0;
                    }
                }
            }
            v2 = *(_WORD*)(v9 + 290);
            if (v2)
            {
                if (v2 == 3)
                {
                    *(_WORD*)(v9 + 286) = 0;
                    *(_BYTE*)(v9 + 284) = 3;
                    *(_DWORD*)(v9 + 264) = *(unsigned __int8*)(v9 + 272);
                    *(_DWORD*)(v9 + 280) = 0;
                    sub_4DDF7A(v9);
                    *(_WORD*)(v9 + 290) = 4;
                    *(_DWORD*)(v9 + 324) = 0;
                    *(_DWORD*)(v9 + 320) = 60;
                }
                else if (v2 == 4)
                {
                    if (*(_DWORD*)(v9 + 324) == 2)
                    {
                        if (*(int*)(v9 + 320) > 25)
                        {
                            for (i = 0; i < *(_DWORD*)(v9 + 256) / 6; ++i)
                                sub_4D0EFF(
                                    *(unsigned __int8*)(v9 + 275) * *(_DWORD*)(v9 + 244) + *(_DWORD*)(v9 + 132) / 2 + 4,
                                    *(unsigned __int8*)(v9 + 276) * *(_DWORD*)(v9 + 248) + *(_DWORD*)(v9 + 136) / 2 + 12,
                                    v9);
                        }
                        sub_4D20C5(v9);
                    }
                    if ((int)-- * (_DWORD*)(v9 + 320) < 0)
                    {
                        *(_DWORD*)(v9 + 320) = 0;
                        switch (*(_DWORD*)(v9 + 324))
                        {
                        case 0:
                            sub_4DDF7A(v9);
                            *(_WORD*)(v9 + 290) = 0;
                            break;
                        case 1:
                            ++ * (_DWORD*)(v9 + 280);
                            *(_DWORD*)(v9 + 264) += 3;
                            if (*(_DWORD*)(v9 + 264) >= *(_DWORD*)(v9 + 260))
                                *(_DWORD*)(v9 + 264) = *(_DWORD*)(v9 + 260);
                            *(_DWORD*)(v9 + 324) = 0;
                            *(_DWORD*)(v9 + 320) = 45;
                            break;
                        case 2:
                            *(_DWORD*)(v9 + 324) = 8;
                            sub_4D2088(v9);
                            break;
                        case 3:
                            if (*(unsigned __int16*)(v9 + 286) > (int)*(unsigned __int16*)(v9 + 288))
                            {
                                *(_WORD*)(v9 + 288) = *(_WORD*)(v9 + 286);
                                HIWORD(dword_6041EE) = *(_WORD*)(v9 + 288);
                                if ((dword_6041E0 & 0x10) == 0)
                                {
                                    sub_47641B(3);
                                    saveGame(-1, 0);
                                }
                            }
                            byte_5CAA39 = 2;
                            *(_WORD*)(v9 + 290) = 3;
                            break;
                        case 4:
                            if (*(_BYTE*)(v9 + 284) || byte_5CAA39)
                            {
                                *(_DWORD*)(v9 + 324) = 0;
                                *(_DWORD*)(v9 + 320) = 60;
                            }
                            else
                            {
                                *(_WORD*)(v9 + 290) = 4;
                                *(_DWORD*)(v9 + 324) = 3;
                                *(_DWORD*)(v9 + 320) = 90;
                            }
                            break;
                        case 5:
                            *(_DWORD*)(v9 + 324) = 10;
                            *(_DWORD*)(v9 + 320) = 15;
                            for (j = 0; j < *(_DWORD*)(v9 + 256); ++j)
                            {
                                if (*(_BYTE*)(*(_DWORD*)(v9 + 252) + 32 * j) == 1)
                                {
                                    *(_DWORD*)(*(_DWORD*)(v9 + 252) + 32 * j + 12) = 0;
                                    *(_DWORD*)(*(_DWORD*)(v9 + 252) + 32 * j + 16) = 0;
                                }
                            }
                            break;
                        case 6:
                            *(_DWORD*)(v9 + 324) = 7;
                            *(_DWORD*)(v9 + 320) = 20;
                            *(_BYTE*)(v9 + 328) = 1;
                            sub_4D2088(v9);
                            break;
                        case 7:
                            *(_WORD*)(v9 + 290) = 0;
                            break;
                        case 8:
                            *(_WORD*)(v9 + 290) = 0;
                            for (k = 0; k < *(_DWORD*)(v9 + 264); ++k)
                                *(_BYTE*)(*(_DWORD*)(v9 + 240) + 12 * k + 10) = 0;
                            if (!*(_DWORD*)(v9 + 268))
                            {
                                *(_WORD*)(v9 + 290) = 4;
                                *(_DWORD*)(v9 + 324) = 1;
                                *(_DWORD*)(v9 + 320) = 30;
                            }
                            break;
                        case 9:
                            *(_WORD*)(v9 + 290) = 0;
                            break;
                        case 0xA:
                            sub_4D2088(v9);
                            sub_4D13D8(v9);
                            *(_DWORD*)(v9 + 324) = 6;
                            *(_DWORD*)(v9 + 320) = 23;
                            *(_BYTE*)(v9 + 328) = 0;
                            if ((byte_5CAA32 & 4) != 0)
                                sub_4D07B5(dword_5A0390);
                            break;
                        default:
                            break;
                        }
                    }
                }
            }
            else if (!*(_BYTE*)(v9 + 330) && *(_BYTE*)(v9 + 329) && *(_BYTE*)(v9 + 292) || *(_BYTE*)(v9 + 316) || v4)
            {
                if (!*(_BYTE*)(v9 + 316))
                {
                    *(_DWORD*)(v9 + 244) += *(_DWORD*)(v9 + 308);
                    *(_DWORD*)(v9 + 248) += *(_DWORD*)(v9 + 312);
                }
                sub_4DD9B4(v9);
                if (*(_BYTE*)(v9 + 317))
                {
                    if ((byte_5CAA32 & 4) != 0)
                        sub_4D07B5(dword_5A0388);
                    --* (_BYTE*)(v9 + 284);
                    *(_WORD*)(v9 + 290) = 4;
                    *(_DWORD*)(v9 + 324) = 4;
                    *(_DWORD*)(v9 + 320) = 90;
                    *(_BYTE*)(v9 + 317) = 0;
                }
                if (*(int*)(v9 + 268) <= 0 && (*(_WORD*)(v9 + 290) != 4 || *(_DWORD*)(v9 + 324) != 8))
                {
                    *(_WORD*)(v9 + 290) = 4;
                    *(_DWORD*)(v9 + 324) = 1;
                    *(_DWORD*)(v9 + 320) = 30;
                }
                *(_BYTE*)(v9 + 316) = 0;
            }
            *(_BYTE*)(v9 + 330) = *(_BYTE*)(v9 + 329);
            if ((byte_62207C & 0x80) != 0 && (byte_5CAA32 & 4) != 0)
            {
                *(_WORD*)(v9 + 290) = 3;
                byte_5CAA39 = 1;
                byte_5CAA32 |= 2u;
                byte_5CAA32 &= 0xFBu;
            }
            result = sub_4D3B6A(a1, v9);
        }
    }
    return result;
}
// 5A03B4: using guessed type int dword_5A03B4;
// 5CAA32: using guessed type char byte_5CAA32;
// 5CAA39: using guessed type char byte_5CAA39;
// 5CAA54: using guessed type int dword_5CAA54;
// 6041E0: using guessed type int dword_6041E0;
// 6041EE: using guessed type int dword_6041EE;
// 60430E: using guessed type __int16 word_60430E;
// 604312: using guessed type __int16 word_604312;
// 60431C: using guessed type __int16 word_60431C;
// 6043C8: using guessed type int dword_6043C8[];
// 62207C: using guessed type char byte_62207C;
// 62207D: using guessed type char byte_62207D;
// 62208A: using guessed type char byte_62208A;
// 622096: using guessed type char byte_622096;
// 622099: using guessed type char byte_622099;
// 6220FD: using guessed type char byte_6220FD;
// 622128: using guessed type char byte_622128;
// 62212B: using guessed type char byte_62212B;
// 62212D: using guessed type char byte_62212D;
// 622130: using guessed type char byte_622130;
// 668762: using guessed type __int16 word_668762;

//----- (004D3B6A) --------------------------------------------------------
int __cdecl sub_4D3B6A(_DWORD* a1, int a2)
{
    int v2; // eax
    int result; // eax
    float v4; // [esp+8h] [ebp-34h]
    float v5; // [esp+10h] [ebp-2Ch]
    float v6; // [esp+18h] [ebp-24h]
    float v7; // [esp+20h] [ebp-1Ch]
    char v8; // [esp+24h] [ebp-18h]
    float v9; // [esp+28h] [ebp-14h]
    int i; // [esp+2Ch] [ebp-10h]
    int j; // [esp+2Ch] [ebp-10h]
    int k; // [esp+2Ch] [ebp-10h]
    int l; // [esp+2Ch] [ebp-10h]
    int m; // [esp+2Ch] [ebp-10h]
    int n; // [esp+2Ch] [ebp-10h]
    int ii; // [esp+2Ch] [ebp-10h]
    int jj; // [esp+2Ch] [ebp-10h]
    int kk; // [esp+2Ch] [ebp-10h]
    int ll; // [esp+2Ch] [ebp-10h]
    int mm; // [esp+2Ch] [ebp-10h]
    int v21; // [esp+2Ch] [ebp-10h]
    int nn; // [esp+2Ch] [ebp-10h]
    int i1; // [esp+2Ch] [ebp-10h]
    int i2; // [esp+2Ch] [ebp-10h]
    int v25; // [esp+30h] [ebp-Ch]
    int v26; // [esp+34h] [ebp-8h]
    int v27; // [esp+34h] [ebp-8h]
    int v28; // [esp+34h] [ebp-8h]
    _DWORD* v29; // [esp+38h] [ebp-4h]

    v29 = (_DWORD*)(a1[4] + 0x8000);
    for (i = 0; i < 0x2000; ++i)
        *--v29 = 0;
    sub_4D05E6(a1, 4, 12, (int*)(a2 + 156));
    if (*(_WORD*)(a2 + 290) != 4 || *(_DWORD*)(a2 + 324))
    {
        if (*(_WORD*)(a2 + 290) != 4
            || *(_DWORD*)(a2 + 324) != 5 && *(_DWORD*)(a2 + 324) != 6 && *(_DWORD*)(a2 + 324) != 10)
        {
            sub_4D05E6(
                a1,
                *(unsigned __int8*)(a2 + 275) * *(_DWORD*)(a2 + 244) + 4,
                *(unsigned __int8*)(a2 + 276) * *(_DWORD*)(a2 + 248) + 12,
                (int*)(a2 + 132));
        }
        for (j = 0; j < *(_DWORD*)(a2 + 264); ++j)
        {
            v8 = *(_BYTE*)(*(_DWORD*)(a2 + 240) + 12 * j + 8);
            if (v8 == 1)
            {
                sub_4D05E6(
                    a1,
                    *(unsigned __int8*)(a2 + 275) * *(_DWORD*)(*(_DWORD*)(a2 + 240) + 12 * j) + 4,
                    *(unsigned __int8*)(a2 + 276) * *(_DWORD*)(*(_DWORD*)(a2 + 240) + 12 * j + 4) + 12,
                    (int*)(a2 + 144));
            }
            else if (v8 == 2)
            {
                v2 = rand() % 2;
                sub_4D05E6(
                    a1,
                    *(unsigned __int8*)(a2 + 275) * *(_DWORD*)(*(_DWORD*)(a2 + 240) + 12 * j) + 4,
                    *(unsigned __int8*)(a2 + 276) * *(_DWORD*)(*(_DWORD*)(a2 + 240) + 12 * j + 4) + 12,
                    (int*)(a2 + 12 * v2 + 180));
            }
        }
        if (!byte_5CAA39
            && *(_WORD*)(a2 + 290) != 4
            && *(_BYTE*)(a2 + 292)
            && (*(_DWORD*)(a2 + 244) != *(_DWORD*)(a2 + 296) || *(_DWORD*)(a2 + 248) != *(_DWORD*)(a2 + 300)))
        {
            for (k = 0; k < *(unsigned __int8*)(a2 + 275); ++k)
                *(_WORD*)(a1[4]
                    + 24 * a1[2]
                    + 2 * *(_DWORD*)(a2 + 300) * *(unsigned __int8*)(a2 + 276) * a1[2]
                    + 2 * *(unsigned __int8*)(a2 + 275) * *(_DWORD*)(a2 + 296)
                    + 8
                    + 2 * k) = *(unsigned __int8*)(a2 + 306)
                + 32 * *(unsigned __int8*)(a2 + 305)
                + (*(unsigned __int8*)(a2 + 304) << 10);
            for (l = 0; l < *(unsigned __int8*)(a2 + 275); ++l)
                *(_WORD*)(a1[4]
                    + 24 * a1[2]
                    + 2 * (*(_DWORD*)(a2 + 300) + 1) * *(unsigned __int8*)(a2 + 276) * a1[2]
                    + 2 * *(unsigned __int8*)(a2 + 275) * *(_DWORD*)(a2 + 296)
                    + 8
                    + 2 * l) = *(unsigned __int8*)(a2 + 306)
                + 32 * *(unsigned __int8*)(a2 + 305)
                + (*(unsigned __int8*)(a2 + 304) << 10);
            for (m = 0; m < *(unsigned __int8*)(a2 + 276); ++m)
                *(_WORD*)(a1[4]
                    + 24 * a1[2]
                    + 2 * *(_DWORD*)(a2 + 300) * *(unsigned __int8*)(a2 + 276) * a1[2]
                    + 2 * m * a1[2]
                    + 2 * *(unsigned __int8*)(a2 + 275) * *(_DWORD*)(a2 + 296)
                    + 8) = *(unsigned __int8*)(a2 + 306)
                + 32 * *(unsigned __int8*)(a2 + 305)
                + (*(unsigned __int8*)(a2 + 304) << 10);
            for (n = 0; n < *(unsigned __int8*)(a2 + 276); ++n)
                *(_WORD*)(a1[4]
                    + 24 * a1[2]
                    + 2 * *(_DWORD*)(a2 + 300) * *(unsigned __int8*)(a2 + 276) * a1[2]
                    + 2 * n * a1[2]
                    + 2 * *(unsigned __int8*)(a2 + 275) * (*(_DWORD*)(a2 + 296) + 1)
                    + 6) = *(unsigned __int8*)(a2 + 306)
                + 32 * *(unsigned __int8*)(a2 + 305)
                + (*(unsigned __int8*)(a2 + 304) << 10);
        }
    }
    if (*(_WORD*)(a2 + 290) == 4 && (*(_DWORD*)(a2 + 324) == 4 || *(_DWORD*)(a2 + 324) == 3))
        sub_4DD0FC(a2, (int)a1);
    if (*(_WORD*)(a2 + 290) == 4 && (*(_DWORD*)(a2 + 324) == 8 || *(_DWORD*)(a2 + 324) == 2))
    {
        for (ii = 0; ii < *(_DWORD*)(a2 + 264); ++ii)
        {
            if (*(_BYTE*)(*(_DWORD*)(a2 + 240) + 12 * ii + 10))
                sub_4DD3DF(12 * ii + *(_DWORD*)(a2 + 240), a2, (int)a1);
        }
    }
    if (*(_WORD*)(a2 + 290) == 4 && *(_DWORD*)(a2 + 324) == 2)
    {
        for (jj = 0; jj < *(_DWORD*)(a2 + 256); ++jj)
        {
            if (*(_BYTE*)(*(_DWORD*)(a2 + 252) + 32 * jj))
                sub_4D0743(
                    (__int64)*(float*)(*(_DWORD*)(a2 + 252) + 32 * jj + 4),
                    (__int64)*(float*)(*(_DWORD*)(a2 + 252) + 32 * jj + 8),
                    *(_BYTE*)(*(_DWORD*)(a2 + 252) + 32 * jj + 30) & 0x1F,
                    ((int)*(unsigned __int16*)(*(_DWORD*)(a2 + 252) + 32 * jj + 30) >> 5) & 0x1F,
                    ((int)*(unsigned __int16*)(*(_DWORD*)(a2 + 252) + 32 * jj + 30) >> 10) & 0x1F,
                    (int)a1);
        }
        sub_4D05E6(
            a1,
            *(unsigned __int8*)(a2 + 275) * *(_DWORD*)(a2 + 244) + 4,
            *(unsigned __int8*)(a2 + 276) * *(_DWORD*)(a2 + 248) + 12,
            (int*)(a2 + 132));
    }
    v25 = 12;
    for (kk = 0; kk < 29; ++kk)
    {
        sub_4D05E6(a1, 0, v25, (int*)a2);
        sub_4D05E6(a1, 124, v25, (int*)a2);
        v25 += *(_DWORD*)(a2 + 4);
    }
    v26 = 0;
    for (ll = 0; ll < 32; ++ll)
    {
        sub_4D05E6(a1, v26, 8, (int*)a2);
        sub_4D05E6(a1, v26, 124, (int*)a2);
        v26 += *(_DWORD*)a2;
    }
    if (!byte_5CAA39)
    {
        v27 = 119;
        for (mm = 0; mm < *(unsigned __int8*)(a2 + 284) - 1; ++mm)
        {
            sub_4D05E6(a1, v27, 0, (int*)(a2 + 132));
            v27 -= *(_DWORD*)(a2 + 132);
        }
    }
    if (byte_5CAA39 == 2)
    {
        sub_4D05E6(a1, a1[2] / 2 - *(_DWORD*)(a2 + 216) / 2, a1[3] / 2 - *(_DWORD*)(a2 + 220) / 2, (int*)(a2 + 216));
    }
    else if (*(_WORD*)(a2 + 290) == 4 && (!*(_DWORD*)(a2 + 324) || *(_DWORD*)(a2 + 324) == 9))
    {
        if (!byte_5CAA39)
        {
            sub_4D05E6(a1, a1[2] / 2 - *(_DWORD*)(a2 + 204) / 2, a1[3] / 2, (int*)(a2 + 204));
            if (*(_DWORD*)(a2 + 280) + 1 >= 10)
                v21 = 8;
            else
                v21 = 4;
            sub_4D29D9(a1[2] / 2 - v21, *(_DWORD*)(a2 + 208) + a1[3] / 2, *(_DWORD*)(a2 + 280) + 1, (_DWORD*)(a2 + 12), a1);
        }
    }
    else if (*(_WORD*)(a2 + 290) == 4 && *(_DWORD*)(a2 + 324) == 3)
    {
        sub_4D05E6(a1, a1[2] / 2 - *(_DWORD*)(a2 + 228) / 2, a1[3] / 2, (int*)(a2 + 228));
    }
    else if (!byte_5CAA39 && *(_BYTE*)(a2 + 285))
    {
        v28 = a1[2] - 3 * *(_DWORD*)(a2 + 132) - *(_DWORD*)(a2 + 168);
        for (nn = 0; nn < *(unsigned __int8*)(a2 + 285); ++nn)
        {
            sub_4D05E6(a1, v28, 0, (int*)(a2 + 168));
            v28 -= *(_DWORD*)(a2 + 168);
        }
    }
    sub_4D290F(
        100 * *(unsigned __int16*)(a2 + 286),
        100 * *(unsigned __int16*)(a2 + 288),
        (_DWORD*)(a2 + 12),
        a1,
        byte_5CAA39);
    if (*(_WORD*)(a2 + 290) == 4 && (*(_DWORD*)(a2 + 324) == 5 || *(_DWORD*)(a2 + 324) == 10))
    {
        for (i1 = 0; i1 < *(_DWORD*)(a2 + 256); ++i1)
        {
            if (*(_BYTE*)(*(_DWORD*)(a2 + 252) + 32 * i1))
                sub_4D0743(
                    (__int64)*(float*)(*(_DWORD*)(a2 + 252) + 32 * i1 + 4),
                    (__int64)*(float*)(*(_DWORD*)(a2 + 252) + 32 * i1 + 8),
                    *(_BYTE*)(*(_DWORD*)(a2 + 252) + 32 * i1 + 30) & 0x1F,
                    ((int)*(unsigned __int16*)(*(_DWORD*)(a2 + 252) + 32 * i1 + 30) >> 5) & 0x1F,
                    ((int)*(unsigned __int16*)(*(_DWORD*)(a2 + 252) + 32 * i1 + 30) >> 10) & 0x1F,
                    (int)a1);
        }
        sub_4D2441(a2);
    }
    if (*(_WORD*)(a2 + 290) == 4 && *(_DWORD*)(a2 + 324) == 6)
    {
        v7 = (float)*(int*)(a2 + 320);
        for (i2 = 0; i2 < *(_DWORD*)(a2 + 256); ++i2)
        {
            if (*(_BYTE*)(*(_DWORD*)(a2 + 252) + 32 * i2)
                && *(float*)(*(_DWORD*)(a2 + 252) + 32 * i2 + 4) > 0.0
                && *(float*)(*(_DWORD*)(a2 + 252) + 32 * i2 + 4) < 128.0
                && *(float*)(*(_DWORD*)(a2 + 252) + 32 * i2 + 8) > 0.0
                && *(float*)(*(_DWORD*)(a2 + 252) + 32 * i2 + 8) < 128.0)
            {
                v6 = (float)(rand() % 31);
                v5 = (float)(rand() % 31);
                v4 = (float)(rand() % 31);
                v9 = v7 / 23.0;
                sub_4D0743(
                    (__int64)*(float*)(*(_DWORD*)(a2 + 252) + 32 * i2 + 4),
                    (__int64)*(float*)(*(_DWORD*)(a2 + 252) + 32 * i2 + 8),
                    (__int64)(v9 * v4),
                    (__int64)(v9 * v5),
                    (__int64)(v9 * v6),
                    (int)a1);
            }
        }
        sub_4D261A(a2);
    }
    if (*(_BYTE*)(a2 + 328) && *(_WORD*)(a2 + 290) == 4 && *(_DWORD*)(a2 + 324) == 6)
        sub_4D05E6(
            a1,
            *(unsigned __int8*)(a2 + 275) * *(_DWORD*)(a2 + 244) + 4,
            *(unsigned __int8*)(a2 + 276) * *(_DWORD*)(a2 + 248) + 12,
            (int*)(a2 + 132));
    result = (int)a1;
    if (a1[1])
        result = sub_569C41(a1[1], a1[4]);
    return result;
}
// 5CAA39: using guessed type char byte_5CAA39;

//----- (004DD074) --------------------------------------------------------
int __cdecl sub_4DD074(_DWORD* a1)
{
    int i; // [esp+0h] [ebp-4h]

    for (i = 0; i < a1[66]; ++i)
    {
        if (*(_BYTE*)(a1[60] + 12 * i + 8) == 2
            && *(_DWORD*)(a1[60] + 12 * i) == a1[74]
            && *(_DWORD*)(a1[60] + 12 * i + 4) == a1[75])
        {
            return 1;
        }
    }
    return 0;
}

//----- (004DCDAB) --------------------------------------------------------
int __cdecl sub_4DCDAB(int a1)
{
    int result; // eax
    int i; // [esp+4h] [ebp-4h]

    result = a1;
    *(_BYTE*)(a1 + 329) = 0;
    if (*(_BYTE*)(a1 + 285))
    {
        if ((byte_5CAA32 & 4) != 0)
            sub_4D07B5(dword_5A0398);
        *(_WORD*)(a1 + 290) = 4;
        *(_DWORD*)(a1 + 324) = 2;
        *(_DWORD*)(a1 + 320) = 30;
        *(_BYTE*)(a1 + 316) = 1;
        sub_4DCB9D(a1);
        for (i = 0; ; ++i)
        {
            result = *(_DWORD*)(a1 + 256) / 6;
            if (i >= result)
                break;
            sub_4D0EFF(
                *(unsigned __int8*)(a1 + 275) * *(_DWORD*)(a1 + 244) + *(_DWORD*)(a1 + 132) / 2 + 4,
                *(unsigned __int8*)(a1 + 276) * *(_DWORD*)(a1 + 248) + *(_DWORD*)(a1 + 136) / 2 + 12,
                a1);
        }
    }
    else
    {
        *(_WORD*)(a1 + 290) = 0;
    }
    return result;
}
// 5A0398: using guessed type int dword_5A0398;
// 5CAA32: using guessed type char byte_5CAA32;

//----- (004DCFDB) --------------------------------------------------------
int __cdecl sub_4DCFDB(int a1)
{
    int result; // eax

    result = a1;
    *(_BYTE*)(a1 + 329) = 1;
    if (!*(_BYTE*)(a1 + 330))
    {
        if ((byte_5CAA32 & 4) != 0)
            sub_4D07B5(dword_5A038C);
        *(_BYTE*)(a1 + 316) = 1;
        *(_WORD*)(a1 + 290) = 4;
        *(_DWORD*)(a1 + 324) = 5;
        *(_DWORD*)(a1 + 320) = 20;
        sub_4D2088(a1);
        sub_4D1054(a1);
        sub_4DCEC6(a1);
        result = a1;
        *(_BYTE*)(a1 + 292) = 0;
    }
    return result;
}
// 5CAA32: using guessed type char byte_5CAA32;

//----- (004DDF7A) --------------------------------------------------------
int __cdecl sub_4DDF7A(int a1)
{
    int result; // eax
    __int64 v2; // rax
    __int64 v3; // rax
    int v4; // [esp+4h] [ebp-Ch]
    int k; // [esp+8h] [ebp-8h]
    int i; // [esp+Ch] [ebp-4h]
    int j; // [esp+Ch] [ebp-4h]

    *(_DWORD*)(a1 + 244) = *(unsigned __int8*)(a1 + 273) / 2;
    *(_DWORD*)(a1 + 248) = *(unsigned __int8*)(a1 + 274) / 2;
    *(_DWORD*)(a1 + 268) = *(_DWORD*)(a1 + 264);
    *(_BYTE*)(a1 + 285) = 2;
    for (i = 0; i < *(_DWORD*)(a1 + 264); ++i)
    {
        *(_BYTE*)(*(_DWORD*)(a1 + 240) + 12 * i + 8) = 1;
        *(_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * i) = rand() % *(unsigned __int8*)(a1 + 273);
        *(_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * i + 4) = rand() % *(unsigned __int8*)(a1 + 274);
        *(_BYTE*)(*(_DWORD*)(a1 + 240) + 12 * i + 10) = 0;
    }
    for (j = 0; ; ++j)
    {
        result = a1;
        if (j >= *(_DWORD*)(a1 + 264))
            break;
        do
        {
            v4 = 0;
            v2 = *(_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * j) - *(_DWORD*)(a1 + 244);
            if ((int)((HIDWORD(v2) ^ v2) - HIDWORD(v2)) >= 3
                || (v3 = *(_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * j + 4) - *(_DWORD*)(a1 + 248),
                    (int)((HIDWORD(v3) ^ v3) - HIDWORD(v3)) >= 3))
            {
                for (k = 0; k < *(_DWORD*)(a1 + 264); ++k)
                {
                    if (j != k
                        && *(_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * j) == *(_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * k)
                        && *(_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * j + 4) == *(_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * k + 4))
                    {
                        *(_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * j) = rand() % *(unsigned __int8*)(a1 + 273);
                        *(_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * j + 4) = rand() % *(unsigned __int8*)(a1 + 274);
                        v4 = 1;
                        break;
                    }
                }
            }
            else
            {
                v4 = 1;
                *(_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * j) = rand() % *(unsigned __int8*)(a1 + 273);
                *(_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * j + 4) = rand() % *(unsigned __int8*)(a1 + 274);
            }
        } while (v4);
    }
    return result;
}

//----- (004D0EFF) --------------------------------------------------------
int __cdecl sub_4D0EFF(int a1, int a2, int a3)
{
    int result; // eax
    float v4; // [esp+8h] [ebp-1Ch]
    int v5; // [esp+Ch] [ebp-18h]
    int i; // [esp+10h] [ebp-14h]
    int v7; // [esp+14h] [ebp-10h]
    float v8; // [esp+18h] [ebp-Ch]
    float v9; // [esp+1Ch] [ebp-8h]
    float v10; // [esp+20h] [ebp-4h]

    v5 = 1;
    for (i = 0; i < *(_DWORD*)(a3 + 256); ++i)
    {
        result = 32 * i;
        if (!*(_BYTE*)(*(_DWORD*)(a3 + 252) + 32 * i))
        {
            v5 = 0;
            v7 = i;
            break;
        }
        result = i + 1;
    }
    if (!v5)
    {
        *(_BYTE*)(*(_DWORD*)(a3 + 252) + 32 * v7) = 1;
        *(float*)(*(_DWORD*)(a3 + 252) + 32 * v7 + 4) = (float)a1;
        *(float*)(*(_DWORD*)(a3 + 252) + 32 * v7 + 8) = (float)a2;
        dword_6AD840 = (unsigned __int16)(20077 * dword_6AD840 + 12345);
        v4 = (float)dword_6AD840;
        v10 = (v4 * 0.000030517578 - 1.0) * 6.28;
        v9 = cos(v10) * 1.5;
        v8 = sin(v10) * 1.5;
        *(float*)(*(_DWORD*)(a3 + 252) + 32 * v7 + 12) = v9;
        *(float*)(*(_DWORD*)(a3 + 252) + 32 * v7 + 16) = v8;
        result = a3;
        *(_WORD*)(*(_DWORD*)(a3 + 252) + 32 * v7 + 30) = -1;
    }
    return result;
}
// 4D0F63: variable 'v7' is possibly undefined
// 6AD840: using guessed type int dword_6AD840;

//----- (004D20C5) --------------------------------------------------------
int __cdecl sub_4D20C5(int a1)
{
    int result; // eax
    float v2; // [esp+10h] [ebp-58h]
    float v3; // [esp+1Ch] [ebp-4Ch]
    float v4; // [esp+50h] [ebp-18h]
    float v5; // [esp+54h] [ebp-14h]
    int i; // [esp+58h] [ebp-10h]
    float v7; // [esp+64h] [ebp-4h]

    for (i = 0; ; ++i)
    {
        result = a1;
        if (i >= *(_DWORD*)(a1 + 256))
            break;
        if (*(_BYTE*)(*(_DWORD*)(a1 + 252) + 32 * i))
        {
            *(float*)(*(_DWORD*)(a1 + 252) + 32 * i + 4) = *(float*)(*(_DWORD*)(a1 + 252) + 32 * i + 4)
                + *(float*)(*(_DWORD*)(a1 + 252) + 32 * i + 12);
            *(float*)(*(_DWORD*)(a1 + 252) + 32 * i + 8) = *(float*)(*(_DWORD*)(a1 + 252) + 32 * i + 8)
                + *(float*)(*(_DWORD*)(a1 + 252) + 32 * i + 16);
            v3 = (float)(*(unsigned __int8*)(a1 + 275) * *(_DWORD*)(a1 + 244) + *(_DWORD*)(a1 + 132) / 2 + 4);
            v4 = (float)(int)abs32((__int64)(v3 - *(float*)(*(_DWORD*)(a1 + 252) + 32 * i + 4)));
            v2 = (float)(*(unsigned __int8*)(a1 + 276) * *(_DWORD*)(a1 + 248) + *(_DWORD*)(a1 + 136) / 2 + 12);
            v7 = (float)(int)abs32((__int64)(v2 - *(float*)(*(_DWORD*)(a1 + 252) + 32 * i + 8)));
            v5 = sqrt(v4 * v4 + v7 * v7);
            *(_WORD*)(*(_DWORD*)(a1 + 252) + 32 * i + 30) = 1057 * (__int64)(v5 / 12.0 * 31.0) + 0x8000;
            if (v5 <= 12.0)
            {
                if (*(float*)(*(_DWORD*)(a1 + 252) + 32 * i + 4) < 4.0
                    || *(float*)(*(_DWORD*)(a1 + 252) + 32 * i + 4) >= 124.0
                    || *(float*)(*(_DWORD*)(a1 + 252) + 32 * i + 8) < 12.0
                    || *(float*)(*(_DWORD*)(a1 + 252) + 32 * i + 8) >= 124.0)
                {
                    *(_BYTE*)(*(_DWORD*)(a1 + 252) + 32 * i) = 0;
                }
            }
            else
            {
                *(_BYTE*)(*(_DWORD*)(a1 + 252) + 32 * i) = 0;
            }
        }
    }
    return result;
}

//----- (004D2088) --------------------------------------------------------
int __cdecl sub_4D2088(int a1)
{
    int result; // eax
    int i; // [esp+0h] [ebp-4h]

    for (i = 0; i < *(_DWORD*)(a1 + 256); ++i)
    {
        *(_BYTE*)(*(_DWORD*)(a1 + 252) + 32 * i) = 0;
        result = i + 1;
    }
    return result;
}

//----- (004D13D8) --------------------------------------------------------
int __cdecl sub_4D13D8(int a1)
{
    int result; // eax
    __int16 v2; // si
    __int16 v3; // si
    float v4; // [esp+4h] [ebp-60h]
    float v5; // [esp+8h] [ebp-5Ch]
    float v6; // [esp+Ch] [ebp-58h]
    float v7; // [esp+10h] [ebp-54h]
    float v8; // [esp+18h] [ebp-4Ch]
    float v9; // [esp+1Ch] [ebp-48h]
    float v10; // [esp+24h] [ebp-40h]
    int v11; // [esp+2Ch] [ebp-38h]
    int k; // [esp+30h] [ebp-34h]
    int l; // [esp+38h] [ebp-2Ch]
    int m; // [esp+38h] [ebp-2Ch]
    int v15; // [esp+3Ch] [ebp-28h]
    int i; // [esp+40h] [ebp-24h]
    int j; // [esp+44h] [ebp-20h]
    int v18; // [esp+50h] [ebp-14h]
    unsigned __int16 v19; // [esp+54h] [ebp-10h]
    float v20; // [esp+60h] [ebp-4h]

    v18 = *(_DWORD*)(a1 + 140);
    for (i = 0; ; ++i)
    {
        result = a1;
        if (i >= *(_DWORD*)(a1 + 132))
            break;
        for (j = 0; j < *(_DWORD*)(a1 + 136); ++j)
        {
            v19 = *(_WORD*)(v18 + 2 * *(_DWORD*)(a1 + 132) * i + 2 * j);
            result = ((int)v19 >> 5) & 0x1F;
            if ((((int)v19 >> 10) & 0x1F) == 0)
            {
                result = ((int)v19 >> 5) & 0x1F;
                if ((((int)v19 >> 5) & 0x1F) == 0 && (v19 & 0x1F) == 0)
                    continue;
            }
            for (k = 0; k < 32; ++k)
            {
                v11 = 1;
                for (l = 0; l < *(_DWORD*)(a1 + 256); ++l)
                {
                    result = 32 * l;
                    if (!*(_BYTE*)(*(_DWORD*)(a1 + 252) + 32 * l))
                    {
                        v11 = 0;
                        v15 = l;
                        break;
                    }
                    result = l + 1;
                }
                if (v11)
                    return result;
                *(_BYTE*)(*(_DWORD*)(a1 + 252) + 32 * v15) = 2;
                *(_DWORD*)(*(_DWORD*)(a1 + 252) + 32 * v15 + 20) = 0;
                *(_DWORD*)(*(_DWORD*)(a1 + 252) + 32 * v15 + 24) = *(_DWORD*)(*(_DWORD*)(a1 + 252) + 32 * v15 + 20);
                v2 = (unsigned __int8)(rand() % 32) << 10;
                v3 = v2 + 32 * (unsigned __int8)(rand() % 32) + 0x8000;
                *(_WORD*)(*(_DWORD*)(a1 + 252) + 32 * v15 + 30) = (unsigned __int8)(rand() % 32) + v3;
                v9 = (float)(*(unsigned __int8*)(a1 + 275) * *(_DWORD*)(a1 + 244) + 4);
                v8 = (float)*(int*)(a1 + 132);
                *(float*)(*(_DWORD*)(a1 + 252) + 32 * v15 + 4) = v8 * 0.5 + v9;
                v7 = (float)(*(unsigned __int8*)(a1 + 276) * *(_DWORD*)(a1 + 248) + 12);
                v6 = (float)*(int*)(a1 + 136);
                *(float*)(*(_DWORD*)(a1 + 252) + 32 * v15 + 8) = v6 * 0.5 + v7;
                do
                {
                    dword_6AD840 = (unsigned __int16)(20077 * dword_6AD840 + 12345);
                    v5 = (float)dword_6AD840;
                    v10 = (v5 * 0.000030517578 - 1.0) * 5.0 + 2.0;
                    dword_6AD840 = (unsigned __int16)(20077 * dword_6AD840 + 12345);
                    v4 = (float)dword_6AD840;
                    v20 = (v4 * 0.000030517578 - 1.0) * 5.0 + 2.0;
                } while (v10 * v10 + v20 * v20 > 3.5);
                *(float*)(*(_DWORD*)(a1 + 252) + 32 * v15 + 12) = v10;
                *(float*)(*(_DWORD*)(a1 + 252) + 32 * v15 + 16) = v20;
                for (m = 0; m < 22; ++m)
                {
                    ++* (_DWORD*)(*(_DWORD*)(a1 + 252) + 32 * v15 + 24);
                    *(float*)(*(_DWORD*)(a1 + 252) + 32 * v15 + 4) = *(float*)(*(_DWORD*)(a1 + 252) + 32 * v15 + 4)
                        + *(float*)(*(_DWORD*)(a1 + 252) + 32 * v15 + 12);
                    *(float*)(*(_DWORD*)(a1 + 252) + 32 * v15 + 8) = *(float*)(*(_DWORD*)(a1 + 252) + 32 * v15 + 8)
                        + *(float*)(*(_DWORD*)(a1 + 252) + 32 * v15 + 16);
                }
                *(float*)(*(_DWORD*)(a1 + 252) + 32 * v15 + 12) = *(float*)(*(_DWORD*)(a1 + 252) + 32 * v15 + 12) * -1.0;
                result = 32 * v15;
                *(float*)(*(_DWORD*)(a1 + 252) + 32 * v15 + 16) = *(float*)(*(_DWORD*)(a1 + 252) + 32 * v15 + 16) * -1.0;
            }
        }
    }
    return result;
}
// 4D1527: variable 'v15' is possibly undefined
// 6AD840: using guessed type int dword_6AD840;

//----- (004DD9B4) --------------------------------------------------------
__int16 __cdecl sub_4DD9B4(int a1)
{
    __int16 result; // ax
    int v2; // [esp+4h] [ebp-10h]
    int k; // [esp+8h] [ebp-Ch]
    int m; // [esp+8h] [ebp-Ch]
    int i; // [esp+Ch] [ebp-8h]
    int j; // [esp+Ch] [ebp-8h]
    int l; // [esp+Ch] [ebp-8h]
    int n; // [esp+Ch] [ebp-8h]
    int v9; // [esp+10h] [ebp-4h]

    v9 = 0;
    if ((byte_5CAA32 & 4) != 0)
        sub_4D07B5(dword_5A0384);
    for (i = 0; i < *(_DWORD*)(a1 + 264); ++i)
    {
        if (*(_BYTE*)(*(_DWORD*)(a1 + 240) + 12 * i + 8) == 1)
        {
            if (*(_DWORD*)(a1 + 244) <= *(_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * i))
            {
                if (*(_DWORD*)(a1 + 244) < *(_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * i))
                    --* (_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * i);
            }
            else
            {
                ++* (_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * i);
            }
            if (*(_DWORD*)(a1 + 248) <= *(_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * i + 4))
            {
                if (*(_DWORD*)(a1 + 248) < *(_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * i + 4))
                    --* (_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * i + 4);
            }
            else
            {
                ++* (_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * i + 4);
            }
        }
    }
    for (j = 0; j < *(_DWORD*)(a1 + 264); ++j)
    {
        if (*(_BYTE*)(*(_DWORD*)(a1 + 240) + 12 * j + 8) == 2)
        {
            for (k = 0; k < *(_DWORD*)(a1 + 264); ++k)
            {
                if (*(_BYTE*)(*(_DWORD*)(a1 + 240) + 12 * k + 8) == 1
                    && *(_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * j) == *(_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * k)
                    && *(_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * j + 4) == *(_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * k + 4))
                {
                    v9 = 1;
                    *(_BYTE*)(*(_DWORD*)(a1 + 240) + 12 * k + 9) = -(rand() % 8);
                    *(_WORD*)(a1 + 290) = 4;
                    *(_DWORD*)(a1 + 324) = 8;
                    *(_DWORD*)(a1 + 320) = 30;
                    *(_BYTE*)(*(_DWORD*)(a1 + 240) + 12 * k + 8) = 0;
                    *(_BYTE*)(*(_DWORD*)(a1 + 240) + 12 * k + 10) = 1;
                    --* (_DWORD*)(a1 + 268);
                    if (!byte_5CAA39)
                        ++* (_WORD*)(a1 + 286);
                }
            }
        }
    }
    for (l = 0; l < *(_DWORD*)(a1 + 264); ++l)
    {
        if (*(_BYTE*)(*(_DWORD*)(a1 + 240) + 12 * l + 8) == 1)
        {
            v2 = 1;
            for (m = 0; m < *(_DWORD*)(a1 + 264); ++m)
            {
                if (l != m
                    && *(_BYTE*)(*(_DWORD*)(a1 + 240) + 12 * m + 8) == 1
                    && *(_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * l) == *(_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * m)
                    && *(_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * l + 4) == *(_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * m + 4))
                {
                    ++v2;
                    *(_BYTE*)(*(_DWORD*)(a1 + 240) + 12 * m + 8) = 0;
                }
            }
            if (v2 > 1)
            {
                v9 = 1;
                *(_BYTE*)(*(_DWORD*)(a1 + 240) + 12 * l + 8) = 2;
                *(_BYTE*)(*(_DWORD*)(a1 + 240) + 12 * l + 10) = 1;
                *(_BYTE*)(*(_DWORD*)(a1 + 240) + 12 * l + 9) = -(rand() % 8);
                *(_DWORD*)(a1 + 268) -= v2;
                if (!byte_5CAA39)
                    *(_WORD*)(a1 + 286) += v2;
                *(_WORD*)(a1 + 290) = 4;
                *(_DWORD*)(a1 + 324) = 8;
                *(_DWORD*)(a1 + 320) = 30;
            }
        }
    }
    for (n = 0; ; ++n)
    {
        result = n;
        if (n >= *(_DWORD*)(a1 + 264))
            break;
        if ((*(_BYTE*)(*(_DWORD*)(a1 + 240) + 12 * n + 8) == 1 || *(_BYTE*)(*(_DWORD*)(a1 + 240) + 12 * n + 8) == 2)
            && *(_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * n) == *(_DWORD*)(a1 + 244)
            && *(_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * n + 4) == *(_DWORD*)(a1 + 248))
        {
            *(_BYTE*)(a1 + 317) = 1;
            *(_BYTE*)(*(_DWORD*)(a1 + 240) + 12 * n + 8) = 0;
        }
    }
    if (v9)
    {
        result = byte_5CAA32 & 4;
        if ((byte_5CAA32 & 4) != 0)
            result = sub_4D07B5(dword_5A0394);
    }
    return result;
}
// 5A0384: using guessed type int dword_5A0384;
// 5CAA32: using guessed type char byte_5CAA32;
// 5CAA39: using guessed type char byte_5CAA39;

//----- (004DD0FC) --------------------------------------------------------
int __cdecl sub_4DD0FC(int a1, int a2)
{
    int result; // eax
    unsigned __int16 v3; // cx
    float v4; // [esp+0h] [ebp-3Ch]
    int v5; // [esp+4h] [ebp-38h]
    int v6; // [esp+8h] [ebp-34h]
    float v7; // [esp+Ch] [ebp-30h]
    int v8; // [esp+10h] [ebp-2Ch]
    int v9; // [esp+14h] [ebp-28h]
    int i; // [esp+1Ch] [ebp-20h]
    int v11; // [esp+24h] [ebp-18h]
    int v12; // [esp+28h] [ebp-14h]

    v12 = *(unsigned __int8*)(a1 + 275) * *(_DWORD*)(a1 + 244) + 4;
    v6 = *(_DWORD*)(a1 + 132) + v12;
    v5 = *(_DWORD*)(a1 + 136) + *(_DWORD*)(a1 + 136) * *(_DWORD*)(a1 + 248) + 12;
    v4 = (float)*(int*)(a1 + 320);
    v8 = *(_DWORD*)(a1 + 136) * *(_DWORD*)(a1 + 248) + 12;
    for (i = 0; ; ++i)
    {
        result = v8;
        if (v8 >= v5)
            break;
        v9 = v12;
        v11 = 0;
        while (v9 < v6)
        {
            v3 = *(_WORD*)(*(_DWORD*)(a1 + 140) + 2 * *(_DWORD*)(a1 + 132) * i + 2 * v11);
            if (v3 & 0x1F | ((int)v3 >> 5) & 0x1F | ((int)v3 >> 10) & 0x1F)
            {
                v7 = (90.0 - v4 / 90.0) * 32767.0;
                *(_WORD*)(*(_DWORD*)(a2 + 16) + 2 * v9 + 2 * *(_DWORD*)(a2 + 8) * v8) = (__int64)v7 + 0x8000;
            }
            ++v9;
            ++v11;
        }
        ++v8;
    }
    return result;
}

//----- (004DD3DF) --------------------------------------------------------
int __cdecl sub_4DD3DF(int a1, int a2, int a3)
{
    int result; // eax
    int v4; // [esp+0h] [ebp-2Ch]
    int v5; // [esp+0h] [ebp-2Ch]
    int v6; // [esp+4h] [ebp-28h]
    int k; // [esp+4h] [ebp-28h]
    int l; // [esp+4h] [ebp-28h]
    int m; // [esp+4h] [ebp-28h]
    int n; // [esp+4h] [ebp-28h]
    int ii; // [esp+4h] [ebp-28h]
    int jj; // [esp+4h] [ebp-28h]
    int v13; // [esp+8h] [ebp-24h]
    int i; // [esp+8h] [ebp-24h]
    int j; // [esp+8h] [ebp-24h]
    int v16[8]; // [esp+Ch] [ebp-20h]

    if (*(char*)(a1 + 9) >= 0)
    {
        v4 = 0;
        v13 = 4;
        while (v4 < 4)
            v16[v4++ + 4] = v13--;
        v5 = 1;
        v6 = 4;
        while (v5 < 4)
            v16[v5++] = v6--;
        for (i = 2; i < *(_DWORD*)(a2 + 144) / 2; ++i)
            sub_4DD332(
                *(unsigned __int8*)(a2 + 275) * *(_DWORD*)a1 + i + 4 - *(char*)(a1 + 9) * v16[i + 4],
                *(unsigned __int8*)(a2 + 276) * *(_DWORD*)(a1 + 4) + 12,
                (_DWORD*)(a2 + 144),
                i,
                a2,
                a3);
        for (j = 2; j < *(_DWORD*)(a2 + 144) / 2; ++j)
            sub_4DD332(
                *(char*)(a1 + 9) * v16[j + 4]
                + *(unsigned __int8*)(a2 + 275) * *(_DWORD*)a1
                + *(_DWORD*)(a2 + 144)
                - 1
                - j
                + 4,
                *(unsigned __int8*)(a2 + 276) * *(_DWORD*)(a1 + 4) + 12,
                (_DWORD*)(a2 + 144),
                *(_DWORD*)(a2 + 144) - j - 1,
                a2,
                a3);
        for (k = 1; k < *(_DWORD*)(a2 + 148) / 2; ++k)
            sub_4DD28A(
                *(_DWORD*)(a2 + 144) * *(_DWORD*)a1 + 4,
                *(char*)(a1 + 9) * v16[k] + *(_DWORD*)(a2 + 148) * *(_DWORD*)(a1 + 4) + *(_DWORD*)(a2 + 148) - 1 - k + 12,
                (_DWORD*)(a2 + 144),
                *(_DWORD*)(a2 + 148) - k - 1,
                a2,
                a3);
        for (l = 1; l < *(_DWORD*)(a2 + 148) / 2; ++l)
            sub_4DD28A(
                *(_DWORD*)(a2 + 144) * *(_DWORD*)a1 + 4,
                *(_DWORD*)(a2 + 148) * *(_DWORD*)(a1 + 4) + l + 12 - *(char*)(a1 + 9) * v16[l],
                (_DWORD*)(a2 + 144),
                l,
                a2,
                a3);
        if (*(_WORD*)(a2 + 290) == 4 && *(_DWORD*)(a2 + 324) == 2)
        {
            for (m = 0; m < *(_DWORD*)(a2 + 148) / 2; ++m)
                sub_4DD28A(
                    *(char*)(a1 + 9) * v16[m + 4] + *(_DWORD*)(a2 + 144) * *(_DWORD*)a1 + *(_DWORD*)(a2 + 144) - 1 - j + 4,
                    *(char*)(a1 + 9) * v16[m] + *(_DWORD*)(a2 + 148) * *(_DWORD*)(a1 + 4) + *(_DWORD*)(a2 + 148) - m + 12,
                    (_DWORD*)(a2 + 144),
                    *(_DWORD*)(a2 + 148) - m - 1,
                    a2,
                    a3);
            for (n = 0; n < *(_DWORD*)(a2 + 148) / 2; ++n)
                sub_4DD28A(
                    *(_DWORD*)(a2 + 144) * *(_DWORD*)a1 + j + 4 - *(char*)(a1 + 9) * v16[n + 4],
                    *(char*)(a1 + 9) * v16[n] + *(_DWORD*)(a2 + 148) * *(_DWORD*)(a1 + 4) + *(_DWORD*)(a2 + 148) - n + 12,
                    (_DWORD*)(a2 + 144),
                    *(_DWORD*)(a2 + 148) - n - 1,
                    a2,
                    a3);
            for (ii = 1; ii < *(_DWORD*)(a2 + 148) / 2; ++ii)
                sub_4DD28A(
                    *(_DWORD*)(a2 + 144) * *(_DWORD*)a1 + j + 4 - *(char*)(a1 + 9) * v16[ii + 4],
                    *(_DWORD*)(a2 + 148) * *(_DWORD*)(a1 + 4) + ii + 12 - *(char*)(a1 + 9) * v16[ii],
                    (_DWORD*)(a2 + 144),
                    ii,
                    a2,
                    a3);
            for (jj = 1; jj < *(_DWORD*)(a2 + 148) / 2; ++jj)
                sub_4DD28A(
                    *(char*)(a1 + 9) * v16[jj + 4] + *(_DWORD*)(a2 + 144) * *(_DWORD*)a1 + *(_DWORD*)(a2 + 144) - 1 - j + 4,
                    *(_DWORD*)(a2 + 148) * *(_DWORD*)(a1 + 4) + jj + 12 - *(char*)(a1 + 9) * v16[jj],
                    (_DWORD*)(a2 + 144),
                    jj,
                    a2,
                    a3);
        }
    }
    result = a1;
    ++* (_BYTE*)(a1 + 9);
    return result;
}

//----- (004D2441) --------------------------------------------------------
int __cdecl sub_4D2441(int a1)
{
    int result; // eax
    int i; // [esp+4h] [ebp-4h]

    for (i = 0; i < *(_DWORD*)(a1 + 256); ++i)
    {
        if (*(_BYTE*)(*(_DWORD*)(a1 + 252) + 32 * i) == 2 && !*(_DWORD*)(*(_DWORD*)(a1 + 252) + 32 * i + 20))
            *(_BYTE*)(*(_DWORD*)(a1 + 252) + 32 * i) = 1;
        if (*(_BYTE*)(*(_DWORD*)(a1 + 252) + 32 * i) == 2)
            --* (_DWORD*)(*(_DWORD*)(a1 + 252) + 32 * i + 20);
        if (*(_BYTE*)(*(_DWORD*)(a1 + 252) + 32 * i) == 1)
        {
            *(float*)(*(_DWORD*)(a1 + 252) + 32 * i + 4) = *(float*)(*(_DWORD*)(a1 + 252) + 32 * i + 4)
                + *(float*)(*(_DWORD*)(a1 + 252) + 32 * i + 12);
            *(float*)(*(_DWORD*)(a1 + 252) + 32 * i + 8) = *(float*)(*(_DWORD*)(a1 + 252) + 32 * i + 8)
                + *(float*)(*(_DWORD*)(a1 + 252) + 32 * i + 16);
            if (*(float*)(*(_DWORD*)(a1 + 252) + 32 * i + 4) < 0.0
                || *(float*)(*(_DWORD*)(a1 + 252) + 32 * i + 4) > 127.0
                || *(float*)(*(_DWORD*)(a1 + 252) + 32 * i + 8) < 0.0
                || *(float*)(*(_DWORD*)(a1 + 252) + 32 * i + 8) > 127.0)
            {
                *(_BYTE*)(*(_DWORD*)(a1 + 252) + 32 * i) = 0;
            }
        }
        result = i + 1;
    }
    return result;
}

//----- (004D261A) --------------------------------------------------------
int __cdecl sub_4D261A(int a1)
{
    int result; // eax
    int i; // [esp+4h] [ebp-4h]

    for (i = 0; i < *(_DWORD*)(a1 + 256); ++i)
    {
        if (*(_DWORD*)(*(_DWORD*)(a1 + 252) + 32 * i + 20) || *(_BYTE*)(*(_DWORD*)(a1 + 252) + 32 * i) != 2)
            --* (_DWORD*)(*(_DWORD*)(a1 + 252) + 32 * i + 20);
        else
            *(_BYTE*)(*(_DWORD*)(a1 + 252) + 32 * i) = 1;
        if (*(_BYTE*)(*(_DWORD*)(a1 + 252) + 32 * i) == 1)
            --* (_DWORD*)(*(_DWORD*)(a1 + 252) + 32 * i + 24);
        if (*(_BYTE*)(*(_DWORD*)(a1 + 252) + 32 * i) == 1)
        {
            *(float*)(*(_DWORD*)(a1 + 252) + 32 * i + 4) = *(float*)(*(_DWORD*)(a1 + 252) + 32 * i + 4)
                + *(float*)(*(_DWORD*)(a1 + 252) + 32 * i + 12);
            *(float*)(*(_DWORD*)(a1 + 252) + 32 * i + 8) = *(float*)(*(_DWORD*)(a1 + 252) + 32 * i + 8)
                + *(float*)(*(_DWORD*)(a1 + 252) + 32 * i + 16);
            if (!*(_DWORD*)(*(_DWORD*)(a1 + 252) + 32 * i + 24))
            {
                *(_BYTE*)(*(_DWORD*)(a1 + 252) + 32 * i) = 0;
                if (!*(_BYTE*)(a1 + 328))
                    *(_BYTE*)(a1 + 328) = 1;
            }
        }
        result = i + 1;
    }
    return result;
}

//----- (004DCB9D) --------------------------------------------------------
int __cdecl sub_4DCB9D(int a1)
{
    int result; // eax
    unsigned int v2; // ebx
    int i; // [esp+8h] [ebp-48h]
    int j; // [esp+Ch] [ebp-44h]
    int v5; // [esp+10h] [ebp-40h]
    int v6[15]; // [esp+14h] [ebp-3Ch]

    result = a1;
    --* (_BYTE*)(a1 + 285);
    v5 = -1;
    v6[0] = -1;
    v6[1] = 0;
    v6[2] = -1;
    v6[3] = 1;
    v6[4] = -1;
    v6[5] = -1;
    v6[6] = 0;
    v6[7] = 1;
    v6[8] = 0;
    v6[9] = -1;
    v6[10] = 1;
    v6[11] = 0;
    v6[12] = 1;
    v6[13] = 1;
    v6[14] = 1;
    for (i = 0; i < 8; ++i)
    {
        for (j = 0; j < *(_DWORD*)(a1 + 264); ++j)
        {
            if (*(_BYTE*)(*(_DWORD*)(a1 + 240) + 12 * j + 8) == 1
                && *(_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * j) == *(&v5 + 2 * i) + *(_DWORD*)(a1 + 244)
                && *(_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * j + 4) == v6[2 * i] + *(_DWORD*)(a1 + 248))
            {
                if ((byte_5CAA32 & 4) != 0)
                    sub_4D07B5(dword_5A0394);
                *(_BYTE*)(*(_DWORD*)(a1 + 240) + 12 * j + 8) = 0;
                *(_BYTE*)(*(_DWORD*)(a1 + 240) + 12 * j + 10) = 1;
                v2 = 3 * (abs32(v6[2 * i]) + abs32(*(&v5 + 2 * i)));
                *(_BYTE*)(*(_DWORD*)(a1 + 240) + 12 * j + 9) = -(rand() % 3 + v2);
                if (!byte_5CAA39)
                    ++* (_WORD*)(a1 + 286);
                --* (_DWORD*)(a1 + 268);
                break;
            }
        }
        result = i + 1;
    }
    return result;
}
// 5CAA32: using guessed type char byte_5CAA32;
// 5CAA39: using guessed type char byte_5CAA39;

//----- (004D1054) --------------------------------------------------------
int __cdecl sub_4D1054(int a1)
{
    int result; // eax
    float v2; // [esp+0h] [ebp-60h]
    float v3; // [esp+4h] [ebp-5Ch]
    float v4; // [esp+8h] [ebp-58h]
    float v5; // [esp+Ch] [ebp-54h]
    float v6; // [esp+14h] [ebp-4Ch]
    float v7; // [esp+18h] [ebp-48h]
    float v8; // [esp+20h] [ebp-40h]
    int v9; // [esp+24h] [ebp-3Ch]
    int v10; // [esp+28h] [ebp-38h]
    int k; // [esp+2Ch] [ebp-34h]
    int v12; // [esp+30h] [ebp-30h]
    int l; // [esp+34h] [ebp-2Ch]
    int v14; // [esp+38h] [ebp-28h]
    int i; // [esp+3Ch] [ebp-24h]
    int j; // [esp+40h] [ebp-20h]
    int v17; // [esp+48h] [ebp-18h]
    int v18; // [esp+4Ch] [ebp-14h]
    unsigned __int16 v19; // [esp+50h] [ebp-10h]
    float v20; // [esp+5Ch] [ebp-4h]

    v18 = *(_DWORD*)(a1 + 140);
    for (i = 0; ; ++i)
    {
        result = a1;
        if (i >= *(_DWORD*)(a1 + 132))
            break;
        for (j = 0; j < *(_DWORD*)(a1 + 136); ++j)
        {
            v19 = *(_WORD*)(v18 + 2 * *(_DWORD*)(a1 + 132) * i + 2 * j);
            result = ((int)v19 >> 5) & 0x1F;
            if ((v19 & 0x1F) == 0)
            {
                result = ((int)v19 >> 5) & 0x1F;
                if ((((int)v19 >> 5) & 0x1F) == 0 && (((int)v19 >> 10) & 0x1F) == 0)
                    continue;
            }
            for (k = 0; k < 32; ++k)
            {
                v10 = 1;
                for (l = 0; l < *(_DWORD*)(a1 + 256); ++l)
                {
                    result = 32 * l;
                    if (!*(_BYTE*)(*(_DWORD*)(a1 + 252) + 32 * l))
                    {
                        v10 = 0;
                        v14 = l;
                        break;
                    }
                    result = l + 1;
                }
                if (v10)
                    return result;
                *(_BYTE*)(*(_DWORD*)(a1 + 252) + 32 * v14) = 2;
                *(_DWORD*)(*(_DWORD*)(a1 + 252) + 32 * v14 + 20) = 0;
                v17 = (v19 & 0x1F) - k;
                if (v17 < 0)
                    LOBYTE(v17) = 0;
                v12 = (((int)v19 >> 5) & 0x1F) - k;
                if (v12 < 0)
                    LOBYTE(v12) = 0;
                v9 = (((int)v19 >> 10) & 0x1F) - k;
                if (v9 < 0)
                    LOBYTE(v9) = 0;
                *(_WORD*)(*(_DWORD*)(a1 + 252) + 32 * v14 + 30) = (unsigned __int8)v9
                    + ((unsigned __int8)v17 << 10)
                    + 32 * (unsigned __int8)v12
                    + 0x8000;
                v7 = (float)(*(unsigned __int8*)(a1 + 275) * *(_DWORD*)(a1 + 244) + 4);
                v6 = (float)*(int*)(a1 + 132);
                *(float*)(*(_DWORD*)(a1 + 252) + 32 * v14 + 4) = v6 * 0.5 + v7;
                v5 = (float)(*(unsigned __int8*)(a1 + 276) * *(_DWORD*)(a1 + 248) + 12);
                v4 = (float)*(int*)(a1 + 136);
                *(float*)(*(_DWORD*)(a1 + 252) + 32 * v14 + 8) = v4 * 0.5 + v5;
                do
                {
                    dword_6AD840 = (unsigned __int16)(20077 * dword_6AD840 + 12345);
                    v3 = (float)dword_6AD840;
                    v8 = (v3 * 0.000030517578 - 1.0) * 5.0 + 2.0;
                    dword_6AD840 = (unsigned __int16)(20077 * dword_6AD840 + 12345);
                    v2 = (float)dword_6AD840;
                    v20 = (v2 * 0.000030517578 - 1.0) * 5.0 + 2.0;
                } while (v8 * v8 + v20 * v20 > 3.5);
                *(float*)(*(_DWORD*)(a1 + 252) + 32 * v14 + 12) = v8;
                result = 32 * v14;
                *(float*)(*(_DWORD*)(a1 + 252) + 32 * v14 + 16) = v20;
            }
        }
    }
    return result;
}
// 4D11A2: variable 'v14' is possibly undefined
// 6AD840: using guessed type int dword_6AD840;

//----- (004DCEC6) --------------------------------------------------------
int __cdecl sub_4DCEC6(int a1)
{
    int result; // eax
    int v2; // [esp+0h] [ebp-10h]
    int v3; // [esp+4h] [ebp-Ch]
    int v4; // [esp+8h] [ebp-8h]
    int i; // [esp+Ch] [ebp-4h]

    do
    {
        v3 = rand() % *(unsigned __int8*)(a1 + 273);
        v4 = rand() % *(unsigned __int8*)(a1 + 274);
        v2 = 0;
        for (i = 0; i < *(_DWORD*)(a1 + 264); ++i)
        {
            if ((*(_BYTE*)(*(_DWORD*)(a1 + 240) + 12 * i + 8) == 2 || *(_BYTE*)(*(_DWORD*)(a1 + 240) + 12 * i + 8) == 1)
                && *(_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * i) == v3
                && *(_DWORD*)(*(_DWORD*)(a1 + 240) + 12 * i + 4) == v4)
            {
                v2 = 1;
                break;
            }
        }
        if (*(_DWORD*)(a1 + 244) == v3 && *(_DWORD*)(a1 + 248) == v4)
            v2 = 1;
    } while (v2);
    *(_DWORD*)(a1 + 244) = v3;
    result = v4;
    *(_DWORD*)(a1 + 248) = v4;
    return result;
}

//----- (004DD332) --------------------------------------------------------
int __cdecl sub_4DD332(int a1, int a2, _DWORD* a3, int a4, int a5, int a6)
{
    int result; // eax
    int v7; // [esp+4h] [ebp-Ch]
    int v8; // [esp+8h] [ebp-8h]
    int i; // [esp+Ch] [ebp-4h]

    v7 = *(_DWORD*)(a6 + 16);
    result = a3[2];
    v8 = result;
    if (a2 > 11 && a3[1] + a2 < 124 && a1 > 3 && a1 < 124)
    {
        for (i = 0; i < a3[1]; ++i)
        {
            if (*(_WORD*)(v8 + 2 * *a3 * i + 2 * a4))
                *(_WORD*)(v7 + 2 * *(_DWORD*)(a6 + 8) * (i + a2) + 2 * a1) = *(_WORD*)(v8 + 2 * *a3 * i + 2 * a4);
            result = i + 1;
        }
    }
    return result;
}

//----- (004DD28A) --------------------------------------------------------
int __cdecl sub_4DD28A(int a1, int a2, _DWORD* a3, int a4, int a5, int a6)
{
    int result; // eax
    int v7; // [esp+4h] [ebp-Ch]
    int v8; // [esp+8h] [ebp-8h]
    int i; // [esp+Ch] [ebp-4h]

    v7 = *(_DWORD*)(a6 + 16);
    result = a3[2];
    v8 = result;
    if (a2 > 11 && a2 < 124 && a1 > 3 && *a3 + a1 < 124)
    {
        for (i = 0; i < *a3; ++i)
        {
            if (*(_WORD*)(v8 + 2 * *a3 * a4 + 2 * i))
                *(_WORD*)(v7 + 2 * (i + a1 + *(_DWORD*)(a6 + 8) * a2)) = *(_WORD*)(v8 + 2 * *a3 * a4 + 2 * i);
            result = i + 1;
        }
    }
    return result;
}