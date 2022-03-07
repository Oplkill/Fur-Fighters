#pragma once

#include "defs.h"
#include <Windows.h>

extern int dword_6673E0; // weak
extern int numVideoDevicesOrModes; // weak
extern int numVideoDevices; // weak
extern __int16 g_RedBits; // weak
extern __int16 g_GreenBits; // weak
extern __int16 g_BlueBits; // weak

void __stdcall getDirectXErrorName(int a1, size_t BufferCount, char* Buffer);
[[noreturn]] void __cdecl throwDirectXError(int a1);
HRESULT __cdecl sub_52027C(_DWORD* a1);
HRESULT __cdecl sub_523C7A(HINSTANCE a1);
int __cdecl sub_51A4CE(int a1, int a2, int a3);
int __cdecl sub_568E33(int a1);
int sub_56905F();
int sub_5690D3();
int __cdecl sub_5752F3(int a1, int a2);
int sub_577C00();
int __cdecl checkAudioVideoDevices(int a1);
BOOL __stdcall Callback(GUID*, LPSTR, LPSTR, LPVOID, HMONITOR); // idb
int sub_56975B();
int __stdcall sub_568F8A(void* voidPrtVar = 0);