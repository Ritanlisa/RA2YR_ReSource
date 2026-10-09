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
#include "e4/classes/HouseClass_e4.hpp"
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
#include "e4/classes/BuildingClass_e4.hpp"
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
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/VectorClass_e_e4.hpp"
#include "e4/classes/EnumConnectionPointsClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Count_e4.hpp"
#include "e4/classes/VeinholeMonsterClass_e4.hpp"
#include "e4/classes/VectorCursor_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/BulletClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/AnimClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/TeamClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Byte_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/COMClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Rect_e4.hpp"  // G42.36 C2027 supply
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
// [w18j2] C2065 function supply (raw-evidenced)
namespace gamemd { int nullsub_138(...); }  // w18j2 raw call-form (variadic last resort)
namespace VectorClass { int CleanupTyped(...); }  // w16g4 C3861 ns-supply (no carrier hpp)

// 0x4137A0
namespace gamemd {
int VectorClass_flat::RemoveObjectById()
{
  VectorClass *v2; // esi
  int v3; // eax
  int v4; // eax
  char *vtable0; // ecx
  char *v6; // ecx
  VectorClass *v7; // [esp+4h] [ebp-4h] BYREF

  v7 = this; /*0x4137a0*/
  if ( !this->u32_2590 ) /*0x4137a1*/
    return 0; /*0x4137ab*/
  v2 = &this->u32_960; /*0x4137b6*/
  v3 = this->u32_2580; /*0x4137c3*/
  v7 = (VectorClass *)**((_DWORD **)&this->u32_3C01); /*0x4137c7*/
  v4 = (*(int (__thiscall **)(VectorClass *, VectorClass **))(v3 + 16))(&this->u32_960, &v7); /*0x4137cb*/
  if ( v4 != -1 ) /*0x4137d1*/
  {
    vtable0 = (char *)v2[1].v6; /*0x4137d3*/
    if ( v4 < (int)vtable0 ) /*0x4137d8*/
    {
      v6 = vtable0 - 1; /*0x4137da*/
      for ( v2[1].v6 = v6; v4 < (int)v2[1].v6; *((_DWORD *)v2->Items + v4 - 1) = *((_DWORD *)v2->Items + v4) ) /*0x4137e0*/
        ++v4; /*0x4137e5*/
    }
  }
  return (int)v7; /*0x4137ae*/
}
} // namespace gamemd
// 0x65A970
namespace gamemd {
int VectorClass_flat::RemoveElement()
{
  int *v1; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int *v7; // ebx
  _DWORD *v8; // eax
  int v9; // ebx
  void *v10; // eax
  int v11; // edx
  int v12; // ebx
  int v13; // eax
  int **v14; // ecx
  int v15; // ebp
  void *v16; // eax
  int v17; // [esp+14h] [ebp+4h]
  int v18; // [esp+18h] [ebp+8h]
  int *v19; // [esp+1Ch] [ebp+Ch]

  v1 = v19; /*0x65a974*/
  if ( !v19 ) /*0x65a97c*/
  {
    v1 = *(int **)this->radioLinks[1]; /*0x65a984*/
    if ( !v1 ) /*0x65a988*/
      return 0; /*0x65a990*/
  }
  if ( v17 == 3 ) /*0x65a99a*/
  {
    v4 = this->radioLinks[2]; /*0x65a99c*/
    v5 = 0; /*0x65a9a2*/
    if ( v4 > 0 ) /*0x65a9a6*/
    {
      do /*0x65a9c7*/
      {
        v6 = this->radioLinks[1]; /*0x65a9a8*/
        v7 = *(int **)(v6 + 4 * v5); /*0x65a9ae*/
        v8 = (_DWORD *)(v6 + 4 * v5); /*0x65a9b1*/
        if ( v7 == v1 ) /*0x65a9b6*/
          *v8 = 0; /*0x65a9b8*/
        ++v5; /*0x65a9c4*/
      }
      while ( v5 < this->radioLinks[2] ); /*0x65a9c7*/
    }
    goto LABEL_9; /*0x65a9c7*/
  }
  if ( v17 != 2 ) /*0x65a9eb*/
  {
  LABEL_9:
    v9 = *v1; /*0x65a9c9*/
    v10 = AbstractClass::IsTechnoType((AbstractClass *)this); /*0x65a9d3*/
    return v1->ProcessInputKey(v10, v17, v18); /*0x65a9e5*/
  }
  v11 = this->radioLinks[2]; /*0x65a9ed*/
  v12 = -1; /*0x65a9f3*/
  v13 = 0; /*0x65a9f6*/
  if ( v11 > 0 ) /*0x65a9fa*/
  {
    v14 = (int **)this->radioLinks[1]; /*0x65a9fc*/
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
  (*((void (__thiscall **)(RadioClass *, int, _DWORD))this->vfptr + 158))(this, 3, *(_DWORD *)this->radioLinks[1]); /*0x65aa1f*/
  v12 = 0; /*0x65aa34*/
  LABEL_20:
  v15 = *v1; /*0x65aa36*/
  v16 = AbstractClass::IsTechnoType((AbstractClass *)this); /*0x65aa41*/
  if ( v1->ProcessInputKey(v16, 2, v18) == 1 ) /*0x65aa52*/
  {
    *(_DWORD *)(this->radioLinks[1] + 4 * v12) = v1; /*0x65aa5a*/
    return 1; /*0x65aa66*/
  }
  return 10; /*0x65a98a*/
}
} // namespace gamemd
// 0x763BA0
namespace gamemd {
int VectorClass_flat::GetAtChecked(IUnknown * aP1)
{
  int v3; // eax

  v3 = (*(int (__thiscall **)(char *, int))(this->u32_28 + 20))((char *)&this->u32_A0, aP1) + 1; /*0x763bb4*/
  if ( this->u32_24 != -1 && v3 == this->u32_38 ) /*0x763bbd*/
    v3 = this->u32_24; /*0x763bbf*/
  if ( v3 < 0 || v3 >= this->u32_38 ) /*0x763bc8*/
    return 0; /*0x763bd7*/
  else
    return this->u32_2C + 12 * v3; /*0x763bd1*/
}
} // namespace gamemd
// 0x42F6F0
namespace gamemd {
AbstractClass * * VectorClass_Cell::Release(int a2, unsigned int * a3)
{
  int v4; // eax
  _DWORD *v5; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x42f6fc*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x42f706*/
    if ( a3 ) /*0x42f70c*/
    {
      v5 = a3; /*0x42f734*/
    }
    else
    {
      v4 = RA2_OPNEW(4 * a2); /*0x42f716*/
      if ( v4 ) /*0x42f720*/
        v5 = (_DWORD *)v4; /*0x42f725*/
      else
        v5 = 0; /*0x42f72d*/
    }
    IDA_LOBYTE(this->m_C) = 1; /*0x42f73c*/
    if ( v5 ) /*0x42f740*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x42f74b*/
      {
        m_8 = this->m_8; /*0x42f752*/
        if ( a2 < m_8 ) /*0x42f757*/
          m_8 = a2; /*0x42f759*/
        for ( i = 0; i < m_8; v5[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x42f75f*/
          ++i; /*0x42f764*/
        if ( IDA_BYTE1(this->m_C) ) /*0x42f771*/
        {
          RA2_OPDEL(*(void **)&this->m_1[3]); /*0x42f77c*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x42f784*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v5; /*0x42f78d*/
      this->m_8 = a2; /*0x42f795*/
      IDA_BYTE1(this->m_C) = a3 == 0; /*0x42f798*/
      return 1; /*0x42f79e*/
    }
    else
    {
      return 0; /*0x42f745*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_VCell *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x42f7a8*/
    return 1; /*0x42f7ae*/
  }
}
}
// 0x4E0840
namespace gamemd {
AbstractClass * * VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::Release(int a2, int * a3)
{
  int *v4; // ebx
  int *v5; // eax
  int *v6; // edi
  _DWORD *v7; // eax
  int v8; // ecx
  int *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // eax

  if ( a2 ) /*0x4e084c*/
  {
    v4 = a3; /*0x4e0852*/
    IDA_LOBYTE(this->m_C) = 0; /*0x4e0856*/
    if ( a3 ) /*0x4e085c*/
    {
      *a3 = a2; /*0x4e0897*/
      v6 = a3 + 1; /*0x4e089b*/
      if ( a2 - 1 >= 0 ) /*0x4e089e*/
      {
        v9 = a3 + 2; /*0x4e08a0*/
        v10 = a2; /*0x4e08a3*/
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
      v5 = (int *)RA2_OPNEW(8 * a2 + 4); /*0x4e0866*/
      if ( v5 ) /*0x4e0870*/
      {
        *v5 = a2; /*0x4e0875*/
        v6 = v5 + 1; /*0x4e0879*/
        if ( a2 - 1 >= 0 ) /*0x4e087c*/
        {
          v7 = v5 + 2; /*0x4e087e*/
          v8 = a2; /*0x4e0881*/
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
    IDA_LOBYTE(this->m_C) = 1; /*0x4e08b2*/
    if ( v6 ) /*0x4e08b6*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x4e08c1*/
      {
        m_8 = this->m_8; /*0x4e08c8*/
        if ( a2 < m_8 ) /*0x4e08cd*/
          m_8 = a2; /*0x4e08cf*/
        v13 = 0; /*0x4e08d1*/
        if ( m_8 > 0 ) /*0x4e08d5*/
        {
          do /*0x4e08ed*/
          {
            v14 = *(_DWORD *)&this->m_1[3]; /*0x4e08d7*/
            ++v13; /*0x4e08da*/
            v6[2 * v13 - 2] = *(_DWORD *)(v14 + 8 * v13 - 8); /*0x4e08e1*/
            v6[2 * v13 - 1] = *(_DWORD *)(v14 + 8 * v13 - 4); /*0x4e08e9*/
          }
          while ( v13 < m_8 ); /*0x4e08ed*/
          v4 = a3; /*0x4e08ef*/
        }
        if ( IDA_BYTE1(this->m_C) ) /*0x4e08f3*/
        {
          v15 = *(_DWORD *)&this->m_1[3]; /*0x4e08fa*/
          if ( v15 ) /*0x4e08ff*/
            RA2_OPDEL((void *)(v15 - 4)); /*0x4e0909*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x4e0911*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v6; /*0x4e091a*/
      this->m_8 = a2; /*0x4e0922*/
      IDA_BYTE1(this->m_C) = v4 == 0; /*0x4e0925*/
      return 1; /*0x4e092b*/
    }
    else
    {
      return 0; /*0x4e08bb*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_V_DistributionObject_PAVCellClass_DiscreteDistributionClass_VCellClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4e0935*/
    return 1; /*0x4e093b*/
  }
}
}
// 0x4E0B10
namespace gamemd {
AbstractClass * * VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::SetCapacity(int a2, int * a3)
{
  int *v4; // ebp
  int *v5; // eax
  int *v6; // edi
  _DWORD *v7; // eax
  int v8; // ecx
  int *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v12; // eax
  int v13; // edx
  int *v14; // eax
  int *v15; // ebp
  int v16; // eax

  if ( a2 ) /*0x4e0b1c*/
  {
    v4 = a3; /*0x4e0b22*/
    IDA_LOBYTE(this->m_C) = 0; /*0x4e0b26*/
    if ( a3 ) /*0x4e0b2c*/
    {
      *a3 = a2; /*0x4e0b67*/
      v6 = a3 + 1; /*0x4e0b6c*/
      if ( a2 - 1 >= 0 ) /*0x4e0b6f*/
      {
        v9 = a3 + 2; /*0x4e0b71*/
        v10 = a2; /*0x4e0b74*/
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
      v5 = (int *)RA2_OPNEW(8 * a2 + 4); /*0x4e0b36*/
      if ( v5 ) /*0x4e0b40*/
      {
        *v5 = a2; /*0x4e0b45*/
        v6 = v5 + 1; /*0x4e0b49*/
        if ( a2 - 1 >= 0 ) /*0x4e0b4c*/
        {
          v7 = v5 + 2; /*0x4e0b4e*/
          v8 = a2; /*0x4e0b51*/
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
    IDA_LOBYTE(this->m_C) = 1; /*0x4e0b83*/
    if ( !v6 ) /*0x4e0b87*/
      return 0; /*0x4e0c27*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x4e0b8d*/
    {
      m_8 = this->m_8; /*0x4e0b94*/
      if ( a2 < m_8 ) /*0x4e0b99*/
        m_8 = a2; /*0x4e0b9b*/
      v12 = 0; /*0x4e0b9d*/
      if ( m_8 > 0 ) /*0x4e0ba1*/
      {
        do /*0x4e0bb9*/
        {
          v13 = *(_DWORD *)&this->m_1[3]; /*0x4e0ba3*/
          ++v12; /*0x4e0ba6*/
          v6[2 * v12 - 2] = *(_DWORD *)(v13 + 8 * v12 - 8); /*0x4e0bad*/
          v6[2 * v12 - 1] = *(_DWORD *)(v13 + 8 * v12 - 4); /*0x4e0bb5*/
        }
        while ( v12 < m_8 ); /*0x4e0bb9*/
        v4 = a3; /*0x4e0bbb*/
      }
      if ( IDA_BYTE1(this->m_C) ) /*0x4e0bbf*/
      {
        v14 = *(int **)&this->m_1[3]; /*0x4e0bc6*/
        if ( v14 ) /*0x4e0bcb*/
        {
          v15 = v14 - 1; /*0x4e0bd0*/
          Array::ForEachReverse(v14, 8, *(v14 - 1), (int (__thiscall *)(int))nullsub_138); /*0x4e0bdc*/
          RA2_OPDEL(v15); /*0x4e0be2*/
          v4 = a3; /*0x4e0be7*/
        }
        *(_DWORD *)&this->m_1[3] = 0; /*0x4e0bee*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v6; /*0x4e0bf7*/
    this->m_8 = a2; /*0x4e0bff*/
    IDA_BYTE1(this->m_C) = v4 == 0; /*0x4e0c02*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_V_DistributionObject_PAVCellClass_DiscreteDistributionClass_VCellClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4e0c0b*/
  }
  v16 = this->m_8; /*0x4e0c0e*/
  if ( v16 < this->m_10 ) /*0x4e0c16*/
    this->m_10 = v16; /*0x4e0c18*/
  return 1; /*0x4e0c1b*/
}
}
// 0x4A2820
namespace gamemd {
unsigned int * VectorClass_K_8::Constructor(void *a1_1, void *a2_1, void *a3_1, void *a4_1, void *a5_1)
{
  this->CStreamClass_field_0x08 = 0; /*0x4a282a*/
  this->CStreamClass_field_0x0C = 0; /*0x4a282d*/
  IDA_LOBYTE(this->CStreamClass_field_0x10) = 0; /*0x4a2830*/
  IDA_BYTE1(this->CStreamClass_field_0x10) = 0; /*0x4a2833*/
  this->CStreamClass_field_0x14 = 0; /*0x4a2836*/
  this->CStreamClass_field_0x18 = RA2_OPNEW(0x10000u); /*0x4a2843*/
  this->CStreamClass_field_0x1C = RA2_OPNEW(0x10000u); /*0x4a2850*/
  this->CStreamClass_field_0x20 = RA2_OPNEW(0x10000u); /*0x4a285b*/
  *(_DWORD *)this->__pad_0 = &(void*)(void*)&CStreamClass_vftable; /*0x4a285e*/
  this->CStreamClass_field_0x04 = (int)&(void*)(void*)&CStreamClass_vftable; /*0x4a2864*/
  this->CStreamClass_field_0x24 = 0xFFFF; /*0x4a286b*/
  return this->__pad_0; /*0x4a2874*/
}
}
// 0x5AD010
namespace gamemd {
AbstractClass * * VectorClass_Ptr::ResizeAndCopy(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5ad01c*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x5ad022*/
    if ( a3 ) /*0x5ad028*/
      v4 = a3; /*0x5ad03e*/
    else
      v4 = (_DWORD *)RA2_OPNEW(4 * a2); /*0x5ad03a*/
    IDA_LOBYTE(this->m_C) = 1; /*0x5ad042*/
    if ( !v4 ) /*0x5ad046*/
      return 0; /*0x5ad0ba*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5ad048*/
    {
      v5 = *(_DWORD *)&this->__pad_5[3]; /*0x5ad04f*/
      if ( a2 < v5 ) /*0x5ad054*/
        v5 = a2; /*0x5ad056*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5ad05c*/
        ++i; /*0x5ad061*/
      if ( IDA_BYTE1(this->m_C) ) /*0x5ad06e*/
      {
        RA2_OPDEL(*(void **)&this->m_1[3]); /*0x5ad079*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5ad081*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5ad08a*/
    *(_DWORD *)&this->__pad_5[3] = a2; /*0x5ad092*/
    IDA_BYTE1(this->m_C) = a3 == 0; /*0x5ad095*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVCellClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5ad09e*/
  }
  v7 = *(_DWORD *)&this->__pad_5[3]; /*0x5ad0a1*/
  if ( v7 < *(_DWORD *)this->__tail_10 ) /*0x5ad0a9*/
    *(_DWORD *)this->__tail_10 = v7; /*0x5ad0ab*/
  return 1; /*0x5ad0ae*/
}
}
// 0x4A0C20
namespace gamemd {
unsigned int * VectorClass_ptr_BuildChoiceClass_int_ouseClass::Constructor(EnumConnectionPointsClass * aP1, void *a2_1, void *a3_1)
{
  char *p_IsInitialized; // esi
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int i; // esi
  int v10; // [esp-4h] [ebp-14h]

  p_IsInitialized = &this->IsInitialized; /*0x4a0c2c*/
  this->Items = 0; /*0x4a0c2f*/
  this->Capacity = 0; /*0x4a0c32*/
  this->Count = 0; /*0x4a0c37*/
  this->CapacityIncrement[0] = 0; /*0x4a0c3a*/
  this->__tail_18[0] = 1; /*0x4a0c3d*/
  this->__tail_18[1] = 0; /*0x4a0c41*/
  *(_DWORD *)&this->IsInitialized = &(void*)(void*)&VectorClass_IConnectionPoint___vftable; /*0x4a0c44*/
  if ( &this->IsInitialized != (char *)a2 ) /*0x4a0c4a*/
  {
    VectorClass::CleanupTyped((int)&this->IsInitialized); /*0x4a0c4e*/
    v4 = a2[2]; /*0x4a0c54*/
    *((_DWORD *)p_IsInitialized + 2) = v4; /*0x4a0c59*/
    if ( v4 ) /*0x4a0c5c*/
    {
      v5 = RA2_OPNEW(4 * v4); /*0x4a0c62*/
      *((_DWORD *)p_IsInitialized + 1) = v5; /*0x4a0c6c*/
      if ( v5 ) /*0x4a0c6f*/
      {
        v6 = *((_DWORD *)p_IsInitialized + 2); /*0x4a0c71*/
        v7 = 0; /*0x4a0c74*/
        p_IsInitialized[13] = 1; /*0x4a0c78*/
        if ( v6 > 0 ) /*0x4a0c7c*/
        {
          do /*0x4a0c90*/
          {
            *(_DWORD *)(*((_DWORD *)p_IsInitialized + 1) + 4 * v7) = *(_DWORD *)(a2[1] + 4 * v7); /*0x4a0c87*/
            ++v7; /*0x4a0c8d*/
          }
          while ( v7 < *((_DWORD *)p_IsInitialized + 2) ); /*0x4a0c90*/
        }
      }
    }
    else
    {
      *((_DWORD *)p_IsInitialized + 1) = 0; /*0x4a0c94*/
      p_IsInitialized[13] = 0; /*0x4a0c97*/
    }
  }
  *((_DWORD *)p_IsInitialized + 4) = a2[4]; /*0x4a0c9d*/
  *((_DWORD *)p_IsInitialized + 5) = a2[5]; /*0x4a0ca3*/
  *(_DWORD *)p_IsInitialized = &(void*)(void*)&DynamicVectorClass_IConnectionPoint___vftable; /*0x4a0ca6*/
  *(_DWORD *)this->__pad_0 = &(void*)(void*)&EnumConnectionPointsClass_vftable; /*0x4a0cac*/
  for ( i = 0; i < *(_DWORD *)&this->__tail_18[4]; ++i ) /*0x4a0cb9*/
  {
    v10 = *((_DWORD *)this->Count + i); /*0x4a0cc1*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 4))(v10); /*0x4a0cc4*/
  }
  return this->__pad_0; /*0x4a0cd1*/
}
}
// 0x4F6A20
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::SetCapacity(int a1, int a2)
{
  int v2; // edi
  int v3; // esi
  HouseClass **v4; // ecx

  v2 = 0; /*0x4f6a27*/
  v3 = 0; /*0x4f6a29*/
  if ( *(int *)&stru_A8EB00.?[164] <= 0 ) /*0x4f6a2d*/
    return 0; /*0x4f6a71*/
  do /*0x4f6a66*/
  {
    v4 = *(HouseClass ***)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v3); /*0x4f6a42*/
    if ( v4[135] == (HouseClass *)((char *)a1 - 36) /*0x4f6a5b*/
      && *(_DWORD *)(((int (__thiscall *)(HouseClass **))(*v4)->occupiablesCount)(v4) + 956) == a2 )
    {
      ++v2; /*0x4f6a5d*/
    }
    ++v3; /*0x4f6a63*/
  }
  while ( v3 < *(int *)&stru_A8EB00.?[164] ); /*0x4f6a66*/
  return v2; /*0x4f6a6c*/
}
}
// 0x4F6A80
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::SetCapacity_0(int a1, int a2)
{
  int v2; // edi
  int v3; // esi
  _DWORD *v4; // ecx
  int v6; // [esp+10h] [ebp+8h]

  v2 = 0; /*0x4f6a87*/
  v3 = 0; /*0x4f6a89*/
  if ( dword_A8EC88 <= 0 ) /*0x4f6a8d*/
    return 0; /*0x4f6ad1*/
  do /*0x4f6ac6*/
  {
    v4 = (_DWORD *)*((_DWORD *)dword_A8EC7C + v3); /*0x4f6aa2*/
    if ( v4[135] == a2 - 40 && *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v4 + 132))(v4) + 956) == v6 ) /*0x4f6abb*/
      ++v2; /*0x4f6abd*/
    ++v3; /*0x4f6ac3*/
  }
  while ( v3 < dword_A8EC88 ); /*0x4f6ac6*/
  return v2; /*0x4f6acc*/
}
}
// 0x4F6AE0
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::SetCapacity_1(int a1, int a2)
{
  int v2; // ebp
  int v3; // edi
  HouseClass **v4; // esi
  _DWORD *v5; // eax

  v2 = 0; /*0x4f6ae7*/
  v3 = 0; /*0x4f6ae9*/
  if ( *(int *)&stru_A8EB00.?[164] <= 0 ) /*0x4f6aed*/
    return 0; /*0x4f6b44*/
  do /*0x4f6b39*/
  {
    v4 = *(HouseClass ***)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v3); /*0x4f6afe*/
    v5 = (_DWORD *)((int (__thiscall *)(HouseClass **))(*v4)->occupiablesCount)(v4); /*0x4f6b05*/
    if ( v4[135] == (HouseClass *)((char *)a1 - 36) && v5[239] == a2 ) /*0x4f6b1f*/
      v2 += v5[412] + v5[413]; /*0x4f6b2f*/
    ++v3; /*0x4f6b36*/
  }
  while ( v3 < *(int *)&stru_A8EB00.?[164] ); /*0x4f6b39*/
  return v2; /*0x4f6b3f*/
}
}
// 0x4F6B50
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::SetCapacity_2(int a1, int a2)
{
  int v2; // ebp
  int v3; // edi
  _DWORD *v4; // esi
  _DWORD *v5; // eax
  int v7; // [esp+10h] [ebp+8h]

  v2 = 0; /*0x4f6b57*/
  v3 = 0; /*0x4f6b59*/
  if ( dword_A8EC88 <= 0 ) /*0x4f6b5d*/
    return 0; /*0x4f6bb4*/
  do /*0x4f6ba9*/
  {
    v4 = (_DWORD *)*((_DWORD *)dword_A8EC7C + v3); /*0x4f6b6e*/
    v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v4 + 132))(v4); /*0x4f6b75*/
    if ( v4[135] == a2 - 40 && v5[239] == v7 ) /*0x4f6b8f*/
      v2 += v5[412] + v5[413]; /*0x4f6b9f*/
    ++v3; /*0x4f6ba6*/
  }
  while ( v3 < dword_A8EC88 ); /*0x4f6ba9*/
  return v2; /*0x4f6baf*/
}
}
// 0x4F6BC0
namespace gamemd {
unsigned int * VectorClass_ptr_BuildChoiceClass_int_ouseClass::SetCapacity_3(int a1, unsigned int * a2)
{
  unsigned __int16 v2; // cx
  unsigned __int16 v3; // di
  int v4; // eax
  int v5; // eax
  void *v6; // eax
  int *v7; // edx
  bool v8; // zf
  int v9; // esi
  int v10; // eax
  void *v11; // eax
  int *v12; // edx
  __int16 v14[2]; // [esp+8h] [ebp-20h] BYREF
  __int16 v15[2]; // [esp+Ch] [ebp-1Ch] BYREF
  int v16; // [esp+10h] [ebp-18h]
  int v17; // [esp+14h] [ebp-14h]
  int v18; // [esp+18h] [ebp-10h]
  _BYTE v19[12]; // [esp+1Ch] [ebp-Ch] BYREF

  v2 = *(_WORD *)&stru_A8EB00.?[948]; /*0x4f6bc0*/
  v3 = *(_WORD *)&stru_A8EB00.?[950]; /*0x4f6bcf*/
  if ( IDA_LOWORD(a1->killedBuildingsOfHouses[15]) == *(_WORD *)&stru_A8EB00.?[948] /*0x4f6be6*/
    && IDA_HIWORD(a1->killedBuildingsOfHouses[15]) == *(_WORD *)&stru_A8EB00.?[950] )
  {
    v4 = a1->killedBuildingsOfHouses[14]; /*0x4f6be8*/
  }
  else
  {
    v4 = a1->killedBuildingsOfHouses[15]; /*0x4f6bf0*/
  }
  *(_DWORD *)v14 = v4; /*0x4f6bfd*/
  if ( v4 == *(_DWORD *)&stru_A8EB00.?[948] ) /*0x4f6c01*/
  {
    v5 = *(_DWORD *)&stru_A8EB00.?[1044]; /*0x4f6c10*/
    v17 = *(_DWORD *)&stru_A8EB00.?[1048]; /*0x4f6c15*/
    v18 = *(_DWORD *)&stru_A8EB00.?[1052]; /*0x4f6c1f*/
  }
  else
  {
    v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v14); /*0x4f6c2f*/
    v7 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v6 + 72))(v6, v19); /*0x4f6c40*/
    v3 = *(_WORD *)&stru_A8EB00.?[950]; /*0x4f6c42*/
    v5 = *v7; /*0x4f6c49*/
    v17 = v7[1]; /*0x4f6c4e*/
    v2 = *(_WORD *)&stru_A8EB00.?[948]; /*0x4f6c52*/
    v18 = v7[2]; /*0x4f6c5b*/
  }
  v8 = IDA_LOWORD(a1->killedBuildingsOfHouses[15]) == v2; /*0x4f6c6b*/
  v14[0] = v5 / 256; /*0x4f6c72*/
  if ( v8 && IDA_HIWORD(a1->killedBuildingsOfHouses[15]) == v3 ) /*0x4f6c80*/
    v9 = a1->killedBuildingsOfHouses[14]; /*0x4f6c82*/
  else
    v9 = a1->killedBuildingsOfHouses[15]; /*0x4f6c8a*/
  *(_DWORD *)v15 = v9; /*0x4f6c97*/
  if ( v9 == IDA___PAIR32__(v3, v2) ) /*0x4f6c9b*/
  {
    v16 = *(_DWORD *)&stru_A8EB00.?[1044]; /*0x4f6caf*/
    v10 = *(_DWORD *)&stru_A8EB00.?[1048]; /*0x4f6cb3*/
  }
  else
  {
    v11 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v15); /*0x4f6cc4*/
    v12 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v11 + 72))(v11, v19); /*0x4f6cd5*/
    v16 = *v12; /*0x4f6cd9*/
    v10 = v12[1]; /*0x4f6cdd*/
  }
  v14[1] = v10 / 256; /*0x4f6cf4*/
  *a2 = *(_DWORD *)v14; /*0x4f6d02*/
  return a2; /*0x4f6cea*/
}
}
// 0x4F6D10
namespace gamemd {
unsigned int * VectorClass_ptr_BuildChoiceClass_int_ouseClass::SetCapacity_4(int a1, unsigned int * a2)
{
  int v2; // kr08_4
  int v3; // eax
  int v4; // eax
  void *v5; // eax
  int *v6; // edx
  bool v7; // zf
  int v8; // esi
  int v9; // eax
  void *v10; // eax
  int *v11; // edx
  __int16 v13[2]; // [esp+8h] [ebp-20h] BYREF
  __int16 v14[2]; // [esp+Ch] [ebp-1Ch] BYREF
  int v15; // [esp+10h] [ebp-18h]
  int v16; // [esp+14h] [ebp-14h]
  int v17; // [esp+18h] [ebp-10h]
  _BYTE v18[12]; // [esp+1Ch] [ebp-Ch] BYREF
  _DWORD *v19; // [esp+30h] [ebp+8h]

  v2 = dword_A8EF98; /*0x4f6d1f*/
  if ( a2[5403] == dword_A8EF98 ) /*0x4f6d2d*/
    v3 = a2[5402]; /*0x4f6d38*/
  else
    v3 = a2[5403]; /*0x4f6d40*/
  *(_DWORD *)v13 = v3; /*0x4f6d4d*/
  if ( v3 == dword_A8EF98 ) /*0x4f6d51*/
  {
    v4 = dword_A8EFF8; /*0x4f6d60*/
    v16 = dword_A8EFFC; /*0x4f6d65*/
    v17 = dword_A8F000; /*0x4f6d6f*/
  }
  else
  {
    v5 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v13); /*0x4f6d7f*/
    v6 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v5 + 72))(v5, v18); /*0x4f6d90*/
    v4 = *v6; /*0x4f6d99*/
    v16 = v6[1]; /*0x4f6d9e*/
    v17 = v6[2]; /*0x4f6dab*/
    v2 = dword_A8EF98; /*0x4f6dab*/
  }
  v7 = *((_WORD *)a2 + 10806) == (unsigned __int16)v2; /*0x4f6dbb*/
  v13[0] = v4 / 256; /*0x4f6dc2*/
  if ( v7 && *((_WORD *)a2 + 10807) == IDA_HIWORD(v2) ) /*0x4f6dd0*/
    v8 = a2[5402]; /*0x4f6dd2*/
  else
    v8 = a2[5403]; /*0x4f6dda*/
  *(_DWORD *)v14 = v8; /*0x4f6de7*/
  if ( v8 == v2 ) /*0x4f6deb*/
  {
    v15 = dword_A8EFF8; /*0x4f6dff*/
    v9 = dword_A8EFFC; /*0x4f6e03*/
  }
  else
  {
    v10 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v14); /*0x4f6e14*/
    v11 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v10 + 72))(v10, v18); /*0x4f6e25*/
    v15 = *v11; /*0x4f6e29*/
    v9 = v11[1]; /*0x4f6e2d*/
  }
  v13[1] = v9 / 256; /*0x4f6e44*/
  *v19 = *(_DWORD *)v13; /*0x4f6e52*/
  return v19; /*0x4f6e3a*/
}
}
// 0x501400
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::SetCapacity_5(int a1)
{
  int v1; // edi
  BuildingClass *v2; // esi
  int v3; // eax
  void *vtable0; // edx
  int *v5; // ecx
  int v7; // [esp+8h] [ebp-4h] BYREF

  v1 = *(_DWORD *)&stru_A8EB00.?[164] - 1; /*0x501409*/
  if ( *(_DWORD *)&stru_A8EB00.?[164] - 1 < 0 ) /*0x50140e*/
  {
    IDA_BYTE1(a1->planningPaths[5]) = 1; /*0x501532*/
    return 0; /*0x50152f*/
  }
  else
  {
    do /*0x50150f*/
    {
      v2 = *(BuildingClass **)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v1); /*0x501423*/
      if ( (HouseClass *)((char *)a1 - 36) == v2->owner && v2->isOnMap && !v2->inLimbo ) /*0x50143d*/
      {
        if ( v2->mindControlledBy_a_unit /*0x50146d*/
          && *(_BYTE *)((*((int (__thiscall **)(_DWORD))v2->vfptr + 33))(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152]
                                                                                   + 4 * v1))
                      + 562)
          && !a1->__pad_13C[140] )
        {
          v3 = (*((int (__thiscall **)(BuildingClass *))v2->vfptr + 33))(v2); /*0x50147b*/
          vtable0 = v2->vfptr; /*0x501487*/
          v7 = *(_DWORD *)(v3 + 160); /*0x501489*/
          (*((void (__thiscall **)(BuildingClass *, int *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))vtable0 + 91))( /*0x5014aa*/
            v2,
            &v7,
            0,
            *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
            0,
            1,
            1,
            0);
        }
        else if ( v2 ) /*0x5014b4*/
        {
          if ( (v2->abstractFlags & 4) != 0 ) /*0x5014c3*/
          {
            v5 = (int *)v2->DamageFireAnims[3]; /*0x5014c5*/
            if ( v5 ) /*0x5014cd*/
              TeamClass::LiberateMember_Start(v5, (int)v2, 0xFFFFFFFF, 0); /*0x5014d4*/
            (*((void (__thiscall **)(BuildingClass *, int, _DWORD))v2->vfptr + 122))(v2, 15, 0); /*0x5014e1*/
          }
          else if ( (*((int (__thiscall **)(BuildingClass *))v2->vfptr + 11))(v2) == 6 /*0x501501*/
                 && (*((int (__thiscall **)(BuildingClass *))v2->vfptr + 258))(v2) > 0 )
          {
            BuildingClass::UnloadUnits(v2, 1, 0); /*0x501509*/
          }
        }
      }
      --v1; /*0x50150e*/
    }
    while ( v1 >= 0 ); /*0x50150f*/
    IDA_BYTE1(a1->planningPaths[5]) = 1; /*0x50151c*/
    return 0; /*0x501523*/
  }
}
// 0x50F520
namespace gamemd {
}
}
// 0x50F660
namespace gamemd {
AbstractClass * * VectorClass_ptr_BuildChoiceClass_int_ouseClass::SetCapacity_6(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x50f52c*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x50f536*/
    if ( a3 ) /*0x50f53c*/
      v4 = a3; /*0x50f552*/
    else
      v4 = (_DWORD *)RA2_OPNEW(4 * a2); /*0x50f54e*/
    IDA_LOBYTE(this->m_C) = 1; /*0x50f556*/
    if ( v4 ) /*0x50f55a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x50f565*/
      {
        m_8 = this->m_8; /*0x50f56c*/
        if ( a2 < m_8 ) /*0x50f571*/
          m_8 = a2; /*0x50f573*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x50f579*/
          ++i; /*0x50f57e*/
        if ( IDA_BYTE1(this->m_C) ) /*0x50f58b*/
        {
          RA2_OPDEL(*(void **)&this->m_1[3]); /*0x50f596*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x50f59e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x50f5a7*/
      this->m_8 = a2; /*0x50f5af*/
      IDA_BYTE1(this->m_C) = a3 == 0; /*0x50f5b2*/
      return 1; /*0x50f5b8*/
    }
    else
    {
      return 0; /*0x50f55f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAUBuildChoiceClass_HouseClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x50f5c2*/
    return 1; /*0x50f5c8*/
  }
}
}
// 0x6288F0
namespace gamemd {
AbstractClass * * VectorClass_ptr_ColorScheme::SetCapacity_0(CCINIClass * aP1, unsigned char * a2)
{
  int v3; // edi
  Byte *v5; // esi
  int v6; // ebx
  Byte *v7; // esi
  int v8; // ebx
  int m_8; // eax
  int v11; // ebx
  char *v12; // edi
  int v13; // esi
  int v14; // [esp+10h] [ebp-8h]
  char *v15; // [esp+10h] [ebp-8h]
  int v16; // [esp+14h] [ebp-4h]

  v3 = aP1; /*0x6288f7*/
  if ( aP1 ) /*0x6288ff*/
  {
    v5 = (Byte *)a2; /*0x628905*/
    IDA_LOBYTE(this->m_C) = 0; /*0x628909*/
    if ( a2 ) /*0x62890f*/
    {
      if ( aP1 - 1 >= 0 ) /*0x628965*/
      {
        v8 = aP1; /*0x628967*/
        do /*0x628978*/
        {
          Byte::Zero(v5); /*0x62896c*/
          v5 += 65; /*0x628971*/
          --v8; /*0x628977*/
        }
        while ( v8 ); /*0x628978*/
      }
      v15 = a2; /*0x62897e*/
    }
    else
    {
      v6 = RA2_OPNEW(260 * aP1); /*0x628921*/
      if ( v6 ) /*0x628928*/
      {
        v7 = (Byte *)v6; /*0x62892d*/
        if ( aP1 - 1 >= 0 ) /*0x628931*/
        {
          v14 = aP1; /*0x628934*/
          do /*0x62894e*/
          {
            Byte::Zero(v7); /*0x62893a*/
            v7 += 65; /*0x628943*/
            --v14; /*0x62894a*/
          }
          while ( v14 ); /*0x62894e*/
        }
        v15 = (char *)v6; /*0x628950*/
      }
      else
      {
        v15 = 0; /*0x628956*/
      }
    }
    IDA_LOBYTE(this->m_C) = 1; /*0x628986*/
    if ( v15 ) /*0x62898c*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x62899a*/
      {
        m_8 = this->m_8; /*0x6289a1*/
        if ( aP1 < m_8 ) /*0x6289a6*/
          m_8 = aP1; /*0x6289a8*/
        if ( m_8 > 0 ) /*0x6289ac*/
        {
          v11 = 0; /*0x6289ae*/
          v12 = v15; /*0x6289b0*/
          v16 = m_8; /*0x6289b2*/
          do /*0x6289e4*/
          {
            v13 = v11 + *(_DWORD *)&this->m_1[3]; /*0x6289bb*/
            String::CopyChecked(v12, (const char *)v13); /*0x6289be*/
            *((_DWORD *)v12 + 64) = *(_DWORD *)(v13 + 256); /*0x6289cd*/
            v11 += 260; /*0x6289d3*/
            v12 += 260; /*0x6289d9*/
            --v16; /*0x6289e0*/
          }
          while ( v16 ); /*0x6289e4*/
          v3 = aP1; /*0x6289e6*/
        }
        if ( IDA_BYTE1(this->m_C) ) /*0x6289ea*/
        {
          RA2_OPDEL(*(void **)&this->m_1[3]); /*0x6289f5*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x6289fd*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v15; /*0x628a0a*/
      this->m_8 = v3; /*0x628a13*/
      IDA_BYTE1(this->m_C) = a2 == 0; /*0x628a1a*/
      return 1; /*0x628a1f*/
    }
    else
    {
      return 0; /*0x628991*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_U_HashObject_VHashString_PAVSchemeNode *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x628a2d*/
    return 1; /*0x628a33*/
  }
}
}
// 0x491210
namespace gamemd {
void * VectorClass_ptr_ConvertClass::Constructor_ConvertClass(void ** Block, char a2)
{
  void *v3; // ecx
  int v4; // eax
  VectorClass_ptr_ConvertClass *v6; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&ConvertClass_vftable; /*0x491214*/
  COMClass::RegisterAll((COMClass *)Block); /*0x49121a*/
  RA2_OPDEL(*((void **)Block + 92)); /*0x491226*/
  v3 = (void *)*((_DWORD *)Block + 94); /*0x49122b*/
  *((_DWORD *)Block + 92) = 0; /*0x491231*/
  RA2_OPDEL(v3); /*0x49123c*/
  *((_DWORD *)Block + 94) = 0; /*0x491244*/
  v6 = Block; /*0x49125d*/
  v4 = (*(int (__thiscall **)(int *, VectorClass_ptr_ConvertClass **))(dword_89ECF8 + 16))(&dword_89ECF8, &v6); /*0x491261*/
  if ( v4 != -1 && v4 < dword_89ED08 && v4 < --dword_89ED08 ) /*0x49127c*/
  {
    do /*0x491294*/
    {
      ++v4; /*0x491284*/
      *((_DWORD *)dword_89ECFC + v4 - 1) = *((_DWORD *)dword_89ECFC + v4); /*0x491288*/
    }
    while ( v4 < dword_89ED08 ); /*0x491294*/
  }
  if ( (a2 & 1) != 0 ) /*0x49129b*/
    RA2_OPDEL(Block); /*0x49129e*/
  return (void **)Block; /*0x4912a8*/
}
}
// 0x4E1960
namespace gamemd {
void VectorClass_ptr_ConvertClass::MarkDirty()
{
  int result; // eax

  this->q01C = 1; /*0x4e1960*/
  return result; /*0x4e1964*/
}
// 0x63E090
namespace gamemd {
}
// 0x76B8C0
namespace gamemd {
}
// 0x5D8470
namespace gamemd {
}
// 0x5D8730
namespace gamemd {
}
// 0x5D8590
namespace gamemd {
}
// 0x4E9840
namespace gamemd {
}
}
// 0x6DC850
namespace gamemd {
AbstractClass * * VectorClass_UDirtyAreaStruct::SetCapacity(CCINIClass * aP1, char * a2)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( aP1 ) /*0x63e09c*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x63e0a6*/
    if ( a2 ) /*0x63e0ac*/
      v4 = a2; /*0x63e0c2*/
    else
      v4 = (_DWORD *)RA2_OPNEW(4 * aP1); /*0x63e0be*/
    IDA_LOBYTE(this->m_C) = 1; /*0x63e0c6*/
    if ( v4 ) /*0x63e0ca*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x63e0d5*/
      {
        m_8 = this->m_8; /*0x63e0dc*/
        if ( aP1 < m_8 ) /*0x63e0e1*/
          m_8 = aP1; /*0x63e0e3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x63e0e9*/
          ++i; /*0x63e0ee*/
        if ( IDA_BYTE1(this->m_C) ) /*0x63e0fb*/
        {
          RA2_OPDEL(*(void **)&this->m_1[3]); /*0x63e106*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x63e10e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x63e117*/
      this->m_8 = aP1; /*0x63e11f*/
      IDA_BYTE1(this->m_C) = a2 == 0; /*0x63e122*/
      return 1; /*0x63e128*/
    }
    else
    {
      return 0; /*0x63e0cf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVPlanningBranchClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x63e132*/
    return 1; /*0x63e138*/
  }
}
}
// 0x6B44A0
namespace gamemd {
AbstractClass * * VectorClass_UUndoInfoStruct::Release(int a2, unsigned int * a3)
{
  int v3; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx
  _DWORD *v8; // edi
  int v9; // ecx
  int m_8; // ecx
  int v12; // eax
  _DWORD *v13; // ebx
  _DWORD *v14; // edx

  v3 = a2; /*0x6b44a2*/
  if ( !a2 ) /*0x6b44ae*/
  {
    (*(void (__thiscall **)(_VectorClass_UUndoInfoStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6b4591*/
    return 1; /*0x6b4597*/
  }
  v5 = a3; /*0x6b44b4*/
  IDA_LOBYTE(this->m_C) = 0; /*0x6b44b8*/
  if ( a3 ) /*0x6b44bd*/
  {
    if ( a2 - 1 >= 0 ) /*0x6b44f8*/
    {
      v9 = a2; /*0x6b44fe*/
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
    v5 = (_DWORD *)RA2_OPNEW(12 * a2); /*0x6b44c7*/
    if ( !v5 ) /*0x6b44d1*/
    {
      v8 = 0; /*0x6b44ef*/
      goto LABEL_14; /*0x6b44f1*/
    }
    v6 = v5; /*0x6b44d6*/
    if ( a2 - 1 >= 0 ) /*0x6b44da*/
    {
      v7 = a2; /*0x6b44de*/
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
  IDA_LOBYTE(this->m_C) = 1; /*0x6b4513*/
  if ( !v8 ) /*0x6b4519*/
    return 0; /*0x6b451e*/
  if ( *(_DWORD *)&this->m_1[3] ) /*0x6b4524*/
  {
    m_8 = this->m_8; /*0x6b4529*/
    if ( a2 < m_8 ) /*0x6b452e*/
      m_8 = a2; /*0x6b4530*/
    if ( m_8 > 0 ) /*0x6b4534*/
    {
      v12 = 0; /*0x6b4536*/
      do /*0x6b4554*/
      {
        v13 = &v8[v12]; /*0x6b453b*/
        v14 = (_DWORD *)(v12 * 4 + *(_DWORD *)&this->m_1[3]); /*0x6b453e*/
        v12 += 3; /*0x6b4540*/
        --m_8; /*0x6b4543*/
        *v13 = *v14; /*0x6b4546*/
        v13[1] = v14[1]; /*0x6b454b*/
        v13[2] = v14[2]; /*0x6b4551*/
      }
      while ( m_8 ); /*0x6b4554*/
      v3 = a2; /*0x6b4556*/
    }
    if ( IDA_BYTE1(this->m_C) ) /*0x6b455c*/
    {
      RA2_OPDEL(*(void **)&this->m_1[3]); /*0x6b4565*/
      *(_DWORD *)&this->m_1[3] = 0; /*0x6b456d*/
    }
  }
  *(_DWORD *)&this->m_1[3] = v8; /*0x6b4578*/
  this->m_8 = v3; /*0x6b457e*/
  IDA_BYTE1(this->m_C) = a3 == 0; /*0x6b4581*/
  return 1; /*0x6b451b*/
}
}
// 0x6B4650
namespace gamemd {
AbstractClass * * VectorClass_UUndoInfoStruct::SetCapacity(int a2, unsigned int * a3)
{
  int v3; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx
  _DWORD *v8; // edi
  int v9; // ecx
  int m_8; // ecx
  int v11; // eax
  _DWORD *v12; // ebx
  _DWORD *v13; // edx
  int v14; // eax

  v3 = a2; /*0x6b4652*/
  if ( !a2 ) /*0x6b465e*/
  {
    (*(void (__thiscall **)(_DynamicVectorClass_UUndoInfoStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6b4731*/
    goto LABEL_26; /*0x6b4731*/
  }
  v5 = a3; /*0x6b4664*/
  IDA_LOBYTE(this->m_C) = 0; /*0x6b4668*/
  if ( a3 ) /*0x6b466d*/
  {
    if ( a2 - 1 >= 0 ) /*0x6b46a8*/
    {
      v9 = a2; /*0x6b46ae*/
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
  v5 = (_DWORD *)RA2_OPNEW(12 * a2); /*0x6b4677*/
  if ( v5 ) /*0x6b4681*/
  {
    v6 = v5; /*0x6b4686*/
    if ( a2 - 1 >= 0 ) /*0x6b468a*/
    {
      v7 = a2; /*0x6b468e*/
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
  IDA_LOBYTE(this->m_C) = 1; /*0x6b46c3*/
  if ( !v8 ) /*0x6b46c9*/
    return 0; /*0x6b474d*/
  if ( *(_DWORD *)&this->m_1[3] ) /*0x6b46cb*/
  {
    m_8 = this->m_8; /*0x6b46d0*/
    if ( a2 < m_8 ) /*0x6b46d5*/
      m_8 = a2; /*0x6b46d7*/
    if ( m_8 > 0 ) /*0x6b46db*/
    {
      v11 = 0; /*0x6b46dd*/
      do /*0x6b46fb*/
      {
        v12 = &v8[v11]; /*0x6b46e2*/
        v13 = (_DWORD *)(v11 * 4 + *(_DWORD *)&this->m_1[3]); /*0x6b46e5*/
        v11 += 3; /*0x6b46e7*/
        --m_8; /*0x6b46ea*/
        *v12 = *v13; /*0x6b46ed*/
        v12[1] = v13[1]; /*0x6b46f2*/
        v12[2] = v13[2]; /*0x6b46f8*/
      }
      while ( m_8 ); /*0x6b46fb*/
      v3 = a2; /*0x6b46fd*/
    }
    if ( IDA_BYTE1(this->m_C) ) /*0x6b4703*/
    {
      RA2_OPDEL(*(void **)&this->m_1[3]); /*0x6b470c*/
      *(_DWORD *)&this->m_1[3] = 0; /*0x6b4714*/
    }
  }
  *(_DWORD *)&this->m_1[3] = v8; /*0x6b471f*/
  this->m_8 = v3; /*0x6b4725*/
  IDA_BYTE1(this->m_C) = a3 == 0; /*0x6b4728*/
  LABEL_26:
  v14 = this->m_8; /*0x6b4734*/
  if ( v14 < this->m_10 ) /*0x6b473c*/
    this->m_10 = v14; /*0x6b473e*/
  return 1; /*0x6b4741*/
}
}
// 0x40B120
namespace gamemd {  // G42.18c ns repair
int VectorClass_flat::Clear(int a2, int a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx

  v3 = *(_DWORD *)&this->m_1[3]; /*0x40b120*/
  v4 = *(_DWORD *)(v3 + 8 * a3); /*0x40b127*/
  v5 = v3 + 8 * a3; /*0x40b12a*/
  *(_DWORD *)a2 = v4; /*0x40b131*/
  *(_BYTE *)(a2 + 4) = *(_BYTE *)(v5 + 4); /*0x40b136*/
  return a2; /*0x40b139*/
}
}  // G42.18c ns repair
// 0x40B140
namespace gamemd {  // G42.18c ns repair
char VectorClass_flat::AddRef(int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->u32_8; /*0x40b142*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x40b14d*/
  {
    v3 = 0; /*0x40b14f*/
    if ( v2 <= 0 ) /*0x40b153*/
      return 1; /*0x40b173*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x40b155*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x40b15b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x40b164*/
    {
      ++v3; /*0x40b166*/
      v4 += 2; /*0x40b167*/
      if ( v3 >= v2 ) /*0x40b16c*/
        return 1; /*0x40b16c*/
    }
  }
  return 0; /*0x40b16e*/
}
}  // G42.18c ns repair
// 0x40B180
namespace gamemd {  // G42.18c ns repair
char VectorClass_flat::Release(int a2, char * a3)
{
  int v3; // ebp
  char *v5; // esi
  char *v6; // eax
  char *v7; // ecx
  char *v9; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  _DWORD *v15; // ebx

  v3 = a2; /*0x40b182*/
  if ( a2 ) /*0x40b18e*/
  {
    v5 = a3; /*0x40b194*/
    this->u32_C = 0; /*0x40b198*/
    if ( a3 ) /*0x40b19d*/
    {
      v9 = a3; /*0x40b1d3*/
      if ( a2 - 1 >= 0 ) /*0x40b1d7*/
      {
        a2 = a2; /*0x40b1d9*/
        do /*0x40b1e3*/
        {
          *(_DWORD *)v9 = 0; /*0x40b1da*/
          v9[4] = 0; /*0x40b1dc*/
          v9 += 8; /*0x40b1df*/
          --a2; /*0x40b1e2*/
        }
        while ( a2 ); /*0x40b1e3*/
      }
    }
    else
    {
      v6 = (char *)RA2_OPNEW(8 * a2); /*0x40b1a7*/
      if ( v6 ) /*0x40b1b1*/
      {
        v7 = v6; /*0x40b1b6*/
        if ( a2 - 1 >= 0 ) /*0x40b1ba*/
        {
          a2 = a2; /*0x40b1bc*/
          do /*0x40b1c6*/
          {
            *(_DWORD *)v7 = 0; /*0x40b1bd*/
            v7[4] = 0; /*0x40b1bf*/
            v7 += 8; /*0x40b1c2*/
            --a2; /*0x40b1c5*/
          }
          while ( a2 ); /*0x40b1c6*/
        }
        v5 = v6; /*0x40b1c8*/
      }
      else
      {
        v5 = 0; /*0x40b1cc*/
      }
    }
    this->u32_C = 1; /*0x40b1e7*/
    if ( v5 ) /*0x40b1eb*/
    {
      if ( this->u32_4 ) /*0x40b1f6*/
      {
        v12 = this->u32_8; /*0x40b1fb*/
        if ( a2 < v12 ) /*0x40b200*/
          v12 = a2; /*0x40b202*/
        v13 = 0; /*0x40b204*/
        if ( v12 > 0 ) /*0x40b208*/
        {
          do /*0x40b227*/
          {
            v14 = 8 * v13; /*0x40b20d*/
            v15 = (_DWORD *)(this->u32_4 + 8 * v13++); /*0x40b216*/
            *(_DWORD *)&v5[v14] = *v15; /*0x40b21d*/
            *(_DWORD *)&v5[v14 + 4] = v15[1]; /*0x40b223*/
          }
          while ( v13 < v12 ); /*0x40b227*/
          v3 = a2; /*0x40b229*/
        }
        if ( this->u32_D ) /*0x40b22f*/
        {
          RA2_OPDEL(*((void **)this + 1)); /*0x40b238*/
          this->u32_4 = 0; /*0x40b240*/
        }
      }
      this->u32_4 = v5; /*0x40b24b*/
      this->u32_8 = v3; /*0x40b251*/
      this->u32_D = a3 == 0; /*0x40b254*/
      return 1; /*0x40b25a*/
    }
    else
    {
      return 0; /*0x40b1f0*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)&this->u32_42))(this); /*0x40b264*/
    return 1; /*0x40b26a*/
  }
}
}  // G42.18c ns repair
// 0x40B270
namespace gamemd {  // G42.18c ns repair
void VectorClass_flat::Cleanup5()
{
  if ( this->Items && this->IsAllocated ) /*0x40b27d*/
  {
    RA2_OPDEL(this->Items); /*0x40b283*/
    this->Items = 0; /*0x40b28b*/
  }
  this->IsAllocated = 0; /*0x40b28e*/
  this->Capacity = 0; /*0x40b291*/
}
}  // G42.18c ns repair
// 0x40B2A0
namespace gamemd {  // G42.18c ns repair
int  VectorClass_flat::GetSize(unsigned int * a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !this->IsInitialized ) /*0x40b2a0*/
    return 0; /*0x40b2a8*/
  v3 = this->Capacity; /*0x40b2ae*/
  result = 0; /*0x40b2b1*/
  if ( v3 <= 0 ) /*0x40b2b5*/
    return -1; /*0x40b2cc*/
  for ( i = this->Items; *i != *a2; i += 2 ) /*0x40b2bb*/
  {
    if ( ++result >= v3 ) /*0x40b2ca*/
      return -1; /*0x40b2ca*/
  }
  return result; /*0x40b2aa*/
}
}  // G42.18c ns repair
// 0x40B2E0
namespace gamemd {  // G42.18c ns repair
unsigned int VectorClass_flat::GetCapacity(int a2)
{
  if ( this->IsInitialized ) /*0x40b2e0*/
    return (unsigned int)(a2 - this->Items) >> 3; /*0x40b2f5*/
  else
    return 0; /*0x40b2e7*/
}
}  // G42.18c ns repair
// 0x40B300
namespace gamemd {  // G42.18c ns repair
VectorClass_flat *  VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x40b303*/
  *Block = &(void*)(void*)&VectorClass_SubzoneConnectionStruct_vftable; /*0x40b306*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x40b310*/
  {
    RA2_OPDEL(v3); /*0x40b318*/
    *(Block + 1) = 0; /*0x40b320*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x40b32b*/
  *(Block + 2) = 0; /*0x40b331*/
  if ( (a2 & 1) != 0 ) /*0x40b338*/
    RA2_OPDEL(Block); /*0x40b33b*/
  return Block; /*0x40b345*/
}
}  // G42.18c ns repair
// 0x40B690
namespace gamemd {
int VectorClass_ptr_BombClass::Get(int a2, void *a2_2)
{
  return *(_DWORD *)(*(_DWORD *)&a2_2->m_1[3] + 4 * a2_2); /*0x40b69a*/
}
} // namespace gamemd

// 0x40B700
namespace gamemd {
char VectorClass_ptr_BombClass::Add(int a2, void *a2_2, void *a3_1)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x40b702*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x40b70d*/
  {
    v3 = 0; /*0x40b70f*/
    if ( m_8 <= 0 ) /*0x40b713*/
      return 1; /*0x40b733*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x40b715*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x40b71b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x40b724*/
    {
      ++v3; /*0x40b726*/
      ++v4; /*0x40b727*/
      if ( v3 >= m_8 ) /*0x40b72c*/
        return 1; /*0x40b72c*/
    }
  }
  return 0; /*0x40b72e*/
}
} // namespace gamemd

// 0x40B7F0
namespace gamemd {
void VectorClass_ptr_BombClass::Remove(void *a1_1)
{
  if ( *(_DWORD *)&a1_1->m_1[3] && IDA_BYTE1(a1_1->m_C) ) /*0x40b7fd*/
  {
    RA2_OPDEL(*(void **)&a1_1->m_1[3]); /*0x40b803*/
    *(_DWORD *)&a1_1->m_1[3] = 0; /*0x40b80b*/
  }
  IDA_BYTE1(a1_1->m_C) = 0; /*0x40b80e*/
  a1_1->m_8 = 0; /*0x40b811*/
}
} // namespace gamemd

// 0x40B820
namespace gamemd {
} // namespace gamemd

// 0x40B860
namespace gamemd {
} // namespace gamemd

// 0x40BA50
namespace gamemd {
void VectorClass_Techno::ddtor(void *a1_1)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !IDA_LOBYTE(this->m_C) ) /*0x40b820*/
    return 0; /*0x40b828*/
  m_8 = this->m_8; /*0x40b82e*/
  result = 0; /*0x40b831*/
  if ( m_8 <= 0 ) /*0x40b835*/
    return -1; /*0x40b84c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a1_1; ++i ) /*0x40b83b*/
  {
    if ( ++result >= m_8 ) /*0x40b84a*/
      return -1; /*0x40b84a*/
  }
  return result; /*0x40b82a*/
}
} // namespace gamemd

// 0x40BA80
namespace gamemd {
int VectorClass_Techno::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !IDA_LOBYTE(this->m_C) ) /*0x40ba80*/
    return 0; /*0x40ba88*/
  m_8 = this->m_8; /*0x40ba8e*/
  result = 0; /*0x40ba91*/
  if ( m_8 <= 0 ) /*0x40ba95*/
    return -1; /*0x40baac*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x40ba9b*/
  {
    if ( ++result >= m_8 ) /*0x40baaa*/
      return -1; /*0x40baaa*/
  }
  return result; /*0x40ba8a*/
}
} // namespace gamemd

// 0x40BAC0
namespace gamemd {
unsigned int VectorClass_Techno::GetCapacity(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x40bac0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x40bad5*/
  else
    return 0; /*0x40bac7*/
}
} // namespace gamemd

// 0x40BBC0
namespace gamemd {
} // namespace gamemd

// 0x40BC60
namespace gamemd {
} // namespace gamemd

// 0x40BEA0
namespace gamemd {
int VectorClass_cptr_CommandClass::Capacity(int a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x40bbc3*/
  *(_DWORD *)this->__pad_0 = &(void*)(void*)&VectorClass_BombClass___vftable; /*0x40bbc6*/
  if ( v3 && IDA_BYTE1(this->m_C) ) /*0x40bbd0*/
  {
    RA2_OPDEL(v3); /*0x40bbd8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x40bbe0*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x40bbeb*/
  this->m_8 = 0; /*0x40bbf1*/
  if ( (a2 & 1) != 0 ) /*0x40bbf8*/
    RA2_OPDEL(); /*0x40bbfb*/
  return this->__pad_0; /*0x40bc05*/
}
} // namespace gamemd

// 0x40BEB0
namespace gamemd {
char VectorClass_cptr_CommandClass::GetAt(int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x40beb2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x40bebd*/
  {
    v3 = 0; /*0x40bebf*/
    if ( m_8 <= 0 ) /*0x40bec3*/
      return 1; /*0x40bee3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x40bec5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x40becb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x40bed4*/
    {
      ++v3; /*0x40bed6*/
      ++v4; /*0x40bed7*/
      if ( v3 >= m_8 ) /*0x40bedc*/
        return 1; /*0x40bedc*/
    }
  }
  return 0; /*0x40bede*/
}
} // namespace gamemd

// 0x40BEF0
namespace gamemd {
char VectorClass_cptr_CommandClass::Release(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x40befc*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x40bf06*/
    if ( a3 ) /*0x40bf0c*/
      v4 = a3; /*0x40bf22*/
    else
      v4 = (_DWORD *)RA2_OPNEW(4 * a2); /*0x40bf1e*/
    IDA_LOBYTE(this->m_C) = 1; /*0x40bf26*/
    if ( v4 ) /*0x40bf2a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x40bf35*/
      {
        m_8 = this->m_8; /*0x40bf3c*/
        if ( a2 < m_8 ) /*0x40bf41*/
          m_8 = a2; /*0x40bf43*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x40bf49*/
          ++i; /*0x40bf4e*/
        if ( IDA_BYTE1(this->m_C) ) /*0x40bf5b*/
        {
          RA2_OPDEL(*(void **)&this->m_1[3]); /*0x40bf66*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x40bf6e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x40bf77*/
      this->m_8 = a2; /*0x40bf7f*/
      IDA_BYTE1(this->m_C) = a3 == 0; /*0x40bf82*/
      return 1; /*0x40bf88*/
    }
    else
    {
      return 0; /*0x40bf2f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBVCommandClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x40bf92*/
    return 1; /*0x40bf98*/
  }
}
} // namespace gamemd

// 0x40BFA0
namespace gamemd {
void VectorClass_cptr_CommandClass::SetAt()
{
  if ( *(_DWORD *)&this->m_1[3] && IDA_BYTE1(this->m_C) ) /*0x40bfad*/
  {
    RA2_OPDEL(*(void **)&this->m_1[3]); /*0x40bfb3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x40bfbb*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x40bfbe*/
  this->m_8 = 0; /*0x40bfc1*/
}
} // namespace gamemd

// 0x40BFD0
namespace gamemd {
} // namespace gamemd

// 0x40C010
namespace gamemd {
} // namespace gamemd

// 0x40C230
namespace gamemd {
void VectorClass_ptr_LightConvertClass::Destroy(void *a1_1)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !IDA_LOBYTE(this->m_C) ) /*0x40bfd0*/
    return 0; /*0x40bfd8*/
  m_8 = this->m_8; /*0x40bfde*/
  result = 0; /*0x40bfe1*/
  if ( m_8 <= 0 ) /*0x40bfe5*/
    return -1; /*0x40bffc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a1_1; ++i ) /*0x40bfeb*/
  {
    if ( ++result >= m_8 ) /*0x40bffa*/
      return -1; /*0x40bffa*/
  }
  return result; /*0x40bfda*/
}
} // namespace gamemd

// 0x40C280
namespace gamemd {
} // namespace gamemd

// 0x40C290
namespace gamemd {
} // namespace gamemd

// 0x40C2D0
namespace gamemd {
} // namespace gamemd

// 0x40C380
namespace gamemd {
} // namespace gamemd

// 0x40C3B0
namespace gamemd {
} // namespace gamemd

// 0x40C3F0
namespace gamemd {
} // namespace gamemd

// 0x40C4C0
namespace gamemd {
int VectorClass_ptr_LightConvertClass::FindItemIndex(unsigned int * a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x40c28a*/
}
} // namespace gamemd

// 0x40C4F0
namespace gamemd {
} // namespace gamemd

// 0x40C540
namespace gamemd {
DynamicVector * VectorClass_ptr_LightConvertClass::Constructor_VectorClass_LightConvertClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x40c4f3*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_LightConvertClass___vftable; /*0x40c4f6*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x40c500*/
  {
    RA2_OPDEL(v3); /*0x40c508*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x40c510*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x40c51b*/
  Block->m_8 = 0; /*0x40c521*/
  if ( (a2 & 1) != 0 ) /*0x40c528*/
    RA2_OPDEL(Block); /*0x40c52b*/
  return Block->__pad_0; /*0x40c535*/
}
} // namespace gamemd

// 0x40C820
namespace gamemd {
} // namespace gamemd

// 0x40C850
namespace gamemd {
unsigned int VectorClass_ptr_IsometricTileClass::GetItemIndex(int a2)
{
  void *v2; // eax

  v2 = *(void **)&a2->m_1[3]; /*0x40c826*/
  a2->m_10 = 0; /*0x40c829*/
  if ( v2 && IDA_BYTE1(a2->m_C) ) /*0x40c830*/
  {
    RA2_OPDEL(v2); /*0x40c836*/
    *(_DWORD *)&a2->m_1[3] = 0; /*0x40c83e*/
  }
  IDA_BYTE1(a2->m_C) = 0; /*0x40c841*/
  a2->m_8 = 0; /*0x40c844*/
}
} // namespace gamemd

// 0x40C870
namespace gamemd {
} // namespace gamemd

// 0x40C880
namespace gamemd {
} // namespace gamemd

// 0x40C8C0
namespace gamemd {
} // namespace gamemd

// 0x40C970
namespace gamemd {
} // namespace gamemd

// 0x40C9A0
namespace gamemd {
} // namespace gamemd

// 0x40C9E0
namespace gamemd {
} // namespace gamemd

// 0x40CA00
namespace gamemd {
} // namespace gamemd

// 0x40CAB0
namespace gamemd {
} // namespace gamemd

// 0x40CAE0
namespace gamemd {
} // namespace gamemd

// 0x40CB30
namespace gamemd {
DynamicVector * VectorClass_ptr_IsometricTileClass::Constructor_VectorClass_IsometricTileClass___(unsigned int * Block, char a2)
{
  return *(_DWORD *)(*(_DWORD *)&Block->m_1[3] + 4 * a2); /*0x40c87a*/
}
} // namespace gamemd

// 0x40CC00
namespace gamemd {
int VectorClass_ptr_IsometricTileClass::GetItem()
{
  return ();
}
} // namespace gamemd

// 0x40CC20
namespace gamemd {
LogicClass * VectorClass_ptr_IsometricTileClass::Constructor_VectorClass_ObjectClass___(unsigned int * Block, char a2)
{
  void *count; // eax

  count = (void *)Block->count; /*0x40cc23*/
  Block->items[0] = (int)&(void*)(void*)&VectorClass_ObjectClass___vftable; /*0x40cc26*/
  if ( count && *((_BYTE *)Block + 13) ) /*0x40cc30*/
  {
    RA2_OPDEL(count); /*0x40cc38*/
    Block->count = 0; /*0x40cc40*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x40cc4b*/
  Block->capacity = 0; /*0x40cc51*/
  if ( (a2 & 1) != 0 ) /*0x40cc58*/
    RA2_OPDEL(Block); /*0x40cc5b*/
  return Block->items; /*0x40cc65*/
}
} // namespace gamemd

// 0x40CC70
namespace gamemd {
void VectorClass_ptr_IsometricTileClass::TryFreeAndClear()
{
  void *v2; // eax

  v2 = this->Items; /*0x40cc76*/
  this->q010 = 0; /*0x40cc79*/
  if ( v2 && this->IsAllocated ) /*0x40cc80*/
  {
    RA2_OPDEL(v2); /*0x40cc86*/
    this->Items = 0; /*0x40cc8e*/
  }
  this->IsAllocated = 0; /*0x40cc91*/
  this->q008 = 0; /*0x40cc94*/
}
} // namespace gamemd

// 0x40CCA0
namespace gamemd {
unsigned int VectorClass_ptr_IsometricTileClass::GetPtrOffset(int a2)
{
  if ( this->IsInitialized ) /*0x40cca0*/
    return (unsigned int)(a2 - this->Items) >> 2; /*0x40ccb5*/
  else
    return 0; /*0x40cca7*/
}
} // namespace gamemd

// 0x40CCC0
namespace gamemd {  // G42.18c ns repair
int VectorClass_flat::GetAt(int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x40ccca*/
}
}  // G42.18c ns repair
// 0x40CF00
namespace gamemd {
int VectorClass_ptr_IsometricTileClass::FindValue(unsigned int * a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->q010; /*0x40cf00*/
  result = 0; /*0x40cf03*/
  if ( v2 <= 0 ) /*0x40cf08*/
    return -1; /*0x40cf1f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x40cf0e*/
  {
    if ( ++result >= v2 ) /*0x40cf1d*/
      return -1; /*0x40cf1d*/
  }
  return result; /*0x40cf22*/
}
} // namespace gamemd

// 0x40D590
namespace gamemd {
} // namespace gamemd

// 0x40D5A0
namespace gamemd {
} // namespace gamemd

// 0x40D5E0
namespace gamemd {
} // namespace gamemd

// 0x40D690
namespace gamemd {
} // namespace gamemd

// 0x40D6C0
namespace gamemd {
} // namespace gamemd

// 0x40D700
namespace gamemd {
} // namespace gamemd

// 0x40D800
namespace gamemd {
} // namespace gamemd

// 0x40E7F0
namespace gamemd {
void VectorClass_ptr_ScriptClass::Destroy(void *a1_1)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a1_1); /*0x40d59a*/
}
} // namespace gamemd

// 0x40E820
namespace gamemd {
unsigned int VectorClass_ptr_ScriptClass::GetItemIndex(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x40e820*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x40e835*/
  else
    return 0; /*0x40e827*/
}
} // namespace gamemd

// 0x40E840
namespace gamemd {
int VectorClass_ptr_ScriptClass::Get(int a2, void *a2_2)
{
  return *(_DWORD *)(*(_DWORD *)&a2_2->m_1[3] + 4 * a2_2); /*0x40e84a*/
}
} // namespace gamemd

// 0x40E850
namespace gamemd {
char VectorClass_ptr_ScriptClass::Add(int a2, void *a2_2, void *a3_1)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x40e852*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x40e85d*/
  {
    v3 = 0; /*0x40e85f*/
    if ( m_8 <= 0 ) /*0x40e863*/
      return 1; /*0x40e883*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x40e865*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x40e86b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x40e874*/
    {
      ++v3; /*0x40e876*/
      ++v4; /*0x40e877*/
      if ( v3 >= m_8 ) /*0x40e87c*/
        return 1; /*0x40e87c*/
    }
  }
  return 0; /*0x40e87e*/
}
} // namespace gamemd

// 0x40E890
namespace gamemd {
} // namespace gamemd

// 0x40E940
namespace gamemd {
void VectorClass_ptr_ScriptClass::Remove(void *a1_1)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x40e89c*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x40e8a6*/
    if ( a3 ) /*0x40e8ac*/
      v4 = a3; /*0x40e8c2*/
    else
      v4 = (_DWORD *)RA2_OPNEW(4 * a2); /*0x40e8be*/
    IDA_LOBYTE(this->m_C) = 1; /*0x40e8c6*/
    if ( v4 ) /*0x40e8ca*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x40e8d5*/
      {
        m_8 = this->m_8; /*0x40e8dc*/
        if ( a2 < m_8 ) /*0x40e8e1*/
          m_8 = a2; /*0x40e8e3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x40e8e9*/
          ++i; /*0x40e8ee*/
        if ( IDA_BYTE1(this->m_C) ) /*0x40e8fb*/
        {
          RA2_OPDEL(*(void **)&this->m_1[3]); /*0x40e906*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x40e90e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x40e917*/
      this->m_8 = a2; /*0x40e91f*/
      IDA_BYTE1(this->m_C) = a3 == 0; /*0x40e922*/
      return 1; /*0x40e928*/
    }
    else
    {
      return 0; /*0x40e8cf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVScriptClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x40e932*/
    return 1; /*0x40e938*/
  }
}
} // namespace gamemd

// 0x40E970
namespace gamemd {
int VectorClass_ptr_ScriptClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !IDA_LOBYTE(this->m_C) ) /*0x40e970*/
    return 0; /*0x40e978*/
  m_8 = this->m_8; /*0x40e97e*/
  result = 0; /*0x40e981*/
  if ( m_8 <= 0 ) /*0x40e985*/
    return -1; /*0x40e99c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x40e98b*/
  {
    if ( ++result >= m_8 ) /*0x40e99a*/
      return -1; /*0x40e99a*/
  }
  return result; /*0x40e97a*/
}
} // namespace gamemd

// 0x40E9B0
namespace gamemd {
unsigned int VectorClass_ptr_ScriptClass::GetCapacity(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x40e9b0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x40e9c5*/
  else
    return 0; /*0x40e9b7*/
}
} // namespace gamemd

// 0x40E9D0
namespace gamemd {
} // namespace gamemd

// 0x40EA80
namespace gamemd {
int VectorClass_ptr_ScriptClass::FindItemIndex(unsigned int * a2)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x40e9dc*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x40e9e2*/
    if ( a3 ) /*0x40e9e8*/
      v4 = a3; /*0x40e9fe*/
    else
      v4 = (_DWORD *)RA2_OPNEW(4 * a2); /*0x40e9fa*/
    IDA_LOBYTE(this->m_C) = 1; /*0x40ea02*/
    if ( !v4 ) /*0x40ea06*/
      return 0; /*0x40ea7a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x40ea08*/
    {
      m_8 = this->m_8; /*0x40ea0f*/
      if ( a2 < m_8 ) /*0x40ea14*/
        m_8 = a2; /*0x40ea16*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x40ea1c*/
        ++i; /*0x40ea21*/
      if ( IDA_BYTE1(this->m_C) ) /*0x40ea2e*/
      {
        RA2_OPDEL(*(void **)&this->m_1[3]); /*0x40ea39*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x40ea41*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x40ea4a*/
    this->m_8 = a2; /*0x40ea52*/
    IDA_BYTE1(this->m_C) = a3 == 0; /*0x40ea55*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVScriptClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x40ea5e*/
  }
  v7 = this->m_8; /*0x40ea61*/
  if ( v7 < this->m_10 ) /*0x40ea69*/
    this->m_10 = v7; /*0x40ea6b*/
  return 1; /*0x40ea6e*/
}
} // namespace gamemd

// 0x40EAB0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_ScriptClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x40eab3*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_ScriptClass___vftable; /*0x40eab6*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x40eac0*/
  {
    RA2_OPDEL(v3); /*0x40eac8*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x40ead0*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x40eadb*/
  Block->m_8 = 0; /*0x40eae1*/
  if ( (a2 & 1) != 0 ) /*0x40eae8*/
    RA2_OPDEL(Block); /*0x40eaeb*/
  return Block->__pad_0; /*0x40eaf5*/
}
} // namespace gamemd

// 0x40EB00
namespace gamemd {
DynamicVector * VectorClass_ptr_ScriptClass::Constructor_VectorClass_ScriptClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x40eb03*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_ScriptClass___vftable; /*0x40eb06*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x40eb10*/
  {
    RA2_OPDEL(v3); /*0x40eb18*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x40eb20*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x40eb2b*/
  Block->m_8 = 0; /*0x40eb31*/
  if ( (a2 & 1) != 0 ) /*0x40eb38*/
    RA2_OPDEL(Block); /*0x40eb3b*/
  return Block->__pad_0; /*0x40eb45*/
}
} // namespace gamemd

// 0x40EEC0
namespace gamemd {
} // namespace gamemd

// 0x40EEF0
namespace gamemd {
} // namespace gamemd

// 0x40EF10
namespace gamemd {
} // namespace gamemd

// 0x40EF20
namespace gamemd {
} // namespace gamemd

// 0x40EF60
namespace gamemd {
} // namespace gamemd

// 0x40F010
namespace gamemd {
} // namespace gamemd

// 0x40F040
namespace gamemd {
} // namespace gamemd

// 0x40F080
namespace gamemd {
} // namespace gamemd

// 0x40F0A0
namespace gamemd {
} // namespace gamemd

// 0x40F150
namespace gamemd {
} // namespace gamemd

// 0x40F180
namespace gamemd {
} // namespace gamemd

// 0x40F1D0
namespace gamemd {
DynamicVector * VectorClass_ptr_VoxelAnimClass::Constructor_VectorClass_VoxelAnimClass___(unsigned int * Block, char a2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x40eec6*/
  this->m_10 = 0; /*0x40eec9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x40eed0*/
  {
    RA2_OPDEL(v2); /*0x40eed6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x40eede*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x40eee1*/
  this->m_8 = 0; /*0x40eee4*/
}
} // namespace gamemd

// 0x40F5E0
namespace gamemd {
} // namespace gamemd

// 0x40F610
namespace gamemd {
} // namespace gamemd

// 0x40F630
namespace gamemd {
int VectorClass_ptr_WarheadTypeClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x40f5e6*/
  this->m_10 = 0; /*0x40f5e9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x40f5f0*/
  {
    RA2_OPDEL(v2); /*0x40f5f6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x40f5fe*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x40f601*/
  this->m_8 = 0; /*0x40f604*/
}
} // namespace gamemd

// 0x40F640
namespace gamemd {
} // namespace gamemd

// 0x40F680
namespace gamemd {
} // namespace gamemd

// 0x40F730
namespace gamemd {
} // namespace gamemd

// 0x40F760
namespace gamemd {
} // namespace gamemd

// 0x40F7A0
namespace gamemd {
unsigned int VectorClass_ptr_WarheadTypeClass::LoadTypeData(int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x40f642*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x40f64d*/
  {
    v3 = 0; /*0x40f64f*/
    if ( m_8 <= 0 ) /*0x40f653*/
      return 1; /*0x40f673*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x40f655*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x40f65b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x40f664*/
    {
      ++v3; /*0x40f666*/
      ++v4; /*0x40f667*/
      if ( v3 >= m_8 ) /*0x40f66c*/
        return 1; /*0x40f66c*/
    }
  }
  return 0; /*0x40f66e*/
}
} // namespace gamemd

// 0x40F7C0
namespace gamemd {
} // namespace gamemd

// 0x40F870
namespace gamemd {
} // namespace gamemd

// 0x40F8A0
namespace gamemd {
} // namespace gamemd

// 0x40F8F0
namespace gamemd {
DynamicVector * VectorClass_ptr_WarheadTypeClass::Constructor_VectorClass_WarheadTypeClass___(unsigned int * Block, char a2)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( Block ) /*0x40f7cc*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x40f7d2*/
    if ( a2 ) /*0x40f7d8*/
      v4 = a2; /*0x40f7ee*/
    else
      v4 = (_DWORD *)RA2_OPNEW(4 * Block); /*0x40f7ea*/
    IDA_LOBYTE(this->m_C) = 1; /*0x40f7f2*/
    if ( !v4 ) /*0x40f7f6*/
      return 0; /*0x40f86a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x40f7f8*/
    {
      m_8 = this->m_8; /*0x40f7ff*/
      if ( Block < m_8 ) /*0x40f804*/
        m_8 = Block; /*0x40f806*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x40f80c*/
        ++i; /*0x40f811*/
      if ( IDA_BYTE1(this->m_C) ) /*0x40f81e*/
      {
        RA2_OPDEL(*(void **)&this->m_1[3]); /*0x40f829*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x40f831*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x40f83a*/
    this->m_8 = Block; /*0x40f842*/
    IDA_BYTE1(this->m_C) = a2 == 0; /*0x40f845*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVWarheadTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x40f84e*/
  }
  v7 = this->m_8; /*0x40f851*/
  if ( v7 < this->m_10 ) /*0x40f859*/
    this->m_10 = v7; /*0x40f85b*/
  return 1; /*0x40f85e*/
}
} // namespace gamemd

// 0x40FBB0
namespace gamemd {
} // namespace gamemd

// 0x40FBE0
namespace gamemd {
} // namespace gamemd

// 0x40FC00
namespace gamemd {
int VectorClass_ptr_WeaponTypeClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x40fbb6*/
  this->m_10 = 0; /*0x40fbb9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x40fbc0*/
  {
    RA2_OPDEL(v2); /*0x40fbc6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x40fbce*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x40fbd1*/
  this->m_8 = 0; /*0x40fbd4*/
}
} // namespace gamemd

// 0x40FC10
namespace gamemd {
} // namespace gamemd

// 0x40FC50
namespace gamemd {
} // namespace gamemd

// 0x40FD00
namespace gamemd {
} // namespace gamemd

// 0x40FD30
namespace gamemd {
} // namespace gamemd

// 0x40FD70
namespace gamemd {
} // namespace gamemd

// 0x40FD90
namespace gamemd {
} // namespace gamemd

// 0x40FE40
namespace gamemd {
} // namespace gamemd

// 0x40FE70
namespace gamemd {
} // namespace gamemd

// 0x40FEC0
namespace gamemd {
DynamicVector * VectorClass_ptr_WeaponTypeClass::Constructor_VectorClass_WeaponTypeClass___(unsigned int * Block, char a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = Block->m_8; /*0x40fc12*/
  if ( m_8 == a2->vtable3 ) /*0x40fc1d*/
  {
    v3 = 0; /*0x40fc1f*/
    if ( m_8 <= 0 ) /*0x40fc23*/
      return 1; /*0x40fc43*/
    v4 = *(_DWORD **)&Block->m_1[3]; /*0x40fc25*/
    v5 = a2->vtable2 - (_DWORD)v4; /*0x40fc2b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x40fc34*/
    {
      ++v3; /*0x40fc36*/
      ++v4; /*0x40fc37*/
      if ( v3 >= m_8 ) /*0x40fc3c*/
        return 1; /*0x40fc3c*/
    }
  }
  return 0; /*0x40fc3e*/
}
} // namespace gamemd

// 0x41DDE0
namespace gamemd {
} // namespace gamemd

// 0x41DE10
namespace gamemd {
} // namespace gamemd

// 0x41DE30
namespace gamemd {
int VectorClass_ptr_AirstrikeClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x41dde6*/
  this->m_10 = 0; /*0x41dde9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x41ddf0*/
  {
    RA2_OPDEL(v2); /*0x41ddf6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x41ddfe*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x41de01*/
  this->m_8 = 0; /*0x41de04*/
}
} // namespace gamemd

// 0x41DE40
namespace gamemd {
} // namespace gamemd

// 0x41DE80
namespace gamemd {
} // namespace gamemd

// 0x41DF30
namespace gamemd {
} // namespace gamemd

// 0x41DF60
namespace gamemd {
} // namespace gamemd

// 0x41DFA0
namespace gamemd {
} // namespace gamemd

// 0x41DFC0
namespace gamemd {
} // namespace gamemd

// 0x41E070
namespace gamemd {
} // namespace gamemd

// 0x41E0A0
namespace gamemd {
} // namespace gamemd

// 0x41E0F0
namespace gamemd {
DynamicVector * VectorClass_ptr_AirstrikeClass::Constructor_VectorClass_AirstrikeClass___(unsigned int * Block, char a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = Block->m_8; /*0x41de42*/
  if ( m_8 == a2->vtable3 ) /*0x41de4d*/
  {
    v3 = 0; /*0x41de4f*/
    if ( m_8 <= 0 ) /*0x41de53*/
      return 1; /*0x41de73*/
    v4 = *(_DWORD **)&Block->m_1[3]; /*0x41de55*/
    v5 = a2->vtable2 - (_DWORD)v4; /*0x41de5b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x41de64*/
    {
      ++v3; /*0x41de66*/
      ++v4; /*0x41de67*/
      if ( v3 >= m_8 ) /*0x41de6c*/
        return 1; /*0x41de6c*/
    }
  }
  return 0; /*0x41de6e*/
}
} // namespace gamemd

// 0x421800
namespace gamemd {
} // namespace gamemd

// 0x421830
namespace gamemd {
} // namespace gamemd

// 0x421850
namespace gamemd {
int VectorClass_ptr_AlphaShapeClass::Get(int a2, void *a2_2)
{
  void *Items; // eax

  Items = this->Items; /*0x421806*/
  this->Count = 0; /*0x421809*/
  if ( Items && this->IsAllocated ) /*0x421810*/
  {
    RA2_OPDEL(Items); /*0x421816*/
    this->Items = 0; /*0x42181e*/
  }
  this->IsAllocated = 0; /*0x421821*/
  this->Capacity = 0; /*0x421824*/
}
} // namespace gamemd

// 0x421860
namespace gamemd {
} // namespace gamemd

// 0x4218A0
namespace gamemd {
} // namespace gamemd

// 0x421950
namespace gamemd {
} // namespace gamemd

// 0x421980
namespace gamemd {
} // namespace gamemd

// 0x4219C0
namespace gamemd {
} // namespace gamemd

// 0x4219E0
namespace gamemd {
} // namespace gamemd

// 0x421A90
namespace gamemd {
} // namespace gamemd

// 0x421AC0
namespace gamemd {
} // namespace gamemd

// 0x421B10
namespace gamemd {
unsigned int * VectorClass_ptr_AlphaShapeClass::loc_421B10(unsigned int * Block, char a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = Block->m_8; /*0x421862*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x42186d*/
  {
    v3 = 0; /*0x42186f*/
    if ( m_8 <= 0 ) /*0x421873*/
      return 1; /*0x421893*/
    v4 = *(_DWORD **)&Block->m_1[3]; /*0x421875*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x42187b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x421884*/
    {
      ++v3; /*0x421886*/
      ++v4; /*0x421887*/
      if ( v3 >= m_8 ) /*0x42188c*/
        return 1; /*0x42188c*/
    }
  }
  return 0; /*0x42188e*/
}
} // namespace gamemd

// 0x42D5A0
namespace gamemd {
} // namespace gamemd

// 0x42D5D0
namespace gamemd {
} // namespace gamemd

// 0x42D5F0
namespace gamemd {
short VectorClass_ushort::Clear(int a2)
{
  void *v2; // eax

  v2 = *(void **)&a2->m_1[3]; /*0x42d5a6*/
  a2->m_10 = 0; /*0x42d5a9*/
  if ( v2 && IDA_BYTE1(a2->m_C) ) /*0x42d5b0*/
  {
    RA2_OPDEL(v2); /*0x42d5b6*/
    *(_DWORD *)&a2->m_1[3] = 0; /*0x42d5be*/
  }
  IDA_BYTE1(a2->m_C) = 0; /*0x42d5c1*/
  a2->m_8 = 0; /*0x42d5c4*/
}
} // namespace gamemd

// 0x42D8B0
namespace gamemd {
char VectorClass_ushort::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  _WORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x42d8b1*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x42d8bc*/
  {
    v3 = 0; /*0x42d8be*/
    if ( m_8 <= 0 ) /*0x42d8c2*/
      return 1; /*0x42d8e1*/
    v4 = *(_WORD **)&this->m_1[3]; /*0x42d8c4*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x42d8ca*/
    while ( *v4 == *(_WORD *)((char *)v4 + v5) ) /*0x42d8d3*/
    {
      ++v3; /*0x42d8d5*/
      ++v4; /*0x42d8d6*/
      if ( v3 >= m_8 ) /*0x42d8db*/
        return 1; /*0x42d8db*/
    }
  }
  return 0; /*0x42d8dd*/
}
} // namespace gamemd

// 0x42D8F0
namespace gamemd {
char VectorClass_ushort::Remove(int a2, unsigned short * a3)
{
  _WORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x42d8fc*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x42d906*/
    if ( a3 ) /*0x42d90c*/
      v4 = a3; /*0x42d91f*/
    else
      v4 = (_WORD *)RA2_OPNEW(2 * a2); /*0x42d91b*/
    IDA_LOBYTE(this->m_C) = 1; /*0x42d923*/
    if ( v4 ) /*0x42d927*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x42d932*/
      {
        m_8 = this->m_8; /*0x42d939*/
        if ( a2 < m_8 ) /*0x42d93e*/
          m_8 = a2; /*0x42d940*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_WORD *)(*(_DWORD *)&this->m_1[3] + 2 * i - 2) ) /*0x42d946*/
          ++i; /*0x42d94b*/
        if ( IDA_BYTE1(this->m_C) ) /*0x42d95a*/
        {
          RA2_OPDEL(*(void **)&this->m_1[3]); /*0x42d965*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x42d96d*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x42d976*/
      this->m_8 = a2; /*0x42d97e*/
      IDA_BYTE1(this->m_C) = a3 == 0; /*0x42d981*/
      return 1; /*0x42d987*/
    }
    else
    {
      return 0; /*0x42d92c*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_G *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x42d991*/
    return 1; /*0x42d997*/
  }
}
} // namespace gamemd

// 0x42D9A0
namespace gamemd {
} // namespace gamemd

// 0x42D9D0
namespace gamemd {
} // namespace gamemd

// 0x42DA10
namespace gamemd {
} // namespace gamemd

// 0x42DA30
namespace gamemd {
} // namespace gamemd

// 0x42DAE0
namespace gamemd {
} // namespace gamemd

// 0x42DBB0
namespace gamemd {
VectorClass_ushort * VectorClass_ushort::Add(unsigned int * Block, char a2, void *a3_1)
{
  if ( *(_DWORD *)&this->m_1[3] && IDA_BYTE1(this->m_C) ) /*0x42d9ad*/
  {
    RA2_OPDEL(*(void **)&this->m_1[3]); /*0x42d9b3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42d9bb*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x42d9be*/
  this->m_8 = 0; /*0x42d9c1*/
}
} // namespace gamemd

// 0x42DC00
namespace gamemd {
DynamicVector * VectorClass_ushort::Constructor(unsigned int * Block, char a2, void *a3_1)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x42dc03*/
  *(_DWORD *)this->__pad_0 = &(void*)(void*)&VectorClass_unsigned_short_vftable; /*0x42dc06*/
  if ( v3 && IDA_BYTE1(this->m_C) ) /*0x42dc10*/
  {
    RA2_OPDEL(v3); /*0x42dc18*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42dc20*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x42dc2b*/
  this->m_8 = 0; /*0x42dc31*/
  if ( (a2 & 1) != 0 ) /*0x42dc38*/
    RA2_OPDEL(); /*0x42dc3b*/
  return this->__pad_0; /*0x42dc45*/
}
} // namespace gamemd

// 0x42F7F0
namespace gamemd {
} // namespace gamemd

// 0x42F840
namespace gamemd {
} // namespace gamemd

// 0x42F860
namespace gamemd {  // G42.18c ns repair
char VectorClass_flat::ResizeEx(int a2, unsigned int * a3)
{
  int result; // eax
  int m_8; // edx
  _WORD *i; // ecx

  if ( !IDA_LOBYTE(a3->m_C) ) /*0x42f7f0*/
    return 0; /*0x42f7fc*/
  m_8 = a3->m_8; /*0x42f802*/
  result = 0; /*0x42f805*/
  if ( m_8 <= 0 ) /*0x42f809*/
    return -1; /*0x42f82c*/
  for ( i = *(_WORD **)&a3->m_1[3]; *i != *a3 || i[1] != a3[1]; i += 2 ) /*0x42f80f*/
  {
    if ( ++result >= m_8 ) /*0x42f82a*/
      return -1; /*0x42f82a*/
  }
  return result; /*0x42f7fa*/
}
}  // G42.18c ns repair
// 0x42FBA0
namespace gamemd {
} // namespace gamemd

// 0x42FCB0
namespace gamemd {  // G42.18c ns repair
unsigned int * VectorClass_flat::CellConstructor(IUnknown * aP1, IUnknown * aP2)
{
  void *v3; // eax

  v3 = *(void **)&aP1->m_1[3]; /*0x42fba3*/
  *(_DWORD *)aP1->__pad_0 = &(void*)(void*)&VectorClass_Cell_vftable; /*0x42fba6*/
  if ( v3 && IDA_BYTE1(aP1->m_C) ) /*0x42fbb0*/
  {
    RA2_OPDEL(v3); /*0x42fbb8*/
    *(_DWORD *)&aP1->m_1[3] = 0; /*0x42fbc0*/
  }
  IDA_BYTE1(aP1->m_C) = 0; /*0x42fbcb*/
  aP1->m_8 = 0; /*0x42fbd1*/
  if ( (aP2 & 1) != 0 ) /*0x42fbd8*/
    RA2_OPDEL(aP1); /*0x42fbdb*/
  return aP1->__pad_0; /*0x42fbe5*/
}
}  // G42.18c ns repair
// 0x45A070
namespace gamemd {
} // namespace gamemd

// 0x45A0A0
namespace gamemd {
} // namespace gamemd

// 0x45A0C0
namespace gamemd {
int VectorClass_ptr_FoggedObjectClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x45a076*/
  this->m_10 = 0; /*0x45a079*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x45a080*/
  {
    RA2_OPDEL(v2); /*0x45a086*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x45a08e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x45a091*/
  this->m_8 = 0; /*0x45a094*/
}
} // namespace gamemd

// 0x45A0D0
namespace gamemd {
} // namespace gamemd

// 0x45A100
namespace gamemd {
} // namespace gamemd

// 0x45A120
namespace gamemd {
int VectorClass_ptr_Reestablish::Clear(int a2)
{
  void *v2; // eax

  v2 = *(void **)&a2->m_1[3]; /*0x45a0d6*/
  a2->m_10 = 0; /*0x45a0d9*/
  if ( v2 && IDA_BYTE1(a2->m_C) ) /*0x45a0e0*/
  {
    RA2_OPDEL(v2); /*0x45a0e6*/
    *(_DWORD *)&a2->m_1[3] = 0; /*0x45a0ee*/
  }
  IDA_BYTE1(a2->m_C) = 0; /*0x45a0f1*/
  a2->m_8 = 0; /*0x45a0f4*/
}
} // namespace gamemd

// 0x45A270
namespace gamemd {  // G42.18c ns repair
void VectorClass_flat::Cleanup(void *a1)
{
  if ( *(_DWORD *)(a1 + 4) && *(_BYTE *)(a1 + 13) ) /*0x45a27d*/
  {
    RA2_OPDEL(*(void **)(a1 + 4)); /*0x45a283*/
    *(_DWORD *)(a1 + 4) = 0; /*0x45a28b*/
  }
  *(_BYTE *)(a1 + 13) = 0; /*0x45a28e*/
  *(_DWORD *)(a1 + 8) = 0; /*0x45a291*/
}
}  // G42.18c ns repair
// 0x45A4D0
namespace gamemd {
void VectorClass_ptr_InfantryClass::Remove(void *a1_1)
{
  if ( *(_DWORD *)&a1_1->m_1[3] && a1_1->m_D[0] ) /*0x45a4dd*/
  {
    RA2_OPDEL(*(void **)&a1_1->m_1[3]); /*0x45a4e3*/
    *(_DWORD *)&a1_1->m_1[3] = 0; /*0x45a4eb*/
  }
  a1_1->m_D[0] = 0; /*0x45a4ee*/
  a1_1->m_8 = 0; /*0x45a4f1*/
}
} // namespace gamemd

// 0x45A640
namespace gamemd {
} // namespace gamemd

// 0x45A680
namespace gamemd {
} // namespace gamemd

// 0x45A730
namespace gamemd {
} // namespace gamemd

// 0x45A760
namespace gamemd {
} // namespace gamemd

// 0x45A7A0
namespace gamemd {
char VectorClass_ptr_Reestablish::Remove(int a2, unsigned int * a3)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = a3->m_8; /*0x45a642*/
  if ( m_8 == a3->vtable3 ) /*0x45a64d*/
  {
    v3 = 0; /*0x45a64f*/
    if ( m_8 <= 0 ) /*0x45a653*/
      return 1; /*0x45a673*/
    v4 = *(_DWORD **)&a3->m_1[3]; /*0x45a655*/
    v5 = a3->vtable2 - (_DWORD)v4; /*0x45a65b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x45a664*/
    {
      ++v3; /*0x45a666*/
      ++v4; /*0x45a667*/
      if ( v3 >= m_8 ) /*0x45a66c*/
        return 1; /*0x45a66c*/
    }
  }
  return 0; /*0x45a66e*/
}
} // namespace gamemd

// 0x45A850
namespace gamemd {
} // namespace gamemd

// 0x45A880
namespace gamemd {
} // namespace gamemd

// 0x45A8C0
namespace gamemd {
} // namespace gamemd

// 0x45A8E0
namespace gamemd {
} // namespace gamemd

// 0x45A990
namespace gamemd {
} // namespace gamemd

// 0x45AA10
namespace gamemd {
DynamicVector * VectorClass_ptr_Reestablish::Constructor(unsigned int * Block, char a2, void *a3_1)
{
  if ( *(_DWORD *)&this->m_1[3] && IDA_BYTE1(this->m_C) ) /*0x45a85d*/
  {
    RA2_OPDEL(*(void **)&this->m_1[3]); /*0x45a863*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x45a86b*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x45a86e*/
  this->m_8 = 0; /*0x45a871*/
}
} // namespace gamemd

// 0x45AAB0
namespace gamemd {
DynamicVector * VectorClass_InfantryPtr::Destruct(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*((_DWORD *)Block + 1); /*0x45aab3*/
  *(_DWORD *)Block = &(void*)(void*)&VectorClass_InfantryClass___vftable; /*0x45aab6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x45aac0*/
  {
    RA2_OPDEL(v3); /*0x45aac8*/
    *((_DWORD *)Block + 1) = 0; /*0x45aad0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x45aadb*/
  *((_DWORD *)Block + 2) = 0; /*0x45aae1*/
  if ( (a2 & 1) != 0 ) /*0x45aae8*/
    RA2_OPDEL(Block); /*0x45aaeb*/
  return Block; /*0x45aaf5*/
}
} // namespace gamemd

// 0x45AB00
namespace gamemd {
DynamicVector * VectorClass_ptr_FoggedObjectClass::Constructor_VectorClass_FoggedObjectClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x45ab03*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_FoggedObjectClass___vftable; /*0x45ab06*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x45ab10*/
  {
    RA2_OPDEL(v3); /*0x45ab18*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x45ab20*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x45ab2b*/
  Block->m_8 = 0; /*0x45ab31*/
  if ( (a2 & 1) != 0 ) /*0x45ab38*/
    RA2_OPDEL(Block); /*0x45ab3b*/
  return Block->__pad_0; /*0x45ab45*/
}
} // namespace gamemd

// 0x45AB50
namespace gamemd {
} // namespace gamemd

// 0x45AC00
namespace gamemd {
} // namespace gamemd

// 0x45AC30
namespace gamemd {
} // namespace gamemd

// 0x45AC70
namespace gamemd {
} // namespace gamemd

// 0x45AC90
namespace gamemd {
} // namespace gamemd

// 0x45ACE0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_Reestablish::Add(unsigned int * Block, char a2, void *a3_1)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x45ab5c*/
  {
    IDA_LOBYTE(Block->m_C) = 0; /*0x45ab66*/
    if ( a3_1 ) /*0x45ab6c*/
      v4 = a3_1; /*0x45ab82*/
    else
      v4 = (_DWORD *)RA2_OPNEW(4 * a2); /*0x45ab7e*/
    IDA_LOBYTE(Block->m_C) = 1; /*0x45ab86*/
    if ( v4 ) /*0x45ab8a*/
    {
      if ( *(_DWORD *)&Block->m_1[3] ) /*0x45ab95*/
      {
        m_8 = Block->m_8; /*0x45ab9c*/
        if ( a2 < m_8 ) /*0x45aba1*/
          m_8 = a2; /*0x45aba3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&Block->m_1[3] + 4 * i - 4) ) /*0x45aba9*/
          ++i; /*0x45abae*/
        if ( IDA_BYTE1(Block->m_C) ) /*0x45abbb*/
        {
          RA2_OPDEL(*(void **)&Block->m_1[3]); /*0x45abc6*/
          *(_DWORD *)&Block->m_1[3] = 0; /*0x45abce*/
        }
      }
      *(_DWORD *)&Block->m_1[3] = v4; /*0x45abd7*/
      Block->m_8 = a2; /*0x45abdf*/
      IDA_BYTE1(Block->m_C) = a3_1 == 0; /*0x45abe2*/
      return 1; /*0x45abe8*/
    }
    else
    {
      return 0; /*0x45ab8f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVFoggedObjectClass *))(*(_DWORD *)Block->__pad_0 + 12))(Block); /*0x45abf2*/
    return 1; /*0x45abf8*/
  }
}
} // namespace gamemd

// 0x45AD30
namespace gamemd {
DynamicVector * VectorClass_ptr_Reestablish::Constructor_VectorClass_Reestablish___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x45ad33*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_Reestablish___vftable; /*0x45ad36*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x45ad40*/
  {
    RA2_OPDEL(v3); /*0x45ad48*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x45ad50*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x45ad5b*/
  Block->m_8 = 0; /*0x45ad61*/
  if ( (a2 & 1) != 0 ) /*0x45ad68*/
    RA2_OPDEL(Block); /*0x45ad6b*/
  return Block->__pad_0; /*0x45ad75*/
}
} // namespace gamemd

// 0x45AD80
namespace gamemd {  // G42.18c ns repair
unsigned int * VectorClass_flat::ConstructorWithVtable(TechnoTypeClass * aP1, TechnoTypeClass * aP2)
{
  this->Items = 0; /*0x45ad8b*/
  this->Capacity = aP1; /*0x45ad8e*/
  this->IsInitialized = 1; /*0x45ad91*/
  this->IsAllocated = 0; /*0x45ad95*/
  this->vfptr = &(void*)(void*)&VectorClass_ParticleSystemTypeClass_const___vftable; /*0x45ad98*/
  if ( aP1 ) /*0x45ad9e*/
  {
    if ( aP2 ) /*0x45ada6*/
    {
      this->Items = (void *)aP2; /*0x45ada8*/
      return &this->vfptr; /*0x45adae*/
    }
    this->Items = (void *)RA2_OPNEW(4 * aP1); /*0x45adbd*/
    this->IsAllocated = 1; /*0x45adc0*/
  }
  return &this->vfptr; /*0x45adad*/
}
}  // G42.18c ns repair
// 0x45AE50
namespace gamemd {
unsigned int * VectorClass_ReestablishPtr::Construct(BuildingClass * aP1, BuildingClass * aP2, void *a3_1, void *a4_1, void *a5_1, void *a6_1)
{
  *(_DWORD *)&this->m_1[3] = 0; /*0x45ae5b*/
  *(_DWORD *)&this->__pad_5[3] = a2; /*0x45ae5e*/
  IDA_LOBYTE(this->m_C) = 1; /*0x45ae61*/
  IDA_BYTE1(this->m_C) = 0; /*0x45ae65*/
  *(_DWORD *)this->__pad_0 = &(void*)(void*)&VectorClass_Reestablish___vftable; /*0x45ae68*/
  if ( a2 ) /*0x45ae6e*/
  {
    if ( a3 ) /*0x45ae76*/
    {
      *(_DWORD *)&this->m_1[3] = a3; /*0x45ae78*/
      return this->__pad_0; /*0x45ae7e*/
    }
    *(_DWORD *)&this->m_1[3] = RA2_OPNEW(4 * a2); /*0x45ae8d*/
    IDA_BYTE1(this->m_C) = 1; /*0x45ae90*/
  }
  return this->__pad_0; /*0x45ae7d*/
}
} // namespace gamemd

// 0x465DE0
namespace gamemd {
unsigned int * VectorClass_TPoint3D_int::Clear(unsigned int * a2, int a3)
{
  _DWORD *v3; // edx

  v3 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 12 * a3); /*0x465deb*/
  *a2 = *v3; /*0x465df6*/
  a2[1] = v3[1]; /*0x465dfb*/
  a2[2] = v3[2]; /*0x465e02*/
  return a2; /*0x465dfe*/
}
} // namespace gamemd

// 0x465E10
namespace gamemd {
} // namespace gamemd

// 0x465E70
namespace gamemd {
} // namespace gamemd

// 0x465F50
namespace gamemd {
} // namespace gamemd

// 0x465F80
namespace gamemd {
} // namespace gamemd

// 0x465FD0
namespace gamemd {
} // namespace gamemd

// 0x466080
namespace gamemd {
} // namespace gamemd

// 0x46B5E0
namespace gamemd {
} // namespace gamemd

// 0x46B610
namespace gamemd {
} // namespace gamemd

// 0x46B630
namespace gamemd {
int VectorClass_ptr_BulletClass::Get(int a2, void *a2_2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  m_8 = a2_2->m_8; /*0x465e1b*/
  if ( m_8 == *(_DWORD *)(a2_2 + 8) ) /*0x465e20*/
  {
    v3 = 0; /*0x465e22*/
    if ( m_8 <= 0 ) /*0x465e26*/
      return 1; /*0x465e60*/
    v4 = *(_DWORD *)(a2_2 + 4); /*0x465e28*/
    v5 = *(_DWORD **)&a2_2->m_1[3]; /*0x465e2b*/
    v6 = (_DWORD *)(v4 + 8); /*0x465e2e*/
    v7 = v4 - (_DWORD)v5; /*0x465e31*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *(v6 - 1) && v5[2] == *v6 ) /*0x465e4d*/
    {
      ++v3; /*0x465e4f*/
      v6 += 3; /*0x465e50*/
      v5 += 3; /*0x465e53*/
      if ( v3 >= m_8 ) /*0x465e58*/
        return 1; /*0x465e58*/
    }
  }
  return 0; /*0x465e5a*/
}
} // namespace gamemd

// 0x46B660
namespace gamemd {
} // namespace gamemd

// 0x46B6A0
namespace gamemd {
} // namespace gamemd

// 0x46B750
namespace gamemd {
} // namespace gamemd

// 0x46B780
namespace gamemd {
} // namespace gamemd

// 0x46B7C0
namespace gamemd {
} // namespace gamemd

// 0x46B7E0
namespace gamemd {
} // namespace gamemd

// 0x46B890
namespace gamemd {
} // namespace gamemd

// 0x46B8C0
namespace gamemd {
} // namespace gamemd

// 0x46B910
namespace gamemd {
unsigned int * VectorClass_ptr_BulletClass::loc_46B910(unsigned int * Block, char a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = Block->m_8; /*0x46b662*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x46b66d*/
  {
    v3 = 0; /*0x46b66f*/
    if ( m_8 <= 0 ) /*0x46b673*/
      return 1; /*0x46b693*/
    v4 = *(_DWORD **)&Block->m_1[3]; /*0x46b675*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x46b67b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x46b684*/
    {
      ++v3; /*0x46b686*/
      ++v4; /*0x46b687*/
      if ( v3 >= m_8 ) /*0x46b68c*/
        return 1; /*0x46b68c*/
    }
  }
  return 0; /*0x46b68e*/
}
} // namespace gamemd

// 0x46B990
namespace gamemd {
LONG VectorClass_ptr_BulletClass::GetItem(int a1)
{
  return BulletClass::CheckTargetValidity(a1 - 4);
}
} // namespace gamemd

// 0x46B9A0
namespace gamemd {
LONG VectorClass_ptr_BulletClass::GetItem_0(int a1)
{
  return BulletClass::ValidateTarget((volatile LONG *)(a1 - 4));
}
} // namespace gamemd

// 0x472AE0
namespace gamemd {
} // namespace gamemd

// 0x472B10
namespace gamemd {
} // namespace gamemd

// 0x472B30
namespace gamemd {
int VectorClass_ptr_CaptureManagerClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x472ae6*/
  this->m_10 = 0; /*0x472ae9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x472af0*/
  {
    RA2_OPDEL(v2); /*0x472af6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x472afe*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x472b01*/
  this->m_8 = 0; /*0x472b04*/
}
} // namespace gamemd

// 0x472DA0
namespace gamemd {
} // namespace gamemd

// 0x472DE0
namespace gamemd {
} // namespace gamemd

// 0x472E90
namespace gamemd {
} // namespace gamemd

// 0x472EC0
namespace gamemd {
} // namespace gamemd

// 0x472F00
namespace gamemd {
} // namespace gamemd

// 0x472F20
namespace gamemd {
} // namespace gamemd

// 0x472FD0
namespace gamemd {
} // namespace gamemd

// 0x4730A0
namespace gamemd {
} // namespace gamemd

// 0x4730F0
namespace gamemd {
DynamicVector * VectorClass_ptr_CaptureManagerClass::Constructor_VectorClass_CaptureManagerClass___(unsigned int * Block, char a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = Block->m_8; /*0x472da2*/
  if ( m_8 == a2->vtable3 ) /*0x472dad*/
  {
    v3 = 0; /*0x472daf*/
    if ( m_8 <= 0 ) /*0x472db3*/
      return 1; /*0x472dd3*/
    v4 = *(_DWORD **)&Block->m_1[3]; /*0x472db5*/
    v5 = a2->vtable2 - (_DWORD)v4; /*0x472dbb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x472dc4*/
    {
      ++v3; /*0x472dc6*/
      ++v4; /*0x472dc7*/
      if ( v3 >= m_8 ) /*0x472dcc*/
        return 1; /*0x472dcc*/
    }
  }
  return 0; /*0x472dce*/
}
} // namespace gamemd

// 0x477750
namespace gamemd {  // G42.18c ns repair
int * VectorClass_flat::ScalarDtor(char a2)
{
  Pipe::Dtor(); /*0x477753*/
  if ( (a2 & 1) != 0 ) /*0x47775d*/
    RA2_OPDEL(); /*0x477760*/
  return (int *)this->__pad_0; /*0x47776a*/
}
}  // G42.18c ns repair
// 0x4777B0
namespace gamemd {  // G42.18c ns repair
unsigned int * VectorClass_flat::Copy(VectorClass_flat * aP1, void *a2)
{
  int v3; // eax
  int v4; // eax
  int Capacity; // ecx
  int v6; // eax

  aP1->Items = 0; /*0x4777bd*/
  aP1->Capacity = 0; /*0x4777c0*/
  aP1->IsInitialized[0] = 1; /*0x4777c3*/
  aP1->IsAllocated[0] = 0; /*0x4777c7*/
  aP1->vfptr = (int)&(void*)(void*)&VectorClass_int_vftable; /*0x4777ca*/
  if ( aP1 != (DynamicVectorClass *)a2 ) /*0x4777d0*/
  {
    VectorClass::Destroy((int)aP1); /*0x4777d2*/
    v3 = a2[2]; /*0x4777d8*/
    aP1->Capacity = v3; /*0x4777dd*/
    if ( v3 ) /*0x4777e0*/
    {
      v4 = RA2_OPNEW(4 * v3); /*0x4777e6*/
      aP1->Items = v4; /*0x4777f0*/
      if ( v4 ) /*0x4777f3*/
      {
        Capacity = aP1->Capacity; /*0x4777f5*/
        v6 = 0; /*0x4777f8*/
        aP1->IsAllocated[0] = 1; /*0x4777fc*/
        if ( Capacity > 0 ) /*0x477800*/
        {
          do /*0x477814*/
          {
            *(_DWORD *)(aP1->Items + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x47780b*/
            ++v6; /*0x477811*/
          }
          while ( v6 < aP1->Capacity ); /*0x477814*/
        }
      }
    }
    else
    {
      aP1->Items = 0; /*0x477818*/
      aP1->IsAllocated[0] = 0; /*0x47781b*/
    }
  }
  aP1->Count = a2[4]; /*0x477821*/
  aP1->CapacityIncrement = a2[5]; /*0x477827*/
  aP1->vfptr = (int)&(void*)(void*)&TypeList_int_vftable; /*0x47782a*/
  return &aP1->vfptr; /*0x477832*/
}
}  // G42.18c ns repair
// 0x477890
namespace gamemd {  // G42.18c ns repair
int VectorClass_flat::GetAt_Copy(int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x47789a*/
}
}  // G42.18c ns repair
// 0x477BE0
namespace gamemd {  // G42.18c ns repair
unsigned int * VectorClass_flat::Construct(int a2, int a3, void *a3_2, void *a4, void *a5, void *a6)
{
  this->Items = 0; /*0x477beb*/
  this->Capacity = a2; /*0x477bee*/
  this->IsInitialized = 1; /*0x477bf1*/
  this->IsAllocated = 0; /*0x477bf5*/
  this->vfptr = &(void*)(void*)&VectorClass_int_vftable; /*0x477bf8*/
  if ( a2 ) /*0x477bfe*/
  {
    if ( a3 ) /*0x477c06*/
    {
      this->Items = (void *)a3; /*0x477c08*/
      return &this->vfptr; /*0x477c0e*/
    }
    this->Items = (void *)RA2_OPNEW(4 * a2); /*0x477c1d*/
    this->IsAllocated = 1; /*0x477c20*/
  }
  return &this->vfptr; /*0x477c0d*/
}
}  // G42.18c ns repair
// 0x477C70
namespace gamemd {  // G42.18c ns repair
char VectorClass_flat::vt02(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x477c7c*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x477c86*/
    if ( a3 ) /*0x477c8c*/
      v4 = a3; /*0x477ca2*/
    else
      v4 = (_DWORD *)RA2_OPNEW(4 * a2); /*0x477c9e*/
    IDA_LOBYTE(this->m_C) = 1; /*0x477ca6*/
    if ( v4 ) /*0x477caa*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x477cb5*/
      {
        m_8 = this->m_8; /*0x477cbc*/
        if ( a2 < m_8 ) /*0x477cc1*/
          m_8 = a2; /*0x477cc3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x477cc9*/
          ++i; /*0x477cce*/
        if ( IDA_BYTE1(this->m_C) ) /*0x477cdb*/
        {
          RA2_OPDEL(*(void **)&this->m_1[3]); /*0x477ce6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x477cee*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x477cf7*/
      this->m_8 = a2; /*0x477cff*/
      IDA_BYTE1(this->m_C) = a3 == 0; /*0x477d02*/
      return 1; /*0x477d08*/
    }
    else
    {
      return 0; /*0x477caf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_H *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x477d12*/
    return 1; /*0x477d18*/
  }
}
}  // G42.18c ns repair
// 0x477D20
namespace gamemd {  // G42.18c ns repair
void VectorClass_flat::Destroy(void *a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 4); /*0x477d26*/
  if ( result && *(_BYTE *)(a1 + 13) ) /*0x477d2d*/
  {
    RA2_OPDEL(*(void **)(a1 + 4)); /*0x477d33*/
    *(_DWORD *)(a1 + 4) = 0; /*0x477d3b*/
  }
  *(_BYTE *)(a1 + 13) = 0; /*0x477d3e*/
  *(_DWORD *)(a1 + 8) = 0; /*0x477d41*/
  return result; /*0x477d44*/
}
}  // G42.18c ns repair
// 0x477D50
namespace gamemd {  // G42.18c ns repair
int  VectorClass_flat::vt04(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !IDA_LOBYTE(this->m_C) ) /*0x477d50*/
    return 0; /*0x477d58*/
  m_8 = this->m_8; /*0x477d5e*/
  result = 0; /*0x477d61*/
  if ( m_8 <= 0 ) /*0x477d65*/
    return -1; /*0x477d7c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x477d6b*/
  {
    if ( ++result >= m_8 ) /*0x477d7a*/
      return -1; /*0x477d7a*/
  }
  return result; /*0x477d5a*/
}
}  // G42.18c ns repair
// 0x477D90
namespace gamemd {  // G42.18c ns repair
unsigned int VectorClass_flat::vt05(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x477d90*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x477da5*/
  else
    return 0; /*0x477d97*/
}
}  // G42.18c ns repair
// 0x477E10
namespace gamemd {  // G42.18c ns repair
char VectorClass_flat::Resize(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x477e1c*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x477e22*/
    if ( a3 ) /*0x477e28*/
      v4 = a3; /*0x477e3e*/
    else
      v4 = (_DWORD *)RA2_OPNEW(4 * a2); /*0x477e3a*/
    IDA_LOBYTE(this->m_C) = 1; /*0x477e42*/
    if ( !v4 ) /*0x477e46*/
      return 0; /*0x477eba*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x477e48*/
    {
      m_8 = this->m_8; /*0x477e4f*/
      if ( a2 < m_8 ) /*0x477e54*/
        m_8 = a2; /*0x477e56*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x477e5c*/
        ++i; /*0x477e61*/
      if ( IDA_BYTE1(this->m_C) ) /*0x477e6e*/
      {
        RA2_OPDEL(*(void **)&this->m_1[3]); /*0x477e79*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x477e81*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x477e8a*/
    this->m_8 = a2; /*0x477e92*/
    IDA_BYTE1(this->m_C) = a3 == 0; /*0x477e95*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_H *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x477e9e*/
  }
  v7 = this->m_8; /*0x477ea1*/
  if ( v7 < this->m_10 ) /*0x477ea9*/
    this->m_10 = v7; /*0x477eab*/
  return 1; /*0x477eae*/
}
}  // G42.18c ns repair
// 0x478630
namespace gamemd {  // G42.18c ns repair
VectorClass_flat *  VectorClass_flat::vt00(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x478633*/
  *Block = &(void*)(void*)&VectorClass_int_vftable; /*0x478636*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x478640*/
  {
    RA2_OPDEL(v3); /*0x478648*/
    *(Block + 1) = 0; /*0x478650*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x47865b*/
  *(Block + 2) = 0; /*0x478661*/
  if ( (a2 & 1) != 0 ) /*0x478668*/
    RA2_OPDEL(Block); /*0x47866b*/
  return Block; /*0x478675*/
}
}  // G42.18c ns repair
// 0x48AD10
namespace gamemd {
} // namespace gamemd

// 0x48AD40
namespace gamemd {
} // namespace gamemd

// 0x48AD60
namespace gamemd {
int VectorClass_ptr_DamageGroup::Clear(int a2)
{
  void *v2; // eax

  v2 = *(void **)&a2->m_1[3]; /*0x48ad16*/
  a2->m_10 = 0; /*0x48ad19*/
  if ( v2 && IDA_BYTE1(a2->m_C) ) /*0x48ad20*/
  {
    RA2_OPDEL(v2); /*0x48ad26*/
    *(_DWORD *)&a2->m_1[3] = 0; /*0x48ad2e*/
  }
  IDA_BYTE1(a2->m_C) = 0; /*0x48ad31*/
  a2->m_8 = 0; /*0x48ad34*/
}
} // namespace gamemd

// 0x48AD70
namespace gamemd {
} // namespace gamemd

// 0x48ADB0
namespace gamemd {
} // namespace gamemd

// 0x48AE60
namespace gamemd {
} // namespace gamemd

// 0x48AE90
namespace gamemd {
} // namespace gamemd

// 0x48AED0
namespace gamemd {
} // namespace gamemd

// 0x48AEF0
namespace gamemd {
} // namespace gamemd

// 0x48AFA0
namespace gamemd {
} // namespace gamemd

// 0x48AFD0
namespace gamemd {
} // namespace gamemd

// 0x48B020
namespace gamemd {
DynamicVector * VectorClass_ptr_DamageGroup::Constructor_VectorClass_DamageGroup___(unsigned int * Block, char a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = Block->m_8; /*0x48ad72*/
  if ( m_8 == a2->vtable3 ) /*0x48ad7d*/
  {
    v3 = 0; /*0x48ad7f*/
    if ( m_8 <= 0 ) /*0x48ad83*/
      return 1; /*0x48ada3*/
    v4 = *(_DWORD **)&Block->m_1[3]; /*0x48ad85*/
    v5 = a2->vtable2 - (_DWORD)v4; /*0x48ad8b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x48ad94*/
    {
      ++v3; /*0x48ad96*/
      ++v4; /*0x48ad97*/
      if ( v3 >= m_8 ) /*0x48ad9c*/
        return 1; /*0x48ad9c*/
    }
  }
  return 0; /*0x48ad9e*/
}
} // namespace gamemd

// 0x491390
namespace gamemd {
} // namespace gamemd

// 0x4913C0
namespace gamemd {
} // namespace gamemd

// 0x4913E0
namespace gamemd {
int VectorClass_ptr_ConvertClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x491396*/
  this->m_10 = 0; /*0x491399*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4913a0*/
  {
    RA2_OPDEL(v2); /*0x4913a6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4913ae*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4913b1*/
  this->m_8 = 0; /*0x4913b4*/
}
} // namespace gamemd

// 0x49AE80
namespace gamemd {
} // namespace gamemd

// 0x49AEC0
namespace gamemd {
} // namespace gamemd

// 0x49AF70
namespace gamemd {
} // namespace gamemd

// 0x49AFA0
namespace gamemd {
} // namespace gamemd

// 0x49AFE0
namespace gamemd {
} // namespace gamemd

// 0x49B000
namespace gamemd {
} // namespace gamemd

// 0x49B0B0
namespace gamemd {
} // namespace gamemd

// 0x49B0E0
namespace gamemd {
} // namespace gamemd

// 0x49B130
namespace gamemd {
DynamicVector * VectorClass_ptr_ConvertClass::Constructor_VectorClass_ConvertClass___(unsigned int * Block, char a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = Block->m_8; /*0x49ae82*/
  if ( m_8 == a2->vtable3 ) /*0x49ae8d*/
  {
    v3 = 0; /*0x49ae8f*/
    if ( m_8 <= 0 ) /*0x49ae93*/
      return 1; /*0x49aeb3*/
    v4 = *(_DWORD **)&Block->m_1[3]; /*0x49ae95*/
    v5 = a2->vtable2 - (_DWORD)v4; /*0x49ae9b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x49aea4*/
    {
      ++v3; /*0x49aea6*/
      ++v4; /*0x49aea7*/
      if ( v3 >= m_8 ) /*0x49aeac*/
        return 1; /*0x49aeac*/
    }
  }
  return 0; /*0x49aeae*/
}
} // namespace gamemd

// 0x49FB60
namespace gamemd {  // G42.18c ns repair
int VectorClass_flat::GetCount()
{
  return this->Count; /*0x49fb63*/
}
}  // G42.18c ns repair
// 0x4A0E10
namespace gamemd {
DynamicVector *  VectorClass_UtagCONNECTDATA::Constructor_VectorClass_tagCONNECTDATA_(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4a0e13*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_tagCONNECTDATA_vftable; /*0x4a0e16*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4a0e20*/
  {
    RA2_OPDEL(v3); /*0x4a0e28*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4a0e30*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4a0e3b*/
  Block->m_8 = 0; /*0x4a0e41*/
  if ( (a2 & 1) != 0 ) /*0x4a0e48*/
    RA2_OPDEL(Block); /*0x4a0e4b*/
  return Block->__pad_0; /*0x4a0e55*/
}
} // namespace gamemd

// 0x4A0EB0
namespace gamemd {
} // namespace gamemd

// 0x4A0EE0
namespace gamemd {
} // namespace gamemd

// 0x4A0F00
namespace gamemd {
} // namespace gamemd

// 0x4A0F80
namespace gamemd {
} // namespace gamemd

// 0x4A0FE0
namespace gamemd {
} // namespace gamemd

// 0x4A10A0
namespace gamemd {  // G42.18c ns repair
void VectorClass_flat::ClearAndFree2()
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4a0eb6*/
  this->m_10 = 0; /*0x4a0eb9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4a0ec0*/
  {
    RA2_OPDEL(v2); /*0x4a0ec6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4a0ece*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4a0ed1*/
  this->m_8 = 0; /*0x4a0ed4*/
}
}  // G42.18c ns repair
// 0x4A10D0
namespace gamemd {
} // namespace gamemd

// 0x4A1120
namespace gamemd {
} // namespace gamemd

// 0x4A1140
namespace gamemd {
} // namespace gamemd

// 0x4A1200
namespace gamemd {
} // namespace gamemd

// 0x4A1330
namespace gamemd {  // G42.18c ns repair
void VectorClass_flat::CleanupTyped()
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !IDA_LOBYTE(this->m_C) ) /*0x4a10d0*/
    return 0; /*0x4a10de*/
  m_8 = this->m_8; /*0x4a10e4*/
  result = 0; /*0x4a10e7*/
  if ( m_8 <= 0 ) /*0x4a10eb*/
    return -1; /*0x4a110c*/
  for ( i = *(_DWORD **)&this->m_1[3]; i[1] != a2[1] || *i != *a2; i += 2 ) /*0x4a10f1*/
  {
    if ( ++result >= m_8 ) /*0x4a110a*/
      return -1; /*0x4a110a*/
  }
  return result; /*0x4a10db*/
}
}  // G42.18c ns repair
// 0x4A14A0
namespace gamemd {
} // namespace gamemd

// 0x4A7FE0
namespace gamemd {  // G42.18c ns repair
char VectorClass_flat::AppendCopy(DynamicVector * aP1)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4a14a3*/
  *(_DWORD *)this->__pad_0 = &(void*)(void*)&VectorClass_tagCONNECTDATA_vftable; /*0x4a14a6*/
  if ( v3 && IDA_BYTE1(this->m_C) ) /*0x4a14b0*/
  {
    RA2_OPDEL(v3); /*0x4a14b8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4a14c0*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4a14cb*/
  this->m_8 = 0; /*0x4a14d1*/
  if ( (aP1 & 1) != 0 ) /*0x4a14d8*/
    RA2_OPDEL(); /*0x4a14db*/
  return this->__pad_0; /*0x4a14e5*/
}
}  // G42.18c ns repair
// 0x4B9C30
namespace gamemd {
int VectorClass_ptr_CrossDissolveEffect::GetItem(int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x4b9c3a*/
}
} // namespace gamemd

// 0x4B9C90
namespace gamemd {
int VectorClass_ptr_CrossDissolveEffect::Clear(int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x4b9c9a*/
}
} // namespace gamemd

// 0x4B9CA0
namespace gamemd {
} // namespace gamemd

// 0x4B9CE0
namespace gamemd {
} // namespace gamemd

// 0x4B9D90
namespace gamemd {
} // namespace gamemd

// 0x4B9DC0
namespace gamemd {
int VectorClass_ptr_CrossDissolveEffect::FindItemIndex_0(unsigned int * a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x4b9ca2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x4b9cad*/
  {
    v3 = 0; /*0x4b9caf*/
    if ( m_8 <= 0 ) /*0x4b9cb3*/
      return 1; /*0x4b9cd3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x4b9cb5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4b9cbb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4b9cc4*/
    {
      ++v3; /*0x4b9cc6*/
      ++v4; /*0x4b9cc7*/
      if ( v3 >= m_8 ) /*0x4b9ccc*/
        return 1; /*0x4b9ccc*/
    }
  }
  return 0; /*0x4b9cce*/
}
} // namespace gamemd

// 0x4B9E00
namespace gamemd {
} // namespace gamemd

// 0x4B9F00
namespace gamemd {
} // namespace gamemd

// 0x4B9F40
namespace gamemd {
} // namespace gamemd

// 0x4B9FF0
namespace gamemd {
} // namespace gamemd

// 0x4BA020
namespace gamemd {
} // namespace gamemd

// 0x4BA060
namespace gamemd {
} // namespace gamemd

// 0x4BA1B0
namespace gamemd {
unsigned int * VectorClass_ptr_CrossDissolveEffect::loc_4BA1B0(unsigned int * Block, char a2)
{
  if ( Block->IsInitialized ) /*0x4b9e00*/
    return (a2 - (unsigned int)Block->Items) >> 2; /*0x4b9e15*/
  else
    return 0; /*0x4b9e07*/
}
} // namespace gamemd

// 0x4BA250
namespace gamemd {
} // namespace gamemd

// 0x4C2C40
namespace gamemd {
} // namespace gamemd

// 0x4C2C70
namespace gamemd {
} // namespace gamemd

// 0x4C2C90
namespace gamemd {
int VectorClass_ptr_EBolt::Get(int a2, void *a2_2)
{
  void *v3; // eax

  v3 = *(void **)&a2_2->m_1[3]; /*0x4ba253*/
  *(_DWORD *)a2_2->__pad_0 = &(void*)(void*)&VectorClass_CrossDissolveEffect___vftable; /*0x4ba256*/
  if ( v3 && IDA_BYTE1(a2_2->m_C) ) /*0x4ba260*/
  {
    RA2_OPDEL(v3); /*0x4ba268*/
    *(_DWORD *)&a2_2->m_1[3] = 0; /*0x4ba270*/
  }
  IDA_BYTE1(a2_2->m_C) = 0; /*0x4ba27b*/
  a2_2->m_8 = 0; /*0x4ba281*/
  if ( (a2_2 & 1) != 0 ) /*0x4ba288*/
    RA2_OPDEL(a2_2); /*0x4ba28b*/
  return a2_2->__pad_0; /*0x4ba295*/
}
} // namespace gamemd

// 0x4C2CA0
namespace gamemd {
} // namespace gamemd

// 0x4C2CE0
namespace gamemd {
} // namespace gamemd

// 0x4C2D90
namespace gamemd {
} // namespace gamemd

// 0x4C2DC0
namespace gamemd {
} // namespace gamemd

// 0x4C2E00
namespace gamemd {
} // namespace gamemd

// 0x4C2E20
namespace gamemd {
} // namespace gamemd

// 0x4C2ED0
namespace gamemd {
} // namespace gamemd

// 0x4C2F00
namespace gamemd {
} // namespace gamemd

// 0x4C2F50
namespace gamemd {
DynamicVector * VectorClass_ptr_EBolt::Constructor_VectorClass_EBolt___(unsigned int * Block, char a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = Block->m_8; /*0x4c2ca2*/
  if ( m_8 == a2->vtable3 ) /*0x4c2cad*/
  {
    v3 = 0; /*0x4c2caf*/
    if ( m_8 <= 0 ) /*0x4c2cb3*/
      return 1; /*0x4c2cd3*/
    v4 = *(_DWORD **)&Block->m_1[3]; /*0x4c2cb5*/
    v5 = a2->vtable2 - (_DWORD)v4; /*0x4c2cbb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4c2cc4*/
    {
      ++v3; /*0x4c2cc6*/
      ++v4; /*0x4c2cc7*/
      if ( v3 >= m_8 ) /*0x4c2ccc*/
        return 1; /*0x4c2ccc*/
    }
  }
  return 0; /*0x4c2cce*/
}
} // namespace gamemd

// 0x4C49A0
namespace gamemd {
} // namespace gamemd

// 0x4C49D0
namespace gamemd {
} // namespace gamemd

// 0x4C49F0
namespace gamemd {
int VectorClass_ptr_EgoClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4c49a6*/
  this->m_10 = 0; /*0x4c49a9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4c49b0*/
  {
    RA2_OPDEL(v2); /*0x4c49b6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4c49be*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4c49c1*/
  this->m_8 = 0; /*0x4c49c4*/
}
} // namespace gamemd

// 0x4C4A00
namespace gamemd {
} // namespace gamemd

// 0x4C4A40
namespace gamemd {
} // namespace gamemd

// 0x4C4AF0
namespace gamemd {
} // namespace gamemd

// 0x4C4B20
namespace gamemd {
} // namespace gamemd

// 0x4C4B60
namespace gamemd {
} // namespace gamemd

// 0x4C4B80
namespace gamemd {
} // namespace gamemd

// 0x4C4C30
namespace gamemd {
} // namespace gamemd

// 0x4C4C60
namespace gamemd {
} // namespace gamemd

// 0x4C4CB0
namespace gamemd {
DynamicVector * VectorClass_ptr_EgoClass::Constructor_VectorClass_EgoClass___(unsigned int * Block, char a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = Block->m_8; /*0x4c4a02*/
  if ( m_8 == a2->vtable3 ) /*0x4c4a0d*/
  {
    v3 = 0; /*0x4c4a0f*/
    if ( m_8 <= 0 ) /*0x4c4a13*/
      return 1; /*0x4c4a33*/
    v4 = *(_DWORD **)&Block->m_1[3]; /*0x4c4a15*/
    v5 = a2->vtable2 - (_DWORD)v4; /*0x4c4a1b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4c4a24*/
    {
      ++v3; /*0x4c4a26*/
      ++v4; /*0x4c4a27*/
      if ( v3 >= m_8 ) /*0x4c4a2c*/
        return 1; /*0x4c4a2c*/
    }
  }
  return 0; /*0x4c4a2e*/
}
} // namespace gamemd

// 0x4C5B60
namespace gamemd {
} // namespace gamemd

// 0x4C5B90
namespace gamemd {
} // namespace gamemd

// 0x4C5BB0
namespace gamemd {
int VectorClass_ptr_EMPulseClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4c5b66*/
  this->m_10 = 0; /*0x4c5b69*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4c5b70*/
  {
    RA2_OPDEL(v2); /*0x4c5b76*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4c5b7e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4c5b81*/
  this->m_8 = 0; /*0x4c5b84*/
}
} // namespace gamemd

// 0x4C5BC0
namespace gamemd {
} // namespace gamemd

// 0x4C5C00
namespace gamemd {
} // namespace gamemd

// 0x4C5CB0
namespace gamemd {
} // namespace gamemd

// 0x4C5CE0
namespace gamemd {
} // namespace gamemd

// 0x4C5D20
namespace gamemd {
} // namespace gamemd

// 0x4C5D40
namespace gamemd {
} // namespace gamemd

// 0x4C5DF0
namespace gamemd {
} // namespace gamemd

// 0x4C5E20
namespace gamemd {
} // namespace gamemd

// 0x4C5E70
namespace gamemd {
DynamicVector * VectorClass_ptr_EMPulseClass::Constructor_VectorClass_EMPulseClass___(unsigned int * Block, char a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = Block->m_8; /*0x4c5bc2*/
  if ( m_8 == a2->vtable3 ) /*0x4c5bcd*/
  {
    v3 = 0; /*0x4c5bcf*/
    if ( m_8 <= 0 ) /*0x4c5bd3*/
      return 1; /*0x4c5bf3*/
    v4 = *(_DWORD **)&Block->m_1[3]; /*0x4c5bd5*/
    v5 = a2->vtable2 - (_DWORD)v4; /*0x4c5bdb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4c5be4*/
    {
      ++v3; /*0x4c5be6*/
      ++v4; /*0x4c5be7*/
      if ( v3 >= m_8 ) /*0x4c5bec*/
        return 1; /*0x4c5bec*/
    }
  }
  return 0; /*0x4c5bee*/
}
} // namespace gamemd

// 0x4E0250
namespace gamemd {
unsigned int * VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::Clear(unsigned int * a2, int a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx

  v3 = *(_DWORD *)&this->m_1[3]; /*0x4e0250*/
  v4 = *(_DWORD *)(v3 + 8 * a3); /*0x4e0257*/
  v5 = v3 + 8 * a3; /*0x4e025a*/
  *a2 = v4; /*0x4e0261*/
  a2[1] = *(_DWORD *)(v5 + 4); /*0x4e0266*/
  return a2; /*0x4e0269*/
}
} // namespace gamemd

// 0x4E07E0
namespace gamemd {
} // namespace gamemd

// 0x4E0950
namespace gamemd {
} // namespace gamemd

// 0x4E0990
namespace gamemd {
struct _VectorClass_V_DistributionObject_PAVCellClass_DiscreteDistributionClass_VCellClass;  // G42.38d fwd: flattened template receiver (def 0x4E0990)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  m_8 = this->m_8; /*0x4e07eb*/
  if ( m_8 == *(_DWORD *)(x4E0990 + 8) ) /*0x4e07f0*/
  {
    v3 = 0; /*0x4e07f2*/
    if ( m_8 <= 0 ) /*0x4e07f6*/
      return 1; /*0x4e0826*/
    v4 = *(_DWORD *)(x4E0990 + 4); /*0x4e07f8*/
    v5 = *(_DWORD **)&this->m_1[3]; /*0x4e07fb*/
    v6 = (_DWORD *)(v4 + 4); /*0x4e07fe*/
    v7 = v4 - (_DWORD)v5; /*0x4e0801*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x4e0813*/
    {
      ++v3; /*0x4e0815*/
      v6 += 2; /*0x4e0816*/
      v5 += 2; /*0x4e0819*/
      if ( v3 >= m_8 ) /*0x4e081e*/
        return 1; /*0x4e081e*/
    }
  }
  return 0; /*0x4e0820*/
}
// 0x4E09E0

// 0x4E0AB0

// 0x4E0AF0

// 0x4E0CA0
// 0x4E0D80

// 0x4E0E20
}

// 0x4E8340
int VectorClass_Building::Count(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x4e09e0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x4e09f5*/
  else
    return 0; /*0x4e09e7*/
}
// 0x4E8350

// 0x4E8380

// 0x4E83A0
int VectorClass_ptr_SuperClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e8356*/
  this->m_10 = 0; /*0x4e8359*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e8360*/
  {
    RA2_OPDEL(v2); /*0x4e8366*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e836e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e8371*/
  this->m_8 = 0; /*0x4e8374*/
}
// 0x4E83B0

// 0x4E83E0

// 0x4E8400
int VectorClass_ptr_AITriggerTypeClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e83b6*/
  this->m_10 = 0; /*0x4e83b9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e83c0*/
  {
    RA2_OPDEL(v2); /*0x4e83c6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e83ce*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e83d1*/
  this->m_8 = 0; /*0x4e83d4*/
}
// 0x4E8410

// 0x4E8440

// 0x4E8460
int VectorClass_ptr_BuildingLightClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e8416*/
  this->m_10 = 0; /*0x4e8419*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e8420*/
  {
    RA2_OPDEL(v2); /*0x4e8426*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e842e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e8431*/
  this->m_8 = 0; /*0x4e8434*/
}
// 0x4E84D0

// 0x4E8500

// 0x4E8520
int VectorClass_ptr_TeamClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e84d6*/
  this->m_10 = 0; /*0x4e84d9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e84e0*/
  {
    RA2_OPDEL(v2); /*0x4e84e6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e84ee*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e84f1*/
  this->m_8 = 0; /*0x4e84f4*/
}
// 0x4E8530
int VectorClass_ptr_ThemeControl::Clear(int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x4e853a*/
}
// 0x4E8540
void VectorClass_ptr_AITriggerTypeClass::Destroy_0()
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e8546*/
  this->m_10 = 0; /*0x4e8549*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e8550*/
  {
    RA2_OPDEL(v2); /*0x4e8556*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e855e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e8561*/
  this->m_8 = 0; /*0x4e8564*/
}
// 0x4E8570
unsigned int VectorClass_ptr_AITriggerTypeClass::GetItemIndex_0(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x4e8570*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4e8585*/
  else
    return 0; /*0x4e8577*/
}
// 0x4E8590
int VectorClass_ptr_TriggerClass::Get(int a2, void *a2_2)
{
  return *(_DWORD *)(*(_DWORD *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e859a*/
}
// 0x4E85A0
void VectorClass_ptr_AITriggerTypeClass::Destroy_1()
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e85a6*/
  this->m_10 = 0; /*0x4e85a9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e85b0*/
  {
    RA2_OPDEL(v2); /*0x4e85b6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e85be*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e85c1*/
  this->m_8 = 0; /*0x4e85c4*/
}
// 0x4E85D0
unsigned int VectorClass_ptr_AITriggerTypeClass::GetItemIndex_1(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x4e85d0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4e85e5*/
  else
    return 0; /*0x4e85d7*/
}
// 0x4E85F0
int VectorClass_ptr_TriggerTypeClass::Get(int a2, void *a2_2)
{
  return *(_DWORD *)(*(_DWORD *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e85fa*/
}
// 0x4E8600

// 0x4E8630

// 0x4E8650
int VectorClass_ptr_TubeClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e8606*/
  this->m_10 = 0; /*0x4e8609*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e8610*/
  {
    RA2_OPDEL(v2); /*0x4e8616*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e861e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e8621*/
  this->m_8 = 0; /*0x4e8624*/
}
// 0x4E8660

// 0x4E8690

// 0x4E86B0
int VectorClass_ptr_ParticleSystemClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e8666*/
  this->m_10 = 0; /*0x4e8669*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e8670*/
  {
    RA2_OPDEL(v2); /*0x4e8676*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e867e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e8681*/
  this->m_8 = 0; /*0x4e8684*/
}
// 0x4E86C0
void VectorClass_ptr_TubeClass::Destroy_0()
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e86c6*/
  this->m_10 = 0; /*0x4e86c9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e86d0*/
  {
    RA2_OPDEL(v2); /*0x4e86d6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e86de*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e86e1*/
  this->m_8 = 0; /*0x4e86e4*/
}
// 0x4E86F0
unsigned int VectorClass_ptr_TubeClass::GetItemIndex_0(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x4e86f0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4e8705*/
  else
    return 0; /*0x4e86f7*/
}
// 0x4E8710
int VectorClass_ptr_WaveClass::Get(int a2, void *a2_2)
{
  return *(_DWORD *)(*(_DWORD *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e871a*/
}
// 0x4E8720
void VectorClass_ptr_TubeClass::Destroy_1()
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e8726*/
  this->m_10 = 0; /*0x4e8729*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e8730*/
  {
    RA2_OPDEL(v2); /*0x4e8736*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e873e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e8741*/
  this->m_8 = 0; /*0x4e8744*/
}
// 0x4E8750
unsigned int VectorClass_ptr_TubeClass::GetItemIndex_1(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x4e8750*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4e8765*/
  else
    return 0; /*0x4e8757*/
}
// 0x4E8770
int VectorClass_ptr_OverlayClass::Get(int a2, void *a2_2)
{
  return *(_DWORD *)(*(_DWORD *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e877a*/
}
// 0x4E8890
int VectorClass_ptr_AircraftClass::Get(int a2, void *a2_2)
{
  return *(_DWORD *)(*(_DWORD *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e889a*/
}
// 0x4E88A0

// 0x4E88D0

// 0x4E88F0
int VectorClass_ptr_UnitClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e88a6*/
  this->m_10 = 0; /*0x4e88a9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e88b0*/
  {
    RA2_OPDEL(v2); /*0x4e88b6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e88be*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e88c1*/
  this->m_8 = 0; /*0x4e88c4*/
}
// 0x4E8900

// 0x4E8930

// 0x4E8950
int VectorClass_ptr_HouseClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e8906*/
  this->m_10 = 0; /*0x4e8909*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e8910*/
  {
    RA2_OPDEL(v2); /*0x4e8916*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e891e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e8921*/
  this->m_8 = 0; /*0x4e8924*/
}
// 0x4E8960

// 0x4E8990

// 0x4E89B0
int VectorClass_ptr_AnimClass::Clear(int a2)
{
  void *v2; // eax

  v2 = *(void **)&a2->m_1[3]; /*0x4e8966*/
  a2->m_10 = 0; /*0x4e8969*/
  if ( v2 && IDA_BYTE1(a2->m_C) ) /*0x4e8970*/
  {
    RA2_OPDEL(v2); /*0x4e8976*/
    *(_DWORD *)&a2->m_1[3] = 0; /*0x4e897e*/
  }
  IDA_BYTE1(a2->m_C) = 0; /*0x4e8981*/
  a2->m_8 = 0; /*0x4e8984*/
}
// 0x4E89C0

// 0x4E89F0

// 0x4E8A10
int VectorClass_ptr_FactoryClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e89c6*/
  this->m_10 = 0; /*0x4e89c9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e89d0*/
  {
    RA2_OPDEL(v2); /*0x4e89d6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e89de*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e89e1*/
  this->m_8 = 0; /*0x4e89e4*/
}
// 0x4E8A20

// 0x4E8A50

// 0x4E8A70
int VectorClass_ptr_CampaignClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e8a26*/
  this->m_10 = 0; /*0x4e8a29*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e8a30*/
  {
    RA2_OPDEL(v2); /*0x4e8a36*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e8a3e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e8a41*/
  this->m_8 = 0; /*0x4e8a44*/
}
// 0x4E8A80

// 0x4E8AB0

// 0x4E8AD0
int VectorClass_ptr_SideClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e8a86*/
  this->m_10 = 0; /*0x4e8a89*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e8a90*/
  {
    RA2_OPDEL(v2); /*0x4e8a96*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e8a9e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e8aa1*/
  this->m_8 = 0; /*0x4e8aa4*/
}
// 0x4E8AE0

// 0x4E8B10

// 0x4E8B30
int VectorClass_ptr_HouseTypeClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e8ae6*/
  this->m_10 = 0; /*0x4e8ae9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e8af0*/
  {
    RA2_OPDEL(v2); /*0x4e8af6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e8afe*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e8b01*/
  this->m_8 = 0; /*0x4e8b04*/
}
// 0x4E8B40

// 0x4E8B70

// 0x4E8B90
int VectorClass_ptr_TaskForceClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e8b46*/
  this->m_10 = 0; /*0x4e8b49*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e8b50*/
  {
    RA2_OPDEL(v2); /*0x4e8b56*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e8b5e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e8b61*/
  this->m_8 = 0; /*0x4e8b64*/
}
// 0x4E8BA0

// 0x4E8BD0

// 0x4E8BF0
int VectorClass_ptr_TeamTypeClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e8ba6*/
  this->m_10 = 0; /*0x4e8ba9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e8bb0*/
  {
    RA2_OPDEL(v2); /*0x4e8bb6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e8bbe*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e8bc1*/
  this->m_8 = 0; /*0x4e8bc4*/
}
// 0x4E8C00

// 0x4E8C30

// 0x4E8C50
int VectorClass_ptr_ScriptTypeClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e8c06*/
  this->m_10 = 0; /*0x4e8c09*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e8c10*/
  {
    RA2_OPDEL(v2); /*0x4e8c16*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e8c1e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e8c21*/
  this->m_8 = 0; /*0x4e8c24*/
}
// 0x4E8C60

// 0x4E8C90

// 0x4E8CB0
int VectorClass_ptr_OverlayTypeClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e8c66*/
  this->m_10 = 0; /*0x4e8c69*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e8c70*/
  {
    RA2_OPDEL(v2); /*0x4e8c76*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e8c7e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e8c81*/
  this->m_8 = 0; /*0x4e8c84*/
}
// 0x4E8CC0

// 0x4E8CF0

// 0x4E8D10
int VectorClass_ptr_SmudgeTypeClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e8cc6*/
  this->m_10 = 0; /*0x4e8cc9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e8cd0*/
  {
    RA2_OPDEL(v2); /*0x4e8cd6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e8cde*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e8ce1*/
  this->m_8 = 0; /*0x4e8ce4*/
}
// 0x4E8D20

// 0x4E8D50

// 0x4E8D70
int VectorClass_ptr_TerrainTypeClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e8d26*/
  this->m_10 = 0; /*0x4e8d29*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e8d30*/
  {
    RA2_OPDEL(v2); /*0x4e8d36*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e8d3e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e8d41*/
  this->m_8 = 0; /*0x4e8d44*/
}
// 0x4E8D80

// 0x4E8DB0

// 0x4E8DD0
int VectorClass_ptr_BuildingTypeClass::SaveToINI(int a2)
{
  void *v2; // eax

  v2 = *(void **)&a2->m_1[3]; /*0x4e8d86*/
  a2->m_10 = 0; /*0x4e8d89*/
  if ( v2 && IDA_BYTE1(a2->m_C) ) /*0x4e8d90*/
  {
    RA2_OPDEL(v2); /*0x4e8d96*/
    *(_DWORD *)&a2->m_1[3] = 0; /*0x4e8d9e*/
  }
  IDA_BYTE1(a2->m_C) = 0; /*0x4e8da1*/
  a2->m_8 = 0; /*0x4e8da4*/
}
// 0x4E8DE0

// 0x4E8E10

// 0x4E8E30
int VectorClass_ptr_AircraftTypeClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e8de6*/
  this->m_10 = 0; /*0x4e8de9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e8df0*/
  {
    RA2_OPDEL(v2); /*0x4e8df6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e8dfe*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e8e01*/
  this->m_8 = 0; /*0x4e8e04*/
}
// 0x4E8E40

// 0x4E8E70

// 0x4E8E90
int VectorClass_ptr_UnitTypeClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e8e46*/
  this->m_10 = 0; /*0x4e8e49*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e8e50*/
  {
    RA2_OPDEL(v2); /*0x4e8e56*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e8e5e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e8e61*/
  this->m_8 = 0; /*0x4e8e64*/
}
// 0x4E8EA0

// 0x4E8ED0

// 0x4E8EF0
int VectorClass_ptr_AnimTypeClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e8ea6*/
  this->m_10 = 0; /*0x4e8ea9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e8eb0*/
  {
    RA2_OPDEL(v2); /*0x4e8eb6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e8ebe*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e8ec1*/
  this->m_8 = 0; /*0x4e8ec4*/
}
// 0x4E8F00

// 0x4E8F30

// 0x4E8F50
int VectorClass_ptr_InfantryTypeClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e8f06*/
  this->m_10 = 0; /*0x4e8f09*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e8f10*/
  {
    RA2_OPDEL(v2); /*0x4e8f16*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e8f1e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e8f21*/
  this->m_8 = 0; /*0x4e8f24*/
}
// 0x4E8F60

// 0x4E8F90

// 0x4E8FB0
int VectorClass_ptr_BulletTypeClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e8f66*/
  this->m_10 = 0; /*0x4e8f69*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e8f70*/
  {
    RA2_OPDEL(v2); /*0x4e8f76*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e8f7e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e8f81*/
  this->m_8 = 0; /*0x4e8f84*/
}
// 0x4E8FC0

// 0x4E8FF0

// 0x4E9010
int VectorClass_ptr_VoxelAnimTypeClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e8fc6*/
  this->m_10 = 0; /*0x4e8fc9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e8fd0*/
  {
    RA2_OPDEL(v2); /*0x4e8fd6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e8fde*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e8fe1*/
  this->m_8 = 0; /*0x4e8fe4*/
}
// 0x4E9020

// 0x4E9050

// 0x4E9070
int VectorClass_ptr_IsometricTileTypeClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e9026*/
  this->m_10 = 0; /*0x4e9029*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e9030*/
  {
    RA2_OPDEL(v2); /*0x4e9036*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e903e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e9041*/
  this->m_8 = 0; /*0x4e9044*/
}
// 0x4E9080

// 0x4E90B0

// 0x4E90D0
int VectorClass_ptr_ParticleTypeClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e9086*/
  this->m_10 = 0; /*0x4e9089*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e9090*/
  {
    RA2_OPDEL(v2); /*0x4e9096*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e909e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e90a1*/
  this->m_8 = 0; /*0x4e90a4*/
}
// 0x4E90E0

// 0x4E9110

// 0x4E9130
int VectorClass_ptr_ParticleSystemTypeClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e90e6*/
  this->m_10 = 0; /*0x4e90e9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e90f0*/
  {
    RA2_OPDEL(v2); /*0x4e90f6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e90fe*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e9101*/
  this->m_8 = 0; /*0x4e9104*/
}
// 0x4E9140

// 0x4E9170

// 0x4E9190
int VectorClass_ptr_SuperWeaponTypeClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e9146*/
  this->m_10 = 0; /*0x4e9149*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e9150*/
  {
    RA2_OPDEL(v2); /*0x4e9156*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e915e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e9161*/
  this->m_8 = 0; /*0x4e9164*/
}
// 0x4E91A0

// 0x4E91D0

// 0x4E91F0
int VectorClass_ptr_AbstractTypeClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e91a6*/
  this->m_10 = 0; /*0x4e91a9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x4e91b0*/
  {
    RA2_OPDEL(v2); /*0x4e91b6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4e91be*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4e91c1*/
  this->m_8 = 0; /*0x4e91c4*/
}
// 0x4E9460

// 0x4E94A0

// 0x4E9550
void VectorClass_Building::Set(void *a1_1, void *a2_1, void *a3_1)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x4e9462*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x4e946d*/
  {
    v3 = 0; /*0x4e946f*/
    if ( m_8 <= 0 ) /*0x4e9473*/
      return 1; /*0x4e9493*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x4e9475*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4e947b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4e9484*/
    {
      ++v3; /*0x4e9486*/
      ++v4; /*0x4e9487*/
      if ( v3 >= m_8 ) /*0x4e948c*/
        return 1; /*0x4e948c*/
    }
  }
  return 0; /*0x4e948e*/
}
// 0x4E9580

// 0x4E95C0

// 0x4E96C0

// 0x4E9700

// 0x4E97B0

// 0x4E97E0

// 0x4E9820

// 0x4E98F0

// 0x4E9920

// 0x4E9960

// 0x4E9A10

// 0x4E9A40

// 0x4E9A80

// 0x4E9AA0

// 0x4E9B50

// 0x4E9B80

// 0x4E9BC0

// 0x4E9C70

// 0x4E9CA0

// 0x4E9CE0

// 0x4E9D00

// 0x4E9DB0

// 0x4EA040

// 0x4EA080

// 0x4EA130

// 0x4EA160

// 0x4EA1A0

// 0x4EA1C0

// 0x4EA270

// 0x4EA2A0

// 0x4EA2E0

// 0x4EA390
void VectorClass_ptr_ThemeControl::ddtor(void *a1_1)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !IDA_LOBYTE(this->m_C) ) /*0x4e9580*/
    return 0; /*0x4e9588*/
  m_8 = this->m_8; /*0x4e958e*/
  result = 0; /*0x4e9591*/
  if ( m_8 <= 0 ) /*0x4e9595*/
    return -1; /*0x4e95ac*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a1_1; ++i ) /*0x4e959b*/
  {
    if ( ++result >= m_8 ) /*0x4e95aa*/
      return -1; /*0x4e95aa*/
  }
  return result; /*0x4e958a*/
}
// 0x4EA3C0

// 0x4EA400

// 0x4EA420

// 0x4EA460

// 0x4EA510

// 0x4EA540

// 0x4EA580

// 0x4EA5A0

// 0x4EA650

// 0x4EA680

// 0x4EA6C0

// 0x4EA770

// 0x4EA7A0

// 0x4EA7E0

// 0x4EA800
char VectorClass_ptr_AITriggerTypeClass::SetCapacity_1(int a2, unsigned int * a3)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !IDA_LOBYTE(a3->m_C) ) /*0x4ea3c0*/
    return 0; /*0x4ea3c8*/
  m_8 = a3->m_8; /*0x4ea3ce*/
  result = 0; /*0x4ea3d1*/
  if ( m_8 <= 0 ) /*0x4ea3d5*/
    return -1; /*0x4ea3ec*/
  for ( i = *(_DWORD **)&a3->m_1[3]; *i != *a3; ++i ) /*0x4ea3db*/
  {
    if ( ++result >= m_8 ) /*0x4ea3ea*/
      return -1; /*0x4ea3ea*/
  }
  return result; /*0x4ea3ca*/
}
// 0x4EA8B0
int VectorClass_ptr_AITriggerTypeClass::FindItemIndex_1(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x4ea8b0*/
  result = 0; /*0x4ea8b3*/
  if ( m_10 <= 0 ) /*0x4ea8b8*/
    return -1; /*0x4ea8cf*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4ea8be*/
  {
    if ( ++result >= m_10 ) /*0x4ea8cd*/
      return -1; /*0x4ea8cd*/
  }
  return result; /*0x4ea8d2*/
}
// 0x4EA8E0

// 0x4EA920

// 0x4EA9D0

// 0x4EAA00

// 0x4EAA40

// 0x4EAA60

// 0x4EAB10

// 0x4EAB40

// 0x4EAB80

// 0x4EAC30

// 0x4EAC60

// 0x4EACA0

// 0x4EACC0

// 0x4EAD70

// 0x4EADA0

// 0x4EADE0

// 0x4EAE90

// 0x4EAEC0

// 0x4EAF00

// 0x4EAF20
char VectorClass_ptr_TubeClass::SetCapacity_0(int a2, unsigned int * a3)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = a3->m_8; /*0x4ea8e2*/
  if ( m_8 == a3->vtable3 ) /*0x4ea8ed*/
  {
    v3 = 0; /*0x4ea8ef*/
    if ( m_8 <= 0 ) /*0x4ea8f3*/
      return 1; /*0x4ea913*/
    v4 = *(_DWORD **)&a3->m_1[3]; /*0x4ea8f5*/
    v5 = a3->vtable2 - (_DWORD)v4; /*0x4ea8fb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4ea904*/
    {
      ++v3; /*0x4ea906*/
      ++v4; /*0x4ea907*/
      if ( v3 >= m_8 ) /*0x4ea90c*/
        return 1; /*0x4ea90c*/
    }
  }
  return 0; /*0x4ea90e*/
}
// 0x4EAFD0
int VectorClass_ptr_TubeClass::FindItemIndex_0(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x4eafd0*/
  result = 0; /*0x4eafd3*/
  if ( m_10 <= 0 ) /*0x4eafd8*/
    return -1; /*0x4eafef*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4eafde*/
  {
    if ( ++result >= m_10 ) /*0x4eafed*/
      return -1; /*0x4eafed*/
  }
  return result; /*0x4eaff2*/
}
// 0x4EB000

// 0x4EB040

// 0x4EB0F0

// 0x4EB120

// 0x4EB160

// 0x4EB180
char VectorClass_ptr_TubeClass::SetCapacity_1(int a2, unsigned int * a3)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = a3->m_8; /*0x4eb002*/
  if ( m_8 == a3->vtable3 ) /*0x4eb00d*/
  {
    v3 = 0; /*0x4eb00f*/
    if ( m_8 <= 0 ) /*0x4eb013*/
      return 1; /*0x4eb033*/
    v4 = *(_DWORD **)&a3->m_1[3]; /*0x4eb015*/
    v5 = a3->vtable2 - (_DWORD)v4; /*0x4eb01b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4eb024*/
    {
      ++v3; /*0x4eb026*/
      ++v4; /*0x4eb027*/
      if ( v3 >= m_8 ) /*0x4eb02c*/
        return 1; /*0x4eb02c*/
    }
  }
  return 0; /*0x4eb02e*/
}
// 0x4EB230
int VectorClass_ptr_TubeClass::FindItemIndex_1(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x4eb230*/
  result = 0; /*0x4eb233*/
  if ( m_10 <= 0 ) /*0x4eb238*/
    return -1; /*0x4eb24f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4eb23e*/
  {
    if ( ++result >= m_10 ) /*0x4eb24d*/
      return -1; /*0x4eb24d*/
  }
  return result; /*0x4eb252*/
}
// 0x4EB720

// 0x4EB760

// 0x4EB810

// 0x4EB840

// 0x4EB880

// 0x4EB980

// 0x4EB9C0

// 0x4EBA70

// 0x4EBAA0

// 0x4EBAE0

// 0x4EBB00

// 0x4EBBB0

// 0x4EBBE0

// 0x4EBC20

// 0x4EBCD0

// 0x4EBD00

// 0x4EBD40

// 0x4EBD60

// 0x4EBE10

// 0x4EBE40

// 0x4EBE80

// 0x4EBF30

// 0x4EBF60

// 0x4EBFA0
unsigned int VectorClass_flat::GetIndex(int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x4eb722*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x4eb72d*/
  {
    v3 = 0; /*0x4eb72f*/
    if ( m_8 <= 0 ) /*0x4eb733*/
      return 1; /*0x4eb753*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x4eb735*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4eb73b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4eb744*/
    {
      ++v3; /*0x4eb746*/
      ++v4; /*0x4eb747*/
      if ( v3 >= m_8 ) /*0x4eb74c*/
        return 1; /*0x4eb74c*/
    }
  }
  return 0; /*0x4eb74e*/
}
// 0x4EBFC0

// 0x4EC070

// 0x4EC0A0

// 0x4EC0E0

// 0x4EC190

// 0x4EC1C0

// 0x4EC200

// 0x4EC220

// 0x4EC2D0

// 0x4EC300

// 0x4EC340

// 0x4EC3F0

// 0x4EC420

// 0x4EC460

// 0x4EC480

// 0x4EC530

// 0x4EC560

// 0x4EC5A0

// 0x4EC650

// 0x4EC680

// 0x4EC6C0

// 0x4EC6E0

// 0x4EC790

// 0x4EC7C0

// 0x4EC800

// 0x4EC8B0

// 0x4EC8E0

// 0x4EC920

// 0x4EC940

// 0x4EC9F0

// 0x4ECA20

// 0x4ECA60

// 0x4ECB10

// 0x4ECB40

// 0x4ECB80

// 0x4ECBA0

// 0x4ECC50

// 0x4ECC80

// 0x4ECCC0

// 0x4ECD70

// 0x4ECDA0

// 0x4ECDE0

// 0x4ECE00

// 0x4ECEB0

// 0x4ECEE0

// 0x4ECF20

// 0x4ECFD0

// 0x4ED000

// 0x4ED040

// 0x4ED060

// 0x4ED110

// 0x4ED140

// 0x4ED180

// 0x4ED230

// 0x4ED260

// 0x4ED2A0

// 0x4ED2C0

// 0x4ED370

// 0x4ED3A0

// 0x4ED3E0

// 0x4ED490

// 0x4ED4C0

// 0x4ED500

// 0x4ED520

// 0x4ED5D0

// 0x4ED600

// 0x4ED640

// 0x4ED6F0

// 0x4ED720

// 0x4ED760

// 0x4ED780

// 0x4ED830

// 0x4ED860

// 0x4ED8A0

// 0x4ED950
void VectorClass_flat::Cleanup4()
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ebfcc*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x4ebfd2*/
    if ( a3 ) /*0x4ebfd8*/
      v4 = a3; /*0x4ebfee*/
    else
      v4 = (_DWORD *)RA2_OPNEW(4 * a2); /*0x4ebfea*/
    IDA_LOBYTE(this->m_C) = 1; /*0x4ebff2*/
    if ( !v4 ) /*0x4ebff6*/
      return 0; /*0x4ec06a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x4ebff8*/
    {
      m_8 = this->m_8; /*0x4ebfff*/
      if ( a2 < m_8 ) /*0x4ec004*/
        m_8 = a2; /*0x4ec006*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4ec00c*/
        ++i; /*0x4ec011*/
      if ( IDA_BYTE1(this->m_C) ) /*0x4ec01e*/
      {
        RA2_OPDEL(*(void **)&this->m_1[3]); /*0x4ec029*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x4ec031*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x4ec03a*/
    this->m_8 = a2; /*0x4ec042*/
    IDA_BYTE1(this->m_C) = a3 == 0; /*0x4ec045*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVAnimClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4ec04e*/
  }
  v7 = this->m_8; /*0x4ec051*/
  if ( v7 < this->m_10 ) /*0x4ec059*/
    this->m_10 = v7; /*0x4ec05b*/
  return 1; /*0x4ec05e*/
}
// 0x4ED980

// 0x4ED9C0
unsigned int VectorClass_ptr_BuildingTypeClass::Remove(int a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !IDA_LOBYTE(this->m_C) ) /*0x4ed980*/
    return 0; /*0x4ed988*/
  m_8 = this->m_8; /*0x4ed98e*/
  result = 0; /*0x4ed991*/
  if ( m_8 <= 0 ) /*0x4ed995*/
    return -1; /*0x4ed9ac*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4ed99b*/
  {
    if ( ++result >= m_8 ) /*0x4ed9aa*/
      return -1; /*0x4ed9aa*/
  }
  return result; /*0x4ed98a*/
}
// 0x4ED9E0

// 0x4EDA90

// 0x4EDAC0

// 0x4EDB00

// 0x4EDBB0

// 0x4EDBE0

// 0x4EDC20

// 0x4EDC40

// 0x4EDCF0

// 0x4EDD20

// 0x4EDD60

// 0x4EDE10

// 0x4EDE40

// 0x4EDE80

// 0x4EDEA0

// 0x4EDF50

// 0x4EDF80

// 0x4EDFC0

// 0x4EE070

// 0x4EE0A0

// 0x4EE0E0

// 0x4EE100

// 0x4EE1B0

// 0x4EE1E0

// 0x4EE220

// 0x4EE2D0

// 0x4EE300

// 0x4EE340

// 0x4EE360

// 0x4EE410

// 0x4EE440

// 0x4EE480

// 0x4EE530

// 0x4EE560

// 0x4EE5A0

// 0x4EE5C0

// 0x4EE670

// 0x4EE6A0

// 0x4EE6E0

// 0x4EE790

// 0x4EE7C0

// 0x4EE800

// 0x4EE820

// 0x4EE8D0

// 0x4EE900

// 0x4EE940

// 0x4EE9F0

// 0x4EEA20

// 0x4EEA60

// 0x4EEA80

// 0x4EEB30

// 0x4EEB60

// 0x4EEBA0

// 0x4EEC50

// 0x4EEC80

// 0x4EECC0

// 0x4EECE0

// 0x4EED90

// 0x4EEDC0

// 0x4EEE00

// 0x4EEEB0

// 0x4EEEE0

// 0x4EEF20

// 0x4EEF40

// 0x4EEFF0

// 0x4EF020

// 0x4EF060

// 0x4EF110

// 0x4EF140

// 0x4EF180

// 0x4EF1A0

// 0x4EF250

// 0x4EF280

// 0x4EF2C0

// 0x4EF370

// 0x4EF3A0

// 0x4EF3E0

// 0x4EF400

// 0x4EF4B0

// 0x4EF580

// 0x4EF620

// 0x4EF670
DynamicVector * VectorClass_ptr_SuperClass::Constructor_VectorClass_SuperClass___(unsigned int * Block, char a2)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( Block ) /*0x4ed9ec*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x4ed9f2*/
    if ( a2 ) /*0x4ed9f8*/
      v4 = a2; /*0x4eda0e*/
    else
      v4 = (_DWORD *)RA2_OPNEW(4 * Block); /*0x4eda0a*/
    IDA_LOBYTE(this->m_C) = 1; /*0x4eda12*/
    if ( !v4 ) /*0x4eda16*/
      return 0; /*0x4eda8a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x4eda18*/
    {
      m_8 = this->m_8; /*0x4eda1f*/
      if ( Block < m_8 ) /*0x4eda24*/
        m_8 = Block; /*0x4eda26*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4eda2c*/
        ++i; /*0x4eda31*/
      if ( IDA_BYTE1(this->m_C) ) /*0x4eda3e*/
      {
        RA2_OPDEL(*(void **)&this->m_1[3]); /*0x4eda49*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x4eda51*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x4eda5a*/
    this->m_8 = Block; /*0x4eda62*/
    IDA_BYTE1(this->m_C) = a2 == 0; /*0x4eda65*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVBuildingTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4eda6e*/
  }
  v7 = this->m_8; /*0x4eda71*/
  if ( v7 < this->m_10 ) /*0x4eda79*/
    this->m_10 = v7; /*0x4eda7b*/
  return 1; /*0x4eda7e*/
}
// 0x4EF6C0

// 0x4EF710
DynamicVector * VectorClass_ptr_AITriggerTypeClass::Constructor_VectorClass_AITriggerTypeClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4ef6c3*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_AITriggerTypeClass___vftable; /*0x4ef6c6*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4ef6d0*/
  {
    RA2_OPDEL(v3); /*0x4ef6d8*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4ef6e0*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4ef6eb*/
  Block->m_8 = 0; /*0x4ef6f1*/
  if ( (a2 & 1) != 0 ) /*0x4ef6f8*/
    RA2_OPDEL(Block); /*0x4ef6fb*/
  return Block->__pad_0; /*0x4ef705*/
}
// 0x4EF760

// 0x4EF7B0
DynamicVector * VectorClass_ptr_BuildingLightClass::Constructor_VectorClass_BuildingLightClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4ef763*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_BuildingLightClass___vftable; /*0x4ef766*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4ef770*/
  {
    RA2_OPDEL(v3); /*0x4ef778*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4ef780*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4ef78b*/
  Block->m_8 = 0; /*0x4ef791*/
  if ( (a2 & 1) != 0 ) /*0x4ef798*/
    RA2_OPDEL(Block); /*0x4ef79b*/
  return Block->__pad_0; /*0x4ef7a5*/
}
// 0x4EF8A0

// 0x4EF8F0
DynamicVector * VectorClass_ptr_TeamClass::Constructor_VectorClass_TeamClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4ef8a3*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_TeamClass___vftable; /*0x4ef8a6*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4ef8b0*/
  {
    RA2_OPDEL(v3); /*0x4ef8b8*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4ef8c0*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4ef8cb*/
  Block->m_8 = 0; /*0x4ef8d1*/
  if ( (a2 & 1) != 0 ) /*0x4ef8d8*/
    RA2_OPDEL(Block); /*0x4ef8db*/
  return Block->__pad_0; /*0x4ef8e5*/
}
// 0x4EF940

// 0x4EF990

// 0x4EF9E0
DynamicVector * VectorClass_ptr_AITriggerTypeClass::Constructor_VectorClass_TriggerClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4ef943*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_ThemeControl___vftable; /*0x4ef946*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4ef950*/
  {
    RA2_OPDEL(v3); /*0x4ef958*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4ef960*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4ef96b*/
  Block->m_8 = 0; /*0x4ef971*/
  if ( (a2 & 1) != 0 ) /*0x4ef978*/
    RA2_OPDEL(Block); /*0x4ef97b*/
  return Block->__pad_0; /*0x4ef985*/
}
// 0x4EFA30

// 0x4EFA80
DynamicVector * VectorClass_ptr_AITriggerTypeClass::Constructor_VectorClass_TriggerTypeClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4efa33*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_TriggerTypeClass___vftable; /*0x4efa36*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4efa40*/
  {
    RA2_OPDEL(v3); /*0x4efa48*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4efa50*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4efa5b*/
  Block->m_8 = 0; /*0x4efa61*/
  if ( (a2 & 1) != 0 ) /*0x4efa68*/
    RA2_OPDEL(Block); /*0x4efa6b*/
  return Block->__pad_0; /*0x4efa75*/
}
// 0x4EFAD0

// 0x4EFB20
DynamicVector * VectorClass_ptr_TubeClass::Constructor_VectorClass_TubeClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4efad3*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_TubeClass___vftable; /*0x4efad6*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4efae0*/
  {
    RA2_OPDEL(v3); /*0x4efae8*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4efaf0*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4efafb*/
  Block->m_8 = 0; /*0x4efb01*/
  if ( (a2 & 1) != 0 ) /*0x4efb08*/
    RA2_OPDEL(Block); /*0x4efb0b*/
  return Block->__pad_0; /*0x4efb15*/
}
// 0x4EFB70

// 0x4EFBC0
DynamicVector * VectorClass_ptr_BuildingLightClass::Constructor_VectorClass_ParticleSystemClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4efb73*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_ParticleSystemClass___vftable; /*0x4efb76*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4efb80*/
  {
    RA2_OPDEL(v3); /*0x4efb88*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4efb90*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4efb9b*/
  Block->m_8 = 0; /*0x4efba1*/
  if ( (a2 & 1) != 0 ) /*0x4efba8*/
    RA2_OPDEL(Block); /*0x4efbab*/
  return Block->__pad_0; /*0x4efbb5*/
}
// 0x4EFC10

// 0x4EFC60
DynamicVector * VectorClass_ptr_TubeClass::Constructor_VectorClass_WaveClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4efc13*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_WaveClass___vftable; /*0x4efc16*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4efc20*/
  {
    RA2_OPDEL(v3); /*0x4efc28*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4efc30*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4efc3b*/
  Block->m_8 = 0; /*0x4efc41*/
  if ( (a2 & 1) != 0 ) /*0x4efc48*/
    RA2_OPDEL(Block); /*0x4efc4b*/
  return Block->__pad_0; /*0x4efc55*/
}
// 0x4EFCB0

// 0x4EFD00
DynamicVector * VectorClass_ptr_TubeClass::Constructor_VectorClass_OverlayClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4efcb3*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_OverlayClass___vftable; /*0x4efcb6*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4efcc0*/
  {
    RA2_OPDEL(v3); /*0x4efcc8*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4efcd0*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4efcdb*/
  Block->m_8 = 0; /*0x4efce1*/
  if ( (a2 & 1) != 0 ) /*0x4efce8*/
    RA2_OPDEL(Block); /*0x4efceb*/
  return Block->__pad_0; /*0x4efcf5*/
}
// 0x4EFE90

// 0x4EFF30

// 0x4EFF80
DynamicVector * VectorClass_ptr_UnitClass::Constructor_VectorClass_UnitClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4efe93*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_AircraftClass___vftable; /*0x4efe96*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4efea0*/
  {
    RA2_OPDEL(v3); /*0x4efea8*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4efeb0*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4efebb*/
  Block->m_8 = 0; /*0x4efec1*/
  if ( (a2 & 1) != 0 ) /*0x4efec8*/
    RA2_OPDEL(Block); /*0x4efecb*/
  return Block->__pad_0; /*0x4efed5*/
}
// 0x4EFFD0

// 0x4F0020
DynamicVector * VectorClass_ptr_UnitClass::Constructor_VectorClass_HouseClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4effd3*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_HouseClass___vftable; /*0x4effd6*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4effe0*/
  {
    RA2_OPDEL(v3); /*0x4effe8*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4efff0*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4efffb*/
  Block->m_8 = 0; /*0x4f0001*/
  if ( (a2 & 1) != 0 ) /*0x4f0008*/
    RA2_OPDEL(Block); /*0x4f000b*/
  return Block->__pad_0; /*0x4f0015*/
}
// 0x4F0070

// 0x4F00C0
DynamicVector * VectorClass_ptr_TeamClass::Constructor_VectorClass_AnimClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4f0073*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_AnimClass___vftable; /*0x4f0076*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4f0080*/
  {
    RA2_OPDEL(v3); /*0x4f0088*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4f0090*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4f009b*/
  Block->m_8 = 0; /*0x4f00a1*/
  if ( (a2 & 1) != 0 ) /*0x4f00a8*/
    RA2_OPDEL(Block); /*0x4f00ab*/
  return Block->__pad_0; /*0x4f00b5*/
}
// 0x4F0110

// 0x4F0160
DynamicVector * VectorClass_ptr_TeamClass::Constructor_VectorClass_FactoryClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4f0113*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_FactoryClass___vftable; /*0x4f0116*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4f0120*/
  {
    RA2_OPDEL(v3); /*0x4f0128*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4f0130*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4f013b*/
  Block->m_8 = 0; /*0x4f0141*/
  if ( (a2 & 1) != 0 ) /*0x4f0148*/
    RA2_OPDEL(Block); /*0x4f014b*/
  return Block->__pad_0; /*0x4f0155*/
}
// 0x4F01B0

// 0x4F0200
DynamicVector * VectorClass_ptr_CampaignClass::Constructor_VectorClass_CampaignClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4f01b3*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_CampaignClass___vftable; /*0x4f01b6*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4f01c0*/
  {
    RA2_OPDEL(v3); /*0x4f01c8*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4f01d0*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4f01db*/
  Block->m_8 = 0; /*0x4f01e1*/
  if ( (a2 & 1) != 0 ) /*0x4f01e8*/
    RA2_OPDEL(Block); /*0x4f01eb*/
  return Block->__pad_0; /*0x4f01f5*/
}
// 0x4F0250

// 0x4F02A0
DynamicVector * VectorClass_ptr_CampaignClass::Constructor_VectorClass_SideClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4f0253*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_SideClass___vftable; /*0x4f0256*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4f0260*/
  {
    RA2_OPDEL(v3); /*0x4f0268*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4f0270*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4f027b*/
  Block->m_8 = 0; /*0x4f0281*/
  if ( (a2 & 1) != 0 ) /*0x4f0288*/
    RA2_OPDEL(Block); /*0x4f028b*/
  return Block->__pad_0; /*0x4f0295*/
}
// 0x4F02F0

// 0x4F0340
DynamicVector * VectorClass_ptr_HouseTypeClass::Constructor_VectorClass_HouseTypeClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4f02f3*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_HouseTypeClass___vftable; /*0x4f02f6*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4f0300*/
  {
    RA2_OPDEL(v3); /*0x4f0308*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4f0310*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4f031b*/
  Block->m_8 = 0; /*0x4f0321*/
  if ( (a2 & 1) != 0 ) /*0x4f0328*/
    RA2_OPDEL(Block); /*0x4f032b*/
  return Block->__pad_0; /*0x4f0335*/
}
// 0x4F0390

// 0x4F03E0
DynamicVector * VectorClass_ptr_HouseTypeClass::Constructor_VectorClass_TaskForceClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4f0393*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_TaskForceClass___vftable; /*0x4f0396*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4f03a0*/
  {
    RA2_OPDEL(v3); /*0x4f03a8*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4f03b0*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4f03bb*/
  Block->m_8 = 0; /*0x4f03c1*/
  if ( (a2 & 1) != 0 ) /*0x4f03c8*/
    RA2_OPDEL(Block); /*0x4f03cb*/
  return Block->__pad_0; /*0x4f03d5*/
}
// 0x4F0430

// 0x4F0480
DynamicVector * VectorClass_ptr_HouseTypeClass::Constructor_VectorClass_TeamTypeClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4f0433*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_TeamTypeClass___vftable; /*0x4f0436*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4f0440*/
  {
    RA2_OPDEL(v3); /*0x4f0448*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4f0450*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4f045b*/
  Block->m_8 = 0; /*0x4f0461*/
  if ( (a2 & 1) != 0 ) /*0x4f0468*/
    RA2_OPDEL(Block); /*0x4f046b*/
  return Block->__pad_0; /*0x4f0475*/
}
// 0x4F04D0

// 0x4F0520
DynamicVector * VectorClass_ptr_ScriptTypeClass::Constructor_VectorClass_ScriptTypeClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4f04d3*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_ScriptTypeClass___vftable; /*0x4f04d6*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4f04e0*/
  {
    RA2_OPDEL(v3); /*0x4f04e8*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4f04f0*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4f04fb*/
  Block->m_8 = 0; /*0x4f0501*/
  if ( (a2 & 1) != 0 ) /*0x4f0508*/
    RA2_OPDEL(Block); /*0x4f050b*/
  return Block->__pad_0; /*0x4f0515*/
}
// 0x4F0570

// 0x4F05C0
DynamicVector * VectorClass_ptr_ScriptTypeClass::Constructor_VectorClass_OverlayTypeClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4f0573*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_OverlayTypeClass___vftable; /*0x4f0576*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4f0580*/
  {
    RA2_OPDEL(v3); /*0x4f0588*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4f0590*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4f059b*/
  Block->m_8 = 0; /*0x4f05a1*/
  if ( (a2 & 1) != 0 ) /*0x4f05a8*/
    RA2_OPDEL(Block); /*0x4f05ab*/
  return Block->__pad_0; /*0x4f05b5*/
}
// 0x4F0610

// 0x4F0660
DynamicVector * VectorClass_ptr_SmudgeTypeClass::Constructor_VectorClass_SmudgeTypeClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4f0613*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_SmudgeTypeClass___vftable; /*0x4f0616*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4f0620*/
  {
    RA2_OPDEL(v3); /*0x4f0628*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4f0630*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4f063b*/
  Block->m_8 = 0; /*0x4f0641*/
  if ( (a2 & 1) != 0 ) /*0x4f0648*/
    RA2_OPDEL(Block); /*0x4f064b*/
  return Block->__pad_0; /*0x4f0655*/
}
// 0x4F06B0

// 0x4F0700
DynamicVector * VectorClass_ptr_SmudgeTypeClass::Constructor_VectorClass_TerrainTypeClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4f06b3*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_TerrainTypeClass___vftable; /*0x4f06b6*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4f06c0*/
  {
    RA2_OPDEL(v3); /*0x4f06c8*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4f06d0*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4f06db*/
  Block->m_8 = 0; /*0x4f06e1*/
  if ( (a2 & 1) != 0 ) /*0x4f06e8*/
    RA2_OPDEL(Block); /*0x4f06eb*/
  return Block->__pad_0; /*0x4f06f5*/
}
// 0x4F0750

// 0x4F07A0
DynamicVector * VectorClass_ptr_SmudgeTypeClass::Constructor_VectorClass_BuildingTypeClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4f0753*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_BuildingTypeClass___vftable; /*0x4f0756*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4f0760*/
  {
    RA2_OPDEL(v3); /*0x4f0768*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4f0770*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4f077b*/
  Block->m_8 = 0; /*0x4f0781*/
  if ( (a2 & 1) != 0 ) /*0x4f0788*/
    RA2_OPDEL(Block); /*0x4f078b*/
  return Block->__pad_0; /*0x4f0795*/
}
// 0x4F07F0

// 0x4F0840
DynamicVector * VectorClass_ptr_AircraftTypeClass::Constructor_VectorClass_AircraftTypeClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4f07f3*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_AircraftTypeClass___vftable; /*0x4f07f6*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4f0800*/
  {
    RA2_OPDEL(v3); /*0x4f0808*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4f0810*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4f081b*/
  Block->m_8 = 0; /*0x4f0821*/
  if ( (a2 & 1) != 0 ) /*0x4f0828*/
    RA2_OPDEL(Block); /*0x4f082b*/
  return Block->__pad_0; /*0x4f0835*/
}
// 0x4F0890

// 0x4F08E0
DynamicVector * VectorClass_ptr_AircraftTypeClass::Constructor_VectorClass_UnitTypeClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4f0893*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_UnitTypeClass___vftable; /*0x4f0896*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4f08a0*/
  {
    RA2_OPDEL(v3); /*0x4f08a8*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4f08b0*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4f08bb*/
  Block->m_8 = 0; /*0x4f08c1*/
  if ( (a2 & 1) != 0 ) /*0x4f08c8*/
    RA2_OPDEL(Block); /*0x4f08cb*/
  return Block->__pad_0; /*0x4f08d5*/
}
// 0x4F0930

// 0x4F0980
DynamicVector * VectorClass_ptr_AnimTypeClass::Constructor_VectorClass_AnimTypeClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4f0933*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_AnimTypeClass___vftable; /*0x4f0936*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4f0940*/
  {
    RA2_OPDEL(v3); /*0x4f0948*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4f0950*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4f095b*/
  Block->m_8 = 0; /*0x4f0961*/
  if ( (a2 & 1) != 0 ) /*0x4f0968*/
    RA2_OPDEL(Block); /*0x4f096b*/
  return Block->__pad_0; /*0x4f0975*/
}
// 0x4F09D0

// 0x4F0A20
DynamicVector * VectorClass_ptr_AnimTypeClass::Constructor_VectorClass_InfantryTypeClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4f09d3*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_InfantryTypeClass___vftable; /*0x4f09d6*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4f09e0*/
  {
    RA2_OPDEL(v3); /*0x4f09e8*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4f09f0*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4f09fb*/
  Block->m_8 = 0; /*0x4f0a01*/
  if ( (a2 & 1) != 0 ) /*0x4f0a08*/
    RA2_OPDEL(Block); /*0x4f0a0b*/
  return Block->__pad_0; /*0x4f0a15*/
}
// 0x4F0A70

// 0x4F0AC0
DynamicVector * VectorClass_ptr_AnimTypeClass::Constructor_VectorClass_BulletTypeClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4f0a73*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_BulletTypeClass___vftable; /*0x4f0a76*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4f0a80*/
  {
    RA2_OPDEL(v3); /*0x4f0a88*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4f0a90*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4f0a9b*/
  Block->m_8 = 0; /*0x4f0aa1*/
  if ( (a2 & 1) != 0 ) /*0x4f0aa8*/
    RA2_OPDEL(Block); /*0x4f0aab*/
  return Block->__pad_0; /*0x4f0ab5*/
}
// 0x4F0B10

// 0x4F0B60
DynamicVector * VectorClass_ptr_VoxelAnimTypeClass::Constructor_VectorClass_VoxelAnimTypeClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4f0b13*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_VoxelAnimTypeClass___vftable; /*0x4f0b16*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4f0b20*/
  {
    RA2_OPDEL(v3); /*0x4f0b28*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4f0b30*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4f0b3b*/
  Block->m_8 = 0; /*0x4f0b41*/
  if ( (a2 & 1) != 0 ) /*0x4f0b48*/
    RA2_OPDEL(Block); /*0x4f0b4b*/
  return Block->__pad_0; /*0x4f0b55*/
}
// 0x4F0BB0

// 0x4F0C00
DynamicVector * VectorClass_ptr_VoxelAnimTypeClass::Constructor_VectorClass_IsometricTileTypeClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4f0bb3*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_IsometricTileTypeClass___vftable; /*0x4f0bb6*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4f0bc0*/
  {
    RA2_OPDEL(v3); /*0x4f0bc8*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4f0bd0*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4f0bdb*/
  Block->m_8 = 0; /*0x4f0be1*/
  if ( (a2 & 1) != 0 ) /*0x4f0be8*/
    RA2_OPDEL(Block); /*0x4f0beb*/
  return Block->__pad_0; /*0x4f0bf5*/
}
// 0x4F0C50

// 0x4F0CA0
DynamicVector * VectorClass_ptr_ParticleTypeClass::Constructor_VectorClass_ParticleTypeClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4f0c53*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_ParticleTypeClass___vftable; /*0x4f0c56*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4f0c60*/
  {
    RA2_OPDEL(v3); /*0x4f0c68*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4f0c70*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4f0c7b*/
  Block->m_8 = 0; /*0x4f0c81*/
  if ( (a2 & 1) != 0 ) /*0x4f0c88*/
    RA2_OPDEL(Block); /*0x4f0c8b*/
  return Block->__pad_0; /*0x4f0c95*/
}
// 0x4F0CF0

// 0x4F0D40
DynamicVector * VectorClass_ptr_ParticleTypeClass::Constructor_VectorClass_ParticleSystemTypeClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4f0cf3*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_ParticleSystemTypeClass___vftable; /*0x4f0cf6*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4f0d00*/
  {
    RA2_OPDEL(v3); /*0x4f0d08*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4f0d10*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4f0d1b*/
  Block->m_8 = 0; /*0x4f0d21*/
  if ( (a2 & 1) != 0 ) /*0x4f0d28*/
    RA2_OPDEL(Block); /*0x4f0d2b*/
  return Block->__pad_0; /*0x4f0d35*/
}
// 0x4F0D90

// 0x4F0DE0
DynamicVector * VectorClass_ptr_ParticleTypeClass::Constructor_VectorClass_SuperWeaponTypeClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4f0d93*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_SuperWeaponTypeClass___vftable; /*0x4f0d96*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4f0da0*/
  {
    RA2_OPDEL(v3); /*0x4f0da8*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4f0db0*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4f0dbb*/
  Block->m_8 = 0; /*0x4f0dc1*/
  if ( (a2 & 1) != 0 ) /*0x4f0dc8*/
    RA2_OPDEL(Block); /*0x4f0dcb*/
  return Block->__pad_0; /*0x4f0dd5*/
}
// 0x4F0E30

// 0x4F0E80
DynamicVector * VectorClass_ptr_SuperClass::Constructor_VectorClass_AbstractTypeClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4f0e33*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_AbstractTypeClass___vftable; /*0x4f0e36*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4f0e40*/
  {
    RA2_OPDEL(v3); /*0x4f0e48*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4f0e50*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4f0e5b*/
  Block->m_8 = 0; /*0x4f0e61*/
  if ( (a2 & 1) != 0 ) /*0x4f0e68*/
    RA2_OPDEL(Block); /*0x4f0e6b*/
  return Block->__pad_0; /*0x4f0e75*/
}
// 0x4F6910
bool VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItemIndex(int a1)
{
  int v2; // [esp+8h] [ebp+4h]

  return *(_DWORD *)(v2 + 21372) >= *(_DWORD *)(v2 + 21376); /*0x4f6925*/
}
// 0x4F6930

// 0x4F6950

// 0x4F6990

// 0x4F69D0

// 0x4F6A00
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem(HouseClass * a1)
{
  Class_7EA834 *v3; // [esp+0h] [ebp-4h] BYREF

  v3 = this; /*0x4f6930*/
  sub_429360((int)&punk, &unk_7E36C0, &v3); /*0x4f6940*/
  return v3; /*0x4f694a*/
}
// 0x4F6A10
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_0(HouseClass * a1)
{
  return a1->numConYards; /*0x4f6a1a*/
}
// 0x4F6E60
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_1(int a1)
{
  int v2; // [esp+4h] [ebp+4h]

  return *(_DWORD *)(v2 + 12); /*0x4f6e67*/
}
// 0x5013A0
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::ScalarDeletingDestructor(unsigned int * a1)
{
  int repairStationsCount; // ebx
  int i; // esi
  int v3; // ecx

  if ( a1->aircraftAltOwner <= 0 ) /*0x5013ad*/
    return 1; /*0x5013ec*/
  repairStationsCount = a1->repairStationsCount; /*0x5013b0*/
  for ( i = 0; i < repairStationsCount; ++i ) /*0x5013b8*/
  {
    v3 = *(_DWORD *)(a1->buildingsCount + 4 * i); /*0x5013bd*/
    if ( v3 && !*(_BYTE *)(v3 + 129) && *(int *)(v3 + 108) > 0 ) /*0x5013d3*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 416))(v3, 1); /*0x5013d9*/
  }
  return 0; /*0x5013e8*/
}
// 0x5024F0
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::StubReturnNullPointer(int a1, unsigned int * a2)
{
  VectorClass_ptr_BuildChoiceClass_int_ouseClass *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // esi

  if ( !a2 ) /*0x5024f8*/
    return -2147467261; /*0x5024fb*/
  v3 = (VectorClass_ptr_BuildChoiceClass_int_ouseClass *)RA2_OPNEW(0x24u); /*0x502506*/
  if ( !v3 ) /*0x502510*/
    return -2147024882; /*0x502510*/
  v4 = VectorClass_ptr_BuildChoiceClass_int_ouseClass::Constructor(v3, &a1->uiName[18]); /*0x50251f*/
  v5 = v4; /*0x502524*/
  if ( !v4 ) /*0x502528*/
    return -2147024882; /*0x50252b*/
  (*(void (__stdcall **)(_DWORD *))(*v4 + 4))(v4); /*0x502537*/
  *a2 = v5; /*0x50253a*/
  return 0; /*0x5024fa*/
}
// 0x502550
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::StubReturnNullPointer_0(int a1, const void * a2, unsigned int * a3)
{
  int v4; // ebp
  int v5; // ebx
  _BYTE v6[16]; // [esp+10h] [ebp-10h] BYREF

  if ( !a3 ) /*0x50255d*/
    return -2147467261; /*0x502562*/
  *a3 = 0; /*0x50256e*/
  v4 = 0; /*0x502578*/
  if ( *(int *)&a1->uiName[34] <= 0 ) /*0x502582*/
    return -2147220990; /*0x5025bc*/
  while ( 1 ) /*0x502593*/
  {
    v5 = *(_DWORD *)(*(_DWORD *)&a1->uiName[22] + 4 * v4); /*0x502593*/
    (*(void (__stdcall **)(int, _BYTE *))(*(_DWORD *)v5 + 12))(v5, v6); /*0x502599*/
    if ( !memcmp(v6, a2, 0x10u) ) /*0x5025ab*/
      break; /*0x5025ab*/
    if ( ++v4 >= *(_DWORD *)&a1->uiName[34] ) /*0x5025ba*/
      return -2147220990; /*0x5025ba*/
  }
  *a3 = v5; /*0x5025d0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v5 + 4))(v5); /*0x5025d4*/
  return 0; /*0x50255f*/
}
// 0x50E4A0

// 0x50E4D0

// 0x50E4F0
int VectorClass_BuildingType::Count(int a2)
{
  void *v2; // eax

  v2 = *(void **)&a2->m_1[3]; /*0x50e4a6*/
  a2->m_10 = 0; /*0x50e4a9*/
  if ( v2 && IDA_BYTE1(a2->m_C) ) /*0x50e4b0*/
  {
    RA2_OPDEL(v2); /*0x50e4b6*/
    *(_DWORD *)&a2->m_1[3] = 0; /*0x50e4be*/
  }
  IDA_BYTE1(a2->m_C) = 0; /*0x50e4c1*/
  a2->m_8 = 0; /*0x50e4c4*/
}
// 0x50E500

// 0x50E530

// 0x50E550
int VectorClass_UAngerStruct___16::Clear(int a2)
{
  void *v2; // eax

  v2 = *(void **)&a2->m_1[3]; /*0x50e506*/
  a2->m_10 = 0; /*0x50e509*/
  if ( v2 && IDA_BYTE1(a2->m_C) ) /*0x50e510*/
  {
    RA2_OPDEL(v2); /*0x50e516*/
    *(_DWORD *)&a2->m_1[3] = 0; /*0x50e51e*/
  }
  IDA_BYTE1(a2->m_C) = 0; /*0x50e521*/
  a2->m_8 = 0; /*0x50e524*/
}
// 0x50E560

// 0x50E590

// 0x50E5B0

// 0x50E620

// 0x50E640

// 0x50E670

// 0x50E690
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x50e566*/
  this->m_10 = 0; /*0x50e569*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x50e570*/
  {
    RA2_OPDEL(v2); /*0x50e576*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x50e57e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x50e581*/
  this->m_8 = 0; /*0x50e584*/
}
// 0x50E6A0

// 0x50E6D0

// 0x50E6F0
int VectorClass_BuildingType::GetElement(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x50e6a6*/
  this->m_10 = 0; /*0x50e6a9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x50e6b0*/
  {
    RA2_OPDEL(v2); /*0x50e6b6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x50e6be*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x50e6c1*/
  this->m_8 = 0; /*0x50e6c4*/
}
// 0x50E700

// 0x50E730

// 0x50E750
char VectorClass__N::Clear(int a2)
{
  void *v2; // eax

  v2 = *(void **)&a2->m_1[3]; /*0x50e706*/
  a2->m_10 = 0; /*0x50e709*/
  if ( v2 && IDA_BYTE1(a2->m_C) ) /*0x50e710*/
  {
    RA2_OPDEL(v2); /*0x50e716*/
    *(_DWORD *)&a2->m_1[3] = 0; /*0x50e71e*/
  }
  IDA_BYTE1(a2->m_C) = 0; /*0x50e721*/
  a2->m_8 = 0; /*0x50e724*/
}
// 0x50E760

// 0x50E7A0

// 0x50E7C0

// 0x50E7E0

// 0x50E8C0

// 0x50E910

// 0x50E950
char VectorClass_BuildingType::Set(int a2, unsigned int * a3, void *a3_2)
{
  int v2; // eax

  v2 = *(_DWORD *)&this->m_1[3]; /*0x50e766*/
  this->m_10 = 0; /*0x50e769*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x50e770*/
  {
    RA2_OPDEL((void *)(v2 - 4)); /*0x50e781*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x50e789*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x50e78c*/
  this->m_8 = 0; /*0x50e78f*/
}
// 0x50EA30

// 0x50EA70

// 0x50EB40

// 0x50EB70
char VectorClass_flat::InsertAt(IUnknown * aP1, int a3)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !IDA_LOBYTE(aP1->m_C) ) /*0x50ea30*/
    return 0; /*0x50ea38*/
  m_8 = aP1->m_8; /*0x50ea3e*/
  result = 0; /*0x50ea41*/
  if ( m_8 <= 0 ) /*0x50ea45*/
    return -1; /*0x50ea5c*/
  for ( i = *(_DWORD **)&aP1->m_1[3]; *i != *a3; ++i ) /*0x50ea4b*/
  {
    if ( ++result >= m_8 ) /*0x50ea5a*/
      return -1; /*0x50ea5a*/
  }
  return result; /*0x50ea3a*/
}
// 0x50EC20

// 0x50EC60

// 0x50ED10
void VectorClass_UAngerStruct___16::ddtor(void *a1_1)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x50ec22*/
  if ( m_8 == *(_DWORD *)(a1_1 + 8) ) /*0x50ec2d*/
  {
    v3 = 0; /*0x50ec2f*/
    if ( m_8 <= 0 ) /*0x50ec33*/
      return 1; /*0x50ec53*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x50ec35*/
    v5 = *(_DWORD *)(a1_1 + 4) - (_DWORD)v4; /*0x50ec3b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x50ec44*/
    {
      ++v3; /*0x50ec46*/
      ++v4; /*0x50ec47*/
      if ( v3 >= m_8 ) /*0x50ec4c*/
        return 1; /*0x50ec4c*/
    }
  }
  return 0; /*0x50ec4e*/
}
// 0x50ED40

// 0x50ED80

// 0x50EDA0

// 0x50EE50

// 0x50EE80

// 0x50EEE0

// 0x50EFD0

// 0x50F000

// 0x50F050

// 0x50F070

// 0x50F170

// 0x50F1B0

// 0x50F210

// 0x50F300

// 0x50F330

// 0x50F380

// 0x50F4E0

// 0x50F5D0

// 0x50F600

// 0x50F640

// 0x50F710

// 0x50F740
char VectorClass_BuildingType::CompareVectors(int a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !IDA_LOBYTE(this->m_C) ) /*0x50ed40*/
    return 0; /*0x50ed48*/
  m_8 = this->m_8; /*0x50ed4e*/
  result = 0; /*0x50ed51*/
  if ( m_8 <= 0 ) /*0x50ed55*/
    return -1; /*0x50ed6c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x50ed5b*/
  {
    if ( ++result >= m_8 ) /*0x50ed6a*/
      return -1; /*0x50ed6a*/
  }
  return result; /*0x50ed4a*/
}
// 0x50F780

// 0x50F830
void VectorClass_flat::ClearAndFree3()
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x50f78c*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x50f796*/
    if ( a3 ) /*0x50f79c*/
      v4 = a3; /*0x50f7b2*/
    else
      v4 = (_DWORD *)RA2_OPNEW(4 * a2); /*0x50f7ae*/
    IDA_LOBYTE(this->m_C) = 1; /*0x50f7b6*/
    if ( v4 ) /*0x50f7ba*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x50f7c5*/
      {
        m_8 = this->m_8; /*0x50f7cc*/
        if ( a2 < m_8 ) /*0x50f7d1*/
          m_8 = a2; /*0x50f7d3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x50f7d9*/
          ++i; /*0x50f7de*/
        if ( IDA_BYTE1(this->m_C) ) /*0x50f7eb*/
        {
          RA2_OPDEL(*(void **)&this->m_1[3]); /*0x50f7f6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x50f7fe*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x50f807*/
      this->m_8 = a2; /*0x50f80f*/
      IDA_BYTE1(this->m_C) = a3 == 0; /*0x50f812*/
      return 1; /*0x50f818*/
    }
    else
    {
      return 0; /*0x50f7bf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBVTeamTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x50f822*/
    return 1; /*0x50f828*/
  }
}
// 0x50F860

// 0x50F8A0

// 0x50F8C0

// 0x50F970

// 0x50F9A0

// 0x50F9E0

// 0x50FA90

// 0x50FAC0

// 0x50FB00


// 0x50FBD0

// 0x50FC00

// 0x50FC60

// 0x50FD70

// 0x50FDB0

// 0x50FE00

// 0x50FE20

// 0x50FFB0

// 0x50FFF0
VectorClass_flat * VectorClass_BuildingType::Get(unsigned int * Block, char a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !IDA_LOBYTE(Block->m_C) ) /*0x50f860*/
    return 0; /*0x50f868*/
  m_8 = Block->m_8; /*0x50f86e*/
  result = 0; /*0x50f871*/
  if ( m_8 <= 0 ) /*0x50f875*/
    return -1; /*0x50f88c*/
  for ( i = *(_DWORD **)&Block->m_1[3]; *i != *a2; ++i ) /*0x50f87b*/
  {
    if ( ++result >= m_8 ) /*0x50f88a*/
      return -1; /*0x50f88a*/
  }
  return result; /*0x50f86a*/
}
// 0x510040

// 0x510090

// 0x5100E0

// 0x510130

// 0x510180
DynamicVector * VectorClass_UAngerStruct::Constructor_VectorClass_AngerStruct_(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x510043*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_BuildingTypeClass_const___vftable; /*0x510046*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x510050*/
  {
    RA2_OPDEL(v3); /*0x510058*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x510060*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x51006b*/
  Block->m_8 = 0; /*0x510071*/
  if ( (a2 & 1) != 0 ) /*0x510078*/
    RA2_OPDEL(Block); /*0x51007b*/
  return Block->__pad_0; /*0x510085*/
}
// 0x5101D0

// 0x510270

// 0x5102C0
unsigned int * VectorClass_ptr_BuildChoiceClass_int_ouseClass::loc_5102C0(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x5101d3*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_ScoutStruct_vftable; /*0x5101d6*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x5101e0*/
  {
    RA2_OPDEL(v3); /*0x5101e8*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x5101f0*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x5101fb*/
  Block->m_8 = 0; /*0x510201*/
  if ( (a2 & 1) != 0 ) /*0x510208*/
    RA2_OPDEL(Block); /*0x51020b*/
  return Block->__pad_0; /*0x510215*/
}
// 0x510310
VectorClass_flat * VectorClass_BuildingType::Constructor_0(unsigned int * Block, char a2, void *a3_1)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x510313*/
  *(_DWORD *)this->__pad_0 = &(void*)(void*)&VectorClass_TeamTypeClass_const___vftable; /*0x510316*/
  if ( v3 && IDA_BYTE1(this->m_C) ) /*0x510320*/
  {
    RA2_OPDEL(v3); /*0x510328*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x510330*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x51033b*/
  this->m_8 = 0; /*0x510341*/
  if ( (a2 & 1) != 0 ) /*0x510348*/
    RA2_OPDEL(); /*0x51034b*/
  return this->__pad_0; /*0x510355*/
}
// 0x510360

// 0x5103B0
DynamicVector * VectorClass__N::Constructor_VectorClass_bool_(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x510363*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_bool_vftable; /*0x510366*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x510370*/
  {
    RA2_OPDEL(v3); /*0x510378*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x510380*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x51038b*/
  Block->m_8 = 0; /*0x510391*/
  if ( (a2 & 1) != 0 ) /*0x510398*/
    RA2_OPDEL(Block); /*0x51039b*/
  return Block->__pad_0; /*0x5103a5*/
}
// 0x510400

// 0x5104A0

// 0x510550
unsigned int * VectorClass_flat::BuildingConstructor(int a2, int a3)
{
  int v3; // eax

  v3 = *(_DWORD *)&a3->m_1[3]; /*0x510403*/
  *(_DWORD *)a3->__pad_0 = &(void*)(void*)&VectorClass_DiscreteDistributionClass_BuildingTypeClass_DistributionObject_BuildingTypeClass___vftable; /*0x510406*/
  if ( v3 && IDA_BYTE1(a3->m_C) ) /*0x510410*/
  {
    RA2_OPDEL((void *)(v3 - 4)); /*0x510423*/
    *(_DWORD *)&a3->m_1[3] = 0; /*0x51042b*/
  }
  IDA_BYTE1(a3->m_C) = 0; /*0x510436*/
  a3->m_8 = 0; /*0x51043c*/
  if ( (a3 & 1) != 0 ) /*0x510443*/
    RA2_OPDEL(a3); /*0x510446*/
  return a3->__pad_0; /*0x510450*/
}
// 0x5105A0
unsigned int * VectorClass_flat::BuildingTypeConstructor(TechnoTypeClass * aP1, TechnoTypeClass * aP2)
{
  this->Items = 0; /*0x5105ab*/
  this->Capacity = aP1; /*0x5105ae*/
  this->IsInitialized = 1; /*0x5105b1*/
  this->IsAllocated = 0; /*0x5105b5*/
  this->vfptr = &(void*)(void*)&VectorClass_BuildingTypeClass_const___vftable; /*0x5105b8*/
  if ( aP1 ) /*0x5105be*/
  {
    if ( aP2 ) /*0x5105c6*/
    {
      this->Items = (void *)aP2; /*0x5105c8*/
      return &this->vfptr; /*0x5105ce*/
    }
    this->Items = (void *)RA2_OPNEW(4 * aP1); /*0x5105dd*/
    this->IsAllocated = 1; /*0x5105e0*/
  }
  return &this->vfptr; /*0x5105cd*/
}
// 0x510A50
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_2(int a1, const void * a2, unsigned int * a3)
{
  return HouseClass::QueryInterface(a1 - 36, a2, a3);
}
// 0x510A60
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_3(int a1)
{
  return HouseClass::COMStub_Ret1_1(a1 - 36);
}
// 0x510A70
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_4(int a1)
{
  return HouseClass::COMStub_Ret1_2(a1 - 36);
}
// 0x510A80
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_5(int a1, const void * a2, unsigned int * a3)
{
  return HouseClass::QueryInterface(a1 - 40, a2, a3);
}
// 0x510A90
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_6(int a1)
{
  return HouseClass::COMStub_Ret1_1(a1 - 40);
}
// 0x510AA0
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_7(int a1)
{
  return HouseClass::COMStub_Ret1_2(a1 - 40);
}
// 0x510AB0
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_8(int a1)
{
  return VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_1(a1 - 4);
}
// 0x510AC0
BSTR VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_9(int a1)
{
  return VectorClass_ptr_BuildChoiceClass_int_ouseClass::FindItemIndex(a1 - 4);
}
// 0x510AD0
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_10(int a1, const void * a2, unsigned int * a3)
{
  return HouseClass::QueryInterface(a1 - 44, a2, a3);
}
// 0x510AE0
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_11(int a1)
{
  return HouseClass::COMStub_Ret1_1(a1 - 44);
}
// 0x510AF0
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_12(int a1)
{
  return HouseClass::COMStub_Ret1_2(a1 - 44);
}
// 0x512FA0
unsigned int * VectorClass_flat::CopyConstructor(InfantryTypeClass * aP1)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this == (VectorClass *)aP1 ) /*0x512faa*/
    return &this->vfptr; /*0x512faa*/
  (*((void (__thiscall **)(VectorClass *))this->vfptr + 3))(this); /*0x512fae*/
  v3 = aP1[2]; /*0x512fb1*/
  this->Capacity = v3; /*0x512fb6*/
  if ( !v3 ) /*0x512fb9*/
  {
    this->Items = 0; /*0x512ffa*/
    this->IsAllocated = 0; /*0x513001*/
    return &this->vfptr; /*0x513005*/
  }
  v4 = (void *)RA2_OPNEW(4 * v3); /*0x512fc3*/
  this->Items = v4; /*0x512fcb*/
  if ( !v4 ) /*0x512fd0*/
    return &this->vfptr; /*0x512fd0*/
  Capacity = this->Capacity; /*0x512fd2*/
  v6 = 0; /*0x512fd5*/
  this->IsAllocated = 1; /*0x512fd9*/
  if ( Capacity <= 0 ) /*0x512fdd*/
    return &this->vfptr; /*0x512fdd*/
  do /*0x512ff1*/
  {
    *((_DWORD *)this->Items + v6) = *(_DWORD *)(aP1[1] + 4 * v6); /*0x512fe8*/
    ++v6; /*0x512fee*/
  }
  while ( v6 < this->Capacity ); /*0x512ff1*/
  return &this->vfptr; /*0x512ff5*/
}
// 0x5132F0
char VectorClass_flat::PushBack(VectorClass_flat * aP1)
{
  int Capacity; // ecx
  int CapacityIncrement; // eax
  int Count; // eax
  int Items; // edx

  Capacity = this->vfptr.Capacity; /*0x5132f3*/
  if ( this->Count >= Capacity ) /*0x5132fb*/
  {
    if ( !this->vfptr.IsAllocated[0] && Capacity ) /*0x513306*/
      return 0; /*0x513306*/
    CapacityIncrement = this->CapacityIncrement; /*0x513308*/
    if ( CapacityIncrement <= 0 /*0x513318*/
      || !(*(unsigned __int8 (__thiscall **)(DynamicVectorClass *, int, _DWORD))(this->vfptr.vfptr + 8))(
            this,
            Capacity + CapacityIncrement,
            0) )
    {
      return 0; /*0x51331f*/
    }
  }
  Count = this->Count; /*0x513325*/
  Items = this->vfptr.Items; /*0x513328*/
  this->Count = Count + 1; /*0x51332e*/
  *(_DWORD *)(Items + 4 * Count) = *aP1; /*0x513338*/
  return 1; /*0x513321*/
}
// 0x5134D0
void VectorClass_flat::ClearAndFree4()
{
  if ( this->Items && this->IsAllocated ) /*0x5134dd*/
  {
    RA2_OPDEL(this->Items); /*0x5134e3*/
    this->Items = 0; /*0x5134eb*/
  }
  this->IsAllocated = 0; /*0x5134ee*/
  this->Capacity = 0; /*0x5134f1*/
}
// 0x525060
unsigned int *  VectorClass_flat::CopyDefault(VectorClass * aP1)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this == (VectorClass *)aP1 ) /*0x52506a*/
    return &this->vfptr; /*0x52506a*/
  (*((void (__thiscall **)(VectorClass *))this->vfptr + 3))(this); /*0x52506e*/
  v3 = aP1[2]; /*0x525071*/
  this->Capacity = v3; /*0x525076*/
  if ( !v3 ) /*0x525079*/
  {
    this->Items = 0; /*0x5250ba*/
    this->IsAllocated = 0; /*0x5250c1*/
    return &this->vfptr; /*0x5250c5*/
  }
  v4 = (void *)RA2_OPNEW(4 * v3); /*0x525083*/
  this->Items = v4; /*0x52508b*/
  if ( !v4 ) /*0x525090*/
    return &this->vfptr; /*0x525090*/
  Capacity = this->Capacity; /*0x525092*/
  v6 = 0; /*0x525095*/
  this->IsAllocated = 1; /*0x525099*/
  if ( Capacity <= 0 ) /*0x52509d*/
    return &this->vfptr; /*0x52509d*/
  do /*0x5250b1*/
  {
    *((_DWORD *)this->Items + v6) = *(_DWORD *)(aP1[1] + 4 * v6); /*0x5250a8*/
    ++v6; /*0x5250ae*/
  }
  while ( v6 < this->Capacity ); /*0x5250b1*/
  return &this->vfptr; /*0x5250b5*/
}
// 0x538510
int VectorClass_ptr_CCINIClass::Clear(int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x53851a*/
}
// 0x538520

// 0x538560

// 0x538610

// 0x538640

// 0x538680

// 0x538A90

// 0x53DA40

// 0x53DA70

// 0x53DA90
int VectorClass_ptr_IonBlastClass::Get(int a2, void *a2_2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = a2_2->m_8; /*0x538522*/
  if ( m_8 == *(_DWORD *)(a2_2 + 8) ) /*0x53852d*/
  {
    v3 = 0; /*0x53852f*/
    if ( m_8 <= 0 ) /*0x538533*/
      return 1; /*0x538553*/
    v4 = *(_DWORD **)&a2_2->m_1[3]; /*0x538535*/
    v5 = *(_DWORD *)(a2_2 + 4) - (_DWORD)v4; /*0x53853b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x538544*/
    {
      ++v3; /*0x538546*/
      ++v4; /*0x538547*/
      if ( v3 >= m_8 ) /*0x53854c*/
        return 1; /*0x53854c*/
    }
  }
  return 0; /*0x53854e*/
}
// 0x53DAA0

// 0x53DAE0

// 0x53DB90

// 0x53DBC0

// 0x53DC00

// 0x53DC20

// 0x53DCD0

// 0x53DD00

// 0x53DD50
DynamicVector * VectorClass_ptr_IonBlastClass::Constructor_VectorClass_IonBlastClass___(unsigned int * Block, char a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = Block->m_8; /*0x53daa2*/
  if ( m_8 == a2->vtable3 ) /*0x53daad*/
  {
    v3 = 0; /*0x53daaf*/
    if ( m_8 <= 0 ) /*0x53dab3*/
      return 1; /*0x53dad3*/
    v4 = *(_DWORD **)&Block->m_1[3]; /*0x53dab5*/
    v5 = a2->vtable2 - (_DWORD)v4; /*0x53dabb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x53dac4*/
    {
      ++v3; /*0x53dac6*/
      ++v4; /*0x53dac7*/
      if ( v3 >= m_8 ) /*0x53dacc*/
        return 1; /*0x53dacc*/
    }
  }
  return 0; /*0x53dace*/
}
// 0x54A1E0
int VectorClass_PAG::Count(int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x54a1ea*/
}
// 0x54A1F0

// 0x54A220

// 0x54A240
int VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x54a1f6*/
  this->m_10 = 0; /*0x54a1f9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x54a200*/
  {
    RA2_OPDEL(v2); /*0x54a206*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x54a20e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x54a211*/
  this->m_8 = 0; /*0x54a214*/
}
// 0x54A250

// 0x54A290

// 0x54A340

// 0x54A370

// 0x54A3B0

// 0x54A4B0

// 0x54A4F0

// 0x54A5A0

// 0x54A5D0

// 0x54A610
unsigned int VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::LoadTypeData(int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x54a252*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x54a25d*/
  {
    v3 = 0; /*0x54a25f*/
    if ( m_8 <= 0 ) /*0x54a263*/
      return 1; /*0x54a283*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x54a265*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x54a26b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x54a274*/
    {
      ++v3; /*0x54a276*/
      ++v4; /*0x54a277*/
      if ( v3 >= m_8 ) /*0x54a27c*/
        return 1; /*0x54a27c*/
    }
  }
  return 0; /*0x54a27e*/
}
// 0x54A630

// 0x54A6E0

// 0x54A710

// 0x54A7B0

// 0x54A800

// 0x5512D0

// 0x551300

// 0x551320
int VectorClass_ptr_LaserDrawClass::Get(int a2, void *a2_2)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x54a63c*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x54a642*/
    if ( a2_2 ) /*0x54a648*/
      v4 = a2_2; /*0x54a65e*/
    else
      v4 = (_DWORD *)RA2_OPNEW(4 * a2); /*0x54a65a*/
    IDA_LOBYTE(this->m_C) = 1; /*0x54a662*/
    if ( !v4 ) /*0x54a666*/
      return 0; /*0x54a6da*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x54a668*/
    {
      m_8 = this->m_8; /*0x54a66f*/
      if ( a2 < m_8 ) /*0x54a674*/
        m_8 = a2; /*0x54a676*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x54a67c*/
        ++i; /*0x54a681*/
      if ( IDA_BYTE1(this->m_C) ) /*0x54a68e*/
      {
        RA2_OPDEL(*(void **)&this->m_1[3]); /*0x54a699*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x54a6a1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x54a6aa*/
    this->m_8 = a2; /*0x54a6b2*/
    IDA_BYTE1(this->m_C) = a2_2 == 0; /*0x54a6b5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUTileInsertType_IsometricTileTypeClass *))(*(_DWORD *)this->__pad_0 /*0x54a6be*/
                                                                                           + 12))(this);
  }
  v7 = this->m_8; /*0x54a6c1*/
  if ( v7 < this->m_10 ) /*0x54a6c9*/
    this->m_10 = v7; /*0x54a6cb*/
  return 1; /*0x54a6ce*/
}
// 0x551330

// 0x551370

// 0x551420

// 0x551450

// 0x551490

// 0x5514B0

// 0x551560

// 0x551590

// 0x5515E0
DynamicVector * VectorClass_ptr_LaserDrawClass::Constructor_VectorClass_LaserDrawClass___(unsigned int * Block, char a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = Block->m_8; /*0x551332*/
  if ( m_8 == a2->vtable3 ) /*0x55133d*/
  {
    v3 = 0; /*0x55133f*/
    if ( m_8 <= 0 ) /*0x551343*/
      return 1; /*0x551363*/
    v4 = *(_DWORD **)&Block->m_1[3]; /*0x551345*/
    v5 = a2->vtable2 - (_DWORD)v4; /*0x55134b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x551354*/
    {
      ++v3; /*0x551356*/
      ++v4; /*0x551357*/
      if ( v3 >= m_8 ) /*0x55135c*/
        return 1; /*0x55135c*/
    }
  }
  return 0; /*0x55135e*/
}
// 0x555200

// 0x555230

// 0x555250
int VectorClass_ptr_LightSourceClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x555206*/
  this->m_10 = 0; /*0x555209*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x555210*/
  {
    RA2_OPDEL(v2); /*0x555216*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x55521e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x555221*/
  this->m_8 = 0; /*0x555224*/
}
// 0x555260

// 0x555290

// 0x5552B0
int VectorClass_ptr_PendingCellClass_LightSourceClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x555266*/
  this->m_10 = 0; /*0x555269*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x555270*/
  {
    RA2_OPDEL(v2); /*0x555276*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x55527e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x555281*/
  this->m_8 = 0; /*0x555284*/
}
// 0x5552C0

// 0x555300

// 0x5553B0

// 0x5553E0

// 0x555420

// 0x555440

// 0x5554F0

// 0x555520

// 0x555560

// 0x555610

// 0x555640

// 0x555680

// 0x5556A0

// 0x555750

// 0x555780

// 0x5557D0
DynamicVector * VectorClass_ptr_LightSourceClass::Constructor_VectorClass_LightSourceClass___(unsigned int * Block, char a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = Block->m_8; /*0x5552c2*/
  if ( m_8 == a2->vtable3 ) /*0x5552cd*/
  {
    v3 = 0; /*0x5552cf*/
    if ( m_8 <= 0 ) /*0x5552d3*/
      return 1; /*0x5552f3*/
    v4 = *(_DWORD **)&Block->m_1[3]; /*0x5552d5*/
    v5 = a2->vtable2 - (_DWORD)v4; /*0x5552db*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5552e4*/
    {
      ++v3; /*0x5552e6*/
      ++v4; /*0x5552e7*/
      if ( v3 >= m_8 ) /*0x5552ec*/
        return 1; /*0x5552ec*/
    }
  }
  return 0; /*0x5552ee*/
}
// 0x555820

// 0x555870

// 0x556F00
int VectorClass_ptr_LineTrail::Get(int a2, void *a2_2)
{
  void *v3; // eax

  v3 = *(void **)&a2_2->m_1[3]; /*0x555823*/
  *(_DWORD *)a2_2->__pad_0 = &(void*)(void*)&VectorClass_LightSourceClass_PendingCellClass___vftable; /*0x555826*/
  if ( v3 && IDA_BYTE1(a2_2->m_C) ) /*0x555830*/
  {
    RA2_OPDEL(v3); /*0x555838*/
    *(_DWORD *)&a2_2->m_1[3] = 0; /*0x555840*/
  }
  IDA_BYTE1(a2_2->m_C) = 0; /*0x55584b*/
  a2_2->m_8 = 0; /*0x555851*/
  if ( (a2_2 & 1) != 0 ) /*0x555858*/
    RA2_OPDEL(a2_2); /*0x55585b*/
  return a2_2->__pad_0; /*0x555865*/
}
// 0x556F10

// 0x556F50

// 0x557000

// 0x557030

// 0x557070

// 0x557170

// 0x558230
int VectorClass_PBG::Count(int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x556f12*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x556f1d*/
  {
    v3 = 0; /*0x556f1f*/
    if ( m_8 <= 0 ) /*0x556f23*/
      return 1; /*0x556f43*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x556f25*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x556f2b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x556f34*/
    {
      ++v3; /*0x556f36*/
      ++v4; /*0x556f37*/
      if ( v3 >= m_8 ) /*0x556f3c*/
        return 1; /*0x556f3c*/
    }
  }
  return 0; /*0x556f3e*/
}
// 0x558240

// 0x558280

// 0x558330

// 0x558360

// 0x5583A0

// 0x5584A0

// 0x55BAE0
int VectorClass_flat::RemoveItem(ObjectClass * aP1, void *a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = aP1->m_8; /*0x558242*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x55824d*/
  {
    v3 = 0; /*0x55824f*/
    if ( m_8 <= 0 ) /*0x558253*/
      return 1; /*0x558273*/
    v4 = *(_DWORD **)&aP1->m_1[3]; /*0x558255*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x55825b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x558264*/
    {
      ++v3; /*0x558266*/
      ++v4; /*0x558267*/
      if ( v3 >= m_8 ) /*0x55826c*/
        return 1; /*0x55826c*/
    }
  }
  return 0; /*0x55826e*/
}
// 0x588C90
void VectorClass_flat::CleanupSubzone()
{
  void *v2; // eax

  v2 = this->Items; /*0x588c96*/
  this->q010 = 0; /*0x588c99*/
  if ( v2 && this->IsAllocated ) /*0x588ca0*/
  {
    RA2_OPDEL(v2); /*0x588ca6*/
    this->Items = 0; /*0x588cae*/
  }
  this->IsAllocated = 0; /*0x588cb1*/
  this->q008 = 0; /*0x588cb4*/
}
// 0x588E10

// 0x588F00

// 0x588F30

// 0x588F50
int VectorClass_W4PassabilityType::Clear(int a2)
{
  int v3; // ebp
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // edx

  v3 = *(_DWORD *)&this->m_1[3] + 36 * a3; /*0x588e23*/
  *(_DWORD *)(a2 + 4) = 0; /*0x588e29*/
  *(_DWORD *)(a2 + 8) = 0; /*0x588e2c*/
  *(_BYTE *)(a2 + 12) = 1; /*0x588e2f*/
  *(_BYTE *)(a2 + 13) = 0; /*0x588e33*/
  *(_DWORD *)a2 = &(void*)(void*)&VectorClass_SubzoneConnectionStruct_vftable; /*0x588e36*/
  if ( a2 != v3 ) /*0x588e3c*/
  {
    VectorClass::Cleanup5(a2); /*0x588e40*/
    v4 = *(_DWORD *)(v3 + 8); /*0x588e46*/
    *(_DWORD *)(a2 + 8) = v4; /*0x588e4b*/
    if ( v4 ) /*0x588e4e*/
    {
      v5 = RA2_OPNEW(8 * v4); /*0x588e58*/
      if ( v5 ) /*0x588e62*/
      {
        v6 = v5; /*0x588e67*/
        if ( v4 - 1 >= 0 ) /*0x588e6b*/
        {
          v7 = v4; /*0x588e6d*/
          do /*0x588e77*/
          {
            *(_DWORD *)v6 = 0; /*0x588e6e*/
            *(_BYTE *)(v6 + 4) = 0; /*0x588e70*/
            v6 += 8; /*0x588e73*/
            --v7; /*0x588e76*/
          }
          while ( v7 ); /*0x588e77*/
        }
      }
      else
      {
        v5 = 0; /*0x588e7b*/
      }
      *(_DWORD *)(a2 + 4) = v5; /*0x588e7f*/
      if ( v5 ) /*0x588e82*/
      {
        v8 = *(_DWORD *)(a2 + 8); /*0x588e84*/
        v9 = 0; /*0x588e87*/
        *(_BYTE *)(a2 + 13) = 1; /*0x588e8b*/
        if ( v8 > 0 ) /*0x588e8f*/
        {
          do /*0x588eab*/
          {
            v10 = *(_DWORD *)(v3 + 4); /*0x588e91*/
            v11 = *(_DWORD *)(a2 + 4); /*0x588e94*/
            *(_DWORD *)(v11 + 8 * v9) = *(_DWORD *)(v10 + 8 * v9); /*0x588e9a*/
            *(_DWORD *)(v11 + 8 * v9 + 4) = *(_DWORD *)(v10 + 8 * v9 + 4); /*0x588ea1*/
            ++v9; /*0x588ea8*/
          }
          while ( v9 < *(_DWORD *)(a2 + 8) ); /*0x588eab*/
        }
      }
    }
    else
    {
      *(_DWORD *)(a2 + 4) = 0; /*0x588eaf*/
      *(_BYTE *)(a2 + 13) = 0; /*0x588eb2*/
    }
  }
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(v3 + 16); /*0x588eb9*/
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(v3 + 20); /*0x588ebf*/
  *(_DWORD *)a2 = &(void*)(void*)&DynamicVectorClass_SubzoneConnectionStruct_vftable; /*0x588ec2*/
  *(_WORD *)(a2 + 24) = *(_WORD *)(v3 + 24); /*0x588ecc*/
  *(_DWORD *)(a2 + 28) = *(_DWORD *)(v3 + 28); /*0x588ed3*/
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(v3 + 32); /*0x588ed9*/
  return a2; /*0x588eb8*/
}
// 0x588F60

// 0x588F90

// 0x588FB0

// 0x588FD0

// 0x589000

// 0x589030

// 0x5896F0

// 0x589740

// 0x589960

// 0x5899E0

// 0x589A30

// 0x589EB0

// 0x589EF0

// 0x589FA0

// 0x589FD0

// 0x58A010

// 0x58A030

// 0x58A0E0

// 0x58A110

// 0x58A150

// 0x58A230

// 0x58A260

// 0x58A2A0
char VectorClass_W4PassabilityType::SetCapacity_1(int a2, char * a3)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x588f66*/
  this->m_10 = 0; /*0x588f69*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x588f70*/
  {
    RA2_OPDEL(v2); /*0x588f76*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x588f7e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x588f81*/
  this->m_8 = 0; /*0x588f84*/
}
// 0x58A3A0

// 0x58A470

// 0x58A630

// 0x58A6E0

// 0x58A7B0

// 0x58A7E0

// 0x58A820

// 0x58A840
char * VectorClass_W4PassabilityType::Constructor_0(unsigned int * Block, char a2, void *a3_1)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x58a3a0*/
  result = 0; /*0x58a3a3*/
  if ( m_10 <= 0 ) /*0x58a3a8*/
    return -1; /*0x58a3bf*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; i += 3 ) /*0x58a3ae*/
  {
    if ( ++result >= m_10 ) /*0x58a3bd*/
      return -1; /*0x58a3bd*/
  }
  return result; /*0x58a3c2*/
}
// 0x58A8F0

// 0x58A9F0

// 0x58AA20

// 0x58AA60

// 0x58AA90

// 0x58AAE0
DynamicVector * VectorClass_W4PassabilityType::Constructor_1(unsigned int * Block, char a2)
{
  int v3; // ebp
  char *v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v13; // eax
  char *v14; // ebx
  _DWORD *v15; // edx

  v3 = Block; /*0x58a8f2*/
  if ( Block ) /*0x58a8fe*/
  {
    v5 = a2; /*0x58a904*/
    IDA_LOBYTE(this->m_C) = 0; /*0x58a908*/
    if ( a2 ) /*0x58a90d*/
    {
      if ( Block - 1 >= 0 ) /*0x58a946*/
      {
        v9 = a2 + 4; /*0x58a948*/
        v10 = Block; /*0x58a94b*/
        do /*0x58a955*/
        {
          *(_DWORD *)v9 = 0; /*0x58a94c*/
          v9[4] = 0; /*0x58a94e*/
          v9 += 12; /*0x58a951*/
          --v10; /*0x58a954*/
        }
        while ( v10 ); /*0x58a955*/
      }
    }
    else
    {
      v6 = RA2_OPNEW(12 * Block); /*0x58a917*/
      if ( v6 ) /*0x58a921*/
      {
        if ( Block - 1 >= 0 ) /*0x58a928*/
        {
          v7 = v6 + 4; /*0x58a92a*/
          v8 = Block; /*0x58a92d*/
          do /*0x58a937*/
          {
            *(_DWORD *)v7 = 0; /*0x58a92e*/
            *(_BYTE *)(v7 + 4) = 0; /*0x58a930*/
            v7 += 12; /*0x58a933*/
            --v8; /*0x58a936*/
          }
          while ( v8 ); /*0x58a937*/
        }
        v5 = (char *)v6; /*0x58a939*/
      }
      else
      {
        v5 = 0; /*0x58a93d*/
      }
    }
    IDA_LOBYTE(this->m_C) = 1; /*0x58a959*/
    if ( v5 ) /*0x58a95d*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x58a968*/
      {
        m_8 = this->m_8; /*0x58a96d*/
        if ( Block < m_8 ) /*0x58a972*/
          m_8 = Block; /*0x58a974*/
        if ( m_8 > 0 ) /*0x58a978*/
        {
          v13 = 0; /*0x58a97a*/
          do /*0x58a998*/
          {
            v14 = &v5[v13]; /*0x58a97f*/
            v15 = (_DWORD *)(v13 + *(_DWORD *)&this->m_1[3]); /*0x58a982*/
            v13 += 12; /*0x58a984*/
            --m_8; /*0x58a987*/
            *(_DWORD *)v14 = *v15; /*0x58a98a*/
            *((_DWORD *)v14 + 1) = v15[1]; /*0x58a98f*/
            *((_DWORD *)v14 + 2) = v15[2]; /*0x58a995*/
          }
          while ( m_8 ); /*0x58a998*/
          v3 = Block; /*0x58a99a*/
        }
        if ( IDA_BYTE1(this->m_C) ) /*0x58a9a0*/
        {
          RA2_OPDEL(*(void **)&this->m_1[3]); /*0x58a9a9*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x58a9b1*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v5; /*0x58a9bc*/
      this->m_8 = v3; /*0x58a9c2*/
      IDA_BYTE1(this->m_C) = a2 == 0; /*0x58a9c5*/
      return 1; /*0x58a9cb*/
    }
    else
    {
      return 0; /*0x58a962*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_U_HashObject_IUSubzoneConnectionStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x58a9d5*/
    return 1; /*0x58a9db*/
  }
}
// 0x58AB30

// 0x58AB80

// 0x58AC70
unsigned int * VectorClass_flat::ConstructSubzone(int a2, int a3)
{
  void *v3; // eax

  v3 = *(void **)&a3->m_1[3]; /*0x58ab33*/
  *(_DWORD *)a3->__pad_0 = &(void*)(void*)&VectorClass_HashObject_unsigned_int_unsigned_int_vftable; /*0x58ab36*/
  if ( v3 && IDA_BYTE1(a3->m_C) ) /*0x58ab40*/
  {
    RA2_OPDEL(v3); /*0x58ab48*/
    *(_DWORD *)&a3->m_1[3] = 0; /*0x58ab50*/
  }
  IDA_BYTE1(a3->m_C) = 0; /*0x58ab5b*/
  a3->m_8 = 0; /*0x58ab61*/
  if ( (a3 & 1) != 0 ) /*0x58ab68*/
    RA2_OPDEL(a3); /*0x58ab6b*/
  return a3->__pad_0; /*0x58ab75*/
}
// 0x58AD10

// 0x5AC3A0

// 0x5AC3D0

// 0x5AC3F0
int VectorClass_ptr_MapRegionClass::Get(int a2, void *a2_2)
{
  int v3; // edi
  char *v4; // eax
  char *v5; // ecx
  int v6; // edx
  void *Capacity; // ecx
  int v8; // eax
  int v9; // edx
  _DWORD *Items; // ecx

  if ( a2_2 == (VectorClass_USubzoneTrackingStruct *)a2_2 ) /*0x58ad1c*/
    return a2_2->__pad_0; /*0x58ad1c*/
  (*(void (__thiscall **)(VectorClass_USubzoneTrackingStruct *))(*(_DWORD *)a2_2->__pad_0 + 12))(a2_2); /*0x58ad20*/
  v3 = a2_2[2]; /*0x58ad23*/
  a2_2->Capacity = (void *)v3; /*0x58ad2a*/
  if ( !v3 ) /*0x58ad2d*/
  {
    a2_2->Items = 0; /*0x58ad95*/
    a2_2->IsAllocated = 0; /*0x58ad98*/
    return a2_2->__pad_0; /*0x58ad9b*/
  }
  v4 = (char *)RA2_OPNEW(8 * v3); /*0x58ad37*/
  if ( v4 ) /*0x58ad41*/
  {
    v5 = v4; /*0x58ad46*/
    if ( v3 - 1 >= 0 ) /*0x58ad4a*/
    {
      v6 = v3; /*0x58ad4c*/
      do /*0x58ad56*/
      {
        *(_DWORD *)v5 = 0; /*0x58ad4d*/
        v5[4] = 0; /*0x58ad4f*/
        v5 += 8; /*0x58ad52*/
        --v6; /*0x58ad55*/
      }
      while ( v6 ); /*0x58ad56*/
    }
  }
  else
  {
    v4 = 0; /*0x58ad5a*/
  }
  a2_2->Items = v4; /*0x58ad5e*/
  if ( !v4 ) /*0x58ad61*/
    return a2_2->__pad_0; /*0x58ad61*/
  Capacity = a2_2->Capacity; /*0x58ad63*/
  v8 = 0; /*0x58ad66*/
  a2_2->IsAllocated = 1; /*0x58ad6a*/
  if ( (int)Capacity <= 0 ) /*0x58ad6e*/
    return a2_2->__pad_0; /*0x58ad6e*/
  do /*0x58ad8a*/
  {
    v9 = a2_2[1]; /*0x58ad70*/
    Items = a2_2->Items; /*0x58ad73*/
    Items[2 * v8] = *(_DWORD *)(v9 + 8 * v8); /*0x58ad79*/
    Items[2 * v8 + 1] = *(_DWORD *)(v9 + 8 * v8 + 4); /*0x58ad80*/
    ++v8; /*0x58ad87*/
  }
  while ( v8 < (int)a2_2->Capacity ); /*0x58ad8a*/
  return a2_2->__pad_0; /*0x58ad8e*/
}
// 0x5AC5F0

// 0x5AC620

// 0x5AC640
double VectorClass_N::Clear(int a2)
{
  void *v2; // eax

  v2 = *(void **)&a2->m_1[3]; /*0x5ac5f6*/
  a2->m_10 = 0; /*0x5ac5f9*/
  if ( v2 && IDA_BYTE1(a2->m_C) ) /*0x5ac600*/
  {
    RA2_OPDEL(v2); /*0x5ac606*/
    *(_DWORD *)&a2->m_1[3] = 0; /*0x5ac60e*/
  }
  IDA_BYTE1(a2->m_C) = 0; /*0x5ac611*/
  a2->m_8 = 0; /*0x5ac614*/
}
// 0x5AC6A0

// 0x5AC6E0

// 0x5AC790

// 0x5AC7C0

// 0x5AC800

// 0x5AC820

// 0x5AC8D0

// 0x5AD0F0

// 0x5AD130

// 0x5AD1F0

// 0x5AD220

// 0x5AD270

// 0x5AD290

// 0x5AD350

// 0x5AD390

// 0x5AD3E0
unsigned int * VectorClass_ptr_MapRegionClass::loc_5AD3E0(unsigned int * Block, char a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = Block->m_8; /*0x5ac6a2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5ac6ad*/
  {
    v3 = 0; /*0x5ac6af*/
    if ( m_8 <= 0 ) /*0x5ac6b3*/
      return 1; /*0x5ac6d3*/
    v4 = *(_DWORD **)&Block->m_1[3]; /*0x5ac6b5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5ac6bb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5ac6c4*/
    {
      ++v3; /*0x5ac6c6*/
      ++v4; /*0x5ac6c7*/
      if ( v3 >= m_8 ) /*0x5ac6cc*/
        return 1; /*0x5ac6cc*/
    }
  }
  return 0; /*0x5ac6ce*/
}
// 0x5AD5C0

// 0x5AD610
DynamicVector * VectorClass_N::Constructor_VectorClass_double_(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x5ad5c3*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_double_vftable; /*0x5ad5c6*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x5ad5d0*/
  {
    RA2_OPDEL(v3); /*0x5ad5d8*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x5ad5e0*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x5ad5eb*/
  Block->m_8 = 0; /*0x5ad5f1*/
  if ( (a2 & 1) != 0 ) /*0x5ad5f8*/
    RA2_OPDEL(Block); /*0x5ad5fb*/
  return Block->__pad_0; /*0x5ad605*/
}
// 0x5D05F0
unsigned int * VectorClass_Point2D::Count(unsigned int * a2, int a3)
{
  int v3; // edx

  v3 = *(_DWORD *)&this->m_1[3]; /*0x5d05f0*/
  *a2 = *(_DWORD *)(v3 + 8 * a3); /*0x5d05ff*/
  a2[1] = *(_DWORD *)(v3 + 8 * a3 + 4); /*0x5d0606*/
  return a2; /*0x5d0601*/
}
// 0x5D0660
int VectorClass_ptr_MSTextEntry::Get(int a2, void *a2_2)
{
  return *(_DWORD *)(*(_DWORD *)&a2_2->m_1[3] + 4 * a2_2); /*0x5d066a*/
}
// 0x5D06C0
int VectorClass_ptr_MapSelection::Get(int a2, void *a2_2)
{
  return *(_DWORD *)(*(_DWORD *)&a2_2->m_1[3] + 4 * a2_2); /*0x5d06ca*/
}
// 0x5D07E0
int VectorClass_ptr_MSSfxEntry::Get(int a2, void *a2_2)
{
  return *(_DWORD *)(*(_DWORD *)&a2_2->m_1[3] + 4 * a2_2); /*0x5d07ea*/
}
// 0x5D07F0

// 0x5D0850

// 0x5D0920
void VectorClass_Point2D::Set(void *a1_1, void *a2_1, void *a3_1)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  m_8 = this->m_8; /*0x5d07fb*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5d0800*/
  {
    v3 = 0; /*0x5d0802*/
    if ( m_8 <= 0 ) /*0x5d0806*/
      return 1; /*0x5d0836*/
    v4 = *(_DWORD *)(a2 + 4); /*0x5d0808*/
    v5 = *(_DWORD **)&this->m_1[3]; /*0x5d080b*/
    v6 = (_DWORD *)(v4 + 4); /*0x5d080e*/
    v7 = v4 - (_DWORD)v5; /*0x5d0811*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x5d0823*/
    {
      ++v3; /*0x5d0825*/
      v6 += 2; /*0x5d0826*/
      v5 += 2; /*0x5d0829*/
      if ( v3 >= m_8 ) /*0x5d082e*/
        return 1; /*0x5d082e*/
    }
  }
  return 0; /*0x5d0830*/
}
// 0x5D0950

// 0x5D09A0

// 0x5D0AE0

// 0x5D0B20

// 0x5D0BD0

// 0x5D0C00

// 0x5D0C40

// 0x5D0D40

// 0x5D0D80

// 0x5D0E30

// 0x5D0E60

// 0x5D0EA0

// 0x5D1460

// 0x5D14A0

// 0x5D1550

// 0x5D1580

// 0x5D15C0

// 0x5D16C0

// 0x5D1760

// 0x5D1800

// 0x5D19E0

// 0x5D2720

// 0x5D2750

// 0x5D2780

// 0x5D27B0

// 0x5D27D0
int VectorClass_ptr_MSSfx::Get(int a2, void *a2_2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !IDA_LOBYTE(a2_2->m_C) ) /*0x5d0950*/
    return 0; /*0x5d095e*/
  m_8 = a2_2->m_8; /*0x5d0964*/
  result = 0; /*0x5d0967*/
  if ( m_8 <= 0 ) /*0x5d096b*/
    return -1; /*0x5d098c*/
  for ( i = *(_DWORD **)&a2_2->m_1[3]; *i != *a2_2 || i[1] != a2_2[1]; i += 2 ) /*0x5d0971*/
  {
    if ( ++result >= m_8 ) /*0x5d098a*/
      return -1; /*0x5d098a*/
  }
  return result; /*0x5d095b*/
}
// 0x5D27E0

// 0x5D2820

// 0x5D28D0

// 0x5D2960

// 0x5D2A10

// 0x5D2A40

// 0x5D2A80

// 0x5D2B30

// 0x5D2B60

// 0x5D2BA0

// 0x5D2BC0

// 0x5D2C70

// 0x5D2CF0
DynamicVector * VectorClass_ptr_MSSfx::Constructor_VectorClass_MSAnim___(unsigned int * Block, char a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = Block->m_8; /*0x5d27e2*/
  if ( m_8 == a2->vtable3 ) /*0x5d27ed*/
  {
    v3 = 0; /*0x5d27ef*/
    if ( m_8 <= 0 ) /*0x5d27f3*/
      return 1; /*0x5d2813*/
    v4 = *(_DWORD **)&Block->m_1[3]; /*0x5d27f5*/
    v5 = a2->vtable2 - (_DWORD)v4; /*0x5d27fb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5d2804*/
    {
      ++v3; /*0x5d2806*/
      ++v4; /*0x5d2807*/
      if ( v3 >= m_8 ) /*0x5d280c*/
        return 1; /*0x5d280c*/
    }
  }
  return 0; /*0x5d280e*/
}
// 0x5D2D40

// 0x5D2D90
DynamicVector * VectorClass_Point2D::Constructor_VectorClass_MSSfx___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x5d2d43*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_MSSfx___vftable; /*0x5d2d46*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x5d2d50*/
  {
    RA2_OPDEL(v3); /*0x5d2d58*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x5d2d60*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x5d2d6b*/
  Block->m_8 = 0; /*0x5d2d71*/
  if ( (a2 & 1) != 0 ) /*0x5d2d78*/
    RA2_OPDEL(Block); /*0x5d2d7b*/
  return Block->__pad_0; /*0x5d2d85*/
}
// 0x5D5130

// 0x5D53B0

// 0x5D5410

// 0x5D5500

// 0x5D5530

// 0x5D5580

// 0x5D5780

// 0x5D8100
int VectorClass_ptr_MultiplayerTeam::Get(int a2, void *a2_2)
{
  int v3; // edx

  v3 = *(_DWORD *)&this->m_1[3]; /*0x5d5130*/
  *a2 = *(_DWORD *)(v3 + 8 * a2_2); /*0x5d513f*/
  a2[1] = *(_DWORD *)(v3 + 8 * a2_2 + 4); /*0x5d5146*/
  return a2; /*0x5d5141*/
}
// 0x5D82F0

// 0x5D8330

// 0x5D83E0

// 0x5D8410

// 0x5D8450

// 0x5D8640
// 0x5D8810

// 0x5EEBB0

// 0x5EEBE0

// 0x5EEC00
int VectorClass_cptr_MultiMission::Capacity(int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5d82f2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5d82fd*/
  {
    v3 = 0; /*0x5d82ff*/
    if ( m_8 <= 0 ) /*0x5d8303*/
      return 1; /*0x5d8323*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5d8305*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5d830b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5d8314*/
    {
      ++v3; /*0x5d8316*/
      ++v4; /*0x5d8317*/
      if ( v3 >= m_8 ) /*0x5d831c*/
        return 1; /*0x5d831c*/
    }
  }
  return 0; /*0x5d831e*/
}
// 0x5EEC10

// 0x5EEC50
char VectorClass_cptr_MultiMission::SetAt(int a2, unsigned int * a3)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = a3->m_8; /*0x5eec12*/
  if ( m_8 == *(_DWORD *)(a3 + 8) ) /*0x5eec1d*/
  {
    v3 = 0; /*0x5eec1f*/
    if ( m_8 <= 0 ) /*0x5eec23*/
      return 1; /*0x5eec43*/
    v4 = *(_DWORD **)&a3->m_1[3]; /*0x5eec25*/
    v5 = *(_DWORD *)(a3 + 4) - (_DWORD)v4; /*0x5eec2b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5eec34*/
    {
      ++v3; /*0x5eec36*/
      ++v4; /*0x5eec37*/
      if ( v3 >= m_8 ) /*0x5eec3c*/
        return 1; /*0x5eec3c*/
    }
  }
  return 0; /*0x5eec3e*/
}
// 0x5EED00
void VectorClass_flat::Cleanup3()
{
  if ( this->Items && this->IsAllocated ) /*0x5eed0d*/
  {
    RA2_OPDEL(this->Items); /*0x5eed13*/
    this->Items = 0; /*0x5eed1b*/
  }
  this->IsAllocated = 0; /*0x5eed1e*/
  this->Capacity = 0; /*0x5eed21*/
}
// 0x5EED30

// 0x5EED70

// 0x5EED90

// 0x5EEE90

// 0x5EEEC0
VectorClass_flat * VectorClass_cptr_MultiMission::GetAt(unsigned int * Block, char a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !IDA_LOBYTE(Block->m_C) ) /*0x5eed30*/
    return 0; /*0x5eed38*/
  m_8 = Block->m_8; /*0x5eed3e*/
  result = 0; /*0x5eed41*/
  if ( m_8 <= 0 ) /*0x5eed45*/
    return -1; /*0x5eed5c*/
  for ( i = *(_DWORD **)&Block->m_1[3]; *i != *a2; ++i ) /*0x5eed4b*/
  {
    if ( ++result >= m_8 ) /*0x5eed5a*/
      return -1; /*0x5eed5a*/
  }
  return result; /*0x5eed3a*/
}
// 0x5EEF10

// 0x5EF190
int VectorClass_cptr_MultiMission::j_vt09(unsigned char * a1, signed int a3, int a4, int a5, int a6, int a7)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5eef13*/
  *(_DWORD *)this->__pad_0 = &(void*)(void*)&VectorClass_MultiMission_const___vftable; /*0x5eef16*/
  if ( v3 && IDA_BYTE1(this->m_C) ) /*0x5eef20*/
  {
    RA2_OPDEL(v3); /*0x5eef28*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5eef30*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x5eef3b*/
  this->m_8 = 0; /*0x5eef41*/
  if ( (a2 & 1) != 0 ) /*0x5eef48*/
    RA2_OPDEL(); /*0x5eef4b*/
  return this->__pad_0; /*0x5eef55*/
}
// 0x5EF290
unsigned int * VectorClass_cptr_MultiMission::j_vt00(char a2)
{
  void *v3; // eax

  v3 = (void *)this->field_50; /*0x5ef293*/
  *(_DWORD *)this->__pad_0 = &(void*)(void*)&NullModemConnClass_vftable; /*0x5ef296*/
  RA2_OPDEL(v3); /*0x5ef29d*/
  ConnectionClass::dtor(); /*0x5ef2a7*/
  if ( (a2 & 1) != 0 ) /*0x5ef2b1*/
    RA2_OPDEL(); /*0x5ef2b4*/
  return this->__pad_0; /*0x5ef2be*/
}
// 0x5F9B00

// 0x5F9B30

// 0x5F9B50
int VectorClass_ptr_ObjectTypeClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5f9b06*/
  this->m_10 = 0; /*0x5f9b09*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x5f9b10*/
  {
    RA2_OPDEL(v2); /*0x5f9b16*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5f9b1e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x5f9b21*/
  this->m_8 = 0; /*0x5f9b24*/
}
// 0x5F9B80

// 0x5F9BC0

// 0x5F9C70

// 0x5F9CA0

// 0x5F9CE0

// 0x5F9D00

// 0x5F9DB0

// 0x5F9DE0

// 0x5F9E30
DynamicVector * VectorClass_ptr_ObjectTypeClass::Constructor_VectorClass_ObjectTypeClass___(unsigned int * Block, char a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = Block->m_8; /*0x5f9b82*/
  if ( m_8 == a2->vtable3 ) /*0x5f9b8d*/
  {
    v3 = 0; /*0x5f9b8f*/
    if ( m_8 <= 0 ) /*0x5f9b93*/
      return 1; /*0x5f9bb3*/
    v4 = *(_DWORD **)&Block->m_1[3]; /*0x5f9b95*/
    v5 = a2->vtable2 - (_DWORD)v4; /*0x5f9b9b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5f9ba4*/
    {
      ++v3; /*0x5f9ba6*/
      ++v4; /*0x5f9ba7*/
      if ( v3 >= m_8 ) /*0x5f9bac*/
        return 1; /*0x5f9bac*/
    }
  }
  return 0; /*0x5f9bae*/
}
// 0x5FFFC0
void VectorClass_flat::Destructor()
{
  void *v2; // eax

  v2 = this->Items; /*0x5fffc6*/
  this->q010 = 0; /*0x5fffc9*/
  if ( v2 && this->IsAllocated ) /*0x5fffd0*/
  {
    RA2_OPDEL(v2); /*0x5fffd6*/
    this->Items = 0; /*0x5fffde*/
  }
  this->IsAllocated = 0; /*0x5fffe1*/
  this->q008 = 0; /*0x5fffe4*/
}
// 0x5FFFF0

// 0x600010

// 0x600020

// 0x600060

// 0x600110

// 0x600140

// 0x600180

// 0x6001A0

// 0x600250

// 0x600280

// 0x6002D0
DynamicVector * VectorClass_ptr_SpotLightClass::Constructor_VectorClass_SpotLightClass___(unsigned int * Block, char a2)
{
  if ( IDA_LOBYTE(Block->m_C) ) /*0x5ffff0*/
    return (unsigned int)(a2 - *(_DWORD *)&Block->m_1[3]) >> 2; /*0x600005*/
  else
    return 0; /*0x5ffff7*/
}
// 0x627D70

// 0x627E10

// 0x627E50

// 0x627F00

// 0x627F30

// 0x627F70

// 0x6282E0

// 0x6283E0

// 0x628410

// 0x628470

// 0x6285F0

// 0x628760
VectorClass_flat * VectorClass_ptr_ColorScheme::Constructor_VectorClass_HSVClass_(unsigned int * Block, char a2)
{
  return *(_DWORD *)(*(_DWORD *)&Block->m_1[3] + 4 * a2); /*0x627d7a*/
}
// 0x628A40

// 0x628A70

// 0x628AD0

// 0x628DF0
unsigned int * VectorClass_flat::ConstructHSV(int a2, int a3)
{
  if ( *(_DWORD *)&this->m_1[3] && IDA_BYTE1(this->m_C) ) /*0x628a4d*/
  {
    RA2_OPDEL(*(void **)&this->m_1[3]); /*0x628a53*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x628a5b*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x628a5e*/
  this->m_8 = 0; /*0x628a61*/
}
// 0x628E80

// 0x62B070

// 0x62B0A0

// 0x62B0C0

// 0x62B0D0

// 0x62B110

// 0x62B1C0

// 0x62B1F0

// 0x62B230

// 0x62B250

// 0x62B300

// 0x62B330

// 0x62B380
DynamicVector * VectorClass_ptr_ParasiteClass::Constructor_VectorClass_ParasiteClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x628e83*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_HashObject_HashString_SchemeNode___vftable; /*0x628e86*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x628e90*/
  {
    RA2_OPDEL(v3); /*0x628e98*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x628ea0*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x628eab*/
  Block->m_8 = 0; /*0x628eb1*/
  if ( (a2 & 1) != 0 ) /*0x628eb8*/
    RA2_OPDEL(Block); /*0x628ebb*/
  return Block->__pad_0; /*0x628ec5*/
}
// 0x630250
char VectorClass_flat::PushBackCopy(AbstractClass * aP1)
{
  int Capacity; // ecx
  int result; // eax
  int Items; // edx

  Capacity = this->Capacity; /*0x630253*/
  result = this->Count; /*0x630256*/
  if ( result < Capacity /*0x63027d*/
    || (this->IsAllocated[0] || !Capacity)
    && (result = this->CapacityIncrement, result > 0)
    && (result = (*(int (__thiscall **)(DynamicVectorClass *, int, _DWORD))(this->vfptr + 8))(
                   this,
                   Capacity + result,
                   0),
        (_BYTE)result) )
  {
    result = this->Count; /*0x630285*/
    Items = this->Items; /*0x630288*/
    this->Count = result + 1; /*0x63028e*/
    *(_DWORD *)(Items + 4 * result) = *aP1; /*0x630298*/
    IDA_LOBYTE(result) = 1; /*0x63029b*/
  }
  else
  {
    IDA_LOBYTE(result) = 0; /*0x63027f*/
  }
  return result; /*0x630281*/
}
// 0x63DB60

// 0x63DB90

// 0x63DBB0

// 0x63DBC0

// 0x63DBF0

// 0x63DC10

// 0x63DD30

// 0x63DD40

// 0x63DD80

// 0x63DE30

// 0x63DE60

// 0x63DEA0

// 0x63DF20

// 0x63E020

// 0x63E050

// 0x63E140
void VectorClass_flat::Cleanup2()
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x63db66*/
  this->m_10 = 0; /*0x63db69*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x63db70*/
  {
    RA2_OPDEL(v2); /*0x63db76*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63db7e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x63db81*/
  this->m_8 = 0; /*0x63db84*/
}
// 0x63E170

// 0x63E1B0

// 0x63E230

// 0x63E2E0

// 0x63E540
char VectorClass_flat::Append(VectorClass_flat * aP1, void *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !IDA_LOBYTE(aP1->m_C) ) /*0x63e170*/
    return 0; /*0x63e178*/
  m_8 = aP1->m_8; /*0x63e17e*/
  result = 0; /*0x63e181*/
  if ( m_8 <= 0 ) /*0x63e185*/
    return -1; /*0x63e19c*/
  for ( i = *(_DWORD **)&aP1->m_1[3]; *i != *a2; ++i ) /*0x63e18b*/
  {
    if ( ++result >= m_8 ) /*0x63e19a*/
      return -1; /*0x63e19a*/
  }
  return result; /*0x63e17a*/
}
// 0x63E900
char VectorClass_flat::EraseAt(IUnknown * aP1)
{
  int result; // eax
  int Count; // ecx
  int v5; // ecx

  result = (*(int (__thiscall **)(DynamicVectorClass *, int))(this->vfptr + 16))(this, aP1); /*0x63e90c*/
  if ( result == -1 || (Count = this->Count, result >= Count) ) /*0x63e919*/
  {
    IDA_LOBYTE(result) = 0; /*0x63e93b*/
  }
  else
  {
    v5 = Count - 1; /*0x63e91b*/
    for ( this->Count = v5; /*0x63e921*/
          result < this->Count;
          *(_DWORD *)(this->Items + 4 * result - 4) = *(_DWORD *)(this->Items + 4 * result) )
    {
      ++result; /*0x63e926*/
    }
    IDA_LOBYTE(result) = 1; /*0x63e935*/
  }
  return result; /*0x63e937*/
}
// 0x63E950

// 0x63E990

// 0x63EA40

// 0x63EA70

// 0x63EAB0

// 0x63EC50

// 0x63ECA0
DynamicVector * VectorClass_ptr_PlanningMemberClass::Constructor_VectorClass_PlanningMemberClass___(unsigned int * Block, char a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = Block->m_8; /*0x63e952*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x63e95d*/
  {
    v3 = 0; /*0x63e95f*/
    if ( m_8 <= 0 ) /*0x63e963*/
      return 1; /*0x63e983*/
    v4 = *(_DWORD **)&Block->m_1[3]; /*0x63e965*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x63e96b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x63e974*/
    {
      ++v3; /*0x63e976*/
      ++v4; /*0x63e977*/
      if ( v3 >= m_8 ) /*0x63e97c*/
        return 1; /*0x63e97c*/
    }
  }
  return 0; /*0x63e97e*/
}
// 0x63ECF0

// 0x63ED40
DynamicVector * VectorClass_ptr_PlanningMemberClass::Constructor_VectorClass_PlanningBranchClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x63ecf3*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_PlanningBranchClass___vftable; /*0x63ecf6*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x63ed00*/
  {
    RA2_OPDEL(v3); /*0x63ed08*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x63ed10*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x63ed1b*/
  Block->m_8 = 0; /*0x63ed21*/
  if ( (a2 & 1) != 0 ) /*0x63ed28*/
    RA2_OPDEL(Block); /*0x63ed2b*/
  return Block->__pad_0; /*0x63ed35*/
}
// 0x63EED0

// 0x658D60
unsigned int * VectorClass_flat::PointConstructor(MapClass * aP1, MapClass * aP2)
{
  void *v3; // eax

  v3 = *(void **)&aP1->m_1[3]; /*0x63eed3*/
  *(_DWORD *)aP1->__pad_0 = &(void*)(void*)&VectorClass_PlanningTokenClass___vftable; /*0x63eed6*/
  if ( v3 && IDA_BYTE1(aP1->m_C) ) /*0x63eee0*/
  {
    RA2_OPDEL(v3); /*0x63eee8*/
    *(_DWORD *)&aP1->m_1[3] = 0; /*0x63eef0*/
  }
  IDA_BYTE1(aP1->m_C) = 0; /*0x63eefb*/
  aP1->m_8 = 0; /*0x63ef01*/
  if ( (aP2 & 1) != 0 ) /*0x63ef08*/
    RA2_OPDEL(aP1); /*0x63ef0b*/
  return aP1->__pad_0; /*0x63ef15*/
}
// 0x65A1E0

// 0x65A210

// 0x65A230

// 0x65A240

// 0x65A280

// 0x65A330

// 0x65A360

// 0x65A3A0

// 0x65A3C0

// 0x65A470

// 0x65A4A0

// 0x65A4F0
DynamicVector * VectorClass_ptr_RadBeam::Constructor_VectorClass_RadBeam___(unsigned int * Block, char a2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x65a1e6*/
  this->m_10 = 0; /*0x65a1e9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x65a1f0*/
  {
    RA2_OPDEL(v2); /*0x65a1f6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x65a1fe*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x65a201*/
  this->m_8 = 0; /*0x65a204*/
}
// 0x65BEF0

// 0x65BF20

// 0x65BF40

// 0x65BF50

// 0x65BF90

// 0x65C040

// 0x65C070

// 0x65C0B0

// 0x65C0D0

// 0x65C180

// 0x65C1B0

// 0x65C200
DynamicVector * VectorClass_ptr_RadSiteClass::Constructor_VectorClass_RadSiteClass___(unsigned int * Block, char a2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x65bef6*/
  this->m_10 = 0; /*0x65bef9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x65bf00*/
  {
    RA2_OPDEL(v2); /*0x65bf06*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x65bf0e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x65bf11*/
  this->m_8 = 0; /*0x65bf14*/
}
// 0x660C80

// 0x660CB0

// 0x660CD0

// 0x660CE0

// 0x660D20

// 0x660DD0

// 0x660E00

// 0x660E40

// 0x660E60

// 0x660F50

// 0x660F80

// 0x660FD0
unsigned int * VectorClass_ptr_RadarEventClass::loc_660FD0(unsigned int * Block, char a2)
{
  void *Items; // eax

  Items = this->Items; /*0x660c86*/
  this->Count = 0; /*0x660c89*/
  if ( Items && this->IsAllocated ) /*0x660c90*/
  {
    RA2_OPDEL(Items); /*0x660c96*/
    this->Items = 0; /*0x660c9e*/
  }
  this->IsAllocated = 0; /*0x660ca1*/
  this->Capacity = 0; /*0x660ca4*/
}
// 0x679F70
void VectorClass_flat::Dtor()
{
  void *Items; // eax

  Items = this->Items; /*0x679f76*/
  this->vfptr = &(void*)(void*)&VectorClass_int_vftable; /*0x679f79*/
  if ( Items && this->IsAllocated ) /*0x679f83*/
  {
    RA2_OPDEL(Items); /*0x679f89*/
    this->Items = 0; /*0x679f91*/
  }
  this->IsAllocated = 0; /*0x679f94*/
  this->Capacity = 0; /*0x679f97*/
}
// 0x67A630
int  VectorClass_flat::LoadStream(TechnoTypeClass * aP1)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int Count; // [esp+20h] [ebp-4h] BYREF

  v3 = *aP1; /*0x67a63c*/
  Count = this->Count; /*0x67a649*/
  aP1->IsClean(&Count, 4, 0); /*0x67a64d*/
  result = Count; /*0x67a650*/
  for ( i = 0; i < Count; ++i ) /*0x67a658*/
  {
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*aP1 + 16))(aP1, this->Items + 4 * i, 4, 0); /*0x67a668*/
    result = Count; /*0x67a66b*/
  }
  return result; /*0x67a674*/
}
// 0x67A850
int VectorClass_flat::SaveLoad(TechnoTypeClass * aP1)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int Count; // [esp+20h] [ebp-4h] BYREF

  v3 = *aP1; /*0x67a85c*/
  Count = this->Count; /*0x67a869*/
  aP1->IsClean(&Count, 4, 0); /*0x67a86d*/
  result = Count; /*0x67a870*/
  for ( i = 0; i < Count; ++i ) /*0x67a878*/
  {
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*aP1 + 16))(aP1, this->Items + 4 * i, 4, 0); /*0x67a888*/
    result = Count; /*0x67a88b*/
  }
  return result; /*0x67a894*/
}
// 0x67AA80
unsigned int * VectorClass_flat::CopyAssign(VectorClass_flat * aP1)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this == (VectorClass *)aP1 ) /*0x67aa8a*/
    return &this->vfptr; /*0x67aa8a*/
  (*((void (__thiscall **)(VectorClass *))this->vfptr + 3))(this); /*0x67aa8e*/
  v3 = aP1[2]; /*0x67aa91*/
  this->Capacity = v3; /*0x67aa96*/
  if ( !v3 ) /*0x67aa99*/
  {
    this->Items = 0; /*0x67aada*/
    this->IsAllocated = 0; /*0x67aae1*/
    return &this->vfptr; /*0x67aae5*/
  }
  v4 = (void *)RA2_OPNEW(4 * v3); /*0x67aaa3*/
  this->Items = v4; /*0x67aaab*/
  if ( !v4 ) /*0x67aab0*/
    return &this->vfptr; /*0x67aab0*/
  Capacity = this->Capacity; /*0x67aab2*/
  v6 = 0; /*0x67aab5*/
  this->IsAllocated = 1; /*0x67aab9*/
  if ( Capacity <= 0 ) /*0x67aabd*/
    return &this->vfptr; /*0x67aabd*/
  do /*0x67aad1*/
  {
    *((_DWORD *)this->Items + v6) = *(_DWORD *)(aP1[1] + 4 * v6); /*0x67aac8*/
    ++v6; /*0x67aace*/
  }
  while ( v6 < this->Capacity ); /*0x67aad1*/
  return &this->vfptr; /*0x67aad5*/
}
// 0x67AE00
unsigned int * VectorClass_flat::CopySmudge(CCINIClass * aP1)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this == (VectorClass *)aP1 ) /*0x67ae0a*/
    return &this->vfptr; /*0x67ae0a*/
  (*((void (__thiscall **)(VectorClass *))this->vfptr + 3))(this); /*0x67ae0e*/
  v3 = aP1[2]; /*0x67ae11*/
  this->Capacity = v3; /*0x67ae16*/
  if ( !v3 ) /*0x67ae19*/
  {
    this->Items = 0; /*0x67ae5a*/
    this->IsAllocated = 0; /*0x67ae61*/
    return &this->vfptr; /*0x67ae65*/
  }
  v4 = (void *)RA2_OPNEW(4 * v3); /*0x67ae23*/
  this->Items = v4; /*0x67ae2b*/
  if ( !v4 ) /*0x67ae30*/
    return &this->vfptr; /*0x67ae30*/
  Capacity = this->Capacity; /*0x67ae32*/
  v6 = 0; /*0x67ae35*/
  this->IsAllocated = 1; /*0x67ae39*/
  if ( Capacity <= 0 ) /*0x67ae3d*/
    return &this->vfptr; /*0x67ae3d*/
  do /*0x67ae51*/
  {
    *((_DWORD *)this->Items + v6) = *(_DWORD *)(aP1[1] + 4 * v6); /*0x67ae48*/
    ++v6; /*0x67ae4e*/
  }
  while ( v6 < this->Capacity ); /*0x67ae51*/
  return &this->vfptr; /*0x67ae55*/
}
// 0x67AF60
void VectorClass_flat::ClearAndFree()
{
  if ( this->Items && this->IsAllocated ) /*0x67af6d*/
  {
    RA2_OPDEL(this->Items); /*0x67af73*/
    this->Items = 0; /*0x67af7b*/
  }
  this->IsAllocated = 0; /*0x67af7e*/
  this->Capacity = 0; /*0x67af81*/
}
// 0x67B180
unsigned int *  VectorClass_flat::CopyBuilding(VectorClass * aP1)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this == (VectorClass *)aP1 ) /*0x67b18a*/
    return &this->vfptr; /*0x67b18a*/
  (*((void (__thiscall **)(VectorClass *))this->vfptr + 3))(this); /*0x67b18e*/
  v3 = aP1[2]; /*0x67b191*/
  this->Capacity = v3; /*0x67b196*/
  if ( !v3 ) /*0x67b199*/
  {
    this->Items = 0; /*0x67b1da*/
    this->IsAllocated = 0; /*0x67b1e1*/
    return &this->vfptr; /*0x67b1e5*/
  }
  v4 = (void *)RA2_OPNEW(4 * v3); /*0x67b1a3*/
  this->Items = v4; /*0x67b1ab*/
  if ( !v4 ) /*0x67b1b0*/
    return &this->vfptr; /*0x67b1b0*/
  Capacity = this->Capacity; /*0x67b1b2*/
  v6 = 0; /*0x67b1b5*/
  this->IsAllocated = 1; /*0x67b1b9*/
  if ( Capacity <= 0 ) /*0x67b1bd*/
    return &this->vfptr; /*0x67b1bd*/
  do /*0x67b1d1*/
  {
    *((_DWORD *)this->Items + v6) = *(_DWORD *)(aP1[1] + 4 * v6); /*0x67b1c8*/
    ++v6; /*0x67b1ce*/
  }
  while ( v6 < this->Capacity ); /*0x67b1d1*/
  return &this->vfptr; /*0x67b1d5*/
}
// 0x691160
char VectorClass_flat::PushBack2(unsigned int * a2)
{
  int Capacity; // ecx
  int CapacityIncrement; // eax
  int Count; // eax
  int Items; // edx

  Capacity = this->Capacity; /*0x691163*/
  if ( this->Count >= Capacity ) /*0x69116b*/
  {
    if ( !this->IsAllocated[0] && Capacity ) /*0x691176*/
      return 0; /*0x691176*/
    CapacityIncrement = this->CapacityIncrement; /*0x691178*/
    if ( CapacityIncrement <= 0 /*0x691188*/
      || !(*(unsigned __int8 (__thiscall **)(DynamicVectorClass *, int, _DWORD))(this->vfptr + 8))(
            this,
            Capacity + CapacityIncrement,
            0) )
    {
      return 0; /*0x69118f*/
    }
  }
  Count = this->Count; /*0x691195*/
  Items = this->Items; /*0x691198*/
  this->Count = Count + 1; /*0x69119e*/
  *(_DWORD *)(Items + 4 * Count) = *a2; /*0x6911a8*/
  return 1; /*0x691191*/
}
// 0x69C580
char **  VectorClass_Wstring::Clear(char ** a2, int a3)
{
  String::AssignFromPtr((String *)a2, (const char **)(*(_DWORD *)&this->m_1[3] + 4 * a3)); /*0x69c592*/
  return a2; /*0x69c599*/
}
// 0x69C5A0

// 0x69C5D0

// 0x69C5F0

// 0x69C600

// 0x69C630

// 0x69C650

// 0x69C660

// 0x69C690

// 0x69C6B0

// 0x69C970

// 0x69C9C0

// 0x69CB00

// 0x69CB50
int VectorClass_Wstring::GetSize(const char ** a2)
{
  void *v2; // eax

  v2 = *(void **)&a2->m_1[3]; /*0x69c5a6*/
  a2->m_10 = 0; /*0x69c5a9*/
  if ( v2 && IDA_BYTE1(a2->m_C) ) /*0x69c5b0*/
  {
    RA2_OPDEL(v2); /*0x69c5b6*/
    *(_DWORD *)&a2->m_1[3] = 0; /*0x69c5be*/
  }
  IDA_BYTE1(a2->m_C) = 0; /*0x69c5c1*/
  a2->m_8 = 0; /*0x69c5c4*/
}
// 0x69CBA0

// 0x69CD40

// 0x69CD80

// 0x69CE30

// 0x69CE60

// 0x69CEA0

// 0x69CEC0

// 0x69CF70

// 0x69CFA0

// 0x69CFE0

// 0x69D090

// 0x69D0C0

// 0x69D100

// 0x69D120

// 0x69D1D0

// 0x69D200

// 0x69D240

// 0x69D2F0

// 0x69D320

// 0x69D360

// 0x69D380

// 0x69D430

// 0x69D4B0

// 0x69D590

// 0x69D5E0
DynamicVector * VectorClass_ptr_GlobalPacketType::Constructor_VectorClass_MultiMission___(unsigned int * Block, char a2)
{
  if ( IDA_LOBYTE(Block->m_C) ) /*0x69cba0*/
    return (unsigned int)(a2 - *(_DWORD *)&Block->m_1[3]) >> 2; /*0x69cbb5*/
  else
    return 0; /*0x69cba7*/
}
// 0x69D630

// 0x69D680
DynamicVector * VectorClass_ptr_GlobalPacketType::Constructor_VectorClass_GlobalPacketType___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x69d633*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_GlobalPacketType___vftable; /*0x69d636*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x69d640*/
  {
    RA2_OPDEL(v3); /*0x69d648*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x69d650*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x69d65b*/
  Block->m_8 = 0; /*0x69d661*/
  if ( (a2 & 1) != 0 ) /*0x69d668*/
    RA2_OPDEL(Block); /*0x69d66b*/
  return Block->__pad_0; /*0x69d675*/
}
// 0x69D6D0

// 0x69D720
unsigned int * VectorClass_ptr_GlobalPacketType::loc_69D720(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x69d6d3*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_PhoneEntryClass___vftable; /*0x69d6d6*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x69d6e0*/
  {
    RA2_OPDEL(v3); /*0x69d6e8*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x69d6f0*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x69d6fb*/
  Block->m_8 = 0; /*0x69d701*/
  if ( (a2 & 1) != 0 ) /*0x69d708*/
    RA2_OPDEL(Block); /*0x69d70b*/
  return Block->__pad_0; /*0x69d715*/
}
// 0x69D7C0
unsigned int * VectorClass_flat::WstringConstructor(int a2, unsigned int * a3)
{
  int v3; // esi
  _DWORD *v5; // ebp
  int *v7; // eax
  void *v8; // ebx
  _DWORD *v9; // ebp

  v3 = a2; /*0x69d7c3*/
  this->Items = 0; /*0x69d7cc*/
  this->Capacity = a2; /*0x69d7d3*/
  this->IsInitialized = 1; /*0x69d7d6*/
  this->IsAllocated = 0; /*0x69d7da*/
  this->vfptr = &(void*)(void*)&VectorClass_Wstring_vftable; /*0x69d7de*/
  if ( !a2 ) /*0x69d7e4*/
    return &this->vfptr; /*0x69d7e4*/
  if ( !a3 ) /*0x69d7ec*/
  {
    v7 = (int *)RA2_OPNEW(4 * a2 + 4); /*0x69d820*/
    if ( v7 ) /*0x69d82a*/
    {
      *v7 = a2; /*0x69d82c*/
      v8 = v7 + 1; /*0x69d82e*/
      v9 = v7 + 1; /*0x69d834*/
      if ( a2 - 1 >= 0 ) /*0x69d838*/
      {
        do /*0x69d848*/
        {
          unknown_libname_73(v9++); /*0x69d83f*/
          --v3; /*0x69d847*/
        }
        while ( v3 ); /*0x69d848*/
        this->Items = v8; /*0x69d84a*/
        this->IsAllocated = 1; /*0x69d84d*/
        return &this->vfptr; /*0x69d857*/
      }
    }
    else
    {
      v8 = 0; /*0x69d85a*/
    }
    this->Items = v8; /*0x69d85c*/
    this->IsAllocated = 1; /*0x69d85f*/
    return &this->vfptr; /*0x69d863*/
  }
  *a3 = a2; /*0x69d7ee*/
  v5 = a3 + 1; /*0x69d7f6*/
  if ( a2 - 1 >= 0 ) /*0x69d7fa*/
  {
    do /*0x69d80a*/
    {
      unknown_libname_73(v5++); /*0x69d801*/
      --v3; /*0x69d809*/
    }
    while ( v3 ); /*0x69d80a*/
  }
  this->Items = a3 + 1; /*0x69d80c*/
  return &this->vfptr; /*0x69d811*/
}
// 0x69E9B0
int VectorClass_flat::Check(Pipe * aP1, int aP2, void *a3)
{
  SHA1::Process((SHA1 *)((char *)aP1 + 12), aP2, a3); /*0x69e9c2*/
  return Delegate::Dispatch((Pipe *)aP1, aP2, a3); /*0x69e9d0*/
}
// 0x6B1410

// 0x6B1440

// 0x6B1460
int VectorClass_ptr_SlaveManagerClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x6b1416*/
  this->m_10 = 0; /*0x6b1419*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x6b1420*/
  {
    RA2_OPDEL(v2); /*0x6b1426*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b142e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x6b1431*/
  this->m_8 = 0; /*0x6b1434*/
}
// 0x6B16D0

// 0x6B1710

// 0x6B17C0

// 0x6B17F0

// 0x6B1830

// 0x6B1850

// 0x6B1900

// 0x6B19D0

// 0x6B1A20
DynamicVector * VectorClass_ptr_SlaveManagerClass::Constructor_VectorClass_SlaveManagerClass___(unsigned int * Block, char a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = Block->m_8; /*0x6b16d2*/
  if ( m_8 == a2->vtable3 ) /*0x6b16dd*/
  {
    v3 = 0; /*0x6b16df*/
    if ( m_8 <= 0 ) /*0x6b16e3*/
      return 1; /*0x6b1703*/
    v4 = *(_DWORD **)&Block->m_1[3]; /*0x6b16e5*/
    v5 = a2->vtable2 - (_DWORD)v4; /*0x6b16eb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6b16f4*/
    {
      ++v3; /*0x6b16f6*/
      ++v4; /*0x6b16f7*/
      if ( v3 >= m_8 ) /*0x6b16fc*/
        return 1; /*0x6b16fc*/
    }
  }
  return 0; /*0x6b16fe*/
}
// 0x6B43B0

// 0x6B43E0

// 0x6B4410

// 0x6B4440

// 0x6B45A0

// 0x6B45D0

// 0x6B4620

// 0x6B4760

// 0x6B47A0

// 0x6B47F0
DynamicVector * VectorClass_UUndoInfoStruct::Constructor_VectorClass_UndoInfoStruct_(unsigned int * Block, char a2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x6b43b6*/
  this->m_10 = 0; /*0x6b43b9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x6b43c0*/
  {
    RA2_OPDEL(v2); /*0x6b43c6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b43ce*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x6b43d1*/
  this->m_8 = 0; /*0x6b43d4*/
}
// 0x6B81C0

// 0x6B81F0

// 0x6B8210
int VectorClass_ptr_SpawnManagerClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x6b81c6*/
  this->m_10 = 0; /*0x6b81c9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x6b81d0*/
  {
    RA2_OPDEL(v2); /*0x6b81d6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b81de*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x6b81e1*/
  this->m_8 = 0; /*0x6b81e4*/
}
// 0x6B84E0

// 0x6B8520

// 0x6B85D0

// 0x6B8600

// 0x6B8640

// 0x6B8660

// 0x6B8710

// 0x6B87E0

// 0x6B8830
DynamicVector * VectorClass_ptr_SpawnManagerClass::Constructor_VectorClass_SpawnManagerClass___(unsigned int * Block, char a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = Block->m_8; /*0x6b84e2*/
  if ( m_8 == a2->vtable3 ) /*0x6b84ed*/
  {
    v3 = 0; /*0x6b84ef*/
    if ( m_8 <= 0 ) /*0x6b84f3*/
      return 1; /*0x6b8513*/
    v4 = *(_DWORD **)&Block->m_1[3]; /*0x6b84f5*/
    v5 = a2->vtable2 - (_DWORD)v4; /*0x6b84fb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6b8504*/
    {
      ++v3; /*0x6b8506*/
      ++v4; /*0x6b8507*/
      if ( v3 >= m_8 ) /*0x6b850c*/
        return 1; /*0x6b850c*/
    }
  }
  return 0; /*0x6b850e*/
}
// 0x6BED50

// 0x6BED80

// 0x6BEDA0
int VectorClass_K::Clear(int a2)
{
  void *v2; // eax

  v2 = *(void **)&a2->m_1[3]; /*0x6bed56*/
  a2->m_10 = 0; /*0x6bed59*/
  if ( v2 && IDA_BYTE1(a2->m_C) ) /*0x6bed60*/
  {
    RA2_OPDEL(v2); /*0x6bed66*/
    *(_DWORD *)&a2->m_1[3] = 0; /*0x6bed6e*/
  }
  IDA_BYTE1(a2->m_C) = 0; /*0x6bed71*/
  a2->m_8 = 0; /*0x6bed74*/
}
// 0x6BEE50
int VectorClass_K_8::QueryInterface(int a1, const void * a2, unsigned int * a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bee57*/
    return -2147467261; /*0x6bee59*/
  *v4 = 0; /*0x6bee76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bee92*/
    *v4 = a2; /*0x6bee96*/
  if ( !*v4 ) /*0x6bee98*/
    return -2147467262; /*0x6beea0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6beeac*/
  return 0; /*0x6bee5e*/
}
// 0x6BEEC0
LONG VectorClass_K_8::AddRef(int a1)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6beece*/
}
// 0x6BEEE0
LONG VectorClass_K_8::Release(volatile LONG * Block)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6beef0*/
  if ( !v1 ) /*0x6beef4*/
    RA2_OPDEL((void *)Block); /*0x6beef7*/
  return v1; /*0x6bef01*/
}
// 0x6BEF10
int VectorClass_K_8::ddtor(int a1, int a2, int a3, unsigned int * a4)
{
  CStreamClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6bef18*/
    return -2147024809; /*0x6bef1b*/
  *v9 = 0; /*0x6bef28*/
  if ( a3 ) /*0x6bef30*/
    return -2147221232; /*0x6bef33*/
  v5 = (CStreamClass *)RA2_OPNEW(0x2Cu); /*0x6bef3e*/
  if ( !v5 ) /*0x6bef48*/
    return -2147024882; /*0x6bef48*/
  v6 = VectorClass_K_8::Constructor(v5); /*0x6bef4c*/
  v7 = v6; /*0x6bef51*/
  if ( !v6 ) /*0x6bef55*/
    return -2147024882; /*0x6bef58*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6bef6c*/
  if ( v8 < 0 ) /*0x6bef70*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 56))(v7, 1); /*0x6bef78*/
  return v8; /*0x6bef1a*/
}
// 0x6BEF90
int VectorClass_K_8::GetSize(int a1, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6bef9a*/
  if ( v5 ) /*0x6bef9d*/
    v3 = v2 + 1; /*0x6bef9f*/
  else
    v3 = v2 - 1; /*0x6befa8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6befa0*/
  return 0; /*0x6befa5*/
}
// 0x6BEFD0

// 0x6BF040
LONG VectorClass_K_14::AddRef(int a1)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6befd7*/
    return -2147467261; /*0x6befd9*/
  *v4 = 0; /*0x6beff6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bf012*/
    *v4 = a2; /*0x6bf016*/
  if ( !*v4 ) /*0x6bf018*/
    return -2147467262; /*0x6bf020*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6bf02c*/
  return 0; /*0x6befde*/
}
// 0x6BF060

// 0x6BF090

// 0x6BF110

// 0x6BF150

// 0x6BF1C0
LONG VectorClass_K_20::AddRef(int a1)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bf070*/
  if ( !v1 ) /*0x6bf074*/
    RA2_OPDEL((void *)Block); /*0x6bf077*/
  return v1; /*0x6bf081*/
}
// 0x6BF1E0

// 0x6BF210

// 0x6BF290

// 0x6BF2D0

// 0x6BF340
LONG VectorClass_K_26::AddRef(int a1)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bf1f0*/
  if ( !v1 ) /*0x6bf1f4*/
    RA2_OPDEL((void *)Block); /*0x6bf1f7*/
  return v1; /*0x6bf201*/
}
// 0x6BF360

// 0x6BF390

// 0x6BF410

// 0x6BF450

// 0x6BF4C0
LONG VectorClass_K_32::AddRef(int a1)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bf370*/
  if ( !v1 ) /*0x6bf374*/
    RA2_OPDEL((void *)Block); /*0x6bf377*/
  return v1; /*0x6bf381*/
}
// 0x6BF4E0

// 0x6BF510

// 0x6BF590

// 0x6BF5D0

// 0x6BF640
LONG VectorClass_K_38::AddRef(int a1)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bf4f0*/
  if ( !v1 ) /*0x6bf4f4*/
    RA2_OPDEL((void *)Block); /*0x6bf4f7*/
  return v1; /*0x6bf501*/
}
// 0x6BF660

// 0x6BF690

// 0x6BF710

// 0x6BF750

// 0x6BF7C0
LONG VectorClass_K_44::AddRef(int a1)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bf670*/
  if ( !v1 ) /*0x6bf674*/
    RA2_OPDEL((void *)Block); /*0x6bf677*/
  return v1; /*0x6bf681*/
}
// 0x6BF7E0

// 0x6BF810

// 0x6BF890

// 0x6C61D0

// 0x6C6210

// 0x6C62C0

// 0x6C62F0

// 0x6C6330

// 0x6C6350

// 0x6C6450

// 0x6C6480

// 0x6C64D0

// 0x6CA7C0

// 0x6CA7F0

// 0x6CA810
int VectorClass_ptr_SubTitle::Get(int a2, void *a2_2)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bf7f0*/
  if ( !v1 ) /*0x6bf7f4*/
    RA2_OPDEL((void *)Block); /*0x6bf7f7*/
  return v1; /*0x6bf801*/
}
// 0x6CA820

// 0x6CA860

// 0x6CA910

// 0x6CA9C0
DynamicVector * VectorClass_ptr_SubTitle::Constructor_VectorClass_SubTitle___(unsigned int * Block, char a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = Block->m_8; /*0x6ca822*/
  if ( m_8 == a2->vtable3 ) /*0x6ca82d*/
  {
    v3 = 0; /*0x6ca82f*/
    if ( m_8 <= 0 ) /*0x6ca833*/
      return 1; /*0x6ca853*/
    v4 = *(_DWORD **)&Block->m_1[3]; /*0x6ca835*/
    v5 = a2->vtable2 - (_DWORD)v4; /*0x6ca83b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6ca844*/
    {
      ++v3; /*0x6ca846*/
      ++v4; /*0x6ca847*/
      if ( v3 >= m_8 ) /*0x6ca84c*/
        return 1; /*0x6ca84c*/
    }
  }
  return 0; /*0x6ca84e*/
}
// 0x6CAA10

// 0x6CAAC0

// 0x6CAAF0

// 0x6CAB30

// 0x6CAB50

// 0x6CE2D0
char VectorClass_flat::RemoveAt(int a2, void *a2_2)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x6caa1c*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x6caa26*/
    if ( a2_2 ) /*0x6caa2c*/
      v4 = a2_2; /*0x6caa42*/
    else
      v4 = (_DWORD *)RA2_OPNEW(4 * a2); /*0x6caa3e*/
    IDA_LOBYTE(this->m_C) = 1; /*0x6caa46*/
    if ( v4 ) /*0x6caa4a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x6caa55*/
      {
        m_8 = this->m_8; /*0x6caa5c*/
        if ( a2 < m_8 ) /*0x6caa61*/
          m_8 = a2; /*0x6caa63*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6caa69*/
          ++i; /*0x6caa6e*/
        if ( IDA_BYTE1(this->m_C) ) /*0x6caa7b*/
        {
          RA2_OPDEL(*(void **)&this->m_1[3]); /*0x6caa86*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x6caa8e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x6caa97*/
      this->m_8 = a2; /*0x6caa9f*/
      IDA_BYTE1(this->m_C) = a2_2 == 0; /*0x6caaa2*/
      return 1; /*0x6caaa8*/
    }
    else
    {
      return 0; /*0x6caa4f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVSubTitle *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6caab2*/
    return 1; /*0x6caab8*/
  }
}
// 0x6DC4E0

// 0x6DC510

// 0x6DC540

// 0x6DC580

// 0x6DC5B0

// 0x6DC5D0
int VectorClass_UDirtyAreaStruct___16::Clear(int a2)
{
  void *Items; // eax

  Items = a2->Items; /*0x6dc4e6*/
  a2->Count = 0; /*0x6dc4e9*/
  if ( Items && a2->IsAllocated ) /*0x6dc4f0*/
  {
    RA2_OPDEL(Items); /*0x6dc4f6*/
    a2->Items = 0; /*0x6dc4fe*/
  }
  a2->IsAllocated = 0; /*0x6dc501*/
  a2->Capacity = 0; /*0x6dc504*/
}
// 0x6DC5E0

// 0x6DC660

// 0x6DC780

// 0x6DC7B0
int VectorClass_UDirtyAreaStruct::GetSize(int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // ebp

  m_8 = this->m_8; /*0x6dc5eb*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x6dc5f0*/
  {
    v3 = 0; /*0x6dc5f2*/
    if ( m_8 <= 0 ) /*0x6dc5f6*/
      return 1; /*0x6dc646*/
    v4 = *(_DWORD *)(a2 + 4); /*0x6dc5f8*/
    v5 = *(_DWORD *)&this->m_1[3]; /*0x6dc5fb*/
    v6 = v4 + 4; /*0x6dc600*/
    v7 = v4 - v5; /*0x6dc603*/
    while ( *(_BYTE *)(v5 + 16) == *(_BYTE *)(v6 + 12) /*0x6dc633*/
         && *(_DWORD *)v5 == *(_DWORD *)(v5 + v7)
         && *(_DWORD *)(v5 + 4) == *(_DWORD *)v6
         && *(_DWORD *)(v5 + 8) == *(_DWORD *)(v6 + 4)
         && *(_DWORD *)(v5 + 12) == *(_DWORD *)(v6 + 8) )
    {
      ++v3; /*0x6dc635*/
      v6 += 20; /*0x6dc636*/
      v5 += 20; /*0x6dc639*/
      if ( v3 >= m_8 ) /*0x6dc63e*/
        return 1; /*0x6dc63e*/
    }
  }
  return 0; /*0x6dc640*/
}
// 0x6DC820

// 0x6DC970
int VectorClass_UDirtyAreaStruct::FindItemIndex(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x6dc820*/
    return (a2 - *(_DWORD *)&this->m_1[3]) / 0x14u; /*0x6dc83e*/
  else
    return 0; /*0x6dc827*/
}
// 0x6DC9D0

// 0x6DCA10

// 0x6DCAC0

// 0x6DCAF0

// 0x6DCB30

// 0x6DCB50

// 0x6DCC00

// 0x6DCC30

// 0x6DCC80
unsigned int * VectorClass_UDirtyAreaStruct::loc_6DCC80(unsigned int * Block, char a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = Block->m_8; /*0x6dc9d2*/
  if ( m_8 == a2->vtable3 ) /*0x6dc9dd*/
  {
    v3 = 0; /*0x6dc9df*/
    if ( m_8 <= 0 ) /*0x6dc9e3*/
      return 1; /*0x6dca03*/
    v4 = *(_DWORD **)&Block->m_1[3]; /*0x6dc9e5*/
    v5 = a2->vtable2 - (_DWORD)v4; /*0x6dc9eb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6dc9f4*/
    {
      ++v3; /*0x6dc9f6*/
      ++v4; /*0x6dc9f7*/
      if ( v3 >= m_8 ) /*0x6dc9fc*/
        return 1; /*0x6dc9fc*/
    }
  }
  return 0; /*0x6dc9fe*/
}
// 0x6DCCD0

// 0x6DCD20
DynamicVector * VectorClass_UDirtyAreaStruct::Constructor_VectorClass_ShadowControlClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x6dccd3*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_ShadowControlClass___vftable; /*0x6dccd6*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x6dcce0*/
  {
    RA2_OPDEL(v3); /*0x6dcce8*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x6dccf0*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x6dccfb*/
  Block->m_8 = 0; /*0x6dcd01*/
  if ( (a2 & 1) != 0 ) /*0x6dcd08*/
    RA2_OPDEL(Block); /*0x6dcd0b*/
  return Block->__pad_0; /*0x6dcd15*/
}
// 0x6E64E0

// 0x6E6510

// 0x6E6530
int VectorClass_ptr_TagTypeClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x6e64e6*/
  this->m_10 = 0; /*0x6e64e9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x6e64f0*/
  {
    RA2_OPDEL(v2); /*0x6e64f6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6e64fe*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x6e6501*/
  this->m_8 = 0; /*0x6e6504*/
}
// 0x6E6540

// 0x6E6580

// 0x6E6630

// 0x6E6660

// 0x6E66A0

// 0x6E66C0

// 0x6E6770

// 0x6E67A0

// 0x6E67F0
DynamicVector * VectorClass_ptr_TagTypeClass::Constructor_VectorClass_TagTypeClass___(unsigned int * Block, char a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = Block->m_8; /*0x6e6542*/
  if ( m_8 == a2->vtable3 ) /*0x6e654d*/
  {
    v3 = 0; /*0x6e654f*/
    if ( m_8 <= 0 ) /*0x6e6553*/
      return 1; /*0x6e6573*/
    v4 = *(_DWORD **)&Block->m_1[3]; /*0x6e6555*/
    v5 = a2->vtable2 - (_DWORD)v4; /*0x6e655b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6e6564*/
    {
      ++v3; /*0x6e6566*/
      ++v4; /*0x6e6567*/
      if ( v3 >= m_8 ) /*0x6e656c*/
        return 1; /*0x6e656c*/
    }
  }
  return 0; /*0x6e656e*/
}
// 0x717D20
unsigned int * VectorClass_flat::CopyParticle(DynamicVector * aP1)
{
  int v3; // eax
  int v4; // eax
  int Capacity; // ecx
  int v6; // eax

  this->Items = 0; /*0x717d2d*/
  this->Capacity = 0; /*0x717d30*/
  this->IsInitialized[0] = 1; /*0x717d33*/
  this->IsAllocated[0] = 0; /*0x717d37*/
  this->vfptr = (int)&(void*)(void*)&VectorClass_ParticleSystemTypeClass_const___vftable; /*0x717d3a*/
  if ( this != (DynamicVectorClass *)aP1 ) /*0x717d40*/
  {
    VectorClass::Cleanup(); /*0x717d42*/
    v3 = aP1[2]; /*0x717d48*/
    this->Capacity = v3; /*0x717d4d*/
    if ( v3 ) /*0x717d50*/
    {
      v4 = RA2_OPNEW(4 * v3); /*0x717d56*/
      this->Items = v4; /*0x717d60*/
      if ( v4 ) /*0x717d63*/
      {
        Capacity = this->Capacity; /*0x717d65*/
        v6 = 0; /*0x717d68*/
        this->IsAllocated[0] = 1; /*0x717d6c*/
        if ( Capacity > 0 ) /*0x717d70*/
        {
          do /*0x717d84*/
          {
            *(_DWORD *)(this->Items + 4 * v6) = *(_DWORD *)(aP1[1] + 4 * v6); /*0x717d7b*/
            ++v6; /*0x717d81*/
          }
          while ( v6 < this->Capacity ); /*0x717d84*/
        }
      }
    }
    else
    {
      this->Items = 0; /*0x717d88*/
      this->IsAllocated[0] = 0; /*0x717d8b*/
    }
  }
  this->Count = aP1[4]; /*0x717d91*/
  this->CapacityIncrement = aP1[5]; /*0x717d97*/
  this->vfptr = (int)&(void*)(void*)&TypeList_ParticleSystemTypeClass_const___vftable; /*0x717d9a*/
  return &this->vfptr; /*0x717da2*/
}
// 0x71B240

// 0x71B270

// 0x71B290
int VectorClass_ptr_TemporalClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x71b246*/
  this->m_10 = 0; /*0x71b249*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x71b250*/
  {
    RA2_OPDEL(v2); /*0x71b256*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x71b25e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x71b261*/
  this->m_8 = 0; /*0x71b264*/
}
// 0x71B2A0

// 0x71B2E0

// 0x71B390

// 0x71B3C0

// 0x71B400

// 0x71B420

// 0x71B4D0

// 0x71B500

// 0x71B550
DynamicVector * VectorClass_ptr_TemporalClass::Constructor_VectorClass_TemporalClass___(unsigned int * Block, char a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = Block->m_8; /*0x71b2a2*/
  if ( m_8 == a2->vtable3 ) /*0x71b2ad*/
  {
    v3 = 0; /*0x71b2af*/
    if ( m_8 <= 0 ) /*0x71b2b3*/
      return 1; /*0x71b2d3*/
    v4 = *(_DWORD **)&Block->m_1[3]; /*0x71b2b5*/
    v5 = a2->vtable2 - (_DWORD)v4; /*0x71b2bb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x71b2c4*/
    {
      ++v3; /*0x71b2c6*/
      ++v4; /*0x71b2c7*/
      if ( v3 >= m_8 ) /*0x71b2cc*/
        return 1; /*0x71b2cc*/
    }
  }
  return 0; /*0x71b2ce*/
}
// 0x71FBA0

// 0x71FBD0

// 0x71FBF0
int VectorClass_ptr_TEventClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x71fba6*/
  this->m_10 = 0; /*0x71fba9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x71fbb0*/
  {
    RA2_OPDEL(v2); /*0x71fbb6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x71fbbe*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x71fbc1*/
  this->m_8 = 0; /*0x71fbc4*/
}
// 0x71FC00

// 0x71FC40

// 0x71FCF0

// 0x71FD20

// 0x71FD60

// 0x71FD80

// 0x71FE30

// 0x71FE60

// 0x71FEB0
DynamicVector * VectorClass_ptr_TEventClass::Constructor_VectorClass_TEventClass___(unsigned int * Block, char a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = Block->m_8; /*0x71fc02*/
  if ( m_8 == a2->vtable3 ) /*0x71fc0d*/
  {
    v3 = 0; /*0x71fc0f*/
    if ( m_8 <= 0 ) /*0x71fc13*/
      return 1; /*0x71fc33*/
    v4 = *(_DWORD **)&Block->m_1[3]; /*0x71fc15*/
    v5 = a2->vtable2 - (_DWORD)v4; /*0x71fc1b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x71fc24*/
    {
      ++v3; /*0x71fc26*/
      ++v4; /*0x71fc27*/
      if ( v3 >= m_8 ) /*0x71fc2c*/
        return 1; /*0x71fc2c*/
    }
  }
  return 0; /*0x71fc2e*/
}
// 0x7212B0

// 0x7212E0

// 0x721300

// 0x7213B0

// 0x7213E0
DynamicVector * VectorClass_ptr_ThemeControl::Constructor_VectorClass_ThemeControl___(unsigned int * Block, char a2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x7212b6*/
  this->m_10 = 0; /*0x7212b9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x7212c0*/
  {
    RA2_OPDEL(v2); /*0x7212c6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7212ce*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x7212d1*/
  this->m_8 = 0; /*0x7212d4*/
}
// 0x723730

// 0x723760

// 0x723780
int VectorClass_ptr_TiberiumClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x723736*/
  this->m_10 = 0; /*0x723739*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x723740*/
  {
    RA2_OPDEL(v2); /*0x723746*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x72374e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x723751*/
  this->m_8 = 0; /*0x723754*/
}
// 0x723790

// 0x7237D0

// 0x723880

// 0x7238B0

// 0x7238F0

// 0x723910

// 0x7239C0

// 0x7239F0

// 0x723A40
DynamicVector * VectorClass_ptr_TiberiumClass::Constructor_VectorClass_TiberiumClass___(unsigned int * Block, char a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = Block->m_8; /*0x723792*/
  if ( m_8 == a2->vtable3 ) /*0x72379d*/
  {
    v3 = 0; /*0x72379f*/
    if ( m_8 <= 0 ) /*0x7237a3*/
      return 1; /*0x7237c3*/
    v4 = *(_DWORD **)&Block->m_1[3]; /*0x7237a5*/
    v5 = a2->vtable2 - (_DWORD)v4; /*0x7237ab*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x7237b4*/
    {
      ++v3; /*0x7237b6*/
      ++v4; /*0x7237b7*/
      if ( v3 >= m_8 ) /*0x7237bc*/
        return 1; /*0x7237bc*/
    }
  }
  return 0; /*0x7237be*/
}
// 0x74BF90
char VectorClass_E::Clear(int a2)
{
  return *(_BYTE *)(*(_DWORD *)&this->m_1[3] + a2); /*0x74bf9a*/
}
// 0x74BFA0
VectorClass_flat * VectorClass_E::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x74bfa3*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_unsigned_char_vftable; /*0x74bfa6*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x74bfb0*/
  {
    RA2_OPDEL(v3); /*0x74bfb8*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x74bfc0*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x74bfcb*/
  Block->m_8 = 0; /*0x74bfd1*/
  if ( (a2 & 1) != 0 ) /*0x74bfd8*/
    RA2_OPDEL(Block); /*0x74bfdb*/
  return Block->__pad_0; /*0x74bfe5*/
}
// 0x74BFF0
char VectorClass_E::AddRef(int a2)
{
  int m_8; // edi
  int v3; // eax

  m_8 = this->m_8; /*0x74bff7*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x74bfff*/
  {
    v3 = 0; /*0x74c001*/
    if ( m_8 <= 0 ) /*0x74c005*/
      return 1; /*0x74c021*/
    while ( *(_BYTE *)(*(_DWORD *)&this->m_1[3] + v3) == *(_BYTE *)(*(_DWORD *)(a2 + 4) + v3) ) /*0x74c015*/
    {
      if ( ++v3 >= m_8 ) /*0x74c01a*/
        return 1; /*0x74c01a*/
    }
  }
  return 0; /*0x74c01c*/
}
// 0x74C030
char VectorClass_E::Release(signed int Size, char * a3)
{
  char *v4; // edi
  signed int m_8; // ecx
  signed int i; // eax

  if ( Size ) /*0x74c03c*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x74c046*/
    if ( a3 ) /*0x74c04c*/
      v4 = a3; /*0x74c05b*/
    else
      v4 = (char *)RA2_OPNEW(Size); /*0x74c057*/
    IDA_LOBYTE(this->m_C) = 1; /*0x74c05f*/
    if ( v4 ) /*0x74c063*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x74c06e*/
      {
        m_8 = this->m_8; /*0x74c075*/
        if ( Size < m_8 ) /*0x74c07a*/
          m_8 = Size; /*0x74c07c*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_BYTE *)(*(_DWORD *)&this->m_1[3] + i - 1) ) /*0x74c082*/
          ++i; /*0x74c087*/
        if ( IDA_BYTE1(this->m_C) ) /*0x74c094*/
        {
          RA2_OPDEL(*(void **)&this->m_1[3]); /*0x74c09f*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x74c0a7*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x74c0b0*/
      this->m_8 = Size; /*0x74c0b8*/
      IDA_BYTE1(this->m_C) = a3 == 0; /*0x74c0bb*/
      return 1; /*0x74c0c1*/
    }
    else
    {
      return 0; /*0x74c068*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_E *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x74c0cb*/
    return 1; /*0x74c0d1*/
  }
}
// 0x74C0E0
void VectorClass_E::ddtor(void *a1_1)
{
  if ( *(_DWORD *)&a1_1->m_1[3] && IDA_BYTE1(a1_1->m_C) ) /*0x74c0ed*/
  {
    RA2_OPDEL(*(void **)&a1_1->m_1[3]); /*0x74c0f3*/
    *(_DWORD *)&a1_1->m_1[3] = 0; /*0x74c0fb*/
  }
  IDA_BYTE1(a1_1->m_C) = 0; /*0x74c0fe*/
  a1_1->m_8 = 0; /*0x74c101*/
}
// 0x74C110
int VectorClass_E::GetSize(unsigned char * a2)
{
  int result; // eax
  int m_8; // esi
  int v4; // ecx

  if ( !IDA_LOBYTE(this->m_C) ) /*0x74c110*/
    return 0; /*0x74c119*/
  m_8 = this->m_8; /*0x74c11e*/
  result = 0; /*0x74c121*/
  if ( m_8 <= 0 ) /*0x74c125*/
    return -1; /*0x74c13a*/
  v4 = *(_DWORD *)&this->m_1[3]; /*0x74c12b*/
  while ( *(_BYTE *)(v4 + result) != *a2 ) /*0x74c133*/
  {
    if ( ++result >= m_8 ) /*0x74c138*/
      return -1; /*0x74c138*/
  }
  return result; /*0x74c118*/
}
// 0x74C150
int VectorClass_E::GetCapacity(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x74c150*/
    return a2 - *(_DWORD *)&this->m_1[3]; /*0x74c163*/
  else
    return 0; /*0x74c157*/
}
// 0x7518D0

// 0x751900

// 0x751920
int VectorClass_ptr_VocClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x7518d6*/
  this->m_10 = 0; /*0x7518d9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x7518e0*/
  {
    RA2_OPDEL(v2); /*0x7518e6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7518ee*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x7518f1*/
  this->m_8 = 0; /*0x7518f4*/
}
// 0x751930

// 0x751970

// 0x751A20

// 0x751A50

// 0x751A90

// 0x751AB0

// 0x751B60

// 0x751B90

// 0x751BE0
DynamicVector * VectorClass_ptr_VocClass::Constructor_VectorClass_VocClass___(unsigned int * Block, char a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = Block->m_8; /*0x751932*/
  if ( m_8 == a2->vtable3 ) /*0x75193d*/
  {
    v3 = 0; /*0x75193f*/
    if ( m_8 <= 0 ) /*0x751943*/
      return 1; /*0x751963*/
    v4 = *(_DWORD **)&Block->m_1[3]; /*0x751945*/
    v5 = a2->vtable2 - (_DWORD)v4; /*0x75194b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x751954*/
    {
      ++v3; /*0x751956*/
      ++v4; /*0x751957*/
      if ( v3 >= m_8 ) /*0x75195c*/
        return 1; /*0x75195c*/
    }
  }
  return 0; /*0x75195e*/
}
// 0x7536A0
int VectorClass_ptr_VoxClass::Get(int a2, void *a2_2)
{
  return *(_DWORD *)(*(_DWORD *)&a2_2->m_1[3] + 4 * a2_2); /*0x7536aa*/
}
// 0x7536B0

// 0x7536F0

// 0x7537A0

// 0x7537D0

// 0x753810

// 0x753910

// 0x75A430

// 0x75A460

// 0x75A480
int VectorClass_ptr_MovieHandle::Get(int a2, void *a2_2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = a2_2->m_8; /*0x7536b2*/
  if ( m_8 == *(_DWORD *)(a2_2 + 8) ) /*0x7536bd*/
  {
    v3 = 0; /*0x7536bf*/
    if ( m_8 <= 0 ) /*0x7536c3*/
      return 1; /*0x7536e3*/
    v4 = *(_DWORD **)&a2_2->m_1[3]; /*0x7536c5*/
    v5 = *(_DWORD *)(a2_2 + 4) - (_DWORD)v4; /*0x7536cb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x7536d4*/
    {
      ++v3; /*0x7536d6*/
      ++v4; /*0x7536d7*/
      if ( v3 >= m_8 ) /*0x7536dc*/
        return 1; /*0x7536dc*/
    }
  }
  return 0; /*0x7536de*/
}
// 0x75A490

// 0x75A4D0

// 0x75A580

// 0x75A5B0

// 0x75A5F0

// 0x75A610

// 0x75A6C0

// 0x75A6F0

// 0x75A740
DynamicVector * VectorClass_ptr_MovieHandle::Constructor_VectorClass_MovieHandle___(unsigned int * Block, char a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = Block->m_8; /*0x75a492*/
  if ( m_8 == a2->vtable3 ) /*0x75a49d*/
  {
    v3 = 0; /*0x75a49f*/
    if ( m_8 <= 0 ) /*0x75a4a3*/
      return 1; /*0x75a4c3*/
    v4 = *(_DWORD **)&Block->m_1[3]; /*0x75a4a5*/
    v5 = a2->vtable2 - (_DWORD)v4; /*0x75a4ab*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x75a4b4*/
    {
      ++v3; /*0x75a4b6*/
      ++v4; /*0x75a4b7*/
      if ( v3 >= m_8 ) /*0x75a4bc*/
        return 1; /*0x75a4bc*/
    }
  }
  return 0; /*0x75a4be*/
}
// 0x763F90

// 0x763FC0

// 0x763FE0
int VectorClass_ptr_WaypointPathClass::Get(int a2, void *a2_2)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x763f96*/
  this->m_10 = 0; /*0x763f99*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x763fa0*/
  {
    RA2_OPDEL(v2); /*0x763fa6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x763fae*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x763fb1*/
  this->m_8 = 0; /*0x763fb4*/
}
// 0x764460

// 0x7644A0

// 0x764550

// 0x764580

// 0x7645C0

// 0x7645E0

// 0x764690

// 0x7646C0

// 0x764710
DynamicVector * VectorClass_ptr_WaypointPathClass::Constructor_VectorClass_WaypointPathClass___(unsigned int * Block, char a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = Block->m_8; /*0x764462*/
  if ( m_8 == a2->vtable3 ) /*0x76446d*/
  {
    v3 = 0; /*0x76446f*/
    if ( m_8 <= 0 ) /*0x764473*/
      return 1; /*0x764493*/
    v4 = *(_DWORD **)&Block->m_1[3]; /*0x764475*/
    v5 = a2->vtable2 - (_DWORD)v4; /*0x76447b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x764484*/
    {
      ++v3; /*0x764486*/
      ++v4; /*0x764487*/
      if ( v3 >= m_8 ) /*0x76448c*/
        return 1; /*0x76448c*/
    }
  }
  return 0; /*0x76448e*/
}
// 0x76B6C0
unsigned int * VectorClass_rc_ptr_WDTTerritory::loc_76B6C0(WDTState * aP1, int a3)
{

  int v3; // eax
  int v5; // esi
  void *v7; // eax
  int v8; // eax
  int16_t v9; // cx
  int v10; // esi
  char v11; // dl
  int16_t v12; // ax
  unsigned int v13; // eax
  char v14; // dl
  char v15; // dl
  int v16; // ecx
  int v17; // esi
  char v18; // al
  int v19; // esi
  char v20; // al
  int v21; // esi
  char v22; // al
  int v23; // esi
  char v24; // al
  int v25; // esi
  char v26; // al
  int v27; // esi
  char v28; // al
  int v29; // esi
  char v30; // al
  int v31; // esi
  char v32; // al
  int v33; // esi
  char v34; // al
  int v35; // esi
  char v36; // al
  int v37; // esi
  char v38; // al
  int v39; // esi
  char v40; // al
  int v41; // esi
  char v42; // al
  int v43; // esi
  char v44; // al
  int v45; // esi
  char v46; // al
  int v47; // esi
  char v48; // al
  int v49; // esi
  char v50; // al
  int v51; // esi
  char v52; // al
  int v53; // esi
  char v54; // al
  int v55; // esi
  char v56; // al
  int v57; // esi
  char v58; // al
  int v59; // esi
  char v60; // al
  int v61; // esi
  char v62; // al
  int v63; // esi
  char v64; // al
  int v65; // esi
  int v66; // eax
  int v67; // ecx
  int v68; // edx
  int v69; // ebx
  int v70; // eax
  int v71; // ecx
  int v72; // edx
  int v73; // edx
  int v74; // eax
  int v75; // ecx
  int v76; // eax
  int v77; // ecx
  void **v79; // [esp+10h] [ebp-8h] BYREF
  int v80; // [esp+14h] [ebp-4h]

  v3 = a3; /*0x76b180*/
  v5 = 0; /*0x76b18c*/
  this->Capacity = 0; /*0x76b192*/
  if ( a3 >= 28 ) /*0x76b195*/
  {
    while ( v5 + 28 <= v3 ) /*0x76b1ba*/
    {
      v7 = RA2_OPNEW(0x40u); /*0x76b1be*/
      if ( v7 ) /*0x76b1c8*/
        v8 = ParseWDTTerritories_Parse(v7); /*0x76b1cc*/
      else
        v8 = 0; /*0x76b1d3*/
      ParseWDTTerritories_Parse_76B790(v8); /*0x76b1da*/
      IDA_LOBYTE(v9) = 0; /*0x76b1e6*/
      v10 = v5 + 1; /*0x76b1e8*/
      *(unsigned int *)(v80 + 8) = this->Capacity; /*0x76b1e9*/
      IDA_HIBYTE(v9) = *(unsigned char *)(v10 + aP1 - 1); /*0x76b1ec*/
      *(unsigned short *)(v80 + 12) = v9; /*0x76b1f4*/
      *(unsigned short *)(v80 + 12) += *(uint8_t *)(v10 + aP1); /*0x76b201*/
      v11 = *(unsigned char *)(v10 + aP1 + 1); /*0x76b205*/
      v10 += 2; /*0x76b211*/
      *(unsigned char *)(v80 + 14) = v11 + 0x80; /*0x76b212*/
      IDA_LOBYTE(v12) = 0; /*0x76b21c*/
      IDA_LOBYTE(v9) = *(unsigned char *)(v10 + aP1) + 0x80; /*0x76b21e*/
      ++v10; /*0x76b221*/
      *(unsigned char *)(v80 + 15) = v9; /*0x76b222*/
      IDA_HIBYTE(v12) = *(unsigned char *)(v10 + aP1); /*0x76b229*/
      ++v10; /*0x76b22c*/
      *(unsigned short *)(v80 + 16) = v12; /*0x76b22d*/
      *(unsigned short *)(v80 + 16) += *(uint8_t *)(v10 + aP1); /*0x76b23a*/
      v13 = *(uint8_t *)(++v10 + aP1) - 128; /*0x76b248*/
      ++v10; /*0x76b24d*/
      *(unsigned char *)(v80 + 28) = v13 & 0xF; /*0x76b253*/
      *(unsigned char *)(v80 + 29) = (v13 >> 4) & 0xF; /*0x76b25f*/
      v14 = *(unsigned char *)(v10 + aP1) + 0x80; /*0x76b269*/
      ++v10; /*0x76b26c*/
      *(unsigned char *)(v80 + 30) = v14; /*0x76b26d*/
      IDA_LOBYTE(v9) = *(unsigned char *)(v10 + aP1) + 0x80; /*0x76b277*/
      ++v10; /*0x76b27a*/
      *(unsigned char *)(v80 + 18) = v9; /*0x76b27b*/
      IDA_LOBYTE(v13) = *(unsigned char *)(v10 + aP1) + 0x80; /*0x76b285*/
      ++v10; /*0x76b287*/
      *(unsigned char *)(v80 + 19) = v13; /*0x76b288*/
      v15 = *(unsigned char *)(v10 + aP1) + 0x80; /*0x76b294*/
      ++v10; /*0x76b297*/
      *(unsigned char *)(v80 + 20) = v15; /*0x76b298*/
      v16 = *(uint8_t *)(v10 + aP1) - 128; /*0x76b2a2*/
      v17 = v10 + 1; /*0x76b2a8*/
      *(unsigned int *)(v80 + 24) = v16; /*0x76b2a9*/
      if ( *(unsigned char *)(v17 + aP1) <= 0x7Fu ) /*0x76b2b1*/
        v18 = *(unsigned char *)(v17 + aP1); /*0x76b2bf*/
      else
        v18 = *(unsigned char *)(v17 + aP1) + 0x80; /*0x76b2b8*/
      v19 = v17 + 1; /*0x76b2c8*/
      *(unsigned char *)(v80 + 31) = v18; /*0x76b2c9*/
      if ( *(unsigned char *)(v19 + aP1) <= 0x7Fu ) /*0x76b2d1*/
        v20 = *(unsigned char *)(v19 + aP1); /*0x76b2df*/
      else
        v20 = *(unsigned char *)(v19 + aP1) + 0x80; /*0x76b2d8*/
      v21 = v19 + 1; /*0x76b2e8*/
      *(unsigned char *)(v80 + 32) = v20; /*0x76b2e9*/
      if ( *(unsigned char *)(v21 + aP1) <= 0x7Fu ) /*0x76b2f1*/
        v22 = *(unsigned char *)(v21 + aP1); /*0x76b2ff*/
      else
        v22 = *(unsigned char *)(v21 + aP1) + 0x80; /*0x76b2f8*/
      v23 = v21 + 1; /*0x76b308*/
      *(unsigned char *)(v80 + 33) = v22; /*0x76b309*/
      if ( *(unsigned char *)(v23 + aP1) <= 0x7Fu ) /*0x76b311*/
        v24 = *(unsigned char *)(v23 + aP1); /*0x76b31f*/
      else
        v24 = *(unsigned char *)(v23 + aP1) + 0x80; /*0x76b318*/
      v25 = v23 + 1; /*0x76b328*/
      *(unsigned char *)(v80 + 34) = v24; /*0x76b329*/
      if ( *(unsigned char *)(v25 + aP1) <= 0x7Fu ) /*0x76b331*/
        v26 = *(unsigned char *)(v25 + aP1); /*0x76b33f*/
      else
        v26 = *(unsigned char *)(v25 + aP1) + 0x80; /*0x76b338*/
      v27 = v25 + 1; /*0x76b348*/
      *(unsigned char *)(v80 + 35) = v26; /*0x76b349*/
      if ( *(unsigned char *)(v27 + aP1) <= 0x7Fu ) /*0x76b351*/
        v28 = *(unsigned char *)(v27 + aP1); /*0x76b35f*/
      else
        v28 = *(unsigned char *)(v27 + aP1) + 0x80; /*0x76b358*/
      v29 = v27 + 1; /*0x76b368*/
      *(unsigned char *)(v80 + 36) = v28; /*0x76b369*/
      if ( *(unsigned char *)(v29 + aP1) <= 0x7Fu ) /*0x76b371*/
        v30 = *(unsigned char *)(v29 + aP1); /*0x76b37f*/
      else
        v30 = *(unsigned char *)(v29 + aP1) + 0x80; /*0x76b378*/
      v31 = v29 + 1; /*0x76b388*/
      *(unsigned char *)(v80 + 37) = v30; /*0x76b389*/
      if ( *(unsigned char *)(v31 + aP1) <= 0x7Fu ) /*0x76b391*/
        v32 = *(unsigned char *)(v31 + aP1); /*0x76b39f*/
      else
        v32 = *(unsigned char *)(v31 + aP1) + 0x80; /*0x76b398*/
      v33 = v31 + 1; /*0x76b3a8*/
      *(unsigned char *)(v80 + 38) = v32; /*0x76b3a9*/
      if ( *(unsigned char *)(v33 + aP1) <= 0x7Fu ) /*0x76b3b1*/
        v34 = *(unsigned char *)(v33 + aP1); /*0x76b3bf*/
      else
        v34 = *(unsigned char *)(v33 + aP1) + 0x80; /*0x76b3b8*/
      v35 = v33 + 1; /*0x76b3c8*/
      *(unsigned char *)(v80 + 39) = v34; /*0x76b3c9*/
      if ( *(unsigned char *)(v35 + aP1) <= 0x7Fu ) /*0x76b3d1*/
        v36 = *(unsigned char *)(v35 + aP1); /*0x76b3df*/
      else
        v36 = *(unsigned char *)(v35 + aP1) + 0x80; /*0x76b3d8*/
      v37 = v35 + 1; /*0x76b3e8*/
      *(unsigned char *)(v80 + 43) = v36; /*0x76b3e9*/
      if ( *(unsigned char *)(v37 + aP1) <= 0x7Fu ) /*0x76b3f1*/
        v38 = *(unsigned char *)(v37 + aP1); /*0x76b3ff*/
      else
        v38 = *(unsigned char *)(v37 + aP1) + 0x80; /*0x76b3f8*/
      v39 = v37 + 1; /*0x76b408*/
      *(unsigned char *)(v80 + 44) = v38; /*0x76b409*/
      if ( *(unsigned char *)(v39 + aP1) <= 0x7Fu ) /*0x76b411*/
        v40 = *(unsigned char *)(v39 + aP1); /*0x76b41f*/
      else
        v40 = *(unsigned char *)(v39 + aP1) + 0x80; /*0x76b418*/
      v41 = v39 + 1; /*0x76b428*/
      *(unsigned char *)(v80 + 45) = v40; /*0x76b429*/
      if ( *(unsigned char *)(v41 + aP1) <= 0x7Fu ) /*0x76b431*/
        v42 = *(unsigned char *)(v41 + aP1); /*0x76b43f*/
      else
        v42 = *(unsigned char *)(v41 + aP1) + 0x80; /*0x76b438*/
      v43 = v41 + 1; /*0x76b448*/
      *(unsigned char *)(v80 + 46) = v42; /*0x76b449*/
      if ( *(unsigned char *)(v43 + aP1) <= 0x7Fu ) /*0x76b451*/
        v44 = *(unsigned char *)(v43 + aP1); /*0x76b45f*/
      else
        v44 = *(unsigned char *)(v43 + aP1) + 0x80; /*0x76b458*/
      v45 = v43 + 1; /*0x76b468*/
      *(unsigned char *)(v80 + 47) = v44; /*0x76b469*/
      if ( *(unsigned char *)(v45 + aP1) <= 0x7Fu ) /*0x76b471*/
        v46 = *(unsigned char *)(v45 + aP1); /*0x76b47f*/
      else
        v46 = *(unsigned char *)(v45 + aP1) + 0x80; /*0x76b478*/
      v47 = v45 + 1; /*0x76b488*/
      *(unsigned char *)(v80 + 48) = v46; /*0x76b489*/
      if ( *(unsigned char *)(v47 + aP1) <= 0x7Fu ) /*0x76b491*/
        v48 = *(unsigned char *)(v47 + aP1); /*0x76b49f*/
      else
        v48 = *(unsigned char *)(v47 + aP1) + 0x80; /*0x76b498*/
      v49 = v47 + 1; /*0x76b4a8*/
      *(unsigned char *)(v80 + 40) = v48; /*0x76b4a9*/
      if ( *(unsigned char *)(v49 + aP1) <= 0x7Fu ) /*0x76b4b1*/
        v50 = *(unsigned char *)(v49 + aP1); /*0x76b4bf*/
      else
        v50 = *(unsigned char *)(v49 + aP1) + 0x80; /*0x76b4b8*/
      v51 = v49 + 1; /*0x76b4c8*/
      *(unsigned char *)(v80 + 41) = v50; /*0x76b4c9*/
      if ( *(unsigned char *)(v51 + aP1) <= 0x7Fu ) /*0x76b4d1*/
        v52 = *(unsigned char *)(v51 + aP1); /*0x76b4df*/
      else
        v52 = *(unsigned char *)(v51 + aP1) + 0x80; /*0x76b4d8*/
      v53 = v51 + 1; /*0x76b4e8*/
      *(unsigned char *)(v80 + 42) = v52; /*0x76b4e9*/
      if ( *(unsigned char *)(v53 + aP1) <= 0x7Fu ) /*0x76b4f1*/
        v54 = *(unsigned char *)(v53 + aP1); /*0x76b4ff*/
      else
        v54 = *(unsigned char *)(v53 + aP1) + 0x80; /*0x76b4f8*/
      v55 = v53 + 1; /*0x76b508*/
      *(unsigned char *)(v80 + 49) = v54; /*0x76b509*/
      if ( *(unsigned char *)(v55 + aP1) <= 0x7Fu ) /*0x76b511*/
        v56 = *(unsigned char *)(v55 + aP1); /*0x76b51f*/
      else
        v56 = *(unsigned char *)(v55 + aP1) + 0x80; /*0x76b518*/
      v57 = v55 + 1; /*0x76b528*/
      *(unsigned char *)(v80 + 50) = v56; /*0x76b529*/
      if ( *(unsigned char *)(v57 + aP1) <= 0x7Fu ) /*0x76b531*/
        v58 = *(unsigned char *)(v57 + aP1); /*0x76b53f*/
      else
        v58 = *(unsigned char *)(v57 + aP1) + 0x80; /*0x76b538*/
      v59 = v57 + 1; /*0x76b548*/
      *(unsigned char *)(v80 + 51) = v58; /*0x76b549*/
      if ( *(unsigned char *)(v59 + aP1) <= 0x7Fu ) /*0x76b551*/
        v60 = *(unsigned char *)(v59 + aP1); /*0x76b55f*/
      else
        v60 = *(unsigned char *)(v59 + aP1) + 0x80; /*0x76b558*/
      v61 = v59 + 1; /*0x76b568*/
      *(unsigned char *)(v80 + 52) = v60; /*0x76b569*/
      if ( *(unsigned char *)(v61 + aP1) <= 0x7Fu ) /*0x76b571*/
        v62 = *(unsigned char *)(v61 + aP1); /*0x76b57f*/
      else
        v62 = *(unsigned char *)(v61 + aP1) + 0x80; /*0x76b578*/
      v63 = v61 + 1; /*0x76b588*/
      *(unsigned char *)(v80 + 53) = v62; /*0x76b589*/
      if ( *(unsigned char *)(v63 + aP1) <= 0x7Fu ) /*0x76b591*/
        v64 = *(unsigned char *)(v63 + aP1); /*0x76b59f*/
      else
        v64 = *(unsigned char *)(v63 + aP1) + 0x80; /*0x76b598*/
      v65 = v63 + 1; /*0x76b5a8*/
      *(unsigned char *)(v80 + 54) = v64; /*0x76b5a9*/
      v66 = *(uint8_t *)(v65 + aP1) << 24; /*0x76b5b7*/
      ++v65; /*0x76b5ba*/
      *(unsigned int *)(v80 + 60) = v66; /*0x76b5bb*/
      v67 = (*(uint8_t *)(v65 + aP1) << 16) + *(unsigned int *)(v80 + 60); /*0x76b5cb*/
      ++v65; /*0x76b5cd*/
      *(unsigned int *)(v80 + 60) = v67; /*0x76b5ce*/
      v68 = (*(uint8_t *)(v65 + aP1) << 8) + *(unsigned int *)(v80 + 60); /*0x76b5e0*/
      ++v65; /*0x76b5e2*/
      *(unsigned int *)(v80 + 60) = v68; /*0x76b5e3*/
      v69 = *(uint8_t *)(v65 + aP1) + *(unsigned int *)(v80 + 60); /*0x76b5f2*/
      ++v65; /*0x76b5f4*/
      *(unsigned int *)(v80 + 60) = v69; /*0x76b5f5*/
      v70 = *(uint8_t *)(v65 + aP1) << 24; /*0x76b603*/
      ++v65; /*0x76b606*/
      *(unsigned int *)(v80 + 56) = v70; /*0x76b607*/
      v71 = (*(uint8_t *)(v65 + aP1) << 16) + *(unsigned int *)(v80 + 56); /*0x76b617*/
      ++v65; /*0x76b619*/
      *(unsigned int *)(v80 + 56) = v71; /*0x76b61a*/
      v72 = (*(uint8_t *)(v65 + aP1) << 8) + *(unsigned int *)(v80 + 56); /*0x76b62c*/
      ++v65; /*0x76b62e*/
      *(unsigned int *)(v80 + 56) = v72; /*0x76b62f*/
      v73 = *(uint8_t *)(v65 + aP1); /*0x76b638*/
      v5 = v65 + 1; /*0x76b640*/
      *(unsigned int *)(v80 + 56) += v73; /*0x76b641*/
      v74 = this->IsAllocated; /*0x76b644*/
      if ( this->u32_3C < v74 /*0x76b66c*/
        || (this->u32_39 || !v74)
        && (v75 = this->u32_40, v75 > 0)
        && (*(uint8_t (**)(int, int, unsigned int))(this->u32_2C + 8))( (int)((char *)&this->Items4), v75 + v74, 0) )
      {
        v76 = this->u32_3C; /*0x76b673*/
        v80 = v80; /*0x76b67a*/
        this->u32_3C = v76 + 1; /*0x76b67e*/
        ((ComPtr *)((unsigned int *)(this->IsInitialized + 8 * v76)))->Set(v80); /*0x76b687*/
      }
      v77 = this->Capacity; /*0x76b68c*/
      v79 = &vt_rc_ptr; /*0x76b68f*/
      this->Capacity = v77 + 1; /*0x76b698*/
      ((ComPtr *)(&v79))->Release(); /*0x76b69f*/
      if ( v5 >= a3 ) /*0x76b6a8*/
        return 1; /*0x76b6b1*/
      v3 = a3; /*0x76b1b1*/
    }
  }
  return 0; /*0x76b197*/

}

// 0x76B760
unsigned int * VectorClass_rc_ptr_WDTTerritory::Clear(unsigned int * a2, int a3)
{
  int v3; // edi

  v3 = *(_DWORD *)&this->m_1[3] + 8 * a3; /*0x76b76d*/
  ComPtr::Constructor((ComPtr *)a2); /*0x76b772*/
  *a2 = &(void*)(void*)&rc_ptr_WDTTerritory_vftable; /*0x76b777*/
  ComPtr::Set((ComPtr *)a2, v3->q010); /*0x76b783*/
  return a2; /*0x76b78a*/
}
// 0x76B870

// 0x76B9E0

// 0x76BA10

// 0x76BA50

// 0x76BBC0

// 0x7AE730
char VectorClass_flat::Shrink()
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // ecx
  _DWORD *i; // eax

  m_8 = this->m_8; /*0x76b876*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x76b87f*/
  {
    v3 = 0; /*0x76b881*/
    if ( m_8 <= 0 ) /*0x76b885*/
      return 1; /*0x76b8ab*/
    v4 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 4); /*0x76b88d*/
    for ( i = (_DWORD *)(*(_DWORD *)(a2 + 4) + 4); *v4 == *i; i += 2 ) /*0x76b890*/
    {
      ++v3; /*0x76b89b*/
      v4 += 2; /*0x76b89f*/
      if ( v3 >= m_8 ) /*0x76b8a4*/
        return 1; /*0x76b8a4*/
    }
  }
  return 0; /*0x76b8a6*/
}
// 0x7B2890
int VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass::Get(int a2, void *a2_2)
{
  return *(_DWORD *)(*(_DWORD *)&a2_2->m_1[3] + 4 * a2_2); /*0x7b289a*/
}
// 0x7B28A0

// 0x7B28E0

// 0x7B2990

// 0x7B29C0

// 0x7B2A00

// 0x7B2B00

// 0x7B4310
int VectorClass_PAE::Count(int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x7b28a2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x7b28ad*/
  {
    v3 = 0; /*0x7b28af*/
    if ( m_8 <= 0 ) /*0x7b28b3*/
      return 1; /*0x7b28d3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x7b28b5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x7b28bb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x7b28c4*/
    {
      ++v3; /*0x7b28c6*/
      ++v4; /*0x7b28c7*/
      if ( v3 >= m_8 ) /*0x7b28cc*/
        return 1; /*0x7b28cc*/
    }
  }
  return 0; /*0x7b28ce*/
}
// 0x7B4320

// 0x7B4360

// 0x7B4410

// 0x7B4440

// 0x7B4480

// 0x7B4580

// 0x7B4860
bool VectorClass_Wstring::SetCapacity(const char ** a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x7b4322*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x7b432d*/
  {
    v3 = 0; /*0x7b432f*/
    if ( m_8 <= 0 ) /*0x7b4333*/
      return 1; /*0x7b4353*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x7b4335*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x7b433b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x7b4344*/
    {
      ++v3; /*0x7b4346*/
      ++v4; /*0x7b4347*/
      if ( v3 >= m_8 ) /*0x7b434c*/
        return 1; /*0x7b434c*/
    }
  }
  return 0; /*0x7b434e*/
}