// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/DisplayClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/MoveFeedback_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/MovieClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Movement_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/MovementAI_e4.hpp"
#include "e4/classes/CoordStruct_e4.hpp"
#include "e4/classes/GadgetClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"

// 0x4A8BF0
namespace gamemd {
int Mouse::SetBounds(void* aP1)
{

  int result; // eax
  int16_t v4; // cx
  Tactical *v5; // esi
  bool v6; // zf
  int v7; // eax
  int16_t v8; // cx
  int16_t v9; // [esp+8h] [ebp-8h] BYREF
  int16_t v10; // [esp+Ah] [ebp-6h]

  result = *((unsigned int *)this + 1119); /*0x4a8bf7*/
  if ( result ) /*0x4a8bff*/
  {
    v4 = *((unsigned short *)this + 2235) + *((unsigned short *)this + 2237); /*0x4a8c16*/
    v9 = *((unsigned short *)this + 2234) + *((unsigned short *)this + 2236); /*0x4a8c1f*/
    v10 = v4; /*0x4a8c24*/
    IDA_LOBYTE(result) = MapClass::SetCellFlagsAlongPath((int16_t **)this, (IUnknown *)&v9, 0); /*0x4a8c38*/
  }
  v5 = (Tactical *)aP1; /*0x4a8c3d*/
  v6 = aP1 == 0; /*0x4a8c47*/
  *((unsigned int *)this + 1118) = *(unsigned int *)&g_abs_89F690; /*0x4a8c49*/
  if ( v6 ) /*0x4a8c4f*/
  {
    *((unsigned int *)this + 1119) = 0; /*0x4a8d1f*/
  }
  else
  {
    if ( ((unsigned int)(g_abs_89F690)& 1) == 0 ) /*0x4a8c5c*/
    {
      (unsigned int)(g_abs_89F690)|= 1u; /*0x4a8c68*/
      atexit(nullsub_10); /*0x4a8c6e*/
    }
    qmemcpy(&g_abs_89F690, v5, 0x1E0u); /*0x4a8c85*/
    *((unsigned int *)this + 1119) = &g_abs_89F690; /*0x4a8c8f*/
    v7 = *CoordList::GetBounds(&aP1, (int16_t *)&g_abs_89F690); /*0x4a8c9e*/
    v9 = v7 - 1; /*0x4a8ca6*/
    v10 = IDA_HIWORD(v7) - 1; /*0x4a8cab*/
    IDA_LOWORD(aP1) = (int16_t)(1 - v7) / 2; /*0x4a8cc4*/
    IDA_HIWORD(aP1) = (int16_t)(1 - IDA_HIWORD(v7)) / 2; /*0x4a8cd1*/
    v8 = (int16_t)aP1; /*0x4a8cd6*/
    *((unsigned int *)this + 1118) = aP1; /*0x4a8cda*/
    IDA_LOWORD(v7) = *((unsigned short *)this + 2237) + *((unsigned short *)this + 2235); /*0x4a8cee*/
    IDA_LOWORD(aP1) = v8 + *((unsigned short *)this + 2234); /*0x4a8cf8*/
    IDA_HIWORD(aP1) = v7; /*0x4a8cfd*/
    IDA_LOBYTE(result) = MapClass::SetCellFlagsAlongPath((int16_t **)this, (IUnknown *)&aP1, (unsigned short *)1); /*0x4a8d11*/
  }
  return result; /*0x4a8d17*/

}
}
// 0x5BDC80
namespace gamemd {
int Mouse::SetCursor(ObjectClass * aP1, ObjectClass * aP2)
{

  char v4; // bl
  MPCooperative *v6; // edi
  CoordStruct *Ticks; // eax
  CoordStruct * Y_low;
  int v9; // eax
  int v10; // ebx
  int X_high; // edi
  int v12; // esi
  int v13; // [esp+10h] [ebp-Ch] BYREF
  CoordStruct *v14; // [esp+14h] [ebp-8h]

  if ( g_abs_82D034[7 * (unsigned int)aP1] == -1 ) /*0x5bdca6*/
  {
    v4 = 0; /*0x5bdca8*/
    IDA_LOBYTE(aP2) = 0; /*0x5bdcaa*/
  }
  else
  {
    v4 = (char)aP2; /*0x5bdcb0*/
  }
  if ( *((unsigned char *)&g_MatrixTransformState + 1229) /*0x5bdcd6*/
    && (!*(&g_MatrixTransformState + 289) || aP1 == *(ObjectClass **)((char *)this + 21856) && v4 == *((unsigned char *)this + 21852)) )
  {
    return 0; /*0x5bdcda*/
  }
  *((unsigned char *)&g_MatrixTransformState + 1229) = 1; /*0x5bdce4*/
  v6 = (MPCooperative *)g_abs_82D030[7 * (unsigned int)aP1]; /*0x5bdceb*/
  Ticks = (CoordStruct *)this->Timer::GetTicks(); /*0x5bdcf2*/
  Y_low = 0; /*0x5bdcfb*/
  *(&g_MatrixTransformState + 292) = Ticks; /*0x5bdcfd*/
  *(&g_MatrixTransformState + 293) = v14; /*0x5bdd02*/
  *(&g_MatrixTransformState + 294) = (CoordStruct *)v6; /*0x5bdd08*/
  *((unsigned int *)this + 5466) = 0; /*0x5bdd0e*/
  if ( !v4 || (v9 = g_abs_82D034[7 * (unsigned int)aP1], v9 == -1) ) /*0x5bdd1e*/
    v9 = g_abs_82D028[7 * (unsigned int)aP1]; /*0x5bdd20*/
  v10 = g_abs_82D03C[7 * (unsigned int)aP1]; /*0x5bdd22*/
  X_high = 0; /*0x5bdd25*/
  if ( v10 == 12345 ) /*0x5bdd31*/
    X_high = SHIWORD((*(&g_MatrixTransformState + 289))->X) / 2; /*0x5bdd42*/
  if ( v10 == 54321 ) /*0x5bdd50*/
    X_high = SHIWORD((*(&g_MatrixTransformState + 289))->X); /*0x5bdd52*/
  v12 = g_abs_82D040[7 * (unsigned int)aP1]; /*0x5bdd56*/
  if ( v12 == 12345 ) /*0x5bdd5f*/
    Y_low = SLOWORD((*(&g_MatrixTransformState + 289))->Y) / 2; /*0x5bdd6a*/
  if ( v12 == 54321 ) /*0x5bdd72*/
    Y_low = SLOWORD((*(&g_MatrixTransformState + 289))->Y); /*0x5bdd74*/
  v14 = (CoordStruct *)Y_low; /*0x5bdd7c*/
  v13 = X_high; /*0x5bdd87*/
  (*(void (**)(unsigned int, int *, unsigned int, int))(**(unsigned int **)&g_abs_87F8E4 + 4))( /*0x5bdd93*/
    *(unsigned int *)&g_abs_87F8E4,
    &v13,
    *(&g_MatrixTransformState + 289),
    v9);
  *((unsigned int *)this + 5464) = aP1; /*0x5bdd9f*/
  *((unsigned char *)this + 21852) = (unsigned char)aP2; /*0x5bdda5*/
  return 1; /*0x5bdcd8*/

}
}
// 0x6938C0
namespace gamemd {
HWND Mouse::ReleaseCapture()
{

  HWND result; // eax

  this->DisplayClass::ExitMode(); /*0x6938c3*/
  *((unsigned char *)this + 21850) = 0; /*0x6938c8*/
  result = GetCapture(); /*0x6938cf*/
  if ( result == (HWND)(g_hWnd) ) /*0x6938de*/
    return (HWND)ReleaseCapture(); /*0x6938e0*/
  return result; /*0x6938db*/

}
}
// 0x7B93F0
namespace gamemd {
AbstractClass * * Mouse::DrawCursor(IUnknown * aP1, WWMouseClass * aP2, int a4)
{

  char **v5; // ecx
  int v6; // ebx
  int v7; // ebp
  int SubFile; // eax
  IUnknown *v9; // ecx
  unsigned char v11[16]; // [esp+1Ch] [ebp-30h] BYREF
  int (**v12)(void *, char); // [esp+2Ch] [ebp-20h]
  int v13; // [esp+30h] [ebp-1Ch]
  int v14; // [esp+34h] [ebp-18h]
  int v15; // [esp+38h] [ebp-14h]
  int v16; // [esp+3Ch] [ebp-10h]
  unsigned int v17[3]; // [esp+40h] [ebp-Ch] BYREF

  v5 = (char **)*((unsigned int *)this + 1); /*0x7b93f9*/
  if ( v5 && aP1 && g_abs_87F6C8 ) /*0x7b9418*/
  {
    v6 = *((unsigned int *)this + 20); /*0x7b942e*/
    v7 = *((unsigned int *)this + 21); /*0x7b9431*/
    SubFile = MixFileClass::GetSubFile(v5, *((unsigned int *)this + 2)); /*0x7b9440*/
    v13 = v6; /*0x7b9447*/
    v14 = v7; /*0x7b9454*/
    v15 = 0; /*0x7b9458*/
    v16 = 1; /*0x7b9468*/
    Buffer::Init(v17, SubFile, (AbstractClass *)(v7 * v6)); /*0x7b9470*/
    v9 = aP1; /*0x7b9479*/
    v12 = &BSurface_Vtable; /*0x7b947d*/
    if ( aP1 != (IUnknown *)*((unsigned int *)this + 9) ) /*0x7b9488*/
    {
      (*(void (**)(IUnknown *, unsigned char *))(aP1->field_0 + 120))(aP1, v11); /*0x7b94f6*/
      v9 = aP1; /*0x7b9508*/
    }
    BlitterDrawSHP(v9); /*0x7b9516*/
    Vector::Clear((int)v17); /*0x7b951f*/
  }

}
}
// 0x53EC90
namespace gamemd {
SHORT Mouse::GetKeyState(uint8_t vKey)
{

  if ( unk_AA0444 ) /*0x53ec97*/
    return unk_AA0168[vKey]; /*0x53eca7*/
  else
    return GetAsyncKeyState(vKey); /*0x53ec9a*/

}
} // namespace gamemd

// 0x54F5C0
namespace gamemd {
BOOL Mouse::IsButtonDown(unsigned char a1)
{

  uint16_t v1; // si

  v1 = a1; /*0x54f5c5*/
  if ( (a1 == 1 || a1 == 2) && GetSystemMetrics(23) == 1 ) /*0x54f5e2*/
    v1 = 2 - (a1 != 1); /*0x54f5eb*/
  return (uint16_t)Mouse::GetKeyState(v1) != 0; /*0x54f600*/

}
} // namespace gamemd

// 0x5BC400
namespace gamemd {
HWND Mouse::HideWindow()
{

  HWND result; // eax

  result = (HWND)(g_abs_ABF240);
  g_abs_ABF239 = 0; /*0x5bc409*/
  if ( g_abs_ABF240 ) /*0x5bc40f*/
  {
    g_abs_ABF23A = 0; /*0x5bc413*/
    return (HWND)ShowWindow(g_abs_ABF240, 0); /*0x5bc419*/
  }
  return result; /*0x5bc41f*/

}
} // namespace gamemd
