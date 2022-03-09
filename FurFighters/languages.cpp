#include "languages.h"

#include <cstdarg>
#include <cstdlib>
#include <stdio.h>
#include <Windows.h>
#include "debug.h"
#include "files.h"

const char* g_LanguageFiles[] = { "english.lng", "French.lng", "German.lng", "Spanish.lng", "english.lng", "english.lng", "American.lng"};
char aEnglish[8] = "English"; // weak
char aEnglishUnitedS[24] = "English (United States)"; // weak
char aFrench[7] = "French"; // weak
char aGerman[7] = "German"; // weak
char aSpanish[8] = "Spanish"; // weak
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

    sprintf(Buffer, g_LanguageFiles[languageId]);
    writeDebug("Loading Language data ...");
    v2 = (const void*)someLoadFile(Buffer, (int)&Size);
    g_LanguageStringsData = (int)malloc(Size);
    if (!g_LanguageStringsData)
        fatalError("Cannot syMalloc for language dependent strings.");
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
    case language::Unknown1:
        result = loadItemsInfo(aItemsItlTxt);
        break;
    case language::Spanish:
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

//----- (0051B2C4) --------------------------------------------------------
int initLanguage()
{
    char Format[32]; // [esp+8h] [ebp-60h] BYREF
    CHAR LCData[64]; // [esp+28h] [ebp-40h] BYREF

    GetLocaleInfoA(0x400u, 0x1001u, LCData, 32);
    sscanf(LCData, "%s", Format);
    if (!strcmp(Format, aEnglish))
    {
        GetLocaleInfoA(0x400u, 2u, LCData, 32);
        if (!strcmp(LCData, aEnglishUnitedS))
            languageId = language::Unknown1;
        else
            languageId = language::English;
    }
    else if (!strcmp(Format, aFrench))
    {
        languageId = language::French;
    }
    else if (!strcmp(Format, aGerman))
    {
        languageId = language::German;
    }
    else if (!strcmp(Format, aSpanish))
    {
        languageId = language::Spanish;
    }
    else
    {
        languageId = language::English;
    }
    writeDebug("Language:- %s, %d", LCData, languageId);
    return writeDebug(Format);
}
// 6045D4: using guessed type int languageId;