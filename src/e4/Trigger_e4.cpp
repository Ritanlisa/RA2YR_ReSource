// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/EventQueue_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
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
#include "e4/classes/PriorityQueue_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers

// 0x554A60
namespace gamemd {
int Trigger::EnableOnce(char aP1)
{
  int result; // eax

  IDA_LOBYTE(result) = this->q048; /*0x554a60*/
  if ( !(_BYTE)result ) /*0x554a65*/
  {
    IDA_LOBYTE(this->q048) = 1; /*0x554a6b*/
    return TacticalClass::ScrollView(aP1); /*0x554a70*/
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

  *(_DWORD *)this->q008 = a4; /*0x5cbd2c*/
  this->ptr_4 = (MSAnim *)aP2; /*0x5cbd32*/
  this->q008[4] = 1; /*0x5cbd35*/
  this->q010 = (void *)Timer::GetTicks(); /*0x5cbd48*/
  *(_DWORD *)this->q018 = 0; /*0x5cbd4f*/
  *(_DWORD *)&this->q018[8] = a5; /*0x5cbd52*/
  *(_DWORD *)&this->__pad_30[8] = a7; /*0x5cbd58*/
  *(_DWORD *)&this->q018[12] = a6; /*0x5cbd5f*/
  *(_DWORD *)&this->q018[16] = 0; /*0x5cbd62*/
  this->__pad_30[4] = 0; /*0x5cbd65*/
  this->__pad_30[12] = 0; /*0x5cbd68*/
  *(_DWORD *)this->q000 = &(void*)(void*)&MSShapeAnim_vftable; /*0x5cbd6a*/
  FileClassToBuffer = LoadFileClassToBuffer(aP1, (bool *)&this->__pad_30[12]); /*0x5cbd70*/
  *(_DWORD *)&this->q018[4] = FileClassToBuffer; /*0x5cbd75*/
  this->q02C = 0; /*0x5cbd78*/
  v10 = *(__int16 *)(FileClassToBuffer + 6) - 1; /*0x5cbd83*/
  *(_DWORD *)&this->__pad_30[20] = aP7; /*0x5cbd84*/
  *(_DWORD *)this->__pad_30 = v10; /*0x5cbd87*/
  *(_DWORD *)&this->__pad_30[16] = 0; /*0x5cbd8a*/
  *(_DWORD *)this->q000 = &(void*)(void*)&MSFadeAnim_vftable; /*0x5cbd8d*/
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
  int (__thiscall ***v9)(_DWORD, int); // eax
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
  void (__thiscall ***v23)(_DWORD, int); // ecx
  VectorCursor v25; // [esp+10h] [ebp-13Ch] BYREF
  int *p_owningHouseIndex; // [esp+2Ch] [ebp-120h]
  int v27; // [esp+30h] [ebp-11Ch]
  ObjectClass v28; // [esp+34h] [ebp-118h] BYREF
  CCFileClass v29; // [esp+E0h] [ebp-6Ch] BYREF
  int v30[3]; // [esp+138h] [ebp-14h] BYREF
  int v31; // [esp+144h] [ebp-8h]

  inited = 0; /*0x76d4da*/
  v7 = Count::Get((Count *)(this + 1112)); /*0x76d4e3*/
  VectorCursor::Construct(&v25, v7 + 44, 0); /*0x76d4f0*/
  while ( (*(unsigned __int8 (__thiscall **)(VectorCursor *))(*(_DWORD *)v25.q000 + 4))(&v25) ) /*0x76d4fd*/
  {
    v8 = (WDTObject *)FileClass::SetState((FileClass *)(*(_DWORD *)(v25.q004 + 4) /*0x76d512*/
                                                      + 8 * v25.q008));
    v9 = (int (__thiscall ***)(_DWORD, int))WDTObject::GetAndClearFlag(v8); /*0x76d519*/
    if ( v9 ) /*0x76d520*/
      Session::RemoveTeam(v9); /*0x76d525*/
    (*(void (__thiscall **)(VectorCursor *))(*(_DWORD *)v25.q000 + 8))(&v25); /*0x76d532*/
  }
  a2 = a2; /*0x76d545*/
  Trigger::checkCondition((Trigger *)&v28.owningHouseIndex, 0, 0); /*0x76d54c*/
  v28.owningHouseIndex = (int)&(void*)(void*)&DynamicVectorClass_MSAnim___vftable; /*0x76d561*/
  v28.ambientSoundController[0] = 10; /*0x76d565*/
  v28.attachedBomb = 0; /*0x76d569*/
  Trigger::checkCondition((Trigger *)&v28.uniqueId, 0, 0); /*0x76d56d*/
  v10 = this->u32_45C; /*0x76d572*/
  v28.uniqueId = (int)&(void*)(void*)&DynamicVectorClass_MSAnim___vftable; /*0x76d57c*/
  v28.occupant = 10; /*0x76d585*/
  v28.NeedsSaveOrLink = 0; /*0x76d589*/
  VectorCursor::Construct((VectorCursor *)&v25.q00C, v10 + 44, 0); /*0x76d58d*/
  while ( (*(unsigned __int8 (__thiscall **)(int *))(v25.q00C + 4))(&v25.q00C) )
  {
    v11 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v25.q010 + 4) + 8 * v25.q014 + 4) + 8); /*0x76d5bc*/
    CellType = WDTClass::GetCellType(*(WDTClass **)(this + 1164), v11); /*0x76d5cd*/
    v13 = WDTClass::GetCellType(*(WDTClass **)(a3 + 4), v11); /*0x76d5d7*/
    if ( v13 != CellType ) /*0x76d5db*/
    {
      DDraw::HandleSuspend(); /*0x76d5df*/
      while ( EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]) ) /*0x76d5ea*/
      {
        if ( EventQueue::Read(*(EventQueue **)&stru_87F5F0.__pad_58[296]) == 27 ) /*0x76d603*/
          this->u32_444 = 1; /*0x76d605*/
      }
      v14 = !this->u32_444 || a5; /*0x76d635*/
      Map_Process_76FD40( /*0x76d64f*/
        *(_DWORD *)(*(_DWORD *)(v25.q010 + 4) + 8 * v25.q014 + 4),
        CellType,
        v13,
        v13,
        (int *)this,
        v14);
    }
    if ( a4 && v13 == 1 )
    {
      v15 = *(_DWORD *)(*(_DWORD *)(v25.q010 + 4) + 8 * v25.q014 + 4); /*0x76d67a*/
      v16 = *(_DWORD *)(v15 + 16) + *(_DWORD *)(this->u32_45C + 68); /*0x76d695*/
      v17 = *(_DWORD *)(this->u32_45C + 72) + *(_DWORD *)(v15 + 20); /*0x76d69a*/
      if ( this->u32_470 ) /*0x76d68f*/
      {
        CCFileClass::Construct2((CCFileClass *)&v28.ambientSoundController[1], this->u32_470); /*0x76d6a9*/
        if ( (unsigned __int8)CCFileClass::Open((CCFileClass *)&v28.ambientSoundController[1], 0) ) /*0x76d6b3*/
        {
          v18 = (Trigger *)RA2_OPNEW(0x48u); /*0x76d6be*/
          if ( v18 ) /*0x76d6c8*/
            inited = Trigger::initTrigger( /*0x76d6ec*/
                       v18,
                       this->u32_470,
                       v16,
                       v17,
                       this->u32_46C,
                       3,
                       512,
                       &this->u32_84);
          if ( (int)v28.attachedBomb < (int)v28.nextObject /*0x76d71b*/
            || (IDA_BYTE1(v28.attachedTag) || !v28.nextObject)
            && v28.ambientSoundController[0] > 0
            && (*(unsigned __int8 (__thiscall **)(int *, char *, _DWORD))(v28.owningHouseIndex + 8))(
                 &v28.owningHouseIndex,
                 (char *)v28.nextObject + v28.ambientSoundController[0],
                 0) )
          {
            v19 = v28.attachedBomb++; /*0x76d726*/
            *(_DWORD *)(v28.fallRate + 4 * (_DWORD)v19) = inited; /*0x76d731*/
          }
          inited = 0; /*0x76d734*/
        }
        v28.ambientSoundController[1] = (int)&(void*)(void*)&CCFileClass_vftable; /*0x76d73d*/
        v28.location[2] = 0; /*0x76d745*/
        Vector::Clear((int)&v28.isInLogic); /*0x76d74c*/
        v28.ambientSoundController[1] = (int)&off_7E1668; /*0x76d755*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v28.ambientSoundController[1]); /*0x76d75d*/
      }
      CCFileClass::Construct2(&v29, *(char ***)(this + 1140)); /*0x76d770*/
      if ( (unsigned __int8)CCFileClass::Open(&v29, 0) )
      {
        v20 = (MSShapeAnim *)RA2_OPNEW(0x40u); /*0x76d78c*/
        v21 = v20
            ? (MSAnim *)MSShapeAnim::Constructor(
                          v20,
                          *(char ***)(this + 1140),
                          v16,
                          v17,
                          this->u32_46C,
                          5,
                          1,
                          512)
            : 0;
        MSAnim::SetField(v21, this->u32_478 - 1); /*0x76d7c8*/
        MSAnim::GetField(v21, 0); /*0x76d7d0*/
        TerritoryUpdateDisplayWOL((ObjectClass *)v21, 0); /*0x76d7d8*/
        Trigger::executeActions( /*0x76d7f0*/
          *(Trigger **)(*(_DWORD *)(v25.q010 + 4) + 8 * v25.q014 + 4),
          (int)v21);
        if ( (int)v28.NeedsSaveOrLink < v28.nextArrayIndex /*0x76d821*/
          || (IDA_BYTE1(v28.referenceCount) || !v28.nextArrayIndex)
          && v28.occupant > 0
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(v28.uniqueId + 8))(
               &v28.uniqueId,
               v28.occupant + v28.nextArrayIndex,
               0) )
        {
          v22 = v28.NeedsSaveOrLink++; /*0x76d82c*/
          *(_DWORD *)(v28.abstractFlags + 4 * (_DWORD)v22) = v21; /*0x76d837*/
        }
      }
      *(_DWORD *)v29.__tail_0 = &(void*)(void*)&CCFileClass_vftable; /*0x76d841*/
      v31 = 0; /*0x76d84c*/
      Vector::Clear((int)v30); /*0x76d853*/
      BufferIOFileClass::Destruct((BufferIOFileClass *)&v29); /*0x76d85f*/
    }
    (*(void (__thiscall **)(int *))(v25.q00C + 8))(&v25.q00C); /*0x76d86c*/
  }
  p_owningHouseIndex = &v28.owningHouseIndex; /*0x76d88b*/
  v27 = 0; /*0x76d897*/
  v25.q018 = (int)&(void*)(void*)&VectorCursor_MSAnim___DynamicVectorClass_MSAnim___vftable; /*0x76d89b*/
  v28.vfptr2 = &v28.uniqueId; /*0x76d89f*/
  v28.vfptr3 = 0; /*0x76d8a3*/
  v28.vfptr1 = &(void*)(void*)&VectorCursor_MSAnim___DynamicVectorClass_MSAnim___vftable; /*0x76d8a7*/
  if ( CampaignProperties_WorldDominationTour_22::AddRef(&v28.vfptr1) ) /*0x76d8ab*/
  {
    do /*0x76da41*/
    {
      DDraw::HandleSuspend(); /*0x76d8c0*/
      while ( EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]) ) /*0x76d8cb*/
      {
        if ( EventQueue::Read(*(EventQueue **)&stru_87F5F0.__pad_58[296]) == 27 ) /*0x76d8e4*/
          this->u32_444 = 1; /*0x76d8e6*/
      }
      if ( (*(unsigned __int8 (__thiscall **)(int *))(v25.q018 + 4))(&v25.q018) ) /*0x76d905*/
      {
        if ( this->u32_444 ) /*0x76d910*/
        {
          v23 = *(void (__thiscall ****)(_DWORD, int))(p_owningHouseIndex[1] + 4 * v27); /*0x76d925*/
          if ( v23 ) /*0x76d92a*/
            (**v23)(v23, 1); /*0x76d934*/
        }
        else
        {
          String::Assign((String *)&v28, aTargetzoom); /*0x76d944*/
          if ( (unsigned __int8)String::NotEquals((String *)&v28, 0) ) /*0x76d94e*/
          {
            Trigger::processTrigger((Trigger *)&v25, this + 1172, 0); /*0x76d963*/
            while ( (*(unsigned __int8 (__thiscall **)(VectorCursor *))(*(_DWORD *)v25.q000 + 4))(&v25) ) /*0x76d970*/
            {
              if ( !(unsigned __int8)String::Compare( /*0x76d98a*/
                                       (String *)&v28,
                                       *(const char ***)(*(_DWORD *)(v25.q004 + 4)
                                                       + 4 * v25.q008)) )
                break; /*0x76d991*/
              (*(void (__thiscall **)(VectorCursor *))(*(_DWORD *)v25.q000 + 8))(&v25); /*0x76d99b*/
            }
            if ( (*(unsigned __int8 (__thiscall **)(VectorCursor *))(*(_DWORD *)v25.q000 + 4))(&v25) ) /*0x76d9b5*/
              nullsub_24(a2); /*0x76d9ca*/
            *(_DWORD *)v25.q000 = &(void*)(void*)&VectorCursor_MSSfxEntry___DynamicVectorClass_MSSfxEntry___vftable; /*0x76d9cf*/
          }
          DeleteAndZero(&v28); /*0x76d9d7*/
          PriorityQueue::Add(*(_DWORD *)(p_owningHouseIndex[1] + 4 * v27)); /*0x76d9ed*/
          MSEngine::ProcessEvents(*(_DWORD *)(p_owningHouseIndex[1] + 4 * v27), 300000); /*0x76da08*/
        }
        (*(void (__thiscall **)(int *))(v25.q018 + 8))(&v25.q018); /*0x76da15*/
      }
      PriorityQueue::Add(*(_DWORD *)(*((_DWORD *)v28.vfptr2 + 1) + 4 * (int)v28.vfptr3)); /*0x76da29*/
      (*((void (__thiscall **)(void **))v28.vfptr1 + 2))(&v28.vfptr1); /*0x76da36*/
    }
    while ( (*((unsigned __int8 (__thiscall **)(void **))v28.vfptr1 + 1))(&v28.vfptr1) ); /*0x76da41*/
  }
  ComPtr::Set((ComPtr *)(this + 1160), *(_DWORD *)(a3 + 4)); /*0x76da5d*/
  v28.vfptr1 = &(void*)(void*)&VectorCursor_MSAnim___DynamicVectorClass_MSAnim___vftable; /*0x76da66*/
  v25.q018 = (int)&(void*)(void*)&VectorCursor_MSAnim___DynamicVectorClass_MSAnim___vftable; /*0x76da6a*/
  v25.q00C = (int)&(void*)(void*)&VectorCursor_rc_ptr_WorldDominationTour_Territory_DynamicVectorClass_rc_ptr_WorldDominationTour_Territory_vftable; /*0x76da76*/
  v28.uniqueId = (int)&(void*)(void*)&VectorClass_MSAnim___vftable; /*0x76da7e*/
  if ( v28.abstractFlags && IDA_BYTE1(v28.referenceCount) ) /*0x76da8b*/
  {
    RA2_OPDEL((void *)v28.abstractFlags); /*0x76da8e*/
    v28.abstractFlags = 0; /*0x76da96*/
  }
  v28.owningHouseIndex = (int)&(void*)(void*)&VectorClass_MSAnim___vftable; /*0x76da9e*/
  v28.nextArrayIndex = 0; /*0x76daa2*/
  IDA_BYTE1(v28.referenceCount) = 0; /*0x76daa9*/
  if ( v28.fallRate ) /*0x76daaf*/
  {
    if ( IDA_BYTE1(v28.attachedTag) ) /*0x76dab7*/
      RA2_OPDEL((void *)v28.fallRate); /*0x76daba*/
  }
}
}
// 0x76F090
namespace gamemd {
unsigned int * Trigger::processTrigger(int a2, int a3)
{
  this->ptr_4 = (MSAnim *)a2; /*0x76f09a*/
  *(_DWORD *)this->q008 = a3; /*0x76f09d*/
  *(_DWORD *)this->q000 = &(void*)(void*)&VectorCursor_MSSfxEntry___DynamicVectorClass_MSSfxEntry___vftable; /*0x76f0a0*/
  return this->q000; /*0x76f0a6*/
}
}
// 0x76F1C0
namespace gamemd {
unsigned int * Trigger::checkCondition(int aP1, int aP2)
{
  this->ptr_4 = 0; /*0x76f1cb*/
  *(_DWORD *)this->q008 = aP1; /*0x76f1ce*/
  this->q008[4] = 1; /*0x76f1d1*/
  this->q008[5] = 0; /*0x76f1d5*/
  *(_DWORD *)this->q000 = &(void*)(void*)&VectorClass_MSAnim___vftable; /*0x76f1d8*/
  if ( aP1 ) /*0x76f1de*/
  {
    if ( aP2 ) /*0x76f1e6*/
    {
      this->ptr_4 = (MSAnim *)aP2; /*0x76f1e8*/
      return this->q000; /*0x76f1ee*/
    }
    this->ptr_4 = (MSAnim *)RA2_OPNEW(4 * aP1); /*0x76f1fd*/
    this->q008[5] = 1; /*0x76f200*/
  }
  return this->q000; /*0x76f1ed*/
}
}
// 0x76FF20
namespace gamemd {
int Trigger::executeActions(int a2)
{
  this->q02C = (void *)a2; /*0x76ff24*/
  return a2; /*0x76ff27*/
}
}