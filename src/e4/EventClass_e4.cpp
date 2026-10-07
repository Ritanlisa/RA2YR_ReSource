// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/ScriptAction_e4.hpp"
#include "e4/classes/Sidebar_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/EventQueue_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/SuperClass_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers

// 0x48B390
namespace gamemd {
int EventClass::serializeEvent(void *a1_1)
{

  int result; // eax
  int v2; // esi
  unsigned int *v3; // edx

  result = (int)this->EventClass_field_0x4; /*0x48b390*/
  v2 = 0; /*0x48b397*/
  this->EventClass_field_0x28 = 0; /*0x48b39b*/
  if ( result > 0 ) /*0x48b39e*/
  {
    result = 0; /*0x48b3a1*/
    do /*0x48b402*/
    {
      *(unsigned int *)((char *)this->EventClass_field_0x24 + result) &= ~1u; /*0x48b3ad*/
      *(unsigned int *)((char *)this->EventClass_field_0x24 + result) &= ~2u; /*0x48b3b9*/
      v3 = (unsigned int *)((char *)this->EventClass_field_0x24 + result); /*0x48b3be*/
      result += 36; /*0x48b3c0*/
      ++v2; /*0x48b3c8*/
      *v3 &= ~4u; /*0x48b3c9*/
      *(unsigned int *)((char *)this->EventClass_field_0x24 + result - 32) = 0; /*0x48b3ce*/
      *(unsigned int *)((char *)this->EventClass_field_0x24 + result - 28) = 0; /*0x48b3d5*/
      *(unsigned int *)((char *)this->EventClass_field_0x24 + result - 24) = 0; /*0x48b3dc*/
      *(unsigned int *)((char *)this->EventClass_field_0x24 + result - 20) = 0; /*0x48b3e3*/
      *(unsigned int *)((char *)this->EventClass_field_0x24 + result - 12) = 0; /*0x48b3ea*/
      *(unsigned short *)((char *)this->EventClass_field_0x24 + result - 4) = 0; /*0x48b3f1*/
      *((unsigned int *)this->EventClass_field_0x30 + v2 - 1) = 0; /*0x48b3f9*/
    }
    while ( v2 < (int)this->EventClass_field_0x4 ); /*0x48b402*/
  }
  return result; /*0x48b405*/

}
}
// 0x48BAD0
namespace gamemd {
int EventClass::SetData(int a2, int a3, int a4, int a5, int a6)
{

  this->EventClass_field_0x44 = (unsigned int)((void *)a2);
  this->EventClass_field_0x48 = (unsigned int)((void *)a3);
  this->EventClass_field_0x4C[0] = a4; /*0x48bae6*/
  this->EventClass_field_0x50 = (unsigned int)((void *)a5); /*0x48baed*/
  this->EventClass_field_0x54 = (unsigned int)((void *)a6); /*0x48baf0*/
  return a6; /*0x48baf3*/

}
}
// 0x4C65E0
namespace gamemd {
void * EventClass::Add(AbstractClass * aP1, unsigned char a3, int a4, char a5)
{

  Debug::Log("Adding event %s\n", off_82091C[a3]); /*0x4c65fc*/
  if ( aP1 < 0 ) /*0x4c660a*/
  {
    *((unsigned char *)this + 2) = -1; /*0x4c6631*/
    *(unsigned int *)this = 0; /*0x4c6635*/
    *(unsigned int *)&this->u32_3 = dword_A8ED84; /*0x4c663d*/
    return (void *)this; /*0x4c6640*/
  }
  else
  {
    *((unsigned char *)this + 2) = (unsigned char)(aP1); /*0x4c6610*/
    *(unsigned int *)this = a3; /*0x4c661a*/
    *(unsigned int *)&this->q007 = a4; /*0x4c661c*/
    *((unsigned char *)this + 11) = a5; /*0x4c6620*/
    *(unsigned int *)&this->u32_3 = dword_A8ED84; /*0x4c6629*/
    return (void *)this; /*0x4c661e*/
  }

}
}
// 0x4C66C0
namespace gamemd {
int EventClass::AddEvent(int a2, unsigned __int8 a3)
{

  Debug::Log("Adding event %s\n", off_82091C[a3]); /*0x4c66dc*/
  if ( a2 < 0 ) /*0x4c66ea*/
  {
    *((unsigned char *)this + 2) = -1; /*0x4c6701*/
    *(unsigned int *)this = 0; /*0x4c6705*/
    *(unsigned int *)&this->u32_3 = (int)(dword_A8ED84); /*0x4c670d*/
    return (int)(this); /*0x4c6710*/
  }
  else
  {
    *((unsigned char *)this + 2) = a2; /*0x4c66ec*/
    *(unsigned int *)this = a3; /*0x4c66ef*/
    *(unsigned int *)&this->u32_3 = (int)(dword_A8ED84); /*0x4c66f9*/
    return (int)(this); /*0x4c66f7*/
  }

}
}
// 0x4C6720
namespace gamemd {
int EventClass::Add2(int a3, unsigned __int8 aP1, int aP3)
{

  Debug::Log("Adding event %s\n", off_82091C[a3]); /*0x4c673c*/
  if ( aP1 < 0 ) /*0x4c674a*/
  {
    *((unsigned char *)this + 2) = -1; /*0x4c6767*/
    *(unsigned int *)this = 0; /*0x4c676b*/
    *(unsigned int *)&this->u32_3 = (int)(dword_A8ED84); /*0x4c6776*/
    return (int)(this); /*0x4c6774*/
  }
  else
  {
    *((unsigned char *)this + 2) = (unsigned char)(aP1); /*0x4c6750*/
    *(unsigned int *)this = a3; /*0x4c6753*/
    *(unsigned int *)&this->q007 = (unsigned int)(aP3); /*0x4c6755*/
    *(unsigned int *)&this->u32_3 = (int)(dword_A8ED84); /*0x4c675d*/
    return (int)(this); /*0x4c6760*/
  }

}
}
// 0x4C6970
namespace gamemd {
char * EventClass::AddEventEx(int a2, unsigned __int8 a3, int a4, int a5, int a6)
{

  Debug::Log("Adding event %s\n", off_82091C[a3]); /*0x4c698c*/
  if ( a2 < 0 ) /*0x4c699a*/
  {
    *((unsigned char *)this + 2) = -1; /*0x4c69c6*/
    *(unsigned int *)this = 0; /*0x4c69ca*/
    *(unsigned int *)&this->u32_3 = (int)(dword_A8ED84); /*0x4c69d2*/
    return (int)(this); /*0x4c69d5*/
  }
  else
  {
    *((unsigned char *)this + 2) = (unsigned char)(a2); /*0x4c69a4*/
    *(unsigned int *)this = a3; /*0x4c69ab*/
    *(unsigned int *)&this->q007 = (unsigned int)(a4); /*0x4c69ad*/
    *(unsigned int *)&this->q00B = (unsigned int)(a5); /*0x4c69b0*/
    *(unsigned int *)&this->u32_F = (unsigned int)(a6); /*0x4c69b3*/
    *(unsigned int *)&this->u32_3 = (int)(dword_A8ED84); /*0x4c69be*/
    return (int)(this); /*0x4c69bc*/
  }

}
}
// 0x4C6AE0
namespace gamemd {
int EventClass::Init(IUnknown * aP1, char a3, int a4, int a5, int arg10, unsigned short * a6, void *a7_1, void *a8_1)
{

  Debug::Log("Adding event %s\n"); /*0x4c6afc G57c1: IDA 0x4c6afc push offset g_Str_Trace_Adding_event__s*/
  if ( aP1 < 0 ) /*0x4c6b0a*/
  {
    *((unsigned char *)this + 2) = -1; /*0x4c6b49*/
    *(unsigned int *)this = 0; /*0x4c6b4d*/
    *(unsigned int *)&this->u32_3 = (int)(dword_A8ED84); /*0x4c6b58*/
    return (int)(this); /*0x4c6b56*/
  }
  else
  {
    *((unsigned char *)this + 2) = (unsigned char)(aP1); /*0x4c6b14*/
    *(unsigned int *)&this->q00B = a5; /*0x4c6b1b*/
    *(unsigned int *)this = a3; /*0x4c6b22*/
    *(unsigned int *)&this->q007 = a4; /*0x4c6b24*/
    *(unsigned int *)&this->u32_F = arg10; /*0x4c6b27*/
    *(unsigned short *)&this->q013 = *a6; /*0x4c6b2d*/
    *(unsigned short *)&this->q015 = a6[1]; /*0x4c6b35*/
    *(unsigned int *)&this->u32_3 = (int)(dword_A8ED84); /*0x4c6b3f*/
    return (int)(this); /*0x4c6b42*/
  }

}
}
// 0x4C6CB0
namespace gamemd {
AbstractClass * * EventClass::ProcessEvent()
{

  void *v2; // ebx
  int v3; // edi
  BuildingClass *Building; // esi
  BuildingClass *v5; // esi
  TechnoClass *v6; // edi
  void *v7; // eax
  wchar_t *v8; // eax
  unsigned char *v9; // esi
  unsigned char *v10; // edi
  unsigned int *v11; // eax
  CellClass *v12; // eax
  int16_t v13; // ax
  int v14; // eax
  AnimClass *v15; // eax
  void **v16; // eax
  AnimClass *v17; // eax
  void **v18; // edi
  int v19; // esi
  int16_t v20; // dx
  bool v21; // zf
  void *v22; // eax
  int v23; // esi
  Team *v24; // edi
  int v25; // ebx
  int v26; // eax
  int Object; // eax
  void *v28; // eax
  void *v29; // ebp
  unsigned char *Member; // eax
  unsigned char *v31; // ebp
  int *v32; // ecx
  int v33; // ebx
  TechnoClass *v34; // ebp
  FactoryClass *v35; // ecx
  int v36; // ebx
  BuildingLoadQueue *v37; // esi
  void *Next; // eax
  void *v39; // eax
  void *v40; // ebx
  int v41; // ebp
  void *v42; // eax
  int v43; // ebx
  void *v44; // eax
  FootClass *v45; ... [37047 chars total]
}
} // namespace gamemd

// 0x542280
namespace gamemd {
int EventClass::deserializeEvent(int a2, unsigned int *aP2)
{

  int result; // eax
  unsigned int *v5; // edx

  result = (*(int (**)(EventClass *, int))(this->EventClass_field_0x0 + 24))(this, a2); /*0x54228c*/
  if ( result != -1 && result < (int)this->EventClass_field_0x44 ) /*0x542297*/
  {
    v5 = (unsigned int *)((int)((unsigned int *)(*((unsigned int *)&this->EventClass_field_0x28 + result) + 76)));
    *v5 = *(int *)aP2;
    v5[1] = ((int *)aP2)[1];
    result = ((int *)aP2)[2];
    v5[2] = result; /*0x5422b1*/
  }
  return result; /*0x5422b4*/

}
}
// 0x54F200
namespace gamemd {
int EventClass::Enqueue(unsigned short a2, char a3)
{

  int result; // eax
  int16_t v5; // si
  int v6; // ecx

  result = ChronoScreen::IsActive(); /*0x54f205*/
  if ( (unsigned char)result ) /*0x54f20c*/
    goto LABEL_19; /*0x54f20c*/
  v5 = a2; /*0x54f217*/
  if ( *((unsigned int *)((char *)&stru_A8EB00 + 440)) ) /*0x54f21d*/
  {
    if ( a2 != 27 ) /*0x54f223*/
      goto LABEL_19; /*0x54f223*/
  }
  Memory_Helper(a2, a3); /*0x54f237*/
  if ( (uint8_t)a2 != 1 && (uint8_t)a2 != 4 && (uint8_t)a2 != 2 && (uint8_t)a2 != 10 ) /*0x54f259*/
  {
    if ( (((uint16_t)EventClass::GetKeyStateSafe((unsigned char)((EventClass *)0x10)) >> 8) & 0x80u) != 0 ) /*0x54f268*/
      v5 = a2 | 0x100; /*0x54f26a*/
    if ( (((uint16_t)EventClass::GetKeyStateSafe((unsigned char)((EventClass *)0x11)) >> 8) & 0x80u) != 0 ) /*0x54f27d*/
      v5 |= 0x200u; /*0x54f27f*/
    result = EventClass::GetKeyStateSafe((unsigned char)((EventClass *)0x12)); /*0x54f28a*/
    if ( (result & 0x8000) != 0 ) /*0x54f292*/
    {
      if ( v5 == 9 ) /*0x54f298*/
      {
LABEL_19:
        LOBYTE(result) = 1; /*0x54f2d7*/
        return result; /*0x54f2dc*/
      }
      v5 |= 0x400u; /*0x54f29a*/
    }
  }
  if ( a3 ) /*0x54f2a2*/
    v5 |= 0x800u; /*0x54f2a4*/
  v6 = *(unsigned int *)&this->__pad_58[704]; /*0x54f2aa*/
  result = (v6 + 1) % 256; /*0x54f2c0*/
  if ( result != *(unsigned int *)&this->__pad_58[700] ) /*0x54f2c7*/
  {
    *(unsigned short *)&this->__pad_58[2 * v6 + 188] = v5; /*0x54f2c9*/
    *(unsigned int *)&this->__pad_58[704] = result; /*0x54f2d1*/
    goto LABEL_19; /*0x54f2d1*/
  }
  LOBYTE(result) = 0; /*0x54f2e1*/
  return result; /*0x54f2d7*/

}
}
// 0x5F19C0
namespace gamemd {
int EventClass::CheckFlag()
{

  EventClass **EventClass_field_0x38; // eax

  EventClass_field_0x38 = (EventClass **)this->EventClass_field_0x38; /*0x5f19c0*/
  if ( EventClass_field_0x38 ) /*0x5f19c5*/
    EventClass::serializeEvent(EventClass_field_0x38[1]); /*0x5f19ca*/
  return 1; /*0x5f19d4*/

}
}
// 0x664440
namespace gamemd {
AbstractClass * * EventClass::validateEventType()
{

  int v1; // ebx
  int v3; // eax
  int v4; // ecx
  char *v5; // eax
  int v6; // eax
  int v7; // ecx
  char *v8; // eax
  Network *v9; // ecx
  int v10; // eax
  unsigned int *v11; // edx
  int v13; // [esp+Ch] [ebp-Ch] BYREF
  uint8_t v14[8]; // [esp+10h] [ebp-8h] BYREF

  v1 = dword_A8E2CC; /*0x664444*/
  if ( dword_A8E2CC == -1 ) /*0x664451*/
  {
    v3 = *(unsigned int *)this->__pad_10; /*0x664453*/
    v4 = 0; /*0x664456*/
    if ( v3 > 0 ) /*0x66445a*/
    {
      do /*0x66447c*/
      {
        v5 = *(char **)(this->EventClass_field_0x4 + 4 * v4); /*0x664461*/
        if ( v5[41] && !v5[39] ) /*0x66446a*/
        {
          v1 = *v5; /*0x664470*/
          v5[39] = 1; /*0x664473*/
        }
        ++v4; /*0x664479*/
      }
      while ( v4 < *(unsigned int *)this->__pad_10 ); /*0x66447c*/
    }
  }
  else
  {
    v6 = *(unsigned int *)this->__pad_10; /*0x664480*/
    v7 = 0; /*0x664483*/
    if ( v6 > 0 ) /*0x664487*/
    {
      do /*0x6644a7*/
      {
        v8 = *(char **)(this->EventClass_field_0x4 + 4 * v7); /*0x66448e*/
        v8[39] = *v8 == v1; /*0x664498*/
        ++v7; /*0x6644a4*/
      }
      while ( v7 < *(unsigned int *)this->__pad_10 ); /*0x6644a7*/
    }
  }
  if ( ((SessionClass *)(int)&dword_A8B238)->IsValidHouse( 0) /*0x6644d2*/
    || v1 == -1
    || v1 != dword_A83D4C->Object_field_0x30
    || dword_A8DA84 <= 2 )
  {
    return (gamemd::AbstractClass **)(v1); /*0x664526*/
  }
  v9 = (Network *)(0); /*0x6644d4*/
  v10 = 0; /*0x6644d6*/
  if ( dword_A8DA84 > 0 ) /*0x6644db*/
  {
    v11 = (unsigned int *)(dword_A8DA78);
    while ( *(unsigned int *)(*v11 + 111) != v1 ) /*0x6644e8*/
    {
      ++v10; /*0x6644ea*/
      ++v11; /*0x6644eb*/
      if ( v10 >= dword_A8DA84 ) /*0x6644f0*/
        goto LABEL_23; /*0x6644f0*/
    }
    v9 = (Network *)(((unsigned int *)(dword_A8DA78))[v10] + 40); /*0x6644fd*/
  }
LABEL_23:
  ((Network *)(v9))->CopyAddress((unsigned int *)(&v13), (int)v14); /*0x664500*/
  LaunchMultiplayerHost( (void *)((bool *)this), (void *)(v14)); /*0x664516*/
  return (gamemd::AbstractClass **)(v1); /*0x66451c*/

}
}
// 0x40B6A0
namespace gamemd {
void EventClass::initEvent()
{

  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x40b6a6*/
  this->Count = 0; /*0x40b6a9*/
  if ( v2 && ((unsigned char*)&this->q00C)[1] ) /*0x40b6b0*/
  {
    __3_YAXPAX_Z(v2); /*0x40b6b6*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x40b6be*/
  }
  ((unsigned char*)&this->q00C)[1] = 0; /*0x40b6c1*/
  this->q008 = 0; /*0x40b6c4*/

}
} // namespace gamemd

// 0x40B740
namespace gamemd {
char EventClass::processEvent(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x40b74c*/
  {
    ((unsigned char*)&this->q00C)[0] = 0; /*0x40b756*/
    if ( a3 ) /*0x40b75c*/
      v4 = a3; /*0x40b772*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x40b76e*/
    ((unsigned char*)&this->q00C)[0] = 1; /*0x40b776*/
    if ( v4 ) /*0x40b77a*/
    {
      if ( *(unsigned int *)&this->m_1[3] ) /*0x40b785*/
      {
        m_8 =(int)this->q008; /*0x40b78c*/
        if ( a2 < m_8 ) /*0x40b791*/
          m_8 = a2; /*0x40b793*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x40b799*/
          ++i; /*0x40b79e*/
        if ( ((unsigned char*)&this->q00C)[1] ) /*0x40b7ab*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x40b7b6*/
          *(unsigned int *)&this->m_1[3] = 0; /*0x40b7be*/
        }
      }
      *(unsigned int *)&this->m_1[3] = (unsigned int)(v4); /*0x40b7c7*/
      this->q008 =(void *)a2; /*0x40b7cf*/
      ((unsigned char*)&this->q00C)[1] = a3 == 0; /*0x40b7d2*/
      return 1; /*0x40b7d8*/
    }
    else
    {
      return 0; /*0x40b77f*/
    }
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x40b7e2*/
    return 1; /*0x40b7e8*/
  }

}
} // namespace gamemd

// 0x40B880
namespace gamemd {
char EventClass::validateEvent(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x40b88c*/
  {
    ((unsigned char*)&this->q00C)[0] = 0; /*0x40b892*/
    if ( a3 ) /*0x40b898*/
      v4 = a3; /*0x40b8ae*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x40b8aa*/
    ((unsigned char*)&this->q00C)[0] = 1; /*0x40b8b2*/
    if ( !v4 ) /*0x40b8b6*/
      return 0; /*0x40b92a*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x40b8b8*/
    {
      m_8 =(int)this->q008; /*0x40b8bf*/
      if ( a2 < m_8 ) /*0x40b8c4*/
        m_8 = a2; /*0x40b8c6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x40b8cc*/
        ++i; /*0x40b8d1*/
      if ( ((unsigned char*)&this->q00C)[1] ) /*0x40b8de*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x40b8e9*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x40b8f1*/
      }
    }
    *(unsigned int *)&this->m_1[3] = (unsigned int)(v4); /*0x40b8fa*/
    this->q008 =(void *)a2; /*0x40b902*/
    ((unsigned char*)&this->q00C)[1] = a3 == 0; /*0x40b905*/
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x40b90e*/
  }
  v7 =(int)this->q008; /*0x40b911*/
  if ( v7 < this->Count ) /*0x40b919*/
    this->Count = v7; /*0x40b91b*/
  return 1; /*0x40b91e*/

}
} // namespace gamemd

// 0x40B9A0
namespace gamemd {
char EventClass::dispatchEvent(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x40b9ac*/
  {
    ((unsigned char*)&this->q00C)[0] = 0; /*0x40b9b6*/
    if ( a3 ) /*0x40b9bc*/
      v4 = a3; /*0x40b9d2*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x40b9ce*/
    ((unsigned char*)&this->q00C)[0] = 1; /*0x40b9d6*/
    if ( v4 ) /*0x40b9da*/
    {
      if ( *(unsigned int *)&this->m_1[3] ) /*0x40b9e5*/
      {
        m_8 =(int)this->q008; /*0x40b9ec*/
        if ( a2 < m_8 ) /*0x40b9f1*/
          m_8 = a2; /*0x40b9f3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x40b9f9*/
          ++i; /*0x40b9fe*/
        if ( ((unsigned char*)&this->q00C)[1] ) /*0x40ba0b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x40ba16*/
          *(unsigned int *)&this->m_1[3] = 0; /*0x40ba1e*/
        }
      }
      *(unsigned int *)&this->m_1[3] = (unsigned int)(v4); /*0x40ba27*/
      this->q008 =(void *)a2; /*0x40ba2f*/
      ((unsigned char*)&this->q00C)[1] = a3 == 0; /*0x40ba32*/
      return 1; /*0x40ba38*/
    }
    else
    {
      return 0; /*0x40b9df*/
    }
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x40ba42*/
    return 1; /*0x40ba48*/
  }

}
} // namespace gamemd

// 0x40BAE0
namespace gamemd {
char EventClass::checkCondition(int a2, unsigned int * a3, void *a3_2)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x40baec*/
  {
    ((unsigned char*)&this->q00C)[0] = 0; /*0x40baf2*/
    if ( a3 ) /*0x40baf8*/
      v4 = a3; /*0x40bb0e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x40bb0a*/
    ((unsigned char*)&this->q00C)[0] = 1; /*0x40bb12*/
    if ( !v4 ) /*0x40bb16*/
      return 0; /*0x40bb8a*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x40bb18*/
    {
      m_8 =(int)this->q008; /*0x40bb1f*/
      if ( a2 < m_8 ) /*0x40bb24*/
        m_8 = a2; /*0x40bb26*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x40bb2c*/
        ++i; /*0x40bb31*/
      if ( ((unsigned char*)&this->q00C)[1] ) /*0x40bb3e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x40bb49*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x40bb51*/
      }
    }
    *(unsigned int *)&this->m_1[3] = (unsigned int)(v4); /*0x40bb5a*/
    this->q008 =(void *)a2; /*0x40bb62*/
    ((unsigned char*)&this->q00C)[1] = a3 == 0; /*0x40bb65*/
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x40bb6e*/
  }
  v7 =(int)this->q008; /*0x40bb71*/
  if ( v7 < this->Count ) /*0x40bb79*/
    this->Count = v7; /*0x40bb7b*/
  return 1; /*0x40bb7e*/

}
} // namespace gamemd

// 0x40BC10
namespace gamemd {
DynamicVector * EventClass::executeAction(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x40bc13*/
  *(unsigned int *)this->__pad_0 = (unsigned int)&vt_VectorClass;
  if ( v3 && BYTE1(this->q00C) ) /*0x40bc20*/
  {
    __3_YAXPAX_Z(v3); /*0x40bc28*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x40bc30*/
  }
  BYTE1(this->q00C) = 0; /*0x40bc3b*/
  this->q008 = 0; /*0x40bc41*/
  if ( (a2 & 1) != 0 ) /*0x40bc48*/
    __3_YAXPAX_Z(this); /*0x40bc4b*/
  return this->__pad_0; /*0x40bc55*/

}
} // namespace gamemd

// 0x40BD00
namespace gamemd {
unsigned int * EventClass::resetEvent(int aP1, int aP2)
{

  this->EventClass_field_0x4 = 0; /*0x40bd0b*/
  this->q008 = (void *)aP1; /*0x40bd0e*/
  LOBYTE(this->EventClass_field_0xC) = 1; /*0x40bd11*/
  BYTE1(this->EventClass_field_0xC) = 0; /*0x40bd15*/
  this->EventClass_field_0x0 = (int)&vt_VectorClass; /*0x40bd18*/
  if ( aP1 ) /*0x40bd1e*/
  {
    if ( aP2 ) /*0x40bd26*/
    {
      this->EventClass_field_0x4 = (unsigned int)((void *)aP2); /*0x40bd28*/
      return &this->EventClass_field_0x0; /*0x40bd2e*/
    }
    this->EventClass_field_0x4 = (unsigned int)((void *)__2_YAPAXI_Z(4 * aP1)); /*0x40bd3d*/
    BYTE1(this->EventClass_field_0xC) = 1; /*0x40bd40*/
  }
  return &this->EventClass_field_0x0; /*0x40bd2d*/

}
} // namespace gamemd

// 0x40BE10
namespace gamemd {
void EventClass::finalizeEvent()
{

  dword_87F658 = (unsigned int)(int)&vt_VectorClass;
  if ( dword_87F65C && byte_87F665 ) /*0x40be2c*/
  {
    __3_YAXPAX_Z((void *)(dword_87F65C)); /*0x40be2f*/
    dword_87F65C = 0; /*0x40be37*/
  }
  byte_87F665 = 0; /*0x40be3d*/
  dword_87F660 = 0; /*0x40be43*/

}
} // namespace gamemd

// 0x40C110
namespace gamemd {
VectorClass_flat * EventClass::queueEvent(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x40c113*/
  *(unsigned int *)this->__pad_0 = (unsigned int)&vt_VectorClass;
  if ( v3 && BYTE1(this->q00C) ) /*0x40c120*/
  {
    __3_YAXPAX_Z(v3); /*0x40c128*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x40c130*/
  }
  BYTE1(this->q00C) = 0; /*0x40c13b*/
  this->q008 = 0; /*0x40c141*/
  if ( (a2 & 1) != 0 ) /*0x40c148*/
    __3_YAXPAX_Z(this); /*0x40c14b*/
  return this->__pad_0; /*0x40c155*/

}
} // namespace gamemd

// 0x40C260
namespace gamemd {
unsigned int EventClass::dequeueEvent(int a2)
{

  if ( ((unsigned char*)&this->q00C)[0] ) /*0x40c260*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x40c275*/
  else
    return 0; /*0x40c267*/

}
} // namespace gamemd

// 0x40C410
namespace gamemd {
char EventClass::clearEvents(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x40c41c*/
  {
    ((unsigned char*)&this->q00C)[0] = 0; /*0x40c422*/
    if ( a3 ) /*0x40c428*/
      v4 = a3; /*0x40c43e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x40c43a*/
    ((unsigned char*)&this->q00C)[0] = 1; /*0x40c442*/
    if ( !v4 ) /*0x40c446*/
      return 0; /*0x40c4ba*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x40c448*/
    {
      m_8 =(int)this->q008; /*0x40c44f*/
      if ( a2 < m_8 ) /*0x40c454*/
        m_8 = a2; /*0x40c456*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x40c45c*/
        ++i; /*0x40c461*/
      if ( ((unsigned char*)&this->q00C)[1] ) /*0x40c46e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x40c479*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x40c481*/
      }
    }
    *(unsigned int *)&this->m_1[3] = (unsigned int)(v4); /*0x40c48a*/
    this->q008 =(void *)a2; /*0x40c492*/
    ((unsigned char*)&this->q00C)[1] = a3 == 0; /*0x40c495*/
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x40c49e*/
  }
  v7 =(int)this->q008; /*0x40c4a1*/
  if ( v7 < this->Count ) /*0x40c4a9*/
    this->Count = v7; /*0x40c4ab*/
  return 1; /*0x40c4ae*/

}
} // namespace gamemd

// 0x40C590
namespace gamemd {
void EventClass::getEventCount()
{

  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x40c59c*/
  dbl_87F6F8 = Math::Sqrt(v0 + v0); /*0x40c5ae*/

}
} // namespace gamemd

// 0x53EC70
namespace gamemd {
SHORT EventClass::GetKeyStateSafe(unsigned char nVirtKey)
{

  int result; // eax

  HIWORD(result) = HIWORD(stru_AA0398.AudioStream_field_0xAC); /*0x53ec70*/
  if ( stru_AA0398.AudioStream_field_0xAC ) /*0x53ec77*/
    LOWORD(result) = (&word_AA0168)[(uint8_t)nVirtKey]; /*0x53ec87*/
  else
    LOWORD(result) = GetKeyState((uint8_t)nVirtKey); /*0x53ec7a*/
  return result; /*0x53ec80*/

}
} // namespace gamemd

// 0x5F3440
namespace gamemd {
int EventClass::GetState(int a1)
{

  return 0; /*0x5f3442*/

}
} // namespace gamemd
