#include "utils.h"

#include <Windows.h>
#include <cstdio>

char getFormattedStringBuffer[256]; // idb

//----- (0051ADC9) --------------------------------------------------------
BOOL __cdecl isStringsEquals(const char* Str1, const char* Str2)
{
	return strncmp(Str1, Str2, strlen(Str2)) == 0;
}

//----- (005648D7) --------------------------------------------------------
char* getFormattedString(const char* Format, ...)
{
    va_list va; // [esp+10h] [ebp+Ch] BYREF

    va_start(va, Format);
    vsprintf(getFormattedStringBuffer, Format, va);
    return getFormattedStringBuffer;
}

//----- (0051E1E0) --------------------------------------------------------
DWORD getGameTickCount()
{
    return GetTickCount();
}