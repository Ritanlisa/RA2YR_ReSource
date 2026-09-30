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
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/LightningStorm_e4.hpp"
#include "e4/classes/E4Recv_779690_e4.hpp"
#include "e4/classes/Rules_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/LoadGame_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"

// 0x4791F0
namespace gamemd {
AbstractClass * * LinkedList_flat::LoadScenarioMixFiles(INIClass * aP0, int aP2, int a3, int a4)
{
    unsigned int v5 = 0;  /* G37 hoist */
    unsigned int v4 = 0;  /* G37 hoist */

  CD *v4; // ecx
  CD *v5; // esi
  unsigned int v6;
  unsigned int *v8; // eax
  unsigned int *v9; // eax
  INIClass *v10; // edi
  unsigned int *v11; // eax
  unsigned int *v12; // eax
  unsigned int *v13; // eax
  unsigned int *v14; // eax
  CCFileClass *v15; // eax
  char v16; // bl
  unsigned int *v17; // eax
  unsigned int *v18; // eax
  CCFileClass *v19; // eax
  char v20; // bl
  unsigned int *v21; // eax
  MixFileClass Buffer; // [esp+24h] [ebp-ACh] BYREF
  void **v23; // [esp+64h] [ebp-6Ch] BYREF
  unsigned int v24[21]; // [esp+68h] [ebp-68h] BYREF
  unsigned char v25[4]; // [esp+BCh] [ebp-14h] BYREF
  unsigned char v26[8]; // [esp+C0h] [ebp-10h] BYREF
  int v27; // [esp+C8h] [ebp-8h]
  int v28; // [esp+CCh] [ebp-4h]

  v5 = v4; /*0x479201*/
  Debug::Log(); /*0x479208*/
  if ( *(unsigned int *)&v5[1] == -1 ) /*0x479216*/
  {
    v6 = (IUnknown *)(dword_A83D14);
    if ( dword_A83D14 == (unsigned int)((IUnknown *))-1 ) /*0x479220*/
      v6 = dword_A83D18; /*0x479222*/
    v5[1] = (CD)v6; /*0x479227*/
  }
  Theme::Stop(&g_BuildingTypeClass_Count, 0); /*0x479232*/
  if ( *(unsigned int *)&stru_87C374.__pad_579C[13084] ) /*0x47923e*/
  {
    Debug::Log(); /*0x479249*/
    if ( *(unsigned int *)&stru_87C374.__pad_579C[13084] ) /*0x479259*/
      (***(void (****)(unsigned int, int))&stru_87C374.__pad_579C[13084])( /*0x47925f*/
        *(unsigned int *)&stru_87C374.__pad_579C[13084],
        1);
    *(unsigned int *)&stru_87C374.__pad_579C[13084] = 0; /*0x479261*/
  }
  if ( *(unsigned int *)&stru_87C374.__pad_14B0[3860] ) /*0x47926e*/
  {
    Debug::Log(); /*0x479279*/
    if ( *(unsigned int *)&stru_87C374.__pad_14B0[3860] ) /*0x479289*/
      (***(void (****)(unsigned int, int))&stru_87C374.__pad_14B0[3860])( /*0x47928f*/
        *(unsigned int *)&stru_87C374.__pad_14B0[3860],
        1);
    *(unsigned int *)&stru_87C374.__pad_14B0[3860] = 0; /*0x479291*/
  }
  if ( *(unsigned int *)&stru_87C374.__pad_579C[13004] ) /*0x47929e*/
  {
    Debug::Log(); /*0x4792a9*/
    if ( *(unsigned int *)&stru_87C374.__pad_579C[13004] ) /*0x4792b9*/
      (***(void (****)(unsigned int, int))&stru_87C374.__pad_579C[13004])( /*0x4792bf*/
        *(unsigned int *)&stru_87C374.__pad_579C[13004],
        1);
    *(unsigned int *)&stru_87C374.__pad_579C[13004] = 0; /*0x4792c1*/
  }
  if ( *(unsigned int *)&stru_87C374.__pad_579C[13000] ) /*0x4792ce*/
  {
    Debug::Log(); /*0x4792d9*/
    if ( *(unsigned int *)&stru_87C374.__pad_579C[13000] ) /*0x4792e9*/
      (***(void (****)(unsigned int, int))&stru_87C374.__pad_579C[13000])( /*0x4792ef*/
        *(unsigned int *)&stru_87C374.__pad_579C[13000],
        1);
    *(unsigned int *)&stru_87C374.__pad_579C[13000] = 0; /*0x4792f1*/
  }
  if ( *(unsigned int *)&stru_87C374.__pad_579C[13140] ) /*0x4792fe*/
  {
    Debug::Log(); /*0x479309*/
    if ( *(unsigned int *)&stru_87C374.__pad_579C[13140] ) /*0x479319*/
      (***(void (****)(unsigned int, int))&stru_87C374.__pad_579C[13140])( /*0x47931f*/
        *(unsigned int *)&stru_87C374.__pad_579C[13140],
        1);
    *(unsigned int *)&stru_87C374.__pad_579C[13140] = 0; /*0x479321*/
  }
  if ( *(unsigned int *)&stru_87C374.__pad_579C[13136] ) /*0x47932e*/
  {
    Debug::Log(); /*0x479339*/
    if ( *(unsigned int *)&stru_87C374.__pad_579C[13136] ) /*0x479349*/
      (***(void (****)(unsigned int, int))&stru_87C374.__pad_579C[13136])( /*0x47934f*/
        *(unsigned int *)&stru_87C374.__pad_579C[13136],
        1);
    *(unsigned int *)&stru_87C374.__pad_579C[13136] = 0; /*0x479351*/
  }
  if ( *(unsigned int *)&stru_87C374.__pad_579C[13092] ) /*0x47935e*/
  {
    Debug::Log(); /*0x479369*/
    if ( *(unsigned int *)&stru_87C374.__pad_579C[13092] ) /*0x479379*/
      (***(void (****)(unsigned int, int))&stru_87C374.__pad_579C[13092])( /*0x47937f*/
        *(unsigned int *)&stru_87C374.__pad_579C[13092],
        1);
    *(unsigned int *)&stru_87C374.__pad_579C[13092] = 0; /*0x479381*/
  }
  if ( !Map_Load_751C30() ) /*0x479387*/
    return 1; /*0x47939b*/
  v8 = (unsigned int *)__2_YAPAXI_Z(0x28u); /*0x4793a0*/
  if ( v8 ) /*0x4793aa*/
    v9 = MixFileClass::FromFile( /*0x4793b8*/
           v8,
           (MixFileClass *)stru_81C2C4.customSound_controller,
           (int)&stru_87C374.__pad_579C[20080]);
  else
    v9 = 0; /*0x4793bf*/
  *(unsigned int *)&stru_87C374.__pad_579C[13092] = v9; /*0x4793c1*/
  Debug::Log(); /*0x4793cf*/
  v10 = (INIClass *)&aP0-((unsigned int *)(>__pad_0))[1]; /*0x4793d4*/
  sprintf(Buffer.__pad_0, (ObjectClass *)&stru_81C2C4.owningHouseIndex, (INIClass *)&aP0->__pad_0[1]); /*0x4793e7*/
  Debug::Log(); /*0x4793f6*/
  v11 = (unsigned int *)__2_YAPAXI_Z(0x28u); /*0x4793fd*/
  if ( v11 ) /*0x479407*/
    *(unsigned int *)&stru_87C374.__pad_579C[13136] = MixFileClass::FromFile( /*0x47941a*/
                                                  v11,
                                                  &Buffer,
                                                  (int)&stru_87C374.__pad_579C[20080]);
  else
    *(unsigned int *)&stru_87C374.__pad_579C[13136] = 0; /*0x479421*/
  sprintf(Buffer.__pad_0, &stru_81C2C4, v10); /*0x479432*/
  Debug::Log(); /*0x479441*/
  v12 = (unsigned int *)__2_YAPAXI_Z(0x28u); /*0x479448*/
  if ( !v12 ) /*0x479452*/
  {
    *(unsigned int *)&stru_87C374.__pad_579C[13140] = 0; /*0x479489*/
LABEL_61:
    Debug::Log(); /*0x479664*/
    return 0; /*0x47967c*/
  }
  *(unsigned int *)&stru_87C374.__pad_579C[13140] = MixFileClass::FromFile(v12, &Buffer, (int)&stru_87C374.__pad_579C[20080]); /*0x479467*/
  if ( !*(unsigned int *)&stru_87C374.__pad_579C[13140] ) /*0x47946c*/
    goto LABEL_61; /*0x47946c*/
  Debug::Log(); /*0x479496*/
  v13 = (unsigned int *)__2_YAPAXI_Z(0x28u); /*0x47949d*/
  if ( v13 ) /*0x4794a7*/
    *(unsigned int *)&stru_87C374.__pad_579C[13000] = MixFileClass::FromFile( /*0x4794ba*/
                                                  v13,
                                                  (MixFileClass *)&stru_81C200.hasParachute,
                                                  (int)&stru_87C374.__pad_579C[20080]);
  else
    *(unsigned int *)&stru_87C374.__pad_579C[13000] = 0; /*0x4794c1*/
  Debug::Log(); /*0x4794cc*/
  v14 = (unsigned int *)__2_YAPAXI_Z(0x28u); /*0x4794d3*/
  if ( !v14 ) /*0x4794dd*/
  {
    *(unsigned int *)&stru_87C374.__pad_579C[13004] = 0; /*0x479514*/
    goto LABEL_61; /*0x47951a*/
  }
  *(unsigned int *)&stru_87C374.__pad_579C[13004] = MixFileClass::FromFile( /*0x4794f2*/
                                                v14,
                                                (MixFileClass *)&stru_81C200.customSound_controller[2],
                                                (int)&stru_87C374.__pad_579C[20080]);
  if ( !*(unsigned int *)&stru_87C374.__pad_579C[13004] ) /*0x4794f7*/
    goto LABEL_61; /*0x4794f7*/
  v15 = CCFileClass::Construct(&v23, (char *)&stru_81C200.ambientSoundController[4]); /*0x479526*/
  v16 = (*(int (**)(CCFileClass *, unsigned int))(*(unsigned int *)v15->__pad_0 + 20))(v15, 0); /*0x47953f*/
  v24[0] = &vt_CCFileClass; /*0x479541*/
  v28 = 0; /*0x479545*/
  Vector::Clear((int)v26); /*0x47954c*/
  v24[0] = &off_7E1668; /*0x47955a*/
  BufferIOFileClass::Dtor(v24); /*0x47955e*/
  if ( v16 ) /*0x47956a*/
  {
    Debug::Log(); /*0x47956c*/
    v17 = (unsigned int *)__2_YAPAXI_Z(0x28u); /*0x479573*/
    if ( v17 ) /*0x47957d*/
    {
      *(unsigned int *)&stru_87C374.__pad_14B0[3860] = MixFileClass::FromFile( /*0x479590*/
                                                   v17,
                                                   (MixFileClass *)&stru_81C200.ambientSoundController[4],
                                                   (int)&stru_87C374.__pad_579C[20080]);
      goto LABEL_58; /*0x479595*/
    }
  }
  else
  {
    Debug::Log(); /*0x479597*/
    v18 = (unsigned int *)__2_YAPAXI_Z(0x28u); /*0x47959e*/
    if ( v18 ) /*0x4795a8*/
    {
      *(unsigned int *)&stru_87C374.__pad_14B0[3860] = MixFileClass::FromFile( /*0x4795bb*/
                                                   v18,
                                                   (MixFileClass *)&stru_81C200.NeedsSaveOrLink,
                                                   (int)&stru_87C374.__pad_579C[20080]);
      goto LABEL_58; /*0x4795c0*/
    }
  }
  *(unsigned int *)&stru_87C374.__pad_14B0[3860] = 0; /*0x4795c2*/
LABEL_58:
  Audio::LoadWAVFiles(&g_BuildingTypeClass_Count); /*0x4795c8*/
  sprintf((char *const)&Buffer.Previous, (ObjectClass *)&stru_81C200.uniqueId, (INIClass *)aP2); /*0x4795e4*/
  v19 = CCFileClass::Construct(v24, (char *)&Buffer.Previous); /*0x4795f5*/
  v20 = (*(int (**)(CCFileClass *, unsigned int))(*(unsigned int *)v19->__pad_0 + 20))(v19, 0); /*0x479609*/
  v23 = &vt_CCFileClass; /*0x47960b*/
  v27 = 0; /*0x47960f*/
  Vector::Clear((int)v25); /*0x479616*/
  v23 = (void **)&off_7E1668; /*0x47961f*/
  BufferIOFileClass::Dtor(&v23); /*0x479623*/
  if ( v20 ) /*0x47962b*/
  {
    Debug::Log(); /*0x479637*/
    v21 = (unsigned int *)__2_YAPAXI_Z(0x28u); /*0x47963e*/
    if ( v21 ) /*0x479648*/
      goto LABEL_60; /*0x479648*/
LABEL_63:
    *(unsigned int *)&stru_87C374.__pad_579C[13084] = 0; /*0x4796bf*/
    goto LABEL_61; /*0x4796c5*/
  }
  sprintf(Buffer.__pad_0, &stru_81C200, v10); /*0x479691*/
  Debug::Log(); /*0x4796a0*/
  v21 = (unsigned int *)__2_YAPAXI_Z(0x28u); /*0x4796a7*/
  if ( !v21 ) /*0x4796b1*/
    goto LABEL_63; /*0x4796b1*/
LABEL_60:
  *(unsigned int *)&stru_87C374.__pad_579C[13084] = MixFileClass::FromFile(v21, &Buffer, (int)&stru_87C374.__pad_579C[20080]); /*0x47964a*/
  if ( !*(unsigned int *)&stru_87C374.__pad_579C[13084] ) /*0x479662*/
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
    (*(void (**)(void *))(*(unsigned int *)this + 36))(this); /*0x55660e*/
    (*(void (**)(void *, void *))(*(unsigned int *)this + 12))(this, a2); /*0x556616*/
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

  v1 = (unsigned int *)this + 2; /*0x556643*/
  if ( !*((unsigned int *)this + 2) ) /*0x556640*/
    return this; /*0x55665d*/
  do /*0x556651*/
  {
    result = (unsigned int *)*v1; /*0x55664b*/
    if ( (unsigned int *)*(unsigned int *)(v1) == (unsigned int *)(this) ) /*0x55664f*/
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

  int v3; // eax

  (*(void (**)(unsigned int *))(*(unsigned int *)this + 144))(this); /*0x5566a5*/
  v3 = *(unsigned int *)(a2 + 4); /*0x5566ac*/
  *(unsigned int *)(a2 + 4) = this; /*0x5566af*/
  *((unsigned int *)this + 2) = a2; /*0x5566b4*/
  *((unsigned int *)this + 1) = v3; /*0x5566b7*/
  if ( v3 ) /*0x5566ba*/
    *(unsigned int *)(v3 + 8) = this; /*0x5566bc*/
  return (*(int (**)(unsigned int *))(*(unsigned int *)this + 96))(this); /*0x5566c6*/

}
} // namespace gamemd
// 0x5566D0
namespace gamemd {
unsigned int * LinkedList_flat::Attach(int a2)
{

  int v3; // eax

  (*(void (**)(unsigned int *))(*(unsigned int *)this + 144))(this); /*0x5566d5*/
  v3 = (*(int (**)(int))(*(unsigned int *)a2 + 24))(a2); /*0x5566de*/
  *(unsigned int *)(v3 + 8) = this; /*0x5566e1*/
  *((unsigned int *)this + 1) = v3; /*0x5566e4*/
  *((unsigned int *)this + 2) = 0; /*0x5566e7*/
  return this; /*0x5566f0*/

}
} // namespace gamemd
// 0x556700
namespace gamemd {
LinkClass * * LinkedList_flat::Append(int a2)
{

  int v3; // eax
  int v4; // eax

  (*(void (**)(unsigned int *))(*(unsigned int *)this + 144))(this); /*0x556705*/
  v3 = (*(int (**)(int))(*(unsigned int *)a2 + 28))(a2); /*0x55670e*/
  *(unsigned int *)(v3 + 4) = this; /*0x556711*/
  *((unsigned int *)this + 2) = v3; /*0x556714*/
  v4 = *this; /*0x556717*/
  *((unsigned int *)this + 1) = 0; /*0x55671b*/
  return (*(int (**)(unsigned int *))(v4 + 24))(this); /*0x556725*/

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

  v2 = (*(int (**)(unsigned int *))(*(unsigned int *)this + 96))(this); /*0x55673e*/
  v3 = (*(int (**)(unsigned int *))(*(unsigned int *)this + 112))(this); /*0x556740*/
  v4 = *((unsigned int *)this + 2); /*0x556743*/
  if ( v4 ) /*0x55674a*/
    *(unsigned int *)(v4 + 4) = *((unsigned int *)this + 1); /*0x55674f*/
  v5 = *((unsigned int *)this + 1); /*0x556752*/
  if ( v5 ) /*0x556757*/
    *(unsigned int *)(v5 + 8) = *((unsigned int *)this + 2); /*0x55675c*/
  *((unsigned int *)this + 2) = 0; /*0x556761*/
  *((unsigned int *)this + 1) = 0; /*0x556764*/
  if ( (unsigned int *)v2 != this ) /*0x556767*/
    return v2; /*0x55677e*/
  if ( (unsigned int *)v3 == this ) /*0x55676b*/
    return 0; /*0x55676f*/
  return (*(int (**)(int))(*(unsigned int *)v3 + 24))(v3); /*0x55676d*/

}
} // namespace gamemd
// 0x623460
namespace gamemd {
void LinkedList_flat::Remove(unsigned int * a2)
{

  unsigned int *v2; // eax
  unsigned int *v3; // edx

  v2 = (unsigned int *)*((unsigned int *)this + 13); /*0x623460*/
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
      *((unsigned int *)this + 13) = *v2; /*0x62349a*/
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
      *(unsigned int *)(a2 + 8) = (unsigned int *)this + 5; /*0x632d4e*/
    *((unsigned int *)this + 7) = this; /*0x632d54*/
    *((unsigned int *)this + 1) = (unsigned int *)this + 5; /*0x632d57*/
  }

}
} // namespace gamemd
// 0x6E5380
namespace gamemd {
int LinkedList_flat::Contains(IUnknown * aP1)
{

  int v2; // eax

  v2 = *((unsigned int *)this + 10); /*0x6e5380*/
  if ( !v2 ) /*0x6e5385*/
    return 0; /*0x6e5396*/
  while ( (IUnknown *)v2 != aP1 ) /*0x6e538d*/
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

  **((unsigned int *)this + 1) = *this; /*0x407455*/
  result = (int)*this; /*0x407457*/
  (*this)[1] = *((unsigned int *)this + 1); /*0x40745c*/
  *this = this; /*0x40745f*/
  *((unsigned int *)this + 1) = this; /*0x407461*/
  return result; /*0x407464*/

}
} // namespace gamemd
// 0x407520
namespace gamemd {
int * LinkedList_flat::Next()
{

  int *result; // eax
  int *v2; // edx

  result = *this; /*0x407520*/
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
  v5 = *((unsigned int *)this + 1); /*0x40e371*/
  *(unsigned int *)(a2 + 8) = this; /*0x40e374*/
  *(unsigned int *)(a2 + 4) = v5; /*0x40e377*/
  v6 = *((unsigned int *)this + 1); /*0x40e37a*/
  if ( v6 ) /*0x40e380*/
    *(unsigned int *)(v6 + 8) = a2; /*0x40e382*/
  *((unsigned int *)this + 1) = a2; /*0x40e385*/
  return result; /*0x40e37f*/

}
} // namespace gamemd
// 0x473430
namespace gamemd {
int LinkedList_flat::Pop()
{

  int result; // eax

  result = *((unsigned int *)this + 1); /*0x473430*/
  if ( result ) /*0x473435*/
  {
    *((unsigned int *)this + 1) = *(unsigned int *)(result + 48); /*0x47343b*/
    *(unsigned int *)(result + 48) = 0; /*0x47343e*/
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

  v1 = (unsigned int *)this + 1; /*0x556673*/
  if ( !*((unsigned int *)this + 1) ) /*0x556670*/
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

  aP1->field_C = *((unsigned int *)this + 1); /*0x625ae7*/
  *((unsigned int *)this + 1) = aP1; /*0x625aea*/
  return (int)aP1; /*0x625aed*/

}
} // namespace gamemd