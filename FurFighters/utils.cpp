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

//----- (004393A3) --------------------------------------------------------
int __cdecl MakeIntPositiveButNotBigger(int value, int maxValue)
{
    if (value >= 0)
    {
        if (!value)
            value = 1;
    }
    else
    {
        value = -value;
    }
    if (value > maxValue)
        value = maxValue;
    return value;
}

//----- (004393D6) --------------------------------------------------------
int __cdecl sub_4393D6(int a1, int a2)
{
    if (a1 > 0)
        a1 = -a1;
    if (a1 < -a2)
        a1 = -a2;
    return a1;
}

//----- (00439511) --------------------------------------------------------
double __cdecl sub_439511(float a1, float a2)
{
    if (a1 > 0.0)
        a1 = -a1;
    if (-a2 > a1)
        a1 = -a2;
    return a1;
}

//----- (00583E90) --------------------------------------------------------
int __cdecl sub_583E90(double a1, double a2)
{
    return _ctrandisp2(a1, a2);
}