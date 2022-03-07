#include "files.h"

#include "debug.h"
#include "maybe.h"

CHAR aTargaFileNotFo[] = "TARGA file not found"; // idb
CHAR aTargaFileNotFo_0[] = "TARGA file not found"; // idb

int dword_6673DC; // weak
void* dword_66738C; // idb
char* dword_5BE59C; // idb
size_t dword_5BE598; // idb
int dword_66BC44[1783]; // idb
int dword_66BC40[]; // weak
int dword_5BFF9C; // weak
__int16 word_5BFF9A; // weak
__int16 word_5BFF98; // weak
int dword_60FEC8; // weak

//----- (0053F0B8) --------------------------------------------------------
int __cdecl someLoadFile(char* FileName, int a2)
{
    char Buffer[256]; // [esp+0h] [ebp-104h] BYREF
    FILE* Stream; // [esp+100h] [ebp-4h]

    if (someLoopVarIndicator == 2)
        sub_53F42B(FileName);
    if (someLoopVarIndicator == 1)
        return sub_53F4F6(FileName, a2);
    if (fileLoadingDebug)
        writeDebug("TRYING TO LOAD %s IN SECTION LOOP - FIX IT BEFORE IT KILLS US ALL!!!!", FileName);
    Stream = fopen(FileName, aRb_3);
    if (!Stream)
    {
        sprintf(Buffer, "Can't find %s", FileName);
        fatalError(Buffer);
    }
    fseek(Stream, 0, 2);
    *(_DWORD*)a2 = ftell(Stream);
    *(&dword_6687E0 + dword_5BE5A4) = (void*)sub_5625B6(*(_DWORD*)a2);
    fseek(Stream, 0, 0);
    readFromFile(*(&dword_6687E0 + dword_5BE5A4), 1u, *(_DWORD*)a2, Stream);
    fclose(Stream);
    return (int)*(&dword_6687E0 + dword_5BE5A4++);
}
// 53F4F6: using guessed type _DWORD __cdecl sub_53F4F6(_DWORD, _DWORD);
// 5BE5A0: using guessed type int dword_5BE5A0;
// 5BE5A4: using guessed type int dword_5BE5A4;
// 667E8C: using guessed type __int16 word_667E8C;

//----- (0053F244) --------------------------------------------------------
int __cdecl readBitmapTga(char* FileName)
{
    FILE* Stream; // [esp+0h] [ebp-8h]
    int readedElements; // [esp+4h] [ebp-4h]

    Stream = fopen(FileName, aRb_4);
    if (!Stream)
        return 0;
    fseek(Stream, 0, 2);
    readedElements = ftell(Stream);
    fclose(Stream);
    return readedElements;
}

//----- (0053F29A) --------------------------------------------------------
size_t __cdecl loadCHBfile(char* FileName)
{
    size_t result; // eax
    FILE* Stream; // [esp+8h] [ebp-4h]

    Stream = fopen(FileName, aRb_5);
    if (Stream)
    {
        fclose(Stream);
        dword_6673DC = someLoadFile(FileName, (int)&unk_5BE590);
        someLoopVarIndicator = 1;
        ElementSize = *(_DWORD*)dword_6673DC;
        dword_6673DC += 4;
        qmemcpy(&unk_66BC00, (const void*)dword_6673DC, 72 * ElementSize);
        result = 72 * ElementSize;
        dword_6673DC += 72 * ElementSize;
    }
    else
    {
        someLoopVarIndicator = 2;
        result = (size_t)malloc(0x400000u);
        dword_66738C = (void*)result;
        dword_5BE59C = FileName;
        ElementSize = 0;
        dword_5BE598 = 0;
    }
    return result;
}
// 5BE5A0: using guessed type int dword_5BE5A0;
// 6673DC: using guessed type int dword_6673DC;

//----- (0053F1EB) --------------------------------------------------------
int __cdecl sub_53F1EB(char* FileName, int a2, int a3, int a4)
{
    int v5; // [esp+0h] [ebp-4h]

    v5 = someLoadFile(FileName, a2);
    ((void(__cdecl*)(int))a3)(a4);
    return v5;
}

//----- (0053F42B) --------------------------------------------------------
size_t __cdecl sub_53F42B(char* FileName)
{
    size_t result; // eax
    const void* v2; // [esp+8h] [ebp-8h]
    int v3; // [esp+Ch] [ebp-4h] BYREF

    someLoopVarIndicator = 0;
    v2 = (const void*)someLoadFile(FileName, (int)&v3);
    someLoopVarIndicator = 2;
    qmemcpy((char*)dword_66738C + dword_5BE598, v2, v3);
    strcpy((char*)&unk_66BC00 + 72 * ElementSize, FileName);
    dword_66BC44[18 * ElementSize] = v3;
    dword_66BC40[18 * ElementSize++] = dword_5BE598;
    sub_53F213();
    result = v3 + dword_5BE598;
    dword_5BE598 += v3;
    return result;
}
// 5BE5A0: using guessed type int dword_5BE5A0;
// 66BC40: using guessed type int dword_66BC40[];

//----- (0056EAC4) --------------------------------------------------------
int __cdecl loadBitmapFile(const char* fileName)
{
    char Buffer[256]; // [esp+8h] [ebp-180h] BYREF
    int v3[31]; // [esp+108h] [ebp-80h] BYREF
    int v4; // [esp+184h] [ebp-4h]

    sprintf(Buffer, "bitmaps\\%s", fileName);
    memset(v3, 0, sizeof(v3));
    v3[0] = 124;
    v3[1] = 4103;
    qmemcpy(&v3[18], &unk_60FEBC, 0x20u);
    v3[3] = 640;
    v3[2] = 480;
    v3[26] = 2048;
    if (!dword_5BFFA8)
        (*(void(__thiscall**)(LPVOID, LPVOID, int*, int*, _DWORD))(*(_DWORD*)lpDD + 24))(
            lpDD,
            lpDD,
            v3,
            &dword_5BFFA8,
            0);
    memset(v3, 0, sizeof(v3));
    v3[0] = 124;
    (*(void(__thiscall**)(int, int, _DWORD, int*, int, _DWORD))(*(_DWORD*)dword_5BFFA8 + 100))(
        dword_5BFFA8,
        dword_5BFFA8,
        0,
        v3,
        33,
        0);
    v4 = v3[9];
    writeDebug("r-%d g-%d b-%d", g_RedBits, g_GreenBits, g_BlueBits);
    if (v3[21] == 32)
    {
        if (sub_56EF1B(Buffer, v4))
            fatalError(aTargaFileNotFo);
    }
    else if (sub_56EDB7(Buffer, v4))
    {
        fatalError(aTargaFileNotFo_0);
    }
    (*(void(__stdcall**)(int, _DWORD))(*(_DWORD*)dword_5BFFA8 + 128))(dword_5BFFA8, 0);
    return 1;
}
// 5BFFA8: using guessed type int dword_5BFFA8;
// 622CE6: using guessed type __int16 g_RedBits;
// 622CE8: using guessed type __int16 g_GreenBits;
// 622CEA: using guessed type __int16 g_BlueBits;

//----- (0056ED8D) --------------------------------------------------------
int __cdecl showTGAImageTimed(const char* fileName, int seconds)
{
    loadBitmapFile(fileName);
    maybe_wait(1000000 * seconds);
    return sub_56ED64();
}
// 56ECAB: using guessed type int __cdecl maybe_wait(_DWORD);
// 56ED64: using guessed type int sub_56ED64(void);

//----- (0056EDB7) --------------------------------------------------------
__int16 __cdecl sub_56EDB7(char* FileName, int a2)
{
    int i; // [esp+4h] [ebp-14h]
    int j; // [esp+8h] [ebp-10h]
    __int16 v5; // [esp+Ch] [ebp-Ch]
    FILE* Stream; // [esp+10h] [ebp-8h]
    __int16 v7; // [esp+14h] [ebp-4h]

    Stream = fopen(FileName, aRb_7);
    if (!Stream)
        return -1;
    v7 = someReadFile(Stream);
    if (v7 >= 0)
    {
        v7 = 0;
        if (dword_5BFF9C)
            sub_56F226(a2, Stream);
        else
            sub_56F079(a2, Stream);
        for (i = 0; i < word_5BFF9A / 2; ++i)
        {
            for (j = 0; j < word_5BFF98; ++j)
            {
                v5 = *(_WORD*)(a2 + 2 * (j + word_5BFF98 * i));
                *(_WORD*)(a2 + 2 * (j + word_5BFF98 * i)) = *(_WORD*)(a2 + 2 * (j + word_5BFF98 * (word_5BFF9A - 1 - i)));
                *(_WORD*)(a2 + 2 * (j + word_5BFF98 * (word_5BFF9A - 1 - i))) = v5;
            }
        }
    }
    fclose(Stream);
    return v7;
}
// 5BFF98: using guessed type __int16 word_5BFF98;
// 5BFF9A: using guessed type __int16 word_5BFF9A;
// 5BFF9C: using guessed type int dword_5BFF9C;

//----- (0056EF1B) --------------------------------------------------------
__int16 __cdecl sub_56EF1B(char* FileName, int a2)
{
    int i; // [esp+4h] [ebp-14h]
    int j; // [esp+8h] [ebp-10h]
    int v5; // [esp+Ch] [ebp-Ch]
    FILE* Stream; // [esp+10h] [ebp-8h]
    __int16 v7; // [esp+14h] [ebp-4h]

    Stream = fopen(FileName, aRb_8);
    if (!Stream)
        return -1;
    v7 = someReadFile(Stream);
    if (v7 >= 0)
    {
        v7 = 0;
        if (dword_5BFF9C)
            sub_56F226(a2, Stream);
        else
            sub_56F079(a2, Stream);
        for (i = 0; i < word_5BFF9A / 2; ++i)
        {
            for (j = 0; j < word_5BFF98; ++j)
            {
                v5 = *(_DWORD*)(a2 + 4 * (j + word_5BFF98 * i));
                *(_DWORD*)(a2 + 4 * (j + word_5BFF98 * i)) = *(_DWORD*)(a2 + 4 * (j + word_5BFF98 * (word_5BFF9A - 1 - i)));
                *(_DWORD*)(a2 + 4 * (j + word_5BFF98 * (word_5BFF9A - 1 - i))) = v5;
            }
        }
    }
    fclose(Stream);
    return v7;
}
// 5BFF98: using guessed type __int16 word_5BFF98;
// 5BFF9A: using guessed type __int16 word_5BFF9A;
// 5BFF9C: using guessed type int dword_5BFF9C;

//----- (0056F079) --------------------------------------------------------
int __cdecl sub_56F079(int a1, FILE* Stream)
{
    int result; // eax
    _DWORD* v3; // [esp+0h] [ebp-18h]
    int Buffer; // [esp+4h] [ebp-14h] BYREF
    int v5; // [esp+8h] [ebp-10h] BYREF
    int i; // [esp+Ch] [ebp-Ch]
    int j; // [esp+10h] [ebp-8h]
    int v8; // [esp+14h] [ebp-4h] BYREF

    result = a1;
    v3 = (_DWORD*)a1;
    for (i = 0; i < word_5BFF9A; ++i)
    {
        for (j = 0; j < word_5BFF98; ++j)
        {
            readFromFile(&Buffer, 1u, 1u, Stream);
            readFromFile(&v5, 1u, 1u, Stream);
            readFromFile(&v8, 1u, 1u, Stream);
            if (dword_60FEC8 == 16)
            {
                *(_WORD*)a1 = (((int)(unsigned __int8)v8 >> 3) & 0x1F) << g_RedBitsShift;
                if (g_GreenBits == 5)
                    *(_WORD*)a1 |= (((int)(unsigned __int8)v5 >> 3) & 0x1F) << g_GreenBitsShift;
                else
                    *(_WORD*)a1 |= (((int)(unsigned __int8)v5 >> 2) & 0x3F) << g_GreenBitsShift;
                *(_WORD*)a1 |= (((int)(unsigned __int8)Buffer >> 3) & 0x1F) << g_BlueBitsShift;
                a1 += 2;
            }
            else
            {
                *v3 = (unsigned __int8)v8 << g_RedBitsShift;
                *v3 |= (unsigned __int8)v5 << g_GreenBitsShift;
                *v3++ |= (unsigned __int8)Buffer << g_BlueBitsShift;
            }
            result = j + 1;
        }
    }
    return result;
}
// 5BFF98: using guessed type __int16 word_5BFF98;
// 5BFF9A: using guessed type __int16 word_5BFF9A;
// 60FEC8: using guessed type int dword_60FEC8;
// 622CE8: using guessed type __int16 g_GreenBits;
// 622CEC: using guessed type __int16 g_RedBitsShift;
// 622CEE: using guessed type __int16 g_GreenBitsShift;
// 622CF0: using guessed type __int16 g_BlueBitsShift;

//----- (0056F226) --------------------------------------------------------
int __cdecl sub_56F226(int a1, FILE* Stream)
{
    int result; // eax
    int v3; // [esp+0h] [ebp-1Ch]
    char v4[4]; // [esp+4h] [ebp-18h] BYREF
    char v5[4]; // [esp+8h] [ebp-14h] BYREF
    int i; // [esp+Ch] [ebp-10h]
    char v7[4]; // [esp+10h] [ebp-Ch] BYREF
    char Buffer[4]; // [esp+14h] [ebp-8h] BYREF
    __int16 v9; // [esp+18h] [ebp-4h]

    v9 = 0;
    v3 = word_5BFF9A * word_5BFF98;
    do
    {
        readFromFile(Buffer, 1u, 1u, Stream);
        if ((Buffer[0] & 0x80) == 128)
        {
            Buffer[0] &= 0x7Fu;
            readFromFile(v4, 1u, 1u, Stream);
            readFromFile(v5, 1u, 1u, Stream);
            result = readFromFile(v7, 1u, 1u, Stream);
            for (i = 0; i < Buffer[0] + 1; ++i)
            {
                *(_WORD*)a1 = v7[0] >> 3 << g_RedBitsShift;
                if (g_GreenBits == 5)
                    *(_WORD*)a1 |= v5[0] >> 3 << g_GreenBitsShift;
                else
                    *(_WORD*)a1 |= v5[0] >> 2 << g_GreenBitsShift;
                *(_WORD*)a1 |= v4[0] >> 3 << g_BlueBitsShift;
                a1 += 2;
                --v3;
                if (++v9 == word_5BFF98)
                    v9 = 0;
                result = i + 1;
            }
        }
        else
        {
            for (i = 0; ; ++i)
            {
                result = Buffer[0] + 1;
                if (i >= result)
                    break;
                readFromFile(v4, 1u, 1u, Stream);
                readFromFile(v5, 1u, 1u, Stream);
                readFromFile(v7, 1u, 1u, Stream);
                *(_WORD*)a1 = v7[0] >> 3 << g_RedBitsShift;
                if (g_GreenBits == 5)
                    *(_WORD*)a1 |= v5[0] >> 3 << g_GreenBitsShift;
                else
                    *(_WORD*)a1 |= v5[0] >> 2 << g_GreenBitsShift;
                *(_WORD*)a1 |= v4[0] >> 3 << g_BlueBitsShift;
                a1 += 2;
                --v3;
                if (++v9 == word_5BFF98)
                    v9 = 0;
            }
        }
    } while (v3 > 0);
    return result;
}
// 5BFF98: using guessed type __int16 word_5BFF98;
// 5BFF9A: using guessed type __int16 word_5BFF9A;
// 622CE8: using guessed type __int16 g_GreenBits;
// 622CEC: using guessed type __int16 g_RedBitsShift;
// 622CEE: using guessed type __int16 g_GreenBitsShift;
// 622CF0: using guessed type __int16 g_BlueBitsShift;

//----- (0056F4BA) --------------------------------------------------------
__int16 __cdecl someReadFile(FILE* Stream)
{
    __int16 result; // ax
    char v2[4]; // [esp+0h] [ebp-14h] BYREF
    char v3[4]; // [esp+4h] [ebp-10h] BYREF
    int Buffer; // [esp+8h] [ebp-Ch] BYREF
    int v5; // [esp+Ch] [ebp-8h] BYREF
    char v6[4]; // [esp+10h] [ebp-4h] BYREF

    readFromFile(&Buffer, 1u, 1u, Stream);
    readFromFile(&Buffer, 1u, 1u, Stream);
    readFromFile(&Buffer, 1u, 1u, Stream);
    dword_5BFF9C = (Buffer & 8) != 0;
    readFromFile(v6, 2u, 1u, Stream);
    readFromFile(v3, 2u, 1u, Stream);
    readFromFile(v2, 1u, 1u, Stream);
    readFromFile(v6, 2u, 1u, Stream);
    readFromFile(v6, 2u, 1u, Stream);
    readFromFile(&word_5BFF98, 2u, 1u, Stream);
    readFromFile(&word_5BFF9A, 2u, 1u, Stream);
    readFromFile(&v5, 1u, 1u, Stream);
    readFromFile(&Buffer, 1u, 1u, Stream);
    if ((unsigned __int8)v5 == 24)
        result = 0;
    else
        result = -2;
    return result;
}
// 5BFF98: using guessed type __int16 word_5BFF98;
// 5BFF9A: using guessed type __int16 word_5BFF9A;
// 5BFF9C: using guessed type int dword_5BFF9C;

//----- (0056F5F2) --------------------------------------------------------
FILE* __cdecl sub_56F5F2(char* FileName, int a2)
{
    FILE* result; // eax
    int j; // [esp+0h] [ebp-2Ch]
    int i; // [esp+4h] [ebp-28h]
    char v6; // [esp+Ch] [ebp-20h] BYREF
    char v7; // [esp+Dh] [ebp-1Fh]
    char v8; // [esp+Eh] [ebp-1Eh]
    int Buffer[4]; // [esp+10h] [ebp-1Ch] BYREF
    __int16 v10; // [esp+20h] [ebp-Ch]
    FILE* Stream; // [esp+24h] [ebp-8h]
    int v12; // [esp+28h] [ebp-4h]

    v12 = 614400;
    result = fopen(FileName, aWb_1);
    Stream = result;
    if (result)
    {
        Buffer[0] = 0x20000;
        Buffer[1] = 0;
        Buffer[2] = 0;
        Buffer[3] = 31457920;
        v10 = 8216;
        writeInFile(Buffer, 1u, 0x12u, Stream);
        for (i = 0; i < 480; ++i)
        {
            for (j = 0; j < 640; ++j)
            {
                v8 = 8 * ((*(__int16*)a2 >> g_RedBitsShift) & 0x1F);
                if (g_GreenBits == 6)
                    v7 = 4 * ((*(__int16*)a2 >> g_GreenBitsShift) & 0x3F);
                else
                    v7 = 8 * ((*(__int16*)a2 >> g_GreenBitsShift) & 0x1F);
                v6 = 8 * ((*(__int16*)a2 >> g_BlueBitsShift) & 0x1F);
                writeInFile(&v6, 1u, 3u, Stream);
                a2 += 2;
            }
        }
        ++dword_5BFFB0;
        result = (FILE*)fclose(Stream);
    }
    return result;
}
// 5BFFB0: using guessed type int dword_5BFFB0;
// 622CE8: using guessed type __int16 g_GreenBits;
// 622CEC: using guessed type __int16 g_RedBitsShift;
// 622CEE: using guessed type __int16 g_GreenBitsShift;
// 622CF0: using guessed type __int16 g_BlueBitsShift;

//----- (00584FED) --------------------------------------------------------
size_t __cdecl writeInFile(void* Buffer, size_t ElementSize, size_t ElementCount, FILE* Stream)
{
    size_t writedElements; // esi

    _lock_file(Stream);
    writedElements = fwrite(Buffer, ElementSize, ElementCount, Stream);
    _unlock_file(Stream);
    return writedElements;
}

//----- (0058516A) --------------------------------------------------------
size_t __cdecl readFromFile(void* Buffer, size_t ElementSize, size_t ElementCount, FILE* Stream)
{
    size_t readedElements; // esi

    _lock_file(Stream);
    readedElements = fread(Buffer, ElementSize, ElementCount, Stream);
    _unlock_file(Stream);
    return readedElements;
}

//----- (0047B4F4) --------------------------------------------------------
int __cdecl sub_47B4F4(char* FileName)
{
    _WORD* v2; // [esp+Ch] [ebp-8h]
    int v3; // [esp+10h] [ebp-4h] BYREF

    v2 = (_WORD*)someLoadFile(FileName, (int)&v3);
    qmemcpy(&word_6015C0, v2, 0x2CA0u);
    v2 += 5712;
    LOWORD(dword_6687B4) = *v2;
    v2 += 2;
    qmemcpy(word_6234E0, v2, 12 * dword_6687B4);
    qmemcpy(&dword_6580A0, &v2[6 * dword_6687B4 + 2], *(_DWORD*)&v2[6 * dword_6687B4]);
    return sub_53F213();
}
// 6015C0: using guessed type __int16 word_6015C0;
// 6234E0: using guessed type __int16 word_6234E0[];
// 6580A0: using guessed type int dword_6580A0;
// 6687B4: using guessed type int dword_6687B4;

//----- (00497C42) --------------------------------------------------------
int __cdecl loadItemsInfo(char* FileName)
{
    __int16 v2; // [esp+4h] [ebp-120h] BYREF
    __int16 v3; // [esp+8h] [ebp-11Ch] BYREF
    char v4[260]; // [esp+Ch] [ebp-118h] BYREF
    int v5; // [esp+110h] [ebp-14h] BYREF
    char* Buffer; // [esp+114h] [ebp-10h]
    int v7; // [esp+118h] [ebp-Ch]
    char* v8; // [esp+11Ch] [ebp-8h]
    int v9; // [esp+120h] [ebp-4h] BYREF

    v7 = 0;
    writeDebug(aLoadingItemsIn);
    v8 = (char*)someLoadFile(FileName, (int)&v9);
    Buffer = v8;
    while (Buffer <= &v8[v9])
    {
        sscanf(Buffer, "%[^\n]", v4);
        Buffer += strlen(v4) + 1;
        sscanf(v4, "%d,", &v5);
        if (v4[0] >= 48 && v4[0] <= 57)
        {
            dword_5CC2A4[27 * v5] = 0;
            sscanf(
                v4,
                "%d,%[^,],\"%[^\"]\",%f,%d,%d,%d",
                &v4[256],
                (char*)&unk_5CC240 + 108 * v5,
                (char*)&unk_5CC280 + 108 * v5,
                &dword_5CC2A4[27 * v5],
                &dword_5CC2A0[27 * v5],
                &v2,
                &v3);
            word_5CC2AA[54 * v5] = v2;
            word_5CC2A8[54 * v5] = v3;
        }
    }
    return sub_53F213();
}
// 5CC2A0: using guessed type int dword_5CC2A0[];
// 5CC2A4: using guessed type int dword_5CC2A4[];
// 5CC2A8: using guessed type __int16 word_5CC2A8[];

//----- (00531BAF) --------------------------------------------------------
unsigned int __thiscall sub_531BAF(int this, LPCSTR lpFileName)
{
    unsigned int result; // eax
    HANDLE v4; // eax
    DWORD v5; // eax
    BOOL v6; // esi
    DWORD v7; // eax
    HANDLE v8; // eax
    _DWORD* v9; // eax
    _DWORD* v10; // edx
    unsigned int v11; // esi
    unsigned int v12; // eax
    int lpFileNamea; // [esp+14h] [ebp+4h]

    if (!lpFileName)
        return -2147024809;
    if (*(_DWORD*)(this + 260) != -1)
        sub_531D4D(this);
    strcpy((char*)this, lpFileName);
    *(_DWORD*)(this + 276) = 0;
    v4 = CreateFileA(lpFileName, 0xC0000000, 0, 0, 4u, 0x10000080u, 0);
    *(_DWORD*)(this + 260) = v4;
    if (v4 == (HANDLE)-1)
        goto LABEL_11;
    v5 = GetFileSize(v4, 0);
    *(_DWORD*)(this + 272) = v5;
    v6 = v5 < 0x28;
    lpFileNamea = v6;
    if (v5 >= 0x28)
    {
        v7 = v5 + 4095;
        LOWORD(v7) = v7 & 0xF000;
    }
    else
    {
        v7 = 4096;
    }
    *(_DWORD*)(this + 272) = v7;
    v8 = CreateFileMappingA(*(HANDLE*)(this + 260), 0, 4u, 0, v7, 0);
    *(_DWORD*)(this + 264) = v8;
    if (v8 == (HANDLE)-1
        || (v9 = MapViewOfFile(v8, 0xF001Fu, 0, 0, *(_DWORD*)(this + 272)), v10 = v9, (*(_DWORD*)(this + 268) = v9) == 0))
    {
    LABEL_11:
        if ((int)GetLastError() > 0)
            v11 = (unsigned __int16)GetLastError() | 0x80070000;
        else
            v11 = GetLastError();
        sub_531D4D(this);
        result = v11;
    }
    else
    {
        if (v6)
            goto LABEL_23;
        if (memcmp(v9, &dword_596F28, 8u)
            || v9[2]
            || v9[5] != 16
            || (v12 = v9[6], v12 < 0x28)
            || v12 > *(_DWORD*)(this + 272))
        {
            memset(v10, 0, *(_DWORD*)(this + 272));
            lpFileNamea = 1;
        }
        if (lpFileNamea)
        {
        LABEL_23:
            *v10 = 1480864580;
            v10[1] = 169478669;
            v10[2] = 0;
            v10[3] = 0;
            v10[4] = 0;
            v10[5] = 16;
            v10[6] = 40;
            v10[7] = 0;
            v10[8] = 0;
            v10[9] = 0;
        }
        result = 0;
    }
    return result;
}
// 596F28: using guessed type int dword_596F28;

//----- (00531DA8) --------------------------------------------------------
int __thiscall sub_531DA8(LPCSTR lpFileName)
{
    bool v2; // zf

    v2 = *((_DWORD*)lpFileName + 65) == -1;
    *((_DWORD*)lpFileName + 69) = 1;
    if (!v2)
    {
        sub_531D4D((int)lpFileName);
        DeleteFileA(lpFileName);
    }
    return 0;
}

//----- (00531DD2) --------------------------------------------------------
int __thiscall sub_531DD2(LPCSTR lpFileName, int a2, int a3)
{
    _DWORD* v4; // eax
    int v5; // ecx
    unsigned int v6; // ebx
    DWORD v7; // edi
    HANDLE v8; // eax
    LPVOID v9; // eax
    int* v11; // eax
    void* v12; // [esp-4h] [ebp-14h]
    int v13; // [esp+Ch] [ebp-4h]

    v4 = (_DWORD*)*((_DWORD*)lpFileName + 67);
    if (!v4)
        return 0;
    v5 = v4[6];
    v13 = v5;
    v6 = v5 + a3 + 16;
    if (v6 > *((_DWORD*)lpFileName + 68))
    {
        v7 = v5 + a3 + 4111;
        LOWORD(v7) = (v5 + a3 + 4111) & 0xF000;
        UnmapViewOfFile(v4);
        v12 = (void*)*((_DWORD*)lpFileName + 66);
        *((_DWORD*)lpFileName + 67) = 0;
        CloseHandle(v12);
        *((_DWORD*)lpFileName + 66) = -1;
        v8 = CreateFileMappingA(*((HANDLE*)lpFileName + 65), 0, 4u, 0, v7, 0);
        *((_DWORD*)lpFileName + 66) = v8;
        if (v8 == (HANDLE)-1
            || (*((_DWORD*)lpFileName + 68) = v7,
                v9 = MapViewOfFile(v8, 0xF001Fu, 0, 0, v7),
                (*((_DWORD*)lpFileName + 67) = v9) == 0))
        {
            sub_531DA8(lpFileName);
            return 0;
        }
        v5 = v13;
    }
    *(_DWORD*)(*((_DWORD*)lpFileName + 67) + 24) = v6;
    v11 = (int*)(*((_DWORD*)lpFileName + 67) + v5);
    v11[1] = 0;
    v11[2] = 0;
    *v11 = a2;
    v11[3] = a3;
    return v5;
}

//----- (00531ED7) --------------------------------------------------------
int __thiscall sub_531ED7(LPCSTR lpFileName, int a2)
{
    if (!*((_DWORD*)lpFileName + 67))
        return 0;
    if (!sub_531EA5(lpFileName, a2))
    {
        sub_531DA8(lpFileName);
        return 0;
    }
    return *(_DWORD*)(*((_DWORD*)lpFileName + 67) + a2);
}

//----- (00531F0B) --------------------------------------------------------
int __thiscall sub_531F0B(LPCSTR lpFileName, int a2, int a3)
{
    if (!*((_DWORD*)lpFileName + 67))
    {
    LABEL_4:
        if (a3)
            *(_DWORD*)a3 = 0;
        return 0;
    }
    if (!sub_531EA5(lpFileName, a2))
    {
        sub_531DA8(lpFileName);
        goto LABEL_4;
    }
    if (a3)
        *(_DWORD*)a3 = *(_DWORD*)(a2 + *((_DWORD*)lpFileName + 67) + 12);
    return a2 + *((_DWORD*)lpFileName + 67) + 16;
}

//----- (00531F6F) --------------------------------------------------------
int __thiscall sub_531F6F(LPCSTR lpFileName, int a2)
{
    if (!*((_DWORD*)lpFileName + 67))
        return 0;
    if (!sub_531EA5(a2))
    {
        sub_531DA8(lpFileName);
        return 0;
    }
    return *(_DWORD*)(*((_DWORD*)lpFileName + 67) + a2 + 4);
}
// 531EA5: using guessed type _DWORD __stdcall sub_531EA5(_DWORD);

//----- (00531FA4) --------------------------------------------------------
void __thiscall sub_531FA4(LPCSTR lpFileName, int a2, int a3)
{
    if (*((_DWORD*)lpFileName + 67))
    {
        if (sub_531EA5(lpFileName, a2) && (!a3 || sub_531EA5(lpFileName, a3)))
            *(_DWORD*)(a2 + *((_DWORD*)lpFileName + 67) + 4) = a3;
        else
            sub_531DA8(lpFileName);
    }
}

//----- (00531FED) --------------------------------------------------------
int __thiscall sub_531FED(LPCSTR lpFileName, int a2)
{
    if (!*((_DWORD*)lpFileName + 67))
        return 0;
    if (!sub_531EA5(lpFileName, a2))
    {
        sub_531DA8(lpFileName);
        return 0;
    }
    return *(_DWORD*)(*((_DWORD*)lpFileName + 67) + a2 + 8);
}

//----- (00532022) --------------------------------------------------------
void __thiscall sub_532022(LPCSTR lpFileName, int a2, int a3)
{
    if (*((_DWORD*)lpFileName + 67))
    {
        if (sub_531EA5(lpFileName, a2) && (!a3 || sub_531EA5(lpFileName, a3)))
            *(_DWORD*)(a2 + *((_DWORD*)lpFileName + 67) + 8) = a3;
        else
            sub_531DA8(lpFileName);
    }
}

//----- (0053206B) --------------------------------------------------------
int __thiscall sub_53206B(LPCSTR lpFileName, int a2, int a3)
{
    int i; // eax
    int v5; // esi

    for (i = sub_531F6F(lpFileName, a2); ; i = sub_531FED(lpFileName, v5))
    {
        v5 = i;
        if (!i || a3 == sub_531ED7(lpFileName, i))
            break;
    }
    return v5;
}

//----- (005376E7) --------------------------------------------------------
int __cdecl sub_5376E7(char* FileName, int a2, int a3, int a4, int a5, int a6, int a7)
{
    FILE* v7; // eax
    FILE* v8; // ebx
    unsigned int v9; // esi
    unsigned __int16(__stdcall * v10)(); // esi
    int v11; // esi
    int result; // eax
    unsigned int v13; // eax
    size_t v14; // esi
    void* v15; // eax
    void* v16; // edi
    int v17; // esi
    int v18; // eax
    int v19; // eax
    int v20; // eax
    char* v21; // [esp-8h] [ebp-E0h]
    int v22[31]; // [esp+Ch] [ebp-CCh] BYREF
    char v23[4]; // [esp+88h] [ebp-50h] BYREF
    int v24; // [esp+8Ch] [ebp-4Ch]
    int v25[6]; // [esp+98h] [ebp-40h] BYREF
    int v26[4]; // [esp+B0h] [ebp-28h] BYREF
    unsigned int v27; // [esp+C0h] [ebp-18h]
    int Buffer; // [esp+C4h] [ebp-14h] BYREF
    const void* v29; // [esp+C8h] [ebp-10h] BYREF
    int v30; // [esp+CCh] [ebp-Ch] BYREF
    int* v31; // [esp+D0h] [ebp-8h]
    int v32; // [esp+D4h] [ebp-4h]

    v21 = FileName;
    *(_DWORD*)a3 = 0;
    *(_DWORD*)a4 = 0;
    *(_DWORD*)a6 = 0;
    v7 = fopen(v21, "rb");
    v8 = v7;
    if (!v7)
        goto LABEL_20;
    if (fseek(v7, 0, 2))
        goto LABEL_37;
    v9 = ftell(v8);
    if (v9 == -1)
    {
        v10 = (unsigned __int16(__stdcall*)())GetLastError;
        if ((int)GetLastError() <= 0)
        {
        LABEL_5:
            v11 = GetLastError();
        LABEL_40:
            fclose(v8);
            return v11;
        }
    LABEL_39:
        v11 = v10() | 0x80070000;
        goto LABEL_40;
    }
    if (fseek(v8, 0, 0))
    {
        v10 = (unsigned __int16(__stdcall*)())GetLastError;
        if ((int)GetLastError() <= 0)
            goto LABEL_5;
        goto LABEL_39;
    }
    if (readFromFile(&Buffer, 4u, 1u, v8) != 1)
    {
        v10 = (unsigned __int16(__stdcall*)())GetLastError;
        if ((int)GetLastError() <= 0)
        {
            v11 = GetLastError();
            goto LABEL_40;
        }
        goto LABEL_39;
    }
    if (Buffer != 542327876
        || (memset(v22, 0, sizeof(v22)), v22[0] = 124, readFromFile(v22, 0x7Cu, 1u, v8), v22[0] != 124))
    {
        fclose(v8);
        return -931722278;
    }
    BYTE1(v22[26]) |= 8u;
    v22[1] = 4103;
    v13 = ftell(v8);
    if (v13 == -1 || v13 >= v9)
    {
    LABEL_37:
        v10 = (unsigned __int16(__stdcall*)())GetLastError;
        if ((int)GetLastError() <= 0)
        {
            v11 = GetLastError();
            goto LABEL_40;
        }
        goto LABEL_39;
    }
    v14 = v9 - v13;
    v15 = operator new(v14);
    v16 = v15;
    if (!v15)
    {
        fclose(v8);
        return -931722312;
    }
    v32 = readFromFile(v15, v14, 1u, v8);
    fclose(v8);
    if (v32 == 1)
    {
        result = (*(int(__stdcall**)(int, int*, char**, _DWORD))(*(_DWORD*)a2 + 24))(a2, v22, &FileName, 0);
        if (result < 0)
            return result;
        v29 = v16;
        v27 = (unsigned int)v16 + v14;
        v11 = sub_537570((int)FileName, &v29, (unsigned int)v16 + v14);
        if (v11 < 0)
            goto LABEL_27;
        if ((v22[27] & 0x200) == 0)
        {
        LABEL_35:
            sub_585E40(v16);
            *(_DWORD*)a3 = FileName;
            v19 = sub_53666A(&v22[18]);
            *(_DWORD*)a4 = v19;
            *(_DWORD*)a6 = v22[27] & 0xFC00;
            *(_DWORD*)a7 = v22[10];
            v20 = a5;
            *(_DWORD*)a5 = v22[3];
            *(_DWORD*)(v20 + 4) = v22[2];
            return 0;
        }
        v11 = (*(int(__stdcall**)(char*, char*))(*(_DWORD*)FileName + 56))(FileName, v23);
        if (v11 < 0)
        {
        LABEL_27:
            sub_585E40(v16);
            (*(void(__stdcall**)(char*))(*(_DWORD*)FileName + 8))(FileName);
            return v11;
        }
        v17 = v24 & 0xFC00;
        v32 = 0;
        v25[0] = 1024;
        v25[1] = 2048;
        v25[2] = 4096;
        v25[3] = 0x2000;
        v25[4] = 0x4000;
        v25[5] = 0x8000;
        v31 = v25;
        while (1)
        {
            v18 = *v31;
            if (v17 != *v31 && (v18 & v22[27]) != 0)
            {
                v26[2] = 0;
                v26[3] = 0;
                v26[1] = v18;
                v26[0] = 4096;
                a2 = (*(int(__stdcall**)(char*, int*, int*))(*(_DWORD*)FileName + 48))(FileName, v26, &v30);
                if (a2 < 0)
                    break;
                if (!v30)
                    break;
                a2 = sub_537570(v30, &v29, v27);
                (*(void(__stdcall**)(int))(*(_DWORD*)v30 + 8))(v30);
                if (a2 < 0)
                    break;
            }
            ++v32;
            ++v31;
            if (v32 >= 6)
                goto LABEL_35;
        }
        sub_585E40(v16);
        (*(void(__stdcall**)(char*))(*(_DWORD*)FileName + 8))(FileName);
        result = a2;
    }
    else
    {
    LABEL_20:
        if ((int)GetLastError() > 0)
            result = (unsigned __int16)GetLastError() | 0x80070000;
        else
            result = GetLastError();
    }
    return result;
}

//----- (00537C6D) --------------------------------------------------------
unsigned int __cdecl sub_537C6D(char* FileName, int a2, int a3, int a4, int a5)
{
    FILE* v5; // eax
    FILE* v6; // edi
    unsigned int result; // eax
    unsigned __int16(__stdcall * v8)(); // esi
    unsigned int v9; // esi
    signed int v10; // esi
    unsigned int v11; // eax
    size_t v12; // esi
    FILE* v13; // eax
    FILE* v14; // ebx
    char* v15; // edi
    int v16; // edi
    int v17; // ecx
    int v18; // esi
    int v19; // edi
    unsigned __int8* v20; // eax
    int v21; // ebx
    char v22; // cl
    unsigned __int16 v23; // si
    unsigned __int16 v24; // cx
    unsigned __int16 v25; // si
    int v26; // eax
    unsigned __int16 v27; // si
    int v28; // ecx
    int v29; // esi
    _DWORD* v30; // edi
    int v31; // ecx
    int v32; // eax
    int v33; // ecx
    unsigned int v34; // eax
    char* v35; // [esp-8h] [ebp-D8h]
    int v36[31]; // [esp+Ch] [ebp-C4h] BYREF
    int v37; // [esp+88h] [ebp-48h] BYREF
    int v38; // [esp+8Ch] [ebp-44h]
    int v39; // [esp+90h] [ebp-40h] BYREF
    int v40; // [esp+94h] [ebp-3Ch] BYREF
    BOOL v41; // [esp+98h] [ebp-38h]
    unsigned int v42; // [esp+9Ch] [ebp-34h]
    unsigned __int8* v43; // [esp+A0h] [ebp-30h]
    int v44; // [esp+A4h] [ebp-2Ch]
    unsigned int v45; // [esp+A8h] [ebp-28h]
    int v46; // [esp+ACh] [ebp-24h]
    int v47; // [esp+B0h] [ebp-20h]
    LPVOID lpMem; // [esp+B4h] [ebp-1Ch]
    unsigned __int8 Buffer; // [esp+B8h] [ebp-18h] BYREF
    unsigned __int8 v50; // [esp+B9h] [ebp-17h]
    char v51; // [esp+BAh] [ebp-16h]
    unsigned __int16 v52; // [esp+BDh] [ebp-13h]
    unsigned __int8 v53; // [esp+BFh] [ebp-11h]
    unsigned __int16 v54; // [esp+C4h] [ebp-Ch]
    unsigned __int16 v55; // [esp+C6h] [ebp-Ah]
    unsigned __int8 v56; // [esp+C8h] [ebp-8h]
    char v57; // [esp+C9h] [ebp-7h]
    FILE* Stream; // [esp+CCh] [ebp-4h]

    *(_DWORD*)a3 = 0;
    v35 = FileName;
    *(_DWORD*)a4 = 0;
    v5 = fopen(v35, "rb");
    v6 = v5;
    Stream = v5;
    if (!v5)
    {
        if ((int)GetLastError() > 0)
            result = (unsigned __int16)GetLastError() | 0x80070000;
        else
            result = GetLastError();
        return result;
    }
    if (fseek(v5, 0, 2))
    {
        v8 = (unsigned __int16(__stdcall*)())GetLastError;
        if ((int)GetLastError() <= 0)
            goto LABEL_13;
        goto LABEL_99;
    }
    v9 = ftell(v6);
    if (v9 == -1)
    {
        v8 = (unsigned __int16(__stdcall*)())GetLastError;
        if ((int)GetLastError() <= 0)
            goto LABEL_13;
        goto LABEL_99;
    }
    if (fseek(v6, 0, 0))
    {
        v8 = (unsigned __int16(__stdcall*)())GetLastError;
        if ((int)GetLastError() <= 0)
        {
        LABEL_13:
            v10 = GetLastError();
        LABEL_100:
            fclose(v6);
            return v10;
        }
    LABEL_99:
        v10 = v8() | 0x80070000;
        goto LABEL_100;
    }
    if (readFromFile(&Buffer, 0x12u, 1u, v6) != 1)
    {
        v8 = (unsigned __int16(__stdcall*)())GetLastError;
        if ((int)GetLastError() > 0)
            goto LABEL_99;
    LABEL_16:
        v10 = GetLastError();
        goto LABEL_100;
    }
    if (v50 > 1u || v51 != 1 && v51 != 2 && v51 != 3 && v51 != 9 && v51 != 10 && v51 != 11)
        goto LABEL_31;
    if (v50 != 1)
    {
        if (v51 != 1 && v51 != 9 && (v56 == 8 || v56 == 15 || v56 == 16 || v56 == 24 || v56 == 32))
            goto LABEL_39;
    LABEL_31:
        fclose(v6);
        return -931722292;
    }
    if (v53 != 8 && v53 != 15 && v53 != 16 && v53 != 24 && v53 != 32 || v56 != 8)
        goto LABEL_31;
LABEL_39:
    if (Buffer && fseek(v6, Buffer, 1) || (v11 = ftell(v6), v11 == -1) || v11 >= v9)
    {
        v8 = (unsigned __int16(__stdcall*)())GetLastError;
        if ((int)GetLastError() > 0)
            goto LABEL_99;
        goto LABEL_16;
    }
    v12 = v9 - v11;
    v13 = (FILE*)operator new(v12);
    v14 = v13;
    lpMem = v13;
    if (!v13)
    {
        fclose(v6);
        return -931722312;
    }
    v15 = (char*)v13 + v12;
    v45 = (unsigned int)v13 + v12;
    if (readFromFile(v13, v12, 1u, Stream) != 1)
    {
        if ((int)GetLastError() > 0)
            v10 = (unsigned __int16)GetLastError() | 0x80070000;
        else
            v10 = GetLastError();
        sub_585E40(v14);
        fclose(Stream);
        return v10;
    }
    fclose(Stream);
    Stream = 0;
    if (v50)
    {
        Stream = v14;
        if ((char*)v14 + v52 * (v53 >> 3) >= v15)
        {
            sub_585E40(v14);
            return -931722278;
        }
    }
    memset(v36, 0, sizeof(v36));
    v36[3] = v54;
    v36[2] = v55;
    v36[0] = 124;
    v36[1] = 4103;
    v36[26] = 2112;
    sub_53661D(2, &v36[18]);
    v16 = (*(int(__stdcall**)(int, int*, char**, _DWORD))(*(_DWORD*)a2 + 24))(a2, v36, &FileName, 0);
    if (v16 < 0)
    {
        sub_585E40(v14);
        return v16;
    }
    memset(v36, 0, sizeof(v36));
    v36[0] = 124;
    v10 = (*(int(__stdcall**)(char*, _DWORD, int*, int, _DWORD))(*(_DWORD*)FileName + 100))(FileName, 0, v36, 1, 0);
    if (v10 < 0)
    {
        (*(void(__stdcall**)(char*))(*(_DWORD*)FileName + 8))(FileName);
        sub_585E40(v14);
        return v10;
    }
    v41 = v51 == 9 || v51 == 10 || v51 == 11;
    v38 = v57 & 0x10;
    v17 = v55;
    v18 = v54;
    v46 = v36[9];
    v47 = 0;
    v42 = v36[9] + 4 * (v54 + (v55 - 1) * (v36[4] / 4));
    v43 = (unsigned __int8*)lpMem;
    v44 = (v56 + 1) / 8;
    if (!v55)
    {
    LABEL_85:
        sub_585E40(lpMem);
        v10 = (*(int(__stdcall**)(char*, _DWORD))(*(_DWORD*)FileName + 128))(FileName, 0);
        if (v10 < 0)
        {
            (*(void(__stdcall**)(char*))(*(_DWORD*)FileName + 8))(FileName);
            return v10;
        }
        *(_DWORD*)a3 = FileName;
        v32 = a5;
        *(_DWORD*)a5 = v54;
        *(_DWORD*)(v32 + 4) = v55;
        v33 = 1;
        if (v51 == 1 || (v34 = v56, v51 == 9))
            v34 = v53;
        if (v34 >= 0xF)
        {
            if (v34 <= 0x10)
            {
                *(_DWORD*)a4 = 5;
                return 0;
            }
            if (v34 == 24)
                goto LABEL_95;
            if (v34 == 32)
            {
                v33 = ((v57 & 0xF) == 8) + 1;
            LABEL_95:
                *(_DWORD*)a4 = v33;
                return 0;
            }
        }
        return 0;
    }
    v19 = v46;
    v20 = v43;
    while (1)
    {
        v21 = v18 * v47;
        if (!v38)
            v21 = v18 * (v17 - v47 - 1);
        a2 = 0;
        if (v18)
            break;
    LABEL_84:
        v17 = v55;
        if (++v47 >= (unsigned int)v55)
            goto LABEL_85;
    }
    while (v41)
    {
        if ((unsigned int)(v20 + 1) > v45)
            goto LABEL_102;
        v22 = *v20++;
        v23 = (v22 & 0x7F) + 1;
        if (v22 >= 0)
        {
            if (v19 + 4 * (unsigned int)v23 > v42 || (unsigned int)&v20[v23 * v44] > v45)
                goto LABEL_102;
            v27 = v22 & 0x7F;
            v28 = v21 + a2;
            v29 = v27 + 1;
            a2 += v29;
            v30 = (_DWORD*)(v46 + 4 * v28);
            do
            {
                v20 = sub_537A31(v20, (int)Stream, (int)&Buffer, &v37);
                *v30++ = v37;
                --v29;
            } while (v29);
            goto LABEL_79;
        }
        if (v19 + 4 * (unsigned int)v23 > v42 || (unsigned int)&v20[v44] > v45)
            goto LABEL_102;
        v20 = sub_537A31(v20, (int)Stream, (int)&Buffer, &v40);
        v24 = v23;
        v25 = v23 - 1;
        v43 = v20;
        if (v24)
        {
            v26 = v21 + a2;
            a2 += v25 + 1;
            memset32((void*)(v46 + 4 * v26), v40, v25 + 1);
            v20 = v43;
        LABEL_79:
            v19 = v46;
        }
    LABEL_83:
        v18 = v54;
        if (a2 >= (unsigned int)v54)
            goto LABEL_84;
    }
    if (v19 + 4 <= v42 && (unsigned int)&v20[v44] <= v45)
    {
        v20 = sub_537A31(v20, (int)Stream, (int)&Buffer, &v39);
        v31 = v21 + a2++;
        *(_DWORD*)(v19 + 4 * v31) = v39;
        goto LABEL_83;
    }
LABEL_102:
    sub_585E40(lpMem);
    (*(void(__stdcall**)(char*, _DWORD))(*(_DWORD*)FileName + 128))(FileName, 0);
    (*(void(__stdcall**)(char*))(*(_DWORD*)FileName + 8))(FileName);
    return -931722278;
}
// 5380B8: conditional instruction was optimized away because of 'si.2<100u'

//----- (005389A8) --------------------------------------------------------
int __thiscall sub_5389A8(LPCSTR lpFileName)
{
    UINT v2; // edx
    int result; // eax
    CHAR Buffer[256]; // [esp+Ch] [ebp-100h] BYREF

    if (sub_531B94(lpFileName)
        || (v2 = GetWindowsDirectoryA(Buffer, 0x100u),
            Buffer[v2] = 92,
            strcpy(&Buffer[v2 + 1], "d3dx.dat"),
            result = sub_531BAF((int)lpFileName, Buffer),
            result >= 0)
        && ((unsigned int)sub_531BA8(lpFileName) <= 0x100000
            || (sub_531DA8(lpFileName), result = sub_531BAF((int)lpFileName, Buffer), result >= 0)))
    {
        result = 0;
    }
    return result;
}

//----- (00538A45) --------------------------------------------------------
int __thiscall sub_538A45(LPCSTR lpFileName, int a2, int a3)
{
    const CHAR* v3; // ebx
    int v6; // eax
    int v7; // eax
    void* v8; // esp
    int v9; // eax
    int i; // eax
    int v11; // eax
    int v12; // eax
    _BYTE* v13; // eax
    int v14; // eax
    int v15; // ebx
    _BYTE* v16; // eax
    int v17; // eax
    void* v18; // eax
    void(__thiscall * *v19)(int); // eax
    _DWORD v20[6]; // [esp-Ch] [ebp-28h] BYREF
    int v21; // [esp+Ch] [ebp-10h]
    int v22; // [esp+10h] [ebp-Ch]
    int v23; // [esp+14h] [ebp-8h]
    CHAR* v24; // [esp+18h] [ebp-4h]
    int v25; // [esp+28h] [ebp+Ch]
    int v26; // [esp+28h] [ebp+Ch]

    v3 = lpFileName;
    v24 = (CHAR*)lpFileName;
    if (!a2 || !a3)
        return -2147024809;
    if (!sub_531B94(lpFileName))
        return -2147467259;
    v6 = sub_538F68(v3);
    if (!v6)
        return 1;
    v7 = sub_53206B(v3, v6, 22344);
    if (!v7)
        return 1;
    v25 = sub_53209D(v3, v7, (int)&loc_564543 + 1, (const void*)(a2 + 12), 0x10u);
    if (!v25)
        return 1;
    v8 = alloca(12);
    v20[0] = *(_DWORD*)(a3 + 4);
    v20[1] = *(_DWORD*)(a3 + 8);
    v20[2] = *(_DWORD*)(a3 + 12);
    v9 = sub_53209D(v3, v25, 1162104653, v20, 0xCu);
    if (!v9)
        return 1;
    v23 = 0;
    v22 = 0;
    v21 = 0;
    for (i = sub_531F6F(v3, v9); ; i = sub_531FED(v3, v26))
    {
        v26 = i;
        if (!i)
            break;
        v11 = sub_531ED7(v3, i) - 17458;
        if (!v11)
        {
            if (*(_DWORD*)(a3 + 56))
                continue;
            v18 = operator new(0x17Cu);
            *(_DWORD*)(a3 + 56) = v18;
            if (!v18)
            {
            LABEL_37:
                v15 = -931722312;
                goto LABEL_43;
            }
            v15 = sub_538FEF(v3, v26, (int)v18, 0);
            if (v15 < 0)
                goto LABEL_43;
            *(_DWORD*)(a3 + 20) = 1;
            v23 = 1;
            goto LABEL_35;
        }
        v12 = v11 - 1;
        if (v12)
        {
            if (v12 == 1280573440 && *(_DWORD*)(a2 + 88) && !*(_DWORD*)(a3 + 80))
            {
                v13 = operator new(0xECu);
                *(_DWORD*)(a3 + 80) = v13;
                if (!v13)
                    goto LABEL_37;
                if (*(_DWORD*)(a3 + 36))
                    v14 = sub_5390A5(v3, v26, v13, 0, 0);
                else
                    v14 = sub_5390A5(v3, v26, v13, 0, a3 + 84);
                v15 = v14;
                if (v14 < 0)
                    goto LABEL_43;
                *(_DWORD*)(a3 + 36) |= *(_DWORD*)(a3 + 96) != 0;
                *(_DWORD*)(a3 + 32) = 1;
                v21 = 1;
            LABEL_35:
                v3 = v24;
                continue;
            }
        }
        else if (*(_DWORD*)(a2 + 84) && !*(_DWORD*)(a3 + 60))
        {
            v16 = operator new(0xECu);
            *(_DWORD*)(a3 + 60) = v16;
            if (!v16)
                goto LABEL_37;
            if (*(_DWORD*)(a3 + 28))
                v17 = sub_5390A5(v3, v26, v16, 0, 0);
            else
                v17 = sub_5390A5(v3, v26, v16, 0, a3 + 64);
            v15 = v17;
            if (v17 < 0)
                goto LABEL_43;
            *(_DWORD*)(a3 + 28) |= *(_DWORD*)(a3 + 76) != 0;
            *(_DWORD*)(a3 + 24) = 1;
            v22 = 1;
            goto LABEL_35;
        }
    }
    if (v23 && v22 == *(_DWORD*)(a2 + 84) && v21 == *(_DWORD*)(a2 + 88))
        *(_DWORD*)(a3 + 16) = 1;
    v15 = 0;
LABEL_43:
    if (sub_531BA1(v24))
    {
        if (*(_DWORD*)(a3 + 56))
            sub_585E40(*(LPVOID*)(a3 + 56));
        if (*(_DWORD*)(a3 + 60))
            sub_585E40(*(LPVOID*)(a3 + 60));
        if (*(_DWORD*)(a3 + 80))
            sub_585E40(*(LPVOID*)(a3 + 80));
        v19 = *(void(__thiscall***)(int))(a3 + 64);
        *(_DWORD*)(a3 + 56) = 0;
        *(_DWORD*)(a3 + 60) = 0;
        *(_DWORD*)(a3 + 80) = 0;
        *(_DWORD*)(a3 + 20) = 0;
        *(_DWORD*)(a3 + 24) = 0;
        *(_DWORD*)(a3 + 32) = 0;
        (*v19)(a3 + 64);
        (**(void(__thiscall***)(int))(a3 + 84))(a3 + 84);
        *(_DWORD*)(a3 + 28) = 0;
        *(_DWORD*)(a3 + 36) = 0;
        *(_DWORD*)(a3 + 16) = 0;
        v15 = -2147467259;
    }
    return v15;
}

//----- (00538CD1) --------------------------------------------------------
int __thiscall sub_538CD1(LPCSTR lpFileName, int a2, int a3)
{
    _DWORD* v4; // edi
    int v6; // eax
    int v7; // esi
    int v8; // eax
    int v9; // eax
    _DWORD* v10; // eax
    _DWORD* v11; // esi
    int v12; // eax
    void* v13; // esp
    int v14; // eax
    _DWORD* v15; // eax
    int v16; // eax
    int v17; // esi
    int v18; // eax
    int v19; // esi
    int v20; // eax
    int v21; // esi
    int v22; // eax
    int v23; // [esp-10h] [ebp-28h]
    int v24; // [esp-Ch] [ebp-24h] BYREF
    int v25; // [esp-8h] [ebp-20h]
    int v26; // [esp-4h] [ebp-1Ch]
    _DWORD* v27; // [esp+Ch] [ebp-Ch]
    int v28; // [esp+10h] [ebp-8h]
    int v29; // [esp+14h] [ebp-4h]

    if (!a2)
        return -2147024809;
    v4 = (_DWORD*)a3;
    if (!a3)
        return -2147024809;
    if (!sub_531B94(lpFileName))
        return -2147467259;
    v6 = sub_538F86(lpFileName);
    v28 = v6;
    if (!v6)
        return -931722312;
    v29 = sub_53206B(lpFileName, v6, 22344);
    if (!v29)
    {
        v7 = sub_531DD2(lpFileName, 22344, 0);
        v29 = v7;
        if (!v7)
            return -931722312;
        v8 = sub_531F6F(lpFileName, v28);
        sub_532022(lpFileName, v7, v8);
        sub_531FA4(lpFileName, v28, v7);
    }
    v27 = (_DWORD*)(a2 + 12);
    v28 = sub_53209D(lpFileName, v29, (int)&loc_564543 + 1, (const void*)(a2 + 12), 0x10u);
    if (!v28)
    {
        v9 = sub_531DD2(lpFileName, (int)&loc_564543 + 1, 16);
        v28 = v9;
        if (!v9)
            return -931722312;
        v10 = (_DWORD*)sub_531F0B(lpFileName, v9, 0);
        v11 = v27;
        *v10 = *v27;
        v10[1] = *++v11;
        ++v11;
        v26 = v29;
        v10[2] = *v11;
        v10[3] = v11[1];
        v12 = sub_531F6F(lpFileName, v26);
        sub_532022(lpFileName, v28, v12);
        sub_531FA4(lpFileName, v29, v28);
        v4 = (_DWORD*)a3;
    }
    v13 = alloca(12);
    v24 = v4[1];
    v25 = v4[2];
    v26 = v4[3];
    v29 = sub_53209D(lpFileName, v28, 1162104653, &v24, 0xCu);
    if (!v29)
    {
        v14 = sub_531DD2(lpFileName, 1162104653, 12);
        v29 = v14;
        if (!v14)
            return -931722312;
        v15 = (_DWORD*)sub_531F0B(lpFileName, v14, 0);
        v23 = v28;
        *v15 = v24;
        v15[1] = v25;
        v15[2] = v26;
        v16 = sub_531F6F(lpFileName, v23);
        sub_532022(lpFileName, v29, v16);
        sub_531FA4(lpFileName, v28, v29);
        v4 = (_DWORD*)a3;
    }
    if (v4[14] && !sub_53206B(lpFileName, v29, 17458))
    {
        v17 = sub_539238(lpFileName, 17458, v4[14], 0);
        if (!v17)
            return -931722312;
        v18 = sub_531F6F(lpFileName, v29);
        sub_532022(lpFileName, v17, v18);
        sub_531FA4(lpFileName, v29, v17);
    }
    if (!*(_DWORD*)(a2 + 84) || !v4[15] || sub_53206B(lpFileName, v29, 17459))
        goto LABEL_24;
    v19 = sub_5392C0(lpFileName, 17459, v4[15], 0, v4 + 16);
    if (!v19)
        return -931722312;
    v20 = sub_531F6F(lpFileName, v29);
    sub_532022(lpFileName, v19, v20);
    sub_531FA4(lpFileName, v29, v19);
LABEL_24:
    if (*(_DWORD*)(a2 + 88) && v4[20] && !sub_53206B(lpFileName, v29, 1280590899))
    {
        v21 = sub_5392C0(lpFileName, 1280590899, v4[20], 0, v4 + 21);
        if (!v21)
            return -931722312;
        v22 = sub_531F6F(lpFileName, v29);
        sub_532022(lpFileName, v21, v22);
        sub_531FA4(lpFileName, v29, v21);
    }
    return 0;
}

//----- (00538F86) --------------------------------------------------------
int __thiscall sub_538F86(LPCSTR lpFileName)
{
    int v2; // ebp
    int v3; // edi
    int result; // eax
    int v5; // eax

    v2 = sub_531DCE();
    v3 = sub_53209D(lpFileName, v2, 5391702, &unk_5972DC, 4u);
    if (!v3)
    {
        result = sub_531DD2(lpFileName, 5391702, 4);
        v3 = result;
        if (!result)
            return result;
        v5 = sub_531F6F(lpFileName, v2);
        sub_532022(lpFileName, v3, v5);
        sub_531FA4(lpFileName, v2, v3);
        *(_DWORD*)sub_531F0B(lpFileName, v3, 0) = 117440512;
    }
    return v3;
}

//----- (00538FEF) --------------------------------------------------------
int __thiscall sub_538FEF(LPCSTR lpFileName, int a2, int a3, int a4)
{
    _BYTE* v5; // esi
    int* v6; // esi
    _DWORD* v7; // ebx
    const void* v8; // esi
    void* v10; // eax
    int v11; // [esp+Ch] [ebp-4h] BYREF

    v5 = (_BYTE*)sub_531F5F(lpFileName, a2, (int)&v11);
    if (!v5)
        return -2147467259;
    if (sub_53218B((_BYTE*)a3, 380, v5, v11, &a2) < 0 || (v11 -= a2, v6 = (int*)&v5[a2], v11 != 4))
    {
        sub_531DA8(lpFileName);
        return -2147467259;
    }
    v7 = (_DWORD*)a4;
    if (a4 && !*(_DWORD*)a4 && *v6)
    {
        v8 = (const void*)sub_531F5F(lpFileName, *v6, (int)&a2);
        if (!v8)
            return -2147467259;
        v10 = operator new(a2 + 1);
        *v7 = v10;
        if (!v10)
            return -931722312;
        qmemcpy(v10, v8, a2);
        *(_BYTE*)(*v7 + a2) = 0;
    }
    return 0;
}

//----- (00539238) --------------------------------------------------------
int __thiscall sub_539238(LPCSTR lpFileName, int a2, int a3, int a4)
{
    int v5; // eax
    int v6; // ebx
    _BYTE* v7; // eax
    _BYTE* v8; // edi
    int v10; // [esp+Ch] [ebp-4h]

    v10 = 0;
    if (a4)
    {
        v10 = sub_5393B4(lpFileName, a4);
        if (!v10)
            return 0;
    }
    sub_5320FB(0, -1, &a4, a3, 380);
    v5 = sub_531DD2(lpFileName, a2, a4 + 4);
    v6 = v5;
    if (!v5)
        return 0;
    v7 = (_BYTE*)sub_531F0B(lpFileName, v5, 0);
    v8 = v7;
    if (!v7)
        return 0;
    sub_5320FB(v7, -1, 0, a3, 380);
    *(_DWORD*)&v8[a4] = v10;
    return v6;
}

//----- (005393B4) --------------------------------------------------------
int __thiscall sub_5393B4(LPCSTR lpFileName, int a2)
{
    int v3; // eax
    int v4; // ebx
    int v5; // edi
    int v6; // eax
    int v7; // ebx
    int v8; // eax
    void* v9; // eax
    int v11; // [esp+Ch] [ebp-8h]
    int v12; // [esp+10h] [ebp-4h]

    if (!a2)
        return 0;
    v3 = sub_538F86(lpFileName);
    v4 = v3;
    if (!v3)
        return 0;
    v12 = sub_53206B(lpFileName, v3, 1397904467);
    if (!v12)
    {
        v5 = sub_531DD2(lpFileName, 1397904467, 0);
        v12 = v5;
        if (!v5)
            return 0;
        v6 = sub_531F6F(lpFileName, v4);
        sub_532022(lpFileName, v5, v6);
        sub_531FA4(lpFileName, v4, v5);
    }
    v11 = strlen((const char*)a2);
    v7 = sub_53209D(lpFileName, v12, 5395539, (const void*)a2, v11);
    if (!v7)
    {
        v7 = sub_531DD2(lpFileName, 5395539, v11);
        if (!v7)
            return 0;
        v8 = sub_531F6F(lpFileName, v12);
        sub_532022(lpFileName, v7, v8);
        sub_531FA4(lpFileName, v12, v7);
        v9 = (void*)sub_531F0B(lpFileName, v7, 0);
        if (!v9)
            return 0;
        qmemcpy(v9, (const void*)a2, v11);
    }
    return v7;
}

//----- (005394A6) --------------------------------------------------------
int __thiscall sub_5394A6(LPCSTR lpFileName, int a2)
{
    int v2; // edi
    int v4; // eax
    int v5; // esi
    int v6; // eax
    int v7; // eax
    void* v8; // esp
    int v9; // ebx
    int v10; // eax
    void* v11; // eax
    int v13; // eax
    int v14; // [esp-4h] [ebp-1Ch]
    _DWORD v15[2]; // [esp+0h] [ebp-18h] BYREF
    int v16; // [esp+8h] [ebp-10h] BYREF
    int v17; // [esp+Ch] [ebp-Ch]
    int v18; // [esp+10h] [ebp-8h]
    LPCSTR lpFileNamea; // [esp+14h] [ebp-4h]

    v2 = a2;
    lpFileNamea = lpFileName;
    if (!a2)
        return 0;
    v4 = sub_538F86(lpFileName);
    v17 = v4;
    if (!v4)
        return 0;
    v18 = sub_53206B(lpFileName, v4, 1398033734);
    if (!v18)
    {
        v5 = sub_531DD2(lpFileName, 1398033734, 0);
        v18 = v5;
        if (!v5)
            return 0;
        v6 = sub_531F6F(lpFileName, v17);
        sub_532022(lpFileName, v5, v6);
        sub_531FA4(lpFileName, v17, v5);
    }
    sub_5320FB(0, -1, &a2, v2 + 8, 32);
    a2 += 8;
    v7 = a2 + 3;
    LOBYTE(v7) = (a2 + 3) & 0xFC;
    v8 = alloca(v7);
    v15[0] = *(_DWORD*)(v2 + 4);
    v15[1] = *(_DWORD*)(v2 + 40);
    sub_5320FB(&v16, -1, 0, v2 + 8, 32);
    v9 = sub_53209D(v18, (char*)&loc_544D44 + 2, v15, a2);
    if (!v9)
    {
        v10 = sub_531DD2(lpFileNamea, (int)&loc_544D44 + 2, a2);
        v9 = v10;
        if (!v10)
            return 0;
        v11 = (void*)sub_531F0B(lpFileNamea, v10, 0);
        if (!v11)
            return 0;
        v14 = v18;
        qmemcpy(v11, v15, a2);
        v13 = sub_531F6F(lpFileNamea, v14);
        sub_532022(lpFileNamea, v9, v13);
        sub_531FA4(lpFileNamea, v18, v9);
    }
    return v9;
}
// 53209D: using guessed type _DWORD __stdcall sub_53209D(_DWORD, _DWORD, _DWORD, _DWORD);
// 5320FB: using guessed type _DWORD __cdecl sub_5320FB(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (0054CD5D) --------------------------------------------------------
int __cdecl LoadFile_SKL(char* fileName)
{
    int i; // [esp+0h] [ebp-4h]
    int v3; // [esp+0h] [ebp-4h]

    ToLowString(fileName);
    for (i = 0; i < lastBuffSKL_i; ++i)
    {
        if (!strncmp(fileName, (const char*)(132 * i + dword_6587A0), 32u))
            return i;
    }
    if (lastBuffSKL_i == buffSize_SKL)
        fatalError(aSkelListOverfl);
    v3 = lastBuffSKL_i;
    sub_54A3B4((_DWORD*)(dword_6587A0 + 132 * lastBuffSKL_i + 36), fileName);
    strncpy((char*)(132 * v3 + dword_6587A0), fileName, 32u);
    ++lastBuffSKL_i;
    return v3;
}
// 6587A0: using guessed type int dword_6587A0;
// 6587A4: using guessed type int lastBuffSKL_i;
// 6587A8: using guessed type int buffSize_SKL;

//----- (0054EE64) --------------------------------------------------------
int __cdecl sub_54EE64(int a1, const char* fileName)
{
    int v2; // eax
    _WORD* v4; // [esp+Ch] [ebp-E0h] BYREF
    __int16 v5; // [esp+10h] [ebp-DCh]
    int v6; // [esp+14h] [ebp-D8h]
    __int16 v7; // [esp+18h] [ebp-D4h] BYREF
    char modelPath[128]; // [esp+1Ch] [ebp-D0h] BYREF
    int v9[3]; // [esp+9Ch] [ebp-50h] BYREF
    int v10; // [esp+A8h] [ebp-44h]
    int i; // [esp+ACh] [ebp-40h]
    char v12[52]; // [esp+B0h] [ebp-3Ch] BYREF
    int v13; // [esp+E4h] [ebp-8h]
    int v14; // [esp+E8h] [ebp-4h]

    strcpy(modelPath, "models\\");
    strcat(modelPath, fileName);
    if (!strcmp((const char*)&v7 + strlen(modelPath) + 1, ".d2")
        || !strcmp((const char*)&v7 + strlen(modelPath) + 1, ".r2"))
    {
        strcpy((char*)&v7 + strlen(modelPath) + 1, ".pml");
    }
    v2 = someLoadFile(modelPath, (int)v9);
    v4 = (_WORD*)v2;
    v9[2] = *(_DWORD*)v2;
    v4 = (_WORD*)(v2 + 4);
    v7 = *(_WORD*)(v2 + 4);
    v4 = (_WORD*)(v2 + 6);
    v5 = *(_WORD*)(v2 + 6);
    v4 = (_WORD*)(v2 + 8);
    *(_WORD*)(a1 + 48) = *(_WORD*)(v2 + 8);
    *(_WORD*)(a1 + 56) = *++v4;
    v9[1] = *(_DWORD*)++v4;
    v4 += 2;
    v14 = *(_DWORD*)v4;
    v4 += 2;
    *(_DWORD*)(a1 + 64) = (v14 & 1) != 0;
    *(_DWORD*)(a1 + 52) = maybe_allocateMemory(8 * *(unsigned __int16*)(a1 + 48));
    *(_DWORD*)(a1 + 60) = maybe_allocateMemory(4 * *(unsigned __int16*)(a1 + 56));
    *(_DWORD*)(a1 + 8) = 1259902591;
    *(_DWORD*)(a1 + 16) = 1259902591;
    *(_DWORD*)(a1 + 24) = 1259902591;
    *(_DWORD*)(a1 + 12) = -887581057;
    *(_DWORD*)(a1 + 20) = -887581057;
    *(_DWORD*)(a1 + 28) = -887581057;
    v13 = *(_DWORD*)(a1 + 52);
    v10 = 0;
    while (v10 < *(unsigned __int16*)(a1 + 48))
    {
        sub_54EBD0(v13, (const void**)&v4, (float*)a1);
        ++v10;
        v13 += 8;
    }
    for (i = 0; i < *(unsigned __int16*)(a1 + 56); ++i)
    {
        sub_57C92D(v12, &v4);
        v6 = sub_56E252((int)v12, 0);
        *(_DWORD*)(*(_DWORD*)(a1 + 60) + 4 * i) = *(_DWORD*)(v6 + 44);
    }
    sub_560D74(
        a1,
        *(float*)(a1 + 8),
        *(float*)(a1 + 12),
        *(float*)(a1 + 16),
        *(float*)(a1 + 20),
        *(float*)(a1 + 24),
        *(float*)(a1 + 28));
    return sub_53F213();
}
// 57C92D: using guessed type _DWORD __cdecl sub_57C92D(_DWORD, _DWORD);

//----- (004D03AB) --------------------------------------------------------
int __cdecl loadSprite(int a1, const char* a2)
{
    int result; // eax
    int i; // [esp+8h] [ebp-134h]
    _WORD* v4; // [esp+18h] [ebp-124h]
    int v5; // [esp+24h] [ebp-118h]
    _WORD* v6; // [esp+28h] [ebp-114h]
    char Buffer[256]; // [esp+2Ch] [ebp-110h] BYREF
    _WORD* v8; // [esp+12Ch] [ebp-10h]
    int v9; // [esp+130h] [ebp-Ch]
    int v10; // [esp+134h] [ebp-8h]
    int v11; // [esp+138h] [ebp-4h] BYREF

    sprintf(Buffer, "bitmaps\\%s", a2);
    v9 = someLoadFile(Buffer, (int)&v11);
    v6 = (_WORD*)(v9 + 12);
    if (*(_BYTE*)v9 == 66 || *(_BYTE*)(v9 + 1) == 67)
    {
        v10 = *(__int16*)(v9 + 8) * *(__int16*)(v9 + 6);
        *(_DWORD*)a1 = *(__int16*)(v9 + 6);
        *(_DWORD*)(a1 + 4) = *(__int16*)(v9 + 8);
        *(_DWORD*)(a1 + 8) = v6;
        v8 = v6;
        v4 = v6;
        for (i = 0; i < v10; ++i)
        {
            *v4 = (((int)(unsigned __int16)*v4 >> 10) & 0x1F)
                + 32 * (((int)(unsigned __int16)*v4 >> 5) & 0x1F)
                + ((*v4 & 0x1F) << 10)
                + (((((int)(unsigned __int16)*v4 >> 10) & 0x1F | ((int)(unsigned __int16)*v4 >> 5) & 0x1F | *v4 & 0x1F) != 0) << 15);
            ++v4;
        }
        *(_DWORD*)(a1 + 8) = maybe_allocateMemory(2 * *(__int16*)(v9 + 8) * *(__int16*)(v9 + 6));
        qmemcpy(*(void**)(a1 + 8), v6, 2 * *(__int16*)(v9 + 8) * *(__int16*)(v9 + 6));
        sub_53F213();
        result = v5;
    }
    else
    {
        writeDebug(aSprFileNotVali);
        result = dword_622C58;
    }
    return result;
}
// 4D05DA: variable 'v5' is possibly undefined
// 622C58: using guessed type int dword_622C58;

//----- (0053F37A) --------------------------------------------------------
void sub_53F37A()
{
    FILE* Stream; // [esp+0h] [ebp-4h]

    if (someLoopVarIndicator == 1)
    {
        someLoopVarIndicator = 0;
        sub_53F213();
    }
    if (someLoopVarIndicator == 2)
    {
        Stream = fopen(dword_5BE59C, aWb_0);
        writeInFile(&ElementSize, 1u, 4u, Stream);
        writeInFile(&unk_66BC00, ElementSize, 0x48u, Stream);
        writeInFile(dword_66738C, dword_5BE598, 1u, Stream);
        sub_584E87(dword_66738C);
        fclose(Stream);
        someLoopVarIndicator = 0;
    }
}
// 5BE5A0: using guessed type int dword_5BE5A0;

//----- (0053F4F6) --------------------------------------------------------
int __cdecl sub_53F4F6(const char* a1, _DWORD* a2)
{
    signed int i; // [esp+14h] [ebp-4h]

    for (i = 0; ; ++i)
    {
        if (i >= (int)ElementSize)
            fatalError(aCantLoadCacheB);
        if (!strcmp((const char*)&unk_66BC00 + 72 * i, a1))
            break;
    }
    *a2 = dword_66BC44[18 * i];
    return dword_66BC40[18 * i] + dword_6673DC;
}
// 6673DC: using guessed type int dword_6673DC;
// 66BC40: using guessed type int dword_66BC40[];

//----- (00537570) --------------------------------------------------------
int __cdecl sub_537570(int a1, const void** a2, unsigned int a3)
{
    int v3; // ebx
    char* v4; // eax
    int v5; // edi
    void* v6; // edi
    unsigned int v7; // eax
    const void* v8; // esi
    int v9; // edi
    int v11[31]; // [esp+Ch] [ebp-98h] BYREF
    int v12[4]; // [esp+88h] [ebp-1Ch] BYREF
    int v13; // [esp+98h] [ebp-Ch] BYREF
    int v14; // [esp+9Ch] [ebp-8h]
    unsigned int i; // [esp+A0h] [ebp-4h]
    char* v16; // [esp+ACh] [ebp+8h]

    v3 = a1;
    (*(void(__stdcall**)(int))(*(_DWORD*)a1 + 4))(a1);
    v12[0] = 4096;
    v12[1] = 0x10000;
    v4 = (char*)*a2;
    v12[2] = 0;
    v12[3] = 0;
    v16 = v4;
    while (v3)
    {
        memset(v11, 0, sizeof(v11));
        v11[0] = 124;
        v5 = (*(int(__stdcall**)(int, _DWORD, int*, int, _DWORD))(*(_DWORD*)v3 + 100))(v3, 0, v11, 1, 0);
        if (v5 < 0)
        {
            (*(void(__stdcall**)(int))(*(_DWORD*)v3 + 8))(v3);
            return v5;
        }
        if ((v11[1] & 0x80000) != 0)
        {
            if ((unsigned int)&v16[v11[4]] > a3)
                goto LABEL_13;
            qmemcpy((void*)v11[9], v16, v11[4]);
            v16 += v11[4];
        }
        else
        {
            v6 = (void*)v11[9];
            v7 = (unsigned int)(v11[21] * v11[3]) >> 3;
            v14 = v11[9];
            if ((unsigned int)&v16[v11[2] * v7] > a3)
            {
            LABEL_13:
                (*(void(__stdcall**)(int, _DWORD))(*(_DWORD*)v3 + 128))(v3, 0);
                (*(void(__stdcall**)(int))(*(_DWORD*)v3 + 8))(v3);
                return -931722278;
            }
            for (i = 0; i < v11[2]; v14 += v11[4])
            {
                v8 = v16;
                v16 += v7;
                qmemcpy(v6, v8, v7);
                v6 = (void*)(v11[4] + v14);
                ++i;
            }
        }
        (*(void(__stdcall**)(int, _DWORD))(*(_DWORD*)v3 + 128))(v3, 0);
        v9 = (*(int(__stdcall**)(int, int*, int*))(*(_DWORD*)v3 + 48))(v3, v12, &v13);
        (*(void(__stdcall**)(int))(*(_DWORD*)v3 + 8))(v3);
        v3 = 0;
        if (v9 >= 0)
            v3 = v13;
    }
    *a2 = v16;
    return 0;
}

//----- (00537A31) --------------------------------------------------------
unsigned __int8* __cdecl sub_537A31(unsigned __int8* a1, int a2, int a3, _DWORD* a4)
{
    int v4; // eax
    unsigned __int16 v5; // dx
    unsigned __int16 v6; // cx
    unsigned __int8 v7; // al
    int v8; // eax
    int v9; // ebx
    unsigned __int8* v10; // ecx
    int v11; // edx
    int v12; // eax
    int v13; // ecx
    unsigned __int8* v14; // ecx
    unsigned int v15; // eax
    _BYTE* v16; // ecx
    unsigned __int8* result; // eax
    bool v18; // zf
    unsigned __int8 v19; // al
    unsigned __int16 v21; // ax
    int v22; // edi
    int v23; // edx
    int v24; // edi
    int v25; // eax
    int v26; // ecx
    int v27; // [esp+14h] [ebp+8h]

    v4 = *(_BYTE*)(a3 + 2) & 3;
    if (v4 == 1)
    {
        v5 = *(_WORD*)(a3 + 3);
        v6 = *a1;
        if (v6 >= v5)
        {
            if (*a1 >= *(unsigned __int16*)(a3 + 5) + v5)
                v6 = *(_WORD*)(a3 + 5) + v5 - 1;
        }
        else
        {
            v6 = *(_WORD*)(a3 + 3);
        }
        v7 = *(_BYTE*)(a3 + 7);
        if (v7 >= 0xFu)
        {
            if (v7 <= 0x10u)
            {
                v16 = (_BYTE*)(a2 + 2 * (v6 - v5));
                v15 = 8 * (*v16 & 0x1F | (8 * (*v16 & 0xE0 | (((8 * (v16[1] & 0xFC | 0xFFFFFF80)) | v16[1] & 3) << 8))));
            }
            else
            {
                if (v7 != 24)
                {
                    if (v7 == 32)
                    {
                        v8 = v6 - v5;
                        v9 = 0;
                        BYTE1(v9) = *(_BYTE*)(a2 + 4 * v8 + 1);
                        v10 = (unsigned __int8*)(a2 + 4 * v8);
                        v11 = v10[2] << 16;
                        v12 = *v10;
                        v13 = v10[3] << 24;
                        if ((*(_BYTE*)(a3 + 17) & 1) != 0)
                            v13 = -16777216;
                        *a4 = v11 | v9 | v12 | v13;
                        return a1 + 1;
                    }
                    return a1;
                }
                v14 = (unsigned __int8*)(a2 + 2 * (v6 - v5) + v6 - v5);
                v15 = *v14 | ((v14[1] | ((v14[2] | 0xFFFFFF00) << 8)) << 8);
            }
            *a4 = v15;
            return a1 + 1;
        }
        return a1;
    }
    v18 = v4 == 2;
    v19 = *(_BYTE*)(a3 + 16);
    if (v18)
    {
        if (v19 < 0xFu)
            goto LABEL_28;
        if (v19 <= 0x10u)
        {
            *a4 = 8 * (*a1 & 0x1F | (8 * (*a1 & 0xE0 | ((a1[1] & 3 | (8 * (a1[1] & 0xFC | 0xFFFFFF80))) << 8))));
            return a1 + 2;
        }
        if (v19 == 24)
        {
            result = a1 + 3;
            *a4 = *a1 | ((a1[1] | ((a1[2] | 0xFFFFFF00) << 8)) << 8);
            return result;
        }
        if (v19 == 32)
        {
            LOBYTE(v21) = 0;
            HIBYTE(v21) = a1[1];
            v22 = a1[2];
            v23 = *a1;
            v27 = v21;
            v24 = v22 << 16;
            v25 = a1[3] << 24;
            if ((*(_BYTE*)(a3 + 17) & 0xF) != 8)
                v25 = -16777216;
            *a4 = v24 | v27 | v23 | v25;
            result = a1 + 4;
        }
        else
        {
        LABEL_28:
            result = a1;
        }
    }
    else
    {
        switch (v19)
        {
        case 8u:
            v26 = *a1;
            result = a1 + 1;
            break;
        case 0x10u:
            v26 = a1[1];
            result = a1 + 2;
            break;
        case 0x18u:
            v26 = a1[2];
            result = a1 + 3;
            break;
        default:
            v18 = v19 == 32;
            result = a1;
            if (!v18)
                return result;
            v26 = a1[3];
            result = a1 + 4;
            break;
        }
        *a4 = v26 | ((v26 | 0xFFFFFF00) << 16);
    }
    return result;
}

//----- (00538F68) --------------------------------------------------------
int __thiscall sub_538F68(const CHAR* this)
{
    int v2; // eax

    v2 = sub_531DCE();
    return sub_53209D(this, v2, 5391702, &unk_5972D8, 4u);
}

//----- (0053209D) --------------------------------------------------------
int __thiscall sub_53209D(const CHAR* this, int a2, int a3, const void* a4, unsigned int a5)
{
    int i; // eax
    int v6; // ebx
    int v7; // eax
    const void* v8; // eax

    for (i = sub_531F6F(this, a2); ; i = sub_531FED(this, v6))
    {
        v6 = i;
        if (!i)
            break;
        v7 = sub_531ED7(this, i);
        if (a3 == v7)
        {
            v8 = (const void*)sub_531F5F(this, v6, (int)&a2);
            if (a5 == a2 && !memcmp(a4, v8, a5))
                return v6;
        }
    }
    return 0;
}

//----- (005392C0) --------------------------------------------------------
int __thiscall sub_5392C0(const CHAR* this, int a2, unsigned int a3, int a4, int* a5)
{
    int* v5; // edi
    int v6; // ecx
    _DWORD* v7; // eax
    int v8; // esi
    int v9; // eax
    void* v10; // esp
    _DWORD* v11; // edi
    int* v12; // ebx
    int v13; // eax
    int v14; // eax
    _BYTE* v15; // eax
    _BYTE* v16; // ebx
    int result; // eax
    unsigned int v18; // ecx
    int* v19; // esi
    _BYTE* v20; // edi
    char v21; // al
    int* v22; // edi
    int* v23; // esi
    int v24; // [esp+0h] [ebp-10h] BYREF
    int v25; // [esp+4h] [ebp-Ch] BYREF
    LPCSTR lpFileName; // [esp+Ch] [ebp-4h]
    int v27; // [esp+18h] [ebp+8h]

    v5 = a5;
    lpFileName = this;
    v6 = 0;
    if (a5)
    {
        v7 = (_DWORD*)a5[3];
        while (v7)
        {
            v7 = (_DWORD*)*v7;
            ++v6;
        }
    }
    v8 = 4 * v6 + 4;
    v9 = 4 * v6 + 7;
    LOBYTE(v9) = v9 & 0xFC;
    v10 = alloca(v9);
    a5 = &v24;
    if (a4)
    {
        v24 = sub_5393B4(lpFileName, a4);
        if (!v24)
            return 0;
    }
    else
    {
        v24 = 0;
    }
    if (v5)
    {
        v11 = (_DWORD*)v5[3];
        v12 = &v25;
        while (v11)
        {
            v13 = sub_5394A6(lpFileName, (int)v11);
            *v12++ = v13;
            if (!v13)
                return 0;
            v11 = (_DWORD*)*v11;
        }
    }
    sub_5320FB(0, -1, &a4, a3, 236);
    v14 = sub_531DD2(lpFileName, a2, v8 + a4);
    v27 = v14;
    if (!v14)
        return 0;
    v15 = (_BYTE*)sub_531F0B(lpFileName, v14, 0);
    v16 = v15;
    if (!v15)
        return 0;
    sub_5320FB(v15, -1, 0, a3, 236);
    v18 = v8;
    v19 = a5;
    v20 = &v16[a4];
    v21 = v18;
    v18 >>= 2;
    qmemcpy(&v16[a4], a5, 4 * v18);
    v23 = &v19[v18];
    v22 = (int*)&v20[4 * v18];
    LOBYTE(v18) = v21;
    result = v27;
    qmemcpy(v22, v23, v18 & 3);
    return result;
}

//----- (00531DCE) --------------------------------------------------------
int sub_531DCE()
{
    return 8;
}

//----- (00531F5F) --------------------------------------------------------
int __thiscall sub_531F5F(const CHAR* this, int a2, int a3)
{
    return sub_531F0B(this, a2, a3);
}

//----- (005320FB) --------------------------------------------------------
int __cdecl sub_5320FB(_BYTE* a1, int a2, _DWORD* a3, unsigned int a4, int a5)
{
    _BYTE* v7; // eax
    _BYTE* v8; // ebx
    int v9; // edi
    _BYTE* v10; // esi
    unsigned int v11; // [esp+18h] [ebp+Ch]
    unsigned int v12; // [esp+20h] [ebp+14h]

    if (!a4)
        return -2147024809;
    v7 = a1;
    if (a2 == -1)
        v12 = -1;
    else
        v12 = (unsigned int)&a1[a2];
    v8 = (_BYTE*)a4;
    v11 = a4 + a5;
    if (a4 < a4 + a5)
    {
    LABEL_7:
        if ((unsigned int)v7 >= v12)
            return -2147467259;
        v9 = 0;
        if (a1)
            *v7 = 0;
        v10 = v7++;
        while ((unsigned int)v8 < v11)
        {
            if (*v8)
            {
                if ((unsigned int)v7 >= v12)
                    return -2147467259;
                if (a1)
                {
                    *v7 = *v8;
                    *v10 |= 1 << v9;
                }
                ++v7;
            }
            ++v9;
            ++v8;
            if (v9 >= 8)
            {
                if ((unsigned int)v8 < v11)
                    goto LABEL_7;
                break;
            }
        }
    }
    if (a3)
        *a3 = v7 - a1;
    return 0;
}