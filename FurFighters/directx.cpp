#include "directx.h"

#include <cstdlib>
#include <stdio.h>
#include <windows.h>
#include "debug.h"
#include "tempplace.h"
#include "utils.h"
#include "settings.h"

CHAR aNoDevicesAndOr[] = "No devices and/or modes were enumerated!"; // idb
CHAR aNoEnumeratedDe[] = "No enumerated devices were accepted!"; // idb
CHAR aCanTCreateDdra[] = "Can't create DDraw during enumeration!"; // idb
CHAR aCanTQueryIdire[] = "Can't query IDirect3D7 during enumeration!"; // idb
char aEnummingTextur[] = "Enumming Textures"; // idb
char aBeginsceneIdir[] = "BeginScene(): IDirect3DDevice7_BeginScene failed with error DDERR_SURFACELOST !"; // idb
char aEndsceneIdirec[] = "EndScene(): IDirect3DDevice7_EndScene failed with error DDERR_SURFACELOST !"; // idb
CHAR aControllerConf[] = "Controller Configuration"; // idb

int dword_6673E0; // weak
int numVideoDevicesOrModes; // weak
int numVideoDevices; // weak

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
            MessageBoxA(0, aThisApplicatio, aFurFight_5, 0x10u);
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
                    writeDebug(aHandleactivate_17);
                }
                else if (!*(_DWORD*)v10 && !dword_5B91A4)
                {
                    writeDebug(aHandleactivate_18);
                }
            }
            else
            {
                dword_5B91A4 = 0;
                writeDebug(aHandleactivate_10);
                writeDebug(aHandleactivate_11);
                dword_6673E0 = a3;
                if (!dword_60FE2C)
                {
                    writeDebug(aHandleactivate_12);
                    v6 = (*(int(__thiscall**)(LPVOID, LPVOID))(*(_DWORD*)lpDD + 76))(lpDD, lpDD);
                    if (v6)
                    {
                        getDirectXErrorName(v6, 0x100u, v9);
                        writeDebug("HandleActivateApp(): IDirectDraw7_RestoreDisplayMode() failed with error %s", v9);
                    }
                }
                writeDebug(aHandleactivate_14);
                v7 = (*(int(__thiscall**)(LPVOID, LPVOID, HWND, int))(*(_DWORD*)lpDD + 80))(lpDD, lpDD, dword_60FE48, 10);
                if (v7)
                {
                    getDirectXErrorName(v7, 0x100u, v9);
                    writeDebug("HandleActivateApp(): IDirectDraw7_SetCooperativeLevel() failed with error %s", v9);
                }
                writeDebug(aHandleactivate_16);
                maybe_stopSounds();
                sub_5836F8();
                startSoundTimer();
                sub_582FAA();
                sub_5830FF();
                if (!dword_60FE2C)
                    ShowWindow(dword_60FE48, 6);
            }
        }
        else
        {
            dword_5B91A4 = 1;
            writeDebug(aHandleactivate_2);
            writeDebug(aHandleactivate_3);
            writeDebug(aHandleactivate_4);
            if (dword_60FE2C)
            {
                v4 = (*(int(__thiscall**)(LPVOID, LPVOID, HWND, int))(*(_DWORD*)lpDD + 80))(lpDD, lpDD, dword_60FE48, 8);
                if (v4)
                {
                    getDirectXErrorName(v4, 0x100u, v9);
                    writeDebug("HandleActivateApp(): IDirectDraw7_SetCooperativeLevel() failed with error %s", v9);
                }
            }
            else
            {
                v5 = (*(int(__thiscall**)(LPVOID, LPVOID, HWND, int))(*(_DWORD*)lpDD + 80))(lpDD, lpDD, dword_60FE48, 2071);
                if (v5)
                {
                    getDirectXErrorName(v5, 0x100u, v9);
                    writeDebug("HandleActivateApp(): IDirectDraw7_SetCooperativeLevel() failed with error %s", v9);
                }
            }
            writeDebug(aHandleactivate_7);
            sub_577C00();
            sub_543461();
            writeDebug(aHandleactivate_8);
            writeDebug(aHandleactivate_9);
            sub_583213();
            sub_58306B();
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
        writeDebug(aHandleactivate_1);
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
// 582FAA: using guessed type int sub_582FAA(void);
// 58306B: using guessed type int sub_58306B(void);
// 5830FF: using guessed type int sub_5830FF(void);
// 583213: using guessed type int sub_583213(void);
// 5836F8: using guessed type int sub_5836F8(void);
// 583776: using guessed type int sub_583776(void);
// 5B91A4: using guessed type int dword_5B91A4;
// 60FE2C: using guessed type int dword_60FE2C;
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
    writeDebug(aEnummingTextur);
    sub_57D760(0);
    dword_60FE70 = 0;
    dword_6103CC = -1;
    dword_6103C8 = 0;
    if (*(_DWORD*)dword_610478 == 16)
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
            result = writeDebug(aBeginsceneIdir);
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
            result = writeDebug(aEndsceneIdirec);
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
    DirectInputCreateEx(a1, 1792, &unk_5973D0, &dword_622334, 0);
    (*(void(__stdcall**)(int, int*, void*, int*, _DWORD))(*(_DWORD*)dword_622334 + 36))(
        dword_622334,
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
        dword_622330 = 0;
        writeDebug(aErrorInAcquiri);
        if (v3 == -2147024891)
            writeDebug(aOtherAppHasPri);
        if (v3 == -2147024875)
            writeDebug(aNotInitialised);
        if (v3 == -2147024809)
            writeDebug(aNoSelectedData);
    }
    else
    {
        dword_622330 = 1;
    }
    memset(&dword_622340, 0, 0x100u);
    if ((*(int(__thiscall**)(int, int, void*, void*, int*, _DWORD))(*(_DWORD*)dword_622334 + 36))(
        dword_622334,
        dword_622334,
        &unk_597370,
        &unk_5973C0,
        &dword_62232C,
        0))
    {
        fatalError(aMouseCreationE);
    }
    if ((*(int(__thiscall**)(int, int, void*))(*(_DWORD*)dword_62232C + 44))(dword_62232C, dword_62232C, &unk_597C78))
        fatalError(aMouseDataForma);
    if ((*(int(__stdcall**)(int, int, int))(*(_DWORD*)dword_62232C + 52))(dword_62232C, a2, 21))
        fatalError(aMouseCoOpError);
    dword_622338 = (int)CreateEventA(0, 0, 0, 0);
    (*(void(__thiscall**)(int, int, void(__stdcall*)(DWORD, DWORD, DWORD, DWORD, ULONG_PTR)))(*(_DWORD*)dword_62232C
        + 48))(
            dword_62232C,
            dword_62232C,
            mouse_event);
    (*(void(__thiscall**)(int, int, int, char*))(*(_DWORD*)dword_62232C + 24))(dword_62232C, dword_62232C, 1, v5);
    v4 = (*(int(__thiscall**)(int, int))(*(_DWORD*)dword_62232C + 28))(dword_62232C, dword_62232C);
    if (v3 != 1 && v3)
    {
        dword_622040 = 0;
        writeDebug(aErrorInAcquiri_0);
        if (v3 == -2147024891)
            writeDebug(aOtherAppHasPri_0);
        if (v3 == -2147024875)
            writeDebug(aNotInitialised_0);
        if (v3 == -2147024809)
            writeDebug(aNoSelectedData_0);
    }
    else
    {
        dword_622040 = 1;
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
// 622040: using guessed type int dword_622040;
// 622044: using guessed type int dword_622044;
// 62232C: using guessed type int dword_62232C;
// 622330: using guessed type int dword_622330;
// 622334: using guessed type int dword_622334;
// 622338: using guessed type int dword_622338;
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
        writeDebug(aRestoresurface);
        return 0;
    }
    if ((*(int(__thiscall**)(int, int))(*(_DWORD*)dword_60FE64 + 96))(dword_60FE64, dword_60FE64) != -2005532222
        && (*(int(__thiscall**)(int, int))(*(_DWORD*)dword_60FE6C + 96))(dword_60FE6C, dword_60FE6C) != -2005532222
        && (!dword_60FE2C
            || (*(int(__thiscall**)(int, int))(*(_DWORD*)dword_60FE68 + 96))(dword_60FE68, dword_60FE68) != -2005532222))
    {
        return 0;
    }
    writeDebug(aRestoresurface_0);
    if (!dword_60FE2C)
    {
        v1 = (*(int(__thiscall**)(LPVOID, LPVOID, int, int, int, _DWORD, _DWORD))(*(_DWORD*)lpDD + 84))(
            lpDD,
            lpDD,
            nWidth,
            nHeight,
            dword_60FE28,
            0,
            0);
        if (v1)
        {
            getDirectXErrorName(v1, 0x100u, Buffer);
            writeDebug("RestoreSurfaces(): IDirectDraw7_SetDisplayMode() failed with error %s", Buffer);
            return v1;
        }
        ShowWindow(dword_60FE48, 3);
        UpdateWindow(dword_60FE48);
        SetFocus(dword_60FE48);
    }
    if ((*(int(__thiscall**)(int, int))(*(_DWORD*)dword_60FE64 + 96))(dword_60FE64, dword_60FE64) == -2005532222)
    {
        writeDebug(aRestoresurface_2);
        v2 = (*(int(__thiscall**)(int, int))(*(_DWORD*)dword_60FE64 + 108))(dword_60FE64, dword_60FE64);
        if (v2)
        {
            getDirectXErrorName(v2, 0x100u, Buffer);
            writeDebug("RestoreSurfaces(): front buffer IDirectDrawSurface7_Restore() failed with error %s", Buffer);
            return v2;
        }
    }
    if (dword_60FE2C)
    {
        if ((*(int(__thiscall**)(int, int))(*(_DWORD*)dword_60FE68 + 96))(dword_60FE68, dword_60FE68) == -2005532222)
        {
            writeDebug(aRestoresurface_4);
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
    writeDebug(aRestoresurface_6);
    v4 = (*(int(__thiscall**)(int, int))(*(_DWORD*)dword_60FE6C + 108))(dword_60FE6C, dword_60FE6C);
    if (!v4)
        return 0;
    getDirectXErrorName(v4, 0x100u, Buffer);
    writeDebug("RestoreSurfaces(): z buffer IDirectDrawSurface7_Restore() failed with error %s", Buffer);
    return v4;
}
// 60FE28: using guessed type int dword_60FE28;
// 60FE2C: using guessed type int dword_60FE2C;
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
        fatalError(aNoDevicesAndOr);
    if (!numVideoDevices)
        fatalError(aNoEnumeratedDe);
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
        fatalError(aCanTCreateDdra);
    if ((**(int(__thiscall***)(LPVOID, LPVOID, void*, int*))lpDD)(lpDD, lpDD, &unk_5972C8, &v6) < 0)
    {
        (*(void(__thiscall**)(LPVOID, LPVOID))(*(_DWORD*)lpDD + 8))(lpDD, lpDD);
        fatalError(aCanTQueryIdire);
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