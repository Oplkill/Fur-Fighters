#include "gui.h"

#include "settings.h"
#include "emptyfunctions.h"

char aHealthPosX[13] = "Health Pos X"; // weak
char aHealthPosY[13] = "Health Pos Y"; // weak
char aAmmoPosX[11] = "Ammo Pos X"; // weak
char aAmmoPosY[11] = "Ammo Pos Y"; // weak
char aTempPosX[11] = "Temp Pos X"; // weak
char aTempPosY[11] = "Temp Pos Y"; // weak
char aOverlaySelecto[17] = "Overlay Selector"; // weak
char aDialogX[9] = "Dialog X"; // weak
char aDialogY[9] = "Dialog Y"; // weak
char aDialogWidth[13] = "Dialog Width"; // weak
char aDialogHeight[14] = "Dialog Height"; // weak

int g_HealthPosX; // weak
int g_HealthPosY; // weak
int g_AmmoPosX; // weak
int g_AmmoPosY; // weak
_BYTE g_TempPosX[4]; // idb
_BYTE g_TempPosY[4]; // idb
_BYTE g_OverlaySelector[4]; // idb
int g_DialogPosX; // weak
int g_DialogPosY; // weak
int g_DialogWidth; // weak
int g_DialogHeight; // weak

//----- (0048692B) --------------------------------------------------------
void loadGUISettings()
{
	maybe_LoadSettingsValue(aHealthPosX, &g_HealthPosX, settings::tDWrord, 20);
	maybe_LoadSettingsValue(aHealthPosY, &g_HealthPosY, settings::tDWrord, 30);
	maybe_LoadSettingsValue(aAmmoPosX, &g_AmmoPosX, settings::tDWrord, 10);
	maybe_LoadSettingsValue(aAmmoPosY, &g_AmmoPosY, settings::tDWrord, 440);
	maybe_LoadSettingsValue(aTempPosX, g_TempPosX, settings::tDWrord, 10);
	maybe_LoadSettingsValue(aTempPosY, g_TempPosY, settings::tDWrord, 10);
	maybe_LoadSettingsValue(aOverlaySelecto, g_OverlaySelector, settings::tDWrord, 10);
	maybe_LoadSettingsValue(aDialogX, &g_DialogPosX, settings::tDWrord, 160);
	maybe_LoadSettingsValue(aDialogY, &g_DialogPosY, settings::tDWrord, 400);
	maybe_LoadSettingsValue(aDialogWidth, &g_DialogWidth, settings::tDWrord, 320);
	maybe_LoadSettingsValue(aDialogHeight, &g_DialogHeight, settings::tDWrord, 64);
	emptyFunction33();
}
// 5CED60: using guessed type int g_HealthPosX;
// 5CED64: using guessed type int g_HealthPosY;
// 5CED68: using guessed type int g_AmmoPosX;
// 5CED6C: using guessed type int g_AmmoPosY;
// 5CED7C: using guessed type int g_DialogPosX;
// 5CED80: using guessed type int g_DialogPosY;
// 5CED84: using guessed type int g_DialogWidth;
// 5CED88: using guessed type int g_DialogHeight;