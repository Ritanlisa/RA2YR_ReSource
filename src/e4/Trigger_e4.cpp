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
#include "e4/e4_protos.h"

// 0x554A60
namespace gamemd {
int Trigger::EnableOnce(AbstractClass * aP1)
{
  char result; // al

  result = *(&this->u32_1C2); /*0x554a60*/
  if ( !result ) /*0x554a65*/
  {
    *(&this->u32_1C2) = 1; /*0x554a6b*/
    return TacticalClass::ScrollView(aP1); /*0x554a70*/
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

  this->u32_8 = a4; /*0x5cbd2c*/
  this->ptr_4 = aP2; /*0x5cbd32*/
  this->q00C = 1; /*0x5cbd35*/
  this->q010 = Timer::GetTicks(); /*0x5cbd48*/
  this->ptr_18 = 0; /*0x5cbd4f*/
  this->q020 = a5; /*0x5cbd52*/
  this->u32_38 = a7; /*0x5cbd58*/
  this->q024 = a6; /*0x5cbd5f*/
  this->u32_28 = 0; /*0x5cbd62*/
  this->u8_34 = 0; /*0x5cbd65*/
  this->u8_3C = 0; /*0x5cbd68*/
  *(_DWORD *)this = &(void*)(void*)&MSShapeAnim_vftable; /*0x5cbd6a*/
  FileClassToBuffer = LoadFileClassToBuffer(aP1, (bool *)&this->ptr_180); /*0x5cbd70*/
  this->u32_1C = FileClassToBuffer; /*0x5cbd75*/
  this->q02C = 0; /*0x5cbd78*/
  v10 = *(__int16 *)(FileClassToBuffer + 6) - 1; /*0x5cbd83*/
  this->u32_44 = aP7; /*0x5cbd84*/
  this->q030 = v10; /*0x5cbd87*/
  this->q040 = 0; /*0x5cbd8a*/
  *(_DWORD *)this = &(void*)(void*)&MSFadeAnim_vftable; /*0x5cbd8d*/
  return this; /*0x5cbd95*/
}
}
// 0x76D4D0
namespace gamemd {
void Trigger::ProcessMapEvents(int this@<ecx> a1, int *a2@<ebp> a2, int a3@<edi> a3, int a4, char a5, char a6)
{
  int v5; // ebx
  int v6; // eax
  _DWORD *v7; // eax
  int (__thiscall ***v8)(_DWORD, int); // eax
  int v9; // ecx
  unsigned int v10; // edi
  int CellType; // ebp
  int v12; // edi
  BOOL v13; // ecx
  int v14; // ecx
  int v15; // edi
  int v16; // ebp
  int v17; // eax
  _DWORD *v18; // edi
  int v19; // eax
  void (__thiscall ***v20)(_DWORD, int); // ecx
  void **v21; // [esp+10h] [ebp-13Ch] BYREF
  int v22; // [esp+14h] [ebp-138h]
  int v23; // [esp+18h] [ebp-134h]
  void **v24; // [esp+1Ch] [ebp-130h] BYREF
  int v25; // [esp+20h] [ebp-12Ch]
  int v26; // [esp+24h] [ebp-128h]
  void **v27; // [esp+28h] [ebp-124h] BYREF
  void ***v28; // [esp+2Ch] [ebp-120h]
  int v29; // [esp+30h] [ebp-11Ch]
  void *v30; // [esp+34h] [ebp-118h] BYREF
  void **v31; // [esp+38h] [ebp-114h] BYREF
  void ***v32; // [esp+3Ch] [ebp-110h]
  int v33; // [esp+40h] [ebp-10Ch]
  void **v34; // [esp+44h] [ebp-108h] BYREF
  void *Block; // [esp+48h] [ebp-104h]
  int v36; // [esp+4Ch] [ebp-100h]
  int v37; // [esp+50h] [ebp-FCh]
  int v38; // [esp+54h] [ebp-F8h]
  int v39; // [esp+58h] [ebp-F4h]
  void **v40; // [esp+5Ch] [ebp-F0h] BYREF
  void *v41; // [esp+60h] [ebp-ECh]
  int v42; // [esp+64h] [ebp-E8h]
  char v43; // [esp+69h] [ebp-E3h]
  int v44; // [esp+6Ch] [ebp-E0h]
  int v45; // [esp+70h] [ebp-DCh]
  _DWORD v46[22]; // [esp+74h] [ebp-D8h] BYREF
  _BYTE v47[12]; // [esp+CCh] [ebp-80h] BYREF
  int v48; // [esp+D8h] [ebp-74h]
  _DWORD v49[22]; // [esp+E0h] [ebp-6Ch] BYREF
  _BYTE v50[12]; // [esp+138h] [ebp-14h] BYREF
  int v51; // [esp+144h] [ebp-8h]

  v5 = 0; /*0x76d4da*/
  v6 = Count::Get((_DWORD *)(&this->u32_1BC2)); /*0x76d4e3*/
  VectorCursor::Construct(&v21, v6 + 44, 0); /*0x76d4f0*/
  while ( ((unsigned __int8 (__thiscall *)(void ***))v21[1])(&v21) ) /*0x76d4fd*/
  {
    v7 = (_DWORD *)FileClass::SetState(*(_DWORD *)(v22 + 4) + 8 * v23); /*0x76d512*/
    v8 = (int (__thiscall ***)(_DWORD, int))WDTObject::GetAndClearFlag(v7); /*0x76d519*/
    if ( v8 ) /*0x76d520*/
      Session::RemoveTeam(v8); /*0x76d525*/
    ((void (__thiscall *)(void ***))v21[2])(&v21); /*0x76d532*/
  }
  Trigger::checkCondition(0, 0); /*0x76d54c*/
  v40 = &(void*)(void*)&DynamicVectorClass_MSAnim___vftable; /*0x76d561*/
  v45 = 10; /*0x76d565*/
  v44 = 0; /*0x76d569*/
  Trigger::checkCondition(0, 0); /*0x76d56d*/
  v9 = this->u32_45C; /*0x76d572*/
  v34 = &(void*)(void*)&DynamicVectorClass_MSAnim___vftable; /*0x76d57c*/
  v39 = 10; /*0x76d585*/
  v38 = 0; /*0x76d589*/
  VectorCursor::Construct(&v24, v9 + 44, 0); /*0x76d58d*/
  while ( ((unsigned __int8 (__thiscall *)(void ***))v24[1])(&v24) )
  {
    v10 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v25 + 4) + 8 * v26 + 4) + 8); /*0x76d5bc*/
    CellType = WDTClass::GetCellType(*(_DWORD **)(&this->u32_1D04), v10); /*0x76d5cd*/
    v12 = WDTClass::GetCellType(*(_DWORD **)(a2 + 4), v10); /*0x76d5d7*/
    if ( v12 != CellType ) /*0x76d5db*/
    {
      DDraw::HandleSuspend(); /*0x76d5df*/
      while ( EventQueue::Process(g_BinkMoviePlayer) ) /*0x76d5ea*/
      {
        if ( EventQueue::Read(g_BinkMoviePlayer) == 27 ) /*0x76d603*/
          this->q444 = 1; /*0x76d605*/
      }
      v13 = !this->q444 || a4; /*0x76d635*/
      Map_Process_76FD40(v12, this, v13); /*0x76d64f*/
    }
    if ( a3 && v12 == 1 )
    {
      v14 = *(_DWORD *)(*(_DWORD *)(v25 + 4) + 8 * v26 + 4); /*0x76d67a*/
      v15 = *(_DWORD *)(v14 + 16) + *(_DWORD *)(this->u32_45C + 68); /*0x76d695*/
      v16 = *(_DWORD *)(this->u32_45C + 72) + *(_DWORD *)(v14 + 20); /*0x76d69a*/
      if ( this->ptr_470 ) /*0x76d68f*/
      {
        CCFileClass::Construct2(v46, *(char ***)(&this->u32_1C46)); /*0x76d6a9*/
        if ( CCFileClass::Open(v46, 0) ) /*0x76d6b3*/
        {
          if ( RA2_OPNEW(0x48u) ) /*0x76d6be*/
            v5 = Trigger::initTrigger(this->ptr_470, v15, v16, this->u32_46C, 3, 512, &this->u32_84); /*0x76d6ec*/
          if ( v44 < v42 /*0x76d71b*/
            || (v43 || !v42)
            && v45 > 0
            && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v40[2])(&v40, v45 + v42, 0) )
          {
            v17 = v44++; /*0x76d726*/
            *((_DWORD *)v41 + v17) = v5; /*0x76d731*/
          }
          v5 = 0; /*0x76d734*/
        }
        v46[0] = &(void*)(void*)&CCFileClass_vftable; /*0x76d73d*/
        v48 = 0; /*0x76d745*/
        Vector::Clear((int)v47); /*0x76d74c*/
        v46[0] = &off_7E1668; /*0x76d755*/
        BufferIOFileClass::Dtor(v46); /*0x76d75d*/
      }
      CCFileClass::Construct2(v49, *(char ***)(&this->u32_1C80)); /*0x76d770*/
      if ( CCFileClass::Open(v49, 0) )
      {
        v18 = RA2_OPNEW(0x40u)
            ? (_DWORD *)MSShapeAnim::Constructor(
                          this->u32_474,
                          v15,
                          v16,
                          this->u32_46C,
                          5,
                          1,
                          512)
            : 0;
        MSAnim::SetField(this->u32_478 - 1); /*0x76d7c8*/
        MSAnim::GetField(0); /*0x76d7d0*/
        TerritoryUpdateDisplayWOL(v18, 0); /*0x76d7d8*/
        Trigger::executeActions(v18); /*0x76d7f0*/
        if ( v38 < v36 /*0x76d821*/
          || (IDA_BYTE1(v37) || !v36)
          && v39 > 0
          && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v34[2])(&v34, v39 + v36, 0) )
        {
          v19 = v38++; /*0x76d82c*/
          *((_DWORD *)Block + v19) = v18; /*0x76d837*/
        }
      }
      v49[0] = &(void*)(void*)&CCFileClass_vftable; /*0x76d841*/
      v51 = 0; /*0x76d84c*/
      Vector::Clear((int)v50); /*0x76d853*/
      BufferIOFileClass::Destruct(v49); /*0x76d85f*/
    }
    ((void (__thiscall *)(void ***))v24[2])(&v24); /*0x76d86c*/
  }
  v28 = &v40; /*0x76d88b*/
  v29 = 0; /*0x76d897*/
  v27 = &(void*)(void*)&VectorCursor_MSAnim___DynamicVectorClass_MSAnim___vftable; /*0x76d89b*/
  v32 = &v34; /*0x76d89f*/
  v33 = 0; /*0x76d8a3*/
  v31 = &(void*)(void*)&VectorCursor_MSAnim___DynamicVectorClass_MSAnim___vftable; /*0x76d8a7*/
  if ( (unsigned __int8)CampaignProperties_WorldDominationTour_22_::AddRef(&v31) ) /*0x76d8ab*/
  {
    do /*0x76da41*/
    {
      DDraw::HandleSuspend(); /*0x76d8c0*/
      while ( EventQueue::Process(g_BinkMoviePlayer) ) /*0x76d8cb*/
      {
        if ( EventQueue::Read(g_BinkMoviePlayer) == 27 ) /*0x76d8e4*/
          this->q444 = 1; /*0x76d8e6*/
      }
      if ( ((unsigned __int8 (__thiscall *)(void ***))v27[1])(&v27) ) /*0x76d905*/
      {
        if ( this->q444 ) /*0x76d910*/
        {
          v20 = (void (__thiscall ***)(_DWORD, int))v28[1][v29]; /*0x76d925*/
          if ( v20 ) /*0x76d92a*/
            (**v20)(v20, 1); /*0x76d934*/
        }
        else
        {
          String::Assign((char **)&v30, aTargetzoom); /*0x76d944*/
          if ( String::NotEquals((const char **)&v30, 0) ) /*0x76d94e*/
          {
            Trigger::processTrigger(&this->u32_1250, 0); /*0x76d963*/
            while ( ((unsigned __int8 (__thiscall *)(void ***))v21[1])(&v21) ) /*0x76d970*/
            {
              if ( !String::Compare((const char **)&v30, *(const char ***)(*(_DWORD *)(v22 + 4) + 4 * v23)) ) /*0x76d98a*/
                break; /*0x76d991*/
              ((void (__thiscall *)(void ***))v21[2])(&v21); /*0x76d99b*/
            }
            if ( ((unsigned __int8 (__thiscall *)(void ***))v21[1])(&v21) ) /*0x76d9b5*/
              nullsub_24(*(_DWORD *)(*(_DWORD *)(v22 + 4) + 4 * v23)); /*0x76d9ca*/
            v21 = &(void*)(void*)&VectorCursor_MSSfxEntry___DynamicVectorClass_MSSfxEntry___vftable; /*0x76d9cf*/
          }
          DeleteAndZero(&v30); /*0x76d9d7*/
          PriorityQueue::Add((int)v28[1][v29]); /*0x76d9ed*/
          MSEngine::ProcessEvents((char)v28[1][v29], 300000); /*0x76da08*/
        }
        ((void (__thiscall *)(void ***))v27[2])(&v27); /*0x76da15*/
      }
      PriorityQueue::Add((int)v32[1][v33]); /*0x76da29*/
      ((void (__thiscall *)(void ***))v31[2])(&v31); /*0x76da36*/
    }
    while ( ((unsigned __int8 (__thiscall *)(void ***))v31[1])(&v31) ); /*0x76da41*/
  }
  ComPtr::Set((_DWORD *)(&this->u32_1D00), *(_DWORD *)(a2 + 4)); /*0x76da5d*/
  v31 = &(void*)(void*)&VectorCursor_MSAnim___DynamicVectorClass_MSAnim___vftable; /*0x76da66*/
  v27 = &(void*)(void*)&VectorCursor_MSAnim___DynamicVectorClass_MSAnim___vftable; /*0x76da6a*/
  v24 = &(void*)(void*)&VectorCursor_rc_ptr_WorldDominationTour_Territory_DynamicVectorClass_rc_ptr_WorldDominationTour_Territory_vftable; /*0x76da76*/
  v34 = &(void*)(void*)&VectorClass_MSAnim___vftable; /*0x76da7e*/
  if ( Block && IDA_BYTE1(v37) ) /*0x76da8b*/
  {
    RA2_OPDEL(Block); /*0x76da8e*/
    Block = 0; /*0x76da96*/
  }
  v40 = &(void*)(void*)&VectorClass_MSAnim___vftable; /*0x76da9e*/
  v36 = 0; /*0x76daa2*/
  IDA_BYTE1(v37) = 0; /*0x76daa9*/
  if ( v41 ) /*0x76daaf*/
  {
    if ( v43 ) /*0x76dab7*/
      RA2_OPDEL(v41); /*0x76daba*/
  }
}
}
// 0x76F090
namespace gamemd {
unsigned int * Trigger::processTrigger(int a2, int a3)
{
  this->ptr_4 = a2; /*0x76f09a*/
  this->u32_8 = a3; /*0x76f09d*/
  *this = &(void*)(void*)&VectorCursor_MSSfxEntry___DynamicVectorClass_MSSfxEntry___vftable; /*0x76f0a0*/
  return this; /*0x76f0a6*/
}
}
// 0x76F1C0
namespace gamemd {
unsigned int * Trigger::checkCondition(ObjectClass * aP1, ObjectClass * aP2)
{
  this->ptr_4 = 0; /*0x76f1cb*/
  this->u32_8 = aP1; /*0x76f1ce*/
  this->q00C = 1; /*0x76f1d1*/
  this->u8_D = 0; /*0x76f1d5*/
  *this = &(void*)(void*)&VectorClass_MSAnim___vftable; /*0x76f1d8*/
  if ( aP1 ) /*0x76f1de*/
  {
    if ( aP2 ) /*0x76f1e6*/
    {
      this->ptr_4 = aP2; /*0x76f1e8*/
      return this; /*0x76f1ee*/
    }
    this->ptr_4 = RA2_OPNEW(4 * aP1); /*0x76f1fd*/
    this->u8_D = 1; /*0x76f200*/
  }
  return this; /*0x76f1ed*/
}
}
// 0x76FF20
namespace gamemd {
int Trigger::executeActions(int a2)
{
  *(&this->ptr_41) = a2; /*0x76ff24*/
  return a2; /*0x76ff27*/
}
}