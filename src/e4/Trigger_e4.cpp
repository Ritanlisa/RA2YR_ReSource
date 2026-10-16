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
namespace gamemd {  // G42.18 ns repair
int Trigger::EnableOnce(char aP1, void *a2)
{


  int result; // eax
  LOBYTE(result) = this->q048; /*0x554a60*/
  if ( !(unsigned char)result ) /*0x554a65*/
  {
    LOBYTE(this->q048) = 1; /*0x554a6b*/
    return ((TacticalClass *)this)->ScrollView(aP1); /*0x554a70*/
  }
  return result; /*0x554a75*/

}
}  // G42.18 ns repair
// 0x5CBD20
namespace gamemd {
MSShapeAnim * * Trigger::initTrigger(char **aP1, int aP2, int a4, int a5, int a6, int a7, int aP7)
{


  *(unsigned int *)this->__pad_008 = a4; /*0x5cbd2c*/
  this->ptr_4 = (MSAnim *)aP2; /*0x5cbd32*/
  this->q00C = 1; /*0x5cbd35*/
  this->q010 = (int)((void *)Timer::GetTicks()); /*0x5cbd48*/
  *(unsigned int *)this->ptr_18 = 0; /*0x5cbd4f*/
  *&this->q020 = a5; /*0x5cbd52*/
  *&this->u32_38 = a7; /*0x5cbd58*/
  *&this->q024 = (gamemd::MSShapeAnim *)(a6); /*0x5cbd5f*/
  *&this->u32_28 = 0; /*0x5cbd62*/
  this->__pad_30[4] = 0; /*0x5cbd65*/
  this->u32_3C = 0; /*0x5cbd68*/
  *(unsigned int *)this->__pad_000 = (unsigned int)(&vt_MSShapeAnim); /*0x5cbd6a*/
  int FileClassToBuffer; // eax
  FileClassToBuffer = LoadFileClassToBuffer(aP1, &this->u32_3C); /*0x5cbd70*/
  *&this->__pad_01C = FileClassToBuffer; /*0x5cbd75*/
  this->Trigger_field_0x2C = 0; /*0x5cbd78*/
  int v10; // edx
  v10 = *(__int16 *)(FileClassToBuffer + 6) - 1; /*0x5cbd83*/
  *&this->u32_44 = aP7; /*0x5cbd84*/
  *(unsigned int *)this->__pad_30 = v10; /*0x5cbd87*/
  *&this->q040 = 0; /*0x5cbd8a*/
  *(unsigned int *)this->__pad_0 = &vt_MSFadeAnim; /*0x5cbd8d*/
  return (gamemd::MSShapeAnim **)(this); /*0x5cbd95*/

}
}
// 0x76D4D0
namespace gamemd {
void Trigger::ProcessMapEvents(int *a1, int * a2, int a3, int a4, char a5, char a6)
{

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

  void *inited = 0; // ebx /*0x76d4da*/
  int v7; // eax
  v7 = Count::Get(&this->__pad_458); /*0x76d4e3*/
  ((int)(&v25))->Construct(v7 + 44, 0); /*0x76d4f0*/
  while ( (*(unsigned __int8 (**)(VectorCursor *))(*(unsigned int *)v25.__pad_000 + 4))(&v25) ) /*0x76d4fd*/
  {
    WDTObject *v8; // eax
    v8 = (WDTObject *)((FileClass *)(*(unsigned int *)(v25.q004 + 4) /*0x76d512*/ + 8 * v25.VectorCursor_field_0x08))->SetState();
    v9 = (int (***)(unsigned int, int))(v8)->GetAndClearFlag(); /*0x76d519*/
    if ( v9 ) /*0x76d520*/
      ((Session *)this)->RemoveTeam(v9); /*0x76d525*/
    (*(void (**)(VectorCursor *))(*(unsigned int *)v25.__pad_000 + 8))(&v25); /*0x76d532*/
  }
  v24 = (gamemd::ObjectClass *)(a2); /*0x76d545*/
  Trigger::checkCondition((int)((Trigger *)&v28.owningHouseIndex), 0, 0); /*0x76d54c*/
  v28.owningHouseIndex = (int)&vt_DynamicVectorClass; /*0x76d561*/
  v28.ambientSoundController[0] = 10; /*0x76d565*/
  v28.attachedBomb = 0; /*0x76d569*/
  Trigger::checkCondition((Trigger *)&v28.?, 0, 0); /*0x76d56d*/
  v10 = this->u32_45C; /*0x76d572*/
  v28.q45C = (int)&vt_DynamicVectorClass; /*0x76d57c*/
  v28.occupant = 10; /*0x76d585*/
  v28.q45C = 0; /*0x76d589*/
  VectorCursor::Construct((VectorCursor *)&v25.u32_C, v10 + 44, 0); /*0x76d58d*/
  while ( (*(unsigned __int8 (**)(int *))(v25.u32_C + 4))(&v25.u32_C) )
  {
    v11 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)(v25.q010 + 4) + 8 * v25.VectorCursor_field_0x14 + 4) + 8); /*0x76d5bc*/
    CellType = (*&this->u32_84)->GetCellType((void *)(v11)); /*0x76d5cd*/
    v13 = WDTClass::GetCellType(a3->FilePointer, v11); /*0x76d5d7*/
    if ( v13 != CellType ) /*0x76d5db*/
    {
      ((DDraw *)this)->HandleSuspend(); /*0x76d5df*/
      while ( (*(EventQueue **)&g_BinkMoviePlayer)->Process() ) /*0x76d5ea*/
      {
        if ( (*(EventQueue **)&g_BinkMoviePlayer)->Read() == 27 ) /*0x76d603*/
          this->u32_444 = 1; /*0x76d605*/
      }
      v14 = !this->u32_444 || a5; /*0x76d635*/
      Map_Process_76FD40( /*0x76d64f*/
        *(unsigned int *)(*(unsigned int *)(v25.q010 + 4) + 8 * v25.VectorCursor_field_0x14 + 4),
        CellType,
        v13,
        v13,
        (int *)this,
        v14);
    }
    if ( a4 && v13 == 1 )
    {
      v15 = *(unsigned int *)(*(unsigned int *)(v25.q010 + 4) + 8 * v25.VectorCursor_field_0x14 + 4); /*0x76d67a*/
      v16 = *(unsigned int *)(v15 + 16) + *(unsigned int *)(this->u32_45C + 68); /*0x76d695*/
      v17 = *(unsigned int *)(this->u32_45C + 72) + *(unsigned int *)(v15 + 20); /*0x76d69a*/
      if ( this->u32_470 ) /*0x76d68f*/
      {
        CCFileClass::Construct2((char **)((CCFileClass *)&v28.ambientSoundController[1]), this->u32_470); /*0x76d6a9*/
        if ( (unsigned __int8)((int)((CCFileClass *)&v28.ambientSoundController[1]))->Open(0) ) /*0x76d6b3*/
        {
          v18 = (Trigger *)__2_YAPAXI_Z(0x48u); /*0x76d6be*/
          if ( v18 ) /*0x76d6c8*/
            inited = Trigger::initTrigger( /*0x76d6ec*/
                       v18,
                       *&this->u8_4706,
                       v16,
                       v17,
                       this->u32_46C,
                       3,
                       512,
                       &this->ptr_18);
          if ( (int)v28.attachedBomb < (int)v28.nextObject /*0x76d71b*/
            || (BYTE1(v28.attachedTag) || !v28.nextObject)
            && v28.ambientSoundController[0] > 0
            && (*(unsigned __int8 (**)(int *, char *, unsigned int))(v28.owningHouseIndex + 8))(
                 &v28.owningHouseIndex,
                 (char *)v28.nextObject + v28.ambientSoundController[0],
                 0) )
          {
            v19 = v28.attachedBomb++; /*0x76d726*/
            *(unsigned int *)(v28.fallRate + 4 * (unsigned int)v19) = (unsigned int)(inited); /*0x76d731*/
          }
          inited = 0; /*0x76d734*/
        }
        v28.ambientSoundController[1] = (int)&vt_CCFileClass; /*0x76d73d*/
        v28.location[2] = 0; /*0x76d745*/
        ((void*)(&v28.isInLogic))->Clear(); /*0x76d74c*/
        v28.ambientSoundController[1] = (int)&off_7E1668; /*0x76d755*/
        ((BufferIOFileClass *)&v28.ambientSoundController[1])->Dtor(); /*0x76d75d*/
      }
      CCFileClass::Construct2((char **)(&v29), this->u8_474); /*0x76d770*/
      if ( (unsigned __int8)((int)(&v29))->Open(0) )
      {
        v20 = (MSShapeAnim *)__2_YAPAXI_Z(0x40u); /*0x76d78c*/
        v21 = v20
        ? (MSAnim *)MSShapeAnim::Constructor(
                          v20,
                          this->u8_474,
                          v16,
                          v17,
                          this->u32_46C,
                          5,
                          1,
                          512)
        : 0;
        (v21)->SetField(this->u32_478 - 1); /*0x76d7c8*/
        (v21)->GetField(0); /*0x76d7d0*/
        TerritoryUpdateDisplayWOL((ObjectClass *)v21, 0); /*0x76d7d8*/
        (/*0x76d7f0*/ *(Trigger **)(*(unsigned int *)(v25.VectorCursor_field_0x10 + 4) + 8 * v25.VectorCursor_field_0x14 + 4))->executeActions((int)v21);
        if ( (int)v28.vtable3 < v28.vtable3 /*0x76d821*/
          || (BYTE1(v28.?) || !v28.?)
          && v28.occupant > 0
          && (*(unsigned __int8 (**)(int *, int, unsigned int))(v28.? + 8))(&v28.?, v28.occupant + v28.?, 0) )
        {
          v22 = v28.vtable2++; /*0x76d82c*/
          *(unsigned int *)(v28.vtable2 + 4 * (unsigned int)v22) = (unsigned int)(v21); /*0x76d837*/
        }
      }
      *(unsigned int *)v29.CDFileClass = &vt_CCFileClass; /*0x76d841*/
      v31 = 0; /*0x76d84c*/
      ((void *)((int)v30))->Clear(); /*0x76d853*/
      ((BufferIOFileClass *)&v29)->Destruct(); /*0x76d85f*/
    }
    (*(void (**)(int *))(v25.u32_C + 8))(&v25.u32_C); /*0x76d86c*/
  }
  p_owningHouseIndex = (int *)(&v28.owningHouseIndex); /*0x76d88b*/
  v27 = 0; /*0x76d897*/
  v25.q018 = (int)&vt_VectorCursorMSAnimDynamicVectorClass; /*0x76d89b*/
  v28.? = &v28.?; /*0x76d89f*/
  v28.? = 0; /*0x76d8a3*/
  /* X11: vtable install elided (qmark slot, RHS vt_VectorCursorMSAnimDynamicVectorClass) */  /*0x76d8a7*/
  if ( CampaignProperties_WorldDominationTour_22::AddRef(&v28.?) ) /*0x76d8ab*/
  {
    do /*0x76da41*/
    {
      ((DDraw *)this)->HandleSuspend(); /*0x76d8c0*/
      while ( (*(EventQueue **)&g_BinkMoviePlayer)->Process() ) /*0x76d8cb*/
      {
        if ( (*(EventQueue **)&g_BinkMoviePlayer)->Read() == 27 ) /*0x76d8e4*/
          this->u32_444 = 1; /*0x76d8e6*/
      }
      if ( (*(unsigned __int8 (**)(int *))(v25.q018 + 4))(&v25.q018) ) /*0x76d905*/
      {
        if ( this->u32_444 ) /*0x76d910*/
        {
          v23 = *(void (****)(unsigned int, int))(p_owningHouseIndex[1] + 4 * v27); /*0x76d925*/
          if ( v23 ) /*0x76d92a*/
            (**v23)(v23, 1); /*0x76d934*/
        }
        else
        {
          ((String *)&v28)->Assign(aTargetzoom); /*0x76d944*/
          if ( (unsigned __int8)String::NotEquals((String *)&v28, 0) ) /*0x76d94e*/
          {
            ((int)((Trigger *)&v25))->processTrigger(&this->__pad_494, 0); /*0x76d963*/
            while ( (*(unsigned __int8 (**)(VectorCursor *))(*(unsigned int *)v25.__pad_000 + 4))(&v25) ) /*0x76d970*/
            {
              if ( !(unsigned __int8)((const char **)(/*0x76d98a*/ (String *)&v28))->Compare(*(const char ***)(*(unsigned int *)(v25.q004 + 4) + 4 * v25.VectorCursor_field_0x08)) )
                break; /*0x76d991*/
              (*(void (**)(VectorCursor *))(*(unsigned int *)v25.__pad_000 + 8))(&v25); /*0x76d99b*/
            }
            if ( (*(unsigned __int8 (**)(VectorCursor *))(*(unsigned int *)v25.__pad_000 + 4))(&v25) ) /*0x76d9b5*/
              nullsub_24(v24); /*0x76d9ca*/
            *(unsigned int *)v25.__pad_000 = &vt_VectorCursorMSSfxEntryDynamicVectorClass; /*0x76d9cf*/
          }
          DeleteAndZero(&v28); /*0x76d9d7*/
          PriorityQueue::Add((int)((PriorityQueue *)this), *(unsigned int *)(p_owningHouseIndex[1] + 4 * v27)); /*0x76d9ed*/
          ((MSEngine *)this)->ProcessEvents(*(unsigned int *)(p_owningHouseIndex[1] + 4 * v27), 300000); /*0x76da08*/
        }
        (*(void (**)(int *))(v25.VectorCursor_field_0x18 + 8))(&v25.VectorCursor_field_0x18); /*0x76da15*/
      }
      PriorityQueue::Add((int)((PriorityQueue *)this), *(unsigned int *)(*((unsigned int *)v28.vtable2 + 1) + 4 * (int)v28.vtable2)); /*0x76da29*/
      (*((void (**)(void **))v28.vtable2 + 2))(&v28.vtable2); /*0x76da36*/
    }
    while ( (*((unsigned __int8 (**)(void **))v28.vtable2 + 1))(&v28.vtable2) ); /*0x76da41*/
  }
  ComPtr::Set(&this->ComPtr_488, a3->FilePointer); /*0x76da5d*/
  /* X11: vtable install elided (implicit via VectorCursor virtuals 0x76da66) */
  v25.q018 = (int)&vt_VectorCursorMSAnimDynamicVectorClass; /*0x76da6a*/
  v25.VectorCursor_field_0x0C = (int)&vt_VectorCursorrc_ptrDynamicVectorClassrc_ptr; /*0x76da76*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x76da7e) */
  if ( v28.vtable2 && BYTE1(v28.vtable2) ) /*0x76da8b*/
  {
    __3_YAXPAX_Z(v28.vtable2); /*0x76da8e*/
    v28.vtable2 = 0; /*0x76da96*/
  }
  v28.owningHouseIndex = (int)&vt_VectorClass; /*0x76da9e*/
  v28.vtable2 = 0; /*0x76daa2*/
  BYTE1(v28.vtable2) = 0; /*0x76daa9*/
  if ( v28.fallRate ) /*0x76daaf*/
  {
    if ( BYTE1(v28.attachedTag) ) /*0x76dab7*/
      __3_YAXPAX_Z((void *)v28.fallRate); /*0x76daba*/
  }

}
}
// 0x76F090
namespace gamemd {
unsigned int * Trigger::processTrigger(int a2, int a3)
{

  this->ptr_4 = (MSAnim *)a2; /*0x76f09a*/
  *(unsigned int *)this->__pad_008 = a3; /*0x76f09d*/
  *(unsigned int *)this->__pad_000 = &vt_VectorCursorMSSfxEntryDynamicVectorClass; /*0x76f0a0*/
  return this->__pad_0; /*0x76f0a6*/

}
}
// 0x76F1C0
namespace gamemd {
unsigned int * Trigger::checkCondition(int aP1, int aP2, void *a3)
{

  this->ptr_4 = 0; /*0x76f1cb*/
  *(unsigned int *)this->__pad_008 = aP1; /*0x76f1ce*/
  this->q00C = 1; /*0x76f1d1*/
  this->__pad_8[5] = 0; /*0x76f1d5*/
  *(unsigned int *)this->__pad_000 = &vt_VectorClass; /*0x76f1d8*/
  if ( aP1 ) /*0x76f1de*/
  {
    if ( aP2 ) /*0x76f1e6*/
    {
      this->Trigger_field_0x4 = (MSAnim *)aP2; /*0x76f1e8*/
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
int Trigger::executeActions(int a2, void *a2_1)
{

  this->q02C = (void *)a2; /*0x76ff24*/
  return a2; /*0x76ff27*/

}
}