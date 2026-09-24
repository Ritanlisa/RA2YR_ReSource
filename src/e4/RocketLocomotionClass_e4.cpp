// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/RocketLocomotionClass_17_e4.hpp"

// 0x661EC0
R RocketLocomotionClass::RocketLocomotionClass()
{
  wchar_t *v2; // ecx

  LocomotionClass::Init((_DWORD *)this); /*0x661ec3*/
  *(_DWORD *)(this + 24) = dword_B04E38; /*0x661ed1*/
  *(_DWORD *)(this + 28) = dword_B04E3C; /*0x661eda*/
  *(_DWORD *)(this + 32) = dword_B04E40; /*0x661ee3*/
  *(_DWORD *)(this + 36) = g_CurrentFrame; /*0x661eee*/
  *(_DWORD *)(this + 44) = 0; /*0x661ef1*/
  *(_DWORD *)(this + 48) = 0; /*0x661ef4*/
  v2 = g_CurrentFrame; /*0x661ef7*/
  *(_DWORD *)(this + 60) = 0; /*0x661efd*/
  *(_DWORD *)(this + 52) = v2; /*0x661f00*/
  *(_DWORD *)(this + 72) = 0; /*0x661f03*/
  *(_DWORD *)(this + 64) = 0; /*0x661f06*/
  *(_DWORD *)(this + 76) = 0; /*0x661f09*/
  *(_BYTE *)(this + 81) = 0; /*0x661f0c*/
  *(_DWORD *)(this + 84) = 0; /*0x661f0f*/
  *(_DWORD *)(this + 88) = 0; /*0x661f12*/
  *(_BYTE *)(this + 80) = 1; /*0x661f15*/
  *(_DWORD *)this = &RocketLocomotionClass::`vftable'; /*0x661f19*/
  *(_DWORD *)(this + 4) = &RocketLocomotionClass::`vftable'; /*0x661f1f*/
  return this; /*0x661f28*/
}
// 0x6633D0
int RocketLocomotionClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x6633d6*/
    return -2147467261; /*0x6633d8*/
  *a2 = -1212901530; /*0x6633e6*/
  a2[1] = 299099510; /*0x6633ee*/
  a2[2] = 268491163; /*0x6633f7*/
  a2[3] = -399534261; /*0x663400*/
  return 0; /*0x6633dd*/
}
// 0x663410
int RocketLocomotionClass::BeginMove(int * a1, int * a2)
{
  int result; // eax
  wchar_t *v3; // ecx

  result = SwizzleManager::SaveLoad(a1, a2); /*0x66341b*/
  if ( result >= 0 ) /*0x663422*/
  {
    if ( a1 ) /*0x663426*/
    {
      *a1 = (int)&LocomotionClass::`vftable'; /*0x663428*/
      a1[1] = (int)&LocomotionClass::`vftable'; /*0x66342e*/
      v3 = g_CurrentFrame; /*0x663435*/
      a1[15] = 0; /*0x66343b*/
      a1[13] = (int)v3; /*0x663442*/
      *a1 = (int)&RocketLocomotionClass::`vftable'; /*0x663445*/
      a1[1] = (int)&RocketLocomotionClass::`vftable'; /*0x66344b*/
    }
  }
  return result; /*0x663452*/
}
// 0x6635B0
int RocketLocomotionClass::StubReturn96()
{
  return 96; /*0x6635b5*/
}
// 0x6635C0
RocketLocomotionClass * RocketLocomotionClass::ProcessMove(char a2)
{
  *this = &RocketLocomotionClass::`vftable'; /*0x6635c3*/
  *(this + 1) = &RocketLocomotionClass::`vftable'; /*0x6635c9*/
  LocomotionClass::Construct(this); /*0x6635d0*/
  if ( (a2 & 1) != 0 ) /*0x6635da*/
    __3_YAXPAX_Z(this); /*0x6635dd*/
  return this; /*0x6635e7*/
}
// 0x6647B0
namespace gamemd {
void RocketLocomotionClass_17::ddtor()
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x6647b6*/
  *(_DWORD *)(this + 16) = 0; /*0x6647b9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x6647c0*/
  {
    __3_YAXPAX_Z(v2); /*0x6647c6*/
    *(_DWORD *)(this + 4) = 0; /*0x6647ce*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6647d1*/
  *(_DWORD *)(this + 8) = 0; /*0x6647d4*/
}
} // namespace gamemd

// 0x6647E0
namespace gamemd {
unsigned int RocketLocomotionClass_17::BeginMove(int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6647e0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x6647f5*/
  else
    return 0; /*0x6647e7*/
}
} // namespace gamemd

// 0x664800
namespace gamemd {
int RocketLocomotionClass_17::UpdateMovement(int a2)
{
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x66480a*/
}
} // namespace gamemd

// 0x664810
namespace gamemd {
char RocketLocomotionClass_17::AddRef(int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x664812*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x66481d*/
  {
    v3 = 0; /*0x66481f*/
    if ( v2 <= 0 ) /*0x664823*/
      return 1; /*0x664843*/
    v4 = (_DWORD *)*(this + 1); /*0x664825*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x66482b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x664834*/
    {
      ++v3; /*0x664836*/
      ++v4; /*0x664837*/
      if ( v3 >= v2 ) /*0x66483c*/
        return 1; /*0x66483c*/
    }
  }
  return 0; /*0x66483e*/
}
} // namespace gamemd

// 0x664850
namespace gamemd {
char RocketLocomotionClass_17::SetCapacity(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x66485c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x664866*/
    if ( a3 ) /*0x66486c*/
      v4 = a3; /*0x664882*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x66487e*/
    *((_BYTE *)this + 12) = 1; /*0x664886*/
    if ( v4 ) /*0x66488a*/
    {
      if ( *((_DWORD *)this + 1) ) /*0x664895*/
      {
        v6 = *((_DWORD *)this + 2); /*0x66489c*/
        if ( a2 < v6 ) /*0x6648a1*/
          v6 = a2; /*0x6648a3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i - 4) ) /*0x6648a9*/
          ++i; /*0x6648ae*/
        if ( *((_BYTE *)this + 13) ) /*0x6648bb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x6648c6*/
          *((_DWORD *)this + 1) = 0; /*0x6648ce*/
        }
      }
      *((_DWORD *)this + 1) = v4; /*0x6648d7*/
      *((_DWORD *)this + 2) = a2; /*0x6648df*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x6648e2*/
      return 1; /*0x6648e8*/
    }
    else
    {
      return 0; /*0x66488f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x6648f2*/
    return 1; /*0x6648f8*/
  }
}
} // namespace gamemd

// 0x664900
namespace gamemd {
void RocketLocomotionClass_17::Destroy()
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x66490d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x664913*/
    *(_DWORD *)(this + 4) = 0; /*0x66491b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x66491e*/
  *(_DWORD *)(this + 8) = 0; /*0x664921*/
}
} // namespace gamemd

// 0x664930
namespace gamemd {
int RocketLocomotionClass_17::IndexOf(unsigned int * a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x664930*/
    return 0; /*0x664938*/
  v3 = *(_DWORD *)(this + 8); /*0x66493e*/
  result = 0; /*0x664941*/
  if ( v3 <= 0 ) /*0x664945*/
    return -1; /*0x66495c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x66494b*/
  {
    if ( ++result >= v3 ) /*0x66495a*/
      return -1; /*0x66495a*/
  }
  return result; /*0x66493a*/
}
} // namespace gamemd

// 0x664970
namespace gamemd {
unsigned int RocketLocomotionClass_17::PointerToIndex(int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x664970*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x664985*/
  else
    return 0; /*0x664977*/
}
} // namespace gamemd

// 0x664990
namespace gamemd {
char RocketLocomotionClass_17::Release(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x66499c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x6649a2*/
    if ( a3 ) /*0x6649a8*/
      v4 = a3; /*0x6649be*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x6649ba*/
    *((_BYTE *)this + 12) = 1; /*0x6649c2*/
    if ( !v4 ) /*0x6649c6*/
      return 0; /*0x664a3a*/
    if ( *((_DWORD *)this + 1) ) /*0x6649c8*/
    {
      v5 = *((_DWORD *)this + 2); /*0x6649cf*/
      if ( a2 < v5 ) /*0x6649d4*/
        v5 = a2; /*0x6649d6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i - 4) ) /*0x6649dc*/
        ++i; /*0x6649e1*/
      if ( *((_BYTE *)this + 13) ) /*0x6649ee*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x6649f9*/
        *((_DWORD *)this + 1) = 0; /*0x664a01*/
      }
    }
    *((_DWORD *)this + 1) = v4; /*0x664a0a*/
    *((_DWORD *)this + 2) = a2; /*0x664a12*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x664a15*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x664a1e*/
  }
  v7 = *((_DWORD *)this + 2); /*0x664a21*/
  if ( v7 < *((_DWORD *)this + 4) ) /*0x664a29*/
    *((_DWORD *)this + 4) = v7; /*0x664a2b*/
  return 1; /*0x664a2e*/
}
} // namespace gamemd

// 0x664A40
namespace gamemd {
int RocketLocomotionClass_17::Launch(unsigned int * a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x664a40*/
  result = 0; /*0x664a43*/
  if ( v2 <= 0 ) /*0x664a48*/
    return -1; /*0x664a5f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x664a4e*/
  {
    if ( ++result >= v2 ) /*0x664a5d*/
      return -1; /*0x664a5d*/
  }
  return result; /*0x664a62*/
}
}
// 0x664A70
namespace gamemd {
VectorClass * RocketLocomotionClass_17::Constructor(char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x664a73*/
  *this = &VectorClass<OwnerTalkClass::ConnectionListStruct *>::`vftable'; /*0x664a76*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x664a80*/
  {
    __3_YAXPAX_Z(v3); /*0x664a88*/
    *(this + 1) = 0; /*0x664a90*/
  }
  *((_BYTE *)this + 13) = 0; /*0x664a9b*/
  *(this + 2) = 0; /*0x664aa1*/
  if ( (a2 & 1) != 0 ) /*0x664aa8*/
    __3_YAXPAX_Z(this); /*0x664aab*/
  return this; /*0x664ab5*/
}
} // namespace gamemd

// 0x664AC0
namespace gamemd {
DynamicVector * RocketLocomotionClass_17::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x664ac3*/
  *this = &VectorClass<OwnerTalkClass::ConnectionListStruct *>::`vftable'; /*0x664ac6*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x664ad0*/
  {
    __3_YAXPAX_Z(v3); /*0x664ad8*/
    *(this + 1) = 0; /*0x664ae0*/
  }
  *((_BYTE *)this + 13) = 0; /*0x664aeb*/
  *(this + 2) = 0; /*0x664af1*/
  if ( (a2 & 1) != 0 ) /*0x664af8*/
    __3_YAXPAX_Z(this); /*0x664afb*/
  return this; /*0x664b05*/
}
} // namespace gamemd
