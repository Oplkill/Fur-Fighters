#include "pakdata.h"

//----- (0056B1AB) --------------------------------------------------------
int __cdecl loadPAKData(char* FileName)
{
    __int16* v1; // eax
    int v2; // eax
    int v4; // [esp+8h] [ebp-20h]
    int v5; // [esp+Ch] [ebp-1Ch]
    int v6; // [esp+Ch] [ebp-1Ch]
    int v7; // [esp+10h] [ebp-18h]
    int m; // [esp+14h] [ebp-14h]
    int i; // [esp+18h] [ebp-10h]
    int j; // [esp+18h] [ebp-10h]
    int k; // [esp+18h] [ebp-10h]
    int l; // [esp+18h] [ebp-10h]
    int v13; // [esp+1Ch] [ebp-Ch]
    _WORD* v14; // [esp+20h] [ebp-8h]
    int* v15; // [esp+20h] [ebp-8h]
    char* v16; // [esp+20h] [ebp-8h]
    char* v17; // [esp+20h] [ebp-8h]
    char* v18; // [esp+20h] [ebp-8h]
    int* v19; // [esp+20h] [ebp-8h]
    int* v20; // [esp+20h] [ebp-8h]
    int v21; // [esp+24h] [ebp-4h] BYREF

    v1 = (__int16*)someLoadFile(FileName, (int)&v21);
    word_622C88 = *v1;
    v14 = v1 + 2;
    for (i = 0; i < word_622C88; ++i)
    {
        dword_622C58[i] = sub_56989C(256, 256, 2, 2, 1);
        sub_569ADA(dword_622C58[i], (int)v14);
        v14 += 0x10000;
    }
    v7 = word_622C88;
    word_622C88 += *v14;
    v15 = (int*)(v14 + 2);
    for (j = v7; j < word_622C88; ++j)
    {
        dword_622C58[j] = sub_56989C(256, 256, 5, 2, 1);
        sub_569ADA(dword_622C58[j], (int)v15);
        v15 += 0x8000;
    }
    dword_622C90 = *v15;
    v16 = (char*)(v15 + 1);
    dword_622C8C = maybe_allocateMemory(12 * (dword_622C90 + 1));
    qmemcpy((void*)dword_622C8C, v16, 12 * dword_622C90);
    v17 = &v16[12 * dword_622C90];
    for (k = 0; k < dword_622C90; ++k)
    {
        if ((*(_WORD*)(dword_622C8C + 12 * k + 6) & 0x1000) != 0)
            v2 = dword_622C58[v7 + (unsigned __int8)*(_WORD*)(dword_622C8C + 12 * k + 6)];
        else
            v2 = dword_622C58[*(__int16*)(dword_622C8C + 12 * k + 6)];
        *(_DWORD*)(dword_622C8C + 12 * k + 8) = v2;
    }
    v5 = *(_DWORD*)v17;
    v18 = v17 + 4;
    dword_622C94 = maybe_allocateMemory(2048);
    memset((void*)dword_622C94, 0, 0x800u);
    qmemcpy((void*)dword_622C94, v18, 4 * ((unsigned int)(4 * v5) >> 2));
    v19 = (int*)&v18[4 * v5];
    dword_622C18 = *v19++;
    dword_622C10 = maybe_allocateMemory(780 * dword_622C18);
    qmemcpy((void*)dword_622C10, v19, 780 * dword_622C18);
    v20 = &v19[195 * dword_622C18];
    v13 = dword_622C10;
    for (l = 0; l < dword_622C18; ++l)
    {
        for (m = 0; m < 128; ++m)
        {
            if (*(unsigned __int8*)(m + v13 + 640) == 255)
                LOBYTE(v4) = 0;
            else
                v4 = *(_DWORD*)(dword_622C58[v7 + *(unsigned __int8*)(m + v13 + 640)] + 4);
            *(_BYTE*)(m + v13 + 640) = v4;
        }
        *(_WORD*)(v13 + 776) = *(_WORD*)(dword_622C58[v7 + *(__int16*)(v13 + 776)] + 4);
        v13 += 780;
    }
    v6 = *v20;
    dword_622C98 = maybe_allocateMemory(4 * *v20);
    qmemcpy((void*)dword_622C98, v20 + 1, 4 * ((unsigned int)(4 * v6) >> 2));
    sub_5577D0();
    return sub_53F213();
}
// 622C10: using guessed type int dword_622C10;
// 622C18: using guessed type int dword_622C18;
// 622C88: using guessed type __int16 word_622C88;
// 622C8C: using guessed type int dword_622C8C;
// 622C90: using guessed type int dword_622C90;
// 622C94: using guessed type int dword_622C94;
// 622C98: using guessed type int dword_622C98;