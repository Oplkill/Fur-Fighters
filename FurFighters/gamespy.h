#pragma once

#include "defs.h"
#include <Windows.h>

extern int g_UseGameSpy; // weak
extern int g_GameSpyConnectionType; // weak
extern int g_IsGameSpyInited; // weak

void GameSpyInitiliazation0();

namespace GameSpy
{
	enum connectionType
	{
		Unknown,
		Host,
		Connector,
	};
}