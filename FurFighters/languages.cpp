#include "languages.h"

#include <cstdarg>
#include <cstdlib>
#include <stdio.h>
#include "debug.h"
#include "files.h"

char* off_5A30F0 = "english.lng"; // idb
char aLoadingLanguag[] = "Loading Language data ..."; // idb
CHAR aCannotSymalloc[] = "Cannot syMalloc for language dependent strings."; // idb
char aItemsEngTxt[14] = "items_eng.txt"; // weak
char aItemsFrTxt[13] = "items_fr.txt"; // weak
char aItemsGerTxt[14] = "items_ger.txt"; // weak
char aItemsItlTxt[14] = "items_itl.txt"; // weak
char aItemsSpnTxt[14] = "items_spn.txt"; // weak
char aItemsJpnTxt[14] = "items_jpn.txt"; // weak
char aItemsBearTxt[15] = "items_bear.txt"; // weak

int g_LanguageStringsData; // weak
int languageId; // weak
int g_SomeLanguageVariable; // weak

//----- (00466DE0) --------------------------------------------------------
int loadLanguageDatas()
{
    int result; // eax
    size_t Size; // [esp+Ch] [ebp-28h] BYREF
    const void* v2; // [esp+10h] [ebp-24h]
    char Buffer[32]; // [esp+14h] [ebp-20h] BYREF

    sprintf(Buffer, (&off_5A30F0)[languageId]);
    writeDebug(aLoadingLanguag);
    v2 = (const void*)someLoadFile(Buffer, (int)&Size);
    g_LanguageStringsData = (int)malloc(Size);
    if (!g_LanguageStringsData)
        fatalError(aCannotSymalloc);
    qmemcpy((void*)g_LanguageStringsData, v2, Size);
    result = sub_53F213();
    switch (languageId)
    {
    case language::English:
        result = loadItemsInfo(aItemsEngTxt);
        break;
    case language::French:
        result = loadItemsInfo(aItemsFrTxt);
        break;
    case language::German:
        result = loadItemsInfo(aItemsGerTxt);
        break;
    case language::Spanish:
        result = loadItemsInfo(aItemsItlTxt);
        break;
    case language::Italy:
        result = loadItemsInfo(aItemsSpnTxt);
        break;
    case language::Japan:
        result = loadItemsInfo(aItemsJpnTxt);
        break;
    case language::Unknown:
        result = loadItemsInfo(aItemsBearTxt);
        break;
    default:
        return result;
    }
    return result;
}
// 497C42: using guessed type int __cdecl loadItemsInfo(_DWORD);
// 6045D0: using guessed type int g_LanguageStringsData;
// 6045D4: using guessed type int languageId;

//----- (00466F09) --------------------------------------------------------
int __cdecl loadLanguageString(int a1)
{
    return *(_DWORD*)(g_LanguageStringsData + 4 * a1 + 8) + 4 * *(_DWORD*)(g_LanguageStringsData + 4) + 8 + g_LanguageStringsData;
}
// 6045D0: using guessed type int g_LanguageStringsData;