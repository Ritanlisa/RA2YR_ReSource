_DWORD *__thiscall WeaponTypeClass::Constructor(WeaponTypeClass *this, char *Source)
{
  int v3; // eax

  AbstractTypeClass::Constructor(&this->vfptr, Source);
  this->AmbientDamage = 0;
  this->Burst = 1;
  this->Projectile = 0;
  this->Damage = 0;
  this->Speed = 0;
  this->Warhead = 0;
  this->ROF = 0;
  this->Range = 0;
  this->MinimumRange = 0;
  VectorClass::Construct((VectorClass *)this->Report, 0, 0);
  this->Report[5] = 10;
  this->Report[4] = 0;
  this->Report[0] = (int)&TypeList<int>::`vftable';
  VectorClass::Construct((VectorClass *)this->DownReport, 0, 0);
  this->DownReport[5] = 10;
  this->DownReport[4] = 0;
  this->DownReport[0] = (int)&TypeList<int>::`vftable';
  AnimTypeVector::Constructor((AnimTypeVector *)this->Anim, 0, 0);
  this->Anim[5] = 10;
  this->Anim[4] = 0;
  this->Anim[0] = (int)&TypeList<AnimTypeClass const *>::`vftable';
  this->OccupantAnim = 0;
  this->AssaultAnim = 0;
  this->OpenToppedAnim = 0;
  this->AttachedParticleSystem = 0;
  this->LaserInnerColor[0] = 0;
  this->LaserInnerColor[1] = 0;
  this->LaserInnerColor[2] = 0;
  this->LaserOuterColor[0] = 0;
  this->LaserOuterColor[1] = 0;
  this->LaserOuterColor[2] = 0;
  this->LaserOuterSpread[0] = 0;
  this->LaserOuterSpread[1] = 0;
  this->LaserOuterSpread[2] = 0;
  this->UseFireParticles[0] = 0;
  this->UseSparkParticles[0] = 0;
  this->OmniFire[0] = 0;
  this->DistributedWeaponFire[0] = 0;
  this->IsRailgun[0] = 0;
  this->Lobber[0] = 0;
  this->Bright[0] = 0;
  this->IsSonic[0] = 0;
  this->Spawner[0] = 0;
  this->LimboLaunch[0] = 0;
  this->DecloakToFire[0] = 1;
  this->CellRangefinding[0] = 0;
  this->FireOnce[0] = 0;
  this->NeverUse[0] = 0;
  this->RevealOnFire[0] = 1;
  this->TerrainFire[0] = 0;
  this->SabotageCursor[0] = 0;
  this->MigAttackCursor[0] = 0;
  this->DisguiseFireOnly[0] = 0;
  this->DisguiseFakeBlinkTime = 0;
  this->InfiniteMindControl[0] = 0;
  this->FireWhileMoving[0] = 1;
  this->DrainWeapon[0] = 0;
  this->FireInTransport[0] = 1;
  this->Suicide[0] = 0;
  this->TurboBoost[0] = 0;
  this->Supress[0] = 0;
  this->Camera[0] = 0;
  this->Charges[0] = 0;
  this->IsLaser[0] = 0;
  this->DiskLaser[0] = 0;
  this->IsLine[0] = 0;
  this->IsBigLaser[0] = 0;
  this->IsHouseColor[0] = 0;
  this->LaserDuration[0] = 10;
  this->IonSensitive[0] = 0;
  this->AreaFire[0] = 0;
  this->IsElectricBolt[0] = 0;
  this->DrawBoltAsLaser[0] = 0;
  this->IsAlternateColor[0] = 0;
  this->IsRadBeam[0] = 0;
  this->IsRadEruption[0] = 0;
  this->RadLevel = 0;
  this->IsMagBeam[0] = 0;
  this->vfptr = (int)&WeaponTypeClass::`vftable';
  this->vfptr1 = (int)&WeaponTypeClass::`vftable';
  this->vfptr2 = (int)&WeaponTypeClass::`vftable';
  this->vfptr3 = (int)&WeaponTypeClass::`vftable';
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->vfptr1);
  if ( g_WeaponTypePool < dword_887570
    || (byte_887575 || !dword_887570)
    && dword_88757C > 0
    && ((unsigned __int8 (__thiscall *)(WeaponTypeClass **, int, _DWORD))WeaponTypeClass_Array->vfptr2)(
         &WeaponTypeClass_Array,
         dword_887570 + dword_88757C,
         0) )
  {
    v3 = g_WeaponTypePool++;
    *((_DWORD *)g_WeaponTypeConfig + v3) = this;
  }
  return &this->vfptr;
}
