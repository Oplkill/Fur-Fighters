#pragma once

#include "defs.h"

int __cdecl loadSettings(char* FileName);
int __cdecl initSettings(HINSTANCE hInstance); // idb
int __cdecl anotherLoadSettings(char* FileName); // idb
int __cdecl getSettingsValue(const char* settingsName, int defValue); // idb
int __cdecl maybe_LoadSettingsValue(const char* a1, _BYTE* a2, int a3, int a4);
int loadBearSettings();
int loadCrocodyleSettings();
int loadPeacockSettings();
int loadWeaponSettings();

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
}