#pragma once

#include "defs.h"
#include <Windows.h>

extern HWND hWnd; // idb
extern RECT Point; // idb
extern MSG Msg; // idb
extern int g_hInstanceInt; // weak
extern int g_UseGameSpy; // weak
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

const IID iid = { 367419072u, 15260u, 4562u, { 185u, 47u, 0u, 96u, 151u, 151u, 234u, 91u } }; // idb