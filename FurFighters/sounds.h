#pragma once

#include "defs.h"
#include "MSS.H"

extern BYTE g_SoundProviderId; // idb
extern int sound3DProvider; // weak
extern char* sound3DProviderName; // weak
extern H3DSAMPLE sound3DSampleHandle[108]; // idb
extern int sound3DSampleCount; // weak
extern int isMusicDisabled; // weak
extern int isSoundDisabled; // weak
extern BYTE g_SpeakerTypeId; // idb
extern char isEAXSoundProviderLoaded; // weak
extern int numSound3DSampleHandles; // weak
extern char is3DSoundEnabled; // weak
extern int g_NumAudioProviders; // weak
extern int g_maybeSoundsPlayBackRates[385]; // idb
extern int dword_6AE810; // weak
extern int ailSoundTimerId; // weak
extern char g_MaybeIsAllSoundDisabled; // weak
extern HDIGDRIVER dword_6ADA20; // weak
extern int g_IsSoundProviderClosed; // weak
extern int g_UselessVariable2; // weak
extern int dword_6ADA24; // weak
extern int dword_6ADA28; // weak
extern char byte_5CB98A; // weak
extern char byte_5CB98B; // weak
extern char byte_5CB988; // weak
extern char byte_5CB989; // weak
extern int dword_5A0120; // weak
extern int dword_5A0128; // weak
extern FILE* dword_5A0118; // idb
extern FILE* dword_5A0130; // idb
extern int dword_5A0138; // weak
extern char byte_6AE841; // weak
extern int dword_5B50E4; // weak
extern int dword_6AE844; // weak
extern int dword_60674C; // weak
extern int dword_606748; // weak
extern int dword_6067A4; // weak
extern int dword_6AD9C8[]; // weak

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
void __cdecl maybe_setSound3DRoomType2(int a1);
void __cdecl maybe_setSound3DRoomType(int a1);
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
int loadAudioDevices();
int __cdecl sub_581CBF(int a1);
int __cdecl sub_581D41(const char* a1);
int sub_581F00();
int __cdecl sub_5822FE(int a1);
void sub_582C46();
int sub_45D78F();
int __cdecl sub_57F2B8(int a1, int a2);
void maybeSoundRelease();
void maybeSoundInit();
void maybeSoundRelease2();
void sub_581090();
void sub_582915();
void sub_57E98F();
int sub_58273D();
void sub_583213();
int maybeSoundInit2();
int sub_57E8A0();
int sub_45CF8C();
void __cdecl sub_45D106(int a1);
__int16 __cdecl sub_45DFCE(int a1, FILE* Stream, int a3, wctype_t Type);
int __cdecl sub_57F07D(__int16 a1, char a2);
int __cdecl sub_57E95F(__int16 a1, char a2);
__int16 __cdecl sub_57F848(int a1);
int __cdecl sub_57FBCF(__int16 a1);
int __cdecl sub_57FC47(int a1);
int __cdecl sub_580681(__int16 a1, int a2, int a3);
int __cdecl sub_58079B(__int16 a1);
void sub_580FB2();
int sub_5822AE();
int sub_58236B();
int __cdecl sub_5823BE(int a1, const char* fileResource, void* a3); // idb
int maybeClearDialogBankData();
int sub_439174();
int sub_438DD2();
int sub_438C3A();
int __cdecl sub_57EFC8(__int16 a1, unsigned __int16 a2);
int __cdecl sub_57F55F(int a1, int a2, unsigned __int8 a3, int a4);
void sub_5827C4();
int sub_5834A8();
int sub_5834C6();
int __cdecl maybe_startMusic(unsigned __int8 a1);
int sub_5835EC();
void sub_5836F8();
void sub_583776();
int __cdecl sub_58383D(int a1, int a2);
int __cdecl sub_5838B2(int a1);
int __cdecl sub_5838D9(int a1, unsigned __int8 a2);
BOOL __cdecl sub_583941(int a1);
int __cdecl sub_5833E3(int a1, int a2);
int __cdecl sub_58355A(unsigned __int8 a1);
int sub_582772();