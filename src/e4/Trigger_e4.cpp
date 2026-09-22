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

// 0x554A60
namespace gamemd {
char Trigger::EnableOnce(AbstractClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Trigger::EnableOnce(AbstractClass *aP1)
{
  char result; // al

  result = this->q048; /*0x554a60*/
  if ( !result ) /*0x554a65*/
  {
    this->q048 = 1; /*0x554a6b*/
    return TacticalClass::ScrollView(this, aP1); /*0x554a70*/
  }
  return result; /*0x554a75*/
}
}
} // namespace gamemd

// 0x5CBD20
namespace gamemd {
void * Trigger::initTrigger(MSShapeAnim * aP1, MSShapeAnim * aP2, int a4, int a5, int a6, int a7, MSShapeAnim * aP7)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *__thiscall Trigger::initTrigger(
        void *this,
        MSShapeAnim *aP1,
        MSShapeAnim *aP2,
        int a4,
        int a5,
        int a6,
        int a7,
        MSShapeAnim *aP7)
{
  int FileClassToBuffer; // eax

  this->q008 = a4; /*0x5cbd2c*/
  this->Trigger_field_0x4 = aP2; /*0x5cbd32*/
  this->q030 = 1; /*0x5cbd35*/
  this->Trigger_field_0x10 = Timer::GetTicks(); /*0x5cbd48*/
  this->q018 = 0; /*0x5cbd4f*/
  this->q008 = a5; /*0x5cbd52*/
  *((_DWORD *)this + 14) = a7; /*0x5cbd58*/
  *((_DWORD *)this + 9) = a6; /*0x5cbd5f*/
  *((_DWORD *)this + 10) = 0; /*0x5cbd62*/
  *((_BYTE *)this + 52) = 0; /*0x5cbd65*/
  *((_BYTE *)this + 60) = 0; /*0x5cbd68*/
  *(_DWORD *)this = &vt_MSShapeAnim; /*0x5cbd6a*/
  FileClassToBuffer = LoadFileClassToBuffer((char **)aP1, (bool *)this + 60); /*0x5cbd70*/
  *((_DWORD *)this + 7) = FileClassToBuffer; /*0x5cbd75*/
  this->Trigger_field_0x2C = 0; /*0x5cbd78*/
  int v10 = *(__int16 *)(FileClassToBuffer + 6) - 1; /*0x5cbd83*/
  *((_DWORD *)this + 17) = aP7; /*0x5cbd84*/
  this->q030 = v10; /*0x5cbd87*/
  this->q010 = 0; /*0x5cbd8a*/
  *(_DWORD *)this = &vt_MSFadeAnim; /*0x5cbd8d*/
  return this; /*0x5cbd95*/
}
}
} // namespace gamemd

// 0x76D4D0
namespace gamemd {
void Trigger::ProcessMapEvents(int this@<ecx> a1, int *a2@<ebp> a2, int a3@<edi> a3, int a4, char a5, char a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __userpurge Trigger::ProcessMapEvents(int this@<ecx>, int *a2@<ebp>, int a3@<edi>, int a4, char a5, char a6)
{
  ObjectClass *v5; // ebx
  MSShapeAnim *v10; // eax
  int CellType; // ebp
  BOOL ecx13; // ecx
  MSShapeAnim *v15; // edi
  int ebp18; // ebp
  MSShapeAnim *v17; // eax
  MSShapeAnim *v18; // edi
  void (__thiscall ***v24)(_DWORD, int); // ecx
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
  _DWORD v53[22]; // [esp+74h] [ebp-D8h] BYREF
  _BYTE v54[12]; // [esp+CCh] [ebp-80h] BYREF
  int v55; // [esp+D8h] [ebp-74h]
  _DWORD v56[22]; // [esp+E0h] [ebp-6Ch] BYREF
  _BYTE v57[12]; // [esp+138h] [ebp-14h] BYREF
  int v58; // [esp+144h] [ebp-8h]
  v5 = 0; /*0x76d4da*/
  int v8 = Count::Get((_DWORD *)(this + 1112)); /*0x76d4e3*/
  VectorCursor::Construct(&v28, v8 + 44, 0); /*0x76d4f0*/
  while ( ((unsigned __int8 (__thiscall *)(void ***))v28[1])(&v28) ) /*0x76d4fd*/
  {
    _DWORD * v9 = (_DWORD *)FileClass::SetState((_DWORD *)(*(_DWORD *)(v29 + 4) + 8 * v30)); /*0x76d512*/
    v10 = (MSShapeAnim *)WDTObject::GetAndClearFlag(v9); /*0x76d519*/
    if ( v10 ) /*0x76d520*/
      Session::RemoveTeam((_DWORD *)this, v10); /*0x76d525*/
    ((void (__thiscall *)(void ***))v28[2])(&v28); /*0x76d532*/
  }
  int * v26 = a2; /*0x76d544*/
  int v25 = a3; /*0x76d545*/
  Trigger::checkCondition(&v47, 0, 0); /*0x76d54c*/
  v47 = &vt_DynamicVectorClass_MSAnim; /*0x76d561*/
  v52 = 10; /*0x76d565*/
  v51 = 0; /*0x76d569*/
  Trigger::checkCondition(&v41, 0, 0); /*0x76d56d*/
  int v11 = *(_DWORD *)(this + 1116); /*0x76d572*/
  v41 = &vt_DynamicVectorClass_MSAnim; /*0x76d57c*/
  v39 = (ObjectClass *)10; /*0x76d585*/
  v45 = 0; /*0x76d589*/
  VectorCursor::Construct(&v31, v11 + 44, 0); /*0x76d58d*/
  while ( ((unsigned __int8 (__thiscall *)(void ***))v31[1])(&v31) )
  {
    unsigned int v12 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v32 + 4) + 8 * var128 + 4) + 8); /*0x76d5bc*/
    CellType = WDTClass::GetCellType(*(_DWORD **)(this + 1164), v12); /*0x76d5cd*/
    int v14 = WDTClass::GetCellType(*(_DWORD **)(a4 + 4), v12); /*0x76d5d7*/
    if ( v14 != CellType ) /*0x76d5db*/
    {
      DDraw::HandleSuspend((_DWORD *)this); /*0x76d5df*/
      while ( EventQueue::Process(*(_DWORD **)&stru_87C374[13308]) ) /*0x76d5ea*/
      {
        if ( EventQueue::Read(*(_DWORD **)&stru_87C374[13308]) == 27 ) /*0x76d603*/
          *(_BYTE *)(this + 1092) = 1; /*0x76d605*/
      }
      ecx13 = !*(_BYTE *)(this + 1092) || a6; /*0x76d635*/
  int v27; // [esp+8h] [ebp-144h]
      Map_Process_76FD40(v14, (ObjectClass *)this, ecx13, v25, v26, v27); /*0x76d64f*/
    }
    if ( a5 && v14 == 1 )
    {
      int v16 = *(_DWORD *)(*(_DWORD *)(v32 + 4) + 8 * var128 + 4); /*0x76d67a*/
      v15 = (MSShapeAnim *)(*(_DWORD *)(v16 + 16) + *(_DWORD *)(*(_DWORD *)(this + 1116) + 68)); /*0x76d695*/
      ebp18 = *(_DWORD *)(*(_DWORD *)(this + 1116) + 72) + *(_DWORD *)(v16 + 20); /*0x76d69a*/
      if ( *(_DWORD *)(this + 1136) ) /*0x76d68f*/
      {
        CCFileClass::Construct2(v53, *(char ***)(this + 1136)); /*0x76d6a9*/
        if ( CCFileClass::Open(v53, 0) ) /*0x76d6b3*/
        {
          void * v19 = (void *)__2_YAPAXI_Z(0x48u); /*0x76d6be*/
          if ( v19 ) /*0x76d6c8*/
            v5 = (ObjectClass *)Trigger::initTrigger( /*0x76d6ec*/
                                  v19,
                                  *(MSShapeAnim **)(this + 1136),
                                  v15,
                                  ebp18,
                                  *(_DWORD *)(this + 1132),
                                  3,
                                  512,
                                  (MSShapeAnim *)(this + 24));
          if ( (int)v51 < v49 /*0x76d71b*/
            || (v50 || !v49)
            && v52 > 0
            && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v47[2])(&v47, v52 + v49, 0) )
          {
            v17 = v51; /*0x76d726*/
            v51 = (MSShapeAnim *)((char *)v51 + 1); /*0x76d729*/
            *((_DWORD *)v48 + (_DWORD)v17) = v5; /*0x76d731*/
          }
          v5 = 0; /*0x76d734*/
        }
        v53[0] = &vt_CCFileClass; /*0x76d73d*/
        v55 = 0; /*0x76d745*/
        Vector::Clear((int)v54); /*0x76d74c*/
        v53[0] = &off_7E1668; /*0x76d755*/
        BufferIOFileClass::Dtor(v53); /*0x76d75d*/
      }
      CCFileClass::Construct2(v56, *(char ***)(this + 1140)); /*0x76d770*/
      if ( CCFileClass::Open(v56, 0) )
      {
        void * v21 = (void *)__2_YAPAXI_Z(0x40u); /*0x76d78c*/
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
        MSAnim::SetField(v18, *(_DWORD *)(this + 1144) - 1); /*0x76d7c8*/
        MSAnim::GetField(v18, 0); /*0x76d7d0*/
        TerritoryUpdateDisplayWOL(v18, 0); /*0x76d7d8*/
        Trigger::executeActions(*(_DWORD **)(*(_DWORD *)(v32 + 4) + 8 * var128 + 4), (int)v18); /*0x76d7f0*/
        if ( v45 < v43 /*0x76d821*/
          || (BYTE1(v44) || !v43)
          && (int)v39 > 0
          && ((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v41[2])(&v41, &v39->__pad_0[v43], 0) )
        {
          int v23 = v45++; /*0x76d82c*/
          *((_DWORD *)Block + v23) = v18; /*0x76d837*/
        }
      }
      v56[0] = &vt_CCFileClass; /*0x76d841*/
      v58 = 0; /*0x76d84c*/
      Vector::Clear((int)v57); /*0x76d853*/
      BufferIOFileClass::Destruct(v56); /*0x76d85f*/
    }
    ((void (__thiscall *)(void ***))v31[2])(&v31); /*0x76d86c*/
  }
  v35 = &v47; /*0x76d88b*/
  v36 = 0; /*0x76d897*/
  v34 = &vt_VectorCursor_MSAnim_DynamicVectorClass_MSAnim; /*0x76d89b*/
  var110 = &v41; /*0x76d89f*/
  v33 = 0; /*0x76d8a3*/
  v38 = &vt_VectorCursor_MSAnim_DynamicVectorClass_MSAnim; /*0x76d8a7*/
  if ( CampaignProperties_WorldDominationTour_22::AddRef(&v38) ) /*0x76d8ab*/
  {
    do /*0x76da41*/
    {
      DDraw::HandleSuspend((_DWORD *)this); /*0x76d8c0*/
      while ( EventQueue::Process(*(_DWORD **)&stru_87C374[13308]) ) /*0x76d8cb*/
      {
        if ( EventQueue::Read(*(_DWORD **)&stru_87C374[13308]) == 27 ) /*0x76d8e4*/
          *(_BYTE *)(this + 1092) = 1; /*0x76d8e6*/
      }
      if ( ((unsigned __int8 (__thiscall *)(void ***))v34[1])(&v34) ) /*0x76d905*/
      {
        if ( *(_BYTE *)(this + 1092) ) /*0x76d910*/
        {
          v24 = (void (__thiscall ***)(_DWORD, int))v35[1][v36]; /*0x76d925*/
          if ( v24 ) /*0x76d92a*/
            (**v24)(v24, 1); /*0x76d934*/
        }
        else
        {
          String::Assign((char **)&v37, aTargetzoom); /*0x76d944*/
          if ( String::NotEquals((const char **)&v37, 0) ) /*0x76d94e*/
          {
            Trigger::processTrigger(&v28, this + 1172, 0); /*0x76d963*/
            while ( ((unsigned __int8 (__thiscall *)(void ***))v28[1])(&v28) ) /*0x76d970*/
            {
              if ( !String::Compare((const char **)&v37, *(const char ***)(*(_DWORD *)(v29 + 4) + 4 * v30)) ) /*0x76d98a*/
                break; /*0x76d991*/
              ((void (__thiscall *)(void ***))v28[2])(&v28); /*0x76d99b*/
            }
            if ( ((unsigned __int8 (__thiscall *)(void ***))v28[1])(&v28) ) /*0x76d9b5*/
              nullsub_24(); /*0x76d9ca*/
            v28 = &vt_VectorCursor_MSSfxEntry_DynamicVectorClass_MSSfxEntry; /*0x76d9cf*/
          }
          DeleteAndZero((int)&v37); /*0x76d9d7*/
          PriorityQueue::Add((Selection_WorldDominationTour *)this, (MSAnim *)v35[1][v36]); /*0x76d9ed*/
          MSEngine::ProcessEvents((_DWORD *)this, (MSVQAnim *)v35[1][v36], 300000); /*0x76da08*/
        }
        ((void (__thiscall *)(void ***))v34[2])(&v34); /*0x76da15*/
      }
      PriorityQueue::Add((Selection_WorldDominationTour *)this, (MSAnim *)var110[1][(_DWORD)v33]); /*0x76da29*/
      ((void (__thiscall *)(void ***))v38[2])(&v38); /*0x76da36*/
    }
    while ( ((unsigned __int8 (__thiscall *)(void ***))v38[1])(&v38) ); /*0x76da41*/
  }
  ComPtr::Set((rc_ptr_base *)(this + 1160), *(_DWORD *)(a4 + 4)); /*0x76da5d*/
  v38 = &vt_VectorCursor_MSAnim_DynamicVectorClass_MSAnim; /*0x76da66*/
  v34 = &vt_VectorCursor_MSAnim_DynamicVectorClass_MSAnim; /*0x76da6a*/
  v31 = &vt_VectorCursor_rc_ptr_WorldDominationTour_Territory_DynamicVectorClass_rc_ptr_WorldDominationTour_Territory; /*0x76da76*/
  v41 = &vt_VectorClass_MSAnim; /*0x76da7e*/
  if ( Block && BYTE1(v44) ) /*0x76da8b*/
  {
    __3_YAXPAX_Z(Block); /*0x76da8e*/
    Block = 0; /*0x76da96*/
  }
  v47 = &vt_VectorClass_MSAnim; /*0x76da9e*/
  v43 = 0; /*0x76daa2*/
  BYTE1(v44) = 0; /*0x76daa9*/
  if ( v48 ) /*0x76daaf*/
  {
    if ( v50 ) /*0x76dab7*/
      __3_YAXPAX_Z(v48); /*0x76daba*/
  }
}
}
} // namespace gamemd

// 0x76F090
namespace gamemd {
unsigned int * Trigger::processTrigger(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_76F090(_DWORD *this, int a2, int a3)
{
  this->q004 = a2; /*0x76f09a*/
  this->q008 = a3; /*0x76f09d*/
  *this = &vt_VectorCursor_MSSfxEntry_DynamicVectorClass_MSSfxEntry; /*0x76f0a0*/
  return this; /*0x76f0a6*/
}
}
} // namespace gamemd

// 0x76F1C0
namespace gamemd {
unsigned int * Trigger::checkCondition(ObjectClass * aP1, ObjectClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall Trigger::checkCondition(_DWORD *this, ObjectClass *aP1, ObjectClass *aP2)
{
  this->q004 = 0; /*0x76f1cb*/
  this->q008 = aP1; /*0x76f1ce*/
  this->q030 = 1; /*0x76f1d1*/
  *((_BYTE *)this + 13) = 0; /*0x76f1d5*/
  *this = &vt_VectorClass_MSAnim; /*0x76f1d8*/
  if ( aP1 ) /*0x76f1de*/
  {
    if ( aP2 ) /*0x76f1e6*/
    {
      this->q004 = aP2; /*0x76f1e8*/
      return this; /*0x76f1ee*/
    }
    this->q004 = __2_YAPAXI_Z(4 * (_DWORD)aP1); /*0x76f1fd*/
    *((_BYTE *)this + 13) = 1; /*0x76f200*/
  }
  return this; /*0x76f1ed*/
}
}
} // namespace gamemd

// 0x76FF20
namespace gamemd {
int Trigger::executeActions(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_76FF20(_DWORD *this, int a2)
{
  this->q02C = a2; /*0x76ff24*/
  return a2; /*0x76ff27*/
}
}
} // namespace gamemd
