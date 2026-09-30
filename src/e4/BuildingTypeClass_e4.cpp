// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/UnitTypeClass_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/BulletTypeClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/BulletClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"

// 0x45DD90
namespace gamemd {
int BuildingTypeClass::ConstructFull(char * Source)
{
  int v4; // eax
  bool v5; // zf
  int v6; // ecx
  unsigned int *v8; // eax
  int v9; // ecx
  unsigned int *v10; // ebp
  unsigned int *v11; // ebp
  unsigned int *v12; // eax
  int v13; // edi
  unsigned int *v15; // eax
  int v16; // edi
  unsigned int *v18; // eax
  int v19; // ecx
  unsigned int *v20; // edi

  ((TechnoTypeClass *)(Source))->ReadINI(0); /*0x45dda1*/
    *((unsigned int *)this + 14304) = -1;
    *((unsigned int *)this + 14320) = 0;
    *((unsigned int *)this + 14336) = 0;
    *((unsigned char *)this + 14352) = 0;
    *((unsigned int *)this + 14368) = 0;
    *((unsigned int *)this + 14384) = unk_89C8D0;
    *((unsigned int *)this + 14400) = unk_89C8D4;
    *((unsigned int *)this + 14416) = unk_89C8D8;
    *((unsigned int *)this + 14432) = unk_89C8D0;
  this->u32_E1C = (gamemd::UnitTypeClass *)(dword_89C8D4);
  this->u32_E20 = (unsigned int)((gamemd::InfantryTypeClass *)(dword_89C8D8));
  this->GateCloseDelay = (int)(0);
    *((unsigned int *)this + 14512) = 0;
    *((unsigned int *)this + 14528) = 5000;
    *((unsigned int *)this + 14544) = 0;
    *((unsigned int *)this + 14560) = 1000000;
  this->LightGreenTint = (void *)(1000000);
  this->LightBlueTint = (unsigned int)(1000000);
  this->PrimaryFirePixelOffset = (unsigned int)(0xFFFF);
  this->u32_E48 = (unsigned int)(0xFFFF);
  this->SecondaryFirePixelOffset = (unsigned int)(0xFFFF);
  this->qE50 = (unsigned int)(0xFFFF);
    *((unsigned int *)this + 14672) = 0;
    *((unsigned int *)this + 14688) = 0;
    *((unsigned int *)this + 14768) = -1;
    *((unsigned int *)this + 14784) = -1;
    *((unsigned int *)this + 14800) = -1;
    *((unsigned int *)this + 14816) = -1;
    *((unsigned int *)this + 14832) = -1;
    *((unsigned int *)this + 14848) = -1;
    *((unsigned int *)this + 14864) = -1;
    *((unsigned int *)this + 14976) = 0;
    *((unsigned int *)this + 14992) = 0;
  this->ExitCoord = (gamemd::SHPStruct *)(0);
    *((unsigned int *)this + 15024) = 0;
    *((unsigned int *)this + 15040) = -1;
    *((unsigned int *)this + 15056) = 3;
    *((unsigned int *)this + 15072) = 0;
    *((unsigned int *)this + 15088) = 0;
    *((unsigned int *)this + 15104) = 0;
    *((unsigned int *)this + 15120) = 0;
    *((unsigned int *)this + 15136) = 0;
    *((unsigned int *)this + 15152) = 0;
    *((unsigned int *)this + 15168) = 0;
    *((unsigned int *)this + 15184) = 0;
    *((unsigned int *)this + 15200) = 0;
    *((unsigned int *)this + 15216) = 128;
    *((unsigned int *)this + 15232) = 0;
    *((unsigned int *)this + 15248) = 0;
    *((unsigned int *)this + 15264) = 0;
    *((unsigned int *)this + 15280) = 0;
    *((unsigned int *)this + 15296) = 0;
    *((unsigned int *)this + 15312) = 2;
    *((unsigned int *)this + 15328) = 2;
    *((unsigned int *)this + 15344) = 0;
    *((unsigned int *)this + 15360) = 0;
    *((unsigned int *)this + 21376) = 0;
    *((unsigned int *)this + 21392) = 0;
    *((unsigned int *)this + 21424) = 0;
    *((unsigned int *)this + 21456) = 0;
    *((unsigned int *)this + 21488) = 0;
    *((unsigned int *)this + 21520) = 0;
    *((unsigned int *)this + 21552) = 0;
    *((unsigned int *)this + 21568) = 0;
    *((unsigned int *)this + 21584) = 0;
    *((unsigned int *)this + 21600) = 0;
    *((unsigned char *)this + 21616) = 0;
    *((unsigned int *)this + 21632) = 0;
    *((unsigned int *)this + 21648) = 0;
    *((unsigned int *)this + 21664) = 0;
    *((unsigned int *)this + 21680) = 0;
    *((unsigned int *)this + 21696) = 0;
    *((unsigned int *)this + 21712) = 0;
    *((unsigned int *)this + 21728) = unk_89C8A0;
    *((unsigned int *)this + 21744) = unk_89C8A4;
    *((unsigned int *)this + 21760) = unk_89C8A8;
  dword_89C8AC = dword_89C8AC; /*0x45dfbb*/
    *((unsigned char *)this + 21816) = 0;
    *((unsigned int *)this + 21776) = v3;
    *((unsigned short *)this + 21792) = 0;
    *((unsigned char *)this + 21800) = 1;
    *((unsigned char *)this + 21804) = 0;
    *((unsigned char *)this + 21808) = 0;
    *((unsigned int *)this + 22624) = 0;
    *((unsigned char *)this + 21812) = 0;
    *((unsigned char *)this + 21820) = 1;
    *((unsigned char *)this + 21824) = 0;
    *((unsigned char *)this + 21828) = 0;
    *((unsigned char *)this + 21832) = 0;
    *((unsigned int *)this + 21840) = -1;
    *((unsigned int *)this + 21856) = 0;
    *((unsigned int *)this + 21872) = 0;
    *((unsigned int *)this + 21888) = 0;
    *((unsigned int *)this + 21904) = 0;
    *((unsigned int *)this + 21920) = 0;
    *((unsigned int *)this + 21936) = 25;
    *((unsigned char *)this + 21952) = 0;
    *((unsigned char *)this + 21956) = 0;
    *((unsigned char *)this + 21960) = 0;
    *((unsigned char *)this + 21964) = 0;
    *((unsigned char *)this + 21968) = 0;
    *((unsigned char *)this + 21972) = 0;
    *((unsigned char *)this + 21976) = 0;
    *((unsigned char *)this + 21980) = 1;
    *((unsigned char *)this + 21984) = 0;
    *((unsigned char *)this + 21988) = 0;
    *((unsigned char *)this + 21992) = 1;
    *((unsigned char *)this + 21996) = 0;
    *((unsigned char *)this + 22000) = 0;
    *((unsigned int *)this + 22016) = 0;
    *((unsigned char *)this + 22032) = 1;
    *((unsigned int *)this + 22640) = 0;
    *((unsigned int *)this + 22656) = -1;
    *((unsigned char *)this + 23184) = 0;
    *((unsigned char *)this + 23188) = 0;
    *((unsigned char *)this + 23192) = 0;
    *((unsigned char *)this + 23196) = 0;
    *((unsigned char *)this + 23200) = 0;
    *((unsigned char *)this + 23204) = 0;
    *((unsigned char *)this + 23208) = 0;
    *((unsigned char *)this + 23212) = 0;
    *((unsigned char *)this + 23216) = 0;
    *((unsigned char *)this + 23220) = 0;
    *((unsigned char *)this + 23224) = 0;
    *((unsigned char *)this + 23228) = 0;
    *((unsigned char *)this + 23232) = 0;
    *((unsigned char *)this + 23236) = 0;
    *((unsigned char *)this + 23240) = 0;
    *((unsigned char *)this + 23244) = 0;
    *((unsigned char *)this + 23248) = 0;
    *((unsigned char *)this + 23252) = 1;
    *((unsigned char *)this + 23256) = 0;
    *((unsigned char *)this + 23260) = 0;
    *((unsigned char *)this + 23264) = 0;
    *((unsigned char *)this + 23268) = 0;
    *((unsigned char *)this + 23272) = 0;
    *((unsigned char *)this + 23276) = 0;
    *((unsigned char *)this + 23280) = 0;
    *((unsigned char *)this + 23284) = 0;
    *((unsigned char *)this + 23288) = 0;
    *((unsigned char *)this + 23292) = 0;
    *((unsigned char *)this + 23296) = 0;
    *((unsigned char *)this + 23300) = 0;
    *((unsigned char *)this + 23304) = 0;
    *((unsigned char *)this + 23308) = 0;
    *((unsigned char *)this + 23312) = 0;
    *((unsigned char *)this + 23316) = 0;
    *((unsigned char *)this + 23320) = 0;
    *((unsigned char *)this + 23324) = 0;
    *((unsigned char *)this + 23328) = 0;
    *((unsigned char *)this + 23332) = 0;
    *((unsigned char *)this + 23336) = 0;
    *((unsigned char *)this + 23340) = 0;
    *((unsigned char *)this + 23344) = 0;
    *((unsigned char *)this + 23348) = 0;
    *((unsigned int *)this + 23360) = 1065353216;
    *((unsigned int *)this + 23376) = 1065353216;
    *((unsigned int *)this + 23392) = 1065353216;
    *((unsigned int *)this + 23408) = 1065353216;
    *((unsigned int *)this + 23424) = 1065353216;
    *((unsigned char *)this + 23440) = 0;
    *((unsigned char *)this + 23444) = 0;
    *((unsigned char *)this + 23448) = 0;
    *((unsigned int *)this + 23456) = 1148829696;
    *((unsigned int *)this + 23472) = 0;
    *((unsigned int *)this + 23488) = -1;
    *((unsigned int *)this + 23504) = -1;
    *((unsigned int *)this + 23520) = 9;
    *((unsigned int *)this + 23536) = -1;
    *((unsigned char *)this + 23552) = 0;
    *((unsigned char *)this + 23556) = 0;
    *((unsigned char *)this + 23560) = 0;
    *((unsigned char *)this + 23564) = 0;
    *((unsigned char *)this + 23568) = 1;
    *((unsigned char *)this + 23572) = 0;
  this->IsBaseDefense = (unsigned int)(0);
    *((unsigned char *)this + 23580) = 20;
  this->ConcentricRadialIndicator = (gamemd::UnitTypeClass *)(0);
  this->PsychicDetectionRadius = (unsigned int)(0);
  this->BarrelStartPitch = (unsigned int)(64);
  this->DemandLoad = (unsigned int)(0);
  this->DemandLoadBuildup = (unsigned int)(0);
  this->FreeBuildup = (unsigned int)(0);
  this->IsThreatRatingNode = (unsigned int)(0);
  this->PrimaryFireDualOffset = (unsigned int)(0);
  this->ProtectWithWall = (unsigned int)(0);
  this->CanHideThings = (unsigned int)(1);
  this->CrateBeneath = (unsigned int)(0);
  this->LeaveRubble = (unsigned int)(0);
  this->CrateBeneathIsMoney = (unsigned int)(0);
    *((unsigned int *)this + 24064) = 1;
    *((unsigned int *)this + 24096) = 0;
    *((unsigned int *)this + 24112) = 1;
    *((unsigned char *)this + 24128) = 1;
    *((unsigned char *)this + 24132) = 0;
    *((unsigned int *)this + 24080) = &vt_VectorClass_TPoint3D_int;
  this->PreventsPlacementOverlap = RA2_OPNEW(0xCu); /*0x45e2ba*/
    *((unsigned char *)this + 24132) = 1;
  *(unsigned int *)this = (void*)&BuildingTypeClass_vftable; /*0x45e2cd*/
    *((unsigned int *)this + 16) = &BuildingTypeClass::`vftable';
    *((unsigned int *)this + 32) = &BuildingTypeClass::`vftable';
    *((unsigned int *)this + 48) = &vt_BuildingTypeClass;
  this->vtable2.GenerateUniqueID(); /*0x45e2e8*/
  v4 = dword_A83C78; /*0x45e2ed*/
  if ( dword_A83C78 < dword_A83C70 /*0x45e32b*/
    || (byte_A83C75 || !dword_A83C70)
    && dword_A83C7C > 0
    && (v5 = (*(uint8_t (**)(int *, int, unsigned int))(dword_A83C68 + 8))(
               &dword_A83C68,
               dword_A83C7C + dword_A83C70,
               0) == 0,
        v4 = dword_A83C78,
        !v5) )
  {
    dword_A83C78 = (unsigned int)(v4 + 1);
    *((unsigned int *)dword_A83C6C + v4) = this; /*0x45e33a*/
    v4 = dword_A83C78; /*0x45e33d*/
  }
  v6 = 0; /*0x45e342*/
  if ( v4 <= 0 ) /*0x45e346*/
  {
  LABEL_11:
    v6 = -1; /*0x45e35a*/
  }
  else
  {
    dword_A83C6C = dword_A83C6C; /*0x45e348*/
    while ( *(unsigned int *)(dword_A83C6C) != (unsigned int)(this) ) /*0x45e350*/
    {
      ++v6; /*0x45e352*/
      ++dword_A83C6C; /*0x45e353*/
      if ( v6 >= v4 ) /*0x45e358*/
        goto LABEL_11; /*0x45e358*/
    }
  }
  this->ArrayIndex = (unsigned int)((void *)(v6));
    *((unsigned int *)this + 15376) = 0;
    *((unsigned int *)this + 15392) = 1;
    *((unsigned int *)this + 15408) = 0;
    *((unsigned int *)this + 15424) = 0;
    *((unsigned int *)this + 15440) = 1;
    *((unsigned int *)this + 15456) = 0;
    *((unsigned int *)this + 15472) = 0;
    *((unsigned int *)this + 15488) = 1;
    *((unsigned int *)this + 15504) = 0;
    *((unsigned int *)this + 15568) = 0;
    *((unsigned int *)this + 15584) = 1;
    *((unsigned int *)this + 15600) = 0;
    *((unsigned int *)this + 15616) = 0;
    *((unsigned int *)this + 15632) = 1;
    *((unsigned int *)this + 15648) = 0;
  v8 = (unsigned int *)(&this->q6242); /*0x45e3be*/
  v9 = 21; /*0x45e3c4*/
  do /*0x45e414*/
  {
    v10 = v8 - 4; /*0x45e3c9*/
    *v10 = 0; /*0x45e3ce*/
    v10[1] = 0; /*0x45e3d1*/
    v10[2] = 0; /*0x45e3d4*/
    v10[3] = 0; /*0x45e3d7*/
    *v8 = 0; /*0x45e3dc*/
    v8[1] = 0; /*0x45e3df*/
    v8[2] = 0; /*0x45e3e2*/
    v8[3] = 0; /*0x45e3e5*/
    v11 = v8 + 4; /*0x45e3e8*/
    v8 += 17; /*0x45e3eb*/
    --v9; /*0x45e3ee*/
    *v11 = 0; /*0x45e3ef*/
    v11[1] = 0; /*0x45e3f2*/
    v11[2] = 0; /*0x45e3f5*/
    v11[3] = 0; /*0x45e3f8*/
    *(v8 - 9) = 0; /*0x45e3fb*/
    *(v8 - 8) = 0; /*0x45e3fe*/
    *(v8 - 7) = 0; /*0x45e401*/
    *(v8 - 6) = 0; /*0x45e404*/
    *((unsigned char *)v8 - 20) = 1; /*0x45e407*/
    *((unsigned char *)v8 - 19) = 0; /*0x45e40b*/
    *((unsigned char *)v8 - 18) = 0; /*0x45e40e*/
    *((unsigned char *)v8 - 17) = 0; /*0x45e411*/
  }
  while ( v9 ); /*0x45e414*/
    *((unsigned char *)this + 14704) = 0;
    *((unsigned char *)this + 14880) = 0;
    *((unsigned char *)this + 23976) = 0;
    *((unsigned char *)this + 23632) = 0;
    *((unsigned char *)this + 12856) = 0;
    *((unsigned char *)this + 21408) = 0;
    *((unsigned char *)this + 21440) = 0;
    *((unsigned char *)this + 21472) = 0;
    *((unsigned char *)this + 21504) = 0;
    *((unsigned char *)this + 21536) = 0;
  v12 = (unsigned int *)(&this->u32_89C2); /*0x45e452*/
  v13 = 10; /*0x45e458*/
  do /*0x45e472*/
  {
    dword_89C8D4 = dword_89C8D4; /*0x45e463*/
    *v12 = dword_89C8D0; /*0x45e469*/
    v12[1] = dword_89C8D4; /*0x45e46b*/
    v12 += 2; /*0x45e46e*/
    --v13; /*0x45e471*/
  }
  while ( v13 ); /*0x45e472*/
  v15 = (unsigned int *)(&this->u32_8BC2); /*0x45e474*/
  v16 = 8; /*0x45e47a*/
  do /*0x45e494*/
  {
    dword_89C8D4 = dword_89C8D4; /*0x45e485*/
    *v15 = dword_89C8D0; /*0x45e48b*/
    v15[1] = dword_89C8D4; /*0x45e48d*/
    v15 += 2; /*0x45e490*/
    --v16; /*0x45e493*/
  }
  while ( v16 ); /*0x45e494*/
  v18 = (unsigned int *)(&this->u32_8F42); /*0x45e49b*/
  v19 = 8; /*0x45e4a7*/
  do /*0x45e4c4*/
  {
    *(v18 - 16) = 0xFFFF; /*0x45e4ac*/
    *(v18 - 15) = 0xFFFF; /*0x45e4b4*/
    *v18 = 0xFFFF; /*0x45e4b7*/
    v18[1] = 0xFFFF; /*0x45e4bd*/
    v18 += 2; /*0x45e4c0*/
    --v19; /*0x45e4c3*/
  }
  while ( v19 ); /*0x45e4c4*/
  v20 = *(unsigned int **)(&this->q9684); /*0x45e4c6*/
  *v20 = 0; /*0x45e4d2*/
  v20[1] = 0; /*0x45e4d6*/
  v20[2] = 0; /*0x45e4d9*/
    *((unsigned char *)this + 13524) = 1;
    *((unsigned char *)this + 13528) = 1;
    *((unsigned char *)this + 13548) = 0;
    *((unsigned char *)this + 13536) = 0;
    *((unsigned char *)this + 13916) = 0;
    *((unsigned char *)this + 13912) = 0;
    *((unsigned char *)this + 13496) = 0;
  return this; /*0x45e508*/
}
} // namespace gamemd
// 0x45E520
namespace gamemd {
unsigned int * BuildingTypeClass::loadBuildingProperty_b_545E520(ObjectTypeClass * aP1)
{
  ((TechnoTypeClass *)(aP1))->Construct(); /*0x45e528*/
    *((unsigned int *)this + 3584) = 0;
  *(unsigned int *)&this-((unsigned int *)(>__pad_1714))[116] = 0; /*0x45e535*/
  *(unsigned int *)&this-((unsigned int *)(>__pad_1714))[120] = 0; /*0x45e53b*/
  this-((unsigned int *)(>__pad_1714))[124] = 1; /*0x45e541*/
  this-((unsigned int *)(>__pad_1714))[125] = 0; /*0x45e548*/
  *(unsigned int *)&this-((unsigned int *)(>__pad_1714))[112] = (void*)&VectorClass_TPoint3D_int_vftable; /*0x45e54e*/
    *this = &BuildingTypeClass::`vftable';
    *((unsigned int *)this + 4) = &BuildingTypeClass::`vftable';
    *((unsigned int *)this + 8) = &BuildingTypeClass::`vftable';
    *((unsigned int *)this + 12) = &vt_BuildingTypeClass;
    return this;
}
} // namespace gamemd
// 0x45E580
namespace gamemd {
AbstractClass * * BuildingTypeClass::CleanupMembers(AbstractClass * a1, AbstractClass * a2)
{
  char BuildupLoaded; // al
  int v3; // eax
  void *v4; // eax
  BuildingTypeClass *v6; // [esp+8h] [ebp-4h] BYREF

  BuildupLoaded = this->BuildupLoaded; /*0x45e587*/
    *(unsigned int *)a1->__pad_0 = &BuildingTypeClass::`vftable';
  *(void **)&this->vtable2 = (void*)&BuildingTypeClass_vftable; /*0x45e595*/
  *(void **)&this->vtable3 = (void*)&BuildingTypeClass_vftable; /*0x45e59c*/
  *(void **)&this->vtable4 = (void*)&BuildingTypeClass_vftable; /*0x45e5a3*/
  if ( BuildupLoaded && this->Buildup[0] ) /*0x45e5ac*/
  {
    RA2_OPDEL((void *)this->Buildup[0]); /*0x45e5b7*/
    this->Buildup[0] = 0; /*0x45e5bf*/
    this->BuildupLoaded = 0; /*0x45e5c5*/
  }
  if ( this->BibShape && *(unsigned int *)&this->BibShape ) /*0x45e5d3*/
  {
    RA2_OPDEL(*(void **)&this->__pad_F70[1448]); /*0x45e5de*/
    *(unsigned int *)&this->BibShape = 0; /*0x45e5e6*/
    this-((unsigned int *)(>__pad_F70))[1452] = 0; /*0x45e5ec*/
  }
  if ( this->q14E4 && *(unsigned int *)&this->q14E4 ) /*0x45e5fa*/
  {
    RA2_OPDEL(*(void **)&this->__pad_F70[1396]); /*0x45e605*/
    *(unsigned int *)&this->q14E4 = 0; /*0x45e60d*/
    this-((unsigned int *)(>__pad_F70))[1400] = 0; /*0x45e613*/
  }
  if ( this->q14EC && *(unsigned int *)&this->q14EC ) /*0x45e621*/
  {
    RA2_OPDEL(*(void **)&this->__pad_F70[1404]); /*0x45e62c*/
    *(unsigned int *)&this->q14EC = 0; /*0x45e634*/
    this-((unsigned int *)(>__pad_F70))[1408] = 0; /*0x45e63a*/
  }
  if ( this->q14F4 && *(unsigned int *)&this->q14F4 ) /*0x45e648*/
  {
    RA2_OPDEL(*(void **)&this->__pad_F70[1412]); /*0x45e653*/
    *(unsigned int *)&this->q14F4 = 0; /*0x45e65b*/
    this-((unsigned int *)(>__pad_F70))[1416] = 0; /*0x45e661*/
  }
  if ( this->RoofDeployingAnim && *(unsigned int *)&this->RoofDeployingAnim ) /*0x45e66f*/
  {
    RA2_OPDEL(*(void **)&this->__pad_F70[1420]); /*0x45e67a*/
    *(unsigned int *)&this->RoofDeployingAnim = 0; /*0x45e682*/
    this-((unsigned int *)(>__pad_F70))[1424] = 0; /*0x45e688*/
  }
  if ( this->UnderRoofDoorAnim && *(unsigned int *)&this->UnderRoofDoorAnim ) /*0x45e696*/
  {
    RA2_OPDEL(*(void **)&this->__pad_F70[1428]); /*0x45e6a1*/
    *(unsigned int *)&this->UnderRoofDoorAnim = 0; /*0x45e6a9*/
    this-((unsigned int *)(>__pad_F70))[1432] = 0; /*0x45e6af*/
  }
    AbstractClass::AnnounceExpiredPointer(a1, a2);
  v6 = this; /*0x45e6ce*/
  v3 = (*(int (**)(unsigned int *, BuildingTypeClass **))(dword_A83C68 + 16))(&dword_A83C68, &v6); /*0x45e6d2*/
  if ( v3 != -1 && v3 < dword_A83C78 && v3 < --dword_A83C78 ) /*0x45e6ed*/
  {
    do /*0x45e705*/
    {
      ++v3; /*0x45e6f5*/
      *((unsigned int *)dword_A83C6C + v3 - 1) = *((unsigned int *)dword_A83C6C + v3); /*0x45e6f9*/
    }
    while ( v3 < dword_A83C78 ); /*0x45e705*/
  }
    v4 = *(SHPStruct **)&a1[167].__pad_0[12];
  *(unsigned int *)&this-((unsigned int *)(>__pad_1714))[112] = (void*)&VectorClass_TPoint3D_int_vftable; /*0x45e70d*/
    if ( v4 && BYTE1(a1[167].abstractFlags) )
  {
    RA2_OPDEL(v4); /*0x45e724*/
        *(unsigned int *)&a1[167].__pad_0[12] = 0;
  }
  this-((unsigned int *)(>__pad_1714))[125] = 0; /*0x45e734*/
  *(unsigned int *)&this-((unsigned int *)(>__pad_1714))[120] = 0; /*0x45e73a*/
    return TechnoTypeClass::DTOR((int)a1);
}
} // namespace gamemd
// 0x45E970
namespace gamemd {
AbstractClass * * BuildingTypeClass::LoadRepairAnimations()
{
  int v1; // ecx
  int v2; // edi
  int v3; // ebp
  int v4; // esi
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  unsigned int *v8; // esi
  int v9; // [esp+10h] [ebp-204h]
  char Buffer[512]; // [esp+14h] [ebp-200h] BYREF

  v1 = (int)(v1);
  ProcessDataCCFileClass(); /*0x45e97c*/
  FileSystem_POWEROFF_SHP = SearchMIXFile(aPoweroffShp, 0); /*0x45e994*/
  FileSystem_WRENCH_SHP = SearchMIXFile(aWrenchShp, 0); /*0x45e99e*/
  v3 = 0; /*0x45e9aa*/
  v9 = 0; /*0x45e9ae*/
  if ( g_TriggerClassCount > 0 ) /*0x45e9b2*/
  {
    do /*0x45eb42*/
    {
      v4 = *((unsigned int *)g_TriggerTypeCount + v3); /*0x45e9c1*/
      if ( v9 <= *(char *)(v4 + 5895) ) /*0x45e9cd*/
        v9 = *(char *)(v4 + 5895); /*0x45e9cf*/
      if ( v4->q22C ) /*0x45e9d3*/
      {
        if ( v4->q1760 ) /*0x45e9df*/
        {
          if ( v4->q0A4 ) /*0x45ea23*/
          {
            RA2_OPDEL(v4->q0A4); /*0x45ea2e*/
            v4->q0A4 = 0; /*0x45ea36*/
            v4->ImageAllocated = 0; /*0x45ea3c*/
          }
        }
        else
        {
          _makepath(Buffer, 0, 0, (const char *)(v4 + 504), (const char *)&off_7E1BC6 + 112 * v1); /*0x45ea08*/
          v4->q0A4 = SearchMIXFile(Buffer, 0); /*0x45ea1b*/
        }
        if ( v4->q1761 ) /*0x45ea42*/
        {
          if ( v4->qE00 ) /*0x45ea86*/
          {
            RA2_OPDEL(v4->qE00); /*0x45ea91*/
            v4->qE00 = 0; /*0x45ea99*/
            v4->qE04 = 0; /*0x45ea9f*/
          }
        }
        else
        {
          _makepath(Buffer, 0, 0, (const char *)(v4 + 3676), (const char *)&off_7E1BC6 + 112 * v1); /*0x45ea6b*/
          v4->qE00 = SearchMIXFile(Buffer, 0); /*0x45ea7e*/
        }
        v5 = v4->qE00; /*0x45eaa5*/
        if ( v5 ) /*0x45eaad*/
        {
          v6 = *(int16_t *)(v5 + 6); /*0x45eab3*/
          v7 = 1; /*0x45eab9*/
          if ( v6 ) /*0x45eabe*/
            v7 = 75 / v6; /*0x45eac6*/
          v4->qF04 = 0; /*0x45eac8*/
          v4->qF08 = v6; /*0x45eace*/
          *(unsigned int *)&v4->qF0C = v7; /*0x45ead4*/
        }
      }
      else if ( v4->q237 ) /*0x45eadc*/
      {
        if ( v4->q1760 && v4->q0A4 ) /*0x45eaec*/
        {
          RA2_OPDEL(v4->q0A4); /*0x45eaf7*/
          v4->q0A4 = 0; /*0x45eaff*/
          v4->ImageAllocated = 0; /*0x45eb05*/
        }
        if ( v4->q1761 && v4->qE00 ) /*0x45eb13*/
        {
          RA2_OPDEL(v4->qE00); /*0x45eb1e*/
          v4->qE00 = 0; /*0x45eb26*/
          v4->qE04 = 0; /*0x45eb2c*/
        }
        BuildingTypeClass::LoadAnimations(v4, v1); /*0x45eb35*/
      }
      ++v3; /*0x45eb3f*/
    }
    while ( v3 < g_TriggerClassCount ); /*0x45eb42*/
    if ( v9 ) /*0x45eb4c*/
    {
      if ( dword_89DDC0 ) /*0x45eb56*/
        (**(void (***)(int, int))dword_89DDC0)(dword_89DDC0, 1); /*0x45eb5c*/
      v8 = operator new(0x20u); /*0x45eb65*/
      if ( v8 ) /*0x45eb6c*/
      {
        v8[3] = (unsigned int)(0);
        *v8 = (unsigned int)(&XSurface_Vtable);
        v8[1] = (unsigned int)(v9 + 16);
        v8[2] = (unsigned int)(v9 + 16);
        v8[4] = (unsigned int)(1);
        Buffer::Init(v8 + 5, 0, (v9 + 16) * (v9 + 16)); /*0x45eb95*/
        *v8 = &BSurface_Vtable; /*0x45eb9a*/
        dword_89DDC0 = (int)v8; /*0x45eba0*/
      }
      else
      {
        dword_89DDC0 = 0; /*0x45ebb1*/
      }
    }
  }
}
} // namespace gamemd
// 0x45F230
namespace gamemd {
void* BuildingTypeClass::LoadAnimations(ObjectTypeClass * aP1)
{
  AbstractClass ** v3;
  int v4; // ecx
  int v5; // esi
  unsigned char *v6; // esi
  void *SHP; // eax
  unsigned char *v8; // esi
  void *v9; // eax
  AbstractClass ** v10;
  unsigned char *v11; // esi
  void *v12; // eax
  unsigned char *v13; // esi
  void *v14; // eax
  unsigned char *v15; // esi
  void *v16; // eax
  AbstractClass ** v17;
  unsigned char *v18; // esi
  void *v19; // eax
  const char *v20; // edi
  int v21; // eax
  int v23; // [esp+10h] [ebp-158h]
  char Filename[64]; // [esp+14h] [ebp-154h] BYREF
  char Ext[16]; // [esp+54h] [ebp-114h] BYREF
  char Source[260]; // [esp+64h] [ebp-104h] BYREF

    if ( !*((unsigned char *)this + 23940) && strlen((const char *)((char *)this + 14704)) )
  {
    _makepath(Source, 0, 0, (const char *)(&this->q16F6), ::Ext); /*0x45f26f*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f282*/
    v3 = SearchMIXFile(Source, 0); /*0x45f28d*/
    if ( !v3 ) /*0x45f294*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f29a*/
      v3 = SearchMIXFile(Source, 0); /*0x45f2a5*/
    }
    this->qE00 = (unsigned int)(v3);
    if ( v3 ) /*0x45f2b2*/
    {
      v4 = 1; /*0x45f2bb*/
      v5 = v3->nextArrayIndex / 2; /*0x45f2c8*/
      v23 = v5; /*0x45f2cc*/
            if ( *((unsigned char *)this + 23260) )
      {
                v5 = *((unsigned int *)this + 23520) + 1;
        v23 = v5; /*0x45f2d9*/
      }
      if ( v5 > 0 ) /*0x45f2df*/
        v4 = Math::RoundToInt(*((double *)g_RulesClass_Instance + 675) * 900.0 / (double)v23); /*0x45f2fc*/
            *((unsigned int *)this + 15376) = 0;
            *((unsigned int *)this + 15392) = v5;
            *((unsigned int *)this + 15408) = v4;
    }
  }
  INIClass::GetString( /*0x45f32d*/
    (uint8_t ***)&CCINIClass_INI_Art,
    (uint8_t *)(&this->u32_C84),
    (uint8_t *)aDeployinganim,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f336*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f357*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f36a*/
        v6 = (unsigned char *)((char *)this + 21408);
        if ( *((unsigned char *)this + 21408) && *((unsigned int *)this + 21392) )
    {
      RA2_OPDEL(*(void **)(&this->q8588)); /*0x45f38a*/
            *((unsigned int *)this + 21392) = 0;
      *v6 = 0; /*0x45f398*/
    }
        FileSHP = LoadFileSHP(Source, (bool *)((char *)this + 21408));
        *((unsigned int *)this + 21392) = FileSHP;
    if ( !SHP ) /*0x45f3ad*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f3b3*/
            if ( *v6 && *((unsigned int *)this + 21392) )
      {
        RA2_OPDEL(*(void **)(&this->q8588)); /*0x45f3c7*/
                *((unsigned int *)this + 21392) = 0;
        *v6 = 0; /*0x45f3d5*/
      }
            *((unsigned int *)this + 21392) = LoadFileSHP(Source, (bool *)((char *)this + 21408));
    }
  }
  INIClass::GetString( /*0x45f405*/
    (uint8_t ***)&CCINIClass_INI_Art,
    (uint8_t *)(&this->u32_C84),
    (uint8_t *)aRoofdeployinga,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f40e*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f42f*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f442*/
        v8 = (unsigned char *)((char *)this + 21504);
        if ( *((unsigned char *)this + 21504) && *((unsigned int *)this + 21488) )
    {
      RA2_OPDEL(*(void **)(&this->q8642)); /*0x45f462*/
            *((unsigned int *)this + 21488) = 0;
      *v8 = 0; /*0x45f470*/
    }
    v9 = (void *)((unsigned int)(LoadFileSHP(Source, (bool *)(&this->q8646))));
    this->q14FC = (unsigned int)(v9);
    if ( !v9 ) /*0x45f485*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f48b*/
            if ( *v8 && *((unsigned int *)this + 21488) )
      {
        RA2_OPDEL(*(void **)(&this->q8642)); /*0x45f49f*/
                *((unsigned int *)this + 21488) = 0;
        *v8 = 0; /*0x45f4ad*/
      }
      this->q14FC = (unsigned int)(LoadFileSHP(Source, (bool *)(&this->q85C2)));
    }
  }
  INIClass::GetString( /*0x45f4e1*/
    (uint8_t ***)&CCINIClass_INI_Art,
    (uint8_t *)(&this->u32_C84),
    (uint8_t *)aDooranim,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f4ea*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f507*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f51a*/
    v10 = SearchMIXFile(Source, 0); /*0x45f525*/
        *((unsigned int *)this + 21552) = v10;
    if ( !v10 ) /*0x45f532*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f538*/
            *((unsigned int *)this + 21552) = SearchMIXFile(Source, 0);
    }
  }
  INIClass::GetString( /*0x45f565*/
    (uint8_t ***)&CCINIClass_INI_Art,
    (uint8_t *)(&this->u32_C84),
    (uint8_t *)aUnderdooranim,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f56e*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f58f*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f5a2*/
        v11 = (unsigned char *)((char *)this + 21440);
        if ( *((unsigned char *)this + 21440) && *((unsigned int *)this + 21424) )
    {
      RA2_OPDEL(*(void **)(&this->q85C6)); /*0x45f5c2*/
            *((unsigned int *)this + 21424) = 0;
      *v11 = 0; /*0x45f5d0*/
    }
        v12 = LoadFileSHP(Source, (bool *)((char *)this + 21440));
        *((unsigned int *)this + 21424) = v12;
    if ( !v12 ) /*0x45f5e5*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f5eb*/
            if ( *v11 && *((unsigned int *)this + 21424) )
      {
        RA2_OPDEL(*(void **)(&this->q85C6)); /*0x45f5ff*/
                *((unsigned int *)this + 21424) = 0;
        *v11 = 0; /*0x45f60d*/
      }
            *((unsigned int *)this + 21424) = SearchMIXFile(Source, 0);
    }
  }
    v13 = (unsigned char *)((char *)this + 21472);
    if ( *((unsigned char *)this + 21472) && *((unsigned int *)this + 21456) )
  {
    RA2_OPDEL(*(void **)(&this->q8604)); /*0x45f63b*/
        *((unsigned int *)this + 21456) = 0;
    *v13 = 0; /*0x45f649*/
  }
  INIClass::GetString( /*0x45f668*/
    (uint8_t ***)&CCINIClass_INI_Art,
    (uint8_t *)(&this->u32_C84),
    (uint8_t *)aRubble,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f671*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f68e*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f6a1*/
        v14 = LoadFileSHP(Source, (bool *)((char *)this + 21472));
        *((unsigned int *)this + 21456) = v14;
    if ( !v14 ) /*0x45f6b9*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f6bf*/
            if ( *v13 && *((unsigned int *)this + 21456) )
      {
        RA2_OPDEL(*(void **)(&this->q8604)); /*0x45f6d3*/
                *((unsigned int *)this + 21456) = 0;
        *v13 = 0; /*0x45f6e1*/
      }
            *((unsigned int *)this + 21456) = SearchMIXFile(Source, 0);
    }
  }
  INIClass::GetString( /*0x45f711*/
    (uint8_t ***)&CCINIClass_INI_Art,
    (uint8_t *)(&this->u32_C84),
    (uint8_t *)aUnderroofdoora,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f71a*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f73b*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f74e*/
        v15 = (unsigned char *)((char *)this + 21536);
        if ( *((unsigned char *)this + 21536) && *((unsigned int *)this + 21520) )
    {
      RA2_OPDEL(*(void **)(&this->q8680)); /*0x45f76e*/
            *((unsigned int *)this + 21520) = 0;
      *v15 = 0; /*0x45f77c*/
    }
    v16 = (void *)((unsigned int)(LoadFileSHP(Source, (bool *)(&this->q8684))));
    this->q1504 = (unsigned int)(v16);
    if ( !v16 ) /*0x45f791*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f797*/
            if ( *v15 && *((unsigned int *)this + 21520) )
      {
        RA2_OPDEL(*(void **)(&this->q8680)); /*0x45f7ab*/
                *((unsigned int *)this + 21520) = 0;
        *v15 = 0; /*0x45f7b9*/
      }
      this->q1504 = (unsigned int)(SearchMIXFile(Source, 0));
    }
  }
  INIClass::GetString( /*0x45f7e9*/
    (uint8_t ***)&CCINIClass_INI_Art,
    (uint8_t *)(&this->u32_C84),
    (uint8_t *)aSpecialzoverla,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f7f2*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f80f*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f822*/
    v17 = SearchMIXFile(Source, 0); /*0x45f82d*/
        *((unsigned int *)this + 21568) = v17;
    if ( !v17 ) /*0x45f83a*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f840*/
            *((unsigned int *)this + 21568) = SearchMIXFile(Source, 0);
    }
  }
  INIClass::GetString( /*0x45f86d*/
    (uint8_t ***)&CCINIClass_INI_Art,
    (uint8_t *)(&this->u32_C84),
    (uint8_t *)aBibshape,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f876*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f897*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f8aa*/
        v18 = (unsigned char *)((char *)this + 21616);
        if ( *((unsigned char *)this + 21616) && *((unsigned int *)this + 21600) )
    {
      RA2_OPDEL(*(void **)(&this->q8700)); /*0x45f8ca*/
            *((unsigned int *)this + 21600) = 0;
      *v18 = 0; /*0x45f8d8*/
    }
        v19 = LoadFileSHP(Source, (bool *)((char *)this + 21616));
        *((unsigned int *)this + 21600) = v19;
    if ( !v19 ) /*0x45f8ed*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f8f3*/
            if ( *v18 && *((unsigned int *)this + 21600) )
      {
        RA2_OPDEL(*(void **)(&this->q8700)); /*0x45f907*/
                *((unsigned int *)this + 21600) = 0;
        *v18 = 0; /*0x45f915*/
      }
            *((unsigned int *)this + 21600) = SearchMIXFile(Source, 0);
    }
  }
  INIClass::GetString( /*0x45f945*/
    (uint8_t ***)&CCINIClass_INI_Art,
    (uint8_t *)(&this->u32_C84),
    (uint8_t *)g_INI_Key_Image,
    &g_INI_DefaultBuffer,
    Filename,
    64);
    if ( !*((unsigned char *)this + 2224) || aP1 == (ObjectTypeClass *)-1 )
    v20 = ::Ext; /*0x45f97a*/
  else
    v20 = (const char *)(&off_7E1BC6 + 28 * aP1); /*0x45f96e*/
  strcpy(Ext, v20); /*0x45f993*/
  if ( strlen(Filename) ) /*0x45f9a2*/
    _makepath(Source, 0, 0, Filename, Ext); /*0x45f9bd*/
  else
    _makepath(Source, 0, 0, (const char *)(&this->u32_C84), Ext); /*0x45f9cd*/
  TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f9e0*/
    strncpy((char *)((char *)this + 23976), Source, 0x13u);
    if ( !*((unsigned char *)this + 23936) )
  {
    v21 = SearchMIXFile(Source, 0); /*0x45fa0b*/
        *((unsigned int *)this + 656) = v21;
    if ( !v21 ) /*0x45fa18*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45fa1e*/
            strncpy((char *)((char *)this + 23976), Source, 0x13u);
            *((unsigned int *)this + 656) = SearchMIXFile(Source, 0);
    }
        if ( !*((unsigned int *)this + 656) )
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45fa50*/
            strncpy((char *)((char *)this + 23976), Source, 0x13u);
            *((unsigned int *)this + 656) = SearchMIXFile(Source, 0);
    }
  }
// 0x45fa90
  return BuildingTypeClass::LoadVoxel(); /*0x45fa7d*/
}
} // namespace gamemd
// 0x45FA90
namespace gamemd {
void BuildingTypeClass::LoadVoxel()
{
  char *v2; // eax
  void *v3; // esi
  File *v4; // eax
  unsigned int *FileVXL; // eax
  void *v6; // esi
  File *v7; // eax
  unsigned int *FileHVA; // eax
  int Info; // eax
  char *v10; // eax
  char *v11; // eax
  unsigned char *v12; // eax
  void *v13; // esi
  File *v14; // eax
  unsigned int *v15; // eax
  void *v16; // esi
  File *v17; // eax
  unsigned int *v18; // eax
  int v19; // eax
  char *v20; // [esp-Ch] [ebp-2D8h]
  char *v21; // [esp-Ch] [ebp-2D8h]
  CCFileClass v22; // [esp+8h] [ebp-2C4h] BYREF
  int v23[3]; // [esp+60h] [ebp-26Ch] BYREF
  int v24; // [esp+6Ch] [ebp-260h]
  CCFileClass v25; // [esp+74h] [ebp-258h] BYREF
  int v26[3]; // [esp+CCh] [ebp-200h] BYREF
  int v27; // [esp+D8h] [ebp-1F4h]
  CCFileClass v28; // [esp+E0h] [ebp-1ECh] BYREF
  int v29[3]; // [esp+138h] [ebp-194h] BYREF
  int v30; // [esp+144h] [ebp-188h]
  char Destination[4]; // [esp+14Ch] [ebp-180h] BYREF
  char v32[124]; // [esp+150h] [ebp-17Ch] BYREF
  char Buffer[4]; // [esp+1CCh] [ebp-100h] BYREF
  char String[252]; // [esp+1D0h] [ebp-FCh] BYREF

    if ( *((unsigned char *)this + 23316) || *((unsigned char *)this + 23320) )
  {
    strcpy(Destination, &this->__pad_F70[576]); /*0x45fadf*/
    _makepath(Buffer, 0, 0, Destination, g_Str_File__VXL); /*0x45faf3*/
    v20 = _strupr(off_8194A8); /*0x45fb05*/
    v2 = _strupr(String); /*0x45fb0e*/
    if ( strstr(v2, v20) ) /*0x45fb17*/
    {
      CCFileClass::Construct(&v25, Buffer); /*0x45fb3b*/
      if ( (uint8_t)CCFileClass::Open(&v25, 0) ) /*0x45fb48*/
      {
                v3 = *(void **)((char *)this + 736);
        if ( v3 ) /*0x45fb5d*/
        {
                    WaveClass::Destroy(*((unsigned int *)this + 736));
          RA2_OPDEL(v3); /*0x45fb67*/
        }
        v4 = (File *)RA2_OPNEW(0x1Cu); /*0x45fb71*/
        if ( v4 ) /*0x45fb7b*/
          FileVXL = File::LoadFileVXL(v4, (int)&v25, 0); /*0x45fb85*/
        else
          FileVXL = 0; /*0x45fb8c*/
                *((unsigned int *)this + 736) = File;
        _makepath(Buffer, 0, 0, Destination, g_Str_File__HVA); /*0x45fbab*/
        CCFileClass::Construct(&v22, Buffer); /*0x45fbbf*/
                v6 = *(void **)((char *)this + 752);
        if ( v6 ) /*0x45fbcc*/
        {
                    String::Release(*(void ***)((char *)this + 752));
          RA2_OPDEL(v6); /*0x45fbd6*/
        }
        v7 = (File *)RA2_OPNEW(0x10u); /*0x45fbe0*/
        if ( v7 ) /*0x45fbea*/
          FileHVA = File::LoadFileHVA(v7, (int)&v22); /*0x45fbf3*/
        else
          FileHVA = 0; /*0x45fbfa*/
                *((unsigned int *)this + 752) = v8;
        if ( FileHVA && !*(unsigned char *)FileHVA ) /*0x45fc06*/
        {
          Info = VoxelSection::GetInfo((VoxelSection *)this->q2E0[0], 0, 0); /*0x45fc12*/
          Matrix::Scale((Matrix *)this->q2F0[0], *(float *)(Info + 12)); /*0x45fc21*/
        }
        *(unsigned int *)v22.CDFileClass = (void*)&CCFileClass_vftable; /*0x45fc2a*/
        v24 = 0; /*0x45fc32*/
        Vector::Clear((int)v23); /*0x45fc36*/
        *(unsigned int *)v22.CDFileClass = &off_7E1668; /*0x45fc3f*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v22); /*0x45fc43*/
      }
      v21 = _strupr(off_8194A8); /*0x45fc55*/
      v10 = _strupr(v32); /*0x45fc5e*/
      v11 = strstr(v10, v21); /*0x45fc67*/
      if ( v11 ) /*0x45fc71*/
      {
        *v11 = 66; /*0x45fc73*/
        v12 = v11 + 1; /*0x45fc76*/
        *v12++ = 65; /*0x45fc77*/
        *v12++ = 82; /*0x45fc7b*/
        *v12 = 76; /*0x45fc7f*/
        v12[1] = 0; /*0x45fc82*/
      }
      *(unsigned int *)v25.CDFileClass = (void*)&CCFileClass_vftable; /*0x45fc8c*/
      v27 = 0; /*0x45fc94*/
      Vector::Clear((int)v26); /*0x45fc9b*/
      *(unsigned int *)v25.CDFileClass = &off_7E1668; /*0x45fca4*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v25); /*0x45fca8*/
    }
        else if ( *((unsigned char *)this + 23320) )
    {
            strncpy(Destination, (const char *)((char *)this + 23632), 0x80u);
    }
    _makepath(Buffer, 0, 0, Destination, g_Str_File__VXL); /*0x45fcea*/
    CCFileClass::Construct(&v28, Buffer); /*0x45fd01*/
    if ( (uint8_t)CCFileClass::Open(&v28, 0) ) /*0x45fd0e*/
    {
            v13 = *(void **)((char *)this + 768);
      if ( v13 ) /*0x45fd23*/
      {
                WaveClass::Destroy(*((unsigned int *)this + 768));
        RA2_OPDEL(v13); /*0x45fd2d*/
      }
      v14 = (File *)RA2_OPNEW(0x1Cu); /*0x45fd37*/
      if ( v14 ) /*0x45fd41*/
        v15 = File::LoadFileVXL(v14, (int)&v28, 0); /*0x45fd4e*/
      else
        v15 = 0; /*0x45fd55*/
            *((unsigned int *)this + 768) = v15;
      _makepath(Buffer, 0, 0, Destination, g_Str_File__HVA); /*0x45fd74*/
      CCFileClass::Construct(&v22, Buffer); /*0x45fd88*/
            v16 = *(void **)((char *)this + 784);
      if ( v16 ) /*0x45fd95*/
      {
                String::Release(*(void ***)((char *)this + 784));
        RA2_OPDEL(v16); /*0x45fd9f*/
      }
      v17 = (File *)RA2_OPNEW(0x10u); /*0x45fda9*/
      if ( v17 ) /*0x45fdb3*/
        v18 = File::LoadFileHVA(v17, (int)&v22); /*0x45fdbc*/
      else
        v18 = 0; /*0x45fdc3*/
            *((unsigned int *)this + 784) = v18;
      if ( v18 ) /*0x45fdcd*/
      {
        if ( !*(unsigned char *)v18 ) /*0x45fdcf*/
        {
          v19 = VoxelSection::GetInfo((VoxelSection *)this->q300[1], 0, 0); /*0x45fddb*/
          Matrix::Scale((Matrix *)this->q310[2], *(float *)(v19 + 12)); /*0x45fdea*/
        }
      }
      *(unsigned int *)v22.CDFileClass = (void*)&CCFileClass_vftable; /*0x45fdf3*/
      v24 = 0; /*0x45fdfb*/
      Vector::Clear((int)v23); /*0x45fdff*/
      *(unsigned int *)v22.CDFileClass = &off_7E1668; /*0x45fe08*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v22); /*0x45fe0c*/
    }
    *(unsigned int *)v28.CDFileClass = (void*)&CCFileClass_vftable; /*0x45fe18*/
    v30 = 0; /*0x45fe23*/
    Vector::Clear((int)v29); /*0x45fe2a*/
    *(unsigned int *)v28.CDFileClass = &off_7E1668; /*0x45fe36*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v28); /*0x45fe3d*/
  }
}
} // namespace gamemd
// 0x464B30
namespace gamemd {
int BuildingTypeClass::UpdatePower()
{
  int v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // ecx
  int v30; // edx
  int v31; // eax
  int v32; // ecx
  int v33; // edx
  int v34; // eax
  int v35; // ecx
  int v36; // edx
  int v37; // eax
  int v38; // ecx
  int v39; // edx
  int v40; // eax
  int v41; // ecx
  int v42; // edx
  int v43; // eax
  int v44; // eax
  int v45; // ecx
  int v46; // edx
  int v47; // eax
  int v48; // ecx
  int v49; // eax
  int v50; // ecx
  int v51; // edx
  int v52; // edx
  Checksummer *v54; // [esp+Ch] [ebp+4h]

  BuildingTypeClass::ProcessPower(&v54->crcValue); /*0x464b39*/
    Checksummer::Add_double(*((unsigned int *)this + 906), *((unsigned int *)this + 907));
    Power::TimerProcess(*((unsigned int *)this + 908));
    Power::TimerProcess(*((unsigned int *)this + 909));
    Power::TimerProcess(*((unsigned int *)this + 910));
    Power::TimerProcess(*((unsigned int *)this + 911));
    Power::TimerProcess(*((unsigned int *)this + 912));
    Checksum::AddString((unsigned int *)v54, (unsigned __int8 *)this + 3676);
    Checksum::AddString((unsigned int *)v54, (unsigned __int8 *)this + 3720);
    Power::TimerProcess(*((unsigned int *)this + 941));
    Power::TimerProcess(*((unsigned int *)this + 942));
    Power::TimerProcess(*((unsigned int *)this + 952));
    Power::TimerProcess(*((unsigned int *)this + 953));
    Power::TimerProcess(*((unsigned int *)this + 954));
    Power::TimerProcess(*((unsigned int *)this + 955));
    Power::TimerProcess(*((unsigned int *)this + 956));
    Power::TimerProcess(*((unsigned int *)this + 957));
    Power::TimerProcess(*((unsigned int *)this + 958));
    Power::TimerProcess(*((unsigned int *)this + 959));
    Power::TimerProcess(*((unsigned int *)this + 960));
    Checksummer::Add_Buffer((unsigned int *)v54, (unsigned __int8 *)this + 3844, 72);
  Checksummer::Add_Buffer(v54, (uint8_t *)&this->BuildingAnim[12], 1428); /*0x464c6d*/
    Power::TimerProcess(*((unsigned int *)this + 1336));
    v2 = Power::TimerProcess(*((unsigned int *)this + 1349));
    LOBYTE(v2) = *((unsigned char *)this + 5454);
  Power::FlagProcess((Power *)v54, v2); /*0x464c97*/
    LOBYTE(v3) = *((unsigned char *)this + 5453);
  Power::FlagProcess((Power *)v54, v3); /*0x464ca5*/
    LOBYTE(v4) = *((unsigned char *)this + 5452);
  v5 = Power::FlagProcess((Power *)v54, v4); /*0x464cb3*/
    LOBYTE(v5) = *((unsigned char *)this + 5451);
  Power::FlagProcess((Power *)v54, v5); /*0x464cc1*/
    LOBYTE(v6) = *((unsigned char *)this + 5455);
  Power::FlagProcess((Power *)v54, v6); /*0x464ccf*/
    LOBYTE(v7) = *((unsigned char *)this + 5456);
  v8 = Power::FlagProcess((Power *)v54, v7); /*0x464cdd*/
    LOBYTE(v8) = *((unsigned char *)this + 5458);
  Power::FlagProcess((Power *)v54, v8); /*0x464ceb*/
    LOBYTE(v9) = *((unsigned char *)this + 5488);
  Power::FlagProcess((Power *)v54, v9); /*0x464cf9*/
    LOBYTE(v10) = *((unsigned char *)this + 5489);
  v11 = Power::FlagProcess((Power *)v54, v10); /*0x464d07*/
    LOBYTE(v11) = *((unsigned char *)this + 5490);
  Power::FlagProcess((Power *)v54, v11); /*0x464d15*/
    LOBYTE(v12) = *((unsigned char *)this + 5491);
  Power::FlagProcess((Power *)v54, v12); /*0x464d23*/
    LOBYTE(v13) = *((unsigned char *)this + 5497);
  v14 = Power::FlagProcess((Power *)v54, v13); /*0x464d31*/
    LOBYTE(v14) = *((unsigned char *)this + 5796);
  Power::FlagProcess((Power *)v54, v14); /*0x464d3f*/
    LOBYTE(v15) = *((unsigned char *)this + 5797);
  Power::FlagProcess((Power *)v54, v15); /*0x464d4d*/
    LOBYTE(v16) = *((unsigned char *)this + 5798);
  v17 = Power::FlagProcess((Power *)v54, v16); /*0x464d5b*/
    LOBYTE(v17) = *((unsigned char *)this + 5799);
  Power::FlagProcess((Power *)v54, v17); /*0x464d69*/
    Power::TimerProcess(*((unsigned int *)this + 1467));
    LOBYTE(v18) = *((unsigned char *)this + 5800);
  v19 = Power::FlagProcess((Power *)v54, v18); /*0x464d85*/
    LOBYTE(v19) = *((unsigned char *)this + 5801);
  Power::FlagProcess((Power *)v54, v19); /*0x464d93*/
    LOBYTE(v20) = *((unsigned char *)this + 5802);
  Power::FlagProcess((Power *)v54, v20); /*0x464da1*/
    LOBYTE(v21) = *((unsigned char *)this + 5804);
  v22 = Power::FlagProcess((Power *)v54, v21); /*0x464daf*/
    LOBYTE(v22) = *((unsigned char *)this + 5805);
  Power::FlagProcess((Power *)v54, v22); /*0x464dbd*/
    LOBYTE(v23) = *((unsigned char *)this + 5806);
  Power::FlagProcess((Power *)v54, v23); /*0x464dcb*/
    LOBYTE(v24) = *((unsigned char *)this + 5807);
  v25 = Power::FlagProcess((Power *)v54, v24); /*0x464dd9*/
    LOBYTE(v25) = *((unsigned char *)this + 5808);
  Power::FlagProcess((Power *)v54, v25); /*0x464de7*/
    LOBYTE(v26) = *((unsigned char *)this + 5810);
  Power::FlagProcess((Power *)v54, v26); /*0x464df5*/
    LOBYTE(v27) = *((unsigned char *)this + 5811);
  v28 = Power::FlagProcess((Power *)v54, v27); /*0x464e03*/
    LOBYTE(v28) = *((unsigned char *)this + 5812);
  Power::FlagProcess((Power *)v54, v28); /*0x464e11*/
    LOBYTE(v29) = *((unsigned char *)this + 5814);
  Power::FlagProcess((Power *)v54, v29); /*0x464e1f*/
    LOBYTE(v30) = *((unsigned char *)this + 5815);
  v31 = Power::FlagProcess((Power *)v54, v30); /*0x464e2d*/
    LOBYTE(v31) = *((unsigned char *)this + 5816);
  Power::FlagProcess((Power *)v54, v31); /*0x464e3b*/
    LOBYTE(v32) = *((unsigned char *)this + 5817);
  Power::FlagProcess((Power *)v54, v32); /*0x464e49*/
    LOBYTE(v33) = *((unsigned char *)this + 5818);
  v34 = Power::FlagProcess((Power *)v54, v33); /*0x464e57*/
    LOBYTE(v34) = *((unsigned char *)this + 5819);
  Power::FlagProcess((Power *)v54, v34); /*0x464e65*/
    LOBYTE(v35) = *((unsigned char *)this + 5821);
  Power::FlagProcess((Power *)v54, v35); /*0x464e73*/
    LOBYTE(v36) = *((unsigned char *)this + 5822);
  v37 = Power::FlagProcess((Power *)v54, v36); /*0x464e81*/
    LOBYTE(v37) = *((unsigned char *)this + 5823);
  Power::FlagProcess((Power *)v54, v37); /*0x464e8f*/
    LOBYTE(v38) = *((unsigned char *)this + 5824);
  Power::FlagProcess((Power *)v54, v38); /*0x464e9d*/
    LOBYTE(v39) = *((unsigned char *)this + 5835);
  v40 = Power::FlagProcess((Power *)v54, v39); /*0x464eab*/
    LOBYTE(v40) = *((unsigned char *)this + 5836);
  Power::FlagProcess((Power *)v54, v40); /*0x464eb9*/
    LOBYTE(v41) = *((unsigned char *)this + 5892);
  Power::FlagProcess((Power *)v54, v41); /*0x464ec7*/
    LOBYTE(v42) = *((unsigned char *)this + 5825);
  v43 = Power::FlagProcess((Power *)v54, v42); /*0x464ed5*/
    LOBYTE(v43) = *((unsigned char *)this + 5826);
  Power::FlagProcess((Power *)v54, v43); /*0x464ee3*/
    Power::TimerProcess(*((unsigned int *)this + 1470));
    v44 = Power::TimerProcess(*((unsigned int *)this + 1471));
    LOBYTE(v44) = *((unsigned char *)this + 5888);
  Power::FlagProcess((Power *)v54, v44); /*0x464f0d*/
    LOBYTE(v45) = *((unsigned char *)this + 5889);
  Power::FlagProcess((Power *)v54, v45); /*0x464f1b*/
    LOBYTE(v46) = *((unsigned char *)this + 5890);
  v47 = Power::FlagProcess((Power *)v54, v46); /*0x464f29*/
    LOBYTE(v47) = *((unsigned char *)this + 5829);
  Power::FlagProcess((Power *)v54, v47); /*0x464f37*/
    LOBYTE(v48) = *((unsigned char *)this + 5830);
  Power::FlagProcess((Power *)v54, v48); /*0x464f45*/
  Checksum::AddString((Checksum *)v54, (uint8_t *)this->__pad_1714); /*0x464f53*/
    Checksummer::Add_double(*((unsigned int *)this + 1482), *((unsigned int *)this + 1483));
  Checksummer::Add_Buffer(v54, (uint8_t *)&this->__pad_1714[28], 12); /*0x464f78*/
  Checksummer::Add_Buffer(v54, (uint8_t *)&this->__pad_1714[40], 12); /*0x464f88*/
  Checksummer::Add_Buffer(v54, (uint8_t *)&this->__pad_1714[52], 12); /*0x464f98*/
  v49 = Checksummer::Add_Buffer(v54, (uint8_t *)&this->__pad_1714[64], 12); /*0x464fa8*/
    LOBYTE(v49) = *((unsigned char *)this + 5991);
  Power::FlagProcess((Power *)v54, v49); /*0x464fb6*/
    LOBYTE(v50) = *((unsigned char *)this + 5992);
  Power::FlagProcess((Power *)v54, v50); /*0x464fc4*/
    LOBYTE(v51) = *((unsigned char *)this + 5993);
  Power::FlagProcess((Power *)v54, v51); /*0x464fd2*/
    Power::TimerProcess(*((unsigned int *)this + 1504));
    Power::TimerProcess(*((unsigned int *)this + 1476));
    LOBYTE(v52) = *((unsigned char *)this + 5896);
// 0x4a1ca0
  return Power::FlagProcess((Power *)v54, v52); /*0x465001*/
}
} // namespace gamemd
// 0x465010
namespace gamemd {
AbstractClass * * BuildingTypeClass::SaveLoad_Prefix()
{
  TechnoTypeClass *v1; // esi
  int v2; // edi
  int result; // eax
  char *v4; // ecx
  int v5; // ebp
  int v6; // eax
  unsigned int *v7; // edx
  TechnoTypeClass *v8; // eax
  int SpeedType; // eax
  int v10; // [esp+28h] [ebp-Ch] BYREF
  int v11; // [esp+2Ch] [ebp-8h]
  int v12; // [esp+30h] [ebp-4h]
  TechnoTypeClass *v13; // [esp+38h] [ebp+4h] BYREF
  int v14; // [esp+3Ch] [ebp+8h] BYREF

  v1 = v13; /*0x465016*/
  if ( v13[1].gapE4[1382] && *(int *)((char *)&v13->ImpactLandSound + 1) ) /*0x465025*/
  {
    RA2_OPDEL(*(void **)((char *)&v13->ImpactLandSound + 1)); /*0x465030*/
    *(int *)((char *)&v1->ImpactLandSound + 1) = 0; /*0x465038*/
    IDA_BYTE1(v1->CrashingSound) = 0; /*0x46503e*/
  }
  if ( v1[1].gapE4[800] && *(unsigned int *)&v1[1].gapE4[796] ) /*0x46504c*/
  {
    RA2_OPDEL(*(void **)&v1[1].gapE4[796]); /*0x465057*/
    *(unsigned int *)&v1[1].gapE4[796] = 0; /*0x46505f*/
    v1[1].gapE4[800] = 0; /*0x465065*/
  }
  if ( v1[1].gapE4[748] && *(unsigned int *)&v1[1].gapE4[744] ) /*0x465073*/
  {
    RA2_OPDEL(*(void **)&v1[1].gapE4[744]); /*0x46507e*/
    *(unsigned int *)&v1[1].gapE4[744] = 0; /*0x465086*/
    v1[1].gapE4[748] = 0; /*0x46508c*/
  }
  if ( v1[1].gapE4[756] && *(unsigned int *)&v1[1].gapE4[752] ) /*0x46509a*/
  {
    RA2_OPDEL(*(void **)&v1[1].gapE4[752]); /*0x4650a5*/
    *(unsigned int *)&v1[1].gapE4[752] = 0; /*0x4650ad*/
    v1[1].gapE4[756] = 0; /*0x4650b3*/
  }
  if ( v1[1].gapE4[764] && *(unsigned int *)&v1[1].gapE4[760] ) /*0x4650c1*/
  {
    RA2_OPDEL(*(void **)&v1[1].gapE4[760]); /*0x4650cc*/
    *(unsigned int *)&v1[1].gapE4[760] = 0; /*0x4650d4*/
    v1[1].gapE4[764] = 0; /*0x4650da*/
  }
  if ( v1[1].gapE4[772] && *(unsigned int *)&v1[1].gapE4[768] ) /*0x4650e8*/
  {
    RA2_OPDEL(*(void **)&v1[1].gapE4[768]); /*0x4650f3*/
    *(unsigned int *)&v1[1].gapE4[768] = 0; /*0x4650fb*/
    v1[1].gapE4[772] = 0; /*0x465101*/
  }
  if ( v1[1].gapE4[780] && *(unsigned int *)&v1[1].gapE4[776] ) /*0x46510f*/
  {
    RA2_OPDEL(*(void **)&v1[1].gapE4[776]); /*0x46511a*/
    *(unsigned int *)&v1[1].gapE4[776] = 0; /*0x465122*/
    v1[1].gapE4[780] = 0; /*0x465128*/
  }
  v2 = v14; /*0x46512e*/
  result = TechnoTypeClass::SaveLoad_Prefix(v1, v14); /*0x465134*/
  if ( result >= 0 ) /*0x46513b*/
  {
    if ( v1 ) /*0x465143*/
      BuildingTypeClass::loadBuildingProperty_b_545E520((BuildingTypeClass *)v1, (int)&v13); /*0x46514c*/
    result = (*(int (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)v2 + 12))(v2, &v14, 4, 0); /*0x46515c*/
    if ( result >= 0 ) /*0x465161*/
    {
      v4 = &v1[1].gapE4[1416]; /*0x465167*/
      if ( v1 != (TechnoTypeClass *)-6020 ) /*0x46516f*/
      {
        *(unsigned int *)&v1[1].gapE4[1420] = 0; /*0x465171*/
        *(unsigned int *)&v1[1].gapE4[1424] = 0; /*0x465174*/
        v1[1].gapE4[1428] = 1; /*0x465177*/
        v1[1].gapE4[1429] = 0; /*0x46517b*/
        *(unsigned int *)v4 = (void*)&VectorClass_TPoint3D_int_vftable; /*0x46517e*/
      }
      (*(void (**)(char *, int, unsigned int))(*(unsigned int *)v4 + 8))(v4, v14, 0); /*0x46518c*/
      v5 = 0; /*0x46518f*/
      if ( v14 <= 0 ) /*0x465195*/
      {
  LABEL_32:
        BuildingTypeClass::LoadVoxel((BuildingTypeClass *)v1); /*0x4651ed*/
        ObjectTypeClass::Load2DArt((char *)v1); /*0x4651f6*/
        SpeedType = v1->SpeedType; /*0x4651fb*/
        *(int *)((char *)&v1->EnterGrinderSound + 1) = 0; /*0x465210*/
        SpeedType *= 120; /*0x465219*/
        *(int *)((char *)&v1->ImpactWaterSound + 1) = (int)&dword_89C900 + SpeedType; /*0x465228*/
        v1->EliteAirstrikeRechargeTime = (int)&dword_89D368 + SpeedType; /*0x46522e*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)((char *)&v1->VoiceUndeploy + 1)); /*0x465234*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v1->LeadershipRating); /*0x465245*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v1->NavalTargeting); /*0x465256*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v1->LandTargeting); /*0x465267*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v1->BuildTimeMultiplier); /*0x465278*/
        BuildingTypeClass::LoadVoxel((BuildingTypeClass *)v1); /*0x46527f*/
        *(int *)((char *)&v1->ImpactLandSound + 1) = 0; /*0x465284*/
        IDA_BYTE1(v1->CrashingSound) = 0; /*0x46528a*/
        *(unsigned int *)&v1[1].gapE4[796] = 0; /*0x465290*/
        v1[1].gapE4[800] = 0; /*0x465296*/
        *(unsigned int *)&v1[1].gapE4[744] = 0; /*0x46529c*/
        v1[1].gapE4[748] = 0; /*0x4652a2*/
        *(unsigned int *)&v1[1].gapE4[752] = 0; /*0x4652a8*/
        v1[1].gapE4[756] = 0; /*0x4652ae*/
        *(unsigned int *)&v1[1].gapE4[760] = 0; /*0x4652b4*/
        v1[1].gapE4[764] = 0; /*0x4652ba*/
        *(unsigned int *)&v1[1].gapE4[768] = 0; /*0x4652c0*/
        v1[1].gapE4[772] = 0; /*0x4652c6*/
        *(unsigned int *)&v1[1].gapE4[776] = 0; /*0x4652cc*/
        v1[1].gapE4[780] = 0; /*0x4652d2*/
        BuildingTypeClass::LoadAnimations((int)v1, unk_A8B230[130].uniqueId); /*0x4652e6*/
        return 0; /*0x4652eb*/
      }
      else
      {
        v13 = 0; /*0x465197*/
        while ( 1 ) /*0x46519b*/
        {
          v6 = *(unsigned int *)v2; /*0x46519b*/
          v10 = 0; /*0x4651a6*/
          v11 = 0; /*0x4651aa*/
          v12 = 0; /*0x4651ae*/
          result = (*(int (__stdcall **)(int, int *, int, unsigned int))(v6 + 12))(v2, &v10, 12, 0); /*0x4651b2*/
          if ( result < 0 ) /*0x4651b7*/
            break; /*0x4651b7*/
          v7 = (int *)((char *)v13->parent_gap + *(unsigned int *)&v1[1].gapE4[1420]); /*0x4651cb*/
          v8 = (TechnoTypeClass *)&v13->parent_gap[3]; /*0x4651cd*/
          ++v5; /*0x4651d0*/
          *v7 = v10; /*0x4651d1*/
          v13 = v8; /*0x4651d7*/
          v7[1] = v11; /*0x4651db*/
          v7[2] = v12; /*0x4651e2*/
          if ( v5 >= v14 ) /*0x4651eb*/
            goto LABEL_32; /*0x4651eb*/
        }
      }
    }
  }
  return result; /*0x4652ed*/
}
} // namespace gamemd
// 0x4653C0
namespace gamemd {
BuildingTypeClass * * BuildingTypeClass::FindOrCreate()
{
  int v2; // esi
  int v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x4653dc*/
    return 0; /*0x46543f*/
  v2 = 0; /*0x4653ed*/
  if ( dword_A83C78 <= 0 ) /*0x4653f1*/
  {
  LABEL_6:
    v3 = RA2_OPNEW(0x1798u); /*0x465416*/
    if ( v3 ) /*0x465425*/
// 0x45dd90
      return BuildingTypeClass::ConstructFull(v3, Source); /*0x465431*/
    return 0; /*0x465425*/
  }
  while ( _strcmpi((char *)(*((unsigned int *)dword_A83C6C + v2) + 36), Source) ) /*0x46540a*/
  {
    if ( ++v2 >= dword_A83C78 ) /*0x465414*/
      goto LABEL_6; /*0x465414*/
  }
  return *((unsigned int *)dword_A83C6C + v2); /*0x46542f*/
}
} // namespace gamemd
// 0x465AF0
namespace gamemd {
void BuildingTypeClass::IsPowered()
{
  int result; // eax

    if ( *((unsigned char *)this + 23944) )
  if ( (unsigned char)result ) /*0x465afb*/
  {
        if ( *((unsigned int *)this + 14336) )
    if ( result ) /*0x465b05*/
    {
      RA2_OPDEL((void *)this->Buildup[0]); /*0x465b08*/
            *((unsigned int *)this + 14336) = 0;
            *((unsigned char *)this + 14352) = 0;
    }
  }
  return result; /*0x465b21*/
}
} // namespace gamemd
// 0x50B760
namespace gamemd {
int BuildingTypeClass::ProcessData(unsigned int * a2, short * a3)
{
  int *v5; // ebx
  int v6; // ebx
  int v7; // ebp
  int16_t *v8; // ecx
  int v9; // edi
  int v10; // esi
  int v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  if ( !*(unsigned int *)&dword_A8B238 ) /*0x50b770*/
    return 1; /*0x50b77b*/
  v5 = a2; /*0x50b783*/
  v11 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5216); /*0x50b78f*/
  v12 = 2 * v11 + BuildingTypeClass::GetFoundationWidth((BuildingTypeClass *)a2); /*0x50b7a3*/
  v6 = 2 * v11 + BuildingTypeClass::GetFoundationHeight(v5, 0); /*0x50b7b1*/
    v7 = 1 << *((unsigned int *)this + 48);
  v8 = a3; /*0x50b7ba*/
  v9 = *a3 - v11 - 1; /*0x50b7cd*/
  if ( v9 < *a3 + v12 + 1 ) /*0x50b7d0*/
  {
    while ( 1 ) /*0x50b7e2*/
    {
      v10 = v8[1] - v11 - 1; /*0x50b7e2*/
      if ( v10 < v8[1] + v6 + 1 ) /*0x50b7e5*/
        break; /*0x50b7e5*/
  LABEL_8:
      if ( ++v9 >= *v8 + v12 + 1 ) /*0x50b82d*/
        return 0; /*0x50b82d*/
    }
    while ( 1 ) /*0x50b7eb*/
    {
      IDA_LOWORD(a2) = v9; /*0x50b7eb*/
      IDA_HIWORD(a2) = v10; /*0x50b7f6*/
      if ( (v7 & *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&a2) + 55)) != 0 ) /*0x50b806*/
        return 1; /*0x50b806*/
      if ( ++v10 >= a3[1] + v6 + 1 ) /*0x50b81b*/
      {
        v8 = a3; /*0x50b81d*/
        goto LABEL_8; /*0x50b81d*/
      }
    }
  }
  return 0; /*0x50b772*/
}
} // namespace gamemd
// 0x594010
namespace gamemd {
int BuildingTypeClass::CheckPlacementArea(ObjectClass * aP1, ObjectClass * aP2)
{
  unsigned short *v3; // edi
  int16_t v4; // ax
  int result; // eax
  int16_t v6; // ax
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // edx
  int v11; // ebx
  int v12; // ebp
  int v13; // esi
  Cell *v14; // eax

  v3 = aP1; /*0x594015*/
  v4 = *aP1; /*0x594027*/
  IDA_HIWORD(aP1) = aP1[2]; /*0x59402a*/
  IDA_LOWORD(aP1) = v4; /*0x594035*/
  result = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (int16_t *)&aP1, 1); /*0x59403a*/
  if ( (unsigned char)result )
  {
    v6 = v3[2]; /*0x594052*/
    IDA_LOWORD(aP1) = *((unsigned int *)v3 + 2) + *(unsigned int *)v3 - 1; /*0x59405a*/
    IDA_HIWORD(aP1) = v6; /*0x594065*/
    result = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (int16_t *)&aP1, 1); /*0x59406a*/
    if ( (unsigned char)result )
    {
      v7 = *((unsigned int *)v3 + 1); /*0x59407a*/
      v8 = *((unsigned int *)v3 + 3); /*0x59407d*/
      IDA_LOWORD(aP1) = *v3; /*0x594080*/
      IDA_HIWORD(aP1) = v7 + v8 - 1; /*0x594095*/
      result = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (int16_t *)&aP1, 1); /*0x59409a*/
      if ( (unsigned char)result )
      {
        v9 = *((unsigned int *)v3 + 1); /*0x5940b2*/
        v10 = *((unsigned int *)v3 + 3); /*0x5940b5*/
        IDA_LOWORD(aP1) = *((unsigned int *)v3 + 2) + *(unsigned int *)v3 - 1; /*0x5940b8*/
        IDA_HIWORD(aP1) = v9 + v10 - 1; /*0x5940cb*/
        result = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (int16_t *)&aP1, 1); /*0x5940d0*/
        if ( (unsigned char)result )
        {
          v11 = *((unsigned int *)v3 + 1); /*0x5940dd*/
          if ( v11 >= *((unsigned int *)v3 + 3) + v11 ) /*0x5940e9*/
          {
  LABEL_16:
            IDA_LOBYTE(result) = 1; /*0x594170*/
            return result; /*0x594177*/
          }
          v12 = aP2; /*0x5940ef*/
          while ( 1 ) /*0x5940f3*/
          {
            v13 = *(unsigned int *)v3; /*0x5940f3*/
            result = *(unsigned int *)v3 + *((unsigned int *)v3 + 2); /*0x5940f8*/
            if ( *(unsigned int *)v3 < result ) /*0x5940fc*/
              break; /*0x5940fc*/
  LABEL_15:
            if ( ++v11 >= *((unsigned int *)v3 + 3) + *((unsigned int *)v3 + 1) ) /*0x59416e*/
              goto LABEL_16; /*0x59416e*/
          }
          while ( 1 )
          {
            IDA_LOWORD(aP1) = v13; /*0x594104*/
            IDA_HIWORD(aP1) = v11; /*0x59410b*/
            result = g_MissionQueueFrame.localVariables[163]
                   ? *(unsigned int *)(80 * ((int16_t)v13 + g_MapCellWidth * (int16_t)v11)
                               + g_MissionQueueFrame.localVariables[163]
                               + 56)
                   : -1;
                        if ( v13 != (ObjectClass *)*((unsigned int *)this + 8) && v13 != v11 )
              break; /*0x59413b*/
            v14 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&aP1); /*0x594147*/
            result = Cell::IsEmpty(v14); /*0x59414e*/
            if ( !(unsigned char)result ) /*0x594155*/
              break; /*0x594155*/
            ++v13; /*0x59415c*/
            result = *(unsigned int *)v3 + *((unsigned int *)v3 + 2); /*0x59415d*/
            if ( v13 >= result ) /*0x594161*/
              goto LABEL_15; /*0x594161*/
          }
        }
      }
    }
  }
  IDA_LOBYTE(result) = 0; /*0x59417d*/
  return result; /*0x594170*/
}
} // namespace gamemd
// 0x5FEC70
namespace gamemd {
OverlayTypeClass * * BuildingTypeClass::FindOrCreate2()
{
  int v2; // esi
  OverlayTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x5fec8c*/
    return 0; /*0x5fecef*/
  v2 = 0; /*0x5fec9d*/
  if ( *(int *)&stru_A83D50.__pad_3C[4] <= 0 ) /*0x5feca1*/
  {
  LABEL_6:
    v3 = (OverlayTypeClass *)RA2_OPNEW(0x2BCu); /*0x5fecc6*/
    if ( v3 ) /*0x5fecd5*/
// 0x5fe250
      return OverlayTypeClass::OverlayTypeClass(v3, Source); /*0x5fece1*/
    return 0; /*0x5fecd5*/
  }
  while ( _strcmpi((char *)(*(unsigned int *)(*(unsigned int *)stru_A83D50.__pad_34 + 4 * v2) + 36), Source) ) /*0x5fecba*/
  {
    if ( ++v2 >= *(int *)&stru_A83D50.__pad_3C[4] ) /*0x5fecc4*/
      goto LABEL_6; /*0x5fecc4*/
  }
  return *(unsigned int **)(*(unsigned int *)stru_A83D50.__pad_34 + 4 * v2); /*0x5fecdf*/
}
} // namespace gamemd
// 0x644890
namespace gamemd {
ParticleSystemTypeClass * * BuildingTypeClass::LoadOrGet()
{
  int v2; // esi
  OverlayTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6448ac*/
    return 0; /*0x64490f*/
  v2 = 0; /*0x6448bd*/
  if ( (int)stru_A83D50.SuperClass_field_0x28 <= 0 ) /*0x6448c1*/
  {
  LABEL_6:
    v3 = (OverlayTypeClass *)RA2_OPNEW(0x310u); /*0x6448e6*/
    if ( v3 ) /*0x6448f5*/
// 0x6440a0
      return OverlayTypeClass::Construct(v3, Source); /*0x644901*/
    return 0; /*0x6448f5*/
  }
  while ( _strcmpi((char *)(*(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_14[8] + 4 * v2) + 36), Source) ) /*0x6448da*/
  {
    if ( ++v2 >= (int)stru_A83D50.SuperClass_field_0x28 ) /*0x6448e4*/
      goto LABEL_6; /*0x6448e4*/
  }
  return *(unsigned int **)(*(unsigned int *)&stru_A83D50.__pad_14[8] + 4 * v2); /*0x6448ff*/
}
} // namespace gamemd
// 0x644BE0
namespace gamemd {
unsigned int * BuildingTypeClass::Construct(AbstractClass * aP1)
{
  int v3; // eax
  int v4; // eax

  ObjectTypeClass::ConstructFull(aP1); /*0x644beb*/
    *((unsigned int *)this + 660) = 0;
    *((unsigned int *)this + 664) = 0;
    *((unsigned int *)this + 668) = 0;
    *((unsigned int *)this + 688) = 0;
    *((unsigned int *)this + 672) = 1;
    *((unsigned int *)this + 676) = 1;
    *((unsigned int *)this + 680) = 0;
    *((unsigned int *)this + 684) = 1;
    *((unsigned int *)this + 692) = 0;
  BuildingTypeClass::loadBuildingProperty_b_5478850((BuildingTypeClass *)&this->cost[10], 0, 0); /*0x644c37*/
    *((unsigned int *)this + 716) = 10;
    *((unsigned int *)this + 712) = 0;
    *((unsigned int *)this + 696) = &vt_TypeList_RGBClass;
    *((unsigned int *)this + 724) = 0;
    *((unsigned char *)this + 728) = 0;
    *((unsigned char *)this + 729) = 0;
    *((unsigned char *)this + 781) = -1;
    *((unsigned char *)this + 782) = -1;
    *((unsigned int *)this + 732) = 0;
    *((unsigned int *)this + 736) = 1;
    *((unsigned int *)this + 740) = 0;
    *((unsigned int *)this + 744) = 0;
    *((unsigned int *)this + 748) = 0;
    *((unsigned int *)this + 752) = 1;
    *((unsigned int *)this + 756) = 0;
    *((unsigned int *)this + 760) = 0;
    *((unsigned int *)this + 764) = 0;
    *((unsigned int *)this + 768) = 0;
    *((unsigned int *)this + 772) = 0;
    *((unsigned char *)this + 776) = 0;
    *((unsigned char *)this + 777) = 0;
    *((unsigned char *)this + 778) = 0;
    *((unsigned char *)this + 779) = 4;
    *((unsigned char *)this + 780) = 0;
    *((unsigned char *)this + 783) = 0;
    *((unsigned int *)this + 784) = -1;
    *((unsigned int *)this + 788) = -1;
    *this = &ParticleTypeClass::`vftable';
    *((unsigned int *)this + 4) = &ParticleTypeClass::`vftable';
    *((unsigned int *)this + 8) = &ParticleTypeClass::`vftable';
    *((unsigned int *)this + 12) = &vt_ParticleTypeClass;
  if ( *(int *)&stru_A83D50.__pad_3C[28] < *(int *)&stru_A83D50.__pad_3C[20] /*0x644d43*/
    || (stru_A83D50.__pad_3C[25] || !*(unsigned int *)&stru_A83D50.__pad_3C[20])
    && *(int *)&stru_A83D50.__pad_3C[32] > 0
    && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&stru_A83D50.__pad_3C[12] + 8))(
         &stru_A83D50.__pad_3C[12],
         *(unsigned int *)&stru_A83D50.__pad_3C[20] + *(unsigned int *)&stru_A83D50.__pad_3C[32],
         0) )
  {
    v3 = (*(unsigned int *)&stru_A83D50.__pad_3C[28])++; /*0x644d50*/
    *(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_3C[16] + 4 * v3) = this; /*0x644d5f*/
  }
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x644d96*/
    || (IDA_BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v4 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x644da3*/
    *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4) = this; /*0x644db2*/
  }
    *((unsigned char *)this + 564) = 0;
    return this;
}
} // namespace gamemd
// 0x645430
namespace gamemd {
ParticleTypeClass * * BuildingTypeClass::FindOrCreateEx()
{
  int v2; // esi
  BuildingTypeClass *v3; // eax
  unsigned int *v4; // eax
  int v6; // ecx
  unsigned int *i; // edx

  if ( !_strcmpi(Source, g_Str__none_) ) /*0x645444*/
    return -1; /*0x645444*/
  v2 = 0; /*0x64544b*/
  if ( *(int *)&stru_A83D50.__pad_3C[28] <= 0 ) /*0x64544f*/
  {
  LABEL_5:
    v3 = (BuildingTypeClass *)RA2_OPNEW(0x318u); /*0x645474*/
    if ( v3 ) /*0x645483*/
      v4 = BuildingTypeClass::Construct(v3, Source); /*0x645488*/
    else
      v4 = 0; /*0x645494*/
    v6 = 0; /*0x64549c*/
    if ( *(int *)&stru_A83D50.__pad_3C[28] > 0 ) /*0x6454a0*/
    {
      for ( i = *(unsigned int **)&stru_A83D50.__pad_3C[16]; (unsigned int *)*i != v4; ++i ) /*0x6454a2*/
      {
        if ( ++v6 >= *(int *)&stru_A83D50.__pad_3C[28] ) /*0x6454b2*/
          return -1; /*0x6454b2*/
      }
      return v6; /*0x6454bb*/
    }
    return -1; /*0x6454b9*/
  }
  while ( _strcmpi(Source, (char *)(*(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_3C[16] + 4 * v2) + 36)) ) /*0x645468*/
  {
    if ( ++v2 >= *(int *)&stru_A83D50.__pad_3C[28] ) /*0x645472*/
      goto LABEL_5; /*0x645472*/
  }
  return v2; /*0x645491*/
}
} // namespace gamemd
// 0x7171A0
namespace gamemd {
void* BuildingTypeClass::ProcessPower(AbstractClass * aP1)
{
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // ecx
  int v30; // edx
  int v31; // eax
  int v32; // ecx
  int v33; // edx
  int v34; // eax
  int v35; // ecx
  int v36; // edx
  int v37; // eax
  int v38; // ecx
  int v39; // edx
  int v40; // eax
  int v41; // ecx

  AbstractTypeClass::ProcessPower(aP1); /*0x7171a9*/
  Checksummer::Add_double(this->q2F0, this->u32_2F4); /*0x7171be*/
    Power::TimerProcess(aP1);
  Checksummer::Add_double(this->unknown_double_300, this->q304); /*0x7171e1*/
  Checksummer::Add_double(this->AccelerationFactor, this->q30C); /*0x7171f6*/
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
  Checksummer::Add_Buffer((unsigned int *)aP1, (uint8_t *)(&this->q1504), 16); /*0x71724c*/
  Checksummer::Add_double(this->unknown_double_360, this->q364); /*0x717261*/
  Checksummer::Add_double(this->unknown_double_368, this->q36C); /*0x717276*/
  Checksummer::Add_double(this->Weight, this->q374); /*0x71728b*/
  Checksummer::Add_double(this->PhysicalSize, this->u32_37C); /*0x7172a0*/
  Checksummer::Add_double(this->Size, this->q384); /*0x7172b5*/
  Checksummer::Add_double(this->SizeLimit, this->q38C); /*0x7172ca*/
    LOBYTE(v3) = *((unsigned char *)this + 3648);
  Power::FlagProcess(aP1, v3); /*0x7172d8*/
    v4 = Power::TimerProcess(aP1);
    LOBYTE(v4) = *((unsigned char *)this + 12868);
  Power::FlagProcess(aP1, v4); /*0x7172f4*/
    LOBYTE(v5) = *((unsigned char *)this + 12872);
  Power::FlagProcess(aP1, v5); /*0x717302*/
    LOBYTE(v6) = *((unsigned char *)this + 12864);
  Power::FlagProcess(aP1, v6); /*0x717310*/
  Checksummer::Add_double(this->RollAngle, this->u32_3A4); /*0x717325*/
  Checksummer::Add_double(this->PitchAngle, this->u32_3B4); /*0x71733a*/
  Checksummer::Add_double(this->PitchSpeed, this->q3AC); /*0x71734f*/
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
  Checksummer::Add_double(this->DeployTime, this->u32_3CC); /*0x71738e*/
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    v7 = Power::TimerProcess(aP1);
    LOBYTE(v7) = *((unsigned char *)this + 12880);
  Power::FlagProcess(aP1, v7); /*0x7175cc*/
    LOBYTE(v8) = *((unsigned char *)this + 12884);
  Power::FlagProcess(aP1, v8); /*0x7175da*/
    LOBYTE(v9) = *((unsigned char *)this + 12888);
  v10 = Power::FlagProcess(aP1, v9); /*0x7175e8*/
    LOBYTE(v10) = *((unsigned char *)this + 12892);
  Power::FlagProcess(aP1, v10); /*0x7175f6*/
    LOBYTE(v11) = *((unsigned char *)this + 12896);
  Power::FlagProcess(aP1, v11); /*0x717604*/
    LOBYTE(v12) = *((unsigned char *)this + 12900);
  v13 = Power::FlagProcess(aP1, v12); /*0x717612*/
    LOBYTE(v13) = *((unsigned char *)this + 12904);
  Power::FlagProcess(aP1, v13); /*0x717620*/
    LOBYTE(v14) = *((unsigned char *)this + 12908);
  Power::FlagProcess(aP1, v14); /*0x71762e*/
    LOBYTE(v15) = *((unsigned char *)this + 12912);
  v16 = Power::FlagProcess(aP1, v15); /*0x71763c*/
    LOBYTE(v16) = *((unsigned char *)this + 12916);
  Power::FlagProcess(aP1, v16); /*0x71764a*/
    LOBYTE(v17) = *((unsigned char *)this + 12920);
  Power::FlagProcess(aP1, v17); /*0x717658*/
    LOBYTE(v18) = *((unsigned char *)this + 12924);
  v19 = Power::FlagProcess(aP1, v18); /*0x717666*/
    LOBYTE(v19) = *((unsigned char *)this + 12928);
  Power::FlagProcess(aP1, v19); /*0x717674*/
    LOBYTE(v20) = *((unsigned char *)this + 12932);
  Power::FlagProcess(aP1, v20); /*0x717682*/
    LOBYTE(v21) = *((unsigned char *)this + 13104);
  v22 = Power::FlagProcess(aP1, v21); /*0x717690*/
    LOBYTE(v22) = *((unsigned char *)this + 13108);
  Power::FlagProcess(aP1, v22); /*0x71769e*/
    LOBYTE(v23) = *((unsigned char *)this + 13116);
  Power::FlagProcess(aP1, v23); /*0x7176ac*/
    LOBYTE(v24) = *((unsigned char *)this + 13120);
  v25 = Power::FlagProcess(aP1, v24); /*0x7176ba*/
    LOBYTE(v25) = *((unsigned char *)this + 13124);
  Power::FlagProcess(aP1, v25); /*0x7176c8*/
    LOBYTE(v26) = *((unsigned char *)this + 13128);
  Power::FinalizeDrain(aP1, v26); /*0x7176d6*/
    LOBYTE(v27) = *((unsigned char *)this + 13132);
  v28 = Power::FinalizeDrain(aP1, v27); /*0x7176e4*/
    LOBYTE(v28) = *((unsigned char *)this + 13136);
  Power::FlagProcess(aP1, v28); /*0x7176f2*/
    LOBYTE(v29) = *((unsigned char *)this + 13392);
  Power::FlagProcess(aP1, v29); /*0x717700*/
    LOBYTE(v30) = *((unsigned char *)this + 13396);
  v31 = Power::FlagProcess(aP1, v30); /*0x71770e*/
    LOBYTE(v31) = *((unsigned char *)this + 13440);
  Power::FlagProcess(aP1, v31); /*0x71771c*/
    LOBYTE(v32) = *((unsigned char *)this + 13444);
  Power::FlagProcess(aP1, v32); /*0x71772a*/
    LOBYTE(v33) = *((unsigned char *)this + 13452);
  v34 = Power::FlagProcess(aP1, v33); /*0x717738*/
    LOBYTE(v34) = *((unsigned char *)this + 13456);
  Power::FlagProcess(aP1, v34); /*0x717746*/
    LOBYTE(v35) = *((unsigned char *)this + 13460);
  Power::FlagProcess(aP1, v35); /*0x717754*/
    LOBYTE(v36) = *((unsigned char *)this + 13464);
  v37 = Power::FlagProcess(aP1, v36); /*0x717762*/
    LOBYTE(v37) = *((unsigned char *)this + 14072);
  Power::FlagProcess(aP1, v37); /*0x717770*/
    LOBYTE(v38) = *((unsigned char *)this + 14076);
  Power::FlagProcess(aP1, v38); /*0x71777e*/
    LOBYTE(v39) = *((unsigned char *)this + 6840);
  v40 = Power::FlagProcess(aP1, v39); /*0x71778c*/
    LOBYTE(v40) = *((unsigned char *)this + 6844);
  Power::FlagProcess(aP1, v40); /*0x71779a*/
    LOBYTE(v41) = *((unsigned char *)this + 6848);
// 0x4a1ca0
  return Power::FlagProcess(aP1, v41); /*0x7177ad*/
}
} // namespace gamemd
// 0x7178C0
namespace gamemd {
unsigned int * BuildingTypeClass::GetUpgradeOffset(unsigned int * a2)
{
  int v4; // ecx
  int v5; // esi
  int v6; // eax
  int v7; // ecx
  int *v8; // eax
  int v9; // ecx
  int v10; // edi
  void *v11; // ebp
  void *v12; // edi
  int v13; // eax
  int v14; // ebx
  double v16; // [esp+0h] [ebp-2Ch]
  int v17[3]; // [esp+18h] [ebp-14h] BYREF
  unsigned int v18[2]; // [esp+24h] [ebp-8h] BYREF

  v5 = v4; /*0x7178c4*/
  if ( *(unsigned char *)(v4 + 1980) ) /*0x7178c6*/
  {
    v6 = *(unsigned int *)(v4 + 1968); /*0x7178d4*/
    v7 = *(unsigned int *)(v4 + 1972); /*0x7178da*/
    v18[0] = v6; /*0x7178e1*/
    v18[1] = v7; /*0x7178e6*/
    v8 = (int *)World::ToScreen(v17, v18, a2); /*0x7178fb*/
    v9 = *v8; /*0x717900*/
    v10 = v8[1]; /*0x717905*/
    v17[0] = 10 * *(unsigned int *)(v5 + 1976); /*0x71791b*/
    __asm { fild [esp+2Ch+var_14] } /*0x717921*/
    v11 = (void *)(v9 - v17[0]); /*0x717927*/
    v12 = (void *)(v10 - v17[0]); /*0x717929*/
    __asm /*0x71792b*/
    {
      fld st
      fmul st, st(1)
      fadd st, st
      fstp [esp+2Ch+var_2C]; double
      fstp st
    }
    Math::Sqrt(v16); /*0x717936*/
    __asm { fmul ds:dbl_7F4FC0 } /*0x71793b*/
    IDA_LOWORD(v13) = Math::RoundToInt(a3); /*0x717944*/
    if ( *(int *)(v5 + 1976) >= 0 ) /*0x717951*/
      v14 = -v13; /*0x717957*/
    else
      v14 = v13; /*0x717953*/
        *a2 = v8;
        a2[1] = v9;
    this->? = (void *)v14; /*0x717966*/
        return a2;
  }
  else
  {
        *a2 = *((unsigned int *)this + 7872);
        a2[1] = *((unsigned int *)this + 7888);
        a2[2] = *((unsigned int *)this + 7904);
        return a2;
  }
}
} // namespace gamemd
// 0x746000
namespace gamemd {
int BuildingTypeClass::IsPlacementValid(IUnknown * aP1, IUnknown * aP2)
{
  signed int v4; // ecx
  int v5; // eax
  int v6; // eax

    if ( (*(int (__fastcall **)(void *))(*(unsigned int *)this + 456))(this) < 0
    || !MapSeed::CheckTileMatch((MapSeed *)&stru_87F5F0.__pad_58[416], aP1, aP2, 0, 0, 0, 0) )
  {
    return 1; /*0x746030*/
  }
  if ( *aP1 == *aP2 && aP1[1] == aP2[1] ) /*0x746050*/
    return 0; /*0x746059*/
  v4 = abs32(aP2[1] - aP1[1]); /*0x74606b*/
  v5 = abs32(*aP2 - *aP1); /*0x746078*/
  if ( v5 <= v4 ) /*0x74607c*/
    v5 = v4; /*0x74607e*/
  if ( v5 == 1 ) /*0x746083*/
    return 0; /*0x74608c*/
  if ( v5 >= 12 /*0x7460ad*/
    || !(uint8_t)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], aP1, 1)
    || !(uint8_t)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], aP2, 1) )
  {
    return 1; /*0x7460f7*/
  }
  v6 = *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], aP2) + 80) >> 8; /*0x7460cd*/
  IDA_LOBYTE(v6) = v6 & 1; /*0x7460d0*/
// 0x42d170
  return Pathfinding::CalcDistance((int)&stru_87E790.__pad_D8[80], aP1, aP2, (int)this, 0, v6, 0) > 15; /*0x746052*/
}
} // namespace gamemd
// 0x7480D0
namespace gamemd {
AbstractClass * * BuildingTypeClass::FindOrCreateAlt()
{
  int v2; // esi

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x7480ec*/
    return 0; /*0x74814f*/
  v2 = 0; /*0x7480fd*/
  if ( dword_A83CF0 <= 0 ) /*0x748101*/
  {
  LABEL_6:
    if ( RA2_OPNEW(0xE78u) ) /*0x74812b*/
// 0x7470d0
      return UnitTypeClass::UnitTypeClass(Source); /*0x748141*/
    return 0; /*0x748135*/
  }
  while ( _strcmpi((const void *)(*((unsigned int *)dword_A83CE4 + v2) + 36), Source) ) /*0x74811a*/
  {
    if ( ++v2 >= dword_A83CF0 ) /*0x748124*/
      goto LABEL_6; /*0x748124*/
  }
  return *((unsigned int *)dword_A83CE4 + v2); /*0x74813f*/
}
} // namespace gamemd
// 0x41C500
namespace gamemd {
char BuildingTypeClass::Enqueue(int a2)
{
  char *v3; // edi
  int i; // ecx
  int v5; // eax
  unsigned int *v6; // edx
  int v7; // eax

  if ( a2 < 0 ) /*0x41c50c*/
    return 0; /*0x41c50c*/
  v3 = (char *)RA2_OPNEW(8 * (a2 + v3->vtable3)); /*0x41c520*/
  if ( !v3 ) /*0x41c527*/
    return 0; /*0x41c580*/
    for ( i = 0; i < *((unsigned int *)this + 16); *(unsigned int *)&v3[v5 + 4] = v6[1] )
  {
    v5 = 8 * i; /*0x41c539*/
    v6 = (unsigned int *)(*(unsigned int *)v3 + 8 * i++); /*0x41c542*/
    *(unsigned int *)&v3[v5] = *v6; /*0x41c547*/
  }
  RA2_OPDEL(); /*0x41c55b*/
    v7 = a2 + *((unsigned int *)this + 32);
  *(unsigned int *)v3 = v3; /*0x41c568*/
    *((unsigned int *)this + 32) = v7;
    *((unsigned int *)this + 64) = 0;
  return 1; /*0x41c574*/
}
} // namespace gamemd
// 0x41C590
namespace gamemd {
size_t BuildingTypeClass::Dequeue(BuildingClass * aP1)
{
  int result; // eax
  char *vtable0; // edi
  int v5; // ebx
  int vtable1; // ecx
  int v7; // esi

    result = (size_t)*((unsigned int *)this + 4);
  if ( result ) /*0x41c598*/
  {
        if ( !*((unsigned char *)this + 12) )
    {
            qsort(*this, result, 8u, CompareFunction);
            *((unsigned int *)this + 16) = 0;
            *((unsigned char *)this + 12) = 1;
    }
        v4 = (ObjectClass *)*this;
    v5 = *aP1; /*0x41c5cb*/
        v6 = (int)*((unsigned int *)this + 4);
    if ( vtable1 <= 0 ) /*0x41c5d2*/
      return 0; /*0x41c5fe*/
    while ( 1 ) /*0x41c5db*/
    {
      v7 = *(unsigned int *)&vtable0[8 * (vtable1 / 2)]; /*0x41c5db*/
      if ( v7 <= v5 ) /*0x41c5e3*/
      {
        if ( v7 == v5 ) /*0x41c5e9*/
          return (int)&vtable0[8 * (vtable1 / 2)]; /*0x41c603*/
        vtable0 += 8 * (vtable1 / 2) + 8; /*0x41c5eb*/
        vtable1 += -1 - vtable1 / 2; /*0x41c5f3*/
      }
      else
      {
        vtable1 /= 2; /*0x41c5e5*/
      }
      if ( vtable1 <= 0 ) /*0x41c5f7*/
        return 0; /*0x41c5f7*/
    }
  }
  return result; /*0x41c59a*/
}
} // namespace gamemd
// 0x45E7B0
namespace gamemd {
int BuildingTypeClass::FindIndexByName()
{
  int v2; // esi

  if ( !this ) /*0x45e7b6*/
    return -1; /*0x45e7b6*/
  v2 = 0; /*0x45e7bd*/
  if ( dword_A83C78 <= 0 ) /*0x45e7c1*/
    return -1; /*0x45e7e6*/
  while ( _strcmpi((char *)(*((unsigned int *)dword_A83C6C + v2) + 36), (char *)this) ) /*0x45e7da*/
  {
    if ( ++v2 >= dword_A83C78 ) /*0x45e7e4*/
      return -1; /*0x45e7e4*/
  }
  return v2; /*0x45e7e6*/
}
} // namespace gamemd
// 0x45ECE0
namespace gamemd {
int BuildingTypeClass::GetMaxPips()
{
  int result; // eax
  int v2; // ecx
  int Storage; // ecx

    result = 60 * dword_8192B8[*((unsigned int *)this + 15296)] / 8;
    if ( *((unsigned int *)this + 3920) == 2 )
  {
        if ( *((unsigned char *)this + 23280) )
    {
      v2 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6096); /*0x45ed24*/
      if ( v2 >= 0 ) /*0x45ed2c*/
      {
        if ( v2 <= result ) /*0x45ed33*/
          return *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6096); /*0x45ed35*/
      }
      else
      {
        return 0; /*0x45ed2e*/
      }
    }
    else
    {
            v3 = *((unsigned int *)this + 8192);
      if ( Storage >= 0 ) /*0x45ed40*/
      {
        if ( Storage <= result ) /*0x45ed47*/
          return Storage; /*0x45ed49*/
      }
      else
      {
        return 0; /*0x45ed42*/
      }
    }
  }
    else if ( *((unsigned int *)this + 3920) != 4 )
  {
// 0x716290
    return ObjectClass::GetModeSpecificValue(); /*0x45ed0f*/
  }
  return result; /*0x45ed30*/
}
} // namespace gamemd
// 0x464AF0
namespace gamemd {
unsigned int * BuildingTypeClass::GetSizeInLeptons(unsigned int * a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // eax

    v2 = *((unsigned int *)this + 3824);
    v3 = unk_89DDB8 * *((unsigned int *)this + 3828);
  v2 *= 4; /*0x464b03*/
  v4 = *(int *)((char *)stru_81926C.Type + v2); /*0x464b0b*/
  v5 = *(int *)((char *)dword_819310 + v2); /*0x464b11*/
  *a2 = v4 << 8; /*0x464b1d*/
  a2[1] = v5 << 8; /*0x464b22*/
  a2[2] = v3; /*0x464b27*/
  return a2; /*0x464b2a*/
}
} // namespace gamemd
// 0x465300
namespace gamemd {
int BuildingTypeClass::SaveLoad_Prefix_0()
{
  int result; // eax
  int v2; // edx
  int v3; // ebp
  int i; // edi
  int v5; // [esp+4h] [ebp-10h]
  int v6; // [esp+8h] [ebp-Ch]
  TechnoTypeClass *v7; // [esp+18h] [ebp+4h]
  unsigned int *v8; // [esp+1Ch] [ebp+8h]
  int *v9; // [esp+20h] [ebp+Ch] BYREF

  result = TechnoTypeClass::SaveLoad_Prefix_0(v7, v8, v9, v5, v6); /*0x465313*/
  if ( result >= 0 ) /*0x46531a*/
  {
    v2 = *v8; /*0x465322*/
    v9 = *(int **)&v7[1].?[1424]; /*0x46532e*/
    result = (*(int (__stdcall **)(unsigned int *, int **, int, unsigned int))(v2 + 16))(v8, &v9, 4, 0); /*0x465332*/
    if ( result >= 0 ) /*0x465337*/
    {
      v3 = 0; /*0x46533d*/
      if ( (int)v9 <= 0 ) /*0x465341*/
      {
        return 0; /*0x465368*/
      }
      else
      {
        for ( i = 0; ; i += 12 ) /*0x465343*/
        {
          result = (*(int (__stdcall **)(unsigned int *, int, int, unsigned int))(*v8 + 16))( /*0x465355*/
                     v8,
                     i + *(unsigned int *)&v7[1].?[1420],
                     12,
                     0);
          if ( result < 0 ) /*0x46535a*/
            break; /*0x46535a*/
          if ( ++v3 >= (int)v9 ) /*0x465366*/
            return 0; /*0x465366*/
        }
      }
    }
  }
  return result; /*0x46536a*/
}
} // namespace gamemd
// 0x465380
namespace gamemd {
int BuildingTypeClass::GetClassIdentifier()
{
  unsigned int *v2; // [esp+8h] [ebp+8h]

  if ( !v2 ) /*0x465386*/
    return -2147467261; /*0x465388*/
  *v2 = -1366608933; /*0x465396*/
  v2[1] = 298976796; /*0x46539e*/
  v2[2] = 1610654892; /*0x4653a7*/
  v2[3] = unk_7E95CC; /*0x4653b0*/
  return 0; /*0x46538d*/
}
} // namespace gamemd
// 0x465D90
namespace gamemd {
int BuildingTypeClass::GetTypeIdentifier()
{
  return 7; /*0x465d95*/
}
} // namespace gamemd
// 0x465DA0
namespace gamemd {
int BuildingTypeClass::GetObjectSize()
{
  return 6040; /*0x465da5*/
}
} // namespace gamemd
// 0x465DB0
namespace gamemd {
int BuildingTypeClass::GetAuxField()
{
    return *((unsigned int *)this + 894);
}
} // namespace gamemd
// 0x465DC0
namespace gamemd {
int BuildingTypeClass::ddtor()
{
  char v3; // [esp+8h] [ebp+4h]

  BuildingTypeClass::CleanupMembers(); /*0x465dc3*/
  if ( (v3 & 1) != 0 ) /*0x465dcd*/
    RA2_OPDEL(); /*0x465dd0*/
  return (int)this; /*0x465dda*/
}
} // namespace gamemd
// 0x474A90
namespace gamemd {
int BuildingTypeClass::FindAnimByName(INIClass * aP1, unsigned char * a2, AnimTypeClass * aP3)
{
  int v4; // esi
  int v5; // eax
  bool v6; // zf
  char Destination[32]; // [esp+8h] [ebp-20h] BYREF

  INIClass::GetString( /*0x474aba*/
    (INIClass *)this,
    aP1,
    a2,
    *(char **)(*(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] + 4 * aP3) + 772),
    Destination,
    32);
  v4 = 0; /*0x474ac4*/
  if ( *(int *)stru_B054D0.__tail_10 <= 0 ) /*0x474ac8*/
    return aP3; /*0x474b06*/
  v5 = *(unsigned int *)&stru_B054D0.m_1[3]; /*0x474aca*/
  while ( 1 ) /*0x474ae6*/
  {
    v6 = _strcmpi(*(char **)(*(unsigned int *)(v5 + 4 * v4) + 772), Destination) == 0; /*0x474ae6*/
    v5 = *(unsigned int *)&stru_B054D0.m_1[3]; /*0x474ae8*/
    if ( v6 && *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] + 4 * v4) + 784) != 1 ) /*0x474af9*/
      break; /*0x474af9*/
    if ( ++v4 >= *(int *)stru_B054D0.__tail_10 ) /*0x474b04*/
      return aP3; /*0x474b04*/
  }
  return v4; /*0x474b08*/
}
} // namespace gamemd
// 0x478850
namespace gamemd {
unsigned int * BuildingTypeClass::loadBuildingProperty_b_5478850(int a2, int a3)
{
  void *v4; // ebx
  unsigned char *v5; // eax
  int v6; // ecx
  int v8; // eax
  unsigned char *v9; // ecx
  int v10; // edx

  v4 = 0; /*0x478859*/
    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = a2;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
    *this = &vt_VectorClass_RGBClass;
  if ( !a2 ) /*0x478870*/
        return this;
  if ( !a3 ) /*0x478878*/
  {
    v8 = RA2_OPNEW(3 * a2); /*0x4788a2*/
    if ( v8 ) /*0x4788ac*/
    {
      if ( a2 - 1 >= 0 ) /*0x4788b3*/
      {
        v9 = (unsigned char *)(v8 + 2); /*0x4788b5*/
        v10 = a2; /*0x4788b8*/
        do /*0x4788c5*/
        {
          *(v9 - 2) = 0; /*0x4788b9*/
          *(v9 - 1) = 0; /*0x4788bc*/
          *v9 = 0; /*0x4788bf*/
          v9 += 3; /*0x4788c1*/
          --v10; /*0x4788c4*/
        }
        while ( v10 ); /*0x4788c5*/
      }
      v4 = (void *)v8; /*0x4788c7*/
    }
        *((unsigned int *)this + 4) = v4;
        *((unsigned char *)this + 13) = 1;
        *((unsigned char *)this + 13) = 1;
  }
  if ( a2 - 1 >= 0 ) /*0x47887f*/
  {
    v5 = (unsigned char *)(a3 + 2); /*0x478881*/
    v6 = a2; /*0x478884*/
    do /*0x478891*/
    {
      *(v5 - 2) = 0; /*0x478885*/
      *(v5 - 1) = 0; /*0x478888*/
      *v5 = 0; /*0x47888b*/
      v5 += 3; /*0x47888d*/
      --v6; /*0x478890*/
    }
    while ( v6 ); /*0x478891*/
  }
    *((unsigned int *)this + 4) = a3;
    return this;
}
} // namespace gamemd
// 0x4C9680
namespace gamemd {
int BuildingTypeClass::GetPowerOutput(ObjectClass * aP1)
{
  int result; // eax
  int16_t v3; // dx

  result = aP1; /*0x4c9680*/
  if ( aP1 >= 127 ) /*0x4c9687*/
    result = 127; /*0x4c9689*/
  IDA_LOBYTE(v3) = 0; /*0x4c968e*/
  IDA_HIBYTE(v3) = result; /*0x4c9690*/
    *((unsigned int *)this + 40) = v3;
  return result; /*0x4c9696*/
}
} // namespace gamemd
// 0x747370
namespace gamemd {
int BuildingTypeClass::FindIndex()
{
  int v2; // esi

  if ( !this ) /*0x747376*/
    return -1; /*0x747376*/
  v2 = 0; /*0x74737d*/
  if ( dword_A83CF0 <= 0 ) /*0x747381*/
    return -1; /*0x7473a6*/
  while ( _strcmpi((char *)(*((unsigned int *)dword_A83CE4 + v2) + 36), (char *)this) ) /*0x74739a*/
  {
    if ( ++v2 >= dword_A83CF0 ) /*0x7473a4*/
      return -1; /*0x7473a4*/
  }
  return v2; /*0x7473a6*/
}
} // namespace gamemd