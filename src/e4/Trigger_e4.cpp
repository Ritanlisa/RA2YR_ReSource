// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Trigger_e4.hpp"
#include "e4/classes/CampaignProperties_WorldDominationTour_22_e4.hpp"
#include "e4/classes/MSEngine_e4.hpp"
#include "e4/classes/Session_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/TriggerClass_e4.hpp"
#include "e4/classes/TriggerTypeClass_e4.hpp"

// 0x554A60
namespace gamemd {
int Trigger::EnableOnce(AbstractClass * aP1)
{

  char result; // al

  result = *((unsigned char *)this + 72); /*0x554a60*/
  if ( !result ) /*0x554a65*/
  {
    *((unsigned char *)this + 72) = 1; /*0x554a6b*/
    return TacticalClass::ScrollView(this, aP1); /*0x554a70*/
  }
  return result; /*0x554a75*/

}
}
// 0x5CBD20
namespace gamemd {
MSShapeAnim * * Trigger::initTrigger(MSShapeAnim * aP1, MSShapeAnim * aP2, int a4, int a5, int a6, int a7, MSShapeAnim * aP7)
{

  int FileClassToBuffer; // eax
  int v10; // edx

  *((unsigned int *)this + 2) = a4; /*0x5cbd2c*/
  *((unsigned int *)this + 1) = aP2; /*0x5cbd32*/
  *((unsigned char *)this + 12) = 1; /*0x5cbd35*/
  *((unsigned int *)this + 4) = Timer::GetTicks(); /*0x5cbd48*/
  *((unsigned int *)this + 6) = 0; /*0x5cbd4f*/
  *((unsigned int *)this + 8) = a5; /*0x5cbd52*/
  *((unsigned int *)this + 14) = a7; /*0x5cbd58*/
  *((unsigned int *)this + 9) = a6; /*0x5cbd5f*/
  *((unsigned int *)this + 10) = 0; /*0x5cbd62*/
  *((unsigned char *)this + 52) = 0; /*0x5cbd65*/
  *((unsigned char *)this + 60) = 0; /*0x5cbd68*/
  *(unsigned int *)this = &vt_MSShapeAnim; /*0x5cbd6a*/
  FileClassToBuffer = LoadFileClassToBuffer((char **)aP1, (bool *)this + 60); /*0x5cbd70*/
  *((unsigned int *)this + 7) = FileClassToBuffer; /*0x5cbd75*/
  *((unsigned int *)this + 11) = 0; /*0x5cbd78*/
  v10 = *(int16_t *)(FileClassToBuffer + 6) - 1; /*0x5cbd83*/
  *((unsigned int *)this + 17) = aP7; /*0x5cbd84*/
  *((unsigned int *)this + 12) = v10; /*0x5cbd87*/
  *((unsigned int *)this + 16) = 0; /*0x5cbd8a*/
  *(unsigned int *)this = &vt_MSFadeAnim; /*0x5cbd8d*/
  return this; /*0x5cbd95*/

}
}
// 0x76D4D0
namespace gamemd {
void Trigger::ProcessMapEvents(int *a1, int * a2, int a3, int a4, char a5, char a6)
{

  ObjectClass *v5; // ebx
  int v8; // eax
  unsigned int *v9; // eax
  MSShapeAnim *v10; // eax
  int v11; // ecx
  unsigned int v12; // edi
  int CellType; // ebp
  int v14; // edi
  BOOL ecx13; // ecx
  int v16; // ecx
  MSShapeAnim *v15; // edi
  int ebp18; // ebp
  void *v19; // eax
  MSShapeAnim *v17; // eax
  void *v21; // eax
  MSShapeAnim *v18; // edi
  int v23; // eax
  void (***v24)(unsigned int, int); // ecx
  int v25; // [esp+0h] [ebp-14Ch]
  int *v26; // [esp+4h] [ebp-148h]
  int v27; // [esp+8h] [ebp-144h]
  void **v28; // [esp+10h] [ebp-13Ch] BYREF
  int v29; // [esp+14h] [ebp-138h]
  int v30; // [esp+18h] [ebp-134h]
  void **v31; // [esp+1Ch] [ebp-130h] BYREF
  int v32; // [esp+20h] [ebp-12Ch]
  int var128; // [esp+24h] [ebp-128h]
  void **v34; // [esp+28h] [ebp-124h] BYREF
  void ***v35; // [esp+2Ch] [ebp-120h]
  int v36; // [esp+30h] [ebp-11Ch]
  int v37; // [esp+34h] [ebp-118h] BYREF
  void **v38; // [esp+38h] [ebp-114h] BYREF
  void ***var110; // [esp+3Ch] [ebp-110h]
  ObjectClass *v33; // [esp+40h] [ebp-10Ch]
  void **v41; // [esp+44h] [ebp-108h] BYREF
  void *Block; // [esp+48h] [ebp-104h]
  int v43; // [esp+4Ch] [ebp-100h]
  int v44; // [esp+50h] [ebp-FCh]
  int v45; // [esp+54h] [ebp-F8h]
  ObjectClass *v39; // [esp+58h] [ebp-F4h]
  void **v47; // [esp+5Ch] [ebp-F0h] BYREF
  void *v48; // [esp+60h] [ebp-ECh]
  int v49; // [esp+64h] [ebp-E8h]
  char v50; // [esp+69h] [ebp-E3h]
  MSShapeAnim *v51; // [esp+6Ch] [ebp-E0h]
  int v52; // [esp+70h] [ebp-DCh]
  unsigned int v53[22]; // [esp+74h] [ebp-D8h] BYREF
  unsigned char v54[12]; // [esp+CCh] [ebp-80h] BYREF
  int v55; // [esp+D8h] [ebp-74h]
  unsigned int v56[22]; // [esp+E0h] [ebp-6Ch] BYREF
  unsigned char v57[12]; // [esp+138h] [ebp-14h] BYREF
  int v58; // [esp+144h] [ebp-8h]

  v5 = 0; /*0x76d4da*/
  v8 = Count::Get((unsigned int *)(this + 1112)); /*0x76d4e3*/
  VectorCursor::Construct(&v28, v8 + 44, 0); /*0x76d4f0*/
  while ( ((uint8_t (*)(void ***))v28[1])(&v28) ) /*0x76d4fd*/
  {
    v9 = (unsigned int *)FileClass::SetState((unsigned int *)(*(unsigned int *)(v29 + 4) + 8 * v30)); /*0x76d512*/
    v10 = (MSShapeAnim *)WDTObject::GetAndClearFlag(v9); /*0x76d519*/
    if ( v10 ) /*0x76d520*/
      Session::RemoveTeam((unsigned int *)this, v10); /*0x76d525*/
    ((void (*)(void ***))v28[2])(&v28); /*0x76d532*/
  }
  v26 = (int *)((void **)(a2));
  v25 = (void **)(a3);
  Trigger::checkCondition(&v47, 0, 0); /*0x76d54c*/
  v47 = &vt_DynamicVectorClass_MSAnim; /*0x76d561*/
  v52 = 10; /*0x76d565*/
  v51 = 0; /*0x76d569*/
  Trigger::checkCondition(&v41, 0, 0); /*0x76d56d*/
  v11 = *(unsigned int *)(this + 1116); /*0x76d572*/
  v41 = &vt_DynamicVectorClass_MSAnim; /*0x76d57c*/
  v39 = (ObjectClass *)10; /*0x76d585*/
  v45 = 0; /*0x76d589*/
  VectorCursor::Construct(&v31, v11 + 44, 0); /*0x76d58d*/
  while ( ((uint8_t (*)(void ***))v31[1])(&v31) )
  {
    v12 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)(v32 + 4) + 8 * var128 + 4) + 8); /*0x76d5bc*/
    CellType = WDTClass::GetCellType(*(unsigned int **)(this + 1164), v12); /*0x76d5cd*/
    v14 = WDTClass::GetCellType(*(unsigned int **)(a4 + 4), v12); /*0x76d5d7*/
    if ( v14 != CellType ) /*0x76d5db*/
    {
      DDraw::HandleSuspend((unsigned int *)this); /*0x76d5df*/
      while ( EventQueue::Process(*(unsigned int **)&stru_87C374.__pad_14B0[8012]) ) /*0x76d5ea*/
      {
        if ( EventQueue::Read(*(unsigned int **)&stru_87C374.__pad_14B0[8012]) == 27 ) /*0x76d603*/
          *(unsigned char *)(this + 1092) = 1; /*0x76d605*/
      }
      ecx13 = !*(unsigned char *)(this + 1092) || a6; /*0x76d635*/
      Map_Process_76FD40(v14, (ObjectClass *)this, ecx13, v25, v26, v27); /*0x76d64f*/
    }
    if ( a5 && v14 == 1 )
    {
      v16 = *(unsigned int *)(*(unsigned int *)(v32 + 4) + 8 * var128 + 4); /*0x76d67a*/
      v15 = (MSShapeAnim *)(*(unsigned int *)(v16 + 16) + *(unsigned int *)(*(unsigned int *)(this + 1116) + 68)); /*0x76d695*/
      ebp18 = *(unsigned int *)(*(unsigned int *)(this + 1116) + 72) + *(unsigned int *)(v16 + 20); /*0x76d69a*/
      if ( *(unsigned int *)(this + 1136) ) /*0x76d68f*/
      {
        CCFileClass::Construct2(v53, *(char ***)(this + 1136)); /*0x76d6a9*/
        if ( CCFileClass::Open(v53, 0) ) /*0x76d6b3*/
        {
          v19 = (void *)RA2_OPNEW(0x48u); /*0x76d6be*/
          if ( v19 ) /*0x76d6c8*/
            v5 = (ObjectClass *)Trigger::initTrigger( /*0x76d6ec*/
                                  v19,
                                  *(MSShapeAnim **)(this + 1136),
                                  v15,
                                  ebp18,
                                  *(unsigned int *)(this + 1132),
                                  3,
                                  512,
                                  (MSShapeAnim *)(this + 24));
          if ( (int)v51 < v49 /*0x76d71b*/
            || (v50 || !v49)
            && v52 > 0
            && ((uint8_t (*)(void ***, int, unsigned int))v47[2])(&v47, v52 + v49, 0) )
          {
            v17 = (gamemd::MSShapeAnim *)((unsigned int)(v51));
            v51 = (unsigned int)((MSShapeAnim *)((char *)v51 + 1));
            *((unsigned int *)v48 + (unsigned int)v17) = v5; /*0x76d731*/
          }
          v5 = 0; /*0x76d734*/
        }
        v53[0] = (unsigned int)(&vt_CCFileClass);
        v55 = (unsigned int)(0);
        Vector::Clear((int)v54); /*0x76d74c*/
        v53[0] = &off_7E1668; /*0x76d755*/
        BufferIOFileClass::Dtor(v53); /*0x76d75d*/
      }
      CCFileClass::Construct2(v56, *(char ***)(this + 1140)); /*0x76d770*/
      if ( CCFileClass::Open(v56, 0) )
      {
        v21 = (void *)RA2_OPNEW(0x40u); /*0x76d78c*/
        v18 = v21
            ? (MSShapeAnim *)MSShapeAnim::Constructor(
                               v21,
                               *(MSShapeAnim **)(this + 1140),
                               v15,
                               ebp18,
                               *(MSShapeAnim **)(this + 1132),
                               5,
                               (MSShapeAnim *)1,
                               (MSShapeAnim *)0x200)
            : 0;
        MSAnim::SetField(v18, *(unsigned int *)(this + 1144) - 1); /*0x76d7c8*/
        MSAnim::GetField(v18, 0); /*0x76d7d0*/
        TerritoryUpdateDisplayWOL(v18, 0); /*0x76d7d8*/
        Trigger::executeActions(*(unsigned int **)(*(unsigned int *)(v32 + 4) + 8 * var128 + 4), (int)v18); /*0x76d7f0*/
        if ( v45 < v43 /*0x76d821*/
          || (IDA_BYTE1(v44) || !v43)
          && (int)v39 > 0
          && ((uint8_t (*)(void ***, char *, unsigned int))v41[2])(&v41, &v39->__pad_0[v43], 0) )
        {
          v23 = (unsigned int)(v45++);
          *((unsigned int *)Block + v23) = v18; /*0x76d837*/
        }
      }
      v56[0] = (unsigned int)(&vt_CCFileClass);
      v58 = 0; /*0x76d84c*/
      Vector::Clear((int)v57); /*0x76d853*/
      BufferIOFileClass::Destruct(v56); /*0x76d85f*/
    }
    ((void (*)(void ***))v31[2])(&v31); /*0x76d86c*/
  }
  v35 = (void **)(&v47);
  v36 = (void **)(0);
  v34 = &vt_VectorCursor_MSAnim_DynamicVectorClass_MSAnim; /*0x76d89b*/
  var110 = &v41; /*0x76d89f*/
  v33 = 0; /*0x76d8a3*/
  v38 = &vt_VectorCursor_MSAnim_DynamicVectorClass_MSAnim; /*0x76d8a7*/
  if ( CampaignProperties_WorldDominationTour_22::AddRef(&v38) ) /*0x76d8ab*/
  {
    do /*0x76da41*/
    {
      DDraw::HandleSuspend((unsigned int *)this); /*0x76d8c0*/
      while ( EventQueue::Process(*(unsigned int **)&stru_87C374.__pad_14B0[8012]) ) /*0x76d8cb*/
      {
        if ( EventQueue::Read(*(unsigned int **)&stru_87C374.__pad_14B0[8012]) == 27 ) /*0x76d8e4*/
          *(unsigned char *)(this + 1092) = 1; /*0x76d8e6*/
      }
      if ( ((uint8_t (*)(void ***))v34[1])(&v34) ) /*0x76d905*/
      {
        if ( *(unsigned char *)(this + 1092) ) /*0x76d910*/
        {
          v24 = (void (***)(unsigned int, int))v35[1][v36]; /*0x76d925*/
          if ( v24 ) /*0x76d92a*/
            (**v24)(v24, 1); /*0x76d934*/
        }
        else
        {
          String::Assign((char **)&v37, aTargetzoom); /*0x76d944*/
          if ( String::NotEquals((const char **)&v37, 0) ) /*0x76d94e*/
          {
            Trigger::processTrigger(&v28, this + 1172, 0); /*0x76d963*/
            while ( ((uint8_t (*)(void ***))v28[1])(&v28) ) /*0x76d970*/
            {
              if ( !String::Compare((const char **)&v37, *(const char ***)(*(unsigned int *)(v29 + 4) + 4 * v30)) ) /*0x76d98a*/
                break; /*0x76d991*/
              ((void (*)(void ***))v28[2])(&v28); /*0x76d99b*/
            }
            if ( ((uint8_t (*)(void ***))v28[1])(&v28) ) /*0x76d9b5*/
              nullsub_24(); /*0x76d9ca*/
            v28 = &vt_VectorCursor_MSSfxEntry_DynamicVectorClass_MSSfxEntry; /*0x76d9cf*/
          }
          DeleteAndZero((int)&v37); /*0x76d9d7*/
          PriorityQueue::Add((Selection_WorldDominationTour *)this, (MSAnim *)v35[1][v36]); /*0x76d9ed*/
          MSEngine::ProcessEvents((unsigned int *)this, (MSVQAnim *)v35[1][v36], 300000); /*0x76da08*/
        }
        ((void (*)(void ***))v34[2])(&v34); /*0x76da15*/
      }
      PriorityQueue::Add((Selection_WorldDominationTour *)this, (MSAnim *)var110[1][(unsigned int)v33]); /*0x76da29*/
      ((void (*)(void ***))v38[2])(&v38); /*0x76da36*/
    }
    while ( ((uint8_t (*)(void ***))v38[1])(&v38) ); /*0x76da41*/
  }
  ComPtr::Set((rc_ptr_base *)(this + 1160), *(unsigned int *)(a4 + 4)); /*0x76da5d*/
  v38 = &vt_VectorCursor_MSAnim_DynamicVectorClass_MSAnim; /*0x76da66*/
  v34 = &vt_VectorCursor_MSAnim_DynamicVectorClass_MSAnim; /*0x76da6a*/
  v31 = &vt_VectorCursor_rc_ptr_WorldDominationTour_Territory_DynamicVectorClass_rc_ptr_WorldDominationTour_Territory; /*0x76da76*/
  v41 = &vt_VectorClass_MSAnim; /*0x76da7e*/
  if ( Block && IDA_BYTE1(v44) ) /*0x76da8b*/
  {
    RA2_OPDEL(Block); /*0x76da8e*/
    Block = 0; /*0x76da96*/
  }
  v47 = &vt_VectorClass_MSAnim; /*0x76da9e*/
  v43 = 0; /*0x76daa2*/
  IDA_BYTE1(v44) = 0; /*0x76daa9*/
  if ( v48 ) /*0x76daaf*/
  {
    if ( v50 ) /*0x76dab7*/
      RA2_OPDEL(v48); /*0x76daba*/
  }

}
}
// 0x76F090
namespace gamemd {
unsigned int * Trigger::processTrigger(int a2, int a3)
{

  *((unsigned int *)this + 1) = a2; /*0x76f09a*/
  *((unsigned int *)this + 2) = a3; /*0x76f09d*/
  *this = &vt_VectorCursor_MSSfxEntry_DynamicVectorClass_MSSfxEntry; /*0x76f0a0*/
  return this; /*0x76f0a6*/

}
}
// 0x76F1C0
namespace gamemd {
unsigned int * Trigger::checkCondition(ObjectClass * aP1, ObjectClass * aP2)
{

  *((unsigned int *)this + 1) = 0; /*0x76f1cb*/
  *((unsigned int *)this + 2) = aP1; /*0x76f1ce*/
  *((unsigned char *)this + 12) = 1; /*0x76f1d1*/
  *((unsigned char *)this + 13) = 0; /*0x76f1d5*/
  *this = &vt_VectorClass_MSAnim; /*0x76f1d8*/
  if ( aP1 ) /*0x76f1de*/
  {
    if ( aP2 ) /*0x76f1e6*/
    {
      *((unsigned int *)this + 1) = aP2; /*0x76f1e8*/
      return this; /*0x76f1ee*/
    }
    *((unsigned int *)this + 1) = RA2_OPNEW(4 * (unsigned int)aP1); /*0x76f1fd*/
    *((unsigned char *)this + 13) = 1; /*0x76f200*/
  }
  return this; /*0x76f1ed*/

}
}
// 0x76FF20
namespace gamemd {
int Trigger::executeActions(int a2)
{

  *((unsigned int *)this + 11) = a2; /*0x76ff24*/
  return a2; /*0x76ff27*/

}
}