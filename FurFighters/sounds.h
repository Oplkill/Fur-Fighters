#pragma once

#include "defs.h"

extern BYTE g_SoundProviderId; // idb
extern int sound3DProvider; // weak
extern int sound3DProviderName; // weak
extern int soundSampleHandle[20]; // idb
extern int sound3DSampleHandle[108]; // idb
extern int sound3DSampleCount; // weak
extern int isMusicDisabled; // weak
extern int isSoundDisabled; // weak
extern BYTE g_SpeakerTypeId; // idb
extern char isEAXSoundProviderLoaded; // weak
extern int numSound3DSampleHandles; // weak
extern char is3DSoundEnabled; // weak

int maybe_shutdownSound2();
int maybe_stopSounds2();
int __cdecl GetSoundMsCountFormatted();
__int16 maybe_openSound3DListener2();
int maybe_closeSound3DListener2();
void __cdecl maybe_setSound3DOrientation2(__int16 a1, float* a2, float* a3);
int __cdecl getSound3DSampleVolume(__int16 a1);
int __cdecl maybe_setSound3DUserData(__int16, float); // idb
int maybe_isOneOfSoundsInStatus_2();
int maybe_stopSounds();
int __cdecl maybe_setSound3DPlaybackRate2(__int16 a1, unsigned __int16 a2);
int __cdecl maybe_setSound3DPlaybackRate(int a1, unsigned __int16 a2);
int __cdecl maybe_setSound3DVolume2(__int16 a1, unsigned __int8 a2);
int __cdecl maybe_setSound3DVolume(int a1, unsigned __int8 a2);
int __cdecl maybe_setSound3DPosition2(int a1, _DWORD* a2);
int __cdecl maybe_setSound3DVelocityVec2(int a1, float* a2);
int __cdecl maybe_setSound3DDistance(int a1, int a2);
int __cdecl maybe_setSound3DRoomType2(int a1);
int __cdecl maybe_setSound3DRoomType(int a1);
int maybe_shutdownSound();
void tryInitSoundSampleHandles();
int releaseAllSoundSampleHandles();
int releaseSoundSamples();
int releaseSound3DSamples();
char* __cdecl GetSoundProviderName(int a1);
int CanOpenSoundProvider();
LSTATUS readRegisterSoundSettings();
LSTATUS setRegisterSoundSettings();
int readSoundSettings_isSoundsDisabled();
int checkIs3DSoundIsSupported();
int getSound3dSampleCount();
void initSoundTimer();
void startSoundTimer();
void stopSoundTimer();
void stopAllSounds3D();
void resumeAllSounds3D();
__int64 GetSoundMsCountFormatted2();
int __cdecl startSoundStream(int a1);
int __cdecl pauseSoundStream(int a1);
int __cdecl resumeSoundStream(int a1);
int* __cdecl maybe_closeStream(int a1);
int __cdecl maybe_startSoundStream(int a1, int a2);
int maybe_closeSound3DListener();
__int16 maybe_openSound3DListener();
int __cdecl maybe_setSound3DPosition(__int16 a1, _DWORD* a2);
int __cdecl maybe_setSound3DVelocityVec(__int16 a1, float* a2);
void __cdecl maybe_setSound3DOrientation(__int16 a1, float* a2, float* a3);
int sub_52CA1A();
int __cdecl sub_582375(int a1);
int sub_580D10();