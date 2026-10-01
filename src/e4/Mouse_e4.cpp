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

// 0x4A8BF0
namespace gamemd {
int Mouse::SetBounds(void* aP1)
{

  int result; // eax
  int16_t v4; // cx
  const void *v5; // esi
  bool v6; // zf
  int v7; // eax
  int16_t v8; // cx
  unsigned short v9[4]; // [esp+8h] [ebp-8h] BYREF

  result = *((unsigned int *)this + 1119); /*0x4a8bf7*/
  if ( result ) /*0x4a8bff*/
  {
    v4 = *((unsigned short *)this + 2235) + *((unsigned short *)this + 2237); /*0x4a8c16*/
    v9[0] = *((unsigned short *)this + 2234) + *((unsigned short *)this + 2236); /*0x4a8c1f*/
    v9[1] = v4; /*0x4a8c24*/
    result = MapClass::SetCellFlagsAlongPath((MapClass *)this, v9, 0); /*0x4a8c38*/
  }
  v5 = aP1; /*0x4a8c3d*/
  v6 = aP1 == 0; /*0x4a8c47*/
  *((unsigned int *)this + 1118) = *(unsigned int *)&stru_8A0390.bombVisible; /*0x4a8c49*/
  if ( v6 ) /*0x4a8c4f*/
  {
    *((unsigned int *)this + 1119) = 0; /*0x4a8d1f*/
  }
  else
  {
    if ( (byte_8A0618 & 1) == 0 ) /*0x4a8c5c*/
    {
      byte_8A0618 |= 1u; /*0x4a8c68*/
      atexit(nullsub_10); /*0x4a8c6e*/
    }
    qmemcpy(&stru_8A0390.onBridge, v5, 0x1E0u); /*0x4a8c85*/
    *((unsigned int *)this + 1119) = &stru_8A0390.onBridge; /*0x4a8c8f*/
    v7 = *CoordList::GetBounds(&aP1, (int16_t *)&stru_8A0390.onBridge); /*0x4a8c9e*/
    v9[0] = v7 - 1; /*0x4a8ca6*/
    v9[1] = HIWORD(v7) - 1; /*0x4a8cab*/
    LOWORD(aP1) = (int16_t)(1 - v7) / 2; /*0x4a8cc4*/
    HIWORD(aP1) = (int16_t)(1 - HIWORD(v7)) / 2; /*0x4a8cd1*/
    v8 = (int16_t)aP1; /*0x4a8cd6*/
    *((unsigned int *)this + 1118) = aP1; /*0x4a8cda*/
    LOWORD(v7) = *((unsigned short *)this + 2237) + *((unsigned short *)this + 2235); /*0x4a8cee*/
    LOWORD(aP1) = v8 + *((unsigned short *)this + 2234); /*0x4a8cf8*/
    HIWORD(aP1) = v7; /*0x4a8cfd*/
    return MapClass::SetCellFlagsAlongPath((MapClass *)this, &aP1, (unsigned short *)1); /*0x4a8d11*/
  }
  return result; /*0x4a8d17*/

}
}
// 0x5BDC80
namespace gamemd {
int Mouse::SetCursor(ObjectClass * aP1, ObjectClass * aP2)
{

  ObjectClass * result;
  ObjectClass * v5;
  int v6; // edi
  int Ticks; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  int v11; // edi
  int v12; // esi
  int v13; // [esp+10h] [ebp-Ch] BYREF
  int v14; // [esp+14h] [ebp-8h]

  result = (gamemd::ObjectClass *)((int)(aP1));
  if ( dword_82D034[7 * aP1] == -1 ) /*0x5bdca6*/
  {
    v5 = 0; /*0x5bdca8*/
    aP2 = 0; /*0x5bdcaa*/
  }
  else
  {
    v5 = (gamemd::ObjectClass *)((char)(aP2));
  }
  if ( byte_ABF2DD && (!dword_ABF294 || aP1 == *((unsigned int *)this + 5464) && v5 == *((unsigned char *)this + 21852)) ) /*0x5bdcd6*/
  {
    LOBYTE(result) = 0; /*0x5bdcda*/
  }
  else
  {
    byte_ABF2DD = 1; /*0x5bdce4*/
    v6 = dword_82D030[7 * aP1]; /*0x5bdceb*/
    Ticks = this->Timer::GetTicks(); /*0x5bdcf2*/
    v8 = 0; /*0x5bdcfb*/
    dword_ABF2A0 = Ticks; /*0x5bdcfd*/
    dword_ABF2A4 = v14; /*0x5bdd02*/
    dword_ABF2A8 = v6; /*0x5bdd08*/
    *((unsigned int *)this + 5466) = 0; /*0x5bdd0e*/
    if ( !v5 || (v9 = dword_82D034[7 * aP1], v9 == -1) ) /*0x5bdd1e*/
      v9 = dword_82D028[7 * aP1]; /*0x5bdd20*/
    v10 = dword_82D03C[7 * aP1]; /*0x5bdd22*/
    v11 = 0; /*0x5bdd25*/
    if ( v10 == 12345 ) /*0x5bdd31*/
      v11 = *((int16_t *)dword_ABF294 + 1) / 2; /*0x5bdd42*/
    if ( v10 == 54321 ) /*0x5bdd50*/
      v11 = *((int16_t *)dword_ABF294 + 1); /*0x5bdd52*/
    v12 = unk_82D040[7 * aP1]; /*0x5bdd56*/
    if ( v12 == 12345 ) /*0x5bdd5f*/
      v8 = *((int16_t *)dword_ABF294 + 2) / 2; /*0x5bdd6a*/
    if ( v12 == 54321 ) /*0x5bdd72*/
      v8 = *((int16_t *)dword_ABF294 + 2); /*0x5bdd74*/
    v14 = v8; /*0x5bdd7c*/
    v13 = v11; /*0x5bdd87*/
    (*(void (**)(int, int *, void *, int))(*(unsigned int *)dword_887640 + 4))( /*0x5bdd93*/
      dword_887640,
      &v13,
      dword_ABF294,
      v9);
    result = (gamemd::ObjectClass *)((unsigned char)(aP1));
    *((unsigned int *)this + 5464) = aP1; /*0x5bdd9f*/
    *((unsigned char *)this + 21852) = aP2; /*0x5bdda5*/
    LOBYTE(result) = 1; /*0x5bddad*/
  }
  return (int)(result);

}
}
// 0x6938C0
namespace gamemd {
HWND Mouse::ReleaseCapture()
{

  int result; // eax

  DisplayClass::ExitMode((DisplayClass *)this); /*0x6938c3*/
  *((unsigned char *)this + 21850) = 0; /*0x6938c8*/
  result = (int)GetCapture(); /*0x6938cf*/
  if ( (HWND)result == (HWND)(g_hWnd) ) /*0x6938de*/
    return ReleaseCapture(); /*0x6938e0*/
  return result; /*0x6938db*/

}
}
// 0x7B93F0
namespace gamemd {
AbstractClass * * Mouse::DrawCursor(IUnknown * aP1, WWMouseClass * aP2, int a4)
{

  MixFileClass *v5; // ecx
  int v6; // ebx
  WWMouseClass * v7;
  WWMouseClass * v8;
  int v9; // edi
  int SubFile; // eax
  int v11; // eax
  unsigned int *v12; // [esp-2Ch] [ebp-78h]
  WWMouseClass * v13;
  int v14; // [esp+8h] [ebp-44h]
  int v15; // [esp+Ch] [ebp-40h] BYREF
  int v16; // [esp+10h] [ebp-3Ch]
  int v17; // [esp+14h] [ebp-38h]
  WWMouseClass * v18;
  unsigned char v19[16]; // [esp+1Ch] [ebp-30h] BYREF
  int v20[5]; // [esp+2Ch] [ebp-20h] BYREF
  int v21[3]; // [esp+40h] [ebp-Ch] BYREF

  v13 = (gamemd::WWMouseClass *)((int)this);
  v5 = *(MixFileClass **)&this->m_1[3]; /*0x7b93f9*/
  if ( v5 && aP1 && *(unsigned int *)&stru_87F5F0.__pad_58[128] ) /*0x7b9418*/
  {
    v6 = (int)(*((unsigned int *)this + 20));
    v7 = (gamemd::WWMouseClass *)((int)((gamemd::WWMouseClass *)(*((unsigned int *)this + 21))));
    v8 = (gamemd::WWMouseClass *)((unsigned int)(aP2)+ *((unsigned int *)this + 18));
    v9 = (int)(a4 + *((unsigned int *)this + 19));
    SubFile = (int)(MixFileClass::GetSubFile(v5, *(unsigned int *)&this->__pad_5[3]));
    v20[1] = v6; /*0x7b9447*/
    v20[2] = v7; /*0x7b9454*/
    v20[3] = 0; /*0x7b9458*/
    v20[4] = 1; /*0x7b9468*/
    Buffer::Init((Buffer *)v21, SubFile, v7 * v6); /*0x7b9470*/
    v20[0] = (int)&BSurface_Vtable; /*0x7b947d*/
    if ( aP1 == *(int **)((unsigned int)(v13)+ 36) ) /*0x7b9488*/
    {
      v15 = (int)(0);
      v16 = (int)(0);
      v12 = (unsigned int *)((unsigned int)(v13)+ 44); /*0x7b94a6*/
      v13 = v8; /*0x7b94b8*/
      v14 = v9; /*0x7b94bc*/
      v17 = v6; /*0x7b94c0*/
      v18 = v7; /*0x7b94c4*/
    }
    else
    {
      v15 = (int)(0);
      v16 = (int)(0);
      v11 = (int)(*aP1);
      v13 = (gamemd::WWMouseClass *)((int)(v8));
      v14 = v9; /*0x7b94ea*/
      v17 = v6; /*0x7b94ee*/
      v18 = v7; /*0x7b94f2*/
      v12 = (unsigned int *)(*(int (**)(int *, unsigned char *))(v11 + 120))(aP1, v19); /*0x7b94f9*/
    }
    BlitterDrawSHP(aP1, *(int *)&stru_87F5F0.__pad_58[128], v20, &v15, &v13, v12, 0, 0, 0, 0, 1000, 0, 0); /*0x7b94c8*/
    Vector::Clear((int)v21); /*0x7b951f*/
  }

}
}
// 0x53EC90
namespace gamemd {
SHORT Mouse::GetKeyState(uint8_t vKey)
{

  if ( stru_AA0398.AudioStream_field_0xAC ) /*0x53ec97*/
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
  return Mouse::GetKeyState(v1) != 0; /*0x54f600*/

}
} // namespace gamemd

// 0x5BC400
namespace gamemd {
HWND Mouse::HideWindow()
{

  HWND result; // eax

  result = (HWND)(dword_ABF240);
  byte_ABF239 = 0; /*0x5bc409*/
  if ( dword_ABF240 ) /*0x5bc40f*/
  {
    byte_ABF23A = 0; /*0x5bc413*/
    return (HWND)ShowWindow(dword_ABF240, 0); /*0x5bc419*/
  }
  return result; /*0x5bc41f*/

}
} // namespace gamemd
