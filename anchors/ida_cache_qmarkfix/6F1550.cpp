char __thiscall TeamTypeClass::GetMaxCount(TeamTypeClass *this, char *a2)
{
  unsigned int field_E8; // eax
  unsigned int field_EC; // ebp
  int *p_TeamTypeClass_field_24; // edi
  int v6; // eax
  char *v7; // eax
  char *v8; // eax
  int v9; // eax
  int v10; // esi

  if ( !AbstractTypeClass::WriteINI((AbstractTypeClass *)this, a2) )
    return 0;
  field_E8 = this->field_E8;
  field_EC = -1;
  if ( field_E8 )
  {
    field_EC = *(_DWORD *)(*(_DWORD *)(field_E8 + 52) + 184);
  }
  else if ( (unsigned __int8)BuildingType::IsSpecialType((BuildingType *)this->field_EC) )
  {
    field_EC = this->field_EC;
  }
  p_TeamTypeClass_field_24 = &this->TeamTypeClass_field_24;
  INIClass::SetInt(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&stru_842DD4.DebrisTypes[1],
    this->u32_C4,
    0);
  INIClass::SetInt(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&stru_842DD4.unknown_double_300[1],
    this->Tactical_E4,
    0);
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&stru_842DD4.SlowdownDistance,
    this->u32_C8);
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)stru_842DD4.ThreatAvoidanceCoefficient,
    BYTE1(this->u32_C8));
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&stru_842DD4.TargetStrengthCoefficient[1],
    BYTE2(this->u32_C8));
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)stru_842DD4.TargetSpecialThreatCoefficient,
    HIBYTE(this->u32_C8));
  INIClass::SetHouseName(a2, (unsigned __int8 *)&this->TeamTypeClass_field_24, aHouse, (void *)field_EC);
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&stru_842DD4.VoxelCaches[18],
    this->field_CC);
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&stru_842DD4.MyEffectivenessCoefficient[1],
    BYTE1(this->field_CC));
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)stru_842DD4.SpecialThreatValue,
    BYTE2(this->field_CC));
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    &stru_842DD4.EliteAbilities[6],
    HIBYTE(this->field_CC));
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    &stru_842DD4.VeteranAbilities[16],
    this->field_D4);
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&stru_842DD4.IdleRate,
    BYTE1(this->field_D4));
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&stru_842DD4.VoxelCaches[16],
    this->q0D0);
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&stru_842DD4.VoxelCaches[10],
    BYTE2(this->q0D0));
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&stru_842DD4.VoxelCaches[7],
    BYTE1(this->q0D0));
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&stru_842DD4.VoxelCaches[14],
    HIBYTE(this->q0D0));
  INIClass::SetInt(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&stru_842DD4.VoxelCaches[1],
    this->field_D8,
    0);
  INIClass::SetInt(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)stru_842DD4.VoxelCaches,
    this->field_DC,
    0);
  INIClass::SetInt(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    g_INI_Key_TechLevel,
    *(_DWORD *)&this->field_F0,
    0);
  INIClass::SetInt(a2, (unsigned __int8 *)&this->TeamTypeClass_field_24, g_INI_Key_Group, this->u32_C0, 0);
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&stru_842DD4.VoxelCaches[4],
    HIBYTE(this->field_D4));
  INIClass::SetBool(a2, (unsigned __int8 *)&this->TeamTypeClass_field_24, stru_842DD4.IsLogic, *((_BYTE *)this + 242));
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    &stru_842DD4.AlphaImageFile[21],
    *((_BYTE *)this + 243));
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&stru_842DD4.AmbientSound,
    *((_BYTE *)this + 244));
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    &stru_842DD4.__pad_14D[139],
    *((_BYTE *)this + 245));
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    g_INI_Key_IsBaseDefense,
    *((_BYTE *)this + 246));
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    &stru_842DD4.ImageFile[24],
    *((_BYTE *)this + 247));
  v6 = *(_DWORD *)&this->field_F4;
  if ( v6 )
    INIClass::SetString(a2, (unsigned __int8 *)&this->TeamTypeClass_field_24, off_81728C, (char *)(v6 + 36));
  v7 = Waypoint::To_String(*((_DWORD *)this + 53));
  INIClass::SetString(a2, (unsigned __int8 *)&this->TeamTypeClass_field_24, aWaypoint, v7);
  v8 = Waypoint::To_String(*((_DWORD *)this + 54));
  INIClass::SetString(a2, (unsigned __int8 *)&this->TeamTypeClass_field_24, &stru_842DD4.__pad_14D[119], v8);
  v9 = *((_DWORD *)this + 56);
  if ( v9 )
    INIClass::SetString(a2, (unsigned __int8 *)&this->TeamTypeClass_field_24, aScript, (char *)(v9 + 36));
  v10 = *((_DWORD *)this + 57);
  if ( v10 )
    INIClass::SetString(a2, (unsigned __int8 *)p_TeamTypeClass_field_24, aTaskforce, (char *)(v10 + 36));
  return 1;
}
