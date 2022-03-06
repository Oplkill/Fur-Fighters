#include "defs.h"

#include <windows.h>
#include "settings.h"
#include "files.h"


int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd);
int sub_45C710();
int __cdecl sub_57808E(LONG* a1);

//----- (0051A330) --------------------------------------------------------
int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    HRESULT initResult; // [esp+0h] [ebp-4h]

    *(_DWORD*)&dword_667390 = 1;                 // todo
    initResult = CoInitialize(0);
    if (initResult < 0)
        return 0;
    ::hInstance = hInstance;                      // todo
    strcpy(textUseless1, "HomeW_HB");
    dword_5B9F50 = 0;                             // todo
    initDebug(3);
    emptyFunction0(aNetworkDebug);             // todo, seems network
    if (!initSettings(hInstance))
        return 0;
    sub_523623(hInstance, hPrevInstance, lpCmdLine, nShowCmd);
    SetFocus(hWnd);
    sub_51AE27(lpCmdLine);
    some_init();
    ClipCursor(&Point);
    sub_45C710(initResult);
    sub_51ADB7();
    PostQuitMessage(0);
    while (1)
    {
        while (!PeekMessageA(&Msg, 0, 0, 0, 0))
        {
            if (!dword_6673E0)
                WaitMessage();
        }
        if (!GetMessageA(&Msg, 0, 0, 0))
            break;
        TranslateMessage(&Msg);
        DispatchMessageA(&Msg);
    }
    ClipCursor(0);
    sub_5239D2();
    return Msg.wParam;
}
// 45C710: using guessed type int __cdecl sub_45C710(_DWORD);
// 51ADB7: using guessed type int sub_51ADB7(void);
// 51AE27: using guessed type int __cdecl sub_51AE27(_DWORD);
// 5227D0: using guessed type int sub_5227D0(const char *, ...);
// 523623: using guessed type _DWORD __stdcall sub_523623(_DWORD, _DWORD, _DWORD, _DWORD);
// 5B9F50: using guessed type int dword_5B9F50;
// 6673E0: using guessed type int dword_6673E0;

//----- (0045C710) --------------------------------------------------------
int sub_45C710()
{
    int result; // eax

    while (1)
    {
        result = 12 * dword_604524;
        if (!dword_604464[3 * dword_604524])
            break;
        sub_45C835(dword_60446C[3 * dword_604524], dword_604468[3 * dword_604524]);
        dword_604524 = ((_BYTE)dword_604524 + 1) & 0xF;
    }
    return result;
}
// 604464: using guessed type int dword_604464[];
// 604468: using guessed type int dword_604468[];
// 604524: using guessed type int dword_604524;

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