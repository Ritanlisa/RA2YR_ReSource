// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/HouseClass_24_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Function_e4.hpp"
#include "e4/classes/Delegate_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/CounterClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/BaseClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/LayerClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/TriggerClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/HouseTypeClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/DynamicVector_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/TechnoClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/VoxClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/UnitTypeVector_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/InfantryTypeVector_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Random_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Multiplayer_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/CCINIClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Float4_e4.hpp"  // G42.36 C2027 supply

// 0x43B5E0
namespace gamemd {
void ** HouseClass::PsiWarn(InfantryClass * aP0, int a2, int arg0, void * a3)
{

  void *v6; // edi
  int *v7; // eax
  AnimClass *v8; // eax
  void **v9; // esi
  int v11[3]; // [esp+Ch] [ebp-18h] BYREF
  unsigned char v12[12]; // [esp+18h] [ebp-Ch] BYREF

  v6 = (void *)*((unsigned int *)dword_8B4154 + ((AnimTypeClass *)(a3))->FindIndex()); /*0x43b5fb*/
  v7 = (int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)a2 + 72))(a2, v12); /*0x43b605*/
  v11[0] = *v7; /*0x43b60a*/
  v11[1] = v7[1]; /*0x43b616*/
  v11[2] = v7[2]; /*0x43b61d*/
  v8 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x43b621*/
  if ( v8 ) /*0x43b62b*/
    v9 = ((AnimClass *)(v8))->ctor(v6, v11, 0, 1, (void *)0x600, 0, 0); /*0x43b647*/
  else
    v9 = 0; /*0x43b64b*/
  BuildingClass::SetField95((BuildingClass *)v9, arg0); /*0x43b654*/
  ((Function *)((Function *)v9))->Method_424CA0((int)(aP0)); /*0x43b65c*/
  *((unsigned char *)v9 + 413) = 1; /*0x43b661*/
  return v9; /*0x43b66a*/

}
}
// 0x459840
namespace gamemd {
int HouseClass::GetRepairStepAmount()
{

  unsigned int *v1; // edx
  int result; // eax

  v1 = (unsigned int *)this->builtInfantryTypes[126]; /*0x459840*/
  result = v1[937]; /*0x459846*/
  if ( !result ) /*0x45984e*/
  {
    result = v1[938]; /*0x459850*/
    if ( !result ) /*0x459858*/
    {
      result = v1[939]; /*0x45985a*/
      if ( !result ) /*0x459862*/
        return this->builtInfantryTypes[243]; /*0x459864*/
    }
  }
  return result; /*0x45986a*/

}
}
// 0x4ADEE0
namespace gamemd {
int HouseClass::ResetObjectOrders(char a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4ADEE0)
}
}
// 0x4ADFF0
namespace gamemd {
int HouseClass::RevealShroudForAllies(char a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4ADFF0)
}
}
// 0x4F54A0
namespace gamemd {
int HouseClass::Construct(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4F54A0)
}

// 0x4F9A50
namespace gamemd {
int HouseClass::IsAlliedWith()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4F9A50)
}
}
// 0x4FBE40
namespace gamemd {
int HouseClass::IsCellOccupied(IUnknown * aP1, char a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4FBE40)
}
}
// 0x4FC790
namespace gamemd {
int HouseClass::DestroyAllBuildings()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4FC790)
}
}
// 0x4FC820
namespace gamemd {
int HouseClass::DestroyAllNonBuildingsNonNaval()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4FC820)
}
}
// 0x4FC8D0
namespace gamemd {
int HouseClass::DestroyAllNonBuildingsNaval()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4FC8D0)
}
}
// 0x501540
namespace gamemd {
int HouseClass::CanAlly(HouseClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x501540)
}
}
// 0x501640
namespace gamemd {
int HouseClass::CanDetect()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x501640)
}
}
// 0x503040
namespace gamemd {
AbstractClass * * HouseClass::SaveLoad_Prefix(int a1, LPSTREAM pStm)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x503040)
}

} // namespace gamemd

// 0x505360
namespace gamemd {
int HouseClass::PrerequisitesForTechnoTypeAreListed(int a1, VectorClass_flat * aP1, TechnoTypeClass * aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x505360)
}
}
// 0x506EF0
namespace gamemd {
AbstractClass * * HouseClass::AutoBuildScanAndSort(int a2, unsigned int * a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x506EF0)
}

// 0x508C30
namespace gamemd {
int HouseClass::UpdatePower(double a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x508C30)
}
}
// 0x508DF0
namespace gamemd {
void * HouseClass::CanTogglePower()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x508DF0)
}
}
// 0x5098F0
namespace gamemd {
CellStruct * * HouseClass::UpdateAITryFireSW(void *a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5098F0)
}
}
// 0x50BC90
namespace gamemd {
int HouseClass::CreatePowerOutage(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x50BC90)
}
}
// 0x50BCD0
namespace gamemd {
int HouseClass::CreateRadarOutage(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x50BCD0)
}
}
// 0x50D320
namespace gamemd {
void HouseClass_RespawnStartingBuildings()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x50D320)
}
}
// 0x50D440
namespace gamemd {
int HouseClass::RespawnStartingForces(TechnoClass * aP0, void ** a1, unsigned int * a2, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x50D440)
}
}
// 0x50D9E0
namespace gamemd {
int HouseClass::GetInfSelfHealStep()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x50D9E0)
}
}
// 0x50D9F0
namespace gamemd {
int HouseClass::GetUnitSelfHealStep()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x50D9F0)
}
}
// 0x50E0E0
namespace gamemd {
void HouseClass::LostPoweredCenter(int a2, void *a2_2)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x50E0E0)
}
}
// 0x5471B0
namespace gamemd {
int HouseClass::GetCameoTypeIndex(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5471B0)
}
}
// 0x5D70F0
namespace gamemd {
AbstractClass * * HouseClass::AIDecision(ObjectClass * aP0, int * a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D70F0)
}
}
// 0x5D74A0
namespace gamemd {
int HouseClass::InitAlliances()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D74A0)
}
}
// 0x5EE9D0
namespace gamemd {
AbstractClass * * HouseClass::FindStartPositions(void *a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5EE9D0)
}
}
// 0x740DF0
namespace gamemd {
int HouseClass::SetPrimaryFactory(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x740DF0)
}
}
// 0x429210
namespace gamemd {
int HouseClass::QueryInterface_Helper()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x429210)
}
} // namespace gamemd

// 0x429270
namespace gamemd {
int HouseClass::QueryInterface_Dispatch()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x429270)
}
} // namespace gamemd

// 0x42F380
namespace gamemd {
int HouseClass::FailedToPlaceNode(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x42F380)
}
} // namespace gamemd

// 0x4E8240
namespace gamemd {
int HouseClass::vt_placeholder_00()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E8240)
}
} // namespace gamemd

// 0x4E8250
namespace gamemd {
int HouseClass::vt_placeholder_01()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E8250)
}
} // namespace gamemd

// 0x4E8260
namespace gamemd {
int HouseClass::vt_placeholder_02()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E8260)
}
} // namespace gamemd

// 0x4E8270
namespace gamemd {
std::locale::facet * HouseClass::initAngerStruct(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E8270)
}
} // namespace gamemd

// 0x4F28A0
namespace gamemd {
int HouseClass_24::Seek(int a2, void *a2_2, void *a3_1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4F28A0)
}
} // namespace gamemd

// 0x4F28C0
namespace gamemd {
VectorCursor * HouseClass::vt_placeholder_07(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4F28C0)
}
} // namespace gamemd

// 0x4F28E0
namespace gamemd {
char HouseClass_24::AddRef(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4F28E0)
}
} // namespace gamemd

// 0x4F2920
namespace gamemd {
char HouseClass_24::Release(int a2, unsigned int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4F2920)
}
} // namespace gamemd

// 0x4F29D0
namespace gamemd {
void HouseClass_24::ddtor()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4F29D0)
}
} // namespace gamemd

// 0x4F2A00
namespace gamemd {
int HouseClass_24::Read(unsigned int * a2, void *a2_2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4F2A00)
}
} // namespace gamemd

// 0x4F2A40
namespace gamemd {
unsigned int HouseClass_24::Write(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4F2A40)
}
} // namespace gamemd

// 0x4F2B40
namespace gamemd {
unsigned int * HouseClass::vt_placeholder_09()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4F2B40)
}
} // namespace gamemd

// 0x4F2B50
namespace gamemd {
unsigned int * HouseClass::vt_placeholder_10()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4F2B50)
}
} // namespace gamemd

// 0x4F2B60
namespace gamemd {
VectorClass_flat * HouseClass_24::QueryInterface(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4F2B60)
}
} // namespace gamemd

// 0x4F6830
namespace gamemd {
int HouseClass::QueryInterface(CCINIClass * aP0, const void * a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4F6830)
}
} // namespace gamemd

// 0x4F9610
namespace gamemd {
double HouseClass::GiveTiberium_Storage(float aP1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4F9610)
}
} // namespace gamemd

// 0x4F9970
namespace gamemd {
char HouseClass::UpdateAllSilos(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4F9970)
}
} // namespace gamemd

// 0x4F9B50
namespace gamemd {
int HouseClass::MakeAlly(int a2, char a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4F9B50)
}
} // namespace gamemd

// 0x4FB920
namespace gamemd {
unsigned int * HouseClass::SDDTORAllAndTriggers()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4FB920)
}
} // namespace gamemd

// 0x4FBF60
namespace gamemd {
char HouseClass::DroppedFlag(UnitClass * aP1, int a3)
{

  int16_t *v3; // edi
  int relatedTagsCapacity; // eax
  HouseClass *v6; // eax
  char v7; // bl
  HouseClass *v8; // eax
  int v10; // [esp-8h] [ebp-14h]
  int v11; // [esp-8h] [ebp-14h]
  int v12; // [esp+8h] [ebp-4h] BYREF

  v3 = aP1; /*0x4fbf63*/
  if ( !(uint8_t)((LayerClass *)((LayerClass *)&stru_87F5F0.__pad_58[416]))->CoordinatesLegal(aP1) ) /*0x4fbf6f*/
    return 0; /*0x4fc055*/
  HouseClass::IsCellOccupied((int *)this, this->ourFlagCoords[0], a3); /*0x4fbf8b*/
  relatedTagsCapacity = this->relatedTagsCapacity; /*0x4fbf92*/
  aP1 = *(int16_t **)v3; /*0x4fbf95*/
  v10 = *(unsigned int *)(relatedTagsCapacity + 184); /*0x4fbfa3*/
  v6 = (HouseClass *)((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj((int16_t *)&aP1); /*0x4fbfaa*/
  v7 = HouseClass::MarkCellBuildable(v6, v10); /*0x4fbfb6*/
  if ( v7 /*0x4fc034*/
    || (a3 = 0,
        aP1 = (int16_t *)*LayerClass::Pathfinding_Find(
                           &stru_87F5F0.__pad_58[416],
                           0,
                           &v12,
                           v3,
                           1,
                           -1,
                           0,
                           0,
                           1,
                           1,
                           0,
                           0,
                           0,
                           1,
                           (int16_t *)&a3,
                           0,
                           0),
        aP1 != *(int16_t **)&(unsigned int *)((char *)&stru_A8EB00 + 948))
    && (v11 = *(unsigned int *)(this->relatedTagsCapacity + 184),
        v8 = (HouseClass *)((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj((int16_t *)&aP1),
        (v7 = HouseClass::MarkCellBuildable(v8, v11)) != 0) )
  {
    this->ourFlagCoords[0] = (int)((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj((int16_t *)&aP1); /*0x4fc045*/
  }
  return v7; /*0x4fc04e*/

}
} // namespace gamemd

// 0x4FC060
namespace gamemd {
char HouseClass::PickedUpFlag(ObjectClass * aP1, char a3)
{

  if ( !aP1 || *(unsigned char *)(aP1 + 129) ) /*0x4fc06c*/
    return 0; /*0x4fc0a8*/
  HouseClass::IsCellOccupied((int *)this, this->ourFlagCoords[0], a3); /*0x4fc084*/
  HouseClass::SetPrimaryFactory((HouseClass *)aP1, *(unsigned int *)(this->relatedTagsCapacity + 184)); /*0x4fc095*/
  this->ourFlagCoords[0] = aP1; /*0x4fc09a*/
  return 1; /*0x4fc0a0*/

}
} // namespace gamemd

// 0x509130
namespace gamemd {
void HouseClass::AcquiredThreatNode()
{

  this->hasThreatNode = 1; /*0x509130*/

}
} // namespace gamemd

// 0x50BD10
namespace gamemd {
char HouseClass::ReshroudMap()
{

  char result; // al

  result = BYTE2(this->HouseClass_field_timer_B[2]); /*0x50bd10*/
  if ( !result ) /*0x50bd18*/
    return ShroudClass::Reset((ShroudClass *)&stru_87F5F0.__pad_58[416], (int)this); /*0x50bd20*/
  return result; /*0x50bd25*/

}
} // namespace gamemd

// 0x50E1B0
namespace gamemd {
BOOL HouseClass::GainedPoweredCenter(int a2)
{

  return this->poweredUnitCenters > 0; /*0x50e1bd*/

}
} // namespace gamemd

// 0x50E340
namespace gamemd {
int HouseClass::COMStub_Ret1_1(int a1)
{

  return 1; /*0x50e345*/

}
} // namespace gamemd

// 0x50E350
namespace gamemd {
int HouseClass::COMStub_Ret1_2(int a1)
{

  return 1; /*0x50e355*/

}
} // namespace gamemd

// 0x53A130
namespace gamemd {
char HouseClass::IonSensitivesShouldBeOffline()
{

  return 0; /*0x53a132*/

}
} // namespace gamemd

// 0x54B980
namespace gamemd {
char HouseClass::Set(void *a1, void *a2, void *a3)
{

  unsigned int *v2; // eax
  unsigned int *Value; // eax
  int v4; // ecx
  int v6; // [esp+Ch] [ebp-4h] BYREF

  LOBYTE(v2) = (*((int (**)(void **))((unsigned int *)this)[0] + 4))(&((unsigned int *)this)[0]); /*0x54b98b*/
  if ( (unsigned char)v2 ) /*0x54b990*/
  {
    (*(void (**)(void *, unsigned int, int))(*(unsigned int *)((unsigned int *)this)[0] + 1348))(((unsigned int *)this)[0], 0, 1072693248); /*0x54b9a4*/
    Value = ((ProgressTimer *)((ProgressTimer *)((char *)((unsigned int *)this)[0] + 904)))->GetValue(&v6); /*0x54b9b8*/
    ((FacingClass*)((char *)&this->repairStationsCount))->Set_SyncLog(Value); /*0x54b9c1*/
    v4 = this->relatedTags[0]; /*0x54b9c6*/
    this->absorbersCapacity = 0; /*0x54b9cc*/
    this->bunkersCount = 0; /*0x54b9cf*/
    this->bunkers[0] = 0; /*0x54b9d2*/
    this->bunkersCapacity = 0; /*0x54b9d5*/
    this->occupiables[0] = v4; /*0x54b9d8*/
    LOBYTE(v2) = HouseClass::IonSensitivesShouldBeOffline(); /*0x54b9e4*/
    if ( !(unsigned char)v2 ) /*0x54b9ec*/
    {
      v2 = (unsigned int *)(*(int (**)(void *, int *))(*(unsigned int *)((unsigned int *)this)[0] + 756))(((unsigned int *)this)[0], &v6); /*0x54b9f8*/
      if ( *v2 == dword_ABC588 ) /*0x54ba08*/
        LOBYTE(v2) = ((GadgetGrid *)((GadgetGrid *)&g_CellClassManager))->InsertItem((int)((unsigned int *)this)[0]); /*0x54ba20*/
      this->unitRepairStations[0] = 1; /*0x54ba25*/
    }
  }
  return (char)v2; /*0x54ba2c*/

}
} // namespace gamemd

// 0x6ABC60
namespace gamemd {
int HouseClass::GetStatus(int aP1)
{

  int v2; // edx

  if ( this == (HouseClass *)15 || this == (HouseClass *)16 ) /*0x6abc68*/
    return 2; /*0x6abcbf*/
  if ( this == (HouseClass *)1 || this == (HouseClass *)40 || this == (HouseClass *)2 || this == (HouseClass *)3 ) /*0x6abc7c*/
    return 3; /*0x6abcb7*/
  if ( this == (HouseClass *)6 || this == (HouseClass *)7 ) /*0x6abc86*/
    return GetHouseTechLevel((int)this, v2) == 5; /*0x6abcb2*/
  if ( this == (HouseClass *)57 || this == (HouseClass *)32 || this == (HouseClass *)31 ) /*0x6abc95*/
    return 1; /*0x6abc9d*/
  return -1; /*0x6abc9a*/

}
} // namespace gamemd
}  // L-fix: close namespace tail 2
}  // L-fix: close namespace tail 2
