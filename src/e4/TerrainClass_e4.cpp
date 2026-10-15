// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/CoordStruct_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/Scenario_e4.hpp"
#include "e4/classes/ScriptAction_e4.hpp"
#include "e4/classes/Sidebar_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/TerrainClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/LoadingScreen_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/TActionClass_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/TeamTypeClass_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/TerrainTypeClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/RandomMap_e4.hpp"
#include "e4/classes/TiberiumClass_e4.hpp"
#include "e4/classes/TemporalClass_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/E4Recv_7714B0_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/Theme_e4.hpp"
#include "e4/classes/TimerClass_e4.hpp"
#include "e4/classes/CDTimerClass_e4.hpp"
#include "e4/classes/Conditions_e4.hpp"
#include "e4/classes/MessageListClass_e4.hpp"
#include "e4/classes/SuperClass_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/SidebarClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/BuildingLightClass_e4.hpp"
#include "e4/classes/TacticalMap_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/classes/LightningStorm_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/TacticalClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/SuperWeaponClass_e4.hpp"
#include "e4/classes/ActionQueue_e4.hpp"
#include "e4/classes/ScriptClass_e4.hpp"
#include "e4/classes/ParticleSystemClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
// [w14e3] vocab extender (raw call-form evidence)
namespace gamemd { int SetLocalToByID(unsigned int p0, char p1); }  // x4:signals@0x689910
namespace gamemd { int AnnounceReady(BuildingClass *p_this); }  // x4:ida@0x452260
namespace gamemd { int PlayWaypointEffect(int p0, int p1, int p2, int p3); }  // x4:signals@0x6e0490

// 0x6DD8B0
namespace gamemd {  // G42.18 ns repair
AbstractClass * * TerrainClass_ProcessUpdate(void * a1, void * a2, void * a3, void * a4, void * a5, int16_t *a8)
{
  char result; // al
  void **v9; // ecx
  int n; // edi
  int ebx47; // ebx
  IUnknown *v22; // ecx
  int *WorldCoords; // eax
  int j; // edi
  char bl75; // bl
  int k; // edi
  BuildingClass *v35; // esi
  unsigned int *attachedTag; // ecx
  char bl85; // bl
  int m; // edi
  BuildingClass *v39; // esi
  wchar_t *v44; // esi
  unsigned int PlayerColorScheme; // edi
  wchar_t *StringCSF; // eax
  HouseClass *v48; // eax
  IUnknown *eax105; // eax
  IUnknown *v50; // ecx
  IUnknown *v52; // edi
  int i; // eax
  TerrainTypeClass *v54; // esi
  CellStruct * ecx134;
  ScenarioClass *v61; // eax
  AbstractClass *v67; // ebx
  CellStruct **v70; // eax
  IUnknown *Status; // eax
  int Owner; // eax
  CellStruct **v82; // eax
  unsigned int *ecx213; // ecx
  CCINIClass *v86; // eax
  IUnknown **Waypoint_Location; // eax
  CellStruct **v101; // eax
  IUnknown **v106; // eax
  int FirstInstance; // eax
  unsigned int *ecx293; // ecx
  int edx294; // edx
  IUnknown **v114; // eax
  int v116; // edi
  int v117; // esi
  CellStruct **v119; // eax
  AnimClass *v120; // eax
  IUnknown *v112; // [esp+10h] [ebp-240h] BYREF
  CellStruct *v113; // [esp+14h] [ebp-23Ch] BYREF
  CellStruct *v128; // [esp+18h] [ebp-238h]
  CellStruct *GroundHeight; // [esp+1Ch] [ebp-234h]
  rc_ptr_base v130; // [esp+20h] [ebp-230h] BYREF
  CellStruct *v131; // [esp+24h] [ebp-22Ch] BYREF
  char Destination[32]; // [esp+40h] [ebp-210h] BYREF
  AbstractClass aP0[11]; // [esp+C0h] [ebp-190h] BYREF

  result = 1;
  v9 = (void **)(a4);
  int v10 = 0;
  if ( a4 && !*((unsigned char *)a4 + 144) )
    v9 = (void **)(0);
  switch ( *(unsigned int *)((unsigned int)(a1)+ 44) )
  {
    unsigned int v45 = 0;  /* G37 hoist */
  char v134[4]; // [esp+30h] [ebp-220h] BYREF
    case 1:
      v22 = (IUnknown *)HouseClass_Player.field_0;
      char v122 = 0;
      if ( *(unsigned int *)((unsigned int)(a1)+ 144) != *(unsigned int *)(*(unsigned int *)(HouseClass_Player.field_0 + 52) + 184) )
        goto LABEL_60;
      goto LABEL_162;
    case 2:
      v22 = (IUnknown *)HouseClass_Player.field_0;
      v122 = 0;
      if ( *(unsigned int *)((unsigned int)(a1)+ 144) == *(unsigned int *)(*(unsigned int *)(HouseClass_Player.field_0 + 52) + 184) )
        goto LABEL_60;
LABEL_162:
      HouseClass::CheckWinCondition((int)v22, 0);
      return (gamemd::AbstractClass **)(1);
    case 3:
      Owner = ObjectClass_FindOwner((unsigned int *)(a5), *(AnimClass **)((unsigned int)(a1)+ 144));
      if ( !Owner )
        return 0;
      *(unsigned char *)(Owner + 494) = 1;
      return (gamemd::AbstractClass **)(1);
    case 4:
      ++*(unsigned int *)&((unsigned int *)(HouseClass_Player))[43616];
      int v76 = *(unsigned int *)((unsigned int)(a1)+ 48);
      if ( v76 )
        ((TeamClass*)v76)->CreateOneOf(0);
      --*(unsigned int *)&((unsigned int *)(HouseClass_Player))[43616];
      return (gamemd::AbstractClass **)(1);
    case 5:
      void * v77 = *(void **)((unsigned int)(a1)+ 48);
      if ( !v77 )
        return (gamemd::AbstractClass **)(1);
      ((TeamTypeClass *)(v77))->DestroyAllInstances();
      return (gamemd::AbstractClass **)(1);
    case 6:
      int v81 = ObjectClass_FindOwner((unsigned int *)(a5), *(AnimClass **)((unsigned int)(a1)+ 144));
      if ( !v81 )
        return 0;
      (*(void (**)(int))(*(unsigned int *)(v81 + 36) + 56))(v81 + 36);
      return 1;
    case 7:
      int v78 = *(unsigned int *)((unsigned int)(a1)+ 48);
      if ( !v78 )
        return 0;
      return (AbstractClass * *)DeployScriptActionPlane(v78, -1);
    case 8:
      return ((TActionClass *)(int *)a1)->executeRetreatAction( (gamemd::AbstractClass *)(a5), (int)v9, (int)a5,(gamemd::AbstractClass *)(a8));
    case 9:
      int v74 = ObjectClass_FindOwner((unsigned int *)(a5), *(AnimClass **)((unsigned int)(a1)+ 144));
      if ( !v74 )
        return 0;
      *(unsigned int *)(v74 + 592) = 4;
      return 1;
    case 0xA:
      ((MouseClass *)0)->LoadCursors();
      (*(void (**)(unsigned int))(**(unsigned int **)&((unsigned int *)(stru_87C374))[45772] + 20))(*(unsigned int *)&((unsigned int *)(stru_87C374))[45772]);
      ToggleDisplayMode(0);
      Movie::PlayWrapper(*(unsigned int *)((unsigned int)(a1)+ 144), 0, (int)a2, 1, 1, 1);
      ToggleDisplayMode(1);
      (*(void (**)(unsigned int))(**(unsigned int **)&((unsigned int *)(stru_87C374))[45772] + 24))(*(unsigned int *)&((unsigned int *)(stru_87C374))[45772]);
      ((LoadingScreen *)0)->FreeResources3();
      return 1;
    case 0xB:
      int v43 = *(unsigned int *)(*(unsigned int *)&((unsigned int *)(HouseClass_Player))[29924] + 13496);
      v44 = *(unsigned char *)((unsigned int)(a1)+ 109) != 0 ? (wchar_t *)((unsigned int)(a1)+ 109) : 0;
      if ( v43 )
        int v45 = v43 != 1 ? 5 : 1;
      else
        v45 = 2;
      PlayerColorScheme = ((SessionClass *)((ObjectClass *)v45))->GetPlayerColorScheme();
      if ( !v44 )
        return 1;
      int v121 = Math::RoundToInt(*(double *)(*(unsigned int *)&((unsigned int *)(stru_87C374))[44652] + 5312) * 900.0);
      StringCSF = (wchar_t *)(GetStringCSF( (wchar_t *)(v44), 0, (const char *)(&((unsigned int *)(stru_830620))[75224]), 1766));
      MessageListClass::AddMessage((gamemd::MessageListClass *)(&((unsigned int *)(HouseClass_Player))[32532]), 0, 0, (wchar_t *)((CellStruct *)StringCSF), PlayerColorScheme,(int)((IUnknown *)0x4046), v121, 0);
      return 1;
    case 0xC:
      if ( !*(unsigned int *)((unsigned int)(a1)+ 80) )
        return 1;
      int v87 = *(unsigned int *)&((unsigned int *)(HouseClass_Player))[44460] - 1;
      if ( *(unsigned int *)&((unsigned int *)(HouseClass_Player))[44460] - 1 < 0 )
        return 1;
      do
      {
        int v88 = *(unsigned int *)(*(unsigned int *)&((unsigned int *)(HouseClass_Player))[44448] + 4 * v87);
        if ( *(unsigned int *)(v88 + 36) == *(unsigned int *)((unsigned int)(a1)+ 80) )
          TeamClass::AddToBuildQueue((unsigned char *, unsigned int a1, unsigned int a5)v88);
        --v87;
      }
      while ( v87 >= 0 );
      return 1;
    case 0xD:
      int v75 = ObjectClass_FindOwner((unsigned int *)(a5), *(AnimClass **)((unsigned int)(a1)+ 144));
      if ( !v75 )
        return 0;
      *(unsigned char *)(v75 + 495) = 1;
      return 1;
    case 0xE:
      return ((TActionClass *)(unsigned int *)a1)->executeEnterAction( (int)a5, (int)v9, (unsigned int *)(a5), (int)a8);
    case 0x10:
      if ( *(unsigned char *)(HouseClass_Player.field_0 + 576) )
        return 1;
      *(unsigned char *)(HouseClass_Player.field_0 + 576) = 1;
      ((LayerClass *)(&((unsigned int *)(stru_87C374))[13428]))->CellIteratorReset();
      for ( i = ((LayerClass *)(&((unsigned int *)(stru_87C374))[13428]))->CellIteratorNext();
            i;
            i = ((LayerClass *)(&((unsigned int *)(stru_87C374))[13428]))->CellIteratorNext() )
      {
        ((Conditions *)i + 36)->CheckResult( (IUnknown *, unsigned int a1, unsigned int a5)HouseClass_Player.field_0);
      }
      ((MapClass *)((int)(&((unsigned int *)(stru_87C374))[13428])))->MarkForRedraw((int)((MapClass *)((int)(&((unsigned int *)(stru_87C374))[13428]))), (void *)(1));
      return 1;
    case 0x11:
      return ((TActionClass *)(int *)a1)->RevealWaypointArea( (int)a5, (int)v9, (int)a5, (int)a8);
    case 0x12:
      return ((TActionClass *)(int *)a1)->RevealTileTypeAtWaypoint( (int)a5, (int)v9, (int)a5, (int)a8);
    case 0x13:
      PlayVocClass(*(unsigned int *)((unsigned int)(a1)+ 144), 0x2000, 1.0, 0);
      return 1;
    case 0x14:
      ((Theme*)((gamemd::IUnknown*)(&g_BuildingTypeClass_Count)))->QueueSong( (int)(*(IUnknown **)((unsigned int)(a1)+ 144)));
      return 1;
    case 0x15:
      UpdateThemeManager(*(unsigned int *)((unsigned int)(a1)+ 144), 2, -1);
      return 1;
    case 0x16:
      if ( !*(unsigned int *)((unsigned int)(a1)+ 80) )
        return 1;
      int v93 = 0;
      if ( *(int *)&((unsigned int *)(HouseClass_Player))[44460] <= 0 )
        return 1;
      do
      {
        int v94 = *(unsigned int *)(*(unsigned int *)&((unsigned int *)(HouseClass_Player))[44448] + 4 * v93);
        if ( *(unsigned int *)(v94 + 36) == *(unsigned int *)((unsigned int)(a1)+ 80) )
          ((ScriptClass *)(v94))->ExecuteTriggers(0,(char)( *(TriggerClass **)&(&stru_B05488)[37368]));
        ++v93;
      }
      while ( v93 < *(int *)&((unsigned int *)(HouseClass_Player))[44460] );
      return 1;
    case 0x17:
      if ( *(unsigned int *)(*(unsigned int *)&((unsigned int *)(HouseClass_Player))[29924] + 4584) != -1 )
        return 1;
      *(unsigned int *)(*(unsigned int *)&((unsigned int *)(HouseClass_Player))[29924] + 4584) = *(unsigned int *)&((unsigned int *)(HouseClass_Player))[45112];
      ((ObjectClass *)(&((unsigned int *)(stru_87C374))[13428]))->PreDraw();
      return 1;
    case 0x18:
      v54 = (TerrainTypeClass *)(*(unsigned int *)&((unsigned int *)(HouseClass_Player))[29924] + 4584);
      if ( *(unsigned int *)(*(unsigned int *)&((unsigned int *)(HouseClass_Player))[29924] + 4584) == -1 )
        return 1;
      *(unsigned int *)&v54-((unsigned int *)(>q000))[8] = CDTimerClass::TimeRemaining((*(unsigned int *)&((unsigned int *)(HouseClass_Player))[29924]
                                                                      + 4584));
      *(unsigned int *)v54->vtable1 = -1;
      ((ObjectClass *)(&((unsigned int *)(stru_87C374))[13428]))->PreDraw();
      return 1;
    case 0x19:
      int v57 = CDTimerClass::TimeRemaining((*&HouseClass_Player->u32_1D390 + 4584));
      ((Timer *)(&v131))->Start((int)((DynamicVector *)(15 * *(unsigned int *)((unsigned int)(a1)+ 144) + v57)));
      int v58 = *(unsigned int *)&((unsigned int *)(HouseClass_Player))[29924] + 4584;
      *(unsigned int *)(*(unsigned int *)&((unsigned int *)(HouseClass_Player))[29924] + 4584) = (unsigned int)(v131);
  int v132; // [esp+28h] [ebp-228h]
      *(unsigned int *)(v58 + 4) = v132;
  int v133; // [esp+2Ch] [ebp-224h]
      *(unsigned int *)(v58 + 8) = v133;
      ((ObjectClass *)(&((unsigned int *)(stru_87C374))[13428]))->PreDraw();
      return 1;
    case 0x1A:
      if ( CDTimerClass::TimeRemaining((*&HouseClass_Player->u32_1D390 + 4584)) > 15 * *(unsigned int *)((unsigned int)(a1)+ 144) )
      {
        int v60 = CDTimerClass::TimeRemaining((*&HouseClass_Player->u32_1D390 + 4584));
        ((Timer *)(&v113))->Start((int)((DynamicVector *)(v60 - 15 * *(unsigned int *)((unsigned int)(a1)+ 144))));
        ecx134 = (gamemd::CellStruct *)((unsigned int)((gamemd::CellStruct *)((unsigned int)((gamemd::CellStruct *)((unsigned int)((gamemd::CellStruct *)(*(unsigned int *)&((unsigned int *)(HouseClass_Player))[29924] + 4584)))))));
        *(unsigned int *)(*(unsigned int *)&((unsigned int *)(HouseClass_Player))[29924] + 4584) = (unsigned int)(v113);
        *(unsigned int *)(ecx134 + 4) = (unsigned int)(v128);
        *(unsigned int *)(ecx134 + 8) = (unsigned int)(GroundHeight);
        ((ObjectClass *)(&(&stru_87C374)[13428]))->PreDraw();
      }
      else
      {
        ((Timer *)(&v131))->Start(0);
        int v59 = *(unsigned int *)&((unsigned int *)(HouseClass_Player))[29924] + 4584;
        *(unsigned int *)(*(unsigned int *)&((unsigned int *)(HouseClass_Player))[29924] + 4584) = (unsigned int)(v131);
        *(unsigned int *)(v59 + 4) = v132;
        *(unsigned int *)(v59 + 8) = v133;
        ((ObjectClass *)(&(&stru_87C374)[13428]))->PreDraw();
      }
      return 1;
    case 0x1B:
      ((Timer *)(&v131))->Start((int)((DynamicVector *)(15 * *(unsigned int *)((unsigned int)(a1)+ 144))));
      int v62 = *(unsigned int *)&((unsigned int *)(HouseClass_Player))[29924] + 4584;
      *(unsigned int *)(*(unsigned int *)&((unsigned int *)(HouseClass_Player))[29924] + 4584) = (unsigned int)(v131);
      *(unsigned int *)(v62 + 4) = v132;
      *(unsigned int *)(v62 + 8) = v133;
      v61 = *(ScenarioClass **)&((unsigned int *)(HouseClass_Player))[29924];
      if ( *(unsigned int *)(*(unsigned int *)&((unsigned int *)(HouseClass_Player))[29924] + 4584) == -1 )
      {
        *(unsigned int *)(*(unsigned int *)&((unsigned int *)(HouseClass_Player))[29924] + 4584) = *(unsigned int *)&((unsigned int *)(HouseClass_Player))[45112];
        v61 = *(ScenarioClass **)&((unsigned int *)(HouseClass_Player))[29924];
      }
      v61->missionTimer_text_csf = (unsigned int)(&(&stru_87C374)[46016]);
      ((ScriptAction *)(Destination))->CopyStringField( (char *)(&((unsigned int *)(stru_87C374))[56304]));
  char v137[32]; // [esp+60h] [ebp-1F0h] BYREF
      ((ScriptAction *)((*(unsigned int *)&((unsigned int *)(HouseClass_Player))[29924] + 4600)))->CopyStructField( (void *)(v137),(void *)((const void *)(Destination)));
      ((ObjectClass *)(&(&stru_87C374)[13428]))->PreDraw();
      return 1;
    case 0x1C:
      ((ScenarioClass *)(*&HouseClass_Player->u32_1D390))->SetGlobalToByID(a1->SuperClass_field_0x2C, 1);
      return 1;
    case 0x1D:
      ((ScenarioClass *)(*&HouseClass_Player->u32_1D390))->SetGlobalToByID(a1->SuperClass_field_0x2C, 0);
      return 1;
    case 0x1E:
      if ( !*(unsigned char *)((unsigned int)(a1)+ 144) )
      {
        (*(((unsigned char *)&(a5[13].referenceCount)) + (sizeof(a5[13].referenceCount) - 1))) = 0;
        return 1;
      }
      (*(((unsigned char *)&(a5[13].referenceCount)) + (sizeof(a5[13].referenceCount) - 1))) = 1;
      if ( a5[2].nextArrayIndex > 0 )
      {
        v50 = *(IUnknown **)(**(unsigned int **)&a5[2].q000[12] + 156);
        int v53 = *(unsigned int *)(**(unsigned int **)&a5[2].q000[12] + 160);
        v133 = *(unsigned int *)(**(unsigned int **)&a5[2].q000[12] + 164);
        v52 = *(IUnknown **)((CellStruct *)(&v130))->Set((int)v50 / 256, v53 / 256);
        ((HouseClass *)(a5))->SetMapSeed( (int)(v52));
        a5[620].NeedsSaveOrLink = v52;
      }
      if ( !*(unsigned int *)&a5[619].q000[8] )
      {
        ((HouseClass *)((int)a5))->SetPrimaryTechBuilding();
        return 1;
      }
      return 1;
    case 0x1F:
      ((MapClass *)(&(&stru_87C374)[13428]))->ProcessVisibilityFlags();
      return 1;
    case 0x20:
      return globalHelper_0E2050( (int)a5, (int)v9, (int)a5, (int16_t *)((IUnknown *)a8));
    case 0x21:
      ((SuperClass *)(*(unsigned int *)(a5[16].nextArrayIndex + 4 * a1->SuperClass_field_0x2C)))->StartTimer( (int)((IUnknown *)1), 0, 0);
      if ( (AbstractClass *)HouseClass_Player.field_0 == a5 )
        goto LABEL_157;
      return 1;
    case 0x22:
      ((SuperClass *)(*(unsigned int *)(a5[16].nextArrayIndex + 4 * a1->SuperClass_field_0x2C)))->StartTimer(0, 0, 0);
      *(unsigned char *)(*(unsigned int *)(a5[16].nextArrayIndex + 4 * a1->SuperClass_field_0x2C) + 96) = 0;
      if ( (AbstractClass *)HouseClass_Player.field_0 != a5 )
        return 1;
LABEL_157:
      ((SidebarClass *)((int *)&(&stru_87C374)[13428]))->AddCameo( 31, (int)(a1->SuperClass_field_0x2C));
      Status = (IUnknown *)((HouseClass *)((IUnknown *)0x1F))->GetStatus(0);
      ((Sidebar*)(&(&stru_87C374)[13428]))->ActivateTab( (int)(Status));
      return 1;
    case 0x23:
      if ( !a5 )
        return 1;
      a5[603].NeedsSaveOrLink = a1->SuperClass_field_0x2C;
      return 1;
    case 0x24:
      return ((TActionClass *)(unsigned int *)a1)->ConvertHouseUnits( (int)a5, (int)v9, (unsigned int *)(a5), (int)a8);
    case 0x25:
      v48 = (HouseClass *)((ObjectClass *)((unsigned int *)(a5)))->FindOwner( a1->SuperClass_field_0x2C);
      int v49 = (int)v48;
      if ( !v48 )
        return 0;
      ((HouseClass *)((int)a5))->HandleAlliance( (int)(v48), 0);
      ((HouseClass *)(v49))->HandleAlliance( (int)((HouseClass *)a5), 0);
      return 1;
    case 0x26:
      eax105 = (IUnknown *)((ObjectClass *)((unsigned int *)(a5)))->FindOwner( a1->SuperClass_field_0x2C);
      int v51 = (int)eax105;
      if ( !eax105 )
        return 0;
      ((HouseClass *)((int)a5))->SetAlliance( (HouseClass *)(eax105), 0);
      ((HouseClass *)(v51))->SetAlliance( (HouseClass *)((IUnknown *)a5), 0);
      return 1;
    case 0x27:
    case 0x5C:
    case 0x5D:
      return 1;
    case 0x28:
      return ((TActionClass *)(int *)a1)->executeFollowAction( (int)a5, (int)v9, (int)a5, (int)a8);
    case 0x29:
      return ((TActionClass *)(int *)a1)->executeEscortAction( (int)a5, (int)v9, (int)a5, (int)a8);
    case 0x2A:
      return ((TActionClass *)(int *)a1)->CreateWeaponImpactAtWaypoint( (int)a5, (int)v9, (int)a5, (int)a8);
    case 0x2B:
      return ((TActionClass *)(int *)a1)->executeLoadAction( (int)a5, (int)v9, (int)a5, (int)a8);
    case 0x2C:
      if ( LightningStorm::IsActive() )
        return 0;
      LightningStorm::Start(
        a1->SuperClass_field_0x2C,
        *(unsigned int *)(*(unsigned int *)&(&stru_87C374)[44652 + 6036]),
        *(int *)&(&stru_B05488)[37368],
        0);
      return 1;
    case 0x2D:
      result = LightningStorm::IsActive();
      if ( result )
      {
        LightningStorm::End();
        return 1;
      }
      return (AbstractClass * *)result;
    case 0x2E:
      *(unsigned int *)&(&stru_87C374)[17944 ]= 0;
      *(unsigned int *)&(&stru_87C374)[17948 ]= 0;
      *(unsigned int *)&(&stru_87C374)[17952 ]= -1;
      ((Mouse*)(&(&stru_87C374)[13428]))->SetBounds(0);
      ((BuildingClass *)(&(&stru_87C374)[13428]))->TogglePower2(0);
      ((BuildingClass *)(&(&stru_87C374)[13428]))->TogglePower(0);
      (&stru_87C374)[17958] = 0;
      (&stru_87C374)[17959] = 0;
      (&stru_87C374)[17960] = 0;
      Scenario::ClearScreen();
      return 1;
    case 0x2F:
      UpdateMouse();
      return 1;
    case 0x30:
      v112 = (IUnknown *)*((ScenarioClass*)(*&HouseClass_Player->u32_1D390))->Get_Waypoint_Location( (unsigned int *)(&v130), *(unsigned int *)((unsigned int)(a1)+ 68));
      v82 = (CellStruct **)((CoordStruct *)&v131)->Set2((int16_t *)((IUnknown *)&v112), 0);
      v113 = *v82;
      v128 = v82[1];
      GroundHeight = v82[2];
      GroundHeight = (CellStruct *)Cell::GetGroundHeight((unsigned int *)((IUnknown *)&v113));
      if ( (*((unsigned int *)((CellCoord *)((unsigned char *)&stru_87C374 + 13428))->To_CellObj((int16_t *)&v112) + 80) & 0x100) != 0
        || (*((unsigned int *)((CellCoord *)((unsigned char *)&stru_87C374 + 13428))->To_CellObj((int16_t *)&v112) + 80) & 0x400) != 0 )
      {
        GroundHeight = (CellStruct *)((char *)GroundHeight + *(unsigned int *)&((unsigned char *)&stru_B05488)[37452]);
      }
      TacticalClass::SetPosition(
        *(unsigned int **)&((unsigned char *)&stru_87C374)[44976],
        (IUnknown *)&v113,
        *(AbstractClass **)((unsigned int)(a1)+ 144));
      return 1;
    case 0x31:
      int v83 = *(unsigned int *)&((unsigned char *)&stru_87C374)[44652] + 1360;
      *(unsigned int *)(*(unsigned int *)&((unsigned char *)&stru_87C374)[44976] + 192) = *(unsigned int *)(*(unsigned int *)&((unsigned char *)&stru_87C374)[44652]
                                                                               + 1360);
      *(unsigned int *)(*(unsigned int *)&((unsigned char *)&stru_87C374)[44976] + 196) = *(unsigned int *)(v83 + 4);
      HouseClass_Player->u32_2C140 = 1;
      ((Timer*)(*(HWND **)&((unsigned char *)&stru_87C374)[13308]))->PumpMessages();
      (*(void (**)(unsigned int))(**(unsigned int **)&((unsigned char *)&stru_87C374)[45772] + 12))(*(unsigned int *)&((unsigned char *)&stru_87C374)[45772]);
      ((Mouse *)((unsigned char *)&stru_87C374 + 13428))->ReleaseCapture();
      ((MapClass *)((int)((unsigned char *)&stru_87C374 + 13428)))->MarkForRedraw((int)((MapClass *)((int)((unsigned char *)&stru_87C374 + 13428))), 0);
      ((TacticalMap*)((unsigned char *)&stru_87C374 + 13428))->Redraw();
      Sleep(0x3E8u);
      return 1;
    case 0x32:
      *(unsigned int *)(*(unsigned int *)&((unsigned char *)&stru_87C374)[44976] + 192) = 0;
      *(unsigned int *)(*(unsigned int *)&((unsigned char *)&stru_87C374)[44976] + 196) = 1072693248;
      ((Timer*)(*(HWND **)&((unsigned char *)&stru_87C374)[13308]))->PumpMessages();
      ((unsigned char *)&HouseClass_Player)[45136] = *(unsigned char *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 13730);
      (*(void (**)(unsigned int))(**(unsigned int **)&((unsigned char *)&stru_87C374)[45772] + 16))(*(unsigned int *)&((unsigned char *)&stru_87C374)[45772]);
      ((MapClass *)((int)((unsigned char *)&stru_87C374 + 13428)))->MarkForRedraw((int)((MapClass *)((int)((unsigned char *)&stru_87C374 + 13428))), 0);
      ((TacticalMap*)((unsigned char *)&stru_87C374 + 13428))->Redraw();
      return 1;
    case 0x33:
      ((TActionClass *)&((unsigned char *)&stru_87C374)[13428])->executeRepairAction( (int)a5);
      return 1;
    case 0x34:
      char v84 = 0;
      if ( *(int *)&((unsigned char *)&HouseClass_Player)[44548] > 0 )
      {
        do
        {
          int v85 = *(unsigned int *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[44536] + 4 * v10);
          if ( *(int *)(v85 + 108) > 0 )
          {
            if ( *(unsigned char *)(v85 + 144) )
            {
              if ( *(unsigned char *)(v85 + 116) )
              {
                if ( !*(unsigned char *)(v85 + 129) )
                {
                  if ( *(unsigned char *)(*(unsigned int *)(v85 + 1312) + 5451) )
                  {
                    if ( *(unsigned int *)(v85 + 1536) )
                    {
                      ecx213 = *(unsigned int **)(v85 + 52);
                      if ( ecx213 )
                      {
                        if ( ((LinkedList_flat *)ecx213)->Contains( (IUnknown *)(a5)) )
                        {
                          ((BuildingLightClass *)(*(unsigned int **)(v85 + 1536)))->FindTarget(*(CCINIClass **)((unsigned int)(a1)+ 144));
                          v84 = 1;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          ++v10;
        }
        while ( v10 < *(int *)&((unsigned char *)&HouseClass_Player)[44548] );
      }
      return (AbstractClass * *)v84;
    case 0x35:
      return ((TActionClass *)(unsigned int *)a1)->executeUnloadAction( (int)a5, (int)v9, (int)a5, (IUnknown *)a8);
    case 0x36:
      if ( !*(unsigned int *)((unsigned int)(a1)+ 80) )
        return 1;
      int v95 = 0;
      if ( *(int *)&((unsigned char *)&HouseClass_Player)[44460] <= 0 )
        return 1;
      do
      {
        int v96 = *(unsigned int *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[44448] + 4 * v95);
        if ( *(unsigned int *)(v96 + 36) == *(unsigned int *)((unsigned int)(a1)+ 80) )
          ((TActionClass *)(unsigned char *)v96)->executeDetonateAction();
        ++v95;
      }
      while ( v95 < *(int *)&((unsigned char *)&HouseClass_Player)[44460] );
      return 1;
    case 0x37:
      Waypoint_Location = (IUnknown **)((ScenarioClass*)(*(char **)&((unsigned char *)&HouseClass_Player)[29924]))->Get_Waypoint_Location( (unsigned int *)(&v130), *(unsigned int *)((unsigned int)(a1)+ 68));
  int v98; // edx
      CreateTriggerClassIfFarEnough( (int)(*(IUnknown **)((unsigned int)(a1)+ 144)), v98, *Waypoint_Location);
      return 1;
    case 0x38:
      ScenarioClass::SetLocalToByID((unsigned int)(*(unsigned char **)&((unsigned char *)&HouseClass_Player)[29924]), a1->q090, 1);
      return 1;
    case 0x39:
      ScenarioClass::SetLocalToByID(*(unsigned char **)&((unsigned char *)&HouseClass_Player)[29924], a1->q090, 0);
      return 1;
    case 0x3A:
      return ((TActionClass *)(int *)a1)->SpawnMeteorShower( (gamemd::AbstractClass *)(a5), (int)v9, (int)a5,(gamemd::AbstractClass *)(a8));
    case 0x3B:
      v112 = (IUnknown *)*((ScenarioClass*)(*(char **)&((unsigned char *)&HouseClass_Player)[29924]))->Get_Waypoint_Location( (unsigned int *)(&v130), *(unsigned int *)((unsigned int)(a1)+ 144));
      MapClass::TriggerEVA((IUnknown *)((short *)((IUnknown *)&v112)));
      return 1;
    case 0x3C:
      char v31 = 0;
      for ( j = 0; j < *(int *)&((unsigned char *)&HouseClass_Player)[44548]; ++j )
      {
        int v33 = *(unsigned int *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[44536] + 4 * j);
        if ( *(unsigned char *)(v33 + 144) )
        {
          if ( *(unsigned char *)(v33 + 116) )
          {
            if ( !*(unsigned char *)(v33 + 129) )
            {
              unsigned int * v34 = *(unsigned int **)(v33 + 52);
              if ( v34 )
              {
                if ( ((LinkedList_flat *)v34)->Contains( (IUnknown *)(a5)) )
                {
                  (*(void (**)(int, int))(*(unsigned int *)v33 + 416))(v33, 1);
                  v31 = 1;
                }
              }
            }
          }
        }
      }
      return (AbstractClass * *)v31;
    case 0x3D:
      bl75 = 0;
      for ( k = 0; k < *(int *)&((unsigned char *)&HouseClass_Player)[44548]; ++k )
      {
        v35 = *(BuildingClass **)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[44536] + 4 * k);
        if ( v35->isAliveFlag )
        {
          if ( v35->isOnMap )
          {
            if ( !v35->inLimbo )
            {
              attachedTag = (unsigned int *)v35->attachedTag;
              if ( attachedTag )
              {
                if ( ((LinkedList_flat *)attachedTag)->Contains( (IUnknown *)(a5)) && v35->HasPower )
                {
                  BuildingClass::PowerOff((gamemd::BuildingClass *)((int)v35));
                  bl75 = 1;
                }
              }
            }
          }
        }
      }
      return (AbstractClass * *)bl75;
    case 0x3E:
      bl85 = 0;
      for ( m = 0; m < *(int *)&((unsigned char *)&HouseClass_Player)[44548]; ++m )
      {
        v39 = *(BuildingClass **)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[44536] + 4 * m);
        if ( v39->isAliveFlag )
        {
          if ( v39->isOnMap )
          {
            if ( !v39->inLimbo )
            {
              unsigned int * v42 = (unsigned int *)(v39->attachedTag);
              if ( v42 )
              {
                if ( ((LinkedList_flat *)v42)->Contains( (IUnknown *)(a5)) && !v39->HasPower )
                {
                  BuildingClass::AnnounceReady((int)v39);
                  bl85 = 1;
                }
              }
            }
          }
        }
      }
      return (AbstractClass * *)bl85;
    case 0x3F:
      return PlayWaypointEffect((int *)a1, (int)a5, (int)v9, (int)a5, (IUnknown *)a8);
    case 0x40:
      int v25 = *(unsigned int *)(*(unsigned int *)&((unsigned char *)&stru_87C374)[44652] + 4008);
      WorldCoords = (int *)((Cell *)(*(int16_t **)&((unsigned char *)&HouseClass_Player)[29924]))->GetWorldCoords( (unsigned int *)(&v131), *(unsigned int *)((unsigned int)(a1)+ 144));
      CreateSmokeEffectAt(50, v25, *WorldCoords, WorldCoords[1], WorldCoords[2], 0, 0);
      return 1;
    case 0x41:
      int v27 = *(unsigned int *)(*(unsigned int *)&((unsigned char *)&stru_87C374)[44652] + 4008);
      int * v28 = (int *)(((Cell *)(*(int16_t **)&((unsigned char *)&HouseClass_Player)[29924]))->GetWorldCoords( (unsigned int *)(&v131), *(unsigned (unsigned int)(int)*)(a1 + 144)));
      CreateSmokeEffectAt(100, v27, *v28, v28[1], v28[2], 0, 0);
      return 1;
    case 0x42:
      int v29 = *(unsigned int *)(*(unsigned int *)&((unsigned char *)&stru_87C374)[44652] + 4008);
      int * v30 = (int *)(((Cell *)(*(int16_t **)&((unsigned char *)&HouseClass_Player)[29924]))->GetWorldCoords( (unsigned int *)(&v131), *(unsigned (unsigned int)(int)*)(a1 + 144)));
      CreateSmokeEffectAt(300, v29, *v30, v30[1], v30[2], 0, 0);
      return 1;
    case 0x43:
      HouseClass::CheckWinCondition(HouseClass_Player.field_0, 1);
      return 1;
    case 0x44:
      v22 = (IUnknown *)HouseClass_Player.field_0;
      v122 = 1;
LABEL_60:
      HouseClass::CheckDefeat((int)v22, v122);
      return 1;
    case 0x45:
      ((TActionClass *)HouseClass_Player.field_0)->executeBuildAction();
      return 1;
    case 0x46:
      if ( !*(unsigned int *)((unsigned int)(a1)+ 76) )
        return 1;
      int v89 = *(unsigned int *)&((unsigned char *)&stru_B05488)[37544];
      int v90 = 0;
      if ( *(int *)&((unsigned char *)&stru_B05488)[37544] <= 0 )
        return 1;
      v86 = *(CCINIClass **)&((unsigned char *)&stru_B05488)[37532];
      do
      {
        if ( *(unsigned int *)(*(unsigned int *)&v86->q000[4 * v90] + 36) == a1->q04C )
        {
          int v92 = *(unsigned int *)&v86->q000[4 * v90];
          if ( v92 )
          {
            (*(void (**)(int, int))(*(unsigned int *)v92 + 32))(v92, 1);
            v86 = *(CCINIClass **)&((unsigned char *)&stru_B05488)[37532];
          }
          --v90;
        }
        ++v90;
      }
      while ( v90 < v89 );
      return 1;
    case 0x47:
      *(double *)(*(unsigned int *)&((unsigned char *)&stru_87C374)[44652] + 5744) = *(float *)((unsigned int)(a1)+ 144);
      return 1;
    case 0x48:
      *(double *)(*(unsigned int *)&((unsigned char *)&stru_87C374)[44652] + 5736) = *(float *)((unsigned int)(a1)+ 144);
      return 1;
    case 0x49:
      *(unsigned int *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 13608) = *(unsigned int *)((unsigned int)(a1)+ 144);
      if ( LightningStorm::IsActive() )
        return 1;
      *(unsigned int *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 13616) = *(unsigned int *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924]
                                                                                      + 13608);
      return 1;
    case 0x4A:
      int v99 = ((ObjectClass *)((unsigned int *)(a5)))->FindOwner( *(AnimClass **)((unsigned int)(a1)+ 144));
      if ( !v99 )
        return 0;
      *(unsigned char *)(v99 + 498) = 1;
      return 1;
    case 0x4B:
      int v100 = ((ObjectClass *)((unsigned int *)(a5)))->FindOwner( *(AnimClass **)((unsigned int)(a1)+ 144));
      if ( !v100 )
        return 0;
      *(unsigned char *)(v100 + 498) = 0;
      return 1;
    case 0x4C:
      if ( !a5 )
        return 1;
      *(unsigned int *)&a5[614].q000[4] = *(unsigned int *)((unsigned int)(a1)+ 144);
      return 1;
    case 0x4D:
      if ( !a5 )
        return 1;
      *(unsigned int *)&a5[614].q000[8] = *(unsigned int *)((unsigned int)(a1)+ 144);
      return 1;
    case 0x4E:
      if ( !a5 )
        return 1;
      *(unsigned int *)&a5[614].q000[12] = *(unsigned int *)((unsigned int)(a1)+ 144);
      return 1;
    case 0x4F:
      if ( !a5 )
        return 1;
      a5[614].uniqueId = *(unsigned int *)((unsigned int)(a1)+ 144);
      return 1;
    case 0x50:
      int v79 = *(unsigned int *)((unsigned int)(a1)+ 48);
      if ( !v79 )
        return 0;
      int v80 = *(unsigned int *)((unsigned int)(a1)+ 68);
      if ( v80 == -1 )
        return 0;
      return (AbstractClass * *)DeployScriptActionPlane(v79, v80);
    case 0x51:
      return globalHelper_0E01C0((int)a5, (int)v9, (int)a5, (IUnknown *)a8);
    case 0x52:
      int v18 = 0;
      if ( *(int *)&((unsigned char *)&stru_89E138)[89240] <= 0 )
        return 1;
      do
      {
        int v19 = *(unsigned int *)(*(unsigned int *)&((unsigned char *)&stru_89E138)[89228] + 4 * v18);
        if ( !(*(int (**)(int))(*(unsigned int *)v19 + 388))(v19)
          && *(int *)(v19 + 108) > 0
          && *(unsigned char *)(v19 + 144)
          && *(unsigned char *)(v19 + 116)
          && !*(unsigned char *)(v19 + 129)
          && a5 != *(AbstractClass **)(v19 + 540) )
        {
          (*(void (**)(int, int, unsigned int))(*(unsigned int *)v19 + 488))(v19, 5, 0);
        }
        ++v18;
      }
      while ( v18 < *(int *)&((unsigned char *)&stru_89E138)[89240] );
      return 1;
    case 0x53:
      int v20 = 0;
      if ( *(int *)&((unsigned char *)&stru_89E138)[89240] <= 0 )
        return 1;
      do
      {
        int v21 = *(unsigned int *)(*(unsigned int *)&((unsigned char *)&stru_89E138)[89228] + 4 * v20);
        if ( (*(int (**)(int))(*(unsigned int *)v21 + 388))(v21) == 23
          && *(int *)(v21 + 108) > 0
          && *(unsigned char *)(v21 + 144)
          && *(unsigned char *)(v21 + 116)
          && !*(unsigned char *)(v21 + 129)
          && *(AbstractClass **)(v21 + 540) == a5 )
        {
          (*(void (**)(int, int, unsigned int))(*(unsigned int *)v21 + 488))(v21, 5, 0);
        }
        ++v20;
      }
      while ( v20 < *(int *)&((unsigned char *)&stru_89E138)[89240] );
      return 1;
    case 0x54:
      ebx47 = 0;
      if ( *(int *)&((unsigned char *)&HouseClass_Player)[44860] <= 0 )
        return 1;
      do
      {
        unsigned int * v23 = *(unsigned int **)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[44848] + 4 * ebx47);
        if ( v23[133] == *(unsigned int *)((unsigned int)(a1)+ 144)
          && (!(*(int (**)(unsigned int))(*v23 + 388))(*(unsigned int *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[44848]
                                                                      + 4 * ebx47))
           || (*(int (**)(unsigned int *))(*v23 + 388))( (unsigned int *)(v23)) == 23)
          && (int)v23[27] > 0
          && *((unsigned char *)v23 + 144)
          && *((unsigned char *)v23 + 116)
          && !*((unsigned char *)v23 + 129) )
        {
          (*(void (**)(unsigned int *, int, unsigned int))(*v23 + 488))( (unsigned int *)(v23), 5, 0);
        }
        ++ebx47;
      }
      while ( ebx47 < *(int *)&((unsigned char *)&HouseClass_Player)[44860] );
      return 1;
    case 0x55:
      *(unsigned char *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 13479) = *(unsigned char *)((unsigned int)(a1)+ 144);
      return 1;
    case 0x56:
      *(unsigned char *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 13478) = *(unsigned char *)((unsigned int)(a1)+ 144);
      return 1;
    case 0x57:
      *(unsigned char *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 13480) = *(unsigned char *)((unsigned int)(a1)+ 144);
      return 1;
    case 0x58:
      v112 = (IUnknown *)*((ScenarioClass*)(*(char **)&((unsigned char *)&HouseClass_Player)[29924]))->Get_Waypoint_Location( (unsigned int *)(&v130), *(unsigned int *)((unsigned int)(a1)+ 68));
  unsigned int v135[3]; // [esp+34h] [ebp-21Ch] BYREF
      v101 = (CellStruct **)((CoordStruct *)v135)->Set2((int16_t *)((IUnknown *)&v112), 0);
      v113 = *v101;
      v128 = v101[1];
      GroundHeight = v101[2];
      ((CoordStruct *)&v131)->Set2((int16_t *)((IUnknown *)&v112), 0);
      GroundHeight = (CellStruct *)Cell::GetGroundHeight( (unsigned int *)&v131);
      void * v102 =
      if ( !v102 )
        return 1;
      (v102)->Constructor(*(IUnknown **)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[32] + 4 * *(unsigned int *)((unsigned int)(a1)+ 144)), (IUnknown *)&v113, 0, 0, (IUnknown *)&((unsigned char *)&stru_B05488)[37400], 0);
      return 1;
    case 0x59:
      int v103 = 0;
      v112 = (IUnknown *)*((ScenarioClass*)(*(char **)&((unsigned char *)&HouseClass_Player)[29924]))->Get_Waypoint_Location( (unsigned int *)(&v130), *(unsigned int *)((unsigned int)(a1)+ 68));
      if ( g_GameCleanupState <= 0 )
        return 1;
      do
      {
        unsigned char * v104 = *(unsigned char **)&dword_A8020C->q000[4 * v103];
        if ( v104[144] )
        {
          unsigned short * v105 = (unsigned short *)(*(int (**)(unsigned char *, char *))(*(unsigned int *)v104 + 440))( (unsigned char *)(v104), (char *)(v134));
          if ( ((CellStruct *)((unsigned short *)(v105)))->Equals((void *)(&v112)) )
            (*(void (**)(unsigned char *))(*(unsigned int *)v104 + 248))( (unsigned char *)(v104));
        }
        ++v103;
      }
      while ( v103 < g_GameCleanupState );
      return 1;
    case 0x5A:
      v106 = (IUnknown **)((ScenarioClass*)(*(char **)&((unsigned char *)&HouseClass_Player)[29924]))->Get_Waypoint_Location( (unsigned int *)(v134), *(unsigned int *)((unsigned int)(a1)+ 68));
      LightningStorm::Strike((int)(*v106));
      return 1;
    case 0x5B:
      char v14 = 0;
      for ( n = 0; n < *(int *)&((unsigned char *)&HouseClass_Player)[172]; ++n )
      {
        int v16 = *(unsigned int *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[160] + 4 * n);
        if ( *(unsigned char *)(v16 + 144) )
        {
          if ( *(unsigned char *)(v16 + 116) )
          {
            if ( !*(unsigned char *)(v16 + 129) )
            {
              unsigned int * v17 = *(unsigned int **)(v16 + 52);
              if ( v17 )
              {
                if ( ((LinkedList_flat *)v17)->Contains( (IUnknown *)(a5)) )
                {
                  (*(void (**)(int))(*(unsigned int *)v16 + 1300))(v16);
                  v14 = 1;
                }
              }
            }
          }
        }
      }
      return (AbstractClass * *)v14;
    case 0x5E:
  unsigned int *v11; // eax
      v11 = ((ScenarioClass*)(*(char **)&((unsigned char *)&HouseClass_Player)[29924]))->Get_Waypoint_Location( (unsigned int *)(&v130), *(unsigned int *)((unsigned int)(a1)+ 68));
      ((Coord*)&v131)->Subtract( (int)((IUnknown *)(((int16_t)*v11 << 8) + 128)), (int)((IUnknown *)(((int16_t)(*(((unsigned short *)&(*v11)) + 1)) << 8) + 128)), 0);
      v113 = v131;
      v128 = (CellStruct *)v132;
      GroundHeight = (CellStruct *)v133;
      GroundHeight = (CellStruct *)Cell::GetGroundHeight( (unsigned int *)&v113);
      unsigned int * v12 = (unsigned int *)operator new(0x14u);
      if ( !v12 )
        return 1;
      ((ActionQueue *)(v12))->PushEntry((int)v113, (int)v128, (int)GroundHeight);
      return 1;
    case 0x5F:
      return ((TActionClass *)(int *)a1)->CreateNukeEffect( (gamemd::AbstractClass *)(a5), (int)v9, (int)a5, (gamemd::AbstractClass *)(a8));
    case 0x60:
      return SuperWeaponClass::CreateChemLauncher((unsigned int *)a1, (int)a5, (int)v9, (int)a5, (IUnknown *)a8);
    case 0x61:
      *(unsigned char *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 13477) = *(unsigned char *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924]
                                                                                    + 13477) == 0;
      return 1;
    case 0x62:
      Array::ForEach(((Array *)aP0),  4, (int)0x64, (int (*)(int))__0Iostream_init_QAE_XZ_2);
      int v65 = 0;
      int v66 = 0;
      v67 = aP0;
      do
      {
        if ( ((ScenarioClass *)(*(char **)&((unsigned char *)&HouseClass_Player)[29924]))->Is_Waypoint_Valid(v66) )
        {
          ++v65;
          *(unsigned int *)v67->vtable1 = *((ScenarioClass*)(*(char **)&((unsigned char *)&HouseClass_Player)[29924]))->Get_Waypoint_Location( (unsigned int *)(&v130), v66);
          v67 = (gamemd::AbstractClass *)(&v67->vtable2);
          if ( v65 == 400 )
            break;
        }
        ++v66;
      }
      while ( v66 < 702 );
      int v68 = Random::Range((gamemd::Random *)((*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 536)), 0, (int)(v65 - 1));
      unsigned int * v69 = ((CoordStruct *)&v131)->Set2( &aP0->vtable2 * v68), 0);
      PlayAudioAt2(a1->q090, v69, 0);
      return 1;
    case 0x63:
            v70 = (CellStruct **)Cell::GetWorldCoords((unsigned int *)(*(int16_t **)&((unsigned char *)&HouseClass_Player)[29924]),                              &v131,                              a1->u32_44);
      v113 = *v70;
      v128 = v70[1];
      GroundHeight = v70[2];
      unsigned int * v71 = ((ScriptAction *)&v113)->ReadParameter();
      if ( v71 )
        ObjectClass::CheckFlagD0(v71, a1->q090);
      else
        PlayAudioAt2(a1->q090, &v113, 1);
      return 1;
    case 0x64:
      EnqueueAsyncIOMovie(a1->q090, 0);
      return 1;
    case 0x65:
      return ((TActionClass *)(int *)a1)->executeScatterAction( (int)a5, (int)v9, (int)a5, (int)a8);
    case 0x66:
      v112 = (IUnknown *)*((ScenarioClass*)(*(char **)&((unsigned char *)&HouseClass_Player)[29924]))->Get_Waypoint_Location( (unsigned int *)(&v130), a1->u32_44);
      ((Coord *)(&v131))->Subtract( (int)((IUnknown *)(((int16_t)v112 << 8) + 128)), (int)((IUnknown *)(((*((signed short *)(((unsigned char *)&(v112)) + 2))) << 8) + 128)), 0);
      v113 = v131;
      v128 = (CellStruct *)v132;
      GroundHeight = (CellStruct *)v133;
      GroundHeight = (CellStruct *)Cell::GetGroundHeight( (unsigned int *)&v113);
      if ( (*((unsigned int *)((CellCoord *)(&((unsigned char *)&stru_87C374)[13428]))->To_CellObj((int16_t *)&v112) + 80) & 0x100) != 0 )
        GroundHeight = (CellStruct *)((char *)GroundHeight + *(unsigned int *)&((unsigned char *)&stru_B05488)[37452]);
      int v13 = *((Coord *)&v113)->ToCell( (unsigned int *)&v130);
      if ( LightningStorm::IsActive() )
        return 0;
      LightningStorm::Start(
        *(unsigned int *)(*(unsigned int *)&((unsigned char *)&stru_87C374)[44652] + 6044),
        *(unsigned int *)(*(unsigned int *)&((unsigned char *)&stru_87C374)[44652] + 6036),
        v13,
        (void *)a5);
      return 1;
    case 0x67:
      char * v64 = a1->u8_6D != 0 ? &a1->u8_6D : 0;
      ((ScriptAction *)(Destination))->CopyStringField( (char *)(v64));
      if ( v64 )
      {
*(unsigned int *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 4596) = (unsigned int)GetStringCSF( (wchar_t *)v64, 0, (const char *)(&stru_830620[75224]), 2242);




        ScriptAction::CopyStructField(
          (void *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 4600),
  char v138[32]; // [esp+80h] [ebp-1D0h] BYREF
          v138,
          Destination);
      }
      else
      {
        *(unsigned int *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 4596) = (unsigned int)&((unsigned char *)&stru_87C374)[46016];
        ((ScriptAction *)v137)->CopyStringField( (char *)(&((unsigned char *)&stru_87C374)[56304]));
  char v139[32]; // [esp+A0h] [ebp-1B0h] BYREF
        ((ScriptAction *)((*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 4600)))->CopyStructField( (void *)(v139),(void *)((const void *)(v137)));
      }
      ((ObjectClass *)(&((unsigned char *)&stru_87C374)[13428]))->PreDraw();
      return 1;
    case 0x68:
      void * v107 = a1->ptr_30;
      if ( !v107 )
        return 1;
      ((TeamTypeClass *)v107)->FlashAllInstances( a1->q090);
      return 1;
    case 0x69:
      void * v108 = a1->ptr_30;
      if ( v108 )
      {
        FirstInstance = ((TeamTypeClass *)v108)->FindFirstInstance();
        if ( !FirstInstance )
          return 1;
        RevealTechnoClassRadarEvent(*(unsigned int *)(FirstInstance + 84), a1->q090);
        return 1;
      }
      else
      {
        RevealTechnoClassRadarEvent(0, 0);
        return 1;
      }
    case 0x6A:
      v112 = (IUnknown *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[44484] - 1);
      if ( *(unsigned int *)&((unsigned char *)&HouseClass_Player)[44484] - 1 < 0 )
        goto LABEL_290;
      int v110 = *(unsigned int *)&((unsigned char *)&HouseClass_Player)[44472] + 4 * (*(unsigned int *)&((unsigned char *)&HouseClass_Player)[44484] - 1);
      while ( strcmp((const char *)(*(unsigned int *)v110 + 36), &a1->u32_54) )
      {
        v110 -= 4;
        v112 = (IUnknown *)((char *)v112 - 1);
        if ( (int)v112 < 0 )
          goto LABEL_290;
      }
      *(unsigned int *)(*(unsigned int *)v110 + 1588) = a1->q090;
LABEL_290:
      int v111 = (int)&HouseClass_Count[-1].__tail_1602E[1];
      if ( (int)&HouseClass_Count[-1].__tail_1602E[1] < 0 )
        return 1;
      do
      {
        --v111;
        *(unsigned char *)(*(unsigned int *)&HouseClass_Array->q000[4 * v111 + 4] + 508) = 1;
      }
      while ( v111 >= 0 );
      return 1;
    case 0x6B:
      ecx293 = a1->ptr_30;
      if ( !ecx293 )
        return 0;
      edx294 = a1->u32_44;
      if ( edx294 == -1 )
        return 0;
      return ExecuteScriptTypeClassActions(ecx293, edx294);
    case 0x6C:
      v114 = (IUnknown **)((ScenarioClass*)(*(char **)&((unsigned char *)&HouseClass_Player)[29924]))->Get_Waypoint_Location( (unsigned int *)(v134), a1->u32_44);
      return BuildingClass::SearchPlacement(&((unsigned char *)&stru_87C374)[13428], *v114, a1->q090);
    case 0x6D:
      return ((TActionClass *)(int *)a1)->executeParadropAction( (int)a5, (int)v9, (int)a5,(int)((IUnknown *)a8));
    case 0x6E:
      SetScenarioClassTimer(a1->q090);
      return 1;
    case 0x6F:
      char v115 = 0;
      v116 = 0;
      if ( *(int *)&((unsigned char *)&HouseClass_Player)[44548] <= 0 )
        return (AbstractClass * *)v115;
      break;
    case 0x70:
      v112 = (IUnknown *)*((ScenarioClass*)(*(char **)&((unsigned char *)&HouseClass_Player)[29924]))->Get_Waypoint_Location( (unsigned int *)(v134), a1->u32_44);
      v119 = (CellStruct **)((CoordStruct *)v135)->Set2( (IUnknown *)&v112, 0);
      v113 = *v119;
      v128 = v119[1];
      GroundHeight = v119[2];
      GroundHeight = (CellStruct *)Cell::GetGroundHeight((unsigned int *)((IUnknown *)&v113));
      if ( (*((unsigned int *)((CellCoord *)(&((unsigned char *)&stru_87C374)[13428]))->To_CellObj((int16_t *)&v112) + 80) & 0x100) != 0
        || (*((unsigned int *)((CellCoord *)(&((unsigned char *)&stru_87C374)[13428]))->To_CellObj((int16_t *)&v112) + 80) & 0x400) != 0 )
      {
        GroundHeight = (CellStruct *)((char *)GroundHeight + *(unsigned int *)&((unsigned char *)&stru_B05488)[37452]);
      }
      ((Tactical *)(*(int *)&((unsigned char *)&stru_87C374)[44976]))->SetTacticalPosition( (int *)((IUnknown *)&v113));
      return 1;
    case 0x71:
      v120 = (AnimClass *)((ObjectClass *)((unsigned int *)(a5)))->FindOwner( a1->q090);
      if ( !v120 )
        return 0;
      HouseClass::NotifyImpactWater(v120);
      return 1;
    case 0x72:
// 0x6e4100
      return TActionClass::executePsychicDominatorAction(
      {
        unsigned int v5; // esi

          v5 = *&this->HouseClass_A20;
        if ( v5 >= 4 || !(uint8_t)PlayerClass::HasPlayers((PlayerClass *)(3988 * v5 + 8916268)) ) /*0x6e4124*/
          return 0; /*0x6e413e*/
        ((SidebarClass*)(&DataGlobal_87F7E8))->SwitchTab(v5); /*0x6e4133*/
        return 1; /*0x6e413a*/
      }
void* TerrainClass::LoadFromStream(unsigned int * a1, int a2)
{

  ObjectClass *v2; // ebp
  void **p_vtable1; // esi
  int v4; // eax
  ObjectClass *vtable0; // ecx
  void *vtable1; // edx
  int v7; // edi
  int v8; // eax
  signed int v9; // eax
  int v10; // ecx
  char *i; // eax
  unsigned int *v12; // eax
  int Register; // edi
  int v14; // esi
  int vtable2; // eax
  int v17; // [esp+Ch] [ebp-8h] BYREF

  v2 = (ObjectClass *)a1; /*0x71cda4*/
  p_vtable1 = &((unsigned int *)a1)[0]; /*0x71cdad*/
  v4 = (*((int (**)(void **))((unsigned int *)a1)[0] + 4))( (void **)(&((unsigned int *)a1)[0])); /*0x71cdb1*/
  vtable1 = (void *)(((char *)&g_BuildingLoadQueue_Array)); /*0x71cdb4*/
  v7 = v4; /*0x71cdba*/
  if ( ((char *)&g_BuildingLoadQueue_Array) ) /*0x71cdbe*/
  {
    if ( !(*((unsigned char *)&(((char *)&g_BuildingLoadQueue_Array)))) ) /*0x71cdcb*/
    {
      qsort( /*0x71cddc*/
        g_BuildingLoadQueue_Array.TechnoTypeClass,
        (size_t)((char *)&g_BuildingLoadQueue_Array),
        8u,
        (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
      vtable1 = (void *)(((char *)&g_BuildingLoadQueue_Array)); /*0x71cde1*/
      ((unsigned int *)&g_BuildingLoadQueue_Array)[0] = 0; /*0x71cdea*/
      (*((unsigned char *)&(((char *)&g_BuildingLoadQueue_Array)))) = 1; /*0x71cdf4*/
    }
    v17 = v7; /*0x71ce06*/
    v8 = BinaryArraySearch( (AbstractClass *)((int)g_BuildingLoadQueue_Array.TechnoTypeClass), (int)vtable1, (int *)(&v17)); /*0x71ce0a*/
    if ( v8 ) /*0x71ce11*/
    {
      v9 = (signed int)(v8 - (unsigned int)g_BuildingLoadQueue_Array.TechnoTypeClass) >> 3; /*0x71ce19*/
      if ( v9 != -1 ) /*0x71ce1f*/
      {
        v10 = v9 + 1; /*0x71ce21*/
        for ( i = (char *)((char *)&g_BuildingLoadQueue_Array); /*0x71ce2b*/
              v10 < (int)((char *)&g_BuildingLoadQueue_Array);
              i = (char *)((char *)&g_BuildingLoadQueue_Array) )
        {
          v12 = (unsigned int *)((char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * v10++); /*0x71ce33*/
          *(v12 - 2) = *v12; /*0x71ce39*/
          *(v12 - 1) = v12[1]; /*0x71ce3f*/
        }
        ((unsigned int *)&g_BuildingLoadQueue_Array)[0] = i - 1; /*0x71ce54*/
        *((unsigned int *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)((char *)&g_BuildingLoadQueue_Array)) = 0; /*0x71ce59*/
        vtable0 = (ObjectClass *)g_BuildingLoadQueue_Array.TechnoTypeClass; /*0x71ce61*/
        *((unsigned int *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)((char *)&g_BuildingLoadQueue_Array) + 1) = 0; /*0x71ce69*/
        ((unsigned int *)&g_BuildingLoadQueue_Array)[0] = 0; /*0x71ce6d*/
      }
    }
  }
  Register = ((BuildingClass *)(vtable0))->SaveLoad_Register(); /*0x71ce7e*/
  if ( Register >= 0 ) /*0x71ce82*/
  {
    if ( v2 ) /*0x71ce8a*/
    {
      ((ObjectClass *)(v2))->Init((int)&a1); /*0x71ce93*/
      /* X11: vtable install elided (implicit via TerrainClass virtuals 0x71ce98) */
      *p_vtable1 = &off_7F5200; /*0x71ce9f*/
      /* X11: vtable install elided (implicit via TerrainClass virtuals 0x71cea5) */
      /* X11: vtable install elided (implicit via TerrainClass virtuals 0x71ceac) */
    }
    v14 = (*((int (**)(void **))*p_vtable1 + 4))( (void **)(p_vtable1)); /*0x71cebf*/
    vtable2 = (int)((char *)&g_BuildingLoadQueue_Array); /*0x71cec1*/
    if ( (int)((char *)&g_BuildingLoadQueue_Array) + 1 <= (int)((char *)&g_BuildingLoadQueue_Array) ) /*0x71cec9*/
      goto LABEL_16; /*0x71cec9*/
    if ( !((char *)&g_BuildingLoadQueue_Array) ) /*0x71cecd*/
      vtable2 = 10; /*0x71cecf*/
    if ( BuildingTypeClass::Enqueue( (int)&g_BuildingLoadQueue_Array, (void *)(vtable2)) ) /*0x71ceda*/
    {
LABEL_16:
      *((unsigned int *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)((char *)&g_BuildingLoadQueue_Array)) = v14; /*0x71ceee*/
      *((unsigned int *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)((char *)&g_BuildingLoadQueue_Array) + 1) = v2; /*0x71cefc*/
      (*((unsigned char *)&(((char *)&g_BuildingLoadQueue_Array)))) = 0; /*0x71cf06*/
      ++((char *)&g_BuildingLoadQueue_Array); /*0x71cf0d*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2[1]); /*0x71cf1e*/
  }
  return (void*)Register; /*0x71cf25*/

}
}
}
}  // G42.18 ns repair
// 0x71D000
namespace gamemd {
AbstractClass * * TerrainClass::ProcessSpawnAnim(unsigned int * a1, AbstractClass * aP2)
{

  unsigned int *v3; // ebp
  int v4; // edi
  int v5; // ebx
  int i; // esi
  int v7; // ecx
  __int16 v8; // ax
  unsigned char *v9; // eax
  unsigned int *v10; // eax
  int v11; // edi
  char v14[12]; // [esp+8h] [ebp-Ch] BYREF

  v3 = a1; /*0x71d008*/
  if ( !(unsigned __int8)ObjectClass::Deploy((ObjectClass *)this) ) /*0x71d012*/
    return 0; /*0x71d13e*/
  v4 = *v3 / 256; /*0x71d03e*/
  v5 = v3->vtable2 / 256; /*0x71d041*/
  for ( i = 0; i < 8; ++i ) /*0x71d044*/
  {
    v7 = i & 7; /*0x71d048*/
    v8 = HIWORD(g_DDrawSurfaceManager.scenario[v7 + 82]); /*0x71d05d*/
    LOWORD(aP2) = v4 + LOWORD(g_DDrawSurfaceManager.scenario[v7 + 82]); /*0x71d061*/
    HIWORD(aP2) = v5 + v8; /*0x71d06d*/
    a1 = aP2; /*0x71d076*/
    v9 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, (__int16 *)&a1); /*0x71d080*/
    ++v9[290]; /*0x71d091*/
  }
  v10 = (unsigned int *)(*((int (**)(char *))this->ObjectClass + 43))(v14); /*0x71d0ab*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v10, &this->TerrainClass_field_rect_D0[2]); /*0x71d0b8*/
  v11 = *(unsigned int *)&g_TacticalClass_Instance[45] + this->TerrainClass_field_rect_D0[3]; /*0x71d0d6*/
  this->TerrainClass_field_rect_D0[2] += *(unsigned int *)&g_TacticalClass_Instance[44]; /*0x71d0dd*/
  this->TerrainClass_field_rect_D0[3] = v11; /*0x71d0df*/
  if ( *(unsigned int *)&Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v3)->__pad_28[28] != -1 ) /*0x71d0ef*/
  {
    if ( *(unsigned char *)(*(unsigned int *)(*(unsigned int *)g_BuildingTypeClass_Array /*0x71d108*/
                              + 4 * *(unsigned int *)&Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v3)->__pad_28[28])
                  + 681) )
    {
      *(unsigned int *)&Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v3)->__pad_28[28] = -1; /*0x71d123*/
      Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v3)->powerup = 0; /*0x71d12b*/
    }
  }
  return 1; /*0x71d137*/

}
}
// 0x71CF30
namespace gamemd {
int TerrainClass::CheckFrameUpdate(TechnoTypeClass * aP0, int * a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x71cf44*/
}
} // namespace gamemd

// 0x71D2F0
namespace gamemd {
int TerrainClass::MissionStubReturnZero()
{
  return 224; /*0x71d2f5*/
}
} // namespace gamemd

// 0x71D300
namespace gamemd {
int TerrainClass::MissionStubReturnZero2()
{
  return 36; /*0x71d305*/
}
} // namespace gamemd

// 0x71D310
namespace gamemd {
int TerrainClass::MissionStubReturnZero3(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x71d316*/
    return -2147467261; /*0x71d318*/
  *a2 = 237448654; /*0x71d326*/
  a2[1] = 298949647; /*0x71d32e*/
  a2[2] = -1610610249; /*0x71d337*/
  a2[3] = unk_7E974C; /*0x71d340*/
  return 0; /*0x71d31d*/
}
} // namespace gamemd
