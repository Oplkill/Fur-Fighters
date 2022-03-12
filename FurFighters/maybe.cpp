#include "maybe.h"

//----- (0056ECAB) --------------------------------------------------------
int maybe_wait()
{
    sub_56975B();
    (*(void(__thiscall**)(int, int, _DWORD, int, _DWORD, int, _DWORD))(*(_DWORD*)dword_60FE68 + 20))(
        dword_60FE68,
        dword_60FE68,
        0,
        dword_5BFFA8,
        0,
        0x1000000,
        0);
    sub_568FB1();
    return sub_569765();
}
// 5BFFA8: using guessed type int dword_5BFFA8;
// 60FE68: using guessed type int dword_60FE68;


//----- (005624E0) --------------------------------------------------------
int __cdecl maybe_allocateMemory(int a1)
{
    int v2; // [esp+0h] [ebp-4h]

    v2 = dword_6687A4;
    if (dword_622BC4 != dword_6687A4)
    {
        if (dword_6687A4 - dword_622BC4 >= 0)
            writeDebug(
                "\n\rUnaccounted MALLOCing of %d bytes - %dfree\n\r",
                dword_6687A4 - dword_622BC4,
                dword_6687A0 + dword_66879C - dword_6687A4 - a1);
        else
            writeDebug(
                "\n\rUnaccounted FREEing of %d bytes - %dfree\n\r",
                dword_622BC4 - dword_6687A4,
                dword_6687A8 - dword_6687A4 - a1);
    }
    dword_6687A4 += (a1 + 7) & 0xFFFFFFF8;
    dword_622BC4 = dword_6687A4;
    if (dword_6687A4 > (unsigned int)dword_6687A8)
    {
        writeDebug("\nToo short by %d bytes (min)", dword_6687A4 - dword_6687A8);
        fatalError("OUT OF MALLOC SPACE!");
    }
    return v2;
}
// 622BC4: using guessed type int dword_622BC4;
// 66879C: using guessed type int dword_66879C;
// 6687A0: using guessed type int dword_6687A0;
// 6687A4: using guessed type int dword_6687A4;
// 6687A8: using guessed type int dword_6687A8;

//----- (0047B5A5) --------------------------------------------------------
//����� ������ �� ����������� ������?
int __cdecl sub_47B5A5(char* String1)
{
    int i; // [esp+0h] [ebp-4h]

    for (i = 0; i < 72; ++i)
    {
        if (!_strcmpi(String1, (&off_5A3908)[3 * i]))
            return i;
    }
    return -1;
}
// 5A3908: using guessed type char *off_5A3908;

//----- (00438E31) --------------------------------------------------------
int __cdecl maybeLoadDialog(const char* a1)
{
    int result; // eax
    int v2; // [esp+8h] [ebp-28h] BYREF
    const void* v3; // [esp+Ch] [ebp-24h]
    char Buffer[32]; // [esp+10h] [ebp-20h] BYREF

    sprintf(Buffer, "%s%s", a1, off_59E4B4[languageId]);
    writeDebug("Loading Dialogue data ...");
    v3 = (const void*)someLoadFile(Buffer, (int)&v2);
    dword_6045CC = maybe_allocateMemory(v2);
    qmemcpy((void*)dword_6045CC, v3, v2);
    result = sub_53F213();
    dword_605CAC = 0;
    dword_605D04 = 0;
    return result;
}
// 53F213: using guessed type int sub_53F213(void);
// 5624E0: using guessed type _DWORD __cdecl maybe_allocateMemory(_DWORD);
// 59E4B4: using guessed type char *off_59E4B4[5];
// 6045CC: using guessed type int dword_6045CC;
// 6045D4: using guessed type int languageId;
// 605CAC: using guessed type int dword_605CAC;
// 605D04: using guessed type int dword_605D04;