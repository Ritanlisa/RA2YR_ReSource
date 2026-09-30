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

// 0x43B5E0
namespace gamemd {
void ** HouseClass::PsiWarn(InfantryClass * aP0, int a2, int arg0, void * a3)
{

  CoordStruct *v6; // edi
  void **v7; // eax
  AnimClass *v9; // esi
  CoordStruct aP2; // [esp+Ch] [ebp-18h] BYREF
  unsigned char v11[12]; // [esp+18h] [ebp-Ch] BYREF

  v6 = *(CoordStruct **)(*(unsigned int *)&stru_89E138.__pad_1600D[15] + 4 * AnimTypeClass::FindIndex(a3)); /*0x43b5fb*/
  aP2 = *(CoordStruct *)(*(int (**)(int, unsigned char *))(*(unsigned int *)a2 + 72))(a2, v11); /*0x43b60a*/
  v7 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x43b621*/
  if ( v7 ) /*0x43b62b*/
    v9 = AnimClass::ctor(v7, v6, &aP2, 0, (CoordStruct *)1, (void *)0x600, 0, 0); /*0x43b647*/
  else
    v9 = 0; /*0x43b64b*/
  AnimClass::SetField95(v9, arg0); /*0x43b654*/
  Function::Method_424CA0(v9, (int)aP0); /*0x43b65c*/
  v9->__pad_194[9] = 1; /*0x43b661*/
  return (void **)v9; /*0x43b66a*/

}
}
// 0x459840
namespace gamemd {
int HouseClass::GetRepairStepAmount()
{

  unsigned int *v1; // edx
  int result; // eax

  v1 = (unsigned int *)*((unsigned int *)this + 328); /*0x459840*/
  result = v1[937]; /*0x459846*/
  if ( !result ) /*0x45984e*/
  {
    result = v1[938]; /*0x459850*/
    if ( !result ) /*0x459858*/
    {
      result = v1[939]; /*0x45985a*/
      if ( !result ) /*0x459862*/
        return *((unsigned int *)this + 445); /*0x459864*/
    }
  }
  return result; /*0x45986a*/

}
}
// 0x4ADEE0
namespace gamemd {
void HouseClass::ResetObjectOrders(char a1, int a2)
{

  int v2; // ebx
  int v3; // edi
  int v4; // esi

  v2 = MEMORY[0xA8EC88]; /*0x4adee1*/
  v3 = 0; /*0x4adee8*/
  if ( MEMORY[0xA8EC88] > 0 ) /*0x4adeec*/
  {
    while ( 1 ) /*0x4adefd*/
    {
      v4 = *((unsigned int *)MEMORY[0xA8EC7C] + v3); /*0x4adefd*/
      if ( !v4 /*0x4adf28*/
        || *(unsigned char *)(v4 + 129)
        || (*(int (**)(unsigned int))(*(unsigned int *)v4 + 44))(*((unsigned int *)MEMORY[0xA8EC7C] + v3)) == 6 && a1 )
      {
        goto LABEL_16; /*0x4adf28*/
      }
      if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)(v4 + 540)) ) /*0x4adf34*/
        break; /*0x4adf34*/
      if ( (*(int (**)(int))(*(unsigned int *)v4 + 44))(v4) == 6 /*0x4adfa5*/
        && *((unsigned char *)MEMORY[0x8871E0] + 6119)
        && (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(v4 + 540), HouseClass_Player) )
      {
        (*(void (**)(int, unsigned int, int, unsigned int, unsigned int))(*(unsigned int *)v4 + 1164))(v4, 0, a2, 0, 0); /*0x4adfb9*/
      }
      else if ( *(unsigned char *)((*(int (**)(int))(*(unsigned int *)v4 + 132))(v4) + 3281) ) /*0x4adfcb*/
      {
        goto LABEL_15; /*0x4adfd3*/
      }
LABEL_16:
      if ( ++v3 >= v2 ) /*0x4adfe2*/
        return; /*0x4adfe2*/
    }
    if ( !*(unsigned char *)(v4 + 1051) ) /*0x4adf3d*/
      goto LABEL_16; /*0x4adf3d*/
    (*(void (**)(int, unsigned int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)v4 + 1164))(v4, 0, 0, 0, 0); /*0x4adf57*/
    if ( !*(unsigned char *)((*(int (**)(int))(*(unsigned int *)v4 + 132))(v4) + 3281) ) /*0x4adf67*/
      goto LABEL_16; /*0x4adf6f*/
LABEL_15:
    (*(void (**)(int))(*(unsigned int *)v4 + 1048))(v4); /*0x4adfd5*/
    goto LABEL_16; /*0x4adfd9*/
  }

}
}
// 0x4ADFF0
namespace gamemd {
int HouseClass::RevealShroudForAllies(char a1, int a2)
{

  int result; // eax
  int i; // ebp
  #375 **v4; // esi

  result = MEMORY[0x8A03A0]; /*0x4adff0*/
  for ( i = 0; i < MEMORY[0x8A03A0]; ++i ) /*0x4adffa*/
  {
    v4 = *(#375 ***)(MEMORY[0x8A0394] + 4 * i); /*0x4ae010*/
    if ( v4 /*0x4ae02b*/
      && ((unsigned char)v4[5] & 1) != 0
      && ((*((int (**)(unsigned int))*v4 + 11))(*(unsigned int *)(MEMORY[0x8A0394] + 4 * i)) != 6 || !a1) )
    {
      if ( (unsigned __int8)House::IsHumanPlayer(v4[135]) ) /*0x4ae033*/
      {
        if ( *((unsigned char *)v4 + 1051) ) /*0x4ae03c*/
          (*((void (**)(#375 **, unsigned int, int))*v4 + 72))(v4, 0, a2); /*0x4ae04d*/
      }
      else if ( (*((int (**)(#375 **))*v4 + 11))(v4) == 6 /*0x4ae07d*/
             && HIBYTE(MEMORY[0x8871E0][1].?[2])
             && (unsigned __int8)HouseClass::IsAlliedWith(v4[135], HouseClass_Player) )
      {
        (*((void (**)(#375 **, int, unsigned int))*v4 + 72))(v4, a2, 0); /*0x4ae08d*/
      }
    }
    result = MEMORY[0x8A03A0]; /*0x4ae093*/
  }
  return result; /*0x4ae0a4*/

}
}
// 0x4F54A0
namespace gamemd {
int HouseClass::Construct()
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

  AbstractClass::Constructor((AbstractClass *)this); /*0x4f54a9*/
  *(this + 12) = -1; /*0x4f54b8*/
  *(this + 13) = a2; /*0x4f54c2*/
  TagClassVector::Construct((TagClassVector *)this + 14, 0, 0); /*0x4f54c5*/
  *(this + 14) = (int)&DynamicVectorClass<TagClass *>::`vftable'; /*0x4f54cf*/
  *(this + 19) = 10; /*0x4f54d5*/
  *(this + 18) = 0; /*0x4f54d8*/
  VectorClass::BuildingConstructor((VectorClass *)this + 5, 0, 0); /*0x4f54e2*/
  *(this + 20) = (int)&DynamicVectorClass<BuildingClass *>::`vftable'; /*0x4f54e7*/
  *(this + 25) = 10; /*0x4f54ed*/
  *(this + 24) = 0; /*0x4f54f0*/
  VectorClass::BuildingConstructor((VectorClass *)(this + 26), 0, 0); /*0x4f54fa*/
  *(this + 26) = (int)&DynamicVectorClass<BuildingClass *>::`vftable'; /*0x4f54ff*/
  *(this + 31) = 10; /*0x4f5505*/
  *(this + 30) = 0; /*0x4f5508*/
  VectorClass::BuildingConstructor((VectorClass *)this + 8, 0, 0); /*0x4f5515*/
  *(this + 32) = (int)&DynamicVectorClass<BuildingClass *>::`vftable'; /*0x4f551a*/
  *(this + 37) = 10; /*0x4f5520*/
  *(this + 36) = 0; /*0x4f5523*/
  VectorClass::BuildingConstructor((VectorClass *)(this + 38), 0, 0); /*0x4f5530*/
  *(this + 38) = (int)&DynamicVectorClass<BuildingClass *>::`vftable'; /*0x4f5535*/
  *(this + 43) = 10; /*0x4f553b*/
  *(this + 42) = 0; /*0x4f553e*/
  VectorClass::BuildingConstructor((VectorClass *)this + 11, 0, 0); /*0x4f554b*/
  *(this + 44) = (int)&DynamicVectorClass<BuildingClass *>::`vftable'; /*0x4f5550*/
  *(this + 49) = 10; /*0x4f5556*/
  *(this + 48) = 0; /*0x4f5559*/
  VectorClass::BuildingConstructor((VectorClass *)(this + 50), 0, 0); /*0x4f5566*/
  *(this + 50) = (int)&DynamicVectorClass<BuildingClass *>::`vftable'; /*0x4f556b*/
  *(this + 55) = 10; /*0x4f5571*/
  *(this + 54) = 0; /*0x4f5574*/
  VectorClass::BuildingConstructor((VectorClass *)this + 14, 0, 0); /*0x4f5581*/
  *(this + 56) = (int)&DynamicVectorClass<BuildingClass *>::`vftable'; /*0x4f5586*/
  *(this + 61) = 10; /*0x4f558c*/
  *(this + 60) = 0; /*0x4f558f*/
  VectorClass::BuildingConstructor((VectorClass *)(this + 62), 0, 0); /*0x4f559c*/
  *(this + 62) = (int)&DynamicVectorClass<BuildingClass *>::`vftable'; /*0x4f55a1*/
  *(this + 67) = 10; /*0x4f55a7*/
  *(this + 66) = 0; /*0x4f55aa*/
  VectorClass::BuildingConstructor((VectorClass *)this + 17, 0, 0); /*0x4f55b7*/
  *(this + 68) = (int)&DynamicVectorClass<BuildingClass *>::`vftable'; /*0x4f55bc*/
  *(this + 73) = 10; /*0x4f55c2*/
  *(this + 72) = 0; /*0x4f55c5*/
  VectorClass::BuildingConstructor((VectorClass *)(this + 74), 0, 0); /*0x4f55d2*/
  *(this + 74) = (int)&DynamicVectorClass<BuildingClass *>::`vftable'; /*0x4f55d7*/
  *(this + 79) = 10; /*0x4f55dd*/
  *(this + 78) = 0; /*0x4f55e0*/
  VectorClass::BuildingConstructor((VectorClass *)this + 20, 0, 0); /*0x4f55ed*/
  *(this + 80) = (int)&DynamicVectorClass<BuildingClass *>::`vftable'; /*0x4f55f2*/
  *(this + 85) = 10; /*0x4f55f8*/
  *(this + 84) = 0; /*0x4f55fb*/
  *(this + 86) = 0; /*0x4f55fe*/
  *(this + 87) = 0; /*0x4f5604*/
  *(this + 88) = 0; /*0x4f5610*/
  *(this + 89) = 0; /*0x4f5617*/
  *(this + 90) = 0; /*0x4f5620*/
  StartingTechnoVector::Construct((StartingTechnoVector *)this + 91, 0, 0); /*0x4f5626*/
  *(this + 91) = (int)&DynamicVectorClass<HouseClass::StartingTechnoStruct *>::`vftable'; /*0x4f562b*/
  *(this + 96) = 10; /*0x4f5631*/
  *(this + 95) = 0; /*0x4f5634*/
  *(this + 97) = (int)dword_A8B230[43].vtable1; /*0x4f5648*/
  *(this + 98) = 0; /*0x4f564e*/
  *(this + 99) = 1072693248; /*0x4f5654*/
  *(this + 100) = 0; /*0x4f565a*/
  *(this + 101) = 1072693248; /*0x4f5660*/
  *(this + 102) = 0; /*0x4f5666*/
  *(this + 103) = 1072693248; /*0x4f566c*/
  *(this + 104) = 0; /*0x4f5672*/
  *(this + 105) = 1072693248; /*0x4f5678*/
  *(this + 106) = 0; /*0x4f567e*/
  *(this + 107) = 1072693248; /*0x4f5684*/
  *(this + 108) = 0; /*0x4f568a*/
  *(this + 109) = 1072693248; /*0x4f5690*/
  *(this + 110) = 0; /*0x4f5696*/
  *(this + 111) = 1072693248; /*0x4f569c*/
  *(this + 112) = 0; /*0x4f56a2*/
  *(this + 113) = 0; /*0x4f56a8*/
  *(this + 114) = 0; /*0x4f56ae*/
  *(this + 115) = 0; /*0x4f56b7*/
  *(this + 116) = 0; /*0x4f56bd*/
  *(this + 117) = 1; /*0x4f56c3*/
  *(this + 118) = 0; /*0x4f56cd*/
  *(this + 119) = 0; /*0x4f56d3*/
  *(this + 120) = -1; /*0x4f56d9*/
  *(this + 121) = 0; /*0x4f56df*/
  *((unsigned char *)this + 492) = 0; /*0x4f56e5*/
  *((unsigned char *)this + 493) = 0; /*0x4f56eb*/
  *((unsigned char *)this + 494) = 0; /*0x4f56f1*/
  *((unsigned char *)this + 495) = 0; /*0x4f56f7*/
  *((unsigned char *)this + 496) = 1; /*0x4f56fd*/
  *((unsigned char *)this + 497) = 0; /*0x4f5704*/
  *((unsigned char *)this + 498) = 0; /*0x4f570a*/
  *((unsigned char *)this + 499) = 0; /*0x4f5710*/
  *((unsigned char *)this + 500) = 0; /*0x4f5716*/
  *((unsigned char *)this + 501) = 0; /*0x4f571c*/
  *((unsigned char *)this + 502) = 0; /*0x4f5722*/
  *((unsigned char *)this + 503) = 0; /*0x4f5728*/
  *((unsigned char *)this + 504) = 0; /*0x4f572e*/
  *((unsigned char *)this + 505) = 0; /*0x4f5734*/
  *((unsigned char *)this + 506) = 0; /*0x4f573a*/
  *((unsigned char *)this + 507) = 0; /*0x4f5740*/
  *((unsigned char *)this + 508) = 1; /*0x4f5746*/
  *(this + 128) = 0; /*0x4f574d*/
  *(this + 129) = 0; /*0x4f5753*/
  *((unsigned char *)this + 520) = 0; /*0x4f5759*/
  *(this + 131) = -1; /*0x4f575f*/
  *((unsigned char *)this + 576) = 0; /*0x4f5765*/
  *((unsigned char *)this + 577) = 0; /*0x4f576b*/
  *((unsigned char *)this + 578) = 0; /*0x4f5771*/
  *((unsigned char *)this + 579) = 0; /*0x4f5777*/
  *((unsigned char *)this + 580) = 0; /*0x4f577d*/
  *((unsigned char *)this + 581) = 0; /*0x4f5783*/
  *((unsigned char *)this + 582) = 0; /*0x4f5789*/
  *((unsigned char *)this + 583) = 0; /*0x4f578f*/
  *((unsigned char *)this + 584) = 0; /*0x4f5795*/
  *((unsigned char *)this + 585) = 0; /*0x4f579b*/
  *((unsigned char *)this + 586) = 0; /*0x4f57a1*/
  *((unsigned char *)this + 587) = 1; /*0x4f57a7*/
  *(this + 147) = *(this + 116); /*0x4f57bb*/
  *(this + 148) = 0; /*0x4f57c4*/
  SuperClassVector::Construct((SuperClassVector *)this + 149, 0, 0); /*0x4f57ca*/
  *(this + 149) = (int)&DynamicVectorClass<SuperClass *>::`vftable'; /*0x4f57cf*/
  *(this + 154) = 10; /*0x4f57d5*/
  *(this + 153) = 0; /*0x4f57d8*/
  *(this + 155) = -1; /*0x4f57de*/
  *(this + 156) = -1; /*0x4f57e4*/
  *(this + 157) = -1; /*0x4f57ea*/
  *(this + 158) = -1; /*0x4f57f0*/
  *(this + 159) = 0; /*0x4f57f6*/
  *(this + 160) = *(unsigned int *)&stru_A8EB00.?[416]; /*0x4f5802*/
  *(this + 162) = 0; /*0x4f5808*/
  v3 = *(unsigned int *)&stru_A8EB00.?[416]; /*0x4f580e*/
  *(this + 165) = 0; /*0x4f5814*/
  *(this + 163) = v3; /*0x4f581a*/
  *(this + 166) = *(unsigned int *)&stru_A8EB00.?[416]; /*0x4f5825*/
  *(this + 168) = 0; /*0x4f582b*/
  v4 = *(unsigned int *)&stru_A8EB00.?[416]; /*0x4f5831*/
  *(this + 171) = 0; /*0x4f5837*/
  *(this + 169) = v4; /*0x4f583d*/
  *(this + 172) = *(unsigned int *)&stru_A8EB00.?[416]; /*0x4f5849*/
  *(this + 174) = 0; /*0x4f584f*/
  *((unsigned char *)this + 700) = 0; /*0x4f5855*/
  *((unsigned char *)this + 701) = 0; /*0x4f585b*/
  *((unsigned char *)this + 702) = 0; /*0x4f5861*/
  *((unsigned char *)this + 703) = 0; /*0x4f5867*/
  *((unsigned char *)this + 704) = 0; /*0x4f586d*/
  *(this + 177) = 0; /*0x4f5879*/
  *(this + 178) = 0; /*0x4f587f*/
  *(this + 179) = 0; /*0x4f5885*/
  *(this + 180) = 0; /*0x4f588b*/
  *(this + 181) = 0; /*0x4f5891*/
  *(this + 182) = 0; /*0x4f5897*/
  *(this + 183) = 0; /*0x4f589d*/
  *(this + 184) = 0; /*0x4f58a3*/
  *(this + 185) = 0; /*0x4f58a9*/
  *(this + 186) = 0; /*0x4f58af*/
  *(this + 187) = 0; /*0x4f58b5*/
  *(this + 188) = 0; /*0x4f58bb*/
  *(this + 189) = 0; /*0x4f58c1*/
  *(this + 190) = 0; /*0x4f58c7*/
  Delegate::GetField((Delegate *)(this + 191)); /*0x4f58cd*/
  *(this + 195) = 0; /*0x4f58d8*/
  *(this + 196) = 0; /*0x4f58de*/
  Delegate::GetField((Delegate *)(this + 197)); /*0x4f58e4*/
  HouseClass::ClearStatArray((HouseClass *)(this + 202)); /*0x4f58ef*/
  HouseClass::ClearStatArray((HouseClass *)(this + 716)); /*0x4f58fa*/
  HouseClass::ClearStatArray((HouseClass *)(this + 1230)); /*0x4f5905*/
  HouseClass::ClearStatArray((HouseClass *)(this + 1744)); /*0x4f5910*/
  HouseClass::ClearStatArray((HouseClass *)(this + 2258)); /*0x4f591b*/
  HouseClass::ClearStatArray((HouseClass *)(this + 2772)); /*0x4f5926*/
  HouseClass::ClearStatArray((HouseClass *)(this + 3286)); /*0x4f5931*/
  HouseClass::ClearStatArray((HouseClass *)(this + 3800)); /*0x4f593c*/
  HouseClass::ClearStatArray((HouseClass *)(this + 4314)); /*0x4f5947*/
  HouseClass::ClearStatArray((HouseClass *)(this + 4828)); /*0x4f5952*/
  *(this + 5342) = 0; /*0x4f595c*/
  *(this + 5343) = 0; /*0x4f5962*/
  *(this + 5344) = 0; /*0x4f5968*/
  *(this + 5345) = 0; /*0x4f596e*/
  *(this + 5346) = 0; /*0x4f5974*/
  *(this + 5347) = 0; /*0x4f597a*/
  *(this + 5348) = 1065353216; /*0x4f5980*/
  *(this + 5349) = 1065353216; /*0x4f5986*/
  *(this + 5350) = 1065353216; /*0x4f598c*/
  *(this + 5351) = 1065353216; /*0x4f5992*/
  *(this + 5352) = 1065353216; /*0x4f5998*/
  *(this + 5353) = 0; /*0x4f599e*/
  *(this + 5354) = 0; /*0x4f59a4*/
  *(this + 5355) = 0; /*0x4f59aa*/
  *(this + 5356) = 0; /*0x4f59b0*/
  *(this + 5357) = 0; /*0x4f59b6*/
  *(this + 5358) = 0; /*0x4f59bc*/
  *(this + 5359) = 0; /*0x4f59c2*/
  *(this + 5360) = 0; /*0x4f59c8*/
  *(this + 5361) = 0; /*0x4f59ce*/
  *(this + 5362) = 0; /*0x4f59d4*/
  *(this + 5363) = 0; /*0x4f59da*/
  *((unsigned char *)this + 21456) = 0; /*0x4f59e0*/
  *((unsigned char *)this + 21457) = 0; /*0x4f59e6*/
  *((unsigned char *)this + 21458) = 0; /*0x4f59ec*/
  *((unsigned char *)this + 21459) = 0; /*0x4f59f2*/
  *((unsigned char *)this + 21460) = 0; /*0x4f59f8*/
  *((unsigned char *)this + 21461) = 0; /*0x4f59fe*/
  *((unsigned char *)this + 21462) = 0; /*0x4f5a04*/
  *((unsigned char *)this + 21463) = 0; /*0x4f5a0a*/
  *((unsigned char *)this + 21464) = 0; /*0x4f5a10*/
  *(this + 5367) = 0; /*0x4f5a16*/
  *((unsigned short *)this + 10736) = 0; /*0x4f5a1c*/
  *((unsigned short *)this + 10737) = 0; /*0x4f5a23*/
  *(this + 5389) = 0; /*0x4f5a2a*/
  *(this + 5410) = 0; /*0x4f5a30*/
  *(this + 5411) = -1; /*0x4f5a36*/
  *(this + 5412) = *(unsigned int *)&stru_A8EB00.?[948]; /*0x4f5a41*/
  *(this + 5413) = *(unsigned int *)&stru_A8EB00.?[948]; /*0x4f5a4d*/
  *(this + 5414) = 0; /*0x4f5a53*/
  *(this + 5430) = 0; /*0x4f5a59*/
  *(this + 5431) = -1; /*0x4f5a5f*/
  *(this + 5432) = 0; /*0x4f5a65*/
  *(this + 5433) = 0; /*0x4f5a6b*/
  *(this + 5434) = 0; /*0x4f5a71*/
  *(this + 5435) = 1; /*0x4f5a77*/
  *((unsigned short *)this + 10872) = 0; /*0x4f5a81*/
  *((unsigned short *)this + 10873) = 0; /*0x4f5a88*/
  *((unsigned short *)this + 10874) = 0; /*0x4f5a8f*/
  *((unsigned short *)this + 10875) = 0; /*0x4f5a96*/
  *((unsigned short *)this + 10876) = 0; /*0x4f5a9d*/
  *((unsigned short *)this + 10877) = 0; /*0x4f5aa4*/
  *(this + 5439) = -100; /*0x4f5ab1*/
  CounterClass::Construct((CounterClass *)this + 2720); /*0x4f5abb*/
  CounterClass::Construct((CounterClass *)(this + 5445)); /*0x4f5ac6*/
  CounterClass::Construct((CounterClass *)this + 2725); /*0x4f5ad1*/
  CounterClass::Construct((CounterClass *)(this + 5455)); /*0x4f5adc*/
  CounterClass::Construct((CounterClass *)this + 2730); /*0x4f5ae7*/
  CounterClass::Construct((CounterClass *)(this + 5465)); /*0x4f5af2*/
  CounterClass::Construct((CounterClass *)this + 2735); /*0x4f5afd*/
  CounterClass::Construct((CounterClass *)(this + 5475)); /*0x4f5b08*/
  CounterClass::Construct((CounterClass *)this + 2740); /*0x4f5b13*/
  CounterClass::Construct((CounterClass *)(this + 5485)); /*0x4f5b1e*/
  CounterClass::Construct((CounterClass *)this + 2745); /*0x4f5b29*/
  CounterClass::Construct((CounterClass *)(this + 5495)); /*0x4f5b34*/
  *(this + 5500) = *(unsigned int *)&stru_A8EB00.?[416]; /*0x4f5b40*/
  *(this + 5502) = 0; /*0x4f5b46*/
  *(this + 5503) = 0; /*0x4f5b4c*/
  *(this + 5504) = -1; /*0x4f5b59*/
  AngerVector::Construct((AngerVector *)this + 5505, 0, 0); /*0x4f5b5f*/
  *(this + 5505) = (int)&DynamicVectorClass<AngerStruct>::`vftable'; /*0x4f5b6c*/
  *(this + 5510) = 10; /*0x4f5b76*/
  *(this + 5509) = 0; /*0x4f5b7c*/
  ScoutVector::Construct((ScoutVector *)this + 5511, 0, 0); /*0x4f5b82*/
  *(this + 5511) = (int)&DynamicVectorClass<ScoutStruct>::`vftable'; /*0x4f5b87*/
  *(this + 5516) = 10; /*0x4f5b91*/
  *(this + 5515) = 0; /*0x4f5b97*/
  *(this + 5517) = *(unsigned int *)&stru_A8EB00.?[416]; /*0x4f5ba2*/
  *(this + 5519) = 0; /*0x4f5ba8*/
  v5 = *(unsigned int *)&stru_A8EB00.?[416]; /*0x4f5bae*/
  *(this + 5522) = 0; /*0x4f5bb4*/
  *(this + 5520) = v5; /*0x4f5bba*/
  *(this + 5523) = -1; /*0x4f5bc0*/
  *(this + 5524) = -1; /*0x4f5bc6*/
  *(this + 5525) = -1; /*0x4f5bcc*/
  *(this + 5526) = -1; /*0x4f5bd2*/
  *(this + 5527) = 100; /*0x4f5bdd*/
  *(this + 5528) = 75; /*0x4f5be7*/
  *(this + 5529) = 75; /*0x4f5bed*/
  *(this + 5530) = 75; /*0x4f5bf3*/
  *(this + 5531) = 0; /*0x4f5bf9*/
  v6 = (HouseClass *)(this + 5532); /*0x4f5bff*/
  v61 = 3; /*0x4f5c05*/
  do /*0x4f5c20*/
  {
    HouseClass::initDropshipData(v6); /*0x4f5c0f*/
    v6 = (HouseClass *)((char *)v6 + 44); /*0x4f5c18*/
    --v61; /*0x4f5c1c*/
  }
  while ( v61 ); /*0x4f5c20*/
  *(this + 5565) = 0; /*0x4f5c22*/
  *((unsigned char *)this + 22264) = 0; /*0x4f5c28*/
  *((unsigned char *)this + 22265) = 0; /*0x4f5c30*/
  *((unsigned char *)this + 22266) = 0; /*0x4f5c36*/
  *((unsigned char *)this + 22267) = 0; /*0x4f5c3c*/
  *((unsigned char *)this + 22268) = -1; /*0x4f5c48*/
  *((unsigned char *)this + 22269) = -1; /*0x4f5c4e*/
  *((unsigned char *)this + 22270) = -1; /*0x4f5c54*/
  BaseClass::Constructor((BaseClass *)(this + 5568)); /*0x4f5c5a*/
  *((unsigned char *)this + 22392) = 1; /*0x4f5c5f*/
  *((unsigned char *)this + 22393) = 1; /*0x4f5c66*/
  *((unsigned char *)this + 22394) = 0; /*0x4f5c6d*/
  *((unsigned char *)this + 22395) = 0; /*0x4f5c73*/
  *(this + 5599) = 0; /*0x4f5c79*/
  *((unsigned short *)this + 11200) = 0; /*0x4f5c7f*/
  *((unsigned short *)this + 11201) = 0; /*0x4f5c86*/
  *((unsigned short *)this + 11202) = 0; /*0x4f5c8d*/
  *((unsigned short *)this + 11203) = 0; /*0x4f5c94*/
  *(this + 5602) = 0; /*0x4f5c9b*/
  LOWORD(v7) = Math::RoundToInt(*(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5808) * 900.0); /*0x4f5cb3*/
  v8 = *(unsigned int *)&stru_A8EB00.?[416]; /*0x4f5cb8*/
  *(this + 5605) = v7; /*0x4f5cbe*/
  *(this + 5603) = v8; /*0x4f5cc4*/
  *(this + 5606) = *(unsigned int *)&stru_A8EB00.?[416]; /*0x4f5cd5*/
  *(this + 5608) = 1; /*0x4f5cdb*/
  *(this + 5609) = *(unsigned int *)&stru_A8EB00.?[416]; /*0x4f5ce7*/
  *(this + 5611) = 0; /*0x4f5ced*/
  v9 = *(unsigned int *)&stru_A8EB00.?[416]; /*0x4f5cf3*/
  *(this + 5614) = 1; /*0x4f5cf9*/
  *(this + 5612) = v9; /*0x4f5cff*/
  *(this + 5615) = *(unsigned int *)&stru_A8EB00.?[416]; /*0x4f5d0b*/
  *(this + 5617) = 1; /*0x4f5d11*/
  v10 = *(unsigned int *)&stru_A8EB00.?[416]; /*0x4f5d17*/
  *(this + 5620) = 1; /*0x4f5d1d*/
  *(this + 5618) = v10; /*0x4f5d23*/
  *(this + 5621) = *(unsigned int *)&stru_A8EB00.?[416]; /*0x4f5d2f*/
  *(this + 5623) = 1; /*0x4f5d35*/
  *(this + 5624) = 0; /*0x4f5d3b*/
  *((unsigned char *)this + 90100) = 0; /*0x4f5d41*/
  *((unsigned char *)this + 90121) = 0; /*0x4f5d4d*/
  *(this + 22549) = 0; /*0x4f5d54*/
  *(this + 22552) = 0; /*0x4f5d5d*/
  ConnectionPointVector::Construct((ConnectionPointVector *)this + 22553, 0, 0); /*0x4f5d63*/
  *(this + 22553) = (int)&DynamicVectorClass<IConnectionPoint *>::`vftable'; /*0x4f5d68*/
  *(this + 22558) = 10; /*0x4f5d6e*/
  *(this + 22557) = 0; /*0x4f5d71*/
  *(this + 22559) = 0; /*0x4f5d74*/
  *(this + 22560) = 0; /*0x4f5d7a*/
  *(this + 22562) = 0; /*0x4f5d85*/
  *(this + 22563) = 1072693248; /*0x4f5d8b*/
  *(this + 22564) = 0; /*0x4f5d91*/
  *(this + 22565) = 1072693248; /*0x4f5d97*/
  *(this + 22567) = 1051260355; /*0x4f5da2*/
  *(this + 22568) = 1051260355; /*0x4f5da8*/
  *(this + 22569) = 1051260355; /*0x4f5dae*/
  *(this + 22570) = 0; /*0x4f5db4*/
  *(this + 22571) = 0; /*0x4f5dba*/
  *(this + 22572) = 0; /*0x4f5dc0*/
  *(this + 22573) = 0; /*0x4f5dc6*/
  *this = (int)&HouseClass::`vftable'; /*0x4f5dcc*/
  *(this + 1) = (int)&HouseClass::`vftable'; /*0x4f5dd3*/
  *(this + 2) = (int)&HouseClass::`vftable'; /*0x4f5dda*/
  *(this + 3) = (int)&HouseClass::`vftable'; /*0x4f5de1*/
  *(this + 9) = (int)&HouseClass::`vftable'; /*0x4f5de8*/
  *(this + 10) = (int)&HouseClass::`vftable'; /*0x4f5def*/
  *(this + 11) = (int)&HouseClass::`vftable'; /*0x4f5dfb*/
  if ( &g_INI_DefaultBuffer ) /*0x4f5e04*/
  {
    strncpy(Destination, &g_INI_DefaultBuffer, 0x1Fu); /*0x4f5e18*/
    Destination[31] = 0; /*0x4f5e20*/
  }
  else
  {
    Destination[0] = 0; /*0x4f5e06*/
  }
  if ( Destination != (char *)this + 90121 ) /*0x4f5e30*/
    qmemcpy((char *)this + 90121, Destination, 0x20u); /*0x4f5e41*/
  *((unsigned short *)this + 45077) = 0; /*0x4f5e46*/
  AbstractClass::GenerateUniqueID((AbstractClass *)(this + 1)); /*0x4f5e4e*/
  v11 = *(this + 13); /*0x4f5e53*/
  if ( v11 ) /*0x4f5e58*/
    *(this + 22549) = *(unsigned int *)(v11 + 192); /*0x4f5e60*/
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
    *(unsigned int *)(g_BuildingLoadQueue_Array.?[4] + 4 * v14) = this; /*0x4f5f5b*/
  }
  if ( *(int *)&g_BuildingLoadQueue_Array.?[32] < *(int *)&g_BuildingLoadQueue_Array.?[24] /*0x4f5f92*/
    || (g_BuildingLoadQueue_Array.?[29] || !*(unsigned int *)&g_BuildingLoadQueue_Array.?[24])
    && *(int *)&g_BuildingLoadQueue_Array.?[36] > 0
    && (*(unsigned __int8 (**)(char *, int, unsigned int))(*(unsigned int *)&g_BuildingLoadQueue_Array.?[16] + 8))(
         &g_BuildingLoadQueue_Array.?[16],
         *(unsigned int *)&g_BuildingLoadQueue_Array.?[36] + *(unsigned int *)&g_BuildingLoadQueue_Array.?[24],
         0) )
  {
    v15 = (*(unsigned int *)&g_BuildingLoadQueue_Array.?[32])++; /*0x4f5f9f*/
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
  *(this + 12) = stru_A80220.?; /*0x4f6010*/
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
        v25 = *(this + 5507); /*0x4f609a*/
        if ( *(this + 5509) < v25 /*0x4f60bc*/
          || (*((unsigned char *)this + 22033) || !v25)
          && (v26 = *(this + 5510), v26 > 0)
          && (*(unsigned __int8 (**)(int *, int, unsigned int))(*(this + 5505) + 8))(this + 5505, v26 + v25, 0) )
        {
          v27 = *(this + 5509); /*0x4f60c3*/
          v28 = *(this + 5506); /*0x4f60c6*/
          *(this + 5509) = v27 + 1; /*0x4f60cc*/
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
        v38 = *(this + 5513); /*0x4f6148*/
        if ( *(this + 5515) < v38 /*0x4f6167*/
          || (*((unsigned char *)this + 22057) || !v38)
          && (v39 = *(this + 5516), v39 > 0)
          && (*(unsigned __int8 (**)(int *, int, unsigned int))(*(this + 5511) + 8))(this + 5511, v39 + v38, 0) )
        {
          v40 = *(this + 5515); /*0x4f616e*/
          v41 = *(this + 5512); /*0x4f6171*/
          *(this + 5515) = v40 + 1; /*0x4f6177*/
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
  memset(this + 5625, 0, 0x10810u); /*0x4f6200*/
  if ( dword_A8E340 > 0 ) /*0x4f6208*/
  {
    do /*0x4f6290*/
    {
      v44 = __2_YAPAXI_Z(0x80u); /*0x4f6213*/
      if ( v44 ) /*0x4f621d*/
        v45 = SuperClass::Construct(v44, *((unsigned int *)dword_A8E334 + v63), (int)this); /*0x4f6235*/
      else
        v45 = 0; /*0x4f6239*/
      v46 = *(this + 151); /*0x4f623b*/
      if ( *(this + 153) < v46 /*0x4f6269*/
        || (*((unsigned char *)this + 609) || !v46)
        && (v47 = *(this + 154), v47 > 0)
        && (*(unsigned __int8 (**)(int *, int, unsigned int))(*(this + 149) + 8))(this + 149, v47 + v46, 0) )
      {
        v48 = *(this + 153); /*0x4f6270*/
        v49 = *(this + 150); /*0x4f6273*/
        *(this + 153) = v48 + 1; /*0x4f6279*/
        *(unsigned int *)(v49 + 4 * v48) = v45; /*0x4f627c*/
      }
      ++v63; /*0x4f628c*/
    }
    while ( v63 < dword_A8E340 ); /*0x4f6290*/
  }
  v50 = a2; /*0x4f6296*/
  memset(this + 5369, 0, 0x50u); /*0x4f62a7*/
  memset(this + 5390, 0, 0x50u); /*0x4f62b6*/
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
    if ( Destination != (char *)(this + 22525) ) /*0x4f62e7*/
    {
      qmemcpy(this + 22525, Destination, 0x14u); /*0x4f62f8*/
      *((unsigned char *)this + 90120) = Destination[20]; /*0x4f62fa*/
    }
    v50 = a2; /*0x4f62fb*/
    wcscpy((wchar_t *)this + 45077, *(const wchar_t **)(a2 + 96)); /*0x4f630a*/
  }
  memset(this + 5625, 0, 0x10810u); /*0x4f6324*/
  *(this + 118) |= 1 << *(this + 12); /*0x4f633d*/
  v68 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 450, 1800); /*0x4f635a*/
  LOWORD(v51) = Math::RoundToInt((double)v68 * *(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4264)); /*0x4f6368*/
  *(this + 5500) = *(unsigned int *)&stru_A8EB00.?[416]; /*0x4f6373*/
  *(this + 5501) = *(unsigned int *)&Destination[4]; /*0x4f637d*/
  *(this + 5502) = v51; /*0x4f6383*/
  *(this + 5503) = v51; /*0x4f6389*/
  HouseClass::InitStatArray((HouseClass *)(this + 202), dword_A8B228); /*0x4f639c*/
  HouseClass::InitStatArray((HouseClass *)(this + 716), dword_A8E358); /*0x4f63ad*/
  HouseClass::InitStatArray((HouseClass *)(this + 1230), dword_A83CF0); /*0x4f63bf*/
  HouseClass::InitStatArray((HouseClass *)(this + 1744), dword_A83C78); /*0x4f63d1*/
  HouseClass::InitStatArray((HouseClass *)(this + 2258), dword_A8B228); /*0x4f63e2*/
  HouseClass::InitStatArray((HouseClass *)(this + 2772), dword_A8E358); /*0x4f63f4*/
  HouseClass::InitStatArray((HouseClass *)(this + 3286), dword_A83CF0); /*0x4f6406*/
  HouseClass::InitStatArray((HouseClass *)(this + 3800), dword_A83C78); /*0x4f6417*/
  HouseClass::InitStatArray((HouseClass *)(this + 4314), dword_A83C78); /*0x4f6429*/
  HouseClass::InitStatArray((HouseClass *)(this + 4828), 19); /*0x4f6436*/
  memset(this + 132, 0, 0x30u); /*0x4f644a*/
  if ( v50 ) /*0x4f644c*/
    *((unsigned char *)this + 507) = 1; /*0x4f644e*/
  *(this + 122) = -1; /*0x4f6455*/
  v52 = *(this + 13); /*0x4f645f*/
  if ( v52 ) /*0x4f6464*/
  {
    v53 = *(unsigned int *)(v52 + 188); /*0x4f6466*/
    if ( v53 ) /*0x4f646e*/
    {
      if ( v53 == 1 ) /*0x4f647b*/
      {
        *(this + 122) = 1; /*0x4f647d*/
      }
      else if ( v53 == 2 ) /*0x4f6488*/
      {
        *(this + 122) = 2; /*0x4f648a*/
      }
    }
    else
    {
      *(this + 122) = 0; /*0x4f6470*/
    }
  }
  v64 = 0; /*0x4f6494*/
  HouseClass::QueryInterface((HouseClass *)this, &IID_IUnknown, &v64); /*0x4f649f*/
  v54 = (ConnectionPointClass *)__2_YAPAXI_Z(0x34u); /*0x4f64a6*/
  if ( v54 ) /*0x4f64b0*/
    v55 = ConnectionPointClass::Construct(v54, dword_7E9550, v64); /*0x4f64be*/
  else
    v55 = 0; /*0x4f64c5*/
  *(this + 22559) = (int)v55; /*0x4f64cb*/
  (*(void (**)(unsigned int *, void *, int *))*v55)(v55, &unk_7F7CC0, &v65); /*0x4f64da*/
  v56 = *(this + 22555); /*0x4f64dc*/
  if ( *(this + 22557) < v56 /*0x4f650a*/
    || (*((unsigned char *)this + 90225) || !v56)
    && (v57 = *(this + 22558), v57 > 0)
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(*(this + 22553) + 8))(this + 22553, v57 + v56, 0) )
  {
    v58 = *(this + 22557); /*0x4f6511*/
    v59 = *(this + 22554); /*0x4f6514*/
    *(this + 22557) = v58 + 1; /*0x4f651a*/
    *(unsigned int *)(v59 + 4 * v58) = v65; /*0x4f6521*/
  }
  (*(void (**)(int))(*(unsigned int *)v64 + 8))(v64); /*0x4f652b*/
  return (int)this; /*0x4f652e*/

}

// 0x4F9A50
namespace gamemd {
int HouseClass::IsAlliedWith()
{

  IUnknown *result; // eax
  int v3; // ecx

  result = (IUnknown *)this; /*0x4f9a50*/
  if ( !aP1 ) /*0x4f9a58*/
    goto LABEL_8; /*0x4f9a58*/
  if ( aP1 == this ) /*0x4f9a5c*/
  {
    LOBYTE(result) = 1; /*0x4f9a5e*/
    return (int)result; /*0x4f9a60*/
  }
  v3 = *(unsigned int *)&aP1->__pad_28[8]; /*0x4f9a63*/
  if ( v3 == *(unsigned int *)&result->__pad_28[8] ) /*0x4f9a6b*/
  {
    LOBYTE(result) = 1; /*0x4f9a6d*/
    return (int)result; /*0x4f9a6f*/
  }
  if ( v3 == -1 ) /*0x4f9a75*/
LABEL_8:
    LOBYTE(result) = 0; /*0x4f9a8a*/
  else
    LOBYTE(result) = ((1 << v3) & *(unsigned int *)&result->__pad_5778[16]) != 0; /*0x4f9a84*/
  return (int)result; /*0x4f9a60*/

}
}
// 0x4FBE40
namespace gamemd {
int HouseClass::IsCellOccupied()
{

  char v4; // bl
  unsigned int *v6; // eax
  unsigned int *v7; // eax
  IUnknown *v9; // [esp+Ch] [ebp-10h] BYREF
  unsigned char v10[12]; // [esp+10h] [ebp-Ch] BYREF
  IUnknown *aP1a; // [esp+20h] [ebp+4h]

  v4 = 0; /*0x4fbe49*/
  if ( !aP1 ) /*0x4fbe50*/
    return 0; /*0x4fbf50*/
  if ( (*(int (**)(IUnknown *))(aP1->field_0 + 44))(aP1) == 1 ) /*0x4fbe60*/
  {
    v4 = HouseClass::ClearPrimaryFactory(aP1); /*0x4fbe69*/
    if ( !v4 || *(IUnknown **)(this + 21468) != aP1 ) /*0x4fbe79*/
      goto LABEL_10; /*0x4fbe79*/
  }
  else
  {
    v6 = (unsigned int *)(*(int (**)(IUnknown *, unsigned char *))(aP1->field_0 + 72))(aP1, v10); /*0x4fbe8a*/
    LOWORD(aP1a) = *v6 / 256; /*0x4fbe9d*/
    HIWORD(aP1a) = v6[1] / 256; /*0x4fbeb5*/
    v9 = aP1a; /*0x4fbebe*/
    if ( !LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (IUnknown *)&v9) ) /*0x4fbec8*/
      goto LABEL_10; /*0x4fbec8*/
    v7 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v9); /*0x4fbedb*/
    v4 = HouseClass::checkAutoProduction(v7); /*0x4fbee7*/
    if ( !v4 || *(IUnknown **)(this + 21468) != aP1 ) /*0x4fbef3*/
      goto LABEL_10; /*0x4fbef3*/
  }
  *(unsigned int *)(this + 21468) = 0; /*0x4fbef5*/
LABEL_10:
  if ( a3 /*0x4fbf28*/
    && (*(unsigned short *)(this + 21472) != *(unsigned short *)&MEMORY[0xA8D63C].__pad_14B0[1196]
     || *(unsigned short *)(this + 21474) != *(unsigned short *)&MEMORY[0xA8D63C].__pad_14B0[1198]) )
  {
    *((unsigned int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)(this + 21472)) + 17) = -1; /*0x4fbf35*/
    *(unsigned int *)(this + 21472) = *(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[1196]; /*0x4fbf41*/
  }
  return v4; /*0x4fbf43*/

}
}
// 0x4FC790
namespace gamemd {
int HouseClass::DestroyAllBuildings()
{

  int PriorityTarget; // eax
  int v2; // ebx
  int v3; // edi
  int v5; // esi
  int v6; // ecx
  int v8; // [esp+Ch] [ebp-4h] BYREF

  LOBYTE(PriorityTarget) = MEMORY[0xA8EC88]; /*0x4fc791*/
  v2 = 0; /*0x4fc799*/
  v3 = 0; /*0x4fc79b*/
  while ( v2 < MEMORY[0xA8EC88] ) /*0x4fc7a1*/
  {
    v5 = *((unsigned int *)MEMORY[0xA8EC7C] + v2); /*0x4fc7a9*/
    PriorityTarget = ObjectClass::GetPriorityTarget((unsigned int *)v5); /*0x4fc7ae*/
    if ( (void *)PriorityTarget != this /*0x4fc7cf*/
      || (PriorityTarget = (*(int (**)(int))(*(unsigned int *)v5 + 44))(v5), PriorityTarget != 6)
      || (LOBYTE(PriorityTarget) = *(unsigned char *)(v5 + 129), (unsigned char)PriorityTarget)
      || v5 == v3 )
    {
      ++v2; /*0x4fc810*/
    }
    else
    {
      v8 = *(unsigned int *)(v5 + 108); /*0x4fc7d4*/
      v6 = *(unsigned int *)(v5 + 632); /*0x4fc7d8*/
      if ( v6 ) /*0x4fc7e0*/
        TriggerClass::UnlinkTags(v6); /*0x4fc7e2*/
      LOBYTE(PriorityTarget) = (*(int (**)(int, int *, unsigned int, int, unsigned int, int, int, unsigned int))(*(unsigned int *)v5 + 364))( /*0x4fc806*/
                                 v5,
                                 &v8,
                                 0,
                                 MEMORY[0x8871E0]->?[5],
                                 0,
                                 1,
                                 1,
                                 0);
      v3 = v5; /*0x4fc80c*/
    }
  }
  return PriorityTarget; /*0x4fc81a*/

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
  int v6; // ecx
  int v8; // [esp+Ch] [ebp-4h] BYREF

  LOBYTE(PriorityTarget) = MEMORY[0xA8EC88]; /*0x4fc821*/
  v2 = 0; /*0x4fc829*/
  v3 = 0; /*0x4fc82b*/
  while ( v2 < MEMORY[0xA8EC88] ) /*0x4fc831*/
  {
    v5 = *((unsigned int *)MEMORY[0xA8EC7C] + v2); /*0x4fc83d*/
    PriorityTarget = ObjectClass::GetPriorityTarget((unsigned int *)v5); /*0x4fc842*/
    if ( (void *)PriorityTarget != this /*0x4fc877*/
      || (PriorityTarget = (*(int (**)(int))(*(unsigned int *)v5 + 44))(v5), PriorityTarget == 6)
      || (LOBYTE(PriorityTarget) = *(unsigned char *)(v5 + 129), (unsigned char)PriorityTarget)
      || (PriorityTarget = (*(int (**)(int))(*(unsigned int *)v5 + 132))(v5), *(unsigned char *)(PriorityTarget + 3278))
      || v5 == v3 )
    {
      ++v2; /*0x4fc8b8*/
    }
    else
    {
      v8 = *(unsigned int *)(v5 + 108); /*0x4fc87c*/
      v6 = *(unsigned int *)(v5 + 632); /*0x4fc880*/
      if ( v6 ) /*0x4fc888*/
        TriggerClass::UnlinkTags(v6); /*0x4fc88a*/
      LOBYTE(PriorityTarget) = (*(int (**)(int, int *, unsigned int, int, unsigned int, int, int, unsigned int))(*(unsigned int *)v5 + 364))( /*0x4fc8ae*/
                                 v5,
                                 &v8,
                                 0,
                                 MEMORY[0x8871E0]->?[5],
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
  int v6; // ecx
  int v8; // [esp+Ch] [ebp-4h] BYREF

  LOBYTE(PriorityTarget) = MEMORY[0xA8EC88]; /*0x4fc8d1*/
  v2 = 0; /*0x4fc8d9*/
  v3 = 0; /*0x4fc8db*/
  while ( v2 < MEMORY[0xA8EC88] ) /*0x4fc8e1*/
  {
    v5 = *((unsigned int *)MEMORY[0xA8EC7C] + v2); /*0x4fc8ed*/
    PriorityTarget = ObjectClass::GetPriorityTarget((unsigned int *)v5); /*0x4fc8f2*/
    if ( (void *)PriorityTarget != this /*0x4fc927*/
      || (PriorityTarget = (*(int (**)(int))(*(unsigned int *)v5 + 44))(v5), PriorityTarget == 6)
      || (LOBYTE(PriorityTarget) = *(unsigned char *)(v5 + 129), (unsigned char)PriorityTarget)
      || (PriorityTarget = (*(int (**)(int))(*(unsigned int *)v5 + 132))(v5), !*(unsigned char *)(PriorityTarget + 3278))
      || v5 == v3 )
    {
      ++v2; /*0x4fc968*/
    }
    else
    {
      v8 = *(unsigned int *)(v5 + 108); /*0x4fc92c*/
      v6 = *(unsigned int *)(v5 + 632); /*0x4fc930*/
      if ( v6 ) /*0x4fc938*/
        TriggerClass::UnlinkTags(v6); /*0x4fc93a*/
      LOBYTE(PriorityTarget) = (*(int (**)(int, int *, unsigned int, int, unsigned int, int, int, unsigned int))(*(unsigned int *)v5 + 364))( /*0x4fc95e*/
                                 v5,
                                 &v8,
                                 0,
                                 MEMORY[0x8871E0]->?[5],
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

  int relatedTagsCount; // ecx
  int v5; // edi
  int v6; // ebp
  HouseClass *v7; // edx
  IUnknown *v8; // ebx
  int v9; // eax
  int v10; // eax

  if ( aP1 ) /*0x50154a*/
  {
    if ( aP1 == (HouseClass *)this ) /*0x50154e*/
      return 0; /*0x50154e*/
    relatedTagsCount = aP1->relatedTagsCount; /*0x501550*/
    if ( relatedTagsCount == *((unsigned int *)this + 12) /*0x501573*/
      || relatedTagsCount != -1 && (*((unsigned int *)this + 5602) & (1 << relatedTagsCount)) != 0 )
    {
      return 0; /*0x501576*/
    }
  }
  if ( *(unsigned int *)(aP1->relatedTagsCapacity + 188) == HouseTypeClass::Find(&g_INI_Key_Easy.unknown30) /*0x501598*/
    && MEMORY[0xA8B238] )
  {
    return 0; /*0x50159b*/
  }
  if ( *(unsigned int *)&MEMORY[0xA8D63C].__pad_1140[48] ) /*0x5015a8*/
    return 1; /*0x5015ab*/
  if ( *((unsigned char *)this + 501) ) /*0x5015b1*/
    return 0; /*0x5015bc*/
  v5 = 0; /*0x5015c8*/
  v6 = 0; /*0x5015ca*/
  if ( (int)HouseClass_Count > 0 ) /*0x5015ce*/
  {
    v7 = HouseClass_Array; /*0x5015d0*/
    v8 = HouseClass_Count; /*0x5015d7*/
    do /*0x50162c*/
    {
      v9 = *(unsigned int *)v7->__pad_0; /*0x5015d9*/
      if ( !*(unsigned char *)(*(unsigned int *)v7->__pad_0 + 501) && !*(unsigned char *)(*(unsigned int *)(v9 + 52) + 422) ) /*0x5015e8*/
      {
        ++v5; /*0x5015f1*/
        if ( v9 ) /*0x5015f4*/
        {
          if ( v9 == this /*0x501625*/
            || (v10 = *(unsigned int *)(v9 + 48), v10 == *((unsigned int *)this + 12))
            || v10 != -1 && ((1 << v10) & *((unsigned int *)this + 5602)) != 0 )
          {
            ++v6; /*0x501627*/
          }
        }
      }
      v7 = (HouseClass *)((char *)v7 + 4); /*0x501628*/
      v8 = (IUnknown *)((char *)v8 - 1); /*0x50162b*/
    }
    while ( v8 ); /*0x50162c*/
  }
  return v5 != v6 + 1; /*0x501575*/

}
}
// 0x501640
namespace gamemd {
int HouseClass::CanDetect()
{

  unsigned char *v0; // eax
  char v1; // bl
  int v2; // ecx
  int i; // ebp
  unsigned char *v4; // esi
  int j; // edi
  char v6; // cl

  LOBYTE(v0) = (unsigned char)MEMORY[0x8871E0]; /*0x501640*/
  v1 = *((unsigned char *)MEMORY[0x8871E0] + 5301); /*0x50164d*/
  if ( MEMORY[0xA8B23C] /*0x501662*/
    && (LOBYTE(v0) = (*(int (**)(int))(*(unsigned int *)MEMORY[0xA8B23C] + 4))(MEMORY[0xA8B23C]), (unsigned char)v0)
    || v1 )
  {
    LOBYTE(v0) = (unsigned char)MEMORY[0xA8B230]; /*0x501668*/
    if ( !*((unsigned char *)MEMORY[0xA8B230] + 4576) ) /*0x50166d*/
    {
      v2 = HouseClass_Count; /*0x50167b*/
      for ( i = 0; i < v2; ++i ) /*0x501685*/
      {
        v4 = (unsigned char *)*((unsigned int *)HouseClass_Array + i); /*0x501695*/
        if ( v4 ) /*0x50169a*/
        {
          LOBYTE(v0) = v4[501]; /*0x5016a0*/
          if ( !(unsigned char)v0 ) /*0x5016a8*/
          {
            LOBYTE(v0) = v4[492]; /*0x5016b5*/
            if ( !MEMORY[0xA8B238] ) /*0x5016bb*/
              LOBYTE(v0) = (unsigned char)v0 || v4[493]; /*0x5016cf*/
            if ( !(unsigned char)v0 ) /*0x5016d3*/
            {
              v4[586] = 1; /*0x5016d5*/
              v2 = HouseClass_Count; /*0x5016db*/
              for ( j = 0; j < HouseClass_Count; ++j ) /*0x5016e5*/
              {
                v0 = (unsigned char *)*((unsigned int *)HouseClass_Array + j); /*0x5016ec*/
                if ( v0 && !v0[501] ) /*0x5016f3*/
                {
                  v6 = v0[492]; /*0x501705*/
                  if ( !MEMORY[0xA8B238] ) /*0x50170b*/
                    v6 = v6 || v0[493]; /*0x50171f*/
                  if ( v6 ) /*0x501728*/
                    LOBYTE(v0) = HouseClass::SetAlliance((int)v4, (int)v0, 0); /*0x50172a*/
                  else
                    LOBYTE(v0) = HouseClass::HandleAlliance((int)v4, (int)v0, 0); /*0x501731*/
                }
                v2 = HouseClass_Count; /*0x501736*/
              }
            }
          }
        }
      }
    }
  }
  return (char)v0; /*0x50174c*/

}
}
// 0x503040
namespace gamemd {
AbstractClass * * HouseClass::SaveLoad_Prefix(int a1, LPSTREAM pStm)
{

  int v2; // esi
  int i; // edi
  int j; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  LPSTREAM v9; // edi
  HRESULT result; // eax
  int *v11; // ebp
  int v12; // ebx
  int *v13; // ebp
  int v14; // ebx
  int v15; // ecx
  bool v16; // zf
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // edx
  int v22; // eax
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // eax
  int v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // eax
  int v33; // edx
  int k; // ebp
  int v35; // edx
  int v36; // edx
  int v37; // ecx
  int v38; // eax
  int v39; // eax
  int v40; // edx
  int v41; // eax
  int m; // ebp
  int v43; // eax
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  int v47; // eax
  int v48; // edx
  int v49; // eax
  int v50; // eax
  int v51; // ecx
  int v52; // eax
  int v53; // eax
  int v54; // edx
  int v55; // eax
  int v56; // eax
  int v57; // ecx
  int v58; // eax
  int v59; // eax
  int v60; // edx
  int v61; // eax
  int v62; // eax
  int v63; // ecx
  int v64; // eax
  int v65; // eax
  int v66; // edx
  int v67; // eax
  int v68; // eax
  int v69; // ecx
  int v70; // eax
  int v71; // eax
  int v72; // edx
  int v73; // eax
  int v74; // eax
  int v75; // ecx
  int v76; // eax
  int v77; // eax
  int v78; // edx
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
  int v99; // ecx
  int v100; // eax
  int v101; // eax
  int v102; // edx
  int v103; // eax
  int v104; // eax
  int v105; // ecx
  int v106; // eax
  int v107; // eax
  int v108; // edx
  int v109; // eax
  unsigned short *v110; // ebp
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

  v2 = a1;
  (*(void (**)(int))(*(unsigned int *)(a1 + 80) + 12))(a1 + 80);
  (*(void (**)(int))(*(unsigned int *)(v2 + 104) + 12))(v2 + 104);
  (*(void (**)(int))(*(unsigned int *)(v2 + 128) + 12))(v2 + 128);
  (*(void (**)(int))(*(unsigned int *)(v2 + 152) + 12))(v2 + 152);
  (*(void (**)(int))(*(unsigned int *)(v2 + 176) + 12))(v2 + 176);
  (*(void (**)(int))(*(unsigned int *)(v2 + 200) + 12))(v2 + 200);
  (*(void (**)(int))(*(unsigned int *)(v2 + 224) + 12))(v2 + 224);
  (*(void (**)(int))(*(unsigned int *)(v2 + 248) + 12))(v2 + 248);
  (*(void (**)(int))(*(unsigned int *)(v2 + 272) + 12))(v2 + 272);
  (*(void (**)(int))(*(unsigned int *)(v2 + 296) + 12))(v2 + 296);
  (*(void (**)(int))(*(unsigned int *)(v2 + 320) + 12))(v2 + 320);
  for ( i = *(unsigned int *)(v2 + 380) - 1; i >= 0; --i )
    __3_YAXPAX_Z(*(void **)(*(unsigned int *)(v2 + 368) + 4 * i));
  (*(void (**)(int))(*(unsigned int *)(v2 + 364) + 12))(v2 + 364);
  for ( j = 0; j < *(unsigned int *)(v2 + 90228); *(unsigned int *)(*(unsigned int *)(v2 + 90216) + 4 * j - 4) = 0 )
  {
    v131 = *(unsigned int *)(*(unsigned int *)(v2 + 90216) + 4 * j);
    if ( (*(int (**)(int))(*(unsigned int *)v131 + 8))(v131) )
    {
      do
        v132 = *(unsigned int *)(*(unsigned int *)(v2 + 90216) + 4 * j);
      while ( (*(int (**)(int))(*(unsigned int *)v132 + 8))(v132) );
    }
    ++j;
  }
  (*(void (**)(int))(*(unsigned int *)(v2 + 90212) + 12))(v2 + 90212);
  while ( *(unsigned int *)(v2 + 612) )
  {
    v5 = **(unsigned int **)(v2 + 600);
    if ( v5 )
      (*(void (**)(int, int))(*(unsigned int *)v5 + 32))(v5, 1);
    v6 = *(unsigned int *)(v2 + 612);
    if ( v6 > 0 )
    {
      v7 = v6 - 1;
      v8 = 0;
      for ( *(unsigned int *)(v2 + 612) = v7;
            v8 < *(unsigned int *)(v2 + 612);
            *(unsigned int *)(*(unsigned int *)(v2 + 600) + 4 * v8 - 4) = *(unsigned int *)(*(unsigned int *)(v2 + 600) + 4 * v8) )
      {
        ++v8;
      }
    }
  }
  v9 = pStm;
  result = AbstractClass::SaveLoad_Prefix_0((unsigned int *)v2, (int)pStm);
  if ( result >= 0 )
  {
    if ( v2 )
      HouseClass::Constructor(v2, (int)&a1);
    (**(void (***)(int, LPSTREAM))(v2 + 22272))(v2 + 22272, v9);
    CounterClass::Load((unsigned int *)(v2 + 21760), (int)v9);
    CounterClass::Load((unsigned int *)(v2 + 21780), (int)v9);
    CounterClass::Load((unsigned int *)(v2 + 21800), (int)v9);
    CounterClass::Load((unsigned int *)(v2 + 21820), (int)v9);
    CounterClass::Load((unsigned int *)(v2 + 21840), (int)v9);
    CounterClass::Load((unsigned int *)(v2 + 21860), (int)v9);
    CounterClass::Load((unsigned int *)(v2 + 21880), (int)v9);
    CounterClass::Load((unsigned int *)(v2 + 21900), (int)v9);
    CounterClass::Load((unsigned int *)(v2 + 21920), (int)v9);
    CounterClass::Load((unsigned int *)(v2 + 21940), (int)v9);
    CounterClass::Load((unsigned int *)(v2 + 21960), (int)v9);
    CounterClass::Load((unsigned int *)(v2 + 21980), (int)v9);
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v2 + 52));
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v2 + 21424));
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v2 + 21428));
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v2 + 21420));
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v2 + 21432));
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v2 + 21436));
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v2 + 21440));
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v2 + 21444));
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v2 + 21448));
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v2 + 21452));
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v2 + 21728));
    v11 = (int *)(v2 + 528);
    v12 = 12;
    do
    {
      ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v11++);
      --v12;
    }
    while ( v12 );
    v13 = (int *)(v2 + 22128);
    v14 = 3;
    do
    {
      HouseClass::RegisterForSwizzleTracking(v13);
      v13 += 11;
      --v14;
    }
    while ( v14 );
    v15 = *(unsigned int *)v9->__pad_0;
    v133 = 0;
    result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v15 + 12))(v9, &v133, 4, 0);
    if ( result >= 0 )
    {
      v16 = v133-- == 0;
      if ( v16 )
      {
LABEL_31:
        v22 = *(unsigned int *)v9->__pad_0;
        v133 = 0;
        result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v22 + 12))(v9, &v133, 4, 0);
        if ( result >= 0 )
        {
          v16 = v133-- == 0;
          if ( v16 )
          {
LABEL_41:
            v28 = *(unsigned int *)v9->__pad_0;
            v133 = 0;
            result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v28 + 12))(v9, &v133, 4, 0);
            if ( result >= 0 )
            {
              v16 = v133-- == 0;
              if ( v16 )
              {
LABEL_51:
                for ( k = 0; k < *(unsigned int *)(v2 + 22036); ++k )
                  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(*(unsigned int *)(v2 + 22024) + 8 * k));
                v35 = *(unsigned int *)v9->__pad_0;
                v133 = 0;
                result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v35 + 12))(v9, &v133, 4, 0);
                if ( result >= 0 )
                {
                  v16 = v133-- == 0;
                  if ( v16 )
                  {
LABEL_63:
                    v41 = *(unsigned int *)(v2 + 22060);
                    for ( m = 0; m < v41; ++m )
                    {
                      ObjectPtr::RegisterForTracking(
                        (int)&MEMORY[0xB0C110],
                        (int *)(*(unsigned int *)(v2 + 22048) + 8 * v41 - 8));
                      v41 = *(unsigned int *)(v2 + 22060);
                    }
                    v43 = *(unsigned int *)v9->__pad_0;
                    v133 = 0;
                    result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v43 + 12))(v9, &v133, 4, 0);
                    if ( result >= 0 )
                    {
                      v16 = v133-- == 0;
                      if ( v16 )
                      {
LABEL_75:
                        v49 = *(unsigned int *)v9->__pad_0;
                        v133 = 0;
                        result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v49 + 12))(v9, &v133, 4, 0);
                        if ( result >= 0 )
                        {
                          v16 = v133-- == 0;
                          if ( v16 )
                          {
LABEL_85:
                            v55 = *(unsigned int *)v9->__pad_0;
                            v133 = 0;
                            result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v55 + 12))(v9, &v133, 4, 0);
                            if ( result >= 0 )
                            {
                              v16 = v133-- == 0;
                              if ( v16 )
                              {
LABEL_95:
                                v61 = *(unsigned int *)v9->__pad_0;
                                v133 = 0;
                                result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v61 + 12))(
                                           v9,
                                           &v133,
                                           4,
                                           0);
                                if ( result >= 0 )
                                {
                                  v16 = v133-- == 0;
                                  if ( v16 )
                                  {
LABEL_105:
                                    v67 = *(unsigned int *)v9->__pad_0;
                                    v133 = 0;
                                    result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v67 + 12))(
                                               v9,
                                               &v133,
                                               4,
                                               0);
                                    if ( result >= 0 )
                                    {
                                      v16 = v133-- == 0;
                                      if ( v16 )
                                      {
LABEL_115:
                                        v73 = *(unsigned int *)v9->__pad_0;
                                        v133 = 0;
                                        result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v73 + 12))(
                                                   v9,
                                                   &v133,
                                                   4,
                                                   0);
                                        if ( result >= 0 )
                                        {
                                          v16 = v133-- == 0;
                                          if ( v16 )
                                          {
LABEL_125:
                                            v79 = *(unsigned int *)v9->__pad_0;
                                            v133 = 0;
                                            result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v79 + 12))(
                                                       v9,
                                                       &v133,
                                                       4,
                                                       0);
                                            if ( result >= 0 )
                                            {
                                              v16 = v133-- == 0;
                                              if ( v16 )
                                              {
LABEL_135:
                                                v85 = *(unsigned int *)v9->__pad_0;
                                                v133 = 0;
                                                result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v85 + 12))(
                                                           v9,
                                                           &v133,
                                                           4,
                                                           0);
                                                if ( result >= 0 )
                                                {
                                                  v16 = v133-- == 0;
                                                  if ( v16 )
                                                  {
LABEL_145:
                                                    v91 = *(unsigned int *)v9->__pad_0;
                                                    v133 = 0;
                                                    result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v91 + 12))(
                                                               v9,
                                                               &v133,
                                                               4,
                                                               0);
                                                    if ( result >= 0 )
                                                    {
                                                      v16 = v133-- == 0;
                                                      if ( v16 )
                                                      {
LABEL_155:
                                                        v97 = *(unsigned int *)v9->__pad_0;
                                                        v133 = 0;
                                                        result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v97 + 12))(
                                                                   v9,
                                                                   &v133,
                                                                   4,
                                                                   0);
                                                        if ( result >= 0 )
                                                        {
                                                          v16 = v133-- == 0;
                                                          if ( v16 )
                                                          {
LABEL_165:
                                                            v103 = *(unsigned int *)v9->__pad_0;
                                                            v133 = 0;
                                                            result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v103 + 12))(
                                                                       v9,
                                                                       &v133,
                                                                       4,
                                                                       0);
                                                            if ( result >= 0 )
                                                            {
                                                              v16 = v133-- == 0;
                                                              if ( v16 )
                                                              {
LABEL_175:
                                                                v109 = *(unsigned int *)v9->__pad_0;
                                                                v133 = 0;
                                                                result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v109 + 12))(
                                                                           v9,
                                                                           &v133,
                                                                           4,
                                                                           0);
                                                                if ( result >= 0 )
                                                                {
                                                                  v16 = v133-- == 0;
                                                                  if ( v16 )
                                                                  {
LABEL_187:
                                                                    for ( n = 0; n < *(unsigned int *)(v2 + 612); ++n )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&MEMORY[0xB0C110],
                                                                        (int *)(*(unsigned int *)(v2 + 600) + 4 * n));
                                                                    for ( ii = 0; ii < *(unsigned int *)(v2 + 72); ++ii )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&MEMORY[0xB0C110],
                                                                        (int *)(*(unsigned int *)(v2 + 60) + 4 * ii));
                                                                    for ( jj = 0; jj < *(unsigned int *)(v2 + 96); ++jj )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&MEMORY[0xB0C110],
                                                                        (int *)(*(unsigned int *)(v2 + 84) + 4 * jj));
                                                                    for ( kk = 0; kk < *(unsigned int *)(v2 + 120); ++kk )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&MEMORY[0xB0C110],
                                                                        (int *)(*(unsigned int *)(v2 + 108) + 4 * kk));
                                                                    for ( mm = 0; mm < *(unsigned int *)(v2 + 144); ++mm )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&MEMORY[0xB0C110],
                                                                        (int *)(*(unsigned int *)(v2 + 132) + 4 * mm));
                                                                    for ( nn = 0; nn < *(unsigned int *)(v2 + 168); ++nn )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&MEMORY[0xB0C110],
                                                                        (int *)(*(unsigned int *)(v2 + 156) + 4 * nn));
                                                                    for ( i1 = 0; i1 < *(unsigned int *)(v2 + 192); ++i1 )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&MEMORY[0xB0C110],
                                                                        (int *)(*(unsigned int *)(v2 + 180) + 4 * i1));
                                                                    for ( i2 = 0; i2 < *(unsigned int *)(v2 + 216); ++i2 )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&MEMORY[0xB0C110],
                                                                        (int *)(*(unsigned int *)(v2 + 204) + 4 * i2));
                                                                    for ( i3 = 0; i3 < *(unsigned int *)(v2 + 240); ++i3 )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&MEMORY[0xB0C110],
                                                                        (int *)(*(unsigned int *)(v2 + 228) + 4 * i3));
                                                                    for ( i4 = 0; i4 < *(unsigned int *)(v2 + 264); ++i4 )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&MEMORY[0xB0C110],
                                                                        (int *)(*(unsigned int *)(v2 + 252) + 4 * i4));
                                                                    for ( i5 = 0; i5 < *(unsigned int *)(v2 + 288); ++i5 )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&MEMORY[0xB0C110],
                                                                        (int *)(*(unsigned int *)(v2 + 276) + 4 * i5));
                                                                    for ( i6 = 0; i6 < *(unsigned int *)(v2 + 312); ++i6 )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&MEMORY[0xB0C110],
                                                                        (int *)(*(unsigned int *)(v2 + 300) + 4 * i6));
                                                                    for ( i7 = 0; i7 < *(unsigned int *)(v2 + 336); ++i7 )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&MEMORY[0xB0C110],
                                                                        (int *)(*(unsigned int *)(v2 + 324) + 4 * i7));
                                                                    for ( i8 = 0; i8 < *(unsigned int *)(v2 + 380); ++i8 )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&MEMORY[0xB0C110],
                                                                        *(int **)(*(unsigned int *)(v2 + 368) + 4 * i8));
                                                                    v130 = *(unsigned int *)v9->__pad_0;
                                                                    v136 = 0;
                                                                    result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v130 + 12))(
                                                                               v9,
                                                                               &v136,
                                                                               4,
                                                                               0);
                                                                    if ( result >= 0 )
                                                                    {
                                                                      if ( v136 )
                                                                        return OleLoadFromStream(
                                                                                 v9,
                                                                                 &iidInterface,
                                                                                 (LPVOID *)(v2 + 22496));
                                                                    }
                                                                  }
                                                                  else
                                                                  {
                                                                    while ( 1 )
                                                                    {
                                                                      v110 = __2_YAPAXI_Z(8u);
                                                                      v111 = *(unsigned int *)v9->__pad_0;
                                                                      v134 = 0;
                                                                      result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v111 + 12))(
                                                                                 v9,
                                                                                 &v134,
                                                                                 4,
                                                                                 0);
                                                                      if ( result < 0 )
                                                                        break;
                                                                      result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)v9->__pad_0 + 12))(
                                                                                 v9,
                                                                                 &a1,
                                                                                 2,
                                                                                 0);
                                                                      if ( result < 0 )
                                                                        break;
                                                                      result = (*(int (**)(LPSTREAM, LPSTREAM *, int, unsigned int))(*(unsigned int *)v9->__pad_0 + 12))(
                                                                                 v9,
                                                                                 &pStm,
                                                                                 2,
                                                                                 0);
                                                                      if ( result < 0 )
                                                                        break;
                                                                      *(unsigned int *)v110 = v134;
                                                                      v110[2] = a1;
                                                                      v110[3] = (unsigned short)pStm;
                                                                      v112 = *(unsigned int *)(v2 + 372);
                                                                      if ( *(unsigned int *)(v2 + 380) < v112
                                                                        || (*(unsigned char *)(v2 + 377) || !v112)
                                                                        && (v113 = *(unsigned int *)(v2 + 384), v113 > 0)
                                                                        && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)(v2 + 364) + 8))(
                                                                             v2 + 364,
                                                                             v113 + v112,
                                                                             0) )
                                                                      {
                                                                        v114 = *(unsigned int *)(v2 + 380);
                                                                        v115 = *(unsigned int *)(v2 + 368);
                                                                        *(unsigned int *)(v2 + 380) = v114 + 1;
                                                                        *(unsigned int *)(v115 + 4 * v114) = v110;
                                                                      }
                                                                      v16 = v133-- == 0;
                                                                      if ( v16 )
                                                                        goto LABEL_187;
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                              else
                                                              {
                                                                while ( 1 )
                                                                {
                                                                  v104 = *(unsigned int *)v9->__pad_0;
                                                                  a1 = 0;
                                                                  result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v104 + 12))(
                                                                             v9,
                                                                             &a1,
                                                                             4,
                                                                             0);
                                                                  if ( result < 0 )
                                                                    break;
                                                                  v105 = *(unsigned int *)(v2 + 328);
                                                                  if ( *(unsigned int *)(v2 + 336) < v105
                                                                    || (*(unsigned char *)(v2 + 333) || !v105)
                                                                    && (v106 = *(unsigned int *)(v2 + 340), v106 > 0)
                                                                    && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)(v2 + 320) + 8))(
                                                                         v2 + 320,
                                                                         v106 + v105,
                                                                         0) )
                                                                  {
                                                                    v107 = *(unsigned int *)(v2 + 336);
                                                                    v108 = *(unsigned int *)(v2 + 324);
                                                                    *(unsigned int *)(v2 + 336) = v107 + 1;
                                                                    *(unsigned int *)(v108 + 4 * v107) = a1;
                                                                  }
                                                                  v16 = v133-- == 0;
                                                                  if ( v16 )
                                                                    goto LABEL_175;
                                                                }
                                                              }
                                                            }
                                                          }
                                                          else
                                                          {
                                                            while ( 1 )
                                                            {
                                                              v98 = *(unsigned int *)v9->__pad_0;
                                                              a1 = 0;
                                                              result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v98 + 12))(
                                                                         v9,
                                                                         &a1,
                                                                         4,
                                                                         0);
                                                              if ( result < 0 )
                                                                break;
                                                              v99 = *(unsigned int *)(v2 + 304);
                                                              if ( *(unsigned int *)(v2 + 312) < v99
                                                                || (*(unsigned char *)(v2 + 309) || !v99)
                                                                && (v100 = *(unsigned int *)(v2 + 316), v100 > 0)
                                                                && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)(v2 + 296) + 8))(
                                                                     v2 + 296,
                                                                     v100 + v99,
                                                                     0) )
                                                              {
                                                                v101 = *(unsigned int *)(v2 + 312);
                                                                v102 = *(unsigned int *)(v2 + 300);
                                                                *(unsigned int *)(v2 + 312) = v101 + 1;
                                                                *(unsigned int *)(v102 + 4 * v101) = a1;
                                                              }
                                                              v16 = v133-- == 0;
                                                              if ( v16 )
                                                                goto LABEL_165;
                                                            }
                                                          }
                                                        }
                                                      }
                                                      else
                                                      {
                                                        while ( 1 )
                                                        {
                                                          v92 = *(unsigned int *)v9->__pad_0;
                                                          a1 = 0;
                                                          result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v92 + 12))(
                                                                     v9,
                                                                     &a1,
                                                                     4,
                                                                     0);
                                                          if ( result < 0 )
                                                            break;
                                                          v93 = *(unsigned int *)(v2 + 280);
                                                          if ( *(unsigned int *)(v2 + 288) < v93
                                                            || (*(unsigned char *)(v2 + 285) || !v93)
                                                            && (v94 = *(unsigned int *)(v2 + 292), v94 > 0)
                                                            && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)(v2 + 272) + 8))(
                                                                 v2 + 272,
                                                                 v94 + v93,
                                                                 0) )
                                                          {
                                                            v95 = *(unsigned int *)(v2 + 288);
                                                            v96 = *(unsigned int *)(v2 + 276);
                                                            *(unsigned int *)(v2 + 288) = v95 + 1;
                                                            *(unsigned int *)(v96 + 4 * v95) = a1;
                                                          }
                                                          v16 = v133-- == 0;
                                                          if ( v16 )
                                                            goto LABEL_155;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  else
                                                  {
                                                    while ( 1 )
                                                    {
                                                      v86 = *(unsigned int *)v9->__pad_0;
                                                      a1 = 0;
                                                      result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v86 + 12))(
                                                                 v9,
                                                                 &a1,
                                                                 4,
                                                                 0);
                                                      if ( result < 0 )
                                                        break;
                                                      v87 = *(unsigned int *)(v2 + 256);
                                                      if ( *(unsigned int *)(v2 + 264) < v87
                                                        || (*(unsigned char *)(v2 + 261) || !v87)
                                                        && (v88 = *(unsigned int *)(v2 + 268), v88 > 0)
                                                        && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)(v2 + 248) + 8))(
                                                             v2 + 248,
                                                             v88 + v87,
                                                             0) )
                                                      {
                                                        v89 = *(unsigned int *)(v2 + 264);
                                                        v90 = *(unsigned int *)(v2 + 252);
                                                        *(unsigned int *)(v2 + 264) = v89 + 1;
                                                        *(unsigned int *)(v90 + 4 * v89) = a1;
                                                      }
                                                      v16 = v133-- == 0;
                                                      if ( v16 )
                                                        goto LABEL_145;
                                                    }
                                                  }
                                                }
                                              }
                                              else
                                              {
                                                while ( 1 )
                                                {
                                                  v80 = *(unsigned int *)v9->__pad_0;
                                                  a1 = 0;
                                                  result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v80 + 12))(
                                                             v9,
                                                             &a1,
                                                             4,
                                                             0);
                                                  if ( result < 0 )
                                                    break;
                                                  v81 = *(unsigned int *)(v2 + 232);
                                                  if ( *(unsigned int *)(v2 + 240) < v81
                                                    || (*(unsigned char *)(v2 + 237) || !v81)
                                                    && (v82 = *(unsigned int *)(v2 + 244), v82 > 0)
                                                    && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)(v2 + 224) + 8))(
                                                         v2 + 224,
                                                         v82 + v81,
                                                         0) )
                                                  {
                                                    v83 = *(unsigned int *)(v2 + 240);
                                                    v84 = *(unsigned int *)(v2 + 228);
                                                    *(unsigned int *)(v2 + 240) = v83 + 1;
                                                    *(unsigned int *)(v84 + 4 * v83) = a1;
                                                  }
                                                  v16 = v133-- == 0;
                                                  if ( v16 )
                                                    goto LABEL_135;
                                                }
                                              }
                                            }
                                          }
                                          else
                                          {
                                            while ( 1 )
                                            {
                                              v74 = *(unsigned int *)v9->__pad_0;
                                              a1 = 0;
                                              result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v74 + 12))(
                                                         v9,
                                                         &a1,
                                                         4,
                                                         0);
                                              if ( result < 0 )
                                                break;
                                              v75 = *(unsigned int *)(v2 + 208);
                                              if ( *(unsigned int *)(v2 + 216) < v75
                                                || (*(unsigned char *)(v2 + 213) || !v75)
                                                && (v76 = *(unsigned int *)(v2 + 220), v76 > 0)
                                                && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)(v2 + 200) + 8))(
                                                     v2 + 200,
                                                     v76 + v75,
                                                     0) )
                                              {
                                                v77 = *(unsigned int *)(v2 + 216);
                                                v78 = *(unsigned int *)(v2 + 204);
                                                *(unsigned int *)(v2 + 216) = v77 + 1;
                                                *(unsigned int *)(v78 + 4 * v77) = a1;
                                              }
                                              v16 = v133-- == 0;
                                              if ( v16 )
                                                goto LABEL_125;
                                            }
                                          }
                                        }
                                      }
                                      else
                                      {
                                        while ( 1 )
                                        {
                                          v68 = *(unsigned int *)v9->__pad_0;
                                          a1 = 0;
                                          result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v68 + 12))(
                                                     v9,
                                                     &a1,
                                                     4,
                                                     0);
                                          if ( result < 0 )
                                            break;
                                          v69 = *(unsigned int *)(v2 + 184);
                                          if ( *(unsigned int *)(v2 + 192) < v69
                                            || (*(unsigned char *)(v2 + 189) || !v69)
                                            && (v70 = *(unsigned int *)(v2 + 196), v70 > 0)
                                            && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)(v2 + 176) + 8))(
                                                 v2 + 176,
                                                 v70 + v69,
                                                 0) )
                                          {
                                            v71 = *(unsigned int *)(v2 + 192);
                                            v72 = *(unsigned int *)(v2 + 180);
                                            *(unsigned int *)(v2 + 192) = v71 + 1;
                                            *(unsigned int *)(v72 + 4 * v71) = a1;
                                          }
                                          v16 = v133-- == 0;
                                          if ( v16 )
                                            goto LABEL_115;
                                        }
                                      }
                                    }
                                  }
                                  else
                                  {
                                    while ( 1 )
                                    {
                                      v62 = *(unsigned int *)v9->__pad_0;
                                      a1 = 0;
                                      result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v62 + 12))(
                                                 v9,
                                                 &a1,
                                                 4,
                                                 0);
                                      if ( result < 0 )
                                        break;
                                      v63 = *(unsigned int *)(v2 + 160);
                                      if ( *(unsigned int *)(v2 + 168) < v63
                                        || (*(unsigned char *)(v2 + 165) || !v63)
                                        && (v64 = *(unsigned int *)(v2 + 172), v64 > 0)
                                        && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)(v2 + 152)
                                                                                               + 8))(
                                             v2 + 152,
                                             v64 + v63,
                                             0) )
                                      {
                                        v65 = *(unsigned int *)(v2 + 168);
                                        v66 = *(unsigned int *)(v2 + 156);
                                        *(unsigned int *)(v2 + 168) = v65 + 1;
                                        *(unsigned int *)(v66 + 4 * v65) = a1;
                                      }
                                      v16 = v133-- == 0;
                                      if ( v16 )
                                        goto LABEL_105;
                                    }
                                  }
                                }
                              }
                              else
                              {
                                while ( 1 )
                                {
                                  v56 = *(unsigned int *)v9->__pad_0;
                                  a1 = 0;
                                  result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v56 + 12))(
                                             v9,
                                             &a1,
                                             4,
                                             0);
                                  if ( result < 0 )
                                    break;
                                  v57 = *(unsigned int *)(v2 + 136);
                                  if ( *(unsigned int *)(v2 + 144) < v57
                                    || (*(unsigned char *)(v2 + 141) || !v57)
                                    && (v58 = *(unsigned int *)(v2 + 148), v58 > 0)
                                    && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)(v2 + 128) + 8))(
                                         v2 + 128,
                                         v58 + v57,
                                         0) )
                                  {
                                    v59 = *(unsigned int *)(v2 + 144);
                                    v60 = *(unsigned int *)(v2 + 132);
                                    *(unsigned int *)(v2 + 144) = v59 + 1;
                                    *(unsigned int *)(v60 + 4 * v59) = a1;
                                  }
                                  v16 = v133-- == 0;
                                  if ( v16 )
                                    goto LABEL_95;
                                }
                              }
                            }
                          }
                          else
                          {
                            while ( 1 )
                            {
                              v50 = *(unsigned int *)v9->__pad_0;
                              a1 = 0;
                              result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v50 + 12))(v9, &a1, 4, 0);
                              if ( result < 0 )
                                break;
                              v51 = *(unsigned int *)(v2 + 112);
                              if ( *(unsigned int *)(v2 + 120) < v51
                                || (*(unsigned char *)(v2 + 117) || !v51)
                                && (v52 = *(unsigned int *)(v2 + 124), v52 > 0)
                                && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)(v2 + 104) + 8))(
                                     v2 + 104,
                                     v52 + v51,
                                     0) )
                              {
                                v53 = *(unsigned int *)(v2 + 120);
                                v54 = *(unsigned int *)(v2 + 108);
                                *(unsigned int *)(v2 + 120) = v53 + 1;
                                *(unsigned int *)(v54 + 4 * v53) = a1;
                              }
                              v16 = v133-- == 0;
                              if ( v16 )
                                goto LABEL_85;
                            }
                          }
                        }
                      }
                      else
                      {
                        while ( 1 )
                        {
                          v44 = *(unsigned int *)v9->__pad_0;
                          a1 = 0;
                          result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v44 + 12))(v9, &a1, 4, 0);
                          if ( result < 0 )
                            break;
                          v45 = *(unsigned int *)(v2 + 88);
                          if ( *(unsigned int *)(v2 + 96) < v45
                            || (*(unsigned char *)(v2 + 93) || !v45)
                            && (v46 = *(unsigned int *)(v2 + 100), v46 > 0)
                            && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)(v2 + 80) + 8))(
                                 v2 + 80,
                                 v46 + v45,
                                 0) )
                          {
                            v47 = *(unsigned int *)(v2 + 96);
                            v48 = *(unsigned int *)(v2 + 84);
                            *(unsigned int *)(v2 + 96) = v47 + 1;
                            *(unsigned int *)(v48 + 4 * v47) = a1;
                          }
                          v16 = v133-- == 0;
                          if ( v16 )
                            goto LABEL_75;
                        }
                      }
                    }
                  }
                  else
                  {
                    while ( 1 )
                    {
                      v36 = *(unsigned int *)v9->__pad_0;
                      v134 = 0;
                      LOBYTE(v135) = 0;
                      result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v36 + 12))(v9, &v134, 8, 0);
                      if ( result < 0 )
                        break;
                      v37 = *(unsigned int *)(v2 + 22052);
                      if ( *(unsigned int *)(v2 + 22060) < v37
                        || (*(unsigned char *)(v2 + 22057) || !v37)
                        && (v38 = *(unsigned int *)(v2 + 22064), v38 > 0)
                        && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)(v2 + 22044) + 8))(
                             v2 + 22044,
                             v37 + v38,
                             0) )
                      {
                        v39 = *(unsigned int *)(v2 + 22060);
                        v40 = *(unsigned int *)(v2 + 22048);
                        *(unsigned int *)(v2 + 22060) = v39 + 1;
                        *(unsigned int *)(v40 + 8 * v39) = v134;
                        *(unsigned int *)(v40 + 8 * v39 + 4) = v135;
                      }
                      v16 = v133-- == 0;
                      if ( v16 )
                        goto LABEL_63;
                    }
                  }
                }
              }
              else
              {
                while ( 1 )
                {
                  v29 = *(unsigned int *)v9->__pad_0;
                  v134 = 0;
                  v135 = 0;
                  result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v29 + 12))(v9, &v134, 8, 0);
                  if ( result < 0 )
                    break;
                  v30 = *(unsigned int *)(v2 + 22028);
                  if ( *(unsigned int *)(v2 + 22036) < v30
                    || (*(unsigned char *)(v2 + 22033) || !v30)
                    && (v31 = *(unsigned int *)(v2 + 22040), v31 > 0)
                    && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)(v2 + 22020) + 8))(
                         v2 + 22020,
                         v30 + v31,
                         0) )
                  {
                    v32 = *(unsigned int *)(v2 + 22036);
                    v33 = *(unsigned int *)(v2 + 22024);
                    *(unsigned int *)(v2 + 22036) = v32 + 1;
                    *(unsigned int *)(v33 + 8 * v32) = v134;
                    *(unsigned int *)(v33 + 8 * v32 + 4) = v135;
                  }
                  v16 = v133-- == 0;
                  if ( v16 )
                    goto LABEL_51;
                }
              }
            }
          }
          else
          {
            while ( 1 )
            {
              v23 = *(unsigned int *)v9->__pad_0;
              a1 = 0;
              result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v23 + 12))(v9, &a1, 4, 0);
              if ( result < 0 )
                break;
              v24 = *(unsigned int *)(v2 + 64);
              if ( *(unsigned int *)(v2 + 72) < v24
                || (*(unsigned char *)(v2 + 69) || !v24)
                && (v25 = *(unsigned int *)(v2 + 76), v25 > 0)
                && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)(v2 + 56) + 8))(
                     v2 + 56,
                     v24 + v25,
                     0) )
              {
                v26 = *(unsigned int *)(v2 + 72);
                v27 = *(unsigned int *)(v2 + 60);
                *(unsigned int *)(v2 + 72) = v26 + 1;
                *(unsigned int *)(v27 + 4 * v26) = a1;
              }
              v16 = v133-- == 0;
              if ( v16 )
                goto LABEL_41;
            }
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v17 = *(unsigned int *)v9->__pad_0;
          a1 = 0;
          result = (*(int (**)(LPSTREAM, int *, int, unsigned int))(v17 + 12))(v9, &a1, 4, 0);
          if ( result < 0 )
            break;
          v18 = *(unsigned int *)(v2 + 604);
          if ( *(unsigned int *)(v2 + 612) < v18
            || (*(unsigned char *)(v2 + 609) || !v18)
            && (v19 = *(unsigned int *)(v2 + 616), v19 > 0)
            && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)(v2 + 596) + 8))(v2 + 596, v18 + v19, 0) )
          {
            v20 = *(unsigned int *)(v2 + 612);
            v21 = *(unsigned int *)(v2 + 600);
            *(unsigned int *)(v2 + 612) = v20 + 1;
            *(unsigned int *)(v21 + 4 * v20) = a1;
          }
          v16 = v133-- == 0;
          if ( v16 )
            goto LABEL_31;
        }
      }
    }
  }
  return result;

}

} // namespace gamemd

// 0x505360
namespace gamemd {
int HouseClass::PrerequisitesForTechnoTypeAreListed(int a1, VectorClass_flat * aP1, TechnoTypeClass * aP2)
{

  int v3; // eax
  int v4; // ecx
  int v5; // edx
  unsigned int *j; // eax
  int *v7; // esi
  int v8; // ebx
  int v9; // eax
  int v10; // ecx
  unsigned int *v11; // edx
  int i; // [esp+10h] [ebp-4h]

  for ( i = 0; i < *(unsigned int *)(a1 + 1608); ++i ) /*0x505379*/
  {
    v3 = *(unsigned int *)(*(unsigned int *)(a1 + 1596) + 4 * i); /*0x505395*/
    if ( v3 < 0 ) /*0x50539a*/
    {
      v7 = 0; /*0x5053cb*/
      switch ( v3 ) /*0x5053d2*/
      {
        case -6: /*0x5053d2*/
          v7 = (int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 2276); /*0x505423*/
          break; /*0x505423*/
        case -5: /*0x5053d2*/
          v7 = (int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 2332); /*0x505415*/
          break; /*0x50541b*/
        case -4: /*0x5053d2*/
          v7 = (int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 2612); /*0x505407*/
          break; /*0x50540d*/
        case -3: /*0x5053d2*/
          v7 = (int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 2304); /*0x5053fa*/
          break; /*0x505400*/
        case -2: /*0x5053d2*/
          v7 = (int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 2360); /*0x5053ec*/
          break; /*0x5053f2*/
        case -1: /*0x5053d2*/
          v7 = (int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 2248); /*0x5053de*/
          break; /*0x5053e4*/
        default:
          break;
      }
      v8 = 0; /*0x505429*/
      if ( v7[4] <= 0 ) /*0x505430*/
        return 0; /*0x50547c*/
      while ( 1 ) /*0x505437*/
      {
        v9 = (*(int (**)(int *, int))(*v7 + 24))(v7, v8); /*0x505437*/
        v10 = 0; /*0x50543a*/
        if ( (int)aP2 > 0 ) /*0x50543e*/
          break; /*0x50543e*/
LABEL_20:
        if ( ++v8 >= v7[4] ) /*0x505455*/
          return 0; /*0x505455*/
      }
      v11 = *(unsigned int **)&aP1->?[3]; /*0x505440*/
      while ( *v11 != v9 ) /*0x505445*/
      {
        ++v10; /*0x505447*/
        ++v11; /*0x505448*/
        if ( v10 >= (int)aP2 ) /*0x50544d*/
          goto LABEL_20; /*0x50544d*/
      }
    }
    else
    {
      v4 = 0; /*0x50539c*/
      if ( (int)aP2 <= 0 ) /*0x5053a0*/
        return 0; /*0x5053a0*/
      v5 = *((unsigned int *)g_TriggerTypeCount + v3); /*0x5053ac*/
      for ( j = *(unsigned int **)&aP1->?[3]; *j != v5; ++j ) /*0x5053af*/
      {
        if ( ++v4 >= (int)aP2 ) /*0x5053c0*/
          return 0; /*0x5053c0*/
      }
    }
  }
  return 1; /*0x505475*/

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
    v5 = (DynamicVector *)((char *)v5 + 24); /*0x506f5f*/
    --v6; /*0x506f62*/
  }
  while ( v6 ); /*0x506f63*/
  v7 = 4 * *(unsigned int *)(_EBP + 22364) * *(unsigned int *)(_EBP + 22368); /*0x506f72*/
  Block = (void *)__2_YAPAXI_Z(v7); /*0x506f82*/
  v123 = (void *)__2_YAPAXI_Z(v7); /*0x506f8e*/
  v118 = (void *)__2_YAPAXI_Z(v7); /*0x506f99*/
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
      v25 = *v24 - *(unsigned short *)(_EBP + 22352); /*0x507109*/
      v26 = v24[1] - *(unsigned short *)(_EBP + 22354); /*0x507110*/
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
        __asm { fstp [esp+174h+var_174]; double }
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
          MapClass::CalcVisibleCellRange(v23, v30, (int)v33, (int *)(_EBP + 22356)); /*0x5071ec*/
          MapClass::CalcVisibleCellRange(v23, SLODWORD(v109), (int)v123, (int *)(_EBP + 22356)); /*0x5071ff*/
          MapClass::CalcVisibleCellRange(v23, v110, (int)v118, (int *)(_EBP + 22356)); /*0x507212*/
        }
      }
      v22 = ++LODWORD(v107); /*0x507222*/
    }
    while ( SLODWORD(v107) < v136[0] ); /*0x507229*/
    v8 = a4; /*0x50722f*/
  }
  v34 = v124; /*0x507236*/
  v35 = 0; /*0x50723a*/
  p_DynamicVector_field_0x10 = &v153.DynamicVector_field_0x10; /*0x50723c*/
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
  v42 = *(unsigned int *)(_EBP + 120); /*0x5072b3*/
  v43 = 0; /*0x5072b6*/
  v126.vtable0 = &DynamicVectorClass<BuildingTypeClass const *>::`vftable'; /*0x5072ba*/
  v128 = 10; /*0x5072c2*/
  v127 = 0; /*0x5072cd*/
  if ( v42 > 0 ) /*0x5072d8*/
  {
    Capacity = v126.Capacity; /*0x5072de*/
    do /*0x5072e5*/
    {
      v45 = *(unsigned int *)(*(unsigned int *)(_EBP + 108) + 4 * v43); /*0x5072e5*/
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
      *(unsigned int *)(_EBP + 90208) = v118; /*0x50748e*/
      v52 = 2; /*0x507494*/
    }
    else
    {
      v51 = &v147; /*0x50746f*/
      *(unsigned int *)(_EBP + 90208) = v123; /*0x507476*/
      v52 = 1; /*0x50747c*/
    }
  }
  else
  {
    v51 = &v142; /*0x50744b*/
    *(unsigned int *)(_EBP + 90208) = Block; /*0x507452*/
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
        *(unsigned int *)(_EBP + 90208) = Block; /*0x507511*/
      }
      else
      {
        v51 = &v137; /*0x5074e7*/
        v52 = 2; /*0x5074ee*/
        *(unsigned int *)(_EBP + 90208) = v118; /*0x5074f3*/
      }
    }
    else
    {
      v51 = &v147; /*0x5074b4*/
      v52 = 1; /*0x5074bb*/
      *(unsigned int *)(_EBP + 90208) = v123; /*0x5074c0*/
    }
  }
  if ( v51[4] == 1 ) /*0x5074ca*/
  {
    v55 = *(float *)v51[1]; /*0x5074d3*/
  }
  else
  {
    DistributionVector_BuildingType::Construct(&v129, 0, 0); /*0x507684*/
    v129 = (DistributionVector_BuildingType)&DynamicVectorClass<DiscreteDistributionClass<BuildingTypeClass>::DistributionObject<BuildingTypeClass *>>::`vftable'; /*0x507690*/
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
    v129 = (DistributionVector_BuildingType)&VectorClass<DiscreteDistributionClass<BuildingTypeClass>::DistributionObject<BuildingTypeClass *>>::`vftable'; /*0x507797*/
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
    v119.vtable0 = &DynamicVectorClass<Cell>::`vftable'; /*0x507838*/
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
    v119.vtable0 = &VectorClass<Cell>::`vftable'; /*0x5079d2*/
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
      *(unsigned int *)(*(unsigned int *)(_EBP + 22280) + v111) = *(unsigned int *)(LODWORD(v109) + 3576); /*0x507b6a*/
      *(unsigned int *)(*(unsigned int *)(_EBP + 22280) + v101 + 4) = v106; /*0x507b77*/
    }
    else
    {
      v89 = v111; /*0x507a5e*/
      *(unsigned int *)(*(unsigned int *)(_EBP + 22280) + v111 + 4) = v106; /*0x507a66*/
      v90 = (unsigned int *)(*(unsigned int *)(_EBP + 22280) + 16 * (a3 + 1)); /*0x507a7b*/
      if ( *v90 == -1 ) /*0x507a80*/
      {
        *v90 = *(unsigned int *)(LODWORD(v88) + 3576); /*0x507a8e*/
        *(unsigned int *)(*(unsigned int *)(_EBP + 22280) + v89 + 20) = v106; /*0x507a9a*/
        if ( v82 ) /*0x507a9e*/
        {
          BuildableFromArray = HouseClass::FirstBuildableFromArray( /*0x507ab1*/
                                 (HouseClass *)_EBP,
                                 *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2640);
          v92 = *(unsigned int *)(_EBP + 22292) - 1; /*0x507abc*/
          if ( v92 >= 0 ) /*0x507abd*/
          {
            v93 = (unsigned int *)(*(unsigned int *)(_EBP + 22280) + 16 * v92); /*0x507ad3*/
            while ( v93[1] != v106 || *v93 != BuildableFromArray[894] ) /*0x507aee*/
            {
              --v92; /*0x507af2*/
              v93 -= 4; /*0x507af3*/
              if ( v92 < 0 ) /*0x507af8*/
                goto LABEL_56; /*0x507af8*/
            }
            v94 = *(unsigned int *)(_EBP + 22292); /*0x507aff*/
            if ( v92 < v94 ) /*0x507b07*/
            {
              v95 = v94 - 1; /*0x507b0d*/
              v96 = v92; /*0x507b0e*/
              *(unsigned int *)(_EBP + 22292) = v95; /*0x507b12*/
              if ( v92 < v95 ) /*0x507b18*/
              {
                v97 = 16 * v92; /*0x507b1e*/
                do /*0x507b4f*/
                {
                  v98 = *(unsigned int *)(_EBP + 22280); /*0x507b21*/
                  v99 = (unsigned int *)(v98 + v97 + 16); /*0x507b27*/
                  v100 = (unsigned int *)(v97 + v98); /*0x507b2b*/
                  ++v96; /*0x507b2d*/
                  v97 += 16; /*0x507b2e*/
                  *v100 = *v99; /*0x507b33*/
                  v100[1] = v99[1]; /*0x507b38*/
                  v100[2] = v99[2]; /*0x507b3e*/
                  v100[3] = v99[3]; /*0x507b44*/
                }
                while ( v96 < *(unsigned int *)(_EBP + 22292) ); /*0x507b4f*/
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
  *(unsigned int *)(_EBP + 90208) = 0; /*0x50754f*/
  v137 = (int)&VectorClass<BuildingTypeClass *>::`vftable'; /*0x507555*/
  if ( !v57 && BYTE1(v140) ) /*0x507567*/
  {
    __3_YAXPAX_Z(v56); /*0x50756a*/
    v138 = 0; /*0x507572*/
  }
  BYTE1(v140) = 0; /*0x507580*/
  v139 = 0; /*0x50758a*/
  v147 = (int)&VectorClass<BuildingTypeClass *>::`vftable'; /*0x507591*/
  if ( v148 && BYTE1(v150) ) /*0x5075a3*/
  {
    __3_YAXPAX_Z(v148); /*0x5075a6*/
    v148 = 0; /*0x5075ae*/
  }
  BYTE1(v150) = 0; /*0x5075bc*/
  v149 = 0; /*0x5075c6*/
  v142 = (int)&VectorClass<BuildingTypeClass *>::`vftable'; /*0x5075cd*/
  if ( v143 && BYTE1(v145) ) /*0x5075df*/
  {
    __3_YAXPAX_Z(v143); /*0x5075e2*/
    v143 = 0; /*0x5075ea*/
  }
  BYTE1(v145) = 0; /*0x5075f5*/
  v144 = 0; /*0x5075ff*/
  v126.vtable0 = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x507606*/
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
    *(v58 - 1) = (int)&VectorClass<Cell>::`vftable'; /*0x507649*/
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

// 0x508C30
namespace gamemd {
int HouseClass::UpdatePower()
{

  int v2; // ecx
  int v3; // eax
  int v4; // ebp
  int v5; // edi
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  char v12; // [esp+Bh] [ebp-Dh]
  int v13; // [esp+10h] [ebp-8h]
  bool v14; // [esp+14h] [ebp-4h]

  v2 = *((unsigned int *)this + 5353); /*0x508c39*/
  v3 = *((unsigned int *)this + 5354); /*0x508c3f*/
  v14 = v2 < v3 && v3 && (!v2 || (double)v2 / (double)*((int *)this + 5354) < 1.0); /*0x508c75*/
  *((unsigned char *)this + 22392) = 0; /*0x508c79*/
  *((unsigned int *)this + 5353) = 0; /*0x508c7f*/
  *((unsigned int *)this + 5354) = 0; /*0x508c85*/
  v4 = 0; /*0x508c8f*/
  v12 = 0; /*0x508c93*/
  v13 = *((unsigned int *)this + 30); /*0x508c97*/
  if ( v13 > 0 ) /*0x508c9b*/
  {
    do /*0x508ca5*/
    {
      v5 = *(unsigned int *)(*((unsigned int *)this + 27) + 4 * v4); /*0x508ca5*/
      if ( v5 && !*(unsigned char *)(v5 + 129) && *(unsigned char *)(v5 + 116) ) /*0x508cb8*/
      {
        if ( MEMORY[0xA8B238][0] ) /*0x508cc5*/
        {
          if ( (#375 *)this != HouseClass_Player ) /*0x508ce4*/
            goto LABEL_18; /*0x508ce4*/
        }
        else if ( !*((unsigned char *)this + 492) && !*((unsigned char *)this + 493) ) /*0x508cd5*/
        {
LABEL_18:
          *((unsigned int *)this + 5353) += BuildingClass::GetPowerOutput((int *)v5); /*0x508cf2*/
          *((unsigned int *)this + 5354) += BuildingClass::GetPowerDrain((unsigned char *)v5); /*0x508d18*/
          if ( ObjectClass::HasLocation((unsigned int *)v5) && BuildingClass::GetPowerOutput((int *)v5) > 0 ) /*0x508d30*/
            v12 = 1; /*0x508d32*/
          goto LABEL_21; /*0x508d32*/
        }
        if ( *(unsigned char *)(v5 + 1051) || MEMORY[0xA8B238][0] ) /*0x508cf0*/
          goto LABEL_18; /*0x508cf0*/
      }
LABEL_21:
      ++v4; /*0x508d37*/
    }
    while ( v4 < v13 ); /*0x508ca5*/
  }
  *((unsigned char *)this + 22395) = v12; /*0x508d45*/
  v6 = *((unsigned int *)this + 169); /*0x508d50*/
  v7 = *((unsigned int *)this + 171); /*0x508d56*/
  if ( v6 != -1 ) /*0x508d5f*/
  {
    if ( (int)MEMORY[0xA8ED84] - v6 >= v7 ) /*0x508d6b*/
      goto LABEL_26; /*0x508d6b*/
    v7 -= (int)MEMORY[0xA8ED84] - v6; /*0x508d6d*/
  }
  if ( v7 ) /*0x508d71*/
  {
LABEL_27:
    *((unsigned int *)this + 5353) = 0; /*0x508d79*/
    goto LABEL_28; /*0x508d79*/
  }
LABEL_26:
  if ( v12 ) /*0x508d77*/
    goto LABEL_27; /*0x508d77*/
LABEL_28:
  nullsub_5(this); /*0x508d7f*/
  HouseClass::UpdateTeamProductionSpeed((void *)this); /*0x508d88*/
  v8 = *((unsigned int *)this + 5353); /*0x508d8d*/
  v9 = *((unsigned int *)this + 5354); /*0x508d93*/
  v10 = v8 < v9 && v9 && (!v8 || (double)*((int *)this + 5353) / (double)*((int *)this + 5354) < 1.0); /*0x508dc9*/
  if ( v14 != v10 ) /*0x508dd7*/
    LOBYTE(v10) = SuperWeapon::UpdateSuperWeaponsOwnedHouseClass(this); /*0x508ddb*/
  *((unsigned char *)this + 22393) = 1; /*0x508de0*/
  return v10; /*0x508de7*/

}
}
// 0x508DF0
namespace gamemd {
void * HouseClass::CanTogglePower()
{

  #375 *result; // eax
  int v2; // eax
  int v3; // esi
  int v4; // edx
  int v5; // eax
  int v6; // edi
  int v7; // edx
  unsigned int *v8; // esi
  int v9; // eax
  int v10; // [esp+0h] [ebp-Ch]

  *((unsigned char *)this + 22393) = 0; /*0x508df0*/
  result = HouseClass_Player; /*0x508df7*/
  if ( (#375 *)this == HouseClass_Player ) /*0x508e01*/
  {
    v2 = *((unsigned int *)this + 174); /*0x508e07*/
    v3 = *((unsigned int *)this + 172); /*0x508e10*/
    LOBYTE(v10) = 0; /*0x508e1a*/
    if ( v3 != -1 ) /*0x508e1f*/
    {
      if ( (int)MEMORY[0xA8ED84] - v3 >= v2 ) /*0x508e2b*/
        goto LABEL_6; /*0x508e2b*/
      v2 -= (int)MEMORY[0xA8ED84] - v3; /*0x508e2d*/
    }
    if ( v2 ) /*0x508e31*/
    {
LABEL_30:
      result = (#375 *)HouseClass::updateAlliedStatus(&MEMORY[0x87F7E8]); /*0x508f2f*/
      if ( (unsigned char)result != (unsigned char)v10 ) /*0x508f43*/
        return (#375 *)HouseClass::SetRadarVisibility(v10); /*0x508f4f*/
      return result; /*0x508f4f*/
    }
LABEL_6:
    if ( *((unsigned char *)MEMORY[0xA8B230] + 13476) ) /*0x508e3c*/
      goto LABEL_29; /*0x508e3c*/
    v4 = *((unsigned int *)this + 5353); /*0x508e4a*/
    v5 = *((unsigned int *)this + 5354); /*0x508e50*/
    if ( v4 >= v5 || !v5 || v4 && (double)*((int *)this + 5353) / (double)*((int *)this + 5354) >= 1.0 ) /*0x508e81*/
    {
      v6 = *((unsigned int *)this + 30); /*0x508e87*/
      v7 = 0; /*0x508e8a*/
      if ( v6 > 0 ) /*0x508e8e*/
      {
        v8 = *(unsigned int **)((char *)this + 108); /*0x508e94*/
        while ( 1 ) /*0x508e9d*/
        {
          v9 = *v8; /*0x508e9d*/
          if ( *v8 /*0x508f06*/
            && *(unsigned char *)(v9 + 1632)
            && *(unsigned char *)(*(unsigned int *)(v9 + 1312) + 5796)
            && !*(unsigned char *)(v9 + 129)
            && *(unsigned char *)(v9 + 116)
            && (!MEMORY[0xA8B238][0] && !*((unsigned char *)this + 492) && !*((unsigned char *)this + 493)
             || *(unsigned char *)(v9 + 1051)
             || MEMORY[0xA8B238][0])
            && *(unsigned int *)(v9 + 172) != 19
            && *(unsigned int *)(v9 + 180) != 19 )
          {
            break; /*0x508f06*/
          }
          ++v7; /*0x508f08*/
          ++v8; /*0x508f09*/
          if ( v7 >= v6 ) /*0x508f0e*/
            goto LABEL_30; /*0x508f0e*/
        }
        if ( !*(unsigned int *)(v9 + 1284) && !(*(unsigned __int8 (**)(unsigned int))(*(unsigned int *)v9 + 468))(*v8) ) /*0x508f20*/
LABEL_29:
          LOBYTE(v10) = 1; /*0x508f2a*/
      }
    }
    goto LABEL_30; /*0x508f2a*/
  }
  return result; /*0x508f54*/

}
}
// 0x5098F0
namespace gamemd {
CellStruct * * HouseClass::UpdateAITryFireSW()
{

  int v2; // eax
  int i; // edi
  int v4; // eax
  bool v5; // zf
  CellStruct *v6; // eax
  CellStruct **v7; // eax
  CellStruct *v8; // eax
  AbstractClass *v9; // eax
  CellStruct *v11; // [esp+8h] [ebp-10h] BYREF
  int v12; // [esp+Ch] [ebp-Ch] BYREF
  int v13; // [esp+10h] [ebp-8h] BYREF
  int v14; // [esp+14h] [ebp-4h] BYREF

  LOBYTE(v2) = *((unsigned char *)this + 492); /*0x5098fe*/
  if ( !MEMORY[0xA8B238] ) /*0x509904*/
    LOBYTE(v2) = (unsigned char)v2 || *((unsigned char *)this + 493); /*0x509918*/
  if ( !(unsigned char)v2 )
  {
    v2 = *((unsigned int *)this + 153); /*0x509922*/
    for ( i = 0; i < v2; ++i )
    {
      v4 = *(unsigned int *)(*((unsigned int *)this + 150) + 4 * i); /*0x509939*/
      if ( v4 && *(unsigned char *)(v4 + 111) )
      {
        switch ( *(unsigned int *)(*(unsigned int *)(v4 + 40) + 180) )
        {
          case 0:
            v12 = *(unsigned int *)(*((unsigned int *)this + 150) + 4 * i); /*0x509968*/
            if ( *((unsigned int *)this + 5504) != -1 )
            {
              v5 = *((unsigned short *)this + 10872) == *(unsigned short *)&MEMORY[0xA8D63C].__pad_14B0[1196]; /*0x509980*/
              v11 = *(CellStruct **)&MEMORY[0xA8D63C].__pad_14B0[1196]; /*0x509987*/
              if ( v5 && *((unsigned short *)this + 10873) == *(unsigned short *)&MEMORY[0xA8D63C].__pad_14B0[1198] )
              {
                v7 = (CellStruct **)(*((unsigned int *)this + 5435) == 1
                                   ? HouseClass::FindSWBuilding((unsigned int *)this, (HouseClass *)&v13)
                                   : HouseClass::FindSWTarget(
                                       (void *)this,
                                       (HouseClass *)&v14,
                                       *(HouseClass **)((char *)this + 21740)));
                v6 = *v7; /*0x5099cb*/
              }
              else
              {
                v6 = *(CellStruct **)((char *)this + 21744); /*0x50999d*/
              }
              v11 = v6; /*0x5099d4*/
              if ( v6 != *(CellStruct **)&MEMORY[0xA8D63C].__pad_14B0[1196] ) /*0x5099d8*/
                goto LABEL_33; /*0x5099d8*/
            }
            break; /*0x5099d8*/
          case 2:
            HouseClass::Fire_LightningStorm(this, *(unsigned int *)(*((unsigned int *)this + 150) + 4 * i)); /*0x509a0d*/
            break; /*0x509a12*/
          case 5:
          case 6:
          case 8:
          case 0xB:
            HouseClass::Fire_ParaDrop((unsigned int *)this, *(unsigned int *)(*((unsigned int *)this + 150) + 4 * i)); /*0x509a34*/
            break; /*0x509a39*/
          case 7:
            HouseClass::Fire_PsyDom(this, *(unsigned int *)(*((unsigned int *)this + 150) + 4 * i)); /*0x509a1a*/
            break; /*0x509a1f*/
          case 9:
            HouseClass::Fire_GenMutator(this, *(unsigned int *)(*((unsigned int *)this + 150) + 4 * i)); /*0x509a27*/
            break; /*0x509a2c*/
          case 0xA:
            v5 = *((unsigned short *)this + 10876) == *(unsigned short *)&MEMORY[0xA8D63C].__pad_14B0[1196]; /*0x509a4b*/
            v12 = *(unsigned int *)(*((unsigned int *)this + 150) + 4 * i); /*0x509a52*/
            v11 = *(CellStruct **)&MEMORY[0xA8D63C].__pad_14B0[1196]; /*0x509a56*/
            if ( !v5 || *((unsigned short *)this + 10877) != *(unsigned short *)&MEMORY[0xA8D63C].__pad_14B0[1198] ) /*0x509a63*/
            {
              v8 = *(CellStruct **)((char *)this + 21752); /*0x509a65*/
              goto LABEL_32; /*0x509a6b*/
            }
            if ( (*((unsigned short *)this + 10874) != *(unsigned short *)&MEMORY[0xA8D63C].__pad_14B0[1196] /*0x509a99*/
               || *((unsigned short *)this + 10875) != *(unsigned short *)&MEMORY[0xA8D63C].__pad_14B0[1198])
              && *(unsigned int *)(*(unsigned int *)&MEMORY[0x87F8E4].__pad_5568[9108] + 3808) + *((unsigned int *)this + 5439) > *(int *)&MEMORY[0xA8D63C].__pad_14B0[664] )
            {
              v8 = *(CellStruct **)((char *)this + 21748); /*0x509a9b*/
LABEL_32:
              v11 = v8; /*0x509aa1*/
              if ( v8 != *(CellStruct **)&MEMORY[0xA8D63C].__pad_14B0[1196] ) /*0x509aa8*/
              {
LABEL_33:
                v9 = (AbstractClass *)(*(int (**)(int, int *))(*((unsigned int *)this + 149) + 16))( /*0x509aca*/
                                        (char *)this + 596,
                                        &v12);
                SuperWeapon::FireSuperWeaponHouseClass((void *)this, v9, (AbstractClass *)&v11); /*0x509acd*/
              }
              break; /*0x509acd*/
            }
            break; /*0x509acd*/
          default:
            break;
        }
      }
      v2 = *((unsigned int *)this + 153); /*0x509ad2*/
    }
  }
  return v2; /*0x509ae2*/

}
}
// 0x50BC90
namespace gamemd {
int HouseClass::CreatePowerOutage(int a2)
{

  wchar_t *v2; // eax
  int v4; // [esp+8h] [ebp-8h]

  v2 = MEMORY[0xA8ED84]; /*0x50bc90*/
  *((unsigned char *)this + 22392) = 1; /*0x50bc9c*/
  *((unsigned int *)this + 169) = v2; /*0x50bcaa*/
  *((unsigned int *)this + 170) = v4; /*0x50bcb4*/
  *((unsigned int *)this + 171) = a2; /*0x50bcb7*/
  return v4; /*0x50bcba*/

}
}
// 0x50BCD0
namespace gamemd {
int HouseClass::CreateRadarOutage(int a2)
{

  wchar_t *v2; // eax
  int v4; // [esp+8h] [ebp-8h]

  v2 = MEMORY[0xA8ED84]; /*0x50bcd0*/
  *((unsigned char *)this + 22393) = 1; /*0x50bcdc*/
  *((unsigned int *)this + 172) = v2; /*0x50bcea*/
  *((unsigned int *)this + 173) = v4; /*0x50bcf4*/
  *((unsigned int *)this + 174) = a2; /*0x50bcf7*/
  return v4; /*0x50bcfa*/

}
}
// 0x50D320
namespace gamemd {
void HouseClass_RespawnStartingBuildings()
{
  int v4; // ecx
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
  int v22[3]; // [esp+14h] [ebp-1Ch] BYREF
  unsigned int v23[4]; // [esp+20h] [ebp-10h] BYREF
  void *retaddr; // [esp+30h] [ebp+0h] BYREF

  v4 = v4; /*0x50d324*/
  result = *(unsigned int *)(v4 + 380) - 1; /*0x50d32c*/
  for ( result = result; result >= 0; --result )
  {
    v7 = *(int16_t **)(*(unsigned int *)(v4 + 368) + 4 * result); /*0x50d340*/
    v8 = *(unsigned int *)v7; /*0x50d343*/
    if ( (*(int (**)(unsigned int))(**(unsigned int **)v7 + 44))(*(unsigned int *)v7) == 7 )
    {
      v9 = v7 + 2; /*0x50d355*/
      v10 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v7 + 2); /*0x50d35e*/
      v11 = Cell::IsBridge(v10); /*0x50d365*/
      if ( v11 && (v12 = v11[328], v12 == v8) && v11[135] == v4 )
      {
        v13 = *v11; /*0x50d386*/
        v22[0] = -*(unsigned int *)(v12 + 160); /*0x50d38a*/
        (*(void (**)(int *, int *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))(v13 + 364))( /*0x50d3ac*/
          v11,
          v22,
          0,
          *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
          0,
          0,
          0,
          0);
      }
      else
      {
        v14 = (*(int (**)(int, int, unsigned int *, int, void **))(*(unsigned int *)v8 + 140))(v8, v4, v23, a4, a2); /*0x50d3bf*/
        if ( v14 )
          v15 = (*(int (**)(int))(v14->q02C)(v14) == 6 ? v14 : 0;
        else
          v15 = 0; /*0x50d3c5*/
        v16 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v9); /*0x50d3e3*/
        a2 = &retaddr; /*0x50d3ee*/
        v17 = (unsigned int *)(*(int (**)(void *))(*(unsigned int *)v16 + 72))(v16); /*0x50d3f1*/
        a4 = 0; /*0x50d3f6*/
        v23[0] = *v17; /*0x50d3f8*/
        v23[1] = v17[1]; /*0x50d3ff*/
        v23 = v23; /*0x50d40a*/
        v23[2] = v17[2]; /*0x50d40b*/
        if ( !(*(uint8_t (**)(int))(*(unsigned int *)v15 + 1168))(v15) ) /*0x50d413*/
          (*(void (**)(int))(*(unsigned int *)v15 + 248))(v15); /*0x50d421*/
      }
    }
    result = result - 1; /*0x50d42b*/
  }
  return result; /*0x50d439*/
}
}
// 0x50D440
namespace gamemd {
int HouseClass::RespawnStartingForces(TechnoClass * aP0, void ** a1, unsigned int * a2, int a4)
{

  int v4; // ecx
  _UNKNOWN **v5; // ebp
  unsigned int *v6; // edi
  int v7; // esi
  HouseClass *v8; // ebx
  int result; // eax
  int v10; // edi
  __int16 *v11; // ebp
  int v12; // esi
  int v13; // eax
  void *v14; // eax
  unsigned int *v15; // eax
  unsigned int *v16; // [esp+0h] [ebp-2Ch]
  int v17; // [esp+4h] [ebp-28h]
  _UNKNOWN **v18; // [esp+8h] [ebp-24h]
  int v19; // [esp+10h] [ebp-1Ch]
  unsigned int v20[4]; // [esp+1Ch] [ebp-10h] BYREF
  _UNKNOWN *retaddr; // [esp+2Ch] [ebp+0h] BYREF

  v8 = (HouseClass *)v4; /*0x50d444*/
  result = *(unsigned int *)(v4 + 380) - 1; /*0x50d44c*/
  v19 = result; /*0x50d44d*/
  if ( result >= 0 )
  {
    v18 = v5; /*0x50d457*/
    v17 = v7; /*0x50d458*/
    v16 = v6; /*0x50d459*/
    while ( 1 )
    {
      v10 = 0; /*0x50d466*/
      v11 = *(__int16 **)(*(unsigned int *)&v8->__pad_13C[52] + 4 * result); /*0x50d468*/
      v12 = *(unsigned int *)v11; /*0x50d46b*/
      switch ( (*(int (**)(unsigned int, unsigned int *, int, _UNKNOWN **))(**(unsigned int **)v11 + 44))(
                 *(unsigned int *)v11,
                 v16,
                 v17,
                 v18) )
      {
        case 3:
        case 7:
        case 40:
          v13 = (*(int (**)(int, HouseClass *))(*(unsigned int *)v12 + 140))(v12, v8); /*0x50d491*/
          if ( v13 ) /*0x50d499*/
            goto LABEL_9; /*0x50d499*/
          v10 = 0; /*0x50d49b*/
          break; /*0x50d49d*/
        case 16:
          v13 = (*(int (**)(int, HouseClass *))(*(unsigned int *)v12 + 140))(v12, v8); /*0x50d4a4*/
          if ( v13 )
LABEL_9:
            v10 = (*(unsigned char *)(v13 + 20) & 1) != 0 ? v13 : 0;
          else
            v10 = 0; /*0x50d4ae*/
          break; /*0x50d4b0*/
        default:
          break;
      }
      v14 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v11 + 2); /*0x50d4c0*/
      v18 = &retaddr; /*0x50d4d4*/
      v15 = (unsigned int *)(*(int (**)(void *))(*(unsigned int *)v14 + 72))(v14); /*0x50d4d7*/
      v17 = 0; /*0x50d4dc*/
      v20[0] = *v15; /*0x50d4de*/
      v20[1] = v15[1]; /*0x50d4e5*/
      v16 = v20; /*0x50d4f0*/
      v20[2] = v15[2]; /*0x50d4f1*/
      if ( !(*(unsigned __int8 (**)(int))(*(unsigned int *)v10 + 1168))(v10) ) /*0x50d4f9*/
        (*(void (**)(int))(*(unsigned int *)v10 + 248))(v10); /*0x50d507*/
      result = --v19; /*0x50d511*/
      if ( v19 < 0 ) /*0x50d516*/
        break; /*0x50d516*/
      result = v19; /*0x50d45c*/
    }
  }
  return result; /*0x50d51f*/

}
}
// 0x50D9E0
namespace gamemd {
int HouseClass::GetInfSelfHealStep()
{

  return *((unsigned int *)this + 89) * MEMORY[0x8871E0]->SelfHealInfantryAmount; /*0x50d9ef*/

}
}
// 0x50D9F0
namespace gamemd {
int HouseClass::GetUnitSelfHealStep()
{

  return *((unsigned int *)this + 90) * MEMORY[0x8871E0]->SelfHealUnitAmount; /*0x50d9ff*/

}
}
// 0x50E0E0
namespace gamemd {
void HouseClass::LostPoweredCenter(int a2)
{

  int v3; // eax
  char v4; // bl
  int v5; // edi
  int v6; // esi

  v3 = *((unsigned int *)this + 182) - 1; /*0x50e0eb*/
  *((unsigned int *)this + 182) = v3; /*0x50e0ec*/
  if ( !v3 ) /*0x50e0f2*/
  {
    if ( a2 ) /*0x50e0fe*/
    {
      v4 = 0; /*0x50e109*/
      v5 = MEMORY[0xA8EC88] - 1; /*0x50e10b*/
      if ( MEMORY[0xA8EC88] - 1 >= 0 ) /*0x50e110*/
      {
        do /*0x50e14c*/
        {
          v6 = *((unsigned int *)MEMORY[0xA8EC7C] + v5); /*0x50e11d*/
          if ( *(unsigned int *)(v6 + 540) == this /*0x50e138*/
            && (*(int (**)(unsigned int))(*(unsigned int *)v6 + 132))(*((unsigned int *)MEMORY[0xA8EC7C] + v5)) == a2
            && !*(unsigned char *)(v6 + 129) )
          {
            TechnoClass::Deactivate((unsigned int *)v6); /*0x50e144*/
            v4 = 1; /*0x50e149*/
          }
          --v5; /*0x50e14b*/
        }
        while ( v5 >= 0 ); /*0x50e14c*/
        if ( v4 && MEMORY[0xA8E9A0] ) /*0x50e15a*/
        {
          if ( MEMORY[0xA8B238][0] ) /*0x50e163*/
          {
            if ( (#375 *)this != HouseClass_Player ) /*0x50e186*/
              return; /*0x50e186*/
            goto LABEL_16; /*0x50e186*/
          }
          if ( *((unsigned char *)this + 492) || *((unsigned char *)this + 493) ) /*0x50e16f*/
          {
LABEL_16:
            if ( !MEMORY[0xA8E7AC] ) /*0x50e18f*/
              VoxClass::FindAndPlay(unk_824E4C, -1); /*0x50e19b*/
          }
        }
      }
    }
  }

}
}
// 0x5471B0
namespace gamemd {
int HouseClass::GetCameoTypeIndex(int a2)
{

  unsigned int *v2; // eax
  int v3; // ecx

  v2 = (unsigned int *)(*(int (**)(void *))(*(unsigned int *)this + 156))(this); /*0x5471b2*/
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
  int v3; // edx
  unsigned int *attachedTag; // eax
  int v5; // ebx
  CCINIClass *v6; // edi
  int v7; // esi
  int v8; // eax
  int v9; // edx
  unsigned int *v10; // ecx
  int v11; // eax
  int v12; // edi
  CCINIClass *v13; // eax
  int v14; // esi
  int v15; // eax
  int v16; // esi
  int v18; // ebp
  int v19; // ecx
  int v20; // eax
  unsigned int *v21; // edx
  int v22; // esi
  IUnknown *v23; // eax
  ObjectClass *v24; // edi
  ObjectClass *CurrentOption; // eax
  int *v26; // esi
  int v27; // eax
  int v28; // [esp+10h] [ebp-38h]
  int v29; // [esp+14h] [ebp-34h] BYREF
  void **v30; // [esp+18h] [ebp-30h] BYREF
  void *Block; // [esp+1Ch] [ebp-2Ch]
  CCINIClass *v32; // [esp+20h] [ebp-28h]
  CCINIClass *v33; // [esp+24h] [ebp-24h]
  int v34; // [esp+28h] [ebp-20h]
  int v35; // [esp+2Ch] [ebp-1Ch]
  void **v36; // [esp+30h] [ebp-18h] BYREF
  void *v37; // [esp+34h] [ebp-14h]
  AbstractClass *v38; // [esp+38h] [ebp-10h]
  char v39; // [esp+3Dh] [ebp-Bh]
  int v40; // [esp+40h] [ebp-8h]
  int v41; // [esp+44h] [ebp-4h]

  v2 = 0; /*0x5d70fb*/
  if ( *a1 <= 0 ) /*0x5d7101*/
    return 1; /*0x5d7492*/
  v28 = *a1; /*0x5d710d*/
  UnitTypeVector::Construct2(&v36, 0, 0); /*0x5d7111*/
  v36 = &vt_DynamicVectorClass_UnitTypeClass; /*0x5d711c*/
  v41 = 10; /*0x5d7124*/
  v40 = 0; /*0x5d712c*/
  InfantryTypeVector::ConstructFromData(&v30, 0, 0); /*0x5d7130*/
  v3 = 10; /*0x5d7139*/
  v30 = &vt_DynamicVectorClass_InfantryTypeClass; /*0x5d713e*/
  v35 = 10; /*0x5d7146*/
  attachedTag = aP0->attachedTag; /*0x5d714a*/
  v34 = 0; /*0x5d714d*/
  v5 = 1 << attachedTag[45]; /*0x5d7161*/
  if ( (int)g_CrateCount <= 0 ) /*0x5d7165*/
    goto LABEL_20; /*0x5d7165*/
  v6 = (CCINIClass *)v38; /*0x5d716b*/
  do /*0x5d7210*/
  {
    v7 = *(unsigned int *)&g_UnitTypeCount2->__pad_0[4 * v2]; /*0x5d7175*/
    if ( *(unsigned char *)(v7 + 1749) && (v5 & *(unsigned int *)(v7 + 1740)) != 0 && *(unsigned int *)(v7 + 1588) <= aP0[2].visibilityFlags ) /*0x5d719e*/
    {
      v8 = 0; /*0x5d71a6*/
      v9 = *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 2864); /*0x5d71a8*/
      if ( v9 <= 0 ) /*0x5d71b0*/
      {
LABEL_11:
        if ( v40 < (int)v6 ) /*0x5d71c8*/
          goto LABEL_16; /*0x5d71c8*/
        if ( (v39 || !v6) && v41 > 0 ) /*0x5d71dc*/
        {
          if ( ((unsigned __int8 (*)(void ***, char *, unsigned int))v36[2])(&v36, &v6->__pad_0[v41], 0) ) /*0x5d71eb*/
          {
LABEL_16:
            v11 = v40++; /*0x5d71f2*/
            *((unsigned int *)v37 + v11) = v7; /*0x5d7201*/
          }
          v6 = (CCINIClass *)v38; /*0x5d7204*/
        }
      }
      else
      {
        v10 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 2852); /*0x5d71b2*/
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
  while ( v2 < (int)g_CrateCount ); /*0x5d7210*/
  v3 = v35; /*0x5d7216*/
LABEL_20:
  v12 = 0; /*0x5d721a*/
  if ( *(int *)&HouseClass_Player.__pad_5568[20644] > 0 ) /*0x5d7223*/
  {
    v13 = v32; /*0x5d7229*/
    while ( 1 ) /*0x5d7239*/
    {
      v14 = *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[20632] + 4 * v12); /*0x5d7239*/
      if ( *(unsigned char *)(v14 + 1749) /*0x5d725e*/
        && (v5 & *(unsigned int *)(v14 + 1740)) != 0
        && *(unsigned int *)(v14 + 1588) <= aP0[2].visibilityFlags )
      {
        if ( v34 < (int)v13 ) /*0x5d7264*/
          goto LABEL_31; /*0x5d7264*/
        if ( (BYTE1(v33) || !v13) && v3 > 0 ) /*0x5d7274*/
          break; /*0x5d7274*/
      }
LABEL_33:
      if ( ++v12 >= *(int *)&HouseClass_Player.__pad_5568[20644] ) /*0x5d72a9*/
        goto LABEL_34; /*0x5d72a9*/
      v3 = v35; /*0x5d722f*/
    }
    if ( ((unsigned __int8 (*)(void ***, char *, unsigned int))v30[2])(&v30, &v13->__pad_0[v3], 0) ) /*0x5d7283*/
    {
LABEL_31:
      v15 = v34++; /*0x5d728a*/
      *((unsigned int *)Block + v15) = v14; /*0x5d7299*/
    }
    v13 = v32; /*0x5d729c*/
    goto LABEL_33; /*0x5d729c*/
  }
LABEL_34:
  v16 = v40; /*0x5d72ab*/
  if ( v40 || v34 ) /*0x5d72b9*/
  {
    v18 = 20; /*0x5d731a*/
    v19 = *a1; /*0x5d731f*/
    if ( *a1 > 0 ) /*0x5d7323*/
    {
      while ( v18 > 0 ) /*0x5d7331*/
      {
        if ( v19 > v28 / 3 && v16 ) /*0x5d734d*/
        {
          v20 = Random::Range( /*0x5d735f*/
                  (unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 536),
                  0,
                  (IUnknown *)(v16 - 1));
          v21 = v37; /*0x5d7364*/
        }
        else
        {
          v20 = Random::Range( /*0x5d737e*/
                  (unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 536),
                  0,
                  (IUnknown *)(v34 - 1));
          v21 = Block; /*0x5d7383*/
        }
        v22 = v21[v20]; /*0x5d7387*/
        v23 = (IUnknown *)(*(int (**)(int, ObjectClass *))(*(unsigned int *)v22 + 140))(v22, aP0); /*0x5d7393*/
        v24 = (ObjectClass *)__RTDynamicCast( /*0x5d73b4*/
                               v23,
                               0,
                               &ObjectClass `RTTI Type Descriptor',
                               &TechnoClass `RTTI Type Descriptor',
                               0);
        CurrentOption = HouseClass::GetCurrentOption(aP0, (IUnknown *)&v29); /*0x5d73bb*/
        if ( FindInfantryDeployPosition((int *)v24->__pad_0, (RadarClass *)CurrentOption, 4) ) /*0x5d73c4*/
        {
          v27 = (*(int (**)(int))(*(unsigned int *)v22 + 172))(v22); /*0x5d73e5*/
          v26 = a1; /*0x5d73eb*/
          *a1 -= v27; /*0x5d73f3*/
          if ( (**(unsigned int **)&HouseClass_Player.__pad_5568[8060] & 0x200) != 0 ) /*0x5d7400*/
            Timer::SetFlag(&v24[1].location[2], 1); /*0x5d740a*/
          if ( (unsigned __int8)House::IsCurrentPlayer((#375 *)aP0) ) /*0x5d7411*/
            (*(void (**)(ObjectClass *, int))(*(unsigned int *)v24->__pad_0 + 496))(v24, 5); /*0x5d7420*/
          else
            (*(void (**)(ObjectClass *, int))(*(unsigned int *)v24->__pad_0 + 496))(v24, 11); /*0x5d742e*/
        }
        else
        {
          if ( v24 ) /*0x5d73cf*/
            (*(void (**)(ObjectClass *, int))(*(unsigned int *)v24->__pad_0 + 32))(v24, 1); /*0x5d73d7*/
          v26 = a1; /*0x5d73da*/
          --v18; /*0x5d73de*/
        }
        v19 = *v26; /*0x5d7434*/
        if ( *v26 <= 0 ) /*0x5d7438*/
          break; /*0x5d7438*/
        v16 = v40; /*0x5d732b*/
      }
    }
    v30 = &vt_VectorClass_InfantryTypeClass; /*0x5d7446*/
    if ( Block && BYTE1(v33) ) /*0x5d7456*/
    {
      __3_YAXPAX_Z(Block); /*0x5d7459*/
      Block = 0; /*0x5d7461*/
    }
    BYTE1(v33) = 0; /*0x5d7469*/
    v32 = 0; /*0x5d7470*/
    v36 = &vt_VectorClass_UnitTypeClass; /*0x5d7474*/
    if ( v37 && v39 ) /*0x5d7484*/
      __3_YAXPAX_Z(v37); /*0x5d7487*/
    return 1; /*0x5d7487*/
  }
  v30 = &vt_VectorClass_InfantryTypeClass; /*0x5d72bf*/
  if ( Block && BYTE1(v33) ) /*0x5d72d1*/
  {
    __3_YAXPAX_Z(Block); /*0x5d72d4*/
    Block = 0; /*0x5d72dc*/
  }
  BYTE1(v33) = 0; /*0x5d72e4*/
  v32 = 0; /*0x5d72eb*/
  v36 = &vt_VectorClass_UnitTypeClass; /*0x5d72ef*/
  if ( v37 ) /*0x5d72f7*/
  {
    if ( v39 ) /*0x5d72ff*/
      __3_YAXPAX_Z(v37); /*0x5d7302*/
  }
  return 0; /*0x5d730a*/

}
}
// 0x5D74A0
namespace gamemd {
int HouseClass::InitAlliances()
{

  int v0; // edx
  unsigned int *v1; // eax
  int v2; // edi
  int v3; // ebp
  int v4; // ebx
  int v5; // ecx
  int v6; // esi
  int v8; // [esp+0h] [ebp-4h]

  v0 = HouseClass_Count; /*0x5d74a1*/
  if ( HouseClass_Count <= 0 ) /*0x5d74a9*/
    return 1; /*0x5d754a*/
  v1 = HouseClass_Array; /*0x5d74af*/
  v2 = 1; /*0x5d74b8*/
  v3 = 0; /*0x5d74bd*/
  v8 = 1; /*0x5d74bf*/
  do /*0x5d7540*/
  {
    v4 = v1[v3]; /*0x5d74c3*/
    if ( !*(unsigned char *)(*(unsigned int *)(v4 + 52) + 422) ) /*0x5d74c9*/
    {
      v5 = *(unsigned int *)(v4 + 90204); /*0x5d74d4*/
      if ( v5 != -2 && v5 != -1 && v2 < v0 ) /*0x5d74e6*/
      {
        do /*0x5d752d*/
        {
          v6 = v1[v2]; /*0x5d74e8*/
          if ( !*(unsigned char *)(*(unsigned int *)(v6 + 52) + 422) && *(unsigned int *)(v1[v3] + 90204) == *(unsigned int *)(v6 + 90204) ) /*0x5d7509*/
          {
            HouseClass::HandleAlliance(v4, v6, 0); /*0x5d7510*/
            HouseClass::HandleAlliance(v6, v4, 0); /*0x5d751a*/
            v1 = HouseClass_Array; /*0x5d751f*/
          }
          v0 = HouseClass_Count; /*0x5d7524*/
          ++v2; /*0x5d752a*/
        }
        while ( v2 < HouseClass_Count ); /*0x5d752d*/
        v2 = v8; /*0x5d752f*/
      }
    }
    ++v2; /*0x5d7533*/
    ++v3; /*0x5d7534*/
    v8 = v2; /*0x5d7537*/
  }
  while ( v2 - 1 < v0 ); /*0x5d7540*/
  return 1; /*0x5d7549*/

}
}
// 0x5EE9D0
namespace gamemd {
AbstractClass * * HouseClass::FindStartPositions()
{

  int v0; // eax
  unsigned int *v1; // ecx
  int v2; // eax
  int i; // edi
  int v4; // esi
  char v5; // bl
  int v6; // edx
  int v7; // eax
  unsigned int *v8; // ecx
  int *started; // eax
  int v10; // edi
  int v11; // esi
  int *v12; // eax
  int v13; // [esp+0h] [ebp-34h] BYREF
  int v14; // [esp+4h] [ebp-30h] BYREF
  int v15; // [esp+8h] [ebp-2Ch] BYREF
  unsigned char v16[16]; // [esp+Ch] [ebp-28h] BYREF
  void **v17; // [esp+1Ch] [ebp-18h] BYREF
  void *Block; // [esp+20h] [ebp-14h]
  char v19; // [esp+29h] [ebp-Bh]

  Multiplayer::FindStartPositions(&v17); /*0x5ee9d9*/
  v0 = 0; /*0x5ee9e4*/
  v1 = (char *)MEMORY[0xA8B230] + 4480; /*0x5ee9e6*/
  do /*0x5eea04*/
    v16[v0++] = *v1++ != -1; /*0x5ee9f1*/
  while ( v0 < 16 ); /*0x5eea04*/
  v2 = HouseClass_Count; /*0x5eea06*/
  for ( i = 0; i < HouseClass_Count; ++i ) /*0x5eea11*/
  {
    v4 = *(unsigned int *)&HouseClass_Array->__pad_0[4 * i]; /*0x5eea1f*/
    if ( !*(unsigned char *)(*(unsigned int *)(v4 + 52) + 422) && *(unsigned char *)(v4 + 492) ) /*0x5eea33*/
    {
      v5 = 0; /*0x5eea47*/
      v6 = -1; /*0x5eea49*/
      v7 = 0; /*0x5eea4c*/
      v8 = (char *)MEMORY[0xA8B230] + 4480; /*0x5eea4e*/
      do /*0x5eea63*/
      {
        if ( *v8 == i ) /*0x5eea56*/
        {
          v5 = 1; /*0x5eea58*/
          v6 = v7; /*0x5eea5a*/
        }
        ++v7; /*0x5eea5c*/
        ++v8; /*0x5eea5d*/
      }
      while ( v7 < 16 ); /*0x5eea63*/
      if ( v5 ) /*0x5eea67*/
      {
        HouseClass::SetMapSeed((unsigned int *)v4, *((unsigned int *)Block + v6)); /*0x5eead6*/
      }
      else
      {
        Debug::Log(); /*0x5eea73*/
        started = AssignRandomMapStartPositions(&v13, i, (int)&v17, (int)v16, 1); /*0x5eea8d*/
        HouseClass::SetMapSeed((unsigned int *)v4, *started); /*0x5eea97*/
        HouseClass::GetCurrentOption((unsigned int *)v4, &v14); /*0x5eeaa3*/
        HouseClass::GetCurrentOption((unsigned int *)v4, &v15); /*0x5eeab4*/
        Debug::Log(); /*0x5eeac2*/
      }
    }
    v2 = HouseClass_Count; /*0x5eeadb*/
  }
  v10 = 0; /*0x5eeaeb*/
  if ( v2 > 0 ) /*0x5eeaef*/
  {
    do /*0x5eeb7e*/
    {
      v11 = *(unsigned int *)&HouseClass_Array->__pad_0[4 * v10]; /*0x5eeafb*/
      if ( !*(unsigned char *)(*(unsigned int *)(v11 + 52) + 422) && !*(unsigned char *)(v11 + 492) ) /*0x5eeb0b*/
      {
        Debug::Log(); /*0x5eeb1f*/
        v12 = AssignRandomMapStartPositions(&v15, v10, (int)&v17, (int)v16, 0); /*0x5eeb39*/
        HouseClass::SetMapSeed((unsigned int *)v11, *v12); /*0x5eeb43*/
        HouseClass::GetCurrentOption((unsigned int *)v11, &v14); /*0x5eeb4f*/
        HouseClass::GetCurrentOption((unsigned int *)v11, &v13); /*0x5eeb60*/
        Debug::Log(); /*0x5eeb6e*/
      }
      ++v10; /*0x5eeb7b*/
    }
    while ( v10 < HouseClass_Count ); /*0x5eeb7e*/
  }
  v17 = &vt_VectorClass_Cell; /*0x5eeb8b*/
  if ( Block ) /*0x5eeb94*/
  {
    if ( v19 ) /*0x5eeb9c*/
      __3_YAXPAX_Z(Block); /*0x5eeb9f*/
  }

}
}
// 0x740DF0
namespace gamemd {
int HouseClass::SetPrimaryFactory(int a2)
{

  if ( a2 == -1 || *((unsigned int *)this + 435) != -1 ) /*0x740e00*/
    return 0; /*0x740e17*/
  *((unsigned int *)this + 435) = a2; /*0x740e02*/
  (*(void (**)(unsigned int *, int))(*(unsigned int *)this + 292))(this, 2); /*0x740e0c*/
  return 1; /*0x740e14*/

}
}
// 0x429210
namespace gamemd {
int HouseClass::QueryInterface_Helper()
{

  int v2; // [esp+Ch] [ebp+4h]
  const void *v3; // [esp+10h] [ebp+8h]
  unsigned int *v4; // [esp+14h] [ebp+Ch]

  if ( !v4 ) /*0x429218*/
    return -2147467261; /*0x42921b*/
  if ( memcmp(v3, &unk_7F7CA0, 0x10u) && memcmp(v3, &IID_IUnknown, 0x10u) ) /*0x42924a*/
    return -2147467262; /*0x42924f*/
  *v4 = v2; /*0x42925c*/
  (*(void (**)(int))(*(unsigned int *)v2 + 4))(v2); /*0x429261*/
  return 0; /*0x42921a*/

}
} // namespace gamemd

// 0x429270
namespace gamemd {
int HouseClass::QueryInterface_Dispatch()
{

  unsigned int *v1; // eax
  int v3; // ebx
  int v4; // [esp+18h] [ebp+8h]
  const void *v5; // [esp+1Ch] [ebp+Ch]
  unsigned int *v6; // [esp+20h] [ebp+10h]

  v1 = v6; /*0x429270*/
  if ( !v6 ) /*0x42927a*/
    return -2147024809; /*0x429285*/
  *v6 = 0; /*0x42928c*/
  if ( v4 ) /*0x429294*/
    return -2147221232; /*0x42929f*/
  v3 = -2147467262; /*0x4292b4*/
  if ( !memcmp(v5, &unk_7E36C0, 0x10u) || !memcmp(v5, &IID_IUnknown, 0x10u) ) /*0x4292cb*/
  {
    if ( !&unk_89A29C ) /*0x4292d6*/
      return -2147024882; /*0x4292e1*/
    v3 = (*(int (**)(IUnknown *, const void *, unsigned int *))unk_89A29C.field_0)(&unk_89A29C, v5, v6); /*0x4292f3*/
    if ( v3 < 0 ) /*0x4292f7*/
      __3_YAXPAX_Z(&unk_89A29C); /*0x4292fe*/
    v1 = v6; /*0x429306*/
  }
  if ( !memcmp(v5, &unk_7EA6E8, 0x10u) ) /*0x429318*/
  {
    if ( !&MEMORY[0x87F7E8] ) /*0x429323*/
      return -2147024882; /*0x42932e*/
    v3 = ((int (*)(MouseClass **, const void *, unsigned int *))MEMORY[0x87F7E8]->field_0)( /*0x429340*/
           &MEMORY[0x87F7E8],
           v5,
           v1);
    if ( v3 < 0 ) /*0x429344*/
      __3_YAXPAX_Z(&MEMORY[0x87F7E8]); /*0x42934b*/
  }
  return v3; /*0x42927c*/

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

  *(unsigned int *)this = &vt_VersionClass; /*0x4e8279*/
  if ( (a2 & 1) != 0 ) /*0x4e827f*/
    __3_YAXPAX_Z(this); /*0x4e8282*/
  return this; /*0x4e828c*/

}
} // namespace gamemd

// 0x4F28A0
namespace gamemd {
int HouseClass_24::Seek(int a2)
{

  return *(unsigned int *)(*((unsigned int *)this + 1) + 4 * a2); /*0x4f28aa*/

}
} // namespace gamemd

// 0x4F28C0
namespace gamemd {
VectorCursor * HouseClass::vt_placeholder_07(char a2)
{

  *(unsigned int *)this = &vt_VectorCursor_GraphicMenuItem_DynamicVectorClass_GraphicMenuItem; /*0x4f28c9*/
  if ( (a2 & 1) != 0 ) /*0x4f28cf*/
    __3_YAXPAX_Z(this); /*0x4f28d2*/
  return (VectorCursor *)this; /*0x4f28dc*/

}
} // namespace gamemd

// 0x4F28E0
namespace gamemd {
char HouseClass_24::AddRef(int a2)
{

  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = *((char *)this + 2); /*0x4f28e2*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x4f28ed*/
  {
    v3 = 0; /*0x4f28ef*/
    if ( v2 <= 0 ) /*0x4f28f3*/
      return 1; /*0x4f2913*/
    v4 = (unsigned int *)*((char *)this + 1); /*0x4f28f5*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4f28fb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4f2904*/
    {
      ++v3; /*0x4f2906*/
      ++v4; /*0x4f2907*/
      if ( v3 >= v2 ) /*0x4f290c*/
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
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4f292c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x4f2936*/
    if ( a3 ) /*0x4f293c*/
      v4 = a3; /*0x4f2952*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4f294e*/
    *((unsigned char *)this + 12) = 1; /*0x4f2956*/
    if ( v4 ) /*0x4f295a*/
    {
      if ( *((unsigned int *)this + 1) ) /*0x4f2965*/
      {
        v6 = *((unsigned int *)this + 2); /*0x4f296c*/
        if ( a2 < v6 ) /*0x4f2971*/
          v6 = a2; /*0x4f2973*/
        for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x4f2979*/
          ++i; /*0x4f297e*/
        if ( *((unsigned char *)this + 13) ) /*0x4f298b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4f2996*/
          *((unsigned int *)this + 1) = 0; /*0x4f299e*/
        }
      }
      *((unsigned int *)this + 1) = v4; /*0x4f29a7*/
      *((unsigned int *)this + 2) = a2; /*0x4f29af*/
      *((unsigned char *)this + 13) = a3 == 0; /*0x4f29b2*/
      return 1; /*0x4f29b8*/
    }
    else
    {
      return 0; /*0x4f295f*/
    }
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x4f29c2*/
    return 1; /*0x4f29c8*/
  }

}
} // namespace gamemd

// 0x4F29D0
namespace gamemd {
void HouseClass_24::ddtor()
{

  if ( *((unsigned int *)this + 1) && *((unsigned char *)this + 13) ) /*0x4f29dd*/
  {
    __3_YAXPAX_Z(*(void **)((char *)this + 4)); /*0x4f29e3*/
    *((unsigned int *)this + 1) = 0; /*0x4f29eb*/
  }
  *((unsigned char *)this + 13) = 0; /*0x4f29ee*/
  *((unsigned int *)this + 2) = 0; /*0x4f29f1*/

}
} // namespace gamemd

// 0x4F2A00
namespace gamemd {
int HouseClass_24::Read(unsigned int * a2)
{

  int result; // eax
  int v3; // edx
  unsigned int *i; // ecx

  if ( !*((unsigned char *)this + 12) ) /*0x4f2a00*/
    return 0; /*0x4f2a08*/
  v3 = *((unsigned int *)this + 2); /*0x4f2a0e*/
  result = 0; /*0x4f2a11*/
  if ( v3 <= 0 ) /*0x4f2a15*/
    return -1; /*0x4f2a2c*/
  for ( i = *(unsigned int **)((char *)this + 4); *i != *a2; ++i ) /*0x4f2a1b*/
  {
    if ( ++result >= v3 ) /*0x4f2a2a*/
      return -1; /*0x4f2a2a*/
  }
  return result; /*0x4f2a0a*/

}
} // namespace gamemd

// 0x4F2A40
namespace gamemd {
unsigned int HouseClass_24::Write(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x4f2a40*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x4f2a55*/
  else
    return 0; /*0x4f2a47*/

}
} // namespace gamemd

// 0x4F2B40
namespace gamemd {
unsigned int * HouseClass::vt_placeholder_09()
{

  ++*((unsigned int *)this + 2); /*0x4f2b42*/
  return this; /*0x4f2b45*/

}
} // namespace gamemd

// 0x4F2B50
namespace gamemd {
unsigned int * HouseClass::vt_placeholder_10()
{

  --*((unsigned int *)this + 2); /*0x4f2b52*/
  return this; /*0x4f2b55*/

}
} // namespace gamemd

// 0x4F2B60
namespace gamemd {
VectorClass_flat * HouseClass_24::QueryInterface(char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4f2b63*/
  *Block = &vt_VectorClass_GraphicMenuItem; /*0x4f2b66*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x4f2b70*/
  {
    __3_YAXPAX_Z(v3); /*0x4f2b78*/
    *(Block + 1) = 0; /*0x4f2b80*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x4f2b8b*/
  *(Block + 2) = 0; /*0x4f2b91*/
  if ( (a2 & 1) != 0 ) /*0x4f2b98*/
    __3_YAXPAX_Z(Block); /*0x4f2b9b*/
  return (VectorClass *)Block; /*0x4f2ba5*/

}
} // namespace gamemd

// 0x4F6830
namespace gamemd {
int HouseClass::QueryInterface(CCINIClass * aP0, const void * a1, unsigned int * a2)
{

  char *v4; // ecx
  char *v5; // ecx
  int *p_INIClass_field_2C; // ecx

  if ( !a2 ) /*0x4f6836*/
    return -2147467261; /*0x4f6838*/
  *a2 = 0; /*0x4f6859*/
  if ( !memcmp(a1, &IID_IUnknown, 0x10u) ) /*0x4f685f*/
    *a2 = aP0; /*0x4f6863*/
  if ( !memcmp(a1, &IID_IHouse, 0x10u) ) /*0x4f6874*/
  {
    if ( aP0 ) /*0x4f687a*/
      v4 = &aP0->__pad_20[4]; /*0x4f687c*/
    else
      v4 = 0; /*0x4f6881*/
    *a2 = v4; /*0x4f6883*/
  }
  if ( !memcmp(a1, &IID_IPublicHouse, 0x10u) ) /*0x4f6893*/
  {
    if ( aP0 ) /*0x4f6899*/
      v5 = &aP0->__pad_20[8]; /*0x4f689b*/
    else
      v5 = 0; /*0x4f68a0*/
    *a2 = v5; /*0x4f68a2*/
  }
  if ( !memcmp(a1, &unk_7F7CD0, 0x10u) ) /*0x4f68b2*/
  {
    if ( aP0 ) /*0x4f68b8*/
      p_INIClass_field_2C = &aP0->INIClass_field_2C; /*0x4f68ba*/
    else
      p_INIClass_field_2C = 0; /*0x4f68bf*/
    *a2 = p_INIClass_field_2C; /*0x4f68c1*/
  }
  if ( !memcmp(a1, &IID_IPersist, 0x10u) ) /*0x4f68d1*/
    *a2 = aP0; /*0x4f68d6*/
  if ( !memcmp(a1, &IID_IPersistStream, 0x10u) ) /*0x4f68e6*/
    *a2 = aP0; /*0x4f68ed*/
  if ( !*a2 ) /*0x4f68ef*/
    return -2147467262; /*0x4f68f4*/
  (*(void (**)(CCINIClass *))(*(unsigned int *)aP0->__pad_0 + 4))(aP0); /*0x4f68ff*/
  return 0; /*0x4f683d*/

}
} // namespace gamemd

// 0x4F9610
namespace gamemd {
double HouseClass::GiveTiberium_Storage(AbstractClass * aP1, BuildingClass * aP2)
{

  *((unsigned int *)this + 5434) = Math::RoundToInt(*(float *)&aP1 * 5.0 + (double)(int)*((unsigned int *)this + 5434)); /*0x4f9628*/
  *((unsigned int *)this + 195) = Math::RoundToInt( /*0x4f965d*/
                    (double)*(int *)(*(unsigned int *)(*(unsigned int *)&MEMORY[0xB077F8].__pad_579C[9560] + 4 * (unsigned int)aP2) + 184)
                  * *(float *)(*((unsigned int *)this + 13) + 328)
                  * *(float *)&aP1
                  + (double)(int)*((unsigned int *)this + 195));
  return *(float *)&aP1; /*0x4f9664*/

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
  if ( *((unsigned int *)this + 196) ) /*0x4f999a*/
  {
    v6 = Float4::Sum((float *)((char *)this + 764)); /*0x4f99ac*/
    v5 = Math::RoundToInt(v6 / (double)*((int *)this + 196) * 4.0 + 0.5); /*0x4f99c3*/
  }
  if ( v3 != v5 ) /*0x4f99ca*/
  {
    v7 = *((unsigned int *)this + 30); /*0x4f99cc*/
    for ( i = 0; i < v7; ++i ) /*0x4f99d3*/
    {
      v5 = *((unsigned int *)this + 27); /*0x4f99d5*/
      v9 = *(unsigned int *)(v5 + 4 * i); /*0x4f99d8*/
      if ( v9 ) /*0x4f99dd*/
      {
        LOBYTE(v5) = *(unsigned char *)(v9 + 129); /*0x4f99df*/
        if ( !(unsigned char)v5 ) /*0x4f99e7*/
        {
          LOBYTE(v5) = *(unsigned char *)(*(unsigned int *)(v9 + 1312) + 5800); /*0x4f99ef*/
          if ( (unsigned char)v5 ) /*0x4f99f7*/
            LOBYTE(v5) = (*(int (**)(int, int))(*(unsigned int *)v9 + 292))(v9, 2); /*0x4f99fd*/
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

  return HouseClass::HandleAlliance((int)this, *(unsigned int *)&HouseClass_Array->__pad_0[4 * a2], a3); /*0x4f9b67*/

}
} // namespace gamemd

// 0x4FB920
namespace gamemd {
unsigned int * HouseClass::SDDTORAllAndTriggers()
{

  int v1; // esi
  unsigned int *v3; // eax
  unsigned int *v4; // ecx
  unsigned int *result; // eax
  int v6; // esi
  int v7; // ecx

  v1 = 0; /*0x4fb926*/
  if ( MEMORY[0xA8EC88] > 0 ) /*0x4fb92d*/
  {
    v3 = MEMORY[0xA8EC7C]; /*0x4fb92f*/
    do /*0x4fb959*/
    {
      v4 = (unsigned int *)v3[v1]; /*0x4fb934*/
      if ( (unsigned int *)v4[135] == this ) /*0x4fb93d*/
      {
        if ( v4 ) /*0x4fb941*/
        {
          (*(void (**)(unsigned int *, int))(*v4 + 32))(v4, 1); /*0x4fb947*/
          v3 = MEMORY[0xA8EC7C]; /*0x4fb94a*/
        }
        --v1; /*0x4fb94f*/
      }
      ++v1; /*0x4fb956*/
    }
    while ( v1 < MEMORY[0xA8EC88] ); /*0x4fb959*/
  }
  result = (unsigned int *)MEMORY[0xA8EAF8]; /*0x4fb95b*/
  v6 = 0; /*0x4fb960*/
  if ( MEMORY[0xA8EAF8] > 0 ) /*0x4fb964*/
  {
    result = MEMORY[0xA8EAEC]; /*0x4fb966*/
    do /*0x4fb99b*/
    {
      if ( *(unsigned int *)(*(unsigned int *)(result[v6] + 36) + 164) == *((unsigned int *)this + 13) ) /*0x4fb97c*/
      {
        v7 = result[v6]; /*0x4fb97e*/
        if ( v7 ) /*0x4fb983*/
        {
          (*(void (**)(int, int))(*(unsigned int *)v7 + 32))(v7, 1); /*0x4fb989*/
          result = MEMORY[0xA8EAEC]; /*0x4fb98c*/
        }
        --v6; /*0x4fb991*/
      }
      ++v6; /*0x4fb998*/
    }
    while ( v6 < MEMORY[0xA8EAF8] ); /*0x4fb99b*/
  }
  if ( this ) /*0x4fb99f*/
    return (unsigned int *)(*(int (**)(unsigned int *, int))(*(unsigned int *)this + 32))(this, 1); /*0x4fb9a7*/
  return result; /*0x4fb9aa*/

}
} // namespace gamemd

// 0x4FBF60
namespace gamemd {
char HouseClass::DroppedFlag(UnitClass * aP1, int a3)
{

  MouseClass *v3; // edi
  HouseClass *v5; // eax
  void *v6; // eax
  char v7; // bl
  void *v8; // eax
  int productionFactory_plants_capacity; // [esp-8h] [ebp-14h]
  int v11; // [esp-8h] [ebp-14h]
  int v12; // [esp+8h] [ebp-4h] BYREF

  v3 = (MouseClass *)aP1; /*0x4fbf63*/
  if ( !LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (IUnknown *)aP1) ) /*0x4fbf6f*/
    return 0; /*0x4fc055*/
  HouseClass::IsCellOccupied((int)this, (IUnknown *)*((char *)this + 5367), a3); /*0x4fbf8b*/
  v5 = (HouseClass *)*((char *)this + 13); /*0x4fbf92*/
  aP1 = (UnitClass *)v3->field_0; /*0x4fbf95*/
  productionFactory_plants_capacity = v5->productionFactory_plants_capacity; /*0x4fbfa3*/
  v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1); /*0x4fbfaa*/
  v7 = HouseClass::MarkCellBuildable((int)v6, productionFactory_plants_capacity); /*0x4fbfb6*/
  if ( v7 /*0x4fc034*/
    || (a3 = 0,
        aP1 = (UnitClass *)*LayerClass::Pathfinding_Find(
                              &MEMORY[0x87F7E8],
                              0,
                              &v12,
                              (__int16 *)v3,
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
                              (__int16 *)&a3,
                              0,
                              0),
        aP1 != *(UnitClass **)&MEMORY[0xA8D63C].__pad_14B0[1196])
    && (v11 = *(unsigned int *)(*((char *)this + 13) + 184),
        v8 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1),
        (v7 = HouseClass::MarkCellBuildable((int)v8, v11)) != 0) )
  {
    *((char *)this + 5367) = (int)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1); /*0x4fc045*/
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
  HouseClass::IsCellOccupied((int)this, (IUnknown *)*((char *)this + 5367), a3); /*0x4fc084*/
  HouseClass::SetPrimaryFactory(aP1, *(unsigned int *)(*((char *)this + 13) + 184)); /*0x4fc095*/
  *((char *)this + 5367) = (int)aP1; /*0x4fc09a*/
  return 1; /*0x4fc0a0*/

}
} // namespace gamemd

// 0x509130
namespace gamemd {
void HouseClass::AcquiredThreatNode()
{

  *((unsigned char *)this + 507) = 1; /*0x509130*/

}
} // namespace gamemd

// 0x50BD10
namespace gamemd {
char HouseClass::ReshroudMap()
{

  char result; // al

  result = this->__pad_5778[2]; /*0x50bd10*/
  if ( !result ) /*0x50bd18*/
    return ShroudClass::Reset(&MEMORY[0x87F7E8], this); /*0x50bd20*/
  return result; /*0x50bd25*/

}
} // namespace gamemd

// 0x50E1B0
namespace gamemd {
BOOL HouseClass::GainedPoweredCenter(int a2)
{

  return *((unsigned int *)this + 182) > 0; /*0x50e1bd*/

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
char HouseClass::Set()
{

  unsigned short *v2; // eax
  unsigned int *Value; // eax
  int v4; // ecx
  int v6; // [esp+Ch] [ebp-4h] BYREF

  LOBYTE(v2) = (*(int (**)(int))(*((unsigned int *)this + 1) + 16))((char *)this + 4); /*0x54b98b*/
  if ( (unsigned char)v2 ) /*0x54b990*/
  {
    (*(void (**)(unsigned int, unsigned int, int))(**(unsigned int **)((char *)this + 12) + 1348))( /*0x54b9a4*/
      *((unsigned int *)this + 3),
      0,
      1072693248);
    Value = ProgressTimer::GetValue((unsigned short *)(*((unsigned int *)this + 3) + 904), &v6); /*0x54b9b8*/
    FacingClass::Set_SyncLog((char *)((char *)this + 84), Value); /*0x54b9c1*/
    v4 = *((unsigned int *)this + 11); /*0x54b9c6*/
    *((unsigned int *)this + 28) = 0; /*0x54b9cc*/
    *((unsigned int *)this + 30) = 0; /*0x54b9cf*/
    *((unsigned int *)this + 29) = 0; /*0x54b9d2*/
    *((unsigned int *)this + 31) = 0; /*0x54b9d5*/
    *((unsigned int *)this + 32) = v4; /*0x54b9d8*/
    LOBYTE(v2) = HouseClass::IonSensitivesShouldBeOffline(); /*0x54b9e4*/
    if ( !(unsigned char)v2 ) /*0x54b9ec*/
    {
      v2 = (unsigned short *)(*(int (**)(unsigned int, int *))(**(unsigned int **)((char *)this + 12) + 756))(*((unsigned int *)this + 3), &v6); /*0x54b9f8*/
      if ( *v2 == dword_ABC588 && v2[1] == MEMORY[0xABC58A] ) /*0x54ba15*/
        LOBYTE(v2) = GadgetGrid::InsertItem(MEMORY[0x887888], *((unsigned int *)this + 3)); /*0x54ba20*/
      *((unsigned int *)this + 20) = 1; /*0x54ba25*/
    }
  }
  return (char)v2; /*0x54ba2c*/

}
} // namespace gamemd

// 0x6ABC60
namespace gamemd {
int HouseClass::GetStatus(IUnknown * aP1)
{

  int v2; // edx

  if ( this == (IUnknown *)15 || this == (IUnknown *)16 ) /*0x6abc68*/
    return 2; /*0x6abcbf*/
  if ( this == (IUnknown *)1 || this == (IUnknown *)40 || this == (IUnknown *)2 || this == (IUnknown *)3 ) /*0x6abc7c*/
    return 3; /*0x6abcb7*/
  if ( this == (IUnknown *)6 || this == (IUnknown *)7 ) /*0x6abc86*/
    return GetHouseTechLevel((int)this, v2) == 5; /*0x6abcb2*/
  if ( this == (IUnknown *)57 || this == (IUnknown *)32 || this == (IUnknown *)31 ) /*0x6abc95*/
    return 1; /*0x6abc9d*/
  return -1; /*0x6abc9a*/

}
} // namespace gamemd
