#pragma once

#include "defs.h"
#include <Windows.h>

extern HWND hWnd; // idb
extern RECT Point; // idb
extern MSG Msg; // idb
extern int g_hInstanceInt; // weak
extern __int16 g_maybeDemoVersionType; // weak
extern char g_maybeSomeDemoVersionType; // weak
extern char g_maybeAnotherDemoVersionType; // weak
extern __int16 g_maybeDemoVersionMinutesCounter; // weak
extern HINSTANCE g_hInstance; // idb
extern char g_IsGameCDInserted; // weak
extern HANDLE pHandles; // idb
extern __int16 g_RedBitsShift; // weak
extern __int16 g_GreenBitsShift; // weak
extern __int16 g_BlueBitsShift; // weak
extern LPVOID lpDD; // idb
extern int g_CharacterType; // weak
extern int g_IsFirstPerson; // weak
extern SIZE_T dwBytes; // idb

extern __int16 g_UselessVariable; // weak

const IID iid = { 367419072u, 15260u, 4562u, { 185u, 47u, 0u, 96u, 151u, 151u, 234u, 91u } }; // idb

//-----dirty variables
extern int dword_5BAE84; // weak
extern LPVOID ppv; // idb

const IID rclsid = { 803797008u, 45733u, 4560u, { 167u, 135u, 0u, 0u, 248u, 3u, 171u, 252u } }; // idb
const IID riid = { 766977169u, 25900u, 4561u, { 167u, 168u, 0u, 0u, 248u, 3u, 171u, 252u } }; // idb

char* g_BearFileItemsList[24] =
{
  "bearitems\\buildhat.r2",
  "bearitems\\buildhat.r2",
  "bearitems\\buildhat.r2",
  "bearitems\\mafia_hat.r2",
  "bearitems\\mafia_hat.r2",
  "bearitems\\mafia_hat.r2",
  "bearitems\\buildhat.r2",
  "bearitems\\buildhat.r2",
  "bearitems\\buildhat.r2",
  "bearitems\\sphelmet.r2",
  "bearitems\\sphelmet.r2",
  "none",
  "none",
  "none",
  "none",
  "none",
  "bearitems\\pithhelm.r2",
  "none",
  "bearitems\\sailor.r2",
  "bearitems\\pilot_helm.r2",
  "bearitems\\sailor.r2",
  "bearitems\\buildhat.r2",
  "bearitems\\buildhat.r2",
  "bearitems\\buildhat.r2"
}; // weak

char* g_BearFileItemsList2[23] =
{
  "bearitems\\buildhat.r2",
  "bearitems\\buildhat.r2",
  "bearitems\\mafia_hat.r2",
  "bearitems\\mafia_hat.r2",
  "bearitems\\mafia_hat.r2",
  "bearitems\\buildhat.r2",
  "bearitems\\buildhat.r2",
  "bearitems\\buildhat.r2",
  "bearitems\\sphelmet.r2",
  "bearitems\\sphelmet.r2",
  "none",
  "none",
  "none",
  "none",
  "none",
  "bearitems\\pithhelm.r2",
  "none",
  "bearitems\\sailor.r2",
  "bearitems\\pilot_helm.r2",
  "bearitems\\sailor.r2",
  "bearitems\\buildhat.r2",
  "bearitems\\buildhat.r2",
  "bearitems\\buildhat.r2"
}; // weak

char* g_BearFileItemsList3[22] =
{
  "bearitems\\buildhat.r2",
  "bearitems\\mafia_hat.r2",
  "bearitems\\mafia_hat.r2",
  "bearitems\\mafia_hat.r2",
  "bearitems\\buildhat.r2",
  "bearitems\\buildhat.r2",
  "bearitems\\buildhat.r2",
  "bearitems\\sphelmet.r2",
  "bearitems\\sphelmet.r2",
  "none",
  "none",
  "none",
  "none",
  "none",
  "bearitems\\pithhelm.r2",
  "none",
  "bearitems\\sailor.r2",
  "bearitems\\pilot_helm.r2",
  "bearitems\\sailor.r2",
  "bearitems\\buildhat.r2",
  "bearitems\\buildhat.r2",
  "bearitems\\buildhat.r2"
}; // weak

char* g_ReplayFilesList[6] =
{
  "replays\\NewYk_L1rp.dat",
  "replays\\Space_L2rp.dat",
  "replays\\Angkr_L1rp.dat",
  "replays\\Dam_L1rp.dat",
  "replays\\Dam_L2rp.dat",
  "replays\\Dam_L3rp.dat"
}; // weak

namespace characters
{
	enum characterType
	{
		Roofus,
		Juliette,
		Bungalow,
		Tweek,
		Rico,
		Chang
	};
}