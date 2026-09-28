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
#include "e4/classes/Vector_e4.hpp"

// 0x4D3590
namespace gamemd {
AbstractClass * * FootClass::Destruct()
{
  int *team; // ecx
  int v3; // eax
  int v4; // eax
  ParasiteClass *parasiteImUsing; // ecx
  _DWORD *v6; // eax
  int v7; // eax
  void *v8; // eax
  void *v9; // eax
  FootClass *v11; // [esp+8h] [ebp-4h] BYREF

  team = (int *)this->team; /*0x4d3597*/
  this->TechnoClass = &(void*)(void*)&FootClass_vftable; /*0x4d359d*/
  this->? = &(void*)(void*)&FootClass_vftable; /*0x4d35a5*/
  this->? = &(void*)(void*)&FootClass_vftable; /*0x4d35ac*/
  this->? = &(void*)(void*)&FootClass_vftable; /*0x4d35b3*/
  if ( team && byte_A8E9A0 ) /*0x4d35c2*/
    TeamClass::LiberateMember_Start(team, (int)this, 0xFFFFFFFF, 0); /*0x4d35c8*/
  v11 = this; /*0x4d35dd*/
  v3 = (*((int (__thiscall **)(FootClass *, FootClass **))FootClass_Array.TechnoClass + 4))(&FootClass_Array, &v11); /*0x4d35e1*/
  if ( v3 != -1 ) /*0x4d35e7*/
    FootClass::RemoveFromPointerArray(&FootClass_Array, v3); /*0x4d35ef*/
  v11 = this; /*0x4d3604*/
  v4 = (*(int (__thiscall **)(char *, FootClass **))(*(_DWORD *)&g_BuildingLoadQueue_Array.?[2] + 16))( /*0x4d3608*/
         &g_BuildingLoadQueue_Array.?[2],
         &v11);
  if ( v4 != -1 ) /*0x4d360e*/
    DynamicVector::RemoveItem((DynamicVector *)&g_BuildingLoadQueue_Array.?[2], v4); /*0x4d3616*/
  parasiteImUsing = this->parasiteImUsing; /*0x4d361b*/
  if ( parasiteImUsing ) /*0x4d3623*/
  {
    (*((void (__thiscall **)(ParasiteClass *, int))parasiteImUsing->AbstractClass + 8))(parasiteImUsing, 1); /*0x4d3629*/
    this->parasiteImUsing = 0; /*0x4d362c*/
  }
  if ( this->currentJumpjetMapCoords[0] != g_FootClass_Pool ) /*0x4d3646*/
  {
    v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)this->currentJumpjetMapCoords); /*0x4d365b*/
    if ( (FootClass *)v6[56] == this ) /*0x4d3666*/
      v6[56] = 0; /*0x4d3668*/
  }
  Mixer::ReleaseChannel((Mixer *)this->audioController7); /*0x4d3677*/
  AudioFileClass::Release((AudioFileClass *)this->audioController7); /*0x4d367e*/
  v7 = this->locomotor[0]; /*0x4d3683*/
  if ( v7 ) /*0x4d368b*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(this->locomotor[0]); /*0x4d3690*/
  v8 = *(void **)this->__pad_5B0; /*0x4d3693*/
  this->FootClass_field_abstract_array_5AC[0] = (int)&(void*)(void*)&VectorClass_AbstractClass___vftable; /*0x4d36a0*/
  if ( v8 && this->__pad_5B0[9] ) /*0x4d36a8*/
  {
    RA2_OPDEL(v8); /*0x4d36b1*/
    *(_DWORD *)this->__pad_5B0 = 0; /*0x4d36b9*/
  }
  this->__pad_5B0[9] = 0; /*0x4d36bf*/
  *(_DWORD *)&this->__pad_5B0[4] = 0; /*0x4d36c5*/
  v9 = *(void **)this->__pad_58C; /*0x4d36cb*/
  this->unknownAbstractArray588[0] = (int)&(void*)(void*)&VectorClass_AbstractClass___vftable; /*0x4d36d1*/
  if ( v9 && this->__pad_58C[9] ) /*0x4d36dc*/
  {
    RA2_OPDEL(v9); /*0x4d36e5*/
    *(_DWORD *)this->__pad_58C = 0; /*0x4d36ed*/
  }
  this->__pad_58C[9] = 0; /*0x4d36f5*/
  *(_DWORD *)&this->__pad_58C[4] = 0; /*0x4d36fb*/
  return TechnoClass::DTOR(); /*0x4d3706*/
}
} // namespace ra2

// 0x4D98C0
namespace gamemd {
void FootClass::Destroyed(int a2)
{
  __int64 v3; // rax
  _BYTE v4[4]; // [esp+4h] [ebp-4h] BYREF

  if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) /*0x4d98dd*/
    && !*(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3412) )
  {
    v3 = ((__int64 (__thiscall *)(FootClass *, _BYTE *))*((_DWORD *)this->TechnoClass + 110))(this, v4); /*0x4d98f0*/
    if ( (unsigned __int8)CreateTriggerClassIfFarEnough(7, IDA_SHIDWORD(v3), *(_DWORD *)v3) ) /*0x4d98fe*/
      VoxClass::FindAndPlay((VoxClass *)&stru_822420.?[8], -1); /*0x4d9911*/
  }
}
} // namespace ra2

// 0x70F7E0
namespace gamemd {
int FootClass::updateThreat()
{
  int v1; // edx
  int v2; // eax

  v1 = this->?[0]; /*0x70f7e0*/
  v2 = this->?[2]; /*0x70f7e6*/
  if ( v1 != -1 ) /*0x70f7ef*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v1 < v2 ) /*0x70f7fb*/
      return v2 == *(_DWORD *)&stru_A8EB00.?[416] - v1; /*0x70f808*/
    v2 = 0; /*0x70f809*/
  }
  return v2 == 0; /*0x70f808*/
}
} // namespace ra2

// 0x710000
namespace gamemd {
void FootClass::FootClass_ImbueLocomotor(int *a1@<ecx> a1, int a2@<ebp> a2, int a3@<edi> a3, unsigned int * ppv, IID rclsid, int a6, void * a4, void * a5)
{
  int v4; // ebp
  int v5; // edi
  int *v6; // esi
  TaskManager *v7; // ecx
  _DWORD *v8; // ecx
  int v9; // eax
  int *v10; // edi
  int v11; // eax
  bool v12; // zf
  int v13; // eax
  int v14; // eax
  int v15; // ebp
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int InstanceCOM; // eax
  int v20; // eax
  int m_Size; // ebx
  int v22; // ebp
  int *v23; // ecx
  int Member; // eax
  _DWORD *v25; // ecx
  _DWORD *v26; // ebx
  BuildingClass *v27; // [esp+50h] [ebp-2Ch]
  StreamClass v28; // [esp+60h] [ebp-1Ch] BYREF

  v6 = (int *)ppv; /*0x710006*/
  v28.m_Size = (int)this; /*0x71000d*/
  if ( ppv )
  {
    v7 = *(TaskManager **)(ppv + 720); /*0x710017*/
    if ( v7 ) /*0x71001f*/
      TaskManager::Update(v7); /*0x710021*/
    v8 = (_DWORD *)v6[421]; /*0x710026*/
    if ( v8 && v8[423] && *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v8 + 132))(v8) + 3278) ) /*0x710042*/
      BuildingClass::Deploy(v27, v4, v5); /*0x710058*/
    v9 = v6[413]; /*0x71005d*/
    v10 = v6 + 413; /*0x710063*/
    *(_DWORD *)v28.__pad_0 = 0; /*0x71006b*/
    if ( v9 ) /*0x710073*/
    {
      v11 = StreamClass::Set(&v28, v6 + 413); /*0x71007a*/
      if ( v11 < 0 && v11 != -2147467262 ) /*0x710088*/
        WinAPI::Wrapper(v11); /*0x71008b*/
    }
    if ( *(_BYTE *)((*(int (__thiscall **)(int *))(*v6 + 132))(v6) + 1516)
      && *(_DWORD *)v28.__pad_0
      && !v6[172]
      && (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)v28.__pad_0 + 28))(*(_DWORD *)v28.__pad_0) )
    {
      if ( !*(_DWORD *)v28.__pad_0 ) /*0x7100d6*/
        WinAPI::Wrapper(-2147467261); /*0x7100dd*/
      v12 = (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)v28.__pad_0 + 20))(*(_DWORD *)v28.__pad_0) == 0; /*0x7100ec*/
      v13 = *v10; /*0x7100ee*/
      if ( v12 ) /*0x7100f0*/
      {
        if ( !v13 ) /*0x710126*/
          WinAPI::Wrapper(-2147467261); /*0x71012d*/
        (*(void (__stdcall **)(int))(*(_DWORD *)*v10 + 72))(*v10); /*0x710137*/
        (*(void (__thiscall **)(int *, int))(*v6 + 496))(v6, -1); /*0x710140*/
        (*(void (__thiscall **)(int *, int, _DWORD))(*v6 + 488))(v6, 13, 0); /*0x71014e*/
      }
      else
      {
        if ( v13 ) /*0x7100f4*/
          (*(void (__stdcall **)(int))(*(_DWORD *)v13 + 8))(*v10); /*0x7100f9*/
        v14 = *(_DWORD *)v28.__pad_0; /*0x7100fc*/
        *v10 = 0; /*0x710100*/
        if ( !v14 ) /*0x710108*/
          WinAPI::Wrapper(-2147467261); /*0x71010f*/
        (*(void (__stdcall **)(int, int *))(*(_DWORD *)v14 + 16))(v14, v6 + 413); /*0x71011c*/
      }
    }
    else
    {
      if ( !*v10 ) /*0x710159*/
        WinAPI::Wrapper(-2147467261); /*0x710163*/
      (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*v10 + 156))(*v10, 0); /*0x71016f*/
      v12 = *v10 == 0; /*0x710189*/
      dword_B0EA98 = dword_B0EA98; /*0x71018b*/
      if ( v12 ) /*0x71018f*/
        WinAPI::Wrapper(-2147467261); /*0x710196*/
      (*(void (__stdcall **)(int, int, _DWORD, int, int))(*(_DWORD *)*v10 + 112))( /*0x7101b3*/
        *v10,
        -1,
        dword_B0EA90,
        dword_B0EA94,
        dword_B0EA98);
      v15 = *v6; /*0x7101b6*/
      v16 = (*(int (__thiscall **)(int *, int *))(*v6 + 72))(v6, &v28.StreamClass_field_0C); /*0x7101bf*/
      v6->vt_slot_244(v16); /*0x7101c5*/
      v17 = *v6; /*0x7101cb*/
      *((_BYTE *)v6 + 1718) = 1; /*0x7101cf*/
      v6->vt_slot_976(); /*0x7101d6*/
      v12 = *v10 == 0; /*0x7101e0*/
      v28.m_Data = 0; /*0x7101e2*/
      if ( !v12 ) /*0x7101e6*/
      {
        v18 = StreamClass::Set((StreamClass *)&v28.m_Data, v6 + 413); /*0x7101ed*/
        if ( v18 < 0 && v18 != -2147467262 ) /*0x7101fb*/
          WinAPI::Wrapper(v18); /*0x7101fe*/
      }
      ppv = 0; /*0x71020f*/
      InstanceCOM = CreateInstanceCOM((ObjectClass *)&ppv, (IID *)&rclsid, 0, 7u); /*0x710213*/
      if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x710221*/
        WinAPI::Wrapper(InstanceCOM); /*0x710224*/
      if ( !ppv ) /*0x71022f*/
        WinAPI::Wrapper(-2147467261); /*0x710236*/
      (*(void (__stdcall **)(int, int *))(*(_DWORD *)ppv + 12))(ppv, v6); /*0x710243*/
      v28.m_Position = 0; /*0x71024a*/
      if ( ppv ) /*0x710250*/
      {
        v20 = StreamClass::Set((StreamClass *)&v28.m_Position, &ppv); /*0x71025b*/
        if ( v20 < 0 && v20 != -2147467262 ) /*0x710269*/
          WinAPI::Wrapper(v20); /*0x71026c*/
      }
      COMObject::SwapReference((COMObject *)&v28.m_Data, v28.m_Position); /*0x71027a*/
      if ( v28.m_Position ) /*0x710285*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v28.m_Position + 8))(v28.m_Position); /*0x71028a*/
      if ( v28.m_Data )
      {
        m_Size = v28.m_Size; /*0x710297*/
        if ( *(_DWORD *)(v28.m_Size + 684) ) /*0x71029b*/
          TechnoClass::EjectPassengers((TechnoClass *)v28.m_Size, 0); /*0x7102a6*/
        if ( v6[171] ) /*0x7102ab*/
          TechnoClass::EjectPassengers((TechnoClass *)v6, 1); /*0x7102b7*/
        if ( !v28.m_Data ) /*0x7102c4*/
          WinAPI::Wrapper(-2147467261); /*0x7102cb*/
        (*(void (__stdcall **)(int, int))(*(_DWORD *)v28.m_Data + 12))(v28.m_Data, *v10); /*0x7102d8*/
        v22 = *v10; /*0x7102db*/
        if ( *v10 != ppv ) /*0x7102e3*/
        {
          *v10 = ppv; /*0x7102e7*/
          SuperClass::SetFieldX((SuperClass *)(v6 + 413)); /*0x7102e9*/
          if ( v22 ) /*0x7102f0*/
            (*(void (__stdcall **)(int))(*(_DWORD *)v22 + 8))(v22); /*0x7102f6*/
        }
        m_Size->locomotorTarget = (v6[5] & 1) != 0 ? v6 : 0;
        *((v6[5] & 1) != 0 ? v6 + 172 : (int *)688) = m_Size;
        (*(void (__thiscall **)(_DWORD, int, int))(*m_Size->locomotorTarget + 1152))( /*0x710326*/
          m_Size->locomotorTarget,
          m_Size,
          1);
        (*(void (__thiscall **)(_DWORD))(*m_Size->locomotorTarget + 336))(m_Size->locomotorTarget); /*0x710334*/
        v23 = (int *)v6[373]; /*0x71033a*/
        if ( v23 ) /*0x710342*/
          TeamClass::LiberateMember_Start(v23, (int)v6, 0xFFFFFFFF, 0); /*0x710349*/
        *((_BYTE *)v6 + 1709) = 1; /*0x710352*/
        Member = Team::GetMember((Team *)v6, 0); /*0x710359*/
        if ( Member && (*(int (__thiscall **)(int))(*(_DWORD *)Member + 44))(Member) == 6 ) /*0x71036c*/
          (*(void (__thiscall **)(int *, int))(*v6 + 640))(v6, 3); /*0x710374*/
        (*(void (__thiscall **)(_DWORD, int, int))(*m_Size->locomotorTarget + 488))(m_Size->locomotorTarget, 5, 1); /*0x710386*/
        v25 = m_Size->locomotorTarget; /*0x71038c*/
        if ( !*(_BYTE *)(v25[135] + 492) && !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v25 + 132))(v25) + 1516) ) /*0x7103aa*/
        {
          v26 = m_Size->locomotorTarget; /*0x7103b4*/
          if ( !*(_BYTE *)(*(_DWORD *)(v26[135] + 52) + 422) ) /*0x7103c3*/
            (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v26 + 488))(v26, 15, 0); /*0x7103d5*/
        }
      }
      if ( ppv ) /*0x7103e1*/
        (*(void (__stdcall **)(int))(*(_DWORD *)ppv + 8))(ppv); /*0x7103e6*/
      if ( v28.m_Data ) /*0x7103ef*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v28.m_Data + 8))(v28.m_Data); /*0x7103f4*/
    }
    if ( *(_DWORD *)v28.__pad_0 ) /*0x7103fd*/
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)v28.__pad_0 + 8))(*(_DWORD *)v28.__pad_0); /*0x710402*/
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

  result = this->?[0]; /*0x50daa0*/
  if ( result >= 4 ) /*0x50daa8*/
    return 0; /*0x50daaf*/
  return result; /*0x50dab1*/
}
} // namespace gamemd
