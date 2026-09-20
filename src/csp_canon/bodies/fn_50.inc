// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00500200  BuildingPlacement::FindPosition  cls=unknown  sig=csp  renamed_refs=0 ====
unsigned int * BuildingPlacement::FindPosition(int * a0, IUnknown * aP1, IUnknown a3)
{
{
    int *v3;
    IUnknown *v4;
    int *v5;
    int v6;
    int v7;
    int v8;
    int *AttackCoords;
    int *v10;
    int v11;
    int v12;
    IUnknown *TileIndex;
    int v14;
    short v16[2];
    int v17;
    char v18[12];
    int v19;
    v4 = aP1;
    v5 = v3;
    v6 = (*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 732))(aP1);
    v7 = (*(int (__thiscall **)(IUnknown *))(v4->field_0 + 728))(v4) + v6;
    if ( (*(int (__thiscall **)(IUnknown *))(v4->field_0 + 724))(v4) + v7 )
    v8 = Random::Range((int *)(*(int *)&HouseClass_Player.__pad_5568[8060] + 536), (IUnknown *)1, (IUnknown *)4);
    else
    v8 = 0;
    AttackCoords = HouseClass::GenerateAttackCoords(v5, (MouseClass *)&aP1, v8);
    v10 = &v4->field_9C;
    v17 = *AttackCoords;
    v11 = v4->field_9C;
    v16[0] = 0;
    v12 = *(int *)v4->__pad_A0;
    v16[1] = 0;
    v19 = v10[2];
    LOWORD(aP1) = v11 / 256;
    HIWORD(aP1) = v12 / 256;
    TileIndex = (IUnknown *)MapClass::GetTileIndex(&DataGlobal_87C374.__pad_14B0[8132], (IUnknown *)&aP1, 0, 0);
    v14 = *LayerClass::Pathfinding_Find( (IUnknown *)&DataGlobal_87C374.__pad_14B0[8132], (IUnknown *)v18, (IUnknown *)v18, (IUnknown *)&v17, (IUnknown *)1, TileIndex, 0, 0, (IUnknown *)1, (IUnknown *)1, 0, 0, 0, (IUnknown *)1, (IUnknown *)v16, 0, 0);
    *a0 = v14;
    return a0;
}
}

// ==== BACKFILL 0x00500300  CellClass::ScanOccupiers  cls=CellClass  sig=csp  renamed_refs=5 ====
namespace gamemd { void* CellClass::ScanOccupiers(void* a1) {
{
      _DWORD *v3;
      int v4;
      int v5;
      int *v6;
      _DWORD *v7;
      InfantryTypeClass *Building;
      InfantryTypeClass *v9;
      int v10;
      int v11;
      bool v12;
      AbstractClass *v13;
      ObjectClass *v14;
      _DWORD *v15;
      int v16;
      int v17;
      double v18;
      int v19;
      _DWORD *result;
      int v21;
      int v22;
      int v24;
      InfantryTypeClass *v25;
      int v26;
      int v27;
      int v28;
      int v29;
      char v30[12];
      char v31[12];
      __int16 aP1a;
      __int16 aP1_2;

      v3 = this;
      v25 = 0;
      v4 = *(_DWORD *)aP1->__pad_0 / 256;
      v5 = *(_DWORD *)&aP1->__pad_0[4] / 256;
      v22 = 0;
      aP1a = v4;
      aP1_2 = v5;
      v6 = DataGlobal_ABD490;
      v24 = 369;
      while ( 1 )
      {
        LOWORD(v21) = *(_WORD *)v6 + v4;
        HIWORD(v21) = v5 + *((_WORD *)v6 + 1);
        v26 = v21;
        v7 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v26);
        Building = (InfantryTypeClass *)CellClass::FindBuilding(v7, 1);
        v9 = Building;
        if ( Building && !Building->Name[29] )
        {
          v10 = (*(int (__thiscall **)(InfantryTypeClass *))(*(_DWORD *)Building->vtable1 + 60))(Building);
          if ( !v10
            || (_DWORD *)v10 != v3
            && ((v11 = *(_DWORD *)(v10 + 48), v11 != v3[12])
              ? (v11 == -1
               ? (v12 = 0)
               : (v12 = (v3[5602] & (1 << v11)) != 0))
              : (v12 = 1),
                !v12) )
          {
            v13 = *(AbstractClass **)&v9->AlphaImageFile[9];
            v14 = (ObjectClass *)(*(int (__thiscall **)(InfantryTypeClass *, char *))(*(_DWORD *)v9->vtable1 + 72))(v9, v30);
            if ( PathfindingClass::FindPath(v13, v14) == -1
              && (*(int (__thiscall **)(InfantryTypeClass *))(*(_DWORD *)v9->vtable1 + 456))(v9) >= -20
              && *(_DWORD *)&v9->AlphaImageFile[13] != 2 )
            {
              v15 = (_DWORD *)(*(int (__thiscall **)(InfantryTypeClass *, char *))(*(_DWORD *)v9->vtable1 + 72))(v9, v31);
              v16 = *(_DWORD *)&aP1->__pad_0[4];
              v27 = *(_DWORD *)aP1->__pad_0 - *v15;
              v17 = *(_DWORD *)&aP1->__pad_0[8];
              v28 = v16 - v15[1];
              v29 = v17 - v15[2];
              v18 = Math::Sqrt((double)v27 * (double)v27 + (double)v29 * (double)v29 + (double)v28 * (double)v28);
              v19 = Math::RoundToInt(v18);
              if ( !v22 || v19 < v22 )
              {
                v22 = v19;
                v25 = v9;
              }
            }
            v3 = this;
          }
        }
        ++v6;
        if ( !--v24 )
          break;
        LOWORD(v5) = aP1_2;
        LOWORD(v4) = aP1a;
      }
      result = v25->vtable1;
      if ( !v25 )
        return 0;
      return result;
}
} }

// ==== BACKFILL 0x00500510  HouseClass::GetBuildLimit  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int HouseClass::GetBuildLimit(int a1, int a2, int a3) {
{
    int result;
    switch ( a2 )
  {
    case 1: case 40: if ( (char)aP2 )
    result = this->primaryForShips;
    else
    result = this->primaryForVehicles;
    break;
    case 2: case 3: result = this->primaryForAircraft;
    break;
    case 6: case 7: if ( aP3 == (ControlClass *)5 )
    result = this->primaryForDefenses;
    else
    result = this->primaryForBuildings;
    break;
    case 15: case 16: result = this->primaryForInfantry;
    break;
    default: result = 0;
    break;
  }
    return result;
}
} }

// ==== BACKFILL 0x00500700  SidebarClass::getTypeProductionCount  cls=SidebarClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int SidebarClass::getTypeProductionCount(int a1, int a2, int a3) {
{
      char result;

      switch ( a2 )
      {
        case 1:
        case 40:
          if ( a3 )
            result = this->q53D3;
          else
            result = this->q53D2;
          break;
        case 2:
        case 3:
          result = this->q53D0;
          break;
        case 6:
        case 7:
          if ( a4 == 5 )
            result = this->q53D8;
          else
            result = this->q53D4;
          break;
        case 15:
        case 16:
          result = this->q53D1;
          break;
        default:
          result = 0;
          break;
      }
      return result;
}
} }

// ==== BACKFILL 0x005009B0  HouseClass::LoadTypeList  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int HouseClass::LoadTypeList() {
{
      CCINIClass *v2;
      unsigned __int8 *StringByIndex;
      CCINIClass *v4;
      int v5;
      CCINIClass *v6;
      IUnknown *result;
      int v8;
      bool v9;
      int v10;
      int i;
      int v12;
      int v13;
      int KeyCount;
      char Source[20];
      char Destination[20];
      char v17;

      v2 = 0;
      KeyCount = INIClass::GetKeyCount(this, (INIClass *)&g_INI_Key_Country.headNode[1]);
      if ( KeyCount > 0 )
      {
        do
        {
          StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(
                                               this,
                                               (CCINIClass *)&g_INI_Key_Country.headNode[1],
                                               v2);
          INIClass::GetString(
            (unsigned __int8 ***)this,
            (INIClass *)&g_INI_Key_Country.headNode[1],
            StringByIndex,
            (INIClass *)&DataGlobal_87F8E4.__pad_5568[20760],
            (INIClass *)Source,
            20);
          v4 = (CCINIClass *)SuperWeaponTypeClass::FindOrCreate(
                               (unsigned __int8 ***)this,
                               (INIClass *)Source,
                               (unsigned __int8 *)&g_INI_Key_Country,
                               (CCINIClass *)0xFFFFFFFF);
          if ( v4 == (CCINIClass *)-1 )
            v4 = 0;
          v5 = __2_YAPAXI_Z(0x160B8u);
          if ( v5 )
            v6 = (CCINIClass *)HouseClass::Construct(v5, *((CCINIClass **)g_SuperWeaponTypeCount + (_DWORD)v4));
          else
            v6 = 0;
          if ( Source )
          {
            strncpy(Destination, Source, 0x14u);
            v17 = 0;
          }
          else
          {
            Destination[0] = (unsigned __int8)Source;
          }
          if ( Destination != (char *)&v6[1023].CCINIClass_field_4C )
          {
            qmemcpy(&v6[1023].CCINIClass_field_4C, Destination, 0x14u);
            LOBYTE(v6[1024].headNode[1]) = v17;
          }
          v2 = (CCINIClass *)((char *)v2 + 1);
        }
        while ( (int)v2 < KeyCount );
      }
      result = HouseClass_Count;
      v8 = 0;
      v9 = HouseClass_Count == 0;
      if ( (int)HouseClass_Count > 0 )
      {
        do
        {
          v10 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v8];
          HouseClass::ReadFromINI(v10, (unsigned __int8 ***)this);
          if ( !g_GameMode_Current )
          {
            if ( *(_BYTE *)(v10 + 492) || *(_BYTE *)(v10 + 493) )
              HouseClass::SetCombatPower(v10, (IUnknown *)g_ScenarioClass_Instance->difficulty2);
            else
              HouseClass::SetCombatPower(v10, (IUnknown *)g_ScenarioClass_Instance->elapsedTimer[0]);
          }
          result = HouseClass_Count;
          ++v8;
        }
        while ( v8 < (int)HouseClass_Count );
        v9 = HouseClass_Count == 0;
      }
      if ( v9 )
      {
        result = (IUnknown *)g_SuperWeaponTypeArray;
        for ( i = 0; i < g_SuperWeaponTypeArray; ++i )
        {
          v12 = __2_YAPAXI_Z(0x160B8u);
          if ( v12 )
            v13 = HouseClass::Construct(v12, *((CCINIClass **)g_SuperWeaponTypeCount + i));
          else
            v13 = 0;
          HouseClass::ReadFromINI(v13, (unsigned __int8 ***)this);
          result = (IUnknown *)g_SuperWeaponTypeArray;
        }
      }
      return result;
}
} }

// ==== BACKFILL 0x00501160  CCINIClass::WriteHouses  cls=CCINIClass  sig=csp  renamed_refs=0 ====
IUnknown * CCINIClass::WriteHouses()
{
{
    IUnknown *result;
    INIClass *i;
    int v4;
    INIClass Source;
    INIClass::ClearSection((int)this, (INIClass *)&g_INI_Key_Country.headNode[1], 0);
    result = HouseClass_Count;
    for ( i = 0; (int)i < (int)HouseClass_Count; i = (INIClass *)((char *)(i) + 1) )
  {
    strcpy(Source.__pad_0, (const char *)(*(int *)&HouseClass_Array->__pad_0[4 * (int)i] + 90100));
    sprintf(Source.__pad_20, g_Str_Trace__d, i);
    INIClass::SetString(this->__pad_0, (INIClass *)&g_INI_Key_Country.headNode[1], (INIClass *)Source.__pad_20, &Source);
    result = HouseClass_Count;
  }
    v4 = 0;
    if ( (int)result > 0 )
  {
    do
    {
    HouseClass::SaveToINI(*(int *)&HouseClass_Array->__pad_0[4 * v4], this);
    result = HouseClass_Count;
    ++v4;
    }
    while ( v4 < (int)HouseClass_Count );
  }
    return result;
}
}

// ==== BACKFILL 0x00501210  HouseClass::SaveToINI  cls=HouseClass  sig=csp  renamed_refs=1 ====
namespace gamemd { int HouseClass::SaveToINI(void* a1) {
{
      INIClass *v4;
      int v5;
      HouseClass *v6;
      int v7;
      char Block[20];
      INIClass *aP1a;

      strcpy(Block, (const char *)(this + 90100));
      INIClass::ClearSection((int)aP1, (INIClass *)Block, 0);
      INIClass::SetString(aP1->__pad_0, (INIClass *)Block, &g_INI_Key_Country, (INIClass *)(this->relatedTagsCapacity + 36));
      INIClass::SetInt(aP1->__pad_0, (unsigned __int8 *)Block, aTechlevel[0].__pad_0, this->q1D4, 0);
      INIClass::SetInt(aP1->__pad_0, (unsigned __int8 *)Block, aCredits[0].__pad_0, this->q1DC / 100, 0);
      INIClass::SetInt(aP1->__pad_0, (unsigned __int8 *)Block, g_INI_Key_IQ.__pad_0, this->__pad_1D0, 0);
      HouseClass::updateBuildingProduction(aP1->__pad_0, (INIClass *)Block, aEdge, *(CCINIClass **)(this + 480));
      LOBYTE(v4) = this->playerControl;
      INIClass::SetBool(aP1->__pad_0, (INIClass *)Block, (char *)&g_INI_Key_IQ.unknown50, v4);
      HouseClass::WriteBuildingTypeNameToINI(
        aP1->__pad_0,
        (INIClass *)Block,
        stru_81B138.__pad_0,
        this->startingCell);
      v5 = 0;
      if ( (int)HouseClass_Count > 0 )
      {
        v6 = HouseClass_Array;
        aP1a = (INIClass *)HouseClass_Count;
        do
        {
          v7 = *(_DWORD *)(*(_DWORD *)v6->__pad_0 + 48);
          if ( (this->q1D8 & (1 << v7)) != 0 )
            v5 |= 1 << v7;
          v6 = (HouseClass *)((char *)v6 + 4);
          aP1a = (INIClass *)((char *)aP1a - 1);
        }
        while ( aP1a );
      }
      HouseClass::WriteHouseListToINI(aP1->__pad_0, (CCINIClass *)Block, (char *)g_INI_Key_Country.sectionHead, v5);
      if ( this->q16009 )
        INIClass::SetString(aP1->__pad_0, (INIClass *)Block, &g_INI_Key_UIName, (INIClass *)(this + 90121));
      return HouseClass::SaveTriggerNodeData((int *)(this + 22272), (CCINIClass *)aP1, (unsigned __int8 *)Block);
}
} }

// ==== BACKFILL 0x005013A0  VectorClass_ptr_BuildChoiceClass_int_ouseClass::ScalarDeletingDestructor  cls=HouseClass  sig=csp  renamed_refs=0 ====
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

// ==== BACKFILL 0x00501AA0  sub_501AA0  cls=unknown  sig=csp  renamed_refs=0 ====
unsigned int * sub_501AA0(unsigned int * a1, int a2, int a3)
{
{
    *a1 = 0;
    return a1;
}
}

// ==== BACKFILL 0x005024F0  VectorClass_ptr_BuildChoiceClass_int_ouseClass::StubReturnNullPointer  cls=HouseClass  sig=csp  renamed_refs=0 ====
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

// ==== BACKFILL 0x00502550  VectorClass_ptr_BuildChoiceClass_int_ouseClass::StubReturnNullPointer_0  cls=HouseClass  sig=csp  renamed_refs=0 ====
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

// ==== BACKFILL 0x00502A80  HouseClass::RegisterGain_0  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int HouseClass::RegisterGain_0(void* a1, int a2) {
{
      int v4;
      int v5;
      int v6;
      int v7;
      int PowerDrain;
      int v9;
      int v10;
      int v11;
      int v12;
      int v13;
      int v14;
      int v15;
      int v16;
      int v17;
      int v18;
      int v19;
      _DWORD v21[4];

      if ( *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1) + 1516) )
        ++this->q158;
      if ( *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1) + 1517) )
        ++this->q15C;
      v4 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 44))(aP1) - 1;
      switch ( v4 )
      {
        case 0:
          if ( *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1) + 3478)
            || *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1) + 3416) )
          {
            v17 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1);
            this->q160B0 += (*(int (__thiscall **)(int, int))(*(_DWORD *)v17 + 132))(v17, this);
          }
          else
          {
            v16 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1);
            this->q160AC += (*(int (__thiscall **)(int, int))(*(_DWORD *)v16 + 132))(v16, this);
          }
          v18 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1);
          v19 = (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 64))(v18);
          LOBYTE(v4) = RefCount::Increment((_DWORD *)(this + 21860), v19);
          break;
        case 1:
          v9 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1);
          this->q160B0 += (*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 132))(v9, this);
          v4 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1);
          if ( !*(_BYTE *)(v4 + 3231) )
          {
            v10 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1);
            v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 64))(v10);
            LOBYTE(v4) = RefCount::Increment((_DWORD *)(this + 21900), v11);
          }
          break;
        case 5:
          v4 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1);
          if ( !*(_BYTE *)(v4 + 3231) )
          {
            v5 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1);
            v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 64))(v5);
            LOBYTE(v4) = RefCount::Increment((_DWORD *)(this + 21840), v6);
          }
          if ( aP1 )
          {
            v4 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 44))(aP1);
            if ( v4 == 6 )
            {
              v7 = *(_DWORD *)aP1[1].__pad_0;
              if ( *(_BYTE *)(v7 + 5821) && !*(_BYTE *)(v7 + 3278) )
                ++this->q160;
              PowerDrain = BuildingClass::GetPowerDrain(aP1);
              HouseClass::NotifyPowerStateChange((_DWORD *)this, PowerDrain);
              this->totalStorage += *(_DWORD *)(*(_DWORD *)aP1[1].__pad_0 + 2048);
              LOBYTE(v4) = (unsigned __int8)HouseClass::AccumulateFloat4(
                                              (float *)(this + 764),
                                              v21,
                                              (int)&aP1->tiltSidewaysAngle);
            }
          }
          break;
        case 14:
          if ( *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1) + 3478) )
          {
            v12 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1);
            this->q160B0 += (*(int (__thiscall **)(int, int))(*(_DWORD *)v12 + 132))(v12, this);
          }
          else
          {
            v13 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1);
            this->q160A8 += (*(int (__thiscall **)(int, int))(*(_DWORD *)v13 + 132))(v13, this);
          }
          LOBYTE(v4) = BYTE1(aP1[1].airstrikeTintTimer[0]);
          if ( !(_BYTE)v4 )
          {
            v4 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1);
            if ( !*(_BYTE *)(v4 + 3231) )
            {
              v14 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1);
              v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 64))(v14);
              LOBYTE(v4) = RefCount::Increment((_DWORD *)(this + 21880), v15);
            }
          }
          break;
        default:
          return v4;
      }
      return v4;
}
} }

// ==== BACKFILL 0x00502D60  HouseClass::UpdatePowerTimers  cls=HouseClass  sig=csp  renamed_refs=4 ====
namespace gamemd { int HouseClass::UpdatePowerTimers(void* a1) {
{
      int v3;
      int v4;
      int v5;
      int v6;
      int v7;
      int v8;
      int v9;
      int v10;
      int v11;
      int v12;
      int v13;
      int v14;

      AbstractClass::ProcessPower((#378 *)this);
      Power::TimerProcess(this->q184);
      Power::TimerProcess(*(_DWORD *)(this->relatedTagsCapacity + 184));
      Checksummer::Add_double(this->q188, this->q18C);
      Checksummer::Add_double(this->q190, this->__pad_194);
      Checksummer::Add_double(this->q198, this->q19C);
      Checksummer::Add_double(this->q1A0, this->q1A4);
      Checksummer::Add_double(this->q1A8, this->q1AC);
      Checksummer::Add_double(this->q1B0, this->q1B4);
      Checksummer::Add_double(this->__pad_1B8, this->q1BC);
      Checksummer::Add_double(this->q1C0, this->q1C4);
      v3 = Checksummer::Add_double(this->q1C8, this->q1CC);
      LOBYTE(v3) = this->currentPlayer;
      Power::FlagProcess(a2, v3);
      LOBYTE(v4) = this->production;
      Power::FlagProcess(a2, v4);
      LOBYTE(v5) = this->autocreateAllowed;
      v6 = Power::FlagProcess(a2, v5);
      LOBYTE(v6) = this->aiTriggersActive;
      Power::FlagProcess(a2, v6);
      LOBYTE(v7) = this->defeated;
      Power::FlagProcess(a2, v7);
      Power::TimerProcess(this->iqLevel2);
      Power::TimerProcess(this->aiMode);
      Power::TimerProcess(this->q27C);
      v8 = this->q280;
      v9 = this->q288;
      if ( v8 != -1 )
      {
        if ( (int)g_CurrentFrame - v8 >= v9 )
          v9 = 0;
        else
          v9 -= (int)g_CurrentFrame - v8;
      }
      Power::TimerProcess(v9);
      v10 = this->HouseClass_field_timer_28C;
      v11 = this->q294;
      if ( v10 != -1 )
      {
        if ( (int)g_CurrentFrame - v10 >= v11 )
          v11 = 0;
        else
          v11 -= (int)g_CurrentFrame - v10;
      }
      Power::TimerProcess(v11);
      v12 = this->savourTimer;
      v13 = this->q2A0;
      if ( v12 != -1 )
      {
        if ( (int)g_CurrentFrame - v12 >= v13 )
          v13 = 0;
        else
          v13 -= (int)g_CurrentFrame - v12;
      }
      Power::TimerProcess(v13);
      Power::TimerProcess(this->ownedUnits);
      Power::TimerProcess(this->ownedBuildings);
      Power::TimerProcess(this->ownedInfantry);
      Power::TimerProcess(this->ownedAircraft);
      Power::TimerProcess(this->balance);
      Power::TimerProcess(this->totalStorage);
      Power::TimerProcess(this->numAirpads);
      Power::TimerProcess(this->numBarracks);
      Power::TimerProcess(this->numWarFactories);
      Power::TimerProcess(this->numShipyards);
      Power::TimerProcess(this->numConYards);
      Power::TimerProcess(this->numOrePurifiers);
      Power::TimerProcess(this->powerOutput);
      Power::TimerProcess(this->powerDrain);
      LOBYTE(v14) = this->mapIsClear;
      Power::FlagProcess(a2, v14);
      Power::TimerProcess(this->HouseClass_field_548C);
      Power::TimerProcess(this->enemyHouseIndex);
      return (*(int (__thiscall **)(int, int *))(this->q5700 + 8))(this + 22272, a2);
}
} }

// ==== BACKFILL 0x00504740  HouseClass::EnsurePlanningPathExists  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int HouseClass::EnsurePlanningPathExists(int a1) {
{
    int result;
    void *v4;
    result = *(this + a2 + 132);
    if ( !result )
  {
    v4 = __2_YAPAXI_Z(0x40u);
    if ( v4 )
    {
    result = WaypointPathClass::Construct((int)v4, a2);
    *(this + a2 + 132) = result;
    }
    else
    {
    *(this + a2 + 132) = 0;
    return 0;
    }
  }
    return result;
}
} }

// ==== BACKFILL 0x00505180  TechnoClass::checkBuildLimit  cls=TechnoClass  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { void TechnoClass::checkBuildLimit() {
{
      char v2;
      int v3;

      v2 = this->disguiseBlinkTimer;
      if ( !g_GameMode_Current[0] )
        v2 = v2 || this->q1ED;
      if ( !v2 && g_GameMode_Current[0] )
        HouseClass::CanDetect();
      if ( !this->q5714 )
      {
        v3 = g_IKnowWhatImDoing;
        g_IKnowWhatImDoing = 0;
        HouseClass::GenerateAIBuildListEnsureSanity((_DWORD *)this);
        g_IKnowWhatImDoing = v3;
      }
}
} } }

// ==== BACKFILL 0x00505FD0  globalHelper_005FD0  cls=unknown  sig=csp  renamed_refs=0 ====
int globalHelper_005FD0(int a1, int * a2, int a3, int a4)
{
{
    int v4;
    int v5;
    int v7;
    int v8;
    double v9;
    __int64 v10;
    int v12;
    v4 = *((short *)(a2) + 1);
    v5 = *(short *)a2;
    v7 = *(int *)(*(int *)(a1 + 90208) + 4 * (v5 + *(int *)(a1 + 22364) * (v4 - *(int *)(a1 + 22360)) - *(int *)(a1 + 22356)));
    v8 = 0;
    if ( a4 != -1 )
  {
    v12 = *(short *)(a1 + 22354) - v4;
    v9 = Math::CalcAngle((double)v12, (double)(v5 - *(short *)(a1 + 22352)));
    LOWORD(v12) = Math::RoundToInt((v9 - 1.570796326794897) * -10430.06004058427);
    v10 = 32 * a4 - (unsigned char)((((unsigned int)v12 >> 7) + 1) >> 1);
    v8 = (HIDWORD(v10) ^ v10) - HIDWORD(v10);
    if ( v8 >= 128 )
    v8 = 255 - v8;
  }
    return a3 + 1000 * (v8 + (v7 << 7));
}
}

// ==== BACKFILL 0x00507D70  HouseClass::CollectInfantryBuildCandidates  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int HouseClass::CollectInfantryBuildCandidates(int a1, int a2) {
{
      char v4;
      int v5;
      int v6;
      int v7;
      int *p_EliteFlashTimer;
      int v9;
      _DWORD *v10;
      _DWORD *v11;
      int v12;
      int v13;
      bool v14;
      void *v15;
      int v16;
      int v17;
      int v18;
      void *v19;
      int v21;
      void **v22;
      void *Block;
      int v24;
      int v25;
      int v26;
      int v27;

      v4 = SuperWeaponTypeClass::FindByName((void *)(this->relatedTagsCapacity + 152));
      v5 = this->relatedTagsCapacity;
      LOWORD(v25) = 1;
      v6 = 1 << v4;
      v22 = &vt_DynamicVectorClass_BuildingTypeClass;
      Block = 0;
      v24 = 0;
      v27 = 10;
      v26 = 0;
      v7 = *(_DWORD *)(v5 + 188);
      if ( v7 )
      {
        if ( v7 == 1 )
          p_EliteFlashTimer = &g_RulesClass_Instance->MyEffectivenessCoefficientDefault;
        else
          p_EliteFlashTimer = g_RulesClass_Instance->?;
      }
      else
      {
        p_EliteFlashTimer = g_RulesClass_Instance->?;
      }
      v9 = p_EliteFlashTimer[4] - 1;
      v21 = v9;
      if ( v9 >= 0 )
      {
        while ( 1 )
        {
          v10 = (_DWORD *)(*(int (__thiscall **)(int *, int))(*p_EliteFlashTimer + 24))(p_EliteFlashTimer, v9);
          v11 = v10;
          if ( (v6 & v10[435]) != 0
            && v10[397] <= this->q1D4
            && (int)v10[1354] > 0
            && HouseClass::PrerequisitesForTechnoTypeAreListed((int)v10, a3, *(_DWORD *)(a3 + 16))
            && (v26 < v24
             || (BYTE1(v25) || !v24)
             && v27 > 0
             && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v22[2])(&v22, v24 + v27, 0)) )
          {
            v12 = v26++;
            *((_DWORD *)Block + v12) = v11;
          }
          if ( --v21 < 0 )
            break;
          v9 = v21;
        }
      }
      *(_DWORD *)(a2 + 4) = 0;
      *(_DWORD *)(a2 + 8) = 0;
      *(_BYTE *)(a2 + 12) = 1;
      *(_BYTE *)(a2 + 13) = 0;
      *(_DWORD *)a2 = &vt_VectorClass_BuildingTypeClass;
      if ( (void ***)a2 != &v22 )
      {
        VectorClass::Cleanup4(a2);
        v13 = v24;
        v14 = v24 == 0;
        *(_DWORD *)(a2 + 8) = v24;
        if ( v14 )
        {
          *(_DWORD *)(a2 + 4) = 0;
          *(_BYTE *)(a2 + 13) = 0;
        }
        else
        {
          v15 = __2_YAPAXI_Z(4 * v13);
          *(_DWORD *)(a2 + 4) = v15;
          if ( v15 )
          {
            v16 = *(_DWORD *)(a2 + 8);
            v17 = 0;
            *(_BYTE *)(a2 + 13) = 1;
            if ( v16 > 0 )
            {
              do
              {
                *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v17) = *((_DWORD *)Block + v17);
                ++v17;
              }
              while ( v17 < *(_DWORD *)(a2 + 8) );
            }
          }
        }
      }
      v18 = v27;
      *(_DWORD *)(a2 + 16) = v26;
      v19 = Block;
      v14 = Block == 0;
      *(_DWORD *)(a2 + 20) = v18;
      *(_DWORD *)a2 = &vt_DynamicVectorClass_BuildingTypeClass;
      v22 = &vt_VectorClass_BuildingTypeClass;
      if ( !v14 && BYTE1(v25) )
        __3_YAXPAX_Z(v19);
      return a2;
}
} }

// ==== BACKFILL 0x00507F60  HouseClass::CollectAircraftBuildCandidates  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int HouseClass::CollectAircraftBuildCandidates(int a1, int a2) {
{
      char v4;
      int v5;
      int v6;
      int v7;
      int *p_EliteFlashTimer;
      int v9;
      _DWORD *v10;
      _DWORD *v11;
      int v12;
      int v13;
      bool v14;
      void *v15;
      int v16;
      int v17;
      int v18;
      void *v19;
      int v21;
      void **v22;
      void *Block;
      int v24;
      int v25;
      int v26;
      int v27;

      v4 = SuperWeaponTypeClass::FindByName((void *)(this->relatedTagsCapacity + 152));
      v5 = this->relatedTagsCapacity;
      LOWORD(v25) = 1;
      v6 = 1 << v4;
      v22 = &vt_DynamicVectorClass_BuildingTypeClass;
      Block = 0;
      v24 = 0;
      v27 = 10;
      v26 = 0;
      v7 = *(_DWORD *)(v5 + 188);
      if ( v7 )
      {
        if ( v7 == 1 )
          p_EliteFlashTimer = &g_RulesClass_Instance->MyEffectivenessCoefficientDefault;
        else
          p_EliteFlashTimer = g_RulesClass_Instance->?;
      }
      else
      {
        p_EliteFlashTimer = g_RulesClass_Instance->?;
      }
      v9 = p_EliteFlashTimer[4] - 1;
      v21 = v9;
      if ( v9 >= 0 )
      {
        while ( 1 )
        {
          v10 = (_DWORD *)(*(int (__thiscall **)(int *, int))(*p_EliteFlashTimer + 24))(p_EliteFlashTimer, v9);
          v11 = v10;
          if ( (v6 & v10[435]) != 0
            && v10[397] <= this->q1D4
            && (int)v10[1355] > 0
            && HouseClass::PrerequisitesForTechnoTypeAreListed((int)v10, a3, *(_DWORD *)(a3 + 16))
            && (v26 < v24
             || (BYTE1(v25) || !v24)
             && v27 > 0
             && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v22[2])(&v22, v24 + v27, 0)) )
          {
            v12 = v26++;
            *((_DWORD *)Block + v12) = v11;
          }
          if ( --v21 < 0 )
            break;
          v9 = v21;
        }
      }
      *(_DWORD *)(a2 + 4) = 0;
      *(_DWORD *)(a2 + 8) = 0;
      *(_BYTE *)(a2 + 12) = 1;
      *(_BYTE *)(a2 + 13) = 0;
      *(_DWORD *)a2 = &vt_VectorClass_BuildingTypeClass;
      if ( (void ***)a2 != &v22 )
      {
        VectorClass::Cleanup4(a2);
        v13 = v24;
        v14 = v24 == 0;
        *(_DWORD *)(a2 + 8) = v24;
        if ( v14 )
        {
          *(_DWORD *)(a2 + 4) = 0;
          *(_BYTE *)(a2 + 13) = 0;
        }
        else
        {
          v15 = __2_YAPAXI_Z(4 * v13);
          *(_DWORD *)(a2 + 4) = v15;
          if ( v15 )
          {
            v16 = *(_DWORD *)(a2 + 8);
            v17 = 0;
            *(_BYTE *)(a2 + 13) = 1;
            if ( v16 > 0 )
            {
              do
              {
                *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v17) = *((_DWORD *)Block + v17);
                ++v17;
              }
              while ( v17 < *(_DWORD *)(a2 + 8) );
            }
          }
        }
      }
      v18 = v27;
      *(_DWORD *)(a2 + 16) = v26;
      v19 = Block;
      v14 = Block == 0;
      *(_DWORD *)(a2 + 20) = v18;
      *(_DWORD *)a2 = &vt_DynamicVectorClass_BuildingTypeClass;
      v22 = &vt_VectorClass_BuildingTypeClass;
      if ( !v14 && BYTE1(v25) )
        __3_YAXPAX_Z(v19);
      return a2;
}
} }

// ==== BACKFILL 0x00509130  HouseClass::AcquiredThreatNode  cls=HouseClass  sig=csp  renamed_refs=0 ====
void HouseClass::AcquiredThreatNode()
{
{
    this->hasThreatNode = 1;
}
}

// ==== BACKFILL 0x005092F0  sub_5092F0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int HouseClass::sub_5092F0(int a2)
{
{
    int result;
    int i;
    int v5;
    ObjectClass *v6;
    int v7;
    int v8[3];
    result = a2;
    this->radarVisibleTo[0] |= 1 << *(int *)(*(int *)(a2 + 52) + 184);
    if ( a2 == HouseClass_Player.field_0 )
  {
    for ( i = 0; i < *(int *)&HouseClass_Player.__pad_5568[22996]; ++i )
    {
    v5 = *(int *)(*(int *)&HouseClass_Player.__pad_5568[22984] + 4 * i);
    if ( v5 && !*(char *)(v5 + 129) && *(HouseClass **)(v5 + 540) == this )
      {
    v8[0] = *(int *)(v5 + 156);
    v8[1] = *(int *)(v5 + 160);
    v6 = *(ObjectClass **)v5;
    v8[2] = *(int *)(v5 + 164);
    v7 = (*(int (__thiscall **)(int))&v6->hasParachute)(v5);
    MapClass::RevealArea0( (int *)&DataGlobal_87C374.__pad_14B0[8132], (IUnknown *)v8, *(MouseClass **)(v7 + 1512), this, 0, 0, 0, 1, 1);
      }
    }
    return MapClass::MarkForRedraw(&DataGlobal_87C374.__pad_14B0[8132], 2);
  }
    return result;
}
}

// ==== BACKFILL 0x005093C0  sub_5093C0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_5093C0::sub_5093C0(int a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->M22036;
    result = 0;
    if ( v2 > 0 )
  {
    i = (int *)this->M22024;
    for ( ; *i != a2; i += 2 )
    {
    if ( ++result >= v2 )
    return result;
    }
    return UpdateHouseClassAnger((unsigned int)this, (int)i, -*(int *)(this->M22024 + 8 * result + 4), a2);
  }
    return result;
}
}

// ==== BACKFILL 0x00509400  HouseClass::UpdateFogVisibility  cls=HouseClass  sig=csp  renamed_refs=1 ====
namespace gamemd { int HouseClass::UpdateFogVisibility() {
{
      int result;
      __int16 *v3;
      int v4;
      int v5;
      int v6;
      char v7;
      int v8;
      int v9;
      int v10;
      int v11;
      int v12;
      bool v13;
      _DWORD *v14;
      int v15;
      int v16;
      int v17;
      int v18;
      int v19;
      int v20;
      _DWORD *v21;
      int i;

      memset((void *)(this + 22500), 0, 0x10810u);
      result = g_SidebarState - 1;
      for ( i = g_SidebarState - 1; i >= 0; --i )
      {
        v3 = (__int16 *)*((_DWORD *)g_TechnoClass_Count + result);
        if ( !*((_BYTE *)v3 + 129) )
        {
          if ( *((_BYTE *)v3 + 144) )
          {
            v4 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v3 + 704))(v3);
            if ( v4 > 0 )
            {
              if ( ((*(int (__thiscall **)(__int16 *))(*(_DWORD *)v3 + 44))(v3) == 15
                 || (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v3 + 44))(v3) == 1
                 || (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v3 + 44))(v3) == 2)
                && v3 )
              {
                if ( *((_DWORD *)v3 + 343) != g_ControlGroupState )
                {
                  v5 = Cell::PosToLinearIndex(v3 + 686);
                  v6 = *((_DWORD *)v3 + 135);
                  if ( v6 != this )
                  {
                    v7 = this->currentPlayer;
                    if ( !g_GameMode_Current[0] )
                      v7 = v7 || this->playerControl;
                    if ( !v7
                      || !v6
                      || v6 != this
                      && (v8 = *(_DWORD *)(v6 + 48), v8 != this->relatedTagsCount)
                      && (v8 == -1 || (this->HouseClass_field_timer_D & (1 << v8)) == 0) )
                    {
                      v9 = 0;
                      v10 = 9;
                      do
                      {
                        v11 = v4 >> DataGlobal_8243EC[v9];
                        v12 = v5 + DataGlobal_8243C8[v9];
                        v13 = v11 + *(_DWORD *)(this + 4 * v12 + 22500) < 0;
                        *(_DWORD *)(this + 4 * v12 + 22500) += v11;
                        v14 = (_DWORD *)(this + 4 * v12 + 22500);
                        if ( v13 )
                          *v14 = 0;
                        ++v9;
                        --v10;
                      }
                      while ( v10 );
                    }
                  }
                }
              }
              else
              {
                v15 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v3 + 444))(v3);
                v16 = Cell::PosToLinearIndex((__int16 *)(v15 + 36));
                v17 = 0;
                v18 = 9;
                do
                {
                  v19 = v4 >> DataGlobal_8243EC[v17];
                  v20 = v16 + DataGlobal_8243C8[v17];
                  v13 = v19 + *(_DWORD *)(this + 4 * v20 + 22500) < 0;
                  *(_DWORD *)(this + 4 * v20 + 22500) += v19;
                  v21 = (_DWORD *)(this + 4 * v20 + 22500);
                  if ( v13 )
                    *v21 = 0;
                  ++v17;
                  --v18;
                }
                while ( v18 );
              }
            }
          }
        }
        result = i - 1;
      }
      return result;
}
} }

// ==== BACKFILL 0x005095D0  TeamClass::CountActiveTeamsForType  cls=TeamClass  sig=csp  renamed_refs=0 ====
int TeamClass::CountActiveTeamsForType(ObjectClass * aP1)
{
{
    int result;
    int v3;
    int *v4;
    int v5;
    result = 0;
    if ( *(int *)&g_CellDirectionOffsets.__pad_579C[62156] - 1 >= 0 )
  {
    v3 = *(int *)&g_CellDirectionOffsets.__pad_579C[62156];
    v4 = (int *)(*(int *)&g_CellDirectionOffsets.__pad_579C[62144] + 4 * (*(int *)&g_CellDirectionOffsets.__pad_579C[62156] - 1));
    do
    {
    v5 = *v4;
    if ( *v4 && *(void **)(v5 + 44) == this && aP1 == *(ObjectClass **)(v5 + 36) )
    ++result;
    --v4;
    --v3;
    }
    while ( v3 );
  }
    return result;
}
}

// ==== BACKFILL 0x00509610  TriggerClass::ValidateTeamTriggerConditions  cls=TriggerClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int TriggerClass::ValidateTeamTriggerConditions(int aP1) {
{
    ObjectClass *v2;
    int *attachedBomb;
    int v5;
    int v6;
    TechnoClass *v7;
    bool v8;
    int v10;
    int v11;
    v2 = aP1;
    if ( !aP1 )
    return 0;
    attachedBomb = aP1[1].attachedBomb;
    if ( !attachedBomb )
    return 0;
    v11 = 0;
    if ( (int)attachedBomb[39] > 0 )
  {
    v10 = 42;
    do
    {
    v5 = attachedBomb[v10];
    if ( !v5 || !(*(int (__thiscall **)(int, int, int, int, void *))(*(int *)(v5) + 148))(v5, 1, 1, 0, this) )
      {
    if ( *(int *)&HouseClass_Player.__pad_5568[8068] )
    return 0;
    v6 = *(int *)&DataGlobal_89E138.__pad_579C[66812] - 1;
    if ( *(int *)&DataGlobal_89E138.__pad_579C[66812] - 1 < 0 )
    return 0;
    while ( 1 )
        {
    v7 = *(TechnoClass **)(*(int *)&DataGlobal_89E138.__pad_579C[66800] + 4 * v6);
    if ( v7->focus == this && v5 == (*(int (__thiscall **)(int))(*(int *)v7->__pad_0 + 132))(*(int *)(*(int *)&DataGlobal_89E138.__pad_579C[66800] + 4 * v6)) && TriggerClass::EvaluateObjectForTrigger((int)aP1, v7, (int)this) )
          {
    break;
          }
    if ( --v6 < 0 )
    return 0;
        }
    v2 = aP1;
      }
    attachedBomb = v2[1].attachedBomb;
    v8 = ++v11 < attachedBomb[39];
    v10 += 2;
    }
    while ( v8 );
  }
    return 1;
}
} }

// ==== BACKFILL 0x00509B20  HouseClass::Find  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { void HouseClass::Find(int a1) {
{
      bool v3;
      CellStruct *v4;
      CellStruct **SWBuilding;
      AbstractClass *v6;
      CellStruct *v7;
      int v8;

      if ( this->enemyHouseIndex != -1 )
      {
        v3 = this->preferredTargetCell == *(_WORD *)&g_NetworkPlayerBuffer.__pad_14B0[1196];
        v7 = *(CellStruct **)&g_NetworkPlayerBuffer.__pad_14B0[1196];
        if ( v3 && this->q54F2 == *(_WORD *)&g_NetworkPlayerBuffer.__pad_14B0[1198] )
        {
          if ( this->preferredTargetType == 1 )
            SWBuilding = (CellStruct **)HouseClass::FindSWBuilding((_DWORD *)this, (HouseClass *)&v8);
          else
            SWBuilding = (CellStruct **)HouseClass::FindSWTarget(
                                          (void *)this,
                                          (HouseClass *)&v8,
                                          *(HouseClass **)(this + 21740));
          v4 = *SWBuilding;
        }
        else
        {
          v4 = *(CellStruct **)(this + 21744);
        }
        v7 = v4;
        if ( v4 != *(CellStruct **)&g_NetworkPlayerBuffer.__pad_14B0[1196] )
        {
          v6 = (AbstractClass *)(*(int (__thiscall **)(int, char *))(this->supers + 16))(this + 596, &a2);
          SuperWeapon::FireSuperWeaponHouseClass((void *)this, v6, (AbstractClass *)&v7);
        }
      }
}
} }

// ==== BACKFILL 0x00509C10  HouseClass::FireStoredSW  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { void HouseClass::FireStoredSW(int a1) {
{
      bool v3;
      CellStruct *v4;
      CellStruct **SWBuilding;
      AbstractClass *v6;
      CellStruct *v7;
      int v8;

      if ( this->enemyHouseIndex != -1 )
      {
        v3 = this->preferredTargetCell == *(_WORD *)&g_NetworkPlayerBuffer.__pad_14B0[1196];
        v7 = *(CellStruct **)&g_NetworkPlayerBuffer.__pad_14B0[1196];
        if ( v3 && this->q54F2 == *(_WORD *)&g_NetworkPlayerBuffer.__pad_14B0[1198] )
        {
          if ( this->preferredTargetType == 1 )
            SWBuilding = (CellStruct **)HouseClass::FindSWBuilding((_DWORD *)this, (HouseClass *)&v8);
          else
            SWBuilding = (CellStruct **)HouseClass::FindSWTarget(
                                          (void *)this,
                                          (HouseClass *)&v8,
                                          *(HouseClass **)(this + 21740));
          v4 = *SWBuilding;
        }
        else
        {
          v4 = *(CellStruct **)(this + 21744);
        }
        v7 = v4;
        if ( v4 != *(CellStruct **)&g_NetworkPlayerBuffer.__pad_14B0[1196] )
        {
          v6 = (AbstractClass *)(*(int (__thiscall **)(int, char *))(this->supers + 16))(this + 596, &a2);
          SuperWeapon::FireSuperWeaponHouseClass((void *)this, v6, (AbstractClass *)&v7);
        }
      }
}
} }

// ==== BACKFILL 0x00509CC0  nullsub_144  cls=unknown  sig=csp  renamed_refs=0 ====
void nullsub_144(int a1)
{
  ;
}

// ==== BACKFILL 0x00509CD0  HouseClass::Fire_ParaDrop  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int HouseClass::Fire_ParaDrop(int a2) {
{
      HouseClass *v2;
      int v3;
      __int16 v4;
      bool v5;
      CellStruct *v6;
      CellStruct *v7;
      char result;
      AbstractClass *v9;
      CellStruct *v10;
      CellStruct *v11;
      int v12;

      v2 = (HouseClass *)this;
      v3 = this->enemyHouseIndex;
      if ( v3 != -1 )
        this = *(_DWORD **)&HouseClass_Array->__pad_0[4 * v3];
      v4 = *(_WORD *)&g_NetworkPlayerBuffer.__pad_14B0[1196];
      v5 = LOWORD(v2->preferredTargetCell[0]) == *(_WORD *)&g_NetworkPlayerBuffer.__pad_14B0[1196];
      v10 = *(CellStruct **)&g_NetworkPlayerBuffer.__pad_14B0[1196];
      if ( v5 && HIWORD(v2->preferredTargetCell[0]) == *(_WORD *)&g_NetworkPlayerBuffer.__pad_14B0[1198] )
      {
        if ( v2->preferredTargetType == 1 )
        {
          if ( this->baseCenter == *(_WORD *)&g_NetworkPlayerBuffer.__pad_14B0[1196]
            && this->q5496 == *(_WORD *)&g_NetworkPlayerBuffer.__pad_14B0[1198] )
          {
            v6 = (CellStruct *)this->baseSpawnCell;
          }
          else
          {
            v6 = (CellStruct *)this->baseCenter;
          }
          v10 = v6;
          v11 = 0;
          v7 = (CellStruct *)*LayerClass::Pathfinding_Find(
                                &DataGlobal_87F7E8,
                                0,
                                &v12,
                                (__int16 *)&v10,
                                0,
                                -1,
                                0,
                                0,
                                5,
                                5,
                                0,
                                0,
                                0,
                                1,
                                (__int16 *)&v11,
                                0,
                                0);
          LOWORD(v10) = (_WORD)v7 + 2;
          HIWORD(v10) = HIWORD(v7) + 2;
        }
        else
        {
          v10 = (CellStruct *)*HouseClass::FindSWTarget(v2, (HouseClass *)&v11, (HouseClass *)v2->preferredTargetType);
        }
        v4 = *(_WORD *)&g_NetworkPlayerBuffer.__pad_14B0[1196];
      }
      else
      {
        v10 = (CellStruct *)v2->preferredTargetCell[0];
      }
      if ( (_WORD)v10 != v4
        || (result = g_NetworkPlayerBuffer.__pad_14B0[1198], HIWORD(v10) != *(_WORD *)&g_NetworkPlayerBuffer.__pad_14B0[1198]) )
      {
        v9 = (AbstractClass *)(*(int (__thiscall **)(int *, char *))(v2->supers[0] + 16))(v2->supers, &a2);
        return SuperWeapon::FireSuperWeaponHouseClass(v2, v9, (AbstractClass *)&v10);
      }
      return result;
}
} }

// ==== BACKFILL 0x00509E00  HouseClass::Fire_LightningStorm  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int HouseClass::Fire_LightningStorm(int a1) {
{
      char result;
      bool v4;
      int v5;
      int *SWBuilding;
      AbstractClass *v7;
      int v8;
      int v9;

      result = LightningStorm::IsActive();
      if ( !result && this->enemyHouseIndex != -1 )
      {
        v4 = this->preferredTargetCell == *(_WORD *)&g_NetworkPlayerBuffer.__pad_14B0[1196];
        v8 = *(_DWORD *)&g_NetworkPlayerBuffer.__pad_14B0[1196];
        if ( v4 && this->q54F2 == *(_WORD *)&g_NetworkPlayerBuffer.__pad_14B0[1198] )
        {
          if ( this->preferredTargetType == 1 )
            SWBuilding = HouseClass::FindSWBuilding((_DWORD *)this, (HouseClass *)&v9);
          else
            SWBuilding = HouseClass::FindSWTarget((void *)this, (HouseClass *)&v9, *(HouseClass **)(this + 21740));
          v5 = *SWBuilding;
        }
        else
        {
          v5 = this->preferredTargetCell;
        }
        v8 = v5;
        if ( (_WORD)v5 != *(_WORD *)&g_NetworkPlayerBuffer.__pad_14B0[1196]
          || (result = g_NetworkPlayerBuffer.__pad_14B0[1198], HIWORD(v8) != *(_WORD *)&g_NetworkPlayerBuffer.__pad_14B0[1198]) )
        {
          v7 = (AbstractClass *)(*(int (__thiscall **)(int, char *))(this->supers + 16))(this + 596, &a2);
          return SuperWeapon::FireSuperWeaponHouseClass((void *)this, v7, (AbstractClass *)&v8);
        }
      }
      return result;
}
} }

// ==== BACKFILL 0x00509F60  HouseClass::Fire_GenMutator  cls=HouseClass  sig=csp  renamed_refs=1 ====
namespace gamemd { int HouseClass::Fire_GenMutator(int a1) {
{
      __int16 v2;
      int v4;
      _BYTE *v5;
      int v6;
      MouseClass *v7;
      __int16 v8;
      _DWORD *v9;
      _DWORD *ObjectByType;
      int v11;
      int v12;
      bool v13;
      int v14;
      AbstractClass *v15;
      _BYTE v17[32];

      LOBYTE(v2) = g_NetworkPlayerBuffer.__pad_14B0[1196];
      *(_DWORD *)v17 = *(_DWORD *)&g_NetworkPlayerBuffer.__pad_14B0[1196];
      *(_DWORD *)&v17[8] = 0;
      if ( this->preferredTargetCell == *(_WORD *)&g_NetworkPlayerBuffer.__pad_14B0[1196] )
      {
        v2 = this->q54F2;
        if ( v2 == *(_WORD *)&g_NetworkPlayerBuffer.__pad_14B0[1198] )
        {
          v4 = (int)&g_BuildingClass_Count[-1].lineTrailer + 3;
          *(_DWORD *)&v17[24] = (char *)g_BuildingClass_Count - 1;
          if ( (int)&g_BuildingClass_Count[-1].lineTrailer + 3 >= 0 )
          {
            do
            {
              *(_DWORD *)&v17[4] = 0;
              v5 = *(_BYTE **)&g_InfantryClassLimit->__pad_0[4 * v4];
              if ( !v5[129] )
              {
                v17[16] = v5[140] != 0;
                v6 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 444))(v5);
                *(_DWORD *)&v17[20] = 0;
                v7 = (MouseClass *)DataGlobal_ABD490;
                do
                {
                  v8 = *(_WORD *)(v6 + 38) + HIWORD(v7->field_0);
                  *(_WORD *)&v17[12] = LOWORD(v7->field_0) + *(_WORD *)(v6 + 36);
                  *(_WORD *)&v17[14] = v8;
                  *(_DWORD *)&v17[28] = *(_DWORD *)&v17[12];
                  v9 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v17[28]);
                  ObjectByType = WTFMode::FindObjectByType(v9, v17[16]);
                  if ( ObjectByType )
                  {
                    do
                    {
                      v11 = (*(int (__thiscall **)(_DWORD *))(*ObjectByType + 60))(ObjectByType);
                      if ( !v11
                        || v11 != this
                        && ((v12 = *(_DWORD *)(v11 + 48), v12 != this->relatedTagsCount)
                          ? (v12 == -1
                           ? (v13 = 0)
                           : (v13 = (this->HouseClass_field_timer_D & (1 << v12)) != 0))
                          : (v13 = 1),
                            !v13) )
                      {
                        if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*ObjectByType + 84))(ObjectByType) )
                          ++*(_DWORD *)&v17[4];
                      }
                      ObjectByType = (_DWORD *)ObjectByType[12];
                    }
                    while ( ObjectByType && (*(int (__thiscall **)(_DWORD *))(*ObjectByType + 44))(ObjectByType) == 15 );
                  }
                  v7 = (MouseClass *)((char *)v7 + 4);
                  ++*(_DWORD *)&v17[20];
                }
                while ( *(int *)&v17[20] <= 9 );
                v4 = *(_DWORD *)&v17[24];
                if ( *(int *)&v17[4] > *(int *)&v17[8] )
                {
                  v14 = *(_DWORD *)(v6 + 36);
                  *(_DWORD *)&v17[8] = *(_DWORD *)&v17[4];
                  *(_DWORD *)v17 = v14;
                }
              }
              *(_DWORD *)&v17[24] = --v4;
            }
            while ( v4 >= 0 );
            LOBYTE(v2) = v17[8];
            if ( *(_DWORD *)&v17[8] )
            {
              if ( *(_DWORD *)v17 != *(_DWORD *)&g_NetworkPlayerBuffer.__pad_14B0[1196] )
              {
                LOBYTE(v2) = LayerClass::IsWithinUsableArea(&DataGlobal_87F7E8, (IUnknown *)v17, (TechnoClass *)1);
                if ( (_BYTE)v2 )
                {
                  v15 = (AbstractClass *)(*(int (__thiscall **)(int, char *))(this->supers + 16))(
                                           this + 596,
                                           &a2);
                  LOBYTE(v2) = SuperWeapon::FireSuperWeaponHouseClass((void *)this, v15, (AbstractClass *)v17);
                }
              }
            }
          }
        }
      }
      return v2;
}
} }

// ==== BACKFILL 0x0050A150  HouseClass::Fire_PsyDom  cls=HouseClass  sig=csp  renamed_refs=1 ====
namespace gamemd { int HouseClass::Fire_PsyDom(int a1) {
{
      __int16 v3;
      bool v4;
      int v5;
      _BYTE *v6;
      int v7;
      int *v8;
      __int16 v9;
      _BYTE *i;
      _DWORD *v11;
      int v12;
      int v13;
      int v15;
      AbstractClass *v16;
      int v18;
      int v19;
      int v20;
      int v21;
      int v22;
      int v23;
      int v24;

      LOBYTE(v3) = PsyDom::IsActive();
      if ( !(_BYTE)v3 && this->enemyHouseIndex != -1 )
      {
        LOBYTE(v3) = g_NetworkPlayerBuffer.__pad_14B0[1196];
        v20 = 0;
        v4 = this->preferredTargetCell == *(_WORD *)&g_NetworkPlayerBuffer.__pad_14B0[1196];
        v18 = *(_DWORD *)&g_NetworkPlayerBuffer.__pad_14B0[1196];
        if ( v4 )
        {
          v3 = this->q54F2;
          if ( v3 == *(_WORD *)&g_NetworkPlayerBuffer.__pad_14B0[1198] )
          {
            v5 = *(_DWORD *)&g_CellDirectionOffsets.__pad_579C[61348] - 1;
            v23 = *(_DWORD *)&g_CellDirectionOffsets.__pad_579C[61348] - 1;
            if ( *(_DWORD *)&g_CellDirectionOffsets.__pad_579C[61348] - 1 >= 0 )
            {
              do
              {
                v19 = 0;
                v6 = *(_BYTE **)(*(_DWORD *)&g_CellDirectionOffsets.__pad_579C[61336] + 4 * v5);
                if ( !v6[129] )
                {
                  v7 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 444))(v6);
                  v22 = 0;
                  v8 = DataGlobal_ABD490;
                  do
                  {
                    v9 = *(_WORD *)(v7 + 38) + *((_WORD *)v8 + 1);
                    LOWORD(v21) = *(_WORD *)(v7 + 36) + *(_WORD *)v8;
                    HIWORD(v21) = v9;
                    v24 = v21;
                    for ( i = (_BYTE *)*((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v24) + 57);
                          i && (i[20] & 4) != 0;
                          i = (_BYTE *)v11[12] )
                    {
                      v11 = i;
                      v12 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)i + 60))(i);
                      if ( v12 )
                      {
                        if ( v12 == this )
                          continue;
                        v13 = *(_DWORD *)(v12 + 48);
                        if ( v13 == this->relatedTagsCount || v13 != -1 && ((1 << v13) & this->HouseClass_field_timer_D) != 0 )
                          continue;
                      }
                      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v11 + 84))(v11) && TechnoClass::CanBePermaMC(v11) )
                        ++v19;
                    }
                    ++v8;
                    ++v22;
                  }
                  while ( v22 <= 37 );
                  v5 = v23;
                  if ( v19 > v20 )
                  {
                    v15 = *(_DWORD *)(v7 + 36);
                    v20 = v19;
                    v18 = v15;
                  }
                }
                v23 = --v5;
              }
              while ( v5 >= 0 );
              LOBYTE(v3) = v20;
              if ( v20 )
              {
                if ( v18 != *(_DWORD *)&g_NetworkPlayerBuffer.__pad_14B0[1196] )
                {
                  LOBYTE(v3) = LayerClass::IsWithinUsableArea(&DataGlobal_87F7E8, (IUnknown *)&v18, (TechnoClass *)1);
                  if ( (_BYTE)v3 )
                  {
                    v16 = (AbstractClass *)(*(int (__thiscall **)(int, char *))(this->supers + 16))(
                                             this + 596,
                                             &a2);
                    LOBYTE(v3) = SuperWeapon::FireSuperWeaponHouseClass((void *)this, v16, (AbstractClass *)&v18);
                  }
                }
              }
            }
          }
        }
      }
      return v3;
}
} }

// ==== BACKFILL 0x0050A350  HouseClass::FireSuperWeaponAtBestTarget  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int HouseClass::FireSuperWeaponAtBestTarget(int a1) {
{
      int TileData;
      int v4;
      MouseClass *v5;
      int v6;
      int v7;
      _DWORD *v8;
      _DWORD *v9;
      SuperClass *v10;
      AbstractClass *v11;
      int v13;
      MouseClass *v14;
      int v15;
      MouseClass *v16;
      int v17;
      _BYTE v18[12];
      _UNKNOWN *retaddr;

      TileData = this->enemyHouseIndex;
      if ( TileData != -1 )
      {
        v4 = 0;
        v15 = -1;
        v5 = *(MouseClass **)&HouseClass_Array->__pad_0[4 * TileData];
        LOBYTE(TileData) = HouseClass_Player.__pad_5568[22684];
        v16 = v5;
        v6 = *(_DWORD *)&HouseClass_Player.__pad_5568[22684] - 1;
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[22684] - 1 >= 0 )
        {
          do
          {
            v7 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22672] + 4 * v6);
            if ( *(MouseClass **)(v7 + 540) == v16 )
            {
              v8 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v7 + 72))(v7, v18);
              LOWORD(v13) = *v8 / 256;
              HIWORD(v13) = v8[1] / 256;
              v17 = v13;
              TileData = CellClass::GetTileData((IUnknown *)&v17, (IUnknown *)this);
              if ( *(_BYTE *)(v7 + 1773) == 15 )
                TileData = Random::Range(
                             (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                             0,
                             (IUnknown *)0x64);
              if ( TileData > v15 )
              {
                v15 = TileData;
                v4 = v7;
              }
            }
            --v6;
          }
          while ( v6 >= 0 );
          if ( v4 )
          {
            v9 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 72))(v4);
            LOWORD(v14) = *v9 / 256;
            HIWORD(v14) = v9[1] / 256;
            v10 = *(SuperClass **)(this + 596);
            v16 = v14;
            v11 = (AbstractClass *)((int (__thiscall *)(int, _UNKNOWN **, MouseClass **))v10->field_10)(
                                     this + 596,
                                     &retaddr,
                                     &v16);
            LOBYTE(TileData) = SuperWeapon::FireSuperWeaponHouseClass((void *)this, v11, (AbstractClass *)v18);
          }
        }
      }
      return TileData;
}
} }

// ==== BACKFILL 0x0050A490  HouseClass::RecordCratePlacement  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int HouseClass::RecordCratePlacement(void* a1) {
{
      int Type;
      int v3;
      int v4;
      _QWORD *i;
      int v6;
      int v7;
      int v8;
      int v9;
      bool v10;
      int v11;
      int v13;

      LOBYTE(Type) = g_NetworkPlayerBuffer.__pad_14B0[639];
      if ( !g_NetworkPlayerBuffer.__pad_14B0[639] )
      {
        v3 = 0;
        v4 = this->q5714;
        Type = aP1->location[1] / 256;
        if ( v4 > 0 )
        {
          for ( i = (_QWORD *)this->q5708;
                *i != __PAIR64__(__PAIR32__(Type, aP1->location[0] / 256), *((_DWORD *)aP1->Type + 894));
                i += 2 )
          {
            if ( ++v3 >= v4 )
              return Type;
          }
          v6 = 16 * v3;
          v7 = 0;
          v13 = *(_DWORD *)(this->q5708 + 16 * v3 + 4);
          v8 = 0;
          do
          {
            if ( v3 != v7 )
            {
              v9 = this->q5708;
              v10 = *(_WORD *)(v8 + v9 + 4) == (unsigned __int16)v13;
              v11 = v8 + v9 + 4;
              if ( v10 && *(_WORD *)(v11 + 2) == HIWORD(v13) )
                *(_DWORD *)v11 = *(_DWORD *)&g_NetworkPlayerBuffer.__pad_14B0[1196];
            }
            ++v7;
            v8 += 16;
          }
          while ( v7 < this->q5714 );
          Type = (int)aP1->Type;
          if ( *(_BYTE *)(Type + 5894) )
          {
            LOBYTE(Type) = (_BYTE)g_GameMode_Current;
            if ( g_GameMode_Current )
            {
              *(_DWORD *)(v6 + this->q5708) = -1;
              Type = this->q5708;
              *(_DWORD *)(v6 + Type + 4) = *(_DWORD *)&g_NetworkPlayerBuffer.__pad_14B0[1196];
            }
          }
        }
      }
      return Type;
}
} }

// ==== BACKFILL 0x0050B840  HouseClass::GetColor  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int HouseClass::GetColor() {
{
      int v2;
      int v3;
      int v4;
      int v5;
      unsigned __int16 v6;
      char result;
      char *v8;
      __int16 v9;

      if ( this->startingCell < 0 )
        this->startingCell = 5;
      v2 = *((_DWORD *)BuildingTypeClass_AnimTable + this->startingCell);
      if ( !v2 )
      {
        Debug::Log();
        this->startingCell = 5;
        v2 = *((_DWORD *)BuildingTypeClass_AnimTable + 5);
      }
      v3 = *(_DWORD *)(v2 + 816);
      v4 = *(_DWORD *)(v2 + 780);
      v5 = *(_DWORD *)(v4 + 372);
      if ( *(_DWORD *)(v4 + 4) == 1 )
        v6 = *(unsigned __int8 *)(v5 + v3);
      else
        v6 = *(_WORD *)(v5 + 2 * v3);
      LOBYTE(v9) = (unsigned __int8)(v6 >> g_DDraw_BlueMask) << g_BitShift_Green_0;
      HIBYTE(v9) = (unsigned __int8)(v6 >> g_BitMask_Green) << g_BitMask_Blue;
      result = (unsigned __int8)(v6 >> g_BitShift_Blue) << g_BitMask_Red;
      v8 = this + 22265;
      *(_WORD *)v8 = v9;
      v8[2] = result;
      return result;
}
} }

// ==== BACKFILL 0x0050B920  globalHelper_00B920  cls=unknown  sig=csp  renamed_refs=0 ====
void sub_50B920(int a1, int a2, int a3)
{
{
    double v5;
    double v6;
    double v7;
    double v8;
    v5 = Math::Sqrt(*(double *)a1 * *(double *)(a1) + *(double *)a3 * *(double *)(a3) + *(double *)a2 * *(double *)a2);
    if ( v5 == 0.0 )
  {
    *(int *)a3 = 0;
    *(int *)(a3 + 4) = 1081073664;
    *(int *)a2 = 0;
    *(int *)(a2 + 4) = 1081073664;
    *(int *)a1 = 0;
    *(int *)(a1 + 4) = 1081073664;
  }
    else
  {
    v6 = *(double *)a1 * 240.0 / v5;
    *(double *)a1 = v6;
    if ( v6 > 255.0 )
    {
    *(int *)a1 = 0;
    *(int *)(a1 + 4) = 1081073664;
    }
    v7 = *(double *)a2 * 240.0 / v5;
    *(double *)a2 = v7;
    if ( v7 > 255.0 )
    {
    *(int *)a2 = 0;
    *(int *)(a2 + 4) = 1081073664;
    }
    v8 = *(double *)a3 * 240.0 / v5;
    *(double *)a3 = v8;
    if ( v8 > 255.0 )
    {
    *(int *)a3 = 0;
    *(int *)(a3 + 4) = 1081073664;
    }
  }
}
}

// ==== BACKFILL 0x0050BD10  HouseClass::ReshroudMap  cls=HouseClass  sig=csp  renamed_refs=0 ====
char HouseClass::ReshroudMap()
{
{
    char result;
    result = this->__pad_5778[2];
    if ( !result )
    return ShroudClass::Reset(&DataGlobal_87F7E8, this);
    return result;
}
}

// ==== BACKFILL 0x0050BF60  HouseClass::CalculateCostMultipliers  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int HouseClass::CalculateCostMultipliers() {
{
      int result;

      this->costInfantryMult = 1.0;
      this->costUnitsMult = 1.0;
      this->costAircraftMult = 1.0;
      this->costBuildingsMult = 1.0;
      this->costDefensesMult = 1.0;
      for ( result = 0;
            result < this->q150;
            this->costDefensesMult = *(float *)(*(_DWORD *)(*(_DWORD *)(this->q144 + 4 * result - 4) + 1312) + 5856)
                           * this->costDefensesMult )
      {
        ++result;
        this->costInfantryMult = *(float *)(*(_DWORD *)(*(_DWORD *)(this->q144 + 4 * result - 4) + 1312) + 5840)
                       * this->costInfantryMult;
        this->costUnitsMult = *(float *)(*(_DWORD *)(*(_DWORD *)(this->q144 + 4 * result - 4) + 1312) + 5844)
                       * this->costUnitsMult;
        this->costAircraftMult = *(float *)(*(_DWORD *)(*(_DWORD *)(this->q144 + 4 * result - 4) + 1312) + 5848)
                       * this->costAircraftMult;
        this->costBuildingsMult = *(float *)(*(_DWORD *)(*(_DWORD *)(this->q144 + 4 * result - 4) + 1312) + 5852)
                       * this->costBuildingsMult;
      }
      return result;
}
} }

// ==== BACKFILL 0x0050C0A0  HouseClass::GetBuildingDamageMultiplier  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { double HouseClass::GetBuildingDamageMultiplier(void* a2) {
{
    double result;
    switch ( (*(int (__thiscall **)(int *))(*a2 + 44))(a2) )
  {
    case 3: result = *(float *)(this->relatedTagsCapacity + 316);
    break;
    case 7: if ( *((int*)(a2) + 898) == 5 )
    result = *(float *)(this->relatedTagsCapacity + 324);
    else
    result = *(float *)(this->relatedTagsCapacity + 320);
    break;
    case 16: result = *(float *)(this->relatedTagsCapacity + 308);
    break;
    case 40: result = *(float *)(this->relatedTagsCapacity + 312);
    break;
    default: result = 1.0;
    break;
  }
    return result;
}
} }

// ==== BACKFILL 0x0050C160  sub_50C160  cls=ObjectClass  sig=csp  renamed_refs=0 ====
double E4Recv_50C160::sub_50C160()
{
{
    return *(float *)(this->M52 + 328);
}
}

// ==== BACKFILL 0x0050C8C0  HouseClass::NotifyImpactWater  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int HouseClass::NotifyImpactWater() {
{
    int v1;
    int i;
    AnimClass **v4;
    v1 = *(int *)&g_EventManager.__pad_1B8[96];
    for ( i = 0; i < v1; ++i )
  {
    v4 = *(AnimClass ***)(*(int *)&g_EventManager.__pad_1B8[84] + 4 * i);
    if ( v4 && v4[135] == this )
    (*(void (__thiscall **)(AnimClass **, int))&(*v4)->__pad_361[39])(v4, 0);
  }
    return PlayVocClass(g_RulesClass_Instance->MasterMindOverloadDeathSound, 0x2000, 1.0, 0);
}
} }

// ==== BACKFILL 0x0050D250  CellClass::IterateOccupiers  cls=CellClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int CellClass::IterateOccupiers(int a1) {
{
      int v3;
      int v4;
      int v5;

      v3 = this->q5714 - 1;
      if ( v3 >= 0 )
      {
        v4 = this->q5714;
        v5 = 16 * v3;
        do
        {
          LOWORD(v3) = CellClass::setTileIndex((_WORD *)(v5 + this->q5708), a2);
          v5 -= 16;
          --v4;
        }
        while ( v4 );
      }
      return v3;
}
} }

// ==== BACKFILL 0x0050D290  TActionClass::executeAttackAction  cls=TActionClass  sig=csp  renamed_refs=0 ====
int TActionClass::executeAttackAction(int a2)
{
{
    int i;
    int *v4;
    int result;
    for ( i = *(int *)(a2 + 120) - 1; i >= 0; v4[179] = this )
  {
    v4 = *(int **)(*(int *)(a2 + 108) + 4 * i);
    result = (*(int (__thiscall **)(int *, void *, int))(*v4 + 980))(v4, this, 0);
    --i;
    v4[184] = a2;
  }
    return result;
}
}

// ==== BACKFILL 0x0050D9E0  HouseClass::GetInfSelfHealStep  cls=HouseClass  sig=csp  renamed_refs=0 ====
int HouseClass::GetInfSelfHealStep()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall HouseClass::GetInfSelfHealStep(_DWORD *this)
{
  return *(this + 89) * MEMORY[0x8871E0]->SelfHealInfantryAmount; /*0x50d9ef*/
}
}

// ==== BACKFILL 0x0050D9F0  HouseClass::GetUnitSelfHealStep  cls=HouseClass  sig=csp  renamed_refs=0 ====
int HouseClass::GetUnitSelfHealStep()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall HouseClass::GetUnitSelfHealStep(_DWORD *this)
{
  return *(this + 90) * MEMORY[0x8871E0]->SelfHealUnitAmount; /*0x50d9ff*/
}
}

// ==== BACKFILL 0x0050DA40  sub_50DA40  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_50DA40::sub_50DA40(int a2)
{
{
    this->M21752 = a2;
    return a2;
}
}

// ==== BACKFILL 0x0050DA80  HouseClass::GetTransitionCount  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int HouseClass::GetTransitionCount() {
{
    unsigned int result;
    result = *(this + 5599);
    if ( result >= 4 )
    return 0;
    return result;
}
} }

// ==== BACKFILL 0x0050DAA0  FootClass::checkTurning  cls=FootClass  sig=csp  renamed_refs=1 ====
unsigned int FootClass::checkTurning()
{
{
    unsigned int result;
    result = this->isDisguisedFlag;
    if ( result >= 4 )
    return 0;
    return result;
}
}

// ==== BACKFILL 0x0050DEF0  HouseClass::GetCurrentOption  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { void* HouseClass::GetCurrentOption(void* aP1) {
{
      if ( this->baseCenter == *(_WORD *)&HouseClass_Player.__pad_5568[23780]
        && this->q5496 == *(_WORD *)&HouseClass_Player.__pad_5568[23782] )
      {
        aP1->field_0 = this->baseSpawnCell;
        return (ObjectClass *)aP1;
      }
      else
      {
        aP1->field_0 = this->baseCenter;
        return (ObjectClass *)aP1;
      }
}
} }

// ==== BACKFILL 0x0050DF30  HouseClass::GetStartCoords  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { void* HouseClass::GetStartCoords(void* aP1) {
{
      ObjectClass *v2;
      void *v4;
      _DWORD *v5;
      ObjectClass *v6;
      _BYTE v7[12];

      if ( this->baseCenter == *(_WORD *)&g_NetworkPlayerBuffer.__pad_14B0[1196]
        && this->q5496 == *(_WORD *)&g_NetworkPlayerBuffer.__pad_14B0[1198] )
      {
        v2 = (ObjectClass *)this->baseSpawnCell;
      }
      else
      {
        v2 = (ObjectClass *)this->baseCenter;
      }
      v6 = v2;
      if ( v2 == *(ObjectClass **)&g_NetworkPlayerBuffer.__pad_14B0[1196] )
      {
        *(_DWORD *)aP1->__pad_0 = *(_DWORD *)&g_NetworkPlayerBuffer.__pad_14B0[1292];
        *(_DWORD *)&aP1->__pad_0[4] = *(_DWORD *)&g_NetworkPlayerBuffer.__pad_14B0[1296];
        *(_DWORD *)&aP1->__pad_0[8] = *(_DWORD *)&g_NetworkPlayerBuffer.__pad_14B0[1300];
        return aP1->__pad_0;
      }
      else
      {
        v4 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v6);
        v5 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v4 + 72))(v4, v7);
        *(_DWORD *)aP1->__pad_0 = *v5;
        *(_DWORD *)&aP1->__pad_0[4] = v5[1];
        *(_DWORD *)&aP1->__pad_0[8] = v5[2];
        return aP1->__pad_0;
      }
}
} }

// ==== BACKFILL 0x0050E000  HouseClass::SetMapSeed  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int HouseClass::SetMapSeed(int a1) {
{
    this->baseSpawnCell = aP1;
    return (int)aP1;
}
} }

// ==== BACKFILL 0x0050E1B0  HouseClass::GainedPoweredCenter  cls=HouseClass  sig=csp  renamed_refs=0 ====
BOOL HouseClass::GainedPoweredCenter(int a2)
{
{
    return this->poweredUnitCenters > 0;
}
}

// ==== BACKFILL 0x0050E340  HouseClass::COMStub_Ret1_1  cls=HouseClass  sig=csp  renamed_refs=0 ====
int HouseClass::COMStub_Ret1_1(int a1)
{
return 1;
}

// ==== BACKFILL 0x0050E350  HouseClass::COMStub_Ret1_2  cls=HouseClass  sig=csp  renamed_refs=0 ====
int HouseClass::COMStub_Ret1_2(int a1)
{
return 1;
}

// ==== BACKFILL 0x0050E360  AbstractClass::computeMovementCost  cls=AbstractClass  sig=csp  renamed_refs=0 ====
int AbstractClass::computeMovementCost()
{
return 13;
}

// ==== BACKFILL 0x0050E370  AbstractClass::checkPassability  cls=AbstractClass  sig=csp  renamed_refs=0 ====
int AbstractClass::checkPassability()
{
{
    return this->nextObject;
}
}

// ==== BACKFILL 0x0050E380  AbstractClass::getMovementSpeed  cls=AbstractClass  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { void* AbstractClass::getMovementSpeed(int a2) {
{
    HouseClass::Destruct((int)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (AbstractClass *)this;
}
} } }

// ==== BACKFILL 0x0050E430  HouseClass::processRadar  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int HouseClass::processRadar(int a1, int a2, int a3) {
{
      *this = a2;
      this->q001 = a3;
      this->q002 = a4;
      return a4;
}
} }

// ==== BACKFILL 0x0050E470  CellStruct::Equals  cls=CellStruct  sig=csp  renamed_refs=0 ====
BOOL CellStruct::Equals(unsigned short * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall CellStruct_Equals(_WORD *this, _WORD *a2)
{
  return *this == *a2 && *(this + 1) == a2[1]; /*0x50e48b*/
}
}

// ==== BACKFILL 0x0050E5D0  AbstractClass::getTargetCoordinates  cls=DynamicVector  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { void AbstractClass::getTargetCoordinates() {
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->uniqueId = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->vtable1 = 0;
  }
    this->IsAllocated = 0;
    this->vtable2 = 0;
}
} } }

// ==== BACKFILL 0x0050E600  AbstractClass::setTargetCoordinates  cls=DynamicVector  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int AbstractClass::setTargetCoordinates(int a1) {
{
      if ( this->vtable3 )
        return (unsigned int)(a2 - this->vtable1) >> 3;
      else
        return 0;
}
} } }

// ==== BACKFILL 0x0050E640  VectorClass_ptr_BuildChoiceClass_int_ouseClass::Destroy_0  cls=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp  renamed_refs=0 ====
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

// ==== BACKFILL 0x0050E670  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItemIndex_1  cls=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp  renamed_refs=0 ====
unsigned int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItemIndex_1(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}

// ==== BACKFILL 0x0050EB70  VectorClass::InsertAt  cls=VectorClass  sig=csp  renamed_refs=0 ====
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

// ==== BACKFILL 0x0050F3A0  AbstractClass::evaluateTarget  cls=DynamicVector  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int AbstractClass::evaluateTarget(int a1, void* a2) {
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
      int v13;
      _DWORD *v14;
      int v15;

      v3 = a2;
      if ( a2 )
      {
        v5 = a3;
        this->vtable3 = 0;
        if ( a3 )
        {
          v9 = a3;
          if ( a2 - 1 >= 0 )
          {
            v10 = a2;
            do
            {
              *(_DWORD *)v9 = 0;
              v9[4] = 0;
              v9 += 8;
              --v10;
            }
            while ( v10 );
          }
        }
        else
        {
          v6 = (char *)__2_YAPAXI_Z(8 * a2);
          if ( v6 )
          {
            v7 = v6;
            if ( a2 - 1 >= 0 )
            {
              v8 = a2;
              do
              {
                *(_DWORD *)v7 = 0;
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
        this->vtable3 = 1;
        if ( !v5 )
          return 0;
        if ( this->vtable1 )
        {
          v11 = this->vtable2;
          if ( a2 < v11 )
            v11 = a2;
          v12 = 0;
          if ( v11 > 0 )
          {
            do
            {
              v13 = 8 * v12;
              v14 = (_DWORD *)(this->vtable1 + 8 * v12++);
              *(_DWORD *)&v5[v13] = *v14;
              *(_DWORD *)&v5[v13 + 4] = v14[1];
            }
            while ( v12 < v11 );
            v3 = a2;
          }
          if ( this->IsAllocated )
          {
            __3_YAXPAX_Z(*((void **)this + 1));
            this->vtable1 = 0;
          }
        }
        this->vtable1 = v5;
        this->vtable2 = v3;
        this->IsAllocated = a3 == 0;
      }
      else
      {
        this->vt3();
      }
      v15 = this->vtable2;
      if ( v15 < this->uniqueId )
        this->uniqueId = v15;
      return 1;
}
} } }

// ==== BACKFILL 0x0050F4A0  AbstractClass::selectBestTarget  cls=DynamicVector  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int AbstractClass::selectBestTarget(int a2) {
{
      int v2;
      int result;
      int i;

      v2 = this->uniqueId;
      result = 0;
      if ( v2 <= 0 )
        return -1;
      for ( i = this->vtable1; *(_DWORD *)i != *(_DWORD *)a2 || *(_BYTE *)(i + 4) != *(_BYTE *)(a2 + 4); i += 8 )
      {
        if ( ++result >= v2 )
          return -1;
      }
      return result;
}
} } }

// ==== BACKFILL 0x0050F710  VectorClass_ptr_BuildChoiceClass_int_ouseClass::FindItemIndex_1  cls=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp  renamed_refs=0 ====
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

// ==== BACKFILL 0x0050F830  VectorClass::ClearAndFree3  cls=VectorClass  sig=csp  renamed_refs=0 ====
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
