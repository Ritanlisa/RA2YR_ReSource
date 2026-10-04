// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/VoxelAnimType_e4.hpp"
#include "e4/classes/SmudgeTypeClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/UnitClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/TeamTypeClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/TerrainTypeClass_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/Scenario_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/E4Recv_5AFEF0_e4.hpp"
#include "e4/classes/SmudgeTypeVector_e4.hpp"
#include "e4/classes/E4Recv_728A00_e4.hpp"
#include "e4/classes/Draw_e4.hpp"
#include "e4/classes/SidebarClass_e4.hpp"
#include "e4/classes/SlaveManagerClass_e4.hpp"
#include "e4/classes/SortedArray_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Skirmish_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"

// 0x6B5260
namespace gamemd {  // G42.18c ns repair
SmudgeTypeClass::SmudgeTypeClass(char *Source, int a2, int a3, int a4, int a5, int a6, int aP1, int aP0, int aP2, int a1)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6B5260)
}
}  // G42.18c ns repair
// 0x6B55F0
namespace gamemd {  // G42.18c ns repair
void SmudgeTypeClass::vt_entry_A0(int * a2, int * a3, int a4, int a5, short * a6)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6B55F0)
}
}  // G42.18c ns repair
// 0x6B56D0
namespace gamemd {  // G42.18c ns repair
int SmudgeTypeClass::GetSize(uint8_t *** aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6B56D0)
}
}  // G42.18c ns repair
// 0x6B6160
namespace gamemd {  // G42.18c ns repair
SmudgeTypeClass *  SmudgeTypeClass::ddtor(void * a2, char a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6B6160)
}
}  // G42.18c ns repair
// 0x6B5550
namespace gamemd {  // G42.18c ns repair
bool SmudgeTypeClass::GetType(short * a2, int a3)
{

  UnitClass *v4; // eax
  int v5; // edx
  bool result; // al
  unsigned int v7[3]; // [esp+4h] [ebp-Ch] BYREF

  v4 = (UnitClass *)__2_YAPAXI_Z(0xB0u); /*0x6b555b*/
  result = 0; /*0x6b55a7*/
  if ( v4 ) /*0x6b5565*/
  {
    v7[2] = 0; /*0x6b556d*/
    v5 = a2[1]; /*0x6b5578*/
    v7[0] = (*a2 << 8) + 128; /*0x6b5585*/
    v7[1] = (v5 << 8) + 128; /*0x6b559a*/
    if ( ((UnitClass *)v4)->Create(this, v7, -1) ) /*0x6b559e*/
      return 1; /*0x6b5565*/
  }
  return result; /*0x6b55a9*/

}
}  // G42.18c ns repair
// 0x6B55C0
namespace gamemd {  // G42.18c ns repair
SmudgeClass * SmudgeTypeClass::GetFlag(int a2)
{

  UnitClass *v3; // eax

  v3 = (UnitClass *)__2_YAPAXI_Z(0xB0u); /*0x6b55c8*/
  if ( v3 ) /*0x6b55d2*/
return (gamemd::SmudgeClass *)((UnitClass *)v3)->Create(this, &dword_B0B7A8, -1); /*0x6b55de*/
  else
    return 0; /*0x6b55e7*/

}
}  // G42.18c ns repair
// 0x6B57F0
namespace gamemd {  // G42.18c ns repair
int SmudgeTypeClass::PowerDrainUpdate(int * a2)
{

  int v3; // ecx
  int v4; // edx

  ((AbstractTypeClass *)((AbstractTypeClass *)this))->ProcessPower(a2); /*0x6b57f9*/
  Power::TimerProcess(this->ArrayIndex); /*0x6b5807*/
  LOBYTE(v3) = this->Crater; /*0x6b580c*/
  ((Power *)((Power *)a2))->FlagProcess(v3); /*0x6b5815*/
  LOBYTE(v4) = this->Burn; /*0x6b581a*/
  ((Power *)((Power *)a2))->FlagProcess(v4); /*0x6b5823*/
  Power::TimerProcess(this->Width); /*0x6b5831*/
  return Power::TimerProcess(this->Height); /*0x6b5844*/

}
}  // G42.18c ns repair
// 0x6B5850
namespace gamemd {  // G42.18c ns repair
int  SmudgeTypeClass::LoadTypeData(ObjectTypeClass * aP0, int aP1)
{

  int result; // eax

  result = ObjectTypeClass::LoadCleanup((IUnknown *)((ObjectTypeClass *)aP0), (gamemd::ObjectTypeClass *)aP1); /*0x6b585b*/
  if ( result >= 0 ) /*0x6b5862*/
  {
    if ( aP0 ) /*0x6b5866*/
    {
      ((ObjectTypeClass*)(ObjectTypeClass *)aP0)->Construct((int)&aP1); /*0x6b586f*/
      aP0->vtable1 = &vt_SmudgeTypeClass; /*0x6b5874*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_SmudgeTypeClass); /*0x6b587a*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_SmudgeTypeClass); /*0x6b5881*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_SmudgeTypeClass); /*0x6b5888*/
    }
    ((VoxelAnimType*)(char *)aP0)->LoadAnim(); /*0x6b5891*/
    ((ObjectTypeClass*)(char *)aP0)->Load2DArt(); /*0x6b5898*/
    return 0; /*0x6b589d*/
  }
  return result; /*0x6b589f*/

}
}  // G42.18c ns repair
// 0x6B58B0
namespace gamemd {  // G42.18c ns repair
int SmudgeTypeClass::SaveToINI(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{

  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper((gamemd::TechnoTypeClass *)((AbstractClass *)aP0), aP1, (gamemd::TechnoTypeClass *)aP2); /*0x6b58bf*/
  if ( result >= 0 ) /*0x6b58c6*/
    return 0; /*0x6b58c8*/
  return result; /*0x6b58ca*/

}
}  // G42.18c ns repair
// 0x6B58D0
namespace gamemd {  // G42.18c ns repair
int SmudgeTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x6b58d6*/
    return -2147467261; /*0x6b58d8*/
  *a2 = 1525862008; /*0x6b58e6*/
  a2[1] = 298976820; /*0x6b58ee*/
  a2[2] = 1610654892; /*0x6b58f7*/
  a2[3] = unk_7E961C; /*0x6b5900*/
  return 0; /*0x6b58dd*/

}
}  // G42.18c ns repair
// 0x6B6130
namespace gamemd {  // G42.18c ns repair
int SmudgeTypeClass::GetTypeIdentifier()
{

  return 30; /*0x6b6135*/

}
}  // G42.18c ns repair
// 0x6B6140
namespace gamemd {  // G42.18c ns repair
int SmudgeTypeClass::GetObjectSize()
{

  return 676; /*0x6b6145*/

}
}  // G42.18c ns repair
// 0x6B6150
namespace gamemd {
int SmudgeTypeClass::GetAuxField()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6B6150)
}
}
