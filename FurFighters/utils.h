#pragma once

#include "defs.h"

BOOL __cdecl isStringsEquals(const char* Str1, const char* Str2);
char* getFormattedString(const char* Format, ...);
DWORD getGameTickCount();
int __cdecl MakeIntPositiveButNotBigger(int value, int maxValue);
int __cdecl sub_4393D6(int a1, int a2);
double __cdecl sub_439511(float a1, float a2);
int __cdecl sub_583E90(double a1, double a2);