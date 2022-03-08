#pragma once

#include "defs.h"
#include <Windows.h>

int some_init();
void __noreturn someCloseGame();
int __cdecl maybe_NewGame(int); // weak