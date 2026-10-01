// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/EventQueue_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
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
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/CaptureManagerClass_e4.hpp"
#include "e4/classes/DDraw_e4.hpp"
#include "e4/classes/FileClass_e4.hpp"
#include "e4/classes/InfantryTypeVector_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/UnitTypeVector_e4.hpp"
#include "e4/classes/WDTClass_e4.hpp"
#include "e4/classes/WDTObject_e4.hpp"
#include "e4/classes/VectorCursor_e4.hpp"
#include "e4/classes/Count_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"

// 0x554A60
namespace gamemd {
int Trigger::EnableOnce(char aP1)
{

  int result; // eax

  LOBYTE(result) = this->Trigger_field_0x48; /*0x554a60*/
  if ( !(unsigned char)result ) /*0x554a65*/
  {
    LOBYTE(this->Trigger_field_0x48) = 1; /*0x554a6b*/
    return ((TacticalClass *)((TacticalClass *)this))->ScrollView(aP1); /*0x554a70*/
  }
  return result; /*0x554a75*/

}
}
// 0x5CBD20
namespace gamemd {
MSShapeAnim * * Trigger::initTrigger(char **aP1, int aP2, int a4, int a5, int a6, int a7, int aP7)
{

  int FileClassToBuffer; // eax
  int v10; // edx

  *(unsigned int *)this->__pad_8 = a4; /*0x5cbd2c*/
  this->Trigger_field_0x4 = (unsigned int)((MSAnim *)aP2); /*0x5cbd32*/
  this->__pad_8[4] = 1; /*0x5cbd35*/
  this->Trigger_field_0x10 = (void *)((Timer *)this)->GetTicks(); /*0x5cbd48*/
  *(unsigned int *)this->__pad_18 = 0; /*0x5cbd4f*/
  *(unsigned int *)&this->__pad_18[8] = a5; /*0x5cbd52*/
  *(unsigned int *)&this->__pad_30[8] = a7; /*0x5cbd58*/
  *(unsigned int *)&this->__pad_18[12] = a6; /*0x5cbd5f*/
  *(unsigned int *)&this->__pad_18[16] = 0; /*0x5cbd62*/
  this->__pad_30[4] = 0; /*0x5cbd65*/
  this->__pad_30[12] = 0; /*0x5cbd68*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_MSShapeAnim); /*0x5cbd6a*/
  FileClassToBuffer = LoadFileClassToBuffer(aP1, (bool *)&this->__pad_30[12]); /*0x5cbd70*/
  *(unsigned int *)&this->__pad_18[4] = FileClassToBuffer; /*0x5cbd75*/
  this->Trigger_field_0x2C = 0; /*0x5cbd78*/
  v10 = *(int16_t *)(FileClassToBuffer + 6) - 1; /*0x5cbd83*/
  *(unsigned int *)&this->__pad_30[20] = (unsigned int)(aP7); /*0x5cbd84*/
  *(unsigned int *)this->__pad_30 = (gamemd::MSShapeAnim **)(v10); /*0x5cbd87*/
  *(unsigned int *)&this->__pad_30[16] = 0; /*0x5cbd8a*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_MSFadeAnim); /*0x5cbd8d*/
  return this; /*0x5cbd95*/

}
}
// 0x76D4D0
namespace gamemd {
void Trigger::ProcessMapEvents(int *a1, int * a2, int a3, int a4, char a5, char a6)
{

  void *inited; // ebx
  int v7; // eax
  WDTObject *v8; // eax
  int (***v9)(unsigned int, int); // eax
  int v10; // ecx
  unsigned int v11; // edi
  int CellType; // ebp
  int v13; // edi
  BOOL v14; // ecx
  int v15; // ecx
  int v16; // edi
  int v17; // ebp
  Trigger *v18; // eax
  BombClass *v19; // eax
  MSShapeAnim *v20; // eax
  MSAnim *v21; // edi
  void *v22; // eax
  void (***v23)(unsigned int, int); // ecx
  ObjectClass *v24; // [esp+0h] [ebp-14Ch]
  VectorCursor v25; // [esp+10h] [ebp-13Ch] BYREF
  int *p_owningHouseIndex; // [esp+2Ch] [ebp-120h]
  int v27; // [esp+30h] [ebp-11Ch]
  ObjectClass v28; // [esp+34h] [ebp-118h] BYREF
  CCFileClass v29; // [esp+E0h] [ebp-6Ch] BYREF
  int v30[3]; // [esp+138h] [ebp-14h] BYREF
  int v31; // [esp+144h] [ebp-8h]

  inited = 0; /*0x76d4da*/
  v7 = Count::Get((Count *)(this + 1112)); /*0x76d4e3*/
  ((VectorCursor *)(&v25))->Construct(v7 + 44, 0); /*0x76d4f0*/
  while ( (*(uint8_t (**)(VectorCursor *))(*(unsigned int *)v25.__pad_0 + 4))(&v25) ) /*0x76d4fd*/
  {
    v8 = (WDTObject *)FileClass::SetState((FileClass *)(*(unsigned int *)(v25.VectorCursor_field_0x04 + 4) /*0x76d512*/
                                                      + 8 * v25.VectorCursor_field_0x08));
    v9 = (int (***)(unsigned int, int))WDTObject::GetAndClearFlag(v8); /*0x76d519*/
    if ( v9 ) /*0x76d520*/
      ((Session *)((Session *)this))->RemoveTeam(v9); /*0x76d525*/
    (*(void (**)(VectorCursor *))(*(unsigned int *)v25.__pad_0 + 8))(&v25); /*0x76d532*/
  }
  v24 = (gamemd::ObjectClass *)(a2);
  ((Trigger *)((Trigger *)&v28.owningHouseIndex))->checkCondition(0, 0); /*0x76d54c*/
  v28.owningHouseIndex = (int)&vt_DynamicVectorClass; /*0x76d561*/
  v28.ambientSoundController[0] = 10; /*0x76d565*/
  v28.attachedBomb = 0; /*0x76d569*/
  ((Trigger *)((Trigger *)&((char *)&v28)))->checkCondition(0, 0); /*0x76d56d*/
  v10 = *(unsigned int *)(this + 1116); /*0x76d572*/
  ((unsigned int *)&v28)[0] = (int)&vt_DynamicVectorClass; /*0x76d57c*/
  v28.occupant = 10; /*0x76d585*/
  ((unsigned int *)&v28)[0] = 0; /*0x76d589*/
  ((VectorCursor *)((VectorCursor *)&v25.VectorCursor_field_0x0C))->Construct(v10 + 44, 0); /*0x76d58d*/
  while ( (*(uint8_t (**)(int *))(v25.VectorCursor_field_0x0C + 4))(&v25.VectorCursor_field_0x0C) )
  {
    v11 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)(v25.VectorCursor_field_0x10 + 4) + 8 * v25.VectorCursor_field_0x14 + 4) + 8); /*0x76d5bc*/
    CellType = WDTClass::GetCellType(*(WDTClass **)(this + 1164), v11); /*0x76d5cd*/
    v13 = WDTClass::GetCellType(*(WDTClass **)(a3 + 4), v11); /*0x76d5d7*/
    if ( v13 != CellType ) /*0x76d5db*/
    {
      DDraw::HandleSuspend((DDraw *)this); /*0x76d5df*/
      while ( ((EventQueue *)(*(EventQueue **)&stru_87F5F0.__pad_58[296]))->Process() ) /*0x76d5ea*/
      {
        if ( EventQueue::Read(*(EventQueue **)&stru_87F5F0.__pad_58[296]) == 27 ) /*0x76d603*/
          *(unsigned char *)(this + 1092) = 1; /*0x76d605*/
      }
      v14 = !*(unsigned char *)(this + 1092) || a5; /*0x76d635*/
      Map_Process_76FD40( /*0x76d64f*/
        *(unsigned int *)(*(unsigned int *)(v25.VectorCursor_field_0x10 + 4) + 8 * v25.VectorCursor_field_0x14 + 4),
        CellType,
        v13,
        v13,
        (int *)this,
        v14);
    }
    if ( a4 && v13 == 1 )
    {
      v15 = *(unsigned int *)(*(unsigned int *)(v25.VectorCursor_field_0x10 + 4) + 8 * v25.VectorCursor_field_0x14 + 4); /*0x76d67a*/
      v16 = *(unsigned int *)(v15 + 16) + *(unsigned int *)(*(unsigned int *)(this + 1116) + 68); /*0x76d695*/
      v17 = *(unsigned int *)(*(unsigned int *)(this + 1116) + 72) + *(unsigned int *)(v15 + 20); /*0x76d69a*/
      if ( *(unsigned int *)(this + 1136) ) /*0x76d68f*/
      {
        CCFileClass::Construct2((CCFileClass *)&v28.ambientSoundController[1], *(char ***)(this + 1136)); /*0x76d6a9*/
        if ( (uint8_t)CCFileClass::Open((int)((CCFileClass *)&v28.ambientSoundController[1]), 0) ) /*0x76d6b3*/
        {
          v18 = (Trigger *)__2_YAPAXI_Z(0x48u); /*0x76d6be*/
          if ( v18 ) /*0x76d6c8*/
            inited = Trigger::initTrigger( /*0x76d6ec*/
                       v18,
                       *(char ***)(this + 1136),
                       v16,
                       v17,
                       *(unsigned int *)(this + 1132),
                       3,
                       512,
                       this + 24);
          if ( (int)v28.attachedBomb < (int)v28.nextObject /*0x76d71b*/
            || (BYTE1(v28.attachedTag) || !v28.nextObject)
            && v28.ambientSoundController[0] > 0
            && (*(uint8_t (**)(int *, char *, unsigned int))(v28.owningHouseIndex + 8))(
                 &v28.owningHouseIndex,
                 (char *)v28.nextObject + v28.ambientSoundController[0],
                 0) )
          {
            v19 = (gamemd::BombClass *)((unsigned int)(v28.attachedBomb)++); /*0x76d726*/
            *(unsigned int *)(v28.fallRate + 4 * (unsigned int)v19) = (unsigned int)(inited); /*0x76d731*/
          }
          inited = 0; /*0x76d734*/
        }
        v28.ambientSoundController[1] = (int)&vt_CCFileClass; /*0x76d73d*/
        v28.location[2] = 0; /*0x76d745*/
        ((Vector *)((int)&v28.isInLogic))->Clear(); /*0x76d74c*/
        v28.ambientSoundController[1] = (int)&off_7E1668; /*0x76d755*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v28.ambientSoundController[1]); /*0x76d75d*/
      }
      CCFileClass::Construct2(&v29, *(char ***)(this + 1140)); /*0x76d770*/
      if ( (uint8_t)CCFileClass::Open((int)(&v29), 0) )
      {
        v20 = (MSShapeAnim *)__2_YAPAXI_Z(0x40u); /*0x76d78c*/
        v21 = v20
            ? (MSAnim *)MSShapeAnim::Constructor(
                          v20,
                          *(char ***)(this + 1140),
                          v16,
                          v17,
                          *(unsigned int *)(this + 1132),
                          5,
                          1,
                          512)
            : 0;
        ((MSAnim *)(v21))->SetField(*(unsigned int *)(this + 1144) - 1); /*0x76d7c8*/
        MSAnim::GetField(v21, 0); /*0x76d7d0*/
        TerritoryUpdateDisplayWOL((ObjectClass *)v21, 0); /*0x76d7d8*/
        Trigger::executeActions( /*0x76d7f0*/
          *(Trigger **)(*(unsigned int *)(v25.VectorCursor_field_0x10 + 4) + 8 * v25.VectorCursor_field_0x14 + 4),
          (int)v21);
        if ( (int)((char *)&v28) < ((char *)&v28) /*0x76d821*/
          || (BYTE1(((char *)&v28)) || !((char *)&v28))
          && v28.occupant > 0
          && (*(uint8_t ((int *)(**))(int *, int, unsigned int))(((char *)&v28) + 8))(&((char *)&v28), v28.occupant + ((char *)&v28), 0) )
        {
          v22 = ((char *)&v28)++; /*0x76d82c*/
          *(unsigned int *)(((char *)&v28) + 4 * (unsigned int)v22) = (unsigned int)(v21); /*0x76d837*/
        }
      }
      *(unsigned int *)v29.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x76d841*/
      v31 = 0; /*0x76d84c*/
      ((Vector *)((int)v30))->Clear(); /*0x76d853*/
      BufferIOFileClass::Destruct((BufferIOFileClass *)&v29); /*0x76d85f*/
    }
    (*(void (**)(int *))(v25.VectorCursor_field_0x0C + 8))(&v25.VectorCursor_field_0x0C); /*0x76d86c*/
  }
  p_owningHouseIndex = (int *)(&v28.owningHouseIndex); /*0x76d88b*/
  v27 = 0; /*0x76d897*/
  v25.VectorCursor_field_0x18 = (unsigned int)((int)&vt_VectorCursorMSAnimDynamicVectorClass); /*0x76d89b*/
  ((unsigned int *)&v28)[0] = (unsigned int)(&((char *)&v28)); /*0x76d89f*/
  ((unsigned int *)&v28)[0] = 0; /*0x76d8a3*/
  ((unsigned int *)&v28)[0] = &vt_VectorCursorMSAnimDynamicVectorClass; /*0x76d8a7*/
  if ( CampaignProperties_WorldDominationTour_22::AddRef(&((char *)&v28)) ) /*0x76d8ab*/
  {
    do /*0x76da41*/
    {
      DDraw::HandleSuspend((DDraw *)this); /*0x76d8c0*/
      while ( ((EventQueue *)(*(EventQueue **)&stru_87F5F0.__pad_58[296]))->Process() ) /*0x76d8cb*/
      {
        if ( EventQueue::Read(*(EventQueue **)&stru_87F5F0.__pad_58[296]) == 27 ) /*0x76d8e4*/
          *(unsigned char *)(this + 1092) = 1; /*0x76d8e6*/
      }
      if ( (*(uint8_t (**)(int *))(v25.VectorCursor_field_0x18 + 4))(&v25.VectorCursor_field_0x18) ) /*0x76d905*/
      {
        if ( *(unsigned char *)(this + 1092) ) /*0x76d910*/
        {
          v23 = *(void (****)(unsigned int, int))(p_owningHouseIndex[1] + 4 * v27); /*0x76d925*/
          if ( v23 ) /*0x76d92a*/
            (**v23)(v23, 1); /*0x76d934*/
        }
        else
        {
          ((String *)((String *)&v28))->Assign((const char *)(aTargetzoom)); /*0x76d944*/
          if ( (uint8_t)String::NotEquals((const char *)((String *)&v28), 0) ) /*0x76d94e*/
          {
            Trigger::processTrigger((Trigger *)&v25, this + 1172, 0); /*0x76d963*/
            while ( (*(uint8_t (**)(VectorCursor *))(*(unsigned int *)v25.__pad_0 + 4))(&v25) ) /*0x76d970*/
            {
              if ( !(uint8_t)String::Compare( /*0x76d98a*/
                                       (String *)&v28,
                                       *(const char ***)(*(unsigned int *)(v25.VectorCursor_field_0x04 + 4)
                                                       + 4 * v25.VectorCursor_field_0x08)) )
                break; /*0x76d991*/
              (*(void (**)(VectorCursor *))(*(unsigned int *)v25.__pad_0 + 8))(&v25); /*0x76d99b*/
            }
            if ( (*(uint8_t (**)(VectorCursor *))(*(unsigned int *)v25.__pad_0 + 4))(&v25) ) /*0x76d9b5*/
              nullsub_24(v24); /*0x76d9ca*/
            *(unsigned int *)v25.__pad_0 = &vt_VectorCursorMSSfxEntryDynamicVectorClass; /*0x76d9cf*/
          }
          DeleteAndZero(&v28); /*0x76d9d7*/
          PriorityQueue::Add((PriorityQueue *)this, *(unsigned int *)(p_owningHouseIndex[1] + 4 * v27)); /*0x76d9ed*/
          ((MSEngine *)((MSEngine *)this))->ProcessEvents(*(unsigned int *)(p_owningHouseIndex[1] + 4 * v27), 300000); /*0x76da08*/
        }
        (*(void (**)(int *))(v25.VectorCursor_field_0x18 + 8))(&v25.VectorCursor_field_0x18); /*0x76da15*/
      }
      PriorityQueue::Add((PriorityQueue *)this, *(unsigned int *)(*((unsigned int *)((char *)&v28) + 1) + 4 * (int)((char *)&v28))); /*0x76da29*/
      (*((void ((void **)(**))(void **))((char *)&v28) + 2))(&((char *)&v28)); /*0x76da36*/
    }
    while ( (*((uint8_t ((void **)(**))(void **))((char *)&v28) + 1))(&((char *)&v28)) ); /*0x76da41*/
  }
  ComPtr::Set((ComPtr *)(this + 1160), *(unsigned int *)(a3 + 4)); /*0x76da5d*/
  ((unsigned int *)&v28)[0] = &vt_VectorCursorMSAnimDynamicVectorClass; /*0x76da66*/
  v25.VectorCursor_field_0x18 = (int)&vt_VectorCursorMSAnimDynamicVectorClass; /*0x76da6a*/
  v25.VectorCursor_field_0x0C = (int)&vt_VectorCursorrc_ptrDynamicVectorClassrc_ptr; /*0x76da76*/
  ((unsigned int *)&v28)[0] = (int)&vt_VectorClass; /*0x76da7e*/
  if ( ((char *)&v28) && BYTE1(((char *)&v28)) ) /*0x76da8b*/
  {
    __3_YAXPAX_Z((void *)((char *)&v28)); /*0x76da8e*/
    ((unsigned int *)&v28)[0] = 0; /*0x76da96*/
  }
  v28.owningHouseIndex = (int)&vt_VectorClass; /*0x76da9e*/
  ((unsigned int *)&v28)[0] = 0; /*0x76daa2*/
  BYTE1(((char *)&v28)) = 0; /*0x76daa9*/
  if ( v28.fallRate ) /*0x76daaf*/
  {
    if ( BYTE1(v28.attachedTag) ) /*0x76dab7*/
      __3_YAXPAX_Z((void *)v28.fallRate); /*0x76daba*/
  }

}
}
// 0x76F090
namespace gamemd {
unsigned int * Trigger::processTrigger(int a2, int a3, void *a3_2)
{

  this->Trigger_field_0x4 = (MSAnim *)a2; /*0x76f09a*/
  *(unsigned int *)this->__pad_8 = a3; /*0x76f09d*/
  *(unsigned int *)this->__pad_0 = &vt_VectorCursorMSSfxEntryDynamicVectorClass; /*0x76f0a0*/
  return this->__pad_0; /*0x76f0a6*/

}
}
// 0x76F1C0
namespace gamemd {
unsigned int * Trigger::checkCondition(int aP1, int aP2)
{

  this->Trigger_field_0x4 = 0; /*0x76f1cb*/
  *(unsigned int *)this->__pad_8 = (unsigned int)(aP1); /*0x76f1ce*/
  this->__pad_8[4] = 1; /*0x76f1d1*/
  this->__pad_8[5] = 0; /*0x76f1d5*/
  *(unsigned int *)this->__pad_0 = &vt_VectorClass; /*0x76f1d8*/
  if ( aP1 ) /*0x76f1de*/
  {
    if ( aP2 ) /*0x76f1e6*/
    {
      this->Trigger_field_0x4 = (unsigned int)((MSAnim *)aP2); /*0x76f1e8*/
      return this->__pad_0; /*0x76f1ee*/
    }
    this->Trigger_field_0x4 = (MSAnim *)__2_YAPAXI_Z(4 * aP1); /*0x76f1fd*/
    this->__pad_8[5] = 1; /*0x76f200*/
  }
  return this->__pad_0; /*0x76f1ed*/

}
}
// 0x76FF20
namespace gamemd {
int Trigger::executeActions(int a2, void *a2_2)
{

  this->Trigger_field_0x2C = (void *)a2; /*0x76ff24*/
  return a2; /*0x76ff27*/

}
}