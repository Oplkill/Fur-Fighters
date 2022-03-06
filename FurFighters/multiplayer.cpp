#include "multiplayer.h"

//----- (0051E347) --------------------------------------------------------
int __cdecl sub_51E347(HINSTANCE a1)
{
    int result; // eax
    FakeDP* v2; // [esp+4h] [ebp-20h]
    FakeDP* lpMem; // [esp+8h] [ebp-1Ch]

    hInstance = a1;
    memset(&unk_5B94F0, 0, 0x114u);
    dword_5B9600 = (int)&unk_5B94F0;
    lpMem = (FakeDP*)operator new(0xCu);
    if (lpMem)
    {
        FakeDP::FakeDP(lpMem);
        *(_DWORD*)lpMem = &off_594AE8;
        v2 = lpMem;
    }
    else
    {
        v2 = 0;
    }
    if ((int)FakeDP::EnumConnections(
        v2,
        (const struct _GUID*)&dword_594AF0,
        (int(__stdcall*)(const struct _GUID*, void*, unsigned int, const struct DPNAME*, unsigned int, void*))sub_51EB97,
        &pMem,
        0) >= 0)
    {
        if (v2)
            (*(void(__thiscall**)(FakeDP*))(*(_DWORD*)v2 + 4))(v2);
        result = 1;
    }
    else
    {
        if (v2)
            (*(void(__thiscall**)(FakeDP*))(*(_DWORD*)v2 + 4))(v2);
        result = 0;
    }
    return result;
}
// 51EB97: using guessed type int __stdcall sub_51EB97(int, int, size_t Size, int, int, int);
// 594238: using guessed type FakeDP *__thiscall FakeDP::FakeDP(FakeDP *__hidden this);
// 59423C: using guessed type _DWORD __thiscall FakeDP::EnumConnections(FakeDP *__hidden this, const struct _GUID *, int (__stdcall *)(const struct _GUID *, void *, unsigned int, const struct DPNAME *, unsigned int, void *), void *, unsigned int);
// 594AE8: using guessed type int (__stdcall *off_594AE8)(int);
// 594AF0: using guessed type int dword_594AF0;
// 5B9600: using guessed type int dword_5B9600;

//----- (005239D2) --------------------------------------------------------
void __cdecl sub_5239D2()
{
    int v0; // [esp+0h] [ebp-10h]
    int v1; // [esp+0h] [ebp-10h]
    int v2; // [esp+4h] [ebp-Ch]

    if (!dword_5BAE80)
        goto LABEL_9;
    FakeDP::DestroyPlayer((FakeDP*)dword_5BAE80, dword_668794);
    FakeDP::Close((FakeDP*)dword_5BAE80);
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
    v2 = dword_5BAE80;
    if (!dword_5BAE80)
    {
        v0 = 0;
    LABEL_9:
        sub_52354B(v0, v2);
        goto LABEL_10;
    }
    v1 = (**(int(__thiscall***)(int, int))dword_5BAE80)(dword_5BAE80, 1);
    sub_52354B(v1, v2);
LABEL_10:
    CoUninitialize();
}
// 523A7B: variable 'v0' is possibly undefined
// 523A7B: variable 'v2' is possibly undefined
// 52354B: using guessed type int __cdecl sub_52354B(_DWORD, _DWORD);
// 594218: using guessed type _DWORD __thiscall FakeDP::DestroyPlayer(FakeDP *__hidden this, unsigned int);
// 59422C: using guessed type _DWORD __thiscall FakeDP::Close(FakeDP *__hidden this);
// 5BAE80: using guessed type int dword_5BAE80;
// 5BAE84: using guessed type int dword_5BAE84;
// 668794: using guessed type int dword_668794;

//----- (00523838) --------------------------------------------------------
void sub_523838()
{
    DWORD v0; // [esp+8h] [ebp-4h]

    dword_5BAE98 = 0;
    dword_5BCFB4 = 0;
    dword_668788 = 0;
    emptyFunction0();
    if (off_5AEAF8 != &unk_5BBF70)
    {
        if (off_5AEAF8)
        {
            sub_585E40(off_5AEAF8);
            off_5AEAF8 = 0;
        }
        off_5AEAF8 = &unk_5BBF70;
        dword_5AEAFC = 4096;
    }
    if (hObject)
    {
        v0 = WaitForSingleObject(hObject, 0x7D0u);
        if (v0)
        {
            if (v0 != 128)
            {
                emptyFunction0();
                if (v0 == -1)
                    sub_5235C0();
            }
        }
        if (!CloseHandle(hObject))
        {
            emptyFunction0();
            sub_5235C0();
        }
        hObject = 0;
    }
    if (dword_5BAE80)
    {
        if (dword_668794 && (emptyFunction0(), (int)FakeDP::DestroyPlayer((FakeDP*)dword_5BAE80, dword_668794) < 0))
            emptyFunction0();
        else
            FakeDP::Close((FakeDP*)dword_5BAE80);
    }
}
// 594218: using guessed type _DWORD __thiscall FakeDP::DestroyPlayer(FakeDP *__hidden this, unsigned int);
// 59422C: using guessed type _DWORD __thiscall FakeDP::Close(FakeDP *__hidden this);
// 5AEAF8: using guessed type void *off_5AEAF8;
// 5AEAFC: using guessed type int dword_5AEAFC;
// 5BAE80: using guessed type int dword_5BAE80;
// 5BAE98: using guessed type int dword_5BAE98;
// 5BCFB4: using guessed type int dword_5BCFB4;
// 668788: using guessed type int dword_668788;
// 668794: using guessed type int dword_668794;