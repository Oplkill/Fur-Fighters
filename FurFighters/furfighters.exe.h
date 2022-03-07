#pragma once

#include "defs.h"

//-------------------------------------------------------------------------
// Function declarations

#define __thiscall __cdecl // Test compile in C mode

int __cdecl sub_401000(int, float, float, float, float); // idb
int __cdecl sub_401445(int, float, float, float, float); // idb
int __cdecl sub_40185C(int, float, float, float); // idb
int __cdecl sub_401E52(int, int, int, float); // idb
int __cdecl sub_401F6E(int a1, int* a2);
int __cdecl sub_402096(int a1, int* a2);
BOOL __cdecl sub_402653(int a1, int a2, float a3);
int __cdecl sub_402815(int, int, float); // idb
int __cdecl sub_40296C(int, float, int); // idb
int __cdecl sub_402C1A(float* a1, int* a2);
int* __cdecl sub_402D24(const void* a1, int a2, int* a3, float* a4, int* a5);
int __cdecl sub_403068(int a1);
double __cdecl sub_4031F0(float* point3D_1, float* point3D_2); // idb
double __cdecl sub_403220(float* point3D_1); // idb
double __cdecl fsqrt(unsigned int a1);
int __cdecl sub_403300(int a1);
_DWORD* __cdecl sub_40353D(_DWORD* a1);
_DWORD* __cdecl sub_4035B7(int a1, float* a2);
_DWORD* __cdecl sub_403613(_DWORD* a1, float* a2);
int __cdecl sub_4036F6(int a1, int a2);
int __cdecl sub_40433D(int a1, int a2);
int __cdecl sub_404372(int a1, _DWORD* a2, _DWORD* a3);
int __cdecl sub_404535(int a1, int a2);
int __cdecl sub_404574(int a1, _DWORD* a2);
int __cdecl sub_4045DC(int a1, int a2, int a3);
int __cdecl sub_405933(int, int, int, int); // weak
_DWORD* __cdecl sub_407668(int a1, int a2, _DWORD* a3);
__int16 __cdecl sub_40876E(int a1, _DWORD* a2, int a3);
void __cdecl sub_4096DF(int a1, int a2, int a3);
int __cdecl sub_409E23(float* a1, int a2);
int __cdecl sub_40A14D(_DWORD* a1, int a2);
int __cdecl sub_40A3BE(int a1);
int __cdecl sub_40A98F(int a1);
int __cdecl sub_40AB6C(int* a1);
int __cdecl sub_40AF26(int); // weak
int __cdecl sub_40B32C(int a1);
int __cdecl sub_40B887(_DWORD* a1);
int __cdecl sub_40BB50(int a1);
int __cdecl sub_40BCBC(int a1);
int __cdecl sub_40BFD8(int a1);
int __cdecl sub_40C091(int a1);
int __cdecl sub_40C684(int a1);
int __cdecl sub_40CD05(int a1);
int __cdecl sub_40D17F(int a1);
int __cdecl sub_40D844(int a1);
int __cdecl sub_40D8BC(int a1);
int __cdecl sub_40DAFD(int, int, float, int, __int16, char, char, char, char); // idb
int __cdecl sub_40DE32(float* a1);
int __cdecl sub_40DE79(int, int, int, float, int, __int16, char, char, char, char, float); // idb
int __cdecl sub_40E060(int a1, int a2, int a3);
int __cdecl sub_40E0BD(int a1);
int __cdecl sub_40E509(_DWORD* a1);
int __cdecl sub_40E57F(int* a1);
int __cdecl sub_40E87F(int a1);
void sub_40E9CC();
int __cdecl sub_40E9D1(int a1, int a2, int a3, int a4);
int __cdecl sub_40F4FD(int a1, int a2, int a3);
float* __cdecl sub_410138(int a1);
int __cdecl sub_4102BF(_DWORD* a1, _DWORD* a2, int a3, int a4, int a5);
float* __cdecl sub_4105DF(float* a1);
float* __cdecl sub_410676(float* a1, float* a2, int a3, int a4, int a5);
float* __cdecl sub_41078D(float* a1);
void __cdecl sub_410A1E(float* a1);
float* __cdecl sub_410BA0(int a1, int* a2, int a3);
int __cdecl sub_410E6E(int, int, float); // idb
int __cdecl sub_410FD6(int a1);
int __cdecl sub_41143E(int a1);
int __cdecl sub_41159C(int a1);
__int16 __cdecl sub_4115B1(int a1, FILE* Stream, int a3);
wint_t __cdecl sub_4116DC(int a1);
void __cdecl sub_411819(int a1);
void __cdecl sub_411932(int a1);
__int16 __cdecl sub_411A69(int a1, int a2, int a3);
_DWORD* __cdecl sub_411D73(_DWORD* a1);
int __cdecl sub_411ED9(int a1);
int __cdecl sub_412485(_DWORD* a1);
int __cdecl sub_41262B(int); // weak
int __cdecl sub_4128AE(int a1);
int __cdecl sub_412BBC(int a1);
int __cdecl sub_412E92(int a1);
_DWORD* __cdecl sub_413140(unsigned __int16* a1);
_DWORD* __cdecl sub_41374E(unsigned __int16* a1);
_DWORD* __cdecl sub_413D2F(unsigned __int16* a1);
void __cdecl sub_4142FA(int a1, int a2, int a3);
int __cdecl sub_414951(int a1);
_DWORD* __cdecl sub_414A7E(_DWORD* a1);
int __cdecl sub_414DD9(int a1);
_DWORD* __cdecl sub_414FFF(_DWORD* a1);
void __cdecl sub_4150AC(int a1, int a2, int a3, float* a4);
int __cdecl sub_4152F6(int a1);
int __cdecl sub_41576C(int a1);
int __cdecl sub_4158DB(int a1);
int __cdecl sub_415A9A(int a1);
int __cdecl sub_415D86(int a1);
int __cdecl sub_416016(int a1);
int __cdecl sub_41613D(int a1);
_DWORD* __cdecl sub_416423(int* a1);
_DWORD* __cdecl sub_4167A4(unsigned __int16* a1);
_DWORD* __cdecl sub_416B34(unsigned __int16* a1);
int __cdecl sub_416EC4(int a1);
int __cdecl sub_41717D(int a1);
int __cdecl sub_41748C(int a1);
int __cdecl sub_417BDD(int a1);
_DWORD* __cdecl sub_418049(int* a1);
_DWORD* __cdecl sub_418338(_DWORD* a1, int a2, int a3, int a4);
float* __cdecl sub_418C2A(float* a1);
float* __cdecl sub_419060(float* a1);
int sub_4192CB();
int __cdecl sub_41934B(int a1, int a2, int a3, int a4);
int __cdecl sub_419495(int a1);
_DWORD* __cdecl sub_419538(_DWORD* a1, float* a2, float* a3);
_DWORD* __cdecl sub_4195D4(_DWORD* a1, _DWORD* a2, int* a3);
_DWORD* __cdecl sub_419718(int a1);
_DWORD* __cdecl sub_4198BA(float* a1);
int __cdecl sub_419932(int a1);
int __cdecl sub_419A0E(int a1);
void __cdecl sub_41A655(int a1, int a2, int a3, float* a4);
_DWORD* sub_41AAF6();
int __cdecl sub_41AC26(int a1, int a2, int a3);
_DWORD* __cdecl sub_41AD15(int a1);
void* __cdecl sub_41AD5D(int a1, int a2, __int64 a3);
int __cdecl sub_41B33C(int a1);
_DWORD* __cdecl sub_41B45E(int a1, int a2, _DWORD* a3);
int __cdecl sub_41B89D(int a1, int a2, int a3);
int __cdecl sub_41BC01(int a1, int a2, int a3);
int __cdecl sub_41BCA0(int a1, int a2, int a3);
int __cdecl sub_41BF3D(int a1, int a2, int a3);
void* __cdecl sub_41C14A(int a1, int a2);
int __cdecl sub_41C3FA(int a1, int a2, int a3);
_DWORD* __cdecl sub_41C426(const void* a1, int a2);
int __cdecl sub_41C492(int a1, int a2, int a3);
void* __cdecl sub_41C652(int a1, const void* a2, int a3, int a4);
float* __cdecl sub_41C761(int a1, int a2, int a3, float a4);
int __cdecl sub_41C9DE(int a1);
int __cdecl sub_41CB94(int a1, int a2, int a3);
_DWORD* __cdecl sub_41CBD4(int a1, int a2, int a3, int a4);
char* __cdecl sub_41CC79(int a1, int a2, char* a3);
int __cdecl sub_41D262(int* a1);
int __cdecl sub_41D2FE(int, int, int, int); // weak
_DWORD* __cdecl sub_41D5C8(int a1);
void sub_41D61A();
void sub_41D63D();
int __cdecl sub_41D727(int* a1, float a2, int a3);
int __cdecl sub_41D78B(int* a1, float a2, int a3);
int __cdecl sub_41D7EF(int* a1, float a2, int a3, int a4);
void sub_41D840();
void __cdecl sub_41D84F(float* a1);
int sub_41D911();
int sub_41DB04();
int __cdecl sub_41DD46(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3);
int __cdecl sub_41DD77(unsigned __int8 a1);
int sub_41DDAA();
int sub_41DDED();
int __cdecl sub_41DE2D(int, int, int); // weak
int __cdecl sub_41E388(int* a1);
int __cdecl sub_41E448(int a1, int a2, int a3);
_DWORD* __cdecl sub_41E46A(int a1);
int __cdecl sub_41E4BC(void* a1, int a2, int a3);
int sub_41E4FD();
__int16 __cdecl sub_41E540(int a1);
int __cdecl sub_41E68D(int a1);
int __cdecl sub_41EAC8(_DWORD* a1);
void __cdecl sub_41EB3E(int a1, int a2, int a3, float* a4);
int __cdecl sub_41EC6C(int a1);
int __cdecl sub_41F0D7(int* a1);
void __cdecl sub_41F3E0(int a1);
int __cdecl sub_41F983(int a1);
void __cdecl sub_41F9C8(int a1, int a2, int a3, int a4);
DWORD __cdecl sub_41FC08(int a1);
int __cdecl sub_41FD5A(_DWORD* a1);
int __cdecl sub_420104(int a1);
int __cdecl sub_420499(_DWORD* a1);
int __cdecl sub_420576(_DWORD* a1, int a2, int a3, int a4);
int __cdecl sub_4207D4(int, int, float); // idb
int __cdecl sub_420879(_DWORD* a1);
char* __cdecl sub_420AB3(_DWORD* a1);
__int16 __cdecl sub_420D93(int a1, int a2, int a3);
char* __cdecl sub_42143A(int* a1);
int __cdecl sub_421890(int a1, int a2, int a3);
int __cdecl sub_421B18(int a1);
_DWORD* __cdecl sub_421BDC(FILE* Stream, int a2);
// int __cdecl _cfltcvt_init(_DWORD); weak
int __cdecl sub_421D71(int a1);
int __cdecl sub_421DE8(float* a1);
_DWORD* __cdecl sub_421E6D(_DWORD* a1);
void __cdecl sub_422015(int a1);
int __cdecl sub_422161(int a1);
int __cdecl sub_422172(int a1);
int __cdecl sub_422181(int a1);
void __cdecl sub_422230(int a1);
void __cdecl sub_422564(int* a1);
int __cdecl sub_422603(int a1);
int __cdecl sub_4227AB(int a1);
_DWORD* __cdecl sub_422960(_DWORD* a1);
int __cdecl sub_4229BA(int a1);
int __cdecl sub_422A42(int a1);
int __cdecl sub_422A80(float* a1);
int __cdecl sub_422A9D(int a1);
int __cdecl sub_422AB9(int a1);
_DWORD* __cdecl sub_422AE7(int a1);
int __cdecl sub_422CE6(int a1);
int __cdecl sub_422F71(int a1);
void __cdecl sub_422F8D(int a1);
int __cdecl sub_423183(int a1);
int __cdecl sub_4233F2(int a1);
int __cdecl sub_4235E8(int a1);
int __cdecl sub_4235F7(int a1);
int __cdecl sub_423608(int a1);
void __cdecl sub_42365B(int a1, int a2, int a3, _DWORD* a4);
int __cdecl sub_423D5A(int a1);
int __cdecl sub_424116(int a1);
int __cdecl sub_424310(int a1);
int __cdecl sub_42464C(int a1);
void __cdecl sub_42470F(int a1, int a2, int a3);
int __cdecl sub_424C88(float* a1);
int __cdecl sub_424D99(int a1);
int __cdecl sub_4252A7(int a1);
_DWORD* __cdecl sub_425361(int a1, int a2, _DWORD* a3);
int __cdecl sub_425735(float* a1);
int __cdecl sub_425827(int, int, int); // weak
DWORD __cdecl sub_425E2D(int a1);
int __cdecl sub_425F37(_DWORD* a1);
__int16 sub_4260C2();
void __cdecl sub_426945(int a1, float* a2, int a3);
int __cdecl sub_426F18(int a1);
int __cdecl sub_42712E(int a1, int a2);
int sub_42738D();
int sub_4274DC();
int sub_42762C();
int __cdecl sub_42777C(int a1);
int __cdecl sub_42782E(int a1);
int __cdecl sub_4278D1(int a1);
int __cdecl sub_427974(int a1);
int __cdecl sub_427A17(int a1);
int __cdecl sub_427ABA(int a1);
int __cdecl sub_427B51(int a1);
int __cdecl sub_427BF4(int a1);
int __cdecl sub_427C8B(int a1);
int __cdecl sub_427D40(int a1);
int __cdecl sub_427DD7(int a1);
int __cdecl sub_427E6E(int a1);
int __cdecl sub_427F11(int a1);
float* __cdecl sub_428094(int a1);
int __cdecl sub_4291BE(int a1, int a2, int a3);
int sub_429260();
int __cdecl sub_42927B(_DWORD* a1);
void __cdecl sub_42980A(int a1, int a2, int a3);
int __cdecl sub_429930(int* a1);
float* __cdecl sub_4299EC(int a1);
int sub_429BD0(); // weak
int sub_429D91(); // weak
int sub_429EB3();
int sub_42A749();
int sub_42A7C2();
int __cdecl sub_42AC74(int a1);
int __cdecl sub_42ACA2(__int64 a1, int a2);
int __cdecl sub_42AD07(int a1);
int __cdecl sub_42B184(_DWORD* a1);
int __cdecl sub_42B376(int a1);
_DWORD* __cdecl sub_42B3A6(int* a1);
_DWORD* __cdecl sub_42B7B0(int* a1);
int __cdecl sub_42BB30(int a1);
int sub_42C237(); // weak
int __cdecl sub_42C30E(int a1);
int sub_42C54D(); // weak
int sub_42C6A1(); // weak
void sub_42CC40();
int __cdecl sub_42CCA3(int); // weak
int sub_42D26B(); // weak
void sub_42D331();
char sub_42D5E9();
void sub_42E0AC();
char sub_42E291();
char __cdecl sub_42EBCE(int a1);
char sub_42ED8E();
void sub_42F53D();
int __cdecl sub_42F630(int a1);
int __cdecl sub_42FAEF(int); // weak
int __cdecl sub_42FCD0(int); // weak
int __cdecl sub_43005B(int); // weak
int __cdecl sub_4301A6(int); // weak
int __cdecl sub_430309(int); // weak
int __cdecl sub_430457(int); // weak
int __cdecl sub_4307A6(int); // weak
int __cdecl sub_430A6F(int); // weak
int __cdecl sub_430E22(int); // weak
int __cdecl sub_430EFF(int); // weak
int __cdecl sub_4311C8(_DWORD* a1);
_DWORD* __cdecl sub_431239(_DWORD* a1);
void __cdecl sub_43127F(int a1);
int __cdecl sub_4316CD(int); // weak
int __cdecl sub_431AA8(int); // weak
int __cdecl sub_431CBF(int); // weak
int __cdecl sub_431DA0(int); // weak
void __cdecl sub_431F92(int a1);
void __cdecl sub_4322A4(int a1);
void __cdecl sub_4323C5(int a1);
int __cdecl sub_432631(int); // weak
int __cdecl sub_432702(int a1);
__int16 __cdecl sub_43272F(int a1);
void __cdecl sub_432830(int a1, int a2, int a3, float* a4);
int __cdecl sub_433159(int); // weak
int __cdecl sub_433AF1(int a1, float* a2, float a3);
int __cdecl sub_433D1E(int a1);
int __cdecl sub_433E2E(__int64 a1, int a2);
__int16 __cdecl sub_435229(int a1, int a2);
int __cdecl sub_4355C2(int, int); // weak
int __cdecl sub_435969(int* a1, int a2);
int __cdecl sub_43599C(int* a1, int* a2);
int __cdecl sub_4359CF(int* a1, int a2);
int __cdecl sub_435A02(int a1);
int __cdecl sub_435AD5(int a1, float* a2);
_DWORD* __cdecl sub_435C3F(int* a1);
int* __cdecl sub_435D22(int a1);
int __cdecl sub_435E3C(int a1);
int __cdecl sub_435E76(int a1, int a2, int a3);
int __cdecl sub_435FD7(int a1, float a2);
BOOL __cdecl sub_4360A0(int a1, int a2);
int __cdecl sub_436130(int a1, int a2, int a3, __int16 a4);
void sub_436271();
_DWORD* __cdecl sub_436276(int a1);
int __cdecl sub_436340(int a1, __int16* a2);
unsigned int __cdecl sub_436857(char* a1, const char* a2);
int __thiscall sub_436945(void* this);
char sub_436C69();
int sub_4373A1();
int sub_43752E();
int __cdecl sub_4375AF(int a1);
int __cdecl sub_4375F1(unsigned __int8* a1);
int __cdecl sub_4378BA(char* Buffer, int); // idb
int sub_437EEB();
int __cdecl sub_438086(int a1, int a2, int a3);
int __cdecl sub_438169(int a1, int a2, int a3);
__int64 __cdecl sub_4382CB(int a1, float a2);
int __cdecl sub_438381(int a1, int a2);
int __cdecl sub_438447(unsigned __int8* a1, int a2);
int __cdecl sub_4385BB(unsigned __int8* a1, int a2);
int __cdecl sub_4386E0(unsigned __int8* a1);
__int16 sub_43882E();
int __cdecl sub_43885C(int a1, int a2, int a3, int a4);
void __thiscall sub_4388FC(void* this);
int __cdecl sub_438AA8(__int16 a1, int a2, int* a3);
int sub_438C3A();
int sub_438DD2();
int __cdecl sub_438E31(const char* a1);
void sub_438ED4();
BOOL sub_438EE3();
int sub_438EFA();
int sub_438F9D();
__int64 sub_439015();
BOOL __cdecl sub_43906F(int a1);
unsigned __int8* __cdecl sub_43908D(int a1);
int __cdecl sub_4390FB(__int16 a1, int a2, __int16 a3, __int16 a4);
int sub_439174();
int __cdecl sub_4392C5(unsigned __int8* a1);
int __cdecl sub_439302(unsigned __int8* a1);
int __cdecl sub_439348(int a1, int* a2, int a3);
int __cdecl sub_4393A3(int a1, int a2);
int __cdecl sub_4393D6(int a1, int a2);
double __cdecl sub_4393FE(int a1, int a2, float a3);
double __cdecl sub_4394C5(float a1, float a2);
double __cdecl sub_439511(float a1, float a2);
int* __cdecl sub_439550(int a1, int* a2);
int __cdecl sub_439C9A(int a1, int a2, int a3);
_DWORD* __cdecl sub_439ED5(int a1, const void* a2, int a3, int a4, int a5);
int __cdecl sub_439F5A(int, int, float); // idb
_DWORD* __cdecl sub_43A134(_DWORD* a1, int* a2, float* a3);
int __cdecl sub_43A397(int a1);
int __cdecl sub_43A9DC(int a1);
int __cdecl sub_43ABDD(int, int, int, int, float); // idb
int __cdecl sub_43ADB4(int a1, float* a2);
int __cdecl sub_43AF18(int a1);
_DWORD* __cdecl sub_43AFF1(float* a1);
int __cdecl sub_43B0CE(int a1);
wint_t __cdecl sub_43C3D2(int a1);
__int16 __cdecl sub_43C551(int a1, int a2, int a3, int a4);
int __cdecl sub_43C77D(_DWORD* a1);
int __cdecl sub_43CB56(int a1);
DWORD __cdecl sub_43CE10(int* a1);
int __cdecl sub_43CEAF(int a1, int a2, int a3);
int __cdecl sub_43CF7A(_DWORD* a1);
int* __cdecl sub_43D1D0(int a1, int a2, int* a3, int a4, int a5, int* a6);
int __cdecl sub_43D7AF(int a1);
char* __cdecl sub_43D982(int a1);
void __cdecl sub_43DC8C(int a1);
void __cdecl sub_43DFC8(int a1);
int __cdecl sub_43E457(int a1);
int __cdecl sub_43EC5E(int a1);
int __cdecl sub_43F182(_DWORD* a1);
_DWORD* __cdecl sub_43F202(unsigned __int16* a1);
void __cdecl sub_43F62C(int a1, int a2, int a3, float* a4);
int __cdecl sub_43F831(_DWORD* a1);
_DWORD* __cdecl sub_43F8BF(int* a1);
BOOL sub_43FCB4();
int sub_43FCCE();
int __cdecl sub_43FD27(int); // weak
int sub_4409FA();
void sub_440AB7();
int sub_441675(); // weak
void sub_441D22();
void sub_441DD3();
int sub_441E54();
void sub_442115();
int sub_44334D();
int __cdecl sub_443370(int a1);
void sub_4438F5();
__int16 sub_443F00();
int __cdecl sub_4440BE(int a1);
char* __cdecl sub_444140(int a1);
void sub_4441C9();
int __cdecl sub_444449(int a1, int a2);
int __cdecl sub_4444AD(int a1);
// int _cfltcvt_init_2(void); weak
void sub_444EFD();
__int16 sub_444F90();
char sub_445113();
void sub_4451E4();
void sub_445311();
__int16 sub_4454FA();
void sub_44584A();
void sub_445F00();
char* __cdecl sub_44623F(int a1);
void sub_44628E();
void sub_446337();
int sub_44676B();
int __cdecl sub_446E85(__int16 a1, int a2, int a3);
__int16 __cdecl sub_4471D0(int a1);
_DWORD* __cdecl sub_447226(int a1, int a2, _DWORD* a3);
int __cdecl sub_44734F(int a1);
_DWORD* __cdecl sub_447520(int a1);
__int16 sub_447591();
int sub_447621();
void sub_4477CF();
void sub_4477FC();
__int16 sub_447801();
void sub_44780B();
__int16 __cdecl sub_447815(int a1);
int sub_4478D7();
int __cdecl sub_4479E9(int(__cdecl* a1)(int));
void __cdecl sub_447A1E(__int16 a1, int a2, int a3, int a4, int a5, int(__cdecl* a6)(int));
char* __cdecl sub_447CE9(int a1);
void sub_447F00();
int sub_447FE4();
void sub_4481D7();
int sub_44832D();
__int16 sub_4484AD();
int sub_44854C();
__int16 __cdecl sub_4486AF(__int16 a1, int a2, int a3);
int __cdecl sub_448924(int, int, int, char* Str); // idb
__int16 sub_448A0E();
void __cdecl sub_448A71(int a1);
int __cdecl sub_448A99(int, int); // weak
double sub_448C00();
int __cdecl sub_449502(int a1, int a2);
// const char *__cdecl std::_Get_future_error_what(int); idb
int __cdecl sub_449533(int a1);
int sub_44955A();
int __cdecl sub_44958E(int a1);
int sub_44959F();
int sub_449665(); // weak
void sub_4498A1();
void sub_44A61A();
int sub_44A87D();
void __cdecl sub_44AC33(int a1, int a2, int a3);
int sub_44AD08();
char sub_44AEFB();
void sub_44B39C();
void sub_44B49C();
int sub_44B60E();
int sub_44B667();
void sub_44C048();
char sub_44C153();
int sub_44C352();
int sub_44C46C();
int sub_44C4E2();
int sub_44C507();
void sub_44C52D();
int sub_44C5CA();
int sub_44C713();
int sub_44C917();
int sub_44CB3F();
__int16 __cdecl sub_44CE08(int a1);
void sub_44CFA6();
int __cdecl sub_44D054(int); // weak
int __cdecl sub_44D1A0(int a1, int a2, int a3);
int __cdecl sub_44D255(int a1, int a2, int a3);
int __cdecl sub_44D35A(int a1, int a2, int a3, int a4, int a5, int a6, unsigned __int8 a7, int a8);
int __cdecl sub_44D431(int a1, _DWORD* a2);
int __cdecl sub_44D4B0(int a1, _DWORD* a2);
int __cdecl sub_44D531(_DWORD* a1);
int __cdecl sub_44D652(int a1, int a2, int a3, char a4, int a5, int a6);
int __cdecl sub_44D7AB(int a1, int a2, _BYTE* a3, int a4, int a5, int a6, char a7);
int __cdecl sub_44DB21(int a1, int a2, int a3, int a4, int a5, int a6);
int __cdecl sub_44DC45(int a1, int a2, int a3, int a4, unsigned __int8 a5);
int __cdecl sub_44DDD4(int a1, int a2, int a3, int a4, unsigned __int8 a5);
int __cdecl sub_44DF5B(char a1);
int __cdecl sub_44DF9E(char a1);
float* __cdecl sub_44DFE0(float* a1);
int __cdecl sub_44E2DB(int* a1);
void* __cdecl sub_44E33F(_DWORD* a1, unsigned __int8* a2);
int __cdecl sub_44E7D7(_DWORD* a1);
float* __cdecl sub_44E82E(int a1, int a2, int a3, float a4, int a5);
int __cdecl sub_44E942(int a1);
int __cdecl sub_44EC8F(int a1);
float* __cdecl sub_44ECC3(float* a1, float* a2, int a3, int a4, int a5);
float* __cdecl sub_44EDB4(int a1);
int __cdecl sub_44F03D(_DWORD* a1);
float* __cdecl sub_44F0BA(int a1, int a2, int a3, float a4, int a5, int a6);
float* __cdecl sub_44F303(int a1);
float* __cdecl sub_44F433(float* a1, float* a2, float* a3);
float* __cdecl sub_44F5D9(int a1);
float* __cdecl sub_44F835(float* a1, float* a2);
void __cdecl sub_44F9C5(float* a1, int* a2, float* a3);
void __cdecl sub_44FBBE(float* a1, int a2);
float* __cdecl sub_44FCF9(float* a1, int a2);
float* __cdecl sub_44FE8C(int a1);
int __cdecl sub_44FEB5(unsigned __int8* a1);
void* __cdecl sub_44FF9D(float* a1, char a2, char a3, char a4);
_DWORD* __cdecl sub_450632(_DWORD* a1);
_DWORD* __cdecl sub_4507A4(_DWORD* a1, int a2);
int __cdecl sub_450915(float* a1, char a2, char a3, char a4);
int __cdecl sub_45094F(int* a1, int a2, int a3, char a4, char a5, char a6);
_DWORD* __cdecl sub_4509C1(_DWORD* a1, _DWORD* a2, int a3);
float* __cdecl sub_450BDD(float* a1, float* a2, int a3);
int __cdecl sub_45133E(int a1, int a2, int a3);
int __cdecl sub_4514F9(int a1);
_DWORD* __cdecl sub_4515E2(const void* a1, _DWORD* a2, int a3, int a4);
void sub_451672();
int __cdecl sub_451677(int a1);
int __cdecl sub_4516EB(int* a1);
float* __cdecl sub_45195E(int a1);
float* __cdecl sub_451A30(int a1, float a2, float a3, int a4, int a5, int a6, char a7, int a8);
float* __cdecl sub_451C6F(int a1);
float* __cdecl sub_451ECB(float* a1);
int __cdecl sub_45214D(float* a1);
void __cdecl sub_452638(_DWORD* a1, int a2, int a3, const void* a4);
void __cdecl sub_452655(int a1, int a2, int a3);
int __cdecl sub_452C4F(int* a1);
float* __cdecl sub_452D7B(int a1, int a2, int a3);
int __cdecl sub_45321F(int* a1);
void* __cdecl sub_453354(int a1, int a2, int a3);
int __cdecl sub_453559(int* a1);
void __cdecl sub_453655(int a1, int a2, int a3);
int __cdecl sub_453AA7(int* a1);
int __cdecl sub_453B5C(_DWORD* a1);
int __cdecl sub_453C04(int a1, int a2, int a3);
_DWORD* __cdecl sub_453C65(int a1);
void __cdecl sub_453CB5(int a1, int a2, int a3, float* a4);
int __cdecl sub_45403F(int a1);
_DWORD* __cdecl sub_45410A(int a1);
_DWORD* __cdecl sub_4541EA(int a1);
int* __cdecl sub_45429F(int* a1, int a2, int* a3);
_DWORD* __cdecl sub_45462C(int a1);
float* __cdecl sub_454E97(float* a1, float* a2);
float* __cdecl sub_455042(float* a1);
unsigned __int8* __cdecl sub_45535A(_DWORD* a1, int a2, int a3, unsigned __int8 a4, unsigned __int8 a5, unsigned __int8 a6);
_DWORD* __cdecl sub_45550E(_DWORD* a1, int a2);
float* __cdecl sub_45552A(float* a1);
float* __cdecl sub_4555C1(float* a1, int a2, int a3);
__int64 __cdecl sub_455706(int a1, int a2, int a3, float a4, int a5, int a6, int a7, __int16 a8);
float* __cdecl sub_45587E(float* a1);
int __cdecl sub_4558C5(_DWORD* a1, _DWORD* a2, int a3);
float* __cdecl sub_4559F3(float* a1);
float* __cdecl sub_455CD4(float* a1);
_DWORD* __cdecl sub_455FB9(_DWORD* a1, int a2, int a3, char a4, char a5, char a6, int a7, __int16 a8);
float* __cdecl sub_456104(int a1);
float* __cdecl sub_456132(int a1, int a2, float a3, char a4, char a5, char a6, __int16 a7);
float* __cdecl sub_45624E(float* a1);
float* __cdecl sub_4562E5(float* a1, float* a2, int a3, int a4, int a5);
_DWORD* __cdecl sub_456479(int* a1);
float* __cdecl sub_456780(int a1, int a2, int a3, int a4, int a5, int a6, float a7, char a8, char a9, char a10, char a11);
int __cdecl sub_456B79(int, int, int, float, int, char, char, char); // idb
float* __cdecl sub_456D21(float* a1);
float* __cdecl sub_456E34(float* a1, float* a2, int a3, int a4, int a5);
_DWORD* __cdecl sub_456FC8(int* a1);
int __cdecl sub_4579EC(int, int, float, int); // idb
int __cdecl sub_457B64(int* a1, float* a2, int a3, int a4, char a5, char a6, char a7);
int __cdecl sub_457BED(float* a1, float* a2, unsigned __int8 a3, int a4, int a5);
void __cdecl sub_458018(int a1, int a2, float a3, float a4, int a5, int a6);
void __cdecl sub_4582BB(int a1);
int __cdecl sub_458399(_DWORD* a1);
float* __cdecl sub_458491(int a1, float a2, int a3, __int16 a4, char a5, char a6, char a7, char a8);
float* __cdecl sub_4587B0(int a1, int a2, float a3, int a4, __int16 a5, char a6, char a7, char a8, char a9);
float* __cdecl sub_458AEB(int a1, int a2, float a3, int a4, int a5, char a6, char a7, char a8, char a9);
int __cdecl sub_458D36(int, float, int, float); // idb
int __cdecl sub_458F02(int, int, int, float); // idb
int __cdecl sub_45901A(int a1);
void __cdecl sub_459149(int a1, int a2, int a3);
int __cdecl sub_459C7E(int a1);
int __cdecl sub_459E66(int a1);
void __cdecl sub_45A330(int a1, int a2, int a3);
int __cdecl sub_45A6B7(_DWORD* a1);
int __cdecl sub_45A7B3(int, int, int, int, int, int, float, float, float, float, int, int, int, int); // idb
int __cdecl sub_45AF04(int a1);
int __cdecl sub_45B79F(int a1, int a2, int a3);
int __cdecl sub_45B80D(_DWORD* a1);
int __cdecl sub_45B896(int, float, float, float); // idb
char* __cdecl sub_45BCF4(int a1, int a2, char* a3);
_DWORD* __cdecl sub_45BDB3(int a1);
void __cdecl sub_45BEB4(char a1);
void __cdecl sub_45BEDF(char a1);
void __cdecl sub_45BF0A(char a1);
int __cdecl sub_45BF35(__int64 a1);
int __cdecl sub_45C761(int a1, int a2);
int sub_45C7CE();
int sub_45C7FC();
int __cdecl sub_45C835(int a1, int a2);
int __cdecl sub_45CAB9(__int16 a1, __int16 a2);
int sub_45CB27();
int sub_45CC08();
unsigned int __cdecl sub_45CCE9(int a1);
unsigned int __cdecl sub_45CD5B(int a1);
int __cdecl sub_45CDCD(int a1);
int __cdecl sub_45CE4C(int a1);
int sub_45CECB();
int sub_45CF0E();
int __cdecl sub_45CF56(int); // weak
int __cdecl sub_45CF70(int a1);
int sub_45CF8C();
void __cdecl sub_45D106(int a1);
int sub_45D78F();
int sub_45D7C5();
void sub_45D7E4();
int sub_45DDBC();
void sub_45DEDF();
__int16 __cdecl sub_45DEE4(int a1, int a2);
__int16 __cdecl sub_45DFCE(int a1, FILE* Stream, int a3, wctype_t Type);
__int16 __cdecl sub_45E0E9(int a1, int a2, FILE* Stream);
__int16 __cdecl sub_45E22D(int a1, FILE* Stream);
__int16 __cdecl sub_45E30E(int a1, FILE* Stream, char a3, int a4);
__int16 __cdecl sub_45E3F7(int a1, char a2);
__int16 __cdecl sub_45E43F(int a1, char a2, int a3, int a4, __int16* a5);
wint_t __cdecl sub_45E4C4(wchar_t Character, int a2);
int __cdecl sub_45E4F9(__int16 a1);
void __cdecl sub_45E5EE(int a1);
wint_t __cdecl sub_45E6AD(wchar_t Character, int a2);
void* __cdecl sub_45E6F4(int a1);
void* __cdecl sub_45E723(int a1);
void __cdecl sub_45E752(int a1, int a2, int a3, int a4);
int __cdecl sub_45F0EB(int a1);
int __cdecl sub_45F194(int a1, int a2, int a3);
int __cdecl sub_45F1D8(_DWORD* a1);
void __cdecl sub_45F266(int a1, int a2, int a3);
int __cdecl sub_45FB33(int* a1);
_DWORD* __cdecl sub_45FC6B(int a1);
void __cdecl sub_45FCD0(int a1, int a2, int a3, int a4);
_DWORD* __cdecl sub_45FF43(int a1, const void* a2, int a3, int a4);
int __cdecl sub_45FFBC(int a1);
int __cdecl sub_4600F0(_DWORD* a1);
int __cdecl sub_46019C(int a1);
char* __cdecl sub_4603F4(char* a1);
void __cdecl sub_4604BF(int a1);
int* __cdecl sub_460715(int a1);
int __cdecl sub_460961(int a1);
__int16 __cdecl sub_460981(int a1, int a2, int a3);
int __cdecl sub_460F80(int a1);
int __cdecl sub_461262(int a1);
int __cdecl sub_461686(_DWORD* a1);
void __cdecl sub_4616F2(int a1, int a2, int a3, int a4);
int __cdecl sub_461758(int* a1);
int sub_461AB0(); // weak
int sub_461F84(); // weak
void sub_462051();
int sub_462209(); // weak
__int16 sub_462709();
void sub_4627CC();
void sub_4627F4();
int sub_462A23();
int sub_462D57(); // weak
int sub_46322C(); // weak
int sub_46327D();
int sub_4632C8();
int sub_463331();
int sub_4633F6();
int sub_463726();
int sub_46375F();
__int16 sub_4637AD();
int sub_463C98();
int sub_463D35();
int sub_463D8C();
int sub_463E99();
int sub_46437C();
int sub_464A3E();
int sub_465729();
int sub_465855();
void __cdecl sub_4667BA(int a1, int a2, int a3, float a4);
int __cdecl sub_466F40(char* a1, int a2, int a3, int(__cdecl* a4)(_DWORD), int a5);
int __cdecl sub_46745B(char* a1, int a2, int a3);
int __cdecl sub_4677E3(char* a1, int a2, int a3);
int __cdecl sub_467854(int* a1, int a2, int a3);
int __cdecl sub_4678DD(int* a1);
int sub_4678FC();
int __cdecl sub_467CB4(int a1);
int sub_467D78();
BOOL __cdecl sub_467D91(__int16 a1);
// int __cdecl _fputchar(int Character);
int sub_467DDA();
int __cdecl sub_467E1C(__int16* a1, int a2);
int __cdecl sub_467F35(char* a1, int a2, int a3);
int __cdecl sub_468003(_WORD* a1, int a2, int a3);
int __cdecl sub_468326(_DWORD* a1, int a2, int a3);
_DWORD* __cdecl sub_4684B4(_DWORD* a1);
void __cdecl sub_4685D6(_DWORD* a1, _DWORD* a2, int a3);
void __cdecl sub_468830(int a1);
int __cdecl sub_4689F0(int a1, int a2, int a3);
_DWORD* __cdecl sub_468D01(int a1);
void __cdecl sub_468FB7(int a1, int a2, int a3);
int __cdecl sub_469AF9(int* a1);
int __cdecl sub_469C48(int* a1);
void __cdecl sub_469D91(int a1, int a2, int a3);
_DWORD* __cdecl sub_46A0D9(_DWORD* a1);
int __cdecl sub_46A16F(int a1, int a2, int a3);
int __cdecl sub_46A2C6(int a1);
void __cdecl sub_46A35D(int a1, int a2, int a3, int a4);
int __cdecl sub_46A8CA(int a1);
_DWORD* __cdecl sub_46AA45(int a1);
_DWORD* __cdecl sub_46AB66(_DWORD* a1);
void __cdecl sub_46AC74(int a1, int a2, int a3, int a4);
int __cdecl sub_46B284(int a1);
_DWORD* __cdecl sub_46B3FF(int a1);
int __cdecl sub_46B501(int a1);
_DWORD* __cdecl sub_46B5C4(int a1);
int __cdecl sub_46B62A(_DWORD* a1, int a2, int a3);
int __cdecl sub_46B7CF(int a1);
// int __cdecl _fputchar_0(int Character);
_DWORD* __cdecl sub_46B931(int a1);
void __cdecl sub_46BA08(_DWORD* a1);
// int __cdecl _fputchar_1(int Character);
int __cdecl sub_46BB14(_DWORD* a1, int a2, int a3);
_DWORD* __cdecl sub_46BCF3(int a1);
int __cdecl sub_46BD80(int a1);
float* __cdecl sub_46BEB1(int a1, int a2, float* a3);
float* __cdecl sub_46BF46(float* a1);
int __cdecl sub_46C0BC(int a1, int a2, int a3);
int __cdecl sub_46C257(int a1);
int __cdecl sub_46C26E(int a1);
float* __cdecl sub_46C2D0(int* a1);
int __cdecl sub_46C681(int a1, int a2, int a3);
int __cdecl sub_46C781(_DWORD* a1);
float* __cdecl sub_46C833(int a1, int a2, float* a3);
_DWORD* __cdecl sub_46C9BE(int a1);
int __cdecl sub_46CA1B(int a1, int a2, int a3);
float* __cdecl sub_46CB2C(int* a1);
int __cdecl sub_46CC91(int a1, int a2, int a3);
int __cdecl sub_46CD57(_DWORD* a1);
void* __cdecl sub_46CDDE(int a1, int a2, int a3);
int __cdecl sub_46CEF6(int a1);
int __cdecl sub_46D063(_DWORD* a1);
int __cdecl sub_46D18B(int* a1);
int __cdecl sub_46D2ED(int* a1);
float* __cdecl sub_46D437(int a1, float a2, int a3, __int16 a4, char a5, char a6, char a7, char a8);
int __cdecl sub_46D6B2(int a1);
int __cdecl sub_46D6FA(int a1, int a2, int a3, int a4);
int __cdecl sub_46DF32(int a1);
int __cdecl sub_46DF43(int a1);
int __cdecl sub_46E0A4(int a1, int* a2);
void __cdecl sub_46E6C3(int a1, int a2, int a3, int a4);
int __cdecl sub_46F611(int a1);
int __cdecl sub_46F711(_DWORD* a1);
int __cdecl sub_46F913(const void* a1, _DWORD* a2, int a3, int a4);
float* __cdecl sub_46FA82(int a1, int a2, int a3);
int __cdecl sub_4703A7(int a1);
int __cdecl sub_4704CC(int a1);
int __cdecl sub_470535(_DWORD* a1);
float* __cdecl sub_4706A5(int a1, int a2, int a3);
int __cdecl sub_471136(int a1);
int __cdecl sub_4712DB(_DWORD* a1);
int __cdecl sub_471439(int a1, int a2, int a3);
int __cdecl sub_471464(_DWORD* a1);
int __cdecl sub_4715C4(int a1, int a2, int a3);
_DWORD* __cdecl sub_47198E(_DWORD* a1);
int __cdecl sub_471AA2(int a1);
void __cdecl sub_471AF6(int a1, int a2, int a3, __int16 a4, float a5);
int __cdecl sub_471D5F(int a1, int a2, int a3);
int __cdecl sub_471E32(int a1);
int __cdecl sub_471F9B(int* a1);
int __cdecl sub_4720B0(int a1, int a2, int a3);
DWORD __cdecl sub_47221A(int* a1);
int __cdecl sub_4722B4(_DWORD* a1);
int __cdecl sub_47243F(_DWORD* a1, int a2, int a3);
_DWORD* __cdecl sub_47250D(_DWORD* a1);
float* __cdecl sub_47258D(int a1, float* a2, _DWORD* a3);
char* __cdecl sub_472687(const void** a1, int* a2, float* a3, char* a4);
int __cdecl sub_47271E(int a1, int a2, int a3);
int __cdecl sub_47295A(int a1);
int __cdecl sub_4729F2(int a1);
float* __cdecl sub_472C1C(int a1, int a2, int a3, int a4);
int __cdecl sub_472E5B(int a1);
__int16 __cdecl sub_47316F(_DWORD* a1, int a2, int a3, int a4);
_DWORD* __cdecl sub_4733A6(_DWORD* a1);
int __cdecl sub_473435(int a1, int a2, int a3, int a4);
_DWORD* __cdecl sub_473505(int a1);
int __cdecl sub_47354A(int a1, int a2, int a3, int a4);
_DWORD* __cdecl sub_473569(int a1);
int __cdecl sub_4735AE(int a1);
int __cdecl sub_473A1E(int a1, int a2, int a3);
int __cdecl sub_474140(_DWORD* a1);
int __cdecl sub_474343(_DWORD* a1, int a2, int a3, int a4);
_DWORD* __cdecl sub_4743FD(_DWORD* a1);
int __cdecl sub_47446B(_DWORD* a1, int a2, int a3, int a4);
_DWORD* __cdecl sub_4745CD(_DWORD* a1);
float* __cdecl sub_47463C(int a1, int a2, float* a3);
int __cdecl sub_4748DF(int a1);
int __cdecl sub_474957(int a1);
float* __cdecl sub_474B4F(int a1, int a2, int a3, int a4);
int __cdecl sub_474E0A(int a1);
int __cdecl sub_475080(int a1, int a2, int a3, int a4);
_DWORD* __cdecl sub_47523E(_DWORD* a1);
void __cdecl sub_4752B0(int a1, int a2, int a3);
int __cdecl sub_47565E(int a1);
int __cdecl sub_4757D7(int a1);
int __cdecl sub_475AC7(_DWORD* a1);
int __cdecl sub_475B40(float* a1, float* a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int __cdecl sub_475DEE(int a1, int a2, int a3);
int __cdecl sub_47620D(int a1);
int __cdecl sub_476552(int a1);
int __cdecl sub_47690A(int a1, int a2, int a3);
_DWORD* __cdecl sub_476932(int a1);
int __cdecl sub_47697A(int a1);
void sub_476D54();
_DWORD* __cdecl sub_476D59(int a1);
int __cdecl sub_476D9C(int a1, int a2, int a3);
_DWORD* __cdecl sub_476E61(int a1);
unsigned int __cdecl sub_476F0D(_DWORD* a1, int a2, unsigned int a3, int a4);
_DWORD* __cdecl sub_476FCA(int a1);
_DWORD* __cdecl sub_477021(_DWORD* a1, int a2, int a3);
_DWORD* __cdecl sub_47714B(_DWORD* a1);
unsigned int __cdecl sub_4771C8(_DWORD* a1);
int __cdecl sub_4771F6(int a1);
int sub_477230();
void __cdecl sub_4773F6(int a1);
int sub_47856A();
_DWORD* __cdecl sub_478DB0(int* a1);
int __cdecl sub_47B5EC(char* String1); // idb
char* __cdecl sub_47B633(int a1, int a2);
int __cdecl sub_47BC20(float* a1, int* a2);
int __cdecl sub_47BF74(int a1);
int __cdecl sub_47BFC7(float* a1, int* a2);
int __cdecl sub_47BFF1(int a1, int a2, int a3);
_DWORD* __cdecl sub_47C209(int a1, const void* a2, int a3, int a4, int a5);
int __cdecl sub_47C28E(int, int, float, float, float, float); // idb
BOOL __cdecl sub_47C661(int a1, int a2, float a3);
BOOL __cdecl sub_47C805(int a1, int a2, float a3);
_DWORD* __cdecl sub_47C98E(int a1);
float* __cdecl sub_47D078(float* a1);
int __cdecl sub_47D114(const void* a1, int* a2);
int __cdecl sub_47D4AE(int a1);
int __cdecl sub_47D63B(int a1);
int __cdecl sub_47DBF9(_DWORD* a1);
int __cdecl sub_47DC2B(int a1);
void __cdecl sub_47DC3A(int a1);
__int16 __cdecl sub_47DEEE(int a1);
int __cdecl sub_47DF83(int a1);
int __cdecl sub_47E0A7(int a1);
int __cdecl sub_47E0C3(int a1);
int __cdecl sub_47E1E2(int a1);
int __cdecl sub_47E26B(int a1);
int __cdecl sub_47E39F(int a1);
int __cdecl sub_47E3BB(int a1);
int __cdecl sub_47E477(int a1);
int __cdecl sub_47E4B9(int a1);
int __cdecl sub_47E59B(int a1);
int __cdecl sub_47E5AA(int a1);
__int16 __cdecl sub_47E70E(int a1);
int __cdecl sub_47E7B4(int a1);
_DWORD* __cdecl sub_47E926(_DWORD* a1);
int __cdecl sub_47E94F(int a1);
int __cdecl sub_47EA66(_DWORD* a1);
void __cdecl sub_47EAB1(int a1, int a2, int a3, _DWORD* a4);
int __cdecl sub_47EF2C(int, int, float); // idb
int __cdecl sub_47EFFF(int, int, float); // idb
int __cdecl sub_47F414(int a1);
int __cdecl sub_47F67B(int a1);
char __cdecl sub_47F9B0(int a1, int a2, int a3, float* a4);
int __cdecl sub_480702(int a1);
_DWORD* __cdecl sub_480845(int* a1, _DWORD* a2);
int __cdecl sub_480A00(int a1, int a2);
int __cdecl sub_480A73(int a1, int a2, int a3);
_DWORD* __cdecl sub_480C6E(int a1, const void* a2, int a3, int a4, int a5);
int __cdecl sub_480CF3(int a1, float a2);
int __cdecl sub_480ED0(int a1);
int __cdecl sub_480FE2(int a1);
int __cdecl sub_48112B(int, float); // idb
int __cdecl sub_481BCA(int a1);
int __cdecl sub_481CDB(int, int, int, int, float); // idb
int* __cdecl sub_4820C7(float* a1, int* a2);
int __cdecl sub_48240A(int a1);
int __cdecl sub_48245D(int, int, float, float, float, float); // idb
float* __cdecl sub_482820(float* a1, float* a2);
void __cdecl sub_482AC2(int a1);
unsigned __int8* __cdecl sub_482BB5(_DWORD* a1, _DWORD* a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, unsigned __int8 a8);
int __cdecl sub_482E4D(int a1);
int __cdecl sub_4830C2(int a1, int a2);
int __cdecl sub_48386B(_DWORD* a1);
int __cdecl sub_48389D(int a1);
int __cdecl sub_4838AC(int a1);
int __cdecl sub_4839E4(_DWORD* a1);
int __cdecl sub_483A2F(int a1);
void sub_483AF3();
int __cdecl sub_483AF8(int a1);
int __cdecl sub_483C18(int a1);
int __cdecl sub_483C2B(int a1);
int __cdecl sub_483D1C(int a1);
int __cdecl sub_483D2F(_DWORD* a1);
int __cdecl sub_483E70(int a1);
void __cdecl sub_483E7F(int a1);
int __cdecl sub_483F38(int a1);
void __cdecl sub_483F47(int a1);
int __cdecl sub_484146(int a1);
int __cdecl sub_484159(int a1);
void sub_4841F2();
void __cdecl sub_4841F7(int a1);
int __cdecl sub_484379(int a1);
void __cdecl sub_48438C(int a1);
void sub_48448C();
int __cdecl sub_484491(int a1);
_DWORD* __cdecl sub_484552(_DWORD* a1);
int __cdecl sub_4845C7(int a1, int a2, int a3);
int __cdecl sub_484B1E(int a1);
int __cdecl sub_484BCD(int a1, _DWORD* a2, _DWORD* a3, int a4);
__int16 __cdecl sub_484E1E(int a1);
int __cdecl sub_484F2E(int a1);
int __cdecl sub_484F41(int a1, int a2);
void __cdecl sub_48549B(int a1, int a2, int a3, _DWORD* a4);
char __cdecl sub_485B67(int a1);
char __cdecl sub_485D4C(int a1, int a2, int a3, int a4);
_DWORD* __cdecl sub_485F65(int a1, int a2, const void* a3);
_DWORD* __cdecl sub_485FC8(int a1);
void sub_4867C0();
int __cdecl sub_4867CF(const char* a1);
int __cdecl sub_486860(const char* a1, int a2);
int sub_486A33();
int sub_486CFF();
int __cdecl sub_48720B(int a1, int a2, int a3, int a4);
int __cdecl sub_487357(_BYTE* a1);
int sub_487787();
int sub_4878FF();
int __cdecl sub_487938(int a1, int a2);
int __cdecl sub_48795B(int a1, int a2);
int __cdecl sub_487983(int a1);
int __cdecl sub_4879BC(int a1);
void __cdecl sub_4879F5(int a1);
__int16* __cdecl sub_488D8B(int a1);
int __cdecl sub_4895CF(int a1, int a2, int a3);
int __cdecl sub_489B4C(int a1, int a2);
int __cdecl sub_48AC64(int a1, int a2);
int __cdecl sub_48B073(int a1, int a2);
int __cdecl sub_48B145(int a1);
void sub_48B5FE();
__int16 __cdecl sub_48B648(const char* a1, int a2);
int __cdecl sub_48B829(int a1, int a2, int a3, int a4, char a5);
void sub_48BA43();
void sub_48BA85();
void sub_48BD3F();
void sub_48BEF9();
int sub_48C216();
int __cdecl sub_48C3CD(int a1, int a2, int a3, int a4);
_DWORD* __cdecl sub_48C41C(int a1);
int __cdecl sub_48C464(int a1);
_DWORD* __cdecl sub_48C4B3(_DWORD* a1, int a2, _DWORD* a3);
_DWORD* __cdecl sub_48C5A0(int a1);
char* __cdecl sub_48C611(int a1);
char* __cdecl sub_48C6E3(int a1);
void __cdecl sub_48C855(int a1, int a2);
int __cdecl sub_48CAA4(int a1);
void __cdecl sub_48CC45(int a1);
float* __cdecl sub_48CECE(int a1);
int __cdecl sub_48D03E(int a1);
int __cdecl sub_48D51E(_DWORD* a1);
_DWORD* __cdecl sub_48D582(int* a1);
int sub_48D930();
void sub_48D9A6();
_DWORD* __cdecl sub_48D9B5(int a1, int a2, _DWORD* a3, int a4);
BOOL __cdecl sub_48DB9D(int a1, int a2);
__int64 __cdecl sub_48DCCF(FILE* Stream);
__int16 __cdecl sub_48DE6C(int a1, FILE* Stream);
int __cdecl sub_48E27C(int a1);
char __cdecl sub_48E2CD(int a1, int a2);
int __cdecl sub_48E33F(int a1, int a2);
FILE* __cdecl sub_48E3B1(_DWORD* a1, int a2);
BOOL sub_48E42E();
void sub_48E8F6();
int __cdecl sub_48EA2F(int* a1);
int __cdecl sub_48EB80(int); // weak
void __cdecl sub_48F067(int a1, int a2, int a3);
int __cdecl sub_48F4C7(int a1);
int __cdecl sub_48F854(int a1);
int __cdecl sub_48F98E(int a1);
int* __cdecl sub_48F9C7(int a1);
int __cdecl sub_48FA24(int a1);
int* __cdecl sub_48FA5D(int a1);
int __cdecl sub_48FABA(int a1);
int* __cdecl sub_48FAF3(int a1);
int __cdecl sub_48FB50(int a1);
int* __cdecl sub_48FB89(int a1);
int __cdecl sub_48FBE6(int a1);
int* __cdecl sub_48FC1F(int a1);
int __cdecl sub_48FC89(int a1);
int* __cdecl sub_48FCC2(int a1);
int __cdecl sub_48FD2C(int a1);
int* __cdecl sub_48FD65(int a1);
int __cdecl sub_48FDCF(int a1);
int* __cdecl sub_48FE08(int a1);
int __cdecl sub_48FE72(int a1);
int* __cdecl sub_48FEAB(int a1);
int __cdecl sub_48FF15(int a1);
int* __cdecl sub_48FF4E(int a1);
int __cdecl sub_48FFB8(int a1);
int* __cdecl sub_48FFF1(int a1);
int __cdecl sub_49005B(int a1);
int* __cdecl sub_490094(int a1);
int __cdecl sub_4900FE(int a1);
int* __cdecl sub_490137(int a1);
int __cdecl sub_4901A1(int a1);
int* __cdecl sub_4901DA(int a1);
int __cdecl sub_490244(int a1);
int* __cdecl sub_49027D(int a1);
int __cdecl sub_4902E7(int a1);
int* __cdecl sub_490320(int a1);
int __cdecl sub_49038A(int a1);
int* __cdecl sub_4903C3(int a1);
int __cdecl sub_49042D(int a1);
int* __cdecl sub_490466(int a1);
int __cdecl sub_4904D0(int a1);
int* __cdecl sub_490509(int a1);
int __cdecl sub_490573(int a1);
int* __cdecl sub_4905AC(int a1);
int __cdecl sub_490616(int a1);
int* __cdecl sub_49064F(int a1);
int __cdecl sub_4906B9(int a1);
int* __cdecl sub_4906F2(int a1);
int __cdecl sub_49075C(int a1);
int* __cdecl sub_490795(int a1);
int __cdecl sub_4907FF(int a1);
int* __cdecl sub_490838(int a1);
int __cdecl sub_4908A2(int a1);
int* __cdecl sub_4908DB(int a1);
int __cdecl sub_490945(int a1);
int* __cdecl sub_49097E(int a1);
int __cdecl sub_4909E8(int a1);
int* __cdecl sub_490A21(int a1);
int __cdecl sub_490A8B(int a1);
int* __cdecl sub_490AC4(int a1);
int __cdecl sub_490B2E(int a1);
int* __cdecl sub_490B67(int a1);
int __cdecl sub_490BD1(int a1);
int* __cdecl sub_490C0A(int a1);
int __cdecl sub_490C74(int a1);
int* __cdecl sub_490CAD(int a1);
int __cdecl sub_490D17(int a1);
int __cdecl sub_490DBA(int a1);
int sub_490E14();
int __cdecl sub_490E1B(int a1);
int __cdecl sub_490EE2(int a1);
int __cdecl sub_490FA9(int a1);
__int16 __cdecl sub_491070(_DWORD* a1, int a2);
int* __cdecl sub_49308F(int* a1, int a2);
int __cdecl sub_4931DF(int, int, int); // weak
int* __cdecl sub_49390F(_DWORD* a1, int* a2, int a3);
int sub_493C49();
int __cdecl sub_493D17(int a1);
int __cdecl sub_4940EF(int a1);
int __cdecl sub_494267(int a1);
int __cdecl sub_4943C3(int a1);
float* __cdecl sub_494602(float* a1, float* a2, int a3);
void __cdecl sub_494931(int a1, int a2, int a3);
int __cdecl sub_49612F(int); // weak
int __cdecl sub_496689(int a1);
int __cdecl sub_496AA8(_DWORD* a1, int a2, int a3);
_DWORD* __cdecl sub_496B01(_DWORD* a1);
__int16 sub_496B6B();
int sub_496BAD();
void __cdecl sub_496BE5(int a1, int a2, int a3);
int __cdecl sub_4971C6(int a1);
int __cdecl sub_49736C(int a1);
void __cdecl sub_4974CC(int a1, int a2, int a3);
void sub_497AFD();
int __cdecl sub_497B02(int a1);
_DWORD* __cdecl sub_497D93(int a1, int a2, int a3);
int __cdecl sub_49825E(int a1);
_DWORD* __cdecl sub_498368(_DWORD* a1, int a2, _DWORD* a3);
_DWORD* __cdecl sub_49872B(_DWORD* a1);
DWORD __cdecl sub_498810(int a1);
void __cdecl sub_498B7F(float* a1, float* a2);
DWORD __cdecl sub_498C13(float* a1, float* a2);
_DWORD* __cdecl sub_498C50(_DWORD* a1);
char* __cdecl sub_498D09(int a1);
char* __cdecl sub_498DAB(int a1, char* a2, char* a3);
char* __cdecl sub_498E23(int a1, char* a2, char* a3);
char* __cdecl sub_498E9D(int a1, char* a2);
int __cdecl sub_498F04(_DWORD* a1);
char* __cdecl sub_498F40(int a1, char* a2, void* a3);
__int16 __cdecl sub_498F8D(int a1);
__int16 __cdecl sub_4990DE(int a1);
int __cdecl sub_4991A1(int a1);
int __cdecl sub_4991D4(int, float); // idb
int __cdecl sub_499470(int a1);
float* __cdecl sub_499492(int a1);
int __cdecl sub_499519(int a1);
_DWORD* __cdecl sub_49957B(_DWORD* a1, _DWORD* a2, _DWORD* a3, _DWORD* a4, _DWORD* a5, int a6, __int16 a7, int a8, char a9, char a10, char a11, char a12);
int __cdecl sub_49975A(int a1, float* a2, float* a3, int a4, __int16 a5, int a6, char a7, char a8, char a9, char a10);
_DWORD* __cdecl sub_49A010(int a1, int a2, int a3, int a4, float a5, int a6, int a7, int a8, char a9);
char __cdecl sub_49AAE8(int a1, int a2, int a3, int a4);
_DWORD* __cdecl sub_49AD4C(int a1);
void __cdecl sub_49AE64(int a1, int a2, int a3, int a4);
int __cdecl sub_49B40B(int a1);
char* __cdecl sub_49B5D0(int a1, int a2, char* a3);
int __cdecl sub_49B91A(int a1);
int __cdecl sub_49BAD6(int a1, int a2, __int16 a3);
const char* __cdecl sub_49BB30(int a1, char* a2, unsigned int* a3);
void __cdecl sub_49BC77(int a1, _DWORD* a2, int a3, char a4);
int __cdecl sub_49C1F2(int a1);
__int16 __cdecl sub_49C44D(int a1, int a2, int a3);
int __cdecl sub_49C75F(int a1);
int __cdecl sub_49C98B(int a1);
char __cdecl sub_49CB0C(int a1, int a2, int a3, _DWORD* a4);
int __cdecl sub_49D150(int a1);
int __cdecl sub_49D371(int a1);
void __cdecl sub_49D4CE(int a1, _DWORD* a2, int a3, _DWORD* a4);
int __cdecl sub_49DB87(int a1);
DWORD __cdecl sub_49DD85(int a1, int a2, DWORD a3);
int __cdecl sub_49DEE9(int a1);
DWORD __cdecl sub_49E065(float* a1, float* a2, DWORD a3);
int __cdecl sub_49E19D(int a1);
int __cdecl sub_49E3CB(int a1, _DWORD* a2);
DWORD __cdecl sub_49E666(int a1, int a2, DWORD a3);
_DWORD* __cdecl sub_49E721(int a1);
DWORD __cdecl sub_49E87A(int a1, int a2, DWORD a3);
int __cdecl sub_49E91A(int a1);
DWORD __cdecl sub_49EA62(int a1, int a2, DWORD a3);
float* __cdecl sub_49EFDB(int a1);
void __cdecl sub_49F258(int a1, int a2, int a3, char a4);
int __cdecl sub_49F57B(int a1);
DWORD __cdecl sub_49F6DB(_DWORD* a1, int a2, DWORD a3, int a4);
_DWORD* __cdecl sub_49F862(int a1);
int __cdecl sub_49F9A8(_DWORD* a1, int a2, int a3, _DWORD* a4);
_DWORD* __cdecl sub_49FB32(int a1);
int __cdecl sub_49FC4C(int a1, int a2, int a3);
int __cdecl sub_49FE65(int a1);
int __cdecl sub_49FFB6(int a1, int a2, int a3, int a4);
_DWORD* __cdecl sub_4A061E(int a1);
void __cdecl sub_4A07CA(int* a1, int a2, int a3);
int __cdecl sub_4A0C9F(int a1);
void __cdecl sub_4A0DEB(int a1);
void __cdecl sub_4A116F(int a1, float* a2, int a3, float* a4);
int __cdecl sub_4A18A0(int a1);
void __cdecl sub_4A1B00(int* a1, int a2, int a3, float* a4);
int __cdecl sub_4A230C(int a1);
int __cdecl sub_4A253A(int a1, int a2, int a3);
int __cdecl sub_4A25D4(int a1);
char __cdecl sub_4A262B(int a1, int a2, int a3, int a4);
int __cdecl sub_4A2C59(int a1);
char* __cdecl sub_4A2E29(int a1, int a2, char* a3);
int __cdecl sub_4A3058(int a1);
char __cdecl sub_4A3222(int a1, int a2, int a3, int a4);
char* __cdecl sub_4A38BA(int a1);
__int16 __cdecl sub_4A3B66(int a1, int a2, int a3);
int __cdecl sub_4A4175(int a1);
char* __cdecl sub_4A437F(int a1, int a2, int a3);
int __cdecl sub_4A486E(int a1);
char* __cdecl sub_4A4A24(int a1, int a2, int a3, int a4);
int __cdecl sub_4A4D6D(int a1);
wint_t __cdecl sub_4A4EEF(int a1, int a2, int a3);
int __cdecl sub_4A4FBA(int a1);
wint_t __cdecl sub_4A53BD(int a1);
DWORD __cdecl sub_4A55DD(int a1, int a2, DWORD a3);
int __cdecl sub_4A56AD(int a1, int a2, int a3);
int __cdecl sub_4A57F4(_DWORD* a1, int a2, int a3);
_DWORD* __cdecl sub_4A60A9(int a1);
char __cdecl sub_4A60F6(int a1, int a2, int a3);
int __cdecl sub_4A62D8(_DWORD* a1);
int __cdecl sub_4A635D(int, float, float); // idb
int __cdecl sub_4A640F(int a1, int a2, int a3, int a4);
int __cdecl sub_4A672A(int* a1);
char* __cdecl sub_4A6838(int a1, int a2, int a3, int a4);
int __cdecl sub_4A6B67(int a1);
char __cdecl sub_4A6CF7(int a1, int a2, int a3, int a4);
int __cdecl sub_4A71F0(int a1);
void __cdecl sub_4A73BD(int a1, int a2, int a3);
int __cdecl sub_4A762B(int a1);
int __cdecl sub_4A77D8(int, float, float); // idb
char* __cdecl sub_4A796E(int a1, int a2, char* a3);
int __cdecl sub_4A7A3C(int a1);
void __cdecl sub_4A7B8A(int a1, _DWORD* a2, int a3, int a4);
_DWORD* __cdecl sub_4A7F06(int a1);
char* __cdecl sub_4A805B(int a1, int a2, int a3, int a4);
int __cdecl sub_4A8285(int a1);
char* __cdecl sub_4A841E(int a1, int a2, int a3, int a4);
int __cdecl sub_4A85FA(int a1);
void __cdecl sub_4A8777(int a1, int* a2, int a3, int* a4);
int __cdecl sub_4A8F4D(int a1);
char* __cdecl sub_4A90C1(int a1, int* a2, char* a3);
int __cdecl sub_4A9415(int a1);
int __cdecl sub_4A95B9(int a1, int a2, int a3, float* a4);
_DWORD* __cdecl sub_4A981C(int a1);
void* __cdecl sub_4A9972(int a1, int a2, void* a3);
float* __cdecl sub_4A9FDB(int a1, float* a2, float* a3, int a4);
int __cdecl sub_4AA228(int a1);
char* __cdecl sub_4AA3D1(int a1, int a2, int a3, float* a4);
_DWORD* __cdecl sub_4AA525(int a1);
void __cdecl sub_4AA68A(int a1, int a2, int a3, float* a4);
_DWORD* __cdecl sub_4AAE95(int a1);
int __cdecl sub_4AB0A7(int a1, int a2, int a3);
int __cdecl sub_4AB4A8(int a1);
int __cdecl sub_4AB6AA(int a1, int a2, int a3);
int __cdecl sub_4AB86E(int a1);
char* __cdecl sub_4ABA3A(int a1, int a2, char* a3);
_DWORD* __cdecl sub_4ABDA4(int a1);
__int16 __cdecl sub_4ABEE1(int a1, int a2, int a3, int a4);
int __cdecl sub_4AC274(int a1);
int __cdecl sub_4AC437(int a1, int a2, int a3, int a4);
int __cdecl sub_4ACB17(int a1);
DWORD __cdecl sub_4ACCDE(int a1, int a2, DWORD a3);
int __cdecl sub_4AD957(int a1);
int __cdecl sub_4ADAD6(int a1, int a2, int a3, int a4);
int __cdecl sub_4ADD7D(_DWORD* a1);
int __cdecl sub_4ADE7A(_DWORD* a1);
int __cdecl sub_4ADF90(_DWORD* a1, int a2);
_DWORD* __cdecl sub_4AE021(_DWORD* a1);
int __cdecl sub_4AE075(_DWORD* a1, int a2);
_DWORD* __cdecl sub_4AE2AF(_DWORD* a1);
// int __setargv(); weak
int __cdecl sub_4AE312(int a1, const char* a2, int a3);
int __cdecl sub_4AE3D7(int a1, const char* a2, int a3);
int __cdecl sub_4AE4A0(__int16 a1);
int __cdecl sub_4AEA49(int a1, int a2, __int16 a3);
int __cdecl sub_4AED42(_DWORD* a1);
int __cdecl sub_4AF1CC(int a1, _DWORD* a2);
int __cdecl sub_4AF54C(int a1, int a2);
int* __cdecl sub_4AF67B(__int16 a1, int* a2);
int* __cdecl sub_4AFA59(__int16 a1, int a2, int a3);
int __cdecl sub_4AFB5C(int a1, int a2, int a3);
int __cdecl sub_4AFD84(int a1, int a2, int a3, int a4, int a5);
char __cdecl sub_4AFDD5(_DWORD* a1, int a2);
int __cdecl sub_4AFEB9(int, int, float, int); // idb
int __cdecl sub_4AFFED(int a1);
int __cdecl sub_4B0017(_DWORD* a1, _DWORD* a2, int a3, int a4);
int __cdecl sub_4B010D(_DWORD* a1, _DWORD* a2, int a3, int a4, int a5);
int __cdecl sub_4B01EC(int a1, int a2);
float* __cdecl sub_4B022F(int a1);
char __cdecl sub_4B7A75(int a1, int a2, int a3, int a4);
void __cdecl sub_4B7D7E(__int64 a1, int a2, int a3);
int __cdecl sub_4B8D39(int a1);
int __cdecl sub_4B8DC8(_DWORD* a1, float* a2);
int __cdecl sub_4B8E9F(float* a1);
int __cdecl sub_4B8F37(_DWORD* a1);
void* __cdecl sub_4B8FB0(int a1, int a2, void* a3);
int __cdecl sub_4B920B(int* a1);
int __cdecl sub_4B92A5(float* a1, int a2, int a3);
_DWORD* __cdecl sub_4B9975(_DWORD* a1);
void __cdecl sub_4B9AF1(int a1, int a2, int a3);
int __cdecl sub_4B9EC7(int a1);
// int __cdecl _fputchar_2(int Character);
int __cdecl sub_4B9F41(_DWORD* a1);
void __cdecl sub_4BA093(int a1, int a2, int a3, int a4);
_DWORD* __cdecl sub_4BA469(_DWORD* a1);
int __cdecl sub_4BA50A(int a1, int a2, int a3);
int __cdecl sub_4BA5F7(_DWORD* a1);
int __cdecl sub_4BA677(_DWORD* a1, int a2, int a3);
_DWORD* __cdecl sub_4BA6E6(int a1);
void* __cdecl sub_4BA72B(int a1, int a2, int a3);
_DWORD* __cdecl sub_4BA8A7(int a1);
float* __cdecl sub_4BA911(float* a1, float* a2);
int __cdecl sub_4BAA96(int a1);
int __cdecl sub_4BAB2A(int a1);
_DWORD* __cdecl sub_4BAC56(int a1);
int __cdecl sub_4BACE7(const void* a1);
void __cdecl sub_4BAD3E(int a1, int a2, int a3);
int __cdecl sub_4BADE4(int a1);
unsigned __int8* __cdecl sub_4BAE47(int a1, int a2);
int __cdecl sub_4BAF14(int, int, float, char, int, int); // idb
void __cdecl sub_4BB4C5(int a1, int a2, int a3);
int __cdecl sub_4BBD51(int a1);
int __cdecl sub_4BBDB3(_DWORD* a1);
int __cdecl sub_4BC037(_DWORD* a1, int a2, int a3);
_DWORD* __cdecl sub_4BC0D2(_DWORD* a1);
void __cdecl sub_4BC197(int a1, int a2, int a3);
int __cdecl sub_4BC413(_DWORD* a1);
void __cdecl sub_4BC4BC(int a1, int a2, int a3);
int __cdecl sub_4BC939(int* a1);
int __cdecl sub_4BCA38(int a1, int a2, int a3);
int __cdecl sub_4BCAC0(int a1);
_DWORD* __cdecl sub_4BCBF8(int* a1);
void __cdecl sub_4BCC6C(int a1, int a2, int a3);
int __cdecl sub_4BD00C(int a1);
int __cdecl sub_4BD2F0(int a1, float* a2);
int __cdecl sub_4BD4C7(int a1, int* a2);
char* __cdecl sub_4BED61(int a1, int* a2, float* a3);
int __cdecl sub_4BF342(int); // weak
int __cdecl sub_4BF3B1(int); // weak
int __cdecl sub_4BF485(int); // weak
int __cdecl sub_4BF52C(int a1);
int __cdecl sub_4C0FDD(_DWORD* a1);
int __cdecl sub_4C1049(int a1);
char* __cdecl sub_4C10FB(int a1, int a2, char* a3);
int __cdecl sub_4C118D(const void* a1, int a2);
DWORD __cdecl sub_4C12B5(_DWORD* a1);
float* __cdecl sub_4C1377(int a1, int a2, float* a3);
int __cdecl sub_4C1479(const void* a1);
float* __cdecl sub_4C15A2(int a1, int a2, float a3);
int __cdecl sub_4C185E(float* a1, float* a2, int* a3, float a4, int a5, __int16 a6, char a7, char a8, char a9, char a10, int a11);
_DWORD* __cdecl sub_4C19EE(int a1, int a2, float a3, int a4);
_DWORD* __cdecl sub_4C1B90(int a1, int a2);
_DWORD* __cdecl sub_4C1CF1(int a1, float* a2, int a3, __int16 a4, int* a5);
float* __cdecl sub_4C1E60(int a1, int* a2, float* a3, float a4, float a5);
int __cdecl sub_4C20EA(int a1);
int __cdecl sub_4C2945(int a1, int a2);
__int16 __cdecl sub_4C2A3D(int a1, FILE* Stream, int a3);
int __cdecl sub_4C2CE6(_DWORD* a1, __int16 a2);
int __cdecl sub_4C2DD9(_DWORD* a1);
int __cdecl sub_4C2E83(_DWORD* a1);
int __cdecl sub_4C2F5C(_DWORD* a1);
__int16 __cdecl sub_4C3006(int a1);
__int16 __cdecl sub_4C30A0(_DWORD* a1, int a2);
__int16 __cdecl sub_4C30FC(int a1);
__int16 __cdecl sub_4C3171(int a1);
int __cdecl sub_4C3297(int a1);
int __cdecl sub_4C335A(int a1);
int __cdecl sub_4C33E7(float* a1);
void sub_4C37A0();
int sub_4C37E6();
int sub_4C475F();
int sub_4C486C();
int __cdecl sub_4C48CF(int a1);
int __cdecl sub_4C494A(int a1);
void sub_4C4ACB();
int sub_4C52DB();
int __cdecl sub_4C52FB(int a1);
void sub_4C54FD();
int __cdecl sub_4C57AE(int a1, __int16 a2, __int16 a3);
void sub_4C5A35();
int __cdecl sub_4C5B7E(int a1);
int __cdecl sub_4C5C86(int a1);
int __cdecl sub_4C5CBB(int a1);
int __cdecl sub_4C5D1E(int a1, int a2);
int __cdecl sub_4C5ED4(int a1, int a2, int a3);
int __cdecl sub_4C5F03(int a1, int a2);
int __cdecl sub_4C5FC4(int a1, int a2);
int __cdecl sub_4C60E4(int, int); // weak
void __cdecl sub_4C610F(int a1);
__int16 __cdecl sub_4C6241(int a1, int a2);
__int16 __cdecl sub_4C62BE(int a1, int a2);
int sub_4C6341();
__int16 sub_4C64A7();
int __cdecl sub_4C6682(int, int); // weak
int sub_4C66E4();
char sub_4C680D();
char __cdecl sub_4C690A(int a1, int a2);
int sub_4C69D4();
int __cdecl sub_4C69E5(int a1, int a2, int a3, int a4, unsigned __int8* a5, unsigned __int8* a6, int a7);
int __cdecl sub_4C6C55(int* a1, int* a2, unsigned __int8* a3, unsigned __int8* a4, int a5);
int __cdecl sub_4C6F17(int a1, int a2, int a3, int a4);
int __cdecl sub_4C7C97(int a1, int a2, int a3, int a4);
int __cdecl sub_4C8B6F(int a1, int a2, int a3);
void sub_4C9C86();
void sub_4C9CAC();
void sub_4C9E0D();
int sub_4CA10B();
int sub_4CA390();
void sub_4CA3E3();
int sub_4CA3FA();
int sub_4CA4AE();
int sub_4CA521();
char __cdecl sub_4CA544(int a1);
void __cdecl sub_4CA920(int a1);
int __cdecl sub_4CB906(int a1);
// int unknown_libname_2(void); weak
int sub_4CE0B4();
char __cdecl sub_4CE0F0(int a1);
int* __cdecl sub_4CE150(int* a1);
int __cdecl sub_4CE2D1(int* a1);
int* __cdecl sub_4CE676(int* a1);
int __cdecl sub_4CE7F9(int* a1);
int __cdecl sub_4CEC80(int* a1);
int* __cdecl sub_4CEF4E(int* a1);
int __cdecl sub_4CF0C8(int* a1);
void sub_4CF4A7();
int __cdecl sub_4CF4AC(int a1);
int __cdecl sub_4CF520(int a1, int a2, int a3, int a4, int a5, int a6);
int __cdecl sub_4DF865(_DWORD* a1);
int __cdecl sub_4DFAAA(int a1);
_DWORD* sub_4E3649();
void sub_4E3880();
int sub_4E3A8F();
char sub_4E3C63();
int __cdecl sub_4E3DC0(float* a1, const void* a2, const void* a3);
int __cdecl sub_4E3FB2(int a1, int a2, int a3, int a4);
int __cdecl sub_4E420C(float* a1, int a2, int a3, int a4, int a5);
int __cdecl sub_4E4A17(int a1, int a2, int a3, int a4);
int __cdecl sub_4E4DFD(int a1, int a2);
_DWORD* __cdecl sub_4E535F(_DWORD* a1);
int __cdecl sub_4E541F(_DWORD* a1, int a2, int a3, int a4);
_DWORD* __cdecl sub_4E5521(_DWORD* a1);
int __cdecl sub_4E55D5(int a1, int a2, int a3, int a4);
int __cdecl sub_4E5871(int a1);
int __cdecl sub_4E5A50(int a1);
int __cdecl sub_4E5D98(int a1);
int __cdecl sub_4E6193(int a1);
int __cdecl sub_4E62F3(int a1);
int __cdecl sub_4E6992(int a1);
int __cdecl sub_4E6DF8(_DWORD* a1);
_DWORD* __cdecl sub_4E6E6E(int* a1);
double __cdecl sub_4E7200(int a1, int a2, _DWORD* a3, _DWORD* a4);
float* __cdecl sub_4E746D(int a1, float* a2, float* a3, void(__cdecl** a4)(float*, int, int, int), _DWORD* a5);
int __cdecl sub_4E767A(int a1, int a2, float* a3, int a4, _DWORD* a5, int* a6, int* a7, float* a8);
DWORD __cdecl sub_4E8426(int a1, __int64 a2);
int __cdecl sub_4EAF77(int a1);
int __cdecl sub_4EBBD8(int a1, int a2, int a3);
int __cdecl sub_4EBC66(_DWORD* a1);
void sub_4EBDD9();
int __cdecl sub_4EBDF0(int a1, _DWORD* a2, float* a3);
void __cdecl sub_4EBFCE(int a1, int a2, int a3);
_DWORD* __cdecl sub_4EC182(int a1);
int sub_4EC2D1();
int __cdecl sub_4EC2E0(int); // weak
int __cdecl sub_4EC315(int); // weak
void __cdecl sub_4EC55A(int a1);
int __cdecl sub_4ECA1E(int); // weak
int* __cdecl sub_4ECD4B(int a1);
void __cdecl sub_4ECE93(_DWORD* a1, int a2, int a3, float* a4);
int __cdecl sub_4ECF3D(int a1);
_DWORD* __cdecl sub_4ED41F(int* a1);
int __cdecl sub_4ED731(int a1);
_DWORD* __cdecl sub_4EDC02(int* a1);
int __cdecl sub_4EDF13(int a1);
int __cdecl sub_4EDFBF(int, int, float, int); // idb
void __cdecl sub_4EE0CF(int a1, int a2, int a3, int a4);
int __cdecl sub_4EE53D(int a1);
_DWORD* __cdecl sub_4EE612(int a1);
int __cdecl sub_4EE700(int a1);
int __cdecl sub_4EE7B1(int a1);
__int16 __cdecl sub_4EEA39(int a1, int a2, int a3);
int __cdecl sub_4EF08B(_DWORD* a1);
DWORD __cdecl sub_4EF182(int* a1);
int __cdecl sub_4EF22D(int a1, int a2, int a3, int a4);
int __cdecl sub_4EFD9C(int* a1);
int __cdecl sub_4EFF69(_DWORD* a1);
// int __cdecl _fputchar_3(int Character);
int __cdecl sub_4F0684(_DWORD* a1);
int __cdecl sub_4F0754(int a1, int a2, int a3, int a4);
int __cdecl sub_4F1035(_DWORD* a1);
void __cdecl sub_4F14CA(int a1);
void __cdecl sub_4F1545(int a1);
void __cdecl sub_4F15C0(int a1);
void __cdecl sub_4F163B(int a1);
void __cdecl sub_4F16B6(int a1);
void __cdecl sub_4F1731(int a1);
_DWORD* __cdecl sub_4F17AC(_DWORD* a1, int a2, int a3);
_DWORD* __cdecl sub_4F18B3(_DWORD* a1, int a2, int a3);
_DWORD* __cdecl sub_4F19C3(_DWORD* a1, int a2, int a3);
_DWORD* __cdecl sub_4F1AD3(_DWORD* a1, int a2, int a3);
_DWORD* __cdecl sub_4F1BE3(_DWORD* a1, int a2, int a3);
int __cdecl sub_4F1CEA(_DWORD* a1, int a2, int a3, int a4);
_DWORD* __cdecl sub_4F1E56(int a1);
_DWORD* __cdecl sub_4F1EB2(int a1);
_DWORD* __cdecl sub_4F1F0E(int a1);
_DWORD* __cdecl sub_4F1F6A(int a1);
_DWORD* __cdecl sub_4F1FC6(int a1);
_DWORD* __cdecl sub_4F2022(int a1);
int __cdecl sub_4F2080(int, int, float, float, int, int); // idb
_DWORD* __cdecl sub_4F2287(int a1);
int __cdecl sub_4F2ED4(int a1, float* a2);
__int16 __cdecl sub_4F3466(int a1, int a2);
int __cdecl sub_4F43B5(int a1, int a2, int a3, int a4);
_DWORD* __cdecl sub_4F5E1A(int a1);
int __cdecl sub_4F7F35(int a1, int a2, int a3);
_DWORD* __cdecl sub_4F7F8C(int a1);
DWORD __cdecl sub_4F7FDD(int a1, int a2, int a3);
_DWORD* __cdecl sub_4F816B(int a1);
int __cdecl sub_4F8E34(int a1);
_DWORD* __cdecl sub_4F9335(int* a1);
_DWORD* __cdecl sub_4F9624(int a1, int a2, _DWORD* a3, int a4);
int __cdecl sub_4F9C2C(int a1);
int __cdecl sub_4F9D75(int a1, const void* a2, int a3, int a4, _DWORD* a5, _DWORD* a6, int a7);
int __cdecl sub_4F9E7D(int, int, int, int); // weak
int __cdecl sub_4FA0C7(int a1, float* a2, int a3, int a4, int a5);
int __cdecl sub_4FA1ED(int, int, int, float); // idb
int __cdecl sub_4FA5E8(int a1, int* a2);
int __cdecl sub_4FAE55(int a1);
void __cdecl sub_4FB025(int a1);
__int16 __cdecl sub_4FB899(int a1);
void __cdecl sub_4FBAA5(int a1, int a2, int a3, int a4);
int __cdecl sub_4FC1C2(int a1);
int __cdecl sub_4FC5EC(int a1);
float* __cdecl sub_4FC880(int a1);
int __cdecl sub_4FC932(float* a1);
int __cdecl sub_4FCB82(float* a1);
int __cdecl sub_4FCD23(float* a1);
float* __cdecl sub_4FCF2D(float* a1);
float* __cdecl sub_4FD11D(int a1);
unsigned __int8* __cdecl sub_4FD1CD(int a1);
float* __cdecl sub_4FD382(float* a1);
float* __cdecl sub_4FD5F9(float* a1, int a2, float* a3);
_DWORD* __cdecl sub_4FD986(int a1);
int sub_4FDB7E();
_DWORD* __cdecl sub_4FDC2C(_DWORD* a1, _DWORD* a2, float* a3);
int sub_4FDC77();
char* init_LoadWeaponSettings();
__int16 __cdecl sub_4FF537(int a1, FILE* Stream, char a3);
int __cdecl sub_4FF6CE(int, int, float, int, int, float); // idb
int __cdecl sub_4FF8C2(int, int, int, float, float, int, int); // idb
float* __cdecl sub_4FFBD9(int a1, int a2, float a3, float a4, float a5, int a6, int a7);
int __cdecl sub_4FFDB1(int, int, int, float, int); // idb
int __cdecl sub_4FFFF2(float* a1, int a2, float a3, float a4, __int16 a5, int a6, int a7);
float* __cdecl sub_5000BE(float* a1, float* a2);
float* __cdecl sub_500265(float* a1, float* a2);
int __cdecl sub_500450(_DWORD* a1, _DWORD* a2);
float* __cdecl sub_500598(float* a1, float* a2);
float* __cdecl sub_5008EA(float* a1, float* a2);
float* __cdecl sub_500C3C(float* a1);
void __cdecl sub_500C83(float* a1, int* a2, float* a3);
void __cdecl sub_500FC7(float* a1, int* a2, float* a3);
void __cdecl sub_5013BA(float* a1, int* a2, float* a3);
void __cdecl sub_5017A0(float* a1, int* a2, float* a3);
void __cdecl sub_501B72(float* a1, int* a2, float* a3);
float* __cdecl sub_501D67(int a1);
int __cdecl sub_501DF5(int a1);
int __cdecl sub_501FD8(_DWORD* a1, int* a2, float* a3, int a4);
int __cdecl sub_502498(const void* a1);
_DWORD* __cdecl sub_5024E7(_DWORD* a1, _DWORD* a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, unsigned __int8 a8);
int __cdecl sub_502625(int a1);
int __cdecl sub_50280C(float* a1, float* a2, int* a3);
float* __cdecl sub_502A58(float* a1);
int __cdecl sub_502AA5(float* a1, float* a2, int* a3);
int __cdecl sub_502DD9(float* a1, int* a2);
void __cdecl sub_502E13(float* a1);
float* __cdecl sub_5031BC(int a1, int a2, float a3);
float* __cdecl sub_50332E(int a1, int a2, float a3);
void __cdecl sub_503409(int a1, int a2, float a3);
int __cdecl sub_5034A4(int, int, float); // idb
_DWORD* __cdecl sub_503643(_DWORD* a1);
_DWORD* __cdecl sub_50377A(int a1, _DWORD* a2);
int __cdecl sub_50378B(int, int, float); // idb
int __cdecl sub_5039A5(int, int, float, int); // idb
int __cdecl sub_503BFE(int* a1, float* a2, float a3);
int __cdecl sub_503CEF(int, int, float); // idb
_DWORD* __cdecl sub_503E49(_DWORD* a1, _DWORD* a2);
float* __cdecl sub_503FF2(float* a1);
_DWORD* __cdecl sub_504114(_DWORD* a1, _DWORD* a2);
int __cdecl sub_5042CF(int, int, float, int, int); // idb
float* __cdecl sub_504639(int a1);
void __cdecl sub_504710(float* a1, float* a2, int a3, float* a4, float* a5);
int __cdecl sub_504ADD(int a1, _DWORD* a2);
float* __cdecl sub_504C3D(int a1);
int __cdecl sub_504CAB(int* a1);
int __cdecl sub_504D68(const void* a1, _DWORD* a2);
int* __cdecl sub_504E1B(int a1, int* a2, int a3, void* a4);
int __cdecl sub_505292(int a1, int* a2, const void* a3);
char __cdecl sub_505458(int a1, _DWORD* a2);
int __cdecl sub_50568D(int a1);
int __cdecl sub_505ABA(int* a1, int* a2);
int __cdecl sub_505B6F(int, int, float); // idb
int __cdecl sub_505D7C(int, int, float); // idb
int __cdecl sub_505F65(int, int, float); // idb
int __cdecl sub_506307(int, int, float); // idb
int __cdecl sub_5066A9(int, int, float); // idb
int __cdecl sub_506AB0(int, int, float); // idb
int __cdecl sub_506C12(int, int, float); // idb
int __cdecl sub_506F27(int* a1, int* a2, float a3);
int __cdecl sub_507151(int* a1);
int __cdecl sub_50716F(int a1);
int __cdecl sub_507183(int a1);
_DWORD* __cdecl sub_5072B7(_DWORD* a1, int a2, char a3, char a4, char a5);
float* __cdecl sub_5073F0(float* a1);
int __cdecl sub_50745F(int a1, int a2);
unsigned __int8* __cdecl sub_50789B(_DWORD* a1, int a2);
int __cdecl sub_507A48(int a1);
int __cdecl sub_507ADD(const void* a1);
float* __cdecl sub_507BDD(int a1, int a2, float a3);
int __cdecl sub_507DAE(int a1);
int __cdecl sub_508D2A(int a1);
int __cdecl sub_508DF8(int, int, int, int, int, float); // idb
int __cdecl sub_508EE6(int a1);
int __cdecl sub_5090F6(int a1, _DWORD* a2, _DWORD* a3, int a4, int a5);
float* __cdecl sub_509229(int a1, int a2, float* a3, float* a4);
float* __cdecl sub_509557(int a1, int a2, float* a3, float* a4);
float* __cdecl sub_50972B(int a1, int a2, float* a3, float* a4);
int __cdecl sub_50A110(int a1);
int __cdecl sub_50A66B(int a1);
int __cdecl sub_50A92F(int a1, int a2, int a3);
_DWORD* __cdecl sub_50AB1C(int* a1);
int __cdecl sub_50AC84(int a1);
void __cdecl sub_50ACB1(int a1, int a2, FILE* Stream, int a4);
int __cdecl sub_50AE9B(int a1);
int __cdecl sub_50B8BB(int a1);
void __cdecl sub_50BC13(int a1, int a2, FILE* Stream, int a4);
void __cdecl sub_50BEBB(float* a1, float* a2, int a3);
int __cdecl sub_50C135(_BYTE* a1);
float* __cdecl sub_50C37D(float* a1);
float* __cdecl sub_50C3C4(float* a1, float* a2);
int __cdecl sub_50C5A4(int a1);
int __cdecl sub_50C941(int a1);
void __cdecl sub_50C962(int a1, int a2, int a3, float* a4);
void __cdecl sub_50CAED(int a1, float a2);
int __cdecl sub_50CD3C(int a1);
void __cdecl sub_50D065(int a1, int a2, int a3);
_DWORD* __cdecl sub_50D258(_DWORD* a1, int a2);
// int __cdecl _fputchar_4(int Character);
float* __cdecl sub_50D33F(float* a1);
int __cdecl sub_50D403(const void* a1);
_DWORD* __cdecl sub_50D44E(int a1, int a2, float a3);
void __cdecl sub_50D6A5(int* a1);
float* __cdecl sub_50DA1C(int a1);
_DWORD* __cdecl sub_50DA6F(_DWORD* a1, _DWORD* a2);
void __cdecl sub_50DC2E(int a1, int a2, int a3);
int __cdecl sub_50E59E(int, int, FILE* Stream, int); // idb
float* __cdecl sub_50E7C0(int a1);
int __cdecl sub_50E7E9(unsigned __int8* a1);
int __cdecl sub_50EA55(int a1);
int __cdecl sub_50F41C(int a1);
int __cdecl sub_50FDBE(int a1);
int __cdecl sub_5100CC(int a1);
void __cdecl sub_5100E1(int a1, int a2, FILE* Stream, int a4);
char* __cdecl sub_5102AA(int a1, int a2, FILE* Stream, int a4);
int __cdecl sub_51060B(int* a1, float* a2, int a3);
int __cdecl sub_510799(float* a1);
float* __cdecl sub_510898(float* a1, float* a2);
void __cdecl sub_510AB4(int a1, int a2, int a3, int a4);
int __cdecl sub_510E39(_DWORD* a1, float* a2);
int __cdecl sub_510F3D(int a1);
int __cdecl sub_5115D0(int* a1);
int __cdecl sub_51168A(int a1);
_DWORD* __cdecl sub_5116A7(int a1, int a2, int a3, float* a4);
_DWORD* __cdecl sub_51188E(int a1);
int __cdecl sub_511C07(int a1);
void __cdecl sub_512313(int a1, int a2, int a3, int a4);
int __cdecl sub_512529(int a1);
float* __cdecl sub_512631(float* a1, float* a2, int a3);
float* __cdecl sub_5128F3(int a1);
int __cdecl sub_512E1C(int* a1);
int __cdecl sub_513086(int a1);
void __cdecl sub_5130A3(int a1, int a2, _DWORD* a3, _DWORD* a4);
_DWORD* __cdecl sub_513242(_DWORD* a1);
int __cdecl sub_5133D3(int a1, int a2, int a3);
int __cdecl sub_51447A(int a1, int a2, _DWORD* a3, int a4);
__int16 __cdecl sub_5145A5(int a1);
float* __cdecl sub_514680(float* a1, int a2, float* a3);
int __cdecl sub_5147E0(int a1, int a2, int a3, int a4);
_DWORD* __cdecl sub_514934(int a1, const void* a2, int a3, int a4);
int __cdecl sub_5149AD(int a1, int a2, int a3);
_DWORD* __cdecl sub_514B6C(int a1, const void* a2, int a3, int a4, int a5);
void __cdecl sub_514BF1(int a1, int a2, int a3);
_DWORD* __cdecl sub_514FDE(int a1, const void* a2, int a3, int a4, int a5);
int* __cdecl sub_515063(int a1, int* a2);
int __cdecl sub_5151F9(int a1);
int __cdecl sub_5152D1(int a1);
int __cdecl sub_5153AC(int a1);
float* __cdecl sub_515480(int a1, int a2, int a3, float a4, int a5, int a6, char a7, char a8, char a9, char a10);
int __cdecl sub_5156A2(float* a1, int* a2);
int __cdecl sub_5159E1(int* a1);
int __cdecl sub_515BCB(int a1);
int __cdecl sub_5165B1(int a1);
void __cdecl sub_5168B0(int a1);
int __cdecl sub_516A6C(int a1);
void __cdecl sub_516CE4(int a1, int a2, int a3, int a4);
char __cdecl sub_5172B3(int a1);
int __cdecl sub_5174C6(_DWORD* a1);
int __cdecl sub_5175D2(int a1);
int __cdecl sub_5176EB(int a1);
int __cdecl sub_517717(int a1, int* a2);
void __cdecl sub_51786F(float* a1);
void __cdecl sub_5178B7(int a1);
_DWORD* __cdecl sub_51793A(int a1, float a2, int a3, float a4, float a5, float a6, float a7);
float* __cdecl sub_517FF0(int a1, float* a2, float* a3);
void __cdecl sub_51818F(int a1, float* a2, float* a3);
void __cdecl sub_5186E5(int a1);
void __cdecl sub_518F9B(int a1);
void __cdecl sub_519209(int a1, int a2, int a3, _DWORD* a4);
void __cdecl sub_519878(int a1, int a2, int a3, float a4);
int __cdecl sub_519E7C(_DWORD* a1);
int __cdecl sub_51A225(int a1);
BOOL __cdecl sub_51A486(int xLeft, int yTop);
_DWORD* __cdecl sub_51B3E0(int a1, int a2, int a3);
void __cdecl sub_51B44E(LPVOID* lpMem);
int __cdecl sub_51B49F(int a1, int a2);
int __cdecl sub_51B4D1(int a1, int a2);
unsigned int __cdecl sub_51B4E8(int* a1, const void* a2);
unsigned int __cdecl sub_51B503(_DWORD* a1, const void* a2, int a3);
void* __cdecl sub_51B58F(int a1);
unsigned int __cdecl sub_51B5C9(int a1, const void* a2, int a3);
_DWORD* __cdecl sub_51B5FF(_DWORD* a1, int a2);
_DWORD* __cdecl sub_51B65E(_DWORD* a1, int a2);
unsigned int __cdecl sub_51B683(int a1, const void* a2, int a3);
int __cdecl sub_51B6D1(_DWORD* a1, int a2, int(__cdecl* a3)(int, int), int a4, int a5);
int __cdecl sub_51B774(int* a1, void(__cdecl* a2)(int, int), int a3);
int __cdecl sub_51B7B5(int a1, int a2, int a3, int a4, int(__cdecl* a5)(int, int));
int __cdecl sub_51B804(int a1, int a2, int a3, int a4, int(__cdecl* a5)(int, int));
int __cdecl sub_51B880(int a1, char* cp, int hostshort, int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int __cdecl sub_51BAC5(SOCKET* a1);
int __cdecl sub_51BAF0(SOCKET* a1);
DWORD __cdecl sub_51BBFA(int a1);
DWORD __cdecl sub_51BCB4(void* a1);
int __cdecl sub_51BCD5(SOCKET* lpMem);
int __cdecl sub_51BD57(int, char* cp, u_short hostshort); // idb
int __cdecl sub_51BD75(char* cp, u_short hostshort, int, int); // idb
char* __cdecl sub_51BE10(_BYTE* a1, int a2, char* a3);
char __cdecl sub_51BF13(unsigned __int8 a1);
int __cdecl sub_51BF8D(int a1, int a2, int a3, int a4);
char __cdecl sub_51C1F6(char* a1, char* a2);
int __cdecl sub_51C218(int, char* Str, struct sockaddr* to); // idb
int __cdecl sub_51C51C(char* Str, int); // idb
int __cdecl sub_51C655(int, struct sockaddr* to, char* buf); // idb
unsigned int __cdecl sub_51C713(int a1, struct sockaddr* to, char* buf);
unsigned int __cdecl sub_51C77C(int a1, struct sockaddr* to, char* buf, int a4);
unsigned int __cdecl sub_51C8DE(int a1, struct sockaddr* to, char* buf);
unsigned int __cdecl sub_51C947(int a1, struct sockaddr* to, char* buf);
unsigned int __cdecl sub_51C9B0(int a1, struct sockaddr* to, char* buf);
unsigned int __cdecl sub_51CA19(int a1, struct sockaddr* to, char* buf, int a4);
int __cdecl sub_51CA74(int, struct sockaddr* to, char* buf, int); // idb
DWORD __cdecl sub_51CBA5(int a1, int a2);
_DWORD* __cdecl sub_51CC83(int a1, int a2, int a3, int a4, int a5, int a6);
_DWORD* __cdecl sub_51CF60(_DWORD* a1);
// unsigned int __usercall sub_51CFA0(int a1, int *a2, char *a3, unsigned int a4);
// __int16 __usercall sub_51D09F(int a1, int a2, int *a3);
// __int16 __usercall sub_51D13A(int a1, int *a2, int a3);
int __cdecl sub_51DFE3(int a1, int a2, unsigned int a3);
int __cdecl sub_51E083(int a1, int a2, unsigned int a3);
unsigned int __cdecl sub_51E0FC(void* a1, const void* a2, unsigned int a3);
// __int16 __usercall sub_51E11C(int a1, char *a2, char a3, unsigned int a4);
unsigned int __cdecl sub_51E148(int a1, int a2);
DWORD sub_51E1E0();
int sub_51E1FA();
int sub_51E218();
INT_PTR __cdecl sub_51E270(HINSTANCE hInstance, int a2);
INT_PTR __stdcall DialogFunc(HWND, UINT, WPARAM, LPARAM); // idb
unsigned int __cdecl sub_51EEEE(HWND hDlg);
BOOL __cdecl sub_51F32A(HWND hDlg);
int sub_51F63F();
int __cdecl sub_51F649(int a1);
int __stdcall sub_51F744(int a1, int a2, char a3, int a4);
INT_PTR __stdcall sub_51FF63(HWND, UINT, WPARAM, LPARAM); // idb
int sub_520111();
INT_PTR __stdcall sub_5205B2(HWND, UINT, WPARAM, LPARAM); // idb
int sub_52071E();
FakeDP* __thiscall sub_520820(FakeDP* this, char a2);
bool __cdecl sub_520850(const void* a1, const void* a2);
int sub_520870();
void sub_52097E();
int sub_520ACA();
int sub_520AD4();
int __cdecl sub_520E43(_DWORD* a1, int a2, int a3, unsigned int a4);
int __cdecl sub_5210FE(int* a1);
int __cdecl sub_5211D8(const char* a1);
int sub_5212DE();
char* __cdecl sub_521305(int a1);
int __cdecl online_maybeWriteTextChat(const char* a1);
int sub_52140C();
int __cdecl sub_5214CA(int a1);
int __cdecl sub_521552(unsigned int* a1);
int sub_5215A6();
int __cdecl sub_5218AD(int a1);
int __cdecl sub_521CF3(unsigned int a1);
int sub_521D56();
BOOL __cdecl sub_521DA4(int a1);
void __cdecl sub_521DBE(int a1);
int __cdecl sub_521F00(int a1, int a2);
void __cdecl sub_52292A(int a1, int a2);
double __cdecl sub_5229F0(int a1, float* a2, float* a3, unsigned int a4);
int __cdecl sub_522BAD(unsigned int a1, int a2, int a3);
double __cdecl sub_522DEF(int a1, int a2);
int __cdecl sub_522FD8(int a1, int a2);
// float __cdecl sqrtf(float X);
int sub_52354B();
int sub_523577();
DWORD sub_52358F();
DWORD sub_5235C0();
int sub_5236FF();
void sub_523808();
int (*__cdecl sub_5239B8(int (*a1)()))();
int (*__cdecl sub_5239C5(int (*a1)()))();
unsigned int __cdecl sub_523A8A(BYTE* a1);
unsigned int __cdecl sub_523AFF(BYTE* a1);
int sub_523CD4();
int __cdecl sub_523D5C(int a1);
void sub_523E44();
unsigned int sub_524062();
void sub_524091();
void sub_5240DD();
void sub_5242F0();
int sub_524340();
unsigned int sub_52438F();
void __cdecl sub_5243C7(int a1);
int __cdecl sub_524400(int* a1);
int* __cdecl sub_525DDB(int a1);
int __cdecl sub_526436(__int16 a1);
int __cdecl sub_5269E0(_DWORD* a1);
int __cdecl sub_5269FB(_DWORD* a1);
int __cdecl sub_526E72(int a1);
__int16 __cdecl sub_5271BB(int a1, __int16 a2, FILE* a3, int a4);
_DWORD* __cdecl sub_5273DC(_DWORD* a1);
int __cdecl sub_5274F3(int a1, int a2, int a3, _DWORD* a4);
void __cdecl sub_527AF4(int a1, int a2, int a3, int a4);
void __cdecl sub_528355(_DWORD* a1, int a2, int a3, _DWORD* a4);
int __cdecl sub_5285EB(int a1);
int __cdecl sub_52865C(int a1, int a2);
int __cdecl sub_528C1C(int a1);
int __cdecl sub_528C6B(int a1);
int __cdecl sub_528CBC(int a1, int a2);
int __cdecl sub_528CE5(int a1, int a2);
void __cdecl online_PlayerFluffedPlayer(int a1, int a2);
int __cdecl sub_528EB0(int a1);
void __cdecl sub_528F60(_DWORD* a1, int a2);
int __cdecl sub_528FBD(int a1, int a2, int a3, int a4, int a5);
_DWORD* __cdecl sub_5290DE(_DWORD* a1);
int sub_5291A0();
int sub_5291FB();
DWORD __stdcall StartAddress(LPVOID lpThreadParameter); // idb
int __cdecl sub_5293FE(int a1, int* a2, unsigned int a3, int a4, unsigned int a5);
int __cdecl sub_52983C(int* a1, unsigned int a2);
int __cdecl sub_529B4B(_DWORD* a1, int a2);
int __cdecl sub_529BB6(int, FILE*); // idb
int __cdecl sub_529D71(int a1, __int16 a2);
int __cdecl sub_529D92(int a1, _DWORD* a2);
int __cdecl sub_529EFC(int* a1, int* a2);
int __cdecl sub_529F89(__int16 a1);
int __cdecl sub_529F9A(int a1);
int __cdecl sub_529FE4(int a1);
int __cdecl sub_52A00A(int a1);
int __cdecl sub_52A03C(int a1, _DWORD* a2);
int __cdecl sub_52A4C2(int a1);
int __cdecl sub_52A83F(int a1);
int __cdecl sub_52A880(unsigned int a1, int a2, int a3);
int __cdecl sub_52A908(int a1);
int __cdecl sub_52A985(int a1);
int sub_52AA53();
int __cdecl sub_52AB78(_DWORD* a1);
int __cdecl sub_52B462(void** a1, size_t* a2, _DWORD* a3);
int __cdecl sub_52B65C(int a1, int a2, int a3, const void* a4, int a5);
int __cdecl sub_52B7C0(int a1, int a2, int a3);
int __cdecl sub_52B856(int a1, int a2);
int __cdecl sub_52B8EE(int a1, __int16 a2, int* a3, int* a4);
int __cdecl sub_52B9B4(int a1, int a2, int a3);
int __cdecl sub_52BA4A(int a1);
int __cdecl sub_52BAD5(int a1, int a2, int a3);
int __cdecl sub_52BC50(int a1, int a2);
int sub_52BCE5();
int __cdecl sub_52BD70(int a1, int a2);
int sub_52BE05();
int sub_52BE83();
int __cdecl sub_52BF87(int a1, int a2);
void __cdecl sub_52C025(int a1, _DWORD* a2, int a3, const void* a4);
int __cdecl sub_52C0FC(_DWORD* a1, _DWORD* a2, int a3, _DWORD* a4, unsigned __int16 a5);
int __cdecl sub_52C211(int a1);
int sub_52C2E3();
int __cdecl sub_52C36C(__int16 a1);
int sub_52C3E2();
int __cdecl sub_52C45C(int a1);
int __cdecl sub_52C49A(int a1);
int sub_52C4B0();
void __cdecl sub_52C4C5(int a1, int a2);
int* __cdecl sub_52C5E8(int a1);
int* __cdecl sub_52C622(int a1);
void __cdecl sub_52C642(int a1);
int sub_52C68F();
int __cdecl sub_52C6A2(int a1);
void __cdecl sub_52C6C3(int a1);
int __cdecl sub_52C94A(int a1);
int sub_52C95B();
int sub_52C9C4();
// u_short __stdcall ntohs(u_short netshort);
// int __stdcall getsockname(SOCKET s, struct sockaddr *name, int *namelen);
// int __stdcall bind(SOCKET s, const struct sockaddr *name, int namelen);
// u_long __stdcall htonl(u_long hostlong);
// SOCKET __stdcall socket(int af, int type, int protocol);
// int __stdcall recvfrom(SOCKET s, char *buf, int len, int flags, struct sockaddr *from, int *fromlen);
// int __stdcall select(int nfds, fd_set *readfds, fd_set *writefds, fd_set *exceptfds, const struct timeval *timeout);
// int __stdcall closesocket(SOCKET s);
// struct hostent *__stdcall gethostbyname(const char *name);
// unsigned int __stdcall inet_addr(const char *cp);
// u_short __stdcall htons(u_short hostshort);
// int __stdcall sendto(SOCKET s, const char *buf, int len, int flags, const struct sockaddr *to, int tolen);
// int __stdcall WSAStartup(WORD wVersionRequested, LPWSADATA lpWSAData);
// int __stdcall WSACleanup();
float* __stdcall sub_52CA80(float* a1, float* a2, float* a3);
float* __stdcall sub_52CB4C(float* a1, float* a2, float* a3);
char* __stdcall sub_52CBAB(char* a1, char* a2, char* a3);
int startupDX3D();
int sub_52CD67();
int __thiscall sub_52DE94(_DWORD* this);
int sub_52DF04();
int __thiscall sub_52DF09(_DWORD* this);
int __thiscall sub_52DF46(_DWORD* this, _DWORD* a2);
int __thiscall sub_52DFA8(_DWORD* this);
_DWORD* __thiscall sub_52DFE5(_DWORD* this, _DWORD* a2);
_DWORD* __thiscall sub_52DFF7(_DWORD* this, _DWORD* a2);
int __thiscall sub_52E01F(_DWORD* this);
void nullsub_1();
int sub_52E05D();
int sub_52E136();
int __cdecl sub_52E22D(int, int, void* Src, void*, int); // idb
int __cdecl sub_52E2C6(int, int, int, int, int, int, int, int, void* Src, int); // idb
int __cdecl sub_52E36B(_DWORD* a1, _DWORD* a2, _DWORD* a3, _DWORD* a4, int a5);
int __cdecl sub_52E504(BOOL* a1, _DWORD* a2, _DWORD* a3, _DWORD* a4, _DWORD* a5, BOOL a6, BOOL a7, int a8);
int __cdecl sub_52E816(_DWORD* a1);
int __cdecl sub_52EA67(_DWORD* a1);
int __cdecl sub_52EB65(_DWORD* a1, int a2, _DWORD* a3);
int __cdecl sub_52EBA0(int* a1);
int __cdecl sub_52ED07(int* a1);
int __stdcall sub_52EDE9(int a1, int a2, int a3, int a4, char a5, int a6, int a7, int a8);
int __thiscall sub_52F07B(_DWORD* this);
int __thiscall sub_52F097(_DWORD* this, int a2);
int __thiscall sub_52F0C8(_DWORD* this, int a2);
int __thiscall sub_52F0E6(_DWORD* this, _DWORD* a2, _DWORD* a3);
int __thiscall sub_52F12F(_DWORD* this, int a2, int a3, int a4, int a5);
int __thiscall sub_52F173(_DWORD* this, const void* a2, int a3, int a4, char a5, int a6, int a7, int a8);
void __thiscall sub_52F208(_DWORD* this);
void __thiscall sub_52F22F(_DWORD* this);
_DWORD* __thiscall sub_52F280(_DWORD* this, _DWORD* a2);
int __thiscall sub_52F31A(_DWORD* this);
_DWORD* __thiscall sub_52F321(_DWORD* this, _DWORD* a2, _DWORD* a3, _DWORD* a4, _DWORD* a5, _DWORD* a6);
int __thiscall sub_52F810(_DWORD* this);
int __thiscall sub_52F947(_DWORD* this);
// int __userpurge sub_52FA26(int a1, int a2, int a3, int a4, const void *a5, _DWORD *a6);
int __stdcall sub_52FB56(int a1);
int __stdcall sub_52FB63(int a1);
// int __userpurge sub_52FB86(int a1, int a2, int a3, int a4, float a5, float a6, int a7, LPCSTR lpchText);
int __stdcall sub_52FDEB(int a1);
int __stdcall sub_52FE08(int a1);
int __stdcall sub_52FE2D(int a1);
int __stdcall sub_52FE4A(int a1);
int __stdcall sub_52FE6F(int a1);
int __stdcall sub_52FE94(int a1, unsigned int a2);
int __stdcall sub_52FECB(int a1);
int __stdcall sub_52FED5(int a1);
int __stdcall sub_52FEDF(int a1);
// int __userpurge sub_52FF6B(int a1, _ThrowInfo *a2, int a3, int *a4, int a5, int a6, int a7);
int __thiscall sub_530431(void** this, HDC hdcDest, HDC hdcSrc);
// int __userpurge sub_530830(_ThrowInfo *a1, int a2, int a3, int a4, int a5, int a6);
int __stdcall sub_5308F7(int a1, int a2);
int __stdcall sub_53090A(int, float); // idb
int __stdcall sub_53091D(int a1, int a2);
int __thiscall sub_530930(int this);
int __thiscall sub_530945(int this);
int __thiscall someSetViewport(_DWORD* this);
void __thiscall sub_530C67(int this, unsigned __int64 a2);
void __thiscall sub_530DEF(int this);
int __thiscall sub_530FE1(_DWORD* this);
int __thiscall sub_531055(_DWORD* this, int a2);
int __thiscall sub_5311A4(int this);
int __thiscall sub_531300(int this);
int __thiscall sub_53153A(int this);
int __stdcall sub_531691(int a1, int a2, _DWORD* a3);
int __thiscall sub_5316A7(_DWORD* this, int a2, unsigned int a3);
int __stdcall sub_5317BC(int a1, _DWORD* a2, _DWORD* a3);
int __stdcall sub_5317DF(int a1);
int __stdcall sub_5317E9(_DWORD* a1, _DWORD* a2, _DWORD* a3, _DWORD* a4, _DWORD* a5);
int __stdcall sub_531825(int a1, _DWORD* a2, _DWORD* a3);
int __stdcall sub_531848(int a1);
int __stdcall sub_53187D(int a1);
int __thiscall sub_531887(_DWORD* this);
_DWORD* __thiscall sub_5318D6(_DWORD* this, int a2);
_DWORD* __thiscall sub_531B3F(_DWORD* this);
void __thiscall sub_531B55(int this);
BOOL __thiscall sub_531B94(_DWORD* this);
int __thiscall sub_531BA1(_DWORD* this);
int __thiscall sub_531BA8(_DWORD* this);
int __thiscall sub_531D4D(int this);
BOOL __thiscall sub_531EA5(_DWORD* this, unsigned int a2);
int __cdecl sub_53218B(_BYTE* a1, int a2, _BYTE* a3, int a4, _DWORD* a5);
int __thiscall sub_53220A(int this);
void __thiscall sub_53228E(int this, int a2, int a3, int a4, int a5);
int __thiscall sub_53240E(_DWORD* this);
int __thiscall sub_532427(_DWORD* this, int a2, int a3, int a4, int a5, int a6);
int __thiscall sub_5324E7(_DWORD* this);
int __thiscall sub_532509(int this, int a2, int a3);
_DWORD* __thiscall sub_5326B4(_DWORD* this, _DWORD* a2);
LRESULT __stdcall sub_53274E(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
int __thiscall sub_532767(int, int); // idb
int __stdcall sub_532D7B(int a1, _DWORD* a2);
int __thiscall sub_532DBD(_DWORD* this);
int __stdcall deadFunc(int a1, int a2);
int __thiscall sub_532DF5(int this);
int sub_532E75();
int sub_532E78();
unsigned int* __cdecl sub_5333FC(int a1, unsigned int* a2, int a3);
char __cdecl sub_53360E(int a1, _DWORD* a2);
int __cdecl sub_53369D(int a1, _DWORD* a2);
int __cdecl sub_5336D9(int a1, _DWORD* a2);
_BYTE* __cdecl sub_533714(_BYTE* a1, _DWORD* a2);
int __cdecl sub_533778(int a1, _DWORD* a2);
const void* __cdecl sub_5337B2(int a1, void* a2, _DWORD* a3);
_DWORD** __cdecl sub_533811(_DWORD** a1, int a2, int a3);
unsigned int* __cdecl sub_533857(int a1, unsigned int* a2, _DWORD* a3);
int __cdecl sub_5338B1(int a1, const void* a2, int a3);
unsigned int __cdecl sub_5338C7(_DWORD** a1, int a2, int a3);
unsigned int* __cdecl sub_53390A(int a1, unsigned int* a2, _DWORD* a3);
unsigned int __cdecl sub_5339A9(int a1, int* a2, int a3);
int __cdecl sub_533A02(__int16** a1, int a2, int a3);
unsigned int* __cdecl sub_533A90(int a1, unsigned int* a2, _DWORD* a3);
unsigned int __cdecl sub_533B21(int a1, int* a2, int a3);
int __cdecl sub_533B7F(__int16** a1, int a2, int a3);
unsigned int* __cdecl sub_533BFD(int a1, unsigned int* a2, _DWORD* a3);
int __cdecl sub_533C80(int a1, int* a2, int a3);
int __cdecl sub_533D07(_DWORD* a1, int a2, _DWORD* a3);
unsigned int* __cdecl sub_533DA4(int a1, unsigned int* a2, _DWORD* a3);
char __cdecl sub_533E18(int a1, int* a2, int a3);
_DWORD* __cdecl sub_533E61(_DWORD* a1, int a2, int a3);
unsigned int* __cdecl sub_533ECB(int a1, unsigned int* a2, _DWORD* a3);
unsigned int __cdecl sub_533F5C(int a1, unsigned int* a2, int a3);
int __cdecl sub_533FCA(__int16** a1, int a2, int a3);
unsigned int* __cdecl sub_534053(int a1, unsigned int* a2, _DWORD* a3);
unsigned int __cdecl sub_5340DB(int a1, int* a2, int a3);
int __cdecl sub_534134(__int16** a1, int a2, int a3);
int* __cdecl sub_5341AA(int a1, int* a2, _DWORD* a3);
unsigned int __cdecl sub_534235(int a1, int* a2, int a3);
int __cdecl sub_53429B(_WORD** a1, int a2, int a3);
unsigned int* __cdecl sub_53431E(int a1, unsigned int* a2, _DWORD* a3);
unsigned int __cdecl sub_534383(int a1, int* a2, unsigned int a3);
_DWORD* __cdecl sub_5343E4(_DWORD* a1, int a2, int a3);
int* __cdecl sub_53443C(int a1, int* a2, _DWORD* a3);
unsigned int __cdecl sub_534494(int a1, int* a2, unsigned int a3);
int __cdecl sub_5344CC(_DWORD* a1, int a2, int a3);
int* __cdecl sub_53450E(int a1, int* a2, _DWORD* a3);
int __cdecl sub_534575(int a1, int* a2, int a3);
int __cdecl sub_5345D9(_DWORD* a1, int a2, int a3);
_DWORD* __cdecl sub_534631(int a1, _DWORD* a2, _DWORD* a3);
_DWORD* __cdecl sub_53468F(int a1, int* a2, _DWORD* a3);
int __cdecl sub_5346D9(_DWORD* a1, int a2, int* a3);
unsigned int* __cdecl sub_534775(int a1, unsigned int* a2, _DWORD* a3);
unsigned int __cdecl sub_534803(int a1, unsigned int* a2, unsigned int a3);
int __cdecl sub_534879(_BYTE** a1, int a2, int a3);
unsigned int* __cdecl sub_5348FA(int a1, unsigned int* a2, _DWORD* a3);
unsigned int __cdecl sub_534960(int a1, unsigned int* a2, unsigned int a3);
int __cdecl sub_534993(unsigned __int8** a1, int a2, int a3);
unsigned int* __cdecl sub_5349F5(int a1, unsigned int* a2, _DWORD* a3);
unsigned int __cdecl sub_534A8D(int a1, int* a2, int a3);
int __cdecl sub_534AE6(_WORD** a1, int a2, int a3);
unsigned int* __cdecl sub_534B6C(int a1, unsigned int* a2, _DWORD* a3);
unsigned int __cdecl sub_534BCA(int a1, unsigned int* a2, int a3);
unsigned int __cdecl sub_534C02(_DWORD* a1, int a2, int a3);
unsigned int* __cdecl sub_534C49(int a1, unsigned int* a2, _DWORD* a3);
_DWORD* __cdecl sub_534CDD(int a1, _DWORD* a2);
void __cdecl sub_534DD2(unsigned int a1, unsigned int* a2, int a3);
unsigned int* __cdecl sub_534E59(int a1, unsigned int* a2);
void __cdecl sub_534F4B(unsigned __int8** a1, char* a2, int a3);
unsigned int* __cdecl sub_534FD7(int a1, unsigned int* a2, _DWORD* a3);
void __cdecl sub_535085(unsigned int a1, unsigned int* a2, int a3);
int __cdecl sub_535107(_WORD** a1, char* a2, int a3);
int __cdecl sub_5351A9(int a1, int a2);
int __cdecl sub_5351DB(_BYTE* a1, int a2, int a3, int a4);
float* __cdecl sub_535680(int a1, float* a2);
float* __cdecl sub_5356B4(float* a1, float* a2);
float* __cdecl sub_53575B(float* a1, float* a2, unsigned __int16* a3, int a4);
__int64 __cdecl sub_5357F5(int a1, int a2);
// int __usercall sub_53582C(int a1, int a2, _BYTE *a3, _WORD *a4);
unsigned __int16** __cdecl sub_53586B(unsigned __int16* a1, unsigned __int16** a2);
float* __cdecl sub_5358BD(float* a1, float* a2);
// __int16 __usercall sub_5359F4(int a1, _DWORD *a2, _WORD *a3, unsigned __int16 a4);
void __cdecl sub_535A61(unsigned __int16* a1, int a2);
int __cdecl sub_535B4B(int a1, _WORD* a2);
int __cdecl sub_535BA2(unsigned __int16* a1, int a2);
int __cdecl sub_535BEC(int a1, unsigned __int8* a2);
int __cdecl sub_535D0C(unsigned __int8* a1, int a2);
int __cdecl sub_535E23(int* a1, int a2, int a3);
int* __thiscall sub_535ECA(int* this, int a2, void* Src);
_DWORD* __thiscall sub_535F8C(_DWORD* this, int a2, int a3, int a4, int a5, int a6, int a7);
int __thiscall sub_536025(int* this);
int __thiscall sub_53604B(_DWORD* this);
BOOL __thiscall sub_53605E(_DWORD* this);
int __thiscall sub_536080(_DWORD* this, _DWORD* a2);
char __cdecl sub_5360FF(int a1, int a2);
char __cdecl sub_536183(int a1, int a2);
int __cdecl sub_53620A(int* a1, int a2);
int __cdecl sub_53627E(unsigned __int16* a1, int a2);
int __cdecl sub_5362A4(_DWORD* a1, int a2);
unsigned int __cdecl sub_53635C(_DWORD* a1, int a2);
int __cdecl sub_53647C(_DWORD* a1, int a2);
int __cdecl sub_5364CE(int a1);
BOOL __cdecl sub_5364F0(int a1, int a2, int a3);
_DWORD* __cdecl sub_536513(int a1, int a2, _DWORD* a3);
int __thiscall sub_5365CA(int this, void* Src);
int __stdcall sub_53661D(int a1, void* a2);
int __stdcall sub_53666A(const void* a1);
int __cdecl sub_5366A8(int* a1);
int __cdecl sub_5366E6(unsigned int a1, int* a2, int** a3);
int __cdecl sub_536796(int* a1, int a2);
int __stdcall sub_53683A(int(__stdcall*** a1)(_DWORD, const IID*, _DWORD*), int* a2, int* a3, int* a4, int* a5);
int __cdecl sub_536B0D(int(__stdcall*** a1)(_DWORD, const IID*, _DWORD*), _DWORD* a2);
int __cdecl sub_536B56(int(__stdcall*** a1)(_DWORD, const IID*, _DWORD*), _DWORD* a2);
int __cdecl sub_536B7F(_DWORD* a1, _DWORD* a2, unsigned int* a3, unsigned int* a4, _DWORD* a5, _DWORD* a6);
int __stdcall sub_536C17(int(__stdcall*** a1)(_DWORD, const IID*, _DWORD*), int* a2, unsigned int* a3, unsigned int* a4, int* a5, int a6, _DWORD* a7, _DWORD* a8);
int __stdcall sub_536DFF(int(__stdcall*** a1)(_DWORD, const IID*, _DWORD*), int* a2, int a3, int a4, unsigned int* a5, unsigned int* a6, int* a7, int a8, _DWORD* a9, _DWORD* a10);
int __cdecl sub_53704A(int* a1, int a2, int** a3);
int __cdecl sub_5370BF(int a1, int* a2, int* a3, int a4, int a5);
int __stdcall sub_537174(int, int, int, int, int, int, int, int, void* lp, int); // idb
unsigned int __cdecl sub_537375(LPCSTR name, HGDIOBJ a2, HANDLE h, HDC hdcSrc, int a5);
int __stdcall sub_538231(int, int, int, int, void* Src, void*, int); // idb
int __stdcall sub_538514(int, int, int, int, int, int, int, void* Src, int); // idb
int __stdcall sub_5386A0(int, int, int, void* lp, void*, void* Src, int); // idb
char __cdecl sub_5387AA(int a1, int a2, char a3);
_BYTE* __cdecl sub_5387E2(_BYTE* a1);
_DWORD* __cdecl sub_538929(_BYTE* a1);
int __thiscall sub_538A40(_DWORD); // weak
int __thiscall sub_5390A5(const CHAR* this, unsigned int a2, _BYTE* a3, _DWORD* a4, int a5);
int __stdcall sub_5395E1(const void* a1, _DWORD* a2);
int __cdecl sub_539635(int a1, int a2, _DWORD* a3);
// HRESULT __stdcall DirectDrawCreateEx(GUID *lpGuid, LPVOID *lplpDD, const IID *const iid, IUnknown *pUnkOuter);
// HRESULT __stdcall DirectDrawEnumerateExA(LPDDENUMCALLBACKEXA lpCallback, LPVOID lpContext, DWORD dwFlags);
int __cdecl sub_539690(__int16 a1);
int sub_539759();
int __cdecl sub_539852(__int16 a1);
int __cdecl sub_539C90(int a1, int a2);
int __cdecl sub_539D6B(int a1);
int sub_539DBE();
int sub_539F0C();
void sub_53A1E2();
int sub_53A476();
int __cdecl sub_53A4B2(float); // idb
int __cdecl sub_53A9D2(int a1, int* a2);
int __cdecl sub_53AA38(int a1, int* a2);
int __cdecl sub_53AA6A(int); // weak
int __cdecl sub_53ABD5(int); // weak
int __cdecl sub_53AD06(int a1, int a2);
_DWORD* __cdecl sub_53AD17(int a1, float* a2, int a3, int a4);
int __cdecl sub_53ADEB(int, int, float, int, int, int, int); // idb
int __cdecl sub_53AEAD(int a1, int a2);
BOOL __cdecl sub_53AF0B(int a1, int a2, float a3);
void __cdecl sub_53B056(int a1);
void __cdecl sub_53B581(float* a1, int a2, float* a3);
char* __cdecl sub_53B61B(char* a1, float* a2, float* a3);
int __cdecl sub_53B766(int a1);
int __cdecl sub_53B870(int a1);
int __cdecl sub_53B92B(int a1);
unsigned int sub_53B9A0();
double __cdecl sub_53BB0F(float* a1);
double __cdecl pointVectorLength(float* point3D); // idb
double __cdecl sub_53BDF5(float* point3D_1, float* point3D_2); // idb
double __cdecl sub_53BE65(float* point3D); // idb
double __cdecl sub_53BF3D(float* point3D_1, float* point3D_2); // idb
double __cdecl sub_53C026(float* point3D_1, float* point3D_2); // idb
double __cdecl sub_53C0AC(float* point3D); // idb
float* __cdecl sub_53C127(float* point3D_1, float* point3D_2); // idb
float* __cdecl sub_53C180(float* point3D_1, float* point3D_2); // idb
int __cdecl sub_53C1D7(int, int, float); // idb
int __cdecl sub_53C25A(int, int, float); // idb
int* __cdecl sub_53C2DD(int* a1, float* point3D); // idb
int __cdecl sub_53C33C(float* point3D, int a2, int a3); // idb
_DWORD* __cdecl sub_53C676(_DWORD* a1, _DWORD* a2, _DWORD* a3, _DWORD* a4);
_DWORD* __cdecl sub_53C6E3(_DWORD* a1, _DWORD* a2, _DWORD* a3, _DWORD* a4);
_DWORD* __cdecl sub_53C750(_DWORD* a1, _DWORD* a2);
_DWORD* __cdecl sub_53C778(_DWORD* a1, _DWORD* a2);
int __cdecl sub_53C7A0(void* a1);
_DWORD* __cdecl sub_53C81D(_DWORD* a1);
_DWORD* __cdecl sub_53C8CB(_DWORD* a1, int* a2, float* a3);
_DWORD* __cdecl sub_53CA33(_DWORD* a1, int* a2, float* point3D); // idb
unsigned int sub_53CB9B();
int __cdecl sub_53CBA5(int, float); // idb
int __cdecl sub_53CC05(int, float); // idb
int __cdecl sub_53CC63(int, float); // idb
int __cdecl sub_53CCC2(int a1, float* point3D); // idb
void __cdecl sub_53CE4C(float* a1, int a2);
int __cdecl sub_53CF84(int, float); // idb
float* __cdecl sub_53CFB5(float* a1, float* point3D_1, float* point3D_2, float* point3D_3); // idb
float* __cdecl sub_53D0BE(float* point3D_1, float* point3D_2); // idb
int __cdecl sub_53D0F1(float* a1, float* point3D_1, float* point3D_2, float* a4, float* point3D_3); // idb
float* __cdecl sub_53D32F(float* point3D_1, float* point3D_2, float* point3D_3, float* point3D_4); // idb
int __cdecl sub_53D40A(float* point3D_1, float* point3D_2, float* point3D_3, float* point3D_4, float* point3D_5); // idb
int __cdecl sub_53D9E5(float* point3D_1, float* point3D_2, float* point3D_3, float* point3D_4, float* point3D_5); // idb
float* __cdecl sub_53E175(float* a1, float* a2);
float* __cdecl sub_53E217(float* point3D_1, int a2, float* a3, float* point3D_2, int a5, float* a6); // idb
int __cdecl sub_53E308(_DWORD* a1, float* point3D); // idb
int __cdecl sub_53EAE9(int a1, float* a2);
void __cdecl sub_53ECA3(unsigned int Seed);
double __cdecl sub_53ECFB(float* point3D_1, int a2, float* point3D_2); // idb
int __cdecl sub_53ED5C(int, int, int, float); // idb
int sub_53EE90();
int sub_53EECC();
int sub_53EF02();
int sub_53EF49();
int sub_53EF58();
int sub_53F213();
int __cdecl sub_53FC00(float* point3D, int a2, int a3, _DWORD* a4, int a5); // idb
int __cdecl sub_53FCBB(int* point3D, int a2, int a3, int a4, int a5); // idb
int __cdecl sub_53FDB2(int* a1, int* a2, int* a3, _DWORD* a4, int a5, int a6);
int __cdecl sub_54000A(int* a1, int* a2, int* a3, _DWORD* a4, _DWORD* a5, int a6);
int __cdecl sub_5401CB(int* a1, int* a2, int* a3, _DWORD* a4, int a5, int a6);
int __cdecl sub_540A93(float* point3D, float* a2, int a3, _DWORD* a4, int a5, unsigned int* a6); // idb
int __cdecl sub_540C4E(float* point3D, float* a2, int a3, _DWORD* a4, int a5, unsigned int* a6); // idb
int __cdecl sub_540E1B(int a1, float* point3D, _DWORD* a3, _DWORD* a4, int a5); // idb
int __cdecl sub_5412ED(int a1, float* point3D, _DWORD* a3, _DWORD* a4, unsigned int* a5, int a6); // idb
int __cdecl sub_54140A(int a1, float* point3D, _DWORD* a3, _DWORD* a4); // idb
int __cdecl sub_541433(int a1, int a2, _DWORD* a3, _DWORD* a4, int a5);
int __cdecl sub_541578(int a1, float* point3D, _DWORD* a3, _DWORD* a4, unsigned int* a5, int a6); // idb
int __cdecl sub_541695(int a1, float* point3D, _DWORD* a3, _DWORD* a4); // idb
void __cdecl sub_5416BE(int* a1, int a2, float* a3, _DWORD* a4);
void* __cdecl sub_541AC0(int* a1, _DWORD* a2);
int __cdecl sub_541B36(_DWORD* a1, _DWORD** a2);
int __cdecl sub_541DBE(int a1);
int __cdecl sub_541E14(int a1);
int __cdecl sub_54248D(int a1, _DWORD* a2, unsigned int* a3, int a4, unsigned int a5);
int __cdecl sub_542BF2(unsigned int* a1);
void __cdecl sub_543240(unsigned int* a1);
int sub_5433E6();
int sub_543461();
int sub_54348F();
unsigned int __cdecl sub_5434D6(_DWORD* a1);
unsigned int __cdecl sub_543FC3(_DWORD* a1);
int __cdecl sub_544072(int** a1, unsigned int* a2);
_DWORD* __cdecl sub_546A09(_DWORD* a1);
int __cdecl sub_546A5D(int a1);
unsigned int __cdecl sub_546BB8(unsigned int* a1, float* a2);
unsigned int __cdecl sub_546C41(int a1, const void* a2);
unsigned int sub_547023();
int __cdecl sub_5478E0(float* a1);
int __cdecl sub_547998(float* a1, int* a2, int* a3);
int __cdecl sub_547A43(float* a1, int* a2, int* a3);
float* __cdecl sub_547AF2(int a1, int a2, float* a3, float* a4, float* a5, float* a6);
int __cdecl sub_547B70(int a1, char a2);
int __cdecl sub_547BBD(int a1);
unsigned int __cdecl sub_547BD6(unsigned int* a1);
unsigned int __cdecl sub_547C70(unsigned int* a1);
char __cdecl sub_547CBE(int a1);
int __cdecl sub_547D07(unsigned int* a1, int a2);
int __cdecl sub_548203(float* a1);
int __cdecl sub_5483C8(int, float, float, int); // idb
void __cdecl sub_548892(float* a1, float* a2);
int __cdecl sub_548A01(int a1);
int __cdecl sub_548C04(int, int, float, float, float); // idb
int __cdecl sub_548E7D(int, int, float); // idb
BOOL __cdecl sub_54949E(int a1, int a2, float a3);
int __cdecl sub_549604(int a1, float* point3D_1, float* point3D_2); // idb
int __cdecl sub_549AD6(int* a1, float* point3D_1, float* point3D_2); // idb
int __cdecl sub_549EAF(int a1);
int __cdecl sub_549ED4(int, int, float); // idb
unsigned int* __cdecl sub_549FEB(unsigned int* a1);
_DWORD* __cdecl sub_54A080(_DWORD* a1);
int __cdecl sub_54A3B4(_DWORD* a1, const char* a2);
int __cdecl sub_54AF6B(_DWORD* a1, float* a2, int* a3);
_DWORD* __cdecl sub_54B882(_DWORD* a1);
int __cdecl sub_54B936(int, int, float); // idb
int __cdecl sub_54BB57(int, int, float); // idb
int __cdecl sub_54C03C(int a1, int a2);
int __cdecl sub_54C428(int, int, float, int); // idb
int __cdecl sub_54C61F(int, int, float, int); // idb
int __cdecl sub_54C85D(int* a1, int a2, int a3);
int __cdecl sub_54CBF5(int lBuffSize_SKL, int buffSize); // idb
int sub_54CD22();
int sub_54CD4B();
int __cdecl sub_54CE2C(int a1);
int __cdecl sub_54CE55(int a1, int a2);
int __cdecl sub_54D317(int a1, int a2, int a3, float a4, float a5);
float* __cdecl sub_54D40B(int* a1, int a2, float* a3, float* a4, _DWORD* a5);
int* __cdecl sub_54D506(int* a1, int a2, int a3);
int* __cdecl sub_54D5C6(int* a1, int a2, int a3);
int __cdecl sub_54D686(int a1, int a2, float* a3);
int __cdecl sub_54D708(int a1, int a2, float* point3D_1, float* a4, float* point3D_2); // idb
int* __cdecl sub_54DBAE(int a1, int* a2, float* a3);
int* __cdecl sub_54DBDC(int a1, int* a2, float* a3, float* a4, float* a5);
int __cdecl sub_54DC12(int, int, float); // idb
int __cdecl sub_54DCF7(int, int, float, float); // idb
_DWORD* __cdecl sub_54DE17(int a1, _DWORD* a2, float* point3D); // idb
int* __cdecl sub_54DEB3(int* a1, const void* a2, int a3, int a4, int a5, void(__cdecl* a6)(int*, int*, int, int, int));
int __cdecl sub_54DFE0(int a1, int a2);
int __cdecl sub_54E15E(float* point3D_1, float* point3D_2, float* point3D_3, int* a4, float* a5, float* a6); // idb
int __cdecl sub_54E738(int, int, int, float, float); // idb
char* __cdecl ToLowString(char* str); // idb
int __cdecl sub_54E892(int a1);
int __cdecl sub_54EBD0(int a1, const void** a2, float* a3);
int __cdecl sub_54F198(int a1);
int __cdecl sub_54F3A8(float a1);
int __cdecl sub_54F3C4(int a1, int a2, int a3);
int __cdecl sub_54F41B(int a1, int a2);
int sub_54F492();
int sub_54F4EC();
int sub_54F6C6();
int __cdecl sub_54F6F0(const void* a1, int a2);
void __cdecl sub_54F72C(float a1, float a2, float a3, float a4);
int __cdecl sub_54F8A0(int, float); // idb
float* sub_54F8DF();
int __cdecl sub_54FC03(float* a1, float* a2);
int __cdecl sub_54FD07(float* a1, float* a2);
int __cdecl sub_54FE0C(int, float); // idb
int __cdecl sub_54FF13(float, float); // idb
int sub_54FF69();
int __cdecl sub_5500F9(_DWORD* a1, int a2);
int sub_55012B();
int sub_5501A9();
int sub_5501BB();
int sub_550301();
void __cdecl sub_550343(int a1, int a2);
int __cdecl sub_550447(float* a1);
int __cdecl sub_550777(float* point3D_1, float* point3D_2, char a3, char a4, char a5); // idb
int __cdecl sub_551ACA(int, float, char, char, char); // idb
int __cdecl sub_551CEC(int, int, float, char, char, char); // idb
_DWORD* __cdecl sub_552400(int a1, float a2, char a3, char a4, char a5);
_DWORD* __cdecl sub_5526EB(_DWORD* a1, _DWORD* a2);
int __cdecl sub_553141(int, int, float); // idb
int __cdecl sub_5538C8(int, float); // idb
int __cdecl sub_553AB1(float, float, float, int); // idb
int sub_553B90();
int __cdecl sub_553C3C(__int16 a1);
int sub_553C94();
int sub_553CD9();
int __cdecl sub_553D57(int a1);
int __cdecl sub_55400A(int a1);
void sub_5541F8();
int __cdecl sub_55420C(__int16 a1, __int16 a2);
int __cdecl sub_55429D(__int16 a1, __int16 a2, __int16 a3);
int __cdecl sub_554345(__int16 a1, __int16 a2);
unsigned int __cdecl sub_5545D0(int a1);
char* __cdecl sub_554868(int a1, float a2, float a3, float a4, int a5, int a6, float a7, int a8, int a9, int a10, int a11);
_DWORD* __cdecl sub_554EDE(_DWORD* a1, const void* a2, int a3);
int __cdecl sub_554F1F(_DWORD* a1);
int __cdecl sub_55512D(int a1);
int __cdecl sub_555A0D(int a1);
int __cdecl sub_556507(int a1);
int __cdecl sub_556524(int a1);
int sub_556536();
int __cdecl sub_556592(int a1);
int __cdecl sub_556B6E(int a1);
int __cdecl sub_557099(_DWORD* a1);
void __cdecl sub_5570FE(int a1, float a2);
double __cdecl sub_557344(int* a1);
double __cdecl sub_55743D(int* a1, _DWORD* a2);
int __cdecl sub_557540(float* point3D_1, float* point3D_2, _DWORD* point3D_3); // idb
int sub_557733();
int sub_557795();
int sub_5577D0();
int __cdecl sub_557828(__int16 a1, int a2, _BYTE* a3);
int __cdecl sub_5578B3(__int16 a1, int a2, _BYTE* a3);
int __cdecl sub_557939(int a1, int a2, int a3, int a4, int a5);
int __cdecl sub_557A13(__int16 a1, int a2, __int16 a3, int a4, _BYTE* a5);
int __cdecl sub_557AED(int a1, int a2, int a3, int a4, _BYTE* a5);
__int16 __cdecl sub_557B78(_BYTE* a1);
__int64 __cdecl sub_557BE0(_BYTE* a1);
_BYTE* __cdecl sub_557C42(_BYTE* a1, int a2);
int __cdecl sub_557E12(int a1, int a2, int a3, int a4, _BYTE* a5, int a6);
int __cdecl sub_557F70(int a1, int a2, const char* a3, int a4);
int __cdecl sub_558133(int a1, int a2, int a3, int a4, int a5, const char* a6, int a7);
int __cdecl sub_5582FF(int a1, int a2, int a3, int a4, int a5, _BYTE* a6);
int sub_5583E5();
int __cdecl sub_558439(__int16 a1);
int __cdecl sub_558477(__int16 a1);
void sub_5584A4();
int __cdecl sub_558680(int a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, unsigned __int8 a8, int a9);
int __cdecl sub_558864(int, int, int, int, int, int, int, int, int, float, float, int); // idb
int __cdecl sub_558BA2(int* a1, int* a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int8 a5, unsigned __int8 a6, int a7);
int __cdecl sub_558E6E(int a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, unsigned __int8 a8, int a9);
int __cdecl sub_558EEC(int a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, unsigned __int8 a8, int a9, int a10);
int __cdecl sub_55926C(int a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, unsigned __int8 a8, int a9);
int __cdecl sub_55929F(int a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, unsigned __int8 a8, int a9, int a10);
int __cdecl sub_559595(int a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, unsigned __int8 a8, int a9);
int __cdecl sub_559838(int a1, int a2, int a3, int a4, unsigned __int8* a5, int a6);
int __cdecl sub_559B7B(int a1, int a2, int a3, int a4, unsigned __int8* a5, int a6, int a7);
int __cdecl sub_559FA3(int* a1, int* a2, unsigned __int8* a3, int a4, int a5);
int __cdecl sub_55A586(int, float, float, int); // idb
void* __cdecl sub_55A930(int a1);
int* __cdecl sub_55A95E(int* a1, int* a2);
int __cdecl sub_55A9C3(int a1, int(__cdecl* a2)(int), int a3, int* a4);
int __cdecl sub_55ABA0(int a1);
int sub_55AC4F();
void* __cdecl sub_55AC84(int a1);
void sub_55ACBC();
int __cdecl sub_55ACD5(int a1, int(__cdecl* a2)(int));
int sub_55AD46();
void __cdecl sub_55ADA0(int a1, int a2, int a3, float a4);
int __cdecl sub_55BCC4(int a1, _DWORD* a2, int a3);
void __cdecl sub_55C259(int a1, int a2, int a3, float a4);
int __cdecl sub_55C830(int a1, float* a2, int a3);
int __cdecl sub_55CEFB(int a1, int a2, const void* a3, int a4);
int __cdecl sub_55FE5C(int a1, int a2, const void* a3, unsigned __int8* a4);
DWORD __cdecl sub_560A7B(int a1, int a2, const void* a3, int a4);
void __cdecl sub_560B19(float* a1, float* a2, float* a3);
int __cdecl sub_560D74(int, float, float, float, float, float, float); // idb
BOOL __cdecl sub_561397(float* a1, float* a2);
BOOL __cdecl sub_561429(float* a1, float* a2, int* a3);
int __cdecl sub_5614A2(float* a1, float* a2, int* a3, int* a4, float* a5);
BOOL __cdecl sub_561A92(int a1, int a2, int a3, float a4);
BOOL __cdecl sub_561FC5(int a1, int a2, int a3, float a4);
int __cdecl sub_5625B6(int a1);
int __cdecl sub_56264B(unsigned int a1);
int __cdecl sub_56268C(int a1);
int __cdecl sub_56271B(unsigned int a1, int a2);
int sub_56279F();
void sub_562836();
int sub_562845();
int __cdecl sub_562880(int a1);
int sub_5628AC();
void* __cdecl sub_562944(unsigned __int8 a1);
int sub_562A97();
int sub_562BB1();
char __cdecl sub_562C25(int a1);
float* __cdecl sub_562D7B(float* a1);
float* __cdecl sub_562DDE(float* a1);
int __cdecl sub_562DFB(int, float); // idb
int __cdecl sub_562F7A(int a1);
int __cdecl sub_562FC0(int a1);
int __cdecl sub_5630A1(int a1);
int __cdecl sub_5630EA(int a1, float* a2, float* a3);
int __cdecl sub_563423(int a1);
int __cdecl sub_563434(int a1);
int __cdecl sub_563497(int); // weak
int __cdecl sub_5634A8(int a1);
int __cdecl sub_563584(int a1);
int __cdecl sub_563595(int a1);
int __cdecl sub_5635B4(int a1);
int __cdecl sub_5635C5(int a1);
int __cdecl sub_563ACE(int a1);
int __cdecl sub_563BFE(int a1);
int __cdecl sub_563CEB(int a1);
int __cdecl sub_563CFC(int a1);
int __cdecl sub_5640F0(int a1);
int sub_56414D();
int __cdecl sub_564220(int a1, int a2, int a3, int a4, int a5);
int __cdecl sub_564271(int a1, int a2);
int __cdecl sub_5642D8(int a1, int a2, int a3);
int __cdecl sub_564303(int a1, int a2);
int __cdecl sub_564340(__int16 a1);
int sub_564443();
int __cdecl sub_564595(int a1);
int sub_564630();
int sub_564665();
int sub_564706();
int __cdecl sub_564910(int, int, int, int, int, int, float, int); // idb
int __cdecl sub_564C0A(int, int, int, int, int, int, float, int, int); // idb
int __cdecl sub_565411(int, int, int, int, int, int, float, int, int); // idb
int __cdecl sub_565B1F(int, int, int, int, int, float, int); // idb
int __cdecl sub_565C1B(int a1, unsigned __int16* a2);
int __cdecl sub_565D9B(_DWORD* a1, float* a2, float* a3, float* a4, int a5, int a6, int a7);
int __cdecl sub_56697D(_DWORD* a1, float* a2, float* a3, float* a4, int a5, int a6, int a7);
int __cdecl sub_5669A6(int, float, float, int, int); // idb
void __cdecl sub_566CFF(int a1, int a2, int a3, int a4, float a5, int a6);
int __cdecl sub_566EF6(int, int, int, int, int, float, int); // idb
void __cdecl sub_5679E0(int a1, int a2, _DWORD* a3, float* a4, float* a5, int a6, int a7, int a8);
void __cdecl sub_567AB7(_DWORD* a1, int a2, _DWORD* a3, float* a4, float* a5, int a6, int a7, int a8);
void __cdecl sub_567CB0(_DWORD* a1, _WORD* a2, _DWORD* a3, float* a4, float* a5, float* a6, __int64 a7);
int __cdecl sub_568044(int a1, float* a2, float* a3, float* a4, unsigned int a5);
int __cdecl sub_568100(int a1, int a2, int a3, int a4, char a5);
int __cdecl sub_56812D(int a1, int a2, int a3);
int __cdecl sub_568A11(int a1, int a2, int a3, int a4, int a5);
DWORD sub_568FB1();
int __cdecl sub_56914C(int a1);
int __cdecl sub_569193(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3);
int __cdecl sub_569218(float); // idb
int __cdecl sub_569360(int a1);
int __cdecl sub_5693AC(int a1);
int sub_5693E8();
// int __cdecl _fptrap(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); weak
int sub_56941E();
int __cdecl sub_56942D(int a1);
int __cdecl sub_56944E();
// int __cdecl _flushall();
int __cdecl sub_569471(int a1);
int sub_5694A0();
int __cdecl sub_5694BD(int a1);
int __cdecl sub_5694F4(int a1);
int __cdecl sub_569523(int a1);
int __cdecl sub_56956F(int a1);
int __cdecl sub_5695A3(int a1);
int __cdecl sub_5695D9(int a1);
int __cdecl sub_569660(int a1);
int __cdecl sub_5696A1(int a1);
int __cdecl sub_5696FE(int a1);
int sub_569765();
int __cdecl sub_569792(__int16 a1);
int __cdecl sub_56989C(__int16 a1, __int16 a2, __int16 a3, __int16 a4, __int16 a5);
__int16 __cdecl sub_5699E1(_DWORD* a1);
int sub_569A61();
void __cdecl sub_569ADA(int a1, int a2);
int __cdecl sub_569C41(int a1, int a2);
int sub_569C59();
int __cdecl sub_569CD1(const char* a1);
int __cdecl sub_569E81(void* lp, int); // idb
int __cdecl sub_569F87(const char* a1);
int __cdecl sub_569FE4(_WORD* a1, int a2, int a3, int a4);
int __cdecl sub_56A0C8(const char* a1, int* a2);
int sub_56A14F();
int __cdecl sub_56A159(int a1, int a2, int a3, int a4);
int __cdecl sub_56A2F7(int a1);
int __cdecl sub_56A31D(int a1);
int __cdecl sub_56A614(int a1);
int __cdecl sub_56A66E(int a1);
int __cdecl sub_56A68B(int a1);
int sub_56A6B0();
int sub_56A6E7();
int sub_56A70F();
int __cdecl sub_56A784(int (*a1)(void));
void sub_56A952();
size_t __cdecl sub_56A9D0(const char* a1);
unsigned int __cdecl sub_56AAA8(void* a1, unsigned int a2);
int sub_56AADA();
unsigned int sub_56ABE8();
int sub_56AD90();
int sub_56AE9F();
int sub_56AF9D();
unsigned int sub_56AFF3();
int sub_56B048();
int sub_56B0EA();
int sub_56B0F4();
int sub_56B18C();
int __cdecl sub_56B5B0(int a1);
int sub_56B5DB();
int sub_56B677();
int sub_56B706();
_DWORD* __cdecl sub_56B761(char* Str1, int a2, int a3, int a4, int a5);
int __cdecl sub_56B7C0(int a1);
char* __cdecl sub_56B8C4(char* Destination, int a2);
int __cdecl sub_56C042(_WORD* a1, int a2, int a3);
char* __cdecl sub_56C58D(char* Destination, int a2);
int __cdecl sub_56E252(int a1, int a2);
int __cdecl sub_56E657(char* Str1); // idb
int __cdecl sub_56E6BD(int a1);
int sub_56E73C();
int __cdecl sub_56E7B0(int a1, __int16 a2, __int16 a3, __int16 a4);
int __cdecl sub_56E8FD(char* Str1, int); // idb
int __cdecl sub_56EA26(int a1, __int16 a2, __int16 a3, __int16 a4);
int __cdecl sub_56EA60(float); // idb
// int unknown_libname_4(void); weak
int __cdecl sub_56EC1B(const char* a1);
int sub_56ED64();
int sub_56F751();
int __cdecl sub_56FC39(int a1, int a2, _BYTE* a3);
int __cdecl sub_5700F0(int a1);
int sub_570119();
int __cdecl sub_570153(const void* a1, int a2);
int __cdecl sub_570234(int a1);
int sub_570372();
int __cdecl sub_570400(int a1);
_DWORD* sub_570660();
int __cdecl sub_570735(int a1);
int sub_5707B2();
// int __setargv_0(void); weak
int sub_570849();
int __cdecl sub_570D02(int, float); // idb
_DWORD* __cdecl sub_570FA0(int a1, int a2, int* a3, unsigned __int8 a4, unsigned __int8 a5, unsigned __int8 a6);
unsigned int* __cdecl sub_5712EC(unsigned int* a1);
void __cdecl sub_5713A1(int a1, int a2, int a3);
int sub_571762();
_DWORD* __cdecl sub_571C00(_DWORD* a1);
int __cdecl sub_571C98(int a1, int a2);
int __cdecl sub_571F97(int a1, int a2);
int __cdecl sub_572253(int a1, int a2);
int __cdecl sub_572A78(int a1, int a2);
int __cdecl sub_5736DC(int a1, int a2);
int __cdecl sub_573EDD(int a1, int a2);
int __cdecl sub_57432A(int a1, int a2);
int __cdecl sub_57480F(int a1, int a2);
int __cdecl sub_574C4E(int a1, _DWORD* a2);
int __cdecl sub_575030(float); // idb
double __cdecl sub_575050(int a1, float a2);
// _DWORD __cdecl unknown_libname_5(_DWORD); weak
// int _cfltcvt_init_4(void); weak
char sub_575682();
int __cdecl sub_5758B0(int* a1, char a2);
int __cdecl sub_575920(int* a1);
int __cdecl sub_575BDF(_DWORD* a1);
int __cdecl sub_575D77(int a1, char a2, int a3);
int sub_575E02();
char sub_5760C8();
int sub_576101();
int sub_576142();
int sub_576190();
int __cdecl sub_5761DE(int* a1, int a2, int a3);
int __cdecl sub_5769AB(int* a1, int a2, int a3);
void __cdecl sub_576FAF(int* a1);
int __cdecl sub_577740(int a1, int a2);
int __cdecl sub_577890(int a1, int a2);
int __cdecl sub_5779E0(int a1);
// int __cdecl unknown_libname_6(_DWORD); weak
// int __cdecl unknown_libname_7(_DWORD, _DWORD); weak
int sub_577F03();
int __cdecl sub_5786C9(int a1);
int __stdcall sub_578A63(_DWORD* a1, void* a2);
int __cdecl CompareFunction(const void*, const void*); // idb
int __stdcall sub_578DB1(_DWORD* a1, int a2);
int __stdcall sub_578EFF(int, LPCSTR, int, int); // idb
int sub_5798B0();
DWORD __cdecl sub_5798F2(char a1, char a2, char a3);
char __cdecl sub_5799C0(char a1, char a2, char a3);
DWORD sub_579A15();
DWORD sub_579A58();
int sub_579B23();
int __cdecl sub_579B75(int a1);
DWORD sub_579BD5();
int __cdecl sub_579DED(int a1, int a2);
int __cdecl sub_579F40(int* a1);
double __cdecl sub_57A047(int a1);
int __cdecl sub_57A38C(int a1, int a2, int a3);
int __cdecl sub_57A433(int a1, _DWORD* a2);
float* __cdecl sub_57AB0E(int a1, int a2, float a3);
double __cdecl sub_57ABCE(int a1, float a2);
double __cdecl sub_57AC83(int a1, float a2, float a3);
double __cdecl sub_57AEF1(int* a1, float* a2);
int __cdecl sub_57B150(int a1, int a2);
_DWORD* __cdecl sub_57B1C0(int a1);
int __cdecl sub_57B28C(_DWORD* a1);
_DWORD* __cdecl sub_57B2D0(_DWORD* a1, _DWORD* a2, int a3);
_DWORD* __cdecl sub_57B329(_DWORD* a1);
int __cdecl sub_57B385(int, int, float, int, int, int, int); // idb
int __cdecl sub_57BB60(const char* menuItem); // idb
int __cdecl sub_57BBF0(const char* a1, int a2);
int __cdecl sub_57BC19(int a1, const char* menuItem, int a3); // idb
char* __cdecl sub_57BF86(int a1);
char* __cdecl sub_57C0E5(int a1);
int __cdecl sub_57C0F5(__int16 a1, __int16 a2, int a3);
int __cdecl sub_57C121(__int16 a1, __int16 a2, int a3);
int __cdecl sub_57C3A0(int a1, const void** a2);
int __cdecl sub_57C42A(int a1, const void** a2);
int __cdecl sub_57C507(_DWORD* a1, const void** a2);
char* __cdecl sub_57C92D(_DWORD* a1, const void** a2);
int __cdecl sub_57CC62(_DWORD* a1);
int __cdecl sub_57CCCF(int a1);
int sub_57CDB0();
int __thiscall sub_57CEC9(void* this);
int sub_57D24A();
int sub_57D760();
int __stdcall sub_57DA57(_DWORD* a1, int a2);
char __cdecl sub_57E1F0(_BYTE* a1);
int sub_57E228();
void* __cdecl sub_57E3AD(int a1);
void* __cdecl sub_57E5BA(int a1, int a2);
int sub_57E8A0();
__int16 __cdecl sub_57E916(int a1);
int __cdecl sub_57E927(__int16 a1);
// int __cdecl is_wctype(wint_t C, wctype_t Type);
int __cdecl sub_57E95F(__int16 a1, char a2);
int __cdecl sub_57E975(__int16 a1, int a2, int a3);
void sub_57E98F();
int __cdecl sub_57E999(int a1);
// wint_t __cdecl putwc(wchar_t Character, FILE *Stream);
int __cdecl sub_57E9CF(__int16 a1);
// wint_t __cdecl putwc_0(wchar_t Character, FILE *Stream);
// wint_t __cdecl putwc_1(wchar_t Character, FILE *Stream);
// wint_t __cdecl putwc_2(wchar_t Character, FILE *Stream);
// wint_t __cdecl putwc_3(wchar_t Character, FILE *Stream);
// wint_t __cdecl putwc_4(wchar_t Character, FILE *Stream);
int __cdecl sub_57EA8E(char a1);
__int16 __cdecl sub_57EC20(int a1);
__int16 __cdecl sub_57EC82(int a1, unsigned __int8 a2, int a3);
int __cdecl sub_57ECEC(__int16 a1);
int __cdecl sub_57EE12(__int16 a1, _DWORD* a2);
int __cdecl sub_57EEDA(__int16 a1, float* a2);
int __cdecl sub_57EFC8(__int16 a1, unsigned __int16 a2);
int __cdecl sub_57F07D(__int16 a1, char a2);
int __cdecl sub_57F130(__int16 a1, int a2);
int __cdecl sub_57F2B8(int a1, int a2);
int __cdecl sub_57F55F(int a1, int a2, unsigned __int8 a3, int a4);
__int16 __cdecl sub_57F848(int a1);
int __cdecl sub_57FBCF(__int16 a1);
int __cdecl sub_57FC47(int a1);
int __cdecl sub_580681(__int16 a1, int a2, int a3);
int __cdecl sub_58079B(__int16 a1);
BOOL __cdecl sub_58083C(int a1);
__int16 __cdecl sub_58089A(int a1);
void sub_580FB2();
void sub_581090();
int sub_581251();
int sub_5822AE();
int sub_58236B();
int __cdecl sub_5823BE(int a1, const char* fileResource, void* a3); // idb
int sub_582687();
int sub_58273D();
int sub_582772();
void sub_5827C4();
void sub_582915();
void sub_58295B();
int __stdcall sub_582A13(int); // weak
void sub_582C46();
void sub_582CA9();
void sub_582FAA();
void sub_58306B();
void sub_5830FF();
void sub_583213();
int __cdecl sub_583340(int a1);
int empyFunt_xx2();
int __cdecl sub_5833E3(int a1, int a2);
int sub_5834A8();
int sub_5834C6();
int __cdecl maybe_startMusic(unsigned __int8 a1);
int __cdecl sub_58355A(unsigned __int8 a1);
int empyFunt_xx3();
int sub_5835EC();
void sub_5836F8();
void sub_583776();
int __cdecl sub_58383D(int a1, int a2);
int __cdecl sub_5838B2(int a1);
int __cdecl sub_5838D9(int a1, unsigned __int8 a2);
BOOL __cdecl sub_583941(int a1);
int sub_583980();
int __cdecl sub_583E90(double a1, double a2);
int sub_583EA4();
// int _cfltcvt_init_5(void); weak
// double __cdecl cos(double X);
// double __cdecl sin(double X);
// double __cdecl sqrt(double X);
// double __cdecl floor(double X);
// void __cdecl srand(unsigned int Seed);
// int __cdecl rand();
// double __cdecl fabs(double X);
// double __cdecl pow(double X, double Y);
// int __cdecl strncmp(const char *Str1, const char *Str2, size_t MaxCount);
// int sprintf(char *const Buffer, const char *const Format, ...);
// char *__cdecl strncpy(char *Destination, const char *Source, size_t Count);
// char *__cdecl _strupr(char *String);
// void *__cdecl memcpy(void *, const void *Src, size_t Size);
// char *__cdecl strchr(const char *Str, int Val);
// int printf(const char *const Format, ...);
// int _cinit(void); weak
// void __cdecl __noreturn exit(int Code);
// void __cdecl __noreturn _exit(int Code);
// void *__cdecl malloc(size_t Size);
LPVOID __cdecl sub_584D8B(unsigned int a1);
void __cdecl sub_584E87(LPVOID lpMem);
// int __cdecl fclose(FILE *Stream);
// size_t __cdecl fwrite(const void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream);
// FILE *__cdecl fopen(const char *FileName, const char *Mode);
// size_t __cdecl fread(void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream);
// int __cdecl ftell(FILE *Stream);
// int __cdecl fseek(FILE *Stream, int Offset, int Origin);
// double __cdecl fmod(double X, double Y);
// int sscanf(const char *const Buffer, const char *const Format, ...);
// double __cdecl atan(double X);
// double __cdecl acos(double X);
// double __cdecl ceil(double X);
// char *__cdecl _strtime(char *Buffer);
// __time32_t __cdecl time(__time32_t *const Time);
void* __cdecl sub_5858BF(LPVOID lpMem, SIZE_T dwBytes);
// void __cdecl qsort(void *Base, size_t NumOfElements, size_t SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction CompareFunction);
// char *__cdecl strstr(const char *Str, const char *SubStr);
int __cdecl sub_585E40(LPVOID lpMem); // idb
// void *__cdecl operator new(size_t Size); idb
// int __cdecl atoi(const char *String);
// int __cdecl vsprintf(char *const Buffer, const char *const Format, va_list ArgList);
// int __cdecl atexit(void (__cdecl *)());
// void __noreturn start(); weak
// void __cdecl __noreturn _amsg_exit(DWORD NumberOfBytesWritten); idb
// void __cdecl __noreturn fast_error_exit(DWORD NumberOfBytesWritten); idb
// void __stdcall __noreturn _CxxThrowException(void *pExceptionObject, _ThrowInfo *pThrowInfo);
// int _snprintf(char *const Buffer, const size_t BufferCount, const char *const Format, ...);
// char *__cdecl strrchr(const char *Str, int Ch);
// double __cdecl asin(double X);
// double __cdecl tan(double X);
// int __cdecl setvbuf(FILE *Stream, char *Buffer, int Mode, size_t Size);
// int __cdecl _ctrandisp2(double, double); idb
// int _setdefaultprecision(void); weak
// int _ms_p5_mp_test_fdiv(void); weak
// int _mtinit(void); weak
// char *__cdecl strcpy(char *Destination, const char *Source);
// char *__cdecl strcat(char *Destination, const char *Source);
// _DWORD __cdecl _lock(_DWORD); weak
// _DWORD __cdecl _unlock(_DWORD); weak
// void __cdecl _lock_file(FILE *Stream);
// void __cdecl _unlock_file(FILE *Stream);
// int __cdecl _callnewh(size_t Size);
char __cdecl sub_5891A0(int a1);
int sub_5891CD();
int __cdecl strangefunc1Op(int a1);
// _DWORD __cdecl __sbh_heap_init(_DWORD); weak
// _DWORD __cdecl __sbh_find_block(_DWORD); weak
_DWORD* __cdecl sub_5893E5(_DWORD* a1, int a2);
// _DWORD __cdecl __sbh_alloc_block(_DWORD); weak
// _DWORD __cdecl __sbh_resize_block(_DWORD, _DWORD, _DWORD); weak
void** sub_589EB9();
void** __cdecl sub_589FFD(LPVOID lpMem);
void __cdecl sub_58A053(int a1);
unsigned int __cdecl sub_58A115(unsigned int a1, void*** a2, unsigned int* a3);
void __cdecl sub_58A16C(int a1, int a2, _BYTE* a3);
int __cdecl sub_58A1B1(unsigned int a1);
int __cdecl sub_58A3B9(int a1, unsigned int a2, unsigned int a3);
int __cdecl sub_58A4DD(int a1, _DWORD* a2, _BYTE* a3, unsigned int a4);
// int __cdecl _except_handler3(int, PVOID TargetFrame, int); idb
int sub_58A7FD();
// _DWORD __cdecl flsall(_DWORD); weak
// void *__cdecl memcpy_0(void *, const void *Src, size_t Size);
int* __cdecl sub_58B327(unsigned int a1);
// int *__cdecl _errno();
// unsigned int *__cdecl __doserrno();
// UINT _ioinit();
// double __cdecl unknown_libname_8(_TBYTE a1, _TBYTE a2);
// size_t __cdecl strlen(const char *Str);
// void __cdecl __noreturn terminate(); idb
// void __usercall __noreturn sub_58D88D(EXCEPTION_POINTERS *a1, int a2, int a3, int a4);
SIZE_T __cdecl sub_58DA08(LPCVOID lpMem);
// int _wincmdln(void); weak
// int _setenvp(void); weak
// int _setargv(void); weak
// int __crtGetEnvironmentStringsA(void); weak
int* __cdecl sub_58E137(DWORD NumberOfBytesWritten);
// LONG __stdcall __CxxUnhandledExceptionFilter(struct _EXCEPTION_POINTERS *ExceptionInfo); idb
LONG(__stdcall* sub_58E35A())(struct _EXCEPTION_POINTERS* ExceptionInfo);
LPTOP_LEVEL_EXCEPTION_FILTER sub_58E36B();
// _DWORD __cdecl _ld12cvt(_DWORD, _DWORD, _DWORD); weak
int __cdecl sub_58EA4E(int a1, int a2);
int __cdecl sub_58EA64(int a1, int a2);
int __cdecl sub_58EA7A(int a1, int a2);
int __cdecl sub_58EAA7(int a1, int a2);
// void *__cdecl memset(void *, int Val, size_t Size);
int __cdecl sub_58ECC4(int a1, int a2);
// int __cdecl strtol(const char *String, char **EndPtr, int Radix);
// _DWORD __cdecl __crtMessageBoxA(_DWORD, _DWORD, _DWORD); weak
// _DWORD __cdecl __strgtold12(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); weak
// int __cdecl _strcmpi(const char *String1, const char *String2);
// int __cdecl _strnicmp(const char *String1, const char *String2, size_t MaxCount);
// int __stdcall DirectInputCreateEx(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD); weak
// LSTATUS __stdcall RegCloseKey(HKEY hKey);
// LSTATUS __stdcall RegSetValueExA(HKEY hKey, LPCSTR lpValueName, DWORD Reserved, DWORD dwType, const BYTE *lpData, DWORD cbData);
// LSTATUS __stdcall RegQueryValueExA(HKEY hKey, LPCSTR lpValueName, LPDWORD lpReserved, LPDWORD lpType, LPBYTE lpData, LPDWORD lpcbData);
// LSTATUS __stdcall RegCreateKeyExA(HKEY hKey, LPCSTR lpSubKey, DWORD Reserved, LPSTR lpClass, DWORD dwOptions, REGSAM samDesired, const LPSECURITY_ATTRIBUTES lpSecurityAttributes, PHKEY phkResult, LPDWORD lpdwDisposition);
// UINT __stdcall GetPaletteEntries(HPALETTE hpal, UINT iStart, UINT cEntries, LPPALETTEENTRY pPalEntries);
// int __stdcall GetObjectA(HANDLE h, int c, LPVOID pv);
// BOOL __stdcall DeleteObject(HGDIOBJ ho);
// int __stdcall SetBkMode(HDC hdc, int mode);
// COLORREF __stdcall SetTextColor(HDC hdc, COLORREF color);
// BOOL __stdcall DeleteDC(HDC hdc);
// BOOL __stdcall BitBlt(HDC hdc, int x, int y, int cx, int cy, HDC hdcSrc, int x1, int y1, DWORD rop);
// BOOL __stdcall StretchBlt(HDC hdcDest, int xDest, int yDest, int wDest, int hDest, HDC hdcSrc, int xSrc, int ySrc, int wSrc, int hSrc, DWORD rop);
// HDC __stdcall CreateCompatibleDC(HDC hdc);
// HGDIOBJ __stdcall SelectObject(HDC hdc, HGDIOBJ h);
// HGDIOBJ __stdcall GetStockObject(int i);
// BOOL __stdcall SetPriorityClass(HANDLE hProcess, DWORD dwPriorityClass);
// DWORD __stdcall GetLastError();
// BOOL __stdcall CloseHandle(HANDLE hObject);
// HANDLE __stdcall CreateThread(LPSECURITY_ATTRIBUTES lpThreadAttributes, SIZE_T dwStackSize, LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter, DWORD dwCreationFlags, LPDWORD lpThreadId);
// DWORD __stdcall FormatMessageA(DWORD dwFlags, LPCVOID lpSource, DWORD dwMessageId, DWORD dwLanguageId, LPSTR lpBuffer, DWORD nSize, va_list *Arguments);
// BOOL __stdcall SetThreadPriority(HANDLE hThread, int nPriority);
// HANDLE __stdcall CreateEventA(LPSECURITY_ATTRIBUTES lpEventAttributes, BOOL bManualReset, BOOL bInitialState, LPCSTR lpName);
// HANDLE __stdcall CreateMutexA(LPSECURITY_ATTRIBUTES lpMutexAttributes, BOOL bInitialOwner, LPCSTR lpName);
// HLOCAL __stdcall LocalFree(HLOCAL hMem);
// HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName);
// BOOL __stdcall ReleaseMutex(HANDLE hMutex);
// int __stdcall lstrlenA(LPCSTR lpString);
// HGLOBAL __stdcall GlobalAlloc(UINT uFlags, SIZE_T dwBytes);
// LPVOID __stdcall GlobalLock(HGLOBAL hMem);
// HGLOBAL __stdcall GlobalHandle(LPCVOID pMem);
// BOOL __stdcall GlobalUnlock(HGLOBAL hMem);
// HGLOBAL __stdcall GlobalFree(HGLOBAL hMem);
// DWORD __stdcall GetTickCount();
// DWORD __stdcall WaitForSingleObject(HANDLE hHandle, DWORD dwMilliseconds);
// DWORD __stdcall GetVersion();
// DWORD __stdcall GetFileType(HANDLE hFile);
// HANDLE __stdcall GetStdHandle(DWORD nStdHandle);
// UINT __stdcall SetHandleCount(UINT uNumber);
// BOOL __stdcall WriteFile(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped);
// LPVOID __stdcall VirtualAlloc(LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect);
// BOOL __stdcall VirtualFree(LPVOID lpAddress, SIZE_T dwSize, DWORD dwFreeType);
// HANDLE __stdcall HeapCreate(DWORD flOptions, SIZE_T dwInitialSize, SIZE_T dwMaximumSize);
// BOOL __stdcall HeapDestroy(HANDLE hHeap);
// DWORD __stdcall GetEnvironmentVariableA(LPCSTR lpName, LPSTR lpBuffer, DWORD nSize);
// DWORD __stdcall GetModuleFileNameA(HMODULE hModule, LPSTR lpFilename, DWORD nSize);
// LPTOP_LEVEL_EXCEPTION_FILTER __stdcall SetUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter);
// HANDLE __stdcall CreateFileA(LPCSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile);
// BOOL __stdcall UnmapViewOfFile(LPCVOID lpBaseAddress);
// int __stdcall GetLocaleInfoA(LCID Locale, LCTYPE LCType, LPSTR lpLCData, int cchData);
// BOOL __stdcall DeleteFileA(LPCSTR lpFileName);
// void __stdcall GetStartupInfoA(LPSTARTUPINFOA lpStartupInfo);
// LPSTR __stdcall GetCommandLineA();
// LPVOID __stdcall HeapReAlloc(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem, SIZE_T dwBytes);
// BOOL __stdcall HeapFree(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem);
// SIZE_T __stdcall HeapSize(HANDLE hHeap, DWORD dwFlags, LPCVOID lpMem);
// BOOL __stdcall GetVersionExA(LPOSVERSIONINFOA lpVersionInformation);
// void __stdcall OutputDebugStringA(LPCSTR lpOutputString);
// LPVOID __stdcall MapViewOfFile(HANDLE hFileMappingObject, DWORD dwDesiredAccess, DWORD dwFileOffsetHigh, DWORD dwFileOffsetLow, SIZE_T dwNumberOfBytesToMap);
// HANDLE __stdcall CreateFileMappingA(HANDLE hFile, LPSECURITY_ATTRIBUTES lpFileMappingAttributes, DWORD flProtect, DWORD dwMaximumSizeHigh, DWORD dwMaximumSizeLow, LPCSTR lpName);
// DWORD __stdcall GetFileSize(HANDLE hFile, LPDWORD lpFileSizeHigh);
// UINT __stdcall GetWindowsDirectoryA(LPSTR lpBuffer, UINT uSize);
// LPVOID __stdcall HeapAlloc(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes);
// int __stdcall lstrcmpiA(LPCSTR lpString1, LPCSTR lpString2);
// BOOL __stdcall IsBadReadPtr(const void *lp, UINT_PTR ucb);
// LPSTR __stdcall lstrcpynA(LPSTR lpString1, LPCSTR lpString2, int iMaxLength);
// BOOL __stdcall QueryPerformanceCounter(LARGE_INTEGER *lpPerformanceCount);
// _DWORD __thiscall FakeDP::AddPlayerToGroup(FakeDP *__hidden this, unsigned int, unsigned int); weak
// _DWORD __thiscall FakeDP::EnumSessions(FakeDP *__hidden this, struct DPSESSIONDESC2 *, unsigned int, int (__stdcall *)(const struct DPSESSIONDESC2 *, unsigned int *, unsigned int, void *), void *, unsigned int); weak
// _DWORD __thiscall FakeDP::GetCaps(FakeDP *__hidden this, struct DPCAPS *, unsigned int); weak
// _DWORD __thiscall FakeDP::SendEx(FakeDP *__hidden this, unsigned int, unsigned int, unsigned int, void *, unsigned int, unsigned int, unsigned int, void *, unsigned int *); weak
// _DWORD __thiscall FakeDP::SendChatMessage(FakeDP *__hidden this, unsigned int, unsigned int, unsigned int, struct DPCHAT *); weak
// _DWORD __thiscall FakeDP::SetSessionDesc(FakeDP *__hidden this, struct DPSESSIONDESC2 *, unsigned int); weak
// _DWORD __thiscall FakeDP::Send(FakeDP *__hidden this, unsigned int, unsigned int, unsigned int, void *, unsigned int); weak
// _DWORD __thiscall FakeDP::CreateGroup(FakeDP *__hidden this, unsigned int *, struct DPNAME *, void *, unsigned int, unsigned int); weak
// _DWORD __thiscall FakeDP::Receive(FakeDP *__hidden this, unsigned int *, unsigned int *, unsigned int, void *, unsigned int *); weak
// _DWORD __thiscall FakeDP::DestroyPlayer(FakeDP *__hidden this, unsigned int); weak
// _DWORD __thiscall FakeDP::CreatePlayer(FakeDP *__hidden this, unsigned int *, struct DPNAME *, void *, void *, unsigned int, unsigned int); weak
// _DWORD __thiscall FakeDP::SetPlayerData(FakeDP *__hidden this, unsigned int, void *, unsigned int, unsigned int); weak
// _DWORD __thiscall FakeDP::Open(FakeDP *__hidden this, struct DPSESSIONDESC2 *, unsigned int); weak
// void __thiscall FakeDP::~FakeDP(FakeDP *__hidden this); weak
// _DWORD __thiscall FakeDP::Close(FakeDP *__hidden this); weak
// _DWORD __thiscall FakeDP::InitializeConnection(FakeDP *__hidden this, void *, unsigned int); weak
// FakeDP *__thiscall FakeDP::FakeDP(FakeDP *__hidden this); weak
// _DWORD __thiscall FakeDP::EnumConnections(FakeDP *__hidden this, const struct _GUID *, int (__stdcall *)(const struct _GUID *, void *, unsigned int, const struct DPNAME *, unsigned int, void *), void *, unsigned int); weak
// _DWORD __thiscall FakeDP::GetSessionDesc(FakeDP *__hidden this, void *, unsigned int *); weak
// _DWORD __thiscall FakeDP::GetPlayerData(FakeDP *__hidden this, unsigned int, void *, unsigned int *, unsigned int); weak
// DWORD __stdcall MsgWaitForMultipleObjects(DWORD nCount, const HANDLE *pHandles, BOOL fWaitAll, DWORD dwMilliseconds, DWORD dwWakeMask);
// ATOM __stdcall RegisterClassA(const WNDCLASSA *lpWndClass);
// HICON __stdcall LoadIconA(HINSTANCE hInstance, LPCSTR lpIconName);
// HCURSOR __stdcall LoadCursorA(HINSTANCE hInstance, LPCSTR lpCursorName);
// INT_PTR __stdcall DialogBoxParamA(HINSTANCE hInstance, LPCSTR lpTemplateName, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam);
// BOOL __stdcall EndDialog(HWND hDlg, INT_PTR nResult);
// BOOL __stdcall SetWindowTextA(HWND hWnd, LPCSTR lpString);
// LRESULT __stdcall SendMessageA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
// LONG __stdcall GetWindowLongA(HWND hWnd, int nIndex);
// BOOL __stdcall SetDlgItemTextA(HWND hDlg, int nIDDlgItem, LPCSTR lpString);
// HWND __stdcall CreateWindowExA(DWORD dwExStyle, LPCSTR lpClassName, LPCSTR lpWindowName, DWORD dwStyle, int X, int Y, int nWidth, int nHeight, HWND hWndParent, HMENU hMenu, HINSTANCE hInstance, LPVOID lpParam);
// int wsprintfA(LPSTR, LPCSTR, ...);
// BOOL __stdcall SetDlgItemInt(HWND hDlg, int nIDDlgItem, UINT uValue, BOOL bSigned);
// UINT __stdcall GetDlgItemInt(HWND hDlg, int nIDDlgItem, BOOL *lpTranslated, BOOL bSigned);
// UINT __stdcall IsDlgButtonChecked(HWND hDlg, int nIDButton);
// UINT __stdcall GetDlgItemTextA(HWND hDlg, int nIDDlgItem, LPSTR lpString, int cchMax);
// HWND __stdcall GetForegroundWindow();
// BOOL __stdcall CheckDlgButton(HWND hDlg, int nIDButton, UINT uCheck);
// BOOL __stdcall InvalidateRect(HWND hWnd, const RECT *lpRect, BOOL bErase);
// BOOL __stdcall EnableWindow(HWND hWnd, BOOL bEnable);
// BOOL __stdcall KillTimer(HWND hWnd, UINT_PTR uIDEvent);
// UINT_PTR __stdcall SetTimer(HWND hWnd, UINT_PTR nIDEvent, UINT uElapse, TIMERPROC lpTimerFunc);
// HWND __stdcall GetDlgItem(HWND hDlg, int nIDDlgItem);
// int __stdcall ReleaseDC(HWND hWnd, HDC hDC);
// HDC __stdcall GetDC(HWND hWnd);
// BOOL __stdcall GetMessageA(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax);
// BOOL __stdcall PeekMessageA(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg);
// void __stdcall PostQuitMessage(int nExitCode);
// HWND __stdcall SetFocus(HWND hWnd);
// BOOL __stdcall SetRect(LPRECT lprc, int xLeft, int yTop, int xRight, int yBottom);
// BOOL __stdcall ShowWindow(HWND hWnd, int nCmdShow);
// LRESULT __stdcall DefWindowProcA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
// int __stdcall ShowCursor(BOOL bShow);
// BOOL __stdcall UpdateWindow(HWND hWnd);
// int __stdcall MessageBoxA(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, UINT uType);
// BOOL __stdcall SetCursorPos(int X, int Y);
// void __stdcall mouse_event(DWORD dwFlags, DWORD dx, DWORD dy, DWORD dwData, ULONG_PTR dwExtraInfo);
// HANDLE __stdcall LoadImageA(HINSTANCE hInst, LPCSTR name, UINT type, int cx, int cy, UINT fuLoad);
// BOOL __stdcall UnregisterClassA(LPCSTR lpClassName, HINSTANCE hInstance);
// BOOL __stdcall DestroyWindow(HWND hWnd);
// BOOL __stdcall ClipCursor(const RECT *lpRect);
// BOOL __stdcall WaitMessage();
// LRESULT __stdcall DispatchMessageA(const MSG *lpMsg);
// BOOL __stdcall TranslateMessage(const MSG *lpMsg);
// int __stdcall DrawTextA(HDC hdc, LPCSTR lpchText, int cchText, LPRECT lprc, UINT format);
// BOOL __stdcall ClientToScreen(HWND hWnd, LPPOINT lpPoint);
// BOOL __stdcall GetClientRect(HWND hWnd, LPRECT lpRect);
// int __stdcall bind(SOCKET s, const struct sockaddr *name, int namelen);
// _DWORD __stdcall AIL_ms_count(); weak
// int __stdcall AIL_set_3D_room_type(_DWORD, _DWORD); weak
// int __stdcall AIL_3D_position(_DWORD, _DWORD, _DWORD, _DWORD); weak
// int __stdcall AIL_set_3D_sample_volume(_DWORD, _DWORD); weak
// int __stdcall AIL_quick_handles(_DWORD, _DWORD, _DWORD); weak
// int __stdcall AIL_quick_startup(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD); weak
// int __stdcall AIL_3D_sample_volume(_DWORD); weak
// int __stdcall AIL_3D_user_data(_DWORD, _DWORD); weak
// int __stdcall AIL_3D_sample_distances(_DWORD, _DWORD, _DWORD); weak
// int __stdcall AIL_set_3D_user_data(_DWORD, _DWORD, _DWORD); weak
// int __stdcall AIL_3D_sample_status(_DWORD); weak
// int __stdcall AIL_start_3D_sample(_DWORD); weak
// int __stdcall AIL_set_3D_sample_effects_level(_DWORD, _DWORD); weak
// int __stdcall AIL_set_3D_sample_distances(_DWORD, _DWORD, _DWORD); weak
// int __stdcall AIL_set_3D_orientation(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); weak
// int __stdcall AIL_set_3D_position(_DWORD, _DWORD, _DWORD, _DWORD); weak
// int __stdcall AIL_set_3D_sample_loop_count(_DWORD, _DWORD); weak
// int __stdcall AIL_set_3D_sample_info(_DWORD, _DWORD); weak
// int __stdcall AIL_start_sample(_DWORD); weak
// int __stdcall AIL_set_sample_volume(_DWORD, _DWORD); weak
// int __stdcall AIL_set_sample_loop_count(_DWORD, _DWORD); weak
// int __stdcall AIL_set_sample_playback_rate(_DWORD, _DWORD); weak
// int __stdcall AIL_set_sample_address(_DWORD, _DWORD, _DWORD); weak
// int __stdcall AIL_set_sample_type(_DWORD, _DWORD, _DWORD); weak
// int __stdcall AIL_init_sample(_DWORD); weak
// int __stdcall AIL_sample_status(_DWORD); weak
// int __stdcall AIL_end_sample(_DWORD); weak
// int __stdcall AIL_end_3D_sample(_DWORD); weak
// int __stdcall AIL_stop_3D_sample(_DWORD); weak
// int __stdcall AIL_resume_3D_sample(_DWORD); weak
// int __stdcall AIL_set_3D_sample_playback_rate(_DWORD, _DWORD); weak
// int __stdcall AIL_set_3D_velocity_vector(_DWORD, _DWORD, _DWORD, _DWORD); weak
// int __stdcall AIL_3D_sample_loop_count(_DWORD); weak
// int __stdcall AIL_sample_loop_count(_DWORD); weak
// int __stdcall AIL_set_timer_user(_DWORD, _DWORD); weak
// int __stdcall AIL_set_timer_frequency(_DWORD, _DWORD); weak
// int __stdcall AIL_set_redist_directory(_DWORD); weak
// _DWORD __stdcall AIL_quick_shutdown(); weak
// int __stdcall AIL_allocate_3D_sample_handle(_DWORD); weak
// int __stdcall AIL_3D_provider_attribute(_DWORD, _DWORD, _DWORD); weak
// int __stdcall AIL_release_sample_handle(_DWORD); weak
// int __stdcall AIL_allocate_sample_handle(_DWORD); weak
// int __stdcall AIL_release_3D_sample_handle(_DWORD); weak
// int __stdcall AIL_close_3D_provider(_DWORD); weak
// int __stdcall AIL_open_3D_provider(_DWORD); weak
// int __stdcall AIL_enumerate_3D_providers(_DWORD, _DWORD, _DWORD); weak
// int __stdcall AIL_set_3D_speaker_type(_DWORD, _DWORD); weak
// int __stdcall AIL_digital_handle_reacquire(_DWORD); weak
// int __stdcall AIL_active_sample_count(_DWORD); weak
// int __stdcall AIL_active_3D_sample_count(_DWORD); weak
// int __stdcall AIL_open_3D_listener(_DWORD); weak
// int __stdcall AIL_pause_stream(_DWORD, _DWORD); weak
// int __stdcall AIL_register_timer(_DWORD); weak
// int __stdcall AIL_start_timer(_DWORD); weak
// int __stdcall AIL_stop_timer(_DWORD); weak
// int __stdcall AIL_digital_handle_release(_DWORD); weak
// int __stdcall AIL_set_stream_loop_count(_DWORD, _DWORD); weak
// int __stdcall AIL_start_stream(_DWORD); weak
// int __stdcall AIL_open_stream(_DWORD, _DWORD, _DWORD); weak
// int __stdcall AIL_close_stream(_DWORD); weak
// int __stdcall AIL_set_stream_volume(_DWORD, _DWORD); weak
// int __stdcall AIL_stream_position(_DWORD); weak
// int __stdcall AIL_set_stream_position(_DWORD, _DWORD); weak
// int __stdcall AIL_close_3D_listener(_DWORD); weak
// HRESULT __stdcall CoInitialize(LPVOID pvReserved);
// void __stdcall CoUninitialize();
// HRESULT __stdcall CoCreateInstance(const IID *const rclsid, LPUNKNOWN pUnkOuter, DWORD dwClsContext, const IID *const riid, LPVOID *ppv);