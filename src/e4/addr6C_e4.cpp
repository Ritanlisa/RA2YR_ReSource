// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_6C6540_e4.hpp"
#include "e4/classes/E4Recv_6C8840_e4.hpp"
#include "e4/classes/E4Recv_6C8900_e4.hpp"
#include "e4/classes/E4Recv_6C89B0_e4.hpp"
#include "e4/classes/E4Recv_6C8B10_e4.hpp"
#include "e4/classes/E4Recv_6C8E70_e4.hpp"
#include "e4/classes/E4Recv_6C96E0_e4.hpp"
#include "e4/classes/E4Recv_6C9780_e4.hpp"
#include "e4/classes/E4Recv_6C9940_e4.hpp"
#include "e4/classes/E4Recv_6C9960_e4.hpp"
#include "e4/classes/E4Recv_6C9AC0_e4.hpp"
#include "e4/classes/E4Recv_6C9F10_e4.hpp"
#include "e4/classes/E4Recv_6CA1E0_e4.hpp"
#include "e4/classes/E4Recv_6CA5A0_e4.hpp"
#include "e4/classes/E4Recv_6CE570_e4.hpp"
#include "e4/classes/E4Recv_6CF8F0_e4.hpp"
#include "e4/classes/E4Recv_6CFE10_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/LinkedList_flat_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/BombClass_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/E4Recv_6A87F0_e4.hpp"
#include "e4/classes/E4Recv_6A93F0_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/E4Recv_6D1570_e4.hpp"
#include "e4/classes/E4Recv_6D1E80_e4.hpp"
#include "e4/classes/E4Recv_6D4E00_e4.hpp"
#include "e4/classes/E4Recv_6E0290_e4.hpp"
#include "e4/classes/E4Recv_6E2790_e4.hpp"
#include "e4/classes/GadgetClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/TextRenderer_e4.hpp"
#include "e4/classes/Rect_Point_e4.hpp"
#include "e4/classes/ResultNode_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/FileClass_e4.hpp"  // G42.33 b3: FileClass body (SetName/Open2)
#include "e4/classes/ComPtr_e4.hpp"  // G42.33 b3: ComPtr body (Release)
#include "e4/classes/RawFileClass_e4.hpp"  // G42.33 b9: RawFileClass body
// G42.33 b3 TU-local carriers/supplies
// G42.33 b8: Performance minimal carrier
namespace gamemd { struct Performance { static int MeasureTicks(void *aP0); }; }  // 0x5CAFC0 static-form (G42.33 b8)
// G42.33 b9 carrier includes (C2027 undefined types; full e4 hpps exist)
#include "e4/classes/AudioController_e4.hpp"  // Stop member
#include "e4/classes/AudioFile_e4.hpp"  // Stop static-form (added below)
#include "e4/classes/AudioFileClass_e4.hpp"  // Release static vararg
#include "e4/classes/Buffer_e4.hpp"  // Init(int,int) member
#include "e4/classes/StaticButtonClass_e4.hpp"  // Draw static-form (added below)
#include "e4/classes/Text_e4.hpp"  // MeasureWidth static
#include "e4/classes/ThemeClass_e4.hpp"  // Play member
#include "e4/classes/SwizzleManagerClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Init_e4.hpp"  // G42.36 C2027 supply
// G42.33 b9 TU-local minimal carriers (fwd-only in _fwd_e4.hpp)
namespace gamemd { struct StringList { int Find(int aP0); }; }  // minimal E2 (0x6c9361 receiver)
namespace gamemd { struct WideChar { static unsigned int ToLong(int aP0, int aP1, int aP2); }; }  // minimal E2 static-form
// G42.33 b9 TU-local fwd decls (use-before-def in this TU)
namespace gamemd {
void nullsub_234();  // def later in this TU (atexit target)
void sub_6C6B60(void);  // def later in this TU (atexit target)
// G42.33 b12 TU-local carriers 2 (fwd-only in _fwd_e4.hpp)
namespace gamemd { struct LineTrail { unsigned char lineTrailer[4]; }; }  // minimal E2 (compile stride; layout via member_lookup pending)
namespace gamemd { struct ShapeButtonClass { static void Init(void * aP0); static void Destructor(void * aP0); }; }  // minimal E2 static-form
// G42.33 b12 TU-local fwd decls 2 (use-before-def atexit targets)
namespace gamemd {
void sub_6CFBD0();
void sub_6CFC20();
void sub_6CFC60();
}
}
namespace gamemd { struct rc_ptr_base { void *vfptr; }; }  // fwd-only in _fwd_e4.hpp; minimal E2 (v264 storage)
namespace gamemd { struct NetMessage { static char * Pack4(void *aP0, const void *aP1, int aP2); static char * Pack(void *aP0, const void *aP1, void *aP2, int aP3); }; }  // 0x4CB700/0x4CB830 thiscall static-form (G42.33 b3)

// 0x6C6F50
namespace gamemd {
int ProcessGameResults(char a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6C6F50)
}
} // namespace gamemd

// 0x6C87F0
namespace gamemd {
int sub_6C87F0()
{
  int v1; // [esp+4h] [ebp-4h]

  dword_B0BD28 = TimerGetTicks(); /*0x6c87fc*/
  dword_B0BD2C = v1; /*0x6c8805*/
  byte_B0BDB4 = 1; /*0x6c880a*/
  return v1; /*0x6c8811*/
}
}
// 0x6C8FF0
namespace gamemd {
int DlgProcScoreScreen(HWND hWnd, UINT a2, WPARAM wParam, LPARAM a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6C8FF0)
}
}
// 0x6CA1E0
namespace gamemd {
int E4Recv_6CA1E0::sub_6CA1E0(char * Source)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6CA1E0)
}
}
// 0x6CA4A0
namespace gamemd {
void sub_6CA4A0(wchar_t * String2, int a2, int a3)
{
  const wchar_t **v3; // edi
  const wchar_t **v4; // esi
  const wchar_t *v5; // eax

  if ( String2 && off_8421A8 ) /*0x6ca4b2*/
  {
    v3 = (const wchar_t **)&off_8421A8; /*0x6ca4b4*/
    v4 = (const wchar_t **)&off_8421A8; /*0x6ca4b9*/
    while ( _wcsicmp(*v3, String2) ) /*0x6ca4c9*/
    {
      v5 = v4[2]; /*0x6ca4cb*/
      v4 += 2; /*0x6ca4ce*/
      v3 = v4; /*0x6ca4d3*/
      if ( !v5 ) /*0x6ca4d5*/
        return; /*0x6ca4d5*/
    }
    ((void (__fastcall *)(int, int))v3[1])(a2, a3); /*0x6ca4e5*/
  }
}
}
// 0x6CA4F0
namespace gamemd {
wchar_t * sub_6CA4F0(unsigned int * a1)  // G42.33 b9 truth wchar_t* return
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6CA4F0)
}
}
// 0x6CA6A0
namespace gamemd {
int sub_6CA6A0(const wchar_t * String1, int a2)  // G42.33 b9 truth const wchar_t*
{
  const wchar_t *v2; // ebx
  wchar_t *v4; // eax
  wchar_t *v5; // esi
  int v6; // edi
  int result; // eax
  const wchar_t **v8; // eax
  wchar_t **v9; // esi
  wchar_t *v10; // ecx

  v2 = String1; /*0x6ca6a4*/
  v4 = (wchar_t *)wcschr(String1, 0x3Au); /*0x6ca6ab*/
  v5 = v4; /*0x6ca6b0*/
  if ( v4 ) /*0x6ca6b7*/
  {
    *v4 = 0; /*0x6ca6be*/
    *(unsigned int *)(a2 + 12) = wcstol(v2, 0, 0); /*0x6ca6cb*/
    v2 = v5 + 1; /*0x6ca6ce*/
  }
  v6 = 0; /*0x6ca6d7*/
  result = 2; /*0x6ca6db*/
  if ( off_8421D8 ) /*0x6ca6e0*/
  {
    v8 = (const wchar_t **)&off_8421D8; /*0x6ca6e2*/
    v9 = (wchar_t **)&off_8421D8; /*0x6ca6e7*/
    while ( 1 ) /*0x6ca6ed*/
    {
      result = _wcsicmp(v2, *v8); /*0x6ca6ed*/
      if ( !result ) /*0x6ca6f7*/
        break; /*0x6ca6f7*/
      v10 = v9[2]; /*0x6ca6f9*/
      v9 += 2; /*0x6ca6fc*/
      ++v6; /*0x6ca6ff*/
      v8 = (const wchar_t **)v9; /*0x6ca700*/
      if ( !v10 ) /*0x6ca704*/
      {
        result = 2; /*0x6ca706*/
        goto LABEL_8; /*0x6ca706*/
      }
    }
    *(unsigned int *)(a2 + 16) = dword_8421DC[2 * v6]; /*0x6ca71a*/
  }
  else
  {
  LABEL_8:
    *(unsigned int *)(a2 + 16) = 2; /*0x6ca70b*/
  }
  return result; /*0x6ca70b*/
}
}
// 0x6CF320
namespace gamemd {
int globalHelper_0CF320(unsigned int * a1, unsigned int * a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x6cf330*/
  else
    return *a1 >= *a2 ? 1 : -1;
}
}
// 0x6CFD60
namespace gamemd {
unsigned int * sub_6CFD60(unsigned int * a1, int a2)
{
  unsigned int *result; // eax
  int v4; // ecx
  int v5; // esi
  int v6; // edi

  result = a1; /*0x6cfd7a*/
  v4 = dword_B0CC24; /*0x6cfd82*/
  v5 = *((unsigned int *)dword_B0FC68 + 2); /*0x6cfd8f*/
  v6 = *((unsigned int *)dword_B0FC68 + 3); /*0x6cfd92*/
  *a1 = *(unsigned int *)dword_B0FC68 + dword_B0CC38 * g_ObjectTrackingPool[a2]; /*0x6cfd95*/
  a1[1] = v4; /*0x6cfd97*/
  a1[2] = v5; /*0x6cfd9a*/
  a1[3] = v6; /*0x6cfd9d*/
  return result; /*0x6cfda0*/
}
}
// 0x6CFDB0
namespace gamemd {
int sub_6CFDB0(int a1)
{
  int result; // eax
  int v2; // ecx

  dword_B0CB54 = a1; /*0x6cfdb5*/
  result = *(unsigned int *)dword_B0FC6C - a1 * *((unsigned int *)dword_B0FC68 + 2); /*0x6cfdc9*/
  v2 = *(unsigned int *)dword_B0FC60 + *((unsigned int *)dword_B0FC60 + 2); /*0x6cfdd6*/
  dword_B0CC2C = result; /*0x6cfddb*/
  if ( result <= v2 ) /*0x6cfde0*/
    dword_B0CC2C = v2; /*0x6cfde2*/
  return result; /*0x6cfdd8*/
}
}
// 0x6C0025
namespace gamemd {
void nullsub_114(int a1, int a2)
{
  ; /*0x6c0025*/
}
} // namespace gamemd

// 0x6C6520
namespace gamemd {
int sub_6C6520()
{
  dword_B0BCF8 = 0; /*0x6c6522*/
  dword_B0BCFC = 0; /*0x6c6527*/
  dword_B0BD00 = 0; /*0x6c652c*/
  dword_B0BD04 = 0; /*0x6c6531*/
  return 0; /*0x6c6536*/
}
} // namespace gamemd

// 0x6C6540
namespace gamemd {
unsigned int * E4Recv_6C6540::sub_6C6540(int a2, wchar_t * String, int a4, int aP1, ControlClass * aP5, int aP3, int aP4)
{

  int Instance; // ebx

  GadgetClass::Construct((ShpButtonClass *)this, aP1, aP5, aP3, aP4, 0, 0); /*0x6c6560*/
  ((Buffer*)((Buffer *)((char *)this + 36)))->Init(0, 0); /*0x6c656c*/
  *((unsigned int *)this + 12) = 0; /*0x6c657e*/
  *((unsigned int *)this + 13) = a4; /*0x6c6585*/
  *(unsigned int *)this = (unsigned int)&vt_StaticButtonClass; /*0x6c6588 G42.33 b9 truth: mov [esi], offset vt*/
  StaticButtonClass::Draw(this, String, 0); /*0x6c658e*/
  if ( aP3 == -1 || aP4 == -1 ) /*0x6c659b*/
  {
    Instance = (int)TextRenderer::GetInstance(); /*0x6c65a8*/
    if ( aP3 == -1 ) /*0x6c65aa*/
      this->M20 = Text::MeasureWidth(*((unsigned int *)this + 12), 0); /*0x6c65b9 G42.33 b9: hpp M20@0x14*/
    if ( aP4 == -1 ) /*0x6c65bf*/
      *((unsigned int *)this + 6) = *(unsigned int *)(Instance + 28); /*0x6c65c4*/
  }
  return (unsigned int *)this; /*0x6c65c9*/

}
} // namespace gamemd

// 0x6C68C0
namespace gamemd {
void sub_6C68C0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6c68cc*/
  dbl_B0BD30 = Math::Sqrt(v0 + v0); /*0x6c68de*/
}
} // namespace gamemd

// 0x6C68F0
namespace gamemd {
void sub_6C68F0()
{
  dbl_B0BDA8 = dbl_B0BD30 / 60.0; /*0x6c68fc*/
}
} // namespace gamemd

// 0x6C6910
namespace gamemd {
void sub_6C6910()
{
  dbl_B0BD88 = 1.0 / dbl_B0BDA8; /*0x6c691c*/
}
} // namespace gamemd

// 0x6C6930
namespace gamemd {
void sub_6C6930()
{
  dbl_B0BD80 = 0.0174532925199433 * 45.0; /*0x6c693c*/
}
} // namespace gamemd

// 0x6C6950
namespace gamemd {
void sub_6C6950()
{
  dbl_B0BD38 = 0.0174532925199433 * 60.0; /*0x6c695c*/
}
} // namespace gamemd

// 0x6C6970
namespace gamemd {
void sub_6C6970()
{
  dbl_B0BD08 = 0.0174532925199433 * 90.0; /*0x6c697c*/
}
} // namespace gamemd

// 0x6C6990
namespace gamemd {
long long sub_6C6990()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0BD08 - dbl_B0BD38); /*0x6c69a2*/
  result = Math::RoundToInt(v0 * dbl_B0BD30 * 0.5); /*0x6c69b6*/
  dword_B0BDB0 = result; /*0x6c69bb*/
  return result; /*0x6c69c0*/
}
} // namespace gamemd

// 0x6C69D0
namespace gamemd {
void sub_6C69D0()
{
  dbl_B0BD40 = Math::ArcTan((double)dword_B0BDB0 * 0.00390625); /*0x6c69e7*/
}
} // namespace gamemd

// 0x6C6A00
namespace gamemd {
void sub_6C6A00()
{
  dbl_B0BD70 = Math::ArcTan((double)(2 * dword_B0BDB0) / dbl_B0BD30); /*0x6c6a22*/
}
} // namespace gamemd

// 0x6C6A30
namespace gamemd {
long long sub_6C6A30()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0BDB0) + 0.5); /*0x6c6a4b*/
  dword_B0BDA4 = result; /*0x6c6a50*/
  return result; /*0x6c6a56*/
}
} // namespace gamemd

// 0x6C6A60
namespace gamemd {
int sub_6C6A60()
{
  word_B0BD20 = 0; /*0x6c6a62*/
  word_B0BD22 = 0; /*0x6c6a68*/
  return 0; /*0x6c6a6e*/
}
} // namespace gamemd

// 0x6C6A70
namespace gamemd {
int sub_6C6A70()
{
  dword_B0BD60 = 0; /*0x6c6a72*/
  dword_B0BD64 = 0; /*0x6c6a77*/
  dword_B0BD68 = 0; /*0x6c6a7c*/
  return 0; /*0x6c6a81*/
}
} // namespace gamemd

// 0x6C6A90
namespace gamemd {
int sub_6C6A90()
{
  dword_B0BDA0 = 0; /*0x6c6a95*/
  dword_B0BD98 = 128; /*0x6c6a9f*/
  dword_B0BD9C = 128; /*0x6c6aa4*/
  return 128; /*0x6c6aa9*/
}
} // namespace gamemd

// 0x6C6AB0
namespace gamemd {
int sub_6C6AB0()
{
  dword_B0BD10 = 0; /*0x6c6ab2*/
  dword_B0BD14 = 0; /*0x6c6ab7*/
  dword_B0BD18 = 0; /*0x6c6abc*/
  dword_B0BD1C = 0; /*0x6c6ac1*/
  return 0; /*0x6c6ac6*/
}
} // namespace gamemd

// 0x6C6AD0
namespace gamemd {
int sub_6C6AD0()
{
  dword_B0BD28 = TimerGetTicks(); /*0x6c6adf*/
  return atexit(nullsub_234); /*0x6c6aea*/
}
} // namespace gamemd

// 0x6C6AF0
namespace gamemd {
void nullsub_234()
{
  ; /*0x6c6af0*/
}
} // namespace gamemd

// 0x6C6B40
namespace gamemd {
int sub_6C6B40()
{
  g_SidebarButtonState = 0; /*0x6c6b47*/
  dword_B0BD54 = 0; /*0x6c6b4c*/
  dword_B0BD58 = 0; /*0x6c6b51*/
  return atexit(sub_6C6B60); /*0x6c6b5c*/
}
} // namespace gamemd

// 0x6C6B60
namespace gamemd {
void sub_6C6B60()
{
  g_SidebarButtonState = 0; /*0x6c6b65*/
  RA2_OPDEL((void *)(unsigned int)dword_B0BD58); /*0x6c6b70*/
}
} // namespace gamemd

// 0x6C8840
namespace gamemd {
void * E4Recv_6C8840::sub_6C8840(unsigned int * Block, char a2)  // G42.33 b9 hpp void* sync
{

  *(unsigned int *)Block = (unsigned int)&vt_rc_ptr; /*0x6c8843*/
  ((ComPtr *)((ComPtr *)Block))->Release(); /*0x6c8849*/
  if ( (a2 & 1) != 0 ) /*0x6c8853*/
    __3_YAXPAX_Z(Block); /*0x6c8856*/
  return Block; /*0x6c8860*/

}
} // namespace gamemd

// 0x6C8900
namespace gamemd {
char E4Recv_6C8900::sub_6C8900()
{

  void *vtable0; // eax
  int v4; // ebp
  void *v5; // edx
  void *vtable2; // esi
  void *v7; // [esp+4h] [ebp-4h]

  vtable0 = (void *)this->M4; /*0x6c8904 G42.33 b12: truth vtable0(void*)=count*/
  if ( (int)this->M4 < (int)((unsigned int *)this)[0] ) /*0x6c890b*/
    return 0; /*0x6c890d*/
  v4 = 2 * (unsigned int)vtable0; /*0x6c8913*/
  if ( 2 * (int)vtable0 < 10 ) /*0x6c891b*/
    v4 = 10; /*0x6c891d*/
  v5 = (void *)__2_YAPAXI_Z(32776 * v4); /*0x6c8932*/
  memset(v5, 0, 4 * ((unsigned int)(32776 * v4) >> 2)); /*0x6c893d*/
  v7 = v5; /*0x6c8947*/
  vtable2 = (void *)((unsigned int *)this)[0]; /*0x6c894d*/
  if ( vtable2 ) /*0x6c8952*/
    qmemcpy(v5, vtable2, 32776 * (int)this->M4); /*0x6c8967*/
  __3_YAXPAX_Z((void *)((unsigned int *)this)[0]); /*0x6c8974*/
  ((unsigned int *)this)[0] = (unsigned int)v4; /*0x6c8980*/
  ((unsigned int *)this)[0] = (unsigned int)v7; /*0x6c8983*/
  return 1; /*0x6c890f*/

}
} // namespace gamemd

// 0x6C8990
namespace gamemd {
int sub_6C8990()
{
  dword_B0BDC0 = 0; /*0x6c8992*/
  dword_B0BDC4 = 0; /*0x6c8997*/
  dword_B0BDC8 = 0; /*0x6c899c*/
  dword_B0BDCC = 0; /*0x6c89a1*/
  return 0; /*0x6c89a6*/
}
} // namespace gamemd

// 0x6C89B0
namespace gamemd {
void * E4Recv_6C89B0::sub_6C89B0(size_t Size)
{

  void *v3; // eax

  this->M4 = (unsigned int)Size; /*0x6c89b8*/
  v3 = (void *)__2_YAPAXI_Z(Size); /*0x6c89ba*/
  ((unsigned int *)this)[0] = (unsigned int)v3; /*0x6c89c2*/
  ((unsigned int *)this)[0] = (unsigned int)v3; /*0x6c89c5*/
  return this; /*0x6c89ca*/

}
} // namespace gamemd

// 0x6C8B10
namespace gamemd {
int E4Recv_6C8B10::sub_6C8B10(int a2, int a3, short a4, short a5)
{

  unsigned short *vtable2; // edi
  unsigned int *v8; // eax
  int v9; // esi
  unsigned int v10; // eax
  char *v11; // edi
  unsigned short *v12; // [esp+10h] [ebp-10h]
  int v13; // [esp+18h] [ebp-8h] BYREF
  unsigned char *v14; // [esp+2Ch] [ebp+Ch]
  int v15; // [esp+30h] [ebp+10h]

  vtable2 = (unsigned short *)((unsigned int *)this)[0]; /*0x6c8b19*/
  if ( (char *)(vtable2 + 6) > (char *)((unsigned int *)this)[0] + (unsigned int)this->M4 ) /*0x6c8b28*/
    return 0; /*0x6c8b28*/
  v12 = (unsigned short *)((unsigned int *)this)[0]; /*0x6c8b2c*/
  ((unsigned int *)this)[0] = (unsigned int)(vtable2 + 6); /*0x6c8b30*/
  if ( !vtable2 ) /*0x6c8b33*/
    return 0; /*0x6c8b35*/
  *vtable2 = a4; /*0x6c8b4f*/
  vtable2[1] = a5; /*0x6c8b52*/
  vtable2[2] = *(unsigned short *)(a3 + 8); /*0x6c8b5a*/
  vtable2[3] = *(unsigned short *)(a3 + 12); /*0x6c8b66*/
  *((unsigned int *)vtable2 + 2) = ((unsigned int *)this)[0]; /*0x6c8b70*/
  v8 = CellStruct::Copy((CellStruct *)a3, &v13); /*0x6c8b73*/
  v9 = a2; /*0x6c8b7a*/
  v14 = (unsigned char *)(*(int (**)(int, unsigned int, unsigned int))(*(unsigned int *)a2 + 92))(a2, *v8, v8[1]); /*0x6c8b92*/
  v15 = 0; /*0x6c8b9b*/
  if ( *(int *)(a3 + 12) > 0 ) /*0x6c8ba3*/
  {
    while ( 1 ) /*0x6c8bbb*/
    {
      v10 = Map_Append(v14, (int)((char *)&g_SidebarButtonState + 128), *(unsigned int *)(a3 + 8)); /*0x6c8bbb G42.33 b9 truth: offset unk_B0BDD0 = +0x80*/
      v11 = (char *)((unsigned int *)this)[0]; /*0x6c8bc0*/
      if ( &v11[v10] > (char *)((unsigned int *)this)[0] + (unsigned int)this->M4 || (((unsigned int *)this)[0] = (unsigned int)&v11[v10], !v11) ) /*0x6c8bd4*/
      {
        (*(void (**)(int))(*(unsigned int *)v9 + 96))(v9); /*0x6c8c16*/
        return 0; /*0x6c8c22*/
      }
      qmemcpy(v11, (char *)&g_SidebarButtonState + 128, v10); /*0x6c8be0 G42.33 b9 truth: +0x80*/
      ++v15; /*0x6c8bf4*/
      v14 += (*(int (**)(int))(*(unsigned int *)a2 + 116))(a2); /*0x6c8c06*/
      if ( v15 >= *(unsigned int *)(a3 + 12) ) /*0x6c8c0a*/
        break; /*0x6c8c0a*/
      v9 = a2; /*0x6c8c0c*/
    }
    vtable2 = v12; /*0x6c8c25*/
    v9 = a2; /*0x6c8c29*/
  }
  (*(void (**)(int))(*(unsigned int *)v9 + 96))(v9); /*0x6c8c31*/
  return (int)vtable2; /*0x6c8b37*/

}
} // namespace gamemd

// 0x6C8C60
namespace gamemd {
int sub_6C8C60()
{
  dword_B0BED8 = 0; /*0x6c8c62*/
  dword_B0BEDC = 0; /*0x6c8c67*/
  dword_B0BEE0 = 0; /*0x6c8c6c*/
  dword_B0BEE4 = 0; /*0x6c8c71*/
  return 0; /*0x6c8c76*/
}
} // namespace gamemd

// 0x6C8C80
namespace gamemd {
void sub_6C8C80()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6c8c8c*/
  dbl_B0BEF0 = Math::Sqrt(v0 + v0); /*0x6c8c9e*/
}
} // namespace gamemd

// 0x6C8CB0
namespace gamemd {
void sub_6C8CB0()
{
  dbl_B0BF58 = dbl_B0BEF0 / 60.0; /*0x6c8cbc*/
}
} // namespace gamemd

// 0x6C8CD0
namespace gamemd {
void sub_6C8CD0()
{
  dbl_B0BF40 = 1.0 / dbl_B0BF58; /*0x6c8cdc*/
}
} // namespace gamemd

// 0x6C8CF0
namespace gamemd {
void sub_6C8CF0()
{
  dbl_B0BF20 = 0.0174532925199433 * 45.0; /*0x6c8cfc*/
}
} // namespace gamemd

// 0x6C8D10
namespace gamemd {
void sub_6C8D10()
{
  dbl_B0BEF8 = 0.0174532925199433 * 60.0; /*0x6c8d1c*/
}
} // namespace gamemd

// 0x6C8D30
namespace gamemd {
void sub_6C8D30()
{
  dbl_B0BED0 = 0.0174532925199433 * 90.0; /*0x6c8d3c*/
}
} // namespace gamemd

// 0x6C8D50
namespace gamemd {
long long sub_6C8D50()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0BED0 - dbl_B0BEF8); /*0x6c8d62*/
  result = Math::RoundToInt(v0 * dbl_B0BEF0 * 0.5); /*0x6c8d76*/
  dword_B0BF60 = result; /*0x6c8d7b*/
  return result; /*0x6c8d80*/
}
} // namespace gamemd

// 0x6C8D90
namespace gamemd {
void sub_6C8D90()
{
  dbl_B0BF00 = Math::ArcTan((double)dword_B0BF60 * 0.00390625); /*0x6c8da7*/
}
} // namespace gamemd

// 0x6C8DC0
namespace gamemd {
void sub_6C8DC0()
{
  dbl_B0BF18 = Math::ArcTan((double)(2 * dword_B0BF60) / dbl_B0BEF0); /*0x6c8de2*/
}
} // namespace gamemd

// 0x6C8DF0
namespace gamemd {
long long sub_6C8DF0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0BF60) + 0.5); /*0x6c8e0b*/
  dword_B0BF54 = result; /*0x6c8e10*/
  return result; /*0x6c8e16*/
}
} // namespace gamemd

// 0x6C8E20
namespace gamemd {
int sub_6C8E20()
{
  word_B0BEE8 = 0; /*0x6c8e22*/
  word_B0BEEA = 0; /*0x6c8e28*/
  return 0; /*0x6c8e2e*/
}
} // namespace gamemd

// 0x6C8E30
namespace gamemd {
int sub_6C8E30()
{
  dword_B0BF08 = 0; /*0x6c8e32*/
  dword_B0BF0C = 0; /*0x6c8e37*/
  dword_B0BF10 = 0; /*0x6c8e3c*/
  return 0; /*0x6c8e41*/
}
} // namespace gamemd

// 0x6C8E50
namespace gamemd {
int sub_6C8E50()
{
  dword_B0BF50 = 0; /*0x6c8e55*/
  dword_B0BF48 = 128; /*0x6c8e5f*/
  dword_B0BF4C = 128; /*0x6c8e64*/
  return 128; /*0x6c8e69*/
}
} // namespace gamemd

// 0x6C8E70
namespace gamemd {
void * E4Recv_6C8E70::__0Iostream_init_QAE_XZ_5()
{

  return this; /*0x6c8e72*/

}
} // namespace gamemd

// 0x6C8F10
namespace gamemd {
LRESULT sub_6C8F10(HWND hDlg, int nIDDlgItem, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6C8F10)
}
} // namespace gamemd

// 0x6C8FA0
namespace gamemd {
LRESULT sub_6C8FA0(CampaignScore * aP0, int nIDDlgItem, wchar_t * Format)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6C8FA0)
}
} // namespace gamemd

// 0x6C93F0
namespace gamemd {
void sub_6C93F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6c93fc*/
  dbl_B0BF78 = Math::Sqrt(v0 + v0); /*0x6c940e*/
}
} // namespace gamemd

// 0x6C9420
namespace gamemd {
void sub_6C9420()
{
  dbl_B0BFC8 = dbl_B0BF78 / 60.0; /*0x6c942c*/
}
} // namespace gamemd

// 0x6C9440
namespace gamemd {
void sub_6C9440()
{
  dbl_B0BFB0 = 1.0 / dbl_B0BFC8; /*0x6c944c*/
}
} // namespace gamemd

// 0x6C9460
namespace gamemd {
void sub_6C9460()
{
  dbl_B0BFA8 = 0.0174532925199433 * 45.0; /*0x6c946c*/
}
} // namespace gamemd

// 0x6C9480
namespace gamemd {
void sub_6C9480()
{
  dbl_B0BF80 = 0.0174532925199433 * 60.0; /*0x6c948c*/
}
} // namespace gamemd

// 0x6C94A0
namespace gamemd {
void sub_6C94A0()
{
  dbl_B0BF68 = 0.0174532925199433 * 90.0; /*0x6c94ac*/
}
} // namespace gamemd

// 0x6C94C0
namespace gamemd {
long long sub_6C94C0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0BF68 - dbl_B0BF80); /*0x6c94d2*/
  result = Math::RoundToInt(v0 * dbl_B0BF78 * 0.5); /*0x6c94e6*/
  dword_B0BFD0 = result; /*0x6c94eb*/
  return result; /*0x6c94f0*/
}
} // namespace gamemd

// 0x6C9500
namespace gamemd {
void sub_6C9500()
{
  dbl_B0BF88 = Math::ArcTan((double)dword_B0BFD0 * 0.00390625); /*0x6c9517*/
}
} // namespace gamemd

// 0x6C9530
namespace gamemd {
void sub_6C9530()
{
  dbl_B0BFA0 = Math::ArcTan((double)(2 * dword_B0BFD0) / dbl_B0BF78); /*0x6c9552*/
}
} // namespace gamemd

// 0x6C9560
namespace gamemd {
long long sub_6C9560()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0BFD0) + 0.5); /*0x6c957b*/
  dword_B0BFC4 = result; /*0x6c9580*/
  return result; /*0x6c9586*/
}
} // namespace gamemd

// 0x6C9590
namespace gamemd {
int sub_6C9590()
{
  word_B0BF70 = 0; /*0x6c9592*/
  word_B0BF72 = 0; /*0x6c9598*/
  return 0; /*0x6c959e*/
}
} // namespace gamemd

// 0x6C95A0
namespace gamemd {
int sub_6C95A0()
{
  dword_B0BF90 = 0; /*0x6c95a2*/
  dword_B0BF94 = 0; /*0x6c95a7*/
  dword_B0BF98 = 0; /*0x6c95ac*/
  return 0; /*0x6c95b1*/
}
} // namespace gamemd

// 0x6C95C0
namespace gamemd {
int sub_6C95C0()
{
  dword_B0BFC0 = 0; /*0x6c95c5*/
  dword_B0BFB8 = 128; /*0x6c95cf*/
  dword_B0BFBC = 128; /*0x6c95d4*/
  return 128; /*0x6c95d9*/
}
} // namespace gamemd

// 0x6C96E0
namespace gamemd {
unsigned int * E4Recv_6C96E0::sub_6C96E0(unsigned int * a2, int a3)
{

  ObjectClass *v3; // eax
  int v4; // esi
  int v5; // ecx
  char *v6; // edx
  double v7; // st7
  int v9; // [esp+4h] [ebp-10h] BYREF
  int v10; // [esp+8h] [ebp-Ch]
  int v11; // [esp+Ch] [ebp-8h]
  int v12; // [esp+10h] [ebp-4h]

  v3 = (ObjectClass *)this; /*0x6c96e3*/
  v9 = 0; /*0x6c96ec*/
  v4 = 4; /*0x6c96f0*/
  v10 = 0; /*0x6c96f5*/
  v11 = 0; /*0x6c96f9*/
  v12 = 0; /*0x6c96fd*/
  v5 = a3 - (unsigned int)this; /*0x6c9705*/
  v6 = (char *)((char *)&v9 - (char *)v3); /*0x6c9707*/
  do /*0x6c9716*/
  {
    v7 = *(float *)((char *)v3 + v5) + *(float *)v3; /*0x6c970c*/
    v3 = (ObjectClass *)((char *)v3 + 4); /*0x6c970e*/
    --v4; /*0x6c9711*/
    *(float *)((char *)v3 + (unsigned int)v6 - 4) = v7; /*0x6c9712*/
  }
  while ( v4 ); /*0x6c9716*/
  *a2 = v9; /*0x6c9723*/
  a2[1] = v10; /*0x6c9729*/
  a2[2] = v11; /*0x6c9730*/
  a2[3] = v12; /*0x6c9737*/
  return a2; /*0x6c9722*/

}
} // namespace gamemd

// 0x6C9780
namespace gamemd {
unsigned int * E4Recv_6C9780::sub_6C9780(unsigned int * a2, float * a3)
{

  int v3; // esi
  float *v4; // eax
  char *v5; // ecx
  double v6; // st7
  int v8; // [esp+4h] [ebp-10h] BYREF
  int v9; // [esp+8h] [ebp-Ch]
  int v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+10h] [ebp-4h]

  v8 = 0; /*0x6c9789*/
  v9 = 0; /*0x6c978e*/
  v3 = 4; /*0x6c9792*/
  v10 = 0; /*0x6c9797*/
  v11 = 0; /*0x6c979b*/
  v4 = a3; /*0x6c979f*/
  v5 = (char *)((char *)this - (char *)a3); /*0x6c97a3 G42.33 b9 truth: this char**/
  do /*0x6c97b4*/
  {
    v6 = *(float *)((char *)v4 + (unsigned int)v5) - *v4; /*0x6c97aa*/
    ++v4; /*0x6c97ac*/
    --v3; /*0x6c97af*/
    *(float *)((char *)v4 + ((char *)&v8 - (char *)a3) - 4) = v6; /*0x6c97b0 G42.33 b9: paren repair*/
  }
  while ( v3 ); /*0x6c97b4*/
  *a2 = v8; /*0x6c97c1*/
  a2[1] = v9; /*0x6c97c7*/
  a2[2] = v10; /*0x6c97ce*/
  a2[3] = v11; /*0x6c97d5*/
  return a2; /*0x6c97c0*/

}
} // namespace gamemd

// 0x6C9820
namespace gamemd {
int Float_FirstPositive(float * a1)
{
  int v1; // edx

  v1 = 0; /*0x6c9820*/
  while ( *a1 <= 0.0 ) /*0x6c982f*/
  {
    ++v1; /*0x6c9831*/
    ++a1; /*0x6c9832*/
    if ( v1 >= 4 ) /*0x6c9838*/
      return -1; /*0x6c983d*/
  }
  return v1; /*0x6c983d*/
}
} // namespace gamemd

// 0x6C9940
namespace gamemd {
int E4Recv_6C9940::sub_6C9940(char a2, char a3, unsigned char a4)
{

  uint16_t v4; // ax
  int result; // eax

  HIBYTE(v4) = a2; /*0x6c9946*/
  LOBYTE(v4) = a3; /*0x6c9950*/
  result = a4 | (v4 << 8); /*0x6c9957*/
  ((unsigned int *)this)[0] = (unsigned int)result; /*0x6c9959*/
  return result; /*0x6c995c*/

}
} // namespace gamemd

// 0x6C9960
namespace gamemd {
void E4Recv_6C9960::sub_6C9960(wchar_t * String)
{

  int v3; // eax
  wchar_t *v4; // eax

  if ( ((unsigned int *)this)[0] ) /*0x6c9964*/
  {
    __3_YAXPAX_Z((void *)((unsigned int *)this)[0]); /*0x6c996c*/
    ((unsigned int *)this)[0] = 0; /*0x6c9974*/
  }
  if ( String ) /*0x6c9981*/
  {
    v3 = wcslen(String); /*0x6c9984*/
    v4 = (wchar_t *)__2_YAPAXI_Z(2 * v3 + 2); /*0x6c998e*/
    ((unsigned int *)this)[0] = (int)v4; /*0x6c9996*/
    if ( v4 ) /*0x6c999b*/
      wcscpy(v4, String); /*0x6c999f*/
  }

}
} // namespace gamemd

// 0x6C99B0
namespace gamemd {
int sub_6C99B0()
{
  dword_B0BFD8 = 0; /*0x6c99b2*/
  dword_B0BFDC = 0; /*0x6c99b7*/
  dword_B0BFE0 = 0; /*0x6c99bc*/
  dword_B0BFE4 = 0; /*0x6c99c1*/
  return 0; /*0x6c99c6*/
}
} // namespace gamemd

// 0x6C9AC0
namespace gamemd {
void * E4Recv_6C9AC0::sub_6C9AC0()
{

  this->M4 = 0; /*0x6c9ac4*/
  ((unsigned int *)this)[0] = 0; /*0x6c9ac6*/
  ((unsigned int *)this)[0] = 0; /*0x6c9ac9*/
  ((unsigned int *)this)[0] = 0; /*0x6c9acc*/
  ((unsigned int *)this)[0] = 0; /*0x6c9acf*/
  ((unsigned int *)this)[0] = 0; /*0x6c9ad2*/
  ((unsigned int *)this)[0] = 0; /*0x6c9ad5*/
  ((unsigned int *)this)[0] = 0; /*0x6c9ad8*/
  ((unsigned int *)this)[0] = 0; /*0x6c9adb*/
  return this; /*0x6c9ade*/

}
} // namespace gamemd

// 0x6C9F00
namespace gamemd {
void ObjectClass::nullsub_40()
{

  ; /*0x6c9f00*/

}
} // namespace gamemd

// 0x6CA5A0
namespace gamemd {
unsigned int E4Recv_6CA5A0::sub_6CA5A0(wchar_t * Source)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)
{

  wchar_t *v1; // esi
  int v2; // edi
  wchar_t *v3; // ebx
  int v4; // eax
  int v5; // esi
  int v6; // ebp
  wchar_t *v7; // ebx
  int v8; // esi
  wchar_t Destination[12]; // [esp+10h] [ebp-18h] BYREF

  wcsncpy(Destination, (const wchar_t *)Source, 0xCu); /*0x6ca5af*/
  Destination[11] = 0; /*0x6ca5bb*/
  v1 = wcschr(Destination, 0x3Au); /*0x6ca5c7*/
  *v1++ = 0; /*0x6ca5d2*/
  v2 = WideChar::ToLong((int)Destination, 0, 10); /*0x6ca5e2*/
  v3 = wcschr(v1, 0x3Au); /*0x6ca5e9*/
  *v3 = 0; /*0x6ca5f0*/
  v4 = WideChar::ToLong((int)v1, 0, 10); /*0x6ca5f5*/
  v5 = (int)(v3 + 1); /*0x6ca5fa*/
  v6 = v4; /*0x6ca600*/
  v7 = wcschr(v3 + 1, 0x3Au); /*0x6ca607*/
  *v7 = 0; /*0x6ca60e*/
  v8 = WideChar::ToLong(v5, 0, 10); /*0x6ca61e*/
  return 60 * WideChar::ToLong((int)(v7 + 1), 0, 10) / 0x64u + 60 * (v8 + 60 * (v6 + 60 * v2)); /*0x6ca640*/

}
} // namespace gamemd

// 0x6CA670
namespace gamemd {
unsigned int sub_6CA670(wchar_t * a1, unsigned int * a2)
{
  unsigned int result; // eax

  result = E4Recv_6CA5A0::sub_6CA5A0(a1); /*0x6ca673 G42.33 b9 static-form*/
  *a2 = result; /*0x6ca678*/
  return result; /*0x6ca67a*/
}
} // namespace gamemd

// 0x6CA680
namespace gamemd {
unsigned int sub_6CA680(wchar_t * a1, int a2)
{
  unsigned int result; // eax

  result = E4Recv_6CA5A0::sub_6CA5A0(a1); /*0x6ca683 G42.33 b9 static-form*/
  if ( result ) /*0x6ca68a*/
    *(unsigned int *)(a2 + 4) = result; /*0x6ca68c*/
  return result; /*0x6ca68f*/
}
} // namespace gamemd

// 0x6CA730
namespace gamemd {
int sub_6CA730(const wchar_t * Str, unsigned int * a2)  // G42.33 b12 truth const wchar_t*
{
  wchar_t *v4; // edi
  char v5; // al
  int v6; // esi
  wchar_t *v7; // edi
  uint8_t v9; // [esp+Ch] [ebp-Ch]
  char v10; // [esp+10h] [ebp-8h]
  char v11; // [esp+14h] [ebp-4h]

  v4 = (wchar_t *)wcschr(Str, 0x3Au); /*0x6ca742*/
  *v4 = 0; /*0x6ca749*/
  v5 = WideChar::ToLong((int)Str, 0, 10); /*0x6ca74e*/
  v6 = (int)(v4 + 1); /*0x6ca753*/
  v11 = v5; /*0x6ca759*/
  v7 = wcschr(v4 + 1, 0x3Au); /*0x6ca762*/
  *v7 = 0; /*0x6ca769*/
  v10 = WideChar::ToLong(v6, 0, 10); /*0x6ca77b*/
  v9 = WideChar::ToLong((int)(v7 + 1), 0, 10); /*0x6ca78c*/
  return ((E4Recv_6C9940 *)(void *)a2)->sub_6C9940(v11, v10, v9); /*0x6ca7a1 G42.33 b12 member-call*/
}
} // namespace gamemd

// 0x6CA7B0
namespace gamemd {
void sub_6CA7B0(wchar_t * String, void ** a2)
{
  ((E4Recv_6C9960 *)(void *)a2)->sub_6C9960(String); /*0x6ca7b3 G42.33 b12 member-call*/
}
} // namespace gamemd

// 0x6CABF0
namespace gamemd {
int sub_6CABF0()
{
  dword_B0BFF0 = 0; /*0x6cabf2*/
  dword_B0BFF4 = 0; /*0x6cabf7*/
  dword_B0BFF8 = 0; /*0x6cabfc*/
  dword_B0BFFC = 0; /*0x6cac01*/
  return 0; /*0x6cac06*/
}
} // namespace gamemd

// 0x6CAC10
namespace gamemd {
void sub_6CAC10()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6cac1c*/
  dbl_B0C008 = Math::Sqrt(v0 + v0); /*0x6cac2e*/
}
} // namespace gamemd

// 0x6CAC40
namespace gamemd {
void sub_6CAC40()
{
  dbl_B0C080 = dbl_B0C008 / 60.0; /*0x6cac4c*/
}
} // namespace gamemd

// 0x6CAC60
namespace gamemd {
void sub_6CAC60()
{
  dbl_B0C068 = 1.0 / dbl_B0C080; /*0x6cac6c*/
}
} // namespace gamemd

// 0x6CAC80
namespace gamemd {
void sub_6CAC80()
{
  dbl_B0C060 = 0.0174532925199433 * 45.0; /*0x6cac8c*/
}
} // namespace gamemd

// 0x6CACA0
namespace gamemd {
void sub_6CACA0()
{
  dbl_B0C010 = 0.0174532925199433 * 60.0; /*0x6cacac*/
}
} // namespace gamemd

// 0x6CACC0
namespace gamemd {
void sub_6CACC0()
{
  dbl_B0BFE8 = 0.0174532925199433 * 90.0; /*0x6caccc*/
}
} // namespace gamemd

// 0x6CACE0
namespace gamemd {
long long sub_6CACE0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0BFE8 - dbl_B0C010); /*0x6cacf2*/
  result = Math::RoundToInt(v0 * dbl_B0C008 * 0.5); /*0x6cad06*/
  dword_B0C088 = result; /*0x6cad0b*/
  return result; /*0x6cad10*/
}
} // namespace gamemd

// 0x6CAD20
namespace gamemd {
void sub_6CAD20()
{
  dbl_B0C018 = Math::ArcTan((double)dword_B0C088 * 0.00390625); /*0x6cad37*/
}
} // namespace gamemd

// 0x6CAD50
namespace gamemd {
void sub_6CAD50()
{
  dbl_B0C030 = Math::ArcTan((double)(2 * dword_B0C088) / dbl_B0C008); /*0x6cad72*/
}
} // namespace gamemd

// 0x6CAD80
namespace gamemd {
long long sub_6CAD80()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0C088) + 0.5); /*0x6cad9b*/
  dword_B0C07C = result; /*0x6cada0*/
  return result; /*0x6cada6*/
}
} // namespace gamemd

// 0x6CADB0
namespace gamemd {
int sub_6CADB0()
{
  dword_B0C000 = 0; /*0x6cadb2*/
  return 0; /*0x6cadbe*/
}
} // namespace gamemd

// 0x6CADC0
namespace gamemd {
int sub_6CADC0()
{
  dword_B0C020 = 0; /*0x6cadc2*/
  dword_B0C024 = 0; /*0x6cadc7*/
  dword_B0C028 = 0; /*0x6cadcc*/
  return 0; /*0x6cadd1*/
}
} // namespace gamemd

// 0x6CADE0
namespace gamemd {
int sub_6CADE0()
{
  dword_B0C078 = 0; /*0x6cade5*/
  dword_B0C070 = 128; /*0x6cadef*/
  dword_B0C074 = 128; /*0x6cadf4*/
  return 128; /*0x6cadf9*/
}
} // namespace gamemd

// 0x6CAE00
namespace gamemd {
int sub_6CAE00()
{
  dword_B0C038 = 0; /*0x6cae1b*/
  dword_B0C03C = 1; /*0x6cae2a*/
  dword_B0C040 = -65535; /*0x6cae45*/
  dword_B0C044 = -65536; /*0x6cae59*/
  dword_B0C048 = -1; /*0x6cae6d*/
  dword_B0C050 = 0x1FFFF; /*0x6cae98*/
  dword_B0C04C = 0xFFFF; /*0x6caeab*/
  dword_B0C054 = 0x10000; /*0x6caeb1*/
  dword_B0C058 = 65537; /*0x6caeb7*/
  return 65537; /*0x6caebe*/
}
} // namespace gamemd

// 0x6CC070
namespace gamemd {
void ObjectClass::nullsub_231()
{

  ; /*0x6cc070*/

}
} // namespace gamemd

// 0x6CDE80
namespace gamemd {
void nullsub_235(int a1, int a2)
{
  ; /*0x6cde80*/
}
} // namespace gamemd

// 0x6CE360
namespace gamemd {
int sub_6CE360()
{
  dword_B0C098 = 0; /*0x6ce362*/
  dword_B0C09C = 0; /*0x6ce367*/
  dword_B0C0A0 = 0; /*0x6ce36c*/
  dword_B0C0A4 = 0; /*0x6ce371*/
  return 0; /*0x6ce376*/
}
} // namespace gamemd

// 0x6CE380
namespace gamemd {
void sub_6CE380()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6ce38c*/
  dbl_B0C0B0 = Math::Sqrt(v0 + v0); /*0x6ce39e*/
}
} // namespace gamemd

// 0x6CE3B0
namespace gamemd {
void sub_6CE3B0()
{
  dbl_B0C100 = dbl_B0C0B0 / 60.0; /*0x6ce3bc*/
}
} // namespace gamemd

// 0x6CE3D0
namespace gamemd {
void sub_6CE3D0()
{
  dbl_B0C0E8 = 1.0 / dbl_B0C100; /*0x6ce3dc*/
}
} // namespace gamemd

// 0x6CE3F0
namespace gamemd {
void sub_6CE3F0()
{
  dbl_B0C0E0 = 0.0174532925199433 * 45.0; /*0x6ce3fc*/
}
} // namespace gamemd

// 0x6CE410
namespace gamemd {
void sub_6CE410()
{
  dbl_B0C0B8 = 0.0174532925199433 * 60.0; /*0x6ce41c*/
}
} // namespace gamemd

// 0x6CE430
namespace gamemd {
void sub_6CE430()
{
  dbl_B0C090 = 0.0174532925199433 * 90.0; /*0x6ce43c*/
}
} // namespace gamemd

// 0x6CE450
namespace gamemd {
long long sub_6CE450()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0C090 - dbl_B0C0B8); /*0x6ce462*/
  result = Math::RoundToInt(v0 * dbl_B0C0B0 * 0.5); /*0x6ce476*/
  dword_B0C108 = result; /*0x6ce47b*/
  return result; /*0x6ce480*/
}
} // namespace gamemd

// 0x6CE490
namespace gamemd {
void sub_6CE490()
{
  dbl_B0C0C0 = Math::ArcTan((double)dword_B0C108 * 0.00390625); /*0x6ce4a7*/
}
} // namespace gamemd

// 0x6CE4C0
namespace gamemd {
void sub_6CE4C0()
{
  dbl_B0C0D8 = Math::ArcTan((double)(2 * dword_B0C108) / dbl_B0C0B0); /*0x6ce4e2*/
}
} // namespace gamemd

// 0x6CE4F0
namespace gamemd {
long long sub_6CE4F0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0C108) + 0.5); /*0x6ce50b*/
  dword_B0C0FC = result; /*0x6ce510*/
  return result; /*0x6ce516*/
}
} // namespace gamemd

// 0x6CE520
namespace gamemd {
int sub_6CE520()
{
  word_B0C0A8 = 0; /*0x6ce522*/
  word_B0C0AA = 0; /*0x6ce528*/
  return 0; /*0x6ce52e*/
}
} // namespace gamemd

// 0x6CE530
namespace gamemd {
int sub_6CE530()
{
  dword_B0C0C8 = 0; /*0x6ce532*/
  dword_B0C0CC = 0; /*0x6ce537*/
  dword_B0C0D0 = 0; /*0x6ce53c*/
  return 0; /*0x6ce541*/
}
} // namespace gamemd

// 0x6CE550
namespace gamemd {
int sub_6CE550()
{
  dword_B0C0F8 = 0; /*0x6ce555*/
  dword_B0C0F0 = 128; /*0x6ce55f*/
  dword_B0C0F4 = 128; /*0x6ce564*/
  return 128; /*0x6ce569*/
}
} // namespace gamemd

// 0x6CE570
namespace gamemd {
int E4Recv_6CE570::sub_6CE570()  // G42.33 b12: truth int index
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6CE570)
}
} // namespace gamemd

// 0x6CF070
namespace gamemd {
int sub_6CF070()
{
  ((E4Recv_6CF8F0 *)&dword_B0C114)->sub_6CF8F0(0, 0); /*0x6cf079 G42.33 b12 member-call*/
  dword_B0C114 = (int)&DynamicVectorClass_SwizzlePointerClass_vftable; /*0x6cf087*/
  dword_B0C128 = 10; /*0x6cf091*/
  dword_B0C124 = 0; /*0x6cf09b*/
  ((E4Recv_6CF8F0 *)&dword_B0C12C)->sub_6CF8F0(0, 0); /*0x6cf0a5 G42.33 b12 member-call*/
  dword_B0C12C = (int)&DynamicVectorClass_SwizzlePointerClass_vftable; /*0x6cf0b4*/
  dword_B0C13C = 0; /*0x6cf0be*/
  SwizzleManagerClass_Instance = (int)&SwizzleManagerClass_vftable; /*0x6cf0c8*/
  dword_B0C128 = 1000; /*0x6cf0d2*/
  dword_B0C140 = 1000; /*0x6cf0d7*/
  return atexit(SwizzleManagerClass::Register); /*0x6cf0e2*/
}
} // namespace gamemd

// 0x6CF8F0
namespace gamemd {
unsigned int * E4Recv_6CF8F0::sub_6CF8F0(int a2, unsigned int * a3)
{

  unsigned int *v4; // eax
  int v5; // ecx
  unsigned int *v7; // eax
  unsigned int *v8; // ecx
  int v9; // edx

  this->M4 = 0; /*0x6cf8fd G42.33 b12: hpp M4@4 (Items)*/
  this->M8 = a2; /*0x6cf900 G42.33 b12: hpp M8@8 (Capacity)*/
  this->M12 = 1; /*0x6cf903 G42.33 b12: hpp M12@0xC (IsInitialized)*/
  this->M13 = 0; /*0x6cf907 G42.33 b12: hpp M13@0xD (IsAllocated)*/
  this->vfptr = (unsigned int)&vt_VectorClass; /*0x6cf90a G42.33 b12: hpp vfptr@0*/
  if ( !a2 ) /*0x6cf910*/
    return &this->vfptr; /*0x6cf910*/
  if ( !a3 ) /*0x6cf918*/
  {
    v7 = (unsigned int *)__2_YAPAXI_Z(8 * a2); /*0x6cf942*/
    if ( v7 ) /*0x6cf94c*/
    {
      v8 = v7; /*0x6cf951*/
      if ( a2 - 1 >= 0 ) /*0x6cf955*/
      {
        v9 = a2; /*0x6cf957*/
        do /*0x6cf961*/
        {
          *v8 = 0; /*0x6cf958*/
          v8[1] = 0; /*0x6cf95a*/
          v8 += 2; /*0x6cf95d*/
          --v9; /*0x6cf960*/
        }
        while ( v9 ); /*0x6cf961*/
        this->M4 = (unsigned int)v7; /*0x6cf963*/
        this->M13 = 1; /*0x6cf966*/
        return &this->vfptr; /*0x6cf96f*/
      }
    }
    else
    {
      v7 = 0; /*0x6cf972*/
    }
    this->M4 = (unsigned int)v7; /*0x6cf974*/
    this->M13 = 1; /*0x6cf977*/
    return &this->vfptr; /*0x6cf97b*/
  }
  v4 = a3; /*0x6cf91d*/
  if ( a2 - 1 >= 0 ) /*0x6cf921*/
  {
    v5 = a2; /*0x6cf923*/
    do /*0x6cf92d*/
    {
      *v4 = 0; /*0x6cf924*/
      v4[1] = 0; /*0x6cf926*/
      v4 += 2; /*0x6cf929*/
      --v5; /*0x6cf92c*/
    }
    while ( v5 ); /*0x6cf92d*/
  }
  this->M4 = (unsigned int)a3; /*0x6cf92f*/
  return &this->vfptr; /*0x6cf934*/

}
} // namespace gamemd

// 0x6CF990
namespace gamemd {
int sub_6CF990()
{
  dword_B0CB28 = 0; /*0x6cf992*/
  dword_B0CB2C = 0; /*0x6cf997*/
  dword_B0CB30 = 0; /*0x6cf99c*/
  dword_B0CB34 = 0; /*0x6cf9a1*/
  return 0; /*0x6cf9a6*/
}
} // namespace gamemd

// 0x6CF9B0
namespace gamemd {
void sub_6CF9B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6cf9bc*/
  dbl_B0CB48 = Math::Sqrt(v0 + v0); /*0x6cf9ce*/
}
} // namespace gamemd

// 0x6CF9E0
namespace gamemd {
void sub_6CF9E0()
{
  dbl_B0CD30 = dbl_B0CB48 / 60.0; /*0x6cf9ec*/
}
} // namespace gamemd

// 0x6CFA00
namespace gamemd {
void sub_6CFA00()
{
  dbl_B0CCA8 = 1.0 / dbl_B0CD30; /*0x6cfa0c*/
}
} // namespace gamemd

// 0x6CFA20
namespace gamemd {
void sub_6CFA20()
{
  dbl_B0CCA0 = 0.0174532925199433 * 45.0; /*0x6cfa2c*/
}
} // namespace gamemd

// 0x6CFA40
namespace gamemd {
void sub_6CFA40()
{
  dbl_B0CB60 = 0.0174532925199433 * 60.0; /*0x6cfa4c*/
}
} // namespace gamemd

// 0x6CFA60
namespace gamemd {
void sub_6CFA60()
{
  dbl_B0C1B0 = 0.0174532925199433 * 90.0; /*0x6cfa6c*/
}
} // namespace gamemd

// 0x6CFA80
namespace gamemd {
long long sub_6CFA80()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0C1B0 - dbl_B0CB60); /*0x6cfa92*/
  result = Math::RoundToInt(v0 * dbl_B0CB48 * 0.5); /*0x6cfaa6*/
  dword_B0CD3C = result; /*0x6cfaab*/
  return result; /*0x6cfab0*/
}
} // namespace gamemd

// 0x6CFAC0
namespace gamemd {
void sub_6CFAC0()
{
  dbl_B0CB70 = Math::ArcTan((double)dword_B0CD3C * 0.00390625); /*0x6cfad7*/
}
} // namespace gamemd

// 0x6CFAF0
namespace gamemd {
void sub_6CFAF0()
{
  dbl_B0CC30 = Math::ArcTan((double)(2 * dword_B0CD3C) / dbl_B0CB48); /*0x6cfb12*/
}
} // namespace gamemd

// 0x6CFB20
namespace gamemd {
long long sub_6CFB20()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0CD3C) + 0.5); /*0x6cfb3b*/
  dword_B0CD2C = result; /*0x6cfb40*/
  return result; /*0x6cfb46*/
}
} // namespace gamemd

// 0x6CFB50
namespace gamemd {
int sub_6CFB50()
{
  word_B0CB40 = 0; /*0x6cfb52*/
  word_B0CB42 = 0; /*0x6cfb58*/
  return 0; /*0x6cfb5e*/
}
} // namespace gamemd

// 0x6CFB60
namespace gamemd {
int sub_6CFB60()
{
  dword_B0CC10 = 0; /*0x6cfb62*/
  dword_B0CC14 = 0; /*0x6cfb67*/
  dword_B0CC18 = 0; /*0x6cfb6c*/
  return 0; /*0x6cfb71*/
}
} // namespace gamemd

// 0x6CFB80
namespace gamemd {
int sub_6CFB80()
{
  dword_B0CD20 = 0; /*0x6cfb85*/
  dword_B0CD18 = 128; /*0x6cfb8f*/
  dword_B0CD1C = 128; /*0x6cfb94*/
  return 128; /*0x6cfb99*/
}
} // namespace gamemd

// 0x6CFBA0
namespace gamemd {
int sub_6CFBA0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6CFBA0)
}
} // namespace gamemd

// 0x6CFBD0
namespace gamemd {
void sub_6CFBD0()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6CFBD0)
}
} // namespace gamemd

// 0x6CFC00
namespace gamemd {
int sub_6CFC00()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6CFC00)
}
} // namespace gamemd

// 0x6CFC20
namespace gamemd {
void sub_6CFC20()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6CFC20)
}
} // namespace gamemd

// 0x6CFC40
namespace gamemd {
int sub_6CFC40()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6CFC40)
}
} // namespace gamemd

// 0x6CFC60
namespace gamemd {
void sub_6CFC60()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6CFC60)
}
} // namespace gamemd

// 0x6CFD20
namespace gamemd {
void sub_6CFD20(int a1, int a2)
{
  g_ObjectTrackingPool[a1] = a2; /*0x6cfd20*/
}
} // namespace gamemd

// 0x6CFD30
namespace gamemd {
int sub_6CFD30(int a1)
{
  return g_ObjectTrackingPool[a1]; /*0x6cfd37*/
}
} // namespace gamemd

// 0x6CFD40
namespace gamemd {
char * FontClass_GetEntry(int a1)
{
  unsigned int v1; // eax

  v1 = g_ObjectTrackingPool[a1]; /*0x6cfd40*/
  if ( v1 > 0x18 ) /*0x6cfd49*/
    return 0; /*0x6cfd5c*/
  else
    return (char *)&stru_B0C1C0 + 96 * v1; /*0x6cfd56*/
}
} // namespace gamemd

// 0x6CFE10
namespace gamemd {
int E4Recv_6CFE10::sub_6CFE10()
{

  return (int)this - dword_B0CC20 + 1; /*0x6cfe19*/

}
} // namespace gamemd
