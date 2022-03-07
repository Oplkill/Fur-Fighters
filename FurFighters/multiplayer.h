#pragma once

#include "defs.h"
#include "FakeDP.h"
#include <Windows.h>

extern int g_MultiplayerMaxPlayers; // weak
extern LPCVOID pMem; // idb

int __cdecl sub_51E347(HINSTANCE a1);
void __cdecl unloadGame(); // idb
void sub_523838();
INT_PTR __stdcall sub_51EF7A(HWND, UINT, WPARAM, LPARAM); // idb
int __cdecl sub_51ED34(HWND hDlg); // idb
int __cdecl sub_51FDEE(int a1, int a2);
int sub_51E443();
int __cdecl sub_51E8EB(HWND hDlg); // idb
LPARAM sub_52046E();
int __cdecl sub_521286(const char* a1);
int __cdecl sub_5216ED(int a1);
int sub_5219C6();
int __cdecl sub_521CF3(unsigned int a1);
int sub_521D56();
int __cdecl sub_521F00(int a1, int a2);
int sub_5236FF();
void sub_5240DD();
int __cdecl sub_52A03C(int a1, _DWORD* a2);
FakeDP* __thiscall sub_520820(FakeDP* this, char a2);
void sub_52097E();
int sub_520AD4();
int sub_520ACA();
int __cdecl sub_520E43(_DWORD* a1, int a2, int a3, unsigned int a4);
int sub_5215A6();
DWORD __stdcall StartAddress(LPVOID lpThreadParameter); // idb
int __cdecl sub_52A4C2(int a1);
int __cdecl sub_52A880(unsigned int a1, int a2, int a3);
int __cdecl sub_52A908(int a1);
int __cdecl sub_52A985(int a1);
int sub_52AA53();
int __cdecl sub_52AB78(_DWORD* a1);
int __cdecl sub_52B65C(int a1, int a2, int a3, const void* a4, int a5);
int __cdecl sub_52B7C0(int a1, int a2, int a3);
int __cdecl sub_52B856(int a1, int a2);
int __cdecl sub_52B8EE(int a1, __int16 a2, int* a3, int* a4);
int __cdecl sub_52B9B4(int a1, int a2, int a3);
int __cdecl sub_52BA4A(int a1);
int __cdecl sub_52BAD5(int a1, int a2, int a3);
int __cdecl sub_52BC50(int a1, int a2);
int sub_52BCE5();
int __cdecl sub_52BD70(int a1, int a2);
int sub_52BE05();
int sub_52BE83();
int __cdecl sub_52BF87(int a1, int a2);
int __cdecl sub_52C0FC(_DWORD* a1, _DWORD* a2, int a3, _DWORD* a4, unsigned __int16 a5);
int __cdecl sub_52C211(int a1);
int sub_52C2E3();
int __cdecl sub_52C36C(__int16 a1);
int sub_52C3E2();