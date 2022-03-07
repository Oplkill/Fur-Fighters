# Fur-Fighters
Fully reverse engineered source code from game Fur Fighters.

# Goals
* Reverse engineer all code right
* Make game close to original(except bugs)
* Replace old libraries by new one without regressions in game, if they dont works in new systems(new one shouldn't be worster than original and should be supporting in present time)

# Mini goals
* Add includes of standart functions to all files, where they using
* Remove all char constant variables and move their values into uses, IF they using only single time 
* Make launchable first game settings window
* Move away all code to their files from furfighters.exe.c
* Move repeatable magic numbers into enums

# Future goals (when previous goals achieved)
* Replace all old libraries by new one
* Make game plays with newest DirectX and OpenGL
* Make game works on Linux

# Info
* Code will be C++ with C parts of code
