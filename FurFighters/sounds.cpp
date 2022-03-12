#include "sounds.h"

#include "tempplace.h"
#include "debug.h"
#include "globalVariables.h"
#include "utils.h"
#include "settings.h"

char aAurealA3dInter[28] = "Aureal A3D Interactive (TM)"; // weak
char aAurealA3dTm[14] = "Aureal A3D tm"; // weak
char aAurealA3d20Tm[20] = "Aureal A3D 2.0 (TM)"; // weak
char aAurealA3d20Tm_0[18] = "Aureal A3D 2.0 TM"; // weak
char aDolbySurround[15] = "Dolby Surround"; // weak
char aDolbySurround_0[15] = "Dolby Surround"; // weak
char aDirectsound3dH_0[31] = "DirectSound3D Hardware Support"; // weak
char aDirectsound3dH_1[23] = "DirectSound3D Hardware"; // weak
char aDirectsound3dS_0[33] = "DirectSound3D Software Emulation"; // weak
char aDirectSoundSof[22] = "Direct Sound Software"; // weak
char aDirectsound3d7[38] = "DirectSound3D 7+ Software - Full HRTF"; // weak
char aDirectsound3dS_1[33] = "DirectSound3D Software Full HRTF"; // weak
char aDirectsound3d7_0[39] = "DirectSound3D 7+ Software - Light HRTF"; // weak
char aDirectsound3dS_2[34] = "DirectSound3D Software Light HRTF"; // weak
char aDirectsound3d7_1[43] = "DirectSound3D 7+ Software - Pan and Volume"; // weak
char aFastDirectsoun[28] = "Fast DirectSound3D Software"; // weak
char aCreativeLabsEa_0[23] = "Creative Labs EAX (TM)"; // weak
char aCreativeLabsEa_1[21] = "Creative Labs EAX tm"; // weak
char aCreativeLabsEa_2[25] = "Creative Labs EAX 2 (TM)"; // weak
char aCreativeLabsEa_3[20] = "Creative Labs EAX 2"; // weak
char aMilesFast2dPos_0[31] = "Miles Fast 2D Positional Audio"; // weak
char aMilesFast2d[14] = "Miles Fast 2D"; // weak
char aRadGameToolsRs_0[28] = "RAD Game Tools RSX 3D Audio"; // weak
char aRadGameToolsRs_1[28] = "RAD Game Tools RSX 3D Audio"; // weak
CHAR aSoundprovider[] = "SoundProvider"; // idb
CHAR aSpeakertype[] = "SpeakerType"; // idb
CHAR aSoundprovider_0[] = "SoundProvider"; // idb
CHAR aSpeakertype_0[] = "SpeakerType"; // idb
char aSoundDebug[12] = "Sound Debug"; // weak
char aSoundDebug_0[12] = "Sound Debug"; // weak
const char* off_5B3798[5] =
{
  "Miles Fast 2D Positional Audio",
  "RAD Game Tools RSX 3D Audio",
  "DirectSound3D Software Emulation",
  "DirectSound3D Hardware Support",
  "Creative Labs EAX (TM)"
}; // weak
char aRedist[7] = "redist"; // weak
char aAwPoopsMilesSt[51] = "Aw poops. Miles Startup failed. Sound is disabled."; // weak
char aMaximumSupport[26] = "Maximum supported samples"; // weak
char aNullInvalidInd[47] = "NULL - Invalid Index in GetSoundProviderString"; // weak
char aStreaming[10] = "Streaming"; // weak
char aStreamingWasTu[43] = "Streaming was turned off via settings.txt."; // weak
char aSound_0[6] = "Sound"; // weak
char aSoundWasTurned[58] = "Sound was turned off via settings.txt. Sound is disabled."; // weak

int sound3DProvider; // weak
char* sound3DProviderName; // weak
BYTE g_SoundProviderId; // idb
HSAMPLE soundSampleHandle[20]; // idb
H3DSAMPLE sound3DSampleHandle[108]; // idb
int sound3DSampleCount; // weak
int isMusicDisabled; // weak
int isSoundDisabled; // weak
BYTE g_SpeakerTypeId; // idb
char isEAXSoundProviderLoaded; // weak
int numSound3DSampleHandles; // weak
char is3DSoundEnabled; // weak
int dword_6AE808; // weak
int g_NumAudioProviders; // weak
int g_maybeSoundsPlayBackRates[385]; // idb
int dword_6AE810; // weak
int dword_6ADA90[528]; // idb
char g_MaybeEnableSounds; // weak
int dword_6AE804; // weak
int ailSoundTimerId; // weak
char g_MaybeIsAllSoundDisabled; // weak
HDIGDRIVER dword_6ADA20; // weak
int g_IsSoundProviderClosed; // weak
int g_UselessVariable2; // weak
float dword_6AE64C[108]; // idb
int dword_6ADA24; // weak
int dword_6ADA28; // weak
char byte_5CB98A; // weak
char byte_5CB98B; // weak
char byte_5CB988; // weak
char byte_5CB989; // weak
int dword_5A0120 = 1073741824; // weak
int dword_5A0128 = 1082130432; // weak
FILE* dword_5A0118 = (FILE*)0x42000000; // idb
FILE* dword_5A0130 = (FILE*)0x42400000; // idb
int dword_5A0138 = 1115684864; // weak
char byte_6AE841; // weak
int dword_5B50E4 = 1061997773; // weak
int dword_6AE844; // weak
char byte_5A04B0 = '‘'; // weak
char byte_5A04B1 = 'x'; // weak
char byte_5A04B2 = 'd'; // weak
char byte_5A04B3 = 'ÿ'; // weak
char byte_5A04B4 = '–'; // weak
int dword_5A03E0 = 1073741824; // weak
int dword_5A03E8 = 1082130432; // weak
int dword_5A03D8 = 1103101952; // weak
int dword_5A03F0 = 1111490560; // weak
int dword_5A03F8 = 1115684864; // weak
char byte_5A04C4 = 'ð'; // weak
int dword_5A04CC = 1061997773; // weak
int dword_5A04E0 = 1058642330; // weak
char byte_5A04B5 = 'd'; // weak
char byte_5A04B6 = '‚'; // weak
char byte_5A04B7 = '–'; // weak
char byte_5A04B8 = 'Œ'; // weak
char byte_5A04B9 = 'F'; // weak
char byte_5A04BC = 'ÿ'; // weak
char byte_5A04BD = 'Œ'; // weak
char byte_5A04C0 = 'ÿ'; // weak
char byte_5A04C1 = '–'; // weak
char byte_5A04C2 = 'È'; // weak
char byte_5A04C3 = 'ÿ'; // weak
char byte_5A04C5 = 'P'; // weak
int dword_5A0408 = 1073741824; // weak
int dword_5A0410 = 1082130432; // weak
int dword_5A0420 = 1111490560; // weak
int dword_5A04D0 = 1045220557; // weak
int dword_5A04E4 = 1050253722; // weak
int dword_5A04F0 = 1061997773; // weak
char byte_5A04BA = 'n'; // weak
char byte_5A04BB = 'ÿ'; // weak
char byte_5A04BE = 'È'; // weak
char byte_5A04BF = 'ÿ'; // weak
char byte_5A04C6 = '´'; // weak
char byte_5A04C7 = 'ÿ'; // weak
char byte_5A04C8 = 'ÿ'; // weak
int dword_5A04D4 = 1056964608; // weak
int dword_5A04D8 = 1061997773; // weak
int dword_5A04DC = 1061997773; // weak
int dword_5A04E8 = 1056964608; // weak
int dword_5A04EC = 1061997773; // weak
int dword_5A0400 = 1107296256; // weak
int dword_5A0418 = 1109393408; // weak
int dword_5A0428 = 1098907648; // weak
int dword_5A0430 = 1073741824; // weak
int dword_5A0438 = 1082130432; // weak
int dword_5A0440 = 1107296256; // weak
int dword_5A0448 = 1115684864; // weak
int dword_5A0450 = 1090519040; // weak
int dword_5A0458 = 1065353216; // weak
int dword_5A0460 = 1073741824; // weak
int dword_5A0468 = 1098907648; // weak
int dword_5A0470 = 1107296256; // weak
int dword_5A0478 = 1094713344; // weak
int dword_5A0480 = 1065353216; // weak
int dword_5A0488 = 1073741824; // weak
int dword_5A0490 = 1103101952; // weak
int dword_5A0498 = 1108344832; // weak
int dword_5A04A0 = 1089470464; // weak
int dword_5A04A4 = 1082130432; // weak
int dword_5A04A8 = 1089470464; // weak
int dword_60674C; // weak
int dword_606790; // weak
int dword_59E014 = 6; // weak
int dword_606748; // weak
int dword_6067AC; // weak
int dword_6067A4; // weak
int dword_6AD9C8[]; // weak

int __stdcall maybeSoundTimerCallback(int); // weak
void sub_58295B();
void sub_582CA9();
int __cdecl sub_583340(int a1);

//----- (0057E907) --------------------------------------------------------
int maybe_shutdownSound2()
{
	maybe_shutdownSound();
	return 1;
}

//----- (0057E939) --------------------------------------------------------
int maybe_stopSounds2()
{
	maybe_stopSounds();
	return 1;
}

//----- (0057E9AF) --------------------------------------------------------
int __cdecl GetSoundMsCountFormatted()
{
	return GetSoundMsCountFormatted2();
}
// 5832FB: using guessed type int sub_5832FB(void);

//----- (0057E9E1) --------------------------------------------------------
__int16 maybe_openSound3DListener2()
{
	return maybe_openSound3DListener();
}

//----- (0057E9EB) --------------------------------------------------------
int maybe_closeSound3DListener2()
{
	return maybe_closeSound3DListener();
}

//----- (0057EA21) --------------------------------------------------------
void __cdecl maybe_setSound3DOrientation2(__int16 a1, float* a2, float* a3)
{
	maybe_setSound3DOrientation(a1, a2, a3);
}

//----- (0057EDAE) --------------------------------------------------------
int __cdecl getSound3DSampleVolume(__int16 a1)
{
	return AIL_3D_sample_volume(sound3DSampleHandle[a1]);
}
// 594364: using guessed type int __stdcall AIL_3D_sample_volume(_DWORD);

//----- (0057F1E7) --------------------------------------------------------
int __cdecl maybe_setSound3DUserData(__int16 a1, float a2)
{
	int result; // eax

	if (a1 == -1)
		return 0;
	if (isSoundDisabled)
		return 0;
	if ((a1 & 0x8000) == 0x8000)
	{
		debugFunc1();
		result = 0;
	}
	else
	{
		AIL_set_3D_user_data(sound3DSampleHandle[a1], 0, (__int64)a2);
		debugFunc1();
		result = 1;
	}
	return result;
}
// 594370: using guessed type int __stdcall AIL_set_3D_user_data(_DWORD, _DWORD, _DWORD);
// 607115: using guessed type char byte_607115;
// 6AE838: using guessed type int isSoundDisabled;

//----- (0057F273) --------------------------------------------------------
int maybe_isOneOfSoundsInStatus_2()
{
	int i; // [esp+0h] [ebp-4h]

	for (i = 0; i < numSound3DSampleHandles; ++i)
	{
		if (AIL_3D_sample_status(sound3DSampleHandle[i]) == 2)
			return i;
	}
	return -1;
}
// 594374: using guessed type int __stdcall AIL_3D_sample_status(_DWORD);
// 6AE81C: using guessed type int numSound3DSampleHandles;

//----- (0057FCA6) --------------------------------------------------------
int maybe_stopSounds()
{
	int result; // eax
	int i; // [esp+0h] [ebp-4h]
	int j; // [esp+0h] [ebp-4h]

	if (!isSoundDisabled)
	{
		for (i = 0; i < 16; ++i)
		{
			AIL_end_sample(soundSampleHandle[i]);
			result = i + 1;
		}
		for (j = 0; j < numSound3DSampleHandles; ++j)
		{
			AIL_end_3D_sample(sound3DSampleHandle[j]);
			result = j + 1;
		}
	}
	return result;
}
// 5943B4: using guessed type int __stdcall AIL_end_sample(_DWORD);
// 5943B8: using guessed type int __stdcall AIL_end_3D_sample(_DWORD);
// 6AE81C: using guessed type int dword_6AE81C;
// 6AE838: using guessed type int dword_6AE838;

//----- (0058015C) --------------------------------------------------------
int __cdecl maybe_setSound3DPlaybackRate2(__int16 a1, unsigned __int16 a2)
{
    int result; // eax
    __int16 v3; // [esp+10h] [ebp+8h]

    if (isSoundDisabled)
        return 0;
    if (a2 > 0x200u)
        a2 = 512;
    if (a2 < 0x80u)
        a2 = 128;
    if ((a1 & 0x8000) != 0)
    {
        if ((a1 & 0x8000) == 0x8000)
        {
            v3 = a1 & 0x7FFF;
            if (v3 < 0 || v3 > 15)
                return 0;
            AIL_set_sample_playback_rate(soundSampleHandle[v3], g_maybeSoundsPlayBackRates[(unsigned __int16)(a2 - 128)]);
            debugFunc1();
        }
        result = 1;
    }
    else
    {
        debugFunc1();
        result = 0;
    }
    return result;
}
// 5943A0: using guessed type int __stdcall AIL_set_sample_playback_rate(_DWORD, _DWORD);
// 60710C: using guessed type char byte_60710C;
// 60710D: using guessed type char byte_60710D;
// 6AE838: using guessed type int isSoundDisabled;

//----- (0058028B) --------------------------------------------------------
int __cdecl maybe_setSound3DPlaybackRate(int a1, unsigned __int16 a2)
{
    int v3; // [esp+0h] [ebp-4h]

    if (isSoundDisabled)
        return 0;
    if (a2 > 0x200u)
        a2 = 512;
    if (a2 < 0x80u)
        a2 = 128;
    v3 = g_maybeSoundsPlayBackRates[(unsigned __int16)(a2 - 128)];
    debugFunc1();
    if (!a1)
        return 0;
    AIL_set_3D_sample_playback_rate(a1, v3);
    return 1;
}
// 5943CC: using guessed type int __stdcall AIL_set_3D_sample_playback_rate(_DWORD, _DWORD);
// 60710C: using guessed type char byte_60710C;
// 60710D: using guessed type char byte_60710D;
// 6AE838: using guessed type int isSoundDisabled;

//----- (00580347) --------------------------------------------------------
int __cdecl maybe_setSound3DVolume2(__int16 a1, unsigned __int8 a2)
{
    int result; // eax
    float v3; // [esp+4h] [ebp-24h]
    float v4; // [esp+Ch] [ebp-1Ch]
    float v5; // [esp+14h] [ebp-14h]
    float v6; // [esp+1Ch] [ebp-Ch]
    float v7; // [esp+24h] [ebp-4h]
    float v8; // [esp+24h] [ebp-4h]
    __int16 v9; // [esp+30h] [ebp+8h]

    if (isSoundDisabled)
        return 0;
    if ((a1 & 0x8000) != 0)
    {
        if ((a1 & 0x8000) == 0x8000)
        {
            v9 = a1 & 0x7FFF;
            if (v9 < 0 || v9 > 15)
                return 0;
            v5 = (float)a2;
            v6 = (float)(unsigned __int8)byte_6AE840;
            v7 = v6 / 255.0;
            v3 = (float)(unsigned __int8)(__int64)(v5 * v7);
            v4 = (float)(unsigned __int8)byte_6AE841;
            v8 = v4 / 255.0;
            AIL_set_sample_volume(soundSampleHandle[v9], (unsigned __int8)(__int64)(v3 * v8) >> 1);
            debugFunc1();
        }
        result = 1;
    }
    else
    {
        debugFunc1();
        result = 0;
    }
    return result;
}
// 594398: using guessed type int __stdcall AIL_set_sample_volume(_DWORD, _DWORD);
// 60710F: using guessed type char byte_60710F;
// 6AE838: using guessed type int isSoundDisabled;
// 6AE840: using guessed type char byte_6AE840;
// 6AE841: using guessed type char byte_6AE841;

//----- (0058048D) --------------------------------------------------------
int __cdecl maybe_setSound3DVolume(int a1, unsigned __int8 a2)
{
    int result; // eax
    float v3; // [esp+0h] [ebp-14h]
    float v4; // [esp+8h] [ebp-Ch]
    float v5; // [esp+10h] [ebp-4h]

    if (isSoundDisabled)
        return 0;
    if (a1)
    {
        v3 = (float)a2;
        v4 = (float)(unsigned __int8)byte_6AE840;
        v5 = v4 / 255.0;
        AIL_set_3D_sample_volume(a1, (unsigned __int8)(__int64)(v3 * v5) >> 1);
        debugFunc1();
        result = 1;
    }
    else
    {
        debugFunc1();
        result = 0;
    }
    return result;
}
// 594358: using guessed type int __stdcall AIL_set_3D_sample_volume(_DWORD, _DWORD);
// 60710E: using guessed type char byte_60710E;
// 60710F: using guessed type char byte_60710F;
// 6AE838: using guessed type int isSoundDisabled;
// 6AE840: using guessed type char byte_6AE840;

//----- (0058053E) --------------------------------------------------------
int __cdecl maybe_setSound3DPosition2(int a1, _DWORD* a2)
{
    int result; // eax

    if (isSoundDisabled)
        return 0;
    if (a1)
    {
        AIL_set_3D_position(a1, *a2, a2[1], a2[2]);
        result = 1;
    }
    else
    {
        debugFunc1();
        result = 0;
    }
    return result;
}
// 594388: using guessed type int __stdcall AIL_set_3D_position(_DWORD, _DWORD, _DWORD, _DWORD);
// 607114: using guessed type char byte_607114;
// 6AE838: using guessed type int isSoundDisabled;

//----- (00580590) --------------------------------------------------------
int __cdecl maybe_setSound3DVelocityVec2(int a1, float* a2)
{
    int result; // eax
    float v3; // [esp+0h] [ebp-14h]
    float v4; // [esp+4h] [ebp-10h]
    float v5; // [esp+8h] [ebp-Ch]
    float v6; // [esp+Ch] [ebp-8h]

    v6 = 1.0 / 33.333332;
    if (isSoundDisabled)
        return 0;
    if (a1)
    {
        v5 = v6 * a2[2];
        v4 = v6 * a2[1];
        v3 = v6 * *a2;
        AIL_set_3D_velocity_vector(a1, LODWORD(v3), LODWORD(v4), LODWORD(v5));
        result = 1;
    }
    else
    {
        debugFunc1();
        result = 0;
    }
    return result;
}
// 5943D0: using guessed type int __stdcall AIL_set_3D_velocity_vector(_DWORD, _DWORD, _DWORD, _DWORD);
// 607114: using guessed type char byte_607114;
// 6AE838: using guessed type int isSoundDisabled;

//----- (0058060C) --------------------------------------------------------
int __cdecl maybe_setSound3DDistance(int a1, int a2)
{
    int v2; // ecx
    int result; // eax
    int v4; // [esp+8h] [ebp-4h] BYREF

    v4 = v2;
    if (isSoundDisabled)
        return 0;
    if (a1)
    {
        AIL_3D_sample_distances(a1, &v4, 0);
        AIL_set_3D_sample_distances(a1, v4, a2);
        debugFunc1();
        result = 1;
    }
    else
    {
        debugFunc1();
        result = 0;
    }
    return result;
}
// 58060F: variable 'v2' is possibly undefined
// 59436C: using guessed type int __stdcall AIL_3D_sample_distances(_DWORD, _DWORD, _DWORD);
// 594380: using guessed type int __stdcall AIL_set_3D_sample_distances(_DWORD, _DWORD, _DWORD);
// 60710E: using guessed type char byte_60710E;
// 607115: using guessed type char byte_607115;
// 6AE838: using guessed type int isSoundDisabled;

//----- (005809A9) --------------------------------------------------------
void __cdecl maybe_setSound3DRoomType2(int a1)
{
    switch (a1)
    {
    case 0:
        AIL_set_3D_room_type(sound3DProvider, ENVIRONMENT_GENERIC);
        dword_6AE810 = 17;
        break;
    case 1:
        AIL_set_3D_room_type(sound3DProvider, ENVIRONMENT_ROOM);
        dword_6AE810 = 18;
        break;
    case 2:
        AIL_set_3D_room_type(sound3DProvider, ENVIRONMENT_STONEROOM);
        dword_6AE810 = 19;
        break;
    case 3:
        AIL_set_3D_room_type(sound3DProvider, ENVIRONMENT_STONECORRIDOR);
        dword_6AE810 = 20;
        break;
    case 4:
        AIL_set_3D_room_type(sound3DProvider, ENVIRONMENT_SEWERPIPE);
        dword_6AE810 = 21;
        break;
    case 5:
        AIL_set_3D_room_type(sound3DProvider, ENVIRONMENT_BATHROOM);
        dword_6AE810 = 22;
        break;
    case 6:
        AIL_set_3D_room_type(sound3DProvider, ENVIRONMENT_ALLEY);
        dword_6AE810 = 23;
        break;
    case 7:
        AIL_set_3D_room_type(sound3DProvider, ENVIRONMENT_HALLWAY);
        dword_6AE810 = 24;
        break;
    case 8:
        AIL_set_3D_room_type(sound3DProvider, ENVIRONMENT_CARPETEDHALLWAY);
        dword_6AE810 = 25;
        break;
    case 9:
        AIL_set_3D_room_type(sound3DProvider, ENVIRONMENT_CAVE);
        dword_6AE810 = 26;
        break;
    case 10:
        AIL_set_3D_room_type(sound3DProvider, ENVIRONMENT_CITY);
        dword_6AE810 = 27;
        break;
    case 11:
        AIL_set_3D_room_type(sound3DProvider, ENVIRONMENT_CONCERTHALL);
        dword_6AE810 = 28;
        break;
    case 12:
        AIL_set_3D_room_type(sound3DProvider, ENVIRONMENT_ARENA);
        dword_6AE810 = 29;
        break;
    case 16:
        AIL_set_3D_room_type(sound3DProvider, ENVIRONMENT_UNDERWATER);
        dword_6AE810 = 16;
        break;
    case 35:
        AIL_set_3D_room_type(sound3DProvider, ENVIRONMENT_PSYCHOTIC);
        dword_6AE810 = 35;
        break;
    }
}
// 594350: using guessed type int __stdcall AIL_set_3D_room_type(_DWORD, _DWORD);
// 6ADA44: using guessed type int dword_6ADA44;
// 6AE810: using guessed type int dword_6AE810;

//----- (00580BE3) --------------------------------------------------------
void __cdecl maybe_setSound3DRoomType(int a1)
{
    switch (a1)
    {
    case 1:
        AIL_set_3D_room_type(sound3DProvider, ENVIRONMENT_PLAIN);
        dword_6AE810 = 31;
        break;
    case 2:
        AIL_set_3D_room_type(sound3DProvider, ENVIRONMENT_QUARRY);
        dword_6AE810 = 32;
        break;
    case 3:
        AIL_set_3D_room_type(sound3DProvider, ENVIRONMENT_PARKINGLOT);
        dword_6AE810 = 33;
        break;
    case 4:
        AIL_set_3D_room_type(sound3DProvider, ENVIRONMENT_FOREST);
        dword_6AE810 = 34;
        break;
    case 5:
        AIL_set_3D_room_type(sound3DProvider, ENVIRONMENT_LIVINGROOM);
        dword_6AE810 = 37;
        break;
    case 6:
        AIL_set_3D_room_type(sound3DProvider, ENVIRONMENT_DIZZY);
        dword_6AE810 = 36;
        break;
    case 7:
        AIL_set_3D_room_type(sound3DProvider, ENVIRONMENT_HANGAR);
        dword_6AE810 = 30;
        break;
    default:
        AIL_set_3D_room_type(sound3DProvider, ENVIRONMENT_GENERIC);
        dword_6AE810 = 17;
        break;
    }
}
// 594350: using guessed type int __stdcall AIL_set_3D_room_type(_DWORD, _DWORD);
// 6ADA44: using guessed type int dword_6ADA44;
// 6AE810: using guessed type int dword_6AE810;

//----- (00580DED) --------------------------------------------------------
int maybe_shutdownSound()
{
    if (isSoundDisabled)
        return 0;
    if (sound3DProvider)
        AIL_set_3D_room_type(sound3DProvider, 0);
    AIL_quick_shutdown();
    return 1;
}
// 594350: using guessed type int __stdcall AIL_set_3D_room_type(_DWORD, _DWORD);
// 5943E8: using guessed type _DWORD __stdcall AIL_quick_shutdown();
// 6ADA44: using guessed type int dword_6ADA44;
// 6AE838: using guessed type int isSoundDisabled;

//----- (00580E21) --------------------------------------------------------
void tryInitSoundSampleHandles()
{
    int j; // [esp+0h] [ebp-Ch]
    int i; // [esp+4h] [ebp-8h]
    int k; // [esp+4h] [ebp-8h]
    int v3; // [esp+8h] [ebp-4h] BYREF

    if (!isSoundDisabled)
    {
        for (i = 0; i < 20; ++i)
        {
            soundSampleHandle[i] = AIL_allocate_sample_handle(dword_6ADA20);
            if (!soundSampleHandle[i])
            {
                debugFunc1();
                isSoundDisabled = 1;
                isMusicDisabled = 1;
                return;
            }
        }
        for (j = i - 4; j < i - 1; ++j)
            AIL_release_sample_handle(soundSampleHandle[j]);
        debugFunc1();
        debugFunc1();
        AIL_3D_provider_attribute(sound3DProvider, aMaximumSupport, &v3);
        debugFunc1();
        for (k = 0; k < v3; ++k)
        {
            sound3DSampleHandle[k] = AIL_allocate_3D_sample_handle(sound3DProvider);
            if (!sound3DSampleHandle[k])
                break;
        }
        numSound3DSampleHandles = k;
        dword_6AE820 = k <= 16;
        debugFunc1();
    }
}
// 5943EC: using guessed type int __stdcall AIL_allocate_3D_sample_handle(_DWORD);
// 5943F0: using guessed type int __stdcall AIL_3D_provider_attribute(_DWORD, _DWORD, _DWORD);
// 5943F4: using guessed type int __stdcall AIL_release_sample_handle(_DWORD);
// 5943F8: using guessed type int __stdcall AIL_allocate_sample_handle(_DWORD);
// 607104: using guessed type char byte_607104;
// 6ADA20: using guessed type int dword_6ADA20;
// 6ADA44: using guessed type int dword_6ADA44;
// 6AE81C: using guessed type int dword_6AE81C;
// 6AE820: using guessed type int dword_6AE820;
// 6AE834: using guessed type int isMusicDisabled;
// 6AE838: using guessed type int isSoundDisabled;

//----- (0058113B) --------------------------------------------------------
int releaseAllSoundSampleHandles()
{
    int result; // eax
    int i; // [esp+0h] [ebp-4h]
    int j; // [esp+0h] [ebp-4h]

    if (!isSoundDisabled)
    {
        for (i = 0; i < 16; ++i)
        {
            if (soundSampleHandle[i])
                AIL_release_sample_handle(soundSampleHandle[i]);
            result = i + 1;
        }
        for (j = 0; j < numSound3DSampleHandles; ++j)
        {
            result = j;
            if (sound3DSampleHandle[j])
                result = AIL_release_3D_sample_handle(sound3DSampleHandle[j]);
        }
    }
    return result;
}
// 5943F4: using guessed type int __stdcall AIL_release_sample_handle(_DWORD);
// 5943FC: using guessed type int __stdcall AIL_release_3D_sample_handle(_DWORD);
// 6AE81C: using guessed type int dword_6AE81C;
// 6AE838: using guessed type int isSoundDisabled;

//----- (005811C3) --------------------------------------------------------
int releaseSoundSamples()
{
    int result; // eax
    int i; // [esp+0h] [ebp-4h]

    if (!isSoundDisabled)
    {
        for (i = 0; i < 16; ++i)
        {
            if (soundSampleHandle[i])
                AIL_release_sample_handle(soundSampleHandle[i]);
            result = i + 1;
        }
    }
    return result;
}
// 5943F4: using guessed type int __stdcall AIL_release_sample_handle(_DWORD);
// 6AE838: using guessed type int isSoundDisabled;

//----- (0058120E) --------------------------------------------------------
int releaseSound3DSamples()
{
    int result; // eax
    int i; // [esp+0h] [ebp-4h]

    if (!isSoundDisabled)
    {
        for (i = 0; i < numSound3DSampleHandles; ++i)
        {
            AIL_release_3D_sample_handle(sound3DSampleHandle[i]);
            result = i + 1;
        }
    }
    return result;
}
// 5943FC: using guessed type int __stdcall AIL_release_3D_sample_handle(_DWORD);
// 6AE81C: using guessed type int numSound3DSampleHandles;
// 6AE838: using guessed type int isSoundDisabled;

//----- (00581265) --------------------------------------------------------
char* __cdecl GetSoundProviderName(int a1)
{
    char soundProviderName[256]; // [esp+F8h] [ebp-100h] BYREF

    if (!(_UNKNOWN*)((char*)&unk_6ADA50 + 68 * a1))
        return aNullInvalidInd;
    strcpy(soundProviderName, (const char*)&unk_6ADA50 + 68 * a1);
    if (!strcmp(aAurealA3dInter, soundProviderName))
        return aAurealA3dTm;
    if (!strcmp(aAurealA3d20Tm, soundProviderName))
        return aAurealA3d20Tm_0;
    if (!strcmp(aDolbySurround, soundProviderName))
        return aDolbySurround_0;
    if (!strcmp(aDirectsound3dH_0, soundProviderName))
        return aDirectsound3dH_1;
    if (!strcmp(aDirectsound3dS_0, soundProviderName))
        return aDirectSoundSof;
    if (!strcmp(aDirectsound3d7, soundProviderName))
        return aDirectsound3dS_1;
    if (!strcmp(aDirectsound3d7_0, soundProviderName))
        return aDirectsound3dS_2;
    if (!strcmp(aDirectsound3d7_1, soundProviderName))
        return aFastDirectsoun;
    if (!strcmp(aCreativeLabsEa_0, soundProviderName))
        return aCreativeLabsEa_1;
    if (!strcmp(aCreativeLabsEa_2, soundProviderName))
        return aCreativeLabsEa_3;
    if (!strcmp(aMilesFast2dPos_0, soundProviderName))
        return aMilesFast2d;
    if (!strcmp(aRadGameToolsRs_0, soundProviderName))
        return aRadGameToolsRs_1;
    return getFormattedString("%s not found", soundProviderName);
}

//----- (00581A39) --------------------------------------------------------
int loadAudioDevices()
{
    int v1; // [esp+1Ch] [ebp-860h] BYREF
    const char* v2; // [esp+20h] [ebp-85Ch] BYREF
    int i; // [esp+24h] [ebp-858h]
    int j; // [esp+28h] [ebp-854h]
    int numAudioDevs; // [esp+2Ch] [ebp-850h]
    int v6; // [esp+30h] [ebp-84Ch] BYREF
    int v7; // [esp+34h] [ebp-848h]
    char v8[2112]; // [esp+38h] [ebp-844h] BYREF

    v1 = 0;
    numAudioDevs = 0;
    g_NumAudioProviders = 0;
    while (AIL_enumerate_3D_providers(&v1, &v6, &v2) && numAudioDevs < 32)
    {
        if (!AIL_open_3D_provider(v6))
        {
            strcpy(&v8[128 * numAudioDevs], v2);
            *(_DWORD*)&v8[4 * numAudioDevs++ + 2048] = v6;
            AIL_close_3D_provider(v6);
        }
    }
    v7 = 0;
    for (i = 0; off_5B3798[i]; ++i)
    {
        for (j = 0; j < numAudioDevs; ++j)
        {
            if (!strcmp(&v8[128 * j], off_5B3798[i]))
            {
                dword_6ADA90[17 * v7] = *(_DWORD*)&v8[4 * j + 2048];
                strcpy((char*)&unk_6ADA50 + 68 * v7++, &v8[128 * j]);
                break;
            }
        }
    }
    g_NumAudioProviders = v7;
    if (numAudioDevs)
        return 1;
    isSoundDisabled = 1;
    isMusicDisabled = 1;
    return 0;
}
// 594400: using guessed type int __stdcall AIL_close_3D_provider(_DWORD);
// 594404: using guessed type int __stdcall AIL_open_3D_provider(_DWORD);
// 594408: using guessed type int __stdcall AIL_enumerate_3D_providers(_DWORD, _DWORD, _DWORD);
// 5B3798: using guessed type char *off_5B3798[5];
// 6AE2D0: using guessed type int g_NumAudioProviders;
// 6AE834: using guessed type int dword_6AE834;
// 6AE838: using guessed type int maybe_IsMusicDisabled;

//----- (00581FB9) --------------------------------------------------------
int CanOpenSoundProvider()
{
    int result; // eax

    if (!g_MaybeEnableSounds)
        return 0;
    writeDebug("- Trying to open retrieved provider %s -", (const char*)&unk_6ADA50 + 68 * dword_6AE804);
    if (sub_581CBF(dword_6AE804))
    {
        sub_5822FE(dword_6AE808);
        result = 1;
    }
    else
    {
        debugFunc1();
        result = 0;
    }
    return result;
}
// 5822FE: using guessed type _DWORD __cdecl sub_5822FE(_DWORD);
// 607104: using guessed type char byte_607104;
// 6AE800: using guessed type char g_MaybeEnableSounds;
// 6AE804: using guessed type int dword_6AE804;
// 6AE808: using guessed type int dword_6AE808;

//----- (00582028) --------------------------------------------------------
LSTATUS readRegisterSoundSettings()
{
    LSTATUS result; // eax
    DWORD cbData; // [esp+4h] [ebp-Ch] BYREF
    DWORD Type; // [esp+8h] [ebp-8h] BYREF
    BYTE Data[4]; // [esp+Ch] [ebp-4h] BYREF

    cbData = 4;
    result = RegQueryValueExA(regKey, aSoundprovider, 0, &Type, Data, &cbData);
    if (result)
    {
        g_MaybeEnableSounds = 0;
    }
    else
    {
        dword_6AE804 = *(_DWORD*)Data;
        result = RegQueryValueExA(regKey, aSpeakertype, 0, &Type, Data, &cbData);
        if (result)
        {
            g_MaybeEnableSounds = 0;
        }
        else
        {
            g_MaybeEnableSounds = 1;
            result = *(_DWORD*)Data;
            dword_6AE808 = *(_DWORD*)Data;
        }
    }
    return result;
}
// 6AE800: using guessed type char g_MaybeEnableSounds;
// 6AE804: using guessed type int dword_6AE804;
// 6AE808: using guessed type int dword_6AE808;

//----- (005820B6) --------------------------------------------------------
LSTATUS setRegisterSoundSettings()
{
    RegSetValueExA(regKey, aSoundprovider_0, 0, 4u, &g_SoundProviderId, 4u);
    return RegSetValueExA(regKey, aSpeakertype_0, 0, 4u, &g_SpeakerTypeId, 4u);
}

//----- (005820F4) --------------------------------------------------------
int readSoundSettings()
{
    int v0; // ecx
    int result; // eax

    if (!getSettingsValue(aStreaming, 1))
    {
        debugFunc1((unsigned __int8)byte_607104, aStreamingWasTu);
        isMusicDisabled = 1;
    }
    if (getSettingsValue(aSound_0, 1))
    {
        isSoundDisabled = 0;
        result = 0;
    }
    else
    {
        isSoundDisabled = 1;
        LOBYTE(v0) = byte_607104;
        debugFunc1(v0, aSoundWasTurned);
        result = 1;
    }
    return result;
}
// 582150: variable 'v0' is possibly undefined
// 583B2A: using guessed type int sub_583B2A(_DWORD, const char *, ...);
// 607104: using guessed type char byte_607104;
// 6AE834: using guessed type int dword_6AE834;
// 6AE838: using guessed type int dword_6AE838;

//----- (00582BCB) --------------------------------------------------------
int getSound3dSampleCount()
{
    int result; // eax

    result = AIL_active_3D_sample_count(sound3DProvider);
    sound3DSampleCount = result;
    return result;
}
// 594418: using guessed type int __stdcall AIL_active_3D_sample_count(_DWORD);
// 6ADA44: using guessed type int sound3DProvider;
// 6AE82C: using guessed type int dword_6AE82C;

//----- (00582BE1) --------------------------------------------------------
void initSoundTimer()
{
    ailSoundTimerId = AIL_register_timer(maybeSoundTimerCallback);
    if (ailSoundTimerId == -1)
    {
        debugFunc1();
        isSoundDisabled = 1;
        isMusicDisabled = 1;
    }
    else
    {
        AIL_set_timer_user(ailSoundTimerId, 0);
        AIL_set_timer_frequency(ailSoundTimerId, 30);
    }
}
// 582A13: using guessed type int __stdcall maybeSoundTimerCallback(int);
// 5943DC: using guessed type int __stdcall AIL_set_timer_user(_DWORD, _DWORD);
// 5943E0: using guessed type int __stdcall AIL_set_timer_frequency(_DWORD, _DWORD);
// 594424: using guessed type int __stdcall AIL_register_timer(_DWORD);
// 607104: using guessed type char byte_607104;
// 6ADA34: using guessed type int ailSoundTimerId;
// 6AE834: using guessed type int isMusicDisabled;
// 6AE838: using guessed type int isSoundDisabled;

//----- (00582D0C) --------------------------------------------------------
void startSoundTimer()
{
    if (!isSoundDisabled)
    {
        if (dword_6ADA3C)
        {
            AIL_start_timer(ailSoundTimerId);
            dword_6ADA38 = 0;
        }
        debugFunc1();
    }
}
// 594428: using guessed type int __stdcall AIL_start_timer(_DWORD);
// 607104: using guessed type char byte_607104;
// 6ADA34: using guessed type int ailSoundTimerId;
// 6ADA38: using guessed type int dword_6ADA38;
// 6ADA3C: using guessed type int dword_6ADA3C;
// 6AE838: using guessed type int isSoundDisabled;

//----- (00582D65) --------------------------------------------------------
void stopSoundTimer()
{
    if (!isSoundDisabled)
    {
        if (dword_6ADA3C)
        {
            AIL_stop_timer(ailSoundTimerId);
            dword_6ADA38 = 1;
        }
        debugFunc1();
    }
}
// 59442C: using guessed type int __stdcall AIL_stop_timer(_DWORD);
// 607104: using guessed type char byte_607104;
// 6ADA34: using guessed type int ailSoundTimerId;
// 6ADA38: using guessed type int dword_6ADA38;
// 6ADA3C: using guessed type int dword_6ADA3C;
// 6AE838: using guessed type int isSoundDisabled;

//----- (00582EF8) --------------------------------------------------------
void stopAllSounds3D()
{
    int i; // [esp+0h] [ebp-4h]

    if (!isSoundDisabled)
    {
        for (i = 0; i < numSound3DSampleHandles; ++i)
        {
            if (AIL_3D_sample_status(sound3DSampleHandle[i]) == 4)
                AIL_stop_3D_sample(sound3DSampleHandle[i]);
        }
    }
}
// 594374: using guessed type int __stdcall AIL_3D_sample_status(_DWORD);
// 5943BC: using guessed type int __stdcall AIL_stop_3D_sample(_DWORD);
// 6AE81C: using guessed type int numSound3DSampleHandles;
// 6AE838: using guessed type int isSoundDisabled;

//----- (00582F51) --------------------------------------------------------
void resumeAllSounds3D()
{
    int i; // [esp+0h] [ebp-4h]

    if (!isSoundDisabled)
    {
        for (i = 0; i < numSound3DSampleHandles; ++i)
        {
            if (AIL_3D_sample_status(sound3DSampleHandle[i]) == 8)
                AIL_resume_3D_sample(sound3DSampleHandle[i]);
        }
    }
}
// 594374: using guessed type int __stdcall AIL_3D_sample_status(_DWORD);
// 5943C4: using guessed type int __stdcall AIL_resume_3D_sample(_DWORD);
// 6AE81C: using guessed type int numSound3DSampleHandles;
// 6AE838: using guessed type int isSoundDisabled;

//----- (0058334D) --------------------------------------------------------
int __cdecl startSoundStream(int a1)
{
    AIL_start_stream(dword_6AD9C0[6 * a1]);
    AIL_set_stream_loop_count(dword_6AD9C0[6 * a1], 0);
    return 0;
}
// 594434: using guessed type int __stdcall AIL_set_stream_loop_count(_DWORD, _DWORD);
// 594438: using guessed type int __stdcall AIL_start_stream(_DWORD);
// 6AD9C0: using guessed type int dword_6AD9C0[];

//----- (0058337F) --------------------------------------------------------
int __cdecl pauseSoundStream(int a1)
{
    AIL_pause_stream(dword_6AD9C0[6 * a1], 1);
    return 0;
}
// 594420: using guessed type int __stdcall AIL_pause_stream(_DWORD, _DWORD);
// 6AD9C0: using guessed type int dword_6AD9C0[];

//----- (005833A5) --------------------------------------------------------
int __cdecl resumeSoundStream(int a1)
{
    AIL_pause_stream(dword_6AD9C0[6 * a1], 0);
    return 0;
}
// 594420: using guessed type int __stdcall AIL_pause_stream(_DWORD, _DWORD);
// 6AD9C0: using guessed type int dword_6AD9C0[];

//----- (00583430) --------------------------------------------------------
int __cdecl maybe_startSoundStream(int a1, int a2)
{
    int result; // eax

    if (dword_6AD9C0[6 * a1])
        maybe_closeStream(a1);
    result = AIL_open_stream(dword_6ADA20, a2, 0);
    dword_6AD9C0[6 * a1] = result;
    return result;
}
// 59443C: using guessed type int __stdcall AIL_open_stream(_DWORD, _DWORD, _DWORD);
// 6AD9C0: using guessed type int dword_6AD9C0[];
// 6ADA20: using guessed type int dword_6ADA20;

//----- (00583472) --------------------------------------------------------
int* __cdecl maybe_closeStream(int a1)
{
    int* result; // eax
    int* v2; // [esp+0h] [ebp-4h]

    result = &dword_6AD9C0[6 * a1];
    v2 = result;
    if (!isMusicDisabled)
    {
        AIL_close_stream(*result);
        result = &dword_6AD9C0[6 * a1];
        *v2 = 0;
    }
    return result;
}
// 594440: using guessed type int __stdcall AIL_close_stream(_DWORD);
// 6AD9C0: using guessed type int dword_6AD9C0[];
// 6AE834: using guessed type int dword_6AE834;

//----- (00583B30) --------------------------------------------------------
int maybe_closeSound3DListener()
{
    if (isSoundDisabled)
        return 0;
    debugFunc1();
    if (dword_6AE2D4)
    {
        AIL_close_3D_listener(dword_6AE2D4);
        dword_6AE2D4 = 0;
    }
    debugFunc1();
    return 1;
}
// 594450: using guessed type int __stdcall AIL_close_3D_listener(_DWORD);
// 607112: using guessed type char byte_607112;
// 6AE2D4: using guessed type int dword_6AE2D4;
// 6AE838: using guessed type int dword_6AE838;

//----- (00583BA3) --------------------------------------------------------
__int16 maybe_openSound3DListener()
{
    __int16 result; // ax

    if (isSoundDisabled)
        return -1;
    debugFunc1();
    if (dword_6AE2D4)
    {
        debugFunc1();
        result = -1;
    }
    else
    {
        dword_6AE2D4 = AIL_open_3D_listener(sound3DProvider);
        debugFunc1();
        result = 1;
    }
    return result;
}
// 59441C: using guessed type int __stdcall AIL_open_3D_listener(_DWORD);
// 607112: using guessed type char byte_607112;
// 607113: using guessed type char byte_607113;
// 6ADA44: using guessed type int dword_6ADA44;
// 6AE2D4: using guessed type int dword_6AE2D4;
// 6AE838: using guessed type int isSoundDisabled;

//----- (00583C16) --------------------------------------------------------
int __cdecl maybe_setSound3DPosition(__int16 a1, _DWORD* a2)
{
    int result; // eax

    if (isSoundDisabled)
        return 0;
    if (a1 == -1 || !dword_6AE2D4)
    {
        debugFunc1();
        result = 0;
    }
    else
    {
        AIL_set_3D_position(dword_6AE2D4, *a2, a2[1], a2[2]);
        debugFunc1();
        result = 1;
    }
    return result;
}
// 594388: using guessed type int __stdcall AIL_set_3D_position(_DWORD, _DWORD, _DWORD, _DWORD);
// 607112: using guessed type char byte_607112;
// 607113: using guessed type char byte_607113;
// 6AE2D4: using guessed type int dword_6AE2D4;
// 6AE838: using guessed type int isSoundDisabled;

//----- (00583CC9) --------------------------------------------------------
int __cdecl maybe_setSound3DVelocityVec(__int16 a1, float* a2)
{
    int result; // eax
    float v3; // [esp+0h] [ebp-14h]
    float v4; // [esp+4h] [ebp-10h]
    float v5; // [esp+8h] [ebp-Ch]
    float v6; // [esp+Ch] [ebp-8h]

    v6 = 1.0 / 33.333332;
    if (isSoundDisabled)
        return 0;
    if (a1 == -1)
    {
        debugFunc1();
        result = 0;
    }
    else
    {
        if (dword_6AE2D4)
        {
            v5 = v6 * a2[2];
            v4 = v6 * a2[1];
            v3 = v6 * *a2;
            AIL_set_3D_velocity_vector(dword_6AE2D4, LODWORD(v3), LODWORD(v4), LODWORD(v5));
        }
        else
        {
            debugFunc1();
        }
        result = 0;
    }
    return result;
}
// 5943D0: using guessed type int __stdcall AIL_set_3D_velocity_vector(_DWORD, _DWORD, _DWORD, _DWORD);
// 607112: using guessed type char byte_607112;
// 6AE2D4: using guessed type int dword_6AE2D4;
// 6AE838: using guessed type int isSoundDisabled;

//----- (00583D69) --------------------------------------------------------
void __cdecl maybe_setSound3DOrientation(__int16 a1, float* a2, float* a3)
{
    float v3; // [esp+18h] [ebp-20h]
    float v4; // [esp+1Ch] [ebp-1Ch]
    float v5; // [esp+20h] [ebp-18h]
    float v6; // [esp+24h] [ebp-14h]
    float v7; // [esp+28h] [ebp-10h]
    float v8; // [esp+2Ch] [ebp-Ch]

    if (!isSoundDisabled)
    {
        if (a1 != -1)
        {
            if (dword_6AE2D4)
            {
                v8 = -1.0 * a3[2];
                v7 = -1.0 * a3[1];
                v6 = -1.0 * *a3;
                v5 = -1.0 * a2[2];
                v4 = -1.0 * a2[1];
                v3 = -1.0 * *a2;
                AIL_set_3D_orientation(
                    dword_6AE2D4,
                    LODWORD(v3),
                    LODWORD(v4),
                    LODWORD(v5),
                    LODWORD(v6),
                    LODWORD(v7),
                    LODWORD(v8));
            }
        }
        debugFunc1();
    }
}
// 594384: using guessed type int __stdcall AIL_set_3D_orientation(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 607112: using guessed type char byte_607112;
// 607113: using guessed type char byte_607113;
// 6AE2D4: using guessed type int dword_6AE2D4;
// 6AE838: using guessed type int isSoundDisabled;

//----- (0052CA1A) --------------------------------------------------------
int sub_52CA1A()
{
    return AIL_ms_count();
}
// 59434C: using guessed type _DWORD __stdcall AIL_ms_count();

//----- (00582375) --------------------------------------------------------
int __cdecl sub_582375(int a1)
{
    int result; // eax

    if (a1 < 0 || a1 > 3)
    {
        debugFunc1();
        result = 0;
    }
    else
    {
        AIL_set_3D_speaker_type(sound3DProvider, a1);
        result = 1;
    }
    return result;
}
// 59440C: using guessed type int __stdcall AIL_set_3D_speaker_type(_DWORD, _DWORD);
// 607104: using guessed type char byte_607104;
// 6ADA44: using guessed type int sound3DProvider;

//----- (00580D10) --------------------------------------------------------
int sub_580D10()
{
    int result; // eax

    if (readSoundSettings_isSoundsDisabled())
        return 0;
    AIL_set_redist_directory(aRedist);
    if (AIL_quick_startup(1, 0, 22050, 16, 2))
    {
        AIL_quick_handles(&dword_6ADA20, 0, 0);
        initSoundTimer();
        if (loadAudioDevices())
        {
            isEAXSoundProviderLoaded = sub_5822AE();
            if (CanOpenSoundProvider() || sub_581F00())
            {
                result = 1;
            }
            else
            {
                writeDebug("Failed to select best sound provider");
                isSoundDisabled = 1;
                isMusicDisabled = 1;
                result = 0;
            }
        }
        else
        {
            isSoundDisabled = 1;
            isMusicDisabled = 1;
            result = 0;
        }
    }
    else
    {
        debugFunc1((unsigned __int8)byte_607104, aAwPoopsMilesSt);
        isSoundDisabled = 1;
        isMusicDisabled = 1;
        result = 0;
    }
    return result;
}
// 581A39: using guessed type int sub_581A39(void);
// 581F00: using guessed type int sub_581F00(void);
// 581FB9: using guessed type int sub_581FB9(void);
// 5822AE: using guessed type int sub_5822AE(void);
// 582BE1: using guessed type int sub_582BE1(void);
// 583B2A: using guessed type int sub_583B2A(_DWORD, const char *, ...);
// 59435C: using guessed type int __stdcall AIL_quick_handles(_DWORD, _DWORD, _DWORD);
// 594360: using guessed type int __stdcall AIL_quick_startup(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 5943E4: using guessed type int __stdcall AIL_set_redist_directory(_DWORD);
// 607104: using guessed type char byte_607104;
// 6ADA20: using guessed type int dword_6ADA20;
// 6AE818: using guessed type char byte_6AE818;
// 6AE834: using guessed type int dword_6AE834;
// 6AE838: using guessed type int dword_6AE838;

//----- (00581CBF) --------------------------------------------------------
int __cdecl sub_581CBF(int a1)
{
    int result; // eax

    if (a1 >= 0 && a1 < g_NumAudioProviders)
    {
        if ((_UNKNOWN*)((char*)&unk_6ADA50 + 68 * a1))
        {
            sub_581D41((const char*)&unk_6ADA50 + 68 * a1);
            *(_DWORD*)&g_SoundProviderId = a1;
            result = 1;
        }
        else
        {
            debugFunc1();
            isSoundDisabled = 1;
            result = 0;
        }
    }
    else
    {
        debugFunc1();
        result = 0;
    }
    return result;
}
// 607104: using guessed type char byte_607104;
// 6AE2D0: using guessed type int g_NumAudioProviders;
// 6AE838: using guessed type int isSoundDisabled;

//----- (00581D41) --------------------------------------------------------
int __cdecl sub_581D41(const char* a1)
{
    int result; // eax
    int v2; // [esp+0h] [ebp-28h]
    int v3; // [esp+14h] [ebp-14h] BYREF
    const char* _sound3DProviderName; // [esp+18h] [ebp-10h] BYREF
    int _sound3DProvider; // [esp+1Ch] [ebp-Ch] BYREF
    int isSoundDevsFinded; // [esp+24h] [ebp-4h]

    v3 = 0;
    isSoundDevsFinded = 0;
    releaseAllSoundSampleHandles();
    if (sound3DProvider)
    {
        debugFunc1();
        AIL_close_3D_provider(sound3DProvider);
    }
    debugFunc1();
    while (AIL_enumerate_3D_providers(&v3, &_sound3DProvider, &_sound3DProviderName))
    {
        debugFunc1();
        v2 = strcmp(_sound3DProviderName, a1);
        if (!v2)
        {
            isSoundDevsFinded = 1;
            break;
        }
    }
    if (isSoundDevsFinded)
    {
        if (AIL_open_3D_provider(_sound3DProvider))
        {
            debugFunc1();
            result = 0;
        }
        else
        {
            debugFunc1();
            sound3DProvider = _sound3DProvider;
            sound3DProviderName = _sound3DProviderName;
            tryInitSoundSampleHandles(v2);
            is3DSoundEnabled = checkIs3DSoundIsSupported(sound3DProvider);
            if (is3DSoundEnabled)
                AIL_set_3D_room_type(sound3DProvider, 0);
            result = 1;
        }
    }
    else
    {
        debugFunc1();
        isSoundDisabled = 1;
        result = 0;
    }
    return result;
}
// 581E82: variable 'v2' is possibly undefined
// 580E21: using guessed type int __cdecl sub_580E21(_DWORD);
// 58113B: using guessed type int sub_58113B(void);
// 58216D: using guessed type int __cdecl sub_58216D(_DWORD);
// 594350: using guessed type int __stdcall AIL_set_3D_room_type(_DWORD, _DWORD);
// 594400: using guessed type int __stdcall AIL_close_3D_provider(_DWORD);
// 594404: using guessed type int __stdcall AIL_open_3D_provider(_DWORD);
// 594408: using guessed type int __stdcall AIL_enumerate_3D_providers(_DWORD, _DWORD, _DWORD);
// 607104: using guessed type char byte_607104;
// 607105: using guessed type char byte_607105;
// 6ADA44: using guessed type int dword_6ADA44;
// 6ADA48: using guessed type int dword_6ADA48;
// 6AE80C: using guessed type char byte_6AE80C;
// 6AE838: using guessed type int isSoundDisabled;

//----- (00581F00) --------------------------------------------------------
int sub_581F00()
{
    int i; // [esp+0h] [ebp-4h]

    if (isSoundDisabled)
        return 0;
    for (i = 0; i < g_NumAudioProviders; ++i)
    {
        if (sub_581D41((const char*)&unk_6ADA50 + 68 * i))
        {
            *(_DWORD*)&g_SoundProviderId = i;
            return 1;
        }
    }
    debugFunc1();
    isSoundDisabled = 1;
    isMusicDisabled = 1;
    return 0;
}
// 607104: using guessed type char byte_607104;
// 6AE2D0: using guessed type int g_NumAudioProviders;
// 6AE834: using guessed type int isMusicDisabled;
// 6AE838: using guessed type int isSoundDisabled;

//----- (005822FE) --------------------------------------------------------
int __cdecl sub_5822FE(int a1)
{
    int result; // eax

    switch (a1)
    {
    case 0:
        goto LABEL_6;
    case 1:
        result = sub_582375(1);
        *(_DWORD*)&g_SpeakerTypeId = 1;
        return result;
    case 2:
        result = sub_582375(3);
        *(_DWORD*)&g_SpeakerTypeId = 2;
        break;
    default:
    LABEL_6:
        result = sub_582375(0);
        *(_DWORD*)&g_SpeakerTypeId = 0;
        break;
    }
    return result;
}
// 582375: using guessed type _DWORD __cdecl sub_582375(_DWORD);

//----- (00582A13) --------------------------------------------------------
int __stdcall maybeSoundTimerCallback(int a1)
{
    int v1; // edx
    int v3; // [esp+0h] [ebp-Ch]
    char v4; // [esp+4h] [ebp-8h]

    v4 = 0;
    sub_4388FC();
    LOWORD(v3) = 0;
    while ((unsigned __int16)v3 < 0x10u)
    {
        if (AIL_sample_status(soundSampleHandle[(unsigned __int16)v3]) == 4)
        {
            if (dword_6AE590[3 * (unsigned __int16)v3])
            {
                v1 = 12 * (unsigned __int16)v3;
                if (*(int*)((char*)dword_6AE594 + v1))
                {
                    LOWORD(v1) = v3;
                    ((void(__cdecl*)(int, int, int, _DWORD))dword_6AE590[3 * (unsigned __int16)v3])(
                        v1,
                        -1,
                        dword_6AE594[3 * (unsigned __int16)v3],
                        0);
                }
                else
                {
                    GetSoundMsCountFormatted((unsigned __int16)v3, v3);
                    debugFunc1();
                }
            }
            if (HIWORD(dword_6AE58C[3 * (unsigned __int16)v3]) == 1)
                ++v4;
        }
        else
        {
            if (dword_6AE590[3 * (unsigned __int16)v3])
            {
                GetSoundMsCountFormatted(dword_6AE58C[3 * (unsigned __int16)v3], (unsigned __int16)v3);
                debugFunc1();
                dword_6AE590[3 * (unsigned __int16)v3] = 0;
                dword_6AE594[3 * (unsigned __int16)v3] = 0;
            }
            dword_6AE58C[3 * (unsigned __int16)v3] = -1;
        }
        LOWORD(v3) = v3 + 1;
    }
    byte_6AE824 = v4;
    dword_6AE828 = AIL_active_sample_count(dword_6ADA20);
    return 0;
}
// 582A32: variable 'v3' is possibly undefined
// 4388FC: using guessed type int sub_4388FC(void);
// 57E9AF: using guessed type int __cdecl sub_57E9AF(_DWORD, _DWORD);
// 582A13: using guessed type int __stdcall maybeSoundTimerCallback(int);
// 5943B0: using guessed type int __stdcall AIL_sample_status(_DWORD);
// 594414: using guessed type int __stdcall AIL_active_sample_count(_DWORD);
// 607106: using guessed type char byte_607106;
// 607107: using guessed type char byte_607107;
// 6ADA20: using guessed type int dword_6ADA20;
// 6AE58C: using guessed type int dword_6AE58C[];
// 6AE590: using guessed type int dword_6AE590[];
// 6AE824: using guessed type char byte_6AE824;
// 6AE828: using guessed type int dword_6AE828;

//----- (00582C46) --------------------------------------------------------
void sub_582C46()
{
    if (!isSoundDisabled)
    {
        if (!dword_6ADA38)
        {
            AIL_start_timer(ailSoundTimerId);
            dword_6ADA38 = 1;
            dword_6ADA3C = 1;
        }
        debugFunc1();
    }
}
// 594428: using guessed type int __stdcall AIL_start_timer(_DWORD);
// 607104: using guessed type char byte_607104;
// 6ADA34: using guessed type int ailSoundTimerId;
// 6ADA38: using guessed type int dword_6ADA38;
// 6ADA3C: using guessed type int dword_6ADA3C;
// 6AE838: using guessed type int isSoundDisabled;

//----- (0045D78F) --------------------------------------------------------
int sub_45D78F()
{
    int result; // eax

    if (!isSoundDisabled)
    {
        if (sound3DProvider)
            AIL_set_3D_room_type(sound3DProvider, 0);
        sub_45D7C5();
        sub_582CA9();
        result = sub_582772();
    }
    return result;
}
// 582772: using guessed type int sub_582772(void);
// 582CA9: using guessed type int sub_582CA9(void);
// 594350: using guessed type int __stdcall AIL_set_3D_room_type(_DWORD, _DWORD);
// 6ADA44: using guessed type int dword_6ADA44;
// 6AE838: using guessed type int isSoundDisabled;

//----- (0057F2B8) --------------------------------------------------------
int __cdecl sub_57F2B8(int a1, int a2)
{
    int result; // eax
    int v3[9]; // [esp+4h] [ebp-28h] BYREF
    int v4; // [esp+28h] [ebp-4h]

    if (isSoundDisabled)
        return 0;
    if (a1 >= 0
        && a1 < numSound3DSampleHandles
        && HIWORD(a2) < 0x11u
        && (LOWORD(v4) = a2, (unsigned __int16)a2 <= (int)(unsigned __int16)word_6AE568[HIWORD(a2)]))
    {
        v3[0] = 1;
        v3[1] = dword_6AE4D8[HIWORD(a2)] + *(_DWORD*)(dword_6AE520[HIWORD(a2)] + 28 * (unsigned __int16)v4 + 4) + 32;
        v3[2] = *(_DWORD*)(dword_6AE520[HIWORD(a2)] + 28 * (unsigned __int16)v4 + 8) - 32;
        v3[3] = 22050;
        v3[4] = 16;
        v3[5] = 1;
        AIL_set_3D_sample_info(sound3DSampleHandle[a1], v3);
        if ((*(_BYTE*)(dword_6AE520[HIWORD(a2)] + 28 * (unsigned __int16)v4) & 8) != 0)
            AIL_set_3D_sample_loop_count(sound3DSampleHandle[a1], 0);
        AIL_set_3D_position(sound3DSampleHandle[a1], 0, 0, 0);
        AIL_set_3D_orientation(sound3DSampleHandle[a1], 0, 1065353216, 0, 0, 1065353216, 0);
        AIL_set_3D_sample_distances(sound3DSampleHandle[a1], dword_6AE7FC, dword_5A0118);
        AIL_set_3D_user_data(sound3DSampleHandle[a1], 0, (__int64)*(float*)&dword_5A011C);
        if (is3DSoundEnabled)
        {
            if (dword_6AE810 == 17)
                AIL_set_3D_sample_effects_level(sound3DSampleHandle[a1], 0);
            else
                AIL_set_3D_sample_effects_level(sound3DSampleHandle[a1], dword_6AE814);
        }
        AIL_start_3D_sample(sound3DSampleHandle[a1]);
        AIL_set_3D_sample_volume(sound3DSampleHandle[a1], (int)(unsigned __int8)byte_6AE840 >> 1);
        GetSoundMsCountFormatted();
        debugFunc1();
        result = sound3DSampleHandle[a1];
    }
    else
    {
        debugFunc1();
        result = 0;
    }
    return result;
}
// 594358: using guessed type int __stdcall AIL_set_3D_sample_volume(_DWORD, _DWORD);
// 594370: using guessed type int __stdcall AIL_set_3D_user_data(_DWORD, _DWORD, _DWORD);
// 594378: using guessed type int __stdcall AIL_start_3D_sample(_DWORD);
// 59437C: using guessed type int __stdcall AIL_set_3D_sample_effects_level(_DWORD, _DWORD);
// 594380: using guessed type int __stdcall AIL_set_3D_sample_distances(_DWORD, _DWORD, _DWORD);
// 594384: using guessed type int __stdcall AIL_set_3D_orientation(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 594388: using guessed type int __stdcall AIL_set_3D_position(_DWORD, _DWORD, _DWORD, _DWORD);
// 59438C: using guessed type int __stdcall AIL_set_3D_sample_loop_count(_DWORD, _DWORD);
// 594390: using guessed type int __stdcall AIL_set_3D_sample_info(_DWORD, _DWORD);
// 607108: using guessed type char byte_607108;
// 607109: using guessed type char byte_607109;
// 6AE4D8: using guessed type int dword_6AE4D8[];
// 6AE520: using guessed type int dword_6AE520[];
// 6AE7FC: using guessed type int dword_6AE7FC;
// 6AE80C: using guessed type char is3DSoundEnabled;
// 6AE810: using guessed type int dword_6AE810;
// 6AE814: using guessed type int dword_6AE814;
// 6AE81C: using guessed type int numSound3DSampleHandles;
// 6AE838: using guessed type int isSoundDisabled;
// 6AE840: using guessed type char byte_6AE840;

//----- (00582FAA) --------------------------------------------------------
void maybeSoundRelease()
{
    if (g_MaybeIsAllSoundDisabled)
    {
        if (dword_6AE810)
            return;
    }
    else if (isSoundDisabled)
    {
        return;
    }
    debugFunc1();
    if (g_IsSoundProviderClosed)
    {
        debugFunc1();
    }
    else
    {
        debugFunc1();
        releaseSound3DSamples();
        debugFunc1();
        AIL_close_3D_provider(sound3DProvider);
        debugFunc1();
        g_IsSoundProviderClosed = 1;
        g_UselessVariable2 = 0;
    }
}
// 594400: using guessed type int __stdcall AIL_close_3D_provider(_DWORD);
// 607106: using guessed type char byte_607106;
// 6ADA2C: using guessed type int g_IsSoundProviderClosed;
// 6ADA30: using guessed type int g_UselessVariable2;
// 6ADA40: using guessed type char g_MaybeIsAllSoundDisabled;
// 6ADA44: using guessed type int sound3DProvider;
// 6AE810: using guessed type int dword_6AE810;
// 6AE838: using guessed type int isSoundDisabled;

//----- (0058306B) --------------------------------------------------------
void maybeSoundInit()
{
    if (g_MaybeIsAllSoundDisabled)
    {
        if (dword_6AE810)
            return;
    }
    else if (isSoundDisabled)
    {
        return;
    }
    debugFunc1();
    if (g_IsSoundProviderClosed)
    {
        AIL_open_3D_provider(sound3DProvider);
        debugFunc1();
        sub_580FB2();
        g_UselessVariable2 = 1;
        g_IsSoundProviderClosed = 0;
    }
    else
    {
        debugFunc1();
    }
}
// 580FB2: using guessed type int sub_580FB2(void);
// 594404: using guessed type int __stdcall AIL_open_3D_provider(_DWORD);
// 607106: using guessed type char byte_607106;
// 6ADA2C: using guessed type int g_IsSoundProviderClosed;
// 6ADA30: using guessed type int g_UselessVariable2;
// 6ADA40: using guessed type char g_MaybeIsAllSoundDisabled;
// 6ADA44: using guessed type int dword_6ADA44;
// 6AE810: using guessed type int dword_6AE810;
// 6AE838: using guessed type int isSoundDisabled;

//----- (005830FF) --------------------------------------------------------
void maybeSoundRelease2()
{
    if (g_MaybeIsAllSoundDisabled)
    {
        if (dword_6AE810)
            return;
    }
    else if (isSoundDisabled)
    {
        return;
    }
    if (!dword_6ADA20 || dword_6ADA24)
    {
        debugFunc1();
    }
    else
    {
        debugFunc1();
        releaseSoundSamples();
        debugFunc1();
        debugFunc1();
        if (AIL_digital_handle_release(dword_6ADA20))
        {
            debugFunc1();
            dword_6ADA24 = 1;
            dword_6ADA28 = 0;
        }
        else
        {
            debugFunc1();
            dword_6ADA24 = 0;
        }
    }
}
// 594430: using guessed type int __stdcall AIL_digital_handle_release(_DWORD);
// 607106: using guessed type char byte_607106;
// 6ADA20: using guessed type int dword_6ADA20;
// 6ADA24: using guessed type int dword_6ADA24;
// 6ADA28: using guessed type int dword_6ADA28;
// 6ADA40: using guessed type char g_MaybeIsAllSoundDisabled;
// 6AE810: using guessed type int dword_6AE810;
// 6AE838: using guessed type int isSoundDisabled;

//----- (00581090) --------------------------------------------------------
void sub_581090()
{
    int i; // [esp+0h] [ebp-4h]

    if (!isSoundDisabled)
    {
        if (g_IsSoundProviderClosed)
        {
            debugFunc1();
            for (i = 0; i < 16; ++i)
            {
                soundSampleHandle[i] = AIL_allocate_sample_handle(dword_6ADA20);
                if (!sound3DSampleHandle[i])
                    break;
            }
        }
        debugFunc1();
    }
}
// 5943F8: using guessed type int __stdcall AIL_allocate_sample_handle(_DWORD);
// 607104: using guessed type char byte_607104;
// 6ADA20: using guessed type int dword_6ADA20;
// 6ADA2C: using guessed type int g_IsSoundProviderClosed;
// 6AE81C: using guessed type int dword_6AE81C;
// 6AE838: using guessed type int isSoundDisabled;

//----- (00582915) --------------------------------------------------------
void sub_582915()
{
    if (!isSoundDisabled)
    {
        sub_58295B();
        getSound3dSampleCount();
        if (dword_6ADA24)
        {
            if (!dword_6ADA28)
            {
                if (AIL_digital_handle_reacquire(dword_6ADA20))
                    dword_6ADA28 = 1;
            }
        }
    }
}
// 58295B: using guessed type int sub_58295B(void);
// 582BCB: using guessed type int sub_582BCB(void);
// 594410: using guessed type int __stdcall AIL_digital_handle_reacquire(_DWORD);
// 6ADA20: using guessed type int dword_6ADA20;
// 6ADA24: using guessed type int dword_6ADA24;
// 6ADA28: using guessed type int dword_6ADA28;
// 6AE838: using guessed type int isSoundDisabled;

//----- (0057E98F) --------------------------------------------------------
void sub_57E98F()
{
    sub_582915();
}

//----- (0058295B) --------------------------------------------------------
void sub_58295B()
{
    int i; // [esp+14h] [ebp-8h]
    float v1; // [esp+18h] [ebp-4h]

    for (i = 0; i < numSound3DSampleHandles; ++i)
    {
        if (AIL_3D_sample_status(sound3DSampleHandle[i]) == 4)
        {
            v1 = (float)AIL_3D_user_data(sound3DSampleHandle[i], 0);
            if (dword_6AE64C[i] > (double)v1)
            {
                AIL_end_3D_sample(sound3DSampleHandle[i]);
                debugFunc1();
            }
        }
    }
}
// 594368: using guessed type int __stdcall AIL_3D_user_data(_DWORD, _DWORD);
// 594374: using guessed type int __stdcall AIL_3D_sample_status(_DWORD);
// 5943B8: using guessed type int __stdcall AIL_end_3D_sample(_DWORD);
// 607107: using guessed type char byte_607107;
// 6AE81C: using guessed type int numSound3DSampleHandles;

//----- (0058273D) --------------------------------------------------------
int sub_58273D()
{
    int result; // eax
    int i; // [esp+0h] [ebp-4h]

    for (i = 0; i < numSound3DSampleHandles; ++i)
    {
        dword_6AE64C[i] = 0;
        result = i + 1;
    }
    return result;
}
// 6AE81C: using guessed type int numSound3DSampleHandles;

//----- (00583213) --------------------------------------------------------
void sub_583213()
{
    int v0; // [esp+0h] [ebp-4h]

    if (g_MaybeIsAllSoundDisabled)
    {
        if (dword_6AE810)
            return;
    }
    else if (isSoundDisabled)
    {
        return;
    }
    debugFunc1();
    if (dword_6ADA20 && dword_6ADA24)
    {
        v0 = AIL_digital_handle_reacquire(dword_6ADA20);
        sub_581090();
        debugFunc1();
        if (v0)
        {
            dword_6ADA28 = 1;
            dword_6ADA24 = 0;
        }
        else
        {
            dword_6ADA28 = 0;
        }
    }
    else
    {
        debugFunc1();
    }
}
// 594410: using guessed type int __stdcall AIL_digital_handle_reacquire(_DWORD);
// 607106: using guessed type char byte_607106;
// 6ADA20: using guessed type int dword_6ADA20;
// 6ADA24: using guessed type int dword_6ADA24;
// 6ADA28: using guessed type int dword_6ADA28;
// 6ADA40: using guessed type char g_MaybeIsAllSoundDisabled;
// 6AE810: using guessed type int dword_6AE810;
// 6AE838: using guessed type int isSoundDisabled;

//----- (00583980) --------------------------------------------------------
int maybeSoundInit2()
{
    float v1; // [esp+0h] [ebp-10h]
    int i; // [esp+8h] [ebp-8h]

    g_UselessVariable3 = 1082130432;
    g_UselessVariable4 = 1123024896;
    dword_6AE2D4 = 0;
    sound3DProvider = 0;
    sound3DProviderName = 0;
    isMusicDisabled = 0;
    isSoundDisabled = 0;
    dword_6AE848 = LODWORD(flt_5A013C);
    is3DSoundEnabled = 0;
    dword_6ADA24 = 0;
    dword_6ADA28 = 1;
    g_IsSoundProviderClosed = 0;
    g_UselessVariable2 = 1;
    dword_6ADA38 = 0;
    dword_6ADA3C = 0;
    dword_6AE7FC = 1176256512;
    byte_6AE841 = -1;
    g_MaybeIsAllSoundDisabled = 0;
    for (i = 0; i < 385; ++i)
    {
        v1 = (float)(i + 128);
        g_maybeSoundsPlayBackRates[i] = (__int64)(v1 / 255.0 * 22050.0);
    }
    return 1;
}
// 5A013C: using guessed type float flt_5A013C;
// 6ADA24: using guessed type int dword_6ADA24;
// 6ADA28: using guessed type int dword_6ADA28;
// 6ADA2C: using guessed type int g_IsSoundProviderClosed;
// 6ADA30: using guessed type int g_UselessVariable2;
// 6ADA38: using guessed type int dword_6ADA38;
// 6ADA3C: using guessed type int dword_6ADA3C;
// 6ADA40: using guessed type char g_MaybeIsAllSoundDisabled;
// 6ADA44: using guessed type int sound3DProvider;
// 6ADA48: using guessed type int dword_6ADA48;
// 6AE2D4: using guessed type int dword_6AE2D4;
// 6AE7FC: using guessed type int dword_6AE7FC;
// 6AE80C: using guessed type char is3DSoundEnabled;
// 6AE834: using guessed type int isMusicDisabled;
// 6AE838: using guessed type int isSoundDisabled;
// 6AE841: using guessed type char byte_6AE841;
// 6AE848: using guessed type int dword_6AE848;
// 6AE84C: using guessed type int g_UselessVariable3;
// 6AE850: using guessed type int g_UselessVariable4;

//----- (0057E8A0) --------------------------------------------------------
int sub_57E8A0()
{
    int result; // eax

    writeDebug("Entered SND_Initialise.");
    maybeSoundInit2();
    sub_580D10();
    if (sub_5823BE(0, aFurfightersSrf, 0))
    {
        writeDebug("Finished SND_Initialise.");
        result = 1;
    }
    else
    {
        if (!isSoundDisabled)
            writeDebug("Could not load srf file");
        isSoundDisabled = 1;
        result = 0;
    }
    return result;
}
// 580D10: using guessed type int sub_580D10(void);
// 5823BE: using guessed type _DWORD __cdecl sub_5823BE(_DWORD, _DWORD, _DWORD);
// 583980: using guessed type int maybeSoundInit2(void);
// 6AE838: using guessed type int dword_6AE838;

//----- (0045CF8C) --------------------------------------------------------
int sub_45CF8C()
{
    int v1[257]; // [esp+0h] [ebp-47Ch] BYREF
    char v2[100]; // [esp+404h] [ebp-78h] BYREF
    HWND v3; // [esp+468h] [ebp-14h]
    int v4[4]; // [esp+46Ch] [ebp-10h] BYREF

    v4[0] = 5;
    v4[1] = 6;
    v4[2] = 7;
    strcpy(v2, "samples.srf");
    v2[68] = 32;
    v3 = hWnd;
    writeDebug("Initialising Sound Library...", 32);
    v4[3] = sub_57E8A0(v1);
    dword_5D1D00 = return0_2(aGeneralAfs);
    dword_5D1CE0 = return0_2(aHomeAfs);
    dword_5D1CE4 = return0_2(aNewykAfs);
    dword_5D1CE8 = return0_2(aDamAfs);
    dword_5D1CEC = return0_2(aSpaceAfs);
    dword_5D1CF0 = return0_2(aDinoAfs);
    dword_5D1CF4 = return0_2(aAngkhorAfs);
    dword_5D1CFC = dword_5D1CF4;
    dword_5D1CF8 = return0_2(aFinaleAfs);
    return0_10();
    return0_3();
    return0_3();
    byte_5D1CCC = 0;
    byte_5D1CCD = 0;
    byte_5D1CCE = 0;
    byte_5D1CCF = 0;
    emptyFunction8(v4, 3);
    return sub_583340(3);
}
// 57E8A0: using guessed type int __cdecl sub_57E8A0(_DWORD);
// 57EACA: using guessed type int sub_57EACA(void);
// 57EB92: using guessed type int __cdecl sub_57EB92(_DWORD);
// 57EBD4: using guessed type int __cdecl sub_57EBD4(_DWORD, _DWORD);
// 583340: using guessed type _DWORD __cdecl sub_583340(_DWORD);
// 5D1CCC: using guessed type char byte_5D1CCC;
// 5D1CCD: using guessed type char byte_5D1CCD;
// 5D1CCE: using guessed type char byte_5D1CCE;
// 5D1CCF: using guessed type char byte_5D1CCF;
// 5D1CE0: using guessed type int dword_5D1CE0;
// 5D1CE4: using guessed type int dword_5D1CE4;
// 5D1CE8: using guessed type int dword_5D1CE8;
// 5D1CEC: using guessed type int dword_5D1CEC;
// 5D1CF0: using guessed type int dword_5D1CF0;
// 5D1CF4: using guessed type int dword_5D1CF4;
// 5D1CF8: using guessed type int dword_5D1CF8;
// 5D1CFC: using guessed type int dword_5D1CFC;
// 5D1D00: using guessed type int dword_5D1D00;

//----- (0045D106) --------------------------------------------------------
void __cdecl sub_45D106(int a1)
{
    char v1[256]; // [esp+6Ch] [ebp-100h] BYREF

    if (!isSoundDisabled)
    {
        maybe_closeSound3DListener2();
        maybe_stopSounds2();
        sub_58273D();
        emptyFunction7(dword_5D1CE0[word_604306]);
        byte_6AE824 = 0;
        if (!strcmp("Miles Fast 2D Positional Audio", sound3DProviderName))
        {
            byte_5CB98A = byte_5A04B0;
            byte_5CB98B = byte_5A04B1;
            byte_5CB988 = byte_5A04B2;
            byte_5CB989 = byte_5A04B3;
            dword_5A0120 = dword_5A03E0;
            dword_5A0128 = dword_5A03E8;
            dword_5A0118 = (FILE*)dword_5A03D8;
            dword_5A0130 = (FILE*)dword_5A03F0;
            dword_5A0138 = dword_5A03F8;
            byte_6AE841 = byte_5A04C4;
            dword_5B50E4 = dword_5A04CC;
            dword_6AE844 = dword_5A04E0;
        }
        else if (!strcmp("RAD Game Tools RSX 3D Audio", sound3DProviderName))
        {
            byte_5CB98A = byte_5A04B4;
            byte_5CB98B = byte_5A04B5;
            byte_5CB988 = byte_5A04B6;
            byte_5CB989 = byte_5A04B7;
            dword_5A0120 = dword_5A0408;
            dword_5A0128 = dword_5A0410;
            dword_5A0118 = (FILE*)dword_5A0400;
            dword_5A0130 = (FILE*)dword_5A0418;
            dword_5A0138 = dword_5A0420;
            byte_6AE841 = byte_5A04C5;
            dword_5B50E4 = dword_5A04D0;
            dword_6AE844 = dword_5A04E4;
        }
        else if (!strcmp("DirectSound3D Hardware Support", sound3DProviderName))
        {
            byte_5CB98A = byte_5A04B8;
            byte_5CB98B = byte_5A04B9;
            byte_5CB988 = byte_5A04BA;
            byte_5CB989 = byte_5A04BB;
            dword_5A0120 = dword_5A0458;
            dword_5A0128 = dword_5A0460;
            dword_5A0118 = (FILE*)dword_5A0450;
            dword_5A0130 = (FILE*)dword_5A0468;
            dword_5A0138 = dword_5A0470;
            byte_6AE841 = byte_5A04C6;
            dword_5B50E4 = dword_5A04D4;
            dword_6AE844 = dword_5A04E8;
        }
        else if (!strcmp("DirectSound3D Software Emulation", sound3DProviderName))
        {
            byte_5CB98A = byte_5A04BC;
            byte_5CB98B = byte_5A04BD;
            byte_5CB988 = byte_5A04BE;
            byte_5CB989 = byte_5A04BF;
            dword_5A0120 = dword_5A0430;
            dword_5A0128 = dword_5A0438;
            dword_5A0118 = (FILE*)dword_5A0428;
            dword_5A0130 = (FILE*)dword_5A0440;
            dword_5A0138 = dword_5A0448;
            byte_6AE841 = byte_5A04C7;
            dword_5B50E4 = dword_5A04D8;
            dword_6AE844 = dword_5A04EC;
        }
        else if (!strcmp("Creative Labs EAX (TM)", sound3DProviderName))
        {
            byte_5CB98A = byte_5A04C0;
            byte_5CB98B = byte_5A04C1;
            byte_5CB988 = byte_5A04C2;
            byte_5CB989 = byte_5A04C3;
            dword_5A0120 = dword_5A0480;
            dword_5A0128 = dword_5A0488;
            dword_5A0118 = (FILE*)dword_5A0478;
            dword_5A0130 = (FILE*)dword_5A0490;
            dword_5A0138 = dword_5A0498;
            byte_6AE841 = byte_5A04C8;
            dword_5B50E4 = dword_5A04DC;
            dword_6AE844 = dword_5A04F0;
        }
        if (off_5A0214[a1])
        {
            strcpy(v1, off_5A0214[a1]);
            strcat(v1, ".srf");
            sub_5823BE(3, v1, (void*)1);
        }
        sub_5827C4();
        sub_5823BE(1, "dialog1.srf", (void*)2);
        sub_582C46();
    }
}
// 57E939: using guessed type int sub_57E939(void);
// 57EB8D: using guessed type int __cdecl sub_57EB8D(_DWORD);
// 58273D: using guessed type int sub_58273D(void);
// 5827C4: using guessed type int sub_5827C4(void);
// 582C46: using guessed type int sub_582C46(void);
// 5A0120: using guessed type int dword_5A0120;
// 5A0128: using guessed type int dword_5A0128;
// 5A0138: using guessed type int dword_5A0138;
// 5A0214: using guessed type char *off_5A0214[2];
// 5A03D8: using guessed type int dword_5A03D8;
// 5A03E0: using guessed type int dword_5A03E0;
// 5A03E8: using guessed type int dword_5A03E8;
// 5A03F0: using guessed type int dword_5A03F0;
// 5A03F8: using guessed type int dword_5A03F8;
// 5A0400: using guessed type int dword_5A0400;
// 5A0408: using guessed type int dword_5A0408;
// 5A0410: using guessed type int dword_5A0410;
// 5A0418: using guessed type int dword_5A0418;
// 5A0420: using guessed type int dword_5A0420;
// 5A0428: using guessed type int dword_5A0428;
// 5A0430: using guessed type int dword_5A0430;
// 5A0438: using guessed type int dword_5A0438;
// 5A0440: using guessed type int dword_5A0440;
// 5A0448: using guessed type int dword_5A0448;
// 5A0450: using guessed type int dword_5A0450;
// 5A0458: using guessed type int dword_5A0458;
// 5A0460: using guessed type int dword_5A0460;
// 5A0468: using guessed type int dword_5A0468;
// 5A0470: using guessed type int dword_5A0470;
// 5A0478: using guessed type int dword_5A0478;
// 5A0480: using guessed type int dword_5A0480;
// 5A0488: using guessed type int dword_5A0488;
// 5A0490: using guessed type int dword_5A0490;
// 5A0498: using guessed type int dword_5A0498;
// 5A04B0: using guessed type char byte_5A04B0;
// 5A04B1: using guessed type char byte_5A04B1;
// 5A04B2: using guessed type char byte_5A04B2;
// 5A04B3: using guessed type char byte_5A04B3;
// 5A04B4: using guessed type char byte_5A04B4;
// 5A04B5: using guessed type char byte_5A04B5;
// 5A04B6: using guessed type char byte_5A04B6;
// 5A04B7: using guessed type char byte_5A04B7;
// 5A04B8: using guessed type char byte_5A04B8;
// 5A04B9: using guessed type char byte_5A04B9;
// 5A04BA: using guessed type char byte_5A04BA;
// 5A04BB: using guessed type char byte_5A04BB;
// 5A04BC: using guessed type char byte_5A04BC;
// 5A04BD: using guessed type char byte_5A04BD;
// 5A04BE: using guessed type char byte_5A04BE;
// 5A04BF: using guessed type char byte_5A04BF;
// 5A04C0: using guessed type char byte_5A04C0;
// 5A04C1: using guessed type char byte_5A04C1;
// 5A04C2: using guessed type char byte_5A04C2;
// 5A04C3: using guessed type char byte_5A04C3;
// 5A04C4: using guessed type char byte_5A04C4;
// 5A04C5: using guessed type char byte_5A04C5;
// 5A04C6: using guessed type char byte_5A04C6;
// 5A04C7: using guessed type char byte_5A04C7;
// 5A04C8: using guessed type char byte_5A04C8;
// 5A04CC: using guessed type int dword_5A04CC;
// 5A04D0: using guessed type int dword_5A04D0;
// 5A04D4: using guessed type int dword_5A04D4;
// 5A04D8: using guessed type int dword_5A04D8;
// 5A04DC: using guessed type int dword_5A04DC;
// 5A04E0: using guessed type int dword_5A04E0;
// 5A04E4: using guessed type int dword_5A04E4;
// 5A04E8: using guessed type int dword_5A04E8;
// 5A04EC: using guessed type int dword_5A04EC;
// 5A04F0: using guessed type int dword_5A04F0;
// 5B50E4: using guessed type int dword_5B50E4;
// 5CB988: using guessed type char byte_5CB988;
// 5CB989: using guessed type char byte_5CB989;
// 5CB98A: using guessed type char byte_5CB98A;
// 5CB98B: using guessed type char byte_5CB98B;
// 5D1CE0: using guessed type int dword_5D1CE0[];
// 604306: using guessed type __int16 word_604306;
// 6ADA48: using guessed type int dword_6ADA48;
// 6AE824: using guessed type char byte_6AE824;
// 6AE838: using guessed type int isSoundDisabled;
// 6AE841: using guessed type char byte_6AE841;
// 6AE844: using guessed type int dword_6AE844;

//----- (0045DFCE) --------------------------------------------------------
__int16 __cdecl sub_45DFCE(int a1, FILE* Stream, int a3, wctype_t Type)
{
    __int16 v5; // ax
    float v6; // [esp+8h] [ebp-8h]
    __int16 C; // [esp+Ch] [ebp-4h]

    if (isSoundDisabled)
        return -1;
    if (is3DSoundEnabled && !dword_6AE820 || dword_668788 == 1)
    {
        if (a3 == (unsigned __int8)byte_5CB98A)
        {
            v5 = sub_45E30E(a1, Stream, a3, dword_5A04A0);
        }
        else if (a3 == (unsigned __int8)byte_5CB98B)
        {
            v5 = sub_45E30E(a1, Stream, a3, dword_5A04A4);
        }
        else if (a3 == (unsigned __int8)byte_5CB988)
        {
            v5 = sub_45E30E(a1, Stream, a3, dword_5A04A8);
        }
        else
        {
            v6 = (float)(unsigned __int8)(__int64)*(float*)&dword_5A0118;
            if (a3 == -1)
                v5 = sub_45E30E(a1, Stream, -1, SLODWORD(v6));
            else
                v5 = sub_45E30E(a1, Stream, a3, SLODWORD(v6));
        }
        C = v5;
    }
    else
    {
        C = sub_57F848(a1);
        sub_57E95F(C, a3);
    }
    if ((__int16)Type != -1)
        is_wctype(C, Type);
    return C;
}
// 5A04A0: using guessed type int dword_5A04A0;
// 5A04A4: using guessed type int dword_5A04A4;
// 5A04A8: using guessed type int dword_5A04A8;
// 5CB988: using guessed type char byte_5CB988;
// 5CB98A: using guessed type char byte_5CB98A;
// 5CB98B: using guessed type char byte_5CB98B;
// 668788: using guessed type int dword_668788;
// 6AE80C: using guessed type char is3DSoundEnabled;
// 6AE820: using guessed type int dword_6AE820;
// 6AE838: using guessed type int isSoundDisabled;

//----- (0057F07D) --------------------------------------------------------
int __cdecl sub_57F07D(__int16 a1, char a2)
{
    int result; // eax
    int v3; // ecx

    if (a1 == -1)
        return 0;
    if (isSoundDisabled)
        return 0;
    v3 = a1 & 0x8000;
    if (v3 == 0x8000)
        return maybe_setSound3DVolume2(a1, a2);
    LOBYTE(v3) = a2;
    if (maybe_setSound3DVolume(sound3DSampleHandle[a1], v3))
    {
        debugFunc1();
        result = 1;
    }
    else
    {
        debugFunc1();
        result = 0;
    }
    return result;
}
// 580347: using guessed type _DWORD __cdecl sub_580347(__int16, _DWORD);
// 58048D: using guessed type _DWORD __cdecl sub_58048D(_DWORD, _DWORD);
// 607114: using guessed type char byte_607114;
// 607115: using guessed type char byte_607115;
// 6AE838: using guessed type int dword_6AE838;

//----- (0057E95F) --------------------------------------------------------
int __cdecl sub_57E95F(__int16 a1, char a2)
{
    return sub_57F07D(a1, a2);
}

//----- (0057F848) --------------------------------------------------------
__int16 __cdecl sub_57F848(int a1)
{
    __int16 result; // ax
    __int64 v2; // rax
    float v3; // [esp+0h] [ebp-38h]
    float v4; // [esp+8h] [ebp-30h]
    float v5; // [esp+10h] [ebp-28h]
    float v6; // [esp+18h] [ebp-20h]
    __int16 i; // [esp+28h] [ebp-10h]
    float v8; // [esp+2Ch] [ebp-Ch]
    float v9; // [esp+2Ch] [ebp-Ch]

    if (isSoundDisabled)
        return -1;
    for (i = 0; i < 16 && AIL_sample_status(soundSampleHandle[i]) != 2; ++i)
        ;
    if (i != 16
        && HIWORD(a1) < 0x11u
        && (unsigned __int16)a1 <= (int)(unsigned __int16)word_6AE568[HIWORD(a1)]
        && dword_6AE4D8[HIWORD(a1)]
        && dword_6AE520[HIWORD(a1)])
    {
        AIL_init_sample(soundSampleHandle[i]);
        AIL_set_sample_type(soundSampleHandle[i], 1, 0);
        AIL_set_sample_address(
            soundSampleHandle[i],
            dword_6AE4D8[HIWORD(a1)] + *(_DWORD*)(dword_6AE520[HIWORD(a1)] + 28 * (unsigned __int16)a1 + 4) + 32,
            *(_DWORD*)(dword_6AE520[HIWORD(a1)] + 28 * (unsigned __int16)a1 + 8) - 32);
        AIL_set_sample_playback_rate(
            soundSampleHandle[i],
            *(_DWORD*)(dword_6AE520[HIWORD(a1)] + 28 * (unsigned __int16)a1 + 16));
        if ((*(_BYTE*)(dword_6AE520[HIWORD(a1)] + 28 * (unsigned __int16)a1) & 8) != 0)
            AIL_set_sample_loop_count(soundSampleHandle[i], 0);
        v6 = (float)(unsigned __int8)byte_6AE840;
        v8 = v6 / 255.0;
        v5 = (float)255;
        v2 = (__int64)(v5 * v8);
        v4 = (float)(unsigned __int8)byte_6AE841;
        v9 = v4 / 255.0;
        v3 = (float)(unsigned __int8)v2;
        AIL_set_sample_volume(soundSampleHandle[i], (unsigned __int8)(__int64)(v3 * v9) >> 1);
        AIL_start_sample(soundSampleHandle[i]);
        dword_6AE58C[3 * i] = a1;
        dword_6AE590[3 * i] = 0;
        dword_6AE594[3 * i] = 0;
        GetSoundMsCountFormatted();
        debugFunc1();
        result = i | 0x8000;
    }
    else
    {
        debugFunc1();
        result = -1;
    }
    return result;
}
// 594394: using guessed type int __stdcall AIL_start_sample(_DWORD);
// 594398: using guessed type int __stdcall AIL_set_sample_volume(_DWORD, _DWORD);
// 59439C: using guessed type int __stdcall AIL_set_sample_loop_count(_DWORD, _DWORD);
// 5943A0: using guessed type int __stdcall AIL_set_sample_playback_rate(_DWORD, _DWORD);
// 5943A4: using guessed type int __stdcall AIL_set_sample_address(_DWORD, _DWORD, _DWORD);
// 5943A8: using guessed type int __stdcall AIL_set_sample_type(_DWORD, _DWORD, _DWORD);
// 5943AC: using guessed type int __stdcall AIL_init_sample(_DWORD);
// 5943B0: using guessed type int __stdcall AIL_sample_status(_DWORD);
// 607108: using guessed type char byte_607108;
// 607109: using guessed type char byte_607109;
// 6AE4D8: using guessed type int dword_6AE4D8[];
// 6AE520: using guessed type int dword_6AE520[];
// 6AE58C: using guessed type int dword_6AE58C[];
// 6AE590: using guessed type int dword_6AE590[];
// 6AE838: using guessed type int isSoundDisabled;
// 6AE840: using guessed type char byte_6AE840;
// 6AE841: using guessed type char byte_6AE841;

//----- (0057FBCF) --------------------------------------------------------
int __cdecl sub_57FBCF(__int16 a1)
{
    int result; // eax

    if (isSoundDisabled)
        return 0;
    if (a1 >= 0 && a1 <= 15 && soundSampleHandle[a1])
    {
        AIL_end_sample(soundSampleHandle[a1]);
        debugFunc1();
        result = 1;
    }
    else
    {
        debugFunc1();
        result = 0;
    }
    return result;
}
// 5943B4: using guessed type int __stdcall AIL_end_sample(_DWORD);
// 60710B: using guessed type char byte_60710B;
// 6AE838: using guessed type int isSoundDisabled;

//----- (0057FC47) --------------------------------------------------------
int __cdecl sub_57FC47(int a1)
{
    int result; // eax
    int v2; // [esp+0h] [ebp-4h]

    if (isSoundDisabled)
        return 0;
    if (!a1)
        return 0;
    v2 = AIL_3D_sample_status(a1);
    if (v2 == 4 || v2 == 16)
    {
        AIL_end_3D_sample(a1);
        result = 1;
    }
    else
    {
        debugFunc1();
        result = 0;
    }
    return result;
}
// 594374: using guessed type int __stdcall AIL_3D_sample_status(_DWORD);
// 5943B8: using guessed type int __stdcall AIL_end_3D_sample(_DWORD);
// 60710B: using guessed type char byte_60710B;
// 6AE838: using guessed type int isSoundDisabled;

//----- (00580681) --------------------------------------------------------
int __cdecl sub_580681(__int16 a1, int a2, int a3)
{
    int result; // eax
    int v4; // [esp+0h] [ebp-4h]
    __int16 v5; // [esp+Ch] [ebp+8h]

    if (isSoundDisabled)
        return 0;
    if (a1 == -1 || (a1 & 0x7FFFu) >= 0x10)
    {
        debugFunc1();
        result = 0;
    }
    else
    {
        v5 = a1 & 0x7FFF;
        v4 = AIL_sample_status(soundSampleHandle[v5]);
        if (v4 != 4 && v4 != 16)
        {
            GetSoundMsCountFormatted(v5);
            debugFunc1();
        }
        if (dword_6AE590[3 * v5])
        {
            GetSoundMsCountFormatted(v5);
            debugFunc1();
        }
        if (dword_6AE590[3 * v5])
        {
            GetSoundMsCountFormatted(v5);
            debugFunc1();
        }
        dword_6AE590[3 * v5] = a2;
        dword_6AE594[3 * v5] = a3;
        result = 1;
    }
    return result;
}
// 5943B0: using guessed type int __stdcall AIL_sample_status(_DWORD);
// 607106: using guessed type char byte_607106;
// 6AE590: using guessed type int dword_6AE590[];
// 6AE838: using guessed type int isSoundDisabled;

//----- (0058079B) --------------------------------------------------------
int __cdecl sub_58079B(__int16 a1)
{
    __int16 v2; // [esp+10h] [ebp+8h]

    if (isSoundDisabled)
        return 0;
    if ((a1 & 0x8000) != 0)
    {
        if ((a1 & 0x8000) == 0x8000)
        {
            v2 = a1 & 0x7FFF;
            if (v2 < 0 || v2 > 15)
                return 0;
            if (!AIL_sample_loop_count(soundSampleHandle[v2]))
                return 1;
        }
    }
    else if (!AIL_3D_sample_loop_count(sound3DSampleHandle[a1]))
    {
        return 1;
    }
    return 0;
}
// 5943D4: using guessed type int __stdcall AIL_3D_sample_loop_count(_DWORD);
// 5943D8: using guessed type int __stdcall AIL_sample_loop_count(_DWORD);
// 6AE838: using guessed type int isSoundDisabled;

//----- (00580FB2) --------------------------------------------------------
void sub_580FB2()
{
    int i; // [esp+0h] [ebp-4h]

    if (!isSoundDisabled)
    {
        if (g_IsSoundProviderClosed)
        {
            debugFunc1();
            for (i = 0; i < numSound3DSampleHandles; ++i)
            {
                sound3DSampleHandle[i] = AIL_allocate_3D_sample_handle(sound3DProvider);
                if (!sound3DSampleHandle[i])
                    break;
            }
            numSound3DSampleHandles = i;
            dword_6AE820 = i <= 16;
            debugFunc1();
        }
        else
        {
            debugFunc1();
        }
    }
}
// 5943EC: using guessed type int __stdcall AIL_allocate_3D_sample_handle(_DWORD);
// 607104: using guessed type char byte_607104;
// 6ADA2C: using guessed type int g_IsSoundProviderClosed;
// 6ADA44: using guessed type int dword_6ADA44;
// 6AE81C: using guessed type int dword_6AE81C;
// 6AE820: using guessed type int dword_6AE820;
// 6AE838: using guessed type int isSoundDisabled;

//----- (005822AE) --------------------------------------------------------
int sub_5822AE()
{
    int i; // [esp+8h] [ebp-4h]

    for (i = 0; i < g_NumAudioProviders; ++i)
    {
        if (!strcmp((const char*)&unk_6ADA50 + 68 * i, "Creative Labs EAX (TM)"))
            return 1;
    }
    return 0;
}
// 6AE2D0: using guessed type int g_NumAudioProviders;

//----- (0058236B) --------------------------------------------------------
int sub_58236B()
{
    return *(_DWORD*)&g_SpeakerTypeId;
}

//----- (005823BE) --------------------------------------------------------
int __cdecl sub_5823BE(int a1, const char* fileResource, void* a3)
{
    int result; // eax
    int v4; // edx
    void* v5; // eax
    void* v6; // eax
    int v7; // eax
    int Size; // [esp+14h] [ebp-118h]
    size_t Sizea; // [esp+14h] [ebp-118h]
    int v10; // [esp+1Ch] [ebp-110h]
    __int16* v11; // [esp+20h] [ebp-10Ch]
    __int16* v12; // [esp+20h] [ebp-10Ch]
    char* v13; // [esp+20h] [ebp-10Ch]
    char* v14; // [esp+20h] [ebp-10Ch]
    char FileName[256]; // [esp+24h] [ebp-108h] BYREF
    __int16 v16; // [esp+124h] [ebp-8h]
    int v17; // [esp+128h] [ebp-4h] BYREF

    if (isSoundDisabled)
        return 0;
    strcpy(FileName, "samples\\");
    strcat(FileName, fileResource);
    debugFunc1((unsigned __int8)byte_607104, "Loading sample resource file %s...", fileResource);
    v11 = (__int16*)someLoadFile(FileName, (int)&v17);
    if (v11)
    {
        word_6AE568[a1] = *v11;
        v12 = v11 + 1;
        v16 = *v12++;
        v10 = *(_DWORD*)v12;
        v13 = (char*)(v12 + 2);
        Size = 28 * (unsigned __int16)word_6AE568[a1];
        v5 = a3;
        if (a3)
        {
            if (a3 == (void*)1)
            {
                v5 = (void*)maybe_allocateMemory(Size);
                dword_6AE520[a1] = (int)v5;
            }
        }
        else
        {
            v5 = malloc(Size);
            dword_6AE520[a1] = (int)v5;
        }
        if (dword_6AE520[a1])
        {
            qmemcpy((void*)dword_6AE520[a1], v13, Size);
            v14 = &v13[Size];
            Sizea = v10 - Size;
            v6 = a3;
            if (a3)
            {
                if (a3 == (void*)1)
                {
                    v6 = (void*)maybe_allocateMemory(Sizea);
                    dword_6AE4D8[a1] = (int)v6;
                }
            }
            else
            {
                v6 = malloc(Sizea);
                dword_6AE4D8[a1] = (int)v6;
            }
            if (dword_6AE4D8[a1])
            {
                qmemcpy((void*)dword_6AE4D8[a1], v14, Sizea);
                v7 = sub_53F213();
                LOBYTE(v7) = byte_607104;
                debugFunc1(v7, "Loaded %s into bank %d.", fileResource, a1);
                result = 1;
            }
            else
            {
                LOBYTE(v6) = byte_607104;
                debugFunc1(v6, aSampleDataAllo);
                result = 0;
            }
        }
        else
        {
            LOBYTE(v5) = byte_607104;
            debugFunc1(v5, aSampleHeaderSe);
            result = 0;
        }
    }
    else
    {
        LOBYTE(v4) = byte_607104;
        debugFunc1(v4, aCouldNotLoadSa);
        result = 0;
    }
    return result;
}
// 582481: variable 'v4' is possibly undefined
// 583B2A: using guessed type int sub_583B2A(_DWORD, const char *, ...);
// 607104: using guessed type char byte_607104;
// 6AE4D8: using guessed type int dword_6AE4D8[];
// 6AE520: using guessed type int dword_6AE520[];
// 6AE838: using guessed type int dword_6AE838;

//----- (00582687) --------------------------------------------------------
int maybeClearDialogBankData()
{
    int v1; // [esp+4h] [ebp-8h]
    int v2; // [esp+8h] [ebp-4h]

    if (isSoundDisabled)
        return 0;
    if (g_maybeDialogBankSampleData)
        memset((void*)g_maybeDialogBankSampleData, 0, 0x53020u);
    else
        debugFunc1(byte_607104, "* Clear dialog main bank sample data : is NULL *");
    if (g_maybeDialogBankHeaderData)
        memset((void*)g_maybeDialogBankHeaderData, 0, 0x214u);
    else
        debugFunc1(byte_607104, "* Clear dialog main bank header data : is NULL *");
    v2 = g_maybeDialogBankSampleData;
    v1 = g_maybeDialogBankHeaderData;
    g_maybeDialogBankSampleData = dword_6AE4E0;
    g_maybeDialogBankHeaderData = dword_6AE528;
    dword_6AE4E0 = v2;
    dword_6AE528 = v1;
    return 1;
}
// 583B2A: using guessed type int sub_583B2A(_DWORD, const char *, ...);
// 607104: using guessed type char byte_607104;
// 6AE4DC: using guessed type int g_maybeDialogBankSampleData;
// 6AE4E0: using guessed type int dword_6AE4E0;
// 6AE524: using guessed type int g_maybeDialogBankHeaderData;
// 6AE528: using guessed type int dword_6AE528;
// 6AE838: using guessed type int dword_6AE838;

//----- (00439174) --------------------------------------------------------
int sub_439174()
{
    int v1; // [esp+8h] [ebp-108h]
    int v2; // [esp+Ch] [ebp-104h]
    char v3[256]; // [esp+10h] [ebp-100h] BYREF

    if (dword_6067A4 == -1 && dword_606750[dword_606798] != -1)
    {
        v2 = dword_606750[dword_606798];
        if (!v2)
            v2 = dword_59E358[dword_605CFC];
        v1 = dword_59E224[v2];
        strcpy(v3, off_59E2C4[v2]);
        strcat(v3, ".srf");
        sub_5823BE(2, v3, (void*)2);
        dword_6067A8 = 2;
        dword_6067AC = v1;
        dword_6067A4 = v1;
        dword_606748 = v2;
        ++dword_606798;
    }
    if (dword_6067A0 == -1 && !byte_6AE824)
    {
        maybeClearDialogBankData();
        dword_6067A0 = dword_6067AC;
        dword_60674C = dword_606748;
        dword_6067A4 = -1;
    }
    return 1;
}
// 59E2C4: using guessed type char *off_59E2C4[37];
// 605CFC: using guessed type int dword_605CFC;
// 606748: using guessed type int dword_606748;
// 60674C: using guessed type int dword_60674C;
// 606750: using guessed type int dword_606750[];
// 606798: using guessed type int dword_606798;
// 6067A0: using guessed type int dword_6067A0;
// 6067A4: using guessed type int dword_6067A4;
// 6067A8: using guessed type int dword_6067A8;
// 6067AC: using guessed type int dword_6067AC;
// 6AE824: using guessed type char byte_6AE824;

//----- (00438DD2) --------------------------------------------------------
int sub_438DD2()
{
    int result; // eax

    if (!dword_605CAC)
        return -1;
    if (word_606728[dword_60672C] == -1)
    {
        if (dword_606790)
        {
            --dword_606790;
            result = dword_60674C;
        }
        else
        {
            result = -1;
        }
    }
    else
    {
        dword_606790 = dword_59E014;
        result = dword_60674C;
    }
    return result;
}
// 59E014: using guessed type int dword_59E014;
// 605CAC: using guessed type int dword_605CAC;
// 606728: using guessed type __int16 word_606728[];
// 60672C: using guessed type int dword_60672C;
// 60674C: using guessed type int dword_60674C;
// 606790: using guessed type int dword_606790;

//----- (00438C3A) --------------------------------------------------------
int sub_438C3A()
{
    int result; // eax

    switch (sub_438DD2())
    {
    case 0:
        result = 0;
        break;
    case 1:
        result = 7;
        break;
    case 2:
        result = 7;
        break;
    case 3:
        result = 0;
        break;
    case 4:
        result = 0;
        break;
    case 5:
        result = 0;
        break;
    case 6:
        result = 0;
        break;
    case 7:
        result = 0;
        break;
    case 8:
        result = 0;
        break;
    case 9:
        result = 4;
        break;
    case 10:
        result = 6;
        break;
    case 11:
        result = 1;
        break;
    case 12:
        result = 1;
        break;
    case 13:
        result = 1;
        break;
    case 14:
        result = 1;
        break;
    case 15:
        result = 1;
        break;
    case 16:
        result = 1;
        break;
    case 17:
        result = 1;
        break;
    case 18:
        result = 3;
        break;
    case 19:
        result = 2;
        break;
    case 20:
        result = 6;
        break;
    case 21:
        result = 1;
        break;
    case 22:
        result = 1;
        break;
    case 23:
        result = 1;
        break;
    case 24:
        result = 1;
        break;
    case 25:
        result = 1;
        break;
    case 26:
        result = 1;
        break;
    case 27:
        result = 6;
        break;
    case 28:
        result = 1;
        break;
    case 29:
        result = 1;
        break;
    case 30:
        result = 1;
        break;
    default:
        result = 7;
        break;
    }
    return result;
}

//----- (0057EFC8) --------------------------------------------------------
int __cdecl sub_57EFC8(__int16 a1, unsigned __int16 a2)
{
    int result; // eax

    if (a1 == -1)
        return 0;
    if (isSoundDisabled)
        return 0;
    if ((a1 & 0x8000) == 0x8000)
        return maybe_setSound3DPlaybackRate2(a1, a2);
    if (maybe_setSound3DPlaybackRate(sound3DSampleHandle[a1], a2))
    {
        debugFunc1();
        result = 1;
    }
    else
    {
        debugFunc1();
        result = 0;
    }
    return result;
}
// 60710D: using guessed type char byte_60710D;
// 6AE838: using guessed type int isSoundDisabled;

//----- (0057F55F) --------------------------------------------------------
int __cdecl sub_57F55F(int a1, int a2, unsigned __int8 a3, int a4)
{
    int result; // eax
    float v5; // [esp+0h] [ebp-40h]
    float v6; // [esp+8h] [ebp-38h]
    float v7; // [esp+14h] [ebp-2Ch]
    int v8[9]; // [esp+18h] [ebp-28h] BYREF
    int v9; // [esp+3Ch] [ebp-4h]

    if (isSoundDisabled)
        return 0;
    if (a1 >= 0
        && a1 < numSound3DSampleHandles
        && HIWORD(a2) < 0x11u
        && (LOWORD(v9) = a2, (unsigned __int16)a2 <= (int)(unsigned __int16)word_6AE568[HIWORD(a2)]))
    {
        v8[0] = 1;
        v8[1] = dword_6AE4D8[HIWORD(a2)] + *(_DWORD*)(dword_6AE520[HIWORD(a2)] + 28 * (unsigned __int16)v9 + 4) + 32;
        v8[2] = *(_DWORD*)(dword_6AE520[HIWORD(a2)] + 28 * (unsigned __int16)v9 + 8) - 32;
        v8[3] = 22050;
        v8[4] = 16;
        v8[5] = 1;
        AIL_set_3D_sample_info(sound3DSampleHandle[a1], v8);
        AIL_start_3D_sample(sound3DSampleHandle[a1]);
        if ((*(_BYTE*)(dword_6AE520[HIWORD(a2)] + 28 * (unsigned __int16)v9) & 8) != 0)
            AIL_set_3D_sample_loop_count(sound3DSampleHandle[a1], 0);
        AIL_set_3D_position(sound3DSampleHandle[a1], 0, 0, 0);
        v6 = (float)(unsigned __int8)byte_6AE840;
        v7 = v6 / 255.0;
        v5 = (float)a3;
        AIL_set_3D_sample_volume(sound3DSampleHandle[a1], (unsigned __int8)(__int64)(v5 * v7) >> 1);
        AIL_set_3D_orientation(sound3DSampleHandle[a1], 0, 1065353216, 0, 0, 1065353216, 0);
        AIL_set_3D_sample_distances(sound3DSampleHandle[a1], dword_6AE7FC, a4);
        AIL_set_3D_user_data(sound3DSampleHandle[a1], 0, (__int64)*(float*)&dword_5A011C);
        if (is3DSoundEnabled)
        {
            if (dword_6AE810 == 17)
                AIL_set_3D_sample_effects_level(sound3DSampleHandle[a1], 0);
            else
                AIL_set_3D_sample_effects_level(sound3DSampleHandle[a1], dword_6AE814);
        }
        GetSoundMsCountFormatted();
        debugFunc1();
        result = sound3DSampleHandle[a1];
    }
    else
    {
        debugFunc1();
        result = 0;
    }
    return result;
}
// 594358: using guessed type int __stdcall AIL_set_3D_sample_volume(_DWORD, _DWORD);
// 594370: using guessed type int __stdcall AIL_set_3D_user_data(_DWORD, _DWORD, _DWORD);
// 594378: using guessed type int __stdcall AIL_start_3D_sample(_DWORD);
// 59437C: using guessed type int __stdcall AIL_set_3D_sample_effects_level(_DWORD, _DWORD);
// 594380: using guessed type int __stdcall AIL_set_3D_sample_distances(_DWORD, _DWORD, _DWORD);
// 594384: using guessed type int __stdcall AIL_set_3D_orientation(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 594388: using guessed type int __stdcall AIL_set_3D_position(_DWORD, _DWORD, _DWORD, _DWORD);
// 59438C: using guessed type int __stdcall AIL_set_3D_sample_loop_count(_DWORD, _DWORD);
// 594390: using guessed type int __stdcall AIL_set_3D_sample_info(_DWORD, _DWORD);
// 607108: using guessed type char byte_607108;
// 607109: using guessed type char byte_607109;
// 6AE4D8: using guessed type int dword_6AE4D8[];
// 6AE520: using guessed type int dword_6AE520[];
// 6AE7FC: using guessed type int dword_6AE7FC;
// 6AE80C: using guessed type char is3DSoundEnabled;
// 6AE810: using guessed type int dword_6AE810;
// 6AE814: using guessed type int dword_6AE814;
// 6AE81C: using guessed type int numSound3DSampleHandles;
// 6AE838: using guessed type int isSoundDisabled;
// 6AE840: using guessed type char byte_6AE840;

//----- (005827C4) --------------------------------------------------------
void sub_5827C4()
{
    g_maybeDialogBankHeaderData = maybe_allocateMemory(532);
    if (!g_maybeDialogBankHeaderData
        || (dword_6AE528 = maybe_allocateMemory(532)) == 0
        || (g_maybeDialogBankSampleData = maybe_allocateMemory(340000)) == 0
        || (dword_6AE4E0 = maybe_allocateMemory(340000)) == 0)
    {
        debugFunc1();
    }
}
// 607104: using guessed type char byte_607104;
// 6AE4DC: using guessed type int g_maybeDialogBankSampleData;
// 6AE4E0: using guessed type int dword_6AE4E0;
// 6AE524: using guessed type int g_maybeDialogBankHeaderData;
// 6AE528: using guessed type int dword_6AE528;

//----- (00582CA9) --------------------------------------------------------
void sub_582CA9()
{
    if (!isSoundDisabled)
    {
        if (dword_6ADA38)
        {
            AIL_stop_timer(ailSoundTimerId);
            debugFunc1();
            dword_6ADA38 = 0;
            dword_6ADA3C = 0;
        }
        else
        {
            debugFunc1();
        }
    }
}
// 59442C: using guessed type int __stdcall AIL_stop_timer(_DWORD);
// 607104: using guessed type char byte_607104;
// 6ADA34: using guessed type int ailSoundTimerId;
// 6ADA38: using guessed type int dword_6ADA38;
// 6ADA3C: using guessed type int dword_6ADA3C;
// 6AE838: using guessed type int isSoundDisabled;

//----- (00583340) --------------------------------------------------------
int __cdecl sub_583340(int a1)
{
    int result; // eax

    result = a1;
    dword_5C609C = a1;
    return result;
}
// 5C609C: using guessed type int dword_5C609C;

//----- (005834A8) --------------------------------------------------------
int sub_5834A8()
{
    if (!isMusicDisabled)
        dword_6AD9C8 = 1;
    return 0;
}
// 6AD9C8: using guessed type int dword_6AD9C8;
// 6AE834: using guessed type int isMusicDisabled;

//----- (005834C6) --------------------------------------------------------
int sub_5834C6()
{
    if (!isMusicDisabled)
        dword_6AD9C8 = 2;
    return 0;
}
// 6AD9C8: using guessed type int dword_6AD9C8;
// 6AE834: using guessed type int dword_6AE834;

//----- (00583507) --------------------------------------------------------
int __cdecl maybe_startMusic(unsigned __int8 a1)
{
    char* v2; // eax

    if (!isMusicDisabled)
    {
        v2 = getFormattedString("Music\\%s", *(const char**)&off_5B4958[4 * a1]);
        maybe_startSoundStream(0, (int)v2);
        byte_6AD9D0 = a1;
    }
    return 0;
}
// 6AD9D0: using guessed type char byte_6AD9D0;
// 6AE834: using guessed type int isMusicDisabled;

//----- (005835EC) --------------------------------------------------------
int sub_5835EC()
{
    int result; // eax
    int* v1; // [esp+4h] [ebp-8h]
    int i; // [esp+8h] [ebp-4h]

    if (!isMusicDisabled)
    {
        for (i = 0; i < dword_5C609C; ++i)
        {
            v1 = &dword_6AD9C0[6 * i];
            if (*v1)
            {
                AIL_set_stream_volume(*v1, v1[1] >> 1);
                switch (v1[2])
                {
                case 1:
                    startSoundStream(i);
                    v1[2] = 0;
                    break;
                case 2:
                    empyFunt_xx2();
                    maybe_closeStream(i);
                    v1[2] = 0;
                    break;
                case 3:
                    pauseSoundStream(i);
                    v1[2] = 0;
                    break;
                case 4:
                    resumeSoundStream(i);
                    v1[2] = 0;
                    break;
                default:
                    break;
                }
            }
            result = i + 1;
        }
    }
    return result;
}
// 594444: using guessed type int __stdcall AIL_set_stream_volume(_DWORD, _DWORD);
// 5C609C: using guessed type int dword_5C609C;
// 6AD9C0: using guessed type int dword_6AD9C0[];
// 6AE834: using guessed type int isMusicDisabled;

//----- (005836F8) --------------------------------------------------------
void sub_5836F8()
{
    int i; // [esp+0h] [ebp-4h]

    if (!isMusicDisabled)
    {
        for (i = 0; i < dword_5C609C; ++i)
        {
            if (dword_6AD9C0[6 * i])
            {
                dword_6AD9D4[6 * i] = AIL_stream_position(dword_6AD9C0[6 * i]);
                maybe_closeStream(i);
            }
            else
            {
                dword_6AD9D4[6 * i] = -1;
            }
        }
    }
}
// 594448: using guessed type int __stdcall AIL_stream_position(_DWORD);
// 5C609C: using guessed type int dword_5C609C;
// 6AD9C0: using guessed type int dword_6AD9C0[];
// 6AE834: using guessed type int isMusicDisabled;

//----- (00583776) --------------------------------------------------------
void sub_583776()
{
    char* v0; // eax
    int i; // [esp+0h] [ebp-4h]

    if (!isMusicDisabled)
    {
        for (i = 0; i < dword_5C609C; ++i)
        {
            if (dword_6AD9D4[6 * i] != -1)
            {
                v0 = getFormattedString("Music\\%s", *(const char**)&off_5B4958[4 * (unsigned __int8)byte_6AD9D0[24 * i]]);
                maybe_startSoundStream(i, (int)v0);
                AIL_set_stream_position(dword_6AD9C0[6 * i], dword_6AD9D4[6 * i]);
                startSoundStream(i);
            }
        }
    }
}
// 59444C: using guessed type int __stdcall AIL_set_stream_position(_DWORD, _DWORD);
// 5C609C: using guessed type int dword_5C609C;
// 6AD9C0: using guessed type int dword_6AD9C0[];
// 6AE834: using guessed type int isMusicDisabled;

//----- (0058383D) --------------------------------------------------------
int __cdecl sub_58383D(int a1, int a2)
{
    char* v3; // eax

    if (!isMusicDisabled)
    {
        sub_5833E3(a1 + 1, 255);
        v3 = getFormattedString("Music\\%s", *(const char**)&off_5B4958[4 * a2]);
        maybe_startSoundStream(a1 + 1, (int)v3);
        dword_6AD9C8[6 * a1 + 6] = 1;
        byte_6AD9D0[24 * a1 + 24] = a2;
    }
    return 0;
}
// 6AD9C8: using guessed type int dword_6AD9C8[];
// 6AE834: using guessed type int isMusicDisabled;

//----- (005838B2) --------------------------------------------------------
int __cdecl sub_5838B2(int a1)
{
    if (!isMusicDisabled)
        dword_6AD9C8[6 * a1 + 6] = 2;
    return 0;
}
// 6AD9C8: using guessed type int dword_6AD9C8[];
// 6AE834: using guessed type int isMusicDisabled;

//----- (005838D9) --------------------------------------------------------
int __cdecl sub_5838D9(int a1, unsigned __int8 a2)
{
    float v3; // [esp+0h] [ebp-10h]
    float v4; // [esp+8h] [ebp-8h]

    if (!isMusicDisabled)
    {
        v4 = (float)a2;
        v3 = (float)(unsigned __int8)byte_6AE840;
        sub_5833E3(a1 + 1, (unsigned __int8)(__int64)(v3 / 255.0 * v4));
    }
    return 0;
}
// 6AE834: using guessed type int isMusicDisabled;
// 6AE840: using guessed type char byte_6AE840;

//----- (00583941) --------------------------------------------------------
BOOL __cdecl sub_583941(int a1)
{
    BOOL result; // eax

    if (isMusicDisabled)
        result = 0;
    else
        result = dword_6AD9C0[6 * a1 + 6] != 0;
    return result;
}
// 6AD9C0: using guessed type int dword_6AD9C0[];
// 6AE834: using guessed type int isMusicDisabled;