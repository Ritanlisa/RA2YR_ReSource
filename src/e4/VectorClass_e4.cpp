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

// 0x4137A0
namespace gamemd {
int VectorClass_flat::RemoveObjectById()
{
  VectorClass_flat * v2;
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  VectorClass_flat * v7;

  v7 = (gamemd::VectorClass_flat *)(this);
    if ( !*((unsigned int *)this + 38464) )
    return 0; /*0x4137ab*/
    v2 = (char *)this + 38400;
  v3 = this->u32_2580; /*(unsigned int *)(0x4137c3)*/
    v7 = **(unsigned int **)((char *)this + 38416);
    v4 = (*(int (**)(int, int *))(v3 + 16))((char *)this + 38400, &v7);
  if ( v4 != -1 ) /*0x4137d1*/
  {
        v5 = *(unsigned int *)(v2 + 16);
    if ( v4 < v5 ) /*0x4137d8*/
    {
      v6 = v5 - 1; /*0x4137da*/
            for ( *(unsigned int *)(v2 + 16) = v6;
            v4 < this->v6;
            *(unsigned int *)(this->v6 + 4 * v4 - 4) = *(unsigned int *)(this->v6 + 4 * v4) )
      {
        ++v4; /*0x4137e5*/
      }
    }
  }
  return (int)(v7);
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
  void * v12;
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
    v1 = *(int **)this-((unsigned int *)(>radioLinks))[1]; /*0x65a984*/
    if ( !v1 ) /*0x65a988*/
      return 0; /*0x65a990*/
  }
  if ( v17 == 3 ) /*0x65a99a*/
  {
    v4 = this-((unsigned int *)(>radioLinks))[2]; /*0x65a99c*/
    v5 = 0; /*0x65a9a2*/
    if ( v4 > 0 ) /*0x65a9a6*/
    {
      do /*0x65a9c7*/
      {
        v6 = this-((unsigned int *)(>radioLinks))[1]; /*0x65a9a8*/
        v7 = *(int **)(v6 + 4 * v5); /*0x65a9ae*/
        v8 = (unsigned int *)(v6 + 4 * v5); /*0x65a9b1*/
        if ( v7 == v1 ) /*0x65a9b6*/
          *v8 = 0; /*0x65a9b8*/
        ++v5; /*0x65a9c4*/
      }
      while ( v5 < this-((unsigned int *)(>radioLinks))[2] ); /*0x65a9c7*/
    }
    goto LABEL_9; /*0x65a9c7*/
  }
  if ( v17 != 2 ) /*0x65a9eb*/
  {
  LABEL_9: v9 = (int)((void *)(*v1));
    v10 = (void *)(AbstractClass::IsTechnoType((AbstractClass *)this));
    return v1->ProcessInputKey(v10, v17, v18); /*0x65a9e5*/
  }
  v11 = (void *)(this-((unsigned int *)(>radioLinks))[2]);
  v12 = (void *)(-1);
  v13 = 0; /*0x65a9f6*/
  if ( v11 > 0 ) /*0x65a9fa*/
  {
    v14 = (int **)this-((unsigned int *)(>radioLinks))[1]; /*0x65a9fc*/
    while ( 1 ) /*0x65aa02*/
    {
      if ( v12 == (void *)((unsigned int))-1) && !*v14 ) /*0x65aa07*/
        v12 = v13; /*0x65aa0c*/
      if ( *v14 == v1 ) /*0x65aa10*/
        return 1; /*0x65aa10*/
      ++v13; /*0x65aa12*/
      ++v14; /*0x65aa13*/
      if ( v13 >= v11 ) /*0x65aa18*/
      {
        if ( v12 != (void *)((unsigned int))-1) ) /*0x65aa1d*/
          goto LABEL_20; /*0x65aa1d*/
        break; /*0x65aa1d*/
      }
    }
  }
    (*(void (**)(#377 *, int, unsigned int))(*(unsigned int *)this + 632))(this, 3, **((unsigned int **)this + 57));
    this,
    3,
    *(unsigned int *)this-((unsigned int *)(>radioLinks))[1]);
  v12 = (void *)((unsigned int)((void *)((int)((void *)(0)))));
  LABEL_20: v15 = (int)((void *)(*v1));
  v16 = (void *)(AbstractClass::IsTechnoType((AbstractClass *)this));
  if ( v1->ProcessInputKey(v16, 2, v18) == 1 ) /*0x65aa52*/
  {
    *(unsigned int *)(this-((unsigned int *)(>radioLinks))[1] + 4 * v12) = v1; /*0x65aa5a*/
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

    v3 = (*(int (**)(int *, IUnknown *))(*((unsigned int *)this + 40) + 20))((char *)this + 40, aP1) + 1;
    if ( *((unsigned int *)this + 36) != -1 && v3 == *((unsigned int *)this + 56) )
        v3 = *((unsigned int *)this + 36);
    if ( v3 < 0 || v3 >= *((unsigned int *)this + 56) )
    return 0; /*0x763bd7*/
  else
        return *((unsigned int *)this + 44) + 12 * v3;
}
} // namespace gamemd
// 0x42F6F0
namespace gamemd {
AbstractClass * * VectorClass_Cell::Release(int a2, unsigned int * a3)
{
  void * v4;
  unsigned int *v5; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x42f6fc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x42f70c*/
    {
      v5 = a3; /*0x42f734*/
    }
    else
    {
      v4 = RA2_OPNEW(4 * a2); /*0x42f716*/
      if ( v4 ) /*0x42f720*/
        v5 = (unsigned int *)v4; /*0x42f725*/
      else
        v5 = 0; /*0x42f72d*/
    }
        *((unsigned char *)this + 12) = 1;
    if ( v5 ) /*0x42f740*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v7 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x42f757*/
          m_8 = a2; /*0x42f759*/
                for ( i = 0; i < v7; v5[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x42f764*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x42f77c*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v5;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x42f79e*/
    }
    else
    {
      return 0; /*0x42f745*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x42f7ae*/
  }
}
}
// 0x4E0840
namespace gamemd {
AbstractClass * * VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::Release(int a2, int * a2)
{
  unsigned int v4;
  int *v5; // eax
  int *v6; // edi
  unsigned int *v7; // eax
  int v8; // ecx
  int *v9; // eax
  unsigned int v10;
  int m_8; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // eax

  if ( a2 ) /*0x4e084c*/
  {
    v4 = a2; /*0x4e0852*/
        *((unsigned char *)this + 12) = 0;
    if ( a2 ) /*0x4e085c*/
    {
      *(int *)(a2) = (int *)(a2);
      v6 = (int *)(a2 + 1);
      if ( a2 - 1 >= 0 ) /*0x4e089e*/
      {
        v9 = (int *)(a2 + 2);
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
          v7 = (unsigned int *)(v5 + 2);
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
        *((unsigned char *)this + 12) = 1;
    if ( v6 ) /*0x4e08b6*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v12 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4e08cd*/
          m_8 = a2; /*0x4e08cf*/
        v13 = 0; /*0x4e08d1*/
        if ( m_8 > 0 ) /*0x4e08d5*/
        {
          do /*0x4e08ed*/
          {
                        v14 = *((unsigned int *)this + 1);
            ++v13; /*0x4e08da*/
            v6[2 * v13 - 2] = *(unsigned int *)(v14 + 8 * v13 - 8); /*0x4e08e1*/
            v6[2 * v13 - 1] = *(unsigned int *)(v14 + 8 * v13 - 4); /*0x4e08e9*/
          }
          while ( v13 < m_8 ); /*0x4e08ed*/
          v4 = a2; /*0x4e08ef*/
        }
                if ( *((unsigned char *)this + 13) )
        {
                    v15 = *((unsigned int *)this + 1);
          if ( v15 ) /*0x4e08ff*/
            RA2_OPDEL((void *)(v15 - 4)); /*0x4e0909*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v6;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = v4 == 0;
      return 1; /*0x4e092b*/
    }
    else
    {
      return 0; /*0x4e08bb*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4e093b*/
  }
}
}
// 0x4E0B10
namespace gamemd {
AbstractClass * * VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::SetCapacity(int a2, int * a2)
{
  unsigned int v4;
  int *v5; // eax
  int *v6; // edi
  unsigned int *v7; // eax
  int v8; // ecx
  int *v9; // eax
  unsigned int v10;
  int m_8; // ecx
  int v12; // eax
  int v13; // edx
  int *v14; // eax
  int *v15; // ebp
  int v16; // eax

  if ( a2 ) /*0x4e0b1c*/
  {
    v4 = a2; /*0x4e0b22*/
        *((unsigned char *)this + 12) = 0;
    if ( a2 ) /*0x4e0b2c*/
    {
      *(int *)(a2) = (int *)(a2);
      v6 = (int *)(a2 + 1);
      if ( a2 - 1 >= 0 ) /*0x4e0b6f*/
      {
        v9 = (int *)(a2 + 2);
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
          v7 = (unsigned int *)(v5 + 2);
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
        *((unsigned char *)this + 12) = 1;
    if ( !v6 ) /*0x4e0b87*/
      return 0; /*0x4e0c27*/
        if ( *((unsigned int *)this + 1) )
    {
            v11 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4e0b99*/
        m_8 = a2; /*0x4e0b9b*/
      v12 = 0; /*0x4e0b9d*/
      if ( m_8 > 0 ) /*0x4e0ba1*/
      {
        do /*0x4e0bb9*/
        {
                    v13 = *((unsigned int *)this + 1);
          ++v12; /*0x4e0ba6*/
          v6[2 * v12 - 2] = *(unsigned int *)(v13 + 8 * v12 - 8); /*0x4e0bad*/
          v6[2 * v12 - 1] = *(unsigned int *)(v13 + 8 * v12 - 4); /*0x4e0bb5*/
        }
        while ( v12 < m_8 ); /*0x4e0bb9*/
        v4 = a2; /*0x4e0bbb*/
      }
            if ( *((unsigned char *)this + 13) )
      {
                v14 = *((unsigned int *)this + 1);
        if ( v14 ) /*0x4e0bcb*/
        {
          v15 = v14 - 1; /*0x4e0bd0*/
          Array::ForEachReverse(v14, 8, *(v14 - 1), (int (__thiscall *)(int))nullsub_138); /*0x4e0bdc*/
          RA2_OPDEL(v15); /*0x4e0be2*/
          v4 = a2; /*0x4e0be7*/
        }
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v6;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = v4 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v16 = *((unsigned int *)this + 2);
    if ( v16 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v16;
  return 1; /*0x4e0c1b*/
}
}
// 0x4A2820
namespace gamemd {
unsigned int * VectorClass_K_8::Constructor()
{
  this->CStreamClass_field_0x08 = (unsigned int *)(0);
  this->CStreamClass_field_0x0C = (unsigned int *)(0);
    *((unsigned char *)this + 16) = 0;
    *((unsigned char *)this + 17) = 0;
    *((unsigned int *)this + 20) = 0;
  this->CStreamClass_field_0x18 = RA2_OPNEW(0x10000u); /*0x4a2843*/
  this->CStreamClass_field_0x1C = RA2_OPNEW(0x10000u); /*0x4a2850*/
  this->CStreamClass_field_0x20 = RA2_OPNEW(0x10000u); /*0x4a285b*/
  *(unsigned int *)this->__pad_0 = (void*)&CStreamClass_vftable; /*0x4a285e*/
    *((unsigned int *)this + 4) = &vt_CStreamClass;
    *((unsigned int *)this + 36) = 0xFFFF;
  return this; /*0x4a2874*/
}
}
// 0x5AD010
namespace gamemd {
AbstractClass * * VectorClass_Ptr::ResizeAndCopy(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5ad01c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5ad028*/
      v4 = a3; /*0x5ad03e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5ad03a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x5ad046*/
      return 0; /*0x5ad0ba*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < v5 ) /*0x5ad054*/
        v5 = a2; /*0x5ad056*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x5ad061*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->ptr_4); /*0x5ad079*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
    *(unsigned int *)&this-((unsigned int *)(>__pad_5))[3] = a2; /*0x5ad092*/
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
  v7 = *(unsigned int *)&this-((unsigned int *)(>__pad_5))[3]; /*0x5ad0a1*/
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x5ad0ae*/
}
}
// 0x4A0C20
namespace gamemd {
unsigned int * VectorClass_ptr_BuildChoiceClass_int_ouseClass::Constructor(EnumConnectionPointsClass * aP1)
{
  char *p_IsInitialized; // esi
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int i; // esi
  int v10; // [esp-4h] [ebp-14h]

  p_IsInitialized = (char *)((unsigned int)(&this->IsInitialized));
    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = 0;
    *((unsigned int *)this + 16) = 0;
  this-((unsigned int *)(>CapacityIncrement))[0] = 0; /*0x4a0c3a*/
  this-((unsigned int *)(>__tail_18))[0] = 1; /*0x4a0c3d*/
  this-((unsigned int *)(>__tail_18))[1] = 0; /*0x4a0c41*/
    *((unsigned int *)this + 12) = &vt_VectorClass_IConnectionPoint;
  if ( &this->IsInitialized != (void **)((char *))aP1 ) /*0x4a0c4a*/
  {
    VectorClass::CleanupTyped((int)&this->IsInitialized); /*0x4a0c4e*/
    v4 = aP1[2]; /*0x4a0c54*/
    *((unsigned int *)p_IsInitialized + 2) = v4; /*0x4a0c59*/
    if ( v4 ) /*0x4a0c5c*/
    {
      v5 = (int)(RA2_OPNEW(4 * v4));
      *((unsigned int *)p_IsInitialized + 1) = v5; /*0x4a0c6c*/
      if ( v5 ) /*0x4a0c6f*/
      {
        v6 = *((unsigned int *)p_IsInitialized + 2); /*0x4a0c71*/
        v7 = 0; /*0x4a0c74*/
        p_IsInitialized[13] = 1; /*0x4a0c78*/
        if ( v6 > 0 ) /*0x4a0c7c*/
        {
          do /*0x4a0c90*/
          {
            *(unsigned int *)(*((unsigned int *)p_IsInitialized + 1) + 4 * v7) = *(unsigned int *)(aP1[1] + 4 * v7); /*0x4a0c87*/
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
  *((unsigned int *)p_IsInitialized + 4) = aP1[4]; /*0x4a0c9d*/
  *((unsigned int *)p_IsInitialized + 5) = aP1[5]; /*0x4a0ca3*/
  *(unsigned int *)p_IsInitialized = (void*)&DynamicVectorClass_IConnectionPoint___vftable; /*0x4a0ca6*/
  *(unsigned int *)this->__pad_0 = (void*)&EnumConnectionPointsClass_vftable; /*0x4a0cac*/
  for ( i = 0; i < *(unsigned int *)&this-((unsigned int *)(>__tail_18))[4]; ++i ) /*0x4a0cb9*/
  {
        v10 = *(unsigned int *)(*((unsigned int *)this + 16) + 4 * i);
    (*(void (__stdcall **)(int))(*(unsigned int *)v10 + 4))(v10); /*0x4a0cc4*/
  }
  return (unsigned int *)(this);
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
  if ( *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 164) <= 0 ) /*0x4f6a2d*/
    return 0; /*0x4f6a71*/
  do /*0x4f6a66*/
  {
    v4 = *(HouseClass ***)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 152) + 4 * v3); /*0x4f6a42*/
    if ( v4[135] == (HouseClass *)((char *)a1 - 36) /*0x4f6a5b*/
      && *(unsigned int *)(((int (__thiscall *)(HouseClass **))(*v4)->occupiablesCount)(v4) + 956) == a2 )
    {
      ++v2; /*0x4f6a5d*/
    }
    ++v3; /*0x4f6a63*/
  }
  while ( v3 < *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 164) ); /*0x4f6a66*/
  return v2; /*0x4f6a6c*/
}
}
// 0x4F6A80
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::SetCapacity_0(int a1, int a2)
{
  int v2; // edi
  int v3; // esi
  unsigned int *v4; // ecx
  int v6; // [esp+10h] [ebp+8h]

  v2 = 0; /*0x4f6a87*/
  v3 = 0; /*0x4f6a89*/
  if ( dword_A8EC88 <= 0 ) /*0x4f6a8d*/
    return 0; /*0x4f6ad1*/
  do /*0x4f6ac6*/
  {
    v4 = (unsigned int *)*((unsigned int *)dword_A8EC7C + v3); /*0x4f6aa2*/
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
  int v2; // ebp
  int v3; // edi
  HouseClass **v4; // esi
  unsigned int *v5; // eax

  v2 = 0; /*0x4f6ae7*/
  v3 = 0; /*0x4f6ae9*/
  if ( *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 164) <= 0 ) /*0x4f6aed*/
    return 0; /*0x4f6b44*/
  do /*0x4f6b39*/
  {
    v4 = *(HouseClass ***)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 152) + 4 * v3); /*0x4f6afe*/
    v5 = (unsigned int *)((int (__thiscall *)(HouseClass **))(*v4)->occupiablesCount)(v4); /*0x4f6b05*/
    if ( v4[135] == (HouseClass *)((char *)a1 - 36) && v5[239] == a2 ) /*0x4f6b1f*/
      v2 += v5[412] + v5[413]; /*0x4f6b2f*/
    ++v3; /*0x4f6b36*/
  }
  while ( v3 < *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 164) ); /*0x4f6b39*/
  return v2; /*0x4f6b3f*/
}
}
// 0x4F6B50
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::SetCapacity_2(int a1, int a2)
{
  int v2; // ebp
  int v3; // edi
  unsigned int *v4; // esi
  unsigned int *v5; // eax
  int v7; // [esp+10h] [ebp+8h]

  v2 = 0; /*0x4f6b57*/
  v3 = 0; /*0x4f6b59*/
  if ( dword_A8EC88 <= 0 ) /*0x4f6b5d*/
    return 0; /*0x4f6bb4*/
  do /*0x4f6ba9*/
  {
    v4 = (unsigned int *)*((unsigned int *)dword_A8EC7C + v3); /*0x4f6b6e*/
    v5 = (unsigned int *)(*(int (**)(unsigned int *))(*v4 + 132))(v4); /*0x4f6b75*/
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
  uint16_t v2; // cx
  uint16_t v3; // di
  int v4; // eax
  int v5; // eax
  void *v6; // eax
  int *v7; // edx
  bool v8; // zf
  int v9; // esi
  int v10; // eax
  void *v11; // eax
  int *v12; // edx
  int16_t v14[2]; // [esp+8h] [ebp-20h] BYREF
  int16_t v15[2]; // [esp+Ch] [ebp-1Ch] BYREF
  int v16; // [esp+10h] [ebp-18h]
  int v17; // [esp+14h] [ebp-14h]
  int v18; // [esp+18h] [ebp-10h]
  unsigned char v19[12]; // [esp+1Ch] [ebp-Ch] BYREF

  v2 = *(unsigned short *)&(unsigned int *)((char *)&stru_A8EB00 + 948); /*0x4f6bc0*/
  v3 = *(unsigned short *)&(unsigned int *)((char *)&stru_A8EB00 + 950); /*0x4f6bcf*/
  if ( IDA_LOWORD(a1->killedBuildingsOfHouses[15]) == *(unsigned short *)&(unsigned int *)((char *)&stru_A8EB00 + 948) /*0x4f6be6*/
    && IDA_HIWORD(a1->killedBuildingsOfHouses[15]) == *(unsigned short *)&(unsigned int *)((char *)&stru_A8EB00 + 950) )
  {
        v3 = *(unsigned int *)(a1 + 21612);
  }
  else
  {
        v3 = *(unsigned int *)(a1 + 21616);
  }
  *(unsigned int *)v14 = v4; /*0x4f6bfd*/
  if ( v4 == *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 948) ) /*0x4f6c01*/
  {
    v5 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1044); /*0x4f6c10*/
    v17 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1048); /*0x4f6c15*/
    v18 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1052); /*0x4f6c1f*/
  }
  else
  {
    v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v14); /*0x4f6c2f*/
    v7 = (int *)(*(int (**)(void *, unsigned char *))(*(unsigned int *)v6 + 72))(v6, v19); /*0x4f6c40*/
    v3 = *(unsigned short *)&(unsigned int *)((char *)&stru_A8EB00 + 950); /*0x4f6c42*/
    v5 = *v7; /*0x4f6c49*/
    v17 = v7[1]; /*0x4f6c4e*/
    v2 = *(unsigned short *)&(unsigned int *)((char *)&stru_A8EB00 + 948); /*0x4f6c52*/
    v18 = v7[2]; /*0x4f6c5b*/
  }
  v8 = IDA_LOWORD(a1->killedBuildingsOfHouses[15]) == v2; /*0x4f6c6b*/
  v14[0] = v5 / 256; /*0x4f6c72*/
  if ( v8 && IDA_HIWORD(a1->killedBuildingsOfHouses[15]) == v3 ) /*0x4f6c80*/
    v9 = a1->killedBuildingsOfHouses[14]; /*0x4f6c82*/
  else
    v9 = a1->killedBuildingsOfHouses[15]; /*0x4f6c8a*/
  *(unsigned int *)v15 = v9; /*0x4f6c97*/
  if ( v9 == IDA___PAIR32__(v3, v2) ) /*0x4f6c9b*/
  {
    v16 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1044); /*0x4f6caf*/
    v10 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1048); /*0x4f6cb3*/
  }
  else
  {
    v11 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v15); /*0x4f6cc4*/
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
  int16_t v13[2]; // [esp+8h] [ebp-20h] BYREF
  int16_t v14[2]; // [esp+Ch] [ebp-1Ch] BYREF
  int v15; // [esp+10h] [ebp-18h]
  int v16; // [esp+14h] [ebp-14h]
  int v17; // [esp+18h] [ebp-10h]
  unsigned char v18[12]; // [esp+1Ch] [ebp-Ch] BYREF
  unsigned int *v19; // [esp+30h] [ebp+8h]

  v2 = dword_A8EF98; /*0x4f6d1f*/
  if ( a2[5403] == dword_A8EF98 ) /*0x4f6d2d*/
    v3 = a2[5402]; /*0x4f6d38*/
  else
    v3 = a2[5403]; /*0x4f6d40*/
  *(unsigned int *)v13 = v3; /*0x4f6d4d*/
  if ( v3 == dword_A8EF98 ) /*0x4f6d51*/
  {
    v4 = dword_A8EFF8; /*0x4f6d60*/
    v16 = dword_A8EFFC; /*0x4f6d65*/
    v17 = dword_A8F000; /*0x4f6d6f*/
  }
  else
  {
    v5 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v13); /*0x4f6d7f*/
    v6 = (int *)(*(int (**)(void *, unsigned char *))(*(unsigned int *)v5 + 72))(v5, v18); /*0x4f6d90*/
    v4 = *v6; /*0x4f6d99*/
    v16 = v6[1]; /*0x4f6d9e*/
    v17 = v6[2]; /*0x4f6dab*/
    v2 = dword_A8EF98; /*0x4f6dab*/
  }
  v7 = *((unsigned short *)a2 + 10806) == (uint16_t)v2; /*0x4f6dbb*/
  v13[0] = v4 / 256; /*0x4f6dc2*/
  if ( v7 && *((unsigned short *)a2 + 10807) == IDA_HIWORD(v2) ) /*0x4f6dd0*/
    v8 = a2[5402]; /*0x4f6dd2*/
  else
    v8 = a2[5403]; /*0x4f6dda*/
  *(unsigned int *)v14 = v8; /*0x4f6de7*/
  if ( v8 == v2 ) /*0x4f6deb*/
  {
    v15 = dword_A8EFF8; /*0x4f6dff*/
    v9 = dword_A8EFFC; /*0x4f6e03*/
  }
  else
  {
    v10 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v14); /*0x4f6e14*/
    v11 = (int *)(*(int (**)(void *, unsigned char *))(*(unsigned int *)v10 + 72))(v10, v18); /*0x4f6e25*/
    v15 = *v11; /*0x4f6e29*/
    v9 = v11[1]; /*0x4f6e2d*/
  }
  v13[1] = v9 / 256; /*0x4f6e44*/
  *v19 = *(unsigned int *)v13; /*0x4f6e52*/
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

  v1 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 164) - 1; /*0x501409*/
  if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 164) - 1 < 0 ) /*0x50140e*/
  {
        *(unsigned char *)(a1 + 549) = 1;
    return 0; /*0x50152f*/
  }
  else
  {
    do /*0x50150f*/
    {
      v2 = *(BuildingClass **)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 152) + 4 * v1); /*0x501423*/
      if ( (HouseClass *)((char *)a1 - 36) == v2->inLimbo && v2->inLimbo && !v2->inLimbo ) /*0x50143d*/
      {
        if ( v2->forceShielded /*0x50146d*/
          && *(unsigned char *)((*((int (**)(unsigned int))v2->TechnoClass + 33))(*(unsigned int *)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 152)
                                                                                         + 4 * v1))
                      + 562)
          && !a1->__pad_13C[140] )
        {
          v3 = (*((int (**)(BuildingClass *))v2->TechnoClass + 33))(v2); /*0x50147b*/
          vtable0 = v2->TechnoClass; /*0x501487*/
          v7 = *(unsigned int *)(v3 + 160); /*0x501489*/
          (*((void (**)(BuildingClass *, int *, unsigned int, unsigned int, unsigned int, int, int, unsigned int))vtable0 + 91))( /*0x5014aa*/
            v2,
            &v7,
            0,
            *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
            0,
            1,
            1,
            0);
        }
        else if ( v2 ) /*0x5014b4*/
        {
          if ( (v2->? & 4) != 0 ) /*0x5014c3*/
          {
            v5 = (int *)v2->DamageFireAnims[3]; /*0x5014c5*/
            if ( v5 ) /*0x5014cd*/
              TeamClass::LiberateMember_Start(v5, (int)v2, 0xFFFFFFFF, 0); /*0x5014d4*/
            (*((void (**)(BuildingClass *, int, unsigned int))v2->TechnoClass + 122))(v2, 15, 0); /*0x5014e1*/
          }
          else if ( (*((int (**)(BuildingClass *))v2->TechnoClass + 11))(v2) == 6 /*0x501501*/
                 && (*((int (**)(BuildingClass *))v2->TechnoClass + 258))(v2) > 0 )
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
}
// 0x50F520
namespace gamemd {
AbstractClass * * VectorClass_ptr_BuildChoiceClass_int_ouseClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x50f52c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x50f53c*/
      v4 = a3; /*0x50f552*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x50f54e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x50f55a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x50f571*/
          m_8 = a2; /*0x50f573*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x50f57e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x50f596*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x50f5b8*/
    }
    else
    {
      return 0; /*0x50f55f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x50f5c8*/
  }
}
}
// 0x50F660
namespace gamemd {
AbstractClass * * VectorClass_ptr_BuildChoiceClass_int_ouseClass::SetCapacity_6(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  void *Capacity; // ecx
  int i; // eax
  void *v7; // eax

  if ( a2 ) /*0x50f66c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x50f678*/
      v4 = a3; /*0x50f68e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x50f68a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x50f696*/
      return 0; /*0x50f70a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < (int)Capacity ) /*0x50f6a4*/
        Capacity = (void *)a2; /*0x50f6a6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x50f6b1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(this->Items); /*0x50f6c9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x50f6fe*/
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
        *((unsigned char *)this + 12) = 0;
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
        *((unsigned char *)this + 12) = 1;
    if ( v15 ) /*0x62898c*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v10 = (CCINIClass *)*((unsigned int *)this + 2);
        if ( aP1 < m_8 ) /*0x6289a6*/
          m_8 = aP1; /*0x6289a8*/
        if ( m_8 > 0 ) /*0x6289ac*/
        {
          v11 = 0; /*0x6289ae*/
          v12 = v15; /*0x6289b0*/
          v16 = m_8; /*0x6289b2*/
          do /*0x6289e4*/
          {
                        v13 = v11 + *((unsigned int *)this + 1);
            String::CopyChecked(v12, (const char *)v13); /*0x6289be*/
            *((unsigned int *)v12 + 64) = *(unsigned int *)(v13 + 256); /*0x6289cd*/
            v11 += 260; /*0x6289d3*/
            v12 += 260; /*0x6289d9*/
            --v16; /*0x6289e0*/
          }
          while ( v16 ); /*0x6289e4*/
          v3 = aP1; /*0x6289e6*/
        }
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x6289f5*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v15;
            *((unsigned int *)this + 2) = v3;
            *((unsigned char *)this + 13) = a2 == 0;
      return 1; /*0x628a1f*/
    }
    else
    {
      return 0; /*0x628991*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x628a33*/
  }
}
}
// 0x491210
namespace gamemd {
void * VectorClass_ptr_ConvertClass::Constructor_ConvertClass(char a2)
{
  void *v3; // ecx
  int v4; // eax

    *Block = &vt_ConvertClass;
  COMClass::RegisterAll(); /*0x49121a*/
  RA2_OPDEL(*((void **)this + 92)); /*0x491226*/
    v3 = *(Block + 94);
    *(Block + 92) = 0;
  RA2_OPDEL(v3); /*0x49123c*/
    *(Block + 94) = 0;
  v4 = (*(int (**)(int *, VectorClass_ptr_ConvertClass **))(dword_89ECF8 + 16))(&dword_89ECF8, &this); /*0x491261*/
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
    RA2_OPDEL(); /*0x49129e*/
  return (void **)this; /*0x4912a8*/
}
}
// 0x4E1960
namespace gamemd {
void VectorClass_ptr_ConvertClass::MarkDirty()
{
  int result; // eax

    *((unsigned int *)this + 112) = 1;
  return result; /*0x4e1964*/
}
}
// 0x63E090
namespace gamemd {
AbstractClass * * VectorClass_ptr_PlanningBranchClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x63e09c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x63e0ac*/
      v4 = a3; /*0x63e0c2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x63e0be*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x63e0ca*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x63e0e1*/
          m_8 = a2; /*0x63e0e3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x63e0ee*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x63e106*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x63e128*/
    }
    else
    {
      return 0; /*0x63e0cf*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x63e138*/
  }
}
}
// 0x76B8C0
namespace gamemd {
int VectorClass_rc_ptr_WDTTerritory::Release(int a2, unsigned int * a3)
{
  int m_8; // ebp
  int *v5; // eax
  ComPtr *v6; // esi
  int v7; // ebx
  ComPtr *v8; // ebx
  int v9; // ebx
  int i; // esi
  void (***v12)(unsigned int, int); // ecx
  ComPtr *v13; // [esp+10h] [ebp-4h]

  m_8 = a2; /*0x76b8c3*/
  if ( !a2 ) /*0x76b8cd*/
  {
        (*(void (**)(unsigned char *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x76b9d3*/
  }
    *((unsigned int *)this + 48) = 0;
  if ( a3 ) /*0x76b8dd*/
  {
    *a3 = a2; /*0x76b923*/
    v6 = (ComPtr *)(a3 + 1); /*0x76b925*/
    if ( a2 - 1 >= 0 ) /*0x76b931*/
    {
      v9 = a2; /*0x76b933*/
      do /*0x76b947*/
      {
        ComPtr::Constructor(v6); /*0x76b938*/
        *(unsigned int *)v6->__pad_0 = (void*)&rc_ptr_WDTTerritory_vftable; /*0x76b93d*/
        v6 = (ComPtr *)((char *)v6 + 8); /*0x76b943*/
        --v9; /*0x76b946*/
      }
      while ( v9 ); /*0x76b947*/
      v6 = (ComPtr *)(a3 + 1); /*0x76b949*/
    }
  }
  else
  {
    v5 = (int *)RA2_OPNEW(8 * a2 + 4); /*0x76b8e7*/
    if ( !v5 ) /*0x76b8f1*/
    {
      v8 = 0; /*0x76b91f*/
      goto LABEL_14; /*0x76b921*/
    }
    *v5 = a2; /*0x76b8f3*/
    v6 = (ComPtr *)(v5 + 1); /*0x76b8f5*/
    v13 = (ComPtr *)(v5 + 1); /*0x76b8fb*/
    if ( a2 - 1 >= 0 ) /*0x76b901*/
    {
      v7 = a2; /*0x76b903*/
      do /*0x76b917*/
      {
        ComPtr::Constructor(v6); /*0x76b908*/
        *(unsigned int *)v6->__pad_0 = (void*)&rc_ptr_WDTTerritory_vftable; /*0x76b90d*/
        v6 = (ComPtr *)((char *)v6 + 8); /*0x76b913*/
        --v7; /*0x76b916*/
      }
      while ( v7 ); /*0x76b917*/
      v6 = v13; /*0x76b919*/
    }
  }
  v8 = v6; /*0x76b94d*/
  LABEL_14:
    *((unsigned int *)this + 48) = 1;
  if ( !v8 ) /*0x76b955*/
    return 0; /*0x76b95a*/
    if ( *((unsigned int *)this + 1) )
  {
        if ( a2 >= *((unsigned int *)this + 2) )
            v3 = *((unsigned int *)this + 2);
    for ( i = 0; i < m_8; ++i ) /*0x76b975*/
            ComPtr::Set(&v8[2 * i], *(unsigned int *)(*((unsigned int *)this + 1) + 8 * i + 4));
        if ( *((unsigned int *)this + 52) )
    {
            v12 = (void (***)(unsigned int, int))*((unsigned int *)this + 1);
      if ( v12 ) /*0x76b998*/
        (**v12)(v12, 3); /*0x76b99e*/
            *((unsigned int *)this + 1) = 0;
    }
    m_8 = a2; /*0x76b9a7*/
  }
    *((unsigned int *)this + 1) = v8;
    *((unsigned int *)this + 2) = v3;
    *((unsigned int *)this + 52) = a3 == 0;
  return 1; /*0x76b957*/
}
}
// 0x5D8470
namespace gamemd {
AbstractClass * * VectorClass_Scenario::ResizeAndCopy(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d847c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5d8488*/
      v4 = a3; /*0x5d849e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5d849a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x5d84a6*/
      return 0; /*0x5d851a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < v5 ) /*0x5d84b4*/
        v5 = a2; /*0x5d84b6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x5d84c1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->ptr_4); /*0x5d84d9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x5d850e*/
}
}
// 0x5D8730
namespace gamemd {
AbstractClass * * VectorClass_Scenario2::ResizeAndCopy(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d873c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5d8748*/
      v4 = a3; /*0x5d875e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5d875a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x5d8766*/
      return 0; /*0x5d87da*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < v5 ) /*0x5d8774*/
        v5 = a2; /*0x5d8776*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x5d8781*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->ptr_4); /*0x5d8799*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x5d87ce*/
}
}
// 0x5D8590
namespace gamemd {
AbstractClass * * VectorClass_Scenario3::ResizeAndCopy(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x5d859c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5d85ac*/
      v4 = a3; /*0x5d85c2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5d85be*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x5d85ca*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < v6 ) /*0x5d85e1*/
          v6 = a2; /*0x5d85e3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x5d85ee*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->ptr_4); /*0x5d8606*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x5d8628*/
    }
    else
    {
      return 0; /*0x5d85cf*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x5d8638*/
  }
}
}
// 0x4E9840
namespace gamemd {
AbstractClass * * VectorClass_SuperPtr::ResizeAndCopy(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4e984c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4e9858*/
      v4 = a3; /*0x4e986e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4e986a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4e9876*/
      return 0; /*0x4e98ea*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4e9884*/
        m_8 = a2; /*0x4e9886*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4e9891*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->ptr_4); /*0x4e98a9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4e98de*/
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
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    goto LABEL_26; /*0x6dc94a*/
  }
  v5 = a2; /*0x6dc863*/
    *((unsigned char *)this + 12) = 0;
  if ( a2 ) /*0x6dc86d*/
  {
    if ( aP1 - 1 >= 0 ) /*0x6dc8ba*/
    {
      v8 = aP1; /*0x6dc8bc*/
      do /*0x6dc8d6*/
      {
        Rect::Set((Rect *)v5, 0, 0, 0, 0); /*0x6dc8c9*/
        v5[16] = 0; /*0x6dc8ce*/
        v5 += 20; /*0x6dc8d2*/
        --v8; /*0x6dc8d5*/
      }
      while ( v8 ); /*0x6dc8d6*/
      v5 = a2; /*0x6dc8d8*/
    }
    goto LABEL_13; /*0x6dc8d8*/
  }
  v5 = (char *)RA2_OPNEW(20 * aP1); /*0x6dc87b*/
  v15 = v5; /*0x6dc882*/
  if ( v5 ) /*0x6dc886*/
  {
    if ( aP1 - 1 >= 0 ) /*0x6dc88d*/
    {
      v6 = aP1; /*0x6dc88f*/
      do /*0x6dc8a9*/
      {
        Rect::Set((Rect *)v5, 0, 0, 0, 0); /*0x6dc89c*/
        v5[16] = 0; /*0x6dc8a1*/
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
    *((unsigned char *)this + 12) = 1;
  if ( !v7 ) /*0x6dc8e4*/
    return 0; /*0x6dc967*/
    if ( *((unsigned int *)this + 1) )
  {
        v9 = (CCINIClass *)*((unsigned int *)this + 2);
    if ( aP1 < (int)Capacity ) /*0x6dc8f2*/
      Capacity = (char *)aP1; /*0x6dc8f4*/
    if ( (int)Capacity > 0 ) /*0x6dc8f8*/
    {
      v10 = 0; /*0x6dc8fa*/
      do /*0x6dc90f*/
      {
        v11 = &v7[v10]; /*0x6dc8ff*/
                v12 = (const void *)(v10 + *((unsigned int *)this + 1));
        v10 += 20; /*0x6dc909*/
        --Capacity; /*0x6dc90c*/
        qmemcpy(v11, v12, 0x14u); /*0x6dc90d*/
      }
      while ( Capacity ); /*0x6dc90f*/
      v3 = (void *)aP1; /*0x6dc911*/
    }
        if ( *((unsigned char *)this + 13) )
    {
      RA2_OPDEL(this->Items); /*0x6dc920*/
            *((unsigned int *)this + 1) = 0;
    }
  }
    *((unsigned int *)this + 1) = v7;
    *((unsigned int *)this + 2) = v3;
    *((unsigned char *)this + 13) = a2 == 0;
  LABEL_26:
    v13 = *((unsigned int *)this + 2);
    if ( v13 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v13;
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
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x6b4597*/
  }
  v5 = a3; /*0x6b44b4*/
    *((unsigned char *)this + 12) = 0;
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
    v5 = (unsigned int *)RA2_OPNEW(12 * a2); /*0x6b44c7*/
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
    *((unsigned char *)this + 12) = 1;
  if ( !v8 ) /*0x6b4519*/
    return 0; /*0x6b451e*/
    if ( *((unsigned int *)this + 1) )
  {
        v11 = *((unsigned int *)this + 2);
    if ( a2 < m_8 ) /*0x6b452e*/
      m_8 = a2; /*0x6b4530*/
    if ( m_8 > 0 ) /*0x6b4534*/
    {
      v12 = 0; /*0x6b4536*/
      do /*0x6b4554*/
      {
        v13 = &v8[v12]; /*0x6b453b*/
                v14 = (unsigned int *)(v12 * 4 + *((unsigned int *)this + 1));
        v12 += 3; /*0x6b4540*/
        --m_8; /*0x6b4543*/
        *v13 = *v14; /*0x6b4546*/
        v13[1] = v14[1]; /*0x6b454b*/
        v13[2] = v14[2]; /*0x6b4551*/
      }
      while ( m_8 ); /*0x6b4554*/
      v3 = a2; /*0x6b4556*/
    }
        if ( *((unsigned char *)this + 13) )
    {
      RA2_OPDEL(*(void **)&this->Items); /*0x6b4565*/
            *((unsigned int *)this + 1) = 0;
    }
  }
    *((unsigned int *)this + 1) = v8;
    *((unsigned int *)this + 2) = v3;
    *((unsigned char *)this + 13) = a3 == 0;
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
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    goto LABEL_26; /*0x6b4731*/
  }
  v5 = a3; /*0x6b4664*/
    *((unsigned char *)this + 12) = 0;
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
  v5 = (unsigned int *)RA2_OPNEW(12 * a2); /*0x6b4677*/
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
    *((unsigned char *)this + 12) = 1;
  if ( !v8 ) /*0x6b46c9*/
    return 0; /*0x6b474d*/
    if ( *((unsigned int *)this + 1) )
  {
        v10 = *((unsigned int *)this + 2);
    if ( a2 < m_8 ) /*0x6b46d5*/
      m_8 = a2; /*0x6b46d7*/
    if ( m_8 > 0 ) /*0x6b46db*/
    {
      v11 = 0; /*0x6b46dd*/
      do /*0x6b46fb*/
      {
        v12 = &v8[v11]; /*0x6b46e2*/
                v13 = (unsigned int *)(v11 * 4 + *((unsigned int *)this + 1));
        v11 += 3; /*0x6b46e7*/
        --m_8; /*0x6b46ea*/
        *v12 = *v13; /*0x6b46ed*/
        v12[1] = v13[1]; /*0x6b46f2*/
        v12[2] = v13[2]; /*0x6b46f8*/
      }
      while ( m_8 ); /*0x6b46fb*/
      v3 = a2; /*0x6b46fd*/
    }
        if ( *((unsigned char *)this + 13) )
    {
      RA2_OPDEL(*(void **)&this->Items); /*0x6b470c*/
            *((unsigned int *)this + 1) = 0;
    }
  }
    *((unsigned int *)this + 1) = v8;
    *((unsigned int *)this + 2) = v3;
    *((unsigned char *)this + 13) = a3 == 0;
  LABEL_26:
    v14 = *((unsigned int *)this + 2);
    if ( v14 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v14;
  return 1; /*0x6b4741*/
}
}
// 0x40B120
int VectorClass_flat::Clear(int v4, int a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx

    v3 = *((unsigned int *)this + 4);
  v4 = *(unsigned int *)(v3 + 8 * a3); /*0x40b127*/
  v5 = v3 + 8 * a3; /*0x40b12a*/
  *(unsigned int *)v4 = v4; /*0x40b131*/
  *(unsigned char *)(v4 + 4) = *(unsigned char *)(v5 + 4); /*0x40b136*/
  return v4; /*0x40b139*/
}
// 0x40B140
char VectorClass_flat::AddRef(int v4)
{
  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( v2 == *(unsigned int *)(v4 + 8) ) /*0x40b14d*/
  {
    v3 = 0; /*0x40b14f*/
    if ( v2 <= 0 ) /*0x40b153*/
      return 1; /*0x40b173*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(v4 + 4) - (unsigned int)v4; /*0x40b15b*/
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
// 0x40B180
char VectorClass_flat::Release(int a2, char * a3)
{
  int v3; // ebp
  char *v5; // esi
  char *v6; // eax
  char *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  unsigned int *v15; // ebx

  v3 = a2; /*0x40b182*/
  if ( a2 ) /*0x40b18e*/
  {
    v5 = a3; /*0x40b194*/
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x40b19d*/
    {
      v9 = a3; /*0x40b1d3*/
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
      v6 = (char *)operator new(8 * a2); /*0x40b1a7*/
      if ( v6 ) /*0x40b1b1*/
      {
        v7 = v6; /*0x40b1b6*/
        if ( a2 - 1 >= 0 ) /*0x40b1ba*/
        {
          a2 = a2; /*0x40b1bc*/
          do /*0x40b1c6*/
          {
            *(unsigned int *)v7 = 0; /*0x40b1bd*/
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
        *((unsigned char *)this + 12) = 1;
    if ( v5 ) /*0x40b1eb*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v12 = *((unsigned int *)this + 2);
        if ( a2 < v12 ) /*0x40b200*/
          v12 = a2; /*0x40b202*/
        v13 = 0; /*0x40b204*/
        if ( v12 > 0 ) /*0x40b208*/
        {
          do /*0x40b227*/
          {
            v14 = 8 * v13; /*0x40b20d*/
                        v15 = (unsigned int *)(*((unsigned int *)this + 1) + 8 * v13++);
            *(unsigned int *)&v5[v14] = *v15; /*0x40b21d*/
            *(unsigned int *)&v5[v14 + 4] = v15[1]; /*0x40b223*/
          }
          while ( v13 < v12 ); /*0x40b227*/
          a2 = a2; /*0x40b229*/
        }
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(this->Items); /*0x40b238*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v5;
            *((unsigned int *)this + 2) = v3;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x40b25a*/
    }
    else
    {
      return 0; /*0x40b1f0*/
    }
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x40b26a*/
  }
}
// 0x40B270
void VectorClass_flat::Cleanup5()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(this->Items); /*0x40b283*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
// 0x40B2A0
int  VectorClass_flat::GetSize()
{
  int result; // eax
  int v3; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x40b2a8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x40b2b1*/
  if ( v3 <= 0 ) /*0x40b2b5*/
    return -1; /*0x40b2cc*/
    for ( i = *(unsigned int **)((char *)this + 16); *i != *a2; i += 2 )
  {
    if ( ++result >= v3 ) /*0x40b2ca*/
      return -1; /*0x40b2ca*/
  }
  return result; /*0x40b2aa*/
}
// 0x40B2E0
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 3;
  else
    return 0; /*0x40b2e7*/
}
// 0x40B300
VectorClass_flat *  VectorClass_flat::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x40b303*/
  *this = (void*)&VectorClass_SubzoneConnectionStruct_vftable; /*0x40b306*/
  if ( v3 && *((unsigned char *)this + 13) ) /*0x40b310*/
  {
    RA2_OPDEL(v3); /*0x40b318*/
    *(this + 1) = 0; /*0x40b320*/
  }
  *((unsigned char *)this + 13) = 0; /*0x40b32b*/
  *(this + 2) = 0; /*0x40b331*/
  if ( (a2 & 1) != 0 ) /*0x40b338*/
    RA2_OPDEL(this); /*0x40b33b*/
  return this; /*0x40b345*/
}
// 0x40B690
namespace gamemd {
int VectorClass_ptr_BombClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x40B700
namespace gamemd {
char VectorClass_ptr_BombClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x40b70d*/
  {
    v3 = 0; /*0x40b70f*/
    if ( m_8 <= 0 ) /*0x40b713*/
      return 1; /*0x40b733*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x40b71b*/
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
void VectorClass_ptr_BombClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x40b803*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x40B820
namespace gamemd {
int VectorClass_ptr_BombClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x40b828*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x40b831*/
  if ( m_8 <= 0 ) /*0x40b835*/
    return -1; /*0x40b84c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x40b83b*/
  {
    if ( ++result >= m_8 ) /*0x40b84a*/
      return -1; /*0x40b84a*/
  }
  return result; /*0x40b82a*/
}
} // namespace gamemd

// 0x40B860
namespace gamemd {
unsigned int VectorClass_ptr_BombClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x40b867*/
}
} // namespace gamemd

// 0x40BA50
namespace gamemd {
void VectorClass_Techno::ddtor()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x40ba63*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x40BA80
namespace gamemd {
int VectorClass_Techno::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x40ba88*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x40ba91*/
  if ( m_8 <= 0 ) /*0x40ba95*/
    return -1; /*0x40baac*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x40ba9b*/
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
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x40bac7*/
}
} // namespace gamemd

// 0x40BBC0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_BombClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_BombClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x40bbd8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x40bbf8*/
    RA2_OPDEL(Block); /*0x40bbfb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x40BC60
namespace gamemd {
VectorClass_flat * VectorClass_BombClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_TechnoClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x40bc78*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x40bc98*/
    RA2_OPDEL(Block); /*0x40bc9b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x40BEA0
namespace gamemd {
int VectorClass_cptr_CommandClass::Capacity(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
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

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x40bebd*/
  {
    v3 = 0; /*0x40bebf*/
    if ( m_8 <= 0 ) /*0x40bec3*/
      return 1; /*0x40bee3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
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
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x40bf0c*/
      v4 = a3; /*0x40bf22*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x40bf1e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x40bf2a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x40bf41*/
          m_8 = a2; /*0x40bf43*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x40bf4e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x40bf66*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x40bf88*/
    }
    else
    {
      return 0; /*0x40bf2f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x40bf98*/
  }
}
} // namespace gamemd

// 0x40BFA0
namespace gamemd {
void VectorClass_cptr_CommandClass::SetAt()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x40bfb3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x40BFD0
namespace gamemd {
int VectorClass_cptr_CommandClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x40bfd8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x40bfe1*/
  if ( m_8 <= 0 ) /*0x40bfe5*/
    return -1; /*0x40bffc*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x40bfeb*/
  {
    if ( ++result >= m_8 ) /*0x40bffa*/
      return -1; /*0x40bffa*/
  }
  return result; /*0x40bfda*/
}
} // namespace gamemd

// 0x40C010
namespace gamemd {
unsigned int VectorClass_cptr_CommandClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x40c017*/
}
} // namespace gamemd

// 0x40C230
namespace gamemd {
void VectorClass_ptr_LightConvertClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x40c236*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x40c246*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x40C280
namespace gamemd {
int VectorClass_ptr_LightConvertClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x40C290
namespace gamemd {
char VectorClass_ptr_LightConvertClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x40c29d*/
  {
    v3 = 0; /*0x40c29f*/
    if ( m_8 <= 0 ) /*0x40c2a3*/
      return 1; /*0x40c2c3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x40c2ab*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x40c2b4*/
    {
      ++v3; /*0x40c2b6*/
      ++v4; /*0x40c2b7*/
      if ( v3 >= m_8 ) /*0x40c2bc*/
        return 1; /*0x40c2bc*/
    }
  }
  return 0; /*0x40c2be*/
}
} // namespace gamemd

// 0x40C2D0
namespace gamemd {
char VectorClass_ptr_LightConvertClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x40c2dc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x40c2ec*/
      v4 = a3; /*0x40c302*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x40c2fe*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x40c30a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x40c321*/
          m_8 = a2; /*0x40c323*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x40c32e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x40c346*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x40c368*/
    }
    else
    {
      return 0; /*0x40c30f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x40c378*/
  }
}
} // namespace gamemd

// 0x40C380
namespace gamemd {
void VectorClass_ptr_LightConvertClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x40c393*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x40C3B0
namespace gamemd {
int VectorClass_ptr_LightConvertClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x40c3b8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x40c3c1*/
  if ( m_8 <= 0 ) /*0x40c3c5*/
    return -1; /*0x40c3dc*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x40c3cb*/
  {
    if ( ++result >= m_8 ) /*0x40c3da*/
      return -1; /*0x40c3da*/
  }
  return result; /*0x40c3ba*/
}
} // namespace gamemd

// 0x40C3F0
namespace gamemd {
unsigned int VectorClass_ptr_LightConvertClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x40c3f7*/
}
} // namespace gamemd

// 0x40C4C0
namespace gamemd {
int VectorClass_ptr_LightConvertClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x40c4c3*/
  if ( m_10 <= 0 ) /*0x40c4c8*/
    return -1; /*0x40c4df*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x40c4dd*/
      return -1; /*0x40c4dd*/
  }
  return result; /*0x40c4e2*/
}
} // namespace gamemd

// 0x40C4F0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_LightConvertClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_LightConvertClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x40c508*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x40c528*/
    RA2_OPDEL(Block); /*0x40c52b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x40C540
namespace gamemd {
DynamicVector * VectorClass_ptr_LightConvertClass::Constructor_VectorClass_LightConvertClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_LightConvertClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x40c558*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x40c578*/
    RA2_OPDEL(); /*0x40c57b*/
  return this; /*0x40c585*/
}
} // namespace gamemd

// 0x40C820
namespace gamemd {
void VectorClass_ptr_IsometricTileClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x40c826*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x40c836*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x40C850
namespace gamemd {
unsigned int VectorClass_ptr_IsometricTileClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x40c857*/
}
} // namespace gamemd

// 0x40C870
namespace gamemd {
int VectorClass_ptr_IsometricTileClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x40C880
namespace gamemd {
char VectorClass_ptr_IsometricTileClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x40c88d*/
  {
    v3 = 0; /*0x40c88f*/
    if ( m_8 <= 0 ) /*0x40c893*/
      return 1; /*0x40c8b3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x40c89b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x40c8a4*/
    {
      ++v3; /*0x40c8a6*/
      ++v4; /*0x40c8a7*/
      if ( v3 >= m_8 ) /*0x40c8ac*/
        return 1; /*0x40c8ac*/
    }
  }
  return 0; /*0x40c8ae*/
}
} // namespace gamemd

// 0x40C8C0
namespace gamemd {
char VectorClass_ptr_IsometricTileClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x40c8cc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x40c8dc*/
      v4 = a3; /*0x40c8f2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x40c8ee*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x40c8fa*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x40c911*/
          m_8 = a2; /*0x40c913*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x40c91e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x40c936*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x40c958*/
    }
    else
    {
      return 0; /*0x40c8ff*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x40c968*/
  }
}
} // namespace gamemd

// 0x40C970
namespace gamemd {
void VectorClass_ptr_IsometricTileClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x40c983*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x40C9A0
namespace gamemd {
int VectorClass_ptr_IsometricTileClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x40c9a8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x40c9b1*/
  if ( m_8 <= 0 ) /*0x40c9b5*/
    return -1; /*0x40c9cc*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x40c9bb*/
  {
    if ( ++result >= m_8 ) /*0x40c9ca*/
      return -1; /*0x40c9ca*/
  }
  return result; /*0x40c9aa*/
}
} // namespace gamemd

// 0x40C9E0
namespace gamemd {
unsigned int VectorClass_ptr_IsometricTileClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x40c9e7*/
}
} // namespace gamemd

// 0x40CA00
namespace gamemd {
char VectorClass_ptr_IsometricTileClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x40ca0c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x40ca18*/
      v4 = a3; /*0x40ca2e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x40ca2a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x40ca36*/
      return 0; /*0x40caaa*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x40ca44*/
        m_8 = a2; /*0x40ca46*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x40ca51*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x40ca69*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x40ca9e*/
}
} // namespace gamemd

// 0x40CAB0
namespace gamemd {
int VectorClass_ptr_IsometricTileClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x40cab3*/
  if ( m_10 <= 0 ) /*0x40cab8*/
    return -1; /*0x40cacf*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x40cacd*/
      return -1; /*0x40cacd*/
  }
  return result; /*0x40cad2*/
}
} // namespace gamemd

// 0x40CAE0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_IsometricTileClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_IsometricTileClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x40caf8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x40cb18*/
    RA2_OPDEL(Block); /*0x40cb1b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x40CB30
namespace gamemd {
DynamicVector * VectorClass_ptr_IsometricTileClass::Constructor_VectorClass_IsometricTileClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_IsometricTileClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x40cb48*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x40cb68*/
    RA2_OPDEL(); /*0x40cb6b*/
  return this; /*0x40cb75*/
}
} // namespace gamemd

// 0x40CC00
namespace gamemd {
int VectorClass_ptr_IsometricTileClass::GetItem()
{
  return (*(int (**)(LogicClass *))(this->items[0] + 12))(this);
}
} // namespace gamemd

// 0x40CC20
namespace gamemd {
LogicClass * VectorClass_ptr_IsometricTileClass::Constructor_VectorClass_ObjectClass___(char a2)
{
  void *count; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_ObjectClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(count); /*0x40cc38*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x40cc58*/
    RA2_OPDEL(); /*0x40cc5b*/
    return (LogicClass *)Block;
}
} // namespace gamemd

// 0x40CC70
namespace gamemd {
void VectorClass_ptr_IsometricTileClass::TryFreeAndClear()
{
  void *v2; // eax

  v2 = *(unsigned int *)&this->Items; /*0x40cc76*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x40cc86*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x40CCA0
namespace gamemd {
unsigned int VectorClass_ptr_IsometricTileClass::GetPtrOffset(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x40cca7*/
}
} // namespace gamemd

// 0x40CCC0
int VectorClass_flat::GetAt(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
// 0x40CF00
namespace gamemd {
int VectorClass_ptr_IsometricTileClass::FindValue(unsigned int * a2)
{
  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x40cf03*/
  if ( v2 <= 0 ) /*0x40cf08*/
    return -1; /*0x40cf1f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= v2 ) /*0x40cf1d*/
      return -1; /*0x40cf1d*/
  }
  return result; /*0x40cf22*/
}
} // namespace gamemd

// 0x40D590
namespace gamemd {
int VectorClass_ptr_MixFileClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x40D5A0
namespace gamemd {
char VectorClass_ptr_MixFileClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x40d5ad*/
  {
    v3 = 0; /*0x40d5af*/
    if ( m_8 <= 0 ) /*0x40d5b3*/
      return 1; /*0x40d5d3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x40d5bb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x40d5c4*/
    {
      ++v3; /*0x40d5c6*/
      ++v4; /*0x40d5c7*/
      if ( v3 >= m_8 ) /*0x40d5cc*/
        return 1; /*0x40d5cc*/
    }
  }
  return 0; /*0x40d5ce*/
}
} // namespace gamemd

// 0x40D5E0
namespace gamemd {
char VectorClass_ptr_MixFileClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x40d5ec*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x40d5fc*/
      v4 = a3; /*0x40d612*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x40d60e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x40d61a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x40d631*/
          m_8 = a2; /*0x40d633*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x40d63e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x40d656*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x40d678*/
    }
    else
    {
      return 0; /*0x40d61f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x40d688*/
  }
}
} // namespace gamemd

// 0x40D690
namespace gamemd {
void VectorClass_ptr_MixFileClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x40d6a3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x40D6C0
namespace gamemd {
int VectorClass_ptr_MixFileClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x40d6c8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x40d6d1*/
  if ( m_8 <= 0 ) /*0x40d6d5*/
    return -1; /*0x40d6ec*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x40d6db*/
  {
    if ( ++result >= m_8 ) /*0x40d6ea*/
      return -1; /*0x40d6ea*/
  }
  return result; /*0x40d6ca*/
}
} // namespace gamemd

// 0x40D700
namespace gamemd {
unsigned int VectorClass_ptr_MixFileClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x40d707*/
}
} // namespace gamemd

// 0x40D800
namespace gamemd {
VectorClass_flat * VectorClass_ptr_MixFileClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_MixFileClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x40d818*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x40d838*/
    RA2_OPDEL(Block); /*0x40d83b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x40E7F0
namespace gamemd {
void VectorClass_ptr_ScriptClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x40e7f6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x40e806*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x40E820
namespace gamemd {
unsigned int VectorClass_ptr_ScriptClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x40e827*/
}
} // namespace gamemd

// 0x40E840
namespace gamemd {
int VectorClass_ptr_ScriptClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x40E850
namespace gamemd {
char VectorClass_ptr_ScriptClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x40e85d*/
  {
    v3 = 0; /*0x40e85f*/
    if ( m_8 <= 0 ) /*0x40e863*/
      return 1; /*0x40e883*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
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
char VectorClass_ptr_ScriptClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x40e89c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x40e8ac*/
      v4 = a3; /*0x40e8c2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x40e8be*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x40e8ca*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x40e8e1*/
          m_8 = a2; /*0x40e8e3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x40e8ee*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x40e906*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x40e928*/
    }
    else
    {
      return 0; /*0x40e8cf*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x40e938*/
  }
}
} // namespace gamemd

// 0x40E940
namespace gamemd {
void VectorClass_ptr_ScriptClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x40e953*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x40E970
namespace gamemd {
int VectorClass_ptr_ScriptClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x40e978*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x40e981*/
  if ( m_8 <= 0 ) /*0x40e985*/
    return -1; /*0x40e99c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x40e98b*/
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
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x40e9b7*/
}
} // namespace gamemd

// 0x40E9D0
namespace gamemd {
char VectorClass_ptr_ScriptClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x40e9dc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x40e9e8*/
      v4 = a3; /*0x40e9fe*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x40e9fa*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x40ea06*/
      return 0; /*0x40ea7a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x40ea14*/
        m_8 = a2; /*0x40ea16*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x40ea21*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x40ea39*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x40ea6e*/
}
} // namespace gamemd

// 0x40EA80
namespace gamemd {
int VectorClass_ptr_ScriptClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x40ea83*/
  if ( m_10 <= 0 ) /*0x40ea88*/
    return -1; /*0x40ea9f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
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
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_ScriptClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x40eac8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x40eae8*/
    RA2_OPDEL(Block); /*0x40eaeb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x40EB00
namespace gamemd {
DynamicVector * VectorClass_ptr_ScriptClass::Constructor_VectorClass_ScriptClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_ScriptClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x40eb18*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x40eb38*/
    RA2_OPDEL(Block); /*0x40eb3b*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x40EEC0
namespace gamemd {
void VectorClass_ptr_VoxelAnimClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x40eec6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x40eed6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x40EEF0
namespace gamemd {
unsigned int VectorClass_ptr_VoxelAnimClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x40eef7*/
}
} // namespace gamemd

// 0x40EF10
namespace gamemd {
int VectorClass_ptr_VoxelAnimClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x40EF20
namespace gamemd {
char VectorClass_ptr_VoxelAnimClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x40ef2d*/
  {
    v3 = 0; /*0x40ef2f*/
    if ( m_8 <= 0 ) /*0x40ef33*/
      return 1; /*0x40ef53*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x40ef3b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x40ef44*/
    {
      ++v3; /*0x40ef46*/
      ++v4; /*0x40ef47*/
      if ( v3 >= m_8 ) /*0x40ef4c*/
        return 1; /*0x40ef4c*/
    }
  }
  return 0; /*0x40ef4e*/
}
} // namespace gamemd

// 0x40EF60
namespace gamemd {
char VectorClass_ptr_VoxelAnimClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x40ef6c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x40ef7c*/
      v4 = a3; /*0x40ef92*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x40ef8e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x40ef9a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x40efb1*/
          m_8 = a2; /*0x40efb3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x40efbe*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x40efd6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x40eff8*/
    }
    else
    {
      return 0; /*0x40ef9f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x40f008*/
  }
}
} // namespace gamemd

// 0x40F010
namespace gamemd {
void VectorClass_ptr_VoxelAnimClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x40f023*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x40F040
namespace gamemd {
int VectorClass_ptr_VoxelAnimClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x40f048*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x40f051*/
  if ( m_8 <= 0 ) /*0x40f055*/
    return -1; /*0x40f06c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x40f05b*/
  {
    if ( ++result >= m_8 ) /*0x40f06a*/
      return -1; /*0x40f06a*/
  }
  return result; /*0x40f04a*/
}
} // namespace gamemd

// 0x40F080
namespace gamemd {
unsigned int VectorClass_ptr_VoxelAnimClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x40f087*/
}
} // namespace gamemd

// 0x40F0A0
namespace gamemd {
char VectorClass_ptr_VoxelAnimClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x40f0ac*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x40f0b8*/
      v4 = a3; /*0x40f0ce*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x40f0ca*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x40f0d6*/
      return 0; /*0x40f14a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x40f0e4*/
        m_8 = a2; /*0x40f0e6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x40f0f1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x40f109*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x40f13e*/
}
} // namespace gamemd

// 0x40F150
namespace gamemd {
int VectorClass_ptr_VoxelAnimClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x40f153*/
  if ( m_10 <= 0 ) /*0x40f158*/
    return -1; /*0x40f16f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x40f16d*/
      return -1; /*0x40f16d*/
  }
  return result; /*0x40f172*/
}
} // namespace gamemd

// 0x40F180
namespace gamemd {
VectorClass_flat * VectorClass_ptr_VoxelAnimClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_VoxelAnimClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x40f198*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x40f1b8*/
    RA2_OPDEL(Block); /*0x40f1bb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x40F1D0
namespace gamemd {
DynamicVector * VectorClass_ptr_VoxelAnimClass::Constructor_VectorClass_VoxelAnimClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_VoxelAnimClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x40f1e8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x40f208*/
    RA2_OPDEL(); /*0x40f20b*/
  return this; /*0x40f215*/
}
} // namespace gamemd

// 0x40F5E0
namespace gamemd {
void VectorClass_ptr_WarheadTypeClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x40f5e6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x40f5f6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x40F610
namespace gamemd {
unsigned int VectorClass_ptr_WarheadTypeClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x40f617*/
}
} // namespace gamemd

// 0x40F630
namespace gamemd {
int VectorClass_ptr_WarheadTypeClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x40F640
namespace gamemd {
char VectorClass_ptr_WarheadTypeClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x40f64d*/
  {
    v3 = 0; /*0x40f64f*/
    if ( m_8 <= 0 ) /*0x40f653*/
      return 1; /*0x40f673*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x40f65b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x40f664*/
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

// 0x40F680
namespace gamemd {
char VectorClass_ptr_WarheadTypeClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x40f68c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x40f69c*/
      v4 = a3; /*0x40f6b2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x40f6ae*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x40f6ba*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x40f6d1*/
          m_8 = a2; /*0x40f6d3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x40f6de*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x40f6f6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x40f718*/
    }
    else
    {
      return 0; /*0x40f6bf*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x40f728*/
  }
}
} // namespace gamemd

// 0x40F730
namespace gamemd {
void VectorClass_ptr_WarheadTypeClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x40f743*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x40F760
namespace gamemd {
int VectorClass_ptr_WarheadTypeClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x40f768*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x40f771*/
  if ( m_8 <= 0 ) /*0x40f775*/
    return -1; /*0x40f78c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x40f77b*/
  {
    if ( ++result >= m_8 ) /*0x40f78a*/
      return -1; /*0x40f78a*/
  }
  return result; /*0x40f76a*/
}
} // namespace gamemd

// 0x40F7A0
namespace gamemd {
unsigned int VectorClass_ptr_WarheadTypeClass::LoadTypeData(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x40f7a7*/
}
} // namespace gamemd

// 0x40F7C0
namespace gamemd {
char VectorClass_ptr_WarheadTypeClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x40f7cc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x40f7d8*/
      v4 = a3; /*0x40f7ee*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x40f7ea*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x40f7f6*/
      return 0; /*0x40f86a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x40f804*/
        m_8 = a2; /*0x40f806*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x40f811*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x40f829*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x40f85e*/
}
} // namespace gamemd

// 0x40F870
namespace gamemd {
int VectorClass_ptr_WarheadTypeClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x40f873*/
  if ( m_10 <= 0 ) /*0x40f878*/
    return -1; /*0x40f88f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x40f88d*/
      return -1; /*0x40f88d*/
  }
  return result; /*0x40f892*/
}
} // namespace gamemd

// 0x40F8A0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_WarheadTypeClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_WarheadTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x40f8b8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x40f8d8*/
    RA2_OPDEL(Block); /*0x40f8db*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x40F8F0
namespace gamemd {
DynamicVector * VectorClass_ptr_WarheadTypeClass::Constructor_VectorClass_WarheadTypeClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_WarheadTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x40f908*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x40f928*/
    RA2_OPDEL(); /*0x40f92b*/
  return this; /*0x40f935*/
}
} // namespace gamemd

// 0x40FBB0
namespace gamemd {
void VectorClass_ptr_WeaponTypeClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x40fbb6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x40fbc6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x40FBE0
namespace gamemd {
unsigned int VectorClass_ptr_WeaponTypeClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x40fbe7*/
}
} // namespace gamemd

// 0x40FC00
namespace gamemd {
int VectorClass_ptr_WeaponTypeClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x40FC10
namespace gamemd {
char VectorClass_ptr_WeaponTypeClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x40fc1d*/
  {
    v3 = 0; /*0x40fc1f*/
    if ( m_8 <= 0 ) /*0x40fc23*/
      return 1; /*0x40fc43*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x40fc2b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x40fc34*/
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

// 0x40FC50
namespace gamemd {
char VectorClass_ptr_WeaponTypeClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x40fc5c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x40fc6c*/
      v4 = a3; /*0x40fc82*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x40fc7e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x40fc8a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x40fca1*/
          m_8 = a2; /*0x40fca3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x40fcae*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x40fcc6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x40fce8*/
    }
    else
    {
      return 0; /*0x40fc8f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x40fcf8*/
  }
}
} // namespace gamemd

// 0x40FD00
namespace gamemd {
void VectorClass_ptr_WeaponTypeClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x40fd13*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x40FD30
namespace gamemd {
int VectorClass_ptr_WeaponTypeClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x40fd38*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x40fd41*/
  if ( m_8 <= 0 ) /*0x40fd45*/
    return -1; /*0x40fd5c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x40fd4b*/
  {
    if ( ++result >= m_8 ) /*0x40fd5a*/
      return -1; /*0x40fd5a*/
  }
  return result; /*0x40fd3a*/
}
} // namespace gamemd

// 0x40FD70
namespace gamemd {
unsigned int VectorClass_ptr_WeaponTypeClass::LoadTypeData(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x40fd77*/
}
} // namespace gamemd

// 0x40FD90
namespace gamemd {
char VectorClass_ptr_WeaponTypeClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x40fd9c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x40fda8*/
      v4 = a3; /*0x40fdbe*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x40fdba*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x40fdc6*/
      return 0; /*0x40fe3a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x40fdd4*/
        m_8 = a2; /*0x40fdd6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x40fde1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x40fdf9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x40fe2e*/
}
} // namespace gamemd

// 0x40FE40
namespace gamemd {
int VectorClass_ptr_WeaponTypeClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x40fe43*/
  if ( m_10 <= 0 ) /*0x40fe48*/
    return -1; /*0x40fe5f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x40fe5d*/
      return -1; /*0x40fe5d*/
  }
  return result; /*0x40fe62*/
}
} // namespace gamemd

// 0x40FE70
namespace gamemd {
VectorClass_flat * VectorClass_ptr_WeaponTypeClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_WeaponTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x40fe88*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x40fea8*/
    RA2_OPDEL(Block); /*0x40feab*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x40FEC0
namespace gamemd {
DynamicVector * VectorClass_ptr_WeaponTypeClass::Constructor_VectorClass_WeaponTypeClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_WeaponTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x40fed8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x40fef8*/
    RA2_OPDEL(); /*0x40fefb*/
  return this; /*0x40ff05*/
}
} // namespace gamemd

// 0x41DDE0
namespace gamemd {
void VectorClass_ptr_AirstrikeClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x41dde6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x41ddf6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x41DE10
namespace gamemd {
unsigned int VectorClass_ptr_AirstrikeClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x41de17*/
}
} // namespace gamemd

// 0x41DE30
namespace gamemd {
int VectorClass_ptr_AirstrikeClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x41DE40
namespace gamemd {
char VectorClass_ptr_AirstrikeClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x41de4d*/
  {
    v3 = 0; /*0x41de4f*/
    if ( m_8 <= 0 ) /*0x41de53*/
      return 1; /*0x41de73*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x41de5b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x41de64*/
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

// 0x41DE80
namespace gamemd {
char VectorClass_ptr_AirstrikeClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x41de8c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x41de9c*/
      v4 = a3; /*0x41deb2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x41deae*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x41deba*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x41ded1*/
          m_8 = a2; /*0x41ded3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x41dede*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x41def6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x41df18*/
    }
    else
    {
      return 0; /*0x41debf*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x41df28*/
  }
}
} // namespace gamemd

// 0x41DF30
namespace gamemd {
void VectorClass_ptr_AirstrikeClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x41df43*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x41DF60
namespace gamemd {
int VectorClass_ptr_AirstrikeClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x41df68*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x41df71*/
  if ( m_8 <= 0 ) /*0x41df75*/
    return -1; /*0x41df8c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x41df7b*/
  {
    if ( ++result >= m_8 ) /*0x41df8a*/
      return -1; /*0x41df8a*/
  }
  return result; /*0x41df6a*/
}
} // namespace gamemd

// 0x41DFA0
namespace gamemd {
unsigned int VectorClass_ptr_AirstrikeClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x41dfa7*/
}
} // namespace gamemd

// 0x41DFC0
namespace gamemd {
char VectorClass_ptr_AirstrikeClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x41dfcc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x41dfd8*/
      v4 = a3; /*0x41dfee*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x41dfea*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x41dff6*/
      return 0; /*0x41e06a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x41e004*/
        m_8 = a2; /*0x41e006*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x41e011*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x41e029*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x41e05e*/
}
} // namespace gamemd

// 0x41E070
namespace gamemd {
int VectorClass_ptr_AirstrikeClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x41e073*/
  if ( m_10 <= 0 ) /*0x41e078*/
    return -1; /*0x41e08f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x41e08d*/
      return -1; /*0x41e08d*/
  }
  return result; /*0x41e092*/
}
} // namespace gamemd

// 0x41E0A0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_AirstrikeClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_AirstrikeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x41e0b8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x41e0d8*/
    RA2_OPDEL(Block); /*0x41e0db*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x41E0F0
namespace gamemd {
DynamicVector * VectorClass_ptr_AirstrikeClass::Constructor_VectorClass_AirstrikeClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_AirstrikeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x41e108*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x41e128*/
    RA2_OPDEL(); /*0x41e12b*/
  return this; /*0x41e135*/
}
} // namespace gamemd

// 0x421800
namespace gamemd {
void VectorClass_ptr_AlphaShapeClass::Destroy()
{
  void *Items; // eax

  Items = *(unsigned int *)&this->Items; /*0x421806*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(Items); /*0x421816*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x421830
namespace gamemd {
unsigned int VectorClass_ptr_AlphaShapeClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x421837*/
}
} // namespace gamemd

// 0x421850
namespace gamemd {
int VectorClass_ptr_AlphaShapeClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x421860
namespace gamemd {
char VectorClass_ptr_AlphaShapeClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x42186d*/
  {
    v3 = 0; /*0x42186f*/
    if ( m_8 <= 0 ) /*0x421873*/
      return 1; /*0x421893*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x42187b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x421884*/
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

// 0x4218A0
namespace gamemd {
char VectorClass_ptr_AlphaShapeClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4218ac*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4218bc*/
      v4 = a3; /*0x4218d2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4218ce*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4218da*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4218f1*/
          m_8 = a2; /*0x4218f3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4218fe*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x421916*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x421938*/
    }
    else
    {
      return 0; /*0x4218df*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x421948*/
  }
}
} // namespace gamemd

// 0x421950
namespace gamemd {
void VectorClass_ptr_AlphaShapeClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x421963*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x421980
namespace gamemd {
int VectorClass_ptr_AlphaShapeClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x421988*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x421991*/
  if ( m_8 <= 0 ) /*0x421995*/
    return -1; /*0x4219ac*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x42199b*/
  {
    if ( ++result >= m_8 ) /*0x4219aa*/
      return -1; /*0x4219aa*/
  }
  return result; /*0x42198a*/
}
} // namespace gamemd

// 0x4219C0
namespace gamemd {
unsigned int VectorClass_ptr_AlphaShapeClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4219c7*/
}
} // namespace gamemd

// 0x4219E0
namespace gamemd {
char VectorClass_ptr_AlphaShapeClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  void *Capacity; // ecx
  int i; // eax
  void *v7; // eax

  if ( a2 ) /*0x4219ec*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4219f8*/
      v4 = a3; /*0x421a0e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x421a0a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x421a16*/
      return 0; /*0x421a8a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < (int)Capacity ) /*0x421a24*/
        Capacity = (void *)a2; /*0x421a26*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x421a31*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(this->Items); /*0x421a49*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x421a7e*/
}
} // namespace gamemd

// 0x421A90
namespace gamemd {
int VectorClass_ptr_AlphaShapeClass::FindItemIndex(unsigned int * a2)
{
  void *Count; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x421a93*/
  if ( (int)Count <= 0 ) /*0x421a98*/
    return -1; /*0x421aaf*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= (int)Count ) /*0x421aad*/
      return -1; /*0x421aad*/
  }
  return result; /*0x421ab2*/
}
} // namespace gamemd

// 0x421AC0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_AlphaShapeClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_AlphaShapeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x421ad8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x421af8*/
    RA2_OPDEL(Block); /*0x421afb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x421B10
namespace gamemd {
unsigned int * VectorClass_ptr_AlphaShapeClass::loc_421B10(unsigned int * Block, char a2)
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_AlphaShapeClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    RA2_OPDEL(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    RA2_OPDEL(Block);
    return Block;
}
} // namespace gamemd

// 0x42D5A0
namespace gamemd {
void VectorClass_ushort::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x42d5a6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x42d5b6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x42D5D0
namespace gamemd {
unsigned int VectorClass_ushort::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 1;
  else
    return 0; /*0x42d5d7*/
}
} // namespace gamemd

// 0x42D5F0
namespace gamemd {
short VectorClass_ushort::Clear(int a2)
{
    return *(unsigned short *)(*((unsigned int *)this + 4) + 2 * a2);
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

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x42d8bc*/
  {
    v3 = 0; /*0x42d8be*/
    if ( m_8 <= 0 ) /*0x42d8c2*/
      return 1; /*0x42d8e1*/
        v4 = (unsigned short *)*((unsigned int *)this + 4);
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
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x42d90c*/
      v4 = a3; /*0x42d91f*/
    else
      v4 = (unsigned short *)RA2_OPNEW(2 * a2); /*0x42d91b*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x42d927*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x42d93e*/
          m_8 = a2; /*0x42d940*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned short *)(*((unsigned int *)this + 1) + 2 * i - 2) )
          ++i; /*0x42d94b*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x42d965*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x42d987*/
    }
    else
    {
      return 0; /*0x42d92c*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x42d997*/
  }
}
} // namespace gamemd

// 0x42D9A0
namespace gamemd {
void VectorClass_ushort::ddtor()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x42d9b3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x42D9D0
namespace gamemd {
int VectorClass_ushort::GetSize(unsigned short * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned short *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x42d9d8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x42d9e1*/
  if ( m_8 <= 0 ) /*0x42d9e5*/
    return -1; /*0x42d9fe*/
  for ( i = *(unsigned short **)&this->Items; *i != *a2; ++i ) /*0x42d9eb*/
  {
    if ( ++result >= m_8 ) /*0x42d9fc*/
      return -1; /*0x42d9fc*/
  }
  return result; /*0x42d9da*/
}
} // namespace gamemd

// 0x42DA10
namespace gamemd {
unsigned int VectorClass_ushort::Get(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 1;
  else
    return 0; /*0x42da17*/
}
} // namespace gamemd

// 0x42DA30
namespace gamemd {
char VectorClass_ushort::SetCapacity(int a2, unsigned short * a3)
{
  unsigned short *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x42da3c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x42da48*/
      v4 = a3; /*0x42da5b*/
    else
      v4 = (unsigned short *)RA2_OPNEW(2 * a2); /*0x42da57*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x42da63*/
      return 0; /*0x42dad9*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x42da71*/
        m_8 = a2; /*0x42da73*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned short *)(*((unsigned int *)this + 1) + 2 * i - 2) )
        ++i; /*0x42da7e*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x42da98*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x42dacd*/
}
} // namespace gamemd

// 0x42DAE0
namespace gamemd {
int VectorClass_ushort::FindItemIndex(unsigned short * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned short *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x42dae3*/
  if ( m_10 <= 0 ) /*0x42dae8*/
    return -1; /*0x42db01*/
    for ( i = (unsigned short *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x42daff*/
      return -1; /*0x42daff*/
  }
  return result; /*0x42db04*/
}
} // namespace gamemd

// 0x42DBB0
namespace gamemd {
VectorClass_ushort * VectorClass_ushort::Add(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_unsigned_short_7E3824;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x42dbc8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x42dbe8*/
    RA2_OPDEL(Block); /*0x42dbeb*/
    return (VectorClass_ushort *)Block;
}
} // namespace gamemd

// 0x42DC00
namespace gamemd {
DynamicVector * VectorClass_ushort::Constructor(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_unsigned_short_7E3824;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x42dc18*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x42dc38*/
    RA2_OPDEL(Block); /*0x42dc3b*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x42F7F0
namespace gamemd {
int VectorClass_Cell::GetSize(unsigned short * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned short *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x42f7fc*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x42f805*/
  if ( m_8 <= 0 ) /*0x42f809*/
    return -1; /*0x42f82c*/
  for ( i = *(unsigned short **)&this->Items; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x42f80f*/
  {
    if ( ++result >= m_8 ) /*0x42f82a*/
      return -1; /*0x42f82a*/
  }
  return result; /*0x42f7fa*/
}
} // namespace gamemd

// 0x42F840
namespace gamemd {
unsigned int VectorClass_Cell::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x42f847*/
}
} // namespace gamemd

// 0x42F860
char VectorClass_flat::ResizeEx(int a2, unsigned int * a3)
{
  unsigned int *v4; // eax
  unsigned int *v5; // edi
  int v6; // ecx
  int i; // eax
  int v8; // eax

  if ( a2 ) /*0x42f86c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x42f87c*/
    {
      a3 = a3; /*0x42f8a4*/
    }
    else
    {
      v4 = operator new(4 * a2); /*0x42f886*/
      if ( v4 ) /*0x42f890*/
        v5 = v4; /*0x42f895*/
      else
        v5 = 0; /*0x42f89d*/
    }
        *((unsigned char *)this + 12) = 1;
    if ( !v5 ) /*0x42f8b0*/
      return 0; /*0x42f924*/
        if ( *((unsigned int *)this + 1) )
    {
            v6 = *((unsigned int *)this + 2);
      if ( a2 < v6 ) /*0x42f8be*/
        v6 = a2; /*0x42f8c0*/
            for ( i = 0; i < v6; v5[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x42f8cb*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(this->Items); /*0x42f8e3*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v5;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v8 = *((unsigned int *)this + 2);
    if ( v8 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v8;
  return 1; /*0x42f918*/
}
// 0x42FBA0
namespace gamemd {
VectorClass_flat *  VectorClass_Cell::QueryInterface(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_Cell;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x42fbb8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x42fbd8*/
    RA2_OPDEL(this); /*0x42fbdb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x42FCB0
unsigned int * VectorClass_flat::CellConstructor(IUnknown * aP1, IUnknown * aP2)
{
  void *v5; // eax

    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = aP1;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
    *this = &vt_VectorClass_Cell;
  if ( aP1 ) /*0x42fcd2*/
  {
    if ( aP2 ) /*0x42fcda*/
    {
            *((unsigned int *)this + 4) = aP2;
            return this;
    }
    v5 = (void *)RA2_OPNEW(4 * aP1); /*0x42fcf3*/
    if ( v5 ) /*0x42fcfd*/
    {
            *((unsigned int *)this + 4) = v5;
            *((unsigned char *)this + 13) = 1;
            return this;
    }
        *((unsigned char *)this + 13) = 1;
        *((unsigned int *)this + 4) = 0;
  }
    return this;
}
// 0x45A070
namespace gamemd {
void VectorClass_ptr_FoggedObjectClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x45a076*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x45a086*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x45A0A0
namespace gamemd {
unsigned int VectorClass_ptr_FoggedObjectClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x45a0a7*/
}
} // namespace gamemd

// 0x45A0C0
namespace gamemd {
int VectorClass_ptr_FoggedObjectClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x45A0D0
namespace gamemd {
void VectorClass_ptr_Reestablish::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x45a0d6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x45a0e6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x45A100
namespace gamemd {
unsigned int VectorClass_ptr_Reestablish::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x45a107*/
}
} // namespace gamemd

// 0x45A120
namespace gamemd {
int VectorClass_ptr_Reestablish::Clear(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x45A270
void VectorClass_flat::Cleanup()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(this->Items); /*0x45a283*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
// 0x45A4D0
namespace gamemd {
void VectorClass_ptr_InfantryClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->ptr_4); /*0x45a4e3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x45A640
namespace gamemd {
char VectorClass_ptr_FoggedObjectClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x45a64d*/
  {
    v3 = 0; /*0x45a64f*/
    if ( m_8 <= 0 ) /*0x45a653*/
      return 1; /*0x45a673*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x45a65b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x45a664*/
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

// 0x45A680
namespace gamemd {
char VectorClass_ptr_FoggedObjectClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x45a68c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x45a698*/
      v4 = a3; /*0x45a6ae*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x45a6aa*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x45a6b6*/
      return 0; /*0x45a72a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x45a6c4*/
        m_8 = a2; /*0x45a6c6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x45a6d1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x45a6e9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x45a71e*/
}
} // namespace gamemd

// 0x45A730
namespace gamemd {
int VectorClass_ptr_FoggedObjectClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x45a733*/
  if ( m_10 <= 0 ) /*0x45a738*/
    return -1; /*0x45a74f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x45a74d*/
      return -1; /*0x45a74d*/
  }
  return result; /*0x45a752*/
}
} // namespace gamemd

// 0x45A760
namespace gamemd {
char VectorClass_ptr_Reestablish::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x45a76d*/
  {
    v3 = 0; /*0x45a76f*/
    if ( m_8 <= 0 ) /*0x45a773*/
      return 1; /*0x45a793*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x45a77b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x45a784*/
    {
      ++v3; /*0x45a786*/
      ++v4; /*0x45a787*/
      if ( v3 >= m_8 ) /*0x45a78c*/
        return 1; /*0x45a78c*/
    }
  }
  return 0; /*0x45a78e*/
}
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
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x45a7bc*/
      v4 = a3; /*0x45a7d2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x45a7ce*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x45a7da*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x45a7f1*/
          m_8 = a2; /*0x45a7f3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x45a7fe*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x45a816*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x45a838*/
    }
    else
    {
      return 0; /*0x45a7df*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x45a848*/
  }
}
} // namespace gamemd

// 0x45A850
namespace gamemd {
void VectorClass_ptr_Reestablish::ddtor()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x45a863*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x45A880
namespace gamemd {
int VectorClass_ptr_Reestablish::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x45a888*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x45a891*/
  if ( m_8 <= 0 ) /*0x45a895*/
    return -1; /*0x45a8ac*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x45a89b*/
  {
    if ( ++result >= m_8 ) /*0x45a8aa*/
      return -1; /*0x45a8aa*/
  }
  return result; /*0x45a88a*/
}
} // namespace gamemd

// 0x45A8C0
namespace gamemd {
unsigned int VectorClass_ptr_Reestablish::Get(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x45a8c7*/
}
} // namespace gamemd

// 0x45A8E0
namespace gamemd {
char VectorClass_ptr_Reestablish::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x45a8ec*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x45a8f8*/
      v4 = a3; /*0x45a90e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x45a90a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x45a916*/
      return 0; /*0x45a98a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x45a924*/
        m_8 = a2; /*0x45a926*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x45a931*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x45a949*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x45a97e*/
}
} // namespace gamemd

// 0x45A990
namespace gamemd {
int VectorClass_ptr_Reestablish::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x45a993*/
  if ( m_10 <= 0 ) /*0x45a998*/
    return -1; /*0x45a9af*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x45a9ad*/
      return -1; /*0x45a9ad*/
  }
  return result; /*0x45a9b2*/
}
} // namespace gamemd

// 0x45AA10
namespace gamemd {
DynamicVector * VectorClass_ptr_Reestablish::Constructor(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_ParticleSystemTypeClass_const;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x45aa28*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x45aa48*/
    RA2_OPDEL(Block); /*0x45aa4b*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x45AAB0
namespace gamemd {
DynamicVector * VectorClass_InfantryPtr::Destruct(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*((unsigned int *)Block + 1); /*0x45aab3*/
  *(unsigned int *)Block = (void*)&VectorClass_InfantryClass___vftable; /*0x45aab6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x45aac0*/
  {
    RA2_OPDEL(v3); /*0x45aac8*/
    *((unsigned int *)Block + 1) = 0; /*0x45aad0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x45aadb*/
  *((unsigned int *)Block + 2) = 0; /*0x45aae1*/
  if ( (a2 & 1) != 0 ) /*0x45aae8*/
    RA2_OPDEL(Block); /*0x45aaeb*/
  return Block; /*0x45aaf5*/
}
} // namespace gamemd

// 0x45AB00
namespace gamemd {
DynamicVector * VectorClass_ptr_FoggedObjectClass::Constructor_VectorClass_FoggedObjectClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_FoggedObjectClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x45ab18*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x45ab38*/
    RA2_OPDEL(); /*0x45ab3b*/
  return this; /*0x45ab45*/
}
} // namespace gamemd

// 0x45AB50
namespace gamemd {
char VectorClass_ptr_FoggedObjectClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x45ab5c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x45ab6c*/
      v4 = a3; /*0x45ab82*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x45ab7e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x45ab8a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x45aba1*/
          m_8 = a2; /*0x45aba3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x45abae*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x45abc6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x45abe8*/
    }
    else
    {
      return 0; /*0x45ab8f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x45abf8*/
  }
}
} // namespace gamemd

// 0x45AC00
namespace gamemd {
void VectorClass_ptr_FoggedObjectClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x45ac13*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x45AC30
namespace gamemd {
int VectorClass_ptr_FoggedObjectClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x45ac38*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x45ac41*/
  if ( m_8 <= 0 ) /*0x45ac45*/
    return -1; /*0x45ac5c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x45ac4b*/
  {
    if ( ++result >= m_8 ) /*0x45ac5a*/
      return -1; /*0x45ac5a*/
  }
  return result; /*0x45ac3a*/
}
} // namespace gamemd

// 0x45AC70
namespace gamemd {
unsigned int VectorClass_ptr_FoggedObjectClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x45ac77*/
}
} // namespace gamemd

// 0x45AC90
namespace gamemd {
VectorClass_flat * VectorClass_ptr_FoggedObjectClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_FoggedObjectClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x45aca8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x45acc8*/
    RA2_OPDEL(Block); /*0x45accb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x45ACE0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_Reestablish::Add(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_Reestablish;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x45acf8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x45ad18*/
    RA2_OPDEL(Block); /*0x45ad1b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x45AD30
namespace gamemd {
DynamicVector * VectorClass_ptr_Reestablish::Constructor_VectorClass_Reestablish___(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_Reestablish;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x45ad48*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x45ad68*/
    RA2_OPDEL(Block); /*0x45ad6b*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x45AD80
unsigned int * VectorClass_flat::ConstructorWithVtable(TechnoTypeClass * aP1, TechnoTypeClass * aP2)
{
    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = aP1;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
    *this = &vt_VectorClass_ParticleSystemTypeClass_const;
  if ( aP1 ) /*0x45ad9e*/
  {
    if ( aP2 ) /*0x45ada6*/
    {
            *((unsigned int *)this + 4) = aP2;
            return this;
    }
    this->Items = (void *)RA2_OPNEW(4 * aP1); /*0x45adbd*/
        *((unsigned char *)this + 13) = 1;
  }
    return this;
}
// 0x45AE50
namespace gamemd {
unsigned int * VectorClass_ReestablishPtr::Construct(BuildingClass * aP1, BuildingClass * aP2)
{
    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = aP1;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
    *this = &vt_VectorClass_Reestablish;
  if ( aP1 ) /*0x45ae6e*/
  {
    if ( aP2 ) /*0x45ae76*/
    {
            *((unsigned int *)this + 4) = aP2;
      return this; /*0x45ae7e*/
    }
    *(unsigned int *)&this->ptr_4 = RA2_OPNEW(4 * aP1); /*0x45ae8d*/
        *((unsigned char *)this + 13) = 1;
  }
  return this; /*0x45ae7d*/
}
} // namespace gamemd

// 0x465DE0
namespace gamemd {
unsigned int * VectorClass_TPoint3D_int::Clear(unsigned int * a2, int a3)
{
  unsigned int *v3; // edx

    v3 = (unsigned int *)(*((unsigned int *)this + 4) + 12 * a3);
  *a2 = *v3; /*0x465df6*/
  a2[1] = v3[1]; /*0x465dfb*/
  a2[2] = v3[2]; /*0x465e02*/
  return a2; /*0x465dfe*/
}
} // namespace gamemd

// 0x465E10
namespace gamemd {
char VectorClass_TPoint3D_int::AddRef(int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  unsigned int *v5; // eax
  unsigned int *v6; // ecx
  int v7; // edx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x465e20*/
  {
    v3 = 0; /*0x465e22*/
    if ( m_8 <= 0 ) /*0x465e26*/
      return 1; /*0x465e60*/
    v4 = *(unsigned int *)(a2 + 4); /*0x465e28*/
        v5 = (unsigned int *)*((unsigned int *)this + 4);
    v6 = (unsigned int *)(v4 + 8); /*0x465e2e*/
    v7 = v4 - (unsigned int)v5; /*0x465e31*/
    while ( *v5 == *(unsigned int *)((char *)v5 + v7) && v5[1] == *(v6 - 1) && v5[2] == *v6 ) /*0x465e4d*/
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

// 0x465E70
namespace gamemd {
char VectorClass_TPoint3D_int::Release(int a2, char * a3)
{
  int v3; // ebx
  char *v5; // ebp
  int v6; // eax
  char *v7; // edi
  int m_8; // ecx
  int v10; // eax
  char *v11; // ebx
  unsigned int *v12; // edx

  v3 = a2; /*0x465e72*/
  if ( a2 ) /*0x465e7d*/
  {
    v5 = a3; /*0x465e83*/
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x465e8d*/
    {
      v7 = a3; /*0x465eb4*/
    }
    else
    {
      v6 = RA2_OPNEW(12 * a2); /*0x465e96*/
      if ( v6 ) /*0x465ea0*/
        v7 = (char *)v6; /*0x465ea5*/
      else
        v7 = 0; /*0x465ead*/
    }
        *((unsigned char *)this + 12) = 1;
    if ( v7 ) /*0x465ec0*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v9 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x465ed8*/
          m_8 = a2; /*0x465eda*/
        if ( m_8 > 0 ) /*0x465ede*/
        {
          v10 = 0; /*0x465ee0*/
          do /*0x465efe*/
          {
            v11 = &v7[v10]; /*0x465ee5*/
                        v12 = (unsigned int *)(v10 + *((unsigned int *)this + 1));
            v10 += 12; /*0x465eea*/
            --m_8; /*0x465eed*/
            *(unsigned int *)v11 = *v12; /*0x465ef0*/
            *((unsigned int *)v11 + 1) = v12[1]; /*0x465ef5*/
            *((unsigned int *)v11 + 2) = v12[2]; /*0x465efb*/
          }
          while ( m_8 ); /*0x465efe*/
          v5 = a3; /*0x465f00*/
          v3 = a2; /*0x465f04*/
        }
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x465f13*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v7;
            *((unsigned int *)this + 2) = v3;
            *((unsigned char *)this + 13) = v5 == 0;
      return 1; /*0x465f35*/
    }
    else
    {
      return 0; /*0x465ec5*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x465f46*/
  }
}
} // namespace gamemd

// 0x465F50
namespace gamemd {
void VectorClass_TPoint3D_int::ddtor()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x465f63*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x465F80
namespace gamemd {
int VectorClass_TPoint3D_int::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x465f8e*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x465f97*/
  if ( m_8 <= 0 ) /*0x465f9b*/
    return -1; /*0x465fc6*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 ) /*0x465fa1*/
  {
    if ( ++result >= m_8 ) /*0x465fc4*/
      return -1; /*0x465fc4*/
  }
  return result; /*0x465f8b*/
}
} // namespace gamemd

// 0x465FD0
namespace gamemd {
unsigned int VectorClass_TPoint3D_int::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (a2 - *((unsigned int *)this + 16)) / 0xCu;
  else
    return 0; /*0x465fd7*/
}
} // namespace gamemd

// 0x466080
namespace gamemd {
VectorClass_flat * VectorClass_TPoint3D_int::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_TPoint3D_int;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x466098*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4660b8*/
    RA2_OPDEL(Block); /*0x4660bb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x46B5E0
namespace gamemd {
void VectorClass_ptr_BulletClass::Destroy()
{
  void *Items; // eax

  Items = *(unsigned int *)&this->Items; /*0x46b5e6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(Items); /*0x46b5f6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x46B610
namespace gamemd {
unsigned int VectorClass_ptr_BulletClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x46b617*/
}
} // namespace gamemd

// 0x46B630
namespace gamemd {
int VectorClass_ptr_BulletClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x46B660
namespace gamemd {
char VectorClass_ptr_BulletClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x46b66d*/
  {
    v3 = 0; /*0x46b66f*/
    if ( m_8 <= 0 ) /*0x46b673*/
      return 1; /*0x46b693*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x46b67b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x46b684*/
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

// 0x46B6A0
namespace gamemd {
char VectorClass_ptr_BulletClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x46b6ac*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x46b6bc*/
      v4 = a3; /*0x46b6d2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x46b6ce*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x46b6da*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x46b6f1*/
          m_8 = a2; /*0x46b6f3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x46b6fe*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x46b716*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x46b738*/
    }
    else
    {
      return 0; /*0x46b6df*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x46b748*/
  }
}
} // namespace gamemd

// 0x46B750
namespace gamemd {
void VectorClass_ptr_BulletClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x46b763*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x46B780
namespace gamemd {
int VectorClass_ptr_BulletClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x46b788*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x46b791*/
  if ( m_8 <= 0 ) /*0x46b795*/
    return -1; /*0x46b7ac*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x46b79b*/
  {
    if ( ++result >= m_8 ) /*0x46b7aa*/
      return -1; /*0x46b7aa*/
  }
  return result; /*0x46b78a*/
}
} // namespace gamemd

// 0x46B7C0
namespace gamemd {
unsigned int VectorClass_ptr_BulletClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x46b7c7*/
}
} // namespace gamemd

// 0x46B7E0
namespace gamemd {
char VectorClass_ptr_BulletClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  void *Capacity; // ecx
  int i; // eax
  void *v7; // eax

  if ( a2 ) /*0x46b7ec*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x46b7f8*/
      v4 = a3; /*0x46b80e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x46b80a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x46b816*/
      return 0; /*0x46b88a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < (int)Capacity ) /*0x46b824*/
        Capacity = (void *)a2; /*0x46b826*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x46b831*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(this->Items); /*0x46b849*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x46b87e*/
}
} // namespace gamemd

// 0x46B890
namespace gamemd {
int VectorClass_ptr_BulletClass::FindItemIndex(unsigned int * a2)
{
  void *Count; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x46b893*/
  if ( (int)Count <= 0 ) /*0x46b898*/
    return -1; /*0x46b8af*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= (int)Count ) /*0x46b8ad*/
      return -1; /*0x46b8ad*/
  }
  return result; /*0x46b8b2*/
}
} // namespace gamemd

// 0x46B8C0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_BulletClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_BulletClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x46b8d8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x46b8f8*/
    RA2_OPDEL(Block); /*0x46b8fb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x46B910
namespace gamemd {
unsigned int * VectorClass_ptr_BulletClass::loc_46B910(unsigned int * Block, char a2)
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_BulletClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    RA2_OPDEL(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    RA2_OPDEL(Block);
    return Block;
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
void VectorClass_ptr_CaptureManagerClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x472ae6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x472af6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x472B10
namespace gamemd {
unsigned int VectorClass_ptr_CaptureManagerClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x472b17*/
}
} // namespace gamemd

// 0x472B30
namespace gamemd {
int VectorClass_ptr_CaptureManagerClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x472DA0
namespace gamemd {
char VectorClass_ptr_CaptureManagerClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x472dad*/
  {
    v3 = 0; /*0x472daf*/
    if ( m_8 <= 0 ) /*0x472db3*/
      return 1; /*0x472dd3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x472dbb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x472dc4*/
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

// 0x472DE0
namespace gamemd {
char VectorClass_ptr_CaptureManagerClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x472dec*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x472dfc*/
      v4 = a3; /*0x472e12*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x472e0e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x472e1a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x472e31*/
          m_8 = a2; /*0x472e33*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x472e3e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x472e56*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x472e78*/
    }
    else
    {
      return 0; /*0x472e1f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x472e88*/
  }
}
} // namespace gamemd

// 0x472E90
namespace gamemd {
void VectorClass_ptr_CaptureManagerClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x472ea3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x472EC0
namespace gamemd {
int VectorClass_ptr_CaptureManagerClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x472ec8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x472ed1*/
  if ( m_8 <= 0 ) /*0x472ed5*/
    return -1; /*0x472eec*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x472edb*/
  {
    if ( ++result >= m_8 ) /*0x472eea*/
      return -1; /*0x472eea*/
  }
  return result; /*0x472eca*/
}
} // namespace gamemd

// 0x472F00
namespace gamemd {
unsigned int VectorClass_ptr_CaptureManagerClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x472f07*/
}
} // namespace gamemd

// 0x472F20
namespace gamemd {
char VectorClass_ptr_CaptureManagerClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x472f2c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x472f38*/
      v4 = a3; /*0x472f4e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x472f4a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x472f56*/
      return 0; /*0x472fca*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x472f64*/
        m_8 = a2; /*0x472f66*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x472f71*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x472f89*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x472fbe*/
}
} // namespace gamemd

// 0x472FD0
namespace gamemd {
int VectorClass_ptr_CaptureManagerClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x472fd3*/
  if ( m_10 <= 0 ) /*0x472fd8*/
    return -1; /*0x472fef*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x472fed*/
      return -1; /*0x472fed*/
  }
  return result; /*0x472ff2*/
}
} // namespace gamemd

// 0x4730A0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_CaptureManagerClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_CaptureManagerClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4730b8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4730d8*/
    RA2_OPDEL(Block); /*0x4730db*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4730F0
namespace gamemd {
DynamicVector * VectorClass_ptr_CaptureManagerClass::Constructor_VectorClass_CaptureManagerClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_CaptureManagerClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x473108*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x473128*/
    RA2_OPDEL(); /*0x47312b*/
  return this; /*0x473135*/
}
} // namespace gamemd

// 0x477750
int * VectorClass_flat::ScalarDtor(char a2)
{
  Pipe::Dtor(); /*0x477753*/
  if ( (a2 & 1) != 0 ) /*0x47775d*/
    RA2_OPDEL(); /*0x477760*/
  return (int *)this->__pad_0; /*0x47776a*/
}
// 0x4777B0
unsigned int * VectorClass_flat::Copy(VectorClass_flat * aP1)
{
  int v3; // eax
  int v4; // eax
  int Capacity; // ecx
  int v6; // eax

    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = 0;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
    *this = &vt_VectorClass_int;
  if ( this != (DynamicVectorClass *)aP1 ) /*0x4777d0*/
  {
    VectorClass::Destroy(); /*0x4777d2*/
    v3 = aP1[2]; /*0x4777d8*/
        *((unsigned int *)this + 8) = v3;
    if ( v3 ) /*0x4777e0*/
    {
      v4 = RA2_OPNEW(4 * v3); /*0x4777e6*/
            *((unsigned int *)this + 4) = v4;
      if ( v4 ) /*0x4777f3*/
      {
                v5 = *((unsigned int *)this + 8);
        v6 = 0; /*0x4777f8*/
                *((unsigned char *)this + 13) = 1;
        if ( Capacity > 0 ) /*0x477800*/
        {
          do /*0x477814*/
          {
                        *(unsigned int *)(*((unsigned int *)this + 4) + 4 * v6) = *((unsigned int *)aP1->Items + v6);
            ++v6; /*0x477811*/
          }
          while ( v6 < this->Capacity ); /*0x477814*/
        }
      }
    }
    else
    {
            *((unsigned int *)this + 4) = 0;
            *((unsigned char *)this + 13) = 0;
    }
  }
    *((unsigned int *)this + 16) = aP1[1].vtable0;
    *((unsigned int *)this + 20) = aP1[1].Items;
  this->vtable0 = (int)&TypeList_int_vftable; /*0x47782a*/
  return &this->vtable0; /*0x477832*/
}
// 0x477890
int VectorClass_flat::GetAt_Copy(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
// 0x477BE0
unsigned int * VectorClass_flat::Construct(int a2, int a3)
{
    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = a2;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
    *this = &VectorClass<int>::`vftable';
  if ( a2 ) /*0x477bfe*/
  {
    if ( a3 ) /*0x477c06*/
    {
            *((unsigned int *)this + 4) = a3;
            return this;
    }
    this->Items = (void *)RA2_OPNEW(4 * a2); /*0x477c1d*/
        *((unsigned char *)this + 13) = 1;
  }
    return this;
}
// 0x477C70
char VectorClass_flat::vt02(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x477c7c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x477c8c*/
      v4 = a3; /*0x477ca2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x477c9e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x477caa*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x477cc1*/
          m_8 = a2; /*0x477cc3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x477cce*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->u32_4); /*0x477ce6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x477d08*/
    }
    else
    {
      return 0; /*0x477caf*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x477d18*/
  }
}
// 0x477D20
void VectorClass_flat::Destroy()
{
  int result; // eax

  result = this->Items; /*0x477d26*/
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(this->Items); /*0x477d33*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
  return result; /*0x477d44*/
}
// 0x477D50
int  VectorClass_flat::vt04()
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x477d58*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x477d61*/
  if ( m_8 <= 0 ) /*0x477d65*/
    return -1; /*0x477d7c*/
    for ( i = *(unsigned int **)((char *)this + 16); *i != *a2; ++i )
  {
    if ( ++result >= m_8 ) /*0x477d7a*/
      return -1; /*0x477d7a*/
  }
  return result; /*0x477d5a*/
}
// 0x477D90
unsigned int VectorClass_flat::vt05(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x477d97*/
}
// 0x477E10
char VectorClass_flat::Resize(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x477e1c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x477e28*/
      v4 = a3; /*0x477e3e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x477e3a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x477e46*/
      return 0; /*0x477eba*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x477e54*/
        m_8 = a2; /*0x477e56*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x477e61*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->u32_4); /*0x477e79*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x477eae*/
}
// 0x478630
VectorClass_flat *  VectorClass_flat::vt00(char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x478633*/
  *this = (void*)&VectorClass_int_vftable; /*0x478636*/
  if ( v3 && *((unsigned char *)this + 13) ) /*0x478640*/
  {
    RA2_OPDEL(v3); /*0x478648*/
    *(this + 1) = 0; /*0x478650*/
  }
  *((unsigned char *)this + 13) = 0; /*0x47865b*/
  *(this + 2) = 0; /*0x478661*/
  if ( (a2 & 1) != 0 ) /*0x478668*/
    RA2_OPDEL(this); /*0x47866b*/
  return this; /*0x478675*/
}
// 0x48AD10
namespace gamemd {
void VectorClass_ptr_DamageGroup::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x48ad16*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x48ad26*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x48AD40
namespace gamemd {
unsigned int VectorClass_ptr_DamageGroup::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x48ad47*/
}
} // namespace gamemd

// 0x48AD60
namespace gamemd {
int VectorClass_ptr_DamageGroup::Clear(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x48AD70
namespace gamemd {
char VectorClass_ptr_DamageGroup::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x48ad7d*/
  {
    v3 = 0; /*0x48ad7f*/
    if ( m_8 <= 0 ) /*0x48ad83*/
      return 1; /*0x48ada3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x48ad8b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x48ad94*/
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

// 0x48ADB0
namespace gamemd {
char VectorClass_ptr_DamageGroup::Remove(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x48adbc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x48adcc*/
      v4 = a3; /*0x48ade2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x48adde*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x48adea*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x48ae01*/
          m_8 = a2; /*0x48ae03*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x48ae0e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x48ae26*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x48ae48*/
    }
    else
    {
      return 0; /*0x48adef*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x48ae58*/
  }
}
} // namespace gamemd

// 0x48AE60
namespace gamemd {
void VectorClass_ptr_DamageGroup::ddtor()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x48ae73*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x48AE90
namespace gamemd {
int VectorClass_ptr_DamageGroup::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x48ae98*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x48aea1*/
  if ( m_8 <= 0 ) /*0x48aea5*/
    return -1; /*0x48aebc*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x48aeab*/
  {
    if ( ++result >= m_8 ) /*0x48aeba*/
      return -1; /*0x48aeba*/
  }
  return result; /*0x48ae9a*/
}
} // namespace gamemd

// 0x48AED0
namespace gamemd {
unsigned int VectorClass_ptr_DamageGroup::Get(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x48aed7*/
}
} // namespace gamemd

// 0x48AEF0
namespace gamemd {
char VectorClass_ptr_DamageGroup::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x48aefc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x48af08*/
      v4 = a3; /*0x48af1e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x48af1a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x48af26*/
      return 0; /*0x48af9a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x48af34*/
        m_8 = a2; /*0x48af36*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x48af41*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x48af59*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x48af8e*/
}
} // namespace gamemd

// 0x48AFA0
namespace gamemd {
int VectorClass_ptr_DamageGroup::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x48afa3*/
  if ( m_10 <= 0 ) /*0x48afa8*/
    return -1; /*0x48afbf*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x48afbd*/
      return -1; /*0x48afbd*/
  }
  return result; /*0x48afc2*/
}
} // namespace gamemd

// 0x48AFD0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_DamageGroup::Add(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_DamageGroup;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x48afe8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x48b008*/
    RA2_OPDEL(Block); /*0x48b00b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x48B020
namespace gamemd {
DynamicVector * VectorClass_ptr_DamageGroup::Constructor_VectorClass_DamageGroup___(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_DamageGroup;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x48b038*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x48b058*/
    RA2_OPDEL(Block); /*0x48b05b*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x491390
namespace gamemd {
void VectorClass_ptr_ConvertClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x491396*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4913a6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4913C0
namespace gamemd {
unsigned int VectorClass_ptr_ConvertClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4913c7*/
}
} // namespace gamemd

// 0x4913E0
namespace gamemd {
int VectorClass_ptr_ConvertClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x49AE80
namespace gamemd {
char VectorClass_ptr_ConvertClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x49ae8d*/
  {
    v3 = 0; /*0x49ae8f*/
    if ( m_8 <= 0 ) /*0x49ae93*/
      return 1; /*0x49aeb3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x49ae9b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x49aea4*/
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

// 0x49AEC0
namespace gamemd {
char VectorClass_ptr_ConvertClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x49aecc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x49aedc*/
      v4 = a3; /*0x49aef2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x49aeee*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x49aefa*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x49af11*/
          m_8 = a2; /*0x49af13*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x49af1e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x49af36*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x49af58*/
    }
    else
    {
      return 0; /*0x49aeff*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x49af68*/
  }
}
} // namespace gamemd

// 0x49AF70
namespace gamemd {
void VectorClass_ptr_ConvertClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x49af83*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x49AFA0
namespace gamemd {
int VectorClass_ptr_ConvertClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x49afa8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x49afb1*/
  if ( m_8 <= 0 ) /*0x49afb5*/
    return -1; /*0x49afcc*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x49afbb*/
  {
    if ( ++result >= m_8 ) /*0x49afca*/
      return -1; /*0x49afca*/
  }
  return result; /*0x49afaa*/
}
} // namespace gamemd

// 0x49AFE0
namespace gamemd {
unsigned int VectorClass_ptr_ConvertClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x49afe7*/
}
} // namespace gamemd

// 0x49B000
namespace gamemd {
char VectorClass_ptr_ConvertClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x49b00c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x49b018*/
      v4 = a3; /*0x49b02e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x49b02a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x49b036*/
      return 0; /*0x49b0aa*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x49b044*/
        m_8 = a2; /*0x49b046*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x49b051*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x49b069*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x49b09e*/
}
} // namespace gamemd

// 0x49B0B0
namespace gamemd {
int VectorClass_ptr_ConvertClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x49b0b3*/
  if ( m_10 <= 0 ) /*0x49b0b8*/
    return -1; /*0x49b0cf*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x49b0cd*/
      return -1; /*0x49b0cd*/
  }
  return result; /*0x49b0d2*/
}
} // namespace gamemd

// 0x49B0E0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_ConvertClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_ConvertClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x49b0f8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x49b118*/
    RA2_OPDEL(Block); /*0x49b11b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x49B130
namespace gamemd {
DynamicVector * VectorClass_ptr_ConvertClass::Constructor_VectorClass_ConvertClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_ConvertClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x49b148*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x49b168*/
    RA2_OPDEL(Block); /*0x49b16b*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x49FB60
int VectorClass_flat::GetCount()
{
    return *((unsigned int *)this + 16);
}
// 0x4A0E10
namespace gamemd {
DynamicVector *  VectorClass_UtagCONNECTDATA::Constructor_VectorClass_tagCONNECTDATA_(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_tagCONNECTDATA;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4a0e28*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4a0e48*/
    RA2_OPDEL(this); /*0x4a0e4b*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x4A0EB0
namespace gamemd {
void VectorClass_UtagCONNECTDATA::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4a0eb6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4a0ec6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4A0EE0
namespace gamemd {
unsigned int VectorClass_UtagCONNECTDATA::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 3;
  else
    return 0; /*0x4a0ee7*/
}
} // namespace gamemd

// 0x4A0F00
namespace gamemd {
unsigned int * VectorClass_UtagCONNECTDATA::Clear(unsigned int * a2, int a3)
{
  int v3; // edx

    v3 = *((unsigned int *)this + 4);
  *a2 = *(unsigned int *)(v3 + 8 * a3); /*0x4a0f0f*/
  a2[1] = *(unsigned int *)(v3 + 8 * a3 + 4); /*0x4a0f16*/
  return a2; /*0x4a0f11*/
}
} // namespace gamemd

// 0x4A0F80
namespace gamemd {
char VectorClass_UtagCONNECTDATA::AddRef(int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  unsigned int *v5; // eax
  unsigned int *v6; // ecx
  int v7; // edx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4a0f90*/
  {
    v3 = 0; /*0x4a0f92*/
    if ( m_8 <= 0 ) /*0x4a0f96*/
      return 1; /*0x4a0fc6*/
    v4 = *(unsigned int *)(a2 + 4); /*0x4a0f98*/
        v5 = (unsigned int *)*((unsigned int *)this + 4);
    v6 = (unsigned int *)(v4 + 4); /*0x4a0f9e*/
    v7 = v4 - (unsigned int)v5; /*0x4a0fa1*/
    while ( v5[1] == *v6 && *v5 == *(unsigned int *)((char *)v5 + v7) ) /*0x4a0fb3*/
    {
      ++v3; /*0x4a0fb5*/
      v6 += 2; /*0x4a0fb6*/
      v5 += 2; /*0x4a0fb9*/
      if ( v3 >= m_8 ) /*0x4a0fbe*/
        return 1; /*0x4a0fbe*/
    }
  }
  return 0; /*0x4a0fc0*/
}
} // namespace gamemd

// 0x4A0FE0
namespace gamemd {
char VectorClass_UtagCONNECTDATA::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // ebx
  unsigned int *v5; // edi
  int m_8; // ecx
  int v8; // eax
  int v9; // edx

  if ( a2 ) /*0x4a0fec*/
  {
    v4 = a3; /*0x4a0ff2*/
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4a0ffc*/
      v5 = a3; /*0x4a1012*/
    else
      v5 = (unsigned int *)RA2_OPNEW(8 * a2); /*0x4a100e*/
        *((unsigned char *)this + 12) = 1;
    if ( v5 ) /*0x4a101a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v7 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4a1031*/
          m_8 = a2; /*0x4a1033*/
        v8 = 0; /*0x4a1035*/
        if ( m_8 > 0 ) /*0x4a1039*/
        {
          do /*0x4a1051*/
          {
                        v9 = *((unsigned int *)this + 1);
            ++v8; /*0x4a103e*/
            v5[2 * v8 - 2] = *(unsigned int *)(v9 + 8 * v8 - 8); /*0x4a1045*/
            v5[2 * v8 - 1] = *(unsigned int *)(v9 + 8 * v8 - 4); /*0x4a104d*/
          }
          while ( v8 < m_8 ); /*0x4a1051*/
          v4 = a3; /*0x4a1053*/
        }
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4a1062*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v5;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = v4 == 0;
      return 1; /*0x4a1084*/
    }
    else
    {
      return 0; /*0x4a101f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4a1094*/
  }
}
} // namespace gamemd

// 0x4A10A0
void VectorClass_flat::ClearAndFree2()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(this->Items); /*0x4a10b3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
// 0x4A10D0
namespace gamemd {
int  VectorClass_UtagCONNECTDATA::GetSize()
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4a10de*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4a10e7*/
  if ( m_8 <= 0 ) /*0x4a10eb*/
    return -1; /*0x4a110c*/
  for ( i = *(unsigned int **)&this->Items; i[1] != this[1] || *i != *this; i += 2 ) /*0x4a10f1*/
  {
    if ( ++result >= m_8 ) /*0x4a110a*/
      return -1; /*0x4a110a*/
  }
  return result; /*0x4a10db*/
}
} // namespace gamemd

// 0x4A1120
namespace gamemd {
unsigned int VectorClass_UtagCONNECTDATA::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 3;
  else
    return 0; /*0x4a1127*/
}
} // namespace gamemd

// 0x4A1140
namespace gamemd {
char VectorClass_UtagCONNECTDATA::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // ebx
  unsigned int *v5; // edi
  int m_8; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // eax

  if ( a2 ) /*0x4a114c*/
  {
    v4 = a3; /*0x4a1152*/
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4a115c*/
      v5 = a3; /*0x4a1172*/
    else
      v5 = (unsigned int *)RA2_OPNEW(8 * a2); /*0x4a116e*/
        *((unsigned char *)this + 12) = 1;
    if ( !v5 ) /*0x4a117a*/
      return 0; /*0x4a11fa*/
        if ( *((unsigned int *)this + 1) )
    {
            v6 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4a1188*/
        m_8 = a2; /*0x4a118a*/
      v7 = 0; /*0x4a118c*/
      if ( m_8 > 0 ) /*0x4a1190*/
      {
        do /*0x4a11a8*/
        {
                    v8 = *((unsigned int *)this + 1);
          ++v7; /*0x4a1195*/
          v5[2 * v7 - 2] = *(unsigned int *)(v8 + 8 * v7 - 8); /*0x4a119c*/
          v5[2 * v7 - 1] = *(unsigned int *)(v8 + 8 * v7 - 4); /*0x4a11a4*/
        }
        while ( v7 < m_8 ); /*0x4a11a8*/
        v4 = a3; /*0x4a11aa*/
      }
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4a11b9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v5;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = v4 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v9 = *((unsigned int *)this + 2);
    if ( v9 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v9;
  return 1; /*0x4a11ee*/
}
} // namespace gamemd

// 0x4A1200
namespace gamemd {
int VectorClass_UtagCONNECTDATA::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4a1205*/
  if ( m_10 <= 0 ) /*0x4a120b*/
    return -1; /*0x4a122c*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); i[1] != a2[1] || *i != *a2; i += 2 )
  {
    if ( ++result >= m_10 ) /*0x4a122a*/
      return -1; /*0x4a122a*/
  }
  return result; /*0x4a122f*/
}
} // namespace gamemd

// 0x4A1330
void VectorClass_flat::CleanupTyped()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(this->Items); /*0x4a1343*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
// 0x4A14A0
namespace gamemd {
VectorClass_flat *  VectorClass_UtagCONNECTDATA::QueryInterface(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_tagCONNECTDATA;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4a14b8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4a14d8*/
    RA2_OPDEL(this); /*0x4a14db*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4A7FE0
char VectorClass_flat::AppendCopy(DynamicVector * aP1)
{
  int Capacity; // ecx
  int result; // eax
  int Items; // edx

    v3 = *((unsigned int *)this + 8);
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
      v6 = *((unsigned int *)this + 16);
      v7 = *((unsigned int *)this + 4);
      *((unsigned int *)this + 16) = v6 + 1;
    *(unsigned int *)(Items + 4 * result) = *aP1; /*0x4a8028*/
    IDA_LOBYTE(result) = 1; /*0x4a802b*/
  }
  else
  {
    IDA_LOBYTE(result) = 0; /*0x4a800f*/
  }
  return result; /*0x4a8011*/
}
// 0x4B9C30
namespace gamemd {
int VectorClass_ptr_CrossDissolveEffect::GetItem(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4B9C90
namespace gamemd {
int VectorClass_ptr_CrossDissolveEffect::Clear(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4B9CA0
namespace gamemd {
char VectorClass_ptr_CrossDissolveEffect::FindItemIndex(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4b9cad*/
  {
    v3 = 0; /*0x4b9caf*/
    if ( m_8 <= 0 ) /*0x4b9cb3*/
      return 1; /*0x4b9cd3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4b9cbb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4b9cc4*/
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

// 0x4B9CE0
namespace gamemd {
char VectorClass_ptr_CrossDissolveEffect::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  void *Capacity; // ecx
  int i; // eax

  if ( a2 ) /*0x4b9cec*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4b9cfc*/
      v4 = a3; /*0x4b9d12*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4b9d0e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4b9d1a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < (int)Capacity ) /*0x4b9d31*/
          Capacity = (void *)a2; /*0x4b9d33*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4b9d3e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(this->Items); /*0x4b9d56*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4b9d78*/
    }
    else
    {
      return 0; /*0x4b9d1f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4b9d88*/
  }
}
} // namespace gamemd

// 0x4B9D90
namespace gamemd {
void VectorClass_ptr_CrossDissolveEffect::Destroy()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(this->Items); /*0x4b9da3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4B9DC0
namespace gamemd {
int VectorClass_ptr_CrossDissolveEffect::FindItemIndex_0(unsigned int * a2)
{
  int result; // eax
  void *Capacity; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4b9dc8*/
    v3 = *((unsigned int *)this + 32);
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
unsigned int VectorClass_ptr_CrossDissolveEffect::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4b9e07*/
}
} // namespace gamemd

// 0x4B9F00
namespace gamemd {
char VectorClass_ptr_CrossDissolveEffect::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4b9f0d*/
  {
    v3 = 0; /*0x4b9f0f*/
    if ( m_8 <= 0 ) /*0x4b9f13*/
      return 1; /*0x4b9f33*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4b9f1b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4b9f24*/
    {
      ++v3; /*0x4b9f26*/
      ++v4; /*0x4b9f27*/
      if ( v3 >= m_8 ) /*0x4b9f2c*/
        return 1; /*0x4b9f2c*/
    }
  }
  return 0; /*0x4b9f2e*/
}
} // namespace gamemd

// 0x4B9F40
namespace gamemd {
char VectorClass_ptr_CrossDissolveEffect::Remove(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4b9f4c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4b9f5c*/
      v4 = a3; /*0x4b9f72*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4b9f6e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4b9f7a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4b9f91*/
          m_8 = a2; /*0x4b9f93*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4b9f9e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4b9fb6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4b9fd8*/
    }
    else
    {
      return 0; /*0x4b9f7f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4b9fe8*/
  }
}
} // namespace gamemd

// 0x4B9FF0
namespace gamemd {
void VectorClass_ptr_CrossDissolveEffect::ddtor()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4ba003*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4BA020
namespace gamemd {
int VectorClass_ptr_CrossDissolveEffect::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4ba028*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4ba031*/
  if ( m_8 <= 0 ) /*0x4ba035*/
    return -1; /*0x4ba04c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4ba03b*/
  {
    if ( ++result >= m_8 ) /*0x4ba04a*/
      return -1; /*0x4ba04a*/
  }
  return result; /*0x4ba02a*/
}
} // namespace gamemd

// 0x4BA060
namespace gamemd {
unsigned int VectorClass_ptr_CrossDissolveEffect::Get(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4ba067*/
}
} // namespace gamemd

// 0x4BA1B0
namespace gamemd {
unsigned int * VectorClass_ptr_CrossDissolveEffect::loc_4BA1B0(unsigned int * Block, char a2)
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = &off_7E8500;
    if ( v3 && *((char*)(Block) + 13) )
  {
    RA2_OPDEL(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    RA2_OPDEL(Block);
    return Block;
}
} // namespace gamemd

// 0x4BA250
namespace gamemd {
VectorClass_flat * VectorClass_ptr_CrossDissolveEffect::Add(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_CrossDissolveEffect;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4ba268*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4ba288*/
    RA2_OPDEL(Block); /*0x4ba28b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4C2C40
namespace gamemd {
void VectorClass_ptr_EBolt::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4c2c46*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4c2c56*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4C2C70
namespace gamemd {
unsigned int VectorClass_ptr_EBolt::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4c2c77*/
}
} // namespace gamemd

// 0x4C2C90
namespace gamemd {
int VectorClass_ptr_EBolt::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4C2CA0
namespace gamemd {
char VectorClass_ptr_EBolt::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4c2cad*/
  {
    v3 = 0; /*0x4c2caf*/
    if ( m_8 <= 0 ) /*0x4c2cb3*/
      return 1; /*0x4c2cd3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4c2cbb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4c2cc4*/
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

// 0x4C2CE0
namespace gamemd {
char VectorClass_ptr_EBolt::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4c2cec*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4c2cfc*/
      v4 = a3; /*0x4c2d12*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4c2d0e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4c2d1a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4c2d31*/
          m_8 = a2; /*0x4c2d33*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4c2d3e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4c2d56*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4c2d78*/
    }
    else
    {
      return 0; /*0x4c2d1f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4c2d88*/
  }
}
} // namespace gamemd

// 0x4C2D90
namespace gamemd {
void VectorClass_ptr_EBolt::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4c2da3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4C2DC0
namespace gamemd {
int VectorClass_ptr_EBolt::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4c2dc8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4c2dd1*/
  if ( m_8 <= 0 ) /*0x4c2dd5*/
    return -1; /*0x4c2dec*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4c2ddb*/
  {
    if ( ++result >= m_8 ) /*0x4c2dea*/
      return -1; /*0x4c2dea*/
  }
  return result; /*0x4c2dca*/
}
} // namespace gamemd

// 0x4C2E00
namespace gamemd {
unsigned int VectorClass_ptr_EBolt::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4c2e07*/
}
} // namespace gamemd

// 0x4C2E20
namespace gamemd {
char VectorClass_ptr_EBolt::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4c2e2c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4c2e38*/
      v4 = a3; /*0x4c2e4e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4c2e4a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4c2e56*/
      return 0; /*0x4c2eca*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4c2e64*/
        m_8 = a2; /*0x4c2e66*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4c2e71*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4c2e89*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4c2ebe*/
}
} // namespace gamemd

// 0x4C2ED0
namespace gamemd {
int VectorClass_ptr_EBolt::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4c2ed3*/
  if ( m_10 <= 0 ) /*0x4c2ed8*/
    return -1; /*0x4c2eef*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4c2eed*/
      return -1; /*0x4c2eed*/
  }
  return result; /*0x4c2ef2*/
}
} // namespace gamemd

// 0x4C2F00
namespace gamemd {
VectorClass_flat * VectorClass_ptr_EBolt::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_EBolt;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4c2f18*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4c2f38*/
    RA2_OPDEL(Block); /*0x4c2f3b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4C2F50
namespace gamemd {
DynamicVector * VectorClass_ptr_EBolt::Constructor_VectorClass_EBolt___(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_EBolt;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4c2f68*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4c2f88*/
    RA2_OPDEL(Block); /*0x4c2f8b*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x4C49A0
namespace gamemd {
void VectorClass_ptr_EgoClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4c49a6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4c49b6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4C49D0
namespace gamemd {
unsigned int VectorClass_ptr_EgoClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4c49d7*/
}
} // namespace gamemd

// 0x4C49F0
namespace gamemd {
int VectorClass_ptr_EgoClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4C4A00
namespace gamemd {
char VectorClass_ptr_EgoClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4c4a0d*/
  {
    v3 = 0; /*0x4c4a0f*/
    if ( m_8 <= 0 ) /*0x4c4a13*/
      return 1; /*0x4c4a33*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4c4a1b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4c4a24*/
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

// 0x4C4A40
namespace gamemd {
char VectorClass_ptr_EgoClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4c4a4c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4c4a5c*/
      v4 = a3; /*0x4c4a72*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4c4a6e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4c4a7a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4c4a91*/
          m_8 = a2; /*0x4c4a93*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4c4a9e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4c4ab6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4c4ad8*/
    }
    else
    {
      return 0; /*0x4c4a7f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4c4ae8*/
  }
}
} // namespace gamemd

// 0x4C4AF0
namespace gamemd {
void VectorClass_ptr_EgoClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4c4b03*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4C4B20
namespace gamemd {
int VectorClass_ptr_EgoClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4c4b28*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4c4b31*/
  if ( m_8 <= 0 ) /*0x4c4b35*/
    return -1; /*0x4c4b4c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4c4b3b*/
  {
    if ( ++result >= m_8 ) /*0x4c4b4a*/
      return -1; /*0x4c4b4a*/
  }
  return result; /*0x4c4b2a*/
}
} // namespace gamemd

// 0x4C4B60
namespace gamemd {
unsigned int VectorClass_ptr_EgoClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4c4b67*/
}
} // namespace gamemd

// 0x4C4B80
namespace gamemd {
char VectorClass_ptr_EgoClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4c4b8c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4c4b98*/
      v4 = a3; /*0x4c4bae*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4c4baa*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4c4bb6*/
      return 0; /*0x4c4c2a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4c4bc4*/
        m_8 = a2; /*0x4c4bc6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4c4bd1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4c4be9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4c4c1e*/
}
} // namespace gamemd

// 0x4C4C30
namespace gamemd {
int VectorClass_ptr_EgoClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4c4c33*/
  if ( m_10 <= 0 ) /*0x4c4c38*/
    return -1; /*0x4c4c4f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4c4c4d*/
      return -1; /*0x4c4c4d*/
  }
  return result; /*0x4c4c52*/
}
} // namespace gamemd

// 0x4C4C60
namespace gamemd {
VectorClass_flat * VectorClass_ptr_EgoClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_EgoClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4c4c78*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4c4c98*/
    RA2_OPDEL(Block); /*0x4c4c9b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4C4CB0
namespace gamemd {
DynamicVector * VectorClass_ptr_EgoClass::Constructor_VectorClass_EgoClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_EgoClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4c4cc8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4c4ce8*/
    RA2_OPDEL(Block); /*0x4c4ceb*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x4C5B60
namespace gamemd {
void VectorClass_ptr_EMPulseClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4c5b66*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4c5b76*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4C5B90
namespace gamemd {
unsigned int VectorClass_ptr_EMPulseClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4c5b97*/
}
} // namespace gamemd

// 0x4C5BB0
namespace gamemd {
int VectorClass_ptr_EMPulseClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4C5BC0
namespace gamemd {
char VectorClass_ptr_EMPulseClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4c5bcd*/
  {
    v3 = 0; /*0x4c5bcf*/
    if ( m_8 <= 0 ) /*0x4c5bd3*/
      return 1; /*0x4c5bf3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4c5bdb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4c5be4*/
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

// 0x4C5C00
namespace gamemd {
char VectorClass_ptr_EMPulseClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4c5c0c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4c5c1c*/
      v4 = a3; /*0x4c5c32*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4c5c2e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4c5c3a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4c5c51*/
          m_8 = a2; /*0x4c5c53*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4c5c5e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4c5c76*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4c5c98*/
    }
    else
    {
      return 0; /*0x4c5c3f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4c5ca8*/
  }
}
} // namespace gamemd

// 0x4C5CB0
namespace gamemd {
void VectorClass_ptr_EMPulseClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4c5cc3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4C5CE0
namespace gamemd {
int VectorClass_ptr_EMPulseClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4c5ce8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4c5cf1*/
  if ( m_8 <= 0 ) /*0x4c5cf5*/
    return -1; /*0x4c5d0c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4c5cfb*/
  {
    if ( ++result >= m_8 ) /*0x4c5d0a*/
      return -1; /*0x4c5d0a*/
  }
  return result; /*0x4c5cea*/
}
} // namespace gamemd

// 0x4C5D20
namespace gamemd {
unsigned int VectorClass_ptr_EMPulseClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4c5d27*/
}
} // namespace gamemd

// 0x4C5D40
namespace gamemd {
char VectorClass_ptr_EMPulseClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4c5d4c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4c5d58*/
      v4 = a3; /*0x4c5d6e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4c5d6a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4c5d76*/
      return 0; /*0x4c5dea*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4c5d84*/
        m_8 = a2; /*0x4c5d86*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4c5d91*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4c5da9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4c5dde*/
}
} // namespace gamemd

// 0x4C5DF0
namespace gamemd {
int VectorClass_ptr_EMPulseClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4c5df3*/
  if ( m_10 <= 0 ) /*0x4c5df8*/
    return -1; /*0x4c5e0f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4c5e0d*/
      return -1; /*0x4c5e0d*/
  }
  return result; /*0x4c5e12*/
}
} // namespace gamemd

// 0x4C5E20
namespace gamemd {
VectorClass_flat * VectorClass_ptr_EMPulseClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_EMPulseClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4c5e38*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4c5e58*/
    RA2_OPDEL(Block); /*0x4c5e5b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4C5E70
namespace gamemd {
DynamicVector * VectorClass_ptr_EMPulseClass::Constructor_VectorClass_EMPulseClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_EMPulseClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4c5e88*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4c5ea8*/
    RA2_OPDEL(Block); /*0x4c5eab*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x4E0250
namespace gamemd {
unsigned int * VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::Clear(unsigned int * v4, int a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx

    v3 = *((unsigned int *)this + 4);
  v4 = *(unsigned int *)(v3 + 8 * a3); /*0x4e0257*/
  v5 = v3 + 8 * a3; /*0x4e025a*/
  *v4 = v4; /*0x4e0261*/
  v4[1] = *(unsigned int *)(v5 + 4); /*0x4e0266*/
  return v4; /*0x4e0269*/
}
} // namespace gamemd

// 0x4E07E0
namespace gamemd {
char VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::AddRef(int v4)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  unsigned int *v5; // eax
  unsigned int *v6; // ecx
  int v7; // edx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(v4 + 8) ) /*0x4e07f0*/
  {
    v3 = 0; /*0x4e07f2*/
    if ( m_8 <= 0 ) /*0x4e07f6*/
      return 1; /*0x4e0826*/
    v4 = *(unsigned int *)(v4 + 4); /*0x4e07f8*/
        v5 = (unsigned int *)*((unsigned int *)this + 4);
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
} // namespace gamemd

// 0x4E0950
namespace gamemd {
void VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::ddtor()
{
  int v2; // eax

    v2 = *((unsigned int *)this + 16);
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL((void *)(v2 - 4)); /*0x4e096e*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E0990
namespace gamemd {
void _VectorClass_V_DistributionObject_PAVCellClass_DiscreteDistributionClass_VCellClass::VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass_GetSize()
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4e099e*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4e09a7*/
  if ( m_8 <= 0 ) /*0x4e09ab*/
    return -1; /*0x4e09cc*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x4e09b1*/
  {
    if ( ++result >= m_8 ) /*0x4e09ca*/
      return -1; /*0x4e09ca*/
  }
  return result; /*0x4e099b*/
}
}
// 0x4E09E0
namespace gamemd {
unsigned int VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 3;
  else
    return 0; /*0x4e09e7*/
}
} // namespace gamemd

// 0x4E0AB0
namespace gamemd {
void VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::Destroy()
{
  int v2; // eax

    v2 = *((unsigned int *)this + 16);
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL((void *)(v2 - 4)); /*0x4e0ad1*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E0AF0
namespace gamemd {
unsigned int VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 3;
  else
    return 0; /*0x4e0af7*/
}
} // namespace gamemd

// 0x4E0CA0
namespace gamemd {
int VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4e0ca5*/
  if ( m_10 <= 0 ) /*0x4e0cab*/
    return -1; /*0x4e0ccc*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2 || i[1] != a2[1]; i += 2 )
  {
    if ( ++result >= m_10 ) /*0x4e0cca*/
      return -1; /*0x4e0cca*/
  }
  return result; /*0x4e0ccf*/
}
}
// 0x4E0D80
namespace gamemd {
VectorClass_flat * VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::QueryInterface(char a2)
{
  int v3; // eax

    v3 = *(Block + 1);
    *Block = &vt_VectorClass_DiscreteDistributionClass_CellClass_DistributionObject_CellClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL((void *)(v3 - 4)); /*0x4e0da3*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4e0dc3*/
    RA2_OPDEL(); /*0x4e0dc6*/
  return this; /*0x4e0dd0*/
}
} // namespace gamemd

// 0x4E0E20
namespace gamemd {
DynamicVector * VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::Constructor(char a2)
{
  int v3; // eax

    v3 = *(Block + 1);
    *Block = &vt_VectorClass_DiscreteDistributionClass_CellClass_DistributionObject_CellClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL((void *)(v3 - 4)); /*0x4e0e43*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4e0e63*/
    RA2_OPDEL(); /*0x4e0e66*/
  return this; /*0x4e0e70*/
}
} // namespace gamemd

// 0x4E8340
namespace gamemd {
int VectorClass_Building::Count(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E8350
namespace gamemd {
void VectorClass_ptr_SuperClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e8356*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e8366*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E8380
namespace gamemd {
unsigned int VectorClass_ptr_SuperClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e8387*/
}
} // namespace gamemd

// 0x4E83A0
namespace gamemd {
int VectorClass_ptr_SuperClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E83B0
namespace gamemd {
void VectorClass_ptr_AITriggerTypeClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e83b6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e83c6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E83E0
namespace gamemd {
unsigned int VectorClass_ptr_AITriggerTypeClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e83e7*/
}
} // namespace gamemd

// 0x4E8400
namespace gamemd {
int VectorClass_ptr_AITriggerTypeClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E8410
namespace gamemd {
void VectorClass_ptr_BuildingLightClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e8416*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e8426*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E8440
namespace gamemd {
unsigned int VectorClass_ptr_BuildingLightClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e8447*/
}
} // namespace gamemd

// 0x4E8460
namespace gamemd {
int VectorClass_ptr_BuildingLightClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E84D0
namespace gamemd {
void VectorClass_ptr_TeamClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e84d6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e84e6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E8500
namespace gamemd {
unsigned int VectorClass_ptr_TeamClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e8507*/
}
} // namespace gamemd

// 0x4E8520
namespace gamemd {
int VectorClass_ptr_TeamClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E8530
namespace gamemd {
int VectorClass_ptr_ThemeControl::Clear(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E8540
namespace gamemd {
void VectorClass_ptr_AITriggerTypeClass::Destroy_0()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e8546*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e8556*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E8570
namespace gamemd {
unsigned int VectorClass_ptr_AITriggerTypeClass::GetItemIndex_0(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e8577*/
}
} // namespace gamemd

// 0x4E8590
namespace gamemd {
int VectorClass_ptr_TriggerClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E85A0
namespace gamemd {
void VectorClass_ptr_AITriggerTypeClass::Destroy_1()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e85a6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e85b6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E85D0
namespace gamemd {
unsigned int VectorClass_ptr_AITriggerTypeClass::GetItemIndex_1(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e85d7*/
}
} // namespace gamemd

// 0x4E85F0
namespace gamemd {
int VectorClass_ptr_TriggerTypeClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E8600
namespace gamemd {
void VectorClass_ptr_TubeClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e8606*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e8616*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E8630
namespace gamemd {
unsigned int VectorClass_ptr_TubeClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e8637*/
}
} // namespace gamemd

// 0x4E8650
namespace gamemd {
int VectorClass_ptr_TubeClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E8660
namespace gamemd {
void VectorClass_ptr_BuildingLightClass::Destroy_0()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e8666*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e8676*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E8690
namespace gamemd {
unsigned int VectorClass_ptr_BuildingLightClass::GetItemIndex_0(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e8697*/
}
} // namespace gamemd

// 0x4E86B0
namespace gamemd {
int VectorClass_ptr_ParticleSystemClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E86C0
namespace gamemd {
void VectorClass_ptr_TubeClass::Destroy_0()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e86c6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e86d6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E86F0
namespace gamemd {
unsigned int VectorClass_ptr_TubeClass::GetItemIndex_0(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e86f7*/
}
} // namespace gamemd

// 0x4E8710
namespace gamemd {
int VectorClass_ptr_WaveClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E8720
namespace gamemd {
void VectorClass_ptr_TubeClass::Destroy_1()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e8726*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e8736*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E8750
namespace gamemd {
unsigned int VectorClass_ptr_TubeClass::GetItemIndex_1(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e8757*/
}
} // namespace gamemd

// 0x4E8770
namespace gamemd {
int VectorClass_ptr_OverlayClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E8890
namespace gamemd {
int VectorClass_ptr_AircraftClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E88A0
namespace gamemd {
void VectorClass_ptr_UnitClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e88a6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e88b6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E88D0
namespace gamemd {
unsigned int VectorClass_ptr_UnitClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e88d7*/
}
} // namespace gamemd

// 0x4E88F0
namespace gamemd {
int VectorClass_ptr_UnitClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E8900
namespace gamemd {
void VectorClass_ptr_UnitClass::Destroy_0()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e8906*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e8916*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E8930
namespace gamemd {
unsigned int VectorClass_ptr_UnitClass::GetItemIndex_0(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e8937*/
}
} // namespace gamemd

// 0x4E8950
namespace gamemd {
int VectorClass_ptr_HouseClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E8960
namespace gamemd {
void VectorClass_ptr_TeamClass::Destroy_0()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e8966*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e8976*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E8990
namespace gamemd {
unsigned int VectorClass_ptr_TeamClass::GetItemIndex_0(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e8997*/
}
} // namespace gamemd

// 0x4E89B0
namespace gamemd {
int VectorClass_ptr_AnimClass::Clear(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E89C0
namespace gamemd {
void VectorClass_ptr_TeamClass::Destroy_1()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e89c6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e89d6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E89F0
namespace gamemd {
unsigned int VectorClass_ptr_TeamClass::GetItemIndex_1(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e89f7*/
}
} // namespace gamemd

// 0x4E8A10
namespace gamemd {
int VectorClass_ptr_FactoryClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E8A20
namespace gamemd {
void VectorClass_ptr_CampaignClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e8a26*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e8a36*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E8A50
namespace gamemd {
unsigned int VectorClass_ptr_CampaignClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e8a57*/
}
} // namespace gamemd

// 0x4E8A70
namespace gamemd {
int VectorClass_ptr_CampaignClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E8A80
namespace gamemd {
void VectorClass_ptr_CampaignClass::Destroy_0()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e8a86*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e8a96*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E8AB0
namespace gamemd {
unsigned int VectorClass_ptr_CampaignClass::GetItemIndex_0(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e8ab7*/
}
} // namespace gamemd

// 0x4E8AD0
namespace gamemd {
int VectorClass_ptr_SideClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E8AE0
namespace gamemd {
void VectorClass_ptr_HouseTypeClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e8ae6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e8af6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E8B10
namespace gamemd {
unsigned int VectorClass_ptr_HouseTypeClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e8b17*/
}
} // namespace gamemd

// 0x4E8B30
namespace gamemd {
int VectorClass_ptr_HouseTypeClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E8B40
namespace gamemd {
void VectorClass_ptr_HouseTypeClass::Destroy_0()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e8b46*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e8b56*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E8B70
namespace gamemd {
unsigned int VectorClass_ptr_HouseTypeClass::GetItemIndex_0(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e8b77*/
}
} // namespace gamemd

// 0x4E8B90
namespace gamemd {
int VectorClass_ptr_TaskForceClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E8BA0
namespace gamemd {
void VectorClass_ptr_HouseTypeClass::Destroy_1()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e8ba6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e8bb6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E8BD0
namespace gamemd {
unsigned int VectorClass_ptr_HouseTypeClass::GetItemIndex_1(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e8bd7*/
}
} // namespace gamemd

// 0x4E8BF0
namespace gamemd {
int VectorClass_ptr_TeamTypeClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E8C00
namespace gamemd {
void VectorClass_ptr_ScriptTypeClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e8c06*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e8c16*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E8C30
namespace gamemd {
unsigned int VectorClass_ptr_ScriptTypeClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e8c37*/
}
} // namespace gamemd

// 0x4E8C50
namespace gamemd {
int VectorClass_ptr_ScriptTypeClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E8C60
namespace gamemd {
void VectorClass_ptr_ScriptTypeClass::Destroy_0()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e8c66*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e8c76*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E8C90
namespace gamemd {
unsigned int VectorClass_ptr_ScriptTypeClass::GetItemIndex_0(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e8c97*/
}
} // namespace gamemd

// 0x4E8CB0
namespace gamemd {
int VectorClass_ptr_OverlayTypeClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E8CC0
namespace gamemd {
void VectorClass_ptr_SmudgeTypeClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e8cc6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e8cd6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E8CF0
namespace gamemd {
unsigned int VectorClass_ptr_SmudgeTypeClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e8cf7*/
}
} // namespace gamemd

// 0x4E8D10
namespace gamemd {
int VectorClass_ptr_SmudgeTypeClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E8D20
namespace gamemd {
void VectorClass_ptr_SmudgeTypeClass::Destroy_0()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e8d26*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e8d36*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E8D50
namespace gamemd {
unsigned int VectorClass_ptr_SmudgeTypeClass::GetItemIndex_0(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e8d57*/
}
} // namespace gamemd

// 0x4E8D70
namespace gamemd {
int VectorClass_ptr_TerrainTypeClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E8D80
namespace gamemd {
void VectorClass_ptr_SmudgeTypeClass::Destroy_1()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e8d86*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e8d96*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E8DB0
namespace gamemd {
unsigned int VectorClass_ptr_SmudgeTypeClass::GetItemIndex_1(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e8db7*/
}
} // namespace gamemd

// 0x4E8DD0
namespace gamemd {
int VectorClass_ptr_BuildingTypeClass::SaveToINI(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E8DE0
namespace gamemd {
void VectorClass_ptr_AircraftTypeClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e8de6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e8df6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E8E10
namespace gamemd {
unsigned int VectorClass_ptr_AircraftTypeClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e8e17*/
}
} // namespace gamemd

// 0x4E8E30
namespace gamemd {
int VectorClass_ptr_AircraftTypeClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E8E40
namespace gamemd {
void VectorClass_ptr_AircraftTypeClass::Destroy_0()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e8e46*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e8e56*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E8E70
namespace gamemd {
unsigned int VectorClass_ptr_AircraftTypeClass::GetItemIndex_0(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e8e77*/
}
} // namespace gamemd

// 0x4E8E90
namespace gamemd {
int VectorClass_ptr_UnitTypeClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E8EA0
namespace gamemd {
void VectorClass_ptr_AnimTypeClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e8ea6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e8eb6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E8ED0
namespace gamemd {
unsigned int VectorClass_ptr_AnimTypeClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e8ed7*/
}
} // namespace gamemd

// 0x4E8EF0
namespace gamemd {
int VectorClass_ptr_AnimTypeClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E8F00
namespace gamemd {
void VectorClass_ptr_AnimTypeClass::Destroy_0()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e8f06*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e8f16*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E8F30
namespace gamemd {
unsigned int VectorClass_ptr_AnimTypeClass::GetItemIndex_0(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e8f37*/
}
} // namespace gamemd

// 0x4E8F50
namespace gamemd {
int VectorClass_ptr_InfantryTypeClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E8F60
namespace gamemd {
void VectorClass_ptr_AnimTypeClass::Destroy_1()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e8f66*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e8f76*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E8F90
namespace gamemd {
unsigned int VectorClass_ptr_AnimTypeClass::GetItemIndex_1(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e8f97*/
}
} // namespace gamemd

// 0x4E8FB0
namespace gamemd {
int VectorClass_ptr_BulletTypeClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E8FC0
namespace gamemd {
void VectorClass_ptr_VoxelAnimTypeClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e8fc6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e8fd6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E8FF0
namespace gamemd {
unsigned int VectorClass_ptr_VoxelAnimTypeClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e8ff7*/
}
} // namespace gamemd

// 0x4E9010
namespace gamemd {
int VectorClass_ptr_VoxelAnimTypeClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E9020
namespace gamemd {
void VectorClass_ptr_VoxelAnimTypeClass::Destroy_0()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e9026*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e9036*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E9050
namespace gamemd {
unsigned int VectorClass_ptr_VoxelAnimTypeClass::GetItemIndex_0(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e9057*/
}
} // namespace gamemd

// 0x4E9070
namespace gamemd {
int VectorClass_ptr_IsometricTileTypeClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E9080
namespace gamemd {
void VectorClass_ptr_ParticleTypeClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e9086*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e9096*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E90B0
namespace gamemd {
unsigned int VectorClass_ptr_ParticleTypeClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e90b7*/
}
} // namespace gamemd

// 0x4E90D0
namespace gamemd {
int VectorClass_ptr_ParticleTypeClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E90E0
namespace gamemd {
void VectorClass_ptr_ParticleTypeClass::Destroy_0()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e90e6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e90f6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E9110
namespace gamemd {
unsigned int VectorClass_ptr_ParticleTypeClass::GetItemIndex_0(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e9117*/
}
} // namespace gamemd

// 0x4E9130
namespace gamemd {
int VectorClass_ptr_ParticleSystemTypeClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E9140
namespace gamemd {
void VectorClass_ptr_ParticleTypeClass::Destroy_1()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e9146*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e9156*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E9170
namespace gamemd {
unsigned int VectorClass_ptr_ParticleTypeClass::GetItemIndex_1(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e9177*/
}
} // namespace gamemd

// 0x4E9190
namespace gamemd {
int VectorClass_ptr_SuperWeaponTypeClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E91A0
namespace gamemd {
void VectorClass_ptr_SuperClass::Destroy_0()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x4e91a6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4e91b6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E91D0
namespace gamemd {
unsigned int VectorClass_ptr_SuperClass::GetItemIndex_0(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e91d7*/
}
} // namespace gamemd

// 0x4E91F0
namespace gamemd {
int VectorClass_ptr_AbstractTypeClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4E9460
namespace gamemd {
char VectorClass_Building::Get(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4e946d*/
  {
    v3 = 0; /*0x4e946f*/
    if ( m_8 <= 0 ) /*0x4e9473*/
      return 1; /*0x4e9493*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4e947b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4e9484*/
    {
      ++v3; /*0x4e9486*/
      ++v4; /*0x4e9487*/
      if ( v3 >= m_8 ) /*0x4e948c*/
        return 1; /*0x4e948c*/
    }
  }
  return 0; /*0x4e948e*/
}
} // namespace gamemd

// 0x4E94A0
namespace gamemd {
char VectorClass_Building::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4e94ac*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4e94bc*/
      v4 = a3; /*0x4e94d2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4e94ce*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4e94da*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4e94f1*/
          m_8 = a2; /*0x4e94f3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4e94fe*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4e9516*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4e9538*/
    }
    else
    {
      return 0; /*0x4e94df*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4e9548*/
  }
}
} // namespace gamemd

// 0x4E9550
namespace gamemd {
void VectorClass_Building::Set()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4e9563*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E9580
namespace gamemd {
int VectorClass_Building::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4e9588*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4e9591*/
  if ( m_8 <= 0 ) /*0x4e9595*/
    return -1; /*0x4e95ac*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4e959b*/
  {
    if ( ++result >= m_8 ) /*0x4e95aa*/
      return -1; /*0x4e95aa*/
  }
  return result; /*0x4e958a*/
}
} // namespace gamemd

// 0x4E95C0
namespace gamemd {
unsigned int VectorClass_Building::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e95c7*/
}
} // namespace gamemd

// 0x4E96C0
namespace gamemd {
char VectorClass_ptr_SuperClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4e96cd*/
  {
    v3 = 0; /*0x4e96cf*/
    if ( m_8 <= 0 ) /*0x4e96d3*/
      return 1; /*0x4e96f3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4e96db*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4e96e4*/
    {
      ++v3; /*0x4e96e6*/
      ++v4; /*0x4e96e7*/
      if ( v3 >= m_8 ) /*0x4e96ec*/
        return 1; /*0x4e96ec*/
    }
  }
  return 0; /*0x4e96ee*/
}
} // namespace gamemd

// 0x4E9700
namespace gamemd {
char VectorClass_ptr_SuperClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4e970c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4e971c*/
      v4 = a3; /*0x4e9732*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4e972e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4e973a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4e9751*/
          m_8 = a2; /*0x4e9753*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4e975e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4e9776*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4e9798*/
    }
    else
    {
      return 0; /*0x4e973f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4e97a8*/
  }
}
} // namespace gamemd

// 0x4E97B0
namespace gamemd {
void VectorClass_ptr_SuperClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4e97c3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E97E0
namespace gamemd {
int VectorClass_ptr_SuperClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4e97e8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4e97f1*/
  if ( m_8 <= 0 ) /*0x4e97f5*/
    return -1; /*0x4e980c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4e97fb*/
  {
    if ( ++result >= m_8 ) /*0x4e980a*/
      return -1; /*0x4e980a*/
  }
  return result; /*0x4e97ea*/
}
} // namespace gamemd

// 0x4E9820
namespace gamemd {
unsigned int VectorClass_ptr_SuperClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e9827*/
}
} // namespace gamemd

// 0x4E98F0
namespace gamemd {
int VectorClass_ptr_SuperClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4e98f3*/
  if ( m_10 <= 0 ) /*0x4e98f8*/
    return -1; /*0x4e990f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4e990d*/
      return -1; /*0x4e990d*/
  }
  return result; /*0x4e9912*/
}
} // namespace gamemd

// 0x4E9920
namespace gamemd {
char VectorClass_ptr_AITriggerTypeClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4e992d*/
  {
    v3 = 0; /*0x4e992f*/
    if ( m_8 <= 0 ) /*0x4e9933*/
      return 1; /*0x4e9953*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4e993b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4e9944*/
    {
      ++v3; /*0x4e9946*/
      ++v4; /*0x4e9947*/
      if ( v3 >= m_8 ) /*0x4e994c*/
        return 1; /*0x4e994c*/
    }
  }
  return 0; /*0x4e994e*/
}
} // namespace gamemd

// 0x4E9960
namespace gamemd {
char VectorClass_ptr_AITriggerTypeClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4e996c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4e997c*/
      v4 = a3; /*0x4e9992*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4e998e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4e999a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4e99b1*/
          m_8 = a2; /*0x4e99b3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4e99be*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4e99d6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4e99f8*/
    }
    else
    {
      return 0; /*0x4e999f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4e9a08*/
  }
}
} // namespace gamemd

// 0x4E9A10
namespace gamemd {
void VectorClass_ptr_AITriggerTypeClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4e9a23*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E9A40
namespace gamemd {
int VectorClass_ptr_AITriggerTypeClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4e9a48*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4e9a51*/
  if ( m_8 <= 0 ) /*0x4e9a55*/
    return -1; /*0x4e9a6c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4e9a5b*/
  {
    if ( ++result >= m_8 ) /*0x4e9a6a*/
      return -1; /*0x4e9a6a*/
  }
  return result; /*0x4e9a4a*/
}
} // namespace gamemd

// 0x4E9A80
namespace gamemd {
unsigned int VectorClass_ptr_AITriggerTypeClass::LoadTypeData(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e9a87*/
}
} // namespace gamemd

// 0x4E9AA0
namespace gamemd {
char VectorClass_ptr_AITriggerTypeClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4e9aac*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4e9ab8*/
      v4 = a3; /*0x4e9ace*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4e9aca*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4e9ad6*/
      return 0; /*0x4e9b4a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4e9ae4*/
        m_8 = a2; /*0x4e9ae6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4e9af1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4e9b09*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4e9b3e*/
}
} // namespace gamemd

// 0x4E9B50
namespace gamemd {
int VectorClass_ptr_AITriggerTypeClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4e9b53*/
  if ( m_10 <= 0 ) /*0x4e9b58*/
    return -1; /*0x4e9b6f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4e9b6d*/
      return -1; /*0x4e9b6d*/
  }
  return result; /*0x4e9b72*/
}
} // namespace gamemd

// 0x4E9B80
namespace gamemd {
char VectorClass_ptr_BuildingLightClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4e9b8d*/
  {
    v3 = 0; /*0x4e9b8f*/
    if ( m_8 <= 0 ) /*0x4e9b93*/
      return 1; /*0x4e9bb3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4e9b9b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4e9ba4*/
    {
      ++v3; /*0x4e9ba6*/
      ++v4; /*0x4e9ba7*/
      if ( v3 >= m_8 ) /*0x4e9bac*/
        return 1; /*0x4e9bac*/
    }
  }
  return 0; /*0x4e9bae*/
}
} // namespace gamemd

// 0x4E9BC0
namespace gamemd {
char VectorClass_ptr_BuildingLightClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4e9bcc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4e9bdc*/
      v4 = a3; /*0x4e9bf2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4e9bee*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4e9bfa*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4e9c11*/
          m_8 = a2; /*0x4e9c13*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4e9c1e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4e9c36*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4e9c58*/
    }
    else
    {
      return 0; /*0x4e9bff*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4e9c68*/
  }
}
} // namespace gamemd

// 0x4E9C70
namespace gamemd {
void VectorClass_ptr_BuildingLightClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4e9c83*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E9CA0
namespace gamemd {
int VectorClass_ptr_BuildingLightClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4e9ca8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4e9cb1*/
  if ( m_8 <= 0 ) /*0x4e9cb5*/
    return -1; /*0x4e9ccc*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4e9cbb*/
  {
    if ( ++result >= m_8 ) /*0x4e9cca*/
      return -1; /*0x4e9cca*/
  }
  return result; /*0x4e9caa*/
}
} // namespace gamemd

// 0x4E9CE0
namespace gamemd {
unsigned int VectorClass_ptr_BuildingLightClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e9ce7*/
}
} // namespace gamemd

// 0x4E9D00
namespace gamemd {
char VectorClass_ptr_BuildingLightClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4e9d0c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4e9d18*/
      v4 = a3; /*0x4e9d2e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4e9d2a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4e9d36*/
      return 0; /*0x4e9daa*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4e9d44*/
        m_8 = a2; /*0x4e9d46*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4e9d51*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4e9d69*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4e9d9e*/
}
} // namespace gamemd

// 0x4E9DB0
namespace gamemd {
int VectorClass_ptr_BuildingLightClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4e9db3*/
  if ( m_10 <= 0 ) /*0x4e9db8*/
    return -1; /*0x4e9dcf*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4e9dcd*/
      return -1; /*0x4e9dcd*/
  }
  return result; /*0x4e9dd2*/
}
} // namespace gamemd

// 0x4EA040
namespace gamemd {
char VectorClass_ptr_TeamClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4ea04d*/
  {
    v3 = 0; /*0x4ea04f*/
    if ( m_8 <= 0 ) /*0x4ea053*/
      return 1; /*0x4ea073*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4ea05b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4ea064*/
    {
      ++v3; /*0x4ea066*/
      ++v4; /*0x4ea067*/
      if ( v3 >= m_8 ) /*0x4ea06c*/
        return 1; /*0x4ea06c*/
    }
  }
  return 0; /*0x4ea06e*/
}
} // namespace gamemd

// 0x4EA080
namespace gamemd {
char VectorClass_ptr_TeamClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4ea08c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ea09c*/
      v4 = a3; /*0x4ea0b2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ea0ae*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4ea0ba*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4ea0d1*/
          m_8 = a2; /*0x4ea0d3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4ea0de*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4ea0f6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4ea118*/
    }
    else
    {
      return 0; /*0x4ea0bf*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4ea128*/
  }
}
} // namespace gamemd

// 0x4EA130
namespace gamemd {
void VectorClass_ptr_TeamClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4ea143*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4EA160
namespace gamemd {
int VectorClass_ptr_TeamClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4ea168*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4ea171*/
  if ( m_8 <= 0 ) /*0x4ea175*/
    return -1; /*0x4ea18c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4ea17b*/
  {
    if ( ++result >= m_8 ) /*0x4ea18a*/
      return -1; /*0x4ea18a*/
  }
  return result; /*0x4ea16a*/
}
} // namespace gamemd

// 0x4EA1A0
namespace gamemd {
unsigned int VectorClass_ptr_TeamClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4ea1a7*/
}
} // namespace gamemd

// 0x4EA1C0
namespace gamemd {
char VectorClass_ptr_TeamClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ea1cc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ea1d8*/
      v4 = a3; /*0x4ea1ee*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ea1ea*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4ea1f6*/
      return 0; /*0x4ea26a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4ea204*/
        m_8 = a2; /*0x4ea206*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4ea211*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4ea229*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4ea25e*/
}
} // namespace gamemd

// 0x4EA270
namespace gamemd {
int VectorClass_ptr_TeamClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4ea273*/
  if ( m_10 <= 0 ) /*0x4ea278*/
    return -1; /*0x4ea28f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4ea28d*/
      return -1; /*0x4ea28d*/
  }
  return result; /*0x4ea292*/
}
} // namespace gamemd

// 0x4EA2A0
namespace gamemd {
char VectorClass_ptr_ThemeControl::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4ea2ad*/
  {
    v3 = 0; /*0x4ea2af*/
    if ( m_8 <= 0 ) /*0x4ea2b3*/
      return 1; /*0x4ea2d3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4ea2bb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4ea2c4*/
    {
      ++v3; /*0x4ea2c6*/
      ++v4; /*0x4ea2c7*/
      if ( v3 >= m_8 ) /*0x4ea2cc*/
        return 1; /*0x4ea2cc*/
    }
  }
  return 0; /*0x4ea2ce*/
}
} // namespace gamemd

// 0x4EA2E0
namespace gamemd {
char VectorClass_ptr_ThemeControl::Remove(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4ea2ec*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ea2fc*/
      v4 = a3; /*0x4ea312*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ea30e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4ea31a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4ea331*/
          m_8 = a2; /*0x4ea333*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4ea33e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4ea356*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4ea378*/
    }
    else
    {
      return 0; /*0x4ea31f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4ea388*/
  }
}
} // namespace gamemd

// 0x4EA390
namespace gamemd {
void VectorClass_ptr_ThemeControl::ddtor()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4ea3a3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4EA3C0
namespace gamemd {
int VectorClass_ptr_ThemeControl::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4ea3c8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4ea3d1*/
  if ( m_8 <= 0 ) /*0x4ea3d5*/
    return -1; /*0x4ea3ec*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4ea3db*/
  {
    if ( ++result >= m_8 ) /*0x4ea3ea*/
      return -1; /*0x4ea3ea*/
  }
  return result; /*0x4ea3ca*/
}
} // namespace gamemd

// 0x4EA400
namespace gamemd {
unsigned int VectorClass_ptr_ThemeControl::Get(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4ea407*/
}
} // namespace gamemd

// 0x4EA420
namespace gamemd {
char VectorClass_ptr_TriggerClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4ea42d*/
  {
    v3 = 0; /*0x4ea42f*/
    if ( m_8 <= 0 ) /*0x4ea433*/
      return 1; /*0x4ea453*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4ea43b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4ea444*/
    {
      ++v3; /*0x4ea446*/
      ++v4; /*0x4ea447*/
      if ( v3 >= m_8 ) /*0x4ea44c*/
        return 1; /*0x4ea44c*/
    }
  }
  return 0; /*0x4ea44e*/
}
} // namespace gamemd

// 0x4EA460
namespace gamemd {
char VectorClass_ptr_TriggerClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4ea46c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ea47c*/
      v4 = a3; /*0x4ea492*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ea48e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4ea49a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4ea4b1*/
          m_8 = a2; /*0x4ea4b3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4ea4be*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4ea4d6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4ea4f8*/
    }
    else
    {
      return 0; /*0x4ea49f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4ea508*/
  }
}
} // namespace gamemd

// 0x4EA510
namespace gamemd {
void VectorClass_ptr_TriggerClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4ea523*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4EA540
namespace gamemd {
int VectorClass_ptr_TriggerClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4ea548*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4ea551*/
  if ( m_8 <= 0 ) /*0x4ea555*/
    return -1; /*0x4ea56c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4ea55b*/
  {
    if ( ++result >= m_8 ) /*0x4ea56a*/
      return -1; /*0x4ea56a*/
  }
  return result; /*0x4ea54a*/
}
} // namespace gamemd

// 0x4EA580
namespace gamemd {
unsigned int VectorClass_ptr_TriggerClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4ea587*/
}
} // namespace gamemd

// 0x4EA5A0
namespace gamemd {
char VectorClass_ptr_AITriggerTypeClass::SetCapacity_0(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ea5ac*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ea5b8*/
      v4 = a3; /*0x4ea5ce*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ea5ca*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4ea5d6*/
      return 0; /*0x4ea64a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4ea5e4*/
        m_8 = a2; /*0x4ea5e6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4ea5f1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4ea609*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4ea63e*/
}
} // namespace gamemd

// 0x4EA650
namespace gamemd {
int VectorClass_ptr_AITriggerTypeClass::FindItemIndex_0(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4ea653*/
  if ( m_10 <= 0 ) /*0x4ea658*/
    return -1; /*0x4ea66f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4ea66d*/
      return -1; /*0x4ea66d*/
  }
  return result; /*0x4ea672*/
}
} // namespace gamemd

// 0x4EA680
namespace gamemd {
char VectorClass_ptr_TriggerTypeClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4ea68d*/
  {
    v3 = 0; /*0x4ea68f*/
    if ( m_8 <= 0 ) /*0x4ea693*/
      return 1; /*0x4ea6b3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4ea69b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4ea6a4*/
    {
      ++v3; /*0x4ea6a6*/
      ++v4; /*0x4ea6a7*/
      if ( v3 >= m_8 ) /*0x4ea6ac*/
        return 1; /*0x4ea6ac*/
    }
  }
  return 0; /*0x4ea6ae*/
}
} // namespace gamemd

// 0x4EA6C0
namespace gamemd {
char VectorClass_ptr_TriggerTypeClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4ea6cc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ea6dc*/
      v4 = a3; /*0x4ea6f2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ea6ee*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4ea6fa*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4ea711*/
          m_8 = a2; /*0x4ea713*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4ea71e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4ea736*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4ea758*/
    }
    else
    {
      return 0; /*0x4ea6ff*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4ea768*/
  }
}
} // namespace gamemd

// 0x4EA770
namespace gamemd {
void VectorClass_ptr_TriggerTypeClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4ea783*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4EA7A0
namespace gamemd {
int VectorClass_ptr_TriggerTypeClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4ea7a8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4ea7b1*/
  if ( m_8 <= 0 ) /*0x4ea7b5*/
    return -1; /*0x4ea7cc*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4ea7bb*/
  {
    if ( ++result >= m_8 ) /*0x4ea7ca*/
      return -1; /*0x4ea7ca*/
  }
  return result; /*0x4ea7aa*/
}
} // namespace gamemd

// 0x4EA7E0
namespace gamemd {
unsigned int VectorClass_ptr_TriggerTypeClass::LoadTypeData(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4ea7e7*/
}
} // namespace gamemd

// 0x4EA800
namespace gamemd {
char VectorClass_ptr_AITriggerTypeClass::SetCapacity_1(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ea80c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ea818*/
      v4 = a3; /*0x4ea82e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ea82a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4ea836*/
      return 0; /*0x4ea8aa*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4ea844*/
        m_8 = a2; /*0x4ea846*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4ea851*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4ea869*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4ea89e*/
}
} // namespace gamemd

// 0x4EA8B0
namespace gamemd {
int VectorClass_ptr_AITriggerTypeClass::FindItemIndex_1(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4ea8b3*/
  if ( m_10 <= 0 ) /*0x4ea8b8*/
    return -1; /*0x4ea8cf*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4ea8cd*/
      return -1; /*0x4ea8cd*/
  }
  return result; /*0x4ea8d2*/
}
} // namespace gamemd

// 0x4EA8E0
namespace gamemd {
char VectorClass_ptr_TubeClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4ea8ed*/
  {
    v3 = 0; /*0x4ea8ef*/
    if ( m_8 <= 0 ) /*0x4ea8f3*/
      return 1; /*0x4ea913*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4ea8fb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4ea904*/
    {
      ++v3; /*0x4ea906*/
      ++v4; /*0x4ea907*/
      if ( v3 >= m_8 ) /*0x4ea90c*/
        return 1; /*0x4ea90c*/
    }
  }
  return 0; /*0x4ea90e*/
}
} // namespace gamemd

// 0x4EA920
namespace gamemd {
char VectorClass_ptr_TubeClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4ea92c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ea93c*/
      v4 = a3; /*0x4ea952*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ea94e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4ea95a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4ea971*/
          m_8 = a2; /*0x4ea973*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4ea97e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4ea996*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4ea9b8*/
    }
    else
    {
      return 0; /*0x4ea95f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4ea9c8*/
  }
}
} // namespace gamemd

// 0x4EA9D0
namespace gamemd {
void VectorClass_ptr_TubeClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4ea9e3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4EAA00
namespace gamemd {
int VectorClass_ptr_TubeClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4eaa08*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4eaa11*/
  if ( m_8 <= 0 ) /*0x4eaa15*/
    return -1; /*0x4eaa2c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4eaa1b*/
  {
    if ( ++result >= m_8 ) /*0x4eaa2a*/
      return -1; /*0x4eaa2a*/
  }
  return result; /*0x4eaa0a*/
}
} // namespace gamemd

// 0x4EAA40
namespace gamemd {
unsigned int VectorClass_ptr_TubeClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4eaa47*/
}
} // namespace gamemd

// 0x4EAA60
namespace gamemd {
char VectorClass_ptr_TubeClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4eaa6c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4eaa78*/
      v4 = a3; /*0x4eaa8e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4eaa8a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4eaa96*/
      return 0; /*0x4eab0a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4eaaa4*/
        m_8 = a2; /*0x4eaaa6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4eaab1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4eaac9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4eaafe*/
}
} // namespace gamemd

// 0x4EAB10
namespace gamemd {
int VectorClass_ptr_TubeClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4eab13*/
  if ( m_10 <= 0 ) /*0x4eab18*/
    return -1; /*0x4eab2f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4eab2d*/
      return -1; /*0x4eab2d*/
  }
  return result; /*0x4eab32*/
}
} // namespace gamemd

// 0x4EAB40
namespace gamemd {
char VectorClass_ptr_ParticleSystemClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4eab4d*/
  {
    v3 = 0; /*0x4eab4f*/
    if ( m_8 <= 0 ) /*0x4eab53*/
      return 1; /*0x4eab73*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4eab5b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4eab64*/
    {
      ++v3; /*0x4eab66*/
      ++v4; /*0x4eab67*/
      if ( v3 >= m_8 ) /*0x4eab6c*/
        return 1; /*0x4eab6c*/
    }
  }
  return 0; /*0x4eab6e*/
}
} // namespace gamemd

// 0x4EAB80
namespace gamemd {
char VectorClass_ptr_ParticleSystemClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4eab8c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4eab9c*/
      v4 = a3; /*0x4eabb2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4eabae*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4eabba*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4eabd1*/
          m_8 = a2; /*0x4eabd3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4eabde*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4eabf6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4eac18*/
    }
    else
    {
      return 0; /*0x4eabbf*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4eac28*/
  }
}
} // namespace gamemd

// 0x4EAC30
namespace gamemd {
void VectorClass_ptr_ParticleSystemClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4eac43*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4EAC60
namespace gamemd {
int VectorClass_ptr_ParticleSystemClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4eac68*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4eac71*/
  if ( m_8 <= 0 ) /*0x4eac75*/
    return -1; /*0x4eac8c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4eac7b*/
  {
    if ( ++result >= m_8 ) /*0x4eac8a*/
      return -1; /*0x4eac8a*/
  }
  return result; /*0x4eac6a*/
}
} // namespace gamemd

// 0x4EACA0
namespace gamemd {
unsigned int VectorClass_ptr_ParticleSystemClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4eaca7*/
}
} // namespace gamemd

// 0x4EACC0
namespace gamemd {
char VectorClass_ptr_BuildingLightClass::SetCapacity_0(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4eaccc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4eacd8*/
      v4 = a3; /*0x4eacee*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4eacea*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4eacf6*/
      return 0; /*0x4ead6a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4ead04*/
        m_8 = a2; /*0x4ead06*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4ead11*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4ead29*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4ead5e*/
}
} // namespace gamemd

// 0x4EAD70
namespace gamemd {
int VectorClass_ptr_BuildingLightClass::FindItemIndex_0(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4ead73*/
  if ( m_10 <= 0 ) /*0x4ead78*/
    return -1; /*0x4ead8f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4ead8d*/
      return -1; /*0x4ead8d*/
  }
  return result; /*0x4ead92*/
}
} // namespace gamemd

// 0x4EADA0
namespace gamemd {
char VectorClass_ptr_WaveClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4eadad*/
  {
    v3 = 0; /*0x4eadaf*/
    if ( m_8 <= 0 ) /*0x4eadb3*/
      return 1; /*0x4eadd3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4eadbb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4eadc4*/
    {
      ++v3; /*0x4eadc6*/
      ++v4; /*0x4eadc7*/
      if ( v3 >= m_8 ) /*0x4eadcc*/
        return 1; /*0x4eadcc*/
    }
  }
  return 0; /*0x4eadce*/
}
} // namespace gamemd

// 0x4EADE0
namespace gamemd {
char VectorClass_ptr_WaveClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4eadec*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4eadfc*/
      v4 = a3; /*0x4eae12*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4eae0e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4eae1a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4eae31*/
          m_8 = a2; /*0x4eae33*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4eae3e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4eae56*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4eae78*/
    }
    else
    {
      return 0; /*0x4eae1f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4eae88*/
  }
}
} // namespace gamemd

// 0x4EAE90
namespace gamemd {
void VectorClass_ptr_WaveClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4eaea3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4EAEC0
namespace gamemd {
int VectorClass_ptr_WaveClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4eaec8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4eaed1*/
  if ( m_8 <= 0 ) /*0x4eaed5*/
    return -1; /*0x4eaeec*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4eaedb*/
  {
    if ( ++result >= m_8 ) /*0x4eaeea*/
      return -1; /*0x4eaeea*/
  }
  return result; /*0x4eaeca*/
}
} // namespace gamemd

// 0x4EAF00
namespace gamemd {
unsigned int VectorClass_ptr_WaveClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4eaf07*/
}
} // namespace gamemd

// 0x4EAF20
namespace gamemd {
char VectorClass_ptr_TubeClass::SetCapacity_0(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4eaf2c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4eaf38*/
      v4 = a3; /*0x4eaf4e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4eaf4a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4eaf56*/
      return 0; /*0x4eafca*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4eaf64*/
        m_8 = a2; /*0x4eaf66*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4eaf71*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4eaf89*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4eafbe*/
}
} // namespace gamemd

// 0x4EAFD0
namespace gamemd {
int VectorClass_ptr_TubeClass::FindItemIndex_0(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4eafd3*/
  if ( m_10 <= 0 ) /*0x4eafd8*/
    return -1; /*0x4eafef*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4eafed*/
      return -1; /*0x4eafed*/
  }
  return result; /*0x4eaff2*/
}
} // namespace gamemd

// 0x4EB000
namespace gamemd {
char VectorClass_ptr_OverlayClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4eb00d*/
  {
    v3 = 0; /*0x4eb00f*/
    if ( m_8 <= 0 ) /*0x4eb013*/
      return 1; /*0x4eb033*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4eb01b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4eb024*/
    {
      ++v3; /*0x4eb026*/
      ++v4; /*0x4eb027*/
      if ( v3 >= m_8 ) /*0x4eb02c*/
        return 1; /*0x4eb02c*/
    }
  }
  return 0; /*0x4eb02e*/
}
} // namespace gamemd

// 0x4EB040
namespace gamemd {
char VectorClass_ptr_OverlayClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4eb04c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4eb05c*/
      v4 = a3; /*0x4eb072*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4eb06e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4eb07a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4eb091*/
          m_8 = a2; /*0x4eb093*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4eb09e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4eb0b6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4eb0d8*/
    }
    else
    {
      return 0; /*0x4eb07f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4eb0e8*/
  }
}
} // namespace gamemd

// 0x4EB0F0
namespace gamemd {
void VectorClass_ptr_OverlayClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4eb103*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4EB120
namespace gamemd {
int VectorClass_ptr_OverlayClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4eb128*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4eb131*/
  if ( m_8 <= 0 ) /*0x4eb135*/
    return -1; /*0x4eb14c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4eb13b*/
  {
    if ( ++result >= m_8 ) /*0x4eb14a*/
      return -1; /*0x4eb14a*/
  }
  return result; /*0x4eb12a*/
}
} // namespace gamemd

// 0x4EB160
namespace gamemd {
unsigned int VectorClass_ptr_OverlayClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4eb167*/
}
} // namespace gamemd

// 0x4EB180
namespace gamemd {
char VectorClass_ptr_TubeClass::SetCapacity_1(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4eb18c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4eb198*/
      v4 = a3; /*0x4eb1ae*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4eb1aa*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4eb1b6*/
      return 0; /*0x4eb22a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4eb1c4*/
        m_8 = a2; /*0x4eb1c6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4eb1d1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4eb1e9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4eb21e*/
}
} // namespace gamemd

// 0x4EB230
namespace gamemd {
int VectorClass_ptr_TubeClass::FindItemIndex_1(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4eb233*/
  if ( m_10 <= 0 ) /*0x4eb238*/
    return -1; /*0x4eb24f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4eb24d*/
      return -1; /*0x4eb24d*/
  }
  return result; /*0x4eb252*/
}
} // namespace gamemd

// 0x4EB720
namespace gamemd {
char VectorClass_ptr_AircraftClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4eb72d*/
  {
    v3 = 0; /*0x4eb72f*/
    if ( m_8 <= 0 ) /*0x4eb733*/
      return 1; /*0x4eb753*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4eb73b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4eb744*/
    {
      ++v3; /*0x4eb746*/
      ++v4; /*0x4eb747*/
      if ( v3 >= m_8 ) /*0x4eb74c*/
        return 1; /*0x4eb74c*/
    }
  }
  return 0; /*0x4eb74e*/
}
} // namespace gamemd

// 0x4EB760
namespace gamemd {
char VectorClass_ptr_AircraftClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4eb76c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4eb77c*/
      v4 = a3; /*0x4eb792*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4eb78e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4eb79a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4eb7b1*/
          m_8 = a2; /*0x4eb7b3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4eb7be*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4eb7d6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4eb7f8*/
    }
    else
    {
      return 0; /*0x4eb79f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4eb808*/
  }
}
} // namespace gamemd

// 0x4EB810
namespace gamemd {
void VectorClass_ptr_AircraftClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4eb823*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4EB840
namespace gamemd {
int VectorClass_ptr_AircraftClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4eb848*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4eb851*/
  if ( m_8 <= 0 ) /*0x4eb855*/
    return -1; /*0x4eb86c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4eb85b*/
  {
    if ( ++result >= m_8 ) /*0x4eb86a*/
      return -1; /*0x4eb86a*/
  }
  return result; /*0x4eb84a*/
}
} // namespace gamemd

// 0x4EB880
namespace gamemd {
unsigned int VectorClass_ptr_AircraftClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4eb887*/
}
} // namespace gamemd

// 0x4EB980
namespace gamemd {
char VectorClass_ptr_UnitClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4eb98d*/
  {
    v3 = 0; /*0x4eb98f*/
    if ( m_8 <= 0 ) /*0x4eb993*/
      return 1; /*0x4eb9b3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4eb99b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4eb9a4*/
    {
      ++v3; /*0x4eb9a6*/
      ++v4; /*0x4eb9a7*/
      if ( v3 >= m_8 ) /*0x4eb9ac*/
        return 1; /*0x4eb9ac*/
    }
  }
  return 0; /*0x4eb9ae*/
}
} // namespace gamemd

// 0x4EB9C0
namespace gamemd {
char VectorClass_ptr_UnitClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4eb9cc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4eb9dc*/
      v4 = a3; /*0x4eb9f2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4eb9ee*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4eb9fa*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4eba11*/
          m_8 = a2; /*0x4eba13*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4eba1e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4eba36*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4eba58*/
    }
    else
    {
      return 0; /*0x4eb9ff*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4eba68*/
  }
}
} // namespace gamemd

// 0x4EBA70
namespace gamemd {
void VectorClass_ptr_UnitClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4eba83*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4EBAA0
namespace gamemd {
int VectorClass_ptr_UnitClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4ebaa8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4ebab1*/
  if ( m_8 <= 0 ) /*0x4ebab5*/
    return -1; /*0x4ebacc*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4ebabb*/
  {
    if ( ++result >= m_8 ) /*0x4ebaca*/
      return -1; /*0x4ebaca*/
  }
  return result; /*0x4ebaaa*/
}
} // namespace gamemd

// 0x4EBAE0
namespace gamemd {
unsigned int VectorClass_ptr_UnitClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4ebae7*/
}
} // namespace gamemd

// 0x4EBB00
namespace gamemd {
char VectorClass_ptr_UnitClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ebb0c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ebb18*/
      v4 = a3; /*0x4ebb2e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ebb2a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4ebb36*/
      return 0; /*0x4ebbaa*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4ebb44*/
        m_8 = a2; /*0x4ebb46*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4ebb51*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4ebb69*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4ebb9e*/
}
} // namespace gamemd

// 0x4EBBB0
namespace gamemd {
int VectorClass_ptr_UnitClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4ebbb3*/
  if ( m_10 <= 0 ) /*0x4ebbb8*/
    return -1; /*0x4ebbcf*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4ebbcd*/
      return -1; /*0x4ebbcd*/
  }
  return result; /*0x4ebbd2*/
}
} // namespace gamemd

// 0x4EBBE0
namespace gamemd {
char VectorClass_ptr_HouseClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4ebbed*/
  {
    v3 = 0; /*0x4ebbef*/
    if ( m_8 <= 0 ) /*0x4ebbf3*/
      return 1; /*0x4ebc13*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4ebbfb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4ebc04*/
    {
      ++v3; /*0x4ebc06*/
      ++v4; /*0x4ebc07*/
      if ( v3 >= m_8 ) /*0x4ebc0c*/
        return 1; /*0x4ebc0c*/
    }
  }
  return 0; /*0x4ebc0e*/
}
} // namespace gamemd

// 0x4EBC20
namespace gamemd {
char VectorClass_ptr_HouseClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4ebc2c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ebc3c*/
      v4 = a3; /*0x4ebc52*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ebc4e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4ebc5a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4ebc71*/
          m_8 = a2; /*0x4ebc73*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4ebc7e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4ebc96*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4ebcb8*/
    }
    else
    {
      return 0; /*0x4ebc5f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4ebcc8*/
  }
}
} // namespace gamemd

// 0x4EBCD0
namespace gamemd {
void VectorClass_ptr_HouseClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4ebce3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4EBD00
namespace gamemd {
int VectorClass_ptr_HouseClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4ebd08*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4ebd11*/
  if ( m_8 <= 0 ) /*0x4ebd15*/
    return -1; /*0x4ebd2c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4ebd1b*/
  {
    if ( ++result >= m_8 ) /*0x4ebd2a*/
      return -1; /*0x4ebd2a*/
  }
  return result; /*0x4ebd0a*/
}
} // namespace gamemd

// 0x4EBD40
namespace gamemd {
unsigned int VectorClass_ptr_HouseClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4ebd47*/
}
} // namespace gamemd

// 0x4EBD60
namespace gamemd {
char VectorClass_ptr_UnitClass::SetCapacity_0(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ebd6c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ebd78*/
      v4 = a3; /*0x4ebd8e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ebd8a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4ebd96*/
      return 0; /*0x4ebe0a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4ebda4*/
        m_8 = a2; /*0x4ebda6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4ebdb1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4ebdc9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4ebdfe*/
}
} // namespace gamemd

// 0x4EBE10
namespace gamemd {
int VectorClass_ptr_UnitClass::FindItemIndex_0(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4ebe13*/
  if ( m_10 <= 0 ) /*0x4ebe18*/
    return -1; /*0x4ebe2f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4ebe2d*/
      return -1; /*0x4ebe2d*/
  }
  return result; /*0x4ebe32*/
}
} // namespace gamemd

// 0x4EBE40
namespace gamemd {
char VectorClass_ptr_AnimClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4ebe4d*/
  {
    v3 = 0; /*0x4ebe4f*/
    if ( m_8 <= 0 ) /*0x4ebe53*/
      return 1; /*0x4ebe73*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4ebe5b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4ebe64*/
    {
      ++v3; /*0x4ebe66*/
      ++v4; /*0x4ebe67*/
      if ( v3 >= m_8 ) /*0x4ebe6c*/
        return 1; /*0x4ebe6c*/
    }
  }
  return 0; /*0x4ebe6e*/
}
} // namespace gamemd

// 0x4EBE80
namespace gamemd {
char VectorClass_ptr_AnimClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4ebe8c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ebe9c*/
      v4 = a3; /*0x4ebeb2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ebeae*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4ebeba*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4ebed1*/
          m_8 = a2; /*0x4ebed3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4ebede*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4ebef6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4ebf18*/
    }
    else
    {
      return 0; /*0x4ebebf*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4ebf28*/
  }
}
} // namespace gamemd

// 0x4EBF30
namespace gamemd {
void VectorClass_ptr_AnimClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4ebf43*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4EBF60
namespace gamemd {
int VectorClass_ptr_AnimClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4ebf68*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4ebf71*/
  if ( m_8 <= 0 ) /*0x4ebf75*/
    return -1; /*0x4ebf8c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4ebf7b*/
  {
    if ( ++result >= m_8 ) /*0x4ebf8a*/
      return -1; /*0x4ebf8a*/
  }
  return result; /*0x4ebf6a*/
}
} // namespace gamemd

// 0x4EBFA0
unsigned int VectorClass_flat::GetIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4ebfa7*/
}
// 0x4EBFC0
namespace gamemd {
char VectorClass_ptr_TeamClass::SetCapacity_0(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ebfcc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ebfd8*/
      v4 = a3; /*0x4ebfee*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ebfea*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4ebff6*/
      return 0; /*0x4ec06a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4ec004*/
        m_8 = a2; /*0x4ec006*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4ec011*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4ec029*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4ec05e*/
}
} // namespace gamemd

// 0x4EC070
namespace gamemd {
int VectorClass_ptr_TeamClass::FindItemIndex_0(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4ec073*/
  if ( m_10 <= 0 ) /*0x4ec078*/
    return -1; /*0x4ec08f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4ec08d*/
      return -1; /*0x4ec08d*/
  }
  return result; /*0x4ec092*/
}
} // namespace gamemd

// 0x4EC0A0
namespace gamemd {
char VectorClass_ptr_FactoryClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4ec0ad*/
  {
    v3 = 0; /*0x4ec0af*/
    if ( m_8 <= 0 ) /*0x4ec0b3*/
      return 1; /*0x4ec0d3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4ec0bb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4ec0c4*/
    {
      ++v3; /*0x4ec0c6*/
      ++v4; /*0x4ec0c7*/
      if ( v3 >= m_8 ) /*0x4ec0cc*/
        return 1; /*0x4ec0cc*/
    }
  }
  return 0; /*0x4ec0ce*/
}
} // namespace gamemd

// 0x4EC0E0
namespace gamemd {
char VectorClass_ptr_FactoryClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4ec0ec*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ec0fc*/
      v4 = a3; /*0x4ec112*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ec10e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4ec11a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4ec131*/
          m_8 = a2; /*0x4ec133*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4ec13e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4ec156*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4ec178*/
    }
    else
    {
      return 0; /*0x4ec11f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4ec188*/
  }
}
} // namespace gamemd

// 0x4EC190
namespace gamemd {
void VectorClass_ptr_FactoryClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4ec1a3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4EC1C0
namespace gamemd {
int VectorClass_ptr_FactoryClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4ec1c8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4ec1d1*/
  if ( m_8 <= 0 ) /*0x4ec1d5*/
    return -1; /*0x4ec1ec*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4ec1db*/
  {
    if ( ++result >= m_8 ) /*0x4ec1ea*/
      return -1; /*0x4ec1ea*/
  }
  return result; /*0x4ec1ca*/
}
} // namespace gamemd

// 0x4EC200
namespace gamemd {
unsigned int VectorClass_ptr_FactoryClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4ec207*/
}
} // namespace gamemd

// 0x4EC220
namespace gamemd {
char VectorClass_ptr_TeamClass::SetCapacity_1(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ec22c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ec238*/
      v4 = a3; /*0x4ec24e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ec24a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4ec256*/
      return 0; /*0x4ec2ca*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4ec264*/
        m_8 = a2; /*0x4ec266*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4ec271*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4ec289*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4ec2be*/
}
} // namespace gamemd

// 0x4EC2D0
namespace gamemd {
int VectorClass_ptr_TeamClass::FindItemIndex_1(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4ec2d3*/
  if ( m_10 <= 0 ) /*0x4ec2d8*/
    return -1; /*0x4ec2ef*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4ec2ed*/
      return -1; /*0x4ec2ed*/
  }
  return result; /*0x4ec2f2*/
}
} // namespace gamemd

// 0x4EC300
namespace gamemd {
char VectorClass_ptr_CampaignClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4ec30d*/
  {
    v3 = 0; /*0x4ec30f*/
    if ( m_8 <= 0 ) /*0x4ec313*/
      return 1; /*0x4ec333*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4ec31b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4ec324*/
    {
      ++v3; /*0x4ec326*/
      ++v4; /*0x4ec327*/
      if ( v3 >= m_8 ) /*0x4ec32c*/
        return 1; /*0x4ec32c*/
    }
  }
  return 0; /*0x4ec32e*/
}
} // namespace gamemd

// 0x4EC340
namespace gamemd {
char VectorClass_ptr_CampaignClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4ec34c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ec35c*/
      v4 = a3; /*0x4ec372*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ec36e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4ec37a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4ec391*/
          m_8 = a2; /*0x4ec393*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4ec39e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4ec3b6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4ec3d8*/
    }
    else
    {
      return 0; /*0x4ec37f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4ec3e8*/
  }
}
} // namespace gamemd

// 0x4EC3F0
namespace gamemd {
void VectorClass_ptr_CampaignClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4ec403*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4EC420
namespace gamemd {
int VectorClass_ptr_CampaignClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4ec428*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4ec431*/
  if ( m_8 <= 0 ) /*0x4ec435*/
    return -1; /*0x4ec44c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4ec43b*/
  {
    if ( ++result >= m_8 ) /*0x4ec44a*/
      return -1; /*0x4ec44a*/
  }
  return result; /*0x4ec42a*/
}
} // namespace gamemd

// 0x4EC460
namespace gamemd {
unsigned int VectorClass_ptr_CampaignClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4ec467*/
}
} // namespace gamemd

// 0x4EC480
namespace gamemd {
char VectorClass_ptr_CampaignClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ec48c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ec498*/
      v4 = a3; /*0x4ec4ae*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ec4aa*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4ec4b6*/
      return 0; /*0x4ec52a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4ec4c4*/
        m_8 = a2; /*0x4ec4c6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4ec4d1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4ec4e9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4ec51e*/
}
} // namespace gamemd

// 0x4EC530
namespace gamemd {
int VectorClass_ptr_CampaignClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4ec533*/
  if ( m_10 <= 0 ) /*0x4ec538*/
    return -1; /*0x4ec54f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4ec54d*/
      return -1; /*0x4ec54d*/
  }
  return result; /*0x4ec552*/
}
} // namespace gamemd

// 0x4EC560
namespace gamemd {
char VectorClass_ptr_SideClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4ec56d*/
  {
    v3 = 0; /*0x4ec56f*/
    if ( m_8 <= 0 ) /*0x4ec573*/
      return 1; /*0x4ec593*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4ec57b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4ec584*/
    {
      ++v3; /*0x4ec586*/
      ++v4; /*0x4ec587*/
      if ( v3 >= m_8 ) /*0x4ec58c*/
        return 1; /*0x4ec58c*/
    }
  }
  return 0; /*0x4ec58e*/
}
} // namespace gamemd

// 0x4EC5A0
namespace gamemd {
char VectorClass_ptr_SideClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4ec5ac*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ec5bc*/
      v4 = a3; /*0x4ec5d2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ec5ce*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4ec5da*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4ec5f1*/
          m_8 = a2; /*0x4ec5f3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4ec5fe*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4ec616*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4ec638*/
    }
    else
    {
      return 0; /*0x4ec5df*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4ec648*/
  }
}
} // namespace gamemd

// 0x4EC650
namespace gamemd {
void VectorClass_ptr_SideClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4ec663*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4EC680
namespace gamemd {
int VectorClass_ptr_SideClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4ec688*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4ec691*/
  if ( m_8 <= 0 ) /*0x4ec695*/
    return -1; /*0x4ec6ac*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4ec69b*/
  {
    if ( ++result >= m_8 ) /*0x4ec6aa*/
      return -1; /*0x4ec6aa*/
  }
  return result; /*0x4ec68a*/
}
} // namespace gamemd

// 0x4EC6C0
namespace gamemd {
unsigned int VectorClass_ptr_SideClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4ec6c7*/
}
} // namespace gamemd

// 0x4EC6E0
namespace gamemd {
char VectorClass_ptr_CampaignClass::SetCapacity_0(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ec6ec*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ec6f8*/
      v4 = a3; /*0x4ec70e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ec70a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4ec716*/
      return 0; /*0x4ec78a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4ec724*/
        m_8 = a2; /*0x4ec726*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4ec731*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4ec749*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4ec77e*/
}
} // namespace gamemd

// 0x4EC790
namespace gamemd {
int VectorClass_ptr_CampaignClass::FindItemIndex_0(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4ec793*/
  if ( m_10 <= 0 ) /*0x4ec798*/
    return -1; /*0x4ec7af*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4ec7ad*/
      return -1; /*0x4ec7ad*/
  }
  return result; /*0x4ec7b2*/
}
} // namespace gamemd

// 0x4EC7C0
namespace gamemd {
char VectorClass_ptr_HouseTypeClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4ec7cd*/
  {
    v3 = 0; /*0x4ec7cf*/
    if ( m_8 <= 0 ) /*0x4ec7d3*/
      return 1; /*0x4ec7f3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4ec7db*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4ec7e4*/
    {
      ++v3; /*0x4ec7e6*/
      ++v4; /*0x4ec7e7*/
      if ( v3 >= m_8 ) /*0x4ec7ec*/
        return 1; /*0x4ec7ec*/
    }
  }
  return 0; /*0x4ec7ee*/
}
} // namespace gamemd

// 0x4EC800
namespace gamemd {
char VectorClass_ptr_HouseTypeClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4ec80c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ec81c*/
      v4 = a3; /*0x4ec832*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ec82e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4ec83a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4ec851*/
          m_8 = a2; /*0x4ec853*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4ec85e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4ec876*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4ec898*/
    }
    else
    {
      return 0; /*0x4ec83f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4ec8a8*/
  }
}
} // namespace gamemd

// 0x4EC8B0
namespace gamemd {
void VectorClass_ptr_HouseTypeClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4ec8c3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4EC8E0
namespace gamemd {
int VectorClass_ptr_HouseTypeClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4ec8e8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4ec8f1*/
  if ( m_8 <= 0 ) /*0x4ec8f5*/
    return -1; /*0x4ec90c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4ec8fb*/
  {
    if ( ++result >= m_8 ) /*0x4ec90a*/
      return -1; /*0x4ec90a*/
  }
  return result; /*0x4ec8ea*/
}
} // namespace gamemd

// 0x4EC920
namespace gamemd {
unsigned int VectorClass_ptr_HouseTypeClass::LoadTypeData(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4ec927*/
}
} // namespace gamemd

// 0x4EC940
namespace gamemd {
char VectorClass_ptr_HouseTypeClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ec94c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ec958*/
      v4 = a3; /*0x4ec96e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ec96a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4ec976*/
      return 0; /*0x4ec9ea*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4ec984*/
        m_8 = a2; /*0x4ec986*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4ec991*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4ec9a9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4ec9de*/
}
} // namespace gamemd

// 0x4EC9F0
namespace gamemd {
int VectorClass_ptr_HouseTypeClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4ec9f3*/
  if ( m_10 <= 0 ) /*0x4ec9f8*/
    return -1; /*0x4eca0f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4eca0d*/
      return -1; /*0x4eca0d*/
  }
  return result; /*0x4eca12*/
}
} // namespace gamemd

// 0x4ECA20
namespace gamemd {
char VectorClass_ptr_TaskForceClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4eca2d*/
  {
    v3 = 0; /*0x4eca2f*/
    if ( m_8 <= 0 ) /*0x4eca33*/
      return 1; /*0x4eca53*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4eca3b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4eca44*/
    {
      ++v3; /*0x4eca46*/
      ++v4; /*0x4eca47*/
      if ( v3 >= m_8 ) /*0x4eca4c*/
        return 1; /*0x4eca4c*/
    }
  }
  return 0; /*0x4eca4e*/
}
} // namespace gamemd

// 0x4ECA60
namespace gamemd {
char VectorClass_ptr_TaskForceClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4eca6c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4eca7c*/
      v4 = a3; /*0x4eca92*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4eca8e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4eca9a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4ecab1*/
          m_8 = a2; /*0x4ecab3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4ecabe*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4ecad6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4ecaf8*/
    }
    else
    {
      return 0; /*0x4eca9f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4ecb08*/
  }
}
} // namespace gamemd

// 0x4ECB10
namespace gamemd {
void VectorClass_ptr_TaskForceClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4ecb23*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4ECB40
namespace gamemd {
int VectorClass_ptr_TaskForceClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4ecb48*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4ecb51*/
  if ( m_8 <= 0 ) /*0x4ecb55*/
    return -1; /*0x4ecb6c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4ecb5b*/
  {
    if ( ++result >= m_8 ) /*0x4ecb6a*/
      return -1; /*0x4ecb6a*/
  }
  return result; /*0x4ecb4a*/
}
} // namespace gamemd

// 0x4ECB80
namespace gamemd {
unsigned int VectorClass_ptr_TaskForceClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4ecb87*/
}
} // namespace gamemd

// 0x4ECBA0
namespace gamemd {
char VectorClass_ptr_HouseTypeClass::SetCapacity_0(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ecbac*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ecbb8*/
      v4 = a3; /*0x4ecbce*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ecbca*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4ecbd6*/
      return 0; /*0x4ecc4a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4ecbe4*/
        m_8 = a2; /*0x4ecbe6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4ecbf1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4ecc09*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4ecc3e*/
}
} // namespace gamemd

// 0x4ECC50
namespace gamemd {
int VectorClass_ptr_HouseTypeClass::FindItemIndex_0(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4ecc53*/
  if ( m_10 <= 0 ) /*0x4ecc58*/
    return -1; /*0x4ecc6f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4ecc6d*/
      return -1; /*0x4ecc6d*/
  }
  return result; /*0x4ecc72*/
}
} // namespace gamemd

// 0x4ECC80
namespace gamemd {
char VectorClass_ptr_TeamTypeClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4ecc8d*/
  {
    v3 = 0; /*0x4ecc8f*/
    if ( m_8 <= 0 ) /*0x4ecc93*/
      return 1; /*0x4eccb3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4ecc9b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4ecca4*/
    {
      ++v3; /*0x4ecca6*/
      ++v4; /*0x4ecca7*/
      if ( v3 >= m_8 ) /*0x4eccac*/
        return 1; /*0x4eccac*/
    }
  }
  return 0; /*0x4eccae*/
}
} // namespace gamemd

// 0x4ECCC0
namespace gamemd {
char VectorClass_ptr_TeamTypeClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4ecccc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4eccdc*/
      v4 = a3; /*0x4eccf2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4eccee*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4eccfa*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4ecd11*/
          m_8 = a2; /*0x4ecd13*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4ecd1e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4ecd36*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4ecd58*/
    }
    else
    {
      return 0; /*0x4eccff*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4ecd68*/
  }
}
} // namespace gamemd

// 0x4ECD70
namespace gamemd {
void VectorClass_ptr_TeamTypeClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4ecd83*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4ECDA0
namespace gamemd {
int VectorClass_ptr_TeamTypeClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4ecda8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4ecdb1*/
  if ( m_8 <= 0 ) /*0x4ecdb5*/
    return -1; /*0x4ecdcc*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4ecdbb*/
  {
    if ( ++result >= m_8 ) /*0x4ecdca*/
      return -1; /*0x4ecdca*/
  }
  return result; /*0x4ecdaa*/
}
} // namespace gamemd

// 0x4ECDE0
namespace gamemd {
unsigned int VectorClass_ptr_TeamTypeClass::LoadTypeData(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4ecde7*/
}
} // namespace gamemd

// 0x4ECE00
namespace gamemd {
char VectorClass_ptr_HouseTypeClass::SetCapacity_1(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ece0c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ece18*/
      v4 = a3; /*0x4ece2e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ece2a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4ece36*/
      return 0; /*0x4eceaa*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4ece44*/
        m_8 = a2; /*0x4ece46*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4ece51*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4ece69*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4ece9e*/
}
} // namespace gamemd

// 0x4ECEB0
namespace gamemd {
int VectorClass_ptr_HouseTypeClass::FindItemIndex_1(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4eceb3*/
  if ( m_10 <= 0 ) /*0x4eceb8*/
    return -1; /*0x4ececf*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4ececd*/
      return -1; /*0x4ececd*/
  }
  return result; /*0x4eced2*/
}
} // namespace gamemd

// 0x4ECEE0
namespace gamemd {
char VectorClass_ptr_ScriptTypeClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4eceed*/
  {
    v3 = 0; /*0x4eceef*/
    if ( m_8 <= 0 ) /*0x4ecef3*/
      return 1; /*0x4ecf13*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4ecefb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4ecf04*/
    {
      ++v3; /*0x4ecf06*/
      ++v4; /*0x4ecf07*/
      if ( v3 >= m_8 ) /*0x4ecf0c*/
        return 1; /*0x4ecf0c*/
    }
  }
  return 0; /*0x4ecf0e*/
}
} // namespace gamemd

// 0x4ECF20
namespace gamemd {
char VectorClass_ptr_ScriptTypeClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4ecf2c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ecf3c*/
      v4 = a3; /*0x4ecf52*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ecf4e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4ecf5a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4ecf71*/
          m_8 = a2; /*0x4ecf73*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4ecf7e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4ecf96*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4ecfb8*/
    }
    else
    {
      return 0; /*0x4ecf5f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4ecfc8*/
  }
}
} // namespace gamemd

// 0x4ECFD0
namespace gamemd {
void VectorClass_ptr_ScriptTypeClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4ecfe3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4ED000
namespace gamemd {
int VectorClass_ptr_ScriptTypeClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4ed008*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4ed011*/
  if ( m_8 <= 0 ) /*0x4ed015*/
    return -1; /*0x4ed02c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4ed01b*/
  {
    if ( ++result >= m_8 ) /*0x4ed02a*/
      return -1; /*0x4ed02a*/
  }
  return result; /*0x4ed00a*/
}
} // namespace gamemd

// 0x4ED040
namespace gamemd {
unsigned int VectorClass_ptr_ScriptTypeClass::LoadTypeData(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4ed047*/
}
} // namespace gamemd

// 0x4ED060
namespace gamemd {
char VectorClass_ptr_ScriptTypeClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ed06c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ed078*/
      v4 = a3; /*0x4ed08e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ed08a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4ed096*/
      return 0; /*0x4ed10a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4ed0a4*/
        m_8 = a2; /*0x4ed0a6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4ed0b1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4ed0c9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4ed0fe*/
}
} // namespace gamemd

// 0x4ED110
namespace gamemd {
int VectorClass_ptr_ScriptTypeClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4ed113*/
  if ( m_10 <= 0 ) /*0x4ed118*/
    return -1; /*0x4ed12f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4ed12d*/
      return -1; /*0x4ed12d*/
  }
  return result; /*0x4ed132*/
}
} // namespace gamemd

// 0x4ED140
namespace gamemd {
char VectorClass_ptr_OverlayTypeClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4ed14d*/
  {
    v3 = 0; /*0x4ed14f*/
    if ( m_8 <= 0 ) /*0x4ed153*/
      return 1; /*0x4ed173*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4ed15b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4ed164*/
    {
      ++v3; /*0x4ed166*/
      ++v4; /*0x4ed167*/
      if ( v3 >= m_8 ) /*0x4ed16c*/
        return 1; /*0x4ed16c*/
    }
  }
  return 0; /*0x4ed16e*/
}
} // namespace gamemd

// 0x4ED180
namespace gamemd {
char VectorClass_ptr_OverlayTypeClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4ed18c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ed19c*/
      v4 = a3; /*0x4ed1b2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ed1ae*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4ed1ba*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4ed1d1*/
          m_8 = a2; /*0x4ed1d3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4ed1de*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4ed1f6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4ed218*/
    }
    else
    {
      return 0; /*0x4ed1bf*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4ed228*/
  }
}
} // namespace gamemd

// 0x4ED230
namespace gamemd {
void VectorClass_ptr_OverlayTypeClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4ed243*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4ED260
namespace gamemd {
int VectorClass_ptr_OverlayTypeClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4ed268*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4ed271*/
  if ( m_8 <= 0 ) /*0x4ed275*/
    return -1; /*0x4ed28c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4ed27b*/
  {
    if ( ++result >= m_8 ) /*0x4ed28a*/
      return -1; /*0x4ed28a*/
  }
  return result; /*0x4ed26a*/
}
} // namespace gamemd

// 0x4ED2A0
namespace gamemd {
unsigned int VectorClass_ptr_OverlayTypeClass::LoadTypeData(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4ed2a7*/
}
} // namespace gamemd

// 0x4ED2C0
namespace gamemd {
char VectorClass_ptr_ScriptTypeClass::SetCapacity_0(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ed2cc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ed2d8*/
      v4 = a3; /*0x4ed2ee*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ed2ea*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4ed2f6*/
      return 0; /*0x4ed36a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4ed304*/
        m_8 = a2; /*0x4ed306*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4ed311*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4ed329*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4ed35e*/
}
} // namespace gamemd

// 0x4ED370
namespace gamemd {
int VectorClass_ptr_ScriptTypeClass::FindItemIndex_0(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4ed373*/
  if ( m_10 <= 0 ) /*0x4ed378*/
    return -1; /*0x4ed38f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4ed38d*/
      return -1; /*0x4ed38d*/
  }
  return result; /*0x4ed392*/
}
} // namespace gamemd

// 0x4ED3A0
namespace gamemd {
char VectorClass_ptr_SmudgeTypeClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4ed3ad*/
  {
    v3 = 0; /*0x4ed3af*/
    if ( m_8 <= 0 ) /*0x4ed3b3*/
      return 1; /*0x4ed3d3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4ed3bb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4ed3c4*/
    {
      ++v3; /*0x4ed3c6*/
      ++v4; /*0x4ed3c7*/
      if ( v3 >= m_8 ) /*0x4ed3cc*/
        return 1; /*0x4ed3cc*/
    }
  }
  return 0; /*0x4ed3ce*/
}
} // namespace gamemd

// 0x4ED3E0
namespace gamemd {
char VectorClass_ptr_SmudgeTypeClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4ed3ec*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ed3fc*/
      v4 = a3; /*0x4ed412*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ed40e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4ed41a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4ed431*/
          m_8 = a2; /*0x4ed433*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4ed43e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4ed456*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4ed478*/
    }
    else
    {
      return 0; /*0x4ed41f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4ed488*/
  }
}
} // namespace gamemd

// 0x4ED490
namespace gamemd {
void VectorClass_ptr_SmudgeTypeClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4ed4a3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4ED4C0
namespace gamemd {
int VectorClass_ptr_SmudgeTypeClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4ed4c8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4ed4d1*/
  if ( m_8 <= 0 ) /*0x4ed4d5*/
    return -1; /*0x4ed4ec*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4ed4db*/
  {
    if ( ++result >= m_8 ) /*0x4ed4ea*/
      return -1; /*0x4ed4ea*/
  }
  return result; /*0x4ed4ca*/
}
} // namespace gamemd

// 0x4ED500
namespace gamemd {
unsigned int VectorClass_ptr_SmudgeTypeClass::LoadTypeData(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4ed507*/
}
} // namespace gamemd

// 0x4ED520
namespace gamemd {
char VectorClass_ptr_SmudgeTypeClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ed52c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ed538*/
      v4 = a3; /*0x4ed54e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ed54a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4ed556*/
      return 0; /*0x4ed5ca*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4ed564*/
        m_8 = a2; /*0x4ed566*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4ed571*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4ed589*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4ed5be*/
}
} // namespace gamemd

// 0x4ED5D0
namespace gamemd {
int VectorClass_ptr_SmudgeTypeClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4ed5d3*/
  if ( m_10 <= 0 ) /*0x4ed5d8*/
    return -1; /*0x4ed5ef*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4ed5ed*/
      return -1; /*0x4ed5ed*/
  }
  return result; /*0x4ed5f2*/
}
} // namespace gamemd

// 0x4ED600
namespace gamemd {
char VectorClass_ptr_TerrainTypeClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4ed60d*/
  {
    v3 = 0; /*0x4ed60f*/
    if ( m_8 <= 0 ) /*0x4ed613*/
      return 1; /*0x4ed633*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4ed61b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4ed624*/
    {
      ++v3; /*0x4ed626*/
      ++v4; /*0x4ed627*/
      if ( v3 >= m_8 ) /*0x4ed62c*/
        return 1; /*0x4ed62c*/
    }
  }
  return 0; /*0x4ed62e*/
}
} // namespace gamemd

// 0x4ED640
namespace gamemd {
char VectorClass_ptr_TerrainTypeClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4ed64c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ed65c*/
      v4 = a3; /*0x4ed672*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ed66e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4ed67a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4ed691*/
          m_8 = a2; /*0x4ed693*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4ed69e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4ed6b6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4ed6d8*/
    }
    else
    {
      return 0; /*0x4ed67f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4ed6e8*/
  }
}
} // namespace gamemd

// 0x4ED6F0
namespace gamemd {
void VectorClass_ptr_TerrainTypeClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4ed703*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4ED720
namespace gamemd {
int VectorClass_ptr_TerrainTypeClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4ed728*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4ed731*/
  if ( m_8 <= 0 ) /*0x4ed735*/
    return -1; /*0x4ed74c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4ed73b*/
  {
    if ( ++result >= m_8 ) /*0x4ed74a*/
      return -1; /*0x4ed74a*/
  }
  return result; /*0x4ed72a*/
}
} // namespace gamemd

// 0x4ED760
namespace gamemd {
unsigned int VectorClass_ptr_TerrainTypeClass::LoadTypeData(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4ed767*/
}
} // namespace gamemd

// 0x4ED780
namespace gamemd {
char VectorClass_ptr_SmudgeTypeClass::SetCapacity_0(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ed78c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ed798*/
      v4 = a3; /*0x4ed7ae*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ed7aa*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4ed7b6*/
      return 0; /*0x4ed82a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4ed7c4*/
        m_8 = a2; /*0x4ed7c6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4ed7d1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4ed7e9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4ed81e*/
}
} // namespace gamemd

// 0x4ED830
namespace gamemd {
int VectorClass_ptr_SmudgeTypeClass::FindItemIndex_0(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4ed833*/
  if ( m_10 <= 0 ) /*0x4ed838*/
    return -1; /*0x4ed84f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4ed84d*/
      return -1; /*0x4ed84d*/
  }
  return result; /*0x4ed852*/
}
} // namespace gamemd

// 0x4ED860
namespace gamemd {
char VectorClass_ptr_BuildingTypeClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4ed86d*/
  {
    v3 = 0; /*0x4ed86f*/
    if ( m_8 <= 0 ) /*0x4ed873*/
      return 1; /*0x4ed893*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4ed87b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4ed884*/
    {
      ++v3; /*0x4ed886*/
      ++v4; /*0x4ed887*/
      if ( v3 >= m_8 ) /*0x4ed88c*/
        return 1; /*0x4ed88c*/
    }
  }
  return 0; /*0x4ed88e*/
}
} // namespace gamemd

// 0x4ED8A0
namespace gamemd {
char VectorClass_ptr_BuildingTypeClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4ed8ac*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ed8bc*/
      v4 = a3; /*0x4ed8d2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ed8ce*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4ed8da*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4ed8f1*/
          m_8 = a2; /*0x4ed8f3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4ed8fe*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4ed916*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4ed938*/
    }
    else
    {
      return 0; /*0x4ed8df*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4ed948*/
  }
}
} // namespace gamemd

// 0x4ED950
void VectorClass_flat::Cleanup4()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(this->Items); /*0x4ed963*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
// 0x4ED980
namespace gamemd {
int  VectorClass_ptr_BuildingTypeClass::GetSize()
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4ed988*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4ed991*/
  if ( m_8 <= 0 ) /*0x4ed995*/
    return -1; /*0x4ed9ac*/
  for ( i = *(unsigned int **)&this->Items; *i != *this; ++i ) /*0x4ed99b*/
  {
    if ( ++result >= m_8 ) /*0x4ed9aa*/
      return -1; /*0x4ed9aa*/
  }
  return result; /*0x4ed98a*/
}
} // namespace gamemd

// 0x4ED9C0
namespace gamemd {
unsigned int VectorClass_ptr_BuildingTypeClass::Remove(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4ed9c7*/
}
} // namespace gamemd

// 0x4ED9E0
namespace gamemd {
char VectorClass_ptr_SmudgeTypeClass::SetCapacity_1(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ed9ec*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ed9f8*/
      v4 = a3; /*0x4eda0e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4eda0a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4eda16*/
      return 0; /*0x4eda8a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4eda24*/
        m_8 = a2; /*0x4eda26*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4eda31*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4eda49*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4eda7e*/
}
} // namespace gamemd

// 0x4EDA90
namespace gamemd {
int VectorClass_ptr_SmudgeTypeClass::FindItemIndex_1(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4eda93*/
  if ( m_10 <= 0 ) /*0x4eda98*/
    return -1; /*0x4edaaf*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4edaad*/
      return -1; /*0x4edaad*/
  }
  return result; /*0x4edab2*/
}
} // namespace gamemd

// 0x4EDAC0
namespace gamemd {
char VectorClass_ptr_AircraftTypeClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4edacd*/
  {
    v3 = 0; /*0x4edacf*/
    if ( m_8 <= 0 ) /*0x4edad3*/
      return 1; /*0x4edaf3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4edadb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4edae4*/
    {
      ++v3; /*0x4edae6*/
      ++v4; /*0x4edae7*/
      if ( v3 >= m_8 ) /*0x4edaec*/
        return 1; /*0x4edaec*/
    }
  }
  return 0; /*0x4edaee*/
}
} // namespace gamemd

// 0x4EDB00
namespace gamemd {
char VectorClass_ptr_AircraftTypeClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4edb0c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4edb1c*/
      v4 = a3; /*0x4edb32*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4edb2e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4edb3a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4edb51*/
          m_8 = a2; /*0x4edb53*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4edb5e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4edb76*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4edb98*/
    }
    else
    {
      return 0; /*0x4edb3f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4edba8*/
  }
}
} // namespace gamemd

// 0x4EDBB0
namespace gamemd {
void VectorClass_ptr_AircraftTypeClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4edbc3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4EDBE0
namespace gamemd {
int VectorClass_ptr_AircraftTypeClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4edbe8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4edbf1*/
  if ( m_8 <= 0 ) /*0x4edbf5*/
    return -1; /*0x4edc0c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4edbfb*/
  {
    if ( ++result >= m_8 ) /*0x4edc0a*/
      return -1; /*0x4edc0a*/
  }
  return result; /*0x4edbea*/
}
} // namespace gamemd

// 0x4EDC20
namespace gamemd {
unsigned int VectorClass_ptr_AircraftTypeClass::LoadTypeData(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4edc27*/
}
} // namespace gamemd

// 0x4EDC40
namespace gamemd {
char VectorClass_ptr_AircraftTypeClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4edc4c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4edc58*/
      v4 = a3; /*0x4edc6e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4edc6a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4edc76*/
      return 0; /*0x4edcea*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4edc84*/
        m_8 = a2; /*0x4edc86*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4edc91*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4edca9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4edcde*/
}
} // namespace gamemd

// 0x4EDCF0
namespace gamemd {
int VectorClass_ptr_AircraftTypeClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4edcf3*/
  if ( m_10 <= 0 ) /*0x4edcf8*/
    return -1; /*0x4edd0f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4edd0d*/
      return -1; /*0x4edd0d*/
  }
  return result; /*0x4edd12*/
}
} // namespace gamemd

// 0x4EDD20
namespace gamemd {
char VectorClass_ptr_UnitTypeClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4edd2d*/
  {
    v3 = 0; /*0x4edd2f*/
    if ( m_8 <= 0 ) /*0x4edd33*/
      return 1; /*0x4edd53*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4edd3b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4edd44*/
    {
      ++v3; /*0x4edd46*/
      ++v4; /*0x4edd47*/
      if ( v3 >= m_8 ) /*0x4edd4c*/
        return 1; /*0x4edd4c*/
    }
  }
  return 0; /*0x4edd4e*/
}
} // namespace gamemd

// 0x4EDD60
namespace gamemd {
char VectorClass_ptr_UnitTypeClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4edd6c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4edd7c*/
      v4 = a3; /*0x4edd92*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4edd8e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4edd9a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4eddb1*/
          m_8 = a2; /*0x4eddb3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4eddbe*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4eddd6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4eddf8*/
    }
    else
    {
      return 0; /*0x4edd9f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4ede08*/
  }
}
} // namespace gamemd

// 0x4EDE10
namespace gamemd {
void VectorClass_ptr_UnitTypeClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4ede23*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4EDE40
namespace gamemd {
int VectorClass_ptr_UnitTypeClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4ede48*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4ede51*/
  if ( m_8 <= 0 ) /*0x4ede55*/
    return -1; /*0x4ede6c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4ede5b*/
  {
    if ( ++result >= m_8 ) /*0x4ede6a*/
      return -1; /*0x4ede6a*/
  }
  return result; /*0x4ede4a*/
}
} // namespace gamemd

// 0x4EDE80
namespace gamemd {
unsigned int VectorClass_ptr_UnitTypeClass::LoadTypeData(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4ede87*/
}
} // namespace gamemd

// 0x4EDEA0
namespace gamemd {
char VectorClass_ptr_AircraftTypeClass::SetCapacity_0(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4edeac*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4edeb8*/
      v4 = a3; /*0x4edece*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4edeca*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4eded6*/
      return 0; /*0x4edf4a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4edee4*/
        m_8 = a2; /*0x4edee6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4edef1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4edf09*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4edf3e*/
}
} // namespace gamemd

// 0x4EDF50
namespace gamemd {
int VectorClass_ptr_AircraftTypeClass::FindItemIndex_0(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4edf53*/
  if ( m_10 <= 0 ) /*0x4edf58*/
    return -1; /*0x4edf6f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4edf6d*/
      return -1; /*0x4edf6d*/
  }
  return result; /*0x4edf72*/
}
} // namespace gamemd

// 0x4EDF80
namespace gamemd {
char VectorClass_ptr_AnimTypeClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4edf8d*/
  {
    v3 = 0; /*0x4edf8f*/
    if ( m_8 <= 0 ) /*0x4edf93*/
      return 1; /*0x4edfb3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4edf9b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4edfa4*/
    {
      ++v3; /*0x4edfa6*/
      ++v4; /*0x4edfa7*/
      if ( v3 >= m_8 ) /*0x4edfac*/
        return 1; /*0x4edfac*/
    }
  }
  return 0; /*0x4edfae*/
}
} // namespace gamemd

// 0x4EDFC0
namespace gamemd {
char VectorClass_ptr_AnimTypeClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4edfcc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4edfdc*/
      v4 = a3; /*0x4edff2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4edfee*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4edffa*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4ee011*/
          m_8 = a2; /*0x4ee013*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4ee01e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4ee036*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4ee058*/
    }
    else
    {
      return 0; /*0x4edfff*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4ee068*/
  }
}
} // namespace gamemd

// 0x4EE070
namespace gamemd {
void VectorClass_ptr_AnimTypeClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4ee083*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4EE0A0
namespace gamemd {
int VectorClass_ptr_AnimTypeClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4ee0a8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4ee0b1*/
  if ( m_8 <= 0 ) /*0x4ee0b5*/
    return -1; /*0x4ee0cc*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4ee0bb*/
  {
    if ( ++result >= m_8 ) /*0x4ee0ca*/
      return -1; /*0x4ee0ca*/
  }
  return result; /*0x4ee0aa*/
}
} // namespace gamemd

// 0x4EE0E0
namespace gamemd {
unsigned int VectorClass_ptr_AnimTypeClass::LoadTypeData(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4ee0e7*/
}
} // namespace gamemd

// 0x4EE100
namespace gamemd {
char VectorClass_ptr_AnimTypeClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ee10c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ee118*/
      v4 = a3; /*0x4ee12e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ee12a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4ee136*/
      return 0; /*0x4ee1aa*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4ee144*/
        m_8 = a2; /*0x4ee146*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4ee151*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4ee169*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4ee19e*/
}
} // namespace gamemd

// 0x4EE1B0
namespace gamemd {
int VectorClass_ptr_AnimTypeClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4ee1b3*/
  if ( m_10 <= 0 ) /*0x4ee1b8*/
    return -1; /*0x4ee1cf*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4ee1cd*/
      return -1; /*0x4ee1cd*/
  }
  return result; /*0x4ee1d2*/
}
} // namespace gamemd

// 0x4EE1E0
namespace gamemd {
char VectorClass_ptr_InfantryTypeClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4ee1ed*/
  {
    v3 = 0; /*0x4ee1ef*/
    if ( m_8 <= 0 ) /*0x4ee1f3*/
      return 1; /*0x4ee213*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4ee1fb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4ee204*/
    {
      ++v3; /*0x4ee206*/
      ++v4; /*0x4ee207*/
      if ( v3 >= m_8 ) /*0x4ee20c*/
        return 1; /*0x4ee20c*/
    }
  }
  return 0; /*0x4ee20e*/
}
} // namespace gamemd

// 0x4EE220
namespace gamemd {
char VectorClass_ptr_InfantryTypeClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4ee22c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ee23c*/
      v4 = a3; /*0x4ee252*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ee24e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4ee25a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4ee271*/
          m_8 = a2; /*0x4ee273*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4ee27e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4ee296*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4ee2b8*/
    }
    else
    {
      return 0; /*0x4ee25f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4ee2c8*/
  }
}
} // namespace gamemd

// 0x4EE2D0
namespace gamemd {
void VectorClass_ptr_InfantryTypeClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4ee2e3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4EE300
namespace gamemd {
int VectorClass_ptr_InfantryTypeClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4ee308*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4ee311*/
  if ( m_8 <= 0 ) /*0x4ee315*/
    return -1; /*0x4ee32c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4ee31b*/
  {
    if ( ++result >= m_8 ) /*0x4ee32a*/
      return -1; /*0x4ee32a*/
  }
  return result; /*0x4ee30a*/
}
} // namespace gamemd

// 0x4EE340
namespace gamemd {
unsigned int VectorClass_ptr_InfantryTypeClass::LoadTypeData(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4ee347*/
}
} // namespace gamemd

// 0x4EE360
namespace gamemd {
char VectorClass_ptr_AnimTypeClass::SetCapacity_0(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ee36c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ee378*/
      v4 = a3; /*0x4ee38e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ee38a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4ee396*/
      return 0; /*0x4ee40a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4ee3a4*/
        m_8 = a2; /*0x4ee3a6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4ee3b1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4ee3c9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4ee3fe*/
}
} // namespace gamemd

// 0x4EE410
namespace gamemd {
int VectorClass_ptr_AnimTypeClass::FindItemIndex_0(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4ee413*/
  if ( m_10 <= 0 ) /*0x4ee418*/
    return -1; /*0x4ee42f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4ee42d*/
      return -1; /*0x4ee42d*/
  }
  return result; /*0x4ee432*/
}
} // namespace gamemd

// 0x4EE440
namespace gamemd {
char VectorClass_ptr_BulletTypeClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4ee44d*/
  {
    v3 = 0; /*0x4ee44f*/
    if ( m_8 <= 0 ) /*0x4ee453*/
      return 1; /*0x4ee473*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4ee45b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4ee464*/
    {
      ++v3; /*0x4ee466*/
      ++v4; /*0x4ee467*/
      if ( v3 >= m_8 ) /*0x4ee46c*/
        return 1; /*0x4ee46c*/
    }
  }
  return 0; /*0x4ee46e*/
}
} // namespace gamemd

// 0x4EE480
namespace gamemd {
char VectorClass_ptr_BulletTypeClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4ee48c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ee49c*/
      v4 = a3; /*0x4ee4b2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ee4ae*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4ee4ba*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4ee4d1*/
          m_8 = a2; /*0x4ee4d3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4ee4de*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4ee4f6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4ee518*/
    }
    else
    {
      return 0; /*0x4ee4bf*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4ee528*/
  }
}
} // namespace gamemd

// 0x4EE530
namespace gamemd {
void VectorClass_ptr_BulletTypeClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4ee543*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4EE560
namespace gamemd {
int VectorClass_ptr_BulletTypeClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4ee568*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4ee571*/
  if ( m_8 <= 0 ) /*0x4ee575*/
    return -1; /*0x4ee58c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4ee57b*/
  {
    if ( ++result >= m_8 ) /*0x4ee58a*/
      return -1; /*0x4ee58a*/
  }
  return result; /*0x4ee56a*/
}
} // namespace gamemd

// 0x4EE5A0
namespace gamemd {
unsigned int VectorClass_ptr_BulletTypeClass::LoadTypeData(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4ee5a7*/
}
} // namespace gamemd

// 0x4EE5C0
namespace gamemd {
char VectorClass_ptr_AnimTypeClass::SetCapacity_1(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ee5cc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ee5d8*/
      v4 = a3; /*0x4ee5ee*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ee5ea*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4ee5f6*/
      return 0; /*0x4ee66a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4ee604*/
        m_8 = a2; /*0x4ee606*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4ee611*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4ee629*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4ee65e*/
}
} // namespace gamemd

// 0x4EE670
namespace gamemd {
int VectorClass_ptr_AnimTypeClass::FindItemIndex_1(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4ee673*/
  if ( m_10 <= 0 ) /*0x4ee678*/
    return -1; /*0x4ee68f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4ee68d*/
      return -1; /*0x4ee68d*/
  }
  return result; /*0x4ee692*/
}
} // namespace gamemd

// 0x4EE6A0
namespace gamemd {
char VectorClass_ptr_VoxelAnimTypeClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4ee6ad*/
  {
    v3 = 0; /*0x4ee6af*/
    if ( m_8 <= 0 ) /*0x4ee6b3*/
      return 1; /*0x4ee6d3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4ee6bb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4ee6c4*/
    {
      ++v3; /*0x4ee6c6*/
      ++v4; /*0x4ee6c7*/
      if ( v3 >= m_8 ) /*0x4ee6cc*/
        return 1; /*0x4ee6cc*/
    }
  }
  return 0; /*0x4ee6ce*/
}
} // namespace gamemd

// 0x4EE6E0
namespace gamemd {
char VectorClass_ptr_VoxelAnimTypeClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4ee6ec*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ee6fc*/
      v4 = a3; /*0x4ee712*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ee70e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4ee71a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4ee731*/
          m_8 = a2; /*0x4ee733*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4ee73e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4ee756*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4ee778*/
    }
    else
    {
      return 0; /*0x4ee71f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4ee788*/
  }
}
} // namespace gamemd

// 0x4EE790
namespace gamemd {
void VectorClass_ptr_VoxelAnimTypeClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4ee7a3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4EE7C0
namespace gamemd {
int VectorClass_ptr_VoxelAnimTypeClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4ee7c8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4ee7d1*/
  if ( m_8 <= 0 ) /*0x4ee7d5*/
    return -1; /*0x4ee7ec*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4ee7db*/
  {
    if ( ++result >= m_8 ) /*0x4ee7ea*/
      return -1; /*0x4ee7ea*/
  }
  return result; /*0x4ee7ca*/
}
} // namespace gamemd

// 0x4EE800
namespace gamemd {
unsigned int VectorClass_ptr_VoxelAnimTypeClass::LoadTypeData(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4ee807*/
}
} // namespace gamemd

// 0x4EE820
namespace gamemd {
char VectorClass_ptr_VoxelAnimTypeClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ee82c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ee838*/
      v4 = a3; /*0x4ee84e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ee84a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4ee856*/
      return 0; /*0x4ee8ca*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4ee864*/
        m_8 = a2; /*0x4ee866*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4ee871*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4ee889*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4ee8be*/
}
} // namespace gamemd

// 0x4EE8D0
namespace gamemd {
int VectorClass_ptr_VoxelAnimTypeClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4ee8d3*/
  if ( m_10 <= 0 ) /*0x4ee8d8*/
    return -1; /*0x4ee8ef*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4ee8ed*/
      return -1; /*0x4ee8ed*/
  }
  return result; /*0x4ee8f2*/
}
} // namespace gamemd

// 0x4EE900
namespace gamemd {
char VectorClass_ptr_IsometricTileTypeClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4ee90d*/
  {
    v3 = 0; /*0x4ee90f*/
    if ( m_8 <= 0 ) /*0x4ee913*/
      return 1; /*0x4ee933*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4ee91b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4ee924*/
    {
      ++v3; /*0x4ee926*/
      ++v4; /*0x4ee927*/
      if ( v3 >= m_8 ) /*0x4ee92c*/
        return 1; /*0x4ee92c*/
    }
  }
  return 0; /*0x4ee92e*/
}
} // namespace gamemd

// 0x4EE940
namespace gamemd {
char VectorClass_ptr_IsometricTileTypeClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4ee94c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ee95c*/
      v4 = a3; /*0x4ee972*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ee96e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4ee97a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4ee991*/
          m_8 = a2; /*0x4ee993*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4ee99e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4ee9b6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4ee9d8*/
    }
    else
    {
      return 0; /*0x4ee97f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4ee9e8*/
  }
}
} // namespace gamemd

// 0x4EE9F0
namespace gamemd {
void VectorClass_ptr_IsometricTileTypeClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4eea03*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4EEA20
namespace gamemd {
int VectorClass_ptr_IsometricTileTypeClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4eea28*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4eea31*/
  if ( m_8 <= 0 ) /*0x4eea35*/
    return -1; /*0x4eea4c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4eea3b*/
  {
    if ( ++result >= m_8 ) /*0x4eea4a*/
      return -1; /*0x4eea4a*/
  }
  return result; /*0x4eea2a*/
}
} // namespace gamemd

// 0x4EEA60
namespace gamemd {
unsigned int VectorClass_ptr_IsometricTileTypeClass::LoadTypeData(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4eea67*/
}
} // namespace gamemd

// 0x4EEA80
namespace gamemd {
char VectorClass_ptr_VoxelAnimTypeClass::SetCapacity_0(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4eea8c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4eea98*/
      v4 = a3; /*0x4eeaae*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4eeaaa*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4eeab6*/
      return 0; /*0x4eeb2a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4eeac4*/
        m_8 = a2; /*0x4eeac6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4eead1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4eeae9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4eeb1e*/
}
} // namespace gamemd

// 0x4EEB30
namespace gamemd {
int VectorClass_ptr_VoxelAnimTypeClass::FindItemIndex_0(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4eeb33*/
  if ( m_10 <= 0 ) /*0x4eeb38*/
    return -1; /*0x4eeb4f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4eeb4d*/
      return -1; /*0x4eeb4d*/
  }
  return result; /*0x4eeb52*/
}
} // namespace gamemd

// 0x4EEB60
namespace gamemd {
char VectorClass_ptr_ParticleTypeClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4eeb6d*/
  {
    v3 = 0; /*0x4eeb6f*/
    if ( m_8 <= 0 ) /*0x4eeb73*/
      return 1; /*0x4eeb93*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4eeb7b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4eeb84*/
    {
      ++v3; /*0x4eeb86*/
      ++v4; /*0x4eeb87*/
      if ( v3 >= m_8 ) /*0x4eeb8c*/
        return 1; /*0x4eeb8c*/
    }
  }
  return 0; /*0x4eeb8e*/
}
} // namespace gamemd

// 0x4EEBA0
namespace gamemd {
char VectorClass_ptr_ParticleTypeClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4eebac*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4eebbc*/
      v4 = a3; /*0x4eebd2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4eebce*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4eebda*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4eebf1*/
          m_8 = a2; /*0x4eebf3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4eebfe*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4eec16*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4eec38*/
    }
    else
    {
      return 0; /*0x4eebdf*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4eec48*/
  }
}
} // namespace gamemd

// 0x4EEC50
namespace gamemd {
void VectorClass_ptr_ParticleTypeClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4eec63*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4EEC80
namespace gamemd {
int VectorClass_ptr_ParticleTypeClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4eec88*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4eec91*/
  if ( m_8 <= 0 ) /*0x4eec95*/
    return -1; /*0x4eecac*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4eec9b*/
  {
    if ( ++result >= m_8 ) /*0x4eecaa*/
      return -1; /*0x4eecaa*/
  }
  return result; /*0x4eec8a*/
}
} // namespace gamemd

// 0x4EECC0
namespace gamemd {
unsigned int VectorClass_ptr_ParticleTypeClass::LoadTypeData(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4eecc7*/
}
} // namespace gamemd

// 0x4EECE0
namespace gamemd {
char VectorClass_ptr_ParticleTypeClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4eecec*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4eecf8*/
      v4 = a3; /*0x4eed0e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4eed0a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4eed16*/
      return 0; /*0x4eed8a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4eed24*/
        m_8 = a2; /*0x4eed26*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4eed31*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4eed49*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4eed7e*/
}
} // namespace gamemd

// 0x4EED90
namespace gamemd {
int VectorClass_ptr_ParticleTypeClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4eed93*/
  if ( m_10 <= 0 ) /*0x4eed98*/
    return -1; /*0x4eedaf*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4eedad*/
      return -1; /*0x4eedad*/
  }
  return result; /*0x4eedb2*/
}
} // namespace gamemd

// 0x4EEDC0
namespace gamemd {
char VectorClass_ptr_ParticleSystemTypeClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4eedcd*/
  {
    v3 = 0; /*0x4eedcf*/
    if ( m_8 <= 0 ) /*0x4eedd3*/
      return 1; /*0x4eedf3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4eeddb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4eede4*/
    {
      ++v3; /*0x4eede6*/
      ++v4; /*0x4eede7*/
      if ( v3 >= m_8 ) /*0x4eedec*/
        return 1; /*0x4eedec*/
    }
  }
  return 0; /*0x4eedee*/
}
} // namespace gamemd

// 0x4EEE00
namespace gamemd {
char VectorClass_ptr_ParticleSystemTypeClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4eee0c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4eee1c*/
      v4 = a3; /*0x4eee32*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4eee2e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4eee3a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4eee51*/
          m_8 = a2; /*0x4eee53*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4eee5e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4eee76*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4eee98*/
    }
    else
    {
      return 0; /*0x4eee3f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4eeea8*/
  }
}
} // namespace gamemd

// 0x4EEEB0
namespace gamemd {
void VectorClass_ptr_ParticleSystemTypeClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4eeec3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4EEEE0
namespace gamemd {
int VectorClass_ptr_ParticleSystemTypeClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4eeee8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4eeef1*/
  if ( m_8 <= 0 ) /*0x4eeef5*/
    return -1; /*0x4eef0c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4eeefb*/
  {
    if ( ++result >= m_8 ) /*0x4eef0a*/
      return -1; /*0x4eef0a*/
  }
  return result; /*0x4eeeea*/
}
} // namespace gamemd

// 0x4EEF20
namespace gamemd {
unsigned int VectorClass_ptr_ParticleSystemTypeClass::LoadTypeData(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4eef27*/
}
} // namespace gamemd

// 0x4EEF40
namespace gamemd {
char VectorClass_ptr_ParticleTypeClass::SetCapacity_0(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4eef4c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4eef58*/
      v4 = a3; /*0x4eef6e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4eef6a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4eef76*/
      return 0; /*0x4eefea*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4eef84*/
        m_8 = a2; /*0x4eef86*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4eef91*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4eefa9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4eefde*/
}
} // namespace gamemd

// 0x4EEFF0
namespace gamemd {
int VectorClass_ptr_ParticleTypeClass::FindItemIndex_0(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4eeff3*/
  if ( m_10 <= 0 ) /*0x4eeff8*/
    return -1; /*0x4ef00f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4ef00d*/
      return -1; /*0x4ef00d*/
  }
  return result; /*0x4ef012*/
}
} // namespace gamemd

// 0x4EF020
namespace gamemd {
char VectorClass_ptr_SuperWeaponTypeClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4ef02d*/
  {
    v3 = 0; /*0x4ef02f*/
    if ( m_8 <= 0 ) /*0x4ef033*/
      return 1; /*0x4ef053*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4ef03b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4ef044*/
    {
      ++v3; /*0x4ef046*/
      ++v4; /*0x4ef047*/
      if ( v3 >= m_8 ) /*0x4ef04c*/
        return 1; /*0x4ef04c*/
    }
  }
  return 0; /*0x4ef04e*/
}
} // namespace gamemd

// 0x4EF060
namespace gamemd {
char VectorClass_ptr_SuperWeaponTypeClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4ef06c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ef07c*/
      v4 = a3; /*0x4ef092*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ef08e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4ef09a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4ef0b1*/
          m_8 = a2; /*0x4ef0b3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4ef0be*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4ef0d6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4ef0f8*/
    }
    else
    {
      return 0; /*0x4ef09f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4ef108*/
  }
}
} // namespace gamemd

// 0x4EF110
namespace gamemd {
void VectorClass_ptr_SuperWeaponTypeClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4ef123*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4EF140
namespace gamemd {
int VectorClass_ptr_SuperWeaponTypeClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4ef148*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4ef151*/
  if ( m_8 <= 0 ) /*0x4ef155*/
    return -1; /*0x4ef16c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4ef15b*/
  {
    if ( ++result >= m_8 ) /*0x4ef16a*/
      return -1; /*0x4ef16a*/
  }
  return result; /*0x4ef14a*/
}
} // namespace gamemd

// 0x4EF180
namespace gamemd {
unsigned int VectorClass_ptr_SuperWeaponTypeClass::LoadTypeData(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4ef187*/
}
} // namespace gamemd

// 0x4EF1A0
namespace gamemd {
char VectorClass_ptr_ParticleTypeClass::SetCapacity_1(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ef1ac*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ef1b8*/
      v4 = a3; /*0x4ef1ce*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ef1ca*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4ef1d6*/
      return 0; /*0x4ef24a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4ef1e4*/
        m_8 = a2; /*0x4ef1e6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4ef1f1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4ef209*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4ef23e*/
}
} // namespace gamemd

// 0x4EF250
namespace gamemd {
int VectorClass_ptr_ParticleTypeClass::FindItemIndex_1(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4ef253*/
  if ( m_10 <= 0 ) /*0x4ef258*/
    return -1; /*0x4ef26f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4ef26d*/
      return -1; /*0x4ef26d*/
  }
  return result; /*0x4ef272*/
}
} // namespace gamemd

// 0x4EF280
namespace gamemd {
char VectorClass_ptr_AbstractTypeClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4ef28d*/
  {
    v3 = 0; /*0x4ef28f*/
    if ( m_8 <= 0 ) /*0x4ef293*/
      return 1; /*0x4ef2b3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4ef29b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4ef2a4*/
    {
      ++v3; /*0x4ef2a6*/
      ++v4; /*0x4ef2a7*/
      if ( v3 >= m_8 ) /*0x4ef2ac*/
        return 1; /*0x4ef2ac*/
    }
  }
  return 0; /*0x4ef2ae*/
}
} // namespace gamemd

// 0x4EF2C0
namespace gamemd {
char VectorClass_ptr_AbstractTypeClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4ef2cc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ef2dc*/
      v4 = a3; /*0x4ef2f2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ef2ee*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4ef2fa*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4ef311*/
          m_8 = a2; /*0x4ef313*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4ef31e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4ef336*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4ef358*/
    }
    else
    {
      return 0; /*0x4ef2ff*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4ef368*/
  }
}
} // namespace gamemd

// 0x4EF370
namespace gamemd {
void VectorClass_ptr_AbstractTypeClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4ef383*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4EF3A0
namespace gamemd {
int VectorClass_ptr_AbstractTypeClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4ef3a8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4ef3b1*/
  if ( m_8 <= 0 ) /*0x4ef3b5*/
    return -1; /*0x4ef3cc*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4ef3bb*/
  {
    if ( ++result >= m_8 ) /*0x4ef3ca*/
      return -1; /*0x4ef3ca*/
  }
  return result; /*0x4ef3aa*/
}
} // namespace gamemd

// 0x4EF3E0
namespace gamemd {
unsigned int VectorClass_ptr_AbstractTypeClass::LoadTypeData(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4ef3e7*/
}
} // namespace gamemd

// 0x4EF400
namespace gamemd {
char VectorClass_ptr_SuperClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ef40c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ef418*/
      v4 = a3; /*0x4ef42e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ef42a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4ef436*/
      return 0; /*0x4ef4aa*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4ef444*/
        m_8 = a2; /*0x4ef446*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4ef451*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x4ef469*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4ef49e*/
}
} // namespace gamemd

// 0x4EF4B0
namespace gamemd {
int VectorClass_ptr_SuperClass::FindItemIndex_0(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4ef4b3*/
  if ( m_10 <= 0 ) /*0x4ef4b8*/
    return -1; /*0x4ef4cf*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4ef4cd*/
      return -1; /*0x4ef4cd*/
  }
  return result; /*0x4ef4d2*/
}
} // namespace gamemd

// 0x4EF580
namespace gamemd {
VectorClass_flat * VectorClass_Building::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_BuildingClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4ef598*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4ef5b8*/
    RA2_OPDEL(Block); /*0x4ef5bb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4EF620
namespace gamemd {
VectorClass_flat * VectorClass_ptr_SuperClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_SuperClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4ef638*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4ef658*/
    RA2_OPDEL(Block); /*0x4ef65b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4EF670
namespace gamemd {
DynamicVector * VectorClass_ptr_SuperClass::Constructor_VectorClass_SuperClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_SuperClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4ef688*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4ef6a8*/
    RA2_OPDEL(Block); /*0x4ef6ab*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x4EF6C0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_AITriggerTypeClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_AITriggerTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4ef6d8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4ef6f8*/
    RA2_OPDEL(Block); /*0x4ef6fb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4EF710
namespace gamemd {
DynamicVector * VectorClass_ptr_AITriggerTypeClass::Constructor_VectorClass_AITriggerTypeClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_AITriggerTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4ef728*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4ef748*/
    RA2_OPDEL(); /*0x4ef74b*/
  return this; /*0x4ef755*/
}
} // namespace gamemd

// 0x4EF760
namespace gamemd {
VectorClass_flat * VectorClass_ptr_BuildingLightClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_BuildingLightClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4ef778*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4ef798*/
    RA2_OPDEL(Block); /*0x4ef79b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4EF7B0
namespace gamemd {
DynamicVector * VectorClass_ptr_BuildingLightClass::Constructor_VectorClass_BuildingLightClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_BuildingLightClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4ef7c8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4ef7e8*/
    RA2_OPDEL(); /*0x4ef7eb*/
  return this; /*0x4ef7f5*/
}
} // namespace gamemd

// 0x4EF8A0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_TeamClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_TeamClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4ef8b8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4ef8d8*/
    RA2_OPDEL(Block); /*0x4ef8db*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4EF8F0
namespace gamemd {
DynamicVector * VectorClass_ptr_TeamClass::Constructor_VectorClass_TeamClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_TeamClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4ef908*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4ef928*/
    RA2_OPDEL(Block); /*0x4ef92b*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x4EF940
namespace gamemd {
VectorClass_flat * VectorClass_ptr_ThemeControl::Add(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_ThemeControl;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4ef958*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4ef978*/
    RA2_OPDEL(Block); /*0x4ef97b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4EF990
namespace gamemd {
VectorClass_flat * VectorClass_ptr_TriggerClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_TriggerClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4ef9a8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4ef9c8*/
    RA2_OPDEL(Block); /*0x4ef9cb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4EF9E0
namespace gamemd {
DynamicVector * VectorClass_ptr_AITriggerTypeClass::Constructor_VectorClass_TriggerClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_TriggerClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4ef9f8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4efa18*/
    RA2_OPDEL(); /*0x4efa1b*/
  return this; /*0x4efa25*/
}
} // namespace gamemd

// 0x4EFA30
namespace gamemd {
VectorClass_flat * VectorClass_ptr_TriggerTypeClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_TriggerTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4efa48*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4efa68*/
    RA2_OPDEL(Block); /*0x4efa6b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4EFA80
namespace gamemd {
DynamicVector * VectorClass_ptr_AITriggerTypeClass::Constructor_VectorClass_TriggerTypeClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_TriggerTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4efa98*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4efab8*/
    RA2_OPDEL(); /*0x4efabb*/
  return this; /*0x4efac5*/
}
} // namespace gamemd

// 0x4EFAD0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_TubeClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_TubeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4efae8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4efb08*/
    RA2_OPDEL(Block); /*0x4efb0b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4EFB20
namespace gamemd {
DynamicVector * VectorClass_ptr_TubeClass::Constructor_VectorClass_TubeClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_TubeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4efb38*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4efb58*/
    RA2_OPDEL(Block); /*0x4efb5b*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x4EFB70
namespace gamemd {
VectorClass_flat * VectorClass_ptr_ParticleSystemClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_ParticleSystemClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4efb88*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4efba8*/
    RA2_OPDEL(Block); /*0x4efbab*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4EFBC0
namespace gamemd {
DynamicVector * VectorClass_ptr_BuildingLightClass::Constructor_VectorClass_ParticleSystemClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_ParticleSystemClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4efbd8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4efbf8*/
    RA2_OPDEL(); /*0x4efbfb*/
  return this; /*0x4efc05*/
}
} // namespace gamemd

// 0x4EFC10
namespace gamemd {
VectorClass_flat * VectorClass_ptr_WaveClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_WaveClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4efc28*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4efc48*/
    RA2_OPDEL(Block); /*0x4efc4b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4EFC60
namespace gamemd {
DynamicVector * VectorClass_ptr_TubeClass::Constructor_VectorClass_WaveClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_WaveClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4efc78*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4efc98*/
    RA2_OPDEL(Block); /*0x4efc9b*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x4EFCB0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_OverlayClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_OverlayClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4efcc8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4efce8*/
    RA2_OPDEL(Block); /*0x4efceb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4EFD00
namespace gamemd {
DynamicVector * VectorClass_ptr_TubeClass::Constructor_VectorClass_OverlayClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_OverlayClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4efd18*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4efd38*/
    RA2_OPDEL(Block); /*0x4efd3b*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x4EFE90
namespace gamemd {
VectorClass_flat * VectorClass_ptr_AircraftClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_AircraftClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4efea8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4efec8*/
    RA2_OPDEL(Block); /*0x4efecb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4EFF30
namespace gamemd {
VectorClass_flat * VectorClass_ptr_UnitClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_UnitClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4eff48*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4eff68*/
    RA2_OPDEL(Block); /*0x4eff6b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4EFF80
namespace gamemd {
DynamicVector * VectorClass_ptr_UnitClass::Constructor_VectorClass_UnitClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_UnitClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4eff98*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4effb8*/
    RA2_OPDEL(Block); /*0x4effbb*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x4EFFD0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_HouseClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_HouseClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4effe8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0008*/
    RA2_OPDEL(Block); /*0x4f000b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4F0020
namespace gamemd {
DynamicVector * VectorClass_ptr_UnitClass::Constructor_VectorClass_HouseClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_HouseClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0038*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0058*/
    RA2_OPDEL(Block); /*0x4f005b*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x4F0070
namespace gamemd {
VectorClass_flat * VectorClass_ptr_AnimClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_AnimClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0088*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f00a8*/
    RA2_OPDEL(Block); /*0x4f00ab*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4F00C0
namespace gamemd {
DynamicVector * VectorClass_ptr_TeamClass::Constructor_VectorClass_AnimClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_AnimClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f00d8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f00f8*/
    RA2_OPDEL(Block); /*0x4f00fb*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x4F0110
namespace gamemd {
VectorClass_flat * VectorClass_ptr_FactoryClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_FactoryClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0128*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0148*/
    RA2_OPDEL(Block); /*0x4f014b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4F0160
namespace gamemd {
DynamicVector * VectorClass_ptr_TeamClass::Constructor_VectorClass_FactoryClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_FactoryClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0178*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0198*/
    RA2_OPDEL(Block); /*0x4f019b*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x4F01B0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_CampaignClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_CampaignClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f01c8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f01e8*/
    RA2_OPDEL(Block); /*0x4f01eb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4F0200
namespace gamemd {
DynamicVector * VectorClass_ptr_CampaignClass::Constructor_VectorClass_CampaignClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_CampaignClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0218*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0238*/
    RA2_OPDEL(); /*0x4f023b*/
  return this; /*0x4f0245*/
}
} // namespace gamemd

// 0x4F0250
namespace gamemd {
VectorClass_flat * VectorClass_ptr_SideClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_SideClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0268*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0288*/
    RA2_OPDEL(Block); /*0x4f028b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4F02A0
namespace gamemd {
DynamicVector * VectorClass_ptr_CampaignClass::Constructor_VectorClass_SideClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_SideClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f02b8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f02d8*/
    RA2_OPDEL(Block); /*0x4f02db*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x4F02F0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_HouseTypeClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_HouseTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0308*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0328*/
    RA2_OPDEL(Block); /*0x4f032b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4F0340
namespace gamemd {
DynamicVector * VectorClass_ptr_HouseTypeClass::Constructor_VectorClass_HouseTypeClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_HouseTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0358*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0378*/
    RA2_OPDEL(); /*0x4f037b*/
  return this; /*0x4f0385*/
}
} // namespace gamemd

// 0x4F0390
namespace gamemd {
VectorClass_flat * VectorClass_ptr_TaskForceClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_TaskForceClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f03a8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f03c8*/
    RA2_OPDEL(Block); /*0x4f03cb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4F03E0
namespace gamemd {
DynamicVector * VectorClass_ptr_HouseTypeClass::Constructor_VectorClass_TaskForceClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_TaskForceClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f03f8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0418*/
    RA2_OPDEL(); /*0x4f041b*/
  return this; /*0x4f0425*/
}
} // namespace gamemd

// 0x4F0430
namespace gamemd {
VectorClass_flat * VectorClass_ptr_TeamTypeClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_TeamTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0448*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0468*/
    RA2_OPDEL(Block); /*0x4f046b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4F0480
namespace gamemd {
DynamicVector * VectorClass_ptr_HouseTypeClass::Constructor_VectorClass_TeamTypeClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_TeamTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0498*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f04b8*/
    RA2_OPDEL(); /*0x4f04bb*/
  return this; /*0x4f04c5*/
}
} // namespace gamemd

// 0x4F04D0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_ScriptTypeClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_ScriptTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f04e8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0508*/
    RA2_OPDEL(Block); /*0x4f050b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4F0520
namespace gamemd {
DynamicVector * VectorClass_ptr_ScriptTypeClass::Constructor_VectorClass_ScriptTypeClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_ScriptTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0538*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0558*/
    RA2_OPDEL(); /*0x4f055b*/
  return this; /*0x4f0565*/
}
} // namespace gamemd

// 0x4F0570
namespace gamemd {
VectorClass_flat * VectorClass_ptr_OverlayTypeClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_OverlayTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0588*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f05a8*/
    RA2_OPDEL(Block); /*0x4f05ab*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4F05C0
namespace gamemd {
DynamicVector * VectorClass_ptr_ScriptTypeClass::Constructor_VectorClass_OverlayTypeClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_OverlayTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f05d8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f05f8*/
    RA2_OPDEL(); /*0x4f05fb*/
  return this; /*0x4f0605*/
}
} // namespace gamemd

// 0x4F0610
namespace gamemd {
VectorClass_flat * VectorClass_ptr_SmudgeTypeClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_SmudgeTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0628*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0648*/
    RA2_OPDEL(Block); /*0x4f064b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4F0660
namespace gamemd {
DynamicVector * VectorClass_ptr_SmudgeTypeClass::Constructor_VectorClass_SmudgeTypeClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_SmudgeTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0678*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0698*/
    RA2_OPDEL(); /*0x4f069b*/
  return this; /*0x4f06a5*/
}
} // namespace gamemd

// 0x4F06B0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_TerrainTypeClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_TerrainTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f06c8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f06e8*/
    RA2_OPDEL(Block); /*0x4f06eb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4F0700
namespace gamemd {
DynamicVector * VectorClass_ptr_SmudgeTypeClass::Constructor_VectorClass_TerrainTypeClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_TerrainTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0718*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0738*/
    RA2_OPDEL(); /*0x4f073b*/
  return this; /*0x4f0745*/
}
} // namespace gamemd

// 0x4F0750
namespace gamemd {
VectorClass_flat * VectorClass_ptr_BuildingTypeClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_BuildingTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0768*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0788*/
    RA2_OPDEL(Block); /*0x4f078b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4F07A0
namespace gamemd {
DynamicVector * VectorClass_ptr_SmudgeTypeClass::Constructor_VectorClass_BuildingTypeClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_BuildingTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f07b8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f07d8*/
    RA2_OPDEL(); /*0x4f07db*/
  return this; /*0x4f07e5*/
}
} // namespace gamemd

// 0x4F07F0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_AircraftTypeClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_AircraftTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0808*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0828*/
    RA2_OPDEL(Block); /*0x4f082b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4F0840
namespace gamemd {
DynamicVector * VectorClass_ptr_AircraftTypeClass::Constructor_VectorClass_AircraftTypeClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_AircraftTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0858*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0878*/
    RA2_OPDEL(); /*0x4f087b*/
  return this; /*0x4f0885*/
}
} // namespace gamemd

// 0x4F0890
namespace gamemd {
VectorClass_flat * VectorClass_ptr_UnitTypeClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_UnitTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f08a8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f08c8*/
    RA2_OPDEL(Block); /*0x4f08cb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4F08E0
namespace gamemd {
DynamicVector * VectorClass_ptr_AircraftTypeClass::Constructor_VectorClass_UnitTypeClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_UnitTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f08f8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0918*/
    RA2_OPDEL(); /*0x4f091b*/
  return this; /*0x4f0925*/
}
} // namespace gamemd

// 0x4F0930
namespace gamemd {
VectorClass_flat * VectorClass_ptr_AnimTypeClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_AnimTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0948*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0968*/
    RA2_OPDEL(Block); /*0x4f096b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4F0980
namespace gamemd {
DynamicVector * VectorClass_ptr_AnimTypeClass::Constructor_VectorClass_AnimTypeClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_AnimTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0998*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f09b8*/
    RA2_OPDEL(); /*0x4f09bb*/
  return this; /*0x4f09c5*/
}
} // namespace gamemd

// 0x4F09D0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_InfantryTypeClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_InfantryTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f09e8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0a08*/
    RA2_OPDEL(Block); /*0x4f0a0b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4F0A20
namespace gamemd {
DynamicVector * VectorClass_ptr_AnimTypeClass::Constructor_VectorClass_InfantryTypeClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_InfantryTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0a38*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0a58*/
    RA2_OPDEL(); /*0x4f0a5b*/
  return this; /*0x4f0a65*/
}
} // namespace gamemd

// 0x4F0A70
namespace gamemd {
VectorClass_flat * VectorClass_ptr_BulletTypeClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_BulletTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0a88*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0aa8*/
    RA2_OPDEL(Block); /*0x4f0aab*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4F0AC0
namespace gamemd {
DynamicVector * VectorClass_ptr_AnimTypeClass::Constructor_VectorClass_BulletTypeClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_BulletTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0ad8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0af8*/
    RA2_OPDEL(); /*0x4f0afb*/
  return this; /*0x4f0b05*/
}
} // namespace gamemd

// 0x4F0B10
namespace gamemd {
VectorClass_flat * VectorClass_ptr_VoxelAnimTypeClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_VoxelAnimTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0b28*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0b48*/
    RA2_OPDEL(Block); /*0x4f0b4b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4F0B60
namespace gamemd {
DynamicVector * VectorClass_ptr_VoxelAnimTypeClass::Constructor_VectorClass_VoxelAnimTypeClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_VoxelAnimTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0b78*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0b98*/
    RA2_OPDEL(); /*0x4f0b9b*/
  return this; /*0x4f0ba5*/
}
} // namespace gamemd

// 0x4F0BB0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_IsometricTileTypeClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_IsometricTileTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0bc8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0be8*/
    RA2_OPDEL(Block); /*0x4f0beb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4F0C00
namespace gamemd {
DynamicVector * VectorClass_ptr_VoxelAnimTypeClass::Constructor_VectorClass_IsometricTileTypeClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_IsometricTileTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0c18*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0c38*/
    RA2_OPDEL(); /*0x4f0c3b*/
  return this; /*0x4f0c45*/
}
} // namespace gamemd

// 0x4F0C50
namespace gamemd {
VectorClass_flat * VectorClass_ptr_ParticleTypeClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_ParticleTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0c68*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0c88*/
    RA2_OPDEL(Block); /*0x4f0c8b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4F0CA0
namespace gamemd {
DynamicVector * VectorClass_ptr_ParticleTypeClass::Constructor_VectorClass_ParticleTypeClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_ParticleTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0cb8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0cd8*/
    RA2_OPDEL(); /*0x4f0cdb*/
  return this; /*0x4f0ce5*/
}
} // namespace gamemd

// 0x4F0CF0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_ParticleSystemTypeClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_ParticleSystemTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0d08*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0d28*/
    RA2_OPDEL(Block); /*0x4f0d2b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4F0D40
namespace gamemd {
DynamicVector * VectorClass_ptr_ParticleTypeClass::Constructor_VectorClass_ParticleSystemTypeClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_ParticleSystemTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0d58*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0d78*/
    RA2_OPDEL(); /*0x4f0d7b*/
  return this; /*0x4f0d85*/
}
} // namespace gamemd

// 0x4F0D90
namespace gamemd {
VectorClass_flat * VectorClass_ptr_SuperWeaponTypeClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_SuperWeaponTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0da8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0dc8*/
    RA2_OPDEL(Block); /*0x4f0dcb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4F0DE0
namespace gamemd {
DynamicVector * VectorClass_ptr_ParticleTypeClass::Constructor_VectorClass_SuperWeaponTypeClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_SuperWeaponTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0df8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0e18*/
    RA2_OPDEL(); /*0x4f0e1b*/
  return this; /*0x4f0e25*/
}
} // namespace gamemd

// 0x4F0E30
namespace gamemd {
VectorClass_flat * VectorClass_ptr_AbstractTypeClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_AbstractTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0e48*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0e68*/
    RA2_OPDEL(Block); /*0x4f0e6b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x4F0E80
namespace gamemd {
DynamicVector * VectorClass_ptr_SuperClass::Constructor_VectorClass_AbstractTypeClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_AbstractTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4f0e98*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4f0eb8*/
    RA2_OPDEL(); /*0x4f0ebb*/
  return this; /*0x4f0ec5*/
}
} // namespace gamemd

// 0x4F6910
namespace gamemd {
bool VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItemIndex(int a1)
{
  int v2; // [esp+8h] [ebp+4h]

  return *(unsigned int *)(v2 + 21372) >= *(unsigned int *)(v2 + 21376); /*0x4f6925*/
}
} // namespace gamemd

// 0x4F6930
namespace gamemd {
void * VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItemIndex_0(int a2)
{
  Class_7EA834 *v3; // [esp+0h] [ebp-4h] BYREF

  v3 = this; /*0x4f6930*/
  sub_429360((int)&punk, &unk_7E36C0, &v3); /*0x4f6940*/
  return v3; /*0x4f694a*/
}
} // namespace gamemd

// 0x4F6950
namespace gamemd {
BSTR VectorClass_ptr_BuildChoiceClass_int_ouseClass::FindItemIndex(int a1)
{
  WCHAR WideCharStr[32]; // [esp+0h] [ebp-40h] BYREF

  MultiByteToWideChar(0, 1u, (LPCCH)(*(unsigned int *)(a1 + 16) + 100), -1, WideCharStr, 32); /*0x4f696b*/
  return SysAllocString(WideCharStr); /*0x4f697c*/
}
} // namespace gamemd

// 0x4F6990
namespace gamemd {
long long VectorClass_ptr_BuildChoiceClass_int_ouseClass::FindItemIndex_0(int a1)
{
  int64_t result; // rax
  int v3; // kr00_4
  float v4; // [esp+4h] [ebp-4h]
  HouseClass *thisa; // [esp+Ch] [ebp+4h]

  v4 = *(float *)(a1->? + 328); /*0x4f699f*/
  thisa = (HouseClass *)AbstractClass::GetTotalValue((float *)&a1->poweredUnitCenters); /*0x4f69ae*/
  v3 = Math::RoundToInt((double)(int)thisa * v4 + (double)a1->ownedUnits); /*0x4f69c0*/
  IDA_WORD2(result) = IDA_HIWORD(v3); /*0x4f69c0*/
  IDA_LOWORD(result) = v3; /*0x4f69c0*/
  return result; /*0x4f69c5*/
}
} // namespace gamemd

// 0x4F69D0
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::Destroy(int a1)
{
  double v1; // st7
  int v2; // eax

  Float4::Sum(&a1->poweredUnitCenters); /*0x4f69db*/
  IDA_LOWORD(v2) = Math::RoundToInt(v1); /*0x4f69e0*/
  return a1->ownedNavy - v2; /*0x4f69eb*/
}
} // namespace gamemd

// 0x4F6A00
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem(int a1)
{
    return *(unsigned int *)(a1 + 21376);
}
} // namespace gamemd

// 0x4F6A10
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_0(int a1)
{
    return *(unsigned int *)(a1 + 21380);
}
} // namespace gamemd

// 0x4F6E60
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_1(int a1)
{
  int v2; // [esp+4h] [ebp+4h]

  return *(unsigned int *)(v2 + 12); /*0x4f6e67*/
}
} // namespace gamemd

// 0x5013A0
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::ScalarDeletingDestructor(unsigned int * a1)
{
  int repairStationsCount; // ebx
  int i; // esi
  int v3; // ecx

    if ( (int)a1[179] <= 0 )
    return 1; /*0x5013ec*/
    v1 = a1[21];
  for ( i = 0; i < repairStationsCount; ++i ) /*0x5013b8*/
  {
        v3 = *(unsigned int *)(a1[18] + 4 * i);
    if ( v3 && !*(unsigned char *)(v3 + 129) && *(int *)(v3 + 108) > 0 ) /*0x5013d3*/
      (*(void (**)(int, int))(*(unsigned int *)v3 + 416))(v3, 1); /*0x5013d9*/
  }
  return 0; /*0x5013e8*/
}
} // namespace gamemd

// 0x5024F0
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::StubReturnNullPointer(int a1, unsigned int * a2)
{
  VectorClass_ptr_BuildChoiceClass_int_ouseClass *v3; // eax
  unsigned int *v4; // eax
  unsigned int *v5; // esi

  if ( !a2 ) /*0x5024f8*/
    return -2147467261; /*0x5024fb*/
  v3 = (VectorClass_ptr_BuildChoiceClass_int_ouseClass *)RA2_OPNEW(0x24u); /*0x502506*/
  if ( !v3 ) /*0x502510*/
    return -2147024882; /*0x502510*/
  v4 = VectorClass_ptr_BuildChoiceClass_int_ouseClass::Constructor(v3, &a1->uiName[18]); /*0x50251f*/
  v5 = v4; /*0x502524*/
  if ( !v4 ) /*0x502528*/
    return -2147024882; /*0x50252b*/
  (*(void (__stdcall **)(unsigned int *))(*v4 + 4))(v4); /*0x502537*/
  *a2 = v5; /*0x50253a*/
  return 0; /*0x5024fa*/
}
} // namespace gamemd

// 0x502550
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::StubReturnNullPointer_0(int a1, const void * a2, unsigned int * a3)
{
  int v4; // ebp
  int v5; // ebx
  unsigned char v6[16]; // [esp+10h] [ebp-10h] BYREF

  if ( !a3 ) /*0x50255d*/
    return -2147467261; /*0x502562*/
  *a3 = 0; /*0x50256e*/
  v4 = 0; /*0x502578*/
    if ( *(int *)(a1 + 90184) <= 0 )
    return -2147220990; /*0x5025bc*/
  while ( 1 ) /*0x502593*/
  {
      while ( 1 )
    (*(void (__stdcall **)(int, unsigned char *))(*(unsigned int *)v5 + 12))(v5, v6); /*0x502599*/
    if ( !memcmp(v6, a2, 0x10u) ) /*0x5025ab*/
      break; /*0x5025ab*/
        if ( ++v4 >= *(unsigned int *)(a1 + 90184) )
      return -2147220990; /*0x5025ba*/
  }
  *a3 = v5; /*0x5025d0*/
  (*(void (__stdcall **)(int))(*(unsigned int *)v5 + 4))(v5); /*0x5025d4*/
  return 0; /*0x50255f*/
}
} // namespace gamemd

// 0x50E4A0
namespace gamemd {
void VectorClass_UScoutStruct___33::ddtor()
{
  void *v2; // eax

  v2 = *(void **)&this->ptr_4; /*0x50e4a6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x50e4b6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x50E4D0
namespace gamemd {
unsigned int VectorClass_UScoutStruct___33::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x50e4d7*/
}
} // namespace gamemd

// 0x50E4F0
namespace gamemd {
int VectorClass_BuildingType::Count(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x50E500
namespace gamemd {
void VectorClass_UAngerStruct::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x50e506*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x50e516*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x50E530
namespace gamemd {
unsigned int VectorClass_UAngerStruct::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x50e537*/
}
} // namespace gamemd

// 0x50E550
namespace gamemd {
int VectorClass_UAngerStruct___16::Clear(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x50E560
namespace gamemd {
void VectorClass_UAngerStruct::Destroy_0()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x50e566*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x50e576*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x50E590
namespace gamemd {
unsigned int VectorClass_UAngerStruct::GetItemIndex_0(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 3;
  else
    return 0; /*0x50e597*/
}
} // namespace gamemd

// 0x50E5B0
namespace gamemd {
unsigned int * VectorClass_UAngerStruct::Clear(unsigned int * v4, int a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx

    v3 = *((unsigned int *)this + 4);
  v4 = *(unsigned int *)(v3 + 8 * a3); /*0x50e5b7*/
  v5 = v3 + 8 * a3; /*0x50e5ba*/
  *v4 = v4; /*0x50e5c1*/
  v4[1] = *(unsigned int *)(v5 + 4); /*0x50e5c6*/
  return v4; /*0x50e5c9*/
}
} // namespace gamemd

// 0x50E620
namespace gamemd {
int VectorClass_UScoutStruct::Clear(int v4, int a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx

    v3 = *((unsigned int *)this + 4);
  v4 = *(unsigned int *)(v3 + 8 * a3); /*0x50e627*/
  v5 = v3 + 8 * a3; /*0x50e62a*/
  *(unsigned int *)v4 = v4; /*0x50e631*/
  *(unsigned char *)(v4 + 4) = *(unsigned char *)(v5 + 4); /*0x50e636*/
  return v4; /*0x50e639*/
}
} // namespace gamemd

// 0x50E640
namespace gamemd {
void VectorClass_ptr_BuildChoiceClass_int_ouseClass::Destroy_0()
{
  void *Items; // eax

  Items = *(unsigned int *)&this->Items; /*0x50e646*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(Items); /*0x50e656*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x50E670
namespace gamemd {
unsigned int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItemIndex_1(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x50e677*/
}
} // namespace gamemd

// 0x50E690
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x50E6A0
namespace gamemd {
void VectorClass_BuildingType::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x50e6a6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x50e6b6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x50E6D0
namespace gamemd {
unsigned int VectorClass_BuildingType::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x50e6d7*/
}
} // namespace gamemd

// 0x50E6F0
namespace gamemd {
int VectorClass_BuildingType::GetElement(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x50E700
namespace gamemd {
void VectorClass__N::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x50e706*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x50e716*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x50E730
namespace gamemd {
int VectorClass__N::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return a2 - *((unsigned int *)this + 16);
  else
    return 0; /*0x50e737*/
}
} // namespace gamemd

// 0x50E750
namespace gamemd {
char VectorClass__N::Clear(int a2)
{
    return *(unsigned char *)(*((unsigned int *)this + 4) + a2);
}
} // namespace gamemd

// 0x50E760
namespace gamemd {
void VectorClass__N_18::Destroy()
{
  int v2; // eax

    v2 = *((unsigned int *)this + 16);
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL((void *)(v2 - 4)); /*0x50e781*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x50E7A0
namespace gamemd {
unsigned int VectorClass__N_18::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 3;
  else
    return 0; /*0x50e7a7*/
}
} // namespace gamemd

// 0x50E7C0
namespace gamemd {
unsigned int * VectorClass__N_18::Clear(unsigned int * v4, int a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx

    v3 = *((unsigned int *)this + 4);
  v4 = *(unsigned int *)(v3 + 8 * a3); /*0x50e7c7*/
  v5 = v3 + 8 * a3; /*0x50e7ca*/
  *v4 = v4; /*0x50e7d1*/
  v4[1] = *(unsigned int *)(v5 + 4); /*0x50e7d6*/
  return v4; /*0x50e7d9*/
}
} // namespace gamemd

// 0x50E7E0
namespace gamemd {
TypeList_flat * VectorClass_BuildingType::Constructor(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*((unsigned int *)Block + 1); /*0x50e7e3*/
  *(unsigned int *)Block = (void*)&VectorClass_TeamTypeClass_const___vftable; /*0x50e7e6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x50e7f0*/
  {
    RA2_OPDEL(v3); /*0x50e7f8*/
    *((unsigned int *)Block + 1) = 0; /*0x50e800*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x50e80b*/
  *((unsigned int *)Block + 2) = 0; /*0x50e811*/
  if ( (a2 & 1) != 0 ) /*0x50e818*/
    RA2_OPDEL(Block); /*0x50e81b*/
  return Block; /*0x50e825*/
}
} // namespace gamemd

// 0x50E8C0
namespace gamemd {
DynamicVector * VectorClass__N_18::Constructor(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_TeamTypeClass_const;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x50e8d8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x50e8f8*/
    RA2_OPDEL(Block); /*0x50e8fb*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x50E910
namespace gamemd {
char VectorClass_BuildingType::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x50e91d*/
  {
    v3 = 0; /*0x50e91f*/
    if ( m_8 <= 0 ) /*0x50e923*/
      return 1; /*0x50e943*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x50e92b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x50e934*/
    {
      ++v3; /*0x50e936*/
      ++v4; /*0x50e937*/
      if ( v3 >= m_8 ) /*0x50e93c*/
        return 1; /*0x50e93c*/
    }
  }
  return 0; /*0x50e93e*/
}
} // namespace gamemd

// 0x50E950
namespace gamemd {
char VectorClass_BuildingType::Set(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x50e95c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x50e96c*/
      v4 = a3; /*0x50e982*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x50e97e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x50e98a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x50e9a1*/
          m_8 = a2; /*0x50e9a3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x50e9ae*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x50e9c6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x50e9e8*/
    }
    else
    {
      return 0; /*0x50e98f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x50e9f8*/
  }
}
} // namespace gamemd

// 0x50EA30
namespace gamemd {
int VectorClass_BuildingType::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x50ea38*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x50ea41*/
  if ( m_8 <= 0 ) /*0x50ea45*/
    return -1; /*0x50ea5c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x50ea4b*/
  {
    if ( ++result >= m_8 ) /*0x50ea5a*/
      return -1; /*0x50ea5a*/
  }
  return result; /*0x50ea3a*/
}
} // namespace gamemd

// 0x50EA70
namespace gamemd {
unsigned int VectorClass_BuildingType::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x50ea77*/
}
} // namespace gamemd

// 0x50EB40
namespace gamemd {
int VectorClass_UScoutStruct___33::GetSize(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x50eb43*/
  if ( m_10 <= 0 ) /*0x50eb48*/
    return -1; /*0x50eb5f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x50eb5d*/
      return -1; /*0x50eb5d*/
  }
  return result; /*0x50eb62*/
}
} // namespace gamemd

// 0x50EB70
char VectorClass_flat::InsertAt(IUnknown * aP1, int a3)
{
  int Capacity; // ecx
  int CapacityIncrement; // eax
  int Count; // edx
  unsigned int *v8; // edi

    v4 = *((unsigned int *)this + 8);
    if ( *((unsigned int *)this + 16) >= v4 )
  {
        if ( !*((unsigned char *)this + 13) && v4 )
      return 0; /*0x50eb86*/
        v5 = *((unsigned int *)this + 20);
    if ( CapacityIncrement <= 0 /*0x50eb98*/
      || !(*(uint8_t (**)(DynamicVectorClass *, int, unsigned int))(this->vtable0 + 8))(
            this,
            Capacity + CapacityIncrement,
            0) )
    {
      return 0; /*0x50eb9f*/
    }
  }
    v7 = *((unsigned int *)this + 16);
  if ( a3 < Count - 1 ) /*0x50ebb2*/
    memcpy( /*0x50ebd7*/
      (void *)(this->Items + 16 * (a3 + 2)),
      (const void *)(this->Items + 16 * (a3 + 1)),
      16 * (Count + 0xFFFFFFF * (a3 + 1)));
    v8 = (int *)(*((unsigned int *)this + 4) + 16 * (a3 + 1));
  *v8 = *aP1; /*0x50ebef*/
  v8[1] = aP1[1]; /*0x50ebf4*/
  v8[2] = aP1[2]; /*0x50ebfa*/
  v8[3] = aP1[3]; /*0x50ec00*/
    ++*((unsigned int *)this + 16);
  return 1; /*0x50eba1*/
}
// 0x50EC20
namespace gamemd {
char VectorClass_UAngerStruct___16::AddRef(int a2)
{
  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
    if ( v2 == *(unsigned int *)(a2 + 8) )
  {
    v3 = 0; /*0x50ec2f*/
    if ( v2 <= 0 ) /*0x50ec33*/
      return 1; /*0x50ec53*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
        v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4;
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x50ec44*/
    {
      ++v3; /*0x50ec46*/
      ++v4; /*0x50ec47*/
      if ( v3 >= v2 ) /*0x50ec4c*/
        return 1; /*0x50ec4c*/
    }
  }
  return 0; /*0x50ec4e*/
}
} // namespace gamemd

// 0x50EC60
namespace gamemd {
char VectorClass_UAngerStruct___16::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x50ec6c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x50ec7c*/
      v4 = a3; /*0x50ec92*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x50ec8e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x50ec9a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x50ecb1*/
          m_8 = a2; /*0x50ecb3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x50ecbe*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->ptr_4); /*0x50ecd6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x50ecf8*/
    }
    else
    {
      return 0; /*0x50ec9f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x50ed08*/
  }
}
} // namespace gamemd

// 0x50ED10
namespace gamemd {
void VectorClass_UAngerStruct___16::ddtor()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->ptr_4); /*0x50ed23*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x50ED40
namespace gamemd {
int VectorClass_UAngerStruct___16::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x50ed48*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x50ed51*/
  if ( m_8 <= 0 ) /*0x50ed55*/
    return -1; /*0x50ed6c*/
  for ( i = *(unsigned int **)&this->ptr_4; *i != *a2; ++i ) /*0x50ed5b*/
  {
    if ( ++result >= m_8 ) /*0x50ed6a*/
      return -1; /*0x50ed6a*/
  }
  return result; /*0x50ed4a*/
}
} // namespace gamemd

// 0x50ED80
namespace gamemd {
unsigned int VectorClass_UAngerStruct___16::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x50ed87*/
}
} // namespace gamemd

// 0x50EDA0
namespace gamemd {
char VectorClass_UAngerStruct::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x50edac*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x50edb8*/
      v4 = a3; /*0x50edce*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x50edca*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x50edd6*/
      return 0; /*0x50ee4a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x50ede4*/
        m_8 = a2; /*0x50ede6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x50edf1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x50ee09*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x50ee3e*/
}
} // namespace gamemd

// 0x50EE50
namespace gamemd {
int VectorClass_UAngerStruct::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x50ee53*/
  if ( m_10 <= 0 ) /*0x50ee58*/
    return -1; /*0x50ee6f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x50ee6d*/
      return -1; /*0x50ee6d*/
  }
  return result; /*0x50ee72*/
}
} // namespace gamemd

// 0x50EE80
namespace gamemd {
char VectorClass_UAngerStruct::AddRef(int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  unsigned int *v5; // eax
  unsigned int *v6; // ecx
  int v7; // edx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x50ee90*/
  {
    v3 = 0; /*0x50ee92*/
    if ( m_8 <= 0 ) /*0x50ee96*/
      return 1; /*0x50eec6*/
    v4 = *(unsigned int *)(a2 + 4); /*0x50ee98*/
        v5 = (unsigned int *)*((unsigned int *)this + 4);
    v6 = (unsigned int *)(v4 + 4); /*0x50ee9e*/
    v7 = v4 - (unsigned int)v5; /*0x50eea1*/
    while ( *v5 == *(unsigned int *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x50eeb3*/
    {
      ++v3; /*0x50eeb5*/
      v6 += 2; /*0x50eeb6*/
      v5 += 2; /*0x50eeb9*/
      if ( v3 >= m_8 ) /*0x50eebe*/
        return 1; /*0x50eebe*/
    }
  }
  return 0; /*0x50eec0*/
}
} // namespace gamemd

// 0x50EEE0
namespace gamemd {
char VectorClass_UAngerStruct::Release(int a2, unsigned int * a3)
{
  int v3; // ebp
  unsigned int *v5; // esi
  int v6; // eax
  unsigned int *v7; // ecx
  int v8; // edx
  unsigned int *v9; // eax
  int v10; // ecx
  int m_8; // edx
  int v13; // ecx
  int v14; // eax
  unsigned int *v15; // ebx

  v3 = a2; /*0x50eee2*/
  if ( a2 ) /*0x50eeee*/
  {
    v5 = a3; /*0x50eef4*/
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x50eefd*/
    {
      v9 = a3; /*0x50ef33*/
      if ( a2 - 1 >= 0 ) /*0x50ef37*/
      {
        v10 = a2; /*0x50ef39*/
        do /*0x50ef43*/
        {
          *v9 = 0; /*0x50ef3a*/
          v9[1] = 0; /*0x50ef3c*/
          v9 += 2; /*0x50ef3f*/
          --v10; /*0x50ef42*/
        }
        while ( v10 ); /*0x50ef43*/
      }
    }
    else
    {
      v6 = RA2_OPNEW(8 * a2); /*0x50ef07*/
      if ( v6 ) /*0x50ef11*/
      {
        v7 = (unsigned int *)v6; /*0x50ef16*/
        if ( a2 - 1 >= 0 ) /*0x50ef1a*/
        {
          v8 = a2; /*0x50ef1c*/
          do /*0x50ef26*/
          {
            *v7 = 0; /*0x50ef1d*/
            v7[1] = 0; /*0x50ef1f*/
            v7 += 2; /*0x50ef22*/
            --v8; /*0x50ef25*/
          }
          while ( v8 ); /*0x50ef26*/
        }
        v5 = (unsigned int *)v6; /*0x50ef28*/
      }
      else
      {
        v5 = 0; /*0x50ef2c*/
      }
    }
        *((unsigned char *)this + 12) = 1;
    if ( v5 ) /*0x50ef4b*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v12 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x50ef60*/
          m_8 = a2; /*0x50ef62*/
        v13 = 0; /*0x50ef64*/
        if ( m_8 > 0 ) /*0x50ef68*/
        {
          do /*0x50ef87*/
          {
            v14 = 2 * v13; /*0x50ef6d*/
                        v15 = (unsigned int *)(*((unsigned int *)this + 1) + 8 * v13++);
            v5[v14] = *v15; /*0x50ef7d*/
            v5[v14 + 1] = v15[1]; /*0x50ef83*/
          }
          while ( v13 < m_8 ); /*0x50ef87*/
          v3 = a2; /*0x50ef89*/
        }
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x50ef98*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v5;
            *((unsigned int *)this + 2) = v3;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x50efba*/
    }
    else
    {
      return 0; /*0x50ef50*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x50efca*/
  }
}
} // namespace gamemd

// 0x50EFD0
namespace gamemd {
void VectorClass_UAngerStruct::ddtor()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x50efe3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x50F000
namespace gamemd {
int VectorClass_UAngerStruct::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x50f00e*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x50f017*/
  if ( m_8 <= 0 ) /*0x50f01b*/
    return -1; /*0x50f03c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x50f021*/
  {
    if ( ++result >= m_8 ) /*0x50f03a*/
      return -1; /*0x50f03a*/
  }
  return result; /*0x50f00b*/
}
} // namespace gamemd

// 0x50F050
namespace gamemd {
unsigned int VectorClass_UAngerStruct::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 3;
  else
    return 0; /*0x50f057*/
}
} // namespace gamemd

// 0x50F070
namespace gamemd {
char VectorClass_UAngerStruct::SetCapacity_0(int a2, unsigned int * a3)
{
  int v3; // ebp
  unsigned int *v5; // edi
  int v6; // eax
  unsigned int *v7; // ecx
  int v8; // edx
  unsigned int *v9; // eax
  int v10; // ecx
  int m_8; // edx
  int v12; // ecx
  int v13; // eax
  unsigned int *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x50f072*/
  if ( a2 ) /*0x50f07e*/
  {
    v5 = a3; /*0x50f084*/
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x50f08d*/
    {
      v9 = a3; /*0x50f0c3*/
      if ( a2 - 1 >= 0 ) /*0x50f0c7*/
      {
        v10 = a2; /*0x50f0c9*/
        do /*0x50f0d3*/
        {
          *v9 = 0; /*0x50f0ca*/
          v9[1] = 0; /*0x50f0cc*/
          v9 += 2; /*0x50f0cf*/
          --v10; /*0x50f0d2*/
        }
        while ( v10 ); /*0x50f0d3*/
      }
    }
    else
    {
      v6 = RA2_OPNEW(8 * a2); /*0x50f097*/
      if ( v6 ) /*0x50f0a1*/
      {
        v7 = (unsigned int *)v6; /*0x50f0a6*/
        if ( a2 - 1 >= 0 ) /*0x50f0aa*/
        {
          v8 = a2; /*0x50f0ac*/
          do /*0x50f0b6*/
          {
            *v7 = 0; /*0x50f0ad*/
            v7[1] = 0; /*0x50f0af*/
            v7 += 2; /*0x50f0b2*/
            --v8; /*0x50f0b5*/
          }
          while ( v8 ); /*0x50f0b6*/
        }
        v5 = (unsigned int *)v6; /*0x50f0b8*/
      }
      else
      {
        v5 = 0; /*0x50f0bc*/
      }
    }
        *((unsigned char *)this + 12) = 1;
    if ( !v5 ) /*0x50f0db*/
      return 0; /*0x50f164*/
        if ( *((unsigned int *)this + 1) )
    {
            v11 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x50f0eb*/
        m_8 = a2; /*0x50f0ed*/
      v12 = 0; /*0x50f0ef*/
      if ( m_8 > 0 ) /*0x50f0f3*/
      {
        do /*0x50f112*/
        {
          v13 = 2 * v12; /*0x50f0f8*/
                    v14 = (unsigned int *)(*((unsigned int *)this + 1) + 8 * v12++);
          v5[v13] = *v14; /*0x50f108*/
          v5[v13 + 1] = v14[1]; /*0x50f10e*/
        }
        while ( v12 < m_8 ); /*0x50f112*/
        v3 = a2; /*0x50f114*/
      }
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x50f123*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v5;
        *((unsigned int *)this + 2) = v3;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v15 = *((unsigned int *)this + 2);
    if ( v15 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v15;
  return 1; /*0x50f158*/
}
} // namespace gamemd

// 0x50F170
namespace gamemd {
int VectorClass_UAngerStruct::FindItemIndex_0(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x50f175*/
  if ( m_10 <= 0 ) /*0x50f17b*/
    return -1; /*0x50f19c*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2 || i[1] != a2[1]; i += 2 )
  {
    if ( ++result >= m_10 ) /*0x50f19a*/
      return -1; /*0x50f19a*/
  }
  return result; /*0x50f19f*/
}
} // namespace gamemd

// 0x50F1B0
namespace gamemd {
char VectorClass_UScoutStruct::AddRef(int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  int v5; // eax
  unsigned char *v6; // ecx
  int v7; // ebp

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x50f1c0*/
  {
    v3 = 0; /*0x50f1c2*/
    if ( m_8 <= 0 ) /*0x50f1c6*/
      return 1; /*0x50f1f8*/
    v4 = *(unsigned int *)(a2 + 4); /*0x50f1c8*/
        v5 = *((unsigned int *)this + 4);
    v6 = (unsigned char *)(v4 + 4); /*0x50f1d0*/
    v7 = v4 - v5; /*0x50f1d3*/
    while ( *(unsigned int *)v5 == *(unsigned int *)(v5 + v7) && *(unsigned char *)(v5 + 4) == *v6 ) /*0x50f1e5*/
    {
      ++v3; /*0x50f1e7*/
      v6 += 8; /*0x50f1e8*/
      v5 += 8; /*0x50f1eb*/
      if ( v3 >= m_8 ) /*0x50f1f0*/
        return 1; /*0x50f1f0*/
    }
  }
  return 0; /*0x50f1f2*/
}
} // namespace gamemd

// 0x50F210
namespace gamemd {
char VectorClass_UScoutStruct::Release(int a2, char * a3)
{
  int v3; // ebp
  char *v5; // esi
  int v6; // eax
  int v7; // ecx
  char *v9; // eax
  int m_8; // edx
  int v13; // ecx
  int v14; // eax
  unsigned int *v15; // ebx

  v3 = a2; /*0x50f212*/
  if ( a2 ) /*0x50f21e*/
  {
    v5 = a3; /*0x50f224*/
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x50f22d*/
    {
      v9 = a3; /*0x50f263*/
      if ( a2 - 1 >= 0 ) /*0x50f267*/
      {
        a2 = a2; /*0x50f269*/
        do /*0x50f273*/
        {
          *(unsigned int *)v9 = 0; /*0x50f26a*/
          v9[4] = 0; /*0x50f26c*/
          v9 += 8; /*0x50f26f*/
          --a2; /*0x50f272*/
        }
        while ( a2 ); /*0x50f273*/
      }
    }
    else
    {
      v6 = RA2_OPNEW(8 * a2); /*0x50f237*/
      if ( v6 ) /*0x50f241*/
      {
        v7 = v6; /*0x50f246*/
        if ( a2 - 1 >= 0 ) /*0x50f24a*/
        {
          a2 = a2; /*0x50f24c*/
          do /*0x50f256*/
          {
            *(unsigned int *)v7 = 0; /*0x50f24d*/
            v7->vtable2 = 0; /*0x50f24f*/
            v7 += 8; /*0x50f252*/
            --a2; /*0x50f255*/
          }
          while ( a2 ); /*0x50f256*/
        }
        v5 = (char *)v6; /*0x50f258*/
      }
      else
      {
        v5 = 0; /*0x50f25c*/
      }
    }
        *((unsigned char *)this + 12) = 1;
    if ( v5 ) /*0x50f27b*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v12 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x50f290*/
          m_8 = a2; /*0x50f292*/
        v13 = 0; /*0x50f294*/
        if ( m_8 > 0 ) /*0x50f298*/
        {
          do /*0x50f2b7*/
          {
            v14 = 8 * v13; /*0x50f29d*/
                        v15 = (unsigned int *)(*((unsigned int *)this + 1) + 8 * v13++);
            *(unsigned int *)&v5[v14] = *v15; /*0x50f2ad*/
            *(unsigned int *)&v5[v14 + 4] = v15[1]; /*0x50f2b3*/
          }
          while ( v13 < m_8 ); /*0x50f2b7*/
          v3 = a2; /*0x50f2b9*/
        }
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x50f2c8*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v5;
            *((unsigned int *)this + 2) = v3;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x50f2ea*/
    }
    else
    {
      return 0; /*0x50f280*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x50f2fa*/
  }
}
} // namespace gamemd

// 0x50F300
namespace gamemd {
void VectorClass_UScoutStruct::ddtor()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x50f313*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x50F330
namespace gamemd {
int VectorClass_UScoutStruct::GetSize(int a2)
{
  int result; // eax
  int m_8; // esi
  int i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x50f33e*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x50f347*/
  if ( m_8 <= 0 ) /*0x50f34b*/
    return -1; /*0x50f36c*/
    for ( i = *((unsigned int *)this + 16); *(unsigned int *)i != *(unsigned int *)a2 || *(unsigned char *)(i + 4) != *(unsigned char *)(a2 + 4); i += 8 )
  {
    if ( ++result >= m_8 ) /*0x50f36a*/
      return -1; /*0x50f36a*/
  }
  return result; /*0x50f33b*/
}
} // namespace gamemd

// 0x50F380
namespace gamemd {
unsigned int VectorClass_UScoutStruct::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 3;
  else
    return 0; /*0x50f387*/
}
} // namespace gamemd

// 0x50F4E0
namespace gamemd {
char VectorClass_ptr_BuildChoiceClass_int_ouseClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x50f4ed*/
  {
    v3 = 0; /*0x50f4ef*/
    if ( m_8 <= 0 ) /*0x50f4f3*/
      return 1; /*0x50f513*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x50f4fb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x50f504*/
    {
      ++v3; /*0x50f506*/
      ++v4; /*0x50f507*/
      if ( v3 >= m_8 ) /*0x50f50c*/
        return 1; /*0x50f50c*/
    }
  }
  return 0; /*0x50f50e*/
}
} // namespace gamemd

// 0x50F5D0
namespace gamemd {
void VectorClass_ptr_BuildChoiceClass_int_ouseClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x50f5e3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x50F600
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x50f608*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x50f611*/
  if ( m_8 <= 0 ) /*0x50f615*/
    return -1; /*0x50f62c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x50f61b*/
  {
    if ( ++result >= m_8 ) /*0x50f62a*/
      return -1; /*0x50f62a*/
  }
  return result; /*0x50f60a*/
}
} // namespace gamemd

// 0x50F640
namespace gamemd {
unsigned int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x50f647*/
}
} // namespace gamemd

// 0x50F710
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::FindItemIndex_1(unsigned int * a2)
{
  void *Count; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x50f713*/
  if ( (int)Count <= 0 ) /*0x50f718*/
    return -1; /*0x50f72f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= (int)Count ) /*0x50f72d*/
      return -1; /*0x50f72d*/
  }
  return result; /*0x50f732*/
}
} // namespace gamemd

// 0x50F740
namespace gamemd {
char VectorClass_BuildingType::CompareVectors(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x50f74d*/
  {
    v3 = 0; /*0x50f74f*/
    if ( m_8 <= 0 ) /*0x50f753*/
      return 1; /*0x50f773*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
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
} // namespace gamemd

// 0x50F780
namespace gamemd {
char VectorClass_BuildingType::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x50f78c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x50f79c*/
      v4 = a3; /*0x50f7b2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x50f7ae*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x50f7ba*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x50f7d1*/
          m_8 = a2; /*0x50f7d3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x50f7de*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x50f7f6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x50f818*/
    }
    else
    {
      return 0; /*0x50f7bf*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x50f828*/
  }
}
} // namespace gamemd

// 0x50F830
void VectorClass_flat::ClearAndFree3()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(this->Items); /*0x50f843*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
// 0x50F860
namespace gamemd {
int  VectorClass_BuildingType::FindItemIndex()
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x50f868*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x50f871*/
  if ( m_8 <= 0 ) /*0x50f875*/
    return -1; /*0x50f88c*/
  for ( i = *(unsigned int **)&this->Items; *i != *this; ++i ) /*0x50f87b*/
  {
    if ( ++result >= m_8 ) /*0x50f88a*/
      return -1; /*0x50f88a*/
  }
  return result; /*0x50f86a*/
}
} // namespace gamemd

// 0x50F8A0
namespace gamemd {
unsigned int VectorClass_BuildingType::GetItemIndex_0(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x50f8a7*/
}
} // namespace gamemd

// 0x50F8C0
namespace gamemd {
char VectorClass_BuildingType::SetCapacity_0(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x50f8cc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x50f8d8*/
      v4 = a3; /*0x50f8ee*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x50f8ea*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x50f8f6*/
      return 0; /*0x50f96a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x50f904*/
        m_8 = a2; /*0x50f906*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x50f911*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x50f929*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x50f95e*/
}
} // namespace gamemd

// 0x50F970
namespace gamemd {
int VectorClass_BuildingType::FindItemIndex_0(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x50f973*/
  if ( m_10 <= 0 ) /*0x50f978*/
    return -1; /*0x50f98f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x50f98d*/
      return -1; /*0x50f98d*/
  }
  return result; /*0x50f992*/
}
} // namespace gamemd

// 0x50F9A0
namespace gamemd {
char VectorClass__N::AddRef(int a2)
{
  int m_8; // edi
  int v3; // eax

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x50f9af*/
  {
    v3 = 0; /*0x50f9b1*/
    if ( m_8 <= 0 ) /*0x50f9b5*/
      return 1; /*0x50f9d1*/
        while ( *(unsigned char *)(*((unsigned int *)this + 4) + v3) == *(unsigned char *)(*(unsigned int *)(a2 + 4) + v3) )
    {
      if ( ++v3 >= m_8 ) /*0x50f9ca*/
        return 1; /*0x50f9ca*/
    }
  }
  return 0; /*0x50f9cc*/
}
} // namespace gamemd

// 0x50F9E0
namespace gamemd {
char VectorClass__N::Remove(signed int Size, char * a3)
{
  char *v4; // edi
  signed int m_8; // ecx
  signed int i; // eax

  if ( Size ) /*0x50f9ec*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x50f9fc*/
      v4 = a3; /*0x50fa0b*/
    else
      v4 = (char *)RA2_OPNEW(Size); /*0x50fa07*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x50fa13*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( Size < m_8 ) /*0x50fa2a*/
          m_8 = Size; /*0x50fa2c*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned char *)(*((unsigned int *)this + 1) + i - 1) )
          ++i; /*0x50fa37*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x50fa4f*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = Size;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x50fa71*/
    }
    else
    {
      return 0; /*0x50fa18*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x50fa81*/
  }
}
} // namespace gamemd

// 0x50FA90
namespace gamemd {
void VectorClass__N::ddtor()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x50faa3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x50FAC0
namespace gamemd {
int VectorClass__N::GetSize(unsigned char * a2)
{
  int result; // eax
  int m_8; // esi
  int v4; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x50fac9*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x50fad1*/
  if ( m_8 <= 0 ) /*0x50fad5*/
    return -1; /*0x50faea*/
    v4 = *((unsigned int *)this + 16);
  while ( *(unsigned char *)(v4 + result) != *a2 ) /*0x50fae3*/
  {
    if ( ++result >= m_8 ) /*0x50fae8*/
      return -1; /*0x50fae8*/
  }
  return result; /*0x50fac8*/
}
} // namespace gamemd

// 0x50FB00
namespace gamemd {
int VectorClass__N::Get(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return a2 - *((unsigned int *)this + 16);
  else
    return 0; /*0x50fb07*/
}
} // namespace gamemd

// 0x50FB20
namespace gamemd {
char VectorClass__N::SetCapacity(signed int Size, char * a3)
{
  char *v4; // edi
  signed int m_8; // ecx
  signed int i; // eax
  int v7; // eax

  if ( Size ) /*0x50fb2c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x50fb38*/
      v4 = a3; /*0x50fb47*/
    else
      v4 = (char *)RA2_OPNEW(Size); /*0x50fb43*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x50fb4f*/
      return 0; /*0x50fbc3*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( Size < m_8 ) /*0x50fb5d*/
        m_8 = Size; /*0x50fb5f*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned char *)(*((unsigned int *)this + 1) + i - 1) )
        ++i; /*0x50fb6a*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x50fb82*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = Size;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x50fbb7*/
}
} // namespace gamemd

// 0x50FBD0
namespace gamemd {
int VectorClass__N::Destroy_0(unsigned char * a2)
{
  int m_10; // esi
  int result; // eax
  int v4; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x50fbd4*/
  if ( m_10 <= 0 ) /*0x50fbd8*/
    return -1; /*0x50fbed*/
    v4 = *((unsigned int *)this + 4);
  while ( *(unsigned char *)(v4 + result) != *a2 ) /*0x50fbe6*/
  {
    if ( ++result >= m_10 ) /*0x50fbeb*/
      return -1; /*0x50fbeb*/
  }
  return result; /*0x50fbf0*/
}
} // namespace gamemd

// 0x50FC00
namespace gamemd {
char VectorClass__N_18::AddRef(int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  unsigned int *v5; // eax
  unsigned int *v6; // ecx
  int v7; // edx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x50fc10*/
  {
    v3 = 0; /*0x50fc12*/
    if ( m_8 <= 0 ) /*0x50fc16*/
      return 1; /*0x50fc46*/
    v4 = *(unsigned int *)(a2 + 4); /*0x50fc18*/
        v5 = (unsigned int *)*((unsigned int *)this + 4);
    v6 = (unsigned int *)(v4 + 4); /*0x50fc1e*/
    v7 = v4 - (unsigned int)v5; /*0x50fc21*/
    while ( *v5 == *(unsigned int *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x50fc33*/
    {
      ++v3; /*0x50fc35*/
      v6 += 2; /*0x50fc36*/
      v5 += 2; /*0x50fc39*/
      if ( v3 >= m_8 ) /*0x50fc3e*/
        return 1; /*0x50fc3e*/
    }
  }
  return 0; /*0x50fc40*/
}
} // namespace gamemd

// 0x50FC60
namespace gamemd {
char VectorClass__N_18::Remove(int a2, int * a2)
{
  int *v4; // ebx
  int *v5; // eax
  int *v6; // edi
  unsigned int *v7; // eax
  int v8; // ecx
  int *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // eax

  if ( a2 ) /*0x50fc6c*/
  {
    v4 = a2; /*0x50fc72*/
        *((unsigned char *)this + 12) = 0;
    if ( a2 ) /*0x50fc7c*/
    {
      *a2 = a2; /*0x50fcb7*/
      v6 = a2 + 1; /*0x50fcbb*/
      if ( a2 - 1 >= 0 ) /*0x50fcbe*/
      {
        v9 = a2 + 2; /*0x50fcc0*/
        v10 = a2; /*0x50fcc3*/
        do /*0x50fcce*/
        {
          *v9 = 0; /*0x50fcc4*/
          v9 += 2; /*0x50fcca*/
          --v10; /*0x50fccd*/
        }
        while ( v10 ); /*0x50fcce*/
      }
    }
    else
    {
      v5 = (int *)RA2_OPNEW(8 * a2 + 4); /*0x50fc86*/
      if ( v5 ) /*0x50fc90*/
      {
        *v5 = a2; /*0x50fc95*/
        v6 = v5 + 1; /*0x50fc99*/
        if ( a2 - 1 >= 0 ) /*0x50fc9c*/
        {
          v7 = v5 + 2; /*0x50fc9e*/
          v8 = a2; /*0x50fca1*/
          do /*0x50fcac*/
          {
            *v7 = 0; /*0x50fca2*/
            v7 += 2; /*0x50fca8*/
            --v8; /*0x50fcab*/
          }
          while ( v8 ); /*0x50fcac*/
        }
      }
      else
      {
        v6 = 0; /*0x50fcb0*/
      }
    }
        *((unsigned char *)this + 12) = 1;
    if ( v6 ) /*0x50fcd6*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v12 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x50fced*/
          m_8 = a2; /*0x50fcef*/
        v13 = 0; /*0x50fcf1*/
        if ( m_8 > 0 ) /*0x50fcf5*/
        {
          do /*0x50fd0d*/
          {
                        v14 = *((unsigned int *)this + 1);
            ++v13; /*0x50fcfa*/
            v6[2 * v13 - 2] = *(unsigned int *)(v14 + 8 * v13 - 8); /*0x50fd01*/
            v6[2 * v13 - 1] = *(unsigned int *)(v14 + 8 * v13 - 4); /*0x50fd09*/
          }
          while ( v13 < m_8 ); /*0x50fd0d*/
          v4 = a2; /*0x50fd0f*/
        }
                if ( *((unsigned char *)this + 13) )
        {
                    v15 = *((unsigned int *)this + 1);
          if ( v15 ) /*0x50fd1f*/
            RA2_OPDEL((void *)(v15 - 4)); /*0x50fd29*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v6;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = v4 == 0;
      return 1; /*0x50fd4b*/
    }
    else
    {
      return 0; /*0x50fcdb*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x50fd5b*/
  }
}
} // namespace gamemd

// 0x50FD70
namespace gamemd {
void VectorClass__N_18::ddtor()
{
  int v2; // eax

    v2 = *((unsigned int *)this + 16);
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL((void *)(v2 - 4)); /*0x50fd8e*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x50FDB0
namespace gamemd {
int VectorClass__N_18::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x50fdbe*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x50fdc7*/
  if ( m_8 <= 0 ) /*0x50fdcb*/
    return -1; /*0x50fdec*/
  for ( i = *(unsigned int **)&this->ptr_4; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x50fdd1*/
  {
    if ( ++result >= m_8 ) /*0x50fdea*/
      return -1; /*0x50fdea*/
  }
  return result; /*0x50fdbb*/
}
} // namespace gamemd

// 0x50FE00
namespace gamemd {
unsigned int VectorClass__N_18::Get(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 3;
  else
    return 0; /*0x50fe07*/
}
} // namespace gamemd

// 0x50FE20
namespace gamemd {
char VectorClass__N_18::SetCapacity(int a2, int * a3)
{
  int *v4; // ebp
  int *v5; // eax
  int *v6; // edi
  unsigned int *v7; // eax
  int v8; // ecx
  int *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v12; // eax
  int v13; // edx
  int *v14; // eax
  int *v15; // ebp
  int v16; // eax

  if ( a2 ) /*0x50fe2c*/
  {
    v4 = a3; /*0x50fe32*/
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x50fe3c*/
    {
      *a3 = a2; /*0x50fe77*/
      v6 = a3 + 1; /*0x50fe7c*/
      if ( a2 - 1 >= 0 ) /*0x50fe7f*/
      {
        v9 = a3 + 2; /*0x50fe81*/
        v10 = a2; /*0x50fe84*/
        do /*0x50fe8f*/
        {
          *v9 = 0; /*0x50fe85*/
          v9 += 2; /*0x50fe8b*/
          --v10; /*0x50fe8e*/
        }
        while ( v10 ); /*0x50fe8f*/
      }
    }
    else
    {
      v5 = (int *)RA2_OPNEW(8 * a2 + 4); /*0x50fe46*/
      if ( v5 ) /*0x50fe50*/
      {
        *v5 = a2; /*0x50fe55*/
        v6 = v5 + 1; /*0x50fe59*/
        if ( a2 - 1 >= 0 ) /*0x50fe5c*/
        {
          v7 = v5 + 2; /*0x50fe5e*/
          v8 = a2; /*0x50fe61*/
          do /*0x50fe6c*/
          {
            *v7 = 0; /*0x50fe62*/
            v7 += 2; /*0x50fe68*/
            --v8; /*0x50fe6b*/
          }
          while ( v8 ); /*0x50fe6c*/
        }
      }
      else
      {
        v6 = 0; /*0x50fe70*/
      }
    }
        *((unsigned char *)this + 12) = 1;
    if ( !v6 ) /*0x50fe97*/
      return 0; /*0x50ff37*/
        if ( *((unsigned int *)this + 1) )
    {
            v11 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x50fea9*/
        m_8 = a2; /*0x50feab*/
      v12 = 0; /*0x50fead*/
      if ( m_8 > 0 ) /*0x50feb1*/
      {
        do /*0x50fec9*/
        {
                    v13 = *((unsigned int *)this + 1);
          ++v12; /*0x50feb6*/
          v6[2 * v12 - 2] = *(unsigned int *)(v13 + 8 * v12 - 8); /*0x50febd*/
          v6[2 * v12 - 1] = *(unsigned int *)(v13 + 8 * v12 - 4); /*0x50fec5*/
        }
        while ( v12 < m_8 ); /*0x50fec9*/
        v4 = a3; /*0x50fecb*/
      }
            if ( *((unsigned char *)this + 13) )
      {
                v14 = *((unsigned int *)this + 1);
        if ( v14 ) /*0x50fedb*/
        {
          v15 = v14 - 1; /*0x50fee0*/
          Array::ForEachReverse(v14, 8, *(v14 - 1), (int (__thiscall *)(int))nullsub_145); /*0x50feec*/
          RA2_OPDEL(v15); /*0x50fef2*/
          v4 = a3; /*0x50fef7*/
        }
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v6;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = v4 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v16 = *((unsigned int *)this + 2);
    if ( v16 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v16;
  return 1; /*0x50ff2b*/
}
} // namespace gamemd

// 0x50FFB0
namespace gamemd {
int VectorClass__N_18::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x50ffb5*/
  if ( m_10 <= 0 ) /*0x50ffbb*/
    return -1; /*0x50ffdc*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2 || i[1] != a2[1]; i += 2 )
  {
    if ( ++result >= m_10 ) /*0x50ffda*/
      return -1; /*0x50ffda*/
  }
  return result; /*0x50ffdf*/
}
} // namespace gamemd

// 0x50FFF0
namespace gamemd {
VectorClass_flat * VectorClass_BuildingType::Get(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_BuildingTypeClass_const;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x510008*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x510028*/
    RA2_OPDEL(Block); /*0x51002b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x510040
namespace gamemd {
DynamicVector * VectorClass_UScoutStruct___33::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_BuildingTypeClass_const;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x510058*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x510078*/
    RA2_OPDEL(Block); /*0x51007b*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x510090
namespace gamemd {
VectorClass_flat * VectorClass_UAngerStruct___16::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_HouseClass_StartingTechnoStruct;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5100a8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5100c8*/
    RA2_OPDEL(Block); /*0x5100cb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x5100E0
namespace gamemd {
DynamicVector * VectorClass_UAngerStruct::Constructor(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_HouseClass_StartingTechnoStruct;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5100f8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x510118*/
    RA2_OPDEL(Block); /*0x51011b*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x510130
namespace gamemd {
VectorClass_flat * VectorClass_UAngerStruct::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_AngerStruct;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x510148*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x510168*/
    RA2_OPDEL(Block); /*0x51016b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x510180
namespace gamemd {
DynamicVector * VectorClass_UAngerStruct::Constructor_VectorClass_AngerStruct_(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_AngerStruct;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x510198*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5101b8*/
    RA2_OPDEL(Block); /*0x5101bb*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x5101D0
namespace gamemd {
VectorClass_flat * VectorClass_UScoutStruct::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_ScoutStruct;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5101e8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x510208*/
    RA2_OPDEL(Block); /*0x51020b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x510270
namespace gamemd {
VectorClass_flat * VectorClass_ptr_BuildChoiceClass_int_ouseClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
  *(unsigned int *)Block->__pad_0 = (void*)&VectorClass_HouseClass_BuildChoiceClass___vftable; /*0x510276*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x510288*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5102a8*/
    RA2_OPDEL(Block); /*0x5102ab*/
  return Block->__pad_0; /*0x5102b5*/
}
} // namespace gamemd

// 0x5102C0
namespace gamemd {
unsigned int * VectorClass_ptr_BuildChoiceClass_int_ouseClass::loc_5102C0(unsigned int * Block, char a2)
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_HouseClass_BuildChoiceClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    RA2_OPDEL(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    RA2_OPDEL(Block);
    return Block;
}
} // namespace gamemd

// 0x510310
namespace gamemd {
VectorClass_flat * VectorClass_BuildingType::Constructor_0(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_TeamTypeClass_const;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x510328*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x510348*/
    RA2_OPDEL(Block); /*0x51034b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x510360
namespace gamemd {
VectorClass_flat * VectorClass__N::Add(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_bool;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x510378*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x510398*/
    RA2_OPDEL(Block); /*0x51039b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x5103B0
namespace gamemd {
DynamicVector * VectorClass__N::Constructor_VectorClass_bool_(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_bool;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5103c8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5103e8*/
    RA2_OPDEL(Block); /*0x5103eb*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x510400
namespace gamemd {
VectorClass_flat * VectorClass__N_18::Add(unsigned int * Block, char a2)
{
  int v3; // eax

    v3 = *(Block + 1);
    *Block = &vt_VectorClass_DiscreteDistributionClass_BuildingTypeClass_DistributionObject_BuildingTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL((void *)(v3 - 4)); /*0x510423*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x510443*/
    RA2_OPDEL(Block); /*0x510446*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x5104A0
namespace gamemd {
DynamicVector * VectorClass__N_18::Constructor_0(unsigned int * Block, char a2)
{
  int v3; // eax

    v3 = *(Block + 1);
    *Block = &vt_VectorClass_DiscreteDistributionClass_BuildingTypeClass_DistributionObject_BuildingTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL((void *)(v3 - 4)); /*0x5104c3*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5104e3*/
    RA2_OPDEL(Block); /*0x5104e6*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x510550
unsigned int * VectorClass_flat::BuildingConstructor(int a2, int a3)
{
    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = a2;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
    *this = &vt_VectorClass_BuildingClass;
  if ( a2 ) /*0x51056e*/
  {
    if ( a3 ) /*0x510576*/
    {
            *((unsigned int *)this + 4) = a3;
            return this;
    }
    this->Items = (void *)RA2_OPNEW(4 * a2); /*0x51058d*/
        *((unsigned char *)this + 13) = 1;
  }
    return this;
}
// 0x5105A0
unsigned int * VectorClass_flat::BuildingTypeConstructor(TechnoTypeClass * aP1, TechnoTypeClass * aP2)
{
    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = aP1;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
    *this = &vt_VectorClass_BuildingTypeClass_const;
  if ( aP1 ) /*0x5105be*/
  {
    if ( aP2 ) /*0x5105c6*/
    {
            *((unsigned int *)this + 4) = aP2;
            return this;
    }
    this->Items = (void *)RA2_OPNEW(4 * aP1); /*0x5105dd*/
        *((unsigned char *)this + 13) = 1;
  }
    return this;
}
// 0x510A50
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_2(int a1, const void * a2, unsigned int * a3)
{
  return HouseClass::QueryInterface(a1 - 36, a2, a3);
}
} // namespace gamemd

// 0x510A60
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_3(int a1)
{
  return HouseClass::COMStub_Ret1_1(a1 - 36);
}
} // namespace gamemd

// 0x510A70
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_4(int a1)
{
  return HouseClass::COMStub_Ret1_2(a1 - 36);
}
} // namespace gamemd

// 0x510A80
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_5(int a1, const void * a2, unsigned int * a3)
{
  return HouseClass::QueryInterface(a1 - 40, a2, a3);
}
} // namespace gamemd

// 0x510A90
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_6(int a1)
{
  return HouseClass::COMStub_Ret1_1(a1 - 40);
}
} // namespace gamemd

// 0x510AA0
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_7(int a1)
{
  return HouseClass::COMStub_Ret1_2(a1 - 40);
}
} // namespace gamemd

// 0x510AB0
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_8(int a1)
{
  return VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_1(a1 - 4);
}
} // namespace gamemd

// 0x510AC0
namespace gamemd {
BSTR VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_9(int a1)
{
  return VectorClass_ptr_BuildChoiceClass_int_ouseClass::FindItemIndex(a1 - 4);
}
} // namespace gamemd

// 0x510AD0
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_10(int a1, const void * a2, unsigned int * a3)
{
  return HouseClass::QueryInterface(a1 - 44, a2, a3);
}
} // namespace gamemd

// 0x510AE0
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_11(int a1)
{
  return HouseClass::COMStub_Ret1_1(a1 - 44);
}
} // namespace gamemd

// 0x510AF0
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_12(int a1)
{
  return HouseClass::COMStub_Ret1_2(a1 - 44);
}
} // namespace gamemd

// 0x512FA0
unsigned int * VectorClass_flat::CopyConstructor(InfantryTypeClass * aP1)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this == (VectorClass *)aP1 ) /*0x512faa*/
      if ( this == (unsigned int *)aP1 )
    (*(void (**)(unsigned int *))(*(char *)this + 48))(this);
  v3 = aP1[2]; /*0x512fb1*/
    *((unsigned int *)this + 8) = v3;
  if ( !v3 ) /*0x512fb9*/
  {
        *((unsigned int *)this + 4) = 0;
        *((unsigned char *)this + 13) = 0;
        return this;
  }
  v4 = (void *)RA2_OPNEW(4 * v3); /*0x512fc3*/
    *((unsigned int *)this + 4) = v4;
  if ( !v4 ) /*0x512fd0*/
      if ( !v4 )
    v5 = *((unsigned int *)this + 8);
  v6 = 0; /*0x512fd5*/
    *((unsigned char *)this + 13) = 1;
  if ( Capacity <= 0 ) /*0x512fdd*/
      if ( v5 <= 0 )
  do /*0x512ff1*/
  {
        *(unsigned int *)(*((unsigned int *)this + 4) + 4 * v6) = *(unsigned int *)(*(unsigned int *)&aP1->__pad_0[4] + 4 * v6);
    ++v6; /*0x512fee*/
  }
    do
    return this;
}
// 0x5132F0
char VectorClass_flat::PushBack(VectorClass_flat * aP1)
{
  int Capacity; // ecx
  int CapacityIncrement; // eax
  int Count; // eax
  int Items; // edx

    v3 = (MapClass *)*((unsigned int *)this + 8);
    if ( *((unsigned int *)this + 16) >= (int)v3 )
  {
        if ( !*((unsigned char *)this + 13) && v3 )
      return 0; /*0x513306*/
        v4 = *((unsigned int *)this + 20);
    if ( CapacityIncrement <= 0 /*0x513318*/
      || !(*(uint8_t (**)(DynamicVectorClass *, int, unsigned int))(this->vtable0 + 8))(
            this,
            Capacity + CapacityIncrement,
            0) )
    {
      return 0; /*0x51331f*/
    }
  }
    v6 = *((unsigned int *)this + 16);
    v7 = (VectorClass *)*((unsigned int *)this + 4);
    *((unsigned int *)this + 16) = v6 + 1;
  *(unsigned int *)(Items + 4 * Count) = *aP1; /*0x513338*/
  return 1; /*0x513321*/
}
// 0x5134D0
void VectorClass_flat::ClearAndFree4()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(this->Items); /*0x5134e3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
// 0x525060
unsigned int *  VectorClass_flat::CopyDefault()
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this == (VectorClass *)this ) /*0x52506a*/
      if ( this == (unsigned int *)aP1 )
    (*(void (**)(unsigned int *))(*(char *)this + 48))(this);
  v3 = this[2]; /*0x525071*/
    *((unsigned int *)this + 8) = v3;
  if ( !v3 ) /*0x525079*/
  {
        *((unsigned int *)this + 4) = 0;
        *((unsigned char *)this + 13) = 0;
        return this;
  }
  v4 = (void *)RA2_OPNEW(4 * v3); /*0x525083*/
    *((unsigned int *)this + 4) = v4;
  if ( !v4 ) /*0x525090*/
      if ( !v4 )
    v5 = *((unsigned int *)this + 8);
  v6 = 0; /*0x525095*/
    *((unsigned char *)this + 13) = 1;
  if ( Capacity <= 0 ) /*0x52509d*/
      if ( v5 <= 0 )
  do /*0x5250b1*/
  {
        *(unsigned int *)(*((unsigned int *)this + 4) + 4 * v6) = *(unsigned int *)(*(unsigned int *)&aP1->field_1[3] + 4 * v6);
    ++v6; /*0x5250ae*/
  }
    do
    return this;
}
// 0x538510
namespace gamemd {
int VectorClass_ptr_CCINIClass::Clear(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x538520
namespace gamemd {
char VectorClass_ptr_CCINIClass::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x53852d*/
  {
    v3 = 0; /*0x53852f*/
    if ( m_8 <= 0 ) /*0x538533*/
      return 1; /*0x538553*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x53853b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x538544*/
    {
      ++v3; /*0x538546*/
      ++v4; /*0x538547*/
      if ( v3 >= m_8 ) /*0x53854c*/
        return 1; /*0x53854c*/
    }
  }
  return 0; /*0x53854e*/
}
} // namespace gamemd

// 0x538560
namespace gamemd {
char VectorClass_ptr_CCINIClass::Remove(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x53856c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x53857c*/
      v4 = a3; /*0x538592*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x53858e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x53859a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x5385b1*/
          m_8 = a2; /*0x5385b3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x5385be*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x5385d6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x5385f8*/
    }
    else
    {
      return 0; /*0x53859f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x538608*/
  }
}
} // namespace gamemd

// 0x538610
namespace gamemd {
void VectorClass_ptr_CCINIClass::ddtor()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x538623*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x538640
namespace gamemd {
int VectorClass_ptr_CCINIClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x538648*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x538651*/
  if ( m_8 <= 0 ) /*0x538655*/
    return -1; /*0x53866c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x53865b*/
  {
    if ( ++result >= m_8 ) /*0x53866a*/
      return -1; /*0x53866a*/
  }
  return result; /*0x53864a*/
}
} // namespace gamemd

// 0x538680
namespace gamemd {
unsigned int VectorClass_ptr_CCINIClass::Get(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x538687*/
}
} // namespace gamemd

// 0x538A90
namespace gamemd {
VectorClass_flat * VectorClass_ptr_CCINIClass::Add(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_CCINIClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x538aa8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x538ac8*/
    RA2_OPDEL(Block); /*0x538acb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x53DA40
namespace gamemd {
void VectorClass_ptr_IonBlastClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x53da46*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x53da56*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x53DA70
namespace gamemd {
unsigned int VectorClass_ptr_IonBlastClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x53da77*/
}
} // namespace gamemd

// 0x53DA90
namespace gamemd {
int VectorClass_ptr_IonBlastClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x53DAA0
namespace gamemd {
char VectorClass_ptr_IonBlastClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x53daad*/
  {
    v3 = 0; /*0x53daaf*/
    if ( m_8 <= 0 ) /*0x53dab3*/
      return 1; /*0x53dad3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x53dabb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x53dac4*/
    {
      ++v3; /*0x53dac6*/
      ++v4; /*0x53dac7*/
      if ( v3 >= m_8 ) /*0x53dacc*/
        return 1; /*0x53dacc*/
    }
  }
  return 0; /*0x53dace*/
}
} // namespace gamemd

// 0x53DAE0
namespace gamemd {
char VectorClass_ptr_IonBlastClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x53daec*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x53dafc*/
      v4 = a3; /*0x53db12*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x53db0e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x53db1a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x53db31*/
          m_8 = a2; /*0x53db33*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x53db3e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x53db56*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x53db78*/
    }
    else
    {
      return 0; /*0x53db1f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x53db88*/
  }
}
} // namespace gamemd

// 0x53DB90
namespace gamemd {
void VectorClass_ptr_IonBlastClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x53dba3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x53DBC0
namespace gamemd {
int VectorClass_ptr_IonBlastClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x53dbc8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x53dbd1*/
  if ( m_8 <= 0 ) /*0x53dbd5*/
    return -1; /*0x53dbec*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x53dbdb*/
  {
    if ( ++result >= m_8 ) /*0x53dbea*/
      return -1; /*0x53dbea*/
  }
  return result; /*0x53dbca*/
}
} // namespace gamemd

// 0x53DC00
namespace gamemd {
unsigned int VectorClass_ptr_IonBlastClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x53dc07*/
}
} // namespace gamemd

// 0x53DC20
namespace gamemd {
char VectorClass_ptr_IonBlastClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x53dc2c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x53dc38*/
      v4 = a3; /*0x53dc4e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x53dc4a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x53dc56*/
      return 0; /*0x53dcca*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x53dc64*/
        m_8 = a2; /*0x53dc66*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x53dc71*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x53dc89*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x53dcbe*/
}
} // namespace gamemd

// 0x53DCD0
namespace gamemd {
int VectorClass_ptr_IonBlastClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x53dcd3*/
  if ( m_10 <= 0 ) /*0x53dcd8*/
    return -1; /*0x53dcef*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x53dced*/
      return -1; /*0x53dced*/
  }
  return result; /*0x53dcf2*/
}
} // namespace gamemd

// 0x53DD00
namespace gamemd {
VectorClass_flat * VectorClass_ptr_IonBlastClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_IonBlastClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x53dd18*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x53dd38*/
    RA2_OPDEL(Block); /*0x53dd3b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x53DD50
namespace gamemd {
DynamicVector * VectorClass_ptr_IonBlastClass::Constructor_VectorClass_IonBlastClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_IonBlastClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x53dd68*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x53dd88*/
    RA2_OPDEL(); /*0x53dd8b*/
  return this; /*0x53dd95*/
}
} // namespace gamemd

// 0x54A1E0
namespace gamemd {
int VectorClass_PAG::Count(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x54A1F0
namespace gamemd {
void VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x54a1f6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x54a206*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x54A220
namespace gamemd {
unsigned int VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x54a227*/
}
} // namespace gamemd

// 0x54A240
namespace gamemd {
int VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x54A250
namespace gamemd {
char VectorClass_PAG::Get(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x54a25d*/
  {
    v3 = 0; /*0x54a25f*/
    if ( m_8 <= 0 ) /*0x54a263*/
      return 1; /*0x54a283*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x54a26b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x54a274*/
    {
      ++v3; /*0x54a276*/
      ++v4; /*0x54a277*/
      if ( v3 >= m_8 ) /*0x54a27c*/
        return 1; /*0x54a27c*/
    }
  }
  return 0; /*0x54a27e*/
}
} // namespace gamemd

// 0x54A290
namespace gamemd {
char VectorClass_PAG::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x54a29c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x54a2ac*/
      v4 = a3; /*0x54a2c2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x54a2be*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x54a2ca*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x54a2e1*/
          m_8 = a2; /*0x54a2e3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x54a2ee*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x54a306*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x54a328*/
    }
    else
    {
      return 0; /*0x54a2cf*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x54a338*/
  }
}
} // namespace gamemd

// 0x54A340
namespace gamemd {
void VectorClass_PAG::Set()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x54a353*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x54A370
namespace gamemd {
int VectorClass_PAG::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x54a378*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x54a381*/
  if ( m_8 <= 0 ) /*0x54a385*/
    return -1; /*0x54a39c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x54a38b*/
  {
    if ( ++result >= m_8 ) /*0x54a39a*/
      return -1; /*0x54a39a*/
  }
  return result; /*0x54a37a*/
}
} // namespace gamemd

// 0x54A3B0
namespace gamemd {
unsigned int VectorClass_PAG::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x54a3b7*/
}
} // namespace gamemd

// 0x54A4B0
namespace gamemd {
char VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x54a4bd*/
  {
    v3 = 0; /*0x54a4bf*/
    if ( m_8 <= 0 ) /*0x54a4c3*/
      return 1; /*0x54a4e3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x54a4cb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x54a4d4*/
    {
      ++v3; /*0x54a4d6*/
      ++v4; /*0x54a4d7*/
      if ( v3 >= m_8 ) /*0x54a4dc*/
        return 1; /*0x54a4dc*/
    }
  }
  return 0; /*0x54a4de*/
}
} // namespace gamemd

// 0x54A4F0
namespace gamemd {
char VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x54a4fc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x54a50c*/
      v4 = a3; /*0x54a522*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x54a51e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x54a52a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x54a541*/
          m_8 = a2; /*0x54a543*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x54a54e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x54a566*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x54a588*/
    }
    else
    {
      return 0; /*0x54a52f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x54a598*/
  }
}
} // namespace gamemd

// 0x54A5A0
namespace gamemd {
void VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x54a5b3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x54A5D0
namespace gamemd {
int VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x54a5d8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x54a5e1*/
  if ( m_8 <= 0 ) /*0x54a5e5*/
    return -1; /*0x54a5fc*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x54a5eb*/
  {
    if ( ++result >= m_8 ) /*0x54a5fa*/
      return -1; /*0x54a5fa*/
  }
  return result; /*0x54a5da*/
}
} // namespace gamemd

// 0x54A610
namespace gamemd {
unsigned int VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::LoadTypeData(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x54a617*/
}
} // namespace gamemd

// 0x54A630
namespace gamemd {
char VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x54a63c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x54a648*/
      v4 = a3; /*0x54a65e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x54a65a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x54a666*/
      return 0; /*0x54a6da*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x54a674*/
        m_8 = a2; /*0x54a676*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x54a681*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x54a699*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
                                                                                           + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x54a6ce*/
}
} // namespace gamemd

// 0x54A6E0
namespace gamemd {
int VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x54a6e3*/
  if ( m_10 <= 0 ) /*0x54a6e8*/
    return -1; /*0x54a6ff*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x54a6fd*/
      return -1; /*0x54a6fd*/
  }
  return result; /*0x54a702*/
}
} // namespace gamemd

// 0x54A710
namespace gamemd {
VectorClass_flat * VectorClass_PAG::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_unsigned_short;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x54a728*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x54a748*/
    RA2_OPDEL(Block); /*0x54a74b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x54A7B0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::QueryInterface(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_IsometricTileTypeClass_TileInsertType;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x54a7c8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x54a7e8*/
    RA2_OPDEL(); /*0x54a7eb*/
  return this; /*0x54a7f5*/
}
} // namespace gamemd

// 0x54A800
namespace gamemd {
DynamicVector * VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Constructor(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_IsometricTileTypeClass_TileInsertType;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x54a818*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x54a838*/
    RA2_OPDEL(); /*0x54a83b*/
  return this; /*0x54a845*/
}
} // namespace gamemd

// 0x5512D0
namespace gamemd {
void VectorClass_ptr_LaserDrawClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x5512d6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x5512e6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x551300
namespace gamemd {
unsigned int VectorClass_ptr_LaserDrawClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x551307*/
}
} // namespace gamemd

// 0x551320
namespace gamemd {
int VectorClass_ptr_LaserDrawClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x551330
namespace gamemd {
char VectorClass_ptr_LaserDrawClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x55133d*/
  {
    v3 = 0; /*0x55133f*/
    if ( m_8 <= 0 ) /*0x551343*/
      return 1; /*0x551363*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x55134b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x551354*/
    {
      ++v3; /*0x551356*/
      ++v4; /*0x551357*/
      if ( v3 >= m_8 ) /*0x55135c*/
        return 1; /*0x55135c*/
    }
  }
  return 0; /*0x55135e*/
}
} // namespace gamemd

// 0x551370
namespace gamemd {
char VectorClass_ptr_LaserDrawClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x55137c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x55138c*/
      v4 = a3; /*0x5513a2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x55139e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x5513aa*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x5513c1*/
          m_8 = a2; /*0x5513c3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x5513ce*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x5513e6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x551408*/
    }
    else
    {
      return 0; /*0x5513af*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x551418*/
  }
}
} // namespace gamemd

// 0x551420
namespace gamemd {
void VectorClass_ptr_LaserDrawClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x551433*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x551450
namespace gamemd {
int VectorClass_ptr_LaserDrawClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x551458*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x551461*/
  if ( m_8 <= 0 ) /*0x551465*/
    return -1; /*0x55147c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x55146b*/
  {
    if ( ++result >= m_8 ) /*0x55147a*/
      return -1; /*0x55147a*/
  }
  return result; /*0x55145a*/
}
} // namespace gamemd

// 0x551490
namespace gamemd {
unsigned int VectorClass_ptr_LaserDrawClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x551497*/
}
} // namespace gamemd

// 0x5514B0
namespace gamemd {
char VectorClass_ptr_LaserDrawClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5514bc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5514c8*/
      v4 = a3; /*0x5514de*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5514da*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x5514e6*/
      return 0; /*0x55155a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x5514f4*/
        m_8 = a2; /*0x5514f6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x551501*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x551519*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x55154e*/
}
} // namespace gamemd

// 0x551560
namespace gamemd {
int VectorClass_ptr_LaserDrawClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x551563*/
  if ( m_10 <= 0 ) /*0x551568*/
    return -1; /*0x55157f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x55157d*/
      return -1; /*0x55157d*/
  }
  return result; /*0x551582*/
}
} // namespace gamemd

// 0x551590
namespace gamemd {
VectorClass_flat * VectorClass_ptr_LaserDrawClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_LaserDrawClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5515a8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5515c8*/
    RA2_OPDEL(Block); /*0x5515cb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x5515E0
namespace gamemd {
DynamicVector * VectorClass_ptr_LaserDrawClass::Constructor_VectorClass_LaserDrawClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_LaserDrawClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5515f8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x551618*/
    RA2_OPDEL(); /*0x55161b*/
  return this; /*0x551625*/
}
} // namespace gamemd

// 0x555200
namespace gamemd {
void VectorClass_ptr_LightSourceClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x555206*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x555216*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x555230
namespace gamemd {
unsigned int VectorClass_ptr_LightSourceClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x555237*/
}
} // namespace gamemd

// 0x555250
namespace gamemd {
int VectorClass_ptr_LightSourceClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x555260
namespace gamemd {
void VectorClass_ptr_LightSourceClass::Destroy_0()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x555266*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x555276*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x555290
namespace gamemd {
unsigned int VectorClass_ptr_LightSourceClass::GetItemIndex_0(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x555297*/
}
} // namespace gamemd

// 0x5552B0
namespace gamemd {
int VectorClass_ptr_PendingCellClass_LightSourceClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x5552C0
namespace gamemd {
char VectorClass_ptr_LightSourceClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x5552cd*/
  {
    v3 = 0; /*0x5552cf*/
    if ( m_8 <= 0 ) /*0x5552d3*/
      return 1; /*0x5552f3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x5552db*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x5552e4*/
    {
      ++v3; /*0x5552e6*/
      ++v4; /*0x5552e7*/
      if ( v3 >= m_8 ) /*0x5552ec*/
        return 1; /*0x5552ec*/
    }
  }
  return 0; /*0x5552ee*/
}
} // namespace gamemd

// 0x555300
namespace gamemd {
char VectorClass_ptr_LightSourceClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x55530c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x55531c*/
      v4 = a3; /*0x555332*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x55532e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x55533a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x555351*/
          m_8 = a2; /*0x555353*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x55535e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x555376*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x555398*/
    }
    else
    {
      return 0; /*0x55533f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x5553a8*/
  }
}
} // namespace gamemd

// 0x5553B0
namespace gamemd {
void VectorClass_ptr_LightSourceClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x5553c3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5553E0
namespace gamemd {
int VectorClass_ptr_LightSourceClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x5553e8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x5553f1*/
  if ( m_8 <= 0 ) /*0x5553f5*/
    return -1; /*0x55540c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x5553fb*/
  {
    if ( ++result >= m_8 ) /*0x55540a*/
      return -1; /*0x55540a*/
  }
  return result; /*0x5553ea*/
}
} // namespace gamemd

// 0x555420
namespace gamemd {
unsigned int VectorClass_ptr_LightSourceClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x555427*/
}
} // namespace gamemd

// 0x555440
namespace gamemd {
char VectorClass_ptr_LightSourceClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x55544c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x555458*/
      v4 = a3; /*0x55546e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x55546a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x555476*/
      return 0; /*0x5554ea*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x555484*/
        m_8 = a2; /*0x555486*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x555491*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x5554a9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x5554de*/
}
} // namespace gamemd

// 0x5554F0
namespace gamemd {
int VectorClass_ptr_LightSourceClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x5554f3*/
  if ( m_10 <= 0 ) /*0x5554f8*/
    return -1; /*0x55550f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x55550d*/
      return -1; /*0x55550d*/
  }
  return result; /*0x555512*/
}
} // namespace gamemd

// 0x555520
namespace gamemd {
char VectorClass_ptr_PendingCellClass_LightSourceClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x55552d*/
  {
    v3 = 0; /*0x55552f*/
    if ( m_8 <= 0 ) /*0x555533*/
      return 1; /*0x555553*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x55553b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x555544*/
    {
      ++v3; /*0x555546*/
      ++v4; /*0x555547*/
      if ( v3 >= m_8 ) /*0x55554c*/
        return 1; /*0x55554c*/
    }
  }
  return 0; /*0x55554e*/
}
} // namespace gamemd

// 0x555560
namespace gamemd {
char VectorClass_ptr_PendingCellClass_LightSourceClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x55556c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x55557c*/
      v4 = a3; /*0x555592*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x55558e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x55559a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x5555b1*/
          m_8 = a2; /*0x5555b3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x5555be*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x5555d6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x5555f8*/
    }
    else
    {
      return 0; /*0x55559f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x555608*/
  }
}
} // namespace gamemd

// 0x555610
namespace gamemd {
void VectorClass_ptr_PendingCellClass_LightSourceClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x555623*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x555640
namespace gamemd {
int VectorClass_ptr_PendingCellClass_LightSourceClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x555648*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x555651*/
  if ( m_8 <= 0 ) /*0x555655*/
    return -1; /*0x55566c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x55565b*/
  {
    if ( ++result >= m_8 ) /*0x55566a*/
      return -1; /*0x55566a*/
  }
  return result; /*0x55564a*/
}
} // namespace gamemd

// 0x555680
namespace gamemd {
unsigned int VectorClass_ptr_PendingCellClass_LightSourceClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x555687*/
}
} // namespace gamemd

// 0x5556A0
namespace gamemd {
char VectorClass_ptr_LightSourceClass::SetCapacity_0(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5556ac*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5556b8*/
      v4 = a3; /*0x5556ce*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5556ca*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x5556d6*/
      return 0; /*0x55574a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x5556e4*/
        m_8 = a2; /*0x5556e6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x5556f1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x555709*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x55573e*/
}
} // namespace gamemd

// 0x555750
namespace gamemd {
int VectorClass_ptr_LightSourceClass::FindItemIndex_0(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x555753*/
  if ( m_10 <= 0 ) /*0x555758*/
    return -1; /*0x55576f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x55576d*/
      return -1; /*0x55576d*/
  }
  return result; /*0x555772*/
}
} // namespace gamemd

// 0x555780
namespace gamemd {
VectorClass_flat * VectorClass_ptr_LightSourceClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_LightSourceClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x555798*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5557b8*/
    RA2_OPDEL(Block); /*0x5557bb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x5557D0
namespace gamemd {
DynamicVector * VectorClass_ptr_LightSourceClass::Constructor_VectorClass_LightSourceClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_LightSourceClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5557e8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x555808*/
    RA2_OPDEL(); /*0x55580b*/
  return this; /*0x555815*/
}
} // namespace gamemd

// 0x555820
namespace gamemd {
VectorClass_flat * VectorClass_ptr_PendingCellClass_LightSourceClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_LightSourceClass_PendingCellClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x555838*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x555858*/
    RA2_OPDEL(Block); /*0x55585b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x555870
namespace gamemd {
DynamicVector * VectorClass_ptr_LightSourceClass::Constructor(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_LightSourceClass_PendingCellClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x555888*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5558a8*/
    RA2_OPDEL(Block); /*0x5558ab*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x556F00
namespace gamemd {
int VectorClass_ptr_LineTrail::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x556F10
namespace gamemd {
char VectorClass_ptr_LineTrail::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x556f1d*/
  {
    v3 = 0; /*0x556f1f*/
    if ( m_8 <= 0 ) /*0x556f23*/
      return 1; /*0x556f43*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x556f2b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x556f34*/
    {
      ++v3; /*0x556f36*/
      ++v4; /*0x556f37*/
      if ( v3 >= m_8 ) /*0x556f3c*/
        return 1; /*0x556f3c*/
    }
  }
  return 0; /*0x556f3e*/
}
} // namespace gamemd

// 0x556F50
namespace gamemd {
char VectorClass_ptr_LineTrail::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x556f5c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x556f6c*/
      v4 = a3; /*0x556f82*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x556f7e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x556f8a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x556fa1*/
          m_8 = a2; /*0x556fa3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x556fae*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x556fc6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x556fe8*/
    }
    else
    {
      return 0; /*0x556f8f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x556ff8*/
  }
}
} // namespace gamemd

// 0x557000
namespace gamemd {
void VectorClass_ptr_LineTrail::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x557013*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x557030
namespace gamemd {
int VectorClass_ptr_LineTrail::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x557038*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x557041*/
  if ( m_8 <= 0 ) /*0x557045*/
    return -1; /*0x55705c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x55704b*/
  {
    if ( ++result >= m_8 ) /*0x55705a*/
      return -1; /*0x55705a*/
  }
  return result; /*0x55703a*/
}
} // namespace gamemd

// 0x557070
namespace gamemd {
unsigned int VectorClass_ptr_LineTrail::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x557077*/
}
} // namespace gamemd

// 0x557170
namespace gamemd {
VectorClass_flat * VectorClass_ptr_LineTrail::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_LineTrail;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x557188*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5571a8*/
    RA2_OPDEL(Block); /*0x5571ab*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x558230
namespace gamemd {
int VectorClass_PBG::Count(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x558240
namespace gamemd {
char VectorClass_PBG::Get(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x55824d*/
  {
    v3 = 0; /*0x55824f*/
    if ( m_8 <= 0 ) /*0x558253*/
      return 1; /*0x558273*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x55825b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x558264*/
    {
      ++v3; /*0x558266*/
      ++v4; /*0x558267*/
      if ( v3 >= m_8 ) /*0x55826c*/
        return 1; /*0x55826c*/
    }
  }
  return 0; /*0x55826e*/
}
} // namespace gamemd

// 0x558280
namespace gamemd {
char VectorClass_PBG::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x55828c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x55829c*/
      v4 = a3; /*0x5582b2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5582ae*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x5582ba*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x5582d1*/
          m_8 = a2; /*0x5582d3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x5582de*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x5582f6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x558318*/
    }
    else
    {
      return 0; /*0x5582bf*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x558328*/
  }
}
} // namespace gamemd

// 0x558330
namespace gamemd {
void VectorClass_PBG::Set()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x558343*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x558360
namespace gamemd {
int VectorClass_PBG::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x558368*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x558371*/
  if ( m_8 <= 0 ) /*0x558375*/
    return -1; /*0x55838c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x55837b*/
  {
    if ( ++result >= m_8 ) /*0x55838a*/
      return -1; /*0x55838a*/
  }
  return result; /*0x55836a*/
}
} // namespace gamemd

// 0x5583A0
namespace gamemd {
unsigned int VectorClass_PBG::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x5583a7*/
}
} // namespace gamemd

// 0x5584A0
namespace gamemd {
VectorClass_flat * VectorClass_PBG::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_unsigned_short_const;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5584b8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5584d8*/
    RA2_OPDEL(Block); /*0x5584db*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x55BAE0
int VectorClass_flat::RemoveItem(ObjectClass * aP1)
{
  int result; // eax
  int v4; // eax
  int Count; // ecx
  int v6; // ecx

  result = aP1; /*0x55bae0*/
  if ( *(unsigned char *)(aP1 + 152) ) /*0x55bae7*/
  {
        v4 = (*(int (**)(int *, ObjectClass **))(*(char *)this + 64))(this, &aP1);
    if ( v4 != -1 ) /*0x55bb00*/
    {
            v5 = *((unsigned int *)this + 16);
      if ( v4 < Count ) /*0x55bb07*/
      {
        v6 = Count - 1; /*0x55bb09*/
                for ( *((unsigned int *)this + 16) = v6; v4 < *((unsigned int *)this + 16); *(unsigned int *)(*((unsigned int *)this + 4) + 4 * v4 - 4) = *(unsigned int *)(*((unsigned int *)this + 4) + 4 * v4) )
          ++v4; /*0x55bb14*/
      }
    }
    result = aP1; /*0x55bb23*/
    *(unsigned char *)(aP1 + 152) = 0; /*0x55bb27*/
  }
  return result; /*0x55bb2e*/
}
// 0x588C90
void VectorClass_flat::CleanupSubzone()
{
  void *v2; // eax

    v2 = *(void **)((char *)this + 16);
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x588ca6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
// 0x588E10
namespace gamemd {
int VectorClass_USubzoneTrackingStruct::Clear(int a2, int a3)
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

    v3 = *((unsigned int *)this + 4) + 36 * a3;
  *(unsigned int *)(a2 + 4) = 0; /*0x588e29*/
  *(unsigned int *)(a2 + 8) = 0; /*0x588e2c*/
  *(unsigned char *)(a2 + 12) = 1; /*0x588e2f*/
  *(unsigned char *)(a2 + 13) = 0; /*0x588e33*/
  *(unsigned int *)a2 = (void*)&VectorClass_SubzoneConnectionStruct_vftable; /*0x588e36*/
  if ( a2 != v3 ) /*0x588e3c*/
  {
    VectorClass::Cleanup5(a2); /*0x588e40*/
    v4 = *(unsigned int *)(v3 + 8); /*0x588e46*/
    *(unsigned int *)(a2 + 8) = v4; /*0x588e4b*/
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
            *(unsigned int *)v6 = 0; /*0x588e6e*/
            *(unsigned char *)(v6 + 4) = 0; /*0x588e70*/
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
      *(unsigned int *)(a2 + 4) = v5; /*0x588e7f*/
      if ( v5 ) /*0x588e82*/
      {
        v8 = *(unsigned int *)(a2 + 8); /*0x588e84*/
        v9 = 0; /*0x588e87*/
        *(unsigned char *)(a2 + 13) = 1; /*0x588e8b*/
        if ( v8 > 0 ) /*0x588e8f*/
        {
          do /*0x588eab*/
          {
            v10 = *(unsigned int *)(v3 + 4); /*0x588e91*/
            v11 = *(unsigned int *)(a2 + 4); /*0x588e94*/
            *(unsigned int *)(v11 + 8 * v9) = *(unsigned int *)(v10 + 8 * v9); /*0x588e9a*/
            *(unsigned int *)(v11 + 8 * v9 + 4) = *(unsigned int *)(v10 + 8 * v9 + 4); /*0x588ea1*/
            ++v9; /*0x588ea8*/
          }
          while ( v9 < *(unsigned int *)(a2 + 8) ); /*0x588eab*/
        }
      }
    }
    else
    {
      *(unsigned int *)(a2 + 4) = 0; /*0x588eaf*/
      *(unsigned char *)(a2 + 13) = 0; /*0x588eb2*/
    }
  }
  *(unsigned int *)(a2 + 16) = *(unsigned int *)(v3 + 16); /*0x588eb9*/
  *(unsigned int *)(a2 + 20) = *(unsigned int *)(v3 + 20); /*0x588ebf*/
  *(unsigned int *)a2 = (void*)&DynamicVectorClass_SubzoneConnectionStruct_vftable; /*0x588ec2*/
  *(unsigned short *)(a2 + 24) = *(unsigned short *)(v3 + 24); /*0x588ecc*/
  *(unsigned int *)(a2 + 28) = *(unsigned int *)(v3 + 28); /*0x588ed3*/
  *(unsigned int *)(a2 + 32) = *(unsigned int *)(v3 + 32); /*0x588ed9*/
  return a2; /*0x588eb8*/
}
} // namespace gamemd

// 0x588F00
namespace gamemd {
void VectorClass_W4PassabilityType::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x588f06*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x588f16*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x588F30
namespace gamemd {
unsigned int VectorClass_W4PassabilityType::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x588f37*/
}
} // namespace gamemd

// 0x588F50
namespace gamemd {
int VectorClass_W4PassabilityType::Clear(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x588F60
namespace gamemd {
void VectorClass_W4PassabilityType::Destroy_0()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x588f66*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x588f76*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x588F90
namespace gamemd {
unsigned int VectorClass_W4PassabilityType::GetItemIndex_0(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 3;
  else
    return 0; /*0x588f97*/
}
} // namespace gamemd

// 0x588FB0
namespace gamemd {
unsigned int * VectorClass_UHashObject_uint_uint::Clear(unsigned int * a2, int a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx

    v3 = *((unsigned int *)this + 4);
  v4 = *(unsigned int *)(v3 + 8 * a3); /*0x588fb7*/
  v5 = v3 + 8 * a3; /*0x588fba*/
  *a2 = v4; /*0x588fc1*/
  a2[1] = *(unsigned int *)(v5 + 4); /*0x588fc6*/
  return a2; /*0x588fc9*/
}
} // namespace gamemd

// 0x588FD0
namespace gamemd {
void VectorClass_W4PassabilityType::Destroy_1()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x588fd6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x588fe6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x589000
namespace gamemd {
unsigned int VectorClass_W4PassabilityType::GetItemIndex_1(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (a2 - *((unsigned int *)this + 16)) / 0xCu;
  else
    return 0; /*0x589007*/
}
} // namespace gamemd

// 0x589030
namespace gamemd {
int VectorClass_UHashObject_uint_SubzoneConn::Clear(int a2, int a3)
{
  int v3; // ecx
  int v4; // edx
  int v5; // ecx

    v3 = *((unsigned int *)this + 4);
  v4 = *(unsigned int *)(v3 + 12 * a3); /*0x58903a*/
  v5 = v3 + 12 * a3; /*0x58903d*/
  *(unsigned int *)a2 = v4; /*0x589044*/
  *(unsigned int *)(a2 + 4) = *(unsigned int *)(v5 + 4); /*0x589049*/
  *(unsigned char *)(a2 + 8) = *(unsigned char *)(v5 + 8); /*0x58904f*/
  return a2; /*0x589052*/
}
} // namespace gamemd

// 0x5896F0
namespace gamemd {
char VectorClass_USubzoneTrackingStruct::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x5896ff*/
  {
    v3 = 0; /*0x589701*/
    if ( m_8 <= 0 ) /*0x589705*/
      return 1; /*0x589735*/
    v4 = (unsigned int *)(*(unsigned int *)(a2 + 4) + 28); /*0x58970d*/
        for ( i = (unsigned int *)(*((unsigned int *)this + 4) + 28); *((unsigned short *)i - 2) == *((unsigned short *)v4 - 2) && *i == *v4; i += 9 )
    {
      ++v3; /*0x589725*/
      v4 += 9; /*0x589726*/
      if ( v3 >= m_8 ) /*0x58972e*/
        return 1; /*0x58972e*/
    }
  }
  return 0; /*0x589730*/
}
} // namespace gamemd

// 0x589740
namespace gamemd {
char VectorClass_USubzoneTrackingStruct::Release(int a2, int * a3)
{
  int v3; // edi
  _VectorClass_USubzoneTrackingStruct *v4; // ebp
  int *v5; // eax
  VectorClass *v6; // esi
  int *v7; // esi
  int *v8; // ecx
  int m_8; // eax
  int *v11; // edi
  char *v12; // esi
  int v13; // esi
  int v14; // eax
  void *v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // esi
  void *v19; // eax
  int *v20; // [esp+10h] [ebp-Ch]
  VectorClass *v22; // [esp+18h] [ebp-4h]
  int v23; // [esp+18h] [ebp-4h]
  void *v24; // [esp+18h] [ebp-4h]
  int v25; // [esp+20h] [ebp+4h]

  v3 = a2; /*0x589747*/
  v4 = this; /*0x58974d*/
  if ( a2 ) /*0x589755*/
  {
        *((unsigned int *)this + 48) = 0;
    if ( a3 ) /*0x589764*/
    {
      *a3 = a2; /*0x5897d9*/
      v7 = a3 + 1; /*0x5897de*/
      if ( a2 - 1 >= 0 ) /*0x5897e3*/
      {
        do /*0x589817*/
        {
          VectorClass::ConstructSubzone((VectorClass *)v7, 0, 0); /*0x5897f1*/
          *v7 = (int)&DynamicVectorClass_SubzoneConnectionStruct_vftable; /*0x5897f6*/
          v7[5] = 10; /*0x5897fc*/
          v7[4] = 0; /*0x5897ff*/
          (*(void (**)(int *))(*v7 + 12))(v7); /*0x589806*/
          *((unsigned short *)v7 + 12) = 0; /*0x589809*/
          v7[7] = 0; /*0x58980d*/
          v7[8] = 0; /*0x589810*/
          v7 += 9; /*0x589813*/
          --v3; /*0x589816*/
        }
        while ( v3 ); /*0x589817*/
        v3 = a2; /*0x589819*/
        v4 = this; /*0x58981d*/
      }
      v20 = a3 + 1; /*0x589828*/
    }
    else
    {
      v5 = (int *)RA2_OPNEW(36 * a2 + 4); /*0x589771*/
      if ( v5 ) /*0x58977b*/
      {
        *v5 = a2; /*0x58977d*/
        v6 = (VectorClass *)(v5 + 1); /*0x58977f*/
        v22 = (VectorClass *)(v5 + 1); /*0x589785*/
        if ( a2 - 1 >= 0 ) /*0x58978b*/
        {
          do /*0x5897bf*/
          {
            VectorClass::ConstructSubzone(v6, 0, 0); /*0x589799*/
            v6->vtable0 = (void*)&DynamicVectorClass_SubzoneConnectionStruct_vftable; /*0x58979e*/
            v6[1].Items = (void *)10; /*0x5897a4*/
            v6[1].vtable0 = 0; /*0x5897a7*/
            (*((void (**)(VectorClass *))v6->vtable0 + 3))(v6); /*0x5897ae*/
            IDA_LOWORD(v6[1].Capacity) = 0; /*0x5897b1*/
            *(unsigned int *)&v6[1].IsInitialized = 0; /*0x5897b5*/
            v6[2].vtable0 = 0; /*0x5897b8*/
            v6 = (VectorClass *)((char *)v6 + 36); /*0x5897bb*/
            --v3; /*0x5897be*/
          }
          while ( v3 ); /*0x5897bf*/
          v3 = a2; /*0x5897c1*/
          v6 = v22; /*0x5897c5*/
          v4 = this; /*0x5897c9*/
        }
        v20 = (int *)v6; /*0x5897cd*/
      }
      else
      {
        v20 = 0; /*0x5897d3*/
      }
    }
    v8 = v20; /*0x58982c*/
    IDA_LOBYTE(v4->m_C) = 1; /*0x589830*/
    if ( v20 ) /*0x589836*/
    {
      if ( *(unsigned int *)&v4->m_1[3] ) /*0x589844*/
      {
        m_8 = v4->m_8; /*0x58984d*/
        if ( v3 < m_8 ) /*0x589852*/
          m_8 = v3; /*0x589854*/
        if ( m_8 > 0 ) /*0x589858*/
        {
          v11 = v20 + 5; /*0x58985f*/
          v23 = m_8; /*0x589864*/
          do /*0x5898a9*/
          {
                        v12 = (int)v11 + *((unsigned int *)this + 1) + -20 - (unsigned int)v20;
            VectorClass_USubzoneTrackingStruct::SetCapacity((VectorClass_USubzoneTrackingStruct *)(v11 - 5), v12); /*0x589879*/
            *(v11 - 1) = *((unsigned int *)v12 + 4); /*0x589881*/
            *v11 = *((unsigned int *)v12 + 5); /*0x589887*/
            *((unsigned short *)v11 + 2) = *((unsigned short *)v12 + 12); /*0x58988d*/
            v11[2] = *((unsigned int *)v12 + 7); /*0x589894*/
            v11[3] = *((unsigned int *)v12 + 8); /*0x58989e*/
            v11 += 9; /*0x5898a1*/
            --v23; /*0x5898a5*/
          }
          while ( v23 ); /*0x5898a9*/
          v3 = a2; /*0x5898ab*/
          v4 = this; /*0x5898af*/
        }
        if ( IDA_BYTE1(v4->m_C) ) /*0x5898b3*/
        {
          v13 = *(unsigned int *)&v4->m_1[3]; /*0x5898b8*/
          if ( v13 ) /*0x5898bd*/
          {
            v14 = *(unsigned int *)(v13 - 4); /*0x5898bf*/
            v15 = (void *)(v13 - 4); /*0x5898c2*/
            v24 = (void *)(v13 - 4); /*0x5898c5*/
            v16 = 9 * v14; /*0x5898c9*/
            v17 = v14 - 1; /*0x5898cc*/
            v18 = v13 + 4 * v16; /*0x5898cd*/
            if ( v17 >= 0 ) /*0x5898d0*/
            {
              v25 = v17 + 1; /*0x5898d3*/
              do /*0x589907*/
              {
                v19 = *(void **)(v18 - 32); /*0x5898d7*/
                v18 -= 36; /*0x5898da*/
                *(unsigned int *)v18 = (void*)&VectorClass_SubzoneConnectionStruct_vftable; /*0x5898df*/
                if ( v19 ) /*0x5898e5*/
                {
                  if ( *(unsigned char *)(v18 + 13) ) /*0x5898e7*/
                  {
                    RA2_OPDEL(v19); /*0x5898ed*/
                    *(unsigned int *)(v18 + 4) = 0; /*0x5898f5*/
                  }
                }
                *(unsigned char *)(v18 + 13) = 0; /*0x5898fc*/
                *(unsigned int *)(v18 + 8) = 0; /*0x589900*/
                --v25; /*0x589903*/
              }
              while ( v25 ); /*0x589907*/
              v15 = v24; /*0x589909*/
            }
            RA2_OPDEL(v15); /*0x58990e*/
          }
          *(unsigned int *)&v4->m_1[3] = 0; /*0x589916*/
        }
        v8 = v20; /*0x589919*/
      }
      *(unsigned int *)&v4->m_1[3] = v8; /*0x58991d*/
      v4->m_8 = v3; /*0x589928*/
      IDA_BYTE1(v4->m_C) = a3 == 0; /*0x58992f*/
      return 1; /*0x589934*/
    }
    else
    {
      return 0; /*0x58983b*/
    }
  }
  else
  {
        (*(void (**)(unsigned char *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x589948*/
  }
}
} // namespace gamemd

// 0x589960
namespace gamemd {
void VectorClass_USubzoneTrackingStruct::ddtor()
{
  int v2; // ecx
  int v3; // eax
  void *v4; // edx
  int v5; // esi
  int v6; // eax
  int v7; // esi
  int v8; // ebp
  void *v9; // eax
  void *v10; // [esp+8h] [ebp-4h]

    v2 = *((unsigned int *)this + 16);
    if ( v2 && *((unsigned char *)this + 52) )
  {
    v3 = *(unsigned int *)(v2 - 4); /*0x589977*/
    v4 = (void *)(v2 - 4); /*0x58997a*/
    v10 = (void *)(v2 - 4); /*0x58997e*/
    v5 = 9 * v3; /*0x589982*/
    v6 = v3 - 1; /*0x589985*/
    v7 = v2 + 4 * v5; /*0x589986*/
    if ( v6 >= 0 ) /*0x589989*/
    {
      v8 = v6 + 1; /*0x58998c*/
      do /*0x5899b7*/
      {
        v9 = *(void **)(v7 - 32); /*0x58998f*/
        v7 -= 36; /*0x589992*/
        *(unsigned int *)v7 = (void*)&VectorClass_SubzoneConnectionStruct_vftable; /*0x589997*/
        if ( v9 && *(unsigned char *)(v7 + 13) ) /*0x58999f*/
        {
          RA2_OPDEL(v9); /*0x5899a5*/
          *(unsigned int *)(v7 + 4) = 0; /*0x5899ad*/
        }
        --v8; /*0x5899b0*/
        *(unsigned char *)(v7 + 13) = 0; /*0x5899b1*/
        *(unsigned int *)(v7 + 8) = 0; /*0x5899b4*/
      }
      while ( v8 ); /*0x5899b7*/
      v4 = v10; /*0x5899b9*/
    }
    RA2_OPDEL(v4); /*0x5899bf*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5899E0
namespace gamemd {
int VectorClass_USubzoneTrackingStruct::GetSize(int a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x5899ee*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x5899f7*/
  if ( m_8 <= 0 ) /*0x5899fb*/
    return -1; /*0x589a22*/
    for ( i = (unsigned int *)(*((unsigned int *)this + 16) + 28);
        *((unsigned short *)i - 2) != *(unsigned short *)(a2 + 24) || *i != *(unsigned int *)(a2 + 28);
        i += 9 )
  {
    if ( ++result >= m_8 ) /*0x589a20*/
      return -1; /*0x589a20*/
  }
  return result; /*0x5899eb*/
}
} // namespace gamemd

// 0x589A30
namespace gamemd {
unsigned int VectorClass_USubzoneTrackingStruct::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (a2 - *((unsigned int *)this + 16)) / 0x24u;
  else
    return 0; /*0x589a37*/
}
} // namespace gamemd

// 0x589EB0
namespace gamemd {
char VectorClass_W4PassabilityType::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x589ebd*/
  {
    v3 = 0; /*0x589ebf*/
    if ( m_8 <= 0 ) /*0x589ec3*/
      return 1; /*0x589ee3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x589ecb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x589ed4*/
    {
      ++v3; /*0x589ed6*/
      ++v4; /*0x589ed7*/
      if ( v3 >= m_8 ) /*0x589edc*/
        return 1; /*0x589edc*/
    }
  }
  return 0; /*0x589ede*/
}
} // namespace gamemd

// 0x589EF0
namespace gamemd {
char VectorClass_W4PassabilityType::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x589efc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x589f0c*/
      v4 = a3; /*0x589f22*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x589f1e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x589f2a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x589f41*/
          m_8 = a2; /*0x589f43*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x589f4e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x589f66*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x589f88*/
    }
    else
    {
      return 0; /*0x589f2f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x589f98*/
  }
}
} // namespace gamemd

// 0x589FA0
namespace gamemd {
void VectorClass_W4PassabilityType::ddtor()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x589fb3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x589FD0
namespace gamemd {
int VectorClass_W4PassabilityType::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x589fd8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x589fe1*/
  if ( m_8 <= 0 ) /*0x589fe5*/
    return -1; /*0x589ffc*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x589feb*/
  {
    if ( ++result >= m_8 ) /*0x589ffa*/
      return -1; /*0x589ffa*/
  }
  return result; /*0x589fda*/
}
} // namespace gamemd

// 0x58A010
namespace gamemd {
unsigned int VectorClass_W4PassabilityType::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x58a017*/
}
} // namespace gamemd

// 0x58A030
namespace gamemd {
char VectorClass_W4PassabilityType::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x58a03c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x58a048*/
      v4 = a3; /*0x58a05e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x58a05a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x58a066*/
      return 0; /*0x58a0da*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x58a074*/
        m_8 = a2; /*0x58a076*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x58a081*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x58a099*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x58a0ce*/
}
} // namespace gamemd

// 0x58A0E0
namespace gamemd {
int VectorClass_W4PassabilityType::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x58a0e3*/
  if ( m_10 <= 0 ) /*0x58a0e8*/
    return -1; /*0x58a0ff*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x58a0fd*/
      return -1; /*0x58a0fd*/
  }
  return result; /*0x58a102*/
}
} // namespace gamemd

// 0x58A110
namespace gamemd {
char VectorClass_UHashObject_uint_uint::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x58a11d*/
  {
    v3 = 0; /*0x58a11f*/
    if ( m_8 <= 0 ) /*0x58a123*/
      return 1; /*0x58a143*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x58a12b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x58a134*/
    {
      ++v3; /*0x58a136*/
      v4 += 2; /*0x58a137*/
      if ( v3 >= m_8 ) /*0x58a13c*/
        return 1; /*0x58a13c*/
    }
  }
  return 0; /*0x58a13e*/
}
} // namespace gamemd

// 0x58A150
namespace gamemd {
char VectorClass_W4PassabilityType::SetCapacity_0(int a2, unsigned int * a3)
{
  unsigned int *v4; // ebx
  int v5; // eax
  unsigned int *v6; // edi
  int m_8; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // eax

  if ( a2 ) /*0x58a15c*/
  {
    v4 = a3; /*0x58a162*/
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x58a16c*/
    {
      v6 = a3; /*0x58a194*/
    }
    else
    {
      v5 = RA2_OPNEW(8 * a2); /*0x58a176*/
      if ( v5 ) /*0x58a180*/
        v6 = (unsigned int *)v5; /*0x58a185*/
      else
        v6 = 0; /*0x58a18d*/
    }
        *((unsigned char *)this + 12) = 1;
    if ( !v6 ) /*0x58a1a0*/
      return 0; /*0x58a220*/
        if ( *((unsigned int *)this + 1) )
    {
            v7 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x58a1ae*/
        m_8 = a2; /*0x58a1b0*/
      v8 = 0; /*0x58a1b2*/
      if ( m_8 > 0 ) /*0x58a1b6*/
      {
        do /*0x58a1ce*/
        {
                    v9 = *((unsigned int *)this + 1);
          ++v8; /*0x58a1bb*/
          v6[2 * v8 - 2] = *(unsigned int *)(v9 + 8 * v8 - 8); /*0x58a1c2*/
          v6[2 * v8 - 1] = *(unsigned int *)(v9 + 8 * v8 - 4); /*0x58a1ca*/
        }
        while ( v8 < m_8 ); /*0x58a1ce*/
        v4 = a3; /*0x58a1d0*/
      }
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x58a1df*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v6;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = v4 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v10 = *((unsigned int *)this + 2);
    if ( v10 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v10;
  return 1; /*0x58a214*/
}
} // namespace gamemd

// 0x58A230
namespace gamemd {
int VectorClass_W4PassabilityType::FindItemIndex_0(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x58a233*/
  if ( m_10 <= 0 ) /*0x58a238*/
    return -1; /*0x58a24f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; i += 2 )
  {
    if ( ++result >= m_10 ) /*0x58a24d*/
      return -1; /*0x58a24d*/
  }
  return result; /*0x58a252*/
}
} // namespace gamemd

// 0x58A260
namespace gamemd {
char VectorClass_UHashObject_uint_SubzoneConn::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x58a26d*/
  {
    v3 = 0; /*0x58a26f*/
    if ( m_8 <= 0 ) /*0x58a273*/
      return 1; /*0x58a293*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x58a27b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x58a284*/
    {
      ++v3; /*0x58a286*/
      v4 += 3; /*0x58a287*/
      if ( v3 >= m_8 ) /*0x58a28c*/
        return 1; /*0x58a28c*/
    }
  }
  return 0; /*0x58a28e*/
}
} // namespace gamemd

// 0x58A2A0
namespace gamemd {
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
        *((unsigned char *)this + 12) = 0;
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
      v6 = RA2_OPNEW(12 * a2); /*0x58a2c7*/
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
        *((unsigned char *)this + 12) = 1;
    if ( !v5 ) /*0x58a30d*/
      return 0; /*0x58a391*/
        if ( *((unsigned int *)this + 1) )
    {
            v11 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x58a319*/
        m_8 = a2; /*0x58a31b*/
      if ( m_8 > 0 ) /*0x58a31f*/
      {
        v12 = 0; /*0x58a321*/
        do /*0x58a33f*/
        {
          v13 = &v5[v12]; /*0x58a326*/
                    v14 = (unsigned int *)(v12 + *((unsigned int *)this + 1));
          v12 += 12; /*0x58a32b*/
          --m_8; /*0x58a32e*/
          *(unsigned int *)v13 = *v14; /*0x58a331*/
          *((unsigned int *)v13 + 1) = v14[1]; /*0x58a336*/
          *((unsigned int *)v13 + 2) = v14[2]; /*0x58a33c*/
        }
        while ( m_8 ); /*0x58a33f*/
        v3 = a2; /*0x58a341*/
      }
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x58a350*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v5;
        *((unsigned int *)this + 2) = v3;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v15 = *((unsigned int *)this + 2);
    if ( v15 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v15;
  return 1; /*0x58a385*/
}
} // namespace gamemd

// 0x58A3A0
namespace gamemd {
int VectorClass_W4PassabilityType::FindItemIndex_1(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x58a3a3*/
  if ( m_10 <= 0 ) /*0x58a3a8*/
    return -1; /*0x58a3bf*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; i += 3 )
  {
    if ( ++result >= m_10 ) /*0x58a3bd*/
      return -1; /*0x58a3bd*/
  }
  return result; /*0x58a3c2*/
}
} // namespace gamemd

// 0x58A470
namespace gamemd {
VectorClass_flat * VectorClass_USubzoneTrackingStruct::QueryInterface(unsigned int * Block, char a2)
{
  int v3; // ecx
  int v4; // eax
  void *v5; // edx
  int v6; // esi
  int v7; // eax
  int v8; // esi
  int v9; // ebp
  void *v10; // eax
  void *v12; // [esp+8h] [ebp-4h]

    v3 = *(Block + 1);
    *Block = &vt_VectorClass_SubzoneTrackingStruct;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    v4 = *(unsigned int *)(v3 - 4); /*0x58a48d*/
    v5 = (void *)(v3 - 4); /*0x58a490*/
    v12 = (void *)(v3 - 4); /*0x58a494*/
    v6 = 9 * v4; /*0x58a498*/
    v7 = v4 - 1; /*0x58a49b*/
    v8 = v3 + 4 * v6; /*0x58a49c*/
    if ( v7 >= 0 ) /*0x58a49f*/
    {
      v9 = v7 + 1; /*0x58a4a2*/
      do /*0x58a4cd*/
      {
        v10 = *(void **)(v8 - 32); /*0x58a4a5*/
        v8 -= 36; /*0x58a4a8*/
        *(unsigned int *)v8 = (void*)&VectorClass_SubzoneConnectionStruct_vftable; /*0x58a4ad*/
        if ( v10 && *(unsigned char *)(v8 + 13) ) /*0x58a4b5*/
        {
          RA2_OPDEL(v10); /*0x58a4bb*/
          *(unsigned int *)(v8 + 4) = 0; /*0x58a4c3*/
        }
        --v9; /*0x58a4c6*/
        *(unsigned char *)(v8 + 13) = 0; /*0x58a4c7*/
        *(unsigned int *)(v8 + 8) = 0; /*0x58a4ca*/
      }
      while ( v9 ); /*0x58a4cd*/
      v5 = v12; /*0x58a4cf*/
    }
    RA2_OPDEL(v5); /*0x58a4d5*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x58a4ed*/
    RA2_OPDEL(Block); /*0x58a4f0*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x58A630
namespace gamemd {
char * VectorClass_W4PassabilityType::Constructor(unsigned int * Block, char a2)
{
  int v3; // eax
  char *v4; // ebp
  int v5; // ecx
  int v6; // eax
  char *v7; // esi
  int v8; // edi
  void *v9; // eax
  void *v11; // eax

  if ( (a2 & 2) != 0 ) /*0x58a63a*/
  {
    v3 = *((unsigned int *)Block - 1); /*0x58a63c*/
    v4 = (char *)Block - 4; /*0x58a640*/
    v5 = 3 * v3; /*0x58a643*/
    v6 = v3 - 1; /*0x58a646*/
        v7 = Block + 2 * v5;
    if ( v6 >= 0 ) /*0x58a64a*/
    {
      v8 = v6 + 1; /*0x58a64d*/
      do /*0x58a67a*/
      {
        v9 = (void *)*((unsigned int *)v7 - 5); /*0x58a652*/
        v7 -= 24; /*0x58a655*/
        *(unsigned int *)v7 = (void*)&VectorClass_HashObject_unsigned_int_unsigned_int_vftable; /*0x58a65a*/
        if ( v9 && v7[13] ) /*0x58a662*/
        {
          RA2_OPDEL(v9); /*0x58a668*/
          *((unsigned int *)v7 + 1) = 0; /*0x58a670*/
        }
        --v8; /*0x58a673*/
        v7[13] = 0; /*0x58a674*/
        *((unsigned int *)v7 + 2) = 0; /*0x58a677*/
      }
      while ( v8 ); /*0x58a67a*/
    }
    if ( (a2 & 1) != 0 ) /*0x58a682*/
      RA2_OPDEL(v4); /*0x58a685*/
    return v4; /*0x58a68d*/
  }
  else
  {
        v11 = (void *)*(Block + 1);
        *Block = &vt_VectorClass_HashObject_unsigned_int_unsigned_int;
        if ( v11 && *((unsigned char *)Block + 13) )
    {
      RA2_OPDEL(v11); /*0x58a6aa*/
            *(Block + 1) = 0;
    }
        *((unsigned char *)Block + 13) = 0;
        *(Block + 2) = 0;
    if ( (a2 & 1) != 0 ) /*0x58a6c1*/
      RA2_OPDEL(Block); /*0x58a6c4*/
        return (char *)Block;
  }
}
} // namespace gamemd

// 0x58A6E0
namespace gamemd {
char VectorClass_UHashObject_uint_uint::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // ebx
  int v5; // eax
  unsigned int *v6; // edi
  int m_8; // ecx
  int v9; // eax
  int v10; // edx

  if ( a2 ) /*0x58a6ec*/
  {
    v4 = a3; /*0x58a6f2*/
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x58a6fc*/
    {
      v6 = a3; /*0x58a724*/
    }
    else
    {
      v5 = RA2_OPNEW(8 * a2); /*0x58a706*/
      if ( v5 ) /*0x58a710*/
        v6 = (unsigned int *)v5; /*0x58a715*/
      else
        v6 = 0; /*0x58a71d*/
    }
        *((unsigned char *)this + 12) = 1;
    if ( v6 ) /*0x58a730*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v8 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x58a747*/
          m_8 = a2; /*0x58a749*/
        v9 = 0; /*0x58a74b*/
        if ( m_8 > 0 ) /*0x58a74f*/
        {
          do /*0x58a767*/
          {
                        v10 = *((unsigned int *)this + 1);
            ++v9; /*0x58a754*/
            v6[2 * v9 - 2] = *(unsigned int *)(v10 + 8 * v9 - 8); /*0x58a75b*/
            v6[2 * v9 - 1] = *(unsigned int *)(v10 + 8 * v9 - 4); /*0x58a763*/
          }
          while ( v9 < m_8 ); /*0x58a767*/
          v4 = a3; /*0x58a769*/
        }
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x58a778*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v6;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = v4 == 0;
      return 1; /*0x58a79a*/
    }
    else
    {
      return 0; /*0x58a735*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x58a7aa*/
  }
}
} // namespace gamemd

// 0x58A7B0
namespace gamemd {
void VectorClass_UHashObject_uint_uint::ddtor()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x58a7c3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x58A7E0
namespace gamemd {
int VectorClass_UHashObject_uint_uint::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x58a7e8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x58a7f1*/
  if ( m_8 <= 0 ) /*0x58a7f5*/
    return -1; /*0x58a80c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; i += 2 ) /*0x58a7fb*/
  {
    if ( ++result >= m_8 ) /*0x58a80a*/
      return -1; /*0x58a80a*/
  }
  return result; /*0x58a7ea*/
}
} // namespace gamemd

// 0x58A820
namespace gamemd {
unsigned int VectorClass_UHashObject_uint_uint::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 3;
  else
    return 0; /*0x58a827*/
}
} // namespace gamemd

// 0x58A840
namespace gamemd {
char * VectorClass_W4PassabilityType::Constructor_0(unsigned int * Block, char a2)
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
        v7 = Block + 2 * v5;
    if ( v6 >= 0 ) /*0x58a85a*/
    {
      v8 = v6 + 1; /*0x58a85d*/
      do /*0x58a88a*/
      {
        v9 = (void *)*((unsigned int *)v7 - 5); /*0x58a862*/
        v7 -= 24; /*0x58a865*/
        *(unsigned int *)v7 = (void*)&VectorClass_HashObject_unsigned_int_SubzoneConnectionStruct_vftable; /*0x58a86a*/
        if ( v9 && v7[13] ) /*0x58a872*/
        {
          RA2_OPDEL(v9); /*0x58a878*/
          *((unsigned int *)v7 + 1) = 0; /*0x58a880*/
        }
        --v8; /*0x58a883*/
        v7[13] = 0; /*0x58a884*/
        *((unsigned int *)v7 + 2) = 0; /*0x58a887*/
      }
      while ( v8 ); /*0x58a88a*/
    }
    if ( (a2 & 1) != 0 ) /*0x58a892*/
      RA2_OPDEL(v4); /*0x58a895*/
    return v4; /*0x58a89d*/
  }
  else
  {
        v11 = (void *)*(Block + 1);
        *Block = &vt_VectorClass_HashObject_unsigned_int_SubzoneConnectionStruct;
        if ( v11 && *((unsigned char *)Block + 13) )
    {
      RA2_OPDEL(v11); /*0x58a8ba*/
            *(Block + 1) = 0;
    }
        *((unsigned char *)Block + 13) = 0;
        *(Block + 2) = 0;
    if ( (a2 & 1) != 0 ) /*0x58a8d1*/
      RA2_OPDEL(Block); /*0x58a8d4*/
        return (char *)Block;
  }
}
} // namespace gamemd

// 0x58A8F0
namespace gamemd {
char VectorClass_UHashObject_uint_SubzoneConn::Release(int a2, char * a3)
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
  unsigned int *v15; // edx

  v3 = a2; /*0x58a8f2*/
  if ( a2 ) /*0x58a8fe*/
  {
    v5 = a3; /*0x58a904*/
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x58a90d*/
    {
      if ( a2 - 1 >= 0 ) /*0x58a946*/
      {
        v9 = a3 + 4; /*0x58a948*/
        v10 = a2; /*0x58a94b*/
        do /*0x58a955*/
        {
          *(unsigned int *)v9 = 0; /*0x58a94c*/
          v9[4] = 0; /*0x58a94e*/
          v9 += 12; /*0x58a951*/
          --v10; /*0x58a954*/
        }
        while ( v10 ); /*0x58a955*/
      }
    }
    else
    {
      v6 = RA2_OPNEW(12 * a2); /*0x58a917*/
      if ( v6 ) /*0x58a921*/
      {
        if ( a2 - 1 >= 0 ) /*0x58a928*/
        {
          v7 = v6 + 4; /*0x58a92a*/
          v8 = a2; /*0x58a92d*/
          do /*0x58a937*/
          {
            *(unsigned int *)v7 = 0; /*0x58a92e*/
            *(unsigned char *)(v7 + 4) = 0; /*0x58a930*/
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
        *((unsigned char *)this + 12) = 1;
    if ( v5 ) /*0x58a95d*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v12 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x58a972*/
          m_8 = a2; /*0x58a974*/
        if ( m_8 > 0 ) /*0x58a978*/
        {
          v13 = 0; /*0x58a97a*/
          do /*0x58a998*/
          {
            v14 = &v5[v13]; /*0x58a97f*/
                        v15 = (unsigned int *)(v13 + *((unsigned int *)this + 1));
            v13 += 12; /*0x58a984*/
            --m_8; /*0x58a987*/
            *(unsigned int *)v14 = *v15; /*0x58a98a*/
            *((unsigned int *)v14 + 1) = v15[1]; /*0x58a98f*/
            *((unsigned int *)v14 + 2) = v15[2]; /*0x58a995*/
          }
          while ( m_8 ); /*0x58a998*/
          v3 = a2; /*0x58a99a*/
        }
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x58a9a9*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v5;
            *((unsigned int *)this + 2) = v3;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x58a9cb*/
    }
    else
    {
      return 0; /*0x58a962*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x58a9db*/
  }
}
} // namespace gamemd

// 0x58A9F0
namespace gamemd {
void VectorClass_UHashObject_uint_SubzoneConn::ddtor()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x58aa03*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x58AA20
namespace gamemd {
int VectorClass_UHashObject_uint_SubzoneConn::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x58aa28*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x58aa31*/
  if ( m_8 <= 0 ) /*0x58aa35*/
    return -1; /*0x58aa4c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; i += 3 ) /*0x58aa3b*/
  {
    if ( ++result >= m_8 ) /*0x58aa4a*/
      return -1; /*0x58aa4a*/
  }
  return result; /*0x58aa2a*/
}
} // namespace gamemd

// 0x58AA60
namespace gamemd {
unsigned int VectorClass_UHashObject_uint_SubzoneConn::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (a2 - *((unsigned int *)this + 16)) / 0xCu;
  else
    return 0; /*0x58aa67*/
}
} // namespace gamemd

// 0x58AA90
namespace gamemd {
VectorClass_flat * VectorClass_W4PassabilityType::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_enum_PassabilityType;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x58aaa8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x58aac8*/
    RA2_OPDEL(Block); /*0x58aacb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x58AAE0
namespace gamemd {
DynamicVector * VectorClass_W4PassabilityType::Constructor_1(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_enum_PassabilityType;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x58aaf8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x58ab18*/
    RA2_OPDEL(Block); /*0x58ab1b*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x58AB30
namespace gamemd {
VectorClass_flat * VectorClass_UHashObject_uint_uint::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_HashObject_unsigned_int_unsigned_int;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x58ab48*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x58ab68*/
    RA2_OPDEL(Block); /*0x58ab6b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x58AB80
namespace gamemd {
VectorClass_flat * VectorClass_UHashObject_uint_SubzoneConn::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_HashObject_unsigned_int_SubzoneConnectionStruct;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x58ab98*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x58abb8*/
    RA2_OPDEL(Block); /*0x58abbb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x58AC70
unsigned int * VectorClass_flat::ConstructSubzone(int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  char *v7; // eax
  char *v8; // ecx
  int v9; // edx

    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = a2;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
    *this = &vt_VectorClass_SubzoneConnectionStruct;
  if ( !a2 ) /*0x58ac90*/
      if ( !a2 )
  if ( !a3 ) /*0x58ac98*/
  {
    v7 = (char *)RA2_OPNEW(8 * a2); /*0x58acc2*/
    if ( v7 ) /*0x58accc*/
    {
      v8 = v7; /*0x58acd1*/
      if ( a2 - 1 >= 0 ) /*0x58acd5*/
      {
        v9 = a2; /*0x58acd7*/
        do /*0x58ace1*/
        {
          *(unsigned int *)v8 = 0; /*0x58acd8*/
          v8[4] = 0; /*0x58acda*/
          v8 += 8; /*0x58acdd*/
          --v9; /*0x58ace0*/
        }
        while ( v9 ); /*0x58ace1*/
                *((unsigned int *)this + 4) = v7;
                *((unsigned char *)this + 13) = 1;
                return this;
      }
    }
    else
    {
      v7 = 0; /*0x58acf2*/
    }
        *((unsigned int *)this + 4) = v7;
        *((unsigned char *)this + 13) = 1;
        return this;
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
    *((unsigned int *)this + 4) = a3;
    return this;
}
// 0x58AD10
namespace gamemd {
unsigned int * VectorClass_USubzoneTrackingStruct::SetCapacity(unsigned int * a2)
{
  int v3; // edi
  char *v4; // eax
  char *v5; // ecx
  int v6; // edx
  void *Capacity; // ecx
  int v8; // eax
  int v9; // edx
  unsigned int *Items; // ecx

  if ( this == (VectorClass_USubzoneTrackingStruct *)a2 ) /*0x58ad1c*/
    return this; /*0x58ad1c*/
    (*(void (**)(unsigned int *))(*(char *)this + 48))(this);
  v3 = a2[2]; /*0x58ad23*/
    *((unsigned int *)this + 8) = v3;
  if ( !v3 ) /*0x58ad2d*/
  {
        *((unsigned int *)this + 4) = 0;
        *((unsigned char *)this + 13) = 0;
    return this; /*0x58ad9b*/
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
        *(unsigned int *)v5 = 0; /*0x58ad4d*/
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
    *((unsigned int *)this + 4) = v4;
  if ( !v4 ) /*0x58ad61*/
    return this; /*0x58ad61*/
    v7 = *((unsigned int *)this + 8);
  v8 = 0; /*0x58ad66*/
    *((unsigned char *)this + 13) = 1;
  if ( (int)Capacity <= 0 ) /*0x58ad6e*/
    return this; /*0x58ad6e*/
  do /*0x58ad8a*/
  {
    v9 = a2[1]; /*0x58ad70*/
        v10 = *((unsigned int *)this + 4);
    Items[2 * v8] = *(unsigned int *)(v9 + 8 * v8); /*0x58ad79*/
    Items[2 * v8 + 1] = *(unsigned int *)(v9 + 8 * v8 + 4); /*0x58ad80*/
    ++v8; /*0x58ad87*/
  }
  while ( v8 < (int)this->Capacity ); /*0x58ad8a*/
  return this; /*0x58ad8e*/
}
} // namespace gamemd

// 0x5AC3A0
namespace gamemd {
void VectorClass_ptr_MapRegionClass::Destroy()
{
  void *Items; // eax

  Items = *(unsigned int *)&this->Items; /*0x5ac3a6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(Items); /*0x5ac3b6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5AC3D0
namespace gamemd {
unsigned int VectorClass_ptr_MapRegionClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x5ac3d7*/
}
} // namespace gamemd

// 0x5AC3F0
namespace gamemd {
int VectorClass_ptr_MapRegionClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x5AC5F0
namespace gamemd {
void VectorClass_N::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x5ac5f6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x5ac606*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5AC620
namespace gamemd {
unsigned int VectorClass_N::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 3;
  else
    return 0; /*0x5ac627*/
}
} // namespace gamemd

// 0x5AC640
namespace gamemd {
double VectorClass_N::Clear(int a2)
{
    return *(double *)(*((unsigned int *)this + 4) + 8 * a2);
}
} // namespace gamemd

// 0x5AC6A0
namespace gamemd {
char VectorClass_ptr_MapRegionClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x5ac6ad*/
  {
    v3 = 0; /*0x5ac6af*/
    if ( m_8 <= 0 ) /*0x5ac6b3*/
      return 1; /*0x5ac6d3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x5ac6bb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x5ac6c4*/
    {
      ++v3; /*0x5ac6c6*/
      ++v4; /*0x5ac6c7*/
      if ( v3 >= m_8 ) /*0x5ac6cc*/
        return 1; /*0x5ac6cc*/
    }
  }
  return 0; /*0x5ac6ce*/
}
} // namespace gamemd

// 0x5AC6E0
namespace gamemd {
char VectorClass_ptr_MapRegionClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5ac6ec*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5ac6fc*/
      v4 = a3; /*0x5ac712*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5ac70e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x5ac71a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x5ac731*/
          m_8 = a2; /*0x5ac733*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x5ac73e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x5ac756*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x5ac778*/
    }
    else
    {
      return 0; /*0x5ac71f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x5ac788*/
  }
}
} // namespace gamemd

// 0x5AC790
namespace gamemd {
void VectorClass_ptr_MapRegionClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x5ac7a3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5AC7C0
namespace gamemd {
int VectorClass_ptr_MapRegionClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x5ac7c8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x5ac7d1*/
  if ( m_8 <= 0 ) /*0x5ac7d5*/
    return -1; /*0x5ac7ec*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x5ac7db*/
  {
    if ( ++result >= m_8 ) /*0x5ac7ea*/
      return -1; /*0x5ac7ea*/
  }
  return result; /*0x5ac7ca*/
}
} // namespace gamemd

// 0x5AC800
namespace gamemd {
unsigned int VectorClass_ptr_MapRegionClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x5ac807*/
}
} // namespace gamemd

// 0x5AC820
namespace gamemd {
char VectorClass_ptr_MapRegionClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  void *Capacity; // ecx
  int i; // eax
  void *v7; // eax

  if ( a2 ) /*0x5ac82c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5ac838*/
      v4 = a3; /*0x5ac84e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5ac84a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x5ac856*/
      return 0; /*0x5ac8ca*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < (int)Capacity ) /*0x5ac864*/
        Capacity = (void *)a2; /*0x5ac866*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x5ac871*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(this->Items); /*0x5ac889*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x5ac8be*/
}
} // namespace gamemd

// 0x5AC8D0
namespace gamemd {
int VectorClass_ptr_MapRegionClass::FindItemIndex(unsigned int * a2)
{
  void *Count; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x5ac8d3*/
  if ( (int)Count <= 0 ) /*0x5ac8d8*/
    return -1; /*0x5ac8ef*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= (int)Count ) /*0x5ac8ed*/
      return -1; /*0x5ac8ed*/
  }
  return result; /*0x5ac8f2*/
}
} // namespace gamemd

// 0x5AD0F0
namespace gamemd {
char VectorClass_N::AddRef(int a2)
{
  int m_8; // edi
  int v3; // esi
  double *v4; // edx
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x5ad0fc*/
  {
    v3 = 0; /*0x5ad0fe*/
    if ( m_8 <= 0 ) /*0x5ad102*/
      return 1; /*0x5ad124*/
    v4 = *(double **)(a2 + 4); /*0x5ad104*/
        v5 = *((unsigned int *)this + 4) - (unsigned int)v4;
    while ( *(double *)((char *)v4 + v5) == *v4 ) /*0x5ad116*/
    {
      ++v3; /*0x5ad118*/
      ++v4; /*0x5ad119*/
      if ( v3 >= m_8 ) /*0x5ad11e*/
        return 1; /*0x5ad11e*/
    }
  }
  return 0; /*0x5ad120*/
}
} // namespace gamemd

// 0x5AD130
namespace gamemd {
char VectorClass_N::Release(int a2, unsigned int * a3)
{
  int v3; // ebx
  unsigned int *v5; // edi
  int m_8; // ecx
  int v8; // eax
  int v9; // edx

  v3 = a2; /*0x5ad131*/
  if ( a2 ) /*0x5ad13b*/
  {
    v5 = a3; /*0x5ad141*/
        *((unsigned char *)this + 12) = 0;
    if ( !a3 ) /*0x5ad14b*/
      v5 = (unsigned int *)RA2_OPNEW(8 * a2); /*0x5ad15d*/
        *((unsigned char *)this + 12) = 1;
    if ( v5 ) /*0x5ad165*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v7 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x5ad17b*/
          m_8 = a2; /*0x5ad17d*/
        v8 = 0; /*0x5ad17f*/
        if ( m_8 > 0 ) /*0x5ad183*/
        {
          do /*0x5ad19b*/
          {
                        v9 = *((unsigned int *)this + 1);
            ++v8; /*0x5ad188*/
            v5[2 * v8 - 2] = *(unsigned int *)(v9 + 8 * v8 - 8); /*0x5ad18f*/
            v5[2 * v8 - 1] = *(unsigned int *)(v9 + 8 * v8 - 4); /*0x5ad197*/
          }
          while ( v8 < m_8 ); /*0x5ad19b*/
          v3 = a2; /*0x5ad19d*/
        }
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x5ad1ac*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v5;
            *((unsigned int *)this + 2) = v3;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x5ad1d1*/
    }
    else
    {
      return 0; /*0x5ad169*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x5ad1e0*/
  }
}
} // namespace gamemd

// 0x5AD1F0
namespace gamemd {
void VectorClass_N::ddtor()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x5ad203*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5AD220
namespace gamemd {
int VectorClass_N::GetSize(double * a2)
{
  int m_8; // esi
  int v4; // edx
  double *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x5ad22a*/
    v3 = *((unsigned int *)this + 32);
  v4 = 0; /*0x5ad233*/
  if ( m_8 <= 0 ) /*0x5ad237*/
    return -1; /*0x5ad253*/
  for ( i = *(double **)&this->Items; *i != *a2; ++i ) /*0x5ad239*/
  {
    if ( ++v4 >= m_8 ) /*0x5ad251*/
      return -1; /*0x5ad251*/
  }
  return v4; /*0x5ad229*/
}
} // namespace gamemd

// 0x5AD270
namespace gamemd {
unsigned int VectorClass_N::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 3;
  else
    return 0; /*0x5ad277*/
}
} // namespace gamemd

// 0x5AD290
namespace gamemd {
char VectorClass_N::SetCapacity(int a2, unsigned int * a3)
{
  int v3; // ebx
  unsigned int *v5; // edi
  int m_8; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // eax

  v3 = a2; /*0x5ad291*/
  if ( a2 ) /*0x5ad29b*/
  {
    v5 = a3; /*0x5ad2a1*/
        *((unsigned char *)this + 12) = 0;
    if ( !a3 ) /*0x5ad2ab*/
      v5 = (unsigned int *)RA2_OPNEW(8 * a2); /*0x5ad2bd*/
        *((unsigned char *)this + 12) = 1;
    if ( !v5 ) /*0x5ad2c5*/
      return 0; /*0x5ad347*/
        if ( *((unsigned int *)this + 1) )
    {
            v6 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x5ad2d3*/
        m_8 = a2; /*0x5ad2d5*/
      v7 = 0; /*0x5ad2d7*/
      if ( m_8 > 0 ) /*0x5ad2db*/
      {
        do /*0x5ad2f3*/
        {
                    v8 = *((unsigned int *)this + 1);
          ++v7; /*0x5ad2e0*/
          v5[2 * v7 - 2] = *(unsigned int *)(v8 + 8 * v7 - 8); /*0x5ad2e7*/
          v5[2 * v7 - 1] = *(unsigned int *)(v8 + 8 * v7 - 4); /*0x5ad2ef*/
        }
        while ( v7 < m_8 ); /*0x5ad2f3*/
        v3 = a2; /*0x5ad2f5*/
      }
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x5ad304*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v5;
        *((unsigned int *)this + 2) = v3;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v9 = *((unsigned int *)this + 2);
    if ( v9 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v9;
  return 1; /*0x5ad33d*/
}
} // namespace gamemd

// 0x5AD350
namespace gamemd {
int VectorClass_N::FindItemIndex(double * a2)
{
  int m_10; // esi
  int v3; // edx
  double *i; // ecx

    v2 = *((unsigned int *)this + 16);
  v3 = 0; /*0x5ad354*/
  if ( m_10 <= 0 ) /*0x5ad359*/
    return -1; /*0x5ad375*/
    for ( i = (double *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++v3 >= m_10 ) /*0x5ad373*/
      return -1; /*0x5ad373*/
  }
  return v3; /*0x5ad375*/
}
} // namespace gamemd

// 0x5AD390
namespace gamemd {
VectorClass_flat * VectorClass_ptr_MapRegionClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_MapRegionClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5ad3a8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5ad3c8*/
    RA2_OPDEL(Block); /*0x5ad3cb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x5AD3E0
namespace gamemd {
unsigned int * VectorClass_ptr_MapRegionClass::loc_5AD3E0(unsigned int * Block, char a2)
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_MapRegionClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    RA2_OPDEL(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    RA2_OPDEL(Block);
    return Block;
}
} // namespace gamemd

// 0x5AD5C0
namespace gamemd {
VectorClass_flat * VectorClass_N::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_double;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5ad5d8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5ad5f8*/
    RA2_OPDEL(Block); /*0x5ad5fb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x5AD610
namespace gamemd {
DynamicVector * VectorClass_N::Constructor_VectorClass_double_(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_double;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5ad628*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5ad648*/
    RA2_OPDEL(Block); /*0x5ad64b*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x5D05F0
namespace gamemd {
unsigned int * VectorClass_Point2D::Count(unsigned int * a2, int a3)
{
  int v3; // edx

    v3 = *((unsigned int *)this + 4);
  *a2 = *(unsigned int *)(v3 + 8 * a3); /*0x5d05ff*/
  a2[1] = *(unsigned int *)(v3 + 8 * a3 + 4); /*0x5d0606*/
  return a2; /*0x5d0601*/
}
} // namespace gamemd

// 0x5D0660
namespace gamemd {
int VectorClass_ptr_MSTextEntry::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x5D06C0
namespace gamemd {
int VectorClass_ptr_MapSelection::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x5D07E0
namespace gamemd {
int VectorClass_ptr_MSSfxEntry::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x5D07F0
namespace gamemd {
char VectorClass_Point2D::Get(int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  unsigned int *v5; // eax
  unsigned int *v6; // ecx
  int v7; // edx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x5d0800*/
  {
    v3 = 0; /*0x5d0802*/
    if ( m_8 <= 0 ) /*0x5d0806*/
      return 1; /*0x5d0836*/
    v4 = *(unsigned int *)(a2 + 4); /*0x5d0808*/
        v5 = (unsigned int *)*((unsigned int *)this + 4);
    v6 = (unsigned int *)(v4 + 4); /*0x5d080e*/
    v7 = v4 - (unsigned int)v5; /*0x5d0811*/
    while ( *v5 == *(unsigned int *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x5d0823*/
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
} // namespace gamemd

// 0x5D0850
namespace gamemd {
char VectorClass_Point2D::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // ebx
  int v5; // eax
  unsigned int *v6; // edi
  int m_8; // ecx
  int v9; // eax
  int v10; // edx

  if ( a2 ) /*0x5d085c*/
  {
    v4 = a3; /*0x5d0862*/
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5d086c*/
    {
      v6 = a3; /*0x5d0894*/
    }
    else
    {
      v5 = RA2_OPNEW(8 * a2); /*0x5d0876*/
      if ( v5 ) /*0x5d0880*/
        v6 = (unsigned int *)v5; /*0x5d0885*/
      else
        v6 = 0; /*0x5d088d*/
    }
        *((unsigned char *)this + 12) = 1;
    if ( v6 ) /*0x5d08a0*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v8 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x5d08b7*/
          m_8 = a2; /*0x5d08b9*/
        v9 = 0; /*0x5d08bb*/
        if ( m_8 > 0 ) /*0x5d08bf*/
        {
          do /*0x5d08d7*/
          {
                        v10 = *((unsigned int *)this + 1);
            ++v9; /*0x5d08c4*/
            v6[2 * v9 - 2] = *(unsigned int *)(v10 + 8 * v9 - 8); /*0x5d08cb*/
            v6[2 * v9 - 1] = *(unsigned int *)(v10 + 8 * v9 - 4); /*0x5d08d3*/
          }
          while ( v9 < m_8 ); /*0x5d08d7*/
          v4 = a3; /*0x5d08d9*/
        }
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x5d08e8*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v6;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = v4 == 0;
      return 1; /*0x5d090a*/
    }
    else
    {
      return 0; /*0x5d08a5*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x5d091a*/
  }
}
} // namespace gamemd

// 0x5D0920
namespace gamemd {
void VectorClass_Point2D::Set()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x5d0933*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5D0950
namespace gamemd {
int VectorClass_Point2D::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x5d095e*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x5d0967*/
  if ( m_8 <= 0 ) /*0x5d096b*/
    return -1; /*0x5d098c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x5d0971*/
  {
    if ( ++result >= m_8 ) /*0x5d098a*/
      return -1; /*0x5d098a*/
  }
  return result; /*0x5d095b*/
}
} // namespace gamemd

// 0x5D09A0
namespace gamemd {
unsigned int VectorClass_Point2D::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 3;
  else
    return 0; /*0x5d09a7*/
}
} // namespace gamemd

// 0x5D0AE0
namespace gamemd {
char VectorClass_ptr_MSTextEntry::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x5d0aed*/
  {
    v3 = 0; /*0x5d0aef*/
    if ( m_8 <= 0 ) /*0x5d0af3*/
      return 1; /*0x5d0b13*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x5d0afb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x5d0b04*/
    {
      ++v3; /*0x5d0b06*/
      ++v4; /*0x5d0b07*/
      if ( v3 >= m_8 ) /*0x5d0b0c*/
        return 1; /*0x5d0b0c*/
    }
  }
  return 0; /*0x5d0b0e*/
}
} // namespace gamemd

// 0x5D0B20
namespace gamemd {
char VectorClass_ptr_MSTextEntry::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5d0b2c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5d0b3c*/
      v4 = a3; /*0x5d0b52*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5d0b4e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x5d0b5a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x5d0b71*/
          m_8 = a2; /*0x5d0b73*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x5d0b7e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x5d0b96*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x5d0bb8*/
    }
    else
    {
      return 0; /*0x5d0b5f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x5d0bc8*/
  }
}
} // namespace gamemd

// 0x5D0BD0
namespace gamemd {
void VectorClass_ptr_MSTextEntry::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x5d0be3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5D0C00
namespace gamemd {
int VectorClass_ptr_MSTextEntry::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x5d0c08*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x5d0c11*/
  if ( m_8 <= 0 ) /*0x5d0c15*/
    return -1; /*0x5d0c2c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x5d0c1b*/
  {
    if ( ++result >= m_8 ) /*0x5d0c2a*/
      return -1; /*0x5d0c2a*/
  }
  return result; /*0x5d0c0a*/
}
} // namespace gamemd

// 0x5D0C40
namespace gamemd {
unsigned int VectorClass_ptr_MSTextEntry::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x5d0c47*/
}
} // namespace gamemd

// 0x5D0D40
namespace gamemd {
char VectorClass_ptr_MapSelection::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x5d0d4d*/
  {
    v3 = 0; /*0x5d0d4f*/
    if ( m_8 <= 0 ) /*0x5d0d53*/
      return 1; /*0x5d0d73*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x5d0d5b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x5d0d64*/
    {
      ++v3; /*0x5d0d66*/
      ++v4; /*0x5d0d67*/
      if ( v3 >= m_8 ) /*0x5d0d6c*/
        return 1; /*0x5d0d6c*/
    }
  }
  return 0; /*0x5d0d6e*/
}
} // namespace gamemd

// 0x5D0D80
namespace gamemd {
char VectorClass_ptr_MapSelection::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5d0d8c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5d0d9c*/
      v4 = a3; /*0x5d0db2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5d0dae*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x5d0dba*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x5d0dd1*/
          m_8 = a2; /*0x5d0dd3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x5d0dde*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x5d0df6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x5d0e18*/
    }
    else
    {
      return 0; /*0x5d0dbf*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x5d0e28*/
  }
}
} // namespace gamemd

// 0x5D0E30
namespace gamemd {
void VectorClass_ptr_MapSelection::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x5d0e43*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5D0E60
namespace gamemd {
int VectorClass_ptr_MapSelection::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x5d0e68*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x5d0e71*/
  if ( m_8 <= 0 ) /*0x5d0e75*/
    return -1; /*0x5d0e8c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x5d0e7b*/
  {
    if ( ++result >= m_8 ) /*0x5d0e8a*/
      return -1; /*0x5d0e8a*/
  }
  return result; /*0x5d0e6a*/
}
} // namespace gamemd

// 0x5D0EA0
namespace gamemd {
unsigned int VectorClass_ptr_MapSelection::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x5d0ea7*/
}
} // namespace gamemd

// 0x5D1460
namespace gamemd {
char VectorClass_ptr_MSSfxEntry::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x5d146d*/
  {
    v3 = 0; /*0x5d146f*/
    if ( m_8 <= 0 ) /*0x5d1473*/
      return 1; /*0x5d1493*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x5d147b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x5d1484*/
    {
      ++v3; /*0x5d1486*/
      ++v4; /*0x5d1487*/
      if ( v3 >= m_8 ) /*0x5d148c*/
        return 1; /*0x5d148c*/
    }
  }
  return 0; /*0x5d148e*/
}
} // namespace gamemd

// 0x5D14A0
namespace gamemd {
char VectorClass_ptr_MSSfxEntry::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5d14ac*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5d14bc*/
      v4 = a3; /*0x5d14d2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5d14ce*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x5d14da*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x5d14f1*/
          m_8 = a2; /*0x5d14f3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x5d14fe*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x5d1516*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x5d1538*/
    }
    else
    {
      return 0; /*0x5d14df*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x5d1548*/
  }
}
} // namespace gamemd

// 0x5D1550
namespace gamemd {
void VectorClass_ptr_MSSfxEntry::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x5d1563*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5D1580
namespace gamemd {
int VectorClass_ptr_MSSfxEntry::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x5d1588*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x5d1591*/
  if ( m_8 <= 0 ) /*0x5d1595*/
    return -1; /*0x5d15ac*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x5d159b*/
  {
    if ( ++result >= m_8 ) /*0x5d15aa*/
      return -1; /*0x5d15aa*/
  }
  return result; /*0x5d158a*/
}
} // namespace gamemd

// 0x5D15C0
namespace gamemd {
unsigned int VectorClass_ptr_MSSfxEntry::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x5d15c7*/
}
} // namespace gamemd

// 0x5D16C0
namespace gamemd {
VectorClass_flat * VectorClass_Point2D::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_Point2D;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5d16d8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5d16f8*/
    RA2_OPDEL(Block); /*0x5d16fb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x5D1760
namespace gamemd {
VectorClass_flat * VectorClass_ptr_MSTextEntry::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_MSTextEntry;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5d1778*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5d1798*/
    RA2_OPDEL(Block); /*0x5d179b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x5D1800
namespace gamemd {
VectorClass_flat * VectorClass_ptr_MapSelection::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_MapSelection;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5d1818*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5d1838*/
    RA2_OPDEL(Block); /*0x5d183b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x5D19E0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_MSSfxEntry::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_MSSfxEntry;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5d19f8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5d1a18*/
    RA2_OPDEL(Block); /*0x5d1a1b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x5D2720
namespace gamemd {
void VectorClass_ptr_MSSfx::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x5d2726*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x5d2736*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5D2750
namespace gamemd {
unsigned int VectorClass_ptr_MSSfx::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x5d2757*/
}
} // namespace gamemd

// 0x5D2780
namespace gamemd {
void VectorClass_Point2D::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x5d2786*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x5d2796*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5D27B0
namespace gamemd {
unsigned int VectorClass_Point2D::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x5d27b7*/
}
} // namespace gamemd

// 0x5D27D0
namespace gamemd {
int VectorClass_ptr_MSSfx::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x5D27E0
namespace gamemd {
char VectorClass_ptr_MSSfx::FindItemIndex(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x5d27ed*/
  {
    v3 = 0; /*0x5d27ef*/
    if ( m_8 <= 0 ) /*0x5d27f3*/
      return 1; /*0x5d2813*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x5d27fb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x5d2804*/
    {
      ++v3; /*0x5d2806*/
      ++v4; /*0x5d2807*/
      if ( v3 >= m_8 ) /*0x5d280c*/
        return 1; /*0x5d280c*/
    }
  }
  return 0; /*0x5d280e*/
}
} // namespace gamemd

// 0x5D2820
namespace gamemd {
char VectorClass_ptr_MSSfx::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5d282c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5d283c*/
      v4 = a3; /*0x5d2852*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5d284e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x5d285a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x5d2871*/
          m_8 = a2; /*0x5d2873*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x5d287e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x5d2896*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x5d28b8*/
    }
    else
    {
      return 0; /*0x5d285f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x5d28c8*/
  }
}
} // namespace gamemd

// 0x5D28D0
namespace gamemd {
void VectorClass_ptr_MSSfx::Destroy_0()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x5d28e3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5D2960
namespace gamemd {
char VectorClass_ptr_MSSfx::SetCapacity_0(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d296c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5d2978*/
      v4 = a3; /*0x5d298e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5d298a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x5d2996*/
      return 0; /*0x5d2a0a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x5d29a4*/
        m_8 = a2; /*0x5d29a6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x5d29b1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x5d29c9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x5d29fe*/
}
} // namespace gamemd

// 0x5D2A10
namespace gamemd {
int VectorClass_ptr_MSSfx::FindItemIndex_0(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x5d2a13*/
  if ( m_10 <= 0 ) /*0x5d2a18*/
    return -1; /*0x5d2a2f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x5d2a2d*/
      return -1; /*0x5d2a2d*/
  }
  return result; /*0x5d2a32*/
}
} // namespace gamemd

// 0x5D2A40
namespace gamemd {
char VectorClass_ptr_MSSfx::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x5d2a4d*/
  {
    v3 = 0; /*0x5d2a4f*/
    if ( m_8 <= 0 ) /*0x5d2a53*/
      return 1; /*0x5d2a73*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x5d2a5b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x5d2a64*/
    {
      ++v3; /*0x5d2a66*/
      ++v4; /*0x5d2a67*/
      if ( v3 >= m_8 ) /*0x5d2a6c*/
        return 1; /*0x5d2a6c*/
    }
  }
  return 0; /*0x5d2a6e*/
}
} // namespace gamemd

// 0x5D2A80
namespace gamemd {
char VectorClass_ptr_MSSfx::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5d2a8c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5d2a9c*/
      v4 = a3; /*0x5d2ab2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5d2aae*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x5d2aba*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x5d2ad1*/
          m_8 = a2; /*0x5d2ad3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x5d2ade*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x5d2af6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x5d2b18*/
    }
    else
    {
      return 0; /*0x5d2abf*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x5d2b28*/
  }
}
} // namespace gamemd

// 0x5D2B30
namespace gamemd {
void VectorClass_ptr_MSSfx::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x5d2b43*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5D2B60
namespace gamemd {
int VectorClass_ptr_MSSfx::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x5d2b68*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x5d2b71*/
  if ( m_8 <= 0 ) /*0x5d2b75*/
    return -1; /*0x5d2b8c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x5d2b7b*/
  {
    if ( ++result >= m_8 ) /*0x5d2b8a*/
      return -1; /*0x5d2b8a*/
  }
  return result; /*0x5d2b6a*/
}
} // namespace gamemd

// 0x5D2BA0
namespace gamemd {
unsigned int VectorClass_ptr_MSSfx::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x5d2ba7*/
}
} // namespace gamemd

// 0x5D2BC0
namespace gamemd {
char VectorClass_Point2D::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d2bcc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5d2bd8*/
      v4 = a3; /*0x5d2bee*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5d2bea*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x5d2bf6*/
      return 0; /*0x5d2c6a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x5d2c04*/
        m_8 = a2; /*0x5d2c06*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x5d2c11*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x5d2c29*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x5d2c5e*/
}
} // namespace gamemd

// 0x5D2C70
namespace gamemd {
int VectorClass_Point2D::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x5d2c73*/
  if ( m_10 <= 0 ) /*0x5d2c78*/
    return -1; /*0x5d2c8f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x5d2c8d*/
      return -1; /*0x5d2c8d*/
  }
  return result; /*0x5d2c92*/
}
} // namespace gamemd

// 0x5D2CF0
namespace gamemd {
DynamicVector * VectorClass_ptr_MSSfx::Constructor_VectorClass_MSAnim___(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_MSAnim;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5d2d08*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5d2d28*/
    RA2_OPDEL(Block); /*0x5d2d2b*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x5D2D40
namespace gamemd {
VectorClass_flat * VectorClass_ptr_MSSfx::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_MSSfx;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5d2d58*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5d2d78*/
    RA2_OPDEL(Block); /*0x5d2d7b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x5D2D90
namespace gamemd {
DynamicVector * VectorClass_Point2D::Constructor_VectorClass_MSSfx___(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_MSSfx;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5d2da8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5d2dc8*/
    RA2_OPDEL(Block); /*0x5d2dcb*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x5D5130
namespace gamemd {
unsigned int * VectorClass_UAcceleratorTracker::Clear(unsigned int * a2, int a3)
{
  int v3; // edx

    v3 = *((unsigned int *)this + 4);
  *a2 = *(unsigned int *)(v3 + 8 * a3); /*0x5d513f*/
  a2[1] = *(unsigned int *)(v3 + 8 * a3 + 4); /*0x5d5146*/
  return a2; /*0x5d5141*/
}
} // namespace gamemd

// 0x5D53B0
namespace gamemd {
char VectorClass_UAcceleratorTracker::AddRef(int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  unsigned int *v5; // eax
  unsigned int *v6; // ecx
  int v7; // edx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x5d53c0*/
  {
    v3 = 0; /*0x5d53c2*/
    if ( m_8 <= 0 ) /*0x5d53c6*/
      return 1; /*0x5d53f6*/
    v4 = *(unsigned int *)(a2 + 4); /*0x5d53c8*/
        v5 = (unsigned int *)*((unsigned int *)this + 4);
    v6 = (unsigned int *)(v4 + 4); /*0x5d53ce*/
    v7 = v4 - (unsigned int)v5; /*0x5d53d1*/
    while ( *v5 == *(unsigned int *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x5d53e3*/
    {
      ++v3; /*0x5d53e5*/
      v6 += 2; /*0x5d53e6*/
      v5 += 2; /*0x5d53e9*/
      if ( v3 >= m_8 ) /*0x5d53ee*/
        return 1; /*0x5d53ee*/
    }
  }
  return 0; /*0x5d53f0*/
}
} // namespace gamemd

// 0x5D5410
namespace gamemd {
char VectorClass_UAcceleratorTracker::Release(int a2, unsigned int * a3)
{
  int v3; // ebp
  unsigned int *v5; // esi
  int v6; // eax
  unsigned int *v7; // ecx
  int v8; // edx
  unsigned int *v9; // eax
  int v10; // ecx
  int m_8; // edx
  int v13; // ecx
  int v14; // eax
  unsigned int *v15; // ebx

  v3 = a2; /*0x5d5412*/
  if ( a2 ) /*0x5d541e*/
  {
    v5 = a3; /*0x5d5424*/
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5d542d*/
    {
      v9 = a3; /*0x5d5463*/
      if ( a2 - 1 >= 0 ) /*0x5d5467*/
      {
        v10 = a2; /*0x5d5469*/
        do /*0x5d5473*/
        {
          *v9 = 0; /*0x5d546a*/
          v9[1] = 0; /*0x5d546c*/
          v9 += 2; /*0x5d546f*/
          --v10; /*0x5d5472*/
        }
        while ( v10 ); /*0x5d5473*/
      }
    }
    else
    {
      v6 = RA2_OPNEW(8 * a2); /*0x5d5437*/
      if ( v6 ) /*0x5d5441*/
      {
        v7 = (unsigned int *)v6; /*0x5d5446*/
        if ( a2 - 1 >= 0 ) /*0x5d544a*/
        {
          v8 = a2; /*0x5d544c*/
          do /*0x5d5456*/
          {
            *v7 = 0; /*0x5d544d*/
            v7[1] = 0; /*0x5d544f*/
            v7 += 2; /*0x5d5452*/
            --v8; /*0x5d5455*/
          }
          while ( v8 ); /*0x5d5456*/
        }
        v5 = (unsigned int *)v6; /*0x5d5458*/
      }
      else
      {
        v5 = 0; /*0x5d545c*/
      }
    }
        *((unsigned char *)this + 12) = 1;
    if ( v5 ) /*0x5d547b*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v12 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x5d5490*/
          m_8 = a2; /*0x5d5492*/
        v13 = 0; /*0x5d5494*/
        if ( m_8 > 0 ) /*0x5d5498*/
        {
          do /*0x5d54b7*/
          {
            v14 = 2 * v13; /*0x5d549d*/
                        v15 = (unsigned int *)(*((unsigned int *)this + 1) + 8 * v13++);
            v5[v14] = *v15; /*0x5d54ad*/
            v5[v14 + 1] = v15[1]; /*0x5d54b3*/
          }
          while ( v13 < m_8 ); /*0x5d54b7*/
          v3 = a2; /*0x5d54b9*/
        }
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x5d54c8*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v5;
            *((unsigned int *)this + 2) = v3;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x5d54ea*/
    }
    else
    {
      return 0; /*0x5d5480*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x5d54fa*/
  }
}
} // namespace gamemd

// 0x5D5500
namespace gamemd {
void VectorClass_UAcceleratorTracker::ddtor()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x5d5513*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5D5530
namespace gamemd {
int VectorClass_UAcceleratorTracker::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x5d553e*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x5d5547*/
  if ( m_8 <= 0 ) /*0x5d554b*/
    return -1; /*0x5d556c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x5d5551*/
  {
    if ( ++result >= m_8 ) /*0x5d556a*/
      return -1; /*0x5d556a*/
  }
  return result; /*0x5d553b*/
}
} // namespace gamemd

// 0x5D5580
namespace gamemd {
unsigned int VectorClass_UAcceleratorTracker::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 3;
  else
    return 0; /*0x5d5587*/
}
} // namespace gamemd

// 0x5D5780
namespace gamemd {
VectorClass_flat * VectorClass_UAcceleratorTracker::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_AcceleratorTracker;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5d5798*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5d57b8*/
    RA2_OPDEL(Block); /*0x5d57bb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x5D8100
namespace gamemd {
int VectorClass_ptr_MultiplayerTeam::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x5D82F0
namespace gamemd {
char VectorClass_ptr_MultiplayerTeam::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x5d82fd*/
  {
    v3 = 0; /*0x5d82ff*/
    if ( m_8 <= 0 ) /*0x5d8303*/
      return 1; /*0x5d8323*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x5d830b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x5d8314*/
    {
      ++v3; /*0x5d8316*/
      ++v4; /*0x5d8317*/
      if ( v3 >= m_8 ) /*0x5d831c*/
        return 1; /*0x5d831c*/
    }
  }
  return 0; /*0x5d831e*/
}
} // namespace gamemd

// 0x5D8330
namespace gamemd {
char VectorClass_ptr_MultiplayerTeam::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5d833c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5d834c*/
      v4 = a3; /*0x5d8362*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5d835e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x5d836a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x5d8381*/
          m_8 = a2; /*0x5d8383*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x5d838e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x5d83a6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x5d83c8*/
    }
    else
    {
      return 0; /*0x5d836f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x5d83d8*/
  }
}
} // namespace gamemd

// 0x5D83E0
namespace gamemd {
void VectorClass_ptr_MultiplayerTeam::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x5d83f3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5D8410
namespace gamemd {
int VectorClass_ptr_MultiplayerTeam::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x5d8418*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x5d8421*/
  if ( m_8 <= 0 ) /*0x5d8425*/
    return -1; /*0x5d843c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x5d842b*/
  {
    if ( ++result >= m_8 ) /*0x5d843a*/
      return -1; /*0x5d843a*/
  }
  return result; /*0x5d841a*/
}
} // namespace gamemd

// 0x5D8450
namespace gamemd {
unsigned int VectorClass_ptr_MultiplayerTeam::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x5d8457*/
}
} // namespace gamemd

// 0x5D8640
void VectorClass_flat::ddtor()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(this->u32_4); /*0x5d8653*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
// 0x5D8810
namespace gamemd {
VectorClass_flat *  VectorClass_ptr_MultiplayerTeam::QueryInterface(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_MultiplayerTeam;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5d8828*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5d8848*/
    RA2_OPDEL(this); /*0x5d884b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x5EEBB0
namespace gamemd {
void VectorClass_cptr_MultiMission::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x5eebb6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x5eebc6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5EEBE0
namespace gamemd {
unsigned int VectorClass_cptr_MultiMission::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x5eebe7*/
}
} // namespace gamemd

// 0x5EEC00
namespace gamemd {
int VectorClass_cptr_MultiMission::Capacity(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x5EEC10
namespace gamemd {
char VectorClass_cptr_MultiMission::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x5eec1d*/
  {
    v3 = 0; /*0x5eec1f*/
    if ( m_8 <= 0 ) /*0x5eec23*/
      return 1; /*0x5eec43*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x5eec2b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x5eec34*/
    {
      ++v3; /*0x5eec36*/
      ++v4; /*0x5eec37*/
      if ( v3 >= m_8 ) /*0x5eec3c*/
        return 1; /*0x5eec3c*/
    }
  }
  return 0; /*0x5eec3e*/
}
} // namespace gamemd

// 0x5EEC50
namespace gamemd {
char VectorClass_cptr_MultiMission::SetAt(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5eec5c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5eec6c*/
      v4 = a3; /*0x5eec82*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5eec7e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x5eec8a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x5eeca1*/
          m_8 = a2; /*0x5eeca3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x5eecae*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x5eecc6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x5eece8*/
    }
    else
    {
      return 0; /*0x5eec8f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x5eecf8*/
  }
}
} // namespace gamemd

// 0x5EED00
void VectorClass_flat::Cleanup3()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(this->Items); /*0x5eed13*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
// 0x5EED30
namespace gamemd {
int  VectorClass_cptr_MultiMission::GetSize()
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x5eed38*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x5eed41*/
  if ( m_8 <= 0 ) /*0x5eed45*/
    return -1; /*0x5eed5c*/
  for ( i = *(unsigned int **)&this->Items; *i != *this; ++i ) /*0x5eed4b*/
  {
    if ( ++result >= m_8 ) /*0x5eed5a*/
      return -1; /*0x5eed5a*/
  }
  return result; /*0x5eed3a*/
}
} // namespace gamemd

// 0x5EED70
namespace gamemd {
unsigned int VectorClass_cptr_MultiMission::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x5eed77*/
}
} // namespace gamemd

// 0x5EED90
namespace gamemd {
char VectorClass_cptr_MultiMission::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5eed9c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5eeda8*/
      v4 = a3; /*0x5eedbe*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5eedba*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x5eedc6*/
      return 0; /*0x5eee3a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x5eedd4*/
        m_8 = a2; /*0x5eedd6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x5eede1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x5eedf9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x5eee2e*/
}
} // namespace gamemd

// 0x5EEE90
namespace gamemd {
int VectorClass_cptr_MultiMission::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x5eee93*/
  if ( m_10 <= 0 ) /*0x5eee98*/
    return -1; /*0x5eeeaf*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x5eeead*/
      return -1; /*0x5eeead*/
  }
  return result; /*0x5eeeb2*/
}
} // namespace gamemd

// 0x5EEEC0
namespace gamemd {
VectorClass_flat * VectorClass_cptr_MultiMission::GetAt(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_MultiMission_const;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5eeed8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5eeef8*/
    RA2_OPDEL(Block); /*0x5eeefb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x5EEF10
namespace gamemd {
DynamicVector * VectorClass_cptr_MultiMission::Constructor(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_MultiMission_const;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5eef28*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5eef48*/
    RA2_OPDEL(Block); /*0x5eef4b*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x5EF190
namespace gamemd {
int VectorClass_cptr_MultiMission::j_vt09(unsigned char * a1, signed int a3, int a4, int a5, int a6, int a7)
{
  unsigned short *v8; // eax
  signed int v9; // edi
  unsigned int *v10; // eax
  unsigned int v11; // esi
  int v12; // eax

    if ( *(unsigned int *)&this->__pad_0[76] == -1 )
    return 0; /*0x5ef199*/
    v8 = (unsigned short *)this->field_50;
  *v8 = -9539; /*0x5ef1af*/
  v8[1] = a3; /*0x5ef1b4*/
  v8[2] = -8529; /*0x5ef1b8*/
    qmemcpy((void *)(this->field_50 + 6), a1, a3);
  v9 = 0; /*0x5ef1dc*/
    v10 = (unsigned int *)(this->field_50 + a3 + 6);
  v11 = 0; /*0x5ef1e0*/
  if ( a3 > 0 ) /*0x5ef1ec*/
  {
    do /*0x5ef200*/
    {
      v12 = a1[v9++] + (v11 >> 31); /*0x5ef1f8*/
      v11 = v12 + 2 * v11; /*0x5ef1fd*/
    }
    while ( v9 < a3 ); /*0x5ef200*/
        v10 = (unsigned int *)(this->field_50 + a3 + 6);
  }
  *v10 = v11; /*0x5ef20a*/
    *(unsigned char *)(a3 + 10 + this->field_50) = 13;
    WinModemClass::WriteSerial((int)g_ClipboardBuffer, (LPCVOID)this->field_50, (WinModemClass *)(a3 + 11));
  return 1; /*0x5ef19b*/
}
} // namespace gamemd

// 0x5EF290
namespace gamemd {
unsigned int * VectorClass_cptr_MultiMission::j_vt00(char a2)
{
  void *v3; // eax

    v3 = (IPXConnClass *)this->field_50;
    *(unsigned int *)this->__pad_0 = &vt_NullModemConnClass;
  RA2_OPDEL(v3); /*0x5ef29d*/
  ConnectionClass::dtor(); /*0x5ef2a7*/
  if ( (a2 & 1) != 0 ) /*0x5ef2b1*/
    RA2_OPDEL(); /*0x5ef2b4*/
  return this; /*0x5ef2be*/
}
} // namespace gamemd

// 0x5F9B00
namespace gamemd {
void VectorClass_ptr_ObjectTypeClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x5f9b06*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x5f9b16*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5F9B30
namespace gamemd {
unsigned int VectorClass_ptr_ObjectTypeClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x5f9b37*/
}
} // namespace gamemd

// 0x5F9B50
namespace gamemd {
int VectorClass_ptr_ObjectTypeClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x5F9B80
namespace gamemd {
char VectorClass_ptr_ObjectTypeClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x5f9b8d*/
  {
    v3 = 0; /*0x5f9b8f*/
    if ( m_8 <= 0 ) /*0x5f9b93*/
      return 1; /*0x5f9bb3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x5f9b9b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x5f9ba4*/
    {
      ++v3; /*0x5f9ba6*/
      ++v4; /*0x5f9ba7*/
      if ( v3 >= m_8 ) /*0x5f9bac*/
        return 1; /*0x5f9bac*/
    }
  }
  return 0; /*0x5f9bae*/
}
} // namespace gamemd

// 0x5F9BC0
namespace gamemd {
char VectorClass_ptr_ObjectTypeClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5f9bcc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5f9bdc*/
      v4 = a3; /*0x5f9bf2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5f9bee*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x5f9bfa*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x5f9c11*/
          m_8 = a2; /*0x5f9c13*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x5f9c1e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x5f9c36*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x5f9c58*/
    }
    else
    {
      return 0; /*0x5f9bff*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x5f9c68*/
  }
}
} // namespace gamemd

// 0x5F9C70
namespace gamemd {
void VectorClass_ptr_ObjectTypeClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x5f9c83*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5F9CA0
namespace gamemd {
int VectorClass_ptr_ObjectTypeClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x5f9ca8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x5f9cb1*/
  if ( m_8 <= 0 ) /*0x5f9cb5*/
    return -1; /*0x5f9ccc*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x5f9cbb*/
  {
    if ( ++result >= m_8 ) /*0x5f9cca*/
      return -1; /*0x5f9cca*/
  }
  return result; /*0x5f9caa*/
}
} // namespace gamemd

// 0x5F9CE0
namespace gamemd {
unsigned int VectorClass_ptr_ObjectTypeClass::LoadTypeData(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x5f9ce7*/
}
} // namespace gamemd

// 0x5F9D00
namespace gamemd {
char VectorClass_ptr_ObjectTypeClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5f9d0c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5f9d18*/
      v4 = a3; /*0x5f9d2e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5f9d2a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x5f9d36*/
      return 0; /*0x5f9daa*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x5f9d44*/
        m_8 = a2; /*0x5f9d46*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x5f9d51*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x5f9d69*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x5f9d9e*/
}
} // namespace gamemd

// 0x5F9DB0
namespace gamemd {
int VectorClass_ptr_ObjectTypeClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x5f9db3*/
  if ( m_10 <= 0 ) /*0x5f9db8*/
    return -1; /*0x5f9dcf*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x5f9dcd*/
      return -1; /*0x5f9dcd*/
  }
  return result; /*0x5f9dd2*/
}
} // namespace gamemd

// 0x5F9DE0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_ObjectTypeClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_ObjectTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5f9df8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5f9e18*/
    RA2_OPDEL(Block); /*0x5f9e1b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x5F9E30
namespace gamemd {
DynamicVector * VectorClass_ptr_ObjectTypeClass::Constructor_VectorClass_ObjectTypeClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_ObjectTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5f9e48*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5f9e68*/
    RA2_OPDEL(); /*0x5f9e6b*/
  return this; /*0x5f9e75*/
}
} // namespace gamemd

// 0x5FFFC0
void VectorClass_flat::Destructor()
{
  void *v2; // eax

    v2 = *(void **)((char *)this + 16);
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x5fffd6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
// 0x5FFFF0
namespace gamemd {
unsigned int VectorClass_ptr_SpotLightClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x5ffff7*/
}
} // namespace gamemd

// 0x600010
namespace gamemd {
int VectorClass_ptr_SpotLightClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x600020
namespace gamemd {
char VectorClass_ptr_SpotLightClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x60002d*/
  {
    v3 = 0; /*0x60002f*/
    if ( m_8 <= 0 ) /*0x600033*/
      return 1; /*0x600053*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x60003b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x600044*/
    {
      ++v3; /*0x600046*/
      ++v4; /*0x600047*/
      if ( v3 >= m_8 ) /*0x60004c*/
        return 1; /*0x60004c*/
    }
  }
  return 0; /*0x60004e*/
}
} // namespace gamemd

// 0x600060
namespace gamemd {
char VectorClass_ptr_SpotLightClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x60006c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x60007c*/
      v4 = a3; /*0x600092*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x60008e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x60009a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x6000b1*/
          m_8 = a2; /*0x6000b3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x6000be*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x6000d6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x6000f8*/
    }
    else
    {
      return 0; /*0x60009f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x600108*/
  }
}
} // namespace gamemd

// 0x600110
namespace gamemd {
void VectorClass_ptr_SpotLightClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x600123*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x600140
namespace gamemd {
int VectorClass_ptr_SpotLightClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x600148*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x600151*/
  if ( m_8 <= 0 ) /*0x600155*/
    return -1; /*0x60016c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x60015b*/
  {
    if ( ++result >= m_8 ) /*0x60016a*/
      return -1; /*0x60016a*/
  }
  return result; /*0x60014a*/
}
} // namespace gamemd

// 0x600180
namespace gamemd {
unsigned int VectorClass_ptr_SpotLightClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x600187*/
}
} // namespace gamemd

// 0x6001A0
namespace gamemd {
char VectorClass_ptr_SpotLightClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6001ac*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x6001b8*/
      v4 = a3; /*0x6001ce*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x6001ca*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x6001d6*/
      return 0; /*0x60024a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < v5 ) /*0x6001e4*/
        v5 = a2; /*0x6001e6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x6001f1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x600209*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x60023e*/
}
} // namespace gamemd

// 0x600250
namespace gamemd {
int VectorClass_ptr_SpotLightClass::FindItemIndex(unsigned int * a2)
{
  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x600253*/
  if ( v2 <= 0 ) /*0x600258*/
    return -1; /*0x60026f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= v2 ) /*0x60026d*/
      return -1; /*0x60026d*/
  }
  return result; /*0x600272*/
}
} // namespace gamemd

// 0x600280
namespace gamemd {
VectorClass_flat * VectorClass_ptr_SpotLightClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_SpotLightClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x600298*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x6002b8*/
    RA2_OPDEL(Block); /*0x6002bb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x6002D0
namespace gamemd {
DynamicVector * VectorClass_ptr_SpotLightClass::Constructor_VectorClass_SpotLightClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_SpotLightClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x6002e8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x600308*/
    RA2_OPDEL(); /*0x60030b*/
  return this; /*0x600315*/
}
} // namespace gamemd

// 0x627D70
namespace gamemd {
int VectorClass_ptr_ColorScheme::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x627E10
namespace gamemd {
char VectorClass_ptr_ColorScheme::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x627e1d*/
  {
    v3 = 0; /*0x627e1f*/
    if ( m_8 <= 0 ) /*0x627e23*/
      return 1; /*0x627e43*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x627e2b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x627e34*/
    {
      ++v3; /*0x627e36*/
      ++v4; /*0x627e37*/
      if ( v3 >= m_8 ) /*0x627e3c*/
        return 1; /*0x627e3c*/
    }
  }
  return 0; /*0x627e3e*/
}
} // namespace gamemd

// 0x627E50
namespace gamemd {
char VectorClass_ptr_ColorScheme::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x627e5c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x627e6c*/
      v4 = a3; /*0x627e82*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x627e7e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x627e8a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x627ea1*/
          m_8 = a2; /*0x627ea3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x627eae*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x627ec6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x627ee8*/
    }
    else
    {
      return 0; /*0x627e8f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x627ef8*/
  }
}
} // namespace gamemd

// 0x627F00
namespace gamemd {
void VectorClass_ptr_ColorScheme::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x627f13*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x627F30
namespace gamemd {
int VectorClass_ptr_ColorScheme::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x627f38*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x627f41*/
  if ( m_8 <= 0 ) /*0x627f45*/
    return -1; /*0x627f5c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x627f4b*/
  {
    if ( ++result >= m_8 ) /*0x627f5a*/
      return -1; /*0x627f5a*/
  }
  return result; /*0x627f3a*/
}
} // namespace gamemd

// 0x627F70
namespace gamemd {
unsigned int VectorClass_ptr_ColorScheme::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x627f77*/
}
} // namespace gamemd

// 0x6282E0
namespace gamemd {
char VectorClass_ptr_ColorScheme::SetCapacity(int a2, char * a3)
{
  int v3; // ebp
  char *v5; // edi
  int v6; // eax
  unsigned char *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v13; // eax
  int v14; // edx
  char *v15; // ebx

  v3 = a2; /*0x6282e2*/
  if ( a2 ) /*0x6282ee*/
  {
    v5 = a3; /*0x6282f4*/
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x6282fd*/
    {
      if ( a2 - 1 >= 0 ) /*0x628336*/
      {
        v9 = a3 + 2; /*0x628338*/
        v10 = a2; /*0x62833b*/
        do /*0x628348*/
        {
          *(v9 - 2) = 0; /*0x62833c*/
          *(v9 - 1) = 0; /*0x62833f*/
          *v9 = 0; /*0x628342*/
          v9 += 3; /*0x628344*/
          --v10; /*0x628347*/
        }
        while ( v10 ); /*0x628348*/
      }
    }
    else
    {
      v6 = RA2_OPNEW(3 * a2); /*0x628304*/
      if ( v6 ) /*0x62830e*/
      {
        if ( a2 - 1 >= 0 ) /*0x628315*/
        {
          v7 = (unsigned char *)(v6 + 2); /*0x628317*/
          v8 = a2; /*0x62831a*/
          do /*0x628327*/
          {
            *(v7 - 2) = 0; /*0x62831b*/
            *(v7 - 1) = 0; /*0x62831e*/
            *v7 = 0; /*0x628321*/
            v7 += 3; /*0x628323*/
            --v8; /*0x628326*/
          }
          while ( v8 ); /*0x628327*/
        }
        v5 = (char *)v6; /*0x628329*/
      }
      else
      {
        v5 = 0; /*0x62832d*/
      }
    }
        *((unsigned char *)this + 12) = 1;
    if ( v5 ) /*0x628350*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v12 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x628365*/
          m_8 = a2; /*0x628367*/
        if ( m_8 > 0 ) /*0x62836b*/
        {
          v13 = 0; /*0x62836d*/
          do /*0x628389*/
          {
                        v14 = *((unsigned int *)this + 1) + v13;
            v15 = &v5[v13]; /*0x628376*/
            v13 += 3; /*0x628379*/
            --m_8; /*0x62837c*/
            *(unsigned short *)v15 = *(unsigned short *)v14; /*0x628380*/
            v15[2] = *(unsigned char *)(v14 + 2); /*0x628386*/
          }
          while ( m_8 ); /*0x628389*/
          v3 = a2; /*0x62838b*/
        }
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x62839a*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v5;
            *((unsigned int *)this + 2) = v3;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x6283bc*/
    }
    else
    {
      return 0; /*0x628355*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x6283cc*/
  }
}
} // namespace gamemd

// 0x6283E0
namespace gamemd {
void VectorClass_ptr_ColorScheme::Destroy()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x6283f3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x628410
namespace gamemd {
int VectorClass_ptr_ColorScheme::ScalarDeletingDestructor(int a2)
{
    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x628420*/
    if ( *((int *)this + 32) > 0 )
        VtableStub::Method_5175D0(*((unsigned int *)this + 16), a2);
  return -1; /*0x62841d*/
}
} // namespace gamemd

// 0x628470
namespace gamemd {
unsigned int VectorClass_ptr_ColorScheme::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (a2 - *((unsigned int *)this + 16)) / 3u;
  else
    return 0; /*0x628477*/
}
} // namespace gamemd

// 0x6285F0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_ColorScheme::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_ColorScheme;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x628608*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x628628*/
    RA2_OPDEL(Block); /*0x62862b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x628760
namespace gamemd {
VectorClass_flat * VectorClass_ptr_ColorScheme::Constructor_VectorClass_HSVClass_(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_HSVClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x628778*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x628798*/
    RA2_OPDEL(Block); /*0x62879b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x628A40
namespace gamemd {
void VectorClass_ptr_ColorScheme::Destroy_0()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x628a53*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x628A70
namespace gamemd {
int VectorClass_ptr_ColorScheme::SetCapacity_1(int a2)
{
    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x628a80*/
    if ( *((int *)this + 32) > 0 )
        Stub::InfiniteLoop(*((unsigned int *)this + 16), a2);
  return -1; /*0x628a7d*/
}
} // namespace gamemd

// 0x628AD0
namespace gamemd {
unsigned int VectorClass_ptr_ColorScheme::GetItemIndex_0(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (a2 - *((unsigned int *)this + 16)) / 0x104u;
  else
    return 0; /*0x628ad7*/
}
} // namespace gamemd

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
    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = a2;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
    *this = &vt_VectorClass_HSVClass;
  if ( !a2 ) /*0x628e10*/
        return this;
  if ( !a3 ) /*0x628e18*/
  {
    v8 = RA2_OPNEW(3 * a2); /*0x628e42*/
    if ( v8 ) /*0x628e4c*/
    {
      if ( a2 - 1 >= 0 ) /*0x628e53*/
      {
        v9 = (unsigned char *)(v8 + 2); /*0x628e55*/
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
        *((unsigned int *)this + 4) = v4;
        *((unsigned char *)this + 13) = 1;
        *((unsigned char *)this + 13) = 1;
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
    *((unsigned int *)this + 4) = a3;
    return this;
}
// 0x628E80
namespace gamemd {
VectorClass_flat *  VectorClass_ptr_ColorScheme::Constructor(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_HashObject_HashString_SchemeNode;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x628e98*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x628eb8*/
    RA2_OPDEL(this); /*0x628ebb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x62B070
namespace gamemd {
void VectorClass_ptr_ParasiteClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x62b076*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x62b086*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x62B0A0
namespace gamemd {
unsigned int VectorClass_ptr_ParasiteClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x62b0a7*/
}
} // namespace gamemd

// 0x62B0C0
namespace gamemd {
int VectorClass_ptr_ParasiteClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x62B0D0
namespace gamemd {
char VectorClass_ptr_ParasiteClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x62b0dd*/
  {
    v3 = 0; /*0x62b0df*/
    if ( m_8 <= 0 ) /*0x62b0e3*/
      return 1; /*0x62b103*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x62b0eb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x62b0f4*/
    {
      ++v3; /*0x62b0f6*/
      ++v4; /*0x62b0f7*/
      if ( v3 >= m_8 ) /*0x62b0fc*/
        return 1; /*0x62b0fc*/
    }
  }
  return 0; /*0x62b0fe*/
}
} // namespace gamemd

// 0x62B110
namespace gamemd {
char VectorClass_ptr_ParasiteClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x62b11c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x62b12c*/
      v4 = a3; /*0x62b142*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x62b13e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x62b14a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x62b161*/
          m_8 = a2; /*0x62b163*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x62b16e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x62b186*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x62b1a8*/
    }
    else
    {
      return 0; /*0x62b14f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x62b1b8*/
  }
}
} // namespace gamemd

// 0x62B1C0
namespace gamemd {
void VectorClass_ptr_ParasiteClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x62b1d3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x62B1F0
namespace gamemd {
int VectorClass_ptr_ParasiteClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x62b1f8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x62b201*/
  if ( m_8 <= 0 ) /*0x62b205*/
    return -1; /*0x62b21c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x62b20b*/
  {
    if ( ++result >= m_8 ) /*0x62b21a*/
      return -1; /*0x62b21a*/
  }
  return result; /*0x62b1fa*/
}
} // namespace gamemd

// 0x62B230
namespace gamemd {
unsigned int VectorClass_ptr_ParasiteClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x62b237*/
}
} // namespace gamemd

// 0x62B250
namespace gamemd {
char VectorClass_ptr_ParasiteClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x62b25c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x62b268*/
      v4 = a3; /*0x62b27e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x62b27a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x62b286*/
      return 0; /*0x62b2fa*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x62b294*/
        m_8 = a2; /*0x62b296*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x62b2a1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x62b2b9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x62b2ee*/
}
} // namespace gamemd

// 0x62B300
namespace gamemd {
int VectorClass_ptr_ParasiteClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x62b303*/
  if ( m_10 <= 0 ) /*0x62b308*/
    return -1; /*0x62b31f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x62b31d*/
      return -1; /*0x62b31d*/
  }
  return result; /*0x62b322*/
}
} // namespace gamemd

// 0x62B330
namespace gamemd {
VectorClass_flat * VectorClass_ptr_ParasiteClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_ParasiteClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x62b348*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x62b368*/
    RA2_OPDEL(Block); /*0x62b36b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x62B380
namespace gamemd {
DynamicVector * VectorClass_ptr_ParasiteClass::Constructor_VectorClass_ParasiteClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_ParasiteClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x62b398*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x62b3b8*/
    RA2_OPDEL(); /*0x62b3bb*/
  return this; /*0x62b3c5*/
}
} // namespace gamemd

// 0x630250
char VectorClass_flat::PushBackCopy(AbstractClass * aP1)
{
  int Capacity; // ecx
  int result; // eax
  int Items; // edx

    v3 = *((unsigned int *)this + 8);
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
      v6 = *((unsigned int *)this + 16);
      v7 = *((unsigned int *)this + 4);
      *((unsigned int *)this + 16) = v6 + 1;
    *(unsigned int *)(Items + 4 * result) = *aP1; /*0x630298*/
    IDA_LOBYTE(result) = 1; /*0x63029b*/
  }
  else
  {
    IDA_LOBYTE(result) = 0; /*0x63027f*/
  }
  return result; /*0x630281*/
}
// 0x63DB60
namespace gamemd {
void VectorClass_ptr_PlanningMemberClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x63db66*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x63db76*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x63DB90
namespace gamemd {
unsigned int VectorClass_ptr_PlanningMemberClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x63db97*/
}
} // namespace gamemd

// 0x63DBB0
namespace gamemd {
int VectorClass_ptr_PlanningMemberClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x63DBC0
namespace gamemd {
void VectorClass_ptr_PlanningMemberClass::Destroy_0()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x63dbc6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x63dbd6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x63DBF0
namespace gamemd {
unsigned int VectorClass_ptr_PlanningMemberClass::GetItemIndex_0(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x63dbf7*/
}
} // namespace gamemd

// 0x63DC10
namespace gamemd {
int VectorClass_ptr_PlanningBranchClass::Clear(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x63DD30
namespace gamemd {
int VectorClass_ptr_PlanningTokenClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x63DD40
namespace gamemd {
char VectorClass_ptr_PlanningMemberClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x63dd4d*/
  {
    v3 = 0; /*0x63dd4f*/
    if ( m_8 <= 0 ) /*0x63dd53*/
      return 1; /*0x63dd73*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x63dd5b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x63dd64*/
    {
      ++v3; /*0x63dd66*/
      ++v4; /*0x63dd67*/
      if ( v3 >= m_8 ) /*0x63dd6c*/
        return 1; /*0x63dd6c*/
    }
  }
  return 0; /*0x63dd6e*/
}
} // namespace gamemd

// 0x63DD80
namespace gamemd {
char VectorClass_ptr_PlanningMemberClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x63dd8c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x63dd9c*/
      v4 = a3; /*0x63ddb2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x63ddae*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x63ddba*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x63ddd1*/
          m_8 = a2; /*0x63ddd3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x63ddde*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x63ddf6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x63de18*/
    }
    else
    {
      return 0; /*0x63ddbf*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x63de28*/
  }
}
} // namespace gamemd

// 0x63DE30
namespace gamemd {
void VectorClass_ptr_PlanningMemberClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x63de43*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x63DE60
namespace gamemd {
int VectorClass_ptr_PlanningMemberClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x63de68*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x63de71*/
  if ( m_8 <= 0 ) /*0x63de75*/
    return -1; /*0x63de8c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x63de7b*/
  {
    if ( ++result >= m_8 ) /*0x63de8a*/
      return -1; /*0x63de8a*/
  }
  return result; /*0x63de6a*/
}
} // namespace gamemd

// 0x63DEA0
namespace gamemd {
unsigned int VectorClass_ptr_PlanningMemberClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x63dea7*/
}
} // namespace gamemd

// 0x63DF20
namespace gamemd {
char VectorClass_ptr_PlanningMemberClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x63df2c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x63df38*/
      v4 = a3; /*0x63df4e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x63df4a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x63df56*/
      return 0; /*0x63dfca*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x63df64*/
        m_8 = a2; /*0x63df66*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x63df71*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x63df89*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x63dfbe*/
}
} // namespace gamemd

// 0x63E020
namespace gamemd {
int VectorClass_ptr_PlanningMemberClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x63e023*/
  if ( m_10 <= 0 ) /*0x63e028*/
    return -1; /*0x63e03f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x63e03d*/
      return -1; /*0x63e03d*/
  }
  return result; /*0x63e042*/
}
} // namespace gamemd

// 0x63E050
namespace gamemd {
char VectorClass_ptr_PlanningBranchClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x63e05d*/
  {
    v3 = 0; /*0x63e05f*/
    if ( m_8 <= 0 ) /*0x63e063*/
      return 1; /*0x63e083*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x63e06b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x63e074*/
    {
      ++v3; /*0x63e076*/
      ++v4; /*0x63e077*/
      if ( v3 >= m_8 ) /*0x63e07c*/
        return 1; /*0x63e07c*/
    }
  }
  return 0; /*0x63e07e*/
}
} // namespace gamemd

// 0x63E140
void VectorClass_flat::Cleanup2()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(this->Items); /*0x63e153*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
// 0x63E170
namespace gamemd {
int  VectorClass_ptr_PlanningBranchClass::GetSize()
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x63e178*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x63e181*/
  if ( m_8 <= 0 ) /*0x63e185*/
    return -1; /*0x63e19c*/
  for ( i = *(unsigned int **)&this->Items; *i != *this; ++i ) /*0x63e18b*/
  {
    if ( ++result >= m_8 ) /*0x63e19a*/
      return -1; /*0x63e19a*/
  }
  return result; /*0x63e17a*/
}
} // namespace gamemd

// 0x63E1B0
namespace gamemd {
unsigned int VectorClass_ptr_PlanningBranchClass::Remove(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x63e1b7*/
}
} // namespace gamemd

// 0x63E230
namespace gamemd {
char VectorClass_ptr_PlanningMemberClass::SetCapacity_0(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x63e23c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x63e248*/
      v4 = a3; /*0x63e25e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x63e25a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x63e266*/
      return 0; /*0x63e2da*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x63e274*/
        m_8 = a2; /*0x63e276*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x63e281*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x63e299*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x63e2ce*/
}
} // namespace gamemd

// 0x63E2E0
namespace gamemd {
int VectorClass_ptr_PlanningMemberClass::FindItemIndex_0(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x63e2e3*/
  if ( m_10 <= 0 ) /*0x63e2e8*/
    return -1; /*0x63e2ff*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x63e2fd*/
      return -1; /*0x63e2fd*/
  }
  return result; /*0x63e302*/
}
} // namespace gamemd

// 0x63E540
char VectorClass_flat::Append(VectorClass_flat * aP1)
{
  int Capacity; // ecx
  int result; // eax
  int Items; // edx

    v3 = *((unsigned int *)this + 8);
  result = this->Count; /*0x63e546*/
  if ( result < Capacity /*0x63e56d*/
    || (this->IsAllocated[0] || !Capacity)
    && (result = this->CapacityIncrement, result > 0)
    && (result = (*(int (**)(DynamicVectorClass *, int, unsigned int))(this->vtable0 + 8))(
                   this,
                   Capacity + result,
                   0),
        (unsigned char)result) )
  {
      v6 = *((unsigned int *)this + 16);
      v7 = *((unsigned int *)this + 4);
      *((unsigned int *)this + 16) = v6 + 1;
    *(unsigned int *)(Items + 4 * result) = *aP1; /*0x63e588*/
    IDA_LOBYTE(result) = 1; /*0x63e58b*/
  }
  else
  {
    IDA_LOBYTE(result) = 0; /*0x63e56f*/
  }
  return result; /*0x63e571*/
}
// 0x63E900
char VectorClass_flat::EraseAt(IUnknown * aP1)
{
  int result; // eax
  int Count; // ecx
  int v5; // ecx

    v3 = (*(int (**)(int *, IUnknown *))(*(char *)this + 64))(this, aP1);
    if ( v3 >= v4 )
  {
    IDA_LOBYTE(result) = 0; /*0x63e93b*/
  }
  else
  {
    v5 = Count - 1; /*0x63e91b*/
      for ( *((unsigned int *)this + 16) = v5; v3 < *((unsigned int *)this + 16); *(unsigned int *)(*((unsigned int *)this + 4) + 4 * v3 - 4) = *(unsigned int *)(*((unsigned int *)this + 4) + 4 * v3) )
          result < this->Count;
          *(unsigned int *)(this->Items + 4 * result - 4) = *(unsigned int *)(this->Items + 4 * result) )
    {
      ++result; /*0x63e926*/
    }
    IDA_LOBYTE(result) = 1; /*0x63e935*/
  }
  return result; /*0x63e937*/
}
// 0x63E950
namespace gamemd {
char VectorClass_ptr_PlanningTokenClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x63e95d*/
  {
    v3 = 0; /*0x63e95f*/
    if ( m_8 <= 0 ) /*0x63e963*/
      return 1; /*0x63e983*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x63e96b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x63e974*/
    {
      ++v3; /*0x63e976*/
      ++v4; /*0x63e977*/
      if ( v3 >= m_8 ) /*0x63e97c*/
        return 1; /*0x63e97c*/
    }
  }
  return 0; /*0x63e97e*/
}
} // namespace gamemd

// 0x63E990
namespace gamemd {
char VectorClass_ptr_PlanningTokenClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x63e99c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x63e9ac*/
      v4 = a3; /*0x63e9c2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x63e9be*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x63e9ca*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x63e9e1*/
          m_8 = a2; /*0x63e9e3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x63e9ee*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x63ea06*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x63ea28*/
    }
    else
    {
      return 0; /*0x63e9cf*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x63ea38*/
  }
}
} // namespace gamemd

// 0x63EA40
namespace gamemd {
void VectorClass_ptr_PlanningTokenClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x63ea53*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x63EA70
namespace gamemd {
int VectorClass_ptr_PlanningTokenClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x63ea78*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x63ea81*/
  if ( m_8 <= 0 ) /*0x63ea85*/
    return -1; /*0x63ea9c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x63ea8b*/
  {
    if ( ++result >= m_8 ) /*0x63ea9a*/
      return -1; /*0x63ea9a*/
  }
  return result; /*0x63ea7a*/
}
} // namespace gamemd

// 0x63EAB0
namespace gamemd {
unsigned int VectorClass_ptr_PlanningTokenClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x63eab7*/
}
} // namespace gamemd

// 0x63EC50
namespace gamemd {
VectorClass_flat * VectorClass_ptr_PlanningMemberClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_PlanningMemberClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x63ec68*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x63ec88*/
    RA2_OPDEL(Block); /*0x63ec8b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x63ECA0
namespace gamemd {
DynamicVector * VectorClass_ptr_PlanningMemberClass::Constructor_VectorClass_PlanningMemberClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_PlanningMemberClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x63ecb8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x63ecd8*/
    RA2_OPDEL(); /*0x63ecdb*/
  return this; /*0x63ece5*/
}
} // namespace gamemd

// 0x63ECF0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_PlanningBranchClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_PlanningBranchClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x63ed08*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x63ed28*/
    RA2_OPDEL(Block); /*0x63ed2b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x63ED40
namespace gamemd {
DynamicVector * VectorClass_ptr_PlanningMemberClass::Constructor_VectorClass_PlanningBranchClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_PlanningBranchClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x63ed58*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x63ed78*/
    RA2_OPDEL(); /*0x63ed7b*/
  return this; /*0x63ed85*/
}
} // namespace gamemd

// 0x63EED0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_PlanningTokenClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_PlanningTokenClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x63eee8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x63ef08*/
    RA2_OPDEL(Block); /*0x63ef0b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x658D60
unsigned int * VectorClass_flat::PointConstructor(MapClass * aP1, MapClass * aP2)
{
  void *v5; // eax

    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = aP1;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
    *this = &vt_VectorClass_Point2D;
  if ( aP1 ) /*0x658d82*/
  {
    if ( aP2 ) /*0x658d8a*/
    {
            *((unsigned int *)this + 4) = aP2;
            return this;
    }
    v5 = (void *)RA2_OPNEW(8 * aP1); /*0x658da3*/
    if ( v5 ) /*0x658dad*/
    {
            *((unsigned int *)this + 4) = v5;
            *((unsigned char *)this + 13) = 1;
            return this;
    }
        *((unsigned char *)this + 13) = 1;
        *((unsigned int *)this + 4) = 0;
  }
    return this;
}
// 0x65A1E0
namespace gamemd {
void VectorClass_ptr_RadBeam::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x65a1e6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x65a1f6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x65A210
namespace gamemd {
unsigned int VectorClass_ptr_RadBeam::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x65a217*/
}
} // namespace gamemd

// 0x65A230
namespace gamemd {
int VectorClass_ptr_RadBeam::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x65A240
namespace gamemd {
char VectorClass_ptr_RadBeam::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x65a24d*/
  {
    v3 = 0; /*0x65a24f*/
    if ( m_8 <= 0 ) /*0x65a253*/
      return 1; /*0x65a273*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x65a25b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x65a264*/
    {
      ++v3; /*0x65a266*/
      ++v4; /*0x65a267*/
      if ( v3 >= m_8 ) /*0x65a26c*/
        return 1; /*0x65a26c*/
    }
  }
  return 0; /*0x65a26e*/
}
} // namespace gamemd

// 0x65A280
namespace gamemd {
char VectorClass_ptr_RadBeam::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x65a28c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x65a29c*/
      v4 = a3; /*0x65a2b2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x65a2ae*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x65a2ba*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x65a2d1*/
          m_8 = a2; /*0x65a2d3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x65a2de*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x65a2f6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x65a318*/
    }
    else
    {
      return 0; /*0x65a2bf*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x65a328*/
  }
}
} // namespace gamemd

// 0x65A330
namespace gamemd {
void VectorClass_ptr_RadBeam::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x65a343*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x65A360
namespace gamemd {
int VectorClass_ptr_RadBeam::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x65a368*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x65a371*/
  if ( m_8 <= 0 ) /*0x65a375*/
    return -1; /*0x65a38c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x65a37b*/
  {
    if ( ++result >= m_8 ) /*0x65a38a*/
      return -1; /*0x65a38a*/
  }
  return result; /*0x65a36a*/
}
} // namespace gamemd

// 0x65A3A0
namespace gamemd {
unsigned int VectorClass_ptr_RadBeam::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x65a3a7*/
}
} // namespace gamemd

// 0x65A3C0
namespace gamemd {
char VectorClass_ptr_RadBeam::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x65a3cc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x65a3d8*/
      v4 = a3; /*0x65a3ee*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x65a3ea*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x65a3f6*/
      return 0; /*0x65a46a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x65a404*/
        m_8 = a2; /*0x65a406*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x65a411*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x65a429*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x65a45e*/
}
} // namespace gamemd

// 0x65A470
namespace gamemd {
int VectorClass_ptr_RadBeam::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x65a473*/
  if ( m_10 <= 0 ) /*0x65a478*/
    return -1; /*0x65a48f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x65a48d*/
      return -1; /*0x65a48d*/
  }
  return result; /*0x65a492*/
}
} // namespace gamemd

// 0x65A4A0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_RadBeam::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_RadBeam;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x65a4b8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x65a4d8*/
    RA2_OPDEL(Block); /*0x65a4db*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x65A4F0
namespace gamemd {
DynamicVector * VectorClass_ptr_RadBeam::Constructor_VectorClass_RadBeam___(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_RadBeam;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x65a508*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x65a528*/
    RA2_OPDEL(Block); /*0x65a52b*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x65BEF0
namespace gamemd {
void VectorClass_ptr_RadSiteClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x65bef6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x65bf06*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x65BF20
namespace gamemd {
unsigned int VectorClass_ptr_RadSiteClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x65bf27*/
}
} // namespace gamemd

// 0x65BF40
namespace gamemd {
int VectorClass_ptr_RadSiteClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x65BF50
namespace gamemd {
char VectorClass_ptr_RadSiteClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x65bf5d*/
  {
    v3 = 0; /*0x65bf5f*/
    if ( m_8 <= 0 ) /*0x65bf63*/
      return 1; /*0x65bf83*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x65bf6b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x65bf74*/
    {
      ++v3; /*0x65bf76*/
      ++v4; /*0x65bf77*/
      if ( v3 >= m_8 ) /*0x65bf7c*/
        return 1; /*0x65bf7c*/
    }
  }
  return 0; /*0x65bf7e*/
}
} // namespace gamemd

// 0x65BF90
namespace gamemd {
char VectorClass_ptr_RadSiteClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x65bf9c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x65bfac*/
      v4 = a3; /*0x65bfc2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x65bfbe*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x65bfca*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x65bfe1*/
          m_8 = a2; /*0x65bfe3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x65bfee*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x65c006*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x65c028*/
    }
    else
    {
      return 0; /*0x65bfcf*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x65c038*/
  }
}
} // namespace gamemd

// 0x65C040
namespace gamemd {
void VectorClass_ptr_RadSiteClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x65c053*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x65C070
namespace gamemd {
int VectorClass_ptr_RadSiteClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x65c078*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x65c081*/
  if ( m_8 <= 0 ) /*0x65c085*/
    return -1; /*0x65c09c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x65c08b*/
  {
    if ( ++result >= m_8 ) /*0x65c09a*/
      return -1; /*0x65c09a*/
  }
  return result; /*0x65c07a*/
}
} // namespace gamemd

// 0x65C0B0
namespace gamemd {
unsigned int VectorClass_ptr_RadSiteClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x65c0b7*/
}
} // namespace gamemd

// 0x65C0D0
namespace gamemd {
char VectorClass_ptr_RadSiteClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x65c0dc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x65c0e8*/
      v4 = a3; /*0x65c0fe*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x65c0fa*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x65c106*/
      return 0; /*0x65c17a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x65c114*/
        m_8 = a2; /*0x65c116*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x65c121*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x65c139*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x65c16e*/
}
} // namespace gamemd

// 0x65C180
namespace gamemd {
int VectorClass_ptr_RadSiteClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x65c183*/
  if ( m_10 <= 0 ) /*0x65c188*/
    return -1; /*0x65c19f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x65c19d*/
      return -1; /*0x65c19d*/
  }
  return result; /*0x65c1a2*/
}
} // namespace gamemd

// 0x65C1B0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_RadSiteClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_RadSiteClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x65c1c8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x65c1e8*/
    RA2_OPDEL(Block); /*0x65c1eb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x65C200
namespace gamemd {
DynamicVector * VectorClass_ptr_RadSiteClass::Constructor_VectorClass_RadSiteClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_RadSiteClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x65c218*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x65c238*/
    RA2_OPDEL(Block); /*0x65c23b*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x660C80
namespace gamemd {
void VectorClass_ptr_RadarEventClass::Destroy()
{
  void *Items; // eax

  Items = *(unsigned int *)&this->Items; /*0x660c86*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(Items); /*0x660c96*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x660CB0
namespace gamemd {
unsigned int VectorClass_ptr_RadarEventClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x660cb7*/
}
} // namespace gamemd

// 0x660CD0
namespace gamemd {
int VectorClass_ptr_RadarEventClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x660CE0
namespace gamemd {
char VectorClass_ptr_RadarEventClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x660ced*/
  {
    v3 = 0; /*0x660cef*/
    if ( m_8 <= 0 ) /*0x660cf3*/
      return 1; /*0x660d13*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x660cfb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x660d04*/
    {
      ++v3; /*0x660d06*/
      ++v4; /*0x660d07*/
      if ( v3 >= m_8 ) /*0x660d0c*/
        return 1; /*0x660d0c*/
    }
  }
  return 0; /*0x660d0e*/
}
} // namespace gamemd

// 0x660D20
namespace gamemd {
char VectorClass_ptr_RadarEventClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x660d2c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x660d3c*/
      v4 = a3; /*0x660d52*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x660d4e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x660d5a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x660d71*/
          m_8 = a2; /*0x660d73*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x660d7e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x660d96*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x660db8*/
    }
    else
    {
      return 0; /*0x660d5f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x660dc8*/
  }
}
} // namespace gamemd

// 0x660DD0
namespace gamemd {
void VectorClass_ptr_RadarEventClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x660de3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x660E00
namespace gamemd {
int VectorClass_ptr_RadarEventClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x660e08*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x660e11*/
  if ( m_8 <= 0 ) /*0x660e15*/
    return -1; /*0x660e2c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x660e1b*/
  {
    if ( ++result >= m_8 ) /*0x660e2a*/
      return -1; /*0x660e2a*/
  }
  return result; /*0x660e0a*/
}
} // namespace gamemd

// 0x660E40
namespace gamemd {
unsigned int VectorClass_ptr_RadarEventClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x660e47*/
}
} // namespace gamemd

// 0x660E60
namespace gamemd {
char VectorClass_ptr_RadarEventClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  void *Capacity; // ecx
  int i; // eax
  void *v7; // eax

  if ( a2 ) /*0x660e6c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x660e78*/
      v4 = a3; /*0x660e8e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x660e8a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x660e96*/
      return 0; /*0x660f0a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < (int)Capacity ) /*0x660ea4*/
        Capacity = (void *)a2; /*0x660ea6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x660eb1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(this->Items); /*0x660ec9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x660efe*/
}
} // namespace gamemd

// 0x660F50
namespace gamemd {
int VectorClass_ptr_RadarEventClass::FindItemIndex(unsigned int * a2)
{
  void *Count; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x660f53*/
  if ( (int)Count <= 0 ) /*0x660f58*/
    return -1; /*0x660f6f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= (int)Count ) /*0x660f6d*/
      return -1; /*0x660f6d*/
  }
  return result; /*0x660f72*/
}
} // namespace gamemd

// 0x660F80
namespace gamemd {
VectorClass_flat * VectorClass_ptr_RadarEventClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_RadarEventClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x660f98*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x660fb8*/
    RA2_OPDEL(Block); /*0x660fbb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x660FD0
namespace gamemd {
unsigned int * VectorClass_ptr_RadarEventClass::loc_660FD0(unsigned int * Block, char a2)
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_RadarEventClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    RA2_OPDEL(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    RA2_OPDEL(Block);
    return Block;
}
} // namespace gamemd

// 0x679F70
void VectorClass_flat::Dtor()
{
  void *Items; // eax

    v2 = (void *)*((unsigned int *)this + 4);
    *this = &VectorClass<int>::`vftable';
    if ( v2 && *((unsigned char *)this + 13) )
  {
    RA2_OPDEL(Items); /*0x679f89*/
        *((unsigned int *)this + 4) = 0;
  }
    *((unsigned char *)this + 13) = 0;
    *((unsigned int *)this + 8) = 0;
}
// 0x67A630
int  VectorClass_flat::LoadStream()
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int Count; // [esp+20h] [ebp-4h] BYREF

  v3 = *this; /*0x67a63c*/
    v6 = *((unsigned int *)this + 16);
  (*(void (__stdcall **)(int *, int *, int, unsigned int))(v3 + 16))(this, &Count, 4, 0); /*0x67a64d*/
  result = Count; /*0x67a650*/
  for ( i = 0; i < Count; ++i ) /*0x67a658*/
  {
        (*(void (__stdcall **)(TechnoTypeClass *, int, int, unsigned int))(*(unsigned int *)aP1->vtable0 + 16))(
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
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *aP1; /*0x67a85c*/
    v6 = *((unsigned int *)this + 16);
  aP1->IsClean(&v6, 4, 0); /*0x67a86d*/
  result = v6; /*0x67a870*/
  for ( i = 0; i < v6; ++i ) /*0x67a878*/
  {
        (*(void (__stdcall **)(TechnoTypeClass *, int, int, unsigned int))(*(unsigned int *)aP1->vtable0 + 16))(
    result = v6; /*0x67a88b*/
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
      if ( this == (unsigned int *)aP1 )
    (*(void (**)(unsigned int *))(*(char *)this + 48))(this);
  v3 = aP1[2]; /*0x67aa91*/
    *((unsigned int *)this + 8) = v3;
  if ( !v3 ) /*0x67aa99*/
  {
        *((unsigned int *)this + 4) = 0;
        *((unsigned char *)this + 13) = 0;
        return this;
  }
  v4 = (void *)RA2_OPNEW(4 * v3); /*0x67aaa3*/
    *((unsigned int *)this + 4) = v4;
  if ( !v4 ) /*0x67aab0*/
      if ( !v4 )
    v5 = *((unsigned int *)this + 8);
  v6 = 0; /*0x67aab5*/
    *((unsigned char *)this + 13) = 1;
  if ( Capacity <= 0 ) /*0x67aabd*/
      if ( v5 <= 0 )
  do /*0x67aad1*/
  {
        *(unsigned int *)(*((unsigned int *)this + 4) + 4 * v6) = *(unsigned int *)(*(unsigned int *)&aP1->field_1[3] + 4 * v6);
    ++v6; /*0x67aace*/
  }
    do
    return this;
}
// 0x67AE00
unsigned int * VectorClass_flat::CopySmudge(CCINIClass * aP1)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this == (VectorClass *)aP1 ) /*0x67ae0a*/
      if ( this == (unsigned int *)aP1 )
    (*(void (**)(unsigned int *))(*(char *)this + 48))(this);
  v3 = aP1[2]; /*0x67ae11*/
    *((unsigned int *)this + 8) = v3;
  if ( !v3 ) /*0x67ae19*/
  {
        *((unsigned int *)this + 4) = 0;
        *((unsigned char *)this + 13) = 0;
        return this;
  }
  v4 = (void *)RA2_OPNEW(4 * v3); /*0x67ae23*/
    *((unsigned int *)this + 4) = v4;
  if ( !v4 ) /*0x67ae30*/
      if ( !v4 )
    v5 = *((unsigned int *)this + 8);
  v6 = 0; /*0x67ae35*/
    *((unsigned char *)this + 13) = 1;
  if ( Capacity <= 0 ) /*0x67ae3d*/
      if ( v5 <= 0 )
  do /*0x67ae51*/
  {
        *(unsigned int *)(*((unsigned int *)this + 4) + 4 * v6) = *(unsigned int *)(aP1->headNode[0] + 4 * v6);
    ++v6; /*0x67ae4e*/
  }
    do
    return this;
}
// 0x67AF60
void VectorClass_flat::ClearAndFree()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(this->FLH); /*0x67af73*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
// 0x67B180
unsigned int *  VectorClass_flat::CopyBuilding()
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this == (VectorClass *)this ) /*0x67b18a*/
      if ( this == (unsigned int *)aP1 )
    (*(void (**)(unsigned int *))(*(char *)this + 48))(this);
  v3 = this[2]; /*0x67b191*/
    *((unsigned int *)this + 8) = v3;
  if ( !v3 ) /*0x67b199*/
  {
        *((unsigned int *)this + 4) = 0;
        *((unsigned char *)this + 13) = 0;
        return this;
  }
  v4 = (void *)RA2_OPNEW(4 * v3); /*0x67b1a3*/
    *((unsigned int *)this + 4) = v4;
  if ( !v4 ) /*0x67b1b0*/
      if ( !v4 )
    v5 = *((unsigned int *)this + 8);
  v6 = 0; /*0x67b1b5*/
    *((unsigned char *)this + 13) = 1;
  if ( Capacity <= 0 ) /*0x67b1bd*/
      if ( v5 <= 0 )
  do /*0x67b1d1*/
  {
        *(unsigned int *)(*((unsigned int *)this + 4) + 4 * v6) = *(unsigned int *)(*(unsigned int *)&aP1->field_1[3] + 4 * v6);
    ++v6; /*0x67b1ce*/
  }
    do
    return this;
}
// 0x691160
char VectorClass_flat::PushBack2(unsigned int * a2)
{
  int Capacity; // ecx
  int CapacityIncrement; // eax
  int Count; // eax
  int Items; // edx

    v3 = *((unsigned int *)this + 8);
    if ( *((unsigned int *)this + 16) >= v3 )
  {
        if ( !*((unsigned char *)this + 13) && v3 )
      return 0; /*0x691176*/
        v4 = *((unsigned int *)this + 20);
    if ( CapacityIncrement <= 0 /*0x691188*/
      || !(*(uint8_t (**)(DynamicVectorClass *, int, unsigned int))(this->vtable0 + 8))(
            this,
            Capacity + CapacityIncrement,
            0) )
    {
      return 0; /*0x69118f*/
    }
  }
    v6 = *((unsigned int *)this + 16);
    v7 = *((unsigned int *)this + 4);
    *((unsigned int *)this + 16) = v6 + 1;
  *(unsigned int *)(Items + 4 * Count) = *a2; /*0x6911a8*/
  return 1; /*0x691191*/
}
// 0x69C580
namespace gamemd {
char **  VectorClass_Wstring::Clear(int a3)
{
    String::AssignFromPtr(a2, (const char **)(*((unsigned int *)this + 4) + 4 * a3));
  return this; /*0x69c599*/
}
} // namespace gamemd

// 0x69C5A0
namespace gamemd {
void VectorClass_ptr_GlobalPacketType::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x69c5a6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x69c5b6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x69C5D0
namespace gamemd {
unsigned int VectorClass_ptr_GlobalPacketType::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x69c5d7*/
}
} // namespace gamemd

// 0x69C5F0
namespace gamemd {
int VectorClass_ptr_MultiMission::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x69C600
namespace gamemd {
void VectorClass_ptr_GlobalPacketType::Destroy_0()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x69c606*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x69c616*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x69C630
namespace gamemd {
unsigned int VectorClass_ptr_GlobalPacketType::GetItemIndex_0(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x69c637*/
}
} // namespace gamemd

// 0x69C650
namespace gamemd {
int VectorClass_ptr_GlobalPacketType::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x69C660
namespace gamemd {
void VectorClass_ptr_GlobalPacketType::Destroy_1()
{
  void *Items; // eax

  Items = *(unsigned int *)&this->Items; /*0x69c666*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(Items); /*0x69c676*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x69C690
namespace gamemd {
unsigned int VectorClass_ptr_GlobalPacketType::GetItemIndex_1(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x69c697*/
}
} // namespace gamemd

// 0x69C6B0
namespace gamemd {
int VectorClass_ptr_PhoneEntryClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x69C970
namespace gamemd {
char VectorClass_Wstring::AddRef(int a2)
{
  int m_8; // eax
  int v4; // esi

    v3 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x69c981*/
  {
    v4 = 0; /*0x69c983*/
    if ( m_8 <= 0 ) /*0x69c987*/
      return 1; /*0x69c9b1*/
    while ( !VectorClass_Wstring::SetCapacity( /*0x69c9a2*/
               (VectorClass_Wstring *)(4 * v4 + *(unsigned int *)&this->Items),
               (const char **)(4 * v4 + *(unsigned int *)(a2 + 4))) )
    {
            if ( ++v4 >= *((unsigned int *)this + 8) )
        return 1; /*0x69c9aa*/
    }
  }
  return 0; /*0x69c9ac*/
}
} // namespace gamemd

// 0x69C9C0
namespace gamemd {
char VectorClass_Wstring::Release(int a2, unsigned int * a3)
{
  int m_8; // ebp
  int *v5; // eax
  unsigned int *v6; // ebx
  unsigned int *v7; // esi
  unsigned int *v8; // esi
  int i; // esi
  int v11; // ecx
  int v12; // eax
  void *v13; // edx
  ObjectClass *v14; // esi
  int v15; // eax
  int v16; // ebp
  int v17; // [esp+10h] [ebp-4h]
  int v18; // [esp+10h] [ebp-4h]
  void *v19; // [esp+10h] [ebp-4h]

  m_8 = a2; /*0x69c9c3*/
  if ( a2 ) /*0x69c9cd*/
  {
        *((unsigned int *)this + 48) = 0;
    if ( a3 ) /*0x69c9dd*/
    {
      *a3 = a2; /*0x69ca21*/
      v6 = a3 + 1; /*0x69ca23*/
      v8 = a3 + 1; /*0x69ca29*/
      if ( a2 - 1 >= 0 ) /*0x69ca2d*/
      {
        v18 = a2; /*0x69ca30*/
        do /*0x69ca47*/
        {
          unknown_libname_73(v8++); /*0x69ca36*/
          --v18; /*0x69ca43*/
        }
        while ( v18 ); /*0x69ca47*/
      }
    }
    else
    {
      v5 = (int *)RA2_OPNEW(4 * a2 + 4); /*0x69c9e7*/
      if ( v5 ) /*0x69c9f1*/
      {
        *v5 = a2; /*0x69c9f3*/
        v6 = v5 + 1; /*0x69c9f5*/
        v7 = v5 + 1; /*0x69c9fb*/
        if ( a2 - 1 >= 0 ) /*0x69c9ff*/
        {
          v17 = a2; /*0x69ca02*/
          do /*0x69ca19*/
          {
            unknown_libname_73(v7++); /*0x69ca08*/
            --v17; /*0x69ca15*/
          }
          while ( v17 ); /*0x69ca19*/
        }
      }
      else
      {
        v6 = 0; /*0x69ca1d*/
      }
    }
        *((unsigned int *)this + 48) = 1;
    if ( v6 ) /*0x69ca4f*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                if ( a2 >= *((unsigned int *)this + 2) )
                    v3 = *((unsigned int *)this + 2);
        for ( i = 0; i < m_8; ++i ) /*0x69ca6f*/
                    String::Reassign((char **)&v6[i], (const char **)(4 * i + *((unsigned int *)this + 1)));
                if ( *((unsigned int *)this + 52) )
        {
                    v11 = *((unsigned int *)this + 1);
          if ( v11 ) /*0x69ca97*/
          {
            v12 = *(unsigned int *)(v11 - 4); /*0x69ca99*/
            v13 = (void *)(v11 - 4); /*0x69ca9c*/
            v19 = (void *)(v11 - 4); /*0x69ca9f*/
            v14 = (ObjectClass *)(v11 + 4 * v12); /*0x69caa3*/
            v15 = v12 - 1; /*0x69caa6*/
            if ( v15 >= 0 ) /*0x69caa7*/
            {
              v16 = v15 + 1; /*0x69caa9*/
              do /*0x69cab7*/
              {
                v14 = (ObjectClass *)((char *)v14 - 4); /*0x69caac*/
                DeleteAndZero(v14); /*0x69cab1*/
                --v16; /*0x69cab6*/
              }
              while ( v16 ); /*0x69cab7*/
              v13 = v19; /*0x69cab9*/
            }
            RA2_OPDEL(v13); /*0x69cabe*/
          }
                    *((unsigned int *)this + 1) = 0;
        }
        m_8 = a2; /*0x69cacd*/
      }
            *((unsigned int *)this + 1) = v6;
            *((unsigned int *)this + 2) = v3;
            *((unsigned int *)this + 52) = a3 == 0;
      return 1; /*0x69cae8*/
    }
    else
    {
      return 0; /*0x69ca54*/
    }
  }
  else
  {
        (*(void (**)(unsigned char *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x69caf9*/
  }
}
} // namespace gamemd

// 0x69CB00
namespace gamemd {
void VectorClass_Wstring::ddtor()
{
  int v2; // eax
  int v3; // ecx
  void *v4; // ebx
  ObjectClass *v5; // esi
  int v6; // ecx
  int v7; // ebp

    v2 = *((unsigned int *)this + 16);
    if ( v2 && *((unsigned char *)this + 52) )
  {
    v3 = *(unsigned int *)(v2 - 4); /*0x69cb17*/
    v4 = (void *)(v2 - 4); /*0x69cb1b*/
    v5 = (ObjectClass *)(v2 + 4 * v3); /*0x69cb1f*/
    v6 = v3 - 1; /*0x69cb22*/
    if ( v6 >= 0 ) /*0x69cb23*/
    {
      v7 = v6 + 1; /*0x69cb26*/
      do /*0x69cb34*/
      {
        v5 = (ObjectClass *)((char *)v5 - 4); /*0x69cb29*/
        DeleteAndZero(v5); /*0x69cb2e*/
        --v7; /*0x69cb33*/
      }
      while ( v7 ); /*0x69cb34*/
    }
    RA2_OPDEL(v4); /*0x69cb38*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x69CB50
namespace gamemd {
int VectorClass_Wstring::GetSize(const char ** a2)
{
  int v4; // esi

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x69cb5e*/
  v4 = 0; /*0x69cb67*/
    if ( *((int *)this + 32) <= 0 )
    return -1; /*0x69cb89*/
    while ( !String::Compare((const char **)(*((unsigned int *)this + 16) + 4 * v4), a2) )
  {
        if ( ++v4 >= *((unsigned int *)this + 32) )
      return -1; /*0x69cb87*/
  }
  return v4; /*0x69cb5c*/
}
} // namespace gamemd

// 0x69CBA0
namespace gamemd {
unsigned int VectorClass_Wstring::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x69cba7*/
}
} // namespace gamemd

// 0x69CD40
namespace gamemd {
char VectorClass_ptr_MultiMission::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x69cd4d*/
  {
    v3 = 0; /*0x69cd4f*/
    if ( m_8 <= 0 ) /*0x69cd53*/
      return 1; /*0x69cd73*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x69cd5b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x69cd64*/
    {
      ++v3; /*0x69cd66*/
      ++v4; /*0x69cd67*/
      if ( v3 >= m_8 ) /*0x69cd6c*/
        return 1; /*0x69cd6c*/
    }
  }
  return 0; /*0x69cd6e*/
}
} // namespace gamemd

// 0x69CD80
namespace gamemd {
char VectorClass_ptr_MultiMission::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x69cd8c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x69cd9c*/
      v4 = a3; /*0x69cdb2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x69cdae*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x69cdba*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x69cdd1*/
          m_8 = a2; /*0x69cdd3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x69cdde*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x69cdf6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x69ce18*/
    }
    else
    {
      return 0; /*0x69cdbf*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x69ce28*/
  }
}
} // namespace gamemd

// 0x69CE30
namespace gamemd {
void VectorClass_ptr_MultiMission::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x69ce43*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x69CE60
namespace gamemd {
int VectorClass_ptr_MultiMission::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x69ce68*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x69ce71*/
  if ( m_8 <= 0 ) /*0x69ce75*/
    return -1; /*0x69ce8c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x69ce7b*/
  {
    if ( ++result >= m_8 ) /*0x69ce8a*/
      return -1; /*0x69ce8a*/
  }
  return result; /*0x69ce6a*/
}
} // namespace gamemd

// 0x69CEA0
namespace gamemd {
unsigned int VectorClass_ptr_MultiMission::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x69cea7*/
}
} // namespace gamemd

// 0x69CEC0
namespace gamemd {
char VectorClass_ptr_GlobalPacketType::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x69cecc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x69ced8*/
      v4 = a3; /*0x69ceee*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x69ceea*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x69cef6*/
      return 0; /*0x69cf6a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x69cf04*/
        m_8 = a2; /*0x69cf06*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x69cf11*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x69cf29*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x69cf5e*/
}
} // namespace gamemd

// 0x69CF70
namespace gamemd {
int VectorClass_ptr_GlobalPacketType::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x69cf73*/
  if ( m_10 <= 0 ) /*0x69cf78*/
    return -1; /*0x69cf8f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x69cf8d*/
      return -1; /*0x69cf8d*/
  }
  return result; /*0x69cf92*/
}
} // namespace gamemd

// 0x69CFA0
namespace gamemd {
char VectorClass_ptr_GlobalPacketType::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x69cfad*/
  {
    v3 = 0; /*0x69cfaf*/
    if ( m_8 <= 0 ) /*0x69cfb3*/
      return 1; /*0x69cfd3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x69cfbb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x69cfc4*/
    {
      ++v3; /*0x69cfc6*/
      ++v4; /*0x69cfc7*/
      if ( v3 >= m_8 ) /*0x69cfcc*/
        return 1; /*0x69cfcc*/
    }
  }
  return 0; /*0x69cfce*/
}
} // namespace gamemd

// 0x69CFE0
namespace gamemd {
char VectorClass_ptr_GlobalPacketType::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x69cfec*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x69cffc*/
      v4 = a3; /*0x69d012*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x69d00e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x69d01a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x69d031*/
          m_8 = a2; /*0x69d033*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x69d03e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x69d056*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x69d078*/
    }
    else
    {
      return 0; /*0x69d01f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x69d088*/
  }
}
} // namespace gamemd

// 0x69D090
namespace gamemd {
void VectorClass_ptr_GlobalPacketType::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x69d0a3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x69D0C0
namespace gamemd {
int VectorClass_ptr_GlobalPacketType::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x69d0c8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x69d0d1*/
  if ( m_8 <= 0 ) /*0x69d0d5*/
    return -1; /*0x69d0ec*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x69d0db*/
  {
    if ( ++result >= m_8 ) /*0x69d0ea*/
      return -1; /*0x69d0ea*/
  }
  return result; /*0x69d0ca*/
}
} // namespace gamemd

// 0x69D100
namespace gamemd {
unsigned int VectorClass_ptr_GlobalPacketType::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x69d107*/
}
} // namespace gamemd

// 0x69D120
namespace gamemd {
char VectorClass_ptr_GlobalPacketType::SetCapacity_0(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x69d12c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x69d138*/
      v4 = a3; /*0x69d14e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x69d14a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x69d156*/
      return 0; /*0x69d1ca*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x69d164*/
        m_8 = a2; /*0x69d166*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x69d171*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x69d189*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x69d1be*/
}
} // namespace gamemd

// 0x69D1D0
namespace gamemd {
int VectorClass_ptr_GlobalPacketType::FindItemIndex_0(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x69d1d3*/
  if ( m_10 <= 0 ) /*0x69d1d8*/
    return -1; /*0x69d1ef*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x69d1ed*/
      return -1; /*0x69d1ed*/
  }
  return result; /*0x69d1f2*/
}
} // namespace gamemd

// 0x69D200
namespace gamemd {
char VectorClass_ptr_PhoneEntryClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x69d20d*/
  {
    v3 = 0; /*0x69d20f*/
    if ( m_8 <= 0 ) /*0x69d213*/
      return 1; /*0x69d233*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x69d21b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x69d224*/
    {
      ++v3; /*0x69d226*/
      ++v4; /*0x69d227*/
      if ( v3 >= m_8 ) /*0x69d22c*/
        return 1; /*0x69d22c*/
    }
  }
  return 0; /*0x69d22e*/
}
} // namespace gamemd

// 0x69D240
namespace gamemd {
char VectorClass_ptr_PhoneEntryClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x69d24c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x69d25c*/
      v4 = a3; /*0x69d272*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x69d26e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x69d27a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x69d291*/
          m_8 = a2; /*0x69d293*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x69d29e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x69d2b6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x69d2d8*/
    }
    else
    {
      return 0; /*0x69d27f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x69d2e8*/
  }
}
} // namespace gamemd

// 0x69D2F0
namespace gamemd {
void VectorClass_ptr_PhoneEntryClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x69d303*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x69D320
namespace gamemd {
int VectorClass_ptr_PhoneEntryClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x69d328*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x69d331*/
  if ( m_8 <= 0 ) /*0x69d335*/
    return -1; /*0x69d34c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x69d33b*/
  {
    if ( ++result >= m_8 ) /*0x69d34a*/
      return -1; /*0x69d34a*/
  }
  return result; /*0x69d32a*/
}
} // namespace gamemd

// 0x69D360
namespace gamemd {
unsigned int VectorClass_ptr_PhoneEntryClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x69d367*/
}
} // namespace gamemd

// 0x69D380
namespace gamemd {
char VectorClass_ptr_GlobalPacketType::SetCapacity_1(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  void *Capacity; // ecx
  int i; // eax
  void *v7; // eax

  if ( a2 ) /*0x69d38c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x69d398*/
      v4 = a3; /*0x69d3ae*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x69d3aa*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x69d3b6*/
      return 0; /*0x69d42a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < (int)Capacity ) /*0x69d3c4*/
        Capacity = (void *)a2; /*0x69d3c6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x69d3d1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(this->Items); /*0x69d3e9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x69d41e*/
}
} // namespace gamemd

// 0x69D430
namespace gamemd {
int VectorClass_ptr_GlobalPacketType::FindItemIndex_1(unsigned int * a2)
{
  void *Count; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x69d433*/
  if ( (int)Count <= 0 ) /*0x69d438*/
    return -1; /*0x69d44f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= (int)Count ) /*0x69d44d*/
      return -1; /*0x69d44d*/
  }
  return result; /*0x69d452*/
}
} // namespace gamemd

// 0x69D4B0
namespace gamemd {
VectorClass_flat * VectorClass_Wstring::QueryInterface(unsigned int * Block, char a2)
{
  int v3; // eax
  int v4; // ecx
  void *v5; // ebx
  ObjectClass *v6; // esi
  int v7; // ecx
  int v8; // ebp

    v3 = *(Block + 1);
    *Block = &vt_VectorClass_Wstring;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    v4 = *(unsigned int *)(v3 - 4); /*0x69d4cb*/
    v5 = (void *)(v3 - 4); /*0x69d4cf*/
    v6 = (ObjectClass *)(v3 + 4 * v4); /*0x69d4d3*/
    v7 = v4 - 1; /*0x69d4d6*/
    if ( v7 >= 0 ) /*0x69d4d7*/
    {
      v8 = v7 + 1; /*0x69d4da*/
      do /*0x69d4e8*/
      {
        v6 = (ObjectClass *)((char *)v6 - 4); /*0x69d4dd*/
        DeleteAndZero(v6); /*0x69d4e2*/
        --v8; /*0x69d4e7*/
      }
      while ( v8 ); /*0x69d4e8*/
    }
    RA2_OPDEL(v5); /*0x69d4ec*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x69d50e*/
    RA2_OPDEL(Block); /*0x69d511*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x69D590
namespace gamemd {
VectorClass_flat * VectorClass_ptr_MultiMission::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_MultiMission;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x69d5a8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x69d5c8*/
    RA2_OPDEL(Block); /*0x69d5cb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x69D5E0
namespace gamemd {
DynamicVector * VectorClass_ptr_GlobalPacketType::Constructor_VectorClass_MultiMission___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_MultiMission;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x69d5f8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x69d618*/
    RA2_OPDEL(); /*0x69d61b*/
  return this; /*0x69d625*/
}
} // namespace gamemd

// 0x69D630
namespace gamemd {
VectorClass_flat * VectorClass_ptr_GlobalPacketType::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_GlobalPacketType;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x69d648*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x69d668*/
    RA2_OPDEL(Block); /*0x69d66b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x69D680
namespace gamemd {
DynamicVector * VectorClass_ptr_GlobalPacketType::Constructor_VectorClass_GlobalPacketType___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_GlobalPacketType;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x69d698*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x69d6b8*/
    RA2_OPDEL(); /*0x69d6bb*/
  return this; /*0x69d6c5*/
}
} // namespace gamemd

// 0x69D6D0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_PhoneEntryClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_PhoneEntryClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x69d6e8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x69d708*/
    RA2_OPDEL(Block); /*0x69d70b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x69D720
namespace gamemd {
unsigned int * VectorClass_ptr_GlobalPacketType::loc_69D720(unsigned int * Block, char a2)
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_PhoneEntryClass;
    if ( v3 && *((char*)(Block) + 13) )
  {
    RA2_OPDEL(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    RA2_OPDEL(Block);
    return Block;
}
} // namespace gamemd

// 0x69D7C0
unsigned int * VectorClass_flat::WstringConstructor(int a2, unsigned int * a3)
{
  int v3; // esi
  unsigned int *v5; // ebp
  int *v7; // eax
  void *v8; // ebx
  unsigned int *v9; // ebp

  a2 = a2; /*0x69d7c3*/
    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = a2;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
    *this = &vt_VectorClass_Wstring;
  if ( !a2 ) /*0x69d7e4*/
      if ( !a2 )
  if ( !a2 ) /*0x69d7ec*/
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
          --a2; /*0x69d847*/
        }
        while ( a2 ); /*0x69d848*/
                *((unsigned int *)this + 4) = v8;
                *((unsigned char *)this + 13) = 1;
                return this;
      }
    }
    else
    {
      v8 = 0; /*0x69d85a*/
    }
        *((unsigned int *)this + 4) = v8;
        *((unsigned char *)this + 13) = 1;
        return this;
  }
  *a2 = a2; /*0x69d7ee*/
  v5 = a2 + 1; /*0x69d7f6*/
  if ( a2 - 1 >= 0 ) /*0x69d7fa*/
  {
    do /*0x69d80a*/
    {
      unknown_libname_73(v5++); /*0x69d801*/
      --a2; /*0x69d809*/
    }
    while ( a2 ); /*0x69d80a*/
  }
    *((unsigned int *)this + 4) = a3 + 1;
    return this;
}
// 0x69E9B0
int VectorClass_flat::Check(Pipe * aP1, int aP2)
{
    SHA1::Process((Pipe *)((char *)this + 12), aP1, (Pipe *)aP2);
// 0x631d10
  return Delegate::Dispatch(aP1, aP2); /*0x69e9d0*/
}
// 0x6B1410
namespace gamemd {
void VectorClass_ptr_SlaveManagerClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x6b1416*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x6b1426*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x6B1440
namespace gamemd {
unsigned int VectorClass_ptr_SlaveManagerClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x6b1447*/
}
} // namespace gamemd

// 0x6B1460
namespace gamemd {
int VectorClass_ptr_SlaveManagerClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x6B16D0
namespace gamemd {
char VectorClass_ptr_SlaveManagerClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x6b16dd*/
  {
    v3 = 0; /*0x6b16df*/
    if ( m_8 <= 0 ) /*0x6b16e3*/
      return 1; /*0x6b1703*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x6b16eb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x6b16f4*/
    {
      ++v3; /*0x6b16f6*/
      ++v4; /*0x6b16f7*/
      if ( v3 >= m_8 ) /*0x6b16fc*/
        return 1; /*0x6b16fc*/
    }
  }
  return 0; /*0x6b16fe*/
}
} // namespace gamemd

// 0x6B1710
namespace gamemd {
char VectorClass_ptr_SlaveManagerClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x6b171c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x6b172c*/
      v4 = a3; /*0x6b1742*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x6b173e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x6b174a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x6b1761*/
          m_8 = a2; /*0x6b1763*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x6b176e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x6b1786*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x6b17a8*/
    }
    else
    {
      return 0; /*0x6b174f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x6b17b8*/
  }
}
} // namespace gamemd

// 0x6B17C0
namespace gamemd {
void VectorClass_ptr_SlaveManagerClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x6b17d3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x6B17F0
namespace gamemd {
int VectorClass_ptr_SlaveManagerClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x6b17f8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x6b1801*/
  if ( m_8 <= 0 ) /*0x6b1805*/
    return -1; /*0x6b181c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x6b180b*/
  {
    if ( ++result >= m_8 ) /*0x6b181a*/
      return -1; /*0x6b181a*/
  }
  return result; /*0x6b17fa*/
}
} // namespace gamemd

// 0x6B1830
namespace gamemd {
unsigned int VectorClass_ptr_SlaveManagerClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x6b1837*/
}
} // namespace gamemd

// 0x6B1850
namespace gamemd {
char VectorClass_ptr_SlaveManagerClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6b185c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x6b1868*/
      v4 = a3; /*0x6b187e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x6b187a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x6b1886*/
      return 0; /*0x6b18fa*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x6b1894*/
        m_8 = a2; /*0x6b1896*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x6b18a1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x6b18b9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x6b18ee*/
}
} // namespace gamemd

// 0x6B1900
namespace gamemd {
int VectorClass_ptr_SlaveManagerClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x6b1903*/
  if ( m_10 <= 0 ) /*0x6b1908*/
    return -1; /*0x6b191f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x6b191d*/
      return -1; /*0x6b191d*/
  }
  return result; /*0x6b1922*/
}
} // namespace gamemd

// 0x6B19D0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_SlaveManagerClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_SlaveManagerClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x6b19e8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x6b1a08*/
    RA2_OPDEL(Block); /*0x6b1a0b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x6B1A20
namespace gamemd {
DynamicVector * VectorClass_ptr_SlaveManagerClass::Constructor_VectorClass_SlaveManagerClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_SlaveManagerClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x6b1a38*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x6b1a58*/
    RA2_OPDEL(); /*0x6b1a5b*/
  return this; /*0x6b1a65*/
}
} // namespace gamemd

// 0x6B43B0
namespace gamemd {
void VectorClass_UUndoInfoStruct::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x6b43b6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x6b43c6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x6B43E0
namespace gamemd {
unsigned int VectorClass_UUndoInfoStruct::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (a2 - *((unsigned int *)this + 16)) / 0xCu;
  else
    return 0; /*0x6b43e7*/
}
} // namespace gamemd

// 0x6B4410
namespace gamemd {
unsigned int * VectorClass_UUndoInfoStruct::Clear(unsigned int * a2, int a3)
{
  unsigned int *v3; // edx

    v3 = (unsigned int *)(*((unsigned int *)this + 4) + 12 * a3);
  *a2 = *v3; /*0x6b4426*/
  a2[1] = v3[1]; /*0x6b442b*/
  a2[2] = v3[2]; /*0x6b4432*/
  return a2; /*0x6b442e*/
}
} // namespace gamemd

// 0x6B4440
namespace gamemd {
char VectorClass_UUndoInfoStruct::AddRef(int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  unsigned int *v5; // eax
  unsigned int *v6; // ecx
  int v7; // edx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x6b4450*/
  {
    v3 = 0; /*0x6b4452*/
    if ( m_8 <= 0 ) /*0x6b4456*/
      return 1; /*0x6b4490*/
    v4 = *(unsigned int *)(a2 + 4); /*0x6b4458*/
        v5 = (unsigned int *)*((unsigned int *)this + 4);
    v6 = (unsigned int *)(v4 + 8); /*0x6b445e*/
    v7 = v4 - (unsigned int)v5; /*0x6b4461*/
    while ( *v5 == *(unsigned int *)((char *)v5 + v7) && v5[1] == *(v6 - 1) && v5[2] == *v6 ) /*0x6b447d*/
    {
      ++v3; /*0x6b447f*/
      v6 += 3; /*0x6b4480*/
      v5 += 3; /*0x6b4483*/
      if ( v3 >= m_8 ) /*0x6b4488*/
        return 1; /*0x6b4488*/
    }
  }
  return 0; /*0x6b448a*/
}
} // namespace gamemd

// 0x6B45A0
namespace gamemd {
void VectorClass_UUndoInfoStruct::ddtor()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x6b45b3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x6B45D0
namespace gamemd {
int VectorClass_UUndoInfoStruct::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x6b45de*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x6b45e7*/
  if ( m_8 <= 0 ) /*0x6b45eb*/
    return -1; /*0x6b4616*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 ) /*0x6b45f1*/
  {
    if ( ++result >= m_8 ) /*0x6b4614*/
      return -1; /*0x6b4614*/
  }
  return result; /*0x6b45db*/
}
} // namespace gamemd

// 0x6B4620
namespace gamemd {
unsigned int VectorClass_UUndoInfoStruct::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (a2 - *((unsigned int *)this + 16)) / 0xCu;
  else
    return 0; /*0x6b4627*/
}
} // namespace gamemd

// 0x6B4760
namespace gamemd {
int VectorClass_UUndoInfoStruct::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x6b4765*/
  if ( m_10 <= 0 ) /*0x6b476b*/
    return -1; /*0x6b4796*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 )
  {
    if ( ++result >= m_10 ) /*0x6b4794*/
      return -1; /*0x6b4794*/
  }
  return result; /*0x6b4799*/
}
} // namespace gamemd

// 0x6B47A0
namespace gamemd {
VectorClass_flat * VectorClass_UUndoInfoStruct::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_UndoInfoStruct;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x6b47b8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x6b47d8*/
    RA2_OPDEL(Block); /*0x6b47db*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x6B47F0
namespace gamemd {
DynamicVector * VectorClass_UUndoInfoStruct::Constructor_VectorClass_UndoInfoStruct_(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_UndoInfoStruct;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x6b4808*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x6b4828*/
    RA2_OPDEL(Block); /*0x6b482b*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x6B81C0
namespace gamemd {
void VectorClass_ptr_SpawnManagerClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x6b81c6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x6b81d6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x6B81F0
namespace gamemd {
unsigned int VectorClass_ptr_SpawnManagerClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x6b81f7*/
}
} // namespace gamemd

// 0x6B8210
namespace gamemd {
int VectorClass_ptr_SpawnManagerClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x6B84E0
namespace gamemd {
char VectorClass_ptr_SpawnManagerClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x6b84ed*/
  {
    v3 = 0; /*0x6b84ef*/
    if ( m_8 <= 0 ) /*0x6b84f3*/
      return 1; /*0x6b8513*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x6b84fb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x6b8504*/
    {
      ++v3; /*0x6b8506*/
      ++v4; /*0x6b8507*/
      if ( v3 >= m_8 ) /*0x6b850c*/
        return 1; /*0x6b850c*/
    }
  }
  return 0; /*0x6b850e*/
}
} // namespace gamemd

// 0x6B8520
namespace gamemd {
char VectorClass_ptr_SpawnManagerClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x6b852c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x6b853c*/
      v4 = a3; /*0x6b8552*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x6b854e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x6b855a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x6b8571*/
          m_8 = a2; /*0x6b8573*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x6b857e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x6b8596*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x6b85b8*/
    }
    else
    {
      return 0; /*0x6b855f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x6b85c8*/
  }
}
} // namespace gamemd

// 0x6B85D0
namespace gamemd {
void VectorClass_ptr_SpawnManagerClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x6b85e3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x6B8600
namespace gamemd {
int VectorClass_ptr_SpawnManagerClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x6b8608*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x6b8611*/
  if ( m_8 <= 0 ) /*0x6b8615*/
    return -1; /*0x6b862c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x6b861b*/
  {
    if ( ++result >= m_8 ) /*0x6b862a*/
      return -1; /*0x6b862a*/
  }
  return result; /*0x6b860a*/
}
} // namespace gamemd

// 0x6B8640
namespace gamemd {
unsigned int VectorClass_ptr_SpawnManagerClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x6b8647*/
}
} // namespace gamemd

// 0x6B8660
namespace gamemd {
char VectorClass_ptr_SpawnManagerClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6b866c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x6b8678*/
      v4 = a3; /*0x6b868e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x6b868a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x6b8696*/
      return 0; /*0x6b870a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x6b86a4*/
        m_8 = a2; /*0x6b86a6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x6b86b1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x6b86c9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x6b86fe*/
}
} // namespace gamemd

// 0x6B8710
namespace gamemd {
int VectorClass_ptr_SpawnManagerClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x6b8713*/
  if ( m_10 <= 0 ) /*0x6b8718*/
    return -1; /*0x6b872f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x6b872d*/
      return -1; /*0x6b872d*/
  }
  return result; /*0x6b8732*/
}
} // namespace gamemd

// 0x6B87E0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_SpawnManagerClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_SpawnManagerClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x6b87f8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x6b8818*/
    RA2_OPDEL(Block); /*0x6b881b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x6B8830
namespace gamemd {
DynamicVector * VectorClass_ptr_SpawnManagerClass::Constructor_VectorClass_SpawnManagerClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_SpawnManagerClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x6b8848*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x6b8868*/
    RA2_OPDEL(); /*0x6b886b*/
  return this; /*0x6b8875*/
}
} // namespace gamemd

// 0x6BED50
namespace gamemd {
void VectorClass_K::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x6bed56*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x6bed66*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x6BED80
namespace gamemd {
unsigned int VectorClass_K::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x6bed87*/
}
} // namespace gamemd

// 0x6BEDA0
namespace gamemd {
int VectorClass_K::Clear(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x6BEE50
namespace gamemd {
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
} // namespace gamemd

// 0x6BEEC0
namespace gamemd {
LONG VectorClass_K_8::AddRef(int a1)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6beece*/
}
} // namespace gamemd

// 0x6BEEE0
namespace gamemd {
LONG VectorClass_K_8::Release(volatile LONG * Block)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6beef0*/
  if ( !v1 ) /*0x6beef4*/
    RA2_OPDEL((void *)Block); /*0x6beef7*/
  return v1; /*0x6bef01*/
}
} // namespace gamemd

// 0x6BEF10
namespace gamemd {
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
  v5 = (CStreamClass *)RA2_OPNEW(0x2Cu); /*0x6bef3e*/
  if ( !v5 ) /*0x6bef48*/
    return -2147024882; /*0x6bef48*/
  v6 = VectorClass_K_8::Constructor(v5); /*0x6bef4c*/
  v7 = v6; /*0x6bef51*/
  if ( !v6 ) /*0x6bef55*/
    return -2147024882; /*0x6bef58*/
  v8 = (*(int (__stdcall **)(unsigned int *, unsigned int *, unsigned int *))*v6)(v6, a4, v9); /*0x6bef6c*/
  if ( v8 < 0 ) /*0x6bef70*/
    (*(void (**)(unsigned int *, int))(*v7 + 56))(v7, 1); /*0x6bef78*/
  return v8; /*0x6bef1a*/
}
} // namespace gamemd

// 0x6BEF90
namespace gamemd {
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
} // namespace gamemd

// 0x6BEFD0
namespace gamemd {
int VectorClass_K_14::QueryInterface(int a1, const void * a2, unsigned int * a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6befd7*/
    return -2147467261; /*0x6befd9*/
  *v4 = 0; /*0x6beff6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bf012*/
    *v4 = a2; /*0x6bf016*/
  if ( !*v4 ) /*0x6bf018*/
    return -2147467262; /*0x6bf020*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6bf02c*/
  return 0; /*0x6befde*/
}
} // namespace gamemd

// 0x6BF040
namespace gamemd {
LONG VectorClass_K_14::AddRef(int a1)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf04e*/
}
} // namespace gamemd

// 0x6BF060
namespace gamemd {
LONG VectorClass_K_14::Release(volatile LONG * Block)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bf070*/
  if ( !v1 ) /*0x6bf074*/
    RA2_OPDEL((void *)Block); /*0x6bf077*/
  return v1; /*0x6bf081*/
}
} // namespace gamemd

// 0x6BF090
namespace gamemd {
int VectorClass_K_14::ddtor(int a1, int a2, int a3, unsigned int * a4)
{
  VoxelAnimClass *v5; // eax
  int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
  int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
  int v8; // edi
  unsigned int *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6bf098*/
    return -2147024809; /*0x6bf09b*/
  *v9 = 0; /*0x6bf0a8*/
  if ( a3 ) /*0x6bf0b0*/
    return -2147221232; /*0x6bf0b3*/
  v5 = (VoxelAnimClass *)RA2_OPNEW(0x240u); /*0x6bf0c1*/
  if ( !v5 ) /*0x6bf0cb*/
    return -2147024882; /*0x6bf0cb*/
  v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))VoxelAnimClass::Constructor(v5); /*0x6bf0cf*/
  v7 = v6; /*0x6bf0d4*/
  if ( !v6 ) /*0x6bf0d8*/
    return -2147024882; /*0x6bf0db*/
  v8 = (**v6)(v6, a4, v9); /*0x6bf0ef*/
  if ( v8 < 0 ) /*0x6bf0f3*/
    ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6bf0fb*/
  return v8; /*0x6bf09a*/
}
} // namespace gamemd

// 0x6BF110
namespace gamemd {
int VectorClass_K_14::GetSize(int a1, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(unsigned int *)(a2 + 4); /*0x6bf11a*/
  if ( v5 ) /*0x6bf11d*/
    v3 = v2 + 1; /*0x6bf11f*/
  else
    v3 = v2 - 1; /*0x6bf128*/
  *(unsigned int *)(a2 + 4) = v3; /*0x6bf120*/
  return 0; /*0x6bf125*/
}
} // namespace gamemd

// 0x6BF150
namespace gamemd {
int VectorClass_K_20::QueryInterface(int a1, const void * a2, unsigned int * a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bf157*/
    return -2147467261; /*0x6bf159*/
  *v4 = 0; /*0x6bf176*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bf192*/
    *v4 = a2; /*0x6bf196*/
  if ( !*v4 ) /*0x6bf198*/
    return -2147467262; /*0x6bf1a0*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6bf1ac*/
  return 0; /*0x6bf15e*/
}
} // namespace gamemd

// 0x6BF1C0
namespace gamemd {
LONG VectorClass_K_20::AddRef(int a1)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf1ce*/
}
} // namespace gamemd

// 0x6BF1E0
namespace gamemd {
LONG VectorClass_K_20::Release(volatile LONG * Block)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bf1f0*/
  if ( !v1 ) /*0x6bf1f4*/
    RA2_OPDEL((void *)Block); /*0x6bf1f7*/
  return v1; /*0x6bf201*/
}
} // namespace gamemd

// 0x6BF210
namespace gamemd {
int VectorClass_K_20::ddtor(int a1, int a2, int a3, unsigned int * a4)
{
  TerrainTypeClass *v5; // eax
  unsigned int *v6; // eax
  unsigned int *v7; // esi
  int v8; // edi
  unsigned int *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6bf218*/
    return -2147024809; /*0x6bf21b*/
  *v9 = 0; /*0x6bf228*/
  if ( a3 ) /*0x6bf230*/
    return -2147221232; /*0x6bf233*/
  v5 = (TerrainTypeClass *)RA2_OPNEW(0x2BCu); /*0x6bf241*/
  if ( !v5 ) /*0x6bf24b*/
    return -2147024882; /*0x6bf24b*/
  v6 = TerrainTypeClass::TerrainTypeClass(v5, 0); /*0x6bf251*/
  v7 = v6; /*0x6bf256*/
  if ( !v6 ) /*0x6bf25a*/
    return -2147024882; /*0x6bf25d*/
  v8 = (*(int (__stdcall **)(unsigned int *, unsigned int *, unsigned int *))*v6)(v6, a4, v9); /*0x6bf271*/
  if ( v8 < 0 ) /*0x6bf275*/
    (*(void (**)(unsigned int *, int))(*v7 + 32))(v7, 1); /*0x6bf27d*/
  return v8; /*0x6bf21a*/
}
} // namespace gamemd

// 0x6BF290
namespace gamemd {
int VectorClass_K_20::GetSize(int a1, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(unsigned int *)(a2 + 4); /*0x6bf29a*/
  if ( v5 ) /*0x6bf29d*/
    v3 = v2 + 1; /*0x6bf29f*/
  else
    v3 = v2 - 1; /*0x6bf2a8*/
  *(unsigned int *)(a2 + 4) = v3; /*0x6bf2a0*/
  return 0; /*0x6bf2a5*/
}
} // namespace gamemd

// 0x6BF2D0
namespace gamemd {
int VectorClass_K_26::QueryInterface(int a1, const void * a2, unsigned int * a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bf2d7*/
    return -2147467261; /*0x6bf2d9*/
  *v4 = 0; /*0x6bf2f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bf312*/
    *v4 = a2; /*0x6bf316*/
  if ( !*v4 ) /*0x6bf318*/
    return -2147467262; /*0x6bf320*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6bf32c*/
  return 0; /*0x6bf2de*/
}
} // namespace gamemd

// 0x6BF340
namespace gamemd {
LONG VectorClass_K_26::AddRef(int a1)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf34e*/
}
} // namespace gamemd

// 0x6BF360
namespace gamemd {
LONG VectorClass_K_26::Release(volatile LONG * Block)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bf370*/
  if ( !v1 ) /*0x6bf374*/
    RA2_OPDEL((void *)Block); /*0x6bf377*/
  return v1; /*0x6bf381*/
}
} // namespace gamemd

// 0x6BF390
namespace gamemd {
int VectorClass_K_26::ddtor(int a1, int a2, int a3, unsigned int * a4)
{
  ObjectClass *v5; // eax
  int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
  int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
  int v8; // edi
  unsigned int *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6bf398*/
    return -2147024809; /*0x6bf39b*/
  *v9 = 0; /*0x6bf3a8*/
  if ( a3 ) /*0x6bf3b0*/
    return -2147221232; /*0x6bf3b3*/
  v5 = (ObjectClass *)RA2_OPNEW(0xE0u); /*0x6bf3c1*/
  if ( !v5 ) /*0x6bf3cb*/
    return -2147024882; /*0x6bf3cb*/
  v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))ObjectClass::ProcessFoggedState(v5); /*0x6bf3cf*/
  v7 = v6; /*0x6bf3d4*/
  if ( !v6 ) /*0x6bf3d8*/
    return -2147024882; /*0x6bf3db*/
  v8 = (**v6)(v6, a4, v9); /*0x6bf3ef*/
  if ( v8 < 0 ) /*0x6bf3f3*/
    ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6bf3fb*/
  return v8; /*0x6bf39a*/
}
} // namespace gamemd

// 0x6BF410
namespace gamemd {
int VectorClass_K_26::GetSize(int a1, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(unsigned int *)(a2 + 4); /*0x6bf41a*/
  if ( v5 ) /*0x6bf41d*/
    v3 = v2 + 1; /*0x6bf41f*/
  else
    v3 = v2 - 1; /*0x6bf428*/
  *(unsigned int *)(a2 + 4) = v3; /*0x6bf420*/
  return 0; /*0x6bf425*/
}
} // namespace gamemd

// 0x6BF450
namespace gamemd {
int VectorClass_K_32::QueryInterface(int a1, const void * a2, unsigned int * a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bf457*/
    return -2147467261; /*0x6bf459*/
  *v4 = 0; /*0x6bf476*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bf492*/
    *v4 = a2; /*0x6bf496*/
  if ( !*v4 ) /*0x6bf498*/
    return -2147467262; /*0x6bf4a0*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6bf4ac*/
  return 0; /*0x6bf45e*/
}
} // namespace gamemd

// 0x6BF4C0
namespace gamemd {
LONG VectorClass_K_32::AddRef(int a1)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf4ce*/
}
} // namespace gamemd

// 0x6BF4E0
namespace gamemd {
LONG VectorClass_K_32::Release(volatile LONG * Block)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bf4f0*/
  if ( !v1 ) /*0x6bf4f4*/
    RA2_OPDEL((void *)Block); /*0x6bf4f7*/
  return v1; /*0x6bf501*/
}
} // namespace gamemd

// 0x6BF510
namespace gamemd {
int VectorClass_K_32::ddtor(int a1, int a2, int a3, unsigned int * a4)
{
  int v5; // eax
  int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
  int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
  int v8; // edi
  unsigned int *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6bf518*/
    return -2147024809; /*0x6bf51b*/
  *v9 = 0; /*0x6bf528*/
  if ( a3 ) /*0x6bf530*/
    return -2147221232; /*0x6bf533*/
  v5 = RA2_OPNEW(0x100u); /*0x6bf541*/
  if ( !v5 ) /*0x6bf54b*/
    return -2147024882; /*0x6bf54b*/
  v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))SuperWeaponTypeClass::SuperWeaponTypeClass(v5, 0); /*0x6bf551*/
  v7 = v6; /*0x6bf556*/
  if ( !v6 ) /*0x6bf55a*/
    return -2147024882; /*0x6bf55d*/
  v8 = (**v6)(v6, a4, v9); /*0x6bf571*/
  if ( v8 < 0 ) /*0x6bf575*/
    ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6bf57d*/
  return v8; /*0x6bf51a*/
}
} // namespace gamemd

// 0x6BF590
namespace gamemd {
int VectorClass_K_32::GetSize(int a1, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(unsigned int *)(a2 + 4); /*0x6bf59a*/
  if ( v5 ) /*0x6bf59d*/
    v3 = v2 + 1; /*0x6bf59f*/
  else
    v3 = v2 - 1; /*0x6bf5a8*/
  *(unsigned int *)(a2 + 4) = v3; /*0x6bf5a0*/
  return 0; /*0x6bf5a5*/
}
} // namespace gamemd

// 0x6BF5D0
namespace gamemd {
int VectorClass_K_38::QueryInterface(int a1, const void * a2, unsigned int * a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bf5d7*/
    return -2147467261; /*0x6bf5d9*/
  *v4 = 0; /*0x6bf5f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bf612*/
    *v4 = a2; /*0x6bf616*/
  if ( !*v4 ) /*0x6bf618*/
    return -2147467262; /*0x6bf620*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6bf62c*/
  return 0; /*0x6bf5de*/
}
} // namespace gamemd

// 0x6BF640
namespace gamemd {
LONG VectorClass_K_38::AddRef(int a1)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf64e*/
}
} // namespace gamemd

// 0x6BF660
namespace gamemd {
LONG VectorClass_K_38::Release(volatile LONG * Block)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bf670*/
  if ( !v1 ) /*0x6bf674*/
    RA2_OPDEL((void *)Block); /*0x6bf677*/
  return v1; /*0x6bf681*/
}
} // namespace gamemd

// 0x6BF690
namespace gamemd {
int VectorClass_K_38::ddtor(int a1, int a2, int a3, unsigned int * a4)
{
  SuperClass *v5; // eax
  int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
  int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
  int v8; // edi
  unsigned int *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6bf698*/
    return -2147024809; /*0x6bf69b*/
  *v9 = 0; /*0x6bf6a8*/
  if ( a3 ) /*0x6bf6b0*/
    return -2147221232; /*0x6bf6b3*/
  v5 = (SuperClass *)RA2_OPNEW(0x80u); /*0x6bf6c1*/
  if ( !v5 ) /*0x6bf6cb*/
    return -2147024882; /*0x6bf6cb*/
  v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))SuperClass::Constructor(v5); /*0x6bf6cf*/
  v7 = v6; /*0x6bf6d4*/
  if ( !v6 ) /*0x6bf6d8*/
    return -2147024882; /*0x6bf6db*/
  v8 = (**v6)(v6, a4, v9); /*0x6bf6ef*/
  if ( v8 < 0 ) /*0x6bf6f3*/
    ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6bf6fb*/
  return v8; /*0x6bf69a*/
}
} // namespace gamemd

// 0x6BF710
namespace gamemd {
int VectorClass_K_38::GetSize(int a1, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(unsigned int *)(a2 + 4); /*0x6bf71a*/
  if ( v5 ) /*0x6bf71d*/
    v3 = v2 + 1; /*0x6bf71f*/
  else
    v3 = v2 - 1; /*0x6bf728*/
  *(unsigned int *)(a2 + 4) = v3; /*0x6bf720*/
  return 0; /*0x6bf725*/
}
} // namespace gamemd

// 0x6BF750
namespace gamemd {
int VectorClass_K_44::QueryInterface(int a1, const void * a2, unsigned int * a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bf757*/
    return -2147467261; /*0x6bf759*/
  *v4 = 0; /*0x6bf776*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bf792*/
    *v4 = a2; /*0x6bf796*/
  if ( !*v4 ) /*0x6bf798*/
    return -2147467262; /*0x6bf7a0*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6bf7ac*/
  return 0; /*0x6bf75e*/
}
} // namespace gamemd

// 0x6BF7C0
namespace gamemd {
LONG VectorClass_K_44::AddRef(int a1)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf7ce*/
}
} // namespace gamemd

// 0x6BF7E0
namespace gamemd {
LONG VectorClass_K_44::Release(volatile LONG * Block)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bf7f0*/
  if ( !v1 ) /*0x6bf7f4*/
    RA2_OPDEL((void *)Block); /*0x6bf7f7*/
  return v1; /*0x6bf801*/
}
} // namespace gamemd

// 0x6BF810
namespace gamemd {
int VectorClass_K_44::ddtor(int a1, int a2, int a3, unsigned int * a4)
{
  Tactical *v5; // eax
  int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
  int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
  int v8; // edi
  unsigned int *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6bf818*/
    return -2147024809; /*0x6bf81b*/
  *v9 = 0; /*0x6bf828*/
  if ( a3 ) /*0x6bf830*/
    return -2147221232; /*0x6bf833*/
  v5 = (Tactical *)RA2_OPNEW(0xE18u); /*0x6bf841*/
  if ( !v5 ) /*0x6bf84b*/
    return -2147024882; /*0x6bf84b*/
  v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))TacticalMap::Construct(v5); /*0x6bf84f*/
  v7 = v6; /*0x6bf854*/
  if ( !v6 ) /*0x6bf858*/
    return -2147024882; /*0x6bf85b*/
  v8 = (**v6)(v6, a4, v9); /*0x6bf86f*/
  if ( v8 < 0 ) /*0x6bf873*/
    ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6bf87b*/
  return v8; /*0x6bf81a*/
}
} // namespace gamemd

// 0x6BF890
namespace gamemd {
int VectorClass_K_44::GetSize(int a1, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(unsigned int *)(a2 + 4); /*0x6bf89a*/
  if ( v5 ) /*0x6bf89d*/
    v3 = v2 + 1; /*0x6bf89f*/
  else
    v3 = v2 - 1; /*0x6bf8a8*/
  *(unsigned int *)(a2 + 4) = v3; /*0x6bf8a0*/
  return 0; /*0x6bf8a5*/
}
} // namespace gamemd

// 0x6C61D0
namespace gamemd {
char VectorClass_K::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x6c61dd*/
  {
    v3 = 0; /*0x6c61df*/
    if ( m_8 <= 0 ) /*0x6c61e3*/
      return 1; /*0x6c6203*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x6c61eb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x6c61f4*/
    {
      ++v3; /*0x6c61f6*/
      ++v4; /*0x6c61f7*/
      if ( v3 >= m_8 ) /*0x6c61fc*/
        return 1; /*0x6c61fc*/
    }
  }
  return 0; /*0x6c61fe*/
}
} // namespace gamemd

// 0x6C6210
namespace gamemd {
char VectorClass_K::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x6c621c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x6c622c*/
      v4 = a3; /*0x6c6242*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x6c623e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x6c624a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x6c6261*/
          m_8 = a2; /*0x6c6263*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x6c626e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x6c6286*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x6c62a8*/
    }
    else
    {
      return 0; /*0x6c624f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x6c62b8*/
  }
}
} // namespace gamemd

// 0x6C62C0
namespace gamemd {
void VectorClass_K::ddtor()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x6c62d3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x6C62F0
namespace gamemd {
int VectorClass_K::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x6c62f8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x6c6301*/
  if ( m_8 <= 0 ) /*0x6c6305*/
    return -1; /*0x6c631c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x6c630b*/
  {
    if ( ++result >= m_8 ) /*0x6c631a*/
      return -1; /*0x6c631a*/
  }
  return result; /*0x6c62fa*/
}
} // namespace gamemd

// 0x6C6330
namespace gamemd {
unsigned int VectorClass_K::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x6c6337*/
}
} // namespace gamemd

// 0x6C6350
namespace gamemd {
char VectorClass_K::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6c635c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x6c6368*/
      v4 = a3; /*0x6c637e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x6c637a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x6c6386*/
      return 0; /*0x6c63fa*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x6c6394*/
        m_8 = a2; /*0x6c6396*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x6c63a1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x6c63b9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x6c63ee*/
}
} // namespace gamemd

// 0x6C6450
namespace gamemd {
int VectorClass_K::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x6c6453*/
  if ( m_10 <= 0 ) /*0x6c6458*/
    return -1; /*0x6c646f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x6c646d*/
      return -1; /*0x6c646d*/
  }
  return result; /*0x6c6472*/
}
} // namespace gamemd

// 0x6C6480
namespace gamemd {
VectorClass_flat * VectorClass_K::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_unsigned_long;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x6c6498*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x6c64b8*/
    RA2_OPDEL(Block); /*0x6c64bb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x6C64D0
namespace gamemd {
DynamicVector * VectorClass_K::Constructor(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_unsigned_long;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x6c64e8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x6c6508*/
    RA2_OPDEL(Block); /*0x6c650b*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x6CA7C0
namespace gamemd {
void VectorClass_ptr_SubTitle::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x6ca7c6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x6ca7d6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x6CA7F0
namespace gamemd {
unsigned int VectorClass_ptr_SubTitle::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x6ca7f7*/
}
} // namespace gamemd

// 0x6CA810
namespace gamemd {
int VectorClass_ptr_SubTitle::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x6CA820
namespace gamemd {
char VectorClass_ptr_SubTitle::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x6ca82d*/
  {
    v3 = 0; /*0x6ca82f*/
    if ( m_8 <= 0 ) /*0x6ca833*/
      return 1; /*0x6ca853*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x6ca83b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x6ca844*/
    {
      ++v3; /*0x6ca846*/
      ++v4; /*0x6ca847*/
      if ( v3 >= m_8 ) /*0x6ca84c*/
        return 1; /*0x6ca84c*/
    }
  }
  return 0; /*0x6ca84e*/
}
} // namespace gamemd

// 0x6CA860
namespace gamemd {
char VectorClass_ptr_SubTitle::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6ca86c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x6ca878*/
      v4 = a3; /*0x6ca88e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x6ca88a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x6ca896*/
      return 0; /*0x6ca90a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x6ca8a4*/
        m_8 = a2; /*0x6ca8a6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x6ca8b1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x6ca8c9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x6ca8fe*/
}
} // namespace gamemd

// 0x6CA910
namespace gamemd {
int VectorClass_ptr_SubTitle::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x6ca913*/
  if ( m_10 <= 0 ) /*0x6ca918*/
    return -1; /*0x6ca92f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x6ca92d*/
      return -1; /*0x6ca92d*/
  }
  return result; /*0x6ca932*/
}
} // namespace gamemd

// 0x6CA9C0
namespace gamemd {
DynamicVector * VectorClass_ptr_SubTitle::Constructor_VectorClass_SubTitle___(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_SubTitle;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x6ca9d8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x6ca9f8*/
    RA2_OPDEL(Block); /*0x6ca9fb*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x6CAA10
namespace gamemd {
char VectorClass_ptr_SubTitle::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x6caa1c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x6caa2c*/
      v4 = a3; /*0x6caa42*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x6caa3e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x6caa4a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x6caa61*/
          m_8 = a2; /*0x6caa63*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x6caa6e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x6caa86*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x6caaa8*/
    }
    else
    {
      return 0; /*0x6caa4f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x6caab8*/
  }
}
} // namespace gamemd

// 0x6CAAC0
namespace gamemd {
void VectorClass_ptr_SubTitle::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x6caad3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x6CAAF0
namespace gamemd {
int VectorClass_ptr_SubTitle::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x6caaf8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x6cab01*/
  if ( m_8 <= 0 ) /*0x6cab05*/
    return -1; /*0x6cab1c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x6cab0b*/
  {
    if ( ++result >= m_8 ) /*0x6cab1a*/
      return -1; /*0x6cab1a*/
  }
  return result; /*0x6caafa*/
}
} // namespace gamemd

// 0x6CAB30
namespace gamemd {
unsigned int VectorClass_ptr_SubTitle::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x6cab37*/
}
} // namespace gamemd

// 0x6CAB50
namespace gamemd {
VectorClass_flat * VectorClass_ptr_SubTitle::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_SubTitle;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x6cab68*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x6cab88*/
    RA2_OPDEL(Block); /*0x6cab8b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x6CE2D0
char VectorClass_flat::RemoveAt(int a2)
{
  int result; // eax
  int Count; // ecx
  int v5; // ecx

    v3 = (*(int (**)(int *, int))(*(char *)this + 64))(this, a2);
    if ( v3 >= v4 )
  {
    IDA_LOBYTE(result) = 0; /*0x6ce30b*/
  }
  else
  {
    v5 = Count - 1; /*0x6ce2eb*/
      for ( *((unsigned int *)this + 16) = v5; v3 < *((unsigned int *)this + 16); *(unsigned int *)(*((unsigned int *)this + 4) + 4 * v3 - 4) = *(unsigned int *)(*((unsigned int *)this + 4) + 4 * v3) )
          result < this->Count;
          *(unsigned int *)(this->Items + 4 * result - 4) = *(unsigned int *)(this->Items + 4 * result) )
    {
      ++result; /*0x6ce2f6*/
    }
    IDA_LOBYTE(result) = 1; /*0x6ce305*/
  }
  return result; /*0x6ce307*/
}
// 0x6DC4E0
namespace gamemd {
void VectorClass_UDirtyAreaStruct::Destroy()
{
  void *Items; // eax

  Items = *(unsigned int *)&this->Items; /*0x6dc4e6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(Items); /*0x6dc4f6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x6DC510
namespace gamemd {
unsigned int VectorClass_UDirtyAreaStruct::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (a2 - *((unsigned int *)this + 16)) / 0x14u;
  else
    return 0; /*0x6dc517*/
}
} // namespace gamemd

// 0x6DC540
namespace gamemd {
int VectorClass_UDirtyAreaStruct::Clear(int a2, int a3)
{
  int v3; // ecx

    v3 = *((unsigned int *)this + 4) + 20 * a3;
  *(unsigned int *)a2 = *(unsigned int *)v3; /*0x6dc559*/
  *(unsigned int *)(a2 + 4) = *(unsigned int *)(v3 + 4); /*0x6dc55e*/
  *(unsigned int *)(a2 + 8) = *(unsigned int *)(v3 + 8); /*0x6dc564*/
  *(unsigned int *)(a2 + 12) = *(unsigned int *)(v3 + 12); /*0x6dc56b*/
  *(unsigned char *)(a2 + 16) = *(unsigned char *)(v3 + 16); /*0x6dc571*/
  return a2; /*0x6dc567*/
}
} // namespace gamemd

// 0x6DC580
namespace gamemd {
void VectorClass_UDirtyAreaStruct::Destroy_0()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x6dc586*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x6dc596*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x6DC5B0
namespace gamemd {
unsigned int VectorClass_UDirtyAreaStruct::GetItemIndex_0(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x6dc5b7*/
}
} // namespace gamemd

// 0x6DC5D0
namespace gamemd {
int VectorClass_UDirtyAreaStruct___16::Clear(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x6DC5E0
namespace gamemd {
char VectorClass_UDirtyAreaStruct::AddRef(int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // ebp

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x6dc5f0*/
  {
    v3 = 0; /*0x6dc5f2*/
    if ( m_8 <= 0 ) /*0x6dc5f6*/
      return 1; /*0x6dc646*/
    v4 = *(unsigned int *)(a2 + 4); /*0x6dc5f8*/
        v5 = *((unsigned int *)this + 4);
    v6 = v4 + 4; /*0x6dc600*/
    v7 = v4 - v5; /*0x6dc603*/
    while ( *(unsigned char *)(v5 + 16) == *(unsigned char *)(v6 + 12) /*0x6dc633*/
         && *(unsigned int *)v5 == *(unsigned int *)(v5 + v7)
         && *(unsigned int *)(v5 + 4) == *(unsigned int *)v6
         && *(unsigned int *)(v5 + 8) == *(unsigned int *)(v6 + 4)
         && *(unsigned int *)(v5 + 12) == *(unsigned int *)(v6 + 8) )
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
} // namespace gamemd

// 0x6DC660
namespace gamemd {
char VectorClass_UDirtyAreaStruct::Release(int a2, char * a3)
{
  int v3; // esi
  char *v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // edx
  int v13; // eax
  const void *v14; // esi
  char *v15; // edi
  char *v16; // [esp+10h] [ebp-4h]

  v3 = a2; /*0x6dc664*/
  if ( a2 ) /*0x6dc66f*/
  {
    v5 = a3; /*0x6dc675*/
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x6dc67e*/
    {
      if ( a2 - 1 >= 0 ) /*0x6dc6c3*/
      {
        v9 = a3 + 8; /*0x6dc6c5*/
        v10 = a2; /*0x6dc6c8*/
        do /*0x6dc6db*/
        {
          *((unsigned int *)v9 - 2) = 0; /*0x6dc6c9*/
          *((unsigned int *)v9 - 1) = 0; /*0x6dc6cc*/
          *(unsigned int *)v9 = 0; /*0x6dc6cf*/
          *((unsigned int *)v9 + 1) = 0; /*0x6dc6d1*/
          v9[8] = 0; /*0x6dc6d4*/
          v9 += 20; /*0x6dc6d7*/
          --v10; /*0x6dc6da*/
        }
        while ( v10 ); /*0x6dc6db*/
      }
      v16 = a3; /*0x6dc6dd*/
    }
    else
    {
      v6 = RA2_OPNEW(20 * a2); /*0x6dc687*/
      if ( v6 ) /*0x6dc691*/
      {
        if ( a2 - 1 >= 0 ) /*0x6dc698*/
        {
          v7 = v6 + 8; /*0x6dc69a*/
          v8 = a2; /*0x6dc69d*/
          do /*0x6dc6b0*/
          {
            *(unsigned int *)(v7 - 8) = 0; /*0x6dc69e*/
            *(unsigned int *)(v7 - 4) = 0; /*0x6dc6a1*/
            *(unsigned int *)v7 = 0; /*0x6dc6a4*/
            *(unsigned int *)(v7 + 4) = 0; /*0x6dc6a6*/
            *(unsigned char *)(v7 + 8) = 0; /*0x6dc6a9*/
            v7 += 20; /*0x6dc6ac*/
            --v8; /*0x6dc6af*/
          }
          while ( v8 ); /*0x6dc6b0*/
        }
        v16 = (char *)v6; /*0x6dc6b2*/
      }
      else
      {
        v16 = 0; /*0x6dc6b8*/
      }
    }
        *((unsigned char *)this + 12) = 1;
    if ( v16 ) /*0x6dc6eb*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v12 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x6dc701*/
          m_8 = a2; /*0x6dc703*/
        if ( m_8 > 0 ) /*0x6dc707*/
        {
          v13 = 0; /*0x6dc709*/
          do /*0x6dc724*/
          {
                        v14 = (const void *)(*((unsigned int *)this + 1) + v13);
            v15 = &v16[v13]; /*0x6dc716*/
            v13 += 20; /*0x6dc71e*/
            --m_8; /*0x6dc721*/
            qmemcpy(v15, v14, 0x14u); /*0x6dc722*/
          }
          while ( m_8 ); /*0x6dc724*/
          v5 = a3; /*0x6dc726*/
          v3 = a2; /*0x6dc72a*/
        }
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x6dc737*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 2) = v3;
            *((unsigned int *)this + 1) = v16;
            *((unsigned char *)this + 13) = v5 == 0;
      return 1; /*0x6dc759*/
    }
    else
    {
      return 0; /*0x6dc6f0*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x6dc76b*/
  }
}
} // namespace gamemd

// 0x6DC780
namespace gamemd {
void VectorClass_UDirtyAreaStruct::ddtor()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x6dc793*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x6DC7B0
namespace gamemd {
int VectorClass_UDirtyAreaStruct::GetSize(int a2)
{
  int m_8; // edi
  int v4; // esi
  int i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x6dc7be*/
    v3 = *((unsigned int *)this + 32);
  v4 = 0; /*0x6dc7c7*/
  if ( m_8 <= 0 ) /*0x6dc7cb*/
    return -1; /*0x6dc815*/
    for ( i = *((unsigned int *)this + 16);
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
} // namespace gamemd

// 0x6DC820
namespace gamemd {
unsigned int VectorClass_UDirtyAreaStruct::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (a2 - *((unsigned int *)this + 16)) / 0x14u;
  else
    return 0; /*0x6dc827*/
}
} // namespace gamemd

// 0x6DC970
namespace gamemd {
int VectorClass_UDirtyAreaStruct::FindItemIndex(int a2)
{
  void *Count; // edi
  int v3; // esi
  char *i; // ecx

    v2 = *((unsigned int *)this + 16);
  v3 = 0; /*0x6dc977*/
  if ( (int)Count <= 0 ) /*0x6dc97b*/
    return -1; /*0x6dc9c5*/
    for ( i = *((unsigned int *)this + 4);
        i[16] != *(unsigned char *)(a2 + 16)
     || *(unsigned int *)i != *(unsigned int *)a2
     || *((unsigned int *)i + 1) != *(unsigned int *)(a2 + 4)
     || *((unsigned int *)i + 2) != *(unsigned int *)(a2 + 8)
     || *((unsigned int *)i + 3) != *(unsigned int *)(a2 + 12);
        i += 20 )
  {
    if ( ++v3 >= (int)Count ) /*0x6dc9b8*/
      return -1; /*0x6dc9b8*/
  }
  return v3; /*0x6dc9be*/
}
} // namespace gamemd

// 0x6DC9D0
namespace gamemd {
char VectorClass_UDirtyAreaStruct___16::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x6dc9dd*/
  {
    v3 = 0; /*0x6dc9df*/
    if ( m_8 <= 0 ) /*0x6dc9e3*/
      return 1; /*0x6dca03*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x6dc9eb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x6dc9f4*/
    {
      ++v3; /*0x6dc9f6*/
      ++v4; /*0x6dc9f7*/
      if ( v3 >= m_8 ) /*0x6dc9fc*/
        return 1; /*0x6dc9fc*/
    }
  }
  return 0; /*0x6dc9fe*/
}
} // namespace gamemd

// 0x6DCA10
namespace gamemd {
char VectorClass_UDirtyAreaStruct___16::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x6dca1c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x6dca2c*/
      v4 = a3; /*0x6dca42*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x6dca3e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x6dca4a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x6dca61*/
          m_8 = a2; /*0x6dca63*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x6dca6e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->ptr_4); /*0x6dca86*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x6dcaa8*/
    }
    else
    {
      return 0; /*0x6dca4f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x6dcab8*/
  }
}
} // namespace gamemd

// 0x6DCAC0
namespace gamemd {
void VectorClass_UDirtyAreaStruct___16::ddtor()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->ptr_4); /*0x6dcad3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x6DCAF0
namespace gamemd {
int VectorClass_UDirtyAreaStruct___16::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x6dcaf8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x6dcb01*/
  if ( m_8 <= 0 ) /*0x6dcb05*/
    return -1; /*0x6dcb1c*/
  for ( i = *(unsigned int **)&this->ptr_4; *i != *a2; ++i ) /*0x6dcb0b*/
  {
    if ( ++result >= m_8 ) /*0x6dcb1a*/
      return -1; /*0x6dcb1a*/
  }
  return result; /*0x6dcafa*/
}
} // namespace gamemd

// 0x6DCB30
namespace gamemd {
unsigned int VectorClass_UDirtyAreaStruct___16::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x6dcb37*/
}
} // namespace gamemd

// 0x6DCB50
namespace gamemd {
char VectorClass_UDirtyAreaStruct::SetCapacity_0(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6dcb5c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x6dcb68*/
      v4 = a3; /*0x6dcb7e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x6dcb7a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x6dcb86*/
      return 0; /*0x6dcbfa*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x6dcb94*/
        m_8 = a2; /*0x6dcb96*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x6dcba1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x6dcbb9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x6dcbee*/
}
} // namespace gamemd

// 0x6DCC00
namespace gamemd {
int VectorClass_UDirtyAreaStruct::FindItemIndex_0(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x6dcc03*/
  if ( m_10 <= 0 ) /*0x6dcc08*/
    return -1; /*0x6dcc1f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x6dcc1d*/
      return -1; /*0x6dcc1d*/
  }
  return result; /*0x6dcc22*/
}
} // namespace gamemd

// 0x6DCC30
namespace gamemd {
VectorClass_flat * VectorClass_UDirtyAreaStruct::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_DirtyAreaStruct;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x6dcc48*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x6dcc68*/
    RA2_OPDEL(Block); /*0x6dcc6b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x6DCC80
namespace gamemd {
unsigned int * VectorClass_UDirtyAreaStruct::loc_6DCC80(unsigned int * Block, char a2)
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_DirtyAreaStruct;
    if ( v3 && *((char*)(Block) + 13) )
  {
    RA2_OPDEL(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    RA2_OPDEL(Block);
    return Block;
}
} // namespace gamemd

// 0x6DCCD0
namespace gamemd {
VectorClass_flat * VectorClass_UDirtyAreaStruct___16::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_ShadowControlClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x6dcce8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x6dcd08*/
    RA2_OPDEL(Block); /*0x6dcd0b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x6DCD20
namespace gamemd {
DynamicVector * VectorClass_UDirtyAreaStruct::Constructor_VectorClass_ShadowControlClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_ShadowControlClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x6dcd38*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x6dcd58*/
    RA2_OPDEL(); /*0x6dcd5b*/
  return this; /*0x6dcd65*/
}
} // namespace gamemd

// 0x6E64E0
namespace gamemd {
void VectorClass_ptr_TagTypeClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x6e64e6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x6e64f6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x6E6510
namespace gamemd {
unsigned int VectorClass_ptr_TagTypeClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x6e6517*/
}
} // namespace gamemd

// 0x6E6530
namespace gamemd {
int VectorClass_ptr_TagTypeClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x6E6540
namespace gamemd {
char VectorClass_ptr_TagTypeClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x6e654d*/
  {
    v3 = 0; /*0x6e654f*/
    if ( m_8 <= 0 ) /*0x6e6553*/
      return 1; /*0x6e6573*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x6e655b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x6e6564*/
    {
      ++v3; /*0x6e6566*/
      ++v4; /*0x6e6567*/
      if ( v3 >= m_8 ) /*0x6e656c*/
        return 1; /*0x6e656c*/
    }
  }
  return 0; /*0x6e656e*/
}
} // namespace gamemd

// 0x6E6580
namespace gamemd {
char VectorClass_ptr_TagTypeClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x6e658c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x6e659c*/
      v4 = a3; /*0x6e65b2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x6e65ae*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x6e65ba*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x6e65d1*/
          m_8 = a2; /*0x6e65d3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x6e65de*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x6e65f6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x6e6618*/
    }
    else
    {
      return 0; /*0x6e65bf*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x6e6628*/
  }
}
} // namespace gamemd

// 0x6E6630
namespace gamemd {
void VectorClass_ptr_TagTypeClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x6e6643*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x6E6660
namespace gamemd {
int VectorClass_ptr_TagTypeClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x6e6668*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x6e6671*/
  if ( m_8 <= 0 ) /*0x6e6675*/
    return -1; /*0x6e668c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x6e667b*/
  {
    if ( ++result >= m_8 ) /*0x6e668a*/
      return -1; /*0x6e668a*/
  }
  return result; /*0x6e666a*/
}
} // namespace gamemd

// 0x6E66A0
namespace gamemd {
unsigned int VectorClass_ptr_TagTypeClass::LoadTypeData(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x6e66a7*/
}
} // namespace gamemd

// 0x6E66C0
namespace gamemd {
char VectorClass_ptr_TagTypeClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6e66cc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x6e66d8*/
      v4 = a3; /*0x6e66ee*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x6e66ea*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x6e66f6*/
      return 0; /*0x6e676a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x6e6704*/
        m_8 = a2; /*0x6e6706*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x6e6711*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x6e6729*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x6e675e*/
}
} // namespace gamemd

// 0x6E6770
namespace gamemd {
int VectorClass_ptr_TagTypeClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x6e6773*/
  if ( m_10 <= 0 ) /*0x6e6778*/
    return -1; /*0x6e678f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x6e678d*/
      return -1; /*0x6e678d*/
  }
  return result; /*0x6e6792*/
}
} // namespace gamemd

// 0x6E67A0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_TagTypeClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_TagTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x6e67b8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x6e67d8*/
    RA2_OPDEL(Block); /*0x6e67db*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x6E67F0
namespace gamemd {
DynamicVector * VectorClass_ptr_TagTypeClass::Constructor_VectorClass_TagTypeClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_TagTypeClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x6e6808*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x6e6828*/
    RA2_OPDEL(Block); /*0x6e682b*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x717D20
unsigned int * VectorClass_flat::CopyParticle(DynamicVector * aP1)
{
  int v3; // eax
  int v4; // eax
  int Capacity; // ecx
  int v6; // eax

    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = 0;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
    *this = &vt_VectorClass_ParticleSystemTypeClass_const;
  if ( this != (DynamicVectorClass *)aP1 ) /*0x717d40*/
  {
    VectorClass::Cleanup(); /*0x717d42*/
    v3 = aP1[2]; /*0x717d48*/
        *((unsigned int *)this + 8) = v3;
    if ( v3 ) /*0x717d50*/
    {
      v4 = RA2_OPNEW(4 * v3); /*0x717d56*/
            *((unsigned int *)this + 4) = v4;
      if ( v4 ) /*0x717d63*/
      {
                v5 = *((unsigned int *)this + 8);
        v6 = 0; /*0x717d68*/
                *((unsigned char *)this + 13) = 1;
        if ( Capacity > 0 ) /*0x717d70*/
        {
          do /*0x717d84*/
          {
                        *(unsigned int *)(*((unsigned int *)this + 4) + 4 * v6) = *(unsigned int *)(*(unsigned int *)&aP1->field_1[3] + 4 * v6);
            ++v6; /*0x717d81*/
          }
          while ( v6 < this->Capacity ); /*0x717d84*/
        }
      }
    }
    else
    {
            *((unsigned int *)this + 4) = 0;
            *((unsigned char *)this + 13) = 0;
    }
  }
    *((unsigned int *)this + 16) = aP1->field_10;
    *((unsigned int *)this + 20) = *(unsigned int *)aP1->__pad_14;
  this->vtable0 = (int)&TypeList_ParticleSystemTypeClass_const___vftable; /*0x717d9a*/
  return &this->vtable0; /*0x717da2*/
}
// 0x71B240
namespace gamemd {
void VectorClass_ptr_TemporalClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x71b246*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x71b256*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x71B270
namespace gamemd {
unsigned int VectorClass_ptr_TemporalClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x71b277*/
}
} // namespace gamemd

// 0x71B290
namespace gamemd {
int VectorClass_ptr_TemporalClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x71B2A0
namespace gamemd {
char VectorClass_ptr_TemporalClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x71b2ad*/
  {
    v3 = 0; /*0x71b2af*/
    if ( m_8 <= 0 ) /*0x71b2b3*/
      return 1; /*0x71b2d3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x71b2bb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x71b2c4*/
    {
      ++v3; /*0x71b2c6*/
      ++v4; /*0x71b2c7*/
      if ( v3 >= m_8 ) /*0x71b2cc*/
        return 1; /*0x71b2cc*/
    }
  }
  return 0; /*0x71b2ce*/
}
} // namespace gamemd

// 0x71B2E0
namespace gamemd {
char VectorClass_ptr_TemporalClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x71b2ec*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x71b2fc*/
      v4 = a3; /*0x71b312*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x71b30e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x71b31a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x71b331*/
          m_8 = a2; /*0x71b333*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x71b33e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x71b356*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x71b378*/
    }
    else
    {
      return 0; /*0x71b31f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x71b388*/
  }
}
} // namespace gamemd

// 0x71B390
namespace gamemd {
void VectorClass_ptr_TemporalClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x71b3a3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x71B3C0
namespace gamemd {
int VectorClass_ptr_TemporalClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x71b3c8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x71b3d1*/
  if ( m_8 <= 0 ) /*0x71b3d5*/
    return -1; /*0x71b3ec*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x71b3db*/
  {
    if ( ++result >= m_8 ) /*0x71b3ea*/
      return -1; /*0x71b3ea*/
  }
  return result; /*0x71b3ca*/
}
} // namespace gamemd

// 0x71B400
namespace gamemd {
unsigned int VectorClass_ptr_TemporalClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x71b407*/
}
} // namespace gamemd

// 0x71B420
namespace gamemd {
char VectorClass_ptr_TemporalClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x71b42c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x71b438*/
      v4 = a3; /*0x71b44e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x71b44a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x71b456*/
      return 0; /*0x71b4ca*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x71b464*/
        m_8 = a2; /*0x71b466*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x71b471*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x71b489*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x71b4be*/
}
} // namespace gamemd

// 0x71B4D0
namespace gamemd {
int VectorClass_ptr_TemporalClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x71b4d3*/
  if ( m_10 <= 0 ) /*0x71b4d8*/
    return -1; /*0x71b4ef*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x71b4ed*/
      return -1; /*0x71b4ed*/
  }
  return result; /*0x71b4f2*/
}
} // namespace gamemd

// 0x71B500
namespace gamemd {
VectorClass_flat * VectorClass_ptr_TemporalClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_TemporalClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x71b518*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x71b538*/
    RA2_OPDEL(Block); /*0x71b53b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x71B550
namespace gamemd {
DynamicVector * VectorClass_ptr_TemporalClass::Constructor_VectorClass_TemporalClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_TemporalClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x71b568*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x71b588*/
    RA2_OPDEL(); /*0x71b58b*/
  return this; /*0x71b595*/
}
} // namespace gamemd

// 0x71FBA0
namespace gamemd {
void VectorClass_ptr_TEventClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x71fba6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x71fbb6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x71FBD0
namespace gamemd {
unsigned int VectorClass_ptr_TEventClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x71fbd7*/
}
} // namespace gamemd

// 0x71FBF0
namespace gamemd {
int VectorClass_ptr_TEventClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x71FC00
namespace gamemd {
char VectorClass_ptr_TEventClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x71fc0d*/
  {
    v3 = 0; /*0x71fc0f*/
    if ( m_8 <= 0 ) /*0x71fc13*/
      return 1; /*0x71fc33*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x71fc1b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x71fc24*/
    {
      ++v3; /*0x71fc26*/
      ++v4; /*0x71fc27*/
      if ( v3 >= m_8 ) /*0x71fc2c*/
        return 1; /*0x71fc2c*/
    }
  }
  return 0; /*0x71fc2e*/
}
} // namespace gamemd

// 0x71FC40
namespace gamemd {
char VectorClass_ptr_TEventClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x71fc4c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x71fc5c*/
      v4 = a3; /*0x71fc72*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x71fc6e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x71fc7a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x71fc91*/
          m_8 = a2; /*0x71fc93*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x71fc9e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x71fcb6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x71fcd8*/
    }
    else
    {
      return 0; /*0x71fc7f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x71fce8*/
  }
}
} // namespace gamemd

// 0x71FCF0
namespace gamemd {
void VectorClass_ptr_TEventClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x71fd03*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x71FD20
namespace gamemd {
int VectorClass_ptr_TEventClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x71fd28*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x71fd31*/
  if ( m_8 <= 0 ) /*0x71fd35*/
    return -1; /*0x71fd4c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x71fd3b*/
  {
    if ( ++result >= m_8 ) /*0x71fd4a*/
      return -1; /*0x71fd4a*/
  }
  return result; /*0x71fd2a*/
}
} // namespace gamemd

// 0x71FD60
namespace gamemd {
unsigned int VectorClass_ptr_TEventClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x71fd67*/
}
} // namespace gamemd

// 0x71FD80
namespace gamemd {
char VectorClass_ptr_TEventClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x71fd8c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x71fd98*/
      v4 = a3; /*0x71fdae*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x71fdaa*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x71fdb6*/
      return 0; /*0x71fe2a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x71fdc4*/
        m_8 = a2; /*0x71fdc6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x71fdd1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x71fde9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x71fe1e*/
}
} // namespace gamemd

// 0x71FE30
namespace gamemd {
int VectorClass_ptr_TEventClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x71fe33*/
  if ( m_10 <= 0 ) /*0x71fe38*/
    return -1; /*0x71fe4f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x71fe4d*/
      return -1; /*0x71fe4d*/
  }
  return result; /*0x71fe52*/
}
} // namespace gamemd

// 0x71FE60
namespace gamemd {
VectorClass_flat * VectorClass_ptr_TEventClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_TEventClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x71fe78*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x71fe98*/
    RA2_OPDEL(Block); /*0x71fe9b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x71FEB0
namespace gamemd {
DynamicVector * VectorClass_ptr_TEventClass::Constructor_VectorClass_TEventClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_TEventClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x71fec8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x71fee8*/
    RA2_OPDEL(Block); /*0x71feeb*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x7212B0
namespace gamemd {
void VectorClass_ptr_ThemeControl::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x7212b6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x7212c6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x7212E0
namespace gamemd {
unsigned int VectorClass_ptr_ThemeControl::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x7212e7*/
}
} // namespace gamemd

// 0x721300
namespace gamemd {
char VectorClass_ptr_ThemeControl::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x72130c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x721318*/
      v4 = a3; /*0x72132e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x72132a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x721336*/
      return 0; /*0x7213aa*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x721344*/
        m_8 = a2; /*0x721346*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x721351*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x721369*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x72139e*/
}
} // namespace gamemd

// 0x7213B0
namespace gamemd {
int VectorClass_ptr_ThemeControl::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x7213b3*/
  if ( m_10 <= 0 ) /*0x7213b8*/
    return -1; /*0x7213cf*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x7213cd*/
      return -1; /*0x7213cd*/
  }
  return result; /*0x7213d2*/
}
} // namespace gamemd

// 0x7213E0
namespace gamemd {
DynamicVector * VectorClass_ptr_ThemeControl::Constructor_VectorClass_ThemeControl___(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_ThemeControl;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x7213f8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x721418*/
    RA2_OPDEL(Block); /*0x72141b*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x723730
namespace gamemd {
void VectorClass_ptr_TiberiumClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x723736*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x723746*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x723760
namespace gamemd {
unsigned int VectorClass_ptr_TiberiumClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x723767*/
}
} // namespace gamemd

// 0x723780
namespace gamemd {
int VectorClass_ptr_TiberiumClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x723790
namespace gamemd {
char VectorClass_ptr_TiberiumClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x72379d*/
  {
    v3 = 0; /*0x72379f*/
    if ( m_8 <= 0 ) /*0x7237a3*/
      return 1; /*0x7237c3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x7237ab*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x7237b4*/
    {
      ++v3; /*0x7237b6*/
      ++v4; /*0x7237b7*/
      if ( v3 >= m_8 ) /*0x7237bc*/
        return 1; /*0x7237bc*/
    }
  }
  return 0; /*0x7237be*/
}
} // namespace gamemd

// 0x7237D0
namespace gamemd {
char VectorClass_ptr_TiberiumClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x7237dc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x7237ec*/
      v4 = a3; /*0x723802*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x7237fe*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x72380a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x723821*/
          m_8 = a2; /*0x723823*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x72382e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x723846*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x723868*/
    }
    else
    {
      return 0; /*0x72380f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x723878*/
  }
}
} // namespace gamemd

// 0x723880
namespace gamemd {
void VectorClass_ptr_TiberiumClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x723893*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x7238B0
namespace gamemd {
int VectorClass_ptr_TiberiumClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x7238b8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x7238c1*/
  if ( m_8 <= 0 ) /*0x7238c5*/
    return -1; /*0x7238dc*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x7238cb*/
  {
    if ( ++result >= m_8 ) /*0x7238da*/
      return -1; /*0x7238da*/
  }
  return result; /*0x7238ba*/
}
} // namespace gamemd

// 0x7238F0
namespace gamemd {
unsigned int VectorClass_ptr_TiberiumClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x7238f7*/
}
} // namespace gamemd

// 0x723910
namespace gamemd {
char VectorClass_ptr_TiberiumClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x72391c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x723928*/
      v4 = a3; /*0x72393e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x72393a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x723946*/
      return 0; /*0x7239ba*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x723954*/
        m_8 = a2; /*0x723956*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x723961*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x723979*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x7239ae*/
}
} // namespace gamemd

// 0x7239C0
namespace gamemd {
int VectorClass_ptr_TiberiumClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x7239c3*/
  if ( m_10 <= 0 ) /*0x7239c8*/
    return -1; /*0x7239df*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x7239dd*/
      return -1; /*0x7239dd*/
  }
  return result; /*0x7239e2*/
}
} // namespace gamemd

// 0x7239F0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_TiberiumClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_TiberiumClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x723a08*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x723a28*/
    RA2_OPDEL(Block); /*0x723a2b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x723A40
namespace gamemd {
DynamicVector * VectorClass_ptr_TiberiumClass::Constructor_VectorClass_TiberiumClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_TiberiumClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x723a58*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x723a78*/
    RA2_OPDEL(); /*0x723a7b*/
  return this; /*0x723a85*/
}
} // namespace gamemd

// 0x74BF90
namespace gamemd {
char VectorClass_E::Clear(int a2)
{
    return *(unsigned char *)(*((unsigned int *)this + 4) + a2);
}
} // namespace gamemd

// 0x74BFA0
namespace gamemd {
VectorClass_flat * VectorClass_E::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_unsigned_char_7F65F4;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x74bfb8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x74bfd8*/
    RA2_OPDEL(Block); /*0x74bfdb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x74BFF0
namespace gamemd {
char VectorClass_E::AddRef(int a2)
{
  int m_8; // edi
  int v3; // eax

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x74bfff*/
  {
    v3 = 0; /*0x74c001*/
    if ( m_8 <= 0 ) /*0x74c005*/
      return 1; /*0x74c021*/
        while ( *(unsigned char *)(*((unsigned int *)this + 4) + v3) == *(unsigned char *)(*(unsigned int *)(a2 + 4) + v3) )
    {
      if ( ++v3 >= m_8 ) /*0x74c01a*/
        return 1; /*0x74c01a*/
    }
  }
  return 0; /*0x74c01c*/
}
} // namespace gamemd

// 0x74C030
namespace gamemd {
char VectorClass_E::Release(signed int Size, char * a3)
{
  char *v4; // edi
  signed int m_8; // ecx
  signed int i; // eax

  if ( Size ) /*0x74c03c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x74c04c*/
      v4 = a3; /*0x74c05b*/
    else
      v4 = (char *)RA2_OPNEW(Size); /*0x74c057*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x74c063*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( Size < m_8 ) /*0x74c07a*/
          m_8 = Size; /*0x74c07c*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned char *)(*((unsigned int *)this + 1) + i - 1) )
          ++i; /*0x74c087*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x74c09f*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = Size;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x74c0c1*/
    }
    else
    {
      return 0; /*0x74c068*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x74c0d1*/
  }
}
} // namespace gamemd

// 0x74C0E0
namespace gamemd {
void VectorClass_E::ddtor()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x74c0f3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x74C110
namespace gamemd {
int VectorClass_E::GetSize(unsigned char * a2)
{
  int result; // eax
  int m_8; // esi
  int v4; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x74c119*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x74c121*/
  if ( m_8 <= 0 ) /*0x74c125*/
    return -1; /*0x74c13a*/
    v4 = *((unsigned int *)this + 16);
  while ( *(unsigned char *)(v4 + result) != *a2 ) /*0x74c133*/
  {
    if ( ++result >= m_8 ) /*0x74c138*/
      return -1; /*0x74c138*/
  }
  return result; /*0x74c118*/
}
} // namespace gamemd

// 0x74C150
namespace gamemd {
int VectorClass_E::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return a2 - *((unsigned int *)this + 16);
  else
    return 0; /*0x74c157*/
}
} // namespace gamemd

// 0x7518D0
namespace gamemd {
void VectorClass_ptr_VocClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x7518d6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x7518e6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x751900
namespace gamemd {
unsigned int VectorClass_ptr_VocClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x751907*/
}
} // namespace gamemd

// 0x751920
namespace gamemd {
int VectorClass_ptr_VocClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x751930
namespace gamemd {
char VectorClass_ptr_VocClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x75193d*/
  {
    v3 = 0; /*0x75193f*/
    if ( m_8 <= 0 ) /*0x751943*/
      return 1; /*0x751963*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x75194b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x751954*/
    {
      ++v3; /*0x751956*/
      ++v4; /*0x751957*/
      if ( v3 >= m_8 ) /*0x75195c*/
        return 1; /*0x75195c*/
    }
  }
  return 0; /*0x75195e*/
}
} // namespace gamemd

// 0x751970
namespace gamemd {
char VectorClass_ptr_VocClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x75197c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x75198c*/
      v4 = a3; /*0x7519a2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x75199e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x7519aa*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x7519c1*/
          m_8 = a2; /*0x7519c3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x7519ce*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x7519e6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x751a08*/
    }
    else
    {
      return 0; /*0x7519af*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x751a18*/
  }
}
} // namespace gamemd

// 0x751A20
namespace gamemd {
void VectorClass_ptr_VocClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x751a33*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x751A50
namespace gamemd {
int VectorClass_ptr_VocClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x751a58*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x751a61*/
  if ( m_8 <= 0 ) /*0x751a65*/
    return -1; /*0x751a7c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x751a6b*/
  {
    if ( ++result >= m_8 ) /*0x751a7a*/
      return -1; /*0x751a7a*/
  }
  return result; /*0x751a5a*/
}
} // namespace gamemd

// 0x751A90
namespace gamemd {
unsigned int VectorClass_ptr_VocClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x751a97*/
}
} // namespace gamemd

// 0x751AB0
namespace gamemd {
char VectorClass_ptr_VocClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x751abc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x751ac8*/
      v4 = a3; /*0x751ade*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x751ada*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x751ae6*/
      return 0; /*0x751b5a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x751af4*/
        m_8 = a2; /*0x751af6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x751b01*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x751b19*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x751b4e*/
}
} // namespace gamemd

// 0x751B60
namespace gamemd {
int VectorClass_ptr_VocClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x751b63*/
  if ( m_10 <= 0 ) /*0x751b68*/
    return -1; /*0x751b7f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x751b7d*/
      return -1; /*0x751b7d*/
  }
  return result; /*0x751b82*/
}
} // namespace gamemd

// 0x751B90
namespace gamemd {
VectorClass_flat * VectorClass_ptr_VocClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_VocClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x751ba8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x751bc8*/
    RA2_OPDEL(Block); /*0x751bcb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x751BE0
namespace gamemd {
DynamicVector * VectorClass_ptr_VocClass::Constructor_VectorClass_VocClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_VocClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x751bf8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x751c18*/
    RA2_OPDEL(Block); /*0x751c1b*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x7536A0
namespace gamemd {
int VectorClass_ptr_VoxClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x7536B0
namespace gamemd {
char VectorClass_ptr_VoxClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x7536bd*/
  {
    v3 = 0; /*0x7536bf*/
    if ( m_8 <= 0 ) /*0x7536c3*/
      return 1; /*0x7536e3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x7536cb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x7536d4*/
    {
      ++v3; /*0x7536d6*/
      ++v4; /*0x7536d7*/
      if ( v3 >= m_8 ) /*0x7536dc*/
        return 1; /*0x7536dc*/
    }
  }
  return 0; /*0x7536de*/
}
} // namespace gamemd

// 0x7536F0
namespace gamemd {
char VectorClass_ptr_VoxClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x7536fc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x75370c*/
      v4 = a3; /*0x753722*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x75371e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x75372a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x753741*/
          m_8 = a2; /*0x753743*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x75374e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x753766*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x753788*/
    }
    else
    {
      return 0; /*0x75372f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x753798*/
  }
}
} // namespace gamemd

// 0x7537A0
namespace gamemd {
void VectorClass_ptr_VoxClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x7537b3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x7537D0
namespace gamemd {
int VectorClass_ptr_VoxClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x7537d8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x7537e1*/
  if ( m_8 <= 0 ) /*0x7537e5*/
    return -1; /*0x7537fc*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x7537eb*/
  {
    if ( ++result >= m_8 ) /*0x7537fa*/
      return -1; /*0x7537fa*/
  }
  return result; /*0x7537da*/
}
} // namespace gamemd

// 0x753810
namespace gamemd {
unsigned int VectorClass_ptr_VoxClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x753817*/
}
} // namespace gamemd

// 0x753910
namespace gamemd {
VectorClass_flat * VectorClass_ptr_VoxClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_VoxClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x753928*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x753948*/
    RA2_OPDEL(Block); /*0x75394b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x75A430
namespace gamemd {
void VectorClass_ptr_MovieHandle::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x75a436*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x75a446*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x75A460
namespace gamemd {
unsigned int VectorClass_ptr_MovieHandle::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x75a467*/
}
} // namespace gamemd

// 0x75A480
namespace gamemd {
int VectorClass_ptr_MovieHandle::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x75A490
namespace gamemd {
char VectorClass_ptr_MovieHandle::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x75a49d*/
  {
    v3 = 0; /*0x75a49f*/
    if ( m_8 <= 0 ) /*0x75a4a3*/
      return 1; /*0x75a4c3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x75a4ab*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x75a4b4*/
    {
      ++v3; /*0x75a4b6*/
      ++v4; /*0x75a4b7*/
      if ( v3 >= m_8 ) /*0x75a4bc*/
        return 1; /*0x75a4bc*/
    }
  }
  return 0; /*0x75a4be*/
}
} // namespace gamemd

// 0x75A4D0
namespace gamemd {
char VectorClass_ptr_MovieHandle::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x75a4dc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x75a4ec*/
      v4 = a3; /*0x75a502*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x75a4fe*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x75a50a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x75a521*/
          m_8 = a2; /*0x75a523*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x75a52e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x75a546*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x75a568*/
    }
    else
    {
      return 0; /*0x75a50f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x75a578*/
  }
}
} // namespace gamemd

// 0x75A580
namespace gamemd {
void VectorClass_ptr_MovieHandle::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x75a593*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x75A5B0
namespace gamemd {
int VectorClass_ptr_MovieHandle::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x75a5b8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x75a5c1*/
  if ( m_8 <= 0 ) /*0x75a5c5*/
    return -1; /*0x75a5dc*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x75a5cb*/
  {
    if ( ++result >= m_8 ) /*0x75a5da*/
      return -1; /*0x75a5da*/
  }
  return result; /*0x75a5ba*/
}
} // namespace gamemd

// 0x75A5F0
namespace gamemd {
unsigned int VectorClass_ptr_MovieHandle::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x75a5f7*/
}
} // namespace gamemd

// 0x75A610
namespace gamemd {
char VectorClass_ptr_MovieHandle::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x75a61c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x75a628*/
      v4 = a3; /*0x75a63e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x75a63a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x75a646*/
      return 0; /*0x75a6ba*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x75a654*/
        m_8 = a2; /*0x75a656*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x75a661*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x75a679*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x75a6ae*/
}
} // namespace gamemd

// 0x75A6C0
namespace gamemd {
int VectorClass_ptr_MovieHandle::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x75a6c3*/
  if ( m_10 <= 0 ) /*0x75a6c8*/
    return -1; /*0x75a6df*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x75a6dd*/
      return -1; /*0x75a6dd*/
  }
  return result; /*0x75a6e2*/
}
} // namespace gamemd

// 0x75A6F0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_MovieHandle::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_MovieHandle;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x75a708*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x75a728*/
    RA2_OPDEL(Block); /*0x75a72b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x75A740
namespace gamemd {
DynamicVector * VectorClass_ptr_MovieHandle::Constructor_VectorClass_MovieHandle___(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_MovieHandle;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x75a758*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x75a778*/
    RA2_OPDEL(Block); /*0x75a77b*/
    return (DynamicVector *)Block;
}
} // namespace gamemd

// 0x763F90
namespace gamemd {
void VectorClass_ptr_WaypointPathClass::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x763f96*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x763fa6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x763FC0
namespace gamemd {
unsigned int VectorClass_ptr_WaypointPathClass::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x763fc7*/
}
} // namespace gamemd

// 0x763FE0
namespace gamemd {
int VectorClass_ptr_WaypointPathClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x764460
namespace gamemd {
char VectorClass_ptr_WaypointPathClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x76446d*/
  {
    v3 = 0; /*0x76446f*/
    if ( m_8 <= 0 ) /*0x764473*/
      return 1; /*0x764493*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x76447b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x764484*/
    {
      ++v3; /*0x764486*/
      ++v4; /*0x764487*/
      if ( v3 >= m_8 ) /*0x76448c*/
        return 1; /*0x76448c*/
    }
  }
  return 0; /*0x76448e*/
}
} // namespace gamemd

// 0x7644A0
namespace gamemd {
char VectorClass_ptr_WaypointPathClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x7644ac*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x7644bc*/
      v4 = a3; /*0x7644d2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x7644ce*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x7644da*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x7644f1*/
          m_8 = a2; /*0x7644f3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x7644fe*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x764516*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x764538*/
    }
    else
    {
      return 0; /*0x7644df*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x764548*/
  }
}
} // namespace gamemd

// 0x764550
namespace gamemd {
void VectorClass_ptr_WaypointPathClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x764563*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x764580
namespace gamemd {
int VectorClass_ptr_WaypointPathClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x764588*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x764591*/
  if ( m_8 <= 0 ) /*0x764595*/
    return -1; /*0x7645ac*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x76459b*/
  {
    if ( ++result >= m_8 ) /*0x7645aa*/
      return -1; /*0x7645aa*/
  }
  return result; /*0x76458a*/
}
} // namespace gamemd

// 0x7645C0
namespace gamemd {
unsigned int VectorClass_ptr_WaypointPathClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x7645c7*/
}
} // namespace gamemd

// 0x7645E0
namespace gamemd {
char VectorClass_ptr_WaypointPathClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x7645ec*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x7645f8*/
      v4 = a3; /*0x76460e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x76460a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x764616*/
      return 0; /*0x76468a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x764624*/
        m_8 = a2; /*0x764626*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x764631*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x764649*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x76467e*/
}
} // namespace gamemd

// 0x764690
namespace gamemd {
int VectorClass_ptr_WaypointPathClass::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x764693*/
  if ( m_10 <= 0 ) /*0x764698*/
    return -1; /*0x7646af*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x7646ad*/
      return -1; /*0x7646ad*/
  }
  return result; /*0x7646b2*/
}
} // namespace gamemd

// 0x7646C0
namespace gamemd {
VectorClass_flat * VectorClass_ptr_WaypointPathClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_WaypointPathClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x7646d8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x7646f8*/
    RA2_OPDEL(Block); /*0x7646fb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x764710
namespace gamemd {
DynamicVector * VectorClass_ptr_WaypointPathClass::Constructor_VectorClass_WaypointPathClass___(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_WaypointPathClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x764728*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x764748*/
    RA2_OPDEL(); /*0x76474b*/
  return this; /*0x764755*/
}
} // namespace gamemd

// 0x76B6C0
namespace gamemd {
unsigned int * VectorClass_rc_ptr_WDTTerritory::loc_76B6C0(char a2)
{
    this->vfptr = &vt_WDTTerritory;
    ReferenceCounted::Constructor();
    if ( (a2 & 1) != 0 )
    RA2_OPDEL();
    return &this->vfptr;
}
} // namespace gamemd

// 0x76B760
namespace gamemd {
unsigned int * VectorClass_rc_ptr_WDTTerritory::Clear(unsigned int * a2, int a3)
{
  int v3; // edi

    v3 = *((unsigned int *)this + 4) + 8 * a3;
  ComPtr::Constructor((ComPtr *)a2); /*0x76b772*/
  *a2 = (void*)&rc_ptr_WDTTerritory_vftable; /*0x76b777*/
  ComPtr::Set((ComPtr *)a2, *(unsigned int *)(v3 + 4)); /*0x76b783*/
  return a2; /*0x76b78a*/
}
} // namespace gamemd

// 0x76B870
namespace gamemd {
char VectorClass_rc_ptr_WDTTerritory::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // ecx
  unsigned int *i; // eax

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x76b87f*/
  {
    v3 = 0; /*0x76b881*/
    if ( m_8 <= 0 ) /*0x76b885*/
      return 1; /*0x76b8ab*/
        v4 = (unsigned int *)(*((unsigned int *)this + 4) + 4);
    for ( i = (unsigned int *)(*(unsigned int *)(a2 + 4) + 4); *v4 == *i; i += 2 ) /*0x76b890*/
    {
      ++v3; /*0x76b89b*/
      v4 += 2; /*0x76b89f*/
      if ( v3 >= m_8 ) /*0x76b8a4*/
        return 1; /*0x76b8a4*/
    }
  }
  return 0; /*0x76b8a6*/
}
} // namespace gamemd

// 0x76B9E0
namespace gamemd {
int VectorClass_rc_ptr_WDTTerritory::ddtor()
{
  int (***v2)(unsigned int, int); // ecx
  int result; // eax

  v2 = *(int (****)(unsigned int, int))&this->Items; /*0x76b9e6*/
    if ( v2 && *((unsigned char *)this + 52) )
  {
    result = (**v2)(v2, 3); /*0x76b9fa*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
  return result; /*0x76ba05*/
}
} // namespace gamemd

// 0x76BA10
namespace gamemd {
int VectorClass_rc_ptr_WDTTerritory::GetSize(int a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x76ba18*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x76ba21*/
  if ( m_8 <= 0 ) /*0x76ba25*/
    return -1; /*0x76ba40*/
    for ( i = (unsigned int *)(*((unsigned int *)this + 16) + 4); *i != *(unsigned int *)(a2 + 4); i += 2 )
  {
    if ( ++result >= m_8 ) /*0x76ba3e*/
      return -1; /*0x76ba3e*/
  }
  return result; /*0x76ba1a*/
}
} // namespace gamemd

// 0x76BA50
namespace gamemd {
unsigned int VectorClass_rc_ptr_WDTTerritory::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 3;
  else
    return 0; /*0x76ba57*/
}
} // namespace gamemd

// 0x76BBC0
namespace gamemd {
VectorClass_flat * VectorClass_rc_ptr_WDTTerritory::QueryInterface(unsigned int * Block, char a2)
{
  void (***v3)(unsigned int, int); // ecx

    v3 = (void (***)(unsigned int, int))*(Block + 1);
    *Block = &vt_VectorClass_rc_ptr_WDTTerritory;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    (**v3)(v3, 3); /*0x76bbdf*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x76bbf9*/
    RA2_OPDEL(Block); /*0x76bbfc*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x7AE730
char VectorClass_flat::Shrink()
{
  void *vtable0; // eax
  int Items; // ecx
  int result; // eax
  int v5; // ebx
  void *v6; // eax
  const void *Capacity; // esi
  int v8; // [esp+8h] [ebp-4h]

    v2 = *this;
    v3 = *((unsigned int *)this + 4);
  result = 3 * (unsigned int)vtable0; /*0x7ae73b*/
  if ( result <= Items ) /*0x7ae740*/
  {
    result = Items - (Items >> 31); /*0x7ae74b*/
    v5 = Items / 2; /*0x7ae74f*/
    if ( Items / 2 < 10 ) /*0x7ae754*/
      v5 = 10; /*0x7ae756*/
    if ( v5 < Items ) /*0x7ae75d*/
    {
      v6 = (void *)RA2_OPNEW(4 * v5); /*0x7ae76e*/
        v7 = (const void *)*((unsigned int *)this + 8);
      v8 = (int)v6; /*0x7ae77b*/
      if ( Capacity ) /*0x7ae77f*/
            qmemcpy(v6, v7, 4 * *this);
      RA2_OPDEL((void *)this->Capacity); /*0x7ae79d*/
        *((unsigned int *)this + 8) = v8;
        *((unsigned int *)this + 4) = v5;
      IDA_LOBYTE(result) = 1; /*0x7ae7b1*/
    }
    else
    {
      IDA_LOBYTE(result) = 0; /*0x7ae760*/
    }
  }
  else
  {
    IDA_LOBYTE(result) = 0; /*0x7ae743*/
  }
  return result; /*0x7ae742*/
}
// 0x7B2890
namespace gamemd {
int VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x7B28A0
namespace gamemd {
char VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x7b28ad*/
  {
    v3 = 0; /*0x7b28af*/
    if ( m_8 <= 0 ) /*0x7b28b3*/
      return 1; /*0x7b28d3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x7b28bb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x7b28c4*/
    {
      ++v3; /*0x7b28c6*/
      ++v4; /*0x7b28c7*/
      if ( v3 >= m_8 ) /*0x7b28cc*/
        return 1; /*0x7b28cc*/
    }
  }
  return 0; /*0x7b28ce*/
}
} // namespace gamemd

// 0x7B28E0
namespace gamemd {
char VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x7b28ec*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x7b28fc*/
      v4 = a3; /*0x7b2912*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x7b290e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x7b291a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x7b2931*/
          m_8 = a2; /*0x7b2933*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x7b293e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x7b2956*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x7b2978*/
    }
    else
    {
      return 0; /*0x7b291f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x7b2988*/
  }
}
} // namespace gamemd

// 0x7B2990
namespace gamemd {
void VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x7b29a3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x7B29C0
namespace gamemd {
int VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x7b29c8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x7b29d1*/
  if ( m_8 <= 0 ) /*0x7b29d5*/
    return -1; /*0x7b29ec*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x7b29db*/
  {
    if ( ++result >= m_8 ) /*0x7b29ea*/
      return -1; /*0x7b29ea*/
  }
  return result; /*0x7b29ca*/
}
} // namespace gamemd

// 0x7B2A00
namespace gamemd {
unsigned int VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x7b2a07*/
}
} // namespace gamemd

// 0x7B2B00
namespace gamemd {
VectorClass_flat * VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_WinsockInterfaceClass_WinsockBufferType;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x7b2b18*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x7b2b38*/
    RA2_OPDEL(Block); /*0x7b2b3b*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x7B4310
namespace gamemd {
int VectorClass_PAE::Count(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x7B4320
namespace gamemd {
char VectorClass_PAE::Get(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x7b432d*/
  {
    v3 = 0; /*0x7b432f*/
    if ( m_8 <= 0 ) /*0x7b4333*/
      return 1; /*0x7b4353*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x7b433b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x7b4344*/
    {
      ++v3; /*0x7b4346*/
      ++v4; /*0x7b4347*/
      if ( v3 >= m_8 ) /*0x7b434c*/
        return 1; /*0x7b434c*/
    }
  }
  return 0; /*0x7b434e*/
}
} // namespace gamemd

// 0x7B4360
namespace gamemd {
char VectorClass_PAE::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x7b436c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x7b437c*/
      v4 = a3; /*0x7b4392*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x7b438e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x7b439a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x7b43b1*/
          m_8 = a2; /*0x7b43b3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x7b43be*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x7b43d6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x7b43f8*/
    }
    else
    {
      return 0; /*0x7b439f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x7b4408*/
  }
}
} // namespace gamemd

// 0x7B4410
namespace gamemd {
void VectorClass_PAE::Set()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x7b4423*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x7B4440
namespace gamemd {
int VectorClass_PAE::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x7b4448*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x7b4451*/
  if ( m_8 <= 0 ) /*0x7b4455*/
    return -1; /*0x7b446c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x7b445b*/
  {
    if ( ++result >= m_8 ) /*0x7b446a*/
      return -1; /*0x7b446a*/
  }
  return result; /*0x7b444a*/
}
} // namespace gamemd

// 0x7B4480
namespace gamemd {
unsigned int VectorClass_PAE::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x7b4487*/
}
} // namespace gamemd

// 0x7B4580
namespace gamemd {
VectorClass_flat * VectorClass_PAE::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_unsigned_char;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x7b4598*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x7b45b8*/
    RA2_OPDEL(Block); /*0x7b45bb*/
    return (VectorClass *)Block;
}
} // namespace gamemd

// 0x7B4860
namespace gamemd {
bool VectorClass_Wstring::SetCapacity(const char ** a2)
{
  const char *v2; // eax
  int v3; // eax

    v2 = *this;
    if ( !*this && !*a2 )
  {
    if ( v2 && *a2 ) /*0x7b487a*/
    {
      v3 = strcmp(v2, *a2); /*0x7b4889*/
      if ( v3 ) /*0x7b48a3*/
        IDA_LOBYTE(v3) = 1; /*0x7b48ba*/
    }
    else
    {
      IDA_LOBYTE(v3) = 1; /*0x7b48c0*/
    }
  }
  else
  {
    IDA_LOBYTE(v3) = 0; /*0x7b4870*/
  }
  return v3; /*0x7b4872*/
}
} // namespace gamemd
