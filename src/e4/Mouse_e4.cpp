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
#include "e4/classes/E4Recv_4AF2A0_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"
#include "e4/classes/NetworkGameSetup_e4.hpp"
#include "e4/classes/CoordList_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/Init_e4.hpp"

// 0x4A8BF0
namespace gamemd {  // G42.18 ns repair
int Mouse::SetBounds(const void *aP1, void *a2)
{
  unsigned short v9[4]; // [esp+8h] [ebp-8h] BYREF

  int result; // eax
  result = this->u32_117C; /*0x4a8bf7*/
  if ( result ) /*0x4a8bff*/
  {
  int16_t v4; // cx
    v4 = this->u32_1176 + this->u32_117A; /*0x4a8c16*/
    v9[0] = this->u32_1174 + this->u32_1178; /*0x4a8c1f*/
    v9[1] = v4; /*0x4a8c24*/
    result = MapClass::SetCellFlagsAlongPath((MapClass *)this, v9, 0); /*0x4a8c38*/
  }
  aP1 = aP1; /*0x4a8c3d*/
  bool v6; // zf
  v6 = aP1 == 0; /*0x4a8c47*/
  this->u32_1178 = dword_8A03F8; /*0x4a8c49*/
  if ( v6 ) /*0x4a8c4f*/
  {
    this->u32_117C = 0; /*0x4a8d1f*/
  }
  else
  {
    if ( (byte_8A0618 & 1) == 0 ) /*0x4a8c5c*/
    {
      byte_8A0618 |= 1u; /*0x4a8c68*/
      atexit(nullsub_10); /*0x4a8c6e*/
    }
    memcpy((void *)(word_8A041C), aP1, 0x1E0u); /*0x4a8c85*/
    this->u32_117C = word_8A041C; /*0x4a8c8f*/
  int v7; // eax
    v7 = *CoordList::GetBounds((unsigned int *)(&aP1), word_8A041C); /*0x4a8c9e*/
    v9[0] = v7 - 1; /*0x4a8ca6*/
    v9[1] = (*(((unsigned short *)&(v7)) + 1)) - 1; /*0x4a8cab*/
    (*((unsigned short *)&(aP1))) = (int16_t)(1 - v7) / 2; /*0x4a8cc4*/
    (*(((unsigned short *)&(aP1)) + 1)) = (int16_t)(1 - (*(((unsigned short *)&(v7)) + 1))) / 2; /*0x4a8cd1*/
  int16_t v8; // cx
    v8 = (int16_t)aP1; /*0x4a8cd6*/
    this->u32_1178 = (unsigned int)(aP1); /*0x4a8cda*/
    (*((unsigned short *)&(v7))) = this->u32_117A + this->u32_1176; /*0x4a8cee*/
    (*((unsigned short *)&(aP1))) = v8 + this->u32_1174; /*0x4a8cf8*/
    (*(((unsigned short *)&(aP1)) + 1)) = v7; /*0x4a8cfd*/
    return MapClass::SetCellFlagsAlongPath((unsigned short *)(&aP1), (unsigned short *)1); /*0x4a8d11*/
  }
  return result; /*0x4a8d17*/
}
}  // G42.18 ns repair
// 0x5BDC80
namespace gamemd {
int Mouse::SetCursor(int aP1, char aP2, void *a3)
{
  char v5; // bl

  int result; // eax
  result = aP1; /*0x5bdc80*/
  if ( dword_82D034[7 * aP1] == -1 ) /*0x5bdca6*/
  {
    v5 = 0; /*0x5bdca8*/
    aP2 = 0; /*0x5bdcaa*/
  }
  else
  {
    v5 = aP2; /*0x5bdcb0*/
  }
  if ( byte_ABF2DD && (!dword_ABF294 || aP1 == this->u32_5560 && v5 == this->u32_555C) ) /*0x5bdcd6*/
  {
    (*((unsigned char *)&(result))) = 0; /*0x5bdcda*/
  }
  else
  {
    byte_ABF2DD = 1; /*0x5bdce4*/
  int v6; // edi
    v6 = dword_82D030[7 * aP1]; /*0x5bdceb*/
  int Ticks; // eax
    Ticks = TimerGetTicks(); /*0x5bdcf2*/
  int v8; // ecx
    v8 = 0; /*0x5bdcfb*/
    dword_ABF2A0 = Ticks; /*0x5bdcfd*/
    v8 = v8; /*0x5bdd02*/
    v6 = v6; /*0x5bdd08*/
    this->u32_5568 = 0; /*0x5bdd0e*/
  int v9; // eax
    if ( !v5 || (v9 = dword_82D034[7 * aP1], v9 == -1) ) /*0x5bdd1e*/
      v9 = dword_82D028[7 * aP1]; /*0x5bdd20*/
  int v10; // ebx
    v10 = dword_82D03C[7 * aP1]; /*0x5bdd22*/
  int v11; // edi
    v11 = 0; /*0x5bdd25*/
    if ( v10 == 12345 ) /*0x5bdd31*/
      v11 = *((int16_t *)dword_ABF294 + 1) / 2; /*0x5bdd42*/
    if ( v10 == 54321 ) /*0x5bdd50*/
      v11 = *((int16_t *)dword_ABF294 + 1); /*0x5bdd52*/
  int v12; // esi
    v12 = unk_82D040[7 * aP1]; /*0x5bdd56*/
    if ( v12 == 12345 ) /*0x5bdd5f*/
      v8 = *((int16_t *)dword_ABF294 + 2) / 2; /*0x5bdd6a*/
    if ( v12 == 54321 ) /*0x5bdd72*/
      v8 = *((int16_t *)dword_ABF294 + 2); /*0x5bdd74*/
    v8 = v8; /*0x5bdd7c*/
    v11 = v11; /*0x5bdd87*/
    (*(void (**)(int, int *, void *, int))(*(unsigned int *)dword_887640 + 4))( /*0x5bdd93*/
      dword_887640,
      &v11,
      dword_ABF294,
      v9);
    result = aP1; /*0x5bdd96*/
    this->u32_5560 = aP1; /*0x5bdd9f*/
    this->u32_555C = aP2; /*0x5bdda5*/
    (*((unsigned char *)&(result))) = 1; /*0x5bddad*/
  }
  return result; /*0x5bdcd8*/
}
}
// 0x6938C0
namespace gamemd {
HWND Mouse::ReleaseCapture(void *a1)
{

  this->DisplayClass::ExitMode(); /*0x6938c3*/
  this->u32_555A = 0; /*0x6938c8*/
  int result; // eax
  result = (int)GetCapture(); /*0x6938cf*/
  if ( (HWND)result == (HWND)(g_hWnd) ) /*0x6938de*/
    return ReleaseCapture(); /*0x6938e0*/
  return (HWND)(result); /*0x6938db*/
}
}
// 0x7B93F0
namespace gamemd {
void Mouse::DrawCursor(int * aP1, int aP2, int a4)
{

  unsigned int *v12; // [esp-2Ch] [ebp-78h]
  int v14; // [esp+8h] [ebp-44h]
  int v15; // [esp+Ch] [ebp-40h] BYREF
  int v16; // [esp+10h] [ebp-3Ch]
  int v17; // [esp+14h] [ebp-38h]
  int v18; // [esp+18h] [ebp-34h]

  int v13; // [esp+4h] [ebp-48h] BYREF
  v13 = (int)this; /*0x7b93f5*/
  MixFileClass *v5; // ecx
  v5 = (gamemd::MixFileClass *)(*&this->u32_4); /*0x7b93f9*/
  if ( v5 && aP1 && *(unsigned int *)&DataGlobal_87F6C8 ) /*0x7b9418*/
  {
  int v6; // ebx
    v6 = this->u32_50; /*0x7b942e*/
  int v7; // ebp
    v7 = this->u32_54; /*0x7b9431*/
  int v8; // esi
    v8 = aP2 + this->u32_48; /*0x7b9438*/
  int v9; // edi
    v9 = a4 + this->u32_4C; /*0x7b943e*/
  int SubFile; // eax
    SubFile = MixFileClass::GetSubFile(v5, *&this->u32_8); /*0x7b9440*/
  int v20[5]; // [esp+2Ch] [ebp-20h] BYREF
    v20[1] = v6; /*0x7b9447*/
    v20[2] = v7; /*0x7b9454*/
    v20[3] = 0; /*0x7b9458*/
    v20[4] = 1; /*0x7b9468*/
  int v21[3]; // [esp+40h] [ebp-Ch] BYREF
    Buffer::Init((Buffer *)v21, SubFile, v7 * v6); /*0x7b9470*/
    v20[0] = (int)&BSurface_Vtable; /*0x7b947d*/
    if ( aP1 == v13->Buffer_field_24 ) /*0x7b9488*/
    {
      v15 = 0; /*0x7b9499*/
      v16 = 0; /*0x7b949d*/
      v12 = (unsigned int *)(v13 + 44); /*0x7b94a6*/
      v13 = v8; /*0x7b94b8*/
      v14 = v9; /*0x7b94bc*/
      v17 = v6; /*0x7b94c0*/
      v18 = v7; /*0x7b94c4*/
    }
    else
    {
      v15 = 0; /*0x7b94da*/
      v16 = 0; /*0x7b94de*/
  int v11; // eax
      v11 = *aP1; /*0x7b94e3*/
      v13 = v8; /*0x7b94e6*/
      v14 = v9; /*0x7b94ea*/
      v17 = v6; /*0x7b94ee*/
      v18 = v7; /*0x7b94f2*/
  unsigned char v19[16]; // [esp+1Ch] [ebp-30h] BYREF
      v12 = (unsigned int *)(*(int (**)(int *, unsigned char *))(v11 + 120))(aP1, v19); /*0x7b94f9*/
    }
    BlitterDrawSHP(aP1, *(int *)&DataGlobal_87F6C8, v20, &v15, &v13, v12, 0, 0, 0, 0, 1000, 0, 0); /*0x7b94c8*/
    Vector::Clear((int)v21); /*0x7b951f*/
  }

}
}
// 0x53EC90
namespace gamemd {
SHORT Mouse::GetKeyState(uint8_t vKey)
{
  if ( g_StreamBufferState ) /*0x53ec97*/
    return word_AA0168[(uint8_t)vKey]; /*0x53eca7*/
  else
    return GetAsyncKeyState((uint8_t)vKey); /*0x53ec9a*/
}
} // namespace gamemd

// 0x54F5C0
namespace gamemd {
BOOL Mouse::IsButtonDown(unsigned char a1)
{

  uint8_t v1; // si
  v1 = a1; /*0x54f5c5*/
  if ( (a1 == 1 || a1 == 2) && GetSystemMetrics(23) == 1 ) /*0x54f5e2*/
    v1 = 2 - (a1 != 1); /*0x54f5eb*/
  return (v1)->GetKeyState() != 0; /*0x54f600*/
}
} // namespace gamemd

// 0x5BC400
namespace gamemd {
HWND Mouse::HideWindow()
{


  HWND result; // eax
  result = (HWND)(dword_ABF240); /*0x5bc400*/
  byte_ABF239 = 0; /*0x5bc409*/
  if ( dword_ABF240 ) /*0x5bc40f*/
  {
    byte_ABF23A = 0; /*0x5bc413*/
    return (HWND)ShowWindow(dword_ABF240, 0); /*0x5bc419*/
  }
  return result; /*0x5bc41f*/

}
} // namespace gamemd
