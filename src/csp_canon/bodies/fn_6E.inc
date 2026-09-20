// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x006E0030  sub_6E0030  cls=unknown  sig=csp  renamed_refs=0 ====
char sub_6E0030(int a1, int a2, int a3, int a4)
{
return 1;
}

// ==== BACKFILL 0x006E0040  sub_6E0040  cls=unknown  sig=csp  renamed_refs=0 ====
char sub_6E0040(int a1, int a2, int a3, int a4)
{
return 1;
}

// ==== BACKFILL 0x006E0080  sub_6E0080  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char E4Recv_6E0080::sub_6E0080(int a2, int a3, int a4, int a5)
{
{
    int v5;
    int v6;
    short v7;
    char *v8;
    short *v9;
    int v11;
    v5 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v11, this->M68);
    v6 = 0;
    v11 = v5;
    if ( g_GameCleanupState <= 0 )
    return 1;
    v7 = HIWORD(v11);
    do
  {
    v8 = (char *)*((int *)(DataGlobal_A8020C) + v6);
    if ( v8[144] )
    {
    v9 = (short *)(*(int (__thiscall **)(char *, int *))(*(int *)(v8) + 440))(v8, &v11);
    if ( *v9 == (short)v5 && v9[1] == v7 )
    (*(void (__thiscall **)(char *))(*(int *)(v8) + 248))(v8);
    }
    ++v6;
  }
    while ( v6 < g_GameCleanupState );
    return 1;
}
}

// ==== BACKFILL 0x006E0110  ScenarioClass::Create  cls=ScenarioClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int ScenarioClass::Create(int a1, int a2, int a3, int a4) {
{
    int v6;
    ParticleSystemClass *v8;
    int v9;
    int v10;
    int GroundHeight;
    int v12[3];
    v8 = (ParticleSystemClass *)*ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v8, *(this + 17));
    GroundHeight = 0;
    v12[2] = 0;
    v10 = (SHIWORD(v8) << 8) + 128;
    v12[1] = v10;
    v9 = ((short)v8 << 8) + 128;
    v12[0] = v9;
    GroundHeight = Cell::GetGroundHeight(v12);
    v6 = __2_YAPAXI_Z(0x100u);
    if ( v6 )
    ParticleSystemClass::Constructor( v6, *(int *)&DataGlobal_A83D6C->__pad_0[4 * *(this + 36)], &v9, 0, 0, &g_OverlayTypeConfig.__pad_579C[5900], 0);
    return 1;
}
} }

// ==== BACKFILL 0x006E01C0  globalHelper_0E01C0  cls=unknown  sig=csp  renamed_refs=0 ====
char globalHelper_0E01C0(int a1, int a2, int aP1, IUnknown * aP3)
{
{
    int v4;
    char *v5;
    int *v6;
    v4 = 0;
    if ( *(int *)&HouseClass_Player.__pad_5568[22996] <= 0 )
    return 1;
    do
  {
    v5 = *(char **)(*(int *)&HouseClass_Player.__pad_5568[22984] + 4 * v4);
    if ( (*(int (__thiscall **)(char *))(*(int *)(v5) + 44))(v5) != 6 )
    {
    if ( v5[144] )
      {
    if ( v5[116] )
        {
    v6 = (int *)*((int *)(v5) + 13);
    if ( v6 )
          {
    if ( LinkedList::Contains(v6, (IUnknown *)aP1) && (!(*(int (__thiscall **)(char *))(*(int *)(v5) + 388))(v5) || (*(int (__thiscall **)(char *))(*(int *)(v5) + 388))(v5) == 23) )
            {
    (*(void (__thiscall **)(char *, int, int))(*(int *)(v5) + 488))(v5, 5, 0);
            }
          }
        }
      }
    }
    ++v4;
  }
    while ( v4 < *(int *)&HouseClass_Player.__pad_5568[22996] );
    return 1;
}
}

// ==== BACKFILL 0x006E0790  sub_6E0790  cls=AnimTypeClass  sig=csp  renamed_refs=0 ====
char E4Recv_6E0790::sub_6E0790(int a2, int a3, int a4, int a5)
{
{
    int v5;
    int *WorldCoords;
    int v8[3];
    v5 = g_RulesClass_Instance->?[5];
    WorldCoords = Cell::GetWorldCoords((short *)g_ScenarioClass_Instance, v8, this->M144);
    CreateSmokeEffectAt(50, v5, *WorldCoords, WorldCoords[1], WorldCoords[2], 0, 0);
    return 1;
}
}

// ==== BACKFILL 0x006E07F0  sub_6E07F0  cls=AnimTypeClass  sig=csp  renamed_refs=0 ====
char E4Recv_6E07F0::sub_6E07F0(int a2, int a3, int a4, int a5)
{
{
    int v5;
    int *WorldCoords;
    int v8[3];
    v5 = g_RulesClass_Instance->?[5];
    WorldCoords = Cell::GetWorldCoords((short *)g_ScenarioClass_Instance, v8, this->M144);
    CreateSmokeEffectAt(100, v5, *WorldCoords, WorldCoords[1], WorldCoords[2], 0, 0);
    return 1;
}
}

// ==== BACKFILL 0x006E0850  sub_6E0850  cls=AnimTypeClass  sig=csp  renamed_refs=0 ====
char E4Recv_6E0850::sub_6E0850(int a2, int a3, int a4, int a5)
{
{
    int v5;
    int *WorldCoords;
    int v8[3];
    v5 = g_RulesClass_Instance->?[5];
    WorldCoords = Cell::GetWorldCoords((short *)g_ScenarioClass_Instance, v8, this->M144);
    CreateSmokeEffectAt(300, v5, *WorldCoords, WorldCoords[1], WorldCoords[2], 0, 0);
    return 1;
}
}

// ==== BACKFILL 0x006E0AA0  TActionClass::executeEnterAction  cls=TActionClass  sig=csp  renamed_refs=1 ====
char TActionClass::executeEnterAction(int a2, int _10, unsigned int * a3, IUnknown * aP4)
{
{
    void *v5;
    int Field11;
    int v7;
    char v9;
    int i;
    int v11;
    int *v12;
    v5 = (void *)this->q090;
    if ( !a3 )
    return 0;
    if ( v5 == (void *)8997 )
  {
    Field11 = Property::GetField11(a3);
  }
    else
  {
    if ( v5 == (void *)-1 )
    return 0;
    if ( BuildingType::IsSpecialType(v5) )
    Field11 = BuildingType::FindOwnerHouse(v5);
    else
    Field11 = HouseClass::FindOwner(v5);
  }
    v7 = Field11;
    if ( !Field11 )
    return 0;
    v9 = 0;
    for ( i = 0; i < *(int *)&g_NetworkPlayerBuffer.__pad_14B0[412]; ++i )
  {
    v11 = *(int *)(*(int *)&g_NetworkPlayerBuffer.__pad_14B0[400] + 4 * i);
    if ( *(char *)(v11 + 144) )
    {
    if ( *(char *)(v11 + 116) )
      {
    if ( !*(char *)(v11 + 129) )
        {
    v12 = *(int **)(v11 + 52);
    if ( v12 )
          {
    if ( LinkedList::Contains(v12, (IUnknown *)a3) )
            {
    (*(void (__thiscall **)(int, int, int))(*(int *)(v11) + 980))(v11, v7, 0);
    v9 = 1;
            }
          }
        }
      }
    }
  }
    return v9;
}
}

// ==== BACKFILL 0x006E0CA0  TActionClass::executeCaptureAction  cls=TActionClass  sig=csp  renamed_refs=1 ====
char TActionClass::executeCaptureAction(void * a1, int _C, unsigned int * a3, IUnknown * aP4)
{
{
    void *v5;
    int Field11;
    v5 = (void *)this->q090;
    if ( !a3 )
    return 0;
    if ( v5 == (void *)8997 )
  {
    Field11 = Property::GetField11(a3);
  }
    else
  {
    if ( v5 == (void *)-1 )
    return 0;
    if ( BuildingType::IsSpecialType(v5) )
    Field11 = BuildingType::FindOwnerHouse(v5);
    else
    Field11 = HouseClass::FindOwner(v5);
  }
    if ( !Field11 )
    return 0;
    TActionClass::executeAttackAction(a1, Field11);
    return 1;
}
}

// ==== BACKFILL 0x006E0D00  TActionClass::executeSabotageAction  cls=TActionClass  sig=csp  renamed_refs=1 ====
char TActionClass::executeSabotageAction(unsigned int * a1, int _C, unsigned int * a3, IUnknown * aP4)
{
{
    void *v5;
    int Field11;
    v5 = (void *)this->q090;
    if ( !a3 )
    return 0;
    if ( v5 == (void *)8997 )
  {
    Field11 = Property::GetField11(a3);
  }
    else
  {
    if ( v5 == (void *)-1 )
    return 0;
    if ( BuildingType::IsSpecialType(v5) )
    Field11 = BuildingType::FindOwnerHouse(v5);
    else
    Field11 = HouseClass::FindOwner(v5);
  }
    if ( !Field11 )
    return 0;
    TActionClass::executeMoveAction(a1, Field11);
    return 1;
}
}

// ==== BACKFILL 0x006E0FE0  TActionClass::RevealWaypointArea  cls=TActionClass  sig=csp  renamed_refs=1 ====
char TActionClass::RevealWaypointArea(int a2, int a3, int a4, IUnknown * aP4)
{
{
    int v5;
    int v6;
    int v8;
    int v9;
    int v10;
    short v11[4];
    if ( HouseClass_Player->__pad_220[32] )
    return 1;
    *(int *)v11 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v8, this->q090);
    if ( (*((int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v11) + 80) & 0x100) != 0 || (*((int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v11) + 80) & 0x400) != 0 )
  {
    v5 = 4;
  }
    else
  {
    v5 = 0;
  }
    v6 = v5 + *((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v11) + 283);
    v10 = v6 * *(int *)&g_OverlayTypeConfig.__pad_579C[5964];
    v9 = ((short)(v11[1] - v6 / 2) << 8) + 128;
    v8 = ((short)(v11[0] - v6 / 2) << 8) + 128;
    MapClass::RevealArea1( (int *)&DataGlobal_87F7E8, &v8, *(int *)(*(int *)&DataGlobal_87F8E4.__pad_5568[9108] + 1580), (HouseClass *)HouseClass_Player, 0, 0, 0, 1, 0);
    v8 = ((short)(v11[0] - v6 / 2) << 8) + 128;
    v10 = v6 * *(int *)&g_OverlayTypeConfig.__pad_579C[5964];
    v9 = ((short)(v11[1] - v6 / 2) << 8) + 128;
    MapClass::RevealArea1( (int *)&DataGlobal_87F7E8, &v8, *(int *)(*(int *)&DataGlobal_87F8E4.__pad_5568[9108] + 1580), (HouseClass *)HouseClass_Player, 0, 0, 0, 1, 1);
    return 1;
}
}

// ==== BACKFILL 0x006E1180  sub_6E1180  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char E4Recv_6E1180::sub_6E1180(int a2, int a3, int a4, int a5)
{
{
    int v6;
    int v7;
    v6 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v7, this->M144);
    MapClass::TriggerEVA((short *)&v6);
    return 1;
}
}

// ==== BACKFILL 0x006E11C0  TActionClass::RevealTileTypeAtWaypoint  cls=TActionClass  sig=csp  renamed_refs=1 ====
char TActionClass::RevealTileTypeAtWaypoint(int a2, int a3, int a4, IUnknown * aP4)
{
{
    IUnknown *Waypoint_Location;
    int TileIndex;
    IUnknown *v7;
    MouseClass *v8;
    short v9;
    int v10;
    short v11;
    short v12;
    int v14;
    int v15[3];
    int v16[3];
    if ( HouseClass_Player->__pad_220[32] )
    return 1;
    Waypoint_Location = (IUnknown *)ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v14, this->q090);
    TileIndex = MapClass::GetTileIndex(&DataGlobal_87F7E8, Waypoint_Location, (IUnknown *)1, 0);
    TActionClass::executeSellAction(&DataGlobal_87F7E8);
    v7 = (IUnknown *)MapClass::SpiralSearch(&DataGlobal_87F7E8);
    if ( !v7 )
    return 1;
    do
  {
    v8 = (MouseClass *)&v7->field_24;
    if ( MapClass::GetTileIndex(&DataGlobal_87F7E8, (IUnknown *)&v7->field_24, (IUnknown *)1, 0) == TileIndex )
    {
    v9 = HIWORD(v7->field_24);
    v10 = SHIBYTE(v7->field_118) / 2;
    v15[0] = ((short)(LOWORD(v8->field_0) - v10 / 2) << 8) + 128;
    v15[1] = ((short)(v9 - v10 / 2) << 8) + 128;
    v15[2] = v10 * *(int *)&g_OverlayTypeConfig.__pad_579C[5964];
    MapClass::RevealArea1((int *)&DataGlobal_87F7E8, v15, 2, (HouseClass *)HouseClass_Player, 0, 0, 0, 1, 0);
    v11 = v8->field_0;
    v12 = HIWORD(v8->field_0) - v10 / 2;
    v16[2] = v10 * *(int *)&g_OverlayTypeConfig.__pad_579C[5964];
    v16[0] = ((short)(v11 - v10 / 2) << 8) + 128;
    v16[1] = (v12 << 8) + 128;
    MapClass::RevealArea1((int *)&DataGlobal_87F7E8, v16, 2, (HouseClass *)HouseClass_Player, 0, 0, 0, 1, 1);
    }
    v7 = (IUnknown *)MapClass::SpiralSearch(&DataGlobal_87F7E8);
  }
    while ( v7 );
    return 1;
}
}

// ==== BACKFILL 0x006E1530  ScenarioClass::PrepareTextDisplay  cls=ScenarioClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int ScenarioClass::PrepareTextDisplay(int a1, int a2, int a3, int a4) {
{
    int v5;
    int *missionTimer;
    ScenarioClass *v7;
    int v9;
    char Destination[32];
    v5 = *(this + 36);
    missionTimer = g_ScenarioClass_Instance->missionTimer;
    g_ScenarioClass_Instance->missionTimer[0] = *(int *)&g_NetworkPlayerBuffer.__pad_14B0[664];
    missionTimer[1] = v9;
    missionTimer[2] = 15 * v5;
    v7 = g_ScenarioClass_Instance;
    if ( g_ScenarioClass_Instance->missionTimer[0] == -1 )
  {
    g_ScenarioClass_Instance->missionTimer[0] = *(int *)&g_NetworkPlayerBuffer.__pad_14B0[664];
    v7 = g_ScenarioClass_Instance;
  }
    v7->missionTimer_text_csf = &DataGlobal_87F8E4.__pad_5568[10472];
    if ( &DataGlobal_87F8E4 == (MouseClass *)-42624 )
  {
    Destination[0] = (unsigned char)&DataGlobal_87F8E4.__pad_5568[20760];
  }
    else
  {
    strncpy(Destination, &DataGlobal_87F8E4.__pad_5568[20760], 0x1Fu);
    Destination[31] = 0;
  }
    if ( Destination != (char *)g_ScenarioClass_Instance->missionTimer_text )
    qmemcpy(g_ScenarioClass_Instance->missionTimer_text, Destination, sizeof(g_ScenarioClass_Instance->missionTimer_text));
    ObjectClass::PreDraw(&DataGlobal_87F7E8);
    return 1;
}
} }

// ==== BACKFILL 0x006E1780  TActionClass::PlayAudioAtRandomWP  cls=TActionClass  sig=csp  renamed_refs=1 ====
char TActionClass::PlayAudioAtRandomWP(int a2, int a3, int a4, int a5)
{
    int v5;
    int v7;
    int *v8;
    short *v9;
    int v10;
    int v11;
    int v13[3];
    int v14;
    int v15[100];

    v5 = 0;
    v7 = 0;
    v8 = v15;
    do
    {
        if ( ScenarioClass::Is_Waypoint_Valid((char *)DataGlobal_A8B230, v7) )
        {
            ++v5;
            *v8++ = *ScenarioClass::Get_Waypoint_Location((char *)DataGlobal_A8B230, &v14, v7);
            if ( v5 == 400 )
                break;
        }
        ++v7;
    }
    while ( v7 < 702 );
    v9 = (short *)&v15[Random::Range((_DWORD *)DataGlobal_A8B230 + 134, 0, v5 - 1)];
    v10 = (v9[1] << 8) + 128;
    v13[0] = (*v9 << 8) + 128;
    v11 = this->q090;
    v13[1] = v10;
    v13[2] = 0;
    PlayAudioAt2(v11, v13, 0);
    return 1;
}

// ==== BACKFILL 0x006E18B0  CellClass::Find  cls=CellClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int CellClass::Find(int a1, int a2, int a3, int a4) {
{
    int *WorldCoords;
    int *v7;
    int *Infantry;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14[3];
    WorldCoords = Cell::GetWorldCoords((short *)g_ScenarioClass_Instance, v14, *(this + 17));
    v11 = *WorldCoords;
    v12 = WorldCoords[1];
    v13 = WorldCoords[2];
    LOWORD(v10) = v11 / 256;
    HIWORD(v10) = v12 / 256;
    if ( v10 != DataGlobal_B0E680 && ((v7 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v10), (Infantry = Cell::IsBridge(v7)) != 0) || (Infantry = CellClass::FindInfantry(v7, 0)) != 0) )
  {
    ObjectClass::CheckFlagD0(Infantry, *(this + 36));
    return 1;
  }
    else
  {
    PlayAudioAt2(*(this + 36), &v11, 1);
    return 1;
  }
}
} }

// ==== BACKFILL 0x006E1980  TActionClass::executeGuardAreaAction  cls=TActionClass  sig=csp  renamed_refs=1 ====
char TActionClass::executeGuardAreaAction(int a2, int a3, int a4, IUnknown * aP4)
{
{
    IUnknown **WorldCoords;
    BuildingTypeClass *v6;
    int *Infantry;
    short v9[2];
    IUnknown *v10;
    IUnknown *v11;
    IUnknown *v12;
    int v13[3];
    WorldCoords = (IUnknown **)Cell::GetWorldCoords((short *)g_ScenarioClass_Instance, v13, this->TActionClass_field_44);
    v10 = *WorldCoords;
    v11 = WorldCoords[1];
    v12 = WorldCoords[2];
    v9[0] = (int)v10 / 256;
    v9[1] = (int)v11 / 256;
    if ( v9[0] == *(short *)&g_OverlayTypeConfig.__pad_579C[5868] && (unsigned short)((int)v11 / 256) == *(short *)&g_OverlayTypeConfig.__pad_579C[5870] || (v6 = (BuildingTypeClass *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v9), (Infantry = Cell::IsBridge(v6)) == 0) && (Infantry = CellClass::FindInfantry(v6, 0)) == 0 )
  {
    globalHelper_050F40(&v10, 1);
    return 1;
  }
    else
  {
    ObjectClass::CheckFlagD0(Infantry, (IUnknown *)0xFFFFFFFF);
    return 1;
  }
}
}

// ==== BACKFILL 0x006E1A40  TActionClass::executePatrolAction  cls=TActionClass  sig=csp  renamed_refs=1 ====
char TActionClass::executePatrolAction(void * a1, int a3, int a4, IUnknown * aP4)
{
{
    int *Waypoint_Location;
    int *v7;
    v7 = this;
    Waypoint_Location = ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v7, this->TActionClass_field_44);
    SelectSimilarBuildingTypes(a1, *Waypoint_Location);
    return 1;
}
}

// ==== BACKFILL 0x006E1A70  TActionClass::executeScatterAction  cls=TActionClass  sig=csp  renamed_refs=1 ====
char TActionClass::executeScatterAction(int a2, int a3, int a4, IUnknown * aP4)
{
{
    int v5;
    int v6;
    int v8[3];
    short v9[4];
    if ( HouseClass_Player->__pad_220[32] )
    return 1;
    *(int *)v9 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, v8, this->q090);
    if ( (*((int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v9) + 80) & 0x100) != 0 || (*((int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v9) + 80) & 0x400) != 0 )
  {
    v5 = 4;
  }
    else
  {
    v5 = 0;
  }
    v6 = v5 + *((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v9) + 283);
    v8[2] = v6 * *(int *)&g_OverlayTypeConfig.__pad_579C[5964];
    v8[1] = ((short)(v9[1] - v6 / 2) << 8) + 128;
    v8[0] = ((short)(v9[0] - v6 / 2) << 8) + 128;
    TActionClass_Helper(v8, *(int *)(*(int *)&DataGlobal_87F8E4.__pad_5568[9108] + 1580));
    CellSystem::UpdateVisibility(&DataGlobal_87F7E8);
    return 1;
}
}

// ==== BACKFILL 0x006E1BD0  ScenarioClass::UpdateCounters  cls=ScenarioClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int ScenarioClass::UpdateCounters(int a1, int a2, int a3, int a4) {
{
    int Status;
    SuperClass::StartTimer(*(int *)(*(int *)(a2 + 600) + 4 * *(this + 36)), 1, 0, 0);
    if ( HouseClass_Player == (#375 *)a2 )
  {
    SidebarClass::AddCameo((int *)&DataGlobal_87F7E8, 31, *(this + 36));
    Status = HouseClass::GetStatus((void *)0x1F, 0);
    Sidebar::ActivateTab((int)&DataGlobal_87F7E8, Status);
  }
    return 1;
}
} }

// ==== BACKFILL 0x006E1C40  SuperClass::Get  cls=SuperClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int SuperClass::Get(int a1, int a2, int a3, int a4) {
{
    int Status;
    SuperClass::StartTimer(*(int *)(*(int *)(a2 + 600) + 4 *(void**)this->q090), 0, 0, 0);
    *(char *)(*(int *)(*(int *)(a2 + 600) + 4 *(void**)this->q090) + 96) = 0;
    if ( HouseClass_Player == (HouseClass *)a2 )
  {
    SidebarClass::AddCameo((int *)&DataGlobal_87F7E8, 31, this->q090);
    Status = HouseClass::GetStatus((void *)0x1F, 0);
    Sidebar::ActivateTab((int)&DataGlobal_87F7E8, Status);
  }
    return 1;
}
} }

// ==== BACKFILL 0x006E21D0  sub_6E21D0  cls=unknown  sig=csp  renamed_refs=0 ====
char sub_6E21D0(int a1, int a2, int a3, int a4)
{
return 1;
}

// ==== BACKFILL 0x006E21E0  TActionClass::executeFollowAction  cls=TActionClass  sig=csp  renamed_refs=0 ====
char TActionClass::executeFollowAction(int a2, int a3, int a4, IUnknown * aP4)
{
{
    int *v5;
    int i;
    int j;
    v5 = this + 13;
    DataGlobal_87F8E4.field_0 = *v5;
    DataGlobal_87F8E4.field_4 = (void *)v5[1];
    DataGlobal_87F8E4.field_8 = (void *)v5[2];
    DataGlobal_87F8E4.field_C = (void *)v5[3];
    RadarClass::Process(&DataGlobal_87F7E8);
    LayerClass::CellIteratorReset(&DataGlobal_87F7E8);
    for ( i = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); i; i = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) )
    House::AnnounceUpgrade(i, (IUnknown *)0xFFFFFFFF);
    Terrain::ConnectivityGraph(&DataGlobal_87F7E8);
    MapClass::BuildSubzones(&DataGlobal_87F7E8);
    FogOfWar::Render((int **)&DataGlobal_87F7E8);
    for ( j = *(int *)&g_NetworkPlayerBuffer.__pad_14B0[100] - 1; j >= 0; --j )
    (*(void (__thiscall **)(int, int))(**(int **)(*(int *)&g_NetworkPlayerBuffer.__pad_14B0[88] + 4 * j) + 1184))( *(int *)(*(int *)&g_NetworkPlayerBuffer.__pad_14B0[88] + 4 * j), 1);
    return 1;
}
}

// ==== BACKFILL 0x006E2520  TActionClass::executeLoadAction  cls=TActionClass  sig=csp  renamed_refs=2 ====
char TActionClass::executeLoadAction(int a2, int a3, int a4, IUnknown * aP4)
{
{
    AnimClass *v6;
    IUnknown *v8;
    VoxelAnimClass *v9;
    int v10[2];
    int GroundHeight;
    v8 = (IUnknown *)*ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v9, this->TActionClass_field_44);
    GroundHeight = 0;
    v10[1] = (SHIWORD(v8) << 8) + 128;
    v10[0] = ((short)v8 << 8) + 128;
    GroundHeight = Cell::GetGroundHeight(v10);
    if ( (*((int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v8) + 80) & 0x100) != 0 || (*((int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v8) + 80) & 0x400) != 0 )
  {
    GroundHeight += *(int *)&g_OverlayTypeConfig.__pad_579C[5952];
  }
    v6 = (AnimClass *)__2_YAPAXI_Z(0x148u);
    if ( v6 )
    DamageAnimClass::Constructor( v6, *(int *)(*(int *)&g_NetworkPlayerBuffer.__pad_14B0[64] + 4 *(void**)this->q090), v10, 0);
    return 1;
}
}

// ==== BACKFILL 0x006E2660  SmallFunc_6E2660  cls=unknown  sig=csp  renamed_refs=0 ====
char sub_6E2660(int a1, int a2, int a3, int a4)
{
{
    g_RadarBlipPool = 0;
    g_RadarBlipManager = 0;
    DataGlobal_880994 = -1;
    Mouse::SetBounds((int)&DataGlobal_87F7E8, 0);
    BuildingClass::TogglePower2(&DataGlobal_87F7E8, 0);
    BuildingClass::TogglePower(&DataGlobal_87F7E8, 0);
    DataGlobal_88099A = 0;
    DataGlobal_88099B = 0;
    DataGlobal_88099C = 0;
    Scenario::ClearScreen();
    return 1;
}
}

// ==== BACKFILL 0x006E26D0  ScenarioClass::Set  cls=ScenarioClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int ScenarioClass::Set(int a1, int a2, int a3, int a4) {
{
    int v7;
    int v8;
    int v9[2];
    int GroundHeight;
    v7 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v8, *(this + 17));
    GroundHeight = 0;
    v9[1] = (SHIWORD(v7) << 8) + 128;
    v9[0] = ((short)v7 << 8) + 128;
    GroundHeight = Cell::GetGroundHeight(v9);
    if ( (*((int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v7) + 80) & 0x100) != 0 || (*((int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v7) + 80) & 0x400) != 0 )
  {
    GroundHeight += DataGlobal_B0E6D4;
  }
    TacticalClass::SetPosition(g_TacticalClass_Instance, v9, *(this + 36));
    return 1;
}
} }

// ==== BACKFILL 0x006E2970  BuildingLightClass::FindAllTargets  cls=BuildingLightClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int BuildingLightClass::FindAllTargets(int a1, int a2, int a3, int a4) {
{
      char v5;
      int v6;
      int v8;
      _DWORD *v9;

      v5 = 0;
      v6 = 0;
      if ( g_BuildingProductionState <= 0 )
        return 0;
      do
      {
        v8 = *((_DWORD *)g_BuildingClass_InstanceCount + v6);
        if ( *(int *)(v8 + 108) > 0 )
        {
          if ( *(_BYTE *)(v8 + 144) )
          {
            if ( *(_BYTE *)(v8 + 116) )
            {
              if ( !*(_BYTE *)(v8 + 129) )
              {
                if ( *(_BYTE *)(*(_DWORD *)(v8 + 1312) + 5451) )
                {
                  if ( *(_DWORD *)(v8 + 1536) )
                  {
                    v9 = *(_DWORD **)(v8 + 52);
                    if ( v9 )
                    {
                      if ( LinkedList::Contains(v9, a4) )
                      {
                        BuildingLightClass::FindTarget(*(_DWORD **)(v8 + 1536), this->isAliveFlag);
                        v5 = 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        ++v6;
      }
      while ( v6 < g_BuildingProductionState );
      return v5;
}
} }

// ==== BACKFILL 0x006E2A50  sub_6E2A50  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char E4Recv_6E2A50::sub_6E2A50(int a2, int a3, int a4, int a5)
{
{
    int v6;
    int v7;
    int *v8;
    int v9;
    if ( this->M76 )
  {
    v6 = g_GameObjectCleanup;
    v7 = 0;
    if ( g_GameObjectCleanup > 0 )
    {
    v8 = g_TagClassCount;
    do
      {
    if ( *(int *)(v8[v7] + 36) == this->M76 )
        {
    v9 = v8[v7];
    if ( v9 )
          {
    (*(void (__thiscall **)(int, int))(*(int *)(v9) + 32))(v9, 1);
    v8 = g_TagClassCount;
          }
    --v7;
        }
    ++v7;
      }
    while ( v7 < v6 );
    }
  }
    return 1;
}
}

// ==== BACKFILL 0x006E2AF0  TActionClass::executeUnloadAction  cls=TActionClass  sig=csp  renamed_refs=2 ====
char TActionClass::executeUnloadAction(int a2, int a3, int a4, IUnknown * aP4)
{
{
    int v6;
    int *v7;
    char *v8;
    int difficulty2;
    if ( !this->TActionClass_field_50 )
    return 1;
    v6 = 0;
    if ( *(int *)&g_NetworkPlayerBuffer.__pad_14B0[12] <= 0 )
    return 1;
    do
  {
    v7 = *(int **)(*(int *)g_NetworkPlayerBuffer.__pad_14B0 + 4 * v6);
    v8 = (char *)v7[9];
    if ( v8 == (char *)this->TActionClass_field_50 )
    {
    difficulty2 = g_ScenarioClass_Instance->difficulty2;
    if ( (difficulty2 || v8[156]) && (difficulty2 != 1 || v8[157]) && (difficulty2 != 2 || v8[158]) )
    TActionClass::executeAirstrikeAction(v7);
    }
    ++v6;
  }
    while ( v6 < *(int *)&g_NetworkPlayerBuffer.__pad_14B0[12] );
    return 1;
}
}

// ==== BACKFILL 0x006E2C20  globalHelper_0E2C20  cls=unknown  sig=csp  renamed_refs=0 ====
char globalHelper_0E2C20(int a1, int a2, int a3, IUnknown * aP3)
{
{
    LayerClass::ClearFactoryCellAssignments(&DataGlobal_87C374.__pad_14B0[8132]);
    MapClass::MarkForRedraw(&DataGlobal_87C374.__pad_14B0[8132], 1);
    return 1;
}
}

// ==== BACKFILL 0x006E2E60  TActionClass::executeSelfDestructAction  cls=TActionClass  sig=csp  renamed_refs=2 ====
char TActionClass::executeSelfDestructAction(int a2, int a3, int a4, IUnknown * aP4)
{
{
    UpdateSurfaceAnimations( 10 *(void**)this->q090, 10 * g_ScenarioClass_Instance->nukeLevel, 10 * g_ScenarioClass_Instance->nukeAmbientChangeRate, 0);
    g_ScenarioClass_Instance->nukeGround = this->q090;
    return 1;
}
}

// ==== BACKFILL 0x006E2EB0  TActionClass::executeExplodeAction  cls=TActionClass  sig=csp  renamed_refs=2 ====
char TActionClass::executeExplodeAction(int a2, int a3, int a4, IUnknown * aP4)
{
{
    UpdateSurfaceAnimations( 10 * g_ScenarioClass_Instance->nukeGround, 10 *(void**)this->q090, 10 * g_ScenarioClass_Instance->nukeAmbientChangeRate, 0);
    g_ScenarioClass_Instance->nukeLevel = this->q090;
    return 1;
}
}

// ==== BACKFILL 0x006E2F00  TActionClass::executeChronoshiftAction  cls=TActionClass  sig=csp  renamed_refs=2 ====
char TActionClass::executeChronoshiftAction(int a2, int a3, int a4, IUnknown * aP4)
{
{
    UpdateSurfaceAnimations(10 * g_ScenarioClass_Instance->nukeGround, 10 * g_ScenarioClass_Instance->nukeLevel, 10 *(void**)this->q090, 0);
    g_ScenarioClass_Instance->nukeAmbientChangeRate = this->q090;
    return 1;
}
}

// ==== BACKFILL 0x006E3120  SmallFunc_6E3120  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char SmallFunc_6E3120(int _8, _UNKNOWN ** a1, unsigned int * a2, IUnknown * aP3, int _18, unsigned int * a5, int a7)
{
{
    int v7;
    _UNKNOWN **v8;
    int *v9;
    void *v10;
    int Field11;
    v10 = *(void **)(v7 + 144);
    if ( !a2 )
    return 0;
    if ( v10 == (void *)8997 )
  {
    Field11 = Property::GetField11(a2);
  }
    else
  {
    if ( v10 == (void *)-1 )
    return 0;
    if ( BuildingType::IsSpecialType(v10) )
    Field11 = BuildingType::FindOwnerHouse(v10);
    else
    Field11 = HouseClass::FindOwner(v10);
  }
    if ( !Field11 )
    return 0;
    HouseClass::RespawnStartingBuildings(Field11, v8, v9, (int)v10);
    return 1;
}
}

// ==== BACKFILL 0x006E3180  TActionClass::executePlaceBeaconAction  cls=TActionClass  sig=csp  renamed_refs=1 ====
char TActionClass::executePlaceBeaconAction(int a2, int _C, unsigned int * a3, IUnknown * aP4)
{
{
    void *v5;
    void *Field11;
    v5 = (void *)this->q090;
    if ( !a3 )
    return 0;
    if ( v5 == (void *)8997 )
  {
    Field11 = (void *)Property::GetField11(a3);
  }
    else
  {
    if ( v5 == (void *)-1 )
    return 0;
    if ( BuildingType::IsSpecialType(v5) )
    Field11 = (void *)BuildingType::FindOwnerHouse(v5);
    else
    Field11 = (void *)HouseClass::FindOwner(v5);
  }
    if ( !Field11 )
    return 0;
    HouseClass::ClearLowPowerTargets(Field11);
    return 1;
}
}

// ==== BACKFILL 0x006E31E0  TActionClass::executeJumpjetAction  cls=TActionClass  sig=csp  renamed_refs=1 ====
char TActionClass::executeJumpjetAction(int a2, int _C, unsigned int * a3, IUnknown * aP4)
{
{
    void *v5;
    void *Field11;
    v5 = (void *)this->q090;
    if ( !a3 )
    return 0;
    if ( v5 == (void *)8997 )
  {
    Field11 = (void *)Property::GetField11(a3);
  }
    else
  {
    if ( v5 == (void *)-1 )
    return 0;
    if ( BuildingType::IsSpecialType(v5) )
    Field11 = (void *)BuildingType::FindOwnerHouse(v5);
    else
    Field11 = (void *)HouseClass::FindOwner(v5);
  }
    if ( !Field11 )
    return 0;
    HouseClass::DestroyAllBuildings(Field11);
    return 1;
}
}

// ==== BACKFILL 0x006E3240  TActionClass::executeOpenGateAction  cls=TActionClass  sig=csp  renamed_refs=1 ====
char TActionClass::executeOpenGateAction(int a2, int _C, unsigned int * a3, IUnknown * aP4)
{
{
    void *v5;
    void *Field11;
    v5 = (void *)this->q090;
    if ( !a3 )
    return 0;
    if ( v5 == (void *)8997 )
  {
    Field11 = (void *)Property::GetField11(a3);
  }
    else
  {
    if ( v5 == (void *)-1 )
    return 0;
    if ( BuildingType::IsSpecialType(v5) )
    Field11 = (void *)BuildingType::FindOwnerHouse(v5);
    else
    Field11 = (void *)HouseClass::FindOwner(v5);
  }
    if ( !Field11 )
    return 0;
    HouseClass::DestroyAllNonBuildingsNonNaval(Field11);
    return 1;
}
}

// ==== BACKFILL 0x006E32A0  TActionClass::executeCloseGateAction  cls=TActionClass  sig=csp  renamed_refs=1 ====
char TActionClass::executeCloseGateAction(int a2, int _C, unsigned int * a3, IUnknown * aP4)
{
{
    void *v5;
    void *Field11;
    v5 = (void *)this->q090;
    if ( !a3 )
    return 0;
    if ( v5 == (void *)8997 )
  {
    Field11 = (void *)Property::GetField11(a3);
  }
    else
  {
    if ( v5 == (void *)-1 )
    return 0;
    if ( BuildingType::IsSpecialType(v5) )
    Field11 = (void *)BuildingType::FindOwnerHouse(v5);
    else
    Field11 = (void *)HouseClass::FindOwner(v5);
  }
    if ( !Field11 )
    return 0;
    HouseClass::DestroyAllNonBuildingsNaval(Field11);
    return 1;
}
}

// ==== BACKFILL 0x006E3410  TActionClass::CreateNukeEffect  cls=TActionClass  sig=csp  renamed_refs=1 ====
char TActionClass::CreateNukeEffect(AbstractClass * aP1, int a3, int a4, AbstractClass * aP4)
{
{
    int v5;
    BuildingTypeClass *v6;
    TechnoClass *v7;
    BulletClass *UIObjectCOM;
    double v9;
    double v10;
    int v11;
    TechnoClass *v13;
    InfantryClass *v14;
    int v15;
    double v16;
    double v17;
    double v18;
    int v19;
    int v20;
    int GroundHeight;
    int v22[3];
    __int64 v23[3];
    v15 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v16, this->TActionClass_field_44);
    GroundHeight = 0;
    v20 = (SHIWORD(v15) << 8) + 128;
    v19 = ((short)v15 << 8) + 128;
    GroundHeight = Cell::GetGroundHeight(&v19);
    if ( (*((int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v15) + 80) & 0x100) != 0 )
    GroundHeight += *(int *)&g_OverlayTypeConfig.__pad_579C[5952];
    v5 = *(int *)(*(int *)&DataGlobal_87F8E4.__pad_5568[10016] + 4 * SuperWeaponClass::FindByName(g_INI_Key_NukePayload));
    v6 = *(BuildingTypeClass **)(v5 + 160);
    v14 = *(InfantryClass **)(v5 + 172);
    v13 = *(TechnoClass **)(v5 + 164);
    v7 = (TechnoClass *)Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)&v19);
    UIObjectCOM = (BulletClass *)CreateUIObjectCOM((AbstractClass *)v6, v7, 0, v13, v14, 50, 0);
    Function::Method_46B260(UIObjectCOM, v5);
    v22[0] = v19;
    v22[1] = v20;
    v22[2] = GroundHeight + 20000;
    if ( !UIObjectCOM )
    return 0;
    v16 = Math::SinCos(1.570748388432313);
    v16 = Math::ArcTan2(1.570748388432313) * v16 * -100.0;
    v17 = Math::ArcTan2(1.570748388432313);
    v9 = Math::ArcTan2(1.570748388432313);
    v18 = v16;
    *(double *)&v23[1] = v16;
    v17 = v9 * v17 * -100.0;
    *(double *)v23 = v17;
    v10 = Math::SinCos(1.570748388432313);
    v11 = *(int *)UIObjectCOM->__pad_0;
    *(double *)&v23[2] = v10 * -100.0;
    (*(void (__thiscall **)(BulletClass *, int *, __int64 *))(v11 + 496))(UIObjectCOM, v22, v23);
    return 1;
}
}

// ==== BACKFILL 0x006E35F0  sub_6E35F0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char E4Recv_6E35F0::sub_6E35F0(void * a2, int a3, int a4, int a5)
{
{
    int v6;
    int v7;
    int v8;
    int v9;
    int GroundHeight;
    v6 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v7, this->M68);
    GroundHeight = 0;
    v9 = (SHIWORD(v6) << 8) + 128;
    v8 = ((short)v6 << 8) + 128;
    GroundHeight = Cell::GetGroundHeight(&v8);
    if ( (*((int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v6) + 80) & 0x100) != 0 )
    GroundHeight += DataGlobal_B0E6D4;
    LOWORD(v7) = v8 / 256;
    HIWORD(v7) = v9 / 256;
    if ( LightningStorm::IsActive() )
    return 0;
    LightningStorm::Start(HIDWORD(g_RulesClass_Instance[1].?), *(int *)&g_RulesClass_Instance[1].?[4], v7, a2);
    return 1;
}
}

// ==== BACKFILL 0x006E3B40  TActionClass::executeLightningAction  cls=TActionClass  sig=csp  renamed_refs=1 ====
char TActionClass::executeLightningAction(int a2, int a3, int a4, IUnknown * aP4)
{
{
    if ( !a2 )
    return 0;
    HouseClass::CreateRadarOutage(a2, this->q090);
    return 1;
}
}

// ==== BACKFILL 0x006E3D70  TActionClass::ddtor  cls=TActionClass  sig=csp  renamed_refs=0 ====
int TActionClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1326367634;
  a2[1] = 298977877;
  a2[2] = 1610655660;
  a2[3] = -1252326136;
  return 0;
}

// ==== BACKFILL 0x006E3DB0  TActionClass::SaveLoad_Prefix  cls=TActionClass  sig=csp  renamed_refs=0 ====
int TActionClass::SaveLoad_Prefix(AbstractClass * aP0, int aP1)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    AbstractClass::InitVtables(aP0, (IUnknown *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_TActionClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_TActionClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_TActionClass;
    *(int *)&aP0->__pad_0[12] = &vt_TActionClass;
    }
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].__pad_0[4]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].__pad_0[12]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[2].__pad_0[4]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[2].__pad_0[8]);
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x006E3E30  TActionClass::SaveLoad_Prefix_0  cls=TActionClass  sig=csp  renamed_refs=0 ====
int TActionClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// ==== BACKFILL 0x006E3E50  TActionClass::Validate  cls=TActionClass  sig=csp  renamed_refs=1 ====
int TActionClass::Validate(int a2)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    AbstractClass::ProcessPower((AbstractClass *)this);
    v3 = this->TActionClass_field_28;
    if ( v3 )
  {
    v4 = (*(int (__stdcall **)(int))(*(int *)(v3 + 4) + 16))(v3 + 4);
    Power::TimerProcess(v4);
  }
    Power::TimerProcess(this->TActionClass_field_2C);
    v5 = this->TActionClass_field_30;
    if ( v5 )
  {
    v6 = (*(int (__stdcall **)(int))(*(int *)(v5 + 4) + 16))(v5 + 4);
    Power::TimerProcess(v6);
  }
    v7 = this->TActionClass_field_4C;
    if ( v7 )
  {
    v8 = (*(int (__stdcall **)(int))(*(int *)(v7 + 4) + 16))(v7 + 4);
    Power::TimerProcess(v8);
  }
    v9 = this->TActionClass_field_50;
    if ( v9 )
  {
    v10 = (*(int (__stdcall **)(int))(*(int *)(v9 + 4) + 16))(v9 + 4);
    Power::TimerProcess(v10);
  }
    return Power::TimerProcess(this->q090);
}
}

// ==== BACKFILL 0x006E3EE0  TriggerTypeClass::Dispatch  cls=TriggerTypeClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int TriggerTypeClass::Dispatch() {
{
    int result;
    result = 0;
    switch ( (unsigned int)this )
  {
    case 0xEu: case 0x20u: case 0x3Cu: case 0x3Du: case 0x3Eu: case 0x5Bu: case 0x6Fu: result = 2;
    break;
    default: return result;
  }
    return result;
}
} }

// ==== BACKFILL 0x006E3F70  sub_6E3F70  cls=ObjectClass  sig=csp  renamed_refs=0 ====
unsigned int * E4Recv_6E3F70::sub_6E3F70(unsigned int * a2)
{
{
    int *WorldCoords;
    int v4[3];
    WorldCoords = Cell::GetWorldCoords((short *)g_ScenarioClass_Instance, v4, this->M144);
    *a2 = *WorldCoords;
    *((int*)(a2) + 1) = WorldCoords[1];
    *((int*)(a2) + 2) = WorldCoords[2];
    return a2;
}
}

// ==== BACKFILL 0x006E4100  TActionClass::executePsychicDominatorAction  cls=TActionClass  sig=csp  renamed_refs=1 ====
char TActionClass::executePsychicDominatorAction(int a2, int a3, int a4, IUnknown * aP4)
{
{
    unsigned int v5;
    v5 = this->q090;
    if ( v5 >= 4 || !PlayerClass::HasPlayers((int *)(3988 * v5 + 8916268)) )
    return 0;
    SidebarClass::SwitchTab((int)&DataGlobal_87F7E8, v5);
    return 1;
}
}

// ==== BACKFILL 0x006E4200  TActionClass::executeForceShieldAction  cls=TActionClass  sig=csp  renamed_refs=1 ====
char TActionClass::executeForceShieldAction(int a2, int a3, int a4, IUnknown * aP4)
{
{
    int v5;
    void *v7;
    int *v8;
    int IndexByName;
    int v10;
    int v11;
    int v12;
    IUnknown *v14;
    int v15[3];
    char v16[12];
    v5 = a2;
    if ( !a2 )
    return 0;
    a2 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v14, this->TActionClass_field_44);
    v7 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&a2);
    v8 = (int *)(*(int (__thiscall **)(void *, char *))(*(int *)(v7) + 72))(v7, v16);
    v15[0] = *v8;
    v15[1] = v8[1];
    v15[2] = v8[2];
    IndexByName = BuildingTypeClass::FindIndexByName(this + 21);
    if ( IndexByName < 0 )
    return 0;
    if ( IndexByName > (int)g_TriggerClassCount )
    return 0;
    v10 = *((int *)(g_TriggerTypeCount) + IndexByName);
    if ( !v10 )
    return 0;
    v11 = (*(int (__thiscall **)(int, int))(*(int *)(v10) + 140))(v10, v5);
    v12 = v11;
    if ( !v11 )
    return 0;
    if ( !(*(unsigned char (__thiscall **)(int, int *, int))(*(int *)(v11) + 1168))(v11, v15, 0) )
  {
    (*(void (__thiscall **)(int))(*(int *)(v12) + 248))(v12);
    return 0;
  }
    (*(void (__thiscall **)(int, int))(*(int *)(v12) + 1244))(v12, 0);
    return 1;
}
}

// ==== BACKFILL 0x006E4360  TActionClass::executeSpyPlaneAction  cls=TActionClass  sig=csp  renamed_refs=1 ====
char TActionClass::executeSpyPlaneAction(int a2, int a3, int a4, IUnknown * aP4)
{
{
    int v5;
    if ( !a2 )
    return 0;
    v5 = this->q090;
    if ( v5 < 0 || v5 > *(int *)(a2 + 612) )
    return 0;
    SuperClass::ResetRechargeTime(*(int **)(*(int *)(a2 + 600) + 4 * v5));
    return 1;
}
}

// ==== BACKFILL 0x006E43A0  TActionClass::executeChronoSphereAction  cls=TActionClass  sig=csp  renamed_refs=1 ====
char TActionClass::executeChronoSphereAction(int a2, int a3, int a4, IUnknown * aP4)
{
{
    int v5;
    if ( !a2 )
    return 0;
    v5 = this->q090;
    if ( v5 < 0 || v5 > *(int *)(a2 + 612) )
    return 0;
    SuperClass::Reset(*(int *)(*(int *)(a2 + 600) + 4 * v5));
    return 1;
}
}

// ==== BACKFILL 0x006E43E0  TActionClass::executeWeatherStormAction  cls=TActionClass  sig=csp  renamed_refs=1 ====
char TActionClass::executeWeatherStormAction(unsigned int * a1, int a3, int a4, IUnknown * aP4)
{
{
    int *v5;
    int *v7;
    v5 = a1;
    if ( !a1 )
    return 0;
    v7 = (int *)*ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &a1, this->TActionClass_field_44);
    a1 = v7;
    if ( v7 == *(int **)&g_OverlayTypeConfig.__pad_579C[5868] )
    return 0;
    TActionClass::executeGuardAction(v5, (int)v7);
    return 1;
}
}

// ==== BACKFILL 0x006E4440  globalHelper_0E4440  cls=unknown  sig=csp  renamed_refs=0 ====
char globalHelper_0E4440(unsigned int * a0, int a2, int a3, IUnknown * aP3)
{
{
    if ( !a0 )
    return 0;
    GlobalHelper_0E4440_Helper(a0);
    return 1;
}
}

// ==== BACKFILL 0x006E4460  TActionClass::executeDominatorAction  cls=TActionClass  sig=csp  renamed_refs=1 ====
char TActionClass::executeDominatorAction(unsigned int * a1, int a3, int a4, IUnknown * aP4)
{
{
    int *v5;
    int *v7;
    v5 = a1;
    if ( !a1 )
    return 0;
    v7 = (int *)*ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &a1, this->TActionClass_field_44);
    a1 = v7;
    if ( v7 == *(int **)&g_OverlayTypeConfig.__pad_579C[5868] )
    return 0;
    TActionClass::executeHuntAction(v5, (int)v7);
    return 1;
}
}

// ==== BACKFILL 0x006E44C0  globalHelper_0E44C0  cls=unknown  sig=csp  renamed_refs=0 ====
char globalHelper_0E44C0(unsigned int * a0, int a2, int a3, IUnknown * aP3)
{
{
    if ( !a0 )
    return 0;
    GlobalHelper_0E44C0_Helper(a0);
    return 1;
}
}

// ==== BACKFILL 0x006E44E0  TActionClass::executeRevealAction  cls=TActionClass  sig=csp  renamed_refs=1 ====
char TActionClass::executeRevealAction(unsigned int * a1, int a3, int a4, IUnknown * aP4)
{
{
    int *v5;
    int *v7;
    v5 = a1;
    if ( !a1 )
    return 0;
    v7 = (int *)*ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &a1, this->TActionClass_field_44);
    a1 = v7;
    if ( v7 == *(int **)&g_OverlayTypeConfig.__pad_579C[5868] )
    return 0;
    TActionClass::executeDeployAction(v5, (int)v7);
    return 1;
}
}

// ==== BACKFILL 0x006E4540  globalHelper_0E4540  cls=unknown  sig=csp  renamed_refs=0 ====
char globalHelper_0E4540(unsigned int * a0, int a2, int a3, IUnknown * aP3)
{
{
    if ( !a0 )
    return 0;
    GlobalHelper_0E4540_Helper(a0);
    return 1;
}
}

// ==== BACKFILL 0x006E4560  TActionClass::executeEMPulseAction  cls=TActionClass  sig=csp  renamed_refs=1 ====
char TActionClass::executeEMPulseAction(int a2, int a3, int a4, IUnknown * aP4)
{
{
    int i;
    int v7;
    if ( !a2 )
    return 0;
    for ( i = *(int *)(a2 + 120) - 1; i >= 0; --i )
  {
    v7 = *(int *)(*(int *)(a2 + 108) + 4 * i);
    if ( !strcmp((const char *)(*(int *)(v7 + 1312) + 36), (const char *)(this + 84)) )
    *(int *)(v7 + 240) = this->q090;
  }
    return 1;
}
}

// ==== BACKFILL 0x006E45E0  ObjectClass::FindOwner  cls=unknown  sig=csp  renamed_refs=0 ====
int ObjectClass::FindOwner(unsigned int * a0, AnimClass * aP1)
{
{
    if ( !a0 )
    return 0;
    if ( aP1 == (AnimClass *)8997 )
    return Property::GetField11(a0);
    if ( aP1 == (AnimClass *)-1 )
    return 0;
    if ( BuildingType::IsSpecialType(aP1) )
    return BuildingType::FindOwnerHouse(aP1);
    return HouseClass::FindOwner(aP1);
}
}

// ==== BACKFILL 0x006E4630  TActionClass::StubReturn148  cls=TActionClass  sig=csp  renamed_refs=0 ====
int TActionClass::StubReturn148()
{
return 148;
}

// ==== BACKFILL 0x006E4640  TActionClass::StubReturn47  cls=TActionClass  sig=csp  renamed_refs=0 ====
int TActionClass::StubReturn47()
{
return 47;
}

// ==== BACKFILL 0x006E4650  TActionClass::Stub  cls=TActionClass  sig=csp  renamed_refs=0 ====
int TActionClass::Stub()
{
{
    return this->idxArray;
}
}

// ==== BACKFILL 0x006E47C0  ScriptAction::CopyStructField  cls=ScriptAction  sig=csp  renamed_refs=0 ====
void * ScriptAction::CopyStructField(void * a2, const void * a3)
{
{
    if ( a3 != this )
    qmemcpy(this, a3, 0x20u);
    qmemcpy(a2, this, 0x20u);
    return a2;
}
}

// ==== BACKFILL 0x006E47F0  Tactical_42::ClearBuffer  cls=Tactical  sig=csp  renamed_refs=0 ====
void Tactical_42::ClearBuffer()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->Tactical_42_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Tactical_42_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->Tactical_42_field_0x8 = 0;
}
}

// ==== BACKFILL 0x006E4820  Tactical_42::PointerToIndex  cls=Tactical  sig=csp  renamed_refs=0 ====
unsigned int Tactical_42::PointerToIndex(int a2)
{
{
    if ( (unsigned char)this->Tactical_42_field_0xC )
    return (unsigned int)(a2 - this->Tactical_42_field_0x4) >> 2;
    else
    return 0;
}
}

// ==== BACKFILL 0x006E49D0  Tactical_42::SetCapacity  cls=Tactical  sig=csp  renamed_refs=0 ====
char Tactical_42::SetCapacity(int a2, unsigned int * a3)
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
    if ( this->Tactical_42_field_0x4 )
    {
    v5 = this->Tactical_42_field_0x8;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->Tactical_42_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->Tactical_42_field_0x4 = 0;
      }
    }
    this->Tactical_42_field_0x4 = v4;
    this->Tactical_42_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->FindItem();
  }
    v7 = this->Tactical_42_field_0x8;
    if ( v7 < this->Tactical_42_field_0x10 )
    this->Tactical_42_field_0x10 = v7;
    return 1;
}
}

// ==== BACKFILL 0x006E5290  sub_6E5290  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char E4Recv_6E5290::sub_6E5290()
{
{
    return this->M52;
}
}

// ==== BACKFILL 0x006E5560  ScenarioClass::checkMissionObjectives  cls=ScenarioClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int ScenarioClass::checkMissionObjectives(int a1) {
{
      this->q030 = a2;
      return a2;
}
} }

// ==== BACKFILL 0x006E5570  Map_Reset_6E5570  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int sub_6E5570()
{
{
    int result;
    for ( result = g_GameObjectCleanup; g_GameObjectCleanup > 0; result = g_GameObjectCleanup )
  {
    if ( *(int *)g_TagClassCount )
    (*(void (__thiscall **)(int, int))(**(int **)g_TagClassCount + 32))(*(int *)g_TagClassCount, 1);
  }
    return result;
}
}

// ==== BACKFILL 0x006E5610  TagClass::CheckEvent  cls=TagClass  sig=csp  renamed_refs=0 ====
int TagClass::CheckEvent(int a2, TagTypeClass * aP2)
{
{
    TriggerClass *v4;
    TagTypeClass *result;
    if ( this->buildingType == a2 )
    this->buildingType = 0;
    v4 = *(TriggerClass **)(this + 40);
    if ( v4 == (TriggerClass *)a2 )
    this->firstTrigger = v4->nextTrigger;
    result = *(TagTypeClass **)(this + 36);
    if ( !result )
  {
    this->destroyed = 1;
    result = *(TagTypeClass **)&DataGlobal_B05488.__pad_579C[19068];
    if ( *(int *)&DataGlobal_B05488.__pad_579C[19076] < *(int *)&DataGlobal_B05488.__pad_579C[19068] || (DataGlobal_B05488.__pad_579C[19073] || !*(int *)&DataGlobal_B05488.__pad_579C[19068]) && *(int *)&DataGlobal_B05488.__pad_579C[19080] > 0 && (result = (TagTypeClass *)(*(int (__thiscall **)(char *, int, int))(*(int *)&DataGlobal_B05488.__pad_579C[19060] + 8))( &DataGlobal_B05488.__pad_579C[19060], *(int *)&DataGlobal_B05488.__pad_579C[19068] + *(int *)&DataGlobal_B05488.__pad_579C[19080], 0), (char)result) )
    {
    result = (TagTypeClass *)(*(int *)&DataGlobal_B05488.__pad_579C[19076])++;
    *(int *)(*(int *)&DataGlobal_B05488.__pad_579C[19064] + 4 * (int)result) = this;
    }
  }
    return (int)result->__pad_0;
}
}

// ==== BACKFILL 0x006E56A0  TagClass::ddtor  cls=TagClass  sig=csp  renamed_refs=0 ====
int TagClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1425466418;
  a2[1] = 298977773;
  a2[2] = 1610655148;
  a2[3] = -1252326136;
  return 0;
}

// ==== BACKFILL 0x006E56E0  TagClass::ProcessTag  cls=TagClass  sig=csp  renamed_refs=0 ====
int TagClass::ProcessTag(int * a2)
{
{
    int v3;
    int v4;
    int v5;
    AbstractClass::ProcessPower((AbstractClass *)this);
    v3 = (*(int (__stdcall **)(int))(*(int *)(this->buildingType + 4) + 16))(this->buildingType + 4);
    Power::TimerProcess(v3);
    v4 = this->firstTrigger;
    if ( v4 )
  {
    v5 = (*(int (__stdcall **)(int))(*(int *)(v4 + 4) + 16))(v4 + 4);
    v4 = Power::TimerProcess(v5);
  }
    LOBYTE(v4) = this->destroyed;
    return Power::FlagProcess(a2, v4);
}
}

// ==== BACKFILL 0x006E5730  TagClass::LoadTag  cls=TagClass  sig=csp  renamed_refs=0 ====
int TagClass::LoadTag(AbstractClass * aP0, int aP1)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    AbstractClass::InitVtables(aP0, (IUnknown *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_TagClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_TagClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_TagClass;
    *(int *)&aP0->__pad_0[12] = &vt_TagClass;
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].__pad_0[4]);
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x006E57A0  TagClass::SaveTag  cls=TagClass  sig=csp  renamed_refs=0 ====
int TagClass::SaveTag(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// ==== BACKFILL 0x006E57DE  ?do_always_noconv_codecvt_base_std__MBE_NXZ_18  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char _do_always_noconv_codecvt_base_std__MBE_NXZ_18()
{
return 1;
}

// ==== BACKFILL 0x006E5820  TriggerActionQueue::ProcessAll  cls=TriggerActionQueue  sig=csp  renamed_refs=0 ====
int TriggerActionQueue::ProcessAll()
{
{
    int result;
    int i;
    result = g_GameObjectCleanup;
    for ( i = 0; i < g_GameObjectCleanup; ++i )
  {
    TriggerClass::NotifyLocalChanged(this);
    result = g_GameObjectCleanup;
  }
    return result;
}
}

// ==== BACKFILL 0x006E5890  TagClass::StubReturn56  cls=TagClass  sig=csp  renamed_refs=0 ====
int TagClass::StubReturn56()
{
return 56;
}

// ==== BACKFILL 0x006E58A0  TagClass::StubReturn44  cls=TagClass  sig=csp  renamed_refs=0 ====
int TagClass::StubReturn44()
{
return 44;
}

// ==== BACKFILL 0x006E58B0  TagClass::ProcessTrigger  cls=TagClass  sig=csp  renamed_refs=0 ====
TagClass * TagClass::ProcessTrigger(char a2)
{
{
    TagClass::Destructor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (TagClass *)this;
}
}

// ==== BACKFILL 0x006E5E70  ObjectTypeClass::FindByName  cls=ObjectTypeClass  sig=csp  renamed_refs=0 ====
int ObjectTypeClass::FindByName()
{
{
    int v2;
    int v3;
    if ( !this )
    return 0;
    v2 = 0;
    if ( *(int *)&DataGlobal_B05488.__pad_579C[15212] <= 0 )
    return 0;
    while ( 1 )
  {
    v3 = *(int *)(*(int *)&DataGlobal_B05488.__pad_579C[15200] + 4 * v2);
    if ( !_strcmpi((const void *)(v3 + 36), this) || !_strcmpi((const void *)(v3 + 100), this) )
    break;
    if ( ++v2 >= *(int *)&DataGlobal_B05488.__pad_579C[15212] )
    return 0;
  }
    return v3;
}
}

// ==== BACKFILL 0x006E63A0  TagTypeClass::GetClassIdentifier  cls=TagTypeClass  sig=csp  renamed_refs=0 ====
int TagTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1425466419;
  a2[1] = 298977773;
  a2[2] = 1610655148;
  a2[3] = -1252326136;
  return 0;
}

// ==== BACKFILL 0x006E6410  TagTypeClass::LoadTypeData  cls=TagTypeClass  sig=csp  renamed_refs=0 ====
int TagTypeClass::LoadTypeData(AbstractTypeClass * aP0, int aP1)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix_0((AbstractClass *)aP0, (AbstractClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    AbstractTypeClass::Init((int)aP0, (AbstractTypeClass *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_TagTypeClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_TagTypeClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_TagTypeClass;
    *(int *)&aP0->__pad_0[12] = &vt_TagTypeClass;
    }
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].__pad_0[8]);
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x006E6470  TagTypeClass::SaveToINI  cls=TagTypeClass  sig=csp  renamed_refs=0 ====
int TagTypeClass::SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// ==== BACKFILL 0x006E6490  TagTypeClass::GetTypeIdentifier  cls=TagTypeClass  sig=csp  renamed_refs=0 ====
int TagTypeClass::GetTypeIdentifier()
{
return 45;
}

// ==== BACKFILL 0x006E64A0  TagTypeClass::GetObjectSize  cls=TagTypeClass  sig=csp  renamed_refs=0 ====
int TagTypeClass::GetObjectSize()
{
return 164;
}

// ==== BACKFILL 0x006E64C0  TagTypeClass::ddtor  cls=TagTypeClass  sig=csp  renamed_refs=0 ====
TagTypeClass * TagTypeClass::ddtor(char a2)
{
{
    TagTypeClass::CleanupMembers((int)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (TagTypeClass *)this;
}
}

// ==== BACKFILL 0x006E6B70  sub_6E6B70  cls=ObjectClass  sig=csp  renamed_refs=0 ====
unsigned char * E4Recv_6E6B70::sub_6E6B70(unsigned int * a2)
{
{
    this->M4 = 11;
    *(int *)this = *a2 / 256 + 1000 * (*((int*)(a2) + 1) / 256);
    return this;
}
}

// ==== BACKFILL 0x006E8000  sub_6E8000  cls=ObjectClass  sig=csp  renamed_refs=0 ====
unsigned int * E4Recv_6E8000::sub_6E8000(int a2)
{
{
    int *result;
    int *v3;
    int v4;
    int v5;
    int v6;
    result = this;
    this->M8 = &vt_INoticeSink;
    this->M12 = &vt_INoticeSource;
    this->M16 = *(int *)(a2 + 16);
    this->M20 = *(char *)(a2 + 20);
    this->M24 = *(int *)(a2 + 24);
    this->M28 = *(int *)(a2 + 28);
    this->M32 = *(char *)(a2 + 32);
    *(void**)this = vt_AbstractClass;
    this->M4 = (unsigned int)vt_AbstractClass;
    this->M8 = (unsigned int)vt_AbstractClass;
    this->M12 = &vt_AbstractClass;
    qmemcpy(this + 9, (const void *)(a2 + 36), 0x19u);
    qmemcpy((char *)(this) + 61, (const void *)(a2 + 61), 0x20u);
    this->M96 = *(int *)(a2 + 96);
    qmemcpy(this + 25, (const void *)(a2 + 100), 0x31u);
    *(void**)this = vt_TaskForceClass;
    this->M4 = (unsigned int)vt_TaskForceClass;
    this->M8 = (unsigned int)vt_TaskForceClass;
    this->M12 = &vt_TaskForceClass;
    v3 = this + 41;
    result[38] = *(int *)(a2 + 152);
    result[39] = *(int *)(a2 + 156);
    v4 = result[39];
    result[40] = *(int *)(a2 + 160);
    v5 = 0;
    if ( v4 > 0 )
  {
    v6 = a2 - (int)result;
    do
    {
    ++v5;
    *v3 = *(int *)((char *)(v3) + v6);
    v3[1] = *(int *)((char *)(v3) + v6 + 4);
    v3 += 2;
    }
    while ( v5 < result[39] );
  }
    return result;
}
}

// ==== BACKFILL 0x006E8160  TeamClass::SumMemberCounts  cls=TeamClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int TeamClass::SumMemberCounts() {
{
      int v1;
      int result;
      int *v3;
      int v4;

      v1 = this->q09C;
      result = 0;
      if ( v1 > 0 )
      {
        v3 = this + 41;
        do
        {
          v4 = *v3;
          v3 += 2;
          result += v4;
          --v1;
        }
        while ( v1 );
      }
      return result;
}
} }

// ==== BACKFILL 0x006E8340  ScriptTypeClass::ReadINI  cls=unknown  sig=csp  renamed_refs=0 ====
TaskForceClass * ScriptTypeClass::ReadINI(char * a1, int a2)
{
{
    CCINIClass *KeyCount;
    CCINIClass *i;
    unsigned char *StringByIndex;
    TaskForceClass *result;
    INIClass *v7;
    int j;
    int v9;
    INIClass *v10;
    char Buffer[32];
    KeyCount = (CCINIClass *)INIClass::GetKeyCount(a1, (INIClass *)&DataGlobal_830620.__pad_579C[53244]);
    for ( i = 0; (int)i < (int)KeyCount; i = (CCINIClass *)((char *)(i) + 1) )
  {
    StringByIndex = (unsigned char *)INIClass::GetStringByIndex(a1, (CCINIClass *)&DataGlobal_830620.__pad_579C[53244], i);
    INIClass::GetString( (unsigned char ***)a1, (INIClass *)&DataGlobal_830620.__pad_579C[53244], StringByIndex, (INIClass *)&DataGlobal_87F8E4.__pad_5568[20760], (INIClass *)Buffer, 32);
    INIClass::ClearSection((int)a1, (INIClass *)Buffer, 0);
  }
    INIClass::ClearSection((int)a1, (INIClass *)&DataGlobal_830620.__pad_579C[53244], 0);
    result = *(TaskForceClass **)&g_NetworkPlayerBuffer.__pad_1258[76];
    v7 = 0;
    for ( j = 0; j < *(int *)&g_NetworkPlayerBuffer.__pad_1258[76]; ++j )
  {
    v9 = *(int *)(*(int *)&g_NetworkPlayerBuffer.__pad_1258[64] + 4 * j);
    if ( *(int *)(v9 + 160) == a2 )
    {
    v10 = v7;
    v7 = (INIClass *)((char *)(v7) + 1);
    sprintf(Buffer, g_Str_Trace__d, v10);
    String::Trim(Buffer);
    INIClass::SetString(a1, (INIClass *)&DataGlobal_830620.__pad_579C[53244], (INIClass *)Buffer, (INIClass *)(v9 + 36));
    (*(void (__thiscall **)(int, char *))(*(int *)(v9) + 104))(v9, a1);
    }
    result = *(TaskForceClass **)&g_NetworkPlayerBuffer.__pad_1258[76];
  }
    return result;
}
}

// ==== BACKFILL 0x006E8420  TaskForceClass::GetUnitCount  cls=TaskForceClass  sig=csp  renamed_refs=0 ====
char TaskForceClass::GetUnitCount(unsigned char *** aP1)
{
{
    INIClass *v3;
    int *v4;
    INIClass *v5;
    INIClass *v6;
    int v8;
    char Buffer[32];
    INIClass Destination[2];
    INIClass::ResetSection(aP1);
    if ( !AbstractTypeClass::LoadFromINI(this, (AbstractTypeClass *)aP1) )
    return 0;
    v3 = 0;
    this->TaskForceClass_field_0x9C = 0;
    do
  {
    sprintf(Buffer, g_Str_Trace__d, v3);
    if ( (int)INIClass::GetString( aP1, (INIClass *)(this + 36), (unsigned char *)Buffer, (INIClass *)&DataGlobal_87F8E4.__pad_5568[20760], Destination, 128) > 0 )
    {
    v4 = TaskForceClass::ParseUnitCountAndType(&v8, Destination[0].__pad_0);
    v5 = *(INIClass **)(this + 156);
    *(int *)(this + 8 * (int)v5 + 164) = *v4;
    *(int *)(this + 8 * (int)v5 + 168) = v4[1];
    v6 = *(INIClass **)(this + 156);
    if ( *(int *)(this + 8 * (int)v6 + 168) )
    this->TaskForceClass_field_0x9C = &v6->__pad_0[1];
    }
    v3 = (INIClass *)((char *)(v3) + 1);
  }
    while ( (int)v3 < 6 );
    this->TaskForceClass_field_0x98 = INIClass::ReadInt_Overwrite( (int)aP1, (unsigned char *)(this + 36), (CCINIClass *)&DataGlobal_830620.__pad_579C[53256], *(INIClass **)(this + 152));
    return 1;
}
}

// ==== BACKFILL 0x006E8510  TaskForceClass::GetUnitType  cls=TaskForceClass  sig=csp  renamed_refs=0 ====
char TaskForceClass::GetUnitType(char * a2)
{
{
    int v3;
    int *v4;
    char *v5;
    char Buffer[32];
    if ( !AbstractTypeClass::WriteINI((char *)this, a2) )
    return 0;
    v3 = 0;
    v4 = (int *)(this + 164);
    do
  {
    sprintf(Buffer, g_Str_Trace__d, v3);
    if ( v3 >= this->TaskForceClass_field_0x9C )
    {
    INIClass::ClearSection((int)a2, this + 36, (unsigned char *)Buffer);
    }
    else
    {
    v5 = TaskForceClass::Check(v4);
    INIClass::SetString(a2, (unsigned char *)(this + 36), Buffer, v5);
    }
    ++v3;
    v4 += 2;
  }
    while ( v3 < 6 );
    INIClass::SetInt(a2, (unsigned char *)(this + 36), g_INI_Key_Group, this->TaskForceClass_field_0x98, 0);
    return 1;
}
}

// ==== BACKFILL 0x006E85B0  sub_6E85B0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char E4Recv_6E85B0::sub_6E85B0()
{
{
    int v2;
    int *i;
    v2 = 0;
    if ( this->M156 <= 0 )
    return 1;
    for ( i = this + 42; (*(int (__thiscall **)(int))(*(int *)*i + 44))(*i) == 16; i += 2 )
  {
    if ( ++v2 >= this->M156 )
    return 1;
  }
    return 0;
}
}

// ==== BACKFILL 0x006E8680  TaskForceClass::SaveTaskForce  cls=TaskForceClass  sig=csp  renamed_refs=0 ====
int TaskForceClass::SaveTaskForce(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// ==== BACKFILL 0x006E86A0  TaskForceClass::LoadTaskForce  cls=TaskForceClass  sig=csp  renamed_refs=0 ====
int TaskForceClass::LoadTaskForce(AbstractTypeClass * aP0, int aP1)
{
{
    int result;
    MouseClass *v3;
    int v4;
    result = AbstractClass::SaveLoad_Prefix_0((AbstractClass *)aP0, (AbstractClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    AbstractTypeClass::Init((int)aP0, (AbstractTypeClass *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_TaskForceClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_TaskForceClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_TaskForceClass;
    *(int *)&aP0->__pad_0[12] = &vt_TaskForceClass;
    }
    v3 = (MouseClass *)&aP0[1].uniqueId;
    v4 = 6;
    do
    {
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], v3);
    v3 = (MouseClass *)((char *)(v3) + 8);
    --v4;
    }
    while ( v4 );
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x006E8710  TaskForceClass::ddtor  cls=TaskForceClass  sig=csp  renamed_refs=0 ====
int TaskForceClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1641952286;
  a2[1] = 298977140;
  a2[2] = 1610655148;
  a2[3] = -1252326136;
  return 0;
}

// ==== BACKFILL 0x006E8750  TaskForceClass::LoadTask  cls=TaskForceClass  sig=csp  renamed_refs=0 ====
int TaskForceClass::LoadTask(int * a2)
{
{
    AbstractTypeClass::ProcessPower((char *)this, a2);
    Power::TimerProcess(this->TaskForceClass_field_0x98);
    return Power::TimerProcess(this->TaskForceClass_field_0x9C);
}
}

// ==== BACKFILL 0x006E8780  HouseClass::GetMaxBuildLevel  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int HouseClass::GetMaxBuildLevel() {
{
    int v1;
    int result;
    int *v3;
    int v4;
    v1 = this->secretLabsCount;
    result = 0;
    if ( v1 > 0 )
  {
    v3 = this + 42;
    do
    {
    v4 = *(int *)(*v3 + 1588);
    if ( v4 <= result )
      {
    if ( v4 == -1 )
        {
    if ( g_GameMode_Current[0] )
    result = 11;
        }
      }
    else
      {
    result = *(int *)(*v3 + 1588);
      }
    v3 += 2;
    --v1;
    }
    while ( v1 );
  }
    return result;
}
} }

// ==== BACKFILL 0x006E87D0  TaskForceClass::StubReturn33  cls=TaskForceClass  sig=csp  renamed_refs=0 ====
int TaskForceClass::StubReturn33()
{
return 33;
}

// ==== BACKFILL 0x006E87E0  TaskForceClass::StubReturn212  cls=TaskForceClass  sig=csp  renamed_refs=0 ====
int TaskForceClass::StubReturn212()
{
return 212;
}

// ==== BACKFILL 0x006E8A90  MissionClass::Construct  cls=TeamClass  sig=csp  renamed_refs=4 ====
namespace ra2 { namespace game { int MissionClass::Construct(int a1, int a2, int a3) {
{
      AbstractClass *v5;
      TeamTypeClass *v6;
      TimerStruct *v7;
      int v8;
      int v9;
      int v10;
      int v11;
      int v12;
      TeamTypeClass *v13;
      int v14;
      _WORD *v15;
      CellClass *WaypointCoords;
      int v17;
      TagClass *v16;
      AbstractClass *v19;

      AbstractClass::Constructor((AbstractClass *)this);
      v5 = aP2;
      v6 = aP3;
      this->objectTypeFlags = aP1;
      this->owningHouseIndex = 0;
      this->fallRate = v5;
      this->nextObject = 0;
      this->attachedTag = 0;
      this->attachedBomb = 0;
      this->ambientSoundController = 0;
      this->q040 = 0;
      this->unknown44 = v6;
      this->totalObjects = 0;
      this->totalThreatValue = 0;
      this->customSound_controller = *(_DWORD *)&HouseClass_Player.__pad_5568[23248];
      this->firstUnit = 0;
      v7 = *(TimerStruct **)&HouseClass_Player.__pad_5568[23248];
      this->q060 = 0;
      this->q058 = v7;
      this->customSound = *(_DWORD *)&HouseClass_Player.__pad_5568[23248];
      this->health = 0;
      this->estimatedHealth = 0;
      this->isOnMap = 0;
      this->alignmentPadding75 = 0;
      this->q076 = 0;
      this->q077 = 0;
      this->spawnStatus = 0;
      this->q079 = 0;
      this->q07A = 1;
      this->q07B = 0;
      this->visibilityFlags = 0;
      this->q07D = 1;
      this->q07E = 0;
      this->q07F = 0;
      this->needsRedraw = 1;
      this->inLimbo = 0;
      this->inOpenToppedTransport = 0;
      this->isSelected = 0;
      this->hasParachute = 0;
      *(_DWORD *)this = &TeamClass::`vftable';
      *(_DWORD *)(this + 4) = &TeamClass::`vftable';
      *(_DWORD *)(this + 8) = &TeamClass::`vftable';
      *(_DWORD *)(this + 12) = &vt_TeamClass;
      if ( *(int *)&stru_89E138.__pad_579C[67620] < *(int *)&stru_89E138.__pad_579C[67612]
        || (stru_89E138.__pad_579C[67617] || !*(_DWORD *)&stru_89E138.__pad_579C[67612])
        && *(int *)&stru_89E138.__pad_579C[67624] > 0
        && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_89E138.__pad_579C[67604] + 8))(
             &stru_89E138.__pad_579C[67604],
             *(_DWORD *)&stru_89E138.__pad_579C[67612] + *(_DWORD *)&stru_89E138.__pad_579C[67624],
             0) )
      {
        v8 = (*(_DWORD *)&stru_89E138.__pad_579C[67620])++;
        *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_579C[67608] + 4 * v8) = this;
      }
      if ( *(int *)&stru_B05488.__pad_579C[19036] < *(int *)&stru_B05488.__pad_579C[19028]
        || (stru_B05488.__pad_579C[19033] || !*(_DWORD *)&stru_B05488.__pad_579C[19028])
        && *(int *)&stru_B05488.__pad_579C[19040] > 0
        && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[19020] + 8))(
             &stru_B05488.__pad_579C[19020],
             *(_DWORD *)&stru_B05488.__pad_579C[19028] + *(_DWORD *)&stru_B05488.__pad_579C[19040],
             0) )
      {
        v9 = (*(_DWORD *)&stru_B05488.__pad_579C[19036])++;
        *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19024] + 4 * v9) = this;
      }
      if ( *(int *)&stru_B05488.__pad_579C[18948] < *(int *)&stru_B05488.__pad_579C[18940]
        || (stru_B05488.__pad_579C[18945] || !*(_DWORD *)&stru_B05488.__pad_579C[18940])
        && *(int *)&stru_B05488.__pad_579C[18952] > 0
        && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[18932] + 8))(
             &stru_B05488.__pad_579C[18932],
             *(_DWORD *)&stru_B05488.__pad_579C[18940] + *(_DWORD *)&stru_B05488.__pad_579C[18952],
             0) )
      {
        v10 = (*(_DWORD *)&stru_B05488.__pad_579C[18948])++;
        *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[18936] + 4 * v10) = this;
      }
      if ( *(int *)&stru_B05488.__pad_579C[19212] < *(int *)&stru_B05488.__pad_579C[19204]
        || (stru_B05488.__pad_579C[19209] || !*(_DWORD *)&stru_B05488.__pad_579C[19204])
        && *(int *)&stru_B05488.__pad_579C[19216] > 0
        && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[19196] + 8))(
             &stru_B05488.__pad_579C[19196],
             *(_DWORD *)&stru_B05488.__pad_579C[19204] + *(_DWORD *)&stru_B05488.__pad_579C[19216],
             0) )
      {
        v11 = (*(_DWORD *)&stru_B05488.__pad_579C[19212])++;
        *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19200] + 4 * v11) = this;
      }
      if ( *(int *)&stru_B05488.__pad_579C[19164] < *(int *)&stru_B05488.__pad_579C[19156]
        || (stru_B05488.__pad_579C[19161] || !*(_DWORD *)&stru_B05488.__pad_579C[19156])
        && *(int *)&stru_B05488.__pad_579C[19168] > 0
        && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[19148] + 8))(
             &stru_B05488.__pad_579C[19148],
             *(_DWORD *)&stru_B05488.__pad_579C[19156] + *(_DWORD *)&stru_B05488.__pad_579C[19168],
             0) )
      {
        v12 = (*(_DWORD *)&stru_B05488.__pad_579C[19164])++;
        *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19152] + 4 * v12) = this;
      }
      memset((void *)(this + 136), 0, 0x18u);
      v13 = *(TeamTypeClass **)(this + 36);
      if ( v13 )
      {
        v14 = this->fallRate;
        if ( v14 && v13[2].__pad_0[14] )
          ++*(_DWORD *)(v14 + 22124);
        v15 = TechnoClass::GetWaypointCoords(*(_DWORD **)(this + 36), (AbstractClass *)&aP1);
        if ( *v15 != *(_WORD *)&stru_B05488.__pad_579C[15652] || v15[1] != *(_WORD *)&stru_B05488.__pad_579C[15654] )
        {
          WaypointCoords = (CellClass *)TechnoClass::GetWaypointCoords(*(_DWORD **)(this + 36), (AbstractClass *)&aP1);
          this->attachedTag = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)WaypointCoords);
        }
        ++*(_DWORD *)(this->objectTypeFlags + 220);
        if ( *(_DWORD *)(this->objectTypeFlags + 208) )
        {
          v17 = __2_YAPAXI_Z(0x38u);
          if ( v17 )
            v16 = (TagClass *)TeknoClass::GetType(v17, *(TeamTypeClass **)(this->objectTypeFlags + 208));
          else
            v16 = 0;
          this->estimatedHealth = v16;
        }
        v19 = (AbstractClass *)__2_YAPAXI_Z(0x30u);
        if ( v19 )
        {
          this->owningHouseIndex = ScriptClass::Construct(v19, *(AbstractClass **)(this->objectTypeFlags + 224));
          return this;
        }
        this->owningHouseIndex = 0;
      }
      return this;
}
} } }

// ==== BACKFILL 0x006E9050  TeamClass::SelectMember  cls=TeamClass  sig=csp  renamed_refs=0 ====
char TeamClass::SelectMember(AbstractClass * aP1)
{
{
    AbstractClass *v4;
    FootClass *v5;
    AbstractClass *v6;
    AbstractClass *movementDestination;
    bool v8;
    AbstractClass *v9;
    FootClass *v10;
    bool aP1a;
    v4 = *(AbstractClass **)(this + 60);
    if ( aP1 != v4 )
  {
    v5 = *(FootClass **)(this + 84);
    if ( v4 )
    {
    for ( ; v5; v5 = (FootClass *)v5->nextTeamMember )
      {
    v6 = *(AbstractClass **)(this + 60);
    movementDestination = (AbstractClass *)v5->movementDestination;
    aP1a = v5->sprayOffsetIndex == (int)v6;
    v8 = movementDestination == v6;
    if ( (AbstractClass *)v5->sprayOffsetIndex == v6 || movementDestination == v6 )
        {
    (*(void (__thiscall **)(FootClass *, int, int))(*(int *)v5->__pad_0 + 488))(v5, 5, 0);
    if ( v8 )
    (*(void (__thiscall **)(FootClass *, int, int))(*(int *)v5->__pad_0 + 1152))(v5, 0, 1);
    if ( aP1a )
    (*(void (__thiscall **)(FootClass *, int))(*(int *)v5->__pad_0 + 968))(v5, 0);
        }
      }
    }
  }
    v9 = *(AbstractClass **)(this + 64);
    if ( v9 == *(AbstractClass **)(this + 60) || !v9 )
    this->focus = aP1;
    this->queuedFocus = aP1;
    if ( aP1 )
  {
    v9 = (AbstractClass *)(*(int (__thiscall **)(AbstractClass *))(*(int *)aP1->__pad_0 + 44))(aP1);
    if ( v9 == (AbstractClass *)11 )
    {
    LOBYTE(v9) = Type::CheckAmbiguity(&DataGlobal_87C374.__pad_14B0[8132], (int)aP1, 1);
    if ( (char)v9 )
      {
    this->unknown82 = 0;
      }
    else
      {
    v10 = *(FootClass **)(this + 84);
    for ( this->unknown82 = 1; v10; v10 = (FootClass *)v10->nextTeamMember )
    LOBYTE(v9) = (*(int (__thiscall **)(FootClass *, int, int))(*(int *)v10->__pad_0 + 1152))(v10, 0, 1);
      }
    }
  }
    return (char)v9;
}
}

// ==== BACKFILL 0x006EA080  sub_6EA080  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char E4Recv_6EA080::sub_6EA080()
{
{
    int v2;
    char result;
    v2 = this->M84;
    this->M127 = 1;
    this->M120 = 1;
    for ( this->M122 = 0; v2; v2 = *(int *)(v2 + 1496) )
  {
    if ( (unsigned char)this->M123 || (unsigned char)this->M119 )
    *(char *)(v2 + 1673) = 1;
  }
    result = SetLandTypeMap(*(int **)(this + 40));
    this->M128 = 1;
    return result;
}
}

// ==== BACKFILL 0x006EA4F0  CaptureManagerClass::AddMember  cls=CaptureManagerClass  sig=csp  renamed_refs=0 ====
char CaptureManagerClass::AddMember(TechnoClass * aP1)
{
{
    return TeamClass::AddMember((int)this, (IUnknown *)aP1, (IUnknown *)1);
}
}

// ==== BACKFILL 0x006EA500  TeamClass::AddMember  cls=TeamClass  sig=csp  renamed_refs=0 ====
char TeamClass::AddMember(IUnknown * aP1, IUnknown * aP2)
{
{
    IUnknown *v3;
    char result;
    char v6;
    int v7;
    int eax12;
    AbstractClass *v8;
    int v10;
    v3 = aP1;
    if ( !aP1 )
    return 0;
    v6 = (char)aP2;
    result = TeamClass::ValidateMember((int *)this, (TechnoClass *)aP1, (int *)&aP1, (char)aP2);
    if ( result )
  {
    v7 = *(int *)&v3->__pad_524[176];
    if ( v7 )
    TeamClass::LiberateMember_Start(v7, v3, 0xFFFFFFFF, 0);
    if ( !v6 )
    ++*(int *)(this + 4 * (int)aP1 + 136);
    v3->__pad_524[357] = this->firstUnit == 0;
    *(int *)&v3->__pad_524[180] = this->firstUnit;
    this->firstUnit = v3;
    *(int *)&v3->__pad_524[176] = this;
    *(int *)&v3->__pad_1D8[60] = TeamTypeClass::GetGroup(*(int **)(this + 36));
    if ( this->tag && (!*(char *)(this->buildingType + 179) || *(int *)((*(int (__thiscall **)(IUnknown *))(v3->field_0 + 132))(v3) + 1504) > 0) )
    {
    ObjectClass::SetReference(v3, this->tag);
    }
    ++this->totalObjects;
    eax12 = (*(int (__thiscall **)(IUnknown *))(v3->field_0 + 704))(v3);
    v8 = *(AbstractClass **)(this + 52);
    this->totalThreatValue += eax12;
    if ( !v8 )
    TeamClass::FindClosestEnemy(this, (AbstractClass *)(this + 52), (AbstractClass *)(this + 56));
    v10 = this->buildingType;
    this->TeamClass_field_7E = 1;
    this->needsToDisappear = 1;
    v3->__pad_3BC[102] = *(char *)(v10 + 245);
    return 1;
  }
    return result;
}
}

// ==== BACKFILL 0x006EA610  TeamClass::ValidateMember  cls=TeamClass  sig=csp  renamed_refs=0 ====
bool TeamClass::ValidateMember(TechnoClass * aP1, int * a2, char a4)
{
{
    int v5;
    int v6;
    int *v7;
    bool v8;
    int queuedMission;
    TechnoClass *v11;
    if ( this == (int *)aP1[1].queuedMission || !aP1 || !aP1->isAliveFlag || !aP1->health || !*(int *)&g_NetworkPlayerBuffer.__pad_1140[48] && aP1->inLimbo || aP1->focus != (void *)this->owner || Team::AllMembersValid((int *)aP1->__pad_0) && ((*(int (__thiscall **)(TechnoClass *))(*(int *)aP1->__pad_0 + 44))(aP1) != 2 || !*(char *)(aP1[1].ironTintTimer[2] + 3597)) )
  {
    return 0;
  }
    *a2 = 0;
    if ( *(int *)(*(int *)(this->buildingType + 228) + 156) > 0 )
  {
    do
    {
    v5 = *a2;
    if ( *(int *)(*(int *)(this->buildingType + 228) + 8 * v5 + 168) == (*(int (__thiscall **)(TechnoClass *))(*(int *)aP1->__pad_0 + 136))(aP1) )
    break;
    *a2 = v5 + 1;
    }
    while ( v5 + 1 < *(int *)(*(int *)(this->buildingType + 228) + 156) );
  }
    if ( *a2 == *(int *)(*(int *)(this->buildingType + 228) + 156) && !a4 )
    return 0;
    if ( (*(int (__thiscall **)(TechnoClass *))(*(int *)aP1->__pad_0 + 388))(aP1) != -1 )
  {
    v6 = (*(int (__thiscall **)(TechnoClass *))(*(int *)aP1->__pad_0 + 388))(aP1);
    if ( !IPersistStream::SetField(v6) )
    return 0;
  }
    if ( !aP1->__pad_3F7[42] && !*(char *)(this->buildingType + 169) )
    return 0;
    v7 = (int *)this->currentScript;
    v8 = 0;
    if ( v7 )
    v8 = *SessionClass::GetEntry(v7, (IUnknown *)&v11) == 8;
    if ( (*(int (__thiscall **)(TechnoClass *))(*(int *)aP1->__pad_0 + 44))(aP1) == 2 )
    v8 = 1;
    return (aP1->__pad_3F7[43] || !*(char *)(this->buildingType + 169) || v8)
    && !TeamClass::HasAnyMemberFlagged(aP1)
    && !FootClass::checkPassability(aP1)
    && !aP1->spawnManager && ((queuedMission = aP1[1].queuedMission) == 0 || *(int *)(*(int *)(queuedMission + 36) + 180) < *(int *)(this->buildingType + 180))
    && ((*(int (__thiscall **)(TechnoClass *))(*(int *)aP1->__pad_0 + 44))(aP1) != 2 || !*(int *)(*(int (__thiscall **)(TechnoClass *, int))(*(int *)aP1->__pad_0 + 1016))(aP1, 0) || LODWORD(aP1->pitchAngle))
    && (*(this + *a2 + 34) < *(int *)(*(int *)(this->buildingType + 228) + 8 * *a2 + 164) || a4)
    && !aP1->spawnManager && aP1->isBerserk_duration_left == 0;
}
}

// ==== BACKFILL 0x006EAE60  TeamClass::ExecuteAction  cls=TeamClass  sig=csp  renamed_refs=0 ====
int TeamClass::ExecuteAction(int a2, char a3)
{
{
    int result;
    int v4;
    result = a2;
    if ( a2 == this->tag )
    this->tag = 0;
    v4 = this->firstUnit;
    if ( a2 == v4 && a3 )
    this->firstUnit = *(int *)(v4 + 1496);
    if ( a2 == this->owner )
    this->owner = 0;
    if ( a2 == this->currentScript )
    this->currentScript = 0;
    if ( this->focus == a2 )
    this->focus = 0;
    if ( this->queuedFocus == a2 )
    this->queuedFocus = 0;
    if ( this->spawnCell == a2 )
    this->spawnCell = 0;
    if ( this->buildingType == a2 )
    this->buildingType = 0;
    if ( this->unknown38 == a2 )
    this->unknown38 = 0;
    if ( this->unknown44 == a2 )
    this->unknown44 = 0;
    if ( this->target == a2 )
    this->target = 0;
    return result;
}
}

// ==== BACKFILL 0x006EC130  ObjectClass::Get  cls=ObjectClass  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int ObjectClass::Get(int a1) {
{
      int v3;
      int v4;
      int v6;

      if ( !a2
        || !*(_BYTE *)(a2 + 144)
        || !*(_DWORD *)(a2 + 108)
        || !g_IKnowWhatImDoing && *(_BYTE *)(a2 + 129)
        || *(_BYTE *)(a2 + 1673) )
      {
        return 0;
      }
      v3 = *SessionClass::GetEntry(*(_DWORD **)(this + 40), &v6);
      if ( v3 == 54 || v3 == 53 )
        v4 = g_RulesClass_Instance[1].?[1];
      else
        v4 = g_RulesClass_Instance[1].?[0];
      if ( ObjectClass::DistanceTo((void *)a2, this->attachedTag) <= v4 )
      {
        *(_BYTE *)(a2 + 1673) = 1;
        return 0;
      }
      if ( !*(_DWORD *)(a2 + 1444) )
      {
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a2 + 488))(a2, 2, 0);
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 968))(a2, 0);
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a2 + 1152))(a2, this->attachedTag, 1);
      }
      return 1;
}
} } }

// ==== BACKFILL 0x006EC370  sub_6EC370  cls=AnimTypeClass  sig=csp  renamed_refs=0 ====
char E4Recv_6EC370::sub_6EC370()
{
{
    int v1;
    char result;
    v1 = this->M84;
    result = 1;
    if ( v1 )
  {
    while ( *(char *)(v1 + 981) )
    {
    v1 = *(int *)(v1 + 1496);
    if ( !v1 )
    return result;
    }
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x006EC3A0  TeamClass::WakeUpAllMembers  cls=TeamClass  sig=csp  renamed_refs=0 ====
char TeamClass::WakeUpAllMembers()
{
{
    char result;
    int i;
    result = TeamClass::SelectMember((int)this, 0);
    i = this->firstUnit;
    for ( ; i; i = *(int *)(i + 1496) )
  {
    result = (*(int (__thiscall **)(int, int))(*(int *)(i) + 968))(i, 0);
    *(char *)(i + 1672) = 1;
  }
    return result;
}
}

// ==== BACKFILL 0x006EC3D0  HouseClass::FindBestBuildingToRepair  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { void* HouseClass::FindBestBuildingToRepair() {
{
    int *v1;
    int v2;
    int *v3;
    int v4;
    v1 = (int *)this->repairStationsCount;
    v2 = -1;
    v3 = v1;
    if ( !v1 )
    return 0;
    do
  {
    v4 = *(int *)((*(int (__thiscall **)(int *))(*v1 + 132))(v1) + 1532);
    if ( *((char *)(v1) + 144) && v1[27] && (IKnowWhatImDoing || !*((char *)(v1) + 129)) && (*((char *)(v1) + 1673) || (*(int (__thiscall **)(int *))(*v1 + 44))(v1) == 2) && v4 > v2 )
    {
    v3 = v1;
    v2 = v4;
    }
    v1 = (int *)v1[374];
  }
    while ( v1 );
    return v3;
}
} }

// ==== BACKFILL 0x006EC450  TeamClass::SaveLoad_Prefix  cls=TeamClass  sig=csp  renamed_refs=0 ====
int TeamClass::SaveLoad_Prefix(AbstractClass * aP0, int aP1)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    AbstractClass::InitVtables(aP0, (IUnknown *)&aP1);
    __4type_info_AAEAAV0_ABV0__Z(&aP0[2].referenceCount, (int)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_TeamClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_TeamClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_TeamClass;
    *(int *)&aP0->__pad_0[12] = &vt_TeamClass;
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].__pad_0[4]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].__pad_0[8]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[3].__pad_0[4]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[2].__pad_0[12]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].abstractFlags);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].referenceCount);
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].uniqueId);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].nextArrayIndex);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].__pad_0[12]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].NeedsSaveOrLink);
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x006EC540  TeamClass::SaveLoad_Prefix_0  cls=TeamClass  sig=csp  renamed_refs=0 ====
int TeamClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// ==== BACKFILL 0x006EC560  TeamClass::ddtor  cls=TeamClass  sig=csp  renamed_refs=0 ====
int TeamClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 237448655;
  a2[1] = 298949647;
  a2[2] = -1610610249;
  a2[3] = -777003740;
  return 0;
}

// ==== BACKFILL 0x006ECCE0  TeamClass::MoveToCellAndAttack  cls=TeamClass  sig=csp  renamed_refs=0 ====
namespace gamemd { void TeamClass::MoveToCellAndAttack(int a1, int a2) {
{
      TeamClass *v3;
      AbstractClass *CellFromArray;
      _DWORD *Entry;
      int *firstUnit;
      int v7;
      int *v8;
      int v9;
      int v10;
      AbstractClass *v11;
      _BYTE *focus;
      int v14;
      _DWORD v15[3];
      AbstractClass *aP1a;

      v3 = (TeamClass *)this;
      CellFromArray = (AbstractClass *)ScenarioClass::GetCellFromArray(
                                         *(__int16 **)&HouseClass_Player.__pad_5568[8060],
                                         *(ScenarioClass **)&aP1->__pad_0[4]);
      aP1a = CellFromArray;
      if ( a3 )
        TeamClass::SelectMember((int)v3, CellFromArray);
      if ( !v3->focus )
      {
        Entry = SessionClass::GetEntry((_DWORD *)v3->currentScript, (IUnknown *)&v14);
        v15[0] = *Entry;
        if ( Entry[1] < 0x2BEu )
          TeamClass::SelectMember((int)v3, CellFromArray);
      }
      if ( !(*(_DWORD *)&HouseClass_Player.__pad_5568[23248]
           % (int)Math::RoundToInt(*(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4432) * 900.0)) )
      {
        firstUnit = (int *)v3->firstUnit;
        v7 = -1;
        v8 = firstUnit;
        if ( firstUnit )
        {
          do
          {
            v9 = *(_DWORD *)((*(int (__thiscall **)(int *))(*firstUnit + 132))(firstUnit) + 1532);
            if ( *((_BYTE *)firstUnit + 144)
              && firstUnit[27]
              && (*(_DWORD *)&HouseClass_Player.__pad_5568[21752] || !*((_BYTE *)firstUnit + 129))
              && (*((_BYTE *)firstUnit + 1673) || (*(int (__thiscall **)(int *))(*firstUnit + 44))(firstUnit) == 2)
              && v9 > v7 )
            {
              v8 = firstUnit;
              v7 = v9;
            }
            firstUnit = (int *)firstUnit[374];
          }
          while ( firstUnit );
          v3 = (TeamClass *)this;
        }
        if ( v8 )
        {
          v15[0] = v8[39];
          v10 = *v8;
          v15[1] = v8[40];
          v15[2] = v8[41];
          v11 = (AbstractClass *)(*(int (__thiscall **)(int *, int, _DWORD *, _DWORD))(v10 + 964))(v8, 1, v15, 0);
          if ( v11 )
          {
            TeamClass::SelectMember((int)v3, v11);
          }
          else if ( v3->focus != aP1a )
          {
            TeamClass::SelectMember((int)v3, 0);
          }
        }
      }
      focus = v3->focus;
      if ( focus && (focus[20] & 2) != 0 )
        TeamClass::AttackCoordinator((int *)v3->__pad_0);
      else
        TeamClass::UpdateMembers((int)v3);
}
} }

// ==== BACKFILL 0x006ECFB0  TeamClass::Create  cls=TeamClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int TeamClass::Create(int a1, int a2) {
{
    TeamClass *v4;
    TeamClass *v5;
    FootClass *i;
    v4 = (TeamClass *)__2_YAPAXI_Z(0xA0u);
    if ( v4 )
  {
    v4 = (TeamClass *)MissionClass::Construct( (int)v4, *(int *)(*(int *)&g_NetworkPlayerBuffer.__pad_14B0[440] + 4 * *(int *)(a2 + 4)), this->owner, 0);
    v5 = v4;
  }
    else
  {
    v5 = 0;
  }
    i = (FootClass *)this->firstUnit;
    for ( ; i; i = (FootClass *)this->firstUnit )
  {
    TeamClass::LiberateMember_Start((int)this, (IUnknown *)i, 0xFFFFFFFF, 0);
    LOBYTE(v4) = TeamClass::AddMember((int)v5, (IUnknown *)i, 0);
  }
    if ( this )
    LOBYTE(v4) = this->ProcessEvent(1);
    return (char)v4;
}
} }

// ==== BACKFILL 0x006EDB50  TeamClass::AssignAttackTarget  cls=TeamClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int TeamClass::AssignAttackTarget(int a1, int a2) {
{
    ObjectClass *v4;
    int health;
    AbstractClass *v6;
    FootClass *i;
    int sprayOffsetIndex;
    v4 = (ObjectClass *)(this + 52);
    TeamClass::FindClosestEnemy(this, (AbstractClass *)(this + 52), (AbstractClass *)(this + 56));
    this->focus = *(int *)v4->__pad_0;
    TeamClass::UpdateMembers(this);
    health = (int)AbstractClass::IsTechnoType(*(void **)v4->__pad_0);
    v6 = (AbstractClass *)health;
    if ( health )
  {
    for ( i = *(FootClass **)(this + 84); i; i = (FootClass *)i->nextTeamMember )
    {
    LOBYTE(health) = i->isAliveFlag;
    if ( (char)health )
      {
    health = i->health;
    if ( health )
        {
    if ( *(int *)&g_NetworkPlayerBuffer.__pad_1140[48] || (health = (unsigned char)i->inLimbo, !(char)health) )
          {
    if ( i->isTeamLeader || (health = (*(int (__thiscall **)(FootClass *))(*(int *)i->__pad_0 + 44))(i), health == 2) )
            {
    sprayOffsetIndex = i->sprayOffsetIndex;
    if ( sprayOffsetIndex && sprayOffsetIndex != *(int *)&v6[19].__pad_0[8] )
    (*(void (__thiscall **)(FootClass *, int))(*(int *)i->__pad_0 + 968))(i, 0);
    health = *(int *)&v6[19].__pad_0[8];
    if ( health )
              {
    if ( !i->locomotor[0] )
    WinAPI::Wrapper(-2147467261);
    LOBYTE(health) = (*(int (__stdcall **)(int))(*(int *)i->locomotor[0] + 16))(i->locomotor[0]);
    if ( !(char)health )
                {
    LOBYTE(health) = (*(int (__thiscall **)(FootClass *))(*(int *)i->__pad_0 + 684))(i);
    if ( (char)health )
                  {
    health = (*(int (__thiscall **)(FootClass *))(*(int *)i->__pad_0 + 388))(i);
    if ( health == 5 )
                    {
    (*(void (__thiscall **)(FootClass *, int, int))(*(int *)i->__pad_0 + 488))(i, 1, 0);
    LOBYTE(health) = (*(int (__thiscall **)(FootClass *, int))(*(int *)i->__pad_0 + 968))( i, *(int *)&v6[19].__pad_0[8]);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
    return health;
}
} }

// ==== BACKFILL 0x006EDDC0  sub_6EDDC0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_6EDDC0::sub_6EDDC0(int a2, int a3)
{
{
    int *v4;
    int result;
    v4 = *(int **)(this + 84);
    if ( v4 )
  {
    do
    {
    result = (*(int (__thiscall **)(int *, int))(*v4 + 1312))(v4, *(int *)(a2 + 4));
    v4 = (int *)v4[374];
    }
    while ( v4 );
    this->M128 = 1;
  }
    else
  {
    this->M128 = 1;
  }
    return result;
}
}

// ==== BACKFILL 0x006EDE80  sub_6EDE80  cls=ObjectClass  sig=csp  renamed_refs=0 ====
void E4Recv_6EDE80::sub_6EDE80(int a2, int a3)
{
{
    this->M128 = 1;
}
}

// ==== BACKFILL 0x006EDF10  sub_6EDF10  cls=ObjectClass  sig=csp  renamed_refs=0 ====
void E4Recv_6EDF10::sub_6EDF10(int a2, int a3)
{
{
    int *i;
    int *v5;
    int v6;
    int v7;
    char v8[12];
    for ( i = *(int **)(this + 84); i; i = (int *)i[374] )
  {
    v5 = (int *)(*(int (__thiscall **)(int *, char *))(*i + 72))(i, v8);
    LOWORD(v6) = *v5 / 256;
    HIWORD(v6) = v5[1] / 256;
    v7 = v6;
    MapClass::TriggerEVA((short *)&v7);
  }
    this->M128 = 1;
}
}

// ==== BACKFILL 0x006EDF90  sub_6EDF90  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char E4Recv_6EDF90::sub_6EDF90(int a2, int a3)
{
{
    *(char *)(this->M44 + 494) = 1;
    this->M128 = 1;
    return 1;
}
}

// ==== BACKFILL 0x006EDFB0  sub_6EDFB0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_6EDFB0::sub_6EDFB0(int a2, int a3)
{
{
    int result;
    result = this->M44;
    *(int *)(result + 592) = 4;
    this->M128 = 1;
    return result;
}
}

// ==== BACKFILL 0x006EE050  sub_6EE050  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_6EE050::sub_6EE050(int a2, int a3)
{
{
    int *v4;
    int *v5;
    int result;
    v4 = *(int **)(this + 84);
    if ( v4 )
  {
    do
    {
    v5 = (int *)v4[374];
    (*(void (__thiscall **)(int *))(*v4 + 212))(v4);
    result = (*(int (__thiscall **)(int *))(*v4 + 248))(v4);
    v4 = v5;
    }
    while ( v5 );
    this->M128 = 1;
  }
    else
  {
    this->M128 = 1;
  }
    return result;
}
}

// ==== BACKFILL 0x006EE100  TacticalClass::Get  cls=TacticalClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int TacticalClass::Get(int a1, int a2) {
{
    int *v4;
    int result;
    int v6[2];
    int GroundHeight;
    char v8[12];
    v4 = (int *)(*(int (__thiscall **)(int, char *))(**(int **)(this + 52) + 72))(this->field34, v8);
    v6[0] = *v4;
    v6[1] = v4[1];
    GroundHeight = v4[2];
    GroundHeight = Cell::GetGroundHeight(v6);
    if ( (*((int *)Coord::To_Cell(&DataGlobal_87F7E8, v6) + 80) & 0x100) != 0 || (*((int *)Coord::To_Cell(&DataGlobal_87F7E8, v6) + 80) & 0x400) != 0 )
  {
    GroundHeight += DataGlobal_B0E99C;
  }
    result = TacticalClass::SetPosition(g_TacticalClass_Instance, v6, *(int *)(a2 + 4));
    this->field80 = 1;
    return result;
}
} }

// ==== BACKFILL 0x006EF450  sub_6EF450  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char E4Recv_6EF450::sub_6EF450(int a2, int a3)
{
{
    this->M128 = 1;
    this->M132 = 1;
    return 1;
}
}

// ==== BACKFILL 0x006EF4D0  HouseClass::UpdateProductionQueue  cls=HouseClass  sig=csp  renamed_refs=2 ====
namespace gamemd { int HouseClass::UpdateProductionQueue(int a1) {
{
      int v3;
      int v4;
      int result;
      int v6;
      int v7;
      int v8;
      int v9;
      int v10;
      int v11;
      _DWORD *i;
      int v13;
      int v14;

      v3 = a2;
      v4 = 0;
      result = *(_DWORD *)(this->vtable5 + 228);
      if ( *(int *)(result + 156) > 0 )
      {
        do
        {
          v6 = *(_DWORD *)(result + 8 * v4 + 168);
          v7 = *(_DWORD *)(result + 8 * v4 + 164);
          if ( v7 > 0 )
          {
            a2 = v7;
            do
            {
              v8 = *(_DWORD *)(v3 + 8);
              if ( *(_DWORD *)(v3 + 16) < v8
                || (*(_BYTE *)(v3 + 13) || !v8)
                && (v9 = *(_DWORD *)(v3 + 20), v9 > 0)
                && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v3 + 8))(v3, v8 + v9, 0) )
              {
                v10 = *(_DWORD *)(v3 + 16);
                v11 = *(_DWORD *)(v3 + 4);
                *(_DWORD *)(v3 + 16) = v10 + 1;
                *(_DWORD *)(v11 + 4 * v10) = v6;
              }
              --a2;
            }
            while ( a2 );
          }
          ++v4;
          result = *(_DWORD *)(this->vtable5 + 228);
        }
        while ( v4 < *(_DWORD *)(result + 156) );
      }
      for ( i = (_DWORD *)this->repairStationsCount; i; i = (_DWORD *)i[374] )
      {
        a2 = (*(int (__thiscall **)(_DWORD *))(*i + 132))(i);
        result = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v3 + 16))(v3, &a2);
        if ( result != -1 )
        {
          v13 = *(_DWORD *)(v3 + 16);
          if ( result < v13 )
          {
            v14 = v13 - 1;
            for ( *(_DWORD *)(v3 + 16) = v14;
                  result < *(_DWORD *)(v3 + 16);
                  *(_DWORD *)(*(_DWORD *)(v3 + 4) + 4 * result - 4) = *(_DWORD *)(*(_DWORD *)(v3 + 4) + 4 * result) )
            {
              ++result;
            }
          }
        }
      }
      return result;
}
} }

// ==== BACKFILL 0x006EF610  TeamClass::PlayMemberAnimation  cls=TeamClass  sig=csp  renamed_refs=0 ====
namespace gamemd { void TeamClass::PlayMemberAnimation(ScriptClass * aP1, char a3) {
{
    int v3;
    IUnknown *v4;
    CoordStruct *v5;
    CoordStruct *v6;
    ObjectClass *v7;
    CoordStruct *v8;
    AnimClass *v9;
    char v11[12];
    v3 = *(int *)&aP1->__pad_0[4];
    if ( a3 && (unsigned short)v3 < *(int *)&g_CellDirectionOffsets.__pad_579C[62260] && (v4 = *(IUnknown **)(this + 84), v5 = (CoordStruct *)HIWORD(v3), v6 = *(CoordStruct **)(*(int *)&g_CellDirectionOffsets.__pad_579C[62248] + 4 * (unsigned short)v3), v4) )
  {
    do
    {
    v7 = (ObjectClass *)__2_YAPAXI_Z(0x1C8u);
    if ( v7 )
      {
    v8 = (CoordStruct *)(*(int (__thiscall **)(IUnknown *, char *))(v4->field_0 + 72))(v4, v11);
    v9 = AnimClass::ctor((void **)v7, v6, v8, 0, v5, (void *)0x600, 0, 0);
    if ( v9 )
    BuildingClass::AimTurret(v9, v4);
      }
    v4 = *(IUnknown **)&v4->__pad_524[180];
    }
    while ( v4 );
    this->stepCompleted = 1;
  }
    else
  {
    this->stepCompleted = 1;
  }
}
} }
