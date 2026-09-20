// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x006F03F0  sub_6F03F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_6F03F0::sub_6F03F0()
{
{
    int *v1;
    v1 = this->M84;
    if ( !v1 )
    return 0;
    while ( *(int *)((*(int (__thiscall **)(int *))(*v1 + 132))(v1) + 1668) > 0 && v1[191] <= 0 )
  {
    v1 = (int *)v1[374];
    if ( !v1 )
    return 0;
  }
    return 1;
}
}

// ==== BACKFILL 0x006F0430  TeamClass::StubReturn160  cls=TeamClass  sig=csp  renamed_refs=0  residual=- ====
int TeamClass::StubReturn160()
{
return 160;
}

// ==== BACKFILL 0x006F0440  TeamClass::StubReturn34  cls=TeamClass  sig=csp  renamed_refs=0  residual=- ====
int TeamClass::StubReturn34()
{
return 34;
}

// ==== BACKFILL 0x006F0450  TeamClass::ProcessEvent  cls=TeamClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* TeamClass::ProcessEvent(int a2) {
{
    TeamClass::Destructor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (TeamClass *)this;
}
} }

// ==== BACKFILL 0x006F09C0  TeamClass::CreateOneOf  cls=TeamClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int TeamClass::CreateOneOf(int a1) {
{
      HouseClass *OwnerHouse;
      int v4;
      int v6;

      Debug::Log();
      OwnerHouse = aP1;
      if ( !aP1 )
      {
        OwnerHouse = *(HouseClass **)(this + 196);
        if ( !OwnerHouse )
        {
          if ( !BuildingType::IsSpecialType(*(void **)(this + 200)) )
            return 0;
          OwnerHouse = (HouseClass *)BuildingType::FindOwnerHouse(*(void **)(this + 200));
          if ( !OwnerHouse )
            return 0;
        }
      }
      if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[21752] )
      {
        v4 = this->q0B8;
        if ( v4 >= 0 )
        {
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] )
          {
            if ( TeamClass::CountActiveTeamsForType(OwnerHouse, (ObjectClass *)this) >= this->q0B8 )
              return 0;
          }
          else if ( this->q0DC >= v4 )
          {
            return 0;
          }
        }
      }
      Debug::Log();
      v6 = __2_YAPAXI_Z(0xA0u);
      if ( !v6 )
        return 0;
      return MissionClass::Construct(v6, (AbstractClass *)this, (AbstractClass *)OwnerHouse, 0);
}
} }

// ==== BACKFILL 0x006F0FC0  TeamTypeClass::FindByName  cls=TeamTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TeamTypeClass::FindByName()
{
{
    int v2;
    if ( !this )
    return 0;
    v2 = 0;
    if ( *(int *)&HouseClass_Player.__pad_5568[23036] <= 0 )
    return 0;
    while ( _strcmpi(this, (const void *)(*(int *)(*(int *)&HouseClass_Player.__pad_5568[23024] + 4 * v2) + 36)) && _strcmpi(this, (const void *)(*(int *)(*(int *)&HouseClass_Player.__pad_5568[23024] + 4 * v2) + 100)) )
  {
    if ( ++v2 >= *(int *)&HouseClass_Player.__pad_5568[23036] )
    return 0;
  }
    return *(int *)(*(int *)&HouseClass_Player.__pad_5568[23024] + 4 * v2);
}
}

// ==== BACKFILL 0x006F1AB0  TeamTypeClass::ReadScriptData  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
TeamTypeClass * TeamTypeClass::ReadScriptData(char * a1, int a2)
{
{
    CCINIClass *KeyCount;
    CCINIClass *i;
    unsigned char *StringByIndex;
    TeamTypeClass *result;
    INIClass *v8;
    int j;
    ObjectClass *v10;
    char Buffer[32];
    KeyCount = (CCINIClass *)INIClass::GetKeyCount(a1, (INIClass *)&DataGlobal_830620.__pad_579C[54080]);
    for ( i = 0; (int)i < (int)KeyCount; i = (CCINIClass *)((char *)(i) + 1) )
  {
    StringByIndex = (unsigned char *)INIClass::GetStringByIndex(a1, (CCINIClass *)&DataGlobal_830620.__pad_579C[54080], i);
    INIClass::GetString( (unsigned char ***)a1, (INIClass *)&DataGlobal_830620.__pad_579C[54080], StringByIndex, (INIClass *)&DataGlobal_87F8E4.__pad_5568[20760], (INIClass *)Buffer, 32);
    INIClass::ClearSection((int)a1, (INIClass *)Buffer, 0);
  }
    INIClass::ClearSection((int)a1, (INIClass *)&DataGlobal_830620.__pad_579C[54080], 0);
    result = *(TeamTypeClass **)&g_NetworkPlayerBuffer.__pad_14B0[452];
    v8 = 0;
    for ( j = 0; j < *(int *)&g_NetworkPlayerBuffer.__pad_14B0[452]; ++j )
  {
    if ( *(int *)(*(int *)(*(int *)&g_NetworkPlayerBuffer.__pad_14B0[440] + 4 * j) + 232) == a2 )
    {
    v10 = (ObjectClass *)v8;
    v8 = (INIClass *)((char *)(v8) + 1);
    sprintf(Buffer, g_Str_Trace__d, v10);
    INIClass::SetString( a1, (INIClass *)&DataGlobal_830620.__pad_579C[54080], (INIClass *)Buffer, (INIClass *)(*(int *)(*(int *)&g_NetworkPlayerBuffer.__pad_14B0[440] + 4 * j) + 36));
    (*(void (__thiscall **)(int, char *))(**(int **)(*(int *)&g_NetworkPlayerBuffer.__pad_14B0[440] + 4 * j) + 104))( *(int *)(*(int *)&g_NetworkPlayerBuffer.__pad_14B0[440] + 4 * j), a1);
    }
    result = *(TeamTypeClass **)&g_NetworkPlayerBuffer.__pad_14B0[452];
  }
    return result;
}
}

// ==== BACKFILL 0x006F1B90  TeamTypeClass::SaveToINI  cls=TeamTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TeamTypeClass::SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// ==== BACKFILL 0x006F1BB0  TeamTypeClass::LoadTypeData  cls=TeamTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TeamTypeClass::LoadTypeData(AbstractTypeClass * aP0, int aP1)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix_0((AbstractClass *)aP0, (AbstractClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    AbstractTypeClass::Init((int)aP0, (AbstractTypeClass *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_TeamTypeClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_TeamTypeClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_TeamTypeClass;
    *(int *)&aP0->__pad_0[12] = &vt_TeamTypeClass;
    }
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].__pad_24[8]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].__pad_24[20]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].UINameLabel[11]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].UINameLabel[15]);
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x006F1C40  TeamTypeClass::GetClassIdentifier  cls=TeamTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TeamTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -774134194;
  a2[1] = 298977144;
  a2[2] = 1610655148;
  a2[3] = -1252326136;
  return 0;
}

// ==== BACKFILL 0x006F1E20  TriggerClass::EvaluateObjectForTrigger  cls=TriggerClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { bool TriggerClass::EvaluateObjectForTrigger(int a1, int a2) {
{
      int queuedMission;
      int v5;
      int v6;
      bool result;

      queuedMission = aP1[1].queuedMission;
      result = 0;
      if ( (!queuedMission || this != *(_DWORD *)(queuedMission + 36)) && aP1->health > 0 )
      {
        if ( aP1->isAliveFlag )
        {
          if ( !aP1->inLimbo && !Team::AllMembersValid((int *)aP1->__pad_0) && aP1->focus == (void *)a3 )
          {
            if ( (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 388))(aP1) == -1
              || (v5 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 388))(aP1),
                  IPersistStream::SetField(v5)) )
            {
              if ( (aP1->__pad_3F7[42] || this->q0A9) && (aP1->__pad_3F7[43] || !this->q0A9) )
              {
                v6 = aP1[1].queuedMission;
                if ( (!v6 || *(_DWORD *)(*(_DWORD *)(v6 + 36) + 180) < this->q0B4)
                  && ((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 44))(aP1) != 2
                   || !*(_DWORD *)(*(int (__thiscall **)(TechnoClass *, _DWORD))(*(_DWORD *)aP1->__pad_0 + 1016))(aP1, 0)
                   || LODWORD(aP1->pitchAngle)) )
                {
                  return 1;
                }
              }
            }
          }
        }
      }
      return result;
}
} }

// ==== BACKFILL 0x006F1F30  TeamTypeClass::FlashAllInstances  cls=TeamTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TeamTypeClass::FlashAllInstances(AnimClass * aP1)
{
{
    int result;
    int i;
    int v5;
    result = *(int *)&g_CellDirectionOffsets.__pad_579C[62156];
    for ( i = 0; i < *(int *)&g_CellDirectionOffsets.__pad_579C[62156]; ++i )
  {
    v5 = *(int *)(*(int *)&g_CellDirectionOffsets.__pad_579C[62144] + 4 * i);
    if ( *(void **)(v5 + 36) == this )
    TeamTypeClass::Check((int *)v5, (int)aP1);
    result = *(int *)&g_CellDirectionOffsets.__pad_579C[62156];
  }
    return result;
}
}

// ==== BACKFILL 0x006F1F70  TeamTypeClass::FindFirstInstance  cls=TeamTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TeamTypeClass::FindFirstInstance()
{
{
    int v1;
    char *i;
    int result;
    v1 = 0;
    if ( g_HouseClass_AIProductionState <= 0 )
    return 0;
    for ( i = (char *)g_TeamClassPool; ; i += 4 )
  {
    result = *(int *)i;
    if ( *(void **)(*(int *)(i) + 36) == this )
    break;
    if ( ++v1 >= g_HouseClass_AIProductionState )
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x006F20A0  TeamTypeClass::GetTypeIdentifier  cls=TeamTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TeamTypeClass::GetTypeIdentifier()
{
return 35;
}

// ==== BACKFILL 0x006F20B0  TeamTypeClass::GetObjectSize  cls=TeamTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TeamTypeClass::GetObjectSize()
{
return 248;
}

// ==== BACKFILL 0x006F20D0  TeamTypeClass::ddtor  cls=TeamTypeClass  sig=csp  renamed_refs=0  residual=- ====
TeamTypeClass * TeamTypeClass::ddtor(char a2)
{
    TeamTypeClass* v7 = this;
    AbstractClass::AnnounceExpiredPointer(this, 1);
    int v2 = DataGlobal_A8ECA0.FindItemIndex(&v7);
    if ( v2 != -1 && v2 < DataGlobal_A8ECB0 && v2 < --DataGlobal_A8ECB0 )
    {
        do
        {
            ++v2;
            *(DataGlobal_A8ECA4 + v2 - 1) = *(DataGlobal_A8ECA4 + v2);
        }
        while ( v2 < DataGlobal_A8ECB0 );
    }
    int v3 = DataGlobal_B0F670.FindItemIndex(&v7);
    if ( v3 != -1 && v3 < DataGlobal_B0F680 && v3 < --DataGlobal_B0F680 )
    {
        do
        {
            ++v3;
            *(DataGlobal_B0F674 + v3 - 1) = *(DataGlobal_B0F674 + v3);
        }
        while ( v3 < DataGlobal_B0F680 );
    }
    AbstractTypeClass::Dtor(this);
    if ( a2 & 1 )
        OperatorDelete(this);
    return this;
}

// ==== BACKFILL 0x006F3D60  TechnoClass::GetTurretOffset  cls=TechnoClass  sig=csp  renamed_refs=0  residual=q005 ====
namespace ra2 { namespace game { void* TechnoClass::GetTurretOffset(void* a1, int a2) {
{
      int v4;
      const void *v5;
      _DWORD *v6;
      _DWORD *v7;
      float *v8;
      int v9;
      float v10;
      int v11;
      int v12;
      int v13;
      int *v14;
      int v15;
      int v16;
      int v17;
      float v19;
      float v20;
      double v21;
      float v22;
      float v23[3];
      _BYTE v24[4];
      float v25[3];
      float v26[12];
      _BYTE v27[48];
      _BYTE v28[48];

      v4 = ((int (__thiscall *)(_DWORD **))(*this)[33])(this);
      if ( this && (this->q005 & 4) != 0 && this->q674 )
      {
        v5 = (const void *)(*(int (__stdcall **)(_DWORD, _BYTE *, _DWORD))(*this->q674 + 36))(this->q674, v28, 0);
        Transform::Copy(v27, v5);
        v6 = *this;
        qmemcpy(v26, v27, sizeof(v26));
        v7 = (_DWORD *)((int (__thiscall *)(_DWORD **, _BYTE *))v6[170])(this, v24);
        v21 = (double)(int)((((unsigned int)((*v7 >> 10) + 1) >> 1) & 0x1F) - 8) * -0.1963495408493621
            - (double)(int)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)this + 452, &v21) >> 10) + 1) >> 1) & 0x1F)
                          - 8)
            * -0.1963495408493621;
      }
      else
      {
        Matrix3x4::Identity(v26);
        v21 = (double)(int)((((unsigned int)((*(_DWORD *)((int (__thiscall *)(_DWORD **, double *))(*this)[170])(this, &v21) >> 10)
                                           + 1) >> 1)
                           & 0x1F)
                          - 8)
            * -0.1963495408493621;
      }
      v19 = (float)*(int *)(v4 + 1824);
      Vector::MatrixMulVectorMath(v19, 0.0, 0.0);
      v20 = v21;
      Matrix2D::Rotate(v26, v20);
      memset(v23, 0, sizeof(v23));
      v8 = TransformMatrix3x4Point(v25, v26, v23);
      *(float *)&v21 = *v8;
      v9 = *((_DWORD *)v8 + 1);
      v10 = v8[2];
      HIDWORD(v21) = v9;
      v22 = v10;
      v11 = Math::RoundToInt(*(float *)&v21);
      v12 = Math::RoundToInt(-*((float *)&v21 + 1));
      v13 = Math::RoundToInt(v22);
      v14 = (int *)((int (__thiscall *)(_DWORD **, float *))(*this)[43])(this, v25);
      v15 = *v14;
      v16 = v14[1];
      v17 = v14[2];
      *a2 = v11 + v15;
      a2[1] = v12 + v16;
      a2[2] = v13 + v17;
      return a2;
}
} } }

// ==== BACKFILL 0x006F4500  TechnoClass::DTOR  cls=TechnoClass  sig=csp  renamed_refs=20  residual=- ====
int TechnoClass::DTOR()
{
    PlanningTokenClass *v2 = this->planningToken;
    this->vtable4 = 0;
    if ( v2 )
    {
        Sidebar::CancelSidebarProductionQueue(v2);
        this->planningToken = 0;
    }
    CaptureManagerClass *v3 = this->rockerLinkedUnit;
    if ( v3 )
    {
        v3->vtRel32(1);
        this->rockerLinkedUnit = 0;
    }
    SpawnManagerClass *v4 = this->captureManager;
    if ( v4 )
    {
        v4->vtRel32(1);
        this->captureManager = 0;
    }
    SlaveManagerClass *v5 = this->mindControlledBy_a_unit;
    if ( v5 )
    {
        TechnoClass::MutateAll(v5, 0, 0);
        SlaveManagerClass *v6 = this->mindControlledBy_a_unit;
        if ( v6 )
        {
            v6->vtRel32(1);
        }
        this->mindControlledBy_a_unit = 0;
    }
    TemporalClass *v7 = this->temporalUsing;
    if ( v7 )
    {
        v7->vtRel248();
        this->temporalUsing = 0;
    }
    AirstrikeClass *v8 = this->owningHouseIndex0;
    if ( v8 && v8[19] == this )
    {
        v8->vtRel32(1);
        this->owningHouseIndex0 = 0;
    }
    AudioFile::Stop(&this->turretRotateSoundController);
    AudioFileClass::Release(&this->turretRotateSoundController);
    AudioFile::Stop(&this->gattlingSoundController);
    AudioFileClass::Release(&this->gattlingSoundController);
    AudioFile::Stop(&this->audioController5);
    AudioFileClass::Release(&this->audioController5);
    AudioFileClass::Release(&this->audioController6);
    this->Owner = 0;
    this->isOwnedByCurrentPlayer = 0;
    TechnoClass* v17 = this;
    TechnoClass_Array;
    int v9 = TechnoClass_Array.FindItemIndex(&v17);
    if ( v9 != -1 )
        FactoryClass::RemoveItem(&TechnoClass_Array, v9);
    TechnoClass* v17b = this;
    DataGlobal_B0F6C8;
    int v10 = DataGlobal_B0F6C8.FindItemIndex(&v17b);
    if ( v10 != -1 )
        DynamicVector::RemoveItem(&DataGlobal_B0F6C8, v10);
    AnimClass *v11 = this->behindAnim;
    if ( v11 )
    {
        v11->vtRel248();
        this->behindAnim = 0;
    }
    AnimClass *v12 = this->deployAnim;
    if ( v12 )
    {
        v12->vtRel248();
        this->deployAnim = 0;
    }
    AbstractClassVector::ddtor(&this->q470);
    void *v13 = this->attackedTargets;
    if ( v13 && this->vecAbs_IsAllocated )
    {
        OperatorDelete(v13);
        this->attackedTargets = 0;
    }
    this->vecAbs_IsAllocated = 0;
    this->audioController3 = 0;
    void *v14 = this->vecInt_Items;
    if ( v14 && this->vecInt_IsAllocated )
    {
        OperatorDelete(v14);
        this->vecInt_Items = 0;
    }
    this->vecInt_IsAllocated = 0;
    this->vecInt_Capacity = 0;
    void *v15 = this->flashing;
    if ( v15 && this->vecTechno_IsAllocated )
    {
        OperatorDelete(v15);
        this->flashing = 0;
    }
    this->vecTechno_IsAllocated = 0;
    this->vecTechno_Capacity = 0;
    return ObjectClass::Dtor(this);
}

// ==== BACKFILL 0x006F5EF0  DrawTacticalLine3D  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Tactical_DrawLine3D(unsigned int * a1, int * a2, int a3)
{
{
    int *v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int *v12;
    int v13;
    int v14;
    int v15;
    struct IPersistStreamVtbl *lpVtbl;
    struct IPersistStreamVtbl *v17;
    int v19;
    int v20;
    int v21[2];
    int v22;
    int v23;
    int v24;
    int v25;
    int v26[3];
    v5 = Coord::Subtract(v26, (3 * *a1 + *a2) / 4, (3 * *((int*)(a1) + 1) + *((int*)(a2) + 1)) / 4, (3 * *((int*)(a1) + 2) + *((int*)(a2) + 2)) / 4);
    v6 = *((int*)(a1) + 1);
    v7 = *v5;
    v8 = v5[1];
    v9 = v5[2];
    v21[1] = v8;
    v10 = *((int*)(a2) + 1);
    v21[0] = v7;
    v11 = *a2;
    v22 = v9;
    v12 = Coord::Subtract(v26, (3 * v11 + *a1) / 4, (3 * v10 + v6) / 4, (3 * *((int*)(a2) + 2) + *((int*)(a1) + 2)) / 4);
    v13 = v12[1];
    v14 = v12[2];
    v23 = *v12;
    v24 = v13;
    v15 = *((int*)(a1) + 2);
    v25 = v14;
    lpVtbl = g_TacticalClass_Instance->__tail_0;
    if ( v15 <= v22 )
    ((void (__stdcall *)(int *, int *, int, int, int, int))lpVtbl[3].QueryInterface)(v21, a1, a3, 0, v19, v20);
    else
    ((void (__stdcall *)(int *, int *, int, int, int, int))lpVtbl[3].QueryInterface)(a1, v21, a3, 0, v19, v20);
    v17 = g_TacticalClass_Instance->__tail_0;
    if ( *((int*)(a2) + 2) <= v26[1] )
    return ((int (__stdcall *)(int *, int *))v17[3].QueryInterface)(&v25, a2);
    else
    return ((int (__stdcall *)(int *, int *))v17[3].QueryInterface)(a2, &v25);
}
}

// ==== BACKFILL 0x006F6030  globalHelper_0F6030  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_6F6030(int * a1, unsigned int * a2, int a3)
{
{
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    struct IPersistStreamVtbl *lpVtbl;
    int v11[3];
    v4 = *a1;
    v5 = *((int*)(a1) + 1);
    v6 = *((int*)(a1) + 2);
    v7 = 3 * v5 + *((int*)(a2) + 1);
    v8 = 3 * v6 + *((int*)(a2) + 2);
    v11[0] = (3 * v4 + *a2) / 4;
    v11[1] = v7 / 4;
    v11[2] = v8 / 4;
    lpVtbl = g_TacticalClass_Instance->__tail_0;
    if ( v6 <= v8 / 4 )
    return ((int (__stdcall *)(int *, int *, int, int))lpVtbl[3].QueryInterface)(v11, a1, a3, 0);
    else
    return ((int (__stdcall *)(int *, int *, int, int))lpVtbl[3].QueryInterface)(a1, v11, a3, 0);
}
}

// ==== BACKFILL 0x006F9DB0  TechnoClass::GetID  cls=TechnoClass  sig=csp  renamed_refs=1  residual=- ====
int TechnoClass::GetID() const {
return this->Owner->relatedTagsCount;
}

// ==== BACKFILL 0x006F9DC0  TechnoClass::GetTarget  cls=TechnoClass  sig=csp  renamed_refs=1  residual=- ====
int TechnoClass::GetTarget() const {
return this->Owner;
}

// ==== BACKFILL 0x006FBFA0  TechnoClass::ExecuteMoveCommand  cls=TechnoClass  sig=csp  renamed_refs=1  residual=- ====
namespace ra2 { namespace game { int TechnoClass::ExecuteMoveCommand() {
{
    ScreenCaptureCommandClass *result;
    void **v3;
    if ( (this->isDiscoveredByCurrentPlayer || (unsigned char)House::IsHumanPlayer(*((HouseClass **)(this) + 135)) || (result = (ScreenCaptureCommandClass *)g_hWnd) == 0) && (result = (ScreenCaptureCommandClass *)ObjectClass::HandleSelection(this), (char)result) )
  {
    v3 = (void **)this->attachedTag;
    if ( v3 )
    TeamClass::Update_0(v3, 33, (AbstractClass *)this, *(IUnknown **)&g_OverlayTypeConfig.__pad_579C[6844], 0, 0);
    if ( (unsigned char)House::IsHumanPlayer(*((HouseClass **)(this) + 135)) || *(char *)(*(int *)(this->Owner + 52) + 422) )
    {
    if ( g_MoveFeedback )
    this->SelectRandomTarget();
    }
    TechnoClass::IsProductionChainActive(this);
    LOBYTE(result) = 1;
  }
    else
  {
    LOBYTE(result) = 0;
  }
    return (int)result->__pad_0;
}
} } }

// ==== BACKFILL 0x006FC090  TechnoClass::Vt240Thunk  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int TechnoClass::Vt240Thunk() {
{
      int v2;
      int v3;

      return this->vt240(v2, v3, 0);
}
} } }
