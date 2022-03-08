#include "tempplace.h"

#include <cstdarg>
#include <cstdlib>
#include <stdio.h>
#include "debug.h"
#include "files.h"
#include "sounds.h"
#include "settings.h"
#include "globalVariables.h"
#include "gamespy.h"
#include "maybe.h"

char aLegalTga[10] = "legal.tga"; // weak
char aLevelsTxt[] = "levels.txt"; // idb
char aSettingsTxt[] = "settings.txt"; // idb
char aAcclaimTga[12] = "ACCLAIM.tga"; // weak
char aBizarreTga[12] = "bizarre.tga"; // weak
char aMilesTga[10] = "miles.tga"; // weak
char aEaxTga[8] = "eax.tga"; // weak

size_t Size; // idb

//----- (00448C20) --------------------------------------------------------
int some_init()
{
    int v0; // eax
    char v1; // cl
    char* v2; // eax
    int result; // eax
    char v4; // [esp+0h] [ebp-Ch]
    char v5; // [esp+0h] [ebp-Ch]
    char v6; // [esp+0h] [ebp-Ch]
    char v7; // [esp+0h] [ebp-Ch]
    int i; // [esp+0h] [ebp-Ch]
    int v9; // [esp+8h] [ebp-4h]
    int v10; // [esp+8h] [ebp-4h]
    int v11; // [esp+8h] [ebp-4h]
    int v12; // [esp+8h] [ebp-4h]

    *(_DWORD*)&g_IsDebug = 1;
    g_maybeDemoVersionType = 0;
    g_UselessVariable = 1;
    word_668766 = 0;
    byte_622C50 = 2;
    sub_53EE90();
    _cfltcvt_init_2();
    readRegisterSoundSettings();
    writeDebug("Allocating Game Heap....", v4);
    Size = 0x1100000;
    dword_66D820 = malloc(0x1100000u);
    sub_53EF49();
    showTGAImageTimed(aLegalTga, 1);
    writeDebug("Allocating Loading Screen...", v5);
    unknown_libname_4();
    sub_55420C(10, 1);
    sub_55429D(6, 1, 0);
    sub_55429D(7, 1, 0);
    sub_55429D(4, 0, 0);
    sub_55429D(5, 0, 0);
    sub_55429D(2, 0, 0);
    sub_55429D(1, 0, 0);
    sub_55429D(0, 0, 0);
    sub_55429D(11, 0, 0);
    sub_55429D(3, 0, 0);
    sub_55429D(9, 0, 0);
    sub_55429D(8, 0, 0);
    sub_55429D(17, 0, 0);
    sub_55429D(16, 0, 0);
    sub_55429D(18, 0, 0);
    sub_55429D(19, 0, 0);
    sub_55429D(20, 0, 0);
    sub_55429D(21, 0, 0);
    sub_55429D(22, 0, 0);
    sub_55429D(23, 0, 0);
    sub_55429D(24, 0, 0);
    sub_55429D(25, 0, 0);
    sub_55429D(6, 0, 1);
    sub_55429D(7, 0, 1);
    sub_55429D(4, 0, 1);
    sub_55429D(5, 0, 1);
    sub_55429D(2, 0, 1);
    sub_55429D(1, 0, 1);
    sub_55429D(0, 0, 1);
    sub_55429D(11, 0, 1);
    sub_55429D(3, 0, 0);
    sub_55429D(9, 0, 1);
    sub_55429D(8, 0, 1);
    sub_55429D(17, 0, 1);
    sub_55429D(16, 0, 1);
    sub_55429D(18, 0, 1);
    sub_55429D(19, 0, 1);
    sub_55429D(20, 0, 1);
    sub_55429D(21, 0, 1);
    sub_55429D(22, 0, 1);
    sub_55429D(23, 0, 1);
    sub_55429D(24, 0, 1);
    sub_55429D(25, 0, 1);
    v0 = (int)getFormattedString(aLevelsTxt, g_IsGameCDInserted);
    loadSettings(v0);
    v2 = getFormattedString(aSettingsTxt, v1);
    anotherLoadSettings(v2);
    sub_45CF8C();
    if (getSettingsValue("Demo Version", 0) == 1)
    {
        g_maybeDemoVersionType = 2;
        g_maybeSomeDemoVersionType = 0;
        g_maybeAnotherDemoVersionType = 0;
        g_maybeDemoVersionMinutesCounter = 0;
    }
    else if (getSettingsValue("Demo Version", 0) == 2)
    {
        g_maybeDemoVersionType = 2;
        g_maybeSomeDemoVersionType = 1;
    }
    else if (getSettingsValue("Demo Version", 0) == 3)
    {
        g_maybeDemoVersionType = 2;
        g_maybeSomeDemoVersionType = 0;
        g_maybeAnotherDemoVersionType = 1;
        g_maybeDemoVersionMinutesCounter = 0;
    }
    sub_53EF02();
    loadGUISettings();
    loadCrocodyleSettings();
    loadBearSettings();
    loadPeacockSettings();
    loadWeaponSettings();
    sub_4260C2();
    writeDebug("Setting Up Gameflow Sections...", v6);
    dword_604540 = (int)sub_45CF56;
    dword_604544 = (int)sub_45CF56;
    dword_604548 = (int)sub_462D57;
    dword_60454C = (int)sub_46322C;
    dword_604550 = (int)sub_461AB0;
    dword_604554 = (int)sub_461F84;
    dword_604558 = (int)maybe_NewGame;
    dword_60455C = (int)sub_4409FA;
    dword_604560 = (int)sub_4773F6;
    dword_604564 = (int)sub_449665;
    dword_604568 = (int)sub_42BB30;
    dword_60456C = (int)sub_42C237;
    dword_604570 = (int)sub_429BD0;
    dword_604574 = (int)sub_429D91;
    dword_604578 = (int)sub_44D054;
    dword_60457C = (int)sub_45CF56;
    dword_604580 = (int)sub_42CCA3;
    dword_604584 = (int)sub_42D26B;
    dword_604528 = 0;
    dword_604524 = 0;
    word_604322 = 1;
    if (dword_668784 == 1)
    {
        sub_45C761(3, 4);
    }
    else if (dword_668784 == 2)
    {
        sub_45C761(3, 3);
    }
    else if (g_maybeDemoVersionType == 2)
    {
        sub_45C761(3, 0);
    }
    else
    {
        sub_45C761(2, 0);
    }
    dword_6045C4 = 0;
    dword_6045C8 = 0;
    loadLanguageDatas();
    init_LoadWeaponSettings();
    v9 = AIL_ms_count();
    showTGAImageTimed(aAcclaimTga, 2);
    while (AIL_ms_count() < (unsigned int)(v9 + 4000))
        ;
    if (g_maybeDemoVersionType == 2)
    {
        showTGAImageTimed(aBizarreTga, 1);
        v10 = AIL_ms_count();
        while (AIL_ms_count() < (unsigned int)(v10 + 4001))
            ;
        showTGAImageTimed(aMilesTga, 1);
        v11 = AIL_ms_count();
        while (AIL_ms_count() < (unsigned int)(v11 + 4000))
            ;
        if (isEAXSoundProviderLoaded)
        {
            showTGAImageTimed(aEaxTga, 1);
            v12 = AIL_ms_count();
            while (AIL_ms_count() < (unsigned int)(v12 + 4000))
                ;
        }
    }
    sub_4C37E6();
    dword_668BE0 = 0;
    dword_6AD860 = 1;
    dword_6AD864 = 0;
    dword_604280 = 0;
    dword_604288 = 0;
    dword_604294 = 0;
    dword_60428C = 0;
    dword_6042B4 = 0;
    dword_6AD86C = 1;
    dword_6586C0 = 1;
    dword_6586C4 = 1;
    dword_6586C8 = 1;
    dword_6586CC = 0;
    dword_6586D0 = 0;
    dword_6586D4 = 0;
    dword_6586D8 = 0;
    dword_6586DC = 0;
    dword_6586E0 = 0;
    dword_667E88 = 0;
    srand(0x3039u);
    writeDebug("Setting up level defaults", v7);
    for (i = 0; i < 72; ++i)
    {
        dword_601DD8[32 * i] = 30 * (rand() % 60 + 120);
        strncpy((char*)&unk_601DDC + 128 * i, (&off_59F7B4)[i % 15], 3u);
        dword_601DE0[32 * i] = 30 * (rand() % 60 + 90);
        strncpy((char*)&unk_601DE4 + 128 * i, (&off_59F7B4)[(i + 1) % 15], 3u);
        dword_601DE8[32 * i] = 30 * (rand() % 60 + 60);
        strncpy((char*)&unk_601DEC + 128 * i, (&off_59F7B4)[(i + 2) % 15], 3u);
    }
    dword_6041EA = 0;
    dword_6041EE = 0;
    dword_6041F2 = 0;
    result = writeDebug("Setting Up Default Preferences", i);
    byte_6041D5 = -1;
    byte_6041D6 = -1;
    byte_6041E8 = -1;
    dword_6041E4 = -1;
    byte_6041D7 = 0;
    dword_6041D8 = 0;
    word_6041DC = 0;
    word_6041DE = 0;
    word_601646 = 0;
    word_6016C6 = 0;
    dword_604344 = 0;
    dword_6041E0 = 0;
    dword_604204 = 1;
    dword_60425C = 1;
    dword_6045E0 = 0;
    dword_6045E4 = 0;
    dword_604594 = 0;
    dword_667E90 = 0;
    word_6045E8 = 0;
    word_6045EA = 0;
    return result;
}
// 448C66: variable 'v4' is possibly undefined
// 448CA4: variable 'v5' is possibly undefined
// 448F34: variable 'v1' is possibly undefined
// 449002: variable 'v6' is possibly undefined
// 4492F1: variable 'v7' is possibly undefined
// 411E50: using guessed type int loadBearSettings(void);
// 4260C2: using guessed type int sub_4260C2(void);
// 429BD0: using guessed type int sub_429BD0();
// 429D91: using guessed type int sub_429D91();
// 42A970: using guessed type int loadCrocodyleSettings(void);
// 42C237: using guessed type int sub_42C237();
// 42CCA3: using guessed type int __cdecl sub_42CCA3(int);
// 42D26B: using guessed type int sub_42D26B();
// 43FD27: using guessed type int __cdecl maybe_NewGame(int);
// 444944: using guessed type int _cfltcvt_init_2(void);
// 449665: using guessed type int sub_449665();
// 44D054: using guessed type int __cdecl sub_44D054(int);
// 45C761: using guessed type int __cdecl sub_45C761(_DWORD, _DWORD);
// 45CF56: using guessed type int __cdecl sub_45CF56(int);
// 45CF8C: using guessed type int sub_45CF8C(void);
// 461AB0: using guessed type int sub_461AB0();
// 461F84: using guessed type int sub_461F84();
// 462D57: using guessed type int sub_462D57();
// 46322C: using guessed type int sub_46322C();
// 466DE0: using guessed type int loadLanguageDatas(void);
// 47B665: using guessed type int __cdecl sub_47B665(_DWORD);
// 48692B: using guessed type int loadGUISettings(void);
// 48C7B0: using guessed type int loadPeacockSettings(void);
// 48ED94: using guessed type int loadWeaponSettings(void);
// 4C37E6: using guessed type int sub_4C37E6(void);
// 4FDD8A: using guessed type int init_LoadWeaponSettings(void);
// 53EE90: using guessed type int sub_53EE90(void);
// 53EF02: using guessed type int sub_53EF02(void);
// 53EF49: using guessed type int sub_53EF49(void);
// 53F9F3: using guessed type _DWORD __cdecl sub_53F9F3(_DWORD, _DWORD);
// 55420C: using guessed type _DWORD __cdecl sub_55420C(__int16, __int16);
// 55429D: using guessed type _DWORD __cdecl sub_55429D(__int16, __int16, __int16);
// 56EABA: using guessed type int unknown_libname_4(void);
// 56ED8D: using guessed type _DWORD __cdecl sub_56ED8D(_DWORD, _DWORD);
// 582028: using guessed type int sub_582028(void);
// 59434C: using guessed type _DWORD __stdcall AIL_ms_count();
// 5C6444: using guessed type char g_IsGameCDInserted;
// 601646: using guessed type __int16 word_601646;
// 6016C6: using guessed type __int16 word_6016C6;
// 601DD8: using guessed type int dword_601DD8[];
// 601DE0: using guessed type int dword_601DE0[];
// 601DE8: using guessed type int dword_601DE8[];
// 6041D5: using guessed type char byte_6041D5;
// 6041D6: using guessed type char byte_6041D6;
// 6041D7: using guessed type char byte_6041D7;
// 6041D8: using guessed type int dword_6041D8;
// 6041DC: using guessed type __int16 word_6041DC;
// 6041DE: using guessed type __int16 word_6041DE;
// 6041E0: using guessed type int dword_6041E0;
// 6041E4: using guessed type int dword_6041E4;
// 6041E8: using guessed type char byte_6041E8;
// 6041EA: using guessed type int dword_6041EA;
// 6041EE: using guessed type int dword_6041EE;
// 6041F2: using guessed type int dword_6041F2;
// 604204: using guessed type int dword_604204;
// 60425C: using guessed type int dword_60425C;
// 604280: using guessed type int dword_604280;
// 604288: using guessed type int dword_604288;
// 60428C: using guessed type int dword_60428C;
// 604294: using guessed type int dword_604294;
// 6042B4: using guessed type int dword_6042B4;
// 60431A: using guessed type __int16 g_UselessVariable;
// 604320: using guessed type __int16 g_maybeDemoVersionType;
// 604322: using guessed type __int16 word_604322;
// 604324: using guessed type char g_maybeSomeDemoVersionType;
// 604325: using guessed type char g_maybeAnotherDemoVersionType;
// 604340: using guessed type __int16 g_maybeDemoVersionMinutesCounter;
// 604344: using guessed type int dword_604344;
// 604524: using guessed type int dword_604524;
// 604528: using guessed type int dword_604528;
// 604540: using guessed type int dword_604540;
// 604544: using guessed type int dword_604544;
// 604548: using guessed type int dword_604548;
// 60454C: using guessed type int dword_60454C;
// 604550: using guessed type int dword_604550;
// 604554: using guessed type int dword_604554;
// 604558: using guessed type int dword_604558;
// 60455C: using guessed type int dword_60455C;
// 604560: using guessed type int dword_604560;
// 604564: using guessed type int dword_604564;
// 604568: using guessed type int dword_604568;
// 60456C: using guessed type int dword_60456C;
// 604570: using guessed type int dword_604570;
// 604574: using guessed type int dword_604574;
// 604578: using guessed type int dword_604578;
// 60457C: using guessed type int dword_60457C;
// 604580: using guessed type int dword_604580;
// 604584: using guessed type int dword_604584;
// 604594: using guessed type int dword_604594;
// 6045C4: using guessed type int dword_6045C4;
// 6045C8: using guessed type int dword_6045C8;
// 6045E0: using guessed type int dword_6045E0;
// 6045E4: using guessed type int dword_6045E4;
// 6045E8: using guessed type __int16 word_6045E8;
// 6045EA: using guessed type __int16 word_6045EA;
// 622C50: using guessed type char byte_622C50;
// 6586C0: using guessed type int dword_6586C0;
// 6586C4: using guessed type int dword_6586C4;
// 6586C8: using guessed type int dword_6586C8;
// 6586CC: using guessed type int dword_6586CC;
// 6586D0: using guessed type int dword_6586D0;
// 6586D4: using guessed type int dword_6586D4;
// 6586D8: using guessed type int dword_6586D8;
// 6586DC: using guessed type int dword_6586DC;
// 6586E0: using guessed type int dword_6586E0;
// 667390: using guessed type int g_IsDebug;
// 667E88: using guessed type int dword_667E88;
// 667E90: using guessed type int dword_667E90;
// 668766: using guessed type __int16 word_668766;
// 668784: using guessed type int dword_668784;
// 668BE0: using guessed type int dword_668BE0;
// 6AD860: using guessed type int dword_6AD860;
// 6AD864: using guessed type int dword_6AD864;
// 6AD86C: using guessed type int dword_6AD86C;
// 6AE818: using guessed type char byte_6AE818;

//----- (0043FC90) --------------------------------------------------------
void __noreturn sub_43FC90()
{
    sub_523838();
    sub_52354B();
    CoUninitialize();
    ClipCursor(0);
    exit(0);
}

//----- (0043FD27) --------------------------------------------------------
int __cdecl maybe_NewGame(int a1)
{
    char* v1; // eax
    char* v2; // eax
    char* v3; // eax
    char* v4; // eax
    char* v5; // eax
    char* v6; // eax
    int v7; // eax
    char* v8; // eax
    int result; // eax
    int j; // [esp+14h] [ebp-10h]
    int i; // [esp+18h] [ebp-Ch]
    char v12[4]; // [esp+1Ch] [ebp-8h] BYREF
    char* v13; // [esp+20h] [ebp-4h]

    sub_5214CA(8);
    dword_6045FC = 0;
    word_604322 = 1;
    if (g_maybeDemoVersionType != 2)
        loadGameSave();
    sub_53EF49();
    sub_53CB9B();
    sub_569792(200);
    sub_539690(100);
    sub_45CAB9(20, 20);
    word_622C88 = 5;
    v1 = getFormattedString("bitmaps\\bungalow_facts%s", *(const char**)&off_59F06C[4 * languageId]);
    dword_6047A0 = sub_569F87(v1);
    v2 = getFormattedString("bitmaps\\chang_facts%s", *(const char**)&off_59F06C[4 * languageId]);
    dword_6047AC = sub_569F87(v2);
    v3 = getFormattedString("bitmaps\\juliette_facts%s", *(const char**)&off_59F06C[4 * languageId]);
    dword_60479C = sub_569F87(v3);
    v4 = getFormattedString("bitmaps\\roofus_facts%s", *(const char**)&off_59F06C[4 * languageId]);
    dword_604798[0] = sub_569F87(v4);
    v5 = getFormattedString("bitmaps\\tweek_facts%s", *(const char**)&off_59F06C[4 * languageId]);
    dword_6047A4 = sub_569F87(v5);
    v6 = getFormattedString("bitmaps\\rico_facts%s", *(const char**)&off_59F06C[4 * languageId]);
    dword_6047A8 = sub_569F87(v6);
    sub_56914C(0);
    loadPAKData(aPakdataFronten_0);
    loadCHBfile(aFeChb);
    sub_56A6B0();
    dword_622C40 = 0;
    dword_622C44 = 0;
    dword_622C48 = 1065353216;
    flt_622C4C = 1.0;
    sub_45CCE9((int)sub_440AB7);
    sub_45CD5B((int)sub_441675);
    sub_45CCE9((int)sub_57E98F);
    emptyFunction28();
    sub_56B7C0(1000);
    sub_570400(10);
    sub_54F198(200);
    sub_54CBF5(50, 4096);
    sub_5640F0(4);
    sub_5545D0(10);
    sub_54FF69();
    sub_546A09(&dword_6587C0);
    sub_562880(400);
    sub_5700F0(100);
    sub_55A930(2000);
    sub_56B5B0(10);
    sub_4E3649();
    *(_DWORD*)(dword_5CAA44 + 32) = 1;
    sub_4C9CAC();
    dword_604A00[0] = loadModelPML(aFrontKeyboardR);
    dword_604A04 = loadModelPML(aFrontSoundR2);
    dword_604A08 = loadModelPML(aFrontVideoR2);
    dword_604A0C = loadModelPML(aFrontMultigame);
    dword_604A10 = loadModelPML(aFrontDisketteR);
    dword_604A14 = loadModelPML(aFrontNewgameR2);
    dword_62295C = sub_569CD1(aTestSpr);
    dword_65871C = sub_569CD1(aReflSpr);
    dword_658720 = sub_569CD1(aHighlSpr);
    dword_60439C = loadModelPML(aSkysHomeskyR2);
    LoadFile_SKL(aCsdoggySkl);
    LoadFile_SKL(aCstweekSkl);
    LoadFile_SKL(aCsricoSkl);
    LoadFile_SKL(aCscatSkl);
    LoadFile_SKL(aCsrooSkl);
    LoadFile_SKL(aCschangSkl);
    sub_53F37A();
    for (i = 0; i < 8; ++i)
        dword_604680[i] = -1;
    maybe_closeSound3DListener2();
    maybe_stopSounds2();
    maybe_openSound3DListener2();
    dword_604408 = sub_539852(256);
    *(_DWORD*)(dword_604408 + 64) = 0;
    *(_DWORD*)(dword_604408 + 88) = emptyFunction1;
    qmemcpy((void*)dword_604408, &unk_5B0630, 0x40u);
    sub_53CC63(dword_604408, 3.1415927);
    dword_604448[0] = sub_56414D();
    sub_449502(dword_604448[0], dword_604408);
    if ((dword_6041D8 & 2) != 0)
    {
        sub_564220(dword_604448[0], 0, 1116078080, 1142947840, 1137606656);
        sub_5642D8(dword_604448[0], 1068599607, 1068599607);
    }
    else
    {
        sub_564220(dword_604448[0], 0, 0, 1142947840, 1139802112);
        sub_5642D8(dword_604448[0], 1065353216, 1065353216);
    }
    writeDebug("Loading Frontend World File");
    v7 = sub_562845();
    writeDebug("Free Memory - %d", v7);
    if (g_maybeDemoVersionType == 2)
        v8 = getFormattedString(aLevelsMachineL);
    else
        v8 = getFormattedString(aLevelsMachineL_0, g_IsGameCDInserted);
    v13 = (char*)someLoadFile(v8, (int)v12);
    sub_466F40(v13, *(int*)v12, (int)&word_604364, (int(__cdecl*)(_DWORD))sub_478DB0, (int)&unk_604620);
    sub_53F213();
    byte_622D20 = -1;
    byte_622D21 = -1;
    byte_622D22 = -1;
    byte_622D23 = -1;
    word_6687BC = 0;
    sub_56A14F();
    sub_569193(0x64u, 0xFu, 0xAu);
    sub_569218(2.0);
    sub_447520(0);
    sub_447520(1);
    sub_447520(2);
    sub_447520(3);
    sub_447520(4);
    sub_447520(5);
    word_668762 = 1;
    word_667E84 = 2;
    dword_59EE18[0] = 1;
    dword_59EE40 = 0;
    dword_59EE68 = 0;
    dword_59EE90 = 0;
    dword_59EEB8 = 0;
    dword_59EEE0 = 0;
    dword_59EF04[0] = 1;
    dword_59EF2C = 1;
    dword_59EF54 = 1;
    dword_59EF7C = 1;
    dword_59EFA4 = 1;
    dword_59EFCC = 1;
    dword_6048CC = 0;
    if (g_maybeDemoVersionType == 2)
        dword_59EE3C = 0;
    word_604316 = 1;
    if (word_6015C6 > 1)
        dword_6046C8 = 2;
    else
        dword_6046C8 = 0;
    dword_6046CC = 0;
    dword_6046D0 = 1;
    dword_6046D4 = 1;
    dword_6046E8 = 0;
    dword_6046F4 = g_maybeDemoVersionType == 2;
    *(_DWORD*)dword_6046F0 = 0;
    dword_604728 = 0;
    g_SomeDemoVariable = 0;
    dword_6047BC = 0;
    dword_604718 = 0.0;
    dword_6046C0 = 0;
    dword_6046C4 = 0;
    dword_6046FC = 0;
    X = 13.0;
    dbl_604708 = 40.0;
    dbl_604710 = 0.0;
    dword_604760 = 0;
    dword_6049B0 = 0;
    dword_6048D4 = 0;
    dword_604768 = 1;
    dword_6049B4 = 16;
    if (dword_59F080)
    {
        dword_6049C0 = 0;
        for (j = 0; j < 10; ++j)
        {
            if (*(_DWORD*)(dword_610448 + 12 * j) == nWidth
                && *(_DWORD*)(dword_610448 + 12 * j + 4) == nHeight
                && *(_DWORD*)(dword_610448 + 12 * j + 8) == dword_60FE28)
            {
                screenMode = j;
                if (j >= 5)
                {
                    screenMode -= 5;
                    dword_6049C0 = 1;
                }
                break;
            }
        }
        if (j == 10)
            fatalError("Cannot determine screen mode.");
        dword_604204 = 1;
        dword_60420C = 0;
        dword_604210 = 192;
        dword_60425C = 1;
        dword_604258 = 0;
    }
    if ((dword_6047B4 & 0x400000) != 0 || g_UseGameSpy && (dword_6047B0 & 0x400000) != 0)
        dword_59F058 = 5;
    else
        dword_59F058 = -1;
    switch (a1)
    {
    case 1:
        dword_6046D0 = 0;
        *(_DWORD*)dword_6046F0 = 8;
        break;
    case 3:
        dword_6049AC = 1;
        byte_604964 = 0;
        byte_604979[0] = 0;
        byte_6048DC[0] = 0;
        Count = 0;
        dword_6046D0 = 0;
        dword_6049A4 = sub_51F63F();
        dword_604728 = 0;
        dword_6046D8[0] = g_CharacterType;
        dword_604744 = g_IsFirstPerson;
        dword_604258 = g_IsFirstPerson;
        dword_6046C8 = g_CharacterType;
        dword_6049F8 = 0;
        *(_DWORD*)dword_6046F0 = 9;
        dword_59F058 = 5;
        break;
    case 4:
        writeDebug("Host entered Frontend");
        dword_6049A8 = 3;
        dword_6049B4 = g_MultiplayerMaxPlayers;
        sub_51E443();
        sub_523AFF(byte_604979);
        writeDebug("Calling DPConnect Create Game");
        sub_51FDEE((int)byte_604979, g_MultiplayerMaxPlayers);
        dword_604728 = 0;
        byte_6048DC[0] = 0;
        Count = 0;
        *(_DWORD*)dword_6046F0 = 8;
        sub_5239B8((int (*)())sub_448A71);
        sub_5239C5((int (*)())sub_448A99);
        dword_6049AC = 1;
        byte_604964 = 0;
        byte_604979[0] = 0;
        byte_6048DC[0] = 0;
        Count = 0;
        dword_6046D0 = 0;
        *(_DWORD*)dword_6046F0 = 8;
        dword_6046D8[0] = g_CharacterType;
        dword_604744 = g_IsFirstPerson;
        dword_604258 = g_IsFirstPerson;
        dword_6046C8 = g_CharacterType;
        dword_6049F8 = 1;
        writeDebug("Done Host Frontend Setup");
        break;
    default:
        if (g_UseGameSpy)
            sub_43FC90();
        dword_6049A8 = 3;
        dword_6049AC = 1;
        byte_604964 = 0;
        byte_604979[0] = 0;
        byte_6048DC[0] = 0;
        Count = 0;
        if (a1 == 2)
        {
            dword_6046C8 = 5;
            *(_DWORD*)dword_6046F0 = 1;
        }
        break;
    }
    dword_60458C = 0;
    dword_6AD884 = 100.0;
    dword_604348 = 9000;
    if (g_maybeDemoVersionType == 2 && g_maybeSomeDemoVersionType == 1)
    {
        g_SomeDemoCounter = 1770;
    }
    else if (g_maybeDemoVersionType != 2 || g_maybeSomeDemoVersionType)
    {
        g_SomeDemoCounter = 18000;
    }
    else
    {
        g_SomeDemoCounter = 1650;
    }
    if (g_maybeDemoVersionType == 1)
        dword_6041E0 |= 0x20084u;
    dword_59EE64 = 1;
    if (dword_6041E4 == -1)
    {
        if (g_maybeDemoVersionType == 2)
        {
            *(_DWORD*)dword_604778 = 10;
            *(_DWORD*)dword_60477C = 10;
        }
        else
        {
            *(_DWORD*)dword_604778 = 20;
            *(_DWORD*)dword_60477C = 5;
        }
        byte_6041E8 = dword_60477C[0];
        dword_6041E4 = (byte_622C50 != 0 ? 30 : 25) * 60 * *(_DWORD*)dword_604778;
    }
    word_622D24 = 0;
    dword_622D28 = 1082130432;
    byte_622D20 = -1;
    byte_622D21 = -1;
    byte_622D22 = -1;
    byte_622D23 = -1;
    emptyFunction7();
    maybe_startMusic(0x32u);
    empyFunt_xx3();
    sub_5834A8();
    sub_58355A(byte_6041D6);
    sub_57EA8E(byte_6041D5);
    result = sub_56B706();
    dword_59F080 = 0;
    return result;
}
// 43FD27: using guessed type int __cdecl maybe_NewGame(int);
// 441675: using guessed type int sub_441675();
// 448A99: using guessed type int __cdecl sub_448A99(int, int);
// 59EE18: using guessed type int dword_59EE18[];
// 59EE3C: using guessed type int dword_59EE3C;
// 59EE40: using guessed type int dword_59EE40;
// 59EE64: using guessed type int dword_59EE64;
// 59EE68: using guessed type int dword_59EE68;
// 59EE90: using guessed type int dword_59EE90;
// 59EEB8: using guessed type int dword_59EEB8;
// 59EEE0: using guessed type int dword_59EEE0;
// 59EF04: using guessed type int dword_59EF04[];
// 59EF2C: using guessed type int dword_59EF2C;
// 59EF54: using guessed type int dword_59EF54;
// 59EF7C: using guessed type int dword_59EF7C;
// 59EFA4: using guessed type int dword_59EFA4;
// 59EFCC: using guessed type int dword_59EFCC;
// 59F058: using guessed type int dword_59F058;
// 59F080: using guessed type int dword_59F080;
// 5B9F50: using guessed type int g_UseGameSpy;
// 5C6444: using guessed type char g_IsGameCDInserted;
// 5CAA44: using guessed type int dword_5CAA44;
// 5D1D00: using guessed type int dword_5D1D00;
// 6015C6: using guessed type __int16 word_6015C6;
// 6041D5: using guessed type char byte_6041D5;
// 6041D6: using guessed type char byte_6041D6;
// 6041D8: using guessed type int dword_6041D8;
// 6041E0: using guessed type int dword_6041E0;
// 6041E4: using guessed type int dword_6041E4;
// 6041E8: using guessed type char byte_6041E8;
// 604204: using guessed type int dword_604204;
// 60420C: using guessed type int dword_60420C;
// 604210: using guessed type int dword_604210;
// 604258: using guessed type int dword_604258;
// 60425C: using guessed type int dword_60425C;
// 604316: using guessed type __int16 word_604316;
// 604320: using guessed type __int16 g_maybeDemoVersionType;
// 604322: using guessed type __int16 word_604322;
// 604324: using guessed type char g_maybeSomeDemoVersionType;
// 604348: using guessed type int dword_604348;
// 604364: using guessed type __int16 word_604364;
// 60439C: using guessed type int dword_60439C;
// 604448: using guessed type int dword_604448[];
// 60458C: using guessed type int dword_60458C;
// 6045D4: using guessed type int languageId;
// 6045FC: using guessed type int dword_6045FC;
// 604600: using guessed type int g_CharacterType;
// 604604: using guessed type int g_IsFirstPerson;
// 604680: using guessed type int dword_604680[];
// 6046C0: using guessed type int dword_6046C0;
// 6046C4: using guessed type int dword_6046C4;
// 6046C8: using guessed type int dword_6046C8;
// 6046CC: using guessed type int dword_6046CC;
// 6046D0: using guessed type int dword_6046D0;
// 6046D4: using guessed type int dword_6046D4;
// 6046E8: using guessed type int dword_6046E8;
// 6046F4: using guessed type int dword_6046F4;
// 6046F8: using guessed type int g_SomeDemoCounter;
// 6046FC: using guessed type int dword_6046FC;
// 604708: using guessed type double dbl_604708;
// 604710: using guessed type double dbl_604710;
// 604728: using guessed type int dword_604728;
// 604744: using guessed type int dword_604744;
// 604760: using guessed type int dword_604760;
// 604768: using guessed type int dword_604768;
// 604798: using guessed type int dword_604798[];
// 60479C: using guessed type int dword_60479C;
// 6047A0: using guessed type int dword_6047A0;
// 6047A4: using guessed type int dword_6047A4;
// 6047A8: using guessed type int dword_6047A8;
// 6047AC: using guessed type int dword_6047AC;
// 6047B0: using guessed type int dword_6047B0;
// 6047B4: using guessed type int dword_6047B4;
// 6047BC: using guessed type int dword_6047BC;
// 6048C8: using guessed type int g_SomeDemoVariable;
// 6048CC: using guessed type int dword_6048CC;
// 6048D4: using guessed type int dword_6048D4;
// 604964: using guessed type char byte_604964;
// 6049A4: using guessed type int dword_6049A4;
// 6049A8: using guessed type int dword_6049A8;
// 6049AC: using guessed type int dword_6049AC;
// 6049B0: using guessed type int dword_6049B0;
// 6049B4: using guessed type int dword_6049B4;
// 6049BC: using guessed type int screenMode;
// 6049C0: using guessed type int dword_6049C0;
// 6049F8: using guessed type int dword_6049F8;
// 604A00: using guessed type int dword_604A00[];
// 604A04: using guessed type int dword_604A04;
// 604A08: using guessed type int dword_604A08;
// 604A0C: using guessed type int dword_604A0C;
// 604A10: using guessed type int dword_604A10;
// 604A14: using guessed type int dword_604A14;
// 604A18: using guessed type int g_MultiplayerMaxPlayers;
// 60FE28: using guessed type int dword_60FE28;
// 610448: using guessed type int dword_610448;
// 622C40: using guessed type int dword_622C40;
// 622C44: using guessed type int dword_622C44;
// 622C48: using guessed type int dword_622C48;
// 622C4C: using guessed type float flt_622C4C;
// 622C50: using guessed type char byte_622C50;
// 622C88: using guessed type __int16 word_622C88;
// 622D20: using guessed type char byte_622D20;
// 622D21: using guessed type char byte_622D21;
// 622D22: using guessed type char byte_622D22;
// 622D23: using guessed type char byte_622D23;
// 622D24: using guessed type __int16 word_622D24;
// 622D28: using guessed type int dword_622D28;
// 65871C: using guessed type int dword_65871C;
// 658720: using guessed type int dword_658720;
// 6587C0: using guessed type int dword_6587C0;
// 667E84: using guessed type __int16 word_667E84;
// 668762: using guessed type __int16 word_668762;
// 6687BC: using guessed type __int16 word_6687BC;