// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
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
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/LightningStorm_e4.hpp"
#include "e4/classes/E4Recv_779690_e4.hpp"
#include "e4/classes/Rules_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/LoadGame_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"
#include "e4/classes/LinkClass_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/GadgetClass_e4.hpp"
#include "e4/classes/Theme_e4.hpp"

// 0x4791F0
namespace gamemd {
AbstractClass * * LinkedList_flat::LoadScenarioMixFiles(int a2, int a3, int a4, int aP0, int aP1)
{

  int v4; // ecx
  int v5; // esi
  int v6; // eax
  MixFileClass *v8; // eax
  unsigned int *v9; // eax
  char *v10; // edi
  MixFileClass *v11; // eax
  MixFileClass *v12; // eax
  MixFileClass *v13; // eax
  MixFileClass *v14; // eax
  unsigned int *v15; // eax
  char v16; // bl
  MixFileClass *v17; // eax
  MixFileClass *v18; // eax
  unsigned int *v19; // eax
  char v20; // bl
  MixFileClass *v21; // eax
  char Buffer[4]; // [esp+24h] [ebp-ACh] BYREF
  char Source[60]; // [esp+28h] [ebp-A8h] BYREF
  CCFileClass v24; // [esp+64h] [ebp-6Ch] BYREF
  int v25; // [esp+BCh] [ebp-14h] BYREF
  int v26[2]; // [esp+C0h] [ebp-10h] BYREF
  int v27; // [esp+C8h] [ebp-8h]
  int v28; // [esp+CCh] [ebp-4h]

  v5 = v4; /*0x479201*/
  ((gamemd::Debug *)this)->Log(); /*0x479208*/
  if ( *(unsigned int *)(v5 + 4) == -1 ) /*0x479216*/
  {
    v6 = dword_A83D14; /*0x479218*/
    if ( dword_A83D14 == -1 ) /*0x479220*/
      v6 = dword_A83D18; /*0x479222*/
    *(unsigned int *)(v5 + 4) = v6; /*0x479227*/
  }
  ((Theme *)((Theme *)&unk_A83D10))->Stop(0); /*0x479232*/
  if ( g_MixFile_MOVIES ) /*0x47923e*/
  {
    ((gamemd::Debug *)this)->Log(); /*0x479249*/
    if ( g_MixFile_MOVIES ) /*0x479259*/
      (**(void (***)(int, int))g_MixFile_MOVIES)(g_MixFile_MOVIES, 1); /*0x47925f*/
    g_MixFile_MOVIES = 0; /*0x479261*/
  }
  if ( g_MixFile_THEME ) /*0x47926e*/
  {
    ((gamemd::Debug *)this)->Log(); /*0x479279*/
    if ( g_MixFile_THEME ) /*0x479289*/
      (**(void (***)(int, int))g_MixFile_THEME)(g_MixFile_THEME, 1); /*0x47928f*/
    g_MixFile_THEME = 0; /*0x479291*/
  }
  if ( MixFileClass_MULTI ) /*0x47929e*/
  {
    ((gamemd::Debug *)this)->Log(); /*0x4792a9*/
    if ( MixFileClass_MULTI ) /*0x4792b9*/
      (**(void (***)(int, int))MixFileClass_MULTI)(MixFileClass_MULTI, 1); /*0x4792bf*/
    MixFileClass_MULTI = 0; /*0x4792c1*/
  }
  if ( g_MixFile_MULTIMD ) /*0x4792ce*/
  {
    ((gamemd::Debug *)this)->Log(); /*0x4792d9*/
    if ( g_MixFile_MULTIMD ) /*0x4792e9*/
      (**(void (***)(int, int))g_MixFile_MULTIMD)(g_MixFile_MULTIMD, 1); /*0x4792ef*/
    g_MixFile_MULTIMD = 0; /*0x4792f1*/
  }
  if ( g_MixFile_MAPSFirst ) /*0x4792fe*/
  {
    ((gamemd::Debug *)this)->Log(); /*0x479309*/
    if ( g_MixFile_MAPSFirst ) /*0x479319*/
      (**(void (***)(int, int))g_MixFile_MAPSFirst)(g_MixFile_MAPSFirst, 1); /*0x47931f*/
    g_MixFile_MAPSFirst = 0; /*0x479321*/
  }
  if ( g_MixFile_MAPSMDFirst ) /*0x47932e*/
  {
    ((gamemd::Debug *)this)->Log(); /*0x479339*/
    if ( g_MixFile_MAPSMDFirst ) /*0x479349*/
      (**(void (***)(int, int))g_MixFile_MAPSMDFirst)(g_MixFile_MAPSMDFirst, 1); /*0x47934f*/
    g_MixFile_MAPSMDFirst = 0; /*0x479351*/
  }
  if ( dword_884E34 ) /*0x47935e*/
  {
    ((gamemd::Debug *)this)->Log(); /*0x479369*/
    if ( dword_884E34 ) /*0x479379*/
      (**(void (***)(int, int))dword_884E34)(dword_884E34, 1); /*0x47937f*/
    dword_884E34 = 0; /*0x479381*/
  }
  if ( !Map_Load_751C30() ) /*0x479387*/
    return 1; /*0x47939b*/
  v8 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x4793a0*/
  if ( v8 ) /*0x4793aa*/
    v9 = ((MixFileClass *)(v8))->FromFile((char *)(aMainMix), (int)dword_886980); /*0x4793b8*/
  else
    v9 = 0; /*0x4793bf*/
  dword_884E34 = (int)v9; /*0x4793c1*/
  ((gamemd::Debug *)this)->Log(); /*0x4793cf*/
  v10 = (char *)aP0 + 1; /*0x4793d4*/
  sprintf(Buffer, "MAPSMD%02d.MIX", &aP0->__tail_0[1]); /*0x4793e7*/
  ((gamemd::Debug *)this)->Log(); /*0x4793f6*/
  v11 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x4793fd*/
  if ( v11 ) /*0x479407*/
    g_MixFile_MAPSMDFirst = (int)((MixFileClass *)(v11))->FromFile(Buffer, (int)dword_886980); /*0x47941a*/
  else
    g_MixFile_MAPSMDFirst = 0; /*0x479421*/
  sprintf(Buffer, "MAPS%02d.MIX", v10); /*0x479432*/
  ((gamemd::Debug *)this)->Log(); /*0x479441*/
  v12 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x479448*/
  if ( !v12 ) /*0x479452*/
  {
    g_MixFile_MAPSFirst = 0; /*0x479489*/
LABEL_61:
    ((gamemd::Debug *)this)->Log(); /*0x479664*/
    return 0; /*0x47967c*/
  }
  g_MixFile_MAPSFirst = (int)((MixFileClass *)(v12))->FromFile(Buffer, (int)dword_886980); /*0x479467*/
  if ( !g_MixFile_MAPSFirst ) /*0x47946c*/
    goto LABEL_61; /*0x47946c*/
  ((gamemd::Debug *)this)->Log(); /*0x479496*/
  v13 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x47949d*/
  if ( v13 ) /*0x4794a7*/
    g_MixFile_MULTIMD = (int)((MixFileClass *)(v13))->FromFile((char *)(g_Str_File_MULTIMD_MIX), (int)dword_886980); /*0x4794ba*/
  else
    g_MixFile_MULTIMD = 0; /*0x4794c1*/
  ((gamemd::Debug *)this)->Log(); /*0x4794cc*/
  v14 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x4794d3*/
  if ( !v14 ) /*0x4794dd*/
  {
    MixFileClass_MULTI = 0; /*0x479514*/
    goto LABEL_61; /*0x47951a*/
  }
  MixFileClass_MULTI = (int)((MixFileClass *)(v14))->FromFile((char *)(aMultiMix), (int)dword_886980); /*0x4794f2*/
  if ( !MixFileClass_MULTI ) /*0x4794f7*/
    goto LABEL_61; /*0x4794f7*/
  v15 = ((CCFileClass*)&v24)->Construct((void *)(g_Str_File_THEMEMD_MIX)); /*0x479526*/
  v16 = (*(int (**)(unsigned int *, unsigned int, int))(*v15 + 20))(v15, 0, a2); /*0x47953f*/
  ((unsigned int *)&v24)[0] = (int)&vt_CCFileClass; /*0x479541*/
  v28 = 0; /*0x479545*/
  ((Vector *)((int)v26))->Clear(); /*0x47954c*/
  ((unsigned int *)&v24)[0] = (int)&off_7E1668; /*0x47955a*/
  ((BufferIOFileClass *)((BufferIOFileClass *)((char *)&v24)))->Dtor(); /*0x47955e*/
  if ( v16 ) /*0x47956a*/
  {
    ((gamemd::Debug *)this)->Log(); /*0x47956c*/
    v17 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x479573*/
    if ( v17 ) /*0x47957d*/
    {
      g_MixFile_THEME = (int)((MixFileClass *)(v17))->FromFile((char *)(g_Str_File_THEMEMD_MIX), (int)dword_886980); /*0x479590*/
      goto LABEL_58; /*0x479595*/
    }
  }
  else
  {
    ((gamemd::Debug *)this)->Log(); /*0x479597*/
    v18 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x47959e*/
    if ( v18 ) /*0x4795a8*/
    {
      g_MixFile_THEME = (int)((MixFileClass *)(v18))->FromFile((char *)(g_Str_File_THEME_MIX), (int)dword_886980); /*0x4795bb*/
      goto LABEL_58; /*0x4795c0*/
    }
  }
  g_MixFile_THEME = 0; /*0x4795c2*/
LABEL_58:
  Audio::LoadWAVFiles((Audio *)&unk_A83D10); /*0x4795c8*/
  sprintf(Source, "MOVMD%02d.MIX", a3); /*0x4795e4*/
  v19 = CCFileClass::Construct((CCFileClass *)((char *)&v24), Source); /*0x4795f5*/
  v20 = (unsigned int)((*(int (**)(unsigned int *, unsigned int))(*v19 + 20))(v19, 0)); /*0x479609*/
  *(unsigned int *)v24.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x47960b*/
  v27 = 0; /*0x47960f*/
  ((Vector *)((int)&v25))->Clear(); /*0x479616*/
  *(unsigned int *)v24.CDFileClass = (unsigned int)(&off_7E1668); /*0x47961f*/
  ((BufferIOFileClass *)((BufferIOFileClass *)&v24))->Dtor(); /*0x479623*/
  if ( v20 ) /*0x47962b*/
  {
    ((gamemd::Debug *)this)->Log(); /*0x479637*/
    v21 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x47963e*/
    if ( v21 ) /*0x479648*/
      goto LABEL_60; /*0x479648*/
LABEL_63:
    g_MixFile_MOVIES = 0; /*0x4796bf*/
    goto LABEL_61; /*0x4796c5*/
  }
  sprintf(Buffer, "MOVIES%02d.MIX", v10); /*0x479691*/
  ((gamemd::Debug *)this)->Log(); /*0x4796a0*/
  v21 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x4796a7*/
  if ( !v21 ) /*0x4796b1*/
    goto LABEL_63; /*0x4796b1*/
LABEL_60:
  g_MixFile_MOVIES = (int)((MixFileClass *)(v21))->FromFile(Buffer, (int)dword_886980); /*0x47964a*/
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
    (*(void (**)(LinkedList *))(*(unsigned int *)this->__pad_0 + 36))(this); /*0x55660e*/
    (*(void (**)(LinkedList *, void *))(*(unsigned int *)this->__pad_0 + 12))(this, a2); /*0x556616*/
  }
  return this; /*0x55661b*/

}
} // namespace gamemd
// 0x556640
namespace gamemd {
unsigned int * LinkedList_flat::FindPrev()
{

  LinkClass **p_m_Prev; // edx
  unsigned int *result; // eax

  p_m_Prev = (gamemd::LinkClass **)((unsigned int *)(&this->m_Prev));
  if ( !this->m_Prev ) /*0x556640*/
    return this->__pad_0; /*0x55665d*/
  do /*0x556651*/
  {
    result = (unsigned int *)(*p_m_Prev);
    if ( *p_m_Prev == (gamemd::LinkClass *)(this) ) /*0x55664f*/
      break; /*0x55664f*/
    p_m_Prev = (LinkClass **)(result + 2); /*0x556654*/
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

  (*(void (**))(*(unsigned int *)this->__pad_0 + 36))(this); /*0x5566a5*/
  v3 = (gamemd::LinkedList_flat *)(*(LinkClass **)(a2 + 4)); /*0x5566ac*/
  *(unsigned int *)(a2 + 4) = (unsigned int)(this); /*0x5566af*/
  this->m_Prev = (unsigned int)((LinkClass *)a2); /*0x5566b4*/
  this->m_Next = (unsigned int)(v3); /*0x5566b7*/
  if ( v3 ) /*0x5566ba*/
    v3->m_Prev = (unsigned int)(this); /*0x5566bc*/
  return (*(int (**))(*(unsigned int *)this->__pad_0 + 24))(this); /*0x5566c6*/

}
} // namespace gamemd
// 0x5566D0
namespace gamemd {
unsigned int * LinkedList_flat::Attach(int a2)
{

  LinkClass *v3; // eax

  (*(void (**)(LinkClass *))(*(unsigned int *)this->__pad_0 + 36))(this); /*0x5566d5*/
  v3 = (LinkClass *)(*(int (**)(int))(*(unsigned int *)a2 + 24))(a2); /*0x5566de*/
  v3->m_Prev = this; /*0x5566e1*/
  this->m_Next = v3; /*0x5566e4*/
  this->m_Prev = 0; /*0x5566e7*/
  return this->__pad_0; /*0x5566f0*/

}
} // namespace gamemd
// 0x556700
namespace gamemd {
LinkClass * * LinkedList_flat::Append(int a2, void *a2_2)
{

  LinkClass *v3; // eax
  int v4; // eax

  (*(void (**))(*(unsigned int *)this->__pad_0 + 36))(this); /*0x556705*/
  v3 = (LinkClass *)(*(int (**)(int))(*(unsigned int *)a2 + 28))(a2); /*0x55670e*/
  v3->m_Next = (gamemd::LinkClass *)(this); /*0x556711*/
  this->m_Prev = (unsigned int)(v3); /*0x556714*/
  v4 = *(unsigned int *)this->__pad_0; /*0x556717*/
  this->m_Next = 0; /*0x55671b*/
  return (*(int (**))(v4 + 24))(this); /*0x556725*/

}
} // namespace gamemd
// 0x556730
namespace gamemd {
int LinkedList_flat::RemoveNode()
{

  LinkClass *v2; // edi
  LinkClass *v3; // eax
  LinkClass *m_Prev; // edx
  LinkClass *m_Next; // edx

  v2 = (LinkClass *)(*(int (**)(LinkClass *))(*(unsigned int *)this->__pad_0 + 24))(this); /*0x55673e*/
  v3 = (LinkClass *)(*(int (**)(LinkClass *))(*(unsigned int *)this->__pad_0 + 28))(this); /*0x556740*/
  m_Prev = this->m_Prev; /*0x556743*/
  if ( m_Prev ) /*0x55674a*/
    m_Prev->m_Next = this->m_Next; /*0x55674f*/
  m_Next = this->m_Next; /*0x556752*/
  if ( m_Next ) /*0x556757*/
    m_Next->m_Prev = this->m_Prev; /*0x55675c*/
  this->m_Prev = 0; /*0x556761*/
  this->m_Next = 0; /*0x556764*/
  if ( v2 != this ) /*0x556767*/
    return (int)v2->__pad_0; /*0x55677e*/
  if ( v3 == this ) /*0x55676b*/
    return 0; /*0x55676f*/
  return (*(int (**)(LinkClass *))(*(unsigned int *)v3->__pad_0 + 24))(v3); /*0x55676d*/

}
} // namespace gamemd
// 0x623460
namespace gamemd {
int LinkedList_flat::Remove(unsigned int * a2)
{

  int result; // eax
  unsigned int *v3; // edx

  result = *((unsigned int *)this + 13); /*0x623460*/
  v3 = 0; /*0x623463*/
  if ( result ) /*0x623468*/
  {
    while ( a2 != (unsigned int *)result ) /*0x623470*/
    {
      v3 = (unsigned int *)result; /*0x623472*/
      result = *(unsigned int *)result; /*0x623474*/
      if ( !result ) /*0x623478*/
        return result; /*0x623478*/
    }
    if ( v3 ) /*0x623484*/
      *v3 = *(unsigned int *)result; /*0x623489*/
    else
      *((unsigned int *)this + 13) = *(unsigned int *)result; /*0x62349a*/
    __3_YAXPAX_Z((void *)result); /*0x62348b*/
  }
  return result; /*0x62347a*/

}
} // namespace gamemd
// 0x632D10
namespace gamemd {
void LinkedList_flat::RelinkNode(int a2)
{

  int v3; // ecx
  int v4; // eax

  if ( *((unsigned int *)this + 6) != a2 ) /*0x632d1b*/
  {
    if ( a2 ) /*0x632d1f*/
    {
      v3 = *(unsigned int *)(a2 + 8); /*0x632d21*/
      if ( v3 ) /*0x632d26*/
      {
        (*(void (**)(int, unsigned int))(*(unsigned int *)v3 + 12))(v3, 0); /*0x632d2c*/
        *(unsigned int *)(a2 + 8) = 0; /*0x632d2f*/
      }
    }
    v4 = *((unsigned int *)this + 6); /*0x632d36*/
    if ( v4 ) /*0x632d3b*/
      *(unsigned int *)(v4 + 8) = 0; /*0x632d3d*/
    *((unsigned int *)this + 6) = a2; /*0x632d46*/
    if ( a2 ) /*0x632d49*/
      *(unsigned int *)(a2 + 8) = (unsigned int)((unsigned int *)this + 5); /*0x632d4e*/
    *((unsigned int *)this + 7) = (unsigned int)(this); /*0x632d54*/
    *((unsigned int *)this + 1) = (unsigned int)((unsigned int *)this + 5); /*0x632d57*/
  }

}
} // namespace gamemd
// 0x6E5380
namespace gamemd {
int LinkedList_flat::Contains(IUnknown * aP1)
{

  int result; // eax

  result = *((unsigned int *)this + 10); /*0x6e5380*/
  if ( result ) /*0x6e5385*/
  {
    while ( result != aP1 ) /*0x6e538d*/
    {
      result = *(unsigned int *)(result + 40); /*0x6e538f*/
      if ( !result ) /*0x6e5394*/
        goto LABEL_4; /*0x6e5394*/
    }
    LOBYTE(result) = 1; /*0x6e539b*/
  }
  else
  {
LABEL_4:
    LOBYTE(result) = 0; /*0x6e5396*/
  }
  return result; /*0x6e5398*/

}
} // namespace gamemd
// 0x407450
namespace gamemd {
int LinkedList_flat::Init(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{

  int result; // eax

  *(unsigned int *)(&this->Tail)[0] = *(unsigned int *)this->__pad_0; /*0x407455*/
  result = *(unsigned int *)this->__pad_0; /*0x407457*/
  *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4) = (&this->Tail)[0]; /*0x40745c*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(this); /*0x40745f*/
  (&this->Tail)[0] = (int)this; /*0x407461*/
  return result; /*0x407464*/

}
} // namespace gamemd
// 0x407520
namespace gamemd {
int * LinkedList_flat::Next()
{

  int *result; // eax
  int v2; // edx

  result = *(int **)this->__pad_0; /*0x407520*/
  if ( *(unsigned int *)this->__pad_0 ) /*0x407520*/
  {
    v2 = *result; /*0x407527*/
    *(unsigned int *)this->__pad_0 = v2; /*0x40752c*/
    result += 2; /*0x407529*/
  }
  return result; /*0x407526*/

}
} // namespace gamemd
// 0x40E340
namespace gamemd {
int LinkedList_flat::Prepend(int a2)
{

  int result; // eax
  int v3; // esi
  int v4; // edx
  int v5; // edx
  int v6; // edx

  result = a2; /*0x40e340*/
  if ( a2 ) /*0x40e347*/
  {
    v3 = *(unsigned int *)(a2 + 4); /*0x40e349*/
    if ( v3 ) /*0x40e34e*/
    {
      v4 = *(unsigned int *)(a2 + 8); /*0x40e350*/
      if ( v4 ) /*0x40e355*/
      {
        *(unsigned int *)(v4 + 4) = v3; /*0x40e357*/
        *(unsigned int *)(*(unsigned int *)(a2 + 4) + 8) = *(unsigned int *)(a2 + 8); /*0x40e360*/
        *(unsigned int *)(a2 + 8) = 0; /*0x40e363*/
        *(unsigned int *)(a2 + 4) = 0; /*0x40e36a*/
      }
    }
  }
  v5 = this->Tail[0]; /*0x40e371*/
  *(unsigned int *)(a2 + 8) = this; /*0x40e374*/
  *(unsigned int *)(a2 + 4) = v5; /*0x40e377*/
  v6 = this->Tail[0]; /*0x40e37a*/
  if ( v6 ) /*0x40e380*/
    *(unsigned int *)(v6 + 8) = a2; /*0x40e382*/
  this->Tail[0] = a2; /*0x40e385*/
  return result; /*0x40e37f*/

}
} // namespace gamemd
// 0x473430
namespace gamemd {
int LinkedList_flat::Pop()
{

  int result; // eax

  result = this->Tail[0]; /*0x473430*/
  if ( result ) /*0x473435*/
  {
    this->Tail[0] = *(unsigned int *)(result + 48); /*0x47343b*/
    *(unsigned int *)(result + 48) = 0; /*0x47343e*/
    --*(unsigned int *)this->__pad_0; /*0x473445*/
  }
  return result; /*0x473437*/

}
} // namespace gamemd
// 0x556670
namespace gamemd {
unsigned int * LinkedList_flat::FindNext()
{

  LinkClass **p_m_Next; // edx
  unsigned int *result; // eax

  p_m_Next = (gamemd::LinkClass **)(&this->m_Next); /*0x556673*/
  if ( !this->m_Next ) /*0x556670*/
    return this->__pad_0; /*0x55668d*/
  do /*0x556681*/
  {
    result = (unsigned int *)(*p_m_Next); /*0x55667b*/
    if ( *p_m_Next == this ) /*0x55667f*/
      break; /*0x55667f*/
    p_m_Next = (LinkClass **)(result + 1); /*0x556684*/
  }
  while ( result[1] ); /*0x556681*/
  return result; /*0x55668b*/

}
} // namespace gamemd
// 0x625AE0
namespace gamemd {
int LinkedList_flat::PushFront(IUnknown * aP1)
{

  *(unsigned int *)(aP1 + 12) = this->Tail[0]; /*0x625ae7*/
  this->Tail[0] = aP1; /*0x625aea*/
  return aP1; /*0x625aed*/

}
} // namespace gamemd
