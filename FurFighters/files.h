#pragma once

#include "defs.h"

int __cdecl someLoadFile(char* FileName, int); // idb
int __cdecl readBitmapTga(char* FileName); // idb
size_t __cdecl loadCHBfile(char* FileName);
int __cdecl sub_53F1EB(char* FileName, int, int, int); // idb
size_t __cdecl sub_53F42B(char* FileName);
int __cdecl loadBitmapFile(const char* fileName); // idb
int __cdecl showTGAImageTimed(const char* fileName, int seconds); // idb
__int16 __cdecl sub_56EDB7(char* FileName, int a2);
__int16 __cdecl sub_56EF1B(char* FileName, int a2);
int __cdecl sub_56F079(int, FILE* Stream); // idb
int __cdecl sub_56F226(int, FILE* Stream); // idb
__int16 __cdecl someReadFile(FILE* Stream);
FILE* __cdecl sub_56F5F2(char* FileName, int a2);
size_t __cdecl writeInFile(void* Buffer, size_t ElementSize, size_t ElementCount, FILE* Stream);
size_t __cdecl readFromFile(void* Buffer, size_t ElementSize, size_t ElementCount, FILE* Stream);
int __cdecl sub_47B4F4(char* FileName);
int __cdecl loadItemsInfo(char* FileName);
unsigned int __thiscall sub_531BAF(int this, LPCSTR lpFileName);
int __thiscall sub_531DA8(LPCSTR lpFileName); // idb
int __thiscall sub_531DD2(LPCSTR lpFileName, int, int); // idb
int __thiscall sub_531ED7(LPCSTR lpFileName, int); // idb
int __thiscall sub_531F0B(LPCSTR lpFileName, int, int); // idb
int __thiscall sub_531F6F(LPCSTR lpFileName, int); // idb
void __thiscall sub_531FA4(LPCSTR lpFileName, int a2, int a3);
int __thiscall sub_531FED(LPCSTR lpFileName, int); // idb
void __thiscall sub_532022(LPCSTR lpFileName, int a2, int a3);
int __thiscall sub_53206B(LPCSTR lpFileName, int, int); // idb
int __cdecl sub_5376E7(char* FileName, int, int, int, int, int, int); // idb
unsigned int __cdecl sub_537C6D(char* FileName, int a2, int a3, int a4, int a5);
int __thiscall sub_5389A8(LPCSTR lpFileName); // idb
int __thiscall sub_538A45(LPCSTR lpFileName, int, int); // idb
int __thiscall sub_538CD1(LPCSTR lpFileName, int, int); // idb
int __thiscall sub_538F86(LPCSTR lpFileName); // idb
int __thiscall sub_538FEF(LPCSTR lpFileName, int, int, int); // idb
int __thiscall sub_539238(LPCSTR lpFileName, int, int, int); // idb
int __thiscall sub_5393B4(LPCSTR lpFileName, int); // idb
int __thiscall sub_5394A6(LPCSTR lpFileName, int); // idb
int __cdecl LoadFile_SKL(char* fileName); // idb
int __cdecl sub_54EE64(int a1, const char* fileName); // idb
int __cdecl loadSprite(int a1, const char* a2);
void sub_53F37A();
int __cdecl sub_53F4F6(const char* a1, _DWORD* a2);
int __cdecl sub_537570(int a1, const void** a2, unsigned int a3);
unsigned __int8* __cdecl sub_537A31(unsigned __int8* a1, int a2, int a3, _DWORD* a4);
int __thiscall sub_538F68(const CHAR* this);
int __thiscall sub_53209D(const CHAR* this, int a2, int a3, const void* a4, unsigned int a5);
int __thiscall sub_5392C0(const CHAR* this, int a2, unsigned int a3, int a4, int* a5);
int sub_531DCE();
int __thiscall sub_531F5F(const CHAR* this, int a2, int a3);
int __cdecl sub_5320FB(_BYTE* a1, int a2, _DWORD* a3, unsigned int a4, int a5);