#pragma once

#include "defs.h"
#include <Windows.h>

extern int g_NumLoadedLineSettingsInFile; // weak
extern int g_SettingsVariableTypes[3061]; // idb
extern int g_SettingsVariableInIntCasts[]; // weak
extern int g_SettingsValuesStorage[]; // weak
extern __int16 g_PistolAmmo; // weak
extern __int16 g_ShotgunAmmo; // weak
extern __int16 g_MachinegunAmmo; // weak
extern __int16 g_RLauncherAmmo; // weak
extern __int16 g_LaserAmmo; // weak
extern __int16 g_NeutrongunAmmo; // weak
extern __int16 g_GLauncherAmmo; // weak
extern __int16 g_FreezegunAmmo; // weak
extern __int16 g_BulletsAmmo; // weak
extern __int16 g_ShellsAmmo; // weak
extern __int16 g_GrenadesAmmo; // weak
extern __int16 g_RocketsAmmo; // weak
extern __int16 g_EnergyAmmo; // weak
extern __int16 g_SmartAmmo; // weak
extern __int16 g_FreezeAmmo; // weak
extern __int16 g_BulletsBox; // weak
extern __int16 g_ShellsBox; // weak
extern __int16 g_GrenadesBox; // weak
extern __int16 g_RocketBox; // weak
extern __int16 g_EnergyBox; // weak
extern __int16 g_SmartAmmoBox; // weak
extern __int16 g_FreezeAmmoBox; // weak
extern int g_MaxBullets; // weak
extern int g_MaxShells; // weak
extern int g_MaxGrenades; // weak
extern int g_MaxRockets; // weak
extern int g_MaxEnergy; // weak
extern int g_MaxSmartAmmo; // weak
extern int g_MaxFreezeAmmo; // weak
extern int g_HealthAmmount; // weak
extern int g_BigHelathAmmount; // weak
extern HKEY regKey; // idb
extern BYTE g_ControllerSettings; // idb
extern BYTE g_Lighting; // idb
extern BYTE g_BumpMapping; // idb
extern BYTE g_Trilinear; // idb
extern BYTE g_Gamma; // idb
extern BYTE g_TrippleBuffer; // idb
extern int g_dwWindowedMode; // weak
extern int g_dwHave32bitZBuffer; // weak
extern int dwWidth; // idb
extern int dwHeight; // idb
extern int dwRGBBitsCount; // weak
extern int g_bearSpeed[5]; // idb
extern int g_bearShotDamage; // weak
extern int g_bearHitDamage; // weak
extern int g_bearEnergy; // weak
extern _BYTE g_bearScore[4]; // idb
extern _BYTE g_bearTime[28]; // idb
extern int g_crocSpeed; // weak
extern int dword_606864; // weak
extern _BYTE g_crocScore[4]; // idb
extern int g_crocEnergy; // weak
extern int g_crocDamage; // weak
extern _BYTE g_crocTime[4]; // idb
extern int g_PeacockSpeed; // weak
extern int g_PeacockDamage; // weak
extern _BYTE g_PeacockRocketSpeed[4]; // idb
extern int g_PeacockDamageRadius; // weak
extern int g_PeacocEnergy; // weak
extern _BYTE g_PeacockScore[4]; // idb
extern _BYTE g_PeacockTime[30]; // idb
extern int dword_5CDC3C; // weak
extern int dword_5CDC40; // weak
extern int dword_5CDC44; // weak
extern _UNKNOWN unk_5BFFC8; // weak

int __cdecl loadSettings(char* FileName);
int __cdecl initSettings(HINSTANCE hInstance); // idb
int __cdecl anotherLoadSettings(char* FileName); // idb
int __cdecl getSettingsValue(const char* settingsName, int defValue); // idb
int __cdecl maybe_LoadSettingsValue(const char* a1, void* a2, int a3, int a4);
int loadBearSettings();
int loadCrocodyleSettings();
int loadPeacockSettings();
int loadWeaponSettings();
int __cdecl sub_53FA96(const char* a1, int a2);
int __stdcall sub_51A85B(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
void __cdecl loadPlayerName(const char* a1);
int __cdecl loadGameSessionName(const char* a1);
LSTATUS loadVideoSettings();
LSTATUS loadControllerSettings();
void __cdecl loadRegisterSetting(HKEY hKey, LPCSTR lpValueName, LPBYTE lpData, DWORD cbData, const char*); // idb

namespace settings
{
	enum variableType
	{
		tInt,
		tWord,
		tDWrord,
		tFloat1,
		tFloat2,
	}; 

	enum weaponStats
	{
		shotSpeed = 128,
		shotTime = 136,
		spread = 140,
		damage = 180,
	}; 
}