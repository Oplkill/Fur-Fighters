#pragma once

#include "defs.h"
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