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

// 0x6DD8B0
namespace gamemd {
AbstractClass * * TerrainClass_ProcessUpdate(void * a1, void * a2, void * a3, void * a4, void * a5)
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
  int ecx134; // ecx
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
    v9 = 0;
  switch ( *(unsigned int *)(a1 + 44) )
  {
  char v134[4]; // [esp+30h] [ebp-220h] BYREF
    case 1:
      v22 = (IUnknown *)HouseClass_Player.field_0;
      char v122 = 0;
      if ( *(unsigned int *)(a1 + 144) != *(unsigned int *)(*(unsigned int *)(HouseClass_Player.field_0 + 52) + 184) )
        goto LABEL_60;
      goto LABEL_162;
    case 2:
      v22 = (IUnknown *)HouseClass_Player.field_0;
      v122 = 0;
      if ( *(unsigned int *)(a1 + 144) == *(unsigned int *)(*(unsigned int *)(HouseClass_Player.field_0 + 52) + 184) )
        goto LABEL_60;
LABEL_162:
      HouseClass::CheckWinCondition((int)v22, 0);
      return 1;
    case 3:
      Owner = ObjectClass::FindOwner(a5, *(AnimClass **)(a1 + 144));
      if ( !Owner )
        return 0;
      *(unsigned char *)(Owner + 494) = 1;
      return 1;
    case 4:
      ++*(unsigned int *)&HouseClass_Player[43616];
      int v76 = *(unsigned int *)(a1 + 48);
      if ( v76 )
        TeamClass::CreateOneOf(v76, 0);
      --*(unsigned int *)&HouseClass_Player[43616];
      return 1;
    case 5:
      void * v77 = *(void **)(a1 + 48);
      if ( !v77 )
        return 1;
      TeamTypeClass::DestroyAllInstances(v77);
      return 1;
    case 6:
      int v81 = ObjectClass::FindOwner(a5, *(AnimClass **)(a1 + 144));
      if ( !v81 )
        return 0;
      (*(void (__stdcall **)(int))(*(unsigned int *)(v81 + 36) + 56))(v81 + 36);
      return 1;
    case 7:
      int v78 = *(unsigned int *)(a1 + 48);
      if ( !v78 )
        return 0;
      return DeployScriptActionPlane(v78, -1);
    case 8:
      return TActionClass::executeRetreatAction((int *)a1, aP1, (int)v9, (int)a5, aP4);
    case 9:
      int v74 = ObjectClass::FindOwner(a5, *(AnimClass **)(a1 + 144));
      if ( !v74 )
        return 0;
      *(unsigned int *)(v74 + 592) = 4;
      return 1;
    case 0xA:
      MouseClass::LoadCursors();
      (*(void (__thiscall **)(unsigned int))(**(unsigned int **)&stru_87C374[45772] + 20))(*(unsigned int *)&stru_87C374[45772]);
      ToggleDisplayMode(0);
      Movie::PlayWrapper(*(unsigned int *)(a1 + 144), 0, (int)a2, 1, 1, 1);
      ToggleDisplayMode(1);
      (*(void (__thiscall **)(unsigned int))(**(unsigned int **)&stru_87C374[45772] + 24))(*(unsigned int *)&stru_87C374[45772]);
      LoadingScreen::FreeResources3();
      return 1;
    case 0xB:
      int v43 = *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 13496);
      v44 = *(unsigned char *)(a1 + 109) != 0 ? (wchar_t *)(a1 + 109) : 0;
      if ( v43 )
        int v45 = v43 != 1 ? 5 : 1;
      else
        v45 = 2;
      PlayerColorScheme = SessionClass::GetPlayerColorScheme((ObjectClass *)v45);
      if ( !v44 )
        return 1;
      int v121 = Math::RoundToInt(*(double *)(*(unsigned int *)&stru_87C374[44652] + 5312) * 900.0);
      StringCSF = (wchar_t *)(GetStringCSF(v44, 0, &stru_830620[75224], 1766));
      MessageListClass::AddMessage(
        &HouseClass_Player[32532],
        0,
        0,
        (CellStruct *)StringCSF,
        PlayerColorScheme,
        (IUnknown *)0x4046,
        v121,
        0);
      return 1;
    case 0xC:
      if ( !*(unsigned int *)(a1 + 80) )
        return 1;
      int v87 = *(unsigned int *)&HouseClass_Player[44460] - 1;
      if ( *(unsigned int *)&HouseClass_Player[44460] - 1 < 0 )
        return 1;
      do
      {
        int v88 = *(unsigned int *)(*(unsigned int *)&HouseClass_Player[44448] + 4 * v87);
        if ( *(unsigned int *)(v88 + 36) == *(unsigned int *)(a1 + 80) )
          TeamClass::AddToBuildQueue((unsigned char *, unsigned int a1, unsigned int a5)v88);
        --v87;
      }
      while ( v87 >= 0 );
      return 1;
    case 0xD:
      int v75 = ObjectClass::FindOwner(a5, *(AnimClass **)(a1 + 144));
      if ( !v75 )
        return 0;
      *(unsigned char *)(v75 + 495) = 1;
      return 1;
    case 0xE:
      return TActionClass::executeEnterAction((unsigned int *)a1, (int)aP1, (int)v9, a5, (IUnknown *)aP4);
    case 0x10:
      if ( *(unsigned char *)(HouseClass_Player.field_0 + 576) )
        return 1;
      *(unsigned char *)(HouseClass_Player.field_0 + 576) = 1;
      LayerClass::CellIteratorReset(&stru_87C374[13428]);
      for ( i = LayerClass::CellIteratorNext(&stru_87C374[13428]);
            i;
            i = LayerClass::CellIteratorNext(&stru_87C374[13428]) )
      {
        Conditions::CheckResult(i + 36, (IUnknown *, unsigned int a1, unsigned int a5)HouseClass_Player.field_0);
      }
      MapClass::MarkForRedraw(&stru_87C374[13428], 1);
      return 1;
    case 0x11:
      return TActionClass::RevealWaypointArea((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x12:
      return TActionClass::RevealTileTypeAtWaypoint((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x13:
      PlayVocClass(*(unsigned int *)(a1 + 144), 0x2000, 1.0, 0);
      return 1;
    case 0x14:
      Theme::QueueSong((int)&g_BuildingTypeClass_Count, *(IUnknown **)(a1 + 144));
      return 1;
    case 0x15:
      UpdateThemeManager(*(unsigned int *)(a1 + 144), 2, -1);
      return 1;
    case 0x16:
      if ( !*(unsigned int *)(a1 + 80) )
        return 1;
      int v93 = 0;
      if ( *(int *)&HouseClass_Player[44460] <= 0 )
        return 1;
      do
      {
        int v94 = *(unsigned int *)(*(unsigned int *)&HouseClass_Player[44448] + 4 * v93);
        if ( *(unsigned int *)(v94 + 36) == *(unsigned int *)(a1 + 80) )
          BuildingClass::ExecuteTriggers(v94, 0, *(TriggerClass **)&stru_B05488[37368]);
        ++v93;
      }
      while ( v93 < *(int *)&HouseClass_Player[44460] );
      return 1;
    case 0x17:
      if ( *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 4584) != -1 )
        return 1;
      *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 4584) = *(unsigned int *)&HouseClass_Player[45112];
      ObjectClass::PreDraw(&stru_87C374[13428]);
      return 1;
    case 0x18:
      v54 = (TerrainTypeClass *)(*(unsigned int *)&HouseClass_Player[29924] + 4584);
      if ( *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 4584) == -1 )
        return 1;
      *(unsigned int *)&v54->__pad_0[8] = CDTimerClass::TimeRemaining((int *)(*(unsigned int *)&HouseClass_Player[29924]
                                                                      + 4584));
      *(unsigned int *)v54->__pad_0 = -1;
      ObjectClass::PreDraw(&stru_87C374[13428]);
      return 1;
    case 0x19:
      int v57 = CDTimerClass::TimeRemaining((int *)(*(unsigned int *)&HouseClass_Player[29924] + 4584));
      Timer::Start(&v131, (DynamicVector *)(15 * *(unsigned int *)(a1 + 144) + v57));
      int v58 = *(unsigned int *)&HouseClass_Player[29924] + 4584;
      *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 4584) = v131;
  int v132; // [esp+28h] [ebp-228h]
      *(unsigned int *)(v58 + 4) = v132;
  int v133; // [esp+2Ch] [ebp-224h]
      *(unsigned int *)(v58 + 8) = v133;
      ObjectClass::PreDraw(&stru_87C374[13428]);
      return 1;
    case 0x1A:
      if ( CDTimerClass::TimeRemaining((int *)(*(unsigned int *)&HouseClass_Player[29924] + 4584)) > 15 * *(unsigned int *)(a1 + 144) )
      {
        int v60 = CDTimerClass::TimeRemaining((int *)(*(unsigned int *)&HouseClass_Player[29924] + 4584));
        Timer::Start(&v113, (DynamicVector *)(v60 - 15 * *(unsigned int *)(a1 + 144)));
        ecx134 = *(unsigned int *)&HouseClass_Player[29924] + 4584;
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 4584) = v113;
        *(unsigned int *)(ecx134 + 4) = v128;
        *(unsigned int *)(ecx134 + 8) = GroundHeight;
        ObjectClass::PreDraw(&stru_87C374[13428]);
      }
      else
      {
        Timer::Start(&v131, 0);
        int v59 = *(unsigned int *)&HouseClass_Player[29924] + 4584;
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 4584) = v131;
        *(unsigned int *)(v59 + 4) = v132;
        *(unsigned int *)(v59 + 8) = v133;
        ObjectClass::PreDraw(&stru_87C374[13428]);
      }
      return 1;
    case 0x1B:
      Timer::Start(&v131, (DynamicVector *)(15 * *(unsigned int *)(a1 + 144)));
      int v62 = *(unsigned int *)&HouseClass_Player[29924] + 4584;
      *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 4584) = v131;
      *(unsigned int *)(v62 + 4) = v132;
      *(unsigned int *)(v62 + 8) = v133;
      v61 = *(ScenarioClass **)&HouseClass_Player[29924];
      if ( *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 4584) == -1 )
      {
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 4584) = *(unsigned int *)&HouseClass_Player[45112];
        v61 = *(ScenarioClass **)&HouseClass_Player[29924];
      }
      v61->missionTimer_text_csf = &stru_87C374[46016];
      ScriptAction::CopyStringField(Destination, &stru_87C374[56304]);
  char v137[32]; // [esp+60h] [ebp-1F0h] BYREF
      ScriptAction::CopyStructField((void *)(*(unsigned int *)&HouseClass_Player[29924] + 4600), v137, Destination);
      ObjectClass::PreDraw(&stru_87C374[13428]);
      return 1;
    case 0x1C:
      ScenarioClass::SetGlobalToByID(*(unsigned char **)&HouseClass_Player[29924], *(unsigned int *)(a1 + 144), 1);
      return 1;
    case 0x1D:
      ScenarioClass::SetGlobalToByID(*(unsigned char **)&HouseClass_Player[29924], *(unsigned int *)(a1 + 144), 0);
      return 1;
    case 0x1E:
      if ( !*(unsigned char *)(a1 + 144) )
      {
        IDA_HIBYTE(aP1[13].referenceCount) = 0;
        return 1;
      }
      IDA_HIBYTE(aP1[13].referenceCount) = 1;
      if ( aP1[2].nextArrayIndex > 0 )
      {
        v50 = *(IUnknown **)(**(unsigned int **)&aP1[2].__pad_0[12] + 156);
        int v53 = *(unsigned int *)(**(unsigned int **)&aP1[2].__pad_0[12] + 160);
        v133 = *(unsigned int *)(**(unsigned int **)&aP1[2].__pad_0[12] + 164);
        v52 = *(IUnknown **)CellStruct::Set(&v130, (int)v50 / 256, v53 / 256);
        HouseClass::SetMapSeed(aP1, v52);
        aP1[620].NeedsSaveOrLink = v52;
      }
      if ( !*(unsigned int *)&aP1[619].__pad_0[8] )
      {
        HouseClass::SetPrimaryTechBuilding((int)aP1);
        return 1;
      }
      return 1;
    case 0x1F:
      MapClass::ProcessVisibilityFlags(&stru_87C374[13428]);
      return 1;
    case 0x20:
      return globalHelper_0E2050((int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x21:
      SuperClass::StartTimer(*(unsigned int *)(aP1[16].nextArrayIndex + 4 * *(unsigned int *)(a1 + 144)), (IUnknown *)1, 0, 0);
      if ( (AbstractClass *)HouseClass_Player.field_0 == aP1 )
        goto LABEL_157;
      return 1;
    case 0x22:
      SuperClass::StartTimer(*(unsigned int *)(aP1[16].nextArrayIndex + 4 * *(unsigned int *)(a1 + 144)), 0, 0, 0);
      *(unsigned char *)(*(unsigned int *)(aP1[16].nextArrayIndex + 4 * *(unsigned int *)(a1 + 144)) + 96) = 0;
      if ( (AbstractClass *)HouseClass_Player.field_0 != aP1 )
        return 1;
LABEL_157:
      SidebarClass::AddCameo((int *)&stru_87C374[13428], 31, *(AnimClass **)(a1 + 144));
      Status = (IUnknown *)HouseClass::GetStatus((IUnknown *)0x1F, 0);
      Sidebar::ActivateTab((int)&stru_87C374[13428], Status);
      return 1;
    case 0x23:
      if ( !aP1 )
        return 1;
      aP1[603].NeedsSaveOrLink = *(void **)(a1 + 144);
      return 1;
    case 0x24:
      return TActionClass::ConvertHouseUnits((unsigned int *)a1, (int)aP1, (int)v9, a5, (IUnknown *)aP4);
    case 0x25:
      v48 = (HouseClass *)ObjectClass::FindOwner(a5, *(AnimClass **)(a1 + 144));
      int v49 = (int)v48;
      if ( !v48 )
        return 0;
      HouseClass::HandleAlliance((int)aP1, v48, 0);
      HouseClass::HandleAlliance(v49, (HouseClass *)aP1, 0);
      return 1;
    case 0x26:
      eax105 = (IUnknown *)ObjectClass::FindOwner(a5, *(AnimClass **)(a1 + 144));
      int v51 = (int)eax105;
      if ( !eax105 )
        return 0;
      HouseClass::SetAlliance((int)aP1, eax105, 0);
      HouseClass::SetAlliance(v51, (IUnknown *)aP1, 0);
      return 1;
    case 0x27:
    case 0x5C:
    case 0x5D:
      return 1;
    case 0x28:
      return TActionClass::executeFollowAction((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x29:
      return TActionClass::executeEscortAction((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x2A:
      return TActionClass::CreateWeaponImpactAtWaypoint((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x2B:
      return TActionClass::executeLoadAction((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x2C:
      if ( LightningStorm::IsActive() )
        return 0;
      LightningStorm::Start(
        *(unsigned int *)(a1 + 144),
        *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 6036),
        *(int *)&stru_B05488[37368],
        0);
      return 1;
    case 0x2D:
      result = LightningStorm::IsActive();
      if ( result )
      {
        LightningStorm::End();
        return 1;
      }
      return result;
    case 0x2E:
      *(unsigned int *)&stru_87C374[17944] = 0;
      *(unsigned int *)&stru_87C374[17948] = 0;
      *(unsigned int *)&stru_87C374[17952] = -1;
      Mouse::SetBounds((int)&stru_87C374[13428], 0);
      BuildingClass::TogglePower2(&stru_87C374[13428], 0);
      BuildingClass::TogglePower(&stru_87C374[13428], 0);
      stru_87C374[17958] = 0;
      stru_87C374[17959] = 0;
      stru_87C374[17960] = 0;
      Scenario::ClearScreen();
      return 1;
    case 0x2F:
      UpdateMouse();
      return 1;
    case 0x30:
      v112 = (IUnknown *)*ScenarioClass::Get_Waypoint_Location(
                            *(char **)&HouseClass_Player[29924],
                            &v130,
                            *(unsigned int *)(a1 + 68));
      v82 = (CellStruct **)CoordStruct::Set2(&v131, (IUnknown *)&v112, 0);
      v113 = *v82;
      v128 = v82[1];
      GroundHeight = v82[2];
      GroundHeight = (CellStruct *)Cell::GetGroundHeight((IUnknown *)&v113);
      if ( (*((unsigned int *)CellCoord::To_CellObj(&stru_87C374[13428], (int16_t *)&v112) + 80) & 0x100) != 0
        || (*((unsigned int *)CellCoord::To_CellObj(&stru_87C374[13428], (int16_t *)&v112) + 80) & 0x400) != 0 )
      {
        GroundHeight = (CellStruct *)((char *)GroundHeight + *(unsigned int *)&stru_B05488[37452]);
      }
      TacticalClass::SetPosition(
        *(unsigned int **)&stru_87C374[44976],
        (IUnknown *)&v113,
        *(AbstractClass **)(a1 + 144));
      return 1;
    case 0x31:
      int v83 = *(unsigned int *)&stru_87C374[44652] + 1360;
      *(unsigned int *)(*(unsigned int *)&stru_87C374[44976] + 192) = *(unsigned int *)(*(unsigned int *)&stru_87C374[44652]
                                                                               + 1360);
      *(unsigned int *)(*(unsigned int *)&stru_87C374[44976] + 196) = *(unsigned int *)(v83 + 4);
      HouseClass_Player[45136] = 1;
      Timer::PumpMessages(*(HWND **)&stru_87C374[13308]);
      (*(void (__thiscall **)(unsigned int))(**(unsigned int **)&stru_87C374[45772] + 12))(*(unsigned int *)&stru_87C374[45772]);
      Mouse::ReleaseCapture(&stru_87C374[13428]);
      MapClass::MarkForRedraw(&stru_87C374[13428], 0);
      TacticalMap::Redraw(&stru_87C374[13428]);
      Sleep(0x3E8u);
      return 1;
    case 0x32:
      *(unsigned int *)(*(unsigned int *)&stru_87C374[44976] + 192) = 0;
      *(unsigned int *)(*(unsigned int *)&stru_87C374[44976] + 196) = 1072693248;
      Timer::PumpMessages(*(HWND **)&stru_87C374[13308]);
      HouseClass_Player[45136] = *(unsigned char *)(*(unsigned int *)&HouseClass_Player[29924] + 13730);
      (*(void (__thiscall **)(unsigned int))(**(unsigned int **)&stru_87C374[45772] + 16))(*(unsigned int *)&stru_87C374[45772]);
      MapClass::MarkForRedraw(&stru_87C374[13428], 0);
      TacticalMap::Redraw(&stru_87C374[13428]);
      return 1;
    case 0x33:
      TActionClass::executeRepairAction(&stru_87C374[13428], (int)aP1);
      return 1;
    case 0x34:
      char v84 = 0;
      if ( *(int *)&HouseClass_Player[44548] > 0 )
      {
        do
        {
          int v85 = *(unsigned int *)(*(unsigned int *)&HouseClass_Player[44536] + 4 * v10);
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
                        if ( LinkedList_flat::Contains(ecx213, a5) )
                        {
                          BuildingLightClass::FindTarget(*(unsigned int **)(v85 + 1536), *(CCINIClass **)(a1 + 144));
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
        while ( v10 < *(int *)&HouseClass_Player[44548] );
      }
      return v84;
    case 0x35:
      return TActionClass::executeUnloadAction((unsigned int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x36:
      if ( !*(unsigned int *)(a1 + 80) )
        return 1;
      int v95 = 0;
      if ( *(int *)&HouseClass_Player[44460] <= 0 )
        return 1;
      do
      {
        int v96 = *(unsigned int *)(*(unsigned int *)&HouseClass_Player[44448] + 4 * v95);
        if ( *(unsigned int *)(v96 + 36) == *(unsigned int *)(a1 + 80) )
          TActionClass::executeDetonateAction((unsigned char *)v96);
        ++v95;
      }
      while ( v95 < *(int *)&HouseClass_Player[44460] );
      return 1;
    case 0x37:
      Waypoint_Location = (IUnknown **)ScenarioClass::Get_Waypoint_Location(
                                         *(char **)&HouseClass_Player[29924],
                                         &v130,
                                         *(unsigned int *)(a1 + 68));
  int v98; // edx
      CreateTriggerClassIfFarEnough(*(IUnknown **)(a1 + 144), v98, *Waypoint_Location);
      return 1;
    case 0x38:
      ScenarioClass::SetLocalToByID(*(unsigned char **)&HouseClass_Player[29924], *(unsigned int *)(a1 + 144), 1);
      return 1;
    case 0x39:
      ScenarioClass::SetLocalToByID(*(unsigned char **)&HouseClass_Player[29924], *(unsigned int *)(a1 + 144), 0);
      return 1;
    case 0x3A:
      return TActionClass::SpawnMeteorShower((int *)a1, aP1, (int)v9, (int)a5, aP4);
    case 0x3B:
      v112 = (IUnknown *)*ScenarioClass::Get_Waypoint_Location(
                            *(char **)&HouseClass_Player[29924],
                            &v130,
                            *(unsigned int *)(a1 + 144));
      MapClass::TriggerEVA((IUnknown *)&v112);
      return 1;
    case 0x3C:
      char v31 = 0;
      for ( j = 0; j < *(int *)&HouseClass_Player[44548]; ++j )
      {
        int v33 = *(unsigned int *)(*(unsigned int *)&HouseClass_Player[44536] + 4 * j);
        if ( *(unsigned char *)(v33 + 144) )
        {
          if ( *(unsigned char *)(v33 + 116) )
          {
            if ( !*(unsigned char *)(v33 + 129) )
            {
              unsigned int * v34 = *(unsigned int **)(v33 + 52);
              if ( v34 )
              {
                if ( LinkedList_flat::Contains(v34, a5) )
                {
                  (*(void (__thiscall **)(int, int))(*(unsigned int *)v33 + 416))(v33, 1);
                  v31 = 1;
                }
              }
            }
          }
        }
      }
      return v31;
    case 0x3D:
      bl75 = 0;
      for ( k = 0; k < *(int *)&HouseClass_Player[44548]; ++k )
      {
        v35 = *(BuildingClass **)(*(unsigned int *)&HouseClass_Player[44536] + 4 * k);
        if ( v35->isAliveFlag )
        {
          if ( v35->isOnMap )
          {
            if ( !v35->inLimbo )
            {
              attachedTag = v35->attachedTag;
              if ( attachedTag )
              {
                if ( LinkedList_flat::Contains(attachedTag, a5) && v35->HasPower )
                {
                  BuildingClass::PowerOff((int)v35);
                  bl75 = 1;
                }
              }
            }
          }
        }
      }
      return bl75;
    case 0x3E:
      bl85 = 0;
      for ( m = 0; m < *(int *)&HouseClass_Player[44548]; ++m )
      {
        v39 = *(BuildingClass **)(*(unsigned int *)&HouseClass_Player[44536] + 4 * m);
        if ( v39->isAliveFlag )
        {
          if ( v39->isOnMap )
          {
            if ( !v39->inLimbo )
            {
              unsigned int * v42 = v39->attachedTag;
              if ( v42 )
              {
                if ( LinkedList_flat::Contains(v42, a5) && !v39->HasPower )
                {
                  BuildingClass::AnnounceReady((int)v39);
                  bl85 = 1;
                }
              }
            }
          }
        }
      }
      return bl85;
    case 0x3F:
      return PlayWaypointEffect((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x40:
      int v25 = *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 4008);
      WorldCoords = Cell::GetWorldCoords(*(int16_t **)&HouseClass_Player[29924], &v131, *(unsigned int *)(a1 + 144));
      CreateSmokeEffectAt(50, v25, *WorldCoords, WorldCoords[1], WorldCoords[2], 0, 0);
      return 1;
    case 0x41:
      int v27 = *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 4008);
      int * v28 = Cell::GetWorldCoords(*(int16_t **)&HouseClass_Player[29924], &v131, *(unsigned int *)(a1 + 144));
      CreateSmokeEffectAt(100, v27, *v28, v28[1], v28[2], 0, 0);
      return 1;
    case 0x42:
      int v29 = *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 4008);
      int * v30 = Cell::GetWorldCoords(*(int16_t **)&HouseClass_Player[29924], &v131, *(unsigned int *)(a1 + 144));
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
      TActionClass::executeBuildAction(HouseClass_Player.field_0);
      return 1;
    case 0x46:
      if ( !*(unsigned int *)(a1 + 76) )
        return 1;
      int v89 = *(unsigned int *)&stru_B05488[37544];
      int v90 = 0;
      if ( *(int *)&stru_B05488[37544] <= 0 )
        return 1;
      v86 = *(CCINIClass **)&stru_B05488[37532];
      do
      {
        if ( *(unsigned int *)(*(unsigned int *)&v86->__pad_0[4 * v90] + 36) == *(unsigned int *)(a1 + 76) )
        {
          int v92 = *(unsigned int *)&v86->__pad_0[4 * v90];
          if ( v92 )
          {
            (*(void (__thiscall **)(int, int))(*(unsigned int *)v92 + 32))(v92, 1);
            v86 = *(CCINIClass **)&stru_B05488[37532];
          }
          --v90;
        }
        ++v90;
      }
      while ( v90 < v89 );
      return 1;
    case 0x47:
      *(double *)(*(unsigned int *)&stru_87C374[44652] + 5744) = *(float *)(a1 + 144);
      return 1;
    case 0x48:
      *(double *)(*(unsigned int *)&stru_87C374[44652] + 5736) = *(float *)(a1 + 144);
      return 1;
    case 0x49:
      *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 13608) = *(unsigned int *)(a1 + 144);
      if ( LightningStorm::IsActive() )
        return 1;
      *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 13616) = *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924]
                                                                                      + 13608);
      return 1;
    case 0x4A:
      int v99 = ObjectClass::FindOwner(a5, *(AnimClass **)(a1 + 144));
      if ( !v99 )
        return 0;
      *(unsigned char *)(v99 + 498) = 1;
      return 1;
    case 0x4B:
      int v100 = ObjectClass::FindOwner(a5, *(AnimClass **)(a1 + 144));
      if ( !v100 )
        return 0;
      *(unsigned char *)(v100 + 498) = 0;
      return 1;
    case 0x4C:
      if ( !aP1 )
        return 1;
      *(unsigned int *)&aP1[614].__pad_0[4] = *(unsigned int *)(a1 + 144);
      return 1;
    case 0x4D:
      if ( !aP1 )
        return 1;
      *(unsigned int *)&aP1[614].__pad_0[8] = *(unsigned int *)(a1 + 144);
      return 1;
    case 0x4E:
      if ( !aP1 )
        return 1;
      *(unsigned int *)&aP1[614].__pad_0[12] = *(unsigned int *)(a1 + 144);
      return 1;
    case 0x4F:
      if ( !aP1 )
        return 1;
      aP1[614].uniqueId = *(unsigned int *)(a1 + 144);
      return 1;
    case 0x50:
      int v79 = *(unsigned int *)(a1 + 48);
      if ( !v79 )
        return 0;
      int v80 = *(unsigned int *)(a1 + 68);
      if ( v80 == -1 )
        return 0;
      return DeployScriptActionPlane(v79, v80);
    case 0x51:
      return globalHelper_0E01C0((int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x52:
      int v18 = 0;
      if ( *(int *)&stru_89E138[89240] <= 0 )
        return 1;
      do
      {
        int v19 = *(unsigned int *)(*(unsigned int *)&stru_89E138[89228] + 4 * v18);
        if ( !(*(int (__thiscall **)(int))(*(unsigned int *)v19 + 388))(v19)
          && *(int *)(v19 + 108) > 0
          && *(unsigned char *)(v19 + 144)
          && *(unsigned char *)(v19 + 116)
          && !*(unsigned char *)(v19 + 129)
          && aP1 != *(AbstractClass **)(v19 + 540) )
        {
          (*(void (__thiscall **)(int, int, unsigned int))(*(unsigned int *)v19 + 488))(v19, 5, 0);
        }
        ++v18;
      }
      while ( v18 < *(int *)&stru_89E138[89240] );
      return 1;
    case 0x53:
      int v20 = 0;
      if ( *(int *)&stru_89E138[89240] <= 0 )
        return 1;
      do
      {
        int v21 = *(unsigned int *)(*(unsigned int *)&stru_89E138[89228] + 4 * v20);
        if ( (*(int (__thiscall **)(int))(*(unsigned int *)v21 + 388))(v21) == 23
          && *(int *)(v21 + 108) > 0
          && *(unsigned char *)(v21 + 144)
          && *(unsigned char *)(v21 + 116)
          && !*(unsigned char *)(v21 + 129)
          && *(AbstractClass **)(v21 + 540) == aP1 )
        {
          (*(void (__thiscall **)(int, int, unsigned int))(*(unsigned int *)v21 + 488))(v21, 5, 0);
        }
        ++v20;
      }
      while ( v20 < *(int *)&stru_89E138[89240] );
      return 1;
    case 0x54:
      ebx47 = 0;
      if ( *(int *)&HouseClass_Player[44860] <= 0 )
        return 1;
      do
      {
        unsigned int * v23 = *(unsigned int **)(*(unsigned int *)&HouseClass_Player[44848] + 4 * ebx47);
        if ( v23[133] == *(unsigned int *)(a1 + 144)
          && (!(*(int (__thiscall **)(unsigned int))(*v23 + 388))(*(unsigned int *)(*(unsigned int *)&HouseClass_Player[44848]
                                                                      + 4 * ebx47))
           || (*(int (__thiscall **)(unsigned int *))(*v23 + 388))(v23) == 23)
          && (int)v23[27] > 0
          && *((unsigned char *)v23 + 144)
          && *((unsigned char *)v23 + 116)
          && !*((unsigned char *)v23 + 129) )
        {
          (*(void (__thiscall **)(unsigned int *, int, unsigned int))(*v23 + 488))(v23, 5, 0);
        }
        ++ebx47;
      }
      while ( ebx47 < *(int *)&HouseClass_Player[44860] );
      return 1;
    case 0x55:
      *(unsigned char *)(*(unsigned int *)&HouseClass_Player[29924] + 13479) = *(unsigned char *)(a1 + 144);
      return 1;
    case 0x56:
      *(unsigned char *)(*(unsigned int *)&HouseClass_Player[29924] + 13478) = *(unsigned char *)(a1 + 144);
      return 1;
    case 0x57:
      *(unsigned char *)(*(unsigned int *)&HouseClass_Player[29924] + 13480) = *(unsigned char *)(a1 + 144);
      return 1;
    case 0x58:
      v112 = (IUnknown *)*ScenarioClass::Get_Waypoint_Location(
                            *(char **)&HouseClass_Player[29924],
                            &v130,
                            *(unsigned int *)(a1 + 68));
  unsigned int v135[3]; // [esp+34h] [ebp-21Ch] BYREF
      v101 = (CellStruct **)CoordStruct::Set2(v135, (IUnknown *)&v112, 0);
      v113 = *v101;
      v128 = v101[1];
      GroundHeight = v101[2];
      CoordStruct::Set2(&v131, (IUnknown *)&v112, 0);
      GroundHeight = (CellStruct *)Cell::GetGroundHeight((IUnknown *)&v131);
      int v102 = operator new(0x100u);
      if ( !v102 )
        return 1;
      ParticleSystemClass::Constructor(
        v102,
        *(IUnknown **)(*(unsigned int *)&HouseClass_Player[32] + 4 * *(unsigned int *)(a1 + 144)),
        (IUnknown *)&v113,
        0,
        0,
        (IUnknown *)&stru_B05488[37400],
        0);
      return 1;
    case 0x59:
      int v103 = 0;
      v112 = (IUnknown *)*ScenarioClass::Get_Waypoint_Location(
                            *(char **)&HouseClass_Player[29924],
                            &v130,
                            *(unsigned int *)(a1 + 68));
      if ( g_GameCleanupState <= 0 )
        return 1;
      do
      {
        unsigned char * v104 = *(unsigned char **)&dword_A8020C->__pad_0[4 * v103];
        if ( v104[144] )
        {
          unsigned short * v105 = (unsigned short *)(*(int (__thiscall **)(unsigned char *, char *))(*(unsigned int *)v104 + 440))(v104, v134);
          if ( CellStruct::Equals(v105, &v112) )
            (*(void (__thiscall **)(unsigned char *))(*(unsigned int *)v104 + 248))(v104);
        }
        ++v103;
      }
      while ( v103 < g_GameCleanupState );
      return 1;
    case 0x5A:
      v106 = (IUnknown **)ScenarioClass::Get_Waypoint_Location(
                            *(char **)&HouseClass_Player[29924],
                            v134,
                            *(unsigned int *)(a1 + 68));
      LightningStorm::Strike(*v106);
      return 1;
    case 0x5B:
      char v14 = 0;
      for ( n = 0; n < *(int *)&HouseClass_Player[172]; ++n )
      {
        int v16 = *(unsigned int *)(*(unsigned int *)&HouseClass_Player[160] + 4 * n);
        if ( *(unsigned char *)(v16 + 144) )
        {
          if ( *(unsigned char *)(v16 + 116) )
          {
            if ( !*(unsigned char *)(v16 + 129) )
            {
              unsigned int * v17 = *(unsigned int **)(v16 + 52);
              if ( v17 )
              {
                if ( LinkedList_flat::Contains(v17, a5) )
                {
                  (*(void (__thiscall **)(int))(*(unsigned int *)v16 + 1300))(v16);
                  v14 = 1;
                }
              }
            }
          }
        }
      }
      return v14;
    case 0x5E:
  unsigned int *v11; // eax
      v11 = ScenarioClass::Get_Waypoint_Location(
              *(char **)&HouseClass_Player[29924],
              &v130,
              *(unsigned int *)(a1 + 68));
      Coord::Subtract(
        &v131,
        (IUnknown *)(((int16_t)*v11 << 8) + 128),
        (IUnknown *)(((int16_t)IDA_HIWORD(*v11) << 8) + 128),
        0);
      v113 = v131;
      v128 = (CellStruct *)v132;
      GroundHeight = (CellStruct *)v133;
      GroundHeight = (CellStruct *)Cell::GetGroundHeight((IUnknown *)&v113);
      unsigned int * v12 = (unsigned int *)operator new(0x14u);
      if ( !v12 )
        return 1;
      ActionQueue::PushEntry(v12, (int)v113, (int)v128, (int)GroundHeight);
      return 1;
    case 0x5F:
      return TActionClass::CreateNukeEffect((int *)a1, aP1, (int)v9, (int)a5, aP4);
    case 0x60:
      return SuperWeaponClass::CreateChemLauncher((unsigned int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x61:
      *(unsigned char *)(*(unsigned int *)&HouseClass_Player[29924] + 13477) = *(unsigned char *)(*(unsigned int *)&HouseClass_Player[29924]
                                                                                    + 13477) == 0;
      return 1;
    case 0x62:
      Array::ForEach(aP0, 4, (IUnknown *)0x64, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2);
      int v65 = 0;
      int v66 = 0;
      v67 = aP0;
      do
      {
        if ( ScenarioClass::Is_Waypoint_Valid(*(char **)&HouseClass_Player[29924], v66) )
        {
          ++v65;
          *(unsigned int *)v67->__pad_0 = *ScenarioClass::Get_Waypoint_Location(
                                       *(char **)&HouseClass_Player[29924],
                                       &v130,
                                       v66);
          v67 = (AbstractClass *)((char *)v67 + 4);
          if ( v65 == 400 )
            break;
        }
        ++v66;
      }
      while ( v66 < 702 );
      int v68 = Random::Range((unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 536), 0, (IUnknown *)(v65 - 1));
      unsigned int * v69 = CoordStruct::Set2(&v131, (IUnknown *)((char *)aP0 + 4 * v68), 0);
      PlayAudioAt2(*(IUnknown **)(a1 + 144), v69, 0);
      return 1;
    case 0x63:
      v70 = (CellStruct **)Cell::GetWorldCoords(
                             *(int16_t **)&HouseClass_Player[29924],
                             &v131,
                             *(unsigned int *)(a1 + 68));
      v113 = *v70;
      v128 = v70[1];
      GroundHeight = v70[2];
      unsigned int * v71 = ScriptAction::ReadParameter(&v113);
      if ( v71 )
        ObjectClass::CheckFlagD0(v71, *(IUnknown **)(a1 + 144));
      else
        PlayAudioAt2(*(IUnknown **)(a1 + 144), &v113, 1);
      return 1;
    case 0x64:
      EnqueueAsyncIOMovie(*(unsigned int *)(a1 + 144), 0);
      return 1;
    case 0x65:
      return TActionClass::executeScatterAction((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x66:
      v112 = (IUnknown *)*ScenarioClass::Get_Waypoint_Location(
                            *(char **)&HouseClass_Player[29924],
                            &v130,
                            *(unsigned int *)(a1 + 68));
      Coord::Subtract(&v131, (IUnknown *)(((int16_t)v112 << 8) + 128), (IUnknown *)((IDA_SHIWORD(v112) << 8) + 128), 0);
      v113 = v131;
      v128 = (CellStruct *)v132;
      GroundHeight = (CellStruct *)v133;
      GroundHeight = (CellStruct *)Cell::GetGroundHeight((IUnknown *)&v113);
      if ( (*((unsigned int *)CellCoord::To_CellObj(&stru_87C374[13428], (int16_t *)&v112) + 80) & 0x100) != 0 )
        GroundHeight = (CellStruct *)((char *)GroundHeight + *(unsigned int *)&stru_B05488[37452]);
      int v13 = *Coord::ToCell(&v113, (IUnknown *)&v130);
      if ( LightningStorm::IsActive() )
        return 0;
      LightningStorm::Start(
        *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 6044),
        *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 6036),
        v13,
        (void *)aP1);
      return 1;
    case 0x67:
      char * v64 = *(unsigned char *)(a1 + 109) != 0 ? (char *)(a1 + 109) : 0;
      ScriptAction::CopyStringField(Destination, v64);
      if ( v64 )
      {
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 4596) = GetStringCSF(
                                                                               (wchar_t *)v64,
                                                                               0,
                                                                               &stru_830620[75224],
                                                                               2242);
        ScriptAction::CopyStructField(
          (void *)(*(unsigned int *)&HouseClass_Player[29924] + 4600),
  char v138[32]; // [esp+80h] [ebp-1D0h] BYREF
          v138,
          Destination);
      }
      else
      {
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 4596) = &stru_87C374[46016];
        ScriptAction::CopyStringField(v137, &stru_87C374[56304]);
  char v139[32]; // [esp+A0h] [ebp-1B0h] BYREF
        ScriptAction::CopyStructField((void *)(*(unsigned int *)&HouseClass_Player[29924] + 4600), v139, v137);
      }
      ObjectClass::PreDraw(&stru_87C374[13428]);
      return 1;
    case 0x68:
      void * v107 = *(void **)(a1 + 48);
      if ( !v107 )
        return 1;
      TeamTypeClass::FlashAllInstances(v107, *(AnimClass **)(a1 + 144));
      return 1;
    case 0x69:
      void * v108 = *(void **)(a1 + 48);
      if ( v108 )
      {
        FirstInstance = TeamTypeClass::FindFirstInstance(v108);
        if ( !FirstInstance )
          return 1;
        RevealTechnoClassRadarEvent(*(unsigned int *)(FirstInstance + 84), *(unsigned int *)(a1 + 144));
        return 1;
      }
      else
      {
        RevealTechnoClassRadarEvent(0, 0);
        return 1;
      }
    case 0x6A:
      v112 = (IUnknown *)(*(unsigned int *)&HouseClass_Player[44484] - 1);
      if ( *(unsigned int *)&HouseClass_Player[44484] - 1 < 0 )
        goto LABEL_290;
      int v110 = *(unsigned int *)&HouseClass_Player[44472] + 4 * (*(unsigned int *)&HouseClass_Player[44484] - 1);
      while ( strcmp((const char *)(*(unsigned int *)v110 + 36), (const char *)(a1 + 84)) )
      {
        v110 -= 4;
        v112 = (IUnknown *)((char *)v112 - 1);
        if ( (int)v112 < 0 )
          goto LABEL_290;
      }
      *(unsigned int *)(*(unsigned int *)v110 + 1588) = *(unsigned int *)(a1 + 144);
LABEL_290:
      int v111 = (int)&HouseClass_Count[-1].__tail_1602E[1];
      if ( (int)&HouseClass_Count[-1].__tail_1602E[1] < 0 )
        return 1;
      do
      {
        --v111;
        *(unsigned char *)(*(unsigned int *)&HouseClass_Array->__pad_0[4 * v111 + 4] + 508) = 1;
      }
      while ( v111 >= 0 );
      return 1;
    case 0x6B:
      ecx293 = *(unsigned int **)(a1 + 48);
      if ( !ecx293 )
        return 0;
      edx294 = *(unsigned int *)(a1 + 68);
      if ( edx294 == -1 )
        return 0;
      return ExecuteScriptTypeClassActions(ecx293, edx294);
    case 0x6C:
      v114 = (IUnknown **)ScenarioClass::Get_Waypoint_Location(
                            *(char **)&HouseClass_Player[29924],
                            v134,
                            *(unsigned int *)(a1 + 68));
      return BuildingClass::SearchPlacement(&stru_87C374[13428], *v114, *(MouseClass **)(a1 + 144));
    case 0x6D:
      return TActionClass::executeParadropAction((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x6E:
      SetScenarioClassTimer(*(unsigned int *)(a1 + 144));
      return 1;
    case 0x6F:
      char v115 = 0;
      v116 = 0;
      if ( *(int *)&HouseClass_Player[44548] <= 0 )
        return v115;
      break;
    case 0x70:
      v112 = (IUnknown *)*ScenarioClass::Get_Waypoint_Location(
                            *(char **)&HouseClass_Player[29924],
                            v134,
                            *(unsigned int *)(a1 + 68));
      v119 = (CellStruct **)CoordStruct::Set2(v135, (IUnknown *)&v112, 0);
      v113 = *v119;
      v128 = v119[1];
      GroundHeight = v119[2];
      GroundHeight = (CellStruct *)Cell::GetGroundHeight((IUnknown *)&v113);
      if ( (*((unsigned int *)CellCoord::To_CellObj(&stru_87C374[13428], (int16_t *)&v112) + 80) & 0x100) != 0
        || (*((unsigned int *)CellCoord::To_CellObj(&stru_87C374[13428], (int16_t *)&v112) + 80) & 0x400) != 0 )
      {
        GroundHeight = (CellStruct *)((char *)GroundHeight + *(unsigned int *)&stru_B05488[37452]);
      }
      Tactical::SetTacticalPosition(*(int *)&stru_87C374[44976], (IUnknown *)&v113);
      return 1;
    case 0x71:
      v120 = (AnimClass *)ObjectClass::FindOwner(a5, *(AnimClass **)(a1 + 144));
      if ( !v120 )
        return 0;
      HouseClass::NotifyImpactWater(v120);
      return 1;
    case 0x72:
      return TActionClass::executePsychicDominatorAction(
               (unsigned int *)a1,
               (int)aP1,
               (int)v9,
               (int)a5,
               (IUnknown *)aP4);
    case 0x73:
      return TActionClass::executeGeneticMutatorAction((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x74:
      return TActionClass::executeGuardAreaAction((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x75:
      EnqueueAsyncIOMovie(*(unsigned int *)(a1 + 144), 1);
      return 1;
    case 0x76:
      return globalHelper_0E2C20((int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x77:
      return TActionClass::executePlaceBeaconAction((unsigned int *)a1, (int)aP1, (int)v9, a5, (IUnknown *)aP4);
    case 0x78:
      return TActionClass::executeJumpjetAction((unsigned int *)a1, (int)aP1, (int)v9, a5, (IUnknown *)aP4);
    case 0x79:
      return TActionClass::executeOpenGateAction((unsigned int *)a1, (int)aP1, (int)v9, a5, (IUnknown *)aP4);
    case 0x7A:
      return TActionClass::executeCloseGateAction((unsigned int *)a1, (int)aP1, (int)v9, a5, (IUnknown *)aP4);
    case 0x7B:
      return TActionClass::executeCaptureAction((unsigned int *)a1, aP1, (int)v9, a5, (IUnknown *)aP4);
    case 0x7C:
      return TActionClass::executeSabotageAction((unsigned int *)a1, aP1, (int)v9, a5, (IUnknown *)aP4);
    case 0x7D:
      return TActionClass::executeForceShieldAction((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x7E:
  int v123; // [esp+0h] [ebp-250h]
  unsigned int *v124; // [esp+4h] [ebp-24Ch]
  int v125; // [esp+8h] [ebp-248h]
      return CreateHouseClass((int)aP1, v9, a5, (IUnknown *)aP4, v123, v124, v125);
    case 0x7F:
      globalHelper_03B460(*(unsigned int *)(a1 + 144));
      return 1;
    case 0x80:
      return TActionClass::executePatrolAction((int *)a1, aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x81:
      return TActionClass::executeIronCurtainAction((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x82:
      return SmallFunc_6E3120((int)aP1, v9, a5, (IUnknown *)aP4, v123, v124, v125);
    case 0x83:
      return TActionClass::executeEMPulseAction(a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x84:
      return TActionClass::executeNukeAction((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x85:
      return TActionClass::executeSpyPlaneAction((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x86:
      return TActionClass::executeChronoSphereAction((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x87:
      return TActionClass::executeWeatherStormAction((int *)a1, aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x88:
      return globalHelper_0E4440(aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x89:
      return TActionClass::executeRevealAction((int *)a1, aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x8A:
      return globalHelper_0E4540(aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x8B:
      return TActionClass::executeLightningAction((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x8C:
      return TActionClass::executeDominatorAction((int *)a1, aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x8D:
      return globalHelper_0E44C0(aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x8E:
      return TActionClass::executeSelfDestructAction((unsigned int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x8F:
      return TActionClass::executeExplodeAction((unsigned int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    default:
      return result;
  }
  while ( 1 )
  {
    v117 = *(unsigned int *)(*(unsigned int *)&HouseClass_Player[44536] + 4 * v116);
    if ( *(unsigned char *)(v117 + 144) )
    {
      if ( *(unsigned char *)(v117 + 116) )
      {
        if ( !*(unsigned char *)(v117 + 129) )
        {
          unsigned int * v118 = *(unsigned int **)(v117 + 52);
          if ( v118 )
          {
            if ( LinkedList_flat::Contains(v118, a5) )
              break;
          }
        }
      }
    }
    if ( ++v116 >= *(int *)&HouseClass_Player[44548] )
      return 0;
  }
  BuildingClass::UnloadUnits((BuildingTypeClass **)v117, 0, 0);
  return 1;
}

} // namespace gamemd

// 0x71CDA0
namespace gamemd {
void* TerrainClass::LoadFromStream(unsigned int * a1, int a2)
{
  unsigned int *v2; // ebp
  unsigned int *v3; // esi
  int v4; // eax
  void *v5; // ecx
  int v6; // edx
  int v7; // edi
  int v8; // eax
  int v9; // eax
  signed int v10; // ecx
  size_t i; // eax
  unsigned int *v12; // eax
  int Register; // edi
  int v14; // esi
  int v15; // eax
  int v17; // [esp+Ch] [ebp-8h] BYREF

  v2 = a1; /*0x71cda4*/
  v3 = a1 + 1; /*0x71cdad*/
  v4 = (*(int (__stdcall **)(unsigned int *))(a1[1] + 16))(a1 + 1); /*0x71cdb1*/
  v6 = g_BuildingLoadQueue_Count; /*0x71cdb4*/
  v7 = v4; /*0x71cdba*/
  if ( g_BuildingLoadQueue_Count ) /*0x71cdbe*/
  {
    if ( !g_BuildingLoadQueue_Dirty ) /*0x71cdcb*/
    {
      qsort(g_BuildingLoadQueue_Array, g_BuildingLoadQueue_Count, 8u, CompareFunction); /*0x71cddc*/
      v6 = g_BuildingLoadQueue_Count; /*0x71cde1*/
      g_BuildingLoadQueue_Active = 0; /*0x71cdea*/
      g_BuildingLoadQueue_Dirty = 1; /*0x71cdf4*/
    }
    v17 = v7; /*0x71ce06*/
    v8 = BinaryArraySearch((int)g_BuildingLoadQueue_Array, v6, &v17); /*0x71ce0a*/
    if ( v8 ) /*0x71ce11*/
    {
      v9 = (v8 - (int)g_BuildingLoadQueue_Array) >> 3; /*0x71ce19*/
      if ( v9 != -1 ) /*0x71ce1f*/
      {
        v10 = v9 + 1; /*0x71ce21*/
        for ( i = g_BuildingLoadQueue_Count; v10 < (int)g_BuildingLoadQueue_Count; i = g_BuildingLoadQueue_Count ) /*0x71ce2b*/
        {
          v12 = (unsigned int *)((char *)g_BuildingLoadQueue_Array + 8 * v10++); /*0x71ce33*/
          *(v12 - 2) = *v12; /*0x71ce39*/
          *(v12 - 1) = v12[1]; /*0x71ce3f*/
        }
        g_BuildingLoadQueue_Count = i - 1; /*0x71ce54*/
        *((unsigned int *)g_BuildingLoadQueue_Array + 2 * g_BuildingLoadQueue_Count) = 0; /*0x71ce59*/
        v5 = g_BuildingLoadQueue_Array; /*0x71ce61*/
        *((unsigned int *)g_BuildingLoadQueue_Array + 2 * g_BuildingLoadQueue_Count + 1) = 0; /*0x71ce69*/
        g_BuildingLoadQueue_Active = 0; /*0x71ce6d*/
      }
    }
  }
  Register = BuildingClass::SaveLoad_Register(v5); /*0x71ce7e*/
  if ( Register >= 0 ) /*0x71ce82*/
  {
    if ( v2 ) /*0x71ce8a*/
    {
      ObjectClass::Init(v2, (int)&a1); /*0x71ce93*/
      *v3 = &off_7F5200; /*0x71ce9f*/
    }
    v14 = (*(int (__stdcall **)(unsigned int *))(*v3 + 16))(v3); /*0x71cebf*/
    v15 = g_BuildingLoadQueue_Capacity; /*0x71cec1*/
    if ( (int)(g_BuildingLoadQueue_Count + 1) <= g_BuildingLoadQueue_Capacity ) /*0x71cec9*/
      goto LABEL_16; /*0x71cec9*/
    if ( !g_BuildingLoadQueue_Capacity ) /*0x71cecd*/
      v15 = 10; /*0x71cecf*/
    if ( BuildingTypeClass::Enqueue((int)&g_BuildingLoadQueue_Array, v15) ) /*0x71ceda*/
    {
  LABEL_16:
      *((unsigned int *)g_BuildingLoadQueue_Array + 2 * g_BuildingLoadQueue_Count) = v14; /*0x71ceee*/
      *((unsigned int *)g_BuildingLoadQueue_Array + 2 * g_BuildingLoadQueue_Count + 1) = v2; /*0x71cefc*/
      g_BuildingLoadQueue_Dirty = 0; /*0x71cf06*/
      ++g_BuildingLoadQueue_Count; /*0x71cf0d*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 50); /*0x71cf1e*/
  }
  return Register; /*0x71cf25*/
}
}
// 0x71D000
namespace gamemd {
AbstractClass * * TerrainClass::ProcessSpawnAnim(unsigned int * aP2, AbstractClass * aP2)
{
  int v4; // edi
  int v5; // ebx
  int i; // esi
  int v7; // ecx
  int16_t v8; // ax
  unsigned char *v9; // eax
  unsigned int *v10; // eax
  char *v11; // edi
  char v14[12]; // [esp+8h] [ebp-Ch] BYREF

  aP2 = aP2; /*0x71d008*/
  if ( !(uint8_t)ObjectClass::Deploy((void *)this) ) /*0x71d012*/
    return 0; /*0x71d13e*/
  v4 = *aP2 / 256; /*0x71d03e*/
  v5 = aP2[1] / 256; /*0x71d041*/
  for ( i = 0; i < 8; ++i ) /*0x71d044*/
  {
    v7 = i & 7; /*0x71d048*/
    v8 = IDA_HIWORD(Direction_X_Offsets[v7]); /*0x71d05d*/
    IDA_LOWORD(aP2) = v4 + IDA_LOWORD(Direction_X_Offsets[v7]); /*0x71d061*/
    IDA_HIWORD(aP2) = v5 + v8; /*0x71d06d*/
    aP2 = aP2; /*0x71d076*/
    v9 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&aP2); /*0x71d080*/
    ++v9[290]; /*0x71d091*/
  }
  v10 = (unsigned int *)(*(int (__stdcall **)(char *))(((unsigned int)(this->q0442))))(v14); /*0x71d0ab*/
  Coord::To_Screen(g_TacticalClass_Instance, v10, (int *)(&this->u32_546)); /*0x71d0b8*/
  v11 = (char *)g_TacticalClass_Instance[45].lpVtbl + this->q0DC; /*0x71d0d6*/
  this->q0D8 += g_TacticalClass_Instance[44].lpVtbl; /*0x71d0dd*/
  this->q0DC = v11; /*0x71d0df*/
  if ( *((unsigned int *)Coord::To_Cell(&MapClass_Instance, aP2) + 17) != -1 ) /*0x71d0ef*/
  {
    if ( *(unsigned char *)(*(unsigned int *)&g_BuildingTypeClass_Array->gap0[4 /*0x71d108*/
                                                              * *((unsigned int *)Coord::To_Cell(&MapClass_Instance, aP2) + 17)]
                  + 681) )
    {
      *((unsigned int *)Coord::To_Cell(&MapClass_Instance, aP2) + 17) = -1; /*0x71d123*/
      *((unsigned char *)Coord::To_Cell(&MapClass_Instance, aP2) + 286) = 0; /*0x71d12b*/
    }
  }
  return 1; /*0x71d137*/
}
}
// 0x71CF30
namespace gamemd {
int TerrainClass::CheckFrameUpdate(TechnoTypeClass * aP0, int * a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix(aP0, a1, aP2); /*0x71cf44*/
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
  a2[3] = -777003740; /*0x71d340*/
  return 0; /*0x71d31d*/
}
} // namespace gamemd
