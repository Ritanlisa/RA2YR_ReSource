// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/LinkedList_flat_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ListBox_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Coord_e4.hpp"

// 0x4791F0
namespace gamemd {
AbstractClass * * LinkedList_flat::LoadScenarioMixFiles(INIClass * aP0, int aP2, int a3, int a4, void * a1, void * a2)
{
  int v5; // eax
  unsigned int *v7; // eax
  unsigned int *v8; // eax
  int v9; // edi
  unsigned int *v10; // eax
  unsigned int *v11; // eax
  unsigned int *v12; // eax
  unsigned int *v13; // eax
  unsigned int *v14; // eax
  void * v15;
  unsigned int *v16; // eax
  unsigned int *v17; // eax
  unsigned int *v18; // eax
  char v19; // bl
  unsigned int *v20; // eax
  char Buffer[4]; // [esp+24h] [ebp-ACh] BYREF
  char Source[60]; // [esp+28h] [ebp-A8h] BYREF
  void* v23;
  unsigned int v24[21]; // [esp+68h] [ebp-68h] BYREF
  unsigned char v25[4]; // [esp+BCh] [ebp-14h] BYREF
  unsigned char v26[8]; // [esp+C0h] [ebp-10h] BYREF
  int v27; // [esp+C8h] [ebp-8h]
  int v28; // [esp+CCh] [ebp-4h]

  Debug::Log(); /*0x479208*/
  if ( *(unsigned int *)(a1 + 4) == -1 ) /*0x479216*/
  {
    v5 = dword_A83D14; /*0x479218*/
    if ( dword_A83D14 == -1 ) /*0x479220*/
      v5 = dword_A83D18; /*0x479222*/
    *(unsigned int *)(a1 + 4) = v5; /*0x479227*/
  }
  Theme::Stop(&g_BuildingTypeClass_Count, 0); /*0x479232*/
  if ( g_MixFile_MOVIES ) /*0x47923e*/
  {
    Debug::Log(); /*0x479249*/
    if ( g_MixFile_MOVIES ) /*0x479259*/
      (**(void (__thiscall ***)(int, int))g_MixFile_MOVIES)(g_MixFile_MOVIES, 1); /*0x47925f*/
    g_MixFile_MOVIES = 0; /*0x479261*/
  }
  if ( g_MixFile_THEME ) /*0x47926e*/
  {
    Debug::Log(); /*0x479279*/
    if ( g_MixFile_THEME ) /*0x479289*/
      (**(void (__thiscall ***)(int, int))g_MixFile_THEME)(g_MixFile_THEME, 1); /*0x47928f*/
    g_MixFile_THEME = 0; /*0x479291*/
  }
  if ( MixFileClass_MULTI ) /*0x47929e*/
  {
    Debug::Log(); /*0x4792a9*/
    if ( MixFileClass_MULTI ) /*0x4792b9*/
      (**(void (__thiscall ***)(int, int))MixFileClass_MULTI)(MixFileClass_MULTI, 1); /*0x4792bf*/
    MixFileClass_MULTI = 0; /*0x4792c1*/
  }
  if ( g_MixFile_MULTIMD ) /*0x4792ce*/
  {
    Debug::Log(); /*0x4792d9*/
    if ( g_MixFile_MULTIMD ) /*0x4792e9*/
      (**(void (__thiscall ***)(int, int))g_MixFile_MULTIMD)(g_MixFile_MULTIMD, 1); /*0x4792ef*/
    g_MixFile_MULTIMD = 0; /*0x4792f1*/
  }
  if ( g_MixFile_MAPSFirst ) /*0x4792fe*/
  {
    Debug::Log(); /*0x479309*/
    if ( g_MixFile_MAPSFirst ) /*0x479319*/
      (**(void (__thiscall ***)(int, int))g_MixFile_MAPSFirst)(g_MixFile_MAPSFirst, 1); /*0x47931f*/
    g_MixFile_MAPSFirst = 0; /*0x479321*/
  }
  if ( g_MixFile_MAPSMDFirst ) /*0x47932e*/
  {
    Debug::Log(); /*0x479339*/
    if ( g_MixFile_MAPSMDFirst ) /*0x479349*/
      (**(void (__thiscall ***)(int, int))g_MixFile_MAPSMDFirst)(g_MixFile_MAPSMDFirst, 1); /*0x47934f*/
    g_MixFile_MAPSMDFirst = 0; /*0x479351*/
  }
  if ( dword_884E34 ) /*0x47935e*/
  {
    Debug::Log(); /*0x479369*/
    if ( dword_884E34 ) /*0x479379*/
      (**(void (__thiscall ***)(int, int))dword_884E34)(dword_884E34, 1); /*0x47937f*/
    dword_884E34 = 0; /*0x479381*/
  }
  if ( !(uint8_t)Map_Load_751C30() ) /*0x479387*/
    return 1; /*0x47939b*/
  v7 = operator new(0x28u); /*0x4793a0*/
  if ( v7 ) /*0x4793aa*/
    v8 = MixFileClass::FromFile(v7, aMainMix, (int)&dword_886980); /*0x4793b8*/
  else
    v8 = 0; /*0x4793bf*/
  dword_884E34 = (int)v8; /*0x4793c1*/
  Debug::Log(); /*0x4793cf*/
  v9 = a3 + 1; /*0x4793d4*/
  sprintf(Buffer, "MAPSMD%02d.MIX", a3 + 1); /*0x4793e7*/
  Debug::Log(); /*0x4793f6*/
  v10 = operator new(0x28u); /*0x4793fd*/
  if ( v10 ) /*0x479407*/
    g_MixFile_MAPSMDFirst = (int)MixFileClass::FromFile(v10, Buffer, (int)&dword_886980); /*0x47941a*/
  else
    g_MixFile_MAPSMDFirst = 0; /*0x479421*/
  sprintf(Buffer, "MAPS%02d.MIX", v9); /*0x479432*/
  Debug::Log(); /*0x479441*/
  v11 = operator new(0x28u); /*0x479448*/
  if ( !v11 ) /*0x479452*/
  {
    g_MixFile_MAPSFirst = 0; /*0x479489*/
  LABEL_61:
    Debug::Log(); /*0x479664*/
    return 0; /*0x47967c*/
  }
  g_MixFile_MAPSFirst = (unsigned int *)((int)MixFileClass::FromFile(v11, Buffer, (int)&dword_886980));
  if ( !g_MixFile_MAPSFirst ) /*0x47946c*/
    goto LABEL_61; /*0x47946c*/
  Debug::Log(); /*0x479496*/
  v12 = operator new(0x28u); /*0x47949d*/
  if ( v12 ) /*0x4794a7*/
    g_MixFile_MULTIMD = (int)MixFileClass::FromFile(v12, g_Str_File_MULTIMD_MIX, (int)&dword_886980); /*0x4794ba*/
  else
    g_MixFile_MULTIMD = 0; /*0x4794c1*/
  Debug::Log(); /*0x4794cc*/
  v13 = operator new(0x28u); /*0x4794d3*/
  if ( !v13 ) /*0x4794dd*/
  {
    MixFileClass_MULTI = 0; /*0x479514*/
    goto LABEL_61; /*0x47951a*/
  }
  MixFileClass_MULTI = (unsigned int)((int)MixFileClass::FromFile(v13, aMultiMix, (int)&dword_886980));
  if ( !MixFileClass_MULTI ) /*0x4794f7*/
    goto LABEL_61; /*0x4794f7*/
  v14 = CCFileClass::Construct(&v23, g_Str_File_THEMEMD_MIX); /*0x479526*/
  v15 = (*(int (__thiscall **)(unsigned int *, unsigned int, int))(*v14 + 20))(v14, 0, a2); /*0x47953f*/
  v28 = 0; /*0x479545*/
  Vector::Clear((int)v26); /*0x47954c*/
  v24[0] = &off_7E1668; /*0x47955a*/
  BufferIOFileClass::Dtor(v24); /*0x47955e*/
  if ( v15 ) /*0x47956a*/
  {
    Debug::Log(); /*0x47956c*/
    v16 = operator new(0x28u); /*0x479573*/
    if ( v16 ) /*0x47957d*/
    {
      g_MixFile_THEME = (int)MixFileClass::FromFile(v16, g_Str_File_THEMEMD_MIX, (int)&dword_886980); /*0x479590*/
      goto LABEL_58; /*0x479595*/
    }
  }
  else
  {
    Debug::Log(); /*0x479597*/
    v17 = operator new(0x28u); /*0x47959e*/
    if ( v17 ) /*0x4795a8*/
    {
      g_MixFile_THEME = (int)MixFileClass::FromFile(v17, g_Str_File_THEME_MIX, (int)&dword_886980); /*0x4795bb*/
      goto LABEL_58; /*0x4795c0*/
    }
  }
  g_MixFile_THEME = 0; /*0x4795c2*/
  LABEL_58:
  Audio::LoadWAVFiles(&g_BuildingTypeClass_Count); /*0x4795c8*/
  sprintf(Source, "MOVMD%02d.MIX", a4); /*0x4795e4*/
  v18 = CCFileClass::Construct(v24, Source); /*0x4795f5*/
  v19 = (*(int (__thiscall **)(unsigned int *, unsigned int))(*v18 + 20))(v18, 0); /*0x479609*/
  v27 = 0; /*0x47960f*/
  Vector::Clear((int)v25); /*0x479616*/
  v23 = (void **)&off_7E1668; /*0x47961f*/
  BufferIOFileClass::Dtor(&v23); /*0x479623*/
  if ( v19 ) /*0x47962b*/
  {
    Debug::Log(); /*0x479637*/
    v20 = operator new(0x28u); /*0x47963e*/
    if ( v20 ) /*0x479648*/
      goto LABEL_60; /*0x479648*/
  LABEL_63:
    g_MixFile_MOVIES = 0; /*0x4796bf*/
    goto LABEL_61; /*0x4796c5*/
  }
  sprintf(Buffer, "MOVIES%02d.MIX", v9); /*0x479691*/
  Debug::Log(); /*0x4796a0*/
  v20 = operator new(0x28u); /*0x4796a7*/
  if ( !v20 ) /*0x4796b1*/
    goto LABEL_63; /*0x4796b1*/
  LABEL_60:
  g_MixFile_MOVIES = (int)MixFileClass::FromFile(v20, Buffer, (int)&dword_886980); /*0x47964a*/
  if ( !g_MixFile_MOVIES ) /*0x479662*/
    goto LABEL_61; /*0x479662*/
  return Map_Load_751C30(); /*0x479390*/
}
} // namespace gamemd
// 0x556600
namespace gamemd {
void * LinkedList_flat::MoveNode(void * a2)
{
  if ( a2 != this ) /*0x55660a*/
  {
    (*(void (__thiscall **)(void *))(*(unsigned int *)((char *)&this->__pad_084 + 12)))(this); /*0x55660e*/
    (*(void (__thiscall **)(void *, void *))(*(unsigned int *)((char *)&this->q02C + 4)))(this, a2); /*0x556616*/
  }
  return this; /*0x55661b*/
}
} // namespace gamemd
// 0x556640
namespace gamemd {
unsigned int * LinkedList_flat::FindPrev()
{
  unsigned int *v1; // edx
  unsigned int *result; // eax

  v1 = (unsigned int *)(((char *)&this->q000 + 2));
  if ( !this->u32_8 ) /*0x556640*/
    return this; /*0x55665d*/
  do /*0x556651*/
  {
    result = (unsigned int *)*v1; /*0x55664b*/
    if ( (unsigned int *)*v1 == this ) /*0x55664f*/
      break; /*0x55664f*/
    v1 = result + 2; /*0x556654*/
  }
  while ( result[2] ); /*0x556651*/
  return result; /*0x55665b*/
}
} // namespace gamemd
// 0x5566A0
namespace gamemd {
LinkClass * * LinkedList_flat::InsertAfter(int a2)
{
  LinkedList_flat * v3;

  this->vt_slot_36(); /*0x5566a5*/
  v3 = *(unsigned int *)(a2 + 4); /*0x5566ac*/
  *(unsigned int *)(a2 + 4) = this; /*0x5566af*/
  this->u32_8 = a2; /*0x5566b4*/
  this->u32_4 = v3; /*0x5566b7*/
  if ( v3 ) /*0x5566ba*/
    v3->m_Prev = this; /*0x5566bc*/
  return 0; /*0x5566c6*/
}
} // namespace gamemd
// 0x5566D0
namespace gamemd {
unsigned int * LinkedList_flat::Attach(int a2)
{
  LinkedList_flat * v3;

  this->vt_slot_36(); /*0x5566d5*/
  v3 = (*(int (__thiscall **)(int))(*(unsigned int *)a2 + 24))(a2); /*0x5566de*/
  *(unsigned int *)(v3 + 8) = this; /*0x5566e1*/
  this->u32_4 = v3; /*0x5566e4*/
  this->u32_8 = 0; /*0x5566e7*/
  return this; /*0x5566f0*/
}
} // namespace gamemd
// 0x556700
namespace gamemd {
LinkClass * * LinkedList_flat::Append(int a2)
{
  LinkedList_flat * v3;
  int v4; // eax

  this->vt_slot_36(); /*0x556705*/
  v3 = (*(int (__thiscall **)(int))(*(unsigned int *)a2 + 28))(a2); /*0x55670e*/
  *(unsigned int *)(v3 + 4) = this; /*0x556711*/
  this->u32_8 = v3; /*0x556714*/
  v4 = *this; /*0x556717*/
  this->u32_4 = 0; /*0x55671b*/
  return 0; /*0x556725*/
}
} // namespace gamemd
// 0x556730
namespace gamemd {
int LinkedList_flat::RemoveNode()
{
  int v2; // edi
  int v3; // eax
  int v4; // edx
  int v5; // edx

  v2 = this->vt_slot_24(); /*0x55673e*/
  v3 = this->vt_slot_28(); /*0x556740*/
  v4 = this->u32_8; /*0x556743*/
  if ( v4 ) /*0x55674a*/
    v4->m_Next = this->u32_4; /*0x55674f*/
  v5 = this->u32_4; /*0x556752*/
  if ( v5 ) /*0x556757*/
    v5->m_Prev = this->u32_8; /*0x55675c*/
  this->u32_8 = 0; /*0x556761*/
  this->u32_4 = 0; /*0x556764*/
  if ( (unsigned int *)v2 != this ) /*0x556767*/
    return v2; /*0x55677e*/
  if ( (unsigned int *)v3 == this ) /*0x55676b*/
    return 0; /*0x55676f*/
  return (*(int (__thiscall **)(int))(*(unsigned int *)v3 + 24))(v3); /*0x55676d*/
}
} // namespace gamemd
// 0x623460
namespace gamemd {
void LinkedList_flat::Remove(unsigned int * a2)
{
  unsigned int *v2; // eax
  unsigned int *v3; // edx

  v2 = (unsigned int *)this->u32_34; /*0x623460*/
  v3 = 0; /*0x623463*/
  if ( v2 ) /*0x623468*/
  {
    while ( a2 != v2 ) /*0x623470*/
    {
      v3 = v2; /*0x623472*/
      v2 = (unsigned int *)*v2; /*0x623474*/
      if ( !v2 ) /*0x623478*/
        return; /*0x623478*/
    }
    if ( v3 ) /*0x623484*/
      *v3 = *v2; /*0x623489*/
    else
      this->u32_34 = *v2; /*0x62349a*/
    RA2_OPDEL(v2); /*0x62348b*/
  }
}
} // namespace gamemd
// 0x632D10
namespace gamemd {
void LinkedList_flat::RelinkNode(int a2)
{
  int v3; // ecx
  int v4; // eax

  if ( this->u32_18 != a2 ) /*0x632d1b*/
  {
    if ( a2 ) /*0x632d1f*/
    {
      v3 = *(unsigned int *)(a2 + 8); /*0x632d21*/
      if ( v3 ) /*0x632d26*/
      {
        (*(void (__thiscall **)(int, unsigned int))(*(unsigned int *)v3 + 12))(v3, 0); /*0x632d2c*/
        *(unsigned int *)(a2 + 8) = 0; /*0x632d2f*/
      }
    }
    v4 = (unsigned int)(this->u32_18);
    if ( v4 ) /*0x632d3b*/
      *(unsigned int *)(v4 + 8) = 0; /*0x632d3d*/
    this->u32_18 = a2; /*0x632d46*/
    if ( a2 ) /*0x632d49*/
      *(unsigned int *)(a2 + 8) = ((char *)&this->Tail + 1); /*0x632d4e*/
    this->u32_1C = this; /*0x632d54*/
    this->u32_4 = ((char *)&this->Tail + 1); /*0x632d57*/
  }
}
} // namespace gamemd
// 0x6E5380
namespace gamemd {
int LinkedList_flat::Contains(IUnknown * aP1)
{
  int v2; // eax

  v2 = this->u32_28; /*0x6e5380*/
  if ( !v2 ) /*0x6e5385*/
    return 0; /*0x6e5396*/
  while ( v2 != aP1 ) /*0x6e538d*/
  {
    v2 = *(unsigned int *)(v2 + 40); /*0x6e538f*/
    if ( !v2 ) /*0x6e5394*/
      return 0; /*0x6e5394*/
  }
  return 1; /*0x6e5398*/
}
} // namespace gamemd
// 0x407450
namespace gamemd {
int LinkedList_flat::Init()
{
  int result; // eax

  *this->u32_4 = (unsigned int)(*this);
  result = (unsigned int)((int)*this);
  (*this)[1] = this->u32_4; /*0x40745c*/
  *this = this; /*0x40745f*/
  this->u32_4 = this; /*0x407461*/
  return result; /*0x407464*/
}
} // namespace gamemd
// 0x407520
namespace gamemd {
int * LinkedList_flat::Next()
{
  int *result; // eax
  int *v2; // edx

  result = (int *)(*this);
  if ( *this ) /*0x407520*/
  {
    v2 = (int *)*result; /*0x407527*/
    *this = v2; /*0x40752c*/
    result += 2; /*0x407529*/
  }
  return result; /*0x407526*/
}
} // namespace gamemd
// 0x40E340
namespace gamemd {
int LinkedList_flat::Prepend(int a2)
{
  int v3; // esi
  int v4; // edx
  int v5; // edx
  int v6; // edx

  a2 = a2; /*0x40e340*/
  if ( a2 ) /*0x40e347*/
  {
    v3 = *(unsigned int *)(a2 + 4); /*0x40e349*/
    if ( v3 ) /*0x40e34e*/
    {
      v4 = *(unsigned int *)(a2 + 8); /*0x40e350*/
      if ( v4 ) /*0x40e355*/
      {
        v4->Previous = v3; /*0x40e357*/
        *(unsigned int *)(*(unsigned int *)(a2 + 4) + 8) = *(unsigned int *)(a2 + 8); /*0x40e360*/
        *(unsigned int *)(a2 + 8) = 0; /*0x40e363*/
        *(unsigned int *)(a2 + 4) = 0; /*0x40e36a*/
      }
    }
  }
  v5 = this->u32_4; /*0x40e371*/
  *(unsigned int *)(a2 + 8) = this; /*0x40e374*/
  *(unsigned int *)(a2 + 4) = v5; /*0x40e377*/
  v6 = this->u32_4; /*0x40e37a*/
  if ( v6 ) /*0x40e380*/
    *(unsigned int *)(v6 + 8) = a2; /*0x40e382*/
  this->u32_4 = a2; /*0x40e385*/
}
} // namespace gamemd
// 0x473430
namespace gamemd {
int LinkedList_flat::Pop()
{
  int result; // eax

  result = this->Tail; /*0x473430*/
  if ( result ) /*0x473435*/
  {
    this->Tail = result->TargetSpecialThreatCoefficient; /*0x47343b*/
    result->TargetSpecialThreatCoefficient = 0; /*0x47343e*/
    --*this; /*0x473445*/
  }
  return result; /*0x473437*/
}
} // namespace gamemd
// 0x556670
namespace gamemd {
unsigned int * LinkedList_flat::FindNext()
{
  unsigned int *v1; // edx
  unsigned int *result; // eax

  v1 = &this->m_Next; /*0x556673*/
  if ( !this->m_Next ) /*0x556670*/
    return this; /*0x55668d*/
  do /*0x556681*/
  {
    result = (unsigned int *)*v1; /*0x55667b*/
    if ( (unsigned int *)*v1 == this ) /*0x55667f*/
      break; /*0x55667f*/
    v1 = result + 1; /*0x556684*/
  }
  while ( result[1] ); /*0x556681*/
  return result; /*0x55668b*/
}
} // namespace gamemd
// 0x625AE0
namespace gamemd {
int LinkedList_flat::PushFront(IUnknown * aP1)
{
  *(unsigned int *)(aP1 + 12) = this->Tail; /*0x625ae7*/
  this->Tail = aP1; /*0x625aea*/
  return aP1; /*0x625aed*/
}
} // namespace gamemd