#pragma once

void __stdcall getDirectXErrorName(int a1, size_t BufferCount, char* Buffer);
[[noreturn]] void __cdecl throwDirectXError(int a1);