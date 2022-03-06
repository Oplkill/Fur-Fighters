#include "debug.h"

#include <cstdlib>
#include <windows.h>

CHAR aFatalError[] = "Fatal Error"; // idb

//----- (00564760) --------------------------------------------------------
void __cdecl initDebug(int a1)
{
    int i; // [esp+0h] [ebp-4h]

    debugOutputVariant = a1;
    debugOutputBufferCurrentOffset = 0;
    for (i = 0; i < 40; ++i)
        debugOutputBuffer[128 * i] = 0;
}
// 5B137C: using guessed type int debugOutputVariant;
// 5BEB84: using guessed type int debugOutputBufferCurrentOffset;

//----- (005647E8) --------------------------------------------------------
int writeDebug(char* Format, ...)
{
    int result; // eax
    va_list va; // [esp+10h] [ebp+Ch] BYREF

    va_start(va, Format);
    if (dword_667390)                           // todo
    {
        vsprintf(OutputString, Format, va);
        result = writeDebugOutputVariants(OutputString);
    }
    return result;
}
// 667390: using guessed type int dword_667390;

//----- (00564828) --------------------------------------------------------
void __cdecl writeDebugOutputVariants(LPCSTR lpOutputString)
{
    int v1; // [esp+8h] [ebp-Ch]

    if (debugOutputVariant == 2)
    {
        strcpy(&debugOutputBuffer[128 * debugOutputBufferCurrentOffset], lpOutputString);
        if (debugOutputBufferCurrentOffset == 39)
            v1 = 0;
        else
            v1 = debugOutputBufferCurrentOffset + 1;
        debugOutputBufferCurrentOffset = v1;
    }
    else if (debugOutputVariant == 3)
    {
        strcat((char*)lpOutputString, "\n\r");
        OutputDebugStringA(lpOutputString);
    }
}
// 5B137C: using guessed type int debugOutputVariant;
// 5BEB84: using guessed type int debugOutputBufferCurrentOffset;

//----- (005647B3) --------------------------------------------------------
[[ noreturn ]] void fatalError(LPCSTR lpText)
{
    writeDebug("Fatal Error: %s", lpText);
    MessageBoxA(0, lpText, aFatalError, 0x10u);
    sub_568F8A();
    exit(0);
}
// 568F8A: using guessed type int sub_568F8A(void);