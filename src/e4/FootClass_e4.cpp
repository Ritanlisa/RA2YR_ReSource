// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/Mixer_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/FoggedObjectClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/Font_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/GUID_e4.hpp"

// 0x4D3590
namespace gamemd {
AbstractClass * * FootClass::Destruct()
{
  int *team; // ecx
  int v3; // eax
  int v4; // eax
  ParasiteClass *parasiteImUsing; // ecx
  unsigned int *v6; // eax
  int v7; // eax
  void *v8; // eax
  void *v9; // eax
  FootClass *v11; // [esp+8h] [ebp-4h] BYREF

  team = (int *)((unsigned int)((int *)this->team));
  this->vtable0 = (unsigned int)((void*)&FootClass_vftable);
  this->vtable1 = (void*)&FootClass_vftable; /*0x4d35a5*/
  this->vtable2 = (void*)&FootClass_vftable; /*0x4d35ac*/
  this->vtable3 = (void*)&FootClass_vftable; /*0x4d35b3*/
  if ( team && unk_A8E9A0 ) /*0x4d35c2*/
    TeamClass::LiberateMember_Start(team, (int)this, 0xFFFFFFFF, 0); /*0x4d35c8*/
  v11 = this; /*0x4d35dd*/
  v3 = (*((int (__thiscall **)(FootClass *, FootClass **))FootClass_Array.vtable0 + 4))(&FootClass_Array, &v11); /*0x4d35e1*/
  if ( v3 != -1 ) /*0x4d35e7*/
    FootClass::RemoveFromPointerArray(&FootClass_Array, v3); /*0x4d35ef*/
  v11 = this; /*0x4d3604*/
  v4 = (*(int (__thiscall **)(char *, FootClass **))(*(unsigned int *)&g_BuildingLoadQueue_Array.DisableVoxelCache[2] + 16))( /*0x4d3608*/
         &g_BuildingLoadQueue_Array.DisableVoxelCache[2],
         &v11);
  if ( v4 != -1 ) /*0x4d360e*/
    DynamicVector::RemoveItem((DynamicVector *)&g_BuildingLoadQueue_Array.DisableVoxelCache[2], v4); /*0x4d3616*/
  parasiteImUsing = this->parasiteImUsing; /*0x4d361b*/
  if ( parasiteImUsing ) /*0x4d3623*/
  {
    (*((void (__thiscall **)(ParasiteClass *, int))parasiteImUsing->vtable0 + 8))(parasiteImUsing, 1); /*0x4d3629*/
    this->parasiteImUsing = 0; /*0x4d362c*/
  }
  if ( this->currentJumpjetMapCoords[0] != g_FootClass_Pool ) /*0x4d3646*/
  {
    v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)this->currentJumpjetMapCoords); /*0x4d365b*/
    if ( (FootClass *)v6[56] == this ) /*0x4d3666*/
      v6[56] = 0; /*0x4d3668*/
  }
  Mixer::ReleaseChannel((Mixer *)this->audioController7); /*0x4d3677*/
  AudioFileClass::Release((AudioFileClass *)this->audioController7); /*0x4d367e*/
  v7 = this->locomotor[0]; /*0x4d3683*/
  if ( v7 ) /*0x4d368b*/
    (*(void (__stdcall **)(int))(*(unsigned int *)v7 + 8))(this->locomotor[0]); /*0x4d3690*/
  v8 = *(void **)this->__pad_5B0; /*0x4d3693*/
  this->FootClass_field_abstract_array_5AC[0] = (int)&VectorClass_AbstractClass___vftable; /*0x4d36a0*/
  if ( v8 && this->__pad_5B0[9] ) /*0x4d36a8*/
  {
    RA2_OPDEL(v8); /*0x4d36b1*/
    *(unsigned int *)this->__pad_5B0 = 0; /*0x4d36b9*/
  }
  this->__pad_5B0[9] = 0; /*0x4d36bf*/
  *(unsigned int *)&this->__pad_5B0[4] = 0; /*0x4d36c5*/
  v9 = *(void **)this->__pad_58C; /*0x4d36cb*/
  this->unknownAbstractArray588[0] = (int)&VectorClass_AbstractClass___vftable; /*0x4d36d1*/
  if ( v9 && this->__pad_58C[9] ) /*0x4d36dc*/
  {
    RA2_OPDEL(v9); /*0x4d36e5*/
    *(unsigned int *)this->__pad_58C = 0; /*0x4d36ed*/
  }
  this->__pad_58C[9] = 0; /*0x4d36f5*/
  *(unsigned int *)&this->__pad_58C[4] = 0; /*0x4d36fb*/
  return TechnoClass::DTOR((int)this); /*0x4d3706*/
}
} // namespace ra2

// 0x4D98C0
namespace gamemd {
void FootClass::Destroyed(int a2)
{
  int64_t v3; // rax
  unsigned char v4[4]; // [esp+4h] [ebp-4h] BYREF

  if ( (uint8_t)House::IsHumanPlayer((House *)this->owner) /*0x4d98dd*/
    && !*(unsigned char *)((*((int (__thiscall **)(FootClass *))this->vtable0 + 33))(this) + 3412) )
  {
    v3 = ((int64_t (__thiscall *)(FootClass *, unsigned char *))*((unsigned int *)this->vtable0 + 110))(this, v4); /*0x4d98f0*/
    if ( (uint8_t)CreateTriggerClassIfFarEnough(7, IDA_SHIDWORD(v3), *(unsigned int *)v3) ) /*0x4d98fe*/
      VoxClass::FindAndPlay((VoxClass *)&stru_822420.ImageFile[8], -1); /*0x4d9911*/
  }
}
} // namespace ra2

// 0x70F7E0
namespace gamemd {
int FootClass::updateThreat()
{
  int v1; // edx
  int v2; // eax

  v1 = (int)(this->targetingTimer[0]);
  v2 = (int)(this->targetingTimer[2]);
  if ( v1 != -1 ) /*0x70f7ef*/
  {
    if ( *(unsigned int *)&stru_A8EB00.gapE4[416] - v1 < v2 ) /*0x70f7fb*/
      return v2 == *(unsigned int *, unsigned int a2, unsigned int a3)&stru_A8EB00.gapE4[416] - v1; /*0x70f808*/
    v2 = 0; /*0x70f809*/
  }
  return v2 == 0; /*0x70f808*/
}
} // namespace ra2

// 0x710000
namespace gamemd {
void FootClass::FootClass_ImbueLocomotor(int *a1@<ecx> a1, int a2@<ebp> a2, int a3@<edi> a3, unsigned int * ppv, IID rclsid, int a6, void * a4, void * a5)
{
  void **vtable0; // esi
  TaskManager *v5; // ecx
  unsigned int *v6; // ecx
  void *v7; // eax
  void **v8; // edi
  int v9; // eax
  bool v10; // zf
  void *v11; // eax
  int v12; // eax
  void (__thiscall **v13)(void **, int); // ebp
  int v14; // eax
  void (__thiscall **v15)(void **); // edx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int m_Size; // ebx
  void *v20; // ebp
  int *v21; // ecx
  int Member; // eax
  unsigned int *v23; // ecx
  unsigned int *v24; // ebx
  BuildingClass *v25; // [esp+50h] [ebp-2Ch]
  StreamClass v26; // [esp+60h] [ebp-1Ch] BYREF
  int v27; // [esp+78h] [ebp-4h]

  vtable0 = (void **)ppv.vtable0; /*0x710006*/
  v26.m_Size = (int)a1; /*0x71000d*/
  if ( ppv.vtable0 )
  {
    v5 = (unsigned int *)((TaskManager *)*((unsigned int *)ppv.vtable0 + 180));
    if ( v5 ) /*0x71001f*/
      TaskManager::Update(v5); /*0x710021*/
    v6 = vtable0[421]; /*0x710026*/
    if ( v6 && v6[423] && *(unsigned char *)((*(int (__thiscall **)(unsigned int *))(*v6 + 132))(v6) + 3278) ) /*0x710042*/
      BuildingClass::Deploy(v25, a2, a3); /*0x710058*/
    v7 = vtable0[413]; /*0x71005d*/
    v8 = vtable0 + 413; /*0x710063*/
    *(unsigned int *)v26.__pad_0 = 0; /*0x71006b*/
    if ( v7 ) /*0x710073*/
    {
      v9 = StreamClass::Set(&v26, vtable0 + 413); /*0x71007a*/
      if ( v9 < 0 && v9 != -2147467262 ) /*0x710088*/
        WinAPI::Wrapper(v9); /*0x71008b*/
    }
    if ( *(unsigned char *)((*((int (__thiscall **)(void **))*vtable0 + 33))(vtable0) + 1516)
      && *(unsigned int *)v26.__pad_0
      && !vtable0[172]
      && (*(uint8_t (__stdcall **)(unsigned int))(**(unsigned int **)v26.__pad_0 + 28))(*(unsigned int *)v26.__pad_0) )
    {
      if ( !*(unsigned int *)v26.__pad_0 ) /*0x7100d6*/
        WinAPI::Wrapper(-2147467261); /*0x7100dd*/
      v10 = (*(uint8_t (__stdcall **)(unsigned int))(**(unsigned int **)v26.__pad_0 + 20))(*(unsigned int *)v26.__pad_0) == 0; /*0x7100ec*/
      v11 = *v8; /*0x7100ee*/
      if ( v10 ) /*0x7100f0*/
      {
        if ( !v11 ) /*0x710126*/
          WinAPI::Wrapper(-2147467261); /*0x71012d*/
        (*(void (__stdcall **)(void *))(*(unsigned int *)*v8 + 72))(*v8); /*0x710137*/
        (*((void (__thiscall **)(void **, int))*vtable0 + 124))(vtable0, -1); /*0x710140*/
        (*((void (__thiscall **)(void **, int, unsigned int))*vtable0 + 122))(vtable0, 13, 0); /*0x71014e*/
      }
      else
      {
        if ( v11 ) /*0x7100f4*/
          (*(void (__stdcall **)(void *))(*(unsigned int *)v11 + 8))(*v8); /*0x7100f9*/
        v12 = *(unsigned int *)v26.__pad_0; /*0x7100fc*/
        *v8 = 0; /*0x710100*/
        if ( !v12 ) /*0x710108*/
          WinAPI::Wrapper(-2147467261); /*0x71010f*/
        (*(void (__stdcall **)(int, void **))(*(unsigned int *)v12 + 16))(v12, vtable0 + 413); /*0x71011c*/
      }
    }
    else
    {
      if ( !*v8 ) /*0x710159*/
        WinAPI::Wrapper(-2147467261); /*0x710163*/
      (*(void (__stdcall **)(void *, unsigned int))(*(unsigned int *)*v8 + 156))(*v8, 0); /*0x71016f*/
      v10 = *v8 == 0; /*0x710189*/
      v27 = g_BuildingLoadQueue_Array.VoxelCaches[5]; /*0x71018b*/
      if ( v10 ) /*0x71018f*/
        WinAPI::Wrapper(-2147467261); /*0x710196*/
      (*(void (__stdcall **)(void *, int, int, int, int))(*(unsigned int *)*v8 + 112))( /*0x7101b3*/
        *v8,
        -1,
        g_BuildingLoadQueue_Array.VoxelCaches[3],
        g_BuildingLoadQueue_Array.VoxelCaches[4],
        v27);
      v13 = (void (__thiscall **)(void **, int))*vtable0; /*0x7101b6*/
      v14 = (*((int (__thiscall **)(void **, int *))*vtable0 + 18))(vtable0, &v26.StreamClass_field_0C); /*0x7101bf*/
      v13[61](vtable0, v14); /*0x7101c5*/
      v15 = (void (__thiscall **)(void **))*vtable0; /*0x7101cb*/
      *((unsigned char *)vtable0 + 1718) = 1; /*0x7101cf*/
      v15[244](vtable0); /*0x7101d6*/
      v10 = *v8 == 0; /*0x7101e0*/
      v26.m_Data = 0; /*0x7101e2*/
      if ( !v10 ) /*0x7101e6*/
      {
        v16 = StreamClass::Set((StreamClass *)&v26.m_Data, vtable0 + 413); /*0x7101ed*/
        if ( v16 < 0 && v16 != -2147467262 ) /*0x7101fb*/
          WinAPI::Wrapper(v16); /*0x7101fe*/
      }
      ppv.vtable0 = 0; /*0x71020f*/
      v17 = CreateInstanceCOM(&ppv, (IID *)&ppv.vtable1, 0, 7u); /*0x710213*/
      if ( v17 < 0 && v17 != -2147467262 ) /*0x710221*/
        WinAPI::Wrapper(v17); /*0x710224*/
      if ( !ppv.vtable0 ) /*0x71022f*/
        WinAPI::Wrapper(-2147467261); /*0x710236*/
      (*(void (__stdcall **)(void *, void **))(*(unsigned int *)ppv.vtable0 + 12))(ppv.vtable0, vtable0); /*0x710243*/
      v26.m_Position = 0; /*0x71024a*/
      if ( ppv.vtable0 ) /*0x710250*/
      {
        v18 = StreamClass::Set((StreamClass *)&v26.m_Position, &ppv); /*0x71025b*/
        if ( v18 < 0 && v18 != -2147467262 ) /*0x710269*/
          WinAPI::Wrapper(v18); /*0x71026c*/
      }
      COMObject::SwapReference((COMObject *)&v26.m_Data, v26.m_Position); /*0x71027a*/
      if ( v26.m_Position ) /*0x710285*/
        (*(void (__stdcall **)(int))(*(unsigned int *)v26.m_Position + 8))(v26.m_Position); /*0x71028a*/
      if ( v26.m_Data )
      {
        m_Size = v26.m_Size; /*0x710297*/
        if ( *(unsigned int *)(v26.m_Size + 684) ) /*0x71029b*/
          TechnoClass::EjectPassengers((TechnoClass *)v26.m_Size, 0); /*0x7102a6*/
        if ( vtable0[171] ) /*0x7102ab*/
          TechnoClass::EjectPassengers((TechnoClass *)vtable0, 1); /*0x7102b7*/
        if ( !v26.m_Data ) /*0x7102c4*/
          WinAPI::Wrapper(-2147467261); /*0x7102cb*/
        (*(void (__stdcall **)(void *, void *))(*(unsigned int *)v26.m_Data + 12))(v26.m_Data, *v8); /*0x7102d8*/
        v20 = *v8; /*0x7102db*/
        if ( *v8 != ppv.vtable0 ) /*0x7102e3*/
        {
          *v8 = ppv.vtable0; /*0x7102e7*/
          SuperClass::SetFieldX((SuperClass *)(vtable0 + 413)); /*0x7102e9*/
          if ( v20 ) /*0x7102f0*/
            (*(void (__stdcall **)(void *))(*(unsigned int *)v20 + 8))(v20); /*0x7102f6*/
        }
        m_Size->locomotorTarget = ((unsigned char)vtable0[5] & 1) != 0 ? vtable0 : 0;
        *(((unsigned char)vtable0[5] & 1) != 0 ? vtable0 + 172 : (void **)688) = (void *)m_Size;
        (*(void (__thiscall **)(unsigned int, int, int))(*m_Size->locomotorTarget + 1152))( /*0x710326*/
          m_Size->locomotorTarget,
          m_Size,
          1);
        (*(void (__thiscall **)(unsigned int))(*m_Size->locomotorTarget + 336))(m_Size->locomotorTarget); /*0x710334*/
        v21 = (int *)vtable0[373]; /*0x71033a*/
        if ( v21 ) /*0x710342*/
          TeamClass::LiberateMember_Start(v21, (int)vtable0, 0xFFFFFFFF, 0); /*0x710349*/
        *((unsigned char *)vtable0 + 1709) = 1; /*0x710352*/
        Member = Team::GetMember((Team *)vtable0, 0); /*0x710359*/
        if ( Member && (*(int (__thiscall **)(int))(*(unsigned int *)Member + 44))(Member) == 6 ) /*0x71036c*/
          (*((void (__thiscall **)(void **, int))*vtable0 + 160))(vtable0, 3); /*0x710374*/
        (*(void (__thiscall **)(unsigned int, int, int))(*m_Size->locomotorTarget + 488))(m_Size->locomotorTarget, 5, 1); /*0x710386*/
        v23 = m_Size->locomotorTarget; /*0x71038c*/
        if ( !*(unsigned char *)(v23[135] + 492) && !*(unsigned char *)((*(int (__thiscall **)(unsigned int *))(*v23 + 132))(v23) + 1516) ) /*0x7103aa*/
        {
          v24 = m_Size->locomotorTarget; /*0x7103b4*/
          if ( !*(unsigned char *)(*(unsigned int *)(v24[135] + 52) + 422) ) /*0x7103c3*/
            (*(void (__thiscall **)(unsigned int *, int, unsigned int))(*v24 + 488))(v24, 15, 0); /*0x7103d5*/
        }
      }
      if ( ppv.vtable0 ) /*0x7103e1*/
        (*(void (__stdcall **)(void *))(*(unsigned int *)ppv.vtable0 + 8))(ppv.vtable0); /*0x7103e6*/
      if ( v26.m_Data ) /*0x7103ef*/
        (*(void (__stdcall **)(void *))(*(unsigned int *)v26.m_Data + 8))(v26.m_Data); /*0x7103f4*/
    }
    if ( *(unsigned int *)v26.__pad_0 ) /*0x7103fd*/
      (*(void (__stdcall **)(unsigned int))(**(unsigned int **)v26.__pad_0 + 8))(*(unsigned int *)v26.__pad_0); /*0x710402*/
  }
}
} // namespace ra2

// 0x41C120
namespace gamemd {
void FootClass::Stub(int a1)
{
  ; /*0x41c120*/
}
} // namespace gamemd

// 0x50DAA0
namespace gamemd {
unsigned int FootClass::checkTurning()
{
  unsigned int result; // eax
result = (unsigned int)(this->infantryBlinkTimer[0]);
  if ( result >= 4 ) /*0x50daa8*/
    return 0; /*0x50daaf*/
  return result; /*0x50dab1*/
}
} // namespace gamemd
