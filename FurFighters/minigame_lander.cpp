#include "minigame_lander.h"

#include "minigame_global.h"
#include "defs.h"
#include "maybe.h"
#include "files.h"
#include "tempplace.h"
#include "save.h"

char aLandersubgameC[] = "landersubgame.chb"; // idb
char aLanderShipSpr[16] = "lander\\ship.spr"; // weak
char aLanderLifeSpr[16] = "lander\\life.spr"; // weak
char aLanderFuelSpr[16] = "lander\\fuel.spr"; // weak
char aLanderLand1Spr[17] = "lander\\land1.spr"; // weak
char aLanderLand2Spr[17] = "lander\\land2.spr"; // weak
char aLanderLand3Spr[17] = "lander\\land3.spr"; // weak
char aLanderLand4Spr[17] = "lander\\land4.spr"; // weak
char aLanderLand5Spr[17] = "lander\\land5.spr"; // weak
char aLanderBackgd1S[19] = "lander\\backgd1.spr"; // weak
char aLanderBackgd2S[19] = "lander\\backgd2.spr"; // weak
char aLanderBackgd3S[19] = "lander\\backgd3.spr"; // weak
char aLanderBackgd4S[19] = "lander\\backgd4.spr"; // weak
char aLanderBackgd5S[19] = "lander\\backgd5.spr"; // weak
char aLanderBaby1Spr[17] = "lander\\baby1.spr"; // weak
char aLanderBaby1bSp[18] = "lander\\baby1b.spr"; // weak
char aLanderBaby2Spr[17] = "lander\\baby2.spr"; // weak
char aLanderBaby2bSp[18] = "lander\\baby2b.spr"; // weak
char aLanderBaby3Spr[17] = "lander\\baby3.spr"; // weak
char aLanderBaby3bSp[18] = "lander\\baby3b.spr"; // weak
char aLanderBaby4Spr[17] = "lander\\baby4.spr"; // weak
char aLanderBaby4bSp[18] = "lander\\baby4b.spr"; // weak
char aLanderBaby5Spr[17] = "lander\\baby5.spr"; // weak
char aLanderBaby5bSp[18] = "lander\\baby5b.spr"; // weak
char aLanderHomeSpr[16] = "lander\\home.spr"; // weak
char aLanderBorderSp[18] = "lander\\border.spr"; // weak
char aLanderOverEnSp[19] = "lander\\over_en.spr"; // weak
char aLanderPressEnS[20] = "lander\\press_en.spr"; // weak
char aLanderRoundEnS[20] = "lander\\round_en.spr"; // weak
char aLanderBonusEnS[20] = "lander\\bonus_en.spr"; // weak
char aLanderOverFrSp[19] = "lander\\over_fr.spr"; // weak
char aLanderPressFrS[20] = "lander\\press_fr.spr"; // weak
char aLanderRoundFrS[20] = "lander\\round_fr.spr"; // weak
char aLanderBonusFrS[20] = "lander\\bonus_fr.spr"; // weak
char aLanderOverGeSp[19] = "lander\\over_ge.spr"; // weak
char aLanderPressGeS[20] = "lander\\press_ge.spr"; // weak
char aLanderRoundGeS[20] = "lander\\round_ge.spr"; // weak
char aLanderBonusGeS[20] = "lander\\bonus_ge.spr"; // weak
char aLanderOverEnSp_0[19] = "lander\\over_en.spr"; // weak
char aLanderPressEnS_0[20] = "lander\\press_en.spr"; // weak
char aLanderRoundEnS_0[20] = "lander\\round_en.spr"; // weak
char aLanderBonusEnS_0[20] = "lander\\bonus_en.spr"; // weak
char aLanderOverSpSp[19] = "lander\\over_sp.spr"; // weak
char aLanderPressSpS[20] = "lander\\press_sp.spr"; // weak
char aLanderRoundSpS[20] = "lander\\round_sp.spr"; // weak
char aLanderBonusSpS[20] = "lander\\bonus_sp.spr"; // weak
char aLanderOverEnSp_1[19] = "lander\\over_en.spr"; // weak
char aLanderPressEnS_1[20] = "lander\\press_en.spr"; // weak
char aLanderRoundEnS_1[20] = "lander\\round_en.spr"; // weak
char aLanderBonusEnS_1[20] = "lander\\bonus_en.spr"; // weak
char aLanderOverFrSp_0[19] = "lander\\over_fr.spr"; // weak
char aLanderPressFrS_0[20] = "lander\\press_fr.spr"; // weak
char aLanderRoundFrS_0[20] = "lander\\round_fr.spr"; // weak
char aLanderBonusFrS_0[20] = "lander\\bonus_fr.spr"; // weak
char aLanderOverGeSp_0[19] = "lander\\over_ge.spr"; // weak
char aLanderPressGeS_0[20] = "lander\\press_ge.spr"; // weak
char aLanderRoundGeS_0[20] = "lander\\round_ge.spr"; // weak
char aLanderBonusGeS_0[20] = "lander\\bonus_ge.spr"; // weak
char aLanderOverEnSp_2[19] = "lander\\over_en.spr"; // weak
char aLanderPressEnS_2[20] = "lander\\press_en.spr"; // weak
char aLanderRoundEnS_2[20] = "lander\\round_en.spr"; // weak
char aLanderBonusEnS_2[20] = "lander\\bonus_en.spr"; // weak
char aLanderOverSpSp_0[19] = "lander\\over_sp.spr"; // weak
char aLanderPressSpS_0[20] = "lander\\press_sp.spr"; // weak
char aLanderRoundSpS_0[20] = "lander\\round_sp.spr"; // weak
char aLanderBonusSpS_0[20] = "lander\\bonus_sp.spr"; // weak

char byte_5CAA1D; // weak

__int16 __cdecl sub_4E21DA(_DWORD* a1);
int __cdecl sub_4DE324(int a1);
void __cdecl sub_4D18C9(int a1, int a2, int a3, int a4, int a5);
int __cdecl sub_4D1CD7(int a1);
void __cdecl sub_4DF1C2(int a1);
void __cdecl sub_4DE897(int a1);
int __cdecl sub_4DE747(int a1);
__int16 __cdecl sub_4D49B4(_DWORD* a1, int a2);
int __cdecl sub_4D204B(int a1);
int __cdecl sub_4DE22B(int a1);
_WORD* __cdecl sub_4D2A50(int a1, _DWORD* a2);

//----- (004D82FE) --------------------------------------------------------
_DWORD* __cdecl sub_4D82FE(_DWORD* a1)
{
    char* v2; // eax
    unsigned __int16 v3; // [esp+4h] [ebp-2Ch]
    int j; // [esp+8h] [ebp-28h]
    int ii; // [esp+Ch] [ebp-24h]
    int k; // [esp+10h] [ebp-20h]
    _DWORD* v7; // [esp+14h] [ebp-1Ch]
    int l; // [esp+1Ch] [ebp-14h]
    int i; // [esp+20h] [ebp-10h]
    int m; // [esp+20h] [ebp-10h]
    int n; // [esp+20h] [ebp-10h]
    int v12; // [esp+24h] [ebp-Ch]

    if (!sub_56EA26(*a1, a1[2], a1[3], 2))
        return 0;
    a1[11] = maybe_allocateMemory(15276);
    v12 = a1[11];
    a1[7] = 1;
    a1[10] = sub_4E21DA;
    a1[1] = *(_DWORD*)(*a1 + 44);
    a1[4] = maybe_allocateMemory(2 * a1[3] * a1[2] + 31);
    a1[4] = (a1[4] + 31) & 0xFFFFFFE0;
    a1[6] = 0;
    loadCHBfile(aLandersubgameC);
    loadSprite(v12 + 44, aLanderShipSpr);
    loadSprite(v12 + 308, aLanderLifeSpr);
    loadSprite(v12 + 320, aLanderFuelSpr);
    loadSprite(v12 + 56, aLanderLand1Spr);
    loadSprite(v12 + 68, aLanderLand2Spr);
    loadSprite(v12 + 80, aLanderLand3Spr);
    loadSprite(v12 + 92, aLanderLand4Spr);
    loadSprite(v12 + 104, aLanderLand5Spr);
    loadSprite(v12 + 116, aLanderBackgd1S);
    loadSprite(v12 + 128, aLanderBackgd2S);
    loadSprite(v12 + 140, aLanderBackgd3S);
    loadSprite(v12 + 152, aLanderBackgd4S);
    loadSprite(v12 + 164, aLanderBackgd5S);
    loadSprite(v12 + 176, aLanderBaby1Spr);
    loadSprite(v12 + 188, aLanderBaby1bSp);
    loadSprite(v12 + 200, aLanderBaby2Spr);
    loadSprite(v12 + 212, aLanderBaby2bSp);
    loadSprite(v12 + 224, aLanderBaby3Spr);
    loadSprite(v12 + 236, aLanderBaby3bSp);
    loadSprite(v12 + 248, aLanderBaby4Spr);
    loadSprite(v12 + 260, aLanderBaby4bSp);
    loadSprite(v12 + 272, aLanderBaby5Spr);
    loadSprite(v12 + 284, aLanderBaby5bSp);
    loadSprite(v12 + 296, aLanderHomeSpr);
    loadSprite(v12 + 32, aLanderBorderSp);
    if (loadAllLanguageSpritesAtOnce)
    {
        loadSprite(v12 + 344, aLanderOverEnSp);
        loadSprite(v12 + 380, aLanderPressEnS);
        loadSprite(v12 + 356, aLanderRoundEnS);
        loadSprite(v12 + 368, aLanderBonusEnS);
        loadSprite(v12 + 344, aLanderOverFrSp);
        loadSprite(v12 + 380, aLanderPressFrS);
        loadSprite(v12 + 356, aLanderRoundFrS);
        loadSprite(v12 + 368, aLanderBonusFrS);
        loadSprite(v12 + 344, aLanderOverGeSp);
        loadSprite(v12 + 380, aLanderPressGeS);
        loadSprite(v12 + 356, aLanderRoundGeS);
        loadSprite(v12 + 368, aLanderBonusGeS);
        loadSprite(v12 + 344, aLanderOverEnSp_0);
        loadSprite(v12 + 380, aLanderPressEnS_0);
        loadSprite(v12 + 356, aLanderRoundEnS_0);
        loadSprite(v12 + 368, aLanderBonusEnS_0);
        loadSprite(v12 + 344, aLanderOverSpSp);
        loadSprite(v12 + 380, aLanderPressSpS);
        loadSprite(v12 + 356, aLanderRoundSpS);
        loadSprite(v12 + 368, aLanderBonusSpS);
    }
    else
    {
        switch (languageId)
        {
        case 0:
            loadSprite(v12 + 344, aLanderOverEnSp_1);
            loadSprite(v12 + 380, aLanderPressEnS_1);
            loadSprite(v12 + 356, aLanderRoundEnS_1);
            loadSprite(v12 + 368, aLanderBonusEnS_1);
            break;
        case 1:
            loadSprite(v12 + 344, aLanderOverFrSp_0);
            loadSprite(v12 + 380, aLanderPressFrS_0);
            loadSprite(v12 + 356, aLanderRoundFrS_0);
            loadSprite(v12 + 368, aLanderBonusFrS_0);
            break;
        case 2:
            loadSprite(v12 + 344, aLanderOverGeSp_0);
            loadSprite(v12 + 380, aLanderPressGeS_0);
            loadSprite(v12 + 356, aLanderRoundGeS_0);
            loadSprite(v12 + 368, aLanderBonusGeS_0);
            break;
        case 3:
            loadSprite(v12 + 344, aLanderOverEnSp_2);
            loadSprite(v12 + 380, aLanderPressEnS_2);
            loadSprite(v12 + 356, aLanderRoundEnS_2);
            loadSprite(v12 + 368, aLanderBonusEnS_2);
            break;
        case 4:
            loadSprite(v12 + 344, aLanderOverSpSp_0);
            loadSprite(v12 + 380, aLanderPressSpS_0);
            loadSprite(v12 + 356, aLanderRoundSpS_0);
            loadSprite(v12 + 368, aLanderBonusSpS_0);
            break;
        default:
            break;
        }
    }
    for (i = 0; i < 10; ++i)
    {
        v2 = getFormattedString("lander\\digi%d.spr", i);
        loadSprite(v12 + 12 * i + 392, v2);
    }
    sub_53F37A();
    *(_DWORD*)(v12 + 15056) = 107;
    *(_DWORD*)(v12 + 15060) = 20;
    *(_DWORD*)(v12 + 15064) = 12;
    *(_DWORD*)(v12 + 15068) = 20;
    *(_DWORD*)(v12 + 15072) = 12;
    *(_DWORD*)(v12 + 15076) = 23;
    *(_DWORD*)(v12 + 15080) = 78;
    *(_DWORD*)(v12 + 15084) = 24;
    *(_DWORD*)(v12 + 15088) = 57;
    *(_DWORD*)(v12 + 15092) = 20;
    for (j = 0; j < *(_DWORD*)(v12 + 48); ++j)
    {
        for (k = 0; k < *(_DWORD*)(v12 + 44); ++k)
        {
            v3 = *(_WORD*)(*(_DWORD*)(v12 + 52) + 2 * *(_DWORD*)(v12 + 44) * j + 2 * k);
            if (v3 & 0x1F | ((int)v3 >> 5) & 0x1F | ((int)v3 >> 10) & 0x1F)
                *(_BYTE*)(v12 + k + *(_DWORD*)(v12 + 44) * j + 14808) = 1;
            else
                *(_BYTE*)(v12 + k + *(_DWORD*)(v12 + 44) * j + 14808) = 0;
        }
    }
    *(_DWORD*)(v12 + 15236) = 5;
    *(_DWORD*)(v12 + 4) = 1036831949;
    *(_DWORD*)(v12 + 8) = 1045220557;
    *(_DWORD*)(v12 + 12) = 0;
    *(_BYTE*)(v12 + 1) = 4;
    *(_BYTE*)(v12 + 17) = 7;
    *(_BYTE*)(v12 + 18) = 7;
    *(_BYTE*)(v12 + 16) = 1;
    *(_BYTE*)(v12 + 19) = 30;
    *(_BYTE*)(v12 + 20) = 50;
    *(_BYTE*)(v12 + 21) = 30;
    *(_DWORD*)(v12 + 1360) = 1082130432;
    *(_DWORD*)(v12 + 1364) = 1061997773;
    *(_BYTE*)(v12 + 28) = 4;
    *(_DWORD*)(v12 + 15216) = 118;
    *(_DWORD*)(v12 + 15220) = 400;
    *(_DWORD*)(v12 + 15216) = 16791865;
    *(_DWORD*)(v12 + 15224) = 128;
    *(_WORD*)(v12 + 1348) = 400;
    *(_WORD*)(v12 + 1350) = 400;
    *(_WORD*)(v12 + 1352) = 400;
    *(_WORD*)(v12 + 1354) = 400;
    *(_WORD*)(v12 + 1356) = 400;
    *(_WORD*)(v12 + 1358) = 10;
    *(_DWORD*)(v12 + 1308) = 12;
    *(_DWORD*)(v12 + 1312) = 28;
    *(_DWORD*)(v12 + 1316) = 19;
    *(_DWORD*)(v12 + 1320) = 44;
    *(_DWORD*)(v12 + 1324) = 35;
    *(_DWORD*)(v12 + 1328) = 8;
    *(_DWORD*)(v12 + 1332) = 23;
    *(_DWORD*)(v12 + 1336) = 21;
    *(_DWORD*)(v12 + 1340) = 46;
    *(_DWORD*)(v12 + 1344) = 37;
    *(_DWORD*)(v12 + 524) = 12;
    *(_DWORD*)(v12 + 528) = 111;
    *(float*)(v12 + 516) = (float)*(int*)(v12 + 524);
    *(float*)(v12 + 520) = (float)*(int*)(v12 + 528);
    *(_DWORD*)(v12 + 568) = 63;
    *(_DWORD*)(v12 + 572) = 107;
    *(float*)(v12 + 560) = (float)*(int*)(v12 + 568);
    *(float*)(v12 + 564) = (float)*(int*)(v12 + 572);
    *(_DWORD*)(v12 + 612) = 107;
    *(_DWORD*)(v12 + 616) = 104;
    *(float*)(v12 + 604) = (float)*(int*)(v12 + 612);
    *(float*)(v12 + 608) = (float)*(int*)(v12 + 616);
    *(_DWORD*)(v12 + 656) = 56;
    *(_DWORD*)(v12 + 660) = 58;
    *(float*)(v12 + 648) = (float)*(int*)(v12 + 656);
    *(float*)(v12 + 652) = (float)*(int*)(v12 + 660);
    *(_DWORD*)(v12 + 700) = 39;
    *(_DWORD*)(v12 + 704) = 116;
    *(float*)(v12 + 692) = (float)*(int*)(v12 + 700);
    *(float*)(v12 + 696) = (float)*(int*)(v12 + 704);
    *(_DWORD*)(v12 + 744) = 100;
    *(_DWORD*)(v12 + 748) = 113;
    *(float*)(v12 + 736) = (float)*(int*)(v12 + 744);
    *(float*)(v12 + 740) = (float)*(int*)(v12 + 748);
    *(_DWORD*)(v12 + 788) = 108;
    *(_DWORD*)(v12 + 792) = 53;
    *(float*)(v12 + 780) = (float)*(int*)(v12 + 788);
    *(float*)(v12 + 784) = (float)*(int*)(v12 + 792);
    *(_DWORD*)(v12 + 832) = 77;
    *(_DWORD*)(v12 + 836) = 113;
    *(float*)(v12 + 824) = (float)*(int*)(v12 + 832);
    *(float*)(v12 + 828) = (float)*(int*)(v12 + 836);
    *(_DWORD*)(v12 + 876) = 29;
    *(_DWORD*)(v12 + 880) = 116;
    *(float*)(v12 + 868) = (float)*(int*)(v12 + 876);
    *(float*)(v12 + 872) = (float)*(int*)(v12 + 880);
    *(_DWORD*)(v12 + 920) = 16;
    *(_DWORD*)(v12 + 924) = 44;
    *(float*)(v12 + 912) = (float)*(int*)(v12 + 920);
    *(float*)(v12 + 916) = (float)*(int*)(v12 + 924);
    *(_DWORD*)(v12 + 964) = 56;
    *(_DWORD*)(v12 + 968) = 108;
    *(float*)(v12 + 956) = (float)*(int*)(v12 + 964);
    *(float*)(v12 + 960) = (float)*(int*)(v12 + 968);
    *(_DWORD*)(v12 + 1008) = 107;
    *(_DWORD*)(v12 + 1012) = 114;
    *(float*)(v12 + 1000) = (float)*(int*)(v12 + 1008);
    *(float*)(v12 + 1004) = (float)*(int*)(v12 + 1012);
    *(_DWORD*)(v12 + 1052) = 12;
    *(_DWORD*)(v12 + 1056) = 41;
    *(float*)(v12 + 1044) = (float)*(int*)(v12 + 1052);
    *(float*)(v12 + 1048) = (float)*(int*)(v12 + 1056);
    *(_DWORD*)(v12 + 1096) = 62;
    *(_DWORD*)(v12 + 1100) = 110;
    *(float*)(v12 + 1088) = (float)*(int*)(v12 + 1096);
    *(float*)(v12 + 1092) = (float)*(int*)(v12 + 1100);
    *(_DWORD*)(v12 + 1140) = 98;
    *(_DWORD*)(v12 + 1144) = 43;
    *(float*)(v12 + 1132) = (float)*(int*)(v12 + 1140);
    *(float*)(v12 + 1136) = (float)*(int*)(v12 + 1144);
    for (l = 0; l < *(_DWORD*)(v12 + 15236); ++l)
    {
        for (m = 0; m < 3; ++m)
        {
            *(_BYTE*)(v12 + 132 * l + 512 + 44 * m + 21) = 0;
            *(_BYTE*)(v12 + 132 * l + 512 + 44 * m + 20) = 0;
            *(_BYTE*)(v12 + 132 * l + 512 + 44 * m + 21) = 0;
            *(_BYTE*)(v12 + 132 * l + 512 + 44 * m + 28) = 0;
            *(_BYTE*)(v12 + 132 * l + 512 + 44 * m + 29) = 0;
        }
    }
    *(_DWORD*)(v12 + 15012) = 14;
    *(_DWORD*)(v12 + 15016) = 38;
    *(_DWORD*)(v12 + 15020) = 103;
    *(_DWORD*)(v12 + 15024) = 34;
    *(_DWORD*)(v12 + 15028) = 40;
    *(_DWORD*)(v12 + 15032) = 44;
    *(_DWORD*)(v12 + 15036) = 104;
    *(_DWORD*)(v12 + 15040) = 33;
    *(_DWORD*)(v12 + 15044) = 46;
    *(_DWORD*)(v12 + 15048) = 45;
    *(_DWORD*)(v12 + 15004) = 4;
    *(_DWORD*)(v12 + 15008) = 12;
    *(_DWORD*)(v12 + 15268) = 128;
    *(_DWORD*)(v12 + 15264) = maybe_allocateMemory(32 * *(_DWORD*)(v12 + 15268));
    for (n = 0; n < *(_DWORD*)(v12 + 15268); ++n)
        *(_BYTE*)(*(_DWORD*)(v12 + 15264) + 32 * n) = 0;
    byte_5CAA1D = 1;
    byte_5CAA28 = 0;
    *(_DWORD*)(v12 + 14972) = 0;
    *(_DWORD*)(v12 + 14976) = 0;
    *(_WORD*)(v12 + 15242) = 0;
    if ((_WORD)dword_6041F2)
        *(_WORD*)(v12 + 15244) = dword_6041F2;
    else
        *(_WORD*)(v12 + 15244) = 150;
    *(_WORD*)(v12 + 15272) = 2;
    *(_DWORD*)(v12 + 15132) = 1100480512;
    *(_DWORD*)(v12 + 15136) = 1100480512;
    *(_DWORD*)(v12 + 15140) = 1099956224;
    *(_DWORD*)(v12 + 15144) = 1102053376;
    *(_DWORD*)(v12 + 15148) = 1103626240;
    *(_DWORD*)(v12 + 15172) = 1091567616;
    *(_DWORD*)(v12 + 15176) = 1091567616;
    *(_DWORD*)(v12 + 15180) = 1090519040;
    *(_DWORD*)(v12 + 15184) = 1094713344;
    *(_DWORD*)(v12 + 15188) = 1097859072;
    *(_DWORD*)(v12 + 15192) = 1065353216;
    *(_DWORD*)(v12 + 15116) = 994352038;
    *(_DWORD*)(v12 + 15120) = 999519420;
    *(_DWORD*)(v12 + 15104) = 1020054733;
    *(_DWORD*)(v12 + 15112) = 1012202996;
    *(_DWORD*)(v12 + 15108) = 1012202996;
    *(_DWORD*)(v12 + 14980) = 1065185444;
    *(_DWORD*)(v12 + 14984) = 1056964608;
    *(_DWORD*)(v12 + 14992) = 1053609165;
    *(_DWORD*)(v12 + 14988) = 1056964608;
    *(_BYTE*)v12 = 1;
    *(_WORD*)(v12 + 15262) = -1;
    *(_DWORD*)(dword_5CAA2C + 32) = 1;
    v7 = (_DWORD*)(a1[4] + 0x8000);
    for (ii = 0; ii < 0x2000; ++ii)
        *--v7 = 0;
    *(_DWORD*)(dword_5CAA2C + 32) = 0;
    return a1;
}
// 4D03AB: using guessed type int __cdecl loadSprite(_DWORD, _DWORD);
// 4E21DA: using guessed type int __cdecl sub_4E21DA(int);
// 56EA26: using guessed type _DWORD __cdecl sub_56EA26(_DWORD, _DWORD, _DWORD, _DWORD);
// 5CAA1D: using guessed type char byte_5CAA1D;
// 5CAA28: using guessed type char byte_5CAA28;
// 5CAA2C: using guessed type int dword_5CAA2C;
// 6041F2: using guessed type int dword_6041F2;
// 6045D4: using guessed type int languageId;
// 667394: using guessed type int loadAllLanguageSpritesAtOnce;

//----- (004E21DA) --------------------------------------------------------
__int16 __cdecl sub_4E21DA(_DWORD* a1)
{
    __int16 result; // ax
    int v2; // esi
    int v3; // esi
    int v4; // eax
    int v5; // [esp-10h] [ebp-74h]
    int v6; // [esp-Ch] [ebp-70h]
    int v7; // [esp-Ch] [ebp-70h]
    int v8; // [esp-Ch] [ebp-70h]
    double X; // [esp+4h] [ebp-60h]
    float v10; // [esp+14h] [ebp-50h]
    float v11; // [esp+18h] [ebp-4Ch]
    float v12; // [esp+1Ch] [ebp-48h]
    float v13; // [esp+20h] [ebp-44h]
    float v14; // [esp+28h] [ebp-3Ch]
    float v15; // [esp+2Ch] [ebp-38h]
    float v16; // [esp+30h] [ebp-34h]
    int ii; // [esp+34h] [ebp-30h]
    __int16 C; // [esp+3Ch] [ebp-28h]
    int v19; // [esp+40h] [ebp-24h]
    int i; // [esp+44h] [ebp-20h]
    int j; // [esp+44h] [ebp-20h]
    int m; // [esp+48h] [ebp-1Ch]
    int k; // [esp+48h] [ebp-1Ch]
    int n; // [esp+4Ch] [ebp-18h]
    int l; // [esp+4Ch] [ebp-18h]
    int v26; // [esp+50h] [ebp-14h]
    int v27; // [esp+54h] [ebp-10h]
    int v28; // [esp+58h] [ebp-Ch]
    int v29; // [esp+5Ch] [ebp-8h]

    result = (__int16)a1;
    v28 = a1[11];
    v26 = 0;
    v29 = 0;
    v27 = 0;
    if (*(_DWORD*)(dword_5CAA2C + 32))
    {
        result = word_60430E;
        if (!word_60430E)
        {
            ++a1[6];
            if ((byte_5CAA28 & 1) != 0)
            {
                byte_5CAA1D = 0;
                byte_5CAA28 &= 0xFEu;
                byte_5CAA28 |= 4u;
                *(_WORD*)(v28 + 15272) = 2;
                if ((byte_5CAA28 & 4) != 0)
                    sub_4D07B5(dword_5A03B4);
            }
            if (byte_5CAA1D != 1)
            {
                v19 = dword_6043C8[word_60431C];
                word_668762 = 1;
                sub_553C3C(*(_WORD*)(v19 + 128));
                word_604312 = 1;
            }
            if (byte_5CAA1D)
            {
                if ((int)++ * (_DWORD*)(v28 + 15256) > 330)
                {
                    *(_DWORD*)(v28 + 15256) = 0;
                    ++* (_DWORD*)(v28 + 15232);
                    sub_4DE324(v28);
                    *(_WORD*)(v28 + 15272) = 0;
                }
                if (byte_5CAA1D == 2 && (byte_622128 & 0x80) != 0)
                {
                    byte_5CAA1D = 0;
                    *(_WORD*)(v28 + 15272) = 2;
                }
            }
            else
            {
                if ((byte_622128 & 0x80) != 0)
                {
                    *(_DWORD*)(v28 + 15096) = -1082130432;
                    v26 = 1;
                }
                else
                {
                    *(_DWORD*)(v28 + 15096) = 0;
                }
                if ((byte_62212B & 0x80) != 0)
                {
                    *(_DWORD*)(v28 + 15100) = -1082130432;
                    v27 = 1;
                }
                if ((byte_62212D & 0x80) != 0)
                {
                    *(_DWORD*)(v28 + 15100) = 1065353216;
                    v29 = 1;
                }
                if ((byte_622130 & 0x80) != 0 && !*(_BYTE*)(v28 + 15124))
                {
                    *(_DWORD*)(v28 + 14976) = 0;
                    *(_BYTE*)(v28 + 15124) = 1;
                }
                if (v29 && v27 || !v29 && !v27)
                    *(_DWORD*)(v28 + 15100) = 0;
                if (v26)
                {
                    if ((byte_5CAA28 & 4) != 0
                        && !*(_WORD*)(v28 + 15272)
                        && *(float*)(v28 + 15128) != 0.0
                        && *(__int16*)(v28 + 15262) == -1)
                    {
                        *(_WORD*)(v28 + 15262) = sub_4D07B5(dword_5A0374);
                    }
                }
                else
                {
                    if (*(__int16*)(v28 + 15262) != -1)
                        sub_57E927(*(_WORD*)(v28 + 15262));
                    *(_WORD*)(v28 + 15262) = -1;
                }
                if (*(float*)(v28 + 15128) != 0.0
                    && (v29 || v27 || *(float*)(v28 + 15096) != 0.0)
                    && *(_WORD*)(v28 + 15272) != 3
                    && v26)
                {
                    for (i = -1; i < 3; ++i)
                    {
                        v6 = rand() % 5 + 5;
                        v16 = (float)*(int*)(v28 + 15008);
                        v15 = (float)*(int*)(v28 + 15004);
                        v14 = (float)i;
                        sub_4D18C9(
                            (__int64)(v15 + *(float*)(v28 + 14956) + v14),
                            (__int64)(v16 + *(float*)(v28 + 14960)),
                            v6,
                            1,
                            v28);
                    }
                }
                if (*(float*)(v28 + 15128) == 0.0 && *(__int16*)(v28 + 15262) != -1)
                {
                    sub_57E927(*(_WORD*)(v28 + 15262));
                    *(_WORD*)(v28 + 15262) = -1;
                }
            }
            if (*(_BYTE*)(v28 + 16) && !((int)Seed % 4))
            {
                for (j = 0; j < 2; ++j)
                {
                    v2 = *(unsigned __int8*)(v28 + 19);
                    v7 = rand() % *(unsigned __int8*)(v28 + 20) + v2;
                    v5 = *(_DWORD*)(v28 + 8 * (*(_DWORD*)(v28 + 15232) % 5) + 15016) + 1;
                    v3 = *(_DWORD*)(v28 + 8 * (*(_DWORD*)(v28 + 15232) % 5) + 15012);
                    v4 = rand() % 2;
                    sub_4D18C9(v3 + v4 + 13, v5, v7, 2, v28);
                }
            }
            sub_4D1CD7(v28);
            switch (*(_WORD*)(v28 + 15272))
            {
            case 0:
                sub_4DF1C2(v28);
                if (sub_4DE747(v28))
                {
                    if (*(_BYTE*)(v28 + 15246))
                        *(_BYTE*)(v28 + 15246) = 0;
                    if (!byte_5CAA1D)
                        --* (_BYTE*)(v28 + 15240);
                    *(_WORD*)(v28 + 15272) = 3;
                    *(_BYTE*)(v28 + 15252) = 5;
                    *(_DWORD*)(v28 + 15248) = 90;
                    if (*(_BYTE*)(v28 + 15240))
                    {
                        for (k = 0; k < *(_DWORD*)(v28 + 48); ++k)
                        {
                            for (l = 0; l < *(_DWORD*)(v28 + 44); ++l)
                            {
                                v8 = rand() % 45 + 45;
                                v11 = (float)*(int*)(v28 + 48);
                                v10 = (float)*(int*)(v28 + 44);
                                sub_4D18C9(
                                    (__int64)(v10 * 0.5) + (__int64)*(float*)(v28 + 14956),
                                    (__int64)(v11 * 0.5) + (__int64)*(float*)(v28 + 14960),
                                    v8,
                                    0,
                                    v28);
                            }
                        }
                    }
                    else
                    {
                        for (m = 0; m < *(_DWORD*)(v28 + 48); ++m)
                        {
                            for (n = 0; n < *(_DWORD*)(v28 + 44); ++n)
                            {
                                v13 = (float)*(int*)(v28 + 48);
                                v12 = (float)*(int*)(v28 + 44);
                                sub_4D18C9(
                                    (__int64)(v12 * 0.5) + (__int64)*(float*)(v28 + 14956),
                                    (__int64)(v13 * 0.5) + (__int64)*(float*)(v28 + 14960),
                                    180,
                                    0,
                                    v28);
                            }
                        }
                    }
                    if ((byte_5CAA28 & 4) != 0)
                        sub_4D07B5(dword_5A0378);
                    if (*(__int16*)(v28 + 15262) != -1)
                        sub_57E927(*(_WORD*)(v28 + 15262));
                    if (!*(_BYTE*)(v28 + 15240)
                        && *(unsigned __int16*)(v28 + 15242) > (int)*(unsigned __int16*)(v28 + 15244))
                    {
                        *(_WORD*)(v28 + 15244) = *(_WORD*)(v28 + 15242);
                        LOWORD(dword_6041F2) = *(_WORD*)(v28 + 15244);
                        if ((dword_6041E0 & 0x1000) == 0)
                        {
                            sub_47641B(12);
                            saveGame(-1, 0);
                        }
                    }
                }
                else
                {
                    sub_4DE897(v28);
                }
                break;
            case 1:
                sub_4DE324(v28);
                *(_WORD*)(v28 + 15272) = 0;
                break;
            case 2:
                *(_WORD*)(v28 + 15242) = 0;
                *(_BYTE*)(v28 + 15240) = 3;
                *(_DWORD*)(v28 + 15232) = 0;
                *(_BYTE*)(v28 + 15246) = 1;
                *(_DWORD*)(v28 + 15152) = *(_DWORD*)(v28 + 15132);
                *(_DWORD*)(v28 + 15156) = *(_DWORD*)(v28 + 15136);
                *(_DWORD*)(v28 + 15160) = *(_DWORD*)(v28 + 15140);
                *(_DWORD*)(v28 + 15164) = *(_DWORD*)(v28 + 15144);
                *(_DWORD*)(v28 + 15168) = *(_DWORD*)(v28 + 15148);
                sub_4DE324(v28);
                *(_WORD*)(v28 + 15272) = 3;
                *(_BYTE*)(v28 + 15252) = 0;
                *(_DWORD*)(v28 + 15248) = 60;
                break;
            case 3:
                -- * (_DWORD*)(v28 + 15248);
                if (*(_BYTE*)(v28 + 15252) == 3)
                {
                    if (*(_DWORD*)(v28 + 15208) == *(_DWORD*)(v28 + 15204))
                    {
                        *(_DWORD*)(v28 + 15248) = -1;
                    }
                    else
                    {
                        C = sub_4D07B5(*(_DWORD*)(v28 + 15216));
                        is_wctype(C, *(_WORD*)(v28 + 15220));
                        sub_57E95F(C, *(_BYTE*)(v28 + 15224));
                        ++* (_DWORD*)(v28 + 15208);
                        ++* (_WORD*)(v28 + 15242);
                    }
                }
                if (*(int*)(v28 + 15248) < 0)
                {
                    *(_DWORD*)(v28 + 15248) = 0;
                    switch (*(_BYTE*)(v28 + 15252))
                    {
                    case 0:
                        *(_WORD*)(v28 + 15272) = 0;
                        break;
                    case 1:
                        *(_WORD*)(v28 + 15272) = 1;
                        break;
                    case 2:
                        X = (double)(*(_DWORD*)(v28 + 15232) / 5);
                        *(_DWORD*)(v28 + 15204) = ((__int64)fabs(X) + 1)
                            * (__int64)((*(float*)(v28 + 4 * (*(_DWORD*)(v28 + 15232) % 5) + 15152)
                                - *(float*)(v28 + 15196))
                                * 1.0);
                        *(_BYTE*)(v28 + 15252) = 3;
                        *(_DWORD*)(v28 + 15248) = 100000;
                        *(_DWORD*)(v28 + 15208) = 0;
                        break;
                    case 3:
                        *(_BYTE*)(v28 + 15252) = 4;
                        *(_DWORD*)(v28 + 15248) = 90;
                        break;
                    case 4:
                        *(_BYTE*)(v28 + 15252) = 1;
                        *(_DWORD*)(v28 + 15248) = 60;
                        ++* (_DWORD*)(v28 + 15232);
                        *(_BYTE*)(v28 + 15246) = 1;
                        if (!(*(_DWORD*)(v28 + 15232) % *(_DWORD*)(v28 + 15236)))
                        {
                            for (ii = 0; ii < 5; ++ii)
                            {
                                *(float*)(v28 + 4 * ii + 15152) = *(float*)(v28 + 4 * ii + 15152) - *(float*)(v28 + 15192);
                                if (*(float*)(v28 + 4 * ii + 15152) < (double)*(float*)(v28 + 4 * ii + 15172))
                                    *(_DWORD*)(v28 + 4 * ii + 15152) = *(_DWORD*)(v28 + 4 * ii + 15172);
                            }
                        }
                        break;
                    case 5:
                        if (*(_BYTE*)(v28 + 15240))
                        {
                            *(_BYTE*)(v28 + 15252) = 1;
                            *(_DWORD*)(v28 + 15248) = 60;
                        }
                        else
                        {
                            *(_BYTE*)(v28 + 15252) = 6;
                            *(_DWORD*)(v28 + 15248) = 90;
                        }
                        break;
                    case 6:
                        *(_DWORD*)(v28 + 15256) = 0;
                        *(_DWORD*)(v28 + 15248) = rand() % 60 + 120;
                        byte_5CAA1D = 2;
                        *(_WORD*)(v28 + 15272) = 2;
                        break;
                    default:
                        goto LABEL_112;
                    }
                }
                break;
            default:
                break;
            }
        LABEL_112:
            if ((byte_62207C & 0x80) != 0 && (byte_5CAA28 & 4) != 0)
            {
                byte_5CAA1D = 1;
                byte_5CAA28 |= 2u;
                byte_5CAA28 &= 0xFBu;
                *(_WORD*)(v28 + 15272) = 2;
                if (*(__int16*)(v28 + 15262) != -1)
                    sub_57E927(*(_WORD*)(v28 + 15262));
                *(_WORD*)(v28 + 15262) = -1;
            }
            *(_DWORD*)(v28 + 14964) = *(_DWORD*)(v28 + 14956);
            *(_DWORD*)(v28 + 14968) = *(_DWORD*)(v28 + 14960);
            *(_DWORD*)(v28 + 14996) = *(_DWORD*)(v28 + 14972);
            *(_DWORD*)(v28 + 15000) = *(_DWORD*)(v28 + 14976);
            result = sub_4D49B4(a1, v28);
        }
    }
    return result;
}
// 5A03B4: using guessed type int dword_5A03B4;
// 5CAA1D: using guessed type char byte_5CAA1D;
// 5CAA28: using guessed type char byte_5CAA28;
// 5CAA2C: using guessed type int dword_5CAA2C;
// 6041E0: using guessed type int dword_6041E0;
// 6041F2: using guessed type int dword_6041F2;
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

//----- (004DE324) --------------------------------------------------------
int __cdecl sub_4DE324(int a1)
{
    int v2; // [esp+4h] [ebp-20h]
    int v3[4]; // [esp+8h] [ebp-1Ch]
    int k; // [esp+18h] [ebp-Ch]
    int j; // [esp+1Ch] [ebp-8h]
    int i; // [esp+20h] [ebp-4h]

    *(float*)(a1 + 14956) = (float)*(int*)(a1 + 8 * (*(_DWORD*)(a1 + 15232) % 5) + 15056);
    *(float*)(a1 + 14960) = (float)*(int*)(a1 + 8 * (*(_DWORD*)(a1 + 15232) % 5) + 15060);
    *(_DWORD*)(a1 + 14964) = *(_DWORD*)(a1 + 14956);
    *(_DWORD*)(a1 + 14968) = *(_DWORD*)(a1 + 14960);
    *(_DWORD*)(a1 + 14996) = *(_DWORD*)(a1 + 14972);
    *(_DWORD*)(a1 + 15000) = *(_DWORD*)(a1 + 14976);
    *(_DWORD*)(a1 + 14972) = 0;
    *(_DWORD*)(a1 + 14976) = 0;
    *(_DWORD*)(a1 + 15096) = 0;
    *(_DWORD*)(a1 + 15100) = 0;
    *(_BYTE*)(a1 + 15124) = 0;
    if (*(_BYTE*)(a1 + 15246))
        *(_BYTE*)(a1 + 1304) = 3;
    if (*(_BYTE*)(a1 + 1304) == 3)
    {
        *(_DWORD*)(a1 + 15128) = *(_DWORD*)(a1 + 4 * (*(_DWORD*)(a1 + 15232) % 5) + 15152);
        *(_DWORD*)(a1 + 15196) = 0;
    }
    else
    {
        *(_DWORD*)(a1 + 15128) = *(_DWORD*)(a1 + 15200);
        *(float*)(a1 + 15196) = *(float*)(a1 + 4 * (*(_DWORD*)(a1 + 15232) % 5) + 15152) - *(float*)(a1 + 15128);
    }
    *(_BYTE*)(a1 + 15052) = -1;
    *(_BYTE*)(a1 + 15228) = 0;
    sub_4D204B(a1);
    for (i = 0; i < 3; ++i)
    {
        if (*(_BYTE*)(a1 + 15246) || !*(_BYTE*)(a1 + 44 * i + 1193))
        {
            *(_DWORD*)(a1 + 44 * i + 1176) = *(_DWORD*)(a1 + 132 * (*(_DWORD*)(a1 + 15232) % 5) + 512 + 44 * i + 4);
            *(_DWORD*)(a1 + 44 * i + 1180) = *(_DWORD*)(a1 + 132 * (*(_DWORD*)(a1 + 15232) % 5) + 512 + 44 * i + 8);
            *(_DWORD*)(a1 + 44 * i + 1184) = (__int64)*(float*)(a1 + 132 * (*(_DWORD*)(a1 + 15232) % 5) + 512 + 44 * i + 4);
            *(_DWORD*)(a1 + 44 * i + 1188) = (__int64)*(float*)(a1 + 132 * (*(_DWORD*)(a1 + 15232) % 5) + 512 + 44 * i + 8);
            *(_BYTE*)(a1 + 44 * i + 1192) = 0;
            *(_BYTE*)(a1 + 44 * i + 1193) = 0;
            *(_BYTE*)(a1 + 44 * i + 1200) = 0;
            *(_BYTE*)(a1 + 44 * i + 1201) = 0;
            *(_DWORD*)(a1 + 44 * i + 1196) = rand() % 40 + 80;
            *(_DWORD*)(a1 + 44 * i + 1212) = rand() % 90 + 60;
            if (*(_BYTE*)(a1 + 15246))
            {
                for (j = 0; j < 1024; ++j)
                {
                    v2 = 0;
                    *(_BYTE*)(a1 + 44 * i + 1172) = rand() % 5;
                    v3[i] = *(unsigned __int8*)(a1 + 44 * i + 1172);
                    for (k = 0; k < i; ++k)
                    {
                        if (*(unsigned __int8*)(a1 + 44 * i + 1172) == v3[k])
                            v2 = 1;
                    }
                    if (!v2)
                        break;
                }
            }
        }
    }
    return sub_4DE22B(a1);
}

//----- (004D18C9) --------------------------------------------------------
void __cdecl sub_4D18C9(int a1, int a2, int a3, int a4, int a5)
{
    char v5; // al
    char v6; // bl
    float v7; // [esp+4h] [ebp-3Ch]
    float v8; // [esp+8h] [ebp-38h]
    float v9; // [esp+Ch] [ebp-34h]
    float v10; // [esp+10h] [ebp-30h]
    float v11; // [esp+14h] [ebp-2Ch]
    float v12; // [esp+18h] [ebp-28h]
    int v13; // [esp+1Ch] [ebp-24h]
    int i; // [esp+20h] [ebp-20h]
    int v15; // [esp+24h] [ebp-1Ch]
    float v16; // [esp+28h] [ebp-18h]
    float v17; // [esp+34h] [ebp-Ch]

    v13 = 1;
    for (i = 0; i < *(_DWORD*)(a5 + 15268); ++i)
    {
        if (!*(_BYTE*)(*(_DWORD*)(a5 + 15264) + 32 * i))
        {
            v13 = 0;
            v15 = i;
            break;
        }
    }
    if (!v13)
    {
        *(_BYTE*)(*(_DWORD*)(a5 + 15264) + 32 * v15) = 1;
        if (a4)
        {
            if (a4 == 1)
            {
                *(_DWORD*)(*(_DWORD*)(a5 + 15264) + 32 * v15 + 24) = 0;
                v5 = rand() % 16;
                *(_WORD*)(*(_DWORD*)(a5 + 15264) + 32 * v15 + 30) = 32 * ((unsigned __int8)(v5 + 16) / 2)
                    + ((unsigned __int8)(v5 + 16) << 10);
                dword_6AD840 = (unsigned __int16)(20077 * dword_6AD840 + 12345);
                v10 = (float)dword_6AD840;
                *(float*)(*(_DWORD*)(a5 + 15264) + 32 * v15 + 12) = (v10 * 0.000030517578 - 1.0) / 8.0
                    + *(float*)(a5 + 14972);
                dword_6AD840 = (unsigned __int16)(20077 * dword_6AD840 + 12345);
                v9 = (float)dword_6AD840;
                *(float*)(*(_DWORD*)(a5 + 15264) + 32 * v15 + 16) = *(float*)(a5 + 14976) - v9 * 0.000015258789;
                *(_BYTE*)(*(_DWORD*)(a5 + 15264) + 32 * v15 + 29) = 1;
            }
            else if (a4 == 2)
            {
                v6 = *(_BYTE*)(a5 + 17);
                *(_BYTE*)(*(_DWORD*)(a5 + 15264) + 32 * v15 + 28) = rand() % *(unsigned __int8*)(a5 + 18) + v6;
                *(_DWORD*)(*(_DWORD*)(a5 + 15264) + 32 * v15 + 24) = 1;
                dword_6AD840 = (unsigned __int16)(20077 * dword_6AD840 + 12345);
                v8 = (float)dword_6AD840;
                *(float*)(*(_DWORD*)(a5 + 15264) + 32 * v15 + 12) = (v8 * 0.000030517578 - 1.0) * *(float*)(a5 + 12);
                dword_6AD840 = (unsigned __int16)(20077 * dword_6AD840 + 12345);
                v7 = (float)dword_6AD840;
                *(float*)(*(_DWORD*)(a5 + 15264) + 32 * v15 + 16) = -(v7 * 0.000015258789 * *(float*)(a5 + 8)
                    + *(float*)(a5 + 4));
                *(_BYTE*)(*(_DWORD*)(a5 + 15264) + 32 * v15 + 29) = 2;
            }
        }
        else
        {
            *(_DWORD*)(*(_DWORD*)(a5 + 15264) + 32 * v15 + 24) = 0;
            do
            {
                dword_6AD840 = (unsigned __int16)(20077 * dword_6AD840 + 12345);
                v12 = (float)dword_6AD840;
                v17 = (v12 * 0.000030517578 - 1.0) * 3.0 + 1.0;
                dword_6AD840 = (unsigned __int16)(20077 * dword_6AD840 + 12345);
                v11 = (float)dword_6AD840;
                v16 = (v11 * 0.000030517578 - 1.0) * 3.0 + 1.0;
            } while (v17 * v17 + v16 * v16 > 2.0);
            *(float*)(*(_DWORD*)(a5 + 15264) + 32 * v15 + 12) = v17;
            *(float*)(*(_DWORD*)(a5 + 15264) + 32 * v15 + 16) = v16;
            *(_BYTE*)(*(_DWORD*)(a5 + 15264) + 32 * v15 + 29) = 0;
        }
        *(float*)(*(_DWORD*)(a5 + 15264) + 32 * v15 + 4) = (float)a1;
        *(float*)(*(_DWORD*)(a5 + 15264) + 32 * v15 + 8) = (float)a2;
        *(_DWORD*)(*(_DWORD*)(a5 + 15264) + 32 * v15 + 20) = a3;
    }
}
// 4D192E: variable 'v15' is possibly undefined
// 6AD840: using guessed type int dword_6AD840;

//----- (004D1CD7) --------------------------------------------------------
int __cdecl sub_4D1CD7(int a1)
{
    int result; // eax
    unsigned __int8 v2; // [esp+8h] [ebp-18h]
    int i; // [esp+Ch] [ebp-14h]
    unsigned __int8 v4; // [esp+10h] [ebp-10h]
    unsigned __int8 v5; // [esp+14h] [ebp-Ch]
    char v6; // [esp+18h] [ebp-8h]
    unsigned __int16 v7; // [esp+1Ch] [ebp-4h]

    for (i = 0; i < *(_DWORD*)(a1 + 15268); ++i)
    {
        if (*(_BYTE*)(*(_DWORD*)(a1 + 15264) + 32 * i))
        {
            if (*(_DWORD*)(*(_DWORD*)(a1 + 15264) + 32 * i + 24) == 1)
            {
                if (!((int)Seed % *(unsigned __int8*)(a1 + 1)))
                {
                    v7 = *(_WORD*)(*(_DWORD*)(a1 + 12 * (*(_DWORD*)(a1 + 15232) % 5) + 124)
                        + 2 * (__int64)*(float*)(*(_DWORD*)(a1 + 15264) + 32 * i + 4)
                        + 2
                        * *(_DWORD*)(a1 + 12 * (*(_DWORD*)(a1 + 15232) % 5) + 116)
                        * (__int64)(*(float*)(*(_DWORD*)(a1 + 15264) + 32 * i + 8) - 12.0)
                        - 8);
                    v6 = *(_BYTE*)(*(_DWORD*)(a1 + 15264) + 32 * i + 28);
                    v4 = v6 + (((int)v7 >> 10) & 0x1F);
                    v2 = v6 + (((int)v7 >> 5) & 0x1F);
                    v5 = v6 + (v7 & 0x1F);
                    if (!((int)Seed % *(unsigned __int8*)(a1 + 1)))
                        --v6;
                    *(_BYTE*)(*(_DWORD*)(a1 + 15264) + 32 * i + 28) = v6;
                    if (!v6)
                        *(_BYTE*)(*(_DWORD*)(a1 + 15264) + 32 * i) = 0;
                    if (v4 > 0x1Fu)
                        v4 = 31;
                    if (v2 > 0x1Fu)
                        v2 = 31;
                    if (v5 > 0x1Fu)
                        v5 = 31;
                    *(_WORD*)(*(_DWORD*)(a1 + 15264) + 32 * i + 30) = v5 + 32 * v2 + (v4 << 10);
                }
            }
            else
            {
                *(float*)(*(_DWORD*)(a1 + 15264) + 32 * i + 16) = *(float*)(*(_DWORD*)(a1 + 15264) + 32 * i + 16)
                    + 0.029999999;
                *(float*)(*(_DWORD*)(a1 + 15264) + 32 * i + 12) = *(float*)(*(_DWORD*)(a1 + 15264) + 32 * i + 12)
                    * 0.99900001;
                *(float*)(*(_DWORD*)(a1 + 15264) + 32 * i + 16) = *(float*)(*(_DWORD*)(a1 + 15264) + 32 * i + 16)
                    * 0.99900001;
            }
            *(float*)(*(_DWORD*)(a1 + 15264) + 32 * i + 4) = *(float*)(*(_DWORD*)(a1 + 15264) + 32 * i + 4)
                + *(float*)(*(_DWORD*)(a1 + 15264) + 32 * i + 12);
            *(float*)(*(_DWORD*)(a1 + 15264) + 32 * i + 8) = *(float*)(*(_DWORD*)(a1 + 15264) + 32 * i + 8)
                + *(float*)(*(_DWORD*)(a1 + 15264) + 32 * i + 16);
            if ((int)-- * (_DWORD*)(*(_DWORD*)(a1 + 15264) + 32 * i + 20) <= 0)
                *(_BYTE*)(*(_DWORD*)(a1 + 15264) + 32 * i) = 0;
        }
        result = i + 1;
    }
    return result;
}

//----- (004DF1C2) --------------------------------------------------------
void __cdecl sub_4DF1C2(int a1)
{
    double v1; // st7
    float v2; // [esp+Ch] [ebp-44h]
    float v3; // [esp+14h] [ebp-3Ch]
    float v4; // [esp+18h] [ebp-38h]
    float v5; // [esp+1Ch] [ebp-34h]
    float v6; // [esp+24h] [ebp-2Ch]
    float v7; // [esp+2Ch] [ebp-24h]
    float v8; // [esp+34h] [ebp-1Ch]
    float v9; // [esp+3Ch] [ebp-14h]
    float v10; // [esp+40h] [ebp-10h]
    float v11; // [esp+44h] [ebp-Ch]
    float v12; // [esp+48h] [ebp-8h]

    if (!byte_5CAA1D)
    {
        *(float*)(a1 + 14976) = *(float*)(a1 + 14976) + *(float*)(a1 + 15116);
        if (*(char*)(a1 + 15052) != -1)
            *(float*)(a1 + 14976) = *(float*)(a1 + 14976) + *(float*)(a1 + 15120);
        if (*(float*)(a1 + 15128) != 0.0)
        {
            if (*(char*)(a1 + 15052) == -1)
                v1 = *(float*)(a1 + 15096) * *(float*)(a1 + 15108) + *(float*)(a1 + 14976);
            else
                v1 = *(float*)(a1 + 15096) * *(float*)(a1 + 15112) + *(float*)(a1 + 14976);
            *(float*)(a1 + 14976) = v1;
        }
        *(float*)(a1 + 14972) = *(float*)(a1 + 15100) * *(float*)(a1 + 15104) + *(float*)(a1 + 14972);
        if (-*(float*)(a1 + 14984) > *(float*)(a1 + 14972))
            *(float*)(a1 + 14972) = -*(float*)(a1 + 14984);
        if (*(float*)(a1 + 14972) > (double)*(float*)(a1 + 14984))
            *(_DWORD*)(a1 + 14972) = *(_DWORD*)(a1 + 14984);
        if (*(char*)(a1 + 15052) == -1)
        {
            if (-*(float*)(a1 + 14992) > *(float*)(a1 + 14976))
                *(float*)(a1 + 14976) = -*(float*)(a1 + 14992);
            if (*(float*)(a1 + 14976) > (double)*(float*)(a1 + 14992))
                *(_DWORD*)(a1 + 14976) = *(_DWORD*)(a1 + 14992);
        }
        else
        {
            if (-*(float*)(a1 + 14988) > *(float*)(a1 + 14976))
                *(float*)(a1 + 14976) = -*(float*)(a1 + 14988);
            if (*(float*)(a1 + 14976) > (double)*(float*)(a1 + 14988))
                *(_DWORD*)(a1 + 14976) = *(_DWORD*)(a1 + 14988);
        }
        *(float*)(a1 + 14972) = *(float*)(a1 + 14972) * *(float*)(a1 + 14980);
        *(float*)(a1 + 14960) = *(float*)(a1 + 14960) + *(float*)(a1 + 14976);
        *(float*)(a1 + 14956) = *(float*)(a1 + 14956) + *(float*)(a1 + 14972);
        if (*(float*)(a1 + 15128) != 0.0)
        {
            if (*(char*)(a1 + 15052) == -1)
            {
                v10 = fabs(*(float*)(a1 + 15096) * *(float*)(a1 + 15108));
                *(float*)(a1 + 15128) = *(float*)(a1 + 15128) - v10;
                v9 = fabs(*(float*)(a1 + 15096) * *(float*)(a1 + 15108));
                *(float*)(a1 + 15196) = v9 + *(float*)(a1 + 15196);
            }
            else
            {
                v12 = fabs(*(float*)(a1 + 15096) * *(float*)(a1 + 15112));
                *(float*)(a1 + 15128) = *(float*)(a1 + 15128) - v12;
                v11 = fabs(*(float*)(a1 + 15096) * *(float*)(a1 + 15112));
                *(float*)(a1 + 15196) = v11 + *(float*)(a1 + 15196);
            }
        }
        if (*(float*)(a1 + 15196) > (double)*(float*)(a1 + 4 * (*(_DWORD*)(a1 + 15232) % 5) + 15152))
            *(_DWORD*)(a1 + 15196) = *(_DWORD*)(a1 + 4 * (*(_DWORD*)(a1 + 15232) % 5) + 15152);
        if (*(float*)(a1 + 15128) < 0.0)
            *(_DWORD*)(a1 + 15128) = 0;
        if (*(char*)(a1 + 15052) != -1)
        {
            v8 = (float)(*(_DWORD*)(a1 + 8 * (*(_DWORD*)(a1 + 15232) % 5) + 15012) - *(unsigned __int8*)(a1 + 28));
            if (*(float*)(a1 + 14956) + 4.0 >= v8)
            {
                v7 = (float)(*(unsigned __int8*)(a1 + 28)
                    + *(_DWORD*)(a1 + 296)
                    + *(_DWORD*)(a1 + 8 * (*(_DWORD*)(a1 + 15232) % 5) + 15012));
                if (*(float*)(a1 + 14956) + 4.0 < v7)
                {
                    v6 = (float)(*(_DWORD*)(a1 + 8 * (*(_DWORD*)(a1 + 15232) % 5) + 15016) - 8);
                    if (*(float*)(a1 + 14960) + 12.0 >= v6)
                    {
                        v5 = (float)(*(_DWORD*)(a1 + 300) + *(_DWORD*)(a1 + 8 * (*(_DWORD*)(a1 + 15232) % 5) + 15016));
                        if (*(float*)(a1 + 14960) + 12.0 < v5)
                        {
                            *(_BYTE*)(a1 + 44 * *(char*)(a1 + 15052) + 1192) = 0;
                            *(_BYTE*)(a1 + 44 * *(char*)(a1 + 15052) + 1201) = 1;
                            *(_DWORD*)(a1 + 44 * *(char*)(a1 + 15052) + 1204) = *(_DWORD*)(a1 + 1360);
                            *(float*)(a1 + 44 * *(char*)(a1 + 15052) + 1176) = *(float*)(a1 + 14956) + 1.0;
                            *(float*)(a1 + 44 * *(char*)(a1 + 15052) + 1180) = *(float*)(a1 + 14960) + 10.0;
                            v4 = (float)*(int*)(a1 + 296);
                            v3 = (float)*(int*)(a1 + 176);
                            v2 = (float)(int)((__int64)(v4 * 0.5)
                                + *(_DWORD*)(a1 + 8 * (*(_DWORD*)(a1 + 15232) % 5) + 15012)
                                - (__int64)(v3 * 0.5));
                            if ((int)(__int64)(v2 - *(float*)(a1 + 44 * *(char*)(a1 + 15052) + 1176)) >= 0)
                                *(_DWORD*)(a1 + 44 * *(char*)(a1 + 15052) + 1208) = *(_DWORD*)(a1 + 1364);
                            else
                                *(float*)(a1 + 44 * *(char*)(a1 + 15052) + 1208) = -*(float*)(a1 + 1364);
                            *(_BYTE*)(a1 + 15052) = -1;
                            *(_DWORD*)(a1 + 15200) = *(_DWORD*)(a1 + 15128);
                        }
                    }
                }
            }
        }
    }
}
// 5CAA1D: using guessed type char byte_5CAA1D;

//----- (004DE747) --------------------------------------------------------
int __cdecl sub_4DE747(int a1)
{
    float v2; // [esp+8h] [ebp-18h]
    float v3; // [esp+Ch] [ebp-14h]
    int i; // [esp+10h] [ebp-10h]
    int j; // [esp+14h] [ebp-Ch]

    if (byte_5CAA1D)
        return 0;
    if (*(float*)(a1 + 14956) < 4.0)
        return 1;
    v3 = (float)*(int*)(a1 + 44);
    if (v3 + *(float*)(a1 + 14956) > 124.0)
        return 1;
    if (*(float*)(a1 + 14960) < 12.0)
        return 1;
    v2 = (float)*(int*)(a1 + 48);
    if (v2 + *(float*)(a1 + 14960) > 124.0)
        return 1;
    for (i = 0; i < *(_DWORD*)(a1 + 48); ++i)
    {
        for (j = 0; j < *(_DWORD*)(a1 + 44); ++j)
        {
            if ((*(_BYTE*)(a1
                + j
                + 120 * (__int64)(*(float*)(a1 + 14960) - 12.0)
                + (__int64)(*(float*)(a1 + 14956) - 4.0)
                + 120 * i
                + 1368) & *(_BYTE*)(a1 + j + *(_DWORD*)(a1 + 44) * i + 14808)) != 0)
                return 1;
        }
    }
    return 0;
}
// 5CAA1D: using guessed type char byte_5CAA1D;

//----- (004DE897) --------------------------------------------------------
void __cdecl sub_4DE897(int a1)
{
    __int16 v1; // si
    int v2; // eax
    __int16 v3; // si
    int v4; // eax
    float v5; // [esp+8h] [ebp-64h]
    float v6; // [esp+10h] [ebp-5Ch]
    float v7; // [esp+18h] [ebp-54h]
    float v8; // [esp+20h] [ebp-4Ch]
    float v9; // [esp+2Ch] [ebp-40h]
    float v10; // [esp+34h] [ebp-38h]
    float v11; // [esp+3Ch] [ebp-30h]
    float v12; // [esp+40h] [ebp-2Ch]
    float v13; // [esp+44h] [ebp-28h]
    float v14; // [esp+48h] [ebp-24h]
    float v15; // [esp+50h] [ebp-1Ch]
    float v16; // [esp+54h] [ebp-18h]
    float v17; // [esp+58h] [ebp-14h]
    float v18; // [esp+5Ch] [ebp-10h]
    float v19; // [esp+60h] [ebp-Ch]
    __int16 C; // [esp+64h] [ebp-8h]
    __int16 Ca; // [esp+64h] [ebp-8h]
    int i; // [esp+68h] [ebp-4h]
    int j; // [esp+68h] [ebp-4h]

    for (i = 0; i < 3; ++i)
    {
        if (*(_DWORD*)(a1 + 44 * i + 1196) != -1 && (int)-- * (_DWORD*)(a1 + 44 * i + 1196) <= 0)
            *(_DWORD*)(a1 + 44 * i + 1196) = 0;
        if (!*(_BYTE*)(a1 + 44 * i + 1193) && !*(_BYTE*)(a1 + 44 * i + 1192))
        {
            if (!*(_DWORD*)(a1 + 44 * i + 1196))
            {
                *(_DWORD*)(a1 + 44 * i + 1196) = -1;
                *(_BYTE*)(a1 + 44 * i + 1200) = 1;
                *(_DWORD*)(a1 + 44 * i + 1204) = *(_DWORD*)(a1 + 1360);
                if ((byte_5CAA28 & 4) != 0)
                {
                    C = sub_4D07B5(*(_DWORD*)(a1 + 4 * *(unsigned __int8*)(a1 + 44 * i + 1172) + 1328));
                    v1 = *(_WORD*)(a1 + 2 * *(unsigned __int8*)(a1 + 44 * i + 1172) + 1348);
                    v2 = rand();
                    is_wctype(C, v2 % *(__int16*)(a1 + 1358) + v1);
                }
            }
            if (*(_BYTE*)(a1 + 44 * i + 1200))
            {
                *(float*)(a1 + 44 * i + 1180) = *(float*)(a1 + 44 * i + 1180) - *(float*)(a1 + 44 * i + 1204);
                *(float*)(a1 + 44 * i + 1204) = *(float*)(a1 + 44 * i + 1204) + -0.40000001;
                v19 = (float)*(int*)(a1 + 44 * i + 1188);
                if (*(float*)(a1 + 44 * i + 1180) >= (double)v19)
                {
                    *(_BYTE*)(a1 + 44 * i + 1200) = 0;
                    *(float*)(a1 + 44 * i + 1180) = (float)*(int*)(a1 + 44 * i + 1188);
                    *(_DWORD*)(a1 + 44 * i + 1196) = rand() % 40 + 50;
                }
            }
            if (*(_BYTE*)(a1 + 44 * i + 1201))
            {
                if (!*(_BYTE*)(a1 + 15228))
                {
                    *(float*)(a1 + 44 * i + 1180) = *(float*)(a1 + 44 * i + 1180) - *(float*)(a1 + 44 * i + 1204);
                    *(float*)(a1 + 44 * i + 1204) = *(float*)(a1 + 44 * i + 1204) + -0.40000001;
                    *(float*)(a1 + 44 * i + 1176) = *(float*)(a1 + 44 * i + 1176) + *(float*)(a1 + 44 * i + 1208);
                    if (*(float*)(a1 + 44 * i + 1208) >= 0.0)
                    {
                        v14 = (float)*(int*)(a1 + 296);
                        v13 = (float)*(int*)(a1 + 176);
                        if ((__int64)*(float*)(a1 + 44 * i + 1176) > (int)((__int64)(v14 * 0.5)
                            + *(_DWORD*)(a1
                                + 8 * (*(_DWORD*)(a1 + 15232) % 5)
                                + 15012)
                            - (__int64)(v13 * 0.5)))
                        {
                            *(_DWORD*)(a1 + 44 * i + 1208) = 0;
                            v12 = (float)*(int*)(a1 + 296);
                            v11 = (float)*(int*)(a1 + 176);
                            *(float*)(a1 + 44 * i + 1176) = (float)(int)((__int64)(v12 * 0.5)
                                + *(_DWORD*)(a1 + 8 * (*(_DWORD*)(a1 + 15232) % 5) + 15012)
                                - (__int64)(v11 * 0.5));
                        }
                    }
                    else
                    {
                        v18 = (float)*(int*)(a1 + 296);
                        v17 = (float)*(int*)(a1 + 176);
                        if ((__int64)*(float*)(a1 + 44 * i + 1176) < (int)((__int64)(v18 * 0.5)
                            + *(_DWORD*)(a1
                                + 8 * (*(_DWORD*)(a1 + 15232) % 5)
                                + 15012)
                            - (__int64)(v17 * 0.5)))
                        {
                            *(_DWORD*)(a1 + 44 * i + 1208) = 0;
                            v16 = (float)*(int*)(a1 + 296);
                            v15 = (float)*(int*)(a1 + 176);
                            *(float*)(a1 + 44 * i + 1176) = (float)(int)((__int64)(v16 * 0.5)
                                + *(_DWORD*)(a1 + 8 * (*(_DWORD*)(a1 + 15232) % 5) + 15012)
                                - (__int64)(v15 * 0.5));
                        }
                    }
                }
                v10 = (float)*(int*)(a1 + 180);
                v9 = (float)(*(_DWORD*)(a1 + 300) + *(_DWORD*)(a1 + 8 * (*(_DWORD*)(a1 + 15232) % 5) + 15016));
                if (v10 + *(float*)(a1 + 44 * i + 1180) > v9)
                {
                    if ((byte_5CAA28 & 4) != 0)
                    {
                        Ca = sub_4D07B5(*(_DWORD*)(a1 + 4 * *(unsigned __int8*)(a1 + 44 * i + 1172) + 1308));
                        v3 = *(_WORD*)(a1 + 2 * *(unsigned __int8*)(a1 + 44 * i + 1172) + 1348);
                        v4 = rand();
                        is_wctype(Ca, v4 % *(__int16*)(a1 + 1358) + v3);
                    }
                    *(_BYTE*)(a1 + 15228) = 50;
                    *(_DWORD*)(a1 + 44 * i + 1204) = 0;
                    *(float*)(a1 + 44 * i + 1180) = (float)(*(_DWORD*)(a1 + 300)
                        + *(_DWORD*)(a1 + 8 * (*(_DWORD*)(a1 + 15232) % 5) + 15016)
                        - *(_DWORD*)(a1 + 180));
                    if (*(_BYTE*)(a1 + 1304) == 1)
                    {
                        *(_WORD*)(a1 + 15272) = 3;
                        *(_BYTE*)(a1 + 15252) = 2;
                        *(_DWORD*)(a1 + 15248) = 60;
                        *(_WORD*)(a1 + 15242) += 10;
                    }
                }
                if (*(_BYTE*)(a1 + 15228))
                {
                    if (!-- * (_BYTE*)(a1 + 15228))
                    {
                        --* (_BYTE*)(a1 + 1304);
                        ++* (_WORD*)(a1 + 15242);
                        *(_BYTE*)(a1 + 44 * i + 1193) = 1;
                        if (!*(_BYTE*)(a1 + 1304))
                        {
                            *(_WORD*)(a1 + 15272) = 3;
                            *(_BYTE*)(a1 + 15252) = 2;
                            *(_DWORD*)(a1 + 15248) = 90;
                            *(_WORD*)(a1 + 15242) += 10;
                        }
                        *(_BYTE*)(a1 + 44 * i + 1201) = 0;
                    }
                }
            }
        }
    }
    if (*(char*)(a1 + 15052) == -1)
    {
        for (j = 0; j < 3; ++j)
        {
            if (!*(_BYTE*)(a1 + 44 * j + 1193))
            {
                if (*(_BYTE*)(a1 + 44 * j + 1200))
                {
                    if (*(float*)(a1 + 44 * j + 1204) < 0.0)
                    {
                        v8 = (float)(__int64)*(float*)(a1 + 44 * j + 1176);
                        if (*(float*)(a1 + 14956) + 4.0 >= v8)
                        {
                            v7 = (float)(int)(*(_DWORD*)(a1 + 176) + (__int64)*(float*)(a1 + 44 * j + 1176));
                            if (*(float*)(a1 + 14956) + 4.0 < v7)
                            {
                                v6 = (float)(__int64)*(float*)(a1 + 44 * j + 1180);
                                if (*(float*)(a1 + 14960) + 12.0 >= v6)
                                {
                                    v5 = (float)(int)(*(_DWORD*)(a1 + 180) + (__int64)*(float*)(a1 + 44 * j + 1180));
                                    if (*(float*)(a1 + 14960) + 12.0 < v5)
                                    {
                                        *(_BYTE*)(a1 + 44 * j + 1192) = 1;
                                        *(_BYTE*)(a1 + 15052) = j;
                                        *(_BYTE*)(a1 + 44 * j + 1200) = 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
// 5CAA28: using guessed type char byte_5CAA28;

//----- (004D49B4) --------------------------------------------------------
__int16 __cdecl sub_4D49B4(_DWORD* a1, int a2)
{
    int v2; // eax
    int v4; // [esp-10h] [ebp-40h]
    int v5; // [esp-Ch] [ebp-3Ch]
    int v6; // [esp-8h] [ebp-38h]
    float v7; // [esp+4h] [ebp-2Ch]
    int v8; // [esp+8h] [ebp-28h]
    signed int v9; // [esp+Ch] [ebp-24h]
    int* v10; // [esp+10h] [ebp-20h]
    int i; // [esp+20h] [ebp-10h]
    int j; // [esp+20h] [ebp-10h]
    int k; // [esp+20h] [ebp-10h]
    int jj; // [esp+20h] [ebp-10h]
    int kk; // [esp+20h] [ebp-10h]
    int ll; // [esp+20h] [ebp-10h]
    int mm; // [esp+20h] [ebp-10h]
    int v18; // [esp+20h] [ebp-10h]
    int l; // [esp+24h] [ebp-Ch]
    int n; // [esp+24h] [ebp-Ch]
    int v21; // [esp+24h] [ebp-Ch]
    int m; // [esp+28h] [ebp-8h]
    int ii; // [esp+28h] [ebp-8h]
    int v24; // [esp+28h] [ebp-8h]
    int v25; // [esp+28h] [ebp-8h]
    _DWORD* v26; // [esp+2Ch] [ebp-4h]

    v26 = (_DWORD*)(a1[4] + 0x8000);
    for (i = 0; i < 0x2000; ++i)
        *--v26 = 0;
    sub_4D05E6(a1, 4, 12, (int*)(a2 + 12 * (*(_DWORD*)(a2 + 15232) % 5) + 116));
    sub_4D05E6(
        a1,
        *(_DWORD*)(a2 + 8 * (*(_DWORD*)(a2 + 15232) % 5) + 15012),
        *(_DWORD*)(a2 + 8 * (*(_DWORD*)(a2 + 15232) % 5) + 15016),
        (int*)(a2 + 296));
    if (*(_WORD*)(a2 + 15272) != 3 || *(_BYTE*)(a2 + 15252) && *(_BYTE*)(a2 + 15252) != 1)
    {
        for (j = 0; j < *(_DWORD*)(a2 + 15268); ++j)
        {
            if (*(_BYTE*)(*(_DWORD*)(a2 + 15264) + 32 * j))
            {
                if (*(float*)(*(_DWORD*)(a2 + 15264) + 32 * j + 4) >= 4.0
                    && *(float*)(*(_DWORD*)(a2 + 15264) + 32 * j + 4) <= 124.0
                    && *(float*)(*(_DWORD*)(a2 + 15264) + 32 * j + 8) >= 12.0
                    && *(float*)(*(_DWORD*)(a2 + 15264) + 32 * j + 8) <= 124.0)
                {
                    if (*(_BYTE*)(*(_DWORD*)(a2 + 15264) + 32 * j + 29))
                    {
                        sub_4D0743(
                            (__int64)*(float*)(*(_DWORD*)(a2 + 15264) + 32 * j + 4),
                            (__int64)*(float*)(*(_DWORD*)(a2 + 15264) + 32 * j + 8),
                            *(_WORD*)(*(_DWORD*)(a2 + 15264) + 32 * j + 30) & 0x1F,
                            ((int)*(unsigned __int16*)(*(_DWORD*)(a2 + 15264) + 32 * j + 30) >> 5) & 0x1F,
                            ((int)*(unsigned __int16*)(*(_DWORD*)(a2 + 15264) + 32 * j + 30) >> 10) & 0x1F,
                            (int)a1);
                    }
                    else
                    {
                        v6 = rand() % 31;
                        v5 = rand() % 31;
                        v4 = rand() % 31;
                        sub_4D0743(
                            (__int64)*(float*)(*(_DWORD*)(a2 + 15264) + 32 * j + 4),
                            (__int64)*(float*)(*(_DWORD*)(a2 + 15264) + 32 * j + 8),
                            v4,
                            v5,
                            v6,
                            (int)a1);
                    }
                }
                else
                {
                    *(_BYTE*)(*(_DWORD*)(a2 + 15264) + 32 * j) = 0;
                }
            }
        }
    }
    if (*(_WORD*)(a2 + 15272) != 3 && *(_WORD*)(a2 + 15272) != 1 && *(_WORD*)(a2 + 15272) != 2)
    {
        for (k = 0; k < 3; ++k)
        {
            if (!*(_BYTE*)(a2 + 44 * k + 1193) && !*(_BYTE*)(a2 + 44 * k + 1201))
            {
                if ((int)-- * (_DWORD*)(a2 + 44 * k + 1212) <= 0)
                    *(_DWORD*)(a2 + 44 * k + 1212) = 0;
                if (*(int*)(a2 + 44 * k + 1212) >= 3)
                {
                    v10 = (int*)(a2 + 24 * *(unsigned __int8*)(a2 + 44 * k + 1172) + 176);
                }
                else
                {
                    v10 = (int*)(a2 + 24 * *(unsigned __int8*)(a2 + 44 * k + 1172) + 188);
                    if (*(int*)(a2 + 44 * k + 1212) <= 0)
                        *(_DWORD*)(a2 + 44 * k + 1212) = rand() % 60 + 60;
                }
                if (*(_BYTE*)(a2 + 44 * k + 1192))
                    sub_4D05E6(a1, (__int64)*(float*)(a2 + 14956) + 1, (__int64)*(float*)(a2 + 14960) + 9, v10);
                else
                    sub_4D05E6(a1, (__int64)*(float*)(a2 + 44 * k + 1176), (__int64)*(float*)(a2 + 44 * k + 1180), v10);
            }
        }
    }
    if (*(_BYTE*)a2
        && (*(_WORD*)(a2 + 15272) != 3
            || *(_BYTE*)(a2 + 15252) != 5
            && *(_BYTE*)(a2 + 15252) != 6
            && *(_BYTE*)(a2 + 15252)
            && *(_BYTE*)(a2 + 15252) != 1
            && *(_BYTE*)(a2 + 15252) != 2
            && *(_BYTE*)(a2 + 15252) != 3
            && *(_BYTE*)(a2 + 15252) != 4)
        && *(_WORD*)(a2 + 15272) != 1
        && *(_WORD*)(a2 + 15272) != 2
        && !byte_5CAA1D)
    {
        if (*(_BYTE*)(a2 + 14952))
        {
            for (l = 0; l < 16; ++l)
            {
                for (m = 0; m < 9; ++m)
                {
                    if (*(_BYTE*)(a2 + m + 9 * l + 14808))
                    {
                        v7 = (float)m;
                        sub_4D0743(
                            (__int64)(v7 + *(float*)(a2 + 14956)),
                            l + (__int64)*(float*)(a2 + 14960),
                            0,
                            0x1Fu,
                            0,
                            (int)a1);
                    }
                }
            }
        }
        else
        {
            sub_4D05E6(a1, (__int64)*(float*)(a2 + 14956), (__int64)*(float*)(a2 + 14960), (int*)(a2 + 44));
        }
    }
    if (*(_BYTE*)(a2 + 14952))
    {
        for (n = 0; n < 112; ++n)
        {
            for (ii = 0; ii < 120; ++ii)
            {
                if (*(_BYTE*)(a2 + ii + 120 * n + 1368))
                    sub_4D0743(ii + 4, n + 12, 0x1Fu, 0, 0, (int)a1);
            }
        }
    }
    else
    {
        sub_4D05E6(a1, 4, 12, (int*)(a2 + 12 * (*(_DWORD*)(a2 + 15232) % 5) + 56));
    }
    if ((*(_WORD*)(a2 + 15272) != 3 || *(_BYTE*)(a2 + 15252) && *(_BYTE*)(a2 + 15252) != 1)
        && *(_WORD*)(a2 + 15272) != 1)
    {
        for (jj = 0; jj < 3; ++jj)
        {
            if (*(_BYTE*)(a2 + 44 * jj + 1201))
                sub_4D05E6(
                    a1,
                    (__int64)*(float*)(a2 + 44 * jj + 1176),
                    (__int64)*(float*)(a2 + 44 * jj + 1180),
                    (int*)(a2 + 24 * *(unsigned __int8*)(a2 + 44 * jj + 1172) + 176));
        }
    }
    sub_4D290F(
        100 * *(unsigned __int16*)(a2 + 15242),
        100 * *(unsigned __int16*)(a2 + 15244),
        (_DWORD*)(a2 + 392),
        a1,
        byte_5CAA1D);
    if (!byte_5CAA1D)
        sub_4D2A50(a2, a1);
    if (!byte_5CAA1D)
    {
        v24 = 119;
        for (kk = 0; kk < *(unsigned __int8*)(a2 + 15240) - 1; ++kk)
        {
            sub_4D05E6(a1, v24, 0, (int*)(a2 + 308));
            v24 -= *(_DWORD*)(a2 + 44);
        }
    }
    v21 = 12;
    for (ll = 0; ll < 29; ++ll)
    {
        sub_4D05E6(a1, 0, v21, (int*)(a2 + 32));
        sub_4D05E6(a1, 124, v21, (int*)(a2 + 32));
        v21 += *(_DWORD*)(a2 + 36);
    }
    v25 = 0;
    for (mm = 0; mm < 32; ++mm)
    {
        sub_4D05E6(a1, v25, 8, (int*)(a2 + 32));
        sub_4D05E6(a1, v25, 124, (int*)(a2 + 32));
        v25 += *(_DWORD*)(a2 + 32);
    }
    LOWORD(v2) = *(_WORD*)(a2 + 15272);
    if ((unsigned __int16)v2 == 3 && (*(_BYTE*)(a2 + 15252) == 1 || (LOWORD(v2) = a2, !*(_BYTE*)(a2 + 15252))))
    {
        if (!byte_5CAA1D)
        {
            sub_4D05E6(a1, a1[2] / 2 - *(_DWORD*)(a2 + 356) / 2, a1[3] / 2, (int*)(a2 + 356));
            if (*(_DWORD*)(a2 + 15232) + 1 >= 10)
                v18 = 8;
            else
                v18 = 4;
            LOWORD(v2) = (unsigned __int16)sub_4D29D9(
                a1[2] / 2 - v18,
                *(_DWORD*)(a2 + 360) + a1[3] / 2,
                *(_DWORD*)(a2 + 15232) + 1,
                (_DWORD*)(a2 + 392),
                a1);
        }
    }
    else if (*(_WORD*)(a2 + 15272) == 3 && (LOWORD(v2) = a2, *(_BYTE*)(a2 + 15252) == 6))
    {
        LOWORD(v2) = (unsigned __int16)sub_4D05E6(a1, a1[2] / 2 - *(_DWORD*)(a2 + 344) / 2, a1[3] / 2, (int*)(a2 + 344));
    }
    else if (*(_WORD*)(a2 + 15272) == 3)
    {
        if (*(_BYTE*)(a2 + 15252) == 3 || (v2 = *(unsigned __int8*)(a2 + 15252), v2 == 4))
        {
            v9 = *(_DWORD*)(a2 + 392) * strlen(getFormattedString("%d", 100 * *(_DWORD*)(a2 + 15208)));
            v8 = *(_DWORD*)(a2 + 320) + *(_DWORD*)(a2 + 368) + 4;
            sub_4D05E6(a1, a1[2] / 2 - v8 / 2, a1[3] / 2, (int*)(a2 + 320));
            sub_4D05E6(a1, a1[2] / 2 - v8 / 2 + *(_DWORD*)(a2 + 320) + 4, a1[3] / 2, (int*)(a2 + 368));
            LOWORD(v2) = (unsigned __int16)sub_4D29D9(
                a1[2] / 2 - v9 / 2,
                a1[3] / 2 + *(_DWORD*)(a2 + 372) + 4,
                100 * *(_DWORD*)(a2 + 15208),
                (_DWORD*)(a2 + 392),
                a1);
        }
    }
    if (byte_5CAA1D == 2)
        LOWORD(v2) = (unsigned __int16)sub_4D05E6(
            a1,
            a1[2] / 2 - *(_DWORD*)(a2 + 380) / 2,
            a1[3] / 2 - *(_DWORD*)(a2 + 384) / 2,
            (int*)(a2 + 380));
    if (a1[1])
        LOWORD(v2) = sub_569C41(a1[1], a1[4]);
    return v2;
}
// 5CAA1D: using guessed type char byte_5CAA1D;

//----- (004D204B) --------------------------------------------------------
int __cdecl sub_4D204B(int a1)
{
    int result; // eax
    int i; // [esp+0h] [ebp-4h]

    for (i = 0; i < *(_DWORD*)(a1 + 15268); ++i)
    {
        *(_BYTE*)(*(_DWORD*)(a1 + 15264) + 32 * i) = 0;
        result = i + 1;
    }
    return result;
}

//----- (004DE22B) --------------------------------------------------------
int __cdecl sub_4DE22B(int a1)
{
    int result; // eax
    unsigned __int16 v2; // [esp+0h] [ebp-18h]
    int i; // [esp+4h] [ebp-14h]
    int j; // [esp+8h] [ebp-10h]

    for (i = 0; i < 112; ++i)
    {
        for (j = 0; j < 120; ++j)
        {
            v2 = *(_WORD*)(*(_DWORD*)(a1 + 12 * (*(_DWORD*)(a1 + 15232) % 5) + 64) + 240 * i + 2 * j);
            if (v2 & 0x1F | ((int)v2 >> 5) & 0x1F | ((int)v2 >> 10) & 0x1F)
                *(_BYTE*)(a1 + j + 120 * i + 1368) = 1;
            else
                *(_BYTE*)(a1 + j + 120 * i + 1368) = 0;
        }
        result = i + 1;
    }
    return result;
}

//----- (004D2A50) --------------------------------------------------------
_WORD* __cdecl sub_4D2A50(int a1, _DWORD* a2)
{
    int i; // [esp+8h] [ebp-4h]

    for (i = 1; i < 7; ++i)
        memset(
            (void*)(a2[4] + 2 * a2[2] * i + 168),
            0x10u,
            2 * (__int64)(*(float*)(a1 + 15128) / *(float*)(a1 + 4 * (*(_DWORD*)(a1 + 15232) % 5) + 15152) * 16.0));
    return sub_4D05E6(a2, 84 - *(_DWORD*)(a1 + 320) - 2, 0, (int*)(a1 + 320));
}