#pragma once

extern _BYTE g_IsDebug;

void __cdecl initDebug(int a1);
int writeDebug(const char* Format, ...);
void __cdecl writeDebugOutputVariants(LPCSTR lpOutputString);
[[ noreturn ]] void fatalError(LPCSTR lpText); // idb

//todo find that function
void debugFunc1();