#include "tempplace.h"

#include <cstdarg>
#include <cstdlib>
#include <stdio.h>
#include "debug.h"
#include "files.h"

char aDemoVersion[13] = "Demo Version"; // weak
char aDemoVersion_0[13] = "Demo Version"; // weak
char aDemoVersion_1[13] = "Demo Version"; // weak

char getFormattedStringBuffer[256]; // idb

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

    *(_DWORD*)&dword_667390 = 1;
    g_maybeDemoVersionType = 0;
    word_60431A = 1;
    word_668766 = 0;
    byte_622C50 = 2;
    sub_53EE90();
    _cfltcvt_init_2();
    readRegisterSoundSettings();
    writeDebug(aAllocatingGame, v4);
    Size = 0x1100000;
    dword_66D820 = malloc(0x1100000u);
    sub_53EF49();
    showTGAImageTimed(aLegalTga, 1);
    writeDebug(aAllocatingLoad, v5);
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
    v0 = (int)getFormattedString(aLevelsTxt, byte_5C6444);
    loadSettings(v0);
    v2 = getFormattedString(aSettingsTxt, v1);
    anotherLoadSettings(v2);
    sub_45CF8C();
    if (getSettingsValue(aDemoVersion, 0) == 1)
    {
        g_maybeDemoVersionType = 2;
        g_maybeSomeDemoVersionType = 0;
        g_maybeAnotherDemoVersionType = 0;
        g_maybeDemoVersionMinutesCounter = 0;
    }
    else if (getSettingsValue(aDemoVersion_0, 0) == 2)
    {
        g_maybeDemoVersionType = 2;
        g_maybeSomeDemoVersionType = 1;
    }
    else if (getSettingsValue(aDemoVersion_1, 0) == 3)
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
    writeDebug(aSettingUpGamef, v6);
    dword_604540 = (int)sub_45CF56;
    dword_604544 = (int)sub_45CF56;
    dword_604548 = (int)sub_462D57;
    dword_60454C = (int)sub_46322C;
    dword_604550 = (int)sub_461AB0;
    dword_604554 = (int)sub_461F84;
    dword_604558 = (int)sub_43FD27;
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
    sub_4FDD8A();
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
    writeDebug(aSettingUpLevel, v7);
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
    result = writeDebug(aSettingUpDefau, i);
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
// 43FD27: using guessed type int __cdecl sub_43FD27(int);
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
// 4FDD8A: using guessed type int sub_4FDD8A(void);
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
// 5C6444: using guessed type char byte_5C6444;
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
// 60431A: using guessed type __int16 word_60431A;
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
// 667390: using guessed type int dword_667390;
// 667E88: using guessed type int dword_667E88;
// 667E90: using guessed type int dword_667E90;
// 668766: using guessed type __int16 word_668766;
// 668784: using guessed type int dword_668784;
// 668BE0: using guessed type int dword_668BE0;
// 6AD860: using guessed type int dword_6AD860;
// 6AD864: using guessed type int dword_6AD864;
// 6AD86C: using guessed type int dword_6AD86C;
// 6AE818: using guessed type char byte_6AE818;

//----- (005648D7) --------------------------------------------------------
char* getFormattedString(char* Format, ...)
{
    va_list va; // [esp+10h] [ebp+Ch] BYREF

    va_start(va, Format);
    vsprintf(getFormattedStringBuffer, Format, va);
    return getFormattedStringBuffer;
}