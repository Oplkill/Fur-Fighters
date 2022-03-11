
#include "defs.h"

using namespace std;

#include "globalVariables.h"
#include "models.h"

//----- (0054F26E) --------------------------------------------------------
int __cdecl loadModelPML(const char* fileName)
{
    int i; // [esp+8h] [ebp-48h]
    int v3; // [esp+8h] [ebp-48h]
    char fileNameLower[64]; // [esp+Ch] [ebp-44h] BYREF
    int v5; // [esp+4Ch] [ebp-4h]

    v5 = dword_6687A4;
    strcpy(fileNameLower, fileName);
    ToLowString(fileNameLower);
    for (i = 0; i < numLoadedPMLModels; ++i)
    {
        if (!strncmp(fileNameLower, (const char*)(112 * i + dword_658700), 32u))
            return i;                                 // model already loaded, returning ID
    }
    if (numLoadedPMLModels == meshListMaxNumber)
        fatalError("Mesh List Overflow\n");
    v3 = numLoadedPMLModels;
    sub_54EE64(dword_658700 + 112 * numLoadedPMLModels + 36, fileNameLower);
    strncpy((char*)(112 * v3 + dword_658700), fileNameLower, 32u);
    *(_DWORD*)(dword_658700 + 112 * v3 + 108) = 0;
    *(_DWORD*)(dword_658700 + 112 * v3 + 104) = 0;
    ++numLoadedPMLModels;
    dword_6586F4 += dword_6687A4 - v5;
    return v3;
}
// 6586F4: using guessed type int dword_6586F4;
// 658700: using guessed type int dword_658700;
// 658704: using guessed type int numLoadedPMLModels;
// 658708: using guessed type int meshListMaxNumber;
// 6687A4: using guessed type int dword_6687A4;