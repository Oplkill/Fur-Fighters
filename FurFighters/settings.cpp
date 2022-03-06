#include "settings.h"

#include "languages.h"
#include <cstdarg>
#include <cstdlib>
#include <stdio.h>
#include <Windows.h>
#include <cstring>
#include "debug.h"
#include "files.h"

char aLoadingLevelCo[] = "Loading Level Config. File..."; // idb
char aTitle[] = "title"; // idb
char aSky[] = "sky="; // idb
char aSky2[] = "sky2"; // idb
char aSky3[] = "sky3"; // idb
char aSkyRotation[] = "sky rotation"; // idb
char aType[] = "type"; // idb
char aSelect[7] = "SELECT"; // weak
char aLevel[6] = "LEVEL"; // weak
char aBoss[5] = "BOSS"; // weak
char aDmatch[7] = "DMATCH"; // weak
char aCutscene[9] = "CUTSCENE"; // weak
char aNotpresent[11] = "NOTPRESENT"; // weak
char aCdtrack[] = "cdtrack"; // idb
char aBabies[] = "babies"; // idb
char aFogColour[] = "fog colour"; // idb
char aFogDensity_0[] = "fog density"; // idb
char aTimeAttack[] = "time attack"; // idb
char aReqBabies[] = "req babies"; // idb
char aReqTokens[] = "req tokens"; // idb
char byte_5A592E = '\0'; // weak
__int16 word_5A592C = 24942; // weak

//----- (0047B665) --------------------------------------------------------
int __cdecl loadSettings(char* FileName)
{
    int v1; // edx
    __int16 v3; // [esp+8h] [ebp-138h] BYREF
    char v4[12]; // [esp+Ch] [ebp-134h] BYREF
    char* v5; // [esp+18h] [ebp-128h]
    char* i; // [esp+1Ch] [ebp-124h]
    char String1[12]; // [esp+20h] [ebp-120h] BYREF
    char Str1; // [esp+2Ch] [ebp-114h] BYREF
    _BYTE v9[3]; // [esp+2Dh] [ebp-113h] BYREF
    char* Buffer; // [esp+12Ch] [ebp-14h]
    int v11; // [esp+130h] [ebp-10h]
    int v12; // [esp+134h] [ebp-Ch]
    char* v13; // [esp+138h] [ebp-8h]
    int v14; // [esp+13Ch] [ebp-4h] BYREF

    v11 = 0;
    writeDebug(aLoadingLevelCo);
    memset(&unk_5CF1A0, 0, 0x2760u);
    v13 = (char*)someLoadFile(FileName, (int)&v14);
    Buffer = v13;
    while (Buffer < &v13[v14])
    {
        sscanf(Buffer, "%[^\n]", &Str1);
        Buffer += strlen(&Str1) + 1;
        if (Str1 == 91)
        {
            v5 = String1;
            for (i = v9; *i != 93; ++i)
                *v5++ = *i;
            *v5 = 0;
            v5 = String1;
            v11 = sub_47B5A5(String1);
            v12 = (int)&unk_5CF1A0 + 140 * v11;
            strcpy((char*)(v12 + 50), "na");
            v1 = v12 + 68;
            *(_WORD*)(v12 + 68) = word_5A592C;
            *(_BYTE*)(v1 + 2) = byte_5A592E;
            *(_DWORD*)(v12 + 88) = 0;
            *(_DWORD*)(v12 + 92) = 0;
            *(_DWORD*)(v12 + 96) = 0;
            *(_DWORD*)(v12 + 100) = 1065353216;
        }
        else if (!strncmp(&Str1, aTitle, 5u))
        {
            sscanf(&Str1, "title=\"%[^\"]", v12);
        }
        else if (!strncmp(&Str1, aSky, 4u))
        {
            sscanf(&Str1, "sky=\"%[^\"]", v12 + 32);
        }
        else if (!strncmp(&Str1, aSky2, 4u))
        {
            sscanf(&Str1, "sky2=\"%[^\"]", v12 + 50);
        }
        else if (!strncmp(&Str1, aSky3, 4u))
        {
            sscanf(&Str1, "sky3=\"%[^\"]", v12 + 68);
        }
        else if (!strncmp(&Str1, aSkyRotation, 0xCu))
        {
            sscanf(&Str1, "sky rotation=%f,%f,%f", v12 + 88, v12 + 92, v12 + 96);
        }
        else if (!strncmp(&Str1, aType, 4u))
        {
            sscanf(&Str1, "type=%s", v4);
            if (!strcmp(v4, aSelect))
            {
                *(_WORD*)(v12 + 104) = 1;
            }
            else if (!strcmp(v4, aLevel))
            {
                *(_WORD*)(v12 + 104) = 0;
            }
            else if (!strcmp(v4, aBoss))
            {
                *(_WORD*)(v12 + 104) = 2;
            }
            else if (!strcmp(v4, aDmatch))
            {
                *(_WORD*)(v12 + 104) = 3;
            }
            else if (!strcmp(v4, aCutscene))
            {
                *(_WORD*)(v12 + 104) = 4;
            }
            else if (!strcmp(v4, aNotpresent))
            {
                *(_WORD*)(v12 + 104) = 5;
            }
        }
        else if (!strncmp(&Str1, aCdtrack, 7u))
        {
            sscanf(&Str1, "cdtrack=%d", &v3);
            *(_WORD*)(v12 + 106) = v3;
        }
        else if (!strncmp(&Str1, aBabies, 6u))
        {
            sscanf(&Str1, "babies=%d", v12 + 124);
        }
        else if (!strncmp(&Str1, aFogColour, 0xAu))
        {
            sscanf(&Str1, "fog colour=%d,%d,%d", v12 + 108, v12 + 112, v12 + 116);
        }
        else if (!strncmp(&Str1, aFogDensity_0, 0xBu))
        {
            sscanf(&Str1, "fog density=%f", v12 + 120);
        }
        else if (!strncmp(&Str1, aTimeAttack, 0xBu))
        {
            sscanf(&Str1, "time attack=%d", v12 + 136);
            *(_DWORD*)(v12 + 136) *= 30;
        }
        else if (!strncmp(&Str1, aReqBabies, 0xAu))
        {
            sscanf(&Str1, "req babies=%d", v12 + 128);
        }
        else if (!strncmp(&Str1, aReqTokens, 0xAu))
        {
            sscanf(&Str1, "req tokens=%d", v12 + 132);
        }
    }
    return sub_53F213();
}
// 53F213: using guessed type int sub_53F213(void);
// 5A592C: using guessed type __int16 word_5A592C;
// 5A592E: using guessed type char byte_5A592E;

//----- (0051A9AA) --------------------------------------------------------
int __cdecl initSettings(HINSTANCE hInstance)
{
    const char* settingsFileName; // eax
    int result; // eax
    DWORD cbData; // [esp+8h] [ebp-518h] BYREF
    DWORD Type; // [esp+Ch] [ebp-514h] BYREF
    BYTE Data[4]; // [esp+10h] [ebp-510h] BYREF
    FILE* Stream; // [esp+14h] [ebp-50Ch]
    char i; // [esp+18h] [ebp-508h]
    int v8; // [esp+1Ch] [ebp-504h]
    WNDCLASSA WndClass; // [esp+20h] [ebp-500h] BYREF
    char* junk1; // [esp+48h] [ebp-4D8h]
    char junk2; // [esp+4Ch] [ebp-4D4h] BYREF

    junk1 = &junk2;
    CoInitialize(0);
    regKey = 0;
    initLanguage();
    byte_5C6444 = 0;                              // todo
    for (i = 67; i < 90; ++i)
    {
        settingsFileName = (const char*)getFormattedString(aSettingsTxt_0, i);
        Stream = fopen(settingsFileName, aRt);
        if (Stream)
        {
            byte_5C6444 = i;
            fclose(Stream);
            break;
        }
    }
    if (!byte_5C6444)
    {
        switch (languageId)
        {
        case 0:
            fatalError(aYouNeedTheFurF);
        case 1:
            fatalError(aPourJouerInsir);
        case 2:
            fatalError(aUmZuSpielenLeg);
        case 4:
            fatalError(aNecesitasElCdD);
        default:
            fatalError(aYouNeedTheFurF_0);
        }
    }
    RegCreateKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0, 0, 0xF003Fu, 0, &regKey, 0);
    if ((int)sub_578B98(0) < 0)
        return 0;
    v8 = sub_57972A(&dword_5C6448, 0);
    if (v8 < 0)
        return 0;
    cbData = 4;
    if (!RegQueryValueExA(regKey, aResSettings_0, 0, &Type, Data, &cbData)
        && *(_DWORD*)Data < *(_DWORD*)(dword_5C6448 + 1216))
    {
        *(_DWORD*)(dword_5C6448 + 1220) = *(_DWORD*)Data;
    }
    sub_56A4D1();
    *(_DWORD*)(dword_5C6448 + 1176) = *(_DWORD*)&dword_60FE40;
    showDialogSettingsBox((LPARAM)&dword_5C6448);
    *(_DWORD*)&dword_60FE40 = *(_DWORD*)(dword_5C6448 + 1176);
    RegSetValueExA(regKey, aResSettings_1, 0, 1u, (const BYTE*)(dword_5C6448 + 1220), 4u);
    sub_56A43D();
    dword_60FE4C = *(_DWORD*)(dword_5C6448 + 284);
    dword_60FE50 = *(_DWORD*)(dword_5C6448 + 40);
    dword_60FE44 = *(_DWORD*)(dword_5C6448 + 1172);
    nWidth = *(_DWORD*)(dword_5C6448 + 1060);
    nHeight = *(_DWORD*)(dword_5C6448 + 1056);
    dword_60FE28 = *(_DWORD*)(dword_5C6448 + 1132);
    dword_60FE2C = 0;
    WndClass.style = 0;
    WndClass.lpfnWndProc = (WNDPROC)sub_51A85B;
    WndClass.cbClsExtra = 0;
    WndClass.cbWndExtra = 0;
    WndClass.hInstance = hInstance;
    WndClass.hCursor = LoadCursorA(0, (LPCSTR)0x7F00);
    WndClass.hIcon = LoadIconA(::hInstance, (LPCSTR)0x6C);
    WndClass.hbrBackground = (HBRUSH)GetStockObject(5);
    WndClass.lpszMenuName = aMenu;
    WndClass.lpszClassName = aWinny;
    if (!RegisterClassA(&WndClass))
        return 0;
    hWnd = CreateWindowExA(0x40008u, ClassName, WindowName, 0x80CF0000, 0, 0, nWidth, nHeight, 0, 0, hInstance, 0);
    if (hWnd)
    {
        ShowWindow(hWnd, 1);
        UpdateWindow(hWnd);
        SetFocus(hWnd);
        ShowCursor(0);
        dword_60FE48 = hWnd;
        result = 1;
    }
    else
    {
        MessageBoxA(0, Text, Caption, 0);
        result = 0;
    }
    return result;
}
// 51B2C4: using guessed type int sub_51B2C4(void);
// 56A43D: using guessed type int sub_56A43D(void);
// 56A4D1: using guessed type int sub_56A4D1(void);
// 578B98: using guessed type _DWORD __cdecl sub_578B98(_DWORD);
// 57972A: using guessed type _DWORD __cdecl sub_57972A(_DWORD, _DWORD);
// 5C6444: using guessed type char byte_5C6444;
// 5C6448: using guessed type int dword_5C6448;
// 6045D4: using guessed type int dword_6045D4;
// 60FE28: using guessed type int dword_60FE28;
// 60FE2C: using guessed type int dword_60FE2C;
// 60FE44: using guessed type int dword_60FE44;
// 60FE4C: using guessed type int dword_60FE4C;
// 60FE50: using guessed type int dword_60FE50;

//----- (0053F680) --------------------------------------------------------
int __cdecl anotherLoadSettings(char* FileName)
{
    char Buffer[256]; // [esp+0h] [ebp-110h] BYREF
    char* junk3; // [esp+100h] [ebp-10h]
    char* v4; // [esp+104h] [ebp-Ch]
    char* v5; // [esp+108h] [ebp-8h]
    int v6; // [esp+10Ch] [ebp-4h] BYREF

    writeDebug(aLoadingIniFile);
    v5 = (char*)someLoadFile(FileName, (int)&v6);
    junk1 = (int)FileName;
    dword_6673A4 = -1;
    dword_6673A0 = 0;
    v4 = v5;
    while (v4 < &v5[v6])
    {
        junk3 = Buffer;
        while (*v4 != 10 && *v4)
            *junk3++ = *v4++;
        ++v4;
        if (Buffer[0] == '<')
        {
            ++dword_6673A4;
            sscanf(Buffer, "<%[^>]>", (char*)&unk_667400 + 40 * dword_6673A4);
            dword_667420[10 * dword_6673A4] = dword_6673A0;
            dword_667424[10 * dword_6673A4] = 0;
        }
        if (Buffer[0] == '[')
        {
            sscanf(Buffer, "[%[^]]]=%d", (char*)&unk_668C00 + 48 * dword_6673A0, &dword_668C20[12 * dword_6673A0]);
            dword_668C28[12 * dword_6673A0] = 0;
            dword_668C2C[12 * dword_6673A0++] = 0;
            ++dword_667424[10 * dword_6673A4];
        }
    }
    return sub_53F213();
}
// 53F213: using guessed type int sub_53F213(void);
// 667388: using guessed type int dword_667388;
// 6673A0: using guessed type int dword_6673A0;
// 6673A4: using guessed type int dword_6673A4;
// 667420: using guessed type int dword_667420[];
// 668C20: using guessed type int dword_668C20[];
// 668C28: using guessed type int dword_668C28[];

//----- (0053F9F3) --------------------------------------------------------
int __cdecl getSettingsValue(const char* settingsName, int defValue)
{
    int i; // [esp+14h] [ebp-4h]

    for (i = 0; i < dword_6673A0; ++i)
    {
        if (!strcmp(settingsName, (const char*)&unk_668C00 + 48 * i))
            return dword_668C20[12 * i];
    }
    return defValue;
}
// 6673A0: using guessed type int dword_6673A0;
// 668C20: using guessed type int dword_668C20[];

//----- (0053F82D) --------------------------------------------------------
int __cdecl maybe_LoadSettingsValue(const char* settingsName, _BYTE* a2, int variableType, int defaultValue)
{
    float v5; // [esp+0h] [ebp-28h]
    float v6; // [esp+8h] [ebp-20h]
    int i; // [esp+24h] [ebp-4h]

    for (i = 0; i < dword_6673A0; ++i)
    {
        if (!strcmp(settingsName, (const char*)&unk_668C00 + 48 * i))
        {
            dword_668C28[12 * i] = (int)a2;
            dword_668C2C[12 * i] = variableType;
            switch (variableType)
            {
            case 0:
                *a2 = dword_668C20[12 * i];
                break;
            case 1:
                *(_WORD*)a2 = dword_668C20[12 * i];
                break;
            case 2:
                *(_DWORD*)a2 = dword_668C20[12 * i];
                break;
            case 3:
                v6 = (float)dword_668C20[12 * i];
                *(float*)a2 = v6 * 0.0099999998;
                break;
            case 4:
                *(float*)a2 = (float)dword_668C20[12 * i];
                break;
            default:
                return dword_668C20[12 * i];
            }
            return dword_668C20[12 * i];
        }
    }
    switch (variableType)
    {
    case 0:
        *a2 = defaultValue;
        break;
    case 1:
        *(_WORD*)a2 = defaultValue;
        break;
    case 2:
        *(_DWORD*)a2 = defaultValue;
        break;
    case 3:
        v5 = (float)defaultValue;
        *(float*)a2 = v5 * 0.0099999998;
        break;
    case 4:
        *(float*)a2 = (float)defaultValue;
        break;
    default:
        return defaultValue;
    }
    return defaultValue;
}
// 6673A0: using guessed type int dword_6673A0;
// 668C20: using guessed type int dword_668C20[];
// 668C28: using guessed type int dword_668C28[];

//----- (00411E50) --------------------------------------------------------
int loadBearSettings()
{
    maybe_LoadSettingsValue(aBearSpeed, dword_607080, settings::tFloat1, 10);
    maybe_LoadSettingsValue(aBearShotDamage, &dword_607094, settings::tDWrord, 15);
    maybe_LoadSettingsValue(aBearHitDamage, &dword_607098, settings::tDWrord, 10);
    maybe_LoadSettingsValue(aBearEnergy, &dword_60709C, settings::tDWrord, 30);
    maybe_LoadSettingsValue(aBearScore, byte_6070A0, settings::tDWrord, 50);
    return maybe_LoadSettingsValue(aBearTime, byte_6070A4, settings::tDWrord, 10);
}
// 607094: using guessed type int dword_607094;
// 607098: using guessed type int dword_607098;
// 60709C: using guessed type int dword_60709C;

//----- (0042A970) --------------------------------------------------------
int loadCrocodyleSettings()
{
    maybe_LoadSettingsValue(aCrocSpeed, &dword_606860, settings::tFloat1, 30);
    dword_606864 = 1048576000;
    maybe_LoadSettingsValue(aCrocEnergy, &dword_60686C, settings::tDWrord, 30);
    maybe_LoadSettingsValue(aCrocDamage, &dword_606870, settings::tDWrord, 15);
    maybe_LoadSettingsValue(aCrocScore, byte_606868, settings::tDWrord, 50);
    return maybe_LoadSettingsValue(aCrocTime, byte_606874, settings::tDWrord, 20);
}
// 606860: using guessed type int dword_606860;
// 606864: using guessed type int dword_606864;
// 60686C: using guessed type int dword_60686C;
// 606870: using guessed type int dword_606870;

//----- (0048C7B0) --------------------------------------------------------
int loadPeacockSettings()
{
    maybe_LoadSettingsValue(aPeacockSpeed, &dword_5CDCA0, settings::tFloat1, 10);
    maybe_LoadSettingsValue(aPeacockRocketS, byte_5CDCA8, settings::tFloat1, 200);
    maybe_LoadSettingsValue(aPeacockDamage, &dword_5CDCA4, settings::tDWrord, 20);
    maybe_LoadSettingsValue(aPeacockDamageR, &dword_5CDCAC, settings::tFloat1, 600);
    maybe_LoadSettingsValue(aPeacockEnergy, &dword_5CDCB0, settings::tDWrord, 30);
    maybe_LoadSettingsValue(aPeacockScore, byte_5CDCB4, settings::tDWrord, 50);
    return maybe_LoadSettingsValue(aPeacockTime, byte_5CDCB8, settings::tDWrord, 20);
}
// 5CDCA0: using guessed type int dword_5CDCA0;
// 5CDCA4: using guessed type int dword_5CDCA4;
// 5CDCAC: using guessed type int dword_5CDCAC;
// 5CDCB0: using guessed type int dword_5CDCB0;

//----- (0048ED94) --------------------------------------------------------
int loadWeaponSettings()
{
    int result; // eax

    maybe_LoadSettingsValue(aPistolAmmo, &word_5CDBC0, settings::tDWrord, 20);
    maybe_LoadSettingsValue(aShotgunAmmo, &word_5CDBC4, settings::tDWrord, 10);
    maybe_LoadSettingsValue(aMachgunAmmo, &word_5CDBC8, settings::tDWrord, 20);
    maybe_LoadSettingsValue(aGlauncherAmmo, &word_5CDBD8, settings::tDWrord, 2);
    maybe_LoadSettingsValue(aRlauncherAmmo, &word_5CDBCC, settings::tDWrord, 2);
    maybe_LoadSettingsValue(aLaserAmmo, &word_5CDBD0, settings::tDWrord, 20);
    maybe_LoadSettingsValue(aNeutronGunAmmo, &word_5CDBD4, settings::tDWrord, 40);
    maybe_LoadSettingsValue(aFreezeGunAmmo, &word_5CDBDC, settings::tDWrord, 40);
    maybe_LoadSettingsValue(aBullets, &word_5CDBE0, settings::tDWrord, 20);
    maybe_LoadSettingsValue(aShells, &word_5CDBE4, settings::tDWrord, 10);
    maybe_LoadSettingsValue(aGrenades, &word_5CDBE8, settings::tDWrord, 10);
    maybe_LoadSettingsValue(aRockets, &word_5CDBEC, settings::tDWrord, 1);
    maybe_LoadSettingsValue(aEnergy, &word_5CDBF0, settings::tDWrord, 20);
    maybe_LoadSettingsValue(aSmartAmmo, &word_5CDBF4, settings::tDWrord, 1);
    maybe_LoadSettingsValue(aFreezeAmmo, &word_5CDBF8, settings::tDWrord, 1);
    maybe_LoadSettingsValue(aBulletBox, &word_5CDBFC, settings::tDWrord, 100);
    maybe_LoadSettingsValue(aShellBox, &word_5CDC00, settings::tDWrord, 20);
    maybe_LoadSettingsValue(aGrenadeBox, &word_5CDC04, settings::tDWrord, 20);
    maybe_LoadSettingsValue(aRocketBox, &word_5CDC08, settings::tDWrord, 10);
    maybe_LoadSettingsValue(aEnergyBox, &word_5CDC0C, settings::tDWrord, 100);
    maybe_LoadSettingsValue(aSmartAmmoBox, &word_5CDC10, settings::tDWrord, 5);
    maybe_LoadSettingsValue(aFreezeAmmoBox, &word_5CDC14, settings::tDWrord, 5);
    maybe_LoadSettingsValue(aHealthAmount, &dword_5CDC34, settings::tDWrord, 2);
    maybe_LoadSettingsValue(aBigHealthAmoun, &dword_5CDC38, settings::tDWrord, 25);
    maybe_LoadSettingsValue(aMaxBullets, &dword_5CDC18, settings::tDWrord, 200);
    maybe_LoadSettingsValue(aMaxShells, &dword_5CDC1C, settings::tDWrord, 100);
    maybe_LoadSettingsValue(aMaxGrenades, &dword_5CDC20, settings::tDWrord, 50);
    maybe_LoadSettingsValue(aMaxRockets, &dword_5CDC24, settings::tDWrord, 20);
    maybe_LoadSettingsValue(aMaxEnergy, &dword_5CDC28, settings::tDWrord, 200);
    maybe_LoadSettingsValue(aMaxSmartAmmo, &dword_5CDC2C, settings::tDWrord, 10);
    result = maybe_LoadSettingsValue(aMaxFreezeAmmo, &dword_5CDC30, settings::tDWrord, 10);
    dword_5CDC3C = 900;
    dword_5CDC40 = 900;
    dword_5CDC44 = 50;
    return result;
}
// 5CDBC0: using guessed type __int16 word_5CDBC0;
// 5CDBC4: using guessed type __int16 word_5CDBC4;
// 5CDBC8: using guessed type __int16 word_5CDBC8;
// 5CDBCC: using guessed type __int16 word_5CDBCC;
// 5CDBD0: using guessed type __int16 word_5CDBD0;
// 5CDBD4: using guessed type __int16 word_5CDBD4;
// 5CDBD8: using guessed type __int16 word_5CDBD8;
// 5CDBDC: using guessed type __int16 word_5CDBDC;
// 5CDBE0: using guessed type __int16 word_5CDBE0;
// 5CDBE4: using guessed type __int16 word_5CDBE4;
// 5CDBE8: using guessed type __int16 word_5CDBE8;
// 5CDBEC: using guessed type __int16 word_5CDBEC;
// 5CDBF0: using guessed type __int16 word_5CDBF0;
// 5CDBF4: using guessed type __int16 word_5CDBF4;
// 5CDBF8: using guessed type __int16 word_5CDBF8;
// 5CDBFC: using guessed type __int16 word_5CDBFC;
// 5CDC00: using guessed type __int16 word_5CDC00;
// 5CDC04: using guessed type __int16 word_5CDC04;
// 5CDC08: using guessed type __int16 word_5CDC08;
// 5CDC0C: using guessed type __int16 word_5CDC0C;
// 5CDC10: using guessed type __int16 word_5CDC10;
// 5CDC14: using guessed type __int16 word_5CDC14;
// 5CDC18: using guessed type int dword_5CDC18;
// 5CDC1C: using guessed type int dword_5CDC1C;
// 5CDC20: using guessed type int dword_5CDC20;
// 5CDC24: using guessed type int dword_5CDC24;
// 5CDC28: using guessed type int dword_5CDC28;
// 5CDC2C: using guessed type int dword_5CDC2C;
// 5CDC30: using guessed type int dword_5CDC30;
// 5CDC34: using guessed type int dword_5CDC34;
// 5CDC38: using guessed type int dword_5CDC38;
// 5CDC3C: using guessed type int dword_5CDC3C;
// 5CDC40: using guessed type int dword_5CDC40;
// 5CDC44: using guessed type int dword_5CDC44;