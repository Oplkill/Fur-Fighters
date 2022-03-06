#pragma once

#include "defs.h"

extern int g_HealthPosX; // weak
extern int g_HealthPosY; // weak
extern int g_AmmoPosX; // weak
extern int g_AmmoPosY; // weak
extern _BYTE g_TempPosX[4]; // idb
extern _BYTE g_TempPosY[4]; // idb
extern _BYTE g_OverlaySelector[4]; // idb
extern int g_DialogPosX; // weak
extern int g_DialogPosY; // weak
extern int g_DialogWidth; // weak
extern int g_DialogHeight; // weak

void loadGUISettings();