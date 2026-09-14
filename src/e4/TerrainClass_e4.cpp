// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x6DD8B0
namespace gamemd {
int TerrainClass_ProcessUpdate()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __userpurge TerrainClass::ProcessUpdate@<al>(
        int a1@<ecx>,
        _DWORD *a2@<edi>,
        AbstractClass *aP1,
        _UNKNOWN **a4,
        IUnknown *a5,
        AbstractClass *aP4)
{
  char result; // al
  _UNKNOWN **v9; // ecx
  int v10; // ebp
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  int v13; // esi
  char v14; // bl
  int n; // edi
  int v16; // esi
  _DWORD *v17; // ecx
  int v18; // edi
  int v19; // esi
  int v20; // edi
  int v21; // esi
  int ebx47; // ebx
  _DWORD *v23; // edi
  IUnknown *v22; // ecx
  int v25; // edi
  int *WorldCoords; // eax
  int v27; // edi
  int *v28; // eax
  int v29; // edi
  int *v30; // eax
  char v31; // bl
  int j; // edi
  int v33; // esi
  _DWORD *v34; // ecx
  char bl75; // bl
  int k; // edi
  BuildingClass *v35; // esi
  _DWORD *attachedTag; // ecx
  char bl85; // bl
  int m; // edi
  BuildingClass *v39; // esi
  _DWORD *v42; // ecx
  int v43; // eax
  wchar_t *v44; // esi
  int v45; // eax
  unsigned int PlayerColorScheme; // edi
  wchar_t *StringCSF; // eax
  HouseClass *v48; // eax
  int v49; // esi
  IUnknown *eax105; // eax
  int v51; // esi
  IUnknown *v50; // ecx
  int v53; // eax
  IUnknown *v52; // edi
  int i; // eax
  TerrainTypeClass *v54; // esi
  int v57; // eax
  int v58; // eax
  int v59; // edx
  int v60; // eax
  int ecx134; // ecx
  int v62; // ecx
  ScenarioClass *v61; // eax
  char *v64; // esi
  int v65; // edi
  int v66; // ebp
  AbstractClass *v67; // ebx
  int v68; // eax
  _DWORD *v69; // eax
  CellStruct **v70; // eax
  _DWORD *v71; // eax
  IUnknown *Status; // eax
  int Owner; // eax
  int v74; // eax
  int v75; // eax
  int v76; // esi
  void *v77; // esi
  int v78; // esi
  int v79; // ecx
  int v80; // edx
  int v81; // eax
  CellStruct **v82; // eax
  int v83; // eax
  char v84; // bl
  int v85; // edi
  _DWORD *ecx213; // ecx
  int v87; // edi
  int v88; // ecx
  int v89; // ebx
  int v90; // edi
  CCINIClass *v86; // eax
  int v92; // ecx
  int v93; // edi
  int v94; // ecx
  int v95; // edi
  int v96; // ecx
  IUnknown **Waypoint_Location; // eax
  int v98; // edx
  int v99; // eax
  int v100; // eax
  CellStruct **v101; // eax
  int v102; // eax
  int v103; // edi
  _BYTE *v104; // esi
  _WORD *v105; // eax
  IUnknown **v106; // eax
  void *v107; // ecx
  void *v108; // ecx
  int FirstInstance; // eax
  int v110; // edx
  int v111; // eax
  _DWORD *ecx293; // ecx
  int edx294; // edx
  IUnknown **v114; // eax
  char v115; // bl
  int v116; // edi
  int v117; // esi
  _DWORD *v118; // ecx
  CellStruct **v119; // eax
  AnimClass *v120; // eax
  int v121; // [esp-8h] [ebp-258h]
  char v122; // [esp-4h] [ebp-254h]
  int v123; // [esp+0h] [ebp-250h]
  _DWORD *v124; // [esp+4h] [ebp-24Ch]
  int v125; // [esp+8h] [ebp-248h]
  IUnknown *v112; // [esp+10h] [ebp-240h] BYREF
  CellStruct *v113; // [esp+14h] [ebp-23Ch] BYREF
  CellStruct *v128; // [esp+18h] [ebp-238h]
  CellStruct *GroundHeight; // [esp+1Ch] [ebp-234h]
  rc_ptr_base v130; // [esp+20h] [ebp-230h] BYREF
  CellStruct *v131; // [esp+24h] [ebp-22Ch] BYREF
  int v132; // [esp+28h] [ebp-228h]
  int v133; // [esp+2Ch] [ebp-224h]
  char v134[4]; // [esp+30h] [ebp-220h] BYREF
  _DWORD v135[3]; // [esp+34h] [ebp-21Ch] BYREF
  char Destination[32]; // [esp+40h] [ebp-210h] BYREF
  char v137[32]; // [esp+60h] [ebp-1F0h] BYREF
  char v138[32]; // [esp+80h] [ebp-1D0h] BYREF
  char v139[32]; // [esp+A0h] [ebp-1B0h] BYREF
  AbstractClass aP0[11]; // [esp+C0h] [ebp-190h] BYREF

  result = 1;
  v9 = a4;
  v10 = 0;
  if ( a4 && !*((_BYTE *)a4 + 144) )
    v9 = 0;
  switch ( *(_DWORD *)(a1 + 44) )
  {
    case 1:
      v22 = (IUnknown *)HouseClass_Player.field_0;
      v122 = 0;
      if ( *(_DWORD *)(a1 + 144) != *(_DWORD *)(*(_DWORD *)(HouseClass_Player.field_0 + 52) + 184) )
        goto LABEL_60;
      goto LABEL_162;
    case 2:
      v22 = (IUnknown *)HouseClass_Player.field_0;
      v122 = 0;
      if ( *(_DWORD *)(a1 + 144) == *(_DWORD *)(*(_DWORD *)(HouseClass_Player.field_0 + 52) + 184) )
        goto LABEL_60;
LABEL_162:
      HouseClass::CheckWinCondition((int)v22, 0);
      return 1;
    case 3:
      Owner = ObjectClass::FindOwner(a5, *(AnimClass **)(a1 + 144));
      if ( !Owner )
        return 0;
      *(_BYTE *)(Owner + 494) = 1;
      return 1;
    case 4:
      ++*(_DWORD *)&HouseClass_Player.__pad_5568[21752];
      v76 = *(_DWORD *)(a1 + 48);
      if ( v76 )
        TeamClass::CreateOneOf(v76, 0);
      --*(_DWORD *)&HouseClass_Player.__pad_5568[21752];
      return 1;
    case 5:
      v77 = *(void **)(a1 + 48);
      if ( !v77 )
        return 1;
      TeamTypeClass::DestroyAllInstances(v77);
      return 1;
    case 6:
      v81 = ObjectClass::FindOwner(a5, *(AnimClass **)(a1 + 144));
      if ( !v81 )
        return 0;
      (*(void (__stdcall **)(int))(*(_DWORD *)(v81 + 36) + 56))(v81 + 36);
      return 1;
    case 7:
      v78 = *(_DWORD *)(a1 + 48);
      if ( !v78 )
        return 0;
      return DeployScriptActionPlane(v78, -1);
    case 8:
      return TActionClass::executeRetreatAction((int *)a1, aP1, (int)v9, (int)a5, aP4);
    case 9:
      v74 = ObjectClass::FindOwner(a5, *(AnimClass **)(a1 + 144));
      if ( !v74 )
        return 0;
      *(_DWORD *)(v74 + 592) = 4;
      return 1;
    case 0xA:
      MouseClass::LoadCursors();
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 20))(*(_DWORD *)&stru_87C374.__pad_579C[23344]);
      ToggleDisplayMode(0);
      Movie::PlayWrapper(*(_DWORD *)(a1 + 144), 0, (int)a2, 1, 1, 1);
      ToggleDisplayMode(1);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 24))(*(_DWORD *)&stru_87C374.__pad_579C[23344]);
      LoadingScreen::FreeResources3();
      return 1;
    case 0xB:
      v43 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13496);
      v44 = *(_BYTE *)(a1 + 109) != 0 ? (wchar_t *)(a1 + 109) : 0;
      if ( v43 )
        v45 = v43 != 1 ? 5 : 1;
      else
        v45 = 2;
      PlayerColorScheme = SessionClass::GetPlayerColorScheme((ObjectClass *)v45);
      if ( !v44 )
        return 1;
      v121 = Math::RoundToInt(*(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5312) * 900.0);
      StringCSF = GetStringCSF(v44, 0, &stru_830620.__pad_579C[52796], 1766);
      MessageListClass::AddMessage(
        &HouseClass_Player.__pad_5568[10668],
        0,
        0,
        (CellStruct *)StringCSF,
        PlayerColorScheme,
        (IUnknown *)0x4046,
        v121,
        0);
      return 1;
    case 0xC:
      if ( !*(_DWORD *)(a1 + 80) )
        return 1;
      v87 = *(_DWORD *)&HouseClass_Player.__pad_5568[22596] - 1;
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[22596] - 1 < 0 )
        return 1;
      do
      {
        v88 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22584] + 4 * v87);
        if ( *(_DWORD *)(v88 + 36) == *(_DWORD *)(a1 + 80) )
          TeamClass::AddToBuildQueue((_BYTE *)v88);
        --v87;
      }
      while ( v87 >= 0 );
      return 1;
    case 0xD:
      v75 = ObjectClass::FindOwner(a5, *(AnimClass **)(a1 + 144));
      if ( !v75 )
        return 0;
      *(_BYTE *)(v75 + 495) = 1;
      return 1;
    case 0xE:
      return TActionClass::executeEnterAction((_DWORD *)a1, (int)aP1, (int)v9, a5, (IUnknown *)aP4);
    case 0x10:
      if ( *(_BYTE *)(HouseClass_Player.field_0 + 576) )
        return 1;
      *(_BYTE *)(HouseClass_Player.field_0 + 576) = 1;
      LayerClass::CellIteratorReset(&stru_87C374.__pad_14B0[8132]);
      for ( i = LayerClass::CellIteratorNext(&stru_87C374.__pad_14B0[8132]);
            i;
            i = LayerClass::CellIteratorNext(&stru_87C374.__pad_14B0[8132]) )
      {
        Conditions::CheckResult(i + 36, (IUnknown *)HouseClass_Player.field_0);
      }
      MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 1);
      return 1;
    case 0x11:
      return TActionClass::RevealWaypointArea((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x12:
      return TActionClass::RevealTileTypeAtWaypoint((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x13:
      PlayVocClass(*(_DWORD *)(a1 + 144), 0x2000, 1.0, 0);
      return 1;
    case 0x14:
      Theme::QueueSong((int)&g_BuildingTypeClass_Count, *(IUnknown **)(a1 + 144));
      return 1;
    case 0x15:
      UpdateThemeManager(*(_DWORD *)(a1 + 144), 2, -1);
      return 1;
    case 0x16:
      if ( !*(_DWORD *)(a1 + 80) )
        return 1;
      v93 = 0;
      if ( *(int *)&HouseClass_Player.__pad_5568[22596] <= 0 )
        return 1;
      do
      {
        v94 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22584] + 4 * v93);
        if ( *(_DWORD *)(v94 + 36) == *(_DWORD *)(a1 + 80) )
          BuildingClass::ExecuteTriggers(v94, 0, *(TriggerClass **)&stru_B05488.__pad_579C[14940]);
        ++v93;
      }
      while ( v93 < *(int *)&HouseClass_Player.__pad_5568[22596] );
      return 1;
    case 0x17:
      if ( *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584) != -1 )
        return 1;
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584) = *(_DWORD *)&HouseClass_Player.__pad_5568[23248];
      ObjectClass::PreDraw(&stru_87C374.__pad_14B0[8132]);
      return 1;
    case 0x18:
      v54 = (TerrainTypeClass *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584);
      if ( *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584) == -1 )
        return 1;
      *(_DWORD *)&v54->__pad_0[8] = CDTimerClass::TimeRemaining((int *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060]
                                                                      + 4584));
      *(_DWORD *)v54->__pad_0 = -1;
      ObjectClass::PreDraw(&stru_87C374.__pad_14B0[8132]);
      return 1;
    case 0x19:
      v57 = CDTimerClass::TimeRemaining((int *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584));
      Timer::Start(&v131, (DynamicVector *)(15 * *(_DWORD *)(a1 + 144) + v57));
      v58 = *(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584;
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584) = v131;
      *(_DWORD *)(v58 + 4) = v132;
      *(_DWORD *)(v58 + 8) = v133;
      ObjectClass::PreDraw(&stru_87C374.__pad_14B0[8132]);
      return 1;
    case 0x1A:
      if ( CDTimerClass::TimeRemaining((int *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584)) > 15 * *(_DWORD *)(a1 + 144) )
      {
        v60 = CDTimerClass::TimeRemaining((int *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584));
        Timer::Start(&v113, (DynamicVector *)(v60 - 15 * *(_DWORD *)(a1 + 144)));
        ecx134 = *(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584;
        *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584) = v113;
        *(_DWORD *)(ecx134 + 4) = v128;
        *(_DWORD *)(ecx134 + 8) = GroundHeight;
        ObjectClass::PreDraw(&stru_87C374.__pad_14B0[8132]);
      }
      else
      {
        Timer::Start(&v131, 0);
        v59 = *(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584;
        *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584) = v131;
        *(_DWORD *)(v59 + 4) = v132;
        *(_DWORD *)(v59 + 8) = v133;
        ObjectClass::PreDraw(&stru_87C374.__pad_14B0[8132]);
      }
      return 1;
    case 0x1B:
      Timer::Start(&v131, (DynamicVector *)(15 * *(_DWORD *)(a1 + 144)));
      v62 = *(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584;
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584) = v131;
      *(_DWORD *)(v62 + 4) = v132;
      *(_DWORD *)(v62 + 8) = v133;
      v61 = *(ScenarioClass **)&HouseClass_Player.__pad_5568[8060];
      if ( *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584) == -1 )
      {
        *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584) = *(_DWORD *)&HouseClass_Player.__pad_5568[23248];
        v61 = *(ScenarioClass **)&HouseClass_Player.__pad_5568[8060];
      }
      v61->missionTimer_text_csf = &stru_87C374.__pad_579C[23588];
      ScriptAction::CopyStringField(Destination, &stru_87C374.__pad_579C[33876]);
      ScriptAction::CopyStructField((void *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4600), v137, Destination);
      ObjectClass::PreDraw(&stru_87C374.__pad_14B0[8132]);
      return 1;
    case 0x1C:
      ScenarioClass::SetGlobalToByID(*(_BYTE **)&HouseClass_Player.__pad_5568[8060], *(_DWORD *)(a1 + 144), 1);
      return 1;
    case 0x1D:
      ScenarioClass::SetGlobalToByID(*(_BYTE **)&HouseClass_Player.__pad_5568[8060], *(_DWORD *)(a1 + 144), 0);
      return 1;
    case 0x1E:
      if ( !*(_BYTE *)(a1 + 144) )
      {
        HIBYTE(aP1[13].referenceCount) = 0;
        return 1;
      }
      HIBYTE(aP1[13].referenceCount) = 1;
      if ( aP1[2].nextArrayIndex > 0 )
      {
        v50 = *(IUnknown **)(**(_DWORD **)&aP1[2].__pad_0[12] + 156);
        v53 = *(_DWORD *)(**(_DWORD **)&aP1[2].__pad_0[12] + 160);
        v133 = *(_DWORD *)(**(_DWORD **)&aP1[2].__pad_0[12] + 164);
        v52 = *(IUnknown **)CellStruct::Set(&v130, (int)v50 / 256, v53 / 256);
        HouseClass::SetMapSeed(aP1, v52);
        aP1[620].NeedsSaveOrLink = v52;
      }
      if ( !*(_DWORD *)&aP1[619].__pad_0[8] )
      {
        HouseClass::SetPrimaryTechBuilding((int)aP1);
        return 1;
      }
      return 1;
    case 0x1F:
      MapClass::ProcessVisibilityFlags(&stru_87C374.__pad_14B0[8132]);
      return 1;
    case 0x20:
      return globalHelper_0E2050((int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x21:
      SuperClass::StartTimer(*(_DWORD *)(aP1[16].nextArrayIndex + 4 * *(_DWORD *)(a1 + 144)), (IUnknown *)1, 0, 0);
      if ( (AbstractClass *)HouseClass_Player.field_0 == aP1 )
        goto LABEL_157;
      return 1;
    case 0x22:
      SuperClass::StartTimer(*(_DWORD *)(aP1[16].nextArrayIndex + 4 * *(_DWORD *)(a1 + 144)), 0, 0, 0);
      *(_BYTE *)(*(_DWORD *)(aP1[16].nextArrayIndex + 4 * *(_DWORD *)(a1 + 144)) + 96) = 0;
      if ( (AbstractClass *)HouseClass_Player.field_0 != aP1 )
        return 1;
LABEL_157:
      SidebarClass::AddCameo((int *)&stru_87C374.__pad_14B0[8132], 31, *(AnimClass **)(a1 + 144));
      Status = (IUnknown *)HouseClass::GetStatus((IUnknown *)0x1F, 0);
      Sidebar::ActivateTab((int)&stru_87C374.__pad_14B0[8132], Status);
      return 1;
    case 0x23:
      if ( !aP1 )
        return 1;
      aP1[603].NeedsSaveOrLink = *(void **)(a1 + 144);
      return 1;
    case 0x24:
      return TActionClass::ConvertHouseUnits((_DWORD *)a1, (int)aP1, (int)v9, a5, (IUnknown *)aP4);
    case 0x25:
      v48 = (HouseClass *)ObjectClass::FindOwner(a5, *(AnimClass **)(a1 + 144));
      v49 = (int)v48;
      if ( !v48 )
        return 0;
      HouseClass::HandleAlliance((int)aP1, v48, 0);
      HouseClass::HandleAlliance(v49, (HouseClass *)aP1, 0);
      return 1;
    case 0x26:
      eax105 = (IUnknown *)ObjectClass::FindOwner(a5, *(AnimClass **)(a1 + 144));
      v51 = (int)eax105;
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
        *(_DWORD *)(a1 + 144),
        *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6036),
        *(int *)&stru_B05488.__pad_579C[14940],
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
      *(_DWORD *)&stru_87C374.__pad_14B0[12648] = 0;
      *(_DWORD *)&stru_87C374.__pad_14B0[12652] = 0;
      *(_DWORD *)&stru_87C374.__pad_14B0[12656] = -1;
      Mouse::SetBounds((int)&stru_87C374.__pad_14B0[8132], 0);
      BuildingClass::TogglePower2(&stru_87C374.__pad_14B0[8132], 0);
      BuildingClass::TogglePower(&stru_87C374.__pad_14B0[8132], 0);
      stru_87C374.__pad_14B0[12662] = 0;
      stru_87C374.__pad_14B0[12663] = 0;
      stru_87C374.__pad_14B0[12664] = 0;
      Scenario::ClearScreen();
      return 1;
    case 0x2F:
      UpdateMouse();
      return 1;
    case 0x30:
      v112 = (IUnknown *)*ScenarioClass::Get_Waypoint_Location(
                            *(char **)&HouseClass_Player.__pad_5568[8060],
                            &v130,
                            *(_DWORD *)(a1 + 68));
      v82 = (CellStruct **)CoordStruct::Set2(&v131, (IUnknown *)&v112, 0);
      v113 = *v82;
      v128 = v82[1];
      GroundHeight = v82[2];
      GroundHeight = (CellStruct *)Cell::GetGroundHeight((IUnknown *)&v113);
      if ( (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v112) + 80) & 0x100) != 0
        || (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v112) + 80) & 0x400) != 0 )
      {
        GroundHeight = (CellStruct *)((char *)GroundHeight + *(_DWORD *)&stru_B05488.__pad_579C[15024]);
      }
      TacticalClass::SetPosition(
        *(_DWORD **)&stru_87C374.__pad_579C[22548],
        (IUnknown *)&v113,
        *(AbstractClass **)(a1 + 144));
      return 1;
    case 0x31:
      v83 = *(_DWORD *)&stru_87C374.__pad_579C[22224] + 1360;
      *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22548] + 192) = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224]
                                                                               + 1360);
      *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22548] + 196) = *(_DWORD *)(v83 + 4);
      HouseClass_Player.__pad_5568[23272] = 1;
      Timer::PumpMessages(*(HWND **)&stru_87C374.__pad_14B0[8012]);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 12))(*(_DWORD *)&stru_87C374.__pad_579C[23344]);
      Mouse::ReleaseCapture(&stru_87C374.__pad_14B0[8132]);
      MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 0);
      TacticalMap::Redraw(&stru_87C374.__pad_14B0[8132]);
      Sleep(0x3E8u);
      return 1;
    case 0x32:
      *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22548] + 192) = 0;
      *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22548] + 196) = 1072693248;
      Timer::PumpMessages(*(HWND **)&stru_87C374.__pad_14B0[8012]);
      HouseClass_Player.__pad_5568[23272] = *(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13730);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 16))(*(_DWORD *)&stru_87C374.__pad_579C[23344]);
      MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 0);
      TacticalMap::Redraw(&stru_87C374.__pad_14B0[8132]);
      return 1;
    case 0x33:
      TActionClass::executeRepairAction(&stru_87C374.__pad_14B0[8132], (int)aP1);
      return 1;
    case 0x34:
      v84 = 0;
      if ( *(int *)&HouseClass_Player.__pad_5568[22684] > 0 )
      {
        do
        {
          v85 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22672] + 4 * v10);
          if ( *(int *)(v85 + 108) > 0 )
          {
            if ( *(_BYTE *)(v85 + 144) )
            {
              if ( *(_BYTE *)(v85 + 116) )
              {
                if ( !*(_BYTE *)(v85 + 129) )
                {
                  if ( *(_BYTE *)(*(_DWORD *)(v85 + 1312) + 5451) )
                  {
                    if ( *(_DWORD *)(v85 + 1536) )
                    {
                      ecx213 = *(_DWORD **)(v85 + 52);
                      if ( ecx213 )
                      {
                        if ( LinkedList::Contains(ecx213, a5) )
                        {
                          BuildingLightClass::FindTarget(*(_DWORD **)(v85 + 1536), *(CCINIClass **)(a1 + 144));
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
        while ( v10 < *(int *)&HouseClass_Player.__pad_5568[22684] );
      }
      return v84;
    case 0x35:
      return TActionClass::executeUnloadAction((_DWORD *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x36:
      if ( !*(_DWORD *)(a1 + 80) )
        return 1;
      v95 = 0;
      if ( *(int *)&HouseClass_Player.__pad_5568[22596] <= 0 )
        return 1;
      do
      {
        v96 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22584] + 4 * v95);
        if ( *(_DWORD *)(v96 + 36) == *(_DWORD *)(a1 + 80) )
          TActionClass::executeDetonateAction((_BYTE *)v96);
        ++v95;
      }
      while ( v95 < *(int *)&HouseClass_Player.__pad_5568[22596] );
      return 1;
    case 0x37:
      Waypoint_Location = (IUnknown **)ScenarioClass::Get_Waypoint_Location(
                                         *(char **)&HouseClass_Player.__pad_5568[8060],
                                         &v130,
                                         *(_DWORD *)(a1 + 68));
      CreateTriggerClassIfFarEnough(*(IUnknown **)(a1 + 144), v98, *Waypoint_Location);
      return 1;
    case 0x38:
      ScenarioClass::SetLocalToByID(*(_BYTE **)&HouseClass_Player.__pad_5568[8060], *(_DWORD *)(a1 + 144), 1);
      return 1;
    case 0x39:
      ScenarioClass::SetLocalToByID(*(_BYTE **)&HouseClass_Player.__pad_5568[8060], *(_DWORD *)(a1 + 144), 0);
      return 1;
    case 0x3A:
      return TActionClass::SpawnMeteorShower((int *)a1, aP1, (int)v9, (int)a5, aP4);
    case 0x3B:
      v112 = (IUnknown *)*ScenarioClass::Get_Waypoint_Location(
                            *(char **)&HouseClass_Player.__pad_5568[8060],
                            &v130,
                            *(_DWORD *)(a1 + 144));
      MapClass::TriggerEVA((IUnknown *)&v112);
      return 1;
    case 0x3C:
      v31 = 0;
      for ( j = 0; j < *(int *)&HouseClass_Player.__pad_5568[22684]; ++j )
      {
        v33 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22672] + 4 * j);
        if ( *(_BYTE *)(v33 + 144) )
        {
          if ( *(_BYTE *)(v33 + 116) )
          {
            if ( !*(_BYTE *)(v33 + 129) )
            {
              v34 = *(_DWORD **)(v33 + 52);
              if ( v34 )
              {
                if ( LinkedList::Contains(v34, a5) )
                {
                  (*(void (__thiscall **)(int, int))(*(_DWORD *)v33 + 416))(v33, 1);
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
      for ( k = 0; k < *(int *)&HouseClass_Player.__pad_5568[22684]; ++k )
      {
        v35 = *(BuildingClass **)(*(_DWORD *)&HouseClass_Player.__pad_5568[22672] + 4 * k);
        if ( v35->isAliveFlag )
        {
          if ( v35->isOnMap )
          {
            if ( !v35->inLimbo )
            {
              attachedTag = v35->attachedTag;
              if ( attachedTag )
              {
                if ( LinkedList::Contains(attachedTag, a5) && v35->HasPower )
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
      for ( m = 0; m < *(int *)&HouseClass_Player.__pad_5568[22684]; ++m )
      {
        v39 = *(BuildingClass **)(*(_DWORD *)&HouseClass_Player.__pad_5568[22672] + 4 * m);
        if ( v39->isAliveFlag )
        {
          if ( v39->isOnMap )
          {
            if ( !v39->inLimbo )
            {
              v42 = v39->attachedTag;
              if ( v42 )
              {
                if ( LinkedList::Contains(v42, a5) && !v39->HasPower )
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
      v25 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4008);
      WorldCoords = Cell::GetWorldCoords(*(__int16 **)&HouseClass_Player.__pad_5568[8060], &v131, *(_DWORD *)(a1 + 144));
      CreateSmokeEffectAt(50, v25, *WorldCoords, WorldCoords[1], WorldCoords[2], 0, 0);
      return 1;
    case 0x41:
      v27 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4008);
      v28 = Cell::GetWorldCoords(*(__int16 **)&HouseClass_Player.__pad_5568[8060], &v131, *(_DWORD *)(a1 + 144));
      CreateSmokeEffectAt(100, v27, *v28, v28[1], v28[2], 0, 0);
      return 1;
    case 0x42:
      v29 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4008);
      v30 = Cell::GetWorldCoords(*(__int16 **)&HouseClass_Player.__pad_5568[8060], &v131, *(_DWORD *)(a1 + 144));
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
      if ( !*(_DWORD *)(a1 + 76) )
        return 1;
      v89 = *(_DWORD *)&stru_B05488.__pad_579C[15116];
      v90 = 0;
      if ( *(int *)&stru_B05488.__pad_579C[15116] <= 0 )
        return 1;
      v86 = *(CCINIClass **)&stru_B05488.__pad_579C[15104];
      do
      {
        if ( *(_DWORD *)(*(_DWORD *)&v86->__pad_0[4 * v90] + 36) == *(_DWORD *)(a1 + 76) )
        {
          v92 = *(_DWORD *)&v86->__pad_0[4 * v90];
          if ( v92 )
          {
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v92 + 32))(v92, 1);
            v86 = *(CCINIClass **)&stru_B05488.__pad_579C[15104];
          }
          --v90;
        }
        ++v90;
      }
      while ( v90 < v89 );
      return 1;
    case 0x47:
      *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5744) = *(float *)(a1 + 144);
      return 1;
    case 0x48:
      *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5736) = *(float *)(a1 + 144);
      return 1;
    case 0x49:
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13608) = *(_DWORD *)(a1 + 144);
      if ( LightningStorm::IsActive() )
        return 1;
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13616) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060]
                                                                                      + 13608);
      return 1;
    case 0x4A:
      v99 = ObjectClass::FindOwner(a5, *(AnimClass **)(a1 + 144));
      if ( !v99 )
        return 0;
      *(_BYTE *)(v99 + 498) = 1;
      return 1;
    case 0x4B:
      v100 = ObjectClass::FindOwner(a5, *(AnimClass **)(a1 + 144));
      if ( !v100 )
        return 0;
      *(_BYTE *)(v100 + 498) = 0;
      return 1;
    case 0x4C:
      if ( !aP1 )
        return 1;
      *(_DWORD *)&aP1[614].__pad_0[4] = *(_DWORD *)(a1 + 144);
      return 1;
    case 0x4D:
      if ( !aP1 )
        return 1;
      *(_DWORD *)&aP1[614].__pad_0[8] = *(_DWORD *)(a1 + 144);
      return 1;
    case 0x4E:
      if ( !aP1 )
        return 1;
      *(_DWORD *)&aP1[614].__pad_0[12] = *(_DWORD *)(a1 + 144);
      return 1;
    case 0x4F:
      if ( !aP1 )
        return 1;
      aP1[614].uniqueId = *(_DWORD *)(a1 + 144);
      return 1;
    case 0x50:
      v79 = *(_DWORD *)(a1 + 48);
      if ( !v79 )
        return 0;
      v80 = *(_DWORD *)(a1 + 68);
      if ( v80 == -1 )
        return 0;
      return DeployScriptActionPlane(v79, v80);
    case 0x51:
      return globalHelper_0E01C0((int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x52:
      v18 = 0;
      if ( *(int *)&stru_89E138.__pad_579C[66812] <= 0 )
        return 1;
      do
      {
        v19 = *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_579C[66800] + 4 * v18);
        if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v19 + 388))(v19)
          && *(int *)(v19 + 108) > 0
          && *(_BYTE *)(v19 + 144)
          && *(_BYTE *)(v19 + 116)
          && !*(_BYTE *)(v19 + 129)
          && aP1 != *(AbstractClass **)(v19 + 540) )
        {
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v19 + 488))(v19, 5, 0);
        }
        ++v18;
      }
      while ( v18 < *(int *)&stru_89E138.__pad_579C[66812] );
      return 1;
    case 0x53:
      v20 = 0;
      if ( *(int *)&stru_89E138.__pad_579C[66812] <= 0 )
        return 1;
      do
      {
        v21 = *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_579C[66800] + 4 * v20);
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v21 + 388))(v21) == 23
          && *(int *)(v21 + 108) > 0
          && *(_BYTE *)(v21 + 144)
          && *(_BYTE *)(v21 + 116)
          && !*(_BYTE *)(v21 + 129)
          && *(AbstractClass **)(v21 + 540) == aP1 )
        {
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v21 + 488))(v21, 5, 0);
        }
        ++v20;
      }
      while ( v20 < *(int *)&stru_89E138.__pad_579C[66812] );
      return 1;
    case 0x54:
      ebx47 = 0;
      if ( *(int *)&HouseClass_Player.__pad_5568[22996] <= 0 )
        return 1;
      do
      {
        v23 = *(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[22984] + 4 * ebx47);
        if ( v23[133] == *(_DWORD *)(a1 + 144)
          && (!(*(int (__thiscall **)(_DWORD))(*v23 + 388))(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22984]
                                                                      + 4 * ebx47))
           || (*(int (__thiscall **)(_DWORD *))(*v23 + 388))(v23) == 23)
          && (int)v23[27] > 0
          && *((_BYTE *)v23 + 144)
          && *((_BYTE *)v23 + 116)
          && !*((_BYTE *)v23 + 129) )
        {
          (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v23 + 488))(v23, 5, 0);
        }
        ++ebx47;
      }
      while ( ebx47 < *(int *)&HouseClass_Player.__pad_5568[22996] );
      return 1;
    case 0x55:
      *(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13479) = *(_BYTE *)(a1 + 144);
      return 1;
    case 0x56:
      *(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13478) = *(_BYTE *)(a1 + 144);
      return 1;
    case 0x57:
      *(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13480) = *(_BYTE *)(a1 + 144);
      return 1;
    case 0x58:
      v112 = (IUnknown *)*ScenarioClass::Get_Waypoint_Location(
                            *(char **)&HouseClass_Player.__pad_5568[8060],
                            &v130,
                            *(_DWORD *)(a1 + 68));
      v101 = (CellStruct **)CoordStruct::Set2(v135, (IUnknown *)&v112, 0);
      v113 = *v101;
      v128 = v101[1];
      GroundHeight = v101[2];
      CoordStruct::Set2(&v131, (IUnknown *)&v112, 0);
      GroundHeight = (CellStruct *)Cell::GetGroundHeight((IUnknown *)&v131);
      v102 = __2_YAPAXI_Z(0x100u);
      if ( !v102 )
        return 1;
      ParticleSystemClass::Constructor(
        v102,
        *(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_18[8] + 4 * *(_DWORD *)(a1 + 144)),
        (IUnknown *)&v113,
        0,
        0,
        (IUnknown *)&stru_B05488.__pad_579C[14972],
        0);
      return 1;
    case 0x59:
      v103 = 0;
      v112 = (IUnknown *)*ScenarioClass::Get_Waypoint_Location(
                            *(char **)&HouseClass_Player.__pad_5568[8060],
                            &v130,
                            *(_DWORD *)(a1 + 68));
      if ( g_GameCleanupState <= 0 )
        return 1;
      do
      {
        v104 = *(_BYTE **)&dword_A8020C->__pad_0[4 * v103];
        if ( v104[144] )
        {
          v105 = (_WORD *)(*(int (__thiscall **)(_BYTE *, char *))(*(_DWORD *)v104 + 440))(v104, v134);
          if ( CellStruct::Equals(v105, &v112) )
            (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v104 + 248))(v104);
        }
        ++v103;
      }
      while ( v103 < g_GameCleanupState );
      return 1;
    case 0x5A:
      v106 = (IUnknown **)ScenarioClass::Get_Waypoint_Location(
                            *(char **)&HouseClass_Player.__pad_5568[8060],
                            v134,
                            *(_DWORD *)(a1 + 68));
      LightningStorm::Strike(*v106);
      return 1;
    case 0x5B:
      v14 = 0;
      for ( n = 0; n < *(int *)&HouseClass_Player.__pad_74[56]; ++n )
      {
        v16 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_74[44] + 4 * n);
        if ( *(_BYTE *)(v16 + 144) )
        {
          if ( *(_BYTE *)(v16 + 116) )
          {
            if ( !*(_BYTE *)(v16 + 129) )
            {
              v17 = *(_DWORD **)(v16 + 52);
              if ( v17 )
              {
                if ( LinkedList::Contains(v17, a5) )
                {
                  (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 1300))(v16);
                  v14 = 1;
                }
              }
            }
          }
        }
      }
      return v14;
    case 0x5E:
      v11 = ScenarioClass::Get_Waypoint_Location(
              *(char **)&HouseClass_Player.__pad_5568[8060],
              &v130,
              *(_DWORD *)(a1 + 68));
      Coord::Subtract(
        &v131,
        (IUnknown *)(((__int16)*v11 << 8) + 128),
        (IUnknown *)(((__int16)HIWORD(*v11) << 8) + 128),
        0);
      v113 = v131;
      v128 = (CellStruct *)v132;
      GroundHeight = (CellStruct *)v133;
      GroundHeight = (CellStruct *)Cell::GetGroundHeight((IUnknown *)&v113);
      v12 = (_DWORD *)__2_YAPAXI_Z(0x14u);
      if ( !v12 )
        return 1;
      ActionQueue::PushEntry(v12, (int)v113, (int)v128, (int)GroundHeight);
      return 1;
    case 0x5F:
      return TActionClass::CreateNukeEffect((int *)a1, aP1, (int)v9, (int)a5, aP4);
    case 0x60:
      return SuperWeaponClass::CreateChemLauncher((_DWORD *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x61:
      *(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13477) = *(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060]
                                                                                    + 13477) == 0;
      return 1;
    case 0x62:
      Array::ForEach(aP0, 4, (IUnknown *)0x64, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2);
      v65 = 0;
      v66 = 0;
      v67 = aP0;
      do
      {
        if ( ScenarioClass::Is_Waypoint_Valid(*(char **)&HouseClass_Player.__pad_5568[8060], v66) )
        {
          ++v65;
          *(_DWORD *)v67->__pad_0 = *ScenarioClass::Get_Waypoint_Location(
                                       *(char **)&HouseClass_Player.__pad_5568[8060],
                                       &v130,
                                       v66);
          v67 = (AbstractClass *)((char *)v67 + 4);
          if ( v65 == 400 )
            break;
        }
        ++v66;
      }
      while ( v66 < 702 );
      v68 = Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)(v65 - 1));
      v69 = CoordStruct::Set2(&v131, (IUnknown *)((char *)aP0 + 4 * v68), 0);
      PlayAudioAt2(*(IUnknown **)(a1 + 144), v69, 0);
      return 1;
    case 0x63:
      v70 = (CellStruct **)Cell::GetWorldCoords(
                             *(__int16 **)&HouseClass_Player.__pad_5568[8060],
                             &v131,
                             *(_DWORD *)(a1 + 68));
      v113 = *v70;
      v128 = v70[1];
      GroundHeight = v70[2];
      v71 = ScriptAction::ReadParameter(&v113);
      if ( v71 )
        ObjectClass::CheckFlagD0(v71, *(IUnknown **)(a1 + 144));
      else
        PlayAudioAt2(*(IUnknown **)(a1 + 144), &v113, 1);
      return 1;
    case 0x64:
      EnqueueAsyncIOMovie(*(_DWORD *)(a1 + 144), 0);
      return 1;
    case 0x65:
      return TActionClass::executeScatterAction((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x66:
      v112 = (IUnknown *)*ScenarioClass::Get_Waypoint_Location(
                            *(char **)&HouseClass_Player.__pad_5568[8060],
                            &v130,
                            *(_DWORD *)(a1 + 68));
      Coord::Subtract(&v131, (IUnknown *)(((__int16)v112 << 8) + 128), (IUnknown *)((SHIWORD(v112) << 8) + 128), 0);
      v113 = v131;
      v128 = (CellStruct *)v132;
      GroundHeight = (CellStruct *)v133;
      GroundHeight = (CellStruct *)Cell::GetGroundHeight((IUnknown *)&v113);
      if ( (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v112) + 80) & 0x100) != 0 )
        GroundHeight = (CellStruct *)((char *)GroundHeight + *(_DWORD *)&stru_B05488.__pad_579C[15024]);
      v13 = *Coord::ToCell(&v113, (IUnknown *)&v130);
      if ( LightningStorm::IsActive() )
        return 0;
      LightningStorm::Start(
        *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6044),
        *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6036),
        v13,
        (#375 *)aP1);
      return 1;
    case 0x67:
      v64 = *(_BYTE *)(a1 + 109) != 0 ? (char *)(a1 + 109) : 0;
      ScriptAction::CopyStringField(Destination, v64);
      if ( v64 )
      {
        *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4596) = GetStringCSF(
                                                                               (wchar_t *)v64,
                                                                               0,
                                                                               &stru_830620.__pad_579C[52796],
                                                                               2242);
        ScriptAction::CopyStructField(
          (void *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4600),
          v138,
          Destination);
      }
      else
      {
        *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4596) = &stru_87C374.__pad_579C[23588];
        ScriptAction::CopyStringField(v137, &stru_87C374.__pad_579C[33876]);
        ScriptAction::CopyStructField((void *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4600), v139, v137);
      }
      ObjectClass::PreDraw(&stru_87C374.__pad_14B0[8132]);
      return 1;
    case 0x68:
      v107 = *(void **)(a1 + 48);
      if ( !v107 )
        return 1;
      TeamTypeClass::FlashAllInstances(v107, *(AnimClass **)(a1 + 144));
      return 1;
    case 0x69:
      v108 = *(void **)(a1 + 48);
      if ( v108 )
      {
        FirstInstance = TeamTypeClass::FindFirstInstance(v108);
        if ( !FirstInstance )
          return 1;
        RevealTechnoClassRadarEvent(*(_DWORD *)(FirstInstance + 84), *(_DWORD *)(a1 + 144));
        return 1;
      }
      else
      {
        RevealTechnoClassRadarEvent(0, 0);
        return 1;
      }
    case 0x6A:
      v112 = (IUnknown *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22620] - 1);
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[22620] - 1 < 0 )
        goto LABEL_290;
      v110 = *(_DWORD *)&HouseClass_Player.__pad_5568[22608] + 4 * (*(_DWORD *)&HouseClass_Player.__pad_5568[22620] - 1);
      while ( strcmp((const char *)(*(_DWORD *)v110 + 36), (const char *)(a1 + 84)) )
      {
        v110 -= 4;
        v112 = (IUnknown *)((char *)v112 - 1);
        if ( (int)v112 < 0 )
          goto LABEL_290;
      }
      *(_DWORD *)(*(_DWORD *)v110 + 1588) = *(_DWORD *)(a1 + 144);
LABEL_290:
      v111 = (int)&HouseClass_Count[-1].__tail_1602E[1];
      if ( (int)&HouseClass_Count[-1].__tail_1602E[1] < 0 )
        return 1;
      do
      {
        --v111;
        *(_BYTE *)(*(_DWORD *)&HouseClass_Array->__pad_0[4 * v111 + 4] + 508) = 1;
      }
      while ( v111 >= 0 );
      return 1;
    case 0x6B:
      ecx293 = *(_DWORD **)(a1 + 48);
      if ( !ecx293 )
        return 0;
      edx294 = *(_DWORD *)(a1 + 68);
      if ( edx294 == -1 )
        return 0;
      return ExecuteScriptTypeClassActions(ecx293, edx294);
    case 0x6C:
      v114 = (IUnknown **)ScenarioClass::Get_Waypoint_Location(
                            *(char **)&HouseClass_Player.__pad_5568[8060],
                            v134,
                            *(_DWORD *)(a1 + 68));
      return BuildingClass::SearchPlacement(&stru_87C374.__pad_14B0[8132], *v114, *(MouseClass **)(a1 + 144));
    case 0x6D:
      return TActionClass::executeParadropAction((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x6E:
      SetScenarioClassTimer(*(_DWORD *)(a1 + 144));
      return 1;
    case 0x6F:
      v115 = 0;
      v116 = 0;
      if ( *(int *)&HouseClass_Player.__pad_5568[22684] <= 0 )
        return v115;
      break;
    case 0x70:
      v112 = (IUnknown *)*ScenarioClass::Get_Waypoint_Location(
                            *(char **)&HouseClass_Player.__pad_5568[8060],
                            v134,
                            *(_DWORD *)(a1 + 68));
      v119 = (CellStruct **)CoordStruct::Set2(v135, (IUnknown *)&v112, 0);
      v113 = *v119;
      v128 = v119[1];
      GroundHeight = v119[2];
      GroundHeight = (CellStruct *)Cell::GetGroundHeight((IUnknown *)&v113);
      if ( (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v112) + 80) & 0x100) != 0
        || (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v112) + 80) & 0x400) != 0 )
      {
        GroundHeight = (CellStruct *)((char *)GroundHeight + *(_DWORD *)&stru_B05488.__pad_579C[15024]);
      }
      Tactical::SetTacticalPosition(*(int *)&stru_87C374.__pad_579C[22548], (IUnknown *)&v113);
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
      EnqueueAsyncIOMovie(*(_DWORD *)(a1 + 144), 1);
      return 1;
    case 0x76:
      return globalHelper_0E2C20((int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x77:
      return TActionClass::executePlaceBeaconAction((_DWORD *)a1, (int)aP1, (int)v9, a5, (IUnknown *)aP4);
    case 0x78:
      return TActionClass::executeJumpjetAction((_DWORD *)a1, (int)aP1, (int)v9, a5, (IUnknown *)aP4);
    case 0x79:
      return TActionClass::executeOpenGateAction((_DWORD *)a1, (int)aP1, (int)v9, a5, (IUnknown *)aP4);
    case 0x7A:
      return TActionClass::executeCloseGateAction((_DWORD *)a1, (int)aP1, (int)v9, a5, (IUnknown *)aP4);
    case 0x7B:
      return TActionClass::executeCaptureAction((_DWORD *)a1, aP1, (int)v9, a5, (IUnknown *)aP4);
    case 0x7C:
      return TActionClass::executeSabotageAction((_DWORD *)a1, aP1, (int)v9, a5, (IUnknown *)aP4);
    case 0x7D:
      return TActionClass::executeForceShieldAction((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x7E:
      return CreateHouseClass((int)aP1, v9, a5, (IUnknown *)aP4, v123, v124, v125);
    case 0x7F:
      globalHelper_03B460(*(_DWORD *)(a1 + 144));
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
      return TActionClass::executeSelfDestructAction((_DWORD *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x8F:
      return TActionClass::executeExplodeAction((_DWORD *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    default:
      return result;
  }
  while ( 1 )
  {
    v117 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22672] + 4 * v116);
    if ( *(_BYTE *)(v117 + 144) )
    {
      if ( *(_BYTE *)(v117 + 116) )
      {
        if ( !*(_BYTE *)(v117 + 129) )
        {
          v118 = *(_DWORD **)(v117 + 52);
          if ( v118 )
          {
            if ( LinkedList::Contains(v118, a5) )
              break;
          }
        }
      }
    }
    if ( ++v116 >= *(int *)&HouseClass_Player.__pad_5568[22684] )
      return 0;
  }
  BuildingClass::UnloadUnits((BuildingTypeClass **)v117, 0, 0);
  return 1;
}

}
} // namespace gamemd

// 0x71CDA0
namespace gamemd {
int TerrainClass::LoadFromStream(unsigned int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall TerrainClass::LoadFromStream(_DWORD *a1, int a2)
{
  _DWORD *v2; // ebp
  _DWORD *v3; // esi
  int v4; // eax
  #374 *v5; // ecx
  int v6; // edx
  int v7; // edi
  int v8; // eax
  int v9; // eax
  signed int v10; // ecx
  size_t i; // eax
  _DWORD *v12; // eax
  int Register; // edi
  int v14; // esi
  int v15; // eax
  int v17; // [esp+Ch] [ebp-8h] BYREF

  v2 = a1; /*0x71cda4*/
  v3 = a1 + 1; /*0x71cdad*/
  v4 = (*(int (__stdcall **)(_DWORD *))(a1[1] + 16))(a1 + 1); /*0x71cdb1*/
  v6 = MEMORY[0xB0E844]; /*0x71cdb4*/
  v7 = v4; /*0x71cdba*/
  if ( MEMORY[0xB0E844] ) /*0x71cdbe*/
  {
    if ( !MEMORY[0xB0E84C] ) /*0x71cdcb*/
    {
      qsort(MEMORY[0xB0E840], MEMORY[0xB0E844], 8u, CompareFunction); /*0x71cddc*/
      v6 = MEMORY[0xB0E844]; /*0x71cde1*/
      MEMORY[0xB0E850] = 0; /*0x71cdea*/
      MEMORY[0xB0E84C] = 1; /*0x71cdf4*/
    }
    v17 = v7; /*0x71ce06*/
    v8 = BinaryArraySearch((int)MEMORY[0xB0E840], v6, &v17); /*0x71ce0a*/
    if ( v8 ) /*0x71ce11*/
    {
      v9 = (v8 - (int)MEMORY[0xB0E840]) >> 3; /*0x71ce19*/
      if ( v9 != -1 ) /*0x71ce1f*/
      {
        v10 = v9 + 1; /*0x71ce21*/
        for ( i = MEMORY[0xB0E844]; v10 < (int)MEMORY[0xB0E844]; i = MEMORY[0xB0E844] ) /*0x71ce2b*/
        {
          v12 = (_DWORD *)((char *)MEMORY[0xB0E840] + 8 * v10++); /*0x71ce33*/
          *(v12 - 2) = *v12; /*0x71ce39*/
          *(v12 - 1) = v12[1]; /*0x71ce3f*/
        }
        MEMORY[0xB0E844] = i - 1; /*0x71ce54*/
        *((_DWORD *)MEMORY[0xB0E840] + 2 * MEMORY[0xB0E844]) = 0; /*0x71ce59*/
        v5 = MEMORY[0xB0E840]; /*0x71ce61*/
        *((_DWORD *)MEMORY[0xB0E840] + 2 * MEMORY[0xB0E844] + 1) = 0; /*0x71ce69*/
        MEMORY[0xB0E850] = 0; /*0x71ce6d*/
      }
    }
  }
  Register = BuildingClass::SaveLoad_Register(v5); /*0x71ce7e*/
  if ( Register >= 0 ) /*0x71ce82*/
  {
    if ( v2 ) /*0x71ce8a*/
    {
      ObjectClass::Init(v2, (int)&a1); /*0x71ce93*/
      *v2 = &TerrainClass::`vftable'; /*0x71ce98*/
      *v3 = &off_7F5200; /*0x71ce9f*/
      v2[2] = &TerrainClass::`vftable'; /*0x71cea5*/
      v2[3] = &vt_TerrainClass; /*0x71ceac*/
    }
    v14 = (*(int (__stdcall **)(_DWORD *))(*v3 + 16))(v3); /*0x71cebf*/
    v15 = MEMORY[0xB0E848]; /*0x71cec1*/
    if ( (int)(MEMORY[0xB0E844] + 1) <= MEMORY[0xB0E848] ) /*0x71cec9*/
      goto LABEL_16; /*0x71cec9*/
    if ( !MEMORY[0xB0E848] ) /*0x71cecd*/
      v15 = 10; /*0x71cecf*/
    if ( BuildingTypeClass::Enqueue((int)&MEMORY[0xB0E840], v15) ) /*0x71ceda*/
    {
LABEL_16:
      *((_DWORD *)MEMORY[0xB0E840] + 2 * MEMORY[0xB0E844]) = v14; /*0x71ceee*/
      *((_DWORD *)MEMORY[0xB0E840] + 2 * MEMORY[0xB0E844] + 1) = v2; /*0x71cefc*/
      MEMORY[0xB0E84C] = 0; /*0x71cf06*/
      ++MEMORY[0xB0E844]; /*0x71cf0d*/
    }
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v2 + 50); /*0x71cf1e*/
  }
  return Register; /*0x71cf25*/
}
}
} // namespace gamemd

// 0x71D000
namespace gamemd {
char TerrainClass::ProcessSpawnAnim(unsigned int * a1, AbstractClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall TerrainClass::ProcessSpawnAnim(int this, _DWORD *a1, AbstractClass *aP2)
{
  IUnknown *v3; // ebp
  IUnknown *v4; // edi
  IUnknown *v5; // ebx
  IUnknown *i; // esi
  int v7; // ecx
  __int16 v8; // ax
  _BYTE *v9; // eax
  _DWORD *v10; // eax
  int v11; // edi
  char v14[12]; // [esp+8h] [ebp-Ch] BYREF

  v3 = (IUnknown *)a1; /*0x71d008*/
  if ( !(unsigned __int8)ObjectClass::Deploy((#374 *)this) ) /*0x71d012*/
    return 0; /*0x71d13e*/
  v4 = (IUnknown *)(v3->field_0 / 256); /*0x71d03e*/
  v5 = (IUnknown *)(v3->field_4 / 256); /*0x71d041*/
  for ( i = 0; (int)i < 8; i = (IUnknown *)((char *)i + 1) ) /*0x71d044*/
  {
    v7 = (unsigned __int8)i & 7; /*0x71d048*/
    v8 = *((_WORD *)&MEMORY[0x89F68A] + 2 * v7); /*0x71d05d*/
    LOWORD(aP2) = (_WORD)v4 + *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v7); /*0x71d061*/
    HIWORD(aP2) = (_WORD)v5 + v8; /*0x71d06d*/
    a1 = aP2->__pad_0; /*0x71d076*/
    v9 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a1); /*0x71d080*/
    ++v9[290]; /*0x71d091*/
  }
  v10 = (_DWORD *)(*(int (__stdcall **)(char *))(*(_DWORD *)this + 172))(v14); /*0x71d0ab*/
  Coord::To_Screen(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], v10, (IUnknown *)(this + 216)); /*0x71d0b8*/
  v11 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9432] + 180) + *(_DWORD *)(this + 220); /*0x71d0d6*/
  *(_DWORD *)(this + 216) += *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9432] + 176); /*0x71d0dd*/
  *(_DWORD *)(this + 220) = v11; /*0x71d0df*/
  if ( *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], v3) + 17) != -1 ) /*0x71d0ef*/
  {
    if ( *(_BYTE *)(*(_DWORD *)&MEMORY[0xA83D84]->__pad_0[4 * *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], v3) + 17)] /*0x71d108*/
                  + 681) )
    {
      *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], v3) + 17) = -1; /*0x71d123*/
      *((_BYTE *)Coord::To_Cell(&MEMORY[0x87F7E8], v3) + 286) = 0; /*0x71d12b*/
    }
  }
  return 1; /*0x71d137*/
}
}
} // namespace gamemd

// 0x71CF30
namespace gamemd {
int TerrainClass::CheckFrameUpdate(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
}
}
} // namespace gamemd

// 0x71D2F0
namespace gamemd {
int TerrainClass::MissionStubReturnZero()
{
return 224;
}
} // namespace gamemd

// 0x71D300
namespace gamemd {
int TerrainClass::MissionStubReturnZero2()
{
return 36;
}
} // namespace gamemd

// 0x71D310
namespace gamemd {
int TerrainClass::MissionStubReturnZero3(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 237448654;
  a2[1] = 298949647;
  a2[2] = -1610610249;
  a2[3] = -777003740;
  return 0;
}
} // namespace gamemd
