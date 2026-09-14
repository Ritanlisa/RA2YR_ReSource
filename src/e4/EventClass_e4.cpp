// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/EventClass_e4.hpp"

// 0x40B6A0
namespace gamemd {
void EventClass::initEvent()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->EventClass_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->EventClass_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x40B740
namespace gamemd {
char EventClass::processEvent(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->EventClass_field_0x4 )
      {
    v6 = this->EventClass_field_0x8;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->EventClass_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->EventClass_field_0x4 = 0;
        }
      }
    this->EventClass_field_0x4 = v4;
    this->EventClass_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->initEvent();
    return 1;
  }
}
}
} // namespace gamemd

// 0x40B880
namespace gamemd {
char EventClass::validateEvent(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->EventClass_field_0x4 )
    {
    v5 = this->EventClass_field_0x8;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->EventClass_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->EventClass_field_0x4 = 0;
      }
    }
    this->EventClass_field_0x4 = v4;
    this->EventClass_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->initEvent();
  }
    v7 = this->EventClass_field_0x8;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x40B9A0
namespace gamemd {
char EventClass::dispatchEvent(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->EventClass_field_0x4 )
      {
    v6 = this->EventClass_field_0x8;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->EventClass_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->EventClass_field_0x4 = 0;
        }
      }
    this->EventClass_field_0x4 = v4;
    this->EventClass_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->initEvent();
    return 1;
  }
}
}
} // namespace gamemd

// 0x40BAE0
namespace gamemd {
char EventClass::checkCondition(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->EventClass_field_0x4 )
    {
    v5 = this->EventClass_field_0x8;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->EventClass_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->EventClass_field_0x4 = 0;
      }
    }
    this->EventClass_field_0x4 = v4;
    this->EventClass_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->initEvent();
  }
    v7 = this->EventClass_field_0x8;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x40BC10
namespace gamemd {
DynamicVector * EventClass::executeAction(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_BombClass;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x40BD00
namespace gamemd {
unsigned int * EventClass::resetEvent(BuildingClass * aP1, BuildingClass * aP2)
{
{
    this->Items = 0;
    this->Capacity = aP1;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_TechnoClass;
    if ( aP1 )
  {
    if ( aP2 )
    {
    this->Items = aP2;
    return this;
    }
    this->Items = __2_YAPAXI_Z(4 * (int)aP1);
    this->IsAllocated = 1;
  }
    return this;
}
}
} // namespace gamemd

// 0x40C110
namespace gamemd {
VectorClass * EventClass::queueEvent(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_CommandClass_const;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}
} // namespace gamemd

// 0x40C410
namespace gamemd {
char EventClass::clearEvents(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->EventClass_field_0x4 )
    {
    v5 = this->EventClass_field_0x8;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->EventClass_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->EventClass_field_0x4 = 0;
      }
    }
    this->EventClass_field_0x4 = v4;
    this->EventClass_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->initEvent();
  }
    v7 = this->EventClass_field_0x8;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
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
char * EventClass::Add(AbstractClass * aP1, unsigned char a3, int a4, char a5)
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
char * EventClass::AddEvent(int a2, unsigned char a3)
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
char * EventClass::Add2(AnimClass * aP1, unsigned char a3, IUnknown * aP3)
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
char * EventClass::AddEventEx(SelectClass_StripClass_SidebarClass * aP1, unsigned char a3, IUnknown * aP3, SelectClass_StripClass_SidebarClass * aP4, SelectClass_StripClass_SidebarClass * aP5)
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
SHORT EventClass::GetKeyStateSafe()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
SHORT __thiscall EventClass::GetKeyStateSafe(unsigned __int8 this)
{
  if ( unk_AA0444 ) /*0x53ec77*/
    return unk_AA0168[this]; /*0x53ec87*/
  else
    return GetKeyState(this); /*0x53ec7a*/
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

// 0x40BE10
namespace gamemd {
void EventClass::finalizeEvent()
{
{
    g_CommandClassVector = (int)&vt_VectorClass_CommandClass_const;
    if ( g_CommandClass_Capacity && g_CommandClass_HasInit )
  {
    __3_YAXPAX_Z(g_CommandClass_Capacity);
    g_CommandClass_Capacity = 0;
  }
    g_CommandClass_HasInit = 0;
    g_CommandClass_Size = 0;
}
}
} // namespace gamemd

// 0x40C260
namespace gamemd {
unsigned int EventClass::dequeueEvent(int a2)
{
{
    if ( (unsigned char)this->EventClass_field_0xC )
    return (unsigned int)(a2 - this->EventClass_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x40C590
namespace gamemd {
void EventClass::getEventCount()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_87F6F8 = Math::Sqrt(v0 + v0);
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
