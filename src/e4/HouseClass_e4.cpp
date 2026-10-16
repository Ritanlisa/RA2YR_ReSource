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
#include "e4/classes/_w14_nocarrier_e4.hpp"
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
#include "e4/classes/ShroudClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/FacingClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/GadgetGrid_e4.hpp"  // G42.36 C2027 supply
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/SuperClass_e4.hpp"
// [w14e3] vocab extender (raw call-form evidence)
namespace gamemd { int initDropshipData(HouseClass *p_this); }  // x4:ida@0x4b69b0
namespace gamemd { int InitStatArray(int p0); }  // x4:signals@0x749060

// 0x43B5E0
namespace gamemd {  // G42.18 ns repair
void ** HouseClass::PsiWarn(InfantryClass * aP0, int a2, int arg0, void * a3)
{

  void *v6; // edi
  v6 = (void *)*((unsigned int *)dword_8B4154 + (a3)->FindIndex()); /*0x43b5fb*/
  int *v7; // eax
  AnimClass *v8; // eax
  void **v9; // esi
  int v11[3]; // [esp+Ch] [ebp-18h] BYREF
  unsigned char v12[12]; // [esp+18h] [ebp-Ch] BYREF
  v7 = (int *)(*(int (__thiscall **)(int, unsigned char *))(a2->RandomLoopDelay)(a2, v12); /*0x43b605*/
  v11[0] = *v7; /*0x43b60a*/
  v11[1] = v7[1]; /*0x43b616*/
  v11[2] = v7[2]; /*0x43b61d*/
  v8 = (AnimClass *)operator new(0x1C8u); /*0x43b621*/
  if ( v8 ) /*0x43b62b*/
    v9 = AnimClass::ctor(v8, v6, v11, 0, 1, (void *)0x600, 0, 0); /*0x43b647*/
  else
    v9 = 0; /*0x43b64b*/
  BuildingClass::SetField95((BuildingClass *)v9, arg0); /*0x43b654*/
  ((Function *)v9)->Method_424CA0(aP0); /*0x43b65c*/
  v9->SuperClass_19D = 1; /*0x43b661*/
  return v9; /*0x43b66a*/
}
}  // G42.18 ns repair
// 0x459840
namespace gamemd {
int HouseClass::GetRepairStepAmount()
{
  unsigned int *v1; // edx
  int result; // eax

  v1 = (unsigned int *)this->builtInfantryTypes[126]; /*0x459840*/
  result = v1->qEA4; /*0x459846*/
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
  int v2; // ebx
  int v3; // edi
  int result; // eax
  int v5; // esi

  v2 = dword_A8EC88; /*0x4adee1*/
  v3 = 0; /*0x4adee8*/
  if ( dword_A8EC88 > 0 ) /*0x4adeec*/
  {
    while ( 1 ) /*0x4adef8*/
    {
      result = (int)dword_A8EC7C; /*0x4adef8*/
      v5 = *((unsigned int *)dword_A8EC7C + v3); /*0x4adefd*/
      if ( !v5 ) /*0x4adf02*/
        goto LABEL_16; /*0x4adf02*/
      (*((unsigned char *)&(result))) = *(unsigned char *)(v5 + 129); /*0x4adf08*/
      if ( (unsigned char)result ) /*0x4adf10*/
        goto LABEL_16; /*0x4adf10*/
      result = (*(int (__thiscall **)(unsigned int))(*(unsigned int *)v5 + 44))(*((unsigned int *)dword_A8EC7C + v3)); /*0x4adf1a*/
      if ( result == 6 ) /*0x4adf20*/
      {
        (*((unsigned char *)&(result))) = a1; /*0x4adf22*/
        if ( a1 ) /*0x4adf28*/
          goto LABEL_16; /*0x4adf28*/
      }
      result = ((House *)(*(void **)(v5 + 540)))->IsHumanPlayer(); /*0x4adf34*/
      if ( (unsigned char)result ) /*0x4adf3b*/
        break; /*0x4adf3b*/
      if ( (*(int (__thiscall **)(int))(*(unsigned int *)v5 + 44))(v5) == 6 /*0x4adfa5*/
        && (*(((unsigned char *)&(dword_8871E0[1][2])) + (sizeof(dword_8871E0[1][2]) - 1)))
        && (uint8_t)HouseClass::IsAlliedWith(*(void **)(v5 + 540), dword_A83D4C) )
      {
        result = (*(int (__thiscall **)(int, unsigned int, int, unsigned int, unsigned int))(*(unsigned int *)v5 + 1164))(v5, 0, a2, 0, 0); /*0x4adfb9*/
      }
      else
      {
        result = (*(int (__thiscall **)(int))(*(unsigned int *)v5 + 132))(v5); /*0x4adfc5*/
        if ( result->u8_CD1 ) /*0x4adfcb*/
          goto LABEL_15; /*0x4adfd3*/
      }
      LABEL_16:
      if ( ++v3 >= v2 ) /*0x4adfe2*/
        return result; /*0x4adfe2*/
    }
    (*((unsigned char *)&(result))) = *(unsigned char *)(v5 + 1051); /*0x4adf3d*/
    if ( !(unsigned char)result ) /*0x4adf45*/
      goto LABEL_16; /*0x4adf45*/
    (*(void (__thiscall **)(int, unsigned int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)v5 + 1164))(v5, 0, 0, 0, 0); /*0x4adf57*/
    result = (*(int (__thiscall **)(int))(*(unsigned int *)v5 + 132))(v5); /*0x4adf61*/
    if ( !result->u8_CD1 ) /*0x4adf67*/
      goto LABEL_16; /*0x4adf6f*/
    LABEL_15:
    result = (*(int (__thiscall **)(int))(*(unsigned int *)v5 + 1048))(v5); /*0x4adfd5*/
      goto LABEL_16; /*0x4adfd9*/
  }
  return result; /*0x4adfea*/
}
}
// 0x4ADFF0
namespace gamemd {
int HouseClass::RevealShroudForAllies(char a1, int a2)
{
  int result; // eax
  int i; // ebp
  void **v4; // esi

  result = dword_8A03A0; /*0x4adff0*/
  for ( i = 0; i < dword_8A03A0; ++i ) /*0x4adffa*/
  {
    v4 = *(void ***)(dword_8A0394 + 4 * i); /*0x4ae010*/
    if ( v4 /*0x4ae02b*/
      && ((unsigned char)v4[5] & 1) != 0
      && ((*((int (__thiscall **)(unsigned int))*v4 + 11))(*(unsigned int *)(dword_8A0394 + 4 * i)) != 6 || !a1) )
    {
      if ( (uint8_t)((House *)(v4[135]))->IsHumanPlayer() ) /*0x4ae033*/
      {
        if ( *((unsigned char *)v4 + 1051) ) /*0x4ae03c*/
          (*((void (__thiscall **)(void **, unsigned int, int))*v4 + 72))(v4, 0, a2); /*0x4ae04d*/
      }
      else if ( (*((int (__thiscall **)(void **))*v4 + 11))(v4) == 6 /*0x4ae07d*/
             && (*(((unsigned char *)&(dword_8871E0[1][2])) + (sizeof(dword_8871E0[1][2]) - 1)))
             && (uint8_t)HouseClass::IsAlliedWith(v4[135], dword_A83D4C) )
      {
        (*((void (__thiscall **)(void **, int, unsigned int))*v4 + 72))(v4, a2, 0); /*0x4ae08d*/
      }
    }
    result = dword_8A03A0; /*0x4ae093*/
  }
  return result; /*0x4ae0a4*/
}
}
// 0x4F54A0
namespace gamemd {
int HouseClass::Construct(int a2, void *a2_1, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8, void *a9)
{

  int v3; // edx
  int v4; // ecx
  int v5; // ecx
  HouseClass *v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // edi
  int v18; // eax
  int v19; // ecx
  int v20; // edi
  int v21; // ecx
  int v22; // eax
  int v23; // edx
  int v24; // esi
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // edx
  int v29; // edi
  int v30; // eax
  int v31; // ecx
  int v32; // edi
  int v33; // ecx
  int v34; // eax
  int v35; // edx
  int v36; // ecx
  int v37; // esi
  int v38; // eax
  int v39; // ecx
  int v40; // eax
  int v41; // edx
  int v42; // ecx
  int v43; // eax
  int v44; // eax
  int v45; // esi
  int v46; // ecx
  int v47; // eax
  int v48; // eax
  int v49; // edx
  int v50; // esi
  int v51; // eax
  int v52; // eax
  int v53; // eax
  ConnectionPointClass *v54; // eax
  unsigned int *v55; // eax
  int v56; // eax
  int v57; // ecx
  int v58; // eax
  int v59; // edx
  int v61; // [esp+68h] [ebp-34h]
  int v62; // [esp+68h] [ebp-34h]
  int v63; // [esp+68h] [ebp-34h]
  int v64; // [esp+6Ch] [ebp-30h] BYREF
  int v65; // [esp+70h] [ebp-2Ch] BYREF
  int v66; // [esp+78h] [ebp-24h]
  char Destination[32]; // [esp+7Ch] [ebp-20h] BYREF
  int v68; // [esp+A0h] [ebp+4h]

  ((AbstractClass *)this)->Constructor(); /*0x4f54a9*/
  this->vtable4 = (void *)(-1); /*0x4f54b8*/
  this->IsAllocated = a2; /*0x4f54c2*/
  TagClassVector::Construct(&this->conYards, 0, 0); /*0x4f54c5*/
  this->u32_E = (int)&vt_DynamicVectorClass; /*0x4f54cf*/
  this->IsAllocated = 10; /*0x4f54d5*/
  this->q012 = 0; /*0x4f54d8*/
  (&this->abstractFlags)->BuildingConstructor(0, 0); /*0x4f54e2*/
  this->abstractFlags = (int)&vt_DynamicVectorClass; /*0x4f54e7*/
  this->q019 = 10; /*0x4f54ed*/
  this->nextArrayIndex = 0; /*0x4f54f0*/
  (&this->q01A)->BuildingConstructor(0, 0); /*0x4f54fa*/
  this->q01A = (int)&vt_DynamicVectorClass; /*0x4f54ff*/
  this->u8_1F = 10; /*0x4f5505*/
  this->u32_1E = 0; /*0x4f5508*/
  (&this->NeedsSaveOrLink)->BuildingConstructor(0, 0); /*0x4f5515*/
  this->NeedsSaveOrLink = (void*)(&vt_DynamicVectorClass); /*0x4f551a*/
  this->u32_25 = 10; /*0x4f5520*/
  this->vtable5 = 0; /*0x4f5523*/
  (&this->u32_26)->BuildingConstructor(0, 0); /*0x4f5530*/
  this->u32_26 = (int)&vt_DynamicVectorClass; /*0x4f5535*/
  this->q02B = 10; /*0x4f553b*/
  this->u32_2A = 0; /*0x4f553e*/
  (&this->vtable7)->BuildingConstructor(0, 0); /*0x4f554b*/
  /* X11: vtable install elided (implicit via DynamicVectorClass virtuals 0x4f5550) */
  this->u32_31 = 10; /*0x4f5556*/
  this->relatedTagsCount = 0; /*0x4f5559*/
  (&this->q032)->BuildingConstructor(0, 0); /*0x4f5566*/
  this->q032 = (void*)(&vt_DynamicVectorClass); /*0x4f556b*/
  this->q037 = 10; /*0x4f5571*/
  this->arrayIndex = 0; /*0x4f5574*/
  (&this->conYards)->BuildingConstructor(0, 0); /*0x4f5581*/
  this->conYards = (gamemd::BuildingClass**)(&vt_DynamicVectorClass); /*0x4f5586*/
  this->u32_3D = 10; /*0x4f558c*/
  this->conYardsCount = 0; /*0x4f558f*/
  (&this->q03E)->BuildingConstructor(0, 0); /*0x4f559c*/
  this->q03E = (int)&vt_DynamicVectorClass; /*0x4f55a1*/
  this->u32_43 = 10; /*0x4f55a7*/
  this->q042 = 0; /*0x4f55aa*/
  (&this->buildings)->BuildingConstructor(0, 0); /*0x4f55b7*/
  this->buildings = (gamemd::BuildingClass**)(&vt_DynamicVectorClass); /*0x4f55bc*/
  this->u32_49 = 10; /*0x4f55c2*/
  this->buildingsCount = 0; /*0x4f55c5*/
  (&this->u32_4A)->BuildingConstructor(0, 0); /*0x4f55d2*/
  this->u32_4A = (int)&vt_DynamicVectorClass; /*0x4f55d7*/
  this->q04F = 10; /*0x4f55dd*/
  this->q04E = 0; /*0x4f55e0*/
  (&this->unitRepairStations)->BuildingConstructor(0, 0); /*0x4f55ed*/
  this->unitRepairStations = (gamemd::BuildingClass**)(&vt_DynamicVectorClass); /*0x4f55f2*/
  this->u32_55 = 10; /*0x4f55f8*/
  this->repairStationsCount = 0; /*0x4f55fb*/
  this->u32_56 = 0; /*0x4f55fe*/
  this->u32_57 = 0; /*0x4f5604*/
  this->repairStationsCapacity = 0; /*0x4f5610*/
  this->q059 = 0; /*0x4f5617*/
  this->q05A = 0; /*0x4f5620*/
  StartingTechnoVector::Construct(&this->__pad_16C, 0, 0); /*0x4f5626*/
  this->u32_5B = (int)&vt_DynamicVectorClass; /*0x4f562b*/
  this->grindersCount = 10; /*0x4f5631*/
  this->u32_5F = 0; /*0x4f5634*/
  this->u32_61 = (int)dword_A8B230[43].vtable1; /*0x4f5648*/
  this->u32_62 = 0; /*0x4f564e*/
  this->u32_63 = 1072693248; /*0x4f5654*/
  this->grindersCapacity = 0; /*0x4f565a*/
  this->u32_65 = 1072693248; /*0x4f5660*/
  this->u32_66 = 0; /*0x4f5666*/
  this->u32_67 = 1072693248; /*0x4f566c*/
  this->absorbers = 0; /*0x4f5672*/
  this->u32_69 = 1072693248; /*0x4f5678*/
  this->u32_6A = 0; /*0x4f567e*/
  this->u32_6B = 1072693248; /*0x4f5684*/
  this->absorbersCount = 0; /*0x4f568a*/
  this->u32_6D = 1072693248; /*0x4f5690*/
  this->u32_6E = 0; /*0x4f5696*/
  this->u32_6F = 1072693248; /*0x4f569c*/
  this->absorbersCapacity = 0; /*0x4f56a2*/
  this->u32_71 = 0; /*0x4f56a8*/
  this->u32_72 = 0; /*0x4f56ae*/
  this->u32_73 = 0; /*0x4f56b7*/
  this->bunkers = 0; /*0x4f56bd*/
  this->q075 = 1; /*0x4f56c3*/
  this->q076 = 0; /*0x4f56cd*/
  this->u32_77 = 0; /*0x4f56d3*/
  this->bunkersCount = -1; /*0x4f56d9*/
  this->q079 = 0; /*0x4f56df*/
  this->currentPlayer = 0; /*0x4f56e5*/
  this->PlayerControl = 0; /*0x4f56eb*/
  this->production = 0; /*0x4f56f1*/
  this->autocreateAllowed = 0; /*0x4f56f7*/
  this->HouseClass_field_1F0 = 1; /*0x4f56fd*/
  this->u32_1F1 = 0; /*0x4f5704*/
  this->aiTriggersActive = 0; /*0x4f570a*/
  this->autoBaseBuilding = 0; /*0x4f5710*/
  this->isDiscoveredByPlayer = 0; /*0x4f5716*/
  this->defeated = 0; /*0x4f571c*/
  this->isGameOver = 0; /*0x4f5722*/
  this->isWinner = 0; /*0x4f5728*/
  this->isLoser = 0; /*0x4f572e*/
  this->civiliansEvacuated = 0; /*0x4f5734*/
  this->firestormActive = 0; /*0x4f573a*/
  this->hasThreatNode = 0; /*0x4f5740*/
  this->recheckTechTree = 1; /*0x4f5746*/
  this->occupiables = 0; /*0x4f574d*/
  this->u32_81 = 0; /*0x4f5753*/
  this->u32_208 = 0; /*0x4f5759*/
  this->q083 = -1; /*0x4f575f*/
  this->visionary = 0; /*0x4f5765*/
  this->mapIsClear = 0; /*0x4f576b*/
  this->unknownBool242 = 0; /*0x4f5771*/
  this->unknownBool243 = 0; /*0x4f5777*/
  this->hasBeenThieved = 0; /*0x4f577d*/
  this->repairing = 0; /*0x4f5783*/
  this->unknownBool246 = 0; /*0x4f5789*/
  this->unknownBool247 = 0; /*0x4f578f*/
  this->unknownBool248 = 0; /*0x4f5795*/
  this->allToHunt = 0; /*0x4f579b*/
  this->HouseClass_field_bool_24A = 0; /*0x4f57a1*/
  this->HouseClass_field_bool_24B = 1; /*0x4f57a7*/
  this->q093 = this->bunkers; /*0x4f57bb*/
  this->cloningVatsCapacity = 0; /*0x4f57c4*/
  SuperClassVector::Construct(&this->supers, 0, 0); /*0x4f57ca*/
  this->u8_95 = (int)&vt_DynamicVectorClass; /*0x4f57cf*/
  this->u32_9A = 10; /*0x4f57d5*/
  this->q099 = 0; /*0x4f57d8*/
  this->u8_9B = -1; /*0x4f57de*/
  this->secretLabsCount = -1; /*0x4f57e4*/
  this->u8_9D = -1; /*0x4f57ea*/
  this->u32_9E = -1; /*0x4f57f0*/
  this->u32_9F = 0; /*0x4f57f6*/
  this->secretLabsCapacity = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x4f5802*/
  this->u32_A2 = 0; /*0x4f5808*/
  v3 = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x4f580e*/
  this->u32_A5 = 0; /*0x4f5814*/
  this->u8_A3 = v3; /*0x4f581a*/
  this->u32_A6 = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x4f5825*/
  this->psychicDetectionCount = 0; /*0x4f582b*/
  v4 = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x4f5831*/
  this->u32_AB = 0; /*0x4f5837*/
  this->q0A9 = v4; /*0x4f583d*/
  this->psychicDetectionCapacity = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x4f5849*/
  this->u32_AE = 0; /*0x4f584f*/
  this->side2TechInfiltrated = 0; /*0x4f5855*/
  this->side1TechInfiltrated = 0; /*0x4f585b*/
  this->side0TechInfiltrated = 0; /*0x4f5861*/
  this->barracksInfiltrated = 0; /*0x4f5867*/
  this->warFactoryInfiltrated = 0; /*0x4f586d*/
  this->u32_B1 = 0; /*0x4f5879*/
  this->u32_B2 = 0; /*0x4f587f*/
  this->u32_B3 = 0; /*0x4f5885*/
  this->productionFactory_plants_count = 0; /*0x4f588b*/
  this->u8_B5 = 0; /*0x4f5891*/
  this->u8_B6 = 0; /*0x4f5897*/
  this->u8_B7 = 0; /*0x4f589d*/
  this->productionFactory_plants_capacity = 0; /*0x4f58a3*/
  this->q0B9 = 0; /*0x4f58a9*/
  this->u8_BA = 0; /*0x4f58af*/
  this->u8_BB = 0; /*0x4f58b5*/
  this->countResourceGatherers = 0; /*0x4f58bb*/
  this->q0BD = 0; /*0x4f58c1*/
  this->u8_BE = 0; /*0x4f58c7*/
  (&this->Delegate_BF)->GetField(); /*0x4f58cd*/
  this->q0C3 = 0; /*0x4f58d8*/
  this->countWarfactories = 0; /*0x4f58de*/
  (&this->Delegate_C5)->GetField(); /*0x4f58e4*/
  (&this->HouseClass_CA)->ClearStatArray(); /*0x4f58ef*/
  (&this->aircraftAltOwner)->ClearStatArray(); /*0x4f58fa*/
  (&this->HouseClass_4CE)->ClearStatArray(); /*0x4f5905*/
  (&this->q6D0)->ClearStatArray(); /*0x4f5910*/
  (&this->HouseClass_8D2)->ClearStatArray(); /*0x4f591b*/
  (&this->HouseClass_AD4)->ClearStatArray(); /*0x4f5926*/
  (&this->HouseClass_CD6)->ClearStatArray(); /*0x4f5931*/
  (&this->HouseClass_ED8)->ClearStatArray(); /*0x4f593c*/
  (&this->HouseClass_10DA)->ClearStatArray(); /*0x4f5947*/
  (&this->HouseClass_12DC)->ClearStatArray(); /*0x4f5952*/
  this->u8_14DE = 0; /*0x4f595c*/
  this->u8_14DF = 0; /*0x4f5962*/
  this->q14E0 = 0; /*0x4f5968*/
  this->u8_14E1 = 0; /*0x4f596e*/
  this->u8_14E2 = 0; /*0x4f5974*/
  this->u8_14E3 = 0; /*0x4f597a*/
  this->q14E4 = 1065353216; /*0x4f5980*/
  this->q14E5 = 1065353216; /*0x4f5986*/
  this->q14E6 = 1065353216; /*0x4f598c*/
  this->q14E7 = 1065353216; /*0x4f5992*/
  this->q14E8 = 1065353216; /*0x4f5998*/
  this->q14E9 = 0; /*0x4f599e*/
  this->q14EA = 0; /*0x4f59a4*/
  this->q14EB = 0; /*0x4f59aa*/
  this->q14EC = 0; /*0x4f59b0*/
  this->q14ED = 0; /*0x4f59b6*/
  this->q14EE = 0; /*0x4f59bc*/
  this->q14EF = 0; /*0x4f59c2*/
  this->u32_14F0 = 0; /*0x4f59c8*/
  this->u8_14F1 = 0; /*0x4f59ce*/
  this->u8_14F2 = 0; /*0x4f59d4*/
  this->q14F3 = 0; /*0x4f59da*/
  this->HouseClass_field_53D0 = 0; /*0x4f59e0*/
  this->u32_53D1 = 0; /*0x4f59e6*/
  this->u32_53D2 = 0; /*0x4f59ec*/
  this->u32_53D3 = 0; /*0x4f59f2*/
  this->u32_53D4 = 0; /*0x4f59f8*/
  this->u32_53D5 = 0; /*0x4f59fe*/
  this->u32_53D6 = 0; /*0x4f5a04*/
  this->u32_53D7 = 0; /*0x4f5a0a*/
  this->u32_53D8 = 0; /*0x4f5a10*/
  this->u8_14F7 = 0; /*0x4f5a16*/
  this->killedUnitsOfHouses = 0; /*0x4f5a1c*/
  this->u32_53E2 = 0; /*0x4f5a23*/
  this->u32_150D = 0; /*0x4f5a2a*/
  this->u8_1522 = 0; /*0x4f5a30*/
  this->u8_1523 = -1; /*0x4f5a36*/
  this->q1524 = *(unsigned int *)&DataGlobal_A8EB00[1176]; /*0x4f5a41*/
  this->q1525 = *(unsigned int *)&DataGlobal_A8EB00[1176]; /*0x4f5a4d*/
  this->q1526 = 0; /*0x4f5a53*/
  this->q1536 = 0; /*0x4f5a59*/
  this->u8_1537 = -1; /*0x4f5a5f*/
  this->u32_1538 = 0; /*0x4f5a65*/
  this->u8_1539 = 0; /*0x4f5a6b*/
  this->u8_153A = 0; /*0x4f5a71*/
  this->u8_153B = 1; /*0x4f5a77*/
  this->preferredTargetCell = 0; /*0x4f5a81*/
  this->u32_54F2 = 0; /*0x4f5a88*/
  this->preferredDefensiveCell = 0; /*0x4f5a8f*/
  this->u32_54F6 = 0; /*0x4f5a96*/
  this->preferredDefensiveCell2 = 0; /*0x4f5a9d*/
  this->u32_54FA = 0; /*0x4f5aa4*/
  this->u8_153F = -100; /*0x4f5ab1*/
  CounterClass::Construct(&this->CounterClass_2A80); /*0x4f5abb*/
  CounterClass::Construct(&this->q1545); /*0x4f5ac6*/
  CounterClass::Construct(&this->CounterClass_2A94); /*0x4f5ad1*/
  CounterClass::Construct(&this->CounterClass_154F); /*0x4f5adc*/
  CounterClass::Construct(&this->CounterClass_2AA8); /*0x4f5ae7*/
  CounterClass::Construct(&this->CounterClass_1559); /*0x4f5af2*/
  CounterClass::Construct(&this->CounterClass_2ABC); /*0x4f5afd*/
  CounterClass::Construct(&this->CounterClass_1563); /*0x4f5b08*/
  CounterClass::Construct(&this->CounterClass_2AD0); /*0x4f5b13*/
  CounterClass::Construct(&this->CounterClass_156D); /*0x4f5b1e*/
  CounterClass::Construct(&this->CounterClass_2AE4); /*0x4f5b29*/
  CounterClass::Construct(&this->CounterClass_1577); /*0x4f5b34*/
  this->u8_157C = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x4f5b40*/
  this->u8_157E = 0; /*0x4f5b46*/
  this->u8_157F = 0; /*0x4f5b4c*/
  this->q1580 = -1; /*0x4f5b59*/
  AngerVector::Construct(&this->angerNodes, 0, 0); /*0x4f5b5f*/
  this->u8_1581 = (int)&vt_DynamicVectorClass; /*0x4f5b6c*/
  this->q1586 = 10; /*0x4f5b76*/
  this->u8_1585 = 0; /*0x4f5b7c*/
  ScoutVector::Construct(&this->unkTimer3, 0, 0); /*0x4f5b82*/
  this->q1587 = (int)&vt_DynamicVectorClass; /*0x4f5b87*/
  this->u32_158C = 10; /*0x4f5b91*/
  this->u32_158B = 0; /*0x4f5b97*/
  this->u8_158D = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x4f5ba2*/
  this->u8_158F = 0; /*0x4f5ba8*/
  v5 = *(unsigned int *)&TeamTypeClass_Array; /*0x4f5bae*/
  this->q1592 = 0; /*0x4f5bb4*/
  this->q1590 = v5; /*0x4f5bba*/
  this->q1593 = -1; /*0x4f5bc0*/
  this->u8_1594 = -1; /*0x4f5bc6*/
  this->u8_1595 = -1; /*0x4f5bcc*/
  this->q1596 = -1; /*0x4f5bd2*/
  this->u8_1597 = 100; /*0x4f5bdd*/
  this->u8_1598 = 75; /*0x4f5be7*/
  this->u8_1599 = 75; /*0x4f5bed*/
  this->u8_159A = 75; /*0x4f5bf3*/
  this->u32_159B = 0; /*0x4f5bf9*/
  v6 = &this->HouseClass_159C; /*0x4f5bff*/
  v61 = 3; /*0x4f5c05*/
  do /*0x4f5c20*/
  {
    HouseClass::initDropshipData(v6); /*0x4f5c0f*/
    v6 = &v6->vtable7; /*0x4f5c18*/
    --v61; /*0x4f5c1c*/
  }
  while ( v61 ); /*0x4f5c20*/
  this->u32_15BD = 0; /*0x4f5c22*/
  this->u32_56F8 = 0; /*0x4f5c28*/
  this->u32_56F9 = 0; /*0x4f5c30*/
  this->u32_56FA = 0; /*0x4f5c36*/
  this->u32_56FB = 0; /*0x4f5c3c*/
  this->u32_56FC = -1; /*0x4f5c48*/
  this->u32_56FD = -1; /*0x4f5c4e*/
  this->u32_56FE = -1; /*0x4f5c54*/
  BaseClass::Constructor(&this->BaseClass_15C0); /*0x4f5c5a*/
  this->u32_5778 = 1; /*0x4f5c5f*/
  this->u32_5779 = 1; /*0x4f5c66*/
  this->u32_577A = 0; /*0x4f5c6d*/
  this->u32_577B = 0; /*0x4f5c73*/
  this->u8_15DF = 0; /*0x4f5c79*/
  this->u32_5780 = 0; /*0x4f5c7f*/
  this->u32_5782 = 0; /*0x4f5c86*/
  this->u32_5784 = 0; /*0x4f5c8d*/
  this->u32_5786 = 0; /*0x4f5c94*/
  this->q15E2 = 0; /*0x4f5c9b*/
  LOWORD(v7) = Math::RoundToInt(*(double *)(*(unsigned int *)&g_RulesClass_Instance + 5808) * 900.0); /*0x4f5cb3*/
  v8 = *(unsigned int *)&TeamTypeClass_Array; /*0x4f5cb8*/
  this->u8_15E5 = v7; /*0x4f5cbe*/
  this->u32_15E3 = v8; /*0x4f5cc4*/
  this->u32_15E6 = *(unsigned int *)&TeamTypeClass_Array; /*0x4f5cd5*/
  this->u8_15E8 = 1; /*0x4f5cdb*/
  this->u32_15E9 = *(unsigned int *)&TeamTypeClass_Array; /*0x4f5ce7*/
  this->u32_15EB = 0; /*0x4f5ced*/
  v9 = *(unsigned int *)&TeamTypeClass_Array; /*0x4f5cf3*/
  this->u32_15EE = 1; /*0x4f5cf9*/
  this->u32_15EC = v9; /*0x4f5cff*/
  this->u32_15EF = *(unsigned int *)&TeamTypeClass_Array; /*0x4f5d0b*/
  this->u32_15F1 = 1; /*0x4f5d11*/
  v10 = *(unsigned int *)&TeamTypeClass_Array; /*0x4f5d17*/
  this->u32_15F4 = 1; /*0x4f5d1d*/
  this->u32_15F2 = v10; /*0x4f5d23*/
  this->u32_15F5 = *(unsigned int *)&TeamTypeClass_Array; /*0x4f5d2f*/
  this->u8_15F7 = 1; /*0x4f5d35*/
  this->u32_15F8 = 0; /*0x4f5d3b*/
  this->q15FF4 = 0; /*0x4f5d41*/
  this->u32_16009 = 0; /*0x4f5d4d*/
  this->u8_5815 = 0; /*0x4f5d54*/
  this->u8_5818 = 0; /*0x4f5d5d*/
  (&this->waypointPathCount)->Construct(0, 0); /*0x4f5d63*/
  this->u8_5819 = (int)&vt_DynamicVectorClass; /*0x4f5d68*/
  this->u8_581E = 10; /*0x4f5d6e*/
  this->u8_581D = 0; /*0x4f5d71*/
  this->u32_581F = 0; /*0x4f5d74*/
  this->u8_5820 = 0; /*0x4f5d7a*/
  this->q5822 = 0; /*0x4f5d85*/
  this->q5823 = 1072693248; /*0x4f5d8b*/
  this->u8_5824 = 0; /*0x4f5d91*/
  this->u8_5825 = 1072693248; /*0x4f5d97*/
  this->u8_5827 = 1051260355; /*0x4f5da2*/
  this->u8_5828 = 1051260355; /*0x4f5da8*/
  this->u8_5829 = 1051260355; /*0x4f5dae*/
  this->u32_582A = 0; /*0x4f5db4*/
  this->u32_582B = 0; /*0x4f5dba*/
  this->u32_582C = 0; /*0x4f5dc0*/
  this->u32_582D = 0; /*0x4f5dc6*/
  *this = (int)&vt_HouseClass; /*0x4f5dcc*/
  this->AbstractClass_1 = (int)&vt_HouseClass; /*0x4f5dd3*/
  this->q002 = (int)&vt_HouseClass; /*0x4f5dda*/
  this->u32_3 = (int)&vt_HouseClass; /*0x4f5de1*/
  this->u32_9 = (int)&vt_HouseClass; /*0x4f5de8*/
  this->u32_A = (int)&vt_HouseClass; /*0x4f5def*/
  this->u32_B = (int)&vt_HouseClass; /*0x4f5dfb*/
  if ( &g_INI_DefaultBuffer ) /*0x4f5e04*/
  {
    strncpy(Destination, &g_INI_DefaultBuffer, 0x1Fu); /*0x4f5e18*/
    Destination[31] = 0; /*0x4f5e20*/
  }
  else
  {
    Destination[0] = 0; /*0x4f5e06*/
  }
  if ( Destination != &this->u32_16009 ) /*0x4f5e30*/
    memcpy(&this->u32_16009, Destination, 0x20u); /*0x4f5e41*/
  this->ObjectClass_1602A = 0; /*0x4f5e46*/
  AbstractClass::GenerateUniqueID(&this->AbstractClass_1); /*0x4f5e4e*/
  v11 = this->IsAllocated; /*0x4f5e53*/
  if ( v11 ) /*0x4f5e58*/
    this->u8_5815 = *(unsigned int *)(v11 + 192); /*0x4f5e60*/
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x4f5e99*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] + g_BuildingLoadQueue_Array.LightRedTint,
         0) )
  {
    v12 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x4f5ea6*/
    *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v12) = this; /*0x4f5eb5*/
  }
  if ( g_BuildingLoadQueue_Array.HalfDamageSmokeLocation1[1] < g_BuildingLoadQueue_Array.BuildCat[0] /*0x4f5eec*/
    || (BYTE1(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation1[0]) || !g_BuildingLoadQueue_Array.BuildCat[0])
    && g_BuildingLoadQueue_Array.HalfDamageSmokeLocation1[2] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.Buildup[0] + 8))(
         g_BuildingLoadQueue_Array.Buildup,
         g_BuildingLoadQueue_Array.HalfDamageSmokeLocation1[2] + g_BuildingLoadQueue_Array.BuildCat[0],
         0) )
  {
    v13 = g_BuildingLoadQueue_Array.HalfDamageSmokeLocation1[1]++; /*0x4f5ef9*/
    *(unsigned int *)(*(unsigned int *)&g_BuildingLoadQueue_Array.BuildupLoaded + 4 * v13) = this; /*0x4f5f08*/
  }
  if ( g_BuildingLoadQueue_Array.?[7] < g_BuildingLoadQueue_Array.?[5] /*0x4f5f3f*/
    || (BYTE1(g_BuildingLoadQueue_Array.?[6]) || !g_BuildingLoadQueue_Array.?[5])
    && (int)g_BuildingLoadQueue_Array.? > 0
    && (*(unsigned __int8 (**)(int *, char *, unsigned int))(g_BuildingLoadQueue_Array.?[3] + 8))(
         &g_BuildingLoadQueue_Array.?[3],
         (char *)g_BuildingLoadQueue_Array.? + g_BuildingLoadQueue_Array.?[5],
         0) )
  {
    v14 = g_BuildingLoadQueue_Array.?[7]++; /*0x4f5f4c*/
    *(unsigned int *)(g_BuildingLoadQueue_Count + 4 * v14) = this; /*0x4f5f5b*/
  }
  if ( *(int *)&DataGlobal_B0E860 < *(int *)&DataGlobal_B0E858 /*0x4f5f92*/
    || (g_BuildingLoadQueue_Array.?[29] || !*(unsigned int *)&DataGlobal_B0E858)
    && *(int *)&g_BuildingLoadQueue_Array.?[36] > 0
    && (*(unsigned __int8 (**)(char *, int, unsigned int))(*(unsigned int *)&g_BuildingLoadQueue_Active + 8))(
         &g_BuildingLoadQueue_Active,
         *(unsigned int *)&g_BuildingLoadQueue_Array.?[36] + *(unsigned int *)&DataGlobal_B0E858,
         0) )
  {
    v15 = (*(unsigned int *)&DataGlobal_B0E860)++; /*0x4f5f9f*/
    *(unsigned int *)(*(unsigned int *)&g_BuildingLoadQueue_Array.?[20] + 4 * v15) = this; /*0x4f5fae*/
  }
  if ( g_BuildingLoadQueue_Array.Foundation[0] < g_BuildingLoadQueue_Array.ExtraPowerBonus /*0x4f5fe5*/
    || (BYTE1(g_BuildingLoadQueue_Array.ExtraPowerDrain) || !g_BuildingLoadQueue_Array.ExtraPowerBonus)
    && g_BuildingLoadQueue_Array.Height > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.PowerBonus + 8))(
         &g_BuildingLoadQueue_Array.PowerBonus,
         g_BuildingLoadQueue_Array.ExtraPowerBonus + g_BuildingLoadQueue_Array.Height,
         0) )
  {
    v16 = g_BuildingLoadQueue_Array.Foundation[0]++; /*0x4f5ff2*/
    *(unsigned int *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v16) = this; /*0x4f6001*/
  }
  this->vtable4 = stru_A80220.?; /*0x4f6010*/
  if ( a2 ) /*0x4f6013*/
  {
    v62 = 0; /*0x4f601e*/
    if ( stru_A80220.? > 0 ) /*0x4f6024*/
    {
      LOBYTE(v66) = 0; /*0x4f602a*/
      Destination[4] = 0; /*0x4f602e*/
      do /*0x4f6196*/
      {
        v17 = *((unsigned int *)stru_A80220.? + v62); /*0x4f603b*/
        v18 = *(unsigned int *)(v17 + 22028); /*0x4f603e*/
        v19 = *(unsigned int *)(v17 + 22036); /*0x4f6044*/
        v20 = v17 + 22020; /*0x4f604a*/
        if ( v19 < v18 /*0x4f606c*/
          || (*(unsigned char *)(v20 + 13) || !v18)
          && (v21 = *(unsigned int *)(v20 + 20), v21 > 0)
          && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)v20 + 8))(v20, v21 + v18, 0) )
        {
          v22 = *(unsigned int *)(v20 + 16); /*0x4f6073*/
          v23 = *(unsigned int *)(v20 + 4); /*0x4f6076*/
          *(unsigned int *)(v20 + 16) = v22 + 1; /*0x4f607c*/
          *(unsigned int *)(v23 + 8 * v22) = this; /*0x4f607f*/
          *(unsigned int *)(v23 + 8 * v22 + 4) = 0; /*0x4f6084*/
        }
        v24 = *((unsigned int *)stru_A80220.? + v62); /*0x4f6097*/
        v25 = this->u32_1583; /*0x4f609a*/
        if ( this->u8_1585 < v25 /*0x4f60bc*/
          || (this->u32_5611 || !v25)
          && (v26 = this->q1586, v26 > 0)
          && (*(unsigned __int8 (**)(int *, int, unsigned int))(this->u8_1581 + 8))(&this->u8_1581, v26 + v25, 0) )
        {
          v27 = this->u8_1585; /*0x4f60c3*/
          v28 = this->u8_1582; /*0x4f60c6*/
          this->u8_1585 = v27 + 1; /*0x4f60cc*/
          *(unsigned int *)(v28 + 8 * v27) = v24; /*0x4f60cf*/
          *(unsigned int *)(v28 + 8 * v27 + 4) = 0; /*0x4f60d4*/
        }
        v29 = *((unsigned int *)stru_A80220.? + v62); /*0x4f60e1*/
        v30 = *(unsigned int *)(v29 + 22052); /*0x4f60e4*/
        v31 = *(unsigned int *)(v29 + 22060); /*0x4f60ea*/
        v32 = v29 + 22044; /*0x4f60f0*/
        if ( v31 < v30 /*0x4f6112*/
          || (*(unsigned char *)(v32 + 13) || !v30)
          && (v33 = *(unsigned int *)(v32 + 20), v33 > 0)
          && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)v32 + 8))(v32, v33 + v30, 0) )
        {
          v34 = *(unsigned int *)(v32 + 16); /*0x4f6119*/
          v35 = *(unsigned int *)(v32 + 4); /*0x4f611c*/
          *(unsigned int *)(v32 + 16) = v34 + 1; /*0x4f6122*/
          v36 = v66; /*0x4f6125*/
          *(unsigned int *)(v35 + 8 * v34) = this; /*0x4f6129*/
          *(unsigned int *)(v35 + 8 * v34 + 4) = v36; /*0x4f612c*/
        }
        v37 = *((unsigned int *)stru_A80220.? + v62); /*0x4f6145*/
        v38 = this->u32_1589; /*0x4f6148*/
        if ( this->u32_158B < v38 /*0x4f6167*/
          || (this->u32_5629 || !v38)
          && (v39 = this->u32_158C, v39 > 0)
          && (*(unsigned __int8 (**)(int *, int, unsigned int))(this->q1587 + 8))(&this->q1587, v39 + v38, 0) )
        {
          v40 = this->u32_158B; /*0x4f616e*/
          v41 = this->u32_1588; /*0x4f6171*/
          this->u32_158B = v40 + 1; /*0x4f6177*/
          v42 = *(unsigned int *)&Destination[4]; /*0x4f617a*/
          *(unsigned int *)(v41 + 8 * v40) = v37; /*0x4f617e*/
          *(unsigned int *)(v41 + 8 * v40 + 4) = v42; /*0x4f6181*/
        }
        ++v62; /*0x4f6192*/
      }
      while ( v62 < stru_A80220.? ); /*0x4f6196*/
    }
  }
  if ( stru_A80220.? < stru_A80220.? /*0x4f61d0*/
    || (BYTE1(stru_A80220.?) || !stru_A80220.?)
    && stru_A80220.? > 0
    && (*((unsigned __int8 (**)(void **, int, unsigned int))stru_A80220.? + 2))(
         &stru_A80220.?,
         stru_A80220.? + stru_A80220.?,
         0) )
  {
    v43 = stru_A80220.?++; /*0x4f61dd*/
    *((unsigned int *)stru_A80220.? + v43) = this; /*0x4f61ec*/
  }
  v63 = 0; /*0x4f61fc*/
  memset(&this->u8_15F9, 0, 0x10810u); /*0x4f6200*/
  if ( dword_A8E340 > 0 ) /*0x4f6208*/
  {
    do /*0x4f6290*/
    {
      v44 = __2_YAPAXI_Z(0x80u); /*0x4f6213*/
      if ( v44 ) /*0x4f621d*/
        v45 = SuperClass::Construct(v44, *((unsigned int *)dword_A8E334 + v63), (int)this); /*0x4f6235*/
      else
        v45 = 0; /*0x4f6239*/
      v46 = this->q097; /*0x4f623b*/
      if ( this->q099 < v46 /*0x4f6269*/
        || (this->u32_261 || !v46)
        && (v47 = this->u32_9A, v47 > 0)
        && (*(unsigned __int8 (**)(int *, int, unsigned int))(this->u8_95 + 8))(&this->u8_95, v47 + v46, 0) )
      {
        v48 = this->q099; /*0x4f6270*/
        v49 = this->q096; /*0x4f6273*/
        this->q099 = v48 + 1; /*0x4f6279*/
        *(unsigned int *)(v49 + 4 * v48) = v45; /*0x4f627c*/
      }
      ++v63; /*0x4f628c*/
    }
    while ( v63 < dword_A8E340 ); /*0x4f6290*/
  }
  v50 = a2; /*0x4f6296*/
  memset(&this->u8_14F9, 0, 0x50u); /*0x4f62a7*/
  memset(&this->u8_150E, 0, 0x50u); /*0x4f62b6*/
  if ( a2 ) /*0x4f62b8*/
  {
    if ( a2 == -36 ) /*0x4f62bf*/
    {
      Destination[0] = 0; /*0x4f62c1*/
    }
    else
    {
      strncpy(Destination, (const char *)(a2 + 36), 0x14u); /*0x4f62cf*/
      Destination[20] = 0; /*0x4f62d7*/
    }
    if ( Destination != &this->u8_57FD ) /*0x4f62e7*/
    {
      memcpy(&this->u8_57FD, Destination, 0x14u); /*0x4f62f8*/
      this->u32_16008 = Destination[20]; /*0x4f62fa*/
    }
    v50 = a2; /*0x4f62fb*/
    wcscpy(&this->u32_2C054, *(const wchar_t **)(a2 + 96)); /*0x4f630a*/
  }
  memset(&this->u8_15F9, 0, 0x10810u); /*0x4f6324*/
  this->q076 |= 1 << this->vtable4; /*0x4f633d*/
  v68 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 450, 1800); /*0x4f635a*/
  LOWORD(v51) = Math::RoundToInt((double)v68 * *(double *)(*(unsigned int *)&g_RulesClass_Instance + 4264)); /*0x4f6368*/
  this->u8_157C = *(unsigned int *)&TeamTypeClass_Array; /*0x4f6373*/
  this->u8_157D = *(unsigned int *)&Destination[4]; /*0x4f637d*/
  this->u8_157E = v51; /*0x4f6383*/
  this->u8_157F = v51; /*0x4f6389*/
  HouseClass::InitStatArray(&this->HouseClass_CA, dword_A8B228); /*0x4f639c*/
  HouseClass::InitStatArray(&this->aircraftAltOwner, dword_A8E358); /*0x4f63ad*/
  HouseClass::InitStatArray(&this->HouseClass_4CE, dword_A83CF0); /*0x4f63bf*/
  HouseClass::InitStatArray(&this->q6D0, dword_A83C78); /*0x4f63d1*/
  HouseClass::InitStatArray(&this->HouseClass_8D2, dword_A8B228); /*0x4f63e2*/
  HouseClass::InitStatArray(&this->HouseClass_AD4, dword_A8E358); /*0x4f63f4*/
  HouseClass::InitStatArray(&this->HouseClass_CD6, dword_A83CF0); /*0x4f6406*/
  HouseClass::InitStatArray(&this->HouseClass_ED8, dword_A83C78); /*0x4f6417*/
  HouseClass::InitStatArray(&this->HouseClass_10DA, dword_A83C78); /*0x4f6429*/
  HouseClass::InitStatArray(&this->HouseClass_12DC, 19); /*0x4f6436*/
  memset(&this->occupiablesCount, 0, 0x30u); /*0x4f644a*/
  if ( v50 ) /*0x4f644c*/
    this->hasThreatNode = 1; /*0x4f644e*/
  this->u8_7A = -1; /*0x4f6455*/
  v52 = this->IsAllocated; /*0x4f645f*/
  if ( v52 ) /*0x4f6464*/
  {
    v53 = *(unsigned int *)(v52 + 188); /*0x4f6466*/
    if ( v53 ) /*0x4f646e*/
    {
      if ( v53 == 1 ) /*0x4f647b*/
      {
        this->u8_7A = 1; /*0x4f647d*/
      }
      else if ( v53 == 2 ) /*0x4f6488*/
      {
        this->u8_7A = 2; /*0x4f648a*/
      }
    }
    else
    {
      this->u8_7A = 0; /*0x4f6470*/
    }
  }
  v64 = 0; /*0x4f6494*/
  HouseClass::QueryInterface((HouseClass *)this, &IID_IUnknown, &v64); /*0x4f649f*/
  v54 = (ConnectionPointClass *)__2_YAPAXI_Z(0x34u); /*0x4f64a6*/
  if ( v54 ) /*0x4f64b0*/
    v55 = ConnectionPointClass::Construct(v54, dword_7E9550, v64); /*0x4f64be*/
  else
    v55 = 0; /*0x4f64c5*/
  this->u32_581F = (int)v55; /*0x4f64cb*/
  (*(void (**)(unsigned int *, void *, int *))*v55)(v55, &unk_7F7CC0, &v65); /*0x4f64da*/
  v56 = this->u8_581B; /*0x4f64dc*/
  if ( this->u8_581D < v56 /*0x4f650a*/
    || (this->u32_16071 || !v56)
    && (v57 = this->u8_581E, v57 > 0)
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(this->u8_5819 + 8))(&this->u8_5819, v57 + v56, 0) )
  {
    v58 = this->u8_581D; /*0x4f6511*/
    v59 = this->u8_581A; /*0x4f6514*/
    this->u8_581D = v58 + 1; /*0x4f651a*/
    *(unsigned int *)(v59 + 4 * v58) = v65; /*0x4f6521*/
  }
  (*(void (**)(int))(*(unsigned int *)v64 + 8))(v64); /*0x4f652b*/
  return (int)this; /*0x4f652e*/

}
}

// 0x4F9A50
namespace gamemd {
int HouseClass::IsAlliedWith(void *a1, void *a2)
{
  int result; // eax
  int relatedTagsCount; // ecx
  HouseClass *other; // [esp+4h] [ebp+4h]

  result = (int)this; /*0x4f9a50*/
  if ( !other ) /*0x4f9a58*/
    goto LABEL_8; /*0x4f9a58*/
  if ( other == this ) /*0x4f9a5c*/
  {
    (*((unsigned char *)&(result))) = 1; /*0x4f9a5e*/
    return result; /*0x4f9a60*/
  }
  relatedTagsCount = other->relatedTagsCount; /*0x4f9a63*/
  if ( relatedTagsCount == result->relatedTagsCount ) /*0x4f9a6b*/
  {
    (*((unsigned char *)&(result))) = 1; /*0x4f9a6d*/
    return result; /*0x4f9a6f*/
  }
  if ( relatedTagsCount == -1 ) /*0x4f9a75*/
  LABEL_8:
    (*((unsigned char *)&(result))) = 0; /*0x4f9a8a*/
      else
      (*((unsigned char *)&(result))) = ((1 << relatedTagsCount) & result->HouseClass_field_timer_D) != 0; /*0x4f9a84*/
    return result; /*0x4f9a60*/
}
}
// 0x4FBE40
namespace gamemd {
int HouseClass::IsCellOccupied(IUnknown * aP1, char a3)
{
  char v4; // bl
  int result; // eax
  unsigned int *v7; // eax
  unsigned int *v8; // eax
  int16_t v11[2]; // [esp+Ch] [ebp-10h] BYREF
  unsigned char v10[12]; // [esp+10h] [ebp-Ch] BYREF

  v4 = 0; /*0x4fbe49*/
  if ( !aP1 ) /*0x4fbe50*/
  {
    (*((unsigned char *)&(result))) = 0; /*0x4fbf50*/
    return result; /*0x4fbf50*/
  }
  if ( (*(int (__thiscall **)(int))(aP1->vtable7)(aP1) == 1 ) /*0x4fbe60*/
  {
    v4 = HouseClass::ClearPrimaryFactory((unsigned int *)aP1); /*0x4fbe69*/
    if ( !v4 || this->ourFlagCoords != aP1 ) /*0x4fbe79*/
      goto LABEL_10; /*0x4fbe79*/
  }
  else
  {
    v7 = (unsigned int *)(*(int (__thiscall **)(int, unsigned char *))(aP1->buildingsCount)(aP1, v10); /*0x4fbe8a*/
    (*((unsigned short *)&(v11))) = *v7 / 256; /*0x4fbe9d*/
    (*(((unsigned short *)&(v11)) + 1)) = v7[1] / 256; /*0x4fbeb5*/
    *(unsigned int *)v11 = v11; /*0x4fbebe*/
    result = ((LayerClass *)(&dword_87F7E8))->CoordinatesLegal(v11); /*0x4fbec8*/
    if ( !(unsigned char)result ) /*0x4fbecf*/
      goto LABEL_10; /*0x4fbecf*/
    v8 = ((CellCoord *)(&dword_87F7E8))->To_CellObj(v11); /*0x4fbedb*/
    v4 = HouseClass::checkAutoProduction(v8); /*0x4fbee7*/
    if ( !v4 || this->ourFlagCoords != aP1 ) /*0x4fbef3*/
      goto LABEL_10; /*0x4fbef3*/
  }
  this->ourFlagCoords = 0; /*0x4fbef5*/
  LABEL_10:
  if ( a3 ) /*0x4fbf05*/
  {
    if ( this->dword_A8EF98 != dword_A8EF98 ) /*0x4fbf1b*/
    {
      *((unsigned int *)((CellCoord *)(&dword_87F7E8))->To_CellObjthis->killedUnitsOfHouses) + 17) = -1; /*0x4fbf35*/
      result = dword_A8EF98; /*0x4fbf3c*/
      this->dword_A8EF98 = dword_A8EF98; /*0x4fbf41*/
    }
  }
    (*((unsigned char *)&(result))) = v4; /*0x4fbf44*/
    return result; /*0x4fbf43*/
}
}
// 0x4FC790
namespace gamemd {
int HouseClass::DestroyAllBuildings()
{
  HouseClass *PriorityTarget; // eax
  int v2; // ebx
  int v3; // edi
  int v5; // esi
  TriggerClass *v6; // ecx
  int v8; // [esp+Ch] [ebp-4h] BYREF

  (*((unsigned char *)&(PriorityTarget))) = ((unsigned int *)&stru_A8EB00)[164]; /*0x4fc791*/
  v2 = 0; /*0x4fc799*/
  v3 = 0; /*0x4fc79b*/
  while ( v2 < *(int *)&((unsigned int *)&stru_A8EB00)[164] ) /*0x4fc7a1*/
  {
    v5 = *(unsigned int *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[152] + 4 * v2); /*0x4fc7a9*/
    PriorityTarget = (HouseClass *)ObjectClass::GetPriorityTarget((ObjectClass *)v5); /*0x4fc7ae*/
    if ( PriorityTarget != this /*0x4fc7cf*/
      || (PriorityTarget = (HouseClass *)(*(int (__thiscall **)(int))(v5->fallRate)(v5),
          PriorityTarget != 6)
      || ((*((unsigned char *)&(PriorityTarget))) = v5->inLimbo, (unsigned char)PriorityTarget)
      || v5 == v3 )
    {
      ++v2; /*0x4fc810*/
    }
    else
    {
                                 v8 = v5->health; /*0x4fc7d4*/
                                 v6 = v5->temporalTargetingMe; /*0x4fc7d8*/
                                 if ( v6 ) /*0x4fc7e0*/
                                   TriggerClass::UnlinkTags(v6); /*0x4fc7e2*/
                                 (*((unsigned char *)&(PriorityTarget))) = (*(int (__thiscall **)(int, int *, unsigned int, unsigned int, unsigned int, int, int, unsigned int))(v5->idleActionTimer)( /*0x4fc806*/
                                 v5,
                                 &v8,
                                 0,
                                 *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 4008),
                                 0,
                                 1,
                                 1,
                                 0);
                                 v3 = v5; /*0x4fc80c*/
    }
  }
  return (char)PriorityTarget; /*0x4fc81a*/
}
}
// 0x4FC820
namespace gamemd {
int HouseClass::DestroyAllNonBuildingsNonNaval()
{
  int PriorityTarget; // eax
  int v2; // ebx
  int v3; // edi
  int v5; // esi
  TriggerClass *v6; // ecx
  int v8; // [esp+Ch] [ebp-4h] BYREF

  (*((unsigned char *)&(PriorityTarget))) = ((unsigned int *)&stru_A8EB00)[164]; /*0x4fc821*/
  v2 = 0; /*0x4fc829*/
  v3 = 0; /*0x4fc82b*/
  while ( v2 < *(int *)&((unsigned int *)&stru_A8EB00)[164] ) /*0x4fc831*/
  {
    v5 = *(unsigned int *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[152] + 4 * v2); /*0x4fc83d*/
    PriorityTarget = ObjectClass::GetPriorityTarget((ObjectClass *)v5); /*0x4fc842*/
    if ( (HouseClass *)PriorityTarget != this /*0x4fc877*/
      || (PriorityTarget = (*(int (__thiscall **)(int))(v5->fallRate)(v5), PriorityTarget == 6)
      || ((*((unsigned char *)&(PriorityTarget))) = v5->inLimbo, (unsigned char)PriorityTarget)
      || (PriorityTarget = (*(int (__thiscall **)(int))(v5->hasParachute)(v5), *(unsigned char *)(PriorityTarget + 3278))
      || v5 == v3 )
    {
      ++v2; /*0x4fc8b8*/
    }
    else
    {
                                 v8 = v5->health; /*0x4fc87c*/
                                 v6 = v5->temporalTargetingMe; /*0x4fc880*/
                                 if ( v6 ) /*0x4fc888*/
                                   TriggerClass::UnlinkTags(v6); /*0x4fc88a*/
                                 (*((unsigned char *)&(PriorityTarget))) = (*(int (__thiscall **)(int, int *, unsigned int, unsigned int, unsigned int, int, int, unsigned int))(v5->idleActionTimer)( /*0x4fc8ae*/
                                 v5,
                                 &v8,
                                 0,
                                 *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 4008),
                                 0,
                                 1,
                                 1,
                                 0);
                                 v3 = v5; /*0x4fc8b4*/
    }
  }
  return PriorityTarget; /*0x4fc8c6*/
}
}
// 0x4FC8D0
namespace gamemd {
int HouseClass::DestroyAllNonBuildingsNaval()
{
  int PriorityTarget; // eax
  int v2; // ebx
  int v3; // edi
  int v5; // esi
  TriggerClass *v6; // ecx
  int v8; // [esp+Ch] [ebp-4h] BYREF

  (*((unsigned char *)&(PriorityTarget))) = ((unsigned int *)&stru_A8EB00)[164]; /*0x4fc8d1*/
  v2 = 0; /*0x4fc8d9*/
  v3 = 0; /*0x4fc8db*/
  while ( v2 < *(int *)&((unsigned int *)&stru_A8EB00)[164] ) /*0x4fc8e1*/
  {
    v5 = *(unsigned int *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[152] + 4 * v2); /*0x4fc8ed*/
    PriorityTarget = ObjectClass::GetPriorityTarget((ObjectClass *)v5); /*0x4fc8f2*/
    if ( (HouseClass *)PriorityTarget != this /*0x4fc927*/
      || (PriorityTarget = (*(int (__thiscall **)(int))(v5->fallRate)(v5), PriorityTarget == 6)
      || ((*((unsigned char *)&(PriorityTarget))) = v5->inLimbo, (unsigned char)PriorityTarget)
      || (PriorityTarget = (*(int (__thiscall **)(int))(v5->hasParachute)(v5), !*(unsigned char *)(PriorityTarget + 3278))
      || v5 == v3 )
    {
      ++v2; /*0x4fc968*/
    }
    else
    {
                                 v8 = v5->health; /*0x4fc92c*/
                                 v6 = v5->temporalTargetingMe; /*0x4fc930*/
                                 if ( v6 ) /*0x4fc938*/
                                   TriggerClass::UnlinkTags(v6); /*0x4fc93a*/
                                 (*((unsigned char *)&(PriorityTarget))) = (*(int (__thiscall **)(int, int *, unsigned int, unsigned int, unsigned int, int, int, unsigned int))(v5->idleActionTimer)( /*0x4fc95e*/
                                 v5,
                                 &v8,
                                 0,
                                 *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 4008),
                                 0,
                                 1,
                                 1,
                                 0);
                                 v3 = v5; /*0x4fc964*/
    }
  }
  return PriorityTarget; /*0x4fc976*/
}
}
// 0x501540
namespace gamemd {
int HouseClass::CanAlly(HouseClass * aP1)
{
  int v3; // ecx
  int v5; // edi
  int v6; // ebp
  HouseClass *v7; // edx
  int v9; // eax
  int v10; // eax

  if ( aP1 ) /*0x50154a*/
  {
    if ( aP1 == this ) /*0x50154e*/
      return 0; /*0x50154e*/
    v3 = aP1->relatedTagsCount; /*0x501550*/
    if ( v3 == this->relatedTagsCount || v3 != -1 && (this->HouseClass_field_timer_D & (1 << v3)) != 0 ) /*0x501573*/
      return 0; /*0x501576*/
  }
  if ( *(unsigned int *)(aP1->relatedTagsCapacity + 188) == HouseTypeClass::Find(g_INI_Key_Civilian) && dword_A8B238[0] ) /*0x501598*/
    return 0; /*0x50159b*/
  if ( dword_A8E7AC ) /*0x5015a8*/
    return 1; /*0x5015ab*/
  if ( this->defeated ) /*0x5015b1*/
    return 0; /*0x5015bc*/
  v5 = 0; /*0x5015c8*/
  v6 = 0; /*0x5015ca*/
  if ( dword_A80238 > 0 ) /*0x5015ce*/
  {
    v7 = dword_A8022C; /*0x5015d0*/
    dword_A80238 = dword_A80238; /*0x5015d7*/
    do /*0x50162c*/
    {
      v9 = *(unsigned int *)v7->vfptr; /*0x5015d9*/
      if ( !*(unsigned char *)(*(unsigned int *)v7->vfptr + 501) && !*(unsigned char *)(*(unsigned int *)(v9 + 52) + 422) ) /*0x5015e8*/
      {
        ++v5; /*0x5015f1*/
        if ( v9 ) /*0x5015f4*/
        {
          if ( v9 == this /*0x501625*/
            || (v10 = *(unsigned int *)(v9 + 48), v10 == this->relatedTagsCount)
            || v10 != -1 && ((1 << v10) & this->HouseClass_field_timer_D) != 0 )
          {
            ++v6; /*0x501627*/
          }
        }
      }
      v7 = &v7->vtable2; /*0x501628*/
      --dword_A80238; /*0x50162b*/
    }
    while ( dword_A80238 ); /*0x50162c*/
  }
  return v5 != v6 + 1; /*0x501575*/
}
}
// 0x501640
namespace gamemd {
int HouseClass::CanDetect()
{
  int result; // eax
  char v2; // bl
  int nextArrayIndex; // ecx
  int i; // ebp
  unsigned int v5; // esi
  int j; // edi
  char v7; // cl

  result = *(unsigned int *)&g_RulesClass_Instance; /*0x501640*/
  v2 = *(unsigned char *)(*(unsigned int *)&g_RulesClass_Instance + 5301); /*0x50164d*/
  if ( dword_A8B23C /*0x501662*/
    && (result = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->vfptr + 1))(dword_A8B23C), (unsigned char)result)
    || v2 )
  {
    result = (int)dword_A8B230; /*0x501668*/
    if ( !(*((unsigned char *)&(dword_A8B230[127].vfptr1))) ) /*0x50166d*/
    {
      nextArrayIndex = stru_A80220.nextArrayIndex; /*0x50167b*/
      for ( i = 0; i < nextArrayIndex; ++i ) /*0x501685*/
      {
        v5 = *((unsigned int *)stru_A80220.vfptr3 + i); /*0x501695*/
        if ( v5 ) /*0x50169a*/
        {
          (*((unsigned char *)&(result))) = *(unsigned char *)(v5 + 501); /*0x5016a0*/
          if ( !(unsigned char)result ) /*0x5016a8*/
          {
            result = *(unsigned int *)&dword_A8B238; /*0x5016ae*/
            (*((unsigned char *)&(result))) = *(unsigned char *)(v5 + 492); /*0x5016b5*/
            if ( !*(unsigned int *)&dword_A8B238 ) /*0x5016bb*/
              (*((unsigned char *)&(result))) = (unsigned char)result || *(unsigned char *)(v5 + 493); /*0x5016cf*/
            if ( !(unsigned char)result ) /*0x5016d3*/
            {
              *(unsigned char *)(v5 + 586) = 1; /*0x5016d5*/
              nextArrayIndex = stru_A80220.nextArrayIndex; /*0x5016db*/
              for ( j = 0; j < stru_A80220.nextArrayIndex; ++j ) /*0x5016e5*/
              {
                result = *((unsigned int *)stru_A80220.vfptr3 + j); /*0x5016ec*/
                if ( result && !result->MaximumBaseDefenseValue ) /*0x5016f3*/
                {
                  v7 = result->DeactivateSound; /*0x501705*/
                  if ( !*(unsigned int *)&dword_A8B238 ) /*0x50170b*/
                    v7 = v7 || result->u32_1ED; /*0x50171f*/
                  if ( v7 ) /*0x501728*/
                    (*((unsigned char *)&(result))) = HouseClass::SetAlliance(v5, (HouseClass *)result, 0); /*0x50172a*/
                  else
                    result = HouseClass::HandleAlliance((int *)v5, result, 0); /*0x501731*/
                }
                nextArrayIndex = stru_A80220.nextArrayIndex; /*0x501736*/
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x50174c*/
}
}
// 0x503040
namespace gamemd {
AbstractClass * * HouseClass::SaveLoad_Prefix(int a1, LPSTREAM pStm)
{

  HouseClass *v2; // esi
  int i; // edi
  int j; // edi
  int v5; // ecx
  int lastBuiltInfantryType; // eax
  int v7; // ecx
  int v8; // eax
  LPSTREAM v9; // edi
  int result; // eax
  int *planningPaths; // ebp
  int v12; // ebx
  HouseClass *v13; // ebp
  int v14; // ebx
  int v15; // ecx
  bool v16; // zf
  int v17; // edx
  int supersCapacity; // ecx
  int lastBuiltAircraftType; // eax
  int v20; // eax
  int supersCount; // edx
  int v22; // eax
  int v23; // eax
  int conYardsCapacity; // ecx
  int buildingsCapacity; // eax
  int buildingsCount; // eax
  int conYardsCount; // edx
  int v28; // eax
  int v29; // eax
  int angerNodesCapacity; // ecx
  int scoutNodesCapacity; // eax
  int scoutNodesCount; // eax
  int angerNodesCount; // edx
  int k; // ebp
  int v35; // edx
  int v36; // edx
  int v37; // ecx
  int v38; // eax
  int v39; // eax
  int v40; // edx
  int v41; // eax
  int m; // ebp
  // w15f4: v3-export truncated tail (RHS lost): int ... ...
  // live body via get_context/0x503040 — w15f4 regrafted decls only
  int v43; // eax
  int v44; // eax
  int repairStationsCapacity; // ecx
  int grindersCapacity; // eax
  int grindersCount; // eax
  int repairStationsCount; // edx
  int v49; // eax
  int v50; // eax
  int absorbersCapacity; // ecx
  int bunkersCapacity; // eax
  int bunkersCount; // eax
  int absorbersCount; // edx
  int v55; // eax
  int v56; // eax
  int occupiablesCapacity; // ecx
  int cloningVatsCapacity; // eax
  int cloningVatsCount; // eax
  int occupiablesCount; // edx
  int v61; // eax
  int v62; // eax
  int secretLabsCapacity; // ecx
  int psychicDetectionCapacity; // eax
  int psychicDetectionCount; // eax
  int secretLabsCount; // edx
  int v67; // eax
  int v68; // eax
  int productionFactory_plants_capacity; // ecx
  int countWarfactories; // eax
  int countResourceDestinations; // eax
  int productionFactory_plants_count; // edx
  int v73; // eax
  int v74; // eax
  int v75; // ecx
  int aiDifficulty; // eax
  int startingUnitsCapacity; // eax
  int unitsSelfHeal; // edx
  int v79; // eax
  int v80; // eax
  int v81; // ecx
  int v82; // eax
  int v83; // eax
  int v84; // edx
  int v85; // eax
  int v86; // eax
  int v87; // ecx
  int v88; // eax
  int v89; // eax
  int v90; // edx
  int v91; // eax
  int v92; // eax
  int v93; // ecx
  int v94; // eax
  int v95; // eax
  int v96; // edx
  int v97; // eax
  int v98; // eax
  int altAllies; // ecx
  int v100; // eax
  int startingEdge; // eax
  int techLevel; // edx
  int v103; // eax
  int v104; // eax
  int v105; // ecx
  int v106; // eax
  int v107; // eax
  int v108; // edx
  int v109; // eax
  int v110; // ebp
  int v111; // eax
  int v112; // ecx
  int v113; // eax
  int v114; // eax
  int v115; // edx
  int n; // ebp
  int ii; // ebp
  int jj; // ebp
  int kk; // ebp
  int mm; // ebp
  int nn; // ebp
  int i1; // ebp
  int i2; // ebp
  int i3; // ebp
  int i4; // ebp
  int i5; // ebp
  int i6; // ebp
  int i7; // ebp
  int i8; // ebp
  int v130; // eax
  int v131; // [esp+2A4h] [ebp-24h]
  int v132; // [esp+2A4h] [ebp-24h]
  int v133; // [esp+2B8h] [ebp-10h] BYREF
  int v134; // [esp+2BCh] [ebp-Ch] BYREF
  int v135; // [esp+2C0h] [ebp-8h]
  int v136; // [esp+2C4h] [ebp-4h] BYREF
}
}


// 0x505360
namespace gamemd {
int HouseClass::PrerequisitesForTechnoTypeAreListed(int a1, VectorClass_flat * aP1, TechnoTypeClass * aP2)
{
  int result; // eax
  int v4; // ecx
  int v5; // edx
  int *HarvesterUnit; // esi
  int v7; // ebx
  int v8; // eax
  int v9; // ecx
  unsigned int *v10; // edx
  int v11; // [esp+10h] [ebp-4h]

  result = a1; /*0x505361*/
  v11 = 0; /*0x505371*/
  if ( a1->q648 > 0 ) /*0x505379*/
  {
    do /*0x505395*/
    {
      result = *(unsigned int *)(a1->u32_63C + 4 * v11); /*0x505395*/
      if ( result < 0 ) /*0x50539a*/
      {
        HarvesterUnit = 0; /*0x5053cb*/
        switch ( result ) /*0x5053d2*/
        {
          case -6: /*0x5053d2*/
            HarvesterUnit = &dword_8871E0->DetailMinFrameRateNormal + 1; /*0x505423*/
            break; /*0x505423*/
          case -5: /*0x5053d2*/
            HarvesterUnit = &dword_8871E0->AmmoCrateDamage; /*0x505415*/
            break; /*0x50541b*/
          case -4: /*0x5053d2*/
            HarvesterUnit = &dword_8871E0->InfantryBaseMult[2]; /*0x505407*/
            break; /*0x50540d*/
          case -3: /*0x5053d2*/
            HarvesterUnit = dword_8871E0->DetailMinFrameRateNormal; /*0x5053fa*/
            break; /*0x505400*/
          case -2: /*0x5053d2*/
            HarvesterUnit = &dword_8871E0->DetailBufferZoneWidth; /*0x5053ec*/
            break; /*0x5053f2*/
          case -1: /*0x5053d2*/
            HarvesterUnit = &dword_8871E0->CHRONOSK_SHP; /*0x5053de*/
            break; /*0x5053e4*/
          default:
            break;
        }
        result = HarvesterUnit[4]; /*0x505429*/
        v7 = 0; /*0x50542c*/
        if ( result <= 0 ) /*0x505430*/
        {
  LABEL_24:
          (*((unsigned char *)&(result))) = 0; /*0x505475*/
    return result; /*0x50547c*/
        }
        while ( 1 ) /*0x505437*/
        {
          v8 = (*(int (__thiscall **)(int *, int))(*HarvesterUnit + 24))(HarvesterUnit, v7); /*0x505437*/
          v9 = 0; /*0x50543a*/
          if ( aP2 > 0 ) /*0x50543e*/
            break; /*0x50543e*/
          LABEL_20:
          result = HarvesterUnit[4]; /*0x50544f*/
            if ( ++v7 >= result ) /*0x505455*/
              goto LABEL_24; /*0x505455*/
        }
        v10 = aP1->vtable2; /*0x505440*/
        while ( *v10 != v8 ) /*0x505445*/
        {
          ++v9; /*0x505447*/
          ++v10; /*0x505448*/
          if ( v9 >= aP2 ) /*0x50544d*/
            goto LABEL_20; /*0x50544d*/
        }
      }
      else
      {
        v4 = 0; /*0x50539c*/
        if ( aP2 <= 0 ) /*0x5053a0*/
          goto LABEL_24; /*0x5053a0*/
        v5 = *((unsigned int *)dword_A83C6C + result); /*0x5053ac*/
        result = aP1->vtable2; /*0x5053af*/
        while ( *(unsigned int *)result != v5 ) /*0x5053b4*/
        {
          ++v4; /*0x5053ba*/
          result += 4; /*0x5053bb*/
          if ( v4 >= aP2 ) /*0x5053c0*/
            goto LABEL_24; /*0x5053c0*/
        }
      }
      result = v11 + 1; /*0x505461*/
      v11 = result; /*0x505468*/
    }
    while ( result < a1->q648 ); /*0x505395*/
  }
  (*((unsigned char *)&(result))) = 1; /*0x50547f*/
  return result; /*0x505475*/
}
}
// 0x506EF0
namespace gamemd {
AbstractClass * * HouseClass::AutoBuildScanAndSort(int a2, unsigned int * a3)
{

  DynamicVector *v5; // edi
  int v6; // ebx
  size_t v7; // esi
  unsigned int *v8; // ebx
  int v9; // eax
  unsigned short *v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  __int16 v13; // ax
  int v14; // edi
  unsigned int *v15; // edi
  int v16; // eax
  char *v17; // esi
  int v18; // ecx
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  int v22; // eax
  int v23; // esi
  unsigned short *v24; // eax
  __int16 v25; // cx
  __int16 v26; // ax
  int v27; // edx
  int v28; // kr00_4
  unsigned int v29; // edi
  int v30; // ebx
  int v31; // eax
  int v32; // edx
  void *v33; // ecx
  int v34; // edx
  int v35; // eax
  void **p_DynamicVector_field_0x10; // esi
  char *v37; // ecx
  bool v38; // cc
  int v39; // ecx
  int v40; // eax
  float v41; // edx
  int v42; // edi
  int v43; // ebx
  int Capacity; // ecx
  int v45; // esi
  int v46; // eax
  int v47; // eax
  int v48; // ecx
  int *v51; // esi
  int v52; // ebx
  int v54; // eax
  float v55; // esi
  void *v56; // eax
  bool v57; // zf
  int *v58; // esi
  int v59; // ebx
  void *v60; // eax
  int v62; // eax
  int v63; // ecx
  unsigned int *v64; // eax
  int v65; // edi
  int v66; // ecx
  unsigned int v67; // edi
  unsigned int v68; // eax
  char *v69; // ecx
  int v70; // edx
  unsigned int *v71; // ebx
  int v72; // eax
  int v73; // esi
  int v74; // edx
  char *v75; // edi
  int v76; // ebx
  int v77; // eax
  size_t v78; // eax
  signed int i; // edi
  unsigned int *v80; // esi
  int v81; // eax
  unsigned int *v82; // esi
  int v83; // edx
  int v84; // eax
  int v85; // ecx
  int v86; // ecx
  unsigned int *v87; // eax
  float v88; // edx
  int v89; // ecx
  unsigned int *v90; // eax
  unsigned int *BuildableFromArray; // eax
  int v92; // ecx
  unsigned int *v93; // edx
  int v94; // eax
  int v95; // eax
  int v96; // edx
  int v97; // ecx
  int v98; // eax
  unsigned int *v99; // esi
  unsigned int *v100; // eax
  int v101; // eax
  double v102; // [esp+Ch] [ebp-174h]
  double v103; // [esp+Ch] [ebp-174h]
  double v104; // [esp+14h] [ebp-16Ch]
  double v105; // [esp+14h] [ebp-16Ch]
  int v106; // [esp+2Ch] [ebp-154h] BYREF
  float v107; // [esp+30h] [ebp-150h]
  int v108; // [esp+34h] [ebp-14Ch]
  float v109; // [esp+38h] [ebp-148h]
  int v110; // [esp+3Ch] [ebp-144h] BYREF
  int v111; // [esp+40h] [ebp-140h]
  float v112; // [esp+44h] [ebp-13Ch]
  void *Base; // [esp+48h] [ebp-138h] BYREF
  size_t NumOfElements; // [esp+4Ch] [ebp-134h]
  signed int v115; // [esp+50h] [ebp-130h]
  int v116; // [esp+54h] [ebp-12Ch]
  int v117; // [esp+58h] [ebp-128h]
  void *v118; // [esp+5Ch] [ebp-124h]
  VectorClass v119; // [esp+60h] [ebp-120h] BYREF
  int v120; // [esp+70h] [ebp-110h]
  int v121; // [esp+74h] [ebp-10Ch]
  void *Block; // [esp+78h] [ebp-108h]
  void *v123; // [esp+7Ch] [ebp-104h]
  int v124; // [esp+80h] [ebp-100h]
  unsigned int v125[2]; // [esp+84h] [ebp-FCh] BYREF
  VectorClass v126; // [esp+8Ch] [ebp-F4h] BYREF
  int v127; // [esp+9Ch] [ebp-E4h]
  int v128; // [esp+A0h] [ebp-E0h]
  DistributionVector_BuildingType v129; // [esp+A4h] [ebp-DCh] BYREF
  void *v130; // [esp+A8h] [ebp-D8h]
  int v131; // [esp+ACh] [ebp-D4h]
  int v132; // [esp+B0h] [ebp-D0h]
  int v133; // [esp+B4h] [ebp-CCh]
  int v134; // [esp+B8h] [ebp-C8h]
  int v135; // [esp+BCh] [ebp-C4h]
  unsigned int v136[2]; // [esp+C0h] [ebp-C0h] BYREF
  int v137; // [esp+C8h] [ebp-B8h] BYREF
  void *v138; // [esp+CCh] [ebp-B4h]
  int v139; // [esp+D0h] [ebp-B0h]
  int v140; // [esp+D4h] [ebp-ACh]
  int v141; // [esp+D8h] [ebp-A8h]
  int v142; // [esp+E0h] [ebp-A0h] BYREF
  void *v143; // [esp+E4h] [ebp-9Ch]
  int v144; // [esp+E8h] [ebp-98h]
  int v145; // [esp+ECh] [ebp-94h]
  int v146; // [esp+F0h] [ebp-90h]
  int v147; // [esp+F8h] [ebp-88h] BYREF
  void *v148; // [esp+FCh] [ebp-84h]
  int v149; // [esp+100h] [ebp-80h]
  int v150; // [esp+104h] [ebp-7Ch]
  int v151; // [esp+108h] [ebp-78h]
  unsigned int v152[4]; // [esp+110h] [ebp-70h]
  DynamicVector v153; // [esp+120h] [ebp-60h] BYREF

  _EBP = this; /*0x506efc*/
  v124 = -1; /*0x506efe*/
  v106 = 999999; /*0x506f06*/
  v129 = 0; /*0x506f0e*/
  v130 = 0; /*0x506f15*/
  v131 = 0; /*0x506f1c*/
  v132 = 0; /*0x506f23*/
  memset(&v119, 0, sizeof(v119)); /*0x506f2a*/
  Base = 0; /*0x506f3a*/
  NumOfElements = 0; /*0x506f3e*/
  v115 = 0; /*0x506f42*/
  v116 = 0; /*0x506f46*/
  v5 = &v153; /*0x506f4a*/
  v6 = 4; /*0x506f51*/
  do /*0x506f63*/
  {
    DynamicVector::Constructor_Cell(v5, 0, 0); /*0x506f5a*/
    v5 = &v5->VectorClass_18; /*0x506f5f*/
    --v6; /*0x506f62*/
  }
  while ( v6 ); /*0x506f63*/
  v7 = 4 * *(unsigned int *)(_EBP + 22364) * _EBP->q5760; /*0x506f72*/
  Block = __2_YAPAXI_Z(v7); /*0x506f82*/
  v123 = __2_YAPAXI_Z(v7); /*0x506f8e*/
  v118 = __2_YAPAXI_Z(v7); /*0x506f99*/
  memset(Block, 0, v7); /*0x506fa4*/
  v8 = a4; /*0x506fb6*/
  memset(v123, 0, v7); /*0x506fc0*/
  memset(v118, 0, v7); /*0x506fd4*/
  if ( v8 ) /*0x506fdf*/
  {
    v9 = v8[4]; /*0x506fe5*/
    v107 = 0.0; /*0x506fe8*/
    if ( v9 > 0 ) /*0x506ff2*/
    {
      do /*0x5070cf*/
      {
        v10 = (unsigned short *)(4 * LODWORD(v107) + v8[1]); /*0x50700c*/
        v11 = (__int16)(*v10 - *(unsigned short *)(_EBP + 22352)); /*0x507023*/
        v12 = (__int16)(v10[1] - *(unsigned short *)(_EBP + 22354)); /*0x507026*/
        v125[0] = v11; /*0x507029*/
        __asm { fild [esp+174h+var_FC] } /*0x50702d*/
        v111 = -v12; /*0x507033*/
        __asm /*0x507037*/
        {
          fstp [esp+174h+var_16C]; double
          fild [esp+174h+var_140]
          fstp [esp+174h+var_174]; double
        }
        Math::CalcAngle(v102, v104); /*0x507042*/
        __asm { fsub ds:dbl_7E2820 } /*0x507047*/
        __asm { fmul ds:dbl_7E2818 }
        v13 = Math::RoundToInt(a2); /*0x507056*/
        v14 = v8[1]; /*0x50705b*/
        LOWORD(v112) = v13; /*0x50705e*/
        v15 = (unsigned int *)(4 * LODWORD(v107) + v14); /*0x507067*/
        v16 = *(unsigned int *)&v153.__pad_5[24 * (((unsigned int)((LODWORD(v112) >> 13) + 1) >> 1) & 3) + 3]; /*0x507075*/
        v17 = &v153.__pad_0[24 * (((unsigned int)((LODWORD(v112) >> 13) + 1) >> 1) & 3)]; /*0x507083*/
        if ( *(unsigned int *)&v153.__pad_C[24 * (((unsigned int)((LODWORD(v112) >> 13) + 1) >> 1) & 3) + 4] < v16 /*0x5070a9*/
          || (v17[13] || !v16)
          && (v18 = *((unsigned int *)v17 + 5), v18 > 0)
          && (*(unsigned __int8 (**)(char *, int, unsigned int))(*(unsigned int *)v17 + 8))(
               &v153.__pad_0[24 * (((unsigned int)((LODWORD(v112) >> 13) + 1) >> 1) & 3)],
               v16 + v18,
               0) )
        {
          v19 = *((unsigned int *)v17 + 4); /*0x5070b0*/
          v20 = *((unsigned int *)v17 + 1); /*0x5070b3*/
          *((unsigned int *)v17 + 4) = v19 + 1; /*0x5070b9*/
          *(unsigned int *)(v20 + 4 * v19) = *v15; /*0x5070be*/
        }
        v21 = v8[4]; /*0x5070c5*/
        ++LODWORD(v107); /*0x5070cb*/
      }
      while ( SLODWORD(v107) < v21 ); /*0x5070cf*/
    }
  }
  v22 = 0; /*0x5070d8*/
  v136[0] = *(unsigned int *)(_EBP + 120); /*0x5070dc*/
  v107 = 0.0; /*0x5070e3*/
  if ( v136[0] > 0 ) /*0x5070e7*/
  {
    do /*0x507229*/
    {
      v23 = *(unsigned int *)(*(unsigned int *)(_EBP + 108) + 4 * v22); /*0x5070f5*/
      v24 = (unsigned short *)(*(int (**)(int, unsigned int *))(*(unsigned int *)v23 + 440))(v23, v125); /*0x5070fc*/
      v25 = *v24 - _EBP->q5750; /*0x507109*/
      v26 = v24[1] - _EBP->q5752; /*0x507110*/
      if ( v25 || v26 ) /*0x50711f*/
      {
        v152[0] = v25; /*0x50712b*/
        __asm { fild [esp+16Ch+var_70] } /*0x507135*/
        v111 = -v26; /*0x50713e*/
        __asm /*0x507142*/
        {
          fstp [esp+16Ch+var_16C]; double
          fild [esp+16Ch+var_140]
        }
        __asm { fstp [esp+174h+var_174] } /*; double*/
        Math::CalcAngle(v103, v105); /*0x50714f*/
        __asm { fsub ds:dbl_7E2820 } /*0x507154*/
        __asm { fmul ds:dbl_7E2818 }
        v28 = Math::RoundToInt(a2); /*0x507163*/
        LOWORD(v27) = HIWORD(v28); /*0x507163*/
        LOWORD(v112) = v28; /*0x507168*/
        v29 = ((unsigned int)((LODWORD(v112) >> 13) + 1) >> 1) & 3; /*0x50717b*/
        v30 = (*(int (__fastcall **)(int, int))(*(unsigned int *)v23 + 724))(v23, v27); /*0x507188*/
        v109 = COERCE_FLOAT((*(int (**)(int))(*(unsigned int *)v23 + 728))(v23)); /*0x507190*/
        *(float *)&v110 = COERCE_FLOAT((*(int (**)(int))(*(unsigned int *)v23 + 732))(v23)); /*0x5071a2*/
        if ( v30 + LODWORD(v109) + v110 > 0 ) /*0x5071ac*/
        {
          v31 = LODWORD(v109) + *((unsigned int *)&v119.vtable0 + v29); /*0x5071bf*/
          v32 = (int)*(&Base + v29); /*0x5071c1*/
          *((unsigned int *)&v129 + v29) += v30; /*0x5071c5*/
          *((unsigned int *)&v119.vtable0 + v29) = v31; /*0x5071cc*/
          v33 = Block; /*0x5071d8*/
          *(&Base + v29) = (void *)(v110 + v32); /*0x5071de*/
          MapClass::CalcVisibleCellRange(v23, v30, (int)v33, &_EBP->q5754); /*0x5071ec*/
          MapClass::CalcVisibleCellRange(v23, SLODWORD(v109), (int)v123, &_EBP->q5754); /*0x5071ff*/
          MapClass::CalcVisibleCellRange(v23, v110, (int)v118, &_EBP->q5754); /*0x507212*/
        }
      }
      v22 = ++LODWORD(v107); /*0x507222*/
    }
    while ( SLODWORD(v107) < v136[0] ); /*0x507229*/
    v8 = a4; /*0x50722f*/
  }
  v34 = v124; /*0x507236*/
  v35 = 0; /*0x50723a*/
  p_DynamicVector_field_0x10 = &v153.Count; /*0x50723c*/
  do /*0x50727b*/
  {
    v37 = (char *)*(&Base + v35) + *((unsigned int *)&v119.vtable0 + v35) + *((unsigned int *)&v129 + v35); /*0x507254*/
    v38 = (int)v37 < v106; /*0x50725a*/
    v152[v35] = v37; /*0x50725c*/
    if ( v38 && (!v8 || (int)*p_DynamicVector_field_0x10 > 0) ) /*0x50726c*/
    {
      v106 = (int)v37; /*0x50726e*/
      v34 = v35; /*0x507272*/
    }
    ++v35; /*0x507274*/
    p_DynamicVector_field_0x10 += 6; /*0x507275*/
  }
  while ( v35 < 4 ); /*0x50727b*/
  v39 = *((int *)&v119.vtable0 + v34); /*0x50727d*/
  v40 = *((unsigned int *)&v129 + v34); /*0x507281*/
  v124 = v34; /*0x507288*/
  v41 = *((float *)&Base + v34); /*0x50728c*/
  v110 = v39; /*0x507290*/
  v136[0] = v40; /*0x507296*/
  v107 = v41; /*0x50729d*/
  HouseClass::ComputePowerDistribution((float *)_EBP); /*0x5072a1*/
  VectorClass::BuildingTypeConstructor(&v126, 0, 0); /*0x5072ae*/
  v42 = _EBP->bunkersCount; /*0x5072b3*/
  v43 = 0; /*0x5072b6*/
  /* X11: vtable install elided (implicit via DynamicVectorClass virtuals 0x5072ba) */
  v128 = 10; /*0x5072c2*/
  v127 = 0; /*0x5072cd*/
  if ( v42 > 0 ) /*0x5072d8*/
  {
    Capacity = v126.Capacity; /*0x5072de*/
    do /*0x5072e5*/
    {
      v45 = *(unsigned int *)(_EBP->absorbersCount + 4 * v43); /*0x5072e5*/
      v46 = *(unsigned int *)(v45 + 1312); /*0x5072e8*/
      if ( !*(unsigned char *)(v46 + 5894) && v46 != *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2172) ) /*0x507304*/
      {
        if ( v127 < Capacity ) /*0x50730d*/
          goto LABEL_34; /*0x50730d*/
        if ( !v126.IsAllocated && Capacity || v128 <= 0 ) /*0x507324*/
          goto LABEL_36; /*0x507324*/
        if ( (*((unsigned __int8 (**)(VectorClass *, int, unsigned int))v126.vtable0 + 2))( /*0x507333*/
               &v126,
               v128 + Capacity,
               0) )
        {
LABEL_34:
          v47 = v127++; /*0x507345*/
  *((unsigned int *)v126.Items + v47) = *(unsigned int *)(v45 + 1312); /*0x507355*/
        }
        Capacity = v126.Capacity; /*0x507358*/
      }
      LABEL_36:
      ++v43; /*0x50735c*/
    }
    while ( v43 < v42 ); /*0x5072e5*/
  }
  v48 = *(unsigned int *)(_EBP + 22280); /*0x507361*/
  v111 = 16 * a3; /*0x507371*/
  v112 = 0.0; /*0x507375*/
  v125[0] = *(unsigned int *)(v48 + 16 * a3); /*0x507386*/
  if ( v106 ) /*0x50738a*/
  {
    __asm /*0x50738c*/
    {
      fild [esp+164h+var_154]
      fstp [esp+164h+var_148]
      fild [esp+164h+var_C0]
      fdiv [esp+164h+var_148]
      fild [esp+164h+var_144]
      fdiv [esp+164h+var_148]
      fild [esp+164h+var_150]
      fdiv [esp+164h+var_148]
    }
  }
  else
  {
    __asm /*0x5073b1*/
    {
      fld ds:flt_7E1748
      fld ds:flt_7E1748
      fld ds:flt_7E1748
    }
  }
  __asm /*0x5073c3*/
  {
    fld dword ptr [ebp+160A0h]
    fsub st, st(3)
  }
  __asm
  {
    fstp [esp+16Ch+var_144]
    fld dword ptr [ebp+1609Ch]
    fsub st, st(2)
    fstp [esp+16Ch+var_148]
    fld dword ptr [ebp+160A4h]
    fsub st, st(1)
    fstp [esp+16Ch+var_150]
    fstp st
    fstp st
    fstp st
  }
  CollectSuperWeaponBuildingTypes((ObjectClass *)_EBP, (int)&v142, (int)&v126); /*0x5073fc*/
  HouseClass::CollectInfantryBuildCandidates((HouseClass *)_EBP, (int)&v147, (int)&v126); /*0x507410*/
  HouseClass::CollectAircraftBuildCandidates((HouseClass *)_EBP, (int)&v137, (int)&v126); /*0x507424*/
  __asm /*0x507429*/
  {
    fld [esp+164h+var_144]
    fcomp [esp+164h+var_148]
    fnstsw ax
  }
  if ( (_AX & 0x4100) != 0 ) /*0x507436*/
    goto LABEL_43; /*0x507436*/
  __asm /*0x507438*/
  {
    fld [esp+164h+var_144]
    fcomp [esp+164h+var_150]
    fnstsw ax
  }
  if ( (_AX & 0x4100) != 0 ) /*0x507445*/
  {
LABEL_43:
    __asm /*0x50745c*/
{
      fld [esp+164h+var_148]
      fcomp [esp+164h+var_150]
      fnstsw ax
}
  if ( (_AX & 0x4100) != 0 ) /*0x507469*/
{
      v51 = &v137; /*0x507487*/
      _EBP->waypointPath = v118; /*0x50748e*/
      v52 = 2; /*0x507494*/
}
  else
{
      v51 = &v147; /*0x50746f*/
      _EBP->waypointPath = v123; /*0x507476*/
      v52 = 1; /*0x50747c*/
}
  }
  else
  {
    v51 = &v142; /*0x50744b*/
    _EBP->waypointPath = Block; /*0x507452*/
    v52 = 0; /*0x507458*/
  }
  v54 = v51[4]; /*0x507499*/
  HIBYTE(v108) = 1; /*0x5074a0*/
  if ( !v54 ) /*0x5074a5*/
  {
    if ( v151 <= 0 ) /*0x5074ae*/
    {
      if ( v141 <= 0 ) /*0x5074e1*/
      {
        if ( v146 <= 0 ) /*0x507502*/
        {
          HIBYTE(v108) = 0; /*0x507519*/
          goto LABEL_56; /*0x507519*/
        }
        v51 = &v142; /*0x507508*/
        v52 = 0; /*0x50750f*/
        _EBP->waypointPath = Block; /*0x507511*/
      }
      else
      {
        v51 = &v137; /*0x5074e7*/
        v52 = 2; /*0x5074ee*/
        _EBP->waypointPath = v118; /*0x5074f3*/
      }
    }
    else
    {
      v51 = &v147; /*0x5074b4*/
      v52 = 1; /*0x5074bb*/
      _EBP->waypointPath = v123; /*0x5074c0*/
    }
  }
  if ( v51[4] == 1 ) /*0x5074ca*/
  {
    v55 = *(float *)v51[1]; /*0x5074d3*/
  }
  else
  {
    DistributionVector_BuildingType::Construct(&v129, 0, 0); /*0x507684*/
    v129 = (DistributionVector_BuildingType)&vt_DynamicVectorClassDiscreteDistributionClassDistributionObject; /*0x507690*/
    v134 = 10; /*0x50769b*/
    v133 = 0; /*0x5076a6*/
    v135 = 0; /*0x5076ad*/
    VectorClass__N_18::Destroy((int)&v129); /*0x5076b4*/
    v62 = v51[4]; /*0x5076ba*/
    v107 = 0.0; /*0x5076bd*/
    if ( v62 > 0 ) /*0x5076c3*/
    {
      do /*0x50772f*/
      {
        v63 = v51[1]; /*0x5076c5*/
        v64 = *(unsigned int **)(v63 + 4 * LODWORD(v107)); /*0x5076cf*/
        if ( v52 == 2 ) /*0x5076d2*/
        {
          v65 = v64[1355]; /*0x5076d4*/
        }
        else if ( v52 == 1 ) /*0x5076df*/
        {
          v65 = v64[1354]; /*0x5076e1*/
        }
        else
        {
          v65 = v64[1353]; /*0x5076e9*/
        }
        v136[0] = *(unsigned int *)(v63 + 4 * LODWORD(v107)); /*0x5076ef*/
        v136[1] = v65; /*0x507705*/
        HouseClass::AddCoordTrackingEntry((HouseClass *)&v129, v136); /*0x50770c*/
        v66 = v51[4]; /*0x507718*/
        v135 += v65; /*0x50771d*/
        ++LODWORD(v107); /*0x50772b*/
      }
      while ( SLODWORD(v107) < v66 ); /*0x50772f*/
    }
    v67 = 0; /*0x507738*/
    if ( v135 && v133 ) /*0x507748*/
    {
      v68 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, v135); /*0x507759*/
      v69 = (char *)v130; /*0x507765*/
      v70 = 0; /*0x50776c*/
      if ( v133 <= 0 ) /*0x507770*/
      {
LABEL_87:
        v55 = 0.0; /*0x507783*/
      }
      else
      {
        v71 = (char *)v130 + 4; /*0x507772*/
        while ( 1 ) /*0x507775*/
        {
          v67 += *v71; /*0x507775*/
          if ( v67 >= v68 ) /*0x507779*/
            break; /*0x507779*/
          ++v70; /*0x50777b*/
          v71 += 2; /*0x50777c*/
          if ( v70 >= v133 ) /*0x507781*/
            goto LABEL_87; /*0x507781*/
        }
        v55 = *((float *)v130 + 2 * v70); /*0x507787*/
      }
    }
    else
    {
      v69 = (char *)v130; /*0x50778c*/
      v55 = 0.0; /*0x507793*/
    }
    v129 = (DistributionVector_BuildingType)&vt_VectorClassDiscreteDistributionClassDistributionObject; /*0x507797*/
    if ( v69 && BYTE1(v132) ) /*0x5077ad*/
    {
      HouseClass::updatePowerState(v69, 3); /*0x5077b5*/
      v130 = 0; /*0x5077ba*/
    }
    BYTE1(v132) = 0; /*0x5077c5*/
    v131 = 0; /*0x5077cd*/
  }
  if ( (v125[0] & 0x80000000) != 0 ) /*0x5077e0*/
  {
    *(float *)&v72 = v55; /*0x5077f5*/
    v109 = v55; /*0x5077f7*/
  }
  else
  {
    v112 = v55; /*0x5077e8*/
    v72 = *((int *)dword_A83C6C + v125[0]); /*0x5077ec*/
    v109 = *(float *)&v72; /*0x5077ef*/
  }
  v106 = 0; /*0x507802*/
  if ( a4 ) /*0x50780e*/
  {
    Base = 0; /*0x50781a*/
    NumOfElements = 0; /*0x50781e*/
    v115 = 0; /*0x507822*/
    LOBYTE(v116) = 0; /*0x507826*/
    v117 = 0; /*0x50782b*/
    VectorClass::CellConstructor(&v119, 0, 0); /*0x50782f*/
    /* X11: vtable install elided (implicit via DynamicVectorClass virtuals 0x507838) */
    v121 = 10; /*0x507842*/
    v120 = 0; /*0x50784a*/
    if ( v119.Items && v119.IsAllocated ) /*0x507856*/
    {
      __3_YAXPAX_Z(v119.Items); /*0x507859*/
      v119.Items = 0; /*0x507861*/
    }
    v73 = 0; /*0x507869*/
    v119.IsAllocated = 0; /*0x50786b*/
    v119.Capacity = 0; /*0x507870*/
    v74 = *(unsigned int *)&v153.__pad_C[24 * v124 + 4]; /*0x50787a*/
    v125[0] = (unsigned int)&v153.__pad_C[24 * v124 + 4]; /*0x50788a*/
    if ( v74 > 0 ) /*0x50788e*/
    {
      v75 = &v153.DynamicVector_field_0x1[24 * v124 + 3]; /*0x507890*/
      do /*0x507904*/
      {
        v110 = *(int *)(*(unsigned int *)v75 + 4 * v73); /*0x5078a3*/
        v76 = globalHelper_005FD0(_EBP, &v110, a2, v73, -1); /*0x5078b2*/
        v77 = v115; /*0x5078b4*/
        if ( (int)(NumOfElements + 1) <= v115 ) /*0x5078bb*/
          goto LABEL_107; /*0x5078bb*/
        if ( !v115 ) /*0x5078bf*/
          v77 = 10; /*0x5078c1*/
        if ( BuildLocationVector::Grow((int)&Base, v77) ) /*0x5078cb*/
        {
LABEL_107:
          *((unsigned int *)Base + 2 * NumOfElements) = v76; /*0x5078dc*/
  *((float *)Base + 2 * NumOfElements + 1) = *(float *)&v110; /*0x5078eb*/
  LOBYTE(v116) = 0; /*0x5078f4*/
  ++NumOfElements; /*0x5078f9*/
        }
        ++v73; /*0x507901*/
      }
      while ( v73 < *(unsigned int *)v125[0] ); /*0x507904*/
    }
    v78 = NumOfElements; /*0x507906*/
    for ( i = 0; i < (int)NumOfElements; ++i ) /*0x507910*/
    {
      if ( !(unsigned char)v116 ) /*0x507918*/
      {
        qsort(Base, v78, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)globalHelper_0108F0); /*0x507927*/
        v117 = 0; /*0x50792f*/
        LOBYTE(v116) = 1; /*0x507933*/
      }
      v80 = (char *)Base + 8 * i + 4; /*0x507940*/
      if ( v120 < v119.Capacity /*0x50796c*/
        || (v119.IsAllocated || !v119.Capacity)
        && v121 > 0
        && (*((unsigned __int8 (**)(VectorClass *, int, unsigned int))v119.vtable0 + 2))(
             &v119,
             v121 + v119.Capacity,
             0) )
      {
        v81 = v120++; /*0x50797b*/
        *((unsigned int *)v119.Items + v81) = *v80; /*0x507984*/
      }
      v78 = NumOfElements; /*0x507987*/
    }
    v82 = a4; /*0x507994*/
    v83 = *a4; /*0x50799d*/
    v106 = *(unsigned int *)v119.Items; /*0x5079a3*/
    v84 = (*(int (**)(unsigned int *, int *))(v83 + 16))(a4, &v106); /*0x5079aa*/
    v85 = v82[4]; /*0x5079ad*/
    if ( v84 < v85 ) /*0x5079b2*/
    {
      v86 = v85 - 1; /*0x5079b4*/
      for ( v82[4] = v86; v84 < v82[4]; *(unsigned int *)(v82[1] + 4 * v84 - 4) = *(unsigned int *)(v82[1] + 4 * v84) ) /*0x5079ba*/
        ++v84; /*0x5079bf*/
    }
    /* X11: vtable install elided (implicit via VectorClass virtuals 0x5079d2) */
    if ( v119.Items && v119.IsAllocated ) /*0x5079e4*/
    {
      __3_YAXPAX_Z(v119.Items); /*0x5079e7*/
      v119.Items = 0; /*0x5079ef*/
    }
    v119.IsAllocated = 0; /*0x5079f7*/
    v119.Capacity = 0; /*0x5079fd*/
    __3_YAXPAX_Z(Base); /*0x507a01*/
  }
  else
  {
            v87 = HouseClass::ScanBuildLocation( /*0x507a20*/
            (HouseClass *)_EBP,
            v125,
            v72,
            (int (__fastcall *)(int, int *, int, int))globalHelper_005FD0,
            2 * v124);
            v82 = a4; /*0x507a27*/
            v106 = *v87; /*0x507a2e*/
  }
  if ( v106 ) /*0x507a39*/
  {
    v88 = v112; /*0x507a4c*/
    if ( v112 == 0.0 ) /*0x507a52*/
    {
      v101 = v111; /*0x507b60*/
      *(unsigned int *)(_EBP->u32_5708 + v111) = *(unsigned int *)(LODWORD(v109) + 3576); /*0x507b6a*/
      *(unsigned int *)(_EBP->u32_5708 + v101 + 4) = v106; /*0x507b77*/
    }
    else
    {
      v89 = v111; /*0x507a5e*/
      *(unsigned int *)(_EBP->u32_5708 + v111 + 4) = v106; /*0x507a66*/
      v90 = (unsigned int *)(_EBP->u32_5708 + 16 * (a3 + 1)); /*0x507a7b*/
      if ( *v90 == -1 ) /*0x507a80*/
      {
        *v90 = *(unsigned int *)(LODWORD(v88) + 3576); /*0x507a8e*/
        *(unsigned int *)(_EBP->u32_5708 + v89 + 20) = v106; /*0x507a9a*/
        if ( v82 ) /*0x507a9e*/
        {
          BuildableFromArray = HouseClass::FirstBuildableFromArray( /*0x507ab1*/
                                 (HouseClass *)_EBP,
                                 *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2640);
          v92 = _EBP->u32_5714 - 1; /*0x507abc*/
          if ( v92 >= 0 ) /*0x507abd*/
          {
            v93 = (unsigned int *)(_EBP->u32_5708 + 16 * v92); /*0x507ad3*/
            while ( v93[1] != v106 || *v93 != BuildableFromArray->ArrayIndex ) /*0x507aee*/
            {
              --v92; /*0x507af2*/
              v93 -= 4; /*0x507af3*/
              if ( v92 < 0 ) /*0x507af8*/
                goto LABEL_56; /*0x507af8*/
            }
            v94 = _EBP->u32_5714; /*0x507aff*/
            if ( v92 < v94 ) /*0x507b07*/
            {
              v95 = v94 - 1; /*0x507b0d*/
              v96 = v92; /*0x507b0e*/
              _EBP->u32_5714 = v95; /*0x507b12*/
              if ( v92 < v95 ) /*0x507b18*/
              {
                v97 = 16 * v92; /*0x507b1e*/
                do /*0x507b4f*/
                {
                  v98 = _EBP->u32_5708; /*0x507b21*/
                  v99 = (unsigned int *)(v98 + v97 + 16); /*0x507b27*/
                  v100 = (unsigned int *)(v97 + v98); /*0x507b2b*/
                  ++v96; /*0x507b2d*/
                  v97 += 16; /*0x507b2e*/
                  *v100 = *v99; /*0x507b33*/
                  v100[1] = v99[1]; /*0x507b38*/
                  v100[2] = v99[2]; /*0x507b3e*/
                  v100[3] = v99[3]; /*0x507b44*/
                }
                while ( v96 < _EBP->u32_5714 ); /*0x507b4f*/
              }
            }
          }
        }
      }
    }
  }
  else
  {
    HIBYTE(v108) = 0; /*0x507a42*/
  }
  LABEL_56:
  __3_YAXPAX_Z(Block); /*0x507520*/
    __3_YAXPAX_Z(v123); /*0x50752f*/
    __3_YAXPAX_Z(v118); /*0x507539*/
    v56 = v138; /*0x50753e*/
    v57 = v138 == 0; /*0x50754d*/
    _EBP->waypointPath = 0; /*0x50754f*/
    v137 = (int)&vt_VectorClass; /*0x507555*/
    if ( !v57 && BYTE1(v140) ) /*0x507567*/
  {
    __3_YAXPAX_Z(v56); /*0x50756a*/
    v138 = 0; /*0x507572*/
  }
    BYTE1(v140) = 0; /*0x507580*/
    v139 = 0; /*0x50758a*/
    v147 = (int)&vt_VectorClass; /*0x507591*/
    if ( v148 && BYTE1(v150) ) /*0x5075a3*/
  {
    __3_YAXPAX_Z(v148); /*0x5075a6*/
    v148 = 0; /*0x5075ae*/
  }
    BYTE1(v150) = 0; /*0x5075bc*/
    v149 = 0; /*0x5075c6*/
    v142 = (int)&vt_VectorClass; /*0x5075cd*/
    if ( v143 && BYTE1(v145) ) /*0x5075df*/
  {
    __3_YAXPAX_Z(v143); /*0x5075e2*/
    v143 = 0; /*0x5075ea*/
  }
    BYTE1(v145) = 0; /*0x5075f5*/
    v144 = 0; /*0x5075ff*/
    /* X11: vtable install elided (implicit via VectorClass virtuals 0x507606) */
  if ( v126.Items && v126.IsAllocated ) /*0x507616*/
  {
    __3_YAXPAX_Z(v126.Items); /*0x507619*/
    v126.Items = 0; /*0x507621*/
  }
    v126.IsAllocated = 0; /*0x507627*/
    v126.Capacity = 0; /*0x50762c*/
    v58 = &a3; /*0x507630*/
    v59 = 4; /*0x507637*/
    do /*0x507668*/
  {
    v60 = (void *)*(v58 - 6); /*0x507641*/
    v58 -= 6; /*0x507644*/
    *(v58 - 1) = (int)&vt_VectorClass; /*0x507649*/
    if ( v60 && *((unsigned char *)v58 + 9) ) /*0x50764e*/
    {
      __3_YAXPAX_Z(v60); /*0x507656*/
      *v58 = 0; /*0x50765e*/
    }
    --v59; /*0x507660*/
    *((unsigned char *)v58 + 9) = 0; /*0x507661*/
    v58[1] = 0; /*0x507665*/
  }
    while ( v59 ); /*0x507668*/
    return HIBYTE(v108); /*0x50766e*/

}
}

// 0x508C30
namespace gamemd {
int HouseClass::UpdatePower(double a2)
{
  int v2; // ecx
  BuildingClass *v3; // edi
  int v4; // esi
  int v5; // ecx
  int v6; // eax
  int v8; // ebp
  BuildingClass *v9; // edi
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int result; // eax
  BuildingClass *v16; // [esp-8h] [ebp-20h]
  ObjectClass *v17; // [esp+0h] [ebp-18h]
  char v18; // [esp+Bh] [ebp-Dh]
  int v19; // [esp+Ch] [ebp-Ch]
  int v20; // [esp+Ch] [ebp-Ch]
  int v21; // [esp+10h] [ebp-8h]
  int v22; // [esp+10h] [ebp-8h]
  int v23; // [esp+10h] [ebp-8h]
  uint8_t v24; // [esp+14h] [ebp-4h]

  v4 = v2; /*0x508c35*/
  v5 = *(unsigned int *)(v2 + 21412); /*0x508c39*/
  v6 = v4->powerDrain; /*0x508c3f*/
  v19 = v5; /*0x508c47*/
  v21 = v6; /*0x508c4b*/
  if ( v5 >= v6 ) /*0x508c4f*/
    goto LABEL_6; /*0x508c4f*/
  if ( !v6 ) /*0x508c53*/
    goto LABEL_6; /*0x508c53*/
  if ( !v5 ) /*0x508c57*/
    goto LABEL_5; /*0x508c57*/
  __asm /*0x508c59*/
  {
    fild [esp+18h+var_C]
    fidiv [esp+18h+var_8]
    fcomp ds:dbl_7E1718
    fnstsw ax
  }
  if ( (_AX & 0x100) != 0 ) /*0x508c6c*/
  LABEL_5:
    v24 = 1; /*0x508c6e*/
      else
  LABEL_6:
    v24 = 0; /*0x508c75*/
      v4->u32_5778 = 0; /*0x508c79*/
    v4->powerOutput = 0; /*0x508c7f*/
    v4->powerDrain = 0; /*0x508c85*/
    v8 = 0; /*0x508c8f*/
    v18 = 0; /*0x508c93*/
    v22 = v4->bunkersCount; /*0x508c97*/
    if ( v22 > 0 ) /*0x508c9b*/
  {
    v16 = v3; /*0x508ca1*/
    do /*0x508ca5*/
    {
      v9 = *(BuildingClass **)(v4->absorbersCount + 4 * v8); /*0x508ca5*/
      if ( v9 && !v9->inLimbo && v9->isOnMap ) /*0x508cb8*/
      {
        if ( *(unsigned int *)&dword_A8B238 ) /*0x508cc5*/
        {
          if ( (Object *)v4 != dword_A83D4C ) /*0x508ce4*/
            goto LABEL_19; /*0x508ce4*/
        }
        else if ( !v4->currentPlayer && !v4->PlayerControl ) /*0x508cd5*/
        {
  LABEL_19:
          v4->powerOutput += BuildingClass::GetPowerOutput(v16, a2); /*0x508cf2*/
    v4->powerDrain += BuildingClass::GetPowerDrain(v9); /*0x508d18*/
    if ( (uint8_t)ObjectClass::HasLocation((ObjectClass *)v9) /*0x508d30*/
            && BuildingClass::GetPowerOutput(v16, a2) > 0 )
  {
            v18 = 1; /*0x508d32*/
  }
    goto LABEL_22; /*0x508d32*/
        }
        if ( v9->isDiscoveredByCurrentPlayer || *(unsigned int *)&dword_A8B238 ) /*0x508cf0*/
          goto LABEL_19; /*0x508cf0*/
      }
      LABEL_22:
      ++v8; /*0x508d37*/
    }
    while ( v8 < v22 ); /*0x508ca5*/
  }
    v4->u32_577B = v18; /*0x508d45*/
    v10 = v4->powerBlackoutTimer; /*0x508d50*/
    v11 = v4->u32_2AC; /*0x508d56*/
    if ( v10 != -1 ) /*0x508d5f*/
  {
    if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v10 >= v11 ) /*0x508d6b*/
      goto LABEL_27; /*0x508d6b*/
    v11 -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v10; /*0x508d6d*/
  }
    if ( v11 ) /*0x508d71*/
  {
  LABEL_28:
    v4->powerOutput = 0; /*0x508d79*/
    goto LABEL_29; /*0x508d79*/
  }
  LABEL_27:
  if ( v18 ) /*0x508d77*/
    goto LABEL_28; /*0x508d77*/
  LABEL_29:
  nullsub_5(v17); /*0x508d7f*/
    HouseClass::UpdateTeamProductionSpeed((HouseClass *)v4); /*0x508d88*/
    v12 = v4->powerOutput; /*0x508d8d*/
    v13 = v4->powerDrain; /*0x508d93*/
    v20 = v12; /*0x508d9b*/
    v23 = v13; /*0x508d9f*/
    if ( v12 >= v13 ) /*0x508da3*/
      goto LABEL_34; /*0x508da3*/
    if ( !v13 ) /*0x508da7*/
      goto LABEL_34; /*0x508da7*/
    if ( !v12 ) /*0x508dab*/
      goto LABEL_33; /*0x508dab*/
    __asm /*0x508dad*/
  {
    fild [esp+18h+var_C]
    fidiv [esp+18h+var_8]
    fcomp ds:dbl_7E1718
    fnstsw ax
  }
    if ( (_AX & 0x100) != 0 ) /*0x508dc0*/
  LABEL_33:
    result = 1; /*0x508dc2*/
      else
  LABEL_34:
    result = 0; /*0x508dc9*/
      if ( v24 != result ) /*0x508dd7*/
      result = SuperWeapon::UpdateSuperWeaponsOwnedHouseClass((SuperWeapon *)v4); /*0x508ddb*/
    v4->u32_5779 = 1; /*0x508de0*/
    return result; /*0x508de7*/
}
}
// 0x508DF0
namespace gamemd {
void * HouseClass::CanTogglePower()
{
  void *result; // eax
  int v2; // eax
  int v3; // esi
  int powerOutput; // edx
  int powerDrain; // eax
  int bunkersCount; // edi
  int v7; // edx
  unsigned int *absorbersCount; // esi
  int v9; // eax
  char v10; // [esp+0h] [ebp-Ch]

  (this->u8_5789) = 0; /*0x508df0*/
  result = dword_A83D4C; /*0x508df7*/
  if ( this == (HouseClass *)dword_A83D4C ) /*0x508e01*/
  {
    v2 = this->radarBlackoutTimer[2]; /*0x508e07*/
    v3 = this->radarBlackoutTimer[0]; /*0x508e10*/
    v10 = 0; /*0x508e1a*/
    if ( v3 != -1 ) /*0x508e1f*/
    {
      if ( (int)dword_A8ED84 - v3 >= v2 ) /*0x508e2b*/
        goto LABEL_6; /*0x508e2b*/
      v2 -= (int)dword_A8ED84 - v3; /*0x508e2d*/
    }
    if ( v2 ) /*0x508e31*/
    {
  LABEL_30:
      (*((unsigned char *)&(result))) = HouseClass::updateAlliedStatus((HouseClass *)&dword_87F7E8); /*0x508f2f*/
    if ( (unsigned char)result != v10 ) /*0x508f43*/
      HouseClass::SetRadarVisibility((int)&dword_87F7E8, v10); /*0x508f4f*/
    return result; /*0x508f4f*/
    }
    LABEL_6:
    if ( (*((unsigned char *)&(dword_A8B230[374].vfptr3))) ) /*0x508e3c*/
      goto LABEL_29; /*0x508e3c*/
      powerOutput = this->powerOutput; /*0x508e4a*/
      powerDrain = this->powerDrain; /*0x508e50*/
      if ( powerOutput >= powerDrain /*0x508e81*/
      || !powerDrain
      || powerOutput && (double)this->powerOutput / (double)this->powerDrain >= 1.0 )
    {
      bunkersCount = this->bunkersCount; /*0x508e87*/
      v7 = 0; /*0x508e8a*/
      if ( bunkersCount > 0 ) /*0x508e8e*/
      {
        absorbersCount = (unsigned int *)this->absorbersCount; /*0x508e94*/
        while ( 1 ) /*0x508e9d*/
        {
            v9 = *absorbersCount; /*0x508e9d*/
            if ( *absorbersCount /*0x508f06*/
            && *(unsigned char *)(v9 + 1632)
            && *(unsigned char *)(*(unsigned int *)(v9 + 1312) + 5796)
            && !*(unsigned char *)(v9 + 129)
            && *(unsigned char *)(v9 + 116)
            && (!*(unsigned int *)&dword_A8B238 && !this->currentPlayer[0] && !this->playerControl[0]
             || *(unsigned char *)(v9 + 1051)
             || *(unsigned int *)&dword_A8B238)
            && *(unsigned int *)(v9 + 172) != 19
            && *(unsigned int *)(v9 + 180) != 19 )
            {
              break; /*0x508f06*/
            }
            ++v7; /*0x508f08*/
            ++absorbersCount; /*0x508f09*/
            if ( v7 >= bunkersCount ) /*0x508f0e*/
              goto LABEL_30; /*0x508f0e*/
        }
        if ( !*(unsigned int *)(v9 + 1284) /*0x508f20*/
          && !(*(uint8_t (__thiscall **)(unsigned int))(*(unsigned int *)v9 + 468))(*absorbersCount) )
        {
  LABEL_29:
          v10 = 1; /*0x508f2a*/
        }
      }
    }
      goto LABEL_30; /*0x508f2a*/
  }
  return result; /*0x508f54*/
}
}
// 0x5098F0
namespace gamemd {
CellStruct * * HouseClass::UpdateAITryFireSW(void *a1)
{
  int lastBuiltInfantryType; // eax
  int i; // edi
  int v4; // eax
  bool v5; // zf
  int v6; // eax
  int *v7; // eax
  int v8; // eax
  int v9; // eax
  int v11; // [esp+8h] [ebp-10h] BYREF
  int v12; // [esp+Ch] [ebp-Ch] BYREF
  int v13; // [esp+10h] [ebp-8h] BYREF
  int v14; // [esp+14h] [ebp-4h] BYREF

  (*((unsigned char *)&(lastBuiltInfantryType))) = a1->currentPlayer; /*0x5098fe*/
  if ( !*(unsigned int *)&dword_A8B238 ) /*0x509904*/
    (*((unsigned char *)&(lastBuiltInfantryType))) = (unsigned char)lastBuiltInfantryType || a1->playerControl; /*0x509918*/
  if ( !(unsigned char)lastBuiltInfantryType )
  {
    lastBuiltInfantryType = a1->lastBuiltInfantryType; /*0x509922*/
    for ( i = 0; i < lastBuiltInfantryType; ++i )
    {
      v4 = *(unsigned int *)(a1->supersCount + 4 * i); /*0x509939*/
      if ( v4 && *(unsigned char *)(v4 + 111) )
      {
        switch ( *(unsigned int *)(*(unsigned int *)(v4 + 40) + 180) )
        {
          case 0:
            v12 = *(unsigned int *)(a1->supersCount + 4 * i); /*0x509968*/
            if ( a1->enemyHouseIndex != -1 )
          {
              v5 = (*((unsigned short *)&(a1->preferredTargetCell[0]))) == *(unsigned short *)&((unsigned int *)&stru_A8EB00)[948]; /*0x509980*/
              v11 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[948]; /*0x509987*/
              if ( v5 && (*(((unsigned short *)&(a1->preferredTargetCell[0])) + 1)) == *(unsigned short *)&((unsigned int *)&stru_A8EB00)[950] )
              {
                v7 = a1->preferredTargetType == 1
                ? HouseClass::FindSWBuilding(a1, &v13)
                : HouseClass::FindSWTarget(a1, &v14, a1->preferredTargetType);
                v6 = *v7; /*0x5099cb*/
              }
              else
              {
                v6 = a1->preferredTargetCell[0]; /*0x50999d*/
              }
              v11 = v6; /*0x5099d4*/
              if ( v6 != *(unsigned int *)&((unsigned int *)&stru_A8EB00)[948] ) /*0x5099d8*/
                goto LABEL_33; /*0x5099d8*/
          }
            break; /*0x5099d8*/
          case 2:
            HouseClass::Fire_LightningStorm((int)a1, *(unsigned int *)(a1->supersCount + 4 * i)); /*0x509a0d*/
            break; /*0x509a12*/
          case 5:
          case 6:
          case 8:
          case 0xB:
            HouseClass::Fire_ParaDrop(a1, *(unsigned int *)(a1->supersCount + 4 * i)); /*0x509a34*/
            break; /*0x509a39*/
          case 7:
            HouseClass::Fire_PsyDom((int)a1, *(unsigned int *)(a1->supersCount + 4 * i)); /*0x509a1a*/
            break; /*0x509a1f*/
          case 9:
            HouseClass::Fire_GenMutator((int)a1, *(unsigned int *)(a1->supersCount + 4 * i)); /*0x509a27*/
            break; /*0x509a2c*/
          case 0xA:
            v5 = (*((unsigned short *)&(a1->preferredDefensiveCell2[0]))) == *(unsigned short *)&((unsigned int *)&stru_A8EB00)[948]; /*0x509a4b*/
            v12 = *(unsigned int *)(a1->supersCount + 4 * i); /*0x509a52*/
            v11 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[948]; /*0x509a56*/
            if ( !v5 || (*(((unsigned short *)&(a1->preferredDefensiveCell2[0])) + 1)) != *(unsigned short *)&((unsigned int *)&stru_A8EB00)[950] ) /*0x509a63*/
          {
              v8 = a1->preferredDefensiveCell2[0]; /*0x509a65*/
              goto LABEL_32; /*0x509a6b*/
          }
            if ( ((*((unsigned short *)&(a1->preferredDefensiveCell[0]))) != *(unsigned short *)&((unsigned int *)&stru_A8EB00)[948] /*0x509a99*/
               || (*(((unsigned short *)&(a1->preferredDefensiveCell[0])) + 1)) != *(unsigned short *)&((unsigned int *)&stru_A8EB00)[950])
              && *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 3808)
              + a1->preferredDefensiveCellStartTime > *(int *)&((unsigned int *)&stru_A8EB00)[416] )
          {
              v8 = a1->preferredDefensiveCell[0]; /*0x509a9b*/
              LABEL_32:
              v11 = v8; /*0x509aa1*/
                if ( v8 != *(unsigned int *)&((unsigned int *)&stru_A8EB00)[948] ) /*0x509aa8*/
              {
  LABEL_33:
                v9 = (*(int (__thiscall **)(int *, int *))(a1->supers[0] + 16))(a1->supers, &v12); /*0x509aca*/
    SuperWeapon::FireSuperWeaponHouseClass((SuperWeapon *)a1, v9, (int)&v11); /*0x509acd*/
              }
                break; /*0x509acd*/
          }
            break; /*0x509acd*/
          default:
            break;
        }
      }
      lastBuiltInfantryType = a1->lastBuiltInfantryType; /*0x509ad2*/
    }
  }
  return lastBuiltInfantryType; /*0x509ae2*/
}
}
// 0x50BC90
namespace gamemd {
int HouseClass::CreatePowerOutage(int a2)
{
  int v4; // [esp+8h] [ebp-8h]

  dword_A8ED84 = dword_A8ED84; /*0x50bc90*/
  this->u32_5778 = 1; /*0x50bc9c*/
  this->powerBlackoutTimer = dword_A8ED84; /*0x50bcaa*/
  this->u32_2A8 = v4; /*0x50bcb4*/
  this->u32_2AC = a2; /*0x50bcb7*/
  return v4; /*0x50bcba*/
}
}
// 0x50BCD0
namespace gamemd {
int HouseClass::CreateRadarOutage(int a2)
{
  int v4; // [esp+8h] [ebp-8h]

  dword_A8ED84 = dword_A8ED84; /*0x50bcd0*/
  this->u32_5779 = 1; /*0x50bcdc*/
  this->radarBlackoutTimer = dword_A8ED84; /*0x50bcea*/
  this->u32_2B4 = v4; /*0x50bcf4*/
  this->u32_2B8 = a2; /*0x50bcf7*/
  return v4; /*0x50bcfa*/
}
}
// 0x50D320
namespace gamemd {
int HouseClass_RespawnStartingBuildings(void ** a2, unsigned int * a3, int a4)
{
  int v4; // ecx
  int v5; // ebp
  int result; // eax
  int16_t *v7; // edi
  int v8; // esi
  int16_t *v9; // ebx
  Cell *v10; // eax
  int *v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // edi
  int v15; // esi
  void *v16; // eax
  unsigned int *v17; // eax
  int i; // [esp+10h] [ebp-20h]
  int v22[3]; // [esp+14h] [ebp-1Ch] BYREF
  unsigned int v23[4]; // [esp+20h] [ebp-10h] BYREF
  void *retaddr; // [esp+30h] [ebp+0h] BYREF

  v5 = v4; /*0x50d324*/
  result = *(unsigned int *)(v4 + 380) - 1; /*0x50d32c*/
  for ( i = result; i >= 0; --i )
  {
    v7 = *(int16_t **)(*(unsigned int *)(v5 + 368) + 4 * result); /*0x50d340*/
    v8 = *(unsigned int *)v7; /*0x50d343*/
    if ( (*(int (__thiscall **)(unsigned int))(**(unsigned int **)v7 + 44))(*(unsigned int *)v7) == 7 )
    {
      v9 = v7 + 2; /*0x50d355*/
      v10 = (Cell *)((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj(v7 + 2); /*0x50d35e*/
      v11 = ((Cell *)(v10))->IsBridge(); /*0x50d365*/
      if ( v11 && (v12 = v11->u32_520, v12 == v8) && v11->u32_21C == v5 )
      {
          v13 = *v11; /*0x50d386*/
          v22[0] = -*(unsigned int *)(v12 + 160); /*0x50d38a*/
          (*(void (__thiscall **)(int *, int *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))(v13 + 364))( /*0x50d3ac*/
          v11,
          v22,
          0,
          *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 4008),
          0,
          0,
          0,
          0);
      }
      else
      {
        v14 = (*(int (__thiscall **)(int, int, unsigned int *, int, void **))(*(unsigned int *)v8 + 140))(v8, v5, a3, a4, a2); /*0x50d3bf*/
        if ( v14 )
          v15 = v14->vt_slot_44() == 6 ? v14 : 0;
        else
          v15 = 0; /*0x50d3c5*/
        v16 = ((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj(v9); /*0x50d3e3*/
        a2 = &retaddr; /*0x50d3ee*/
        v17 = (unsigned int *)v16->vt_slot_72(); /*0x50d3f1*/
        a4 = 0; /*0x50d3f6*/
        v23[0] = *v17; /*0x50d3f8*/
        v23[1] = v17[1]; /*0x50d3ff*/
        a3 = v23; /*0x50d40a*/
        v23[2] = v17[2]; /*0x50d40b*/
        if ( !(*(uint8_t (__thiscall **)(int))(*(unsigned int *)v15 + 1168))(v15) ) /*0x50d413*/
          (*(void (__thiscall **)(int))(*(unsigned int *)v15 + 248))(v15); /*0x50d421*/
      }
    }
    result = i - 1; /*0x50d42b*/
  }
  return result; /*0x50d439*/
}
}
// 0x50D440
namespace gamemd {
int HouseClass::RespawnStartingForces(TechnoClass * aP0, void ** a1, unsigned int * a2, int a4)
{
  int v4; // ecx
  int v5; // ebx
  int result; // eax
  int v7; // edi
  int16_t *v8; // ebp
  int v9; // esi
  int v10; // eax
  void *v11; // eax
  unsigned int *v12; // eax
  int v16; // [esp+10h] [ebp-1Ch]
  unsigned int v17[4]; // [esp+1Ch] [ebp-10h] BYREF
  void *retaddr; // [esp+2Ch] [ebp+0h] BYREF

  v5 = v4; /*0x50d444*/
  result = *(unsigned int *)(v4 + 380) - 1; /*0x50d44c*/
  v16 = result; /*0x50d44d*/
  if ( result >= 0 )
  {
    while ( 1 )
    {
      v7 = 0; /*0x50d466*/
      v8 = *(int16_t **)(v5->q170 + 4 * result); /*0x50d468*/
      v9 = *(unsigned int *)v8; /*0x50d46b*/
      switch ( (*(int (__thiscall **)(unsigned int, unsigned int *, int, void **))(**(unsigned int **)v8 + 44))(
                 *(unsigned int *)v8,
                 a3,
                 a4,
                 a2) )
      {
        case 3:
        case 7:
        case 40:
          v10 = (*(int (__thiscall **)(int, int))(*(unsigned int *)v9 + 140))(v9, v5); /*0x50d491*/
          if ( v10 ) /*0x50d499*/
            goto LABEL_9; /*0x50d499*/
          v7 = 0; /*0x50d49b*/
          break; /*0x50d49d*/
        case 16:
          v10 = (*(int (__thiscall **)(int, int))(*(unsigned int *)v9 + 140))(v9, v5); /*0x50d4a4*/
          if ( v10 )
        LABEL_9:
            v7 = (*(unsigned char *)(v10 + 20) & 1) != 0 ? v10 : 0;
            else
            v7 = 0; /*0x50d4ae*/
          break; /*0x50d4b0*/
        default:
          break;
      }
      v11 = ((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj(v8 + 2); /*0x50d4c0*/
      a2 = &retaddr; /*0x50d4d4*/
      v12 = (unsigned int *)(*(int (__thiscall **)(void *))(*(unsigned int *)v11 + 72))(v11); /*0x50d4d7*/
      a4 = 0; /*0x50d4dc*/
      v17[0] = *v12; /*0x50d4de*/
      v17[1] = v12[1]; /*0x50d4e5*/
      a3 = v17; /*0x50d4f0*/
      v17[2] = v12[2]; /*0x50d4f1*/
      if ( !(*(uint8_t (__thiscall **)(int))(*(unsigned int *)v7 + 1168))(v7) ) /*0x50d4f9*/
        (*(void (__thiscall **)(int))(*(unsigned int *)v7 + 248))(v7); /*0x50d507*/
      result = --v16; /*0x50d511*/
      if ( v16 < 0 ) /*0x50d516*/
        break; /*0x50d516*/
      result = v16; /*0x50d45c*/
    }
  }
  return result; /*0x50d51f*/
}
}
// 0x50D9E0
namespace gamemd {
int HouseClass::GetInfSelfHealStep()
{

  return *&this->techInfiltrationFlags * *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 52); /*0x50d9ef*/

}
}
// 0x50D9F0
namespace gamemd {
int HouseClass::GetUnitSelfHealStep()
{

  return *&this->productionInfiltrationFlags * *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 60); /*0x50d9ff*/

}
}
// 0x50E0E0
namespace gamemd {
void HouseClass::LostPoweredCenter(int a2, void *a2_2)
{
  int v3; // eax
  char v4; // bl
  int v5; // edi
  int v6; // esi

  v3 = *(unsigned int *)(a2_2 + 728) - 1; /*0x50e0eb*/
  *(unsigned int *)(a2_2 + 728) = v3; /*0x50e0ec*/
  if ( !v3 ) /*0x50e0f2*/
  {
    if ( a2_2 ) /*0x50e0fe*/
    {
      v4 = 0; /*0x50e109*/
      v5 = dword_A8EC88 - 1; /*0x50e10b*/
      if ( dword_A8EC88 - 1 >= 0 ) /*0x50e110*/
      {
        do /*0x50e14c*/
        {
          v6 = *((unsigned int *)dword_A8EC7C + v5); /*0x50e11d*/
          if ( v6->owner == a2_2 /*0x50e138*/
            && (*(int (__thiscall **)(unsigned int))(v6->hasParachute)(*((unsigned int *)dword_A8EC7C + v5)) == a2_2
            && !v6->inLimbo )
          {
            TechnoClass::Deactivate((unsigned int *)v6); /*0x50e144*/
            v4 = 1; /*0x50e149*/
          }
          --v5; /*0x50e14b*/
        }
        while ( v5 >= 0 ); /*0x50e14c*/
        if ( v4 && byte_A8E9A0 ) /*0x50e15a*/
        {
          if ( dword_A8B238[0] ) /*0x50e163*/
          {
            if ( a2_2 != dword_A83D4C ) /*0x50e186*/
              return; /*0x50e186*/
            goto LABEL_16; /*0x50e186*/
          }
          if ( *(unsigned char *)(a2_2 + 492) || *(unsigned char *)(a2_2 + 493) ) /*0x50e16f*/
          {
  LABEL_16:
            if ( !dword_A8E7AC ) /*0x50e18f*/
    ((VoxClass *)(g_Str_EVA_RobotTanksOffline))->FindAndPlay(-1); /*0x50e19b*/
          }
        }
      }
    }
  }
}
}
// 0x5471B0
namespace gamemd {
int HouseClass::GetCameoTypeIndex(int a2, void *a2_1)
{

  unsigned int *v2; // eax
  int v3; // ecx

  v2 = (unsigned int *)(*((int (**)(HouseClass *))this->AbstractClass + 39))(this); /*0x5471b2*/
  if ( v2 && (v3 = v2[a2 % (*v2 * v2[1]) + 4]) != 0 ) /*0x5471d3*/
    return *(char *)(v3 + 42); /*0x5471d5*/
  else
    return 0; /*0x5471dc*/

}
}
// 0x5D70F0
namespace gamemd {
AbstractClass * * HouseClass::AIDecision(ObjectClass * aP0, int * a1)
{
  int v2; // ebp
  int InfantryTypeVector_field_0x14; // edx
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  int v8; // eax
  int v9; // edx
  unsigned int *v10; // ecx
  int v11; // eax
  int v12; // edi
  int InfantryTypeVector_field_0x08; // eax
  int v14; // esi
  int v15; // eax
  int v16; // esi
  int v18; // ebp
  int v19; // ecx
  int v20; // eax
  int InfantryTypeVector_field_0x1C; // edx
  int v22; // esi
  void **v23; // eax
  int *v24; // edi
  int16_t *CurrentOption; // eax
  int *v26; // esi
  int v27; // eax
  int v28; // [esp+10h] [ebp-38h]
  int v29; // [esp+14h] [ebp-34h] BYREF
  InfantryTypeVector v30; // [esp+18h] [ebp-30h] BYREF
  int v31; // [esp+38h] [ebp-10h]
  char v32; // [esp+3Dh] [ebp-Bh]
  int v33; // [esp+40h] [ebp-8h]
  int v34; // [esp+44h] [ebp-4h]

  v2 = 0; /*0x5d70fb*/
  if ( *a1 <= 0 ) /*0x5d7101*/
    return 1; /*0x5d7492*/
  v28 = *a1; /*0x5d710d*/
  UnitTypeVector::Construct2((UnitTypeVector *)&v30.q018, 0, 0); /*0x5d7111*/
  v30.q018 = (int)&vt_DynamicVectorClass; /*0x5d711c*/
  v34 = 10; /*0x5d7124*/
  v33 = 0; /*0x5d712c*/
  InfantryTypeVector::ConstructFromData(&v30, 0, 0); /*0x5d7130*/
  InfantryTypeVector_field_0x14 = 10; /*0x5d7139*/
  *(unsigned int *)v30.__pad_000 = &vt_DynamicVectorClass; /*0x5d713e*/
  v30.q014 = 10; /*0x5d7146*/
  v4 = aP0->attachedTag; /*0x5d714a*/
  v30.q010 = 0; /*0x5d714d*/
  v5 = 1 << v4->u32_B4; /*0x5d7161*/
  if ( dword_A83CF0 <= 0 ) /*0x5d7165*/
    goto LABEL_20; /*0x5d7165*/
  v6 = v31; /*0x5d716b*/
  do /*0x5d7210*/
  {
    v7 = *((unsigned int *)dword_A83CE4 + v2); /*0x5d7175*/
    if ( *(unsigned char *)(v7 + 1749) /*0x5d719e*/
      && (v5 & *(unsigned int *)(v7 + 1740)) != 0
      && *(unsigned int *)(v7 + 1588) <= aP0->q1D4 )
    {
      v8 = 0; /*0x5d71a6*/
      v9 = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 2864); /*0x5d71a8*/
      if ( v9 <= 0 ) /*0x5d71b0*/
      {
  LABEL_11:
        if ( v33 < v6 ) /*0x5d71c8*/
    goto LABEL_16; /*0x5d71c8*/
    if ( (v32 || !v6) && v34 > 0 ) /*0x5d71dc*/
  {
          if ( v30->q018->vt_slot_8(/*0x5d71eb*/
                 &v30.q018, v34 + v6, 0) )
          {
  LABEL_16:
            v11 = v33++; /*0x5d71f2*/
    *(unsigned int *)(v30.q01C + 4 * v11) = v7; /*0x5d7201*/
          }
          v6 = v31; /*0x5d7204*/
  }
      }
      else
      {
        v10 = *(unsigned int **)(*(unsigned int *)&g_RulesClass_Instance + 2852); /*0x5d71b2*/
        while ( *v10 != v7 ) /*0x5d71ba*/
        {
          ++v8; /*0x5d71bc*/
          ++v10; /*0x5d71bd*/
          if ( v8 >= v9 ) /*0x5d71c2*/
            goto LABEL_11; /*0x5d71c2*/
        }
      }
    }
    ++v2; /*0x5d7208*/
  }
  while ( v2 < dword_A83CF0 ); /*0x5d7210*/
  InfantryTypeVector_field_0x14 = v30.q014; /*0x5d7216*/
  LABEL_20:
  v12 = 0; /*0x5d721a*/
    if ( dword_A8E358 > 0 ) /*0x5d7223*/
  {
    InfantryTypeVector_field_0x08 = v30.q008; /*0x5d7229*/
    while ( 1 ) /*0x5d7239*/
    {
      v14 = *((unsigned int *)dword_A8E34C + v12); /*0x5d7239*/
      if ( *(unsigned char *)(v14 + 1749) /*0x5d725e*/
        && (v5 & *(unsigned int *)(v14 + 1740)) != 0
        && *(unsigned int *)(v14 + 1588) <= aP0->q1D4 )
      {
        if ( v30.q010 < InfantryTypeVector_field_0x08 ) /*0x5d7264*/
          goto LABEL_31; /*0x5d7264*/
        if ( ((((unsigned char *)&(v30.q00C))[1]) || !InfantryTypeVector_field_0x08) /*0x5d7274*/
          && InfantryTypeVector_field_0x14 > 0 )
        {
          break; /*0x5d7274*/
        }
      }
      LABEL_33:
      if ( ++v12 >= dword_A8E358 ) /*0x5d72a9*/
        goto LABEL_34; /*0x5d72a9*/
        InfantryTypeVector_field_0x14 = v30.q014; /*0x5d722f*/
    }
    if ( v30->vt_slot_8(/*0x5d7283*/
           &v30, InfantryTypeVector_field_0x14 + InfantryTypeVector_field_0x08, 0) )
    {
  LABEL_31:
      v15 = v30.q010++; /*0x5d728a*/
    *(unsigned int *)(v30.u32_4 + 4 * v15) = v14; /*0x5d7299*/
    }
    InfantryTypeVector_field_0x08 = v30.q008; /*0x5d729c*/
    goto LABEL_33; /*0x5d729c*/
  }
  LABEL_34:
  v16 = v33; /*0x5d72ab*/
    if ( v33 || v30.q010 ) /*0x5d72b9*/
  {
    v18 = 20; /*0x5d731a*/
    v19 = *a1; /*0x5d731f*/
    if ( *a1 > 0 ) /*0x5d7323*/
    {
      while ( v18 > 0 ) /*0x5d7331*/
      {
        if ( v19 > v28 / 3 && v16 ) /*0x5d734d*/
        {
          v20 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v16 - 1); /*0x5d735f*/
          InfantryTypeVector_field_0x1C = v30.q01C; /*0x5d7364*/
        }
        else
        {
          v20 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v30.q010 - 1); /*0x5d737e*/
          InfantryTypeVector_field_0x1C = v30.u32_4; /*0x5d7383*/
        }
        v22 = *(unsigned int *)(InfantryTypeVector_field_0x1C + 4 * v20); /*0x5d7387*/
        v23 = (void **)(*(int (__thiscall **)(int, MultiplayerGameMode *))(*(unsigned int *)v22 + 140))(v22, aP0); /*0x5d7393*/
        v24 = (int *)__RTDynamicCast( /*0x5d73b4*/
                       v23,
                       0,0,0,
                       0);
        CurrentOption = (int16_t *)HouseClass::GetCurrentOption((HouseClass *)aP0, &v29); /*0x5d73bb*/
        if ( FindInfantryDeployPosition(v24, CurrentOption, 4) ) /*0x5d73c4*/
        {
          v27 = (*(int (__thiscall **)(int))(*(unsigned int *)v22 + 172))(v22); /*0x5d73e5*/
          v26 = a1; /*0x5d73eb*/
          *a1 -= v27; /*0x5d73f3*/
          if ( ((int)dword_A8B230[0].vfptr & 0x200) != 0 ) /*0x5d7400*/
            Timer::SetFlag((Timer *)(v24 + 84), 1); /*0x5d740a*/
          if ( (uint8_t)((House *)((House *)aP0))->IsCurrentPlayer() ) /*0x5d7411*/
            v24->vt_slot_496(5); /*0x5d7420*/
          else
            v24->vt_slot_496(11); /*0x5d742e*/
        }
        else
        {
          if ( v24 ) /*0x5d73cf*/
            v24->COMStub_8(1); /*0x5d73d7*/
          v26 = a1; /*0x5d73da*/
          --v18; /*0x5d73de*/
        }
        v19 = *v26; /*0x5d7434*/
        if ( *v26 <= 0 ) /*0x5d7438*/
          break; /*0x5d7438*/
        v16 = v33; /*0x5d732b*/
      }
    }
    *(unsigned int *)v30.__pad_000 = &vt_VectorClass; /*0x5d7446*/
    if ( v30.u32_4 && (((unsigned char *)&(v30.q00C))[1]) ) /*0x5d7456*/
    {
      operator delete(((void *)v30.u32_4)); /*0x5d7459*/
      v30.u32_4 = 0; /*0x5d7461*/
    }
    (((unsigned char *)&(v30.q00C))[1]) = 0; /*0x5d7469*/
    v30.q008 = 0; /*0x5d7470*/
    v30.q018 = (int)&vt_VectorClass; /*0x5d7474*/
    if ( v30.q01C && v32 ) /*0x5d7484*/
      operator delete(((void *)v30.q01C)); /*0x5d7487*/
    return 1; /*0x5d7487*/
  }
    *(unsigned int *)v30.__pad_000 = &vt_VectorClass; /*0x5d72bf*/
    if ( v30.u32_4 && (((unsigned char *)&(v30.q00C))[1]) ) /*0x5d72d1*/
  {
    operator delete(((void *)v30.u32_4)); /*0x5d72d4*/
    v30.u32_4 = 0; /*0x5d72dc*/
  }
    (((unsigned char *)&(v30.q00C))[1]) = 0; /*0x5d72e4*/
    v30.q008 = 0; /*0x5d72eb*/
    v30.q018 = (int)&vt_VectorClass; /*0x5d72ef*/
    if ( v30.q01C ) /*0x5d72f7*/
  {
    if ( v32 ) /*0x5d72ff*/
      operator delete(((void *)v30.q01C)); /*0x5d7302*/
  }
    return 0; /*0x5d730a*/
}
}
// 0x5D74A0
namespace gamemd {
int HouseClass::InitAlliances()
{
  int nextArrayIndex; // edx
  unsigned int *vtable3; // eax
  int v3; // edi
  int v4; // ebp
  int *v5; // ebx
  int v6; // ecx
  int *v7; // esi
  int v9; // [esp+0h] [ebp-4h]

  nextArrayIndex = stru_A80220.nextArrayIndex; /*0x5d74a1*/
  if ( stru_A80220.nextArrayIndex <= 0 ) /*0x5d74a9*/
    return 1; /*0x5d754a*/
  vtable3 = stru_A80220.vfptr3; /*0x5d74af*/
  v3 = 1; /*0x5d74b8*/
  v4 = 0; /*0x5d74bd*/
  v9 = 1; /*0x5d74bf*/
  do /*0x5d7540*/
  {
    v5 = (int *)vtable3[v4]; /*0x5d74c3*/
    if ( !*(unsigned char *)(v5[13] + 422) ) /*0x5d74c9*/
    {
      v6 = v5[22551]; /*0x5d74d4*/
      if ( v6 != -2 && v6 != -1 && v3 < nextArrayIndex ) /*0x5d74e6*/
      {
        do /*0x5d752d*/
        {
          v7 = (int *)vtable3[v3]; /*0x5d74e8*/
          if ( !*(unsigned char *)(v7[13] + 422) && *(unsigned int *)(vtable3[v4] + 90204) == v7[22551] ) /*0x5d7509*/
          {
            HouseClass::HandleAlliance(v5, (int)v7, 0); /*0x5d7510*/
            HouseClass::HandleAlliance(v7, (int)v5, 0); /*0x5d751a*/
            vtable3 = stru_A80220.vfptr3; /*0x5d751f*/
          }
          nextArrayIndex = stru_A80220.nextArrayIndex; /*0x5d7524*/
          ++v3; /*0x5d752a*/
        }
        while ( v3 < stru_A80220.nextArrayIndex ); /*0x5d752d*/
        v3 = v9; /*0x5d752f*/
      }
    }
    ++v3; /*0x5d7533*/
    ++v4; /*0x5d7534*/
    v9 = v3; /*0x5d7537*/
  }
  while ( v3 - 1 < nextArrayIndex ); /*0x5d7540*/
  return 1; /*0x5d7549*/
}
}
// 0x5EE9D0
namespace gamemd {
AbstractClass * * HouseClass::FindStartPositions(void *a1)
{
  int v1; // eax
  int *p_uniqueId; // ecx
  int nextArrayIndex; // eax
  int i; // edi
  HouseClass *v5; // esi
  char v6; // bl
  int v7; // edx
  int v8; // eax
  int *v9; // ecx
  int *started; // eax
  int v11; // edi
  HouseClass *v12; // esi
  int *v13; // eax
  int v14; // [esp+0h] [ebp-34h] BYREF
  int v15; // [esp+4h] [ebp-30h] BYREF
  int v16; // [esp+8h] [ebp-2Ch] BYREF
  Multiplayer v17[16]; // [esp+Ch] [ebp-28h] BYREF
  Multiplayer v18[4]; // [esp+1Ch] [ebp-18h] BYREF
  void *Block; // [esp+20h] [ebp-14h]
  char v20; // [esp+29h] [ebp-Bh]

  Multiplayer::FindStartPositions(v18); /*0x5ee9d9*/
  v1 = 0; /*0x5ee9e4*/
  p_uniqueId = &dword_A8B230[124].uniqueId; /*0x5ee9e6*/
  do /*0x5eea04*/
  v17[v1++] = (Multiplayer)(*p_uniqueId++ != -1); /*0x5ee9f1*/
  while ( v1 < 16 ); /*0x5eea04*/
  nextArrayIndex = stru_A80220.nextArrayIndex; /*0x5eea06*/
  for ( i = 0; i < stru_A80220.nextArrayIndex; ++i ) /*0x5eea11*/
  {
    v5 = (HouseClass *)*((unsigned int *)stru_A80220.vfptr3 + i); /*0x5eea1f*/
    if ( !*(unsigned char *)(v5->relatedTagsCapacity + 422) && v5->currentPlayer ) /*0x5eea33*/
    {
      v6 = 0; /*0x5eea47*/
      v7 = -1; /*0x5eea49*/
      v8 = 0; /*0x5eea4c*/
      v9 = &dword_A8B230[124].uniqueId; /*0x5eea4e*/
      do /*0x5eea63*/
      {
        if ( *v9 == i ) /*0x5eea56*/
        {
          v6 = 1; /*0x5eea58*/
          v7 = v8; /*0x5eea5a*/
        }
        ++v8; /*0x5eea5c*/
        ++v9; /*0x5eea5d*/
      }
      while ( v8 < 16 ); /*0x5eea63*/
      if ( v6 ) /*0x5eea67*/
      {
        HouseClass::SetMapSeed(v5, *((unsigned int *)Block + v7)); /*0x5eead6*/
      }
      else
      {
        Debug::Log(); /*0x5eea73*/
        started = AssignRandomMapStartPositions(&v14, i, (int)v18, (int)v17, 1); /*0x5eea8d*/
        HouseClass::SetMapSeed(v5, *started); /*0x5eea97*/
        HouseClass::GetCurrentOption(v5, &v15); /*0x5eeaa3*/
        HouseClass::GetCurrentOption(v5, &v16); /*0x5eeab4*/
        Debug::Log(); /*0x5eeac2*/
      }
    }
    nextArrayIndex = stru_A80220.nextArrayIndex; /*0x5eeadb*/
  }
  v11 = 0; /*0x5eeaeb*/
  if ( nextArrayIndex > 0 ) /*0x5eeaef*/
  {
    do /*0x5eeb7e*/
    {
      v12 = (HouseClass *)*((unsigned int *)stru_A80220.vfptr3 + v11); /*0x5eeafb*/
      if ( !*(unsigned char *)(v12->relatedTagsCapacity + 422) && !v12->currentPlayer ) /*0x5eeb0b*/
      {
        Debug::Log(); /*0x5eeb1f*/
        v13 = AssignRandomMapStartPositions(&v16, v11, (int)v18, (int)v17, 0); /*0x5eeb39*/
        HouseClass::SetMapSeed(v12, *v13); /*0x5eeb43*/
        HouseClass::GetCurrentOption(v12, &v15); /*0x5eeb4f*/
        HouseClass::GetCurrentOption(v12, &v14); /*0x5eeb60*/
        Debug::Log(); /*0x5eeb6e*/
      }
      ++v11; /*0x5eeb7b*/
    }
    while ( v11 < stru_A80220.nextArrayIndex ); /*0x5eeb7e*/
  }
  *(unsigned int *)v18 = &vt_VectorClass; /*0x5eeb8b*/
  if ( Block ) /*0x5eeb94*/
  {
    if ( v20 ) /*0x5eeb9c*/
      operator delete((Block)); /*0x5eeb9f*/
  }
}
}
// 0x740DF0
namespace gamemd {
int HouseClass::SetPrimaryFactory(int a2)
{

  if ( a2 == -1 || this->builtInfantryTypes[233] != -1 ) /*0x740e00*/
    return 0; /*0x740e17*/
  this->builtInfantryTypes[233] = a2; /*0x740e02*/
  (*((void (**)(HouseClass *, int))this->AbstractClass + 73))(this, 2); /*0x740e0c*/
  return 1; /*0x740e14*/

}
}
// 0x429210
namespace gamemd {
int HouseClass::QueryInterface_Helper(const void * a2, unsigned int * a3)
{
  const void **v4; // [esp+14h] [ebp+Ch]

  if ( !v4 ) /*0x429218*/
    return -2147467261; /*0x42921b*/
  if ( memcmp(a3, &unk_7F7CA0, 0x10u) && memcmp(a3, &IID_IUnknown, 0x10u) ) /*0x42924a*/
    return -2147467262; /*0x42924f*/
  *v4 = a2; /*0x42925c*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x429261*/
  return 0; /*0x42921a*/
}
} // namespace gamemd

// 0x429270
namespace gamemd {
int HouseClass::QueryInterface_Dispatch(int a2, const IID * a3, void ** a4)
{
  unsigned int *v4; // eax
  int v6; // ebx
  unsigned int *v7; // [esp+20h] [ebp+10h]

  v4 = v7; /*0x429270*/
  if ( !v7 ) /*0x42927a*/
    return -2147024809; /*0x429285*/
  *v7 = 0; /*0x42928c*/
  if ( a3 ) /*0x429294*/
    return -2147221232; /*0x42929f*/
  v6 = -2147467262; /*0x4292b4*/
  if ( !memcmp(a4, &unk_7E36C0, 0x10u) || !memcmp(a4, &IID_IUnknown, 0x10u) ) /*0x4292cb*/
  {
    if ( !&punk ) /*0x4292d6*/
      return -2147024882; /*0x4292e1*/
    v6 = (*(int (__stdcall **)(IUnknown *, void **, unsigned int *))punk.field_0)(&punk, a4, v7); /*0x4292f3*/
    if ( v6 < 0 ) /*0x4292f7*/
      operator delete((&punk)); /*0x4292fe*/
    v4 = v7; /*0x429306*/
  }
  if ( !memcmp(a4, &unk_7EA6E8, 0x10u) ) /*0x429318*/
  {
    if ( !&dword_87F7E8 ) /*0x429323*/
      return -2147024882; /*0x42932e*/
    v6 = (*(int (__stdcall **)(IUnknown *, void **, unsigned int *))dword_87F7E8.field_0)(&dword_87F7E8, a4, v4); /*0x429340*/
    if ( v6 < 0 ) /*0x429344*/
      operator delete((void *)(&dword_87F7E8)); /*0x42934b*/
  }
  return v6; /*0x42927c*/
}
} // namespace gamemd

// 0x42F380
namespace gamemd {
int HouseClass::FailedToPlaceNode(int a1)
{
  int result; // eax
  int v2; // ecx

  result = a1; /*0x42f380*/
  if ( a1 ) /*0x42f386*/
  {
    v2 = *(unsigned int *)(a1 + 12) + 1; /*0x42f38e*/
    *(unsigned int *)(a1 + 12) = v2; /*0x42f38f*/
    return v2; /*0x42f392*/
  }
  return result; /*0x42f388*/
}
} // namespace gamemd

// 0x4E8240
namespace gamemd {
int HouseClass::vt_placeholder_00()
{
  return 1; /*0x4e8245*/
}
} // namespace gamemd

// 0x4E8250
namespace gamemd {
int HouseClass::vt_placeholder_01()
{
  return 1; /*0x4e8255*/
}
} // namespace gamemd

// 0x4E8260
namespace gamemd {
int HouseClass::vt_placeholder_02()
{
  return 0; /*0x4e8262*/
}
} // namespace gamemd

// 0x4E8270
namespace gamemd {
std::locale::facet * HouseClass::initAngerStruct(char a2)
{

  this->AbstractClass = &vt_VersionClass; /*0x4e8279*/
  if ( (a2 & 1) != 0 ) /*0x4e827f*/
    __3_YAXPAX_Z(this); /*0x4e8282*/
  return (std::locale::facet *)this; /*0x4e828c*/

}
} // namespace gamemd

// 0x4F28A0
namespace gamemd {
int HouseClass_24::Seek(int a2, void *a2_2, void *a3_1)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4f28aa*/

}
} // namespace gamemd

// 0x4F28C0
namespace gamemd {
VectorCursor * HouseClass::vt_placeholder_07(char a2)
{
  /* X11: vtable install elided (implicit via VectorCursorGraphicMenuItemDynamicVectorClass virtuals 0x4f28c9) */
  if ( (a2 & 1) != 0 ) /*0x4f28cf*/
  operator delete((this)); /*0x4f28d2*/
  return this; /*0x4f28dc*/
}
} // namespace gamemd

// 0x4F28E0
namespace gamemd {
char HouseClass_24::AddRef(int a2)
{

  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->Capacity; /*0x4f28e2*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4f28ed*/
  {
    v3 = 0; /*0x4f28ef*/
    if ( m_8 <= 0 ) /*0x4f28f3*/
      return 1; /*0x4f2913*/
    v4 = *&this->Items; /*0x4f28f5*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4f28fb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4f2904*/
    {
      ++v3; /*0x4f2906*/
      ++v4; /*0x4f2907*/
      if ( v3 >= m_8 ) /*0x4f290c*/
        return 1; /*0x4f290c*/
    }
  }
  return 0; /*0x4f290e*/

}
} // namespace gamemd

// 0x4F2920
namespace gamemd {
char HouseClass_24::Release(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4f292c*/
  {
    LOBYTE(this->IsInitialized) = 0; /*0x4f2936*/
    if ( a3 ) /*0x4f293c*/
      v4 = a3; /*0x4f2952*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x4f294e*/
    LOBYTE(this->IsInitialized) = 1; /*0x4f2956*/
    if ( v4 ) /*0x4f295a*/
    {
      if ( *&this->Items ) /*0x4f2965*/
      {
        m_8 = this->Capacity; /*0x4f296c*/
        if ( a2 < m_8 ) /*0x4f2971*/
          m_8 = a2; /*0x4f2973*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->Items + 4 * i - 4) ) /*0x4f2979*/
          ++i; /*0x4f297e*/
        if ( BYTE1(this->IsInitialized) ) /*0x4f298b*/
        {
          __3_YAXPAX_Z(*&this->Items); /*0x4f2996*/
          *&this->Items = 0; /*0x4f299e*/
        }
      }
      *&this->Items = v4; /*0x4f29a7*/
      this->Capacity = a2; /*0x4f29af*/
      BYTE1(this->IsInitialized) = a3 == 0; /*0x4f29b2*/
      return 1; /*0x4f29b8*/
    }
    else
    {
      return 0; /*0x4f295f*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_PAVGraphicMenuItem *))(*(unsigned int *)this->vtable1 + 12))(this); /*0x4f29c2*/
    return 1; /*0x4f29c8*/
  }

}
} // namespace gamemd

// 0x4F29D0
namespace gamemd {
void HouseClass_24::ddtor(void *a1)
{

  if ( *&this->q004 && BYTE1(this->q00C) ) /*0x4f29dd*/
  {
    __3_YAXPAX_Z(*&this->Items); /*0x4f29e3*/
    *&this->Items = 0; /*0x4f29eb*/
  }
  BYTE1(this->IsInitialized) = 0; /*0x4f29ee*/
  this->Capacity = 0; /*0x4f29f1*/

}
} // namespace gamemd

// 0x4F2A00
namespace gamemd {
int HouseClass_24::Read(unsigned int * a2, void *a2_2, void *a3)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !(*((unsigned char *)&(*(unsigned int *)&a2_2->q00C))) ) /*0x4f2a00*/
    return 0; /*0x4f2a08*/
  m_8 = a2_2->q008; /*0x4f2a0e*/
  result = 0; /*0x4f2a11*/
  if ( m_8 <= 0 ) /*0x4f2a15*/
    return -1; /*0x4f2a2c*/
  for ( i = *(unsigned int **)&a2_2->q004; *i != *a2_2; ++i ) /*0x4f2a1b*/
  {
    if ( ++result >= m_8 ) /*0x4f2a2a*/
      return -1; /*0x4f2a2a*/
  }
  return result; /*0x4f2a0a*/
}
} // namespace gamemd

// 0x4F2A40
namespace gamemd {
unsigned int HouseClass_24::Write(int a2)
{

  if ( LOBYTE(this->q00C) ) /*0x4f2a40*/
    return (unsigned int)(a2 - *&this->Items) >> 2; /*0x4f2a55*/
  else
    return 0; /*0x4f2a47*/

}
} // namespace gamemd

// 0x4F2B40
namespace gamemd {
unsigned int * HouseClass::vt_placeholder_09()
{
  ++this->vtable3; /*0x4f2b42*/
  return this; /*0x4f2b45*/
}
} // namespace gamemd

// 0x4F2B50
namespace gamemd {
unsigned int * HouseClass::vt_placeholder_10()
{
  --this->vtable3; /*0x4f2b52*/
  return this; /*0x4f2b55*/
}
} // namespace gamemd

// 0x4F2B60
namespace gamemd {
VectorClass_flat * HouseClass_24::QueryInterface(unsigned int * Block, char a2)
{
  void *v3 = *&Block->__pad_004; // eax /*0x4f2b63*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4f2b66*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_D))[1]) ) /*0x4f2b70*/
  {
    operator delete((v3)); /*0x4f2b78*/
    *&Block->__pad_004 = 0; /*0x4f2b80*/
  }
  (((unsigned char *)&(*&Block->u32_C))[1]) = 0; /*0x4f2b8b*/
  Block->u32_8 = 0; /*0x4f2b91*/
  if ( (a2 & 1) != 0 ) /*0x4f2b98*/
    operator delete((Block)); /*0x4f2b9b*/
  return Block->tail_0; /*0x4f2ba5*/
}
} // namespace gamemd

// 0x4F6830
namespace gamemd {
int HouseClass::QueryInterface(CCINIClass * aP0, const void * a1, unsigned int * a2)
{
  int *p_arrayIndex; // ecx
  HouseTypeClass **p_buildingType; // ecx
  int *relatedTags; // ecx

  if ( !a2 ) /*0x4f6836*/
    return -2147467261; /*0x4f6838*/
  *a2 = 0; /*0x4f6859*/
  if ( !memcmp(a1, &IID_IUnknown, 0x10u) ) /*0x4f685f*/
    *a2 = aP0; /*0x4f6863*/
  if ( !memcmp(a1, &IID_IHouse, 0x10u) ) /*0x4f6874*/
  {
    if ( aP0 ) /*0x4f687a*/
      p_arrayIndex = &aP0->arrayIndex; /*0x4f687c*/
    else
      p_arrayIndex = 0; /*0x4f6881*/
    *a2 = p_arrayIndex; /*0x4f6883*/
  }
  if ( !memcmp(a1, &IID_IPublicHouse, 0x10u) ) /*0x4f6893*/
  {
    if ( aP0 ) /*0x4f6899*/
      p_buildingType = &aP0->buildingType; /*0x4f689b*/
    else
      p_buildingType = 0; /*0x4f68a0*/
    *a2 = p_buildingType; /*0x4f68a2*/
  }
  if ( !memcmp(a1, &unk_7F7CD0, 0x10u) ) /*0x4f68b2*/
  {
    if ( aP0 ) /*0x4f68b8*/
      relatedTags = aP0->relatedTags; /*0x4f68ba*/
    else
      relatedTags = 0; /*0x4f68bf*/
    *a2 = relatedTags; /*0x4f68c1*/
  }
  if ( !memcmp(a1, &IID_IPersist, 0x10u) ) /*0x4f68d1*/
    *a2 = aP0; /*0x4f68d6*/
  if ( !memcmp(a1, &IID_IPersistStream, 0x10u) ) /*0x4f68e6*/
    *a2 = aP0; /*0x4f68ed*/
  if ( !*a2 ) /*0x4f68ef*/
    return -2147467262; /*0x4f68f4*/
  (*((void (__stdcall **)(HouseClass *))aP0->vfptr + 1))(aP0); /*0x4f68ff*/
  return 0; /*0x4f683d*/
}
} // namespace gamemd

// 0x4F9610
namespace gamemd {
double HouseClass::GiveTiberium_Storage(float aP1, int aP2)
{

  int v4; // eax
  int result; // eax

  LOWORD(v4) = Math::RoundToInt(aP1 * 5.0 + (double)this->siloMoney); /*0x4f9623*/
  this->siloMoney = v4; /*0x4f9628*/
  LOWORD(result) = Math::RoundToInt( /*0x4f9654*/
                     (double)*(int *)(*(unsigned int *)(g_BuildingLoadQueue_Array.?[2] + 4 * aP2) + 184)
  * *(float *)(this->relatedTagsCapacity + 328)
  * aP1
  + (double)this->balance);
  this->balance = result; /*0x4f965d*/
  return result; /*0x4f9664*/

}
} // namespace gamemd

// 0x4F9970
namespace gamemd {
char HouseClass::UpdateAllSilos(int a2, int a3)
{
  int v3; // esi
  int v5; // eax
  double v6; // st7
  int v7; // ebx
  int i; // esi
  int v9; // ecx

  v3 = 0; /*0x4f9976*/
  if ( a3 ) /*0x4f997d*/
    v3 = Math::RoundToInt((double)a2 / (double)a3 * 4.0 + 0.5); /*0x4f9998*/
  v5 = 0; /*0x4f99a0*/
  if ( this->totalStorage ) /*0x4f999a*/
  {
    v6 = Float4::Sum(&this->Float4_19D); /*0x4f99ac*/
    v5 = Math::RoundToInt(v6 / (double)this->totalStorage * 4.0 + 0.5); /*0x4f99c3*/
  }
  if ( v3 != v5 ) /*0x4f99ca*/
  {
    v7 = this->bunkersCount; /*0x4f99cc*/
    for ( i = 0; i < v7; ++i ) /*0x4f99d3*/
    {
      v5 = this->absorbersCount; /*0x4f99d5*/
      v9 = *(unsigned int *)(v5 + 4 * i); /*0x4f99d8*/
      if ( v9 ) /*0x4f99dd*/
      {
        (*((unsigned char *)&(v5))) = *(unsigned char *)(v9 + 129); /*0x4f99df*/
        if ( !(unsigned char)v5 ) /*0x4f99e7*/
        {
          (*((unsigned char *)&(v5))) = *(unsigned char *)(*(unsigned int *)(v9 + 1312) + 5800); /*0x4f99ef*/
          if ( (unsigned char)v5 ) /*0x4f99f7*/
            (*((unsigned char *)&(v5))) = (*(int (__thiscall **)(int, int))(*(unsigned int *)v9 + 292))(v9, 2); /*0x4f99fd*/
        }
      }
    }
  }
  return v5; /*0x4f9a08*/
}
} // namespace gamemd

// 0x4F9B50
namespace gamemd {
int HouseClass::MakeAlly(int a2, char a3)
{
  return HouseClass::HandleAlliance(*((unsigned int *)stru_A80220.vfptr3 + a2), a3); /*0x4f9b67*/
}
} // namespace gamemd

// 0x4FB920
namespace gamemd {
unsigned int * HouseClass::SDDTORAllAndTriggers()
{

  int v1; // esi
  int v3; // eax
  HouseClass **v4; // ecx
  unsigned int *result; // eax
  int v6; // esi
  int v7; // ecx

  v1 = 0; /*0x4fb926*/
  if ( *(int *)&DataGlobal_A8EBA4 > 0 ) /*0x4fb92d*/
  {
    v3 = *(unsigned int *)&DataGlobal_A8EB98; /*0x4fb92f*/
    do /*0x4fb959*/
    {
      v4 = *(HouseClass ***)(v3 + 4 * v1); /*0x4fb934*/
      if ( v4[135] == this ) /*0x4fb93d*/
      {
        if ( v4 ) /*0x4fb941*/
        {
          ((void (*)(HouseClass **, int))(*v4)->?)(v4, 1); /*0x4fb947*/
          v3 = *(unsigned int *)&DataGlobal_A8EB98; /*0x4fb94a*/
        }
        --v1; /*0x4fb94f*/
      }
      ++v1; /*0x4fb956*/
    }
    while ( v1 < *(int *)&DataGlobal_A8EBA4 ); /*0x4fb959*/
  }
  result = (unsigned int *)dword_A8EAF8; /*0x4fb95b*/
  v6 = 0; /*0x4fb960*/
  if ( dword_A8EAF8 > 0 ) /*0x4fb964*/
  {
    result = dword_A8EAEC; /*0x4fb966*/
    do /*0x4fb99b*/
    {
      if ( *(unsigned int *)(*(unsigned int *)(result[v6] + 36) + 164) == this->relatedTagsCapacity ) /*0x4fb97c*/
      {
        v7 = result[v6]; /*0x4fb97e*/
        if ( v7 ) /*0x4fb983*/
        {
          (*(void (**)(int, int))(*(unsigned int *)v7 + 32))(v7, 1); /*0x4fb989*/
          result = dword_A8EAEC; /*0x4fb98c*/
        }
        --v6; /*0x4fb991*/
      }
      ++v6; /*0x4fb998*/
    }
    while ( v6 < dword_A8EAF8 ); /*0x4fb99b*/
  }
  if ( this ) /*0x4fb99f*/
    return (*((unsigned int *(**)(HouseClass *, int))this->AbstractClass + 8))(this, 1); /*0x4fb9a7*/
  return result; /*0x4fb9aa*/

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
  if ( !(uint8_t)((LayerClass *)((LayerClass *)&DataGlobal_87F7E8))->CoordinatesLegal(aP1) ) /*0x4fbf6f*/
    return 0; /*0x4fc055*/
  HouseClass::IsCellOccupied(this->ourFlagCoords[0], a3); /*0x4fbf8b*/
  relatedTagsCapacity = this->relatedTagsCapacity; /*0x4fbf92*/
  aP1 = *(int16_t **)v3; /*0x4fbf95*/
  v10 = relatedTagsCapacity->productionFactory_plants_capacity; /*0x4fbfa3*/
  v6 = (HouseClass *)((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj((int16_t *)&aP1); /*0x4fbfaa*/
  v7 = HouseClass::MarkCellBuildable(v6, v10); /*0x4fbfb6*/
  if ( v7 /*0x4fc034*/
    || (a3 = 0,
        aP1 = (int16_t *)*LayerClass::Pathfinding_Find(
                           &DataGlobal_87F7E8,
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
        aP1 != *(int16_t **)&((unsigned int *)&stru_A8EB00)[948])
    && (v11 = *(unsigned int *)(this->relatedTagsCapacity + 184),
        v8 = (HouseClass *)((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj((int16_t *)&aP1),
        (v7 = HouseClass::MarkCellBuildable(v8, v11)) != 0) )
  {
    this->ourFlagCoords[0] = (int)((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj((int16_t *)&aP1); /*0x4fc045*/
  }
  return v7; /*0x4fc04e*/
}
} // namespace gamemd

// 0x4FC060
namespace gamemd {
char HouseClass::PickedUpFlag(ObjectClass * aP1, char a3)
{
  if ( !aP1 || aP1->inLimbo ) /*0x4fc06c*/
    return 0; /*0x4fc0a8*/
  HouseClass::IsCellOccupied(this->ourFlagCoords[0], a3); /*0x4fc084*/
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

  result = (this->u8_578A); /*0x50bd10*/
  if ( !result ) /*0x50bd18*/
    return ShroudClass::Reset((ShroudClass *)&DataGlobal_87F7E8, (int)this); /*0x50bd20*/
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

  LOBYTE(v2) = (*((int (**)(void **))a1->? + 4))(&a1->?); /*0x54b98b*/
  if ( (unsigned char)v2 ) /*0x54b990*/
  {
    (*(void (**)(void *, unsigned int, int))(*(unsigned int *)a1->? + 1348))(a1->?, 0, 1072693248); /*0x54b9a4*/
    Value = ProgressTimer::GetValue((ProgressTimer *)((char *)a1->? + 904), &v6); /*0x54b9b8*/
    FacingClass::Set_SyncLog((char *)&a1->repairStationsCount, Value); /*0x54b9c1*/
    v4 = a1->relatedTags[0]; /*0x54b9c6*/
    a1->absorbersCapacity = 0; /*0x54b9cc*/
    a1->bunkersCount = 0; /*0x54b9cf*/
    a1->bunkers[0] = 0; /*0x54b9d2*/
    a1->bunkersCapacity = 0; /*0x54b9d5*/
    a1->occupiables[0] = v4; /*0x54b9d8*/
    LOBYTE(v2) = HouseClass::IonSensitivesShouldBeOffline(); /*0x54b9e4*/
    if ( !(unsigned char)v2 ) /*0x54b9ec*/
    {
      v2 = (unsigned int *)(*(int (**)(void *, int *))(*(unsigned int *)a1->? + 756))(a1->?, &v6); /*0x54b9f8*/
      if ( *v2 == dword_ABC588 ) /*0x54ba08*/
        LOBYTE(v2) = GadgetGrid::InsertItem((GadgetGrid *)&g_CellClassManager, (int)a1->?); /*0x54ba20*/
      a1->unitRepairStations[0] = 1; /*0x54ba25*/
    }
  }
  return (char)v2; /*0x54ba2c*/

}
} // namespace gamemd

// 0x6ABC60
namespace gamemd {
int HouseClass::GetStatus(int aP1, void *a2)
{
  int v2; // edx

  if ( this == 15 || this == 16 ) /*0x6abc68*/
    return 2; /*0x6abcbf*/
  if ( this == 1 || this == 40 || this == 2 || this == 3 ) /*0x6abc7c*/
    return 3; /*0x6abcb7*/
  if ( this == 6 || this == 7 ) /*0x6abc86*/
    return GetHouseTechLevel((int)this, v2) == 5; /*0x6abcb2*/
  if ( this == 57 || this == 32 || this == 31 ) /*0x6abc95*/
    return 1; /*0x6abc9d*/
  return -1; /*0x6abc9a*/
}
} // namespace gamemd
