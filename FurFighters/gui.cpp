#include "gui.h"

//----- (0048692B) --------------------------------------------------------
void loadGUISettings()
{
	maybe_LoadSettingsValue(aHealthPosX, &dword_5CED60, settings::tDWrord, 20);
	maybe_LoadSettingsValue(aHealthPosY, &dword_5CED64, settings::tDWrord, 30);
	maybe_LoadSettingsValue(aAmmoPosX, &dword_5CED68, settings::tDWrord, 10);
	maybe_LoadSettingsValue(aAmmoPosY, &dword_5CED6C, settings::tDWrord, 440);
	maybe_LoadSettingsValue(aTempPosX, byte_5CED70, settings::tDWrord, 10);
	maybe_LoadSettingsValue(aTempPosY, byte_5CED74, settings::tDWrord, 10);
	maybe_LoadSettingsValue(aOverlaySelecto, byte_5CED78, settings::tDWrord, 10);
	maybe_LoadSettingsValue(aDialogX, &dword_5CED7C, settings::tDWrord, 160);
	maybe_LoadSettingsValue(aDialogY, &dword_5CED80, settings::tDWrord, 400);
	maybe_LoadSettingsValue(aDialogWidth, &dword_5CED84, settings::tDWrord, 320);
	maybe_LoadSettingsValue(aDialogHeight, &dword_5CED88, settings::tDWrord, 64);
	emptyFunction33();
}
// 5CED60: using guessed type int dword_5CED60;
// 5CED64: using guessed type int dword_5CED64;
// 5CED68: using guessed type int dword_5CED68;
// 5CED6C: using guessed type int dword_5CED6C;
// 5CED7C: using guessed type int dword_5CED7C;
// 5CED80: using guessed type int dword_5CED80;
// 5CED84: using guessed type int dword_5CED84;
// 5CED88: using guessed type int dword_5CED88;