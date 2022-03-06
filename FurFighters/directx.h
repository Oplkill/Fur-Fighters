#pragma once

#include "defs.h"
#include <Windows.h>

extern int dword_6673E0; // weak

void __stdcall getDirectXErrorName(int a1, size_t BufferCount, char* Buffer);
[[noreturn]] void __cdecl throwDirectXError(int a1);
HRESULT __cdecl sub_52027C(_DWORD* a1);
HRESULT __cdecl sub_523C7A(HINSTANCE a1);
int __cdecl sub_51A4CE(int a1, int a2, int a3);