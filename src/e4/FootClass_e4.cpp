// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Team_e4.hpp"

// 0x4D3590
namespace ra2 {
namespace game {
AbstractClass * * FootClass::Destruct()
{
{
  AbstractClass *v5; // ecx
  ILocomotion *v7; // eax
  CCINIClass *v8; // eax
  CCINIClass *v9; // eax
  int v2 = this->team; /*0x4d3597*/
  *(_DWORD *)this = &FootClass::`vftable'; /*0x4d359d*/
  this->vtable1 = &FootClass::`vftable'; /*0x4d35a5*/
  this->vtable2 = &FootClass::`vftable'; /*0x4d35ac*/
  this->vtable3 = &vt_FootClass; /*0x4d35b3*/
  if ( v2 && g_NetworkPlayerBuffer[4964] ) /*0x4d35c2*/
    TeamClass::LiberateMember_Start(v2, (IUnknown *)this, 0xFFFFFFFF, 0); /*0x4d35c8*/
  FootClass *v11 = this; /*0x4d35dd*/
  int v3; // eax
  v3 = (*(int (__thiscall **)(char *, void **))(*(_DWORD *)&g_CellDirectionOffsets[83760] + 16))( /*0x4d35e1*/
         &g_CellDirectionOffsets[83760],
         &v11);
  if ( v3 != -1 ) /*0x4d35e7*/
    FootClass::RemoveFromPointerArray(&g_CellDirectionOffsets[83760], v3); /*0x4d35ef*/
  v11 = this; /*0x4d3604*/
  int v4; // eax
  v4 = (*(int (__thiscall **)(char *, void **))(*(_DWORD *)&g_OverlayTypeConfig[32224] + 16))( /*0x4d3608*/
         &g_OverlayTypeConfig[32224],
         &v11);
  if ( v4 != -1 ) /*0x4d360e*/
    DynamicVector::RemoveItem(&g_OverlayTypeConfig[32224], v4); /*0x4d3616*/
  v5 = (AbstractClass *)this->parasiteImUsing; /*0x4d361b*/
  if ( v5 ) /*0x4d3623*/
  {
    (*(void (__thiscall **)(AbstractClass *, int))(*(_DWORD *)v5->__pad_0 + 32))(v5, 1); /*0x4d3629*/
    this->parasiteImUsing = 0; /*0x4d362c*/
  }
  if ( (unsigned short)this->currentJumpjetMapCoords != *(_WORD *)&g_CellDirectionOffsets[83704] /*0x4d3653*/
    || (unsigned short)this->FootClass_field_566 != *(_WORD *)&g_CellDirectionOffsets[83706] )
  {
    _DWORD * v6 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&this->inAirFlag0); /*0x4d365b*/
    if ( (void *)v6[56] == this ) /*0x4d3666*/
      v6[56] = 0; /*0x4d3668*/
  }
  Mixer::ReleaseChannel((int **)&this->hasParachute7); /*0x4d3677*/
  AudioFileClass::Release((_DWORD *)&this->hasParachute7); /*0x4d367e*/
  v7 = (ILocomotion *)this->locomotor; /*0x4d3683*/
  if ( v7 ) /*0x4d368b*/
    v7->ReleaseRef(this->locomotor); /*0x4d3690*/
  v8 = (CCINIClass *)this->q16C; /*0x4d3693*/
  this->FootClass_field_abstract_array_5AC = &vt_VectorClass_AbstractClass; /*0x4d36a0*/
  if ( v8 && this->u8_5B9 ) /*0x4d36a8*/
  {
    __3_YAXPAX_Z(v8); /*0x4d36b1*/
    this->q16C = 0; /*0x4d36b9*/
  }
  this->u8_5B9 = 0; /*0x4d36bf*/
  this->q16D = 0; /*0x4d36c5*/
  v9 = (CCINIClass *)this->q163; /*0x4d36cb*/
  this->unknownAbstractArray588 = &vt_VectorClass_AbstractClass; /*0x4d36d1*/
  if ( v9 && this->u8_595 ) /*0x4d36dc*/
  {
    __3_YAXPAX_Z(v9); /*0x4d36e5*/
    this->q163 = 0; /*0x4d36ed*/
  }
  this->u8_595 = 0; /*0x4d36f5*/
  this->q164 = 0; /*0x4d36fb*/
  return TechnoClass::DTOR((int)this); /*0x4d3706*/
}
} // namespace game
} // namespace ra2
}

// 0x4D98C0
namespace ra2 {
namespace game {
void FootClass::Destroyed(int a2)
{
{

  if ( (unsigned __int8)House::IsHumanPlayer(this->owner) /*0x4d98dd*/
    && !*(_BYTE *)((*((int (__thiscall **)(#375 **))*this + 33))(this) + 3412) )
  {
  _BYTE v4[4]; // [esp+4h] [ebp-4h] BYREF
    __int64 v3 = ((__int64 (__thiscall *)(#375 **, _BYTE *))*((_DWORD *)*this + 110))(this, v4); /*0x4d98f0*/
    if ( CreateTriggerClassIfFarEnough(7, SHIDWORD(v3), *(_DWORD *)v3) ) /*0x4d98fe*/
      VoxClass::FindAndPlay(aEvaUnitlost, -1); /*0x4d9911*/
  }
}
} // namespace game
} // namespace ra2
}

// 0x70F7E0
namespace ra2 {
namespace game {
int FootClass::updateThreat()
{
{

  IUnknown *v1 = this->targetingTimer; /*0x70f7e0*/
  int v2 = this->q188; /*0x70f7e6*/
  if ( v1 != -1 ) /*0x70f7ef*/
  {
    if ( (int)g_CurrentFrame - v1 < v2 ) /*0x70f7fb*/
      return v2 = = (_DWORD)g_CurrentFrame - v1; /*0x70f808*/
    v2 = 0; /*0x70f809*/
  }
  return v2 = = 0; /*0x70f808*/
}
} // namespace game
} // namespace ra2
}

// 0x710000
namespace ra2 {
namespace game {
void FootClass::FootClass_ImbueLocomotor(int *a1@<ecx> a1, int a2@<ebp> a2, int a3@<edi> a3, unsigned int * ppv, IID rclsid, int a6)
{
{
  int Member; // eax

  IUnknown *v6 = ppv; /*0x710006*/
  int * v30 = a1; /*0x71000d*/
  if ( ppv )
  {
  bool v12; // zf
    _DWORD * v7 = (_DWORD *)ppv[180]; /*0x710017*/
    if ( v7 ) /*0x71001f*/
      TaskManager::Update(v7); /*0x710021*/
    _DWORD * v8 = (_DWORD *)v6[421]; /*0x710026*/
    if ( v8 && v8[423] && *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v8 + 132))(v8) + 3278) ) /*0x710042*/
      BuildingClass::Deploy(*(_DWORD *)(v6[421] + 1692), a2, a3); /*0x710058*/
    int v9 = v6[413]; /*0x71005d*/
    ILocomotion *v10 = v6 + 413; /*0x710063*/
    int v27 = 0; /*0x71006b*/
    if ( v9 ) /*0x710073*/
    {
      int v11 = StreamClass::Set(&v27, v6 + 413); /*0x71007a*/
      if ( v11 < 0 && v11 != -2147467262 ) /*0x710088*/
        WinAPI::Wrapper(v11); /*0x71008b*/
    }
    if ( *(_BYTE *)(v6->GetSpecialValue() + 1516)
      && v27
      && !v6[172]
      && (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v27 + 28))(v27) )
    {
      if ( !v27 ) /*0x7100d6*/
        WinAPI::Wrapper(-2147467261); /*0x7100dd*/
      v12 = (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v27 + 20))(v27) == 0; /*0x7100ec*/
      int v13 = *v10; /*0x7100ee*/
      if ( v12 ) /*0x7100f0*/
      {
        if ( !v13 ) /*0x710126*/
          WinAPI::Wrapper(-2147467261); /*0x71012d*/
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v10 + 72))(*v10); /*0x710137*/
        v6->vt_slot_496(-1); /*0x710140*/
        v6->vt_slot_488(13, 0); /*0x71014e*/
      }
      else
      {
        if ( v13 ) /*0x7100f4*/
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v13 + 8))(*v10); /*0x7100f9*/
        int v14 = v27; /*0x7100fc*/
        *v10 = 0; /*0x710100*/
        if ( !v14 ) /*0x710108*/
          WinAPI::Wrapper(-2147467261); /*0x71010f*/
        (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v14 + 16))(v14, v6 + 413); /*0x71011c*/
      }
    }
    else
    {
      if ( !*v10 ) /*0x710159*/
        WinAPI::Wrapper(-2147467261); /*0x710163*/
      (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)*v10 + 156))(*v10, 0); /*0x71016f*/
      v12 = *v10 == 0; /*0x710189*/
      int v32 = DataGlobal_B0EA98; /*0x71018b*/
      if ( v12 ) /*0x71018f*/
        WinAPI::Wrapper(-2147467261); /*0x710196*/
      (*(void (__stdcall **)(_DWORD, int, int, int, int))(*(_DWORD *)*v10 + 112))( /*0x7101b3*/
        *v10,
        -1,
        g_TechnoClassPool,
        DataGlobal_B0EA94,
        v32);
      int v15 = *v6; /*0x7101b6*/
  int v31; // [esp+70h] [ebp-Ch] BYREF
      int v16 = v6->vt_slot_72(&v31); /*0x7101bf*/
      v6->vt_slot_244(v16); /*0x7101c5*/
      int v17 = *v6; /*0x7101cb*/
      *((_BYTE *)v6 + 1718) = 1; /*0x7101cf*/
      v6->vt_slot_976(); /*0x7101d6*/
      v12 = *v10 == 0; /*0x7101e0*/
      int v28 = 0; /*0x7101e2*/
      if ( !v12 ) /*0x7101e6*/
      {
        int v18 = StreamClass::Set(&v28, v6 + 413); /*0x7101ed*/
        if ( v18 < 0 && v18 != -2147467262 ) /*0x7101fb*/
          WinAPI::Wrapper(v18); /*0x7101fe*/
      }
      ppv = 0; /*0x71020f*/
      int v19 = CreateInstanceCOM((LPVOID *)&ppv, &rclsid, 0, 7u); /*0x710213*/
      if ( v19 < 0 && v19 != -2147467262 ) /*0x710221*/
        WinAPI::Wrapper(v19); /*0x710224*/
      if ( !ppv ) /*0x71022f*/
        WinAPI::Wrapper(-2147467261); /*0x710236*/
      (*(void (__stdcall **)(_DWORD *, _DWORD *))(*ppv + 12))(ppv, v6); /*0x710243*/
      int v29 = 0; /*0x71024a*/
      if ( ppv ) /*0x710250*/
      {
        int v20 = StreamClass::Set(&v29, &ppv); /*0x71025b*/
        if ( v20 < 0 && v20 != -2147467262 ) /*0x710269*/
          WinAPI::Wrapper(v20); /*0x71026c*/
      }
      COMObject::SwapReference(&v28, v29); /*0x71027a*/
      if ( v29 ) /*0x710285*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v29 + 8))(v29); /*0x71028a*/
      if ( v28 )
      {
        TechnoClass *v21 = v30; /*0x710297*/
        if ( v30[171] ) /*0x71029b*/
          TechnoClass::EjectPassengers(v30, 0); /*0x7102a6*/
        if ( v6[171] ) /*0x7102ab*/
          TechnoClass::EjectPassengers(v6, 1); /*0x7102b7*/
        if ( !v28 ) /*0x7102c4*/
          WinAPI::Wrapper(-2147467261); /*0x7102cb*/
        (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v28 + 12))(v28, *v10); /*0x7102d8*/
        int v22 = *v10; /*0x7102db*/
        if ( (_DWORD *)*v10 != ppv ) /*0x7102e3*/
        {
          *v10 = ppv; /*0x7102e7*/
          SuperClass::SetFieldX(v6 + 413); /*0x7102e9*/
          if ( v22 ) /*0x7102f0*/
            (*(void (__stdcall **)(int))(*(_DWORD *)v22 + 8))(v22); /*0x7102f6*/
        }
        v21[171] = (v6[5] & 1) != 0 ? (unsigned int)v6 : 0;
        *((v6[5] & 1) != 0 ? v6 + 172 : (_DWORD *)688) = v21;
        (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v21[171] + 1152))(v21[171], v21, 1); /*0x710326*/
        (*(void (__thiscall **)(int))(*(_DWORD *)v21[171] + 336))(v21[171]); /*0x710334*/
        int v23 = v6[373]; /*0x71033a*/
        if ( v23 ) /*0x710342*/
          TeamClass::LiberateMember_Start(v23, (int)v6, 0xFFFFFFFF, 0); /*0x710349*/
        *((_BYTE *)v6 + 1709) = 1; /*0x710352*/
        Member = Team::GetMember(v6, 0); /*0x710359*/
        if ( Member && (*(int (__thiscall **)(int))(*(_DWORD *)Member + 44))(Member) == 6 ) /*0x71036c*/
          v6->vt_slot_640(3); /*0x710374*/
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v21[171] + 488))(v21[171], 5, 1); /*0x710386*/
        _DWORD * v25 = (_DWORD *)v21[171]; /*0x71038c*/
        if ( !*(_BYTE *)(v25[135] + 492) && !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v25 + 132))(v25) + 1516) ) /*0x7103aa*/
        {
          _DWORD * v26 = (_DWORD *)v21[171]; /*0x7103b4*/
          if ( !*(_BYTE *)(*(_DWORD *)(v26[135] + 52) + 422) ) /*0x7103c3*/
            (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v26 + 488))(v26, 15, 0); /*0x7103d5*/
        }
      }
      if ( ppv ) /*0x7103e1*/
        (*(void (__stdcall **)(_DWORD *))(*ppv + 8))(ppv); /*0x7103e6*/
      if ( v28 ) /*0x7103ef*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v28 + 8))(v28); /*0x7103f4*/
    }
    if ( v27 ) /*0x7103fd*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v27 + 8))(v27); /*0x710402*/
  }
}
} // namespace game
} // namespace ra2
}

// 0x41C120
namespace ra2 {
namespace game {
void FootClass::Stub(int a1)
{
  ;
}
} // namespace game
} // namespace ra2

// 0x50DAA0
namespace ra2 {
namespace game {
unsigned int FootClass::checkTurning()
{
{
    unsigned int result;
    result = this->disguiseCreationFrame;
    if ( result >= 4 )
    return 0;
    return result;
}
}
} // namespace game
} // namespace ra2
