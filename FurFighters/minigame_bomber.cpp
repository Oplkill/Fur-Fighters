#include "minigame_bomber.h"

#include "minigame_global.h"
#include "defs.h"
#include "maybe.h"
#include "files.h"
#include "tempplace.h"
#include "save.h"

char aBombersubgameC[] = "bombersubgame.chb"; // idb
char aBomberPlaneSpr[17] = "bomber\\plane.spr"; // weak
char aBomberBombSpr[16] = "bomber\\bomb.spr"; // weak
char aBomberBomb3Spr[17] = "bomber\\bomb3.spr"; // weak
char aBomberBomb2Spr[17] = "bomber\\bomb2.spr"; // weak
char aBomberBuild1Sp[18] = "bomber\\build1.spr"; // weak
char aBomberBuild2Sp[18] = "bomber\\build2.spr"; // weak
char aBomberBuild3Sp[18] = "bomber\\build3.spr"; // weak
char aBomberBuild4Sp[18] = "bomber\\build4.spr"; // weak
char aBomberBuild1br[20] = "bomber\\build1br.spr"; // weak
char aBomberBuild2br[20] = "bomber\\build2br.spr"; // weak
char aBomberBuild3br[20] = "bomber\\build3br.spr"; // weak
char aBomberBuild4br[20] = "bomber\\build4br.spr"; // weak
char aBomberGrassSpr[17] = "bomber\\grass.spr"; // weak
char aBomberSkySpr[15] = "bomber\\sky.spr"; // weak
char aBomberLifeSpr[16] = "bomber\\life.spr"; // weak
char aBomberWheelsSp[18] = "bomber\\wheels.spr"; // weak
char aBomberOverEnSp[19] = "bomber\\over_en.spr"; // weak
char aBomberPressEnS[20] = "bomber\\press_en.spr"; // weak
char aBomberRoundEnS[20] = "bomber\\round_en.spr"; // weak
char aBomberOverFrSp[19] = "bomber\\over_fr.spr"; // weak
char aBomberPressFrS[20] = "bomber\\press_fr.spr"; // weak
char aBomberRoundFrS[20] = "bomber\\round_fr.spr"; // weak
char aBomberOverGeSp[19] = "bomber\\over_ge.spr"; // weak
char aBomberPressGeS[20] = "bomber\\press_ge.spr"; // weak
char aBomberRoundGeS[20] = "bomber\\round_ge.spr"; // weak
char aBomberOverEnSp_0[19] = "bomber\\over_en.spr"; // weak
char aBomberPressEnS_0[20] = "bomber\\press_en.spr"; // weak
char aBomberRoundEnS_0[20] = "bomber\\round_en.spr"; // weak
char aBomberOverSpSp[19] = "bomber\\over_sp.spr"; // weak
char aBomberPressSpS[20] = "bomber\\press_sp.spr"; // weak
char aBomberRoundSpS[20] = "bomber\\round_sp.spr"; // weak
char aBomberOverEnSp_1[19] = "bomber\\over_en.spr"; // weak
char aBomberPressEnS_1[20] = "bomber\\press_en.spr"; // weak
char aBomberRoundEnS_1[20] = "bomber\\round_en.spr"; // weak
char aBomberOverFrSp_0[19] = "bomber\\over_fr.spr"; // weak
char aBomberPressFrS_0[20] = "bomber\\press_fr.spr"; // weak
char aBomberRoundFrS_0[20] = "bomber\\round_fr.spr"; // weak
char aBomberOverGeSp_0[19] = "bomber\\over_ge.spr"; // weak
char aBomberPressGeS_0[20] = "bomber\\press_ge.spr"; // weak
char aBomberRoundGeS_0[20] = "bomber\\round_ge.spr"; // weak
char aBomberOverEnSp_2[19] = "bomber\\over_en.spr"; // weak
char aBomberPressEnS_2[20] = "bomber\\press_en.spr"; // weak
char aBomberRoundEnS_2[20] = "bomber\\round_en.spr"; // weak
char aBomberOverSpSp_0[19] = "bomber\\over_sp.spr"; // weak
char aBomberPressSpS_0[20] = "bomber\\press_sp.spr"; // weak
char aBomberRoundSpS_0[20] = "bomber\\round_sp.spr"; // weak

char byte_5CAA30; // weak

int __cdecl sub_4E2EC2(_DWORD* a1);
int __cdecl sub_4D5683(_DWORD* a1, int a2);
BOOL __cdecl sub_4DFFB8(int a1);
int __cdecl sub_4D27CD(int a1);
int __cdecl sub_4DFAF5(int a1);
char __cdecl sub_4E0022(int a1, int a2);
int __cdecl sub_4DFF2A(int a1);
void __cdecl sub_4D0B54(int a1, int a2, int a3, int a4, int a5, int a6);
int __cdecl sub_4DF941(int a1);
int __cdecl sub_4DFA53(int a1);
int __cdecl sub_4DFA02(int a1);
int __cdecl sub_4DFCFF(int a1);

//----- (004D9449) --------------------------------------------------------
_DWORD* __cdecl sub_4D9449(_DWORD* a1)
{
    char* v2; // eax
    int i; // [esp+4h] [ebp-8h]
    int j; // [esp+4h] [ebp-8h]
    int v5; // [esp+8h] [ebp-4h]

    if (!sub_56EA26(*a1, a1[2], a1[3], 2))
        return 0;
    a1[11] = maybe_allocateMemory(488);
    v5 = a1[11];
    a1[7] = 1;
    a1[10] = sub_4E2EC2;
    a1[1] = *(_DWORD*)(*a1 + 44);
    a1[4] = maybe_allocateMemory(2 * a1[3] * a1[2] + 31);
    a1[4] = (a1[4] + 31) & 0xFFFFFFE0;
    a1[6] = 0;
    loadCHBfile(aBombersubgameC);
    loadSprite(v5, aBomberPlaneSpr);
    loadSprite(v5 + 24, aBomberBombSpr);
    loadSprite(v5 + 36, aBomberBomb3Spr);
    loadSprite(v5 + 48, aBomberBomb2Spr);
    loadSprite(v5 + 108, aBomberBuild1Sp);
    loadSprite(v5 + 120, aBomberBuild2Sp);
    loadSprite(v5 + 132, aBomberBuild3Sp);
    loadSprite(v5 + 144, aBomberBuild4Sp);
    loadSprite(v5 + 60, aBomberBuild1br);
    loadSprite(v5 + 72, aBomberBuild2br);
    loadSprite(v5 + 84, aBomberBuild3br);
    loadSprite(v5 + 96, aBomberBuild4br);
    loadSprite(v5 + 156, aBomberGrassSpr);
    loadSprite(v5 + 168, aBomberSkySpr);
    loadSprite(v5 + 216, aBomberLifeSpr);
    loadSprite(v5 + 12, aBomberWheelsSp);
    if (loadAllLanguageSpritesAtOnce)
    {
        loadSprite(v5 + 192, aBomberOverEnSp);
        loadSprite(v5 + 180, aBomberPressEnS);
        loadSprite(v5 + 204, aBomberRoundEnS);
        loadSprite(v5 + 192, aBomberOverFrSp);
        loadSprite(v5 + 180, aBomberPressFrS);
        loadSprite(v5 + 204, aBomberRoundFrS);
        loadSprite(v5 + 192, aBomberOverGeSp);
        loadSprite(v5 + 180, aBomberPressGeS);
        loadSprite(v5 + 204, aBomberRoundGeS);
        loadSprite(v5 + 192, aBomberOverEnSp_0);
        loadSprite(v5 + 180, aBomberPressEnS_0);
        loadSprite(v5 + 204, aBomberRoundEnS_0);
        loadSprite(v5 + 192, aBomberOverSpSp);
        loadSprite(v5 + 180, aBomberPressSpS);
        loadSprite(v5 + 204, aBomberRoundSpS);
    }
    else
    {
        switch (languageId)
        {
        case language::English:
            loadSprite(v5 + 192, aBomberOverEnSp_1);
            loadSprite(v5 + 180, aBomberPressEnS_1);
            loadSprite(v5 + 204, aBomberRoundEnS_1);
            break;
        case language::French:
            loadSprite(v5 + 192, aBomberOverFrSp_0);
            loadSprite(v5 + 180, aBomberPressFrS_0);
            loadSprite(v5 + 204, aBomberRoundFrS_0);
            break;
        case language::German:
            loadSprite(v5 + 192, aBomberOverGeSp_0);
            loadSprite(v5 + 180, aBomberPressGeS_0);
            loadSprite(v5 + 204, aBomberRoundGeS_0);
            break;
        case language::Unknown1:
            loadSprite(v5 + 192, aBomberOverEnSp_2);
            loadSprite(v5 + 180, aBomberPressEnS_2);
            loadSprite(v5 + 204, aBomberRoundEnS_2);
            break;
        case language::Spanish:
            loadSprite(v5 + 192, aBomberOverSpSp_0);
            loadSprite(v5 + 180, aBomberPressSpS_0);
            loadSprite(v5 + 204, aBomberRoundSpS_0);
            break;
        default:
            break;
        }
    }
    for (i = 0; i < 10; ++i)
    {
        v2 = getFormattedString("bomber\\digi%d.spr", i);
        loadSprite(v5 + 12 * i + 228, v2);
    }
    sub_53F37A();
    *(_DWORD*)(v5 + 368) = 16;
    *(_BYTE*)(v5 + 380) = 120;
    *(_DWORD*)(v5 + 456) = 5;
    *(_DWORD*)(v5 + 376) = maybe_allocateMemory(3 * *(_DWORD*)(v5 + 456) * *(_DWORD*)(v5 + 368));
    *(_DWORD*)(v5 + 372) = maybe_allocateMemory(3 * *(_DWORD*)(v5 + 368));
    **(_BYTE**)(v5 + 376) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 1) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 4) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 5) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 6) = 5;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 7) = 4;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 8) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 9) = 5;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 10) = 4;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 11) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 12) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 13) = 1;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 14) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 15) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 16) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 17) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 18) = 6;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 19) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 20) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 21) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 22) = 2;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 23) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 24) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 25) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 26) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 27) = 6;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 28) = 1;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 29) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 30) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 31) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 32) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 33) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 34) = 4;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 35) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 36) = 5;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 37) = 1;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 38) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 39) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 40) = 4;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 41) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 42) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 43) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 44) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 45) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 46) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 47) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * *(_DWORD*)(v5 + 368)) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * *(_DWORD*)(v5 + 368) + 1) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * *(_DWORD*)(v5 + 368) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 1)) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 1) + 1) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 1) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 2)) = 4;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 2) + 1) = 1;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 2) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 3)) = 5;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 3) + 1) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 3) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 4)) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 4) + 1) = 4;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 4) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 5)) = 4;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 5) + 1) = 1;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 5) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 6)) = 7;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 6) + 1) = 2;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 6) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 7)) = 4;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 7) + 1) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 7) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 8)) = 6;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 8) + 1) = 2;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 8) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 9)) = 2;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 9) + 1) = 4;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 9) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 10)) = 7;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 10) + 1) = 1;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 10) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 11)) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 11) + 1) = 4;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 11) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 12)) = 5;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 12) + 1) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 12) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 13)) = 4;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 13) + 1) = 1;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 13) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 14)) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 14) + 1) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 14) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 15)) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 15) + 1) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (*(_DWORD*)(v5 + 368) + 15) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 6 * *(_DWORD*)(v5 + 368)) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 6 * *(_DWORD*)(v5 + 368) + 1) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 6 * *(_DWORD*)(v5 + 368) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 1)) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 1) + 1) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 1) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 2)) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 2) + 1) = 2;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 2) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 3)) = 4;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 3) + 1) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 3) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 4)) = 5;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 4) + 1) = 4;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 4) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 5)) = 5;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 5) + 1) = 1;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 5) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 6)) = 5;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 6) + 1) = 1;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 6) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 7)) = 8;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 7) + 1) = 4;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 7) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 8)) = 5;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 8) + 1) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 8) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 9)) = 4;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 9) + 1) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 9) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 10)) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 10) + 1) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 10) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 11)) = 4;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 11) + 1) = 4;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 11) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 12)) = 4;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 12) + 1) = 4;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 12) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 13)) = 4;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 13) + 1) = 1;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 13) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 14)) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 14) + 1) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 14) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 15)) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 15) + 1) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (2 * *(_DWORD*)(v5 + 368) + 15) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 9 * *(_DWORD*)(v5 + 368)) = 2;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 9 * *(_DWORD*)(v5 + 368) + 1) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 9 * *(_DWORD*)(v5 + 368) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 1)) = 2;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 1) + 1) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 1) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 2)) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 2) + 1) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 2) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 3)) = 4;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 3) + 1) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 3) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 4)) = 4;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 4) + 1) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 4) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 5)) = 5;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 5) + 1) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 5) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 6)) = 5;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 6) + 1) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 6) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 7)) = 6;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 7) + 1) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 7) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 8)) = 6;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 8) + 1) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 8) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 9)) = 5;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 9) + 1) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 9) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 10)) = 5;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 10) + 1) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 10) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 11)) = 4;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 11) + 1) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 11) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 12)) = 4;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 12) + 1) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 12) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 13)) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 13) + 1) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 13) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 14)) = 2;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 14) + 1) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 14) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 15)) = 2;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 15) + 1) = 3;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (3 * *(_DWORD*)(v5 + 368) + 15) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 12 * *(_DWORD*)(v5 + 368)) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 12 * *(_DWORD*)(v5 + 368) + 1) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 12 * *(_DWORD*)(v5 + 368) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 1)) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 1) + 1) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 1) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 2)) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 2) + 1) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 2) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 3)) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 3) + 1) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 3) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 4)) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 4) + 1) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 4) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 5)) = 6;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 5) + 1) = 4;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 5) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 6)) = 6;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 6) + 1) = 4;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 6) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 7)) = 6;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 7) + 1) = 4;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 7) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 8)) = 6;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 8) + 1) = 4;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 8) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 9)) = 6;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 9) + 1) = 4;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 9) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 10)) = 6;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 10) + 1) = 4;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 10) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 11)) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 11) + 1) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 11) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 12)) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 12) + 1) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 12) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 13)) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 13) + 1) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 13) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 14)) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 14) + 1) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 14) + 2) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 15)) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 15) + 1) = 0;
    *(_BYTE*)(*(_DWORD*)(v5 + 376) + 3 * (4 * *(_DWORD*)(v5 + 368) + 15) + 2) = 0;
    *(_DWORD*)(v5 + 352) = 1024;
    *(_DWORD*)(v5 + 348) = maybe_allocateMemory(32 * *(_DWORD*)(v5 + 352));
    for (j = 0; j < *(_DWORD*)(v5 + 352); ++j)
        *(_BYTE*)(*(_DWORD*)(v5 + 348) + 32 * j) = 0;
    *(_DWORD*)(v5 + 356) = 1065353216;
    if (byte_622C50)
        *(_DWORD*)(v5 + 388) = 1041865114;
    else
        *(_DWORD*)(v5 + 388) = 1045220557;
    byte_5CAA30 = 1;
    byte_5CAA50 = 0;
    *(_BYTE*)(v5 + 382) = 8;
    *(_BYTE*)(v5 + 381) = 1;
    *(_BYTE*)(v5 + 384) = 2;
    *(_BYTE*)(v5 + 385) = 4;
    *(_DWORD*)(v5 + 360) = -*(_DWORD*)v5;
    *(_DWORD*)(v5 + 364) = 8;
    *(_WORD*)(v5 + 480) = 256;
    *(_BYTE*)(v5 + 383) = 2;
    if (byte_622C50)
        *(_BYTE*)(v5 + 442) = 4;
    else
        *(_BYTE*)(v5 + 442) = 5;
    *(_BYTE*)(v5 + 436) = 20;
    *(_BYTE*)(v5 + 437) = 12;
    *(_BYTE*)(v5 + 446) = 59;
    *(_BYTE*)(v5 + 447) = 15;
    *(_BYTE*)(v5 + 440) = 12;
    *(_BYTE*)(v5 + 441) = 20;
    *(_DWORD*)(v5 + 424) = 1000593162;
    *(_BYTE*)(v5 + 482) = -31;
    *(_DWORD*)(v5 + 420) = 1119223808;
    *(_WORD*)(v5 + 466) = 0;
    *(_WORD*)(v5 + 478) = -1;
    if (word_604302 == 39)
    {
        *(_WORD*)(v5 + 468) = 100;
    }
    else if (HIWORD(dword_6041F2))
    {
        *(_WORD*)(v5 + 468) = HIWORD(dword_6041F2);
    }
    else
    {
        *(_WORD*)(v5 + 468) = 500;
    }
    *(_WORD*)(v5 + 484) = 3;
    *(_DWORD*)(dword_5CAA20 + 32) = 1;
    sub_4E2EC2(a1);
    sub_4D5683(a1, v5);
    *(_DWORD*)(dword_5CAA20 + 32) = 0;
    return a1;
}
// 4D03AB: using guessed type int __cdecl loadSprite(_DWORD, _DWORD);
// 4D5683: using guessed type _DWORD __cdecl sub_4D5683(_DWORD, _DWORD);
// 4E2EC2: using guessed type _DWORD __cdecl sub_4E2EC2(_DWORD);
// 56EA26: using guessed type _DWORD __cdecl sub_56EA26(_DWORD, _DWORD, _DWORD, _DWORD);
// 5CAA20: using guessed type int dword_5CAA20;
// 5CAA30: using guessed type char byte_5CAA30;
// 5CAA50: using guessed type char byte_5CAA50;
// 6041F2: using guessed type int dword_6041F2;
// 604302: using guessed type __int16 word_604302;
// 6045D4: using guessed type int languageId;
// 622C50: using guessed type char byte_622C50;
// 667394: using guessed type int loadAllLanguageSpritesAtOnce;

//----- (004E2EC2) --------------------------------------------------------
int __cdecl sub_4E2EC2(_DWORD* a1)
{
    int result; // eax
    int i; // [esp+Ch] [ebp-14h]
    int j; // [esp+10h] [ebp-10h]
    char v4; // [esp+18h] [ebp-8h]
    int v5; // [esp+1Ch] [ebp-4h]

    result = (int)a1;
    v5 = a1[11];
    v4 = 0;
    if (*(_DWORD*)(dword_5CAA20 + 32))
    {
        result = word_60430E;
        if (!word_60430E)
        {
            ++a1[6];
            if ((byte_5CAA50 & 1) != 0)
            {
                byte_5CAA30 = 0;
                byte_5CAA50 &= 0xFEu;
                byte_5CAA50 |= 4u;
                *(_WORD*)(v5 + 484) = 3;
                if ((byte_5CAA50 & 4) != 0)
                    sub_4D07B5(dword_5A03B4);
            }
            if (byte_5CAA30 != 1 && (byte_5CAA50 & 0x20) == 0)
            {
                sub_553C3C(*(_WORD*)(dword_6043C8[word_60431C] + 128));
                word_604312 = 1;
            }
            if (byte_5CAA30)
            {
                if (sub_4DFFB8(v5))
                    v4 = 1;
                if (byte_5CAA30 == 2 && (byte_622128 & 0x80) != 0)
                {
                    byte_5CAA50 &= 0xF7u;
                    byte_5CAA30 = 0;
                    *(_WORD*)(v5 + 484) = 3;
                }
            }
            if (*(_BYTE*)(v5 + 438))
                --* (_BYTE*)(v5 + 438);
            if ((((byte_6220FD & 0x80) != 0 || (byte_62207D & 0x80) != 0) && !byte_5CAA30 || (byte_5CAA50 & 0x10) != 0)
                && !*(_BYTE*)(v5 + 392)
                && !*(_BYTE*)(v5 + 438)
                && !*(_WORD*)(v5 + 484)
                || v4)
            {
                byte_5CAA50 &= 0xEFu;
                *(_BYTE*)(v5 + 393) = 1;
                *(_DWORD*)(v5 + 428) = *(_DWORD*)(v5 + 108)
                    * ((*(_DWORD*)v5 / 2 + *(_DWORD*)(v5 + 360))
                        / *(_DWORD*)(v5 + 108))
                    + 4
                    - *(_DWORD*)(v5 + 24) / 2;
                *(_DWORD*)(v5 + 432) = *(_DWORD*)(v5 + 364) + *(_DWORD*)(v5 + 4) / 2 - 2;
            }
            sub_4D27CD(v5);
            switch (*(_WORD*)(v5 + 484))
            {
            case 0:
                sub_4DFAF5(v5);
                if (*(_BYTE*)(v5 + 392) || *(_BYTE*)(v5 + 393))
                    sub_4E0022(v5, (int)a1);
                if (sub_4DFF2A(v5))
                {
                    if ((byte_5CAA50 & 4) != 0)
                        sub_4D07B5(dword_5A03A4);
                    *(_WORD*)(v5 + 484) = 5;
                    *(_BYTE*)(v5 + 476) = 5;
                    *(_DWORD*)(v5 + 472) = 60;
                    for (i = 0; i < *(_DWORD*)(v5 + 4); ++i)
                    {
                        for (j = 0; j < *(_DWORD*)v5; ++j)
                            sub_4D0B54(j + *(_DWORD*)(v5 + 360), i + *(_DWORD*)(v5 + 364), 120, 0, v5, (int)a1);
                    }
                    if (*(__int16*)(v5 + 478) != -1)
                    {
                        sub_57E927(*(_WORD*)(v5 + 478));
                        *(_WORD*)(v5 + 478) = -1;
                    }
                }
                break;
            case 1:
                sub_4DF941(v5);
                sub_4DFA53(v5);
                *(_WORD*)(v5 + 484) = 0;
                break;
            case 3:
                sub_4DFA02(v5);
                sub_4DF941(v5);
                *(_WORD*)(v5 + 484) = 5;
                *(_BYTE*)(v5 + 476) = 0;
                *(_DWORD*)(v5 + 472) = 60;
                break;
            case 5:
                if (*(_BYTE*)(v5 + 392))
                    sub_4E0022(v5, (int)a1);
                if (*(_BYTE*)(v5 + 476) == 7)
                    sub_4DFCFF(v5);
                if ((int)-- * (_DWORD*)(v5 + 472) < 0)
                {
                    *(_DWORD*)(v5 + 472) = 0;
                    switch (*(_BYTE*)(v5 + 476))
                    {
                    case 0:
                        *(_WORD*)(v5 + 484) = 0;
                        sub_4DFA53(v5);
                        break;
                    case 1:
                        *(_WORD*)(v5 + 484) = 1;
                        break;
                    case 2:
                        *(_WORD*)(v5 + 484) = 2;
                        break;
                    case 5:
                        if (-- * (_BYTE*)(v5 + 464))
                        {
                            *(_WORD*)(v5 + 484) = 5;
                            *(_BYTE*)(v5 + 476) = 1;
                            *(_DWORD*)(v5 + 472) = 60;
                        }
                        else
                        {
                            *(_WORD*)(v5 + 484) = 5;
                            *(_BYTE*)(v5 + 476) = 6;
                            *(_DWORD*)(v5 + 472) = 90;
                        }
                        break;
                    case 6:
                        if (*(unsigned __int16*)(v5 + 466) > (int)*(unsigned __int16*)(v5 + 468) && !byte_5CAA30)
                        {
                            *(_WORD*)(v5 + 468) = *(_WORD*)(v5 + 466);
                            HIWORD(dword_6041F2) = *(_WORD*)(v5 + 468);
                            if ((dword_6041E0 & 1) == 0)
                            {
                                sub_47641B(0);
                                saveGame(-1, 0);
                            }
                        }
                        if (!byte_5CAA30)
                            byte_5CAA30 = 2;
                        *(_WORD*)(v5 + 484) = 3;
                        if ((byte_5CAA50 & 0x20) != 0)
                        {
                            byte_5CAA50 &= 0xDFu;
                            byte_5CAA50 &= 0xFDu;
                        }
                        break;
                    case 8:
                        ++ * (_DWORD*)(v5 + 452);
                        ++* (_DWORD*)(v5 + 460);
                        if (*(_DWORD*)(v5 + 452) == *(_DWORD*)(v5 + 456))
                        {
                            *(_DWORD*)(v5 + 452) = 0;
                            *(_BYTE*)(v5 + 439) += 4;
                            if (*(unsigned __int8*)(v5 + 439) > (int)*(unsigned __int8*)(v5 + 441))
                                *(_BYTE*)(v5 + 439) = *(_BYTE*)(v5 + 441);
                        }
                        *(_WORD*)(v5 + 484) = 5;
                        *(_BYTE*)(v5 + 476) = 1;
                        *(_DWORD*)(v5 + 472) = 60;
                        break;
                    default:
                        goto LABEL_71;
                    }
                }
                break;
            default:
                break;
            }
        LABEL_71:
            if ((byte_62207C & 0x80) != 0 && (byte_5CAA50 & 4) != 0 && (byte_5CAA50 & 0x20) == 0)
            {
                byte_5CAA30 = 1;
                byte_5CAA50 |= 2u;
                byte_5CAA50 &= 0xFBu;
                *(_WORD*)(v5 + 484) = 3;
                if (*(__int16*)(v5 + 478) != -1)
                {
                    sub_57E927(*(_WORD*)(v5 + 478));
                    *(_WORD*)(v5 + 478) = -1;
                }
            }
            result = sub_4D5683(a1, v5);
        }
    }
    return result;
}
// 5A03A4: using guessed type int dword_5A03A4;
// 5A03B4: using guessed type int dword_5A03B4;
// 5CAA20: using guessed type int dword_5CAA20;
// 5CAA30: using guessed type char byte_5CAA30;
// 5CAA50: using guessed type char byte_5CAA50;
// 6041E0: using guessed type int dword_6041E0;
// 6041F2: using guessed type int dword_6041F2;
// 60430E: using guessed type __int16 word_60430E;
// 604312: using guessed type __int16 word_604312;
// 60431C: using guessed type __int16 word_60431C;
// 6043C8: using guessed type int dword_6043C8[];
// 62207C: using guessed type char byte_62207C;
// 62207D: using guessed type char byte_62207D;
// 6220FD: using guessed type char byte_6220FD;
// 622128: using guessed type char byte_622128;

//----- (004D5683) --------------------------------------------------------
int __cdecl sub_4D5683(_DWORD* a1, int a2)
{
    int result; // eax
    float v3; // [esp+4h] [ebp-4Ch]
    float v4; // [esp+Ch] [ebp-44h]
    float v5; // [esp+10h] [ebp-40h]
    float v6; // [esp+14h] [ebp-3Ch]
    float v7; // [esp+24h] [ebp-2Ch]
    float v8; // [esp+28h] [ebp-28h]
    float v9; // [esp+2Ch] [ebp-24h]
    int v10; // [esp+3Ch] [ebp-14h]
    int i; // [esp+40h] [ebp-10h]
    int v12; // [esp+40h] [ebp-10h]
    int j; // [esp+40h] [ebp-10h]
    int v14; // [esp+40h] [ebp-10h]
    int k; // [esp+40h] [ebp-10h]
    int v16; // [esp+44h] [ebp-Ch]
    int v17; // [esp+48h] [ebp-8h]
    int v18; // [esp+48h] [ebp-8h]
    _DWORD* v19; // [esp+4Ch] [ebp-4h]

    v19 = (_DWORD*)a1[4];
    for (i = 0; i < 512; ++i)
        *v19++ = 0;
    sub_4D05E6(a1, 0, 8, (int*)(a2 + 168));
    sub_4D05E6(a1, 0, *(unsigned __int8*)(a2 + 380), (int*)(a2 + 156));
    if (*(_WORD*)(a2 + 484) != 3 && *(_WORD*)(a2 + 484) != 1)
    {
        if (*(_BYTE*)(a2 + 392) && *(_WORD*)(a2 + 484) != 5 && *(_WORD*)(a2 + 484) != 3 && *(_WORD*)(a2 + 484) != 1)
            sub_4D05E6(a1, *(_DWORD*)(a2 + 428), *(_DWORD*)(a2 + 432), (int*)(a2 + 12 * (*(char*)(a2 + 443) - 1) + 24));
        if ((!*(_BYTE*)(a2 + 392) || *(_BYTE*)(a2 + 393)) && !*(_BYTE*)(a2 + 438) && *(_WORD*)(a2 + 484) != 5)
        {
            v9 = (float)*(int*)(a2 + 360);
            v8 = (float)*(int*)a2;
            v7 = (float)*(int*)(a2 + 24);
            *(_DWORD*)(a2 + 428) = (__int64)(v8 * 0.5 + v9 - v7 * 0.5);
            *(_DWORD*)(a2 + 432) = *(unsigned __int8*)(a2 + 437) + *(_DWORD*)(a2 + 364);
            sub_4D05E6(a1, *(_DWORD*)(a2 + 428), *(_DWORD*)(a2 + 432), (int*)(a2 + 12 * (*(char*)(a2 + 443) - 1) + 24));
        }
    }
    v12 = 0;
    v17 = 0;
    while (v12 < *(_DWORD*)(a2 + 368))
    {
        if (*(_BYTE*)(*(_DWORD*)(a2 + 372) + 3 * v12 + 2))
        {
            switch (*(_BYTE*)(*(_DWORD*)(a2 + 372) + 3 * v12 + 1))
            {
            case 1:
                sub_4D05E6(
                    a1,
                    v17,
                    *(unsigned __int8*)(a2 + 380)
                    - *(_DWORD*)(a2 + 112) * *(unsigned __int8*)(*(_DWORD*)(a2 + 372) + 3 * v12)
                    - *(_DWORD*)(a2 + 112),
                    (int*)(a2 + 60));
                break;
            case 2:
                sub_4D05E6(
                    a1,
                    v17,
                    *(unsigned __int8*)(a2 + 380)
                    - *(_DWORD*)(a2 + 112) * *(unsigned __int8*)(*(_DWORD*)(a2 + 372) + 3 * v12)
                    - *(_DWORD*)(a2 + 112),
                    (int*)(a2 + 72));
                break;
            case 3:
                sub_4D05E6(
                    a1,
                    v17,
                    *(unsigned __int8*)(a2 + 380)
                    - *(_DWORD*)(a2 + 112) * *(unsigned __int8*)(*(_DWORD*)(a2 + 372) + 3 * v12)
                    - *(_DWORD*)(a2 + 112),
                    (int*)(a2 + 84));
                break;
            case 4:
                sub_4D05E6(
                    a1,
                    v17,
                    *(unsigned __int8*)(a2 + 380)
                    - *(_DWORD*)(a2 + 112) * *(unsigned __int8*)(*(_DWORD*)(a2 + 372) + 3 * v12)
                    - *(_DWORD*)(a2 + 112),
                    (int*)(a2 + 96));
                break;
            default:
                break;
            }
        }
        v10 = 0;
        v16 = *(unsigned __int8*)(a2 + 380) - *(_DWORD*)(a2 + 112) * *(unsigned __int8*)(*(_DWORD*)(a2 + 372) + 3 * v12);
        while (v10 < *(unsigned __int8*)(*(_DWORD*)(a2 + 372) + 3 * v12))
        {
            switch (*(_BYTE*)(*(_DWORD*)(a2 + 372) + 3 * v12 + 1))
            {
            case 1:
                sub_4D05E6(a1, v17, v16, (int*)(a2 + 108));
                break;
            case 2:
                sub_4D05E6(a1, v17, v16, (int*)(a2 + 120));
                break;
            case 3:
                sub_4D05E6(a1, v17, v16, (int*)(a2 + 132));
                break;
            case 4:
                sub_4D05E6(a1, v17, v16, (int*)(a2 + 144));
                break;
            default:
                break;
            }
            ++v10;
            v16 += *(_DWORD*)(a2 + 112);
        }
        ++v12;
        v17 += *(_DWORD*)(a2 + 108);
    }
    for (j = 0; j < *(_DWORD*)(a2 + 352); ++j)
    {
        if (*(_BYTE*)(*(_DWORD*)(a2 + 348) + 32 * j))
        {
            if (*(float*)(*(_DWORD*)(a2 + 348) + 32 * j + 4) >= 0.0
                && *(float*)(*(_DWORD*)(a2 + 348) + 32 * j + 4) <= 127.0
                && *(float*)(*(_DWORD*)(a2 + 348) + 32 * j + 8) >= 8.0
                && (v6 = (float)*(unsigned __int8*)(a2 + 380), *(float*)(*(_DWORD*)(a2 + 348) + 32 * j + 8) <= (double)v6))
            {
                sub_4D0743(
                    (__int64)*(float*)(*(_DWORD*)(a2 + 348) + 32 * j + 4),
                    (__int64)*(float*)(*(_DWORD*)(a2 + 348) + 32 * j + 8),
                    *(_WORD*)(*(_DWORD*)(a2 + 348) + 32 * j + 30) & 0x1F,
                    ((int)*(unsigned __int16*)(*(_DWORD*)(a2 + 348) + 32 * j + 30) >> 5) & 0x1F,
                    ((int)*(unsigned __int16*)(*(_DWORD*)(a2 + 348) + 32 * j + 30) >> 10) & 0x1F,
                    (int)a1);
            }
            else
            {
                *(_BYTE*)(*(_DWORD*)(a2 + 348) + 32 * j) = 0;
            }
        }
    }
    if (*(_WORD*)(a2 + 484) == 5 && (*(_BYTE*)(a2 + 476) == 7 || *(_BYTE*)(a2 + 476) == 8))
    {
        v5 = (float)*(int*)(a2 + 4);
        v4 = (float)*(int*)(a2 + 16);
        v3 = (float)*(unsigned __int8*)(a2 + 395);
        sub_4D05E6(a1, (__int64)*(float*)(a2 + 404), (__int64)(v5 + *(float*)(a2 + 408) - v4 + v3), (int*)(a2 + 12));
        sub_4D05E6(a1, (__int64)*(float*)(a2 + 404), (__int64)*(float*)(a2 + 408), (int*)a2);
    }
    if (*(_WORD*)(a2 + 484) != 5 && *(_WORD*)(a2 + 484) != 3 && *(_WORD*)(a2 + 484) != 1)
        sub_4D05E6(a1, *(_DWORD*)(a2 + 360), *(_DWORD*)(a2 + 364), (int*)a2);
    result = sub_4D290F(
        100 * *(unsigned __int16*)(a2 + 466),
        100 * *(unsigned __int16*)(a2 + 468),
        (_DWORD*)(a2 + 228),
        a1,
        byte_5CAA30);
    if (byte_5CAA30 == 2)
    {
        result = (int)sub_4D05E6(
            a1,
            a1[2] / 2 - *(_DWORD*)(a2 + 180) / 2,
            a1[3] / 2 - *(_DWORD*)(a2 + 184) / 2,
            (int*)(a2 + 180));
    }
    else if (*(_WORD*)(a2 + 484) == 5
        && (*(_BYTE*)(a2 + 476) == 1 || (result = *(unsigned __int8*)(a2 + 476), !*(_BYTE*)(a2 + 476))))
    {
        sub_4D05E6(a1, a1[2] / 2 - *(_DWORD*)(a2 + 204) / 2, a1[3] / 2, (int*)(a2 + 204));
        if (*(_DWORD*)(a2 + 460) + 1 >= 10)
            v14 = 8;
        else
            v14 = 4;
        result = (int)sub_4D29D9(
            a1[2] / 2 - v14,
            *(_DWORD*)(a2 + 208) + a1[3] / 2,
            *(_DWORD*)(a2 + 460) + 1,
            (_DWORD*)(a2 + 228),
            a1);
    }
    else if (*(_WORD*)(a2 + 484) == 5)
    {
        result = a2;
        if (*(_BYTE*)(a2 + 476) == 6)
            result = (int)sub_4D05E6(a1, a1[2] / 2 - *(_DWORD*)(a2 + 192) / 2, a1[3] / 2, (int*)(a2 + 192));
    }
    if (!byte_5CAA30)
    {
        v18 = 119;
        for (k = 0; ; ++k)
        {
            result = *(unsigned __int8*)(a2 + 464) - 1;
            if (k >= result)
                break;
            sub_4D05E6(a1, v18, 0, (int*)(a2 + 216));
            v18 -= *(_DWORD*)(a2 + 216);
        }
    }
    if (a1[1])
        result = sub_569C41(a1[1], a1[4]);
    return result;
}
// 5CAA30: using guessed type char byte_5CAA30;

//----- (004DFFB8) --------------------------------------------------------
BOOL __cdecl sub_4DFFB8(int a1)
{
    return !*(_BYTE*)(a1 + 438)
        && !*(_BYTE*)(a1 + 392)
        && *(_BYTE*)(*(_DWORD*)(a1 + 372) + 3 * ((*(_DWORD*)a1 / 2 + *(_DWORD*)(a1 + 360)) / *(_DWORD*)(a1 + 108)));
}

//----- (004D27CD) --------------------------------------------------------
int __cdecl sub_4D27CD(int a1)
{
    int result; // eax
    int i; // [esp+4h] [ebp-4h]

    for (i = 0; i < *(_DWORD*)(a1 + 352); ++i)
    {
        if (*(_BYTE*)(*(_DWORD*)(a1 + 348) + 32 * i))
        {
            *(float*)(*(_DWORD*)(a1 + 348) + 32 * i + 4) = *(float*)(*(_DWORD*)(a1 + 348) + 32 * i + 4)
                + *(float*)(*(_DWORD*)(a1 + 348) + 32 * i + 12);
            *(float*)(*(_DWORD*)(a1 + 348) + 32 * i + 8) = *(float*)(*(_DWORD*)(a1 + 348) + 32 * i + 8)
                + *(float*)(*(_DWORD*)(a1 + 348) + 32 * i + 16);
            *(float*)(*(_DWORD*)(a1 + 348) + 32 * i + 16) = *(float*)(*(_DWORD*)(a1 + 348) + 32 * i + 16)
                + *(float*)(a1 + 388);
            if ((int)-- * (_DWORD*)(*(_DWORD*)(a1 + 348) + 32 * i + 20) <= 0)
                *(_BYTE*)(*(_DWORD*)(a1 + 348) + 32 * i) = 0;
        }
        result = i + 1;
    }
    return result;
}

//----- (004DFAF5) --------------------------------------------------------
int __cdecl sub_4DFAF5(int a1)
{
    int result; // eax
    float v2; // [esp+0h] [ebp-20h]
    float v3; // [esp+8h] [ebp-18h]
    float v4; // [esp+Ch] [ebp-14h]

    if (word_604302 == 39)
    {
        if (!((int)Seed % *(unsigned __int8*)(a1 + 384)))
            *(_DWORD*)(a1 + 360) += *(unsigned __int8*)(a1 + 381);
    }
    else
    {
        *(_DWORD*)(a1 + 360) += *(unsigned __int8*)(a1 + 381);
    }
    result = a1;
    if (*(_DWORD*)(a1 + 360) > *(_DWORD*)a1 + 127)
    {
        if (sub_4DFAAA(a1))
        {
            *(_WORD*)(a1 + 484) = 5;
            *(_BYTE*)(a1 + 476) = 7;
            *(_DWORD*)(a1 + 472) = 99999;
            *(float*)(a1 + 408) = (float)(*(unsigned __int8*)(a1 + 380) - 2 * *(_DWORD*)(a1 + 4) - *(_DWORD*)(a1 + 16));
            *(float*)(a1 + 404) = (float)-*(_DWORD*)a1;
            *(float*)(a1 + 396) = (float)*(unsigned __int8*)(a1 + 381);
            v4 = (float)*(int*)(a1 + 4);
            v3 = (float)(64 / *(unsigned __int8*)(a1 + 381));
            *(float*)(a1 + 400) = v4 / v3;
            *(_BYTE*)(a1 + 395) = 0;
            *(_DWORD*)(a1 + 412) = -15;
            v2 = (float)*(unsigned __int16*)(a1 + 480);
            *(float*)(a1 + 416) = (v2 - *(float*)(a1 + 420)) / 240.0;
        }
        else
        {
            *(_DWORD*)(a1 + 364) += *(unsigned __int8*)(a1 + 382);
            *(_WORD*)(a1 + 480) -= 2;
            if (*(__int16*)(a1 + 478) != -1)
                is_wctype(*(_WORD*)(a1 + 478), *(_WORD*)(a1 + 480));
        }
        result = a1;
        *(_DWORD*)(a1 + 360) = -*(_DWORD*)a1;
    }
    return result;
}
// 604302: using guessed type __int16 word_604302;

//----- (004E0022) --------------------------------------------------------
char __cdecl sub_4E0022(int a1, int a2)
{
    int v2; // eax
    __int16 v3; // ax
    int v4; // esi
    int v5; // esi
    int v6; // eax
    __int16 v7; // ax
    int v9; // [esp+8h] [ebp-24h]
    int v10; // [esp+Ch] [ebp-20h]
    int j; // [esp+10h] [ebp-1Ch]
    int i; // [esp+14h] [ebp-18h]
    __int16 C; // [esp+18h] [ebp-14h]
    __int16 Ca; // [esp+18h] [ebp-14h]
    int k; // [esp+1Ch] [ebp-10h]
    int v16; // [esp+24h] [ebp-8h]
    int v17; // [esp+28h] [ebp-4h]

    LOBYTE(v2) = a1;
    if (*(int*)(a1 + 428) > 0
        && *(int*)(a1 + 428) < 128
        && *(int*)(a1 + 432) > 0
        && (LOBYTE(v2) = a1, *(int*)(a1 + 432) < 128))
    {
        if (*(_BYTE*)(a1 + 393))
        {
            if (*(_DWORD*)a1 / 2 + *(_DWORD*)(a1 + 360) - *(_DWORD*)(a1 + 24) / 2 >= *(_DWORD*)(a1 + 428))
            {
                *(_BYTE*)(a1 + 444) = 0;
                *(_BYTE*)(a1 + 393) = 0;
                *(_BYTE*)(a1 + 392) = 1;
                *(_BYTE*)(a1 + 445) = 1;
                if ((byte_5CAA50 & 4) != 0)
                {
                    C = sub_4D07B5(dword_5A03A0);
                    v3 = rand() % 32;
                    is_wctype(C, v3 + 240);
                }
            }
        }
        LOBYTE(v2) = *(_BYTE*)(a1 + 392);
        if ((_BYTE)v2)
        {
            *(_DWORD*)(a1 + 432) += *(unsigned __int8*)(a1 + 442);
            v10 = *(_DWORD*)(a1 + 428) / *(_DWORD*)(a1 + 108);
            if (*(_DWORD*)(a1 + 28) + *(_DWORD*)(a1 + 432) < *(unsigned __int8*)(a1 + 380))
            {
                LOBYTE(v2) = *(_BYTE*)(*(_DWORD*)(a1 + 372) + 3 * v10);
                if ((_BYTE)v2)
                {
                    v17 = *(unsigned __int8*)(a1 + 380)
                        - *(_DWORD*)(a1 + 112) * *(unsigned __int8*)(*(_DWORD*)(a1 + 372) + 3 * v10);
                    LOBYTE(v2) = a1;
                    if (*(_DWORD*)(a1 + 28) + *(_DWORD*)(a1 + 432) >= v17)
                    {
                        ++* (_WORD*)(a1 + 466);
                        --* (_BYTE*)(*(_DWORD*)(a1 + 372) + 3 * v10);
                        *(_BYTE*)(a1 + 444) = 1;
                        if (*(_BYTE*)(a1 + 445))
                        {
                            if ((byte_5CAA50 & 4) != 0)
                            {
                                Ca = sub_4D07B5(dword_5A03A4);
                                v7 = rand() % 32;
                                is_wctype(Ca, v7 + 240);
                            }
                            *(_BYTE*)(a1 + 445) = 0;
                        }
                        if (*(_BYTE*)(*(_DWORD*)(a1 + 372) + 3 * v10))
                            *(_BYTE*)(*(_DWORD*)(a1 + 372) + 3 * v10 + 2) = 1;
                        else
                            *(_BYTE*)(*(_DWORD*)(a1 + 372) + 3 * v10 + 2) = 0;
                        LOBYTE(v2) = a1;
                        if (!-- * (_BYTE*)(a1 + 443))
                        {
                            *(_BYTE*)(a1 + 392) = 0;
                            *(_BYTE*)(a1 + 438) = *(_BYTE*)(a1 + 439);
                            v9 = rand() % 100;
                            v2 = *(unsigned __int8*)(a1 + 446);
                            if (v9 <= v2)
                            {
                                v2 = *(unsigned __int8*)(a1 + 447);
                                if (v9 <= v2)
                                    *(_BYTE*)(a1 + 443) = 1;
                                else
                                    *(_BYTE*)(a1 + 443) = 2;
                            }
                            else
                            {
                                *(_BYTE*)(a1 + 443) = 3;
                            }
                        }
                        for (i = 0; i < *(_DWORD*)(a1 + 108); ++i)
                        {
                            for (j = 0; j < *(_DWORD*)(a1 + 112); ++j)
                                sub_4D0B54(j + *(_DWORD*)(a1 + 108) * v10, i + v17, 60, 0, a1, a2);
                            LOBYTE(v2) = i + 1;
                        }
                    }
                }
            }
            else
            {
                for (k = 0; k < 32; ++k)
                {
                    v4 = *(_DWORD*)(a1 + 108) * v10;
                    v16 = rand() % *(_DWORD*)(a1 + 108) + v4;
                    v5 = *(unsigned __int8*)(a1 + 380);
                    v6 = rand();
                    sub_4D0B54(v16, v5 - v6 % *(_DWORD*)(a1 + 112), 60, 0, a1, a2);
                }
                if ((byte_5CAA50 & 4) != 0 && !*(_BYTE*)(a1 + 444))
                    sub_4D07B5(dword_5A03A8);
                LOBYTE(v2) = *(_BYTE*)(a1 + 439);
                *(_BYTE*)(a1 + 438) = v2;
                *(_BYTE*)(a1 + 392) = 0;
            }
        }
    }
    else
    {
        *(_BYTE*)(a1 + 393) = 0;
        *(_BYTE*)(a1 + 392) = 0;
    }
    return v2;
}
// 5A03A0: using guessed type int dword_5A03A0;
// 5A03A4: using guessed type int dword_5A03A4;
// 5A03A8: using guessed type int dword_5A03A8;
// 5CAA50: using guessed type char byte_5CAA50;

//----- (004DFF2A) --------------------------------------------------------
int __cdecl sub_4DFF2A(int a1)
{
    int v2; // [esp+Ch] [ebp-4h]

    v2 = (*(_DWORD*)a1 + *(_DWORD*)(a1 + 360)) / *(_DWORD*)(a1 + 108);
    if (v2 >= 16
        || *(_DWORD*)(a1 + 4) + *(_DWORD*)(a1 + 364) < *(unsigned __int8*)(a1 + 380)
        - *(_DWORD*)(a1 + 112)
        * *(unsigned __int8*)(*(_DWORD*)(a1 + 372) + 3 * v2))
    {
        return 0;
    }
    *(_BYTE*)(a1 + 448) = *(_BYTE*)(a1 + 364);
    return 1;
}

//----- (004D0B54) --------------------------------------------------------
void __cdecl sub_4D0B54(int a1, int a2, int a3, int a4, int a5, int a6)
{
    float v6; // [esp+4h] [ebp-3Ch]
    float v7; // [esp+8h] [ebp-38h]
    float v8; // [esp+Ch] [ebp-34h]
    float v9; // [esp+14h] [ebp-2Ch]
    float v10; // [esp+18h] [ebp-28h]
    unsigned __int16 v11; // [esp+1Ch] [ebp-24h]
    int v12; // [esp+2Ch] [ebp-14h]
    int i; // [esp+30h] [ebp-10h]
    int v14; // [esp+34h] [ebp-Ch]
    float v15; // [esp+38h] [ebp-8h]
    float v16; // [esp+38h] [ebp-8h]
    float v17; // [esp+3Ch] [ebp-4h]
    float v18; // [esp+3Ch] [ebp-4h]

    v12 = 1;
    for (i = 0; i < *(_DWORD*)(a5 + 352); ++i)
    {
        if (!*(_BYTE*)(*(_DWORD*)(a5 + 348) + 32 * i))
        {
            v12 = 0;
            v14 = i;
            break;
        }
    }
    if (!v12)
    {
        *(_BYTE*)(*(_DWORD*)(a5 + 348) + 32 * v14) = 1;
        if (a4)
        {
            do
            {
                dword_6AD840 = (unsigned __int16)(20077 * dword_6AD840 + 12345);
                v7 = (float)dword_6AD840;
                v18 = (v7 * 0.000030517578 - 1.0) * *(float*)(a5 + 356);
                dword_6AD840 = (unsigned __int16)(20077 * dword_6AD840 + 12345);
                v6 = (float)dword_6AD840;
                v16 = (v6 * 0.000030517578 - 1.0) * *(float*)(a5 + 356);
            } while (*(float*)(a5 + 356) * 0.5 < v18 * v18 + v16 * v16);
            *(float*)(*(_DWORD*)(a5 + 348) + 32 * v14 + 12) = v18;
            *(float*)(*(_DWORD*)(a5 + 348) + 32 * v14 + 16) = v16;
            *(_WORD*)(*(_DWORD*)(a5 + 348) + 32 * v14 + 30) = 1057 * (rand() % 16 + 15);
        }
        else
        {
            v11 = *(_WORD*)(*(_DWORD*)(a6 + 16) + 2 * *(_DWORD*)(a6 + 8) * a2 + 2 * a1);
            *(_WORD*)(*(_DWORD*)(a5 + 348) + 32 * v14 + 30) = (v11 & 0x1F)
                + 32 * (((int)v11 >> 5) & 0x1F)
                + ((((int)v11 >> 10) & 0x1F) << 10);
            if ((((int)v11 >> 10) & 0x1F) == 0 && (((int)v11 >> 5) & 0x1F) == 0 && (v11 & 0x1F) == 0)
            {
                *(_BYTE*)(*(_DWORD*)(a5 + 348) + 32 * v14) = 0;
                return;
            }
            do
            {
                dword_6AD840 = (unsigned __int16)(20077 * dword_6AD840 + 12345);
                v10 = (float)dword_6AD840;
                v17 = (v10 * 0.000030517578 - 1.0) * 0.5;
                dword_6AD840 = (unsigned __int16)(20077 * dword_6AD840 + 12345);
                v9 = (float)dword_6AD840;
                v15 = (v9 * 0.000030517578 - 1.0) * 0.5;
            } while (v17 * v17 + v15 * v15 > 0.25);
            v8 = (float)*(unsigned __int8*)(a5 + 381);
            *(float*)(*(_DWORD*)(a5 + 348) + 32 * v14 + 12) = v8 + *(float*)(*(_DWORD*)(a5 + 348) + 32 * v14 + 12);
            *(float*)(*(_DWORD*)(a5 + 348) + 32 * v14 + 12) = v17;
            *(float*)(*(_DWORD*)(a5 + 348) + 32 * v14 + 16) = v15;
        }
        *(float*)(*(_DWORD*)(a5 + 348) + 32 * v14 + 4) = (float)a1;
        *(float*)(*(_DWORD*)(a5 + 348) + 32 * v14 + 8) = (float)a2;
        *(_DWORD*)(*(_DWORD*)(a5 + 348) + 32 * v14 + 20) = a3;
    }
}
// 4D0BB9: variable 'v14' is possibly undefined
// 6AD840: using guessed type int dword_6AD840;

//----- (004DF941) --------------------------------------------------------
int __cdecl sub_4DF941(int a1)
{
    int result; // eax

    *(_DWORD*)(a1 + 360) = -*(_DWORD*)a1;
    *(_DWORD*)(a1 + 364) = 12;
    if (word_604302 == 39)
        *(_BYTE*)(a1 + 442) = *(_BYTE*)(a1 + 385);
    sub_4DF865((_DWORD*)a1);
    *(_BYTE*)(a1 + 443) = rand() % 2 + 2;
    *(_BYTE*)(a1 + 392) = 0;
    *(_BYTE*)(a1 + 393) = 0;
    *(_BYTE*)(a1 + 394) = 0;
    *(_WORD*)(a1 + 480) = 256;
    result = a1;
    if (*(__int16*)(a1 + 478) != -1)
    {
        result = sub_57E927(*(_WORD*)(a1 + 478));
        *(_WORD*)(a1 + 478) = -1;
    }
    return result;
}
// 604302: using guessed type __int16 word_604302;

//----- (004DFA53) --------------------------------------------------------
int __cdecl sub_4DFA53(int a1)
{
    int result; // eax

    result = byte_5CAA50 & 4;
    if ((byte_5CAA50 & 4) != 0 && *(__int16*)(a1 + 478) == -1)
    {
        *(_WORD*)(a1 + 478) = sub_4D07B5(dword_5A039C);
        result = sub_57E95F(*(_WORD*)(a1 + 478), *(_BYTE*)(a1 + 482));
    }
    return result;
}
// 5A039C: using guessed type int dword_5A039C;
// 5CAA50: using guessed type char byte_5CAA50;

//----- (004DFA02) --------------------------------------------------------
int __cdecl sub_4DFA02(int a1)
{
    int result; // eax

    *(_WORD*)(a1 + 466) = 0;
    *(_BYTE*)(a1 + 464) = 3;
    *(_BYTE*)(a1 + 381) = 1;
    *(_DWORD*)(a1 + 452) = 0;
    *(_DWORD*)(a1 + 460) = 0;
    result = a1;
    *(_BYTE*)(a1 + 439) = *(_BYTE*)(a1 + 440);
    return result;
}

//----- (004DFCFF) --------------------------------------------------------
int __cdecl sub_4DFCFF(int a1)
{
    int result; // eax
    float v2; // [esp+0h] [ebp-18h]
    float v3; // [esp+8h] [ebp-10h]
    float v4; // [esp+Ch] [ebp-Ch]
    float v5; // [esp+10h] [ebp-8h]

    if ((__int64)*(float*)(a1 + 408) >= *(unsigned __int8*)(a1 + 380) - *(_DWORD*)(a1 + 4) - *(_DWORD*)(a1 + 16) + 1)
    {
        v5 = (float)*(unsigned __int8*)(a1 + 380);
        v4 = (float)*(int*)(a1 + 4);
        v3 = (float)*(int*)(a1 + 16);
        *(float*)(a1 + 408) = v5 - v4 - v3 + 1.0;
    }
    if (*(float*)(a1 + 396) < 0.00019999999)
    {
        *(_BYTE*)(a1 + 476) = 8;
        *(_DWORD*)(a1 + 472) = 60;
        if (*(__int16*)(a1 + 478) != -1)
        {
            sub_57E927(*(_WORD*)(a1 + 478));
            *(_WORD*)(a1 + 478) = -1;
        }
    }
    if (*(int*)(a1 + 412) > 0 && !(*(_DWORD*)(a1 + 412) % 6))
        ++* (_BYTE*)(a1 + 395);
    if (*(unsigned __int8*)(a1 + 395) > *(_DWORD*)(a1 + 16) - 1)
        *(_BYTE*)(a1 + 395) = *(_DWORD*)(a1 + 16) - 1;
    *(_WORD*)(a1 + 480) -= (__int64)*(float*)(a1 + 416);
    v2 = (float)*(unsigned __int16*)(a1 + 480);
    if (v2 < (double)*(float*)(a1 + 420))
        *(_WORD*)(a1 + 480) = (unsigned __int8)(__int64)*(float*)(a1 + 420);
    if (*(__int16*)(a1 + 478) != -1)
        is_wctype(*(_WORD*)(a1 + 478), *(_WORD*)(a1 + 480));
    *(float*)(a1 + 404) = *(float*)(a1 + 404) + *(float*)(a1 + 396);
    *(float*)(a1 + 408) = *(float*)(a1 + 408) + *(float*)(a1 + 400);
    *(float*)(a1 + 396) = *(float*)(a1 + 396) - *(float*)(a1 + 424);
    result = a1;
    ++* (_DWORD*)(a1 + 412);
    return result;
}