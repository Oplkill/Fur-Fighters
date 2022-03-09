#include "minigame_block.h"

#include "minigame_global.h"
#include "defs.h"
#include "maybe.h"
#include "files.h"
#include "tempplace.h"
#include "save.h"

char aBlocksubgameCh[] = "blocksubgame.chb"; // idb
char aBlockBorderSpr[17] = "block\\border.spr"; // weak
char aBlockPressEnSp[19] = "block\\press_en.spr"; // weak
char aBlockPressFrSp[19] = "block\\press_fr.spr"; // weak
char aBlockPressGeSp[19] = "block\\press_ge.spr"; // weak
char aBlockPressEnSp_0[19] = "block\\press_en.spr"; // weak
char aBlockPressSpSp[19] = "block\\press_sp.spr"; // weak
char aBlockPressEnSp_1[19] = "block\\press_en.spr"; // weak
char aBlockPressFrSp_0[19] = "block\\press_fr.spr"; // weak
char aBlockPressGeSp_0[19] = "block\\press_ge.spr"; // weak
char aBlockPressEnSp_2[19] = "block\\press_en.spr"; // weak
char aBlockPressSpSp_0[19] = "block\\press_sp.spr"; // weak
char aBlockPuz1Spr[15] = "block\\puz1.spr"; // weak
char aBlockPuz2Spr[15] = "block\\puz2.spr"; // weak
char aBlockPuz3Spr[15] = "block\\puz3.spr"; // weak
char aBlockPuz4Spr[15] = "block\\puz4.spr"; // weak
char aBlockPuz5Spr[15] = "block\\puz5.spr"; // weak
char aBlockPuz6Spr[15] = "block\\puz6.spr"; // weak

char byte_5CAA1C; // weak

int __cdecl sub_4E1169(_DWORD* a1);
int __cdecl sub_4D34A9(_DWORD* a1, int a2);
int __cdecl sub_4DC8DD(int a1);
int __cdecl sub_4DC377(int a1, int a2);
int __cdecl sub_4DCB2D(int a1);
int __cdecl sub_4DCA3A(int a1);

//----- (004D6CFC) --------------------------------------------------------
int* __cdecl sub_4D6CFC(int* a1)
{
    char* v2; // eax
    _WORD* v3; // [esp+Ch] [ebp-2Ch]
    _WORD* v4; // [esp+Ch] [ebp-2Ch]
    _WORD* v5; // [esp+Ch] [ebp-2Ch]
    _WORD* v6; // [esp+Ch] [ebp-2Ch]
    _WORD* v7; // [esp+Ch] [ebp-2Ch]
    _WORD* v8; // [esp+Ch] [ebp-2Ch]
    int k; // [esp+10h] [ebp-28h]
    int m; // [esp+10h] [ebp-28h]
    int ii; // [esp+10h] [ebp-28h]
    int kk; // [esp+10h] [ebp-28h]
    int mm; // [esp+10h] [ebp-28h]
    int i1; // [esp+10h] [ebp-28h]
    int l; // [esp+14h] [ebp-24h]
    int n; // [esp+14h] [ebp-24h]
    int jj; // [esp+14h] [ebp-24h]
    int ll; // [esp+14h] [ebp-24h]
    int nn; // [esp+14h] [ebp-24h]
    int i2; // [esp+14h] [ebp-24h]
    char v21[8]; // [esp+18h] [ebp-20h] BYREF
    _WORD* v22; // [esp+20h] [ebp-18h]
    int i; // [esp+24h] [ebp-14h]
    int j; // [esp+28h] [ebp-10h]
    _WORD* v25; // [esp+2Ch] [ebp-Ch]
    int v26; // [esp+30h] [ebp-8h]
    int v27; // [esp+34h] [ebp-4h]

    if (!sub_56EA26(*a1, a1[2], a1[3], 2))
        return 0;
    a1[11] = maybe_allocateMemory(872);
    v27 = a1[11];
    a1[7] = 1;
    a1[10] = (int)sub_4E1169;
    a1[1] = *(_DWORD*)(*a1 + 44);
    a1[4] = maybe_allocateMemory(2 * a1[3] * a1[2] + 31);
    a1[4] = (a1[4] + 31) & 0xFFFFFFE0;
    a1[6] = 0;
    *(_BYTE*)(v27 + 848) = 3;
    *(_BYTE*)(v27 + 849) = 3;
    *(_DWORD*)(v27 + 808) = maybe_allocateMemory(*(unsigned __int8*)(v27 + 848) * *(unsigned __int8*)(v27 + 849));
    loadCHBfile(aBlocksubgameCh);
    LOBYTE(v26) = 0;
    while ((unsigned __int8)v26 < 0xAu)
    {
        v2 = getFormattedString("block\\digi%d.spr", (unsigned __int8)v26);
        loadSprite(v27 + 12 * (unsigned __int8)v26 + 672, v2);
        LOBYTE(v26) = v26 + 1;
    }
    loadSprite(v27, aBlockBorderSpr);
    *(_BYTE*)(v27 + 804) = 120 / *(unsigned __int8*)(v27 + 848);
    *(_BYTE*)(v27 + 805) = 120 / *(unsigned __int8*)(v27 + 849);
    if (loadAllLanguageSpritesAtOnce)
    {
        loadSprite(v27 + 792, aBlockPressEnSp);
        loadSprite(v27 + 792, aBlockPressFrSp);
        loadSprite(v27 + 792, aBlockPressGeSp);
        loadSprite(v27 + 792, aBlockPressEnSp_0);
        loadSprite(v27 + 792, aBlockPressSpSp);
    }
    else
    {
        switch (languageId)
        {
        case language::English:
            loadSprite(v27 + 792, aBlockPressEnSp_1);
            break;
        case language::French:
            loadSprite(v27 + 792, aBlockPressFrSp_0);
            break;
        case language::German:
            loadSprite(v27 + 792, aBlockPressGeSp_0);
            break;
        case language::Unknown1:
            loadSprite(v27 + 792, aBlockPressEnSp_2);
            break;
        case language::Spanish:
            loadSprite(v27 + 792, aBlockPressSpSp_0);
            break;
        default:
            break;
        }
    }
    *(_DWORD*)(v27 + 660) = *(unsigned __int8*)(v27 + 804);
    *(_DWORD*)(v27 + 664) = *(unsigned __int8*)(v27 + 805);
    *(_DWORD*)(v27 + 668) = maybe_allocateMemory(2 * *(unsigned __int8*)(v27 + 805) * *(unsigned __int8*)(v27 + 804));
    memset(*(void**)(v27 + 668), 0, 2 * *(unsigned __int8*)(v27 + 805) * *(unsigned __int8*)(v27 + 804));
    LOBYTE(v26) = 0;
    while ((unsigned __int8)v26 < 6 * *(unsigned __int8*)(v27 + 849) * *(unsigned __int8*)(v27 + 848))
    {
        *(_DWORD*)(v27 + 12 * (unsigned __int8)v26 + 20) = maybe_allocateMemory(
            2
            * *(unsigned __int8*)(v27 + 805)
            * *(unsigned __int8*)(v27 + 804));
        *(_DWORD*)(v27 + 12 * (unsigned __int8)v26 + 12) = *(unsigned __int8*)(v27 + 804);
        *(_DWORD*)(v27 + 12 * (unsigned __int8)v26 + 16) = *(unsigned __int8*)(v27 + 805);
        LOBYTE(v26) = v26 + 1;
    }
    loadSprite((int)v21, aBlockPuz1Spr);
    for (i = 0; i < *(unsigned __int8*)(v27 + 849); ++i)
    {
        for (j = 0; j < *(unsigned __int8*)(v27 + 848); ++j)
        {
            for (k = 0; k < *(unsigned __int8*)(v27 + 805); ++k)
            {
                for (l = 0; l < *(unsigned __int8*)(v27 + 804); ++l)
                {
                    v3 = (_WORD*)(*(_DWORD*)(v27 + 12 * (j + *(unsigned __int8*)(v27 + 848) * i) + 20)
                        + 2 * (l + *(unsigned __int8*)(v27 + 804) * k));
                    v25 = v22;
                    v25 = &v22[*(unsigned __int8*)(v27 + 804) * j
                        + *(unsigned __int8*)(v27 + 805)
                        * *(unsigned __int8*)(v27 + 804)
                        * *(unsigned __int8*)(v27 + 848)
                        * i];
                    v25 += l + *(unsigned __int8*)(v27 + 804) * *(unsigned __int8*)(v27 + 848) * k;
                    *v3 = *v25;
                }
            }
        }
    }
    loadSprite((int)v21, aBlockPuz2Spr);
    for (i = 0; i < *(unsigned __int8*)(v27 + 849); ++i)
    {
        for (j = 0; j < *(unsigned __int8*)(v27 + 848); ++j)
        {
            for (m = 0; m < *(unsigned __int8*)(v27 + 805); ++m)
            {
                for (n = 0; n < *(unsigned __int8*)(v27 + 804); ++n)
                {
                    v4 = (_WORD*)(*(_DWORD*)(v27
                        + 12
                        * (j
                            + *(unsigned __int8*)(v27 + 848) * *(unsigned __int8*)(v27 + 849)
                            + *(unsigned __int8*)(v27 + 848) * i)
                        + 20)
                        + 2 * (n + *(unsigned __int8*)(v27 + 804) * m));
                    v25 = v22;
                    v25 = &v22[*(unsigned __int8*)(v27 + 804) * j
                        + *(unsigned __int8*)(v27 + 805)
                        * *(unsigned __int8*)(v27 + 804)
                        * *(unsigned __int8*)(v27 + 848)
                        * i];
                    v25 += n + *(unsigned __int8*)(v27 + 804) * *(unsigned __int8*)(v27 + 848) * m;
                    *v4 = *v25;
                }
            }
        }
    }
    loadSprite((int)v21, aBlockPuz3Spr);
    for (i = 0; i < *(unsigned __int8*)(v27 + 849); ++i)
    {
        for (j = 0; j < *(unsigned __int8*)(v27 + 848); ++j)
        {
            for (ii = 0; ii < *(unsigned __int8*)(v27 + 805); ++ii)
            {
                for (jj = 0; jj < *(unsigned __int8*)(v27 + 804); ++jj)
                {
                    v5 = (_WORD*)(*(_DWORD*)(v27
                        + 12
                        * (j
                            + *(unsigned __int8*)(v27 + 848) * i
                            + 2 * *(unsigned __int8*)(v27 + 848) * *(unsigned __int8*)(v27 + 849))
                        + 20)
                        + 2 * (jj + *(unsigned __int8*)(v27 + 804) * ii));
                    v25 = v22;
                    v25 = &v22[*(unsigned __int8*)(v27 + 804) * j
                        + *(unsigned __int8*)(v27 + 805)
                        * *(unsigned __int8*)(v27 + 804)
                        * *(unsigned __int8*)(v27 + 848)
                        * i];
                    v25 += jj + *(unsigned __int8*)(v27 + 804) * *(unsigned __int8*)(v27 + 848) * ii;
                    *v5 = *v25;
                }
            }
        }
    }
    loadSprite((int)v21, aBlockPuz4Spr);
    for (i = 0; i < *(unsigned __int8*)(v27 + 849); ++i)
    {
        for (j = 0; j < *(unsigned __int8*)(v27 + 848); ++j)
        {
            for (kk = 0; kk < *(unsigned __int8*)(v27 + 805); ++kk)
            {
                for (ll = 0; ll < *(unsigned __int8*)(v27 + 804); ++ll)
                {
                    v6 = (_WORD*)(*(_DWORD*)(v27
                        + 12
                        * (j
                            + 3 * *(unsigned __int8*)(v27 + 848) * *(unsigned __int8*)(v27 + 849)
                            + *(unsigned __int8*)(v27 + 848) * i)
                        + 20)
                        + 2 * (ll + *(unsigned __int8*)(v27 + 804) * kk));
                    v25 = v22;
                    v25 = &v22[*(unsigned __int8*)(v27 + 804) * j
                        + *(unsigned __int8*)(v27 + 805)
                        * *(unsigned __int8*)(v27 + 804)
                        * *(unsigned __int8*)(v27 + 848)
                        * i];
                    v25 += ll + *(unsigned __int8*)(v27 + 804) * *(unsigned __int8*)(v27 + 848) * kk;
                    *v6 = *v25;
                }
            }
        }
    }
    loadSprite((int)v21, aBlockPuz5Spr);
    for (i = 0; i < *(unsigned __int8*)(v27 + 849); ++i)
    {
        for (j = 0; j < *(unsigned __int8*)(v27 + 848); ++j)
        {
            for (mm = 0; mm < *(unsigned __int8*)(v27 + 805); ++mm)
            {
                for (nn = 0; nn < *(unsigned __int8*)(v27 + 804); ++nn)
                {
                    v7 = (_WORD*)(*(_DWORD*)(v27
                        + 12
                        * (j
                            + *(unsigned __int8*)(v27 + 848) * i
                            + 4 * *(unsigned __int8*)(v27 + 848) * *(unsigned __int8*)(v27 + 849))
                        + 20)
                        + 2 * (nn + *(unsigned __int8*)(v27 + 804) * mm));
                    v25 = v22;
                    v25 = &v22[*(unsigned __int8*)(v27 + 804) * j
                        + *(unsigned __int8*)(v27 + 805)
                        * *(unsigned __int8*)(v27 + 804)
                        * *(unsigned __int8*)(v27 + 848)
                        * i];
                    v25 += nn + *(unsigned __int8*)(v27 + 804) * *(unsigned __int8*)(v27 + 848) * mm;
                    *v7 = *v25;
                }
            }
        }
    }
    loadSprite((int)v21, aBlockPuz6Spr);
    for (i = 0; i < *(unsigned __int8*)(v27 + 849); ++i)
    {
        for (j = 0; j < *(unsigned __int8*)(v27 + 848); ++j)
        {
            for (i1 = 0; i1 < *(unsigned __int8*)(v27 + 805); ++i1)
            {
                for (i2 = 0; i2 < *(unsigned __int8*)(v27 + 804); ++i2)
                {
                    v8 = (_WORD*)(*(_DWORD*)(v27
                        + 12
                        * (j
                            + 5 * *(unsigned __int8*)(v27 + 848) * *(unsigned __int8*)(v27 + 849)
                            + *(unsigned __int8*)(v27 + 848) * i)
                        + 20)
                        + 2 * (i2 + *(unsigned __int8*)(v27 + 804) * i1));
                    v25 = v22;
                    v25 = &v22[*(unsigned __int8*)(v27 + 804) * j
                        + *(unsigned __int8*)(v27 + 805)
                        * *(unsigned __int8*)(v27 + 804)
                        * *(unsigned __int8*)(v27 + 848)
                        * i];
                    v25 += i2 + *(unsigned __int8*)(v27 + 804) * *(unsigned __int8*)(v27 + 848) * i1;
                    *v8 = *v25;
                }
            }
        }
    }
    sub_53F37A();
    sub_56264B((unsigned int)v22);
    byte_5CAA1C = 1;
    byte_5CAA40 = 0;
    *(_WORD*)(v27 + 862) = 2;
    *(_BYTE*)(v27 + 845) = 1;
    *(_BYTE*)(v27 + 846) = 0;
    *(_BYTE*)(v27 + 850) = *(_BYTE*)(v27 + 848) * *(_BYTE*)(v27 + 849);
    LOBYTE(v26) = 0;
    while ((unsigned __int8)v26 < *(unsigned __int8*)(v27 + 850) - 1)
    {
        *(_BYTE*)(*(_DWORD*)(v27 + 808) + (unsigned __int8)v26) = v26 + 1;
        LOBYTE(v26) = v26 + 1;
    }
    *(_BYTE*)(*(_DWORD*)(v27 + 808) + *(unsigned __int8*)(v27 + 850) - 1) = 0;
    *(_DWORD*)(v27 + 852) = *(unsigned __int8*)(v27 + 848) - 1;
    *(_DWORD*)(v27 + 856) = *(unsigned __int8*)(v27 + 849) - 1;
    *(_BYTE*)(v27 + 860) = 0;
    *(_BYTE*)(v27 + 861) = 0;
    *(_BYTE*)(v27 + 844) = 4;
    *(_BYTE*)(v27 + 812) = 0;
    *(_BYTE*)(v27 + 814) = *(unsigned __int8*)(v27 + 805) / (__int16)*(unsigned __int8*)(v27 + 844);
    if ((_WORD)dword_6041EE)
        *(_WORD*)(v27 + 842) = dword_6041EE;
    else
        *(_WORD*)(v27 + 842) = 3600;
    *(_DWORD*)(dword_5CAA3C + 32) = 1;
    sub_4E1169(a1);
    sub_4D34A9(a1, v27);
    *(_DWORD*)(dword_5CAA3C + 32) = 0;
    return a1;
}
// 5CAA1C: using guessed type char byte_5CAA1C;
// 5CAA3C: using guessed type int dword_5CAA3C;
// 5CAA40: using guessed type char byte_5CAA40;
// 6041EE: using guessed type int dword_6041EE;
// 6045D4: using guessed type int languageId;
// 667394: using guessed type int loadAllLanguageSpritesAtOnce;

//----- (004E1169) --------------------------------------------------------
int __cdecl sub_4E1169(_DWORD* a1)
{
    int result; // eax
    __int16 v2; // ax
    int i; // [esp+8h] [ebp-10h]
    int v4; // [esp+Ch] [ebp-Ch]
    int v5; // [esp+14h] [ebp-4h]

    result = (int)a1;
    v5 = a1[11];
    if (*(_DWORD*)(dword_5CAA3C + 32))
    {
        result = word_60430E;
        if (!word_60430E)
        {
            ++a1[6];
            ++* (_WORD*)(v5 + 840);
            if ((byte_5CAA40 & 1) != 0)
            {
                byte_5CAA1C = 0;
                byte_5CAA40 &= 0xFEu;
                byte_5CAA40 |= 4u;
                *(_WORD*)(v5 + 862) = 2;
                if ((byte_5CAA40 & 4) != 0)
                    sub_4D07B5(dword_5A03B4);
            }
            if (byte_5CAA1C != 1)
            {
                v4 = dword_6043C8[word_60431C];
                word_668762 = 1;
                sub_553C3C(*(_WORD*)(v4 + 128));
                word_604312 = 1;
            }
            if (byte_5CAA1C)
            {
                if (byte_5CAA1C == 2 && (byte_622128 & 0x80) != 0)
                {
                    byte_5CAA1C = 0;
                    *(_WORD*)(v5 + 862) = 2;
                }
            }
            else if (!*(_BYTE*)(v5 + 845) && !*(_BYTE*)(v5 + 812))
            {
                if ((byte_622128 & 0x80) != 0)
                {
                    *(_BYTE*)(v5 + 860) = 4;
                }
                else if ((byte_622130 & 0x80) != 0)
                {
                    *(_BYTE*)(v5 + 860) = 1;
                }
                else if ((byte_62212B & 0x80) != 0)
                {
                    *(_BYTE*)(v5 + 860) = 2;
                }
                else if ((byte_62212D & 0x80) != 0)
                {
                    *(_BYTE*)(v5 + 860) = 3;
                }
                else
                {
                    *(_BYTE*)(v5 + 860) = 0;
                }
            }
            if ((*(_BYTE*)(v5 + 845) || byte_5CAA1C) && !*(_BYTE*)(v5 + 812))
                sub_4DC8DD(v5);
            v2 = *(_WORD*)(v5 + 862);
            if (v2)
            {
                if (v2 == 1)
                {
                    --* (_DWORD*)(v5 + 868);
                    if (!*(_BYTE*)(v5 + 864) && (dword_6234D4 & 4) != 0)
                        *(_DWORD*)(v5 + 868) = -1;
                    if (*(int*)(v5 + 868) < 0)
                    {
                        *(_WORD*)(v5 + 862) = 2;
                        byte_5CAA1C = 1;
                        byte_5CAA40 |= 2u;
                        byte_5CAA40 &= 0xFBu;
                    }
                }
                else if (v2 == 2)
                {
                    for (i = 0; i < *(unsigned __int8*)(v5 + 850) - 1; ++i)
                        *(_BYTE*)(*(_DWORD*)(v5 + 808) + i) = i + 1;
                    *(_BYTE*)(*(_DWORD*)(v5 + 808) + *(unsigned __int8*)(v5 + 850) - 1) = 0;
                    *(_DWORD*)(v5 + 852) = *(unsigned __int8*)(v5 + 848) - 1;
                    *(_DWORD*)(v5 + 856) = *(unsigned __int8*)(v5 + 849) - 1;
                    *(_BYTE*)(v5 + 845) = 1;
                    *(_BYTE*)(v5 + 846) = 0;
                    *(_WORD*)(v5 + 862) = 0;
                    *(_BYTE*)(v5 + 806) = rand() % 6;
                }
            }
            else if (!*(_BYTE*)(v5 + 861))
            {
                switch (*(_BYTE*)(v5 + 860))
                {
                case 1:
                    if (*(_DWORD*)(v5 + 856))
                        sub_4DC377(v5, 0);
                    break;
                case 2:
                    if (*(_DWORD*)(v5 + 852) != *(unsigned __int8*)(v5 + 848) - 1)
                        sub_4DC377(v5, 3);
                    break;
                case 3:
                    if (*(_DWORD*)(v5 + 852))
                        sub_4DC377(v5, 2);
                    break;
                case 4:
                    if (*(_DWORD*)(v5 + 856) != *(unsigned __int8*)(v5 + 849) - 1)
                        sub_4DC377(v5, 1);
                    break;
                default:
                    break;
                }
                if (!byte_5CAA1C && !*(_BYTE*)(v5 + 845) && (unsigned __int8)sub_4DCB2D(v5))
                {
                    if ((byte_5CAA40 & 4) != 0)
                        sub_4D07B5(dword_5A0370);
                    *(_WORD*)(v5 + 862) = 1;
                    *(_BYTE*)(v5 + 864) = 0;
                    *(_DWORD*)(v5 + 868) = 300;
                    if (*(unsigned __int16*)(v5 + 840) < (int)*(unsigned __int16*)(v5 + 842))
                    {
                        *(_WORD*)(v5 + 842) = *(_WORD*)(v5 + 840);
                        LOWORD(dword_6041EE) = *(_WORD*)(v5 + 842);
                        if ((dword_6041E0 & 8) == 0)
                        {
                            sub_47641B(2);
                            saveGame(-1, 0);
                        }
                    }
                }
            }
            if (*(_BYTE*)(v5 + 812))
                sub_4DCA3A(v5);
            *(_BYTE*)(v5 + 861) = *(_BYTE*)(v5 + 860);
            if ((byte_62207C & 0x80) != 0 && (byte_5CAA40 & 4) != 0)
            {
                *(_WORD*)(v5 + 862) = 2;
                byte_5CAA1C = 1;
                byte_5CAA40 |= 2u;
                byte_5CAA40 &= 0xFBu;
            }
            result = sub_4D34A9(a1, v5);
        }
    }
    return result;
}
// 5A03B4: using guessed type int dword_5A03B4;
// 5CAA1C: using guessed type char byte_5CAA1C;
// 5CAA3C: using guessed type int dword_5CAA3C;
// 5CAA40: using guessed type char byte_5CAA40;
// 6041E0: using guessed type int dword_6041E0;
// 6041EE: using guessed type int dword_6041EE;
// 60430E: using guessed type __int16 word_60430E;
// 604312: using guessed type __int16 word_604312;
// 60431C: using guessed type __int16 word_60431C;
// 6043C8: using guessed type int dword_6043C8[];
// 62207C: using guessed type char byte_62207C;
// 622128: using guessed type char byte_622128;
// 62212B: using guessed type char byte_62212B;
// 62212D: using guessed type char byte_62212D;
// 622130: using guessed type char byte_622130;
// 6234D4: using guessed type int dword_6234D4;
// 668762: using guessed type __int16 word_668762;

//----- (004D34A9) --------------------------------------------------------
int __cdecl sub_4D34A9(_DWORD* a1, int a2)
{
    int result; // eax
    int v3; // [esp+8h] [ebp-14h]
    int v4; // [esp+8h] [ebp-14h]
    int v5; // [esp+8h] [ebp-14h]
    int i; // [esp+Ch] [ebp-10h]
    int v7; // [esp+Ch] [ebp-10h]
    int v8; // [esp+Ch] [ebp-10h]
    int v9; // [esp+Ch] [ebp-10h]
    int j; // [esp+Ch] [ebp-10h]
    int k; // [esp+Ch] [ebp-10h]
    int v12; // [esp+10h] [ebp-Ch]
    int v13; // [esp+10h] [ebp-Ch]
    int v14; // [esp+10h] [ebp-Ch]
    int v15; // [esp+10h] [ebp-Ch]
    int v16; // [esp+14h] [ebp-8h]
    int v17; // [esp+14h] [ebp-8h]
    int v18; // [esp+14h] [ebp-8h]
    int v19; // [esp+14h] [ebp-8h]
    _DWORD* v20; // [esp+18h] [ebp-4h]

    v20 = (_DWORD*)(a1[4] + 0x8000);
    for (i = 0; i < 0x2000; ++i)
        *--v20 = 0;
    v3 = 0;
    v12 = 4;
    while (v3 < *(unsigned __int8*)(a2 + 849))
    {
        v7 = 0;
        v16 = 4;
        while (v7 < *(unsigned __int8*)(a2 + 848))
        {
            if (*(_BYTE*)(*(_DWORD*)(a2 + 808) + v7 + *(unsigned __int8*)(a2 + 848) * v3))
            {
                if (*(_BYTE*)(a2 + 812) && v3 == *(_DWORD*)(a2 + 820) && v7 == *(_DWORD*)(a2 + 816))
                    sub_4D05E6(a1, v16, v12, (int*)(a2 + 660));
                else
                    sub_4D05E6(
                        a1,
                        v16,
                        v12,
                        (int*)(a2
                            + 12
                            * (*(unsigned __int8*)(a2 + 806) * *(unsigned __int8*)(a2 + 848) * *(unsigned __int8*)(a2 + 849)
                                + *(unsigned __int8*)(*(_DWORD*)(a2 + 808) + v7 + *(unsigned __int8*)(a2 + 848) * v3)
                                - 1)
                            + 12));
            }
            ++v7;
            v16 += *(unsigned __int8*)(a2 + 804);
        }
        ++v3;
        v12 += *(unsigned __int8*)(a2 + 805);
    }
    if (*(_WORD*)(a2 + 862) != 1 || *(_BYTE*)(a2 + 864) || *(_BYTE*)(a2 + 812))
    {
        v4 = 0;
        v13 = *(unsigned __int8*)(a2 + 805) * a1[2] + 4 * a1[2];
        while (v4 < *(unsigned __int8*)(a2 + 849) - 1)
        {
            v8 = 0;
            v17 = 4;
            while (v8 < *(unsigned __int8*)(a2 + 848) * *(unsigned __int8*)(a2 + 804))
            {
                *(_WORD*)(a1[4] + 2 * v13 + 2 * v17) = 0;
                ++v8;
                ++v17;
            }
            ++v4;
            v13 += *(unsigned __int8*)(a2 + 805) * a1[2];
        }
        v5 = 0;
        v14 = 4;
        while (v5 < a1[3] - 8)
        {
            v9 = 0;
            v18 = *(unsigned __int8*)(a2 + 804) + 4;
            while (v9 < *(unsigned __int8*)(a2 + 848) - 1)
            {
                *(_WORD*)(a1[4] + 2 * a1[2] * v14 + 2 * v18) = 0;
                ++v9;
                v18 += *(unsigned __int8*)(a2 + 804);
            }
            ++v5;
            ++v14;
        }
    }
    else
    {
        sub_4D05E6(
            a1,
            *(unsigned __int8*)(a2 + 804) * (*(unsigned __int8*)(a2 + 848) - 1) + 4,
            *(unsigned __int8*)(a2 + 805) * (*(unsigned __int8*)(a2 + 849) - 1) + 4,
            (int*)(a2
                + 12
                * (*(unsigned __int8*)(a2 + 806) * *(unsigned __int8*)(a2 + 848) * *(unsigned __int8*)(a2 + 849)
                    + *(unsigned __int8*)(a2 + 849) * *(unsigned __int8*)(a2 + 848)
                    - 1)
                + 12));
    }
    if (*(_BYTE*)(a2 + 812))
    {
        sub_4D05E6(
            a1,
            *(unsigned __int8*)(a2 + 804) * *(_DWORD*)(a2 + 816) + 4,
            *(unsigned __int8*)(a2 + 805) * *(_DWORD*)(a2 + 820) + 4,
            (int*)(a2 + 660));
        sub_4D05E6(
            a1,
            *(_DWORD*)(a2 + 824) + 4,
            *(_DWORD*)(a2 + 828) + 4,
            (int*)(a2
                + 12
                * (*(unsigned __int8*)(a2 + 806) * *(unsigned __int8*)(a2 + 848) * *(unsigned __int8*)(a2 + 849)
                    + *(unsigned __int8*)(*(_DWORD*)(a2 + 808)
                        + *(_DWORD*)(a2 + 816)
                        + *(unsigned __int8*)(a2 + 848) * *(_DWORD*)(a2 + 820))
                    - 1)
                + 12));
    }
    v15 = 0;
    for (j = 0; j < 31; ++j)
    {
        sub_4D05E6(a1, 0, v15, (int*)a2);
        sub_4D05E6(a1, 124, v15, (int*)a2);
        v15 += *(_DWORD*)(a2 + 4);
    }
    v19 = 0;
    for (k = 0; k < 32; ++k)
    {
        sub_4D05E6(a1, v19, 0, (int*)a2);
        sub_4D05E6(a1, v19, 124, (int*)a2);
        v19 += *(_DWORD*)a2;
    }
    if (byte_5CAA1C == 2)
        sub_4D05E6(a1, a1[2] / 2 - *(_DWORD*)(a2 + 792) / 2, a1[3] / 2 - *(_DWORD*)(a2 + 796) / 2, (int*)(a2 + 792));
    if (*(_WORD*)(a2 + 862) != 1 || (result = a2, *(_BYTE*)(a2 + 864)))
        result = sub_4D290F(
            *(unsigned __int16*)(a2 + 840) / 30,
            *(unsigned __int16*)(a2 + 842) / 30,
            (_DWORD*)(a2 + 672),
            a1,
            byte_5CAA1C);
    if (a1[1])
        result = sub_569C41(a1[1], a1[4]);
    return result;
}
// 5CAA1C: using guessed type char byte_5CAA1C;

//----- (004DC8DD) --------------------------------------------------------
int __cdecl sub_4DC8DD(int a1)
{
    int v1; // eax
    int result; // eax
    char v3; // [esp+0h] [ebp-4h]

    do
    {
        do
        {
            v1 = rand() % 4;
            v3 = v1;
        } while (!*(_BYTE*)(a1 + 847) && v1 == 1);
    } while (*(_BYTE*)(a1 + 847) == 1 && !v1
        || *(_BYTE*)(a1 + 847) == 2 && v1 == 3
        || *(_BYTE*)(a1 + 847) == 3 && v1 == 2
        || (v1 || !*(_DWORD*)(a1 + 856))
        && (v1 != 1 || *(_DWORD*)(a1 + 856) == *(unsigned __int8*)(a1 + 849) - 1)
        && (v1 != 2 || !*(_DWORD*)(a1 + 852))
        && (v1 != 3 || *(_DWORD*)(a1 + 852) == *(unsigned __int8*)(a1 + 848) - 1));
    sub_4DC377(a1, v1);
    result = a1;
    *(_BYTE*)(a1 + 847) = v3;
    if (!byte_5CAA1C)
    {
        ++* (_BYTE*)(a1 + 846);
        result = 5 * *(unsigned __int8*)(a1 + 850);
        if (*(unsigned __int8*)(a1 + 846) == result)
            *(_BYTE*)(a1 + 845) = 0;
        *(_WORD*)(a1 + 840) = 0;
    }
    return result;
}
// 5CAA1C: using guessed type char byte_5CAA1C;

//----- (004DC377) --------------------------------------------------------
int __cdecl sub_4DC377(int a1, int a2)
{
    int result; // eax
    char v3; // [esp+8h] [ebp-4h]
    char v4; // [esp+8h] [ebp-4h]
    char v5; // [esp+8h] [ebp-4h]
    char v6; // [esp+8h] [ebp-4h]

    *(_BYTE*)(a1 + 812) = 1;
    *(_BYTE*)(a1 + 815) = *(_BYTE*)(a1 + 844);
    if ((byte_5CAA40 & 4) != 0)
        sub_4D07B5(dword_5A036C);
    result = a2;
    switch (a2)
    {
    case 0:
        v3 = *(_BYTE*)(*(_DWORD*)(a1 + 808)
            + *(_DWORD*)(a1 + 852)
            + (*(_DWORD*)(a1 + 856) - 1) * *(unsigned __int8*)(a1 + 848));
        *(_BYTE*)(*(_DWORD*)(a1 + 808)
            + *(_DWORD*)(a1 + 852)
            + (*(_DWORD*)(a1 + 856) - 1) * *(unsigned __int8*)(a1 + 848)) = *(_BYTE*)(*(_DWORD*)(a1 + 808)
                + *(_DWORD*)(a1 + 852)
                + *(_DWORD*)(a1 + 856)
                * *(unsigned __int8*)(a1 + 848));
        *(_BYTE*)(*(_DWORD*)(a1 + 808) + *(_DWORD*)(a1 + 852) + *(_DWORD*)(a1 + 856) * *(unsigned __int8*)(a1 + 848)) = v3;
        --* (_DWORD*)(a1 + 856);
        *(_BYTE*)(a1 + 813) = 1;
        *(_DWORD*)(a1 + 824) = *(unsigned __int8*)(a1 + 804) * *(_DWORD*)(a1 + 852);
        *(_DWORD*)(a1 + 828) = *(unsigned __int8*)(a1 + 805) * *(_DWORD*)(a1 + 856);
        *(_DWORD*)(a1 + 816) = *(_DWORD*)(a1 + 852);
        result = a1;
        *(_DWORD*)(a1 + 820) = *(_DWORD*)(a1 + 856) + 1;
        break;
    case 1:
        v4 = *(_BYTE*)(*(_DWORD*)(a1 + 808)
            + *(_DWORD*)(a1 + 852)
            + (*(_DWORD*)(a1 + 856) + 1) * *(unsigned __int8*)(a1 + 848));
        *(_BYTE*)(*(_DWORD*)(a1 + 808)
            + *(_DWORD*)(a1 + 852)
            + (*(_DWORD*)(a1 + 856) + 1) * *(unsigned __int8*)(a1 + 848)) = *(_BYTE*)(*(_DWORD*)(a1 + 808)
                + *(_DWORD*)(a1 + 852)
                + *(_DWORD*)(a1 + 856)
                * *(unsigned __int8*)(a1 + 848));
        *(_BYTE*)(*(_DWORD*)(a1 + 808) + *(_DWORD*)(a1 + 852) + *(_DWORD*)(a1 + 856) * *(unsigned __int8*)(a1 + 848)) = v4;
        ++* (_DWORD*)(a1 + 856);
        *(_BYTE*)(a1 + 813) = 4;
        *(_DWORD*)(a1 + 824) = *(unsigned __int8*)(a1 + 804) * *(_DWORD*)(a1 + 852);
        *(_DWORD*)(a1 + 828) = *(unsigned __int8*)(a1 + 805) * *(_DWORD*)(a1 + 856);
        *(_DWORD*)(a1 + 816) = *(_DWORD*)(a1 + 852);
        result = a1;
        *(_DWORD*)(a1 + 820) = *(_DWORD*)(a1 + 856) - 1;
        break;
    case 2:
        v5 = *(_BYTE*)(*(_DWORD*)(a1 + 808)
            + *(_DWORD*)(a1 + 852)
            + *(_DWORD*)(a1 + 856) * *(unsigned __int8*)(a1 + 848)
            - 1);
        *(_BYTE*)(*(_DWORD*)(a1 + 808)
            + *(_DWORD*)(a1 + 852)
            + *(_DWORD*)(a1 + 856) * *(unsigned __int8*)(a1 + 848)
            - 1) = *(_BYTE*)(*(_DWORD*)(a1 + 808)
                + *(_DWORD*)(a1 + 852)
                + *(_DWORD*)(a1 + 856) * *(unsigned __int8*)(a1 + 848));
        *(_BYTE*)(*(_DWORD*)(a1 + 808) + *(_DWORD*)(a1 + 852) + *(_DWORD*)(a1 + 856) * *(unsigned __int8*)(a1 + 848)) = v5;
        --* (_DWORD*)(a1 + 852);
        *(_BYTE*)(a1 + 813) = 3;
        *(_DWORD*)(a1 + 824) = *(unsigned __int8*)(a1 + 804) * *(_DWORD*)(a1 + 852);
        *(_DWORD*)(a1 + 828) = *(unsigned __int8*)(a1 + 805) * *(_DWORD*)(a1 + 856);
        *(_DWORD*)(a1 + 816) = *(_DWORD*)(a1 + 852) + 1;
        result = a1;
        *(_DWORD*)(a1 + 820) = *(_DWORD*)(a1 + 856);
        break;
    case 3:
        v6 = *(_BYTE*)(*(_DWORD*)(a1 + 808)
            + *(_DWORD*)(a1 + 852)
            + *(_DWORD*)(a1 + 856) * *(unsigned __int8*)(a1 + 848)
            + 1);
        *(_BYTE*)(*(_DWORD*)(a1 + 808)
            + *(_DWORD*)(a1 + 852)
            + *(_DWORD*)(a1 + 856) * *(unsigned __int8*)(a1 + 848)
            + 1) = *(_BYTE*)(*(_DWORD*)(a1 + 808)
                + *(_DWORD*)(a1 + 852)
                + *(_DWORD*)(a1 + 856) * *(unsigned __int8*)(a1 + 848));
        *(_BYTE*)(*(_DWORD*)(a1 + 808) + *(_DWORD*)(a1 + 852) + *(_DWORD*)(a1 + 856) * *(unsigned __int8*)(a1 + 848)) = v6;
        ++* (_DWORD*)(a1 + 852);
        *(_BYTE*)(a1 + 813) = 2;
        *(_DWORD*)(a1 + 824) = *(unsigned __int8*)(a1 + 804) * *(_DWORD*)(a1 + 852);
        *(_DWORD*)(a1 + 828) = *(unsigned __int8*)(a1 + 805) * *(_DWORD*)(a1 + 856);
        *(_DWORD*)(a1 + 816) = *(_DWORD*)(a1 + 852) - 1;
        result = a1;
        *(_DWORD*)(a1 + 820) = *(_DWORD*)(a1 + 856);
        break;
    default:
        return result;
    }
    return result;
}
// 5CAA40: using guessed type char byte_5CAA40;

//----- (004DCB2D) --------------------------------------------------------
int __cdecl sub_4DCB2D(int a1)
{
    unsigned __int8 i; // [esp+4h] [ebp-4h]

    for (i = 1; i < *(unsigned __int8*)(a1 + 850) - 1; ++i)
    {
        if (*(unsigned __int8*)(*(_DWORD*)(a1 + 808) + i - 1) > (int)*(unsigned __int8*)(*(_DWORD*)(a1 + 808) + i))
            return 0;
    }
    return 1;
}

//----- (004DCA3A) --------------------------------------------------------
int __cdecl sub_4DCA3A(int a1)
{
    int result; // eax

    switch (*(_BYTE*)(a1 + 813))
    {
    case 1:
        *(_DWORD*)(a1 + 828) += *(unsigned __int8*)(a1 + 814);
        break;
    case 2:
        *(_DWORD*)(a1 + 824) -= *(unsigned __int8*)(a1 + 814);
        break;
    case 3:
        *(_DWORD*)(a1 + 824) += *(unsigned __int8*)(a1 + 814);
        break;
    case 4:
        *(_DWORD*)(a1 + 828) -= *(unsigned __int8*)(a1 + 814);
        break;
    default:
        break;
    }
    --* (_BYTE*)(a1 + 815);
    result = a1;
    if (!*(_BYTE*)(a1 + 815))
        *(_BYTE*)(a1 + 812) = 0;
    return result;
}