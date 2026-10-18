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

  int v9; // ecx
  int v10; // ebp
  unsigned int *v11; // eax
  ActionQueue *v12; // eax
  int v13; // esi
  int i1; // edi
  int v15; // esi
  LinkedList *v16; // ecx
  int kk; // edi
  int v18; // esi
  int mm; // edi
  int v20; // esi
  int nn; // ebx
  unsigned int *v22; // edi
  HouseClass *v23; // ecx
  int v24; // edi
  int *WorldCoords; // eax
  int v26; // edi
  int *v27; // eax
  int v28; // edi
  int *v29; // eax
  int n; // edi
  int v31; // esi
  LinkedList *v32; // ecx
  int ii; // edi
  BuildingClass *v34; // esi
  LinkedList *attachedTag; // ecx
  int jj; // edi
  BuildingClass *v37; // esi
  LinkedList *v38; // ecx
  int NeedsSaveOrLink; // eax
  wchar_t *v40; // esi
  unsigned int v41; // eax
  int PlayerColorScheme; // edi
  int v43; // eax
  wchar_t *StringCSF; // eax
  int v45; // eax
  int *v46; // esi
  HouseClass *v47; // eax
  unsigned int v48; // esi
  int v49; // ecx
  int v50; // eax
  HouseClass *v51; // edi
  int j; // eax
  int *p_vfptr3; // esi
  int Speed; // eax
  int *v55; // eax
  int *v56; // edx
  int v57; // eax
  int *v58; // ecx
  int *v59; // ecx
  AbstractClass *v60; // eax
  char *v61; // esi
  int v62; // edi
  int v63; // ebp
  char *v64; // ebx
  int v65; // eax
  unsigned int *v66; // eax
  unsigned int *v67; // eax
  ObjectClass *Parameter; // eax
  int Status; // eax
  int Owner; // eax
  int v71; // eax
  int v72; // eax
  int v73; // esi
  TeamTypeClass *v74; // esi
  unsigned __int8 *v75; // esi
  TeamClass *v76; // ecx
  int v77; // edx
  int v78; // eax
  unsigned int *v79; // eax
  IPersistStream *v80; // eax
  int v81; // edi
  LinkedList *v82; // ecx
  int i; // edi
  TeamClass *v84; // ecx
  int v85; // ebx
  int v86; // edi
  unsigned int *v87; // eax
  int v88; // ecx
  int k; // edi
  int v90; // ecx
  int m; // edi
  TActionClass *v92; // ecx
  int *Waypoint_Location; // eax
  int v94; // edx
  int v95; // eax
  unsigned int *v96; // eax
  unsigned int *v97; // eax
  int *v98; // eax
  unsigned __int8 *v99; // edi
  unsigned char *v100; // esi
  CellStruct *v101; // eax
  int *v102; // eax
  TeamTypeClass *v103; // ecx
  TeamTypeClass *v104; // ecx
  int FirstInstance; // eax
  int v106; // edx
  int i2; // eax
  ObjectClass *v108; // ecx
  int v109; // edx
  int *v110; // eax
  int v111; // edi
  BuildingClass *v112; // esi
  LinkedList *v113; // ecx
  unsigned int *v114; // eax
  HouseClass *v115; // eax
  int v116; // [esp-8h] [ebp-258h]
  char v117; // [esp-4h] [ebp-254h]
  Scenario *v118; // [esp+0h] [ebp-250h]
  __int16 v119[2]; // [esp+10h] [ebp-240h] BYREF
  Coord v120; // [esp+14h] [ebp-23Ch] BYREF

  v9 = a6; /*0x6dd8bd*/
  v10 = 0; /*0x6dd8c4*/
  if ( a6 && !*(unsigned char *)(a6 + 144) ) /*0x6dd8cb*/
    v9 = 0; /*0x6dd8d5*/
  switch ( a1->SuperClass_field_0x2C )
  {
    case 1:
      v23 = *(HouseClass **)((char *)&stru_A83CD9.estimatedHealth + 3); /*0x6dea37*/
      v117 = 0; /*0x6dea43*/
      if ( *(unsigned int *)(a1 + 144) != *(unsigned int *)(*(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 52) /*0x6dea4d*/
                                              + 184) )
        goto LABEL_60; /*0x6dea4d*/
      goto LABEL_158; /*0x6dea4d*/
    case 2:
      v23 = *(HouseClass **)((char *)&stru_A83CD9.estimatedHealth + 3); /*0x6dea67*/
      v117 = 0; /*0x6dea73*/
      if ( *(unsigned int *)(a1 + 144) == *(unsigned int *)(*(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 52) /*0x6dea7d*/
                                              + 184) )
        goto LABEL_60; /*0x6dea7d*/
LABEL_158:
      HouseClass::CheckWinCondition(v23, 0); /*0x6dea53*/
      return result; /*0x6dea64*/
    case 3:
      Owner = ObjectClass::FindOwner(a7, *(void **)(a1 + 144)); /*0x6deaa8*/
      if ( Owner ) /*0x6deaaf*/
        *(unsigned char *)(Owner + 494) = 1; /*0x6deac0*/
      return result; /*0x6dead3*/
    case 4:
      ++dword_A8E7AC; /*0x6deb5e*/
      v73 = *(unsigned int *)(a1 + 48); /*0x6deb64*/
      if ( v73 ) /*0x6deb69*/
        TeamClass::CreateOneOf(v73, 0); /*0x6deb6e*/
      --dword_A8E7AC; /*0x6deb79*/
      return result; /*0x6deb8a*/
    case 5:
      v74 = *(TeamTypeClass **)(a1 + 48); /*0x6deb8d*/
      if ( v74 ) /*0x6deb92*/
        TeamTypeClass::DestroyAllInstances(v74); /*0x6deb9a*/
      return result; /*0x6debab*/
    case 6:
      v78 = ObjectClass::FindOwner(a7, *(void **)(a1 + 144)); /*0x6dec0a*/
      if ( v78 ) /*0x6dec11*/
        (*(void (**)(int))(*(unsigned int *)(v78 + 36) + 56))(v78 + 36); /*0x6dec29*/
      return result; /*0x6dec38*/
    case 7:
      v75 = *(unsigned __int8 **)(a1 + 48); /*0x6debae*/
      if ( v75 ) /*0x6debb3*/
        DeployScriptActionPlane((int)v75, -1, result); /*0x6debbe*/
      return result; /*0x6debcd*/
    case 8:
      TActionClass::executeRetreatAction((TActionClass *)a1, (int)a5, v9, (int)a7, (int)a8); /*0x6dea25*/
      return result; /*0x6dea34*/
    case 9:
      v71 = ObjectClass::FindOwner(a7, *(void **)(a1 + 144)); /*0x6deae7*/
      if ( v71 ) /*0x6deaee*/
        *(unsigned int *)(v71 + 592) = 4; /*0x6deaff*/
      return result; /*0x6deb15*/
    case 0xA:
      MouseClass::LoadCursors(); /*0x6de72f*/
      (*(void (**)(MouseClass *))(dword_887640->HandleClick_ph + 20))(dword_887640); /*0x6de73c*/
      ToggleDisplayMode(0); /*0x6de741*/
      Movie::PlayWrapper(*(unsigned int *)(a1 + 144), 0, (int)a2, 1, 1, 1); /*0x6de755*/
      ToggleDisplayMode(1); /*0x6de75c*/
      (*(void (**)(MouseClass *))(dword_887640->HandleClick_ph + 24))(dword_887640); /*0x6de769*/
      LoadingScreen::FreeResources3(); /*0x6de76c*/
      return result; /*0x6de77d*/
    case 0xB:
      NeedsSaveOrLink = dword_A8B230[374].NeedsSaveOrLink; /*0x6de0b3*/
      v40 = a1->u8_6D != 0 ? &a1->u8_6D : 0;
      if ( NeedsSaveOrLink )
        v41 = NeedsSaveOrLink != 1 ? 5 : 1;
      else
        v41 = 2; /*0x6de0c3*/
      PlayerColorScheme = SessionClass::GetPlayerColorScheme(v41); /*0x6de0e0*/
      if ( v40 ) /*0x6de0e2*/
      {
        LOWORD(v43) = Math::RoundToInt(result); /*0x6de0fb*/
        v116 = v43; /*0x6de100*/
        StringCSF = GetStringCSF(v40, 0, g_Str_File_TAction_CPP, 1766); /*0x6de115*/
        MessageListClass::AddMessage(&unk_A8BC60, 0, 0, StringCSF, PlayerColorScheme, 16454, v116, 0); /*0x6de122*/
      }
      return result; /*0x6de133*/
    case 0xC:
      if ( *(unsigned int *)(a1 + 80) ) /*0x6df051*/
      {
        for ( i = *(unsigned int *)&stru_A8E960.altNextScenario[148] - 1; i >= 0; --i ) /*0x6df065*/
        {
          v84 = *(TeamClass **)(*(unsigned int *)&stru_A8E960.altNextScenario[136] + 4 * i); /*0x6df070*/
          if ( v84->buildingType == *(unsigned int *)(a1 + 80) ) /*0x6df07b*/
            TeamClass::AddToBuildQueue(v84); /*0x6df07d*/
        }
      }
      return result; /*0x6df083*/
    case 0xD:
      v72 = ObjectClass::FindOwner(a7, *(void **)(a1 + 144)); /*0x6deb29*/
      if ( v72 ) /*0x6deb30*/
        *(unsigned char *)(v72 + 495) = 1; /*0x6deb41*/
      return result; /*0x6deb54*/
    case 0xE:
      TActionClass::executeEnterAction((TActionClass *)a1, (int)a5, v9, a7, (int)a8); /*0x6de069*/
      return result; /*0x6de078*/
    case 0x10:
      if ( !*(unsigned char *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 576) ) /*0x6de3ad*/
      {
        *(unsigned char *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 576) = 1; /*0x6de3c0*/
        LayerClass::CellIteratorReset((LayerClass *)&dword_87F7E8); /*0x6de3c7*/
        for ( j = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8); /*0x6de3d8*/
              j;
              j = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8) )
        {
          Conditions::CheckResult((RadarClass *)(j + 36), *(int *)((char *)&stru_A83CD9.estimatedHealth + 3)); /*0x6de3ea*/
        }
        MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 1); /*0x6de404*/
      }
      return result; /*0x6de415*/
    case 0x11:
      TActionClass::RevealWaypointArea((TActionClass *)a1, (int)a5, v9, (int)a7, (int)a8); /*0x6de369*/
      return result; /*0x6de378*/
    case 0x12:
      TActionClass::RevealTileTypeAtWaypoint((TActionClass *)a1, (int)a5, v9, (int)a7, (int)a8); /*0x6de396*/
      return result; /*0x6de3a5*/
    case 0x13:
      PlayVocClass(*(unsigned int *)(a1 + 144), 0x2000u, 1.0, 0); /*0x6de791*/
      return result; /*0x6de7a2*/
    case 0x14:
      Theme::QueueSong((int)&stru_A83CD9.attachedTag + 3, *(unsigned int *)(a1 + 144)); /*0x6de8f0*/
      return result; /*0x6de901*/
    case 0x15:
      UpdateThemeManager(*(unsigned int *)(a1 + 144), 2, -1); /*0x6de911*/
      return result; /*0x6de922*/
    case 0x16:
      if ( *(unsigned int *)(a1 + 80) ) /*0x6df0e7*/
      {
        for ( k = 0; k < *(int *)&stru_A8E960.altNextScenario[148]; ++k ) /*0x6df0f9*/
        {
          v90 = *(unsigned int *)(*(unsigned int *)&stru_A8E960.altNextScenario[136] + 4 * k); /*0x6df108*/
          if ( *(unsigned int *)(v90 + 36) == *(unsigned int *)(a1 + 80) ) /*0x6df110*/
            BuildingClass::ExecuteTriggers(v90, 0, dword_B0E680[0]); /*0x6df119*/
        }
      }
      return result; /*0x6df126*/
    case 0x17:
      if ( dword_A8B230[127].vfptr3 == -1 ) /*0x6de428*/
      {
        dword_A8B230[127].vfptr3 = *(unsigned int *)&stru_A8E960.random[528]; /*0x6de438*/
        ObjectClass::PreDraw((ObjectClass *)&dword_87F7E8); /*0x6de443*/
      }
      return result; /*0x6de454*/
    case 0x18:
      p_vfptr3 = &dword_A8B230[127].vfptr3; /*0x6de463*/
      if ( dword_A8B230[127].vfptr3 != -1 ) /*0x6de46c*/
      {
        p_vfptr3[2] = Locomotor::GetSpeed((Locomotor *)&dword_A8B230[127].vfptr3); /*0x6de47e*/
        *p_vfptr3 = -1; /*0x6de481*/
        ObjectClass::PreDraw((ObjectClass *)&dword_87F7E8); /*0x6de48c*/
      }
      return result; /*0x6de49d*/
    case 0x19:
      Speed = Locomotor::GetSpeed((Locomotor *)&dword_A8B230[127].vfptr3); /*0x6de4ab*/
      Timer::Start((Timer *)&v120.__pad_C[4], 15 * *(unsigned int *)(a1 + 144) + Speed); /*0x6de4c5*/
      v55 = &dword_A8B230[127].vfptr3; /*0x6de4d3*/
      dword_A8B230[127].vfptr3 = *(unsigned int *)&v120.__pad_C[4]; /*0x6de4d8*/
      v55[1] = *(unsigned int *)&v120.__pad_C[8]; /*0x6de4de*/
      v55[2] = *(unsigned int *)&v120.q018; /*0x6de4e5*/
      ObjectClass::PreDraw((ObjectClass *)&dword_87F7E8); /*0x6de4ed*/
      return result; /*0x6de4fe*/
    case 0x1A:
      if ( Locomotor::GetSpeed((Locomotor *)&dword_A8B230[127].vfptr3) > 15 * *(unsigned int *)(a1 + 144) ) /*0x6de520*/
      {
        v57 = Locomotor::GetSpeed((Locomotor *)&dword_A8B230[127].vfptr3); /*0x6de571*/
        Timer::Start((Timer *)&v120, v57 - 15 * *(unsigned int *)(a1 + 144)); /*0x6de58b*/
        v58 = &dword_A8B230[127].vfptr3; /*0x6de59a*/
        dword_A8B230[127].vfptr3 = *(unsigned int *)v120.__pad_0; /*0x6de5a0*/
        v58[1] = *(unsigned int *)&v120.Coord_field_0x2[2]; /*0x6de5a6*/
        v58[2] = v120.Coord_field_0x8; /*0x6de5ad*/
        ObjectClass::PreDraw((ObjectClass *)&dword_87F7E8); /*0x6de5b5*/
      }
      else
      {
        Timer::Start((Timer *)&v120.__pad_C[4], 0); /*0x6de527*/
        v56 = &dword_A8B230[127].vfptr3; /*0x6de536*/
        dword_A8B230[127].vfptr3 = *(unsigned int *)&v120.__pad_C[4]; /*0x6de53c*/
        v56[1] = *(unsigned int *)&v120.__pad_C[8]; /*0x6de542*/
        v56[2] = *(unsigned int *)&v120.q018; /*0x6de54e*/
        ObjectClass::PreDraw((ObjectClass *)&dword_87F7E8); /*0x6de551*/
      }
      return result; /*0x6de562*/
    case 0x1B:
      Timer::Start((Timer *)&v120.__pad_C[4], 15 * *(unsigned int *)(a1 + 144)); /*0x6de5da*/
      v59 = &dword_A8B230[127].vfptr3; /*0x6de5e9*/
      dword_A8B230[127].vfptr3 = *(unsigned int *)&v120.__pad_C[4]; /*0x6de5ef*/
      v59[1] = *(unsigned int *)&v120.__pad_C[8]; /*0x6de5f5*/
      v59[2] = *(unsigned int *)&v120.q018; /*0x6de5fc*/
      v60 = dword_A8B230; /*0x6de5ff*/
      if ( dword_A8B230[127].vfptr3 == -1 ) /*0x6de60b*/
      {
        dword_A8B230[127].vfptr3 = *(unsigned int *)&stru_A8E960.random[528]; /*0x6de613*/
        v60 = dword_A8B230; /*0x6de619*/
      }
      v60[127].nextArrayIndex = (int)&g_TypeClass_DefaultString; /*0x6de627*/
      ScriptAction::CopyStringField(&v120.__pad_C[32], &g_INI_DefaultBuffer); /*0x6de631*/
      ScriptAction::CopyStructField( /*0x6de64c*/
        (ScriptAction *)&dword_A8B230[127].referenceCount,
        &v120.u32_4C,
        &v120.u32_2C);
      ObjectClass::PreDraw((ObjectClass *)&dword_87F7E8); /*0x6de656*/
      return result; /*0x6de667*/
    case 0x1C:
      ScenarioClass::SetGlobalToByID((ScenarioClass *)dword_A8B230, *(unsigned int *)(a1 + 144), 1); /*0x6de2dd*/
      return result; /*0x6de2ee*/
    case 0x1D:
      ScenarioClass::SetGlobalToByID((ScenarioClass *)dword_A8B230, *(unsigned int *)(a1 + 144), 0); /*0x6de2ff*/
      return result; /*0x6de310*/
    case 0x1E:
      if ( *(unsigned char *)(a1 + 144) ) /*0x6de206*/
      {
        a5->autoBaseBuilding[0] = 1; /*0x6de21b*/
        if ( a5->grindersCount > 0 ) /*0x6de227*/
        {
          v49 = *(unsigned int *)(*(unsigned int *)a5->repairStationsCount + 156); /*0x6de235*/
          v50 = *(unsigned int *)(*(unsigned int *)a5->repairStationsCount + 160); /*0x6de237*/
          *(unsigned int *)&v120.q018 = *(unsigned int *)(*(unsigned int *)a5->repairStationsCount + 164); /*0x6de23d*/
          v51 = *(HouseClass **)CellStruct::Set((CellStruct *)v120.__pad_C, v49 / 256, v50 / 256); /*0x6de266*/
          HouseClass::SetMapSeed(a5, (int)v51); /*0x6de26b*/
          a5->damageDelayTimer[1] = (int)v51; /*0x6de270*/
        }
        if ( !a5->base[11] ) /*0x6de276*/
          HouseClass::SetPrimaryTechBuilding(a5); /*0x6de284*/
      }
      else
      {
        a5->autoBaseBuilding[0] = 0; /*0x6de29f*/
      }
      return result; /*0x6de295*/
    case 0x1F:
      MapClass::ProcessVisibilityFlags((MapClass *)&dword_87F7E8); /*0x6de2ba*/
      return result; /*0x6de2cb*/
    case 0x20:
      globalHelper_0E2050((int)a5, v9, (int)a7, a8); /*0x6dec56*/
      return result; /*0x6dec65*/
    case 0x21:
      SuperClass::StartTimer(*(unsigned int *)(a5->supersCount + 4 * *(unsigned int *)(a1 + 144)), 1, 0, 0); /*0x6de93f*/
      if ( *(HouseClass **)((char *)&stru_A83CD9.estimatedHealth + 3) == a5 ) /*0x6de94a*/
        goto LABEL_153; /*0x6de94a*/
      return result; /*0x6de94a*/
    case 0x22:
      SuperClass::StartTimer(*(unsigned int *)(a5->supersCount + 4 * *(unsigned int *)(a1 + 144)), 0, 0, 0); /*0x6de9a7*/
      *(unsigned char *)(*(unsigned int *)(a5->supersCount + 4 * *(unsigned int *)(a1 + 144)) + 96) = 0; /*0x6de9bb*/
      if ( *(HouseClass **)((char *)&stru_A83CD9.estimatedHealth + 3) == a5 ) /*0x6de9c6*/
      {
LABEL_153:
        SidebarClass::AddCameo((SidebarClass *)&dword_87F7E8, 31, *(unsigned int *)(a1 + 144)); /*0x6de950*/
        Status = HouseClass::GetStatus((HouseClass *)0x1F, 0); /*0x6de96f*/
        Sidebar::ActivateTab(&dword_87F7E8.field_0, Status); /*0x6de97a*/
      }
      return result; /*0x6de98b*/
    case 0x23:
      if ( a5 ) /*0x6de1e5*/
        a5->preferredTargetType = *(unsigned int *)(a1 + 144); /*0x6de1f1*/
      return result; /*0x6de203*/
    case 0x24:
      TActionClass::ConvertHouseUnits((TActionClass *)a1, (int)a5, v9, a7, (int)a8); /*0x6de096*/
      return result; /*0x6de0a5*/
    case 0x25:
      v45 = ObjectClass::FindOwner(a7, *(void **)(a1 + 144)); /*0x6de147*/
      v46 = (int *)v45; /*0x6de14c*/
      if ( v45 ) /*0x6de150*/
      {
        HouseClass::HandleAlliance(&a5->vfptr, v45, 0); /*0x6de16c*/
        HouseClass::HandleAlliance(v46, (int)a5, 0); /*0x6de175*/
      }
      return result; /*0x6de186*/
    case 0x26:
      v47 = (HouseClass *)ObjectClass::FindOwner(a7, *(void **)(a1 + 144)); /*0x6de19a*/
      v48 = (unsigned int)v47; /*0x6de19f*/
      if ( v47 ) /*0x6de1a3*/
      {
        HouseClass::SetAlliance((unsigned int)a5, v47, 0); /*0x6de1bf*/
        HouseClass::SetAlliance(v48, a5, 0); /*0x6de1c8*/
      }
      return result; /*0x6de1d9*/
    case 0x28:
      TActionClass::executeFollowAction((TActionClass *)a1, (int)a5, v9, (int)a7, (int)a8); /*0x6dec83*/
      return result; /*0x6dec92*/
    case 0x29:
      TActionClass::executeEscortAction((TActionClass *)a1, (int)a5, v9, (int)a7, (int)a8); /*0x6decb0*/
      return result; /*0x6decbf*/
    case 0x2A:
      TActionClass::CreateWeaponImpactAtWaypoint((TActionClass *)a1, (int)a5, v9, (int)a7, (int)a8); /*0x6decdd*/
      return result; /*0x6decec*/
    case 0x2B:
      TActionClass::executeLoadAction((TActionClass *)a1, (int)a5, v9, (int)a7, (int)a8); /*0x6ded0a*/
      return result; /*0x6ded19*/
    case 0x2C:
      if ( !(unsigned __int8)LightningStorm::IsActive() ) /*0x6ded1c*/
        LightningStorm::Start(*(unsigned int *)(a1 + 144), *(unsigned int *)dword_8871E0->FineDiffControl, *(int *)dword_B0E680, 0); /*0x6ded4d*/
      return result; /*0x6ded5e*/
    case 0x2D:
      if ( (unsigned __int8)LightningStorm::IsActive() ) /*0x6ded61*/
        LightningStorm::End(); /*0x6ded77*/
      return result; /*0x6ded88*/
    case 0x2E:
      dword_88098C = 0; /*0x6ded91*/
      dword_880990 = 0; /*0x6ded97*/
      dword_880994 = -1; /*0x6ded9d*/
      Mouse::SetBounds((int)&dword_87F7E8, 0); /*0x6deda7*/
      BuildingClass::TogglePower2((BuildingClass *)&dword_87F7E8, 0); /*0x6dedb2*/
      BuildingClass::TogglePower((BuildingClass *)&dword_87F7E8, 0); /*0x6dedbd*/
      byte_88099A = 0; /*0x6dedc2*/
      byte_88099B = 0; /*0x6dedc9*/
      byte_88099C = 0; /*0x6dedd0*/
      Scenario::ClearScreen(v118); /*0x6dedd7*/
      return result; /*0x6dede8*/
    case 0x2F:
      UpdateMouse((ObjectClass *)v118); /*0x6dedeb*/
      return result; /*0x6dedfc*/
    case 0x30:
      *(unsigned int *)v119 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v120.__pad_C, *(unsigned int *)(a1 + 68)); /*0x6dee1f*/
      v79 = CoordStruct::Set2((CoordStruct *)&v120.u32_10, v119, 0); /*0x6dee23*/
      *(unsigned int *)v120.__pad_0 = *v79; /*0x6dee2a*/
      *(unsigned int *)&v120.q004 = v79[1]; /*0x6dee31*/
      v120.Coord_field_0x8 = v79[2]; /*0x6dee42*/
      v120.Coord_field_0x8 = Cell::GetGroundHeight(&v120); /*0x6dee4f*/
      if ( (*((unsigned int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v119) + 80) & 0x100) != 0 /*0x6dee81*/
        || (*((unsigned int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v119) + 80) & 0x400) != 0 )
      {
        v120.Coord_field_0x8 += dword_B0E6D4; /*0x6dee8e*/
      }
      TacticalClass::SetPosition((TacticalClass *)g_TacticalClass_Instance, &v120, *(unsigned int *)(a1 + 144)); /*0x6deea4*/
      return result; /*0x6deeb5*/
    case 0x31:
      v80 = &dword_8871E0->u32_550; /*0x6deec3*/
      g_TacticalClass_Instance[48] = *(LPPERSISTSTREAM)&dword_8871E0->u32_550; /*0x6deeca*/
      g_TacticalClass_Instance[49] = v80[1]; /*0x6deed9*/
      stru_A8E960.random[552] = 1; /*0x6deee5*/
      Timer::PumpMessages((Timer *)dword_87F770); /*0x6deeec*/
      (*(void (**)(MouseClass *, double))(dword_887640->HandleClick_ph + 12))( /*0x6deef9*/
        dword_887640,
        result);
      Mouse::ReleaseCapture((ScrollClass *)&dword_87F7E8); /*0x6def01*/
      MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 0); /*0x6def0c*/
      TacticalMap::Redraw((GScreenClass *)&dword_87F7E8); /*0x6def16*/
      Sleep(0x3E8u); /*0x6def20*/
      return result; /*0x6def32*/
    case 0x32:
      g_TacticalClass_Instance[48] = 0; /*0x6def3a*/
      g_TacticalClass_Instance[49] = (IPersistStream)1072693248; /*0x6def46*/
      Timer::PumpMessages((Timer *)dword_87F770); /*0x6def56*/
      stru_A8E960.random[552] = BYTE2(dword_A8B230[381].vfptr3); /*0x6def6d*/
      (*(void (**)(MouseClass *))(dword_887640->HandleClick_ph + 16))(dword_887640); /*0x6def74*/
      MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 0); /*0x6def7d*/
      TacticalMap::Redraw((GScreenClass *)&dword_87F7E8); /*0x6def87*/
      return result; /*0x6def98*/
    case 0x33:
      TActionClass::executeRepairAction((TActionClass *)&dword_87F7E8, (int)a5); /*0x6defa8*/
      return result; /*0x6defb9*/
    case 0x34:
      if ( *(int *)&stru_A8E960.altNextScenario[236] > 0 ) /*0x6defc5*/
      {
        do /*0x6df040*/
        {
          v81 = *(unsigned int *)(*(unsigned int *)&stru_A8E960.altNextScenario[224] + 4 * v10); /*0x6defcd*/
          if ( *(int *)(v81 + 108) > 0 ) /*0x6defd5*/
          {
            if ( *(unsigned char *)(v81 + 144) ) /*0x6defd7*/
            {
              if ( *(unsigned char *)(v81 + 116) ) /*0x6defe1*/
              {
                if ( !*(unsigned char *)(v81 + 129) ) /*0x6defe8*/
                {
                  if ( *(unsigned char *)(*(unsigned int *)(v81 + 1312) + 5451) ) /*0x6deff8*/
                  {
                    if ( *(unsigned int *)(v81 + 1536) ) /*0x6df002*/
                    {
                      v82 = *(LinkedList **)(v81 + 52); /*0x6df00c*/
                      if ( v82 ) /*0x6df011*/
                      {
                        if ( (unsigned __int8)LinkedList::Contains(v82, (int)a7) ) /*0x6df01b*/
                          BuildingLightClass::FindTarget(*(BuildingLightClass **)(v81 + 1536), *(unsigned int **)(a1 + 144)); /*0x6df031*/
                      }
                    }
                  }
                }
              }
            }
          }
          ++v10; /*0x6df03d*/
        }
        while ( v10 < *(int *)&stru_A8E960.altNextScenario[236] ); /*0x6df040*/
      }
      return result; /*0x6df040*/
    case 0x35:
      TActionClass::executeUnloadAction((TActionClass *)a1, (int)a5, v9, (int)a7, (int)a8); /*0x6df152*/
      return result; /*0x6df161*/
    case 0x36:
      if ( *(unsigned int *)(a1 + 80) ) /*0x6df164*/
      {
        for ( m = 0; m < *(int *)&stru_A8E960.altNextScenario[148]; ++m ) /*0x6df176*/
        {
          v92 = *(TActionClass **)(*(unsigned int *)&stru_A8E960.altNextScenario[136] + 4 * m); /*0x6df182*/
          if ( v92->idxArray == *(unsigned int *)(a1 + 80) ) /*0x6df18d*/
            TActionClass::executeDetonateAction(v92); /*0x6df18f*/
        }
      }
      return result; /*0x6df19c*/
    case 0x37:
      Waypoint_Location = ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v120.__pad_C, *(unsigned int *)(a1 + 68)); /*0x6df1bc*/
      CreateTriggerClassIfFarEnough(*(unsigned int *)(a1 + 144), v94, *Waypoint_Location); /*0x6df1ca*/
      return result; /*0x6df1db*/
    case 0x38:
      ScenarioClass::SetLocalToByID((ScenarioClass *)dword_A8B230, *(unsigned int *)(a1 + 144), 1); /*0x6df1ed*/
      return result; /*0x6df1fe*/
    case 0x39:
      ScenarioClass::SetLocalToByID((ScenarioClass *)dword_A8B230, *(unsigned int *)(a1 + 144), 0); /*0x6df20f*/
      return result; /*0x6df220*/
    case 0x3A:
      TActionClass::SpawnMeteorShower((TActionClass *)a1, (int)a5, v9, (int)a7, (int)a8); /*0x6df23e*/
      return result; /*0x6df24d*/
    case 0x3B:
      *(unsigned int *)v119 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v120.__pad_C, *(unsigned int *)(a1 + 144)); /*0x6de336*/
      MapClass::TriggerEVA(result, v119); /*0x6de33a*/
      return result; /*0x6de34b*/
    case 0x3C:
      for ( n = 0; n < *(int *)&stru_A8E960.altNextScenario[236]; ++n ) /*0x6ddf00*/
      {
        v31 = *(unsigned int *)(*(unsigned int *)&stru_A8E960.altNextScenario[224] + 4 * n); /*0x6ddf0f*/
        if ( *(unsigned char *)(v31 + 144) ) /*0x6ddf12*/
        {
          if ( *(unsigned char *)(v31 + 116) ) /*0x6ddf1c*/
          {
            if ( !*(unsigned char *)(v31 + 129) ) /*0x6ddf23*/
            {
              v32 = *(LinkedList **)(v31 + 52); /*0x6ddf2d*/
              if ( v32 ) /*0x6ddf32*/
              {
                if ( (unsigned __int8)LinkedList::Contains(v32, (int)a7) ) /*0x6ddf35*/
                  (*(void (**)(int, int))(*(unsigned int *)v31 + 416))(v31, 1); /*0x6ddf44*/
              }
            }
          }
        }
      }
      return result; /*0x6ddf54*/
    case 0x3D:
      for ( ii = 0; ii < *(int *)&stru_A8E960.altNextScenario[236]; ++ii ) /*0x6ddf70*/
      {
        v34 = *(BuildingClass **)(*(unsigned int *)&stru_A8E960.altNextScenario[224] + 4 * ii); /*0x6ddf7e*/
        if ( v34->isAliveFlag[0] ) /*0x6ddf81*/
        {
          if ( v34->isOnMap[0] ) /*0x6ddf8b*/
          {
            if ( !v34->inLimbo[0] ) /*0x6ddf92*/
            {
              attachedTag = (LinkedList *)v34->attachedTag; /*0x6ddf9c*/
              if ( attachedTag ) /*0x6ddfa1*/
              {
                if ( (unsigned __int8)LinkedList::Contains(attachedTag, (int)a7) && v34->HasPower[0] ) /*0x6ddfad*/
                  BuildingClass::PowerOff(v34); /*0x6ddfb9*/
              }
            }
          }
        }
      }
      return result; /*0x6ddfc8*/
    case 0x3E:
      for ( jj = 0; jj < *(int *)&stru_A8E960.altNextScenario[236]; ++jj ) /*0x6ddfe4*/
      {
        v37 = *(BuildingClass **)(*(unsigned int *)&stru_A8E960.altNextScenario[224] + 4 * jj); /*0x6ddff3*/
        if ( v37->isAliveFlag[0] ) /*0x6ddff6*/
        {
          if ( v37->isOnMap[0] ) /*0x6de000*/
          {
            if ( !v37->inLimbo[0] ) /*0x6de007*/
            {
              v38 = (LinkedList *)v37->attachedTag; /*0x6de011*/
              if ( v38 ) /*0x6de016*/
              {
                if ( (unsigned __int8)LinkedList::Contains(v38, (int)a7) && !v37->HasPower[0] ) /*0x6de022*/
                  BuildingClass::AnnounceReady(v37); /*0x6de02e*/
              }
            }
          }
        }
      }
      return result; /*0x6de03d*/
    case 0x3F:
      PlayWaypointEffect((ObjectClass *)a1, (int)a5, v9, (int)a7, (int)a8); /*0x6ddde4*/
      return result; /*0x6dddf3*/
    case 0x40:
      v24 = *&dword_8871E0->u32_FA8; /*0x6dde04*/
      WorldCoords = Cell::GetWorldCoords((Cell *)dword_A8B230, &v120.u32_10, *(unsigned int *)(a1 + 144)); /*0x6dde16*/
      CreateSmokeEffectAt(50, v24, *WorldCoords, WorldCoords[1], WorldCoords[2], 0, 0); /*0x6dde37*/
      return result; /*0x6dde48*/
    case 0x41:
      v26 = *&dword_8871E0->u32_FA8; /*0x6dde59*/
      v27 = Cell::GetWorldCoords((Cell *)dword_A8B230, &v120.u32_10, *(unsigned int *)(a1 + 144)); /*0x6dde6b*/
      CreateSmokeEffectAt(100, v26, *v27, v27[1], v27[2], 0, 0); /*0x6dde8c*/
      return result; /*0x6dde9d*/
    case 0x42:
      v28 = *&dword_8871E0->u32_FA8; /*0x6ddeae*/
      v29 = Cell::GetWorldCoords((Cell *)dword_A8B230, &v120.u32_10, *(unsigned int *)(a1 + 144)); /*0x6ddec0*/
      CreateSmokeEffectAt(300, v28, *v29, v29[1], v29[2], 0, 0); /*0x6ddee1*/
      return result; /*0x6ddef2*/
    case 0x43:
      HouseClass::CheckWinCondition(*(HouseClass **)((char *)&stru_A83CD9.estimatedHealth + 3), 1); /*0x6ddd7f*/
      return result; /*0x6ddd90*/
    case 0x44:
      v23 = *(HouseClass **)((char *)&stru_A83CD9.estimatedHealth + 3); /*0x6ddd93*/
      v117 = 1; /*0x6ddd99*/
LABEL_60:
      HouseClass::CheckDefeat(v23, v117); /*0x6ddd9b*/
      return result; /*0x6dddac*/
    case 0x45:
      TActionClass::executeBuildAction(*(TActionClass **)((char *)&stru_A83CD9.estimatedHealth + 3)); /*0x6dddb5*/
      return result; /*0x6dddc6*/
    case 0x46:
      if ( *(unsigned int *)(a1 + 76) ) /*0x6df094*/
      {
        v85 = g_GameObjectCleanup; /*0x6df09d*/
        v86 = 0; /*0x6df0a3*/
        if ( g_GameObjectCleanup > 0 ) /*0x6df0a7*/
        {
          v87 = g_TagClassCount; /*0x6df0ad*/
          do /*0x6df0d6*/
          {
            if ( *(unsigned int *)(v87[v86] + 36) == *(unsigned int *)(a1 + 76) ) /*0x6df0bd*/
            {
              v88 = v87[v86]; /*0x6df0bf*/
              if ( v88 ) /*0x6df0c4*/
              {
                (*(void (**)(int, int))(*(unsigned int *)v88 + 32))(v88, 1); /*0x6df0ca*/
                v87 = g_TagClassCount; /*0x6df0cd*/
              }
              --v86; /*0x6df0d2*/
            }
            ++v86; /*0x6df0d3*/
          }
          while ( v86 < v85 ); /*0x6df0d6*/
        }
      }
      return result; /*0x6df0d6*/
    case 0x47:
      *&dword_8871E0->CrateRegen = *(float *)(a1 + 144); /*0x6df25e*/
      return result; /*0x6df26e*/
    case 0x48:
      *&dword_8871E0->AmbientChangeStep = *(float *)(a1 + 144); /*0x6df27f*/
      return result; /*0x6df28f*/
    case 0x49:
      dword_A8B230[378].vfptr = *(unsigned int *)(a1 + 144); /*0x6df29e*/
      if ( !(unsigned __int8)LightningStorm::IsActive() ) /*0x6df2a4*/
        dword_A8B230[378].vfptr2 = dword_A8B230[378].vfptr; /*0x6df2bc*/
      return result; /*0x6df2ce*/
    case 0x4A:
      v95 = ObjectClass::FindOwner(a7, *(void **)(a1 + 144)); /*0x6df2e2*/
      if ( v95 ) /*0x6df2e9*/
        *(unsigned char *)(v95 + 498) = 1; /*0x6df2fa*/
      return result; /*0x6df30d*/
    case 0x4B:
      v96 = (unsigned int *)ObjectClass::FindOwner(a7, *(void **)(a1 + 144)); /*0x6df321*/
      if ( v96 ) /*0x6df328*/
        *((unsigned char *)v96 + 498) = 0; /*0x6df339*/
      return result; /*0x6df34c*/
    case 0x4C:
      if ( a5 ) /*0x6df358*/
        a5->RatioAITriggerTeam = *(unsigned int *)(a1 + 144); /*0x6df364*/
      return result; /*0x6df376*/
    case 0x4D:
      if ( a5 ) /*0x6df382*/
        a5->RatioTeamAircraft = *(unsigned int *)(a1 + 144); /*0x6df38e*/
      return result; /*0x6df3a0*/
    case 0x4E:
      if ( a5 ) /*0x6df3ac*/
        a5->RatioTeamInfantry = *(unsigned int *)(a1 + 144); /*0x6df3b8*/
      return result; /*0x6df3ca*/
    case 0x4F:
      if ( a5 ) /*0x6df3d6*/
        a5->RatioTeamUnits = *(unsigned int *)(a1 + 144); /*0x6df3e2*/
      return result; /*0x6df3f4*/
    case 0x50:
      v76 = *(TeamClass **)(a1 + 48); /*0x6debd0*/
      if ( v76 ) /*0x6debd5*/
      {
        v77 = *(unsigned int *)(a1 + 68); /*0x6debdb*/
        if ( v77 != -1 ) /*0x6debe1*/
          DeployScriptActionPlane((int)v76, v77, result); /*0x6debe7*/
      }
      return result; /*0x6debf6*/
    case 0x51:
      globalHelper_0E01C0((int)a5, v9, (int)a7, (int)a8); /*0x6ddb82*/
      return result; /*0x6ddb91*/
    case 0x52:
      for ( kk = 0; kk < dword_8B3DD0; ++kk ) /*0x6ddbff*/
      {
        v18 = *((unsigned int *)dword_8B3DC4 + kk); /*0x6ddc12*/
        if ( !(*(int (**)(int))(*(unsigned int *)v18 + 388))(v18) /*0x6ddc49*/
          && *(int *)(v18 + 108) > 0
          && *(unsigned char *)(v18 + 144)
          && *(unsigned char *)(v18 + 116)
          && !*(unsigned char *)(v18 + 129)
          && a5 != *(HouseClass **)(v18 + 540) )
        {
          (*(void (**)(int, int, unsigned int))(*(unsigned int *)v18 + 488))(v18, 5, 0); /*0x6ddc52*/
        }
      }
      return result; /*0x6ddc60*/
    case 0x53:
      for ( mm = 0; mm < dword_8B3DD0; ++mm ) /*0x6ddc7a*/
      {
        v20 = *((unsigned int *)dword_8B3DC4 + mm); /*0x6ddc8c*/
        if ( (*(int (**)(int))(*(unsigned int *)v20 + 388))(v20) == 23 /*0x6ddcc4*/
          && *(int *)(v20 + 108) > 0
          && *(unsigned char *)(v20 + 144)
          && *(unsigned char *)(v20 + 116)
          && !*(unsigned char *)(v20 + 129)
          && *(HouseClass **)(v20 + 540) == a5 )
        {
          (*(void (**)(int, int, unsigned int))(*(unsigned int *)v20 + 488))(v20, 5, 0); /*0x6ddccd*/
        }
      }
      return result; /*0x6ddcdb*/
    case 0x54:
      for ( nn = 0; nn < *(int *)&stru_A8E960.random[276]; ++nn ) /*0x6ddcf5*/
      {
        v22 = *(unsigned int **)(*(unsigned int *)&stru_A8E960.random[264] + 4 * nn); /*0x6ddd07*/
        if ( v22[133] == *(unsigned int *)(a1 + 144) /*0x6ddd47*/
          && (!(*(int (**)(unsigned int))(*v22 + 388))(*(unsigned int *)(*(unsigned int *)&stru_A8E960.random[264] + 4 * nn))
           || (*(int (**)(unsigned int *))(*v22 + 388))(v22) == 23)
          && (int)v22[27] > 0
          && *((unsigned char *)v22 + 144)
          && *((unsigned char *)v22 + 116)
          && !*((unsigned char *)v22 + 129) )
        {
          (*(void (**)(unsigned int *, int, unsigned int))(*v22 + 488))(v22, 5, 0); /*0x6ddd58*/
        }
      }
      return result; /*0x6ddd66*/
    case 0x55:
      HIBYTE(dword_A8B230[374].vfptr3) = *(unsigned char *)(a1 + 144); /*0x6ddb9f*/
      return result; /*0x6ddbb1*/
    case 0x56:
      BYTE2(dword_A8B230[374].vfptr3) = a1->q090; /*0x6ddbc2*/
      return result; /*0x6ddbd2*/
    case 0x57:
      LOBYTE(dword_A8B230[374].uniqueId) = a1->q090; /*0x6ddbe1*/
      return result; /*0x6ddbf3*/
    case 0x58:
      *(unsigned int *)v119 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v120.__pad_C, *(unsigned int *)(a1 + 68)); /*0x6df417*/
      v97 = CoordStruct::Set2((CoordStruct *)&v120.u32_20, v119, 0); /*0x6df41b*/
      *(unsigned int *)v120.__pad_0 = *v97; /*0x6df423*/
      *(unsigned int *)&v120.q004 = v97[1]; /*0x6df42f*/
      v120.Coord_field_0x8 = v97[2]; /*0x6df43a*/
      CoordStruct::Set2((CoordStruct *)&v120.u32_10, v119, 0); /*0x6df43e*/
      v120.Coord_field_0x8 = Cell::GetGroundHeight(&v120.u32_10); /*0x6df457*/
      v98 = (int *)__2_YAPAXI_Z(0x100u); /*0x6df45b*/
      if ( v98 ) /*0x6df465*/
        ParticleSystemClass::Constructor( /*0x6df48a*/
          v98,
          *(unsigned int *)(*(unsigned int *)&stru_A83CD9.alignmentPadding91[2] + 4 * a1->q090),
          (int *)v120.__pad_0,
          0,
          0,
          &dword_B0E6A0,
          0);
      return result; /*0x6df49b*/
    case 0x59:
      v99 = 0; /*0x6df4b9*/
      for ( *(unsigned int *)v119 = *ScenarioClass::Get_Waypoint_Location( /*0x6df4c1*/
                                 (char *)dword_A8B230,
                                 v120.__pad_C,
                                 a1->u32_44); (int)v99 < g_GameCleanupState; ++v99 )
      {
        v100 = (unsigned char *)*((unsigned int *)dword_A8020C + (unsigned int)v99); /*0x6df4cc*/
        if ( v100[144] ) /*0x6df4cf*/
        {
          v101 = (CellStruct *)(*(int (**)(unsigned char *, char *))(*(unsigned int *)v100 + 440))(v100, &v120.u32_1C); /*0x6df4e7*/
          if ( (unsigned __int8)CellStruct::Equals(v101, v119) ) /*0x6df4ef*/
            (*(void (**)(unsigned char *))(*(unsigned int *)v100 + 248))(v100); /*0x6df4fc*/
        }
      }
      return result; /*0x6df50a*/
    case 0x5A:
      v102 = ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v120.u32_1C, *(unsigned int *)(a1 + 68)); /*0x6df52a*/
      LightningStorm::Strike(*v102); /*0x6df532*/
      return result; /*0x6df543*/
    case 0x5B:
      for ( i1 = 0; i1 < dword_A83DF8; ++i1 ) /*0x6ddb04*/
      {
        v15 = *((unsigned int *)dword_A83DEC + i1); /*0x6ddb13*/
        if ( *(unsigned char *)(v15 + 144) ) /*0x6ddb16*/
        {
          if ( *(unsigned char *)(v15 + 116) ) /*0x6ddb20*/
          {
            if ( !*(unsigned char *)(v15 + 129) ) /*0x6ddb27*/
            {
              v16 = *(LinkedList **)(v15 + 52); /*0x6ddb31*/
              if ( v16 ) /*0x6ddb36*/
              {
                if ( (unsigned __int8)LinkedList::Contains(v16, (int)a7) ) /*0x6ddb39*/
                  (*(void (**)(int))(*(unsigned int *)v15 + 1300))(v15); /*0x6ddb46*/
              }
            }
          }
        }
      }
      return result; /*0x6ddb56*/
    case 0x5E:
      v11 = ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v120.__pad_C, a1->u32_44); /*0x6dd922*/
      Coord::Subtract((Coord *)&v120.u32_10, ((__int16)*v11 << 8) + 128, ((__int16)HIWORD(*v11) << 8) + 128, 0); /*0x6dd94e*/
      *(unsigned int *)v120.__pad_0 = *(unsigned int *)&v120.u32_10; /*0x6dd95f*/
      *(unsigned int *)&v120.q004 = *(unsigned int *)&v120.u32_14; /*0x6dd967*/
      v120.Coord_field_0x8 = *(unsigned int *)&v120.q018; /*0x6dd971*/
      v120.Coord_field_0x8 = Cell::GetGroundHeight(&v120); /*0x6dd97c*/
      v12 = (ActionQueue *)__2_YAPAXI_Z(0x14u); /*0x6dd980*/
      if ( v12 ) /*0x6dd98a*/
        ActionQueue::PushEntry(v12, *(int *)v120.__pad_0, *(int *)&v120.q004, v120.Coord_field_0x8); /*0x6dd9ab*/
      return result; /*0x6dd9bc*/
    case 0x5F:
      TActionClass::CreateNukeEffect((TActionClass *)a1, (int)a5, v9, (int)a7, (int)a8); /*0x6dd9da*/
      return result; /*0x6dd9e9*/
    case 0x60:
      SuperWeaponClass::CreateChemLauncher((SuperWeaponClass *)a1, (int)a5, v9, (int)a7, (int)a8); /*0x6ddae7*/
      return result; /*0x6ddaf6*/
    case 0x61:
      BYTE1(dword_A8B230[374].vfptr3) = BYTE1(dword_A8B230[374].vfptr3) == 0; /*0x6dd8fe*/
      return result; /*0x6dd910*/
    case 0x62:
      Array::ForEach((int *)&v120.__pad_0AC, 4, 100, (int (*)(int))__0Iostream_init_QAE_XZ_2); /*0x6de7b6*/
      v62 = 0; /*0x6de7bb*/
      v63 = 0; /*0x6de7bd*/
      v64 = &v120.__pad_0AC; /*0x6de7bf*/
      do /*0x6de7fe*/
      {
        if ( (unsigned __int8)ScenarioClass::Is_Waypoint_Valid((char *)dword_A8B230, v63) ) /*0x6de7cd*/
        {
          ++v62; /*0x6de7e9*/
          *(unsigned int *)v64 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v120.__pad_C, v63); /*0x6de7ea*/
          v64 += 4; /*0x6de7ec*/
          if ( v62 == 400 ) /*0x6de7f5*/
            break; /*0x6de7f5*/
        }
        ++v63; /*0x6de7f7*/
      }
      while ( v63 < 702 ); /*0x6de7fe*/
      v65 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v62 - 1); /*0x6de80f*/
      v66 = CoordStruct::Set2((CoordStruct *)&v120.u32_10, (__int16 *)&v120.__pad_C[4 * v65 + 160], 0); /*0x6de824*/
      PlayAudioAt2(*(unsigned int *)(a1 + 144), v66, 0); /*0x6de831*/
      return result; /*0x6de842*/
    case 0x63:
      v67 = Cell::GetWorldCoords((Cell *)dword_A8B230, &v120.u32_10, *(unsigned int *)(a1 + 68)); /*0x6de854*/
      *(unsigned int *)v120.__pad_0 = *v67; /*0x6de85b*/
      *(unsigned int *)&v120.q004 = v67[1]; /*0x6de866*/
      v120.Coord_field_0x8 = v67[2]; /*0x6de86d*/
      Parameter = (ObjectClass *)ScriptAction::ReadParameter((ScriptAction *)&v120); /*0x6de871*/
      if ( Parameter ) /*0x6de878*/
        ObjectClass::CheckFlagD0(Parameter, *(unsigned int *)(a1 + 144)); /*0x6de883*/
      else
        PlayAudioAt2(*(unsigned int *)(a1 + 144), &v120, 1); /*0x6de8a3*/
      return result; /*0x6de894*/
    case 0x64:
      EnqueueAsyncIOMovie(*(unsigned int *)(a1 + 144), 0); /*0x6df54e*/
      return result; /*0x6df55f*/
    case 0x65:
      TActionClass::executeScatterAction((TActionClass *)a1, (int)a5, v9, (int)a7, (int)a8); /*0x6de8d2*/
      return result; /*0x6de8e1*/
    case 0x66:
      *(unsigned int *)v119 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v120.__pad_C, a1->u32_44); /*0x6dda03*/
      Coord::Subtract((Coord *)&v120.u32_10, (v119[0] << 8) + 128, (v119[1] << 8) + 128, 0); /*0x6dda27*/
      *(unsigned int *)v120.__pad_0 = *(unsigned int *)&v120.u32_10; /*0x6dda38*/
      *(unsigned int *)&v120.q004 = *(unsigned int *)&v120.u32_14; /*0x6dda40*/
      v120.Coord_field_0x8 = *(unsigned int *)&v120.q018; /*0x6dda4a*/
      v120.Coord_field_0x8 = Cell::GetGroundHeight(&v120); /*0x6dda57*/
      if ( (*((unsigned int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v119) + 80) & 0x100) != 0 ) /*0x6dda6f*/
        v120.Coord_field_0x8 += dword_B0E6D4; /*0x6dda7d*/
      v13 = *Coord::ToCell(&v120, v120.__pad_C); /*0x6dda8f*/
      if ( !(unsigned __int8)LightningStorm::IsActive() ) /*0x6dda91*/
        LightningStorm::Start( /*0x6ddab8*/
          *(unsigned int *)dword_8871E0->PlayerReturnFire,
          *(unsigned int *)dword_8871E0->FineDiffControl,
          v13,
          a5);
      return result; /*0x6ddac9*/
    case 0x67:
      v61 = a1->u8_6D != 0 ? &a1->u8_6D : 0;
      ScriptAction::CopyStringField(&v120.u32_2C, v61); /*0x6de67b*/
      if ( v61 ) /*0x6de682*/
      {
        dword_A8B230[127].nextArrayIndex = (int)GetStringCSF((wchar_t *)v61, 0, g_Str_File_TAction_CPP, 2242); /*0x6de6a2*/
        ScriptAction::CopyStructField( /*0x6de6bc*/
          (ScriptAction *)&dword_A8B230[127].referenceCount,
          &v120.q06C,
          &v120.u32_2C);
      }
      else
      {
        dword_A8B230[127].nextArrayIndex = (int)&g_TypeClass_DefaultString; /*0x6de6e9*/
        ScriptAction::CopyStringField(&v120.u32_4C, &g_INI_DefaultBuffer); /*0x6de6f3*/
        ScriptAction::CopyStructField( /*0x6de711*/
          (ScriptAction *)&dword_A8B230[127].referenceCount,
          &v120.q08C,
          &v120.u32_4C);
      }
      ObjectClass::PreDraw((ObjectClass *)&dword_87F7E8); /*0x6de6c6*/
      return result; /*0x6de6d7*/
    case 0x68:
      v103 = *(TeamTypeClass **)(a1 + 48); /*0x6df562*/
      if ( v103 ) /*0x6df567*/
        TeamTypeClass::FlashAllInstances(v103, *(unsigned int *)(a1 + 144)); /*0x6df574*/
      return result; /*0x6df585*/
    case 0x69:
      v104 = *(TeamTypeClass **)(a1 + 48); /*0x6df588*/
      if ( v104 ) /*0x6df58d*/
      {
        FirstInstance = TeamTypeClass::FindFirstInstance(v104); /*0x6df58f*/
        if ( FirstInstance ) /*0x6df596*/
          RevealTechnoClassRadarEvent(*(unsigned int *)(FirstInstance + 84), *(unsigned int *)(a1 + 144)); /*0x6df5a5*/
      }
      else
      {
        RevealTechnoClassRadarEvent(0, 0); /*0x6df5bd*/
      }
      return result; /*0x6df5b6*/
    case 0x6A:
      *(unsigned int *)v119 = *(unsigned int *)&stru_A8E960.altNextScenario[172] - 1; /*0x6df5dc*/
      if ( *(unsigned int *)&stru_A8E960.altNextScenario[172] - 1 < 0 ) /*0x6df5e0*/
        goto LABEL_279; /*0x6df5e0*/
      v106 = *(unsigned int *)&stru_A8E960.altNextScenario[160] + 4 * (*(unsigned int *)&stru_A8E960.altNextScenario[172] - 1); /*0x6df5e8*/
      while ( strcmp((const char *)(*(unsigned int *)v106 + 36), (const char *)(a1 + 84)) ) /*0x6df61e*/
      {
        v106 -= 4; /*0x6df624*/
        --*(unsigned int *)v119; /*0x6df62a*/
        if ( *(int *)v119 < 0 ) /*0x6df62e*/
          goto LABEL_279; /*0x6df62e*/
      }
      *(unsigned int *)(*(unsigned int *)v106 + 1588) = *(unsigned int *)(a1 + 144); /*0x6df638*/
LABEL_279:
      for ( i2 = dword_A80238 - 1; i2 >= 0; *(unsigned char *)(*(&dword_A8022C->vfptr1 + i2) + 508) = 1 ) /*0x6df649*/
        --i2; /*0x6df655*/
      return result; /*0x6df661*/
    case 0x6B:
      v108 = *(ObjectClass **)(a1 + 48); /*0x6df672*/
      if ( v108 ) /*0x6df677*/
      {
        v109 = *(unsigned int *)(a1 + 68); /*0x6df67d*/
        if ( v109 != -1 ) /*0x6df683*/
          ExecuteScriptTypeClassActions(v108, v109); /*0x6df689*/
      }
      return result; /*0x6df698*/
    case 0x6C:
      v110 = ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v120.u32_1C, *(unsigned int *)(a1 + 68)); /*0x6df6aa*/
      BuildingClass::SearchPlacement((BuildingClass *)&dword_87F7E8, *v110, *(unsigned int *)(a1 + 144)); /*0x6df6be*/
      return result; /*0x6df6cd*/
    case 0x6D:
      TActionClass::executeParadropAction((TActionClass *)a1, (int)a5, v9, (int)a7, (int)a8); /*0x6df6eb*/
      return result; /*0x6df6fa*/
    case 0x6E:
      SetScenarioClassTimer(*(unsigned int *)(a1 + 144)); /*0x6df703*/
      return result; /*0x6df714*/
    case 0x6F:
      v111 = 0; /*0x6df71e*/
      if ( *(int *)&stru_A8E960.altNextScenario[236] <= 0 ) /*0x6df722*/
        return result; /*0x6df722*/
      break; /*0x6df722*/
    case 0x70:
      *(unsigned int *)v119 = *ScenarioClass::Get_Waypoint_Location( /*0x6df7b5*/
                           (char *)dword_A8B230,
                           &v120.u32_1C,
                           a1->u32_44);
      v114 = CoordStruct::Set2((CoordStruct *)&v120.u32_20, v119, 0); /*0x6df7b9*/
      *(unsigned int *)v120.__pad_0 = *v114; /*0x6df7c0*/
      *(unsigned int *)&v120.q004 = v114[1]; /*0x6df7cc*/
      v120.Coord_field_0x8 = v114[2]; /*0x6df7d8*/
      v120.Coord_field_0x8 = Cell::GetGroundHeight(&v120); /*0x6df7eb*/
      if ( (*((unsigned int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v119) + 80) & 0x100) != 0 /*0x6df817*/
        || (*((unsigned int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v119) + 80) & 0x400) != 0 )
      {
        v120.Coord_field_0x8 += dword_B0E6D4; /*0x6df825*/
      }
      Tactical::SetTacticalPosition((TacticalClass *)g_TacticalClass_Instance, (int *)v120.__pad_0); /*0x6df834*/
      return result; /*0x6df845*/
    case 0x71:
      v115 = (HouseClass *)ObjectClass::FindOwner(a7, *(void **)(a1 + 144)); /*0x6df859*/
      if ( v115 ) /*0x6df860*/
        HouseClass::NotifyImpactWater(v115); /*0x6df873*/
      return result; /*0x6df884*/
    case 0x72:
      TActionClass::executePsychicDominatorAction((TActionClass *)a1, (int)a5, v9, (int)a7, (int)a8); /*0x6df8a2*/
      return result; /*0x6df8b1*/
    case 0x73:
      TActionClass::executeGeneticMutatorAction((TActionClass *)a1, (int)a5, v9, (int)a7, (int)a8); /*0x6df8cf*/
      return result; /*0x6df8de*/
    case 0x74:
      TActionClass::executeGuardAreaAction((TActionClass *)a1, (int)a5, v9, (int)a7, (int)a8); /*0x6df8fc*/
      return result; /*0x6df90b*/
    case 0x75:
      EnqueueAsyncIOMovie(*(unsigned int *)(a1 + 144), 1); /*0x6df916*/
      return result; /*0x6df927*/
    case 0x76:
      globalHelper_0E2C20((int)a5, v9, (int)a7, (int)a8); /*0x6df945*/
      return result; /*0x6df954*/
    case 0x77:
      TActionClass::executePlaceBeaconAction((TActionClass *)a1, (int)a5, v9, a7, (int)a8); /*0x6df972*/
      return result; /*0x6df981*/
    case 0x78:
      TActionClass::executeJumpjetAction((TActionClass *)a1, (int)a5, v9, a7, (int)a8); /*0x6df99f*/
      return result; /*0x6df9ae*/
    case 0x79:
      TActionClass::executeOpenGateAction((TActionClass *)a1, (int)a5, v9, a7, (int)a8); /*0x6df9cc*/
      return result; /*0x6df9db*/
    case 0x7A:
      TActionClass::executeCloseGateAction((TActionClass *)a1, (int)a5, v9, a7, (int)a8); /*0x6df9f9*/
      return result; /*0x6dfa08*/
    case 0x7B:
      TActionClass::executeCaptureAction((TActionClass *)a1, a5, v9, a7, (int)a8); /*0x6dfa26*/
      return result; /*0x6dfa35*/
    case 0x7C:
      TActionClass::executeSabotageAction((TActionClass *)a1, a5, v9, a7, (int)a8); /*0x6dfa53*/
      return result; /*0x6dfa62*/
    case 0x7D:
      TActionClass::executeForceShieldAction((TActionClass *)a1, (int)a5, v9, (int)a7, (int)a8); /*0x6dfa80*/
      return result; /*0x6dfa8f*/
    case 0x7E:
      CreateHouseClass(a1, 0, a2, (int)a5, v9, a7, (int)a8); /*0x6dfaad*/
      return result; /*0x6dfabc*/
    case 0x7F:
      globalHelper_03B460(*(unsigned int *)(a1 + 144), (Scenario *)a1); /*0x6dfac5*/
      return result; /*0x6dfad6*/
    case 0x80:
      TActionClass::executePatrolAction((TActionClass *)a1, a5, v9, (int)a7, (int)a8); /*0x6dfaf4*/
      return result; /*0x6dfb03*/
    case 0x81:
      TActionClass::executeIronCurtainAction((TActionClass *)a1, (int)a5, v9, (int)a7, (int)a8); /*0x6dfb21*/
      return result; /*0x6dfb30*/
    case 0x82:
      SmallFunc_6E3120(a1, a3, a2, (int)a5, v9, a7, (int)a8); /*0x6dfb4e*/
      return result; /*0x6dfb5d*/
    case 0x83:
      TActionClass::executeEMPulseAction(a1, (int)a5, v9, (int)a7, (int)a8); /*0x6dfb7b*/
      return result; /*0x6dfb8a*/
    case 0x84:
      TActionClass::executeNukeAction((TActionClass *)a1, (int)a5, v9, (int)a7, (int)a8); /*0x6dfba8*/
      return result; /*0x6dfbb7*/
    case 0x85:
      TActionClass::executeSpyPlaneAction((TActionClass *)a1, (int)a5, v9, (int)a7, (int)a8); /*0x6dfbd5*/
      return result; /*0x6dfbe4*/
    case 0x86:
      TActionClass::executeChronoSphereAction((TActionClass *)a1, (int)a5, v9, (int)a7, (int)a8); /*0x6dfc02*/
      return result; /*0x6dfc11*/
    case 0x87:
      TActionClass::executeWeatherStormAction((TActionClass *)a1, a5, v9, (int)a7, (int)a8); /*0x6dfc2f*/
      return result; /*0x6dfc3e*/
    case 0x88:
      globalHelper_0E4440(a5, v9, (int)a7, (int)a8); /*0x6dfc5c*/
      return result; /*0x6dfc6b*/
    case 0x89:
      TActionClass::executeRevealAction((TActionClass *)a1, a5, v9, (int)a7, (int)a8); /*0x6dfc89*/
      return result; /*0x6dfc98*/
    case 0x8A:
      globalHelper_0E4540(a5, v9, (int)a7, (int)a8); /*0x6dfcb6*/
      return result; /*0x6dfcc5*/
    case 0x8B:
      TActionClass::executeLightningAction((TActionClass *)a1, (int)a5, v9, (int)a7, (int)a8); /*0x6dfce3*/
      return result; /*0x6dfcf2*/
    case 0x8C:
      TActionClass::executeDominatorAction((TActionClass *)a1, a5, v9, (int)a7, (int)a8); /*0x6dfd10*/
      return result; /*0x6dfd1f*/
    case 0x8D:
      globalHelper_0E44C0(a5, v9, (int)a7, (int)a8); /*0x6dfd3d*/
      return result; /*0x6dfd4c*/
    case 0x8E:
      TActionClass::executeSelfDestructAction((TActionClass *)a1, (int)a5, v9, (int)a7, (int)a8); /*0x6dfd6a*/
      return result; /*0x6dfd79*/
    case 0x8F:
      TActionClass::executeExplodeAction((TActionClass *)a1, (int)a5, v9, (int)a7, (int)a8); /*0x6dfd97*/
      return result; /*0x6dfd97*/
    default:
      return result;
  }
  while ( 1 ) /*0x6df731*/
  {
    v112 = *(BuildingClass **)(*(unsigned int *)&stru_A8E960.altNextScenario[224] + 4 * v111); /*0x6df731*/
    if ( v112->isAliveFlag[0] ) /*0x6df734*/
    {
      if ( v112->isOnMap[0] ) /*0x6df73e*/
      {
        if ( !v112->inLimbo[0] ) /*0x6df745*/
        {
          v113 = (LinkedList *)v112->attachedTag; /*0x6df74f*/
          if ( v113 ) /*0x6df754*/
          {
            if ( (unsigned __int8)LinkedList::Contains(v113, (int)a7) ) /*0x6df757*/
              break; /*0x6df757*/
          }
        }
      }
    }
    if ( ++v111 >= *(int *)&stru_A8E960.altNextScenario[236] ) /*0x6df768*/
      return result; /*0x6df768*/
  }
  BuildingClass::UnloadUnits(v112, 0, 0); /*0x6df77f*/
  return result; /*0x6dd906*/

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
