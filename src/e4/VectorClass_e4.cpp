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
namespace gamemd { int nullsub_138(void *p_this); }  // x4:ida@0x4e0c30
namespace VectorClass { int CleanupTyped(int p_this); }  // x4:ida@0x4a1330

// 0x4137A0
namespace gamemd {  // G42.18 ns repair
int VectorClass_flat::RemoveObjectById()
{


  VectorClass *v7; // [esp+4h] [ebp-4h] BYREF
  v7 = (gamemd::VectorClass *)(this); /*0x4137a0*/
  if ( !this->u32_2590 ) /*0x4137a1*/
    return 0; /*0x4137ab*/
  VectorClass *v2; // esi
  v2 = (gamemd::VectorClass *)(&this->u32_960); /*0x4137b6*/
  int v3 = this->u32_2580; // eax /*0x4137c3*/
  v7 = (VectorClass *)*this->u32_25801); /*0x4137c7*/
  int v4; // eax
  v4 = (*(int (**)(VectorClass *, VectorClass **))(v3 + 16))(&this->u32_960, &v7); /*0x4137cb*/
  if ( v4 != -1 ) /*0x4137d1*/
  {
    char *vtable0; // ecx
    vtable0 = (char *)v2[1].vtable0; /*0x4137d3*/
    if ( v4 < (int)vtable0 ) /*0x4137d8*/
    {
      char *v6 = vtable0 - 1; // ecx /*0x4137da*/
      for ( v2[1].vtable0 = v6; v4 < (int)v2[1].vtable0; *((unsigned int *)v2->Items + v4 - 1) = *((unsigned int *)v2->Items + v4) ) /*0x4137e0*/
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
  unsigned int *v8; // eax
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
        v8 = (unsigned int *)(v6 + 4 * v5); /*0x65a9b1*/
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
    return (*(int (**)(int *, void *, int, int))(v9 + 404))(v1, v10, v17, v18); /*0x65a9e5*/
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
  (*((void (**)(RadioClass *, int, unsigned int))this->MissionClass + 158))( /*0x65aa1f*/
    this,
    3,
    *(unsigned int *)this->radioLinks[1]);
  v12 = 0; /*0x65aa34*/
  LABEL_20:
  v15 = *v1; /*0x65aa36*/
  v16 = AbstractClass::IsTechnoType((AbstractClass *)this); /*0x65aa41*/
  if ( (*(int (**)(int *, void *, int, int))(v15 + 404))(v1, v16, 2, v18) == 1 ) /*0x65aa52*/
  {
    *(unsigned int *)(this->radioLinks[1] + 4 * v12) = v1; /*0x65aa5a*/
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
  v3 = (*(int (**)(char *, int))(this->u32_28 + 20))this->u32_28, aP1) + 1; /*0x763bb4*/
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

  unsigned int *v5; // edi

  if ( a2 ) /*0x42f6fc*/
  {
    LOBYTE(this->IsInitialized) = 0; /*0x42f706*/
    if ( a3 ) /*0x42f70c*/
    {
      v5 = a3; /*0x42f734*/
    }
    else
    {
      int v4; // eax
      v4 = (int)(__2_YAPAXI_Z(4 * a2)); /*0x42f716*/
      if ( v4 ) /*0x42f720*/
        v5 = (unsigned int *)v4; /*0x42f725*/
      else
        v5 = 0; /*0x42f72d*/
    }
    LOBYTE(this->IsInitialized) = 1; /*0x42f73c*/
    if ( v5 ) /*0x42f740*/
    {
      if ( *&this->Items ) /*0x42f74b*/
      {
        int m_8; // ecx
        m_8 = (int)(this->Capacity); /*0x42f752*/
        if ( a2 < m_8 ) /*0x42f757*/
          m_8 = a2; /*0x42f759*/
        int i; // eax
        for ( i = 0; i < m_8; v5[i - 1] = *(unsigned int *)(*&this->Items + 4 * i - 4) ) /*0x42f75f*/
          ++i; /*0x42f764*/
        if ( BYTE1(this->IsInitialized) ) /*0x42f771*/
        {
          __3_YAXPAX_Z(*&this->Items); /*0x42f77c*/
          *&this->Items = 0; /*0x42f784*/
        }
      }
      *&this->Items = v5; /*0x42f78d*/
      this->Capacity = (void *)(a2); /*0x42f795*/
      BYTE1(this->IsInitialized) = a3 == 0; /*0x42f798*/
      return (gamemd::AbstractClass **)(1); /*0x42f79e*/
    }
    else
    {
      return 0; /*0x42f745*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_VCell *))(*(unsigned int *)this->vfptr + 12))(this); /*0x42f7a8*/
    return (gamemd::AbstractClass **)(1); /*0x42f7ae*/
  }

}
}
// 0x4E0840
namespace gamemd {
AbstractClass * * VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::Release(int a2, int * a3)
{

  int *v6; // edi

  if ( a2 ) /*0x4e084c*/
  {
    int *v4 = a3; // ebx /*0x4e0852*/
    LOBYTE(this->IsInitialized) = 0; /*0x4e0856*/
    if ( a3 ) /*0x4e085c*/
    {
      *a3 = a2; /*0x4e0897*/
      v6 = a3 + 1; /*0x4e089b*/
      if ( a2 - 1 >= 0 ) /*0x4e089e*/
      {
        int *v9 = a3 + 2; // eax /*0x4e08a0*/
        int v10 = a2; // ecx /*0x4e08a3*/
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
      int *v5; // eax
      v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x4e0866*/
      if ( v5 ) /*0x4e0870*/
      {
        *v5 = a2; /*0x4e0875*/
        v6 = v5 + 1; /*0x4e0879*/
        if ( a2 - 1 >= 0 ) /*0x4e087c*/
        {
          unsigned int *v7; // eax
          v7 = (unsigned int *)(v5 + 2); /*0x4e087e*/
          int v8 = a2; // ecx /*0x4e0881*/
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
    LOBYTE(this->IsInitialized) = 1; /*0x4e08b2*/
    if ( v6 ) /*0x4e08b6*/
    {
      if ( *&this->Items ) /*0x4e08c1*/
      {
        int m_8; // ecx
        m_8 = (int)(this->Capacity); /*0x4e08c8*/
        if ( a2 < m_8 ) /*0x4e08cd*/
          m_8 = a2; /*0x4e08cf*/
        int v13 = 0; // eax /*0x4e08d1*/
        if ( m_8 > 0 ) /*0x4e08d5*/
        {
          do /*0x4e08ed*/
          {
            int v14; // edx
            v14 = (int)(*&this->Items); /*0x4e08d7*/
            ++v13; /*0x4e08da*/
            v6[2 * v13 - 2] = *(unsigned int *)(v14 + 8 * v13 - 8); /*0x4e08e1*/
            v6[2 * v13 - 1] = *(unsigned int *)(v14 + 8 * v13 - 4); /*0x4e08e9*/
          }
          while ( v13 < m_8 ); /*0x4e08ed*/
          v4 = a3; /*0x4e08ef*/
        }
        if ( BYTE1(this->IsInitialized) ) /*0x4e08f3*/
        {
          int v15; // eax
          v15 = (int)(*&this->Items); /*0x4e08fa*/
          if ( v15 ) /*0x4e08ff*/
            __3_YAXPAX_Z((void *)(v15 - 4)); /*0x4e0909*/
          *&this->Items = 0; /*0x4e0911*/
        }
      }
      *&this->Items = v6; /*0x4e091a*/
      this->Capacity = (void *)(a2); /*0x4e0922*/
      BYTE1(this->IsInitialized) = v4 == 0; /*0x4e0925*/
      return (gamemd::AbstractClass **)(1); /*0x4e092b*/
    }
    else
    {
      return 0; /*0x4e08bb*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_V_DistributionObject_PAVCellClass_DiscreteDistributionClass_VCellClass *))(*(unsigned int *)this->vfptr + 12))(this); /*0x4e0935*/
    return (gamemd::AbstractClass **)(1); /*0x4e093b*/
  }

}
}
// 0x4E0B10
namespace gamemd {
AbstractClass * * VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::SetCapacity(int a2, int * a3)
{

  int *v6; // edi

  if ( a2 ) /*0x4e0b1c*/
  {
    int *v4 = a3; // ebp /*0x4e0b22*/
    LOBYTE(this->IsInitialized) = 0; /*0x4e0b26*/
    if ( a3 ) /*0x4e0b2c*/
    {
      *a3 = a2; /*0x4e0b67*/
      v6 = a3 + 1; /*0x4e0b6c*/
      if ( a2 - 1 >= 0 ) /*0x4e0b6f*/
      {
        int *v9 = a3 + 2; // eax /*0x4e0b71*/
        int v10 = a2; // ecx /*0x4e0b74*/
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
      int *v5; // eax
      v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x4e0b36*/
      if ( v5 ) /*0x4e0b40*/
      {
        *v5 = a2; /*0x4e0b45*/
        v6 = v5 + 1; /*0x4e0b49*/
        if ( a2 - 1 >= 0 ) /*0x4e0b4c*/
        {
          unsigned int *v7; // eax
          v7 = (unsigned int *)(v5 + 2); /*0x4e0b4e*/
          int v8 = a2; // ecx /*0x4e0b51*/
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
    LOBYTE(this->IsInitialized) = 1; /*0x4e0b83*/
    if ( !v6 ) /*0x4e0b87*/
      return 0; /*0x4e0c27*/
    if ( *&this->Items ) /*0x4e0b8d*/
    {
      int m_8; // ecx
      m_8 = (int)(this->Capacity); /*0x4e0b94*/
      if ( a2 < m_8 ) /*0x4e0b99*/
        m_8 = a2; /*0x4e0b9b*/
      int v12 = 0; // eax /*0x4e0b9d*/
      if ( m_8 > 0 ) /*0x4e0ba1*/
      {
        do /*0x4e0bb9*/
        {
          int v13; // edx
          v13 = (int)(*&this->Items); /*0x4e0ba3*/
          ++v12; /*0x4e0ba6*/
          v6[2 * v12 - 2] = *(unsigned int *)(v13 + 8 * v12 - 8); /*0x4e0bad*/
          v6[2 * v12 - 1] = *(unsigned int *)(v13 + 8 * v12 - 4); /*0x4e0bb5*/
        }
        while ( v12 < m_8 ); /*0x4e0bb9*/
        v4 = a3; /*0x4e0bbb*/
      }
      if ( BYTE1(this->IsInitialized) ) /*0x4e0bbf*/
      {
        int *v14; // eax
        v14 = (int *)(*&this->Items); /*0x4e0bc6*/
        if ( v14 ) /*0x4e0bcb*/
        {
          int *v15 = v14 - 1; // ebp /*0x4e0bd0*/
          Array::ForEachReverse(v14, 8, *(v14 - 1), (int (*)(int))nullsub_138); /*0x4e0bdc*/
          __3_YAXPAX_Z(v15); /*0x4e0be2*/
          v4 = a3; /*0x4e0be7*/
        }
        *&this->Items = 0; /*0x4e0bee*/
      }
    }
    *&this->Items = v6; /*0x4e0bf7*/
    this->Capacity = (void *)(a2); /*0x4e0bff*/
    BYTE1(this->IsInitialized) = v4 == 0; /*0x4e0c02*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_V_DistributionObject_PAVCellClass_DiscreteDistributionClass_VCellClass *))(*(unsigned int *)this->vfptr + 12))(this); /*0x4e0c0b*/
  }
  int v16; // eax
  v16 = (int)(this->Capacity); /*0x4e0c0e*/
  if ( v16 < this->Count ) /*0x4e0c16*/
    this->Count = (void *)(v16); /*0x4e0c18*/
  return (gamemd::AbstractClass **)(1); /*0x4e0c1b*/

}
}
// 0x4A2820
namespace gamemd {
unsigned int * VectorClass_K_8::Constructor(void *a1_1, void *a2_1, void *a3_1, void *a4_1, void *a5_1)
{

  a1_1->CStreamClass_field_0x08 = 0; /*0x4a282a*/
  a1_1->CStreamClass_field_0x0C = 0; /*0x4a282d*/
  LOBYTE(a1_1->CStreamClass_field_0x10) = 0; /*0x4a2830*/
  BYTE1(a1_1->CStreamClass_field_0x10) = 0; /*0x4a2833*/
  a1_1->CStreamClass_field_0x14 = 0; /*0x4a2836*/
  a1_1->CStreamClass_field_0x18 = __2_YAPAXI_Z(0x10000u); /*0x4a2843*/
  a1_1->CStreamClass_field_0x1C = __2_YAPAXI_Z(0x10000u); /*0x4a2850*/
  a1_1->CStreamClass_field_0x20 = __2_YAPAXI_Z(0x10000u); /*0x4a285b*/
  *(unsigned int *)a1_1->__pad_0 = &vt_CStreamClass; /*0x4a285e*/
  a1_1->CStreamClass_field_0x04 = (int)&vt_CStreamClass; /*0x4a2864*/
  a1_1->CStreamClass_field_0x24 = 0xFFFF; /*0x4a286b*/
  return a1_1->__pad_0; /*0x4a2874*/

}
}
// 0x5AD010
namespace gamemd {
AbstractClass * * VectorClass_Ptr::ResizeAndCopy(int a2, unsigned int * a3)
{


  if ( a2 ) /*0x5ad01c*/
  {
    LOBYTE(this->u32_C) = 0; /*0x5ad022*/
    unsigned int *v4; // edi
    if ( a3 ) /*0x5ad028*/
      v4 = a3; /*0x5ad03e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x5ad03a*/
    LOBYTE(this->u32_C) = 1; /*0x5ad042*/
    if ( !v4 ) /*0x5ad046*/
      return 0; /*0x5ad0ba*/
    if ( *&this->ptr_4 ) /*0x5ad048*/
    {
      int v5; // ecx
      v5 = (int)(*&this->ptr_8); /*0x5ad04f*/
      if ( a2 < v5 ) /*0x5ad054*/
        v5 = a2; /*0x5ad056*/
      int i; // eax
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*&this->ptr_4 + 4 * i - 4) ) /*0x5ad05c*/
        ++i; /*0x5ad061*/
      if ( BYTE1(this->u32_C) ) /*0x5ad06e*/
      {
        __3_YAXPAX_Z(*&this->ptr_4); /*0x5ad079*/
        *&this->ptr_4 = 0; /*0x5ad081*/
      }
    }
    *&this->ptr_4 = (gamemd::AbstractClass *)(v4); /*0x5ad08a*/
    *&this->ptr_8 = (gamemd::AbstractClass *)(a2); /*0x5ad092*/
    BYTE1(this->u32_C) = a3 == 0; /*0x5ad095*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PAVCellClass *))(*(unsigned int *)this->u32_C + 12))(this); /*0x5ad09e*/
  }
  int v7; // eax
  v7 = (int)(*&this->ptr_8); /*0x5ad0a1*/
  if ( v7 < *(unsigned int *)this->ptr_10 ) /*0x5ad0a9*/
    *(unsigned int *)this->ptr_10 = v7; /*0x5ad0ab*/
  return (gamemd::AbstractClass **)(1); /*0x5ad0ae*/

}
}
// 0x4A0C20
namespace gamemd {
unsigned int * VectorClass_ptr_BuildChoiceClass_int_ouseClass::Constructor(EnumConnectionPointsClass * aP1, void *a2_1, void *a3_1, void *a4)
{


  char *p_IsInitialized; // esi
  p_IsInitialized = (char *)(&aP1->IsInitialized); /*0x4a0c2c*/
  aP1->Items = 0; /*0x4a0c2f*/
  aP1->Capacity = 0; /*0x4a0c32*/
  aP1->Count = 0; /*0x4a0c37*/
  aP1->CapacityIncrement[0] = 0; /*0x4a0c3a*/
  aP1->q018 = 1; /*0x4a0c3d*/
  aP1->u32_19 = 0; /*0x4a0c41*/
  *&aP1->IsInitialized = &vt_VectorClass; /*0x4a0c44*/
  if ( &aP1->IsInitialized != (char *)a2_1 ) /*0x4a0c4a*/
  {
    VectorClass::CleanupTyped((int)&aP1->IsInitialized); /*0x4a0c4e*/
    int v4; // eax
    v4 = a2_1[2]; /*0x4a0c54*/
    *((unsigned int *)p_IsInitialized + 2) = v4; /*0x4a0c59*/
    if ( v4 ) /*0x4a0c5c*/
    {
      int v5; // eax
      v5 = (int)(__2_YAPAXI_Z(4 * v4)); /*0x4a0c62*/
      *((unsigned int *)p_IsInitialized + 1) = v5; /*0x4a0c6c*/
      if ( v5 ) /*0x4a0c6f*/
      {
        int v6; // ecx
        v6 = *((unsigned int *)p_IsInitialized + 2); /*0x4a0c71*/
        int v7 = 0; // eax /*0x4a0c74*/
        p_IsInitialized[13] = 1; /*0x4a0c78*/
        if ( v6 > 0 ) /*0x4a0c7c*/
        {
          do /*0x4a0c90*/
          {
            *(unsigned int *)(*((unsigned int *)p_IsInitialized + 1) + 4 * v7) = *(unsigned int *)(a2_1[1] + 4 * v7); /*0x4a0c87*/
            ++v7; /*0x4a0c8d*/
          }
          while ( v7 < *((unsigned int *)p_IsInitialized + 2) ); /*0x4a0c90*/
        }
      }
    }
    else
    {
      *((unsigned int *)p_IsInitialized + 1) = 0; /*0x4a0c94*/
      p_IsInitialized[13] = 0; /*0x4a0c97*/
    }
  }
  *((unsigned int *)p_IsInitialized + 4) = a2_1[4]; /*0x4a0c9d*/
  *((unsigned int *)p_IsInitialized + 5) = a2_1[5]; /*0x4a0ca3*/
  *(unsigned int *)p_IsInitialized = (unsigned int)(&vt_DynamicVectorClass); /*0x4a0ca6*/
  /* X11: vtable install elided (implicit via EnumConnectionPointsClass virtuals 0x4a0cac) */
  int i; // esi
  for ( i = 0; i < *&aP1->q01C; ++i ) /*0x4a0cb9*/
  {
    int v10; // [esp-4h] [ebp-14h]
    v10 = *((unsigned int *)aP1->Count + i); /*0x4a0cc1*/
    (*(void (**)(int))(*(unsigned int *)v10 + 4))(v10); /*0x4a0cc4*/
  }
  return aP1->__pad_0; /*0x4a0cd1*/

}
}
// 0x4F6A20
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::SetCapacity(int a1, int a2)
{

  int v2 = 0; // edi /*0x4f6a27*/
  int v3 = 0; // esi /*0x4f6a29*/
  if ( *(int *)&((unsigned int *)&stru_A8EB00)[164] <= 0 ) /*0x4f6a2d*/
    return 0; /*0x4f6a71*/
  do /*0x4f6a66*/
  {
    HouseClass **v4; // ecx
    v4 = *(HouseClass ***)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[152] + 4 * v3); /*0x4f6a42*/
    if ( v4[135] == (HouseClass *)((char *)a1 - 36) /*0x4f6a5b*/
      && *(unsigned int *)(((int (__thiscall *)(HouseClass **))(*v4)->occupiablesCount)(v4) + 956) == a2 )
    {
      ++v2; /*0x4f6a5d*/
    }
    ++v3; /*0x4f6a63*/
  }
  while ( v3 < *(int *)&((unsigned int *)&stru_A8EB00)[164] ); /*0x4f6a66*/
  return v2; /*0x4f6a6c*/
}
}
// 0x4F6A80
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::SetCapacity_0(int a1, int a2)
{

  int v2 = 0; // edi /*0x4f6a87*/
  int v3 = 0; // esi /*0x4f6a89*/
  if ( dword_A8EC88 <= 0 ) /*0x4f6a8d*/
    return 0; /*0x4f6ad1*/
  do /*0x4f6ac6*/
  {
    unsigned int *v4; // ecx
    v4 = (unsigned int *)*((unsigned int *)dword_A8EC7C + v3); /*0x4f6aa2*/
    int v6; // [esp+10h] [ebp+8h]
    if ( v4[135] == a2 - 40 && *(unsigned int *)((*(int (**)(unsigned int *))(*v4 + 132))(v4) + 956) == v6 ) /*0x4f6abb*/
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

  int v2 = 0; // ebp /*0x4f6ae7*/
  int v3 = 0; // edi /*0x4f6ae9*/
  if ( *(int *)&((unsigned int *)&stru_A8EB00)[164] <= 0 ) /*0x4f6aed*/
    return 0; /*0x4f6b44*/
  do /*0x4f6b39*/
  {
    HouseClass **v4; // esi
    v4 = *(HouseClass ***)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[152] + 4 * v3); /*0x4f6afe*/
    unsigned int *v5; // eax
    v5 = (int (__thiscall *)(gamemd::HouseClass **))((unsigned int *)((int (__thiscall *)(HouseClass **))(*v4)->occupiablesCount)(v4)); /*0x4f6b05*/
    if ( v4[135] == (HouseClass *)((char *)a1 - 36) && v5[239] == a2 ) /*0x4f6b1f*/
      v2 += v5[412] + v5[413]; /*0x4f6b2f*/
    ++v3; /*0x4f6b36*/
  }
  while ( v3 < *(int *)&((unsigned int *)&stru_A8EB00)[164] ); /*0x4f6b39*/
  return v2; /*0x4f6b3f*/
}
}
// 0x4F6B50
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::SetCapacity_2(int a1, int a2)
{

  int v2 = 0; // ebp /*0x4f6b57*/
  int v3 = 0; // edi /*0x4f6b59*/
  if ( dword_A8EC88 <= 0 ) /*0x4f6b5d*/
    return 0; /*0x4f6bb4*/
  do /*0x4f6ba9*/
  {
    unsigned int *v4; // esi
    v4 = (unsigned int *)*((unsigned int *)dword_A8EC7C + v3); /*0x4f6b6e*/
    unsigned int *v5; // eax
    v5 = (unsigned int *)(*(int (**)(unsigned int *))(*v4 + 132))(v4); /*0x4f6b75*/
    int v7; // [esp+10h] [ebp+8h]
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
  int v4; // eax
  int v5; // eax
  int v10; // eax
  int v16; // [esp+10h] [ebp-18h]
  int v17; // [esp+14h] [ebp-14h]
  int v18; // [esp+18h] [ebp-10h]
  unsigned char v19[12]; // [esp+1Ch] [ebp-Ch] BYREF

  uint16_t v2; // cx
  v2 = *(unsigned short *)&((unsigned int *)&stru_A8EB00)[948]; /*0x4f6bc0*/
  uint16_t v3; // di
  v3 = *(unsigned short *)&((unsigned int *)&stru_A8EB00)[950]; /*0x4f6bcf*/
  if ( (*((unsigned short *)&(a1->killedBuildingsOfHouses[15]))) == *(unsigned short *)&((unsigned int *)&stru_A8EB00)[948] /*0x4f6be6*/
    && (*(((unsigned short *)&(a1->killedBuildingsOfHouses[15])) + 1)) == *(unsigned short *)&((unsigned int *)&stru_A8EB00)[950] )
  {
    v4 = a1->killedBuildingsOfHouses[14]; /*0x4f6be8*/
  }
  else
  {
    v4 = a1->killedBuildingsOfHouses[15]; /*0x4f6bf0*/
  }
  int16_t v14[2]; // [esp+8h] [ebp-20h] BYREF
  *(unsigned int *)v14 = v4; /*0x4f6bfd*/
  if ( v4 == *(unsigned int *)&((unsigned int *)&stru_A8EB00)[948] ) /*0x4f6c01*/
  {
    v5 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[1044]; /*0x4f6c10*/
    v17 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[1048]; /*0x4f6c15*/
    v18 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[1052]; /*0x4f6c1f*/
  }
  else
  {
    void *v6; // eax
    v6 = ((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj(v14); /*0x4f6c2f*/
    int *v7; // edx
    v7 = (int *)(*(int (**)(void *, unsigned char *))(*(unsigned int *)v6 + 72))(v6, v19); /*0x4f6c40*/
    v3 = *(unsigned short *)&((unsigned int *)&stru_A8EB00)[950]; /*0x4f6c42*/
    v5 = *v7; /*0x4f6c49*/
    v17 = v7[1]; /*0x4f6c4e*/
    v2 = *(unsigned short *)&((unsigned int *)&stru_A8EB00)[948]; /*0x4f6c52*/
    v18 = v7[2]; /*0x4f6c5b*/
  }
  bool v8; // zf
  v8 = (*((unsigned short *)&(a1->killedBuildingsOfHouses[15]))) == v2; /*0x4f6c6b*/
  v14[0] = v5 / 256; /*0x4f6c72*/
  int v9; // esi
  if ( v8 && (*(((unsigned short *)&(a1->killedBuildingsOfHouses[15])) + 1)) == v3 ) /*0x4f6c80*/
    v9 = a1->killedBuildingsOfHouses[14]; /*0x4f6c82*/
  else
    v9 = a1->killedBuildingsOfHouses[15]; /*0x4f6c8a*/
  int16_t v15[2]; // [esp+Ch] [ebp-1Ch] BYREF
  *(unsigned int *)v15 = v9; /*0x4f6c97*/
  if ( v9 == (((unsigned int)(unsigned short)(v2)) | ((unsigned int)(unsigned short)(v3) << 16)) ) /*0x4f6c9b*/
  {
    v16 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[1044]; /*0x4f6caf*/
    v10 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[1048]; /*0x4f6cb3*/
  }
  else
  {
    void *v11; // eax
    v11 = ((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj(v15); /*0x4f6cc4*/
    int *v12; // edx
    v12 = (int *)(*(int (**)(void *, unsigned char *))(*(unsigned int *)v11 + 72))(v11, v19); /*0x4f6cd5*/
    v16 = *v12; /*0x4f6cd9*/
    v10 = v12[1]; /*0x4f6cdd*/
  }
  v14[1] = v10 / 256; /*0x4f6cf4*/
  *a2 = *(unsigned int *)v14; /*0x4f6d02*/
  return a2; /*0x4f6cea*/
}
}
// 0x4F6D10
namespace gamemd {
unsigned int * VectorClass_ptr_BuildChoiceClass_int_ouseClass::SetCapacity_4(int a1, unsigned int * a2)
{
  int v4; // eax
  int v9; // eax
  int v15; // [esp+10h] [ebp-18h]
  int v16; // [esp+14h] [ebp-14h]
  int v17; // [esp+18h] [ebp-10h]
  unsigned char v18[12]; // [esp+1Ch] [ebp-Ch] BYREF

  int v2 = dword_A8EF98; // kr08_4 /*0x4f6d1f*/
  int v3; // eax
  if ( a2[5403] == dword_A8EF98 ) /*0x4f6d2d*/
    v3 = a2[5402]; /*0x4f6d38*/
  else
    v3 = a2[5403]; /*0x4f6d40*/
  int16_t v13[2]; // [esp+8h] [ebp-20h] BYREF
  *(unsigned int *)v13 = v3; /*0x4f6d4d*/
  if ( v3 == dword_A8EF98 ) /*0x4f6d51*/
  {
    v4 = dword_A8EFF8; /*0x4f6d60*/
    v16 = dword_A8EFFC; /*0x4f6d65*/
    v17 = dword_A8F000; /*0x4f6d6f*/
  }
  else
  {
    void *v5; // eax
    v5 = ((CellCoord *)((CellCoord *)&dword_87F7E8))->To_CellObj(v13); /*0x4f6d7f*/
    int *v6; // edx
    v6 = (int *)(*(int (**)(void *, unsigned char *))(*(unsigned int *)v5 + 72))(v5, v18); /*0x4f6d90*/
    v4 = *v6; /*0x4f6d99*/
    v16 = v6[1]; /*0x4f6d9e*/
    v17 = v6[2]; /*0x4f6dab*/
    v2 = dword_A8EF98; /*0x4f6dab*/
  }
  bool v7; // zf
  v7 = *((unsigned short *)a2 + 10806) == (uint16_t)v2; /*0x4f6dbb*/
  v13[0] = v4 / 256; /*0x4f6dc2*/
  int v8; // esi
  if ( v7 && *((unsigned short *)a2 + 10807) == (*(((unsigned short *)&(v2)) + 1)) ) /*0x4f6dd0*/
    v8 = a2[5402]; /*0x4f6dd2*/
  else
    v8 = a2[5403]; /*0x4f6dda*/
  int16_t v14[2]; // [esp+Ch] [ebp-1Ch] BYREF
  *(unsigned int *)v14 = v8; /*0x4f6de7*/
  if ( v8 == v2 ) /*0x4f6deb*/
  {
    v15 = dword_A8EFF8; /*0x4f6dff*/
    v9 = dword_A8EFFC; /*0x4f6e03*/
  }
  else
  {
    void *v10; // eax
    v10 = ((CellCoord *)((CellCoord *)&dword_87F7E8))->To_CellObj(v14); /*0x4f6e14*/
    int *v11; // edx
    v11 = (int *)(*(int (**)(void *, unsigned char *))(*(unsigned int *)v10 + 72))(v10, v18); /*0x4f6e25*/
    v15 = *v11; /*0x4f6e29*/
    v9 = v11[1]; /*0x4f6e2d*/
  }
  v13[1] = v9 / 256; /*0x4f6e44*/
  unsigned int *v19; // [esp+30h] [ebp+8h]
  *v19 = *(unsigned int *)v13; /*0x4f6e52*/
  return v19; /*0x4f6e3a*/
}
}
// 0x501400
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::SetCapacity_5(int a1)
{

  int v1; // edi
  v1 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[164] - 1; /*0x501409*/
  if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[164] - 1 < 0 ) /*0x50140e*/
  {
    (((unsigned char *)&(a1->planningPaths[5]))[1]) = 1; /*0x501532*/
    return 0; /*0x50152f*/
  }
  else
  {
    do /*0x50150f*/
    {
      BuildingClass *v2; // esi
      v2 = *(BuildingClass **)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[152] + 4 * v1); /*0x501423*/
      if ( (HouseClass *)((char *)a1 - 36) == v2->owner && v2->isOnMap && !v2->inLimbo ) /*0x50143d*/
      {
        if ( v2->mindControlledBy_a_unit /*0x50146d*/
          && *(unsigned char *)((*((int (**)(unsigned int))v2->vfptr + 33))(*(unsigned int *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[152]
          + 4 * v1))
        + 562)
          && !a1->__pad_13C[140] )
        {
          int v3; // eax
          v3 = (*((int (**)(BuildingClass *))v2->vfptr + 33))(v2); /*0x50147b*/
          void *vtable0 = v2->vfptr; // edx /*0x501487*/
          int v7; // [esp+8h] [ebp-4h] BYREF
          v7 = *(unsigned int *)(v3 + 160); /*0x501489*/
          (*((void (**)(BuildingClass *, int *, unsigned int, unsigned int, unsigned int, int, int, unsigned int))vtable0 + 91))( /*0x5014aa*/
            v2,
            &v7,
            0,
            *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 4008),
            0,
            1,
            1,
            0);
        }
        else if ( v2 ) /*0x5014b4*/
        {
          if ( (v2->abstractFlags & 4) != 0 ) /*0x5014c3*/
          {
            int *v5; // ecx
            v5 = (int *)v2->DamageFireAnims[3]; /*0x5014c5*/
            if ( v5 ) /*0x5014cd*/
              (v5)->LiberateMember_Start((int)v2, 0xFFFFFFFF, 0); /*0x5014d4*/
            (*((void (**)(BuildingClass *, int, unsigned int))v2->vfptr + 122))(v2, 15, 0); /*0x5014e1*/
          }
          else if ( (*((int (**)(BuildingClass *))v2->vfptr + 11))(v2) == 6 /*0x501501*/
                 && (*((int (**)(BuildingClass *))v2->vfptr + 258))(v2) > 0 )
          {
            (v2)->UnloadUnits(1, 0); /*0x501509*/
          }
        }
      }
      --v1; /*0x50150e*/
    }
    while ( v1 >= 0 ); /*0x50150f*/
    (((unsigned char *)&(a1->planningPaths[5]))[1]) = 1; /*0x50151c*/
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


  if ( a2 ) /*0x50f66c*/
  {
    this->IsInitialized = 0; /*0x50f672*/
    unsigned int *v4; // edi
    if ( a3 ) /*0x50f678*/
      v4 = a3; /*0x50f68e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x50f68a*/
    this->IsInitialized = (void *)(1); /*0x50f692*/
    if ( !v4 ) /*0x50f696*/
      return 0; /*0x50f70a*/
    if ( this->Items ) /*0x50f698*/
    {
      void *Capacity; // ecx
      Capacity = this->Capacity; /*0x50f69f*/
      if ( a2 < (int)Capacity ) /*0x50f6a4*/
        Capacity = (void *)a2; /*0x50f6a6*/
      int i; // eax
      for ( i = 0; i < (int)Capacity; v4[i - 1] = *((unsigned int *)this->Items + i - 1) ) /*0x50f6ac*/
        ++i; /*0x50f6b1*/
      if ( this->IsAllocated ) /*0x50f6be*/
      {
        __3_YAXPAX_Z(this->Items); /*0x50f6c9*/
        this->Items = 0; /*0x50f6d1*/
      }
    }
    this->Items = v4; /*0x50f6da*/
    this->Capacity = (void *)a2; /*0x50f6e2*/
    this->IsAllocated = a3 == 0; /*0x50f6e5*/
  }
  else
  {
    (*(void (**)(VectorClass_ptr_BuildChoiceClass_int_ouseClass *))(*(unsigned int *)this->vfptr + 12))(this); /*0x50f6ee*/
  }
  void *v7 = this->Capacity; // eax /*0x50f6f1*/
  if ( (int)v7 < (int)this->Count ) /*0x50f6f9*/
    this->Count = v7; /*0x50f6fb*/
  return (gamemd::AbstractClass **)(1); /*0x50f6fe*/

}
}
// 0x6288F0
namespace gamemd {
AbstractClass * * VectorClass_ptr_ColorScheme::SetCapacity_0(CCINIClass * aP1, unsigned char * a2)
{

  char *v15; // [esp+10h] [ebp-8h]

  int v3; // edi
  v3 = (int)(aP1); /*0x6288f7*/
  if ( aP1 ) /*0x6288ff*/
  {
    Byte *v5; // esi
    v5 = (Byte *)a2; /*0x628905*/
    LOBYTE(this->IsInitialized) = 0; /*0x628909*/
    if ( a2 ) /*0x62890f*/
    {
      if ( aP1 - 1 >= 0 ) /*0x628965*/
      {
        int v8; // ebx
        v8 = (int)(aP1); /*0x628967*/
        do /*0x628978*/
        {
          (v5)->Zero(); /*0x62896c*/
          v5 += 65; /*0x628971*/
          --v8; /*0x628977*/
        }
        while ( v8 ); /*0x628978*/
      }
      v15 = (char *)(a2); /*0x62897e*/
    }
    else
    {
      int v6; // ebx
      v6 = __2_YAPAXI_Z(260 * aP1); /*0x628921*/
      if ( v6 ) /*0x628928*/
      {
        Byte *v7; // esi
        v7 = (Byte *)v6; /*0x62892d*/
        if ( aP1 - 1 >= 0 ) /*0x628931*/
        {
          int v14; // [esp+10h] [ebp-8h]
          v14 = (int)(aP1); /*0x628934*/
          do /*0x62894e*/
          {
            (v7)->Zero(); /*0x62893a*/
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
    LOBYTE(this->IsInitialized) = 1; /*0x628986*/
    if ( v15 ) /*0x62898c*/
    {
      if ( *&this->Items ) /*0x62899a*/
      {
        int m_8; // eax
        m_8 = (int)(this->Capacity); /*0x6289a1*/
        if ( aP1 < m_8 ) /*0x6289a6*/
          m_8 = (int)(aP1); /*0x6289a8*/
        if ( m_8 > 0 ) /*0x6289ac*/
        {
          int v11 = 0; // ebx /*0x6289ae*/
          char *v12 = v15; // edi /*0x6289b0*/
          int v16; // [esp+14h] [ebp-4h]
          v16 = m_8; /*0x6289b2*/
          do /*0x6289e4*/
          {
            int v13 = v11 + *&this->Items; // esi /*0x6289bb*/
            String::CopyChecked(v12, (const char *)v13); /*0x6289be*/
            v12->q100 = *(unsigned int *)(v13 + 256); /*0x6289cd*/
            v11 += 260; /*0x6289d3*/
            v12 += 260; /*0x6289d9*/
            --v16; /*0x6289e0*/
          }
          while ( v16 ); /*0x6289e4*/
          v3 = aP1; /*0x6289e6*/
        }
        if ( BYTE1(this->IsInitialized) ) /*0x6289ea*/
        {
          __3_YAXPAX_Z(*&this->Items); /*0x6289f5*/
          *&this->Items = 0; /*0x6289fd*/
        }
      }
      *&this->Items = v15; /*0x628a0a*/
      this->Capacity = v3; /*0x628a13*/
      BYTE1(this->IsInitialized) = a2 == 0; /*0x628a1a*/
      return 1; /*0x628a1f*/
    }
    else
    {
      return 0; /*0x628991*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_U_HashObject_VHashString_PAVSchemeNode *))(*(unsigned int *)this->vfptr + 12))(this); /*0x628a2d*/
    return 1; /*0x628a33*/
  }

}
}
// 0x491210
namespace gamemd {
void * VectorClass_ptr_ConvertClass::Constructor_ConvertClass(void ** Block, char a2)
{

  *(unsigned int *)Block->tail_0 = &vt_ConvertClass; /*0x491214*/
  COMClass::RegisterAll((COMClass *)Block); /*0x49121a*/
  operator delete((void *)(*((void **)Block + 92))); /*0x491226*/
  void *v3; // ecx
  v3 = (void *)*((unsigned int *)Block + 94); /*0x49122b*/
  *((unsigned int *)Block + 92) = 0; /*0x491231*/
  operator delete((void *)(v3)); /*0x49123c*/
  *((unsigned int *)Block + 94) = 0; /*0x491244*/
  VectorClass_ptr_ConvertClass *v6; // [esp+4h] [ebp-4h] BYREF
  v6 = Block; /*0x49125d*/
  int v4; // eax
  v4 = (*(int (**)(int *, VectorClass_ptr_ConvertClass **))(dword_89ECF8 + 16))(&dword_89ECF8, &v6); /*0x491261*/
  if ( v4 != -1 && v4 < dword_89ED08 && v4 < --dword_89ED08 ) /*0x49127c*/
  {
    do /*0x491294*/
    {
      ++v4; /*0x491284*/
      *((unsigned int *)dword_89ECFC + v4 - 1) = *((unsigned int *)dword_89ECFC + v4); /*0x491288*/
    }
    while ( v4 < dword_89ED08 ); /*0x491294*/
  }
  if ( (a2 & 1) != 0 ) /*0x49129b*/
    operator delete((void *)(Block)); /*0x49129e*/
  return (void **)Block; /*0x4912a8*/
}
}
// 0x4E1960
namespace gamemd {
void VectorClass_ptr_ConvertClass::MarkDirty()
{

  this->__pad_01C = 1; /*0x4e1960*/
  int result; // eax
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

  void *v3; // edi
  char *v5; // esi
  int v6; // ebx
  char *v7; // ebx
  int v8; // ebx
  char *Capacity; // edx
  int v10; // eax
  char *v11; // edi
  char *v12; // esi
  void *v13; // eax
  char *v15; // [esp+10h] [ebp-4h]

  v3 = (void *)aP1; /*0x6dc855*/
  if ( !aP1 ) /*0x6dc85d*/
  {
    (*(void (**)(VectorClass_UDirtyAreaStruct *))(*(unsigned int *)this->vfptr + 12))(this); /*0x6dc94a*/
    goto LABEL_26; /*0x6dc94a*/
  }
  v5 = a2; /*0x6dc863*/
  this->IsInitialized = 0; /*0x6dc867*/
  if ( a2 ) /*0x6dc86d*/
  {
    if ( aP1 - 1 >= 0 ) /*0x6dc8ba*/
    {
      v8 = aP1; /*0x6dc8bc*/
      do /*0x6dc8d6*/
      {
        ((Rect *)v5)->Set(0, 0, 0, 0); /*0x6dc8c9*/
        v5->ptr_10 = 0; /*0x6dc8ce*/
        v5 += 20; /*0x6dc8d2*/
        --v8; /*0x6dc8d5*/
      }
      while ( v8 ); /*0x6dc8d6*/
      v5 = a2; /*0x6dc8d8*/
    }
    goto LABEL_13; /*0x6dc8d8*/
  }
  v5 = (char *)__2_YAPAXI_Z(20 * aP1); /*0x6dc87b*/
  v15 = v5; /*0x6dc882*/
  if ( v5 ) /*0x6dc886*/
  {
    if ( aP1 - 1 >= 0 ) /*0x6dc88d*/
    {
      v6 = aP1; /*0x6dc88f*/
      do /*0x6dc8a9*/
      {
        ((Rect *)v5)->Set(0, 0, 0, 0); /*0x6dc89c*/
        v5->ptr_10 = 0; /*0x6dc8a1*/
        v5 += 20; /*0x6dc8a5*/
        --v6; /*0x6dc8a8*/
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
    Capacity = (char *)this->Capacity; /*0x6dc8ed*/
    if ( aP1 < (int)Capacity ) /*0x6dc8f2*/
      Capacity = (char *)aP1; /*0x6dc8f4*/
    if ( (int)Capacity > 0 ) /*0x6dc8f8*/
    {
      v10 = 0; /*0x6dc8fa*/
      do /*0x6dc90f*/
      {
        v11 = &v7[v10]; /*0x6dc8ff*/
        v12 = (char *)this->Items + v10; /*0x6dc902*/
        v10 += 20; /*0x6dc909*/
        --Capacity; /*0x6dc90c*/
        memcpy(v11, v12, 0x14u); /*0x6dc90d*/
      }
      while ( Capacity ); /*0x6dc90f*/
      v3 = (void *)aP1; /*0x6dc911*/
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
  if ( (int)v13 < (int)this->Count ) /*0x6dc955*/
    this->Count = v13; /*0x6dc957*/
  return 1; /*0x6dc95a*/

}
}
// 0x6B44A0
namespace gamemd {
AbstractClass * * VectorClass_UUndoInfoStruct::Release(int a2, unsigned int * a3)
{

  int v3; // ebp
  unsigned int *v5; // eax
  unsigned int *v6; // ecx
  int v7; // edx
  unsigned int *v8; // edi
  int v9; // ecx
  int m_8; // ecx
  int v12; // eax
  unsigned int *v13; // ebx
  unsigned int *v14; // edx

  v3 = a2; /*0x6b44a2*/
  if ( !a2 ) /*0x6b44ae*/
  {
    (*(void (**)(_VectorClass_UUndoInfoStruct *))(*(unsigned int *)this->vfptr + 12))(this); /*0x6b4591*/
    return 1; /*0x6b4597*/
  }
  v5 = a3; /*0x6b44b4*/
  LOBYTE(this->IsInitialized) = 0; /*0x6b44b8*/
  if ( a3 ) /*0x6b44bd*/
  {
    if ( a2 - 1 >= 0 ) /*0x6b44f8*/
    {
      v9 = a2; /*0x6b44fe*/
      do /*0x6b450b*/
      {
        *v5 = 0; /*0x6b44ff*/
        v5->vtable2 = 0; /*0x6b4501*/
        v5->vtable3 = 0; /*0x6b4504*/
        v5 += 3; /*0x6b4507*/
        --v9; /*0x6b450a*/
      }
      while ( v9 ); /*0x6b450b*/
      v5 = a3; /*0x6b450d*/
    }
  }
  else
  {
    v5 = (unsigned int *)__2_YAPAXI_Z(12 * a2); /*0x6b44c7*/
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
        v6->vtable2 = 0; /*0x6b44e1*/
        v6->vtable3 = 0; /*0x6b44e4*/
        v6 += 3; /*0x6b44e7*/
        --v7; /*0x6b44ea*/
      }
      while ( v7 ); /*0x6b44eb*/
    }
  }
  v8 = v5; /*0x6b4511*/
  LABEL_14:
  LOBYTE(this->IsInitialized) = 1; /*0x6b4513*/
  if ( !v8 ) /*0x6b4519*/
    return 0; /*0x6b451e*/
  if ( *&this->Items ) /*0x6b4524*/
  {
    m_8 = this->Capacity; /*0x6b4529*/
    if ( a2 < m_8 ) /*0x6b452e*/
      m_8 = a2; /*0x6b4530*/
    if ( m_8 > 0 ) /*0x6b4534*/
    {
      v12 = 0; /*0x6b4536*/
      do /*0x6b4554*/
      {
        v13 = &v8[v12]; /*0x6b453b*/
        v14 = (unsigned int *)(v12 * 4 + *&this->Items); /*0x6b453e*/
        v12 += 3; /*0x6b4540*/
        --m_8; /*0x6b4543*/
        *v13 = *v14; /*0x6b4546*/
        v13[1] = v14[1]; /*0x6b454b*/
        v13[2] = v14[2]; /*0x6b4551*/
      }
      while ( m_8 ); /*0x6b4554*/
      v3 = a2; /*0x6b4556*/
    }
    if ( BYTE1(this->IsInitialized) ) /*0x6b455c*/
    {
      __3_YAXPAX_Z(*&this->Items); /*0x6b4565*/
      *&this->Items = 0; /*0x6b456d*/
    }
  }
  *&this->Items = v8; /*0x6b4578*/
  this->Capacity = v3; /*0x6b457e*/
  BYTE1(this->IsInitialized) = a3 == 0; /*0x6b4581*/
  return 1; /*0x6b451b*/

}
}
// 0x6B4650
namespace gamemd {
AbstractClass * * VectorClass_UUndoInfoStruct::SetCapacity(int a2, unsigned int * a3)
{

  int v3; // ebp
  unsigned int *v5; // eax
  unsigned int *v6; // ecx
  int v7; // edx
  unsigned int *v8; // edi
  int v9; // ecx
  int m_8; // ecx
  int v11; // eax
  unsigned int *v12; // ebx
  unsigned int *v13; // edx
  int v14; // eax

  v3 = a2; /*0x6b4652*/
  if ( !a2 ) /*0x6b465e*/
  {
    (*(void (**)(_DynamicVectorClass_UUndoInfoStruct *))(*(unsigned int *)this->vfptr + 12))(this); /*0x6b4731*/
    goto LABEL_26; /*0x6b4731*/
  }
  v5 = a3; /*0x6b4664*/
  LOBYTE(this->IsInitialized) = 0; /*0x6b4668*/
  if ( a3 ) /*0x6b466d*/
  {
    if ( a2 - 1 >= 0 ) /*0x6b46a8*/
    {
      v9 = a2; /*0x6b46ae*/
      do /*0x6b46bb*/
      {
        *v5 = 0; /*0x6b46af*/
        v5->vtable2 = 0; /*0x6b46b1*/
        v5->vtable3 = 0; /*0x6b46b4*/
        v5 += 3; /*0x6b46b7*/
        --v9; /*0x6b46ba*/
      }
      while ( v9 ); /*0x6b46bb*/
      v5 = a3; /*0x6b46bd*/
    }
    goto LABEL_13; /*0x6b46bd*/
  }
  v5 = (unsigned int *)__2_YAPAXI_Z(12 * a2); /*0x6b4677*/
  if ( v5 ) /*0x6b4681*/
  {
    v6 = v5; /*0x6b4686*/
    if ( a2 - 1 >= 0 ) /*0x6b468a*/
    {
      v7 = a2; /*0x6b468e*/
      do /*0x6b469b*/
      {
        *v6 = 0; /*0x6b468f*/
        v6->vtable2 = 0; /*0x6b4691*/
        v6->vtable3 = 0; /*0x6b4694*/
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
  LOBYTE(this->IsInitialized) = 1; /*0x6b46c3*/
  if ( !v8 ) /*0x6b46c9*/
    return 0; /*0x6b474d*/
  if ( *&this->Items ) /*0x6b46cb*/
  {
    m_8 = this->Capacity; /*0x6b46d0*/
    if ( a2 < m_8 ) /*0x6b46d5*/
      m_8 = a2; /*0x6b46d7*/
    if ( m_8 > 0 ) /*0x6b46db*/
    {
      v11 = 0; /*0x6b46dd*/
      do /*0x6b46fb*/
      {
        v12 = &v8[v11]; /*0x6b46e2*/
        v13 = (unsigned int *)(v11 * 4 + *&this->Items); /*0x6b46e5*/
        v11 += 3; /*0x6b46e7*/
        --m_8; /*0x6b46ea*/
        *v12 = *v13; /*0x6b46ed*/
        v12[1] = v13[1]; /*0x6b46f2*/
        v12[2] = v13[2]; /*0x6b46f8*/
      }
      while ( m_8 ); /*0x6b46fb*/
      v3 = a2; /*0x6b46fd*/
    }
    if ( BYTE1(this->IsInitialized) ) /*0x6b4703*/
    {
      __3_YAXPAX_Z(*&this->Items); /*0x6b470c*/
      *&this->Items = 0; /*0x6b4714*/
    }
  }
  *&this->Items = v8; /*0x6b471f*/
  this->Capacity = v3; /*0x6b4725*/
  BYTE1(this->IsInitialized) = a3 == 0; /*0x6b4728*/
  LABEL_26:
  v14 = this->Capacity; /*0x6b4734*/
  if ( v14 < this->Count ) /*0x6b473c*/
    this->Count = v14; /*0x6b473e*/
  return 1; /*0x6b4741*/

}
}
// 0x40B120
namespace gamemd {  // G42.18c ns repair
int VectorClass_flat::Clear(int a2, int a3)
{


  int v3 = *&this->u32_4; // eax /*0x40b120*/
  int v4; // edx
  v4 = *(unsigned int *)(v3 + 8 * a3); /*0x40b127*/
  int v5 = v3 + 8 * a3; // ecx /*0x40b12a*/
  *(unsigned int *)a2 = v4; /*0x40b131*/
  a2->u32_4 = *(unsigned char *)(v5 + 4); /*0x40b136*/
  return a2; /*0x40b139*/

}
}  // G42.18c ns repair
// 0x40B140
namespace gamemd {  // G42.18c ns repair
char VectorClass_flat::AddRef(int a2)
{


  int v2 = this->u32_8; // esi /*0x40b142*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x40b14d*/
  {
    int v3 = 0; // edx /*0x40b14f*/
    if ( v2 <= 0 ) /*0x40b153*/
      return 1; /*0x40b173*/
    unsigned int *v4 = *&this->u32_4; // eax /*0x40b155*/
    int v5; // ecx
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x40b15b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x40b164*/
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

  int v3 = a2; // ebp /*0x40b182*/
  if ( a2 ) /*0x40b18e*/
  {
    char *v5 = a3; // esi /*0x40b194*/
    this->u32_C = 0; /*0x40b198*/
    if ( a3 ) /*0x40b19d*/
    {
      char *v9 = a3; // eax /*0x40b1d3*/
      if ( a2 - 1 >= 0 ) /*0x40b1d7*/
      {
        a2 = a2; /*0x40b1d9*/
        do /*0x40b1e3*/
        {
          *(unsigned int *)v9 = 0; /*0x40b1da*/
          v9[4] = 0; /*0x40b1dc*/
          v9 += 8; /*0x40b1df*/
          --a2; /*0x40b1e2*/
        }
        while ( a2 ); /*0x40b1e3*/
      }
    }
    else
    {
      char *v6; // eax
      v6 = (char *)operator new(8 * a2); /*0x40b1a7*/
      if ( v6 ) /*0x40b1b1*/
      {
        char *v7 = v6; // ecx /*0x40b1b6*/
        if ( a2 - 1 >= 0 ) /*0x40b1ba*/
        {
          a2 = a2; /*0x40b1bc*/
          do /*0x40b1c6*/
          {
            *(unsigned int *)v7 = 0; /*0x40b1bd*/
            v7->vtable2 = 0; /*0x40b1bf*/
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
        int v12 = this->u32_8; // edx /*0x40b1fb*/
        if ( a2 < v12 ) /*0x40b200*/
          v12 = a2; /*0x40b202*/
        int v13 = 0; // ecx /*0x40b204*/
        if ( v12 > 0 ) /*0x40b208*/
        {
          do /*0x40b227*/
          {
            int v14 = 8 * v13; // eax /*0x40b20d*/
            unsigned int *v15; // ebx
            v15 = (unsigned int *)(this->u32_4 + 8 * v13++); /*0x40b216*/
            *(unsigned int *)&v5[v14] = *v15; /*0x40b21d*/
            *(unsigned int *)&v5[v14 + 4] = v15[1]; /*0x40b223*/
          }
          while ( v13 < v12 ); /*0x40b227*/
          v3 = a2; /*0x40b229*/
        }
        if ( this->u32_D ) /*0x40b22f*/
        {
          operator delete((void *)(this->u32_4)); /*0x40b238*/
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
    (*(void (**)(void *))(this->u32_C)(this); /*0x40b264*/
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
    operator delete((void *)(this->Items)); /*0x40b283*/
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
  unsigned int *i; // ecx

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
  *Block = &vt_VectorClass; /*0x40b306*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x40b310*/
  {
    operator delete((void *)(v3)); /*0x40b318*/
    *(Block + 1) = 0; /*0x40b320*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x40b32b*/
  *(Block + 2) = 0; /*0x40b331*/
  if ( (a2 & 1) != 0 ) /*0x40b338*/
    operator delete((void *)(Block)); /*0x40b33b*/
  return Block; /*0x40b345*/
}
}  // G42.18c ns repair
// 0x40B690
namespace gamemd {
int VectorClass_ptr_BombClass::Get(int a2, void *a2_2)
{
  return *(unsigned int *)(((unsigned int)(a2_2->Items)) + 4 * a2_2); /*0x40b69a*/
}
} // namespace gamemd

// 0x40B700
namespace gamemd {
char VectorClass_ptr_BombClass::Add(int a2, void *a2_2, void *a3_1)
{

  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = a2_2->m_8; /*0x40b702*/
  if ( m_8 == *(unsigned int *)(a2_2 + 8) ) /*0x40b70d*/
  {
    v3 = 0; /*0x40b70f*/
    if ( m_8 <= 0 ) /*0x40b713*/
      return 1; /*0x40b733*/
    v4 = *(unsigned int **)&a2_2->m_1[3]; /*0x40b715*/
    v5 = *(unsigned int *)(a2_2 + 4) - (unsigned int)v4; /*0x40b71b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x40b724*/
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
void VectorClass_ptr_BombClass::Remove(void *a1_1, void *a2)
{
  if ( *(unsigned int *)&a1_1->IsAllocated && (((unsigned char *)&(*(unsigned int *)&a1_1->IsAllocated))[1]) ) /*0x40b7fd*/
  {
    operator delete((void *)(*(void **)&a1_1->Items)); /*0x40b803*/
    a1_1->Items = (unsigned int)(0); /*0x40b80b*/
  }
  (((unsigned char *)&(a1_1->IsInitialized))[1]) = 0; /*0x40b80e*/
  *(unsigned int *)&a1_1->Capacity = 0; /*0x40b811*/
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

  if ( *(unsigned int *)&a1_1->m_1[3] && BYTE1(a1_1->m_C) ) /*0x40ba5d*/
  {
    __3_YAXPAX_Z(*(void **)&a1_1->m_1[3]); /*0x40ba63*/
    *(unsigned int *)&a1_1->m_1[3] = 0; /*0x40ba6b*/
  }
  BYTE1(a1_1->m_C) = 0; /*0x40ba6e*/
  a1_1->m_8 = 0; /*0x40ba71*/

}
} // namespace gamemd

// 0x40BA80
namespace gamemd {
int VectorClass_Techno::GetSize(unsigned int * a2)
{

  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !LOBYTE(this->IsInitialized) ) /*0x40ba80*/
    return 0; /*0x40ba88*/
  m_8 = this->Capacity; /*0x40ba8e*/
  result = 0; /*0x40ba91*/
  if ( m_8 <= 0 ) /*0x40ba95*/
    return -1; /*0x40baac*/
  for ( i = *&this->Items; *i != *a2; ++i ) /*0x40ba9b*/
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

  if ( LOBYTE(this->IsInitialized) ) /*0x40bac0*/
    return (unsigned int)(a2 - *&this->Items) >> 2; /*0x40bad5*/
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

  return *(unsigned int *)(*&this->Items + 4 * a2); /*0x40beaa*/

}
} // namespace gamemd

// 0x40BEB0
namespace gamemd {
char VectorClass_cptr_CommandClass::GetAt(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->Capacity; /*0x40beb2*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x40bebd*/
  {
    v3 = 0; /*0x40bebf*/
    if ( m_8 <= 0 ) /*0x40bec3*/
      return 1; /*0x40bee3*/
    v4 = *&this->Items; /*0x40bec5*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x40becb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x40bed4*/
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
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x40befc*/
  {
    (this->IsInitialized) = 0; /*0x40bf06*/
    if ( a3 ) /*0x40bf0c*/
      v4 = a3; /*0x40bf22*/
    else
      v4 = (unsigned int *)operator new(4 * a2); /*0x40bf1e*/
    (this->IsInitialized) = 1; /*0x40bf26*/
    if ( v4 ) /*0x40bf2a*/
    {
      if ( *&this->Items ) /*0x40bf35*/
      {
        m_8 = this->Capacity; /*0x40bf3c*/
        if ( a2 < m_8 ) /*0x40bf41*/
          m_8 = a2; /*0x40bf43*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->Items + 4 * i - 4) ) /*0x40bf49*/
          ++i; /*0x40bf4e*/
        if ( (this->IsAllocated) ) /*0x40bf5b*/
        {
          operator delete((void *)(*&this->Items)); /*0x40bf66*/
          *&this->Items = 0; /*0x40bf6e*/
        }
      }
      *&this->Items = v4; /*0x40bf77*/
      this->Capacity = a2; /*0x40bf7f*/
      (this->IsAllocated) = a3 == 0; /*0x40bf82*/
      return 1; /*0x40bf88*/
    }
    else
    {
      return 0; /*0x40bf2f*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_PBVCommandClass *))(*(unsigned int *)this->vfptr + 12))(this); /*0x40bf92*/
    return 1; /*0x40bf98*/
  }
}
} // namespace gamemd

// 0x40BFA0
namespace gamemd {
void VectorClass_cptr_CommandClass::SetAt()
{
  if ( *&this->IsAllocated && (((unsigned char *)&(*&this->IsAllocated))[1]) ) /*0x40bfad*/
  {
    operator delete((void *)(*&this->Items)); /*0x40bfb3*/
    *&this->Items = 0; /*0x40bfbb*/
  }
  (this->IsAllocated) = 0; /*0x40bfbe*/
  this->Capacity = 0; /*0x40bfc1*/
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

  void *v2; // eax

  v2 = *(void **)&a1_1->m_1[3]; /*0x40c236*/
  a1_1->m_10 = 0; /*0x40c239*/
  if ( v2 && BYTE1(a1_1->m_C) ) /*0x40c240*/
  {
    __3_YAXPAX_Z(v2); /*0x40c246*/
    *(unsigned int *)&a1_1->m_1[3] = 0; /*0x40c24e*/
  }
  BYTE1(a1_1->m_C) = 0; /*0x40c251*/
  a1_1->m_8 = 0; /*0x40c254*/

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

  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->Count; /*0x40c4c0*/
  result = 0; /*0x40c4c3*/
  if ( m_10 <= 0 ) /*0x40c4c8*/
    return -1; /*0x40c4df*/
  for ( i = *&this->Items; *i != *a2; ++i ) /*0x40c4ce*/
  {
    if ( ++result >= m_10 ) /*0x40c4dd*/
      return -1; /*0x40c4dd*/
  }
  return result; /*0x40c4e2*/

}
} // namespace gamemd

// 0x40C4F0
namespace gamemd {
} // namespace gamemd

// 0x40C540
namespace gamemd {
DynamicVector * VectorClass_ptr_LightConvertClass::Constructor_VectorClass_LightConvertClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x40c543*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x40c546*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x40c550*/
  {
    __3_YAXPAX_Z(v3); /*0x40c558*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x40c560*/
  }
  BYTE1(Block->m_C) = 0; /*0x40c56b*/
  Block->m_8 = 0; /*0x40c571*/
  if ( (a2 & 1) != 0 ) /*0x40c578*/
    __3_YAXPAX_Z(Block); /*0x40c57b*/
  return Block->__pad_0; /*0x40c585*/

}
} // namespace gamemd

// 0x40C820
namespace gamemd {
} // namespace gamemd

// 0x40C850
namespace gamemd {
unsigned int VectorClass_ptr_IsometricTileClass::GetItemIndex(int a2)
{

  if ( LOBYTE(this->IsInitialized) ) /*0x40c850*/
    return (unsigned int)(a2 - *&this->Items) >> 2; /*0x40c865*/
  else
    return 0; /*0x40c857*/

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

  void *v3 = *&Block->__pad_004; // eax /*0x40cb33*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x40cb36*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x40cb40*/
  {
    __3_YAXPAX_Z(v3); /*0x40cb48*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x40cb50*/
  }
  BYTE1(Block->m_C) = 0; /*0x40cb5b*/
  Block->m_8 = 0; /*0x40cb61*/
  if ( (a2 & 1) != 0 ) /*0x40cb68*/
    __3_YAXPAX_Z(Block); /*0x40cb6b*/
  return Block->__pad_0; /*0x40cb75*/

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
  Block->items[0] = (int)&vt_VectorClass; /*0x40cc26*/
  if ( count && *((unsigned char *)Block + 13) ) /*0x40cc30*/
  {
    operator delete((void *)(count)); /*0x40cc38*/
    Block->count = 0; /*0x40cc40*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x40cc4b*/
  Block->capacity = 0; /*0x40cc51*/
  if ( (a2 & 1) != 0 ) /*0x40cc58*/
    operator delete((void *)(Block)); /*0x40cc5b*/
  return Block->items; /*0x40cc65*/
}
} // namespace gamemd

// 0x40CC70
namespace gamemd {
void VectorClass_ptr_IsometricTileClass::TryFreeAndClear()
{
  void *v2 = this->Items; // eax /*0x40cc76*/
  this->Items = 0; /*0x40cc79*/
  if ( v2 && this->IsAllocated ) /*0x40cc80*/
  {
    operator delete((void *)(v2)); /*0x40cc86*/
    this->Items = 0; /*0x40cc8e*/
  }
  this->IsAllocated = 0; /*0x40cc91*/
  this->Capacity = 0; /*0x40cc94*/
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
  return *(unsigned int *)(this->Items + 4 * a2); /*0x40ccca*/
}
}  // G42.18c ns repair
// 0x40CF00
namespace gamemd {
int VectorClass_ptr_IsometricTileClass::FindValue(unsigned int * a2, void *a2_1)
{
  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = this->Items; /*0x40cf00*/
  result = 0; /*0x40cf03*/
  if ( v2 <= 0 ) /*0x40cf08*/
    return -1; /*0x40cf1f*/
  for ( i = (unsigned int *)this->Items; *i != *a2; ++i ) /*0x40cf0e*/
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

  void *v2; // eax

  v2 = *(void **)&a1_1->m_1[3]; /*0x40e7f6*/
  a1_1->m_10 = 0; /*0x40e7f9*/
  if ( v2 && BYTE1(a1_1->m_C) ) /*0x40e800*/
  {
    __3_YAXPAX_Z(v2); /*0x40e806*/
    *(unsigned int *)&a1_1->m_1[3] = 0; /*0x40e80e*/
  }
  BYTE1(a1_1->m_C) = 0; /*0x40e811*/
  a1_1->m_8 = 0; /*0x40e814*/

}
} // namespace gamemd

// 0x40E820
namespace gamemd {
unsigned int VectorClass_ptr_ScriptClass::GetItemIndex(int a2)
{
  if ( (this->IsInitialized) ) /*0x40e820*/
    return (unsigned int)(a2 - *&this->Items) >> 2; /*0x40e835*/
  else
    return 0; /*0x40e827*/
}
} // namespace gamemd

// 0x40E840
namespace gamemd {
int VectorClass_ptr_ScriptClass::Get(int a2, void *a2_2)
{
  return *(unsigned int *)(((unsigned int)(a2_2->Items)) + 4 * a2_2); /*0x40e84a*/
}
} // namespace gamemd

// 0x40E850
namespace gamemd {
char VectorClass_ptr_ScriptClass::Add(int a2, void *a2_2, void *a3_1)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = *&this->Capacity; /*0x40e852*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x40e85d*/
  {
    v3 = 0; /*0x40e85f*/
    if ( m_8 <= 0 ) /*0x40e863*/
      return 1; /*0x40e883*/
    v4 = *&this->Items; /*0x40e865*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x40e86b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x40e874*/
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
void VectorClass_ptr_ScriptClass::Remove(void *a1_1, void *a2)
{

  if ( *(unsigned int *)&a1_1->m_1[3] && BYTE1(a1_1->m_C) ) /*0x40e94d*/
  {
    __3_YAXPAX_Z(*(void **)&a1_1->m_1[3]); /*0x40e953*/
    *(unsigned int *)&a1_1->m_1[3] = 0; /*0x40e95b*/
  }
  BYTE1(a1_1->m_C) = 0; /*0x40e95e*/
  a1_1->m_8 = 0; /*0x40e961*/

}
} // namespace gamemd

// 0x40E970
namespace gamemd {
int VectorClass_ptr_ScriptClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !(this->IsInitialized) ) /*0x40e970*/
    return 0; /*0x40e978*/
  m_8 = *&this->Capacity; /*0x40e97e*/
  result = 0; /*0x40e981*/
  if ( m_8 <= 0 ) /*0x40e985*/
    return -1; /*0x40e99c*/
  for ( i = *&this->Items; *i != *a2; ++i ) /*0x40e98b*/
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
  if ( (this->IsInitialized) ) /*0x40e9b0*/
    return (unsigned int)(a2 - *&this->Items) >> 2; /*0x40e9c5*/
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

  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->Count; /*0x40ea80*/
  result = 0; /*0x40ea83*/
  if ( m_10 <= 0 ) /*0x40ea88*/
    return -1; /*0x40ea9f*/
  for ( i = *&this->Items; *i != *a2; ++i ) /*0x40ea8e*/
  {
    if ( ++result >= m_10 ) /*0x40ea9d*/
      return -1; /*0x40ea9d*/
  }
  return result; /*0x40eaa2*/

}
} // namespace gamemd

// 0x40EAB0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_ScriptClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3 = *&Block->__pad_004; // eax /*0x40eab3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x40eab6*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_D))[1]) ) /*0x40eac0*/
  {
    operator delete((void *)(v3)); /*0x40eac8*/
    Block->Items = (unsigned int)(0); /*0x40ead0*/
  }
  (Block->u8_E) = 0; /*0x40eadb*/
  *&Block->u32_8 = 0; /*0x40eae1*/
  if ( (a2 & 1) != 0 ) /*0x40eae8*/
    operator delete((void *)(Block)); /*0x40eaeb*/
  return Block->tail_0; /*0x40eaf5*/
}
} // namespace gamemd

// 0x40EB00
namespace gamemd {
DynamicVector * VectorClass_ptr_ScriptClass::Constructor_VectorClass_ScriptClass___(unsigned int * Block, char a2)
{
  void *v3 = *&Block->u32_8; // eax /*0x40eb03*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x40eb06*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_8))[1]) ) /*0x40eb10*/
  {
    operator delete((void *)(v3)); /*0x40eb18*/
    Block->Items = (unsigned int)(0); /*0x40eb20*/
  }
  (Block->u8_9) = 0; /*0x40eb2b*/
  *&Block->u32_8 = 0; /*0x40eb31*/
  if ( (a2 & 1) != 0 ) /*0x40eb38*/
    operator delete((void *)(Block)); /*0x40eb3b*/
  return Block->tail_0; /*0x40eb45*/
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

  void *v3 = *&Block->__pad_004; // eax /*0x40f1d3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x40f1d6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x40f1e0*/
  {
    __3_YAXPAX_Z(v3); /*0x40f1e8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x40f1f0*/
  }
  BYTE1(Block->m_C) = 0; /*0x40f1fb*/
  Block->m_8 = 0; /*0x40f201*/
  if ( (a2 & 1) != 0 ) /*0x40f208*/
    __3_YAXPAX_Z(Block); /*0x40f20b*/
  return Block->__pad_0; /*0x40f215*/

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

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x40f63a*/

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

  if ( LOBYTE(this->IsInitialized) ) /*0x40f7a0*/
    return (unsigned int)(a2 - *&this->Items) >> 2; /*0x40f7b5*/
  else
    return 0; /*0x40f7a7*/

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

  void *v3 = *&Block->__pad_004; // eax /*0x40f8f3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x40f8f6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x40f900*/
  {
    __3_YAXPAX_Z(v3); /*0x40f908*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x40f910*/
  }
  BYTE1(Block->m_C) = 0; /*0x40f91b*/
  Block->m_8 = 0; /*0x40f921*/
  if ( (a2 & 1) != 0 ) /*0x40f928*/
    __3_YAXPAX_Z(Block); /*0x40f92b*/
  return Block->__pad_0; /*0x40f935*/

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

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x40fc0a*/

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

  void *v3 = *&Block->__pad_004; // eax /*0x40fec3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x40fec6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x40fed0*/
  {
    __3_YAXPAX_Z(v3); /*0x40fed8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x40fee0*/
  }
  BYTE1(Block->m_C) = 0; /*0x40feeb*/
  Block->m_8 = 0; /*0x40fef1*/
  if ( (a2 & 1) != 0 ) /*0x40fef8*/
    __3_YAXPAX_Z(Block); /*0x40fefb*/
  return Block->__pad_0; /*0x40ff05*/

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

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x41de3a*/

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

  void *v3 = *&Block->__pad_004; // eax /*0x41e0f3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x41e0f6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x41e100*/
  {
    __3_YAXPAX_Z(v3); /*0x41e108*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x41e110*/
  }
  BYTE1(Block->m_C) = 0; /*0x41e11b*/
  Block->m_8 = 0; /*0x41e121*/
  if ( (a2 & 1) != 0 ) /*0x41e128*/
    __3_YAXPAX_Z(Block); /*0x41e12b*/
  return Block->__pad_0; /*0x41e135*/

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

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x42185a*/

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

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x421b13*/
  *Block = &vt_VectorClass_AlphaShapeClass; /*0x421b16*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x421b20*/
  {
    __3_YAXPAX_Z(v3); /*0x421b28*/
    *(Block + 1) = 0; /*0x421b30*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x421b3b*/
  *(Block + 2) = 0; /*0x421b41*/
  if ( (a2 & 1) != 0 ) /*0x421b48*/
    __3_YAXPAX_Z(Block); /*0x421b4b*/
  return Block; /*0x421b55*/

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

  return *(unsigned short *)(*&this->Items + 2 * a2); /*0x42d5fb*/

}
} // namespace gamemd

// 0x42D8B0
namespace gamemd {
char VectorClass_ushort::AddRef(int a2)
{

  int m_8; // esi
  int v3; // edx
  unsigned short *v4; // eax
  int v5; // ecx

  m_8 = this->Capacity; /*0x42d8b1*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x42d8bc*/
  {
    v3 = 0; /*0x42d8be*/
    if ( m_8 <= 0 ) /*0x42d8c2*/
      return 1; /*0x42d8e1*/
    v4 = *&this->Items; /*0x42d8c4*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x42d8ca*/
    while ( *v4 == *(unsigned short *)((char *)v4 + v5) ) /*0x42d8d3*/
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

  unsigned short *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x42d8fc*/
  {
    LOBYTE(this->IsInitialized) = 0; /*0x42d906*/
    if ( a3 ) /*0x42d90c*/
      v4 = a3; /*0x42d91f*/
    else
      v4 = (unsigned short *)__2_YAPAXI_Z(2 * a2); /*0x42d91b*/
    LOBYTE(this->IsInitialized) = 1; /*0x42d923*/
    if ( v4 ) /*0x42d927*/
    {
      if ( *&this->Items ) /*0x42d932*/
      {
        m_8 = this->Capacity; /*0x42d939*/
        if ( a2 < m_8 ) /*0x42d93e*/
          m_8 = a2; /*0x42d940*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned short *)(*&this->Items + 2 * i - 2) ) /*0x42d946*/
          ++i; /*0x42d94b*/
        if ( BYTE1(this->IsInitialized) ) /*0x42d95a*/
        {
          __3_YAXPAX_Z(*&this->Items); /*0x42d965*/
          *&this->Items = 0; /*0x42d96d*/
        }
      }
      *&this->Items = v4; /*0x42d976*/
      this->Capacity = a2; /*0x42d97e*/
      BYTE1(this->IsInitialized) = a3 == 0; /*0x42d981*/
      return 1; /*0x42d987*/
    }
    else
    {
      return 0; /*0x42d92c*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_G *))(*(unsigned int *)this->vtable1 + 12))(this); /*0x42d991*/
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

  void *v3 = *&Block->__pad_004; // eax /*0x42dbb3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x42dbb6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x42dbc0*/
  {
    __3_YAXPAX_Z(v3); /*0x42dbc8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x42dbd0*/
  }
  BYTE1(Block->m_C) = 0; /*0x42dbdb*/
  Block->m_8 = 0; /*0x42dbe1*/
  if ( (a2 & 1) != 0 ) /*0x42dbe8*/
    __3_YAXPAX_Z(Block); /*0x42dbeb*/
  return Block->__pad_0; /*0x42dbf5*/

}
} // namespace gamemd

// 0x42DC00
namespace gamemd {
DynamicVector * VectorClass_ushort::Constructor(unsigned int * Block, char a2, void *a3_1, void *a4)
{

  void *v3 = *&Block->__pad_004; // eax /*0x42dc03*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x42dc06*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x42dc10*/
  {
    __3_YAXPAX_Z(v3); /*0x42dc18*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x42dc20*/
  }
  BYTE1(Block->m_C) = 0; /*0x42dc2b*/
  Block->m_8 = 0; /*0x42dc31*/
  if ( (a2 & 1) != 0 ) /*0x42dc38*/
    __3_YAXPAX_Z(Block); /*0x42dc3b*/
  return Block->__pad_0; /*0x42dc45*/

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

  unsigned int *v4; // eax
  unsigned int *v5; // edi
  int v6; // ecx
  int i; // eax
  int v8; // eax

  if ( a2 ) /*0x42f86c*/
  {
    this->u32_C = 0; /*0x42f876*/
    if ( a3 ) /*0x42f87c*/
    {
      v5 = a3; /*0x42f8a4*/
    }
    else
    {
      v4 = __2_YAPAXI_Z(4 * a2); /*0x42f886*/
      if ( v4 ) /*0x42f890*/
        v5 = v4; /*0x42f895*/
      else
        v5 = 0; /*0x42f89d*/
    }
    this->u32_C = 1; /*0x42f8ac*/
    if ( !v5 ) /*0x42f8b0*/
      return 0; /*0x42f924*/
    if ( this->u32_4 ) /*0x42f8b2*/
    {
      v6 = this->u32_8; /*0x42f8b9*/
      if ( a2 < v6 ) /*0x42f8be*/
        v6 = a2; /*0x42f8c0*/
      for ( i = 0; i < v6; v5[i - 1] = *(unsigned int *)(this->u32_4 + 4 * i - 4) ) /*0x42f8c6*/
        ++i; /*0x42f8cb*/
      if ( this->u32_D ) /*0x42f8d8*/
      {
        __3_YAXPAX_Z(this->u32_4); /*0x42f8e3*/
        this->u32_4 = 0; /*0x42f8eb*/
      }
    }
    this->u32_4 = v5; /*0x42f8f4*/
    this->u32_8 = a2; /*0x42f8fc*/
    this->u32_D = a3 == 0; /*0x42f8ff*/
  }
  else
  {
    (*(void (**)(void *))(*&this->u32_30))(this); /*0x42f908*/
  }
  v8 = this->u32_8; /*0x42f90b*/
  if ( v8 < this->u32_10 ) /*0x42f913*/
    this->u32_10 = v8; /*0x42f915*/
  return 1; /*0x42f918*/

}
}  // G42.18c ns repair
// 0x42FBA0
namespace gamemd {
} // namespace gamemd

// 0x42FCB0
namespace gamemd {  // G42.18c ns repair
unsigned int * VectorClass_flat::CellConstructor(IUnknown * aP1, IUnknown * aP2, void *a3)
{

  void *v5; // eax

  this->Items = 0; /*0x42fcba*/
  this->Capacity = aP1; /*0x42fcc1*/
  this->IsInitialized = 1; /*0x42fcc4*/
  this->IsAllocated = 0; /*0x42fcc8*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x42fccc) */
  if ( aP1 ) /*0x42fcd2*/
  {
    if ( aP2 ) /*0x42fcda*/
    {
      this->Items = (void *)aP2; /*0x42fcdd*/
      return &this->vtable0; /*0x42fce8*/
    }
    v5 = (void *)__2_YAPAXI_Z(4 * aP1); /*0x42fcf3*/
    if ( v5 ) /*0x42fcfd*/
    {
      this->Items = v5; /*0x42fd00*/
      this->IsAllocated = 1; /*0x42fd07*/
      return &this->vtable0; /*0x42fd0f*/
    }
    this->IsAllocated = 1; /*0x42fd14*/
    this->Items = 0; /*0x42fd18*/
  }
  return &this->vtable0; /*0x42fce6*/

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

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x45a0ca*/

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

  return *(unsigned int *)(*&this->Items + 4 * a2); /*0x45a12a*/

}
} // namespace gamemd

// 0x45A270
namespace gamemd {  // G42.18c ns repair
void VectorClass_flat::Cleanup(void *a1, void *a2)
{
  if ( *(unsigned int *)(a1 + 4) && *(unsigned char *)(a1 + 13) ) /*0x45a27d*/
  {
    operator delete((void *)(*(void **)(a1 + 4))); /*0x45a283*/
    *(unsigned int *)(a1 + 4) = 0; /*0x45a28b*/
  }
  *(unsigned char *)(a1 + 13) = 0; /*0x45a28e*/
  *(unsigned int *)(a1 + 8) = 0; /*0x45a291*/
}
}  // G42.18c ns repair
// 0x45A4D0
namespace gamemd {
void VectorClass_ptr_InfantryClass::Remove(void *a1_1, void *a2)
{
  if ( *(unsigned int *)&a1_1->u8_D && a1_1->u8_D ) /*0x45a4dd*/
  {
    operator delete((void *)(*(void **)&a1_1->ptr_4)); /*0x45a4e3*/
    *(unsigned int *)&a1_1->ptr_4 = 0; /*0x45a4eb*/
  }
  *(unsigned int *)&a1_1->u8_D = 0; /*0x45a4ee*/
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

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x45a7ac*/
  {
    LOBYTE(this->IsInitialized) = 0; /*0x45a7b6*/
    if ( a3 ) /*0x45a7bc*/
      v4 = a3; /*0x45a7d2*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x45a7ce*/
    LOBYTE(this->IsInitialized) = 1; /*0x45a7d6*/
    if ( v4 ) /*0x45a7da*/
    {
      if ( *&this->Items ) /*0x45a7e5*/
      {
        m_8 = this->Capacity; /*0x45a7ec*/
        if ( a2 < m_8 ) /*0x45a7f1*/
          m_8 = a2; /*0x45a7f3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->Items + 4 * i - 4) ) /*0x45a7f9*/
          ++i; /*0x45a7fe*/
        if ( BYTE1(this->IsInitialized) ) /*0x45a80b*/
        {
          __3_YAXPAX_Z(*&this->Items); /*0x45a816*/
          *&this->Items = 0; /*0x45a81e*/
        }
      }
      *&this->Items = v4; /*0x45a827*/
      this->Capacity = a2; /*0x45a82f*/
      BYTE1(this->IsInitialized) = a3 == 0; /*0x45a832*/
      return 1; /*0x45a838*/
    }
    else
    {
      return 0; /*0x45a7df*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_PAVReestablish *))(*(unsigned int *)this->vfptr + 12))(this); /*0x45a842*/
    return 1; /*0x45a848*/
  }

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
DynamicVector * VectorClass_ptr_Reestablish::Constructor(unsigned int * Block, char a2, void *a3_1, void *a4)
{

  void *v3 = *&Block->__pad_004; // eax /*0x45aa13*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x45aa16*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x45aa20*/
  {
    __3_YAXPAX_Z(v3); /*0x45aa28*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x45aa30*/
  }
  BYTE1(Block->m_C) = 0; /*0x45aa3b*/
  Block->m_8 = 0; /*0x45aa41*/
  if ( (a2 & 1) != 0 ) /*0x45aa48*/
    __3_YAXPAX_Z(Block); /*0x45aa4b*/
  return Block->__pad_0; /*0x45aa55*/

}
} // namespace gamemd

// 0x45AAB0
namespace gamemd {
DynamicVector * VectorClass_InfantryPtr::Destruct(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*((unsigned int *)Block + 1); /*0x45aab3*/
  *(unsigned int *)Block = &vt_VectorClass; /*0x45aab6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x45aac0*/
  {
    operator delete((void *)(v3)); /*0x45aac8*/
    *((unsigned int *)Block + 1) = 0; /*0x45aad0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x45aadb*/
  *((unsigned int *)Block + 2) = 0; /*0x45aae1*/
  if ( (a2 & 1) != 0 ) /*0x45aae8*/
    operator delete((void *)(Block)); /*0x45aaeb*/
  return Block; /*0x45aaf5*/
}
} // namespace gamemd

// 0x45AB00
namespace gamemd {
DynamicVector * VectorClass_ptr_FoggedObjectClass::Constructor_VectorClass_FoggedObjectClass___(unsigned int * Block, char a2)
{
  void *v3 = *&Block->__pad_004; // eax /*0x45ab03*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x45ab06*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_D))[1]) ) /*0x45ab10*/
  {
    operator delete((void *)(v3)); /*0x45ab18*/
    Block->Items = (unsigned int)(0); /*0x45ab20*/
  }
  (Block->u8_E) = 0; /*0x45ab2b*/
  *&Block->u32_8 = 0; /*0x45ab31*/
  if ( (a2 & 1) != 0 ) /*0x45ab38*/
    operator delete((void *)(Block)); /*0x45ab3b*/
  return Block->tail_0; /*0x45ab45*/
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

  void *v3 = *&Block->__pad_004; // eax /*0x45ace3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x45ace6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x45acf0*/
  {
    __3_YAXPAX_Z(v3); /*0x45acf8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x45ad00*/
  }
  BYTE1(Block->m_C) = 0; /*0x45ad0b*/
  Block->m_8 = 0; /*0x45ad11*/
  if ( (a2 & 1) != 0 ) /*0x45ad18*/
    __3_YAXPAX_Z(Block); /*0x45ad1b*/
  return Block->__pad_0; /*0x45ad25*/

}
} // namespace gamemd

// 0x45AD30
namespace gamemd {
DynamicVector * VectorClass_ptr_Reestablish::Constructor_VectorClass_Reestablish___(unsigned int * Block, char a2)
{
  void *v3 = *&Block->__pad_004; // eax /*0x45ad33*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x45ad36*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_D))[1]) ) /*0x45ad40*/
  {
    operator delete((void *)(v3)); /*0x45ad48*/
    Block->Items = (unsigned int)(0); /*0x45ad50*/
  }
  (Block->u8_E) = 0; /*0x45ad5b*/
  *&Block->u32_8 = 0; /*0x45ad61*/
  if ( (a2 & 1) != 0 ) /*0x45ad68*/
    operator delete((void *)(Block)); /*0x45ad6b*/
  return Block->tail_0; /*0x45ad75*/
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
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x45ad98) */
  if ( aP1 ) /*0x45ad9e*/
  {
    if ( aP2 ) /*0x45ada6*/
    {
      this->Items = (void *)aP2; /*0x45ada8*/
      return &this->vtable0; /*0x45adae*/
    }
    this->Items = (void *)__2_YAPAXI_Z(4 * aP1); /*0x45adbd*/
    this->IsAllocated = 1; /*0x45adc0*/
  }
  return &this->vtable0; /*0x45adad*/

}
}  // G42.18c ns repair
// 0x45AE50
namespace gamemd {
unsigned int * VectorClass_ReestablishPtr::Construct(BuildingClass * aP1, BuildingClass * aP2, void *a3_1, void *a4_1, void *a5_1, void *a6_1, void *a7, void *a8, void *a9)
{

  *&aP1->vtable2 = 0; /*0x45ae5b*/
  *&aP1->vtable3 = aP2; /*0x45ae5e*/
  LOBYTE(aP1->vtable4) = 1; /*0x45ae61*/
  BYTE1(aP1->vtable4) = 0; /*0x45ae65*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x45ae68) */
  if ( aP2 ) /*0x45ae6e*/
  {
    if ( a3_1 ) /*0x45ae76*/
    {
      *&aP1->vtable2 = a3_1; /*0x45ae78*/
      return aP1->__pad_0; /*0x45ae7e*/
    }
    *&aP1->vtable2 = __2_YAPAXI_Z(4 * aP2); /*0x45ae8d*/
    BYTE1(aP1->m_C) = 1; /*0x45ae90*/
  }
  return aP1->__pad_0; /*0x45ae7d*/

}
} // namespace gamemd

// 0x465DE0
namespace gamemd {
unsigned int * VectorClass_TPoint3D_int::Clear(unsigned int * a2, int a3)
{

  unsigned int *v3; // edx

  v3 = (unsigned int *)(*&this->Items + 12 * a3); /*0x465deb*/
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

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x46b63a*/

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

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x46b913*/
  *Block = &vt_VectorClass_BulletClass; /*0x46b916*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x46b920*/
  {
    __3_YAXPAX_Z(v3); /*0x46b928*/
    *(Block + 1) = 0; /*0x46b930*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x46b93b*/
  *(Block + 2) = 0; /*0x46b941*/
  if ( (a2 & 1) != 0 ) /*0x46b948*/
    __3_YAXPAX_Z(Block); /*0x46b94b*/
  return Block; /*0x46b955*/

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

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x472b3a*/

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

  void *v3 = *&Block->__pad_004; // eax /*0x4730f3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4730f6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x473100*/
  {
    __3_YAXPAX_Z(v3); /*0x473108*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x473110*/
  }
  BYTE1(Block->m_C) = 0; /*0x47311b*/
  Block->m_8 = 0; /*0x473121*/
  if ( (a2 & 1) != 0 ) /*0x473128*/
    __3_YAXPAX_Z(Block); /*0x47312b*/
  return Block->__pad_0; /*0x473135*/

}
} // namespace gamemd

// 0x477750
namespace gamemd {  // G42.18c ns repair
int * VectorClass_flat::ScalarDtor(char a2)
{

  Pipe::Dtor((Pipe *)this); /*0x477753*/
  if ( (a2 & 1) != 0 ) /*0x47775d*/
    __3_YAXPAX_Z(this); /*0x477760*/
  return (int *)this->q000; /*0x47776a*/

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
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x4777ca) */
  if ( aP1 != (DynamicVectorClass *)a2 ) /*0x4777d0*/
  {
    VectorClass::Destroy((int)aP1); /*0x4777d2*/
    v3 = a2[2]; /*0x4777d8*/
    aP1->Capacity = v3; /*0x4777dd*/
    if ( v3 ) /*0x4777e0*/
    {
      v4 = operator new(4 * v3); /*0x4777e6*/
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
            *(unsigned int *)(aP1->Items + 4 * v6) = *(unsigned int *)(a2[1] + 4 * v6); /*0x47780b*/
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
  /* X11: vtable install elided (implicit via TypeList virtuals 0x47782a) */
  return &aP1->vfptr; /*0x477832*/
}
}  // G42.18c ns repair
// 0x477890
namespace gamemd {  // G42.18c ns repair
int VectorClass_flat::GetAt_Copy(int a2)
{

  return *(unsigned int *)(*&this->u32_4 + 4 * a2); /*0x47789a*/

}
}  // G42.18c ns repair
// 0x477BE0
namespace gamemd {  // G42.18c ns repair
unsigned int * VectorClass_flat::Construct(int a2, int a3, void *a3_2, void *a4, void *a5, void *a6, void *a7, void *a8, void *a9)
{

  a3_2->Items = 0; /*0x477beb*/
  a3_2->Capacity = a3_2; /*0x477bee*/
  a3_2->IsInitialized = 1; /*0x477bf1*/
  a3_2->IsAllocated = 0; /*0x477bf5*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x477bf8) */
  if ( a3_2 ) /*0x477bfe*/
  {
    if ( a3_2 ) /*0x477c06*/
    {
      a3_2->Items = (void *)a3_2; /*0x477c08*/
      return &a3_2->vtable0; /*0x477c0e*/
    }
    a3_2->Items = (void *)__2_YAPAXI_Z(4 * a3_2); /*0x477c1d*/
    a3_2->IsAllocated = 1; /*0x477c20*/
  }
  return &a3_2->vtable0; /*0x477c0d*/

}
}  // G42.18c ns repair
// 0x477C70
namespace gamemd {  // G42.18c ns repair
char VectorClass_flat::vt02(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x477c7c*/
  {
    LOBYTE(this->u32_C) = 0; /*0x477c86*/
    if ( a3 ) /*0x477c8c*/
      v4 = a3; /*0x477ca2*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x477c9e*/
    LOBYTE(this->u32_C) = 1; /*0x477ca6*/
    if ( v4 ) /*0x477caa*/
    {
      if ( *&this->u32_4 ) /*0x477cb5*/
      {
        m_8 = this->u32_8; /*0x477cbc*/
        if ( a2 < m_8 ) /*0x477cc1*/
          m_8 = a2; /*0x477cc3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->u32_4 + 4 * i - 4) ) /*0x477cc9*/
          ++i; /*0x477cce*/
        if ( BYTE1(this->u32_C) ) /*0x477cdb*/
        {
          __3_YAXPAX_Z(*&this->u32_4); /*0x477ce6*/
          *&this->u32_4 = 0; /*0x477cee*/
        }
      }
      *&this->u32_4 = v4; /*0x477cf7*/
      this->u32_8 = a2; /*0x477cff*/
      BYTE1(this->u32_C) = a3 == 0; /*0x477d02*/
      return 1; /*0x477d08*/
    }
    else
    {
      return 0; /*0x477caf*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_H *))(*(unsigned int *)this->q000 + 12))(this); /*0x477d12*/
    return 1; /*0x477d18*/
  }

}
}  // G42.18c ns repair
// 0x477D20
namespace gamemd {  // G42.18c ns repair
void VectorClass_flat::Destroy(void *a1)
{
  int result; // eax

  result = *(unsigned int *)(a1 + 4); /*0x477d26*/
  if ( result && *(unsigned char *)(a1 + 13) ) /*0x477d2d*/
  {
    operator delete((void *)(*(void **)(a1 + 4))); /*0x477d33*/
    *(unsigned int *)(a1 + 4) = 0; /*0x477d3b*/
  }
  *(unsigned char *)(a1 + 13) = 0; /*0x477d3e*/
  *(unsigned int *)(a1 + 8) = 0; /*0x477d41*/
  return result; /*0x477d44*/
}
}  // G42.18c ns repair
// 0x477D50
namespace gamemd {  // G42.18c ns repair
int  VectorClass_flat::vt04(unsigned int * a2)
{

  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !LOBYTE(this->u32_C) ) /*0x477d50*/
    return 0; /*0x477d58*/
  m_8 = this->u32_8; /*0x477d5e*/
  result = 0; /*0x477d61*/
  if ( m_8 <= 0 ) /*0x477d65*/
    return -1; /*0x477d7c*/
  for ( i = *&this->u32_4; *i != *a2; ++i ) /*0x477d6b*/
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

  if ( LOBYTE(this->u32_C) ) /*0x477d90*/
    return (unsigned int)(a2 - *&this->u32_4) >> 2; /*0x477da5*/
  else
    return 0; /*0x477d97*/

}
}  // G42.18c ns repair
// 0x477E10
namespace gamemd {  // G42.18c ns repair
char VectorClass_flat::Resize(int a2, unsigned int * a3, void *a3_1)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x477e1c*/
  {
    LOBYTE(this->u32_C) = 0; /*0x477e22*/
    if ( a3 ) /*0x477e28*/
      v4 = a3; /*0x477e3e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x477e3a*/
    LOBYTE(this->u32_C) = 1; /*0x477e42*/
    if ( !v4 ) /*0x477e46*/
      return 0; /*0x477eba*/
    if ( *&this->u32_4 ) /*0x477e48*/
    {
      m_8 = this->u32_8; /*0x477e4f*/
      if ( a2 < m_8 ) /*0x477e54*/
        m_8 = a2; /*0x477e56*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->u32_4 + 4 * i - 4) ) /*0x477e5c*/
        ++i; /*0x477e61*/
      if ( BYTE1(this->u32_C) ) /*0x477e6e*/
      {
        __3_YAXPAX_Z(*&this->u32_4); /*0x477e79*/
        *&this->u32_4 = 0; /*0x477e81*/
      }
    }
    *&this->u32_4 = v4; /*0x477e8a*/
    this->u32_8 = a2; /*0x477e92*/
    BYTE1(this->u32_C) = a3 == 0; /*0x477e95*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_H *))(*(unsigned int *)this->q000 + 12))(this); /*0x477e9e*/
  }
  v7 = this->u32_8; /*0x477ea1*/
  if ( v7 < this->u32_10 ) /*0x477ea9*/
    this->u32_10 = v7; /*0x477eab*/
  return 1; /*0x477eae*/

}
}  // G42.18c ns repair
// 0x478630
namespace gamemd {  // G42.18c ns repair
VectorClass_flat *  VectorClass_flat::vt00(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x478633*/
  *Block = &vt_VectorClass; /*0x478636*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x478640*/
  {
    operator delete((void *)(v3)); /*0x478648*/
    *(Block + 1) = 0; /*0x478650*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x47865b*/
  *(Block + 2) = 0; /*0x478661*/
  if ( (a2 & 1) != 0 ) /*0x478668*/
    operator delete((void *)(Block)); /*0x47866b*/
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

  return *(unsigned int *)(*&this->Items + 4 * a2); /*0x48ad6a*/

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

  void *v3 = *&Block->__pad_004; // eax /*0x48b023*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x48b026*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x48b030*/
  {
    __3_YAXPAX_Z(v3); /*0x48b038*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x48b040*/
  }
  BYTE1(Block->m_C) = 0; /*0x48b04b*/
  Block->m_8 = 0; /*0x48b051*/
  if ( (a2 & 1) != 0 ) /*0x48b058*/
    __3_YAXPAX_Z(Block); /*0x48b05b*/
  return Block->__pad_0; /*0x48b065*/

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

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4913ea*/

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

  void *v3 = *&Block->__pad_004; // eax /*0x49b133*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x49b136*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x49b140*/
  {
    __3_YAXPAX_Z(v3); /*0x49b148*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x49b150*/
  }
  BYTE1(Block->m_C) = 0; /*0x49b15b*/
  Block->m_8 = 0; /*0x49b161*/
  if ( (a2 & 1) != 0 ) /*0x49b168*/
    __3_YAXPAX_Z(Block); /*0x49b16b*/
  return Block->__pad_0; /*0x49b175*/

}
} // namespace gamemd

// 0x49FB60
namespace gamemd {  // G42.18c ns repair
int VectorClass_flat::GetCount(void *a1)
{

  return this->Count; /*0x49fb63*/

}
}  // G42.18c ns repair
// 0x4A0E10
namespace gamemd {
DynamicVector *  VectorClass_UtagCONNECTDATA::Constructor_VectorClass_tagCONNECTDATA_(unsigned int * Block, char a2)
{
  void *v3 = *&Block->__pad_004; // eax /*0x4a0e13*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4a0e16*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_D))[1]) ) /*0x4a0e20*/
  {
    operator delete((void *)(v3)); /*0x4a0e28*/
    Block->Items = (unsigned int)(0); /*0x4a0e30*/
  }
  (Block->u8_E) = 0; /*0x4a0e3b*/
  *&Block->u32_8 = 0; /*0x4a0e41*/
  if ( (a2 & 1) != 0 ) /*0x4a0e48*/
    operator delete((void *)(Block)); /*0x4a0e4b*/
  return Block->tail_0; /*0x4a0e55*/
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

  if ( this->u32_4 && this->u32_D ) /*0x4a10ad*/
  {
    __3_YAXPAX_Z(*&this->u32_4); /*0x4a10b3*/
    this->u32_4 = 0; /*0x4a10bb*/
  }
  this->u32_D = 0; /*0x4a10be*/
  this->u32_8 = 0; /*0x4a10c1*/

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

  if ( this->u32_4 && this->u32_D ) /*0x4a133d*/
  {
    __3_YAXPAX_Z(*&this->u32_4); /*0x4a1343*/
    this->u32_4 = 0; /*0x4a134b*/
  }
  this->u32_D = 0; /*0x4a134e*/
  this->u32_8 = 0; /*0x4a1351*/

}
}  // G42.18c ns repair
// 0x4A14A0
namespace gamemd {
} // namespace gamemd

// 0x4A7FE0
namespace gamemd {  // G42.18c ns repair
char VectorClass_flat::AppendCopy(DynamicVector * aP1)
{

  int Capacity; // ecx
  int result; // eax
  int Items; // edx

  Capacity = this->Capacity; /*0x4a7fe3*/
  result = this->Count; /*0x4a7fe6*/
  if ( result < Capacity /*0x4a800d*/
    || (this->IsAllocated[0] || !Capacity)
    && (result = this->CapacityIncrement, result > 0)
    && (result = (*(int (**)(DynamicVectorClass *, int, unsigned int))(this->vtable0 + 8))(
                   this,
                   Capacity + result,
                   0),
        (unsigned char)result) )
  {
    result = this->Count; /*0x4a8015*/
    Items = this->Items; /*0x4a8018*/
    this->Count = result + 1; /*0x4a801e*/
    *(unsigned int *)(Items + 4 * result) = *aP1; /*0x4a8028*/
    LOBYTE(result) = 1; /*0x4a802b*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x4a800f*/
  }
  return result; /*0x4a8011*/

}
}  // G42.18c ns repair
// 0x4B9C30
namespace gamemd {
int VectorClass_ptr_CrossDissolveEffect::GetItem(int a2)
{

  return *(unsigned int *)(*&this->Items + 4 * a2); /*0x4b9c3a*/

}
} // namespace gamemd

// 0x4B9C90
namespace gamemd {
int VectorClass_ptr_CrossDissolveEffect::Clear(int a2)
{

  return *(unsigned int *)(*&this->Items + 4 * a2); /*0x4b9c9a*/

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

  int result; // eax
  void *Capacity; // edx
  unsigned int *i; // ecx

  if ( !this->IsInitialized ) /*0x4b9dc0*/
    return 0; /*0x4b9dc8*/
  Capacity = this->Capacity; /*0x4b9dce*/
  result = 0; /*0x4b9dd1*/
  if ( (int)Capacity <= 0 ) /*0x4b9dd5*/
    return -1; /*0x4b9dec*/
  for ( i = this->Items; *i != *a2; ++i ) /*0x4b9ddb*/
  {
    if ( ++result >= (int)Capacity ) /*0x4b9dea*/
      return -1; /*0x4b9dea*/
  }
  return result; /*0x4b9dca*/

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

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4ba1b3*/
  *Block = &off_7E8500; /*0x4ba1b6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x4ba1c0*/
  {
    __3_YAXPAX_Z(v3); /*0x4ba1c8*/
    *(Block + 1) = 0; /*0x4ba1d0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x4ba1db*/
  *(Block + 2) = 0; /*0x4ba1e1*/
  if ( (a2 & 1) != 0 ) /*0x4ba1e8*/
    __3_YAXPAX_Z(Block); /*0x4ba1eb*/
  return Block; /*0x4ba1f5*/

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

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4c2c9a*/

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

  void *v3 = *&Block->__pad_004; // eax /*0x4c2f53*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4c2f56*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4c2f60*/
  {
    __3_YAXPAX_Z(v3); /*0x4c2f68*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4c2f70*/
  }
  BYTE1(Block->m_C) = 0; /*0x4c2f7b*/
  Block->m_8 = 0; /*0x4c2f81*/
  if ( (a2 & 1) != 0 ) /*0x4c2f88*/
    __3_YAXPAX_Z(Block); /*0x4c2f8b*/
  return Block->__pad_0; /*0x4c2f95*/

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

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4c49fa*/

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

  void *v3 = *&Block->__pad_004; // eax /*0x4c4cb3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4c4cb6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4c4cc0*/
  {
    __3_YAXPAX_Z(v3); /*0x4c4cc8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4c4cd0*/
  }
  BYTE1(Block->m_C) = 0; /*0x4c4cdb*/
  Block->m_8 = 0; /*0x4c4ce1*/
  if ( (a2 & 1) != 0 ) /*0x4c4ce8*/
    __3_YAXPAX_Z(Block); /*0x4c4ceb*/
  return Block->__pad_0; /*0x4c4cf5*/

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

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4c5bba*/

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

  void *v3 = *&Block->__pad_004; // eax /*0x4c5e73*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4c5e76*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4c5e80*/
  {
    __3_YAXPAX_Z(v3); /*0x4c5e88*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4c5e90*/
  }
  BYTE1(Block->m_C) = 0; /*0x4c5e9b*/
  Block->m_8 = 0; /*0x4c5ea1*/
  if ( (a2 & 1) != 0 ) /*0x4c5ea8*/
    __3_YAXPAX_Z(Block); /*0x4c5eab*/
  return Block->__pad_0; /*0x4c5eb5*/

}
} // namespace gamemd

// 0x4E0250
namespace gamemd {
unsigned int * VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::Clear(unsigned int * a2, int a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx

  v3 = *&this->Items; /*0x4e0250*/
  v4 = *(unsigned int *)(v3 + 8 * a3); /*0x4e0257*/
  v5 = v3 + 8 * a3; /*0x4e025a*/
  *a2 = v4; /*0x4e0261*/
  a2[1] = *(unsigned int *)(v5 + 4); /*0x4e0266*/
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
  unsigned int *v5; // eax
  unsigned int *v6; // ecx
  int v7; // edx

  m_8 = this->Capacity; /*0x4e07eb*/
  if ( m_8 == *(unsigned int *)(x4E0990 + 8) ) /*0x4e07f0*/
  {
    v3 = 0; /*0x4e07f2*/
    if ( m_8 <= 0 ) /*0x4e07f6*/
      return 1; /*0x4e0826*/
    v4 = *(unsigned int *)(x4E0990 + 4); /*0x4e07f8*/
    v5 = *&this->Items; /*0x4e07fb*/
    v6 = (unsigned int *)(v4 + 4); /*0x4e07fe*/
    v7 = v4 - (unsigned int)v5; /*0x4e0801*/
    while ( *v5 == *(unsigned int *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x4e0813*/
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

  return *(unsigned int *)(*&this->Items + 4 * a2); /*0x4e834a*/

}
// 0x4E8350

// 0x4E8380

// 0x4E83A0
int VectorClass_ptr_SuperClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e83aa*/

}
// 0x4E83B0

// 0x4E83E0

// 0x4E8400
int VectorClass_ptr_AITriggerTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e840a*/

}
// 0x4E8410

// 0x4E8440

// 0x4E8460
int VectorClass_ptr_BuildingLightClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e846a*/

}
// 0x4E84D0

// 0x4E8500

// 0x4E8520
int VectorClass_ptr_TeamClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e852a*/

}
// 0x4E8530
int VectorClass_ptr_ThemeControl::Clear(int a2)
{

  return *(unsigned int *)(*&this->Items + 4 * a2); /*0x4e853a*/

}
// 0x4E8540
void VectorClass_ptr_AITriggerTypeClass::Destroy_0()
{

  void *v2 = *&this->Items; // eax /*0x4e8546*/
  this->Count = 0; /*0x4e8549*/
  if ( v2 && BYTE1(this->IsInitialized) ) /*0x4e8550*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8556*/
    *&this->Items = 0; /*0x4e855e*/
  }
  BYTE1(this->IsInitialized) = 0; /*0x4e8561*/
  this->Capacity = 0; /*0x4e8564*/

}
// 0x4E8570
unsigned int VectorClass_ptr_AITriggerTypeClass::GetItemIndex_0(int a2)
{

  if ( LOBYTE(this->IsInitialized) ) /*0x4e8570*/
    return (unsigned int)(a2 - *&this->Items) >> 2; /*0x4e8585*/
  else
    return 0; /*0x4e8577*/

}
// 0x4E8590
int VectorClass_ptr_TriggerClass::Get(int a2, void *a2_2)
{
  return *(unsigned int *)(((unsigned int)(a2_2->Items)) + 4 * a2_2); /*0x4e859a*/
}
// 0x4E85A0
void VectorClass_ptr_AITriggerTypeClass::Destroy_1()
{

  void *v2 = *&this->Items; // eax /*0x4e85a6*/
  this->Count = 0; /*0x4e85a9*/
  if ( v2 && BYTE1(this->IsInitialized) ) /*0x4e85b0*/
  {
    __3_YAXPAX_Z(v2); /*0x4e85b6*/
    *&this->Items = 0; /*0x4e85be*/
  }
  BYTE1(this->IsInitialized) = 0; /*0x4e85c1*/
  this->Capacity = 0; /*0x4e85c4*/

}
// 0x4E85D0
unsigned int VectorClass_ptr_AITriggerTypeClass::GetItemIndex_1(int a2)
{

  if ( LOBYTE(this->IsInitialized) ) /*0x4e85d0*/
    return (unsigned int)(a2 - *&this->Items) >> 2; /*0x4e85e5*/
  else
    return 0; /*0x4e85d7*/

}
// 0x4E85F0
int VectorClass_ptr_TriggerTypeClass::Get(int a2, void *a2_2)
{
  return *(unsigned int *)(((unsigned int)(a2_2->Items)) + 4 * a2_2); /*0x4e85fa*/
}
// 0x4E8600

// 0x4E8630

// 0x4E8650
int VectorClass_ptr_TubeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e865a*/

}
// 0x4E8660

// 0x4E8690

// 0x4E86B0
int VectorClass_ptr_ParticleSystemClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e86ba*/

}
// 0x4E86C0
void VectorClass_ptr_TubeClass::Destroy_0()
{

  void *v2 = *&this->Items; // eax /*0x4e86c6*/
  this->Count = 0; /*0x4e86c9*/
  if ( v2 && BYTE1(this->IsInitialized) ) /*0x4e86d0*/
  {
    __3_YAXPAX_Z(v2); /*0x4e86d6*/
    *&this->Items = 0; /*0x4e86de*/
  }
  BYTE1(this->IsInitialized) = 0; /*0x4e86e1*/
  this->Capacity = 0; /*0x4e86e4*/

}
// 0x4E86F0
unsigned int VectorClass_ptr_TubeClass::GetItemIndex_0(int a2)
{

  if ( LOBYTE(this->IsInitialized) ) /*0x4e86f0*/
    return (unsigned int)(a2 - *&this->Items) >> 2; /*0x4e8705*/
  else
    return 0; /*0x4e86f7*/

}
// 0x4E8710
int VectorClass_ptr_WaveClass::Get(int a2, void *a2_2)
{
  return *(unsigned int *)(((unsigned int)(a2_2->Items)) + 4 * a2_2); /*0x4e871a*/
}
// 0x4E8720
void VectorClass_ptr_TubeClass::Destroy_1()
{

  void *v2 = *&this->Items; // eax /*0x4e8726*/
  this->Count = 0; /*0x4e8729*/
  if ( v2 && BYTE1(this->IsInitialized) ) /*0x4e8730*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8736*/
    *&this->Items = 0; /*0x4e873e*/
  }
  BYTE1(this->IsInitialized) = 0; /*0x4e8741*/
  this->Capacity = 0; /*0x4e8744*/

}
// 0x4E8750
unsigned int VectorClass_ptr_TubeClass::GetItemIndex_1(int a2)
{

  if ( LOBYTE(this->IsInitialized) ) /*0x4e8750*/
    return (unsigned int)(a2 - *&this->Items) >> 2; /*0x4e8765*/
  else
    return 0; /*0x4e8757*/

}
// 0x4E8770
int VectorClass_ptr_OverlayClass::Get(int a2, void *a2_2)
{
  return *(unsigned int *)(((unsigned int)(a2_2->Items)) + 4 * a2_2); /*0x4e877a*/
}
// 0x4E8890
int VectorClass_ptr_AircraftClass::Get(int a2, void *a2_2)
{
  return *(unsigned int *)(((unsigned int)(a2_2->Items)) + 4 * a2_2); /*0x4e889a*/
}
// 0x4E88A0

// 0x4E88D0

// 0x4E88F0
int VectorClass_ptr_UnitClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e88fa*/

}
// 0x4E8900

// 0x4E8930

// 0x4E8950
int VectorClass_ptr_HouseClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e895a*/

}
// 0x4E8960

// 0x4E8990

// 0x4E89B0
int VectorClass_ptr_AnimClass::Clear(int a2)
{

  return *(unsigned int *)(*&this->Items + 4 * a2); /*0x4e89ba*/

}
// 0x4E89C0

// 0x4E89F0

// 0x4E8A10
int VectorClass_ptr_FactoryClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e8a1a*/

}
// 0x4E8A20

// 0x4E8A50

// 0x4E8A70
int VectorClass_ptr_CampaignClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e8a7a*/

}
// 0x4E8A80

// 0x4E8AB0

// 0x4E8AD0
int VectorClass_ptr_SideClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e8ada*/

}
// 0x4E8AE0

// 0x4E8B10

// 0x4E8B30
int VectorClass_ptr_HouseTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e8b3a*/

}
// 0x4E8B40

// 0x4E8B70

// 0x4E8B90
int VectorClass_ptr_TaskForceClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e8b9a*/

}
// 0x4E8BA0

// 0x4E8BD0

// 0x4E8BF0
int VectorClass_ptr_TeamTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e8bfa*/

}
// 0x4E8C00

// 0x4E8C30

// 0x4E8C50
int VectorClass_ptr_ScriptTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e8c5a*/

}
// 0x4E8C60

// 0x4E8C90

// 0x4E8CB0
int VectorClass_ptr_OverlayTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e8cba*/

}
// 0x4E8CC0

// 0x4E8CF0

// 0x4E8D10
int VectorClass_ptr_SmudgeTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e8d1a*/

}
// 0x4E8D20

// 0x4E8D50

// 0x4E8D70
int VectorClass_ptr_TerrainTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e8d7a*/

}
// 0x4E8D80

// 0x4E8DB0

// 0x4E8DD0
int VectorClass_ptr_BuildingTypeClass::SaveToINI(int a2)
{

  return *(unsigned int *)(*&this->Items + 4 * a2); /*0x4e8dda*/

}
// 0x4E8DE0

// 0x4E8E10

// 0x4E8E30
int VectorClass_ptr_AircraftTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e8e3a*/

}
// 0x4E8E40

// 0x4E8E70

// 0x4E8E90
int VectorClass_ptr_UnitTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e8e9a*/

}
// 0x4E8EA0

// 0x4E8ED0

// 0x4E8EF0
int VectorClass_ptr_AnimTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e8efa*/

}
// 0x4E8F00

// 0x4E8F30

// 0x4E8F50
int VectorClass_ptr_InfantryTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e8f5a*/

}
// 0x4E8F60

// 0x4E8F90

// 0x4E8FB0
int VectorClass_ptr_BulletTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e8fba*/

}
// 0x4E8FC0

// 0x4E8FF0

// 0x4E9010
int VectorClass_ptr_VoxelAnimTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e901a*/

}
// 0x4E9020

// 0x4E9050

// 0x4E9070
int VectorClass_ptr_IsometricTileTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e907a*/

}
// 0x4E9080

// 0x4E90B0

// 0x4E90D0
int VectorClass_ptr_ParticleTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e90da*/

}
// 0x4E90E0

// 0x4E9110

// 0x4E9130
int VectorClass_ptr_ParticleSystemTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e913a*/

}
// 0x4E9140

// 0x4E9170

// 0x4E9190
int VectorClass_ptr_SuperWeaponTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e919a*/

}
// 0x4E91A0

// 0x4E91D0

// 0x4E91F0
int VectorClass_ptr_AbstractTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e91fa*/

}
// 0x4E9460

// 0x4E94A0

// 0x4E9550
void VectorClass_Building::Set(void *a1_1, void *a2_1, void *a3_1)
{

  if ( *(unsigned int *)&a1_1->m_1[3] && BYTE1(a1_1->m_C) ) /*0x4e955d*/
  {
    __3_YAXPAX_Z(*(void **)&a1_1->m_1[3]); /*0x4e9563*/
    *(unsigned int *)&a1_1->m_1[3] = 0; /*0x4e956b*/
  }
  BYTE1(a1_1->m_C) = 0; /*0x4e956e*/
  a1_1->m_8 = 0; /*0x4e9571*/

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

  if ( *(unsigned int *)&a1_1->m_1[3] && BYTE1(a1_1->m_C) ) /*0x4ea39d*/
  {
    __3_YAXPAX_Z(*(void **)&a1_1->m_1[3]); /*0x4ea3a3*/
    *(unsigned int *)&a1_1->m_1[3] = 0; /*0x4ea3ab*/
  }
  BYTE1(a1_1->m_C) = 0; /*0x4ea3ae*/
  a1_1->m_8 = 0; /*0x4ea3b1*/

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

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ea80c*/
  {
    LOBYTE(this->IsInitialized) = 0; /*0x4ea812*/
    if ( a3 ) /*0x4ea818*/
      v4 = a3; /*0x4ea82e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x4ea82a*/
    LOBYTE(this->IsInitialized) = 1; /*0x4ea832*/
    if ( !v4 ) /*0x4ea836*/
      return 0; /*0x4ea8aa*/
    if ( *&this->Items ) /*0x4ea838*/
    {
      m_8 = this->Capacity; /*0x4ea83f*/
      if ( a2 < m_8 ) /*0x4ea844*/
        m_8 = a2; /*0x4ea846*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->Items + 4 * i - 4) ) /*0x4ea84c*/
        ++i; /*0x4ea851*/
      if ( BYTE1(this->IsInitialized) ) /*0x4ea85e*/
      {
        __3_YAXPAX_Z(*&this->Items); /*0x4ea869*/
        *&this->Items = 0; /*0x4ea871*/
      }
    }
    *&this->Items = v4; /*0x4ea87a*/
    this->Capacity = a2; /*0x4ea882*/
    BYTE1(this->IsInitialized) = a3 == 0; /*0x4ea885*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PAVTriggerTypeClass *))(*(unsigned int *)this->vfptr + 12))(this); /*0x4ea88e*/
  }
  v7 = this->Capacity; /*0x4ea891*/
  if ( v7 < this->Count ) /*0x4ea899*/
    this->Count = v7; /*0x4ea89b*/
  return 1; /*0x4ea89e*/

}
// 0x4EA8B0
int VectorClass_ptr_AITriggerTypeClass::FindItemIndex_1(unsigned int * a2)
{

  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->Count; /*0x4ea8b0*/
  result = 0; /*0x4ea8b3*/
  if ( m_10 <= 0 ) /*0x4ea8b8*/
    return -1; /*0x4ea8cf*/
  for ( i = *&this->Items; *i != *a2; ++i ) /*0x4ea8be*/
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

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4eaf2c*/
  {
    LOBYTE(this->IsInitialized) = 0; /*0x4eaf32*/
    if ( a3 ) /*0x4eaf38*/
      v4 = a3; /*0x4eaf4e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x4eaf4a*/
    LOBYTE(this->IsInitialized) = 1; /*0x4eaf52*/
    if ( !v4 ) /*0x4eaf56*/
      return 0; /*0x4eafca*/
    if ( *&this->Items ) /*0x4eaf58*/
    {
      m_8 = this->Capacity; /*0x4eaf5f*/
      if ( a2 < m_8 ) /*0x4eaf64*/
        m_8 = a2; /*0x4eaf66*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->Items + 4 * i - 4) ) /*0x4eaf6c*/
        ++i; /*0x4eaf71*/
      if ( BYTE1(this->IsInitialized) ) /*0x4eaf7e*/
      {
        __3_YAXPAX_Z(*&this->Items); /*0x4eaf89*/
        *&this->Items = 0; /*0x4eaf91*/
      }
    }
    *&this->Items = v4; /*0x4eaf9a*/
    this->Capacity = a2; /*0x4eafa2*/
    BYTE1(this->IsInitialized) = a3 == 0; /*0x4eafa5*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PAVWaveClass *))(*(unsigned int *)this->vfptr + 12))(this); /*0x4eafae*/
  }
  v7 = this->Capacity; /*0x4eafb1*/
  if ( v7 < this->Count ) /*0x4eafb9*/
    this->Count = v7; /*0x4eafbb*/
  return 1; /*0x4eafbe*/

}
// 0x4EAFD0
int VectorClass_ptr_TubeClass::FindItemIndex_0(unsigned int * a2)
{

  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->Count; /*0x4eafd0*/
  result = 0; /*0x4eafd3*/
  if ( m_10 <= 0 ) /*0x4eafd8*/
    return -1; /*0x4eafef*/
  for ( i = *&this->Items; *i != *a2; ++i ) /*0x4eafde*/
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

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4eb18c*/
  {
    LOBYTE(this->IsInitialized) = 0; /*0x4eb192*/
    if ( a3 ) /*0x4eb198*/
      v4 = a3; /*0x4eb1ae*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x4eb1aa*/
    LOBYTE(this->IsInitialized) = 1; /*0x4eb1b2*/
    if ( !v4 ) /*0x4eb1b6*/
      return 0; /*0x4eb22a*/
    if ( *&this->Items ) /*0x4eb1b8*/
    {
      m_8 = this->Capacity; /*0x4eb1bf*/
      if ( a2 < m_8 ) /*0x4eb1c4*/
        m_8 = a2; /*0x4eb1c6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->Items + 4 * i - 4) ) /*0x4eb1cc*/
        ++i; /*0x4eb1d1*/
      if ( BYTE1(this->IsInitialized) ) /*0x4eb1de*/
      {
        __3_YAXPAX_Z(*&this->Items); /*0x4eb1e9*/
        *&this->Items = 0; /*0x4eb1f1*/
      }
    }
    *&this->Items = v4; /*0x4eb1fa*/
    this->Capacity = a2; /*0x4eb202*/
    BYTE1(this->IsInitialized) = a3 == 0; /*0x4eb205*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PAVOverlayClass *))(*(unsigned int *)this->vfptr + 12))(this); /*0x4eb20e*/
  }
  v7 = this->Capacity; /*0x4eb211*/
  if ( v7 < this->Count ) /*0x4eb219*/
    this->Count = v7; /*0x4eb21b*/
  return 1; /*0x4eb21e*/

}
// 0x4EB230
int VectorClass_ptr_TubeClass::FindItemIndex_1(unsigned int * a2)
{

  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->Count; /*0x4eb230*/
  result = 0; /*0x4eb233*/
  if ( m_10 <= 0 ) /*0x4eb238*/
    return -1; /*0x4eb24f*/
  for ( i = *&this->Items; *i != *a2; ++i ) /*0x4eb23e*/
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

  if ( this->u32_C ) /*0x4ebfa0*/
    return (unsigned int)(a2 - this->u32_4) >> 2; /*0x4ebfb5*/
  else
    return 0; /*0x4ebfa7*/

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

  if ( this->u32_4 && this->u32_D ) /*0x4ed95d*/
  {
    __3_YAXPAX_Z(*&this->u32_4); /*0x4ed963*/
    this->u32_4 = 0; /*0x4ed96b*/
  }
  this->u32_D = 0; /*0x4ed96e*/
  this->u32_8 = 0; /*0x4ed971*/

}
// 0x4ED980

// 0x4ED9C0
unsigned int VectorClass_ptr_BuildingTypeClass::Remove(int a2, void *a2_1)
{

  if ( LOBYTE(this->IsInitialized) ) /*0x4ed9c0*/
    return (unsigned int)(a2 - *&this->Items) >> 2; /*0x4ed9d5*/
  else
    return 0; /*0x4ed9c7*/

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

  void *v3 = *&Block->__pad_004; // eax /*0x4ef673*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4ef676*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4ef680*/
  {
    __3_YAXPAX_Z(v3); /*0x4ef688*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4ef690*/
  }
  BYTE1(Block->m_C) = 0; /*0x4ef69b*/
  Block->m_8 = 0; /*0x4ef6a1*/
  if ( (a2 & 1) != 0 ) /*0x4ef6a8*/
    __3_YAXPAX_Z(Block); /*0x4ef6ab*/
  return Block->__pad_0; /*0x4ef6b5*/

}
// 0x4EF6C0

// 0x4EF710
DynamicVector * VectorClass_ptr_AITriggerTypeClass::Constructor_VectorClass_AITriggerTypeClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4ef713*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4ef716*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4ef720*/
  {
    __3_YAXPAX_Z(v3); /*0x4ef728*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4ef730*/
  }
  BYTE1(Block->m_C) = 0; /*0x4ef73b*/
  Block->m_8 = 0; /*0x4ef741*/
  if ( (a2 & 1) != 0 ) /*0x4ef748*/
    __3_YAXPAX_Z(Block); /*0x4ef74b*/
  return Block->__pad_0; /*0x4ef755*/

}
// 0x4EF760

// 0x4EF7B0
DynamicVector * VectorClass_ptr_BuildingLightClass::Constructor_VectorClass_BuildingLightClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4ef7b3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4ef7b6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4ef7c0*/
  {
    __3_YAXPAX_Z(v3); /*0x4ef7c8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4ef7d0*/
  }
  BYTE1(Block->m_C) = 0; /*0x4ef7db*/
  Block->m_8 = 0; /*0x4ef7e1*/
  if ( (a2 & 1) != 0 ) /*0x4ef7e8*/
    __3_YAXPAX_Z(Block); /*0x4ef7eb*/
  return Block->__pad_0; /*0x4ef7f5*/

}
// 0x4EF8A0

// 0x4EF8F0
DynamicVector * VectorClass_ptr_TeamClass::Constructor_VectorClass_TeamClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4ef8f3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4ef8f6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4ef900*/
  {
    __3_YAXPAX_Z(v3); /*0x4ef908*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4ef910*/
  }
  BYTE1(Block->m_C) = 0; /*0x4ef91b*/
  Block->m_8 = 0; /*0x4ef921*/
  if ( (a2 & 1) != 0 ) /*0x4ef928*/
    __3_YAXPAX_Z(Block); /*0x4ef92b*/
  return Block->__pad_0; /*0x4ef935*/

}
// 0x4EF940

// 0x4EF990

// 0x4EF9E0
DynamicVector * VectorClass_ptr_AITriggerTypeClass::Constructor_VectorClass_TriggerClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4ef9e3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4ef9e6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4ef9f0*/
  {
    __3_YAXPAX_Z(v3); /*0x4ef9f8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4efa00*/
  }
  BYTE1(Block->m_C) = 0; /*0x4efa0b*/
  Block->m_8 = 0; /*0x4efa11*/
  if ( (a2 & 1) != 0 ) /*0x4efa18*/
    __3_YAXPAX_Z(Block); /*0x4efa1b*/
  return Block->__pad_0; /*0x4efa25*/

}
// 0x4EFA30

// 0x4EFA80
DynamicVector * VectorClass_ptr_AITriggerTypeClass::Constructor_VectorClass_TriggerTypeClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4efa83*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4efa86*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4efa90*/
  {
    __3_YAXPAX_Z(v3); /*0x4efa98*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4efaa0*/
  }
  BYTE1(Block->m_C) = 0; /*0x4efaab*/
  Block->m_8 = 0; /*0x4efab1*/
  if ( (a2 & 1) != 0 ) /*0x4efab8*/
    __3_YAXPAX_Z(Block); /*0x4efabb*/
  return Block->__pad_0; /*0x4efac5*/

}
// 0x4EFAD0

// 0x4EFB20
DynamicVector * VectorClass_ptr_TubeClass::Constructor_VectorClass_TubeClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4efb23*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4efb26*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4efb30*/
  {
    __3_YAXPAX_Z(v3); /*0x4efb38*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4efb40*/
  }
  BYTE1(Block->m_C) = 0; /*0x4efb4b*/
  Block->m_8 = 0; /*0x4efb51*/
  if ( (a2 & 1) != 0 ) /*0x4efb58*/
    __3_YAXPAX_Z(Block); /*0x4efb5b*/
  return Block->__pad_0; /*0x4efb65*/

}
// 0x4EFB70

// 0x4EFBC0
DynamicVector * VectorClass_ptr_BuildingLightClass::Constructor_VectorClass_ParticleSystemClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4efbc3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4efbc6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4efbd0*/
  {
    __3_YAXPAX_Z(v3); /*0x4efbd8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4efbe0*/
  }
  BYTE1(Block->m_C) = 0; /*0x4efbeb*/
  Block->m_8 = 0; /*0x4efbf1*/
  if ( (a2 & 1) != 0 ) /*0x4efbf8*/
    __3_YAXPAX_Z(Block); /*0x4efbfb*/
  return Block->__pad_0; /*0x4efc05*/

}
// 0x4EFC10

// 0x4EFC60
DynamicVector * VectorClass_ptr_TubeClass::Constructor_VectorClass_WaveClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4efc63*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4efc66*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4efc70*/
  {
    __3_YAXPAX_Z(v3); /*0x4efc78*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4efc80*/
  }
  BYTE1(Block->m_C) = 0; /*0x4efc8b*/
  Block->m_8 = 0; /*0x4efc91*/
  if ( (a2 & 1) != 0 ) /*0x4efc98*/
    __3_YAXPAX_Z(Block); /*0x4efc9b*/
  return Block->__pad_0; /*0x4efca5*/

}
// 0x4EFCB0

// 0x4EFD00
DynamicVector * VectorClass_ptr_TubeClass::Constructor_VectorClass_OverlayClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4efd03*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4efd06*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4efd10*/
  {
    __3_YAXPAX_Z(v3); /*0x4efd18*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4efd20*/
  }
  BYTE1(Block->m_C) = 0; /*0x4efd2b*/
  Block->m_8 = 0; /*0x4efd31*/
  if ( (a2 & 1) != 0 ) /*0x4efd38*/
    __3_YAXPAX_Z(Block); /*0x4efd3b*/
  return Block->__pad_0; /*0x4efd45*/

}
// 0x4EFE90

// 0x4EFF30

// 0x4EFF80
DynamicVector * VectorClass_ptr_UnitClass::Constructor_VectorClass_UnitClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4eff83*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4eff86*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4eff90*/
  {
    __3_YAXPAX_Z(v3); /*0x4eff98*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4effa0*/
  }
  BYTE1(Block->m_C) = 0; /*0x4effab*/
  Block->m_8 = 0; /*0x4effb1*/
  if ( (a2 & 1) != 0 ) /*0x4effb8*/
    __3_YAXPAX_Z(Block); /*0x4effbb*/
  return Block->__pad_0; /*0x4effc5*/

}
// 0x4EFFD0

// 0x4F0020
DynamicVector * VectorClass_ptr_UnitClass::Constructor_VectorClass_HouseClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4f0023*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4f0026*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4f0030*/
  {
    __3_YAXPAX_Z(v3); /*0x4f0038*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4f0040*/
  }
  BYTE1(Block->m_C) = 0; /*0x4f004b*/
  Block->m_8 = 0; /*0x4f0051*/
  if ( (a2 & 1) != 0 ) /*0x4f0058*/
    __3_YAXPAX_Z(Block); /*0x4f005b*/
  return Block->__pad_0; /*0x4f0065*/

}
// 0x4F0070

// 0x4F00C0
DynamicVector * VectorClass_ptr_TeamClass::Constructor_VectorClass_AnimClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4f00c3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4f00c6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4f00d0*/
  {
    __3_YAXPAX_Z(v3); /*0x4f00d8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4f00e0*/
  }
  BYTE1(Block->m_C) = 0; /*0x4f00eb*/
  Block->m_8 = 0; /*0x4f00f1*/
  if ( (a2 & 1) != 0 ) /*0x4f00f8*/
    __3_YAXPAX_Z(Block); /*0x4f00fb*/
  return Block->__pad_0; /*0x4f0105*/

}
// 0x4F0110

// 0x4F0160
DynamicVector * VectorClass_ptr_TeamClass::Constructor_VectorClass_FactoryClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4f0163*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4f0166*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4f0170*/
  {
    __3_YAXPAX_Z(v3); /*0x4f0178*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4f0180*/
  }
  BYTE1(Block->m_C) = 0; /*0x4f018b*/
  Block->m_8 = 0; /*0x4f0191*/
  if ( (a2 & 1) != 0 ) /*0x4f0198*/
    __3_YAXPAX_Z(Block); /*0x4f019b*/
  return Block->__pad_0; /*0x4f01a5*/

}
// 0x4F01B0

// 0x4F0200
DynamicVector * VectorClass_ptr_CampaignClass::Constructor_VectorClass_CampaignClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4f0203*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4f0206*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4f0210*/
  {
    __3_YAXPAX_Z(v3); /*0x4f0218*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4f0220*/
  }
  BYTE1(Block->m_C) = 0; /*0x4f022b*/
  Block->m_8 = 0; /*0x4f0231*/
  if ( (a2 & 1) != 0 ) /*0x4f0238*/
    __3_YAXPAX_Z(Block); /*0x4f023b*/
  return Block->__pad_0; /*0x4f0245*/

}
// 0x4F0250

// 0x4F02A0
DynamicVector * VectorClass_ptr_CampaignClass::Constructor_VectorClass_SideClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4f02a3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4f02a6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4f02b0*/
  {
    __3_YAXPAX_Z(v3); /*0x4f02b8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4f02c0*/
  }
  BYTE1(Block->m_C) = 0; /*0x4f02cb*/
  Block->m_8 = 0; /*0x4f02d1*/
  if ( (a2 & 1) != 0 ) /*0x4f02d8*/
    __3_YAXPAX_Z(Block); /*0x4f02db*/
  return Block->__pad_0; /*0x4f02e5*/

}
// 0x4F02F0

// 0x4F0340
DynamicVector * VectorClass_ptr_HouseTypeClass::Constructor_VectorClass_HouseTypeClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4f0343*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4f0346*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4f0350*/
  {
    __3_YAXPAX_Z(v3); /*0x4f0358*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4f0360*/
  }
  BYTE1(Block->m_C) = 0; /*0x4f036b*/
  Block->m_8 = 0; /*0x4f0371*/
  if ( (a2 & 1) != 0 ) /*0x4f0378*/
    __3_YAXPAX_Z(Block); /*0x4f037b*/
  return Block->__pad_0; /*0x4f0385*/

}
// 0x4F0390

// 0x4F03E0
DynamicVector * VectorClass_ptr_HouseTypeClass::Constructor_VectorClass_TaskForceClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4f03e3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4f03e6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4f03f0*/
  {
    __3_YAXPAX_Z(v3); /*0x4f03f8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4f0400*/
  }
  BYTE1(Block->m_C) = 0; /*0x4f040b*/
  Block->m_8 = 0; /*0x4f0411*/
  if ( (a2 & 1) != 0 ) /*0x4f0418*/
    __3_YAXPAX_Z(Block); /*0x4f041b*/
  return Block->__pad_0; /*0x4f0425*/

}
// 0x4F0430

// 0x4F0480
DynamicVector * VectorClass_ptr_HouseTypeClass::Constructor_VectorClass_TeamTypeClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4f0483*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4f0486*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4f0490*/
  {
    __3_YAXPAX_Z(v3); /*0x4f0498*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4f04a0*/
  }
  BYTE1(Block->m_C) = 0; /*0x4f04ab*/
  Block->m_8 = 0; /*0x4f04b1*/
  if ( (a2 & 1) != 0 ) /*0x4f04b8*/
    __3_YAXPAX_Z(Block); /*0x4f04bb*/
  return Block->__pad_0; /*0x4f04c5*/

}
// 0x4F04D0

// 0x4F0520
DynamicVector * VectorClass_ptr_ScriptTypeClass::Constructor_VectorClass_ScriptTypeClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4f0523*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4f0526*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4f0530*/
  {
    __3_YAXPAX_Z(v3); /*0x4f0538*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4f0540*/
  }
  BYTE1(Block->m_C) = 0; /*0x4f054b*/
  Block->m_8 = 0; /*0x4f0551*/
  if ( (a2 & 1) != 0 ) /*0x4f0558*/
    __3_YAXPAX_Z(Block); /*0x4f055b*/
  return Block->__pad_0; /*0x4f0565*/

}
// 0x4F0570

// 0x4F05C0
DynamicVector * VectorClass_ptr_ScriptTypeClass::Constructor_VectorClass_OverlayTypeClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4f05c3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4f05c6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4f05d0*/
  {
    __3_YAXPAX_Z(v3); /*0x4f05d8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4f05e0*/
  }
  BYTE1(Block->m_C) = 0; /*0x4f05eb*/
  Block->m_8 = 0; /*0x4f05f1*/
  if ( (a2 & 1) != 0 ) /*0x4f05f8*/
    __3_YAXPAX_Z(Block); /*0x4f05fb*/
  return Block->__pad_0; /*0x4f0605*/

}
// 0x4F0610

// 0x4F0660
DynamicVector * VectorClass_ptr_SmudgeTypeClass::Constructor_VectorClass_SmudgeTypeClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4f0663*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4f0666*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4f0670*/
  {
    __3_YAXPAX_Z(v3); /*0x4f0678*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4f0680*/
  }
  BYTE1(Block->m_C) = 0; /*0x4f068b*/
  Block->m_8 = 0; /*0x4f0691*/
  if ( (a2 & 1) != 0 ) /*0x4f0698*/
    __3_YAXPAX_Z(Block); /*0x4f069b*/
  return Block->__pad_0; /*0x4f06a5*/

}
// 0x4F06B0

// 0x4F0700
DynamicVector * VectorClass_ptr_SmudgeTypeClass::Constructor_VectorClass_TerrainTypeClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4f0703*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4f0706*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4f0710*/
  {
    __3_YAXPAX_Z(v3); /*0x4f0718*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4f0720*/
  }
  BYTE1(Block->m_C) = 0; /*0x4f072b*/
  Block->m_8 = 0; /*0x4f0731*/
  if ( (a2 & 1) != 0 ) /*0x4f0738*/
    __3_YAXPAX_Z(Block); /*0x4f073b*/
  return Block->__pad_0; /*0x4f0745*/

}
// 0x4F0750

// 0x4F07A0
DynamicVector * VectorClass_ptr_SmudgeTypeClass::Constructor_VectorClass_BuildingTypeClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4f07a3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4f07a6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4f07b0*/
  {
    __3_YAXPAX_Z(v3); /*0x4f07b8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4f07c0*/
  }
  BYTE1(Block->m_C) = 0; /*0x4f07cb*/
  Block->m_8 = 0; /*0x4f07d1*/
  if ( (a2 & 1) != 0 ) /*0x4f07d8*/
    __3_YAXPAX_Z(Block); /*0x4f07db*/
  return Block->__pad_0; /*0x4f07e5*/

}
// 0x4F07F0

// 0x4F0840
DynamicVector * VectorClass_ptr_AircraftTypeClass::Constructor_VectorClass_AircraftTypeClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4f0843*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4f0846*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4f0850*/
  {
    __3_YAXPAX_Z(v3); /*0x4f0858*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4f0860*/
  }
  BYTE1(Block->m_C) = 0; /*0x4f086b*/
  Block->m_8 = 0; /*0x4f0871*/
  if ( (a2 & 1) != 0 ) /*0x4f0878*/
    __3_YAXPAX_Z(Block); /*0x4f087b*/
  return Block->__pad_0; /*0x4f0885*/

}
// 0x4F0890

// 0x4F08E0
DynamicVector * VectorClass_ptr_AircraftTypeClass::Constructor_VectorClass_UnitTypeClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4f08e3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4f08e6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4f08f0*/
  {
    __3_YAXPAX_Z(v3); /*0x4f08f8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4f0900*/
  }
  BYTE1(Block->m_C) = 0; /*0x4f090b*/
  Block->m_8 = 0; /*0x4f0911*/
  if ( (a2 & 1) != 0 ) /*0x4f0918*/
    __3_YAXPAX_Z(Block); /*0x4f091b*/
  return Block->__pad_0; /*0x4f0925*/

}
// 0x4F0930

// 0x4F0980
DynamicVector * VectorClass_ptr_AnimTypeClass::Constructor_VectorClass_AnimTypeClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4f0983*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4f0986*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4f0990*/
  {
    __3_YAXPAX_Z(v3); /*0x4f0998*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4f09a0*/
  }
  BYTE1(Block->m_C) = 0; /*0x4f09ab*/
  Block->m_8 = 0; /*0x4f09b1*/
  if ( (a2 & 1) != 0 ) /*0x4f09b8*/
    __3_YAXPAX_Z(Block); /*0x4f09bb*/
  return Block->__pad_0; /*0x4f09c5*/

}
// 0x4F09D0

// 0x4F0A20
DynamicVector * VectorClass_ptr_AnimTypeClass::Constructor_VectorClass_InfantryTypeClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4f0a23*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4f0a26*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4f0a30*/
  {
    __3_YAXPAX_Z(v3); /*0x4f0a38*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4f0a40*/
  }
  BYTE1(Block->m_C) = 0; /*0x4f0a4b*/
  Block->m_8 = 0; /*0x4f0a51*/
  if ( (a2 & 1) != 0 ) /*0x4f0a58*/
    __3_YAXPAX_Z(Block); /*0x4f0a5b*/
  return Block->__pad_0; /*0x4f0a65*/

}
// 0x4F0A70

// 0x4F0AC0
DynamicVector * VectorClass_ptr_AnimTypeClass::Constructor_VectorClass_BulletTypeClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4f0ac3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4f0ac6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4f0ad0*/
  {
    __3_YAXPAX_Z(v3); /*0x4f0ad8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4f0ae0*/
  }
  BYTE1(Block->m_C) = 0; /*0x4f0aeb*/
  Block->m_8 = 0; /*0x4f0af1*/
  if ( (a2 & 1) != 0 ) /*0x4f0af8*/
    __3_YAXPAX_Z(Block); /*0x4f0afb*/
  return Block->__pad_0; /*0x4f0b05*/

}
// 0x4F0B10

// 0x4F0B60
DynamicVector * VectorClass_ptr_VoxelAnimTypeClass::Constructor_VectorClass_VoxelAnimTypeClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4f0b63*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4f0b66*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4f0b70*/
  {
    __3_YAXPAX_Z(v3); /*0x4f0b78*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4f0b80*/
  }
  BYTE1(Block->m_C) = 0; /*0x4f0b8b*/
  Block->m_8 = 0; /*0x4f0b91*/
  if ( (a2 & 1) != 0 ) /*0x4f0b98*/
    __3_YAXPAX_Z(Block); /*0x4f0b9b*/
  return Block->__pad_0; /*0x4f0ba5*/

}
// 0x4F0BB0

// 0x4F0C00
DynamicVector * VectorClass_ptr_VoxelAnimTypeClass::Constructor_VectorClass_IsometricTileTypeClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4f0c03*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4f0c06*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4f0c10*/
  {
    __3_YAXPAX_Z(v3); /*0x4f0c18*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4f0c20*/
  }
  BYTE1(Block->m_C) = 0; /*0x4f0c2b*/
  Block->m_8 = 0; /*0x4f0c31*/
  if ( (a2 & 1) != 0 ) /*0x4f0c38*/
    __3_YAXPAX_Z(Block); /*0x4f0c3b*/
  return Block->__pad_0; /*0x4f0c45*/

}
// 0x4F0C50

// 0x4F0CA0
DynamicVector * VectorClass_ptr_ParticleTypeClass::Constructor_VectorClass_ParticleTypeClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4f0ca3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4f0ca6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4f0cb0*/
  {
    __3_YAXPAX_Z(v3); /*0x4f0cb8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4f0cc0*/
  }
  BYTE1(Block->m_C) = 0; /*0x4f0ccb*/
  Block->m_8 = 0; /*0x4f0cd1*/
  if ( (a2 & 1) != 0 ) /*0x4f0cd8*/
    __3_YAXPAX_Z(Block); /*0x4f0cdb*/
  return Block->__pad_0; /*0x4f0ce5*/

}
// 0x4F0CF0

// 0x4F0D40
DynamicVector * VectorClass_ptr_ParticleTypeClass::Constructor_VectorClass_ParticleSystemTypeClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4f0d43*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4f0d46*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4f0d50*/
  {
    __3_YAXPAX_Z(v3); /*0x4f0d58*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4f0d60*/
  }
  BYTE1(Block->m_C) = 0; /*0x4f0d6b*/
  Block->m_8 = 0; /*0x4f0d71*/
  if ( (a2 & 1) != 0 ) /*0x4f0d78*/
    __3_YAXPAX_Z(Block); /*0x4f0d7b*/
  return Block->__pad_0; /*0x4f0d85*/

}
// 0x4F0D90

// 0x4F0DE0
DynamicVector * VectorClass_ptr_ParticleTypeClass::Constructor_VectorClass_SuperWeaponTypeClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4f0de3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4f0de6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4f0df0*/
  {
    __3_YAXPAX_Z(v3); /*0x4f0df8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4f0e00*/
  }
  BYTE1(Block->m_C) = 0; /*0x4f0e0b*/
  Block->m_8 = 0; /*0x4f0e11*/
  if ( (a2 & 1) != 0 ) /*0x4f0e18*/
    __3_YAXPAX_Z(Block); /*0x4f0e1b*/
  return Block->__pad_0; /*0x4f0e25*/

}
// 0x4F0E30

// 0x4F0E80
DynamicVector * VectorClass_ptr_SuperClass::Constructor_VectorClass_AbstractTypeClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4f0e83*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4f0e86*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4f0e90*/
  {
    __3_YAXPAX_Z(v3); /*0x4f0e98*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4f0ea0*/
  }
  BYTE1(Block->m_C) = 0; /*0x4f0eab*/
  Block->m_8 = 0; /*0x4f0eb1*/
  if ( (a2 & 1) != 0 ) /*0x4f0eb8*/
    __3_YAXPAX_Z(Block); /*0x4f0ebb*/
  return Block->__pad_0; /*0x4f0ec5*/

}
// 0x4F6910
bool VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItemIndex(int a1)
{
  int v2; // [esp+8h] [ebp+4h]

  return *(unsigned int *)(v2 + 21372) >= *(unsigned int *)(v2 + 21376); /*0x4f6925*/
}
// 0x4F6930

// 0x4F6950

// 0x4F6990

// 0x4F69D0

// 0x4F6A00
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem(HouseClass * a1)
{

  return a1->numWarFactories; /*0x4f6a0a*/

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

  return *(unsigned int *)(v2 + 12); /*0x4f6e67*/
}
// 0x5013A0
int  VectorClass_ptr_BuildChoiceClass_int_ouseClass::ScalarDeletingDestructor(void *a1)
{
  int repairStationsCount; // ebx
  int i; // esi
  int v3; // ecx

  if ( this->aircraftAltOwner <= 0 ) /*0x5013ad*/
    return 1; /*0x5013ec*/
  repairStationsCount = this->repairStationsCount; /*0x5013b0*/
  for ( i = 0; i < repairStationsCount; ++i ) /*0x5013b8*/
  {
    v3 = *(unsigned int *)(this->buildingsCount + 4 * i); /*0x5013bd*/
    if ( v3 && !*(unsigned char *)(v3 + 129) && *(int *)(v3 + 108) > 0 ) /*0x5013d3*/
      (*(void (**)(int, int))(*(unsigned int *)v3 + 416))(v3, 1); /*0x5013d9*/
  }
  return 0; /*0x5013e8*/
}
// 0x5024F0
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::StubReturnNullPointer(int a1, unsigned int * a2)
{
  VectorClass_ptr_BuildChoiceClass_int_ouseClass *v3; // eax
  unsigned int *v4; // eax
  unsigned int *v5; // esi

  if ( !a2 ) /*0x5024f8*/
    return -2147467261; /*0x5024fb*/
  v3 = (VectorClass_ptr_BuildChoiceClass_int_ouseClass *)operator new(0x24u); /*0x502506*/
  if ( !v3 ) /*0x502510*/
    return -2147024882; /*0x502510*/
  v4 = VectorClass_ptr_BuildChoiceClass_int_ouseClass::Constructor(v3, &a1->uiName[18]); /*0x50251f*/
  v5 = v4; /*0x502524*/
  if ( !v4 ) /*0x502528*/
    return -2147024882; /*0x50252b*/
  v4->AddRef(); /*0x502537*/
  *a2 = v5; /*0x50253a*/
  return 0; /*0x5024fa*/
}
// 0x502550
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::StubReturnNullPointer_0(int a1, const void * a2, unsigned int * a3)
{
  int v4; // ebp
  int v5; // ebx
  unsigned char v6[16]; // [esp+10h] [ebp-10h] BYREF

  if ( !a3 ) /*0x50255d*/
    return -2147467261; /*0x502562*/
  *a3 = 0; /*0x50256e*/
  v4 = 0; /*0x502578*/
  if ( *(int *)&a1->uiName[34] <= 0 ) /*0x502582*/
    return -2147220990; /*0x5025bc*/
  while ( 1 ) /*0x502593*/
  {
    v5 = *(unsigned int *)(*(unsigned int *)&a1->uiName[22] + 4 * v4); /*0x502593*/
    (*(void (__stdcall **)(int, unsigned char *))(*(unsigned int *)v5 + 12))(v5, v6); /*0x502599*/
    if ( !memcmp(v6, a2, 0x10u) ) /*0x5025ab*/
      break; /*0x5025ab*/
    if ( ++v4 >= *(unsigned int *)&a1->uiName[34] ) /*0x5025ba*/
      return -2147220990; /*0x5025ba*/
  }
  *a3 = v5; /*0x5025d0*/
  (*(void (__stdcall **)(int))(*(unsigned int *)v5 + 4))(v5); /*0x5025d4*/
  return 0; /*0x50255f*/
}
// 0x50E4A0

// 0x50E4D0

// 0x50E4F0
int VectorClass_BuildingType::Count(int a2)
{

  return *(unsigned int *)(*&this->Items + 4 * a2); /*0x50e4fa*/

}
// 0x50E500

// 0x50E530

// 0x50E550
int VectorClass_UAngerStruct___16::Clear(int a2)
{

  return *(unsigned int *)(*&this->ptr_4 + 4 * a2); /*0x50e55a*/

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

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x50e69a*/

}
// 0x50E6A0

// 0x50E6D0

// 0x50E6F0
int VectorClass_BuildingType::GetElement(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x50e6fa*/

}
// 0x50E700

// 0x50E730

// 0x50E750
char VectorClass__N::Clear(int a2)
{

  return *(unsigned char *)(*&this->Items + a2); /*0x50e75a*/

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

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a3_2 ) /*0x50e95c*/
  {
    LOBYTE(a3_2->m_C) = 0; /*0x50e966*/
    if ( a3_2 ) /*0x50e96c*/
      v4 = a3_2; /*0x50e982*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a3_2); /*0x50e97e*/
    LOBYTE(a3_2->m_C) = 1; /*0x50e986*/
    if ( v4 ) /*0x50e98a*/
    {
      if ( *(unsigned int *)&a3_2->m_1[3] ) /*0x50e995*/
      {
        m_8 = a3_2->m_8; /*0x50e99c*/
        if ( a3_2 < m_8 ) /*0x50e9a1*/
          m_8 = a3_2; /*0x50e9a3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&a3_2->m_1[3] + 4 * i - 4) ) /*0x50e9a9*/
          ++i; /*0x50e9ae*/
        if ( BYTE1(a3_2->m_C) ) /*0x50e9bb*/
        {
          __3_YAXPAX_Z(*(void **)&a3_2->m_1[3]); /*0x50e9c6*/
          *(unsigned int *)&a3_2->m_1[3] = 0; /*0x50e9ce*/
        }
      }
      *(unsigned int *)&a3_2->m_1[3] = v4; /*0x50e9d7*/
      a3_2->m_8 = a3_2; /*0x50e9df*/
      BYTE1(a3_2->m_C) = a3_2 == 0; /*0x50e9e2*/
      return 1; /*0x50e9e8*/
    }
    else
    {
      return 0; /*0x50e98f*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_PBVBuildingTypeClass *))(*(unsigned int *)a3_2->__pad_0 + 12))(a3_2); /*0x50e9f2*/
    return 1; /*0x50e9f8*/
  }

}
// 0x50EA30

// 0x50EA70

// 0x50EB40

// 0x50EB70
char VectorClass_flat::InsertAt(IUnknown * aP1, int a3)
{

  int Capacity; // ecx
  int CapacityIncrement; // eax
  int Count; // edx
  unsigned int *v8; // edi

  Capacity = this->Capacity; /*0x50eb73*/
  if ( this->Count >= Capacity ) /*0x50eb7b*/
  {
    if ( !this->IsAllocated[0] && Capacity ) /*0x50eb86*/
      return 0; /*0x50eb86*/
    CapacityIncrement = this->CapacityIncrement; /*0x50eb88*/
    if ( CapacityIncrement <= 0 /*0x50eb98*/
      || !(*(unsigned __int8 (**)(DynamicVectorClass *, int, unsigned int))(this->vtable0 + 8))(
            this,
            Capacity + CapacityIncrement,
            0) )
    {
      return 0; /*0x50eb9f*/
    }
  }
  Count = this->Count; /*0x50eba5*/
  if ( a3 < Count - 1 ) /*0x50ebb2*/
    memcpy( /*0x50ebd7*/
      (void *)(this->Items + 16 * (a3 + 2)),
      (const void *)(this->Items + 16 * (a3 + 1)),
      16 * (Count + 0xFFFFFFF * (a3 + 1)));
  v8 = (unsigned int *)(this->Items + 16 * (a3 + 1)); /*0x50ebeb*/
  *v8 = *aP1; /*0x50ebef*/
  v8[1] = aP1[1]; /*0x50ebf4*/
  v8[2] = aP1[2]; /*0x50ebfa*/
  v8[3] = aP1[3]; /*0x50ec00*/
  ++this->Count; /*0x50ec08*/
  return 1; /*0x50eba1*/

}
// 0x50EC20

// 0x50EC60

// 0x50ED10
void VectorClass_UAngerStruct___16::ddtor(void *a1_1)
{

  if ( *(unsigned int *)&a1_1->m_1[3] && BYTE1(a1_1->m_C) ) /*0x50ed1d*/
  {
    __3_YAXPAX_Z(*(void **)&a1_1->m_1[3]); /*0x50ed23*/
    *(unsigned int *)&a1_1->m_1[3] = 0; /*0x50ed2b*/
  }
  BYTE1(a1_1->m_C) = 0; /*0x50ed2e*/
  a1_1->m_8 = 0; /*0x50ed31*/

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

  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->Capacity; /*0x50f742*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x50f74d*/
  {
    v3 = 0; /*0x50f74f*/
    if ( m_8 <= 0 ) /*0x50f753*/
      return 1; /*0x50f773*/
    v4 = *&this->Items; /*0x50f755*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x50f75b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x50f764*/
    {
      ++v3; /*0x50f766*/
      ++v4; /*0x50f767*/
      if ( v3 >= m_8 ) /*0x50f76c*/
        return 1; /*0x50f76c*/
    }
  }
  return 0; /*0x50f76e*/

}
// 0x50F780

// 0x50F830
void VectorClass_flat::ClearAndFree3()
{

  if ( this->u32_4 && this->u32_D ) /*0x50f83d*/
  {
    __3_YAXPAX_Z(*&this->u32_4); /*0x50f843*/
    this->u32_4 = 0; /*0x50f84b*/
  }
  this->u32_D = 0; /*0x50f84e*/
  this->u32_8 = 0; /*0x50f851*/

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

  void *v3 = *&Block->vtable2; // eax /*0x50fff3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x50fff6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x510000*/
  {
    __3_YAXPAX_Z(v3); /*0x510008*/
    *&Block->ptr_4 = 0; /*0x510010*/
  }
  BYTE1(Block->m_C) = 0; /*0x51001b*/
  Block->m_8 = 0; /*0x510021*/
  if ( (a2 & 1) != 0 ) /*0x510028*/
    __3_YAXPAX_Z(Block); /*0x51002b*/
  return Block->__pad_0; /*0x510035*/

}
// 0x510040

// 0x510090

// 0x5100E0

// 0x510130

// 0x510180
DynamicVector * VectorClass_UAngerStruct::Constructor_VectorClass_AngerStruct_(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x510183*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x510186*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x510190*/
  {
    __3_YAXPAX_Z(v3); /*0x510198*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x5101a0*/
  }
  BYTE1(Block->m_C) = 0; /*0x5101ab*/
  Block->m_8 = 0; /*0x5101b1*/
  if ( (a2 & 1) != 0 ) /*0x5101b8*/
    __3_YAXPAX_Z(Block); /*0x5101bb*/
  return Block->__pad_0; /*0x5101c5*/

}
// 0x5101D0

// 0x510270

// 0x5102C0
unsigned int * VectorClass_ptr_BuildChoiceClass_int_ouseClass::loc_5102C0(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5102c3*/
  *Block = &vt_VectorClass_HouseClass_BuildChoiceClass; /*0x5102c6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x5102d0*/
  {
    __3_YAXPAX_Z(v3); /*0x5102d8*/
    *(Block + 1) = 0; /*0x5102e0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x5102eb*/
  *(Block + 2) = 0; /*0x5102f1*/
  if ( (a2 & 1) != 0 ) /*0x5102f8*/
    __3_YAXPAX_Z(Block); /*0x5102fb*/
  return Block; /*0x510305*/

}
// 0x510310
VectorClass_flat * VectorClass_BuildingType::Constructor_0(unsigned int * Block, char a2, void *a3_1)
{

  void *v3 = *&Block->__pad_004; // eax /*0x510313*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x510316*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x510320*/
  {
    __3_YAXPAX_Z(v3); /*0x510328*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x510330*/
  }
  BYTE1(Block->m_C) = 0; /*0x51033b*/
  Block->m_8 = 0; /*0x510341*/
  if ( (a2 & 1) != 0 ) /*0x510348*/
    __3_YAXPAX_Z(Block); /*0x51034b*/
  return Block->__pad_0; /*0x510355*/

}
// 0x510360

// 0x5103B0
DynamicVector * VectorClass__N::Constructor_VectorClass_bool_(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x5103b3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x5103b6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x5103c0*/
  {
    __3_YAXPAX_Z(v3); /*0x5103c8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x5103d0*/
  }
  BYTE1(Block->m_C) = 0; /*0x5103db*/
  Block->m_8 = 0; /*0x5103e1*/
  if ( (a2 & 1) != 0 ) /*0x5103e8*/
    __3_YAXPAX_Z(Block); /*0x5103eb*/
  return Block->__pad_0; /*0x5103f5*/

}
// 0x510400

// 0x5104A0

// 0x510550
unsigned int * VectorClass_flat::BuildingConstructor(int a2, int a3)
{

  this->Items = 0; /*0x51055b*/
  this->Capacity = a2; /*0x51055e*/
  this->IsInitialized = 1; /*0x510561*/
  this->IsAllocated = 0; /*0x510565*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x510568) */
  if ( a2 ) /*0x51056e*/
  {
    if ( a3 ) /*0x510576*/
    {
      this->Items = (void *)a3; /*0x510578*/
      return &this->vtable0; /*0x51057e*/
    }
    this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x51058d*/
    this->IsAllocated = 1; /*0x510590*/
  }
  return &this->vtable0; /*0x51057d*/

}
// 0x5105A0
unsigned int *  VectorClass_flat::BuildingTypeConstructor(TechnoTypeClass * aP2)
{

  aP2->Items = 0; /*0x5105ab*/
  aP2->Capacity = a2; /*0x5105ae*/
  aP2->IsInitialized = 1; /*0x5105b1*/
  aP2->IsAllocated = 0; /*0x5105b5*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x5105b8) */
  if ( a2 ) /*0x5105be*/
  {
    if ( a3 ) /*0x5105c6*/
    {
      aP2->Items = (void *)a3; /*0x5105c8*/
      return &aP2->vtable0; /*0x5105ce*/
    }
    aP2->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x5105dd*/
    aP2->IsAllocated = 1; /*0x5105e0*/
  }
  return &aP2->vtable0; /*0x5105cd*/

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
    return &this->vtable0; /*0x512faa*/
  (*((void (**)(VectorClass *))this->vtable0 + 3))(this); /*0x512fae*/
  v3 = aP1[2]; /*0x512fb1*/
  this->Capacity = v3; /*0x512fb6*/
  if ( !v3 ) /*0x512fb9*/
  {
    this->Items = 0; /*0x512ffa*/
    this->IsAllocated = 0; /*0x513001*/
    return &this->vtable0; /*0x513005*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x512fc3*/
  this->Items = v4; /*0x512fcb*/
  if ( !v4 ) /*0x512fd0*/
    return &this->vtable0; /*0x512fd0*/
  Capacity = this->Capacity; /*0x512fd2*/
  v6 = 0; /*0x512fd5*/
  this->IsAllocated = 1; /*0x512fd9*/
  if ( Capacity <= 0 ) /*0x512fdd*/
    return &this->vtable0; /*0x512fdd*/
  do /*0x512ff1*/
  {
    *((unsigned int *)this->Items + v6) = *(unsigned int *)(aP1[1] + 4 * v6); /*0x512fe8*/
    ++v6; /*0x512fee*/
  }
  while ( v6 < this->Capacity ); /*0x512ff1*/
  return &this->vtable0; /*0x512ff5*/

}
// 0x5132F0
char VectorClass_flat::PushBack(VectorClass_flat * aP1, void *a2)
{

  int Capacity; // ecx
  int CapacityIncrement; // eax
  int Count; // eax
  int Items; // edx

  Capacity = this->Capacity; /*0x5132f3*/
  if ( this->Count >= Capacity ) /*0x5132fb*/
  {
    if ( !this->IsAllocated[0] && Capacity ) /*0x513306*/
      return 0; /*0x513306*/
    CapacityIncrement = this->CapacityIncrement; /*0x513308*/
    if ( CapacityIncrement <= 0 /*0x513318*/
      || !(*(unsigned __int8 (**)(DynamicVectorClass *, int, unsigned int))(this->vtable0 + 8))(
            this,
            Capacity + CapacityIncrement,
            0) )
    {
      return 0; /*0x51331f*/
    }
  }
  Count = this->Count; /*0x513325*/
  Items = this->Items; /*0x513328*/
  this->Count = Count + 1; /*0x51332e*/
  *(unsigned int *)(Items + 4 * Count) = *aP1; /*0x513338*/
  return 1; /*0x513321*/

}
// 0x5134D0
void VectorClass_flat::ClearAndFree4()
{
  if ( this->Items && this->IsAllocated ) /*0x5134dd*/
  {
    operator delete((void *)(this->Items)); /*0x5134e3*/
    this->Items = 0; /*0x5134eb*/
  }
  this->IsAllocated = 0; /*0x5134ee*/
  this->Capacity = 0; /*0x5134f1*/
}
// 0x525060
unsigned int *   VectorClass_flat::CopyDefault()
{

  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this == (VectorClass *)a2 ) /*0x52506a*/
    return &this->vtable0; /*0x52506a*/
  (*((void (**)(VectorClass *))this->vtable0 + 3))(this); /*0x52506e*/
  v3 = a2[2]; /*0x525071*/
  this->Capacity = v3; /*0x525076*/
  if ( !v3 ) /*0x525079*/
  {
    this->Items = 0; /*0x5250ba*/
    this->IsAllocated = 0; /*0x5250c1*/
    return &this->vtable0; /*0x5250c5*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x525083*/
  this->Items = v4; /*0x52508b*/
  if ( !v4 ) /*0x525090*/
    return &this->vtable0; /*0x525090*/
  Capacity = this->Capacity; /*0x525092*/
  v6 = 0; /*0x525095*/
  this->IsAllocated = 1; /*0x525099*/
  if ( Capacity <= 0 ) /*0x52509d*/
    return &this->vtable0; /*0x52509d*/
  do /*0x5250b1*/
  {
    *((unsigned int *)this->Items + v6) = *(unsigned int *)(a2[1] + 4 * v6); /*0x5250a8*/
    ++v6; /*0x5250ae*/
  }
  while ( v6 < this->Capacity ); /*0x5250b1*/
  return &this->vtable0; /*0x5250b5*/

}
// 0x538510
int VectorClass_ptr_CCINIClass::Clear(int a2)
{

  return *(unsigned int *)(*&this->Items + 4 * a2); /*0x53851a*/

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

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x53da9a*/

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

  void *v3 = *&Block->__pad_004; // eax /*0x53dd53*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x53dd56*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x53dd60*/
  {
    __3_YAXPAX_Z(v3); /*0x53dd68*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x53dd70*/
  }
  BYTE1(Block->m_C) = 0; /*0x53dd7b*/
  Block->m_8 = 0; /*0x53dd81*/
  if ( (a2 & 1) != 0 ) /*0x53dd88*/
    __3_YAXPAX_Z(Block); /*0x53dd8b*/
  return Block->__pad_0; /*0x53dd95*/

}
// 0x54A1E0
int VectorClass_PAG::Count(int a2)
{

  return *(unsigned int *)(*&this->Items + 4 * a2); /*0x54a1ea*/

}
// 0x54A1F0

// 0x54A220

// 0x54A240
int VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x54a24a*/

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

  if ( LOBYTE(this->IsInitialized) ) /*0x54a610*/
    return (unsigned int)(a2 - *&this->Items) >> 2; /*0x54a625*/
  else
    return 0; /*0x54a617*/

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

  return *(unsigned int *)(*&a2_2->vtable2 + 4 * a2_2); /*0x55132a*/

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

  void *v3 = *&Block->__pad_004; // eax /*0x5515e3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x5515e6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x5515f0*/
  {
    __3_YAXPAX_Z(v3); /*0x5515f8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x551600*/
  }
  BYTE1(Block->m_C) = 0; /*0x55160b*/
  Block->m_8 = 0; /*0x551611*/
  if ( (a2 & 1) != 0 ) /*0x551618*/
    __3_YAXPAX_Z(Block); /*0x55161b*/
  return Block->__pad_0; /*0x551625*/

}
// 0x555200

// 0x555230

// 0x555250
int VectorClass_ptr_LightSourceClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x55525a*/

}
// 0x555260

// 0x555290

// 0x5552B0
int VectorClass_ptr_PendingCellClass_LightSourceClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x5552ba*/

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

  void *v3 = *&Block->__pad_004; // eax /*0x5557d3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x5557d6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x5557e0*/
  {
    __3_YAXPAX_Z(v3); /*0x5557e8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x5557f0*/
  }
  BYTE1(Block->m_C) = 0; /*0x5557fb*/
  Block->m_8 = 0; /*0x555801*/
  if ( (a2 & 1) != 0 ) /*0x555808*/
    __3_YAXPAX_Z(Block); /*0x55580b*/
  return Block->__pad_0; /*0x555815*/

}
// 0x555820

// 0x555870

// 0x556F00
int VectorClass_ptr_LineTrail::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x556f0a*/

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

  return *(unsigned int *)(*&this->Items + 4 * a2); /*0x55823a*/

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

  int result; // eax
  int v4; // eax
  int Count; // ecx
  int v6; // ecx

  result = a2; /*0x55bae0*/
  if ( *(unsigned char *)(a2 + 152) ) /*0x55bae7*/
  {
    v4 = (*(int (**)(DynamicVectorClass *, int *))(aP1->vtable0 + 16))(aP1, &a2); /*0x55bafa*/
    if ( v4 != -1 ) /*0x55bb00*/
    {
      Count = aP1->Count; /*0x55bb02*/
      if ( v4 < Count ) /*0x55bb07*/
      {
        v6 = Count - 1; /*0x55bb09*/
        for ( aP1->Count = v6; v4 < aP1->Count; *(unsigned int *)(aP1->Items + 4 * v4 - 4) = *(unsigned int *)(aP1->Items + 4 * v4) ) /*0x55bb0f*/
          ++v4; /*0x55bb14*/
      }
    }
    result = a2; /*0x55bb23*/
    *(unsigned char *)(a2 + 152) = 0; /*0x55bb27*/
  }
  return result; /*0x55bb2e*/

}
// 0x588C90
void VectorClass_flat::CleanupSubzone()
{
  void *v2 = this->Items; // eax /*0x588c96*/
  this->Items = 0; /*0x588c99*/
  if ( v2 && this->IsAllocated ) /*0x588ca0*/
  {
    operator delete((void *)(v2)); /*0x588ca6*/
    this->Items = 0; /*0x588cae*/
  }
  this->IsAllocated = 0; /*0x588cb1*/
  this->u32_8 = 0; /*0x588cb4*/
}
// 0x588E10

// 0x588F00

// 0x588F30

// 0x588F50
int VectorClass_W4PassabilityType::Clear(int a2)
{

  return *(unsigned int *)(*&this->Items + 4 * a2); /*0x588f5a*/

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

  int v3; // ebp
  char *v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v12; // eax
  char *v13; // ebx
  unsigned int *v14; // edx
  int v15; // eax

  v3 = a2; /*0x58a2a2*/
  if ( a2 ) /*0x58a2ae*/
  {
    v5 = a3; /*0x58a2b4*/
    LOBYTE(this->IsInitialized) = 0; /*0x58a2b8*/
    if ( a3 ) /*0x58a2bd*/
    {
      if ( a2 - 1 >= 0 ) /*0x58a2f6*/
      {
        v9 = a3 + 4; /*0x58a2f8*/
        v10 = a2; /*0x58a2fb*/
        do /*0x58a305*/
        {
          *(unsigned int *)v9 = 0; /*0x58a2fc*/
          v9[4] = 0; /*0x58a2fe*/
          v9 += 12; /*0x58a301*/
          --v10; /*0x58a304*/
        }
        while ( v10 ); /*0x58a305*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(12 * a2); /*0x58a2c7*/
      if ( v6 ) /*0x58a2d1*/
      {
        if ( a2 - 1 >= 0 ) /*0x58a2d8*/
        {
          v7 = v6 + 4; /*0x58a2da*/
          v8 = a2; /*0x58a2dd*/
          do /*0x58a2e7*/
          {
            *(unsigned int *)v7 = 0; /*0x58a2de*/
            *(unsigned char *)(v7 + 4) = 0; /*0x58a2e0*/
            v7 += 12; /*0x58a2e3*/
            --v8; /*0x58a2e6*/
          }
          while ( v8 ); /*0x58a2e7*/
        }
        v5 = (char *)v6; /*0x58a2e9*/
      }
      else
      {
        v5 = 0; /*0x58a2ed*/
      }
    }
    LOBYTE(this->IsInitialized) = 1; /*0x58a309*/
    if ( !v5 ) /*0x58a30d*/
      return 0; /*0x58a391*/
    if ( *&this->Items ) /*0x58a30f*/
    {
      m_8 = this->Capacity; /*0x58a314*/
      if ( a2 < m_8 ) /*0x58a319*/
        m_8 = a2; /*0x58a31b*/
      if ( m_8 > 0 ) /*0x58a31f*/
      {
        v12 = 0; /*0x58a321*/
        do /*0x58a33f*/
        {
          v13 = &v5[v12]; /*0x58a326*/
          v14 = (unsigned int *)(v12 + *&this->Items); /*0x58a329*/
          v12 += 12; /*0x58a32b*/
          --m_8; /*0x58a32e*/
          *(unsigned int *)v13 = *v14; /*0x58a331*/
          *((unsigned int *)v13 + 1) = v14[1]; /*0x58a336*/
          *((unsigned int *)v13 + 2) = v14[2]; /*0x58a33c*/
        }
        while ( m_8 ); /*0x58a33f*/
        v3 = a2; /*0x58a341*/
      }
      if ( BYTE1(this->IsInitialized) ) /*0x58a347*/
      {
        __3_YAXPAX_Z(*&this->Items); /*0x58a350*/
        *&this->Items = 0; /*0x58a358*/
      }
    }
    *&this->Items = v5; /*0x58a363*/
    this->Capacity = v3; /*0x58a369*/
    BYTE1(this->IsInitialized) = a3 == 0; /*0x58a36c*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_U_HashObject_IUSubzoneConnectionStruct *))(*(unsigned int *)this->vfptr + 12))(this); /*0x58a375*/
  }
  v15 = this->Capacity; /*0x58a378*/
  if ( v15 < this->Count ) /*0x58a380*/
    this->Count = v15; /*0x58a382*/
  return 1; /*0x58a385*/

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

  int v3; // eax
  char *v4; // ebp
  int v5; // ecx
  int v6; // eax
  char *v7; // esi
  int v8; // edi
  void *v9; // eax
  void *v11; // eax

  if ( (a2 & 2) != 0 ) /*0x58a84a*/
  {
    v3 = *((unsigned int *)Block - 1); /*0x58a84c*/
    v4 = (char *)Block - 4; /*0x58a850*/
    v5 = 3 * v3; /*0x58a853*/
    v6 = v3 - 1; /*0x58a856*/
    v7 = &Block->__pad_0[8 * v5]; /*0x58a857*/
    if ( v6 >= 0 ) /*0x58a85a*/
    {
      v8 = v6 + 1; /*0x58a85d*/
      do /*0x58a88a*/
      {
        v9 = (void *)*((unsigned int *)v7 - 5); /*0x58a862*/
        v7 -= 24; /*0x58a865*/
        *(unsigned int *)v7 = &vt_VectorClassHashObject; /*0x58a86a*/
        if ( v9 && v7[13] ) /*0x58a872*/
        {
          __3_YAXPAX_Z(v9); /*0x58a878*/
          *((unsigned int *)v7 + 1) = 0; /*0x58a880*/
        }
        --v8; /*0x58a883*/
        v7[13] = 0; /*0x58a884*/
        *((unsigned int *)v7 + 2) = 0; /*0x58a887*/
      }
      while ( v8 ); /*0x58a88a*/
    }
    if ( (a2 & 1) != 0 ) /*0x58a892*/
      __3_YAXPAX_Z(v4); /*0x58a895*/
    return v4; /*0x58a89d*/
  }
  else
  {
    v11 = *(void **)&Block->m_1[3]; /*0x58a8a5*/
    *(unsigned int *)Block->__pad_0 = &vt_VectorClassHashObject; /*0x58a8ac*/
    if ( v11 && BYTE1(Block->u32_C) ) /*0x58a8b4*/
    {
      __3_YAXPAX_Z(v11); /*0x58a8ba*/
      *&Block->__pad_004 = 0; /*0x58a8c2*/
    }
    BYTE1(Block->u32_C) = 0; /*0x58a8c9*/
    Block->u32_8 = 0; /*0x58a8ce*/
    if ( (a2 & 1) != 0 ) /*0x58a8d1*/
      __3_YAXPAX_Z(Block); /*0x58a8d4*/
    return Block->tail_0; /*0x58a8dc*/
  }

}
// 0x58A8F0

// 0x58A9F0

// 0x58AA20

// 0x58AA60

// 0x58AA90

// 0x58AAE0
DynamicVector * VectorClass_W4PassabilityType::Constructor_1(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x58aae3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x58aae6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x58aaf0*/
  {
    __3_YAXPAX_Z(v3); /*0x58aaf8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x58ab00*/
  }
  BYTE1(Block->m_C) = 0; /*0x58ab0b*/
  Block->m_8 = 0; /*0x58ab11*/
  if ( (a2 & 1) != 0 ) /*0x58ab18*/
    __3_YAXPAX_Z(Block); /*0x58ab1b*/
  return Block->__pad_0; /*0x58ab25*/

}
// 0x58AB30

// 0x58AB80

// 0x58AC70
unsigned int * VectorClass_flat::ConstructSubzone(int a2, int a3)
{

  int v4; // eax
  int v5; // ecx
  char *v7; // eax
  char *v8; // ecx
  int v9; // edx

  this->Items = 0; /*0x58ac7d*/
  this->Capacity = a2; /*0x58ac80*/
  this->IsInitialized = 1; /*0x58ac83*/
  this->IsAllocated = 0; /*0x58ac87*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x58ac8a) */
  if ( !a2 ) /*0x58ac90*/
  return &this->vtable0; /*0x58ac90*/
  if ( !a3 ) /*0x58ac98*/
  {
    v7 = (char *)__2_YAPAXI_Z(8 * a2); /*0x58acc2*/
    if ( v7 ) /*0x58accc*/
    {
      v8 = v7; /*0x58acd1*/
      if ( a2 - 1 >= 0 ) /*0x58acd5*/
      {
        v9 = a2; /*0x58acd7*/
        do /*0x58ace1*/
        {
          *(unsigned int *)v8 = 0; /*0x58acd8*/
          v8->vtable2 = 0; /*0x58acda*/
          v8 += 8; /*0x58acdd*/
          --v9; /*0x58ace0*/
        }
        while ( v9 ); /*0x58ace1*/
        this->Items = v7; /*0x58ace3*/
        this->IsAllocated = 1; /*0x58ace6*/
        return &this->vtable0; /*0x58acef*/
      }
    }
    else
    {
      v7 = 0; /*0x58acf2*/
    }
    this->Items = v7; /*0x58acf4*/
    this->IsAllocated = 1; /*0x58acf7*/
    return &this->vtable0; /*0x58acfb*/
  }
  v4 = a3; /*0x58ac9d*/
  if ( a2 - 1 >= 0 ) /*0x58aca1*/
  {
    v5 = a2; /*0x58aca3*/
    do /*0x58acad*/
    {
      *(unsigned int *)v4 = 0; /*0x58aca4*/
      *(unsigned char *)(v4 + 4) = 0; /*0x58aca6*/
      v4 += 8; /*0x58aca9*/
      --v5; /*0x58acac*/
    }
    while ( v5 ); /*0x58acad*/
  }
  this->Items = (void *)a3; /*0x58acaf*/
  return &this->vtable0; /*0x58acb4*/

}
// 0x58AD10

// 0x5AC3A0

// 0x5AC3D0

// 0x5AC3F0
int VectorClass_ptr_MapRegionClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x5ac3fa*/

}
// 0x5AC5F0

// 0x5AC620

// 0x5AC640
double VectorClass_N::Clear(int a2)
{

  return *(double *)(*&this->Items + 8 * a2); /*0x5ac64a*/

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

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5ad3e3*/
  *Block = &vt_VectorClass_MapRegionClass; /*0x5ad3e6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x5ad3f0*/
  {
    __3_YAXPAX_Z(v3); /*0x5ad3f8*/
    *(Block + 1) = 0; /*0x5ad400*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x5ad40b*/
  *(Block + 2) = 0; /*0x5ad411*/
  if ( (a2 & 1) != 0 ) /*0x5ad418*/
    __3_YAXPAX_Z(Block); /*0x5ad41b*/
  return Block; /*0x5ad425*/

}
// 0x5AD5C0

// 0x5AD610
DynamicVector * VectorClass_N::Constructor_VectorClass_double_(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x5ad613*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x5ad616*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x5ad620*/
  {
    __3_YAXPAX_Z(v3); /*0x5ad628*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x5ad630*/
  }
  BYTE1(Block->m_C) = 0; /*0x5ad63b*/
  Block->m_8 = 0; /*0x5ad641*/
  if ( (a2 & 1) != 0 ) /*0x5ad648*/
    __3_YAXPAX_Z(Block); /*0x5ad64b*/
  return Block->__pad_0; /*0x5ad655*/

}
// 0x5D05F0
unsigned int *  VectorClass_Point2D::Count(int a3, void *a2)
{

  int v3; // edx

  v3 = *(unsigned int *)&a3->m_1[3]; /*0x5d05f0*/
  *a2 = *(unsigned int *)(v3 + 8 * a3); /*0x5d05ff*/
  a2[1] = *(unsigned int *)(v3 + 8 * a3 + 4); /*0x5d0606*/
  return a2; /*0x5d0601*/

}
// 0x5D0660
int VectorClass_ptr_MSTextEntry::Get(int a2, void *a2_2)
{
  return *(unsigned int *)(((unsigned int)(a2_2->Items)) + 4 * a2_2); /*0x5d066a*/
}
// 0x5D06C0
int VectorClass_ptr_MapSelection::Get(int a2, void *a2_2)
{
  return *(unsigned int *)(((unsigned int)(a2_2->Items)) + 4 * a2_2); /*0x5d06ca*/
}
// 0x5D07E0
int VectorClass_ptr_MSSfxEntry::Get(int a2, void *a2_2)
{
  return *(unsigned int *)(((unsigned int)(a2_2->Items)) + 4 * a2_2); /*0x5d07ea*/
}
// 0x5D07F0

// 0x5D0850

// 0x5D0920
void VectorClass_Point2D::Set(void *a1_1, void *a2_1, void *a3_1)
{

  if ( *(unsigned int *)&a1_1->m_1[3] && BYTE1(a1_1->m_C) ) /*0x5d092d*/
  {
    __3_YAXPAX_Z(*(void **)&a1_1->m_1[3]); /*0x5d0933*/
    *(unsigned int *)&a1_1->m_1[3] = 0; /*0x5d093b*/
  }
  BYTE1(a1_1->m_C) = 0; /*0x5d093e*/
  a1_1->m_8 = 0; /*0x5d0941*/

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

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x5d27da*/

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

  void *v3 = *&Block->__pad_004; // eax /*0x5d2cf3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x5d2cf6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x5d2d00*/
  {
    __3_YAXPAX_Z(v3); /*0x5d2d08*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x5d2d10*/
  }
  BYTE1(Block->m_C) = 0; /*0x5d2d1b*/
  Block->m_8 = 0; /*0x5d2d21*/
  if ( (a2 & 1) != 0 ) /*0x5d2d28*/
    __3_YAXPAX_Z(Block); /*0x5d2d2b*/
  return Block->__pad_0; /*0x5d2d35*/

}
// 0x5D2D40

// 0x5D2D90
DynamicVector * VectorClass_Point2D::Constructor_VectorClass_MSSfx___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x5d2d93*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x5d2d96*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x5d2da0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d2da8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x5d2db0*/
  }
  BYTE1(Block->m_C) = 0; /*0x5d2dbb*/
  Block->m_8 = 0; /*0x5d2dc1*/
  if ( (a2 & 1) != 0 ) /*0x5d2dc8*/
    __3_YAXPAX_Z(Block); /*0x5d2dcb*/
  return Block->__pad_0; /*0x5d2dd5*/

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

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x5d810a*/

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

  return *(unsigned int *)(*&this->Items + 4 * a2); /*0x5eec0a*/

}
// 0x5EEC10

// 0x5EEC50
char VectorClass_cptr_MultiMission::SetAt(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5eec5c*/
  {
    LOBYTE(this->IsInitialized) = 0; /*0x5eec66*/
    if ( a3 ) /*0x5eec6c*/
      v4 = a3; /*0x5eec82*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x5eec7e*/
    LOBYTE(this->IsInitialized) = 1; /*0x5eec86*/
    if ( v4 ) /*0x5eec8a*/
    {
      if ( *&this->Items ) /*0x5eec95*/
      {
        m_8 = this->Capacity; /*0x5eec9c*/
        if ( a2 < m_8 ) /*0x5eeca1*/
          m_8 = a2; /*0x5eeca3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->Items + 4 * i - 4) ) /*0x5eeca9*/
          ++i; /*0x5eecae*/
        if ( BYTE1(this->IsInitialized) ) /*0x5eecbb*/
        {
          __3_YAXPAX_Z(*&this->Items); /*0x5eecc6*/
          *&this->Items = 0; /*0x5eecce*/
        }
      }
      *&this->Items = v4; /*0x5eecd7*/
      this->Capacity = a2; /*0x5eecdf*/
      BYTE1(this->IsInitialized) = a3 == 0; /*0x5eece2*/
      return 1; /*0x5eece8*/
    }
    else
    {
      return 0; /*0x5eec8f*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_PBVMultiMission *))(*(unsigned int *)this->vfptr + 12))(this); /*0x5eecf2*/
    return 1; /*0x5eecf8*/
  }

}
// 0x5EED00
void VectorClass_flat::Cleanup3()
{
  if ( this->Items && this->IsAllocated ) /*0x5eed0d*/
  {
    operator delete((void *)(this->Items)); /*0x5eed13*/
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

  void *v3 = *&Block->__pad_004; // eax /*0x5eeec3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x5eeec6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x5eeed0*/
  {
    __3_YAXPAX_Z(v3); /*0x5eeed8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x5eeee0*/
  }
  BYTE1(Block->m_C) = 0; /*0x5eeeeb*/
  Block->m_8 = 0; /*0x5eeef1*/
  if ( (a2 & 1) != 0 ) /*0x5eeef8*/
    __3_YAXPAX_Z(Block); /*0x5eeefb*/
  return Block->__pad_0; /*0x5eef05*/

}
// 0x5EEF10

// 0x5EF190
int VectorClass_cptr_MultiMission::j_vt09(unsigned char * a1, signed int a3, int a4, int a5, int a6, int a7)
{

  unsigned short *v8; // eax
  signed int v9; // edi
  unsigned int *v10; // eax
  unsigned int v11; // esi
  int v12; // eax

  if ( *&this->u32_4C == -1 ) /*0x5ef197*/
    return 0; /*0x5ef199*/
  v8 = (unsigned short *)this->field_50; /*0x5ef19f*/
  *v8 = -9539; /*0x5ef1af*/
  v8[1] = a3; /*0x5ef1b4*/
  v8[2] = -8529; /*0x5ef1b8*/
  memcpy((void *)(this->field_50 + 6), a1, a3); /*0x5ef1cb*/
  v9 = 0; /*0x5ef1dc*/
  v10 = (unsigned int *)(this->field_50 + a3 + 6); /*0x5ef1de*/
  v11 = 0; /*0x5ef1e0*/
  if ( a3 > 0 ) /*0x5ef1ec*/
  {
    do /*0x5ef200*/
    {
      v12 = a1[v9++] + (v11 >> 31); /*0x5ef1f8*/
      v11 = v12 + 2 * v11; /*0x5ef1fd*/
    }
    while ( v9 < a3 ); /*0x5ef200*/
    v10 = (unsigned int *)(this->field_50 + a3 + 6); /*0x5ef206*/
  }
  *v10 = v11; /*0x5ef20a*/
  *(unsigned char *)(a3 + 10 + this->field_50) = 13; /*0x5ef212*/
  WinModemClass::WriteSerial((int *)g_ClipboardBuffer, (LPCVOID)this->field_50, a3 + 11); /*0x5ef222*/
  return 1; /*0x5ef19b*/

}
// 0x5EF290
unsigned int * VectorClass_cptr_MultiMission::j_vt00(char a2)
{

  void *v3; // eax

  v3 = (void *)this->field_50; /*0x5ef293*/
  /* X11: vtable install elided (implicit via NullModemConnClass virtuals 0x5ef296) */
  __3_YAXPAX_Z(v3); /*0x5ef29d*/
  ConnectionClass::dtor((ConnectionClass *)this); /*0x5ef2a7*/
  if ( (a2 & 1) != 0 ) /*0x5ef2b1*/
    __3_YAXPAX_Z(this); /*0x5ef2b4*/
  return this->__pad_0; /*0x5ef2be*/

}
// 0x5F9B00

// 0x5F9B30

// 0x5F9B50
int VectorClass_ptr_ObjectTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x5f9b5a*/

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

  void *v3 = *&Block->__pad_004; // eax /*0x5f9e33*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x5f9e36*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x5f9e40*/
  {
    __3_YAXPAX_Z(v3); /*0x5f9e48*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x5f9e50*/
  }
  BYTE1(Block->m_C) = 0; /*0x5f9e5b*/
  Block->m_8 = 0; /*0x5f9e61*/
  if ( (a2 & 1) != 0 ) /*0x5f9e68*/
    __3_YAXPAX_Z(Block); /*0x5f9e6b*/
  return Block->__pad_0; /*0x5f9e75*/

}
// 0x5FFFC0
void VectorClass_flat::Destructor(void *a1, void *a2)
{
  void *v2 = this->Items; // eax /*0x5fffc6*/
  this->Items = 0; /*0x5fffc9*/
  if ( v2 && this->IsAllocated ) /*0x5fffd0*/
  {
    operator delete((void *)(v2)); /*0x5fffd6*/
    this->Items = 0; /*0x5fffde*/
  }
  this->IsAllocated = 0; /*0x5fffe1*/
  this->u32_8 = 0; /*0x5fffe4*/
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

  void *v3 = *&Block->__pad_004; // eax /*0x6002d3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x6002d6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x6002e0*/
  {
    __3_YAXPAX_Z(v3); /*0x6002e8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x6002f0*/
  }
  BYTE1(Block->m_C) = 0; /*0x6002fb*/
  *(unsigned int *)&Block->__pad_5[3] = 0; /*0x600301*/
  if ( (a2 & 1) != 0 ) /*0x600308*/
    __3_YAXPAX_Z(Block); /*0x60030b*/
  return Block->__pad_0; /*0x600315*/

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

  void *v3 = *&Block->__pad_004; // eax /*0x628763*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x628766*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x628770*/
  {
    __3_YAXPAX_Z(v3); /*0x628778*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x628780*/
  }
  BYTE1(Block->m_C) = 0; /*0x62878b*/
  Block->m_8 = 0; /*0x628791*/
  if ( (a2 & 1) != 0 ) /*0x628798*/
    __3_YAXPAX_Z(Block); /*0x62879b*/
  return Block->__pad_0; /*0x6287a5*/

}
// 0x628A40

// 0x628A70

// 0x628AD0

// 0x628DF0
unsigned int * VectorClass_flat::ConstructHSV(int a2, int a3)
{

  void *v4; // ebx
  unsigned char *v5; // eax
  int v6; // ecx
  int v8; // eax
  unsigned char *v9; // ecx
  int v10; // edx

  v4 = 0; /*0x628df9*/
  this->Items = 0; /*0x628dfd*/
  this->Capacity = a2; /*0x628e00*/
  this->IsInitialized = 1; /*0x628e03*/
  this->IsAllocated = 0; /*0x628e07*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x628e0a) */
  if ( !a2 ) /*0x628e10*/
  return &this->vtable0; /*0x628e70*/
  if ( !a3 ) /*0x628e18*/
  {
    v8 = __2_YAPAXI_Z(3 * a2); /*0x628e42*/
    if ( v8 ) /*0x628e4c*/
    {
      if ( a2 - 1 >= 0 ) /*0x628e53*/
      {
        v9 = &v8->ptr_2; /*0x628e55*/
        v10 = a2; /*0x628e58*/
        do /*0x628e65*/
        {
          *(v9 - 2) = 0; /*0x628e59*/
          *(v9 - 1) = 0; /*0x628e5c*/
          *v9 = 0; /*0x628e5f*/
          v9 += 3; /*0x628e61*/
          --v10; /*0x628e64*/
        }
        while ( v10 ); /*0x628e65*/
      }
      v4 = (void *)v8; /*0x628e67*/
    }
    this->Items = v4; /*0x628e69*/
    this->IsAllocated = 1; /*0x628e6c*/
    return &this->vtable0; /*0x628e6c*/
  }
  if ( a2 - 1 >= 0 ) /*0x628e1f*/
  {
    v5 = (unsigned char *)(a3 + 2); /*0x628e21*/
    v6 = a2; /*0x628e24*/
    do /*0x628e31*/
    {
      *(v5 - 2) = 0; /*0x628e25*/
      *(v5 - 1) = 0; /*0x628e28*/
      *v5 = 0; /*0x628e2b*/
      v5 += 3; /*0x628e2d*/
      --v6; /*0x628e30*/
    }
    while ( v6 ); /*0x628e31*/
  }
  this->Items = (void *)a3; /*0x628e33*/
  return &this->vtable0; /*0x628e38*/

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

  void *v3 = *&Block->__pad_004; // eax /*0x62b383*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x62b386*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x62b390*/
  {
    __3_YAXPAX_Z(v3); /*0x62b398*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x62b3a0*/
  }
  BYTE1(Block->m_C) = 0; /*0x62b3ab*/
  Block->m_8 = 0; /*0x62b3b1*/
  if ( (a2 & 1) != 0 ) /*0x62b3b8*/
    __3_YAXPAX_Z(Block); /*0x62b3bb*/
  return Block->__pad_0; /*0x62b3c5*/

}
// 0x630250
char  VectorClass_flat::PushBackCopy()
{

  int Capacity; // ecx
  int result; // eax
  int Items; // edx

  Capacity = this->Capacity; /*0x630253*/
  result = this->Count; /*0x630256*/
  if ( result < Capacity /*0x63027d*/
    || (this->IsAllocated[0] || !Capacity)
    && (result = this->CapacityIncrement, result > 0)
    && (result = (*(int (**)(DynamicVectorClass *, int, unsigned int))(this->vtable0 + 8))(
                   this,
                   Capacity + result,
                   0),
        (unsigned char)result) )
  {
    result = this->Count; /*0x630285*/
    Items = this->Items; /*0x630288*/
    this->Count = result + 1; /*0x63028e*/
    *(unsigned int *)(Items + 4 * result) = *a2; /*0x630298*/
    LOBYTE(result) = 1; /*0x63029b*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x63027f*/
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

  int result = this->u32_4; // eax /*0x63e146*/
  if ( result && this->u32_D ) /*0x63e14d*/
  {
    __3_YAXPAX_Z(*&this->u32_4); /*0x63e153*/
    this->u32_4 = 0; /*0x63e15b*/
  }
  this->u32_D = 0; /*0x63e15e*/
  this->u32_8 = 0; /*0x63e161*/
  return result; /*0x63e164*/

}
// 0x63E170

// 0x63E1B0

// 0x63E230

// 0x63E2E0

// 0x63E540
char VectorClass_flat::Append(VectorClass_flat * aP1, void *a2)
{

  int Capacity; // ecx
  int result; // eax
  int Items; // edx

  Capacity = aP1->Capacity; /*0x63e543*/
  result = aP1->Count; /*0x63e546*/
  if ( result < Capacity /*0x63e56d*/
    || (aP1->IsAllocated[0] || !Capacity)
    && (result = aP1->CapacityIncrement, result > 0)
    && (result = (*(int (**)(DynamicVectorClass *, int, unsigned int))(aP1->vtable0 + 8))(
                   aP1,
                   Capacity + result,
                   0),
        (unsigned char)result) )
  {
    result = aP1->Count; /*0x63e575*/
    Items = aP1->Items; /*0x63e578*/
    aP1->Count = result + 1; /*0x63e57e*/
    *(unsigned int *)(Items + 4 * result) = *a2; /*0x63e588*/
    LOBYTE(result) = 1; /*0x63e58b*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x63e56f*/
  }
  return result; /*0x63e571*/

}
// 0x63E900
char VectorClass_flat::EraseAt(IUnknown * aP1, void *a2)
{

  int result; // eax
  int Count; // ecx
  int v5; // ecx

  result = (*(int (**)(DynamicVectorClass *, int))(this->vtable0 + 16))(this, aP1); /*0x63e90c*/
  if ( result == -1 || (Count = this->Count, result >= Count) ) /*0x63e919*/
  {
    LOBYTE(result) = 0; /*0x63e93b*/
  }
  else
  {
    v5 = Count - 1; /*0x63e91b*/
    for ( this->Count = v5; /*0x63e921*/
    result < this->Count;
    *(unsigned int *)(this->Items + 4 * result - 4) = *(unsigned int *)(this->Items + 4 * result) )
    {
      ++result; /*0x63e926*/
    }
    LOBYTE(result) = 1; /*0x63e935*/
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

  void *v3 = *&Block->__pad_004; // eax /*0x63eca3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x63eca6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x63ecb0*/
  {
    __3_YAXPAX_Z(v3); /*0x63ecb8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x63ecc0*/
  }
  BYTE1(Block->m_C) = 0; /*0x63eccb*/
  Block->m_8 = 0; /*0x63ecd1*/
  if ( (a2 & 1) != 0 ) /*0x63ecd8*/
    __3_YAXPAX_Z(Block); /*0x63ecdb*/
  return Block->__pad_0; /*0x63ece5*/

}
// 0x63ECF0

// 0x63ED40
DynamicVector * VectorClass_ptr_PlanningMemberClass::Constructor_VectorClass_PlanningBranchClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x63ed43*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x63ed46*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x63ed50*/
  {
    __3_YAXPAX_Z(v3); /*0x63ed58*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x63ed60*/
  }
  BYTE1(Block->m_C) = 0; /*0x63ed6b*/
  Block->m_8 = 0; /*0x63ed71*/
  if ( (a2 & 1) != 0 ) /*0x63ed78*/
    __3_YAXPAX_Z(Block); /*0x63ed7b*/
  return Block->__pad_0; /*0x63ed85*/

}
// 0x63EED0

// 0x658D60
unsigned int * VectorClass_flat::PointConstructor(MapClass * aP1, MapClass * aP2)
{

  void *v5; // eax

  this->Items = 0; /*0x658d6a*/
  this->Capacity = aP1; /*0x658d71*/
  this->IsInitialized = 1; /*0x658d74*/
  this->IsAllocated = 0; /*0x658d78*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x658d7c) */
  if ( aP1 ) /*0x658d82*/
  {
    if ( aP2 ) /*0x658d8a*/
    {
      this->Items = (void *)aP2; /*0x658d8d*/
      return &this->vtable0; /*0x658d98*/
    }
    v5 = (void *)__2_YAPAXI_Z(8 * aP1); /*0x658da3*/
    if ( v5 ) /*0x658dad*/
    {
      this->Items = v5; /*0x658db0*/
      this->IsAllocated = 1; /*0x658db7*/
      return &this->vtable0; /*0x658dbf*/
    }
    this->IsAllocated = 1; /*0x658dc4*/
    this->Items = 0; /*0x658dc8*/
  }
  return &this->vtable0; /*0x658d96*/

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

  void *v3 = *&Block->__pad_004; // eax /*0x65a4f3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x65a4f6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x65a500*/
  {
    __3_YAXPAX_Z(v3); /*0x65a508*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x65a510*/
  }
  BYTE1(Block->m_C) = 0; /*0x65a51b*/
  Block->m_8 = 0; /*0x65a521*/
  if ( (a2 & 1) != 0 ) /*0x65a528*/
    __3_YAXPAX_Z(Block); /*0x65a52b*/
  return Block->__pad_0; /*0x65a535*/

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

  void *v3 = *&Block->__pad_004; // eax /*0x65c203*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x65c206*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x65c210*/
  {
    __3_YAXPAX_Z(v3); /*0x65c218*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x65c220*/
  }
  BYTE1(Block->m_C) = 0; /*0x65c22b*/
  Block->m_8 = 0; /*0x65c231*/
  if ( (a2 & 1) != 0 ) /*0x65c238*/
    __3_YAXPAX_Z(Block); /*0x65c23b*/
  return Block->__pad_0; /*0x65c245*/

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

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x660fd3*/
  *Block = &vt_VectorClass_RadarEventClass; /*0x660fd6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x660fe0*/
  {
    __3_YAXPAX_Z(v3); /*0x660fe8*/
    *(Block + 1) = 0; /*0x660ff0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x660ffb*/
  *(Block + 2) = 0; /*0x661001*/
  if ( (a2 & 1) != 0 ) /*0x661008*/
    __3_YAXPAX_Z(Block); /*0x66100b*/
  return Block; /*0x661015*/

}
// 0x679F70
void VectorClass_flat::Dtor(void *a1)
{

  void *Items; // eax

  Items = this->Items; /*0x679f76*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x679f79) */
  if ( Items && this->IsAllocated ) /*0x679f83*/
  {
    __3_YAXPAX_Z(Items); /*0x679f89*/
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
  (*(void (**)(int *, int *, int, unsigned int))(v3 + 16))(aP1, &Count, 4, 0); /*0x67a64d*/
  result = Count; /*0x67a650*/
  for ( i = 0; i < Count; ++i ) /*0x67a658*/
  {
    aP1->IsClean(this->Items + 4 * i, 4, 0); /*0x67a668*/
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
  (*(void (**)(int *, int *, int, unsigned int))(v3 + 16))(aP1, &Count, 4, 0); /*0x67a86d*/
  result = Count; /*0x67a870*/
  for ( i = 0; i < Count; ++i ) /*0x67a878*/
  {
    aP1->IsClean(this->Items + 4 * i, 4, 0); /*0x67a888*/
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
    return &this->vtable0; /*0x67aa8a*/
  (*((void (**)(VectorClass *))this->vtable0 + 3))(this); /*0x67aa8e*/
  v3 = aP1[2]; /*0x67aa91*/
  this->Capacity = v3; /*0x67aa96*/
  if ( !v3 ) /*0x67aa99*/
  {
    this->Items = 0; /*0x67aada*/
    this->IsAllocated = 0; /*0x67aae1*/
    return &this->vtable0; /*0x67aae5*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x67aaa3*/
  this->Items = v4; /*0x67aaab*/
  if ( !v4 ) /*0x67aab0*/
    return &this->vtable0; /*0x67aab0*/
  Capacity = this->Capacity; /*0x67aab2*/
  v6 = 0; /*0x67aab5*/
  this->IsAllocated = 1; /*0x67aab9*/
  if ( Capacity <= 0 ) /*0x67aabd*/
    return &this->vtable0; /*0x67aabd*/
  do /*0x67aad1*/
  {
    *((unsigned int *)this->Items + v6) = *(unsigned int *)(aP1[1] + 4 * v6); /*0x67aac8*/
    ++v6; /*0x67aace*/
  }
  while ( v6 < this->Capacity ); /*0x67aad1*/
  return &this->vtable0; /*0x67aad5*/

}
// 0x67AE00
unsigned int * VectorClass_flat::CopySmudge(CCINIClass * aP1)
{

  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this == (VectorClass *)aP1 ) /*0x67ae0a*/
    return &this->vtable0; /*0x67ae0a*/
  (*((void (**)(VectorClass *))this->vtable0 + 3))(this); /*0x67ae0e*/
  v3 = aP1[2]; /*0x67ae11*/
  this->Capacity = v3; /*0x67ae16*/
  if ( !v3 ) /*0x67ae19*/
  {
    this->Items = 0; /*0x67ae5a*/
    this->IsAllocated = 0; /*0x67ae61*/
    return &this->vtable0; /*0x67ae65*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x67ae23*/
  this->Items = v4; /*0x67ae2b*/
  if ( !v4 ) /*0x67ae30*/
    return &this->vtable0; /*0x67ae30*/
  Capacity = this->Capacity; /*0x67ae32*/
  v6 = 0; /*0x67ae35*/
  this->IsAllocated = 1; /*0x67ae39*/
  if ( Capacity <= 0 ) /*0x67ae3d*/
    return &this->vtable0; /*0x67ae3d*/
  do /*0x67ae51*/
  {
    *((unsigned int *)this->Items + v6) = *(unsigned int *)(aP1[1] + 4 * v6); /*0x67ae48*/
    ++v6; /*0x67ae4e*/
  }
  while ( v6 < this->Capacity ); /*0x67ae51*/
  return &this->vtable0; /*0x67ae55*/

}
// 0x67AF60
void VectorClass_flat::ClearAndFree()
{
  if ( this->Items && this->IsAllocated ) /*0x67af6d*/
  {
    operator delete((void *)(this->Items)); /*0x67af73*/
    this->Items = 0; /*0x67af7b*/
  }
  this->IsAllocated = 0; /*0x67af7e*/
  this->Capacity = 0; /*0x67af81*/
}
// 0x67B180
unsigned int *   VectorClass_flat::CopyBuilding(void *a1)
{

  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this == (VectorClass *)a2 ) /*0x67b18a*/
    return &this->vtable0; /*0x67b18a*/
  (*((void (**)(VectorClass *))this->vtable0 + 3))(this); /*0x67b18e*/
  v3 = a2[2]; /*0x67b191*/
  this->Capacity = v3; /*0x67b196*/
  if ( !v3 ) /*0x67b199*/
  {
    this->Items = 0; /*0x67b1da*/
    this->IsAllocated = 0; /*0x67b1e1*/
    return &this->vtable0; /*0x67b1e5*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x67b1a3*/
  this->Items = v4; /*0x67b1ab*/
  if ( !v4 ) /*0x67b1b0*/
    return &this->vtable0; /*0x67b1b0*/
  Capacity = this->Capacity; /*0x67b1b2*/
  v6 = 0; /*0x67b1b5*/
  this->IsAllocated = 1; /*0x67b1b9*/
  if ( Capacity <= 0 ) /*0x67b1bd*/
    return &this->vtable0; /*0x67b1bd*/
  do /*0x67b1d1*/
  {
    *((unsigned int *)this->Items + v6) = *(unsigned int *)(a2[1] + 4 * v6); /*0x67b1c8*/
    ++v6; /*0x67b1ce*/
  }
  while ( v6 < this->Capacity ); /*0x67b1d1*/
  return &this->vtable0; /*0x67b1d5*/

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
      || !(*(unsigned __int8 (**)(DynamicVectorClass *, int, unsigned int))(this->vtable0 + 8))(
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
  *(unsigned int *)(Items + 4 * Count) = *a2; /*0x6911a8*/
  return 1; /*0x691191*/

}
// 0x69C580
char **   VectorClass_Wstring::Clear(int a3, void *a2)
{

  String::AssignFromPtr((String *)a2, (const char **)(*&a3->vtable2 + 4 * a3)); /*0x69c592*/
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

  int v4; // esi

  if ( !LOBYTE(this->IsInitialized) ) /*0x69cb55*/
    return 0; /*0x69cb5e*/
  v4 = 0; /*0x69cb67*/
  if ( this->Capacity <= 0 ) /*0x69cb6b*/
    return -1; /*0x69cb89*/
  while ( !(unsigned __int8)String::Compare((String *)(*&this->Items + 4 * v4), a2) ) /*0x69cb7f*/
  {
    if ( ++v4 >= this->Capacity ) /*0x69cb87*/
      return -1; /*0x69cb87*/
  }
  return v4; /*0x69cb5c*/

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

  void *v3 = *&Block->__pad_004; // eax /*0x69d5e3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x69d5e6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x69d5f0*/
  {
    __3_YAXPAX_Z(v3); /*0x69d5f8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x69d600*/
  }
  BYTE1(Block->m_C) = 0; /*0x69d60b*/
  Block->m_8 = 0; /*0x69d611*/
  if ( (a2 & 1) != 0 ) /*0x69d618*/
    __3_YAXPAX_Z(Block); /*0x69d61b*/
  return Block->__pad_0; /*0x69d625*/

}
// 0x69D630

// 0x69D680
DynamicVector * VectorClass_ptr_GlobalPacketType::Constructor_VectorClass_GlobalPacketType___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x69d683*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x69d686*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x69d690*/
  {
    __3_YAXPAX_Z(v3); /*0x69d698*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x69d6a0*/
  }
  BYTE1(Block->m_C) = 0; /*0x69d6ab*/
  Block->m_8 = 0; /*0x69d6b1*/
  if ( (a2 & 1) != 0 ) /*0x69d6b8*/
    __3_YAXPAX_Z(Block); /*0x69d6bb*/
  return Block->__pad_0; /*0x69d6c5*/

}
// 0x69D6D0

// 0x69D720
unsigned int * VectorClass_ptr_GlobalPacketType::loc_69D720(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x69d723*/
  *Block = &vt_VectorClass_PhoneEntryClass; /*0x69d726*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x69d730*/
  {
    __3_YAXPAX_Z(v3); /*0x69d738*/
    *(Block + 1) = 0; /*0x69d740*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x69d74b*/
  *(Block + 2) = 0; /*0x69d751*/
  if ( (a2 & 1) != 0 ) /*0x69d758*/
    __3_YAXPAX_Z(Block); /*0x69d75b*/
  return Block; /*0x69d765*/

}
// 0x69D7C0
unsigned int * VectorClass_flat::WstringConstructor(int a2, unsigned int * a3, void *a3_1)
{

  int v3; // esi
  unsigned int *v5; // ebp
  int *v7; // eax
  void *v8; // ebx
  unsigned int *v9; // ebp

  v3 = a2; /*0x69d7c3*/
  this->Items = 0; /*0x69d7cc*/
  this->Capacity = a2; /*0x69d7d3*/
  this->IsInitialized = 1; /*0x69d7d6*/
  this->IsAllocated = 0; /*0x69d7da*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x69d7de) */
  if ( !a2 ) /*0x69d7e4*/
  return &this->vtable0; /*0x69d7e4*/
  if ( !a3 ) /*0x69d7ec*/
  {
    v7 = (int *)__2_YAPAXI_Z(4 * a2 + 4); /*0x69d820*/
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
        return &this->vtable0; /*0x69d857*/
      }
    }
    else
    {
      v8 = 0; /*0x69d85a*/
    }
    this->Items = v8; /*0x69d85c*/
    this->IsAllocated = 1; /*0x69d85f*/
    return &this->vtable0; /*0x69d863*/
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
  return &this->vtable0; /*0x69d811*/

}
// 0x69E9B0
int VectorClass_flat::Check(Pipe * aP1, int aP2, void *a3)
{
  SHA1::Process(&aP1->q00C, aP2, a3); /*0x69e9c2*/
  return Delegate::Dispatch((Pipe *)aP1, aP2, a3); /*0x69e9d0*/
}
// 0x6B1410

// 0x6B1440

// 0x6B1460
int VectorClass_ptr_SlaveManagerClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x6b146a*/

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

  void *v3 = *&Block->__pad_004; // eax /*0x6b1a23*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x6b1a26*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x6b1a30*/
  {
    __3_YAXPAX_Z(v3); /*0x6b1a38*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x6b1a40*/
  }
  BYTE1(Block->m_C) = 0; /*0x6b1a4b*/
  Block->m_8 = 0; /*0x6b1a51*/
  if ( (a2 & 1) != 0 ) /*0x6b1a58*/
    __3_YAXPAX_Z(Block); /*0x6b1a5b*/
  return Block->__pad_0; /*0x6b1a65*/

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

  void *v3 = *&Block->__pad_004; // eax /*0x6b47f3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x6b47f6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x6b4800*/
  {
    __3_YAXPAX_Z(v3); /*0x6b4808*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x6b4810*/
  }
  BYTE1(Block->m_C) = 0; /*0x6b481b*/
  Block->m_8 = 0; /*0x6b4821*/
  if ( (a2 & 1) != 0 ) /*0x6b4828*/
    __3_YAXPAX_Z(Block); /*0x6b482b*/
  return Block->__pad_0; /*0x6b4835*/

}
// 0x6B81C0

// 0x6B81F0

// 0x6B8210
int VectorClass_ptr_SpawnManagerClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x6b821a*/

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

  void *v3 = *&Block->__pad_004; // eax /*0x6b8833*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x6b8836*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x6b8840*/
  {
    __3_YAXPAX_Z(v3); /*0x6b8848*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x6b8850*/
  }
  BYTE1(Block->m_C) = 0; /*0x6b885b*/
  Block->m_8 = 0; /*0x6b8861*/
  if ( (a2 & 1) != 0 ) /*0x6b8868*/
    __3_YAXPAX_Z(Block); /*0x6b886b*/
  return Block->__pad_0; /*0x6b8875*/

}
// 0x6BED50

// 0x6BED80

// 0x6BEDA0
int VectorClass_K::Clear(int a2)
{

  return *(unsigned int *)(*&this->Items + 4 * a2); /*0x6bedaa*/

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
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6beeac*/
  return 0; /*0x6bee5e*/
}
// 0x6BEEC0
LONG VectorClass_K_8::AddRef(int a1)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6beece*/
}
// 0x6BEEE0
LONG  VectorClass_K_8::Release(void *a1)
{
  LONG v1; // esi
  volatile LONG *this; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement&this->u32_4; /*0x6beef0*/
  if ( !v1 ) /*0x6beef4*/
    operator delete((void *)((void *)this)); /*0x6beef7*/
  return v1; /*0x6bef01*/
}
// 0x6BEF10
int VectorClass_K_8::ddtor(int a1, int a2, int a3, unsigned int * a4)
{
  CStreamClass *v5; // eax
  unsigned int *v6; // eax
  unsigned int *v7; // esi
  int v8; // edi
  unsigned int *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6bef18*/
    return -2147024809; /*0x6bef1b*/
  *v9 = 0; /*0x6bef28*/
  if ( a3 ) /*0x6bef30*/
    return -2147221232; /*0x6bef33*/
  v5 = (CStreamClass *)operator new(0x2Cu); /*0x6bef3e*/
  if ( !v5 ) /*0x6bef48*/
    return -2147024882; /*0x6bef48*/
  v6 = VectorClass_K_8::Constructor(v5); /*0x6bef4c*/
  v7 = v6; /*0x6bef51*/
  if ( !v6 ) /*0x6bef55*/
    return -2147024882; /*0x6bef58*/
  v8 = (*(int (__stdcall **)(unsigned int *, unsigned int *, unsigned int *))*v6)(v6, a4, v9); /*0x6bef6c*/
  if ( v8 < 0 ) /*0x6bef70*/
    v7->ddtor_15(1); /*0x6bef78*/
  return v8; /*0x6bef1a*/
}
// 0x6BEF90
int VectorClass_K_8::GetSize(int a1, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(unsigned int *)(a2 + 4); /*0x6bef9a*/
  if ( v5 ) /*0x6bef9d*/
    v3 = v2 + 1; /*0x6bef9f*/
  else
    v3 = v2 - 1; /*0x6befa8*/
  *(unsigned int *)(a2 + 4) = v3; /*0x6befa0*/
  return 0; /*0x6befa5*/
}
// 0x6BEFD0

// 0x6BF040
LONG VectorClass_K_14::AddRef(int a1, void *a2)
{

  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf04e*/

}
// 0x6BF060

// 0x6BF090

// 0x6BF110

// 0x6BF150

// 0x6BF1C0
LONG VectorClass_K_20::AddRef(int a1, void *a2)
{

  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf1ce*/

}
// 0x6BF1E0

// 0x6BF210

// 0x6BF290

// 0x6BF2D0

// 0x6BF340
LONG VectorClass_K_26::AddRef(int a1, void *a2)
{

  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf34e*/

}
// 0x6BF360

// 0x6BF390

// 0x6BF410

// 0x6BF450

// 0x6BF4C0
LONG VectorClass_K_32::AddRef(int a1, void *a2)
{

  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf4ce*/

}
// 0x6BF4E0

// 0x6BF510

// 0x6BF590

// 0x6BF5D0

// 0x6BF640
LONG VectorClass_K_38::AddRef(int a1, void *a2)
{

  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf64e*/

}
// 0x6BF660

// 0x6BF690

// 0x6BF710

// 0x6BF750

// 0x6BF7C0
LONG VectorClass_K_44::AddRef(int a1, void *a2)
{

  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf7ce*/

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

  return *(unsigned int *)(*&a2_2->vtable2 + 4 * a2_2); /*0x6ca81a*/

}
// 0x6CA820

// 0x6CA860

// 0x6CA910

// 0x6CA9C0
DynamicVector * VectorClass_ptr_SubTitle::Constructor_VectorClass_SubTitle___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x6ca9c3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x6ca9c6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x6ca9d0*/
  {
    __3_YAXPAX_Z(v3); /*0x6ca9d8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x6ca9e0*/
  }
  BYTE1(Block->m_C) = 0; /*0x6ca9eb*/
  Block->m_8 = 0; /*0x6ca9f1*/
  if ( (a2 & 1) != 0 ) /*0x6ca9f8*/
    __3_YAXPAX_Z(Block); /*0x6ca9fb*/
  return Block->__pad_0; /*0x6caa05*/

}
// 0x6CAA10

// 0x6CAAC0

// 0x6CAAF0

// 0x6CAB30

// 0x6CAB50

// 0x6CE2D0
char VectorClass_flat::RemoveAt(int a2, void *a2_2)
{

  int result; // eax
  int Count; // ecx
  int v5; // ecx

  result = (*(int (**)(DynamicVectorClass *, int))(a2_2->vtable0 + 16))(a2_2, a2_2); /*0x6ce2dc*/
  if ( result == -1 || (Count = a2_2->Count, result >= Count) ) /*0x6ce2e9*/
  {
    LOBYTE(result) = 0; /*0x6ce30b*/
  }
  else
  {
    v5 = Count - 1; /*0x6ce2eb*/
    for ( a2_2->Count = v5; /*0x6ce2f1*/
    result < a2_2->Count;
    *(unsigned int *)(a2_2->Items + 4 * result - 4) = *(unsigned int *)(a2_2->Items + 4 * result) )
    {
      ++result; /*0x6ce2f6*/
    }
    LOBYTE(result) = 1; /*0x6ce305*/
  }
  return result; /*0x6ce307*/

}
// 0x6DC4E0

// 0x6DC510

// 0x6DC540

// 0x6DC580

// 0x6DC5B0

// 0x6DC5D0
int VectorClass_UDirtyAreaStruct___16::Clear(int a2)
{

  return *(unsigned int *)(*&this->ptr_4 + 4 * a2); /*0x6dc5da*/

}
// 0x6DC5E0

// 0x6DC660

// 0x6DC780

// 0x6DC7B0
int VectorClass_UDirtyAreaStruct::GetSize(int a2)
{

  int m_8; // edi
  int v4; // esi
  int i; // ecx

  if ( !LOBYTE(this->IsInitialized) ) /*0x6dc7b0*/
    return 0; /*0x6dc7be*/
  m_8 = this->Capacity; /*0x6dc7c4*/
  v4 = 0; /*0x6dc7c7*/
  if ( m_8 <= 0 ) /*0x6dc7cb*/
    return -1; /*0x6dc815*/
  for ( i = *&this->Items; /*0x6dc7d1*/
  *(unsigned char *)(i + 16) != *(unsigned char *)(a2 + 16)
     || *(unsigned int *)i != *(unsigned int *)a2
     || *(unsigned int *)(i + 4) != *(unsigned int *)(a2 + 4)
     || *(unsigned int *)(i + 8) != *(unsigned int *)(a2 + 8)
     || *(unsigned int *)(i + 12) != *(unsigned int *)(a2 + 12);
  i += 20 )
  {
    if ( ++v4 >= m_8 ) /*0x6dc808*/
      return -1; /*0x6dc808*/
  }
  return v4; /*0x6dc7bb*/

}
// 0x6DC820

// 0x6DC970
int VectorClass_UDirtyAreaStruct::FindItemIndex(int a2)
{

  void *Count; // edi
  int v3; // esi
  char *i; // ecx

  Count = this->Count; /*0x6dc974*/
  v3 = 0; /*0x6dc977*/
  if ( (int)Count <= 0 ) /*0x6dc97b*/
    return -1; /*0x6dc9c5*/
  for ( i = (char *)this->Items; /*0x6dc981*/
  i[16] != *(unsigned char *)(a2 + 16)
     || *(unsigned int *)i != *(unsigned int *)a2
     || i->__pad_004 != *(unsigned int *)(a2 + 4)
     || i->u32_8 != *(unsigned int *)(a2 + 8)
     || i->u32_C != *(unsigned int *)(a2 + 12);
  i += 20 )
  {
    if ( ++v3 >= (int)Count ) /*0x6dc9b8*/
      return -1; /*0x6dc9b8*/
  }
  return v3; /*0x6dc9be*/

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

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6dcc83*/
  *Block = &vt_VectorClass_DirtyAreaStruct; /*0x6dcc86*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x6dcc90*/
  {
    __3_YAXPAX_Z(v3); /*0x6dcc98*/
    *(Block + 1) = 0; /*0x6dcca0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x6dccab*/
  *(Block + 2) = 0; /*0x6dccb1*/
  if ( (a2 & 1) != 0 ) /*0x6dccb8*/
    __3_YAXPAX_Z(Block); /*0x6dccbb*/
  return Block; /*0x6dccc5*/

}
// 0x6DCCD0

// 0x6DCD20
DynamicVector * VectorClass_UDirtyAreaStruct::Constructor_VectorClass_ShadowControlClass___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x6dcd23*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x6dcd26*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x6dcd30*/
  {
    __3_YAXPAX_Z(v3); /*0x6dcd38*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x6dcd40*/
  }
  BYTE1(Block->m_C) = 0; /*0x6dcd4b*/
  Block->m_8 = 0; /*0x6dcd51*/
  if ( (a2 & 1) != 0 ) /*0x6dcd58*/
    __3_YAXPAX_Z(Block); /*0x6dcd5b*/
  return Block->__pad_0; /*0x6dcd65*/

}
// 0x6E64E0

// 0x6E6510

// 0x6E6530
int VectorClass_ptr_TagTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x6e653a*/

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

  void *v3 = *&Block->__pad_004; // eax /*0x6e67f3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x6e67f6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x6e6800*/
  {
    __3_YAXPAX_Z(v3); /*0x6e6808*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x6e6810*/
  }
  BYTE1(Block->m_C) = 0; /*0x6e681b*/
  Block->m_8 = 0; /*0x6e6821*/
  if ( (a2 & 1) != 0 ) /*0x6e6828*/
    __3_YAXPAX_Z(Block); /*0x6e682b*/
  return Block->__pad_0; /*0x6e6835*/

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
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x717d3a) */
  if ( this != (DynamicVectorClass *)aP1 ) /*0x717d40*/
  {
    VectorClass::Cleanup((int)this); /*0x717d42*/
    v3 = aP1[2]; /*0x717d48*/
    this->Capacity = v3; /*0x717d4d*/
    if ( v3 ) /*0x717d50*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x717d56*/
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
            *(unsigned int *)(this->Items + 4 * v6) = *(unsigned int *)(aP1[1] + 4 * v6); /*0x717d7b*/
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
  /* X11: vtable install elided (implicit via TypeList virtuals 0x717d9a) */
  return &this->vtable0; /*0x717da2*/

}
// 0x71B240

// 0x71B270

// 0x71B290
int VectorClass_ptr_TemporalClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x71b29a*/

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

  void *v3 = *&Block->__pad_004; // eax /*0x71b553*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x71b556*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x71b560*/
  {
    __3_YAXPAX_Z(v3); /*0x71b568*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x71b570*/
  }
  BYTE1(Block->m_C) = 0; /*0x71b57b*/
  Block->m_8 = 0; /*0x71b581*/
  if ( (a2 & 1) != 0 ) /*0x71b588*/
    __3_YAXPAX_Z(Block); /*0x71b58b*/
  return Block->__pad_0; /*0x71b595*/

}
// 0x71FBA0

// 0x71FBD0

// 0x71FBF0
int VectorClass_ptr_TEventClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x71fbfa*/

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

  void *v3 = *&Block->__pad_004; // eax /*0x71feb3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x71feb6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x71fec0*/
  {
    __3_YAXPAX_Z(v3); /*0x71fec8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x71fed0*/
  }
  BYTE1(Block->m_C) = 0; /*0x71fedb*/
  Block->m_8 = 0; /*0x71fee1*/
  if ( (a2 & 1) != 0 ) /*0x71fee8*/
    __3_YAXPAX_Z(Block); /*0x71feeb*/
  return Block->__pad_0; /*0x71fef5*/

}
// 0x7212B0

// 0x7212E0

// 0x721300

// 0x7213B0

// 0x7213E0
DynamicVector * VectorClass_ptr_ThemeControl::Constructor_VectorClass_ThemeControl___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x7213e3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x7213e6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x7213f0*/
  {
    __3_YAXPAX_Z(v3); /*0x7213f8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x721400*/
  }
  BYTE1(Block->m_C) = 0; /*0x72140b*/
  Block->m_8 = 0; /*0x721411*/
  if ( (a2 & 1) != 0 ) /*0x721418*/
    __3_YAXPAX_Z(Block); /*0x72141b*/
  return Block->__pad_0; /*0x721425*/

}
// 0x723730

// 0x723760

// 0x723780
int VectorClass_ptr_TiberiumClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x72378a*/

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

  void *v3 = *&Block->__pad_004; // eax /*0x723a43*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x723a46*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x723a50*/
  {
    __3_YAXPAX_Z(v3); /*0x723a58*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x723a60*/
  }
  BYTE1(Block->m_C) = 0; /*0x723a6b*/
  Block->m_8 = 0; /*0x723a71*/
  if ( (a2 & 1) != 0 ) /*0x723a78*/
    __3_YAXPAX_Z(Block); /*0x723a7b*/
  return Block->__pad_0; /*0x723a85*/

}
// 0x74BF90
char VectorClass_E::Clear(int a2)
{

  return *(unsigned char *)(*&this->Items + a2); /*0x74bf9a*/

}
// 0x74BFA0
VectorClass_flat * VectorClass_E::QueryInterface(unsigned int * Block, char a2)
{
  void *v3 = *&Block->__pad_004; // eax /*0x74bfa3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x74bfa6*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_D))[1]) ) /*0x74bfb0*/
  {
    operator delete((void *)(v3)); /*0x74bfb8*/
    Block->Items = (unsigned int)(0); /*0x74bfc0*/
  }
  (Block->u8_E) = 0; /*0x74bfcb*/
  *&Block->u32_8 = 0; /*0x74bfd1*/
  if ( (a2 & 1) != 0 ) /*0x74bfd8*/
    operator delete((void *)(Block)); /*0x74bfdb*/
  return Block->tail_0; /*0x74bfe5*/
}
// 0x74BFF0
char VectorClass_E::AddRef(int a2)
{

  int m_8; // edi
  int v3; // eax

  m_8 = this->Capacity; /*0x74bff7*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x74bfff*/
  {
    v3 = 0; /*0x74c001*/
    if ( m_8 <= 0 ) /*0x74c005*/
      return 1; /*0x74c021*/
    while ( *(unsigned char *)(*&this->Items + v3) == *(unsigned char *)(*(unsigned int *)(a2 + 4) + v3) ) /*0x74c015*/
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
    LOBYTE(this->IsInitialized) = 0; /*0x74c046*/
    if ( a3 ) /*0x74c04c*/
      v4 = a3; /*0x74c05b*/
    else
      v4 = (char *)__2_YAPAXI_Z(Size); /*0x74c057*/
    LOBYTE(this->IsInitialized) = 1; /*0x74c05f*/
    if ( v4 ) /*0x74c063*/
    {
      if ( *&this->Items ) /*0x74c06e*/
      {
        m_8 = this->Capacity; /*0x74c075*/
        if ( Size < m_8 ) /*0x74c07a*/
          m_8 = Size; /*0x74c07c*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned char *)(*&this->Items + i - 1) ) /*0x74c082*/
          ++i; /*0x74c087*/
        if ( BYTE1(this->IsInitialized) ) /*0x74c094*/
        {
          __3_YAXPAX_Z(*&this->Items); /*0x74c09f*/
          *&this->Items = 0; /*0x74c0a7*/
        }
      }
      *&this->Items = v4; /*0x74c0b0*/
      this->Capacity = Size; /*0x74c0b8*/
      BYTE1(this->IsInitialized) = a3 == 0; /*0x74c0bb*/
      return 1; /*0x74c0c1*/
    }
    else
    {
      return 0; /*0x74c068*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_E *))(*(unsigned int *)this->vfptr + 12))(this); /*0x74c0cb*/
    return 1; /*0x74c0d1*/
  }

}
// 0x74C0E0
void VectorClass_E::ddtor(void *a1_1)
{
  if ( *(unsigned int *)&a1_1->IsAllocated && (((unsigned char *)&(*(unsigned int *)&a1_1->IsAllocated))[1]) ) /*0x74c0ed*/
  {
    operator delete((void *)(*(void **)&a1_1->Items)); /*0x74c0f3*/
    a1_1->Items = (unsigned int)(0); /*0x74c0fb*/
  }
  (((unsigned char *)&(a1_1->IsInitialized))[1]) = 0; /*0x74c0fe*/
  *(unsigned int *)&a1_1->Capacity = 0; /*0x74c101*/
}
// 0x74C110
int  VectorClass_E::GetSize(void *a1)
{

  int result; // eax
  int m_8; // esi
  int v4; // ecx

  if ( !LOBYTE(this->IsInitialized) ) /*0x74c110*/
    return 0; /*0x74c119*/
  m_8 = this->Capacity; /*0x74c11e*/
  result = 0; /*0x74c121*/
  if ( m_8 <= 0 ) /*0x74c125*/
    return -1; /*0x74c13a*/
  v4 = *&this->Items; /*0x74c12b*/
  while ( *(unsigned char *)(v4 + result) != *a2 ) /*0x74c133*/
  {
    if ( ++result >= m_8 ) /*0x74c138*/
      return -1; /*0x74c138*/
  }
  return result; /*0x74c118*/

}
// 0x74C150
int VectorClass_E::GetCapacity(int a2)
{

  if ( LOBYTE(this->IsInitialized) ) /*0x74c150*/
    return a2 - *&this->Items; /*0x74c163*/
  else
    return 0; /*0x74c157*/

}
// 0x7518D0

// 0x751900

// 0x751920
int VectorClass_ptr_VocClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x75192a*/

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

  void *v3 = *&Block->__pad_004; // eax /*0x751be3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x751be6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x751bf0*/
  {
    __3_YAXPAX_Z(v3); /*0x751bf8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x751c00*/
  }
  BYTE1(Block->m_C) = 0; /*0x751c0b*/
  Block->m_8 = 0; /*0x751c11*/
  if ( (a2 & 1) != 0 ) /*0x751c18*/
    __3_YAXPAX_Z(Block); /*0x751c1b*/
  return Block->__pad_0; /*0x751c25*/

}
// 0x7536A0
int VectorClass_ptr_VoxClass::Get(int a2, void *a2_2)
{
  return *(unsigned int *)(((unsigned int)(a2_2->Items)) + 4 * a2_2); /*0x7536aa*/
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

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x75a48a*/

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

  void *v3 = *&Block->__pad_004; // eax /*0x75a743*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x75a746*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x75a750*/
  {
    __3_YAXPAX_Z(v3); /*0x75a758*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x75a760*/
  }
  BYTE1(Block->m_C) = 0; /*0x75a76b*/
  Block->m_8 = 0; /*0x75a771*/
  if ( (a2 & 1) != 0 ) /*0x75a778*/
    __3_YAXPAX_Z(Block); /*0x75a77b*/
  return Block->__pad_0; /*0x75a785*/

}
// 0x763F90

// 0x763FC0

// 0x763FE0
int VectorClass_ptr_WaypointPathClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x763fea*/

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

  void *v3 = *&Block->__pad_004; // eax /*0x764713*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x764716*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x764720*/
  {
    __3_YAXPAX_Z(v3); /*0x764728*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x764730*/
  }
  BYTE1(Block->m_C) = 0; /*0x76473b*/
  Block->m_8 = 0; /*0x764741*/
  if ( (a2 & 1) != 0 ) /*0x764748*/
    __3_YAXPAX_Z(Block); /*0x76474b*/
  return Block->__pad_0; /*0x764755*/

}
// 0x76B6C0
unsigned int *  VectorClass_rc_ptr_WDTTerritory::loc_76B6C0(int a3, void *a2)
{

  int v3; // eax
  int v5; // esi
  void *v7; // eax
  int v8; // eax
  __int16 v9; // cx
  int v10; // esi
  char v11; // dl
  __int16 v12; // ax
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
  int v78; // [esp-4h] [ebp-1Ch]
  void **v79; // [esp+10h] [ebp-8h] BYREF
  int v80; // [esp+14h] [ebp-4h]

  v3 = a3; /*0x76b180*/
  v5 = 0; /*0x76b18c*/
  *(unsigned int *)(a3 + 32) = 0; /*0x76b192*/
  if ( a3 >= 28 ) /*0x76b195*/
  {
    while ( v5 + 28 <= v3 ) /*0x76b1ba*/
    {
      v7 = __2_YAPAXI_Z(0x40u); /*0x76b1be*/
      if ( v7 ) /*0x76b1c8*/
        v8 = ParseWDTTerritories_Parse(v7); /*0x76b1cc*/
      else
        v8 = 0; /*0x76b1d3*/
      ParseWDTTerritories_Parse_76B790(v8); /*0x76b1da*/
      LOBYTE(v9) = 0; /*0x76b1e6*/
      v10 = v5 + 1; /*0x76b1e8*/
      *(unsigned int *)(v80 + 8) = *(unsigned int *)(a3 + 32); /*0x76b1e9*/
      HIBYTE(v9) = *(unsigned char *)(v10 + a2 - 1); /*0x76b1ec*/
      *(unsigned short *)(v80 + 12) = v9; /*0x76b1f4*/
      *(unsigned short *)(v80 + 12) += *(unsigned __int8 *)(v10 + a2); /*0x76b201*/
      v11 = *(unsigned char *)(v10 + a2 + 1); /*0x76b205*/
      v10 += 2; /*0x76b211*/
      *(unsigned char *)(v80 + 14) = v11 + 0x80; /*0x76b212*/
      LOBYTE(v12) = 0; /*0x76b21c*/
      LOBYTE(v9) = *(unsigned char *)(v10 + a2) + 0x80; /*0x76b21e*/
      ++v10; /*0x76b221*/
      *(unsigned char *)(v80 + 15) = v9; /*0x76b222*/
      HIBYTE(v12) = *(unsigned char *)(v10 + a2); /*0x76b229*/
      ++v10; /*0x76b22c*/
      *(unsigned short *)(v80 + 16) = v12; /*0x76b22d*/
      *(unsigned short *)(v80 + 16) += *(unsigned __int8 *)(v10 + a2); /*0x76b23a*/
      v13 = *(unsigned __int8 *)(++v10 + a2) - 128; /*0x76b248*/
      ++v10; /*0x76b24d*/
      *(unsigned char *)(v80 + 28) = v13 & 0xF; /*0x76b253*/
      *(unsigned char *)(v80 + 29) = (v13 >> 4) & 0xF; /*0x76b25f*/
      v14 = *(unsigned char *)(v10 + a2) + 0x80; /*0x76b269*/
      ++v10; /*0x76b26c*/
      *(unsigned char *)(v80 + 30) = v14; /*0x76b26d*/
      LOBYTE(v9) = *(unsigned char *)(v10 + a2) + 0x80; /*0x76b277*/
      ++v10; /*0x76b27a*/
      *(unsigned char *)(v80 + 18) = v9; /*0x76b27b*/
      LOBYTE(v13) = *(unsigned char *)(v10 + a2) + 0x80; /*0x76b285*/
      ++v10; /*0x76b287*/
      *(unsigned char *)(v80 + 19) = v13; /*0x76b288*/
      v15 = *(unsigned char *)(v10 + a2) + 0x80; /*0x76b294*/
      ++v10; /*0x76b297*/
      *(unsigned char *)(v80 + 20) = v15; /*0x76b298*/
      v16 = *(unsigned __int8 *)(v10 + a2) - 128; /*0x76b2a2*/
      v17 = v10 + 1; /*0x76b2a8*/
      *(unsigned int *)(v80 + 24) = v16; /*0x76b2a9*/
      if ( *(unsigned char *)(v17 + a2) <= 0x7Fu ) /*0x76b2b1*/
        v18 = *(unsigned char *)(v17 + a2); /*0x76b2bf*/
      else
        v18 = *(unsigned char *)(v17 + a2) + 0x80; /*0x76b2b8*/
      v19 = v17 + 1; /*0x76b2c8*/
      *(unsigned char *)(v80 + 31) = v18; /*0x76b2c9*/
      if ( *(unsigned char *)(v19 + a2) <= 0x7Fu ) /*0x76b2d1*/
        v20 = *(unsigned char *)(v19 + a2); /*0x76b2df*/
      else
        v20 = *(unsigned char *)(v19 + a2) + 0x80; /*0x76b2d8*/
      v21 = v19 + 1; /*0x76b2e8*/
      *(unsigned char *)(v80 + 32) = v20; /*0x76b2e9*/
      if ( *(unsigned char *)(v21 + a2) <= 0x7Fu ) /*0x76b2f1*/
        v22 = *(unsigned char *)(v21 + a2); /*0x76b2ff*/
      else
        v22 = *(unsigned char *)(v21 + a2) + 0x80; /*0x76b2f8*/
      v23 = v21 + 1; /*0x76b308*/
      *(unsigned char *)(v80 + 33) = v22; /*0x76b309*/
      if ( *(unsigned char *)(v23 + a2) <= 0x7Fu ) /*0x76b311*/
        v24 = *(unsigned char *)(v23 + a2); /*0x76b31f*/
      else
        v24 = *(unsigned char *)(v23 + a2) + 0x80; /*0x76b318*/
      v25 = v23 + 1; /*0x76b328*/
      *(unsigned char *)(v80 + 34) = v24; /*0x76b329*/
      if ( *(unsigned char *)(v25 + a2) <= 0x7Fu ) /*0x76b331*/
        v26 = *(unsigned char *)(v25 + a2); /*0x76b33f*/
      else
        v26 = *(unsigned char *)(v25 + a2) + 0x80; /*0x76b338*/
      v27 = v25 + 1; /*0x76b348*/
      *(unsigned char *)(v80 + 35) = v26; /*0x76b349*/
      if ( *(unsigned char *)(v27 + a2) <= 0x7Fu ) /*0x76b351*/
        v28 = *(unsigned char *)(v27 + a2); /*0x76b35f*/
      else
        v28 = *(unsigned char *)(v27 + a2) + 0x80; /*0x76b358*/
      v29 = v27 + 1; /*0x76b368*/
      *(unsigned char *)(v80 + 36) = v28; /*0x76b369*/
      if ( *(unsigned char *)(v29 + a2) <= 0x7Fu ) /*0x76b371*/
        v30 = *(unsigned char *)(v29 + a2); /*0x76b37f*/
      else
        v30 = *(unsigned char *)(v29 + a2) + 0x80; /*0x76b378*/
      v31 = v29 + 1; /*0x76b388*/
      *(unsigned char *)(v80 + 37) = v30; /*0x76b389*/
      if ( *(unsigned char *)(v31 + a2) <= 0x7Fu ) /*0x76b391*/
        v32 = *(unsigned char *)(v31 + a2); /*0x76b39f*/
      else
        v32 = *(unsigned char *)(v31 + a2) + 0x80; /*0x76b398*/
      v33 = v31 + 1; /*0x76b3a8*/
      *(unsigned char *)(v80 + 38) = v32; /*0x76b3a9*/
      if ( *(unsigned char *)(v33 + a2) <= 0x7Fu ) /*0x76b3b1*/
        v34 = *(unsigned char *)(v33 + a2); /*0x76b3bf*/
      else
        v34 = *(unsigned char *)(v33 + a2) + 0x80; /*0x76b3b8*/
      v35 = v33 + 1; /*0x76b3c8*/
      *(unsigned char *)(v80 + 39) = v34; /*0x76b3c9*/
      if ( *(unsigned char *)(v35 + a2) <= 0x7Fu ) /*0x76b3d1*/
        v36 = *(unsigned char *)(v35 + a2); /*0x76b3df*/
      else
        v36 = *(unsigned char *)(v35 + a2) + 0x80; /*0x76b3d8*/
      v37 = v35 + 1; /*0x76b3e8*/
      *(unsigned char *)(v80 + 43) = v36; /*0x76b3e9*/
      if ( *(unsigned char *)(v37 + a2) <= 0x7Fu ) /*0x76b3f1*/
        v38 = *(unsigned char *)(v37 + a2); /*0x76b3ff*/
      else
        v38 = *(unsigned char *)(v37 + a2) + 0x80; /*0x76b3f8*/
      v39 = v37 + 1; /*0x76b408*/
      *(unsigned char *)(v80 + 44) = v38; /*0x76b409*/
      if ( *(unsigned char *)(v39 + a2) <= 0x7Fu ) /*0x76b411*/
        v40 = *(unsigned char *)(v39 + a2); /*0x76b41f*/
      else
        v40 = *(unsigned char *)(v39 + a2) + 0x80; /*0x76b418*/
      v41 = v39 + 1; /*0x76b428*/
      *(unsigned char *)(v80 + 45) = v40; /*0x76b429*/
      if ( *(unsigned char *)(v41 + a2) <= 0x7Fu ) /*0x76b431*/
        v42 = *(unsigned char *)(v41 + a2); /*0x76b43f*/
      else
        v42 = *(unsigned char *)(v41 + a2) + 0x80; /*0x76b438*/
      v43 = v41 + 1; /*0x76b448*/
      *(unsigned char *)(v80 + 46) = v42; /*0x76b449*/
      if ( *(unsigned char *)(v43 + a2) <= 0x7Fu ) /*0x76b451*/
        v44 = *(unsigned char *)(v43 + a2); /*0x76b45f*/
      else
        v44 = *(unsigned char *)(v43 + a2) + 0x80; /*0x76b458*/
      v45 = v43 + 1; /*0x76b468*/
      *(unsigned char *)(v80 + 47) = v44; /*0x76b469*/
      if ( *(unsigned char *)(v45 + a2) <= 0x7Fu ) /*0x76b471*/
        v46 = *(unsigned char *)(v45 + a2); /*0x76b47f*/
      else
        v46 = *(unsigned char *)(v45 + a2) + 0x80; /*0x76b478*/
      v47 = v45 + 1; /*0x76b488*/
      *(unsigned char *)(v80 + 48) = v46; /*0x76b489*/
      if ( *(unsigned char *)(v47 + a2) <= 0x7Fu ) /*0x76b491*/
        v48 = *(unsigned char *)(v47 + a2); /*0x76b49f*/
      else
        v48 = *(unsigned char *)(v47 + a2) + 0x80; /*0x76b498*/
      v49 = v47 + 1; /*0x76b4a8*/
      *(unsigned char *)(v80 + 40) = v48; /*0x76b4a9*/
      if ( *(unsigned char *)(v49 + a2) <= 0x7Fu ) /*0x76b4b1*/
        v50 = *(unsigned char *)(v49 + a2); /*0x76b4bf*/
      else
        v50 = *(unsigned char *)(v49 + a2) + 0x80; /*0x76b4b8*/
      v51 = v49 + 1; /*0x76b4c8*/
      *(unsigned char *)(v80 + 41) = v50; /*0x76b4c9*/
      if ( *(unsigned char *)(v51 + a2) <= 0x7Fu ) /*0x76b4d1*/
        v52 = *(unsigned char *)(v51 + a2); /*0x76b4df*/
      else
        v52 = *(unsigned char *)(v51 + a2) + 0x80; /*0x76b4d8*/
      v53 = v51 + 1; /*0x76b4e8*/
      *(unsigned char *)(v80 + 42) = v52; /*0x76b4e9*/
      if ( *(unsigned char *)(v53 + a2) <= 0x7Fu ) /*0x76b4f1*/
        v54 = *(unsigned char *)(v53 + a2); /*0x76b4ff*/
      else
        v54 = *(unsigned char *)(v53 + a2) + 0x80; /*0x76b4f8*/
      v55 = v53 + 1; /*0x76b508*/
      *(unsigned char *)(v80 + 49) = v54; /*0x76b509*/
      if ( *(unsigned char *)(v55 + a2) <= 0x7Fu ) /*0x76b511*/
        v56 = *(unsigned char *)(v55 + a2); /*0x76b51f*/
      else
        v56 = *(unsigned char *)(v55 + a2) + 0x80; /*0x76b518*/
      v57 = v55 + 1; /*0x76b528*/
      *(unsigned char *)(v80 + 50) = v56; /*0x76b529*/
      if ( *(unsigned char *)(v57 + a2) <= 0x7Fu ) /*0x76b531*/
        v58 = *(unsigned char *)(v57 + a2); /*0x76b53f*/
      else
        v58 = *(unsigned char *)(v57 + a2) + 0x80; /*0x76b538*/
      v59 = v57 + 1; /*0x76b548*/
      *(unsigned char *)(v80 + 51) = v58; /*0x76b549*/
      if ( *(unsigned char *)(v59 + a2) <= 0x7Fu ) /*0x76b551*/
        v60 = *(unsigned char *)(v59 + a2); /*0x76b55f*/
      else
        v60 = *(unsigned char *)(v59 + a2) + 0x80; /*0x76b558*/
      v61 = v59 + 1; /*0x76b568*/
      *(unsigned char *)(v80 + 52) = v60; /*0x76b569*/
      if ( *(unsigned char *)(v61 + a2) <= 0x7Fu ) /*0x76b571*/
        v62 = *(unsigned char *)(v61 + a2); /*0x76b57f*/
      else
        v62 = *(unsigned char *)(v61 + a2) + 0x80; /*0x76b578*/
      v63 = v61 + 1; /*0x76b588*/
      *(unsigned char *)(v80 + 53) = v62; /*0x76b589*/
      if ( *(unsigned char *)(v63 + a2) <= 0x7Fu ) /*0x76b591*/
        v64 = *(unsigned char *)(v63 + a2); /*0x76b59f*/
      else
        v64 = *(unsigned char *)(v63 + a2) + 0x80; /*0x76b598*/
      v65 = v63 + 1; /*0x76b5a8*/
      *(unsigned char *)(v80 + 54) = v64; /*0x76b5a9*/
      v66 = *(unsigned __int8 *)(v65 + a2) << 24; /*0x76b5b7*/
      ++v65; /*0x76b5ba*/
      *(unsigned int *)(v80 + 60) = v66; /*0x76b5bb*/
      v67 = (*(unsigned __int8 *)(v65 + a2) << 16) + *(unsigned int *)(v80 + 60); /*0x76b5cb*/
      ++v65; /*0x76b5cd*/
      *(unsigned int *)(v80 + 60) = v67; /*0x76b5ce*/
      v68 = (*(unsigned __int8 *)(v65 + a2) << 8) + *(unsigned int *)(v80 + 60); /*0x76b5e0*/
      ++v65; /*0x76b5e2*/
      *(unsigned int *)(v80 + 60) = v68; /*0x76b5e3*/
      v69 = *(unsigned __int8 *)(v65 + a2) + *(unsigned int *)(v80 + 60); /*0x76b5f2*/
      ++v65; /*0x76b5f4*/
      *(unsigned int *)(v80 + 60) = v69; /*0x76b5f5*/
      v70 = *(unsigned __int8 *)(v65 + a2) << 24; /*0x76b603*/
      ++v65; /*0x76b606*/
      *(unsigned int *)(v80 + 56) = v70; /*0x76b607*/
      v71 = (*(unsigned __int8 *)(v65 + a2) << 16) + *(unsigned int *)(v80 + 56); /*0x76b617*/
      ++v65; /*0x76b619*/
      *(unsigned int *)(v80 + 56) = v71; /*0x76b61a*/
      v72 = (*(unsigned __int8 *)(v65 + a2) << 8) + *(unsigned int *)(v80 + 56); /*0x76b62c*/
      ++v65; /*0x76b62e*/
      *(unsigned int *)(v80 + 56) = v72; /*0x76b62f*/
      v73 = *(unsigned __int8 *)(v65 + a2); /*0x76b638*/
      v5 = v65 + 1; /*0x76b640*/
      *(unsigned int *)(v80 + 56) += v73; /*0x76b641*/
      v74 = *(unsigned int *)(a3 + 52); /*0x76b644*/
      if ( *(unsigned int *)(a3 + 60) < v74 /*0x76b66c*/
        || (*(unsigned char *)(a3 + 57) || !v74)
        && (v75 = *(unsigned int *)(a3 + 64), v75 > 0)
        && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)(a3 + 44) + 8))(a3 + 44, v75 + v74, 0) )
      {
        v76 = *(unsigned int *)(a3 + 60); /*0x76b673*/
        v78 = v80; /*0x76b67a*/
        *(unsigned int *)(a3 + 60) = v76 + 1; /*0x76b67e*/
        ComPtr::Set((unsigned int *)(*(unsigned int *)(a3 + 48) + 8 * v76), v78); /*0x76b687*/
      }
      v77 = *(unsigned int *)(a3 + 32); /*0x76b68c*/
      v79 = &vt_rc_ptr; /*0x76b68f*/
      *(unsigned int *)(a3 + 32) = v77 + 1; /*0x76b698*/
      ComPtr::Release(&v79); /*0x76b69f*/
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

  int v3 = *&this->Items + 8 * a3; // edi /*0x76b76d*/
  ComPtr::Constructor((ComPtr *)a2); /*0x76b772*/
  *a2 = &vt_rc_ptr; /*0x76b777*/
  ComPtr::Set((ComPtr *)a2, v3->u32_4); /*0x76b783*/
  return a2; /*0x76b78a*/

}
// 0x76B870

// 0x76B9E0

// 0x76BA10

// 0x76BA50

// 0x76BBC0

// 0x7AE730
char VectorClass_flat::Shrink(void *a1)
{

  void *vtable0; // eax
  int Items; // ecx
  int result; // eax
  int v5; // ebx
  void *v6; // eax
  const void *Capacity; // esi
  int v8; // [esp+8h] [ebp-4h]

  vtable0 = this->vtable0; /*0x7ae735*/
  Items = (int)this->Items; /*0x7ae738*/
  result = 3 * (unsigned int)vtable0; /*0x7ae73b*/
  if ( result <= Items ) /*0x7ae740*/
  {
    result = Items - (Items >> 31); /*0x7ae74b*/
    v5 = Items / 2; /*0x7ae74f*/
    if ( Items / 2 < 10 ) /*0x7ae754*/
      v5 = 10; /*0x7ae756*/
    if ( v5 < Items ) /*0x7ae75d*/
    {
      v6 = (void *)__2_YAPAXI_Z(4 * v5); /*0x7ae76e*/
      Capacity = (const void *)this->Capacity; /*0x7ae773*/
      v8 = (int)v6; /*0x7ae77b*/
      if ( Capacity ) /*0x7ae77f*/
        memcpy(v6, Capacity, 4 * (int)this->vtable0); /*0x7ae78f*/
      __3_YAXPAX_Z((void *)this->Capacity); /*0x7ae79d*/
      this->Capacity = v8; /*0x7ae7a9*/
      this->Items = (void *)v5; /*0x7ae7ac*/
      LOBYTE(result) = 1; /*0x7ae7b1*/
    }
    else
    {
      LOBYTE(result) = 0; /*0x7ae760*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x7ae743*/
  }
  return result; /*0x7ae742*/

}
// 0x7B2890
int VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass::Get(int a2, void *a2_2)
{
  return *(unsigned int *)(((unsigned int)(a2_2->Items)) + 4 * a2_2); /*0x7b289a*/
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

  return *(unsigned int *)(*&this->Items + 4 * a2); /*0x7b431a*/

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

  const char *v2; // eax
  int v3; // eax

  v2 = *(const char **)this->vfptr; /*0x7b4860*/
  if ( *(unsigned int *)this->vfptr || *a2 ) /*0x7b486b*/
  {
    if ( v2 && *a2 ) /*0x7b487a*/
    {
      v3 = strcmp(v2, *a2); /*0x7b4889*/
      if ( v3 ) /*0x7b48a3*/
        LOBYTE(v3) = 1; /*0x7b48ba*/
    }
    else
    {
      LOBYTE(v3) = 1; /*0x7b48c0*/
    }
  }
  else
  {
    LOBYTE(v3) = 0; /*0x7b4870*/
  }
  return v3; /*0x7b4872*/

}