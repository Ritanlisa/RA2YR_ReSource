// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/VectorClass_BombClass_e4.hpp"
#include "e4/classes/VectorClass_BuildingType_e4.hpp"
#include "e4/classes/VectorClass_Building_e4.hpp"
#include "e4/classes/VectorClass_Cell_e4.hpp"
#include "e4/classes/VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass_e4.hpp"
#include "e4/classes/VectorClass_E_e4.hpp"
#include "e4/classes/VectorClass_InfantryPtr_e4.hpp"
#include "e4/classes/VectorClass_K_14_e4.hpp"
#include "e4/classes/VectorClass_K_20_e4.hpp"
#include "e4/classes/VectorClass_K_26_e4.hpp"
#include "e4/classes/VectorClass_K_32_e4.hpp"
#include "e4/classes/VectorClass_K_38_e4.hpp"
#include "e4/classes/VectorClass_K_44_e4.hpp"
#include "e4/classes/VectorClass_K_8_e4.hpp"
#include "e4/classes/VectorClass_K_e4.hpp"
#include "e4/classes/VectorClass_N_e4.hpp"
#include "e4/classes/VectorClass_PAE_e4.hpp"
#include "e4/classes/VectorClass_PAG_e4.hpp"
#include "e4/classes/VectorClass_PBG_e4.hpp"
#include "e4/classes/VectorClass_Point2D_e4.hpp"
#include "e4/classes/VectorClass_Ptr_e4.hpp"
#include "e4/classes/VectorClass_ReestablishPtr_e4.hpp"
#include "e4/classes/VectorClass_Scenario2_e4.hpp"
#include "e4/classes/VectorClass_Scenario3_e4.hpp"
#include "e4/classes/VectorClass_Scenario_e4.hpp"
#include "e4/classes/VectorClass_SuperPtr_e4.hpp"
#include "e4/classes/VectorClass_TPoint3D_int_e4.hpp"
#include "e4/classes/VectorClass_Techno_e4.hpp"
#include "e4/classes/VectorClass_UAcceleratorTracker_e4.hpp"
#include "e4/classes/VectorClass_UAngerStruct___16_e4.hpp"
#include "e4/classes/VectorClass_UAngerStruct_e4.hpp"
#include "e4/classes/VectorClass_UDirtyAreaStruct___16_e4.hpp"
#include "e4/classes/VectorClass_UDirtyAreaStruct_e4.hpp"
#include "e4/classes/VectorClass_UHashObject_uint_SubzoneConn_e4.hpp"
#include "e4/classes/VectorClass_UHashObject_uint_uint_e4.hpp"
#include "e4/classes/VectorClass_UScoutStruct___33_e4.hpp"
#include "e4/classes/VectorClass_UScoutStruct_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/VectorClass_USubzoneTrackingStruct_e4.hpp"
#include "e4/classes/VectorClass_UUndoInfoStruct_e4.hpp"
#include "e4/classes/VectorClass_UtagCONNECTDATA_e4.hpp"
#include "e4/classes/VectorClass_W4PassabilityType_e4.hpp"
#include "e4/classes/VectorClass_Wstring_e4.hpp"
#include "e4/classes/VectorClass__N_18_e4.hpp"
#include "e4/classes/VectorClass__N_e4.hpp"
#include "e4/classes/VectorClass_cptr_CommandClass_e4.hpp"
#include "e4/classes/VectorClass_cptr_MultiMission_e4.hpp"
#include "e4/classes/VectorClass_ptr_AITriggerTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_AbstractTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_AircraftClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_AircraftTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_AirstrikeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_AlphaShapeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_AnimClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_AnimTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_BombClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_BuildChoiceClass_int_ouseClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_BuildingLightClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_BuildingTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_BulletClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_BulletTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_CCINIClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_CampaignClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_CaptureManagerClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_ColorScheme_e4.hpp"
#include "e4/classes/VectorClass_ptr_ConvertClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_CrossDissolveEffect_e4.hpp"
#include "e4/classes/VectorClass_ptr_DamageGroup_e4.hpp"
#include "e4/classes/VectorClass_ptr_EBolt_e4.hpp"
#include "e4/classes/VectorClass_ptr_EMPulseClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_EgoClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_FactoryClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_FoggedObjectClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_GlobalPacketType_e4.hpp"
#include "e4/classes/VectorClass_ptr_HouseClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_HouseTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_InfantryClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_InfantryTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_IonBlastClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_IsometricTileClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_IsometricTileTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_LaserDrawClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_LightConvertClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_LightSourceClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_LineTrail_e4.hpp"
#include "e4/classes/VectorClass_ptr_MSSfxEntry_e4.hpp"
#include "e4/classes/VectorClass_ptr_MSSfx_e4.hpp"
#include "e4/classes/VectorClass_ptr_MSTextEntry_e4.hpp"
#include "e4/classes/VectorClass_ptr_MapRegionClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_MapSelection_e4.hpp"
#include "e4/classes/VectorClass_ptr_MixFileClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_MovieHandle_e4.hpp"
#include "e4/classes/VectorClass_ptr_MultiMission_e4.hpp"
#include "e4/classes/VectorClass_ptr_MultiplayerTeam_e4.hpp"
#include "e4/classes/VectorClass_ptr_ObjectTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_OverlayClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_OverlayTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_ParasiteClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_ParticleSystemClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_ParticleSystemTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_ParticleTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_PendingCellClass_LightSourceClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_PhoneEntryClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_PlanningBranchClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_PlanningMemberClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_PlanningTokenClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_RadBeam_e4.hpp"
#include "e4/classes/VectorClass_ptr_RadSiteClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_RadarEventClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_Reestablish_e4.hpp"
#include "e4/classes/VectorClass_ptr_ScriptClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_ScriptTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_SideClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_SlaveManagerClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_SmudgeTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_SpawnManagerClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_SpotLightClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_SubTitle_e4.hpp"
#include "e4/classes/VectorClass_ptr_SuperClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_SuperWeaponTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_TEventClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_TagTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_TaskForceClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_TeamClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_TeamTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_TemporalClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_TerrainTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_ThemeControl_e4.hpp"
#include "e4/classes/VectorClass_ptr_TiberiumClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_TriggerClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_TriggerTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_TubeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_UnitClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_UnitTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_VocClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_VoxClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_VoxelAnimClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_VoxelAnimTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_WarheadTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_WaveClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_WaypointPathClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_WeaponTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass_e4.hpp"
#include "e4/classes/VectorClass_rc_ptr_WDTTerritory_e4.hpp"
#include "e4/classes/VectorClass_ushort_e4.hpp"

// 0x4137A0
int VectorClass::RemoveObjectById()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  VectorClass *v7; // [esp+4h] [ebp-4h] BYREF
  v7 = this; /*0x4137a0*/
  if ( !this->q2590 ) /*0x4137a1*/
    return 0; /*0x4137ab*/
  int v2 = this + 9600; /*0x4137b6*/
  int v3 = this->q960; /*0x4137c3*/
  v7 = *this->q2584; /*0x4137c7*/
  int v4 = (*(int (__thiscall **)(int, int *))(v3 + 16))(this + 9600, &v7); /*0x4137cb*/
  if ( v4 != -1 ) /*0x4137d1*/
  {
    int v5 = *(_DWORD *)(v2 + 16); /*0x4137d3*/
    if ( v4 < v5 ) /*0x4137d8*/
    {
      int v6 = v5 - 1; /*0x4137da*/
      for ( *(_DWORD *)(v2 + 16) = v6; /*0x4137e0*/
            v4 < *(_DWORD *)(v2 + 16);
            *(_DWORD *)(*(_DWORD *)(v2 + 4) + 4 * v4 - 4) = *(_DWORD *)(*(_DWORD *)(v2 + 4) + 4 * v4) )
      {
        ++v4; /*0x4137e5*/
      }
    }
  }
  return v7; /*0x4137ae*/
}
}

// 0x65A970
int VectorClass::RemoveElement()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int **v14; // ecx
  int v18; // [esp+18h] [ebp+8h]
  int *v19; // [esp+1Ch] [ebp+Ch]
  int * v1 = v19; /*0x65a974*/
  if ( !v19 ) /*0x65a97c*/
  {
    v1 = (int *)**((_DWORD **)this + 57); /*0x65a984*/
    if ( !v1 ) /*0x65a988*/
      return 0; /*0x65a990*/
  }
  int v17; // [esp+14h] [ebp+4h]
  if ( v17 == 3 ) /*0x65a99a*/
  {
    int v4 = *((_DWORD *)this + 58); /*0x65a99c*/
    int v5 = 0; /*0x65a9a2*/
    if ( v4 > 0 ) /*0x65a9a6*/
    {
      do /*0x65a9c7*/
      {
        int v6 = *((_DWORD *)this + 57); /*0x65a9a8*/
        int * v7 = *(int **)(v6 + 4 * v5); /*0x65a9ae*/
        _DWORD * v8 = (_DWORD *)(v6 + 4 * v5); /*0x65a9b1*/
        if ( v7 == v1 ) /*0x65a9b6*/
          *v8 = 0; /*0x65a9b8*/
        ++v5; /*0x65a9c4*/
      }
      while ( v5 < *((_DWORD *)this + 58) ); /*0x65a9c7*/
    }
    goto LABEL_9; /*0x65a9c7*/
  }
  if ( v17 != 2 ) /*0x65a9eb*/
  {
LABEL_9:
    int v9 = *v1; /*0x65a9c9*/
    void * v10 = AbstractClass::IsTechnoType(this); /*0x65a9d3*/
    return (*(int (__thiscall **)(int *, void *, int, int))(v9 + 404))(v1, v10, v17, v18); /*0x65a9e5*/
  }
  int v11 = *((_DWORD *)this + 58); /*0x65a9ed*/
  int v12 = -1; /*0x65a9f3*/
  int v13 = 0; /*0x65a9f6*/
  if ( v11 > 0 ) /*0x65a9fa*/
  {
    v14 = (int **)*((_DWORD *)this + 57); /*0x65a9fc*/
    while ( 1 ) /*0x65aa02*/
    {
      if ( v12 == -1 && !*v14 ) /*0x65aa07*/
        v12 = v13; /*0x65aa0c*/
      if ( *v14 == v1 ) /*0x65aa10*/
        return 1; /*0x65aa10*/
      ++v13; /*0x65aa12*/
      ++v14; /*0x65aa13*/
      if ( v13 >= v11 ) /*0x65aa18*/
      {
        if ( v12 != -1 ) /*0x65aa1d*/
          goto LABEL_20; /*0x65aa1d*/
        break; /*0x65aa1d*/
      }
    }
  }
  (*(void (__thiscall **)(#377 *, int, _DWORD))(*(_DWORD *)this + 632))(this, 3, **((_DWORD **)this + 57)); /*0x65aa1f*/
  v12 = 0; /*0x65aa34*/
LABEL_20:
  int v15 = *v1; /*0x65aa36*/
  void * v16 = AbstractClass::IsTechnoType(this); /*0x65aa41*/
  if ( (*(int (__thiscall **)(int *, void *, int, int))(v15 + 404))(v1, v16, 2, v18) == 1 ) /*0x65aa52*/
  {
    *(_DWORD *)(*((_DWORD *)this + 57) + 4 * v12) = v1; /*0x65aa5a*/
    return 1; /*0x65aa66*/
  }
  return 10; /*0x65a98a*/
}
}

// 0x763BA0
int VectorClass::GetAtChecked(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v3 = this->q028->SaveLoad_Register(aP1) + 1; /*0x763bb4*/
  if ( this->q024 != -1 && v3 == this->tail_E ) /*0x763bbd*/
    v3 = this->q024; /*0x763bbf*/
  if ( v3 < 0 || v3 >= this->tail_E ) /*0x763bc8*/
    return 0; /*0x763bd7*/
  else
    return this->q02C + 12 * v3; /*0x763bd1*/
}
}

// 0x42F6F0
namespace gamemd {
AbstractClass * VectorClass_Cell::Release(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // eax

  if ( a2 ) /*0x42f6fc*/
  {
  _DWORD *v5; // edi
    this->IsInitialized = 0; /*0x42f706*/
    if ( a3 ) /*0x42f70c*/
    {
      v5 = a3; /*0x42f734*/
    }
    else
    {
      _DWORD * v4 = __2_YAPAXI_Z(4 * a2); /*0x42f716*/
      if ( v4 ) /*0x42f720*/
        v5 = v4; /*0x42f725*/
      else
        v5 = 0; /*0x42f72d*/
    }
    this->IsInitialized = 1; /*0x42f73c*/
    if ( v5 ) /*0x42f740*/
    {
      if ( this->Items ) /*0x42f74b*/
      {
        int v7 = this->Capacity; /*0x42f752*/
        if ( a2 < v7 ) /*0x42f757*/
          v7 = a2; /*0x42f759*/
        for ( i = 0; i < v7; v5[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x42f75f*/
          ++i; /*0x42f764*/
        if ( this->IsAllocated ) /*0x42f771*/
        {
          __3_YAXPAX_Z(this->Items); /*0x42f77c*/
          this->Items = 0; /*0x42f784*/
        }
      }
      this->Items = v5; /*0x42f78d*/
      this->Capacity = a2; /*0x42f795*/
      this->IsAllocated = a3 == 0; /*0x42f798*/
      return 1; /*0x42f79e*/
    }
    else
    {
      return 0; /*0x42f745*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x42f7a8*/
    return 1; /*0x42f7ae*/
  }
}
}
} // namespace gamemd

// 0x4E0840
namespace gamemd {
AbstractClass * VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::Release(int a2, int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( a2 ) /*0x4e084c*/
  {
  _DWORD *v6; // edi
    int * v4 = a3; /*0x4e0852*/
    this->IsInitialized = 0; /*0x4e0856*/
    if ( a3 ) /*0x4e085c*/
    {
      *a3 = a2; /*0x4e0897*/
      v6 = a3 + 1; /*0x4e089b*/
      if ( a2 - 1 >= 0 ) /*0x4e089e*/
      {
        _DWORD * v9 = a3 + 2; /*0x4e08a0*/
        int v10 = a2; /*0x4e08a3*/
        do /*0x4e08ae*/
        {
          *v9 = 0; /*0x4e08a4*/
          v9 += 2; /*0x4e08aa*/
          --v10; /*0x4e08ad*/
        }
        while ( v10 ); /*0x4e08ae*/
      }
    }
    else
    {
      int * v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x4e0866*/
      if ( v5 ) /*0x4e0870*/
      {
        *v5 = a2; /*0x4e0875*/
        v6 = v5 + 1; /*0x4e0879*/
        if ( a2 - 1 >= 0 ) /*0x4e087c*/
        {
          _DWORD * v7 = v5 + 2; /*0x4e087e*/
          int v8 = a2; /*0x4e0881*/
          do /*0x4e088c*/
          {
            *v7 = 0; /*0x4e0882*/
            v7 += 2; /*0x4e0888*/
            --v8; /*0x4e088b*/
          }
          while ( v8 ); /*0x4e088c*/
        }
      }
      else
      {
        v6 = 0; /*0x4e0890*/
      }
    }
    this->IsInitialized = 1; /*0x4e08b2*/
    if ( v6 ) /*0x4e08b6*/
    {
      if ( this->Items ) /*0x4e08c1*/
      {
        int v12 = this->Capacity; /*0x4e08c8*/
        if ( a2 < v12 ) /*0x4e08cd*/
          v12 = a2; /*0x4e08cf*/
        int v13 = 0; /*0x4e08d1*/
        if ( v12 > 0 ) /*0x4e08d5*/
        {
          do /*0x4e08ed*/
          {
            int v14 = this->Items; /*0x4e08d7*/
            ++v13; /*0x4e08da*/
            v6[2 * v13 - 2] = *(_DWORD *)(v14 + 8 * v13 - 8); /*0x4e08e1*/
            v6[2 * v13 - 1] = *(_DWORD *)(v14 + 8 * v13 - 4); /*0x4e08e9*/
          }
          while ( v13 < v12 ); /*0x4e08ed*/
          v4 = a3; /*0x4e08ef*/
        }
        if ( this->IsAllocated ) /*0x4e08f3*/
        {
          int v15 = this->Items; /*0x4e08fa*/
          if ( v15 ) /*0x4e08ff*/
            __3_YAXPAX_Z((void *)(v15 - 4)); /*0x4e0909*/
          this->Items = 0; /*0x4e0911*/
        }
      }
      this->Items = v6; /*0x4e091a*/
      this->Capacity = a2; /*0x4e0922*/
      this->IsAllocated = v4 == 0; /*0x4e0925*/
      return 1; /*0x4e092b*/
    }
    else
    {
      return 0; /*0x4e08bb*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4e0935*/
    return 1; /*0x4e093b*/
  }
}
}
} // namespace gamemd

// 0x4E0B10
namespace gamemd {
AbstractClass * VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::SetCapacity(int a2, int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( a2 ) /*0x4e0b1c*/
  {
  _DWORD *v6; // edi
    int * v4 = a3; /*0x4e0b22*/
    this->IsInitialized = 0; /*0x4e0b26*/
    if ( a3 ) /*0x4e0b2c*/
    {
      *a3 = a2; /*0x4e0b67*/
      v6 = a3 + 1; /*0x4e0b6c*/
      if ( a2 - 1 >= 0 ) /*0x4e0b6f*/
      {
        _DWORD * v9 = a3 + 2; /*0x4e0b71*/
        int v10 = a2; /*0x4e0b74*/
        do /*0x4e0b7f*/
        {
          *v9 = 0; /*0x4e0b75*/
          v9 += 2; /*0x4e0b7b*/
          --v10; /*0x4e0b7e*/
        }
        while ( v10 ); /*0x4e0b7f*/
      }
    }
    else
    {
      int * v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x4e0b36*/
      if ( v5 ) /*0x4e0b40*/
      {
        *v5 = a2; /*0x4e0b45*/
        v6 = v5 + 1; /*0x4e0b49*/
        if ( a2 - 1 >= 0 ) /*0x4e0b4c*/
        {
          _DWORD * v7 = v5 + 2; /*0x4e0b4e*/
          int v8 = a2; /*0x4e0b51*/
          do /*0x4e0b5c*/
          {
            *v7 = 0; /*0x4e0b52*/
            v7 += 2; /*0x4e0b58*/
            --v8; /*0x4e0b5b*/
          }
          while ( v8 ); /*0x4e0b5c*/
        }
      }
      else
      {
        v6 = 0; /*0x4e0b60*/
      }
    }
    this->IsInitialized = 1; /*0x4e0b83*/
    if ( !v6 ) /*0x4e0b87*/
      return 0; /*0x4e0c27*/
    if ( this->Items ) /*0x4e0b8d*/
    {
      AbstractClass *v11 = this->Capacity; /*0x4e0b94*/
      if ( a2 < v11 ) /*0x4e0b99*/
        v11 = a2; /*0x4e0b9b*/
      int v12 = 0; /*0x4e0b9d*/
      if ( v11 > 0 ) /*0x4e0ba1*/
      {
        do /*0x4e0bb9*/
        {
          AbstractClass *v13 = this->Items; /*0x4e0ba3*/
          ++v12; /*0x4e0ba6*/
          v6[2 * v12 - 2] = *(_DWORD *)(v13 + 8 * v12 - 8); /*0x4e0bad*/
          v6[2 * v12 - 1] = *(_DWORD *)(v13 + 8 * v12 - 4); /*0x4e0bb5*/
        }
        while ( v12 < v11 ); /*0x4e0bb9*/
        v4 = a3; /*0x4e0bbb*/
      }
      if ( this->IsAllocated ) /*0x4e0bbf*/
      {
        AbstractClass *v14 = this->Items; /*0x4e0bc6*/
        if ( v14 ) /*0x4e0bcb*/
        {
          void * v15 = (void *)(v14 - 4); /*0x4e0bd0*/
          Array::ForEachReverse(v14, 8, *(_DWORD *)(v14 - 4), (int (__thiscall *)(int))nullsub_138); /*0x4e0bdc*/
          __3_YAXPAX_Z(v15); /*0x4e0be2*/
          v4 = a3; /*0x4e0be7*/
        }
        this->Items = 0; /*0x4e0bee*/
      }
    }
    this->Items = v6; /*0x4e0bf7*/
    this->Capacity = a2; /*0x4e0bff*/
    this->IsAllocated = v4 == 0; /*0x4e0c02*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4e0c0b*/
  }
  AbstractClass *v16 = this->Capacity; /*0x4e0c0e*/
  if ( v16 < this->Count ) /*0x4e0c16*/
    this->Count = v16; /*0x4e0c18*/
  return 1; /*0x4e0c1b*/
}
}
} // namespace gamemd

// 0x4A2820
namespace gamemd {
unsigned int * VectorClass_K_8::Constructor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  *(this + 2) = 0; /*0x4a282a*/
  *(this + 3) = 0; /*0x4a282d*/
  *((_BYTE *)this + 16) = 0; /*0x4a2830*/
  *((_BYTE *)this + 17) = 0; /*0x4a2833*/
  *(this + 5) = 0; /*0x4a2836*/
  *(this + 6) = __2_YAPAXI_Z(0x10000u); /*0x4a2843*/
  *(this + 7) = __2_YAPAXI_Z(0x10000u); /*0x4a2850*/
  *(this + 8) = __2_YAPAXI_Z(0x10000u); /*0x4a285b*/
  *this = &CStreamClass::`vftable'; /*0x4a285e*/
  *(this + 1) = &vt_CStreamClass; /*0x4a2864*/
  *(this + 9) = 0xFFFF; /*0x4a286b*/
  return this; /*0x4a2874*/
}
}
} // namespace gamemd

// 0x5AD010
namespace gamemd {
AbstractClass * VectorClass_Ptr::ResizeAndCopy(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // eax

  if ( a2 ) /*0x5ad01c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5ad022*/
    if ( a3 ) /*0x5ad028*/
      _DWORD * v4 = a3; /*0x5ad03e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5ad03a*/
    *((_BYTE *)this + 12) = 1; /*0x5ad042*/
    if ( !v4 ) /*0x5ad046*/
      return 0; /*0x5ad0ba*/
    if ( *((_DWORD *)this + 1) ) /*0x5ad048*/
    {
      int v5 = *((_DWORD *)this + 2); /*0x5ad04f*/
      if ( a2 < v5 ) /*0x5ad054*/
        v5 = a2; /*0x5ad056*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i - 4) ) /*0x5ad05c*/
        ++i; /*0x5ad061*/
      if ( *((_BYTE *)this + 13) ) /*0x5ad06e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5ad079*/
        *((_DWORD *)this + 1) = 0; /*0x5ad081*/
      }
    }
    *((_DWORD *)this + 1) = v4; /*0x5ad08a*/
    *((_DWORD *)this + 2) = a2; /*0x5ad092*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x5ad095*/
  }
  else
  {
    this->vt_slot_12(); /*0x5ad09e*/
  }
  int v7 = *((_DWORD *)this + 2); /*0x5ad0a1*/
  if ( v7 < *((_DWORD *)this + 4) ) /*0x5ad0a9*/
    *((_DWORD *)this + 4) = v7; /*0x5ad0ab*/
  return 1; /*0x5ad0ae*/
}
}
} // namespace gamemd

// 0x4A0C20
namespace gamemd {
unsigned int * VectorClass_ptr_BuildChoiceClass_int_ouseClass::Constructor(EnumConnectionPointsClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
        _DWORD *this,
        EnumConnectionPointsClass *aP1)
{
  int EnumConnectionPointsClass_field_0x08; // eax
  int i; // esi

  _DWORD * v3 = this + 3; /*0x4a0c2c*/
  this->Items = 0; /*0x4a0c2f*/
  this->Capacity = 0; /*0x4a0c32*/
  this->Count = 0; /*0x4a0c37*/
  this->CapacityIncrement = 0; /*0x4a0c3a*/
  this->q018 = 1; /*0x4a0c3d*/
  *((_BYTE *)this + 25) = 0; /*0x4a0c41*/
  this->IsInitialized = &vt_VectorClass_IConnectionPoint; /*0x4a0c44*/
  if ( this + 3 != (_DWORD *)aP1 ) /*0x4a0c4a*/
  {
    VectorClass::CleanupTyped((int)(this + 3)); /*0x4a0c4e*/
    EnumConnectionPointsClass_field_0x08 = aP1->EnumConnectionPointsClass_field_0x08; /*0x4a0c54*/
    v3[2] = EnumConnectionPointsClass_field_0x08; /*0x4a0c59*/
    if ( EnumConnectionPointsClass_field_0x08 ) /*0x4a0c5c*/
    {
      int v5 = __2_YAPAXI_Z(4 * EnumConnectionPointsClass_field_0x08); /*0x4a0c62*/
      v3[1] = v5; /*0x4a0c6c*/
      if ( v5 ) /*0x4a0c6f*/
      {
        int v6 = v3[2]; /*0x4a0c71*/
        int v7 = 0; /*0x4a0c74*/
        *((_BYTE *)v3 + 13) = 1; /*0x4a0c78*/
        if ( v6 > 0 ) /*0x4a0c7c*/
        {
          do /*0x4a0c90*/
          {
            *(_DWORD *)(v3[1] + 4 * v7) = *(_DWORD *)(aP1->EnumConnectionPointsClass_field_0x04 + 4 * v7); /*0x4a0c87*/
            ++v7; /*0x4a0c8d*/
          }
          while ( v7 < v3[2] ); /*0x4a0c90*/
        }
      }
    }
    else
    {
      v3[1] = 0; /*0x4a0c94*/
      *((_BYTE *)v3 + 13) = 0; /*0x4a0c97*/
    }
  }
  v3[4] = aP1->EnumConnectionPointsClass_field_0x10; /*0x4a0c9d*/
  v3[5] = aP1->EnumConnectionPointsClass_field_0x14; /*0x4a0ca3*/
  *v3 = &vt_DynamicVectorClass_IConnectionPoint; /*0x4a0ca6*/
  *this = &vt_EnumConnectionPointsClass; /*0x4a0cac*/
  for ( i = 0; i < this->q070; ++i ) /*0x4a0cb9*/
  {
    int v10 = *(_DWORD *)(this->Count + 4 * i); /*0x4a0cc1*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 4))(v10); /*0x4a0cc4*/
  }
  return this; /*0x4a0cd1*/
}
}
} // namespace gamemd

// 0x4F6A20
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::SetCapacity(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v2 = 0; /*0x4f6a27*/
  int v3 = 0; /*0x4f6a29*/
  if ( g_SidebarState <= 0 ) /*0x4f6a2d*/
    return 0; /*0x4f6a71*/
  do /*0x4f6a66*/
  {
    _DWORD * v4 = (_DWORD *)*((_DWORD *)g_TechnoClass_Count + v3); /*0x4f6a42*/
    if ( v4[135] == a1 - 36 && *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v4 + 132))(v4) + 956) == a2 ) /*0x4f6a5b*/
      ++v2; /*0x4f6a5d*/
    ++v3; /*0x4f6a63*/
  }
  while ( v3 < g_SidebarState ); /*0x4f6a66*/
  return v2; /*0x4f6a6c*/
}
}
} // namespace gamemd

// 0x4F6A80
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::SetCapacity_0(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v2 = 0; /*0x4f6a87*/
  int v3 = 0; /*0x4f6a89*/
  if ( g_SidebarState <= 0 ) /*0x4f6a8d*/
    return 0; /*0x4f6ad1*/
  do /*0x4f6ac6*/
  {
    _DWORD * v4 = (_DWORD *)*((_DWORD *)g_TechnoClass_Count + v3); /*0x4f6aa2*/
    if ( v4[135] == a1 - 40 && *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v4 + 132))(v4) + 956) == a2 ) /*0x4f6abb*/
      ++v2; /*0x4f6abd*/
    ++v3; /*0x4f6ac3*/
  }
  while ( v3 < g_SidebarState ); /*0x4f6ac6*/
  return v2; /*0x4f6acc*/
}
}
} // namespace gamemd

// 0x4F6AE0
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::SetCapacity_1(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v2 = 0; /*0x4f6ae7*/
  int v3 = 0; /*0x4f6ae9*/
  if ( g_SidebarState <= 0 ) /*0x4f6aed*/
    return 0; /*0x4f6b44*/
  do /*0x4f6b39*/
  {
    _DWORD * v4 = (_DWORD *)*((_DWORD *)g_TechnoClass_Count + v3); /*0x4f6afe*/
    _DWORD * v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v4 + 132))(v4); /*0x4f6b05*/
    if ( v4[135] == a1 - 36 && v5[239] == a2 ) /*0x4f6b1f*/
      v2 += v5[412] + v5[413]; /*0x4f6b2f*/
    ++v3; /*0x4f6b36*/
  }
  while ( v3 < g_SidebarState ); /*0x4f6b39*/
  return v2; /*0x4f6b3f*/
}
}
} // namespace gamemd

// 0x4F6B50
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::SetCapacity_2(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v2 = 0; /*0x4f6b57*/
  int v3 = 0; /*0x4f6b59*/
  if ( g_SidebarState <= 0 ) /*0x4f6b5d*/
    return 0; /*0x4f6bb4*/
  do /*0x4f6ba9*/
  {
    _DWORD * v4 = (_DWORD *)*((_DWORD *)g_TechnoClass_Count + v3); /*0x4f6b6e*/
    _DWORD * v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v4 + 132))(v4); /*0x4f6b75*/
    if ( v4[135] == a1 - 40 && v5[239] == a2 ) /*0x4f6b8f*/
      v2 += v5[412] + v5[413]; /*0x4f6b9f*/
    ++v3; /*0x4f6ba6*/
  }
  while ( v3 < g_SidebarState ); /*0x4f6ba9*/
  return v2; /*0x4f6baf*/
}
}
} // namespace gamemd

// 0x4F6BC0
namespace gamemd {
unsigned int * VectorClass_ptr_BuildChoiceClass_int_ouseClass::SetCapacity_3(int a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int v4; // eax
  bool v7; // zf
  int v8; // esi
  int v9; // eax
  int v13; // [esp+8h] [ebp-20h] BYREF
  int v14; // [esp+Ch] [ebp-1Ch] BYREF
  int v15; // [esp+10h] [ebp-18h]
  int v16; // [esp+14h] [ebp-14h]
  int v17; // [esp+18h] [ebp-10h]
  _BYTE v18[12]; // [esp+1Ch] [ebp-Ch] BYREF

  int v2 = g_ControlGroupState; /*0x4f6bcf*/
  if ( *(_DWORD *)(a1 + 21616) == g_ControlGroupState ) /*0x4f6bdd*/
    int v3 = *(_DWORD *)(a1 + 21612); /*0x4f6be8*/
  else
    v3 = *(_DWORD *)(a1 + 21616); /*0x4f6bf0*/
  v13 = v3; /*0x4f6bfd*/
  if ( v3 == g_ControlGroupState ) /*0x4f6c01*/
  {
    v4 = g_ControlGroupPool; /*0x4f6c10*/
    v16 = g_ControlGroupConfig; /*0x4f6c15*/
    v17 = g_ControlGroupLimit; /*0x4f6c1f*/
  }
  else
  {
    void * v5 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v13); /*0x4f6c2f*/
    int * v6 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v5 + 72))(v5, v18); /*0x4f6c40*/
    v4 = *v6; /*0x4f6c49*/
    v16 = v6[1]; /*0x4f6c4e*/
    v17 = v6[2]; /*0x4f6c5b*/
    v2 = g_ControlGroupState; /*0x4f6c5b*/
  }
  v7 = *(_WORD *)(a1 + 21616) == (unsigned __int16)v2; /*0x4f6c6b*/
  LOWORD(v13) = v4 / 256; /*0x4f6c72*/
  if ( v7 && *(_WORD *)(a1 + 21618) == HIWORD(v2) ) /*0x4f6c80*/
    v8 = *(_DWORD *)(a1 + 21612); /*0x4f6c82*/
  else
    v8 = *(_DWORD *)(a1 + 21616); /*0x4f6c8a*/
  v14 = v8; /*0x4f6c97*/
  if ( v8 == v2 ) /*0x4f6c9b*/
  {
    v15 = g_ControlGroupPool; /*0x4f6caf*/
    v9 = g_ControlGroupConfig; /*0x4f6cb3*/
  }
  else
  {
    void * v10 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v14); /*0x4f6cc4*/
    int * v11 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v10 + 72))(v10, v18); /*0x4f6cd5*/
    v15 = *v11; /*0x4f6cd9*/
    v9 = v11[1]; /*0x4f6cdd*/
  }
  HIWORD(v13) = v9 / 256; /*0x4f6cf4*/
  *a2 = v13; /*0x4f6d02*/
  return a2; /*0x4f6cea*/
}
}
} // namespace gamemd

// 0x4F6D10
namespace gamemd {
unsigned int * VectorClass_ptr_BuildChoiceClass_int_ouseClass::SetCapacity_4(int a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int v4; // eax
  bool v7; // zf
  int v8; // esi
  int v9; // eax
  int v13; // [esp+8h] [ebp-20h] BYREF
  int v14; // [esp+Ch] [ebp-1Ch] BYREF
  int v15; // [esp+10h] [ebp-18h]
  int v16; // [esp+14h] [ebp-14h]
  int v17; // [esp+18h] [ebp-10h]
  _BYTE v18[12]; // [esp+1Ch] [ebp-Ch] BYREF

  int v2 = g_ControlGroupState; /*0x4f6d1f*/
  if ( *(_DWORD *)(a1 + 21612) == g_ControlGroupState ) /*0x4f6d2d*/
    int v3 = *(_DWORD *)(a1 + 21608); /*0x4f6d38*/
  else
    v3 = *(_DWORD *)(a1 + 21612); /*0x4f6d40*/
  v13 = v3; /*0x4f6d4d*/
  if ( v3 == g_ControlGroupState ) /*0x4f6d51*/
  {
    v4 = g_ControlGroupPool; /*0x4f6d60*/
    v16 = g_ControlGroupConfig; /*0x4f6d65*/
    v17 = g_ControlGroupLimit; /*0x4f6d6f*/
  }
  else
  {
    void * v5 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v13); /*0x4f6d7f*/
    int * v6 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v5 + 72))(v5, v18); /*0x4f6d90*/
    v4 = *v6; /*0x4f6d99*/
    v16 = v6[1]; /*0x4f6d9e*/
    v17 = v6[2]; /*0x4f6dab*/
    v2 = g_ControlGroupState; /*0x4f6dab*/
  }
  v7 = *(_WORD *)(a1 + 21612) == (unsigned __int16)v2; /*0x4f6dbb*/
  LOWORD(v13) = v4 / 256; /*0x4f6dc2*/
  if ( v7 && *(_WORD *)(a1 + 21614) == HIWORD(v2) ) /*0x4f6dd0*/
    v8 = *(_DWORD *)(a1 + 21608); /*0x4f6dd2*/
  else
    v8 = *(_DWORD *)(a1 + 21612); /*0x4f6dda*/
  v14 = v8; /*0x4f6de7*/
  if ( v8 == v2 ) /*0x4f6deb*/
  {
    v15 = g_ControlGroupPool; /*0x4f6dff*/
    v9 = g_ControlGroupConfig; /*0x4f6e03*/
  }
  else
  {
    void * v10 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v14); /*0x4f6e14*/
    int * v11 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v10 + 72))(v10, v18); /*0x4f6e25*/
    v15 = *v11; /*0x4f6e29*/
    v9 = v11[1]; /*0x4f6e2d*/
  }
  HIWORD(v13) = v9 / 256; /*0x4f6e44*/
  *a2 = v13; /*0x4f6e52*/
  return a2; /*0x4f6e3a*/
}
}
} // namespace gamemd

// 0x501400
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::SetCapacity_5(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v1 = g_SidebarState - 1; /*0x501409*/
  if ( g_SidebarState - 1 < 0 ) /*0x50140e*/
  {
    *(_BYTE *)(a1 + 549) = 1; /*0x501532*/
    return 0; /*0x50152f*/
  }
  else
  {
    do /*0x50150f*/
    {
      int * v2 = (int *)*((_DWORD *)g_TechnoClass_Count + v1); /*0x501423*/
      if ( a1 - 36 == v2[135] && *((_BYTE *)v2 + 116) && !*((_BYTE *)v2 + 129) ) /*0x50143d*/
      {
        if ( *((_BYTE *)v2 + 708) /*0x50146d*/
          && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(*v2 + 132))(*((_DWORD *)g_TechnoClass_Count + v1)) + 562)
          && !*(_BYTE *)(a1 + 456) )
        {
          int v3 = (*(int (__thiscall **)(int *))(*v2 + 132))(v2); /*0x50147b*/
          int v4 = *v2; /*0x501487*/
          int v7 = *(_DWORD *)(v3 + 160); /*0x501489*/
          (*(void (__thiscall **)(int *, int *, _DWORD, int, _DWORD, int, int, _DWORD))(v4 + 364))( /*0x5014aa*/
            v2,
            &v7,
            0,
            g_RulesClass_Instance->?[5],
            0,
            1,
            1,
            0);
        }
        else if ( v2 ) /*0x5014b4*/
        {
          if ( (v2[5] & 4) != 0 ) /*0x5014c3*/
          {
            int v5 = v2[373]; /*0x5014c5*/
            if ( v5 ) /*0x5014cd*/
              TeamClass::LiberateMember_Start(v5, (int)v2, 0xFFFFFFFF, 0); /*0x5014d4*/
            (*(void (__thiscall **)(int *, int, _DWORD))(*v2 + 488))(v2, 15, 0); /*0x5014e1*/
          }
          else if ( (*(int (__thiscall **)(int *))(*v2 + 44))(v2) == 6 /*0x501501*/
                 && (*(int (__thiscall **)(int *))(*v2 + 1032))(v2) > 0 )
          {
            BuildingClass::UnloadUnits(v2, 1, 0); /*0x501509*/
          }
        }
      }
      --v1; /*0x50150e*/
    }
    while ( v1 >= 0 ); /*0x50150f*/
    *(_BYTE *)(a1 + 549) = 1; /*0x50151c*/
    return 0; /*0x501523*/
  }
}
}
} // namespace gamemd

// 0x50F520
namespace gamemd {
AbstractClass * VectorClass_ptr_BuildChoiceClass_int_ouseClass::Release(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // eax

  if ( a2 ) /*0x50f52c*/
  {
    this->IsInitialized = 0; /*0x50f536*/
    if ( a3 ) /*0x50f53c*/
      _DWORD * v4 = a3; /*0x50f552*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x50f54e*/
    this->IsInitialized = 1; /*0x50f556*/
    if ( v4 ) /*0x50f55a*/
    {
      if ( this->Items ) /*0x50f565*/
      {
        int v6 = this->Capacity; /*0x50f56c*/
        if ( a2 < v6 ) /*0x50f571*/
          v6 = a2; /*0x50f573*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x50f579*/
          ++i; /*0x50f57e*/
        if ( this->IsAllocated ) /*0x50f58b*/
        {
          __3_YAXPAX_Z(this->Items); /*0x50f596*/
          this->Items = 0; /*0x50f59e*/
        }
      }
      this->Items = v4; /*0x50f5a7*/
      this->Capacity = a2; /*0x50f5af*/
      this->IsAllocated = a3 == 0; /*0x50f5b2*/
      return 1; /*0x50f5b8*/
    }
    else
    {
      return 0; /*0x50f55f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x50f5c2*/
    return 1; /*0x50f5c8*/
  }
}
}
} // namespace gamemd

// 0x50F660
namespace gamemd {
AbstractClass * VectorClass_ptr_BuildChoiceClass_int_ouseClass::SetCapacity_6(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // eax

  if ( a2 ) /*0x50f66c*/
  {
    this->IsInitialized = 0; /*0x50f672*/
    if ( a3 ) /*0x50f678*/
      _DWORD * v4 = a3; /*0x50f68e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x50f68a*/
    this->IsInitialized = 1; /*0x50f692*/
    if ( !v4 ) /*0x50f696*/
      return 0; /*0x50f70a*/
    if ( this->Items ) /*0x50f698*/
    {
      int v5 = this->Capacity; /*0x50f69f*/
      if ( a2 < v5 ) /*0x50f6a4*/
        v5 = a2; /*0x50f6a6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x50f6ac*/
        ++i; /*0x50f6b1*/
      if ( this->IsAllocated ) /*0x50f6be*/
      {
        __3_YAXPAX_Z(this->Items); /*0x50f6c9*/
        this->Items = 0; /*0x50f6d1*/
      }
    }
    this->Items = v4; /*0x50f6da*/
    this->Capacity = a2; /*0x50f6e2*/
    this->IsAllocated = a3 == 0; /*0x50f6e5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x50f6ee*/
  }
  int v7 = this->Capacity; /*0x50f6f1*/
  if ( v7 < this->Count ) /*0x50f6f9*/
    this->Count = v7; /*0x50f6fb*/
  return 1; /*0x50f6fe*/
}
}
} // namespace gamemd

// 0x6288F0
namespace gamemd {
AbstractClass * VectorClass_ptr_ColorScheme::SetCapacity_0(CCINIClass * aP1, unsigned char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  CCINIClass *v3; // edi
  AbstractClass *v6; // ebx
  AbstractClass *v7; // esi
  CCINIClass *v8; // ebx
  CCINIClass *v10; // eax
  AbstractClass *v12; // edi
  CCINIClass *v14; // [esp+10h] [ebp-8h]
  AbstractClass *v15; // [esp+10h] [ebp-8h]
  CCINIClass *v16; // [esp+14h] [ebp-4h]
  v3 = aP1; /*0x6288f7*/
  if ( aP1 ) /*0x6288ff*/
  {
    _BYTE * v5 = a2; /*0x628905*/
    this->IsInitialized = 0; /*0x628909*/
    if ( a2 ) /*0x62890f*/
    {
      if ( (int)&aP1[-1].unknown54 + 3 >= 0 ) /*0x628965*/
      {
        v8 = aP1; /*0x628967*/
        do /*0x628978*/
        {
          Byte::Zero(v5); /*0x62896c*/
          v5 += 260; /*0x628971*/
          v8 = (CCINIClass *)((char *)v8 - 1); /*0x628977*/
        }
        while ( v8 ); /*0x628978*/
      }
      v15 = (AbstractClass *)a2; /*0x62897e*/
    }
    else
    {
      v6 = (AbstractClass *)__2_YAPAXI_Z(260 * (_DWORD)aP1); /*0x628921*/
      if ( v6 ) /*0x628928*/
      {
        v7 = v6; /*0x62892d*/
        if ( (int)&aP1[-1].unknown54 + 3 >= 0 ) /*0x628931*/
        {
          v14 = aP1; /*0x628934*/
          do /*0x62894e*/
          {
            Byte::Zero(v7); /*0x62893a*/
            v7 = (AbstractClass *)((char *)v7 + 260); /*0x628943*/
            v14 = (CCINIClass *)((char *)v14 - 1); /*0x62894a*/
          }
          while ( v14 ); /*0x62894e*/
        }
        v15 = v6; /*0x628950*/
      }
      else
      {
        v15 = 0; /*0x628956*/
      }
    }
    this->IsInitialized = 1; /*0x628986*/
    if ( v15 ) /*0x62898c*/
    {
      if ( this->Items ) /*0x62899a*/
      {
        v10 = (CCINIClass *)this->Capacity; /*0x6289a1*/
        if ( (int)aP1 < (int)v10 ) /*0x6289a6*/
          v10 = aP1; /*0x6289a8*/
        if ( (int)v10 > 0 ) /*0x6289ac*/
        {
          int v11 = 0; /*0x6289ae*/
          v12 = v15; /*0x6289b0*/
          v16 = v10; /*0x6289b2*/
          do /*0x6289e4*/
          {
            int v13 = v11 + this->Items; /*0x6289bb*/
            String::CopyChecked(v12->__pad_0, (const char *)v13); /*0x6289be*/
            *(_DWORD *)&v12[7].__pad_0[4] = *(_DWORD *)(v13 + 256); /*0x6289cd*/
            v11 += 260; /*0x6289d3*/
            v12 = (AbstractClass *)((char *)v12 + 260); /*0x6289d9*/
            v16 = (CCINIClass *)((char *)v16 - 1); /*0x6289e0*/
          }
          while ( v16 ); /*0x6289e4*/
          v3 = aP1; /*0x6289e6*/
        }
        if ( this->IsAllocated ) /*0x6289ea*/
        {
          __3_YAXPAX_Z(this->Items); /*0x6289f5*/
          this->Items = 0; /*0x6289fd*/
        }
      }
      this->Items = v15; /*0x628a0a*/
      this->Capacity = v3; /*0x628a13*/
      this->IsAllocated = a2 == 0; /*0x628a1a*/
      return 1; /*0x628a1f*/
    }
    else
    {
      return 0; /*0x628991*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x628a2d*/
    return 1; /*0x628a33*/
  }
}
}
} // namespace gamemd

// 0x491210
namespace gamemd {
void * VectorClass_ptr_ConvertClass::Constructor_ConvertClass(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  void **v6; // [esp+4h] [ebp-4h] BYREF

  *this = &vt_ConvertClass; /*0x491214*/
  COMClass::RegisterAll(this); /*0x49121a*/
  __3_YAXPAX_Z(*(this + 92)); /*0x491226*/
  void * v3 = *(this + 94); /*0x49122b*/
  *(this + 92) = 0; /*0x491231*/
  __3_YAXPAX_Z(v3); /*0x49123c*/
  *(this + 94) = 0; /*0x491244*/
  v6 = this; /*0x49125d*/
  int v4 = (*(int (__thiscall **)(int *, void ***))(DataGlobal_89ECF8 + 16))(&DataGlobal_89ECF8, &v6); /*0x491261*/
  if ( v4 != -1 && v4 < DataGlobal_89ED08 && v4 < --DataGlobal_89ED08 ) /*0x49127c*/
  {
    do /*0x491294*/
    {
      ++v4; /*0x491284*/
      *((_DWORD *)DataGlobal_89ECFC + v4 - 1) = *((_DWORD *)DataGlobal_89ECFC + v4); /*0x491288*/
    }
    while ( v4 < DataGlobal_89ED08 ); /*0x491294*/
  }
  if ( (a2 & 1) != 0 ) /*0x49129b*/
    __3_YAXPAX_Z(this); /*0x49129e*/
  return (ConvertClass *)this; /*0x4912a8*/
}
}
} // namespace gamemd

// 0x4E1960
namespace gamemd {
void VectorClass_ptr_ConvertClass::MarkDirty()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  this->q01C = 1; /*0x4e1960*/
}
}
} // namespace gamemd

// 0x63E090
namespace gamemd {
AbstractClass * VectorClass_ptr_PlanningBranchClass::Release(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // eax

  if ( a2 ) /*0x63e09c*/
  {
    this->IsInitialized = 0; /*0x63e0a6*/
    if ( a3 ) /*0x63e0ac*/
      _DWORD * v4 = a3; /*0x63e0c2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x63e0be*/
    this->IsInitialized = 1; /*0x63e0c6*/
    if ( v4 ) /*0x63e0ca*/
    {
      if ( this->Items ) /*0x63e0d5*/
      {
        int v6 = this->Capacity; /*0x63e0dc*/
        if ( a2 < v6 ) /*0x63e0e1*/
          v6 = a2; /*0x63e0e3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x63e0e9*/
          ++i; /*0x63e0ee*/
        if ( this->IsAllocated ) /*0x63e0fb*/
        {
          __3_YAXPAX_Z(this->Items); /*0x63e106*/
          this->Items = 0; /*0x63e10e*/
        }
      }
      this->Items = v4; /*0x63e117*/
      this->Capacity = a2; /*0x63e11f*/
      this->IsAllocated = a3 == 0; /*0x63e122*/
      return 1; /*0x63e128*/
    }
    else
    {
      return 0; /*0x63e0cf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x63e132*/
    return 1; /*0x63e138*/
  }
}
}
} // namespace gamemd

// 0x76B8C0
namespace gamemd {
int VectorClass_rc_ptr_WDTTerritory::Release(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  _DWORD *v6; // esi
  _DWORD *v8; // ebx
  int i; // esi
  void (__thiscall ***v12)(_DWORD, int); // ecx
  int v3 = a2; /*0x76b8c3*/
  if ( !a2 ) /*0x76b8cd*/
  {
    (*(void (__thiscall **)(_BYTE *))(this->IsInitialized)(this); /*0x76b9cd*/
    return 1; /*0x76b9d3*/
  }
  this->IsInitialized = 0; /*0x76b8d7*/
  if ( a3 ) /*0x76b8dd*/
  {
    *a3 = a2; /*0x76b923*/
    v6 = a3 + 1; /*0x76b925*/
    if ( a2 - 1 >= 0 ) /*0x76b931*/
    {
      int v9 = a2; /*0x76b933*/
      do /*0x76b947*/
      {
        ComPtr::Constructor(v6); /*0x76b938*/
        *v6 = &vt_rc_ptr_WDTTerritory; /*0x76b93d*/
        v6 += 2; /*0x76b943*/
        --v9; /*0x76b946*/
      }
      while ( v9 ); /*0x76b947*/
      v6 = a3 + 1; /*0x76b949*/
    }
  }
  else
  {
    _DWORD * v5 = __2_YAPAXI_Z(8 * a2 + 4); /*0x76b8e7*/
    if ( !v5 ) /*0x76b8f1*/
    {
      v8 = 0; /*0x76b91f*/
      goto LABEL_14; /*0x76b921*/
    }
    *v5 = a2; /*0x76b8f3*/
    v6 = v5 + 1; /*0x76b8f5*/
    _DWORD * v13 = v5 + 1; /*0x76b8fb*/
    if ( a2 - 1 >= 0 ) /*0x76b901*/
    {
      int v7 = a2; /*0x76b903*/
      do /*0x76b917*/
      {
        ComPtr::Constructor(v6); /*0x76b908*/
        *v6 = &vt_rc_ptr_WDTTerritory; /*0x76b90d*/
        v6 += 2; /*0x76b913*/
        --v7; /*0x76b916*/
      }
      while ( v7 ); /*0x76b917*/
      v6 = v13; /*0x76b919*/
    }
  }
  v8 = v6; /*0x76b94d*/
LABEL_14:
  this->IsInitialized = 1; /*0x76b94f*/
  if ( !v8 ) /*0x76b955*/
    return 0; /*0x76b95a*/
  if ( this->Items ) /*0x76b961*/
  {
    if ( a2 >= this->Capacity ) /*0x76b96d*/
      v3 = this->Capacity; /*0x76b96f*/
    for ( i = 0; i < v3; ++i ) /*0x76b975*/
      ComPtr::Set(&v8[2 * i], *(_DWORD *)(this->Items + 8 * i + 4)); /*0x76b982*/
    if ( this->IsAllocated ) /*0x76b98c*/
    {
      v12 = (void (__thiscall ***)(_DWORD, int))this->Items; /*0x76b993*/
      if ( v12 ) /*0x76b998*/
        (**v12)(v12, 3); /*0x76b99e*/
      this->Items = 0; /*0x76b9a0*/
    }
    v3 = a2; /*0x76b9a7*/
  }
  this->Items = v8; /*0x76b9b6*/
  this->Capacity = v3; /*0x76b9b9*/
  this->IsAllocated = a3 == 0; /*0x76b9bc*/
  return 1; /*0x76b957*/
}
}
} // namespace gamemd

// 0x5D8470
namespace gamemd {
AbstractClass * VectorClass_Scenario::ResizeAndCopy(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // eax

  if ( a2 ) /*0x5d847c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5d8482*/
    if ( a3 ) /*0x5d8488*/
      _DWORD * v4 = a3; /*0x5d849e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5d849a*/
    *((_BYTE *)this + 12) = 1; /*0x5d84a2*/
    if ( !v4 ) /*0x5d84a6*/
      return 0; /*0x5d851a*/
    if ( *((_DWORD *)this + 1) ) /*0x5d84a8*/
    {
      int v5 = *((_DWORD *)this + 2); /*0x5d84af*/
      if ( a2 < v5 ) /*0x5d84b4*/
        v5 = a2; /*0x5d84b6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i - 4) ) /*0x5d84bc*/
        ++i; /*0x5d84c1*/
      if ( *((_BYTE *)this + 13) ) /*0x5d84ce*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5d84d9*/
        *((_DWORD *)this + 1) = 0; /*0x5d84e1*/
      }
    }
    *((_DWORD *)this + 1) = v4; /*0x5d84ea*/
    *((_DWORD *)this + 2) = a2; /*0x5d84f2*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x5d84f5*/
  }
  else
  {
    this->vt_slot_12(); /*0x5d84fe*/
  }
  int v7 = *((_DWORD *)this + 2); /*0x5d8501*/
  if ( v7 < *((_DWORD *)this + 4) ) /*0x5d8509*/
    *((_DWORD *)this + 4) = v7; /*0x5d850b*/
  return 1; /*0x5d850e*/
}
}
} // namespace gamemd

// 0x5D8730
namespace gamemd {
AbstractClass * VectorClass_Scenario2::ResizeAndCopy(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // eax

  if ( a2 ) /*0x5d873c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5d8742*/
    if ( a3 ) /*0x5d8748*/
      _DWORD * v4 = a3; /*0x5d875e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5d875a*/
    *((_BYTE *)this + 12) = 1; /*0x5d8762*/
    if ( !v4 ) /*0x5d8766*/
      return 0; /*0x5d87da*/
    if ( *((_DWORD *)this + 1) ) /*0x5d8768*/
    {
      int v5 = *((_DWORD *)this + 2); /*0x5d876f*/
      if ( a2 < v5 ) /*0x5d8774*/
        v5 = a2; /*0x5d8776*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i - 4) ) /*0x5d877c*/
        ++i; /*0x5d8781*/
      if ( *((_BYTE *)this + 13) ) /*0x5d878e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5d8799*/
        *((_DWORD *)this + 1) = 0; /*0x5d87a1*/
      }
    }
    *((_DWORD *)this + 1) = v4; /*0x5d87aa*/
    *((_DWORD *)this + 2) = a2; /*0x5d87b2*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x5d87b5*/
  }
  else
  {
    this->vt_slot_12(); /*0x5d87be*/
  }
  int v7 = *((_DWORD *)this + 2); /*0x5d87c1*/
  if ( v7 < *((_DWORD *)this + 4) ) /*0x5d87c9*/
    *((_DWORD *)this + 4) = v7; /*0x5d87cb*/
  return 1; /*0x5d87ce*/
}
}
} // namespace gamemd

// 0x5D8590
namespace gamemd {
AbstractClass * VectorClass_Scenario3::ResizeAndCopy(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // eax

  if ( a2 ) /*0x5d859c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5d85a6*/
    if ( a3 ) /*0x5d85ac*/
      _DWORD * v4 = a3; /*0x5d85c2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5d85be*/
    *((_BYTE *)this + 12) = 1; /*0x5d85c6*/
    if ( v4 ) /*0x5d85ca*/
    {
      if ( *((_DWORD *)this + 1) ) /*0x5d85d5*/
      {
        int v6 = *((_DWORD *)this + 2); /*0x5d85dc*/
        if ( a2 < v6 ) /*0x5d85e1*/
          v6 = a2; /*0x5d85e3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i - 4) ) /*0x5d85e9*/
          ++i; /*0x5d85ee*/
        if ( *((_BYTE *)this + 13) ) /*0x5d85fb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5d8606*/
          *((_DWORD *)this + 1) = 0; /*0x5d860e*/
        }
      }
      *((_DWORD *)this + 1) = v4; /*0x5d8617*/
      *((_DWORD *)this + 2) = a2; /*0x5d861f*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x5d8622*/
      return 1; /*0x5d8628*/
    }
    else
    {
      return 0; /*0x5d85cf*/
    }
  }
  else
  {
    this->vt_slot_12(); /*0x5d8632*/
    return 1; /*0x5d8638*/
  }
}
}
} // namespace gamemd

// 0x4E9840
namespace gamemd {
AbstractClass * VectorClass_SuperPtr::ResizeAndCopy(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // eax

  if ( a2 ) /*0x4e984c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x4e9852*/
    if ( a3 ) /*0x4e9858*/
      _DWORD * v4 = a3; /*0x4e986e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4e986a*/
    *((_BYTE *)this + 12) = 1; /*0x4e9872*/
    if ( !v4 ) /*0x4e9876*/
      return 0; /*0x4e98ea*/
    if ( *((_DWORD *)this + 1) ) /*0x4e9878*/
    {
      int v5 = *((_DWORD *)this + 2); /*0x4e987f*/
      if ( a2 < v5 ) /*0x4e9884*/
        v5 = a2; /*0x4e9886*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i - 4) ) /*0x4e988c*/
        ++i; /*0x4e9891*/
      if ( *((_BYTE *)this + 13) ) /*0x4e989e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4e98a9*/
        *((_DWORD *)this + 1) = 0; /*0x4e98b1*/
      }
    }
    *((_DWORD *)this + 1) = v4; /*0x4e98ba*/
    *((_DWORD *)this + 2) = a2; /*0x4e98c2*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x4e98c5*/
  }
  else
  {
    this->vt_slot_12(); /*0x4e98ce*/
  }
  int v7 = *((_DWORD *)this + 2); /*0x4e98d1*/
  if ( v7 < *((_DWORD *)this + 4) ) /*0x4e98d9*/
    *((_DWORD *)this + 4) = v7; /*0x4e98db*/
  return 1; /*0x4e98de*/
}
}
} // namespace gamemd

// 0x6DC850
namespace gamemd {
AbstractClass * VectorClass_UDirtyAreaStruct::SetCapacity(CCINIClass * aP1, char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  CCINIClass *v3; // edi
  CCINIClass *v6; // ebx
  char *v7; // ebx
  CCINIClass *v8; // ebx
  CCINIClass *v9; // edx
  int v13; // eax
  char *v15; // [esp+10h] [ebp-4h]
  v3 = aP1; /*0x6dc855*/
  if ( !aP1 ) /*0x6dc85d*/
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6dc94a*/
    goto LABEL_26; /*0x6dc94a*/
  }
  char * v5 = a2; /*0x6dc863*/
  this->IsInitialized = 0; /*0x6dc867*/
  if ( a2 ) /*0x6dc86d*/
  {
    if ( (int)&aP1[-1].unknown54 + 3 >= 0 ) /*0x6dc8ba*/
    {
      v8 = aP1; /*0x6dc8bc*/
      do /*0x6dc8d6*/
      {
        Rect::Set(v5, 0, 0, 0, 0); /*0x6dc8c9*/
        v5[16] = 0; /*0x6dc8ce*/
        v5 += 20; /*0x6dc8d2*/
        v8 = (CCINIClass *)((char *)v8 - 1); /*0x6dc8d5*/
      }
      while ( v8 ); /*0x6dc8d6*/
      v5 = a2; /*0x6dc8d8*/
    }
    goto LABEL_13; /*0x6dc8d8*/
  }
  v5 = (char *)__2_YAPAXI_Z(20 * (_DWORD)aP1); /*0x6dc87b*/
  v15 = v5; /*0x6dc882*/
  if ( v5 ) /*0x6dc886*/
  {
    if ( (int)&aP1[-1].unknown54 + 3 >= 0 ) /*0x6dc88d*/
    {
      v6 = aP1; /*0x6dc88f*/
      do /*0x6dc8a9*/
      {
        Rect::Set(v5, 0, 0, 0, 0); /*0x6dc89c*/
        v5[16] = 0; /*0x6dc8a1*/
        v5 += 20; /*0x6dc8a5*/
        v6 = (CCINIClass *)((char *)v6 - 1); /*0x6dc8a8*/
      }
      while ( v6 ); /*0x6dc8a9*/
      v5 = v15; /*0x6dc8ab*/
    }
LABEL_13:
    v7 = v5; /*0x6dc8dc*/
    goto LABEL_14; /*0x6dc8dc*/
  }
  v7 = 0; /*0x6dc8b1*/
LABEL_14:
  this->IsInitialized = 1; /*0x6dc8de*/
  if ( !v7 ) /*0x6dc8e4*/
    return 0; /*0x6dc967*/
  if ( this->Items ) /*0x6dc8e6*/
  {
    v9 = (CCINIClass *)this->Capacity; /*0x6dc8ed*/
    if ( (int)aP1 < (int)v9 ) /*0x6dc8f2*/
      v9 = aP1; /*0x6dc8f4*/
    if ( (int)v9 > 0 ) /*0x6dc8f8*/
    {
      int v10 = 0; /*0x6dc8fa*/
      do /*0x6dc90f*/
      {
        char * v11 = &v7[v10]; /*0x6dc8ff*/
        const void * v12 = (const void *)(v10 + this->Items); /*0x6dc902*/
        v10 += 20; /*0x6dc909*/
        v9 = (CCINIClass *)((char *)v9 - 1); /*0x6dc90c*/
        qmemcpy(v11, v12, 0x14u); /*0x6dc90d*/
      }
      while ( v9 ); /*0x6dc90f*/
      v3 = aP1; /*0x6dc911*/
    }
    if ( this->IsAllocated ) /*0x6dc915*/
    {
      __3_YAXPAX_Z(this->Items); /*0x6dc920*/
      this->Items = 0; /*0x6dc928*/
    }
  }
  this->Items = v7; /*0x6dc93a*/
  this->Capacity = v3; /*0x6dc93d*/
  this->IsAllocated = a2 == 0; /*0x6dc940*/
LABEL_26:
  v13 = this->Capacity; /*0x6dc94d*/
  if ( v13 < this->Count ) /*0x6dc955*/
    this->Count = v13; /*0x6dc957*/
  return 1; /*0x6dc95a*/
}
}
} // namespace gamemd

// 0x6B44A0
namespace gamemd {
AbstractClass * VectorClass_UUndoInfoStruct::Release(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  _DWORD *v8; // edi
  int v3 = a2; /*0x6b44a2*/
  if ( !a2 ) /*0x6b44ae*/
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6b4591*/
    return 1; /*0x6b4597*/
  }
  _DWORD * v5 = a3; /*0x6b44b4*/
  this->IsInitialized = 0; /*0x6b44b8*/
  if ( a3 ) /*0x6b44bd*/
  {
    if ( a2 - 1 >= 0 ) /*0x6b44f8*/
    {
      int v9 = a2; /*0x6b44fe*/
      do /*0x6b450b*/
      {
        *v5 = 0; /*0x6b44ff*/
        v5[1] = 0; /*0x6b4501*/
        v5[2] = 0; /*0x6b4504*/
        v5 += 3; /*0x6b4507*/
        --v9; /*0x6b450a*/
      }
      while ( v9 ); /*0x6b450b*/
      v5 = a3; /*0x6b450d*/
    }
  }
  else
  {
    v5 = __2_YAPAXI_Z(12 * a2); /*0x6b44c7*/
    if ( !v5 ) /*0x6b44d1*/
    {
      v8 = 0; /*0x6b44ef*/
      goto LABEL_14; /*0x6b44f1*/
    }
    _DWORD * v6 = v5; /*0x6b44d6*/
    if ( a2 - 1 >= 0 ) /*0x6b44da*/
    {
      int v7 = a2; /*0x6b44de*/
      do /*0x6b44eb*/
      {
        *v6 = 0; /*0x6b44df*/
        v6[1] = 0; /*0x6b44e1*/
        v6[2] = 0; /*0x6b44e4*/
        v6 += 3; /*0x6b44e7*/
        --v7; /*0x6b44ea*/
      }
      while ( v7 ); /*0x6b44eb*/
    }
  }
  v8 = v5; /*0x6b4511*/
LABEL_14:
  this->IsInitialized = 1; /*0x6b4513*/
  if ( !v8 ) /*0x6b4519*/
    return 0; /*0x6b451e*/
  if ( this->Items ) /*0x6b4524*/
  {
    int v11 = this->Capacity; /*0x6b4529*/
    if ( a2 < v11 ) /*0x6b452e*/
      v11 = a2; /*0x6b4530*/
    if ( v11 > 0 ) /*0x6b4534*/
    {
      int v12 = 0; /*0x6b4536*/
      do /*0x6b4554*/
      {
        _DWORD * v13 = &v8[v12]; /*0x6b453b*/
        _DWORD * v14 = (_DWORD *)(v12 * 4 + this->Items); /*0x6b453e*/
        v12 += 3; /*0x6b4540*/
        --v11; /*0x6b4543*/
        *v13 = *v14; /*0x6b4546*/
        v13[1] = v14[1]; /*0x6b454b*/
        v13[2] = v14[2]; /*0x6b4551*/
      }
      while ( v11 ); /*0x6b4554*/
      v3 = a2; /*0x6b4556*/
    }
    if ( this->IsAllocated ) /*0x6b455c*/
    {
      __3_YAXPAX_Z(this->Items); /*0x6b4565*/
      this->Items = 0; /*0x6b456d*/
    }
  }
  this->Items = v8; /*0x6b4578*/
  this->Capacity = v3; /*0x6b457e*/
  this->IsAllocated = a3 == 0; /*0x6b4581*/
  return 1; /*0x6b451b*/
}
}
} // namespace gamemd

// 0x6B4650
namespace gamemd {
AbstractClass * VectorClass_UUndoInfoStruct::SetCapacity(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  _DWORD *v8; // edi
  AbstractClass *v10; // ecx
  AbstractClass *v14; // eax
  int v3 = a2; /*0x6b4652*/
  if ( !a2 ) /*0x6b465e*/
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6b4731*/
    goto LABEL_26; /*0x6b4731*/
  }
  _DWORD * v5 = a3; /*0x6b4664*/
  this->IsInitialized = 0; /*0x6b4668*/
  if ( a3 ) /*0x6b466d*/
  {
    if ( a2 - 1 >= 0 ) /*0x6b46a8*/
    {
      int v9 = a2; /*0x6b46ae*/
      do /*0x6b46bb*/
      {
        *v5 = 0; /*0x6b46af*/
        v5[1] = 0; /*0x6b46b1*/
        v5[2] = 0; /*0x6b46b4*/
        v5 += 3; /*0x6b46b7*/
        --v9; /*0x6b46ba*/
      }
      while ( v9 ); /*0x6b46bb*/
      v5 = a3; /*0x6b46bd*/
    }
    goto LABEL_13; /*0x6b46bd*/
  }
  v5 = __2_YAPAXI_Z(12 * a2); /*0x6b4677*/
  if ( v5 ) /*0x6b4681*/
  {
    _DWORD * v6 = v5; /*0x6b4686*/
    if ( a2 - 1 >= 0 ) /*0x6b468a*/
    {
      int v7 = a2; /*0x6b468e*/
      do /*0x6b469b*/
      {
        *v6 = 0; /*0x6b468f*/
        v6[1] = 0; /*0x6b4691*/
        v6[2] = 0; /*0x6b4694*/
        v6 += 3; /*0x6b4697*/
        --v7; /*0x6b469a*/
      }
      while ( v7 ); /*0x6b469b*/
    }
LABEL_13:
    v8 = v5; /*0x6b46c1*/
    goto LABEL_14; /*0x6b46c1*/
  }
  v8 = 0; /*0x6b469f*/
LABEL_14:
  this->IsInitialized = 1; /*0x6b46c3*/
  if ( !v8 ) /*0x6b46c9*/
    return 0; /*0x6b474d*/
  if ( this->Items ) /*0x6b46cb*/
  {
    v10 = this->Capacity; /*0x6b46d0*/
    if ( a2 < v10 ) /*0x6b46d5*/
      v10 = a2; /*0x6b46d7*/
    if ( v10 > 0 ) /*0x6b46db*/
    {
      int v11 = 0; /*0x6b46dd*/
      do /*0x6b46fb*/
      {
        _DWORD * v12 = &v8[v11]; /*0x6b46e2*/
        _DWORD * v13 = (_DWORD *)(v11 * 4 + this->Items); /*0x6b46e5*/
        v11 += 3; /*0x6b46e7*/
        --v10; /*0x6b46ea*/
        *v12 = *v13; /*0x6b46ed*/
        v12[1] = v13[1]; /*0x6b46f2*/
        v12[2] = v13[2]; /*0x6b46f8*/
      }
      while ( v10 ); /*0x6b46fb*/
      v3 = a2; /*0x6b46fd*/
    }
    if ( this->IsAllocated ) /*0x6b4703*/
    {
      __3_YAXPAX_Z(this->Items); /*0x6b470c*/
      this->Items = 0; /*0x6b4714*/
    }
  }
  this->Items = v8; /*0x6b471f*/
  this->Capacity = v3; /*0x6b4725*/
  this->IsAllocated = a3 == 0; /*0x6b4728*/
LABEL_26:
  v14 = this->Capacity; /*0x6b4734*/
  if ( v14 < this->Count ) /*0x6b473c*/
    this->Count = v14; /*0x6b473e*/
  return 1; /*0x6b4741*/
}
}
} // namespace gamemd

// 0x40B120
int VectorClass::Clear(int a2, int a3)
{
{
    int v3;
    int v4;
    int v5;
    v3 = this->Items;
    v4 = *(int *)(v3 + 8 * a3);
    v5 = v3 + 8 * a3;
    *(int *)a2 = v4;
    *(char *)(a2 + 4) = *(char *)(v5 + 4);
    return a2;
}
}

// 0x40B140
char VectorClass::AddRef(int a2)
{
VectorClass* other = (VectorClass *)a2;
int capacity = this->Capacity;
if ( capacity == other->Capacity )
{
    int i = 0;
    if ( capacity <= 0 )
        return 1;
    unsigned int* myItems = (unsigned int *)this->Items;
    unsigned int* otherItems = (unsigned int *)other->Items;
    while ( myItems[2 * i] == otherItems[2 * i] )
    {
        ++i;
        if ( i >= capacity )
            return 1;
    }
}
return 0;
}

// 0x40B180
char VectorClass::Release(int a2, char * a3)
{
int newCapacity = a2;
if ( a2 )
{
    char* buffer = a3;
    this->IsInitialized = 0;
    if ( a3 )
    {
        char* zeroPtr = a3;
        if ( a2 - 1 >= 0 )
        {
            int count = a2;
            do
            {
                *(unsigned int *)zeroPtr = 0;
                zeroPtr[4] = 0;
                zeroPtr += 8;
                --count;
            }
            while ( count );
        }
    }
    else
    {
        char* newMem = (char *)operator new(8 * a2);
        if ( newMem )
        {
            char* zeroPtr2 = newMem;
            if ( a2 - 1 >= 0 )
            {
                int count2 = a2;
                do
                {
                    *(unsigned int *)zeroPtr2 = 0;
                    zeroPtr2[4] = 0;
                    zeroPtr2 += 8;
                    --count2;
                }
                while ( count2 );
            }
            buffer = newMem;
        }
        else
        {
            buffer = 0;
        }
    }
    this->IsInitialized = 1;
    if ( buffer )
    {
        if ( this->Items )
        {
            int copyCount = this->Capacity;
            if ( a2 < copyCount )
                copyCount = a2;
            int i = 0;
            if ( copyCount > 0 )
            {
                do
                {
                    unsigned int* src = (unsigned int *)&this->Items[i];
                    *(unsigned int *)&buffer[8 * i] = src[0];
                    *(unsigned int *)&buffer[8 * i + 4] = src[1];
                    ++i;
                }
                while ( i < copyCount );
                newCapacity = a2;
            }
            if ( this->IsAllocated )
            {
                operator delete(this->Items);
                this->Items = 0;
            }
        }
        this->Items = (decltype(this->Items))buffer;
        this->Capacity = newCapacity;
        this->IsAllocated = (a3 == 0);
        return 1;
    }
    else
    {
        return 0;
    }
}
else
{
    this->Clear();
    return 1;
}
}

// 0x40B270
void VectorClass::Cleanup5()
{
if ( this->Items && this->IsAllocated )
{
    operator delete(this->Items);
    this->Items = 0;
}
this->IsAllocated = 0;
this->Capacity = 0;
}

// 0x40B2A0
int VectorClass::GetSize(unsigned int * a2)
{
if ( !this->IsInitialized )
    return 0;
unsigned int* i = (unsigned int *)this->Items;
int capacity = this->Capacity;
int result = 0;
if ( capacity <= 0 )
    return -1;
while ( *i != *a2 )
{
    ++result;
    i += 2;
    if ( result >= capacity )
        return -1;
}
return result;
}

// 0x40B2E0
unsigned int VectorClass::GetCapacity(int a2)
{
if ( this->IsInitialized )
    return (unsigned int)((char *)a2 - (char *)this->Items) >> 3;
else
    return 0;
}

// 0x40B300
VectorClass * VectorClass::QueryInterface(unsigned int * Block, char a2)
{
    void* v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_SubzoneConnectionStruct;
    char* blockBytes = (char*)Block;
    if ( v3 && blockBytes[13] )
    {
        __3_YAXPAX_Z(v3);
        *(Block + 1) = 0;
    }
    blockBytes[13] = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
        __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}

// 0x40B690
namespace gamemd {
int VectorClass_ptr_BombClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x40B700
namespace gamemd {
char VectorClass_ptr_BombClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x40B7F0
namespace gamemd {
void VectorClass_ptr_BombClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x40B820
namespace gamemd {
int VectorClass_ptr_BombClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x40B860
namespace gamemd {
unsigned int VectorClass_ptr_BombClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x40BA50
namespace gamemd {
void VectorClass_Techno::ddtor()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x40BA80
namespace gamemd {
int VectorClass_Techno::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x40BAC0
namespace gamemd {
unsigned int VectorClass_Techno::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x40BBC0
namespace gamemd {
VectorClass * VectorClass_ptr_BombClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_BombClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x40BC60
namespace gamemd {
VectorClass * VectorClass_BombClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_TechnoClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x40BEA0
namespace gamemd {
int VectorClass_cptr_CommandClass::Capacity(int a2)
{
return this->Items[a2];
}
} // namespace gamemd

// 0x40BEB0
namespace gamemd {
char VectorClass_cptr_CommandClass::GetAt(int a2)
{
VectorClass_cptr_CommandClass* other = (VectorClass_cptr_CommandClass *)a2;
int capacity = this->Capacity;
if ( capacity == other->Capacity )
{
    int i = 0;
    if ( capacity <= 0 )
        return 1;
    unsigned int* myItems = (unsigned int *)this->Items;
    unsigned int* otherItems = (unsigned int *)other->Items;
    while ( myItems[i] == otherItems[i] )
    {
        ++i;
        if ( i >= capacity )
            return 1;
    }
}
return 0;
}
} // namespace gamemd

// 0x40BEF0
namespace gamemd {
char VectorClass_cptr_CommandClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->SetAt();
    return 1;
  }
}
}
} // namespace gamemd

// 0x40BFA0
namespace gamemd {
void VectorClass_cptr_CommandClass::SetAt()
{
if ( this->Items && this->IsAllocated )
{
    operator delete(this->Items);
    this->Items = 0;
}
this->IsAllocated = 0;
this->Capacity = 0;
}
} // namespace gamemd

// 0x40BFD0
namespace gamemd {
int VectorClass_cptr_CommandClass::GetSize(unsigned int * a2)
{
if ( !this->IsInitialized )
    return 0;
unsigned int* i = (unsigned int *)this->Items;
int capacity = this->Capacity;
int result = 0;
if ( capacity <= 0 )
    return -1;
while ( *i != *a2 )
{
    ++result;
    ++i;
    if ( result >= capacity )
        return -1;
}
return result;
}
} // namespace gamemd

// 0x40C010
namespace gamemd {
unsigned int VectorClass_cptr_CommandClass::GetCapacity(int a2)
{
if ( this->IsInitialized )
    return (unsigned int)((char *)a2 - (char *)this->Items) >> 2;
else
    return 0;
}
} // namespace gamemd

// 0x40C230
namespace gamemd {
void VectorClass_ptr_LightConvertClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x40C280
namespace gamemd {
int VectorClass_ptr_LightConvertClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x40C290
namespace gamemd {
char VectorClass_ptr_LightConvertClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x40C2D0
namespace gamemd {
char VectorClass_ptr_LightConvertClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x40C380
namespace gamemd {
void VectorClass_ptr_LightConvertClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x40C3B0
namespace gamemd {
int VectorClass_ptr_LightConvertClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x40C3F0
namespace gamemd {
unsigned int VectorClass_ptr_LightConvertClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x40C4C0
namespace gamemd {
int VectorClass_ptr_LightConvertClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x40C4F0
namespace gamemd {
VectorClass * VectorClass_ptr_LightConvertClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_LightConvertClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x40C540
namespace gamemd {
DynamicVector * VectorClass_ptr_LightConvertClass::Constructor_VectorClass_LightConvertClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_LightConvertClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x40C820
namespace gamemd {
void VectorClass_ptr_IsometricTileClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x40C850
namespace gamemd {
unsigned int VectorClass_ptr_IsometricTileClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x40C870
namespace gamemd {
int VectorClass_ptr_IsometricTileClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x40C880
namespace gamemd {
char VectorClass_ptr_IsometricTileClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x40C8C0
namespace gamemd {
char VectorClass_ptr_IsometricTileClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x40C970
namespace gamemd {
void VectorClass_ptr_IsometricTileClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x40C9A0
namespace gamemd {
int VectorClass_ptr_IsometricTileClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x40C9E0
namespace gamemd {
unsigned int VectorClass_ptr_IsometricTileClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x40CA00
namespace gamemd {
char VectorClass_ptr_IsometricTileClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x40CAB0
namespace gamemd {
int VectorClass_ptr_IsometricTileClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x40CAE0
namespace gamemd {
VectorClass * VectorClass_ptr_IsometricTileClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_IsometricTileClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x40CB30
namespace gamemd {
DynamicVector * VectorClass_ptr_IsometricTileClass::Constructor_VectorClass_IsometricTileClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_IsometricTileClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x40CC00
namespace gamemd {
int VectorClass_ptr_IsometricTileClass::GetItem()
{
{
    return this->Destroy();
}
}
} // namespace gamemd

// 0x40CC20
namespace gamemd {
LogicClass * VectorClass_ptr_IsometricTileClass::Constructor_VectorClass_ObjectClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_ObjectClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (LogicClass *)this;
}
}
} // namespace gamemd

// 0x40CC70
namespace gamemd {
void VectorClass_ptr_IsometricTileClass::TryFreeAndClear()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x40CCA0
namespace gamemd {
unsigned int VectorClass_ptr_IsometricTileClass::GetPtrOffset(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x40CCC0
int VectorClass::GetAt(int a2)
{
return this->Items[a2];
}

// 0x40CF00
namespace gamemd {
int VectorClass_ptr_IsometricTileClass::FindValue(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x40D590
namespace gamemd {
int VectorClass_ptr_MixFileClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x40D5A0
namespace gamemd {
char VectorClass_ptr_MixFileClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x40D5E0
namespace gamemd {
char VectorClass_ptr_MixFileClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x40D690
namespace gamemd {
void VectorClass_ptr_MixFileClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x40D6C0
namespace gamemd {
int VectorClass_ptr_MixFileClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x40D700
namespace gamemd {
unsigned int VectorClass_ptr_MixFileClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x40D800
namespace gamemd {
VectorClass * VectorClass_ptr_MixFileClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_MixFileClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x40E7F0
namespace gamemd {
void VectorClass_ptr_ScriptClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x40E820
namespace gamemd {
unsigned int VectorClass_ptr_ScriptClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x40E840
namespace gamemd {
int VectorClass_ptr_ScriptClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x40E850
namespace gamemd {
char VectorClass_ptr_ScriptClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x40E890
namespace gamemd {
char VectorClass_ptr_ScriptClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x40E940
namespace gamemd {
void VectorClass_ptr_ScriptClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x40E970
namespace gamemd {
int VectorClass_ptr_ScriptClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x40E9B0
namespace gamemd {
unsigned int VectorClass_ptr_ScriptClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x40E9D0
namespace gamemd {
char VectorClass_ptr_ScriptClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x40EA80
namespace gamemd {
int VectorClass_ptr_ScriptClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x40EAB0
namespace gamemd {
VectorClass * VectorClass_ptr_ScriptClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_ScriptClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x40EB00
namespace gamemd {
DynamicVector * VectorClass_ptr_ScriptClass::Constructor_VectorClass_ScriptClass___(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_ScriptClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x40EEC0
namespace gamemd {
void VectorClass_ptr_VoxelAnimClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x40EEF0
namespace gamemd {
unsigned int VectorClass_ptr_VoxelAnimClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x40EF10
namespace gamemd {
int VectorClass_ptr_VoxelAnimClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x40EF20
namespace gamemd {
char VectorClass_ptr_VoxelAnimClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x40EF60
namespace gamemd {
char VectorClass_ptr_VoxelAnimClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x40F010
namespace gamemd {
void VectorClass_ptr_VoxelAnimClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x40F040
namespace gamemd {
int VectorClass_ptr_VoxelAnimClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x40F080
namespace gamemd {
unsigned int VectorClass_ptr_VoxelAnimClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x40F0A0
namespace gamemd {
char VectorClass_ptr_VoxelAnimClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x40F150
namespace gamemd {
int VectorClass_ptr_VoxelAnimClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x40F180
namespace gamemd {
VectorClass * VectorClass_ptr_VoxelAnimClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_VoxelAnimClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x40F1D0
namespace gamemd {
DynamicVector * VectorClass_ptr_VoxelAnimClass::Constructor_VectorClass_VoxelAnimClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_VoxelAnimClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x40F5E0
namespace gamemd {
void VectorClass_ptr_WarheadTypeClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x40F610
namespace gamemd {
unsigned int VectorClass_ptr_WarheadTypeClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x40F630
namespace gamemd {
int VectorClass_ptr_WarheadTypeClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x40F640
namespace gamemd {
char VectorClass_ptr_WarheadTypeClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x40F680
namespace gamemd {
char VectorClass_ptr_WarheadTypeClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x40F730
namespace gamemd {
void VectorClass_ptr_WarheadTypeClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x40F760
namespace gamemd {
int VectorClass_ptr_WarheadTypeClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x40F7A0
namespace gamemd {
unsigned int VectorClass_ptr_WarheadTypeClass::LoadTypeData(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x40F7C0
namespace gamemd {
char VectorClass_ptr_WarheadTypeClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x40F870
namespace gamemd {
int VectorClass_ptr_WarheadTypeClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x40F8A0
namespace gamemd {
VectorClass * VectorClass_ptr_WarheadTypeClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_WarheadTypeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x40F8F0
namespace gamemd {
DynamicVector * VectorClass_ptr_WarheadTypeClass::Constructor_VectorClass_WarheadTypeClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_WarheadTypeClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x40FBB0
namespace gamemd {
void VectorClass_ptr_WeaponTypeClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x40FBE0
namespace gamemd {
unsigned int VectorClass_ptr_WeaponTypeClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x40FC00
namespace gamemd {
int VectorClass_ptr_WeaponTypeClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x40FC10
namespace gamemd {
char VectorClass_ptr_WeaponTypeClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x40FC50
namespace gamemd {
char VectorClass_ptr_WeaponTypeClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x40FD00
namespace gamemd {
void VectorClass_ptr_WeaponTypeClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x40FD30
namespace gamemd {
int VectorClass_ptr_WeaponTypeClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x40FD70
namespace gamemd {
unsigned int VectorClass_ptr_WeaponTypeClass::LoadTypeData(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x40FD90
namespace gamemd {
char VectorClass_ptr_WeaponTypeClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x40FE40
namespace gamemd {
int VectorClass_ptr_WeaponTypeClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x40FE70
namespace gamemd {
VectorClass * VectorClass_ptr_WeaponTypeClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_WeaponTypeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x40FEC0
namespace gamemd {
DynamicVector * VectorClass_ptr_WeaponTypeClass::Constructor_VectorClass_WeaponTypeClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_WeaponTypeClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x41DDE0
namespace gamemd {
void VectorClass_ptr_AirstrikeClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x41DE10
namespace gamemd {
unsigned int VectorClass_ptr_AirstrikeClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x41DE30
namespace gamemd {
int VectorClass_ptr_AirstrikeClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x41DE40
namespace gamemd {
char VectorClass_ptr_AirstrikeClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x41DE80
namespace gamemd {
char VectorClass_ptr_AirstrikeClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x41DF30
namespace gamemd {
void VectorClass_ptr_AirstrikeClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x41DF60
namespace gamemd {
int VectorClass_ptr_AirstrikeClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x41DFA0
namespace gamemd {
unsigned int VectorClass_ptr_AirstrikeClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x41DFC0
namespace gamemd {
char VectorClass_ptr_AirstrikeClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x41E070
namespace gamemd {
int VectorClass_ptr_AirstrikeClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x41E0A0
namespace gamemd {
VectorClass * VectorClass_ptr_AirstrikeClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_AirstrikeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x41E0F0
namespace gamemd {
DynamicVector * VectorClass_ptr_AirstrikeClass::Constructor_VectorClass_AirstrikeClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_AirstrikeClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x421800
namespace gamemd {
void VectorClass_ptr_AlphaShapeClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x421830
namespace gamemd {
unsigned int VectorClass_ptr_AlphaShapeClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x421850
namespace gamemd {
int VectorClass_ptr_AlphaShapeClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x421860
namespace gamemd {
char VectorClass_ptr_AlphaShapeClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4218A0
namespace gamemd {
char VectorClass_ptr_AlphaShapeClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->FindItemIndex();
    return 1;
  }
}
}
} // namespace gamemd

// 0x421950
namespace gamemd {
void VectorClass_ptr_AlphaShapeClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x421980
namespace gamemd {
int VectorClass_ptr_AlphaShapeClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4219C0
namespace gamemd {
unsigned int VectorClass_ptr_AlphaShapeClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4219E0
namespace gamemd {
char VectorClass_ptr_AlphaShapeClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->FindItemIndex();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x421A90
namespace gamemd {
int VectorClass_ptr_AlphaShapeClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x421AC0
namespace gamemd {
VectorClass * VectorClass_ptr_AlphaShapeClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_AlphaShapeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x421B10
namespace gamemd {
unsigned int * VectorClass_ptr_AlphaShapeClass::loc_421B10(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_AlphaShapeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}
}
} // namespace gamemd

// 0x42D5A0
namespace gamemd {
void VectorClass_ushort::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x42D5D0
namespace gamemd {
unsigned int VectorClass_ushort::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 1;
    else
    return 0;
}
}
} // namespace gamemd

// 0x42D5F0
namespace gamemd {
short VectorClass_ushort::Clear(int a2)
{
{
    return *(short*)(this->Items + 2 * a2);
}
}
} // namespace gamemd

// 0x42D8B0
namespace gamemd {
char VectorClass_ushort::AddRef(int a2)
{
{
    int v2;
    int v3;
    _WORD *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (short*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(short*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x42D8F0
namespace gamemd {
char VectorClass_ushort::Remove(int a2, unsigned short * a3)
{
{
    _WORD *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(2 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(short*)(this->Items + 2 * i - 2) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x42D9A0
namespace gamemd {
void VectorClass_ushort::ddtor()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x42D9D0
namespace gamemd {
int VectorClass_ushort::GetSize(unsigned short * a2)
{
{
    int result;
    int v3;
    _WORD *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x42DA10
namespace gamemd {
unsigned int VectorClass_ushort::Get(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 1;
    else
    return 0;
}
}
} // namespace gamemd

// 0x42DA30
namespace gamemd {
char VectorClass_ushort::SetCapacity(int a2, unsigned short * a3)
{
{
    _WORD *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(2 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(short*)(this->Items + 2 * i - 2) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x42DAE0
namespace gamemd {
int VectorClass_ushort::FindItemIndex(unsigned short * a2)
{
{
    int v2;
    int result;
    _WORD *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (short*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x42DBB0
namespace gamemd {
VectorClass_ushort * VectorClass_ushort::Add(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_unsigned_short;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass_ushort *)Block;
}
}
} // namespace gamemd

// 0x42DC00
namespace gamemd {
DynamicVector * VectorClass_ushort::Constructor(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_unsigned_short;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x42F7F0
namespace gamemd {
int VectorClass_Cell::GetSize(unsigned short * a2)
{
if ( !this->IsInitialized )
    return 0;
unsigned short* i = (unsigned short *)this->Items;
int capacity = this->Capacity;
int result = 0;
if ( capacity <= 0 )
    return -1;
while ( *i != *a2 || i[1] != a2[1] )
{
    ++result;
    i += 2;
    if ( result >= capacity )
        return -1;
}
return result;
}
} // namespace gamemd

// 0x42F840
namespace gamemd {
unsigned int VectorClass_Cell::GetCapacity(int a2)
{
if ( this->IsInitialized )
    return (unsigned int)((char *)a2 - (char *)this->Items) >> 2;
else
    return 0;
}
} // namespace gamemd

// 0x42F860
char VectorClass::ResizeEx(int a2, unsigned int * a3)
{
unsigned int* newItems = 0;
if ( a2 )
{
    this->IsInitialized = 0;
    if ( a3 )
    {
        newItems = a3;
    }
    else
    {
        unsigned int* fresh = (unsigned int *)operator new(4 * a2);
        if ( fresh )
            newItems = fresh;
        else
            newItems = 0;
    }
    this->IsInitialized = 1;
    if ( !newItems )
        return 0;
    if ( this->Items )
    {
        int copyCount = this->Capacity;
        if ( a2 < copyCount )
            copyCount = a2;
        int i = 0;
        while ( i < copyCount )
        {
            newItems[i] = this->Items[i];
            ++i;
        }
        if ( this->IsAllocated )
        {
            operator delete(this->Items);
            this->Items = 0;
        }
    }
    this->Items = (decltype(this->Items))newItems;
    this->Capacity = a2;
    this->IsAllocated = (a3 == 0);
}
else
{
    this->Clear();
}
int capacity = this->Capacity;
if ( capacity < this->Count )
    this->Count = capacity;
return 1;
}

// 0x42FBA0
namespace gamemd {
VectorClass * VectorClass_Cell::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_Cell;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x42FCB0
unsigned int * VectorClass::CellConstructor(IUnknown * aP1, IUnknown * aP2)
{
    this->Items = 0;
    this->Capacity = (int)aP1;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    this->vfptr = vt_VectorClass_Cell;
    if ( aP1 )
    {
        if ( aP2 )
        {
            this->Items = (void*)aP2;
            return this;
        }
        int v5 = __2_YAPAXI_Z(4 * (int)aP1);
        if ( v5 )
        {
            this->Items = (void*)v5;
            this->IsAllocated = 1;
            return this;
        }
        this->IsAllocated = 1;
        this->Items = 0;
    }
    return this;
}

// 0x45A070
namespace gamemd {
void VectorClass_ptr_FoggedObjectClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x45A0A0
namespace gamemd {
unsigned int VectorClass_ptr_FoggedObjectClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x45A0C0
namespace gamemd {
int VectorClass_ptr_FoggedObjectClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x45A0D0
namespace gamemd {
void VectorClass_ptr_Reestablish::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x45A100
namespace gamemd {
unsigned int VectorClass_ptr_Reestablish::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x45A120
namespace gamemd {
int VectorClass_ptr_Reestablish::Clear(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x45A270
void VectorClass::Cleanup()
{
if ( this->Items && this->IsAllocated )
{
    operator delete(this->Items);
    this->Items = 0;
}
this->IsAllocated = 0;
this->Capacity = 0;
}

// 0x45A4D0
namespace gamemd {
void VectorClass_ptr_InfantryClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x45A640
namespace gamemd {
char VectorClass_ptr_FoggedObjectClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x45A680
namespace gamemd {
char VectorClass_ptr_FoggedObjectClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x45A730
namespace gamemd {
int VectorClass_ptr_FoggedObjectClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x45A760
namespace gamemd {
char VectorClass_ptr_Reestablish::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x45A7A0
namespace gamemd {
char VectorClass_ptr_Reestablish::Remove(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x45A850
namespace gamemd {
void VectorClass_ptr_Reestablish::ddtor()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x45A880
namespace gamemd {
int VectorClass_ptr_Reestablish::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x45A8C0
namespace gamemd {
unsigned int VectorClass_ptr_Reestablish::Get(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x45A8E0
namespace gamemd {
char VectorClass_ptr_Reestablish::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x45A990
namespace gamemd {
int VectorClass_ptr_Reestablish::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x45AA10
namespace gamemd {
DynamicVector * VectorClass_ptr_Reestablish::Constructor(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_ParticleSystemTypeClass_const;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x45AAB0
namespace gamemd {
DynamicVector * VectorClass_InfantryPtr::Destruct(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_InfantryClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x45AB00
namespace gamemd {
DynamicVector * VectorClass_ptr_FoggedObjectClass::Constructor_VectorClass_FoggedObjectClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_FoggedObjectClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x45AB50
namespace gamemd {
char VectorClass_ptr_FoggedObjectClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x45AC00
namespace gamemd {
void VectorClass_ptr_FoggedObjectClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x45AC30
namespace gamemd {
int VectorClass_ptr_FoggedObjectClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x45AC70
namespace gamemd {
unsigned int VectorClass_ptr_FoggedObjectClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x45AC90
namespace gamemd {
VectorClass * VectorClass_ptr_FoggedObjectClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_FoggedObjectClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x45ACE0
namespace gamemd {
VectorClass * VectorClass_ptr_Reestablish::Add(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_Reestablish;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x45AD30
namespace gamemd {
DynamicVector * VectorClass_ptr_Reestablish::Constructor_VectorClass_Reestablish___(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_Reestablish;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x45AD80
unsigned int * VectorClass::ConstructorWithVtable(TechnoTypeClass * aP1, TechnoTypeClass * aP2)
{
{
    this->Items = (void*)(0);
    this->Capacity = aP1;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    this->vfptr = vt_VectorClass_ParticleSystemTypeClass_const;
    if ( aP1 )
  {
    if ( aP2 )
    {
    this->Items = (void*)(aP2);
    return this;
    }
    this->Items = (void*)(__2_YAPAXI_Z(4 * (int)aP1));
    this->IsAllocated = 1;
  }
    return this;
}
}

// 0x45AE50
namespace gamemd {
unsigned int * VectorClass_ReestablishPtr::Construct(BuildingClass * aP1, BuildingClass * aP2)
{
{
    this->Items = (void*)(0);
    this->Capacity = aP1;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    this->vfptr = vt_VectorClass_Reestablish;
    if ( aP1 )
  {
    if ( aP2 )
    {
    this->Items = (void*)(aP2);
    return this;
    }
    this->Items = (void*)(__2_YAPAXI_Z(4 * (int)aP1));
    this->IsAllocated = 1;
  }
    return this;
}
}
} // namespace gamemd

// 0x465DE0
namespace gamemd {
unsigned int * VectorClass_TPoint3D_int::Clear(unsigned int * a2, int a3)
{
{
    int *v3;
    v3 = (int*)(this->Items + 12 * a3);
    *a2 = *v3;
    *((int*)(a2) + 1) = v3[1];
    *((int*)(a2) + 2) = v3[2];
    return a2;
}
}
} // namespace gamemd

// 0x465E10
namespace gamemd {
char VectorClass_TPoint3D_int::AddRef(int a2)
{
{
    int v2;
    int v3;
    int v4;
    int *v5;
    int *v6;
    int v7;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = *(int*)(a2 + 4);
    v5 = (int*)this->Items;
    v6 = (int*)(v4 + 8);
    v7 = v4 - (int)v5;
    while ( *v5 == *(int*)((char*)(v5) + v7) && v5[1] == *(v6 - 1) && v5[2] == *v6 )
    {
    ++v3;
    v6 += 3;
    v5 += 3;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x465E70
namespace gamemd {
char VectorClass_TPoint3D_int::Release(int a2, char * a3)
{
{
    int v3;
    char *v5;
    char *v6;
    char *v7;
    int v9;
    int v10;
    char *v11;
    int *v12;
    v3 = a2;
    if ( a2 )
  {
    v5 = a3;
    this->IsInitialized = 0;
    if ( a3 )
    {
    v7 = a3;
    }
    else
    {
    v6 = (char*)__2_YAPAXI_Z(12 * a2);
    if ( v6 )
    v7 = v6;
    else
    v7 = 0;
    }
    this->IsInitialized = 1;
    if ( v7 )
    {
    if ( this->Items )
      {
    v9 = this->Capacity;
    if ( a2 < v9 )
    v9 = a2;
    if ( v9 > 0 )
        {
    v10 = 0;
    do
          {
    v11 = &v7[v10];
    v12 = (int*)(v10 + this->Items);
    v10 += 12;
    --v9;
    *(int*)v11 = *v12;
    *((int*)(v11) + 1) = v12[1];
    *((int*)(v11) + 2) = v12[2];
          }
    while ( v9 );
    v5 = a3;
    v3 = a2;
        }
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v7);
    this->Capacity = v3;
    this->IsAllocated = v5 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->ddtor();
    return 1;
  }
}
}
} // namespace gamemd

// 0x465F50
namespace gamemd {
void VectorClass_TPoint3D_int::ddtor()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x465F80
namespace gamemd {
int VectorClass_TPoint3D_int::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2 || i[1] != *((int*)(a2) + 1) || i[2] != *((int*)(a2) + 2); i += 3 )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x465FD0
namespace gamemd {
unsigned int VectorClass_TPoint3D_int::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (a2 - this->Items) / 0xCu;
    else
    return 0;
}
}
} // namespace gamemd

// 0x466080
namespace gamemd {
VectorClass * VectorClass_TPoint3D_int::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_TPoint3D_int;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x46B5E0
namespace gamemd {
void VectorClass_ptr_BulletClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x46B610
namespace gamemd {
unsigned int VectorClass_ptr_BulletClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x46B630
namespace gamemd {
int VectorClass_ptr_BulletClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x46B660
namespace gamemd {
char VectorClass_ptr_BulletClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x46B6A0
namespace gamemd {
char VectorClass_ptr_BulletClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->FindItemIndex();
    return 1;
  }
}
}
} // namespace gamemd

// 0x46B750
namespace gamemd {
void VectorClass_ptr_BulletClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x46B780
namespace gamemd {
int VectorClass_ptr_BulletClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x46B7C0
namespace gamemd {
unsigned int VectorClass_ptr_BulletClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x46B7E0
namespace gamemd {
char VectorClass_ptr_BulletClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->FindItemIndex();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x46B890
namespace gamemd {
int VectorClass_ptr_BulletClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x46B8C0
namespace gamemd {
VectorClass * VectorClass_ptr_BulletClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_BulletClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x46B910
namespace gamemd {
unsigned int * VectorClass_ptr_BulletClass::loc_46B910(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_BulletClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}
}
} // namespace gamemd

// 0x46B990
namespace gamemd {
LONG VectorClass_ptr_BulletClass::GetItem(int a1)
{
{
    return BulletClass::CheckTargetValidity(a1 - 4);
}
}
} // namespace gamemd

// 0x46B9A0
namespace gamemd {
LONG VectorClass_ptr_BulletClass::GetItem_0(int a1)
{
{
    return BulletClass::ValidateTarget((volatile LONG*)(a1 - 4));
}
}
} // namespace gamemd

// 0x472AE0
namespace gamemd {
void VectorClass_ptr_CaptureManagerClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x472B10
namespace gamemd {
unsigned int VectorClass_ptr_CaptureManagerClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x472B30
namespace gamemd {
int VectorClass_ptr_CaptureManagerClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x472DA0
namespace gamemd {
char VectorClass_ptr_CaptureManagerClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x472DE0
namespace gamemd {
char VectorClass_ptr_CaptureManagerClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x472E90
namespace gamemd {
void VectorClass_ptr_CaptureManagerClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x472EC0
namespace gamemd {
int VectorClass_ptr_CaptureManagerClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x472F00
namespace gamemd {
unsigned int VectorClass_ptr_CaptureManagerClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x472F20
namespace gamemd {
char VectorClass_ptr_CaptureManagerClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x472FD0
namespace gamemd {
int VectorClass_ptr_CaptureManagerClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4730A0
namespace gamemd {
VectorClass * VectorClass_ptr_CaptureManagerClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_CaptureManagerClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4730F0
namespace gamemd {
DynamicVector * VectorClass_ptr_CaptureManagerClass::Constructor_VectorClass_CaptureManagerClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_CaptureManagerClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x477750
int * VectorClass::ScalarDtor(char a2)
{
Pipe::Dtor((int *)this);
if ( (a2 & 1) != 0 )
    operator delete(this);
return (int *)this;
}

// 0x4777B0
unsigned int * VectorClass::Copy(VectorClass * aP1)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    this->Items = 0;
    this->Capacity = 0;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_int;
    if ( this != (int *)aP1 )
  {
    VectorClass::Destroy((int)this);
    v3 = aP1->Capacity;
    this->Capacity = v3;
    if ( v3 )
    {
    v4 = __2_YAPAXI_Z(4 * v3);
    this->Items = v4;
    if ( v4 )
      {
    v5 = this->Capacity;
    v6 = 0;
    this->IsAllocated = 1;
    if ( v5 > 0 )
        {
    do
          {
    *(int *)(this->Items + 4 * v6) = *((int *)aP1->Items + v6);
    ++v6;
          }
    while ( v6 < this->Capacity );
        }
      }
    }
    else
    {
    this->Items = 0;
    this->IsAllocated = 0;
    }
  }
    this->Count = aP1[1].vtable0;
    this->CapacityIncrement = aP1[1].Items;
    *(void**)this = &vt_TypeList_int;
    return this;
}
}

// 0x477890
int VectorClass::GetAt_Copy(int a2)
{
return this->Items[a2];
}

// 0x477BE0
unsigned int * VectorClass::Construct(int a2, int a3)
{
{
    this->Items = (void*)(0);
    this->Capacity = a2;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    this->vfptr = vt_VectorClass_int;
    if ( a2 )
  {
    if ( a3 )
    {
    this->Items = (void*)(a3);
    return this;
    }
    this->Items = (void*)(__2_YAPAXI_Z(4 * a2));
    this->IsAllocated = 1;
  }
    return this;
}
}

// 0x477C70
char VectorClass::vt02(int a2, unsigned int * a3)
{
unsigned int* newItems;
if ( a2 )
{
    this->IsInitialized = 0;
    if ( a3 )
        newItems = a3;
    else
        newItems = (unsigned int *)operator new(4 * a2);
    this->IsInitialized = 1;
    if ( newItems )
    {
        if ( this->Items )
        {
            int copyCount = this->Capacity;
            if ( a2 < copyCount )
                copyCount = a2;
            int i = 0;
            while ( i < copyCount )
            {
                newItems[i] = this->Items[i];
                ++i;
            }
            if ( this->IsAllocated )
            {
                operator delete(this->Items);
                this->Items = 0;
            }
        }
        this->Items = (decltype(this->Items))newItems;
        this->Capacity = a2;
        this->IsAllocated = (a3 == 0);
        return 1;
    }
    else
    {
        return 0;
    }
}
else
{
    this->Clear();
    return 1;
}
}

// 0x477D20
void VectorClass::Destroy()
{
if ( this->Items && this->IsAllocated )
{
    operator delete(this->Items);
    this->Items = 0;
}
this->IsAllocated = 0;
this->Capacity = 0;
}

// 0x477D50
int VectorClass::vt04(unsigned int * a2)
{
if ( !this->IsInitialized )
    return 0;
unsigned int* i = (unsigned int *)this->Items;
int capacity = this->Capacity;
int result = 0;
if ( capacity <= 0 )
    return -1;
while ( *i != *a2 )
{
    ++result;
    ++i;
    if ( result >= capacity )
        return -1;
}
return result;
}

// 0x477D90
unsigned int VectorClass::vt05(int a2)
{
if ( this->IsInitialized )
    return (unsigned int)((char *)a2 - (char *)this->Items) >> 2;
else
    return 0;
}

// 0x477E10
char VectorClass::Resize(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Clear();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}

// 0x478630
VectorClass * VectorClass::vt00(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_int;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}

// 0x48AD10
namespace gamemd {
void VectorClass_ptr_DamageGroup::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x48AD40
namespace gamemd {
unsigned int VectorClass_ptr_DamageGroup::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x48AD60
namespace gamemd {
int VectorClass_ptr_DamageGroup::Clear(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x48AD70
namespace gamemd {
char VectorClass_ptr_DamageGroup::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x48ADB0
namespace gamemd {
char VectorClass_ptr_DamageGroup::Remove(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x48AE60
namespace gamemd {
void VectorClass_ptr_DamageGroup::ddtor()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x48AE90
namespace gamemd {
int VectorClass_ptr_DamageGroup::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x48AED0
namespace gamemd {
unsigned int VectorClass_ptr_DamageGroup::Get(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x48AEF0
namespace gamemd {
char VectorClass_ptr_DamageGroup::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x48AFA0
namespace gamemd {
int VectorClass_ptr_DamageGroup::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x48AFD0
namespace gamemd {
VectorClass * VectorClass_ptr_DamageGroup::Add(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_DamageGroup;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x48B020
namespace gamemd {
DynamicVector * VectorClass_ptr_DamageGroup::Constructor_VectorClass_DamageGroup___(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_DamageGroup;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x491390
namespace gamemd {
void VectorClass_ptr_ConvertClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4913C0
namespace gamemd {
unsigned int VectorClass_ptr_ConvertClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4913E0
namespace gamemd {
int VectorClass_ptr_ConvertClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x49AE80
namespace gamemd {
char VectorClass_ptr_ConvertClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x49AEC0
namespace gamemd {
char VectorClass_ptr_ConvertClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x49AF70
namespace gamemd {
void VectorClass_ptr_ConvertClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x49AFA0
namespace gamemd {
int VectorClass_ptr_ConvertClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x49AFE0
namespace gamemd {
unsigned int VectorClass_ptr_ConvertClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x49B000
namespace gamemd {
char VectorClass_ptr_ConvertClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x49B0B0
namespace gamemd {
int VectorClass_ptr_ConvertClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x49B0E0
namespace gamemd {
VectorClass * VectorClass_ptr_ConvertClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_ConvertClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x49B130
namespace gamemd {
DynamicVector * VectorClass_ptr_ConvertClass::Constructor_VectorClass_ConvertClass___(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_ConvertClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x49FB60
int VectorClass::GetCount()
{
{
    return this->Count;
}
}

// 0x4A0E10
namespace gamemd {
DynamicVector * VectorClass_UtagCONNECTDATA::Constructor_VectorClass_tagCONNECTDATA_(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_tagCONNECTDATA;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x4A0EB0
namespace gamemd {
void VectorClass_UtagCONNECTDATA::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4A0EE0
namespace gamemd {
unsigned int VectorClass_UtagCONNECTDATA::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 3;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4A0F00
namespace gamemd {
unsigned int * VectorClass_UtagCONNECTDATA::Clear(unsigned int * a2, int a3)
{
{
    int v3;
    v3 = this->Items;
    *a2 = *(int*)(v3 + 8 * a3);
    *((int*)(a2) + 1) = *(int*)(v3 + 8 * a3 + 4);
    return a2;
}
}
} // namespace gamemd

// 0x4A0F80
namespace gamemd {
char VectorClass_UtagCONNECTDATA::AddRef(int a2)
{
{
    int v2;
    int v3;
    int v4;
    int *v5;
    int *v6;
    int v7;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = *(int*)(a2 + 4);
    v5 = (int*)this->Items;
    v6 = (int*)(v4 + 4);
    v7 = v4 - (int)v5;
    while ( v5[1] == *v6 && *v5 == *(int*)((char*)(v5) + v7) )
    {
    ++v3;
    v6 += 2;
    v5 += 2;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4A0FE0
namespace gamemd {
char VectorClass_UtagCONNECTDATA::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int *v5;
    int v7;
    int v8;
    int v9;
    if ( a2 )
  {
    v4 = a3;
    this->IsInitialized = 0;
    if ( a3 )
    v5 = a3;
    else
    v5 = __2_YAPAXI_Z(8 * a2);
    this->IsInitialized = 1;
    if ( v5 )
    {
    if ( this->Items )
      {
    v7 = this->Capacity;
    if ( a2 < v7 )
    v7 = a2;
    v8 = 0;
    if ( v7 > 0 )
        {
    do
          {
    v9 = this->Items;
    ++v8;
    v5[2 * v8 - 2] = *(int*)(v9 + 8 * v8 - 8);
    v5[2 * v8 - 1] = *(int*)(v9 + 8 * v8 - 4);
          }
    while ( v8 < v7 );
    v4 = a3;
        }
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v5);
    this->Capacity = a2;
    this->IsAllocated = v4 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4A10A0
void VectorClass::ClearAndFree2()
{
if ( this->Items && this->IsAllocated )
{
    operator delete(this->Items);
    this->Items = 0;
}
this->IsAllocated = 0;
this->Capacity = 0;
}

// 0x4A10D0
namespace gamemd {
int VectorClass_UtagCONNECTDATA::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; i[1] != *((int*)(a2) + 1) || *i != *a2; i += 2 )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4A1120
namespace gamemd {
unsigned int VectorClass_UtagCONNECTDATA::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 3;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4A1140
namespace gamemd {
char VectorClass_UtagCONNECTDATA::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int *v5;
    int v6;
    int v7;
    int v8;
    int v9;
    if ( a2 )
  {
    v4 = a3;
    this->IsInitialized = 0;
    if ( a3 )
    v5 = a3;
    else
    v5 = __2_YAPAXI_Z(8 * a2);
    this->IsInitialized = 1;
    if ( !v5 )
    return 0;
    if ( this->Items )
    {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    v7 = 0;
    if ( v6 > 0 )
      {
    do
        {
    v8 = this->Items;
    ++v7;
    v5[2 * v7 - 2] = *(int*)(v8 + 8 * v7 - 8);
    v5[2 * v7 - 1] = *(int*)(v8 + 8 * v7 - 4);
        }
    while ( v7 < v6 );
    v4 = a3;
      }
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v5);
    this->Capacity = a2;
    this->IsAllocated = v4 == 0;
  }
    else
  {
    this->Destroy();
  }
    v9 = this->Capacity;
    if ( v9 < this->Count )
    this->Count = v9;
    return 1;
}
}
} // namespace gamemd

// 0x4A1200
namespace gamemd {
int VectorClass_UtagCONNECTDATA::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; i[1] != *((int*)(a2) + 1) || *i != *a2; i += 2 )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4A1330
void VectorClass::CleanupTyped()
{
if ( this->Items && this->IsAllocated )
{
    operator delete(this->Items);
    this->Items = 0;
}
this->IsAllocated = 0;
this->Capacity = 0;
}

// 0x4A14A0
namespace gamemd {
VectorClass * VectorClass_UtagCONNECTDATA::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_tagCONNECTDATA;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4A7FE0
char VectorClass::AppendCopy(DynamicVector * aP1)
{
{
    int v3;
    int v4;
    int v6;
    int v7;
    v3 = this->Capacity;
    if ( this->Count >= v3 )
  {
    if ( !this->IsAllocated && v3 )
    return 0;
    v4 = this->CapacityIncrement;
    if ( v4 <= 0 || !this->SetCapacity(v3 + v4, 0) )
    return 0;
  }
    v6 = this->Count;
    v7 = this->Items;
    this->Count = v6 + 1;
    *(int *)(v7 + 4 * v6) = *(int *)aP1->__pad_0;
    return 1;
}
}

// 0x4B9C30
namespace gamemd {
int VectorClass_ptr_CrossDissolveEffect::GetItem(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4B9C90
namespace gamemd {
int VectorClass_ptr_CrossDissolveEffect::Clear(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4B9CA0
namespace gamemd {
char VectorClass_ptr_CrossDissolveEffect::FindItemIndex(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4B9CE0
namespace gamemd {
char VectorClass_ptr_CrossDissolveEffect::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->FindItemIndex_0();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4B9D90
namespace gamemd {
void VectorClass_ptr_CrossDissolveEffect::Destroy()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4B9DC0
namespace gamemd {
int VectorClass_ptr_CrossDissolveEffect::FindItemIndex_0(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4B9E00
namespace gamemd {
unsigned int VectorClass_ptr_CrossDissolveEffect::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4B9F00
namespace gamemd {
char VectorClass_ptr_CrossDissolveEffect::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4B9F40
namespace gamemd {
char VectorClass_ptr_CrossDissolveEffect::Remove(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->FindItemIndex_0();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4B9FF0
namespace gamemd {
void VectorClass_ptr_CrossDissolveEffect::ddtor()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4BA020
namespace gamemd {
int VectorClass_ptr_CrossDissolveEffect::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4BA060
namespace gamemd {
unsigned int VectorClass_ptr_CrossDissolveEffect::Get(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4BA1B0
namespace gamemd {
unsigned int * VectorClass_ptr_CrossDissolveEffect::loc_4BA1B0(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = &off_7E8500;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}
}
} // namespace gamemd

// 0x4BA250
namespace gamemd {
VectorClass * VectorClass_ptr_CrossDissolveEffect::Add(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_CrossDissolveEffect;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4C2C40
namespace gamemd {
void VectorClass_ptr_EBolt::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4C2C70
namespace gamemd {
unsigned int VectorClass_ptr_EBolt::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4C2C90
namespace gamemd {
int VectorClass_ptr_EBolt::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4C2CA0
namespace gamemd {
char VectorClass_ptr_EBolt::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4C2CE0
namespace gamemd {
char VectorClass_ptr_EBolt::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4C2D90
namespace gamemd {
void VectorClass_ptr_EBolt::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4C2DC0
namespace gamemd {
int VectorClass_ptr_EBolt::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4C2E00
namespace gamemd {
unsigned int VectorClass_ptr_EBolt::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4C2E20
namespace gamemd {
char VectorClass_ptr_EBolt::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4C2ED0
namespace gamemd {
int VectorClass_ptr_EBolt::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4C2F00
namespace gamemd {
VectorClass * VectorClass_ptr_EBolt::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_EBolt;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4C2F50
namespace gamemd {
DynamicVector * VectorClass_ptr_EBolt::Constructor_VectorClass_EBolt___(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_EBolt;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x4C49A0
namespace gamemd {
void VectorClass_ptr_EgoClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4C49D0
namespace gamemd {
unsigned int VectorClass_ptr_EgoClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4C49F0
namespace gamemd {
int VectorClass_ptr_EgoClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4C4A00
namespace gamemd {
char VectorClass_ptr_EgoClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4C4A40
namespace gamemd {
char VectorClass_ptr_EgoClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4C4AF0
namespace gamemd {
void VectorClass_ptr_EgoClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4C4B20
namespace gamemd {
int VectorClass_ptr_EgoClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4C4B60
namespace gamemd {
unsigned int VectorClass_ptr_EgoClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4C4B80
namespace gamemd {
char VectorClass_ptr_EgoClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4C4C30
namespace gamemd {
int VectorClass_ptr_EgoClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4C4C60
namespace gamemd {
VectorClass * VectorClass_ptr_EgoClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_EgoClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4C4CB0
namespace gamemd {
DynamicVector * VectorClass_ptr_EgoClass::Constructor_VectorClass_EgoClass___(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_EgoClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x4C5B60
namespace gamemd {
void VectorClass_ptr_EMPulseClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4C5B90
namespace gamemd {
unsigned int VectorClass_ptr_EMPulseClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4C5BB0
namespace gamemd {
int VectorClass_ptr_EMPulseClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4C5BC0
namespace gamemd {
char VectorClass_ptr_EMPulseClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4C5C00
namespace gamemd {
char VectorClass_ptr_EMPulseClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4C5CB0
namespace gamemd {
void VectorClass_ptr_EMPulseClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4C5CE0
namespace gamemd {
int VectorClass_ptr_EMPulseClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4C5D20
namespace gamemd {
unsigned int VectorClass_ptr_EMPulseClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4C5D40
namespace gamemd {
char VectorClass_ptr_EMPulseClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4C5DF0
namespace gamemd {
int VectorClass_ptr_EMPulseClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4C5E20
namespace gamemd {
VectorClass * VectorClass_ptr_EMPulseClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_EMPulseClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4C5E70
namespace gamemd {
DynamicVector * VectorClass_ptr_EMPulseClass::Constructor_VectorClass_EMPulseClass___(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_EMPulseClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x4E0250
namespace gamemd {
unsigned int * VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::Clear(unsigned int * a2, int a3)
{
{
    int v3;
    int v4;
    int v5;
    v3 = this->Items;
    v4 = *(int *)(v3 + 8 * a3);
    v5 = v3 + 8 * a3;
    *a2 = v4;
    *((int*)(a2) + 1) = *(int *)(v5 + 4);
    return a2;
}
}
} // namespace gamemd

// 0x4E07E0
namespace gamemd {
char VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::AddRef(int a2)
{
{
    int v2;
    int v3;
    int v4;
    int *v5;
    int *v6;
    int v7;
    v2 = this->Capacity;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = *(int *)(a2 + 4);
    v5 = (int *)this->Items;
    v6 = (int *)(v4 + 4);
    v7 = v4 - (int)v5;
    while ( *v5 == *(int *)((char *)(v5) + v7) && v5[1] == *v6 )
    {
    ++v3;
    v6 += 2;
    v5 += 2;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4E0950
namespace gamemd {
void VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::ddtor()
{
int items = this->Items;
if ( items && this->IsAllocated )
{
    operator delete((char *)items - 4);
    this->Items = 0;
}
this->IsAllocated = 0;
this->Capacity = 0;
}
} // namespace gamemd

// 0x4E0990
namespace gamemd {
void VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass_GetSize()
 {
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4e0990*/
    return 0; /*0x4e099e*/
  int v3 = *(_DWORD *)(this + 8); /*0x4e09a4*/
  result = 0; /*0x4e09a7*/
  if ( v3 <= 0 ) /*0x4e09ab*/
    return -1; /*0x4e09cc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x4e09b1*/
  {
    if ( ++result >= v3 ) /*0x4e09ca*/
      return -1; /*0x4e09ca*/
  }
  return result; /*0x4e099b*/
}
}
} // namespace gamemd

// 0x4E09E0
namespace gamemd {
unsigned int VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 3;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E0AB0
namespace gamemd {
void VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::Destroy()
{
{
    int v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z((void *)(v2 - 4));
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E0AF0
namespace gamemd {
unsigned int VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 3;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E0CA0
namespace gamemd {
int VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->Items; *i != *a2 || i[1] != *((int*)(a2) + 1); i += 2 )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
} // namespace gamemd

}
// 0x4E0D80
namespace gamemd {
VectorClass * VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::QueryInterface(char a2)
{
{
    int v3;
    v3 = *(this + 1);
    *(void**)this = &vt_VectorClass_DiscreteDistributionClass_CellClass_DistributionObject_CellClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z((void *)(v3 - 4));
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}
} // namespace gamemd

// 0x4E0E20
namespace gamemd {
DynamicVector * VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::Constructor(char a2)
{
{
    int v3;
    v3 = *(this + 1);
    *(void**)this = &vt_VectorClass_DiscreteDistributionClass_CellClass_DistributionObject_CellClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z((void *)(v3 - 4));
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x4E8340
namespace gamemd {
int VectorClass_Building::Count(int a2)
{
return this->Items[a2];
}
} // namespace gamemd

// 0x4E8350
namespace gamemd {
void VectorClass_ptr_SuperClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E8380
namespace gamemd {
unsigned int VectorClass_ptr_SuperClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E83A0
namespace gamemd {
int VectorClass_ptr_SuperClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E83B0
namespace gamemd {
void VectorClass_ptr_AITriggerTypeClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E83E0
namespace gamemd {
unsigned int VectorClass_ptr_AITriggerTypeClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E8400
namespace gamemd {
int VectorClass_ptr_AITriggerTypeClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E8410
namespace gamemd {
void VectorClass_ptr_BuildingLightClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E8440
namespace gamemd {
unsigned int VectorClass_ptr_BuildingLightClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E8460
namespace gamemd {
int VectorClass_ptr_BuildingLightClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E84D0
namespace gamemd {
void VectorClass_ptr_TeamClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E8500
namespace gamemd {
unsigned int VectorClass_ptr_TeamClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E8520
namespace gamemd {
int VectorClass_ptr_TeamClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E8530
namespace gamemd {
int VectorClass_ptr_ThemeControl::Clear(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E8540
namespace gamemd {
void VectorClass_ptr_AITriggerTypeClass::Destroy_0()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E8570
namespace gamemd {
unsigned int VectorClass_ptr_AITriggerTypeClass::GetItemIndex_0(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E8590
namespace gamemd {
int VectorClass_ptr_TriggerClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E85A0
namespace gamemd {
void VectorClass_ptr_AITriggerTypeClass::Destroy_1()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E85D0
namespace gamemd {
unsigned int VectorClass_ptr_AITriggerTypeClass::GetItemIndex_1(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E85F0
namespace gamemd {
int VectorClass_ptr_TriggerTypeClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E8600
namespace gamemd {
void VectorClass_ptr_TubeClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E8630
namespace gamemd {
unsigned int VectorClass_ptr_TubeClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E8650
namespace gamemd {
int VectorClass_ptr_TubeClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E8660
namespace gamemd {
void VectorClass_ptr_BuildingLightClass::Destroy_0()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E8690
namespace gamemd {
unsigned int VectorClass_ptr_BuildingLightClass::GetItemIndex_0(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E86B0
namespace gamemd {
int VectorClass_ptr_ParticleSystemClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E86C0
namespace gamemd {
void VectorClass_ptr_TubeClass::Destroy_0()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E86F0
namespace gamemd {
unsigned int VectorClass_ptr_TubeClass::GetItemIndex_0(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E8710
namespace gamemd {
int VectorClass_ptr_WaveClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E8720
namespace gamemd {
void VectorClass_ptr_TubeClass::Destroy_1()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E8750
namespace gamemd {
unsigned int VectorClass_ptr_TubeClass::GetItemIndex_1(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E8770
namespace gamemd {
int VectorClass_ptr_OverlayClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E8890
namespace gamemd {
int VectorClass_ptr_AircraftClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E88A0
namespace gamemd {
void VectorClass_ptr_UnitClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E88D0
namespace gamemd {
unsigned int VectorClass_ptr_UnitClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E88F0
namespace gamemd {
int VectorClass_ptr_UnitClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E8900
namespace gamemd {
void VectorClass_ptr_UnitClass::Destroy_0()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E8930
namespace gamemd {
unsigned int VectorClass_ptr_UnitClass::GetItemIndex_0(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E8950
namespace gamemd {
int VectorClass_ptr_HouseClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E8960
namespace gamemd {
void VectorClass_ptr_TeamClass::Destroy_0()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E8990
namespace gamemd {
unsigned int VectorClass_ptr_TeamClass::GetItemIndex_0(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E89B0
namespace gamemd {
int VectorClass_ptr_AnimClass::Clear(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E89C0
namespace gamemd {
void VectorClass_ptr_TeamClass::Destroy_1()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E89F0
namespace gamemd {
unsigned int VectorClass_ptr_TeamClass::GetItemIndex_1(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E8A10
namespace gamemd {
int VectorClass_ptr_FactoryClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E8A20
namespace gamemd {
void VectorClass_ptr_CampaignClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E8A50
namespace gamemd {
unsigned int VectorClass_ptr_CampaignClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E8A70
namespace gamemd {
int VectorClass_ptr_CampaignClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E8A80
namespace gamemd {
void VectorClass_ptr_CampaignClass::Destroy_0()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E8AB0
namespace gamemd {
unsigned int VectorClass_ptr_CampaignClass::GetItemIndex_0(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E8AD0
namespace gamemd {
int VectorClass_ptr_SideClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E8AE0
namespace gamemd {
void VectorClass_ptr_HouseTypeClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E8B10
namespace gamemd {
unsigned int VectorClass_ptr_HouseTypeClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E8B30
namespace gamemd {
int VectorClass_ptr_HouseTypeClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E8B40
namespace gamemd {
void VectorClass_ptr_HouseTypeClass::Destroy_0()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E8B70
namespace gamemd {
unsigned int VectorClass_ptr_HouseTypeClass::GetItemIndex_0(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E8B90
namespace gamemd {
int VectorClass_ptr_TaskForceClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E8BA0
namespace gamemd {
void VectorClass_ptr_HouseTypeClass::Destroy_1()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E8BD0
namespace gamemd {
unsigned int VectorClass_ptr_HouseTypeClass::GetItemIndex_1(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E8BF0
namespace gamemd {
int VectorClass_ptr_TeamTypeClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E8C00
namespace gamemd {
void VectorClass_ptr_ScriptTypeClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E8C30
namespace gamemd {
unsigned int VectorClass_ptr_ScriptTypeClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E8C50
namespace gamemd {
int VectorClass_ptr_ScriptTypeClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E8C60
namespace gamemd {
void VectorClass_ptr_ScriptTypeClass::Destroy_0()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E8C90
namespace gamemd {
unsigned int VectorClass_ptr_ScriptTypeClass::GetItemIndex_0(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E8CB0
namespace gamemd {
int VectorClass_ptr_OverlayTypeClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E8CC0
namespace gamemd {
void VectorClass_ptr_SmudgeTypeClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E8CF0
namespace gamemd {
unsigned int VectorClass_ptr_SmudgeTypeClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E8D10
namespace gamemd {
int VectorClass_ptr_SmudgeTypeClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E8D20
namespace gamemd {
void VectorClass_ptr_SmudgeTypeClass::Destroy_0()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E8D50
namespace gamemd {
unsigned int VectorClass_ptr_SmudgeTypeClass::GetItemIndex_0(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E8D70
namespace gamemd {
int VectorClass_ptr_TerrainTypeClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E8D80
namespace gamemd {
void VectorClass_ptr_SmudgeTypeClass::Destroy_1()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E8DB0
namespace gamemd {
unsigned int VectorClass_ptr_SmudgeTypeClass::GetItemIndex_1(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E8DD0
namespace gamemd {
int VectorClass_ptr_BuildingTypeClass::SaveToINI(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E8DE0
namespace gamemd {
void VectorClass_ptr_AircraftTypeClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E8E10
namespace gamemd {
unsigned int VectorClass_ptr_AircraftTypeClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E8E30
namespace gamemd {
int VectorClass_ptr_AircraftTypeClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E8E40
namespace gamemd {
void VectorClass_ptr_AircraftTypeClass::Destroy_0()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E8E70
namespace gamemd {
unsigned int VectorClass_ptr_AircraftTypeClass::GetItemIndex_0(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E8E90
namespace gamemd {
int VectorClass_ptr_UnitTypeClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E8EA0
namespace gamemd {
void VectorClass_ptr_AnimTypeClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E8ED0
namespace gamemd {
unsigned int VectorClass_ptr_AnimTypeClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E8EF0
namespace gamemd {
int VectorClass_ptr_AnimTypeClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E8F00
namespace gamemd {
void VectorClass_ptr_AnimTypeClass::Destroy_0()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E8F30
namespace gamemd {
unsigned int VectorClass_ptr_AnimTypeClass::GetItemIndex_0(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E8F50
namespace gamemd {
int VectorClass_ptr_InfantryTypeClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E8F60
namespace gamemd {
void VectorClass_ptr_AnimTypeClass::Destroy_1()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E8F90
namespace gamemd {
unsigned int VectorClass_ptr_AnimTypeClass::GetItemIndex_1(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E8FB0
namespace gamemd {
int VectorClass_ptr_BulletTypeClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E8FC0
namespace gamemd {
void VectorClass_ptr_VoxelAnimTypeClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E8FF0
namespace gamemd {
unsigned int VectorClass_ptr_VoxelAnimTypeClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E9010
namespace gamemd {
int VectorClass_ptr_VoxelAnimTypeClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E9020
namespace gamemd {
void VectorClass_ptr_VoxelAnimTypeClass::Destroy_0()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E9050
namespace gamemd {
unsigned int VectorClass_ptr_VoxelAnimTypeClass::GetItemIndex_0(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E9070
namespace gamemd {
int VectorClass_ptr_IsometricTileTypeClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E9080
namespace gamemd {
void VectorClass_ptr_ParticleTypeClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E90B0
namespace gamemd {
unsigned int VectorClass_ptr_ParticleTypeClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E90D0
namespace gamemd {
int VectorClass_ptr_ParticleTypeClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E90E0
namespace gamemd {
void VectorClass_ptr_ParticleTypeClass::Destroy_0()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E9110
namespace gamemd {
unsigned int VectorClass_ptr_ParticleTypeClass::GetItemIndex_0(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E9130
namespace gamemd {
int VectorClass_ptr_ParticleSystemTypeClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E9140
namespace gamemd {
void VectorClass_ptr_ParticleTypeClass::Destroy_1()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E9170
namespace gamemd {
unsigned int VectorClass_ptr_ParticleTypeClass::GetItemIndex_1(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E9190
namespace gamemd {
int VectorClass_ptr_SuperWeaponTypeClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E91A0
namespace gamemd {
void VectorClass_ptr_SuperClass::Destroy_0()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E91D0
namespace gamemd {
unsigned int VectorClass_ptr_SuperClass::GetItemIndex_0(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E91F0
namespace gamemd {
int VectorClass_ptr_AbstractTypeClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E9460
namespace gamemd {
char VectorClass_Building::Get(int a2)
{
VectorClass_Building* other = (VectorClass_Building *)a2;
int capacity = this->Capacity;
if ( capacity == other->Capacity )
{
    int i = 0;
    if ( capacity <= 0 )
        return 1;
    unsigned int* myItems = (unsigned int *)this->Items;
    unsigned int* otherItems = (unsigned int *)other->Items;
    while ( myItems[i] == otherItems[i] )
    {
        ++i;
        if ( i >= capacity )
            return 1;
    }
}
return 0;
}
} // namespace gamemd

// 0x4E94A0
namespace gamemd {
char VectorClass_Building::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Set();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4E9550
namespace gamemd {
void VectorClass_Building::Set()
{
if ( this->Items && this->IsAllocated )
{
    operator delete(this->Items);
    this->Items = 0;
}
this->IsAllocated = 0;
this->Capacity = 0;
}
} // namespace gamemd

// 0x4E9580
namespace gamemd {
int VectorClass_Building::GetSize(unsigned int * a2)
{
if ( !this->IsInitialized )
    return 0;
unsigned int* i = (unsigned int *)this->Items;
int capacity = this->Capacity;
int result = 0;
if ( capacity <= 0 )
    return -1;
while ( *i != *a2 )
{
    ++result;
    ++i;
    if ( result >= capacity )
        return -1;
}
return result;
}
} // namespace gamemd

// 0x4E95C0
namespace gamemd {
unsigned int VectorClass_Building::GetCapacity(int a2)
{
if ( this->IsInitialized )
    return (unsigned int)((char *)a2 - (char *)this->Items) >> 2;
else
    return 0;
}
} // namespace gamemd

// 0x4E96C0
namespace gamemd {
char VectorClass_ptr_SuperClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4E9700
namespace gamemd {
char VectorClass_ptr_SuperClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4E97B0
namespace gamemd {
void VectorClass_ptr_SuperClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E97E0
namespace gamemd {
int VectorClass_ptr_SuperClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4E9820
namespace gamemd {
unsigned int VectorClass_ptr_SuperClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E98F0
namespace gamemd {
int VectorClass_ptr_SuperClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4E9920
namespace gamemd {
char VectorClass_ptr_AITriggerTypeClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4E9960
namespace gamemd {
char VectorClass_ptr_AITriggerTypeClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4E9A10
namespace gamemd {
void VectorClass_ptr_AITriggerTypeClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E9A40
namespace gamemd {
int VectorClass_ptr_AITriggerTypeClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4E9A80
namespace gamemd {
unsigned int VectorClass_ptr_AITriggerTypeClass::LoadTypeData(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E9AA0
namespace gamemd {
char VectorClass_ptr_AITriggerTypeClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4E9B50
namespace gamemd {
int VectorClass_ptr_AITriggerTypeClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4E9B80
namespace gamemd {
char VectorClass_ptr_BuildingLightClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4E9BC0
namespace gamemd {
char VectorClass_ptr_BuildingLightClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4E9C70
namespace gamemd {
void VectorClass_ptr_BuildingLightClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E9CA0
namespace gamemd {
int VectorClass_ptr_BuildingLightClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4E9CE0
namespace gamemd {
unsigned int VectorClass_ptr_BuildingLightClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E9D00
namespace gamemd {
char VectorClass_ptr_BuildingLightClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4E9DB0
namespace gamemd {
int VectorClass_ptr_BuildingLightClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EA040
namespace gamemd {
char VectorClass_ptr_TeamClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4EA080
namespace gamemd {
char VectorClass_ptr_TeamClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4EA130
namespace gamemd {
void VectorClass_ptr_TeamClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4EA160
namespace gamemd {
int VectorClass_ptr_TeamClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EA1A0
namespace gamemd {
unsigned int VectorClass_ptr_TeamClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4EA1C0
namespace gamemd {
char VectorClass_ptr_TeamClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4EA270
namespace gamemd {
int VectorClass_ptr_TeamClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EA2A0
namespace gamemd {
char VectorClass_ptr_ThemeControl::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4EA2E0
namespace gamemd {
char VectorClass_ptr_ThemeControl::Remove(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->ddtor();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4EA390
namespace gamemd {
void VectorClass_ptr_ThemeControl::ddtor()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4EA3C0
namespace gamemd {
int VectorClass_ptr_ThemeControl::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EA400
namespace gamemd {
unsigned int VectorClass_ptr_ThemeControl::Get(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4EA420
namespace gamemd {
char VectorClass_ptr_TriggerClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4EA460
namespace gamemd {
char VectorClass_ptr_TriggerClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4EA510
namespace gamemd {
void VectorClass_ptr_TriggerClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4EA540
namespace gamemd {
int VectorClass_ptr_TriggerClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EA580
namespace gamemd {
unsigned int VectorClass_ptr_TriggerClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4EA5A0
namespace gamemd {
char VectorClass_ptr_AITriggerTypeClass::SetCapacity_0(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4EA650
namespace gamemd {
int VectorClass_ptr_AITriggerTypeClass::FindItemIndex_0(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EA680
namespace gamemd {
char VectorClass_ptr_TriggerTypeClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4EA6C0
namespace gamemd {
char VectorClass_ptr_TriggerTypeClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4EA770
namespace gamemd {
void VectorClass_ptr_TriggerTypeClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4EA7A0
namespace gamemd {
int VectorClass_ptr_TriggerTypeClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EA7E0
namespace gamemd {
unsigned int VectorClass_ptr_TriggerTypeClass::LoadTypeData(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4EA800
namespace gamemd {
char VectorClass_ptr_AITriggerTypeClass::SetCapacity_1(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4EA8B0
namespace gamemd {
int VectorClass_ptr_AITriggerTypeClass::FindItemIndex_1(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EA8E0
namespace gamemd {
char VectorClass_ptr_TubeClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4EA920
namespace gamemd {
char VectorClass_ptr_TubeClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4EA9D0
namespace gamemd {
void VectorClass_ptr_TubeClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4EAA00
namespace gamemd {
int VectorClass_ptr_TubeClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EAA40
namespace gamemd {
unsigned int VectorClass_ptr_TubeClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4EAA60
namespace gamemd {
char VectorClass_ptr_TubeClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4EAB10
namespace gamemd {
int VectorClass_ptr_TubeClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EAB40
namespace gamemd {
char VectorClass_ptr_ParticleSystemClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4EAB80
namespace gamemd {
char VectorClass_ptr_ParticleSystemClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4EAC30
namespace gamemd {
void VectorClass_ptr_ParticleSystemClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4EAC60
namespace gamemd {
int VectorClass_ptr_ParticleSystemClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EACA0
namespace gamemd {
unsigned int VectorClass_ptr_ParticleSystemClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4EACC0
namespace gamemd {
char VectorClass_ptr_BuildingLightClass::SetCapacity_0(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4EAD70
namespace gamemd {
int VectorClass_ptr_BuildingLightClass::FindItemIndex_0(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EADA0
namespace gamemd {
char VectorClass_ptr_WaveClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4EADE0
namespace gamemd {
char VectorClass_ptr_WaveClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4EAE90
namespace gamemd {
void VectorClass_ptr_WaveClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4EAEC0
namespace gamemd {
int VectorClass_ptr_WaveClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EAF00
namespace gamemd {
unsigned int VectorClass_ptr_WaveClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4EAF20
namespace gamemd {
char VectorClass_ptr_TubeClass::SetCapacity_0(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4EAFD0
namespace gamemd {
int VectorClass_ptr_TubeClass::FindItemIndex_0(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EB000
namespace gamemd {
char VectorClass_ptr_OverlayClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4EB040
namespace gamemd {
char VectorClass_ptr_OverlayClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4EB0F0
namespace gamemd {
void VectorClass_ptr_OverlayClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4EB120
namespace gamemd {
int VectorClass_ptr_OverlayClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EB160
namespace gamemd {
unsigned int VectorClass_ptr_OverlayClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4EB180
namespace gamemd {
char VectorClass_ptr_TubeClass::SetCapacity_1(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4EB230
namespace gamemd {
int VectorClass_ptr_TubeClass::FindItemIndex_1(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EB720
namespace gamemd {
char VectorClass_ptr_AircraftClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4EB760
namespace gamemd {
char VectorClass_ptr_AircraftClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4EB810
namespace gamemd {
void VectorClass_ptr_AircraftClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4EB840
namespace gamemd {
int VectorClass_ptr_AircraftClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EB880
namespace gamemd {
unsigned int VectorClass_ptr_AircraftClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4EB980
namespace gamemd {
char VectorClass_ptr_UnitClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4EB9C0
namespace gamemd {
char VectorClass_ptr_UnitClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4EBA70
namespace gamemd {
void VectorClass_ptr_UnitClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4EBAA0
namespace gamemd {
int VectorClass_ptr_UnitClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EBAE0
namespace gamemd {
unsigned int VectorClass_ptr_UnitClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4EBB00
namespace gamemd {
char VectorClass_ptr_UnitClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4EBBB0
namespace gamemd {
int VectorClass_ptr_UnitClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EBBE0
namespace gamemd {
char VectorClass_ptr_HouseClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4EBC20
namespace gamemd {
char VectorClass_ptr_HouseClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4EBCD0
namespace gamemd {
void VectorClass_ptr_HouseClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4EBD00
namespace gamemd {
int VectorClass_ptr_HouseClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EBD40
namespace gamemd {
unsigned int VectorClass_ptr_HouseClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4EBD60
namespace gamemd {
char VectorClass_ptr_UnitClass::SetCapacity_0(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4EBE10
namespace gamemd {
int VectorClass_ptr_UnitClass::FindItemIndex_0(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EBE40
namespace gamemd {
char VectorClass_ptr_AnimClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4EBE80
namespace gamemd {
char VectorClass_ptr_AnimClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4EBF30
namespace gamemd {
void VectorClass_ptr_AnimClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4EBF60
namespace gamemd {
int VectorClass_ptr_AnimClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EBFA0
unsigned int VectorClass::GetIndex(int a2)
{
if ( this->IsInitialized )
    return (unsigned int)((char *)a2 - (char *)this->Items) >> 2;
else
    return 0;
}

// 0x4EBFC0
namespace gamemd {
char VectorClass_ptr_TeamClass::SetCapacity_0(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4EC070
namespace gamemd {
int VectorClass_ptr_TeamClass::FindItemIndex_0(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EC0A0
namespace gamemd {
char VectorClass_ptr_FactoryClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4EC0E0
namespace gamemd {
char VectorClass_ptr_FactoryClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4EC190
namespace gamemd {
void VectorClass_ptr_FactoryClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4EC1C0
namespace gamemd {
int VectorClass_ptr_FactoryClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EC200
namespace gamemd {
unsigned int VectorClass_ptr_FactoryClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4EC220
namespace gamemd {
char VectorClass_ptr_TeamClass::SetCapacity_1(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4EC2D0
namespace gamemd {
int VectorClass_ptr_TeamClass::FindItemIndex_1(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EC300
namespace gamemd {
char VectorClass_ptr_CampaignClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4EC340
namespace gamemd {
char VectorClass_ptr_CampaignClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4EC3F0
namespace gamemd {
void VectorClass_ptr_CampaignClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4EC420
namespace gamemd {
int VectorClass_ptr_CampaignClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EC460
namespace gamemd {
unsigned int VectorClass_ptr_CampaignClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4EC480
namespace gamemd {
char VectorClass_ptr_CampaignClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4EC530
namespace gamemd {
int VectorClass_ptr_CampaignClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EC560
namespace gamemd {
char VectorClass_ptr_SideClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4EC5A0
namespace gamemd {
char VectorClass_ptr_SideClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4EC650
namespace gamemd {
void VectorClass_ptr_SideClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4EC680
namespace gamemd {
int VectorClass_ptr_SideClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EC6C0
namespace gamemd {
unsigned int VectorClass_ptr_SideClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4EC6E0
namespace gamemd {
char VectorClass_ptr_CampaignClass::SetCapacity_0(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4EC790
namespace gamemd {
int VectorClass_ptr_CampaignClass::FindItemIndex_0(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EC7C0
namespace gamemd {
char VectorClass_ptr_HouseTypeClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4EC800
namespace gamemd {
char VectorClass_ptr_HouseTypeClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4EC8B0
namespace gamemd {
void VectorClass_ptr_HouseTypeClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4EC8E0
namespace gamemd {
int VectorClass_ptr_HouseTypeClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EC920
namespace gamemd {
unsigned int VectorClass_ptr_HouseTypeClass::LoadTypeData(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4EC940
namespace gamemd {
char VectorClass_ptr_HouseTypeClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4EC9F0
namespace gamemd {
int VectorClass_ptr_HouseTypeClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4ECA20
namespace gamemd {
char VectorClass_ptr_TaskForceClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4ECA60
namespace gamemd {
char VectorClass_ptr_TaskForceClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4ECB10
namespace gamemd {
void VectorClass_ptr_TaskForceClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4ECB40
namespace gamemd {
int VectorClass_ptr_TaskForceClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4ECB80
namespace gamemd {
unsigned int VectorClass_ptr_TaskForceClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4ECBA0
namespace gamemd {
char VectorClass_ptr_HouseTypeClass::SetCapacity_0(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4ECC50
namespace gamemd {
int VectorClass_ptr_HouseTypeClass::FindItemIndex_0(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4ECC80
namespace gamemd {
char VectorClass_ptr_TeamTypeClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4ECCC0
namespace gamemd {
char VectorClass_ptr_TeamTypeClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4ECD70
namespace gamemd {
void VectorClass_ptr_TeamTypeClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4ECDA0
namespace gamemd {
int VectorClass_ptr_TeamTypeClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4ECDE0
namespace gamemd {
unsigned int VectorClass_ptr_TeamTypeClass::LoadTypeData(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4ECE00
namespace gamemd {
char VectorClass_ptr_HouseTypeClass::SetCapacity_1(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4ECEB0
namespace gamemd {
int VectorClass_ptr_HouseTypeClass::FindItemIndex_1(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4ECEE0
namespace gamemd {
char VectorClass_ptr_ScriptTypeClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4ECF20
namespace gamemd {
char VectorClass_ptr_ScriptTypeClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4ECFD0
namespace gamemd {
void VectorClass_ptr_ScriptTypeClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4ED000
namespace gamemd {
int VectorClass_ptr_ScriptTypeClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4ED040
namespace gamemd {
unsigned int VectorClass_ptr_ScriptTypeClass::LoadTypeData(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4ED060
namespace gamemd {
char VectorClass_ptr_ScriptTypeClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4ED110
namespace gamemd {
int VectorClass_ptr_ScriptTypeClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4ED140
namespace gamemd {
char VectorClass_ptr_OverlayTypeClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4ED180
namespace gamemd {
char VectorClass_ptr_OverlayTypeClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4ED230
namespace gamemd {
void VectorClass_ptr_OverlayTypeClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4ED260
namespace gamemd {
int VectorClass_ptr_OverlayTypeClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4ED2A0
namespace gamemd {
unsigned int VectorClass_ptr_OverlayTypeClass::LoadTypeData(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4ED2C0
namespace gamemd {
char VectorClass_ptr_ScriptTypeClass::SetCapacity_0(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4ED370
namespace gamemd {
int VectorClass_ptr_ScriptTypeClass::FindItemIndex_0(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4ED3A0
namespace gamemd {
char VectorClass_ptr_SmudgeTypeClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4ED3E0
namespace gamemd {
char VectorClass_ptr_SmudgeTypeClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4ED490
namespace gamemd {
void VectorClass_ptr_SmudgeTypeClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4ED4C0
namespace gamemd {
int VectorClass_ptr_SmudgeTypeClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4ED500
namespace gamemd {
unsigned int VectorClass_ptr_SmudgeTypeClass::LoadTypeData(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4ED520
namespace gamemd {
char VectorClass_ptr_SmudgeTypeClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4ED5D0
namespace gamemd {
int VectorClass_ptr_SmudgeTypeClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4ED600
namespace gamemd {
char VectorClass_ptr_TerrainTypeClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4ED640
namespace gamemd {
char VectorClass_ptr_TerrainTypeClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4ED6F0
namespace gamemd {
void VectorClass_ptr_TerrainTypeClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4ED720
namespace gamemd {
int VectorClass_ptr_TerrainTypeClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4ED760
namespace gamemd {
unsigned int VectorClass_ptr_TerrainTypeClass::LoadTypeData(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4ED780
namespace gamemd {
char VectorClass_ptr_SmudgeTypeClass::SetCapacity_0(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4ED830
namespace gamemd {
int VectorClass_ptr_SmudgeTypeClass::FindItemIndex_0(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4ED860
namespace gamemd {
char VectorClass_ptr_BuildingTypeClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4ED8A0
namespace gamemd {
char VectorClass_ptr_BuildingTypeClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->Items = 0;
        }
      }
    this->Items = v4;
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Cleanup4();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4ED950
void VectorClass::Cleanup4()
{
if ( this->Items && this->IsAllocated )
{
    operator delete(this->Items);
    this->Items = 0;
}
this->IsAllocated = 0;
this->Capacity = 0;
}

// 0x4ED980
namespace gamemd {
int VectorClass_ptr_BuildingTypeClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4ED9C0
namespace gamemd {
unsigned int VectorClass_ptr_BuildingTypeClass::Remove(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4ED9E0
namespace gamemd {
char VectorClass_ptr_SmudgeTypeClass::SetCapacity_1(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4EDA90
namespace gamemd {
int VectorClass_ptr_SmudgeTypeClass::FindItemIndex_1(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EDAC0
namespace gamemd {
char VectorClass_ptr_AircraftTypeClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4EDB00
namespace gamemd {
char VectorClass_ptr_AircraftTypeClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4EDBB0
namespace gamemd {
void VectorClass_ptr_AircraftTypeClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4EDBE0
namespace gamemd {
int VectorClass_ptr_AircraftTypeClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EDC20
namespace gamemd {
unsigned int VectorClass_ptr_AircraftTypeClass::LoadTypeData(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4EDC40
namespace gamemd {
char VectorClass_ptr_AircraftTypeClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4EDCF0
namespace gamemd {
int VectorClass_ptr_AircraftTypeClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EDD20
namespace gamemd {
char VectorClass_ptr_UnitTypeClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4EDD60
namespace gamemd {
char VectorClass_ptr_UnitTypeClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4EDE10
namespace gamemd {
void VectorClass_ptr_UnitTypeClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4EDE40
namespace gamemd {
int VectorClass_ptr_UnitTypeClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EDE80
namespace gamemd {
unsigned int VectorClass_ptr_UnitTypeClass::LoadTypeData(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4EDEA0
namespace gamemd {
char VectorClass_ptr_AircraftTypeClass::SetCapacity_0(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4EDF50
namespace gamemd {
int VectorClass_ptr_AircraftTypeClass::FindItemIndex_0(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EDF80
namespace gamemd {
char VectorClass_ptr_AnimTypeClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4EDFC0
namespace gamemd {
char VectorClass_ptr_AnimTypeClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4EE070
namespace gamemd {
void VectorClass_ptr_AnimTypeClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4EE0A0
namespace gamemd {
int VectorClass_ptr_AnimTypeClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EE0E0
namespace gamemd {
unsigned int VectorClass_ptr_AnimTypeClass::LoadTypeData(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4EE100
namespace gamemd {
char VectorClass_ptr_AnimTypeClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4EE1B0
namespace gamemd {
int VectorClass_ptr_AnimTypeClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EE1E0
namespace gamemd {
char VectorClass_ptr_InfantryTypeClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4EE220
namespace gamemd {
char VectorClass_ptr_InfantryTypeClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4EE2D0
namespace gamemd {
void VectorClass_ptr_InfantryTypeClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4EE300
namespace gamemd {
int VectorClass_ptr_InfantryTypeClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EE340
namespace gamemd {
unsigned int VectorClass_ptr_InfantryTypeClass::LoadTypeData(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4EE360
namespace gamemd {
char VectorClass_ptr_AnimTypeClass::SetCapacity_0(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4EE410
namespace gamemd {
int VectorClass_ptr_AnimTypeClass::FindItemIndex_0(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EE440
namespace gamemd {
char VectorClass_ptr_BulletTypeClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4EE480
namespace gamemd {
char VectorClass_ptr_BulletTypeClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4EE530
namespace gamemd {
void VectorClass_ptr_BulletTypeClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4EE560
namespace gamemd {
int VectorClass_ptr_BulletTypeClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EE5A0
namespace gamemd {
unsigned int VectorClass_ptr_BulletTypeClass::LoadTypeData(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4EE5C0
namespace gamemd {
char VectorClass_ptr_AnimTypeClass::SetCapacity_1(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4EE670
namespace gamemd {
int VectorClass_ptr_AnimTypeClass::FindItemIndex_1(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EE6A0
namespace gamemd {
char VectorClass_ptr_VoxelAnimTypeClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4EE6E0
namespace gamemd {
char VectorClass_ptr_VoxelAnimTypeClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4EE790
namespace gamemd {
void VectorClass_ptr_VoxelAnimTypeClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4EE7C0
namespace gamemd {
int VectorClass_ptr_VoxelAnimTypeClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EE800
namespace gamemd {
unsigned int VectorClass_ptr_VoxelAnimTypeClass::LoadTypeData(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4EE820
namespace gamemd {
char VectorClass_ptr_VoxelAnimTypeClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4EE8D0
namespace gamemd {
int VectorClass_ptr_VoxelAnimTypeClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EE900
namespace gamemd {
char VectorClass_ptr_IsometricTileTypeClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4EE940
namespace gamemd {
char VectorClass_ptr_IsometricTileTypeClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4EE9F0
namespace gamemd {
void VectorClass_ptr_IsometricTileTypeClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4EEA20
namespace gamemd {
int VectorClass_ptr_IsometricTileTypeClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EEA60
namespace gamemd {
unsigned int VectorClass_ptr_IsometricTileTypeClass::LoadTypeData(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4EEA80
namespace gamemd {
char VectorClass_ptr_VoxelAnimTypeClass::SetCapacity_0(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4EEB30
namespace gamemd {
int VectorClass_ptr_VoxelAnimTypeClass::FindItemIndex_0(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EEB60
namespace gamemd {
char VectorClass_ptr_ParticleTypeClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4EEBA0
namespace gamemd {
char VectorClass_ptr_ParticleTypeClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4EEC50
namespace gamemd {
void VectorClass_ptr_ParticleTypeClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4EEC80
namespace gamemd {
int VectorClass_ptr_ParticleTypeClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EECC0
namespace gamemd {
unsigned int VectorClass_ptr_ParticleTypeClass::LoadTypeData(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4EECE0
namespace gamemd {
char VectorClass_ptr_ParticleTypeClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4EED90
namespace gamemd {
int VectorClass_ptr_ParticleTypeClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EEDC0
namespace gamemd {
char VectorClass_ptr_ParticleSystemTypeClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4EEE00
namespace gamemd {
char VectorClass_ptr_ParticleSystemTypeClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4EEEB0
namespace gamemd {
void VectorClass_ptr_ParticleSystemTypeClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4EEEE0
namespace gamemd {
int VectorClass_ptr_ParticleSystemTypeClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EEF20
namespace gamemd {
unsigned int VectorClass_ptr_ParticleSystemTypeClass::LoadTypeData(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4EEF40
namespace gamemd {
char VectorClass_ptr_ParticleTypeClass::SetCapacity_0(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4EEFF0
namespace gamemd {
int VectorClass_ptr_ParticleTypeClass::FindItemIndex_0(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EF020
namespace gamemd {
char VectorClass_ptr_SuperWeaponTypeClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4EF060
namespace gamemd {
char VectorClass_ptr_SuperWeaponTypeClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4EF110
namespace gamemd {
void VectorClass_ptr_SuperWeaponTypeClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4EF140
namespace gamemd {
int VectorClass_ptr_SuperWeaponTypeClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EF180
namespace gamemd {
unsigned int VectorClass_ptr_SuperWeaponTypeClass::LoadTypeData(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4EF1A0
namespace gamemd {
char VectorClass_ptr_ParticleTypeClass::SetCapacity_1(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4EF250
namespace gamemd {
int VectorClass_ptr_ParticleTypeClass::FindItemIndex_1(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EF280
namespace gamemd {
char VectorClass_ptr_AbstractTypeClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4EF2C0
namespace gamemd {
char VectorClass_ptr_AbstractTypeClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4EF370
namespace gamemd {
void VectorClass_ptr_AbstractTypeClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4EF3A0
namespace gamemd {
int VectorClass_ptr_AbstractTypeClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EF3E0
namespace gamemd {
unsigned int VectorClass_ptr_AbstractTypeClass::LoadTypeData(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4EF400
namespace gamemd {
char VectorClass_ptr_SuperClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Remove();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4EF4B0
namespace gamemd {
int VectorClass_ptr_SuperClass::FindItemIndex_0(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4EF580
namespace gamemd {
VectorClass * VectorClass_Building::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_BuildingClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4EF620
namespace gamemd {
VectorClass * VectorClass_ptr_SuperClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_SuperClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4EF670
namespace gamemd {
DynamicVector * VectorClass_ptr_SuperClass::Constructor_VectorClass_SuperClass___(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_SuperClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x4EF6C0
namespace gamemd {
VectorClass * VectorClass_ptr_AITriggerTypeClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_AITriggerTypeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4EF710
namespace gamemd {
DynamicVector * VectorClass_ptr_AITriggerTypeClass::Constructor_VectorClass_AITriggerTypeClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_AITriggerTypeClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x4EF760
namespace gamemd {
VectorClass * VectorClass_ptr_BuildingLightClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_BuildingLightClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4EF7B0
namespace gamemd {
DynamicVector * VectorClass_ptr_BuildingLightClass::Constructor_VectorClass_BuildingLightClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_BuildingLightClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x4EF8A0
namespace gamemd {
VectorClass * VectorClass_ptr_TeamClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_TeamClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4EF8F0
namespace gamemd {
DynamicVector * VectorClass_ptr_TeamClass::Constructor_VectorClass_TeamClass___(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_TeamClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x4EF940
namespace gamemd {
VectorClass * VectorClass_ptr_ThemeControl::Add(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_ThemeControl;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4EF990
namespace gamemd {
VectorClass * VectorClass_ptr_TriggerClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_TriggerClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4EF9E0
namespace gamemd {
DynamicVector * VectorClass_ptr_AITriggerTypeClass::Constructor_VectorClass_TriggerClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_TriggerClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x4EFA30
namespace gamemd {
VectorClass * VectorClass_ptr_TriggerTypeClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_TriggerTypeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4EFA80
namespace gamemd {
DynamicVector * VectorClass_ptr_AITriggerTypeClass::Constructor_VectorClass_TriggerTypeClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_TriggerTypeClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x4EFAD0
namespace gamemd {
VectorClass * VectorClass_ptr_TubeClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_TubeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4EFB20
namespace gamemd {
DynamicVector * VectorClass_ptr_TubeClass::Constructor_VectorClass_TubeClass___(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_TubeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x4EFB70
namespace gamemd {
VectorClass * VectorClass_ptr_ParticleSystemClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_ParticleSystemClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4EFBC0
namespace gamemd {
DynamicVector * VectorClass_ptr_BuildingLightClass::Constructor_VectorClass_ParticleSystemClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_ParticleSystemClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x4EFC10
namespace gamemd {
VectorClass * VectorClass_ptr_WaveClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_WaveClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4EFC60
namespace gamemd {
DynamicVector * VectorClass_ptr_TubeClass::Constructor_VectorClass_WaveClass___(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_WaveClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x4EFCB0
namespace gamemd {
VectorClass * VectorClass_ptr_OverlayClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_OverlayClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4EFD00
namespace gamemd {
DynamicVector * VectorClass_ptr_TubeClass::Constructor_VectorClass_OverlayClass___(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_OverlayClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x4EFE90
namespace gamemd {
VectorClass * VectorClass_ptr_AircraftClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_AircraftClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4EFF30
namespace gamemd {
VectorClass * VectorClass_ptr_UnitClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_UnitClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4EFF80
namespace gamemd {
DynamicVector * VectorClass_ptr_UnitClass::Constructor_VectorClass_UnitClass___(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_UnitClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x4EFFD0
namespace gamemd {
VectorClass * VectorClass_ptr_HouseClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_HouseClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4F0020
namespace gamemd {
DynamicVector * VectorClass_ptr_UnitClass::Constructor_VectorClass_HouseClass___(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_HouseClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x4F0070
namespace gamemd {
VectorClass * VectorClass_ptr_AnimClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_AnimClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4F00C0
namespace gamemd {
DynamicVector * VectorClass_ptr_TeamClass::Constructor_VectorClass_AnimClass___(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_AnimClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x4F0110
namespace gamemd {
VectorClass * VectorClass_ptr_FactoryClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_FactoryClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4F0160
namespace gamemd {
DynamicVector * VectorClass_ptr_TeamClass::Constructor_VectorClass_FactoryClass___(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_FactoryClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x4F01B0
namespace gamemd {
VectorClass * VectorClass_ptr_CampaignClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_CampaignClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4F0200
namespace gamemd {
DynamicVector * VectorClass_ptr_CampaignClass::Constructor_VectorClass_CampaignClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_CampaignClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x4F0250
namespace gamemd {
VectorClass * VectorClass_ptr_SideClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_SideClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4F02A0
namespace gamemd {
DynamicVector * VectorClass_ptr_CampaignClass::Constructor_VectorClass_SideClass___(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_SideClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x4F02F0
namespace gamemd {
VectorClass * VectorClass_ptr_HouseTypeClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_HouseTypeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4F0340
namespace gamemd {
DynamicVector * VectorClass_ptr_HouseTypeClass::Constructor_VectorClass_HouseTypeClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_HouseTypeClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x4F0390
namespace gamemd {
VectorClass * VectorClass_ptr_TaskForceClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_TaskForceClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4F03E0
namespace gamemd {
DynamicVector * VectorClass_ptr_HouseTypeClass::Constructor_VectorClass_TaskForceClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_TaskForceClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x4F0430
namespace gamemd {
VectorClass * VectorClass_ptr_TeamTypeClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_TeamTypeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4F0480
namespace gamemd {
DynamicVector * VectorClass_ptr_HouseTypeClass::Constructor_VectorClass_TeamTypeClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_TeamTypeClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x4F04D0
namespace gamemd {
VectorClass * VectorClass_ptr_ScriptTypeClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_ScriptTypeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4F0520
namespace gamemd {
DynamicVector * VectorClass_ptr_ScriptTypeClass::Constructor_VectorClass_ScriptTypeClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_ScriptTypeClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x4F0570
namespace gamemd {
VectorClass * VectorClass_ptr_OverlayTypeClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_OverlayTypeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4F05C0
namespace gamemd {
DynamicVector * VectorClass_ptr_ScriptTypeClass::Constructor_VectorClass_OverlayTypeClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_OverlayTypeClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x4F0610
namespace gamemd {
VectorClass * VectorClass_ptr_SmudgeTypeClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_SmudgeTypeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4F0660
namespace gamemd {
DynamicVector * VectorClass_ptr_SmudgeTypeClass::Constructor_VectorClass_SmudgeTypeClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_SmudgeTypeClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x4F06B0
namespace gamemd {
VectorClass * VectorClass_ptr_TerrainTypeClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_TerrainTypeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4F0700
namespace gamemd {
DynamicVector * VectorClass_ptr_SmudgeTypeClass::Constructor_VectorClass_TerrainTypeClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_TerrainTypeClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x4F0750
namespace gamemd {
VectorClass * VectorClass_ptr_BuildingTypeClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_BuildingTypeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4F07A0
namespace gamemd {
DynamicVector * VectorClass_ptr_SmudgeTypeClass::Constructor_VectorClass_BuildingTypeClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_BuildingTypeClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x4F07F0
namespace gamemd {
VectorClass * VectorClass_ptr_AircraftTypeClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_AircraftTypeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4F0840
namespace gamemd {
DynamicVector * VectorClass_ptr_AircraftTypeClass::Constructor_VectorClass_AircraftTypeClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_AircraftTypeClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x4F0890
namespace gamemd {
VectorClass * VectorClass_ptr_UnitTypeClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_UnitTypeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4F08E0
namespace gamemd {
DynamicVector * VectorClass_ptr_AircraftTypeClass::Constructor_VectorClass_UnitTypeClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_UnitTypeClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x4F0930
namespace gamemd {
VectorClass * VectorClass_ptr_AnimTypeClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_AnimTypeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4F0980
namespace gamemd {
DynamicVector * VectorClass_ptr_AnimTypeClass::Constructor_VectorClass_AnimTypeClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_AnimTypeClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x4F09D0
namespace gamemd {
VectorClass * VectorClass_ptr_InfantryTypeClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_InfantryTypeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4F0A20
namespace gamemd {
DynamicVector * VectorClass_ptr_AnimTypeClass::Constructor_VectorClass_InfantryTypeClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_InfantryTypeClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x4F0A70
namespace gamemd {
VectorClass * VectorClass_ptr_BulletTypeClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_BulletTypeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4F0AC0
namespace gamemd {
DynamicVector * VectorClass_ptr_AnimTypeClass::Constructor_VectorClass_BulletTypeClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_BulletTypeClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x4F0B10
namespace gamemd {
VectorClass * VectorClass_ptr_VoxelAnimTypeClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_VoxelAnimTypeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4F0B60
namespace gamemd {
DynamicVector * VectorClass_ptr_VoxelAnimTypeClass::Constructor_VectorClass_VoxelAnimTypeClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_VoxelAnimTypeClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x4F0BB0
namespace gamemd {
VectorClass * VectorClass_ptr_IsometricTileTypeClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_IsometricTileTypeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4F0C00
namespace gamemd {
DynamicVector * VectorClass_ptr_VoxelAnimTypeClass::Constructor_VectorClass_IsometricTileTypeClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_IsometricTileTypeClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x4F0C50
namespace gamemd {
VectorClass * VectorClass_ptr_ParticleTypeClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_ParticleTypeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4F0CA0
namespace gamemd {
DynamicVector * VectorClass_ptr_ParticleTypeClass::Constructor_VectorClass_ParticleTypeClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_ParticleTypeClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x4F0CF0
namespace gamemd {
VectorClass * VectorClass_ptr_ParticleSystemTypeClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_ParticleSystemTypeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4F0D40
namespace gamemd {
DynamicVector * VectorClass_ptr_ParticleTypeClass::Constructor_VectorClass_ParticleSystemTypeClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_ParticleSystemTypeClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x4F0D90
namespace gamemd {
VectorClass * VectorClass_ptr_SuperWeaponTypeClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_SuperWeaponTypeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4F0DE0
namespace gamemd {
DynamicVector * VectorClass_ptr_ParticleTypeClass::Constructor_VectorClass_SuperWeaponTypeClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_SuperWeaponTypeClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x4F0E30
namespace gamemd {
VectorClass * VectorClass_ptr_AbstractTypeClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_AbstractTypeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x4F0E80
namespace gamemd {
DynamicVector * VectorClass_ptr_SuperClass::Constructor_VectorClass_AbstractTypeClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_AbstractTypeClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x4F6910
namespace gamemd {
bool VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItemIndex(int a1)
{
{
    return *(int*)(a1 + 21372) >= *(int*)(a1 + 21376);
}
}
} // namespace gamemd

// 0x4F6930
namespace gamemd {
void * VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItemIndex_0(int a2)
{
{
    void *v3;
    v3 = this;
    sub_429360((int)&punk, &DataGlobal_7E36C0, &v3);
    return v3;
}
}
} // namespace gamemd

// 0x4F6950
namespace gamemd {
BSTR VectorClass_ptr_BuildChoiceClass_int_ouseClass::FindItemIndex(int a1)
{
{
    WCHAR WideCharStr[32];
    MultiByteToWideChar(0, 1u, (LPCCH)(*(int*)(a1 + 16) + 100), -1, WideCharStr, 32);
    return SysAllocString(WideCharStr);
}
}
} // namespace gamemd

// 0x4F6990
namespace gamemd {
long long VectorClass_ptr_BuildChoiceClass_int_ouseClass::FindItemIndex_0(int a1)
{
{
    float v3;
    int TotalValue;
    v3 = *(float*)(*(int*)(a1 + 16) + 328);
    TotalValue = AbstractClass::GetTotalValue((float*)(a1 + 728));
    return Math::RoundToInt((double)TotalValue * v3 + (double)*(int*)(a1 + 744));
}
}
} // namespace gamemd

// 0x4F69D0
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::Destroy(int a1)
{
{
    double v1;
    v1 = Float4::Sum((float*)(a1 + 728));
    return *(int*)(a1 + 748) - Math::RoundToInt(v1);
}
}
} // namespace gamemd

// 0x4F6A00
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem(int a1)
{
{
    return *(int*)(a1 + 21376);
}
}
} // namespace gamemd

// 0x4F6A10
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_0(int a1)
{
{
    return *(int*)(a1 + 21380);
}
}
} // namespace gamemd

// 0x4F6E60
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_1(int a1)
{
{
    return *(int*)(a1 + 12);
}
}
} // namespace gamemd

// 0x5013A0
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::ScalarDeletingDestructor(unsigned int * a1)
{
{
    int v1;
    int i;
    int v3;
    if ( (int)*((int*)(a1) + 179) <= 0 )
    return 1;
    v1 = *((int*)(a1) + 21);
    for ( i = 0; i < v1; ++i )
  {
    v3 = *(int*)(*((int*)(a1) + 18) + 4 * i);
    if ( v3 && !*(char*)(v3 + 129) && *(int*)(v3 + 108) > 0 )
    ((void (__thiscall **)(int, int)))(*(int*)(v3) + 416);
  }
    return 0;
}
}
} // namespace gamemd

// 0x5024F0
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::StubReturnNullPointer(int a1, unsigned int * a2)
{
{
    int *v3;
    int *v4;
    int *v5;
    if ( !a2 )
    return -2147467261;
    v3 = __2_YAPAXI_Z(0x24u);
    if ( !v3 )
    return -2147024882;
    v4 = VectorClass_ptr_BuildChoiceClass_int_ouseClass::Constructor(v3, (int*)(a1 + 90168));
    v5 = v4;
    if ( !v4 )
    return -2147024882;
    ((void (__stdcall **)(int *)))(*v4 + 4);
    *a2 = v5;
    return 0;
}
}
} // namespace gamemd

// 0x502550
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::StubReturnNullPointer_0(int a1, const void * a2, unsigned int * a3)
{
{
    int v4;
    int v5;
    char v6[16];
    if ( !a3 )
    return -2147467261;
    *a3 = 0;
    v4 = 0;
    if ( *(int *)(a1 + 90184) <= 0 )
    return -2147220990;
    while ( 1 )
  {
    v5 = *(int *)(*(int *)(a1 + 90172) + 4 * v4);
    (*(void (__stdcall **)(int, char *))(*(int *)(v5) + 12))(v5, v6);
    if ( !memcmp(v6, a2, 0x10u) )
    break;
    if ( ++v4 >= *(int *)(a1 + 90184) )
    return -2147220990;
  }
    *a3 = v5;
    (*(void (__stdcall **)(int))(*(int *)(v5) + 4))(v5);
    return 0;
}
}
} // namespace gamemd

// 0x50E4A0
namespace gamemd {
void VectorClass_UScoutStruct___33::ddtor()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x50E4D0
namespace gamemd {
unsigned int VectorClass_UScoutStruct___33::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x50E4F0
namespace gamemd {
int VectorClass_BuildingType::Count(int a2)
{
return this->Items[a2];
}
} // namespace gamemd

// 0x50E500
namespace gamemd {
void VectorClass_UAngerStruct::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x50E530
namespace gamemd {
unsigned int VectorClass_UAngerStruct::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x50E550
namespace gamemd {
int VectorClass_UAngerStruct___16::Clear(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x50E560
namespace gamemd {
void VectorClass_UAngerStruct::Destroy_0()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x50E590
namespace gamemd {
unsigned int VectorClass_UAngerStruct::GetItemIndex_0(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 3;
    else
    return 0;
}
}
} // namespace gamemd

// 0x50E5B0
namespace gamemd {
unsigned int * VectorClass_UAngerStruct::Clear(unsigned int * a2, int a3)
{
{
    int v3;
    int v4;
    int v5;
    v3 = this->Items;
    v4 = *(int*)(v3 + 8 * a3);
    v5 = v3 + 8 * a3;
    *a2 = v4;
    *((int*)(a2) + 1) = *(int*)(v5 + 4);
    return a2;
}
}
} // namespace gamemd

// 0x50E620
namespace gamemd {
int VectorClass_UScoutStruct::Clear(int a2, int a3)
{
{
    int v3;
    int v4;
    int v5;
    v3 = this->Items;
    v4 = *(int*)(v3 + 8 * a3);
    v5 = v3 + 8 * a3;
    *(int*)a2 = v4;
    *(char*)(a2 + 4) = *(char*)(v5 + 4);
    return a2;
}
}
} // namespace gamemd

// 0x50E640
namespace gamemd {
void VectorClass_ptr_BuildChoiceClass_int_ouseClass::Destroy_0()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x50E670
namespace gamemd {
unsigned int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItemIndex_1(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x50E690
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x50E6A0
namespace gamemd {
void VectorClass_BuildingType::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x50E6D0
namespace gamemd {
unsigned int VectorClass_BuildingType::GetItemIndex(int a2)
{
if ( this->IsInitialized )
    return (unsigned int)((char *)a2 - (char *)this->Items) >> 2;
else
    return 0;
}
} // namespace gamemd

// 0x50E6F0
namespace gamemd {
int VectorClass_BuildingType::GetElement(int a2)
{
return this->Items[a2];
}
} // namespace gamemd

// 0x50E700
namespace gamemd {
void VectorClass__N::Destroy()
{
void* items = this->Items;
this->Count = 0;
if ( items && this->IsAllocated )
{
    operator delete(items);
    this->Items = 0;
}
this->IsAllocated = 0;
this->Capacity = 0;
}
} // namespace gamemd

// 0x50E730
namespace gamemd {
int VectorClass__N::GetItemIndex(int a2)
{
if ( this->IsInitialized )
    return a2 - this->Items;
else
    return 0;
}
} // namespace gamemd

// 0x50E750
namespace gamemd {
char VectorClass__N::Clear(int a2)
{
return this->Items[a2];
}
} // namespace gamemd

// 0x50E760
namespace gamemd {
void VectorClass__N_18::Destroy()
{
void* items = this->Items;
this->Count = 0;
if ( items && this->IsAllocated )
{
    operator delete((char *)items - 4);
    this->Items = 0;
}
this->IsAllocated = 0;
this->Capacity = 0;
}
} // namespace gamemd

// 0x50E7A0
namespace gamemd {
unsigned int VectorClass__N_18::GetItemIndex(int a2)
{
if ( this->IsInitialized )
    return (unsigned int)((char *)a2 - (char *)this->Items) >> 3;
else
    return 0;
}
} // namespace gamemd

// 0x50E7C0
namespace gamemd {
unsigned int * VectorClass__N_18::Clear(unsigned int * a2, int a3)
{
*a2 = *(unsigned int *)&this->Items[a3];
a2[1] = ((unsigned int *)&this->Items[a3])[1];
return a2;
}
} // namespace gamemd

// 0x50E7E0
namespace gamemd {
TypeList * VectorClass_BuildingType::Constructor(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_TeamTypeClass_const;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (TypeList *)Block;
}
}
} // namespace gamemd

// 0x50E8C0
namespace gamemd {
DynamicVector * VectorClass__N_18::Constructor(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_TeamTypeClass_const;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x50E910
namespace gamemd {
char VectorClass_BuildingType::AddRef(int a2)
{
VectorClass_BuildingType* other = (VectorClass_BuildingType *)a2;
int capacity = this->Capacity;
if ( capacity == other->Capacity )
{
    int i = 0;
    if ( capacity <= 0 )
        return 1;
    unsigned int* myItems = (unsigned int *)this->Items;
    unsigned int* otherItems = (unsigned int *)other->Items;
    while ( myItems[i] == otherItems[i] )
    {
        ++i;
        if ( i >= capacity )
            return 1;
    }
}
return 0;
}
} // namespace gamemd

// 0x50E950
namespace gamemd {
char VectorClass_BuildingType::Set(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x50EA30
namespace gamemd {
int VectorClass_BuildingType::GetSize(unsigned int * a2)
{
if ( !this->IsInitialized )
    return 0;
unsigned int* i = (unsigned int *)this->Items;
int capacity = this->Capacity;
int result = 0;
if ( capacity <= 0 )
    return -1;
while ( *i != *a2 )
{
    ++result;
    ++i;
    if ( result >= capacity )
        return -1;
}
return result;
}
} // namespace gamemd

// 0x50EA70
namespace gamemd {
unsigned int VectorClass_BuildingType::GetCapacity(int a2)
{
if ( this->IsInitialized )
    return (unsigned int)((char *)a2 - (char *)this->Items) >> 2;
else
    return 0;
}
} // namespace gamemd

// 0x50EB40
namespace gamemd {
int VectorClass_UScoutStruct___33::GetSize(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x50EB70
char VectorClass::InsertAt(IUnknown * aP1, int a3)
{
{
    int v4;
    int v5;
    int v7;
    int *v8;
    v4 = this->Capacity;
    if ( this->Count >= v4 )
  {
    if ( !this->IsAllocated && v4 )
    return 0;
    v5 = this->CapacityIncrement;
    if ( v5 <= 0 || !this->SetCapacity(v4 + v5, 0) )
    return 0;
  }
    v7 = this->Count;
    if ( a3 < v7 - 1 )
    memcpy( (void *)(this->Items + 16 * (a3 + 2)), (const void *)(this->Items + 16 * (a3 + 1)), 16 * (v7 + 0xFFFFFFF * (a3 + 1)));
    v8 = (int *)(this->Items + 16 * (a3 + 1));
    *v8 = aP1->field_0;
    v8[1] = aP1->field_4;
    v8[2] = aP1->field_8;
    v8[3] = aP1->field_C;
    ++this->Count;
    return 1;
}
}

// 0x50EC20
namespace gamemd {
char VectorClass_UAngerStruct___16::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x50EC60
namespace gamemd {
char VectorClass_UAngerStruct___16::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->ddtor();
    return 1;
  }
}
}
} // namespace gamemd

// 0x50ED10
namespace gamemd {
void VectorClass_UAngerStruct___16::ddtor()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x50ED40
namespace gamemd {
int VectorClass_UAngerStruct___16::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x50ED80
namespace gamemd {
unsigned int VectorClass_UAngerStruct___16::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x50EDA0
namespace gamemd {
char VectorClass_UAngerStruct::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy_0();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x50EE50
namespace gamemd {
int VectorClass_UAngerStruct::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x50EE80
namespace gamemd {
char VectorClass_UAngerStruct::AddRef(int a2)
{
{
    int v2;
    int v3;
    int v4;
    int *v5;
    int *v6;
    int v7;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = *(int*)(a2 + 4);
    v5 = (int*)this->Items;
    v6 = (int*)(v4 + 4);
    v7 = v4 - (int)v5;
    while ( *v5 == *(int*)((char*)(v5) + v7) && v5[1] == *v6 )
    {
    ++v3;
    v6 += 2;
    v5 += 2;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x50EEE0
namespace gamemd {
char VectorClass_UAngerStruct::Release(int a2, unsigned int * a3)
{
{
    int v3;
    int *v5;
    int *v6;
    int *v7;
    int v8;
    int *v9;
    int v10;
    int v12;
    int v13;
    int v14;
    int *v15;
    v3 = a2;
    if ( a2 )
  {
    v5 = a3;
    this->IsInitialized = 0;
    if ( a3 )
    {
    v9 = a3;
    if ( a2 - 1 >= 0 )
      {
    v10 = a2;
    do
        {
    *v9 = 0;
    v9[1] = 0;
    v9 += 2;
    --v10;
        }
    while ( v10 );
      }
    }
    else
    {
    v6 = __2_YAPAXI_Z(8 * a2);
    if ( v6 )
      {
    v7 = v6;
    if ( a2 - 1 >= 0 )
        {
    v8 = a2;
    do
          {
    *v7 = 0;
    v7[1] = 0;
    v7 += 2;
    --v8;
          }
    while ( v8 );
        }
    v5 = v6;
      }
    else
      {
    v5 = 0;
      }
    }
    this->IsInitialized = 1;
    if ( v5 )
    {
    if ( this->Items )
      {
    v12 = this->Capacity;
    if ( a2 < v12 )
    v12 = a2;
    v13 = 0;
    if ( v12 > 0 )
        {
    do
          {
    v14 = 2 * v13;
    v15 = (int*)(this->Items + 8 * v13++);
    v5[v14] = *v15;
    v5[v14 + 1] = v15[1];
          }
    while ( v13 < v12 );
    v3 = a2;
        }
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v5);
    this->Capacity = v3;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy_0();
    return 1;
  }
}
}
} // namespace gamemd

// 0x50EFD0
namespace gamemd {
void VectorClass_UAngerStruct::ddtor()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x50F000
namespace gamemd {
int VectorClass_UAngerStruct::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2 || i[1] != *((int*)(a2) + 1); i += 2 )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x50F050
namespace gamemd {
unsigned int VectorClass_UAngerStruct::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 3;
    else
    return 0;
}
}
} // namespace gamemd

// 0x50F070
namespace gamemd {
char VectorClass_UAngerStruct::SetCapacity_0(int a2, unsigned int * a3)
{
{
    int v3;
    int *v5;
    int *v6;
    int *v7;
    int v8;
    int *v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int *v14;
    int v15;
    v3 = a2;
    if ( a2 )
  {
    v5 = a3;
    this->IsInitialized = 0;
    if ( a3 )
    {
    v9 = a3;
    if ( a2 - 1 >= 0 )
      {
    v10 = a2;
    do
        {
    *v9 = 0;
    v9[1] = 0;
    v9 += 2;
    --v10;
        }
    while ( v10 );
      }
    }
    else
    {
    v6 = __2_YAPAXI_Z(8 * a2);
    if ( v6 )
      {
    v7 = v6;
    if ( a2 - 1 >= 0 )
        {
    v8 = a2;
    do
          {
    *v7 = 0;
    v7[1] = 0;
    v7 += 2;
    --v8;
          }
    while ( v8 );
        }
    v5 = v6;
      }
    else
      {
    v5 = 0;
      }
    }
    this->IsInitialized = 1;
    if ( !v5 )
    return 0;
    if ( this->Items )
    {
    v11 = this->Capacity;
    if ( a2 < v11 )
    v11 = a2;
    v12 = 0;
    if ( v11 > 0 )
      {
    do
        {
    v13 = 2 * v12;
    v14 = (int*)(this->Items + 8 * v12++);
    v5[v13] = *v14;
    v5[v13 + 1] = v14[1];
        }
    while ( v12 < v11 );
    v3 = a2;
      }
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v5);
    this->Capacity = v3;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy_0();
  }
    v15 = this->Capacity;
    if ( v15 < this->Count )
    this->Count = v15;
    return 1;
}
}
} // namespace gamemd

// 0x50F170
namespace gamemd {
int VectorClass_UAngerStruct::FindItemIndex_0(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2 || i[1] != *((int*)(a2) + 1); i += 2 )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x50F1B0
namespace gamemd {
char VectorClass_UScoutStruct::AddRef(int a2)
{
{
    int v2;
    int v3;
    int v4;
    int v5;
    _BYTE *v6;
    int v7;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = *(int*)(a2 + 4);
    v5 = this->Items;
    v6 = (char*)(v4 + 4);
    v7 = v4 - v5;
    while ( *(int*)v5 == *(int*)(v5 + v7) && *(char*)(v5 + 4) == *v6 )
    {
    ++v3;
    v6 += 8;
    v5 += 8;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x50F210
namespace gamemd {
char VectorClass_UScoutStruct::Release(int a2, char * a3)
{
{
    int v3;
    char *v5;
    char *v6;
    char *v7;
    int v8;
    char *v9;
    int v10;
    int v12;
    int v13;
    int v14;
    int *v15;
    v3 = a2;
    if ( a2 )
  {
    v5 = a3;
    this->IsInitialized = 0;
    if ( a3 )
    {
    v9 = a3;
    if ( a2 - 1 >= 0 )
      {
    v10 = a2;
    do
        {
    *(int*)v9 = 0;
    v9[4] = 0;
    v9 += 8;
    --v10;
        }
    while ( v10 );
      }
    }
    else
    {
    v6 = (char*)__2_YAPAXI_Z(8 * a2);
    if ( v6 )
      {
    v7 = v6;
    if ( a2 - 1 >= 0 )
        {
    v8 = a2;
    do
          {
    *(int*)v7 = 0;
    v7[4] = 0;
    v7 += 8;
    --v8;
          }
    while ( v8 );
        }
    v5 = v6;
      }
    else
      {
    v5 = 0;
      }
    }
    this->IsInitialized = 1;
    if ( v5 )
    {
    if ( this->Items )
      {
    v12 = this->Capacity;
    if ( a2 < v12 )
    v12 = a2;
    v13 = 0;
    if ( v12 > 0 )
        {
    do
          {
    v14 = 8 * v13;
    v15 = (int*)(this->Items + 8 * v13++);
    *(int*)&v5[v14] = *v15;
    *(int*)&v5[v14 + 4] = v15[1];
          }
    while ( v13 < v12 );
    v3 = a2;
        }
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v5);
    this->Capacity = v3;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->ddtor();
    return 1;
  }
}
}
} // namespace gamemd

// 0x50F300
namespace gamemd {
void VectorClass_UScoutStruct::ddtor()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x50F330
namespace gamemd {
int VectorClass_UScoutStruct::GetSize(int a2)
{
{
    int result;
    int v3;
    int i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = this->Items; *(int*)i != *(int*)a2 || *(char*)(i + 4) != *(char*)(a2 + 4); i += 8 )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x50F380
namespace gamemd {
unsigned int VectorClass_UScoutStruct::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 3;
    else
    return 0;
}
}
} // namespace gamemd

// 0x50F4E0
namespace gamemd {
char VectorClass_ptr_BuildChoiceClass_int_ouseClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x50F5D0
namespace gamemd {
void VectorClass_ptr_BuildChoiceClass_int_ouseClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x50F600
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x50F640
namespace gamemd {
unsigned int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x50F710
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::FindItemIndex_1(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x50F740
namespace gamemd {
char VectorClass_BuildingType::CompareVectors(int a2)
{
VectorClass_BuildingType* other = (VectorClass_BuildingType *)a2;
int capacity = this->Capacity;
if ( capacity == other->Capacity )
{
    int i = 0;
    if ( capacity <= 0 )
        return 1;
    unsigned int* myItems = (unsigned int *)this->Items;
    unsigned int* otherItems = (unsigned int *)other->Items;
    while ( myItems[i] == otherItems[i] )
    {
        ++i;
        if ( i >= capacity )
            return 1;
    }
}
return 0;
}
} // namespace gamemd

// 0x50F780
namespace gamemd {
char VectorClass_BuildingType::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x50F830
void VectorClass::ClearAndFree3()
{
if ( this->Items && this->IsAllocated )
{
    operator delete(this->Items);
    this->Items = 0;
}
this->IsAllocated = 0;
this->Capacity = 0;
}

// 0x50F860
namespace gamemd {
int VectorClass_BuildingType::FindItemIndex(unsigned int * a2)
{
if ( !this->IsInitialized )
    return 0;
unsigned int* i = (unsigned int *)this->Items;
int capacity = this->Capacity;
int result = 0;
if ( capacity <= 0 )
    return -1;
while ( *i != *a2 )
{
    ++result;
    ++i;
    if ( result >= capacity )
        return -1;
}
return result;
}
} // namespace gamemd

// 0x50F8A0
namespace gamemd {
unsigned int VectorClass_BuildingType::GetItemIndex_0(int a2)
{
if ( this->IsInitialized )
    return (unsigned int)((char *)a2 - (char *)this->Items) >> 2;
else
    return 0;
}
} // namespace gamemd

// 0x50F8C0
namespace gamemd {
char VectorClass_BuildingType::SetCapacity_0(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x50F970
namespace gamemd {
int VectorClass_BuildingType::FindItemIndex_0(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x50F9A0
namespace gamemd {
char VectorClass__N::AddRef(int a2)
{
VectorClass__N* other = (VectorClass__N *)a2;
int capacity = this->Capacity;
if ( capacity == other->Capacity )
{
    int i = 0;
    if ( capacity <= 0 )
        return 1;
    while ( this->Items[i] == other->Items[i] )
    {
        ++i;
        if ( i >= capacity )
            return 1;
    }
}
return 0;
}
} // namespace gamemd

// 0x50F9E0
namespace gamemd {
char VectorClass__N::Remove(signed int Size, char * a3)
{
{
    char *v4;
    signed int v6;
    signed int i;
    if ( Size )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = (char*)__2_YAPAXI_Z(Size);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( Size < v6 )
    v6 = Size;
    for ( i = 0; i < v6; v4[i - 1] = *(char*)(this->Items + i - 1) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = Size;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x50FA90
namespace gamemd {
void VectorClass__N::ddtor()
{
if ( this->Items && this->IsAllocated )
{
    operator delete(this->Items);
    this->Items = 0;
}
this->IsAllocated = 0;
this->Capacity = 0;
}
} // namespace gamemd

// 0x50FAC0
namespace gamemd {
int VectorClass__N::GetSize(unsigned char * a2)
{
if ( !this->IsInitialized )
    return 0;
int capacity = this->Capacity;
int result = 0;
if ( capacity <= 0 )
    return -1;
unsigned char* items = (unsigned char *)this->Items;
while ( items[result] != *a2 )
{
    ++result;
    if ( result >= capacity )
        return -1;
}
return result;
}
} // namespace gamemd

// 0x50FB00
namespace gamemd {
int VectorClass__N::Get(int a2)
{
if ( this->IsInitialized )
    return a2 - this->Items;
else
    return 0;
}
} // namespace gamemd

// 0x50FB20
namespace gamemd {
char VectorClass__N::SetCapacity(signed int Size, char * a3)
{
{
    char *v4;
    signed int v5;
    signed int i;
    int v7;
    if ( Size )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = (char*)__2_YAPAXI_Z(Size);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( Size < v5 )
    v5 = Size;
    for ( i = 0; i < v5; v4[i - 1] = *(char*)(this->Items + i - 1) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = Size;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x50FBD0
namespace gamemd {
int VectorClass__N::Destroy_0(unsigned char * a2)
{
{
    int v2;
    int result;
    int v4;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    v4 = this->Items;
    while ( *(char*)(v4 + result) != *a2 )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x50FC00
namespace gamemd {
char VectorClass__N_18::AddRef(int a2)
{
VectorClass__N_18* other = (VectorClass__N_18 *)a2;
int capacity = this->Capacity;
if ( capacity == other->Capacity )
{
    int i = 0;
    if ( capacity <= 0 )
        return 1;
    unsigned int* myItems = (unsigned int *)this->Items;
    unsigned int* otherItems = (unsigned int *)other->Items;
    while ( myItems[2 * i] == otherItems[2 * i] && myItems[2 * i + 1] == otherItems[2 * i + 1] )
    {
        ++i;
        if ( i >= capacity )
            return 1;
    }
}
return 0;
}
} // namespace gamemd

// 0x50FC60
namespace gamemd {
char VectorClass__N_18::Remove(int a2, int * a3)
{
{
    int *v4;
    int *v5;
    int *v6;
    int *v7;
    int v8;
    int *v9;
    int v10;
    int v12;
    int v13;
    int v14;
    int v15;
    if ( a2 )
  {
    v4 = a3;
    this->IsInitialized = 0;
    if ( a3 )
    {
    *a3 = a2;
    v6 = a3 + 1;
    if ( a2 - 1 >= 0 )
      {
    v9 = a3 + 2;
    v10 = a2;
    do
        {
    *v9 = 0;
    v9 += 2;
    --v10;
        }
    while ( v10 );
      }
    }
    else
    {
    v5 = (int*)__2_YAPAXI_Z(8 * a2 + 4);
    if ( v5 )
      {
    *v5 = a2;
    v6 = v5 + 1;
    if ( a2 - 1 >= 0 )
        {
    v7 = v5 + 2;
    v8 = a2;
    do
          {
    *v7 = 0;
    v7 += 2;
    --v8;
          }
    while ( v8 );
        }
      }
    else
      {
    v6 = 0;
      }
    }
    this->IsInitialized = 1;
    if ( v6 )
    {
    if ( this->Items )
      {
    v12 = this->Capacity;
    if ( a2 < v12 )
    v12 = a2;
    v13 = 0;
    if ( v12 > 0 )
        {
    do
          {
    v14 = this->Items;
    ++v13;
    v6[2 * v13 - 2] = *(int*)(v14 + 8 * v13 - 8);
    v6[2 * v13 - 1] = *(int*)(v14 + 8 * v13 - 4);
          }
    while ( v13 < v12 );
    v4 = a3;
        }
    if ( this->IsAllocated )
        {
    v15 = this->Items;
    if ( v15 )
    __3_YAXPAX_Z((void*)(v15 - 4));
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v6);
    this->Capacity = a2;
    this->IsAllocated = v4 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x50FD70
namespace gamemd {
void VectorClass__N_18::ddtor()
{
if ( this->Items && this->IsAllocated )
{
    operator delete((char *)this->Items - 4);
    this->Items = 0;
}
this->IsAllocated = 0;
this->Capacity = 0;
}
} // namespace gamemd

// 0x50FDB0
namespace gamemd {
int VectorClass__N_18::GetSize(unsigned int * a2)
{
if ( !this->IsInitialized )
    return 0;
unsigned int* i = (unsigned int *)this->Items;
int capacity = this->Capacity;
int result = 0;
if ( capacity <= 0 )
    return -1;
while ( *i != *a2 || i[1] != a2[1] )
{
    ++result;
    i += 2;
    if ( result >= capacity )
        return -1;
}
return result;
}
} // namespace gamemd

// 0x50FE00
namespace gamemd {
unsigned int VectorClass__N_18::Get(int a2)
{
if ( this->IsInitialized )
    return (unsigned int)((char *)a2 - (char *)this->Items) >> 3;
else
    return 0;
}
} // namespace gamemd

// 0x50FE20
namespace gamemd {
char VectorClass__N_18::SetCapacity(int a2, int * a3)
{
{
    int *v4;
    int *v5;
    int *v6;
    int *v7;
    int v8;
    int *v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    void *v15;
    int v16;
    if ( a2 )
  {
    v4 = a3;
    this->IsInitialized = 0;
    if ( a3 )
    {
    *a3 = a2;
    v6 = a3 + 1;
    if ( a2 - 1 >= 0 )
      {
    v9 = a3 + 2;
    v10 = a2;
    do
        {
    *v9 = 0;
    v9 += 2;
    --v10;
        }
    while ( v10 );
      }
    }
    else
    {
    v5 = (int*)__2_YAPAXI_Z(8 * a2 + 4);
    if ( v5 )
      {
    *v5 = a2;
    v6 = v5 + 1;
    if ( a2 - 1 >= 0 )
        {
    v7 = v5 + 2;
    v8 = a2;
    do
          {
    *v7 = 0;
    v7 += 2;
    --v8;
          }
    while ( v8 );
        }
      }
    else
      {
    v6 = 0;
      }
    }
    this->IsInitialized = 1;
    if ( !v6 )
    return 0;
    if ( this->Items )
    {
    v11 = this->Capacity;
    if ( a2 < v11 )
    v11 = a2;
    v12 = 0;
    if ( v11 > 0 )
      {
    do
        {
    v13 = this->Items;
    ++v12;
    v6[2 * v12 - 2] = *(int*)(v13 + 8 * v12 - 8);
    v6[2 * v12 - 1] = *(int*)(v13 + 8 * v12 - 4);
        }
    while ( v12 < v11 );
    v4 = a3;
      }
    if ( this->IsAllocated )
      {
    v14 = this->Items;
    if ( v14 )
        {
    v15 = (void*)(v14 - 4);
    Array::ForEachReverse(v14, 8, *(int*)(v14 - 4), (int (__thiscall *)(int))nullsub_145);
    __3_YAXPAX_Z(v15);
    v4 = a3;
        }
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v6);
    this->Capacity = a2;
    this->IsAllocated = v4 == 0;
  }
    else
  {
    this->Destroy();
  }
    v16 = this->Capacity;
    if ( v16 < this->Count )
    this->Count = v16;
    return 1;
}
}
} // namespace gamemd

// 0x50FFB0
namespace gamemd {
int VectorClass__N_18::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2 || i[1] != *((int*)(a2) + 1); i += 2 )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x50FFF0
namespace gamemd {
VectorClass * VectorClass_BuildingType::Get(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_BuildingTypeClass_const;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x510040
namespace gamemd {
DynamicVector * VectorClass_UScoutStruct___33::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_BuildingTypeClass_const;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x510090
namespace gamemd {
VectorClass * VectorClass_UAngerStruct___16::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_HouseClass_StartingTechnoStruct;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x5100E0
namespace gamemd {
DynamicVector * VectorClass_UAngerStruct::Constructor(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_HouseClass_StartingTechnoStruct;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x510130
namespace gamemd {
VectorClass * VectorClass_UAngerStruct::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_AngerStruct;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x510180
namespace gamemd {
DynamicVector * VectorClass_UAngerStruct::Constructor_VectorClass_AngerStruct_(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_AngerStruct;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x5101D0
namespace gamemd {
VectorClass * VectorClass_UScoutStruct::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_ScoutStruct;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x510270
namespace gamemd {
VectorClass * VectorClass_ptr_BuildChoiceClass_int_ouseClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_HouseClass_BuildChoiceClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x5102C0
namespace gamemd {
unsigned int * VectorClass_ptr_BuildChoiceClass_int_ouseClass::loc_5102C0(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_HouseClass_BuildChoiceClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}
}
} // namespace gamemd

// 0x510310
namespace gamemd {
VectorClass * VectorClass_BuildingType::Constructor_0(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_TeamTypeClass_const;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x510360
namespace gamemd {
VectorClass * VectorClass__N::Add(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_bool;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x5103B0
namespace gamemd {
DynamicVector * VectorClass__N::Constructor_VectorClass_bool_(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_bool;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x510400
namespace gamemd {
VectorClass * VectorClass__N_18::Add(unsigned int * Block, char a2)
{
{
    int v3;
    v3 = *(Block + 1);
    *Block = (unsigned int)vt_VectorClass_DiscreteDistributionClass_BuildingTypeClass_DistributionObject_BuildingTypeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z((void*)(v3 - 4));
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x5104A0
namespace gamemd {
DynamicVector * VectorClass__N_18::Constructor_0(unsigned int * Block, char a2)
{
{
    int v3;
    v3 = *(Block + 1);
    *Block = (unsigned int)vt_VectorClass_DiscreteDistributionClass_BuildingTypeClass_DistributionObject_BuildingTypeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z((void*)(v3 - 4));
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x510550
unsigned int * VectorClass::BuildingConstructor(int a2, int a3)
{
{
    this->Items = (void*)(0);
    this->Capacity = a2;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    this->vfptr = vt_VectorClass_BuildingClass;
    if ( a2 )
  {
    if ( a3 )
    {
    this->Items = (void*)(a3);
    return this;
    }
    this->Items = (void*)(__2_YAPAXI_Z(4 * a2));
    this->IsAllocated = 1;
  }
    return this;
}
}

// 0x5105A0
unsigned int * VectorClass::BuildingTypeConstructor(TechnoTypeClass * aP1, TechnoTypeClass * aP2)
{
{
    this->Items = (void*)(0);
    this->Capacity = aP1;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    this->vfptr = vt_VectorClass_BuildingTypeClass_const;
    if ( aP1 )
  {
    if ( aP2 )
    {
    this->Items = (void*)(aP2);
    return this;
    }
    this->Items = (void*)(__2_YAPAXI_Z(4 * (int)aP1));
    this->IsAllocated = 1;
  }
    return this;
}
}

// 0x510A50
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_2(int a1, const void * a2, unsigned int * a3)
{
{
    return HouseClass::QueryInterface(a1 - 36, a2, a3);
}
}
} // namespace gamemd

// 0x510A60
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_3(int a1)
{
{
    return HouseClass::COMStub_Ret1_1(a1 - 36);
}
}
} // namespace gamemd

// 0x510A70
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_4(int a1)
{
{
    return HouseClass::COMStub_Ret1_2(a1 - 36);
}
}
} // namespace gamemd

// 0x510A80
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_5(int a1, const void * a2, unsigned int * a3)
{
{
    return HouseClass::QueryInterface(a1 - 40, a2, a3);
}
}
} // namespace gamemd

// 0x510A90
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_6(int a1)
{
{
    return HouseClass::COMStub_Ret1_1(a1 - 40);
}
}
} // namespace gamemd

// 0x510AA0
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_7(int a1)
{
{
    return HouseClass::COMStub_Ret1_2(a1 - 40);
}
}
} // namespace gamemd

// 0x510AB0
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_8(int a1)
{
{
    return VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_1(a1 - 4);
}
}
} // namespace gamemd

// 0x510AC0
namespace gamemd {
BSTR VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_9(int a1)
{
{
    return VectorClass_ptr_BuildChoiceClass_int_ouseClass::FindItemIndex(a1 - 4);
}
}
} // namespace gamemd

// 0x510AD0
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_10(int a1, const void * a2, unsigned int * a3)
{
{
    return HouseClass::QueryInterface(a1 - 44, a2, a3);
}
}
} // namespace gamemd

// 0x510AE0
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_11(int a1)
{
{
    return HouseClass::COMStub_Ret1_1(a1 - 44);
}
}
} // namespace gamemd

// 0x510AF0
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_12(int a1)
{
{
    return HouseClass::COMStub_Ret1_2(a1 - 44);
}
}
} // namespace gamemd

// 0x512FA0
unsigned int * VectorClass::CopyConstructor(InfantryTypeClass * aP1)
{
VectorClass* source = (VectorClass *)aP1;
if ( this == source )
    return (unsigned int *)this;
this->Clear();
int sourceCapacity = source->Capacity;
this->Capacity = sourceCapacity;
if ( !sourceCapacity )
{
    this->Items = 0;
    this->IsAllocated = 0;
    return (unsigned int *)this;
}
unsigned int* newItems = (unsigned int *)operator new(4 * sourceCapacity);
this->Items = (decltype(this->Items))newItems;
if ( !newItems )
    return (unsigned int *)this;
int capacity = this->Capacity;
int i = 0;
this->IsAllocated = 1;
if ( capacity <= 0 )
    return (unsigned int *)this;
do
{
    ((unsigned int *)this->Items)[i] = ((unsigned int *)source->Items)[i];
    ++i;
}
while ( i < this->Capacity );
return (unsigned int *)this;
}

// 0x5132F0
char VectorClass::PushBack(VectorClass * aP1)
{
{
    MapClass *v3;
    int v4;
    int v6;
    VectorClass *v7;
    v3 = (MapClass *)this->Capacity;
    if ( this->Count >= (int)v3 )
  {
    if ( !this->IsAllocated && v3 )
    return 0;
    v4 = this->CapacityIncrement;
    if ( v4 <= 0 || !this->SetCapacity((char *)(v3) + v4, 0) )
    return 0;
  }
    v6 = this->Count;
    v7 = (VectorClass *)this->Items;
    this->Count = v6 + 1;
    *(int *)&v7->vtable0[4 * v6] = *(int *)aP1->vtable0;
    return 1;
}
}

// 0x5134D0
void VectorClass::ClearAndFree4()
{
if ( this->Items && this->IsAllocated )
{
    operator delete(this->Items);
    this->Items = 0;
}
this->IsAllocated = 0;
this->Capacity = 0;
}

// 0x525060
unsigned int * VectorClass::CopyDefault(VectorClass * aP1)
{
if ( this == aP1 )
    return (unsigned int *)this;
this->Clear();
int sourceCapacity = aP1->Capacity;
this->Capacity = sourceCapacity;
if ( !sourceCapacity )
{
    this->Items = 0;
    this->IsAllocated = 0;
    return (unsigned int *)this;
}
unsigned int* newItems = (unsigned int *)operator new(4 * sourceCapacity);
this->Items = (decltype(this->Items))newItems;
if ( !newItems )
    return (unsigned int *)this;
int capacity = this->Capacity;
int i = 0;
this->IsAllocated = 1;
if ( capacity <= 0 )
    return (unsigned int *)this;
do
{
    ((unsigned int *)this->Items)[i] = ((unsigned int *)aP1->Items)[i];
    ++i;
}
while ( i < this->Capacity );
return (unsigned int *)this;
}

// 0x538510
namespace gamemd {
int VectorClass_ptr_CCINIClass::Clear(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x538520
namespace gamemd {
char VectorClass_ptr_CCINIClass::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x538560
namespace gamemd {
char VectorClass_ptr_CCINIClass::Remove(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->ddtor();
    return 1;
  }
}
}
} // namespace gamemd

// 0x538610
namespace gamemd {
void VectorClass_ptr_CCINIClass::ddtor()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x538640
namespace gamemd {
int VectorClass_ptr_CCINIClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x538680
namespace gamemd {
unsigned int VectorClass_ptr_CCINIClass::Get(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x538A90
namespace gamemd {
VectorClass * VectorClass_ptr_CCINIClass::Add(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_CCINIClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x53DA40
namespace gamemd {
void VectorClass_ptr_IonBlastClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x53DA70
namespace gamemd {
unsigned int VectorClass_ptr_IonBlastClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x53DA90
namespace gamemd {
int VectorClass_ptr_IonBlastClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x53DAA0
namespace gamemd {
char VectorClass_ptr_IonBlastClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x53DAE0
namespace gamemd {
char VectorClass_ptr_IonBlastClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x53DB90
namespace gamemd {
void VectorClass_ptr_IonBlastClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x53DBC0
namespace gamemd {
int VectorClass_ptr_IonBlastClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x53DC00
namespace gamemd {
unsigned int VectorClass_ptr_IonBlastClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x53DC20
namespace gamemd {
char VectorClass_ptr_IonBlastClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x53DCD0
namespace gamemd {
int VectorClass_ptr_IonBlastClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x53DD00
namespace gamemd {
VectorClass * VectorClass_ptr_IonBlastClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_IonBlastClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x53DD50
namespace gamemd {
DynamicVector * VectorClass_ptr_IonBlastClass::Constructor_VectorClass_IonBlastClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_IonBlastClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x54A1E0
namespace gamemd {
int VectorClass_PAG::Count(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x54A1F0
namespace gamemd {
void VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x54A220
namespace gamemd {
unsigned int VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x54A240
namespace gamemd {
int VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x54A250
namespace gamemd {
char VectorClass_PAG::Get(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x54A290
namespace gamemd {
char VectorClass_PAG::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Set();
    return 1;
  }
}
}
} // namespace gamemd

// 0x54A340
namespace gamemd {
void VectorClass_PAG::Set()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x54A370
namespace gamemd {
int VectorClass_PAG::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x54A3B0
namespace gamemd {
unsigned int VectorClass_PAG::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x54A4B0
namespace gamemd {
char VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x54A4F0
namespace gamemd {
char VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x54A5A0
namespace gamemd {
void VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x54A5D0
namespace gamemd {
int VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x54A610
namespace gamemd {
unsigned int VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::LoadTypeData(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x54A630
namespace gamemd {
char VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x54A6E0
namespace gamemd {
int VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x54A710
namespace gamemd {
VectorClass * VectorClass_PAG::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_unsigned_short;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x54A7B0
namespace gamemd {
VectorClass * VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_IsometricTileTypeClass_TileInsertType;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}
} // namespace gamemd

// 0x54A800
namespace gamemd {
DynamicVector * VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Constructor(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_IsometricTileTypeClass_TileInsertType;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x5512D0
namespace gamemd {
void VectorClass_ptr_LaserDrawClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x551300
namespace gamemd {
unsigned int VectorClass_ptr_LaserDrawClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x551320
namespace gamemd {
int VectorClass_ptr_LaserDrawClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x551330
namespace gamemd {
char VectorClass_ptr_LaserDrawClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x551370
namespace gamemd {
char VectorClass_ptr_LaserDrawClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x551420
namespace gamemd {
void VectorClass_ptr_LaserDrawClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x551450
namespace gamemd {
int VectorClass_ptr_LaserDrawClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x551490
namespace gamemd {
unsigned int VectorClass_ptr_LaserDrawClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5514B0
namespace gamemd {
char VectorClass_ptr_LaserDrawClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x551560
namespace gamemd {
int VectorClass_ptr_LaserDrawClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x551590
namespace gamemd {
VectorClass * VectorClass_ptr_LaserDrawClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_LaserDrawClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x5515E0
namespace gamemd {
DynamicVector * VectorClass_ptr_LaserDrawClass::Constructor_VectorClass_LaserDrawClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_LaserDrawClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x555200
namespace gamemd {
void VectorClass_ptr_LightSourceClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x555230
namespace gamemd {
unsigned int VectorClass_ptr_LightSourceClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x555250
namespace gamemd {
int VectorClass_ptr_LightSourceClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x555260
namespace gamemd {
void VectorClass_ptr_LightSourceClass::Destroy_0()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x555290
namespace gamemd {
unsigned int VectorClass_ptr_LightSourceClass::GetItemIndex_0(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5552B0
namespace gamemd {
int VectorClass_ptr_PendingCellClass_LightSourceClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x5552C0
namespace gamemd {
char VectorClass_ptr_LightSourceClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x555300
namespace gamemd {
char VectorClass_ptr_LightSourceClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x5553B0
namespace gamemd {
void VectorClass_ptr_LightSourceClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x5553E0
namespace gamemd {
int VectorClass_ptr_LightSourceClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x555420
namespace gamemd {
unsigned int VectorClass_ptr_LightSourceClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x555440
namespace gamemd {
char VectorClass_ptr_LightSourceClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x5554F0
namespace gamemd {
int VectorClass_ptr_LightSourceClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x555520
namespace gamemd {
char VectorClass_ptr_PendingCellClass_LightSourceClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x555560
namespace gamemd {
char VectorClass_ptr_PendingCellClass_LightSourceClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x555610
namespace gamemd {
void VectorClass_ptr_PendingCellClass_LightSourceClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x555640
namespace gamemd {
int VectorClass_ptr_PendingCellClass_LightSourceClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x555680
namespace gamemd {
unsigned int VectorClass_ptr_PendingCellClass_LightSourceClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5556A0
namespace gamemd {
char VectorClass_ptr_LightSourceClass::SetCapacity_0(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x555750
namespace gamemd {
int VectorClass_ptr_LightSourceClass::FindItemIndex_0(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x555780
namespace gamemd {
VectorClass * VectorClass_ptr_LightSourceClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_LightSourceClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x5557D0
namespace gamemd {
DynamicVector * VectorClass_ptr_LightSourceClass::Constructor_VectorClass_LightSourceClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_LightSourceClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x555820
namespace gamemd {
VectorClass * VectorClass_ptr_PendingCellClass_LightSourceClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_LightSourceClass_PendingCellClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x555870
namespace gamemd {
DynamicVector * VectorClass_ptr_LightSourceClass::Constructor(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_LightSourceClass_PendingCellClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x556F00
namespace gamemd {
int VectorClass_ptr_LineTrail::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x556F10
namespace gamemd {
char VectorClass_ptr_LineTrail::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x556F50
namespace gamemd {
char VectorClass_ptr_LineTrail::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x557000
namespace gamemd {
void VectorClass_ptr_LineTrail::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x557030
namespace gamemd {
int VectorClass_ptr_LineTrail::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x557070
namespace gamemd {
unsigned int VectorClass_ptr_LineTrail::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x557170
namespace gamemd {
VectorClass * VectorClass_ptr_LineTrail::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_LineTrail;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x558230
namespace gamemd {
int VectorClass_PBG::Count(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x558240
namespace gamemd {
char VectorClass_PBG::Get(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x558280
namespace gamemd {
char VectorClass_PBG::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Set();
    return 1;
  }
}
}
} // namespace gamemd

// 0x558330
namespace gamemd {
void VectorClass_PBG::Set()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x558360
namespace gamemd {
int VectorClass_PBG::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x5583A0
namespace gamemd {
unsigned int VectorClass_PBG::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5584A0
namespace gamemd {
VectorClass * VectorClass_PBG::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_unsigned_short_const;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x55BAE0
int VectorClass::RemoveItem(ObjectClass * aP1)
{
{
    ObjectClass *result;
    int v4;
    int v5;
    int v6;
    result = aP1;
    if ( aP1->isInLogic )
  {
    v4 = this->FindItemIndex(&aP1);
    if ( v4 != -1 )
    {
    v5 = this->Count;
    if ( v4 < v5 )
      {
    v6 = v5 - 1;
    for ( this->Count = v6; v4 < this->Count; *(int *)(this->Items + 4 * v4 - 4) = *(int *)(this->Items + 4 * v4) )
    ++v4;
      }
    }
    result = aP1;
    aP1->isInLogic = 0;
  }
    return (int)result->__pad_0;
}
}

// 0x588C90
void VectorClass::CleanupSubzone()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}

// 0x588E10
namespace gamemd {
int VectorClass_USubzoneTrackingStruct::Clear(int a2, int a3)
{
{
    int v3;
    int v4;
    char *v5;
    char *v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    v3 = this->Items + 36 * a3;
    *(int*)(a2 + 4) = 0;
    *(int*)(a2 + 8) = 0;
    *(char*)(a2 + 12) = 1;
    *(char*)(a2 + 13) = 0;
    *(int*)(a2) = (unsigned int)vt_VectorClass_SubzoneConnectionStruct;
    if ( a2 != v3 )
  {
    VectorClass::Cleanup5(a2);
    v4 = *(int*)(v3 + 8);
    *(int*)(a2 + 8) = v4;
    if ( v4 )
    {
    v5 = (char*)__2_YAPAXI_Z(8 * v4);
    if ( v5 )
      {
    v6 = v5;
    if ( v4 - 1 >= 0 )
        {
    v7 = v4;
    do
          {
    *(int*)v6 = 0;
    v6[4] = 0;
    v6 += 8;
    --v7;
          }
    while ( v7 );
        }
      }
    else
      {
    v5 = 0;
      }
    *(int*)(a2 + 4) = v5;
    if ( v5 )
      {
    v8 = *(int*)(a2 + 8);
    v9 = 0;
    *(char*)(a2 + 13) = 1;
    if ( v8 > 0 )
        {
    do
          {
    v10 = *(int*)(v3 + 4);
    v11 = *(int*)(a2 + 4);
    *(int*)(v11 + 8 * v9) = *(int*)(v10 + 8 * v9);
    *(int*)(v11 + 8 * v9 + 4) = *(int*)(v10 + 8 * v9 + 4);
    ++v9;
          }
    while ( v9 < *(int*)(a2 + 8) );
        }
      }
    }
    else
    {
    *(int*)(a2 + 4) = 0;
    *(char*)(a2 + 13) = 0;
    }
  }
    *(int*)(a2 + 16) = *(int*)(v3 + 16);
    *(int*)(a2 + 20) = *(int*)(v3 + 20);
    *(int*)(a2) = (unsigned int)vt_DynamicVectorClass_SubzoneConnectionStruct;
    *(short*)(a2 + 24) = *(short*)(v3 + 24);
    *(int*)(a2 + 28) = *(int*)(v3 + 28);
    *(int*)(a2 + 32) = *(int*)(v3 + 32);
    return a2;
}
}
} // namespace gamemd

// 0x588F00
namespace gamemd {
void VectorClass_W4PassabilityType::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x588F30
namespace gamemd {
unsigned int VectorClass_W4PassabilityType::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x588F50
namespace gamemd {
int VectorClass_W4PassabilityType::Clear(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x588F60
namespace gamemd {
void VectorClass_W4PassabilityType::Destroy_0()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x588F90
namespace gamemd {
unsigned int VectorClass_W4PassabilityType::GetItemIndex_0(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 3;
    else
    return 0;
}
}
} // namespace gamemd

// 0x588FB0
namespace gamemd {
unsigned int * VectorClass_UHashObject_uint_uint::Clear(unsigned int * a2, int a3)
{
{
    int v3;
    int v4;
    int v5;
    v3 = this->Items;
    v4 = *(int*)(v3 + 8 * a3);
    v5 = v3 + 8 * a3;
    *a2 = v4;
    *((int*)(a2) + 1) = *(int*)(v5 + 4);
    return a2;
}
}
} // namespace gamemd

// 0x588FD0
namespace gamemd {
void VectorClass_W4PassabilityType::Destroy_1()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x589000
namespace gamemd {
unsigned int VectorClass_W4PassabilityType::GetItemIndex_1(int a2)
{
{
    if ( this->IsInitialized )
    return (a2 - this->Items) / 0xCu;
    else
    return 0;
}
}
} // namespace gamemd

// 0x589030
namespace gamemd {
int VectorClass_UHashObject_uint_SubzoneConn::Clear(int a2, int a3)
{
{
    int v3;
    int v4;
    int v5;
    v3 = this->Items;
    v4 = *(int*)(v3 + 12 * a3);
    v5 = v3 + 12 * a3;
    *(int*)a2 = v4;
    *(int*)(a2 + 4) = *(int*)(v5 + 4);
    *(char*)(a2 + 8) = *(char*)(v5 + 8);
    return a2;
}
}
} // namespace gamemd

// 0x5896F0
namespace gamemd {
char VectorClass_USubzoneTrackingStruct::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int *i;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)(*(int*)(a2 + 4) + 28);
    for ( i = (int*)(this->Items + 28); *((short*)i - 2) == *((short*)v4 - 2) && *i == *v4; i += 9 )
    {
    ++v3;
    v4 += 9;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x589740
namespace gamemd {
char VectorClass_USubzoneTrackingStruct::Release(int a2, int * a3)
{
{
    int v3;
    _BYTE *v4;
    int *v5;
    int *v6;
    int *v7;
    int *v8;
    int v10;
    int *v11;
    int v12;
    int v13;
    int v14;
    void *v15;
    int v16;
    int v17;
    int v18;
    void *v19;
    int *v20;
    int *v22;
    int v23;
    void *v24;
    int v25;
    v3 = a2;
    v4 = this;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    {
    *a3 = a2;
    v7 = a3 + 1;
    if ( a2 - 1 >= 0 )
      {
    do
        {
    VectorClass::ConstructSubzone(v7, 0, 0);
    *v7 = (unsigned int)vt_DynamicVectorClass_SubzoneConnectionStruct;
    v7[5] = 10;
    v7[4] = 0;
    ((void (__thiscall **)(int *)))(*v7 + 12);
    *((short*)(v7) + 12) = 0;
    v7[7] = 0;
    v7[8] = 0;
    v7 += 9;
    --v3;
        }
    while ( v3 );
    v3 = a2;
    v4 = this;
      }
    v20 = a3 + 1;
    }
    else
    {
    v5 = (int*)__2_YAPAXI_Z(36 * a2 + 4);
    if ( v5 )
      {
    *v5 = a2;
    v6 = v5 + 1;
    v22 = v5 + 1;
    if ( a2 - 1 >= 0 )
        {
    do
          {
    VectorClass::ConstructSubzone(v6, 0, 0);
    *v6 = (unsigned int)vt_DynamicVectorClass_SubzoneConnectionStruct;
    v6[5] = 10;
    v6[4] = 0;
    ((void (__thiscall **)(int *)))(*v6 + 12);
    *((short*)(v6) + 12) = 0;
    v6[7] = 0;
    v6[8] = 0;
    v6 += 9;
    --v3;
          }
    while ( v3 );
    v3 = a2;
    v6 = v22;
    v4 = this;
        }
    v20 = v6;
      }
    else
      {
    v20 = 0;
      }
    }
    v8 = v20;
    v4[12] = 1;
    if ( v20 )
    {
    if ( *((int*)(v4) + 1) )
      {
    v10 = *((int*)(v4) + 2);
    if ( v3 < v10 )
    v10 = v3;
    if ( v10 > 0 )
        {
    v11 = v20 + 5;
    v23 = v10;
    do
          {
    v12 = (int)v11 + this->Items + -20 - (int)v20;
    VectorClass_USubzoneTrackingStruct::SetCapacity(v11 - 5, (int*)v12);
    *(v11 - 1) = *(int*)(v12 + 16);
    *v11 = *(int*)(v12 + 20);
    *((short*)(v11) + 2) = *(short*)(v12 + 24);
    v11[2] = *(int*)(v12 + 28);
    v11[3] = *(int*)(v12 + 32);
    v11 += 9;
    --v23;
          }
    while ( v23 );
    v3 = a2;
    v4 = this;
        }
    if ( v4[13] )
        {
    v13 = *((int*)(v4) + 1);
    if ( v13 )
          {
    v14 = *(int*)(v13 - 4);
    v15 = (void*)(v13 - 4);
    v24 = (void*)(v13 - 4);
    v16 = 9 * v14;
    v17 = v14 - 1;
    v18 = v13 + 4 * v16;
    if ( v17 >= 0 )
            {
    v25 = v17 + 1;
    do
              {
    v19 = *(void*)(v18 - 32);
    v18 -= 36;
    *(int*)(v18) = (unsigned int)vt_VectorClass_SubzoneConnectionStruct;
    if ( v19 )
                {
    if ( *(char*)(v18 + 13) )
                  {
    __3_YAXPAX_Z(v19);
    *(int*)(v18 + 4) = 0;
                  }
                }
    *(char*)(v18 + 13) = 0;
    *(int*)(v18 + 8) = 0;
    --v25;
              }
    while ( v25 );
    v15 = v24;
            }
    __3_YAXPAX_Z(v15);
          }
    *((int*)(v4) + 1) = 0;
        }
    v8 = v20;
      }
    *((int*)(v4) + 1) = v8;
    *((int*)(v4) + 2) = v3;
    v4[13] = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->ddtor();
    return 1;
  }
}
}
} // namespace gamemd

// 0x589960
namespace gamemd {
void VectorClass_USubzoneTrackingStruct::ddtor()
{
{
    int v2;
    int v3;
    void *v4;
    int v5;
    int v6;
    int v7;
    int v8;
    void *v9;
    void *v10;
    v2 = this->Items;
    if ( v2 && this->IsAllocated )
  {
    v3 = *(int*)(v2 - 4);
    v4 = (void*)(v2 - 4);
    v10 = (void*)(v2 - 4);
    v5 = 9 * v3;
    v6 = v3 - 1;
    v7 = v2 + 4 * v5;
    if ( v6 >= 0 )
    {
    v8 = v6 + 1;
    do
      {
    v9 = *(void*)(v7 - 32);
    v7 -= 36;
    *(int*)(v7) = (unsigned int)vt_VectorClass_SubzoneConnectionStruct;
    if ( v9 && *(char*)(v7 + 13) )
        {
    __3_YAXPAX_Z(v9);
    *(int*)(v7 + 4) = 0;
        }
    --v8;
    *(char*)(v7 + 13) = 0;
    *(int*)(v7 + 8) = 0;
      }
    while ( v8 );
    v4 = v10;
    }
    __3_YAXPAX_Z(v4);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x5899E0
namespace gamemd {
int VectorClass_USubzoneTrackingStruct::GetSize(int a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = (int*)(this->Items + 28);
    *((short*)i - 2) != *(short*)(a2 + 24) || *i != *(int*)(a2 + 28);
    i += 9 ) {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x589A30
namespace gamemd {
unsigned int VectorClass_USubzoneTrackingStruct::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (a2 - this->Items) / 0x24u;
    else
    return 0;
}
}
} // namespace gamemd

// 0x589EB0
namespace gamemd {
char VectorClass_W4PassabilityType::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x589EF0
namespace gamemd {
char VectorClass_W4PassabilityType::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x589FA0
namespace gamemd {
void VectorClass_W4PassabilityType::ddtor()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x589FD0
namespace gamemd {
int VectorClass_W4PassabilityType::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x58A010
namespace gamemd {
unsigned int VectorClass_W4PassabilityType::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x58A030
namespace gamemd {
char VectorClass_W4PassabilityType::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x58A0E0
namespace gamemd {
int VectorClass_W4PassabilityType::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x58A110
namespace gamemd {
char VectorClass_UHashObject_uint_uint::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    v4 += 2;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x58A150
namespace gamemd {
char VectorClass_W4PassabilityType::SetCapacity_0(int a2, unsigned int * a3)
{
{
    int *v4;
    int *v5;
    int *v6;
    int v7;
    int v8;
    int v9;
    int v10;
    if ( a2 )
  {
    v4 = a3;
    this->IsInitialized = 0;
    if ( a3 )
    {
    v6 = a3;
    }
    else
    {
    v5 = __2_YAPAXI_Z(8 * a2);
    if ( v5 )
    v6 = v5;
    else
    v6 = 0;
    }
    this->IsInitialized = 1;
    if ( !v6 )
    return 0;
    if ( this->Items )
    {
    v7 = this->Capacity;
    if ( a2 < v7 )
    v7 = a2;
    v8 = 0;
    if ( v7 > 0 )
      {
    do
        {
    v9 = this->Items;
    ++v8;
    v6[2 * v8 - 2] = *(int*)(v9 + 8 * v8 - 8);
    v6[2 * v8 - 1] = *(int*)(v9 + 8 * v8 - 4);
        }
    while ( v8 < v7 );
    v4 = a3;
      }
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v6);
    this->Capacity = a2;
    this->IsAllocated = v4 == 0;
  }
    else
  {
    this->Destroy();
  }
    v10 = this->Capacity;
    if ( v10 < this->Count )
    this->Count = v10;
    return 1;
}
}
} // namespace gamemd

// 0x58A230
namespace gamemd {
int VectorClass_W4PassabilityType::FindItemIndex_0(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; i += 2 )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x58A260
namespace gamemd {
char VectorClass_UHashObject_uint_SubzoneConn::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    v4 += 3;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x58A2A0
namespace gamemd {
char VectorClass_W4PassabilityType::SetCapacity_1(int a2, char * a3)
{
{
    int v3;
    char *v5;
    char *v6;
    char *v7;
    int v8;
    char *v9;
    int v10;
    int v11;
    int v12;
    char *v13;
    int *v14;
    int v15;
    v3 = a2;
    if ( a2 )
  {
    v5 = a3;
    this->IsInitialized = 0;
    if ( a3 )
    {
    if ( a2 - 1 >= 0 )
      {
    v9 = a3 + 4;
    v10 = a2;
    do
        {
    *(int*)v9 = 0;
    v9[4] = 0;
    v9 += 12;
    --v10;
        }
    while ( v10 );
      }
    }
    else
    {
    v6 = (char*)__2_YAPAXI_Z(12 * a2);
    if ( v6 )
      {
    if ( a2 - 1 >= 0 )
        {
    v7 = v6 + 4;
    v8 = a2;
    do
          {
    *(int*)v7 = 0;
    v7[4] = 0;
    v7 += 12;
    --v8;
          }
    while ( v8 );
        }
    v5 = v6;
      }
    else
      {
    v5 = 0;
      }
    }
    this->IsInitialized = 1;
    if ( !v5 )
    return 0;
    if ( this->Items )
    {
    v11 = this->Capacity;
    if ( a2 < v11 )
    v11 = a2;
    if ( v11 > 0 )
      {
    v12 = 0;
    do
        {
    v13 = &v5[v12];
    v14 = (int*)(v12 + this->Items);
    v12 += 12;
    --v11;
    *(int*)v13 = *v14;
    *((int*)(v13) + 1) = v14[1];
    *((int*)(v13) + 2) = v14[2];
        }
    while ( v11 );
    v3 = a2;
      }
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v5);
    this->Capacity = v3;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v15 = this->Capacity;
    if ( v15 < this->Count )
    this->Count = v15;
    return 1;
}
}
} // namespace gamemd

// 0x58A3A0
namespace gamemd {
int VectorClass_W4PassabilityType::FindItemIndex_1(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; i += 3 )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x58A470
namespace gamemd {
VectorClass * VectorClass_USubzoneTrackingStruct::QueryInterface(unsigned int * Block, char a2)
{
{
    int v3;
    int v4;
    void *v5;
    int v6;
    int v7;
    int v8;
    int v9;
    void *v10;
    void *v12;
    v3 = *(Block + 1);
    *Block = (unsigned int)vt_VectorClass_SubzoneTrackingStruct;
    if ( v3 && *((char*)(Block) + 13) )
  {
    v4 = *(int*)(v3 - 4);
    v5 = (void*)(v3 - 4);
    v12 = (void*)(v3 - 4);
    v6 = 9 * v4;
    v7 = v4 - 1;
    v8 = v3 + 4 * v6;
    if ( v7 >= 0 )
    {
    v9 = v7 + 1;
    do
      {
    v10 = *(void*)(v8 - 32);
    v8 -= 36;
    *(int*)(v8) = (unsigned int)vt_VectorClass_SubzoneConnectionStruct;
    if ( v10 && *(char*)(v8 + 13) )
        {
    __3_YAXPAX_Z(v10);
    *(int*)(v8 + 4) = 0;
        }
    --v9;
    *(char*)(v8 + 13) = 0;
    *(int*)(v8 + 8) = 0;
      }
    while ( v9 );
    v5 = v12;
    }
    __3_YAXPAX_Z(v5);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x58A630
namespace gamemd {
char * VectorClass_W4PassabilityType::Constructor(unsigned int * Block, char a2)
{
{
    int v3;
    int *v4;
    int v5;
    int v6;
    int *v7;
    int v8;
    void *v9;
    void *v11;
    if ( (a2 & 2) != 0 )
  {
    v3 = *(Block - 1);
    v4 = Block - 1;
    v5 = 3 * v3;
    v6 = v3 - 1;
    v7 = Block + 2 * v5;
    if ( v6 >= 0 )
    {
    v8 = v6 + 1;
    do
      {
    v9 = (void*)*(v7 - 5);
    v7 -= 6;
    *v7 = (unsigned int)vt_VectorClass_HashObject_unsigned_int_unsigned_int;
    if ( v9 && *((char*)(v7) + 13) )
        {
    __3_YAXPAX_Z(v9);
    v7[1] = 0;
        }
    --v8;
    *((char*)(v7) + 13) = 0;
    v7[2] = 0;
      }
    while ( v8 );
    }
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(v4);
    return (char*)v4;
  }
    else
  {
    v11 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_HashObject_unsigned_int_unsigned_int;
    if ( v11 && *((char*)(Block) + 13) )
    {
    __3_YAXPAX_Z(v11);
    *(Block + 1) = 0;
    }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (char*)Block;
  }
}
}
} // namespace gamemd

// 0x58A6E0
namespace gamemd {
char VectorClass_UHashObject_uint_uint::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int *v5;
    int *v6;
    int v8;
    int v9;
    int v10;
    if ( a2 )
  {
    v4 = a3;
    this->IsInitialized = 0;
    if ( a3 )
    {
    v6 = a3;
    }
    else
    {
    v5 = __2_YAPAXI_Z(8 * a2);
    if ( v5 )
    v6 = v5;
    else
    v6 = 0;
    }
    this->IsInitialized = 1;
    if ( v6 )
    {
    if ( this->Items )
      {
    v8 = this->Capacity;
    if ( a2 < v8 )
    v8 = a2;
    v9 = 0;
    if ( v8 > 0 )
        {
    do
          {
    v10 = this->Items;
    ++v9;
    v6[2 * v9 - 2] = *(int*)(v10 + 8 * v9 - 8);
    v6[2 * v9 - 1] = *(int*)(v10 + 8 * v9 - 4);
          }
    while ( v9 < v8 );
    v4 = a3;
        }
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v6);
    this->Capacity = a2;
    this->IsAllocated = v4 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->ddtor();
    return 1;
  }
}
}
} // namespace gamemd

// 0x58A7B0
namespace gamemd {
void VectorClass_UHashObject_uint_uint::ddtor()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x58A7E0
namespace gamemd {
int VectorClass_UHashObject_uint_uint::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; i += 2 )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x58A820
namespace gamemd {
unsigned int VectorClass_UHashObject_uint_uint::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 3;
    else
    return 0;
}
}
} // namespace gamemd

// 0x58A840
namespace gamemd {
char * VectorClass_W4PassabilityType::Constructor_0(unsigned int * Block, char a2)
{
{
    int v3;
    int *v4;
    int v5;
    int v6;
    int *v7;
    int v8;
    void *v9;
    void *v11;
    if ( (a2 & 2) != 0 )
  {
    v3 = *(Block - 1);
    v4 = Block - 1;
    v5 = 3 * v3;
    v6 = v3 - 1;
    v7 = Block + 2 * v5;
    if ( v6 >= 0 )
    {
    v8 = v6 + 1;
    do
      {
    v9 = (void*)*(v7 - 5);
    v7 -= 6;
    *v7 = (unsigned int)vt_VectorClass_HashObject_unsigned_int_SubzoneConnectionStruct;
    if ( v9 && *((char*)(v7) + 13) )
        {
    __3_YAXPAX_Z(v9);
    v7[1] = 0;
        }
    --v8;
    *((char*)(v7) + 13) = 0;
    v7[2] = 0;
      }
    while ( v8 );
    }
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(v4);
    return (char*)v4;
  }
    else
  {
    v11 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_HashObject_unsigned_int_SubzoneConnectionStruct;
    if ( v11 && *((char*)(Block) + 13) )
    {
    __3_YAXPAX_Z(v11);
    *(Block + 1) = 0;
    }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (char*)Block;
  }
}
}
} // namespace gamemd

// 0x58A8F0
namespace gamemd {
char VectorClass_UHashObject_uint_SubzoneConn::Release(int a2, char * a3)
{
{
    int v3;
    char *v5;
    char *v6;
    char *v7;
    int v8;
    char *v9;
    int v10;
    int v12;
    int v13;
    char *v14;
    int *v15;
    v3 = a2;
    if ( a2 )
  {
    v5 = a3;
    this->IsInitialized = 0;
    if ( a3 )
    {
    if ( a2 - 1 >= 0 )
      {
    v9 = a3 + 4;
    v10 = a2;
    do
        {
    *(int*)v9 = 0;
    v9[4] = 0;
    v9 += 12;
    --v10;
        }
    while ( v10 );
      }
    }
    else
    {
    v6 = (char*)__2_YAPAXI_Z(12 * a2);
    if ( v6 )
      {
    if ( a2 - 1 >= 0 )
        {
    v7 = v6 + 4;
    v8 = a2;
    do
          {
    *(int*)v7 = 0;
    v7[4] = 0;
    v7 += 12;
    --v8;
          }
    while ( v8 );
        }
    v5 = v6;
      }
    else
      {
    v5 = 0;
      }
    }
    this->IsInitialized = 1;
    if ( v5 )
    {
    if ( this->Items )
      {
    v12 = this->Capacity;
    if ( a2 < v12 )
    v12 = a2;
    if ( v12 > 0 )
        {
    v13 = 0;
    do
          {
    v14 = &v5[v13];
    v15 = (int*)(v13 + this->Items);
    v13 += 12;
    --v12;
    *(int*)v14 = *v15;
    *((int*)(v14) + 1) = v15[1];
    *((int*)(v14) + 2) = v15[2];
          }
    while ( v12 );
    v3 = a2;
        }
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v5);
    this->Capacity = v3;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->ddtor();
    return 1;
  }
}
}
} // namespace gamemd

// 0x58A9F0
namespace gamemd {
void VectorClass_UHashObject_uint_SubzoneConn::ddtor()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x58AA20
namespace gamemd {
int VectorClass_UHashObject_uint_SubzoneConn::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; i += 3 )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x58AA60
namespace gamemd {
unsigned int VectorClass_UHashObject_uint_SubzoneConn::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (a2 - this->Items) / 0xCu;
    else
    return 0;
}
}
} // namespace gamemd

// 0x58AA90
namespace gamemd {
VectorClass * VectorClass_W4PassabilityType::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_enum_PassabilityType;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x58AAE0
namespace gamemd {
DynamicVector * VectorClass_W4PassabilityType::Constructor_1(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_enum_PassabilityType;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x58AB30
namespace gamemd {
VectorClass * VectorClass_UHashObject_uint_uint::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_HashObject_unsigned_int_unsigned_int;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x58AB80
namespace gamemd {
VectorClass * VectorClass_UHashObject_uint_SubzoneConn::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_HashObject_unsigned_int_SubzoneConnectionStruct;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x58AC70
unsigned int * VectorClass::ConstructSubzone(int a2, int a3)
{
{
    int v4;
    int v5;
    char *v7;
    char *v8;
    int v9;
    this->Items = (void*)(0);
    this->Capacity = a2;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    this->vfptr = vt_VectorClass_SubzoneConnectionStruct;
    if ( !a2 )
    return this;
    if ( !a3 )
  {
    v7 = (char*)__2_YAPAXI_Z(8 * a2);
    if ( v7 )
    {
    v8 = v7;
    if ( a2 - 1 >= 0 )
      {
    v9 = a2;
    do
        {
    *(int*)v8 = 0;
    v8[4] = 0;
    v8 += 8;
    --v9;
        }
    while ( v9 );
    this->Items = (void*)(v7);
    this->IsAllocated = 1;
    return this;
      }
    }
    else
    {
    v7 = 0;
    }
    this->Items = (void*)(v7);
    this->IsAllocated = 1;
    return this;
  }
    v4 = a3;
    if ( a2 - 1 >= 0 )
  {
    v5 = a2;
    do
    {
    *(int*)v4 = 0;
    *(char*)(v4 + 4) = 0;
    v4 += 8;
    --v5;
    }
    while ( v5 );
  }
    this->Items = (void*)(a3);
    return this;
}
}

// 0x58AD10
namespace gamemd {
unsigned int * VectorClass_USubzoneTrackingStruct::SetCapacity(unsigned int * a2)
{
{
    int v3;
    char *v4;
    char *v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    if ( this == a2 )
    return this;
    this->ddtor();
    v3 = *((int*)(a2) + 2);
    this->Capacity = v3;
    if ( !v3 )
  {
    this->Items = (void*)(0);
    this->IsAllocated = 0;
    return this;
  }
    v4 = (char*)__2_YAPAXI_Z(8 * v3);
    if ( v4 )
  {
    v5 = v4;
    if ( v3 - 1 >= 0 )
    {
    v6 = v3;
    do
      {
    *(int*)v5 = 0;
    v5[4] = 0;
    v5 += 8;
    --v6;
      }
    while ( v6 );
    }
  }
    else
  {
    v4 = 0;
  }
    this->Items = (void*)(v4);
    if ( !v4 )
    return this;
    v7 = this->Capacity;
    v8 = 0;
    this->IsAllocated = 1;
    if ( v7 <= 0 )
    return this;
    do
  {
    v9 = *((int*)(a2) + 1);
    v10 = this->Items;
    *(int*)(v10 + 8 * v8) = *(int*)(v9 + 8 * v8);
    *(int*)(v10 + 8 * v8 + 4) = *(int*)(v9 + 8 * v8 + 4);
    ++v8;
  }
    while ( v8 < this->Capacity );
    return this;
}
}
} // namespace gamemd

// 0x5AC3A0
namespace gamemd {
void VectorClass_ptr_MapRegionClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x5AC3D0
namespace gamemd {
unsigned int VectorClass_ptr_MapRegionClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5AC3F0
namespace gamemd {
int VectorClass_ptr_MapRegionClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x5AC5F0
namespace gamemd {
void VectorClass_N::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x5AC620
namespace gamemd {
unsigned int VectorClass_N::GetItemIndex(int a2)
{
if ( this->IsInitialized )
    return (unsigned int)((char *)a2 - (char *)this->Items) >> 3;
else
    return 0;
}
} // namespace gamemd

// 0x5AC640
namespace gamemd {
double VectorClass_N::Clear(int a2)
{
return ((double *)this->Items)[a2];
}
} // namespace gamemd

// 0x5AC6A0
namespace gamemd {
char VectorClass_ptr_MapRegionClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x5AC6E0
namespace gamemd {
char VectorClass_ptr_MapRegionClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->FindItemIndex();
    return 1;
  }
}
}
} // namespace gamemd

// 0x5AC790
namespace gamemd {
void VectorClass_ptr_MapRegionClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x5AC7C0
namespace gamemd {
int VectorClass_ptr_MapRegionClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x5AC800
namespace gamemd {
unsigned int VectorClass_ptr_MapRegionClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5AC820
namespace gamemd {
char VectorClass_ptr_MapRegionClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->FindItemIndex();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x5AC8D0
namespace gamemd {
int VectorClass_ptr_MapRegionClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x5AD0F0
namespace gamemd {
char VectorClass_N::AddRef(int a2)
{
VectorClass_N* other = (VectorClass_N *)a2;
int capacity = this->Capacity;
if ( capacity == other->Capacity )
{
    int i = 0;
    if ( capacity <= 0 )
        return 1;
    double* myItems = (double *)this->Items;
    double* otherItems = (double *)other->Items;
    while ( myItems[i] == otherItems[i] )
    {
        ++i;
        if ( i >= capacity )
            return 1;
    }
}
return 0;
}
} // namespace gamemd

// 0x5AD130
namespace gamemd {
char VectorClass_N::Release(int a2, unsigned int * a3)
{
{
    int v3;
    int *v5;
    int v7;
    int v8;
    int v9;
    v3 = a2;
    if ( a2 )
  {
    v5 = a3;
    this->IsInitialized = 0;
    if ( !a3 )
    v5 = __2_YAPAXI_Z(8 * a2);
    this->IsInitialized = 1;
    if ( v5 )
    {
    if ( this->Items )
      {
    v7 = this->Capacity;
    if ( a2 < v7 )
    v7 = a2;
    v8 = 0;
    if ( v7 > 0 )
        {
    do
          {
    v9 = this->Items;
    ++v8;
    v5[2 * v8 - 2] = *(int*)(v9 + 8 * v8 - 8);
    v5[2 * v8 - 1] = *(int*)(v9 + 8 * v8 - 4);
          }
    while ( v8 < v7 );
    v3 = a2;
        }
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v5);
    this->Capacity = v3;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x5AD1F0
namespace gamemd {
void VectorClass_N::ddtor()
{
if ( this->Items && this->IsAllocated )
{
    operator delete(this->Items);
    this->Items = 0;
}
this->IsAllocated = 0;
this->Capacity = 0;
}
} // namespace gamemd

// 0x5AD220
namespace gamemd {
int VectorClass_N::GetSize(double * a2)
{
if ( !this->IsInitialized )
    return 0;
double* i = (double *)this->Items;
int capacity = this->Capacity;
int result = 0;
if ( capacity <= 0 )
    return -1;
while ( *i != *a2 )
{
    ++result;
    ++i;
    if ( result >= capacity )
        return -1;
}
return result;
}
} // namespace gamemd

// 0x5AD270
namespace gamemd {
unsigned int VectorClass_N::GetCapacity(int a2)
{
if ( this->IsInitialized )
    return (unsigned int)((char *)a2 - (char *)this->Items) >> 3;
else
    return 0;
}
} // namespace gamemd

// 0x5AD290
namespace gamemd {
char VectorClass_N::SetCapacity(int a2, unsigned int * a3)
{
{
    int v3;
    int *v5;
    int v6;
    int v7;
    int v8;
    int v9;
    v3 = a2;
    if ( a2 )
  {
    v5 = a3;
    this->IsInitialized = 0;
    if ( !a3 )
    v5 = __2_YAPAXI_Z(8 * a2);
    this->IsInitialized = 1;
    if ( !v5 )
    return 0;
    if ( this->Items )
    {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    v7 = 0;
    if ( v6 > 0 )
      {
    do
        {
    v8 = this->Items;
    ++v7;
    v5[2 * v7 - 2] = *(int*)(v8 + 8 * v7 - 8);
    v5[2 * v7 - 1] = *(int*)(v8 + 8 * v7 - 4);
        }
    while ( v7 < v6 );
    v3 = a2;
      }
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v5);
    this->Capacity = v3;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v9 = this->Capacity;
    if ( v9 < this->Count )
    this->Count = v9;
    return 1;
}
}
} // namespace gamemd

// 0x5AD350
namespace gamemd {
int VectorClass_N::FindItemIndex(double * a2)
{
{
    int v2;
    int v3;
    double *i;
    v2 = this->Count;
    v3 = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (double *)this->Items; *i != *a2; ++i )
  {
    if ( ++v3 >= v2 )
    return -1;
  }
    return v3;
}
}
} // namespace gamemd

// 0x5AD390
namespace gamemd {
VectorClass * VectorClass_ptr_MapRegionClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_MapRegionClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x5AD3E0
namespace gamemd {
unsigned int * VectorClass_ptr_MapRegionClass::loc_5AD3E0(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_MapRegionClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}
}
} // namespace gamemd

// 0x5AD5C0
namespace gamemd {
VectorClass * VectorClass_N::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_double;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x5AD610
namespace gamemd {
DynamicVector * VectorClass_N::Constructor_VectorClass_double_(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_double;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x5D05F0
namespace gamemd {
unsigned int * VectorClass_Point2D::Count(unsigned int * a2, int a3)
{
{
    int v3;
    v3 = this->Items;
    *a2 = *(int*)(v3 + 8 * a3);
    *((int*)(a2) + 1) = *(int*)(v3 + 8 * a3 + 4);
    return a2;
}
}
} // namespace gamemd

// 0x5D0660
namespace gamemd {
int VectorClass_ptr_MSTextEntry::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x5D06C0
namespace gamemd {
int VectorClass_ptr_MapSelection::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x5D07E0
namespace gamemd {
int VectorClass_ptr_MSSfxEntry::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x5D07F0
namespace gamemd {
char VectorClass_Point2D::Get(int a2)
{
{
    int v2;
    int v3;
    int v4;
    int *v5;
    int *v6;
    int v7;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = *(int*)(a2 + 4);
    v5 = (int*)this->Items;
    v6 = (int*)(v4 + 4);
    v7 = v4 - (int)v5;
    while ( *v5 == *(int*)((char*)(v5) + v7) && v5[1] == *v6 )
    {
    ++v3;
    v6 += 2;
    v5 += 2;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x5D0850
namespace gamemd {
char VectorClass_Point2D::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int *v5;
    int *v6;
    int v8;
    int v9;
    int v10;
    if ( a2 )
  {
    v4 = a3;
    this->IsInitialized = 0;
    if ( a3 )
    {
    v6 = a3;
    }
    else
    {
    v5 = __2_YAPAXI_Z(8 * a2);
    if ( v5 )
    v6 = v5;
    else
    v6 = 0;
    }
    this->IsInitialized = 1;
    if ( v6 )
    {
    if ( this->Items )
      {
    v8 = this->Capacity;
    if ( a2 < v8 )
    v8 = a2;
    v9 = 0;
    if ( v8 > 0 )
        {
    do
          {
    v10 = this->Items;
    ++v9;
    v6[2 * v9 - 2] = *(int*)(v10 + 8 * v9 - 8);
    v6[2 * v9 - 1] = *(int*)(v10 + 8 * v9 - 4);
          }
    while ( v9 < v8 );
    v4 = a3;
        }
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v6);
    this->Capacity = a2;
    this->IsAllocated = v4 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Set();
    return 1;
  }
}
}
} // namespace gamemd

// 0x5D0920
namespace gamemd {
void VectorClass_Point2D::Set()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x5D0950
namespace gamemd {
int VectorClass_Point2D::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2 || i[1] != *((int*)(a2) + 1); i += 2 )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x5D09A0
namespace gamemd {
unsigned int VectorClass_Point2D::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 3;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5D0AE0
namespace gamemd {
char VectorClass_ptr_MSTextEntry::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x5D0B20
namespace gamemd {
char VectorClass_ptr_MSTextEntry::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x5D0BD0
namespace gamemd {
void VectorClass_ptr_MSTextEntry::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x5D0C00
namespace gamemd {
int VectorClass_ptr_MSTextEntry::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x5D0C40
namespace gamemd {
unsigned int VectorClass_ptr_MSTextEntry::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5D0D40
namespace gamemd {
char VectorClass_ptr_MapSelection::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x5D0D80
namespace gamemd {
char VectorClass_ptr_MapSelection::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x5D0E30
namespace gamemd {
void VectorClass_ptr_MapSelection::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x5D0E60
namespace gamemd {
int VectorClass_ptr_MapSelection::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x5D0EA0
namespace gamemd {
unsigned int VectorClass_ptr_MapSelection::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5D1460
namespace gamemd {
char VectorClass_ptr_MSSfxEntry::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x5D14A0
namespace gamemd {
char VectorClass_ptr_MSSfxEntry::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x5D1550
namespace gamemd {
void VectorClass_ptr_MSSfxEntry::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x5D1580
namespace gamemd {
int VectorClass_ptr_MSSfxEntry::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x5D15C0
namespace gamemd {
unsigned int VectorClass_ptr_MSSfxEntry::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5D16C0
namespace gamemd {
VectorClass * VectorClass_Point2D::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_Point2D;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x5D1760
namespace gamemd {
VectorClass * VectorClass_ptr_MSTextEntry::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_MSTextEntry;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x5D1800
namespace gamemd {
VectorClass * VectorClass_ptr_MapSelection::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_MapSelection;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x5D19E0
namespace gamemd {
VectorClass * VectorClass_ptr_MSSfxEntry::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_MSSfxEntry;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x5D2720
namespace gamemd {
void VectorClass_ptr_MSSfx::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x5D2750
namespace gamemd {
unsigned int VectorClass_ptr_MSSfx::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5D2780
namespace gamemd {
void VectorClass_Point2D::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x5D27B0
namespace gamemd {
unsigned int VectorClass_Point2D::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5D27D0
namespace gamemd {
int VectorClass_ptr_MSSfx::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x5D27E0
namespace gamemd {
char VectorClass_ptr_MSSfx::FindItemIndex(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x5D2820
namespace gamemd {
char VectorClass_ptr_MSSfx::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x5D28D0
namespace gamemd {
void VectorClass_ptr_MSSfx::Destroy_0()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x5D2960
namespace gamemd {
char VectorClass_ptr_MSSfx::SetCapacity_0(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Remove();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x5D2A10
namespace gamemd {
int VectorClass_ptr_MSSfx::FindItemIndex_0(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x5D2A40
namespace gamemd {
char VectorClass_ptr_MSSfx::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x5D2A80
namespace gamemd {
char VectorClass_ptr_MSSfx::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x5D2B30
namespace gamemd {
void VectorClass_ptr_MSSfx::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x5D2B60
namespace gamemd {
int VectorClass_ptr_MSSfx::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x5D2BA0
namespace gamemd {
unsigned int VectorClass_ptr_MSSfx::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5D2BC0
namespace gamemd {
char VectorClass_Point2D::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Set();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x5D2C70
namespace gamemd {
int VectorClass_Point2D::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x5D2CF0
namespace gamemd {
DynamicVector * VectorClass_ptr_MSSfx::Constructor_VectorClass_MSAnim___(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_MSAnim;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x5D2D40
namespace gamemd {
VectorClass * VectorClass_ptr_MSSfx::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_MSSfx;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x5D2D90
namespace gamemd {
DynamicVector * VectorClass_Point2D::Constructor_VectorClass_MSSfx___(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_MSSfx;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x5D5130
namespace gamemd {
unsigned int * VectorClass_UAcceleratorTracker::Clear(unsigned int * a2, int a3)
{
{
    int v3;
    v3 = this->Items;
    *a2 = *(int*)(v3 + 8 * a3);
    *((int*)(a2) + 1) = *(int*)(v3 + 8 * a3 + 4);
    return a2;
}
}
} // namespace gamemd

// 0x5D53B0
namespace gamemd {
char VectorClass_UAcceleratorTracker::AddRef(int a2)
{
{
    int v2;
    int v3;
    int v4;
    int *v5;
    int *v6;
    int v7;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = *(int*)(a2 + 4);
    v5 = (int*)this->Items;
    v6 = (int*)(v4 + 4);
    v7 = v4 - (int)v5;
    while ( *v5 == *(int*)((char*)(v5) + v7) && v5[1] == *v6 )
    {
    ++v3;
    v6 += 2;
    v5 += 2;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x5D5410
namespace gamemd {
char VectorClass_UAcceleratorTracker::Release(int a2, unsigned int * a3)
{
{
    int v3;
    int *v5;
    int *v6;
    int *v7;
    int v8;
    int *v9;
    int v10;
    int v12;
    int v13;
    int v14;
    int *v15;
    v3 = a2;
    if ( a2 )
  {
    v5 = a3;
    this->IsInitialized = 0;
    if ( a3 )
    {
    v9 = a3;
    if ( a2 - 1 >= 0 )
      {
    v10 = a2;
    do
        {
    *v9 = 0;
    v9[1] = 0;
    v9 += 2;
    --v10;
        }
    while ( v10 );
      }
    }
    else
    {
    v6 = __2_YAPAXI_Z(8 * a2);
    if ( v6 )
      {
    v7 = v6;
    if ( a2 - 1 >= 0 )
        {
    v8 = a2;
    do
          {
    *v7 = 0;
    v7[1] = 0;
    v7 += 2;
    --v8;
          }
    while ( v8 );
        }
    v5 = v6;
      }
    else
      {
    v5 = 0;
      }
    }
    this->IsInitialized = 1;
    if ( v5 )
    {
    if ( this->Items )
      {
    v12 = this->Capacity;
    if ( a2 < v12 )
    v12 = a2;
    v13 = 0;
    if ( v12 > 0 )
        {
    do
          {
    v14 = 2 * v13;
    v15 = (int*)(this->Items + 8 * v13++);
    v5[v14] = *v15;
    v5[v14 + 1] = v15[1];
          }
    while ( v13 < v12 );
    v3 = a2;
        }
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v5);
    this->Capacity = v3;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->ddtor();
    return 1;
  }
}
}
} // namespace gamemd

// 0x5D5500
namespace gamemd {
void VectorClass_UAcceleratorTracker::ddtor()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x5D5530
namespace gamemd {
int VectorClass_UAcceleratorTracker::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2 || i[1] != *((int*)(a2) + 1); i += 2 )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x5D5580
namespace gamemd {
unsigned int VectorClass_UAcceleratorTracker::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 3;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5D5780
namespace gamemd {
VectorClass * VectorClass_UAcceleratorTracker::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_AcceleratorTracker;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x5D8100
namespace gamemd {
int VectorClass_ptr_MultiplayerTeam::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x5D82F0
namespace gamemd {
char VectorClass_ptr_MultiplayerTeam::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x5D8330
namespace gamemd {
char VectorClass_ptr_MultiplayerTeam::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x5D83E0
namespace gamemd {
void VectorClass_ptr_MultiplayerTeam::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x5D8410
namespace gamemd {
int VectorClass_ptr_MultiplayerTeam::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x5D8450
namespace gamemd {
unsigned int VectorClass_ptr_MultiplayerTeam::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5D8640
void VectorClass::ddtor()
{
if ( this->Items && this->IsAllocated )
{
    operator delete(this->Items);
    this->Items = 0;
}
this->IsAllocated = 0;
this->Capacity = 0;
}

// 0x5D8810
namespace gamemd {
VectorClass * VectorClass_ptr_MultiplayerTeam::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_MultiplayerTeam;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x5EEBB0
namespace gamemd {
void VectorClass_cptr_MultiMission::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x5EEBE0
namespace gamemd {
unsigned int VectorClass_cptr_MultiMission::GetItemIndex(int a2)
{
if ( this->IsInitialized )
    return (unsigned int)((char *)a2 - (char *)this->Items) >> 2;
else
    return 0;
}
} // namespace gamemd

// 0x5EEC00
namespace gamemd {
int VectorClass_cptr_MultiMission::Capacity(int a2)
{
return this->Items[a2];
}
} // namespace gamemd

// 0x5EEC10
namespace gamemd {
char VectorClass_cptr_MultiMission::AddRef(int a2)
{
VectorClass_cptr_MultiMission* other = (VectorClass_cptr_MultiMission *)a2;
int capacity = this->Capacity;
if ( capacity == other->Capacity )
{
    int i = 0;
    if ( capacity <= 0 )
        return 1;
    unsigned int* myItems = (unsigned int *)this->Items;
    unsigned int* otherItems = (unsigned int *)other->Items;
    while ( myItems[i] == otherItems[i] )
    {
        ++i;
        if ( i >= capacity )
            return 1;
    }
}
return 0;
}
} // namespace gamemd

// 0x5EEC50
namespace gamemd {
char VectorClass_cptr_MultiMission::SetAt(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x5EED00
void VectorClass::Cleanup3()
{
if ( this->Items && this->IsAllocated )
{
    operator delete(this->Items);
    this->Items = 0;
}
this->IsAllocated = 0;
this->Capacity = 0;
}

// 0x5EED30
namespace gamemd {
int VectorClass_cptr_MultiMission::GetSize(unsigned int * a2)
{
if ( !this->IsInitialized )
    return 0;
unsigned int* i = (unsigned int *)this->Items;
int capacity = this->Capacity;
int result = 0;
if ( capacity <= 0 )
    return -1;
while ( *i != *a2 )
{
    ++result;
    ++i;
    if ( result >= capacity )
        return -1;
}
return result;
}
} // namespace gamemd

// 0x5EED70
namespace gamemd {
unsigned int VectorClass_cptr_MultiMission::GetCapacity(int a2)
{
if ( this->IsInitialized )
    return (unsigned int)((char *)a2 - (char *)this->Items) >> 2;
else
    return 0;
}
} // namespace gamemd

// 0x5EED90
namespace gamemd {
char VectorClass_cptr_MultiMission::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x5EEE90
namespace gamemd {
int VectorClass_cptr_MultiMission::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x5EEEC0
namespace gamemd {
VectorClass * VectorClass_cptr_MultiMission::GetAt(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_MultiMission_const;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x5EEF10
namespace gamemd {
DynamicVector * VectorClass_cptr_MultiMission::Constructor(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_MultiMission_const;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x5EF190
namespace gamemd {
int VectorClass_cptr_MultiMission::j_vt09(unsigned char * a1, signed int a3, int a4, int a5, int a6, int a7)
{
{
    short *v8;
    signed int v9;
    unsigned int *v10;
    unsigned int v11;
    int v12;
    if ( *(int *)&this->__pad_0[76] == -1 )
    return 0;
    v8 = (short *)this->field_50;
    *v8 = -9539;
    v8[1] = a3;
    v8[2] = -8529;
    qmemcpy((void *)(this->field_50 + 6), a1, a3);
    v9 = 0;
    v10 = (unsigned int *)(this->field_50 + a3 + 6);
    v11 = 0;
    if ( a3 > 0 )
  {
    do
    {
    v12 = a1[v9++] + (v11 >> 31);
    v11 = v12 + 2 * v11;
    }
    while ( v9 < a3 );
    v10 = (unsigned int *)(this->field_50 + a3 + 6);
  }
    *v10 = v11;
    *(char *)(a3 + 10 + this->field_50) = 13;
    WinModemClass::WriteSerial((int)g_ClipboardBuffer, (LPCVOID)this->field_50, (WinModemClass *)(a3 + 11));
    return 1;
}
}
} // namespace gamemd

// 0x5EF290
namespace gamemd {
unsigned int * VectorClass_cptr_MultiMission::j_vt00(char a2)
{
{
    IPXConnClass *v3;
    v3 = (IPXConnClass *)this->field_50;
    *(int *)this->__pad_0 = &vt_NullModemConnClass;
    __3_YAXPAX_Z(v3);
    ConnectionClass::dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this->__pad_0;
}
}
} // namespace gamemd

// 0x5F9B00
namespace gamemd {
void VectorClass_ptr_ObjectTypeClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x5F9B30
namespace gamemd {
unsigned int VectorClass_ptr_ObjectTypeClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5F9B50
namespace gamemd {
int VectorClass_ptr_ObjectTypeClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x5F9B80
namespace gamemd {
char VectorClass_ptr_ObjectTypeClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x5F9BC0
namespace gamemd {
char VectorClass_ptr_ObjectTypeClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x5F9C70
namespace gamemd {
void VectorClass_ptr_ObjectTypeClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x5F9CA0
namespace gamemd {
int VectorClass_ptr_ObjectTypeClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x5F9CE0
namespace gamemd {
unsigned int VectorClass_ptr_ObjectTypeClass::LoadTypeData(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5F9D00
namespace gamemd {
char VectorClass_ptr_ObjectTypeClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x5F9DB0
namespace gamemd {
int VectorClass_ptr_ObjectTypeClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x5F9DE0
namespace gamemd {
VectorClass * VectorClass_ptr_ObjectTypeClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_ObjectTypeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x5F9E30
namespace gamemd {
DynamicVector * VectorClass_ptr_ObjectTypeClass::Constructor_VectorClass_ObjectTypeClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_ObjectTypeClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x5FFFC0
void VectorClass::Destructor()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}

// 0x5FFFF0
namespace gamemd {
unsigned int VectorClass_ptr_SpotLightClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x600010
namespace gamemd {
int VectorClass_ptr_SpotLightClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x600020
namespace gamemd {
char VectorClass_ptr_SpotLightClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x600060
namespace gamemd {
char VectorClass_ptr_SpotLightClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x600110
namespace gamemd {
void VectorClass_ptr_SpotLightClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x600140
namespace gamemd {
int VectorClass_ptr_SpotLightClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x600180
namespace gamemd {
unsigned int VectorClass_ptr_SpotLightClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x6001A0
namespace gamemd {
char VectorClass_ptr_SpotLightClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Remove();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x600250
namespace gamemd {
int VectorClass_ptr_SpotLightClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x600280
namespace gamemd {
VectorClass * VectorClass_ptr_SpotLightClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_SpotLightClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x6002D0
namespace gamemd {
DynamicVector * VectorClass_ptr_SpotLightClass::Constructor_VectorClass_SpotLightClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_SpotLightClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x627D70
namespace gamemd {
int VectorClass_ptr_ColorScheme::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x627E10
namespace gamemd {
char VectorClass_ptr_ColorScheme::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x627E50
namespace gamemd {
char VectorClass_ptr_ColorScheme::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x627F00
namespace gamemd {
void VectorClass_ptr_ColorScheme::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x627F30
namespace gamemd {
int VectorClass_ptr_ColorScheme::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x627F70
namespace gamemd {
unsigned int VectorClass_ptr_ColorScheme::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x6282E0
namespace gamemd {
char VectorClass_ptr_ColorScheme::SetCapacity(int a2, char * a3)
{
{
    int v3;
    char *v5;
    char *v6;
    _BYTE *v7;
    int v8;
    _BYTE *v9;
    int v10;
    int v12;
    int v13;
    int v14;
    char *v15;
    v3 = a2;
    if ( a2 )
  {
    v5 = a3;
    this->IsInitialized = 0;
    if ( a3 )
    {
    if ( a2 - 1 >= 0 )
      {
    v9 = a3 + 2;
    v10 = a2;
    do
        {
    *(v9 - 2) = 0;
    *(v9 - 1) = 0;
    *v9 = 0;
    v9 += 3;
    --v10;
        }
    while ( v10 );
      }
    }
    else
    {
    v6 = (char*)__2_YAPAXI_Z(3 * a2);
    if ( v6 )
      {
    if ( a2 - 1 >= 0 )
        {
    v7 = v6 + 2;
    v8 = a2;
    do
          {
    *(v7 - 2) = 0;
    *(v7 - 1) = 0;
    *v7 = 0;
    v7 += 3;
    --v8;
          }
    while ( v8 );
        }
    v5 = v6;
      }
    else
      {
    v5 = 0;
      }
    }
    this->IsInitialized = 1;
    if ( v5 )
    {
    if ( this->Items )
      {
    v12 = this->Capacity;
    if ( a2 < v12 )
    v12 = a2;
    if ( v12 > 0 )
        {
    v13 = 0;
    do
          {
    v14 = this->Items + v13;
    v15 = &v5[v13];
    v13 += 3;
    --v12;
    *(short*)v15 = *(short*)v14;
    v15[2] = *(char*)(v14 + 2);
          }
    while ( v12 );
    v3 = a2;
        }
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v5);
    this->Capacity = v3;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x6283E0
namespace gamemd {
void VectorClass_ptr_ColorScheme::Destroy()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x628410
namespace gamemd {
int VectorClass_ptr_ColorScheme::ScalarDeletingDestructor(int a2)
{
{
    if ( !this->IsInitialized )
    return 0;
    if ( this->Capacity > 0 )
    VtableStub::Method_5175D0(this->Items, a2);
    return -1;
}
}
} // namespace gamemd

// 0x628470
namespace gamemd {
unsigned int VectorClass_ptr_ColorScheme::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (a2 - this->Items) / 3u;
    else
    return 0;
}
}
} // namespace gamemd

// 0x6285F0
namespace gamemd {
VectorClass * VectorClass_ptr_ColorScheme::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_ColorScheme;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x628760
namespace gamemd {
VectorClass * VectorClass_ptr_ColorScheme::Constructor_VectorClass_HSVClass_(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_HSVClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x628A40
namespace gamemd {
void VectorClass_ptr_ColorScheme::Destroy_0()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x628A70
namespace gamemd {
int VectorClass_ptr_ColorScheme::SetCapacity_1(int a2)
{
{
    if ( !this->IsInitialized )
    return 0;
    if ( this->Capacity > 0 )
    Stub::InfiniteLoop(this->Items, a2);
    return -1;
}
}
} // namespace gamemd

// 0x628AD0
namespace gamemd {
unsigned int VectorClass_ptr_ColorScheme::GetItemIndex_0(int a2)
{
{
    if ( this->IsInitialized )
    return (a2 - this->Items) / 0x104u;
    else
    return 0;
}
}
} // namespace gamemd

// 0x628DF0
unsigned int * VectorClass::ConstructHSV(int a2, int a3)
{
{
    char *v4;
    _BYTE *v5;
    int v6;
    char *v8;
    _BYTE *v9;
    int v10;
    v4 = 0;
    this->Items = (void*)(0);
    this->Capacity = a2;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    this->vfptr = vt_VectorClass_HSVClass;
    if ( !a2 )
    return this;
    if ( !a3 )
  {
    v8 = (char*)__2_YAPAXI_Z(3 * a2);
    if ( v8 )
    {
    if ( a2 - 1 >= 0 )
      {
    v9 = v8 + 2;
    v10 = a2;
    do
        {
    *(v9 - 2) = 0;
    *(v9 - 1) = 0;
    *v9 = 0;
    v9 += 3;
    --v10;
        }
    while ( v10 );
      }
    v4 = v8;
    }
    this->Items = (void*)(v4);
    this->IsAllocated = 1;
    return this;
  }
    if ( a2 - 1 >= 0 )
  {
    v5 = (char*)(a3 + 2);
    v6 = a2;
    do
    {
    *(v5 - 2) = 0;
    *(v5 - 1) = 0;
    *v5 = 0;
    v5 += 3;
    --v6;
    }
    while ( v6 );
  }
    this->Items = (void*)(a3);
    return this;
}
}

// 0x628E80
namespace gamemd {
VectorClass * VectorClass_ptr_ColorScheme::Constructor(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_HashObject_HashString_SchemeNode;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x62B070
namespace gamemd {
void VectorClass_ptr_ParasiteClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x62B0A0
namespace gamemd {
unsigned int VectorClass_ptr_ParasiteClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x62B0C0
namespace gamemd {
int VectorClass_ptr_ParasiteClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x62B0D0
namespace gamemd {
char VectorClass_ptr_ParasiteClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x62B110
namespace gamemd {
char VectorClass_ptr_ParasiteClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x62B1C0
namespace gamemd {
void VectorClass_ptr_ParasiteClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x62B1F0
namespace gamemd {
int VectorClass_ptr_ParasiteClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x62B230
namespace gamemd {
unsigned int VectorClass_ptr_ParasiteClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x62B250
namespace gamemd {
char VectorClass_ptr_ParasiteClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x62B300
namespace gamemd {
int VectorClass_ptr_ParasiteClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x62B330
namespace gamemd {
VectorClass * VectorClass_ptr_ParasiteClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_ParasiteClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x62B380
namespace gamemd {
DynamicVector * VectorClass_ptr_ParasiteClass::Constructor_VectorClass_ParasiteClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_ParasiteClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x630250
char VectorClass::PushBackCopy(AbstractClass * aP1)
{
{
    int v3;
    int v4;
    int v6;
    int v7;
    v3 = this->Capacity;
    if ( this->Count >= v3 )
  {
    if ( !this->IsAllocated && v3 )
    return 0;
    v4 = this->CapacityIncrement;
    if ( v4 <= 0 || !this->SetCapacity(v3 + v4, 0) )
    return 0;
  }
    v6 = this->Count;
    v7 = this->Items;
    this->Count = v6 + 1;
    *(int *)(v7 + 4 * v6) = *(int *)aP1->__pad_0;
    return 1;
}
}

// 0x63DB60
namespace gamemd {
void VectorClass_ptr_PlanningMemberClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x63DB90
namespace gamemd {
unsigned int VectorClass_ptr_PlanningMemberClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x63DBB0
namespace gamemd {
int VectorClass_ptr_PlanningMemberClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x63DBC0
namespace gamemd {
void VectorClass_ptr_PlanningMemberClass::Destroy_0()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x63DBF0
namespace gamemd {
unsigned int VectorClass_ptr_PlanningMemberClass::GetItemIndex_0(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x63DC10
namespace gamemd {
int VectorClass_ptr_PlanningBranchClass::Clear(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x63DD30
namespace gamemd {
int VectorClass_ptr_PlanningTokenClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x63DD40
namespace gamemd {
char VectorClass_ptr_PlanningMemberClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x63DD80
namespace gamemd {
char VectorClass_ptr_PlanningMemberClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x63DE30
namespace gamemd {
void VectorClass_ptr_PlanningMemberClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x63DE60
namespace gamemd {
int VectorClass_ptr_PlanningMemberClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x63DEA0
namespace gamemd {
unsigned int VectorClass_ptr_PlanningMemberClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x63DF20
namespace gamemd {
char VectorClass_ptr_PlanningMemberClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x63E020
namespace gamemd {
int VectorClass_ptr_PlanningMemberClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x63E050
namespace gamemd {
char VectorClass_ptr_PlanningBranchClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x63E140
void VectorClass::Cleanup2()
{
if ( this->Items && this->IsAllocated )
{
    operator delete(this->Items);
    this->Items = 0;
}
this->IsAllocated = 0;
this->Capacity = 0;
}

// 0x63E170
namespace gamemd {
int VectorClass_ptr_PlanningBranchClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x63E1B0
namespace gamemd {
unsigned int VectorClass_ptr_PlanningBranchClass::Remove(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x63E230
namespace gamemd {
char VectorClass_ptr_PlanningMemberClass::SetCapacity_0(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x63E2E0
namespace gamemd {
int VectorClass_ptr_PlanningMemberClass::FindItemIndex_0(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x63E540
char VectorClass::Append(VectorClass * aP1)
{
{
    int v3;
    int v4;
    int v6;
    int v7;
    v3 = this->Capacity;
    if ( this->Count >= v3 )
  {
    if ( !this->IsAllocated && v3 )
    return 0;
    v4 = this->CapacityIncrement;
    if ( v4 <= 0 || !this->SetCapacity(v3 + v4, 0) )
    return 0;
  }
    v6 = this->Count;
    v7 = this->Items;
    this->Count = v6 + 1;
    *(int *)(v7 + 4 * v6) = *(int *)aP1->vtable0;
    return 1;
}
}

// 0x63E900
char VectorClass::EraseAt(IUnknown * aP1)
{
{
    int v3;
    int v4;
    int v5;
    v3 = this->FindItemIndex(aP1);
    if ( v3 == -1 )
    return 0;
    v4 = this->Count;
    if ( v3 >= v4 )
    return 0;
    v5 = v4 - 1;
    for ( this->Count = v5; v3 < this->Count; *(int*)(this->Items + 4 * v3 - 4) = *(int*)(this->Items + 4 * v3) )
    ++v3;
    return 1;
}
}

// 0x63E950
namespace gamemd {
char VectorClass_ptr_PlanningTokenClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x63E990
namespace gamemd {
char VectorClass_ptr_PlanningTokenClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x63EA40
namespace gamemd {
void VectorClass_ptr_PlanningTokenClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x63EA70
namespace gamemd {
int VectorClass_ptr_PlanningTokenClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x63EAB0
namespace gamemd {
unsigned int VectorClass_ptr_PlanningTokenClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x63EC50
namespace gamemd {
VectorClass * VectorClass_ptr_PlanningMemberClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_PlanningMemberClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x63ECA0
namespace gamemd {
DynamicVector * VectorClass_ptr_PlanningMemberClass::Constructor_VectorClass_PlanningMemberClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_PlanningMemberClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x63ECF0
namespace gamemd {
VectorClass * VectorClass_ptr_PlanningBranchClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_PlanningBranchClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x63ED40
namespace gamemd {
DynamicVector * VectorClass_ptr_PlanningMemberClass::Constructor_VectorClass_PlanningBranchClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_PlanningBranchClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x63EED0
namespace gamemd {
VectorClass * VectorClass_ptr_PlanningTokenClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_PlanningTokenClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x658D60
unsigned int * VectorClass::PointConstructor(MapClass * aP1, MapClass * aP2)
{
{
    int v5;
    this->Items = (void*)(0);
    this->Capacity = aP1;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    this->vfptr = vt_VectorClass_Point2D;
    if ( aP1 )
  {
    if ( aP2 )
    {
    this->Items = (void*)(aP2);
    return this;
    }
    v5 = __2_YAPAXI_Z(8 * (int)aP1);
    if ( v5 )
    {
    this->Items = (void*)(v5);
    this->IsAllocated = 1;
    return this;
    }
    this->IsAllocated = 1;
    this->Items = (void*)(0);
  }
    return this;
}
}

// 0x65A1E0
namespace gamemd {
void VectorClass_ptr_RadBeam::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x65A210
namespace gamemd {
unsigned int VectorClass_ptr_RadBeam::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x65A230
namespace gamemd {
int VectorClass_ptr_RadBeam::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x65A240
namespace gamemd {
char VectorClass_ptr_RadBeam::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x65A280
namespace gamemd {
char VectorClass_ptr_RadBeam::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x65A330
namespace gamemd {
void VectorClass_ptr_RadBeam::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x65A360
namespace gamemd {
int VectorClass_ptr_RadBeam::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x65A3A0
namespace gamemd {
unsigned int VectorClass_ptr_RadBeam::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x65A3C0
namespace gamemd {
char VectorClass_ptr_RadBeam::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x65A470
namespace gamemd {
int VectorClass_ptr_RadBeam::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x65A4A0
namespace gamemd {
VectorClass * VectorClass_ptr_RadBeam::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_RadBeam;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x65A4F0
namespace gamemd {
DynamicVector * VectorClass_ptr_RadBeam::Constructor_VectorClass_RadBeam___(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_RadBeam;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x65BEF0
namespace gamemd {
void VectorClass_ptr_RadSiteClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x65BF20
namespace gamemd {
unsigned int VectorClass_ptr_RadSiteClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x65BF40
namespace gamemd {
int VectorClass_ptr_RadSiteClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x65BF50
namespace gamemd {
char VectorClass_ptr_RadSiteClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x65BF90
namespace gamemd {
char VectorClass_ptr_RadSiteClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x65C040
namespace gamemd {
void VectorClass_ptr_RadSiteClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x65C070
namespace gamemd {
int VectorClass_ptr_RadSiteClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x65C0B0
namespace gamemd {
unsigned int VectorClass_ptr_RadSiteClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x65C0D0
namespace gamemd {
char VectorClass_ptr_RadSiteClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x65C180
namespace gamemd {
int VectorClass_ptr_RadSiteClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x65C1B0
namespace gamemd {
VectorClass * VectorClass_ptr_RadSiteClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_RadSiteClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x65C200
namespace gamemd {
DynamicVector * VectorClass_ptr_RadSiteClass::Constructor_VectorClass_RadSiteClass___(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_RadSiteClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x660C80
namespace gamemd {
void VectorClass_ptr_RadarEventClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x660CB0
namespace gamemd {
unsigned int VectorClass_ptr_RadarEventClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x660CD0
namespace gamemd {
int VectorClass_ptr_RadarEventClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x660CE0
namespace gamemd {
char VectorClass_ptr_RadarEventClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x660D20
namespace gamemd {
char VectorClass_ptr_RadarEventClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->FindItemIndex();
    return 1;
  }
}
}
} // namespace gamemd

// 0x660DD0
namespace gamemd {
void VectorClass_ptr_RadarEventClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x660E00
namespace gamemd {
int VectorClass_ptr_RadarEventClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x660E40
namespace gamemd {
unsigned int VectorClass_ptr_RadarEventClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x660E60
namespace gamemd {
char VectorClass_ptr_RadarEventClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->FindItemIndex();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x660F50
namespace gamemd {
int VectorClass_ptr_RadarEventClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x660F80
namespace gamemd {
VectorClass * VectorClass_ptr_RadarEventClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_RadarEventClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x660FD0
namespace gamemd {
unsigned int * VectorClass_ptr_RadarEventClass::loc_660FD0(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_RadarEventClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}
}
} // namespace gamemd

// 0x679F70
void VectorClass::Dtor()
{
{
    void *v2;
    v2 = (void*)this->Items;
    *(void**)this = vt_VectorClass_int;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}

// 0x67A630
int VectorClass::LoadStream(TechnoTypeClass * aP1)
{
{
    int v3;
    int result;
    int i;
    int v6;
    v3 = *(int *)aP1->vtable0;
    v6 = this->Count;
    (*(void (__stdcall **)(TechnoTypeClass *, int *, int, int))(v3 + 16))(aP1, &v6, 4, 0);
    result = v6;
    for ( i = 0; i < v6; ++i )
  {
    (*(void (__stdcall **)(TechnoTypeClass *, int, int, int))(*(int *)aP1->vtable0 + 16))( aP1, this->Items + 4 * i, 4, 0);
    result = v6;
  }
    return result;
}
}

// 0x67A850
int VectorClass::SaveLoad(TechnoTypeClass * aP1)
{
{
    int v3;
    int result;
    int i;
    int v6;
    v3 = *(int *)aP1->vtable0;
    v6 = this->Count;
    (*(void (__stdcall **)(TechnoTypeClass *, int *, int, int))(v3 + 16))(aP1, &v6, 4, 0);
    result = v6;
    for ( i = 0; i < v6; ++i )
  {
    (*(void (__stdcall **)(TechnoTypeClass *, int, int, int))(*(int *)aP1->vtable0 + 16))( aP1, this->Items + 4 * i, 4, 0);
    result = v6;
  }
    return result;
}
}

// 0x67AA80
unsigned int * VectorClass::CopyAssign(VectorClass * aP1)
{
if ( this == aP1 )
    return (unsigned int *)this;
this->Clear();
int sourceCapacity = aP1->Capacity;
this->Capacity = sourceCapacity;
if ( !sourceCapacity )
{
    this->Items = 0;
    this->IsAllocated = 0;
    return (unsigned int *)this;
}
unsigned int* newItems = (unsigned int *)operator new(4 * sourceCapacity);
this->Items = (decltype(this->Items))newItems;
if ( !newItems )
    return (unsigned int *)this;
int capacity = this->Capacity;
int i = 0;
this->IsAllocated = 1;
if ( capacity <= 0 )
    return (unsigned int *)this;
do
{
    ((unsigned int *)this->Items)[i] = ((unsigned int *)aP1->Items)[i];
    ++i;
}
while ( i < this->Capacity );
return (unsigned int *)this;
}

// 0x67AE00
unsigned int * VectorClass::CopySmudge(CCINIClass * aP1)
{
VectorClass* source = (VectorClass *)aP1;
if ( this == source )
    return (unsigned int *)this;
this->Clear();
int sourceCapacity = source->Capacity;
this->Capacity = sourceCapacity;
if ( !sourceCapacity )
{
    this->Items = 0;
    this->IsAllocated = 0;
    return (unsigned int *)this;
}
unsigned int* newItems = (unsigned int *)operator new(4 * sourceCapacity);
this->Items = (decltype(this->Items))newItems;
if ( !newItems )
    return (unsigned int *)this;
int capacity = this->Capacity;
int i = 0;
this->IsAllocated = 1;
if ( capacity <= 0 )
    return (unsigned int *)this;
do
{
    ((unsigned int *)this->Items)[i] = ((unsigned int *)source->Items)[i];
    ++i;
}
while ( i < this->Capacity );
return (unsigned int *)this;
}

// 0x67AF60
void VectorClass::ClearAndFree()
{
if ( this->Items && this->IsAllocated )
{
    operator delete(this->Items);
    this->Items = 0;
}
this->IsAllocated = 0;
this->Capacity = 0;
}

// 0x67B180
unsigned int * VectorClass::CopyBuilding(VectorClass * aP1)
{
if ( this == aP1 )
    return (unsigned int *)this;
this->Clear();
int sourceCapacity = aP1->Capacity;
this->Capacity = sourceCapacity;
if ( !sourceCapacity )
{
    this->Items = 0;
    this->IsAllocated = 0;
    return (unsigned int *)this;
}
unsigned int* newItems = (unsigned int *)operator new(4 * sourceCapacity);
this->Items = (decltype(this->Items))newItems;
if ( !newItems )
    return (unsigned int *)this;
int capacity = this->Capacity;
int i = 0;
this->IsAllocated = 1;
if ( capacity <= 0 )
    return (unsigned int *)this;
do
{
    ((unsigned int *)this->Items)[i] = ((unsigned int *)aP1->Items)[i];
    ++i;
}
while ( i < this->Capacity );
return (unsigned int *)this;
}

// 0x691160
char VectorClass::PushBack2(unsigned int * a2)
{
{
    int v3;
    int v4;
    int v6;
    int v7;
    v3 = this->Capacity;
    if ( this->Count >= v3 )
  {
    if ( !this->IsAllocated && v3 )
    return 0;
    v4 = this->CapacityIncrement;
    if ( v4 <= 0 || !this->SetCapacity(v3 + v4, 0) )
    return 0;
  }
    v6 = this->Count;
    v7 = this->Items;
    this->Count = v6 + 1;
    *(int*)(v7 + 4 * v6) = *a2;
    return 1;
}
}

// 0x69C580
namespace gamemd {
char ** VectorClass_Wstring::Clear(char ** a2, int a3)
{
{
    String::AssignFromPtr(a2, (const char **)(this->Items + 4 * a3));
    return a2;
}
}
} // namespace gamemd

// 0x69C5A0
namespace gamemd {
void VectorClass_ptr_GlobalPacketType::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x69C5D0
namespace gamemd {
unsigned int VectorClass_ptr_GlobalPacketType::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x69C5F0
namespace gamemd {
int VectorClass_ptr_MultiMission::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x69C600
namespace gamemd {
void VectorClass_ptr_GlobalPacketType::Destroy_0()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x69C630
namespace gamemd {
unsigned int VectorClass_ptr_GlobalPacketType::GetItemIndex_0(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x69C650
namespace gamemd {
int VectorClass_ptr_GlobalPacketType::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x69C660
namespace gamemd {
void VectorClass_ptr_GlobalPacketType::Destroy_1()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x69C690
namespace gamemd {
unsigned int VectorClass_ptr_GlobalPacketType::GetItemIndex_1(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x69C6B0
namespace gamemd {
int VectorClass_ptr_PhoneEntryClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x69C970
namespace gamemd {
char VectorClass_Wstring::AddRef(int a2)
{
{
    int v3;
    int v4;
    v3 = this->Capacity;
    if ( v3 == *(int*)(a2 + 8) )
  {
    v4 = 0;
    if ( v3 <= 0 )
    return 1;
    while ( !VectorClass_Wstring::SetCapacity( (const char **)(4 * v4 + this->Items), (const char **)(4 * v4 + *(int*)(a2 + 4))) )
    {
    if ( ++v4 >= this->Capacity )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x69C9C0
namespace gamemd {
char VectorClass_Wstring::Release(int a2, unsigned int * a3)
{
{
    int v3;
    int *v5;
    int *v6;
    int *v7;
    int *v8;
    int i;
    int v11;
    int v12;
    void *v13;
    void **v14;
    int v15;
    int v16;
    int v17;
    int v18;
    void *v19;
    v3 = a2;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    {
    *a3 = a2;
    v6 = a3 + 1;
    v8 = a3 + 1;
    if ( a2 - 1 >= 0 )
      {
    v18 = a2;
    do
        {
    unknown_libname_73(v8++);
    --v18;
        }
    while ( v18 );
      }
    }
    else
    {
    v5 = __2_YAPAXI_Z(4 * a2 + 4);
    if ( v5 )
      {
    *v5 = a2;
    v6 = v5 + 1;
    v7 = v5 + 1;
    if ( a2 - 1 >= 0 )
        {
    v17 = a2;
    do
          {
    unknown_libname_73(v7++);
    --v17;
          }
    while ( v17 );
        }
      }
    else
      {
    v6 = 0;
      }
    }
    this->IsInitialized = 1;
    if ( v6 )
    {
    if ( this->Items )
      {
    if ( a2 >= this->Capacity )
    v3 = this->Capacity;
    for ( i = 0; i < v3; ++i )
    String::Reassign((char*)&v6[i], (const char **)(4 * i + this->Items));
    if ( this->IsAllocated )
        {
    v11 = this->Items;
    if ( v11 )
          {
    v12 = *(int*)(v11 - 4);
    v13 = (void*)(v11 - 4);
    v19 = (void*)(v11 - 4);
    v14 = (void*)(v11 + 4 * v12);
    v15 = v12 - 1;
    if ( v15 >= 0 )
            {
    v16 = v15 + 1;
    do
              {
    DeleteAndZero(--v14);
    --v16;
              }
    while ( v16 );
    v13 = v19;
            }
    __3_YAXPAX_Z(v13);
          }
    this->Items = (void*)(0);
        }
    v3 = a2;
      }
    this->Items = (void*)(v6);
    this->Capacity = v3;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->ddtor();
    return 1;
  }
}
}
} // namespace gamemd

// 0x69CB00
namespace gamemd {
void VectorClass_Wstring::ddtor()
{
{
    int v2;
    int v3;
    void *v4;
    void **v5;
    int v6;
    int v7;
    v2 = this->Items;
    if ( v2 && this->IsAllocated )
  {
    v3 = *(int*)(v2 - 4);
    v4 = (void*)(v2 - 4);
    v5 = (void*)(v2 + 4 * v3);
    v6 = v3 - 1;
    if ( v6 >= 0 )
    {
    v7 = v6 + 1;
    do
      {
    DeleteAndZero(--v5);
    --v7;
      }
    while ( v7 );
    }
    __3_YAXPAX_Z(v4);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x69CB50
namespace gamemd {
int VectorClass_Wstring::GetSize(const char ** a2)
{
{
    int v4;
    if ( !this->IsInitialized )
    return 0;
    v4 = 0;
    if ( this->Capacity <= 0 )
    return -1;
    while ( !String::Compare((const char **)(this->Items + 4 * v4), a2) )
  {
    if ( ++v4 >= this->Capacity )
    return -1;
  }
    return v4;
}
}
} // namespace gamemd

// 0x69CBA0
namespace gamemd {
unsigned int VectorClass_Wstring::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x69CD40
namespace gamemd {
char VectorClass_ptr_MultiMission::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x69CD80
namespace gamemd {
char VectorClass_ptr_MultiMission::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x69CE30
namespace gamemd {
void VectorClass_ptr_MultiMission::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x69CE60
namespace gamemd {
int VectorClass_ptr_MultiMission::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x69CEA0
namespace gamemd {
unsigned int VectorClass_ptr_MultiMission::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x69CEC0
namespace gamemd {
char VectorClass_ptr_GlobalPacketType::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy_0();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x69CF70
namespace gamemd {
int VectorClass_ptr_GlobalPacketType::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x69CFA0
namespace gamemd {
char VectorClass_ptr_GlobalPacketType::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x69CFE0
namespace gamemd {
char VectorClass_ptr_GlobalPacketType::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy_0();
    return 1;
  }
}
}
} // namespace gamemd

// 0x69D090
namespace gamemd {
void VectorClass_ptr_GlobalPacketType::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x69D0C0
namespace gamemd {
int VectorClass_ptr_GlobalPacketType::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x69D100
namespace gamemd {
unsigned int VectorClass_ptr_GlobalPacketType::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x69D120
namespace gamemd {
char VectorClass_ptr_GlobalPacketType::SetCapacity_0(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy_0();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x69D1D0
namespace gamemd {
int VectorClass_ptr_GlobalPacketType::FindItemIndex_0(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x69D200
namespace gamemd {
char VectorClass_ptr_PhoneEntryClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x69D240
namespace gamemd {
char VectorClass_ptr_PhoneEntryClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x69D2F0
namespace gamemd {
void VectorClass_ptr_PhoneEntryClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x69D320
namespace gamemd {
int VectorClass_ptr_PhoneEntryClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x69D360
namespace gamemd {
unsigned int VectorClass_ptr_PhoneEntryClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x69D380
namespace gamemd {
char VectorClass_ptr_GlobalPacketType::SetCapacity_1(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy_0();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x69D430
namespace gamemd {
int VectorClass_ptr_GlobalPacketType::FindItemIndex_1(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x69D4B0
namespace gamemd {
VectorClass * VectorClass_Wstring::QueryInterface(unsigned int * Block, char a2)
{
{
    int v3;
    int v4;
    void *v5;
    void **v6;
    int v7;
    int v8;
    v3 = *(Block + 1);
    *Block = (unsigned int)vt_VectorClass_Wstring;
    if ( v3 && *((char*)(Block) + 13) )
  {
    v4 = *(int*)(v3 - 4);
    v5 = (void*)(v3 - 4);
    v6 = (void*)(v3 + 4 * v4);
    v7 = v4 - 1;
    if ( v7 >= 0 )
    {
    v8 = v7 + 1;
    do
      {
    DeleteAndZero(--v6);
    --v8;
      }
    while ( v8 );
    }
    __3_YAXPAX_Z(v5);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x69D590
namespace gamemd {
VectorClass * VectorClass_ptr_MultiMission::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_MultiMission;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x69D5E0
namespace gamemd {
DynamicVector * VectorClass_ptr_GlobalPacketType::Constructor_VectorClass_MultiMission___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_MultiMission;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x69D630
namespace gamemd {
VectorClass * VectorClass_ptr_GlobalPacketType::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_GlobalPacketType;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x69D680
namespace gamemd {
DynamicVector * VectorClass_ptr_GlobalPacketType::Constructor_VectorClass_GlobalPacketType___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_GlobalPacketType;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x69D6D0
namespace gamemd {
VectorClass * VectorClass_ptr_PhoneEntryClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_PhoneEntryClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x69D720
namespace gamemd {
unsigned int * VectorClass_ptr_GlobalPacketType::loc_69D720(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_PhoneEntryClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}
}
} // namespace gamemd

// 0x69D7C0
unsigned int * VectorClass::WstringConstructor(int a2, unsigned int * a3)
{
{
    int v3;
    int *v5;
    int *v7;
    int *v8;
    int *v9;
    v3 = a2;
    this->Items = (void*)(0);
    this->Capacity = a2;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    this->vfptr = vt_VectorClass_Wstring;
    if ( !a2 )
    return this;
    if ( !a3 )
  {
    v7 = __2_YAPAXI_Z(4 * a2 + 4);
    if ( v7 )
    {
    *v7 = a2;
    v8 = v7 + 1;
    v9 = v7 + 1;
    if ( a2 - 1 >= 0 )
      {
    do
        {
    unknown_libname_73(v9++);
    --v3;
        }
    while ( v3 );
    this->Items = (void*)(v8);
    this->IsAllocated = 1;
    return this;
      }
    }
    else
    {
    v8 = 0;
    }
    this->Items = (void*)(v8);
    this->IsAllocated = 1;
    return this;
  }
    *a3 = a2;
    v5 = a3 + 1;
    if ( a2 - 1 >= 0 )
  {
    do
    {
    unknown_libname_73(v5++);
    --v3;
    }
    while ( v3 );
  }
    this->Items = (void*)(a3 + 1);
    return this;
}
}

// 0x69E9B0
int VectorClass::Check(Pipe * aP1, int aP2)
{
{
    SHA1::Process((Pipe *)(this + 3), aP1, (Pipe *)aP2);
    return (int)Delegate::Dispatch(this, aP1, (Pipe *)aP2);
}
}

// 0x6B1410
namespace gamemd {
void VectorClass_ptr_SlaveManagerClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x6B1440
namespace gamemd {
unsigned int VectorClass_ptr_SlaveManagerClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x6B1460
namespace gamemd {
int VectorClass_ptr_SlaveManagerClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x6B16D0
namespace gamemd {
char VectorClass_ptr_SlaveManagerClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x6B1710
namespace gamemd {
char VectorClass_ptr_SlaveManagerClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x6B17C0
namespace gamemd {
void VectorClass_ptr_SlaveManagerClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x6B17F0
namespace gamemd {
int VectorClass_ptr_SlaveManagerClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x6B1830
namespace gamemd {
unsigned int VectorClass_ptr_SlaveManagerClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x6B1850
namespace gamemd {
char VectorClass_ptr_SlaveManagerClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x6B1900
namespace gamemd {
int VectorClass_ptr_SlaveManagerClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x6B19D0
namespace gamemd {
VectorClass * VectorClass_ptr_SlaveManagerClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_SlaveManagerClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x6B1A20
namespace gamemd {
DynamicVector * VectorClass_ptr_SlaveManagerClass::Constructor_VectorClass_SlaveManagerClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_SlaveManagerClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x6B43B0
namespace gamemd {
void VectorClass_UUndoInfoStruct::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x6B43E0
namespace gamemd {
unsigned int VectorClass_UUndoInfoStruct::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (a2 - this->Items) / 0xCu;
    else
    return 0;
}
}
} // namespace gamemd

// 0x6B4410
namespace gamemd {
unsigned int * VectorClass_UUndoInfoStruct::Clear(unsigned int * a2, int a3)
{
{
    int *v3;
    v3 = (int*)(this->Items + 12 * a3);
    *a2 = *v3;
    *((int*)(a2) + 1) = v3[1];
    *((int*)(a2) + 2) = v3[2];
    return a2;
}
}
} // namespace gamemd

// 0x6B4440
namespace gamemd {
char VectorClass_UUndoInfoStruct::AddRef(int a2)
{
{
    int v2;
    int v3;
    int v4;
    int *v5;
    int *v6;
    int v7;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = *(int*)(a2 + 4);
    v5 = (int*)this->Items;
    v6 = (int*)(v4 + 8);
    v7 = v4 - (int)v5;
    while ( *v5 == *(int*)((char*)(v5) + v7) && v5[1] == *(v6 - 1) && v5[2] == *v6 )
    {
    ++v3;
    v6 += 3;
    v5 += 3;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x6B45A0
namespace gamemd {
void VectorClass_UUndoInfoStruct::ddtor()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x6B45D0
namespace gamemd {
int VectorClass_UUndoInfoStruct::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2 || i[1] != *((int*)(a2) + 1) || i[2] != *((int*)(a2) + 2); i += 3 )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x6B4620
namespace gamemd {
unsigned int VectorClass_UUndoInfoStruct::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (a2 - this->Items) / 0xCu;
    else
    return 0;
}
}
} // namespace gamemd

// 0x6B4760
namespace gamemd {
int VectorClass_UUndoInfoStruct::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2 || i[1] != *((int*)(a2) + 1) || i[2] != *((int*)(a2) + 2); i += 3 )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x6B47A0
namespace gamemd {
VectorClass * VectorClass_UUndoInfoStruct::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_UndoInfoStruct;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x6B47F0
namespace gamemd {
DynamicVector * VectorClass_UUndoInfoStruct::Constructor_VectorClass_UndoInfoStruct_(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_UndoInfoStruct;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x6B81C0
namespace gamemd {
void VectorClass_ptr_SpawnManagerClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x6B81F0
namespace gamemd {
unsigned int VectorClass_ptr_SpawnManagerClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x6B8210
namespace gamemd {
int VectorClass_ptr_SpawnManagerClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x6B84E0
namespace gamemd {
char VectorClass_ptr_SpawnManagerClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x6B8520
namespace gamemd {
char VectorClass_ptr_SpawnManagerClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x6B85D0
namespace gamemd {
void VectorClass_ptr_SpawnManagerClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x6B8600
namespace gamemd {
int VectorClass_ptr_SpawnManagerClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x6B8640
namespace gamemd {
unsigned int VectorClass_ptr_SpawnManagerClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x6B8660
namespace gamemd {
char VectorClass_ptr_SpawnManagerClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x6B8710
namespace gamemd {
int VectorClass_ptr_SpawnManagerClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x6B87E0
namespace gamemd {
VectorClass * VectorClass_ptr_SpawnManagerClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_SpawnManagerClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x6B8830
namespace gamemd {
DynamicVector * VectorClass_ptr_SpawnManagerClass::Constructor_VectorClass_SpawnManagerClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_SpawnManagerClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x6BED50
namespace gamemd {
void VectorClass_K::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x6BED80
namespace gamemd {
unsigned int VectorClass_K::GetItemIndex(int a2)
{
if ( this->IsInitialized )
    return (unsigned int)((char *)a2 - (char *)this->Items) >> 2;
else
    return 0;
}
} // namespace gamemd

// 0x6BEDA0
namespace gamemd {
int VectorClass_K::Clear(int a2)
{
return this->Items[a2];
}
} // namespace gamemd

// 0x6BEE50
namespace gamemd {
int VectorClass_K_8::QueryInterface(int a1, const void * a2, unsigned int * a3)
{
{
    if ( !a3 )
    return -2147467261;
    *a3 = 0;
    if ( !memcmp(a2, &IID_IUnknown, 0x10u) || !memcmp(a2, &DataGlobal_7F7CA0, 0x10u) )
    *a3 = a1;
    if ( !*a3 )
    return -2147467262;
    (*(void (__stdcall **)(int))(*(int *)(a1) + 4))(a1);
    return 0;
}
}
} // namespace gamemd

// 0x6BEEC0
namespace gamemd {
LONG VectorClass_K_8::AddRef(int a1)
{
{
    return InterlockedIncrement((volatile LONG*)(a1 + 4));
}
}
} // namespace gamemd

// 0x6BEEE0
namespace gamemd {
LONG VectorClass_K_8::Release(volatile LONG * Block)
{
{
    LONG v1;
    v1 = InterlockedDecrement(Block + 1);
    if ( !v1 )
    __3_YAXPAX_Z((void*)Block);
    return v1;
}
}
} // namespace gamemd

// 0x6BEF10
namespace gamemd {
int VectorClass_K_8::ddtor(int a1, int a2, int a3, unsigned int * a4)
{
{
    int *v5;
    int *v6;
    int *v7;
    int v8;
    if ( !a4 )
    return -2147024809;
    *a4 = 0;
    if ( a2 )
    return -2147221232;
    v5 = __2_YAPAXI_Z(0x2Cu);
    if ( !v5 )
    return -2147024882;
    v6 = VectorClass_K_8::Constructor(v5);
    v7 = v6;
    if ( !v6 )
    return -2147024882;
    v8 = ((int (__stdcall **)(int *, int, int *)))(*v6);
    if ( v8 < 0 )
    ((void (__thiscall **)(int *, int)))(*v7 + 56);
    return v8;
}
}
} // namespace gamemd

// 0x6BEF90
namespace gamemd {
int VectorClass_K_8::GetSize(int a1, int a2)
{
{
    int v2;
    int v3;
    v2 = *(int*)(a1 + 4);
    if ( a2 )
    v3 = v2 + 1;
    else
    v3 = v2 - 1;
    *(int*)(a1 + 4) = v3;
    return 0;
}
}
} // namespace gamemd

// 0x6BEFD0
namespace gamemd {
int VectorClass_K_14::QueryInterface(int a1, const void * a2, unsigned int * a3)
{
{
    if ( !a3 )
    return -2147467261;
    *a3 = 0;
    if ( !memcmp(a2, &IID_IUnknown, 0x10u) || !memcmp(a2, &DataGlobal_7F7CA0, 0x10u) )
    *a3 = a1;
    if ( !*a3 )
    return -2147467262;
    (*(void (__stdcall **)(int))(*(int *)(a1) + 4))(a1);
    return 0;
}
}
} // namespace gamemd

// 0x6BF040
namespace gamemd {
LONG VectorClass_K_14::AddRef(int a1)
{
{
    return InterlockedIncrement((volatile LONG*)(a1 + 4));
}
}
} // namespace gamemd

// 0x6BF060
namespace gamemd {
LONG VectorClass_K_14::Release(volatile LONG * Block)
{
{
    LONG v1;
    v1 = InterlockedDecrement(Block + 1);
    if ( !v1 )
    __3_YAXPAX_Z((void*)Block);
    return v1;
}
}
} // namespace gamemd

// 0x6BF090
namespace gamemd {
int VectorClass_K_14::ddtor(int a1, int a2, int a3, unsigned int * a4)
{
{
    void *v5;
    int (__stdcall ***v6)(int, int, int *);
    int (__stdcall ***v7)(int, int, int *);
    int v8;
    if ( !a4 )
    return -2147024809;
    *a4 = 0;
    if ( a2 )
    return -2147221232;
    v5 = __2_YAPAXI_Z(0x240u);
    if ( !v5 )
    return -2147024882;
    v6 = (int (__stdcall ***)(int, int, int *))VoxelAnimClass::Constructor((int)v5);
    v7 = v6;
    if ( !v6 )
    return -2147024882;
    v8 = (**v6)(v6, a3, a4);
    if ( v8 < 0 )
    ((void (__thiscall *)(int (__stdcall ***)(int, int, int *), int))(*v7)[8])(v7, 1);
    return v8;
}
}
} // namespace gamemd

// 0x6BF110
namespace gamemd {
int VectorClass_K_14::GetSize(int a1, int a2)
{
{
    int v2;
    int v3;
    v2 = *(int*)(a1 + 4);
    if ( a2 )
    v3 = v2 + 1;
    else
    v3 = v2 - 1;
    *(int*)(a1 + 4) = v3;
    return 0;
}
}
} // namespace gamemd

// 0x6BF150
namespace gamemd {
int VectorClass_K_20::QueryInterface(int a1, const void * a2, unsigned int * a3)
{
{
    if ( !a3 )
    return -2147467261;
    *a3 = 0;
    if ( !memcmp(a2, &IID_IUnknown, 0x10u) || !memcmp(a2, &DataGlobal_7F7CA0, 0x10u) )
    *a3 = a1;
    if ( !*a3 )
    return -2147467262;
    (*(void (__stdcall **)(int))(*(int *)(a1) + 4))(a1);
    return 0;
}
}
} // namespace gamemd

// 0x6BF1C0
namespace gamemd {
LONG VectorClass_K_20::AddRef(int a1)
{
{
    return InterlockedIncrement((volatile LONG*)(a1 + 4));
}
}
} // namespace gamemd

// 0x6BF1E0
namespace gamemd {
LONG VectorClass_K_20::Release(volatile LONG * Block)
{
{
    LONG v1;
    v1 = InterlockedDecrement(Block + 1);
    if ( !v1 )
    __3_YAXPAX_Z((void*)Block);
    return v1;
}
}
} // namespace gamemd

// 0x6BF210
namespace gamemd {
int VectorClass_K_20::ddtor(int a1, int a2, int a3, unsigned int * a4)
{
{
    int *v5;
    int *v6;
    int *v7;
    int v8;
    if ( !a4 )
    return -2147024809;
    *a4 = 0;
    if ( a2 )
    return -2147221232;
    v5 = __2_YAPAXI_Z(0x2BCu);
    if ( !v5 )
    return -2147024882;
    v6 = TerrainTypeClass::TerrainTypeClass(v5, 0);
    v7 = v6;
    if ( !v6 )
    return -2147024882;
    v8 = ((int (__stdcall **)(int *, int, int *)))(*v6);
    if ( v8 < 0 )
    ((void (__thiscall **)(int *, int)))(*v7 + 32);
    return v8;
}
}
} // namespace gamemd

// 0x6BF290
namespace gamemd {
int VectorClass_K_20::GetSize(int a1, int a2)
{
{
    int v2;
    int v3;
    v2 = *(int*)(a1 + 4);
    if ( a2 )
    v3 = v2 + 1;
    else
    v3 = v2 - 1;
    *(int*)(a1 + 4) = v3;
    return 0;
}
}
} // namespace gamemd

// 0x6BF2D0
namespace gamemd {
int VectorClass_K_26::QueryInterface(int a1, const void * a2, unsigned int * a3)
{
{
    if ( !a3 )
    return -2147467261;
    *a3 = 0;
    if ( !memcmp(a2, &IID_IUnknown, 0x10u) || !memcmp(a2, &DataGlobal_7F7CA0, 0x10u) )
    *a3 = a1;
    if ( !*a3 )
    return -2147467262;
    (*(void (__stdcall **)(int))(*(int *)(a1) + 4))(a1);
    return 0;
}
}
} // namespace gamemd

// 0x6BF340
namespace gamemd {
LONG VectorClass_K_26::AddRef(int a1)
{
{
    return InterlockedIncrement((volatile LONG*)(a1 + 4));
}
}
} // namespace gamemd

// 0x6BF360
namespace gamemd {
LONG VectorClass_K_26::Release(volatile LONG * Block)
{
{
    LONG v1;
    v1 = InterlockedDecrement(Block + 1);
    if ( !v1 )
    __3_YAXPAX_Z((void*)Block);
    return v1;
}
}
} // namespace gamemd

// 0x6BF390
namespace gamemd {
int VectorClass_K_26::ddtor(int a1, int a2, int a3, unsigned int * a4)
{
{
    void *v5;
    int (__stdcall ***v6)(int, int, int *);
    int (__stdcall ***v7)(int, int, int *);
    int v8;
    if ( !a4 )
    return -2147024809;
    *a4 = 0;
    if ( a2 )
    return -2147221232;
    v5 = __2_YAPAXI_Z(0xE0u);
    if ( !v5 )
    return -2147024882;
    v6 = (int (__stdcall ***)(int, int, int *))ObjectClass::ProcessFoggedState((int)v5);
    v7 = v6;
    if ( !v6 )
    return -2147024882;
    v8 = (**v6)(v6, a3, a4);
    if ( v8 < 0 )
    ((void (__thiscall *)(int (__stdcall ***)(int, int, int *), int))(*v7)[8])(v7, 1);
    return v8;
}
}
} // namespace gamemd

// 0x6BF410
namespace gamemd {
int VectorClass_K_26::GetSize(int a1, int a2)
{
{
    int v2;
    int v3;
    v2 = *(int*)(a1 + 4);
    if ( a2 )
    v3 = v2 + 1;
    else
    v3 = v2 - 1;
    *(int*)(a1 + 4) = v3;
    return 0;
}
}
} // namespace gamemd

// 0x6BF450
namespace gamemd {
int VectorClass_K_32::QueryInterface(int a1, const void * a2, unsigned int * a3)
{
{
    if ( !a3 )
    return -2147467261;
    *a3 = 0;
    if ( !memcmp(a2, &IID_IUnknown, 0x10u) || !memcmp(a2, &DataGlobal_7F7CA0, 0x10u) )
    *a3 = a1;
    if ( !*a3 )
    return -2147467262;
    (*(void (__stdcall **)(int))(*(int *)(a1) + 4))(a1);
    return 0;
}
}
} // namespace gamemd

// 0x6BF4C0
namespace gamemd {
LONG VectorClass_K_32::AddRef(int a1)
{
{
    return InterlockedIncrement((volatile LONG*)(a1 + 4));
}
}
} // namespace gamemd

// 0x6BF4E0
namespace gamemd {
LONG VectorClass_K_32::Release(volatile LONG * Block)
{
{
    LONG v1;
    v1 = InterlockedDecrement(Block + 1);
    if ( !v1 )
    __3_YAXPAX_Z((void*)Block);
    return v1;
}
}
} // namespace gamemd

// 0x6BF510
namespace gamemd {
int VectorClass_K_32::ddtor(int a1, int a2, int a3, unsigned int * a4)
{
{
    void *v5;
    int (__stdcall ***v6)(int, int, int *);
    int (__stdcall ***v7)(int, int, int *);
    int v8;
    if ( !a4 )
    return -2147024809;
    *a4 = 0;
    if ( a2 )
    return -2147221232;
    v5 = __2_YAPAXI_Z(0x100u);
    if ( !v5 )
    return -2147024882;
    v6 = (int (__stdcall ***)(int, int, int *))SuperWeaponTypeClass::SuperWeaponTypeClass((int)v5, 0);
    v7 = v6;
    if ( !v6 )
    return -2147024882;
    v8 = (**v6)(v6, a3, a4);
    if ( v8 < 0 )
    ((void (__thiscall *)(int (__stdcall ***)(int, int, int *), int))(*v7)[8])(v7, 1);
    return v8;
}
}
} // namespace gamemd

// 0x6BF590
namespace gamemd {
int VectorClass_K_32::GetSize(int a1, int a2)
{
{
    int v2;
    int v3;
    v2 = *(int*)(a1 + 4);
    if ( a2 )
    v3 = v2 + 1;
    else
    v3 = v2 - 1;
    *(int*)(a1 + 4) = v3;
    return 0;
}
}
} // namespace gamemd

// 0x6BF5D0
namespace gamemd {
int VectorClass_K_38::QueryInterface(int a1, const void * a2, unsigned int * a3)
{
{
    if ( !a3 )
    return -2147467261;
    *a3 = 0;
    if ( !memcmp(a2, &IID_IUnknown, 0x10u) || !memcmp(a2, &DataGlobal_7F7CA0, 0x10u) )
    *a3 = a1;
    if ( !*a3 )
    return -2147467262;
    (*(void (__stdcall **)(int))(*(int *)(a1) + 4))(a1);
    return 0;
}
}
} // namespace gamemd

// 0x6BF640
namespace gamemd {
LONG VectorClass_K_38::AddRef(int a1)
{
{
    return InterlockedIncrement((volatile LONG*)(a1 + 4));
}
}
} // namespace gamemd

// 0x6BF660
namespace gamemd {
LONG VectorClass_K_38::Release(volatile LONG * Block)
{
{
    LONG v1;
    v1 = InterlockedDecrement(Block + 1);
    if ( !v1 )
    __3_YAXPAX_Z((void*)Block);
    return v1;
}
}
} // namespace gamemd

// 0x6BF690
namespace gamemd {
int VectorClass_K_38::ddtor(int a1, int a2, int a3, unsigned int * a4)
{
{
    void *v5;
    int (__stdcall ***v6)(int, int, int *);
    int (__stdcall ***v7)(int, int, int *);
    int v8;
    if ( !a4 )
    return -2147024809;
    *a4 = 0;
    if ( a2 )
    return -2147221232;
    v5 = __2_YAPAXI_Z(0x80u);
    if ( !v5 )
    return -2147024882;
    v6 = (int (__stdcall ***)(int, int, int *))SuperClass::Constructor((int)v5);
    v7 = v6;
    if ( !v6 )
    return -2147024882;
    v8 = (**v6)(v6, a3, a4);
    if ( v8 < 0 )
    ((void (__thiscall *)(int (__stdcall ***)(int, int, int *), int))(*v7)[8])(v7, 1);
    return v8;
}
}
} // namespace gamemd

// 0x6BF710
namespace gamemd {
int VectorClass_K_38::GetSize(int a1, int a2)
{
{
    int v2;
    int v3;
    v2 = *(int*)(a1 + 4);
    if ( a2 )
    v3 = v2 + 1;
    else
    v3 = v2 - 1;
    *(int*)(a1 + 4) = v3;
    return 0;
}
}
} // namespace gamemd

// 0x6BF750
namespace gamemd {
int VectorClass_K_44::QueryInterface(int a1, const void * a2, unsigned int * a3)
{
{
    if ( !a3 )
    return -2147467261;
    *a3 = 0;
    if ( !memcmp(a2, &IID_IUnknown, 0x10u) || !memcmp(a2, &DataGlobal_7F7CA0, 0x10u) )
    *a3 = a1;
    if ( !*a3 )
    return -2147467262;
    (*(void (__stdcall **)(int))(*(int *)(a1) + 4))(a1);
    return 0;
}
}
} // namespace gamemd

// 0x6BF7C0
namespace gamemd {
LONG VectorClass_K_44::AddRef(int a1)
{
{
    return InterlockedIncrement((volatile LONG*)(a1 + 4));
}
}
} // namespace gamemd

// 0x6BF7E0
namespace gamemd {
LONG VectorClass_K_44::Release(volatile LONG * Block)
{
{
    LONG v1;
    v1 = InterlockedDecrement(Block + 1);
    if ( !v1 )
    __3_YAXPAX_Z((void*)Block);
    return v1;
}
}
} // namespace gamemd

// 0x6BF810
namespace gamemd {
int VectorClass_K_44::ddtor(int a1, int a2, int a3, unsigned int * a4)
{
{
    void *v5;
    int (__stdcall ***v6)(int, int, int *);
    int (__stdcall ***v7)(int, int, int *);
    int v8;
    if ( !a4 )
    return -2147024809;
    *a4 = 0;
    if ( a2 )
    return -2147221232;
    v5 = __2_YAPAXI_Z(0xE18u);
    if ( !v5 )
    return -2147024882;
    v6 = (int (__stdcall ***)(int, int, int *))TacticalMap::Construct((int)v5);
    v7 = v6;
    if ( !v6 )
    return -2147024882;
    v8 = (**v6)(v6, a3, a4);
    if ( v8 < 0 )
    ((void (__thiscall *)(int (__stdcall ***)(int, int, int *), int))(*v7)[8])(v7, 1);
    return v8;
}
}
} // namespace gamemd

// 0x6BF890
namespace gamemd {
int VectorClass_K_44::GetSize(int a1, int a2)
{
{
    int v2;
    int v3;
    v2 = *(int*)(a1 + 4);
    if ( a2 )
    v3 = v2 + 1;
    else
    v3 = v2 - 1;
    *(int*)(a1 + 4) = v3;
    return 0;
}
}
} // namespace gamemd

// 0x6C61D0
namespace gamemd {
char VectorClass_K::AddRef(int a2)
{
VectorClass_K* other = (VectorClass_K *)a2;
int capacity = this->Capacity;
if ( capacity == other->Capacity )
{
    int i = 0;
    if ( capacity <= 0 )
        return 1;
    unsigned int* myItems = (unsigned int *)this->Items;
    unsigned int* otherItems = (unsigned int *)other->Items;
    while ( myItems[i] == otherItems[i] )
    {
        ++i;
        if ( i >= capacity )
            return 1;
    }
}
return 0;
}
} // namespace gamemd

// 0x6C6210
namespace gamemd {
char VectorClass_K::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x6C62C0
namespace gamemd {
void VectorClass_K::ddtor()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x6C62F0
namespace gamemd {
int VectorClass_K::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x6C6330
namespace gamemd {
unsigned int VectorClass_K::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x6C6350
namespace gamemd {
char VectorClass_K::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x6C6450
namespace gamemd {
int VectorClass_K::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x6C6480
namespace gamemd {
VectorClass * VectorClass_K::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_unsigned_long;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x6C64D0
namespace gamemd {
DynamicVector * VectorClass_K::Constructor(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_unsigned_long;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x6CA7C0
namespace gamemd {
void VectorClass_ptr_SubTitle::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x6CA7F0
namespace gamemd {
unsigned int VectorClass_ptr_SubTitle::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x6CA810
namespace gamemd {
int VectorClass_ptr_SubTitle::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x6CA820
namespace gamemd {
char VectorClass_ptr_SubTitle::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x6CA860
namespace gamemd {
char VectorClass_ptr_SubTitle::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x6CA910
namespace gamemd {
int VectorClass_ptr_SubTitle::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x6CA9C0
namespace gamemd {
DynamicVector * VectorClass_ptr_SubTitle::Constructor_VectorClass_SubTitle___(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_SubTitle;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x6CAA10
namespace gamemd {
char VectorClass_ptr_SubTitle::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x6CAAC0
namespace gamemd {
void VectorClass_ptr_SubTitle::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x6CAAF0
namespace gamemd {
int VectorClass_ptr_SubTitle::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x6CAB30
namespace gamemd {
unsigned int VectorClass_ptr_SubTitle::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x6CAB50
namespace gamemd {
VectorClass * VectorClass_ptr_SubTitle::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_SubTitle;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x6CE2D0
char VectorClass::RemoveAt(int a2)
{
{
    int v3;
    int v4;
    int v5;
    v3 = this->FindItemIndex(a2);
    if ( v3 == -1 )
    return 0;
    v4 = this->Count;
    if ( v3 >= v4 )
    return 0;
    v5 = v4 - 1;
    for ( this->Count = v5; v3 < this->Count; *(int*)(this->Items + 4 * v3 - 4) = *(int*)(this->Items + 4 * v3) )
    ++v3;
    return 1;
}
}

// 0x6DC4E0
namespace gamemd {
void VectorClass_UDirtyAreaStruct::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x6DC510
namespace gamemd {
unsigned int VectorClass_UDirtyAreaStruct::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (a2 - this->Items) / 0x14u;
    else
    return 0;
}
}
} // namespace gamemd

// 0x6DC540
namespace gamemd {
int VectorClass_UDirtyAreaStruct::Clear(int a2, int a3)
{
{
    int v3;
    v3 = this->Items + 20 * a3;
    *(int*)a2 = *(int*)v3;
    *(int*)(a2 + 4) = *(int*)(v3 + 4);
    *(int*)(a2 + 8) = *(int*)(v3 + 8);
    *(int*)(a2 + 12) = *(int*)(v3 + 12);
    *(char*)(a2 + 16) = *(char*)(v3 + 16);
    return a2;
}
}
} // namespace gamemd

// 0x6DC580
namespace gamemd {
void VectorClass_UDirtyAreaStruct::Destroy_0()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x6DC5B0
namespace gamemd {
unsigned int VectorClass_UDirtyAreaStruct::GetItemIndex_0(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x6DC5D0
namespace gamemd {
int VectorClass_UDirtyAreaStruct___16::Clear(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x6DC5E0
namespace gamemd {
char VectorClass_UDirtyAreaStruct::AddRef(int a2)
{
{
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = *(int*)(a2 + 4);
    v5 = this->Items;
    v6 = v4 + 4;
    v7 = v4 - v5;
    while ( *(char*)(v5 + 16) == *(char*)(v6 + 12) && *(int*)v5 == *(int*)(v5 + v7) && *(int*)(v5 + 4) == *(int*)v6 && *(int*)(v5 + 8) == *(int*)(v6 + 4) && *(int*)(v5 + 12) == *(int*)(v6 + 8) )
    {
    ++v3;
    v6 += 20;
    v5 += 20;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x6DC660
namespace gamemd {
char VectorClass_UDirtyAreaStruct::Release(int a2, char * a3)
{
{
    int v3;
    char *v5;
    char *v6;
    char *v7;
    int v8;
    char *v9;
    int v10;
    int v12;
    int v13;
    const void *v14;
    char *v15;
    char *v16;
    v3 = a2;
    if ( a2 )
  {
    v5 = a3;
    this->IsInitialized = 0;
    if ( a3 )
    {
    if ( a2 - 1 >= 0 )
      {
    v9 = a3 + 8;
    v10 = a2;
    do
        {
    *((int*)v9 - 2) = 0;
    *((int*)v9 - 1) = 0;
    *(int*)v9 = 0;
    *((int*)(v9) + 1) = 0;
    v9[8] = 0;
    v9 += 20;
    --v10;
        }
    while ( v10 );
      }
    v16 = a3;
    }
    else
    {
    v6 = (char*)__2_YAPAXI_Z(20 * a2);
    if ( v6 )
      {
    if ( a2 - 1 >= 0 )
        {
    v7 = v6 + 8;
    v8 = a2;
    do
          {
    *((int*)v7 - 2) = 0;
    *((int*)v7 - 1) = 0;
    *(int*)v7 = 0;
    *((int*)(v7) + 1) = 0;
    v7[8] = 0;
    v7 += 20;
    --v8;
          }
    while ( v8 );
        }
    v16 = v6;
      }
    else
      {
    v16 = 0;
      }
    }
    this->IsInitialized = 1;
    if ( v16 )
    {
    if ( this->Items )
      {
    v12 = this->Capacity;
    if ( a2 < v12 )
    v12 = a2;
    if ( v12 > 0 )
        {
    v13 = 0;
    do
          {
    v14 = (const void *)(this->Items + v13);
    v15 = &v16[v13];
    v13 += 20;
    --v12;
    qmemcpy(v15, v14, 0x14u);
          }
    while ( v12 );
    v5 = a3;
    v3 = a2;
        }
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Capacity = v3;
    this->Items = (void*)(v16);
    this->IsAllocated = v5 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->FindItemIndex();
    return 1;
  }
}
}
} // namespace gamemd

// 0x6DC780
namespace gamemd {
void VectorClass_UDirtyAreaStruct::ddtor()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x6DC7B0
namespace gamemd {
int VectorClass_UDirtyAreaStruct::GetSize(int a2)
{
{
    int v3;
    int v4;
    int i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    v4 = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = this->Items;
    *(char*)(i + 16) != *(char*)(a2 + 16)
    || *(int*)i != *(int*)a2 || *(int*)(i + 4) != *(int*)(a2 + 4)
    || *(int*)(i + 8) != *(int*)(a2 + 8)
    || *(int*)(i + 12) != *(int*)(a2 + 12);
    i += 20 ) {
    if ( ++v4 >= v3 )
    return -1;
  }
    return v4;
}
}
} // namespace gamemd

// 0x6DC820
namespace gamemd {
unsigned int VectorClass_UDirtyAreaStruct::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (a2 - this->Items) / 0x14u;
    else
    return 0;
}
}
} // namespace gamemd

// 0x6DC970
namespace gamemd {
int VectorClass_UDirtyAreaStruct::FindItemIndex(int a2)
{
{
    int v2;
    int v3;
    int i;
    v2 = this->Count;
    v3 = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = this->Items;
    *(char*)(i + 16) != *(char*)(a2 + 16)
    || *(int*)i != *(int*)a2 || *(int*)(i + 4) != *(int*)(a2 + 4)
    || *(int*)(i + 8) != *(int*)(a2 + 8)
    || *(int*)(i + 12) != *(int*)(a2 + 12);
    i += 20 ) {
    if ( ++v3 >= v2 )
    return -1;
  }
    return v3;
}
}
} // namespace gamemd

// 0x6DC9D0
namespace gamemd {
char VectorClass_UDirtyAreaStruct___16::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x6DCA10
namespace gamemd {
char VectorClass_UDirtyAreaStruct___16::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->ddtor();
    return 1;
  }
}
}
} // namespace gamemd

// 0x6DCAC0
namespace gamemd {
void VectorClass_UDirtyAreaStruct___16::ddtor()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x6DCAF0
namespace gamemd {
int VectorClass_UDirtyAreaStruct___16::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x6DCB30
namespace gamemd {
unsigned int VectorClass_UDirtyAreaStruct___16::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x6DCB50
namespace gamemd {
char VectorClass_UDirtyAreaStruct::SetCapacity_0(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->FindItemIndex();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x6DCC00
namespace gamemd {
int VectorClass_UDirtyAreaStruct::FindItemIndex_0(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x6DCC30
namespace gamemd {
VectorClass * VectorClass_UDirtyAreaStruct::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_DirtyAreaStruct;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x6DCC80
namespace gamemd {
unsigned int * VectorClass_UDirtyAreaStruct::loc_6DCC80(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_DirtyAreaStruct;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}
}
} // namespace gamemd

// 0x6DCCD0
namespace gamemd {
VectorClass * VectorClass_UDirtyAreaStruct___16::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_ShadowControlClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x6DCD20
namespace gamemd {
DynamicVector * VectorClass_UDirtyAreaStruct::Constructor_VectorClass_ShadowControlClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_ShadowControlClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x6E64E0
namespace gamemd {
void VectorClass_ptr_TagTypeClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x6E6510
namespace gamemd {
unsigned int VectorClass_ptr_TagTypeClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x6E6530
namespace gamemd {
int VectorClass_ptr_TagTypeClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x6E6540
namespace gamemd {
char VectorClass_ptr_TagTypeClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x6E6580
namespace gamemd {
char VectorClass_ptr_TagTypeClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x6E6630
namespace gamemd {
void VectorClass_ptr_TagTypeClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x6E6660
namespace gamemd {
int VectorClass_ptr_TagTypeClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x6E66A0
namespace gamemd {
unsigned int VectorClass_ptr_TagTypeClass::LoadTypeData(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x6E66C0
namespace gamemd {
char VectorClass_ptr_TagTypeClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x6E6770
namespace gamemd {
int VectorClass_ptr_TagTypeClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x6E67A0
namespace gamemd {
VectorClass * VectorClass_ptr_TagTypeClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_TagTypeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x6E67F0
namespace gamemd {
DynamicVector * VectorClass_ptr_TagTypeClass::Constructor_VectorClass_TagTypeClass___(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_TagTypeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x717D20
unsigned int * VectorClass::CopyParticle(DynamicVector * aP1)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    this->Items = 0;
    this->Capacity = 0;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_ParticleSystemTypeClass_const;
    if ( this != (int *)aP1 )
  {
    VectorClass::Cleanup((int)this);
    v3 = aP1->field_8;
    this->Capacity = v3;
    if ( v3 )
    {
    v4 = __2_YAPAXI_Z(4 * v3);
    this->Items = v4;
    if ( v4 )
      {
    v5 = this->Capacity;
    v6 = 0;
    this->IsAllocated = 1;
    if ( v5 > 0 )
        {
    do
          {
    *(int *)(this->Items + 4 * v6) = *(int *)(*(int *)&aP1->field_1[3] + 4 * v6);
    ++v6;
          }
    while ( v6 < this->Capacity );
        }
      }
    }
    else
    {
    this->Items = 0;
    this->IsAllocated = 0;
    }
  }
    this->Count = aP1->field_10;
    this->CapacityIncrement = *(int *)aP1->__pad_14;
    *(void**)this = &vt_TypeList_ParticleSystemTypeClass_const;
    return this;
}
}

// 0x71B240
namespace gamemd {
void VectorClass_ptr_TemporalClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x71B270
namespace gamemd {
unsigned int VectorClass_ptr_TemporalClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x71B290
namespace gamemd {
int VectorClass_ptr_TemporalClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x71B2A0
namespace gamemd {
char VectorClass_ptr_TemporalClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x71B2E0
namespace gamemd {
char VectorClass_ptr_TemporalClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x71B390
namespace gamemd {
void VectorClass_ptr_TemporalClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x71B3C0
namespace gamemd {
int VectorClass_ptr_TemporalClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x71B400
namespace gamemd {
unsigned int VectorClass_ptr_TemporalClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x71B420
namespace gamemd {
char VectorClass_ptr_TemporalClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x71B4D0
namespace gamemd {
int VectorClass_ptr_TemporalClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x71B500
namespace gamemd {
VectorClass * VectorClass_ptr_TemporalClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_TemporalClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x71B550
namespace gamemd {
DynamicVector * VectorClass_ptr_TemporalClass::Constructor_VectorClass_TemporalClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_TemporalClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x71FBA0
namespace gamemd {
void VectorClass_ptr_TEventClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x71FBD0
namespace gamemd {
unsigned int VectorClass_ptr_TEventClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x71FBF0
namespace gamemd {
int VectorClass_ptr_TEventClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x71FC00
namespace gamemd {
char VectorClass_ptr_TEventClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x71FC40
namespace gamemd {
char VectorClass_ptr_TEventClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x71FCF0
namespace gamemd {
void VectorClass_ptr_TEventClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x71FD20
namespace gamemd {
int VectorClass_ptr_TEventClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x71FD60
namespace gamemd {
unsigned int VectorClass_ptr_TEventClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x71FD80
namespace gamemd {
char VectorClass_ptr_TEventClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x71FE30
namespace gamemd {
int VectorClass_ptr_TEventClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x71FE60
namespace gamemd {
VectorClass * VectorClass_ptr_TEventClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_TEventClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x71FEB0
namespace gamemd {
DynamicVector * VectorClass_ptr_TEventClass::Constructor_VectorClass_TEventClass___(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_TEventClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x7212B0
namespace gamemd {
void VectorClass_ptr_ThemeControl::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x7212E0
namespace gamemd {
unsigned int VectorClass_ptr_ThemeControl::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x721300
namespace gamemd {
char VectorClass_ptr_ThemeControl::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->ddtor();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x7213B0
namespace gamemd {
int VectorClass_ptr_ThemeControl::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x7213E0
namespace gamemd {
DynamicVector * VectorClass_ptr_ThemeControl::Constructor_VectorClass_ThemeControl___(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_ThemeControl;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x723730
namespace gamemd {
void VectorClass_ptr_TiberiumClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x723760
namespace gamemd {
unsigned int VectorClass_ptr_TiberiumClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x723780
namespace gamemd {
int VectorClass_ptr_TiberiumClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x723790
namespace gamemd {
char VectorClass_ptr_TiberiumClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x7237D0
namespace gamemd {
char VectorClass_ptr_TiberiumClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x723880
namespace gamemd {
void VectorClass_ptr_TiberiumClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x7238B0
namespace gamemd {
int VectorClass_ptr_TiberiumClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x7238F0
namespace gamemd {
unsigned int VectorClass_ptr_TiberiumClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x723910
namespace gamemd {
char VectorClass_ptr_TiberiumClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x7239C0
namespace gamemd {
int VectorClass_ptr_TiberiumClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x7239F0
namespace gamemd {
VectorClass * VectorClass_ptr_TiberiumClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_TiberiumClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x723A40
namespace gamemd {
DynamicVector * VectorClass_ptr_TiberiumClass::Constructor_VectorClass_TiberiumClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_TiberiumClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x74BF90
namespace gamemd {
char VectorClass_E::Clear(int a2)
{
return ((char *)this->Items)[a2];
}
} // namespace gamemd

// 0x74BFA0
namespace gamemd {
VectorClass * VectorClass_E::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_unsigned_char;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x74BFF0
namespace gamemd {
char VectorClass_E::AddRef(int a2)
{
VectorClass_E* other = (VectorClass_E *)a2;
int capacity = this->Capacity;
if ( capacity == other->Capacity )
{
    int i = 0;
    if ( capacity <= 0 )
        return 1;
    while ( ((char *)this->Items)[i] == ((char *)other->Items)[i] )
    {
        ++i;
        if ( i >= capacity )
            return 1;
    }
}
return 0;
}
} // namespace gamemd

// 0x74C030
namespace gamemd {
char VectorClass_E::Release(signed int Size, char * a3)
{
{
    char *v4;
    signed int v6;
    signed int i;
    if ( Size )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = (char*)__2_YAPAXI_Z(Size);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( Size < v6 )
    v6 = Size;
    for ( i = 0; i < v6; v4[i - 1] = *(char*)(this->Items + i - 1) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = Size;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->ddtor();
    return 1;
  }
}
}
} // namespace gamemd

// 0x74C0E0
namespace gamemd {
void VectorClass_E::ddtor()
{
    if ( this->Items && this->IsAllocated )
    {
        __3_YAXPAX_Z(this->Items);
        this->Items = 0;
    }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
} // namespace gamemd

// 0x74C110
namespace gamemd {
int VectorClass_E::GetSize(unsigned char * a2)
{
if ( !this->IsInitialized )
    return 0;
int capacity = this->Capacity;
int result = 0;
if ( capacity <= 0 )
    return -1;
char* items = (char *)this->Items;
while ( items[result] != *a2 )
{
    ++result;
    if ( result >= capacity )
        return -1;
}
return result;
}
} // namespace gamemd

// 0x74C150
namespace gamemd {
int VectorClass_E::GetCapacity(int a2)
{
if ( this->IsInitialized )
    return (int)((char *)a2 - (char *)this->Items);
else
    return 0;
}
} // namespace gamemd

// 0x7518D0
namespace gamemd {
void VectorClass_ptr_VocClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x751900
namespace gamemd {
unsigned int VectorClass_ptr_VocClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x751920
namespace gamemd {
int VectorClass_ptr_VocClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x751930
namespace gamemd {
char VectorClass_ptr_VocClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x751970
namespace gamemd {
char VectorClass_ptr_VocClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x751A20
namespace gamemd {
void VectorClass_ptr_VocClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x751A50
namespace gamemd {
int VectorClass_ptr_VocClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x751A90
namespace gamemd {
unsigned int VectorClass_ptr_VocClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x751AB0
namespace gamemd {
char VectorClass_ptr_VocClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x751B60
namespace gamemd {
int VectorClass_ptr_VocClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x751B90
namespace gamemd {
VectorClass * VectorClass_ptr_VocClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_VocClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x751BE0
namespace gamemd {
DynamicVector * VectorClass_ptr_VocClass::Constructor_VectorClass_VocClass___(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_VocClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x7536A0
namespace gamemd {
int VectorClass_ptr_VoxClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x7536B0
namespace gamemd {
char VectorClass_ptr_VoxClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x7536F0
namespace gamemd {
char VectorClass_ptr_VoxClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x7537A0
namespace gamemd {
void VectorClass_ptr_VoxClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x7537D0
namespace gamemd {
int VectorClass_ptr_VoxClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x753810
namespace gamemd {
unsigned int VectorClass_ptr_VoxClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x753910
namespace gamemd {
VectorClass * VectorClass_ptr_VoxClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_VoxClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x75A430
namespace gamemd {
void VectorClass_ptr_MovieHandle::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x75A460
namespace gamemd {
unsigned int VectorClass_ptr_MovieHandle::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x75A480
namespace gamemd {
int VectorClass_ptr_MovieHandle::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x75A490
namespace gamemd {
char VectorClass_ptr_MovieHandle::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x75A4D0
namespace gamemd {
char VectorClass_ptr_MovieHandle::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x75A580
namespace gamemd {
void VectorClass_ptr_MovieHandle::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x75A5B0
namespace gamemd {
int VectorClass_ptr_MovieHandle::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x75A5F0
namespace gamemd {
unsigned int VectorClass_ptr_MovieHandle::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x75A610
namespace gamemd {
char VectorClass_ptr_MovieHandle::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x75A6C0
namespace gamemd {
int VectorClass_ptr_MovieHandle::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x75A6F0
namespace gamemd {
VectorClass * VectorClass_ptr_MovieHandle::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_MovieHandle;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x75A740
namespace gamemd {
DynamicVector * VectorClass_ptr_MovieHandle::Constructor_VectorClass_MovieHandle___(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_MovieHandle;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (DynamicVector *)Block;
}
}
} // namespace gamemd

// 0x763F90
namespace gamemd {
void VectorClass_ptr_WaypointPathClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x763FC0
namespace gamemd {
unsigned int VectorClass_ptr_WaypointPathClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x763FE0
namespace gamemd {
int VectorClass_ptr_WaypointPathClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x764460
namespace gamemd {
char VectorClass_ptr_WaypointPathClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x7644A0
namespace gamemd {
char VectorClass_ptr_WaypointPathClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x764550
namespace gamemd {
void VectorClass_ptr_WaypointPathClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x764580
namespace gamemd {
int VectorClass_ptr_WaypointPathClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x7645C0
namespace gamemd {
unsigned int VectorClass_ptr_WaypointPathClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x7645E0
namespace gamemd {
char VectorClass_ptr_WaypointPathClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x764690
namespace gamemd {
int VectorClass_ptr_WaypointPathClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x7646C0
namespace gamemd {
VectorClass * VectorClass_ptr_WaypointPathClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_WaypointPathClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x764710
namespace gamemd {
DynamicVector * VectorClass_ptr_WaypointPathClass::Constructor_VectorClass_WaypointPathClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_WaypointPathClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x76B6C0
namespace gamemd {
unsigned int * VectorClass_rc_ptr_WDTTerritory::loc_76B6C0(char a2)
{
{
    this->vfptr = &vt_WDTTerritory;
    ReferenceCounted::Constructor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return &this->vfptr;
}
}
} // namespace gamemd

// 0x76B760
namespace gamemd {
unsigned int * VectorClass_rc_ptr_WDTTerritory::Clear(unsigned int * a2, int a3)
{
{
    int v3;
    v3 = this->Items + 8 * a3;
    ComPtr::Constructor(a2);
    *a2 = (unsigned int)vt_rc_ptr_WDTTerritory;
    ComPtr::Set(a2, *(int*)(v3 + 4));
    return a2;
}
}
} // namespace gamemd

// 0x76B870
namespace gamemd {
char VectorClass_rc_ptr_WDTTerritory::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int *i;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)(this->Items + 4);
    for ( i = (int*)(*(int*)(a2 + 4) + 4); *v4 == *i; i += 2 )
    {
    ++v3;
    v4 += 2;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x76B9E0
namespace gamemd {
int VectorClass_rc_ptr_WDTTerritory::ddtor()
{
{
    int (__thiscall ***v2)(int, int);
    int result;
    v2 = *(int (__thiscall ****)(int, int))(this + 4);
    if ( v2 && this->IsAllocated )
  {
    result = (**v2)(v2, 3);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
    return result;
}
}
} // namespace gamemd

// 0x76BA10
namespace gamemd {
int VectorClass_rc_ptr_WDTTerritory::GetSize(int a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = (int*)(this->Items + 4); *i != *(int*)(a2 + 4); i += 2 )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x76BA50
namespace gamemd {
unsigned int VectorClass_rc_ptr_WDTTerritory::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 3;
    else
    return 0;
}
}
} // namespace gamemd

// 0x76BBC0
namespace gamemd {
VectorClass * VectorClass_rc_ptr_WDTTerritory::QueryInterface(unsigned int * Block, char a2)
{
{
    void (__thiscall ***v3)(int, int);
    v3 = (void (__thiscall ***)(int, int))*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_rc_ptr_WDTTerritory;
    if ( v3 && *((char*)(Block) + 13) )
  {
    (**v3)(v3, 3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x7AE730
char VectorClass::Shrink()
{
{
    int v2;
    int v3;
    int v5;
    void *v6;
    const void *v7;
    int v8;
    v2 = *(int*)this;
    v3 = this->Items;
    if ( 3 * v2 > v3 )
    return 0;
    v5 = v3 / 2;
    if ( v3 / 2 < 10 )
    v5 = 10;
    if ( v5 >= v3 )
    return 0;
    v6 = __2_YAPAXI_Z(4 * v5);
    v7 = (const void *)this->Capacity;
    v8 = (int)v6;
    if ( v7 )
    qmemcpy(v6, v7, 4 * *(int*)this);
    __3_YAXPAX_Z((void*)this->Capacity);
    this->Capacity = v8;
    this->Items = (void*)(v5);
    return 1;
}
}

// 0x7B2890
namespace gamemd {
int VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass::Get(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x7B28A0
namespace gamemd {
char VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x7B28E0
namespace gamemd {
char VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x7B2990
namespace gamemd {
void VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x7B29C0
namespace gamemd {
int VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x7B2A00
namespace gamemd {
unsigned int VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x7B2B00
namespace gamemd {
VectorClass * VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_WinsockInterfaceClass_WinsockBufferType;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x7B4310
namespace gamemd {
int VectorClass_PAE::Count(int a2)
{
{
    return *(int*)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x7B4320
namespace gamemd {
char VectorClass_PAE::Get(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int*)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int*)this->Items;
    v5 = *(int*)(a2 + 4) - (int)v4;
    while ( *v4 == *(int*)((char*)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x7B4360
namespace gamemd {
char VectorClass_PAE::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Set();
    return 1;
  }
}
}
} // namespace gamemd

// 0x7B4410
namespace gamemd {
void VectorClass_PAE::Set()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x7B4440
namespace gamemd {
int VectorClass_PAE::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x7B4480
namespace gamemd {
unsigned int VectorClass_PAE::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x7B4580
namespace gamemd {
VectorClass * VectorClass_PAE::QueryInterface(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_unsigned_char;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}
} // namespace gamemd

// 0x7B4860
namespace gamemd {
bool VectorClass_Wstring::SetCapacity(const char ** a2)
{
{
    const char *v2;
    v2 = *(int*)this;
    if ( !*(int*)this && !*a2 )
    return 0;
    if ( v2 && *a2 )
    return strcmp(v2, *a2) != 0;
    return 1;
}
}
} // namespace gamemd
