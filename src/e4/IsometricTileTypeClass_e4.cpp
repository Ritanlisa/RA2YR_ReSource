// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"

// 0x549B70
int IsometricTileTypeClass::ProcessPower(int * a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // edx
  int v6; // eax

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x549b79*/
  Power::TimerProcess(*(_DWORD *)(this + 660)); /*0x549b87*/
  Power::TimerProcess(*(_DWORD *)(this + 664)); /*0x549b95*/
  Power::TimerProcess(*(_DWORD *)(this + 668)); /*0x549ba3*/
  Power::TimerProcess(*(_DWORD *)(this + 672)); /*0x549bb1*/
  Power::TimerProcess(*(_DWORD *)(this + 692)); /*0x549bbf*/
  v3 = *(_DWORD *)(this + 700); /*0x549bc4*/
  if ( v3 ) /*0x549bcc*/
  {
    v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(v3 + 4) + 16))(v3 + 4); /*0x549bd5*/
    Power::TimerProcess(v4); /*0x549bdb*/
  }
  Power::TimerProcess(*(_DWORD *)(this + 704)); /*0x549be9*/
  Power::TimerProcess(*(_DWORD *)(this + 708)); /*0x549bf7*/
  Power::TimerProcess(*(_DWORD *)(this + 724)); /*0x549c05*/
  Power::TimerProcess(*(_DWORD *)(this + 728)); /*0x549c13*/
  Power::TimerProcess(*(_DWORD *)(this + 732)); /*0x549c21*/
  LOBYTE(v5) = *(_BYTE *)(this + 736); /*0x549c26*/
  v6 = Power::FlagProcess(a2, v5); /*0x549c2f*/
  LOBYTE(v6) = *(_BYTE *)(this + 737); /*0x549c34*/
  Power::FlagProcess(a2, v6); /*0x549c3d*/
  Power::TimerProcess(*(_DWORD *)(this + 740)); /*0x549c4b*/
  Power::TimerProcess(*(_DWORD *)(this + 744)); /*0x549c59*/
  Power::TimerProcess(*(_DWORD *)(this + 748)); /*0x549c67*/
  return Power::TimerProcess(*(_DWORD *)(this + 752)); /*0x549c7a*/
}
// 0x549C80
AbstractClass * * IsometricTileTypeClass::LoadTypeData(int * a1, int a2)
{
  int i; // esi
  void (__thiscall ***v3)(_DWORD, int); // ecx
  int result; // eax
  int j; // eax

  for ( i = 0; i < g_SurfaceAnimState; *((_DWORD *)dword_87F69C + i - 1) = 0 ) /*0x549c8a*/
  {
    v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)dword_87F69C + i); /*0x549c91*/
    if ( v3 ) /*0x549c96*/
      (**v3)(v3, 1); /*0x549c9c*/
    ++i; /*0x549ca3*/
  }
  result = ObjectTypeClass::LoadCleanup((int)a1, a2); /*0x549cbf*/
  if ( result >= 0 ) /*0x549cc6*/
  {
    if ( a1 ) /*0x549cce*/
    {
      ObjectTypeClass::Construct(a1, (int)&a2); /*0x549cd8*/
      IsometricTileTypeClass::Constructor_0(a1 + 169, 0, 0); /*0x549ce9*/
      a1[169] = (int)&DynamicVectorClass<unsigned short *>::`vftable'; /*0x549cee*/
      a1[174] = 10; /*0x549cf4*/
      a1[173] = 0; /*0x549cfb*/
      *a1 = (int)&IsometricTileTypeClass::`vftable'; /*0x549d02*/
      a1[1] = (int)&IsometricTileTypeClass::`vftable'; /*0x549d08*/
      a1[2] = (int)&IsometricTileTypeClass::`vftable'; /*0x549d0f*/
      a1[3] = (int)&IsometricTileTypeClass::`vftable'; /*0x549d16*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 175); /*0x549d2a*/
    for ( j = 0; j < g_SurfaceAnimState; *((_DWORD *)dword_87F69C + j - 1) = 0 ) /*0x549d39*/
      ++j; /*0x549d41*/
    TerrainClass::InitTheatre(a1); /*0x549d56*/
    return 0; /*0x549d5b*/
  }
  return result; /*0x549d5d*/
}
// 0x549DD0
int IsometricTileTypeClass::GetTileIndex(int a2, int a3)
{
  int result; // eax

  if ( *(this + 175) == a2 ) /*0x549ddc*/
    *(this + 175) = 0; /*0x549dde*/
  result = *(this + 178); /*0x549de8*/
  if ( result != -1 && *((_DWORD *)g_AnimTypeCount + result) == a2 ) /*0x549e02*/
    *(this + 178) = -1; /*0x549e04*/
  return result; /*0x549e0e*/
}
// 0x54A160
int IsometricTileTypeClass::GetAuxField()
{
  return *(this + 165); /*0x54a166*/
}
// 0x549D70
int IsometricTileTypeClass::SaveToINI(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, aP2); /*0x549d7f*/
  if ( result >= 0 ) /*0x549d86*/
    return 0; /*0x549d88*/
  return result; /*0x549d8a*/
}
// 0x549D90
int IsometricTileTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x549d96*/
    return -2147467261; /*0x549d98*/
  *a2 = 1525862010; /*0x549da6*/
  a2[1] = 298976820; /*0x549dae*/
  a2[2] = 1610654892; /*0x549db7*/
  a2[3] = -1252326136; /*0x549dc0*/
  return 0; /*0x549d9d*/
}
// 0x54A140
int IsometricTileTypeClass::GetTypeIdentifier()
{
  return 18; /*0x54a145*/
}
// 0x54A150
int IsometricTileTypeClass::GetObjectSize()
{
  return 780; /*0x54a155*/
}
// 0x54A170
IsometricTileTypeClass * IsometricTileTypeClass::ddtor(char a2)
{
  IsometricTileTypeClass::CleanupMembers((int)this); /*0x54a173*/
  if ( (a2 & 1) != 0 ) /*0x54a17d*/
    __3_YAXPAX_Z(this); /*0x54a180*/
  return this; /*0x54a18a*/
}
// 0x54A190
void IsometricTileTypeClass::ClearBuffer()
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x54a196*/
  *(_DWORD *)(this + 16) = 0; /*0x54a199*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x54a1a0*/
  {
    __3_YAXPAX_Z(v2); /*0x54a1a6*/
    *(_DWORD *)(this + 4) = 0; /*0x54a1ae*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x54a1b1*/
  *(_DWORD *)(this + 8) = 0; /*0x54a1b4*/
}
// 0x54A1C0
unsigned int IsometricTileTypeClass::PointerToIndex(int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x54a1c0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x54a1d5*/
  else
    return 0; /*0x54a1c7*/
}
// 0x54A3D0
char IsometricTileTypeClass::SetCapacity(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x54a3dc*/
  {
    *((_BYTE *)this + 12) = 0; /*0x54a3e2*/
    if ( a3 ) /*0x54a3e8*/
      v4 = a3; /*0x54a3fe*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x54a3fa*/
    *((_BYTE *)this + 12) = 1; /*0x54a402*/
    if ( !v4 ) /*0x54a406*/
      return 0; /*0x54a47a*/
    if ( *((_DWORD *)this + 1) ) /*0x54a408*/
    {
      v5 = *((_DWORD *)this + 2); /*0x54a40f*/
      if ( a2 < v5 ) /*0x54a414*/
        v5 = a2; /*0x54a416*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i - 4) ) /*0x54a41c*/
        ++i; /*0x54a421*/
      if ( *((_BYTE *)this + 13) ) /*0x54a42e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x54a439*/
        *((_DWORD *)this + 1) = 0; /*0x54a441*/
      }
    }
    *((_DWORD *)this + 1) = v4; /*0x54a44a*/
    *((_DWORD *)this + 2) = a2; /*0x54a452*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x54a455*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x54a45e*/
  }
  v7 = *((_DWORD *)this + 2); /*0x54a461*/
  if ( v7 < *((_DWORD *)this + 4) ) /*0x54a469*/
    *((_DWORD *)this + 4) = v7; /*0x54a46b*/
  return 1; /*0x54a46e*/
}
// 0x54A480
int IsometricTileTypeClass::FindItem(unsigned int * a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x54a480*/
  result = 0; /*0x54a483*/
  if ( v2 <= 0 ) /*0x54a488*/
    return -1; /*0x54a49f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x54a48e*/
  {
    if ( ++result >= v2 ) /*0x54a49d*/
      return -1; /*0x54a49d*/
  }
  return result; /*0x54a4a2*/
}
// 0x54A760
DynamicVector * IsometricTileTypeClass::Constructor(char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x54a763*/
  *this = &VectorClass<unsigned short *>::`vftable'; /*0x54a766*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x54a770*/
  {
    __3_YAXPAX_Z(v3); /*0x54a778*/
    *(this + 1) = 0; /*0x54a780*/
  }
  *((_BYTE *)this + 13) = 0; /*0x54a78b*/
  *(this + 2) = 0; /*0x54a791*/
  if ( (a2 & 1) != 0 ) /*0x54a798*/
    __3_YAXPAX_Z(this); /*0x54a79b*/
  return this; /*0x54a7a5*/
}
// 0x54A850
unsigned int * IsometricTileTypeClass::Constructor_0(int a2, int a3)
{
  *(this + 1) = 0; /*0x54a85b*/
  *(this + 2) = a2; /*0x54a85e*/
  *((_BYTE *)this + 12) = 1; /*0x54a861*/
  *((_BYTE *)this + 13) = 0; /*0x54a865*/
  *this = &VectorClass<unsigned short *>::`vftable'; /*0x54a868*/
  if ( a2 ) /*0x54a86e*/
  {
    if ( a3 ) /*0x54a876*/
    {
      *(this + 1) = a3; /*0x54a878*/
      return this; /*0x54a87e*/
    }
    *(this + 1) = __2_YAPAXI_Z(4 * a2); /*0x54a88d*/
    *((_BYTE *)this + 13) = 1; /*0x54a890*/
  }
  return this; /*0x54a87d*/
}