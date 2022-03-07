#include "settings.h"

#include "languages.h"
#include <cstdarg>
#include <cstdlib>
#include <stdio.h>
#include <Windows.h>
#include <cstring>
#include "debug.h"
#include "files.h"
#include "globalVariables.h"
#include "languages.h"
#include "tempplace.h"
#include "utils.h"
#include "directx.h"

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
char aSettingsTxt_0[] = "settings.txt"; // idb
CHAR aYouNeedTheFurF[] = "You need the Fur Fighters CD in the drive to play."; // idb
CHAR aPourJouerInsir[] = "Pour jouer, insÈrez le CD Fur Fighters dans le lecteur."; // idb
CHAR aUmZuSpielenLeg[] = "Um zu spielen, legen Sie bitte die Fur Fighters CD in Ihr Laufwerk ein."; // idb
CHAR aNecesitasElCdD[] = "Necesitas el CD de Fur Fighters en el lector para jugar."; // idb
CHAR aYouNeedTheFurF_0[] = "You need the Fur Fighters CD in the drive to play."; // idb
CHAR aResSettings_0[] = "Res Settings"; // idb
CHAR aResSettings_1[] = "Res Settings"; // idb
CHAR WindowName[] = "ÃÂıÓ‚˚Â  ÛÎ‡ÍË"; // idb
CHAR ClassName[] = "WINNY"; // idb
CHAR Caption[] = "It's an error"; // idb
CHAR Text[] = "Create Window Failed"; // idb
char aLoadingIniFile[] = "Loading Ini File..."; // idb
char aBearSpeed[11] = "Bear Speed"; // weak
char aBearShotDamage[17] = "Bear Shot Damage"; // weak
char aBearHitDamage[16] = "Bear Hit Damage"; // weak
char aBearEnergy[12] = "Bear Energy"; // weak
char aBearScore[11] = "Bear Score"; // weak
char aBearTime[10] = "Bear Time"; // weak
char aWeaponsShotgun[19] = "Weapons\\shotgun.r2"; // weak
char aBearitemsBrnin[22] = "bearitems\\brninhed.r2"; // weak
char aBearitemsBrtoy[22] = "bearitems\\brtoyhed.r2"; // weak
char aBearitemsBearh[22] = "bearitems\\bearhead.r2"; // weak
char aNone[5] = "none"; // weak
char aWeaponsSubmach[19] = "Weapons\\submach.r2"; // weak
char aBearitemsPninh[21] = "bearitems\\pninhed.r2"; // weak
char aBearitemsPToyh[22] = "bearitems\\p_toyhed.r2"; // weak
char aBearitemsPbear[22] = "bearitems\\pbearhed.r2"; // weak
char aBearitemsKaize[20] = "bearitems\\kaizer.r2"; // weak
char aNone_0[5] = "none"; // weak
char aWeaponsPistolR[18] = "Weapons\\pistol.r2"; // weak
char aBearitemsBlhel[22] = "bearitems\\blhelhed.r2"; // weak
char aBearitemsBlnin[22] = "bearitems\\blninhed.r2"; // weak
char aBearitemsBltoy[22] = "bearitems\\bltoyhed.r2"; // weak
char aBearitemsBbear[22] = "bearitems\\bbearhed.r2"; // weak
char aNone_1[5] = "none"; // weak
char aEnemiesHellbea[] = "enemies\\hellbear.skl"; // idb
char aEnemiesIslebea[] = "enemies\\islebear.skl"; // idb
char aEnemiesHellbea_0[] = "enemies\\hellbear.skl"; // idb
char aEnemiesIslebea_0[] = "enemies\\islebear.skl"; // idb
char aEnemiesHellbea_1[] = "enemies\\hellbear.skl"; // idb
char aEnemiesIslebea_1[] = "enemies\\islebear.skl"; // idb
char aWeaponsShotgun_0[19] = "Weapons\\shotgun.r2"; // weak
char aBearitemsBearh_0[22] = "bearitems\\bearhead.r2"; // weak
char aBearitemsBowle[20] = "bearitems\\bowler.r2"; // weak
char aHatbearSrf[12] = "hatbear.srf"; // weak
char aWeaponsSubmach_0[19] = "Weapons\\submach.r2"; // weak
char aBearitemsPbear_0[22] = "bearitems\\pbearhed.r2"; // weak
char aUberbearSrf[13] = "uberbear.srf"; // weak
char aWeaponsSubmach_1[19] = "Weapons\\submach.r2"; // weak
char aBearitemsPbear_1[22] = "bearitems\\pbearhed.r2"; // weak
char aBearitemsToppe[20] = "bearitems\\topper.r2"; // weak
char aVoodoobearSrf[15] = "voodoobear.srf"; // weak
char aEnemiesBondbea[] = "enemies\\bondbears.skl"; // idb
char aEnemiesBondbea_0[] = "enemies\\bondbears.skl"; // idb
char aEnemiesBondbea_1[] = "enemies\\bondbears.skl"; // idb
char aWeaponsPistolR_0[18] = "Weapons\\pistol.r2"; // weak
char aBearitemsBbear_0[22] = "bearitems\\bbearhed.r2"; // weak
char aHappybearsSrf[15] = "happybears.srf"; // weak
char aEnemiesMrgMraS[] = "enemies\\mrg_mra.skl"; // idb
CHAR aPatrolSpawnerN[] = "Patrol Spawner needs a link"; // idb
char aEnemiesHellbea_2[] = "enemies\\hellbear.skl"; // idb
char aEnemiesIslebea_2[] = "enemies\\islebear.skl"; // idb
char aEnemiesHellbea_3[] = "enemies\\hellbear.skl"; // idb
char aEnemiesIslebea_3[] = "enemies\\islebear.skl"; // idb
char aEnemiesHellbea_4[] = "enemies\\hellbear.skl"; // idb
char aEnemiesIslebea_4[] = "enemies\\islebear.skl"; // idb
char aEnemiesHellcro[] = "enemies\\hellcroc.skl"; // idb
char aEnemiesIslecro[] = "enemies\\islecroc.skl"; // idb
char aEnemiesHellarm_0[] = "enemies\\hellarma.skl"; // idb
char aEnemiesArmadil_0[] = "enemies\\armadillo.skl"; // idb
char aBossesViggoSkl[] = "bosses\\viggo.skl"; // idb
char aCrocSpeed[11] = "Croc Speed"; // weak
char aCrocEnergy[12] = "Croc Energy"; // weak
char aCrocDamage[12] = "Croc Damage"; // weak
char aCrocScore[11] = "Croc Score"; // weak
char aCrocTime[10] = "Croc Time"; // weak
char aBearitemsBeret[19] = "bearitems\\beret.r2"; // weak
char aCrocSrf[9] = "croc.srf"; // weak
char aEnemiesHellcro_0[] = "enemies\\hellcroc.skl"; // idb
char aEnemiesIslecro_0[] = "enemies\\islecroc.skl"; // idb
char aPakdataLevelPa[] = "Pakdata\\level.pak"; // idb
char aLoadingCutscen[] = "Loading Cutscene World File"; // idb
char aPeacockSpeed[14] = "Peacock Speed"; // weak
char aPeacockRocketS[21] = "Peacock Rocket Speed"; // weak
char aPeacockDamage[15] = "Peacock Damage"; // weak
char aPeacockDamageR[22] = "Peacock Damage Radius"; // weak
char aPeacockEnergy[15] = "Peacock Energy"; // weak
char aPeacockScore[14] = "Peacock Score"; // weak
char aPeacockTime[13] = "Peacock Time"; // weak
char aBearitemsBeret_1[19] = "bearitems\\beret.r2"; // weak
char aWeaponsRlaunch_1[21] = "Weapons\\rlauncher.r2"; // weak
char aPcockSrf[10] = "pcock.srf"; // weak
char aEnemiesHellpco[] = "enemies\\hellpcock.skl"; // idb
char aEnemiesIslepco[] = "enemies\\islepcock.skl"; // idb
char aPistolAmmo[12] = "Pistol Ammo"; // weak
char aShotgunAmmo[13] = "Shotgun Ammo"; // weak
char aMachgunAmmo[13] = "MachGun Ammo"; // weak
char aGlauncherAmmo[15] = "GLauncher Ammo"; // weak
char aRlauncherAmmo[15] = "RLauncher Ammo"; // weak
char aLaserAmmo[11] = "Laser Ammo"; // weak
char aNeutronGunAmmo[17] = "Neutron Gun Ammo"; // weak
char aFreezeGunAmmo[16] = "Freeze Gun Ammo"; // weak
char aBullets[8] = "Bullets"; // weak
char aShells[7] = "Shells"; // weak
char aGrenades[9] = "Grenades"; // weak
char aRockets[8] = "Rockets"; // weak
char aEnergy[7] = "Energy"; // weak
char aSmartAmmo[11] = "Smart Ammo"; // weak
char aFreezeAmmo[12] = "Freeze Ammo"; // weak
char aBulletBox[11] = "Bullet Box"; // weak
char aShellBox[10] = "Shell Box"; // weak
char aGrenadeBox[12] = "Grenade Box"; // weak
char aRocketBox[11] = "Rocket Box"; // weak
char aEnergyBox[11] = "Energy Box"; // weak
char aSmartAmmoBox[15] = "Smart Ammo Box"; // weak
char aFreezeAmmoBox[16] = "Freeze Ammo Box"; // weak
char aHealthAmount[14] = "Health Amount"; // weak
char aBigHealthAmoun[18] = "Big Health Amount"; // weak
char aMaxBullets[12] = "Max Bullets"; // weak
char aMaxShells[11] = "Max Shells"; // weak
char aMaxGrenades[13] = "Max Grenades"; // weak
char aMaxRockets[12] = "Max Rockets"; // weak
char aMaxEnergy[11] = "Max Energy"; // weak
char aMaxSmartAmmo[15] = "Max Smart Ammo"; // weak
char aMaxFreezeAmmo[16] = "Max Freeze Ammo"; // weak
CHAR aLighting[] = "Lighting"; // idb
CHAR aBumpMapping[] = "Bump Mapping"; // idb
CHAR aTrilinear[] = "Trilinear"; // idb
CHAR aGamma[] = "Gamma"; // idb
CHAR aTripleBuffer[] = "Triple Buffer"; // idb
CHAR aPlayerName_0[] = "Player Name"; // idb
CHAR aSessionName_0[] = "Session Name"; // idb
CHAR aLighting_0[] = "Lighting"; // idb
CHAR aBumpMapping_0[] = "Bump Mapping"; // idb
CHAR aTrilinear_0[] = "Trilinear"; // idb
CHAR aTripleBuffer_0[] = "Triple Buffer"; // idb
CHAR aGamma_0[] = "Gamma"; // idb
char aFocusDavrossed[] = "focus davrossed"; // idb
char aFocusDoctorWho[] = "focus doctor whoed"; // idb
CHAR SubKey[] = "SOFTWARE\\Bizarre Creations\\Fur Fighters"; // idb
char aRt[] = "rt"; // idb
CHAR aControllerConf_0[] = "Controller Configuration"; // idb

int g_NumLoadedLineSettingsInFile; // weak
int g_SettingsVariableTypes[3061]; // idb
int g_SettingsVariableInIntCasts[]; // weak
int g_SettingsValuesStorage[]; // weak
__int16 g_PistolAmmo; // weak
__int16 g_ShotgunAmmo; // weak
__int16 g_MachinegunAmmo; // weak
__int16 g_RLauncherAmmo; // weak
__int16 g_LaserAmmo; // weak
__int16 g_NeutrongunAmmo; // weak
__int16 g_GLauncherAmmo; // weak
__int16 g_FreezegunAmmo; // weak
__int16 g_BulletsAmmo; // weak
__int16 g_ShellsAmmo; // weak
__int16 g_GrenadesAmmo; // weak
__int16 g_RocketsAmmo; // weak
__int16 g_EnergyAmmo; // weak
__int16 g_SmartAmmo; // weak
__int16 g_FreezeAmmo; // weak
__int16 g_BulletsBox; // weak
__int16 g_ShellsBox; // weak
__int16 g_GrenadesBox; // weak
__int16 g_RocketBox; // weak
__int16 g_EnergyBox; // weak
__int16 g_SmartAmmoBox; // weak
__int16 g_FreezeAmmoBox; // weak
int g_MaxBullets; // weak
int g_MaxShells; // weak
int g_MaxGrenades; // weak
int g_MaxRockets; // weak
int g_MaxEnergy; // weak
int g_MaxSmartAmmo; // weak
int g_MaxFreezeAmmo; // weak
int g_HealthAmmount; // weak
int g_BigHelathAmmount; // weak
HKEY regKey; // idb
BYTE g_ControllerSettings; // idb
int dword_5C6058; // weak
int dword_5C6060; // idb
int dword_5BFFC0; // idb
int dword_5C605C; // idb
WPARAM dword_5BFFC4; // idb
BYTE g_Lighting; // idb
BYTE g_BumpMapping; // idb
BYTE g_Trilinear; // idb
BYTE g_Gamma; // idb
BYTE g_TrippleBuffer; // idb
BYTE String; // idb

LSTATUS sub_56A4D1();
int __cdecl showDialogSettingsBox(LPARAM dwInitParam); // idb
INT_PTR __stdcall dialogGameSettingsCallback(HWND, UINT, WPARAM, LPARAM); // idb
LRESULT __cdecl sub_57951B(HWND hDlg, int a2, int a3, int a4, WPARAM a5);
int __cdecl sub_57972A(_DWORD* a1, char a2);
_DWORD* __cdecl sub_5791DC(_DWORD* a1, _DWORD* a2);
int __cdecl sub_523E05(HKEY hKey, LPCSTR lpValueName, BYTE* lpData); // idb

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
    g_IsGameCDInserted = 0;
    for (i = 67; i < 90; ++i)
    {
        settingsFileName = (const char*)getFormattedString(aSettingsTxt_0, i);
        Stream = fopen(settingsFileName, aRt);
        if (Stream)
        {
            g_IsGameCDInserted = i;
            fclose(Stream);
            break;
        }
    }
    if (!g_IsGameCDInserted)
    {
        switch (languageId)
        {
        case language::English:
            fatalError(aYouNeedTheFurF);
        case language::French:
            fatalError(aPourJouerInsir);
        case language::German:
            fatalError(aUmZuSpielenLeg);
        case language::Italy:
            fatalError(aNecesitasElCdD);
        default:
            fatalError(aYouNeedTheFurF_0);
        }
    }
    RegCreateKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0, 0, 0xF003Fu, 0, &regKey, 0);
    if ((int)checkAudioVideoDevices(0) < 0)
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
    *(_DWORD*)(dword_5C6448 + 1176) = *(_DWORD*)&g_TrippleBuffer;
    showDialogSettingsBox((LPARAM)&dword_5C6448);
    *(_DWORD*)&g_TrippleBuffer = *(_DWORD*)(dword_5C6448 + 1176);
    RegSetValueExA(regKey, aResSettings_1, 0, 1u, (const BYTE*)(dword_5C6448 + 1220), 4u);
    loadVideoSettings();
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
    WndClass.hIcon = LoadIconA(g_hInstance, (LPCSTR)0x6C);
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
// 56A43D: using guessed type int loadVideoSettings(void);
// 56A4D1: using guessed type int sub_56A4D1(void);
// 578B98: using guessed type _DWORD __cdecl checkAudioVideoDevices(_DWORD);
// 57972A: using guessed type _DWORD __cdecl sub_57972A(_DWORD, _DWORD);
// 5C6444: using guessed type char g_IsGameCDInserted;
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
    g_NumLoadedLineSettingsInFile = 0;
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
            dword_667420[10 * dword_6673A4] = g_NumLoadedLineSettingsInFile;
            dword_667424[10 * dword_6673A4] = 0;
        }
        if (Buffer[0] == '[')
        {
            sscanf(Buffer, "[%[^]]]=%d", (char*)&unk_668C00 + 48 * g_NumLoadedLineSettingsInFile, &g_SettingsValuesStorage[12 * g_NumLoadedLineSettingsInFile]);
            g_SettingsVariableInIntCasts[12 * g_NumLoadedLineSettingsInFile] = 0;
            g_SettingsVariableTypes[12 * g_NumLoadedLineSettingsInFile++] = 0;
            ++dword_667424[10 * dword_6673A4];
        }
    }
    return sub_53F213();
}
// 53F213: using guessed type int sub_53F213(void);
// 667388: using guessed type int dword_667388;
// 6673A0: using guessed type int g_NumLoadedLineSettingsInFile;
// 6673A4: using guessed type int dword_6673A4;
// 667420: using guessed type int dword_667420[];
// 668C20: using guessed type int g_SettingsValuesStorage[];
// 668C28: using guessed type int g_SettingsVariableInIntCasts[];

//----- (0053F9F3) --------------------------------------------------------
int __cdecl getSettingsValue(const char* settingsName, int defValue)
{
    int i; // [esp+14h] [ebp-4h]

    for (i = 0; i < g_NumLoadedLineSettingsInFile; ++i)
    {
        if (!strcmp(settingsName, (const char*)&unk_668C00 + 48 * i))
            return g_SettingsValuesStorage[12 * i];
    }
    return defValue;
}
// 6673A0: using guessed type int g_NumLoadedLineSettingsInFile;
// 668C20: using guessed type int g_SettingsValuesStorage[];

//----- (0053F82D) --------------------------------------------------------
int __cdecl maybe_LoadSettingsValue(const char* settingsName, void* variable, int variableType, int defaultValue)
{
    float v5; // [esp+0h] [ebp-28h]
    float v6; // [esp+8h] [ebp-20h]
    int i; // [esp+24h] [ebp-4h]

    for (i = 0; i < g_NumLoadedLineSettingsInFile; ++i)
    {
        if (!strcmp(settingsName, (const char*)&unk_668C00 + 48 * i))
        {
            g_SettingsVariableInIntCasts[12 * i] = (int)variable;
            g_SettingsVariableTypes[12 * i] = variableType;
            switch (variableType)
            {
            case settings::tInt:
                *(int*)variable = g_SettingsValuesStorage[12 * i];
                break;
            case settings::tWord:
                *(_WORD*)variable = g_SettingsValuesStorage[12 * i];
                break;
            case settings::tDWrord:
                *(_DWORD*)variable = g_SettingsValuesStorage[12 * i];
                break;
            case settings::tFloat1:
                v6 = (float)g_SettingsValuesStorage[12 * i];
                *(float*)variable = v6 * 0.0099999998;
                break;
            case settings::tFloat2:
                *(float*)variable = (float)g_SettingsValuesStorage[12 * i];
                break;
            default:
                return g_SettingsValuesStorage[12 * i];
            }
            return g_SettingsValuesStorage[12 * i];
        }
    }
    switch (variableType)
    {
    case settings::tInt:
        *(int*)variable = defaultValue;
        break;
    case settings::tWord:
        *(_WORD*)variable = defaultValue;
        break;
    case settings::tDWrord:
        *(_DWORD*)variable = defaultValue;
        break;
    case settings::tFloat1:
        v5 = (float)defaultValue;
        *(float*)variable = v5 * 0.0099999998;
        break;
    case settings::tFloat2:
        *(float*)variable = (float)defaultValue;
        break;
    default:
        return defaultValue;
    }
    return defaultValue;
}
// 6673A0: using guessed type int g_NumLoadedLineSettingsInFile;
// 668C20: using guessed type int g_SettingsValuesStorage[];
// 668C28: using guessed type int g_SettingsVariableInIntCasts[];

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

    maybe_LoadSettingsValue(aPistolAmmo, &g_PistolAmmo, settings::tDWrord, 20);
    maybe_LoadSettingsValue(aShotgunAmmo, &g_ShotgunAmmo, settings::tDWrord, 10);
    maybe_LoadSettingsValue(aMachgunAmmo, &g_MachinegunAmmo, settings::tDWrord, 20);
    maybe_LoadSettingsValue(aGlauncherAmmo, &g_GLauncherAmmo, settings::tDWrord, 2);
    maybe_LoadSettingsValue(aRlauncherAmmo, &g_RLauncherAmmo, settings::tDWrord, 2);
    maybe_LoadSettingsValue(aLaserAmmo, &g_LaserAmmo, settings::tDWrord, 20);
    maybe_LoadSettingsValue(aNeutronGunAmmo, &g_NeutrongunAmmo, settings::tDWrord, 40);
    maybe_LoadSettingsValue(aFreezeGunAmmo, &g_FreezegunAmmo, settings::tDWrord, 40);
    maybe_LoadSettingsValue(aBullets, &g_BulletsAmmo, settings::tDWrord, 20);
    maybe_LoadSettingsValue(aShells, &g_ShellsAmmo, settings::tDWrord, 10);
    maybe_LoadSettingsValue(aGrenades, &g_GrenadesAmmo, settings::tDWrord, 10);
    maybe_LoadSettingsValue(aRockets, &g_RocketsAmmo, settings::tDWrord, 1);
    maybe_LoadSettingsValue(aEnergy, &g_EnergyAmmo, settings::tDWrord, 20);
    maybe_LoadSettingsValue(aSmartAmmo, &g_SmartAmmo, settings::tDWrord, 1);
    maybe_LoadSettingsValue(aFreezeAmmo, &g_FreezeAmmo, settings::tDWrord, 1);
    maybe_LoadSettingsValue(aBulletBox, &g_BulletsBox, settings::tDWrord, 100);
    maybe_LoadSettingsValue(aShellBox, &g_ShellsBox, settings::tDWrord, 20);
    maybe_LoadSettingsValue(aGrenadeBox, &g_GrenadesBox, settings::tDWrord, 20);
    maybe_LoadSettingsValue(aRocketBox, &g_RocketBox, settings::tDWrord, 10);
    maybe_LoadSettingsValue(aEnergyBox, &g_EnergyBox, settings::tDWrord, 100);
    maybe_LoadSettingsValue(aSmartAmmoBox, &g_SmartAmmoBox, settings::tDWrord, 5);
    maybe_LoadSettingsValue(aFreezeAmmoBox, &g_FreezeAmmoBox, settings::tDWrord, 5);
    maybe_LoadSettingsValue(aHealthAmount, &g_HealthAmmount, settings::tDWrord, 2);
    maybe_LoadSettingsValue(aBigHealthAmoun, &g_BigHelathAmmount, settings::tDWrord, 25);
    maybe_LoadSettingsValue(aMaxBullets, &g_MaxBullets, settings::tDWrord, 200);
    maybe_LoadSettingsValue(aMaxShells, &g_MaxShells, settings::tDWrord, 100);
    maybe_LoadSettingsValue(aMaxGrenades, &g_MaxGrenades, settings::tDWrord, 50);
    maybe_LoadSettingsValue(aMaxRockets, &g_MaxRockets, settings::tDWrord, 20);
    maybe_LoadSettingsValue(aMaxEnergy, &g_MaxEnergy, settings::tDWrord, 200);
    maybe_LoadSettingsValue(aMaxSmartAmmo, &g_MaxSmartAmmo, settings::tDWrord, 10);
    result = maybe_LoadSettingsValue(aMaxFreezeAmmo, &g_MaxFreezeAmmo, settings::tDWrord, 10);
    dword_5CDC3C = 900;
    dword_5CDC40 = 900;
    dword_5CDC44 = 50;
    return result;
}
// 5CDBC0: using guessed type __int16 g_PistolAmmo;
// 5CDBC4: using guessed type __int16 g_ShotgunAmmo;
// 5CDBC8: using guessed type __int16 g_MachinegunAmmo;
// 5CDBCC: using guessed type __int16 g_RLauncherAmmo;
// 5CDBD0: using guessed type __int16 g_LaserAmmo;
// 5CDBD4: using guessed type __int16 g_NeutrongunAmmo;
// 5CDBD8: using guessed type __int16 g_GLauncherAmmo;
// 5CDBDC: using guessed type __int16 g_FreezegunAmmo;
// 5CDBE0: using guessed type __int16 g_BulletsAmmo;
// 5CDBE4: using guessed type __int16 g_ShellsAmmo;
// 5CDBE8: using guessed type __int16 g_GrenadesAmmo;
// 5CDBEC: using guessed type __int16 g_RocketsAmmo;
// 5CDBF0: using guessed type __int16 g_EnergyAmmo;
// 5CDBF4: using guessed type __int16 g_SmartAmmo;
// 5CDBF8: using guessed type __int16 g_FreezeAmmo;
// 5CDBFC: using guessed type __int16 g_BulletsBox;
// 5CDC00: using guessed type __int16 g_ShellsBox;
// 5CDC04: using guessed type __int16 g_GrenadesBox;
// 5CDC08: using guessed type __int16 g_RocketBox;
// 5CDC0C: using guessed type __int16 g_EnergyBox;
// 5CDC10: using guessed type __int16 g_SmartAmmoBox;
// 5CDC14: using guessed type __int16 g_FreezeAmmoBox;
// 5CDC18: using guessed type int g_MaxBullets;
// 5CDC1C: using guessed type int g_MaxShells;
// 5CDC20: using guessed type int g_MaxGrenades;
// 5CDC24: using guessed type int g_MaxRockets;
// 5CDC28: using guessed type int g_MaxEnergy;
// 5CDC2C: using guessed type int g_MaxSmartAmmo;
// 5CDC30: using guessed type int g_MaxFreezeAmmo;
// 5CDC34: using guessed type int g_HealthAmmount;
// 5CDC38: using guessed type int g_BigHelathAmmount;
// 5CDC3C: using guessed type int dword_5CDC3C;
// 5CDC40: using guessed type int dword_5CDC40;
// 5CDC44: using guessed type int dword_5CDC44;

//----- (0053FA96) --------------------------------------------------------
int __cdecl sub_53FA96(const char* a1, int a2)
{
    float v3; // [esp+0h] [ebp-20h]
    int i; // [esp+1Ch] [ebp-4h]

    for (i = 0; ; ++i)
    {
        if (i >= g_NumLoadedLineSettingsInFile)
            return 0;
        if (!strcmp(a1, (const char*)&unk_668C00 + 48 * i))
            break;
    }
    g_SettingsValuesStorage[12 * i] = a2;
    if (g_SettingsVariableInIntCasts[12 * i])
    {
        switch (g_SettingsVariableTypes[12 * i])
        {
        case settings::tInt:
            *(_BYTE*)g_SettingsVariableInIntCasts[12 * i] = a2;
            break;
        case settings::tWord:
            *(_WORD*)g_SettingsVariableInIntCasts[12 * i] = a2;
            break;
        case settings::tDWrord:
            *(_DWORD*)g_SettingsVariableInIntCasts[12 * i] = a2;
            break;
        case settings::tFloat1:
            v3 = (float)a2;
            *(float*)g_SettingsVariableInIntCasts[12 * i] = v3 * 0.0099999998;
            break;
        case settings::tFloat2:
            *(float*)g_SettingsVariableInIntCasts[12 * i] = (float)a2;
            break;
        default:
            return 1;
        }
    }
    return 1;
}
// 6673A0: using guessed type int g_NumLoadedLineSettingsInFile;
// 668C20: using guessed type int g_SettingsValuesStorage[];
// 668C28: using guessed type int g_SettingsVariableInIntCasts[];

//----- (0051A85B) --------------------------------------------------------
int __stdcall sub_51A85B(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
    int result; // eax

    switch (Msg)
    {
    case 1u:
    case 6u:
        goto LABEL_9;
    case 3u:
        ClipCursor(0);
        if (dword_6673E0)
            sub_51A486((__int16)lParam, SHIWORD(lParam));
        goto LABEL_9;
    case 7u:
        writeDebug(aFocusDoctorWho);
        dword_5AC9F8 = 1;
        ClipCursor(&Point);
        return DefWindowProcA(hWnd, Msg, wParam, lParam);
    case 8u:
        writeDebug(aFocusDavrossed);
        dword_5AC9F8 = 0;
        ClipCursor(0);
        return DefWindowProcA(hWnd, Msg, wParam, lParam);
    case 0x1Cu:
        sub_51A4CE((int)hWnd, Msg, wParam);
    LABEL_9:
        result = 0;
        break;
    default:
        result = DefWindowProcA(hWnd, Msg, wParam, lParam);
        break;
    }
    return result;
}
// 5AC9F8: using guessed type int dword_5AC9F8;
// 6673E0: using guessed type int dword_6673E0;

//----- (0056A4D1) --------------------------------------------------------
LSTATUS sub_56A4D1()
{
    LSTATUS result; // eax
    DWORD cbData; // [esp+4h] [ebp-Ch] BYREF
    DWORD Type; // [esp+8h] [ebp-8h] BYREF
    BYTE Data[4]; // [esp+Ch] [ebp-4h] BYREF

    cbData = 4;
    if (RegQueryValueExA(regKey, aLighting_0, 0, &Type, Data, &cbData))
        *(_DWORD*)&g_Lighting = 1;
    else
        *(_DWORD*)&g_Lighting = *(_DWORD*)Data;
    if (RegQueryValueExA(regKey, aBumpMapping_0, 0, &Type, Data, &cbData))
        *(_DWORD*)&g_BumpMapping = 0;
    else
        *(_DWORD*)&g_BumpMapping = *(_DWORD*)Data;
    if (RegQueryValueExA(regKey, aTrilinear_0, 0, &Type, Data, &cbData))
        *(_DWORD*)&g_Trilinear = 0;
    else
        *(_DWORD*)&g_Trilinear = *(_DWORD*)Data;
    if (RegQueryValueExA(regKey, aTripleBuffer_0, 0, &Type, Data, &cbData))
        *(_DWORD*)&g_TrippleBuffer = 0;
    else
        *(_DWORD*)&g_TrippleBuffer = *(_DWORD*)Data;
    result = RegQueryValueExA(regKey, aGamma_0, 0, &Type, Data, &cbData);
    if (result)
    {
        *(_DWORD*)&g_Gamma = 200;
    }
    else
    {
        result = *(_DWORD*)Data;
        *(_DWORD*)&g_Gamma = *(_DWORD*)Data;
    }
    return result;
}

//----- (00523AB8) --------------------------------------------------------
int __cdecl loadPlayerName(const char* a1)
{
    strcpy((char*)&String, a1);
    return sub_523E05(regKey, aPlayerName_0, &String);
}

//----- (00523B2D) --------------------------------------------------------
int __cdecl loadGameSessionName(const char* a1)
{
    strcpy((char*)&byte_5BAD14, a1);
    return sub_523E05(regKey, aSessionName_0, &byte_5BAD14);
}

//----- (0056A43D) --------------------------------------------------------
LSTATUS loadVideoSettings()
{
    RegSetValueExA(regKey, aLighting, 0, 4u, &g_Lighting, 4u);
    RegSetValueExA(regKey, aBumpMapping, 0, 4u, &g_BumpMapping, 4u);
    RegSetValueExA(regKey, aTrilinear, 0, 4u, &g_Trilinear, 4u);
    RegSetValueExA(regKey, aGamma, 0, 4u, &g_Gamma, 4u);
    return RegSetValueExA(regKey, aTripleBuffer, 0, 4u, &g_TrippleBuffer, 4u);
}

//----- (00579201) --------------------------------------------------------
int __cdecl showDialogSettingsBox(LPARAM dwInitParam)
{
    HMODULE v1; // eax
    int result; // eax
    HWND v3; // [esp-Ch] [ebp-Ch]

    v3 = GetForegroundWindow();
    v1 = GetModuleHandleA(0);
    if (DialogBoxParamA(v1, (LPCSTR)0x90, v3, dialogGameSettingsCallback, dwInitParam) == 1)
        result = 0;
    else
        result = -2147467259;
    return result;
}

//----- (00579238) --------------------------------------------------------
INT_PTR __stdcall dialogGameSettingsCallback(HWND hDlg, UINT a2, WPARAM a3, LPARAM a4)
{
    INT_PTR result; // eax
    LRESULT v5; // [esp+8h] [ebp-38h]
    LRESULT v6; // [esp+Ch] [ebp-34h]
    LRESULT wParam; // [esp+10h] [ebp-30h]
    WPARAM v8; // [esp+14h] [ebp-2Ch]
    HWND v9; // [esp+18h] [ebp-28h]
    LRESULT v10; // [esp+1Ch] [ebp-24h]
    HWND v11; // [esp+20h] [ebp-20h]
    _DWORD* v12; // [esp+24h] [ebp-1Ch]
    int v13; // [esp+28h] [ebp-18h]
    LRESULT v14; // [esp+2Ch] [ebp-14h]
    HWND v15; // [esp+30h] [ebp-10h]
    HWND hWnd; // [esp+34h] [ebp-Ch]
    int v17; // [esp+38h] [ebp-8h] BYREF
    int v18; // [esp+3Ch] [ebp-4h] BYREF

    sub_5791DC(&v17, &v18);
    if (a2 == 272)
    {
        dword_5C6058 = a4;
        if (a4)
        {
            dword_5C6060 = *(_DWORD*)dword_5C6058;
            dword_5BFFC0 = *(_DWORD*)(dword_5C6060 + 1220);
            dword_5C605C = *(_DWORD*)(dword_5C6060 + 1172);
            dword_5BFFC4 = *(_DWORD*)(dword_5C6060 + 1176);
            sub_57951B(hDlg, dword_5C6060, dword_5BFFC0, dword_5C605C, dword_5BFFC4);
            result = 1;
        }
        else
        {
            result = 0;
        }
    }
    else if (a2 == 273)
    {
        hWnd = GetDlgItem(hDlg, 1018);
        v15 = GetDlgItem(hDlg, 1038);
        v9 = GetDlgItem(hDlg, 1035);
        v11 = GetDlgItem(hDlg, 1034);
        v14 = SendMessageA(hWnd, 0x147u, 0, 0);
        wParam = SendMessageA(v15, 0x147u, 0, 0);
        v10 = SendMessageA(v15, 0x150u, wParam, 0);
        if (v9)
            v6 = SendMessageA(v9, 0xF0u, 0, 0);
        else
            v6 = 0;
        v13 = v6;
        if (v11)
            v5 = SendMessageA(v11, 0xF0u, 0, 0);
        else
            v5 = 0;
        v8 = v5;
        v12 = (_DWORD*)(1236 * v14 + v17);
        if ((unsigned __int16)a3 == 1)
        {
            *(_DWORD*)dword_5C6058 = v12;
            v12[293] = v6;
            v12[294] = v5;
            v12[305] = v10;
            qmemcpy(v12 + 262, (const void*)(124 * v10 + v12[303]), 0x7Cu);
            EndDialog(hDlg, 1);
            result = 1;
        }
        else
        {
            if ((unsigned __int16)a3 == 2)
            {
                EndDialog(hDlg, 2);
                exit(0);
            }
            if (HIWORD(a3) == 9 && (unsigned __int16)a3 == 1018)
            {
                v10 = *(_DWORD*)(v17 + 1236 * v14 + 1220);
                v13 = *(_DWORD*)(v17 + 1236 * v14 + 1172);
                v8 = *(_DWORD*)(v17 + 1236 * v14 + 1176);
            }
            sub_57951B(hDlg, 1236 * v14 + v17, v10, v13, v8);
            result = 1;
        }
    }
    else
    {
        result = 0;
    }
    return result;
}
// 5C6058: using guessed type int dword_5C6058;

//----- (0044D136) --------------------------------------------------------
LSTATUS loadControllerSettings()
{
    LSTATUS result; // eax
    DWORD cbData; // [esp+Ch] [ebp-D4h] BYREF
    DWORD Type; // [esp+10h] [ebp-D0h] BYREF
    BYTE Data[204]; // [esp+14h] [ebp-CCh] BYREF

    cbData = 204;
    result = RegQueryValueExA(regKey, aControllerConf_0, 0, &Type, Data, &cbData);
    if (!result)
        qmemcpy(&g_ControllerSettings, Data, cbData);
    return result;
}

//----- (0057951B) --------------------------------------------------------
LRESULT __cdecl sub_57951B(HWND hDlg, int a2, int a3, int a4, WPARAM a5)
{
    LRESULT result; // eax
    CHAR v6[80]; // [esp+4h] [ebp-80h] BYREF
    WPARAM v7; // [esp+54h] [ebp-30h]
    LPARAM lParam; // [esp+58h] [ebp-2Ch]
    WPARAM wParam; // [esp+5Ch] [ebp-28h]
    LPARAM j; // [esp+60h] [ebp-24h]
    HWND v11; // [esp+64h] [ebp-20h]
    int v12[2]; // [esp+68h] [ebp-1Ch] BYREF
    HWND v13; // [esp+70h] [ebp-14h]
    HWND hWnd; // [esp+74h] [ebp-10h]
    unsigned int v15; // [esp+78h] [ebp-Ch] BYREF
    unsigned int i; // [esp+7Ch] [ebp-8h]
    HWND v17; // [esp+80h] [ebp-4h]

    sub_5791DC(v12, &v15);
    hWnd = GetDlgItem(hDlg, 1018);
    v13 = GetDlgItem(hDlg, 1038);
    v17 = GetDlgItem(hDlg, 1035);
    v11 = GetDlgItem(hDlg, 1034);
    v12[1] = (int)GetDlgItem(hDlg, 1016);
    SendMessageA(hWnd, 0x14Bu, 0, 0);
    result = SendMessageA(v13, 0x14Bu, 0, 0);
    for (i = 0; i < v15; ++i)
    {
        lParam = 1236 * i + v12[0];
        wParam = SendMessageA(hWnd, 0x143u, 0, lParam);
        if (lParam == a2)
        {
            SendMessageA(hWnd, 0x14Eu, wParam, 0);
            if (v17)
                EnableWindow(v17, *(_DWORD*)(lParam + 1232));
            if (v11)
            {
                EnableWindow(v11, *(_DWORD*)(lParam + 1228));
                SendMessageA(v11, 0xF1u, a5, 0);
            }
            for (j = 0; (unsigned int)j < *(_DWORD*)(lParam + 1216); ++j)
            {
                wsprintfA(
                    v6,
                    "%ld x %ld x %ld",
                    *(_DWORD*)(124 * j + *(_DWORD*)(lParam + 1212) + 12),
                    *(_DWORD*)(124 * j + *(_DWORD*)(lParam + 1212) + 8),
                    *(_DWORD*)(124 * j + *(_DWORD*)(lParam + 1212) + 84));
                v7 = SendMessageA(v13, 0x143u, 0, (LPARAM)v6);
                SendMessageA(v13, 0x151u, v7, j);
                if (j == a3)
                    SendMessageA(v13, 0x14Eu, v7, 0);
            }
        }
        result = i + 1;
    }
    return result;
}

//----- (0057972A) --------------------------------------------------------
int __cdecl sub_57972A(_DWORD* a1, char a2)
{
    int v3; // [esp+8h] [ebp-1Ch]
    int v4; // [esp+Ch] [ebp-18h]
    int v5; // [esp+10h] [ebp-14h] BYREF
    unsigned int i; // [esp+14h] [ebp-10h]
    int v7; // [esp+18h] [ebp-Ch]
    int v8; // [esp+1Ch] [ebp-8h]
    unsigned int v9; // [esp+20h] [ebp-4h] BYREF

    v3 = 0;
    v4 = 0;
    v7 = 0;
    v8 = 0;
    if (!a1)
        return -2147024809;
    sub_5791DC(&v5, &v9);
    for (i = 0; i < v9; ++i)
    {
        if (*(_DWORD*)(v5 + 1236 * i + 1224))
        {
            if (*(_DWORD*)(v5 + 1236 * i + 280))
            {
                if (!memcmp(*(const void**)(v5 + 1236 * i + 40), dword_597278, 0x10u))
                    v8 = 1236 * i + v5;
                else
                    v7 = 1236 * i + v5;
            }
            else if (!memcmp(*(const void**)(v5 + 1236 * i + 40), &unk_597298, 0x10u))
            {
                v3 = 1236 * i + v5;
            }
            else
            {
                v4 = 1236 * i + v5;
            }
        }
    }
    if ((a2 & 1) != 0 || !v8)
    {
        if ((a2 & 1) != 0 || !v7)
        {
            if (v4)
            {
                *a1 = v4;
            }
            else
            {
                if (!v3)
                    return -2130706428;
                *a1 = v3;
            }
        }
        else
        {
            *a1 = v7;
        }
    }
    else
    {
        *a1 = v8;
    }
    return 0;
}

//----- (005791DC) --------------------------------------------------------
_DWORD* __cdecl sub_5791DC(_DWORD* a1, _DWORD* a2)
{
    _DWORD* result; // eax

    if (a1)
    {
        result = a1;
        *a1 = &unk_5BFFC8;
    }
    if (a2)
        *a2 = numVideoDevices;
    return result;
}
// 5C6068: using guessed type int dword_5C6068;

//----- (00523E05) --------------------------------------------------------
int __cdecl sub_523E05(HKEY hKey, LPCSTR lpValueName, BYTE* lpData)
{
    int result; // eax

    if (RegSetValueExA(hKey, lpValueName, 0, 1u, lpData, strlen((const char*)lpData) + 1))
        result = -2147467259;
    else
        result = 0;
    return result;
}

//----- (00523DAD) --------------------------------------------------------
int __cdecl loadRegisterSetting(HKEY hKey, LPCSTR lpValueName, LPBYTE lpData, DWORD cbData, int a5)
{
    DWORD Type; // [esp+Ch] [ebp-4h] BYREF

    if (RegQueryValueExA(hKey, lpValueName, 0, &Type, lpData, &cbData))
        strcpy((char*)lpData, (const char*)a5);
    return 0;
}