char __thiscall TeamTypeClass::LoadFromINI(TeamTypeClass *this, unsigned __int8 ***a2)
{
  unsigned int field_E8; // ecx
  int v4; // eax
  HouseClass *v5; // ebp
  unsigned int Int_Overwrite; // eax
  char Bool_Overwrite; // al
  char v8; // cl
  char v9; // al
  char v10; // al
  char v11; // cl
  char v12; // al
  char v13; // al
  char field_D4; // cl
  char v15; // al
  char v16; // al
  char q0D0; // cl
  char v18; // al
  char v19; // al
  char v20; // cl
  char v21; // al
  unsigned int v22; // eax
  unsigned int field_DC; // ecx
  unsigned int v24; // eax
  int v25; // eax
  char *v26; // ebp
  char *v27; // eax
  unsigned int u32_C0; // ecx
  unsigned int v29; // eax
  char v30; // al
  char v31; // cl
  char v32; // al
  char v33; // al
  char v34; // cl
  char v35; // al
  int v36; // ecx
  char *v37; // eax
  char *v38; // eax
  int *v39; // ebp
  int *ScriptType; // eax
  _DWORD *v41; // ebp
  _DWORD *TaskForce; // eax
  unsigned int Tactical_E4; // [esp-Ch] [ebp-D4h]
  char v45; // [esp-Ch] [ebp-D4h]
  char v46; // [esp-Ch] [ebp-D4h]
  char v47; // [esp-Ch] [ebp-D4h]
  char q0D0_high; // [esp-Ch] [ebp-D4h]
  char field_D4_high; // [esp-Ch] [ebp-D4h]
  int v50; // [esp-Ch] [ebp-D4h]
  char v51; // [esp-Ch] [ebp-D4h]
  char v52; // [esp-Ch] [ebp-D4h]
  char v53[64]; // [esp+8h] [ebp-C0h] BYREF
  char Destination[128]; // [esp+48h] [ebp-80h] BYREF

  INIClass::ResetSection((INIClass *)a2);
  if ( !(unsigned __int8)AbstractTypeClass::LoadFromINI((AbstractTypeClass *)this, a2) )
    return 0;
  field_E8 = this->field_E8;
  v4 = -1;
  if ( field_E8 )
    v4 = *(_DWORD *)(*(_DWORD *)(field_E8 + 52) + 184);
  v5 = (HouseClass *)SuperWeaponTypeClass::FindOrCreate(
                       (SuperWeaponTypeClass *)a2,
                       (unsigned __int8 *)&this->TeamTypeClass_field_24,
                       (unsigned __int8 *)aHouse,
                       v4);
  if ( (unsigned __int8)BuildingType::IsSpecialType((BuildingType *)v5) )
  {
    this->field_EC = (unsigned int)v5;
    this->field_E8 = 0;
  }
  else if ( v5 != (HouseClass *)-1 )
  {
    this->field_E8 = HouseClass::FindOwner(v5);
    this->field_EC = -1;
  }
  Int_Overwrite = INIClass::ReadInt_Overwrite(
                    (bool *)a2,
                    (unsigned __int8 *)&this->TeamTypeClass_field_24,
                    (unsigned __int8 *)&stru_842DD4.DebrisTypes[1],
                    this->u32_C4);
  Tactical_E4 = this->Tactical_E4;
  this->u32_C4 = Int_Overwrite;
  this->Tactical_E4 = INIClass::ReadInt_Overwrite(
                        (bool *)a2,
                        (unsigned __int8 *)&this->TeamTypeClass_field_24,
                        (unsigned __int8 *)&stru_842DD4.unknown_double_300[1],
                        Tactical_E4);
  Bool_Overwrite = INIClass::ReadBool_Overwrite(
                     (int *)a2,
                     (unsigned __int8 *)&this->TeamTypeClass_field_24,
                     (unsigned __int8 *)&stru_842DD4.SlowdownDistance,
                     this->u32_C8);
  v8 = BYTE1(this->u32_C8);
  LOBYTE(this->u32_C8) = Bool_Overwrite;
  v9 = INIClass::ReadBool_Overwrite(
         (int *)a2,
         (unsigned __int8 *)&this->TeamTypeClass_field_24,
         (unsigned __int8 *)stru_842DD4.ThreatAvoidanceCoefficient,
         v8);
  v45 = BYTE2(this->u32_C8);
  BYTE1(this->u32_C8) = v9;
  BYTE2(this->u32_C8) = INIClass::ReadBool_Overwrite(
                          (int *)a2,
                          (unsigned __int8 *)&this->TeamTypeClass_field_24,
                          (unsigned __int8 *)&stru_842DD4.TargetStrengthCoefficient[1],
                          v45);
  v10 = INIClass::ReadBool_Overwrite(
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)stru_842DD4.TargetSpecialThreatCoefficient,
          HIBYTE(this->u32_C8));
  v11 = BYTE1(this->field_CC);
  HIBYTE(this->u32_C8) = v10;
  v12 = INIClass::ReadBool_Overwrite(
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&stru_842DD4.MyEffectivenessCoefficient[1],
          v11);
  v46 = BYTE2(this->field_CC);
  BYTE1(this->field_CC) = v12;
  BYTE2(this->field_CC) = INIClass::ReadBool_Overwrite(
                            (int *)a2,
                            (unsigned __int8 *)&this->TeamTypeClass_field_24,
                            (unsigned __int8 *)stru_842DD4.SpecialThreatValue,
                            v46);
  v13 = INIClass::ReadBool_Overwrite(
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&stru_842DD4.EliteAbilities[6],
          HIBYTE(this->field_CC));
  field_D4 = this->field_D4;
  HIBYTE(this->field_CC) = v13;
  v15 = INIClass::ReadBool_Overwrite(
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&stru_842DD4.VeteranAbilities[16],
          field_D4);
  v47 = BYTE1(this->field_D4);
  LOBYTE(this->field_D4) = v15;
  BYTE1(this->field_D4) = INIClass::ReadBool_Overwrite(
                            (int *)a2,
                            (unsigned __int8 *)&this->TeamTypeClass_field_24,
                            (unsigned __int8 *)&stru_842DD4.IdleRate,
                            v47);
  v16 = INIClass::ReadBool_Overwrite(
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&stru_842DD4.VoxelCaches[18],
          this->field_CC);
  q0D0 = this->q0D0;
  LOBYTE(this->field_CC) = v16;
  v18 = INIClass::ReadBool_Overwrite(
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&stru_842DD4.VoxelCaches[16],
          q0D0);
  q0D0_high = HIBYTE(this->q0D0);
  LOBYTE(this->q0D0) = v18;
  HIBYTE(this->q0D0) = INIClass::ReadBool_Overwrite(
                         (int *)a2,
                         (unsigned __int8 *)&this->TeamTypeClass_field_24,
                         (unsigned __int8 *)&stru_842DD4.VoxelCaches[14],
                         q0D0_high);
  v19 = INIClass::ReadBool_Overwrite(
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&stru_842DD4.VoxelCaches[10],
          BYTE2(this->q0D0));
  v20 = BYTE1(this->q0D0);
  BYTE2(this->q0D0) = v19;
  v21 = INIClass::ReadBool_Overwrite(
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&stru_842DD4.VoxelCaches[7],
          v20);
  field_D4_high = HIBYTE(this->field_D4);
  BYTE1(this->q0D0) = v21;
  HIBYTE(this->field_D4) = INIClass::ReadBool_Overwrite(
                             (int *)a2,
                             (unsigned __int8 *)&this->TeamTypeClass_field_24,
                             (unsigned __int8 *)&stru_842DD4.VoxelCaches[4],
                             field_D4_high);
  v22 = INIClass::ReadInt_Overwrite(
          (bool *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&stru_842DD4.VoxelCaches[1],
          this->field_D8);
  field_DC = this->field_DC;
  this->field_D8 = v22;
  v24 = INIClass::ReadInt_Overwrite(
          (bool *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)stru_842DD4.VoxelCaches,
          field_DC);
  v50 = *(_DWORD *)&this->field_F0;
  this->field_DC = v24;
  v25 = INIClass::ReadInt_Overwrite(
          (bool *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)g_INI_Key_TechLevel,
          v50);
  v26 = *(char **)&this->field_F4;
  *(_DWORD *)&this->field_F0 = v25;
  if ( INIClass::GetString(
         (INIClass *)a2,
         (unsigned __int8 *)&this->TeamTypeClass_field_24,
         (unsigned __int8 *)off_81728C,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v27 = TagTypeClass::FindOrCreate(Destination);
  }
  else
  {
    v27 = v26;
  }
  u32_C0 = this->u32_C0;
  *(_DWORD *)&this->field_F4 = v27;
  v29 = INIClass::ReadInt_Overwrite(
          (bool *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)g_INI_Key_Group,
          u32_C0);
  v51 = *((_BYTE *)this + 242);
  this->u32_C0 = v29;
  *((_BYTE *)this + 242) = INIClass::ReadBool_Overwrite(
                             (int *)a2,
                             (unsigned __int8 *)&this->TeamTypeClass_field_24,
                             (unsigned __int8 *)stru_842DD4.IsLogic,
                             v51);
  v30 = INIClass::ReadBool_Overwrite(
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&stru_842DD4.AlphaImageFile[21],
          *((_BYTE *)this + 243));
  v31 = *((_BYTE *)this + 246);
  *((_BYTE *)this + 243) = v30;
  v32 = INIClass::ReadBool_Overwrite(
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)g_INI_Key_IsBaseDefense,
          v31);
  v52 = *((_BYTE *)this + 247);
  *((_BYTE *)this + 246) = v32;
  *((_BYTE *)this + 247) = INIClass::ReadBool_Overwrite(
                             (int *)a2,
                             (unsigned __int8 *)&this->TeamTypeClass_field_24,
                             (unsigned __int8 *)&stru_842DD4.ImageFile[24],
                             v52);
  v33 = INIClass::ReadBool_Overwrite(
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&stru_842DD4.AmbientSound,
          *((_BYTE *)this + 244));
  v34 = *((_BYTE *)this + 245);
  *((_BYTE *)this + 244) = v33;
  v35 = INIClass::ReadBool_Overwrite(
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&stru_842DD4.__pad_14D[139],
          v34);
  v36 = *((_DWORD *)this + 53);
  *((_BYTE *)this + 245) = v35;
  v37 = Waypoint::To_String(v36);
  if ( INIClass::GetString(
         (INIClass *)a2,
         (unsigned __int8 *)&this->TeamTypeClass_field_24,
         (unsigned __int8 *)aWaypoint,
         v37,
         v53,
         64) > 0 )
    *((_DWORD *)this + 53) = String::To_Waypoint(v53);
  v38 = Waypoint::To_String(*((_DWORD *)this + 54));
  if ( INIClass::GetString(
         (INIClass *)a2,
         (unsigned __int8 *)&this->TeamTypeClass_field_24,
         (unsigned __int8 *)&stru_842DD4.__pad_14D[119],
         v38,
         v53,
         64) > 0 )
    *((_DWORD *)this + 54) = String::To_Waypoint(v53);
  v39 = (int *)*((_DWORD *)this + 56);
  if ( INIClass::GetString(
         (INIClass *)a2,
         (unsigned __int8 *)&this->TeamTypeClass_field_24,
         (unsigned __int8 *)aScript,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    ScriptType = TeamTypeClass::CreateScriptType(Destination);
  }
  else
  {
    ScriptType = v39;
  }
  v41 = (_DWORD *)*((_DWORD *)this + 57);
  *((_DWORD *)this + 56) = ScriptType;
  if ( INIClass::GetString(
         (INIClass *)a2,
         (unsigned __int8 *)&this->TeamTypeClass_field_24,
         (unsigned __int8 *)aTaskforce,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    TaskForce = TeamTypeClass::FindOrCreateTaskForce(Destination);
  }
  else
  {
    TaskForce = v41;
  }
  *((_DWORD *)this + 57) = TaskForce;
  if ( !TaskForce )
  {
    if ( dword_A8E8E0 <= 0 )
      return 0;
    *((_DWORD *)this + 57) = *(_DWORD *)dword_A8E8D4;
  }
  if ( *((_DWORD *)this + 56) )
    return 1;
  if ( dword_8B41D8 > 0 )
  {
    *((_DWORD *)this + 56) = *(_DWORD *)dword_8B41CC;
    return 1;
  }
  return 0;
}
