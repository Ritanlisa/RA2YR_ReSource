// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00730400  LoadingScreen::FreeResources  cls=LoadingScreen  sig=csp  renamed_refs=0  residual=- ====
int LoadingScreen::FreeResources()
{
{
    int result;
    if ( DataGlobal_B0FC04 )
  {
    __3_YAXPAX_Z(DataGlobal_B0FC04);
    DataGlobal_B0FC04 = 0;
  }
    HashTree::MarkEntry(DataGlobal_844C08);
    if ( DataGlobal_B0FC08 )
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FC08)(DataGlobal_B0FC08, 1);
    DataGlobal_B0FC08 = 0;
  }
    if ( DataGlobal_B0FBFC )
  {
    __3_YAXPAX_Z(DataGlobal_B0FBFC);
    DataGlobal_B0FBFC = 0;
  }
    HashTree::MarkEntry(DataGlobal_844C04);
    if ( DataGlobal_B0FC00 )
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FC00)(DataGlobal_B0FC00, 1);
    DataGlobal_B0FC00 = 0;
  }
    if ( DataGlobal_B0FBF4 )
  {
    __3_YAXPAX_Z(DataGlobal_B0FBF4);
    DataGlobal_B0FBF4 = 0;
  }
    HashTree::MarkEntry(DataGlobal_844C00);
    if ( DataGlobal_B0FBF8 )
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FBF8)(DataGlobal_B0FBF8, 1);
    DataGlobal_B0FBF8 = 0;
  }
    if ( DataGlobal_B0FBE4 )
  {
    __3_YAXPAX_Z(DataGlobal_B0FBE4);
    DataGlobal_B0FBE4 = 0;
  }
    HashTree::MarkEntry(DataGlobal_844BF0);
    if ( DataGlobal_B0FBE8 )
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FBE8)(DataGlobal_B0FBE8, 1);
    DataGlobal_B0FBE8 = 0;
  }
    if ( DataGlobal_B0FBEC )
  {
    __3_YAXPAX_Z(DataGlobal_B0FBEC);
    DataGlobal_B0FBEC = 0;
  }
    result = HashTree::MarkEntry(DataGlobal_844BF4);
    if ( DataGlobal_B0FBF0 )
  {
    result = (**(int (__thiscall ***)(int, int))DataGlobal_B0FBF0)(DataGlobal_B0FBF0, 1);
    DataGlobal_B0FBF0 = 0;
  }
    return result;
}
}

// ==== BACKFILL 0x00730970  WinMainSetup_Setup_730970  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_730970()
{
{
    int result;
    if ( g_UnitTooltipState )
  {
    result = (**(int (__thiscall ***)(int, int))g_UnitTooltipState)(g_UnitTooltipState, 1);
    g_UnitTooltipState = 0;
  }
    return result;
}
}

// ==== BACKFILL 0x007313A0  TacticalClass::ResetView  cls=TacticalClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int TacticalClass::ResetView() {
{
      int i;
      int v3;
      char IsHumanPlayer;
      int result;

      TacticalClass::SetObserverMode(&DataGlobal_87F7E8, 0);
      TacticalClass::SetDisplayMode(&DataGlobal_87F7E8, 0, 0);
      BuildingClass::TogglePower2(&DataGlobal_87F7E8, 0);
      BuildingClass::TogglePower(&DataGlobal_87F7E8, 0);
      MapClass::ToggleZoom((int *)&DataGlobal_87F7E8, 0);
      if ( g_SelectionManager
        && (!*(_DWORD *)g_ObjectClass_CurrentCount
         || (*(_BYTE *)(*(_DWORD *)g_ObjectClass_CurrentCount + 20) & 4) == 0
         || *(char **)(*(_DWORD *)g_ObjectClass_CurrentCount + 532) != this - 1) )
      {
        SuperWeaponClass::UpdateAll();
      }
      for ( i = 0; i < g_SidebarState; ++i )
      {
        v3 = *((_DWORD *)g_TechnoClass_Count + i);
        if ( v3 && !*(_BYTE *)(v3 + 129) && *(char **)(v3 + 532) == this - 1 )
        {
          if ( g_GameMode_Current[0] )
            IsHumanPlayer = House::IsHumanPlayer(*(#375 **)(v3 + 540));
          else
            IsHumanPlayer = *(_BYTE *)(*(_DWORD *)(v3 + 540) + 493);
          if ( IsHumanPlayer && !*(_BYTE *)(v3 + 131) )
          {
            (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 332))(v3);
            g_MoveFeedback = 0;
          }
        }
      }
      TacticalClass::InterpolateView();
      result = MapClass::MarkForRedraw(&DataGlobal_87F7E8, 1);
      g_MoveFeedback = 1;
      return result;
}
} }

// ==== BACKFILL 0x00731CB0  Map_Handle_731CB0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_731CB0()
{
return 71;
}

// ==== BACKFILL 0x00731CC0  Map_Handle_731CC0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_731CC0()
{
return 22;
}

// ==== BACKFILL 0x00731D00  Selection::SetCurrent  cls=Selection  sig=csp  renamed_refs=0  residual=- ====
void Selection::SetCurrent()
{
{
    DataGlobal_B0FE54 = (int)this;
    DataGlobal_B0FE58 = 0;
}
}

// ==== BACKFILL 0x00731D90  FillUnitTooltipUI  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wchar_t * FillUnitTooltipUI(wchar_t * Destination, wchar_t * Source)
{
{
    wchar_t *v2;
    const wchar_t *v3;
    wchar_t *v4;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    wchar_t *StringCSF;
    wchar_t *v12;
    CampaignScore *v13;
    CampaignScore Destinationa[5];
    v2 = Destination;
    if ( *(int *)(*(int *)&DataGlobal_B05488.__pad_579C[21064] + 16) && Source )
  {
    wcscpy((wchar_t *)Destinationa, Source);
    _wcsupr(Destinationa);
    v3 = *(const wchar_t **)&HouseClass_Player.__pad_5568[23060];
    if ( *(int *)&HouseClass_Player.__pad_5568[23060] )
    {
    v6 = 0;
    v7 = 0;
    if ( *(int *)&HouseClass_Player.__pad_5568[23060] > 0 )
      {
    do
        {
    v8 = *(int *)(*(int *)&HouseClass_Player.__pad_5568[23048] + 4 * v7);
    if ( v8 )
          {
    if ( (*(char *)(v8 + 20) & 1) != 0 )
            {
    v9 = *(int *)(v8 + 540);
    v10 = (*(int (__thiscall **)(int))(*(int *)(v8) + 136))(v8);
    v6 += (*(int (__thiscall **)(int, int))(*(int *)(v10) + 132))(v10, v9);
    v2 = Destination;
            }
          }
    ++v7;
        }
    while ( v7 < (int)v3 );
      }
    StringCSF = GetStringCSF((wchar_t *)&DataGlobal_830620.__pad_579C[63536], 0, &DataGlobal_830620.__pad_579C[63452], 1052);
    return (wchar_t *)swprintf(v2, (const size_t)StringCSF, v3, Destinationa);
    }
    else
    {
    v4 = GetStringCSF((wchar_t *)&DataGlobal_830620.__pad_579C[63552], 0, &DataGlobal_830620.__pad_579C[63452], 1032);
    return (wchar_t *)swprintf(v2, (const size_t)v4, (const wchar_t *const)Destinationa, v13);
    }
  }
    else
  {
    v12 = GetStringCSF((wchar_t *)&DataGlobal_830620.__pad_579C[63520], 0, &DataGlobal_830620.__pad_579C[63452], 1022);
    return wcscpy(v2, v12);
  }
}
}

// ==== BACKFILL 0x00732210  SelectFactionThemeMusic_Helper  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_732210(int a1, const char * a2)
{
{
    int v2;
    int v3;
    const char **i;
    v2 = *(int *)(a1 + 16);
    v3 = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = *(const char ***)(a1 + 4); strcmp(a2, *i); ++i )
  {
    if ( ++v3 >= v2 )
    return -1;
  }
    return v3;
}
}

// ==== BACKFILL 0x007325C0  sub_7325C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
BOOL E4Recv_7325C0::sub_7325C0()
{
{
    return this->Vf44() != 6 && *(char *)(this->Vf132() + 3516)
    && this->Vf316();
}
}

// ==== BACKFILL 0x00732600  PlayerClass::UpdateAIUnits  cls=PlayerClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int PlayerClass::UpdateAIUnits() {
{
      int HeightMap;
      _DWORD *v2;
      int v3;
      int v4;
      int v5;
      int v6;
      int v7;
      _DWORD *v8;
      int v9;
      int i;
      int v11;
      int j;
      int v13;
      int v16;

      if ( DataGlobal_B0FE64 )
      {
        HeightMap = (int)__2_YAPAXI_Z(0x18u);
        v2 = (_DWORD *)HeightMap;
        v3 = 0;
        if ( HeightMap )
        {
          LOBYTE(HeightMap) = (unsigned __int8)EventClass::resetEvent((_DWORD *)HeightMap, 0, 0);
          *v2 = &vt_DynamicVectorClass_TechnoClass;
          v2[5] = 10;
          v2[4] = 0;
        }
        else
        {
          v2 = 0;
        }
        v4 = g_SidebarState;
        if ( g_SidebarState > 0 )
        {
          do
          {
            v5 = *((_DWORD *)g_TechnoClass_Count + v3);
            LOBYTE(HeightMap) = StepTechnoClassCleanupIfHuman(v5, this);
            if ( (_BYTE)HeightMap )
            {
              v6 = v2[2];
              if ( v2[4] < v6
                || ((LOBYTE(HeightMap) = *((_BYTE *)v2 + 13), (_BYTE)HeightMap) || !v6)
                && (HeightMap = v2[5], HeightMap > 0)
                && (LOBYTE(HeightMap) = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*v2 + 8))(v2, v6 + HeightMap, 0),
                    (_BYTE)HeightMap) )
              {
                HeightMap = v2[4];
                v7 = v2[1];
                v2[4] = HeightMap + 1;
                *(_DWORD *)(v7 + 4 * HeightMap) = v5;
              }
            }
            ++v3;
          }
          while ( v3 < v4 );
        }
      }
      else
      {
        v8 = __2_YAPAXI_Z(0x18u);
        v2 = v8;
        if ( v8 )
        {
          EventClass::resetEvent(v8, 0, 0);
          *v2 = &vt_DynamicVectorClass_TechnoClass;
          v2[5] = 10;
          v2[4] = 0;
        }
        else
        {
          v2 = 0;
        }
        HeightMap = GetHeightMap(g_TacticalClass_Instance);
        v9 = HeightMap;
        for ( i = 0; i < v9; ++i )
        {
          HeightMap = GetCoordDataMap(i);
          if ( HeightMap )
          {
            if ( (*(_BYTE *)(HeightMap + 20) & 1) != 0 )
            {
              v16 = HeightMap;
              LOBYTE(HeightMap) = StepTechnoClassCleanupIfHuman(HeightMap, this);
              if ( (_BYTE)HeightMap )
                LOBYTE(HeightMap) = DynamicVector::AddItem(v2, &v16);
            }
          }
        }
      }
      v11 = v2[4];
      for ( j = 0; j < v11; ++j )
      {
        v13 = *(_DWORD *)(v2[1] + 4 * j);
        LOBYTE(HeightMap) = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 336))(v13);
      }
      if ( v2 )
        LOBYTE(HeightMap) = (*(int (__thiscall **)(_DWORD *, int))*v2)(v2, 1);
      return HeightMap;
}
} }

// ==== BACKFILL 0x00732C30  IDTechnoClassMatches  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char IDTechnoClassMatches(void * a1, int a2)
{
{
    int v3;
    int v4;
    v3 = *(int *)(a2 + 16);
    v4 = 0;
    if ( v3 <= 0 )
    return 0;
    while ( !(unsigned char)ObjectClass::StepCleanup(a1, *(void **)(*(int *)(a2 + 4) + 4 * v4)) || !(*(unsigned char (__thiscall **)(void *))(*(int *)(a1) + 316))(a1) && (!a1 || (*(int (__thiscall **)(void *))(*(int *)(a1) + 44))(a1) != 6 || !*(int *)((*(int (__thiscall **)(void *))(*(int *)(a1) + 132))(a1) + 1032)) )
  {
    if ( ++v4 >= v3 )
    return 0;
  }
    return 1;
}
}

// ==== BACKFILL 0x00733160  AbstractClass::processRadarEvent  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { void AbstractClass::processRadarEvent() {
{
      int v2;
      int v3;
      void **i;
      int v5;
      int v6;

      v2 = g_UnitTooltipState;
      if ( g_UnitTooltipState )
      {
        v3 = *(_DWORD *)(g_UnitTooltipState + 16) - 1;
        if ( v3 >= 0 )
        {
          for ( i = (void **)(*(_DWORD *)(g_UnitTooltipState + 4) + 4 * v3); *i != this; --i )
          {
            if ( --v3 < 0 )
              return;
          }
          v5 = *(_DWORD *)(g_UnitTooltipState + 16);
          if ( v3 < v5 )
          {
            v6 = v5 - 1;
            *(_DWORD *)(g_UnitTooltipState + 16) = v6;
            if ( v3 < v6 )
            {
              do
              {
                ++v3;
                *(_DWORD *)(*(_DWORD *)(v2 + 4) + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)(v2 + 4) + 4 * v3);
              }
              while ( v3 < *(_DWORD *)(v2 + 16) );
            }
          }
        }
      }
}
} } }

// ==== BACKFILL 0x00733C60  Object_Helper_733C60  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL sub_733C60(int a1, const char * a2)
{
{
    const char *v4;
    v4 = (const char *)((*(int (__thiscall **)(int))(*(int *)(a1) + 136))(a1) + 36);
    return a2 && !strcmp(v4, a2) && (*(unsigned char (__thiscall **)(int))(*(int *)(a1) + 316))(a1);
}
}

// ==== BACKFILL 0x00734250  SidebarClass::registerBuildingType  cls=SidebarClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { int SidebarClass::registerBuildingType() {
{
      int result;

      result = this->SidebarClass_field_0x520;
      if ( *(_DWORD *)(result + 3592) == 5 )
        DataGlobal_B0FE60 = (int)this;
      else
        DataGlobal_B0FE5C = (int)this;
      return result;
}
} }

// ==== BACKFILL 0x00734270  Selection::ClearGlobals  cls=Selection  sig=csp  renamed_refs=0  residual=- ====
int Selection::ClearGlobals()
{
{
    int result;
    result = 0;
    if ( this )
  {
    if ( this == (void *)DataGlobal_B0FE5C )
    {
    DataGlobal_B0FE5C = 0;
    }
    else if ( this == (void *)DataGlobal_B0FE60 )
    {
    DataGlobal_B0FE60 = 0;
    }
  }
    else
  {
    DataGlobal_B0FE5C = 0;
    DataGlobal_B0FE60 = 0;
  }
    return result;
}
}

// ==== BACKFILL 0x007342D0  DynamicVector::Constructor_Techno  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
unsigned int * DynamicVector::Constructor_Techno(int a2, int a3)
{
{
    this->Items = 0;
    this->DynamicVector_field_0x8 = a2;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_TechnoClass;
    if ( a2 )
  {
    if ( a3 )
    {
    this->Items = a3;
    }
    else
    {
    this->Items = __2_YAPAXI_Z(4 * a2);
    this->IsAllocated = 1;
    }
  }
    *(void**)this = &vt_DynamicVectorClass_TechnoClass;
    this->CapacityIncrement = 10;
    this->DynamicVector_field_0x10 = 0;
    return this;
}
}

// ==== BACKFILL 0x007343E0  TacticalClass::updateScroll  cls=TacticalClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* TacticalClass::updateScroll(int a1, int a2) {
{
      this->q004 = 0;
      this->q008 = a2;
      this->q00C = 1;
      this->q00D = 0;
      *this = &vt_VectorClass_char_const;
      if ( a2 )
      {
        if ( a3 )
        {
          this->q004 = a3;
          return this;
        }
        this->q004 = __2_YAPAXI_Z(4 * a2);
        this->q00D = 1;
      }
      return this;
}
} }

// ==== BACKFILL 0x00734FE0  WideMessageBox  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int WideMessageBox(CampaignScore * aP0, const WCHAR * a1, LPCWCH lpWideCharStr, UINT uType)
{
{
    CHAR Caption[2048];
    CHAR MultiByteStr[5120];
    WideCharToMultiByte(0, 0, a1, -1, MultiByteStr, 5120, 0, 0);
    WideCharToMultiByte(0, 0, lpWideCharStr, -1, Caption, 2048, 0, 0);
    return MessageBoxA((HWND)aP0, MultiByteStr, Caption, uType);
}
}

// ==== BACKFILL 0x00735060  BulkCharToWide  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned char CharToWide_Bulk(unsigned short * a1, unsigned char * a2, int a3)
{
{
    unsigned char result;
    for ( result = *a2; *a2; result = *a2 )
  {
    if ( !a3 )
    break;
    *a1++ = result;
    ++a2;
    if ( a3 != -1 )
    --a3;
  }
    *a1 = 0;
    return result;
}
}

// ==== BACKFILL 0x00735090  CopyWideToChar  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void WideToChar_Copy(unsigned char * a1, char * a2, int a3)
{
{
    char v4;
    while ( *(short *)a2 )
  {
    if ( !a3 )
    break;
    v4 = *a2;
    a2 += 2;
    *a1++ = v4;
    if ( a3 != -1 )
    --a3;
  }
    *a1 = 0;
}
}

// ==== BACKFILL 0x007350C0  ToWideStringChar  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * ToWideStringChar(IUnknown * aP0)
{
{
    char *result;
    int v2;
    char *v3;
    char v4;
    if ( !aP0 )
    return 0;
    result = &DataGlobal_B05488.__pad_579C[1024 * DataGlobal_B1CF90 + 21104];
    v2 = 1024;
    v3 = result;
    while ( LOWORD(aP0->field_0) )
  {
    if ( !v2 )
    break;
    v4 = aP0->field_0;
    aP0 = (IUnknown *)((char *)(aP0) + 2);
    *v3++ = v4;
    if ( v2 != -1 )
    --v2;
  }
    *v3 = 0;
    result[1023] = 0;
    DataGlobal_B1CF90 = ((char)DataGlobal_B1CF90 + 1) & 7;
    return result;
}
}

// ==== BACKFILL 0x00736C10  sub_736C10  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_736C10::sub_736C10()
{
{
    int v2;
    int v4[3];
    if ( this->Vf388() != 5 )
    return 0;
    v4[0] = this->M156;
    v4[1] = this->M160;
    v4[2] = this->M164;
    if ( Tactical::IsCellVisible(&DataGlobal_87F7E8, v4) || !(unsigned char)this->M981 )
    return 0;
    v2 = this->M1492;
    if ( v2 )
    *(char *)(v2 + 130) = 1;
    this->Vf928();
    this->Vf248();
    return 1;
}
}
