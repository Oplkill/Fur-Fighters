#pragma once

void __cdecl initDebug(int a1);
int writeDebug(char* Format, ...);
void __cdecl writeDebugOutputVariants(LPCSTR lpOutputString);
[[ noreturn ]] void fatalError(LPCSTR lpText); // idb

//todo find that function
void debugFunc1();