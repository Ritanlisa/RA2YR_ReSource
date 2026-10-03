// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/TemporalClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/TerrainTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/TeamTypeClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/TerrainClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Techno_e4.hpp"
#include "e4/classes/Map_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/Float_e4.hpp"
#include "e4/classes/SuperClass_e4.hpp"
#include "e4/classes/TagClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/Conditions_e4.hpp"
#include "e4/classes/MessageListClass_e4.hpp"
#include "e4/classes/FactoryClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"

// 0x71A450
namespace gamemd {
int TemporalClass::Constructor()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x71A450)
}
} // namespace ra2

// 0x71A4E0
namespace gamemd {
TemporalClass::TemporalClass(TechnoClass * aP1)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x71A4E0)
}
} // namespace ra2

// 0x71A760
namespace gamemd {
void ** TemporalClass::ProcessTimeWarp()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x71A760)
}
} // namespace ra2

// 0x71AB10
namespace gamemd {
int TemporalClass::GetWarpPerStep(int a2)
{

  int WarpPerStep; // ebx
  TemporalClass *v4; // ecx
  int creationFrame; // ecx
  int v6; // edi
  int v7; // eax
  int v8; // eax

  WarpPerStep = 0; /*0x71ab14*/
  v4 = (TemporalClass *)*((unsigned int *)this + 17); /*0x71ab17*/
  if ( v4 && a2 <= 50 ) /*0x71ab25*/
    WarpPerStep = ((TemporalClass *)(v4))->GetWarpPerStep(a2 + 1); /*0x71ab2e*/
  creationFrame = (int)(this->creationFrame); /*0x71ab30*/
  v6 = *(unsigned int *)creationFrame; /*0x71ab35*/
  v7 = (*(int (**)(int, unsigned int))(*(unsigned int *)creationFrame + 740))(creationFrame, 0); /*0x71ab37*/
  v8 = *(unsigned int *)(*(unsigned int *)(*(int (**)(int, int))(v6 + 1016))((int)this->creationFrame, v7) + 164); /*0x71ab4a*/
  *((unsigned int *)this + 19) = v8; /*0x71ab50*/
  return WarpPerStep + v8; /*0x71ab49*/

}
} // namespace ra2

// 0x71B1B0
namespace gamemd {
void * TemporalClass::ProcessEvent(char a2, int aP1, int aP0, int a1, int aP2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x71B1B0)
}
} // namespace ra2

// 0x71A650
namespace gamemd {
int TemporalClass::SetTarget(AbstractClass * aP1)
{

  return ((AbstractClass *)(AbstractClass *)this)->ProcessPower(); /*0x71a65a*/

}
} // namespace gamemd

// 0x71A660
namespace gamemd {
int TemporalClass::LoadTemporal(AbstractClass * aP0, int aP1)
{

  int Prefix_0; // edi

  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(aP0,(gamemd::AbstractClass *)(aP1)); /*0x71a671*/
  if ( Prefix_0 >= 0 ) /*0x71a675*/
  {
    if ( aP0 ) /*0x71a679*/
    {
      AbstractClass::InitVtables((AbstractClass *)aP0, (int)&aP1); /*0x71a682*/
      aP0->vtable1 = (void *)((unsigned int)(&vt_TemporalClass)); /*0x71a687*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_TemporalClass); /*0x71a68d*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_TemporalClass); /*0x71a694*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_TemporalClass); /*0x71a69b*/
    }
    ObjectPtr_RegisterForTracking((int)&SwizzleManagerClass_Instance,(int *)(&aP0->creationFrame)); /*0x71a6ab*/
    ObjectPtr_RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)aP0->__pad_28); /*0x71a6b9*/
    ObjectPtr_RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)aP0 + 16); /*0x71a6c7*/
    ObjectPtr_RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)aP0 + 17); /*0x71a6d5*/
    ObjectPtr_RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)aP0 + 14); /*0x71a6e3*/
    ObjectPtr_RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)aP0 + 15); /*0x71a6f1*/
  }
  return Prefix_0; /*0x71a6f8*/

}
} // namespace gamemd

// 0x71A700
namespace gamemd {
int TemporalClass::SaveTemporal(TechnoTypeClass * aP0, int * a1, int aP2)
{

  return AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0),(gamemd::ObjectTypeClass *)(a1),(gamemd::ObjectTypeClass *)(aP2)); /*0x71a714*/

}
} // namespace gamemd

// 0x71A720
namespace gamemd {
int TemporalClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x71a726*/
    return -2147467261; /*0x71a728*/
  *a2 = -1810815964; /*0x71a736*/
  a2[1] = 299099139; /*0x71a73e*/
  a2[2] = 1342205582; /*0x71a747*/
  a2[3] = unk_7E98DC; /*0x71a750*/
  return 0; /*0x71a72d*/

}
} // namespace gamemd

// 0x71AE50
namespace gamemd {
char TemporalClass::CanWarpTarget(unsigned int * a1)
{

  int Member; // eax
  unsigned int *v3; // edi
  unsigned int *v4; // eax
  unsigned int v5[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !a1 ) /*0x71ae5b*/
    return 0; /*0x71ae5e*/
  if ( !*(unsigned char *)((*(int (**)(unsigned int *))(*a1 + 132))(a1) + 3386) ) /*0x71ae71*/
    return 0; /*0x71ae7c*/
  if ( (*(uint8_t (**)(unsigned int *))(*a1 + 352))(a1) ) /*0x71ae89*/
    return 0; /*0x71ae94*/
  if ( (*(int (**)(unsigned int *))(*a1 + 44))(a1) == 1 ) /*0x71aea7*/
  {
    Member = ((Team *)(a1))->GetMember(0); /*0x71aead*/
    v3 = (unsigned int *)Member; /*0x71aeb2*/
    if ( Member ) /*0x71aeb6*/
    {
      if ( (*(int (**)(int))(*(unsigned int *)Member + 44))(Member) == 6 ) /*0x71aec2*/
      {
        if ( *(unsigned char *)(v3[328] + 5821) ) /*0x71aeca*/
        {
          v5[0] = a1[39]; /*0x71aedc*/
          v5[1] = a1[40]; /*0x71aeed*/
          v5[2] = a1[41]; /*0x71aef4*/
          v4 = (unsigned int *)(((Coord *)(&dword_87F7E8))->To_Cell(v5)); /*0x71aef8*/
          if ( ((Cell *)(v4))->IsBridge() == v3 ) /*0x71af06*/
            return 0; /*0x71af09*/
        }
      }
    }
  }
  return 1; /*0x71ae5d*/

}
} // namespace gamemd
