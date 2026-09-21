// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00672280  RulesClass::readCrateRules  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
int RulesClass::readCrateRules()
{
{
    int KeyCount;
    int i;
    unsigned char *StringByIndex;
    char Destination[32];
    char *v6;
    KeyCount = INIClass::GetKeyCount(v6, (unsigned char *)DataGlobal_839E34);
    for ( i = 0; i < KeyCount; ++i )
  {
    StringByIndex = (unsigned char *)INIClass::GetStringByIndex(v6, (unsigned char *)DataGlobal_839E34, i);
    if ( INIClass::GetString( (unsigned char ***)v6, (unsigned char *)DataGlobal_839E34, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) )
    {
    KeywordType::FindOrCreate2(Destination);
    }
  }
    return KeyCount > 0;
}
}

// ==== BACKFILL 0x006722F0  RulesClass::LoadCountries  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int RulesClass::LoadCountries() {
{
    int KeyCount;
    int i;
    unsigned char *StringByIndex;
    char Destination[32];
    char *v6;
    KeyCount = INIClass::GetKeyCount(v6, (unsigned char *)DataGlobal_839E28);
    for ( i = 0; i < KeyCount; ++i )
  {
    StringByIndex = (unsigned char *)INIClass::GetStringByIndex(v6, (unsigned char *)DataGlobal_839E28, i);
    if ( INIClass::GetString( (unsigned char ***)v6, (unsigned char *)DataGlobal_839E28, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) )
    {
    WeaponTypeClass::Create(Destination);
    }
  }
    return KeyCount > 0;
}
} }

// ==== BACKFILL 0x00672360  CCINIClass::LoadBuildingTypes  cls=CCINIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CCINIClass::LoadBuildingTypes() {
{
    int KeyCount;
    int i;
    unsigned char *StringByIndex;
    char Destination[32];
    char *v6;
    KeyCount = INIClass::GetKeyCount(v6, (unsigned char *)DataGlobal_839E18);
    for ( i = 0; i < KeyCount; ++i )
  {
    StringByIndex = (unsigned char *)INIClass::GetStringByIndex(v6, (unsigned char *)DataGlobal_839E18, i);
    if ( INIClass::GetString( (unsigned char ***)v6, (unsigned char *)DataGlobal_839E18, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) )
    {
    BuildingTypeClass::FindOrCreateAlt(Destination);
    }
  }
    return KeyCount > 0;
}
} }

// ==== BACKFILL 0x006723D0  RulesClass::readRadiation  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
int RulesClass::readRadiation()
{
{
    int KeyCount;
    int i;
    unsigned char *StringByIndex;
    char Destination[32];
    char *v6;
    KeyCount = INIClass::GetKeyCount(v6, (unsigned char *)DataGlobal_839E08);
    for ( i = 0; i < KeyCount; ++i )
  {
    StringByIndex = (unsigned char *)INIClass::GetStringByIndex(v6, (unsigned char *)DataGlobal_839E08, i);
    if ( INIClass::GetString( (unsigned char ***)v6, (unsigned char *)DataGlobal_839E08, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) )
    {
    KeywordClass::FindOrCreate(Destination);
    }
  }
    return KeyCount > 0;
}
}

// ==== BACKFILL 0x006725F0  RulesClass::ReadSidesList  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
int RulesClass::ReadSidesList()
{
{
    int KeyCount;
    int i;
    unsigned char *StringByIndex;
    char Destination[32];
    char *v6;
    KeyCount = INIClass::GetKeyCount(v6, (unsigned char *)DataGlobal_839DEC);
    for ( i = 0; i < KeyCount; ++i )
  {
    StringByIndex = (unsigned char *)INIClass::GetStringByIndex(v6, (unsigned char *)DataGlobal_839DEC, i);
    if ( INIClass::GetString( (unsigned char ***)v6, (unsigned char *)DataGlobal_839DEC, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) )
    {
    WeaponTypeClass::Process(Destination);
    }
  }
    return KeyCount > 0;
}
}

// ==== BACKFILL 0x00672660  RulesClass::LoadBuildingTypes  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int RulesClass::LoadBuildingTypes() {
{
    int KeyCount;
    int i;
    unsigned char *StringByIndex;
    char Destination[32];
    char *v6;
    KeyCount = INIClass::GetKeyCount(v6, (unsigned char *)DataGlobal_839DDC);
    for ( i = 0; i < KeyCount; ++i )
  {
    StringByIndex = (unsigned char *)INIClass::GetStringByIndex(v6, (unsigned char *)DataGlobal_839DDC, i);
    if ( INIClass::GetString( (unsigned char ***)v6, (unsigned char *)DataGlobal_839DDC, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) )
    {
    BuildingTypeClass::FindOrCreate(Destination);
    }
  }
    return KeyCount > 0;
}
} }

// ==== BACKFILL 0x006726D0  CCINIClass::LoadTypeList  cls=CCINIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CCINIClass::LoadTypeList() {
{
    int KeyCount;
    int i;
    unsigned char *StringByIndex;
    char Destination[32];
    char *v6;
    KeyCount = INIClass::GetKeyCount(v6, (unsigned char *)DataGlobal_839DCC);
    for ( i = 0; i < KeyCount; ++i )
  {
    StringByIndex = (unsigned char *)INIClass::GetStringByIndex(v6, (unsigned char *)DataGlobal_839DCC, i);
    if ( INIClass::GetString( (unsigned char ***)v6, (unsigned char *)DataGlobal_839DCC, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) )
    {
    TerrainTypeClass::FindOrCreate(Destination);
    }
  }
    return KeyCount > 0;
}
} }

// ==== BACKFILL 0x00672740  RulesClass::ReadSideData  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int RulesClass::ReadSideData() {
{
    int KeyCount;
    int i;
    unsigned char *StringByIndex;
    int *v4;
    char Destination[128];
    char *v7;
    KeyCount = INIClass::GetKeyCount(v7, (unsigned char *)DataGlobal_839DC4);
    for ( i = 0; i < KeyCount; ++i )
  {
    StringByIndex = (unsigned char *)INIClass::GetStringByIndex(v7, (unsigned char *)DataGlobal_839DC4, i);
    if ( INIClass::GetString( (unsigned char ***)v7, (unsigned char *)DataGlobal_839DC4, StringByIndex, &g_INI_DefaultBuffer, Destination, 128) )
    {
    v4 = TechnoClass::Create(Destination);
    }
    else
    {
    v4 = 0;
    }
    (*(void (__thiscall **)(int *, char *))(*v4 + 100))(v4, v7);
  }
    return KeyCount > 0;
}
} }

// ==== BACKFILL 0x006727D0  FactoryClass::LoadType  cls=FactoryClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int FactoryClass::LoadType() {
{
    int KeyCount;
    int i;
    unsigned char *StringByIndex;
    char Destination[32];
    char *v6;
    KeyCount = INIClass::GetKeyCount(v6, (unsigned char *)DataGlobal_839DB8);
    for ( i = 0; i < KeyCount; ++i )
  {
    StringByIndex = (unsigned char *)INIClass::GetStringByIndex(v6, (unsigned char *)DataGlobal_839DB8, i);
    if ( INIClass::GetString( (unsigned char ***)v6, (unsigned char *)DataGlobal_839DB8, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) )
    {
    FactoryClass::FindOrCreate(Destination);
    }
  }
    return KeyCount > 0;
}
} }

// ==== BACKFILL 0x006728B0  RulesClass::LoadAnimTypes  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int RulesClass::LoadAnimTypes() {
{
    int KeyCount;
    int i;
    unsigned char *StringByIndex;
    char Destination[32];
    char *v6;
    KeyCount = INIClass::GetKeyCount(v6, (unsigned char *)g_INI_Key_Animations);
    for ( i = 0; i < KeyCount; ++i )
  {
    StringByIndex = (unsigned char *)INIClass::GetStringByIndex(v6, (unsigned char *)g_INI_Key_Animations, i);
    if ( INIClass::GetString( (unsigned char ***)v6, (unsigned char *)g_INI_Key_Animations, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) )
    {
    AnimTypeClass::FindOrCreate(Destination);
    }
  }
    return KeyCount > 0;
}
} }

// ==== BACKFILL 0x00672920  CCINIClass::LoadUnitTypes  cls=CCINIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CCINIClass::LoadUnitTypes() {
{
    int KeyCount;
    int i;
    unsigned char *StringByIndex;
    char Destination[32];
    char *v6;
    KeyCount = INIClass::GetKeyCount(v6, (unsigned char *)g_INI_Key_VoxelAnims);
    for ( i = 0; i < KeyCount; ++i )
  {
    StringByIndex = (unsigned char *)INIClass::GetStringByIndex(v6, (unsigned char *)g_INI_Key_VoxelAnims, i);
    if ( INIClass::GetString( (unsigned char ***)v6, (unsigned char *)g_INI_Key_VoxelAnims, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) )
    {
    UnitTypeClass::FindOrCreate(Destination);
    }
  }
    return KeyCount > 0;
}
} }

// ==== BACKFILL 0x00672990  WarheadTypeClass::LoadType  cls=WarheadTypeClass  sig=csp  renamed_refs=0  residual=- ====
int WarheadTypeClass::LoadType()
{
{
    int KeyCount;
    int i;
    unsigned char *StringByIndex;
    char Destination[32];
    char *v6;
    KeyCount = INIClass::GetKeyCount(v6, (unsigned char *)g_INI_Key_Warheads);
    for ( i = 0; i < KeyCount; ++i )
  {
    StringByIndex = (unsigned char *)INIClass::GetStringByIndex(v6, (unsigned char *)g_INI_Key_Warheads, i);
    if ( INIClass::GetString( (unsigned char ***)v6, (unsigned char *)g_INI_Key_Warheads, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) )
    {
    WarheadTypeClass::FindOrCreate(Destination);
    }
  }
    return KeyCount > 0;
}
}

// ==== BACKFILL 0x00672A00  RulesClass::readColors  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int RulesClass::readColors() {
{
    int KeyCount;
    int i;
    unsigned char *StringByIndex;
    char Destination[32];
    char *v6;
    KeyCount = INIClass::GetKeyCount(v6, (unsigned char *)g_INI_Key_Particles);
    for ( i = 0; i < KeyCount; ++i )
  {
    StringByIndex = (unsigned char *)INIClass::GetStringByIndex(v6, (unsigned char *)g_INI_Key_Particles, i);
    if ( INIClass::GetString( (unsigned char ***)v6, (unsigned char *)g_INI_Key_Particles, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) )
    {
    NetworkEventClass::Process(Destination);
    }
  }
    return KeyCount > 0;
}
} }

// ==== BACKFILL 0x00672A70  CCINIClass::ReadBuildingSettings  cls=CCINIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CCINIClass::ReadBuildingSettings() {
{
    int KeyCount;
    int i;
    unsigned char *StringByIndex;
    char Destination[32];
    char *v6;
    KeyCount = INIClass::GetKeyCount(v6, (unsigned char *)g_INI_Key_ParticleSystems);
    for ( i = 0; i < KeyCount; ++i )
  {
    StringByIndex = (unsigned char *)INIClass::GetStringByIndex(v6, (unsigned char *)g_INI_Key_ParticleSystems, i);
    if ( INIClass::GetString( (unsigned char ***)v6, (unsigned char *)g_INI_Key_ParticleSystems, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) )
    {
    BuildingTypeClass::LoadOrGet(Destination);
    }
  }
    return KeyCount > 0;
}
} }

// ==== BACKFILL 0x00672AE0  RulesClass::ReadMultiplayerDefaults  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int RulesClass::ReadMultiplayerDefaults() {
{
      int result;
      char *i;
      int v4;
      int v5;
      char *j;
      char *k;
      char *m;
      char *n;
      char *ii;
      char *jj;
      char *kk;
      char *mm;
      int v14;
      char *nn;
      char *i1;
      char *i2;
      char *i3;
      char *i4;
      char *i5;
      int v21;
      int *INIClassBuildingTypeList;
      int *v23;
      int *v24;
      int *v25;
      int Int_Overwrite;
      unsigned int v27;
      unsigned int v28;
      double Double_Overwrite;
      int v30;
      int v31;
      int v32;
      int v33;
      int v34;
      int v35;
      int v36;
      double v37;
      int v38;
      int v39;
      double v40;
      double v41;
      int v42;
      int v43;
      int v44;
      int v45;
      double v46;
      int v47;
      int v48;
      int v49;
      double v50;
      int v51;
      int v52;
      double v53;
      double v54;
      int v55;
      int v56;
      int v57;
      int v58;
      double v59;
      int v60;
      int v61;
      int v62;
      double v63;
      int v64;
      int v65;
      double v66;
      double v67;
      int v68;
      int v69;
      char v70;
      char Bool_Overwrite;
      double v72;
      double v73;
      int v74;
      int v75;
      int v76;
      int MaximumBuildingPlacementFailures;
      double v78;
      int v79;
      int v80;
      double v81;
      int v82;
      int v83;
      double v84;
      int v85;
      int v86;
      double v87;
      int v88;
      void **v89[3];
      __int16 v90;
      int v91;
      double v92;
      void ***IntList;
      int v94[6];
      int v95;
      _DWORD v96[6];
      int v97;
      char String[128];
      unsigned __int8 ***v99;

      result = INIClass::BinarySearchSection((int)v99, (unsigned __int8 *)DataGlobal_839DA4);
      if ( result )
      {
        if ( INIClass::GetString(
               v99,
               (unsigned __int8 *)DataGlobal_839DA4,
               (unsigned __int8 *)DataGlobal_83D4A0,
               &g_INI_DefaultBuffer,
               String,
               128) )
        {
          DynamicVectorClass::BuildingTypeConstructor(v94, 0, 0);
          v94[0] = (int)&vt_TypeList_BuildingTypeClass_const;
          for ( i = strtok(String, Delimiter); i; i = strtok(0, Delimiter) )
          {
            if ( !*i )
              break;
            IntList = (void ***)BuildingTypeClass::FindOrCreate(i);
            if ( IntList )
              DynamicVector::Add_Alt3(v94, &IntList);
          }
          TypeList::BuildingTypeCopy(v96, v94);
          v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
          DynamicVectorClass::Destroy((int)v94);
        }
        else
        {
          TypeList::BuildingTypeCopy(v96, &this->IvanWarhead[1]);
        }
        VectorClass::CopyBuilding(&this->IvanWarhead[1], v96);
        v4 = v96[4];
        v5 = v96[5];
        this->CanDetonateTimeBomb[3] = v97;
        this->CanDetonateTimeBomb[1] = v4;
        this->CanDetonateTimeBomb[2] = v5;
        v96[0] = &vt_VectorClass_BuildingTypeClass_const;
        DynamicVectorClass::Destroy((int)v96);
        if ( INIClass::GetString(
               v99,
               (unsigned __int8 *)DataGlobal_839DA4,
               (unsigned __int8 *)DataGlobal_83D494,
               &g_INI_DefaultBuffer,
               String,
               128) )
        {
          DynamicVectorClass::BuildingTypeConstructor(v94, 0, 0);
          v94[0] = (int)&vt_TypeList_BuildingTypeClass_const;
          for ( j = strtok(String, Delimiter); j; j = strtok(0, Delimiter) )
          {
            if ( !*j )
              break;
            IntList = (void ***)BuildingTypeClass::FindOrCreate(j);
            if ( IntList )
              DynamicVector::Add_Alt3(v94, &IntList);
          }
          TypeList::BuildingTypeCopy(v96, v94);
          v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
          DynamicVectorClass::Destroy((int)v94);
        }
        else
        {
          TypeList::BuildingTypeCopy(v96, &this->CHRONOSK_SHP);
        }
        DynamicVector::Copy(&this->CHRONOSK_SHP, v96);
        LODWORD(this->?) = v97;
        v96[0] = &vt_VectorClass_BuildingTypeClass_const;
        DynamicVectorClass::Destroy((int)v96);
        if ( INIClass::GetString(
               v99,
               (unsigned __int8 *)DataGlobal_839DA4,
               (unsigned __int8 *)DataGlobal_83D484,
               &g_INI_DefaultBuffer,
               String,
               128) )
        {
          DynamicVectorClass::BuildingTypeConstructor(v94, 0, 0);
          v94[0] = (int)&vt_TypeList_BuildingTypeClass_const;
          for ( k = strtok(String, Delimiter); k; k = strtok(0, Delimiter) )
          {
            if ( !*k )
              break;
            IntList = (void ***)BuildingTypeClass::FindOrCreate(k);
            if ( IntList )
              DynamicVector::Add_Alt3(v94, &IntList);
          }
          TypeList::BuildingTypeCopy(v96, v94);
          v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
          DynamicVectorClass::Destroy((int)v94);
        }
        else
        {
          TypeList::BuildingTypeCopy(v96, (_DWORD *)&this->? + 1);
        }
        DynamicVector::Copy((_DWORD *)&this->? + 1, v96);
        this->?[3] = v97;
        v96[0] = &vt_VectorClass_BuildingTypeClass_const;
        DynamicVectorClass::Destroy((int)v96);
        if ( INIClass::GetString(
               v99,
               (unsigned __int8 *)DataGlobal_839DA4,
               (unsigned __int8 *)DataGlobal_83D474,
               &g_INI_DefaultBuffer,
               String,
               128) )
        {
          DynamicVectorClass::BuildingTypeConstructor(v94, 0, 0);
          v94[0] = (int)&vt_TypeList_BuildingTypeClass_const;
          for ( m = strtok(String, Delimiter); m; m = strtok(0, Delimiter) )
          {
            if ( !*m )
              break;
            IntList = (void ***)BuildingTypeClass::FindOrCreate(m);
            if ( IntList )
              DynamicVector::Add_Alt3(v94, &IntList);
          }
          TypeList::BuildingTypeCopy(v96, v94);
          v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
          DynamicVectorClass::Destroy((int)v94);
        }
        else
        {
          TypeList::BuildingTypeCopy(v96, this->?);
        }
        DynamicVector::Copy(this->?, v96);
        v96[0] = &vt_VectorClass_BuildingTypeClass_const;
        this->?[2] = v97;
        DynamicVectorClass::Destroy((int)v96);
        if ( INIClass::GetString(
               v99,
               (unsigned __int8 *)DataGlobal_839DA4,
               (unsigned __int8 *)DataGlobal_83D468,
               &g_INI_DefaultBuffer,
               String,
               128) )
        {
          TypeList::BuildingTypeConstructor(v96);
          for ( n = strtok(String, Delimiter); n; n = strtok(0, Delimiter) )
          {
            if ( !*n )
              break;
            IntList = (void ***)BuildingTypeClass::FindOrCreate(n);
            if ( IntList )
              DynamicVector::Add_Alt3(v96, &IntList);
          }
          TypeList::BuildingTypeCopy(v94, v96);
          v96[0] = &vt_VectorClass_BuildingTypeClass_const;
          DynamicVectorClass::Destroy((int)v96);
        }
        else
        {
          TypeList::BuildingTypeCopy(v94, &this->?[3]);
        }
        DynamicVector::Copy(&this->?[3], v94);
        this->?[1] = v95;
        v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
        DynamicVectorClass::Destroy((int)v94);
        if ( INIClass::GetString(
               v99,
               (unsigned __int8 *)DataGlobal_839DA4,
               (unsigned __int8 *)DataGlobal_83D458,
               &g_INI_DefaultBuffer,
               String,
               128) )
        {
          TypeList::BuildingTypeConstructor(v96);
          for ( ii = strtok(String, Delimiter); ii; ii = strtok(0, Delimiter) )
          {
            if ( !*ii )
              break;
            IntList = (void ***)BuildingTypeClass::FindOrCreate(ii);
            if ( IntList )
              DynamicVector::Add_Alt3(v96, &IntList);
          }
          TypeList::BuildingTypeCopy(v94, v96);
          v96[0] = &vt_VectorClass_BuildingTypeClass_const;
          DynamicVectorClass::Destroy((int)v96);
        }
        else
        {
          TypeList::BuildingTypeCopy(v94, &this->?[2]);
        }
        DynamicVector::Copy(&this->?[2], v94);
        this->? = v95;
        v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
        DynamicVectorClass::Destroy((int)v94);
        if ( INIClass::GetString(
               v99,
               (unsigned __int8 *)DataGlobal_839DA4,
               (unsigned __int8 *)DataGlobal_83D444,
               &g_INI_DefaultBuffer,
               String,
               128) )
        {
          TypeList::BuildingTypeConstructor(v96);
          for ( jj = strtok(String, Delimiter); jj; jj = strtok(0, Delimiter) )
          {
            if ( !*jj )
              break;
            IntList = (void ***)BuildingTypeClass::FindOrCreate(jj);
            if ( IntList )
              DynamicVector::Add_Alt3(v96, &IntList);
          }
          TypeList::BuildingTypeCopy(v94, v96);
          v96[0] = &vt_VectorClass_BuildingTypeClass_const;
          DynamicVectorClass::Destroy((int)v96);
        }
        else
        {
          TypeList::BuildingTypeCopy(v94, this->?);
        }
        DynamicVector::Copy(this->?, v94);
        v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
        this->? = v95;
        DynamicVectorClass::Destroy((int)v94);
        if ( INIClass::GetString(
               v99,
               (unsigned __int8 *)DataGlobal_839DA4,
               (unsigned __int8 *)DataGlobal_83D430,
               &g_INI_DefaultBuffer,
               String,
               128) )
        {
          TypeList::BuildingTypeConstructor(v96);
          for ( kk = strtok(String, Delimiter); kk; kk = strtok(0, Delimiter) )
          {
            if ( !*kk )
              break;
            IntList = (void ***)BuildingTypeClass::FindOrCreate(kk);
            if ( IntList )
              DynamicVector::Add_Alt3(v96, &IntList);
          }
          TypeList::BuildingTypeCopy(v94, v96);
          v96[0] = &vt_VectorClass_BuildingTypeClass_const;
          DynamicVectorClass::Destroy((int)v96);
        }
        else
        {
          TypeList::BuildingTypeCopy(v94, &this->MyEffectivenessCoefficientDefault);
        }
        DynamicVector::Copy(&this->MyEffectivenessCoefficientDefault, v94);
        this->TargetStrengthCoefficientDefault = v95;
        v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
        DynamicVectorClass::Destroy((int)v94);
        if ( INIClass::GetString(
               v99,
               (unsigned __int8 *)DataGlobal_839DA4,
               (unsigned __int8 *)DataGlobal_83D41C,
               &g_INI_DefaultBuffer,
               String,
               128) )
        {
          TypeList::BuildingTypeConstructor(v96);
          for ( mm = strtok(String, Delimiter); mm; mm = strtok(0, Delimiter) )
          {
            if ( !*mm )
              break;
            IntList = (void ***)BuildingTypeClass::FindOrCreate(mm);
            if ( IntList )
              DynamicVector::Add_Alt3(v96, &IntList);
          }
          TypeList::BuildingTypeCopy(v94, v96);
          v96[0] = &vt_VectorClass_BuildingTypeClass_const;
          DynamicVectorClass::Destroy((int)v96);
        }
        else
        {
          TypeList::BuildingTypeCopy(v94, this->?);
        }
        DynamicVector::Copy(this->?, v94);
        this->?[2] = v95;
        v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
        DynamicVectorClass::Destroy((int)v94);
        IntList = v89;
        DynamicVectorClass::Copy(v89, &this->?[3]);
        *IntList = &vt_TypeList_int;
        IntList = (void ***)INIClass::ReadIntList(
                              v99,
                              (int)v94,
                              (unsigned __int8 *)DataGlobal_839DA4,
                              (unsigned __int8 *)DataGlobal_83D404,
                              v89[0],
                              v89[1],
                              (int)v89[2],
                              v90,
                              v91,
                              SLODWORD(v92),
                              SHIDWORD(v92));
        Rules::CopyDataArray(&this->?[3], IntList);
        v14 = (int)IntList[6];
        v94[0] = (int)&vt_VectorClass_int;
        this->?[1] = v14;
        VectorClass::Destroy((int)v94);
        if ( INIClass::GetString(
               v99,
               (unsigned __int8 *)DataGlobal_839DA4,
               (unsigned __int8 *)DataGlobal_83D3F4,
               &g_INI_DefaultBuffer,
               String,
               128) )
        {
          TypeList::BuildingTypeConstructor(v96);
          for ( nn = strtok(String, Delimiter); nn; nn = strtok(0, Delimiter) )
          {
            if ( !*nn )
              break;
            IntList = (void ***)BuildingTypeClass::FindOrCreate(nn);
            if ( IntList )
              DynamicVector::Add_Alt3(v96, &IntList);
          }
          TypeList::BuildingTypeCopy(v94, v96);
          v96[0] = &vt_VectorClass_BuildingTypeClass_const;
          DynamicVectorClass::Destroy((int)v96);
        }
        else
        {
          TypeList::BuildingTypeCopy(v94, &this->?[2]);
        }
        DynamicVector::Copy(&this->?[2], v94);
        this->?[0] = v95;
        v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
        DynamicVectorClass::Destroy((int)v94);
        if ( INIClass::GetString(
               v99,
               (unsigned __int8 *)DataGlobal_839DA4,
               (unsigned __int8 *)DataGlobal_83D3E4,
               &g_INI_DefaultBuffer,
               String,
               128) )
        {
          TypeList::BuildingTypeConstructor(v96);
          for ( i1 = strtok(String, Delimiter); i1; i1 = strtok(0, Delimiter) )
          {
            if ( !*i1 )
              break;
            IntList = (void ***)BuildingTypeClass::FindOrCreate(i1);
            if ( IntList )
              DynamicVector::Add_Alt3(v96, &IntList);
          }
          TypeList::BuildingTypeCopy(v94, v96);
          v96[0] = &vt_VectorClass_BuildingTypeClass_const;
          DynamicVectorClass::Destroy((int)v96);
        }
        else
        {
          TypeList::BuildingTypeCopy(v94, &this->?[1]);
        }
        DynamicVector::Copy(&this->?[1], v94);
        this->AALimit[3] = v95;
        v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
        DynamicVectorClass::Destroy((int)v94);
        if ( INIClass::GetString(
               v99,
               (unsigned __int8 *)DataGlobal_839DA4,
               (unsigned __int8 *)DataGlobal_83D3DC,
               &g_INI_DefaultBuffer,
               String,
               128) )
        {
          TypeList::BuildingTypeConstructor(v96);
          for ( i2 = strtok(String, Delimiter); i2; i2 = strtok(0, Delimiter) )
          {
            if ( !*i2 )
              break;
            IntList = (void ***)BuildingTypeClass::FindOrCreate(i2);
            if ( IntList )
              DynamicVector::Add_Alt3(v96, &IntList);
          }
          TypeList::BuildingTypeCopy(v94, v96);
          v96[0] = &vt_VectorClass_BuildingTypeClass_const;
          DynamicVectorClass::Destroy((int)v96);
        }
        else
        {
          TypeList::BuildingTypeCopy(v94, this->WarRatio);
        }
        DynamicVector::Copy(this->WarRatio, v94);
        v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
        this->?[2] = v95;
        DynamicVectorClass::Destroy((int)v94);
        if ( INIClass::GetString(
               v99,
               (unsigned __int8 *)DataGlobal_839DA4,
               (unsigned __int8 *)DataGlobal_83D3CC,
               &g_INI_DefaultBuffer,
               String,
               128) )
        {
          TypeList::BuildingTypeConstructor(v96);
          for ( i3 = strtok(String, Delimiter); i3; i3 = strtok(0, Delimiter) )
          {
            if ( !*i3 )
              break;
            IntList = (void ***)BuildingTypeClass::FindOrCreate(i3);
            if ( IntList )
              DynamicVector::Add_Alt3(v96, &IntList);
          }
          TypeList::BuildingTypeCopy(v94, v96);
          v96[0] = &vt_VectorClass_BuildingTypeClass_const;
          DynamicVectorClass::Destroy((int)v96);
        }
        else
        {
          TypeList::BuildingTypeCopy(v94, &this->?[3]);
        }
        DynamicVector::Copy(&this->?[3], v94);
        this->InfantryBaseMult[1] = v95;
        v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
        DynamicVectorClass::Destroy((int)v94);
        if ( INIClass::GetString(
               v99,
               (unsigned __int8 *)DataGlobal_839DA4,
               (unsigned __int8 *)DataGlobal_83D3C0,
               &g_INI_DefaultBuffer,
               String,
               128) )
        {
          TypeList::BuildingTypeConstructor(v96);
          for ( i4 = strtok(String, Delimiter); i4; i4 = strtok(0, Delimiter) )
          {
            if ( !*i4 )
              break;
            IntList = (void ***)BuildingTypeClass::FindOrCreate(i4);
            if ( IntList )
              DynamicVector::Add_Alt3(v96, &IntList);
          }
          TypeList::BuildingTypeCopy(v94, v96);
          v96[0] = &vt_VectorClass_BuildingTypeClass_const;
          DynamicVectorClass::Destroy((int)v96);
        }
        else
        {
          TypeList::BuildingTypeCopy(v94, &this->InfantryBaseMult[2]);
        }
        DynamicVector::Copy(&this->InfantryBaseMult[2], v94);
        this->GameSpeedBias = v95;
        v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
        DynamicVectorClass::Destroy((int)v94);
        if ( INIClass::GetString(
               v99,
               (unsigned __int8 *)DataGlobal_839DA4,
               (unsigned __int8 *)DataGlobal_83D3B0,
               &g_INI_DefaultBuffer,
               String,
               128) )
        {
          TypeList::BuildingTypeConstructor(v96);
          for ( i5 = strtok(String, Delimiter); i5; i5 = strtok(0, Delimiter) )
          {
            if ( !*i5 )
              break;
            IntList = (void ***)BuildingTypeClass::FindOrCreate(i5);
            if ( IntList )
              DynamicVector::Add_Alt3(v96, &IntList);
          }
          TypeList::BuildingTypeCopy(v94, v96);
          v96[0] = &vt_VectorClass_BuildingTypeClass_const;
          DynamicVectorClass::Destroy((int)v96);
        }
        else
        {
          TypeList::BuildingTypeCopy(v94, &this->?);
        }
        DynamicVector::Copy(&this->?, v94);
        v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
        LODWORD(this->MaxIQLevels) = v95;
        DynamicVectorClass::Destroy((int)v94);
        IntList = (void ***)ReadINIClassBuildingTypeList(
                              (int)v94,
                              v99,
                              (unsigned __int8 *)DataGlobal_839DA4,
                              (unsigned __int8 *)DataGlobal_83D3A8,
                              &this->SuperWeapons);
        DynamicVector::Copy(&this->SuperWeapons, IntList);
        v21 = (int)IntList[6];
        v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
        this->RepairSell[3] = v21;
        DynamicVectorClass::Destroy((int)v94);
        INIClassBuildingTypeList = (int *)ReadINIClassBuildingTypeList(
                                            (int)v94,
                                            v99,
                                            (unsigned __int8 *)DataGlobal_839DA4,
                                            (unsigned __int8 *)DataGlobal_83D3A0,
                                            this->Aircraft);
        TypeList::CopyAircraft(this->Aircraft, INIClassBuildingTypeList);
        v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
        DynamicVectorClass::Destroy((int)v94);
        v23 = (int *)ReadINIClassBuildingTypeList(
                       (int)v94,
                       v99,
                       (unsigned __int8 *)DataGlobal_839DA4,
                       (unsigned __int8 *)DataGlobal_83D390,
                       &this->SilverCrate[3]);
        TypeList::CopyAircraft(&this->SilverCrate[3], v23);
        v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
        DynamicVectorClass::Destroy((int)v94);
        v24 = (int *)ReadINIClassBuildingTypeList(
                       (int)v94,
                       v99,
                       (unsigned __int8 *)DataGlobal_839DA4,
                       (unsigned __int8 *)DataGlobal_83D384,
                       &this->MinUnitCount);
        TypeList::CopyAircraft(&this->MinUnitCount, v24);
        v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
        DynamicVectorClass::Destroy((int)v94);
        v25 = (int *)ReadINIClassBuildingTypeList(
                       (int)v94,
                       v99,
                       (unsigned __int8 *)DataGlobal_839DA4,
                       (unsigned __int8 *)DataGlobal_83D36C,
                       &this->BridgeDestruction[1]);
        TypeList::CopyAircraft(&this->BridgeDestruction[1], v25);
        v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
        DynamicVectorClass::Destroy((int)v94);
        *(double *)&this->? = INIClass::ReadDouble_Overwrite(
                                (int)v99,
                                (unsigned __int8 *)DataGlobal_839DA4,
                                (unsigned __int8 *)DataGlobal_83D35C,
                                *(double *)&this->?);
        *(double *)&this->? = INIClass::ReadDouble_Overwrite(
                                (int)v99,
                                (unsigned __int8 *)DataGlobal_839DA4,
                                (unsigned __int8 *)DataGlobal_83D350,
                                *(double *)&this->?);
        *(double *)this->? = INIClass::ReadDouble_Overwrite(
                               (int)v99,
                               (unsigned __int8 *)DataGlobal_839DA4,
                               (unsigned __int8 *)DataGlobal_83D344,
                               *(double *)this->?);
        this->LightningCellSpread = INIClass::ReadInt_Overwrite(
                                     (int)v99,
                                     (unsigned __int8 *)DataGlobal_839DA4,
                                     (unsigned __int8 *)DataGlobal_83D334,
                                     this->LightningCellSpread);
        *((double *)this + 748) = INIClass::ReadDouble_Overwrite(
                                    (int)v99,
                                    (unsigned __int8 *)DataGlobal_839DA4,
                                    (unsigned __int8 *)DataGlobal_83D328,
                                    *((double *)this + 748));
        Int_Overwrite = INIClass::ReadInt_Overwrite(
                          (int)v99,
                          (unsigned __int8 *)DataGlobal_839DA4,
                          (unsigned __int8 *)DataGlobal_83D314,
                          this->ForceShieldRadius);
        v27 = this->q1514;
        v28 = this->q1510;
        this->ForceShieldRadius = Int_Overwrite;
        Double_Overwrite = INIClass::ReadDouble_Overwrite(
                             (int)v99,
                             (unsigned __int8 *)DataGlobal_839DA4,
                             (unsigned __int8 *)DataGlobal_83D304,
                             COERCE_DOUBLE(__PAIR64__(v27, v28)));
        v30 = this->?[14];
        *((double *)this + 674) = Double_Overwrite;
        this->?[14] = INIClass::ReadInt_Overwrite(
                        (int)v99,
                        (unsigned __int8 *)DataGlobal_839DA4,
                        (unsigned __int8 *)DataGlobal_83D2F4,
                        v30);
        v31 = INIClass::ReadInt_Overwrite(
                (int)v99,
                (unsigned __int8 *)DataGlobal_839DA4,
                (unsigned __int8 *)DataGlobal_83D2E0,
                this->?[15]);
        v32 = this->?[13];
        this->?[15] = v31;
        v33 = INIClass::ReadInt_Overwrite(
                (int)v99,
                (unsigned __int8 *)DataGlobal_839DA4,
                (unsigned __int8 *)DataGlobal_83D2D0,
                v32);
        v34 = this->?[12];
        this->?[13] = v33;
        v35 = INIClass::ReadInt_Overwrite(
                (int)v99,
                (unsigned __int8 *)DataGlobal_839DA4,
                (unsigned __int8 *)DataGlobal_83D2C4,
                v34);
        v36 = this->?[10];
        this->?[12] = v35;
        HIDWORD(v92) = this->?[11];
        LODWORD(v92) = v36;
        v37 = INIClass::ReadDouble_Overwrite(
                (int)v99,
                (unsigned __int8 *)DataGlobal_839DA4,
                (unsigned __int8 *)DataGlobal_83D2B4,
                v92);
        v38 = this->?[9];
        *(double *)&this->?[10] = v37;
        v39 = INIClass::ReadInt_Overwrite(
                (int)v99,
                (unsigned __int8 *)DataGlobal_839DA4,
                (unsigned __int8 *)DataGlobal_83D2A4,
                v38);
        HIDWORD(v40) = this->?[7];
        this->?[9] = v39;
        LODWORD(v40) = this->?[6];
        v41 = INIClass::ReadDouble_Overwrite(
                (int)v99,
                (unsigned __int8 *)DataGlobal_839DA4,
                (unsigned __int8 *)DataGlobal_83D294,
                v40);
        v42 = this->?[8];
        *(double *)&this->?[6] = v41;
        v43 = INIClass::ReadInt_Overwrite(
                (int)v99,
                (unsigned __int8 *)DataGlobal_839DA4,
                (unsigned __int8 *)DataGlobal_83D284,
                v42);
        v44 = this->?[3];
        v45 = this->?[2];
        this->?[8] = v43;
        v46 = INIClass::ReadDouble_Overwrite(
                (int)v99,
                (unsigned __int8 *)DataGlobal_839DA4,
                (unsigned __int8 *)DataGlobal_83D278,
                COERCE_DOUBLE(__PAIR64__(v44, v45)));
        v47 = this->?[4];
        *(double *)&this->?[2] = v46;
        v48 = INIClass::ReadInt_Overwrite(
                (int)v99,
                (unsigned __int8 *)DataGlobal_839DA4,
                (unsigned __int8 *)DataGlobal_83D26C,
                v47);
        v49 = this->?[18];
        this->?[4] = v48;
        HIDWORD(v92) = this->?[19];
        LODWORD(v92) = v49;
        v50 = INIClass::ReadDouble_Overwrite(
                (int)v99,
                (unsigned __int8 *)DataGlobal_839DA4,
                (unsigned __int8 *)DataGlobal_83D25C,
                v92);
        v51 = this->?[0];
        *(double *)&this->?[18] = v50;
        v52 = INIClass::ReadInt_Overwrite(
                (int)v99,
                (unsigned __int8 *)DataGlobal_839DA4,
                (unsigned __int8 *)DataGlobal_83D24C,
                v51);
        HIDWORD(v53) = this->?[15];
        this->?[0] = v52;
        LODWORD(v53) = this->?[14];
        v54 = INIClass::ReadDouble_Overwrite(
                (int)v99,
                (unsigned __int8 *)DataGlobal_839DA4,
                (unsigned __int8 *)DataGlobal_83D244,
                v53);
        v55 = this->?[16];
        *(double *)&this->?[14] = v54;
        v56 = INIClass::ReadInt_Overwrite(
                (int)v99,
                (unsigned __int8 *)DataGlobal_839DA4,
                (unsigned __int8 *)DataGlobal_83D23C,
                v55);
        v57 = this->?[11];
        v58 = this->?[10];
        this->?[16] = v56;
        v59 = INIClass::ReadDouble_Overwrite(
                (int)v99,
                (unsigned __int8 *)DataGlobal_839DA4,
                (unsigned __int8 *)DataGlobal_83D230,
                COERCE_DOUBLE(__PAIR64__(v57, v58)));
        v60 = this->?[12];
        *(double *)&this->?[10] = v59;
        v61 = INIClass::ReadInt_Overwrite(
                (int)v99,
                (unsigned __int8 *)DataGlobal_839DA4,
                (unsigned __int8 *)DataGlobal_83D224,
                v60);
        v62 = this->?[6];
        this->?[12] = v61;
        HIDWORD(v92) = this->?[7];
        LODWORD(v92) = v62;
        v63 = INIClass::ReadDouble_Overwrite(
                (int)v99,
                (unsigned __int8 *)DataGlobal_839DA4,
                (unsigned __int8 *)DataGlobal_83D214,
                v92);
        v64 = this->?[8];
        *(double *)&this->?[6] = v63;
        v65 = INIClass::ReadInt_Overwrite(
                (int)v99,
                (unsigned __int8 *)DataGlobal_839DA4,
                (unsigned __int8 *)DataGlobal_83D204,
                v64);
        HIDWORD(v66) = this->?[3];
        this->?[8] = v65;
        LODWORD(v66) = this->?[2];
        v67 = INIClass::ReadDouble_Overwrite(
                (int)v99,
                (unsigned __int8 *)DataGlobal_839DA4,
                (unsigned __int8 *)DataGlobal_83D1F4,
                v66);
        v68 = this->?[4];
        *(double *)&this->?[2] = v67;
        v69 = INIClass::ReadInt_Overwrite(
                (int)v99,
                (unsigned __int8 *)DataGlobal_839DA4,
                (unsigned __int8 *)DataGlobal_83D1E4,
                v68);
        v70 = this->q17E3;
        this->?[4] = v69;
        this->q17E3 = INIClass::ReadBool_Overwrite(
                                    (int)v99,
                                    (unsigned __int8 *)DataGlobal_839DA4,
                                    (unsigned __int8 *)DataGlobal_83D1D4,
                                    v70);
        Bool_Overwrite = INIClass::ReadBool_Overwrite(
                           (int)v99,
                           (unsigned __int8 *)DataGlobal_839DA4,
                           (unsigned __int8 *)DataGlobal_83D1C8,
                           this->ElevationIncrement);
        HIDWORD(v72) = this->?[1];
        this->ElevationIncrement = Bool_Overwrite;
        LODWORD(v72) = this->?[0];
        v73 = INIClass::ReadDouble_Overwrite(
                (int)v99,
                (unsigned __int8 *)DataGlobal_839DA4,
                (unsigned __int8 *)DataGlobal_83D1B8,
                v72);
        v74 = this->q1460;
        *(double *)this->? = v73;
        v75 = INIClass::ReadInt_Overwrite(
                (int)v99,
                (unsigned __int8 *)DataGlobal_839DA4,
                (unsigned __int8 *)DataGlobal_83D1A8,
                v74);
        v76 = this->BaseDefenseDelay[0];
        MaximumBuildingPlacementFailures = this->?;
        this->q1460 = v75;
        v78 = INIClass::ReadDouble_Overwrite(
                (int)v99,
                (unsigned __int8 *)DataGlobal_839DA4,
                (unsigned __int8 *)DataGlobal_83D198,
                COERCE_DOUBLE(__PAIR64__(v76, MaximumBuildingPlacementFailures)));
        v79 = this->BaseDefenseDelay[2];
        v80 = this->BaseDefenseDelay[1];
        *(double *)&this->? = v78;
        v81 = INIClass::ReadDouble_Overwrite(
                (int)v99,
                (unsigned __int8 *)DataGlobal_839DA4,
                (unsigned __int8 *)DataGlobal_83D17C,
                COERCE_DOUBLE(__PAIR64__(v79, v80)));
        v82 = this->?[0];
        v83 = this->BaseDefenseDelay[3];
        *(double *)&this->BaseDefenseDelay[1] = v81;
        v84 = INIClass::ReadDouble_Overwrite(
                (int)v99,
                (unsigned __int8 *)DataGlobal_839DA4,
                (unsigned __int8 *)DataGlobal_83D160,
                COERCE_DOUBLE(__PAIR64__(v82, v83)));
        v85 = this->?[2];
        v86 = this->?[1];
        *(double *)&this->BaseDefenseDelay[3] = v84;
        v87 = INIClass::ReadDouble_Overwrite(
                (int)v99,
                (unsigned __int8 *)DataGlobal_839DA4,
                (unsigned __int8 *)DataGlobal_83D144,
                COERCE_DOUBLE(__PAIR64__(v85, v86)));
        v88 = this->SovietSurvivorDivisor[0];
        *(double *)&this->?[1] = v87;
        this->SovietSurvivorDivisor[0] = INIClass::ReadInt_Overwrite(
                                           (int)v99,
                                           (unsigned __int8 *)DataGlobal_839DA4,
                                           (unsigned __int8 *)DataGlobal_83D12C,
                                           v88);
        result = INIClass::ReadInt_Overwrite(
                   (int)v99,
                   (unsigned __int8 *)DataGlobal_839DA4,
                   (unsigned __int8 *)DataGlobal_83D110,
                   this->?[3]);
        this->?[3] = result;
        LOBYTE(result) = 1;
      }
      else
      {
        LOBYTE(result) = 0;
      }
      return result;
}
} }

// ==== BACKFILL 0x00674240  RulesClass::ReadIQSection  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int RulesClass::ReadIQSection() {
{
      int result;
      int Int_Overwrite;
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
      int v15;

      result = INIClass::BinarySearchSection(v15, (unsigned __int8 *)g_INI_Key_IQ);
      if ( result )
      {
        this->q1434 = INIClass::ReadInt_Overwrite(
                                     v15,
                                     (unsigned __int8 *)g_INI_Key_IQ,
                                     (unsigned __int8 *)DataGlobal_83D50C,
                                     this->q1434);
        Int_Overwrite = INIClass::ReadInt_Overwrite(
                          v15,
                          (unsigned __int8 *)g_INI_Key_IQ,
                          (unsigned __int8 *)DataGlobal_83D4FC,
                          this->q1438);
        v4 = this->q143C;
        this->q1438 = Int_Overwrite;
        v5 = INIClass::ReadInt_Overwrite(v15, (unsigned __int8 *)g_INI_Key_IQ, (unsigned __int8 *)DataGlobal_83D4F0, v4);
        v6 = this->q1440;
        this->q143C = v5;
        this->q1440 = INIClass::ReadInt_Overwrite(
                                     v15,
                                     (unsigned __int8 *)g_INI_Key_IQ,
                                     (unsigned __int8 *)stru_81BEBC,
                                     v6);
        v7 = INIClass::ReadInt_Overwrite(
               v15,
               (unsigned __int8 *)g_INI_Key_IQ,
               (unsigned __int8 *)DataGlobal_83D4E4,
               this->q1444);
        v8 = this->q1448;
        this->q1444 = v7;
        v9 = INIClass::ReadInt_Overwrite(v15, (unsigned __int8 *)g_INI_Key_IQ, (unsigned __int8 *)DataGlobal_83D4D8, v8);
        v10 = this->q144C;
        this->q1448 = v9;
        this->q144C = INIClass::ReadInt_Overwrite(
                                     v15,
                                     (unsigned __int8 *)g_INI_Key_IQ,
                                     (unsigned __int8 *)stru_82C284,
                                     v10);
        v11 = INIClass::ReadInt_Overwrite(
                v15,
                (unsigned __int8 *)g_INI_Key_IQ,
                (unsigned __int8 *)DataGlobal_83B3B4,
                this->q1450);
        v12 = this->q1454;
        this->q1450 = v11;
        v13 = INIClass::ReadInt_Overwrite(v15, (unsigned __int8 *)g_INI_Key_IQ, (unsigned __int8 *)stru_817460, v12);
        v14 = this->q1458;
        this->q1454 = v13;
        this->q1458 = INIClass::ReadInt_Overwrite(
                                     v15,
                                     (unsigned __int8 *)g_INI_Key_IQ,
                                     (unsigned __int8 *)DataGlobal_83D4CC,
                                     v14);
        result = INIClass::ReadInt_Overwrite(
                   v15,
                   (unsigned __int8 *)g_INI_Key_IQ,
                   (unsigned __int8 *)DataGlobal_83D4C0,
                   this->q145C);
        this->q145C = result;
        LOBYTE(result) = 1;
      }
      else
      {
        LOBYTE(result) = 0;
      }
      return result;
}
} }

// ==== BACKFILL 0x00674500  RulesClass::sub_674500  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int RulesClass::sub_674500()
{
{
    int result;
    RulesClass *v2;
    INIClass::ReadDifficultyModifiers(v2);
    INIClass::ReadDifficultyModifiers(v2);
    result = INIClass::ReadDifficultyModifiers(v2);
    LOBYTE(result) = 1;
    return result;
}
}

// ==== BACKFILL 0x00674650  SidebarClass::ReadButtonList  cls=SidebarClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int SidebarClass::ReadButtonList() {
{
    char *v1;
    int result;
    int i;
    int v4;
    int v5;
    char *j;
    int v7;
    char String[512];
    unsigned char ***v9;
    char v10;
    v1 = DataGlobal_839D1C;
    if ( !v10 )
    v1 = DataGlobal_839D3C;
    result = INIClass::BinarySearchSection((int)v9, (unsigned char *)v1);
    if ( result )
  {
    for ( i = 0; i < 25; ++i )
    globalHelper_0CFD20(i, DataGlobal_8427CC);
    result = INIClass::GetString( v9, (unsigned char *)v1, (unsigned char *)DataGlobal_839D10, &g_INI_DefaultBuffer, String, 512);
    if ( result )
    {
    v4 = 0;
    v5 = 0;
    for ( j = strtok(String, Delimiter); j; j = strtok(0, Delimiter) )
      {
    v7 = SidebarClass::findEntryIndexByName(j);
    if ( v7 != DataGlobal_8427CC )
    globalHelper_0CFD20(v7, v5);
    ++v4;
    ++v5;
      }
    result = globalHelper_0CFDB0(v4);
    }
    LOBYTE(result) = 1;
  }
    else
  {
    LOBYTE(result) = 0;
  }
    return result;
}
} }

// ==== BACKFILL 0x00674730  RulesClass::SaveLoad_Prefix  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int RulesClass::SaveLoad_Prefix(void* a1) {
{
      int *v2;
      int v4;
      int i;
      int v6;
      int j;
      int v8;
      int k;
      int v10;
      int m;
      int v12;
      int n;
      int v14;
      int ii;
      int v16;
      int jj;
      int v18;
      int kk;
      int v20;
      int mm;
      int v22;
      int nn;
      int v24;
      int i1;
      int v26;
      int i2;
      int v28;
      int i3;
      int v30;
      int i4;
      int v32;
      int i5;
      int v34;
      int i6;
      int v36;
      int i7;
      int v38;
      int i8;
      int v40;
      int i9;
      int v42;
      int i10;
      int v44;
      int i11;
      int v46;
      int i12;
      int v48;
      int i13;
      int v50;
      int i14;
      int v52;
      int i15;
      int v54;
      int i16;
      int v56;
      int i17;
      int v58;
      int i18;
      char *v60;
      int v61;
      int result;

      v2 = a2;
      (*(void (__stdcall **)(int *, _DWORD *, int, _DWORD))(*a2 + 16))(a2, this, 6336, 0);
      v4 = *v2;
      a2 = (int *)this->q11A4;
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(v4 + 16))(v2, &a2, 4, 0);
      for ( i = 0; i < (int)a2; ++i )
        (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q1198 + 4 * i, 4, 0);
      v6 = *v2;
      a2 = (int *)this->q11C0;
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(v6 + 16))(v2, &a2, 4, 0);
      for ( j = 0; j < (int)a2; ++j )
        (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q11B4 + 4 * j, 4, 0);
      v8 = *v2;
      a2 = (int *)this->q11DC;
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(v8 + 16))(v2, &a2, 4, 0);
      for ( k = 0; k < (int)a2; ++k )
        (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q11D0 + 4 * k, 4, 0);
      v10 = *v2;
      a2 = (int *)this->q11F8;
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(v10 + 16))(v2, &a2, 4, 0);
      for ( m = 0; m < (int)a2; ++m )
        (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q11EC + 4 * m, 4, 0);
      v12 = *v2;
      a2 = (int *)this->q1214;
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(v12 + 16))(v2, &a2, 4, 0);
      for ( n = 0; n < (int)a2; ++n )
        (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q1208 + 4 * n, 4, 0);
      v14 = *v2;
      a2 = (int *)this->q1230;
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(v14 + 16))(v2, &a2, 4, 0);
      for ( ii = 0; ii < (int)a2; ++ii )
        (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q1224 + 4 * ii, 4, 0);
      v16 = *v2;
      a2 = (int *)this->q124C;
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(v16 + 16))(v2, &a2, 4, 0);
      for ( jj = 0; jj < (int)a2; ++jj )
        (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q1240 + 4 * jj, 4, 0);
      v18 = *v2;
      a2 = (int *)this->q1268;
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(v18 + 16))(v2, &a2, 4, 0);
      for ( kk = 0; kk < (int)a2; ++kk )
        (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q125C + 4 * kk, 4, 0);
      v20 = *v2;
      a2 = (int *)this->q1284;
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(v20 + 16))(v2, &a2, 4, 0);
      for ( mm = 0; mm < (int)a2; ++mm )
        (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q1278 + 4 * mm, 4, 0);
      v22 = *v2;
      a2 = (int *)this->q12A0;
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(v22 + 16))(v2, &a2, 4, 0);
      for ( nn = 0; nn < (int)a2; ++nn )
        (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q1294 + 4 * nn, 4, 0);
      v24 = *v2;
      a2 = (int *)this->q12BC;
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(v24 + 16))(v2, &a2, 4, 0);
      for ( i1 = 0; i1 < (int)a2; ++i1 )
        (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q12B0 + 4 * i1, 4, 0);
      v26 = *v2;
      a2 = (int *)this->q12D8;
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(v26 + 16))(v2, &a2, 4, 0);
      for ( i2 = 0; i2 < (int)a2; ++i2 )
        (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q12CC + 4 * i2, 4, 0);
      v28 = *v2;
      a2 = (int *)this->q12F4;
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(v28 + 16))(v2, &a2, 4, 0);
      for ( i3 = 0; i3 < (int)a2; ++i3 )
        (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q12E8 + 4 * i3, 4, 0);
      v30 = *v2;
      a2 = (int *)this->q1400;
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(v30 + 16))(v2, &a2, 4, 0);
      for ( i4 = 0; i4 < (int)a2; ++i4 )
        (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q13F4 + 4 * i4, 4, 0);
      v32 = *v2;
      a2 = (int *)this->q1168;
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(v32 + 16))(v2, &a2, 4, 0);
      for ( i5 = 0; i5 < (int)a2; ++i5 )
        (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q115C + 4 * i5, 4, 0);
      v34 = *v2;
      a2 = (int *)this->PowerEmergency;
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(v34 + 16))(v2, &a2, 4, 0);
      for ( i6 = 0; i6 < (int)a2; ++i6 )
        (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q9AC + 4 * i6, 4, 0);
      v36 = *v2;
      a2 = (int *)this->qD90;
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(v36 + 16))(v2, &a2, 4, 0);
      for ( i7 = 0; i7 < (int)a2; ++i7 )
        (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->qD84 + 4 * i7, 4, 0);
      v38 = *v2;
      a2 = (int *)this->qDAC;
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(v38 + 16))(v2, &a2, 4, 0);
      for ( i8 = 0; i8 < (int)a2; ++i8 )
        (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->qDA0 + 4 * i8, 4, 0);
      v40 = *v2;
      a2 = (int *)this->qDC8;
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(v40 + 16))(v2, &a2, 4, 0);
      for ( i9 = 0; i9 < (int)a2; ++i9 )
        (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->qDBC + 4 * i9, 4, 0);
      v42 = *v2;
      a2 = (int *)this->qEF8;
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(v42 + 16))(v2, &a2, 4, 0);
      for ( i10 = 0; i10 < (int)a2; ++i10 )
        (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->qEEC + 4 * i10, 4, 0);
      v44 = *v2;
      a2 = (int *)this->qF14;
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(v44 + 16))(v2, &a2, 4, 0);
      for ( i11 = 0; i11 < (int)a2; ++i11 )
        (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->qF08 + 4 * i11, 4, 0);
      v46 = *v2;
      a2 = (int *)this->qF30;
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(v46 + 16))(v2, &a2, 4, 0);
      for ( i12 = 0; i12 < (int)a2; ++i12 )
        (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->qF24 + 4 * i12, 4, 0);
      v48 = *v2;
      a2 = (int *)this->qE20;
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(v48 + 16))(v2, &a2, 4, 0);
      for ( i13 = 0; i13 < (int)a2; ++i13 )
        (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->qE14 + 4 * i13, 4, 0);
      v50 = *v2;
      a2 = (int *)this->qED4;
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(v50 + 16))(v2, &a2, 4, 0);
      for ( i14 = 0; i14 < (int)a2; ++i14 )
        (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->qEC8 + 4 * i14, 4, 0);
      v52 = *v2;
      a2 = (int *)this->qE3C;
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(v52 + 16))(v2, &a2, 4, 0);
      for ( i15 = 0; i15 < (int)a2; ++i15 )
        (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->qE30 + 4 * i15, 4, 0);
      v54 = *v2;
      a2 = (int *)this->qDE4;
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(v54 + 16))(v2, &a2, 4, 0);
      for ( i16 = 0; i16 < (int)a2; ++i16 )
        (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->qDD8 + 4 * i16, 4, 0);
      v56 = *v2;
      a2 = (int *)this->q13A0;
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(v56 + 16))(v2, &a2, 4, 0);
      for ( i17 = 0; i17 < (int)a2; ++i17 )
        (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q1394 + 4 * i17, 4, 0);
      v58 = *v2;
      a2 = (int *)this->q13BC;
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(v58 + 16))(v2, &a2, 4, 0);
      for ( i18 = 0; i18 < (int)a2; ++i18 )
        (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q13B0 + 4 * i18, 4, 0);
      DynamicVector::Read(this + 915, v2);
      DynamicVector::Read(this + 922, v2);
      DynamicVector::Read(this + 929, v2);
      DynamicVector::Read(this + 936, v2);
      DynamicVector::Read(this + 1217, v2);
      DynamicVector::Read(this + 1224, v2);
      DynamicVector::Read(this + 1231, v2);
      DynamicVector::Read(this + 1238, v2);
      DynamicVector::Read(this + 1245, v2);
      DynamicVector::Read(this + 1266, v2);
      DynamicVector::Read(this + 1117, v2);
      DynamicVector::Read(this + 271, v2);
      DynamicVector::Read(this + 278, v2);
      DynamicVector::Read(this + 285, v2);
      RulesClass::readTerrainTypes(this + 22, v2);
      RulesClass::readTerrainTypes(this + 384, v2);
      DynamicVector::Read(this + 214, v2);
      DynamicVector::Read(this + 221, v2);
      DynamicVector::Read(this + 228, v2);
      DynamicVector::Read(this + 235, v2);
      DynamicVector::Read(this + 242, v2);
      DynamicVector::Read(this + 249, v2);
      DynamicVector::Read(this + 435, v2);
      DynamicVector::Read(this + 461, v2);
      VectorClass::LoadStream(this + 497, v2);
      VectorClass::LoadStream(this + 504, v2);
      VectorClass::LoadStream(this + 511, v2);
      VectorClass::LoadStream(this + 518, v2);
      VectorClass::LoadStream(this + 525, v2);
      DynamicVector::Read_Alt(this + 532, v2);
      DynamicVector::Read_Alt(this + 544, v2);
      DynamicVector::Read_Alt(this + 555, v2);
      DynamicVector::Read_Alt(this + 562, v2);
      DynamicVector::Read_Alt(this + 569, v2);
      DynamicVector::Read_Alt(this + 576, v2);
      DynamicVector::Read_Alt(this + 583, v2);
      DynamicVector::Read_Alt(this + 590, v2);
      DynamicVector::Read_Alt(this + 597, v2);
      DynamicVector::Read_Alt(this + 604, v2);
      DynamicVector::Read_Alt(this + 611, v2);
      DynamicVector::Read_Alt(this + 625, v2);
      DynamicVector::Read_Alt(this + 632, v2);
      DynamicVector::Read_Alt(this + 639, v2);
      DynamicVector::Read_Alt(this + 646, v2);
      DynamicVector::Read_Alt(this + 653, v2);
      DynamicVector::Read_Alt(this + 660, v2);
      DynamicVector::Read_Alt(this + 667, v2);
      DynamicVector::Read_Alt(this + 674, v2);
      DynamicVector::Read_Alt(this + 681, v2);
      DynamicVector::Read_Alt(this + 688, v2);
      DynamicVector::Read_Alt(this + 695, v2);
      RulesClass::readAnimations(this + 726, v2);
      Stream::WriteIntArray(this + 733, v2);
      Stream::WriteIntArray(this + 740, v2);
      Stream::WriteIntArray(this + 752, v2);
      SaveLoad::StreamVector(this + 712, v2);
      RulesClass::readParticleSystems(this + 1022, v2);
      SaveLoad::StreamVector(this + 719, v2);
      VectorClass::SaveLoad(this + 832, v2);
      SaveLoad::StreamVector(this + 839, v2);
      DynamicVector::Read_Alt(this + 846, v2);
      Stream::WriteIntArray(this + 72, v2);
      Stream::WriteIntArray(this + 65, v2);
      Stream::WriteIntArray(this + 79, v2);
      Stream::WriteIntArray(this + 86, v2);
      DynamicVector::Read(this + 402, v2);
      VectorClass::SaveLoad(this + 769, v2);
      DynamicVector::Read(this + 776, v2);
      VectorClass::SaveLoad(this + 783, v2);
      DynamicVector::Read(this + 790, v2);
      VectorClass::SaveLoad(this + 797, v2);
      DynamicVector::Read(this + 804, v2);
      VectorClass::SaveLoad(this + 811, v2);
      DynamicVector::Read(this + 818, v2);
      VectorClass::SaveLoad(this + 825, v2);
      Stream::WriteIntArray(this + 168, v2);
      Stream::WriteIntArray(this + 175, v2);
      Stream::WriteIntArray(this + 182, v2);
      v60 = (char *)(this + 1565);
      v61 = 16;
      do
      {
        result = RulesClass::readGeneralSection(v60, (int)v2);
        v60 += 3;
        --v61;
      }
      while ( v61 );
      return result;
}
} }

// ==== BACKFILL 0x00679D90  GameConfig::ComputeHash  cls=GameConfig  sig=csp  renamed_refs=0  residual=- ====
int GameConfig::ComputeHash()
{
{
    int v0;
    int v1;
    int i;
    int v3;
    int v4;
    void *v6[3];
    int v7[10];
    char v8;
    int v9;
    int v10;
    char v11;
    int v12[22];
    char v13[12];
    int v14;
    v0 = Hash::ComputeHashSHA1(DataGlobal_887048);
    v1 = MultiplayerGameMode::ListGet();
    for ( i = 1; i <= v1; ++i )
  {
    v3 = MultiplayerGameMode::Find((void *)i);
    if ( v3 )
    {
    v4 = GameConfig::Constructor(v3);
    v0 += Hash::ComputeHashSHA1(v4);
    }
  }
    if ( DataGlobal_B053B8 )
    return DataGlobal_B053B4 + v0;
    v6[1] = 0;
    v6[2] = 0;
    GenericList::Constructor(v7);
    v7[0] = &vt_List_INIClass_INISection;
    memset(&v7[7], 0, 12);
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v6[0] = &CCINIClass_Vtable;
    CCFileClass::Construct(v12, aCoopcampmdIni);
    if ( CCINIClass::Load(v6, (int)v12, 0, 0) )
    DataGlobal_B053B4 = Hash::ComputeHashSHA1((int)v6);
    DataGlobal_B053B8 = 1;
    v12[0] = &vt_CCFileClass;
    v14 = 0;
    Vector::Clear((int)v13);
    v12[0] = &DataGlobal_7E1668;
    BufferIOFileClass::Dtor(v12);
    HashTable::DestroyHashTableINIClass(v6);
    return DataGlobal_B053B4 + v0;
}
}

// ==== BACKFILL 0x00679F70  VectorClass::Dtor  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
void VectorClass::Dtor()
{
{
    void *v2;
    v2 = (void*)this->Items;
    *(void**)this = vt_VectorClass_int;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}

// ==== BACKFILL 0x0067A030  TypeList::InfantryCleanup  cls=TypeList  sig=csp  renamed_refs=0  residual=- ====
void TypeList::InfantryCleanup()
{
{
    void *v2;
    v2 = (void *)this->Items;
    *(void**)this = &vt_VectorClass_InfantryTypeClass_const;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}

// ==== BACKFILL 0x0067A090  TypeList::CopyFull  cls=TypeList  sig=csp  renamed_refs=1  residual=- ====
int * TypeList::CopyFull(VectorClass * aP1)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    if ( this != (int *)aP1 )
  {
    this->Clear();
    v3 = aP1->Capacity;
    this->Capacity = v3;
    if ( v3 )
    {
    v4 = __2_YAPAXI_Z(4 * v3);
    this->Items = v4;
    if ( v4 )
      {
    v5 = this->Capacity;
    v6 = 0;
    this->IsAllocated = 1;
    if ( v5 > 0 )
        {
    do
          {
    *(int *)(this->Items + 4 * v6) = *((int *)aP1->Items + v6);
    ++v6;
          }
    while ( v6 < this->Capacity );
        }
      }
    }
    else
    {
    this->Items = 0;
    this->IsAllocated = 0;
    }
  }
    this->Count = (int)aP1[1].vtable1;
    this->CapacityIncrement = (int)aP1[1].Items;
    this->unknown_18 = aP1[1].Capacity;
    return this;
}
}

// ==== BACKFILL 0x0067A110  TypeList::CopyAircraft  cls=TypeList  sig=csp  renamed_refs=1  residual=- ====
int * TypeList::CopyAircraft(VectorClass * aP1)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    if ( this != (int *)aP1 )
  {
    this->Clear();
    v3 = aP1->Capacity;
    this->Capacity = v3;
    if ( v3 )
    {
    v4 = __2_YAPAXI_Z(4 * v3);
    this->Items = v4;
    if ( v4 )
      {
    v5 = this->Capacity;
    v6 = 0;
    this->IsAllocated = 1;
    if ( v5 > 0 )
        {
    do
          {
    *(int *)(this->Items + 4 * v6) = *((int *)aP1->Items + v6);
    ++v6;
          }
    while ( v6 < this->Capacity );
        }
      }
    }
    else
    {
    this->Items = 0;
    this->IsAllocated = 0;
    }
  }
    this->Count = (int)aP1[1].vtable1;
    this->CapacityIncrement = (int)aP1[1].Items;
    this->unknown_18 = aP1[1].Capacity;
    return this;
}
}

// ==== BACKFILL 0x0067A290  TypeList::CopyInfantry  cls=TypeList  sig=csp  renamed_refs=0  residual=- ====
int * TypeList::CopyInfantry(CCINIClass * aP1)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    if ( this != (int *)aP1 )
  {
    this->Clear();
    v3 = aP1->headNode[1];
    this->Capacity = v3;
    if ( v3 )
    {
    v4 = __2_YAPAXI_Z(4 * v3);
    this->Items = v4;
    if ( v4 )
      {
    v5 = this->Capacity;
    v6 = 0;
    this->IsAllocated = 1;
    if ( v5 > 0 )
        {
    do
          {
    *(int *)(this->Items + 4 * v6) = *(int *)(aP1->headNode[0] + 4 * v6);
    ++v6;
          }
    while ( v6 < this->Capacity );
        }
      }
    }
    else
    {
    this->Items = 0;
    this->IsAllocated = 0;
    }
  }
    this->Count = aP1->sectionHead[0];
    this->CapacityIncrement = aP1->sectionHead[1];
    this->unknown_18 = aP1->sectionHead[2];
    return this;
}
}

// ==== BACKFILL 0x0067A390  TypeList::VoxelAnimConstructor  cls=TypeList  sig=csp  renamed_refs=0  residual=- ====
CCINIClass * TypeList::VoxelAnimConstructor()
{
{
    this->Items = 0;
    this->Capacity = 0;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    this->CapacityIncrement = 10;
    this->Count = 0;
    *(void**)this = &vt_TypeList_VoxelAnimTypeClass_const;
    return (CCINIClass *)this;
}
}

// ==== BACKFILL 0x0067A3C0  RulesClass::readTerrainTypes  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
int RulesClass::readTerrainTypes(TechnoTypeClass * aP1)
{
{
    int v3;
    int result;
    int i;
    int v6;
    v3 = *(int *)aP1->vtable0;
    v6 = this->LargeVisceroid;
    (*(void (__stdcall **)(TechnoTypeClass *, int *, int, int))(v3 + 16))(aP1, &v6, 4, 0);
    result = v6;
    for ( i = 0; i < v6; ++i )
  {
    (*(void (__stdcall **)(TechnoTypeClass *, int, int, int))(*(int *)aP1->vtable0 + 16))( aP1, this->DetailMinFrameRateMovie + 4 * i, 4, 0);
    result = v6;
  }
    return result;
}
}

// ==== BACKFILL 0x0067A4F0  TypeList::Construct  cls=TypeList  sig=csp  renamed_refs=0  residual=- ====
DynamicVector * TypeList::Construct()
{
{
    this->Items = 0;
    this->Capacity = 0;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    this->CapacityIncrement = 10;
    this->Count = 0;
    *(void**)this = &vt_TypeList_int;
    return (DynamicVector *)this;
}
}

// ==== BACKFILL 0x0067A520  DynamicVector::Read  cls=DynamicVector  sig=csp  renamed_refs=2  residual=- ====
int DynamicVector::Read(TechnoTypeClass * aP1)
{
{
    int v3;
    int result;
    int i;
    int v6;
    v3 = *(int *)aP1->vtable1;
    v6 = this->DynamicVector_field_0x10;
    (*(void (__stdcall **)(TechnoTypeClass *, int *, int, int))(v3 + 16))(aP1, &v6, 4, 0);
    result = v6;
    for ( i = 0; i < v6; ++i )
  {
    (*(void (__stdcall **)(TechnoTypeClass *, int, int, int))(*(int *)aP1->vtable1 + 16))( aP1, this->Items + 4 * i, 4, 0);
    result = v6;
  }
    return result;
}
}

// ==== BACKFILL 0x0067A600  TypeList::ConstructSmudge  cls=TypeList  sig=csp  renamed_refs=0  residual=- ====
CCINIClass * TypeList::ConstructSmudge()
{
{
    this->Items = 0;
    this->Capacity = 0;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    this->CapacityIncrement = 10;
    this->Count = 0;
    *(void**)this = &vt_TypeList_SmudgeTypeClass_const;
    return (CCINIClass *)this;
}
}

// ==== BACKFILL 0x0067A630  VectorClass::LoadStream  cls=VectorClass  sig=csp  renamed_refs=2  residual=- ====
int VectorClass::LoadStream(TechnoTypeClass * aP1)
{
{
    int v3;
    int result;
    int i;
    int v6;
    v3 = *(int *)aP1->vtable1;
    v6 = this->Count;
    (*(void (__stdcall **)(TechnoTypeClass *, int *, int, int))(v3 + 16))(aP1, &v6, 4, 0);
    result = v6;
    for ( i = 0; i < v6; ++i )
  {
    (*(void (__stdcall **)(TechnoTypeClass *, int, int, int))(*(int *)aP1->vtable1 + 16))( aP1, this->Items + 4 * i, 4, 0);
    result = v6;
  }
    return result;
}
}

// ==== BACKFILL 0x0067A6E0  DynamicVector::Read_Alt  cls=DynamicVector  sig=csp  renamed_refs=2  residual=- ====
int DynamicVector::Read_Alt(TechnoTypeClass * aP1)
{
{
    int v3;
    int result;
    int i;
    int v6;
    v3 = *(int *)aP1->vtable1;
    v6 = this->DynamicVector_field_0x10;
    (*(void (__stdcall **)(TechnoTypeClass *, int *, int, int))(v3 + 16))(aP1, &v6, 4, 0);
    result = v6;
    for ( i = 0; i < v6; ++i )
  {
    (*(void (__stdcall **)(TechnoTypeClass *, int, int, int))(*(int *)aP1->vtable1 + 16))( aP1, this->Items + 4 * i, 4, 0);
    result = v6;
  }
    return result;
}
}

// ==== BACKFILL 0x0067A730  RulesClass::readSmudgeTypes  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
int RulesClass::readSmudgeTypes()
{
{
    return this->LargeVisceroid;
}
}

// ==== BACKFILL 0x0067A7C0  RulesClass::readOverlayTypes  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
int RulesClass::readOverlayTypes()
{
{
    return this->LargeVisceroid;
}
}

// ==== BACKFILL 0x0067A7D0  RulesClass::readAnimations  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
int RulesClass::readAnimations(TechnoTypeClass * aP1)
{
{
    int v3;
    int result;
    int i;
    int v6;
    v3 = *(int *)aP1->vtable0;
    v6 = this->LargeVisceroid;
    (*(void (__stdcall **)(TechnoTypeClass *, int *, int, int))(v3 + 16))(aP1, &v6, 4, 0);
    result = v6;
    for ( i = 0; i < v6; ++i )
  {
    (*(void (__stdcall **)(TechnoTypeClass *, int, int, int))(*(int *)aP1->vtable0 + 16))( aP1, this->DetailMinFrameRateMovie + 4 * i, 4, 0);
    result = v6;
  }
    return result;
}
}

// ==== BACKFILL 0x0067A820  TypeList::InfantryConstructor  cls=TypeList  sig=csp  renamed_refs=0  residual=- ====
unsigned int * TypeList::InfantryConstructor()
{
{
    this->Items = 0;
    this->Capacity = 0;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    this->CapacityIncrement = 10;
    this->Count = 0;
    *(void**)this = &vt_TypeList_InfantryTypeClass_const;
    return this;
}
}

// ==== BACKFILL 0x0067A850  VectorClass::SaveLoad  cls=VectorClass  sig=csp  renamed_refs=2  residual=- ====
int VectorClass::SaveLoad(TechnoTypeClass * aP1)
{
{
    int v3;
    int result;
    int i;
    int v6;
    v3 = *(int *)aP1->vtable1;
    v6 = this->Count;
    (*(void (__stdcall **)(TechnoTypeClass *, int *, int, int))(v3 + 16))(aP1, &v6, 4, 0);
    result = v6;
    for ( i = 0; i < v6; ++i )
  {
    (*(void (__stdcall **)(TechnoTypeClass *, int, int, int))(*(int *)aP1->vtable1 + 16))( aP1, this->Items + 4 * i, 4, 0);
    result = v6;
  }
    return result;
}
}

// ==== BACKFILL 0x0067A8A0  RulesClass::readWarheads  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
int RulesClass::readWarheads()
{
{
    return this->LargeVisceroid;
}
}

// ==== BACKFILL 0x0067A8E0  RulesClass::readParticleSystems  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
int RulesClass::readParticleSystems(TechnoTypeClass * aP1)
{
{
    int v3;
    int result;
    int i;
    int v6;
    v3 = *(int *)aP1->vtable0;
    v6 = this->LargeVisceroid;
    (*(void (__stdcall **)(TechnoTypeClass *, int *, int, int))(v3 + 16))(aP1, &v6, 4, 0);
    result = v6;
    for ( i = 0; i < v6; ++i )
  {
    (*(void (__stdcall **)(TechnoTypeClass *, int, int, int))(*(int *)aP1->vtable0 + 16))( aP1, this->DetailMinFrameRateMovie + 4 * i, 4, 0);
    result = v6;
  }
    return result;
}
}

// ==== BACKFILL 0x0067AA80  VectorClass::CopyAssign  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * VectorClass::CopyAssign(VectorClass * aP1)
{
if ( this == aP1 )
    return (unsigned int *)this;
this->Clear();
int sourceCapacity = aP1->Capacity;
this->Capacity = sourceCapacity;
if ( !sourceCapacity )
{
    this->Items = 0;
    this->IsAllocated = 0;
    return (unsigned int *)this;
}
unsigned int* newItems = (unsigned int *)operator new(4 * sourceCapacity);
this->Items = (decltype(this->Items))newItems;
if ( !newItems )
    return (unsigned int *)this;
int capacity = this->Capacity;
int i = 0;
this->IsAllocated = 1;
if ( capacity <= 0 )
    return (unsigned int *)this;
do
{
    ((unsigned int *)this->Items)[i] = ((unsigned int *)aP1->Items)[i];
    ++i;
}
while ( i < this->Capacity );
return (unsigned int *)this;
}

// ==== BACKFILL 0x0067AC70  DynamicVector::Constructor_VoxelAnim  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
unsigned int * DynamicVector::Constructor_VoxelAnim(int a2, int a3)
{
{
    this->Items = 0;
    this->DynamicVector_field_0x8 = a2;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_VoxelAnimTypeClass_const;
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
    *(void**)this = &vt_DynamicVectorClass_VoxelAnimTypeClass_const;
    this->CapacityIncrement = 10;
    this->DynamicVector_field_0x10 = 0;
    return this;
}
}

// ==== BACKFILL 0x0067AD80  DynamicVector::Add2  cls=DynamicVector  sig=csp  renamed_refs=1  residual=- ====
char DynamicVector::Add2(VectorClass * aP1)
{
{
    int v3;
    int v4;
    int v6;
    int v7;
    v3 = this->DynamicVector_field_0x8;
    if ( this->DynamicVector_field_0x10 >= v3 )
  {
    if ( !this->IsAllocated && v3 )
    return 0;
    v4 = this->CapacityIncrement;
    if ( v4 <= 0 || !this->SetCapacity(v3 + v4, 0) )
    return 0;
  }
    v6 = this->DynamicVector_field_0x10;
    v7 = this->Items;
    this->DynamicVector_field_0x10 = v6 + 1;
    *(int *)(v7 + 4 * v6) = *(int *)aP1->vtable1;
    return 1;
}
}

// ==== BACKFILL 0x0067AE00  VectorClass::CopySmudge  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * VectorClass::CopySmudge(CCINIClass * aP1)
{
VectorClass* source = (VectorClass *)aP1;
if ( this == source )
    return (unsigned int *)this;
this->Clear();
int sourceCapacity = source->Capacity;
this->Capacity = sourceCapacity;
if ( !sourceCapacity )
{
    this->Items = 0;
    this->IsAllocated = 0;
    return (unsigned int *)this;
}
unsigned int* newItems = (unsigned int *)operator new(4 * sourceCapacity);
this->Items = (decltype(this->Items))newItems;
if ( !newItems )
    return (unsigned int *)this;
int capacity = this->Capacity;
int i = 0;
this->IsAllocated = 1;
if ( capacity <= 0 )
    return (unsigned int *)this;
do
{
    ((unsigned int *)this->Items)[i] = ((unsigned int *)source->Items)[i];
    ++i;
}
while ( i < this->Capacity );
return (unsigned int *)this;
}

// ==== BACKFILL 0x0067AF60  VectorClass::ClearAndFree  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
void VectorClass::ClearAndFree()
{
if ( this->Items && this->IsAllocated )
{
    operator delete(this->Items);
    this->Items = 0;
}
this->IsAllocated = 0;
this->Capacity = 0;
}

// ==== BACKFILL 0x0067B180  VectorClass::CopyBuilding  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * VectorClass::CopyBuilding(VectorClass * aP1)
{
if ( this == aP1 )
    return (unsigned int *)this;
this->Clear();
int sourceCapacity = aP1->Capacity;
this->Capacity = sourceCapacity;
if ( !sourceCapacity )
{
    this->Items = 0;
    this->IsAllocated = 0;
    return (unsigned int *)this;
}
unsigned int* newItems = (unsigned int *)operator new(4 * sourceCapacity);
this->Items = (decltype(this->Items))newItems;
if ( !newItems )
    return (unsigned int *)this;
int capacity = this->Capacity;
int i = 0;
this->IsAllocated = 1;
if ( capacity <= 0 )
    return (unsigned int *)this;
do
{
    ((unsigned int *)this->Items)[i] = ((unsigned int *)aP1->Items)[i];
    ++i;
}
while ( i < this->Capacity );
return (unsigned int *)this;
}

// ==== BACKFILL 0x0067B500  SmallFunc_67B500  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SmallFunc_67B500(unsigned char *** a1, INIClass * edx0, unsigned char * a2, int a4)
{
{
    INIClass Destination[2];
    if ( INIClass::GetString(a1, edx0, a2, (INIClass *)&DataGlobal_87F8E4.__pad_5568[20760], Destination, 128) )
    return WarheadTypeClass::FindOrCreate(Destination[0].__pad_0);
    else
    return a4;
}
}

// ==== BACKFILL 0x0067BAC0  GetINIClassInt  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
InfantryTypeClass * GetINIClassInt(unsigned char *** a0, INIClass * aP1, unsigned char * a2, int a4)
{
{
    INIClass Destination[2];
    if ( INIClass::GetString(a0, aP1, a2, (INIClass *)&DataGlobal_87C374.__pad_579C[33876], Destination, 128) )
    return KeywordType::FindOrCreate2((ObjectClass *)Destination);
    else
    return (InfantryTypeClass *)a4;
}
}

// ==== BACKFILL 0x0067BCE0  SmallFunc_67BCE0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BuildingTypeClass * SmallFunc_67BCE0(unsigned char *** a0, INIClass * aP1, unsigned char * a2, int a4)
{
{
    INIClass Destination[2];
    if ( INIClass::GetString(a0, aP1, a2, (INIClass *)&DataGlobal_87C374.__pad_579C[33876], Destination, 128) )
    return BuildingTypeClass::FindOrCreate(Destination[0].__pad_0);
    else
    return (BuildingTypeClass *)a4;
}
}

// ==== BACKFILL 0x0067BD30  GetINIClassKeyword  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
AircraftTypeClass * GetINIClassKeyword(unsigned char *** a0, INIClass * aP1, unsigned char * a2, int a4)
{
{
    INIClass Destination[2];
    if ( INIClass::GetString(a0, aP1, a2, (INIClass *)&DataGlobal_87C374.__pad_579C[33876], Destination, 128) )
    return KeywordClass::FindOrCreate((ObjectClass *)Destination);
    else
    return (AircraftTypeClass *)a4;
}
}

// ==== BACKFILL 0x0067BD80  SmallFunc_67BD80  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
TerrainTypeClass * SmallFunc_67BD80(unsigned char *** a1, INIClass * edx0, unsigned char * a2, int a4)
{
{
    INIClass Destination[2];
    if ( INIClass::GetString(a1, edx0, a2, (INIClass *)&DataGlobal_87F8E4.__pad_5568[20760], Destination, 128) )
    return TerrainTypeClass::FindOrCreate(Destination[0].__pad_0);
    else
    return (TerrainTypeClass *)a4;
}
}

// ==== BACKFILL 0x0067C1F0  TypeList::CopyVoxelAnim  cls=TypeList  sig=csp  renamed_refs=1  residual=- ====
unsigned int * TypeList::CopyVoxelAnim(VectorClass * aP1)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    this->Items = 0;
    this->Capacity = 0;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_VoxelAnimTypeClass_const;
    if ( this != (int *)aP1 )
  {
    Vector::Cleanup2((int)this);
    v3 = aP1->Capacity;
    this->Capacity = v3;
    if ( v3 )
    {
    v4 = __2_YAPAXI_Z(4 * v3);
    this->Items = v4;
    if ( v4 )
      {
    v5 = this->Capacity;
    v6 = 0;
    this->IsAllocated = 1;
    if ( v5 > 0 )
        {
    do
          {
    *(int *)(this->Items + 4 * v6) = *((int *)aP1->Items + v6);
    ++v6;
          }
    while ( v6 < this->Capacity );
        }
      }
    }
    else
    {
    this->Items = 0;
    this->IsAllocated = 0;
    }
  }
    this->Count = aP1[1].vtable1;
    this->CapacityIncrement = aP1[1].Items;
    *(void**)this = &vt_TypeList_VoxelAnimTypeClass_const;
    return this;
}
}

// ==== BACKFILL 0x0067C360  DynamicVector::RemoveAt  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
char DynamicVector::RemoveAt(int a2)
{
{
    int v2;
    int v3;
    int v4;
    v2 = this->DynamicVector_field_0x10;
    v3 = a2;
    if ( a2 >= v2 )
    return 0;
    v4 = v2 - 1;
    this->DynamicVector_field_0x10 = v4;
    if ( a2 < v4 )
  {
    do
    {
    ++v3;
    *(int *)(this->Items + 4 * v3 - 4) = *(int *)(this->Items + 4 * v3);
    }
    while ( v3 < this->DynamicVector_field_0x10 );
  }
    return 1;
}
}

// ==== BACKFILL 0x0067C3F0  DynamicVector::RemoveAt2  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
char DynamicVector::RemoveAt2(int a2)
{
{
    int v2;
    int v3;
    int v4;
    v2 = this->DynamicVector_field_0x10;
    v3 = a2;
    if ( a2 >= v2 )
    return 0;
    v4 = v2 - 1;
    this->DynamicVector_field_0x10 = v4;
    if ( a2 < v4 )
  {
    do
    {
    ++v3;
    *(int *)(this->Items + 4 * v3 - 4) = *(int *)(this->Items + 4 * v3);
    }
    while ( v3 < this->DynamicVector_field_0x10 );
  }
    return 1;
}
}

// ==== BACKFILL 0x0067C690  Stream::ReadOLEObjects  cls=Stream  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int Stream::ReadOLEObjects() {
{
    HRESULT result;
    int v3;
    int v4;
    LPVOID ppvObj;
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(*(int *)pStm->__pad_0 + 12))(pStm, &v4, 4, 0);
    if ( result >= 0 )
  {
    v3 = 0;
    if ( v4 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    result = OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj);
    if ( result < 0 )
    break;
    if ( ++v3 >= v4 )
    return 0;
      }
    }
  }
    return result;
}
} }

// ==== BACKFILL 0x0067FD20  LoadOptions_Load  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char LoadOptions_Load(LPCCH lpMultiByteStr, int a2)
{
    WCHAR widePath[64];
    MultiByteToWideChar(0, 0, lpMultiByteStr, -1, widePath, 64);
    IStorage* storage = 0;
    if ( StgOpenStorage(widePath, 0, 0x12u, 0, 0, &storage) < 0
      || ScenarioPropertyReadCOM(a2, (int)storage) < 0 )
    {
        if ( storage )
            storage->lpVtbl->Release(storage);
        return 0;
    }
    if ( storage )
        storage->lpVtbl->Release(storage);
    return 1;

}

// ==== BACKFILL 0x0067FDD0  ComPtr::ReleaseSimple  cls=ComPtr  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ComPtr::ReleaseSimple() {
{
    int result;
    result = *(void**)this;
    if ( *(void**)this )
    return (*(int (__stdcall **)(int))(*(int *)(result) + 8))(result);
    return result;
}
} }

// ==== BACKFILL 0x0067FDE0  Game::readIniSettings  cls=Game  sig=csp  renamed_refs=0  residual=- ====
int Game::readIniSettings()
{
{
    int result;
    result = *(void**)this;
    if ( *(void**)this )
    return (*(int (__stdcall **)(int))(*(int *)(result) + 8))(result);
    return result;
}
}

// ==== BACKFILL 0x0067FDF0  SaveGame_Start  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x0067FE70  SaveGame_Start_67FE70  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_67FE70(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x0067FEF0  SaveGame_Start_67FEF0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_67FEF0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x0067FF70  SaveGame_Start_67FF70  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_67FF70(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x0067FFF0  SaveGame_Start_67FFF0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT SaveGame_Start_67FFF0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
