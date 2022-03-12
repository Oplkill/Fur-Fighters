#include "directx.h"

#include <cstdlib>
#include <stdio.h>
#include <windows.h>
#include <dinput.h>
#include <ddraw.h>
#include "debug.h"
#include "tempplace.h"
#include "utils.h"
#include "sounds.h"
#include "settings.h"
#include "globalVariables.h"

int dword_6673E0; // weak
int numVideoDevicesOrModes; // weak
int numVideoDevices; // weak
__int16 g_RedBits; // weak
__int16 g_GreenBits; // weak
__int16 g_BlueBits; // weak
int dword_60FED4; // weak
int dword_60FED0; // weak
int dword_60FECC; // weak
int dword_60FE74; // weak
int g_uselessEventA; // weak
HWND g_WindowHWnd; // idb
int g_maybeDirectInput; // weak //todo maybe void** or LPVOID *
int dword_610384[]; // weak
__int16 word_668736; // weak
__int16 word_668738; // weak
__int16 word_66873A; // weak
__int16 word_66873C; // weak
int dword_597360 = 1864182625; // weak
int dword_60FE6C; // weak
int(__cdecl* dword_5C606C)(_DWORD, _DWORD); // weak
HWND dword_6103FC; // idb
_UNKNOWN unk_597258; // weak
int dword_60FE7C; // weak
int dword_60FE80; // weak
char g_ZBufferBitDepth[]; // idb
int dword_6103C8; // weak
int dword_6103B4; // weak
int dword_6103B0; // weak
int dword_6103AC; // weak
int dword_6103A8; // weak
int dword_6103BC; // weak
int dword_6103C4; // weak
int dword_610388; // weak
int dword_6103B8; // weak
int dword_5C607C; // weak
int dword_5C6094; // weak
int dword_5C6078; // weak
int dword_5C6090; // weak
int dword_5C6080; // weak
int dword_5C6084; // weak
int dword_5C6088; // weak
int dword_5C608C; // weak
int dword_61038C; // weak
int dword_610390; // weak
int dword_610394; // weak
int dword_610398; // weak
int dword_6103A0; // weak
int dword_6103A4; // weak

int __cdecl sub_57808E(LONG* a1);
int __stdcall sub_57DA57(_DWORD* a1, int a2);
int __stdcall sub_578DB1(_DWORD* a1, int a2);
int __stdcall sub_578A63(_DWORD* a1, void* a2);
int sub_52CD67();
int __thiscall sub_52DE94(_DWORD* this);
int sub_52E136();
int __thiscall sub_52DF09(_DWORD* this);
int __thiscall sub_531887(_DWORD* this);
int __thiscall sub_52DFA8(_DWORD* this);
int __thiscall sub_52E01F(_DWORD* this);
int sub_52DF04();
int __thiscall sub_53220A(int this);
void __thiscall sub_52F22F(_DWORD* this);

//----- (0052CE31) --------------------------------------------------------
void __stdcall getDirectXErrorName(int a1, size_t BufferCount, char* Buffer)
{
    const char* v3; // eax
    int v4; // eax

    if (BufferCount && Buffer)
    {
        v3 = 0;
        if (a1 > (int)0x80004005)
        {
            if (a1 > (int)0x8007000E)
            {
                if (a1 > -2005532667)
                {
                    if (a1 > -2005532652)
                    {
                        if (a1 > -2005532617)
                        {
                            if (a1 > -2005532577)
                            {
                                if (a1 > -2005532562)
                                {
                                    if (a1 > -2005532542)
                                    {
                                        if (a1 > -2005532522)
                                        {
                                            if (a1 > -2005532502)
                                            {
                                                if (a1 > -2005532467)
                                                {
                                                    if (a1 > -2005532452)
                                                    {
                                                        if (a1 > -2005532447)
                                                        {
                                                            if (a1 > -2005532432)
                                                            {
                                                                if (a1 > -2005532417)
                                                                {
                                                                    if (a1 > -2005532402)
                                                                    {
                                                                        if (a1 > -2005532382)
                                                                        {
                                                                            if (a1 > -2005532356)
                                                                            {
                                                                                if (a1 > -2005532352)
                                                                                {
                                                                                    if (a1 > -2005532337)
                                                                                    {
                                                                                        if (a1 > -2005532322)
                                                                                        {
                                                                                            if (a1 > -2005532292)
                                                                                            {
                                                                                                if (a1 > -2005532272)
                                                                                                {
                                                                                                    if (a1 > -2005532252)
                                                                                                    {
                                                                                                        if (a1 > -2005532237)
                                                                                                        {
                                                                                                            if (a1 > -2005532222)
                                                                                                            {
                                                                                                                if (a1 > -2005532202)
                                                                                                                {
                                                                                                                    if (a1 > -2005532182)
                                                                                                                    {
                                                                                                                        if (a1 > -2005532152)
                                                                                                                        {
                                                                                                                            if (a1 > -2005532135)
                                                                                                                            {
                                                                                                                                if (a1 > -2005532112)
                                                                                                                                {
                                                                                                                                    if (a1 > -2005532042)
                                                                                                                                    {
                                                                                                                                        if (a1 > -2005532012)
                                                                                                                                        {
                                                                                                                                            if (a1 > -2005531982)
                                                                                                                                            {
                                                                                                                                                if (a1 > -2005530624)
                                                                                                                                                {
                                                                                                                                                    if (a1 > -2005530612)
                                                                                                                                                    {
                                                                                                                                                        if (a1 > -2005530602)
                                                                                                                                                        {
                                                                                                                                                            if (a1 > -931722312)
                                                                                                                                                            {
                                                                                                                                                                switch (a1)
                                                                                                                                                                {
                                                                                                                                                                case -931722311:
                                                                                                                                                                    v3 = "D3DXERR_NULLPOINTER";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722310:
                                                                                                                                                                    v3 = "D3DXERR_INVALIDD3DXDEVICEINDEX";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722309:
                                                                                                                                                                    v3 = "D3DXERR_NODIRECTDRAWAVAILABLE";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722308:
                                                                                                                                                                    v3 = "D3DXERR_NODIRECT3DAVAILABLE";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722307:
                                                                                                                                                                    v3 = "D3DXERR_NODIRECT3DDEVICEAVAILABLE";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722306:
                                                                                                                                                                    v3 = "D3DXERR_NOPRIMARYAVAILABLE";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722305:
                                                                                                                                                                    v3 = "D3DXERR_NOZBUFFERAVAILABLE";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722304:
                                                                                                                                                                    v3 = "D3DXERR_NOBACKBUFFERAVAILABLE";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722303:
                                                                                                                                                                    v3 = "D3DXERR_COULDNTUPDATECAPS";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722302:
                                                                                                                                                                    v3 = "D3DXERR_NOZBUFFER";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722301:
                                                                                                                                                                    v3 = "D3DXERR_INVALIDMODE";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722300:
                                                                                                                                                                    v3 = "D3DXERR_INVALIDPARAMETER";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722299:
                                                                                                                                                                    v3 = "D3DXERR_INITFAILED";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722298:
                                                                                                                                                                    v3 = "D3DXERR_STARTUPFAILED";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722297:
                                                                                                                                                                    v3 = "D3DXERR_D3DXNOTSTARTEDYET";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722296:
                                                                                                                                                                    v3 = "D3DXERR_NOTINITIALIZED";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722295:
                                                                                                                                                                    v3 = "D3DXERR_FAILEDDRAWTEXT";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722294:
                                                                                                                                                                    v3 = "D3DXERR_BADD3DXCONTEXT";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722293:
                                                                                                                                                                    v3 = "D3DXERR_CAPSNOTSUPPORTED";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722292:
                                                                                                                                                                    v3 = "D3DXERR_UNSUPPORTEDFILEFORMAT";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722291:
                                                                                                                                                                    v3 = "D3DXERR_IFLERROR";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722290:
                                                                                                                                                                    v3 = "D3DXERR_FAILEDGETCAPS";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722289:
                                                                                                                                                                    v3 = "D3DXERR_CANNOTRESIZEFULLSCREEN";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722288:
                                                                                                                                                                    v3 = "D3DXERR_CANNOTRESIZENONWINDOWED";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722287:
                                                                                                                                                                    v3 = "D3DXERR_FRONTBUFFERALREADYEXISTS";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722286:
                                                                                                                                                                    v3 = "D3DXERR_FULLSCREENPRIMARYEXISTS";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722285:
                                                                                                                                                                    v3 = "D3DXERR_GETDCFAILED";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722284:
                                                                                                                                                                    v3 = "D3DXERR_BITBLTFAILED";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722283:
                                                                                                                                                                    v3 = "D3DXERR_NOTEXTURE";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722282:
                                                                                                                                                                    v3 = "D3DXERR_MIPLEVELABSENT";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722281:
                                                                                                                                                                    v3 = "D3DXERR_SURFACENOTPALETTED";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722280:
                                                                                                                                                                    v3 = "D3DXERR_ENUMFORMATSFAILED";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722279:
                                                                                                                                                                    v3 = "D3DXERR_COLORDEPTHTOOLOW";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722278:
                                                                                                                                                                    v3 = "D3DXERR_INVALIDFILEFORMAT";
                                                                                                                                                                    break;
                                                                                                                                                                case -931722277:
                                                                                                                                                                    v3 = "D3DXERR_NOMATCHFOUND";
                                                                                                                                                                    break;
                                                                                                                                                                default:
                                                                                                                                                                    break;
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                            else if (a1 == -931722312)
                                                                                                                                                            {
                                                                                                                                                                v3 = "D3DXERR_NOMEMORY";
                                                                                                                                                            }
                                                                                                                                                            else
                                                                                                                                                            {
                                                                                                                                                                switch (a1)
                                                                                                                                                                {
                                                                                                                                                                case -2005530601:
                                                                                                                                                                    v3 = "D3DERR_STENCILBUFFER_NOTPRESENT";
                                                                                                                                                                    break;
                                                                                                                                                                case -2005530600:
                                                                                                                                                                    v3 = "D3DERR_WRONGTEXTUREFORMAT";
                                                                                                                                                                    break;
                                                                                                                                                                case -2005530599:
                                                                                                                                                                    v3 = "D3DERR_UNSUPPORTEDCOLOROPERATION";
                                                                                                                                                                    break;
                                                                                                                                                                case -2005530598:
                                                                                                                                                                    v3 = "D3DERR_UNSUPPORTEDCOLORARG";
                                                                                                                                                                    break;
                                                                                                                                                                case -2005530597:
                                                                                                                                                                    v3 = "D3DERR_UNSUPPORTEDALPHAOPERATION";
                                                                                                                                                                    break;
                                                                                                                                                                case -2005530596:
                                                                                                                                                                    v3 = "D3DERR_UNSUPPORTEDALPHAARG";
                                                                                                                                                                    break;
                                                                                                                                                                case -2005530595:
                                                                                                                                                                    v3 = "D3DERR_TOOMANYOPERATIONS";
                                                                                                                                                                    break;
                                                                                                                                                                case -2005530594:
                                                                                                                                                                    v3 = "D3DERR_CONFLICTINGTEXTUREFILTER";
                                                                                                                                                                    break;
                                                                                                                                                                case -2005530593:
                                                                                                                                                                    v3 = "D3DERR_UNSUPPORTEDFACTORVALUE";
                                                                                                                                                                    break;
                                                                                                                                                                case -2005530591:
                                                                                                                                                                    v3 = "D3DERR_CONFLICTINGRENDERSTATE";
                                                                                                                                                                    break;
                                                                                                                                                                case -2005530590:
                                                                                                                                                                    v3 = "D3DERR_UNSUPPORTEDTEXTUREFILTER";
                                                                                                                                                                    break;
                                                                                                                                                                case -2005530589:
                                                                                                                                                                    v3 = "D3DERR_TOOMANYPRIMITIVES";
                                                                                                                                                                    break;
                                                                                                                                                                case -2005530588:
                                                                                                                                                                    v3 = "D3DERR_INVALIDMATRIX";
                                                                                                                                                                    break;
                                                                                                                                                                case -2005530587:
                                                                                                                                                                    v3 = "D3DERR_TOOMANYVERTICES";
                                                                                                                                                                    break;
                                                                                                                                                                case -2005530586:
                                                                                                                                                                    v3 = "D3DERR_CONFLICTINGTEXTUREPALETTE";
                                                                                                                                                                    break;
                                                                                                                                                                case -2005530572:
                                                                                                                                                                    v3 = "D3DERR_INVALIDSTATEBLOCK";
                                                                                                                                                                    break;
                                                                                                                                                                case -2005530571:
                                                                                                                                                                    v3 = "D3DERR_INBEGINSTATEBLOCK";
                                                                                                                                                                    break;
                                                                                                                                                                case -2005530570:
                                                                                                                                                                    v3 = "D3DERR_NOTINBEGINSTATEBLOCK";
                                                                                                                                                                    break;
                                                                                                                                                                default:
                                                                                                                                                                    break;
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                        else
                                                                                                                                                        {
                                                                                                                                                            switch (a1)
                                                                                                                                                            {
                                                                                                                                                            case -2005530602:
                                                                                                                                                                v3 = "D3DERR_ZBUFFER_NOTPRESENT";
                                                                                                                                                                break;
                                                                                                                                                            case -2005530611:
                                                                                                                                                                v3 = "D3DERR_VBUF_CREATE_FAILED";
                                                                                                                                                                break;
                                                                                                                                                            case -2005530610:
                                                                                                                                                                v3 = "D3DERR_VERTEXBUFFERLOCKED";
                                                                                                                                                                break;
                                                                                                                                                            case -2005530609:
                                                                                                                                                                v3 = "D3DERR_VERTEXBUFFERUNLOCKFAILED";
                                                                                                                                                                break;
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                    else if (a1 == -2005530612)
                                                                                                                                                    {
                                                                                                                                                        v3 = "D3DERR_VERTEXBUFFEROPTIMIZED";
                                                                                                                                                    }
                                                                                                                                                    else if (a1 == -2005530622)
                                                                                                                                                    {
                                                                                                                                                        v3 = "D3DERR_COLORKEYATTACHED";
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                                else if (a1 == -2005530624)
                                                                                                                                                {
                                                                                                                                                    v3 = "D3DERR_INVALIDVERTEXFORMAT";
                                                                                                                                                }
                                                                                                                                                else
                                                                                                                                                {
                                                                                                                                                    switch (a1)
                                                                                                                                                    {
                                                                                                                                                    case -2005531981:
                                                                                                                                                        v3 = "DDERR_EXPIRED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531980:
                                                                                                                                                        v3 = "DDERR_TESTFINISHED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531979:
                                                                                                                                                        v3 = "DDERR_NEWMODE";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531978:
                                                                                                                                                        v3 = "DDERR_D3DNOTINITIALIZED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531977:
                                                                                                                                                        v3 = "DDERR_VIDEONOTACTIVE";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531976:
                                                                                                                                                        v3 = "DDERR_NOMONITORINFORMATION";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531975:
                                                                                                                                                        v3 = "DDERR_NODRIVERSUPPORT";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531973:
                                                                                                                                                        v3 = "DDERR_DEVICEDOESNTOWNSURFACE";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531972:
                                                                                                                                                        v3 = "D3DERR_BADMAJORVERSION";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531971:
                                                                                                                                                        v3 = "D3DERR_BADMINORVERSION";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531967:
                                                                                                                                                        v3 = "D3DERR_INVALID_DEVICE";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531966:
                                                                                                                                                        v3 = "D3DERR_INITFAILED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531965:
                                                                                                                                                        v3 = "D3DERR_DEVICEAGGREGATED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531962:
                                                                                                                                                        v3 = "D3DERR_EXECUTE_CREATE_FAILED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531961:
                                                                                                                                                        v3 = "D3DERR_EXECUTE_DESTROY_FAILED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531960:
                                                                                                                                                        v3 = "D3DERR_EXECUTE_LOCK_FAILED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531959:
                                                                                                                                                        v3 = "D3DERR_EXECUTE_UNLOCK_FAILED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531958:
                                                                                                                                                        v3 = "D3DERR_EXECUTE_LOCKED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531957:
                                                                                                                                                        v3 = "D3DERR_EXECUTE_NOT_LOCKED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531956:
                                                                                                                                                        v3 = "D3DERR_EXECUTE_FAILED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531955:
                                                                                                                                                        v3 = "D3DERR_EXECUTE_CLIPPED_FAILED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531952:
                                                                                                                                                        v3 = "D3DERR_TEXTURE_NO_SUPPORT";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531951:
                                                                                                                                                        v3 = "D3DERR_TEXTURE_CREATE_FAILED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531950:
                                                                                                                                                        v3 = "D3DERR_TEXTURE_DESTROY_FAILED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531949:
                                                                                                                                                        v3 = "D3DERR_TEXTURE_LOCK_FAILED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531948:
                                                                                                                                                        v3 = "D3DERR_TEXTURE_UNLOCK_FAILED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531947:
                                                                                                                                                        v3 = "D3DERR_TEXTURE_LOAD_FAILED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531946:
                                                                                                                                                        v3 = "D3DERR_TEXTURE_SWAP_FAILED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531945:
                                                                                                                                                        v3 = "D3DERR_TEXTURE_LOCKED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531944:
                                                                                                                                                        v3 = "D3DERR_TEXTURE_NOT_LOCKED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531943:
                                                                                                                                                        v3 = "D3DERR_TEXTURE_GETSURF_FAILED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531942:
                                                                                                                                                        v3 = "D3DERR_MATRIX_CREATE_FAILED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531941:
                                                                                                                                                        v3 = "D3DERR_MATRIX_DESTROY_FAILED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531940:
                                                                                                                                                        v3 = "D3DERR_MATRIX_SETDATA_FAILED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531939:
                                                                                                                                                        v3 = "D3DERR_MATRIX_GETDATA_FAILED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531938:
                                                                                                                                                        v3 = "D3DERR_SETVIEWPORTDATA_FAILED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531937:
                                                                                                                                                        v3 = "D3DERR_INVALIDCURRENTVIEWPORT";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531936:
                                                                                                                                                        v3 = "D3DERR_INVALIDPRIMITIVETYPE";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531935:
                                                                                                                                                        v3 = "D3DERR_INVALIDVERTEXTYPE";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531934:
                                                                                                                                                        v3 = "D3DERR_TEXTURE_BADSIZE";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531933:
                                                                                                                                                        v3 = "D3DERR_INVALIDRAMPTEXTURE";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531932:
                                                                                                                                                        v3 = "D3DERR_MATERIAL_CREATE_FAILED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531931:
                                                                                                                                                        v3 = "D3DERR_MATERIAL_DESTROY_FAILED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531930:
                                                                                                                                                        v3 = "D3DERR_MATERIAL_SETDATA_FAILED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531929:
                                                                                                                                                        v3 = "D3DERR_MATERIAL_GETDATA_FAILED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531928:
                                                                                                                                                        v3 = "D3DERR_INVALIDPALETTE";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531927:
                                                                                                                                                        v3 = "D3DERR_ZBUFF_NEEDS_SYSTEMMEMORY";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531926:
                                                                                                                                                        v3 = "D3DERR_ZBUFF_NEEDS_VIDEOMEMORY";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531925:
                                                                                                                                                        v3 = "D3DERR_SURFACENOTINVIDMEM";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531922:
                                                                                                                                                        v3 = "D3DERR_LIGHT_SET_FAILED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531921:
                                                                                                                                                        v3 = "D3DERR_LIGHTHASVIEWPORT";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531920:
                                                                                                                                                        v3 = "D3DERR_LIGHTNOTINTHISVIEWPORT";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531912:
                                                                                                                                                        v3 = "D3DERR_SCENE_IN_SCENE";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531911:
                                                                                                                                                        v3 = "D3DERR_SCENE_NOT_IN_SCENE";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531910:
                                                                                                                                                        v3 = "D3DERR_SCENE_BEGIN_FAILED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531909:
                                                                                                                                                        v3 = "D3DERR_SCENE_END_FAILED";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531902:
                                                                                                                                                        v3 = "D3DERR_INBEGIN";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531901:
                                                                                                                                                        v3 = "D3DERR_NOTINBEGIN";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531900:
                                                                                                                                                        v3 = "D3DERR_NOVIEWPORTS";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531899:
                                                                                                                                                        v3 = "D3DERR_VIEWPORTDATANOTSET";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531898:
                                                                                                                                                        v3 = "D3DERR_VIEWPORTHASNODEVICE";
                                                                                                                                                        break;
                                                                                                                                                    case -2005531897:
                                                                                                                                                        v3 = "D3DERR_NOCURRENTVIEWPORT";
                                                                                                                                                        break;
                                                                                                                                                    default:
                                                                                                                                                        break;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                            else if (a1 == -2005531982)
                                                                                                                                            {
                                                                                                                                                v3 = "DDERR_MOREDATA";
                                                                                                                                            }
                                                                                                                                            else if (a1 == -2005531992)
                                                                                                                                            {
                                                                                                                                                v3 = "DDERR_NOTPAGELOCKED";
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                        else if (a1 == -2005532012)
                                                                                                                                        {
                                                                                                                                            v3 = "DDERR_CANTPAGEUNLOCK";
                                                                                                                                        }
                                                                                                                                        else if (a1 == -2005532032)
                                                                                                                                        {
                                                                                                                                            v3 = "DDERR_CANTPAGELOCK";
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                    else if (a1 == -2005532042)
                                                                                                                                    {
                                                                                                                                        v3 = "DDERR_NONONLOCALVIDMEM";
                                                                                                                                    }
                                                                                                                                    else
                                                                                                                                    {
                                                                                                                                        switch (a1)
                                                                                                                                        {
                                                                                                                                        case -2005532111:
                                                                                                                                            v3 = "DDERR_INVALIDDIRECTDRAWGUID";
                                                                                                                                            break;
                                                                                                                                        case -2005532110:
                                                                                                                                            v3 = "DDERR_DIRECTDRAWALREADYCREATED";
                                                                                                                                            break;
                                                                                                                                        case -2005532109:
                                                                                                                                            v3 = "DDERR_NODIRECTDRAWHW";
                                                                                                                                            break;
                                                                                                                                        case -2005532108:
                                                                                                                                            v3 = "DDERR_PRIMARYSURFACEALREADYEXISTS";
                                                                                                                                            break;
                                                                                                                                        case -2005532107:
                                                                                                                                            v3 = "DDERR_NOEMULATION";
                                                                                                                                            break;
                                                                                                                                        case -2005532106:
                                                                                                                                            v3 = "DDERR_REGIONTOOSMALL";
                                                                                                                                            break;
                                                                                                                                        case -2005532105:
                                                                                                                                            v3 = "DDERR_CLIPPERISUSINGHWND";
                                                                                                                                            break;
                                                                                                                                        case -2005532104:
                                                                                                                                            v3 = "DDERR_NOCLIPPERATTACHED";
                                                                                                                                            break;
                                                                                                                                        case -2005532103:
                                                                                                                                            v3 = "DDERR_NOHWND";
                                                                                                                                            break;
                                                                                                                                        case -2005532102:
                                                                                                                                            v3 = "DDERR_HWNDSUBCLASSED";
                                                                                                                                            break;
                                                                                                                                        case -2005532101:
                                                                                                                                            v3 = "DDERR_HWNDALREADYSET";
                                                                                                                                            break;
                                                                                                                                        case -2005532100:
                                                                                                                                            v3 = "DDERR_NOPALETTEATTACHED";
                                                                                                                                            break;
                                                                                                                                        case -2005532099:
                                                                                                                                            v3 = "DDERR_NOPALETTEHW";
                                                                                                                                            break;
                                                                                                                                        case -2005532098:
                                                                                                                                            v3 = "DDERR_BLTFASTCANTCLIP";
                                                                                                                                            break;
                                                                                                                                        case -2005532097:
                                                                                                                                            v3 = "DDERR_NOBLTHW";
                                                                                                                                            break;
                                                                                                                                        case -2005532096:
                                                                                                                                            v3 = "DDERR_NODDROPSHW";
                                                                                                                                            break;
                                                                                                                                        case -2005532095:
                                                                                                                                            v3 = "DDERR_OVERLAYNOTVISIBLE";
                                                                                                                                            break;
                                                                                                                                        case -2005532094:
                                                                                                                                            v3 = "DDERR_NOOVERLAYDEST";
                                                                                                                                            break;
                                                                                                                                        case -2005532093:
                                                                                                                                            v3 = "DDERR_INVALIDPOSITION";
                                                                                                                                            break;
                                                                                                                                        case -2005532092:
                                                                                                                                            v3 = "DDERR_NOTAOVERLAYSURFACE";
                                                                                                                                            break;
                                                                                                                                        case -2005532091:
                                                                                                                                            v3 = "DDERR_EXCLUSIVEMODEALREADYSET";
                                                                                                                                            break;
                                                                                                                                        case -2005532090:
                                                                                                                                            v3 = "DDERR_NOTFLIPPABLE";
                                                                                                                                            break;
                                                                                                                                        case -2005532089:
                                                                                                                                            v3 = "DDERR_CANTDUPLICATE";
                                                                                                                                            break;
                                                                                                                                        case -2005532088:
                                                                                                                                            v3 = "DDERR_NOTLOCKED";
                                                                                                                                            break;
                                                                                                                                        case -2005532087:
                                                                                                                                            v3 = "DDERR_CANTCREATEDC";
                                                                                                                                            break;
                                                                                                                                        case -2005532086:
                                                                                                                                            v3 = "DDERR_NODC";
                                                                                                                                            break;
                                                                                                                                        case -2005532085:
                                                                                                                                            v3 = "DDERR_WRONGMODE";
                                                                                                                                            break;
                                                                                                                                        case -2005532084:
                                                                                                                                            v3 = "DDERR_IMPLICITLYCREATED";
                                                                                                                                            break;
                                                                                                                                        case -2005532083:
                                                                                                                                            v3 = "DDERR_NOTPALETTIZED";
                                                                                                                                            break;
                                                                                                                                        case -2005532082:
                                                                                                                                            v3 = "DDERR_UNSUPPORTEDMODE";
                                                                                                                                            break;
                                                                                                                                        case -2005532081:
                                                                                                                                            v3 = "DDERR_NOMIPMAPHW";
                                                                                                                                            break;
                                                                                                                                        case -2005532080:
                                                                                                                                            v3 = "DDERR_INVALIDSURFACETYPE";
                                                                                                                                            break;
                                                                                                                                        case -2005532072:
                                                                                                                                            v3 = "DDERR_NOOPTIMIZEHW";
                                                                                                                                            break;
                                                                                                                                        case -2005532071:
                                                                                                                                            v3 = "DDERR_NOTLOADED";
                                                                                                                                            break;
                                                                                                                                        case -2005532070:
                                                                                                                                            v3 = "DDERR_NOFOCUSWINDOW";
                                                                                                                                            break;
                                                                                                                                        case -2005532069:
                                                                                                                                            v3 = "DDERR_NOTONMIPMAPSUBLEVEL";
                                                                                                                                            break;
                                                                                                                                        case -2005532052:
                                                                                                                                            v3 = "DDERR_DCALREADYCREATED";
                                                                                                                                            break;
                                                                                                                                        default:
                                                                                                                                            break;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                                else
                                                                                                                                {
                                                                                                                                    switch (a1)
                                                                                                                                    {
                                                                                                                                    case -2005532112:
                                                                                                                                        v3 = "DDERR_XALIGN";
                                                                                                                                        break;
                                                                                                                                    case -2005532132:
                                                                                                                                        v3 = "DDERR_WASSTILLDRAWING";
                                                                                                                                        break;
                                                                                                                                    case -2005532130:
                                                                                                                                        v3 = "DDERR_DDSCAPSCOMPLEXREQUIRED";
                                                                                                                                        break;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                            else if (a1 == -2005532135)
                                                                                                                            {
                                                                                                                                v3 = "DDERR_VERTICALBLANKINPROGRESS";
                                                                                                                            }
                                                                                                                            else if (a1 == -2005532151)
                                                                                                                            {
                                                                                                                                v3 = "DDERR_INVALIDSTREAM";
                                                                                                                            }
                                                                                                                        }
                                                                                                                        else if (a1 == -2005532152)
                                                                                                                        {
                                                                                                                            v3 = "DDERR_UNSUPPORTEDMASK";
                                                                                                                        }
                                                                                                                        else if (a1 == -2005532162)
                                                                                                                        {
                                                                                                                            v3 = "DDERR_UNSUPPORTEDFORMAT";
                                                                                                                        }
                                                                                                                    }
                                                                                                                    else if (a1 == -2005532182)
                                                                                                                    {
                                                                                                                        v3 = "DDERR_TOOBIGWIDTH";
                                                                                                                    }
                                                                                                                    else if (a1 == -2005532192)
                                                                                                                    {
                                                                                                                        v3 = "DDERR_TOOBIGSIZE";
                                                                                                                    }
                                                                                                                }
                                                                                                                else if (a1 == -2005532202)
                                                                                                                {
                                                                                                                    v3 = "DDERR_TOOBIGHEIGHT";
                                                                                                                }
                                                                                                                else if (a1 == -2005532212)
                                                                                                                {
                                                                                                                    v3 = "DDERR_SURFACENOTATTACHED";
                                                                                                                }
                                                                                                            }
                                                                                                            else if (a1 == -2005532222)
                                                                                                            {
                                                                                                                v3 = "DDERR_SURFACELOST";
                                                                                                            }
                                                                                                            else if (a1 == -2005532232)
                                                                                                            {
                                                                                                                v3 = "DDERR_SURFACEISOBSCURED";
                                                                                                            }
                                                                                                        }
                                                                                                        else if (a1 == -2005532237)
                                                                                                        {
                                                                                                            v3 = "DDERR_CANTLOCKSURFACE";
                                                                                                        }
                                                                                                        else if (a1 == -2005532242)
                                                                                                        {
                                                                                                            v3 = "DDERR_SURFACEBUSY";
                                                                                                        }
                                                                                                    }
                                                                                                    else if (a1 == -2005532252)
                                                                                                    {
                                                                                                        v3 = "DDERR_SURFACEALREADYDEPENDENT";
                                                                                                    }
                                                                                                    else if (a1 == -2005532262)
                                                                                                    {
                                                                                                        v3 = "DDERR_SURFACEALREADYATTACHED";
                                                                                                    }
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                    switch (a1)
                                                                                                    {
                                                                                                    case -2005532272:
                                                                                                        v3 = "DDERR_COLORKEYNOTSET";
                                                                                                        break;
                                                                                                    case -2005532290:
                                                                                                        v3 = "DDERR_OVERLAYCANTCLIP";
                                                                                                        break;
                                                                                                    case -2005532288:
                                                                                                        v3 = "DDERR_OVERLAYCOLORKEYONLYONEACTIVE";
                                                                                                        break;
                                                                                                    case -2005532285:
                                                                                                        v3 = "DDERR_PALETTEBUSY";
                                                                                                        break;
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                            else if (a1 == -2005532292)
                                                                                            {
                                                                                                v3 = "DDERR_OUTOFVIDEOMEMORY";
                                                                                            }
                                                                                            else if (a1 == -2005532312)
                                                                                            {
                                                                                                v3 = "DDERR_OUTOFCAPS";
                                                                                            }
                                                                                        }
                                                                                        else if (a1 == -2005532322)
                                                                                        {
                                                                                            v3 = "DDERR_NOZOVERLAYHW";
                                                                                        }
                                                                                        else if (a1 == -2005532332)
                                                                                        {
                                                                                            v3 = "DDERR_NOZBUFFERHW";
                                                                                        }
                                                                                    }
                                                                                    else if (a1 == -2005532337)
                                                                                    {
                                                                                        v3 = "DDERR_NOVSYNCHW";
                                                                                    }
                                                                                    else if (a1 == -2005532342)
                                                                                    {
                                                                                        v3 = "DDERR_NOTEXTUREHW";
                                                                                    }
                                                                                }
                                                                                else if (a1 == -2005532352)
                                                                                {
                                                                                    v3 = "DDERR_NOT8BITCOLOR";
                                                                                }
                                                                                else if (a1 == -2005532355)
                                                                                {
                                                                                    v3 = "DDERR_NOT4BITCOLORINDEX";
                                                                                }
                                                                            }
                                                                            else if (a1 == -2005532356)
                                                                            {
                                                                                v3 = "DDERR_NOT4BITCOLOR";
                                                                            }
                                                                            else if (a1 == -2005532362)
                                                                            {
                                                                                v3 = "DDERR_NOSTRETCHHW";
                                                                            }
                                                                        }
                                                                        else if (a1 == -2005532382)
                                                                        {
                                                                            v3 = "DDERR_NOROTATIONHW";
                                                                        }
                                                                        else if (a1 == -2005532392)
                                                                        {
                                                                            v3 = "DDERR_NORASTEROPHW";
                                                                        }
                                                                    }
                                                                    else if (a1 == -2005532402)
                                                                    {
                                                                        v3 = "DDERR_OVERLAPPINGRECTS";
                                                                    }
                                                                    else if (a1 == -2005532412)
                                                                    {
                                                                        v3 = "DDERR_NOOVERLAYHW";
                                                                    }
                                                                }
                                                                else if (a1 == -2005532417)
                                                                {
                                                                    v3 = "DDERR_NOTFOUND";
                                                                }
                                                                else if (a1 == -2005532422)
                                                                {
                                                                    v3 = "DDERR_NOMIRRORHW";
                                                                }
                                                            }
                                                            else if (a1 == -2005532432)
                                                            {
                                                                v3 = "DDERR_NOGDI";
                                                            }
                                                            else if (a1 == -2005532442)
                                                            {
                                                                v3 = "DDERR_NOFLIPHW";
                                                            }
                                                        }
                                                        else if (a1 == -2005532447)
                                                        {
                                                            v3 = "DDERR_NOEXCLUSIVEMODE";
                                                        }
                                                        else if (a1 == -2005532450)
                                                        {
                                                            v3 = "DDERR_NODIRECTDRAWSUPPORT";
                                                        }
                                                    }
                                                    else
                                                    {
                                                        switch (a1)
                                                        {
                                                        case -2005532452:
                                                            v3 = "DDERR_NOCOLORKEYHW";
                                                            break;
                                                        case -2005532462:
                                                            v3 = "DDERR_NOCOLORCONVHW";
                                                            break;
                                                        case -2005532460:
                                                            v3 = "DDERR_NOCOOPERATIVELEVELSET";
                                                            break;
                                                        case -2005532457:
                                                            v3 = "DDERR_NOCOLORKEY";
                                                            break;
                                                        }
                                                    }
                                                }
                                                else
                                                {
                                                    switch (a1)
                                                    {
                                                    case -2005532467:
                                                        v3 = "DDERR_NOCLIPLIST";
                                                        break;
                                                    case -2005532492:
                                                        v3 = "DDERR_NOALPHAHW";
                                                        break;
                                                    case -2005532491:
                                                        v3 = "DDERR_NOSTEREOHARDWARE";
                                                        break;
                                                    case -2005532490:
                                                        v3 = "DDERR_NOSURFACELEFT";
                                                        break;
                                                    }
                                                }
                                            }
                                            else if (a1 == -2005532502)
                                            {
                                                v3 = "DDERR_NO3D";
                                            }
                                            else if (a1 == -2005532512)
                                            {
                                                v3 = "DDERR_LOCKEDSURFACES";
                                            }
                                        }
                                        else if (a1 == -2005532522)
                                        {
                                            v3 = "DDERR_INVALIDRECT";
                                        }
                                        else if (a1 == -2005532527)
                                        {
                                            v3 = "DDERR_INVALIDPIXELFORMAT";
                                        }
                                    }
                                    else if (a1 == -2005532542)
                                    {
                                        v3 = "DDERR_INVALIDOBJECT";
                                    }
                                    else if (a1 == -2005532552)
                                    {
                                        v3 = "DDERR_INVALIDMODE";
                                    }
                                }
                                else if (a1 == -2005532562)
                                {
                                    v3 = "DDERR_INVALIDCLIPLIST";
                                }
                                else if (a1 == -2005532572)
                                {
                                    v3 = "DDERR_INVALIDCAPS";
                                }
                            }
                            else if (a1 == -2005532577)
                            {
                                v3 = "DDERR_INCOMPATIBLEPRIMARY";
                            }
                            else if (a1 == -2005532582)
                            {
                                v3 = "DDERR_HEIGHTALIGN";
                            }
                        }
                        else if (a1 == -2005532617)
                        {
                            v3 = "DDERR_EXCEPTION";
                        }
                        else if (a1 == -2005532632)
                        {
                            v3 = "DDERR_CURRENTLYNOTAVAIL";
                        }
                    }
                    else if (a1 == -2005532652)
                    {
                        v3 = "DDERR_CANNOTDETACHSURFACE";
                    }
                    else if (a1 == -2005532662)
                    {
                        v3 = "DDERR_CANNOTATTACHSURFACE";
                    }
                }
                else if (a1 == -2005532667)
                {
                    v3 = "DDERR_ALREADYINITIALIZED";
                }
                else if (a1 == -2147024809)
                {
                    v3 = "DDERR_INVALIDPARAMS";
                }
            }
            else if (a1 == 0x8007000E)
            {
                v3 = "DDERR_OUTOFMEMORY";
            }
            else if (a1 == -2147221008)
            {
                v3 = "DDERR_NOTINITIALIZED";
            }
        }
        else if (a1 == 0x80004005)
        {
            v3 = "DDERR_GENERIC";
        }
        else if (a1 == -2147467263)
        {
            v3 = "DDERR_UNSUPPORTED";
        }
        if (v3)
            v4 = snprintf(Buffer, BufferCount, "%s", v3);
        else
            v4 = snprintf(Buffer, BufferCount, "Unrecognized error: 0x%0.8x", a1);
        if (v4 < 0)
            Buffer[BufferCount - 1] = 0;
    }
}
// 52DB68: conditional instruction was optimized away because of '%BufferCount.4!=0'

//----- (00568E00) --------------------------------------------------------
[[noreturn]] void __cdecl throwDirectXError(int a1)
{
    char* text; // eax
    char Buffer[100]; // [esp+0h] [ebp-64h] BYREF

    getDirectXErrorName(a1, 100u, Buffer);
    text = getFormattedString("DirectX Error:- %s", Buffer);
    fatalError(text);
}

//----- (0052027C) --------------------------------------------------------
HRESULT __cdecl sub_52027C(_DWORD* a1)
{
    HRESULT result; // eax
    size_t Size; // [esp+10h] [ebp-8h] BYREF
    HRESULT v3; // [esp+14h] [ebp-4h]

    if (!a1)
        return -2147467259;
    if (ppv)
    {
        (*(void(__stdcall**)(LPVOID))(*(_DWORD*)ppv + 8))(ppv);
        ppv = 0;
    }
    v3 = CoCreateInstance(&rclsid, 0, 1u, &riid, &ppv);
    if (v3 >= 0)
    {
        v3 = (*(int(__stdcall**)(LPVOID, _DWORD, _DWORD, size_t*))(*(_DWORD*)ppv + 32))(ppv, 0, 0, &Size);
        if (v3 >= 0 || v3 == -2005467106)
        {
            if (dword_5BAE84)
            {
                sub_585E40((LPVOID)dword_5BAE84);
                dword_5BAE84 = 0;
            }
            dword_5BAE84 = (int)operator new(Size);
            v3 = (*(int(__stdcall**)(LPVOID, _DWORD, int, size_t*))(*(_DWORD*)ppv + 32))(ppv, 0, dword_5BAE84, &Size);
            if (v3 >= 0)
            {
                *a1 = 1;
                v3 = sub_52046E();
                if (v3 >= 0)
                {
                    result = 0;
                }
                else
                {
                    if (dword_5BAE84)
                    {
                        sub_585E40((LPVOID)dword_5BAE84);
                        dword_5BAE84 = 0;
                    }
                    if (ppv)
                    {
                        (*(void(__stdcall**)(LPVOID))(*(_DWORD*)ppv + 8))(ppv);
                        ppv = 0;
                    }
                    result = v3;
                }
            }
            else
            {
                result = v3;
            }
        }
        else if (v3 == -2005466066)
        {
            *a1 = 0;
            if (dword_5BAE84)
            {
                sub_585E40((LPVOID)dword_5BAE84);
                dword_5BAE84 = 0;
            }
            if (ppv)
            {
                (*(void(__stdcall**)(LPVOID))(*(_DWORD*)ppv + 8))(ppv);
                ppv = 0;
            }
            result = 0;
        }
        else
        {
            result = v3;
        }
    }
    else
    {
        if (v3 == -2147467262)
            MessageBoxA(0, "This application requires DirectPlay 6 or later. The sample will now quit.", "Fur Fight", 0x10u);
        result = v3;
    }
    return result;
}
// 5BAE84: using guessed type int dword_5BAE84;

//----- (00523C7A) --------------------------------------------------------
HRESULT __cdecl sub_523C7A(HINSTANCE a1)
{
    HRESULT result; // eax
    HRESULT v2; // [esp+8h] [ebp-Ch]
    int v3[2]; // [esp+Ch] [ebp-8h] BYREF

    v2 = sub_52027C(v3);
    if (v2 >= 0)
    {
        if (!v3[0])
        {
            v3[1] = 0;
            sub_51E347(a1);
        }
        result = 0;
    }
    else if (v2 == -2005466856)
    {
        result = 0;
    }
    else
    {
        result = v2;
    }
    return result;
}

//----- (0051A4CE) --------------------------------------------------------
int __cdecl sub_51A4CE(int a1, int a2, int a3)
{
    int result; // eax
    int v4; // [esp+0h] [ebp-118h]
    int v5; // [esp+0h] [ebp-118h]
    int v6; // [esp+0h] [ebp-118h]
    int v7; // [esp+0h] [ebp-118h]
    char Buffer[16]; // [esp+4h] [ebp-114h] BYREF
    char v9[256]; // [esp+14h] [ebp-104h] BYREF
    char v10[4]; // [esp+114h] [ebp-4h]

    *(_DWORD*)v10 = a3;
    *(_DWORD*)&g_IsDebug = 1;
    _strtime(Buffer);
    writeDebug("HandleActivateApp(): Started at %s", Buffer);
    writeDebug("HandleActivateApp(): active = %d", *(_DWORD*)v10);
    if (lpDD && dword_610070 && dword_610074)
    {
        if (!*(_DWORD*)v10 || dword_5B91A4)
        {
            if (*(_DWORD*)v10 || !dword_5B91A4)
            {
                if (*(_DWORD*)v10 && dword_5B91A4)
                {
                    writeDebug("HandleActivateApp(): Already activated!");
                }
                else if (!*(_DWORD*)v10 && !dword_5B91A4)
                {
                    writeDebug("HandleActivateApp(): Already deactivated!");
                }
            }
            else
            {
                dword_5B91A4 = 0;
                writeDebug("HandleActivateApp(): DEACTIVATE received");
                writeDebug("HandleActivateApp(): Suspending and releasing");
                dword_6673E0 = a3;
                if (!g_dwWindowedMode)
                {
                    writeDebug("HandleActivateApp(): Restoring display mode");
                    v6 = (*(int(__thiscall**)(LPVOID, LPVOID))(*(_DWORD*)lpDD + 76))(lpDD, lpDD);
                    if (v6)
                    {
                        getDirectXErrorName(v6, 0x100u, v9);
                        writeDebug("HandleActivateApp(): IDirectDraw7_RestoreDisplayMode() failed with error %s", v9);
                    }
                }
                writeDebug("HandleActivateApp(): Setting cooperative level to NORMAL");
                v7 = (*(int(__thiscall**)(LPVOID, LPVOID, HWND, int))(*(_DWORD*)lpDD + 80))(lpDD, lpDD, g_WindowHWnd, 10);
                if (v7)
                {
                    getDirectXErrorName(v7, 0x100u, v9);
                    writeDebug("HandleActivateApp(): IDirectDraw7_SetCooperativeLevel() failed with error %s", v9);
                }
                writeDebug("HandleActivateApp(): Stopping sound and music");
                maybe_stopSounds();
                sub_5836F8();
                startSoundTimer();
                maybeSoundRelease();
                maybeSoundRelease2();
                if (!g_dwWindowedMode)
                    ShowWindow(g_WindowHWnd, 6);
            }
        }
        else
        {
            dword_5B91A4 = 1;
            writeDebug("HandleActivateApp(): ACTIVATE received");
            writeDebug("HandleActivateApp(): Reacquiring and restoring");
            writeDebug("HandleActivateApp(): Setting cooperative level to EXCLUSIVE");
            if (g_dwWindowedMode)
            {
                v4 = (*(int(__thiscall**)(LPVOID, LPVOID, HWND, int))(*(_DWORD*)lpDD + 80))(lpDD, lpDD, g_WindowHWnd, 8);
                if (v4)
                {
                    getDirectXErrorName(v4, 0x100u, v9);
                    writeDebug("HandleActivateApp(): IDirectDraw7_SetCooperativeLevel() failed with error %s", v9);
                }
            }
            else
            {
                v5 = (*(int(__thiscall**)(LPVOID, LPVOID, HWND, int))(*(_DWORD*)lpDD + 80))(lpDD, lpDD, g_WindowHWnd, 2071);
                if (v5)
                {
                    getDirectXErrorName(v5, 0x100u, v9);
                    writeDebug("HandleActivateApp(): IDirectDraw7_SetCooperativeLevel() failed with error %s", v9);
                }
            }
            writeDebug("HandleActivateApp(): Restoring vertex buffers and surfaces");
            sub_577C00();
            sub_543461();
            writeDebug("HandleActivateApp(): Reacquiring devices");
            writeDebug("HandleActivate(): Restarting sound and music");
            sub_583213();
            maybeSoundInit();
            stopSoundTimer();
            sub_583776();
            dword_6673E0 = a3;
        }
        _strtime(Buffer);
        writeDebug("HandleActivateApp(): Finished at %s", Buffer);
        result = 0;
    }
    else
    {
        writeDebug("HandleActivateApp(): DDRAW/D3D not initialised yet");
        dword_6673E0 = a3;
        result = 0;
    }
    return result;
}
// 543461: using guessed type int sub_543461(void);
// 577C00: using guessed type int sub_577C00(void);
// 57FCA6: using guessed type int sub_57FCA6(void);
// 582D0C: using guessed type int sub_582D0C(void);
// 582D65: using guessed type int sub_582D65(void);
// 582FAA: using guessed type int maybeSoundRelease(void);
// 58306B: using guessed type int maybeSoundInit(void);
// 5830FF: using guessed type int maybeSoundRelease2(void);
// 583213: using guessed type int sub_583213(void);
// 5836F8: using guessed type int sub_5836F8(void);
// 583776: using guessed type int sub_583776(void);
// 5B91A4: using guessed type int dword_5B91A4;
// 60FE2C: using guessed type int g_dwWindowedMode;
// 610070: using guessed type int dword_610070;
// 6673E0: using guessed type int dword_6673E0;

//----- (00568E33) --------------------------------------------------------
int __cdecl sub_568E33(int a1)
{
    void* v2; // ecx
    int v4; // [esp+0h] [ebp-4h]
    int v5; // [esp+0h] [ebp-4h]
    int v6; // [esp+0h] [ebp-4h]

    v4 = sub_57808E(a1);
    if (v4 < 0)
        throwDirectXError(v4);
    v5 = sub_5786C9(a1);
    if (v5 < 0)
        throwDirectXError(v5);
    v6 = startupDX3D();
    if (v6)
        throwDirectXError(v6);
    writeDebug("Enumming Textures");
    sub_57D760(0);
    dword_60FE70 = 0;
    dword_6103CC = -1;
    dword_6103C8 = 0;
    if (*(_DWORD*)g_ZBufferBitDepth == 16)
        dword_610434 = 1148846080;
    else
        dword_610434 = 1159479296;
    dword_610430 = 1045220557;
    *(float*)&dword_610438 = *(float*)&dword_610434 / (*(float*)&dword_610434 - 0.2);
    dword_6103CC = -1;
    dword_6103D0 = -1;
    dword_6103D4 = -1;
    dword_6103D8 = -1;
    dword_6103DC = -1;
    dword_6103E0 = -1;
    dword_6103E8 = -1;
    dword_6103EC = -1;
    dword_6103F0 = -1;
    dword_6103F4 = -1;
    dword_6103F8 = -1;
    return sub_57CEC9(v2);
}
// 568F81: variable 'v2' is possibly undefined
// 57808E: using guessed type _DWORD __cdecl sub_57808E(_DWORD);
// 5786C9: using guessed type int __cdecl sub_5786C9(_DWORD);
// 57D760: using guessed type int __cdecl sub_57D760(_DWORD);
// 60FE70: using guessed type int dword_60FE70;
// 6103C8: using guessed type int dword_6103C8;
// 6103CC: using guessed type int dword_6103CC;
// 6103D0: using guessed type int dword_6103D0;
// 6103D4: using guessed type int dword_6103D4;
// 6103D8: using guessed type int dword_6103D8;
// 6103DC: using guessed type int dword_6103DC;
// 6103E0: using guessed type int dword_6103E0;
// 6103E8: using guessed type int dword_6103E8;
// 6103EC: using guessed type int dword_6103EC;
// 6103F0: using guessed type int dword_6103F0;
// 6103F4: using guessed type int dword_6103F4;
// 6103F8: using guessed type int dword_6103F8;
// 610430: using guessed type int dword_610430;
// 610434: using guessed type int dword_610434;
// 610438: using guessed type int dword_610438;

//----- (0056905F) --------------------------------------------------------
int sub_56905F()
{
    int result; // eax
    char Buffer[256]; // [esp+4h] [ebp-100h] BYREF

    result = (*(int(__thiscall**)(int, int))(*(_DWORD*)dword_610074 + 20))(dword_610074, dword_610074);
    if (result)
    {
        if (result == -2005532222)
        {
            result = writeDebug("BeginScene(): IDirect3DDevice7_BeginScene failed with error DDERR_SURFACELOST !");
        }
        else
        {
            getDirectXErrorName(result, 0x100u, Buffer);
            result = writeDebug("BeginScene(): IDirect3DDevice7_BeginScene failed with error %s !", Buffer);
        }
    }
    return result;
}

//----- (005690D3) --------------------------------------------------------
int sub_5690D3()
{
    int result; // eax
    char Buffer[256]; // [esp+4h] [ebp-100h] BYREF

    result = (*(int(__thiscall**)(int, int))(*(_DWORD*)dword_610074 + 24))(dword_610074, dword_610074);
    if (result)
    {
        if (result == -2005532222)
        {
            result = writeDebug("EndScene(): IDirect3DDevice7_EndScene failed with error DDERR_SURFACELOST !");
        }
        else
        {
            getDirectXErrorName(result, 0x100u, Buffer);
            result = writeDebug("EndScene(): IDirect3DDevice7_EndScene failed with error %s !", Buffer);
        }
    }
    return result;
}

//----- (005752F3) --------------------------------------------------------
int __cdecl sub_5752F3(int a1, int a2)
{
    int result; // eax
    int v3; // [esp+14h] [ebp-48h]
    int v4; // [esp+18h] [ebp-44h]
    char v5[20]; // [esp+1Ch] [ebp-40h] BYREF
    int v6[11]; // [esp+30h] [ebp-2Ch] BYREF

    word_668736 = 2;
    word_668738 = 2;
    word_66873A = 2;
    word_66873C = 2;
    word_66875E = 0;
    DirectInputCreateEx(a1, DIRECTINPUT_VERSION, &IID_IDirectInput7, &g_maybeDirectInput, 0);
    (*(void(__stdcall**)(int, int*, void*, int*, _DWORD))(*(_DWORD*)g_maybeDirectInput + 36))(
        g_maybeDirectInput,
        &dword_597360,
        &unk_5973C0,
        &dword_622044,
        0);
    (*(void(__stdcall**)(int, void*))(*(_DWORD*)dword_622044 + 44))(dword_622044, &unk_597C90);
    (*(void(__thiscall**)(int, int, int, int))(*(_DWORD*)dword_622044 + 52))(dword_622044, dword_622044, a2, 21);
    v6[0] = 44;
    (*(void(__thiscall**)(int, int, int*))(*(_DWORD*)dword_622044 + 12))(dword_622044, dword_622044, v6);
    v3 = (*(int(__thiscall**)(int, int))(*(_DWORD*)dword_622044 + 28))(dword_622044, dword_622044);
    if (v3 != 1 && v3)
    {
        g_maybeIsKeyboardDevAvailable = 0;
        writeDebug("ERROR in acquiring Keyboard DI device");
        if (v3 == -2147024891)
            writeDebug("other app has priority");
        if (v3 == -2147024875)
            writeDebug("not initialised");
        if (v3 == -2147024809)
            writeDebug("no selected data format");
    }
    else
    {
        g_maybeIsKeyboardDevAvailable = 1;
    }
    memset(&dword_622340, 0, 0x100u);
    if ((*(int(__thiscall**)(int, int, void*, void*, int*, _DWORD))(*(_DWORD*)g_maybeDirectInput + 36))(
        g_maybeDirectInput,
        g_maybeDirectInput,
        &unk_597370,
        &unk_5973C0,
        &dword_62232C,
        0))
    {
        fatalError("Mouse Creation Error");
    }
    if ((*(int(__thiscall**)(int, int, void*))(*(_DWORD*)dword_62232C + 44))(dword_62232C, dword_62232C, &unk_597C78))
        fatalError("Mouse Data Format Error");
    if ((*(int(__stdcall**)(int, int, int))(*(_DWORD*)dword_62232C + 52))(dword_62232C, a2, 21))
        fatalError("Mouse Co-op Error");
    g_uselessEventA = (int)CreateEventA(0, 0, 0, 0);
    (*(void(__thiscall**)(int, int, void(__stdcall*)(DWORD, DWORD, DWORD, DWORD, ULONG_PTR)))(*(_DWORD*)dword_62232C
        + 48))(
            dword_62232C,
            dword_62232C,
            mouse_event);
    (*(void(__thiscall**)(int, int, int, char*))(*(_DWORD*)dword_62232C + 24))(dword_62232C, dword_62232C, 1, v5);
    v4 = (*(int(__thiscall**)(int, int))(*(_DWORD*)dword_62232C + 28))(dword_62232C, dword_62232C);
    if (v3 != 1 && v3)
    {
        g_maybeIsMouseDevAvailable = 0;
        writeDebug("ERROR in acquiring Mouse DI device");
        if (v3 == -2147024891)
            writeDebug("other app has priority");
        if (v3 == -2147024875)
            writeDebug("not initialised");
        if (v3 == -2147024809)
            writeDebug("no selected data format");
    }
    else
    {
        g_maybeIsMouseDevAvailable = 1;
    }
    if (v4)
        writeDebug("Mouse Acquire Value NOT Ok - %d", v4);
    _cfltcvt_init_4();
    result = loadControllerSettings();
    word_668762 = 0;
    return result;
}
// 575594: conditional instruction was optimized away because of '%var_48.4>=2u'
// 575417: conditional instruction was optimized away because of '%var_48.4>=2u'
// 44D136: using guessed type int loadControllerSettings(void);
// 5750F0: using guessed type int _cfltcvt_init_4(void);
// 593050: using guessed type int __stdcall DirectInputCreateEx(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 597360: using guessed type int dword_597360;
// 622040: using guessed type int g_maybeIsMouseDevAvailable;
// 622044: using guessed type int dword_622044;
// 62232C: using guessed type int dword_62232C;
// 622330: using guessed type int g_maybeIsKeyboardDevAvailable;
// 622334: using guessed type int g_maybeDirectInput;
// 622338: using guessed type int g_uselessEventA;
// 622340: using guessed type int dword_622340;
// 668736: using guessed type __int16 word_668736;
// 668738: using guessed type __int16 word_668738;
// 66873A: using guessed type __int16 word_66873A;
// 66873C: using guessed type __int16 word_66873C;
// 66875E: using guessed type __int16 word_66875E;
// 668762: using guessed type __int16 word_668762;

//----- (00577C00) --------------------------------------------------------
int sub_577C00()
{
    int v1; // [esp+0h] [ebp-104h]
    int v2; // [esp+0h] [ebp-104h]
    int v3; // [esp+0h] [ebp-104h]
    int v4; // [esp+0h] [ebp-104h]
    char Buffer[256]; // [esp+4h] [ebp-100h] BYREF

    if (!lpDD || !dword_610070 || !dword_610074 || !dword_60FE64 || !dword_60FE6C)
    {
        writeDebug("RestoreSurfaces(): DDRAW/D3D not initialised yet");
        return 0;
    }
    if ((*(int(__thiscall**)(int, int))(*(_DWORD*)dword_60FE64 + 96))(dword_60FE64, dword_60FE64) != -2005532222
        && (*(int(__thiscall**)(int, int))(*(_DWORD*)dword_60FE6C + 96))(dword_60FE6C, dword_60FE6C) != -2005532222
        && (!g_dwWindowedMode
            || (*(int(__thiscall**)(int, int))(*(_DWORD*)dword_60FE68 + 96))(dword_60FE68, dword_60FE68) != -2005532222))
    {
        return 0;
    }
    writeDebug("RestoreSurfaces(): Restoring display mode and the front, back and z buffers");
    if (!g_dwWindowedMode)
    {
        v1 = (*(int(__thiscall**)(LPVOID, LPVOID, int, int, int, _DWORD, _DWORD))(*(_DWORD*)lpDD + 84))(
            lpDD,
            lpDD,
            dwWidth,
            dwHeight,
            dwRGBBitsCount,
            0,
            0);
        if (v1)
        {
            getDirectXErrorName(v1, 0x100u, Buffer);
            writeDebug("RestoreSurfaces(): IDirectDraw7_SetDisplayMode() failed with error %s", Buffer);
            return v1;
        }
        ShowWindow(g_WindowHWnd, 3);
        UpdateWindow(g_WindowHWnd);
        SetFocus(g_WindowHWnd);
    }
    if ((*(int(__thiscall**)(int, int))(*(_DWORD*)dword_60FE64 + 96))(dword_60FE64, dword_60FE64) == -2005532222)
    {
        writeDebug("RestoreSurfaces(): front buffer lost, restoring");
        v2 = (*(int(__thiscall**)(int, int))(*(_DWORD*)dword_60FE64 + 108))(dword_60FE64, dword_60FE64);
        if (v2)
        {
            getDirectXErrorName(v2, 0x100u, Buffer);
            writeDebug("RestoreSurfaces(): front buffer IDirectDrawSurface7_Restore() failed with error %s", Buffer);
            return v2;
        }
    }
    if (g_dwWindowedMode)
    {
        if ((*(int(__thiscall**)(int, int))(*(_DWORD*)dword_60FE68 + 96))(dword_60FE68, dword_60FE68) == -2005532222)
        {
            writeDebug("RestoreSurfaces(): back buffer lost, restoring");
            v3 = (*(int(__thiscall**)(int, int))(*(_DWORD*)dword_60FE68 + 108))(dword_60FE68, dword_60FE68);
            if (v3)
            {
                getDirectXErrorName(v3, 0x100u, Buffer);
                writeDebug("RestoreSurfaces(): back buffer IDirectDrawSurface7_Restore() failed with error %s", Buffer);
                return v3;
            }
        }
    }
    if ((*(int(__thiscall**)(int, int))(*(_DWORD*)dword_60FE6C + 96))(dword_60FE6C, dword_60FE6C) != -2005532222)
        return 0;
    writeDebug("RestoreSurfaces(): z buffer lost, restoring");
    v4 = (*(int(__thiscall**)(int, int))(*(_DWORD*)dword_60FE6C + 108))(dword_60FE6C, dword_60FE6C);
    if (!v4)
        return 0;
    getDirectXErrorName(v4, 0x100u, Buffer);
    writeDebug("RestoreSurfaces(): z buffer IDirectDrawSurface7_Restore() failed with error %s", Buffer);
    return v4;
}
// 60FE28: using guessed type int dwRGBBitsCount;
// 60FE2C: using guessed type int g_dwWindowedMode;
// 60FE64: using guessed type int dword_60FE64;
// 60FE68: using guessed type int dword_60FE68;
// 60FE6C: using guessed type int dword_60FE6C;
// 610070: using guessed type int dword_610070;

//----- (00578B98) --------------------------------------------------------
int __cdecl checkAudioVideoDevices(int a1)
{
    dword_5C606C = (int(__cdecl*)(_DWORD, _DWORD))a1;
    dword_610448 = (int)&unk_5B1DA8;
    dword_61044C = 0;
    DirectDrawEnumerateExA(Callback, 0, 7u);
    if (!numVideoDevicesOrModes)
        fatalError("No devices and/or modes were enumerated!");
    if (!numVideoDevices)
        fatalError("No enumerated devices were accepted!");
    return 0;
}
// 5C6064: using guessed type int dword_5C6064;
// 5C6068: using guessed type int dword_5C6068;
// 5C606C: using guessed type int (__cdecl *dword_5C606C)(_DWORD, _DWORD);
// 610448: using guessed type int dword_610448;
// 61044C: using guessed type int dword_61044C;

//----- (00578C10) --------------------------------------------------------
BOOL __stdcall Callback(GUID* lpGuid, LPSTR a2, LPSTR a3, LPVOID a4, HMONITOR a5)
{
    int v6; // [esp+8h] [ebp-4DCh] BYREF
    _DWORD String1[309]; // [esp+Ch] [ebp-4D8h] BYREF
    LPVOID lpDD; // [esp+4E0h] [ebp-4h] BYREF

    if (DirectDrawCreateEx(lpGuid, &lpDD, &iid, 0) < 0)
        fatalError("Can't create DDraw during enumeration!");
    if ((**(int(__thiscall***)(LPVOID, LPVOID, void*, int*))lpDD)(lpDD, lpDD, &unk_5972C8, &v6) < 0)
    {
        (*(void(__thiscall**)(LPVOID, LPVOID))(*(_DWORD*)lpDD + 8))(lpDD, lpDD);
        fatalError("Can't query IDirect3D7 during enumeration!");
    }
    memset(String1, 0, sizeof(String1));
    lstrcpynA((LPSTR)String1, a2, 39);
    String1[72] = 380;
    String1[167] = 380;
    (*(void(__thiscall**)(LPVOID, LPVOID, _DWORD*, _DWORD*))(*(_DWORD*)lpDD + 44))(
        lpDD,
        lpDD,
        &String1[72],
        &String1[167]);
    if (lpGuid)
    {
        *(GUID*)&String1[299] = *lpGuid;
        String1[71] = &String1[299];
    }
    if ((String1[74] & 0x80000) != 0 && !String1[71])
        String1[306] = 1;
    (*(void(__thiscall**)(LPVOID, LPVOID, _DWORD, _DWORD, _DWORD*, int(__stdcall*)(int, int)))(*(_DWORD*)lpDD + 32))(
        lpDD,
        lpDD,
        0,
        0,
        String1,
        sub_578DB1);
    qsort((void*)String1[303], String1[304], 0x7Cu, CompareFunction);
    (*(void(__thiscall**)(int, int, int(__stdcall*)(int, LPCSTR, int, int), _DWORD*))(*(_DWORD*)v6 + 12))(
        v6,
        v6,
        sub_578EFF,
        String1);
    (*(void(__thiscall**)(int, int))(*(_DWORD*)v6 + 8))(v6, v6);
    (*(void(__thiscall**)(LPVOID, LPVOID))(*(_DWORD*)lpDD + 8))(lpDD, lpDD);
    return 1;
}
// 578DB1: using guessed type int __stdcall sub_578DB1(int, int);

//----- (0057808E) --------------------------------------------------------
int __cdecl sub_57808E(LONG* a1)
{
    unsigned int i; // [esp+4h] [ebp-220h]
    unsigned int j; // [esp+4h] [ebp-220h]
    unsigned int k; // [esp+4h] [ebp-220h]
    __int16 greenBitsShift; // [esp+8h] [ebp-21Ch]
    __int16 greenBits; // [esp+8h] [ebp-21Ch]
    __int16 redBitsShift; // [esp+Ch] [ebp-218h]
    __int16 redBits; // [esp+Ch] [ebp-218h]
    __int16 blueBitsShift; // [esp+10h] [ebp-214h]
    __int16 blueBits; // [esp+10h] [ebp-214h]
    int v11; // [esp+14h] [ebp-210h] BYREF
    char v12[380]; // [esp+18h] [ebp-20Ch] BYREF
    HRESULT v13; // [esp+194h] [ebp-90h]
    int v14[4]; // [esp+198h] [ebp-8Ch] BYREF
    int v15[31]; // [esp+1A8h] [ebp-7Ch] BYREF

    v13 = DirectDrawCreateEx((GUID*)a1[11], &lpDD, &iid, 0);
    if (v13 < 0)
        return v13;
    dword_610400 = a1[3];
    dword_6103FC = (HWND)a1[10];
    if (a1[3])
        v13 = (*(int(__thiscall**)(LPVOID, LPVOID, LONG, int))(*(_DWORD*)lpDD + 80))(lpDD, lpDD, a1[10], 8);
    else
        v13 = (*(int(__stdcall**)(LPVOID, LONG, int))(*(_DWORD*)lpDD + 80))(lpDD, a1[10], 2071);
    if (v13 < 0)
        return v13;
    if (!a1[3])
    {
        v13 = (*(int(__thiscall**)(LPVOID, LPVOID, LONG, LONG, LONG, _DWORD, _DWORD))(*(_DWORD*)lpDD + 84))(
            lpDD,
            lpDD,
            *a1,
            a1[1],
            a1[2],
            0,
            0);
        if (v13 < 0)
            return v13;
        ShowCursor(0);
        ShowWindow((HWND)a1[10], 3);
        UpdateWindow((HWND)a1[10]);
        SetFocus((HWND)a1[10]);
    }
    (*(void(__thiscall**)(LPVOID, LPVOID, void*, char*))(*(_DWORD*)lpDD + 44))(lpDD, lpDD, &unk_60FEF4, v12);
    memset(v15, 0, sizeof(v15));
    v15[0] = 124;
    if (a1[3])
    {
        v15[1] = 1;
        v15[26] = 512;
    }
    else
    {
        v15[1] = 33;
        v15[26] = 8728;
        if (a1[8])
            v15[5] = 2;
        else
            v15[5] = 1;
    }
    v13 = (*(int(__thiscall**)(LPVOID, LPVOID, int*, int*, _DWORD))(*(_DWORD*)lpDD + 24))(
        lpDD,
        lpDD,
        v15,
        &dword_60FE64,
        0);
    if (v13 < 0)
        return v13;
    if (a1[3])
    {
        GetClientRect(dword_6103FC, &Point);
        GetClientRect(dword_6103FC, &stru_610418);
        ClientToScreen(dword_6103FC, (LPPOINT)&Point);
        ClientToScreen(dword_6103FC, (LPPOINT)&Point.right);
        v15[1] = 7;
        v15[26] = 8256;
        v15[3] = Point.right - Point.left;
        v15[2] = Point.bottom - Point.top;
        v13 = (*(int(__thiscall**)(LPVOID, LPVOID, int*, int*, _DWORD))(*(_DWORD*)lpDD + 24))(
            lpDD,
            lpDD,
            v15,
            &dword_60FE68,
            0);
        if (v13 < 0)
            return v13;
        v13 = (*(int(__thiscall**)(LPVOID, LPVOID, _DWORD, int*, _DWORD))(*(_DWORD*)lpDD + 16))(lpDD, lpDD, 0, &v11, 0);
        if (v13 < 0)
            return v13;
        (*(void(__stdcall**)(int, _DWORD, HWND))(*(_DWORD*)v11 + 32))(v11, 0, dword_6103FC);
        (*(void(__thiscall**)(int, int, int))(*(_DWORD*)dword_60FE64 + 112))(dword_60FE64, dword_60FE64, v11);
        (*(void(__thiscall**)(int, int))(*(_DWORD*)v11 + 8))(v11, v11);
    }
    else
    {
        Point.top = 0;
        Point.left = 0;
        Point.right = *a1;
        Point.top = a1[1];
        stru_610418.left = 0;
        stru_610418.top = Point.top;
        *(struct tagPOINT*)&stru_610418.right = *(struct tagPOINT*)&Point.right;
        v14[1] = 0;
        v14[2] = 0;
        v14[3] = 0;
        v14[0] = 4;
        v13 = (*(int(__thiscall**)(int, int, int*, int*))(*(_DWORD*)dword_60FE64 + 48))(
            dword_60FE64,
            dword_60FE64,
            v14,
            &dword_60FE68);
        if (v13 < 0)
            return v13;
    }
    dword_60FE74 = 124;
    (*(void(__thiscall**)(int, int, int*))(*(_DWORD*)dword_60FE68 + 88))(dword_60FE68, dword_60FE68, &dword_60FE74);
    redBitsShift = 0;
    for (i = dword_60FECC; (i & 1) == 0; i >>= 1)
        ++redBitsShift;
    g_RedBitsShift = redBitsShift;
    redBits = 0;
    while ((i & 1) != 0)
    {
        ++redBits;
        i >>= 1;
    }
    g_RedBits = redBits;
    writeDebug("Red Bits - %d, shift %d", redBits, g_RedBitsShift);
    greenBitsShift = 0;
    for (j = dword_60FED0; (j & 1) == 0; j >>= 1)
        ++greenBitsShift;
    g_GreenBitsShift = greenBitsShift;
    greenBits = 0;
    while ((j & 1) != 0)
    {
        ++greenBits;
        j >>= 1;
    }
    g_GreenBits = greenBits;
    writeDebug("Green Bits - %d, shift %d", greenBits, g_GreenBitsShift);
    blueBitsShift = 0;
    for (k = dword_60FED4; (k & 1) == 0; k >>= 1)
        ++blueBitsShift;
    g_BlueBitsShift = blueBitsShift;
    blueBits = 0;
    while ((k & 1) != 0)
    {
        ++blueBits;
        k >>= 1;
    }
    g_BlueBits = blueBits;
    writeDebug("Blue Bits - %d, shift %d", blueBits, g_BlueBitsShift);
    return (**(int(__thiscall***)(int, int, void*, int*))dword_60FE64)(
        dword_60FE64,
        dword_60FE64,
        &unk_597258,
        &dword_60FEF0);
}
// 60FE64: using guessed type int dword_60FE64;
// 60FE68: using guessed type int dword_60FE68;
// 60FE74: using guessed type int dword_60FE74;
// 60FECC: using guessed type int dword_60FECC;
// 60FED0: using guessed type int dword_60FED0;
// 60FED4: using guessed type int dword_60FED4;
// 60FEF0: using guessed type int dword_60FEF0;
// 610400: using guessed type int dword_610400;
// 622CE6: using guessed type __int16 g_RedBits;
// 622CE8: using guessed type __int16 g_GreenBits;
// 622CEA: using guessed type __int16 g_BlueBits;
// 622CEC: using guessed type __int16 g_RedBitsShift;
// 622CEE: using guessed type __int16 g_GreenBitsShift;
// 622CF0: using guessed type __int16 g_BlueBitsShift;

//----- (0056975B) --------------------------------------------------------
int sub_56975B()
{
    return sub_56905F();
}

//----- (00568F8A) --------------------------------------------------------
int __stdcall sub_568F8A(void* voidPrtVar)
{
    int result; // eax

    sub_569A61();
    result = sub_577F03();
    if (result < 0)
        throwDirectXError(result);
    return result;
}
// 568E00: using guessed type void __cdecl __noreturn sub_568E00(_DWORD);
// 569A61: using guessed type int __cdecl sub_569A61(_DWORD);
// 577F03: using guessed type int sub_577F03(void);


//----- (00578EFF) --------------------------------------------------------
int __stdcall sub_578EFF(int a1, LPCSTR a2, int a3, int a4)
{
    LPSTR v4; // edx
    LPCSTR v5; // eax
    LPSTR v6; // ecx
    int v8[31]; // [esp+8h] [ebp-90h] BYREF
    int v9; // [esp+84h] [ebp-14h]
    int v10; // [esp+88h] [ebp-10h]
    LPSTR lpString1; // [esp+8Ch] [ebp-Ch]
    unsigned int i; // [esp+90h] [ebp-8h]
    LPCSTR lpString2; // [esp+94h] [ebp-4h]

    lpString2 = (LPCSTR)a4;
    lpString1 = (char*)&unk_5BFFC8 + 1236 * numVideoDevices;
    ++numVideoDevicesOrModes;
    memset(lpString1, 0, 0x4D4u);
    *((_DWORD*)lpString1 + 70) = *(_DWORD*)a3 & 0x80000;
    qmemcpy(lpString1 + 44, (const void*)a3, 0xECu);
    *((_DWORD*)lpString1 + 308) = 1;
    *((_DWORD*)lpString1 + 306) = *((_DWORD*)lpString2 + 306);
    qmemcpy(lpString1 + 288, lpString2 + 288, 0x17Cu);
    qmemcpy(lpString1 + 668, lpString2 + 668, 0x17Cu);
    v4 = lpString1 + 1180;
    *((_DWORD*)lpString1 + 295) = *(_DWORD*)(a3 + 196);
    *((_DWORD*)v4 + 1) = *(_DWORD*)(a3 + 200);
    *((_DWORD*)v4 + 2) = *(_DWORD*)(a3 + 204);
    *((_DWORD*)v4 + 3) = *(_DWORD*)(a3 + 208);
    *((_DWORD*)lpString1 + 10) = lpString1 + 1180;
    *((_DWORD*)lpString1 + 303) = malloc(124 * *((_DWORD*)lpString2 + 304));
    if (*((_DWORD*)lpString2 + 71))
    {
        v5 = lpString2 + 1196;
        v6 = lpString1 + 1196;
        *((_DWORD*)lpString1 + 299) = *((_DWORD*)lpString2 + 299);
        *((_DWORD*)v6 + 1) = *((_DWORD*)v5 + 1);
        *((_DWORD*)v6 + 2) = *((_DWORD*)v5 + 2);
        *((_DWORD*)v6 + 3) = *((_DWORD*)v5 + 3);
        *((_DWORD*)lpString1 + 71) = lpString1 + 1196;
        lstrcpynA(lpString1, lpString2, 39);
    }
    else
    {
        *((_DWORD*)lpString1 + 71) = 0;
        lstrcpynA(lpString1, a2, 39);
    }
    if (*((_DWORD*)lpString1 + 71) && !*((_DWORD*)lpString1 + 70))
        return 1;
    if (dword_5C606C && dword_5C606C(lpString1 + 288, lpString1 + 44) < 0)
        return 1;
    for (i = 0; i < *((_DWORD*)lpString2 + 304); ++i)
    {
        qmemcpy(v8, (const void*)(124 * i + *((_DWORD*)lpString2 + 303)), sizeof(v8));
        v10 = *((_DWORD*)lpString1 + 40);
        v9 = v8[21];
        if (v8[21] == 32 && (v10 & 0x100) != 0 || v9 == 24 && (v10 & 0x200) != 0 || v9 == 16 && (v10 & 0x400) != 0)
        {
            qmemcpy((void*)(124 * (*((_DWORD*)lpString1 + 304))++ + *((_DWORD*)lpString1 + 303)), v8, 0x7Cu);
            *((_DWORD*)lpString1 + 307) = 1;
        }
    }
    if (*((_DWORD*)lpString1 + 304))
        ++numVideoDevices;
    return 1;
}
// 5C6064: using guessed type int dword_5C6064;
// 5C6068: using guessed type int dword_5C6068;
// 5C606C: using guessed type int (__cdecl *dword_5C606C)(_DWORD, _DWORD);

//----- (00578B08) --------------------------------------------------------
int __cdecl CompareFunction(const void* a1, const void* a2)
{
    if (*((_DWORD*)a1 + 3) < *((_DWORD*)a2 + 3))
        return -1;
    if (*((_DWORD*)a1 + 3) > *((_DWORD*)a2 + 3))
        return 1;
    if (*((_DWORD*)a1 + 2) < *((_DWORD*)a2 + 2))
        return -1;
    if (*((_DWORD*)a1 + 2) > *((_DWORD*)a2 + 2))
        return 1;
    if (*((_DWORD*)a1 + 21) >= *((_DWORD*)a2 + 21))
        return *((_DWORD*)a1 + 21) > *((_DWORD*)a2 + 21);
    return -1;
}

//----- (005786C9) --------------------------------------------------------
int __cdecl sub_5786C9(int a1)
{
    int v2; // ecx
    int v3; // ecx
    int v4; // edx
    int v5[2]; // [esp+8h] [ebp-B8h] BYREF
    int v6; // [esp+10h] [ebp-B0h]
    int v7; // [esp+14h] [ebp-ACh]
    int v8; // [esp+18h] [ebp-A8h]
    int v9; // [esp+1Ch] [ebp-A4h]
    int v10[8]; // [esp+20h] [ebp-A0h] BYREF
    int v11; // [esp+40h] [ebp-80h]
    int v12; // [esp+44h] [ebp-7Ch] BYREF
    int v13; // [esp+48h] [ebp-78h]
    int v14; // [esp+4Ch] [ebp-74h]
    int v15; // [esp+50h] [ebp-70h]
    int v16[8]; // [esp+8Ch] [ebp-34h] BYREF
    int v17; // [esp+ACh] [ebp-14h]

    v11 = (**(int(__thiscall***)(LPVOID, LPVOID, void*, int*))lpDD)(lpDD, lpDD, &unk_5972C8, &dword_610070);
    if (v11 < 0)
        return v11;
    v12 = 124;
    (*(void(__thiscall**)(LPVOID, LPVOID, int*))(*(_DWORD*)lpDD + 48))(lpDD, lpDD, &v12);
    if (v16[3] <= 8u)
        return -2005532552;
    (*(void(__thiscall**)(int, int, _DWORD, int(__stdcall*)(_DWORD*, void*), int*))(*(_DWORD*)dword_610070 + 24))(
        dword_610070,
        dword_610070,
        *(_DWORD*)(a1 + 48),
        sub_578A63,
        v10);
    if (v10[0] != 32)
        return -2147467259;
    v13 = 4103;
    v17 = 0x20000;
    if (dword_610400)
    {
        v15 = Point.right - Point.left;
        v14 = Point.bottom - Point.top;
    }
    else
    {
        v15 = dword_60FE80;
        v14 = dword_60FE7C;
    }
    qmemcpy(v16, v10, sizeof(v16));
    if (!memcmp(*(const void**)(a1 + 48), dword_5972A8, 0x10u))
    {
        v2 = v17;
        BYTE1(v2) = BYTE1(v17) | 0x40;
        v17 = v2;
        dword_61043C = 0;
    }
    else if (!memcmp(*(const void**)(a1 + 48), dword_597278, 0x10u))
    {
        v3 = v17;
        BYTE1(v3) = BYTE1(v17) | 0x40;
        v17 = v3;
        dword_61043C = 1;
    }
    else
    {
        v4 = v17;
        BYTE1(v4) = BYTE1(v17) | 8;
        v17 = v4;
        dword_61043C = 0;
    }
    v11 = (*(int(__thiscall**)(LPVOID, LPVOID, int*, int*, _DWORD))(*(_DWORD*)lpDD + 24))(
        lpDD,
        lpDD,
        &v12,
        &dword_60FE6C,
        0);
    if (v11 < 0)
    {
        *(_DWORD*)(a1 + 36) = !*(_DWORD*)(a1 + 36);
        (*(void(__thiscall**)(int, int, _DWORD, int(__stdcall*)(_DWORD*, void*), int*))(*(_DWORD*)dword_610070 + 24))(
            dword_610070,
            dword_610070,
            *(_DWORD*)(a1 + 48),
            sub_578A63,
            v10);
        qmemcpy(v16, v10, sizeof(v16));
        v11 = (*(int(__stdcall**)(LPVOID, int*, int*, _DWORD))(*(_DWORD*)lpDD + 24))(lpDD, &v12, &dword_60FE6C, 0);
        if (v11 < 0)
            return v11;
    }
    (*(void(__thiscall**)(int, int, int*))(*(_DWORD*)dword_60FE6C + 88))(dword_60FE6C, dword_60FE6C, &v12);
    if (v12 == 124 && (v13 & 0x1000) != 0 && (v16[0] = 32, (v16[1] & 0x400) != 0))
    {
        *(_DWORD*)g_ZBufferBitDepth = v16[3];
    }
    else
    {
        writeDebug("Z buffer direct draw surface surface descriptor has invalid z buffer bit depth");
        *(_DWORD*)g_ZBufferBitDepth = 16;
    }
    writeDebug("Z buffer bit depth %d", *(_DWORD*)g_ZBufferBitDepth);
    v11 = (*(int(__stdcall**)(int, int))(*(_DWORD*)dword_60FE68 + 12))(dword_60FE68, dword_60FE6C);
    if (v11 < 0)
        return v11;
    v11 = (*(int(__stdcall**)(int, _DWORD, int, int*))(*(_DWORD*)dword_610070 + 16))(
        dword_610070,
        *(_DWORD*)(a1 + 48),
        dword_60FE68,
        &dword_610074);
    if (v11 < 0)
        return v11;
    if ((*(int(__stdcall**)(int, void*))(*(_DWORD*)dword_610074 + 12))(dword_610074, &unk_610078) < 0)
        return v11;
    v5[0] = 0;
    v5[1] = 0;
    if (*(_DWORD*)(a1 + 12))
    {
        v6 = Point.right - Point.left;
        v7 = Point.bottom - Point.top;
    }
    else
    {
        v6 = *(_DWORD*)a1;
        v7 = *(_DWORD*)(a1 + 4);
    }
    v8 = 0;
    v9 = 1065353216;
    return (*(int(__thiscall**)(int, int, int*))(*(_DWORD*)dword_610074 + 52))(dword_610074, dword_610074, v5);
}
// 60FE68: using guessed type int dword_60FE68;
// 60FE6C: using guessed type int dword_60FE6C;
// 60FE7C: using guessed type int dword_60FE7C;
// 60FE80: using guessed type int dword_60FE80;
// 610070: using guessed type int dword_610070;
// 610400: using guessed type int dword_610400;
// 61043C: using guessed type int dword_61043C;

//----- (00577F03) --------------------------------------------------------
int sub_577F03()
{
    int i; // [esp+0h] [ebp-8h]

    sub_52CD67();
    if (dword_610074)
    {
        for (i = 0; i < 6; ++i)
            (*(void(__thiscall**)(int, int, int))(*(_DWORD*)dword_610074 + 164))(
                dword_610074,
                dword_610074,
                dword_622940[i]);
        if ((*(int(__thiscall**)(int, int))(*(_DWORD*)dword_610074 + 8))(dword_610074, dword_610074) > 0)
            return -2147467259;
    }
    if (dword_60FEF0)
        (*(void(__thiscall**)(int, int))(*(_DWORD*)dword_60FEF0 + 8))(dword_60FEF0, dword_60FEF0);
    if (dword_610070)
        (*(void(__thiscall**)(int, int))(*(_DWORD*)dword_610070 + 8))(dword_610070, dword_610070);
    if (dword_60FE6C)
        (*(void(__thiscall**)(int, int))(*(_DWORD*)dword_60FE6C + 8))(dword_60FE6C, dword_60FE6C);
    if (dword_60FE68)
        (*(void(__thiscall**)(int, int))(*(_DWORD*)dword_60FE68 + 8))(dword_60FE68, dword_60FE68);
    if (dword_60FE64)
        (*(void(__thiscall**)(int, int))(*(_DWORD*)dword_60FE64 + 8))(dword_60FE64, dword_60FE64);
    if (lpDD)
    {
        if (dword_5BFFA8)
        {
            (*(void(__thiscall**)(int, int))(*(_DWORD*)dword_5BFFA8 + 8))(dword_5BFFA8, dword_5BFFA8);
            dword_5BFFA8 = 0;
        }
        if ((*(int(__thiscall**)(LPVOID, LPVOID))(*(_DWORD*)lpDD + 8))(lpDD, lpDD) > 0)
            return -2147467259;
    }
    dword_610074 = 0;
    dword_610070 = 0;
    dword_60FE68 = 0;
    dword_60FE64 = 0;
    lpDD = 0;
    return 0;
}
// 5BFFA8: using guessed type int dword_5BFFA8;
// 60FE64: using guessed type int dword_60FE64;
// 60FE68: using guessed type int dword_60FE68;
// 60FE6C: using guessed type int dword_60FE6C;
// 60FEF0: using guessed type int dword_60FEF0;
// 610070: using guessed type int dword_610070;
// 622940: using guessed type int dword_622940[];

//----- (0057D760) --------------------------------------------------------
int sub_57D760()
{
    int result; // eax
    int i; // [esp+8h] [ebp-4h]

    dword_610444 = 0;
    for (i = 0; i < 17; ++i)
        dword_610384[i] = 0;
    result = (*(int(__stdcall**)(int, int(__stdcall*)(_DWORD*, int), _DWORD))(*(_DWORD*)dword_610074 + 16))(
        dword_610074,
        sub_57DA57,
        0);
    if (!dword_610444)
    {
        qmemcpy(&unk_610284, &unk_6101A4, 0x20u);
        qmemcpy(&unk_6102A4, &unk_6101A4, 0x20u);
        qmemcpy(&unk_6102C4, &unk_6101A4, 0x20u);
        qmemcpy(&unk_6102E4, &unk_6101A4, 0x20u);
        qmemcpy(&unk_610304, &unk_6101A4, 0x20u);
    }
    return result;
}
// 610384: using guessed type int dword_610384[];
// 610444: using guessed type int dword_610444;

//----- (0057DA57) --------------------------------------------------------
int __stdcall sub_57DA57(_DWORD* a1, int a2)
{
    unsigned int i; // [esp+8h] [ebp-14h]
    unsigned int j; // [esp+8h] [ebp-14h]
    unsigned int k; // [esp+8h] [ebp-14h]
    unsigned int l; // [esp+8h] [ebp-14h]
    int v7; // [esp+Ch] [ebp-10h]
    int v8; // [esp+Ch] [ebp-10h]
    int v9; // [esp+10h] [ebp-Ch]
    int v10; // [esp+10h] [ebp-Ch]
    int v11; // [esp+14h] [ebp-8h]
    int v12; // [esp+14h] [ebp-8h]
    int v13; // [esp+18h] [ebp-4h]
    int v14; // [esp+18h] [ebp-4h]

    if ((a1[1] & 8) != 0)
    {
        writeDebug("4 bit palette");
        qmemcpy(&unk_610164, a1, 0x20u);
        dword_610384 = 1;
        ++dword_6103C8;
        return 1;
    }
    if ((a1[1] & 0x20) != 0)
    {
        writeDebug("8 bit palette");
        qmemcpy(&unk_610184, a1, 0x20u);
        dword_610388 = 1;
        ++dword_6103C8;
        return 1;
    }
    if ((a1[1] & 0x40000) != 0 && (a1[1] & 0x80000) != 0)
    {
        writeDebug("bumpmap luminance dudv");
        qmemcpy(&unk_610364, a1, 0x20u);
        dword_6103C4 = 1;
        ++dword_6103C8;
        return 1;
    }
    if ((a1[1] & 0x40000) != 0)
    {
        writeDebug("bumpmap luminance");
        qmemcpy(&unk_610324, a1, 0x20u);
        dword_6103BC = 1;
        ++dword_6103C8;
        return 1;
    }
    if ((a1[1] & 0x80000) != 0)
    {
        writeDebug("bumpmap dudv");
        qmemcpy(&unk_610344, a1, 0x20u);
        dword_6103C0 = 1;
        ++dword_6103C8;
        return 1;
    }
    switch (a1[2])
    {
    case 0x31545844:
        writeDebug("DXT1 Compressed Texture");
        qmemcpy(&unk_610284, a1, 0x20u);
        dword_6103A8 = 1;
        dword_610444 = 1;
        ++dword_6103C8;
        return 1;
    case 0x32545844:
        writeDebug("DXT2 Compressed Texture");
        qmemcpy(&unk_6102A4, a1, 0x20u);
        dword_6103AC = 1;
        dword_610444 = 1;
        ++dword_6103C8;
        return 1;
    case 0x33545844:
        writeDebug("DXT3 Compressed Texture");
        qmemcpy(&unk_6102C4, a1, 0x20u);
        dword_6103B0 = 1;
        dword_610444 = 1;
        ++dword_6103C8;
        return 1;
    case 0x34545844:
        writeDebug("DXT4 Compressed Texture");
        qmemcpy(&unk_6102E4, a1, 0x20u);
        dword_6103B4 = 1;
        dword_610444 = 1;
        ++dword_6103C8;
        return 1;
    case 0x35545844:
        writeDebug("DXT5 Compressed Texture");
        qmemcpy(&unk_610304, a1, 0x20u);
        dword_6103B8 = 1;
        dword_610444 = 1;
        ++dword_6103C8;
        return 1;
    }
    if (!a1[3])
        return 1;
    if (a1[4])
    {
        v9 = 0;
        for (i = a1[4]; (i & 1) == 0; i >>= 1)
            ++v9;
        dword_5C607C = v9;
        v10 = 0;
        while ((i & 1) != 0)
        {
            ++v10;
            i >>= 1;
        }
        dword_5C6094 = v10;
    }
    else
    {
        dword_5C6094 = 0;
    }
    if (a1[5])
    {
        v7 = 0;
        for (j = a1[5]; (j & 1) == 0; j >>= 1)
            ++v7;
        dword_5C6078 = v7;
        v8 = 0;
        while ((j & 1) != 0)
        {
            ++v8;
            j >>= 1;
        }
        dword_5C6090 = v8;
    }
    else
    {
        dword_5C6090 = 0;
    }
    if (a1[6])
    {
        v11 = 0;
        for (k = a1[6]; (k & 1) == 0; k >>= 1)
            ++v11;
        dword_5C6080 = v11;
        v12 = 0;
        while ((k & 1) != 0)
        {
            ++v12;
            k >>= 1;
        }
        dword_5C6084 = v12;
    }
    else
    {
        dword_5C6084 = 0;
    }
    if (a1[7])
    {
        v13 = 0;
        for (l = a1[7]; (l & 1) == 0; l >>= 1)
            ++v13;
        dword_5C6088 = v13;
        v14 = 0;
        while ((l & 1) != 0)
        {
            ++v14;
            l >>= 1;
        }
        dword_5C608C = v14;
    }
    else
    {
        dword_5C608C = 0;
    }
    if (dword_5C6094 == 5 && dword_5C6090 == 5 && dword_5C6084 == 5 && dword_5C608C == 1)
    {
        writeDebug("5551 Format");
        qmemcpy(&unk_6101A4, a1, 0x20u);
        dword_61038C = 1;
        ++dword_6103C8;
        return 1;
    }
    if (dword_5C6094 == 5 && dword_5C6090 == 5 && dword_5C6084 == 5 && !dword_5C608C)
    {
        writeDebug("555 Format");
        qmemcpy(&unk_6101C4, a1, 0x20u);
        dword_610390 = 1;
        ++dword_6103C8;
        return 1;
    }
    if (dword_5C6094 == 5 && dword_5C6090 == 6 && dword_5C6084 == 5 && !dword_5C608C)
    {
        writeDebug("565 Format");
        qmemcpy(&unk_6101E4, a1, 0x20u);
        dword_610394 = 1;
        ++dword_6103C8;
        return 1;
    }
    if (dword_5C6094 == 4 && dword_5C6090 == 4 && dword_5C6084 == 4 && dword_5C608C == 4)
    {
        writeDebug("4444 Format");
        qmemcpy(&unk_610204, a1, 0x20u);
        dword_610398 = 1;
        ++dword_6103C8;
        return 1;
    }
    if (dword_5C6094 == 8 && dword_5C6090 == 8 && dword_5C6084 == 8 && !dword_5C608C)
    {
        writeDebug("888 Format");
        qmemcpy(&unk_610244, a1, 0x20u);
        dword_6103A0 = 1;
        ++dword_6103C8;
        return 1;
    }
    if (dword_5C6094 != 8 || dword_5C6090 != 8 || dword_5C6084 != 8 || dword_5C608C != 8)
        return 1;
    writeDebug("8888 Format");
    qmemcpy(&unk_610264, a1, 0x20u);
    dword_6103A4 = 1;
    ++dword_6103C8;
    return 1;
}
// 5C6078: using guessed type int dword_5C6078;
// 5C607C: using guessed type int dword_5C607C;
// 5C6080: using guessed type int dword_5C6080;
// 5C6084: using guessed type int dword_5C6084;
// 5C6088: using guessed type int dword_5C6088;
// 5C608C: using guessed type int dword_5C608C;
// 5C6090: using guessed type int dword_5C6090;
// 5C6094: using guessed type int dword_5C6094;
// 610384: using guessed type int dword_610384;
// 610388: using guessed type int dword_610388;
// 61038C: using guessed type int dword_61038C;
// 610390: using guessed type int dword_610390;
// 610394: using guessed type int dword_610394;
// 610398: using guessed type int dword_610398;
// 6103A0: using guessed type int dword_6103A0;
// 6103A4: using guessed type int dword_6103A4;
// 6103A8: using guessed type int dword_6103A8;
// 6103AC: using guessed type int dword_6103AC;
// 6103B0: using guessed type int dword_6103B0;
// 6103B4: using guessed type int dword_6103B4;
// 6103B8: using guessed type int dword_6103B8;
// 6103BC: using guessed type int dword_6103BC;
// 6103C0: using guessed type int dword_6103C0;
// 6103C4: using guessed type int dword_6103C4;
// 6103C8: using guessed type int dword_6103C8;
// 610444: using guessed type int dword_610444;

//----- (00578DB1) --------------------------------------------------------
int __stdcall sub_578DB1(_DWORD* a1, int a2)
{
    void* v3; // [esp+8h] [ebp-Ch]
    int i; // [esp+10h] [ebp-4h]

    for (i = 0; i < 10; ++i)
    {
        if (a1[3] == *(_DWORD*)(dword_610448 + 12 * i)
            && a1[2] == *(_DWORD*)(dword_610448 + 12 * i + 4)
            && a1[21] == *(_DWORD*)(dword_610448 + 12 * i + 8))
        {
            dword_61044C |= 1 << i;
            *((_DWORD*)&Data + i) = *(_DWORD*)(a2 + 1216);
            v3 = malloc(124 * (*(_DWORD*)(a2 + 1216) + 1));
            qmemcpy(v3, *(const void**)(a2 + 1212), 124 * *(_DWORD*)(a2 + 1216));
            sub_584E87(*(LPVOID*)(a2 + 1212));
            *(_DWORD*)(a2 + 1212) = v3;
            qmemcpy((void*)(124 * (*(_DWORD*)(a2 + 1216))++ + *(_DWORD*)(a2 + 1212)), a1, 0x7Cu);
            return 1;
        }
    }
    return 1;
}
// 610448: using guessed type int dword_610448;
// 61044C: using guessed type int dword_61044C;

//----- (00578A63) --------------------------------------------------------
int __stdcall sub_578A63(_DWORD* a1, void* a2)
{
    int bitBuffer; // [esp+8h] [ebp-80h]
    int v4[31]; // [esp+Ch] [ebp-7Ch] BYREF

    if ((a1[1] & 0x400) != 0)
    {
        bitBuffer = 16;
        if (g_dwHave32bitZBuffer)
            bitBuffer = 32;
        v4[0] = 124;
        (*(void(__thiscall**)(LPVOID, LPVOID, int*))(*(_DWORD*)lpDD + 48))(lpDD, lpDD, v4);
        if ((a1[1] & 0x4000) != 0)
        {
            if (a1[3] == bitBuffer)
            {
            LABEL_6:
                qmemcpy(a2, a1, 0x20u);
                return 0;
            }
        }
        else if (a1[3] == bitBuffer)
        {
            goto LABEL_6;
        }
    }
    return 1;
}
// 60FE44: using guessed type int g_dwHave32bitZBuffer;

//----- (0052CD67) --------------------------------------------------------
int sub_52CD67()
{
    void* v0; // esi
    int v2; // [esp-Ch] [ebp-12Ch] BYREF
    int pExceptionObject[38]; // [esp+88h] [ebp-98h] BYREF

    pExceptionObject[37] = 0;
    pExceptionObject[34] = (int)&v2;
    if (!dword_5BE260)
    {
        pExceptionObject[32] = -931722297;
        strcpy((char*)pExceptionObject, "D3DXUninitialize - Need to call D3DXInitialize first.");
        pExceptionObject[33] = 39;
        qmemcpy(pExceptionObject, pExceptionObject, 0x88u);
        _CxxThrowException(pExceptionObject, (_ThrowInfo*)&_TI2_AVCD3DXException__);
    }
    v0 = dword_5BE260;
    if (dword_5BE260)
    {
        sub_52DE94(dword_5BE260);
        sub_585E40(v0);
    }
    dword_5BE260 = 0;
    sub_52E136();
    return 0;
}

//----- (0052DE94) --------------------------------------------------------
int __thiscall sub_52DE94(_DWORD* this)
{
    void* v2; // edi
    int result; // eax
    void* v4; // edi
    void* v5; // edi
    void* v6; // edi
    void* v7; // esi

    v2 = (void*)this[4];
    if (v2)
    {
        sub_52DF09((_DWORD*)this[4]);
        result = sub_585E40(v2);
    }
    v4 = (void*)this[1];
    if (v4)
    {
        sub_531887((_DWORD*)this[1]);
        result = sub_585E40(v4);
    }
    v5 = (void*)this[2];
    if (v5)
    {
        sub_52DFA8(this[2]);
        result = sub_585E40(v5);
    }
    v6 = (void*)this[3];
    if (v6)
    {
        sub_52E01F(this[3]);
        result = sub_585E40(v6);
    }
    v7 = (void*)this[5];
    if (v7)
    {
        sub_52DF04();
        result = sub_585E40(v7);
    }
    return result;
}
// 52DFA8: using guessed type int __thiscall sub_52DFA8(_DWORD);
// 52E01F: using guessed type int __thiscall sub_52E01F(_DWORD);

//----- (0052E136) --------------------------------------------------------
int sub_52E136()
{
    void* v0; // esi
    void* v1; // esi
    int* v2; // edi
    LPVOID* v3; // esi
    LPVOID* v4; // esi
    LPVOID* v5; // esi
    LPVOID* v6; // esi

    if (dword_5BE270 == 1)
    {
        v0 = dword_5BE584;
        if (dword_5BE584)
        {
            if (*(_DWORD*)dword_5BE584)
                sub_584E87(*(LPVOID*)dword_5BE584);
            sub_585E40(v0);
        }
        v1 = dword_5BE580;
        if (dword_5BE580)
        {
            if (*(_DWORD*)dword_5BE580)
                sub_584E87(*(LPVOID*)dword_5BE580);
            sub_585E40(v1);
        }
        v2 = &dword_5BE418;
        do
        {
            v3 = (LPVOID*)*(v2 - 2);
            if (v3)
            {
                if (*v3)
                    sub_584E87(*v3);
                sub_585E40(v3);
            }
            v4 = (LPVOID*)*(v2 - 1);
            if (v4)
            {
                if (*v4)
                    sub_584E87(*v4);
                sub_585E40(v4);
            }
            v5 = (LPVOID*)*v2;
            if (*v2)
            {
                if (*v5)
                    sub_584E87(*v5);
                sub_585E40(v5);
            }
            v6 = (LPVOID*)v2[1];
            if (v6)
            {
                if (*v6)
                    sub_584E87(*v6);
                sub_585E40(v6);
            }
            v2 += 4;
        } while ((int)v2 < (int)&unk_5BE588);
        memset(&dword_5BE410, 0, 0x170u);
        sub_584E87(dword_5BE278);
        dword_5BE278 = 0;
        dword_5BE274 = 0;
    }
    --dword_5BE270;
    return 0;
}
// 5BE270: using guessed type int dword_5BE270;
// 5BE274: using guessed type int dword_5BE274;
// 5BE410: using guessed type int dword_5BE410;
// 5BE418: using guessed type int dword_5BE418;

//----- (0052DF09) --------------------------------------------------------
int __thiscall sub_52DF09(_DWORD* this)
{
    _DWORD* i; // esi
    void* v3; // ebx
    int result; // eax

    *this = &off_5962C0;
    for (i = (_DWORD*)this[3]; i; result = sub_585E40(v3))
    {
        v3 = i;
        i = (_DWORD*)*i;
        sub_52F07B(v3);
    }
    this[3] = 0;
    this[2] = 0;
    return result;
}
// 52DF26: conditional instruction was optimized away because of 'ebx.4!=0'
// 52F07B: using guessed type int __thiscall sub_52F07B(_DWORD);
// 5962C0: using guessed type void *off_5962C0;

//----- (00531887) --------------------------------------------------------
int __thiscall sub_531887(_DWORD* this)
{
    void* v2; // edi
    int result; // eax
    void* v4; // edi
    void* v5; // esi

    v2 = (void*)this[98];
    if (v2)
    {
        sub_531B55(this[98]);
        result = sub_585E40(v2);
    }
    v4 = (void*)this[99];
    if (v4)
    {
        sub_531B55(this[99]);
        result = sub_585E40(v4);
    }
    v5 = (void*)this[100];
    if (v5)
    {
        sub_531B55(v5);
        result = sub_585E40(v5);
    }
    return result;
}
// 531B55: using guessed type int __thiscall sub_531B55(_DWORD);

//----- (0052DFA8) --------------------------------------------------------
int __thiscall sub_52DFA8(_DWORD* this)
{
    _DWORD* i; // esi
    void* v3; // ebx
    int result; // eax

    *this = &off_5962D8;
    for (i = (_DWORD*)this[3]; i; result = sub_585E40(v3))
    {
        v3 = i;
        i = (_DWORD*)*i;
        sub_53220A((int)v3);
    }
    this[3] = 0;
    this[2] = 0;
    return result;
}
// 52DFC5: conditional instruction was optimized away because of 'ebx.4!=0'
// 5962D8: using guessed type void *off_5962D8;

//----- (0052E01F) --------------------------------------------------------
int __thiscall sub_52E01F(_DWORD* this)
{
    _DWORD* i; // esi
    _DWORD* v3; // ebx
    int result; // eax

    *this = &off_5962F0;
    for (i = (_DWORD*)this[3]; i; result = sub_585E40(v3))
    {
        v3 = i;
        i = (_DWORD*)*i;
        sub_52F22F(v3);
    }
    this[3] = 0;
    this[2] = 0;
    return result;
}
// 52E03C: conditional instruction was optimized away because of 'ebx.4!=0'
// 5962F0: using guessed type void *off_5962F0;

//----- (0053220A) --------------------------------------------------------
int __thiscall sub_53220A(int this)
{
    int v2; // eax
    int v3; // eax

    sub_585E40(*(LPVOID*)(this + 8));
    sub_585E40(*(LPVOID*)(this + 72));
    sub_585E40(*(LPVOID*)(this + 76));
    sub_585E40(*(LPVOID*)(this + 80));
    v2 = *(_DWORD*)(this + 36);
    if (v2)
        (*(void(__stdcall**)(_DWORD))(*(_DWORD*)v2 + 8))(*(_DWORD*)(this + 36));
    sub_5324E7((_DWORD*)this);
    v3 = *(_DWORD*)(this + 32);
    if (v3)
        (*(void(__stdcall**)(_DWORD))(*(_DWORD*)v3 + 8))(*(_DWORD*)(this + 32));
    *(_DWORD*)(this + 92) = &off_596F30;
    return sub_532DBD((_DWORD*)(this + 92));
}
// 596F30: using guessed type int (*off_596F30)();

//----- (0052F22F) --------------------------------------------------------
void __thiscall sub_52F22F(_DWORD* this)
{
    int v2; // eax
    int v3; // eax

    v2 = this[2];
    if (v2)
        (*(void(__stdcall**)(int))(*(_DWORD*)v2 + 8))(v2);
    v3 = this[3];
    if (v3)
        (*(void(__stdcall**)(_DWORD))(*(_DWORD*)v3 + 8))(this[3]);
    this[253] = &off_594BB0;
    sub_52F208(this + 253);
}
// 594BB0: using guessed type int (*off_594BB0)();