// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/EventClass_e4.hpp"

// 0x40B6A0
namespace gamemd {
void EventClass::initEvent()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall MoveFeedback::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x40b6a6*/
  *(_DWORD *)(this + 16) = 0; /*0x40b6a9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x40b6b0*/
  {
    __3_YAXPAX_Z(v2); /*0x40b6b6*/
    this->EventClass_field_0x4 = 0; /*0x40b6be*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x40b6c1*/
  this->EventClass_field_0x8 = 0; /*0x40b6c4*/
}
}
} // namespace gamemd

// 0x40B740
namespace gamemd {
char EventClass::processEvent(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall VectorClass_ptr_BombClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x40b74c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x40b756*/
    if ( a3 ) /*0x40b75c*/
      v4 = a3; /*0x40b772*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x40b76e*/
    *((_BYTE *)this + 12) = 1; /*0x40b776*/
    if ( v4 ) /*0x40b77a*/
    {
      if ( this->EventClass_field_0x4 ) /*0x40b785*/
      {
        v6 = this->EventClass_field_0x8; /*0x40b78c*/
        if ( a2 < v6 ) /*0x40b791*/
          v6 = a2; /*0x40b793*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->EventClass_field_0x4 + 4 * i - 4) ) /*0x40b799*/
          ++i; /*0x40b79e*/
        if ( *((_BYTE *)this + 13) ) /*0x40b7ab*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x40b7b6*/
          this->EventClass_field_0x4 = 0; /*0x40b7be*/
        }
      }
      this->EventClass_field_0x4 = v4; /*0x40b7c7*/
      this->EventClass_field_0x8 = a2; /*0x40b7cf*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x40b7d2*/
      return 1; /*0x40b7d8*/
    }
    else
    {
      return 0; /*0x40b77f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x40b7e2*/
    return 1; /*0x40b7e8*/
  }
}
}
} // namespace gamemd

// 0x40B880
namespace gamemd {
char EventClass::validateEvent(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MoveFeedback::sub_40B880(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x40b88c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x40b892*/
    if ( a3 ) /*0x40b898*/
      v4 = a3; /*0x40b8ae*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x40b8aa*/
    *((_BYTE *)this + 12) = 1; /*0x40b8b2*/
    if ( !v4 ) /*0x40b8b6*/
      return 0; /*0x40b92a*/
    if ( this->EventClass_field_0x4 ) /*0x40b8b8*/
    {
      v5 = this->EventClass_field_0x8; /*0x40b8bf*/
      if ( a2 < v5 ) /*0x40b8c4*/
        v5 = a2; /*0x40b8c6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->EventClass_field_0x4 + 4 * i - 4) ) /*0x40b8cc*/
        ++i; /*0x40b8d1*/
      if ( *((_BYTE *)this + 13) ) /*0x40b8de*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x40b8e9*/
        this->EventClass_field_0x4 = 0; /*0x40b8f1*/
      }
    }
    this->EventClass_field_0x4 = v4; /*0x40b8fa*/
    this->EventClass_field_0x8 = a2; /*0x40b902*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x40b905*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x40b90e*/
  }
  v7 = this->EventClass_field_0x8; /*0x40b911*/
  if ( v7 < *((_DWORD *)this + 4) ) /*0x40b919*/
    *((_DWORD *)this + 4) = v7; /*0x40b91b*/
  return 1; /*0x40b91e*/
}
}
} // namespace gamemd

// 0x40B9A0
namespace gamemd {
char EventClass::dispatchEvent(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall VectorClass_Techno::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x40b9ac*/
  {
    *((_BYTE *)this + 12) = 0; /*0x40b9b6*/
    if ( a3 ) /*0x40b9bc*/
      v4 = a3; /*0x40b9d2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x40b9ce*/
    *((_BYTE *)this + 12) = 1; /*0x40b9d6*/
    if ( v4 ) /*0x40b9da*/
    {
      if ( this->EventClass_field_0x4 ) /*0x40b9e5*/
      {
        v6 = this->EventClass_field_0x8; /*0x40b9ec*/
        if ( a2 < v6 ) /*0x40b9f1*/
          v6 = a2; /*0x40b9f3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->EventClass_field_0x4 + 4 * i - 4) ) /*0x40b9f9*/
          ++i; /*0x40b9fe*/
        if ( *((_BYTE *)this + 13) ) /*0x40ba0b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x40ba16*/
          this->EventClass_field_0x4 = 0; /*0x40ba1e*/
        }
      }
      this->EventClass_field_0x4 = v4; /*0x40ba27*/
      this->EventClass_field_0x8 = a2; /*0x40ba2f*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x40ba32*/
      return 1; /*0x40ba38*/
    }
    else
    {
      return 0; /*0x40b9df*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x40ba42*/
    return 1; /*0x40ba48*/
  }
}
}
} // namespace gamemd

// 0x40BAE0
namespace gamemd {
char EventClass::checkCondition(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MoveFeedback::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x40baec*/
  {
    *((_BYTE *)this + 12) = 0; /*0x40baf2*/
    if ( a3 ) /*0x40baf8*/
      v4 = a3; /*0x40bb0e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x40bb0a*/
    *((_BYTE *)this + 12) = 1; /*0x40bb12*/
    if ( !v4 ) /*0x40bb16*/
      return 0; /*0x40bb8a*/
    if ( this->EventClass_field_0x4 ) /*0x40bb18*/
    {
      v5 = this->EventClass_field_0x8; /*0x40bb1f*/
      if ( a2 < v5 ) /*0x40bb24*/
        v5 = a2; /*0x40bb26*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->EventClass_field_0x4 + 4 * i - 4) ) /*0x40bb2c*/
        ++i; /*0x40bb31*/
      if ( *((_BYTE *)this + 13) ) /*0x40bb3e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x40bb49*/
        this->EventClass_field_0x4 = 0; /*0x40bb51*/
      }
    }
    this->EventClass_field_0x4 = v4; /*0x40bb5a*/
    this->EventClass_field_0x8 = a2; /*0x40bb62*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x40bb65*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x40bb6e*/
  }
  v7 = this->EventClass_field_0x8; /*0x40bb71*/
  if ( v7 < *((_DWORD *)this + 4) ) /*0x40bb79*/
    *((_DWORD *)this + 4) = v7; /*0x40bb7b*/
  return 1; /*0x40bb7e*/
}
}
} // namespace gamemd

// 0x40BC10
namespace gamemd {
DynamicVector * EventClass::executeAction(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DynamicVector *__thiscall EventClass::executeAction(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x40bc13*/
  *Block = &VectorClass<BombClass *>::`vftable'; /*0x40bc16*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x40bc20*/
  {
    __3_YAXPAX_Z(v3); /*0x40bc28*/
    *(Block + 1) = 0; /*0x40bc30*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x40bc3b*/
  *(Block + 2) = 0; /*0x40bc41*/
  if ( (a2 & 1) != 0 ) /*0x40bc48*/
    __3_YAXPAX_Z(Block); /*0x40bc4b*/
  return (DynamicVector *)Block; /*0x40bc55*/
}
}
} // namespace gamemd

// 0x40BD00
namespace gamemd {
unsigned int * EventClass::resetEvent(BuildingClass * aP1, BuildingClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall EventClass::resetEvent(_DWORD *this, BuildingClass *aP1, BuildingClass *aP2)
{
  *(this + 1) = 0; /*0x40bd0b*/
  *(this + 2) = aP1; /*0x40bd0e*/
  *((_BYTE *)this + 12) = 1; /*0x40bd11*/
  *((_BYTE *)this + 13) = 0; /*0x40bd15*/
  *this = &VectorClass<TechnoClass *>::`vftable'; /*0x40bd18*/
  if ( aP1 ) /*0x40bd1e*/
  {
    if ( aP2 ) /*0x40bd26*/
    {
      *(this + 1) = aP2; /*0x40bd28*/
      return this; /*0x40bd2e*/
    }
    *(this + 1) = __2_YAPAXI_Z(4 * (_DWORD)aP1); /*0x40bd3d*/
    *((_BYTE *)this + 13) = 1; /*0x40bd40*/
  }
  return this; /*0x40bd2d*/
}
}
} // namespace gamemd

// 0x40BE10
namespace gamemd {
void EventClass::finalizeEvent()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_40BE10()
{
  MEMORY[0x87F658] = (int)&VectorClass<CommandClass const *>::`vftable'; /*0x40be18*/
  if ( MEMORY[0x87F65C] && MEMORY[0x87F665] ) /*0x40be2c*/
  {
    __3_YAXPAX_Z(MEMORY[0x87F65C]); /*0x40be2f*/
    MEMORY[0x87F65C] = 0; /*0x40be37*/
  }
  MEMORY[0x87F665] = 0; /*0x40be3d*/
  MEMORY[0x87F660] = 0; /*0x40be43*/
}
}
} // namespace gamemd

// 0x40C110
namespace gamemd {
VectorClass * EventClass::queueEvent(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorClass *__thiscall EventClass::queueEvent(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x40c113*/
  *Block = &VectorClass<CommandClass const *>::`vftable'; /*0x40c116*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x40c120*/
  {
    __3_YAXPAX_Z(v3); /*0x40c128*/
    *(Block + 1) = 0; /*0x40c130*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x40c13b*/
  *(Block + 2) = 0; /*0x40c141*/
  if ( (a2 & 1) != 0 ) /*0x40c148*/
    __3_YAXPAX_Z(Block); /*0x40c14b*/
  return (VectorClass *)Block; /*0x40c155*/
}
}
} // namespace gamemd

// 0x40C260
namespace gamemd {
unsigned int EventClass::dequeueEvent(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall VectorClass_ptr_LightConvertClass::sub_40C260(int this, int a2)
{
  if ( (unsigned char)this->EventClass_field_0xC ) /*0x40c260*/
    return (unsigned int)(a2 - this->EventClass_field_0x4) >> 2; /*0x40c275*/
  else
    return 0; /*0x40c267*/
}
}
} // namespace gamemd

// 0x40C410
namespace gamemd {
char EventClass::clearEvents(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall VectorClass_ptr_LightConvertClass::sub_40C410(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x40c41c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x40c422*/
    if ( a3 ) /*0x40c428*/
      v4 = a3; /*0x40c43e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x40c43a*/
    *((_BYTE *)this + 12) = 1; /*0x40c442*/
    if ( !v4 ) /*0x40c446*/
      return 0; /*0x40c4ba*/
    if ( this->EventClass_field_0x4 ) /*0x40c448*/
    {
      v5 = this->EventClass_field_0x8; /*0x40c44f*/
      if ( a2 < v5 ) /*0x40c454*/
        v5 = a2; /*0x40c456*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->EventClass_field_0x4 + 4 * i - 4) ) /*0x40c45c*/
        ++i; /*0x40c461*/
      if ( *((_BYTE *)this + 13) ) /*0x40c46e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x40c479*/
        this->EventClass_field_0x4 = 0; /*0x40c481*/
      }
    }
    this->EventClass_field_0x4 = v4; /*0x40c48a*/
    this->EventClass_field_0x8 = a2; /*0x40c492*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x40c495*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x40c49e*/
  }
  v7 = this->EventClass_field_0x8; /*0x40c4a1*/
  if ( v7 < *((_DWORD *)this + 4) ) /*0x40c4a9*/
    *((_DWORD *)this + 4) = v7; /*0x40c4ab*/
  return 1; /*0x40c4ae*/
}
}
} // namespace gamemd

// 0x40C590
namespace gamemd {
void EventClass::getEventCount()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40C590()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x40c59c*/
  MEMORY[0x87F6F8] = Math::Sqrt(v0 + v0); /*0x40c5ae*/
}
}
} // namespace gamemd

// 0x48B390
namespace gamemd {
int EventClass::serializeEvent()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_48B390(int *this)
{
  int result; // eax
  int v2; // esi
  _DWORD *v3; // edx

  result = *(this + 1); /*0x48b390*/
  v2 = 0; /*0x48b397*/
  *(this + 10) = 0; /*0x48b39b*/
  if ( result > 0 ) /*0x48b39e*/
  {
    result = 0; /*0x48b3a1*/
    do /*0x48b402*/
    {
      *(_DWORD *)(result + *(this + 9)) &= ~1u; /*0x48b3ad*/
      *(_DWORD *)(result + *(this + 9)) &= ~2u; /*0x48b3b9*/
      v3 = (_DWORD *)(result + *(this + 9)); /*0x48b3be*/
      result += 36; /*0x48b3c0*/
      ++v2; /*0x48b3c8*/
      *v3 &= ~4u; /*0x48b3c9*/
      *(_DWORD *)(*(this + 9) + result - 32) = 0; /*0x48b3ce*/
      *(_DWORD *)(*(this + 9) + result - 28) = 0; /*0x48b3d5*/
      *(_DWORD *)(*(this + 9) + result - 24) = 0; /*0x48b3dc*/
      *(_DWORD *)(*(this + 9) + result - 20) = 0; /*0x48b3e3*/
      *(_DWORD *)(*(this + 9) + result - 12) = 0; /*0x48b3ea*/
      *(_WORD *)(*(this + 9) + result - 4) = 0; /*0x48b3f1*/
      *(_DWORD *)(*(this + 12) + 4 * v2 - 4) = 0; /*0x48b3f9*/
    }
    while ( v2 < *(this + 1) ); /*0x48b402*/
  }
  return result; /*0x48b405*/
}
}
} // namespace gamemd

// 0x48BAD0
namespace gamemd {
int EventClass::SetData(int a2, int a3, int a4, int a5, int a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall EventClass::SetData(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  *(this + 17) = a2; /*0x48bad8*/
  *(this + 18) = a3; /*0x48badf*/
  *(this + 19) = a4; /*0x48bae6*/
  *(this + 20) = a5; /*0x48baed*/
  *(this + 21) = a6; /*0x48baf0*/
  return a6; /*0x48baf3*/
}
}
} // namespace gamemd

// 0x4C65E0
namespace gamemd {
char * EventClass::Add(AbstractClass * aP1, unsigned signed char a3, int a4, char a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall EventClass::Add(char *this, AbstractClass *aP1, unsigned __int8 a3, int a4, char a5)
{
  Debug::Log(); /*0x4c65fc*/
  if ( (int)aP1 < 0 ) /*0x4c660a*/
  {
    *(this + 2) = -1; /*0x4c6631*/
    *this = 0; /*0x4c6635*/
    *(_DWORD *)(this + 3) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4c663d*/
    return this; /*0x4c6640*/
  }
  else
  {
    *(this + 2) = (char)aP1; /*0x4c6610*/
    *this = a3; /*0x4c661a*/
    *(_DWORD *)(this + 7) = a4; /*0x4c661c*/
    *(this + 11) = a5; /*0x4c6620*/
    *(_DWORD *)(this + 3) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4c6629*/
    return this; /*0x4c661e*/
  }
}
}
} // namespace gamemd

// 0x4C66C0
namespace gamemd {
char * EventClass::AddEvent(int a2, unsigned signed char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall EventClass_AddEvent(char *this, int a2, unsigned __int8 a3)
{
  Debug::Log("Adding event %s\n", off_82091C[a3]); /*0x4c66dc*/
  if ( a2 < 0 ) /*0x4c66ea*/
  {
    *(this + 2) = -1; /*0x4c6701*/
    *this = 0; /*0x4c6705*/
    *(_DWORD *)(this + 3) = MEMORY[0xA8ED84]; /*0x4c670d*/
    return this; /*0x4c6710*/
  }
  else
  {
    *(this + 2) = a2; /*0x4c66ec*/
    *this = a3; /*0x4c66ef*/
    *(_DWORD *)(this + 3) = MEMORY[0xA8ED84]; /*0x4c66f9*/
    return this; /*0x4c66f7*/
  }
}
}
} // namespace gamemd

// 0x4C6720
namespace gamemd {
char * EventClass::Add2(AnimClass * aP1, unsigned signed char a3, IUnknown * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall EventClass::Add2(char *this, AnimClass *aP1, unsigned __int8 a3, IUnknown *aP3)
{
  Debug::Log(); /*0x4c673c*/
  if ( (int)aP1 < 0 ) /*0x4c674a*/
  {
    *(this + 2) = -1; /*0x4c6767*/
    *this = 0; /*0x4c676b*/
    *(_DWORD *)(this + 3) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4c6776*/
    return this; /*0x4c6774*/
  }
  else
  {
    *(this + 2) = (char)aP1; /*0x4c6750*/
    *this = a3; /*0x4c6753*/
    *(_DWORD *)(this + 7) = aP3; /*0x4c6755*/
    *(_DWORD *)(this + 3) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4c675d*/
    return this; /*0x4c6760*/
  }
}
}
} // namespace gamemd

// 0x4C6970
namespace gamemd {
int EventClass_AddEventEx()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall EventClass::AddEventEx(
        char *this,
        SelectClass_StripClass_SidebarClass *aP1,
        unsigned __int8 a3,
        IUnknown *aP3,
        SelectClass_StripClass_SidebarClass *aP4,
        SelectClass_StripClass_SidebarClass *aP5)
{
  Debug::Log(); /*0x4c698c*/
  if ( (int)aP1 < 0 ) /*0x4c699a*/
  {
    *(this + 2) = -1; /*0x4c69c6*/
    *this = 0; /*0x4c69ca*/
    *(_DWORD *)(this + 3) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4c69d2*/
    return this; /*0x4c69d5*/
  }
  else
  {
    *(this + 2) = (char)aP1; /*0x4c69a4*/
    *this = a3; /*0x4c69ab*/
    *(_DWORD *)(this + 7) = aP3; /*0x4c69ad*/
    *(_DWORD *)(this + 11) = aP4; /*0x4c69b0*/
    *(_DWORD *)(this + 15) = aP5; /*0x4c69b3*/
    *(_DWORD *)(this + 3) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4c69be*/
    return this; /*0x4c69bc*/
  }
}
}
} // namespace gamemd

// 0x4C6AE0
namespace gamemd {
char * EventClass::Init(IUnknown * aP1, char a3, int a4, int a5, int arg10, unsigned short * a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall EventClass::Init(char *this, IUnknown *aP1, char a3, int a4, int a5, int arg10, _WORD *a6)
{
  Debug::Log(); /*0x4c6afc*/
  if ( (int)aP1 < 0 ) /*0x4c6b0a*/
  {
    *(this + 2) = -1; /*0x4c6b49*/
    *this = 0; /*0x4c6b4d*/
    *(_DWORD *)(this + 3) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4c6b58*/
    return this; /*0x4c6b56*/
  }
  else
  {
    *(this + 2) = (char)aP1; /*0x4c6b14*/
    *(_DWORD *)(this + 11) = a5; /*0x4c6b1b*/
    *this = a3; /*0x4c6b22*/
    *(_DWORD *)(this + 7) = a4; /*0x4c6b24*/
    *(_DWORD *)(this + 15) = arg10; /*0x4c6b27*/
    *(_WORD *)(this + 19) = *a6; /*0x4c6b2d*/
    *(_WORD *)(this + 21) = a6[1]; /*0x4c6b35*/
    *(_DWORD *)(this + 3) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4c6b3f*/
    return this; /*0x4c6b42*/
  }
}
}
} // namespace gamemd

// 0x4C6CB0
namespace gamemd {
void EventClass::ProcessEvent()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// void __thiscall EventClass::ProcessEvent(int this)
// {
//   HouseClass *v3; // ecx
//   int v4; // ebx
//   int v5; // edi
//   BuildingClass *Building; // esi
//   BuildingClass *v7; // esi
//   ObjectClass *v8; // edi
//   IUnknown *v9; // eax
//   wchar_t *v10; // eax
//   _BYTE *v11; // esi
//   CellStruct *v12; // edi
//   IUnknown *v13; // eax
//   _DWORD *v14; // eax
//   __int16 v15; // ax
//   HouseClass *v16; // eax
//   void **v17; // eax
//   AnimClass *v18; // eax
//   void **v19; // eax
//   AnimClass *v20; // edi
//   BuildingTypeClass *v21; // esi
//   __int16 v22; // dx
//   bool v23; // zf
//   AnimClass *v24; // eax
//   int v25; // esi
//   _DWORD *v26; // edi
//   int v27; // ebx
//   int v28; // eax
//   int Object; // eax
//   void *v30; // eax
//   void *v31; // ebp
//   _BYTE *Member; // eax
//   _BYTE *v33; // ebp
//   int ecx86; // ecx
//   IUnknown *v34; // ebx
//   _DWORD *v36; // ebp
//   _DWORD *v37; // ecx
//   int v38; // ebx
//   _BYTE *v39; // esi
//   void *Next; // eax
//   IUnknown *eax99a; // eax
//   IUnknown *v41; // ebx
//   int v43; // ebp
//   void *v44; // eax
//   int ... [37371 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x53EC70
namespace gamemd {
SHORT EventClass::GetKeyStateSafe(unsigned signed char nVirtKey)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
SHORT __thiscall EventClass::GetKeyStateSafe(unsigned __int8 nVirtKey)
{
  if ( unk_AA0444 ) /*0x53ec77*/
    return unk_AA0168[nVirtKey]; /*0x53ec87*/
  else
    return GetKeyState(nVirtKey); /*0x53ec7a*/
}
}
} // namespace gamemd

// 0x542280
namespace gamemd {
int EventClass::deserializeEvent(int a2, IUnknown * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall EventClass::deserializeEvent(_DWORD *this, int a2, IUnknown *aP2)
{
  int result; // eax
  int *v5; // edx

  result = (*(int (__thiscall **)(_DWORD *, int))(*this + 24))(this, a2); /*0x54228c*/
  if ( result != -1 && result < *(this + 17) ) /*0x542297*/
  {
    v5 = (int *)(*(this + result + 10) + 76); /*0x5422a1*/
    *v5 = aP2->field_0; /*0x5422a6*/
    v5[1] = aP2->field_4; /*0x5422ab*/
    result = aP2->field_8; /*0x5422ae*/
    v5[2] = result; /*0x5422b1*/
  }
  return result; /*0x5422b4*/
}
}
} // namespace gamemd

// 0x54F200
namespace gamemd {
char EventClass::Enqueue(unsigned short a2, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall EventClass_Enqueue(_DWORD *this, unsigned __int16 a2, char a3)
{
  int v4; // edx
  __int16 v5; // si
  int v6; // ecx
  int v7; // eax

  if ( (unsigned __int8)ChronoScreen::IsActive() ) /*0x54f205*/
    return 1; /*0x54f205*/
  v5 = a2; /*0x54f217*/
  if ( MEMORY[0xA8ED9C] ) /*0x54f21d*/
  {
    if ( a2 != 27 ) /*0x54f223*/
      return 1; /*0x54f223*/
  }
  LOBYTE(v4) = a3; /*0x54f22f*/
  Memory_Helper(a2, v4); /*0x54f237*/
  if ( (unsigned __int8)a2 != 1 && (unsigned __int8)a2 != 4 && (unsigned __int8)a2 != 2 && (unsigned __int8)a2 != 10 ) /*0x54f259*/
  {
    if ( (((unsigned __int16)EventClass::GetKeyStateSafe(16) >> 8) & 0x80u) != 0 ) /*0x54f268*/
      v5 = a2 | 0x100; /*0x54f26a*/
    if ( (((unsigned __int16)EventClass::GetKeyStateSafe(17) >> 8) & 0x80u) != 0 ) /*0x54f27d*/
      v5 |= 0x200u; /*0x54f27f*/
    if ( (((unsigned __int16)EventClass::GetKeyStateSafe(18) >> 8) & 0x80u) != 0 ) /*0x54f292*/
    {
      if ( v5 == 9 ) /*0x54f298*/
        return 1; /*0x54f2dc*/
      v5 |= 0x400u; /*0x54f29a*/
    }
  }
  if ( a3 ) /*0x54f2a2*/
    v5 |= 0x800u; /*0x54f2a4*/
  v6 = *(this + 198); /*0x54f2aa*/
  v7 = (v6 + 1) % 256; /*0x54f2c0*/
  if ( v7 != *(this + 197) ) /*0x54f2c7*/
  {
    *((_WORD *)this + v6 + 138) = v5; /*0x54f2c9*/
    *(this + 198) = v7; /*0x54f2d1*/
    return 1; /*0x54f2d1*/
  }
  return 0; /*0x54f2d7*/
}
}
} // namespace gamemd

// 0x5F19C0
namespace gamemd {
int EventClass::CheckFlag()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall EventClass::CheckFlag(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 14); /*0x5f19c0*/
  if ( v1 ) /*0x5f19c5*/
    EventClass::serializeEvent(*(int **)(v1 + 4)); /*0x5f19ca*/
  return 1; /*0x5f19d4*/
}
}
} // namespace gamemd

// 0x664440
namespace gamemd {
int EventClass::validateEventType()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_664440(int *this)
{
  int v1; // ebx
  int v3; // eax
  int v4; // ecx
  char *v5; // eax
  int v6; // eax
  int v7; // ecx
  char *v8; // eax
  _DWORD *v9; // ecx
  int v10; // eax
  int v11; // edx
  int v13; // [esp+Ch] [ebp-Ch] BYREF
  unsigned __int8 v14[8]; // [esp+10h] [ebp-8h] BYREF

  v1 = MEMORY[0xA8E2CC]; /*0x664444*/
  if ( MEMORY[0xA8E2CC] == -1 ) /*0x664451*/
  {
    v3 = *(this + 4); /*0x664453*/
    v4 = 0; /*0x664456*/
    if ( v3 > 0 ) /*0x66445a*/
    {
      do /*0x66447c*/
      {
        v5 = *(char **)(*(this + 1) + 4 * v4); /*0x664461*/
        if ( v5[41] && !v5[39] ) /*0x66446a*/
        {
          v1 = *v5; /*0x664470*/
          v5[39] = 1; /*0x664473*/
        }
        ++v4; /*0x664479*/
      }
      while ( v4 < *(this + 4) ); /*0x66447c*/
    }
  }
  else
  {
    v6 = *(this + 4); /*0x664480*/
    v7 = 0; /*0x664483*/
    if ( v6 > 0 ) /*0x664487*/
    {
      do /*0x6644a7*/
      {
        v8 = *(char **)(*(this + 1) + 4 * v7); /*0x66448e*/
        v8[39] = *v8 == v1; /*0x664498*/
        ++v7; /*0x6644a4*/
      }
      while ( v7 < *(this + 4) ); /*0x6644a7*/
    }
  }
  if ( SessionClass::IsValidHouse((int)MEMORY[0xA8B238], 0) /*0x6644d2*/
    || v1 == -1
    || v1 != *((_DWORD *)HouseClass_Player + 12)
    || MEMORY[0xA8DA84] <= 2 )
  {
    return v1; /*0x664526*/
  }
  v9 = 0; /*0x6644d4*/
  v10 = 0; /*0x6644d6*/
  if ( MEMORY[0xA8DA84] > 0 ) /*0x6644db*/
  {
    v11 = MEMORY[0xA8DA78]; /*0x6644dd*/
    while ( *(_DWORD *)(*(_DWORD *)v11 + 111) != v1 ) /*0x6644e8*/
    {
      ++v10; /*0x6644ea*/
      v11 += 4; /*0x6644eb*/
      if ( v10 >= MEMORY[0xA8DA84] ) /*0x6644f0*/
        goto LABEL_23; /*0x6644f0*/
    }
    v9 = (_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v10) + 40); /*0x6644fd*/
  }
LABEL_23:
  Network::CopyAddress(v9, &v13, (int)v14); /*0x664500*/
  LaunchMultiplayerHost((int)this, v14); /*0x664516*/
  return v1; /*0x66451c*/
}
}
} // namespace gamemd

// 0x5F3440
namespace gamemd {
int EventClass::GetState(int a1)
{
return 0;
}
} // namespace gamemd
