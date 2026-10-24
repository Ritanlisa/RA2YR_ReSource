_DWORD *__thiscall BuildingTypeClass::Construct(BuildingTypeClass *this, char *Source)
{
  int v3; // eax
  int v4; // eax

  ObjectTypeClass::ConstructFull(&this->vfptr, Source);
  this->WalkRate = 0;
  this->IdleRate = 0;
  *(_DWORD *)this->VeteranAbilities = 0;
  *(_DWORD *)&this->EliteAbilities[2] = 0;
  *(_DWORD *)&this->VeteranAbilities[4] = 1;
  *(_DWORD *)&this->VeteranAbilities[8] = 1;
  *(_DWORD *)&this->VeteranAbilities[12] = 0;
  *(_DWORD *)&this->VeteranAbilities[16] = 1;
  *(_DWORD *)&this->EliteAbilities[6] = 0;
  BuildingTypeClass::loadBuildingProperty_b_5478850((BuildingTypeClass *)&this->EliteAbilities[10], 0, 0);
  this->MyEffectivenessCoefficient[1] = 10;
  this->MyEffectivenessCoefficient[0] = 0;
  *(_DWORD *)&this->EliteAbilities[10] = &TypeList<RGBClass>::`vftable';
  this->TargetEffectivenessCoefficient[1] = 0;
  LOBYTE(this->TargetSpecialThreatCoefficient[0]) = 0;
  BYTE1(this->TargetSpecialThreatCoefficient[0]) = 0;
  BYTE1(this->AccelerationFactor[1]) = -1;
  BYTE2(this->AccelerationFactor[1]) = -1;
  this->TargetSpecialThreatCoefficient[1] = 0;
  this->TargetStrengthCoefficient[0] = 1;
  this->TargetStrengthCoefficient[1] = 0;
  this->TargetDistanceCoefficient[0] = 0;
  this->TargetDistanceCoefficient[1] = 0;
  this->ThreatAvoidanceCoefficient[0] = 1;
  this->ThreatAvoidanceCoefficient[1] = 0;
  this->SlowdownDistance = 0;
  this->align_2FC = 0;
  this->unknown_double_300[0] = 0;
  this->unknown_double_300[1] = 0;
  LOBYTE(this->AccelerationFactor[0]) = 0;
  BYTE1(this->AccelerationFactor[0]) = 0;
  BYTE2(this->AccelerationFactor[0]) = 0;
  HIBYTE(this->AccelerationFactor[0]) = 4;
  LOBYTE(this->AccelerationFactor[1]) = 0;
  HIBYTE(this->AccelerationFactor[1]) = 0;
  this->CloakingSpeed = -1;
  this->DebrisTypes[0] = -1;
  this->vfptr = (int)&ParticleTypeClass::`vftable';
  this->vfptr1 = (int)&ParticleTypeClass::`vftable';
  this->vfptr2 = (int)&ParticleTypeClass::`vftable';
  this->vfptr3 = (int)&ParticleTypeClass::`vftable';
  if ( dword_A83DA8 < dword_A83DA0
    || (byte_A83DA5 || !dword_A83DA0)
    && dword_A83DAC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A83D98 + 8))(
         &dword_A83D98,
         dword_A83DA0 + dword_A83DAC,
         0) )
  {
    v3 = dword_A83DA8++;
    *((_DWORD *)dword_A83D9C + v3) = this;
  }
  if ( stru_B0F670.DynamicVector_field_0x10 < stru_B0F670.DynamicVector_field_0x8
    || (stru_B0F670.__pad_C[1] || !stru_B0F670.DynamicVector_field_0x8)
    && *(int *)stru_B0F670.__pad_14 > 0
    && (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)stru_B0F670.__pad_0 + 8))(
         &stru_B0F670,
         stru_B0F670.DynamicVector_field_0x8 + *(_DWORD *)stru_B0F670.__pad_14,
         0) )
  {
    v4 = stru_B0F670.DynamicVector_field_0x10++;
    *(_DWORD *)(*(_DWORD *)&stru_B0F670.DynamicVector_field_0x1[3] + 4 * v4) = this;
  }
  this->IsLogic[0] = 0;
  return &this->vfptr;
}
