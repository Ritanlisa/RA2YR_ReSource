int __stdcall TechnoTypeClass::SaveLoad_Prefix(TechnoTypeClass *this, int a2)
{
  TypeList *Dock; // ebp
  int result; // eax
  int j; // ebp
  int k; // ebx
  int m; // ebx
  int n; // ebx
  int ii; // ebx
  int jj; // ebx
  int kk; // ebx
  int mm; // ebx
  int nn; // ebx
  int i1; // ebx
  int i2; // ebx
  int i3; // ebx
  int i4; // ebx
  int i5; // ebx
  int i6; // ebx
  int i7; // ebx
  int i8; // ebx
  int i9; // ebx
  int i10; // ebx
  int i11; // esi
  int i12; // esi
  int i13; // esi
  int i14; // esi
  int i15; // esi
  int *Weapon; // esi
  int v30; // ebx
  int *EliteWeapon; // esi
  int v32; // ebx
  int i16; // esi
  int i17; // esi
  void *v35; // eax
  int v36; // [esp+280h] [ebp-210h] BYREF
  int v37; // [esp+284h] [ebp-20Ch] BYREF
  int i; // [esp+288h] [ebp-208h]
  char Filename[256]; // [esp+28Ch] [ebp-204h] BYREF
  char Buffer[260]; // [esp+38Ch] [ebp-104h] BYREF

  Dock = (TypeList *)this->Dock;
  (*(void (__thiscall **)(int *))(this->Dock[0] + 12))(this->Dock);
  (*(void (__thiscall **)(int *))(this->DebrisTypes[0] + 12))(this->DebrisTypes);
  (*(void (__thiscall **)(int *))(this->DebrisAnims[0] + 12))(this->DebrisAnims);
  (*(void (__thiscall **)(int *))(this->VoiceSelect[0] + 12))(this->VoiceSelect);
  (*(void (__thiscall **)(int *))(this->VoiceSelectEnslaved[0] + 12))(this->VoiceSelectEnslaved);
  (*(void (__thiscall **)(int *))(this->VoiceSelectDeactivated[0] + 12))(this->VoiceSelectDeactivated);
  (*(void (__thiscall **)(int *))(this->VoiceMove[0] + 12))(this->VoiceMove);
  (*(void (__thiscall **)(int *))(this->VoiceAttack[0] + 12))(this->VoiceAttack);
  (*(void (__thiscall **)(int *))(this->VoiceSpecialAttack[0] + 12))(this->VoiceSpecialAttack);
  (*(void (__thiscall **)(int *))(this->VoiceDie[0] + 12))(this->VoiceDie);
  (*(void (__thiscall **)(int *))(this->VoiceFeedback[0] + 12))(this->VoiceFeedback);
  (*(void (__thiscall **)(int *))(this->MoveSound[0] + 12))(this->MoveSound);
  (*(void (__thiscall **)(int *))(this->DieSound[0] + 12))(this->DieSound);
  (*(void (__thiscall **)(int *))(this->Explosion[0] + 12))(this->Explosion);
  (*(void (__thiscall **)(int *))(this->DestroyAnim[0] + 12))(this->DestroyAnim);
  (*(void (__thiscall **)(int *))(this->Prerequisite[0] + 12))(this->Prerequisite);
  (*(void (__thiscall **)(int *))(this->PrerequisiteOverride[0] + 12))(this->PrerequisiteOverride);
  (*(void (__thiscall **)(int *))(this->DebrisMaximums[0] + 12))(this->DebrisMaximums);
  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)this, a2);
  if ( result >= 0 )
  {
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->DeploysInto);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->UndeploysInto);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->PowersUnit);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->NaturalParticleSystem);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->RefinerySmokeParticleSystem);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->JumpjetAccel);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->SuppressionThreshold);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->SlavesNumber);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->AirstrikeTeamType);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->EliteAirstrikeTeamType);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->UnloadingClass);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->DeployingAnim);
    if ( this != (TechnoTypeClass *)-1000 )
      TypeList::BuildingTypeConstructor(Dock);
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0);
    for ( i = 0; i < v36; ++i )
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0);
      DynamicVector::Add_Alt3((DynamicVector *)Dock, &v37);
    }
    if ( this != (TechnoTypeClass *)-788 )
      TypeList::VoxelAnimConstructor((TypeList *)this->DebrisTypes);
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0);
    for ( j = 0; j < v36; ++j )
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0);
      DynamicVector::Add2((DynamicVector *)this->DebrisTypes, &v37);
    }
    if ( this != (TechnoTypeClass *)-1476 )
      AnimTypeList::Constructor((AnimTypeList *)this->DebrisAnims);
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0);
    for ( k = 0; k < v36; ++k )
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0);
      DynamicVector::Add_Alt4((DynamicVector *)this->DebrisAnims, &v37);
    }
    if ( this != (TechnoTypeClass *)-1044 )
      TypeList::Construct((TypeList *)this->VoiceSelect);
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0);
    for ( m = 0; m < v36; ++m )
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0);
      DynamicVector::Add_Alt((DynamicVector *)this->VoiceSelect, &v37);
    }
    if ( this != (TechnoTypeClass *)-1072 )
      TypeList::Construct((TypeList *)this->VoiceSelectEnslaved);
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0);
    for ( n = 0; n < v36; ++n )
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0);
      DynamicVector::Add_Alt((DynamicVector *)this->VoiceSelectEnslaved, &v37);
    }
    if ( this != (TechnoTypeClass *)-1100 )
      TypeList::Construct((TypeList *)this->VoiceSelectDeactivated);
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0);
    for ( ii = 0; ii < v36; ++ii )
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0);
      DynamicVector::Add_Alt((DynamicVector *)this->VoiceSelectDeactivated, &v37);
    }
    if ( this != (TechnoTypeClass *)-1128 )
      TypeList::Construct((TypeList *)this->VoiceMove);
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0);
    for ( jj = 0; jj < v36; ++jj )
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0);
      DynamicVector::Add_Alt((DynamicVector *)this->VoiceMove, &v37);
    }
    if ( this != (TechnoTypeClass *)-1156 )
      TypeList::Construct((TypeList *)this->VoiceAttack);
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0);
    for ( kk = 0; kk < v36; ++kk )
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0);
      DynamicVector::Add_Alt((DynamicVector *)this->VoiceAttack, &v37);
    }
    if ( this != (TechnoTypeClass *)-1184 )
      TypeList::Construct((TypeList *)this->VoiceSpecialAttack);
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0);
    for ( mm = 0; mm < v36; ++mm )
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0);
      DynamicVector::Add_Alt((DynamicVector *)this->VoiceSpecialAttack, &v37);
    }
    if ( this != (TechnoTypeClass *)-1212 )
      TypeList::Construct((TypeList *)this->VoiceDie);
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0);
    for ( nn = 0; nn < v36; ++nn )
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0);
      DynamicVector::Add_Alt((DynamicVector *)this->VoiceDie, &v37);
    }
    if ( this != (TechnoTypeClass *)-1240 )
      TypeList::Construct((TypeList *)this->VoiceFeedback);
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0);
    for ( i1 = 0; i1 < v36; ++i1 )
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0);
      DynamicVector::Add_Alt((DynamicVector *)this->VoiceFeedback, &v37);
    }
    if ( this != (TechnoTypeClass *)-1268 )
      TypeList::Construct((TypeList *)this->MoveSound);
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0);
    for ( i2 = 0; i2 < v36; ++i2 )
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0);
      DynamicVector::Add_Alt((DynamicVector *)this->MoveSound, &v37);
    }
    if ( this != (TechnoTypeClass *)-1296 )
      TypeList::Construct((TypeList *)this->DieSound);
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0);
    for ( i3 = 0; i3 < v36; ++i3 )
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0);
      DynamicVector::Add_Alt((DynamicVector *)this->DieSound, &v37);
    }
    if ( this != (TechnoTypeClass *)-1836 )
      AnimTypeList::Constructor((AnimTypeList *)this->Explosion);
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0);
    for ( i4 = 0; i4 < v36; ++i4 )
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0);
      DynamicVector::Add_Alt4((DynamicVector *)this->Explosion, &v37);
    }
    if ( this != (TechnoTypeClass *)-1864 )
      AnimTypeList::Constructor((AnimTypeList *)this->DestroyAnim);
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0);
    for ( i5 = 0; i5 < v36; ++i5 )
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0);
      DynamicVector::Add_Alt4((DynamicVector *)this->DestroyAnim, &v37);
    }
    if ( this != (TechnoTypeClass *)-816 )
      TypeList::Construct((TypeList *)this->DebrisMaximums);
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0);
    for ( i6 = 0; i6 < v36; ++i6 )
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0);
      DynamicVector::Add_Alt((DynamicVector *)this->DebrisMaximums, &v37);
    }
    if ( this != (TechnoTypeClass *)-1592 )
      TypeList::Construct((TypeList *)this->Prerequisite);
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0);
    for ( i7 = 0; i7 < v36; ++i7 )
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0);
      DynamicVector::Add_Alt((DynamicVector *)this->Prerequisite, &v37);
    }
    if ( this != (TechnoTypeClass *)-1620 )
      TypeList::Construct((TypeList *)this->PrerequisiteOverride);
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0);
    for ( i8 = 0; i8 < v36; ++i8 )
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0);
      DynamicVector::Add_Alt((DynamicVector *)this->PrerequisiteOverride, &v37);
    }
    if ( this != (TechnoTypeClass *)-1912 )
      TechnoTypeClass::Constructor((TechnoTypeClass *)this->DamageParticleSystems);
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0);
    for ( i9 = 0; i9 < v36; ++i9 )
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0);
      TypeList::PushBack((TypeList *)this->DamageParticleSystems, &v37);
    }
    if ( this != (TechnoTypeClass *)-1940 )
      TechnoTypeClass::Constructor((TechnoTypeClass *)this->DestroyParticleSystems);
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0);
    for ( i10 = 0; i10 < v36; ++i10 )
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0);
      TypeList::PushBack((TypeList *)this->DestroyParticleSystems, &v37);
    }
    for ( i11 = 0; i11 < this->Dock[4]; ++i11 )
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(this->Dock[1] + 4 * i11));
    for ( i12 = 0; i12 < this->Explosion[4]; ++i12 )
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(this->Explosion[1] + 4 * i12));
    for ( i13 = 0; i13 < this->DestroyAnim[4]; ++i13 )
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(this->DestroyAnim[1] + 4 * i13));
    for ( i14 = 0; i14 < this->DebrisTypes[4]; ++i14 )
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(this->DebrisTypes[1] + 4 * i14));
    for ( i15 = 0; i15 < this->DebrisAnims[4]; ++i15 )
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(this->DebrisAnims[1] + 4 * i15));
    Weapon = (int *)this->Weapon;
    v30 = 18;
    do
    {
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, Weapon);
      Weapon += 7;
      --v30;
    }
    while ( v30 );
    EliteWeapon = (int *)this->EliteWeapon;
    v32 = 18;
    do
    {
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, EliteWeapon);
      EliteWeapon += 7;
      --v32;
    }
    while ( v32 );
    for ( i16 = 0; i16 < this->DamageParticleSystems[4]; ++i16 )
      ObjectPtr::RegisterForTracking(
        (int)&SwizzleManagerClass_Instance,
        (int *)(this->DamageParticleSystems[1] + 4 * i16));
    for ( i17 = 0; i17 < this->DestroyParticleSystems[4]; ++i17 )
      ObjectPtr::RegisterForTracking(
        (int)&SwizzleManagerClass_Instance,
        (int *)(this->DestroyParticleSystems[1] + 4 * i17));
    _makepath(Buffer, 0, 0, this->ImageFile, Ext);
    this->Image = (int)SearchMIXFile(Buffer, 0);
    INIClass::GetString(
      &dword_887180,
      (unsigned __int8 *)this->ImageFile,
      (unsigned __int8 *)&stru_842DD4.VoiceHarvest,
      &stru_842DD4.__pad_1714[72],
      Filename,
      256);
    if ( !_strcmpi(Filename, &stru_842DD4.__pad_1714[72]) )
      INIClass::GetString(
        &dword_887180,
        (unsigned __int8 *)this->__pad_24,
        (unsigned __int8 *)&stru_842DD4.VoiceHarvest,
        &stru_842DD4.__pad_1714[72],
        Filename,
        256);
    _makepath(Buffer, 0, 0, Filename, Ext);
    this->Cameo = 0;
    v35 = SearchMIXFile(Buffer, 0);
    this->Cameo = (int)v35;
    if ( !v35 )
      this->Cameo = (int)SearchMIXFile(aXxiconShp, 0);
    INIClass::GetString(
      &dword_887180,
      (unsigned __int8 *)this->ImageFile,
      (unsigned __int8 *)&stru_842DD4.UndeploySound,
      &g_INI_DefaultBuffer,
      Filename,
      256);
    _makepath(Buffer, 0, 0, Filename, Ext);
    this->AltCameo = 0;
    this->AltCameo = (int)SearchMIXFile(Buffer, 0);
    INIClass::GetString(
      &dword_887180,
      (unsigned __int8 *)this->ImageFile,
      (unsigned __int8 *)g_INI_Key_Palette,
      &g_INI_DefaultBuffer,
      &this->__pad_DC8[8],
      32);
    if ( this->__pad_DC8[8] )
      *(_DWORD *)&this->__pad_DC8[40] = FileExtension::MapHandler(&this->__pad_DC8[8]);
    return 0;
  }
  return result;
}
