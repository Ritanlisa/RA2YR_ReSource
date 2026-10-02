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
      LOBYTE(result) = *(unsigned char *)(v5 + 129); /*0x4adf08*/
      if ( (unsigned char)result ) /*0x4adf10*/
        goto LABEL_16; /*0x4adf10*/
      result = (*(int (**)(unsigned int))(*(unsigned int *)v5 + 44))(*((unsigned int *)dword_A8EC7C + v3)); /*0x4adf1a*/
      if ( result == 6 ) /*0x4adf20*/
      {
        LOBYTE(result) = a1; /*0x4adf22*/
        if ( a1 ) /*0x4adf28*/
          goto LABEL_16; /*0x4adf28*/
      }
      result = ((House*)*(void **)(v5 + 540))->IsHumanPlayer(); /*0x4adf34*/
      if ( (unsigned char)result ) /*0x4adf3b*/
        break; /*0x4adf3b*/
      if ( (*(int (**)(int))(*(unsigned int *)v5 + 44))(v5) == 6 /*0x4adfa5*/
        && HIBYTE((&dword_8871E0)[1][2])
        && (uint8_t)HouseClass::IsAlliedWith(*(void **)(v5 + 540), dword_A83D4C) )
      {
        result = (*(int (**)(int, unsigned int, int, unsigned int, unsigned int))(*(unsigned int *)v5 + 1164))(v5, 0, a2, 0, 0); /*0x4adfb9*/
      }
      else
      {
        result = (*(int (**)(int))(*(unsigned int *)v5 + 132))(v5); /*0x4adfc5*/
        if ( *(unsigned char *)(result + 3281) ) /*0x4adfcb*/
          goto LABEL_15; /*0x4adfd3*/
      }
LABEL_16:
      if ( ++v3 >= v2 ) /*0x4adfe2*/
        return result; /*0x4adfe2*/
    }
    LOBYTE(result) = *(unsigned char *)(v5 + 1051); /*0x4adf3d*/
    if ( !(unsigned char)result ) /*0x4adf45*/
      goto LABEL_16; /*0x4adf45*/
    (*(void (**)(int, unsigned int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)v5 + 1164))(v5, 0, 0, 0, 0); /*0x4adf57*/
    result = (*(int (**)(int))(*(unsigned int *)v5 + 132))(v5); /*0x4adf61*/
    if ( !*(unsigned char *)(result + 3281) ) /*0x4adf67*/
      goto LABEL_16; /*0x4adf6f*/
LABEL_15:
    result = (*(int (**)(int))(*(unsigned int *)v5 + 1048))(v5); /*0x4adfd5*/
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
      && ((*((int (**)(unsigned int))*v4 + 11))(*(unsigned int *)(dword_8A0394 + 4 * i)) != 6 || !a1) )
    {
      if ( (uint8_t)((House*)v4[135])->IsHumanPlayer() ) /*0x4ae033*/
      {
        if ( *((unsigned char *)v4 + 1051) ) /*0x4ae03c*/
          (*((void (**)(void **, unsigned int, int))*v4 + 72))(v4, 0, a2); /*0x4ae04d*/
      }
      else if ( (*((int (**)(void **))*v4 + 11))(v4) == 6 /*0x4ae07d*/
             && HIBYTE((&dword_8871E0)[1][2])
             && (uint8_t)HouseClass::IsAlliedWith(v4[135], dword_A83D4C) )
      {
        (*((void (**)(void **, int, unsigned int))*v4 + 72))(v4, a2, 0); /*0x4ae08d*/
      }
    }
    result = dword_8A03A0; /*0x4ae093*/
  }
  return result; /*0x4ae0a4*/

}
}
// 0x4F54A0
namespace gamemd {
int HouseClass::Construct(int a2)
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

  ((AbstractClass*)(AbstractClass *)this)->Constructor(); /*0x4f54a9*/
  *((char *)this + 12) = -1; /*0x4f54b8*/
  *((char *)this + 13) = a2; /*0x4f54c2*/
  TagClassVector::Construct((TagClassVector *)this + 14, 0, 0); /*0x4f54c5*/
  *((char *)this + 14) = (int)&vt_DynamicVectorClass; /*0x4f54cf*/
  *((char *)this + 19) = 10; /*0x4f54d5*/
  *((char *)this + 18) = 0; /*0x4f54d8*/
  ((VectorClass *)((VectorClass *)this + 5))->BuildingConstructor(0, 0); /*0x4f54e2*/
  *((char *)this + 20) = (int)&vt_DynamicVectorClass; /*0x4f54e7*/
  *((char *)this + 25) = 10; /*0x4f54ed*/
  *((char *)this + 24) = 0; /*0x4f54f0*/
  ((VectorClass *)((VectorClass *)((char *)this + 26)))->BuildingConstructor(0, 0); /*0x4f54fa*/
  *((char *)this + 26) = (int)&vt_DynamicVectorClass; /*0x4f54ff*/
  *((char *)this + 31) = 10; /*0x4f5505*/
  *((char *)this + 30) = 0; /*0x4f5508*/
  ((VectorClass *)((VectorClass *)this + 8))->BuildingConstructor(0, 0); /*0x4f5515*/
  *((char *)this + 32) = (int)&vt_DynamicVectorClass; /*0x4f551a*/
  *((char *)this + 37) = 10; /*0x4f5520*/
  *((char *)this + 36) = 0; /*0x4f5523*/
  ((VectorClass *)((VectorClass *)((char *)this + 38)))->BuildingConstructor(0, 0); /*0x4f5530*/
  *((char *)this + 38) = (int)&vt_DynamicVectorClass; /*0x4f5535*/
  *((char *)this + 43) = 10; /*0x4f553b*/
  *((char *)this + 42) = 0; /*0x4f553e*/
  ((VectorClass *)((VectorClass *)this + 11))->BuildingConstructor(0, 0); /*0x4f554b*/
  *((char *)this + 44) = (int)&vt_DynamicVectorClass; /*0x4f5550*/
  *((char *)this + 49) = 10; /*0x4f5556*/
  *((char *)this + 48) = 0; /*0x4f5559*/
  ((VectorClass *)((VectorClass *)((char *)this + 50)))->BuildingConstructor(0, 0); /*0x4f5566*/
  *((char *)this + 50) = (int)&vt_DynamicVectorClass; /*0x4f556b*/
  *((char *)this + 55) = 10; /*0x4f5571*/
  *((char *)this + 54) = 0; /*0x4f5574*/
  ((VectorClass *)((VectorClass *)this + 14))->BuildingConstructor(0, 0); /*0x4f5581*/
  *((char *)this + 56) = (int)&vt_DynamicVectorClass; /*0x4f5586*/
  *((char *)this + 61) = 10; /*0x4f558c*/
  *((char *)this + 60) = 0; /*0x4f558f*/
  ((VectorClass *)((VectorClass *)((char *)this + 62)))->BuildingConstructor(0, 0); /*0x4f559c*/
  *((char *)this + 62) = (int)&vt_DynamicVectorClass; /*0x4f55a1*/
  *((char *)this + 67) = 10; /*0x4f55a7*/
  *((char *)this + 66) = 0; /*0x4f55aa*/
  ((VectorClass *)((VectorClass *)this + 17))->BuildingConstructor(0, 0); /*0x4f55b7*/
  *((char *)this + 68) = (int)&vt_DynamicVectorClass; /*0x4f55bc*/
  *((char *)this + 73) = 10; /*0x4f55c2*/
  *((char *)this + 72) = 0; /*0x4f55c5*/
  ((VectorClass *)((VectorClass *)((char *)this + 74)))->BuildingConstructor(0, 0); /*0x4f55d2*/
  *((char *)this + 74) = (int)&vt_DynamicVectorClass; /*0x4f55d7*/
  *((char *)this + 79) = 10; /*0x4f55dd*/
  *((char *)this + 78) = 0; /*0x4f55e0*/
  ((VectorClass *)((VectorClass *)this + 20))->BuildingConstructor(0, 0); /*0x4f55ed*/
  *((char *)this + 80) = (int)&vt_DynamicVectorClass; /*0x4f55f2*/
  *((char *)this + 85) = 10; /*0x4f55f8*/
  *((char *)this + 84) = 0; /*0x4f55fb*/
  *((char *)this + 86) = 0; /*0x4f55fe*/
  *((char *)this + 87) = 0; /*0x4f5604*/
  *((char *)this + 88) = 0; /*0x4f5610*/
  *((char *)this + 89) = 0; /*0x4f5617*/
  *((char *)this + 90) = 0; /*0x4f5620*/
  StartingTechnoVector::Construct((StartingTechnoVector *)this + 91, 0, 0); /*0x4f5626*/
  *((char *)this + 91) = (int)&vt_DynamicVectorClass; /*0x4f562b*/
  *((char *)this + 96) = 10; /*0x4f5631*/
  *((char *)this + 95) = 0; /*0x4f5634*/
  *((char *)this + 97) = (int)(&dword_A8B230)[43].vtable1; /*0x4f5648*/
  *((char *)this + 98) = 0; /*0x4f564e*/
  *((char *)this + 99) = 1072693248; /*0x4f5654*/
  *((char *)this + 100) = 0; /*0x4f565a*/
  *((char *)this + 101) = 1072693248; /*0x4f5660*/
  *((char *)this + 102) = 0; /*0x4f5666*/
  *((char *)this + 103) = 1072693248; /*0x4f566c*/
  *((char *)this + 104) = 0; /*0x4f5672*/
  *((char *)this + 105) = 1072693248; /*0x4f5678*/
  *((char *)this + 106) = 0; /*0x4f567e*/
  *((char *)this + 107) = 1072693248; /*0x4f5684*/
  *((char *)this + 108) = 0; /*0x4f568a*/
  *((char *)this + 109) = 1072693248; /*0x4f5690*/
  *((char *)this + 110) = 0; /*0x4f5696*/
  *((char *)this + 111) = 1072693248; /*0x4f569c*/
  *((char *)this + 112) = 0; /*0x4f56a2*/
  *((char *)this + 113) = 0; /*0x4f56a8*/
  *((char *)this + 114) = 0; /*0x4f56ae*/
  *((char *)this + 115) = 0; /*0x4f56b7*/
  *((char *)this + 116) = 0; /*0x4f56bd*/
  *((char *)this + 117) = 1; /*0x4f56c3*/
  *((char *)this + 118) = 0; /*0x4f56cd*/
  *((char *)this + 119) = 0; /*0x4f56d3*/
  *((char *)this + 120) = -1; /*0x4f56d9*/
  *((char *)this + 121) = 0; /*0x4f56df*/
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
  *((char *)this + 128) = 0; /*0x4f574d*/
  *((char *)this + 129) = 0; /*0x4f5753*/
  *((unsigned char *)this + 520) = 0; /*0x4f5759*/
  *((char *)this + 131) = -1; /*0x4f575f*/
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
  *((char *)this + 147) = *((char *)this + 116); /*0x4f57bb*/
  *((char *)this + 148) = 0; /*0x4f57c4*/
  SuperClassVector::Construct((SuperClassVector *)this + 149, 0, 0); /*0x4f57ca*/
  *((char *)this + 149) = (int)&vt_DynamicVectorClass; /*0x4f57cf*/
  *((char *)this + 154) = 10; /*0x4f57d5*/
  *((char *)this + 153) = 0; /*0x4f57d8*/
  *((char *)this + 155) = -1; /*0x4f57de*/
  *((char *)this + 156) = -1; /*0x4f57e4*/
  *((char *)this + 157) = -1; /*0x4f57ea*/
  *((char *)this + 158) = -1; /*0x4f57f0*/
  *((char *)this + 159) = 0; /*0x4f57f6*/
  *((char *)this + 160) = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x4f5802*/
  *((char *)this + 162) = 0; /*0x4f5808*/
  v3 = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x4f580e*/
  *((char *)this + 165) = 0; /*0x4f5814*/
  *((char *)this + 163) = v3; /*0x4f581a*/
  *((char *)this + 166) = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x4f5825*/
  *((char *)this + 168) = 0; /*0x4f582b*/
  v4 = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x4f5831*/
  *((char *)this + 171) = 0; /*0x4f5837*/
  *((char *)this + 169) = v4; /*0x4f583d*/
  *((char *)this + 172) = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x4f5849*/
  *((char *)this + 174) = 0; /*0x4f584f*/
  *((unsigned char *)this + 700) = 0; /*0x4f5855*/
  *((unsigned char *)this + 701) = 0; /*0x4f585b*/
  *((unsigned char *)this + 702) = 0; /*0x4f5861*/
  *((unsigned char *)this + 703) = 0; /*0x4f5867*/
  *((unsigned char *)this + 704) = 0; /*0x4f586d*/
  *((char *)this + 177) = 0; /*0x4f5879*/
  *((char *)this + 178) = 0; /*0x4f587f*/
  *((char *)this + 179) = 0; /*0x4f5885*/
  *((char *)this + 180) = 0; /*0x4f588b*/
  *((char *)this + 181) = 0; /*0x4f5891*/
  *((char *)this + 182) = 0; /*0x4f5897*/
  *((char *)this + 183) = 0; /*0x4f589d*/
  *((char *)this + 184) = 0; /*0x4f58a3*/
  *((char *)this + 185) = 0; /*0x4f58a9*/
  *((char *)this + 186) = 0; /*0x4f58af*/
  *((char *)this + 187) = 0; /*0x4f58b5*/
  *((char *)this + 188) = 0; /*0x4f58bb*/
  *((char *)this + 189) = 0; /*0x4f58c1*/
  *((char *)this + 190) = 0; /*0x4f58c7*/
  Delegate::GetField((HWND)((Delegate *)((char *)this + 191))); /*0x4f58cd*/
  *((char *)this + 195) = 0; /*0x4f58d8*/
  *((char *)this + 196) = 0; /*0x4f58de*/
  Delegate::GetField((HWND)((Delegate *)((char *)this + 197))); /*0x4f58e4*/
  ((HouseClass *)((HouseClass *)((char *)this + 202)))->ClearStatArray(); /*0x4f58ef*/
  ((HouseClass *)((HouseClass *)((char *)this + 716)))->ClearStatArray(); /*0x4f58fa*/
  ((HouseClass *)((HouseClass *)((char *)this + 1230)))->ClearStatArray(); /*0x4f5905*/
  ((HouseClass *)((HouseClass *)((char *)this + 1744)))->ClearStatArray(); /*0x4f5910*/
  ((HouseClass *)((HouseClass *)((char *)this + 2258)))->ClearStatArray(); /*0x4f591b*/
  ((HouseClass *)((HouseClass *)((char *)this + 2772)))->ClearStatArray(); /*0x4f5926*/
  ((HouseClass *)((HouseClass *)((char *)this + 3286)))->ClearStatArray(); /*0x4f5931*/
  ((HouseClass *)((HouseClass *)((char *)this + 3800)))->ClearStatArray(); /*0x4f593c*/
  ((HouseClass *)((HouseClass *)((char *)this + 4314)))->ClearStatArray(); /*0x4f5947*/
  ((HouseClass *)((HouseClass *)((char *)this + 4828)))->ClearStatArray(); /*0x4f5952*/
  *((char *)this + 5342) = 0; /*0x4f595c*/
  *((char *)this + 5343) = 0; /*0x4f5962*/
  *((char *)this + 5344) = 0; /*0x4f5968*/
  *((char *)this + 5345) = 0; /*0x4f596e*/
  *((char *)this + 5346) = 0; /*0x4f5974*/
  *((char *)this + 5347) = 0; /*0x4f597a*/
  *((char *)this + 5348) = 1065353216; /*0x4f5980*/
  *((char *)this + 5349) = 1065353216; /*0x4f5986*/
  *((char *)this + 5350) = 1065353216; /*0x4f598c*/
  *((char *)this + 5351) = 1065353216; /*0x4f5992*/
  *((char *)this + 5352) = 1065353216; /*0x4f5998*/
  *((char *)this + 5353) = 0; /*0x4f599e*/
  *((char *)this + 5354) = 0; /*0x4f59a4*/
  *((char *)this + 5355) = 0; /*0x4f59aa*/
  *((char *)this + 5356) = 0; /*0x4f59b0*/
  *((char *)this + 5357) = 0; /*0x4f59b6*/
  *((char *)this + 5358) = 0; /*0x4f59bc*/
  *((char *)this + 5359) = 0; /*0x4f59c2*/
  *((char *)this + 5360) = 0; /*0x4f59c8*/
  *((char *)this + 5361) = 0; /*0x4f59ce*/
  *((char *)this + 5362) = 0; /*0x4f59d4*/
  *((char *)this + 5363) = 0; /*0x4f59da*/
  *((unsigned char *)this + 21456) = 0; /*0x4f59e0*/
  *((unsigned char *)this + 21457) = 0; /*0x4f59e6*/
  *((unsigned char *)this + 21458) = 0; /*0x4f59ec*/
  *((unsigned char *)this + 21459) = 0; /*0x4f59f2*/
  *((unsigned char *)this + 21460) = 0; /*0x4f59f8*/
  *((unsigned char *)this + 21461) = 0; /*0x4f59fe*/
  *((unsigned char *)this + 21462) = 0; /*0x4f5a04*/
  *((unsigned char *)this + 21463) = 0; /*0x4f5a0a*/
  *((unsigned char *)this + 21464) = 0; /*0x4f5a10*/
  *((char *)this + 5367) = 0; /*0x4f5a16*/
  *((unsigned short *)this + 10736) = 0; /*0x4f5a1c*/
  *((unsigned short *)this + 10737) = 0; /*0x4f5a23*/
  *((char *)this + 5389) = 0; /*0x4f5a2a*/
  *((char *)this + 5410) = 0; /*0x4f5a30*/
  *((char *)this + 5411) = -1; /*0x4f5a36*/
  *((char *)this + 5412) = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 948); /*0x4f5a41*/
  *((char *)this + 5413) = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 948); /*0x4f5a4d*/
  *((char *)this + 5414) = 0; /*0x4f5a53*/
  *((char *)this + 5430) = 0; /*0x4f5a59*/
  *((char *)this + 5431) = -1; /*0x4f5a5f*/
  *((char *)this + 5432) = 0; /*0x4f5a65*/
  *((char *)this + 5433) = 0; /*0x4f5a6b*/
  *((char *)this + 5434) = 0; /*0x4f5a71*/
  *((char *)this + 5435) = 1; /*0x4f5a77*/
  *((unsigned short *)this + 10872) = 0; /*0x4f5a81*/
  *((unsigned short *)this + 10873) = 0; /*0x4f5a88*/
  *((unsigned short *)this + 10874) = 0; /*0x4f5a8f*/
  *((unsigned short *)this + 10875) = 0; /*0x4f5a96*/
  *((unsigned short *)this + 10876) = 0; /*0x4f5a9d*/
  *((unsigned short *)this + 10877) = 0; /*0x4f5aa4*/
  *((char *)this + 5439) = -100; /*0x4f5ab1*/
  CounterClass::Construct((int)(CounterClass *)this + 2720); /*0x4f5abb*/
  CounterClass::Construct((int)(CounterClass *)((char *)this + 5445)); /*0x4f5ac6*/
  CounterClass::Construct((int)(CounterClass *)this + 2725); /*0x4f5ad1*/
  CounterClass::Construct((int)(CounterClass *)((char *)this + 5455)); /*0x4f5adc*/
  CounterClass::Construct((int)(CounterClass *)this + 2730); /*0x4f5ae7*/
  CounterClass::Construct((int)(CounterClass *)((char *)this + 5465)); /*0x4f5af2*/
  CounterClass::Construct((int)(CounterClass *)this + 2735); /*0x4f5afd*/
  CounterClass::Construct((int)(CounterClass *)((char *)this + 5475)); /*0x4f5b08*/
  CounterClass::Construct((int)(CounterClass *)this + 2740); /*0x4f5b13*/
  CounterClass::Construct((int)(CounterClass *)((char *)this + 5485)); /*0x4f5b1e*/
  CounterClass::Construct((int)(CounterClass *)this + 2745); /*0x4f5b29*/
  CounterClass::Construct((int)(CounterClass *)((char *)this + 5495)); /*0x4f5b34*/
  *((char *)this + 5500) = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x4f5b40*/
  *((char *)this + 5502) = 0; /*0x4f5b46*/
  *((char *)this + 5503) = 0; /*0x4f5b4c*/
  *((char *)this + 5504) = -1; /*0x4f5b59*/
  AngerVector::Construct((AngerVector *)this + 5505, 0, 0); /*0x4f5b5f*/
  *((char *)this + 5505) = (int)&vt_DynamicVectorClass; /*0x4f5b6c*/
  *((char *)this + 5510) = 10; /*0x4f5b76*/
  *((char *)this + 5509) = 0; /*0x4f5b7c*/
  ScoutVector::Construct((ScoutVector *)this + 5511, 0, 0); /*0x4f5b82*/
  *((char *)this + 5511) = (int)&vt_DynamicVectorClass; /*0x4f5b87*/
  *((char *)this + 5516) = 10; /*0x4f5b91*/
  *((char *)this + 5515) = 0; /*0x4f5b97*/
  *((char *)this + 5517) = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x4f5ba2*/
  *((char *)this + 5519) = 0; /*0x4f5ba8*/
  v5 = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x4f5bae*/
  *((char *)this + 5522) = 0; /*0x4f5bb4*/
  *((char *)this + 5520) = v5; /*0x4f5bba*/
  *((char *)this + 5523) = -1; /*0x4f5bc0*/
  *((char *)this + 5524) = -1; /*0x4f5bc6*/
  *((char *)this + 5525) = -1; /*0x4f5bcc*/
  *((char *)this + 5526) = -1; /*0x4f5bd2*/
  *((char *)this + 5527) = 100; /*0x4f5bdd*/
  *((char *)this + 5528) = 75; /*0x4f5be7*/
  *((char *)this + 5529) = 75; /*0x4f5bed*/
  *((char *)this + 5530) = 75; /*0x4f5bf3*/
  *((char *)this + 5531) = 0; /*0x4f5bf9*/
  v6 = (HouseClass *)((char *)this + 5532); /*0x4f5bff*/
  v61 = 3; /*0x4f5c05*/
  do /*0x4f5c20*/
  {
    HouseClass::initDropshipData(v6); /*0x4f5c0f*/
    v6 = (HouseClass *)((char *)v6 + 44); /*0x4f5c18*/
    --v61; /*0x4f5c1c*/
  }
  while ( v61 ); /*0x4f5c20*/
  *((char *)this + 5565) = 0; /*0x4f5c22*/
  *((unsigned char *)this + 22264) = 0; /*0x4f5c28*/
  *((unsigned char *)this + 22265) = 0; /*0x4f5c30*/
  *((unsigned char *)this + 22266) = 0; /*0x4f5c36*/
  *((unsigned char *)this + 22267) = 0; /*0x4f5c3c*/
  *((unsigned char *)this + 22268) = -1; /*0x4f5c48*/
  *((unsigned char *)this + 22269) = -1; /*0x4f5c4e*/
  *((unsigned char *)this + 22270) = -1; /*0x4f5c54*/
  BaseClass::Constructor((BaseClass *)((char *)this + 5568)); /*0x4f5c5a*/
  *((unsigned char *)this + 22392) = 1; /*0x4f5c5f*/
  *((unsigned char *)this + 22393) = 1; /*0x4f5c66*/
  *((unsigned char *)this + 22394) = 0; /*0x4f5c6d*/
  *((unsigned char *)this + 22395) = 0; /*0x4f5c73*/
  *((char *)this + 5599) = 0; /*0x4f5c79*/
  *((unsigned short *)this + 11200) = 0; /*0x4f5c7f*/
  *((unsigned short *)this + 11201) = 0; /*0x4f5c86*/
  *((unsigned short *)this + 11202) = 0; /*0x4f5c8d*/
  *((unsigned short *)this + 11203) = 0; /*0x4f5c94*/
  *((char *)this + 5602) = 0; /*0x4f5c9b*/
  LOWORD(v7) = Math::RoundToInt(*(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5808) * 900.0); /*0x4f5cb3*/
  v8 = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x4f5cb8*/
  *((char *)this + 5605) = v7; /*0x4f5cbe*/
  *((char *)this + 5603) = v8; /*0x4f5cc4*/
  *((char *)this + 5606) = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x4f5cd5*/
  *((char *)this + 5608) = 1; /*0x4f5cdb*/
  *((char *)this + 5609) = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x4f5ce7*/
  *((char *)this + 5611) = 0; /*0x4f5ced*/
  v9 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x4f5cf3*/
  *((char *)this + 5614) = 1; /*0x4f5cf9*/
  *((char *)this + 5612) = v9; /*0x4f5cff*/
  *((char *)this + 5615) = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x4f5d0b*/
  *((char *)this + 5617) = 1; /*0x4f5d11*/
  v10 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x4f5d17*/
  *((char *)this + 5620) = 1; /*0x4f5d1d*/
  *((char *)this + 5618) = v10; /*0x4f5d23*/
  *((char *)this + 5621) = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x4f5d2f*/
  *((char *)this + 5623) = 1; /*0x4f5d35*/
  *((char *)this + 5624) = 0; /*0x4f5d3b*/
  *((unsigned char *)this + 90100) = 0; /*0x4f5d41*/
  *((unsigned char *)this + 90121) = 0; /*0x4f5d4d*/
  *((char *)this + 22549) = 0; /*0x4f5d54*/
  *((char *)this + 22552) = 0; /*0x4f5d5d*/
  ConnectionPointVector::Construct((ConnectionPointVector *)this + 22553, 0, 0); /*0x4f5d63*/
  *((char *)this + 22553) = (int)&vt_DynamicVectorClass; /*0x4f5d68*/
  *((char *)this + 22558) = 10; /*0x4f5d6e*/
  *((char *)this + 22557) = 0; /*0x4f5d71*/
  *((char *)this + 22559) = 0; /*0x4f5d74*/
  *((char *)this + 22560) = 0; /*0x4f5d7a*/
  *((char *)this + 22562) = 0; /*0x4f5d85*/
  *((char *)this + 22563) = 1072693248; /*0x4f5d8b*/
  *((char *)this + 22564) = 0; /*0x4f5d91*/
  *((char *)this + 22565) = 1072693248; /*0x4f5d97*/
  *((char *)this + 22567) = 1051260355; /*0x4f5da2*/
  *((char *)this + 22568) = 1051260355; /*0x4f5da8*/
  *((char *)this + 22569) = 1051260355; /*0x4f5dae*/
  *((char *)this + 22570) = 0; /*0x4f5db4*/
  *((char *)this + 22571) = 0; /*0x4f5dba*/
  *((char *)this + 22572) = 0; /*0x4f5dc0*/
  *((char *)this + 22573) = 0; /*0x4f5dc6*/
  *this = (int)&vt_HouseClass; /*0x4f5dcc*/
  *((char *)this + 1) = (int)&vt_HouseClass; /*0x4f5dd3*/
  *((char *)this + 2) = (int)&vt_HouseClass; /*0x4f5dda*/
  *((char *)this + 3) = (int)&vt_HouseClass; /*0x4f5de1*/
  *((char *)this + 9) = (int)&vt_HouseClass; /*0x4f5de8*/
  *((char *)this + 10) = (int)&vt_HouseClass; /*0x4f5def*/
  *((char *)this + 11) = (int)&vt_HouseClass; /*0x4f5dfb*/
  if ( &g_INI_DefaultBuffer ) /*0x4f5e04*/
  {
    strncpy(Destination,(const char *)(&g_INI_DefaultBuffer), 0x1Fu); /*0x4f5e18*/
    Destination[31] = 0; /*0x4f5e20*/
  }
  else
  {
    Destination[0] = 0; /*0x4f5e06*/
  }
  if ( Destination != (char *)this + 90121 ) /*0x4f5e30*/
    qmemcpy((char *)this + 90121, Destination, 0x20u); /*0x4f5e41*/
  *((unsigned short *)this + 45077) = 0; /*0x4f5e46*/
  AbstractClass::GenerateUniqueID((int)((AbstractClass *)((char *)this + 1))); /*0x4f5e4e*/
  v11 = *((char *)this + 13); /*0x4f5e53*/
  if ( v11 ) /*0x4f5e58*/
    *((char *)this + 22549) = *(unsigned int *)(v11 + 192); /*0x4f5e60*/
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x4f5e99*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
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
    && (*(uint8_t (**)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.Buildup[0] + 8))(
         g_BuildingLoadQueue_Array.Buildup,
         g_BuildingLoadQueue_Array.HalfDamageSmokeLocation1[2] + g_BuildingLoadQueue_Array.BuildCat[0],
         0) )
  {
    v13 = g_BuildingLoadQueue_Array.HalfDamageSmokeLocation1[1]++; /*0x4f5ef9*/
    *(unsigned int *)(*(unsigned int *)&g_BuildingLoadQueue_Array.BuildupLoaded + 4 * v13) = this; /*0x4f5f08*/
  }
  if ( *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 7)) < *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 5)) /*0x4f5f3f*/
    || (BYTE1(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 6))) || !((unsigned int *)&g_BuildingLoadQueue_Array)[5])
    && (int)((char *)&g_BuildingLoadQueue_Array) > 0
    && (*(uint8_t (**)(int *, char *, unsigned int))(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 3)) + 8))(
         (int *)&(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 3),
         (char *)((char *)&g_BuildingLoadQueue_Array) + *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 5)),
         0) )
  {
    v14 = *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 7))++; /*0x4f5f4c*/
    *(unsigned int *)(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 4)) + 4 * v14) = (unsigned int)(this); /*0x4f5f5b*/
  }
  if ( *(int *)&(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 32) < *(int *)&(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 24) /*0x4f5f92*/
    || (*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 29)) || !*(unsigned int *)&(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 24))
    && *(int *)&(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 36) > 0
    && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 16) + 8))(
         (char *)&(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 16),
         *(unsigned int *)&(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 36) + *(unsigned int *)&(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 24),
         0) )
  {
    v15 = (*(unsigned int *)&(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 32))++; /*0x4f5f9f*/
    *(unsigned int *)(*(unsigned int *)&(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 20) + 4 * v15) = this; /*0x4f5fae*/
  }
  if ( g_BuildingLoadQueue_Array.Foundation[0] < g_BuildingLoadQueue_Array.ExtraPowerBonus /*0x4f5fe5*/
    || (BYTE1(g_BuildingLoadQueue_Array.ExtraPowerDrain) || !g_BuildingLoadQueue_Array.ExtraPowerBonus)
    && g_BuildingLoadQueue_Array.Height > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.PowerBonus + 8))(
         &g_BuildingLoadQueue_Array.PowerBonus,
         g_BuildingLoadQueue_Array.ExtraPowerBonus + g_BuildingLoadQueue_Array.Height,
         0) )
  {
    v16 = g_BuildingLoadQueue_Array.Foundation[0]++; /*0x4f5ff2*/
    *(unsigned int *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v16) = this; /*0x4f6001*/
  }
  *((char *)this + 12) = ((char *)&stru_A80220); /*0x4f6010*/
  if ( a2 ) /*0x4f6013*/
  {
    v62 = 0; /*0x4f601e*/
    if ( ((char *)&stru_A80220) > 0 ) /*0x4f6024*/
    {
      LOBYTE(v66) = 0; /*0x4f602a*/
      Destination[4] = 0; /*0x4f602e*/
      do /*0x4f6196*/
      {
        v17 = *((unsigned int *)((char *)&stru_A80220) + v62); /*0x4f603b*/
        v18 = *(unsigned int *)(v17 + 22028); /*0x4f603e*/
        v19 = *(unsigned int *)(v17 + 22036); /*0x4f6044*/
        v20 = v17 + 22020; /*0x4f604a*/
        if ( v19 < v18 /*0x4f606c*/
          || (*(unsigned char *)(v20 + 13) || !v18)
          && (v21 = *(unsigned int *)(v20 + 20), v21 > 0)
          && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)v20 + 8))(v20, v21 + v18, 0) )
        {
          v22 = *(unsigned int *)(v20 + 16); /*0x4f6073*/
          v23 = *(unsigned int *)(v20 + 4); /*0x4f6076*/
          *(unsigned int *)(v20 + 16) = v22 + 1; /*0x4f607c*/
          *(unsigned int *)(v23 + 8 * v22) = this; /*0x4f607f*/
          *(unsigned int *)(v23 + 8 * v22 + 4) = 0; /*0x4f6084*/
        }
        v24 = *((unsigned int *)((char *)&stru_A80220) + v62); /*0x4f6097*/
        v25 = *((char *)this + 5507); /*0x4f609a*/
        if ( *((char *)this + 5509) < v25 /*0x4f60bc*/
          || (*((unsigned char *)this + 22033) || !v25)
          && (v26 = *((char *)this + 5510), v26 > 0)
          && (*(uint8_t (**)(int *, int, unsigned int))(*((char *)this + 5505) + 8))((char *)this + 5505, v26 + v25, 0) )
        {
          v27 = *((char *)this + 5509); /*0x4f60c3*/
          v28 = *((char *)this + 5506); /*0x4f60c6*/
          *((char *)this + 5509) = v27 + 1; /*0x4f60cc*/
          *(unsigned int *)(v28 + 8 * v27) = v24; /*0x4f60cf*/
          *(unsigned int *)(v28 + 8 * v27 + 4) = 0; /*0x4f60d4*/
        }
        v29 = *((unsigned int *)((char *)&stru_A80220) + v62); /*0x4f60e1*/
        v30 = *(unsigned int *)(v29 + 22052); /*0x4f60e4*/
        v31 = *(unsigned int *)(v29 + 22060); /*0x4f60ea*/
        v32 = v29 + 22044; /*0x4f60f0*/
        if ( v31 < v30 /*0x4f6112*/
          || (*(unsigned char *)(v32 + 13) || !v30)
          && (v33 = *(unsigned int *)(v32 + 20), v33 > 0)
          && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)v32 + 8))(v32, v33 + v30, 0) )
        {
          v34 = *(unsigned int *)(v32 + 16); /*0x4f6119*/
          v35 = *(unsigned int *)(v32 + 4); /*0x4f611c*/
          *(unsigned int *)(v32 + 16) = v34 + 1; /*0x4f6122*/
          v36 = v66; /*0x4f6125*/
          *(unsigned int *)(v35 + 8 * v34) = this; /*0x4f6129*/
          *(unsigned int *)(v35 + 8 * v34 + 4) = v36; /*0x4f612c*/
        }
        v37 = *((unsigned int *)((char *)&stru_A80220) + v62); /*0x4f6145*/
        v38 = *((char *)this + 5513); /*0x4f6148*/
        if ( *((char *)this + 5515) < v38 /*0x4f6167*/
          || (*((unsigned char *)this + 22057) || !v38)
          && (v39 = *((char *)this + 5516), v39 > 0)
          && (*(uint8_t (**)(int *, int, unsigned int))(*((char *)this + 5511) + 8))((char *)this + 5511, v39 + v38, 0) )
        {
          v40 = *((char *)this + 5515); /*0x4f616e*/
          v41 = *((char *)this + 5512); /*0x4f6171*/
          *((char *)this + 5515) = v40 + 1; /*0x4f6177*/
          v42 = *(unsigned int *)&Destination[4]; /*0x4f617a*/
          *(unsigned int *)(v41 + 8 * v40) = v37; /*0x4f617e*/
          *(unsigned int *)(v41 + 8 * v40 + 4) = v42; /*0x4f6181*/
        }
        ++v62; /*0x4f6192*/
      }
      while ( v62 < ((char *)&stru_A80220) ); /*0x4f6196*/
    }
  }
  if ( ((char *)&stru_A80220) < ((char *)&stru_A80220) /*0x4f61d0*/
    || (BYTE1(((char *)&stru_A80220)) || !((char *)&stru_A80220))
    && ((char *)&stru_A80220) > 0
    && (*((uint8_t (**)(void **, int, unsigned int))((char *)&stru_A80220) + 2))(
         &((char *)&stru_A80220),
         ((char *)&stru_A80220) + ((char *)&stru_A80220),
         0) )
  {
    v43 = ((char *)&stru_A80220)++; /*0x4f61dd*/
    *((unsigned int *)((char *)&stru_A80220) + v43) = this; /*0x4f61ec*/
  }
  v63 = 0; /*0x4f61fc*/
  memset((char *)this + 5625, 0, 0x10810u); /*0x4f6200*/
  if ( dword_A8E340 > 0 ) /*0x4f6208*/
  {
    do /*0x4f6290*/
    {
      v44 = __2_YAPAXI_Z(0x80u); /*0x4f6213*/
      if ( v44 ) /*0x4f621d*/
        v45 = SuperClass::Construct(v44, *((unsigned int *)dword_A8E334 + v63), (int)this); /*0x4f6235*/
      else
        v45 = 0; /*0x4f6239*/
      v46 = *((char *)this + 151); /*0x4f623b*/
      if ( *((char *)this + 153) < v46 /*0x4f6269*/
        || (*((unsigned char *)this + 609) || !v46)
        && (v47 = *((char *)this + 154), v47 > 0)
        && (*(uint8_t (**)(int *, int, unsigned int))(*((char *)this + 149) + 8))((char *)this + 149, v47 + v46, 0) )
      {
        v48 = *((char *)this + 153); /*0x4f6270*/
        v49 = *((char *)this + 150); /*0x4f6273*/
        *((char *)this + 153) = v48 + 1; /*0x4f6279*/
        *(unsigned int *)(v49 + 4 * v48) = v45; /*0x4f627c*/
      }
      ++v63; /*0x4f628c*/
    }
    while ( v63 < dword_A8E340 ); /*0x4f6290*/
  }
  v50 = a2; /*0x4f6296*/
  memset((char *)this + 5369, 0, 0x50u); /*0x4f62a7*/
  memset((char *)this + 5390, 0, 0x50u); /*0x4f62b6*/
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
    if ( Destination != (char *)((char *)this + 22525) ) /*0x4f62e7*/
    {
      qmemcpy((char *)this + 22525, Destination, 0x14u); /*0x4f62f8*/
      *((unsigned char *)this + 90120) = Destination[20]; /*0x4f62fa*/
    }
    v50 = a2; /*0x4f62fb*/
    wcscpy((wchar_t *)this + 45077, *(const wchar_t **)(a2 + 96)); /*0x4f630a*/
  }
  memset((char *)this + 5625, 0, 0x10810u); /*0x4f6324*/
  *((char *)this + 118) |= 1 << *((char *)this + 12); /*0x4f633d*/
  v68 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 450, 1800); /*0x4f635a*/
  LOWORD(v51) = Math::RoundToInt((double)v68 * *(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4264)); /*0x4f6368*/
  *((char *)this + 5500) = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x4f6373*/
  *((char *)this + 5501) = *(unsigned int *)&Destination[4]; /*0x4f637d*/
  *((char *)this + 5502) = v51; /*0x4f6383*/
  *((char *)this + 5503) = v51; /*0x4f6389*/
  HouseClass::InitStatArray((HouseClass *)((char *)this + 202), dword_A8B228); /*0x4f639c*/
  HouseClass::InitStatArray((HouseClass *)((char *)this + 716), dword_A8E358); /*0x4f63ad*/
  HouseClass::InitStatArray((HouseClass *)((char *)this + 1230), dword_A83CF0); /*0x4f63bf*/
  HouseClass::InitStatArray((HouseClass *)((char *)this + 1744), dword_A83C78); /*0x4f63d1*/
  HouseClass::InitStatArray((HouseClass *)((char *)this + 2258), dword_A8B228); /*0x4f63e2*/
  HouseClass::InitStatArray((HouseClass *)((char *)this + 2772), dword_A8E358); /*0x4f63f4*/
  HouseClass::InitStatArray((HouseClass *)((char *)this + 3286), dword_A83CF0); /*0x4f6406*/
  HouseClass::InitStatArray((HouseClass *)((char *)this + 3800), dword_A83C78); /*0x4f6417*/
  HouseClass::InitStatArray((HouseClass *)((char *)this + 4314), dword_A83C78); /*0x4f6429*/
  HouseClass::InitStatArray((HouseClass *)((char *)this + 4828), 19); /*0x4f6436*/
  memset((char *)this + 132, 0, 0x30u); /*0x4f644a*/
  if ( v50 ) /*0x4f644c*/
    *((unsigned char *)this + 507) = 1; /*0x4f644e*/
  *((char *)this + 122) = -1; /*0x4f6455*/
  v52 = *((char *)this + 13); /*0x4f645f*/
  if ( v52 ) /*0x4f6464*/
  {
    v53 = *(unsigned int *)(v52 + 188); /*0x4f6466*/
    if ( v53 ) /*0x4f646e*/
    {
      if ( v53 == 1 ) /*0x4f647b*/
      {
        *((char *)this + 122) = 1; /*0x4f647d*/
      }
      else if ( v53 == 2 ) /*0x4f6488*/
      {
        *((char *)this + 122) = 2; /*0x4f648a*/
      }
    }
    else
    {
      *((char *)this + 122) = 0; /*0x4f6470*/
    }
  }
  v64 = 0; /*0x4f6494*/
  HouseClass::QueryInterface((HouseClass *)this, &IID_IUnknown, &v64); /*0x4f649f*/
  v54 = (ConnectionPointClass *)__2_YAPAXI_Z(0x34u); /*0x4f64a6*/
  if ( v54 ) /*0x4f64b0*/
    v55 = ConnectionPointClass::Construct(v54, dword_7E9550, v64); /*0x4f64be*/
  else
    v55 = 0; /*0x4f64c5*/
  *((char *)this + 22559) = (int)v55; /*0x4f64cb*/
  (*(void (**)(unsigned int *, void *, int *))*v55)(v55, &unk_7F7CC0, &v65); /*0x4f64da*/
  v56 = *((char *)this + 22555); /*0x4f64dc*/
  if ( *((char *)this + 22557) < v56 /*0x4f650a*/
    || (*((unsigned char *)this + 90225) || !v56)
    && (v57 = *((char *)this + 22558), v57 > 0)
    && (*(uint8_t (**)(int *, int, unsigned int))(*((char *)this + 22553) + 8))((char *)this + 22553, v57 + v56, 0) )
  {
    v58 = *((char *)this + 22557); /*0x4f6511*/
    v59 = *((char *)this + 22554); /*0x4f6514*/
    *((char *)this + 22557) = v58 + 1; /*0x4f651a*/
    *(unsigned int *)(v59 + 4 * v58) = v65; /*0x4f6521*/
  }
  (*(void (**)(int))(*(unsigned int *)v64 + 8))(v64); /*0x4f652b*/
  return (int)this; /*0x4f652e*/

}

// 0x4F9A50
namespace gamemd {
int HouseClass::IsAlliedWith()
{

  int result; // eax
  int relatedTagsCount; // ecx
  HouseClass *other; // [esp+4h] [ebp+4h]

  result = (int)aP1; /*0x4f9a50*/
  if ( !other ) /*0x4f9a58*/
    goto LABEL_8; /*0x4f9a58*/
  if ( other == aP1 ) /*0x4f9a5c*/
  {
    LOBYTE(result) = 1; /*0x4f9a5e*/
    return result; /*0x4f9a60*/
  }
  relatedTagsCount = other->relatedTagsCount; /*0x4f9a63*/
  if ( relatedTagsCount == *(unsigned int *)(result + 48) ) /*0x4f9a6b*/
  {
    LOBYTE(result) = 1; /*0x4f9a6d*/
    return result; /*0x4f9a6f*/
  }
  if ( relatedTagsCount == -1 ) /*0x4f9a75*/
LABEL_8:
    LOBYTE(result) = 0; /*0x4f9a8a*/
  else
    LOBYTE(result) = ((1 << relatedTagsCount) & *(unsigned int *)(result + 22408)) != 0; /*0x4f9a84*/
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
  int16_t v9[2]; // [esp+Ch] [ebp-10h] BYREF
  unsigned char v10[12]; // [esp+10h] [ebp-Ch] BYREF
  int v11; // [esp+20h] [ebp+4h]

  v4 = 0; /*0x4fbe49*/
  if ( !aP1 ) /*0x4fbe50*/
  {
    LOBYTE(result) = 0; /*0x4fbf50*/
    return result; /*0x4fbf50*/
  }
  if ( (*(int (**)(int))(*(unsigned int *)aP1 + 44))(aP1) == 1 ) /*0x4fbe60*/
  {
    v4 = HouseClass::ClearPrimaryFactory((unsigned int *)aP1); /*0x4fbe69*/
    if ( !v4 || *((char *)this + 5367) != aP1 ) /*0x4fbe79*/
      goto LABEL_10; /*0x4fbe79*/
  }
  else
  {
    v7 = (unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)aP1 + 72))(aP1, v10); /*0x4fbe8a*/
    LOWORD(v11) = *v7 / 256; /*0x4fbe9d*/
    HIWORD(v11) = v7[1] / 256; /*0x4fbeb5*/
    *(unsigned int *)v9 = v11; /*0x4fbebe*/
    result = ((LayerClass *)(&dword_87F7E8))->CoordinatesLegal(v9); /*0x4fbec8*/
    if ( !(unsigned char)result ) /*0x4fbecf*/
      goto LABEL_10; /*0x4fbecf*/
    v8 = ((CellCoord *)(&dword_87F7E8))->To_CellObj(v9); /*0x4fbedb*/
    v4 = HouseClass::checkAutoProduction(v8); /*0x4fbee7*/
    if ( !v4 || *((char *)this + 5367) != aP1 ) /*0x4fbef3*/
      goto LABEL_10; /*0x4fbef3*/
  }
  *((char *)this + 5367) = 0; /*0x4fbef5*/
LABEL_10:
  if ( a3 ) /*0x4fbf05*/
  {
    if ( *((char *)this + 5368) != dword_A8EF98 ) /*0x4fbf1b*/
    {
      *((unsigned int *)((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)this + 10736) + 17) = -1; /*0x4fbf35*/
      result = dword_A8EF98; /*0x4fbf3c*/
      *((char *)this + 5368) = dword_A8EF98; /*0x4fbf41*/
    }
  }
  LOBYTE(result) = v4; /*0x4fbf44*/
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

  LOBYTE(PriorityTarget) = *((unsigned int *)((char *)&stru_A8EB00 + 164)); /*0x4fc791*/
  v2 = 0; /*0x4fc799*/
  v3 = 0; /*0x4fc79b*/
  while ( v2 < *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 164) ) /*0x4fc7a1*/
  {
    v5 = *(unsigned int *)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 152) + 4 * v2); /*0x4fc7a9*/
    PriorityTarget = (HouseClass *)ObjectClass::GetPriorityTarget((ObjectClass *)v5); /*0x4fc7ae*/
    if ( PriorityTarget != this /*0x4fc7cf*/
      || (PriorityTarget = (HouseClass *)(*(int (**)(int))(*(unsigned int *)v5 + 44))(v5),
          PriorityTarget != (HouseClass *)6)
      || (LOBYTE(PriorityTarget) = *(unsigned char *)(v5 + 129), (unsigned char)PriorityTarget)
      || v5 == v3 )
    {
      ++v2; /*0x4fc810*/
    }
    else
    {
      v8 = *(unsigned int *)(v5 + 108); /*0x4fc7d4*/
      v6 = *(TriggerClass **)(v5 + 632); /*0x4fc7d8*/
      if ( v6 ) /*0x4fc7e0*/
        TriggerClass::UnlinkTags(v6); /*0x4fc7e2*/
      LOBYTE(PriorityTarget) = (*(int (**)(int, int *, unsigned int, unsigned int, unsigned int, int, int, unsigned int))(*(unsigned int *)v5 + 364))( /*0x4fc806*/
                                 v5,
                                 &v8,
                                 0,
                                 *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
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

  LOBYTE(PriorityTarget) = *((unsigned int *)((char *)&stru_A8EB00 + 164)); /*0x4fc821*/
  v2 = 0; /*0x4fc829*/
  v3 = 0; /*0x4fc82b*/
  while ( v2 < *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 164) ) /*0x4fc831*/
  {
    v5 = *(unsigned int *)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 152) + 4 * v2); /*0x4fc83d*/
    PriorityTarget = ObjectClass::GetPriorityTarget((ObjectClass *)v5); /*0x4fc842*/
    if ( (HouseClass *)PriorityTarget != this /*0x4fc877*/
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
      v6 = *(TriggerClass **)(v5 + 632); /*0x4fc880*/
      if ( v6 ) /*0x4fc888*/
        TriggerClass::UnlinkTags(v6); /*0x4fc88a*/
      LOBYTE(PriorityTarget) = (*(int (**)(int, int *, unsigned int, unsigned int, unsigned int, int, int, unsigned int))(*(unsigned int *)v5 + 364))( /*0x4fc8ae*/
                                 v5,
                                 &v8,
                                 0,
                                 *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
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

  LOBYTE(PriorityTarget) = *((unsigned int *)((char *)&stru_A8EB00 + 164)); /*0x4fc8d1*/
  v2 = 0; /*0x4fc8d9*/
  v3 = 0; /*0x4fc8db*/
  while ( v2 < *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 164) ) /*0x4fc8e1*/
  {
    v5 = *(unsigned int *)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 152) + 4 * v2); /*0x4fc8ed*/
    PriorityTarget = ObjectClass::GetPriorityTarget((ObjectClass *)v5); /*0x4fc8f2*/
    if ( (HouseClass *)PriorityTarget != this /*0x4fc927*/
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
      v6 = *(TriggerClass **)(v5 + 632); /*0x4fc930*/
      if ( v6 ) /*0x4fc938*/
        TriggerClass::UnlinkTags(v6); /*0x4fc93a*/
      LOBYTE(PriorityTarget) = (*(int (**)(int, int *, unsigned int, unsigned int, unsigned int, int, int, unsigned int))(*(unsigned int *)v5 + 364))( /*0x4fc95e*/
                                 v5,
                                 &v8,
                                 0,
                                 *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
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
  int v8; // ebx
  int v9; // eax
  int v10; // eax

  if ( aP1 ) /*0x50154a*/
  {
    if ( aP1 == this ) /*0x50154e*/
      return 0; /*0x50154e*/
    v3 = *(unsigned int *)(aP1 + 48); /*0x501550*/
    if ( v3 == *((unsigned int *)this + 12) || v3 != -1 && (*((unsigned int *)this + 5602) & (1 << v3)) != 0 ) /*0x501573*/
      return 0; /*0x501576*/
  }
  if ( *(unsigned int *)(*(unsigned int *)(aP1 + 52) + 188) == HouseTypeClass::Find(g_INI_Key_Civilian) && dword_A8B238[0] ) /*0x501598*/
    return 0; /*0x50159b*/
  if ( dword_A8E7AC ) /*0x5015a8*/
    return 1; /*0x5015ab*/
  if ( *((unsigned char *)this + 501) ) /*0x5015b1*/
    return 0; /*0x5015bc*/
  v5 = 0; /*0x5015c8*/
  v6 = 0; /*0x5015ca*/
  if ( dword_A80238 > 0 ) /*0x5015ce*/
  {
    v7 = dword_A8022C; /*0x5015d0*/
    v8 = dword_A80238; /*0x5015d7*/
    do /*0x50162c*/
    {
      v9 = *(unsigned int *)v7->AbstractClass; /*0x5015d9*/
      if ( !*(unsigned char *)(*(unsigned int *)v7->vtable1 + 501) && !*(unsigned char *)(*(unsigned int *)(v9 + 52) + 422) ) /*0x5015e8*/
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
      --v8; /*0x50162b*/
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

  int result; // eax
  char v2; // bl
  int nextArrayIndex; // ecx
  int i; // ebp
  unsigned int v5; // esi
  int j; // edi
  char v7; // cl

  result = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x501640*/
  v2 = *(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5301); /*0x50164d*/
  if ( dword_A8B23C /*0x501662*/
    && (result = (*((int (**)(ObjectClass *))dword_A8B23C->vtable1 + 1))(dword_A8B23C), (unsigned char)result)
    || v2 )
  {
    result = (int)dword_A8B230; /*0x501668*/
    if ( !LOBYTE(dword_A8B230[127].vtable1) ) /*0x50166d*/
    {
      nextArrayIndex = ((char *)&stru_A80220); /*0x50167b*/
      for ( i = 0; i < nextArrayIndex; ++i ) /*0x501685*/
      {
        v5 = *((unsigned int *)((char *)&stru_A80220) + i); /*0x501695*/
        if ( v5 ) /*0x50169a*/
        {
          LOBYTE(result) = *(unsigned char *)(v5 + 501); /*0x5016a0*/
          if ( !(unsigned char)result ) /*0x5016a8*/
          {
            result = *(unsigned int *)&dword_A8B238; /*0x5016ae*/
            LOBYTE(result) = *(unsigned char *)(v5 + 492); /*0x5016b5*/
            if ( !*(unsigned int *)&dword_A8B238 ) /*0x5016bb*/
              LOBYTE(result) = (unsigned char)result || *(unsigned char *)(v5 + 493); /*0x5016cf*/
            if ( !(unsigned char)result ) /*0x5016d3*/
            {
              *(unsigned char *)(v5 + 586) = 1; /*0x5016d5*/
              nextArrayIndex = ((char *)&stru_A80220); /*0x5016db*/
              for ( j = 0; j < ((char *)&stru_A80220); ++j ) /*0x5016e5*/
              {
                result = *((unsigned int *)((char *)&stru_A80220) + j); /*0x5016ec*/
                if ( result && !*(unsigned char *)(result + 501) ) /*0x5016f3*/
                {
                  v7 = *(unsigned char *)(result + 492); /*0x501705*/
                  if ( !*(unsigned int *)&dword_A8B238 ) /*0x50170b*/
                    v7 = v7 || *(unsigned char *)(result + 493); /*0x50171f*/
                  if ( v7 ) /*0x501728*/
                    LOBYTE(result) = ((HouseClass *)(v5))->SetAlliance((HouseClass *)result, 0); /*0x50172a*/
                  else
                    result = ((HouseClass *)((int *)v5))->HandleAlliance(result, 0); /*0x501731*/
                }
                nextArrayIndex = ((char *)&stru_A80220); /*0x501736*/
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
  int ... [68169 chars total]
}

} // namespace gamemd

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
  if ( *(int *)(a1 + 1608) > 0 ) /*0x505379*/
  {
    do /*0x505395*/
    {
      result = *(unsigned int *)(*(unsigned int *)(a1 + 1596) + 4 * v11); /*0x505395*/
      if ( result < 0 ) /*0x50539a*/
      {
        HarvesterUnit = 0; /*0x5053cb*/
        switch ( result ) /*0x5053d2*/
        {
          case -6: /*0x5053d2*/
            HarvesterUnit = (int *)&((unsigned int *)dword_8871E0)[0] + 1; /*0x505423*/
            break; /*0x505423*/
          case -5: /*0x5053d2*/
            HarvesterUnit = &((unsigned int *)dword_8871E0)[3]; /*0x505415*/
            break; /*0x50541b*/
          case -4: /*0x5053d2*/
            HarvesterUnit = &dword_8871E0->InfantryBaseMult[2]; /*0x505407*/
            break; /*0x50540d*/
          case -3: /*0x5053d2*/
            HarvesterUnit = ((unsigned int *)dword_8871E0)[0]; /*0x5053fa*/
            break; /*0x505400*/
          case -2: /*0x5053d2*/
            HarvesterUnit = &((unsigned int *)dword_8871E0)[2]; /*0x5053ec*/
            break; /*0x5053f2*/
          case -1: /*0x5053d2*/
            HarvesterUnit = (int *)&dword_8871E0->CHRONOSK_SHP; /*0x5053de*/
            break; /*0x5053e4*/
          default:
            break;
        }
        result = HarvesterUnit[4]; /*0x505429*/
        v7 = 0; /*0x50542c*/
        if ( result <= 0 ) /*0x505430*/
        {
LABEL_24:
          LOBYTE(result) = 0; /*0x505475*/
          return result; /*0x50547c*/
        }
        while ( 1 ) /*0x505437*/
        {
          v8 = (*(int (**)(int *, int))(*HarvesterUnit + 24))(HarvesterUnit, v7); /*0x505437*/
          v9 = 0; /*0x50543a*/
          if ( aP2 > 0 ) /*0x50543e*/
            break; /*0x50543e*/
LABEL_20:
          result = HarvesterUnit[4]; /*0x50544f*/
          if ( ++v7 >= result ) /*0x505455*/
            goto LABEL_24; /*0x505455*/
        }
        v10 = *(unsigned int **)(aP1 + 4); /*0x505440*/
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
        result = *(unsigned int *)(aP1 + 4); /*0x5053af*/
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
    while ( result < *(unsigned int *)(a1 + 1608) ); /*0x505395*/
  }
  LOBYTE(result) = 1; /*0x50547f*/
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
  int16_t v13; // ax
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
  int16_t v25; // cx
  int16_t v26; // ax
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
        v11 = (int16_t)(*v10 - *(unsigned short *)(_EBP + 22352)); /*0x507023*/
        v12 = (int16_t)(v10[1] - *(unsigned short *)(_EBP + 22354)); /*0x507026*/
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
          && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)v17 + 8))(
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
  ((VectorClass *)(&v126))->BuildingTypeConstructor(0, 0); /*0x5072ae*/
  v42 = *(unsigned int *)(_EBP + 120); /*0x5072b3*/
  v43 = 0; /*0x5072b6*/
  v126.vtable0 = &vt_DynamicVectorClass; /*0x5072ba*/
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
        if ( (*((uint8_t (**)(VectorClass *, int, unsigned int))v126.vtable0 + 2))( /*0x507333*/
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
//L-fix       fild [esp+164h+var_154]
//L-fix       fstp [esp+164h+var_148]
//L-fix       fild [esp+164h+var_C0]
//L-fix       fdiv [esp+164h+var_148]
//L-fix       fild [esp+164h+var_144]
//L-fix       fdiv [esp+164h+var_148]
//L-fix       fild [esp+164h+var_150]
//L-fix       fdiv [esp+164h+var_148]
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
//L-fix     fstp [esp+16Ch+var_144]
//L-fix     fld dword ptr [ebp+1609Ch]
//L-fix     fsub st, st(2)
//L-fix     fstp [esp+16Ch+var_148]
//L-fix     fld dword ptr [ebp+160A4h]
//L-fix     fsub st, st(1)
//L-fix     fstp [esp+16Ch+var_150]
//L-fix     fstp st
//L-fix     fstp st
//L-fix     fstp st
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
    ((VectorClass *)(&v119))->CellConstructor(0, 0); /*0x50782f*/
    v119.vtable0 = &vt_DynamicVectorClass; /*0x507838*/
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
        && (*((uint8_t (**)(VectorClass *, int, unsigned int))v119.vtable0 + 2))(
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
    v119.vtable0 = &vt_VectorClass; /*0x5079d2*/
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
  v126.vtable0 = &vt_VectorClass; /*0x507606*/
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
  v6 = *(unsigned int *)(v4 + 21416); /*0x508c3f*/
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
  *(unsigned char *)(v4 + 22392) = 0; /*0x508c79*/
  *(unsigned int *)(v4 + 21412) = 0; /*0x508c7f*/
  *(unsigned int *)(v4 + 21416) = 0; /*0x508c85*/
  v8 = 0; /*0x508c8f*/
  v18 = 0; /*0x508c93*/
  v22 = *(unsigned int *)(v4 + 120); /*0x508c97*/
  if ( v22 > 0 ) /*0x508c9b*/
  {
    v16 = v3; /*0x508ca1*/
    do /*0x508ca5*/
    {
      v9 = *(BuildingClass **)(*(unsigned int *)(v4 + 108) + 4 * v8); /*0x508ca5*/
      if ( v9 && !((unsigned int *)v9)[0] && ((unsigned int *)v9)[0] ) /*0x508cb8*/
      {
        if ( *(unsigned int *)&dword_A8B238 ) /*0x508cc5*/
        {
          if ( (Object *)v4 != dword_A83D4C ) /*0x508ce4*/
            goto LABEL_19; /*0x508ce4*/
        }
        else if ( !*(unsigned char *)(v4 + 492) && !*(unsigned char *)(v4 + 493) ) /*0x508cd5*/
        {
LABEL_19:
          *(unsigned int *)(v4 + 21412) += BuildingClass::GetPowerOutput(v16, a2); /*0x508cf2*/
          *(unsigned int *)(v4 + 21416) += BuildingClass::GetPowerDrain(v9); /*0x508d18*/
          if ( (uint8_t)ObjectClass::HasLocation((ObjectClass *)v9) /*0x508d30*/
            && BuildingClass::GetPowerOutput(v16, a2) > 0 )
          {
            v18 = 1; /*0x508d32*/
          }
          goto LABEL_22; /*0x508d32*/
        }
        if ( ((unsigned int *)v9)[0] || *(unsigned int *)&dword_A8B238 ) /*0x508cf0*/
          goto LABEL_19; /*0x508cf0*/
      }
LABEL_22:
      ++v8; /*0x508d37*/
    }
    while ( v8 < v22 ); /*0x508ca5*/
  }
  *(unsigned char *)(v4 + 22395) = v18; /*0x508d45*/
  v10 = *(unsigned int *)(v4 + 676); /*0x508d50*/
  v11 = *(unsigned int *)(v4 + 684); /*0x508d56*/
  if ( v10 != -1 ) /*0x508d5f*/
  {
    if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v10 >= v11 ) /*0x508d6b*/
      goto LABEL_27; /*0x508d6b*/
    v11 -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v10; /*0x508d6d*/
  }
  if ( v11 ) /*0x508d71*/
  {
LABEL_28:
    *(unsigned int *)(v4 + 21412) = 0; /*0x508d79*/
    goto LABEL_29; /*0x508d79*/
  }
LABEL_27:
  if ( v18 ) /*0x508d77*/
    goto LABEL_28; /*0x508d77*/
LABEL_29:
  nullsub_5(v17); /*0x508d7f*/
  HouseClass::UpdateTeamProductionSpeed((HouseClass *)v4); /*0x508d88*/
  v12 = *(unsigned int *)(v4 + 21412); /*0x508d8d*/
  v13 = *(unsigned int *)(v4 + 21416); /*0x508d93*/
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
    result = ((SuperWeapon *)((SuperWeapon *)v4))->UpdateSuperWeaponsOwnedHouseClass(); /*0x508ddb*/
  *(unsigned char *)(v4 + 22393) = 1; /*0x508de0*/
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

  BYTE1(this->HouseClass_field_timer_B[2]) = 0; /*0x508df0*/
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
      LOBYTE(result) = HouseClass::updateAlliedStatus((HouseClass *)&dword_87F7E8); /*0x508f2f*/
      if ( (unsigned char)result != v10 ) /*0x508f43*/
        HouseClass::SetRadarVisibility((int)&dword_87F7E8, v10); /*0x508f4f*/
      return result; /*0x508f4f*/
    }
LABEL_6:
    if ( LOBYTE(dword_A8B230[374].vtable3) ) /*0x508e3c*/
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
          && !(*(uint8_t (**)(unsigned int))(*(unsigned int *)v9 + 468))(*absorbersCount) )
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

  LOBYTE(lastBuiltInfantryType) = this->currentPlayer; /*0x5098fe*/
  if ( !*(unsigned int *)&dword_A8B238 ) /*0x509904*/
    LOBYTE(lastBuiltInfantryType) = (unsigned char)lastBuiltInfantryType || this->playerControl; /*0x509918*/
  if ( !(unsigned char)lastBuiltInfantryType )
  {
    lastBuiltInfantryType = this->lastBuiltInfantryType; /*0x509922*/
    for ( i = 0; i < lastBuiltInfantryType; ++i )
    {
      v4 = *(unsigned int *)(this->supersCount + 4 * i); /*0x509939*/
      if ( v4 && *(unsigned char *)(v4 + 111) )
      {
        switch ( *(unsigned int *)(*(unsigned int *)(v4 + 40) + 180) )
        {
          case 0:
            v12 = *(unsigned int *)(this->supersCount + 4 * i); /*0x509968*/
            if ( this->enemyHouseIndex != -1 )
            {
              v5 = LOWORD(this->preferredTargetCell[0]) == *(unsigned short *)&(unsigned int *)((char *)&stru_A8EB00 + 948); /*0x509980*/
              v11 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 948); /*0x509987*/
              if ( v5 && HIWORD(this->preferredTargetCell[0]) == *(unsigned short *)&(unsigned int *)((char *)&stru_A8EB00 + 950) )
              {
                v7 = this->preferredTargetType == 1
                   ? HouseClass::FindSWBuilding(this, &v13)
                   : HouseClass::FindSWTarget(this, &v14, this->preferredTargetType);
                v6 = *v7; /*0x5099cb*/
              }
              else
              {
                v6 = this->preferredTargetCell[0]; /*0x50999d*/
              }
              v11 = v6; /*0x5099d4*/
              if ( v6 != *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 948) ) /*0x5099d8*/
                goto LABEL_33; /*0x5099d8*/
            }
            break; /*0x5099d8*/
          case 2:
            HouseClass::Fire_LightningStorm((int)this, *(unsigned int *)(this->supersCount + 4 * i)); /*0x509a0d*/
            break; /*0x509a12*/
          case 5:
          case 6:
          case 8:
          case 0xB:
            HouseClass::Fire_ParaDrop(this, *(unsigned int *)(this->supersCount + 4 * i)); /*0x509a34*/
            break; /*0x509a39*/
          case 7:
            HouseClass::Fire_PsyDom((int)this, *(unsigned int *)(this->supersCount + 4 * i)); /*0x509a1a*/
            break; /*0x509a1f*/
          case 9:
            HouseClass::Fire_GenMutator((int)this, *(unsigned int *)(this->supersCount + 4 * i)); /*0x509a27*/
            break; /*0x509a2c*/
          case 0xA:
            v5 = LOWORD(this->preferredDefensiveCell2[0]) == *(unsigned short *)&(unsigned int *)((char *)&stru_A8EB00 + 948); /*0x509a4b*/
            v12 = *(unsigned int *)(this->supersCount + 4 * i); /*0x509a52*/
            v11 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 948); /*0x509a56*/
            if ( !v5 || HIWORD(this->preferredDefensiveCell2[0]) != *(unsigned short *)&(unsigned int *)((char *)&stru_A8EB00 + 950) ) /*0x509a63*/
            {
              v8 = this->preferredDefensiveCell2[0]; /*0x509a65*/
              goto LABEL_32; /*0x509a6b*/
            }
            if ( (LOWORD(this->preferredDefensiveCell[0]) != *(unsigned short *)&(unsigned int *)((char *)&stru_A8EB00 + 948) /*0x509a99*/
               || HIWORD(this->preferredDefensiveCell[0]) != *(unsigned short *)&(unsigned int *)((char *)&stru_A8EB00 + 950))
              && *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 3808)
               + this->preferredDefensiveCellStartTime > *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) )
            {
              v8 = this->preferredDefensiveCell[0]; /*0x509a9b*/
LABEL_32:
              v11 = v8; /*0x509aa1*/
              if ( v8 != *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 948) ) /*0x509aa8*/
              {
LABEL_33:
                v9 = (*(int (**)(int *, int *))(this->supers[0] + 16))(this->supers, &v12); /*0x509aca*/
                ((SuperWeapon *)((SuperWeapon *)this))->FireSuperWeaponHouseClass(v9, (int)&v11); /*0x509acd*/
              }
              break; /*0x509acd*/
            }
            break; /*0x509acd*/
          default:
            break;
        }
      }
      lastBuiltInfantryType = this->lastBuiltInfantryType; /*0x509ad2*/
    }
  }
  return lastBuiltInfantryType; /*0x509ae2*/

}
}
// 0x50BC90
namespace gamemd {
int HouseClass::CreatePowerOutage(int a2)
{

  wchar_t *v2; // eax
  int v4; // [esp+8h] [ebp-8h]

  v2 = dword_A8ED84; /*0x50bc90*/
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

  v2 = dword_A8ED84; /*0x50bcd0*/
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
      v10 = (Cell *)((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj(v7 + 2); /*0x50d35e*/
      v11 = ((Cell *)(v10))->IsBridge(); /*0x50d365*/
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
        v16 = ((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj(v9); /*0x50d3e3*/
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
      v8 = *(int16_t **)(*(unsigned int *)(v5 + 368) + 4 * result); /*0x50d468*/
      v9 = *(unsigned int *)v8; /*0x50d46b*/
      switch ( (*(int (**)(unsigned int, unsigned int *, int, void **))(**(unsigned int **)v8 + 44))(
                 *(unsigned int *)v8,
                 a3,
                 a4,
                 a2) )
      {
        case 3:
        case 7:
        case 40:
          v10 = (*(int (**)(int, int))(*(unsigned int *)v9 + 140))(v9, v5); /*0x50d491*/
          if ( v10 ) /*0x50d499*/
            goto LABEL_9; /*0x50d499*/
          v7 = 0; /*0x50d49b*/
          break; /*0x50d49d*/
        case 16:
          v10 = (*(int (**)(int, int))(*(unsigned int *)v9 + 140))(v9, v5); /*0x50d4a4*/
          if ( v10 )
LABEL_9:
            v7 = (*(unsigned char *)(v10 + 20) & 1) != 0 ? v10 : 0;
          else
            v7 = 0; /*0x50d4ae*/
          break; /*0x50d4b0*/
        default:
          break;
      }
      v11 = ((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj(v8 + 2); /*0x50d4c0*/
      a2 = &retaddr; /*0x50d4d4*/
      v12 = (unsigned int *)(*(int (**)(void *))(*(unsigned int *)v11 + 72))(v11); /*0x50d4d7*/
      a4 = 0; /*0x50d4dc*/
      v17[0] = *v12; /*0x50d4de*/
      v17[1] = v12[1]; /*0x50d4e5*/
      a3 = v17; /*0x50d4f0*/
      v17[2] = v12[2]; /*0x50d4f1*/
      if ( !(*(uint8_t (**)(int))(*(unsigned int *)v7 + 1168))(v7) ) /*0x50d4f9*/
        (*(void (**)(int))(*(unsigned int *)v7 + 248))(v7); /*0x50d507*/
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

  return *(unsigned int *)&this->__pad_13C[40] * *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 52); /*0x50d9ef*/

}
}
// 0x50D9F0
namespace gamemd {
int HouseClass::GetUnitSelfHealStep()
{

  return *(unsigned int *)&this->__pad_13C[44] * *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 60); /*0x50d9ff*/

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

  v3 = *((unsigned int *)this + 182) - 1; /*0x50e0eb*/
  *((unsigned int *)this + 182) = v3; /*0x50e0ec*/
  if ( !v3 ) /*0x50e0f2*/
  {
    if ( a2 ) /*0x50e0fe*/
    {
      v4 = 0; /*0x50e109*/
      v5 = dword_A8EC88 - 1; /*0x50e10b*/
      if ( dword_A8EC88 - 1 >= 0 ) /*0x50e110*/
      {
        do /*0x50e14c*/
        {
          v6 = *((unsigned int *)dword_A8EC7C + v5); /*0x50e11d*/
          if ( *(unsigned int *)(v6 + 540) == this /*0x50e138*/
            && (*(int (**)(unsigned int))(*(unsigned int *)v6 + 132))(*((unsigned int *)dword_A8EC7C + v5)) == a2
            && !*(unsigned char *)(v6 + 129) )
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
            if ( (void *)this != dword_A83D4C ) /*0x50e186*/
              return; /*0x50e186*/
            goto LABEL_16; /*0x50e186*/
          }
          if ( *((unsigned char *)this + 492) || *((unsigned char *)this + 493) ) /*0x50e16f*/
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
int HouseClass::GetCameoTypeIndex(int a2)
{

  unsigned int *v2; // eax
  int v3; // ecx

  v2 = (unsigned int *)(*((int (**)(HouseClass *))this->vtable1 + 39))(this); /*0x5471b2*/
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
  UnitTypeVector::Construct2((UnitTypeVector *)&v30.InfantryTypeVector_field_0x18, 0, 0); /*0x5d7111*/
  v30.InfantryTypeVector_field_0x18 = (int)&vt_DynamicVectorClass; /*0x5d711c*/
  v34 = 10; /*0x5d7124*/
  v33 = 0; /*0x5d712c*/
  InfantryTypeVector::ConstructFromData(&v30, 0, 0); /*0x5d7130*/
  InfantryTypeVector_field_0x14 = 10; /*0x5d7139*/
  *(unsigned int *)v30.__pad_0 = &vt_DynamicVectorClass; /*0x5d713e*/
  v30.InfantryTypeVector_field_0x14 = 10; /*0x5d7146*/
  v4 = *((unsigned int *)aP0 + 13); /*0x5d714a*/
  v30.InfantryTypeVector_field_0x10 = 0; /*0x5d714d*/
  v5 = 1 << *(unsigned int *)(v4 + 180); /*0x5d7161*/
  if ( dword_A83CF0 <= 0 ) /*0x5d7165*/
    goto LABEL_20; /*0x5d7165*/
  v6 = v31; /*0x5d716b*/
  do /*0x5d7210*/
  {
    v7 = *((unsigned int *)dword_A83CE4 + v2); /*0x5d7175*/
    if ( *(unsigned char *)(v7 + 1749) /*0x5d719e*/
      && (v5 & *(unsigned int *)(v7 + 1740)) != 0
      && *(unsigned int *)(v7 + 1588) <= *((unsigned int *)aP0 + 117) )
    {
      v8 = 0; /*0x5d71a6*/
      v9 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2864); /*0x5d71a8*/
      if ( v9 <= 0 ) /*0x5d71b0*/
      {
LABEL_11:
        if ( v33 < v6 ) /*0x5d71c8*/
          goto LABEL_16; /*0x5d71c8*/
        if ( (v32 || !v6) && v34 > 0 ) /*0x5d71dc*/
        {
          if ( (*(uint8_t (**)(int *, int, unsigned int))(v30.InfantryTypeVector_field_0x18 + 8))( /*0x5d71eb*/
                 &v30.InfantryTypeVector_field_0x18,
                 v34 + v6,
                 0) )
          {
LABEL_16:
            v11 = v33++; /*0x5d71f2*/
            *(unsigned int *)(v30.InfantryTypeVector_field_0x1C + 4 * v11) = v7; /*0x5d7201*/
          }
          v6 = v31; /*0x5d7204*/
        }
      }
      else
      {
        v10 = *(unsigned int **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2852); /*0x5d71b2*/
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
  InfantryTypeVector_field_0x14 = v30.InfantryTypeVector_field_0x14; /*0x5d7216*/
LABEL_20:
  v12 = 0; /*0x5d721a*/
  if ( dword_A8E358 > 0 ) /*0x5d7223*/
  {
    InfantryTypeVector_field_0x08 = v30.InfantryTypeVector_field_0x08; /*0x5d7229*/
    while ( 1 ) /*0x5d7239*/
    {
      v14 = *((unsigned int *)dword_A8E34C + v12); /*0x5d7239*/
      if ( *(unsigned char *)(v14 + 1749) /*0x5d725e*/
        && (v5 & *(unsigned int *)(v14 + 1740)) != 0
        && *(unsigned int *)(v14 + 1588) <= *((unsigned int *)aP0 + 117) )
      {
        if ( v30.InfantryTypeVector_field_0x10 < InfantryTypeVector_field_0x08 ) /*0x5d7264*/
          goto LABEL_31; /*0x5d7264*/
        if ( (BYTE1(v30.InfantryTypeVector_field_0x0C) || !InfantryTypeVector_field_0x08) /*0x5d7274*/
          && InfantryTypeVector_field_0x14 > 0 )
        {
          break; /*0x5d7274*/
        }
      }
LABEL_33:
      if ( ++v12 >= dword_A8E358 ) /*0x5d72a9*/
        goto LABEL_34; /*0x5d72a9*/
      InfantryTypeVector_field_0x14 = v30.InfantryTypeVector_field_0x14; /*0x5d722f*/
    }
    if ( (*(uint8_t (**)(InfantryTypeVector *, int, unsigned int))(*(unsigned int *)v30.__pad_0 + 8))( /*0x5d7283*/
           &v30,
           InfantryTypeVector_field_0x14 + InfantryTypeVector_field_0x08,
           0) )
    {
LABEL_31:
      v15 = v30.InfantryTypeVector_field_0x10++; /*0x5d728a*/
      *(unsigned int *)(v30.InfantryTypeVector_field_0x04 + 4 * v15) = v14; /*0x5d7299*/
    }
    InfantryTypeVector_field_0x08 = v30.InfantryTypeVector_field_0x08; /*0x5d729c*/
    goto LABEL_33; /*0x5d729c*/
  }
LABEL_34:
  v16 = v33; /*0x5d72ab*/
  if ( v33 || v30.InfantryTypeVector_field_0x10 ) /*0x5d72b9*/
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
          InfantryTypeVector_field_0x1C = v30.InfantryTypeVector_field_0x1C; /*0x5d7364*/
        }
        else
        {
          v20 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v30.InfantryTypeVector_field_0x10 - 1); /*0x5d737e*/
          InfantryTypeVector_field_0x1C = v30.InfantryTypeVector_field_0x04; /*0x5d7383*/
        }
        v22 = *(unsigned int *)(InfantryTypeVector_field_0x1C + 4 * v20); /*0x5d7387*/
        v23 = (void **)(*(int (**)(int, MultiplayerGameMode *))(*(unsigned int *)v22 + 140))(v22, aP0); /*0x5d7393*/
        v24 = (int *)__RTDynamicCast( /*0x5d73b4*/
                       v23,
                       0,
                       0,
                       0,
                       0);
        CurrentOption = (int16_t *)HouseClass::GetCurrentOption((HouseClass *)aP0, &v29); /*0x5d73bb*/
        if ( FindInfantryDeployPosition(v24, CurrentOption, 4) ) /*0x5d73c4*/
        {
          v27 = (*(int (**)(int))(*(unsigned int *)v22 + 172))(v22); /*0x5d73e5*/
          v26 = a1; /*0x5d73eb*/
          *a1 -= v27; /*0x5d73f3*/
          if ( ((int)dword_A8B230->vtable1 & 0x200) != 0 ) /*0x5d7400*/
            Timer::SetFlag((Timer *)(v24 + 84), 1); /*0x5d740a*/
          if ( (uint8_t)((House *)((House *)aP0))->IsCurrentPlayer() ) /*0x5d7411*/
            (*(void (**)(int *, int))(*v24 + 496))(v24, 5); /*0x5d7420*/
          else
            (*(void (**)(int *, int))(*v24 + 496))(v24, 11); /*0x5d742e*/
        }
        else
        {
          if ( v24 ) /*0x5d73cf*/
            (*(void (**)(int *, int))(*v24 + 32))(v24, 1); /*0x5d73d7*/
          v26 = a1; /*0x5d73da*/
          --v18; /*0x5d73de*/
        }
        v19 = *v26; /*0x5d7434*/
        if ( *v26 <= 0 ) /*0x5d7438*/
          break; /*0x5d7438*/
        v16 = v33; /*0x5d732b*/
      }
    }
    *(unsigned int *)v30.__pad_0 = &vt_VectorClass; /*0x5d7446*/
    if ( v30.InfantryTypeVector_field_0x04 && BYTE1(v30.InfantryTypeVector_field_0x0C) ) /*0x5d7456*/
    {
      __3_YAXPAX_Z((void *)v30.InfantryTypeVector_field_0x04); /*0x5d7459*/
      v30.InfantryTypeVector_field_0x04 = 0; /*0x5d7461*/
    }
    BYTE1(v30.InfantryTypeVector_field_0x0C) = 0; /*0x5d7469*/
    v30.InfantryTypeVector_field_0x08 = 0; /*0x5d7470*/
    v30.InfantryTypeVector_field_0x18 = (int)&vt_VectorClass; /*0x5d7474*/
    if ( v30.InfantryTypeVector_field_0x1C && v32 ) /*0x5d7484*/
      __3_YAXPAX_Z((void *)v30.InfantryTypeVector_field_0x1C); /*0x5d7487*/
    return 1; /*0x5d7487*/
  }
  *(unsigned int *)v30.__pad_0 = &vt_VectorClass; /*0x5d72bf*/
  if ( v30.InfantryTypeVector_field_0x04 && BYTE1(v30.InfantryTypeVector_field_0x0C) ) /*0x5d72d1*/
  {
    __3_YAXPAX_Z((void *)v30.InfantryTypeVector_field_0x04); /*0x5d72d4*/
    v30.InfantryTypeVector_field_0x04 = 0; /*0x5d72dc*/
  }
  BYTE1(v30.InfantryTypeVector_field_0x0C) = 0; /*0x5d72e4*/
  v30.InfantryTypeVector_field_0x08 = 0; /*0x5d72eb*/
  v30.InfantryTypeVector_field_0x18 = (int)&vt_VectorClass; /*0x5d72ef*/
  if ( v30.InfantryTypeVector_field_0x1C ) /*0x5d72f7*/
  {
    if ( v32 ) /*0x5d72ff*/
      __3_YAXPAX_Z((void *)v30.InfantryTypeVector_field_0x1C); /*0x5d7302*/
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

  nextArrayIndex = ((char *)&stru_A80220); /*0x5d74a1*/
  if ( ((char *)&stru_A80220) <= 0 ) /*0x5d74a9*/
    return 1; /*0x5d754a*/
  vtable3 = ((char *)&stru_A80220); /*0x5d74af*/
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
            ((HouseClass *)(v5))->HandleAlliance((int)v7, 0); /*0x5d7510*/
            ((HouseClass *)(v7))->HandleAlliance((int)v5, 0); /*0x5d751a*/
            vtable3 = ((char *)&stru_A80220); /*0x5d751f*/
          }
          nextArrayIndex = ((char *)&stru_A80220); /*0x5d7524*/
          ++v3; /*0x5d752a*/
        }
        while ( v3 < ((char *)&stru_A80220) ); /*0x5d752d*/
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

  ((Multiplayer *)(v18))->FindStartPositions(); /*0x5ee9d9*/
  v1 = 0; /*0x5ee9e4*/
  p_uniqueId = &dword_A8B230[124].uniqueId; /*0x5ee9e6*/
  do /*0x5eea04*/
    v17[v1++] = (Multiplayer)(*p_uniqueId++ != -1); /*0x5ee9f1*/
  while ( v1 < 16 ); /*0x5eea04*/
  nextArrayIndex = ((char *)&stru_A80220); /*0x5eea06*/
  for ( i = 0; i < ((char *)&stru_A80220); ++i ) /*0x5eea11*/
  {
    v5 = (HouseClass *)*((unsigned int *)((char *)&stru_A80220) + i); /*0x5eea1f*/
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
        ((HouseClass *)(v5))->SetMapSeed(*((unsigned int *)Block + v7)); /*0x5eead6*/
      }
      else
      {
        Debug::Log(); /*0x5eea73*/
        started = AssignRandomMapStartPositions(&v14, i, (int)v18, (int)v17, 1); /*0x5eea8d*/
        ((HouseClass *)(v5))->SetMapSeed(*started); /*0x5eea97*/
        HouseClass::GetCurrentOption(v5, &v15); /*0x5eeaa3*/
        HouseClass::GetCurrentOption(v5, &v16); /*0x5eeab4*/
        Debug::Log(); /*0x5eeac2*/
      }
    }
    nextArrayIndex = ((char *)&stru_A80220); /*0x5eeadb*/
  }
  v11 = 0; /*0x5eeaeb*/
  if ( nextArrayIndex > 0 ) /*0x5eeaef*/
  {
    do /*0x5eeb7e*/
    {
      v12 = (HouseClass *)*((unsigned int *)((char *)&stru_A80220) + v11); /*0x5eeafb*/
      if ( !*(unsigned char *)(v12->relatedTagsCapacity + 422) && !v12->currentPlayer ) /*0x5eeb0b*/
      {
        Debug::Log(); /*0x5eeb1f*/
        v13 = AssignRandomMapStartPositions(&v16, v11, (int)v18, (int)v17, 0); /*0x5eeb39*/
        ((HouseClass *)(v12))->SetMapSeed(*v13); /*0x5eeb43*/
        HouseClass::GetCurrentOption(v12, &v15); /*0x5eeb4f*/
        HouseClass::GetCurrentOption(v12, &v14); /*0x5eeb60*/
        Debug::Log(); /*0x5eeb6e*/
      }
      ++v11; /*0x5eeb7b*/
    }
    while ( v11 < ((char *)&stru_A80220) ); /*0x5eeb7e*/
  }
  *(unsigned int *)v18 = &vt_VectorClass; /*0x5eeb8b*/
  if ( Block ) /*0x5eeb94*/
  {
    if ( v20 ) /*0x5eeb9c*/
      __3_YAXPAX_Z(Block); /*0x5eeb9f*/
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
  (*((void (**)(HouseClass *, int))this->vtable1 + 73))(this, 2); /*0x740e0c*/
  return 1; /*0x740e14*/

}
}
// 0x429210
namespace gamemd {
int HouseClass::QueryInterface_Helper()
{

  const void **v4; // [esp+14h] [ebp+Ch]

  if ( !v4 ) /*0x429218*/
    return -2147467261; /*0x42921b*/
  if ( memcmp(a3, &unk_7F7CA0, 0x10u) && memcmp(a3, &IID_IUnknown, 0x10u) ) /*0x42924a*/
    return -2147467262; /*0x42924f*/
  *v4 = a2; /*0x42925c*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x429261*/
  return 0; /*0x42921a*/

}
} // namespace gamemd

// 0x429270
namespace gamemd {
int HouseClass::QueryInterface_Dispatch()
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
    v6 = (*(int (**)(IUnknown *, void **, unsigned int *))punk.field_0)(&punk, a4, v7); /*0x4292f3*/
    if ( v6 < 0 ) /*0x4292f7*/
      __3_YAXPAX_Z(&punk); /*0x4292fe*/
    v4 = v7; /*0x429306*/
  }
  if ( !memcmp(a4, &unk_7EA6E8, 0x10u) ) /*0x429318*/
  {
    if ( !&dword_87F7E8 ) /*0x429323*/
      return -2147024882; /*0x42932e*/
    v6 = (*(int (**)(IUnknown *, void **, unsigned int *))dword_87F7E8.field_0)(&dword_87F7E8, a4, v4); /*0x429340*/
    if ( v6 < 0 ) /*0x429344*/
      __3_YAXPAX_Z(&dword_87F7E8); /*0x42934b*/
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

  this->vtable1 = &vt_VersionClass; /*0x4e8279*/
  if ( (a2 & 1) != 0 ) /*0x4e827f*/
    __3_YAXPAX_Z(this); /*0x4e8282*/
  return (std::locale::facet *)this; /*0x4e828c*/

}
} // namespace gamemd

// 0x4F28A0
namespace gamemd {
int HouseClass_24::Seek(int a2, void *a2_2, void *a3_1)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4f28aa*/

}
} // namespace gamemd

// 0x4F28C0
namespace gamemd {
VectorCursor * HouseClass::vt_placeholder_07(char a2)
{

  *(unsigned int *)this = &vt_VectorCursorGraphicMenuItemDynamicVectorClass; /*0x4f28c9*/
  if ( (a2 & 1) != 0 ) /*0x4f28cf*/
    __3_YAXPAX_Z(this); /*0x4f28d2*/
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

  m_8 = this->m_8; /*0x4f28e2*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4f28ed*/
  {
    v3 = 0; /*0x4f28ef*/
    if ( m_8 <= 0 ) /*0x4f28f3*/
      return 1; /*0x4f2913*/
    v4 = *(unsigned int **)&this->m_1[3]; /*0x4f28f5*/
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
    LOBYTE(this->m_C) = 0; /*0x4f2936*/
    if ( a3 ) /*0x4f293c*/
      v4 = a3; /*0x4f2952*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x4f294e*/
    LOBYTE(this->m_C) = 1; /*0x4f2956*/
    if ( v4 ) /*0x4f295a*/
    {
      if ( *(unsigned int *)&this->m_1[3] ) /*0x4f2965*/
      {
        m_8 = this->m_8; /*0x4f296c*/
        if ( a2 < m_8 ) /*0x4f2971*/
          m_8 = a2; /*0x4f2973*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x4f2979*/
          ++i; /*0x4f297e*/
        if ( BYTE1(this->m_C) ) /*0x4f298b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4f2996*/
          *(unsigned int *)&this->m_1[3] = 0; /*0x4f299e*/
        }
      }
      *(unsigned int *)&this->m_1[3] = v4; /*0x4f29a7*/
      this->m_8 = a2; /*0x4f29af*/
      BYTE1(this->m_C) = a3 == 0; /*0x4f29b2*/
      return 1; /*0x4f29b8*/
    }
    else
    {
      return 0; /*0x4f295f*/
    }
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x4f29c2*/
    return 1; /*0x4f29c8*/
  }

}
} // namespace gamemd

// 0x4F29D0
namespace gamemd {
void HouseClass_24::ddtor()
{

  if ( *(unsigned int *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x4f29dd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4f29e3*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x4f29eb*/
  }
  BYTE1(this->m_C) = 0; /*0x4f29ee*/
  this->m_8 = 0; /*0x4f29f1*/

}
} // namespace gamemd

// 0x4F2A00
namespace gamemd {
int HouseClass_24::Read(unsigned int * a2, void *a2_2)
{

  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x4f2a00*/
    return 0; /*0x4f2a08*/
  m_8 = this->m_8; /*0x4f2a0e*/
  result = 0; /*0x4f2a11*/
  if ( m_8 <= 0 ) /*0x4f2a15*/
    return -1; /*0x4f2a2c*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x4f2a1b*/
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

  if ( LOBYTE(this->m_C) ) /*0x4f2a40*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x4f2a55*/
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
VectorClass_flat * HouseClass_24::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4f2b63*/
  *(unsigned int *)Block->__pad_0 = &vt_VectorClass; /*0x4f2b66*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4f2b70*/
  {
    __3_YAXPAX_Z(v3); /*0x4f2b78*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4f2b80*/
  }
  BYTE1(Block->m_C) = 0; /*0x4f2b8b*/
  Block->m_8 = 0; /*0x4f2b91*/
  if ( (a2 & 1) != 0 ) /*0x4f2b98*/
    __3_YAXPAX_Z(Block); /*0x4f2b9b*/
  return Block->__pad_0; /*0x4f2ba5*/

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
  (*((void (**)(HouseClass *))aP0->vtable1 + 1))(aP0); /*0x4f68ff*/
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
                     (double)*(int *)(*(unsigned int *)(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 2)) + 4 * aP2) + 184)
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

  return ((HouseClass *)((int *)this))->HandleAlliance(*((unsigned int *)((char *)&stru_A80220) + a2), a3); /*0x4f9b67*/

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
  if ( *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 164) > 0 ) /*0x4fb92d*/
  {
    v3 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 152); /*0x4fb92f*/
    do /*0x4fb959*/
    {
      v4 = *(HouseClass ***)(v3 + 4 * v1); /*0x4fb934*/
      if ( v4[135] == this ) /*0x4fb93d*/
      {
        if ( v4 ) /*0x4fb941*/
        {
          ((void (*)(HouseClass **, int))(*v4))(v4, 1); /*0x4fb947*/
          v3 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 152); /*0x4fb94a*/
        }
        --v1; /*0x4fb94f*/
      }
      ++v1; /*0x4fb956*/
    }
    while ( v1 < *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 164) ); /*0x4fb959*/
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
    return (*((unsigned int *(**)(HouseClass *, int))this->vtable1 + 8))(this, 1); /*0x4fb9a7*/
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
