// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00464A70  AbstractClass::queryInterface  this=AbstractClass  sig=csp ====
_DWORD *__userpurge AbstractClass::queryInterface@<eax>(AbstractClass *this, _DWORD *a2, int *a3)
{
  void *v3; // esi
  void *GroundHeight; // eax
  int v6; // [esp+4h] [ebp-Ch] BYREF
  void *v7; // [esp+8h] [ebp-8h]
  int v8; // [esp+Ch] [ebp-4h]

  v6 = *a2; /*0x464a7a*/
  v7 = (void *)a2[1]; /*0x464a8b*/
  v8 = a2[2]; /*0x464a92*/
  GroundHeight = (void *)Cell::GetGroundHeight(&v6); /*0x464a96*/
  this->vtable0 = v3; /*0x464aa5*/
  this->vtable1 = v7; /*0x464aab*/
  this->vtable2 = GroundHeight; /*0x464aaf*/
  return &this->vtable0; /*0x464a9f*/
}



// ==== 0x00464AC0  AbstractClass::addRef  this=AbstractClass  sig=csp ====
bool __thiscall BuildingTypeClass::CanPlacePath(AbstractClass *this, _WORD *a2, int a3)
{
  if ( *((_BYTE *)this + 5891) ) /*0x464ac0*/
    return 1; /*0x464aca*/
  else
    return BuildingClass::ValidatePath((TechnoTypeClass *)this, a2, a3); /*0x464ad9*/
}



// ==== 0x00464AF0  BuildingTypeClass::GetSizeInLeptons  this=BuildingTypeClass  sig=csp ====
_DWORD *__thiscall BuildingTypeClass::GetSizeInLeptons(BuildingTypeClass *this, _DWORD *a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // eax

  v2 = this->Foundation[0]; /*0x464af0*/
  v3 = dword_89DDB8 * this->Height; /*0x464afc*/
  v2 *= 4; /*0x464b03*/
  v4 = *(int *)((char *)stru_81926C.Type + v2); /*0x464b0b*/
  v5 = *(int *)((char *)dword_819310 + v2); /*0x464b11*/
  *a2 = v4 << 8; /*0x464b1d*/
  a2[1] = v5 << 8; /*0x464b22*/
  a2[2] = v3; /*0x464b27*/
  return a2; /*0x464b2a*/
}



// ==== 0x00464B30  BuildingTypeClass::UpdatePower  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::UpdatePower(BuildingTypeClass *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // ecx
  int v30; // edx
  int v31; // eax
  int v32; // ecx
  int v33; // edx
  int v34; // eax
  int v35; // ecx
  int v36; // edx
  int v37; // eax
  int v38; // ecx
  int v39; // edx
  int v40; // eax
  int v41; // ecx
  int v42; // edx
  int v43; // eax
  int v44; // eax
  int v45; // ecx
  int v46; // edx
  int v47; // eax
  int v48; // ecx
  int v49; // eax
  int v50; // ecx
  int v51; // edx
  int v52; // edx
  Checksummer *v54; // [esp+Ch] [ebp+4h]

  BuildingTypeClass::ProcessPower((int)this, &v54->crcValue); /*0x464b39*/
  Checksummer::Add_double(v54, this->GateCloseDelay[0], this->GateCloseDelay[1]); /*0x464b4e*/
  Power::TimerProcess(this->LightVisibility); /*0x464b5c*/
  Power::TimerProcess(this->LightIntensity); /*0x464b6a*/
  Power::TimerProcess(this->LightRedTint); /*0x464b78*/
  Power::TimerProcess(this->LightGreenTint); /*0x464b86*/
  Power::TimerProcess(this->LightBlueTint); /*0x464b94*/
  Checksum::AddString((Checksum *)v54, (unsigned __int8 *)this->__pad_E5C); /*0x464ba2*/
  Checksum::AddString((Checksum *)v54, (unsigned __int8 *)this->__pad_E88); /*0x464bb0*/
  Power::TimerProcess(this->Adjacent); /*0x464bbe*/
  Power::TimerProcess(this->Factory[0]); /*0x464bcc*/
  Power::TimerProcess(this->PowerBonus); /*0x464bda*/
  Power::TimerProcess(this->PowerDrain); /*0x464be8*/
  Power::TimerProcess(this->ExtraPowerBonus); /*0x464bf6*/
  Power::TimerProcess(this->ExtraPowerDrain); /*0x464c04*/
  Power::TimerProcess(this->Foundation[0]); /*0x464c12*/
  Power::TimerProcess(this->Height); /*0x464c20*/
  Power::TimerProcess(this->OccupyHeight); /*0x464c2e*/
  Power::TimerProcess(this->MidPoint); /*0x464c3c*/
  Power::TimerProcess(this->DoorStages); /*0x464c4a*/
  Checksummer::Add_Buffer(v54, (unsigned __int8 *)this->BuildingAnimFrame, 72); /*0x464c5a*/
  Checksummer::Add_Buffer(v54, (unsigned __int8 *)&this->BuildingAnim[12], 1428); /*0x464c6d*/
  Power::TimerProcess(*(_DWORD *)&this->__pad_F70[1392]); /*0x464c7b*/
  v2 = Power::TimerProcess(*(_DWORD *)&this->__pad_F70[1444]); /*0x464c89*/
  LOBYTE(v2) = this->HoverPad; /*0x464c8e*/
  Power::FlagProcess((Power *)v54, v2); /*0x464c97*/
  LOBYTE(v3) = this->IsPlug; /*0x464c9c*/
  Power::FlagProcess((Power *)v54, v3); /*0x464ca5*/
  LOBYTE(v4) = this->IsTemple; /*0x464caa*/
  v5 = Power::FlagProcess((Power *)v54, v4); /*0x464cb3*/
  LOBYTE(v5) = this->HasSpotlight; /*0x464cb8*/
  Power::FlagProcess((Power *)v54, v5); /*0x464cc1*/
  LOBYTE(v6) = this->BaseNormal; /*0x464cc6*/
  Power::FlagProcess((Power *)v54, v6); /*0x464ccf*/
  LOBYTE(v7) = this->EligibileForAllyBuilding; /*0x464cd4*/
  v8 = Power::FlagProcess((Power *)v54, v7); /*0x464cdd*/
  LOBYTE(v8) = this->NeedsEngineer; /*0x464ce2*/
  Power::FlagProcess((Power *)v54, v8); /*0x464ceb*/
  LOBYTE(v9) = this->Bib; /*0x464cf0*/
  Power::FlagProcess((Power *)v54, v9); /*0x464cf9*/
  LOBYTE(v10) = this->Wall; /*0x464cfe*/
  v11 = Power::FlagProcess((Power *)v54, v10); /*0x464d07*/
  LOBYTE(v11) = this->Capturable; /*0x464d0c*/
  Power::FlagProcess((Power *)v54, v11); /*0x464d15*/
  LOBYTE(v12) = this->Powered; /*0x464d1a*/
  Power::FlagProcess((Power *)v54, v12); /*0x464d23*/
  LOBYTE(v13) = this->Unsellable; /*0x464d28*/
  v14 = Power::FlagProcess((Power *)v54, v13); /*0x464d31*/
  LOBYTE(v14) = this->__pad_1624[128]; /*0x464d36*/
  Power::FlagProcess((Power *)v54, v14); /*0x464d3f*/
  LOBYTE(v15) = this->__pad_1624[129]; /*0x464d44*/
  Power::FlagProcess((Power *)v54, v15); /*0x464d4d*/
  LOBYTE(v16) = this->ChargeAnim; /*0x464d52*/
  v17 = Power::FlagProcess((Power *)v54, v16); /*0x464d5b*/
  LOBYTE(v17) = this->IsAnimDelayedFire; /*0x464d60*/
  Power::FlagProcess((Power *)v54, v17); /*0x464d69*/
  Power::TimerProcess(this->DelayedFireDelay); /*0x464d77*/
  LOBYTE(v18) = this->SiloDamage; /*0x464d7c*/
  v19 = Power::FlagProcess((Power *)v54, v18); /*0x464d85*/
  LOBYTE(v19) = this->UnitRepair; /*0x464d8a*/
  Power::FlagProcess((Power *)v54, v19); /*0x464d93*/
  LOBYTE(v20) = this->UnitReload; /*0x464d98*/
  Power::FlagProcess((Power *)v54, v20); /*0x464da1*/
  LOBYTE(v21) = this->Cloning; /*0x464da6*/
  v22 = Power::FlagProcess((Power *)v54, v21); /*0x464daf*/
  LOBYTE(v22) = this->Grinding; /*0x464db4*/
  Power::FlagProcess((Power *)v54, v22); /*0x464dbd*/
  LOBYTE(v23) = this->UnitAbsorb; /*0x464dc2*/
  Power::FlagProcess((Power *)v54, v23); /*0x464dcb*/
  LOBYTE(v24) = this->InfantryAbsorb; /*0x464dd0*/
  v25 = Power::FlagProcess((Power *)v54, v24); /*0x464dd9*/
  LOBYTE(v25) = this->SecretLab; /*0x464dde*/
  Power::FlagProcess((Power *)v54, v25); /*0x464de7*/
  LOBYTE(v26) = this->Flat_flag; /*0x464dec*/
  Power::FlagProcess((Power *)v54, v26); /*0x464df5*/
  LOBYTE(v27) = this->DockUnload; /*0x464dfa*/
  v28 = Power::FlagProcess((Power *)v54, v27); /*0x464e03*/
  LOBYTE(v28) = this->Recoilless; /*0x464e08*/
  Power::FlagProcess((Power *)v54, v28); /*0x464e11*/
  LOBYTE(v29) = this->BridgeRepairHut; /*0x464e16*/
  Power::FlagProcess((Power *)v54, v29); /*0x464e1f*/
  LOBYTE(v30) = this->Gate; /*0x464e24*/
  v31 = Power::FlagProcess((Power *)v54, v30); /*0x464e2d*/
  LOBYTE(v31) = this->SAM; /*0x464e32*/
  Power::FlagProcess((Power *)v54, v31); /*0x464e3b*/
  LOBYTE(v32) = this->ConstructionYard; /*0x464e40*/
  Power::FlagProcess((Power *)v54, v32); /*0x464e49*/
  LOBYTE(v33) = this->NukeSilo; /*0x464e4e*/
  v34 = Power::FlagProcess((Power *)v54, v33); /*0x464e57*/
  LOBYTE(v34) = this->Refinery; /*0x464e5c*/
  Power::FlagProcess((Power *)v54, v34); /*0x464e65*/
  LOBYTE(v35) = this->WeaponsFactory; /*0x464e6a*/
  Power::FlagProcess((Power *)v54, v35); /*0x464e73*/
  LOBYTE(v36) = this->LaserFencePost; /*0x464e78*/
  v37 = Power::FlagProcess((Power *)v54, v36); /*0x464e81*/
  LOBYTE(v37) = this->LaserFence; /*0x464e86*/
  Power::FlagProcess((Power *)v54, v37); /*0x464e8f*/
  LOBYTE(v38) = this->FirestormWall; /*0x464e94*/
  Power::FlagProcess((Power *)v54, v38); /*0x464e9d*/
  LOBYTE(v39) = this->Helipad; /*0x464ea2*/
  v40 = Power::FlagProcess((Power *)v54, v39); /*0x464eab*/
  LOBYTE(v40) = this->OrePurifier; /*0x464eb0*/
  Power::FlagProcess((Power *)v54, v40); /*0x464eb9*/
  LOBYTE(v41) = this->ExtraDamageStage; /*0x464ebe*/
  Power::FlagProcess((Power *)v54, v41); /*0x464ec7*/
  LOBYTE(v42) = this->Hospital; /*0x464ecc*/
  v43 = Power::FlagProcess((Power *)v54, v42); /*0x464ed5*/
  LOBYTE(v43) = this->Armory; /*0x464eda*/
  Power::FlagProcess((Power *)v54, v43); /*0x464ee3*/
  Power::TimerProcess(this->GateStages); /*0x464ef1*/
  v44 = Power::TimerProcess(this->PowersUpToLevel); /*0x464eff*/
  LOBYTE(v44) = this->DamagedDoor; /*0x464f04*/
  Power::FlagProcess((Power *)v54, v44); /*0x464f0d*/
  LOBYTE(v45) = this->InvisibleInGame; /*0x464f12*/
  Power::FlagProcess((Power *)v54, v45); /*0x464f1b*/
  LOBYTE(v46) = this->TerrainPalette; /*0x464f20*/
  v47 = Power::FlagProcess((Power *)v54, v46); /*0x464f29*/
  LOBYTE(v47) = this->TurretAnimIsVoxel; /*0x464f2e*/
  Power::FlagProcess((Power *)v54, v47); /*0x464f37*/
  LOBYTE(v48) = this->BarrelAnimIsVoxel; /*0x464f3c*/
  Power::FlagProcess((Power *)v54, v48); /*0x464f45*/
  Checksum::AddString((Checksum *)v54, (unsigned __int8 *)this->__pad_1714); /*0x464f53*/
  Checksummer::Add_double(v54, *(_DWORD *)&this->__pad_1714[20], *(_DWORD *)&this->__pad_1714[24]); /*0x464f68*/
  Checksummer::Add_Buffer(v54, (unsigned __int8 *)&this->__pad_1714[28], 12); /*0x464f78*/
  Checksummer::Add_Buffer(v54, (unsigned __int8 *)&this->__pad_1714[40], 12); /*0x464f88*/
  Checksummer::Add_Buffer(v54, (unsigned __int8 *)&this->__pad_1714[52], 12); /*0x464f98*/
  v49 = Checksummer::Add_Buffer(v54, (unsigned __int8 *)&this->__pad_1714[64], 12); /*0x464fa8*/
  LOBYTE(v49) = this->__pad_1714[83]; /*0x464fad*/
  Power::FlagProcess((Power *)v54, v49); /*0x464fb6*/
  LOBYTE(v50) = this->__pad_1714[84]; /*0x464fbb*/
  Power::FlagProcess((Power *)v54, v50); /*0x464fc4*/
  LOBYTE(v51) = this->__pad_1714[85]; /*0x464fc9*/
  Power::FlagProcess((Power *)v54, v51); /*0x464fd2*/
  Power::TimerProcess(*(_DWORD *)&this->__pad_1714[108]); /*0x464fe0*/
  Power::TimerProcess(this->BarrelStartPitch); /*0x464fee*/
  LOBYTE(v52) = this->ConcentricRadialIndicator; /*0x464ff3*/
  return Power::FlagProcess((Power *)v54, v52); /*0x465001*/
}



// ==== 0x00465010  BuildingTypeClass::SaveLoad_Prefix  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::SaveLoad_Prefix(BuildingTypeClass *this)
{
  TechnoTypeClass *v1; // esi
  int v2; // edi
  int result; // eax
  char *v4; // ecx
  int v5; // ebp
  int v6; // eax
  _DWORD *v7; // edx
  TechnoTypeClass *v8; // eax
  int SpeedType; // eax
  int v10; // [esp+28h] [ebp-Ch] BYREF
  int v11; // [esp+2Ch] [ebp-8h]
  int v12; // [esp+30h] [ebp-4h]
  TechnoTypeClass *v13; // [esp+38h] [ebp+4h] BYREF
  int v14; // [esp+3Ch] [ebp+8h] BYREF

  v1 = v13; /*0x465016*/
  if ( v13[1].Weapon[210] && v13[1].vtable2 ) /*0x465025*/
  {
    __3_YAXPAX_Z((void *)v13[1].vtable2); /*0x465030*/
    v1[1].vtable2 = 0; /*0x465038*/
    LOBYTE(v1[1].vtable3) = 0; /*0x46503e*/
  }
  if ( v1[1].CanBeHidden[0] && v1[1].TurretOffset ) /*0x46504c*/
  {
    __3_YAXPAX_Z((void *)v1[1].TurretOffset); /*0x465057*/
    v1[1].TurretOffset = 0; /*0x46505f*/
    v1[1].CanBeHidden[0] = 0; /*0x465065*/
  }
  if ( LOBYTE(v1[1].Cameo) && *(_DWORD *)&v1[1].CameoFile[22] ) /*0x465073*/
  {
    __3_YAXPAX_Z(*(void **)&v1[1].CameoFile[22]); /*0x46507e*/
    *(_DWORD *)&v1[1].CameoFile[22] = 0; /*0x465086*/
    LOBYTE(v1[1].Cameo) = 0; /*0x46508c*/
  }
  if ( v1[1].AltCameoFile[3] && *(_DWORD *)v1[1].CameoAllocated ) /*0x46509a*/
  {
    __3_YAXPAX_Z(*(void **)v1[1].CameoAllocated); /*0x4650a5*/
    *(_DWORD *)v1[1].CameoAllocated = 0; /*0x4650ad*/
    v1[1].AltCameoFile[3] = 0; /*0x4650b3*/
  }
  if ( v1[1].AltCameoFile[11] && *(_DWORD *)&v1[1].AltCameoFile[7] ) /*0x4650c1*/
  {
    __3_YAXPAX_Z(*(void **)&v1[1].AltCameoFile[7]); /*0x4650cc*/
    *(_DWORD *)&v1[1].AltCameoFile[7] = 0; /*0x4650d4*/
    v1[1].AltCameoFile[11] = 0; /*0x4650da*/
  }
  if ( v1[1].AltCameoFile[19] && *(_DWORD *)&v1[1].AltCameoFile[15] ) /*0x4650e8*/
  {
    __3_YAXPAX_Z(*(void **)&v1[1].AltCameoFile[15]); /*0x4650f3*/
    *(_DWORD *)&v1[1].AltCameoFile[15] = 0; /*0x4650fb*/
    v1[1].AltCameoFile[19] = 0; /*0x465101*/
  }
  if ( LOBYTE(v1[1].AltCameo) && *(_DWORD *)&v1[1].AltCameoFile[23] ) /*0x46510f*/
  {
    __3_YAXPAX_Z(*(void **)&v1[1].AltCameoFile[23]); /*0x46511a*/
    *(_DWORD *)&v1[1].AltCameoFile[23] = 0; /*0x465122*/
    LOBYTE(v1[1].AltCameo) = 0; /*0x465128*/
  }
  v2 = v14; /*0x46512e*/
  result = TechnoTypeClass::SaveLoad_Prefix(v1, v14); /*0x465134*/
  if ( result >= 0 ) /*0x46513b*/
  {
    if ( v1 ) /*0x465143*/
      BuildingTypeClass::loadBuildingProperty_b_545E520((BuildingTypeClass *)v1, (int)&v13); /*0x46514c*/
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &v14, 4, 0); /*0x46515c*/
    if ( result >= 0 ) /*0x465161*/
    {
      v4 = &v1[1].Weapon[244]; /*0x465167*/
      if ( v1 != (TechnoTypeClass *)-6020 ) /*0x46516f*/
      {
        *(_DWORD *)&v1[1].Weapon[248] = 0; /*0x465171*/
        *(_DWORD *)&v1[1].Weapon[252] = 0; /*0x465174*/
        v1[1].Weapon[256] = 1; /*0x465177*/
        v1[1].Weapon[257] = 0; /*0x46517b*/
        *(_DWORD *)v4 = &VectorClass<TPoint3D<int>>::`vftable'; /*0x46517e*/
      }
      (*(void (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v4 + 8))(v4, v14, 0); /*0x46518c*/
      v5 = 0; /*0x46518f*/
      if ( v14 <= 0 ) /*0x465195*/
      {
LABEL_32:
        BuildingTypeClass::LoadVoxel((BuildingTypeClass *)v1); /*0x4651ed*/
        ObjectTypeClass::Load2DArt((char *)v1); /*0x4651f6*/
        SpeedType = v1[1].ChargerTurrets[15]; /*0x4651fb*/
        v1[1].UIName = 0; /*0x465210*/
        SpeedType *= 120; /*0x465219*/
        v1[1].vtable1 = (int)&dword_89C900 + SpeedType; /*0x465228*/
        v1[1].ChargerTurrets[8] = (int)&dword_89D368 + SpeedType; /*0x46522e*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v1[1].UINameLabel[31]); /*0x465234*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)v1[1].ImageAllocated); /*0x465245*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v1[1].AlphaImage); /*0x465256*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v1[1].MainVoxel); /*0x465267*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v1[1].TurretVoxel); /*0x465278*/
        BuildingTypeClass::LoadVoxel((BuildingTypeClass *)v1); /*0x46527f*/
        v1[1].vtable2 = 0; /*0x465284*/
        LOBYTE(v1[1].vtable3) = 0; /*0x46528a*/
        v1[1].TurretOffset = 0; /*0x465290*/
        v1[1].CanBeHidden[0] = 0; /*0x465296*/
        *(_DWORD *)&v1[1].CameoFile[22] = 0; /*0x46529c*/
        LOBYTE(v1[1].Cameo) = 0; /*0x4652a2*/
        *(_DWORD *)v1[1].CameoAllocated = 0; /*0x4652a8*/
        v1[1].AltCameoFile[3] = 0; /*0x4652ae*/
        *(_DWORD *)&v1[1].AltCameoFile[7] = 0; /*0x4652b4*/
        v1[1].AltCameoFile[11] = 0; /*0x4652ba*/
        *(_DWORD *)&v1[1].AltCameoFile[15] = 0; /*0x4652c0*/
        v1[1].AltCameoFile[19] = 0; /*0x4652c6*/
        *(_DWORD *)&v1[1].AltCameoFile[23] = 0; /*0x4652cc*/
        LOBYTE(v1[1].AltCameo) = 0; /*0x4652d2*/
        BuildingTypeClass::LoadAnimations((int)v1, dword_A8B230[130].uniqueId); /*0x4652e6*/
        return 0; /*0x4652eb*/
      }
      else
      {
        v13 = 0; /*0x465197*/
        while ( 1 ) /*0x46519b*/
        {
          v6 = *(_DWORD *)v2; /*0x46519b*/
          v10 = 0; /*0x4651a6*/
          v11 = 0; /*0x4651aa*/
          v12 = 0; /*0x4651ae*/
          result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v6 + 12))(v2, &v10, 12, 0); /*0x4651b2*/
          if ( result < 0 ) /*0x4651b7*/
            break; /*0x4651b7*/
          v7 = (int *)((char *)&v13->vtable0 + *(_DWORD *)&v1[1].Weapon[248]); /*0x4651cb*/
          v8 = (TechnoTypeClass *)&v13->vtable3; /*0x4651cd*/
          ++v5; /*0x4651d0*/
          *v7 = v10; /*0x4651d1*/
          v13 = v8; /*0x4651d7*/
          v7[1] = v11; /*0x4651db*/
          v7[2] = v12; /*0x4651e2*/
          if ( v5 >= v14 ) /*0x4651eb*/
            goto LABEL_32; /*0x4651eb*/
        }
      }
    }
  }
  return result; /*0x4652ed*/
}



// ==== 0x00465300  BuildingTypeClass::SaveLoad_Prefix_0  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::SaveLoad_Prefix_0(BuildingTypeClass *this)
{
  int result; // eax
  int v2; // edx
  int v3; // ebp
  int i; // edi
  int v5; // [esp+4h] [ebp-10h]
  int v6; // [esp+8h] [ebp-Ch]
  TechnoTypeClass *v7; // [esp+18h] [ebp+4h]
  _DWORD *v8; // [esp+1Ch] [ebp+8h]
  int *v9; // [esp+20h] [ebp+Ch] BYREF

  result = TechnoTypeClass::SaveLoad_Prefix_0(v7, v8, v9, v5, v6); /*0x465313*/
  if ( result >= 0 ) /*0x46531a*/
  {
    v2 = *v8; /*0x465322*/
    v9 = *(int **)&v7[1].?[1424]; /*0x46532e*/
    result = (*(int (__stdcall **)(_DWORD *, int **, int, _DWORD))(v2 + 16))(v8, &v9, 4, 0); /*0x465332*/
    if ( result >= 0 ) /*0x465337*/
    {
      v3 = 0; /*0x46533d*/
      if ( (int)v9 <= 0 ) /*0x465341*/
      {
        return 0; /*0x465368*/
      }
      else
      {
        for ( i = 0; ; i += 12 ) /*0x465343*/
        {
          result = (*(int (__stdcall **)(_DWORD *, int, int, _DWORD))(*v8 + 16))( /*0x465355*/
                     v8,
                     i + *(_DWORD *)&v7[1].?[1420],
                     12,
                     0);
          if ( result < 0 ) /*0x46535a*/
            break; /*0x46535a*/
          if ( ++v3 >= (int)v9 ) /*0x465366*/
            return 0; /*0x465366*/
        }
      }
    }
  }
  return result; /*0x46536a*/
}



// ==== 0x00465380  BuildingTypeClass::GetClassIdentifier  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::GetClassIdentifier(BuildingTypeClass *this)
{
  _DWORD *v2; // [esp+8h] [ebp+8h]

  if ( !v2 ) /*0x465386*/
    return -2147467261; /*0x465388*/
  *v2 = -1366608933; /*0x465396*/
  v2[1] = 298976796; /*0x46539e*/
  v2[2] = 1610654892; /*0x4653a7*/
  v2[3] = unk_7E95CC; /*0x4653b0*/
  return 0; /*0x46538d*/
}



// ==== 0x004653C0  BuildingTypeClass::FindOrCreate  this=IUnknown  sig=csp ====
int __thiscall BuildingTypeClass::FindOrCreate(char *Source)
{
  int v2; // esi
  int v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x4653dc*/
    return 0; /*0x46543f*/
  v2 = 0; /*0x4653ed*/
  if ( dword_A83C78 <= 0 ) /*0x4653f1*/
  {
LABEL_6:
    v3 = __2_YAPAXI_Z(0x1798u); /*0x465416*/
    if ( v3 ) /*0x465425*/
      return BuildingTypeClass::ConstructFull(v3, Source); /*0x465431*/
    return 0; /*0x465425*/
  }
  while ( _strcmpi((char *)(*((_DWORD *)dword_A83C6C + v2) + 36), Source) ) /*0x46540a*/
  {
    if ( ++v2 >= dword_A83C78 ) /*0x465414*/
      goto LABEL_6; /*0x465414*/
  }
  return *((_DWORD *)dword_A83C6C + v2); /*0x46542f*/
}



// ==== 0x00465450  BulletTypeClass::ReadArmor  this=BulletTypeClass  sig=csp ====
int sub_465450()
{
  int v0; // edx
  int v1; // edi
  char *v2; // ecx
  _DWORD *v3; // esi
  int result; // eax
  int i; // edi
  int v6; // esi
  int v7; // eax
  char Destination[60]; // [esp+Ch] [ebp-3Ch] BYREF

  v0 = dword_A83C78; /*0x465450*/
  v1 = 0; /*0x46545e*/
  if ( dword_A83C78 > 0 ) /*0x465462*/
  {
    v2 = (char *)dword_A83C6C; /*0x465464*/
    do /*0x46547d*/
    {
      if ( v1 <= *(char *)(*(_DWORD *)v2 + 5895) ) /*0x465475*/
        v1 = *(char *)(*(_DWORD *)v2 + 5895); /*0x465477*/
      v2 += 4; /*0x465479*/
      --v0; /*0x46547c*/
    }
    while ( v0 ); /*0x46547d*/
    if ( v1 ) /*0x465481*/
    {
      if ( dword_89DDC0 ) /*0x46548b*/
        (**(void (__thiscall ***)(int, int))dword_89DDC0)(dword_89DDC0, 1); /*0x465491*/
      v3 = __2_YAPAXI_Z(0x20u); /*0x46549a*/
      if ( v3 ) /*0x4654a1*/
      {
        v3[3] = 0; /*0x4654a6*/
        v3[1] = v1 + 16; /*0x4654ab*/
        v3[2] = v1 + 16; /*0x4654b6*/
        *v3 = &XSurface_Vtable; /*0x4654b9*/
        v3[4] = 1; /*0x4654bf*/
        Buffer::Init(v3 + 5, 0, (v1 + 16) * (v1 + 16)); /*0x4654c6*/
        *v3 = &BSurface_Vtable; /*0x4654cb*/
        dword_89DDC0 = (int)v3; /*0x4654d1*/
      }
      else
      {
        dword_89DDC0 = 0; /*0x4654d9*/
      }
    }
  }
  result = dword_A83C78; /*0x4654df*/
  for ( i = 0; i < dword_A83C78; ++i ) /*0x4654e8*/
  {
    v6 = *((_DWORD *)dword_A83C6C + i); /*0x4654f7*/
    Destination[0] = 0; /*0x465500*/
    INIClass::GetString( /*0x46550e*/
      (unsigned __int8 ***)dword_887048,
      (unsigned __int8 *)(v6 + 36),
      (unsigned __int8 *)aTotile,
      0,
      Destination,
      60);
    v7 = Entity_Read(Destination); /*0x465517*/
    if ( v7 >= 0 && v7 < dword_A8ED38 ) /*0x465526*/
      *(_DWORD *)(v6 + 3672) = *((_DWORD *)dword_A8ED2C + v7); /*0x465531*/
    result = dword_A83C78; /*0x465537*/
  }
  return result; /*0x465541*/
}



// ==== 0x00465570  ObjectClass::CalculateBuildingFoundationBounds  this=ObjectClass  sig=csp ====
int *__thiscall CalculateBuildingFoundationBounds(ObjectClass *this, int *a2)
{
  __int16 *v3; // eax
  int v4; // esi
  int v5; // ebx
  int v6; // ebp
  int v7; // edi
  int *FoundationSize; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int *v14; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  void *v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // edi
  int v24; // ebx
  bool v25; // [esp+7h] [ebp-49h]
  signed int i; // [esp+8h] [ebp-48h]
  signed int j; // [esp+8h] [ebp-48h]
  signed int v29; // [esp+14h] [ebp-3Ch]
  signed int v30; // [esp+14h] [ebp-3Ch]
  int v31; // [esp+18h] [ebp-38h]
  int v32; // [esp+20h] [ebp-30h]
  int *v33; // [esp+20h] [ebp-30h]
  int v34; // [esp+24h] [ebp-2Ch]
  int v35; // [esp+28h] [ebp-28h]
  int *v36; // [esp+2Ch] [ebp-24h]
  int v37; // [esp+30h] [ebp-20h] BYREF
  int v38; // [esp+34h] [ebp-1Ch]
  int v39; // [esp+38h] [ebp-18h]
  int v40; // [esp+3Ch] [ebp-14h]
  int v41[4]; // [esp+40h] [ebp-10h] BYREF

  v36 = (int *)((char *)this + 5432); /*0x46558c*/
  if ( *((_DWORD *)this + 1358) == dword_89C8A0 /*0x4655b7*/
    && *((_DWORD *)this + 1359) == dword_89C8A4
    && *((_DWORD *)this + 1360) == dword_89C8A8
    && *((_DWORD *)this + 1361) == dword_89C8AC )
  {
    v3 = (__int16 *)(*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 39))(this); /*0x4655de*/
    if ( v3 ) /*0x4655ea*/
    {
      v4 = dword_89C8A8; /*0x465624*/
      v34 = v3[1]; /*0x46562a*/
      v5 = dword_89C8A4; /*0x465633*/
      v6 = dword_89C8AC; /*0x46563a*/
      v7 = dword_89C8A0; /*0x465641*/
      v29 = v3[3]; /*0x465649*/
      v35 = v3[2]; /*0x46564d*/
      for ( i = 0; i < v29; ++i ) /*0x465659*/
      {
        FoundationSize = Building::GetFoundationSize(&v37, i); /*0x465671*/
        if ( v4 <= 0 || v6 <= 0 ) /*0x46567c*/
        {
          v7 = *FoundationSize; /*0x4656e0*/
          v5 = FoundationSize[1]; /*0x4656e2*/
          v4 = FoundationSize[2]; /*0x4656e5*/
          v12 = FoundationSize[3]; /*0x4656e8*/
        }
        else
        {
          v9 = FoundationSize[2]; /*0x46567e*/
          if ( v9 > 0 ) /*0x465687*/
          {
            v32 = FoundationSize[3]; /*0x46568e*/
            if ( v32 > 0 ) /*0x465692*/
            {
              v10 = *FoundationSize; /*0x465694*/
              if ( v7 > *FoundationSize ) /*0x465698*/
              {
                v4 = v7 + v4 - v10; /*0x46569c*/
                v7 = *FoundationSize; /*0x46569e*/
              }
              v11 = FoundationSize[1]; /*0x4656a0*/
              if ( v5 > v11 ) /*0x4656a9*/
              {
                v6 += v5 - v11; /*0x4656ad*/
                v5 = v11; /*0x4656af*/
              }
              if ( v4 + v7 < v10 + v9 ) /*0x4656b9*/
                v4 = v10 - v7 + v9 + 1; /*0x4656c1*/
              if ( v5 + v6 < v11 + v32 ) /*0x4656d5*/
                v6 = v11 + v32 - v5 + 1; /*0x4656da*/
            }
          }
          v12 = v6; /*0x4656dc*/
        }
        v6 = v12; /*0x4656ef*/
      }
      v25 = *((_DWORD *)this + 896) == 0; /*0x465710*/
      v13 = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 48))(this); /*0x465715*/
      if ( v13 ) /*0x465721*/
      {
        v30 = *(__int16 *)(v13 + 6); /*0x46572d*/
        for ( j = 0; j < v30; ++j ) /*0x465739*/
        {
          v14 = Building::GetFoundationSize(&v37, j); /*0x465751*/
          if ( v4 <= 0 || v6 <= 0 ) /*0x46575c*/
          {
            v7 = *v14; /*0x4657c0*/
            v5 = v14[1]; /*0x4657c2*/
            v4 = v14[2]; /*0x4657c5*/
            v18 = v14[3]; /*0x4657c8*/
          }
          else
          {
            v15 = v14[2]; /*0x46575e*/
            if ( v15 > 0 ) /*0x465767*/
            {
              v31 = v14[3]; /*0x46576e*/
              if ( v31 > 0 ) /*0x465772*/
              {
                v16 = *v14; /*0x465774*/
                if ( v7 > *v14 ) /*0x465778*/
                {
                  v4 = v7 + v4 - v16; /*0x46577c*/
                  v7 = *v14; /*0x46577e*/
                }
                v17 = v14[1]; /*0x465780*/
                if ( v5 > v17 ) /*0x465789*/
                {
                  v6 += v5 - v17; /*0x46578d*/
                  v5 = v17; /*0x46578f*/
                }
                if ( v4 + v7 < v16 + v15 ) /*0x465799*/
                  v4 = v16 - v7 + v15 + 1; /*0x4657a1*/
                if ( v5 + v6 < v17 + v31 ) /*0x4657b5*/
                  v6 = v17 + v31 - v5 + 1; /*0x4657ba*/
              }
            }
            v18 = v6; /*0x4657bc*/
          }
          v6 = v18; /*0x4657cf*/
        }
        if ( v25 ) /*0x4657e8*/
        {
          if ( *((_BYTE *)this + 5986) ) /*0x4657ee*/
          {
            v19 = (void *)*((_DWORD *)this + 896); /*0x4657f8*/
            if ( v19 ) /*0x465800*/
            {
              __3_YAXPAX_Z(v19); /*0x465803*/
              *((_DWORD *)this + 896) = 0; /*0x46580f*/
              *((_BYTE *)this + 3588) = 0; /*0x465819*/
            }
          }
        }
      }
      if ( *((_DWORD *)this + 1350) ) /*0x465824*/
      {
        v33 = Building::GetFoundationSize(v41, 0); /*0x46583e*/
        v20 = *v33; /*0x465842*/
        v38 = v33[1]; /*0x465849*/
        v21 = v33[2]; /*0x46584d*/
        v39 = v21; /*0x465850*/
        v22 = v33[3]; /*0x465854*/
        v40 = v22; /*0x465857*/
        if ( v4 <= 0 || v6 <= 0 ) /*0x46585f*/
        {
          v7 = *v33; /*0x4658b6*/
          v5 = v33[1]; /*0x4658b8*/
          v4 = v33[2]; /*0x4658bb*/
          v6 = v33[3]; /*0x4658be*/
        }
        else if ( v21 > 0 && v22 > 0 ) /*0x465867*/
        {
          if ( v7 > v20 ) /*0x46586b*/
          {
            v4 = v7 + v4 - v20; /*0x46586f*/
            v7 = v20; /*0x465871*/
          }
          if ( v5 > v38 ) /*0x465879*/
          {
            v6 += v5 - v38; /*0x46587d*/
            v5 = v38; /*0x46587f*/
          }
          if ( v4 + v7 < v20 + v21 ) /*0x465888*/
            v4 = v20 - v7 + v39 + 1; /*0x465890*/
          if ( v5 + v6 < v38 + v40 ) /*0x4658a4*/
            v6 = v38 - v5 + v40 + 1; /*0x4658ac*/
        }
      }
      v23 = v7 - v34 / 2; /*0x4658ca*/
      v24 = v5 - v35 / 2; /*0x4658d5*/
      *v36 = v23; /*0x4658db*/
      v36[1] = v24; /*0x4658dd*/
      v36[2] = v4; /*0x4658e0*/
      v36[3] = v6; /*0x4658e3*/
      *a2 = v23; /*0x4658ec*/
      a2[1] = v24; /*0x4658ef*/
      a2[2] = v4; /*0x4658f2*/
      a2[3] = v6; /*0x4658f5*/
      return a2; /*0x4658e6*/
    }
    else
    {
      *a2 = dword_89C8A0; /*0x4655f9*/
      a2[1] = dword_89C8A4; /*0x465601*/
      a2[2] = dword_89C8A8; /*0x46560a*/
      a2[3] = dword_89C8AC; /*0x465613*/
      return a2; /*0x4655ec*/
    }
  }
  else
  {
    *a2 = *((_DWORD *)this + 1358); /*0x4655c1*/
    a2[1] = *((_DWORD *)this + 1359); /*0x4655c6*/
    a2[2] = *((_DWORD *)this + 1360); /*0x4655cc*/
    a2[3] = *((_DWORD *)this + 1361); /*0x4655d3*/
    return a2; /*0x4655b9*/
  }
}



// ==== 0x00465910  AbstractClass::releaseRef  this=AbstractClass  sig=csp ====
char AbstractClass::releaseRef(AbstractClass *this)
{
  return 0; /*0x465912*/
}



// ==== 0x00465920  AbstractClass::finalRelease  this=AbstractClass  sig=csp ====
char AbstractClass::finalRelease(AbstractClass *this)
{
  return 0; /*0x465922*/
}



// ==== 0x00465960  AbstractClass::LoadTheaterSHP  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::LoadTheaterSHP(AbstractClass *this)
{
  int result; // eax
  __int16 *v3; // edi
  int v4; // ecx
  int v5; // edi
  int v6; // eax
  int v7; // [esp+4h] [ebp-1E0h]
  CCFileClass v8; // [esp+8h] [ebp-1DCh] BYREF
  int v9[3]; // [esp+60h] [ebp-184h] BYREF
  int v10; // [esp+6Ch] [ebp-178h]
  CCFileClass v11; // [esp+74h] [ebp-170h] BYREF
  int v12[3]; // [esp+CCh] [ebp-118h] BYREF
  int v13; // [esp+D8h] [ebp-10Ch]
  char Buffer[260]; // [esp+E0h] [ebp-104h] BYREF

  result = *((_DWORD *)this + 896); /*0x465969*/
  if ( !result && *((_BYTE *)this + 5985) ) /*0x465977*/
  {
    if ( strlen((const char *)this + 3676) ) /*0x46598e*/
    {
      _makepath(Buffer, 0, 0, (const char *)this + 3676, Ext); /*0x4659ac*/
      TheaterObjectTypeClassSpecificID(Buffer, dword_A8B230[130].uniqueId); /*0x4659c7*/
      CCFileClass::Construct(&v11, Buffer); /*0x4659d8*/
      v3 = (__int16 *)CCFileClass::ReadEntireFile(&v11); /*0x4659e6*/
      if ( !v3 ) /*0x4659ea*/
      {
        ObjectTypeClass::SetRTTI71((ObjectTypeClass *)Buffer); /*0x4659f3*/
        CCFileClass::Construct(&v8, Buffer); /*0x465a04*/
        v3 = (__int16 *)CCFileClass::ReadEntireFile(&v8); /*0x465a16*/
        *(_DWORD *)v8.CDFileClass = &CCFileClass::`vftable'; /*0x465a18*/
        v10 = 0; /*0x465a20*/
        Vector::Clear((int)v9); /*0x465a28*/
        *(_DWORD *)v8.CDFileClass = &off_7E1668; /*0x465a31*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v8); /*0x465a39*/
      }
      *((_DWORD *)this + 896) = v3; /*0x465a40*/
      if ( v3 ) /*0x465a46*/
      {
        v4 = 1; /*0x465a48*/
        *((_BYTE *)this + 3588) = 1; /*0x465a4d*/
        v5 = v3[3] / 2; /*0x465a62*/
        v7 = v5; /*0x465a66*/
        if ( *((_BYTE *)this + 5815) ) /*0x465a5c*/
        {
          v5 = *((_DWORD *)this + 1470) + 1; /*0x465a72*/
          v7 = v5; /*0x465a73*/
        }
        if ( v5 > 0 ) /*0x465a79*/
        {
          LOWORD(v6) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5400) * 900.0 / (double)v7); /*0x465a91*/
          v4 = v6; /*0x465a96*/
        }
        *((_DWORD *)this + 961) = 0; /*0x465a98*/
        *((_DWORD *)this + 962) = v5; /*0x465aa2*/
        *((_DWORD *)this + 963) = v4; /*0x465aa8*/
      }
      *(_DWORD *)v11.CDFileClass = &CCFileClass::`vftable'; /*0x465ab5*/
      v13 = 0; /*0x465abd*/
      Vector::Clear((int)v12); /*0x465ac8*/
      *(_DWORD *)v11.CDFileClass = &off_7E1668; /*0x465ad1*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v11); /*0x465ad9*/
    }
    return *((_DWORD *)this + 896); /*0x465ade*/
  }
  return result; /*0x465ae5*/
}



// ==== 0x00465AF0  BuildingTypeClass::IsPowered  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::IsPowered(BuildingTypeClass *this)
{
  int result; // eax

  LOBYTE(result) = this->__pad_1714[78]; /*0x465af3*/
  if ( (_BYTE)result ) /*0x465afb*/
  {
    result = this->Buildup[0]; /*0x465afd*/
    if ( result ) /*0x465b05*/
    {
      __3_YAXPAX_Z((void *)this->Buildup[0]); /*0x465b08*/
      this->Buildup[0] = 0; /*0x465b10*/
      this->BuildupLoaded = 0; /*0x465b1a*/
    }
  }
  return result; /*0x465b21*/
}



// ==== 0x00465CB0  ObjectClass::nullsub_7  this=ObjectClass  sig=csp ====
void nullsub_7(ObjectClass *this)
{
  ; /*0x465cb0*/
}



// ==== 0x00465CC0  BulletTypeClass::ReadTrailerAnim  this=BulletTypeClass  sig=csp ====
int BulletTypeClass::ReadTrailerAnim(BulletTypeClass *this)
{
  int result; // eax
  int i; // edi
  int v3; // esi
  int v4; // eax
  char Destination[60]; // [esp+4h] [ebp-3Ch] BYREF

  result = dword_A83C78; /*0x465cc0*/
  for ( i = 0; i < dword_A83C78; ++i ) /*0x465ccd*/
  {
    v3 = *((_DWORD *)dword_A83C6C + i); /*0x465cdc*/
    Destination[0] = 0; /*0x465cef*/
    INIClass::GetString( /*0x465cf5*/
      *(INIClass **)&DSurface_ViewBounds.__pad_34[116],
      (unsigned __int8 *)(v3 + 36),
      aTotile,
      0,
      Destination,
      60);
    v4 = Entity_Read((ObjectClass *)Destination); /*0x465cfe*/
    if ( v4 >= 0 && v4 < *(int *)&stru_A8EB00.?[340] ) /*0x465d0d*/
      *(_DWORD *)(v3 + 3672) = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v4); /*0x465d18*/
    result = dword_A83C78; /*0x465d1e*/
  }
  return result; /*0x465d29*/
}



// ==== 0x00465D30  ReturnFalse_465D30  this=-  sig=ida-proto ====
char ReturnFalse_465D30()
{
  return 0; /*0x465d32*/
}



// ==== 0x00465D40  BuildingClass::Is1x1AndUndeployable_BuildingMassSelectable  this=TOP  sig=csp ====
bool __thiscall BuildingClass::Is1x1AndUndeployable_BuildingMassSelectable(BuildingClass *this)
{
  int v1; // eax
  bool result; // al

  result = 0; /*0x465d68*/
  if ( this->?[4] ) /*0x465d40*/
  {
    v1 = this->u32_EF0; /*0x465d55*/
    if ( stru_81926C.Type[v1] == 1 && dword_819310[v1] == 1 ) /*0x465d66*/
      return 1; /*0x465d48*/
  }
  return result; /*0x465d6a*/
}



// ==== 0x00465D70  BuildingClass::processPowerState  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::processPowerState(BuildingClass *this)
{
  return this->q3B7; /*0x465d76*/
}



// ==== 0x00465D80  ObjectClass::??0Iostream_init_QAE_XZ_2  this=ObjectClass  sig=csp ====
Iostream_init *__thiscall __0Iostream_init_QAE_XZ_2(Iostream_init *this)
{
  return this; /*0x465d82*/
}



// ==== 0x00465D90  BuildingTypeClass::GetTypeIdentifier  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::GetTypeIdentifier(BuildingTypeClass *this)
{
  return 7; /*0x465d95*/
}



// ==== 0x00465DA0  BuildingTypeClass::GetObjectSize  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::GetObjectSize(BuildingTypeClass *this)
{
  return 6040; /*0x465da5*/
}



// ==== 0x00465DB0  BuildingTypeClass::GetAuxField  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::GetAuxField(BuildingTypeClass *this)
{
  return this->ArrayIndex; /*0x465db6*/
}



// ==== 0x00465DC0  BuildingTypeClass::ddtor  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::ddtor(BuildingTypeClass *this)
{
  char v3; // [esp+8h] [ebp+4h]

  BuildingTypeClass::CleanupMembers(this); /*0x465dc3*/
  if ( (v3 & 1) != 0 ) /*0x465dcd*/
    __3_YAXPAX_Z(this); /*0x465dd0*/
  return (int)this; /*0x465dda*/
}



// ==== 0x00465DE0  _VectorClass_V_TPoint3D_H::Clear  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_TPoint3D_int::Clear(_VectorClass_V_TPoint3D_H *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // edx

  v3 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 12 * a3); /*0x465deb*/
  *a2 = *v3; /*0x465df6*/
  a2[1] = v3[1]; /*0x465dfb*/
  a2[2] = v3[2]; /*0x465e02*/
  return a2; /*0x465dfe*/
}



// ==== 0x00465E10  _VectorClass_V_TPoint3D_H::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_TPoint3D_int::AddRef(_VectorClass_V_TPoint3D_H *this, int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  m_8 = this->m_8; /*0x465e1b*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x465e20*/
  {
    v3 = 0; /*0x465e22*/
    if ( m_8 <= 0 ) /*0x465e26*/
      return 1; /*0x465e60*/
    v4 = *(_DWORD *)(a2 + 4); /*0x465e28*/
    v5 = *(_DWORD **)&this->m_1[3]; /*0x465e2b*/
    v6 = (_DWORD *)(v4 + 8); /*0x465e2e*/
    v7 = v4 - (_DWORD)v5; /*0x465e31*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *(v6 - 1) && v5[2] == *v6 ) /*0x465e4d*/
    {
      ++v3; /*0x465e4f*/
      v6 += 3; /*0x465e50*/
      v5 += 3; /*0x465e53*/
      if ( v3 >= m_8 ) /*0x465e58*/
        return 1; /*0x465e58*/
    }
  }
  return 0; /*0x465e5a*/
}



// ==== 0x00465E70  _VectorClass_V_TPoint3D_H::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_TPoint3D_int::Release(_VectorClass_V_TPoint3D_H *this, int a2, char *a3)
{
  int v3; // ebx
  char *v5; // ebp
  int v6; // eax
  char *v7; // edi
  int m_8; // ecx
  int v10; // eax
  char *v11; // ebx
  _DWORD *v12; // edx

  v3 = a2; /*0x465e72*/
  if ( a2 ) /*0x465e7d*/
  {
    v5 = a3; /*0x465e83*/
    LOBYTE(this->m_C) = 0; /*0x465e87*/
    if ( a3 ) /*0x465e8d*/
    {
      v7 = a3; /*0x465eb4*/
    }
    else
    {
      v6 = __2_YAPAXI_Z(12 * a2); /*0x465e96*/
      if ( v6 ) /*0x465ea0*/
        v7 = (char *)v6; /*0x465ea5*/
      else
        v7 = 0; /*0x465ead*/
    }
    LOBYTE(this->m_C) = 1; /*0x465ebc*/
    if ( v7 ) /*0x465ec0*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x465ecc*/
      {
        m_8 = this->m_8; /*0x465ed3*/
        if ( a2 < m_8 ) /*0x465ed8*/
          m_8 = a2; /*0x465eda*/
        if ( m_8 > 0 ) /*0x465ede*/
        {
          v10 = 0; /*0x465ee0*/
          do /*0x465efe*/
          {
            v11 = &v7[v10]; /*0x465ee5*/
            v12 = (_DWORD *)(v10 + *(_DWORD *)&this->m_1[3]); /*0x465ee8*/
            v10 += 12; /*0x465eea*/
            --m_8; /*0x465eed*/
            *(_DWORD *)v11 = *v12; /*0x465ef0*/
            *((_DWORD *)v11 + 1) = v12[1]; /*0x465ef5*/
            *((_DWORD *)v11 + 2) = v12[2]; /*0x465efb*/
          }
          while ( m_8 ); /*0x465efe*/
          v5 = a3; /*0x465f00*/
          v3 = a2; /*0x465f04*/
        }
        if ( BYTE1(this->m_C) ) /*0x465f08*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x465f13*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x465f1b*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v7; /*0x465f24*/
      this->m_8 = v3; /*0x465f2c*/
      BYTE1(this->m_C) = v5 == 0; /*0x465f2f*/
      return 1; /*0x465f35*/
    }
    else
    {
      return 0; /*0x465ec5*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_V_TPoint3D_H *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x465f40*/
    return 1; /*0x465f46*/
  }
}



// ==== 0x00465F50  _VectorClass_V_TPoint3D_H::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_TPoint3D_int::ddtor(_VectorClass_V_TPoint3D_H *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x465f5d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x465f63*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x465f6b*/
  }
  BYTE1(this->m_C) = 0; /*0x465f6e*/
  this->m_8 = 0; /*0x465f71*/
}



// ==== 0x00465F80  _VectorClass_V_TPoint3D_H::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_TPoint3D_int::GetSize(_VectorClass_V_TPoint3D_H *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x465f80*/
    return 0; /*0x465f8e*/
  m_8 = this->m_8; /*0x465f94*/
  result = 0; /*0x465f97*/
  if ( m_8 <= 0 ) /*0x465f9b*/
    return -1; /*0x465fc6*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 ) /*0x465fa1*/
  {
    if ( ++result >= m_8 ) /*0x465fc4*/
      return -1; /*0x465fc4*/
  }
  return result; /*0x465f8b*/
}



// ==== 0x00465FD0  _VectorClass_V_TPoint3D_H::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_TPoint3D_int::GetCapacity(_VectorClass_V_TPoint3D_H *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x465fd0*/
    return (a2 - *(_DWORD *)&this->m_1[3]) / 0xCu; /*0x465fee*/
  else
    return 0; /*0x465fd7*/
}



// ==== 0x00466000  BuildingClass::Create  this=BuildingClass  sig=ida-proto ====
int __fastcall sub_466000(char *Source, int a2)
{
  int v4; // esi
  void *v5; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x46601f*/
    return 0; /*0x46607c*/
  v4 = 0; /*0x46602e*/
  if ( *(int *)(a2 + 16) <= 0 ) /*0x466032*/
  {
LABEL_6:
    v5 = __2_YAPAXI_Z(0x1798u); /*0x466053*/
    if ( v5 ) /*0x466062*/
      return BuildingTypeClass::ConstructFull((int)v5, Source); /*0x46606f*/
    return 0; /*0x466062*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v4) + 36), Source) ) /*0x466049*/
  {
    if ( ++v4 >= *(_DWORD *)(a2 + 16) ) /*0x466051*/
      goto LABEL_6; /*0x466051*/
  }
  return *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v4); /*0x46606c*/
}



// ==== 0x00466080  _VectorClass_V_TPoint3D_H::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_TPoint3D_int::QueryInterface(_VectorClass_V_TPoint3D_H *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x466083*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TPoint3D<int>>::`vftable'; /*0x466086*/
  if ( v3 && BYTE1(this->m_C) ) /*0x466090*/
  {
    __3_YAXPAX_Z(v3); /*0x466098*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4660a0*/
  }
  BYTE1(this->m_C) = 0; /*0x4660ab*/
  this->m_8 = 0; /*0x4660b1*/
  if ( (a2 & 1) != 0 ) /*0x4660b8*/
    __3_YAXPAX_Z(this); /*0x4660bb*/
  return this->__pad_0; /*0x4660c5*/
}



// ==== 0x004660D0  sub_4660D0  this=-  sig=ida-proto ====
void sub_4660D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4660dc*/
  dbl_89DDF8 = Math::Sqrt(v0 + v0); /*0x4660ee*/
}



// ==== 0x00466100  sub_466100  this=-  sig=ida-proto ====
void sub_466100()
{
  dbl_89DE68 = dbl_89DDF8 / 60.0; /*0x46610c*/
}



// ==== 0x00466120  sub_466120  this=-  sig=ida-proto ====
void sub_466120()
{
  dbl_89DE50 = 1.0 / dbl_89DE68; /*0x46612c*/
}



// ==== 0x00466140  sub_466140  this=-  sig=ida-proto ====
void sub_466140()
{
  dbl_89DE48 = 0.0174532925199433 * 45.0; /*0x46614c*/
}



// ==== 0x00466160  sub_466160  this=-  sig=ida-proto ====
void sub_466160()
{
  dbl_89DE00 = 0.0174532925199433 * 60.0; /*0x46616c*/
}



// ==== 0x00466180  sub_466180  this=-  sig=ida-proto ====
void sub_466180()
{
  dbl_89DDD8 = 0.0174532925199433 * 90.0; /*0x46618c*/
}



// ==== 0x004661A0  sub_4661A0  this=-  sig=ida-proto ====
__int64 sub_4661A0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89DDD8 - dbl_89DE00); /*0x4661b2*/
  result = Math::RoundToInt(v0 * dbl_89DDF8 * 0.5); /*0x4661c6*/
  dword_89DE70 = result; /*0x4661cb*/
  return result; /*0x4661d0*/
}



// ==== 0x004661E0  sub_4661E0  this=-  sig=ida-proto ====
void sub_4661E0()
{
  dbl_89DE08 = Math::ArcTan((double)dword_89DE70 * 0.00390625); /*0x4661f7*/
}



// ==== 0x00466210  sub_466210  this=-  sig=ida-proto ====
void sub_466210()
{
  dbl_89DE40 = Math::ArcTan((double)(2 * dword_89DE70) / dbl_89DDF8); /*0x466232*/
}



// ==== 0x00466240  sub_466240  this=-  sig=ida-proto ====
__int64 sub_466240()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89DE70) + 0.5); /*0x46625b*/
  dword_89DE64 = result; /*0x466260*/
  return result; /*0x466266*/
}



// ==== 0x00466270  sub_466270  this=-  sig=ida-proto ====
int sub_466270()
{
  dword_89DDF0 = 0; /*0x466272*/
  return 0; /*0x46627e*/
}



// ==== 0x00466280  sub_466280  this=-  sig=ida-proto ====
int sub_466280()
{
  dword_89DE30 = 0; /*0x466282*/
  qword_89DE34 = 0; /*0x466287*/
  return 0; /*0x466291*/
}



// ==== 0x004662A0  sub_4662A0  this=-  sig=ida-proto ====
int sub_4662A0()
{
  dword_89DE60 = 0; /*0x4662a5*/
  dword_89DE58 = 128; /*0x4662af*/
  dword_89DE5C = 128; /*0x4662b4*/
  return 128; /*0x4662b9*/
}



// ==== 0x004662C0  sub_4662C0  this=-  sig=ida-proto ====
int sub_4662C0()
{
  dword_89DDE0 = 0; /*0x4662c2*/
  dword_89DDE4 = 0; /*0x4662c7*/
  dword_89DDE8 = 0; /*0x4662cc*/
  dword_89DDEC = 0; /*0x4662d1*/
  return 0; /*0x4662d6*/
}



// ==== 0x004662E0  sub_4662E0  this=-  sig=ida-proto ====
int sub_4662E0()
{
  dword_89DE1C = 0; /*0x4662e7*/
  dword_89DE20 = 0; /*0x4662ec*/
  byte_89DE24 = 1; /*0x4662f1*/
  byte_89DE25 = 0; /*0x4662f8*/
  dword_89DE18 = (int)&off_7E4678; /*0x4662fd*/
  dword_89DE2C = 10; /*0x466307*/
  dword_89DE28 = 0; /*0x466311*/
  return atexit(sub_466320); /*0x46631c*/
}



// ==== 0x00466320  sub_466320  this=-  sig=ida-proto ====
void __cdecl sub_466320()
{
  if ( (byte_89DDD0 & 1) == 0 ) /*0x46632a*/
  {
    dword_89DE18 = (int)&VectorClass<BulletClass *>::`vftable'; /*0x46632e*/
    byte_89DDD0 |= 1u; /*0x466341*/
    if ( dword_89DE1C ) /*0x466347*/
    {
      if ( byte_89DE25 ) /*0x466351*/
      {
        __3_YAXPAX_Z(dword_89DE1C); /*0x466354*/
        dword_89DE1C = 0; /*0x46635c*/
      }
    }
    byte_89DE25 = 0; /*0x466366*/
    dword_89DE20 = 0; /*0x46636d*/
  }
}



// ==== 0x00466380  BulletClass::BulletClass  this=BulletClass  sig=csp ====
int __thiscall BulletClass::BulletClass(BulletClass *this)
{
  int v2; // eax

  ObjectClass::ctor((ObjectClass *)this); /*0x466384*/
  this->BulletClass_field_0xAC = 0; /*0x466391*/
  this->BulletClass_field_0xB0 = 0; /*0x466397*/
  this->__pad_B4[0] = 0; /*0x46639d*/
  BulletClass::ResetDetonationTimer((BulletClass *)&this->__pad_B4[4]); /*0x4663a3*/
  *(_DWORD *)&this->__pad_110[16] = 0; /*0x4663aa*/
  this->__pad_B4[80] = 1; /*0x4663b0*/
  this->__pad_B4[81] = 1; /*0x4663b6*/
  this->__pad_B4[44] = 0; /*0x4663bf*/
  *(_DWORD *)&this->__pad_B4[76] = 0; /*0x4663c5*/
  *(_DWORD *)&this->__pad_B4[84] = 0; /*0x4663cb*/
  this->BulletClass_field_0x10C = 0; /*0x4663d1*/
  *(_DWORD *)this->__pad_110 = 0; /*0x4663d7*/
  *(_DWORD *)&this->__pad_110[4] = -1; /*0x4663dd*/
  *(_DWORD *)&this->__pad_110[8] = 0; /*0x4663e3*/
  *(_DWORD *)&this->__pad_110[20] = 0; /*0x4663e9*/
  *(_DWORD *)&this->__pad_110[24] = 0; /*0x4663ef*/
  this->__pad_110[28] = 0; /*0x4663f5*/
  this->__pad_110[29] = 0; /*0x4663fb*/
  this->BulletClass_field_0x130 = 0; /*0x466401*/
  *(_WORD *)&this->__pad_144[8] = -1; /*0x466407*/
  *(_WORD *)&this->__pad_144[10] = -1; /*0x46640e*/
  this->BulletClass_field_0x154 = 0; /*0x466419*/
  this->__pad_158[0] = 0; /*0x46641f*/
  *(_DWORD *)this->__pad_0 = &BulletClass::`vftable'; /*0x466425*/
  this->BulletClass_field_0x4 = &BulletClass::`vftable'; /*0x46642b*/
  this->BulletClass_field_0x8 = &BulletClass::`vftable'; /*0x466431*/
  *(_DWORD *)this->__pad_C = &BulletClass::`vftable'; /*0x466438*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->BulletClass_field_0x4); /*0x46643f*/
  *(_DWORD *)this->__pad_134 = 0; /*0x466444*/
  *(_DWORD *)&this->__pad_134[4] = 0; /*0x46644a*/
  *(_DWORD *)&this->__pad_134[8] = 0; /*0x466450*/
  this->BulletClass_field_0x140 = 0; /*0x466456*/
  *(_DWORD *)this->__pad_144 = 0; /*0x46645c*/
  *(_DWORD *)&this->__pad_144[4] = 0; /*0x466462*/
  if ( *(int *)&stru_A8EB00.?[364] < *(int *)&stru_A8EB00.?[356] /*0x46649b*/
    || (stru_A8EB00.?[361] || !*(_DWORD *)&stru_A8EB00.?[356])
    && *(int *)&stru_A8EB00.?[368] > 0
    && (*(unsigned __int8 (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)&stru_A8EB00.?[348] + 8))(
         &stru_A8EB00.?[348],
         *(_DWORD *)&stru_A8EB00.?[356] + *(_DWORD *)&stru_A8EB00.?[368],
         0) )
  {
    v2 = (*(_DWORD *)&stru_A8EB00.?[364])++; /*0x4664a8*/
    *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[352] + 4 * v2) = this; /*0x4664b7*/
  }
  return (int)this->__pad_0; /*0x4664bc*/
}



// ==== 0x004664C0  Particle::Init  this=AbstractClass  sig=csp ====
int __thiscall Particle::Init(int *this, int a2, int a3, int a4, int a5, int a6, int a7, char a8)
{
  int result; // eax

  result = a2; /*0x4664c4*/
  *(this + 67) = a3; /*0x4664c8*/
  this->q011 = a7; /*0x4664d2*/
  *(this + 74) = a6; /*0x4664dc*/
  *((_BYTE *)this + 224) = a8; /*0x4664e6*/
  *(this + 27) = a5; /*0x4664f6*/
  *(this + 43) = a2; /*0x4664fb*/
  *(this + 44) = a4; /*0x466501*/
  *((_BYTE *)this + 300) = 0; /*0x466507*/
  *((_BYTE *)this + 301) = *(_BYTE *)(a2 + 758); /*0x466513*/
  if ( *(_BYTE *)(a2 + 681) && a4 ) /*0x466525*/
  {
    result = *(_DWORD *)(*(_DWORD *)(a4 + 540) + 90196); /*0x46652d*/
    *(this + 69) = result; /*0x466533*/
  }
  else
  {
    *(this + 69) = -1; /*0x46653b*/
  }
  this->u8_15 = 256; /*0x466546*/
  *(this + 85) = 0; /*0x466550*/
  *((_BYTE *)this + 344) = 0; /*0x466556*/
  return result; /*0x466545*/
}



// ==== 0x00466560  BulletClass::Dtor  this=BulletClass  sig=csp ====
int __thiscall BulletClass::Dtor(BulletClass *this)
{
  int v2; // eax
  int v3; // eax
  BulletClass *v5; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this->__pad_0 = &BulletClass::`vftable'; /*0x466566*/
  this->BulletClass_field_0x4 = &BulletClass::`vftable'; /*0x46656c*/
  this->BulletClass_field_0x8 = &BulletClass::`vftable'; /*0x466573*/
  *(_DWORD *)this->__pad_C = &BulletClass::`vftable'; /*0x46657a*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x466581*/
  if ( this->__pad_158[0] ) /*0x466586*/
  {
    v5 = this; /*0x4665a0*/
    v2 = (*(int (__thiscall **)(int *, BulletClass **))(g_BuildingLoadQueue_Array.?[0] + 16))( /*0x4665a4*/
           g_BuildingLoadQueue_Array.?,
           &v5);
    if ( v2 != -1 && v2 < g_BuildingLoadQueue_Array.?[1] ) /*0x4665b4*/
    {
      --g_BuildingLoadQueue_Array.?[1]; /*0x4665b9*/
      for ( ; /*0x4665bf*/
            v2 < g_BuildingLoadQueue_Array.?[1];
            *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v2 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.?[0]
                                                                                 + 4 * v2) )
      {
        ++v2; /*0x4665c7*/
      }
    }
  }
  if ( byte_A8E9A0 ) /*0x4665e0*/
    ObjectClass::Undeploy((ObjectClass *)this); /*0x4665e4*/
  this->BulletClass_field_0xAC = 0; /*0x4665e9*/
  this->BulletClass_field_0xB0 = 0; /*0x4665f3*/
  this->BulletClass_field_0x154 = 0; /*0x4665fd*/
  v5 = this; /*0x466617*/
  v3 = (*(int (__thiscall **)(_BYTE *, BulletClass **))(*(_DWORD *)&stru_A8EB00.?[348] + 16))(&stru_A8EB00.?[348], &v5); /*0x46661b*/
  if ( v3 != -1 && v3 < *(int *)&stru_A8EB00.?[364] ) /*0x46662b*/
  {
    --*(_DWORD *)&stru_A8EB00.?[364]; /*0x466630*/
    for ( ; /*0x466636*/
          v3 < *(int *)&stru_A8EB00.?[364];
          *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[352] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[352] + 4 * v3) )
    {
      ++v3; /*0x46663e*/
    }
  }
  return ObjectClass::Dtor((ObjectClass *)this); /*0x466657*/
}



// ==== 0x00466660  BulletClass::CalculateSpreadAngle  this=BulletClass  sig=csp ====
int *__stdcall BulletClass::CalculateSpreadAngle(BulletClass *this)
{
  if ( (byte_89DE10 & 1) == 0 ) /*0x46666b*/
  {
    byte_89DE10 |= 1u; /*0x466689*/
    dword_89DDF4 = 2147450879; /*0x46668f*/
    atexit(nullsub_108); /*0x466694*/
  }
  return &dword_89DDF4; /*0x4666a2*/
}



// ==== 0x004666B0  nullsub_108  this=-  sig=ida-proto ====
void __cdecl nullsub_108()
{
  ; /*0x4666b0*/
}



// ==== 0x004666C0  BulletClass::CheckMirrorState  this=BulletClass  sig=csp ====
bool __thiscall BulletClass::CheckMirrorState(BulletClass *this, int a2)
{
  return (unsigned __int8)ObjectClass::UpdateProductionDisplay((ObjectClass *)this) != 0; /*0x4666cf*/
}



// ==== 0x004666E0  BulletClass::ProcessNukeExplosion  this=BulletClass  sig=csp ====
char __usercall BulletClass::ProcessNukeExplosion@<al>(BulletClass *this, double FiringDistance@<st0>)
{
  ObjectClass *v2; // ecx
  int v4; // eax
  int v5; // eax
  int Coord3D_field_0x04; // ecx
  char v7; // al
  unsigned __int8 v8; // bl
  int v9; // esi
  AnimClass *v10; // eax
  int v11; // eax
  int v13; // ecx
  int v14; // eax
  int v16; // edx
  char v17; // al
  CellClass *v18; // edx
  unsigned int v32; // eax
  int v33; // edx
  int v34; // ecx
  Triple *v35; // eax
  _BYTE *v36; // ecx
  Triple *v37; // eax
  int v40; // eax
  int v41; // edx
  int v42; // kr00_4
  int v43; // edi
  int v44; // eax
  _DWORD *v45; // eax
  int *v46; // eax
  int v47; // edx
  int v48; // eax
  int v49; // eax
  int v50; // ecx
  char v51; // si
  __int16 v52; // cx
  char *v53; // eax
  int v55; // edx
  int *v56; // eax
  int v57; // edx
  int v58; // eax
  int v59; // esi
  int *v60; // eax
  int v61; // edx
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v69; // eax
  int v... [55852 chars total]



// ==== 0x00468000  BulletClass::GetAnimFrame  this=BulletClass  sig=csp ====
int __thiscall BulletClass::GetAnimFrame(BulletClass *this)
{
  double v1; // st7
  int result; // eax
  _BYTE *BulletClass_field_0xAC; // ecx
  double v5; // [esp+0h] [ebp-18h]
  unsigned int v6; // [esp+14h] [ebp-4h]

  _ESI = this; /*0x468002*/
  result = 0; /*0x468004*/
  if ( !*((_BYTE *)this->BulletClass_field_0xAC + 673) ) /*0x46800c*/
  {
    __asm { fld qword ptr [esi+0F0h] } /*0x468022*/
    __asm
    {
      fchs
      fstp [esp+18h+var_18]; double
    }
    Math::CalcAngle(v5, *(double *)&this->__pad_B4[52]); /*0x468032*/
    __asm { fsub ds:dbl_7E2820 } /*0x468037*/
    __asm { fmul ds:dbl_7E2818 }
    LOWORD(v6) = Math::RoundToInt(v1); /*0x46804b*/
    result = dword_7F4890[(((v6 >> 10) + 1) >> 1) & 0x1F]; /*0x46805d*/
  }
  BulletClass_field_0xAC = _ESI->BulletClass_field_0xAC; /*0x468064*/
  if ( BulletClass_field_0xAC[756] || BulletClass_field_0xAC[757] ) /*0x468074*/
    return (unsigned __int8)_ESI->__pad_110[28]; /*0x468080*/
  return result; /*0x468086*/
}



// ==== 0x00468090  BulletClass::SetupVoxelTransform  this=BulletClass  sig=csp ====
void __thiscall BulletClass::SetupVoxelTransform(BulletClass *this, int *a2, int *a3)
{
  double v3; // st7
  _BYTE *BulletClass_field_0xAC; // eax
  float *inited; // eax
  float *v7; // eax
  int v8; // ebx
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  _BYTE *v14; // eax
  int v15; // ebx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  double v19; // [esp+0h] [ebp-D0h]
  double v20; // [esp+8h] [ebp-C8h]
  float v21; // [esp+Ch] [ebp-C4h]
  float v22; // [esp+Ch] [ebp-C4h]
  unsigned int v23; // [esp+20h] [ebp-B0h]
  unsigned int v24; // [esp+20h] [ebp-B0h]
  double v25; // [esp+20h] [ebp-B0h]
  int v26; // [esp+20h] [ebp-B0h]
  int v27; // [esp+2Ch] [ebp-A4h] BYREF
  int v28; // [esp+30h] [ebp-A0h]
  int v29; // [esp+34h] [ebp-9Ch]
  int GroundHeight; // [esp+38h] [ebp-98h]
  unsigned int v31; // [esp+3Ch] [ebp-94h]
  Matrix3x4 v32; // [esp+40h] [ebp-90h] BYREF
  AudioConfig v33[12]; // [esp+70h] [ebp-60h] BYREF
  float v34[12]; // [esp+A0h] [ebp-30h] BYREF

  _ESI = this; /*0x4680a3*/
  if ( ((int)dword_A8B230->vtable0 & 0x1000) == 0 /*0x4680d5*/
    || (v27 = *(_DWORD *)&this->__pad_1C[128],
        v28 = *(_DWORD *)&this->__pad_1C[132],
        v29 = *(_DWORD *)&this->__pad_1C[136],
        !(unsigned __int8)Game::Stub3((int)&v27)) )
  {
    BulletClass_field_0xAC = _ESI->BulletClass_field_0xAC; /*0x4680e2*/
    if ( !BulletClass_field_0xAC[670] && !_ESI->__pad_158[0] ) /*0x4680f6*/
    {
      if ( BulletClass_field_0xAC[566] ) /*0x468104*/
      {
        Matrix3x4::Identity(&v32); /*0x468116*/
        __asm { fld qword ptr [esi+0F0h] } /*0x468127*/
        __asm
        {
          fchs
          fstp [esp+0D0h+var_D0]; double
        }
        Math::CalcAngle(v19, *(double *)&_ESI->__pad_B4[52]); /*0x468137*/
        __asm /*0x46813c*/
        {
          fsub ds:dbl_7E2820
          fmul ds:dbl_7E2818
        }
        LOWORD(v23) = Math::RoundToInt(v3); /*0x46814d*/
        v24 = ((((v23 >> 10) + 1) >> 1) & 0x1F) - 8; /*0x468169*/
        __asm /*0x46816d*/
        {
          fild [esp+0C4h+var_B0]
          fmul ds:dbl_7E4408
          fstp [esp+0C4h+var_C4]; float
        }
        Matrix2D::Rotate(v32.m_Data, v21); /*0x46817a*/
        __asm /*0x46817f*/
        {
          fld qword ptr [esi+0F0h]
          fld qword ptr [esi+0E8h]
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
        }
        __asm
        {
          faddp st(1), st
          fstp qword ptr [esp]; double
          fstp st
          fstp st
        }
        Math::Sqrt(v20); /*0x46819f*/
        __asm { fstp qword ptr [esp+0C8h+var_B0] } /*0x4681aa*/
        Math::CalcAngle(*(double *)&_ESI->__pad_B4[68], v25); /*0x4681c0*/
        __asm /*0x4681c5*/
        {
          fsub ds:dbl_7E2820
          fmul ds:dbl_7E2818
        }
        LOWORD(v25) = Math::RoundToInt(v3); /*0x4681d6*/
        LODWORD(v25) = (((unsigned int)((LODWORD(v25) >> 10) + 1) >> 1) & 0x1F) - 8; /*0x4681ee*/
        __asm /*0x4681f6*/
        {
          fild [esp+0C4h+var_B0]
          fmul ds:dbl_7E4408
          fchs
          fstp [esp+0C4h+var_C4]; float
        }
        Matrix3D::RotateZ(v32.m_Data, v22); /*0x468205*/
        inited = (float *)AudioConfig::InitDefault(v33); /*0x468227*/
        v7 = MultiplyMatrix3x4(v34, inited, (float *)v32.m_Data); /*0x468235*/
        BulletClass::RenderVoxelBullet(_ESI, (int)_ESI->BulletClass_field_0xAC + 176, v7, a2, a3, 0, 2048, 1000); /*0x46824a*/
      }
      else
      {
        v26 = (*(int (__thiscall **)(BulletClass *))(*(_DWORD *)_ESI->__pad_0 + 108))(_ESI); /*0x468261*/
        if ( v26 ) /*0x468265*/
        {
          v31 = (*(int (__thiscall **)(BulletClass *))(*(_DWORD *)_ESI->__pad_0 + 488))(_ESI); /*0x468275*/
          v8 = (*(int (__thiscall **)(BulletClass *))(*(_DWORD *)_ESI->__pad_0 + 456))(_ESI); /*0x468289*/
          v27 = *(_DWORD *)&_ESI->__pad_1C[128]; /*0x46828f*/
          v28 = *(_DWORD *)&_ESI->__pad_1C[132]; /*0x46829b*/
          v29 = *(_DWORD *)&_ESI->__pad_1C[136]; /*0x4682a2*/
          GroundHeight = Cell::GetGroundHeight(&v27); /*0x4682b0*/
          if ( !_ESI->__pad_1C[112] ) /*0x4682b4*/
          {
            v9 = *(_DWORD *)&_ESI->__pad_1C[132]; /*0x4682c0*/
            v10 = *(_DWORD *)&_ESI->__pad_1C[136]; /*0x4682c3*/
            v27 = *(_DWORD *)&_ESI->__pad_1C[128]; /*0x4682c6*/
            v28 = v9; /*0x4682ce*/
            v29 = v10; /*0x4682d8*/
            if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v27)->flags[0] & 0x100) != 0 /*0x4682f3*/
              && v8 >= dword_89DE64 )
            {
              v8 -= dword_89DE64; /*0x4682f9*/
              GroundHeight += dword_89DE64; /*0x4682fd*/
            }
          }
          if ( v8 > 0 && *((_BYTE *)_ESI->BulletClass_field_0xAC + 666) ) /*0x46830e*/
          {
            v11 = ZCoordToScreenY(v8); /*0x46831a*/
            v12 = *a2; /*0x468322*/
            v28 = v11 + a2[1]; /*0x468328*/
            v27 = v12; /*0x46833d*/
            v13 = ZCoordToScreenY(GroundHeight); /*0x468341*/
            DrawToSurfaceSHP( /*0x468374*/
              (int)g_DSurface_Hidden_2,
              *(int *)&stru_87F5F0.__pad_58[124],
              v26,
              v31,
              &v27,
              a3,
              9729,
              0,
              -10 - v13,
              0,
              1000,
              0,
              0,
              0,
              0,
              0);
          }
          v14 = _ESI->BulletClass_field_0xAC; /*0x468379*/
          v15 = *(_DWORD *)&stru_87F5F0.__pad_58[124]; /*0x46837f*/
          if ( v14[680] ) /*0x468385*/
          {
            v15 = *(_DWORD *)&stru_87F5F0.__pad_58[120]; /*0x46838f*/
          }
          else if ( v14[681] ) /*0x468397*/
          {
            v16 = *(_DWORD *)&_ESI->__pad_110[4]; /*0x4683a1*/
            if ( v16 == -1 ) /*0x4683aa*/
              v15 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] /*0x4683d1*/
                                          + 4 * *(_DWORD *)&dword_A83D4C[134].__pad_90[4])
                              + 780);
            else
              v15 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * v16) + 780); /*0x4683b5*/
          }
          v17 = (*(int (__thiscall **)(BulletClass *))(*(_DWORD *)_ESI->__pad_0 + 464))(_ESI); /*0x4683ea*/
          v18 = ZCoordToScreenY(v17); /*0x4683f2*/
          DrawToSurfaceSHP((int)g_DSurface_Hidden_2, v15, v26, v31, a2, a3, 11776, 0, -30 - v18, 0, 1000, 0, 0, 0, 0, 0); /*0x46841d*/
        }
      }
    }
  }
}



// ==== 0x00468430  BulletClass::LoseTarget  this=BulletClass  sig=csp ====
__int16 __thiscall BulletClass::LoseTarget(BulletClass *this)
{
  _DWORD *v2; // eax
  __int16 v4[2]; // [esp+4h] [ebp-14h] BYREF
  int v5; // [esp+8h] [ebp-10h]
  _BYTE v6[12]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this->BulletClass_field_0x10C + 72))( /*0x468443*/
                   this->BulletClass_field_0x10C,
                   v6);
  LOWORD(v5) = *v2 / 256; /*0x468456*/
  HIWORD(v5) = v2[1] / 256; /*0x46846a*/
  *(_DWORD *)v4 = v5; /*0x468473*/
  LOWORD(v2) = dword_A8E7AC; /*0x468477*/
  if ( dword_A8E7AC /*0x46849b*/
    || (LOWORD(v2) = (*(int (__thiscall **)(void *))(*(_DWORD *)this->BulletClass_field_0x10C + 84))(this->BulletClass_field_0x10C),
        (_BYTE)v2)
    || (LOWORD(v2) = v4[0], *(_DWORD *)v4 == dword_89DDF0) )
  {
    this->BulletClass_field_0x10C = 0; /*0x4684c5*/
  }
  else
  {
    v2 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v4); /*0x4684b5*/
    this->BulletClass_field_0x10C = v2; /*0x4684ba*/
  }
  return (__int16)v2; /*0x4684c0*/
}



// ==== 0x004684E0  BulletClass::ProcessImpact  this=BulletClass  sig=csp ====
__int16 __thiscall BulletClass::ProcessImpact(BulletClass *this, char *a2, char *a3)
{
  char *v3; // edi
  char *BulletClass_field_0xB0; // eax
  char *BulletClass_field_0x10C; // ecx
  _DWORD *v7; // eax
  char **i; // ecx
  __int16 v10; // [esp+Ch] [ebp-10h] BYREF
  char v11[12]; // [esp+10h] [ebp-Ch] BYREF

  v3 = a2; /*0x4684ea*/
  Object::Unlink((ObjectClass *)this); /*0x4684f2*/
  BulletClass_field_0xB0 = (char *)this->BulletClass_field_0xB0; /*0x4684f7*/
  if ( BulletClass_field_0xB0 == v3 ) /*0x468501*/
    this->BulletClass_field_0xB0 = 0; /*0x468503*/
  BulletClass_field_0x10C = (char *)this->BulletClass_field_0x10C; /*0x468509*/
  if ( BulletClass_field_0x10C == v3 ) /*0x468511*/
  {
    v7 = (_DWORD *)(*(int (__thiscall **)(char *, char *))(*(_DWORD *)BulletClass_field_0x10C + 72))( /*0x46851e*/
                     BulletClass_field_0x10C,
                     v11);
    a2 = *(char **)CellStruct::Set((CellStruct *)&v10, *v7 / 256, v7[1] / 256); /*0x46854d*/
    LOWORD(BulletClass_field_0xB0) = dword_A8E7AC; /*0x468551*/
    if ( dword_A8E7AC /*0x468575*/
      || (LOWORD(BulletClass_field_0xB0) = (*(int (__thiscall **)(void *))(*(_DWORD *)this->BulletClass_field_0x10C + 84))(this->BulletClass_field_0x10C),
          (_BYTE)BulletClass_field_0xB0)
      || (LOWORD(BulletClass_field_0xB0) = (_WORD)a2, a2 == (char *)dword_89DDF0) )
    {
      this->BulletClass_field_0x10C = 0; /*0x46859c*/
    }
    else
    {
      BulletClass_field_0xB0 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x46858f*/
      this->BulletClass_field_0x10C = BulletClass_field_0xB0; /*0x468594*/
    }
  }
  if ( this->BulletClass_field_0xAC == v3 ) /*0x4685a8*/
    this->BulletClass_field_0xAC = 0; /*0x4685aa*/
  if ( (char *)this->BulletClass_field_0x130 == v3 ) /*0x4685b6*/
    this->BulletClass_field_0x130 = 0; /*0x4685b8*/
  if ( this->BulletClass_field_0x154 == v3 ) /*0x4685c4*/
    this->BulletClass_field_0x154 = 0; /*0x4685c6*/
  if ( (_BYTE)a3 ) /*0x4685d0*/
  {
    BulletClass_field_0xB0 = (char *)(*(int (__thiscall **)(char *))(*(_DWORD *)v3 + 44))(v3); /*0x4685da*/
    if ( BulletClass_field_0xB0 == (char *)8 ) /*0x4685e0*/
    {
      a3 = v3; /*0x4685e2*/
      if ( *(_BYTE *)(*((_DWORD *)v3 + 43) + 748) ) /*0x4685ec*/
      {
        BulletClass_field_0xB0 = 0; /*0x4685fa*/
        if ( dword_89DE28 > 0 ) /*0x4685fe*/
        {
          for ( i = (char **)dword_89DE1C; v3 != *i; ++i ) /*0x468600*/
          {
            if ( (int)++BulletClass_field_0xB0 >= dword_89DE28 ) /*0x468610*/
              return (__int16)BulletClass_field_0xB0; /*0x468610*/
          }
          BulletClass_field_0xB0 = (char *)(*(int (__thiscall **)(int *, char **))(dword_89DE18 + 16))( /*0x46862a*/
                                             &dword_89DE18,
                                             &a3);
          if ( BulletClass_field_0xB0 != (char *)-1 /*0x468645*/
            && (int)BulletClass_field_0xB0 < dword_89DE28
            && (int)BulletClass_field_0xB0 < --dword_89DE28 )
          {
            do /*0x46865d*/
            {
              ++BulletClass_field_0xB0; /*0x46864d*/
              *((_DWORD *)dword_89DE1C + (_DWORD)BulletClass_field_0xB0 - 1) = *((_DWORD *)dword_89DE1C /*0x468651*/
                                                                               + (_DWORD)BulletClass_field_0xB0);
            }
            while ( (int)BulletClass_field_0xB0 < dword_89DE28 ); /*0x46865d*/
          }
        }
      }
    }
  }
  return (__int16)BulletClass_field_0xB0; /*0x468612*/
}



// ==== 0x00468670  BulletClass::ProcessObstacle  this=BulletClass  sig=csp ====
char __userpurge BulletClass::ProcessObstacle@<al>(BulletClass *this, double a2@<st0>, int *a3, const void *a4)
{
  ObjectClass *v4; // ecx
  int *v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // esi
  char *BulletClass_field_0x8; // eax
  int v12; // esi
  int v13; // eax
  __int16 v14; // ax
  int v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  #375 *v19; // esi
  int *FirstFirestorm; // eax
  int v21; // ecx
  int v22; // edx
  int GroundHeight; // eax
  int v24; // edx
  _DWORD *FirstObstacle; // eax
  int v26; // edi
  int v27; // eax
  int v34; // ecx
  int v35; // eax
  double v43; // [esp+Ch] [ebp-58h]
  double v44; // [esp+Ch] [ebp-58h]
  double v45; // [esp+Ch] [ebp-58h]
  int v46; // [esp+24h] [ebp-40h]
  int v47; // [esp+24h] [ebp-40h]
  unsigned int v48; // [esp+24h] [ebp-40h]
  char *v49; // [esp+24h] [ebp-40h]
  int v51; // [esp+24h] [ebp-40h]
  int v52; // [esp+24h] [ebp-40h]
  double v53; // [esp+24h] [ebp-40h]
  int v54; // [esp+30h] [ebp-34h]
  double v55; // [esp+34h] [ebp-30h] BYREF
  _DWORD v56[3]; // [esp+40h] [ebp-24h] BYREF
  int v57; // [esp+4Ch] [ebp-18h]
  int v58; // [esp+58h] [ebp-Ch] BYREF
  int v59; // [esp+5Ch] [ebp-8h]
  int v60; // [esp+60h] [ebp-4h]

  _EBX = (int)v4; /*0x468681*/
  if ( !(unsigned __int8)ObjectClass::Deploy(v4) ) /*0x468684*/
    return 0; /*0x468b7f*/
  qmemcpy((void *)(_EBX + 232), a3, 0x18u); /*0x4686a0*/
  *(_DWORD *)(_EBX + 308) = *(_DWORD *)this->__pad_0; /*0x4686b1*/
  *(_DWORD *)(_EBX + 312) = this->BulletClass_field_0x4; /*0x4686b6*/
  *(_DWORD *)(_EBX + 316) = this->BulletClass_field_0x8; /*0x4686bc*/
  LOWORD(v46) = *(_DWORD *)(_EBX + 308) / 256; /*0x4686cd*/
  HIWORD(v46) = *(_DWORD *)(_EBX + 312) / 256; /*0x4686e6*/
  *(_DWORD *)(_EBX + 332) = v46; /*0x4686ef*/
  RemoveTarget(_EBX); /*0x4686f5*/
  v6 = (int *)(*(int (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(_EBX + 268) + 88))( /*0x46870a*/
                *(_DWORD *)(_EBX + 268),
                &v56[1]);
  v7 = *v6; /*0x468712*/
  v58 = v7; /*0x468714*/
  v59 = v6[1]; /*0x46871b*/
  v8 = v59; /*0x468718*/
  v9 = v6[2]; /*0x46871f*/
  *(_DWORD *)(_EBX + 320) = v7; /*0x468722*/
  v60 = v9; /*0x468724*/
  *(_DWORD *)(_EBX + 324) = v8; /*0x468728*/
  *(_DWORD *)(_EBX + 328) = v9; /*0x46872b*/
  v10 = *(_DWORD *)(_EBX + 172); /*0x46872e*/
  if ( *(_BYTE *)(v10 + 675) && *(_BYTE *)(v10 + 670) ) /*0x468741*/
  {
    v47 = *(_DWORD *)this->__pad_0 - v7; /*0x468755*/
    __asm { fild dword ptr [esp+58h+var_44+4] } /*0x46875c*/
    v48 = v8 - (unsigned int)this->BulletClass_field_0x4; /*0x468762*/
    BulletClass_field_0x8 = (char *)this->BulletClass_field_0x8; /*0x468766*/
    __asm /*0x468769*/
    {
      fstp [esp+58h+var_24+4]
      fild dword ptr [esp+58h+var_44+4]
    }
    v49 = &BulletClass_field_0x8[-v9]; /*0x468773*/
    __asm /*0x468777*/
    {
      fstp [esp+58h+var_24+8]
      fild dword ptr [esp+58h+var_44+4]
      fld [esp+58h+var_24+8]
      fld [esp+58h+var_24+4]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fld st(3)
      fmul st, st(4)
      faddp st(1), st
      fstp [esp+58h+var_5C+4]; double
      fstp st
      fstp st
      fstp st
    }
    Math::Sqrt(v43); /*0x4687a0*/
    __asm { fstp dword ptr [esp+58h+var_44+4] } /*0x4687c5*/
    __asm { fld dword ptr [esp+50h+var_44+4] }
    v12 = Random::Range( /*0x4687d2*/
            (Random *)&dword_A8B230[14].NeedsSaveOrLink,
            0,
            2 * *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5940));
    LOWORD(v13) = Math::RoundToInt(a2); /*0x4687d4*/
    v54 = v13 * v12 / *(_DWORD *)(*(_DWORD *)(_EBX + 304) + 180); /*0x4687fe*/
    v51 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x468807*/
    __asm /*0x46880b*/
    {
      fild dword ptr [esp+50h+var_44+4]
      fmul ds:dbl_7E3570
      fmul ds:dbl_7E3CC0
      fsub ds:dbl_7E2820
      fmul ds:dbl_7E2818
    }
    v14 = Math::RoundToInt(a2); /*0x468827*/
    v15 = v60; /*0x468834*/
    v52 = v14 - 0x3FFF; /*0x468838*/
    __asm /*0x46883c*/
    {
      fild dword ptr [esp+50h+var_44+4]
      fmul ds:dbl_7E2810
      fstp qword ptr [esp+50h+var_44+4]
      fild [esp+50h+var_8]
    }
    __asm
    {
      fstp qword ptr [esp+54h+var_24+4]
      fild dword ptr [esp+54h+var_34]
      fstp [esp+54h+var_34+4]
    }
    Math::SinCos(v53); /*0x468864*/
    __asm /*0x468869*/
    {
      fmul [esp+58h+var_34+4]
      fsubr qword ptr [esp+58h+var_24+4]
    }
    LOWORD(v16) = Math::RoundToInt(a2); /*0x468871*/
    v54 = v16; /*0x46887a*/
    Math::ArcTan2(v53); /*0x468884*/
    __asm { fmul [esp+60h+var_34+4] } /*0x468889*/
    __asm { fiadd [esp+50h+var_C] }
    LOWORD(v17) = Math::RoundToInt(a2); /*0x468894*/
    v58 = v17; /*0x46889d*/
    v59 = v54; /*0x4688a1*/
    v60 = v15; /*0x4688a5*/
  }
  if ( *(_BYTE *)(*(_DWORD *)(_EBX + 172) + 670) ) /*0x4688af*/
  {
    v18 = *(_DWORD *)(_EBX + 176); /*0x4688bd*/
    if ( v18 ) /*0x4688c5*/
      v19 = *(#375 **)(v18 + 540); /*0x4688c7*/
    else
      v19 = 0; /*0x4688cf*/
    FirstFirestorm = MapClass::FindFirstFirestorm((int *)&v55, (int *)this->__pad_0, &v58, (int)v19); /*0x4688e2*/
    v56[1] = *FirstFirestorm; /*0x4688f1*/
    v21 = FirstFirestorm[1]; /*0x4688f5*/
    v56[2] = v21; /*0x4688f8*/
    v22 = FirstFirestorm[2]; /*0x4688fc*/
    v57 = v22; /*0x4688ff*/
    if ( v56[1] == dword_89DE30 && __PAIR64__(v22, v21) == qword_89DE34 ) /*0x46890b*/
    {
      FirstObstacle = TrajectoryHelper::FindFirstObstacle(this, &v58, *(_DWORD *)(_EBX + 172), v19); /*0x46894a*/
      if ( FirstObstacle ) /*0x468953*/
      {
        v26 = *(_DWORD *)_EBX; /*0x468957*/
        v27 = (*(int (__thiscall **)(_DWORD *, double *))(*FirstObstacle + 72))(FirstObstacle, &v55); /*0x468960*/
        (*(void (__thiscall **)(int, int))(v26 + 436))(_EBX, v27); /*0x468966*/
      }
      else
      {
        (*(void (__thiscall **)(int, int *))(*(_DWORD *)_EBX + 436))(_EBX, &v58); /*0x468977*/
      }
      (*(void (__thiscall **)(int, int *))(*(_DWORD *)_EBX + 436))(_EBX, &v58); /*0x468986*/
      *(_DWORD *)(_EBX + 272) = 0; /*0x46898c*/
      __asm /*0x468992*/
      {
        fld qword ptr [ebx+0E8h]
        fcomp ds:dbl_7E2800
        fnstsw ax
      }
      if ( (_AX & 0x4000) != 0 ) /*0x4689a3*/
      {
        __asm /*0x4689a5*/
        {
          fld qword ptr [ebx+0F0h]
          fcomp ds:dbl_7E2800
          fnstsw ax
        }
        if ( (_AX & 0x4000) != 0 ) /*0x4689b6*/
        {
          __asm /*0x4689b8*/
          {
            fld qword ptr [ebx+0F8h]
            fcomp ds:dbl_7E2800
            fnstsw ax
          }
          if ( (_AX & 0x4000) != 0 ) /*0x4689c9*/
          {
            *(_DWORD *)(_EBX + 232) = 0; /*0x4689cb*/
            *(_DWORD *)(_EBX + 236) = 1079574528; /*0x4689d1*/
          }
        }
      }
      __asm /*0x4689db*/
      {
        fld qword ptr [ebx+0F8h]
        fld qword ptr [ebx+0F0h]
        fld qword ptr [ebx+0E8h]
        fld st(2)
        fmul st, st(3)
        fld st(2)
        fmul st, st(3)
      }
      __asm
      {
        faddp st(1), st
        fld st(1)
        fmul st, st(2)
        faddp st(1), st
        fstp [esp+58h+var_5C+4]; double
        fstp st
        fstp st
        fstp st
      }
      Math::Sqrt(v44); /*0x468a09*/
      __asm { fdivr ds:dbl_7E2800 } /*0x468a0e*/
      __asm
      {
        fld st
        fmul qword ptr [ebx+0E8h]
        fstp qword ptr [ebx+0E8h]
      }
      *(double *)(_EBX + 232) = _RT1; /*0x468a1f*/
      __asm /*0x468a25*/
      {
        fld st
        fmul qword ptr [ebx+0F0h]
        fstp qword ptr [ebx+0F0h]
      }
      *(double *)(_EBX + 240) = _RT1; /*0x468a2d*/
      __asm /*0x468a33*/
      {
        fmul qword ptr [ebx+0F8h]
        fstp qword ptr [ebx+0F8h]
      }
      *(double *)(_EBX + 248) = _RT1; /*0x468a39*/
    }
    else
    {
      GroundHeight = Cell::GetGroundHeight(&v56[1]); /*0x46891f*/
      v24 = *(_DWORD *)_EBX; /*0x468924*/
      v57 = GroundHeight; /*0x468926*/
      (*(void (__thiscall **)(int, _DWORD *))(v24 + 436))(_EBX, &v56[1]); /*0x468931*/
    }
  }
  v34 = *(_DWORD *)(_EBX + 268); /*0x468a3f*/
  if ( v34 && (*(int (__thiscall **)(int))(*(_DWORD *)v34 + 44))(v34) == 2 ) /*0x468a51*/
    v35 = 0; /*0x468a53*/
  else
    v35 = *(_DWORD *)(*(_DWORD *)(_EBX + 172) + 752); /*0x468a5d*/
  v56[1] = *(_DWORD *)(_EBX + 156); /*0x468a75*/
  v56[2] = *(_DWORD *)(_EBX + 160); /*0x468a7c*/
  v57 = *(_DWORD *)(_EBX + 164); /*0x468a88*/
  BulletClass::InitDetonationTimer((BulletClass *)(_EBX + 184), &v56[1], &v58, v35, 0x7FFFFFFF); /*0x468a93*/
  if ( *(int *)(*(_DWORD *)(_EBX + 172) + 732) > 0 ) /*0x468aa6*/
  {
    __asm /*0x468aac*/
    {
      fld qword ptr [ebx+0E8h]
      fcomp ds:dbl_7E2800
      fnstsw ax
    }
    if ( (_AX & 0x4000) != 0 ) /*0x468abd*/
    {
      __asm /*0x468abf*/
      {
        fld qword ptr [ebx+0F0h]
        fcomp ds:dbl_7E2800
        fnstsw ax
      }
      if ( (_AX & 0x4000) != 0 ) /*0x468ad0*/
      {
        __asm /*0x468ad2*/
        {
          fld qword ptr [ebx+0F8h]
          fcomp ds:dbl_7E2800
          fnstsw ax
        }
        if ( (_AX & 0x4000) != 0 ) /*0x468ae3*/
        {
          *(_DWORD *)(_EBX + 232) = 0; /*0x468ae5*/
          *(_DWORD *)(_EBX + 236) = 1079574528; /*0x468aef*/
        }
      }
    }
    __asm /*0x468af9*/
    {
      fld qword ptr [ebx+0F8h]
      fld qword ptr [ebx+0F0h]
      fld qword ptr [ebx+0E8h]
      fld st(2)
      fmul st, st(3)
      fld st(2)
      fmul st, st(3)
    }
    __asm
    {
      faddp st(1), st
      fld st(1)
      fmul st, st(2)
      faddp st(1), st
      fstp [esp+58h+var_5C+4]; double
      fstp st
      fstp st
      fstp st
    }
    Math::Sqrt(v45); /*0x468b27*/
    __asm { fdivr ds:dbl_7E1718 } /*0x468b2c*/
    __asm
    {
      fld st
      fmul qword ptr [ebx+0E8h]
      fstp qword ptr [ebx+0E8h]
    }
    *(double *)(_EBX + 232) = _RT1; /*0x468b3d*/
    __asm /*0x468b43*/
    {
      fld st
      fmul qword ptr [ebx+0F0h]
      fstp qword ptr [ebx+0F0h]
    }
    *(double *)(_EBX + 240) = _RT1; /*0x468b4b*/
    __asm /*0x468b51*/
    {
      fmul qword ptr [ebx+0F8h]
      fstp qword ptr [ebx+0F8h]
    }
    *(double *)(_EBX + 248) = _RT1; /*0x468b57*/
  }
  if ( *(_BYTE *)(_EBX + 144) ) /*0x468b5d*/
    Targeting::Readd((_DWORD *)_EBX); /*0x468b6d*/
  return 1; /*0x468b74*/
}



// ==== 0x00468B90  BulletClass::UpdateFlightPath  this=BulletClass  sig=csp ====
int __thiscall BulletClass::UpdateFlightPath(BulletClass *this)
{
  int v1; // eax

  v1 = -(*((_BYTE *)this->BulletClass_field_0xAC + 759) != 0); /*0x468b9e*/
  LOBYTE(v1) = v1 & 0xFE; /*0x468ba0*/
  return v1 + 3; /*0x468ba5*/
}



// ==== 0x00468BB0  BulletClass::CheckBulletCollision  this=BulletClass  sig=csp ====
bool __thiscall BulletClass::CheckBulletCollision(BulletClass *this, int *a2)
{
  CellClass *v4; // ebx
  _BYTE *BulletClass_field_0xAC; // eax
  CellClass *v6; // ebx
  CellClass *v7; // ebp
  void *v8; // eax
  ParticleSystemClass *BulletClass_field_0xB0; // ecx
  bool result; // al
  void *BulletClass_field_0x10C; // ecx
  int v12; // eax
  int v13; // edi
  void *v14; // ecx
  _DWORD v15[3]; // [esp+10h] [ebp-Ch] BYREF
  CellClass *v16; // [esp+20h] [ebp+4h]

  *a2 = *(_DWORD *)&this->__pad_1C[128]; /*0x468bc8*/
  a2[1] = *(_DWORD *)&this->__pad_1C[132]; /*0x468bcd*/
  a2[2] = *(_DWORD *)&this->__pad_1C[136]; /*0x468bd3*/
  v4 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2); /*0x468be0*/
  BulletClass_field_0xAC = this->BulletClass_field_0xAC; /*0x468be2*/
  v16 = v4; /*0x468be8*/
  if ( BulletClass_field_0xAC[662] || BulletClass_field_0xAC[664] ) /*0x468bf6*/
  {
    v6 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], this->__pad_134); /*0x468c21*/
    v7 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &this->BulletClass_field_0x140); /*0x468c28*/
    v8 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&this->__pad_144[8]); /*0x468c36*/
    BulletClass_field_0xB0 = this->BulletClass_field_0xB0; /*0x468c3b*/
    if ( BulletClass_field_0xB0 ) /*0x468c43*/
      BulletClass_field_0xB0 = (ParticleSystemClass *)BulletClass_field_0xB0[2].?; /*0x468c45*/
    if ( TrajectoryHelper::GetObstacle( /*0x468c6d*/
           v6,
           v7,
           (int)v8,
           *a2,
           a2[1],
           a2[2],
           (int)this->BulletClass_field_0xAC,
           (#375 *)BulletClass_field_0xB0) )
    {
      return 1; /*0x468c7f*/
    }
    v4 = v16; /*0x468c82*/
  }
  if ( (*(int (__thiscall **)(BulletClass *))(*(_DWORD *)this->__pad_0 + 456))(this) <= -4 * dword_89DE70 ) /*0x468c9d*/
    return 1; /*0x468c9f*/
  BulletClass_field_0x10C = this->BulletClass_field_0x10C; /*0x468cab*/
  if ( BulletClass_field_0x10C ) /*0x468cb3*/
  {
    if ( *((_BYTE *)this->BulletClass_field_0xAC + 675) ) /*0x468cbb*/
    {
      v12 = *(_DWORD *)&this->__pad_1C[128]; /*0x468ccb*/
      v13 = *(_DWORD *)&this->__pad_1C[136]; /*0x468cd1*/
      v15[1] = *(_DWORD *)&this->__pad_1C[132]; /*0x468cd7*/
      v15[0] = v12; /*0x468cdb*/
      if ( v13 < *(_DWORD *)((*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)BulletClass_field_0x10C + 88))( /*0x468cfa*/
                               BulletClass_field_0x10C,
                               v15)
                           + 8)
        && (*(int (__thiscall **)(BulletClass *))(*(_DWORD *)this->__pad_0 + 456))(this) < 0 )
      {
        return 1; /*0x468cfc*/
      }
    }
  }
  if ( *((_BYTE *)this->BulletClass_field_0xAC + 669) /*0x468d1c*/
    && (*(unsigned __int8 (__thiscall **)(CellClass *))(v4->mapCoords[0] + 80))(v4) )
  {
    return 1; /*0x468d23*/
  }
  result = 0; /*0x468d67*/
  if ( *((_BYTE *)this->BulletClass_field_0xAC + 676) ) /*0x468d35*/
  {
    v14 = this->BulletClass_field_0x10C; /*0x468d3f*/
    if ( v14 ) /*0x468d47*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)v14 + 84))(v14) /*0x468d65*/
        && ObjectClass::DistanceTo((ObjectClass *)this, (int)this->BulletClass_field_0x10C) < 128 )
      {
        return 1; /*0x468d3d*/
      }
    }
  }
  return result; /*0x468c78*/
}



// ==== 0x00468D80  BulletClass::Fire  this=BulletClass  sig=csp ====
double __userpurge BulletClass::Fire@<st0>(ObjectClass *this@<ecx>, double a2@<st0>, char a3)
{
  int v4; // ebx
  int *location; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  _DWORD *v10; // eax
  int *v11; // eax
  int v12; // eax
  int v13; // eax
  int *v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  int *v18; // eax
  int *v19; // eax
  int v20; // ecx
  _DWORD *v21; // ecx
  int v22; // eax
  int v23; // edi
  int v24; // eax
  int *v25; // eax
  int v26; // ecx
  int v27; // [esp+18h] [ebp-30h] BYREF
  int v28; // [esp+1Ch] [ebp-2Ch]
  int v29; // [esp+20h] [ebp-28h]
  int v30; // [esp+24h] [ebp-24h] BYREF
  int v31; // [esp+28h] [ebp-20h]
  int v32; // [esp+2Ch] [ebp-1Ch]
  char v33[12]; // [esp+30h] [ebp-18h] BYREF
  int v34[3]; // [esp+3Ch] [ebp-Ch] BYREF

  v4 = 0; /*0x468d87*/
  location = this->location; /*0x468d8a*/
  v27 = this->location[0]; /*0x468d96*/
  v6 = this->q10C; /*0x468d9a*/
  v7 = location[1]; /*0x468da0*/
  v8 = location[2]; /*0x468da5*/
  v28 = v7; /*0x468da8*/
  v29 = v8; /*0x468dac*/
  if ( v6 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 84))(v6) ) /*0x468db4*/
    v4 = this->q10C; /*0x468dbb*/
  if ( !*(_BYTE *)(this->q0AC + 674) ) /*0x468dc7*/
  {
    v9 = this->q10C; /*0x468dd5*/
    if ( v9 ) /*0x468ddd*/
    {
      v10 = (_DWORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v9 + 72))(v9, v33); /*0x468dea*/
      v11 = Coord::Subtract((Coord *)v34, v27 - *v10, v28 - v10[1], v29 - v10[2]); /*0x468e0e*/
      v30 = *v11; /*0x468e18*/
      v31 = v11[1]; /*0x468e1f*/
      v32 = v11[2]; /*0x468e2a*/
      Math::Sqrt((double)v30 * (double)v30 + (double)v32 * (double)v32 + (double)v31 * (double)v31); /*0x468e4f*/
      LOWORD(v12) = Math::RoundToInt(a2); /*0x468e57*/
      if ( v12 < 32 ) /*0x468e5f*/
      {
        v13 = this->q0AC; /*0x468e61*/
        if ( !*(_BYTE *)(v13 + 660) && !*(_BYTE *)(v13 + 674) ) /*0x468e71*/
        {
          v14 = (int *)(*(int (__thiscall **)(_DWORD, int *))(**((_DWORD **)this + 67) + 72))( /*0x468e88*/
                         this->q10C,
                         v34);
          v27 = *v14; /*0x468e8d*/
          v28 = v14[1]; /*0x468e94*/
          v29 = v14[2]; /*0x468e9b*/
        }
      }
    }
    if ( !*(_BYTE *)(this->WeaponType + 340) ) /*0x468ea5*/
    {
      v15 = this->q0AC; /*0x468eb3*/
      if ( !*(_BYTE *)(v15 + 660) ) /*0x468eb9*/
      {
        if ( !a3 /*0x468f05*/
          && !*(_BYTE *)(v15 + 667)
          && *(int *)(v15 + 732) <= 0
          && (this->u32_34 != dword_89DE30 || *(_QWORD *)((char *)this + 212) != qword_89DE34) )
        {
          v16 = this->q0D4; /*0x468f11*/
          v27 = this->u32_34; /*0x468f14*/
          v17 = this->q0D8; /*0x468f18*/
          v28 = v16; /*0x468f1b*/
          v29 = v17; /*0x468f1f*/
        }
        if ( v4 && (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 120))(v4) != 2 ) /*0x468f31*/
        {
          if ( ObjectClass::DistanceTo(this, this->q10C) >= 128 ) /*0x468f46*/
            goto LABEL_30; /*0x468f46*/
          v18 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v4 + 164))(v4, v34); /*0x468f55*/
          goto LABEL_29; /*0x468f5b*/
        }
        if ( this->q10C ) /*0x468f60*/
        {
          if ( ObjectClass::DistanceTo(this, this->q10C) < 42 ) /*0x468f79*/
          {
            v19 = (int *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, int *, double@<st0>))(**((_DWORD **)this + 67) + 88))( /*0x468f88*/
                           this->q10C,
                           v34,
                           a2);
            v27 = *v19; /*0x468f8d*/
            v20 = this->q10C; /*0x468f91*/
            v28 = v19[1]; /*0x468f9a*/
            v29 = v19[2]; /*0x468fa1*/
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 44))(v20) == 6 ) /*0x468fad*/
            {
              v21 = (_DWORD *)this->q10C; /*0x468faf*/
              if ( *(_DWORD *)(v21[328] + 3772) || *(_DWORD *)(v21[328] + 3776) || *(_DWORD *)(v21[328] + 3780) ) /*0x468fcc*/
              {
                v18 = (int *)(*(int (__thiscall **)(_DWORD *, int *))(*v21 + 164))(v21, v34); /*0x468fda*/
LABEL_29:
                v27 = *v18; /*0x468fe0*/
                v28 = v18[1]; /*0x468fe9*/
                v29 = v18[2]; /*0x468ff0*/
              }
            }
          }
        }
      }
    }
  }
LABEL_30:
  v22 = this->q0AC; /*0x468ff4*/
  if ( *(_BYTE *)(v22 + 660) ) /*0x468ffa*/
  {
    Warhead::ApplyDamage((char *)this, &v27); /*0x4690a1*/
  }
  else
  {
    v30 = v27; /*0x469010*/
    v31 = v28; /*0x469018*/
    v32 = v29; /*0x46901c*/
    v23 = 0; /*0x469026*/
    if ( *(int *)(v22 + 684) > 0 ) /*0x46902a*/
    {
      do /*0x46908f*/
      {
        Warhead::ApplyDamage((char *)this, &v27); /*0x469033*/
        if ( !this->isAliveFlag ) /*0x469038*/
          break; /*0x469040*/
        v24 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 256, 512); /*0x469057*/
        v25 = RandomCoordScatter(v34, &v30, a2, v24, 0); /*0x469067*/
        ++v23; /*0x46906e*/
        v27 = *v25; /*0x46906f*/
        v26 = this->q0AC; /*0x469073*/
        v28 = v25[1]; /*0x46907c*/
        v29 = v25[2]; /*0x469083*/
      }
      while ( v23 < *(_DWORD *)(v26 + 684) ); /*0x46908f*/
    }
  }
  return a2; /*0x469091*/
}



// ==== 0x004690B0  Warhead::ApplyDamage  this=ObjectClass  sig=csp ====
int __thiscall Warhead::ApplyDamage(char *this, int *a2)
{
  double v2; // st7
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // edi
  int v11; // eax
  Concurrency::details::SchedulerBase *v12; // ebx
  RadSiteClass *NumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ; // eax
  RadSiteClass *v14; // eax
  RadSiteClass *v15; // edi
  _BYTE *v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // edi
  bool v20; // bl
  TeamClass *v21; // ecx
  int *v22; // edi
  int v23; // eax
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // eax
  int v28; // eax
  int v29; // ecx
  _DWORD *v30; // edi
  int v31; // eax
  int v32; // ecx
  int v33; // edi
  Team *v34; // eax
  _DWORD *Member; // ebx
  int v36; // edi
  int v37; // eax
  int *v38; // eax
  CellClass *v39; // eax
  TechnoClass *v40; // ecx
  int v41; // eax
  int v42; // ecx
  int v43; // edi
  int v44; // ecx
  int v45; // ecx
  int v47; ... [32997 chars total]



// ==== 0x0046A310  Warhead::ApplyPostDamageEffects  this=Warhead  sig=csp ====
int __thiscall Warhead::ApplyPostDamageEffects(Warhead *this)
{
  double v1; // st7
  int v3; // eax
  int v4; // esi
  int *v5; // ecx
  int v6; // ebx
  int v7; // ebp
  int v8; // edx
  _DWORD *v9; // eax
  int *v10; // eax
  int result; // eax
  int v12; // eax
  int v13; // edx
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int *v19; // ecx
  int v20; // edx
  bool v21; // cc
  _WORD *v22; // ebx
  __int16 v23; // ax
  _BYTE *v24; // ebp
  int v25; // eax
  char v26; // al
  int v27; // edx
  int v28; // ebx
  int v29; // eax
  int *v30; // ebx
  int v31; // ecx
  int v32; // edx
  __int16 v34; // ax
  int v41; // ecx
  int v42; // edx
  char v43; // al
  TechnoClass *v44; // ecx
  TechnoClass *v45; // ecx
  __int16 v46; // ax
  __int16 v47; // ax
  char v48; // dl
  int v49; // ecx
  int v50; // eax
  int v51; // ebx
  int v52; // ebp
  int *v53; // eax
  int *v54; // ebx
  int v55; // edx
  __int16 v57; // ax
  __int16 v58; // bp
  int v61; // ebp
  in... [26032 chars total]



// ==== 0x0046AE70  BulletClass::SaveLoad_Prefix  this=BulletClass  sig=csp ====
int __thiscall BulletClass::SaveLoad_Prefix(BulletClass *this, int *a2, int a3)
{
  int result; // eax
  int v4; // ebx
  int v5; // eax

  result = BuildingClass::SaveLoad_Register((ObjectClass *)this); /*0x46ae7c*/
  v4 = result; /*0x46ae81*/
  if ( result >= 0 ) /*0x46ae85*/
  {
    if ( a2 ) /*0x46ae8e*/
    {
      ObjectClass::Init((ObjectClass *)a2, (int)&a3); /*0x46ae97*/
      Timer::Start((Timer *)(a2 + 46), 0); /*0x46aea6*/
      Timer::Start((Timer *)(a2 + 49), 0); /*0x46aeb0*/
      *a2 = (int)&BulletClass::`vftable'; /*0x46aeb5*/
      a2[1] = (int)&BulletClass::`vftable'; /*0x46aebb*/
      a2[2] = (int)&BulletClass::`vftable'; /*0x46aec2*/
      a2[3] = (int)&BulletClass::`vftable'; /*0x46aec9*/
    }
    if ( a2[85] /*0x46af17*/
      && (g_BuildingLoadQueue_Array.?[1] < g_BuildingLoadQueue_Array.?
       || (BYTE1(g_BuildingLoadQueue_Array.?[0]) || !g_BuildingLoadQueue_Array.?)
       && g_BuildingLoadQueue_Array.?[2] > 0
       && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.?[0] + 8))(
            g_BuildingLoadQueue_Array.?,
            g_BuildingLoadQueue_Array.? + g_BuildingLoadQueue_Array.?[2],
            0)) )
    {
      v5 = g_BuildingLoadQueue_Array.?[1]++; /*0x46af24*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v5) = a2; /*0x46af33*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 43); /*0x46af42*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 44); /*0x46af53*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 74); /*0x46af64*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 67); /*0x46af75*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 76); /*0x46af86*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 85); /*0x46af91*/
    return v4; /*0x46af97*/
  }
  return result; /*0x46af99*/
}



// ==== 0x0046AFB0  BulletClass::SaveLoad_Prefix_0  this=BulletClass  sig=csp ====
int __stdcall BulletClass::SaveLoad_Prefix_0(BulletClass *this, int *a2, int a3)
{
  return AbstractClass::SaveLoad_Prefix((int *)this->__pad_0, a2, a3); /*0x46afc4*/
}



// ==== 0x0046AFD0  BulletClass::CheckTargetValidity  this=BulletClass  sig=csp ====
LONG __stdcall BulletClass::CheckTargetValidity(BulletClass *this)
{
  ++*(_DWORD *)&g_MissionQueueFrame.waypoints[274]; /*0x46afdf*/
  return InterlockedIncrement((volatile LONG *)this->__pad_1C); /*0x46afeb*/
}



// ==== 0x0046AFF0  BulletClass::ValidateTarget  this=BulletClass  sig=csp ====
LONG __stdcall BulletClass::ValidateTarget(BulletClass *this)
{
  LONG v1; // esi

  --*(_DWORD *)&g_MissionQueueFrame.waypoints[274]; /*0x46b000*/
  v1 = InterlockedDecrement((volatile LONG *)this->__pad_1C); /*0x46b00d*/
  if ( !v1 && this ) /*0x46b015*/
    (*(void (__thiscall **)(BulletClass *, int))(*(_DWORD *)this->__pad_0 + 32))(this, 1); /*0x46b01d*/
  return v1; /*0x46b022*/
}



// ==== 0x0046B050  CreateUIObjectCOM  this=AbstractClass  sig=csp ====
int __fastcall CreateUIObjectCOM(int a1, int a2, int a3, int a4, int a5, int a6, char a7)
{
  LPVOID v10; // esi
  LPVOID ppv; // [esp+8h] [ebp-4h] BYREF

  ppv = 0; /*0x46b06a*/
  if ( CoCreateInstance(&rclsid, 0, 7u, &IID_IUnknown, &ppv) < 0 ) /*0x46b07a*/
    return 0; /*0x46b07d*/
  v10 = ppv; /*0x46b0a4*/
  Particle::Init((int *)ppv, a1, a2, a3, a4, a5, a6, a7); /*0x46b0a6*/
  return (int)v10; /*0x46b07c*/
}



// ==== 0x0046B0C0  BulletClass::RenderVoxelBullet  this=BulletClass  sig=csp ====
char __thiscall BulletClass::RenderVoxelBullet(
        BulletClass *this,
        int a2,
        float *a3,
        _DWORD *a4,
        _DWORD *a5,
        unsigned int a6,
        int a7,
        int a8)
{
  _DWORD *v8; // esi
  _DWORD *v9; // ebx
  unsigned int i; // ebp
  float *v11; // eax
  float *v12; // esi
  int v13; // edx
  int v14; // ebx
  unsigned int v15; // edi
  int v16; // ecx
  int v17; // esi
  int *v18; // eax
  int *SHPFrame; // [esp-18h] [ebp-10Ch]
  int v21; // [esp-10h] [ebp-104h]
  Viewport *v22; // [esp+0h] [ebp-F4h]
  int v23[2]; // [esp+10h] [ebp-E4h] BYREF
  _DWORD *v24; // [esp+18h] [ebp-DCh]
  _DWORD v25[6]; // [esp+1Ch] [ebp-D8h] BYREF
  float v26[12]; // [esp+34h] [ebp-C0h] BYREF
  float v27[12]; // [esp+64h] [ebp-90h] BYREF
  float v28[12]; // [esp+94h] [ebp-60h] BYREF
  float v29[12]; // [esp+C4h] [ebp-30h] BYREF

  v8 = *(_DWORD **)a2; /*0x46b0d0*/
  v9 = *(_DWORD **)(a2 + 4); /*0x46b0d2*/
  v23[0] = (int)this; /*0x46b0dd*/
  v24 = v8; /*0x46b0ed*/
  globalHelper_053C80(v8, 0, 0, a3, (float *)&stru_887460.Buffer_field_10); /*0x46b0f1*/
  Viewport::Clear(v22); /*0x46b0f6*/
  for ( i = 0; i < v8[1]; ++i ) /*0x46b0fb*/
  {
    if ( v9 ) /*0x46b106*/
    {
      qmemcpy(v26, (const void *)(v9[3] + 48 * (i + v9[1] * (a6 % v9[2]))), sizeof(v26)); /*0x46b135*/
      qmemcpy(v27, MultiplyMatrix3x4(v28, a3, v26), sizeof(v27)); /*0x46b153*/
      v8 = v24; /*0x46b155*/
    }
    v11 = MultiplyMatrix3x4(v29, (float *)stru_887430.m_Data, v27); /*0x46b16a*/
    TransformVoxelVertex(v8, i, 0, v11); /*0x46b176*/
  }
  v12 = Voxel::RenderFrame(v26); /*0x46b18c*/
  v13 = *(_DWORD *)(v23[0] + 172); /*0x46b19b*/
  v14 = 0; /*0x46b1a1*/
  qmemcpy(v25, v12, sizeof(v25)); /*0x46b1a3*/
  v15 = a7 & 0xFFFFFFEF; /*0x46b1b2*/
  if ( *(_BYTE *)(v13 + 759) ) /*0x46b1ac*/
  {
    v14 = dword_81AF00; /*0x46b1b9*/
    v15 = a7 & 0xFFFFDFEF | 0x2000; /*0x46b1bf*/
  }
  v16 = v25[1] + a4[1]; /*0x46b1dd*/
  v23[0] = v25[0] + *a4; /*0x46b1df*/
  v23[1] = v16; /*0x46b1e8*/
  v17 = *(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)(v13 + 724); /*0x46b1fe*/
  v21 = *(_BYTE *)(v13 + 759) != 0 ? 0 : 2;
  SHPFrame = (int *)BuildingClass::GetSHPFrame(*(BuildingClass **)(*(_DWORD *)v17 + 780), v15); /*0x46b226*/
  v18 = Miles::DriverGet(); /*0x46b234*/
  return BlitterDrawSHP( /*0x46b24d*/
           (int *)g_DSurface_Hidden_2->__pad_0,
           *(_DWORD *)(*(_DWORD *)v17 + 780),
           v18,
           &v25[2],
           v23,
           a5,
           0,
           SHPFrame,
           v14,
           v21,
           a8,
           0,
           0);
}



// ==== 0x0046B260  Function::46B260  this=Function  sig=csp ====
int __thiscall Function::Method_46B260(Function *this, int a2)
{
  *((_DWORD *)this + 76) = a2; /*0x46b264*/
  return a2; /*0x46b26a*/
}



// ==== 0x0046B270  TechnoClass::updateHealthBar  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::updateHealthBar(TechnoClass *this)
{
  return (int)this->deployAnim; /*0x46b276*/
}



// ==== 0x0046B280  BulletClass::InitScalable  this=BulletClass  sig=csp ====
int __thiscall BulletClass::InitScalable(BulletClass *this)
{
  int v2; // eax
  int v3; // edx

  if ( dword_89DE28 < dword_89DE20 /*0x46b2b7*/
    || (byte_89DE25 || !dword_89DE20)
    && dword_89DE2C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_89DE18 + 8))(
         &dword_89DE18,
         dword_89DE20 + dword_89DE2C,
         0) )
  {
    v2 = dword_89DE28++; /*0x46b2c4*/
    *((_DWORD *)dword_89DE1C + v2) = this; /*0x46b2d3*/
  }
  v3 = dword_89DE28 - 5; /*0x46b2dc*/
  if ( dword_89DE28 - 5 < 0 ) /*0x46b2e1*/
    v3 = 0; /*0x46b2e3*/
  return BulletTypeClass::SetScaledSpawnDelay( /*0x46b307*/
           (BulletTypeClass *)this->BulletClass_field_0xAC,
           v3 / 3 + *((_DWORD *)this->BulletClass_field_0xAC + 185));
}



// ==== 0x0046B310  SuperWeapon::CreateNukePayload  this=SuperWeapon  sig=csp ====
int __thiscall SuperWeapon::CreateNukePayload(SuperWeapon *this)
{
  double v1; // st3
  double v2; // st4
  double v3; // st5
  double v4; // st6
  double v5; // st7
  int v7; // ebx
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int result; // eax
  _DWORD *v15; // edi
  int v16; // ecx
  _DWORD *v17; // eax
  int v18; // esi
  int v19; // eax
  LPVOID ppv; // [esp+10h] [ebp-60h] BYREF
  __int16 v21[2]; // [esp+14h] [ebp-5Ch] BYREF
  int v22; // [esp+18h] [ebp-58h]
  int v23; // [esp+1Ch] [ebp-54h]
  int v24[2]; // [esp+20h] [ebp-50h]
  int v25[2]; // [esp+28h] [ebp-48h]
  double v26; // [esp+30h] [ebp-40h]
  _DWORD v27[2]; // [esp+3Ch] [ebp-34h] BYREF
  int v28; // [esp+44h] [ebp-2Ch]
  double v29[2]; // [esp+48h] [ebp-28h] BYREF
  _QWORD v30[3]; // [esp+58h] [ebp-18h] BYREF

  v7 = this->q10C; /*0x46b323*/
  v8 = (_DWORD *)(*(int (__thiscall **)(int, double *))(*(_DWORD *)v7 + 72))(v7, v29); /*0x46b32e*/
  LOWORD(ppv) = *v8 / 256; /*0x46b341*/
  HIWORD(ppv) = v8[1] / 256; /*0x46b35a*/
  *(_DWORD *)v21 = ppv; /*0x46b367*/
  LODWORD(v26) = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v21); /*0x46b376*/
  ppv = 0; /*0x46b385*/
  v9 = (_DWORD *)*((_DWORD *)g_WeaponTypeConfig + SuperWeaponClass::FindByName((SuperWeaponClass *)&stru_81AF8C.?)); /*0x46b38d*/
  v10 = v9[40]; /*0x46b399*/
  v11 = v9[43]; /*0x46b39f*/
  v22 = v9[42]; /*0x46b3a5*/
  v25[0] = v10; /*0x46b3ad*/
  v12 = v9[41]; /*0x46b3b1*/
  v23 = v11; /*0x46b3bd*/
  v13 = this->q0B0; /*0x46b3c1*/
  v24[0] = v12; /*0x46b3d0*/
  v24[1] = v13; /*0x46b3d4*/
  result = CoCreateInstance(&rclsid, 0, 7u, &IID_IUnknown, &ppv); /*0x46b3d8*/
  if ( result >= 0 ) /*0x46b3e0*/
  {
    v15 = ppv; /*0x46b406*/
    result = Particle::Init((int *)ppv, v25[0], v7, v24[1], v24[0], v23, v22, 1); /*0x46b408*/
    if ( v15 ) /*0x46b40f*/
    {
      (*(void (__thiscall **)(_DWORD *))(*v15 + 212))(v15); /*0x46b419*/
      v16 = LODWORD(v26); /*0x46b41f*/
      v15[76] = v9; /*0x46b423*/
      v17 = (_DWORD *)(*(int (__thiscall **)(int, double *))(*(_DWORD *)v16 + 72))(v16, v29); /*0x46b430*/
      v18 = this->u32_130; /*0x46b435*/
      v27[0] = *v17; /*0x46b447*/
      v27[1] = v17[1]; /*0x46b44e*/
      v28 = v17[2]; /*0x46b455*/
      v28 += *(_DWORD *)(*(_DWORD *)(v18 + 160) + 700); /*0x46b46f*/
      Math::SinCos(1.570748388432313); /*0x46b473*/
      v26 = v1; /*0x46b478*/
      Math::ArcTan2(1.570748388432313); /*0x46b486*/
      v26 = v2 * v26 * -1.0; /*0x46b49f*/
      Math::ArcTan2(1.570748388432313); /*0x46b4a3*/
      *(double *)v25 = v3; /*0x46b4a8*/
      Math::ArcTan2(1.570748388432313); /*0x46b4b6*/
      v29[1] = v26; /*0x46b4c7*/
      *(double *)&v30[1] = v26; /*0x46b4e3*/
      v29[0] = v4 * *(double *)v25 * -1.0; /*0x46b4ea*/
      *(double *)v30 = v29[0]; /*0x46b4f6*/
      Math::SinCos(1.570748388432313); /*0x46b50f*/
      v19 = *v15; /*0x46b51a*/
      *(double *)&v30[2] = v5 * -1.0; /*0x46b529*/
      return (*(int (__thiscall **)(_DWORD *, _DWORD *, _QWORD *))(v19 + 496))(v15, v27, v30); /*0x46b52f*/
    }
  }
  return result; /*0x46b535*/
}



// ==== 0x0046B540  BulletClass::MissionStubReturnZero  this=BulletClass  sig=csp ====
int BulletClass::MissionStubReturnZero(BulletClass *this)
{
  return 352; /*0x46b545*/
}



// ==== 0x0046B550  BulletClass::MissionStubReturnZero2  this=BulletClass  sig=csp ====
int BulletClass::MissionStubReturnZero2(BulletClass *this)
{
  return 8; /*0x46b555*/
}



// ==== 0x0046B560  BulletClass::PowerDrainProcess  this=BulletClass  sig=csp ====
int __stdcall BulletClass::PowerDrainProcess(BulletClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x46b566*/
    return -2147467261; /*0x46b568*/
  *a2 = 237448649; /*0x46b576*/
  a2[1] = 298949647; /*0x46b57e*/
  a2[2] = -1610610249; /*0x46b587*/
  a2[3] = unk_7E96EC; /*0x46b590*/
  return 0; /*0x46b56d*/
}



// ==== 0x0046B5A0  BulletClass::CheckEndOfSequence  this=BulletClass  sig=csp ====
int __thiscall BulletClass::CheckEndOfSequence(BulletClass *this, int a2)
{
  this->BulletClass_field_0x10C = (void *)a2; /*0x46b5a4*/
  return a2; /*0x46b5aa*/
}



// ==== 0x0046B5B0  BulletClass::CheckMissionAbort  this=BulletClass  sig=csp ====
int __thiscall BulletClass::CheckMissionAbort(BulletClass *this)
{
  return (int)this->BulletClass_field_0xAC; /*0x46b5b6*/
}



// ==== 0x0046B5C0  BulletClass::CheckActionStatus  this=BulletClass  sig=csp ====
void *__thiscall BulletClass::CheckActionStatus(BulletClass *this, char a2)
{
  BulletClass::Dtor(this); /*0x46b5c3*/
  if ( (a2 & 1) != 0 ) /*0x46b5cd*/
    __3_YAXPAX_Z(this); /*0x46b5d0*/
  return this; /*0x46b5da*/
}



// ==== 0x0046B5E0  VectorClass_ptr_BulletClass::Destroy  this=VectorClass_ptr_BulletClass  sig=csp ====
void __thiscall VectorClass_ptr_BulletClass::Destroy(VectorClass_ptr_BulletClass *this)
{
  void *Items; // eax

  Items = this->Items; /*0x46b5e6*/
  this->Count = 0; /*0x46b5e9*/
  if ( Items && this->IsAllocated ) /*0x46b5f0*/
  {
    __3_YAXPAX_Z(Items); /*0x46b5f6*/
    this->Items = 0; /*0x46b5fe*/
  }
  this->IsAllocated = 0; /*0x46b601*/
  this->Capacity = 0; /*0x46b604*/
}



// ==== 0x0046B610  VectorClass_ptr_BulletClass::GetItemIndex  this=VectorClass_ptr_BulletClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_BulletClass::GetItemIndex(VectorClass_ptr_BulletClass *this, int a2)
{
  if ( this->IsInitialized ) /*0x46b610*/
    return (a2 - (unsigned int)this->Items) >> 2; /*0x46b625*/
  else
    return 0; /*0x46b617*/
}



// ==== 0x0046B630  _VectorClass_PAVBulletClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_BulletClass::Get(_VectorClass_PAVBulletClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x46b63a*/
}



// ==== 0x0046B640  Timer::Start  this=Timer  sig=csp ====
_DWORD *__thiscall Timer::Start(Timer *this, int a2)
{
  *(_DWORD *)this->__pad_0 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x46b64c*/
  *(_DWORD *)&this->__pad_6[2] = a2; /*0x46b64e*/
  return this->__pad_0; /*0x46b651*/
}



// ==== 0x0046B660  _VectorClass_PAVBulletClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_BulletClass::Add(_VectorClass_PAVBulletClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x46b662*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x46b66d*/
  {
    v3 = 0; /*0x46b66f*/
    if ( m_8 <= 0 ) /*0x46b673*/
      return 1; /*0x46b693*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x46b675*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x46b67b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x46b684*/
    {
      ++v3; /*0x46b686*/
      ++v4; /*0x46b687*/
      if ( v3 >= m_8 ) /*0x46b68c*/
        return 1; /*0x46b68c*/
    }
  }
  return 0; /*0x46b68e*/
}



// ==== 0x0046B6A0  _VectorClass_PAVBulletClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_BulletClass::Release(_VectorClass_PAVBulletClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x46b6ac*/
  {
    LOBYTE(this->m_C) = 0; /*0x46b6b6*/
    if ( a3 ) /*0x46b6bc*/
      v4 = a3; /*0x46b6d2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x46b6ce*/
    LOBYTE(this->m_C) = 1; /*0x46b6d6*/
    if ( v4 ) /*0x46b6da*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x46b6e5*/
      {
        m_8 = this->m_8; /*0x46b6ec*/
        if ( a2 < m_8 ) /*0x46b6f1*/
          m_8 = a2; /*0x46b6f3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x46b6f9*/
          ++i; /*0x46b6fe*/
        if ( BYTE1(this->m_C) ) /*0x46b70b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x46b716*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x46b71e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x46b727*/
      this->m_8 = a2; /*0x46b72f*/
      BYTE1(this->m_C) = a3 == 0; /*0x46b732*/
      return 1; /*0x46b738*/
    }
    else
    {
      return 0; /*0x46b6df*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVBulletClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x46b742*/
    return 1; /*0x46b748*/
  }
}



// ==== 0x0046B750  _VectorClass_PAVBulletClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_BulletClass::Remove(_VectorClass_PAVBulletClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x46b75d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x46b763*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x46b76b*/
  }
  BYTE1(this->m_C) = 0; /*0x46b76e*/
  this->m_8 = 0; /*0x46b771*/
}



// ==== 0x0046B780  _VectorClass_PAVBulletClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_BulletClass::GetSize(_VectorClass_PAVBulletClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x46b780*/
    return 0; /*0x46b788*/
  m_8 = this->m_8; /*0x46b78e*/
  result = 0; /*0x46b791*/
  if ( m_8 <= 0 ) /*0x46b795*/
    return -1; /*0x46b7ac*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x46b79b*/
  {
    if ( ++result >= m_8 ) /*0x46b7aa*/
      return -1; /*0x46b7aa*/
  }
  return result; /*0x46b78a*/
}



// ==== 0x0046B7C0  _VectorClass_PAVBulletClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_BulletClass::GetCapacity(_VectorClass_PAVBulletClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x46b7c0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x46b7d5*/
  else
    return 0; /*0x46b7c7*/
}



// ==== 0x0046B7E0  VectorClass_ptr_BulletClass::SetCapacity  this=VectorClass_ptr_BulletClass  sig=csp ====
char __thiscall VectorClass_ptr_BulletClass::SetCapacity(VectorClass_ptr_BulletClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  void *Capacity; // ecx
  int i; // eax
  void *v7; // eax

  if ( a2 ) /*0x46b7ec*/
  {
    this->IsInitialized = 0; /*0x46b7f2*/
    if ( a3 ) /*0x46b7f8*/
      v4 = a3; /*0x46b80e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x46b80a*/
    this->IsInitialized = 1; /*0x46b812*/
    if ( !v4 ) /*0x46b816*/
      return 0; /*0x46b88a*/
    if ( this->Items ) /*0x46b818*/
    {
      Capacity = this->Capacity; /*0x46b81f*/
      if ( a2 < (int)Capacity ) /*0x46b824*/
        Capacity = (void *)a2; /*0x46b826*/
      for ( i = 0; i < (int)Capacity; v4[i - 1] = *((_DWORD *)this->Items + i - 1) ) /*0x46b82c*/
        ++i; /*0x46b831*/
      if ( this->IsAllocated ) /*0x46b83e*/
      {
        __3_YAXPAX_Z(this->Items); /*0x46b849*/
        this->Items = 0; /*0x46b851*/
      }
    }
    this->Items = v4; /*0x46b85a*/
    this->Capacity = (void *)a2; /*0x46b862*/
    this->IsAllocated = a3 == 0; /*0x46b865*/
  }
  else
  {
    (*(void (__thiscall **)(VectorClass_ptr_BulletClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x46b86e*/
  }
  v7 = this->Capacity; /*0x46b871*/
  if ( (int)v7 < (int)this->Count ) /*0x46b879*/
    this->Count = v7; /*0x46b87b*/
  return 1; /*0x46b87e*/
}



// ==== 0x0046B890  VectorClass_ptr_BulletClass::FindItemIndex  this=VectorClass_ptr_BulletClass  sig=csp ====
int __thiscall VectorClass_ptr_BulletClass::FindItemIndex(VectorClass_ptr_BulletClass *this, _DWORD *a2)
{
  void *Count; // edx
  int result; // eax
  _DWORD *i; // ecx

  Count = this->Count; /*0x46b890*/
  result = 0; /*0x46b893*/
  if ( (int)Count <= 0 ) /*0x46b898*/
    return -1; /*0x46b8af*/
  for ( i = this->Items; *i != *a2; ++i ) /*0x46b89e*/
  {
    if ( ++result >= (int)Count ) /*0x46b8ad*/
      return -1; /*0x46b8ad*/
  }
  return result; /*0x46b8b2*/
}



// ==== 0x0046B8C0  _VectorClass_PAVBulletClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_BulletClass::QueryInterface(_VectorClass_PAVBulletClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x46b8c3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<BulletClass *>::`vftable'; /*0x46b8c6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x46b8d0*/
  {
    __3_YAXPAX_Z(v3); /*0x46b8d8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x46b8e0*/
  }
  BYTE1(this->m_C) = 0; /*0x46b8eb*/
  this->m_8 = 0; /*0x46b8f1*/
  if ( (a2 & 1) != 0 ) /*0x46b8f8*/
    __3_YAXPAX_Z(this); /*0x46b8fb*/
  return this->__pad_0; /*0x46b905*/
}



// ==== 0x0046B960  BulletClass::AddVector3  this=BulletClass  sig=csp ====
double *__thiscall sub_46B960(double *this, double *a2)
{
  *this = *a2 + *this; /*0x46b96a*/
  this->vtable2 = a2[1] + this->vtable2; /*0x46b972*/
  this->vtable3 = a2[2] + this->vtable3; /*0x46b97b*/
  return this; /*0x46b97e*/
}



// ==== 0x0046B990  VectorClass_ptr_BulletClass::GetItem  this=VectorClass_ptr_BulletClass  sig=csp ====
LONG __stdcall VectorClass_ptr_BulletClass::sub_46B990(int a1)
{
  return BulletClass::CheckTargetValidity(a1 - 4);
}



// ==== 0x0046B9A0  VectorClass_ptr_BulletClass::GetItem_0  this=VectorClass_ptr_BulletClass  sig=csp ====
LONG __stdcall VectorClass_ptr_BulletClass::sub_46B9A0(int a1)
{
  return BulletClass::ValidateTarget((volatile LONG *)(a1 - 4));
}



// ==== 0x0046B9B0  sub_46B9B0  this=-  sig=ida-proto ====
int sub_46B9B0()
{
  dword_89DE80 = 0; /*0x46b9b2*/
  dword_89DE84 = 0; /*0x46b9b7*/
  dword_89DE88 = 0; /*0x46b9bc*/
  dword_89DE8C = 0; /*0x46b9c1*/
  return 0; /*0x46b9c6*/
}



// ==== 0x0046B9D0  sub_46B9D0  this=-  sig=ida-proto ====
void sub_46B9D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x46b9dc*/
  dbl_89DE98 = Math::Sqrt(v0 + v0); /*0x46b9ee*/
}



// ==== 0x0046BA00  sub_46BA00  this=-  sig=ida-proto ====
void sub_46BA00()
{
  dbl_89DEE8 = dbl_89DE98 / 60.0; /*0x46ba0c*/
}



// ==== 0x0046BA20  sub_46BA20  this=-  sig=ida-proto ====
void sub_46BA20()
{
  dbl_89DED0 = 1.0 / dbl_89DEE8; /*0x46ba2c*/
}



// ==== 0x0046BA40  sub_46BA40  this=-  sig=ida-proto ====
void sub_46BA40()
{
  dbl_89DEC8 = 0.0174532925199433 * 45.0; /*0x46ba4c*/
}



// ==== 0x0046BA60  sub_46BA60  this=-  sig=ida-proto ====
void sub_46BA60()
{
  dbl_89DEA0 = 0.0174532925199433 * 60.0; /*0x46ba6c*/
}



// ==== 0x0046BA80  sub_46BA80  this=-  sig=ida-proto ====
void sub_46BA80()
{
  dbl_89DE78 = 0.0174532925199433 * 90.0; /*0x46ba8c*/
}



// ==== 0x0046BAA0  sub_46BAA0  this=-  sig=ida-proto ====
__int64 sub_46BAA0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89DE78 - dbl_89DEA0); /*0x46bab2*/
  result = Math::RoundToInt(v0 * dbl_89DE98 * 0.5); /*0x46bac6*/
  dword_89DEF0 = result; /*0x46bacb*/
  return result; /*0x46bad0*/
}



// ==== 0x0046BAE0  sub_46BAE0  this=-  sig=ida-proto ====
void sub_46BAE0()
{
  dbl_89DEA8 = Math::ArcTan((double)dword_89DEF0 * 0.00390625); /*0x46baf7*/
}



// ==== 0x0046BB10  sub_46BB10  this=-  sig=ida-proto ====
void sub_46BB10()
{
  dbl_89DEC0 = Math::ArcTan((double)(2 * dword_89DEF0) / dbl_89DE98); /*0x46bb32*/
}



// ==== 0x0046BB40  sub_46BB40  this=-  sig=ida-proto ====
__int64 sub_46BB40()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89DEF0) + 0.5); /*0x46bb5b*/
  dword_89DEE4 = result; /*0x46bb60*/
  return result; /*0x46bb66*/
}



// ==== 0x0046BB70  sub_46BB70  this=-  sig=ida-proto ====
int sub_46BB70()
{
  word_89DE90 = 0; /*0x46bb72*/
  word_89DE92 = 0; /*0x46bb78*/
  return 0; /*0x46bb7e*/
}



// ==== 0x0046BB80  sub_46BB80  this=-  sig=ida-proto ====
int sub_46BB80()
{
  dword_89DEB0 = 0; /*0x46bb82*/
  dword_89DEB4 = 0; /*0x46bb87*/
  dword_89DEB8 = 0; /*0x46bb8c*/
  return 0; /*0x46bb91*/
}



// ==== 0x0046BBA0  sub_46BBA0  this=-  sig=ida-proto ====
int sub_46BBA0()
{
  dword_89DEE0 = 0; /*0x46bba5*/
  dword_89DED8 = 128; /*0x46bbaf*/
  dword_89DEDC = 128; /*0x46bbb4*/
  return 128; /*0x46bbb9*/
}



// ==== 0x0046BBC0  BulletTypeClass::Construct  this=BulletTypeClass  sig=csp ====
_BYTE *__thiscall BulletTypeClass::Construct(BulletTypeClass *this, char *Source)
{
  int v3; // eax
  int v4; // eax

  ObjectTypeClass::ConstructFull((int *)this, Source); /*0x46bbc9*/
  this->airburst = 0; /*0x46bbd5*/
  this->floater = 0; /*0x46bbdb*/
  this->subjectToCliffs = 0; /*0x46bbe1*/
  this->subjectToElevation = 0; /*0x46bbe7*/
  this->subjectToWalls = 0; /*0x46bbed*/
  this->veryHigh = 0; /*0x46bbf3*/
  this->shadow = 1; /*0x46bbf9*/
  this->arcing = 0; /*0x46bc00*/
  this->dropping = 0; /*0x46bc06*/
  this->level = 0; /*0x46bc0c*/
  this->inviso = 0; /*0x46bc12*/
  this->proximity = 0; /*0x46bc18*/
  this->ranged = 0; /*0x46bc1e*/
  this->noRotate = 1; /*0x46bc24*/
  this->inaccurate = 0; /*0x46bc2b*/
  this->flakScatter = 0; /*0x46bc31*/
  this->AA = 0; /*0x46bc37*/
  this->q2A5 = 1; /*0x46bc3d*/
  this->TurretVoxel = 3; /*0x46bc44*/
  this->q0B9 = 3; /*0x46bc4a*/
  this->degenerates = 0; /*0x46bc50*/
  this->bouncy = 0; /*0x46bc59*/
  this->animPalette = 0; /*0x46bc5f*/
  this->elasticity = 0; /*0x46bc65*/
  this->firersPalette = 0; /*0x46bc6c*/
  this->q0AB = 1; /*0x46bc72*/
  this->AlphaImage = 0; /*0x46bc7c*/
  this->shrapnelWeapon = 0; /*0x46bc82*/
  this->shrapnelCount = 0; /*0x46bc88*/
  this->detonationAltitude = 0; /*0x46bc8e*/
  this->vertical = 0; /*0x46bc94*/
  this->Acceleration = 1072168960; /*0x46bc9a*/
  this->Color = 0; /*0x46bca4*/
  this->trailer = 0; /*0x46bcaa*/
  this->rot = 0; /*0x46bcb0*/
  this->BarrelVoxel = 0; /*0x46bcb6*/
  this->scaledSpawnDelay = 0; /*0x46bcbc*/
  this->scalable = 0; /*0x46bcc2*/
  this->ChargerTurrets = 0; /*0x46bcc8*/
  this->animLow = 0; /*0x46bcce*/
  this->animHigh = 0; /*0x46bcd4*/
  this->animRate = 0; /*0x46bcda*/
  this->flat = 0; /*0x46bce0*/
  *(_DWORD *)this->ObjectTypeClass = &BulletTypeClass::`vftable'; /*0x46bce6*/
  *(_DWORD *)&this->ObjectTypeClass[4] = &BulletTypeClass::`vftable'; /*0x46bcec*/
  *(_DWORD *)&this->ObjectTypeClass[8] = &BulletTypeClass::`vftable'; /*0x46bcf2*/
  *(_DWORD *)&this->ObjectTypeClass[12] = &BulletTypeClass::`vftable'; /*0x46bcf9*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->ObjectTypeClass[4]); /*0x46bd00*/
  this->q234 = 1; /*0x46bd05*/
  this->q22F = 1; /*0x46bd0c*/
  this->q230 = 0; /*0x46bd13*/
  this->q231 = 0; /*0x46bd19*/
  this->q232 = 1; /*0x46bd1f*/
  this->q233 = 1; /*0x46bd26*/
  this->q235 = 0; /*0x46bd2d*/
  if ( dword_A83C90 < dword_A83C88 /*0x46bd65*/
    || (byte_A83C8D || !dword_A83C88)
    && dword_A83C94 > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A83C80 + 8))(
         &dword_A83C80,
         dword_A83C88 + dword_A83C94,
         0) )
  {
    v3 = dword_A83C90++; /*0x46bd72*/
    *((_DWORD *)dword_A83C84 + v3) = this; /*0x46bd81*/
  }
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x46bdb8*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v4 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x46bdc5*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4) = this; /*0x46bdd4*/
  }
  return this->ObjectTypeClass; /*0x46bdd9*/
}



// ==== 0x0046BEE0  BulletTypeClass::LoadFromINI  this=BulletTypeClass  sig=csp ====
char __userpurge BulletTypeClass::LoadFromINI@<al>(BulletTypeClass *this, double a2@<st0>, unsigned __int8 ***a3)
{
  int v3; // ecx
  int v4; // esi
  char Bool_Overwrite; // al
  char v7; // cl
  char v8; // al
  char v9; // al
  char v10; // cl
  char v11; // al
  char v12; // al
  char v13; // cl
  char v14; // al
  char v15; // al
  char v16; // cl
  char v17; // al
  char v18; // dl
  char v19; // al
  char v20; // cl
  char v21; // al
  _DWORD *v22; // eax
  char v23; // al
  int v24; // eax
  int v25; // eax
  int Int_Overwrite; // eax
  char v27; // cl
  char v28; // al
  char v29; // al
  int v30; // edx
  char v32; // [esp-Ch] [ebp-98h]
  char v33; // [esp-Ch] [ebp-98h]
  char v34; // [esp-Ch] [ebp-98h]
  int v35; // [esp-Ch] [ebp-98h]
  char v36; // [esp-Ch] [ebp-98h]
  int v37; // [esp-Ch] [ebp-98h]
  char v38; // [esp-Ch] [ebp-98h]
  _DWORD *v39; // [esp+8h] [ebp-84h]
  int v40; // [esp+8h] [ebp-84h]
  int v41; // [esp+8h] [ebp-84h]
  char Destination[128]; // [esp+Ch] [ebp-80h] BYREF

  v4 = v3; /*0x46beef*/
  INIClass::ResetSection((INIClass *)this); /*0x46bef3*/
  if ( !ObjectTypeClass::LoadFromINI((ObjectTypeClass *)v4, (unsigned __int8 ***)this) ) /*0x46befb*/
    return 0; /*0x46c42a*/
  *(_DWORD *)(v4 + 752) = INIClass::ReadInt_Overwrite( /*0x46bf21*/
                            this->ObjectTypeClass,
                            (unsigned __int8 *)(v4 + 36),
                            (unsigned __int8 *)&stru_81AF8C.?[143],
                            *(_DWORD *)(v4 + 752));
  *(_DWORD *)(v4 + 732) = INIClass::ReadInt_Overwrite( /*0x46bf3b*/
                            this->ObjectTypeClass,
                            (unsigned __int8 *)(v4 + 36),
                            (unsigned __int8 *)&stru_81AF8C.?[139],
                            *(_DWORD *)(v4 + 732));
  *(_DWORD *)(v4 + 736) = INIClass::ReadInt_Overwrite( /*0x46bf55*/
                            this->ObjectTypeClass,
                            (unsigned __int8 *)(v4 + 36),
                            (unsigned __int8 *)&stru_81AF8C.?[119],
                            *(_DWORD *)(v4 + 736));
  INIClass::ReadDouble_Overwrite( /*0x46bf71*/
    (double *)this->ObjectTypeClass,
    (unsigned __int8 *)(v4 + 36),
    g_INI_Key_Elasticity,
    *(double *)(v4 + 712));
  __asm { fstp qword ptr [esi+2C8h] } /*0x46bf76*/
  *(double *)(v4 + 712) = _RT1; /*0x46bf76*/
  *(_DWORD *)(v4 + 720) = INIClass::ReadInt_Overwrite( /*0x46bf90*/
                            this->ObjectTypeClass,
                            (unsigned __int8 *)(v4 + 36),
                            (unsigned __int8 *)&stru_81AF8C.?[103],
                            *(_DWORD *)(v4 + 720));
  *(_DWORD *)(v4 + 724) = BuildingTypeClass::FindAnimByName( /*0x46bfaa*/
                            (BuildingTypeClass *)this,
                            (unsigned __int8 *)(v4 + 36),
                            (unsigned __int8 *)&stru_81AF8C.?[95],
                            *(_DWORD *)(v4 + 724));
  *(_BYTE *)(v4 + 667) = INIClass::ReadBool_Overwrite( /*0x46bfc4*/
                           (int *)this,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&stru_81AF8C.?[87],
                           *(_BYTE *)(v4 + 667));
  *(_BYTE *)(v4 + 661) = INIClass::ReadBool_Overwrite( /*0x46bfde*/
                           (int *)this,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&stru_81AF8C.?[79],
                           *(_BYTE *)(v4 + 661));
  *(_BYTE *)(v4 + 662) = INIClass::ReadBool_Overwrite( /*0x46bff8*/
                           (int *)this,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&stru_81AF8C.?[63],
                           *(_BYTE *)(v4 + 662));
  *(_BYTE *)(v4 + 663) = INIClass::ReadBool_Overwrite( /*0x46c012*/
                           (int *)this,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&stru_81AF8C.?[43],
                           *(_BYTE *)(v4 + 663));
  *(_BYTE *)(v4 + 664) = INIClass::ReadBool_Overwrite( /*0x46c02c*/
                           (int *)this,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&stru_81AF8C.?[27],
                           *(_BYTE *)(v4 + 664));
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x46c041*/
                     (int *)this,
                     (unsigned __int8 *)(v4 + 36),
                     (unsigned __int8 *)&stru_81AF8C.?[15],
                     *(_BYTE *)(v4 + 665));
  v7 = *(_BYTE *)(v4 + 666); /*0x46c046*/
  *(_BYTE *)(v4 + 665) = Bool_Overwrite; /*0x46c04c*/
  v8 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aShadow, v7); /*0x46c05b*/
  v32 = *(_BYTE *)(v4 + 668); /*0x46c068*/
  *(_BYTE *)(v4 + 666) = v8; /*0x46c06f*/
  *(_BYTE *)(v4 + 668) = INIClass::ReadBool_Overwrite( /*0x46c07a*/
                           (int *)this,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&stru_81AF8C.?[3],
                           v32);
  v9 = INIClass::ReadBool_Overwrite( /*0x46c08f*/
         (int *)this,
         (unsigned __int8 *)(v4 + 36),
         (unsigned __int8 *)&stru_81AF8C.?[17],
         *(_BYTE *)(v4 + 669));
  v10 = *(_BYTE *)(v4 + 670); /*0x46c094*/
  *(_BYTE *)(v4 + 669) = v9; /*0x46c09a*/
  v11 = INIClass::ReadBool_Overwrite( /*0x46c0a9*/
          (int *)this,
          (unsigned __int8 *)(v4 + 36),
          (unsigned __int8 *)&stru_81AF8C.?[15],
          v10);
  v33 = *(_BYTE *)(v4 + 671); /*0x46c0b6*/
  *(_BYTE *)(v4 + 670) = v11; /*0x46c0bd*/
  *(_BYTE *)(v4 + 671) = INIClass::ReadBool_Overwrite( /*0x46c0c8*/
                           (int *)this,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&stru_81AF8C.?[12],
                           v33);
  v12 = INIClass::ReadBool_Overwrite( /*0x46c0dd*/
          (int *)this,
          (unsigned __int8 *)(v4 + 36),
          (unsigned __int8 *)&stru_81AF8C.?[10],
          *(_BYTE *)(v4 + 672));
  v13 = *(_BYTE *)(v4 + 674); /*0x46c0e2*/
  *(_BYTE *)(v4 + 672) = v12; /*0x46c0e8*/
  v14 = INIClass::ReadBool_Overwrite( /*0x46c0f7*/
          (int *)this,
          (unsigned __int8 *)(v4 + 36),
          (unsigned __int8 *)&stru_81AF8C.?[7],
          v13);
  v34 = *(_BYTE *)(v4 + 675); /*0x46c104*/
  *(_BYTE *)(v4 + 674) = v14; /*0x46c10b*/
  *(_BYTE *)(v4 + 675) = INIClass::ReadBool_Overwrite( /*0x46c116*/
                           (int *)this,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&stru_81AF8C.?[4],
                           v34);
  v15 = INIClass::ReadBool_Overwrite( /*0x46c12b*/
          (int *)this,
          (unsigned __int8 *)(v4 + 36),
          (unsigned __int8 *)&stru_81AF8C.?[3],
          *(_BYTE *)(v4 + 676));
  v16 = *(_BYTE *)(v4 + 677); /*0x46c130*/
  *(_BYTE *)(v4 + 676) = v15; /*0x46c136*/
  v17 = INIClass::ReadBool_Overwrite( /*0x46c145*/
          (int *)this,
          (unsigned __int8 *)(v4 + 36),
          (unsigned __int8 *)&stru_81AF8C.?[2],
          v16);
  v18 = *(_BYTE *)(v4 + 678); /*0x46c14a*/
  *(_BYTE *)(v4 + 677) = v17; /*0x46c150*/
  *(_BYTE *)(v4 + 678) = INIClass::ReadBool_Overwrite( /*0x46c164*/
                           (int *)this,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&stru_81AF8C.?[17],
                           v18);
  v19 = INIClass::ReadBool_Overwrite( /*0x46c179*/
          (int *)this,
          (unsigned __int8 *)(v4 + 36),
          (unsigned __int8 *)&stru_81AF8C.?[15],
          *(_BYTE *)(v4 + 679));
  v20 = *(_BYTE *)(v4 + 660); /*0x46c17e*/
  *(_BYTE *)(v4 + 679) = v19; /*0x46c184*/
  v21 = INIClass::ReadBool_Overwrite( /*0x46c193*/
          (int *)this,
          (unsigned __int8 *)(v4 + 36),
          (unsigned __int8 *)&stru_81AF8C.?[12],
          v20);
  v35 = *(_DWORD *)(v4 + 684); /*0x46c1a0*/
  *(_BYTE *)(v4 + 660) = v21; /*0x46c1a7*/
  *(_DWORD *)(v4 + 684) = INIClass::ReadInt_Overwrite( /*0x46c1b2*/
                            this->ObjectTypeClass,
                            (unsigned __int8 *)(v4 + 36),
                            (unsigned __int8 *)&stru_81AF8C.?[10],
                            v35);
  *(_BYTE *)(v4 + 748) = INIClass::ReadBool_Overwrite( /*0x46c1e2*/
                           (int *)this,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&stru_81AF8C.?[7],
                           *(_BYTE *)(v4 + 748));
  if ( INIClass::GetString( /*0x46c1ef*/
         (INIClass *)this,
         (unsigned __int8 *)(v4 + 36),
         (unsigned __int8 *)g_INI_Key_Image,
         &g_INI_DefaultBuffer,
         (char *)(v4 + 504),
         25) > 0 )
  {
    v39 = *(_DWORD **)(v4 + 728); /*0x46c20a*/
    if ( INIClass::GetString( /*0x46c219*/
           (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
           (unsigned __int8 *)(v4 + 504),
           aTrailer,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {
      v22 = AnimTypeClass::FindOrCreate(Destination); /*0x46c226*/
    }
    else
    {
      v22 = v39; /*0x46c22d*/
    }
    *(_DWORD *)(v4 + 728) = v22; /*0x46c231*/
    *(_DWORD *)(v4 + 740) = INIClass::ReadInt_Overwrite( /*0x46c24e*/
                              (bool *)&DSurface_ViewBounds.__pad_FC[228],
                              (unsigned __int8 *)(v4 + 504),
                              aSpawndelay,
                              *(_DWORD *)(v4 + 740));
    v23 = INIClass::ReadBool_Overwrite( /*0x46c26b*/
            (int *)&DSurface_ViewBounds.__pad_FC[228],
            (unsigned __int8 *)(v4 + 504),
            (unsigned __int8 *)&stru_81AF8C.?[5],
            *(_BYTE *)(v4 + 673) == 0);
    v36 = *(_BYTE *)(v4 + 759); /*0x46c27d*/
    *(_BYTE *)(v4 + 673) = v23 == 0; /*0x46c287*/
    *(_BYTE *)(v4 + 759) = INIClass::ReadBool_Overwrite( /*0x46c292*/
                             (int *)&DSurface_ViewBounds.__pad_FC[228],
                             (unsigned __int8 *)(v4 + 504),
                             g_INI_Key_Flat,
                             v36);
  }
  v40 = *(_DWORD *)(v4 + 688); /*0x46c2ad*/
  if ( INIClass::GetString( /*0x46c2b9*/
         (INIClass *)this,
         (unsigned __int8 *)(v4 + 36),
         (unsigned __int8 *)&stru_81AF8C.?[1],
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v24 = InfantryTypeClass::Find(Destination); /*0x46c2c6*/
  }
  else
  {
    v24 = v40; /*0x46c2cd*/
  }
  *(_DWORD *)(v4 + 688) = v24; /*0x46c2db*/
  v41 = *(_DWORD *)(v4 + 692); /*0x46c2f4*/
  if ( INIClass::GetString( /*0x46c2f8*/
         (INIClass *)this,
         (unsigned __int8 *)(v4 + 36),
         (unsigned __int8 *)stru_81AF8C.?,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v25 = InfantryTypeClass::Find(Destination); /*0x46c305*/
  }
  else
  {
    v25 = v41; /*0x46c30c*/
  }
  v37 = *(_DWORD *)(v4 + 696); /*0x46c318*/
  *(_DWORD *)(v4 + 692) = v25; /*0x46c31f*/
  *(_DWORD *)(v4 + 696) = INIClass::ReadInt_Overwrite( /*0x46c32a*/
                            this->ObjectTypeClass,
                            (unsigned __int8 *)(v4 + 36),
                            (unsigned __int8 *)&stru_81AF8C.?,
                            v37);
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x46c33f*/
                    this->ObjectTypeClass,
                    (unsigned __int8 *)(v4 + 36),
                    (unsigned __int8 *)&stru_81AF8C.?[40],
                    *(_DWORD *)(v4 + 700));
  v27 = *(_BYTE *)(v4 + 704); /*0x46c344*/
  *(_DWORD *)(v4 + 700) = Int_Overwrite; /*0x46c34a*/
  v28 = INIClass::ReadBool_Overwrite( /*0x46c359*/
          (int *)this,
          (unsigned __int8 *)(v4 + 36),
          (unsigned __int8 *)&stru_81AF8C.?[28],
          v27);
  v38 = *(_BYTE *)(v4 + 681); /*0x46c366*/
  *(_BYTE *)(v4 + 704) = v28; /*0x46c36d*/
  *(_BYTE *)(v4 + 681) = INIClass::ReadBool_Overwrite( /*0x46c378*/
                           (int *)this,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&stru_81AF8C.?[12],
                           v38);
  *(_BYTE *)(v4 + 756) = INIClass::ReadInt_Overwrite( /*0x46c399*/
                           (bool *)&DSurface_ViewBounds.__pad_FC[228],
                           (unsigned __int8 *)(v4 + 504),
                           (unsigned __int8 *)&stru_81AF8C.?[4],
                           *(unsigned __int8 *)(v4 + 756));
  v29 = INIClass::ReadInt_Overwrite( /*0x46c3b1*/
          (bool *)&DSurface_ViewBounds.__pad_FC[228],
          (unsigned __int8 *)(v4 + 504),
          (unsigned __int8 *)&stru_81AF8C.?[31],
          *(unsigned __int8 *)(v4 + 757));
  v30 = *(unsigned __int8 *)(v4 + 758); /*0x46c3bd*/
  *(_BYTE *)(v4 + 757) = v29; /*0x46c3c3*/
  *(_BYTE *)(v4 + 758) = INIClass::ReadInt_Overwrite( /*0x46c3d5*/
                           (bool *)&DSurface_ViewBounds.__pad_FC[228],
                           (unsigned __int8 *)(v4 + 504),
                           (unsigned __int8 *)&stru_81AF8C.?[19],
                           v30);
  *(_BYTE *)(v4 + 680) = INIClass::ReadBool_Overwrite( /*0x46c3f2*/
                           (int *)&DSurface_ViewBounds.__pad_FC[228],
                           (unsigned __int8 *)(v4 + 504),
                           (unsigned __int8 *)&stru_81AF8C.?[7],
                           *(_BYTE *)(v4 + 680));
  if ( !*(_BYTE *)(v4 + 670) ) /*0x46c3f8*/
    ObjectTypeClass::Load2DArt((char *)v4); /*0x46c406*/
  if ( *(_BYTE *)(v4 + 566) ) /*0x46c40b*/
    VoxelAnimType::LoadAnim((char *)v4); /*0x46c417*/
  return 1; /*0x46c41c*/
}



// ==== 0x0046C4F0  BulletTypeClass::GetROF  this=BulletTypeClass  sig=csp ====
_DWORD *__stdcall BulletTypeClass::GetROF(BulletTypeClass *this, int *a2)
{
  int GroundHeight; // eax
  int v3; // ecx
  int v5; // [esp+0h] [ebp-Ch] BYREF
  int v6; // [esp+4h] [ebp-8h]
  int v7; // [esp+8h] [ebp-4h]

  v5 = *a2; /*0x46c4f9*/
  v6 = a2[1]; /*0x46c50a*/
  v7 = a2[2]; /*0x46c511*/
  GroundHeight = Cell::GetGroundHeight(&v5); /*0x46c515*/
  v3 = v7; /*0x46c51a*/
  if ( v7 <= GroundHeight ) /*0x46c520*/
    v3 = Cell::GetGroundHeight(&v5) + 1; /*0x46c533*/
  *(_DWORD *)this->ObjectTypeClass = v5; /*0x46c53f*/
  *(_DWORD *)&this->ObjectTypeClass[4] = v6; /*0x46c545*/
  *(_DWORD *)&this->ObjectTypeClass[8] = v3; /*0x46c549*/
  return this->ObjectTypeClass; /*0x46c54c*/
}



// ==== 0x0046C560  BulletTypeClass::ProcessPower  this=BulletTypeClass  sig=csp ====
int __thiscall BulletTypeClass::ProcessPower(BulletTypeClass *this, int *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // edx

  v3 = AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x46c569*/
  LOBYTE(v3) = this->airburst; /*0x46c56e*/
  Power::FlagProcess((Power *)a2, v3); /*0x46c577*/
  LOBYTE(v4) = this->shadow; /*0x46c57c*/
  Power::FlagProcess((Power *)a2, v4); /*0x46c585*/
  LOBYTE(v5) = this->arcing; /*0x46c58a*/
  v6 = Power::FlagProcess((Power *)a2, v5); /*0x46c593*/
  LOBYTE(v6) = this->dropping; /*0x46c598*/
  Power::FlagProcess((Power *)a2, v6); /*0x46c5a1*/
  LOBYTE(v7) = this->level; /*0x46c5a6*/
  Power::FlagProcess((Power *)a2, v7); /*0x46c5af*/
  LOBYTE(v8) = this->inviso; /*0x46c5b4*/
  v9 = Power::FlagProcess((Power *)a2, v8); /*0x46c5bd*/
  LOBYTE(v9) = this->proximity; /*0x46c5c2*/
  Power::FlagProcess((Power *)a2, v9); /*0x46c5cb*/
  LOBYTE(v10) = this->ranged; /*0x46c5d0*/
  Power::FlagProcess((Power *)a2, v10); /*0x46c5d9*/
  LOBYTE(v11) = this->noRotate; /*0x46c5de*/
  v12 = Power::FlagProcess((Power *)a2, v11); /*0x46c5e7*/
  LOBYTE(v12) = this->inaccurate; /*0x46c5ec*/
  Power::FlagProcess((Power *)a2, v12); /*0x46c5f5*/
  LOBYTE(v13) = this->flakScatter; /*0x46c5fa*/
  Power::FlagProcess((Power *)a2, v13); /*0x46c603*/
  LOBYTE(v14) = this->AA; /*0x46c608*/
  v15 = Power::FlagProcess((Power *)a2, v14); /*0x46c611*/
  LOBYTE(v15) = this->q2A5; /*0x46c616*/
  Power::FlagProcess((Power *)a2, v15); /*0x46c61f*/
  LOBYTE(v16) = this->degenerates; /*0x46c624*/
  Power::FlagProcess((Power *)a2, v16); /*0x46c62d*/
  LOBYTE(v17) = this->bouncy; /*0x46c632*/
  Power::FlagProcess((Power *)a2, v17); /*0x46c63b*/
  Checksummer::Add_double((Checksummer *)a2, this->elasticity, this->Acceleration); /*0x46c650*/
  Power::TimerProcess(this->TurretVoxel); /*0x46c65e*/
  Power::TimerProcess(this->rot); /*0x46c66c*/
  Power::TimerProcess(this->ChargerTurrets); /*0x46c67a*/
  LOBYTE(v18) = this->flat; /*0x46c67f*/
  return Power::FlagProcess((Power *)a2, v18); /*0x46c68d*/
}



// ==== 0x0046C6A0  BulletTypeClass::SaveLoad_Prefix  this=BulletTypeClass  sig=csp ====
int __stdcall BulletTypeClass::SaveLoad_Prefix(BulletTypeClass *this, int a2)
{
  int result; // eax

  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)this, a2); /*0x46c6ab*/
  if ( result >= 0 ) /*0x46c6b2*/
  {
    if ( this ) /*0x46c6b6*/
    {
      ObjectTypeClass::Construct((ObjectTypeClass *)this, (int)&a2); /*0x46c6bf*/
      *(_DWORD *)this->ObjectTypeClass = &BulletTypeClass::`vftable'; /*0x46c6c4*/
      *(_DWORD *)&this->ObjectTypeClass[4] = &BulletTypeClass::`vftable'; /*0x46c6ca*/
      *(_DWORD *)&this->ObjectTypeClass[8] = &BulletTypeClass::`vftable'; /*0x46c6d1*/
      *(_DWORD *)&this->ObjectTypeClass[12] = &BulletTypeClass::`vftable'; /*0x46c6d8*/
    }
    VoxelAnimType::LoadAnim(this->ObjectTypeClass); /*0x46c6e1*/
    ObjectTypeClass::Load2DArt(this->ObjectTypeClass); /*0x46c6e8*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 182); /*0x46c6f9*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 172); /*0x46c70a*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 173); /*0x46c71b*/
    return 0; /*0x46c720*/
  }
  return result; /*0x46c722*/
}



// ==== 0x0046C730  BulletTypeClass::SaveLoad_Prefix_0  this=BulletTypeClass  sig=csp ====
int __stdcall BulletTypeClass::SaveLoad_Prefix_0(BulletTypeClass *this, int a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper((AbstractClass *)this, a2, a3); /*0x46c73f*/
  if ( result >= 0 ) /*0x46c746*/
    return 0; /*0x46c748*/
  return result; /*0x46c74a*/
}



// ==== 0x0046C750  BulletTypeClass::GetClassIdentifier  this=BulletTypeClass  sig=csp ====
int __stdcall BulletTypeClass::GetClassIdentifier(BulletTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x46c756*/
    return -2147467261; /*0x46c758*/
  *a2 = 1525862007; /*0x46c766*/
  a2[1] = 298976820; /*0x46c76e*/
  a2[2] = 1610654892; /*0x46c777*/
  a2[3] = unk_7E95DC; /*0x46c780*/
  return 0; /*0x46c75d*/
}



// ==== 0x0046C790  ObjectTypeClass::FindOrCreate  this=AbstractTypeClass  sig=csp ====
_BYTE *__thiscall ObjectTypeClass::FindOrCreate(char *Source)
{
  int v2; // esi
  BulletTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x46c7ac*/
    return 0; /*0x46c80f*/
  v2 = 0; /*0x46c7bd*/
  if ( dword_A83C90 <= 0 ) /*0x46c7c1*/
  {
LABEL_6:
    v3 = (BulletTypeClass *)__2_YAPAXI_Z(0x2F8u); /*0x46c7e6*/
    if ( v3 ) /*0x46c7f5*/
      return BulletTypeClass::Construct(v3, Source); /*0x46c801*/
    return 0; /*0x46c7f5*/
  }
  while ( _strcmpi((char *)(*((_DWORD *)dword_A83C84 + v2) + 36), Source) ) /*0x46c7da*/
  {
    if ( ++v2 >= dword_A83C90 ) /*0x46c7e4*/
      goto LABEL_6; /*0x46c7e4*/
  }
  return (_BYTE *)*((_DWORD *)dword_A83C84 + v2); /*0x46c7ff*/
}



// ==== 0x0046C820  BulletTypeClass::GetWarhead  this=BulletTypeClass  sig=csp ====
int __thiscall BulletTypeClass::GetWarhead(BulletTypeClass *this, int a2, int a3)
{
  int result; // eax

  result = a2; /*0x46c820*/
  if ( a2 == this->trailer ) /*0x46c82c*/
    this->trailer = 0; /*0x46c82e*/
  return result; /*0x46c838*/
}



// ==== 0x0046C840  BulletTypeClass::SetScaledSpawnDelay  this=BulletTypeClass  sig=csp ====
int __thiscall BulletTypeClass::SetScaledSpawnDelay(BulletTypeClass *this, int a2)
{
  this->scaledSpawnDelay = a2; /*0x46c844*/
  return a2; /*0x46c84a*/
}



// ==== 0x0046C850  BulletTypeClass::GetTypeIdentifier  this=BulletTypeClass  sig=csp ====
int BulletTypeClass::GetTypeIdentifier(BulletTypeClass *this)
{
  return 9; /*0x46c855*/
}



// ==== 0x0046C860  BulletTypeClass::GetObjectSize  this=BulletTypeClass  sig=csp ====
int BulletTypeClass::GetObjectSize(BulletTypeClass *this)
{
  return 760; /*0x46c865*/
}



// ==== 0x0046C870  BulletTypeClass::Stub  this=BulletTypeClass  sig=csp ====
char __stdcall BulletTypeClass::Stub(BulletTypeClass *this, int a2)
{
  return 0; /*0x46c872*/
}



// ==== 0x0046C880  BulletTypeClass::StubReturnFalse  this=BulletTypeClass  sig=csp ====
int __stdcall BulletTypeClass::StubReturnFalse(BulletTypeClass *this)
{
  return 0; /*0x46c882*/
}



// ==== 0x0046C890  BulletTypeClass::ddtor  this=BulletTypeClass  sig=csp ====
void **__thiscall BulletTypeClass::ddtor(BulletTypeClass *this, char a2)
{
  int v3; // eax
  int v4; // eax
  BulletTypeClass *v6; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this->ObjectTypeClass = &BulletTypeClass::`vftable'; /*0x46c896*/
  *(_DWORD *)&this->ObjectTypeClass[4] = &BulletTypeClass::`vftable'; /*0x46c89c*/
  *(_DWORD *)&this->ObjectTypeClass[8] = &BulletTypeClass::`vftable'; /*0x46c8a3*/
  *(_DWORD *)&this->ObjectTypeClass[12] = &BulletTypeClass::`vftable'; /*0x46c8aa*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x46c8b1*/
  v6 = this; /*0x46c8c6*/
  v3 = (*(int (__thiscall **)(int *, BulletTypeClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x46c8ca*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v6);
  if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x46c8da*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x46c8df*/
    for ( ; /*0x46c8e5*/
          v3 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v3 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v3) )
    {
      ++v3; /*0x46c8ed*/
    }
  }
  v6 = this; /*0x46c90f*/
  v4 = (*(int (__thiscall **)(_DWORD *, BulletTypeClass **))(dword_A83C80 + 16))(&dword_A83C80, &v6); /*0x46c913*/
  if ( v4 != -1 && v4 < dword_A83C90 && v4 < --dword_A83C90 ) /*0x46c92e*/
  {
    do /*0x46c946*/
    {
      ++v4; /*0x46c936*/
      *((_DWORD *)dword_A83C84 + v4 - 1) = *((_DWORD *)dword_A83C84 + v4); /*0x46c93a*/
    }
    while ( v4 < dword_A83C90 ); /*0x46c946*/
  }
  ObjectTypeClass::Destruct((int)this); /*0x46c94a*/
  if ( (a2 & 1) != 0 ) /*0x46c954*/
    __3_YAXPAX_Z(this); /*0x46c957*/
  return (void **)this; /*0x46c961*/
}



// ==== 0x0046C970  sub_46C970  this=-  sig=ida-proto ====
void sub_46C970()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x46c97c*/
  dbl_89DF08 = Math::Sqrt(v0 + v0); /*0x46c98e*/
}



// ==== 0x0046C9A0  sub_46C9A0  this=-  sig=ida-proto ====
void sub_46C9A0()
{
  dbl_89DF58 = dbl_89DF08 / 60.0; /*0x46c9ac*/
}



// ==== 0x0046C9C0  sub_46C9C0  this=-  sig=ida-proto ====
void sub_46C9C0()
{
  dbl_89DF40 = 1.0 / dbl_89DF58; /*0x46c9cc*/
}



// ==== 0x0046C9E0  sub_46C9E0  this=-  sig=ida-proto ====
void sub_46C9E0()
{
  dbl_89DF38 = 0.0174532925199433 * 45.0; /*0x46c9ec*/
}



// ==== 0x0046CA00  sub_46CA00  this=-  sig=ida-proto ====
void sub_46CA00()
{
  dbl_89DF10 = 0.0174532925199433 * 60.0; /*0x46ca0c*/
}



// ==== 0x0046CA20  sub_46CA20  this=-  sig=ida-proto ====
void sub_46CA20()
{
  dbl_89DEF8 = 0.0174532925199433 * 90.0; /*0x46ca2c*/
}



// ==== 0x0046CA40  sub_46CA40  this=-  sig=ida-proto ====
__int64 sub_46CA40()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89DEF8 - dbl_89DF10); /*0x46ca52*/
  result = Math::RoundToInt(v0 * dbl_89DF08 * 0.5); /*0x46ca66*/
  dword_89DF60 = result; /*0x46ca6b*/
  return result; /*0x46ca70*/
}



// ==== 0x0046CA80  sub_46CA80  this=-  sig=ida-proto ====
void sub_46CA80()
{
  dbl_89DF18 = Math::ArcTan((double)dword_89DF60 * 0.00390625); /*0x46ca97*/
}



// ==== 0x0046CAB0  sub_46CAB0  this=-  sig=ida-proto ====
void sub_46CAB0()
{
  dbl_89DF30 = Math::ArcTan((double)(2 * dword_89DF60) / dbl_89DF08); /*0x46cad2*/
}



// ==== 0x0046CAE0  sub_46CAE0  this=-  sig=ida-proto ====
__int64 sub_46CAE0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89DF60) + 0.5); /*0x46cafb*/
  dword_89DF54 = result; /*0x46cb00*/
  return result; /*0x46cb06*/
}



// ==== 0x0046CB10  sub_46CB10  this=-  sig=ida-proto ====
int sub_46CB10()
{
  word_89DF00 = 0; /*0x46cb12*/
  word_89DF02 = 0; /*0x46cb18*/
  return 0; /*0x46cb1e*/
}



// ==== 0x0046CB20  sub_46CB20  this=-  sig=ida-proto ====
int sub_46CB20()
{
  dword_89DF20 = 0; /*0x46cb22*/
  dword_89DF24 = 0; /*0x46cb27*/
  dword_89DF28 = 0; /*0x46cb2c*/
  return 0; /*0x46cb31*/
}



// ==== 0x0046CB40  sub_46CB40  this=-  sig=ida-proto ====
int sub_46CB40()
{
  dword_89DF50 = 0; /*0x46cb45*/
  dword_89DF48 = 128; /*0x46cb4f*/
  dword_89DF4C = 128; /*0x46cb54*/
  return 128; /*0x46cb59*/
}



// ==== 0x0046CB60  CampaignClass::CampaignClass  this=CampaignClass  sig=csp ====
int __thiscall CampaignClass::CampaignClass(CampaignClass *this, char *Source)
{
  int v3; // eax

  AbstractTypeClass::Constructor((int *)this, Source); /*0x46cb68*/
  this->AbstractClass = &CampaignClass::`vftable'; /*0x46cb70*/
  this->scenario[28] = -1; /*0x46cb76*/
  this->description[28] = -1; /*0x46cb7c*/
  this->? = &CampaignClass::`vftable'; /*0x46cb82*/
  this->? = &CampaignClass::`vftable'; /*0x46cb89*/
  this->? = &CampaignClass::`vftable'; /*0x46cb90*/
  if ( dword_A83D08 < dword_A83D00 /*0x46cbcc*/
    || (byte_A83D05 || !dword_A83D00)
    && dword_A83D0C > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A83CF8 + 8))(
         &dword_A83CF8,
         dword_A83D00 + dword_A83D0C,
         0) )
  {
    v3 = dword_A83D08++; /*0x46cbd9*/
    *((_DWORD *)dword_A83CFC + v3) = this; /*0x46cbe8*/
  }
  LOBYTE(this->scenario[29]) = 0; /*0x46cbf7*/
  wcscpy((wchar_t *)&this->description[29], &g_TypeClass_DefaultString); /*0x46cbfe*/
  return (int)this; /*0x46cc08*/
}



// ==== 0x0046CC90  CampaignSelect::LookupByName  this=CampaignSelect  sig=csp ====
int __thiscall CampaignSelect::LookupByName(CampaignSelect *this)
{
  int v1; // esi

  v1 = 0; /*0x46cc96*/
  if ( dword_A83D08 <= 0 ) /*0x46cc9d*/
    return -1; /*0x46ccc2*/
  while ( _strcmpi((char *)(*((_DWORD *)dword_A83CFC + v1) + 36), this->__pad_0) ) /*0x46ccb6*/
  {
    if ( ++v1 >= dword_A83D08 ) /*0x46ccc0*/
      return -1; /*0x46ccc0*/
  }
  return v1; /*0x46ccc2*/
}



// ==== 0x0046CCD0  CampaignClass::GetMapData  this=CampaignClass  sig=csp ====
char __thiscall CampaignClass::GetMapData(CampaignClass *this, unsigned __int8 ***a2)
{
  int Int_Overwrite; // eax
  int v4; // ecx
  char Destination[1024]; // [esp+8h] [ebp-400h] BYREF

  INIClass::ResetSection((INIClass *)a2); /*0x46cce3*/
  if ( !(unsigned __int8)AbstractTypeClass::LoadFromINI((AbstractTypeClass *)this, a2) ) /*0x46cceb*/
    return 0; /*0x46cdf7*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x46cd0c*/
                    (bool *)a2,
                    (unsigned __int8 *)&this->idxCd,
                    (unsigned __int8 *)&stru_81AF8C.?[1],
                    this->scenario[28]);
  v4 = this->description[28]; /*0x46cd11*/
  this->scenario[28] = Int_Overwrite; /*0x46cd17*/
  this->description[28] = INIClass::GetBool( /*0x46cd40*/
                            (INIClass *)a2,
                            (unsigned __int8 *)&this->idxCd,
                            (unsigned __int8 *)&stru_81AF8C.?[1],
                            v4);
  INIClass::GetString( /*0x46cd46*/
    (INIClass *)a2,
    (unsigned __int8 *)&this->idxCd,
    (unsigned __int8 *)&stru_81AF8C.?,
    (char *)&this->scenario[29],
    (char *)&this->scenario[29],
    512);
  _strupr((char *)&this->scenario[29]); /*0x46cd4c*/
  if ( (unsigned __int8)INIClass::ReadBool_Overwrite( /*0x46cd5e*/
                          (int *)a2,
                          (unsigned __int8 *)&this->idxCd,
                          (unsigned __int8 *)&stru_81AF8C.?[17],
                          0) )
  {
    INIClass::GetString( /*0x46cda3*/
      (INIClass *)a2,
      (unsigned __int8 *)&this->idxCd,
      (unsigned __int8 *)&stru_81AF8C.?[5],
      0,
      Destination,
      1024);
    strcat(Destination, &stru_81AF8C.?[8]); /*0x46cdcf*/
    BulkCharToWide(&this->description[29], (unsigned __int8 *)Destination, -1); /*0x46cde2*/
  }
  else
  {
    INIClass::GetStringEx( /*0x46cd7b*/
      (int)a2,
      (unsigned __int8 *)&this->idxCd,
      (unsigned __int8 *)&stru_81AF8C.?[5],
      (wchar_t *)&this->description[29],
      0x80u);
  }
  return 1; /*0x46cd82*/
}



// ==== 0x0046CE10  CampaignClass::LoadFromINIList  this=CCINIClass  sig=csp ====
int __thiscall CampaignClass::LoadFromINIList(INIClass *this)
{
  int result; // eax
  int v3; // ebp
  unsigned __int8 *StringByIndex; // eax
  int v5; // esi
  int v6; // esi
  int v7; // eax
  int i; // [esp+8h] [ebp-24h]
  char Source[32]; // [esp+Ch] [ebp-20h] BYREF

  result = INIClass::GetKeyCount(this->__pad_0, (unsigned __int8 *)&stru_81AF8C.?[2]); /*0x46ce1c*/
  v3 = 0; /*0x46ce21*/
  for ( i = result; v3 < i; ++v3 ) /*0x46ce29*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex( /*0x46ce48*/
                                         this->__pad_0,
                                         (unsigned __int8 *)&stru_81AF8C.?[2],
                                         v3);
    INIClass::GetString(this, (unsigned __int8 *)&stru_81AF8C.?[2], StringByIndex, &g_INI_DefaultBuffer, Source, 32); /*0x46ce55*/
    v5 = 0; /*0x46ce5f*/
    if ( dword_A83D08 <= 0 ) /*0x46ce63*/
      goto LABEL_7; /*0x46ce63*/
    while ( _strcmpi((char *)(*((_DWORD *)dword_A83CFC + v5) + 36), Source) ) /*0x46ce81*/
    {
      if ( ++v5 >= dword_A83D08 ) /*0x46ce8b*/
        goto LABEL_7; /*0x46ce8b*/
    }
    if ( v5 == -1 ) /*0x46ce91*/
    {
LABEL_7:
      v6 = __2_YAPAXI_Z(0x3A0u); /*0x46ce97*/
      if ( v6 ) /*0x46cea8*/
      {
        AbstractTypeClass::Constructor((int *)v6, Source); /*0x46ceb5*/
        *(_DWORD *)(v6 + 152) = -1; /*0x46ceba*/
        *(_DWORD *)(v6 + 668) = -1; /*0x46cec0*/
        *(_DWORD *)v6 = &CampaignClass::`vftable'; /*0x46cec6*/
        *(_DWORD *)(v6 + 4) = &CampaignClass::`vftable'; /*0x46cecc*/
        *(_DWORD *)(v6 + 8) = &CampaignClass::`vftable'; /*0x46ced3*/
        *(_DWORD *)(v6 + 12) = &CampaignClass::`vftable'; /*0x46ceda*/
        if ( dword_A83D08 < dword_A83D00 /*0x46cf18*/
          || (byte_A83D05 || !dword_A83D00)
          && dword_A83D0C > 0
          && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A83CF8 + 8))(
               &dword_A83CF8,
               dword_A83D00 + dword_A83D0C,
               0) )
        {
          v7 = dword_A83D08++; /*0x46cf25*/
          *((_DWORD *)dword_A83CFC + v7) = v6; /*0x46cf34*/
        }
        *(_BYTE *)(v6 + 156) = 0; /*0x46cf43*/
        wcscpy((wchar_t *)(v6 + 672), &g_TypeClass_DefaultString); /*0x46cf4a*/
      }
      else
      {
        v6 = 0; /*0x46cf54*/
      }
    }
    else
    {
      v6 = *((_DWORD *)dword_A83CFC + v5); /*0x46cf5d*/
    }
    result = (*(int (__thiscall **)(int, INIClass *))(*(_DWORD *)v6 + 100))(v6, this); /*0x46cf65*/
  }
  return result; /*0x46cf75*/
}



// ==== 0x0046CF80  CampaignClass::ddtor  this=CampaignClass  sig=csp ====
int __stdcall CampaignClass::ddtor(CampaignClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x46cf86*/
    return -2147467261; /*0x46cf88*/
  *a2 = -2439096; /*0x46cf96*/
  a2[1] = 298980631; /*0x46cf9e*/
  a2[2] = 1610642817; /*0x46cfa7*/
  a2[3] = unk_7E990C; /*0x46cfb0*/
  return 0; /*0x46cf8d*/
}



// ==== 0x0046CFC0  CampaignClass::Stat  this=CampaignClass  sig=csp ====
int __thiscall CampaignClass::Stat(CampaignClass *this, int *a2)
{
  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x46cfc9*/
  Power::TimerProcess(this->scenario[28]); /*0x46cfd7*/
  Checksum::AddString((Checksum *)a2, (unsigned __int8 *)&this->scenario[29]); /*0x46cfe5*/
  return Power::TimerProcess(this->description[28]); /*0x46cff8*/
}



// ==== 0x0046D000  CampaignClass::Write  this=CampaignClass  sig=csp ====
int __stdcall CampaignClass::Write(CampaignClass *this, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x46d00b*/
  if ( result >= 0 ) /*0x46d012*/
  {
    if ( this ) /*0x46d016*/
    {
      AbstractTypeClass::Init((int)this, (int)&a2); /*0x46d01f*/
      this->AbstractClass = &CampaignClass::`vftable'; /*0x46d024*/
      this->? = &CampaignClass::`vftable'; /*0x46d02a*/
      this->? = &CampaignClass::`vftable'; /*0x46d031*/
      this->? = &CampaignClass::`vftable'; /*0x46d038*/
    }
    return 0; /*0x46d03f*/
  }
  return result; /*0x46d041*/
}



// ==== 0x0046D050  CampaignClass::Seek  this=CampaignClass  sig=csp ====
int __stdcall CampaignClass::Seek(CampaignClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x46d05f*/
  if ( result >= 0 ) /*0x46d066*/
    return 0; /*0x46d068*/
  return result; /*0x46d06a*/
}



// ==== 0x0046D070  CampaignClass::StubReturn928  this=CampaignClass  sig=csp ====
int CampaignClass::StubReturn928(CampaignClass *this)
{
  return 928; /*0x46d075*/
}



// ==== 0x0046D080  CampaignClass::StubReturn10  this=CampaignClass  sig=csp ====
int CampaignClass::StubReturn10(CampaignClass *this)
{
  return 10; /*0x46d085*/
}



// ==== 0x0046D090  CampaignClass::DTOR  this=CampaignClass  sig=csp ====
void **__thiscall CampaignClass::DTOR(CampaignClass *this, char a2)
{
  int v3; // eax
  CampaignClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &CampaignClass::`vftable'; /*0x46d096*/
  this->? = &CampaignClass::`vftable'; /*0x46d09c*/
  this->? = &CampaignClass::`vftable'; /*0x46d0a3*/
  this->? = &CampaignClass::`vftable'; /*0x46d0aa*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x46d0b1*/
  v5 = this; /*0x46d0c6*/
  v3 = (*(int (__thiscall **)(_DWORD *, CampaignClass **))(dword_A83CF8 + 16))(&dword_A83CF8, &v5); /*0x46d0ca*/
  if ( v3 != -1 && v3 < dword_A83D08 && v3 < --dword_A83D08 ) /*0x46d0e5*/
  {
    do /*0x46d0fd*/
    {
      ++v3; /*0x46d0ed*/
      *((_DWORD *)dword_A83CFC + v3 - 1) = *((_DWORD *)dword_A83CFC + v3); /*0x46d0f1*/
    }
    while ( v3 < dword_A83D08 ); /*0x46d0fd*/
  }
  AbstractTypeClass::Dtor((AbstractTypeClass *)this); /*0x46d101*/
  if ( (a2 & 1) != 0 ) /*0x46d10b*/
    __3_YAXPAX_Z(this); /*0x46d10e*/
  return &this->AbstractClass; /*0x46d118*/
}



// ==== 0x0046D120  sub_46D120  this=-  sig=ida-proto ====
void sub_46D120()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x46d12c*/
  dbl_89DFA8 = Math::Sqrt(v0 + v0); /*0x46d13e*/
}



// ==== 0x0046D150  sub_46D150  this=-  sig=ida-proto ====
void sub_46D150()
{
  dbl_89E040 = dbl_89DFA8 / 60.0; /*0x46d15c*/
}



// ==== 0x0046D170  sub_46D170  this=-  sig=ida-proto ====
void sub_46D170()
{
  dbl_89E018 = 1.0 / dbl_89E040; /*0x46d17c*/
}



// ==== 0x0046D190  sub_46D190  this=-  sig=ida-proto ====
void sub_46D190()
{
  dbl_89E010 = 0.0174532925199433 * 45.0; /*0x46d19c*/
}



// ==== 0x0046D1B0  sub_46D1B0  this=-  sig=ida-proto ====
void sub_46D1B0()
{
  dbl_89DFB0 = 0.0174532925199433 * 60.0; /*0x46d1bc*/
}



// ==== 0x0046D1D0  sub_46D1D0  this=-  sig=ida-proto ====
void sub_46D1D0()
{
  dbl_89DF68 = 0.0174532925199433 * 90.0; /*0x46d1dc*/
}



// ==== 0x0046D1F0  sub_46D1F0  this=-  sig=ida-proto ====
__int64 sub_46D1F0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89DF68 - dbl_89DFB0); /*0x46d202*/
  result = Math::RoundToInt(v0 * dbl_89DFA8 * 0.5); /*0x46d216*/
  dword_89E048 = result; /*0x46d21b*/
  return result; /*0x46d220*/
}



// ==== 0x0046D230  sub_46D230  this=-  sig=ida-proto ====
void sub_46D230()
{
  dbl_89DFB8 = Math::ArcTan((double)dword_89E048 * 0.00390625); /*0x46d247*/
}



// ==== 0x0046D260  sub_46D260  this=-  sig=ida-proto ====
void sub_46D260()
{
  dbl_89DFD8 = Math::ArcTan((double)(2 * dword_89E048) / dbl_89DFA8); /*0x46d282*/
}



// ==== 0x0046D290  sub_46D290  this=-  sig=ida-proto ====
__int64 sub_46D290()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89E048) + 0.5); /*0x46d2ab*/
  dword_89E034 = result; /*0x46d2b0*/
  return result; /*0x46d2b6*/
}



// ==== 0x0046D2C0  sub_46D2C0  this=-  sig=ida-proto ====
int sub_46D2C0()
{
  word_89DFA0 = 0; /*0x46d2c2*/
  word_89DFA2 = 0; /*0x46d2c8*/
  return 0; /*0x46d2ce*/
}



// ==== 0x0046D2D0  sub_46D2D0  this=-  sig=ida-proto ====
int sub_46D2D0()
{
  dword_89DFC8 = 0; /*0x46d2d2*/
  dword_89DFCC = 0; /*0x46d2d7*/
  dword_89DFD0 = 0; /*0x46d2dc*/
  return 0; /*0x46d2e1*/
}



// ==== 0x0046D2F0  sub_46D2F0  this=-  sig=ida-proto ====
int sub_46D2F0()
{
  dword_89E030 = 0; /*0x46d2f5*/
  dword_89E028 = 128; /*0x46d2ff*/
  dword_89E02C = 128; /*0x46d304*/
  return 128; /*0x46d309*/
}



// ==== 0x0046D310  sub_46D310  this=-  sig=ida-proto ====
int sub_46D310()
{
  dword_89DF70 = 0; /*0x46d312*/
  dword_89DF74 = 0; /*0x46d317*/
  dword_89DF78 = 0; /*0x46d31c*/
  dword_89DF7C = 0; /*0x46d321*/
  return 0; /*0x46d326*/
}



// ==== 0x0046D330  MPCooperative::initGame  this=CampaignScore  sig=csp ====
_DWORD *__thiscall MPCooperative::initGame(MPCooperative *this)
{
  this->MPCooperative_field_0x0 = &CampaignScoreClass::`vftable'; /*0x46d334*/
  this->MPCooperative_field_0x4 = 0; /*0x46d33a*/
  dword_89E050 = 0; /*0x46d33d*/
  stru_81AF8C.?[6] = -1; /*0x46d343*/
  return &this->MPCooperative_field_0x0; /*0x46d34d*/
}



// ==== 0x0046D350  CampaignScoreClass::method_46D350  this=CampaignScore  sig=csp ====
void __thiscall sub_46D350(CampaignScoreClass *this)
{
  this->m_0 = (int)&CampaignScoreClass::`vftable'; /*0x46d350*/
}



// ==== 0x0046D480  ObjectClass::method_46D480  this=ObjectClass  sig=csp ====
__int64 __usercall sub_46D480@<edx:eax>(ObjectClass *this, int a2@<ecx>)
{
  __int64 result; // rax

  *((_BYTE *)&g_GameModeOptionState + a2) = BYTE4(result); /*0x46d480*/
  return result; /*0x46d486*/
}



// ==== 0x0046D490  ObjectClass::method_46D490  this=ObjectClass  sig=csp ====
char __thiscall sub_46D490(ObjectClass *this)
{
  return *((_BYTE *)&g_GameModeOptionState + (_DWORD)this); /*0x46d496*/
}



// ==== 0x0046D4A0  Game::SendCampaignOptions  this=Game  sig=ida-proto ====
int Game_SendCampaignOptions()
{
  int result; // eax
  int i; // esi
  int v2; // ecx
  int Option; // eax
  int v4; // ecx
  int PlayerSide; // eax
  int v6; // ecx
  char *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // eax
  wchar_t **v12; // esi
  int v13; // [esp+8h] [ebp-1C8h] BYREF
  char v14[452]; // [esp+Ch] [ebp-1C4h] BYREF

  v13 = 50; /*0x46d4bc*/
  strcpy(v14, unk_A8B380); /*0x46d4cd*/
  result = Settings::CheckString(); /*0x46d4d6*/
  if ( (_BYTE)result )
  {
    Debug::Log(aSendingCampaig); /*0x46d4e8*/
    v14[43] = dword_A8EB68; /*0x46d4f6*/
    for ( i = 0; i < 8; ++i )
    {
      v2 = *(&dword_A8DA90 + i); /*0x46d4fc*/
      if ( !v2 || v2 == g_HouseClass_ObserverFlags || v2 == g_Lobby_PlayerCount ) /*0x46d515*/
      {
        *(_DWORD *)&v14[4 * i + 44] = -1; /*0x46d542*/
        *(_DWORD *)&v14[4 * i + 76] = -1; /*0x46d54a*/
        *(_DWORD *)&v14[4 * i + 108] = -1; /*0x46d552*/
      }
      else
      {
        Option = SessionClass::GetOption(v2); /*0x46d517*/
        v4 = *(&dword_A8DA90 + i); /*0x46d51c*/
        *(_DWORD *)&v14[4 * i + 44] = Option; /*0x46d523*/
        PlayerSide = SessionClass::GetPlayerSide(v4); /*0x46d527*/
        v6 = *(&dword_A8DA90 + i); /*0x46d52c*/
        *(_DWORD *)&v14[4 * i + 76] = PlayerSide; /*0x46d533*/
        *(_DWORD *)&v14[4 * i + 108] = SessionClass::GetPlayerColor(v6); /*0x46d53c*/
      }
      v7 = ToWideStringChar((char *)*(&dword_A8DA90 + i)); /*0x46d561*/
      Debug::Log(
        "Player %i %s: Start %i, Country %i, Color %i\n",
        i,
        v7,
        *(_DWORD *)&v14[4 * i + 44],
        *(_DWORD *)&v14[4 * i + 76],
        *(_DWORD *)&v14[4 * i + 108]);
      v8 = MEMORY[0xA8B2BC][i]; /*0x46d588*/
      v9 = MEMORY[0xA8B27C][i]; /*0x46d58f*/
      *(_DWORD *)&v14[4 * i + 140] = MEMORY[0xA8B29C][i]; /*0x46d596*/
      v10 = MEMORY[0xA8B2DC][i]; /*0x46d59d*/
      *(_DWORD *)&v14[4 * i + 172] = v8; /*0x46d5a4*/
      *(_DWORD *)&v14[4 * i + 204] = v9; /*0x46d5ab*/
      *(_DWORD *)&v14[4 * i + 236] = v10; /*0x46d5b2*/
      v11 = MEMORY[0xA8B2FC][i]; /*0x46d5b9*/
      *(_DWORD *)&v14[4 * i + 268] = v11; /*0x46d5c0*/
      result = Debug::Log(
                 "AI %i: Difficulty %i, Country %i, Color %i, Start %i, Ally %i\n",
                 i,
                 *(_DWORD *)&v14[4 * i + 204],
                 *(_DWORD *)&v14[4 * i + 140],
                 *(_DWORD *)&v14[4 * i + 172],
                 *(_DWORD *)&v14[4 * i + 236],
                 v11);
    }
    v12 = (wchar_t **)&unk_A8DA94; /*0x46d600*/
    do /*0x46d640*/
    {
      if ( *v12 ) /*0x46d605*/
      {
        result = IsKnownPointer(*v12); /*0x46d60b*/
        if ( (_BYTE)result ) /*0x46d612*/
        {
          Network::SendToPlayer((int)unk_A8E9C0, (int)&v13, 455, 1, *v12); /*0x46d628*/
          result = Network::ReceiveLoop(unk_A8E9C0); /*0x46d632*/
        }
      }
      ++v12; /*0x46d637*/
    }
    while ( (int)v12 < (int)&dword_A8DAB0 ); /*0x46d640*/
  }
  return result; /*0x46d642*/
}



// ==== 0x0046D650  sub_46D650  this=-  sig=ida-proto ====
bool sub_46D650()
{
  bool v0; // bl
  HWND v1; // eax
  HWND DlgItem; // eax
  int v3; // ebp
  LPARAM *v4; // esi
  int v5; // ecx
  int v6; // edi
  int v7; // edi
  int v8; // edi
  LPARAM v9; // eax
  LPARAM v10; // eax
  LPARAM v11; // eax
  LPARAM v12; // eax
  LPARAM v13; // eax

  if ( dword_A8D638 != 50 ) /*0x46d65b*/
    return 0; /*0x46d80a*/
  Debug::Log(); /*0x46d666*/
  v0 = dword_A8EB68 != (char)dword_A8D667; /*0x46d67f*/
  dword_A8EB68 = (char)dword_A8D667; /*0x46d686*/
  v1 = (HWND)Dialog::FindByHandle((void *)0xBC6); /*0x46d68b*/
  if ( v1 ) /*0x46d692*/
  {
    DlgItem = GetDlgItem(v1, 1842); /*0x46d69a*/
    if ( DlgItem ) /*0x46d6a2*/
      PostMessageA(DlgItem, 0x405u, 1u, dword_A8EB68); /*0x46d6b3*/
  }
  v3 = 0; /*0x46d6bc*/
  v4 = &dword_A8DA90; /*0x46d6be*/
  do /*0x46d7fd*/
  {
    v5 = *v4; /*0x46d6c3*/
    if ( *v4 && v5 != g_HouseClass_ObserverFlags && v5 != g_Lobby_PlayerCount ) /*0x46d6d7*/
    {
      v6 = *(v4 - 266); /*0x46d6d9*/
      if ( SessionClass::GetOption(v5) != v6 ) /*0x46d6e6*/
        v0 = 1; /*0x46d6e8*/
      SessionClass::SetOption(*v4, v6); /*0x46d6ed*/
      v7 = *(v4 - 258); /*0x46d6f4*/
      if ( SessionClass::GetPlayerSide(*v4) != v7 ) /*0x46d701*/
        v0 = 1; /*0x46d703*/
      SessionClass::SetPlayerOption(*v4, v7); /*0x46d708*/
      v8 = *(v4 - 250); /*0x46d70f*/
      if ( SessionClass::GetPlayerColor(*v4) != v8 ) /*0x46d71c*/
        v0 = 1; /*0x46d71e*/
      SessionClass::SetPlayerColor(*v4, v8); /*0x46d723*/
    }
    ToWideStringChar((char *)*v4); /*0x46d72a*/
    SessionClass::GetPlayerColor(*v4); /*0x46d733*/
    SessionClass::GetPlayerSide(*v4); /*0x46d73b*/
    SessionClass::GetOption(*v4); /*0x46d743*/
    Debug::Log(); /*0x46d750*/
    v9 = *(v4 - 242); /*0x46d755*/
    if ( *(v4 - 2557) != v9 ) /*0x46d766*/
      v0 = 1; /*0x46d768*/
    *(v4 - 2557) = v9; /*0x46d76a*/
    v10 = *(v4 - 234); /*0x46d770*/
    if ( *(v4 - 2549) != v10 ) /*0x46d77c*/
      v0 = 1; /*0x46d77e*/
    *(v4 - 2549) = v10; /*0x46d780*/
    v11 = *(v4 - 226); /*0x46d786*/
    if ( *(v4 - 2565) != v11 ) /*0x46d792*/
      v0 = 1; /*0x46d794*/
    *(v4 - 2565) = v11; /*0x46d796*/
    v12 = *(v4 - 218); /*0x46d79c*/
    if ( *(v4 - 2541) != v12 ) /*0x46d7a8*/
      v0 = 1; /*0x46d7aa*/
    *(v4 - 2541) = v12; /*0x46d7ac*/
    v13 = *(v4 - 210); /*0x46d7b2*/
    if ( *(v4 - 2533) != v13 ) /*0x46d7be*/
      v0 = 1; /*0x46d7c0*/
    *(v4 - 2533) = v13; /*0x46d7c2*/
    Debug::Log(); /*0x46d7eb*/
    ++v4; /*0x46d7f3*/
    ++v3; /*0x46d7f6*/
  }
  while ( (int)v4 < (int)&dword_A8DAB0 ); /*0x46d7fd*/
  return v0; /*0x46d808*/
}



// ==== 0x0046D810  ObjectClass::method_46D810  this=ObjectClass  sig=csp ====
int sub_46D810(ObjectClass *this)
{
  int result; // eax
  int v2; // [esp+8h] [ebp-1C8h] BYREF
  char v3[43]; // [esp+Ch] [ebp-1C4h] BYREF
  int Option; // [esp+37h] [ebp-199h]
  int PlayerSide; // [esp+3Bh] [ebp-195h]
  int PlayerColor; // [esp+3Fh] [ebp-191h]

  v2 = 51; /*0x46d82c*/
  strcpy(v3, unk_A8B380); /*0x46d83d*/
  Option = SessionClass::GetOption((int *)*dword_A8DA78); /*0x46d859*/
  PlayerSide = SessionClass::GetPlayerSide((int *)*dword_A8DA78); /*0x46d864*/
  PlayerColor = SessionClass::GetPlayerColor((SessionClass *)*dword_A8DA78); /*0x46d874*/
  result = dword_A8DA90; /*0x46d878*/
  if ( dword_A8DA90 ) /*0x46d881*/
  {
    Network::SendToPlayer((int)&unk_A8E9C0, (int)&v2, 455, 1, (wchar_t *)dword_A8DA90); /*0x46d895*/
    return Network::ReceiveLoop(&unk_A8E9C0); /*0x46d89f*/
  }
  return result; /*0x46d87d*/
}



// ==== 0x0046D8B0  ObjectClass::method_46D8B0  this=ObjectClass  sig=csp ====
char sub_46D8B0(ObjectClass *this)
{
  char v1; // bl
  int v2; // edi
  const wchar_t **v3; // esi
  char *v4; // eax
  unsigned __int8 (__thiscall **vtable0)(ObjectClass *, int); // esi
  int PlayerSide; // eax
  int v8; // [esp-4h] [ebp-10h]

  v1 = 0; /*0x46d8b3*/
  v2 = 0; /*0x46d8b5*/
  v3 = (const wchar_t **)dword_A8DA90; /*0x46d8b7*/
  while ( 1 ) /*0x46d8c1*/
  {
    v4 = CharToWideString(&stru_A8D600.__pad_34[8]); /*0x46d8c1*/
    if ( !wcscmp((const wchar_t *)v4, *v3) ) /*0x46d8ca*/
      break; /*0x46d8ca*/
    ++v3; /*0x46d8d6*/
    ++v2; /*0x46d8d9*/
    if ( (int)v3 >= (int)&dword_A8DAB0 ) /*0x46d8e0*/
      return 0; /*0x46d8e7*/
  }
  if ( v2 == -1 ) /*0x46d8eb*/
    return 0; /*0x46d8f2*/
  if ( SessionClass::GetPlayerSide((int *)dword_A8DA90[v2]) != *(_DWORD *)&stru_A8D600.__pad_64[7] ) /*0x46d907*/
    v1 = 1; /*0x46d909*/
  if ( dword_A8B23C ) /*0x46d913*/
  {
    if ( (*((unsigned __int8 (__thiscall **)(ObjectClass *, _DWORD))dword_A8B23C->AbstractClass + 7))( /*0x46d918*/
           dword_A8B23C,
           *(_DWORD *)&stru_A8D600.__pad_64[7]) )
    {
      SessionClass::SetPlayerOption((int *)dword_A8DA90[v2], *(int *)&stru_A8D600.__pad_64[7]); /*0x46d926*/
    }
    else if ( dword_A8B23C ) /*0x46d92f*/
    {
      vtable0 = (unsigned __int8 (__thiscall **)(ObjectClass *, int))dword_A8B23C->AbstractClass; /*0x46d938*/
      PlayerSide = SessionClass::GetPlayerSide((int *)dword_A8DA90[v2]); /*0x46d93a*/
      if ( !vtable0[7](dword_A8B23C, PlayerSide) ) /*0x46d946*/
      {
        v8 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 10))(dword_A8B23C); /*0x46d958*/
        SessionClass::SetPlayerOption((int *)dword_A8DA90[v2], v8); /*0x46d960*/
      }
    }
  }
  if ( SessionClass::GetPlayerColor((SessionClass *)dword_A8DA90[v2]) != *(_DWORD *)stru_A8D600.Network_field_0x6F ) /*0x46d979*/
    v1 = 1; /*0x46d97b*/
  if ( IsAvailableColorhWnd(*(int *)stru_A8D600.Network_field_0x6F) ) /*0x46d97d*/
  {
    if ( SessionClass::GetPlayerColor((SessionClass *)dword_A8DA90[v2]) != *(_DWORD *)stru_A8D600.Network_field_0x6F ) /*0x46d998*/
    {
      SessionClass::SetPlayerColor((int *)dword_A8DA90[v2], -2); /*0x46d9a3*/
      v1 = 1; /*0x46d9a8*/
    }
  }
  else
  {
    SessionClass::SetPlayerColor((int *)dword_A8DA90[v2], *(int *)stru_A8D600.Network_field_0x6F); /*0x46d9b9*/
  }
  if ( SessionClass::GetPlayerColor((SessionClass *)dword_A8DA90[v2]) != *(_DWORD *)&stru_A8D600.__pad_64[3] ) /*0x46d9d2*/
    v1 = 1; /*0x46d9d4*/
  if ( sub_4E50A0(*(int *)&stru_A8D600.__pad_64[3]) ) /*0x46d9d6*/
  {
    if ( SessionClass::GetOption((int *)dword_A8DA90[v2]) != *(_DWORD *)&stru_A8D600.__pad_64[3] ) /*0x46d9f1*/
    {
      SessionClass::SetOption((int *)dword_A8DA90[v2], -2); /*0x46d9fc*/
      return v1; /*0x46da06*/
    }
  }
  else
  {
    SessionClass::SetOption((int *)dword_A8DA90[v2], *(int *)&stru_A8D600.__pad_64[3]); /*0x46da15*/
  }
  return v1; /*0x46d8e2*/
}



// ==== 0x0046DA20  sub_46DA20  this=-  sig=ida-proto ====
LRESULT __fastcall sub_46DA20(HWND hDlg, int nIDDlgItem, wchar_t *Format)
{
  HWND DlgItem; // eax
  wchar_t Buffer[32]; // [esp+8h] [ebp-40h] BYREF

  swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, Format); /*0x46da38*/
  DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x46da42*/
  return SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer); /*0x46da5b*/
}



// ==== 0x0046DA70  ObjectClass::method_46DA70  this=ObjectClass  sig=csp ====
void sub_46DA70(ObjectClass *this)
{
  int nextArrayIndex; // ebx
  int v2; // esi
  int v3; // edi
  size_t v4; // ebp
  int v5; // esi
  int v6; // eax
  int *v7; // ecx
  int v8; // edx
  int v9; // ebp
  int *v10; // ecx
  int v11; // edx
  int v12; // ebp
  int Count; // ebp
  int v14; // ebp
  int v15; // ebp
  int v16; // edi
  int i; // [esp+8h] [ebp-8h]
  int v18; // [esp+Ch] [ebp-4h]

  nextArrayIndex = stru_A80220.?; /*0x46da74*/
  v2 = 0; /*0x46da7b*/
  dword_A8D580 = 0; /*0x46da7f*/
  v18 = stru_A80220.?; /*0x46da85*/
  for ( i = 0; v2 < nextArrayIndex; i = v2 ) /*0x46da8d*/
  {
    v3 = *((_DWORD *)stru_A80220.? + v2); /*0x46da9a*/
    if ( v3 /*0x46dab7*/
      && *(_BYTE *)(*(_DWORD *)(v3 + 52) + 422) != 1
      && (unsigned __int8)House::IsCurrentPlayer(*((House **)stru_A80220.? + v2)) )
    {
      v4 = dword_A8D580++; /*0x46dacf*/
      v5 = 112 * v4; /*0x46dae1*/
      *((_DWORD *)&dword_A8D228 + 28 * v4) = 0; /*0x46daea*/
      wcscpy((wchar_t *)&unk_A8D1FC + 56 * v4, (const wchar_t *)(v3 + 90154)); /*0x46daf5*/
      v6 = 0; /*0x46dafa*/
      *((_DWORD *)&dword_A8D22C + 28 * v4) = 0; /*0x46daff*/
      *((_DWORD *)&dword_A8D23C + 28 * v4) = 0; /*0x46db05*/
      *((_DWORD *)&dword_A8D24C + 28 * v4) = 0; /*0x46db0b*/
      dword_A8D25C[28 * v4] = 0; /*0x46db11*/
      *((_DWORD *)&dword_A8D224 + 28 * v4) = *(_DWORD *)(v3 + 90196); /*0x46db1d*/
      if ( !*(_BYTE *)(v3 + 501) ) /*0x46db23*/
      {
        ++*((_DWORD *)&dword_A8D228 + 28 * v4); /*0x46db34*/
        dword_A8D584 = v4; /*0x46db3a*/
      }
      v7 = (int *)(v3 + 21476); /*0x46db40*/
      v8 = 20; /*0x46db46*/
      do /*0x46db53*/
      {
        v9 = *v7++; /*0x46db4b*/
        v6 += v9; /*0x46db50*/
        --v8; /*0x46db52*/
      }
      while ( v8 ); /*0x46db53*/
      v10 = (int *)(v3 + 21560); /*0x46db55*/
      v11 = 20; /*0x46db5b*/
      do /*0x46db68*/
      {
        v12 = *v10++; /*0x46db60*/
        v6 += v12; /*0x46db65*/
        --v11; /*0x46db67*/
      }
      while ( v11 ); /*0x46db68*/
      *(_DWORD *)((char *)&dword_A8D23C + v5) = v6; /*0x46db6a*/
      *(_DWORD *)((char *)&dword_A8D22C + v5) = *(_DWORD *)(v3 + 21640) + *(_DWORD *)(v3 + 21556); /*0x46db84*/
      Count = VectorClass::GetCount((VectorClass *)(v3 + 21840)); /*0x46db95*/
      v14 = VectorClass::GetCount((VectorClass *)(v3 + 21860)) + Count; /*0x46dba2*/
      v15 = VectorClass::GetCount((VectorClass *)(v3 + 21880)) + v14; /*0x46dbaf*/
      *(_DWORD *)((char *)&dword_A8D24C + v5) = *(_DWORD *)(v3 + 21640) /*0x46dbc8*/
                                              + VectorClass::GetCount((VectorClass *)(v3 + 21900))
                                              + v15
                                              + *(_DWORD *)(v3 + 21556);
      v16 = *(_DWORD *)(v3 + 21736); /*0x46dbce*/
      if ( v16 > 0 ) /*0x46dbd6*/
        dword_A8D25C[v5 / 4u] += v16; /*0x46dbd8*/
      Debug::Log(); /*0x46dc1c*/
      v2 = i; /*0x46dc21*/
      nextArrayIndex = v18; /*0x46dc25*/
    }
    ++v2; /*0x46dc2c*/
  }
}



// ==== 0x0046DC90  Compare::Field96  this=Compare  sig=ida-proto ====
int __cdecl Compare_Field96(const void *a1, const void *a2)
{
  int v2; // eax
  int v3; // ecx

  v2 = *(_DWORD *)(*(_DWORD *)a1 + 96); /*0x46dc9c*/
  v3 = *(_DWORD *)(*(_DWORD *)a2 + 96); /*0x46dc9f*/
  if ( v2 == v3 )
    return 0; /*0x46dca6*/
  else
    return v2 <= v3 ? 1 : -1;
}



// ==== 0x0046DCC0  sub_46DCC0  this=-  sig=csp ====
BOOL __fastcall sub_46DCC0(HWND hDlg, unsigned __int8 a2)
{
  int i; // edi
  BOOL result; // eax
  int v5; // eax
  HWND DlgItem; // eax
  int ResourceID2CSF; // eax
  HWND v8; // eax
  int ResourceIDCSF; // eax
  HWND v10; // eax
  int ResourceID3CSF; // eax
  HWND v12; // eax

  for ( i = 0; i < 8; ++i )
  {
    result = IsKnownPointer((wchar_t *)*(&dword_A8DA90 + i)); /*0x46dcda*/
    if ( result && i != dword_A8DA8C )
    {
      if ( i )
        v5 = i != 1 ? -1 : 1042;
      else
        v5 = 1041; /*0x46dcef*/
      DlgItem = GetDlgItem(hDlg, v5); /*0x46dd09*/
      EnableWindow(DlgItem, a2); /*0x46dd17*/
      ResourceID2CSF = GetResourceID2CSF((void *)i); /*0x46dd1f*/
      v8 = GetDlgItem(hDlg, ResourceID2CSF); /*0x46dd26*/
      EnableWindow(v8, a2); /*0x46dd2a*/
      ResourceIDCSF = GetResourceIDCSF((void *)i); /*0x46dd32*/
      v10 = GetDlgItem(hDlg, ResourceIDCSF); /*0x46dd39*/
      EnableWindow(v10, a2); /*0x46dd3d*/
      ResourceID3CSF = GetResourceID3CSF((void *)i); /*0x46dd45*/
      v12 = GetDlgItem(hDlg, ResourceID3CSF); /*0x46dd4c*/
      result = EnableWindow(v12, a2); /*0x46dd50*/
    }
  }
  return result; /*0x46dd60*/
}



// ==== 0x0046DD70  EnableGameModeControls  this=-  sig=csp ====
HWND __fastcall GameMode_EnableControls(HWND hDlg, unsigned __int8 a2)
{
  int v4; // eax
  HWND DlgItem; // eax
  int ResourceID2; // eax
  HWND v7; // eax
  int ResourceID; // eax
  HWND v9; // eax
  int ResourceID3; // eax
  HWND v11; // eax
  HWND result; // eax
  HWND v13; // edi

  if ( dword_A8DA8C )
    v4 = dword_A8DA8C != 1 ? -1 : 1042;
  else
    v4 = 1041; /*0x46dd81*/
  DlgItem = GetDlgItem(hDlg, v4); /*0x46dd9f*/
  EnableWindow(DlgItem, a2); /*0x46ddaf*/
  ResourceID2 = GetResourceID2CSF((void *)dword_A8DA8C); /*0x46ddb7*/
  v7 = GetDlgItem(hDlg, ResourceID2); /*0x46ddbe*/
  EnableWindow(v7, a2); /*0x46ddc2*/
  ResourceID = GetResourceIDCSF((void *)dword_A8DA8C); /*0x46ddca*/
  v9 = GetDlgItem(hDlg, ResourceID); /*0x46ddd1*/
  EnableWindow(v9, a2); /*0x46ddd5*/
  ResourceID3 = GetResourceID3CSF((void *)dword_A8DA8C); /*0x46dddd*/
  v11 = GetDlgItem(hDlg, ResourceID3); /*0x46dde4*/
  EnableWindow(v11, a2); /*0x46dde8*/
  result = (HWND)Settings::CheckString(); /*0x46ddea*/
  if ( (_BYTE)result ) /*0x46ddf1*/
  {
    result = GetDlgItem(hDlg, 1842); /*0x46ddf9*/
    v13 = result; /*0x46ddfb*/
    if ( result ) /*0x46ddff*/
    {
      EnableWindow(result, a2); /*0x46de03*/
      return (HWND)InvalidateRect(v13, 0, 0); /*0x46de0a*/
    }
  }
  return result; /*0x46de10*/
}



// ==== 0x0046DE20  sub_46DE20  this=-  sig=csp ====
HWND __fastcall sub_46DE20(HWND hDlg, int nCmdShow)
{
  HWND DlgItem; // eax
  HWND v5; // eax
  HWND v6; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  HWND v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  HWND v14; // eax
  HWND v15; // eax
  HWND v16; // eax
  HWND v17; // eax
  HWND v18; // eax
  HWND v19; // eax
  HWND v20; // eax
  HWND v21; // eax
  HWND v22; // eax
  HWND v23; // eax
  HWND v24; // eax
  HWND v25; // eax
  HWND result; // eax
  HWND hWnd; // [esp+10h] [ebp-4h]

  DlgItem = GetDlgItem(hDlg, 1842); /*0x46de35*/
  hWnd = DlgItem; /*0x46de3f*/
  if ( DlgItem ) /*0x46de43*/
  {
    ShowWindow(DlgItem, nCmdShow); /*0x46de47*/
    InvalidateRect(hWnd, 0, 0); /*0x46de52*/
  }
  v5 = GetDlgItem(hDlg, 1839); /*0x46de5e*/
  if ( v5 ) /*0x46de62*/
    ShowWindow(v5, nCmdShow); /*0x46de66*/
  v6 = GetDlgItem(hDlg, 1944); /*0x46de6e*/
  if ( v6 ) /*0x46de72*/
    ShowWindow(v6, nCmdShow); /*0x46de76*/
  v7 = GetDlgItem(hDlg, 1945); /*0x46de7e*/
  if ( v7 ) /*0x46de82*/
    ShowWindow(v7, nCmdShow); /*0x46de86*/
  v8 = GetDlgItem(hDlg, 1946); /*0x46de8e*/
  if ( v8 ) /*0x46de92*/
    ShowWindow(v8, nCmdShow); /*0x46de96*/
  v9 = GetDlgItem(hDlg, 1947); /*0x46de9e*/
  if ( v9 ) /*0x46dea2*/
    ShowWindow(v9, nCmdShow); /*0x46dea6*/
  v10 = GetDlgItem(hDlg, 1918); /*0x46deae*/
  if ( v10 ) /*0x46deb2*/
    ShowWindow(v10, nCmdShow); /*0x46deb6*/
  v11 = GetDlgItem(hDlg, 1746); /*0x46debe*/
  if ( v11 ) /*0x46dec2*/
    ShowWindow(v11, nCmdShow); /*0x46dec6*/
  v12 = GetDlgItem(hDlg, 1747); /*0x46dece*/
  if ( v12 ) /*0x46ded2*/
    ShowWindow(v12, nCmdShow); /*0x46ded6*/
  v13 = GetDlgItem(hDlg, 1041); /*0x46dede*/
  if ( v13 ) /*0x46dee2*/
    ShowWindow(v13, nCmdShow); /*0x46dee6*/
  v14 = GetDlgItem(hDlg, 1042); /*0x46deee*/
  if ( v14 ) /*0x46def2*/
    ShowWindow(v14, nCmdShow); /*0x46def6*/
  v15 = GetDlgItem(hDlg, 1754); /*0x46defe*/
  if ( v15 ) /*0x46df02*/
    ShowWindow(v15, nCmdShow); /*0x46df06*/
  v16 = GetDlgItem(hDlg, 1755); /*0x46df0e*/
  if ( v16 ) /*0x46df12*/
    ShowWindow(v16, nCmdShow); /*0x46df16*/
  v17 = GetDlgItem(hDlg, 1697); /*0x46df1e*/
  if ( v17 ) /*0x46df22*/
    ShowWindow(v17, nCmdShow); /*0x46df26*/
  v18 = GetDlgItem(hDlg, 1296); /*0x46df2e*/
  if ( v18 ) /*0x46df32*/
    ShowWindow(v18, nCmdShow); /*0x46df36*/
  v19 = GetDlgItem(hDlg, 1698); /*0x46df3e*/
  if ( v19 ) /*0x46df42*/
    ShowWindow(v19, nCmdShow); /*0x46df46*/
  v20 = GetDlgItem(hDlg, 1314); /*0x46df4e*/
  if ( v20 ) /*0x46df52*/
    ShowWindow(v20, nCmdShow); /*0x46df56*/
  v21 = GetDlgItem(hDlg, 1699); /*0x46df5e*/
  if ( v21 ) /*0x46df62*/
    ShowWindow(v21, nCmdShow); /*0x46df66*/
  v22 = GetDlgItem(hDlg, 1700); /*0x46df6e*/
  if ( v22 ) /*0x46df72*/
    ShowWindow(v22, nCmdShow); /*0x46df76*/
  v23 = GetDlgItem(hDlg, 1745); /*0x46df7e*/
  if ( v23 ) /*0x46df82*/
    ShowWindow(v23, nCmdShow); /*0x46df86*/
  v24 = GetDlgItem(hDlg, 1448); /*0x46df8e*/
  if ( v24 ) /*0x46df92*/
    ShowWindow(v24, nCmdShow); /*0x46df96*/
  v25 = GetDlgItem(hDlg, 1820); /*0x46df9e*/
  if ( v25 ) /*0x46dfa2*/
    ShowWindow(v25, nCmdShow == 0); /*0x46dfaf*/
  result = GetDlgItem(hDlg, 1128); /*0x46dfb7*/
  if ( result ) /*0x46dfbb*/
    return (HWND)ShowWindow(result, nCmdShow); /*0x46dfbf*/
  return result; /*0x46dfc1*/
}



// ==== 0x0046DFD0  CampaignScore::DialogProc  this=CampaignScore  sig=csp ====
int __stdcall CampaignScore::DialogProc(HWND hWnd, unsigned int a2, UINT_PTR uIDEvent, HWND a4)
{
  HWND v4; // ebp
  UINT_PTR v5; // edi
  int result; // eax
  Skirmish *v7; // esi
  HWND v8; // eax
  int v9; // ebx
  HWND v10; // eax
  char *v11; // eax
  int v12; // eax
  int v13; // edi
  int v14; // esi
  int jj; // esi
  int v16; // edi
  ObjectClass **v17; // esi
  ObjectClass *v18; // ebx
  int v19; // esi
  int v20; // eax
  int ii; // esi
  int v22; // edi
  int v23; // eax
  int v24; // edi
  ObjectClass **v25; // esi
  ObjectClass *v26; // ebx
  int v27; // esi
  int v28; // eax
  int m; // esi
  int v30; // edi
  int v31; // eax
  int v32; // edi
  ObjectClass **v33; // esi
  ObjectClass *v34; // ebx
  int v35; // esi
  int v36; // eax
  int n; // esi
  int v38; // edi
  int v39; // eax
  signed int v40; // esi
  const wchar_t **v41; // edi
  int *v42; // ebx
  const wchar_t *v43; // eax
  wchar_t *StringCSF; // esi
  HWND v45; // eax
  HWND v46; // eax
  signed int v47; // esi
  int *v48; // edi
  wchar_t *v49; // esi
  HWND v50; // eax
  wchar_t *v51; // esi
  HWND v52; // eax
  HWND v53; // eax
  ObjectClass **v54; // esi
  int v55; // edi
  HWND v56; // esi
  const wchar_t *v57; // ebx
  LRESULT v58; // edi
  bool v59; // cc
  ObjectClass *v60; // ebp
  int ResourceIDCSF; // esi
  int LobbyPlayerColor; // eax
  int k; // esi
  int v64; // edi
  int v65; // eax
  int v66; // esi
  char *v67; // eax
  int **v68; // esi
  ObjectClass *v69; // esi
  const wchar_t **v70; // edi
  char *v71; // eax
  HWND v72; // eax
  HWND v73; // esi
  HWND v74; // edi
  int j; // esi
  int v76; // eax
  int v77; // edx
  int **v78; // esi
  HWND v79; // eax
  int v80; // ecx
  int v81; // esi
  int v82; // ecx
  wchar_t *v83; // eax
  HWND v84; // eax
  ObjectClass **v85; // esi
  int v86; // eax
  LPARAM v87; // esi
  LPARAM v88; // edx
  HWND v89; // eax
  HWND v90; // eax
  ErrorCode v91; // eax
  HWND v92; // eax
  HWND v93; // eax
  HWND v94; // eax
  HWND v95; // eax
  ErrorCode v96; // eax
  HWND v97; // eax
  HWND v98; // eax
  ErrorCode v99; // eax
  HWND v100; // eax
  HWND v101; // eax
  char v102; // al
  HWND v103; // eax
  HWND v104; // eax
  HWND v105; // eax
  HWND v106; // eax
  HWND v107; // eax
  int v108; // edi
  ObjectClass **v109; // esi
  int v110; // eax
  int v111; // edi
  HWND DlgItem; // esi
  LPARAM v113; // ebx
  LRESULT v114; // edi
  int i; // esi
  int ResourceID3CSF; // edi
  int HouseClassSideIndex; // eax
  int v118; // [esp-8h] [ebp-428h]
  const wchar_t *v119; // [esp-4h] [ebp-424h]
  int v120; // [esp-4h] [ebp-424h]
  ObjectClass *v121; // [esp+0h] [ebp-420h] BYREF
  HWND hDlg; // [esp+10h] [ebp-410h]
  int v123; // [esp+14h] [ebp-40Ch]
  ErrorCode *WindowLongA; // [esp+18h] [ebp-408h]
  LPARAM v125; // [esp+1Ch] [ebp-404h]
  int nIDDlgItem; // [esp+20h] [ebp-400h]
  char v127; // [esp+27h] [ebp-3F9h]
  int v128; // [esp+28h] [ebp-3F8h]
  wchar_t *v129; // [esp+30h] [ebp-3F0h] BYREF
  DeleteAndZero v130; // [esp+34h] [ebp-3ECh] BYREF
  _DWORD v131[113]; // [esp+38h] [ebp-3E8h] BYREF
  __int16 v132; // [esp+1FCh] [ebp-224h]
  char v133; // [esp+1FEh] [ebp-222h]
  wchar_t Buffer[32]; // [esp+200h] [ebp-220h] BYREF
  wchar_t v135[32]; // [esp+240h] [ebp-1E0h] BYREF
  wchar_t v136[32]; // [esp+280h] [ebp-1A0h] BYREF
  wchar_t v137[32]; // [esp+2C0h] [ebp-160h] BYREF
  wchar_t v138[32]; // [esp+300h] [ebp-120h] BYREF
  wchar_t lParam[111]; // [esp+340h] [ebp-E0h] BYREF
  __int16 v140; // [esp+41Eh] [ebp-2h]

  v4 = hWnd; /*0x46dfdc*/
  v5 = uIDEvent; /*0x46dfec*/
  result = BaseDialogProc(hWnd, a2, uIDEvent, a4); /*0x46dff9*/
  if ( result ) /*0x46e000*/
    return result; /*0x46e000*/
  WindowLongA = (ErrorCode *)GetWindowLongA(hWnd, 8); /*0x46e01b*/
  if ( a2 > 0x113 ) /*0x46e01f*/
  {
    if ( a2 == 276 ) /*0x46eb67*/
    {
      if ( a4 != GetDlgItem(hWnd, 1842) ) /*0x46f30d*/
        return 0; /*0x46f30d*/
      if ( byte_89E0A2 ) /*0x46f31a*/
        stru_A8EB00.ObjectTypeClass[26] = SendDlgItemMessageA(hWnd, 1842, 0x400u, 0, 0); /*0x46f331*/
      else
        byte_89E0A2 = 1; /*0x46f338*/
      if ( byte_89E0A0 ) /*0x46f346*/
      {
        byte_89E0A1 = 1; /*0x46f4c2*/
        return 0; /*0x46f4c2*/
      }
      Game::SendCampaignOptions(); /*0x46f34c*/
      v108 = 0; /*0x46f351*/
      v109 = (ObjectClass **)dword_A8DA90; /*0x46f353*/
      do /*0x46f374*/
      {
        if ( (unsigned __int8)IsKnownPointer(*v109) ) /*0x46f35a*/
          *((_BYTE *)&g_GameModeOptionState + v108) = 0; /*0x46f363*/
        ++v109; /*0x46f36a*/
        ++v108; /*0x46f36d*/
      }
      while ( (int)v109 < (int)&dword_A8DAB0 ); /*0x46f374*/
      hDlg = hWnd; /*0x46f378*/
      if ( hWnd || (hDlg = (HWND)Dialog::FindByHandle((Dialog *)0xBC6)) != 0 ) /*0x46f38e*/
      {
        v125 = 0; /*0x46f394*/
        WindowLongA = (ErrorCode *)dword_A8DA90; /*0x46f39c*/
        do /*0x46f454*/
        {
          v110 = ErrorCode::Map((ErrorCode *)v125); /*0x46f3a8*/
          v111 = v110; /*0x46f3ad*/
          if ( v110 != -1 ) /*0x46f3b2*/
          {
            nIDDlgItem = (int)GetDlgItem(hDlg, v110); /*0x46f3c7*/
            if ( ShowWindow((HWND)nIDDlgItem, 0) ) /*0x46f3cb*/
            {
              DlgItem = GetDlgItem(hDlg, v111); /*0x46f3e1*/
              v113 = (LPARAM)*WindowLongA; /*0x46f3e7*/
              if ( *WindowLongA ) /*0x46f3e7*/
              {
                SendDlgItemMessageA(hDlg, v111, 0x14Bu, 0, 0); /*0x46f3fc*/
                v114 = SendMessageA(DlgItem, 0x4C2u, 0, v113); /*0x46f411*/
                SendMessageA(DlgItem, 0x151u, v114, v113); /*0x46f421*/
                SendMessageA(DlgItem, 0x14Eu, v114, 0); /*0x46f42c*/
                ShowWindow((HWND)nIDDlgItem, 5); /*0x46f435*/
              }
            }
          }
          v59 = (int)&WindowLongA[1] < (int)&dword_A8DAB0; /*0x46f447*/
          ++v125; /*0x46f44c*/
          ++WindowLongA; /*0x46f450*/
        }
        while ( v59 ); /*0x46f454*/
        Count::SetupAllCountriesLobby((Count *)hDlg); /*0x46f460*/
        Skirmish::SetupAllSpawnLocations((Skirmish *)hDlg); /*0x46f467*/
        for ( i = 0; i < 8; ++i ) /*0x46f46c*/
        {
          ResourceID3CSF = GetResourceID3CSF((ObjectClass *)i); /*0x46f477*/
          HouseClassSideIndex = GetHouseClassSideIndex(i); /*0x46f479*/
          SetupLobbyFactionSlots(hDlg, ResourceID3CSF, HouseClassSideIndex); /*0x46f483*/
        }
        Lobby::UpdateReadyIcons((Lobby *)hDlg); /*0x46f490*/
        Lobby::EnableStartButton((Lobby *)hDlg); /*0x46f497*/
      }
      SetTimer(hWnd, 0, 0x1F4u, 0); /*0x46f4a6*/
      byte_89E0A0 = 1; /*0x46f4af*/
      return 0; /*0x46f4bf*/
    }
    if ( a2 != 1175 ) /*0x46eb73*/
    {
      if ( a2 == 1261 ) /*0x46eb78*/
      {
        Screen::Capture(1, 0, (int)GetDlgItem, (int)hWnd); /*0x46eb82*/
        Dialog::InitWindow(hWnd, 1); /*0x46eb8a*/
        ShowWindow(hWnd, 0); /*0x46eb92*/
        return 0; /*0x46eba4*/
      }
      return 0; /*0x46eb78*/
    }
    byte_89E0A2 = 0; /*0x46ebac*/
    v67 = &stru_A8B250.__pad_0[76]; /*0x46ebb5*/
    if ( byte_89E05D ) /*0x46ebba*/
    {
      do /*0x46ebd0*/
      {
        *((_DWORD *)v67 + 8) = -1; /*0x46ebc3*/
        *(_DWORD *)v67 = -1; /*0x46ebc6*/
        v67 += 4; /*0x46ebc8*/
      }
      while ( (int)v67 < (int)&stru_A8B250.__pad_0[108] ); /*0x46ebd0*/
      InitGameDropdownColors(v121); /*0x46ebd2*/
      Lobby::FillPlayerFactions((Lobby *)hWnd); /*0x46ebd9*/
      v68 = (int **)dword_A8DA90; /*0x46ebde*/
      do /*0x46ec0a*/
      {
        *(v68 - 2541) = (int *)-2; /*0x46ebe8*/
        if ( (unsigned __int8)IsKnownPointer((ObjectClass *)*v68) ) /*0x46ebf0*/
          SessionClass::SetOption(*v68, -2); /*0x46ebfc*/
        ++v68; /*0x46ec01*/
      }
      while ( (int)v68 < (int)&dword_A8DAB0 ); /*0x46ec0a*/
      _cfltcvt_init(); /*0x46ec0c*/
      v69 = 0; /*0x46ec16*/
      if ( dword_A8DA84 > 0 ) /*0x46ec1a*/
      {
        v70 = (const wchar_t **)dword_A8DA90; /*0x46ec1c*/
        do /*0x46ec50*/
        {
          if ( *v70 ) /*0x46ec21*/
          {
            v119 = *v70; /*0x46ec27*/
            v71 = CharToWideString(unk_A8B380); /*0x46ec2d*/
            if ( !wcscmp((const wchar_t *)v71, v119) ) /*0x46ec33*/
              dword_A8DA8C = v69; /*0x46ec3f*/
          }
          v69 = (ObjectClass *)((char *)v69 + 1); /*0x46ec4a*/
          ++v70; /*0x46ec4b*/
        }
        while ( (int)v69 < dword_A8DA84 ); /*0x46ec50*/
      }
      MapSkirmishDialogPlayerToControl(hWnd, (int)dword_A8DA8C); /*0x46ec5a*/
      if ( dword_A8B23C ) /*0x46ec67*/
        (*((void (__thiscall **)(ObjectClass *, HWND))dword_A8B23C->AbstractClass + 14))(dword_A8B23C, hWnd); /*0x46ec6c*/
      v72 = GetDlgItem(hWnd, 1842); /*0x46ec75*/
      v73 = v72; /*0x46ec77*/
      if ( v72 ) /*0x46ec7b*/
      {
        PostMessageA(v72, 0x4ACu, 0, 0); /*0x46ec8d*/
        PostMessageA(v73, 0x406u, 1u, 0x20000); /*0x46ec9c*/
        PostMessageA(v73, 0x405u, 1u, stru_A8EB00.ObjectTypeClass[26]); /*0x46ecac*/
      }
      sub_46DCC0(hWnd, 0); /*0x46ecb2*/
      if ( !(unsigned __int8)Settings::CheckString() ) /*0x46ecb7*/
      {
        v131[0] = 51; /*0x46ecd8*/
        strcpy((char *)&v131[1], unk_A8B380); /*0x46ece9*/
        *(_DWORD *)((char *)&v131[11] + 3) = SessionClass::GetOption((int *)*dword_A8DA78); /*0x46ed05*/
        *(_DWORD *)((char *)&v131[12] + 3) = SessionClass::GetPlayerSide((int *)*dword_A8DA78); /*0x46ed10*/
        *(_DWORD *)((char *)&v131[13] + 3) = SessionClass::GetPlayerColor((SessionClass *)*dword_A8DA78); /*0x46ed20*/
        if ( dword_A8DA90[0] ) /*0x46ed2b*/
        {
          Network::SendToPlayer((int)&unk_A8E9C0, (int)v131, 455, 1, (wchar_t *)dword_A8DA90[0]); /*0x46ed3f*/
          Network::ReceiveLoop(&unk_A8E9C0); /*0x46ed49*/
        }
      }
      v74 = hWnd; /*0x46ed50*/
      if ( hWnd || (v74 = (HWND)Dialog::FindByHandle((Dialog *)0xBC6)) != 0 ) /*0x46ed62*/
      {
        Skirmish::FillPlayerNames((Skirmish *)v74); /*0x46ed66*/
        Count::SetupAllCountriesLobby((Count *)v74); /*0x46ed6d*/
        Skirmish::SetupAllSpawnLocations((Skirmish *)v74); /*0x46ed74*/
        for ( j = 0; j < 8; ++j ) /*0x46ed79*/
        {
          nIDDlgItem = GetResourceID3CSF((ObjectClass *)j); /*0x46ed84*/
          v76 = GetHouseClassSideIndex(j); /*0x46ed88*/
          SetupLobbyFactionSlots(v74, nIDDlgItem, v76); /*0x46ed94*/
        }
        Lobby::UpdateReadyIcons((Lobby *)v74); /*0x46eda1*/
        Lobby::EnableStartButton((Lobby *)v74); /*0x46eda8*/
      }
      v77 = 5; /*0x46edad*/
    }
    else
    {
      do /*0x46edc4*/
      {
        *((_DWORD *)v67 + 8) = -1; /*0x46edb7*/
        *(_DWORD *)v67 = -1; /*0x46edba*/
        v67 += 4; /*0x46edbc*/
      }
      while ( (int)v67 < (int)&stru_A8B250.__pad_0[108] ); /*0x46edc4*/
      InitGameDropdownColors(v121); /*0x46edc6*/
      v78 = (int **)dword_A8DA90; /*0x46edcb*/
      do /*0x46edf7*/
      {
        *(v78 - 2541) = (int *)-2; /*0x46edd5*/
        if ( (unsigned __int8)IsKnownPointer((ObjectClass *)*v78) ) /*0x46eddd*/
          SessionClass::SetOption(*v78, -2); /*0x46ede9*/
        ++v78; /*0x46edee*/
      }
      while ( (int)v78 < (int)&dword_A8DAB0 ); /*0x46edf7*/
      _cfltcvt_init(); /*0x46edf9*/
      v77 = 0; /*0x46edfe*/
    }
    sub_46DE20(hWnd, v77); /*0x46ee02*/
    SetTimer(hWnd, 1u, 0x4E20u, 0); /*0x46ee11*/
    goto LABEL_161; /*0x46ee11*/
  }
  if ( a2 == 275 ) /*0x46e02b*/
  {
    if ( uIDEvent ) /*0x46e91e*/
    {
      if ( uIDEvent != 1 ) /*0x46eac1*/
        return 0; /*0x46eac1*/
      memset(v131, 0, sizeof(v131)); /*0x46ead8*/
      v132 = 0; /*0x46eada*/
      v133 = 0; /*0x46eadc*/
      v131[0] = 13; /*0x46eadd*/
      strcpy((char *)&v131[1], ToWideStringChar((char *)*dword_A8DA78)); /*0x46eb06*/
      v66 = 1; /*0x46eb14*/
      if ( dword_A8DA84 <= 1 ) /*0x46eb1b*/
        return 0; /*0x46eb1b*/
      do /*0x46eb50*/
      {
        Network::SendToPlayer((int)&unk_A8E9C0, (int)v131, 47, 1, (wchar_t *)dword_A8DA78[v66]); /*0x46eb39*/
        Network::ReceiveLoop(&unk_A8E9C0); /*0x46eb43*/
        ++v66; /*0x46eb4d*/
      }
      while ( v66 < dword_A8DA84 ); /*0x46eb50*/
      return 0; /*0x46eb55*/
    }
    else
    {
      KillTimer(hWnd, 0); /*0x46e926*/
      byte_89E0A0 = 0; /*0x46e931*/
      if ( !byte_89E0A1 ) /*0x46e93a*/
        return 0; /*0x46e93a*/
      Game::SendCampaignOptions(); /*0x46e940*/
      v54 = (ObjectClass **)dword_A8DA90; /*0x46e945*/
      do /*0x46e966*/
      {
        if ( (unsigned __int8)IsKnownPointer(*v54) ) /*0x46e94c*/
          *((_BYTE *)&g_GameModeOptionState + v5) = 0; /*0x46e955*/
        ++v54; /*0x46e95c*/
        ++v5; /*0x46e95f*/
      }
      while ( (int)v54 < (int)&dword_A8DAB0 ); /*0x46e966*/
      hDlg = hWnd; /*0x46e96a*/
      if ( !hWnd ) /*0x46e96e*/
      {
        hDlg = (HWND)Dialog::FindByHandle((Dialog *)0xBC6); /*0x46e97c*/
        if ( !hDlg ) /*0x46e980*/
          return 0; /*0x46e980*/
      }
      WindowLongA = 0; /*0x46e98c*/
      v123 = (int)dword_A8DA90; /*0x46e994*/
      do /*0x46ea3e*/
      {
        v55 = ErrorCode::Map(WindowLongA); /*0x46e9a5*/
        if ( v55 != -1 ) /*0x46e9aa*/
        {
          nIDDlgItem = (int)GetDlgItem(hDlg, v55); /*0x46e9bb*/
          if ( ShowWindow((HWND)nIDDlgItem, 0) ) /*0x46e9bf*/
          {
            v56 = GetDlgItem(hDlg, v55); /*0x46e9d5*/
            v57 = *(const wchar_t **)v123; /*0x46e9db*/
            if ( *(_DWORD *)v123 ) /*0x46e9db*/
            {
              SendDlgItemMessageA(hDlg, v55, 0x14Bu, 0, 0); /*0x46e9f0*/
              v58 = SendMessageA(v56, 0x4C2u, 0, (LPARAM)v57); /*0x46ea01*/
              SendMessageA(v56, 0x151u, v58, (LPARAM)v57); /*0x46ea0b*/
              SendMessageA(v56, 0x14Eu, v58, 0); /*0x46ea16*/
              ShowWindow((HWND)nIDDlgItem, 5); /*0x46ea1f*/
            }
          }
        }
        v59 = v123 + 4 < (int)&dword_A8DAB0; /*0x46ea31*/
        WindowLongA = (ErrorCode *)((char *)WindowLongA + 1); /*0x46ea36*/
        v123 += 4; /*0x46ea3a*/
      }
      while ( v59 ); /*0x46ea3e*/
      Count::SetupAllCountriesLobby((Count *)hDlg); /*0x46ea4a*/
      v60 = dword_A8DA8C; /*0x46ea4f*/
      if ( dword_A8DA8C != (ObjectClass *)-1 ) /*0x46ea58*/
      {
        ResourceIDCSF = GetResourceIDCSF(dword_A8DA8C); /*0x46ea63*/
        LobbyPlayerColor = GetLobbyPlayerColor((int)v60); /*0x46ea65*/
        SetupSkirmishSpawnLocations(hDlg, ResourceIDCSF, LobbyPlayerColor); /*0x46ea6f*/
      }
      for ( k = 0; k < 8; ++k ) /*0x46ea74*/
      {
        if ( (ObjectClass *)k != v60 ) /*0x46ea78*/
        {
          v64 = GetResourceIDCSF((ObjectClass *)k); /*0x46ea83*/
          v65 = GetLobbyPlayerColor(k); /*0x46ea85*/
          SetupSkirmishSpawnLocations(hDlg, v64, v65); /*0x46ea8f*/
        }
      }
      Lobby::SetupAllFactionSlots((Lobby *)hDlg); /*0x46ea9c*/
      Lobby::UpdateReadyIcons((Lobby *)hDlg); /*0x46eaa3*/
      Lobby::EnableStartButton((Lobby *)hDlg); /*0x46eaaa*/
      return 0; /*0x46eab2*/
    }
  }
  if ( a2 > 0x110 ) /*0x46e037*/
  {
    if ( a2 != 273 ) /*0x46e0be*/
      return 0; /*0x46e0be*/
    if ( (unsigned __int16)uIDEvent > 0x6A1u ) /*0x46e0d2*/
    {
      switch ( (__int16)uIDEvent ) /*0x46e4be*/
      {
        case 1698: /*0x46e4be*/
LABEL_48:
          AssignPlayerColor(hWnd, (void *)(unsigned __int16)uIDEvent); /*0x46e4c5*/
          if ( (unsigned __int8)Settings::CheckString() ) /*0x46e4cc*/
          {
            Game::SendCampaignOptions(); /*0x46e4d5*/
          }
          else
          {
            v131[0] = 51; /*0x46e4f3*/
            strcpy((char *)&v131[1], unk_A8B380); /*0x46e504*/
            *(_DWORD *)((char *)&v131[11] + 3) = SessionClass::GetOption((int *)*dword_A8DA78); /*0x46e520*/
            *(_DWORD *)((char *)&v131[12] + 3) = SessionClass::GetPlayerSide((int *)*dword_A8DA78); /*0x46e52b*/
            *(_DWORD *)((char *)&v131[13] + 3) = SessionClass::GetPlayerColor((SessionClass *)*dword_A8DA78); /*0x46e53b*/
            if ( dword_A8DA90[0] ) /*0x46e546*/
            {
              Network::SendToPlayer((int)&unk_A8E9C0, (int)v131, 455, 1, (wchar_t *)dword_A8DA90[0]); /*0x46e55a*/
              Network::ReceiveLoop(&unk_A8E9C0); /*0x46e564*/
            }
          }
          v24 = 0; /*0x46e569*/
          v25 = (ObjectClass **)dword_A8DA90; /*0x46e56b*/
          do /*0x46e58c*/
          {
            if ( (unsigned __int8)IsKnownPointer(*v25) ) /*0x46e572*/
              *((_BYTE *)&g_GameModeOptionState + v24) = 0; /*0x46e57b*/
            ++v25; /*0x46e582*/
            ++v24; /*0x46e585*/
          }
          while ( (int)v25 < (int)&dword_A8DAB0 ); /*0x46e58c*/
          if ( !hWnd ) /*0x46e590*/
          {
            v4 = (HWND)Dialog::FindByHandle((Dialog *)0xBC6); /*0x46e59c*/
            if ( !v4 ) /*0x46e5a0*/
              return 0; /*0x46e5a0*/
          }
          Skirmish::FillPlayerNames((Skirmish *)v4); /*0x46e5a8*/
          Count::SetupAllCountriesLobby((Count *)v4); /*0x46e5af*/
          v26 = dword_A8DA8C; /*0x46e5b4*/
          if ( dword_A8DA8C != (ObjectClass *)-1 ) /*0x46e5bd*/
          {
            v27 = GetResourceIDCSF(dword_A8DA8C); /*0x46e5c8*/
            v28 = GetLobbyPlayerColor((int)v26); /*0x46e5ca*/
            SetupSkirmishSpawnLocations(v4, v27, v28); /*0x46e5d4*/
          }
          for ( m = 0; m < 8; ++m ) /*0x46e5d9*/
          {
            if ( (ObjectClass *)m != v26 ) /*0x46e5dd*/
            {
              v30 = GetResourceIDCSF((ObjectClass *)m); /*0x46e5e8*/
              v31 = GetLobbyPlayerColor(m); /*0x46e5ea*/
              SetupSkirmishSpawnLocations(v4, v30, v31); /*0x46e5f4*/
            }
          }
          goto LABEL_46; /*0x46e5fd*/
        case 1699: /*0x46e4be*/
        case 1700: /*0x46e4be*/
          AssignPlayerSide(hWnd, (unsigned __int16)uIDEvent); /*0x46e606*/
          if ( (unsigned __int8)Settings::CheckString() ) /*0x46e60b*/
          {
            Game::SendCampaignOptions(); /*0x46e614*/
          }
          else
          {
            v131[0] = 51; /*0x46e632*/
            strcpy((char *)&v131[1], unk_A8B380); /*0x46e643*/
            *(_DWORD *)((char *)&v131[11] + 3) = SessionClass::GetOption((int *)*dword_A8DA78); /*0x46e65f*/
            *(_DWORD *)((char *)&v131[12] + 3) = SessionClass::GetPlayerSide((int *)*dword_A8DA78); /*0x46e66a*/
            *(_DWORD *)((char *)&v131[13] + 3) = SessionClass::GetPlayerColor((SessionClass *)*dword_A8DA78); /*0x46e67a*/
            if ( dword_A8DA90[0] ) /*0x46e685*/
            {
              Network::SendToPlayer((int)&unk_A8E9C0, (int)v131, 455, 1, (wchar_t *)dword_A8DA90[0]); /*0x46e699*/
              Network::ReceiveLoop(&unk_A8E9C0); /*0x46e6a3*/
            }
          }
          v32 = 0; /*0x46e6a8*/
          v33 = (ObjectClass **)dword_A8DA90; /*0x46e6aa*/
          do /*0x46e6cb*/
          {
            if ( (unsigned __int8)IsKnownPointer(*v33) ) /*0x46e6b1*/
              *((_BYTE *)&g_GameModeOptionState + v32) = 0; /*0x46e6ba*/
            ++v33; /*0x46e6c1*/
            ++v32; /*0x46e6c4*/
          }
          while ( (int)v33 < (int)&dword_A8DAB0 ); /*0x46e6cb*/
          if ( !hWnd ) /*0x46e6cf*/
          {
            v4 = (HWND)Dialog::FindByHandle((Dialog *)0xBC6); /*0x46e6db*/
            if ( !v4 ) /*0x46e6df*/
              return 0; /*0x46e6df*/
          }
          Skirmish::FillPlayerNames((Skirmish *)v4); /*0x46e6e7*/
          Count::SetupAllCountriesLobby((Count *)v4); /*0x46e6ee*/
          v34 = dword_A8DA8C; /*0x46e6f3*/
          if ( dword_A8DA8C != (ObjectClass *)-1 ) /*0x46e6fc*/
          {
            v35 = GetResourceIDCSF(dword_A8DA8C); /*0x46e707*/
            v36 = GetLobbyPlayerColor((int)v34); /*0x46e709*/
            SetupSkirmishSpawnLocations(v4, v35, v36); /*0x46e713*/
          }
          for ( n = 0; n < 8; ++n ) /*0x46e718*/
          {
            if ( (ObjectClass *)n != v34 ) /*0x46e71c*/
            {
              v38 = GetResourceIDCSF((ObjectClass *)n); /*0x46e727*/
              v39 = GetLobbyPlayerColor(n); /*0x46e729*/
              SetupSkirmishSpawnLocations(v4, v38, v39); /*0x46e733*/
            }
          }
          goto LABEL_46; /*0x46e73c*/
        case 1745: /*0x46e4be*/
          EnableGameModeControls(hWnd, 0); /*0x46e747*/
          if ( byte_89E0A1 && (unsigned __int8)Settings::CheckString() ) /*0x46e755*/
            Game::SendCampaignOptions(); /*0x46e75e*/
          if ( !byte_89E05C ) /*0x46e76a*/
          {
            v40 = 0; /*0x46e775*/
            if ( (int)dword_A8D580 > 0 ) /*0x46e779*/
            {
              v41 = (const wchar_t **)&unk_89DF80; /*0x46e77b*/
              v42 = &stru_81AF8C.?[12]; /*0x46e780*/
              while ( 1 ) /*0x46e78d*/
              {
                v43 = *v41; /*0x46e78d*/
                nIDDlgItem = *v42; /*0x46e78f*/
                if ( !wcscmp((const wchar_t *)*dword_A8DA78, v43) ) /*0x46e797*/
                  break; /*0x46e797*/
                ++v40; /*0x46e7a8*/
                v42 += 6; /*0x46e7a9*/
                ++v41; /*0x46e7ac*/
                if ( v40 >= (int)dword_A8D580 ) /*0x46e7b1*/
                  goto LABEL_92; /*0x46e7b1*/
              }
              StringCSF = GetStringCSF(g_Str_TXT_READY, 0, g_Str_File_CampScor_cpp, 1346); /*0x46e7cb*/
              v45 = GetDlgItem(hWnd, nIDDlgItem); /*0x46e7d3*/
              SendMessageA(v45, 0x4B2u, 0, (LPARAM)StringCSF); /*0x46e7e2*/
            }
LABEL_92:
            v46 = GetDlgItem(hWnd, 1745); /*0x46e7e8*/
            EnableWindow(v46, 0); /*0x46e7f7*/
            *WindowLongA = (ErrorCode)1; /*0x46e806*/
            byte_89E05C = 1; /*0x46e80c*/
            InvalidateRect(hWnd, 0, 0); /*0x46e813*/
            return 0; /*0x46e825*/
          }
          v47 = 0; /*0x46e833*/
          if ( (int)dword_A8D580 <= 0 ) /*0x46e837*/
            goto LABEL_99; /*0x46e837*/
          hDlg = (HWND)&unk_89DF80; /*0x46e839*/
          v48 = &stru_81AF8C.?[12]; /*0x46e841*/
          break; /*0x46e841*/
        default:
          return 0;
      }
      while ( 1 ) /*0x46e84c*/
      {
        nIDDlgItem = *v48; /*0x46e84c*/
        if ( !wcscmp((const wchar_t *)*dword_A8DA78, *(const wchar_t **)hDlg) ) /*0x46e85c*/
          break; /*0x46e85c*/
        ++v47; /*0x46e871*/
        v48 += 6; /*0x46e872*/
        ++hDlg; /*0x46e87a*/
        if ( v47 >= (int)dword_A8D580 ) /*0x46e87e*/
          goto LABEL_99; /*0x46e87e*/
      }
      v49 = GetStringCSF(g_Str_TXT_WAITING, 0, g_Str_File_CampScor_cpp, 1363); /*0x46e898*/
      v50 = GetDlgItem(hWnd, nIDDlgItem); /*0x46e8a0*/
      SendMessageA(v50, 0x4B2u, 0, (LPARAM)v49); /*0x46e8ab*/
LABEL_99:
      v51 = GetStringCSF(aGuiContinue, 0, g_Str_File_CampScor_cpp, 1368); /*0x46e8b1*/
      v52 = GetDlgItem(hWnd, 1745); /*0x46e8cf*/
      SendMessageA(v52, 0x4B2u, 0, (LPARAM)v51); /*0x46e8da*/
      v53 = GetDlgItem(hWnd, 1472); /*0x46e8e8*/
      EnableWindow(v53, 1); /*0x46e8eb*/
      *WindowLongA = (ErrorCode)1; /*0x46e8fa*/
      byte_89E05C = 0; /*0x46e900*/
      InvalidateRect(hWnd, 0, 0); /*0x46e907*/
      return 0; /*0x46e910*/
    }
    else if ( (unsigned __int16)uIDEvent == 1697 ) /*0x46e0d8*/
    {
LABEL_30:
      SelectLobbyCountry(hWnd, (void *)(unsigned __int16)uIDEvent); /*0x46e349*/
      if ( (unsigned __int8)Settings::CheckString() ) /*0x46e350*/
      {
        Game::SendCampaignOptions(); /*0x46e359*/
      }
      else
      {
        v131[0] = 51; /*0x46e377*/
        strcpy((char *)&v131[1], unk_A8B380); /*0x46e388*/
        *(_DWORD *)((char *)&v131[11] + 3) = SessionClass::GetOption((int *)*dword_A8DA78); /*0x46e3a4*/
        *(_DWORD *)((char *)&v131[12] + 3) = SessionClass::GetPlayerSide((int *)*dword_A8DA78); /*0x46e3af*/
        *(_DWORD *)((char *)&v131[13] + 3) = SessionClass::GetPlayerColor((SessionClass *)*dword_A8DA78); /*0x46e3bf*/
        if ( dword_A8DA90[0] ) /*0x46e3ca*/
        {
          Network::SendToPlayer((int)&unk_A8E9C0, (int)v131, 455, 1, (wchar_t *)dword_A8DA90[0]); /*0x46e3de*/
          Network::ReceiveLoop(&unk_A8E9C0); /*0x46e3e8*/
        }
      }
      v16 = 0; /*0x46e3ed*/
      v17 = (ObjectClass **)dword_A8DA90; /*0x46e3ef*/
      do /*0x46e410*/
      {
        if ( (unsigned __int8)IsKnownPointer(*v17) ) /*0x46e3f6*/
          *((_BYTE *)&g_GameModeOptionState + v16) = 0; /*0x46e3ff*/
        ++v17; /*0x46e406*/
        ++v16; /*0x46e409*/
      }
      while ( (int)v17 < (int)&dword_A8DAB0 ); /*0x46e410*/
      if ( !hWnd ) /*0x46e414*/
      {
        v4 = (HWND)Dialog::FindByHandle((Dialog *)0xBC6); /*0x46e420*/
        if ( !v4 ) /*0x46e424*/
          return 0; /*0x46e424*/
      }
      Skirmish::FillPlayerNames((Skirmish *)v4); /*0x46e42c*/
      Count::SetupAllCountriesLobby((Count *)v4); /*0x46e433*/
      v18 = dword_A8DA8C; /*0x46e438*/
      if ( dword_A8DA8C != (ObjectClass *)-1 ) /*0x46e441*/
      {
        v19 = GetResourceIDCSF(dword_A8DA8C); /*0x46e44c*/
        v20 = GetLobbyPlayerColor((int)v18); /*0x46e44e*/
        SetupSkirmishSpawnLocations(v4, v19, v20); /*0x46e458*/
      }
      for ( ii = 0; ii < 8; ++ii ) /*0x46e45d*/
      {
        if ( (ObjectClass *)ii != v18 ) /*0x46e461*/
        {
          v22 = GetResourceIDCSF((ObjectClass *)ii); /*0x46e46c*/
          v23 = GetLobbyPlayerColor(ii); /*0x46e46e*/
          SetupSkirmishSpawnLocations(v4, v22, v23); /*0x46e478*/
        }
      }
LABEL_46:
      Lobby::SetupAllFactionSlots((Lobby *)v4); /*0x46e483*/
      Lobby::UpdateReadyIcons((Lobby *)v4); /*0x46e48c*/
      Lobby::EnableStartButton((Lobby *)v4); /*0x46e493*/
      return 0; /*0x46e49b*/
    }
    else
    {
      switch ( (__int16)uIDEvent ) /*0x46e0f7*/
      {
        case 1296: /*0x46e0f7*/
          goto LABEL_30;
        case 1314: /*0x46e0f7*/
          goto LABEL_48;
        case 1344: /*0x46e0f7*/
          ReadChatMessage(&v129, a4); /*0x46e109*/
          DeleteAndZero::Alt((DeleteAndZero *)&v129); /*0x46e112*/
          if ( HIWORD(uIDEvent) != 1281 ) /*0x46e120*/
            return 0; /*0x46e120*/
          v125 = 61680; /*0x46e13d*/
          nIDDlgItem = (int)Math::InitDegToRad; /*0x46e141*/
          v8 = GetDlgItem(hWnd, 1344); /*0x46e145*/
          SendMessageA(v8, 0x4B3u, 0x6Fu, (LPARAM)lParam); /*0x46e15d*/
          v140 = 0; /*0x46e166*/
          v9 = wcslen(lParam); /*0x46e179*/
          v10 = GetDlgItem(hWnd, 1344); /*0x46e181*/
          SendMessageA(v10, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x46e190*/
          InvalidateRect(hWnd, 0, 1); /*0x46e197*/
          if ( v9 <= 2 ) /*0x46e1a0*/
            return 0; /*0x46e1a0*/
          v11 = CharToWideString(unk_A8B380); /*0x46e1b3*/
          Dialog::ShowMessage(nIDDlgItem, (size_t)g_Str_Trace___s_, v11, lParam); /*0x46e1c3*/
          memset(v131, 0, sizeof(v131)); /*0x46e1d7*/
          v132 = 0; /*0x46e1d9*/
          v133 = 0; /*0x46e1db*/
          v131[0] = 12; /*0x46e1e6*/
          strcpy((char *)&v131[1], unk_A8B380); /*0x46e201*/
          wcscpy((wchar_t *)&v131[12], lParam); /*0x46e213*/
          v131[68] = v125; /*0x46e224*/
          v12 = WideString::Hash((wchar_t *)&stru_A8D600.Network_field_0x10); /*0x46e22b*/
          v13 = dword_A8DA84; /*0x46e230*/
          v14 = 1; /*0x46e236*/
          v131[69] = v12; /*0x46e23d*/
          if ( dword_A8DA84 <= 1 ) /*0x46e244*/
            return 0; /*0x46e244*/
          do /*0x46e27b*/
          {
            if ( dword_A8DA78[v14] ) /*0x46e250*/
            {
              Network::SendToPlayer((int)&unk_A8E9C0, (int)v131, 455, 1, (wchar_t *)dword_A8DA78[v14]); /*0x46e269*/
              Network::ReceiveLoop(&unk_A8E9C0); /*0x46e273*/
            }
            ++v14; /*0x46e278*/
          }
          while ( v14 < v13 ); /*0x46e27b*/
          result = 0; /*0x46e280*/
          break; /*0x46e289*/
        case 1472: /*0x46e0f7*/
          *WindowLongA = (ErrorCode)2; /*0x46e290*/
          byte_89E04C = 0; /*0x46e29e*/
          if ( *(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4 ) /*0x46e2aa*/
          {
            memset(v131, 0, sizeof(v131)); /*0x46e2bb*/
            v132 = 0; /*0x46e2c3*/
            v133 = 0; /*0x46e2c5*/
            v131[0] = 36; /*0x46e2c6*/
            strcpy((char *)&v131[1], ToWideStringChar((char *)*dword_A8DA78)); /*0x46e2ef*/
            for ( jj = 1; jj < dword_A8DA84; ++jj ) /*0x46e304*/
            {
              Network::SendToPlayer((int)&unk_A8E9C0, (int)v131, 47, 1, (wchar_t *)dword_A8DA78[jj]); /*0x46e31e*/
              Network::ReceiveLoop(&unk_A8E9C0); /*0x46e328*/
            }
          }
          result = 1; /*0x46e33a*/
          break; /*0x46e346*/
        default:
          return 0;
      }
    }
    return result; /*0x46e346*/
  }
  if ( a2 == 272 ) /*0x46e039*/
  {
LABEL_161:
    v79 = GetDlgItem(hWnd, 1918); /*0x46ee17*/
    SendMessageA(v79, 0x4B2u, 0, 11055906); /*0x46ee32*/
    v80 = dword_89E050 / 60; /*0x46ee4d*/
    if ( &v121 != (ObjectClass **)-512 ) /*0x46ee58*/
    {
      if ( v80 / 3600 > 99 ) /*0x46ee74*/
        v80 = 359999; /*0x46ee76*/
      v81 = v80 / 3600; /*0x46ee8e*/
      v82 = 720 * (4 * (v80 / -3600) - v80 / 3600) + v80; /*0x46eea7*/
      v120 = v82 % 60; /*0x46eec2*/
      v118 = v82 / 60; /*0x46eec3*/
      v83 = GetStringCSF((wchar_t *)&stru_81AF8C.IsAnimatedTiberium, 0, g_Str_File_CampScor_cpp, 169); /*0x46eed6*/
      swprintf(Buffer, (const size_t)v83, (const wchar_t *const)v81, v118, v120); /*0x46eee4*/
    }
    v84 = GetDlgItem(hWnd, 1002); /*0x46eef2*/
    SendMessageA(v84, 0x4B2u, 0, (LPARAM)Buffer); /*0x46ef04*/
    v85 = (ObjectClass **)dword_A8DA90; /*0x46ef0b*/
    g_GameModeOptionState = 16843009; /*0x46ef10*/
    hDlg = 0; /*0x46ef15*/
    dword_89E004 = 16843009; /*0x46ef1d*/
    do /*0x46ef4a*/
    {
      if ( (unsigned __int8)IsKnownPointer(*v85) ) /*0x46ef24*/
        *((_BYTE *)&g_GameModeOptionState + (_DWORD)hDlg) = 0; /*0x46ef31*/
      ++v85; /*0x46ef3c*/
      hDlg = (HWND)((char *)hDlg + 1); /*0x46ef46*/
    }
    while ( (int)v85 < (int)&dword_A8DAB0 ); /*0x46ef4a*/
    nIDDlgItem = 0; /*0x46ef51*/
    if ( (int)dword_A8D580 > 0 ) /*0x46ef5b*/
    {
      WindowLongA = (ErrorCode *)&unk_89DF80; /*0x46ef61*/
      hDlg = (HWND)&stru_81AF8C.?[8]; /*0x46ef69*/
      do /*0x46f27e*/
      {
        v86 = Color::ConvertToRGB( /*0x46ef8e*/
                (Color *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)(*(_DWORD *)WindowLongA + 40))
                        + 776),
                (int)&v130);
        LOWORD(v128) = *(_WORD *)v86; /*0x46ef96*/
        BYTE2(v128) = *(_BYTE *)(v86 + 2); /*0x46ef9e*/
        v87 = (unsigned __int8)v128 | (*(unsigned __int16 *)((char *)&v128 + 1) << 8); /*0x46efd4*/
        v88 = (LPARAM)*WindowLongA; /*0x46efd6*/
        v123 = *((_DWORD *)hDlg - 1); /*0x46efd9*/
        v125 = v88; /*0x46efdd*/
        v89 = GetDlgItem(hWnd, v123); /*0x46efe1*/
        SendMessageA(v89, 0x4B2u, 0, v125); /*0x46eff0*/
        v90 = GetDlgItem(hWnd, v123); /*0x46eff8*/
        SendMessageA(v90, 0x498u, 0, v87); /*0x46f003*/
        v91 = *WindowLongA; /*0x46f00f*/
        v123 = *(_DWORD *)hDlg; /*0x46f011*/
        swprintf(v137, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(*(_DWORD *)&v91 + 64)); /*0x46f026*/
        v92 = GetDlgItem(hWnd, v123); /*0x46f034*/
        SendMessageA(v92, 0x4B2u, 0, (LPARAM)v137); /*0x46f046*/
        v93 = GetDlgItem(hWnd, v123); /*0x46f04e*/
        SendMessageA(v93, 0x498u, 0, v87); /*0x46f059*/
        v123 = *((_DWORD *)hDlg + 1); /*0x46f062*/
        swprintf(v135, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(*(_DWORD *)WindowLongA + 48)); /*0x46f07d*/
        v94 = GetDlgItem(hWnd, v123); /*0x46f08b*/
        SendMessageA(v94, 0x4B2u, 0, (LPARAM)v135); /*0x46f09d*/
        v95 = GetDlgItem(hWnd, v123); /*0x46f0a5*/
        SendMessageA(v95, 0x498u, 0, v87); /*0x46f0b0*/
        v96 = *WindowLongA; /*0x46f0bd*/
        v123 = *((_DWORD *)hDlg + 2); /*0x46f0bf*/
        swprintf(v138, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(*(_DWORD *)&v96 + 80)); /*0x46f0d4*/
        v97 = GetDlgItem(hWnd, v123); /*0x46f0e2*/
        SendMessageA(v97, 0x4B2u, 0, (LPARAM)v138); /*0x46f0f4*/
        v98 = GetDlgItem(hWnd, v123); /*0x46f0fc*/
        SendMessageA(v98, 0x498u, 0, v87); /*0x46f107*/
        v99 = *WindowLongA; /*0x46f114*/
        v123 = *((_DWORD *)hDlg + 3); /*0x46f116*/
        swprintf(v136, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(*(_DWORD *)&v99 + 96)); /*0x46f12b*/
        v100 = GetDlgItem(hWnd, v123); /*0x46f139*/
        SendMessageA(v100, 0x4B2u, 0, (LPARAM)v136); /*0x46f14b*/
        v101 = GetDlgItem(hWnd, v123); /*0x46f153*/
        SendMessageA(v101, 0x498u, 0, v87); /*0x46f15e*/
        v127 = 0; /*0x46f160*/
        v125 = 0; /*0x46f165*/
        v123 = (int)dword_A8DA90; /*0x46f16d*/
        while ( wcscmp(*(const wchar_t **)v123, *(const wchar_t **)WindowLongA) ) /*0x46f18d*/
        {
          ++v125; /*0x46f194*/
          v123 += 4; /*0x46f1a4*/
          if ( v123 >= (int)&dword_A8DAB0 ) /*0x46f1a8*/
          {
            v102 = v127; /*0x46f1aa*/
            goto LABEL_176; /*0x46f1ae*/
          }
        }
        v102 = 1; /*0x46f1b0*/
LABEL_176:
        v123 = *((_DWORD *)hDlg + 4); /*0x46f1b2*/
        if ( v102 ) /*0x46f1bf*/
        {
          v125 = (LPARAM)GetStringCSF(g_Str_TXT_WAITING, 0, g_Str_File_CampScor_cpp, 1213); /*0x46f1d7*/
          v103 = GetDlgItem(hWnd, v123); /*0x46f1e1*/
          SendMessageA(v103, 0x4B2u, 0, v125); /*0x46f1f0*/
        }
        else if ( !*((_BYTE *)&g_GameModeOptionState + v125) ) /*0x46f1f8*/
        {
          v125 = (LPARAM)GetStringCSF(aTxtAborted, 0, g_Str_File_CampScor_cpp, 1216); /*0x46f218*/
          v104 = GetDlgItem(hWnd, v123); /*0x46f222*/
          SendMessageA(v104, 0x4B2u, 0, v125); /*0x46f231*/
          v105 = GetDlgItem(hWnd, 1745); /*0x46f23b*/
          EnableWindow(v105, 0); /*0x46f23e*/
        }
        v106 = GetDlgItem(hWnd, v123); /*0x46f24a*/
        SendMessageA(v106, 0x498u, 0, v87); /*0x46f255*/
        v59 = ++nIDDlgItem < (int)dword_A8D580; /*0x46f270*/
        ++WindowLongA; /*0x46f276*/
        hDlg += 6; /*0x46f27a*/
      }
      while ( v59 ); /*0x46f27e*/
    }
    if ( (unsigned __int8)Settings::CheckString() ) /*0x46f284*/
    {
      v107 = GetDlgItem(hWnd, 1842); /*0x46f293*/
      if ( v107 ) /*0x46f297*/
        EnableWindow(v107, 1); /*0x46f29c*/
    }
    SetDialogPlayerName(hWnd, (int)dword_A8B23C); /*0x46f2aa*/
    if ( byte_89E05D ) /*0x46f2b8*/
    {
      CampaignScore::LookupDialogHash((CampaignScore *)hWnd); /*0x46f2ba*/
      Dialog::ShowPlayerName((Dialog *)hWnd); /*0x46f2c1*/
      Session::StartGame((Session *)hWnd); /*0x46f2c8*/
    }
    else
    {
      CampaignScore::FindDialogTemplate((CampaignScore *)hWnd); /*0x46f2cf*/
    }
    byte_89E05C = 0; /*0x46f2d9*/
    ResetLobbyFactionTable((int)dword_A8B230[127].vtable2); /*0x46f2e6*/
    return 0; /*0x46f2f7*/
  }
  if ( a2 != 2 ) /*0x46e042*/
  {
    if ( a2 == 15 ) /*0x46e047*/
    {
      if ( g_UIControlState ) /*0x46e055*/
        Skirmish::RenderPreview(g_UIControlState, hWnd); /*0x46e058*/
      Dialog::StopBink((Dialog *)hWnd); /*0x46e05f*/
      ValidateRect(hWnd, 0); /*0x46e067*/
      return 0; /*0x46e079*/
    }
    return 0; /*0x46f4c9*/
  }
  v7 = g_UIControlState; /*0x46e07c*/
  if ( g_UIControlState ) /*0x46e084*/
  {
    ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x46e088*/
    __3_YAXPAX_Z(v7); /*0x46e08e*/
    g_UIControlState = 0; /*0x46e096*/
  }
  KillTimer(hWnd, 1u); /*0x46e0a3*/
  return 0; /*0x46e06d*/
}


// ==== 0x0046F5E0  ErrorCode::Map  this=ErrorCode  sig=csp ====
int __thiscall ErrorCode::Map(ErrorCode *this)
{
  if ( this )
    return this != (ErrorCode *)1 ? -1 : 1042;
  else
    return 1041; /*0x46f5e6*/
}



// ==== 0x0046F600  Skirmish::FillPlayerNames  this=Skirmish  sig=csp ====
int __thiscall Skirmish::FillPlayerNames(Skirmish *this)
{
  int result; // eax
  int v2; // ebx
  HWND v3; // esi
  LPARAM v4; // edi
  LRESULT v5; // ebx
  int i; // [esp+14h] [ebp-8h]
  HWND DlgItem; // [esp+18h] [ebp-4h]

  result = 0; /*0x46f60b*/
  for ( i = 0; i < 8; ++i ) /*0x46f613*/
  {
    if ( result ) /*0x46f619*/
    {
      if ( result != 1 ) /*0x46f625*/
        goto LABEL_9; /*0x46f625*/
      v2 = 1042; /*0x46f62b*/
    }
    else
    {
      v2 = 1041; /*0x46f61b*/
    }
    DlgItem = GetDlgItem((HWND)this, v2); /*0x46f643*/
    if ( ShowWindow(DlgItem, 0) ) /*0x46f647*/
    {
      v3 = GetDlgItem((HWND)this, v2); /*0x46f65e*/
      v4 = dword_A8DA90[i]; /*0x46f664*/
      if ( v4 ) /*0x46f66d*/
      {
        SendDlgItemMessageA((HWND)this, v2, 0x14Bu, 0, 0); /*0x46f67e*/
        v5 = SendMessageA(v3, 0x4C2u, 0, v4); /*0x46f68f*/
        SendMessageA(v3, 0x151u, v5, v4); /*0x46f699*/
        SendMessageA(v3, 0x14Eu, v5, 0); /*0x46f6a4*/
        ShowWindow(DlgItem, 5); /*0x46f6ad*/
      }
    }
LABEL_9:
    result = i + 1; /*0x46f6b3*/
  }
  return result; /*0x46f6c5*/
}



// ==== 0x0046F6D0  Count::SetupAllCountriesLobby  this=Count  sig=csp ====
BOOL __thiscall Count::SetupAllCountriesLobby(Count *this)
{
  ObjectClass *v1; // ecx
  int **v2; // esi
  int ResourceID2CSF; // ebp
  BOOL result; // eax
  int *v5; // ebx
  int v6; // edi
  int PlayerSide; // esi
  int **v8; // [esp+10h] [ebp-10h]
  int v10; // [esp+18h] [ebp-8h]
  HWND hWnd; // [esp+1Ch] [ebp-4h]

  v1 = 0; /*0x46f6da*/
  v2 = (int **)dword_A8DA90; /*0x46f6dc*/
  v10 = 0; /*0x46f6e2*/
  v8 = (int **)dword_A8DA90; /*0x46f6e6*/
  do /*0x46f7ff*/
  {
    ResourceID2CSF = GetResourceID2CSF(v1); /*0x46f6ef*/
    hWnd = GetDlgItem((HWND)this, ResourceID2CSF); /*0x46f700*/
    result = ShowWindow(hWnd, 0); /*0x46f704*/
    if ( result ) /*0x46f70c*/
    {
      v5 = *v2; /*0x46f718*/
      v6 = -2; /*0x46f71c*/
      if ( dword_A8B23C && (*(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4) ) /*0x46f730*/
        v6 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 10))(dword_A8B23C); /*0x46f737*/
      if ( (unsigned __int8)Player::IsObserver((Player *)v5) ) /*0x46f73b*/
      {
        PlayerSide = (int)*(v2 - 2557); /*0x46f744*/
      }
      else if ( v5 == (int *)g_HouseClass_ObserverFlags ) /*0x46f752*/
      {
        PlayerSide = v6; /*0x46f754*/
      }
      else if ( v5 == (int *)g_Lobby_PlayerCount ) /*0x46f75e*/
      {
        PlayerSide = v6; /*0x46f760*/
      }
      else if ( v5 == (int *)g_Lobby_PlayerReady ) /*0x46f76a*/
      {
        PlayerSide = v6; /*0x46f76c*/
      }
      else if ( v5 == (int *)g_Lobby_MaxPlayers ) /*0x46f776*/
      {
        PlayerSide = -3; /*0x46f778*/
      }
      else
      {
        PlayerSide = SessionClass::GetPlayerSide(v5); /*0x46f786*/
      }
      if ( dword_A8B23C /*0x46f795*/
        && !(*((unsigned __int8 (__thiscall **)(ObjectClass *, int))dword_A8B23C->AbstractClass + 7))(
              dword_A8B23C,
              PlayerSide) )
      {
        PlayerSide = v6; /*0x46f79e*/
        if ( (unsigned __int8)Player::IsObserver((Player *)v5) ) /*0x46f7a0*/
        {
          *(v8 - 2557) = (int *)v6; /*0x46f7ad*/
        }
        else if ( (unsigned __int8)IsKnownPointer((ObjectClass *)v5) ) /*0x46f7b7*/
        {
          SessionClass::SetPlayerOption(*v8, v6); /*0x46f7c7*/
        }
      }
      SetupLobbyCountryCombo((HWND)this, ResourceID2CSF, PlayerSide); /*0x46f7d3*/
      result = ShowWindow(hWnd, 5); /*0x46f7df*/
      v2 = v8; /*0x46f7e5*/
    }
    ++v2; /*0x46f7ed*/
    v1 = (ObjectClass *)++v10; /*0x46f7f0*/
    v8 = v2; /*0x46f7fb*/
  }
  while ( (int)v2 < (int)&dword_A8DAB0 ); /*0x46f7ff*/
  return result; /*0x46f805*/
}



// ==== 0x0046F810  GetLobbyPlayerColor  this=ObjectClass  sig=ida-proto ====
int __fastcall Lobby_GetPlayerColor(int a1)
{
  wchar_t *v2; // esi

  v2 = (wchar_t *)*(&dword_A8DA90 + a1); /*0x46f814*/
  if ( Player::IsObserver(v2) ) /*0x46f81d*/
    return MEMORY[0xA8B2BC][a1]; /*0x46f826*/
  if ( v2 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x46f836*/
    return -2; /*0x46f839*/
  if ( v2 == (wchar_t *)g_Lobby_PlayerCount ) /*0x46f846*/
    return -2; /*0x46f849*/
  if ( v2 == g_Lobby_PlayerReady ) /*0x46f856*/
    return -2; /*0x46f859*/
  if ( v2 == (wchar_t *)g_Lobby_MaxPlayers ) /*0x46f866*/
    return -2; /*0x46f869*/
  return SessionClass::GetPlayerColor((int)v2); /*0x46f82d*/
}



// ==== 0x0046F880  GetHouseClassSideIndex  this=ObjectClass  sig=ida-proto ====
int __fastcall HouseClass_GetSideIndex(int a1)
{
  wchar_t *v2; // esi

  v2 = (wchar_t *)*(&dword_A8DA90 + a1); /*0x46f884*/
  if ( Player::IsObserver(v2) ) /*0x46f88d*/
    return MEMORY[0xA8B2DC][a1]; /*0x46f896*/
  if ( v2 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x46f8a6*/
    return -2; /*0x46f8a9*/
  if ( v2 == (wchar_t *)g_Lobby_PlayerCount ) /*0x46f8b6*/
    return -2; /*0x46f8b9*/
  if ( v2 == g_Lobby_PlayerReady ) /*0x46f8c6*/
    return -2; /*0x46f8c9*/
  if ( v2 == (wchar_t *)g_Lobby_MaxPlayers ) /*0x46f8d6*/
    return -2; /*0x46f8d9*/
  return SessionClass::GetOption((int)v2); /*0x46f89d*/
}



// ==== 0x0046F8F0  Skirmish::SetupAllSpawnLocations  this=Skirmish  sig=csp ====
void __thiscall Skirmish::SetupAllSpawnLocations(Skirmish *this)
{
  ObjectClass *v1; // ebp
  int ResourceIDCSF; // eax
  SessionClass *v4; // esi
  int v5; // edi
  int PlayerColor; // eax
  ObjectClass *v7; // ebx
  int *v8; // edi
  int v9; // eax
  SessionClass *v10; // esi
  int v11; // ebp
  int v12; // eax
  ObjectClass *v14; // [esp+14h] [ebp-4h]

  v1 = dword_A8DA8C; /*0x46f8f5*/
  v14 = dword_A8DA8C; /*0x46f906*/
  if ( dword_A8DA8C != (ObjectClass *)-1 ) /*0x46f90a*/
  {
    ResourceIDCSF = GetResourceIDCSF(dword_A8DA8C); /*0x46f90e*/
    v4 = (SessionClass *)dword_A8DA90[(_DWORD)v1]; /*0x46f913*/
    v5 = ResourceIDCSF; /*0x46f91a*/
    if ( (unsigned __int8)Player::IsObserver((Player *)v4) ) /*0x46f91e*/
    {
      PlayerColor = *(_DWORD *)&stru_A8B250.__pad_0[4 * (_DWORD)v1 + 108]; /*0x46f927*/
    }
    else if ( v4 == (SessionClass *)g_HouseClass_ObserverFlags ) /*0x46f936*/
    {
      PlayerColor = -2; /*0x46f938*/
    }
    else if ( v4 == (SessionClass *)g_Lobby_PlayerCount ) /*0x46f945*/
    {
      PlayerColor = -2; /*0x46f947*/
    }
    else if ( v4 == (SessionClass *)g_Lobby_PlayerReady ) /*0x46f954*/
    {
      PlayerColor = -2; /*0x46f956*/
    }
    else if ( v4 == (SessionClass *)g_Lobby_MaxPlayers ) /*0x46f963*/
    {
      PlayerColor = -2; /*0x46f965*/
    }
    else
    {
      PlayerColor = SessionClass::GetPlayerColor(v4); /*0x46f96e*/
    }
    SetupSkirmishSpawnLocations((HWND)this, v5, PlayerColor); /*0x46f978*/
  }
  v7 = 0; /*0x46f97d*/
  v8 = (int *)&stru_A8B250.__pad_0[108]; /*0x46f97f*/
  do /*0x46fa03*/
  {
    if ( v7 != v1 ) /*0x46f986*/
    {
      v9 = GetResourceIDCSF(v7); /*0x46f98a*/
      v10 = (SessionClass *)v8[2549]; /*0x46f98f*/
      v11 = v9; /*0x46f995*/
      if ( (unsigned __int8)Player::IsObserver((Player *)v10) ) /*0x46f999*/
      {
        v12 = *v8; /*0x46f9a2*/
      }
      else if ( v10 == (SessionClass *)g_HouseClass_ObserverFlags ) /*0x46f9ac*/
      {
        v12 = -2; /*0x46f9ae*/
      }
      else if ( v10 == (SessionClass *)g_Lobby_PlayerCount ) /*0x46f9bb*/
      {
        v12 = -2; /*0x46f9bd*/
      }
      else if ( v10 == (SessionClass *)g_Lobby_PlayerReady ) /*0x46f9ca*/
      {
        v12 = -2; /*0x46f9cc*/
      }
      else if ( v10 == (SessionClass *)g_Lobby_MaxPlayers ) /*0x46f9d9*/
      {
        v12 = -2; /*0x46f9db*/
      }
      else
      {
        v12 = SessionClass::GetPlayerColor(v10); /*0x46f9e4*/
      }
      SetupSkirmishSpawnLocations((HWND)this, v11, v12); /*0x46f9f0*/
      v1 = v14; /*0x46f9f5*/
    }
    ++v8; /*0x46f9f9*/
    v7 = (ObjectClass *)((char *)v7 + 1); /*0x46f9fc*/
  }
  while ( (int)v8 < (int)&stru_A8B250.__pad_0[140] ); /*0x46fa03*/
}



// ==== 0x0046FA20  Lobby::UpdateReadyIcons  this=Lobby  sig=csp ====
int __thiscall Lobby::UpdateReadyIcons(Lobby *this)
{
  int v2; // ebp
  int result; // eax
  int v4; // esi
  ObjectClass *v5; // ecx
  int v6; // eax
  HWND v7; // edx
  int v8; // [esp+10h] [ebp-4h]

  v2 = HashTable::Find(&g_DialogHashTable, (const char *)stru_81AF8C.?[4], 0); /*0x46fa3f*/
  result = HashTable::Find(&g_DialogHashTable, (const char *)stru_81AF8C.?[5], 0); /*0x46fa49*/
  v4 = 0; /*0x46fa54*/
  v8 = result; /*0x46fa56*/
  do /*0x46fab0*/
  {
    v5 = (ObjectClass *)dword_A8DA90[v4]; /*0x46fa5a*/
    if ( v5 ) /*0x46fa63*/
    {
      result = IsKnownPointer(v5); /*0x46fa65*/
      if ( (_BYTE)result ) /*0x46fa6c*/
      {
        if ( v4 ) /*0x46fa70*/
        {
          if ( v4 != 1 ) /*0x46fa7c*/
            goto LABEL_15; /*0x46fa7c*/
          v6 = 1747; /*0x46fa7e*/
        }
        else
        {
          v6 = 1746; /*0x46fa72*/
        }
        result = (int)GetDlgItem((HWND)this, v6); /*0x46fa85*/
        if ( result ) /*0x46fa8b*/
        {
          if ( *((_BYTE *)&g_GameModeOptionState + v4) ) /*0x46fa8d*/
          {
            if ( v4 ) /*0x46fa99*/
              v7 = (HWND)v8; /*0x46fa9f*/
            else
              v7 = (HWND)v2; /*0x46fa9b*/
          }
          else
          {
            v7 = 0; /*0x46faa5*/
          }
          result = (int)CacheDialogInvalidate((HWND)result, v7); /*0x46faa7*/
        }
      }
    }
LABEL_15:
    ++v4; /*0x46faac*/
  }
  while ( v4 < 8 ); /*0x46fab0*/
  return result; /*0x46fab2*/
}



// ==== 0x0046FAC0  Lobby::SetupAllFactionSlots  this=Lobby  sig=csp ====
int __thiscall Lobby::SetupAllFactionSlots(Lobby *this)
{
  ObjectClass *v1; // ebx
  int *v2; // edi
  int ResourceID3CSF; // eax
  int *v4; // esi
  int v5; // ebp
  int Option; // eax
  int result; // eax

  v1 = 0; /*0x46fac9*/
  v2 = (int *)&stru_A8B250.__pad_0[140]; /*0x46facb*/
  do /*0x46fb47*/
  {
    ResourceID3CSF = GetResourceID3CSF(v1); /*0x46fad2*/
    v4 = (int *)v2[2541]; /*0x46fad7*/
    v5 = ResourceID3CSF; /*0x46fadd*/
    if ( (unsigned __int8)Player::IsObserver((Player *)v4) ) /*0x46fae1*/
    {
      Option = *v2; /*0x46faea*/
    }
    else if ( v4 == (int *)g_HouseClass_ObserverFlags ) /*0x46faf4*/
    {
      Option = -2; /*0x46faf6*/
    }
    else if ( v4 == (int *)g_Lobby_PlayerCount ) /*0x46fb03*/
    {
      Option = -2; /*0x46fb05*/
    }
    else if ( v4 == (int *)g_Lobby_PlayerReady ) /*0x46fb12*/
    {
      Option = -2; /*0x46fb14*/
    }
    else if ( v4 == (int *)g_Lobby_MaxPlayers ) /*0x46fb21*/
    {
      Option = -2; /*0x46fb23*/
    }
    else
    {
      Option = SessionClass::GetOption(v4); /*0x46fb2c*/
    }
    result = SetupLobbyFactionSlots((HWND)this, v5, Option); /*0x46fb38*/
    ++v2; /*0x46fb3d*/
    v1 = (ObjectClass *)((char *)v1 + 1); /*0x46fb40*/
  }
  while ( (int)v2 < (int)&stru_A8B250.__pad_0[172] ); /*0x46fb47*/
  return result; /*0x46fb49*/
}



// ==== 0x0046FB50  Lobby::EnableStartButton  this=Lobby  sig=csp ====
int __thiscall Lobby::EnableStartButton(Lobby *this)
{
  HWND DlgItem; // esi
  int result; // eax
  HWND v4; // edi

  DlgItem = GetDlgItem((HWND)this, 1745); /*0x46fb63*/
  result = (int)GetDlgItem((HWND)this, 1472); /*0x46fb6b*/
  v4 = (HWND)result; /*0x46fb6f*/
  if ( DlgItem ) /*0x46fb71*/
  {
    if ( dword_A8DA84 >= (int)dword_A8D580 ) /*0x46fb80*/
    {
      if ( *((_BYTE *)&g_GameModeOptionState + (_DWORD)dword_A8DA8C) ) /*0x46fba0*/
        return EnableWindow(DlgItem, 0); /*0x46fbad*/
      else
        return EnableWindow(DlgItem, 1); /*0x46fbba*/
    }
    else
    {
      result = EnableWindow(DlgItem, 0); /*0x46fb8b*/
      if ( v4 ) /*0x46fb8f*/
        return EnableWindow(v4, 1); /*0x46fb94*/
    }
  }
  return result; /*0x46fb96*/
}



// ==== 0x0046FC00  CampaignScore::ProcessScreen  this=CampaignScore  sig=csp ====
void __userpurge CampaignScore::ProcessScreen(
        int ResourceID3@<ebp>,
        int a2,
        _BYTE *Block,
        int a4,
        __int16 a5,
        int a6,
        int a7,
        int a8,
        char a9,
        int a10,
        wchar_t *Source)
{
  _BYTE *v12; // edi
  int v13; // edx
  int *v14; // eax
  signed int v15; // esi
  _DWORD *v16; // ecx
  char *v17; // eax
  size_t v18; // edx
  HWND Dialog; // eax
  Dialog *v20; // esi
  int i; // esi
  Skirmish *v22; // eax
  Count *v23; // edi
  int j; // esi
  int HouseClassSideIndex; // eax
  int v26; // eax
  bool v27; // zf
  int k; // esi
  int m; // eax
  int n; // esi
  signed int v31; // edi
  char **v32; // ebp
  int v33; // esi
  wchar_t *StringCSF; // edi
  HWND DlgItem; // eax
  char **v36; // edi
  Skirmish *v37; // eax
  Count *v38; // edi
  int ii; // esi
  int v40; // eax
  int jj; // eax
  int kk; // esi
  int nn; // eax
  signed int v44; // edi
  char **v45; // ebp
  Lobby *v46; // ebx
  char **v47; // edi
  int v48; // esi
  wchar_t *v49; // edi
  HWND v50; // eax
  int v51; // edi
  int v52; // eax
  Skirmish *v53; // eax
  Count *v54; // edi
  int i2; // esi
  int v56; // eax
  HWND v57; // eax
  HWND v58; // eax
  wchar_t *v59; // eax
  signed int v60; // edi
  char **v61; // ebp
  int v62; // esi
  wchar_t *v63; // edi
  HWND v64; // eax
  char **v65; // edi
  char *v66; // eax
  int v67; // edi
  ObjectClass **v68; // esi
  Count *v69; // esi
  ErrorCode *v70; // ecx
  int v71; // eax
  int v72; // edi
  HWND v73; // esi
  LRESULT v74; // edi
  bool v75; // cc
  HWND v76; // eax
  int i3; // esi
  int v78; // edi
  ObjectClass **v79; // esi
  Count *v80; // ebx
  ErrorCode *v81; // ecx
  int v82; // eax
  int v83; // edi
  HWND v84; // esi
  LRESULT v85; // edi
  int i4; // esi
  int ResourceID3CSF; // edi
  int v88; // eax
  int mm; // esi
  int i1; // esi
  char *v91; // [esp-4h] [ebp-918h]
  LRESULT (__stdcall *v92)(HWND, UINT, WPARAM, LPARAM); // [esp-4h] [ebp-918h]
  ObjectClass *v93; // [esp+0h] [ebp-914h]
  ObjectClass *v94; // [esp+0h] [ebp-914h]
  char v95; // [esp+13h] [ebp-901h]
  HWND hDlg; // [esp+14h] [ebp-900h]
  int *v97; // [esp+18h] [ebp-8FCh]
  int *v98; // [esp+18h] [ebp-8FCh]
  int v99; // [esp+1Ch] [ebp-8F8h]
  int v100; // [esp+1Ch] [ebp-8F8h]
  HWND v101; // [esp+20h] [ebp-8F4h]
  LONG dwNewLong; // [esp+24h] [ebp-8F0h] BYREF
  HWND hWnd; // [esp+28h] [ebp-8ECh]
  int v104[113]; // [esp+2Ch] [ebp-8E8h] BYREF
  __int16 v105; // [esp+1F0h] [ebp-724h]
  char v106; // [esp+1F2h] [ebp-722h]
  int v107[113]; // [esp+1F4h] [ebp-720h] BYREF
  __int16 v108; // [esp+3B8h] [ebp-55Ch]
  char v109; // [esp+3BAh] [ebp-55Ah]
  int v110[113]; // [esp+3BCh] [ebp-558h] BYREF
  __int16 v111; // [esp+580h] [ebp-394h]
  char v112; // [esp+582h] [ebp-392h]
  int v113[113]; // [esp+584h] [ebp-390h] BYREF
  __int16 v114; // [esp+748h] [ebp-1CCh]
  char v115; // [esp+74Ah] [ebp-1CAh]
  int v116[113]; // [esp+74Ch] [ebp-1C8h] BYREF
  __int16 v117; // [esp+910h] [ebp-4h]
  char v118; // [esp+912h] [ebp-2h]

  byte_89E05D = a9; /*0x46fc21*/
  dword_89E054 = a6; /*0x46fc2e*/
  dword_89E058 = 0; /*0x46fc42*/
  dword_89E050 = a8; /*0x46fc48*/
  stru_81AF8C.?[6] = a10; /*0x46fc4e*/
  v95 = 0; /*0x46fc53*/
  wcscpy(&word_89E060, Source); /*0x46fc57*/
  v12 = Block; /*0x46fc61*/
  v13 = dword_89E054; /*0x46fc76*/
  g_GameModeOptionState = 0; /*0x46fc7f*/
  dword_89E004 = 0; /*0x46fc86*/
  if ( dword_89E054 > 0 ) /*0x46fc8b*/
  {
    v14 = (int *)&unk_89DF80; /*0x46fc8d*/
    do /*0x46fc9f*/
    {
      ResourceID3 = *(int *)((char *)v14 + Block - (_BYTE *)&unk_89DF80); /*0x46fc96*/
      *v14++ = ResourceID3; /*0x46fc99*/
      --v13; /*0x46fc9e*/
    }
    while ( v13 ); /*0x46fc9f*/
  }
  sub_46DA70(v93); /*0x46fca3*/
  v15 = dword_A8D580; /*0x46fca8*/
  if ( (int)dword_A8D580 > 0 ) /*0x46fcb0*/
  {
    v16 = &unk_89DF80; /*0x46fcb2*/
    v17 = (char *)&unk_A8D1FC; /*0x46fcb7*/
    v18 = dword_A8D580; /*0x46fcbc*/
    do /*0x46fcc7*/
    {
      *v16 = v17; /*0x46fcbe*/
      v17 += 112; /*0x46fcc0*/
      ++v16; /*0x46fcc3*/
      --v18; /*0x46fcc6*/
    }
    while ( v18 ); /*0x46fcc7*/
  }
  if ( v15 > 1 ) /*0x46fccc*/
    qsort(&unk_89DF80, v15, 4u, Compare::Field96); /*0x46fcdb*/
  CampaignScore::LoadCampaignScoreAssetsGame((CampaignScore *)dword_A8B230[374].NeedsSaveOrLink); /*0x46fcef*/
  Screen::Capture(1, 0, 0, ResourceID3); /*0x46fcf8*/
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x46fd04*/
    Network::Disconnect((Network *)&unk_A8E9C0); /*0x46fd0b*/
  Dialog = (HWND)CreateDialog(0xBC6u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))CampaignScore::DialogProc, 0); /*0x46fd1b*/
  v20 = (Dialog *)Dialog; /*0x46fd20*/
  dwNewLong = 0; /*0x46fd22*/
  hDlg = Dialog; /*0x46fd28*/
  if ( Dialog ) /*0x46fd2c*/
  {
    SetWindowLongA(Dialog, 8, (LONG)&dwNewLong); /*0x46fd3a*/
    Dialog::Show(v20); /*0x46fd42*/
    while ( 1 ) /*0x4700a7*/
    {
      while ( 1 ) /*0x470092*/
      {
        do /*0x470092*/
        {
LABEL_13:
          if ( (unsigned int)dwNewLong > 1 ) /*0x46fd52*/
          {
LABEL_165:
            Screen::Capture(1, 0, 1, ResourceID3); /*0x470b99*/
            Dialog::Destroy((Dialog *)hDlg); /*0x470ba6*/
            Screen::Capture(1, 0, 1, ResourceID3); /*0x470baf*/
            v12 = Block; /*0x470bb4*/
            goto LABEL_166; /*0x470bb4*/
          }
          MessageLoop(); /*0x46fd5c*/
          if ( dwNewLong == 1 ) /*0x46fd65*/
          {
            if ( byte_89E05C ) /*0x46fd72*/
            {
              *((_BYTE *)&g_GameModeOptionState + (_DWORD)dword_A8DA8C) = 1; /*0x46fd7d*/
              if ( *(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4 ) /*0x46fd91*/
              {
                if ( (unsigned __int8)Settings::CheckString() && a9 ) /*0x46fda9*/
                  Game::SendCampaignOptions(); /*0x46fdab*/
                memset(v107, 0, sizeof(v107)); /*0x46fdbe*/
                v108 = 0; /*0x46fdc6*/
                v109 = 0; /*0x46fdc8*/
                v107[0] = 38; /*0x46fdc9*/
                strcpy((char *)&v107[1], ToWideStringChar((char *)*dword_A8DA78)); /*0x46fdf8*/
                for ( i = 1; i < dword_A8DA84; ++i ) /*0x46fe0a*/
                {
                  Network::SendToPlayer((int)&unk_A8E9C0, (int)v107, 47, 1, (wchar_t *)dword_A8DA78[i]); /*0x46fe26*/
                  Network::ReceiveLoop(&unk_A8E9C0); /*0x46fe30*/
                }
              }
              v22 = (Skirmish *)Dialog::FindByHandle((Dialog *)0xBC6); /*0x46fe44*/
              v23 = (Count *)v22; /*0x46fe49*/
              if ( v22 ) /*0x46fe4d*/
              {
                Skirmish::FillPlayerNames(v22); /*0x46fe55*/
                Count::SetupAllCountriesLobby(v23); /*0x46fe5c*/
                Skirmish::SetupAllSpawnLocations((Skirmish *)v23); /*0x46fe63*/
                for ( j = 0; j < 8; ++j ) /*0x46fe68*/
                {
                  ResourceID3 = GetResourceID3CSF((ObjectClass *)j); /*0x46fe73*/
                  HouseClassSideIndex = GetHouseClassSideIndex(j); /*0x46fe75*/
                  SetupLobbyFactionSlots((HWND)v23, ResourceID3, HouseClassSideIndex); /*0x46fe7f*/
                }
                Lobby::UpdateReadyIcons((Lobby *)v23); /*0x46fe8c*/
                Lobby::EnableStartButton((Lobby *)v23); /*0x46fe93*/
              }
            }
            else
            {
              v26 = *(_DWORD *)&dword_A8B238; /*0x46fea3*/
              v27 = *(_DWORD *)&dword_A8B238 == 3; /*0x46fea8*/
              *((_BYTE *)&g_GameModeOptionState + (_DWORD)dword_A8DA8C) = 0; /*0x46feab*/
              if ( v27 || v26 == 4 ) /*0x46feb7*/
              {
                memset(v116, 0, sizeof(v116)); /*0x46fed1*/
                v117 = 0; /*0x46fed3*/
                v118 = 0; /*0x46fed5*/
                v116[0] = 37; /*0x46fed6*/
                strcpy((char *)&v116[1], ToWideStringChar((char *)*dword_A8DA78)); /*0x46ff05*/
                for ( k = 1; k < dword_A8DA84; ++k ) /*0x46ff17*/
                {
                  Network::SendToPlayer((int)&unk_A8E9C0, (int)v116, 47, 1, (wchar_t *)dword_A8DA78[k]); /*0x46ff33*/
                  Network::ReceiveLoop(&unk_A8E9C0); /*0x46ff3d*/
                }
              }
            }
            if ( (unsigned __int8)Settings::CheckString() ) /*0x46ff4c*/
            {
              for ( m = 0; m < 8; ++m ) /*0x46ff59*/
              {
                if ( !*((_BYTE *)&g_GameModeOptionState + m) ) /*0x46ff5b*/
                  break; /*0x46ff63*/
              }
              if ( m == 8 ) /*0x46ff6e*/
              {
                if ( !a9 ) /*0x46ff7d*/
                  goto LABEL_158; /*0x46ff7d*/
                memset(v113, 0, sizeof(v113)); /*0x46ff91*/
                v114 = 0; /*0x46ff99*/
                v115 = 0; /*0x46ff9b*/
                v113[0] = 52; /*0x46ff9c*/
                strcpy((char *)&v113[1], ToWideStringChar((char *)*dword_A8DA78)); /*0x46ffcb*/
                for ( n = 1; n < dword_A8DA84; ++n ) /*0x46ffdd*/
                {
                  Network::SendToPlayer((int)&unk_A8E9C0, (int)v113, 47, 1, (wchar_t *)dword_A8DA78[n]); /*0x46fff9*/
                  Network::ReceiveLoop(&unk_A8E9C0); /*0x470003*/
                }
                (*((void (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 26))(dword_A8B23C); /*0x47001a*/
                Player::RandomAssign(&dword_A8B238); /*0x470022*/
                ++dword_89E058; /*0x470027*/
                Game::SendCampaignOptions(); /*0x47002d*/
              }
            }
            if ( !a9 ) /*0x47003b*/
            {
LABEL_158:
              byte_89E04C = 0; /*0x470a65*/
              goto LABEL_165; /*0x470a6c*/
            }
            dwNewLong = 0; /*0x470041*/
          }
          Network::ReceiveLoop(&unk_A8E9C0); /*0x47004e*/
        }
        while ( !Network::Send( /*0x470092*/
                   (Network *)&unk_A8E9C0,
                   (int)&stru_A8D600.__pad_34[4],
                   (int)&unk_A8D800,
                   (int)dword_A8D804,
                   (int)&word_A8D810)
             || word_A8D810 != 0xAA04
             || SendNetworkPlayerOptions(&stru_A8D600.__pad_34[4], (int)dword_A8D804) );
        if ( *(_DWORD *)&stru_A8D600.__pad_34[4] != 38 ) /*0x4700a7*/
          break; /*0x4700a7*/
        v31 = 0; /*0x4700b2*/
        if ( (int)dword_A8D580 > 0 ) /*0x4700b6*/
        {
          v32 = (char **)&unk_89DF80; /*0x4700bc*/
          while ( strcmp(&stru_A8D600.__pad_34[8], ToWideStringChar(*v32)) ) /*0x4700fb*/
          {
            ++v31; /*0x470102*/
            ++v32; /*0x470103*/
            if ( v31 >= (int)dword_A8D580 ) /*0x470108*/
              goto LABEL_52; /*0x470108*/
          }
          v33 = stru_81AF8C.?[6 * v31 + 12]; /*0x47011b*/
          StringCSF = GetStringCSF(g_Str_TXT_READY, 0, g_Str_File_CampScor_cpp, 1576); /*0x470132*/
          DlgItem = GetDlgItem(hDlg, v33); /*0x470134*/
          SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)StringCSF); /*0x470143*/
        }
LABEL_52:
        ResourceID3 = 0; /*0x470149*/
        v36 = (char **)dword_A8DA90; /*0x47014b*/
        while ( strcmp(&stru_A8D600.__pad_34[8], ToWideStringChar(*v36)) ) /*0x470189*/
        {
          ++v36; /*0x47018b*/
          ++ResourceID3; /*0x47018e*/
          if ( (int)v36 >= (int)&dword_A8DAB0 ) /*0x470195*/
            goto LABEL_57; /*0x470195*/
        }
        *((_BYTE *)&g_GameModeOptionState + ResourceID3) = 1; /*0x470199*/
LABEL_57:
        v37 = (Skirmish *)Dialog::FindByHandle((Dialog *)0xBC6); /*0x4701a0*/
        v38 = (Count *)v37; /*0x4701aa*/
        if ( v37 ) /*0x4701ae*/
        {
          Skirmish::FillPlayerNames(v37); /*0x4701b2*/
          Count::SetupAllCountriesLobby(v38); /*0x4701b9*/
          Skirmish::SetupAllSpawnLocations((Skirmish *)v38); /*0x4701c0*/
          for ( ii = 0; ii < 8; ++ii ) /*0x4701c5*/
          {
            ResourceID3 = GetResourceID3CSF((ObjectClass *)ii); /*0x4701d0*/
            v40 = GetHouseClassSideIndex(ii); /*0x4701d2*/
            SetupLobbyFactionSlots((HWND)v38, ResourceID3, v40); /*0x4701dc*/
          }
          Lobby::UpdateReadyIcons((Lobby *)v38); /*0x4701e9*/
          Lobby::EnableStartButton((Lobby *)v38); /*0x4701f0*/
        }
        if ( (unsigned __int8)Settings::CheckString() ) /*0x4701f5*/
        {
          for ( jj = 0; jj < 8; ++jj ) /*0x470202*/
          {
            if ( !*((_BYTE *)&g_GameModeOptionState + jj) ) /*0x470204*/
              break; /*0x47020c*/
          }
          if ( jj == 8 && a9 ) /*0x470226*/
          {
            memset(v110, 0, sizeof(v110)); /*0x47023a*/
            v111 = 0; /*0x47023c*/
            v112 = 0; /*0x47023e*/
            v110[0] = 52; /*0x470244*/
            strcpy((char *)&v110[1], ToWideStringChar((char *)*dword_A8DA78)); /*0x470273*/
            for ( kk = 1; kk < dword_A8DA84; ++kk ) /*0x470285*/
            {
              Network::SendToPlayer((int)&unk_A8E9C0, (int)v110, 47, 1, (wchar_t *)dword_A8DA78[kk]); /*0x4702a1*/
              Network::ReceiveLoop(&unk_A8E9C0); /*0x4702ab*/
            }
            (*((void (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 26))(dword_A8B23C); /*0x4702c2*/
            Player::RandomAssign(&dword_A8B238); /*0x4702ca*/
            ++dword_89E058; /*0x4702cf*/
            Game::SendCampaignOptions(); /*0x4702d5*/
          }
        }
      }
      switch ( *(_DWORD *)&stru_A8D600.__pad_34[4] ) /*0x4702e2*/
      {
        case 0x23: /*0x4702e2*/
          if ( ++dword_89E058 == dword_A8D580 ) /*0x4702f7*/
          {
            byte_89E04C = 1; /*0x470a7c*/
            memset(v104, 0, sizeof(v104)); /*0x470a83*/
            v105 = 0; /*0x470a85*/
            v106 = 0; /*0x470a87*/
            v104[0] = 49; /*0x470a8d*/
            strcpy((char *)&v104[1], ToWideStringChar((char *)*dword_A8DA78)); /*0x470ab6*/
            for ( mm = 1; mm < dword_A8DA84; ++mm ) /*0x470ac8*/
            {
              Network::SendToPlayer((int)&unk_A8E9C0, (int)v104, 47, 1, (wchar_t *)dword_A8DA78[mm]); /*0x470ae5*/
              Network::ReceiveLoop(&unk_A8E9C0); /*0x470aef*/
            }
            goto LABEL_165; /*0x470afc*/
          }
LABEL_72:
          if ( (unsigned __int8)Settings::CheckString() ) /*0x4702fd*/
          {
            for ( nn = 0; nn < 8; ++nn ) /*0x47030a*/
            {
              if ( !*((_BYTE *)&g_GameModeOptionState + nn) ) /*0x47030c*/
                break; /*0x470314*/
            }
            if ( nn == 8 && a9 ) /*0x47032e*/
            {
              byte_89E04C = 1; /*0x470b1a*/
              memset(v104, 0, sizeof(v104)); /*0x470b21*/
              v105 = 0; /*0x470b29*/
              v106 = 0; /*0x470b2b*/
              v104[0] = 49; /*0x470b2c*/
              strcpy((char *)&v104[1], ToWideStringChar((char *)*dword_A8DA78)); /*0x470b55*/
              for ( i1 = 1; i1 < dword_A8DA84; ++i1 ) /*0x470b67*/
              {
                Network::SendToPlayer((int)&unk_A8E9C0, (int)v104, 47, 1, (wchar_t *)dword_A8DA78[i1]); /*0x470b80*/
                Network::ReceiveLoop(&unk_A8E9C0); /*0x470b8a*/
              }
              goto LABEL_165; /*0x470b97*/
            }
          }
          break;
        case 0x34: /*0x4702e2*/
          v95 = 1; /*0x47033e*/
          goto LABEL_72; /*0x470343*/
        case 0x24: /*0x4702e2*/
          v44 = 0; /*0x470353*/
          if ( (int)dword_A8D580 <= 0 ) /*0x470357*/
          {
LABEL_86:
            v46 = (Lobby *)hDlg; /*0x4703ab*/
          }
          else
          {
            v45 = (char **)&unk_89DF80; /*0x470359*/
            while ( strcmp(&stru_A8D600.__pad_34[8], ToWideStringChar(*v45)) ) /*0x47039c*/
            {
              ++v44; /*0x4703a3*/
              ++v45; /*0x4703a4*/
              if ( v44 >= (int)dword_A8D580 ) /*0x4703a9*/
                goto LABEL_86; /*0x4703a9*/
            }
            v48 = stru_81AF8C.?[6 * v44 + 12]; /*0x4703f7*/
            v46 = (Lobby *)hDlg; /*0x470408*/
            v49 = GetStringCSF(aTxtAborted, 0, g_Str_File_CampScor_cpp, 1619); /*0x47040e*/
            v50 = GetDlgItem(hDlg, v48); /*0x470410*/
            SendMessageA(v50, 0x4B2u, 0, (LPARAM)v49); /*0x47041f*/
          }
          ResourceID3 = 0; /*0x4703af*/
          v47 = (char **)dword_A8DA90; /*0x4703b1*/
          while ( strcmp(&stru_A8D600.__pad_34[8], ToWideStringChar(*v47)) ) /*0x47042e*/
          {
            ++v47; /*0x470430*/
            ++ResourceID3; /*0x470433*/
            if ( (int)v47 >= (int)&dword_A8DAB0 ) /*0x47043a*/
              goto LABEL_94; /*0x47043a*/
          }
          *((_BYTE *)&g_GameModeOptionState + ResourceID3) = 0; /*0x470444*/
          Lobby::UpdateReadyIcons(v46); /*0x47044b*/
          dword_A8DA90[ResourceID3] = g_HouseClass_ObserverFlags; /*0x470455*/
LABEL_94:
          v51 = 0; /*0x47045c*/
          if ( dword_A8DA84 > 0 ) /*0x470465*/
          {
            while ( strcmp(&stru_A8D600.__pad_34[8], ToWideStringChar((char *)dword_A8DA78[v51])) ) /*0x4704ab*/
            {
              if ( ++v51 >= dword_A8DA84 ) /*0x4704b5*/
                goto LABEL_102; /*0x4704b5*/
            }
            __3_YAXPAX_Z((void *)dword_A8DA78[v51]); /*0x4704c2*/
            v52 = (*(int (__thiscall **)(PtrVector *, _DWORD *))(*(_DWORD *)&stru_A8DA74 + 16))( /*0x4704de*/
                    &stru_A8DA74,
                    &dword_A8DA78[v51]);
            if ( v52 != -1 && v52 < dword_A8DA84 && v52 < --dword_A8DA84 ) /*0x4704f9*/
            {
              do /*0x470511*/
              {
                ++v52; /*0x470501*/
                dword_A8DA78[v52 - 1] = dword_A8DA78[v52]; /*0x470505*/
              }
              while ( v52 < dword_A8DA84 ); /*0x470511*/
            }
          }
LABEL_102:
          v53 = (Skirmish *)Dialog::FindByHandle((Dialog *)0xBC6); /*0x470513*/
          v54 = (Count *)v53; /*0x47051d*/
          if ( v53 ) /*0x470521*/
          {
            Skirmish::FillPlayerNames(v53); /*0x470525*/
            Count::SetupAllCountriesLobby(v54); /*0x47052c*/
            Skirmish::SetupAllSpawnLocations((Skirmish *)v54); /*0x470533*/
            for ( i2 = 0; i2 < 8; ++i2 ) /*0x470538*/
            {
              ResourceID3 = GetResourceID3CSF((ObjectClass *)i2); /*0x470543*/
              v56 = GetHouseClassSideIndex(i2); /*0x470545*/
              SetupLobbyFactionSlots((HWND)v54, ResourceID3, v56); /*0x47054f*/
            }
            Lobby::UpdateReadyIcons((Lobby *)v54); /*0x47055c*/
            Lobby::EnableStartButton((Lobby *)v54); /*0x470563*/
          }
          v57 = GetDlgItem((HWND)v46, 1745); /*0x470576*/
          EnableWindow(v57, 0); /*0x47057f*/
          v58 = GetDlgItem((HWND)v46, 1472); /*0x470589*/
          EnableWindow(v58, 1); /*0x47058c*/
          v91 = CharToWideString(&stru_A8D600.__pad_34[8]); /*0x470598*/
          v59 = GetStringCSF(aGuiPlayerleftc, 0, g_Str_File_CampScor_cpp, 1647); /*0x4705aa*/
          Dialog::ShowMessage(-1, (size_t)v59, v91); /*0x4705b2*/
          break;
        case 0x25: /*0x4702e2*/
          v60 = 0; /*0x4705cd*/
          if ( (int)dword_A8D580 > 0 ) /*0x4705d1*/
          {
            v61 = (char **)&unk_89DF80; /*0x4705d7*/
            while ( strcmp(&stru_A8D600.__pad_34[8], ToWideStringChar(*v61)) ) /*0x47061a*/
            {
              ++v60; /*0x470621*/
              ++v61; /*0x470622*/
              if ( v60 >= (int)dword_A8D580 ) /*0x470627*/
                goto LABEL_114; /*0x470627*/
            }
            v62 = stru_81AF8C.?[6 * v60 + 12]; /*0x47063a*/
            v63 = GetStringCSF(g_Str_TXT_WAITING, 0, g_Str_File_CampScor_cpp, 1655); /*0x470651*/
            v64 = GetDlgItem(hDlg, v62); /*0x470653*/
            SendMessageA(v64, 0x4B2u, 0, (LPARAM)v63); /*0x470662*/
          }
LABEL_114:
          ResourceID3 = 0; /*0x470668*/
          v65 = (char **)dword_A8DA90; /*0x47066a*/
          while ( strcmp(&stru_A8D600.__pad_34[8], ToWideStringChar(*v65)) ) /*0x4706ac*/
          {
            ++v65; /*0x4706ae*/
            ++ResourceID3; /*0x4706b1*/
            if ( (int)v65 >= (int)&dword_A8DAB0 ) /*0x4706b8*/
              goto LABEL_13; /*0x4706b8*/
          }
          *((_BYTE *)&g_GameModeOptionState + ResourceID3) = 0; /*0x4706bf*/
          break;
        case 0x31: /*0x4702e2*/
          byte_89E04C = 1; /*0x470b03*/
          goto LABEL_165; /*0x470b0a*/
        case 0xC: /*0x4702e2*/
          if ( *(_DWORD *)&stru_A8D600.__pad_87[197] == WideString::Hash((wchar_t *)&stru_A8D600.Network_field_0x10) ) /*0x4706e9*/
          {
            v66 = CharToWideString(&stru_A8D600.__pad_34[8]); /*0x4706f9*/
            Dialog::ShowMessage(*(int *)&stru_A8D600.__pad_87[193], (size_t)g_Str_Trace___s_, v66, 11064936); /*0x47070a*/
          }
          break;
        case 0x32: /*0x4702e2*/
          if ( sub_46D650() ) /*0x470720*/
          {
            EnableGameModeControls(hDlg, 1u); /*0x470733*/
            byte_89E05C = 0; /*0x470738*/
            v67 = 0; /*0x47073f*/
            v68 = (ObjectClass **)dword_A8DA90; /*0x470741*/
            do /*0x470762*/
            {
              if ( (unsigned __int8)IsKnownPointer(*v68) ) /*0x470748*/
                *((_BYTE *)&g_GameModeOptionState + v67) = 0; /*0x470751*/
              ++v68; /*0x470758*/
              ++v67; /*0x47075b*/
            }
            while ( (int)v68 < (int)&dword_A8DAB0 ); /*0x470762*/
            v69 = (Count *)Dialog::FindByHandle((Dialog *)0xBC6); /*0x47076e*/
            v101 = (HWND)v69; /*0x470772*/
            if ( v69 ) /*0x470776*/
            {
              v70 = 0; /*0x470782*/
              v99 = 0; /*0x470784*/
              v97 = dword_A8DA90; /*0x470788*/
              do /*0x47082e*/
              {
                v71 = ErrorCode::Map(v70); /*0x470790*/
                v72 = v71; /*0x470795*/
                if ( v71 != -1 ) /*0x47079a*/
                {
                  hWnd = GetDlgItem((HWND)v69, v71); /*0x4707a7*/
                  if ( ShowWindow(hWnd, 0) ) /*0x4707ab*/
                  {
                    v73 = GetDlgItem(v101, v72); /*0x4707c5*/
                    ResourceID3 = *v97; /*0x4707c7*/
                    if ( *v97 ) /*0x4707c7*/
                    {
                      SendDlgItemMessageA(v101, v72, 0x14Bu, 0, 0); /*0x4707dc*/
                      v74 = SendMessageA(v73, 0x4C2u, 0, ResourceID3); /*0x4707ed*/
                      SendMessageA(v73, 0x151u, v74, ResourceID3); /*0x4707f7*/
                      SendMessageA(v73, 0x14Eu, v74, 0); /*0x470802*/
                      ShowWindow(hWnd, 5); /*0x47080b*/
                    }
                    v69 = (Count *)v101; /*0x470811*/
                  }
                }
                v70 = (ErrorCode *)(v99 + 1); /*0x470820*/
                v75 = (int)(v97 + 1) < (int)&dword_A8DAB0; /*0x470821*/
                ++v99; /*0x470826*/
                ++v97; /*0x47082a*/
              }
              while ( v75 ); /*0x47082e*/
              Count::SetupAllCountriesLobby(v69); /*0x470836*/
              Skirmish::SetupAllSpawnLocations((Skirmish *)v69); /*0x47083d*/
              Lobby::SetupAllFactionSlots((Lobby *)v69); /*0x470844*/
              Lobby::UpdateReadyIcons((Lobby *)v69); /*0x47084b*/
              Lobby::EnableStartButton((Lobby *)v69); /*0x470852*/
            }
          }
          if ( v95 ) /*0x470862*/
          {
            v76 = GetDlgItem(hDlg, 1472); /*0x470874*/
            EnableWindow(v76, 0); /*0x47087b*/
            memset(v104, 0, sizeof(v104)); /*0x47088c*/
            v105 = 0; /*0x47088e*/
            v106 = 0; /*0x470890*/
            v104[0] = 35; /*0x470896*/
            strcpy((char *)&v104[1], ToWideStringChar((char *)*dword_A8DA78)); /*0x4708bf*/
            for ( i3 = 1; i3 < dword_A8DA84; ++i3 ) /*0x4708d1*/
            {
              Network::SendToPlayer((int)&unk_A8E9C0, (int)v104, 47, 1, (wchar_t *)dword_A8DA78[i3]); /*0x4708ee*/
              Network::ReceiveLoop(&unk_A8E9C0); /*0x4708f8*/
            }
          }
          break;
        case 0x33: /*0x4702e2*/
          if ( sub_46D8B0(v94) ) /*0x470915*/
          {
            Game::SendCampaignOptions(); /*0x470922*/
            EnableGameModeControls(hDlg, 1u); /*0x47092d*/
            byte_89E05C = 0; /*0x470932*/
            v78 = 0; /*0x470939*/
            v79 = (ObjectClass **)dword_A8DA90; /*0x47093b*/
            do /*0x47095c*/
            {
              if ( (unsigned __int8)IsKnownPointer(*v79) ) /*0x470942*/
                *((_BYTE *)&g_GameModeOptionState + v78) = 0; /*0x47094b*/
              ++v79; /*0x470952*/
              ++v78; /*0x470955*/
            }
            while ( (int)v79 < (int)&dword_A8DAB0 ); /*0x47095c*/
            v80 = (Count *)Dialog::FindByHandle((Dialog *)0xBC6); /*0x470968*/
            if ( v80 ) /*0x47096c*/
            {
              v81 = 0; /*0x470972*/
              v98 = dword_A8DA90; /*0x470974*/
              v100 = 0; /*0x47097c*/
              do /*0x470a1c*/
              {
                v82 = ErrorCode::Map(v81); /*0x470980*/
                v83 = v82; /*0x470985*/
                if ( v82 != -1 ) /*0x47098a*/
                {
                  hWnd = GetDlgItem((HWND)v80, v82); /*0x470997*/
                  if ( ShowWindow(hWnd, 0) ) /*0x47099b*/
                  {
                    v84 = GetDlgItem((HWND)v80, v83); /*0x4709b1*/
                    ResourceID3 = *v98; /*0x4709b3*/
                    if ( *v98 ) /*0x4709b3*/
                    {
                      SendDlgItemMessageA((HWND)v80, v83, 0x14Bu, 0, 0); /*0x4709c4*/
                      v85 = SendMessageA(v84, 0x4C2u, 0, ResourceID3); /*0x4709d9*/
                      v92 = (LRESULT (__stdcall *)(HWND, UINT, WPARAM, LPARAM))ResourceID3; /*0x4709db*/
                      ResourceID3 = (int)SendMessageA; /*0x4709dc*/
                      SendMessageA(v84, 0x151u, v85, (LPARAM)v92); /*0x4709e9*/
                      SendMessageA(v84, 0x14Eu, v85, 0); /*0x4709f4*/
                      ShowWindow(hWnd, 5); /*0x4709fd*/
                    }
                  }
                }
                v81 = (ErrorCode *)(v100 + 1); /*0x470a0e*/
                v75 = (int)(v98 + 1) < (int)&dword_A8DAB0; /*0x470a0f*/
                ++v100; /*0x470a14*/
                ++v98; /*0x470a18*/
              }
              while ( v75 ); /*0x470a1c*/
              Count::SetupAllCountriesLobby(v80); /*0x470a24*/
              Skirmish::SetupAllSpawnLocations((Skirmish *)v80); /*0x470a2b*/
              for ( i4 = 0; i4 < 8; ++i4 ) /*0x470a30*/
              {
                ResourceID3CSF = GetResourceID3CSF((ObjectClass *)i4); /*0x470a3b*/
                v88 = GetHouseClassSideIndex(i4); /*0x470a3d*/
                SetupLobbyFactionSlots((HWND)v80, ResourceID3CSF, v88); /*0x470a47*/
              }
              Lobby::UpdateReadyIcons((Lobby *)v80); /*0x470a54*/
              Lobby::EnableStartButton((Lobby *)v80); /*0x470a5b*/
            }
          }
          break;
        default:
          goto LABEL_72; /*0x47090f*/
      }
    }
  }
LABEL_166:
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x470bc2*/
    Connection::Close((Connection *)&unk_A8E9C0); /*0x470bc9*/
  FileSystem::CleanupTrees((FileSystem *)v94); /*0x470bce*/
  if ( v12 && HIBYTE(a5) ) /*0x470be0*/
    __3_YAXPAX_Z(v12); /*0x470be3*/
}


// ==== 0x00464A70  AbstractClass::queryInterface  this=AbstractClass  sig=csp ====
_DWORD *__userpurge AbstractClass::queryInterface@<eax>(AbstractClass *this, _DWORD *a2, int *a3)
{
  void *v3; // esi
  void *GroundHeight; // eax
  int v6; // [esp+4h] [ebp-Ch] BYREF
  void *v7; // [esp+8h] [ebp-8h]
  int v8; // [esp+Ch] [ebp-4h]

  v6 = *a2; /*0x464a7a*/
  v7 = (void *)a2[1]; /*0x464a8b*/
  v8 = a2[2]; /*0x464a92*/
  GroundHeight = (void *)Cell::GetGroundHeight(&v6); /*0x464a96*/
  this->vtable0 = v3; /*0x464aa5*/
  this->vtable1 = v7; /*0x464aab*/
  this->vtable2 = GroundHeight; /*0x464aaf*/
  return &this->vtable0; /*0x464a9f*/
}



// ==== 0x00464AC0  AbstractClass::addRef  this=AbstractClass  sig=csp ====
bool __thiscall BuildingTypeClass::CanPlacePath(AbstractClass *this, _WORD *a2, int a3)
{
  if ( *((_BYTE *)this + 5891) ) /*0x464ac0*/
    return 1; /*0x464aca*/
  else
    return BuildingClass::ValidatePath((TechnoTypeClass *)this, a2, a3); /*0x464ad9*/
}



// ==== 0x00464AF0  BuildingTypeClass::GetSizeInLeptons  this=BuildingTypeClass  sig=csp ====
_DWORD *__thiscall BuildingTypeClass::GetSizeInLeptons(BuildingTypeClass *this, _DWORD *a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // eax

  v2 = this->Foundation[0]; /*0x464af0*/
  v3 = dword_89DDB8 * this->Height; /*0x464afc*/
  v2 *= 4; /*0x464b03*/
  v4 = *(int *)((char *)stru_81926C.Type + v2); /*0x464b0b*/
  v5 = *(int *)((char *)dword_819310 + v2); /*0x464b11*/
  *a2 = v4 << 8; /*0x464b1d*/
  a2[1] = v5 << 8; /*0x464b22*/
  a2[2] = v3; /*0x464b27*/
  return a2; /*0x464b2a*/
}



// ==== 0x00464B30  BuildingTypeClass::UpdatePower  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::UpdatePower(BuildingTypeClass *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // ecx
  int v30; // edx
  int v31; // eax
  int v32; // ecx
  int v33; // edx
  int v34; // eax
  int v35; // ecx
  int v36; // edx
  int v37; // eax
  int v38; // ecx
  int v39; // edx
  int v40; // eax
  int v41; // ecx
  int v42; // edx
  int v43; // eax
  int v44; // eax
  int v45; // ecx
  int v46; // edx
  int v47; // eax
  int v48; // ecx
  int v49; // eax
  int v50; // ecx
  int v51; // edx
  int v52; // edx
  Checksummer *v54; // [esp+Ch] [ebp+4h]

  BuildingTypeClass::ProcessPower((int)this, &v54->crcValue); /*0x464b39*/
  Checksummer::Add_double(v54, this->GateCloseDelay[0], this->GateCloseDelay[1]); /*0x464b4e*/
  Power::TimerProcess(this->LightVisibility); /*0x464b5c*/
  Power::TimerProcess(this->LightIntensity); /*0x464b6a*/
  Power::TimerProcess(this->LightRedTint); /*0x464b78*/
  Power::TimerProcess(this->LightGreenTint); /*0x464b86*/
  Power::TimerProcess(this->LightBlueTint); /*0x464b94*/
  Checksum::AddString((Checksum *)v54, (unsigned __int8 *)this->__pad_E5C); /*0x464ba2*/
  Checksum::AddString((Checksum *)v54, (unsigned __int8 *)this->__pad_E88); /*0x464bb0*/
  Power::TimerProcess(this->Adjacent); /*0x464bbe*/
  Power::TimerProcess(this->Factory[0]); /*0x464bcc*/
  Power::TimerProcess(this->PowerBonus); /*0x464bda*/
  Power::TimerProcess(this->PowerDrain); /*0x464be8*/
  Power::TimerProcess(this->ExtraPowerBonus); /*0x464bf6*/
  Power::TimerProcess(this->ExtraPowerDrain); /*0x464c04*/
  Power::TimerProcess(this->Foundation[0]); /*0x464c12*/
  Power::TimerProcess(this->Height); /*0x464c20*/
  Power::TimerProcess(this->OccupyHeight); /*0x464c2e*/
  Power::TimerProcess(this->MidPoint); /*0x464c3c*/
  Power::TimerProcess(this->DoorStages); /*0x464c4a*/
  Checksummer::Add_Buffer(v54, (unsigned __int8 *)this->BuildingAnimFrame, 72); /*0x464c5a*/
  Checksummer::Add_Buffer(v54, (unsigned __int8 *)&this->BuildingAnim[12], 1428); /*0x464c6d*/
  Power::TimerProcess(*(_DWORD *)&this->__pad_F70[1392]); /*0x464c7b*/
  v2 = Power::TimerProcess(*(_DWORD *)&this->__pad_F70[1444]); /*0x464c89*/
  LOBYTE(v2) = this->HoverPad; /*0x464c8e*/
  Power::FlagProcess((Power *)v54, v2); /*0x464c97*/
  LOBYTE(v3) = this->IsPlug; /*0x464c9c*/
  Power::FlagProcess((Power *)v54, v3); /*0x464ca5*/
  LOBYTE(v4) = this->IsTemple; /*0x464caa*/
  v5 = Power::FlagProcess((Power *)v54, v4); /*0x464cb3*/
  LOBYTE(v5) = this->HasSpotlight; /*0x464cb8*/
  Power::FlagProcess((Power *)v54, v5); /*0x464cc1*/
  LOBYTE(v6) = this->BaseNormal; /*0x464cc6*/
  Power::FlagProcess((Power *)v54, v6); /*0x464ccf*/
  LOBYTE(v7) = this->EligibileForAllyBuilding; /*0x464cd4*/
  v8 = Power::FlagProcess((Power *)v54, v7); /*0x464cdd*/
  LOBYTE(v8) = this->NeedsEngineer; /*0x464ce2*/
  Power::FlagProcess((Power *)v54, v8); /*0x464ceb*/
  LOBYTE(v9) = this->Bib; /*0x464cf0*/
  Power::FlagProcess((Power *)v54, v9); /*0x464cf9*/
  LOBYTE(v10) = this->Wall; /*0x464cfe*/
  v11 = Power::FlagProcess((Power *)v54, v10); /*0x464d07*/
  LOBYTE(v11) = this->Capturable; /*0x464d0c*/
  Power::FlagProcess((Power *)v54, v11); /*0x464d15*/
  LOBYTE(v12) = this->Powered; /*0x464d1a*/
  Power::FlagProcess((Power *)v54, v12); /*0x464d23*/
  LOBYTE(v13) = this->Unsellable; /*0x464d28*/
  v14 = Power::FlagProcess((Power *)v54, v13); /*0x464d31*/
  LOBYTE(v14) = this->__pad_1624[128]; /*0x464d36*/
  Power::FlagProcess((Power *)v54, v14); /*0x464d3f*/
  LOBYTE(v15) = this->__pad_1624[129]; /*0x464d44*/
  Power::FlagProcess((Power *)v54, v15); /*0x464d4d*/
  LOBYTE(v16) = this->ChargeAnim; /*0x464d52*/
  v17 = Power::FlagProcess((Power *)v54, v16); /*0x464d5b*/
  LOBYTE(v17) = this->IsAnimDelayedFire; /*0x464d60*/
  Power::FlagProcess((Power *)v54, v17); /*0x464d69*/
  Power::TimerProcess(this->DelayedFireDelay); /*0x464d77*/
  LOBYTE(v18) = this->SiloDamage; /*0x464d7c*/
  v19 = Power::FlagProcess((Power *)v54, v18); /*0x464d85*/
  LOBYTE(v19) = this->UnitRepair; /*0x464d8a*/
  Power::FlagProcess((Power *)v54, v19); /*0x464d93*/
  LOBYTE(v20) = this->UnitReload; /*0x464d98*/
  Power::FlagProcess((Power *)v54, v20); /*0x464da1*/
  LOBYTE(v21) = this->Cloning; /*0x464da6*/
  v22 = Power::FlagProcess((Power *)v54, v21); /*0x464daf*/
  LOBYTE(v22) = this->Grinding; /*0x464db4*/
  Power::FlagProcess((Power *)v54, v22); /*0x464dbd*/
  LOBYTE(v23) = this->UnitAbsorb; /*0x464dc2*/
  Power::FlagProcess((Power *)v54, v23); /*0x464dcb*/
  LOBYTE(v24) = this->InfantryAbsorb; /*0x464dd0*/
  v25 = Power::FlagProcess((Power *)v54, v24); /*0x464dd9*/
  LOBYTE(v25) = this->SecretLab; /*0x464dde*/
  Power::FlagProcess((Power *)v54, v25); /*0x464de7*/
  LOBYTE(v26) = this->Flat_flag; /*0x464dec*/
  Power::FlagProcess((Power *)v54, v26); /*0x464df5*/
  LOBYTE(v27) = this->DockUnload; /*0x464dfa*/
  v28 = Power::FlagProcess((Power *)v54, v27); /*0x464e03*/
  LOBYTE(v28) = this->Recoilless; /*0x464e08*/
  Power::FlagProcess((Power *)v54, v28); /*0x464e11*/
  LOBYTE(v29) = this->BridgeRepairHut; /*0x464e16*/
  Power::FlagProcess((Power *)v54, v29); /*0x464e1f*/
  LOBYTE(v30) = this->Gate; /*0x464e24*/
  v31 = Power::FlagProcess((Power *)v54, v30); /*0x464e2d*/
  LOBYTE(v31) = this->SAM; /*0x464e32*/
  Power::FlagProcess((Power *)v54, v31); /*0x464e3b*/
  LOBYTE(v32) = this->ConstructionYard; /*0x464e40*/
  Power::FlagProcess((Power *)v54, v32); /*0x464e49*/
  LOBYTE(v33) = this->NukeSilo; /*0x464e4e*/
  v34 = Power::FlagProcess((Power *)v54, v33); /*0x464e57*/
  LOBYTE(v34) = this->Refinery; /*0x464e5c*/
  Power::FlagProcess((Power *)v54, v34); /*0x464e65*/
  LOBYTE(v35) = this->WeaponsFactory; /*0x464e6a*/
  Power::FlagProcess((Power *)v54, v35); /*0x464e73*/
  LOBYTE(v36) = this->LaserFencePost; /*0x464e78*/
  v37 = Power::FlagProcess((Power *)v54, v36); /*0x464e81*/
  LOBYTE(v37) = this->LaserFence; /*0x464e86*/
  Power::FlagProcess((Power *)v54, v37); /*0x464e8f*/
  LOBYTE(v38) = this->FirestormWall; /*0x464e94*/
  Power::FlagProcess((Power *)v54, v38); /*0x464e9d*/
  LOBYTE(v39) = this->Helipad; /*0x464ea2*/
  v40 = Power::FlagProcess((Power *)v54, v39); /*0x464eab*/
  LOBYTE(v40) = this->OrePurifier; /*0x464eb0*/
  Power::FlagProcess((Power *)v54, v40); /*0x464eb9*/
  LOBYTE(v41) = this->ExtraDamageStage; /*0x464ebe*/
  Power::FlagProcess((Power *)v54, v41); /*0x464ec7*/
  LOBYTE(v42) = this->Hospital; /*0x464ecc*/
  v43 = Power::FlagProcess((Power *)v54, v42); /*0x464ed5*/
  LOBYTE(v43) = this->Armory; /*0x464eda*/
  Power::FlagProcess((Power *)v54, v43); /*0x464ee3*/
  Power::TimerProcess(this->GateStages); /*0x464ef1*/
  v44 = Power::TimerProcess(this->PowersUpToLevel); /*0x464eff*/
  LOBYTE(v44) = this->DamagedDoor; /*0x464f04*/
  Power::FlagProcess((Power *)v54, v44); /*0x464f0d*/
  LOBYTE(v45) = this->InvisibleInGame; /*0x464f12*/
  Power::FlagProcess((Power *)v54, v45); /*0x464f1b*/
  LOBYTE(v46) = this->TerrainPalette; /*0x464f20*/
  v47 = Power::FlagProcess((Power *)v54, v46); /*0x464f29*/
  LOBYTE(v47) = this->TurretAnimIsVoxel; /*0x464f2e*/
  Power::FlagProcess((Power *)v54, v47); /*0x464f37*/
  LOBYTE(v48) = this->BarrelAnimIsVoxel; /*0x464f3c*/
  Power::FlagProcess((Power *)v54, v48); /*0x464f45*/
  Checksum::AddString((Checksum *)v54, (unsigned __int8 *)this->__pad_1714); /*0x464f53*/
  Checksummer::Add_double(v54, *(_DWORD *)&this->__pad_1714[20], *(_DWORD *)&this->__pad_1714[24]); /*0x464f68*/
  Checksummer::Add_Buffer(v54, (unsigned __int8 *)&this->__pad_1714[28], 12); /*0x464f78*/
  Checksummer::Add_Buffer(v54, (unsigned __int8 *)&this->__pad_1714[40], 12); /*0x464f88*/
  Checksummer::Add_Buffer(v54, (unsigned __int8 *)&this->__pad_1714[52], 12); /*0x464f98*/
  v49 = Checksummer::Add_Buffer(v54, (unsigned __int8 *)&this->__pad_1714[64], 12); /*0x464fa8*/
  LOBYTE(v49) = this->__pad_1714[83]; /*0x464fad*/
  Power::FlagProcess((Power *)v54, v49); /*0x464fb6*/
  LOBYTE(v50) = this->__pad_1714[84]; /*0x464fbb*/
  Power::FlagProcess((Power *)v54, v50); /*0x464fc4*/
  LOBYTE(v51) = this->__pad_1714[85]; /*0x464fc9*/
  Power::FlagProcess((Power *)v54, v51); /*0x464fd2*/
  Power::TimerProcess(*(_DWORD *)&this->__pad_1714[108]); /*0x464fe0*/
  Power::TimerProcess(this->BarrelStartPitch); /*0x464fee*/
  LOBYTE(v52) = this->ConcentricRadialIndicator; /*0x464ff3*/
  return Power::FlagProcess((Power *)v54, v52); /*0x465001*/
}



// ==== 0x00465010  BuildingTypeClass::SaveLoad_Prefix  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::SaveLoad_Prefix(BuildingTypeClass *this)
{
  TechnoTypeClass *v1; // esi
  int v2; // edi
  int result; // eax
  char *v4; // ecx
  int v5; // ebp
  int v6; // eax
  _DWORD *v7; // edx
  TechnoTypeClass *v8; // eax
  int SpeedType; // eax
  int v10; // [esp+28h] [ebp-Ch] BYREF
  int v11; // [esp+2Ch] [ebp-8h]
  int v12; // [esp+30h] [ebp-4h]
  TechnoTypeClass *v13; // [esp+38h] [ebp+4h] BYREF
  int v14; // [esp+3Ch] [ebp+8h] BYREF

  v1 = v13; /*0x465016*/
  if ( v13[1].Weapon[210] && v13[1].vtable2 ) /*0x465025*/
  {
    __3_YAXPAX_Z((void *)v13[1].vtable2); /*0x465030*/
    v1[1].vtable2 = 0; /*0x465038*/
    LOBYTE(v1[1].vtable3) = 0; /*0x46503e*/
  }
  if ( v1[1].CanBeHidden[0] && v1[1].TurretOffset ) /*0x46504c*/
  {
    __3_YAXPAX_Z((void *)v1[1].TurretOffset); /*0x465057*/
    v1[1].TurretOffset = 0; /*0x46505f*/
    v1[1].CanBeHidden[0] = 0; /*0x465065*/
  }
  if ( LOBYTE(v1[1].Cameo) && *(_DWORD *)&v1[1].CameoFile[22] ) /*0x465073*/
  {
    __3_YAXPAX_Z(*(void **)&v1[1].CameoFile[22]); /*0x46507e*/
    *(_DWORD *)&v1[1].CameoFile[22] = 0; /*0x465086*/
    LOBYTE(v1[1].Cameo) = 0; /*0x46508c*/
  }
  if ( v1[1].AltCameoFile[3] && *(_DWORD *)v1[1].CameoAllocated ) /*0x46509a*/
  {
    __3_YAXPAX_Z(*(void **)v1[1].CameoAllocated); /*0x4650a5*/
    *(_DWORD *)v1[1].CameoAllocated = 0; /*0x4650ad*/
    v1[1].AltCameoFile[3] = 0; /*0x4650b3*/
  }
  if ( v1[1].AltCameoFile[11] && *(_DWORD *)&v1[1].AltCameoFile[7] ) /*0x4650c1*/
  {
    __3_YAXPAX_Z(*(void **)&v1[1].AltCameoFile[7]); /*0x4650cc*/
    *(_DWORD *)&v1[1].AltCameoFile[7] = 0; /*0x4650d4*/
    v1[1].AltCameoFile[11] = 0; /*0x4650da*/
  }
  if ( v1[1].AltCameoFile[19] && *(_DWORD *)&v1[1].AltCameoFile[15] ) /*0x4650e8*/
  {
    __3_YAXPAX_Z(*(void **)&v1[1].AltCameoFile[15]); /*0x4650f3*/
    *(_DWORD *)&v1[1].AltCameoFile[15] = 0; /*0x4650fb*/
    v1[1].AltCameoFile[19] = 0; /*0x465101*/
  }
  if ( LOBYTE(v1[1].AltCameo) && *(_DWORD *)&v1[1].AltCameoFile[23] ) /*0x46510f*/
  {
    __3_YAXPAX_Z(*(void **)&v1[1].AltCameoFile[23]); /*0x46511a*/
    *(_DWORD *)&v1[1].AltCameoFile[23] = 0; /*0x465122*/
    LOBYTE(v1[1].AltCameo) = 0; /*0x465128*/
  }
  v2 = v14; /*0x46512e*/
  result = TechnoTypeClass::SaveLoad_Prefix(v1, v14); /*0x465134*/
  if ( result >= 0 ) /*0x46513b*/
  {
    if ( v1 ) /*0x465143*/
      BuildingTypeClass::loadBuildingProperty_b_545E520((BuildingTypeClass *)v1, (int)&v13); /*0x46514c*/
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &v14, 4, 0); /*0x46515c*/
    if ( result >= 0 ) /*0x465161*/
    {
      v4 = &v1[1].Weapon[244]; /*0x465167*/
      if ( v1 != (TechnoTypeClass *)-6020 ) /*0x46516f*/
      {
        *(_DWORD *)&v1[1].Weapon[248] = 0; /*0x465171*/
        *(_DWORD *)&v1[1].Weapon[252] = 0; /*0x465174*/
        v1[1].Weapon[256] = 1; /*0x465177*/
        v1[1].Weapon[257] = 0; /*0x46517b*/
        *(_DWORD *)v4 = &VectorClass<TPoint3D<int>>::`vftable'; /*0x46517e*/
      }
      (*(void (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v4 + 8))(v4, v14, 0); /*0x46518c*/
      v5 = 0; /*0x46518f*/
      if ( v14 <= 0 ) /*0x465195*/
      {
LABEL_32:
        BuildingTypeClass::LoadVoxel((BuildingTypeClass *)v1); /*0x4651ed*/
        ObjectTypeClass::Load2DArt((char *)v1); /*0x4651f6*/
        SpeedType = v1[1].ChargerTurrets[15]; /*0x4651fb*/
        v1[1].UIName = 0; /*0x465210*/
        SpeedType *= 120; /*0x465219*/
        v1[1].vtable1 = (int)&dword_89C900 + SpeedType; /*0x465228*/
        v1[1].ChargerTurrets[8] = (int)&dword_89D368 + SpeedType; /*0x46522e*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v1[1].UINameLabel[31]); /*0x465234*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)v1[1].ImageAllocated); /*0x465245*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v1[1].AlphaImage); /*0x465256*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v1[1].MainVoxel); /*0x465267*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v1[1].TurretVoxel); /*0x465278*/
        BuildingTypeClass::LoadVoxel((BuildingTypeClass *)v1); /*0x46527f*/
        v1[1].vtable2 = 0; /*0x465284*/
        LOBYTE(v1[1].vtable3) = 0; /*0x46528a*/
        v1[1].TurretOffset = 0; /*0x465290*/
        v1[1].CanBeHidden[0] = 0; /*0x465296*/
        *(_DWORD *)&v1[1].CameoFile[22] = 0; /*0x46529c*/
        LOBYTE(v1[1].Cameo) = 0; /*0x4652a2*/
        *(_DWORD *)v1[1].CameoAllocated = 0; /*0x4652a8*/
        v1[1].AltCameoFile[3] = 0; /*0x4652ae*/
        *(_DWORD *)&v1[1].AltCameoFile[7] = 0; /*0x4652b4*/
        v1[1].AltCameoFile[11] = 0; /*0x4652ba*/
        *(_DWORD *)&v1[1].AltCameoFile[15] = 0; /*0x4652c0*/
        v1[1].AltCameoFile[19] = 0; /*0x4652c6*/
        *(_DWORD *)&v1[1].AltCameoFile[23] = 0; /*0x4652cc*/
        LOBYTE(v1[1].AltCameo) = 0; /*0x4652d2*/
        BuildingTypeClass::LoadAnimations((int)v1, dword_A8B230[130].uniqueId); /*0x4652e6*/
        return 0; /*0x4652eb*/
      }
      else
      {
        v13 = 0; /*0x465197*/
        while ( 1 ) /*0x46519b*/
        {
          v6 = *(_DWORD *)v2; /*0x46519b*/
          v10 = 0; /*0x4651a6*/
          v11 = 0; /*0x4651aa*/
          v12 = 0; /*0x4651ae*/
          result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v6 + 12))(v2, &v10, 12, 0); /*0x4651b2*/
          if ( result < 0 ) /*0x4651b7*/
            break; /*0x4651b7*/
          v7 = (int *)((char *)&v13->vtable0 + *(_DWORD *)&v1[1].Weapon[248]); /*0x4651cb*/
          v8 = (TechnoTypeClass *)&v13->vtable3; /*0x4651cd*/
          ++v5; /*0x4651d0*/
          *v7 = v10; /*0x4651d1*/
          v13 = v8; /*0x4651d7*/
          v7[1] = v11; /*0x4651db*/
          v7[2] = v12; /*0x4651e2*/
          if ( v5 >= v14 ) /*0x4651eb*/
            goto LABEL_32; /*0x4651eb*/
        }
      }
    }
  }
  return result; /*0x4652ed*/
}



// ==== 0x00465300  BuildingTypeClass::SaveLoad_Prefix_0  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::SaveLoad_Prefix_0(BuildingTypeClass *this)
{
  int result; // eax
  int v2; // edx
  int v3; // ebp
  int i; // edi
  int v5; // [esp+4h] [ebp-10h]
  int v6; // [esp+8h] [ebp-Ch]
  TechnoTypeClass *v7; // [esp+18h] [ebp+4h]
  _DWORD *v8; // [esp+1Ch] [ebp+8h]
  int *v9; // [esp+20h] [ebp+Ch] BYREF

  result = TechnoTypeClass::SaveLoad_Prefix_0(v7, v8, v9, v5, v6); /*0x465313*/
  if ( result >= 0 ) /*0x46531a*/
  {
    v2 = *v8; /*0x465322*/
    v9 = *(int **)&v7[1].?[1424]; /*0x46532e*/
    result = (*(int (__stdcall **)(_DWORD *, int **, int, _DWORD))(v2 + 16))(v8, &v9, 4, 0); /*0x465332*/
    if ( result >= 0 ) /*0x465337*/
    {
      v3 = 0; /*0x46533d*/
      if ( (int)v9 <= 0 ) /*0x465341*/
      {
        return 0; /*0x465368*/
      }
      else
      {
        for ( i = 0; ; i += 12 ) /*0x465343*/
        {
          result = (*(int (__stdcall **)(_DWORD *, int, int, _DWORD))(*v8 + 16))( /*0x465355*/
                     v8,
                     i + *(_DWORD *)&v7[1].?[1420],
                     12,
                     0);
          if ( result < 0 ) /*0x46535a*/
            break; /*0x46535a*/
          if ( ++v3 >= (int)v9 ) /*0x465366*/
            return 0; /*0x465366*/
        }
      }
    }
  }
  return result; /*0x46536a*/
}



// ==== 0x00465380  BuildingTypeClass::GetClassIdentifier  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::GetClassIdentifier(BuildingTypeClass *this)
{
  _DWORD *v2; // [esp+8h] [ebp+8h]

  if ( !v2 ) /*0x465386*/
    return -2147467261; /*0x465388*/
  *v2 = -1366608933; /*0x465396*/
  v2[1] = 298976796; /*0x46539e*/
  v2[2] = 1610654892; /*0x4653a7*/
  v2[3] = unk_7E95CC; /*0x4653b0*/
  return 0; /*0x46538d*/
}



// ==== 0x004653C0  BuildingTypeClass::FindOrCreate  this=IUnknown  sig=csp ====
int __thiscall BuildingTypeClass::FindOrCreate(char *Source)
{
  int v2; // esi
  int v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x4653dc*/
    return 0; /*0x46543f*/
  v2 = 0; /*0x4653ed*/
  if ( dword_A83C78 <= 0 ) /*0x4653f1*/
  {
LABEL_6:
    v3 = __2_YAPAXI_Z(0x1798u); /*0x465416*/
    if ( v3 ) /*0x465425*/
      return BuildingTypeClass::ConstructFull(v3, Source); /*0x465431*/
    return 0; /*0x465425*/
  }
  while ( _strcmpi((char *)(*((_DWORD *)dword_A83C6C + v2) + 36), Source) ) /*0x46540a*/
  {
    if ( ++v2 >= dword_A83C78 ) /*0x465414*/
      goto LABEL_6; /*0x465414*/
  }
  return *((_DWORD *)dword_A83C6C + v2); /*0x46542f*/
}



// ==== 0x00465450  BulletTypeClass::ReadArmor  this=BulletTypeClass  sig=csp ====
int sub_465450()
{
  int v0; // edx
  int v1; // edi
  char *v2; // ecx
  _DWORD *v3; // esi
  int result; // eax
  int i; // edi
  int v6; // esi
  int v7; // eax
  char Destination[60]; // [esp+Ch] [ebp-3Ch] BYREF

  v0 = dword_A83C78; /*0x465450*/
  v1 = 0; /*0x46545e*/
  if ( dword_A83C78 > 0 ) /*0x465462*/
  {
    v2 = (char *)dword_A83C6C; /*0x465464*/
    do /*0x46547d*/
    {
      if ( v1 <= *(char *)(*(_DWORD *)v2 + 5895) ) /*0x465475*/
        v1 = *(char *)(*(_DWORD *)v2 + 5895); /*0x465477*/
      v2 += 4; /*0x465479*/
      --v0; /*0x46547c*/
    }
    while ( v0 ); /*0x46547d*/
    if ( v1 ) /*0x465481*/
    {
      if ( dword_89DDC0 ) /*0x46548b*/
        (**(void (__thiscall ***)(int, int))dword_89DDC0)(dword_89DDC0, 1); /*0x465491*/
      v3 = __2_YAPAXI_Z(0x20u); /*0x46549a*/
      if ( v3 ) /*0x4654a1*/
      {
        v3[3] = 0; /*0x4654a6*/
        v3[1] = v1 + 16; /*0x4654ab*/
        v3[2] = v1 + 16; /*0x4654b6*/
        *v3 = &XSurface_Vtable; /*0x4654b9*/
        v3[4] = 1; /*0x4654bf*/
        Buffer::Init(v3 + 5, 0, (v1 + 16) * (v1 + 16)); /*0x4654c6*/
        *v3 = &BSurface_Vtable; /*0x4654cb*/
        dword_89DDC0 = (int)v3; /*0x4654d1*/
      }
      else
      {
        dword_89DDC0 = 0; /*0x4654d9*/
      }
    }
  }
  result = dword_A83C78; /*0x4654df*/
  for ( i = 0; i < dword_A83C78; ++i ) /*0x4654e8*/
  {
    v6 = *((_DWORD *)dword_A83C6C + i); /*0x4654f7*/
    Destination[0] = 0; /*0x465500*/
    INIClass::GetString( /*0x46550e*/
      (unsigned __int8 ***)dword_887048,
      (unsigned __int8 *)(v6 + 36),
      (unsigned __int8 *)aTotile,
      0,
      Destination,
      60);
    v7 = Entity_Read(Destination); /*0x465517*/
    if ( v7 >= 0 && v7 < dword_A8ED38 ) /*0x465526*/
      *(_DWORD *)(v6 + 3672) = *((_DWORD *)dword_A8ED2C + v7); /*0x465531*/
    result = dword_A83C78; /*0x465537*/
  }
  return result; /*0x465541*/
}



// ==== 0x00465570  ObjectClass::CalculateBuildingFoundationBounds  this=ObjectClass  sig=csp ====
int *__thiscall CalculateBuildingFoundationBounds(ObjectClass *this, int *a2)
{
  __int16 *v3; // eax
  int v4; // esi
  int v5; // ebx
  int v6; // ebp
  int v7; // edi
  int *FoundationSize; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int *v14; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  void *v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // edi
  int v24; // ebx
  bool v25; // [esp+7h] [ebp-49h]
  signed int i; // [esp+8h] [ebp-48h]
  signed int j; // [esp+8h] [ebp-48h]
  signed int v29; // [esp+14h] [ebp-3Ch]
  signed int v30; // [esp+14h] [ebp-3Ch]
  int v31; // [esp+18h] [ebp-38h]
  int v32; // [esp+20h] [ebp-30h]
  int *v33; // [esp+20h] [ebp-30h]
  int v34; // [esp+24h] [ebp-2Ch]
  int v35; // [esp+28h] [ebp-28h]
  int *v36; // [esp+2Ch] [ebp-24h]
  int v37; // [esp+30h] [ebp-20h] BYREF
  int v38; // [esp+34h] [ebp-1Ch]
  int v39; // [esp+38h] [ebp-18h]
  int v40; // [esp+3Ch] [ebp-14h]
  int v41[4]; // [esp+40h] [ebp-10h] BYREF

  v36 = (int *)((char *)this + 5432); /*0x46558c*/
  if ( *((_DWORD *)this + 1358) == dword_89C8A0 /*0x4655b7*/
    && *((_DWORD *)this + 1359) == dword_89C8A4
    && *((_DWORD *)this + 1360) == dword_89C8A8
    && *((_DWORD *)this + 1361) == dword_89C8AC )
  {
    v3 = (__int16 *)(*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 39))(this); /*0x4655de*/
    if ( v3 ) /*0x4655ea*/
    {
      v4 = dword_89C8A8; /*0x465624*/
      v34 = v3[1]; /*0x46562a*/
      v5 = dword_89C8A4; /*0x465633*/
      v6 = dword_89C8AC; /*0x46563a*/
      v7 = dword_89C8A0; /*0x465641*/
      v29 = v3[3]; /*0x465649*/
      v35 = v3[2]; /*0x46564d*/
      for ( i = 0; i < v29; ++i ) /*0x465659*/
      {
        FoundationSize = Building::GetFoundationSize(&v37, i); /*0x465671*/
        if ( v4 <= 0 || v6 <= 0 ) /*0x46567c*/
        {
          v7 = *FoundationSize; /*0x4656e0*/
          v5 = FoundationSize[1]; /*0x4656e2*/
          v4 = FoundationSize[2]; /*0x4656e5*/
          v12 = FoundationSize[3]; /*0x4656e8*/
        }
        else
        {
          v9 = FoundationSize[2]; /*0x46567e*/
          if ( v9 > 0 ) /*0x465687*/
          {
            v32 = FoundationSize[3]; /*0x46568e*/
            if ( v32 > 0 ) /*0x465692*/
            {
              v10 = *FoundationSize; /*0x465694*/
              if ( v7 > *FoundationSize ) /*0x465698*/
              {
                v4 = v7 + v4 - v10; /*0x46569c*/
                v7 = *FoundationSize; /*0x46569e*/
              }
              v11 = FoundationSize[1]; /*0x4656a0*/
              if ( v5 > v11 ) /*0x4656a9*/
              {
                v6 += v5 - v11; /*0x4656ad*/
                v5 = v11; /*0x4656af*/
              }
              if ( v4 + v7 < v10 + v9 ) /*0x4656b9*/
                v4 = v10 - v7 + v9 + 1; /*0x4656c1*/
              if ( v5 + v6 < v11 + v32 ) /*0x4656d5*/
                v6 = v11 + v32 - v5 + 1; /*0x4656da*/
            }
          }
          v12 = v6; /*0x4656dc*/
        }
        v6 = v12; /*0x4656ef*/
      }
      v25 = *((_DWORD *)this + 896) == 0; /*0x465710*/
      v13 = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 48))(this); /*0x465715*/
      if ( v13 ) /*0x465721*/
      {
        v30 = *(__int16 *)(v13 + 6); /*0x46572d*/
        for ( j = 0; j < v30; ++j ) /*0x465739*/
        {
          v14 = Building::GetFoundationSize(&v37, j); /*0x465751*/
          if ( v4 <= 0 || v6 <= 0 ) /*0x46575c*/
          {
            v7 = *v14; /*0x4657c0*/
            v5 = v14[1]; /*0x4657c2*/
            v4 = v14[2]; /*0x4657c5*/
            v18 = v14[3]; /*0x4657c8*/
          }
          else
          {
            v15 = v14[2]; /*0x46575e*/
            if ( v15 > 0 ) /*0x465767*/
            {
              v31 = v14[3]; /*0x46576e*/
              if ( v31 > 0 ) /*0x465772*/
              {
                v16 = *v14; /*0x465774*/
                if ( v7 > *v14 ) /*0x465778*/
                {
                  v4 = v7 + v4 - v16; /*0x46577c*/
                  v7 = *v14; /*0x46577e*/
                }
                v17 = v14[1]; /*0x465780*/
                if ( v5 > v17 ) /*0x465789*/
                {
                  v6 += v5 - v17; /*0x46578d*/
                  v5 = v17; /*0x46578f*/
                }
                if ( v4 + v7 < v16 + v15 ) /*0x465799*/
                  v4 = v16 - v7 + v15 + 1; /*0x4657a1*/
                if ( v5 + v6 < v17 + v31 ) /*0x4657b5*/
                  v6 = v17 + v31 - v5 + 1; /*0x4657ba*/
              }
            }
            v18 = v6; /*0x4657bc*/
          }
          v6 = v18; /*0x4657cf*/
        }
        if ( v25 ) /*0x4657e8*/
        {
          if ( *((_BYTE *)this + 5986) ) /*0x4657ee*/
          {
            v19 = (void *)*((_DWORD *)this + 896); /*0x4657f8*/
            if ( v19 ) /*0x465800*/
            {
              __3_YAXPAX_Z(v19); /*0x465803*/
              *((_DWORD *)this + 896) = 0; /*0x46580f*/
              *((_BYTE *)this + 3588) = 0; /*0x465819*/
            }
          }
        }
      }
      if ( *((_DWORD *)this + 1350) ) /*0x465824*/
      {
        v33 = Building::GetFoundationSize(v41, 0); /*0x46583e*/
        v20 = *v33; /*0x465842*/
        v38 = v33[1]; /*0x465849*/
        v21 = v33[2]; /*0x46584d*/
        v39 = v21; /*0x465850*/
        v22 = v33[3]; /*0x465854*/
        v40 = v22; /*0x465857*/
        if ( v4 <= 0 || v6 <= 0 ) /*0x46585f*/
        {
          v7 = *v33; /*0x4658b6*/
          v5 = v33[1]; /*0x4658b8*/
          v4 = v33[2]; /*0x4658bb*/
          v6 = v33[3]; /*0x4658be*/
        }
        else if ( v21 > 0 && v22 > 0 ) /*0x465867*/
        {
          if ( v7 > v20 ) /*0x46586b*/
          {
            v4 = v7 + v4 - v20; /*0x46586f*/
            v7 = v20; /*0x465871*/
          }
          if ( v5 > v38 ) /*0x465879*/
          {
            v6 += v5 - v38; /*0x46587d*/
            v5 = v38; /*0x46587f*/
          }
          if ( v4 + v7 < v20 + v21 ) /*0x465888*/
            v4 = v20 - v7 + v39 + 1; /*0x465890*/
          if ( v5 + v6 < v38 + v40 ) /*0x4658a4*/
            v6 = v38 - v5 + v40 + 1; /*0x4658ac*/
        }
      }
      v23 = v7 - v34 / 2; /*0x4658ca*/
      v24 = v5 - v35 / 2; /*0x4658d5*/
      *v36 = v23; /*0x4658db*/
      v36[1] = v24; /*0x4658dd*/
      v36[2] = v4; /*0x4658e0*/
      v36[3] = v6; /*0x4658e3*/
      *a2 = v23; /*0x4658ec*/
      a2[1] = v24; /*0x4658ef*/
      a2[2] = v4; /*0x4658f2*/
      a2[3] = v6; /*0x4658f5*/
      return a2; /*0x4658e6*/
    }
    else
    {
      *a2 = dword_89C8A0; /*0x4655f9*/
      a2[1] = dword_89C8A4; /*0x465601*/
      a2[2] = dword_89C8A8; /*0x46560a*/
      a2[3] = dword_89C8AC; /*0x465613*/
      return a2; /*0x4655ec*/
    }
  }
  else
  {
    *a2 = *((_DWORD *)this + 1358); /*0x4655c1*/
    a2[1] = *((_DWORD *)this + 1359); /*0x4655c6*/
    a2[2] = *((_DWORD *)this + 1360); /*0x4655cc*/
    a2[3] = *((_DWORD *)this + 1361); /*0x4655d3*/
    return a2; /*0x4655b9*/
  }
}



// ==== 0x00465910  AbstractClass::releaseRef  this=AbstractClass  sig=csp ====
char AbstractClass::releaseRef(AbstractClass *this)
{
  return 0; /*0x465912*/
}



// ==== 0x00465920  AbstractClass::finalRelease  this=AbstractClass  sig=csp ====
char AbstractClass::finalRelease(AbstractClass *this)
{
  return 0; /*0x465922*/
}



// ==== 0x00465960  AbstractClass::LoadTheaterSHP  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::LoadTheaterSHP(AbstractClass *this)
{
  int result; // eax
  __int16 *v3; // edi
  int v4; // ecx
  int v5; // edi
  int v6; // eax
  int v7; // [esp+4h] [ebp-1E0h]
  CCFileClass v8; // [esp+8h] [ebp-1DCh] BYREF
  int v9[3]; // [esp+60h] [ebp-184h] BYREF
  int v10; // [esp+6Ch] [ebp-178h]
  CCFileClass v11; // [esp+74h] [ebp-170h] BYREF
  int v12[3]; // [esp+CCh] [ebp-118h] BYREF
  int v13; // [esp+D8h] [ebp-10Ch]
  char Buffer[260]; // [esp+E0h] [ebp-104h] BYREF

  result = *((_DWORD *)this + 896); /*0x465969*/
  if ( !result && *((_BYTE *)this + 5985) ) /*0x465977*/
  {
    if ( strlen((const char *)this + 3676) ) /*0x46598e*/
    {
      _makepath(Buffer, 0, 0, (const char *)this + 3676, Ext); /*0x4659ac*/
      TheaterObjectTypeClassSpecificID(Buffer, dword_A8B230[130].uniqueId); /*0x4659c7*/
      CCFileClass::Construct(&v11, Buffer); /*0x4659d8*/
      v3 = (__int16 *)CCFileClass::ReadEntireFile(&v11); /*0x4659e6*/
      if ( !v3 ) /*0x4659ea*/
      {
        ObjectTypeClass::SetRTTI71((ObjectTypeClass *)Buffer); /*0x4659f3*/
        CCFileClass::Construct(&v8, Buffer); /*0x465a04*/
        v3 = (__int16 *)CCFileClass::ReadEntireFile(&v8); /*0x465a16*/
        *(_DWORD *)v8.CDFileClass = &CCFileClass::`vftable'; /*0x465a18*/
        v10 = 0; /*0x465a20*/
        Vector::Clear((int)v9); /*0x465a28*/
        *(_DWORD *)v8.CDFileClass = &off_7E1668; /*0x465a31*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v8); /*0x465a39*/
      }
      *((_DWORD *)this + 896) = v3; /*0x465a40*/
      if ( v3 ) /*0x465a46*/
      {
        v4 = 1; /*0x465a48*/
        *((_BYTE *)this + 3588) = 1; /*0x465a4d*/
        v5 = v3[3] / 2; /*0x465a62*/
        v7 = v5; /*0x465a66*/
        if ( *((_BYTE *)this + 5815) ) /*0x465a5c*/
        {
          v5 = *((_DWORD *)this + 1470) + 1; /*0x465a72*/
          v7 = v5; /*0x465a73*/
        }
        if ( v5 > 0 ) /*0x465a79*/
        {
          LOWORD(v6) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5400) * 900.0 / (double)v7); /*0x465a91*/
          v4 = v6; /*0x465a96*/
        }
        *((_DWORD *)this + 961) = 0; /*0x465a98*/
        *((_DWORD *)this + 962) = v5; /*0x465aa2*/
        *((_DWORD *)this + 963) = v4; /*0x465aa8*/
      }
      *(_DWORD *)v11.CDFileClass = &CCFileClass::`vftable'; /*0x465ab5*/
      v13 = 0; /*0x465abd*/
      Vector::Clear((int)v12); /*0x465ac8*/
      *(_DWORD *)v11.CDFileClass = &off_7E1668; /*0x465ad1*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v11); /*0x465ad9*/
    }
    return *((_DWORD *)this + 896); /*0x465ade*/
  }
  return result; /*0x465ae5*/
}



// ==== 0x00465AF0  BuildingTypeClass::IsPowered  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::IsPowered(BuildingTypeClass *this)
{
  int result; // eax

  LOBYTE(result) = this->__pad_1714[78]; /*0x465af3*/
  if ( (_BYTE)result ) /*0x465afb*/
  {
    result = this->Buildup[0]; /*0x465afd*/
    if ( result ) /*0x465b05*/
    {
      __3_YAXPAX_Z((void *)this->Buildup[0]); /*0x465b08*/
      this->Buildup[0] = 0; /*0x465b10*/
      this->BuildupLoaded = 0; /*0x465b1a*/
    }
  }
  return result; /*0x465b21*/
}



// ==== 0x00465CB0  ObjectClass::nullsub_7  this=ObjectClass  sig=csp ====
void nullsub_7(ObjectClass *this)
{
  ; /*0x465cb0*/
}



// ==== 0x00465CC0  BulletTypeClass::ReadTrailerAnim  this=BulletTypeClass  sig=csp ====
int BulletTypeClass::ReadTrailerAnim(BulletTypeClass *this)
{
  int result; // eax
  int i; // edi
  int v3; // esi
  int v4; // eax
  char Destination[60]; // [esp+4h] [ebp-3Ch] BYREF

  result = dword_A83C78; /*0x465cc0*/
  for ( i = 0; i < dword_A83C78; ++i ) /*0x465ccd*/
  {
    v3 = *((_DWORD *)dword_A83C6C + i); /*0x465cdc*/
    Destination[0] = 0; /*0x465cef*/
    INIClass::GetString( /*0x465cf5*/
      *(INIClass **)&DSurface_ViewBounds.__pad_34[116],
      (unsigned __int8 *)(v3 + 36),
      aTotile,
      0,
      Destination,
      60);
    v4 = Entity_Read((ObjectClass *)Destination); /*0x465cfe*/
    if ( v4 >= 0 && v4 < *(int *)&stru_A8EB00.?[340] ) /*0x465d0d*/
      *(_DWORD *)(v3 + 3672) = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v4); /*0x465d18*/
    result = dword_A83C78; /*0x465d1e*/
  }
  return result; /*0x465d29*/
}



// ==== 0x00465D30  ReturnFalse_465D30  this=-  sig=ida-proto ====
char ReturnFalse_465D30()
{
  return 0; /*0x465d32*/
}



// ==== 0x00465D40  BuildingClass::Is1x1AndUndeployable_BuildingMassSelectable  this=TOP  sig=csp ====
bool __thiscall BuildingClass::Is1x1AndUndeployable_BuildingMassSelectable(BuildingClass *this)
{
  int v1; // eax
  bool result; // al

  result = 0; /*0x465d68*/
  if ( this->?[4] ) /*0x465d40*/
  {
    v1 = this->u32_EF0; /*0x465d55*/
    if ( stru_81926C.Type[v1] == 1 && dword_819310[v1] == 1 ) /*0x465d66*/
      return 1; /*0x465d48*/
  }
  return result; /*0x465d6a*/
}



// ==== 0x00465D70  BuildingClass::processPowerState  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::processPowerState(BuildingClass *this)
{
  return this->q3B7; /*0x465d76*/
}



// ==== 0x00465D80  ObjectClass::??0Iostream_init_QAE_XZ_2  this=ObjectClass  sig=csp ====
Iostream_init *__thiscall __0Iostream_init_QAE_XZ_2(Iostream_init *this)
{
  return this; /*0x465d82*/
}



// ==== 0x00465D90  BuildingTypeClass::GetTypeIdentifier  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::GetTypeIdentifier(BuildingTypeClass *this)
{
  return 7; /*0x465d95*/
}



// ==== 0x00465DA0  BuildingTypeClass::GetObjectSize  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::GetObjectSize(BuildingTypeClass *this)
{
  return 6040; /*0x465da5*/
}



// ==== 0x00465DB0  BuildingTypeClass::GetAuxField  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::GetAuxField(BuildingTypeClass *this)
{
  return this->ArrayIndex; /*0x465db6*/
}



// ==== 0x00465DC0  BuildingTypeClass::ddtor  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::ddtor(BuildingTypeClass *this)
{
  char v3; // [esp+8h] [ebp+4h]

  BuildingTypeClass::CleanupMembers(this); /*0x465dc3*/
  if ( (v3 & 1) != 0 ) /*0x465dcd*/
    __3_YAXPAX_Z(this); /*0x465dd0*/
  return (int)this; /*0x465dda*/
}



// ==== 0x00465DE0  _VectorClass_V_TPoint3D_H::Clear  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_TPoint3D_int::Clear(_VectorClass_V_TPoint3D_H *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // edx

  v3 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 12 * a3); /*0x465deb*/
  *a2 = *v3; /*0x465df6*/
  a2[1] = v3[1]; /*0x465dfb*/
  a2[2] = v3[2]; /*0x465e02*/
  return a2; /*0x465dfe*/
}



// ==== 0x00465E10  _VectorClass_V_TPoint3D_H::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_TPoint3D_int::AddRef(_VectorClass_V_TPoint3D_H *this, int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  m_8 = this->m_8; /*0x465e1b*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x465e20*/
  {
    v3 = 0; /*0x465e22*/
    if ( m_8 <= 0 ) /*0x465e26*/
      return 1; /*0x465e60*/
    v4 = *(_DWORD *)(a2 + 4); /*0x465e28*/
    v5 = *(_DWORD **)&this->m_1[3]; /*0x465e2b*/
    v6 = (_DWORD *)(v4 + 8); /*0x465e2e*/
    v7 = v4 - (_DWORD)v5; /*0x465e31*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *(v6 - 1) && v5[2] == *v6 ) /*0x465e4d*/
    {
      ++v3; /*0x465e4f*/
      v6 += 3; /*0x465e50*/
      v5 += 3; /*0x465e53*/
      if ( v3 >= m_8 ) /*0x465e58*/
        return 1; /*0x465e58*/
    }
  }
  return 0; /*0x465e5a*/
}



// ==== 0x00465E70  _VectorClass_V_TPoint3D_H::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_TPoint3D_int::Release(_VectorClass_V_TPoint3D_H *this, int a2, char *a3)
{
  int v3; // ebx
  char *v5; // ebp
  int v6; // eax
  char *v7; // edi
  int m_8; // ecx
  int v10; // eax
  char *v11; // ebx
  _DWORD *v12; // edx

  v3 = a2; /*0x465e72*/
  if ( a2 ) /*0x465e7d*/
  {
    v5 = a3; /*0x465e83*/
    LOBYTE(this->m_C) = 0; /*0x465e87*/
    if ( a3 ) /*0x465e8d*/
    {
      v7 = a3; /*0x465eb4*/
    }
    else
    {
      v6 = __2_YAPAXI_Z(12 * a2); /*0x465e96*/
      if ( v6 ) /*0x465ea0*/
        v7 = (char *)v6; /*0x465ea5*/
      else
        v7 = 0; /*0x465ead*/
    }
    LOBYTE(this->m_C) = 1; /*0x465ebc*/
    if ( v7 ) /*0x465ec0*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x465ecc*/
      {
        m_8 = this->m_8; /*0x465ed3*/
        if ( a2 < m_8 ) /*0x465ed8*/
          m_8 = a2; /*0x465eda*/
        if ( m_8 > 0 ) /*0x465ede*/
        {
          v10 = 0; /*0x465ee0*/
          do /*0x465efe*/
          {
            v11 = &v7[v10]; /*0x465ee5*/
            v12 = (_DWORD *)(v10 + *(_DWORD *)&this->m_1[3]); /*0x465ee8*/
            v10 += 12; /*0x465eea*/
            --m_8; /*0x465eed*/
            *(_DWORD *)v11 = *v12; /*0x465ef0*/
            *((_DWORD *)v11 + 1) = v12[1]; /*0x465ef5*/
            *((_DWORD *)v11 + 2) = v12[2]; /*0x465efb*/
          }
          while ( m_8 ); /*0x465efe*/
          v5 = a3; /*0x465f00*/
          v3 = a2; /*0x465f04*/
        }
        if ( BYTE1(this->m_C) ) /*0x465f08*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x465f13*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x465f1b*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v7; /*0x465f24*/
      this->m_8 = v3; /*0x465f2c*/
      BYTE1(this->m_C) = v5 == 0; /*0x465f2f*/
      return 1; /*0x465f35*/
    }
    else
    {
      return 0; /*0x465ec5*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_V_TPoint3D_H *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x465f40*/
    return 1; /*0x465f46*/
  }
}



// ==== 0x00465F50  _VectorClass_V_TPoint3D_H::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_TPoint3D_int::ddtor(_VectorClass_V_TPoint3D_H *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x465f5d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x465f63*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x465f6b*/
  }
  BYTE1(this->m_C) = 0; /*0x465f6e*/
  this->m_8 = 0; /*0x465f71*/
}



// ==== 0x00465F80  _VectorClass_V_TPoint3D_H::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_TPoint3D_int::GetSize(_VectorClass_V_TPoint3D_H *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x465f80*/
    return 0; /*0x465f8e*/
  m_8 = this->m_8; /*0x465f94*/
  result = 0; /*0x465f97*/
  if ( m_8 <= 0 ) /*0x465f9b*/
    return -1; /*0x465fc6*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 ) /*0x465fa1*/
  {
    if ( ++result >= m_8 ) /*0x465fc4*/
      return -1; /*0x465fc4*/
  }
  return result; /*0x465f8b*/
}



// ==== 0x00465FD0  _VectorClass_V_TPoint3D_H::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_TPoint3D_int::GetCapacity(_VectorClass_V_TPoint3D_H *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x465fd0*/
    return (a2 - *(_DWORD *)&this->m_1[3]) / 0xCu; /*0x465fee*/
  else
    return 0; /*0x465fd7*/
}



// ==== 0x00466000  BuildingClass::Create  this=BuildingClass  sig=ida-proto ====
int __fastcall sub_466000(char *Source, int a2)
{
  int v4; // esi
  void *v5; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x46601f*/
    return 0; /*0x46607c*/
  v4 = 0; /*0x46602e*/
  if ( *(int *)(a2 + 16) <= 0 ) /*0x466032*/
  {
LABEL_6:
    v5 = __2_YAPAXI_Z(0x1798u); /*0x466053*/
    if ( v5 ) /*0x466062*/
      return BuildingTypeClass::ConstructFull((int)v5, Source); /*0x46606f*/
    return 0; /*0x466062*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v4) + 36), Source) ) /*0x466049*/
  {
    if ( ++v4 >= *(_DWORD *)(a2 + 16) ) /*0x466051*/
      goto LABEL_6; /*0x466051*/
  }
  return *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v4); /*0x46606c*/
}



// ==== 0x00466080  _VectorClass_V_TPoint3D_H::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_TPoint3D_int::QueryInterface(_VectorClass_V_TPoint3D_H *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x466083*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TPoint3D<int>>::`vftable'; /*0x466086*/
  if ( v3 && BYTE1(this->m_C) ) /*0x466090*/
  {
    __3_YAXPAX_Z(v3); /*0x466098*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4660a0*/
  }
  BYTE1(this->m_C) = 0; /*0x4660ab*/
  this->m_8 = 0; /*0x4660b1*/
  if ( (a2 & 1) != 0 ) /*0x4660b8*/
    __3_YAXPAX_Z(this); /*0x4660bb*/
  return this->__pad_0; /*0x4660c5*/
}



// ==== 0x004660D0  sub_4660D0  this=-  sig=ida-proto ====
void sub_4660D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4660dc*/
  dbl_89DDF8 = Math::Sqrt(v0 + v0); /*0x4660ee*/
}



// ==== 0x00466100  sub_466100  this=-  sig=ida-proto ====
void sub_466100()
{
  dbl_89DE68 = dbl_89DDF8 / 60.0; /*0x46610c*/
}



// ==== 0x00466120  sub_466120  this=-  sig=ida-proto ====
void sub_466120()
{
  dbl_89DE50 = 1.0 / dbl_89DE68; /*0x46612c*/
}



// ==== 0x00466140  sub_466140  this=-  sig=ida-proto ====
void sub_466140()
{
  dbl_89DE48 = 0.0174532925199433 * 45.0; /*0x46614c*/
}



// ==== 0x00466160  sub_466160  this=-  sig=ida-proto ====
void sub_466160()
{
  dbl_89DE00 = 0.0174532925199433 * 60.0; /*0x46616c*/
}



// ==== 0x00466180  sub_466180  this=-  sig=ida-proto ====
void sub_466180()
{
  dbl_89DDD8 = 0.0174532925199433 * 90.0; /*0x46618c*/
}



// ==== 0x004661A0  sub_4661A0  this=-  sig=ida-proto ====
__int64 sub_4661A0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89DDD8 - dbl_89DE00); /*0x4661b2*/
  result = Math::RoundToInt(v0 * dbl_89DDF8 * 0.5); /*0x4661c6*/
  dword_89DE70 = result; /*0x4661cb*/
  return result; /*0x4661d0*/
}



// ==== 0x004661E0  sub_4661E0  this=-  sig=ida-proto ====
void sub_4661E0()
{
  dbl_89DE08 = Math::ArcTan((double)dword_89DE70 * 0.00390625); /*0x4661f7*/
}



// ==== 0x00466210  sub_466210  this=-  sig=ida-proto ====
void sub_466210()
{
  dbl_89DE40 = Math::ArcTan((double)(2 * dword_89DE70) / dbl_89DDF8); /*0x466232*/
}



// ==== 0x00466240  sub_466240  this=-  sig=ida-proto ====
__int64 sub_466240()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89DE70) + 0.5); /*0x46625b*/
  dword_89DE64 = result; /*0x466260*/
  return result; /*0x466266*/
}



// ==== 0x00466270  sub_466270  this=-  sig=ida-proto ====
int sub_466270()
{
  dword_89DDF0 = 0; /*0x466272*/
  return 0; /*0x46627e*/
}



// ==== 0x00466280  sub_466280  this=-  sig=ida-proto ====
int sub_466280()
{
  dword_89DE30 = 0; /*0x466282*/
  qword_89DE34 = 0; /*0x466287*/
  return 0; /*0x466291*/
}



// ==== 0x004662A0  sub_4662A0  this=-  sig=ida-proto ====
int sub_4662A0()
{
  dword_89DE60 = 0; /*0x4662a5*/
  dword_89DE58 = 128; /*0x4662af*/
  dword_89DE5C = 128; /*0x4662b4*/
  return 128; /*0x4662b9*/
}



// ==== 0x004662C0  sub_4662C0  this=-  sig=ida-proto ====
int sub_4662C0()
{
  dword_89DDE0 = 0; /*0x4662c2*/
  dword_89DDE4 = 0; /*0x4662c7*/
  dword_89DDE8 = 0; /*0x4662cc*/
  dword_89DDEC = 0; /*0x4662d1*/
  return 0; /*0x4662d6*/
}



// ==== 0x004662E0  sub_4662E0  this=-  sig=ida-proto ====
int sub_4662E0()
{
  dword_89DE1C = 0; /*0x4662e7*/
  dword_89DE20 = 0; /*0x4662ec*/
  byte_89DE24 = 1; /*0x4662f1*/
  byte_89DE25 = 0; /*0x4662f8*/
  dword_89DE18 = (int)&off_7E4678; /*0x4662fd*/
  dword_89DE2C = 10; /*0x466307*/
  dword_89DE28 = 0; /*0x466311*/
  return atexit(sub_466320); /*0x46631c*/
}



// ==== 0x00466320  sub_466320  this=-  sig=ida-proto ====
void __cdecl sub_466320()
{
  if ( (byte_89DDD0 & 1) == 0 ) /*0x46632a*/
  {
    dword_89DE18 = (int)&VectorClass<BulletClass *>::`vftable'; /*0x46632e*/
    byte_89DDD0 |= 1u; /*0x466341*/
    if ( dword_89DE1C ) /*0x466347*/
    {
      if ( byte_89DE25 ) /*0x466351*/
      {
        __3_YAXPAX_Z(dword_89DE1C); /*0x466354*/
        dword_89DE1C = 0; /*0x46635c*/
      }
    }
    byte_89DE25 = 0; /*0x466366*/
    dword_89DE20 = 0; /*0x46636d*/
  }
}



// ==== 0x00466380  BulletClass::BulletClass  this=BulletClass  sig=csp ====
int __thiscall BulletClass::BulletClass(BulletClass *this)
{
  int v2; // eax

  ObjectClass::ctor((ObjectClass *)this); /*0x466384*/
  this->BulletClass_field_0xAC = 0; /*0x466391*/
  this->BulletClass_field_0xB0 = 0; /*0x466397*/
  this->__pad_B4[0] = 0; /*0x46639d*/
  BulletClass::ResetDetonationTimer((BulletClass *)&this->__pad_B4[4]); /*0x4663a3*/
  *(_DWORD *)&this->__pad_110[16] = 0; /*0x4663aa*/
  this->__pad_B4[80] = 1; /*0x4663b0*/
  this->__pad_B4[81] = 1; /*0x4663b6*/
  this->__pad_B4[44] = 0; /*0x4663bf*/
  *(_DWORD *)&this->__pad_B4[76] = 0; /*0x4663c5*/
  *(_DWORD *)&this->__pad_B4[84] = 0; /*0x4663cb*/
  this->BulletClass_field_0x10C = 0; /*0x4663d1*/
  *(_DWORD *)this->__pad_110 = 0; /*0x4663d7*/
  *(_DWORD *)&this->__pad_110[4] = -1; /*0x4663dd*/
  *(_DWORD *)&this->__pad_110[8] = 0; /*0x4663e3*/
  *(_DWORD *)&this->__pad_110[20] = 0; /*0x4663e9*/
  *(_DWORD *)&this->__pad_110[24] = 0; /*0x4663ef*/
  this->__pad_110[28] = 0; /*0x4663f5*/
  this->__pad_110[29] = 0; /*0x4663fb*/
  this->BulletClass_field_0x130 = 0; /*0x466401*/
  *(_WORD *)&this->__pad_144[8] = -1; /*0x466407*/
  *(_WORD *)&this->__pad_144[10] = -1; /*0x46640e*/
  this->BulletClass_field_0x154 = 0; /*0x466419*/
  this->__pad_158[0] = 0; /*0x46641f*/
  *(_DWORD *)this->__pad_0 = &BulletClass::`vftable'; /*0x466425*/
  this->BulletClass_field_0x4 = &BulletClass::`vftable'; /*0x46642b*/
  this->BulletClass_field_0x8 = &BulletClass::`vftable'; /*0x466431*/
  *(_DWORD *)this->__pad_C = &BulletClass::`vftable'; /*0x466438*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->BulletClass_field_0x4); /*0x46643f*/
  *(_DWORD *)this->__pad_134 = 0; /*0x466444*/
  *(_DWORD *)&this->__pad_134[4] = 0; /*0x46644a*/
  *(_DWORD *)&this->__pad_134[8] = 0; /*0x466450*/
  this->BulletClass_field_0x140 = 0; /*0x466456*/
  *(_DWORD *)this->__pad_144 = 0; /*0x46645c*/
  *(_DWORD *)&this->__pad_144[4] = 0; /*0x466462*/
  if ( *(int *)&stru_A8EB00.?[364] < *(int *)&stru_A8EB00.?[356] /*0x46649b*/
    || (stru_A8EB00.?[361] || !*(_DWORD *)&stru_A8EB00.?[356])
    && *(int *)&stru_A8EB00.?[368] > 0
    && (*(unsigned __int8 (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)&stru_A8EB00.?[348] + 8))(
         &stru_A8EB00.?[348],
         *(_DWORD *)&stru_A8EB00.?[356] + *(_DWORD *)&stru_A8EB00.?[368],
         0) )
  {
    v2 = (*(_DWORD *)&stru_A8EB00.?[364])++; /*0x4664a8*/
    *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[352] + 4 * v2) = this; /*0x4664b7*/
  }
  return (int)this->__pad_0; /*0x4664bc*/
}



// ==== 0x004664C0  Particle::Init  this=AbstractClass  sig=csp ====
int __thiscall Particle::Init(int *this, int a2, int a3, int a4, int a5, int a6, int a7, char a8)
{
  int result; // eax

  result = a2; /*0x4664c4*/
  *(this + 67) = a3; /*0x4664c8*/
  this->q011 = a7; /*0x4664d2*/
  *(this + 74) = a6; /*0x4664dc*/
  *((_BYTE *)this + 224) = a8; /*0x4664e6*/
  *(this + 27) = a5; /*0x4664f6*/
  *(this + 43) = a2; /*0x4664fb*/
  *(this + 44) = a4; /*0x466501*/
  *((_BYTE *)this + 300) = 0; /*0x466507*/
  *((_BYTE *)this + 301) = *(_BYTE *)(a2 + 758); /*0x466513*/
  if ( *(_BYTE *)(a2 + 681) && a4 ) /*0x466525*/
  {
    result = *(_DWORD *)(*(_DWORD *)(a4 + 540) + 90196); /*0x46652d*/
    *(this + 69) = result; /*0x466533*/
  }
  else
  {
    *(this + 69) = -1; /*0x46653b*/
  }
  this->u8_15 = 256; /*0x466546*/
  *(this + 85) = 0; /*0x466550*/
  *((_BYTE *)this + 344) = 0; /*0x466556*/
  return result; /*0x466545*/
}



// ==== 0x00466560  BulletClass::Dtor  this=BulletClass  sig=csp ====
int __thiscall BulletClass::Dtor(BulletClass *this)
{
  int v2; // eax
  int v3; // eax
  BulletClass *v5; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this->__pad_0 = &BulletClass::`vftable'; /*0x466566*/
  this->BulletClass_field_0x4 = &BulletClass::`vftable'; /*0x46656c*/
  this->BulletClass_field_0x8 = &BulletClass::`vftable'; /*0x466573*/
  *(_DWORD *)this->__pad_C = &BulletClass::`vftable'; /*0x46657a*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x466581*/
  if ( this->__pad_158[0] ) /*0x466586*/
  {
    v5 = this; /*0x4665a0*/
    v2 = (*(int (__thiscall **)(int *, BulletClass **))(g_BuildingLoadQueue_Array.?[0] + 16))( /*0x4665a4*/
           g_BuildingLoadQueue_Array.?,
           &v5);
    if ( v2 != -1 && v2 < g_BuildingLoadQueue_Array.?[1] ) /*0x4665b4*/
    {
      --g_BuildingLoadQueue_Array.?[1]; /*0x4665b9*/
      for ( ; /*0x4665bf*/
            v2 < g_BuildingLoadQueue_Array.?[1];
            *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v2 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.?[0]
                                                                                 + 4 * v2) )
      {
        ++v2; /*0x4665c7*/
      }
    }
  }
  if ( byte_A8E9A0 ) /*0x4665e0*/
    ObjectClass::Undeploy((ObjectClass *)this); /*0x4665e4*/
  this->BulletClass_field_0xAC = 0; /*0x4665e9*/
  this->BulletClass_field_0xB0 = 0; /*0x4665f3*/
  this->BulletClass_field_0x154 = 0; /*0x4665fd*/
  v5 = this; /*0x466617*/
  v3 = (*(int (__thiscall **)(_BYTE *, BulletClass **))(*(_DWORD *)&stru_A8EB00.?[348] + 16))(&stru_A8EB00.?[348], &v5); /*0x46661b*/
  if ( v3 != -1 && v3 < *(int *)&stru_A8EB00.?[364] ) /*0x46662b*/
  {
    --*(_DWORD *)&stru_A8EB00.?[364]; /*0x466630*/
    for ( ; /*0x466636*/
          v3 < *(int *)&stru_A8EB00.?[364];
          *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[352] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[352] + 4 * v3) )
    {
      ++v3; /*0x46663e*/
    }
  }
  return ObjectClass::Dtor((ObjectClass *)this); /*0x466657*/
}



// ==== 0x00466660  BulletClass::CalculateSpreadAngle  this=BulletClass  sig=csp ====
int *__stdcall BulletClass::CalculateSpreadAngle(BulletClass *this)
{
  if ( (byte_89DE10 & 1) == 0 ) /*0x46666b*/
  {
    byte_89DE10 |= 1u; /*0x466689*/
    dword_89DDF4 = 2147450879; /*0x46668f*/
    atexit(nullsub_108); /*0x466694*/
  }
  return &dword_89DDF4; /*0x4666a2*/
}



// ==== 0x004666B0  nullsub_108  this=-  sig=ida-proto ====
void __cdecl nullsub_108()
{
  ; /*0x4666b0*/
}



// ==== 0x004666C0  BulletClass::CheckMirrorState  this=BulletClass  sig=csp ====
bool __thiscall BulletClass::CheckMirrorState(BulletClass *this, int a2)
{
  return (unsigned __int8)ObjectClass::UpdateProductionDisplay((ObjectClass *)this) != 0; /*0x4666cf*/
}



// ==== 0x004666E0  BulletClass::ProcessNukeExplosion  this=BulletClass  sig=csp ====
char __usercall BulletClass::ProcessNukeExplosion@<al>(BulletClass *this, double FiringDistance@<st0>)
{
  ObjectClass *v2; // ecx
  int v4; // eax
  int v5; // eax
  int Coord3D_field_0x04; // ecx
  char v7; // al
  unsigned __int8 v8; // bl
  int v9; // esi
  AnimClass *v10; // eax
  int v11; // eax
  int v13; // ecx
  int v14; // eax
  int v16; // edx
  char v17; // al
  CellClass *v18; // edx
  unsigned int v32; // eax
  int v33; // edx
  int v34; // ecx
  Triple *v35; // eax
  _BYTE *v36; // ecx
  Triple *v37; // eax
  int v40; // eax
  int v41; // edx
  int v42; // kr00_4
  int v43; // edi
  int v44; // eax
  _DWORD *v45; // eax
  int *v46; // eax
  int v47; // edx
  int v48; // eax
  int v49; // eax
  int v50; // ecx
  char v51; // si
  __int16 v52; // cx
  char *v53; // eax
  int v55; // edx
  int *v56; // eax
  int v57; // edx
  int v58; // eax
  int v59; // esi
  int *v60; // eax
  int v61; // edx
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v69; // eax
  int v... [55852 chars total]



// ==== 0x00468000  BulletClass::GetAnimFrame  this=BulletClass  sig=csp ====
int __thiscall BulletClass::GetAnimFrame(BulletClass *this)
{
  double v1; // st7
  int result; // eax
  _BYTE *BulletClass_field_0xAC; // ecx
  double v5; // [esp+0h] [ebp-18h]
  unsigned int v6; // [esp+14h] [ebp-4h]

  _ESI = this; /*0x468002*/
  result = 0; /*0x468004*/
  if ( !*((_BYTE *)this->BulletClass_field_0xAC + 673) ) /*0x46800c*/
  {
    __asm { fld qword ptr [esi+0F0h] } /*0x468022*/
    __asm
    {
      fchs
      fstp [esp+18h+var_18]; double
    }
    Math::CalcAngle(v5, *(double *)&this->__pad_B4[52]); /*0x468032*/
    __asm { fsub ds:dbl_7E2820 } /*0x468037*/
    __asm { fmul ds:dbl_7E2818 }
    LOWORD(v6) = Math::RoundToInt(v1); /*0x46804b*/
    result = dword_7F4890[(((v6 >> 10) + 1) >> 1) & 0x1F]; /*0x46805d*/
  }
  BulletClass_field_0xAC = _ESI->BulletClass_field_0xAC; /*0x468064*/
  if ( BulletClass_field_0xAC[756] || BulletClass_field_0xAC[757] ) /*0x468074*/
    return (unsigned __int8)_ESI->__pad_110[28]; /*0x468080*/
  return result; /*0x468086*/
}



// ==== 0x00468090  BulletClass::SetupVoxelTransform  this=BulletClass  sig=csp ====
void __thiscall BulletClass::SetupVoxelTransform(BulletClass *this, int *a2, int *a3)
{
  double v3; // st7
  _BYTE *BulletClass_field_0xAC; // eax
  float *inited; // eax
  float *v7; // eax
  int v8; // ebx
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  _BYTE *v14; // eax
  int v15; // ebx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  double v19; // [esp+0h] [ebp-D0h]
  double v20; // [esp+8h] [ebp-C8h]
  float v21; // [esp+Ch] [ebp-C4h]
  float v22; // [esp+Ch] [ebp-C4h]
  unsigned int v23; // [esp+20h] [ebp-B0h]
  unsigned int v24; // [esp+20h] [ebp-B0h]
  double v25; // [esp+20h] [ebp-B0h]
  int v26; // [esp+20h] [ebp-B0h]
  int v27; // [esp+2Ch] [ebp-A4h] BYREF
  int v28; // [esp+30h] [ebp-A0h]
  int v29; // [esp+34h] [ebp-9Ch]
  int GroundHeight; // [esp+38h] [ebp-98h]
  unsigned int v31; // [esp+3Ch] [ebp-94h]
  Matrix3x4 v32; // [esp+40h] [ebp-90h] BYREF
  AudioConfig v33[12]; // [esp+70h] [ebp-60h] BYREF
  float v34[12]; // [esp+A0h] [ebp-30h] BYREF

  _ESI = this; /*0x4680a3*/
  if ( ((int)dword_A8B230->vtable0 & 0x1000) == 0 /*0x4680d5*/
    || (v27 = *(_DWORD *)&this->__pad_1C[128],
        v28 = *(_DWORD *)&this->__pad_1C[132],
        v29 = *(_DWORD *)&this->__pad_1C[136],
        !(unsigned __int8)Game::Stub3((int)&v27)) )
  {
    BulletClass_field_0xAC = _ESI->BulletClass_field_0xAC; /*0x4680e2*/
    if ( !BulletClass_field_0xAC[670] && !_ESI->__pad_158[0] ) /*0x4680f6*/
    {
      if ( BulletClass_field_0xAC[566] ) /*0x468104*/
      {
        Matrix3x4::Identity(&v32); /*0x468116*/
        __asm { fld qword ptr [esi+0F0h] } /*0x468127*/
        __asm
        {
          fchs
          fstp [esp+0D0h+var_D0]; double
        }
        Math::CalcAngle(v19, *(double *)&_ESI->__pad_B4[52]); /*0x468137*/
        __asm /*0x46813c*/
        {
          fsub ds:dbl_7E2820
          fmul ds:dbl_7E2818
        }
        LOWORD(v23) = Math::RoundToInt(v3); /*0x46814d*/
        v24 = ((((v23 >> 10) + 1) >> 1) & 0x1F) - 8; /*0x468169*/
        __asm /*0x46816d*/
        {
          fild [esp+0C4h+var_B0]
          fmul ds:dbl_7E4408
          fstp [esp+0C4h+var_C4]; float
        }
        Matrix2D::Rotate(v32.m_Data, v21); /*0x46817a*/
        __asm /*0x46817f*/
        {
          fld qword ptr [esi+0F0h]
          fld qword ptr [esi+0E8h]
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
        }
        __asm
        {
          faddp st(1), st
          fstp qword ptr [esp]; double
          fstp st
          fstp st
        }
        Math::Sqrt(v20); /*0x46819f*/
        __asm { fstp qword ptr [esp+0C8h+var_B0] } /*0x4681aa*/
        Math::CalcAngle(*(double *)&_ESI->__pad_B4[68], v25); /*0x4681c0*/
        __asm /*0x4681c5*/
        {
          fsub ds:dbl_7E2820
          fmul ds:dbl_7E2818
        }
        LOWORD(v25) = Math::RoundToInt(v3); /*0x4681d6*/
        LODWORD(v25) = (((unsigned int)((LODWORD(v25) >> 10) + 1) >> 1) & 0x1F) - 8; /*0x4681ee*/
        __asm /*0x4681f6*/
        {
          fild [esp+0C4h+var_B0]
          fmul ds:dbl_7E4408
          fchs
          fstp [esp+0C4h+var_C4]; float
        }
        Matrix3D::RotateZ(v32.m_Data, v22); /*0x468205*/
        inited = (float *)AudioConfig::InitDefault(v33); /*0x468227*/
        v7 = MultiplyMatrix3x4(v34, inited, (float *)v32.m_Data); /*0x468235*/
        BulletClass::RenderVoxelBullet(_ESI, (int)_ESI->BulletClass_field_0xAC + 176, v7, a2, a3, 0, 2048, 1000); /*0x46824a*/
      }
      else
      {
        v26 = (*(int (__thiscall **)(BulletClass *))(*(_DWORD *)_ESI->__pad_0 + 108))(_ESI); /*0x468261*/
        if ( v26 ) /*0x468265*/
        {
          v31 = (*(int (__thiscall **)(BulletClass *))(*(_DWORD *)_ESI->__pad_0 + 488))(_ESI); /*0x468275*/
          v8 = (*(int (__thiscall **)(BulletClass *))(*(_DWORD *)_ESI->__pad_0 + 456))(_ESI); /*0x468289*/
          v27 = *(_DWORD *)&_ESI->__pad_1C[128]; /*0x46828f*/
          v28 = *(_DWORD *)&_ESI->__pad_1C[132]; /*0x46829b*/
          v29 = *(_DWORD *)&_ESI->__pad_1C[136]; /*0x4682a2*/
          GroundHeight = Cell::GetGroundHeight(&v27); /*0x4682b0*/
          if ( !_ESI->__pad_1C[112] ) /*0x4682b4*/
          {
            v9 = *(_DWORD *)&_ESI->__pad_1C[132]; /*0x4682c0*/
            v10 = *(_DWORD *)&_ESI->__pad_1C[136]; /*0x4682c3*/
            v27 = *(_DWORD *)&_ESI->__pad_1C[128]; /*0x4682c6*/
            v28 = v9; /*0x4682ce*/
            v29 = v10; /*0x4682d8*/
            if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v27)->flags[0] & 0x100) != 0 /*0x4682f3*/
              && v8 >= dword_89DE64 )
            {
              v8 -= dword_89DE64; /*0x4682f9*/
              GroundHeight += dword_89DE64; /*0x4682fd*/
            }
          }
          if ( v8 > 0 && *((_BYTE *)_ESI->BulletClass_field_0xAC + 666) ) /*0x46830e*/
          {
            v11 = ZCoordToScreenY(v8); /*0x46831a*/
            v12 = *a2; /*0x468322*/
            v28 = v11 + a2[1]; /*0x468328*/
            v27 = v12; /*0x46833d*/
            v13 = ZCoordToScreenY(GroundHeight); /*0x468341*/
            DrawToSurfaceSHP( /*0x468374*/
              (int)g_DSurface_Hidden_2,
              *(int *)&stru_87F5F0.__pad_58[124],
              v26,
              v31,
              &v27,
              a3,
              9729,
              0,
              -10 - v13,
              0,
              1000,
              0,
              0,
              0,
              0,
              0);
          }
          v14 = _ESI->BulletClass_field_0xAC; /*0x468379*/
          v15 = *(_DWORD *)&stru_87F5F0.__pad_58[124]; /*0x46837f*/
          if ( v14[680] ) /*0x468385*/
          {
            v15 = *(_DWORD *)&stru_87F5F0.__pad_58[120]; /*0x46838f*/
          }
          else if ( v14[681] ) /*0x468397*/
          {
            v16 = *(_DWORD *)&_ESI->__pad_110[4]; /*0x4683a1*/
            if ( v16 == -1 ) /*0x4683aa*/
              v15 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] /*0x4683d1*/
                                          + 4 * *(_DWORD *)&dword_A83D4C[134].__pad_90[4])
                              + 780);
            else
              v15 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * v16) + 780); /*0x4683b5*/
          }
          v17 = (*(int (__thiscall **)(BulletClass *))(*(_DWORD *)_ESI->__pad_0 + 464))(_ESI); /*0x4683ea*/
          v18 = ZCoordToScreenY(v17); /*0x4683f2*/
          DrawToSurfaceSHP((int)g_DSurface_Hidden_2, v15, v26, v31, a2, a3, 11776, 0, -30 - v18, 0, 1000, 0, 0, 0, 0, 0); /*0x46841d*/
        }
      }
    }
  }
}



// ==== 0x00468430  BulletClass::LoseTarget  this=BulletClass  sig=csp ====
__int16 __thiscall BulletClass::LoseTarget(BulletClass *this)
{
  _DWORD *v2; // eax
  __int16 v4[2]; // [esp+4h] [ebp-14h] BYREF
  int v5; // [esp+8h] [ebp-10h]
  _BYTE v6[12]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this->BulletClass_field_0x10C + 72))( /*0x468443*/
                   this->BulletClass_field_0x10C,
                   v6);
  LOWORD(v5) = *v2 / 256; /*0x468456*/
  HIWORD(v5) = v2[1] / 256; /*0x46846a*/
  *(_DWORD *)v4 = v5; /*0x468473*/
  LOWORD(v2) = dword_A8E7AC; /*0x468477*/
  if ( dword_A8E7AC /*0x46849b*/
    || (LOWORD(v2) = (*(int (__thiscall **)(void *))(*(_DWORD *)this->BulletClass_field_0x10C + 84))(this->BulletClass_field_0x10C),
        (_BYTE)v2)
    || (LOWORD(v2) = v4[0], *(_DWORD *)v4 == dword_89DDF0) )
  {
    this->BulletClass_field_0x10C = 0; /*0x4684c5*/
  }
  else
  {
    v2 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v4); /*0x4684b5*/
    this->BulletClass_field_0x10C = v2; /*0x4684ba*/
  }
  return (__int16)v2; /*0x4684c0*/
}



// ==== 0x004684E0  BulletClass::ProcessImpact  this=BulletClass  sig=csp ====
__int16 __thiscall BulletClass::ProcessImpact(BulletClass *this, char *a2, char *a3)
{
  char *v3; // edi
  char *BulletClass_field_0xB0; // eax
  char *BulletClass_field_0x10C; // ecx
  _DWORD *v7; // eax
  char **i; // ecx
  __int16 v10; // [esp+Ch] [ebp-10h] BYREF
  char v11[12]; // [esp+10h] [ebp-Ch] BYREF

  v3 = a2; /*0x4684ea*/
  Object::Unlink((ObjectClass *)this); /*0x4684f2*/
  BulletClass_field_0xB0 = (char *)this->BulletClass_field_0xB0; /*0x4684f7*/
  if ( BulletClass_field_0xB0 == v3 ) /*0x468501*/
    this->BulletClass_field_0xB0 = 0; /*0x468503*/
  BulletClass_field_0x10C = (char *)this->BulletClass_field_0x10C; /*0x468509*/
  if ( BulletClass_field_0x10C == v3 ) /*0x468511*/
  {
    v7 = (_DWORD *)(*(int (__thiscall **)(char *, char *))(*(_DWORD *)BulletClass_field_0x10C + 72))( /*0x46851e*/
                     BulletClass_field_0x10C,
                     v11);
    a2 = *(char **)CellStruct::Set((CellStruct *)&v10, *v7 / 256, v7[1] / 256); /*0x46854d*/
    LOWORD(BulletClass_field_0xB0) = dword_A8E7AC; /*0x468551*/
    if ( dword_A8E7AC /*0x468575*/
      || (LOWORD(BulletClass_field_0xB0) = (*(int (__thiscall **)(void *))(*(_DWORD *)this->BulletClass_field_0x10C + 84))(this->BulletClass_field_0x10C),
          (_BYTE)BulletClass_field_0xB0)
      || (LOWORD(BulletClass_field_0xB0) = (_WORD)a2, a2 == (char *)dword_89DDF0) )
    {
      this->BulletClass_field_0x10C = 0; /*0x46859c*/
    }
    else
    {
      BulletClass_field_0xB0 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x46858f*/
      this->BulletClass_field_0x10C = BulletClass_field_0xB0; /*0x468594*/
    }
  }
  if ( this->BulletClass_field_0xAC == v3 ) /*0x4685a8*/
    this->BulletClass_field_0xAC = 0; /*0x4685aa*/
  if ( (char *)this->BulletClass_field_0x130 == v3 ) /*0x4685b6*/
    this->BulletClass_field_0x130 = 0; /*0x4685b8*/
  if ( this->BulletClass_field_0x154 == v3 ) /*0x4685c4*/
    this->BulletClass_field_0x154 = 0; /*0x4685c6*/
  if ( (_BYTE)a3 ) /*0x4685d0*/
  {
    BulletClass_field_0xB0 = (char *)(*(int (__thiscall **)(char *))(*(_DWORD *)v3 + 44))(v3); /*0x4685da*/
    if ( BulletClass_field_0xB0 == (char *)8 ) /*0x4685e0*/
    {
      a3 = v3; /*0x4685e2*/
      if ( *(_BYTE *)(*((_DWORD *)v3 + 43) + 748) ) /*0x4685ec*/
      {
        BulletClass_field_0xB0 = 0; /*0x4685fa*/
        if ( dword_89DE28 > 0 ) /*0x4685fe*/
        {
          for ( i = (char **)dword_89DE1C; v3 != *i; ++i ) /*0x468600*/
          {
            if ( (int)++BulletClass_field_0xB0 >= dword_89DE28 ) /*0x468610*/
              return (__int16)BulletClass_field_0xB0; /*0x468610*/
          }
          BulletClass_field_0xB0 = (char *)(*(int (__thiscall **)(int *, char **))(dword_89DE18 + 16))( /*0x46862a*/
                                             &dword_89DE18,
                                             &a3);
          if ( BulletClass_field_0xB0 != (char *)-1 /*0x468645*/
            && (int)BulletClass_field_0xB0 < dword_89DE28
            && (int)BulletClass_field_0xB0 < --dword_89DE28 )
          {
            do /*0x46865d*/
            {
              ++BulletClass_field_0xB0; /*0x46864d*/
              *((_DWORD *)dword_89DE1C + (_DWORD)BulletClass_field_0xB0 - 1) = *((_DWORD *)dword_89DE1C /*0x468651*/
                                                                               + (_DWORD)BulletClass_field_0xB0);
            }
            while ( (int)BulletClass_field_0xB0 < dword_89DE28 ); /*0x46865d*/
          }
        }
      }
    }
  }
  return (__int16)BulletClass_field_0xB0; /*0x468612*/
}



// ==== 0x00468670  BulletClass::ProcessObstacle  this=BulletClass  sig=csp ====
char __userpurge BulletClass::ProcessObstacle@<al>(BulletClass *this, double a2@<st0>, int *a3, const void *a4)
{
  ObjectClass *v4; // ecx
  int *v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // esi
  char *BulletClass_field_0x8; // eax
  int v12; // esi
  int v13; // eax
  __int16 v14; // ax
  int v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  #375 *v19; // esi
  int *FirstFirestorm; // eax
  int v21; // ecx
  int v22; // edx
  int GroundHeight; // eax
  int v24; // edx
  _DWORD *FirstObstacle; // eax
  int v26; // edi
  int v27; // eax
  int v34; // ecx
  int v35; // eax
  double v43; // [esp+Ch] [ebp-58h]
  double v44; // [esp+Ch] [ebp-58h]
  double v45; // [esp+Ch] [ebp-58h]
  int v46; // [esp+24h] [ebp-40h]
  int v47; // [esp+24h] [ebp-40h]
  unsigned int v48; // [esp+24h] [ebp-40h]
  char *v49; // [esp+24h] [ebp-40h]
  int v51; // [esp+24h] [ebp-40h]
  int v52; // [esp+24h] [ebp-40h]
  double v53; // [esp+24h] [ebp-40h]
  int v54; // [esp+30h] [ebp-34h]
  double v55; // [esp+34h] [ebp-30h] BYREF
  _DWORD v56[3]; // [esp+40h] [ebp-24h] BYREF
  int v57; // [esp+4Ch] [ebp-18h]
  int v58; // [esp+58h] [ebp-Ch] BYREF
  int v59; // [esp+5Ch] [ebp-8h]
  int v60; // [esp+60h] [ebp-4h]

  _EBX = (int)v4; /*0x468681*/
  if ( !(unsigned __int8)ObjectClass::Deploy(v4) ) /*0x468684*/
    return 0; /*0x468b7f*/
  qmemcpy((void *)(_EBX + 232), a3, 0x18u); /*0x4686a0*/
  *(_DWORD *)(_EBX + 308) = *(_DWORD *)this->__pad_0; /*0x4686b1*/
  *(_DWORD *)(_EBX + 312) = this->BulletClass_field_0x4; /*0x4686b6*/
  *(_DWORD *)(_EBX + 316) = this->BulletClass_field_0x8; /*0x4686bc*/
  LOWORD(v46) = *(_DWORD *)(_EBX + 308) / 256; /*0x4686cd*/
  HIWORD(v46) = *(_DWORD *)(_EBX + 312) / 256; /*0x4686e6*/
  *(_DWORD *)(_EBX + 332) = v46; /*0x4686ef*/
  RemoveTarget(_EBX); /*0x4686f5*/
  v6 = (int *)(*(int (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(_EBX + 268) + 88))( /*0x46870a*/
                *(_DWORD *)(_EBX + 268),
                &v56[1]);
  v7 = *v6; /*0x468712*/
  v58 = v7; /*0x468714*/
  v59 = v6[1]; /*0x46871b*/
  v8 = v59; /*0x468718*/
  v9 = v6[2]; /*0x46871f*/
  *(_DWORD *)(_EBX + 320) = v7; /*0x468722*/
  v60 = v9; /*0x468724*/
  *(_DWORD *)(_EBX + 324) = v8; /*0x468728*/
  *(_DWORD *)(_EBX + 328) = v9; /*0x46872b*/
  v10 = *(_DWORD *)(_EBX + 172); /*0x46872e*/
  if ( *(_BYTE *)(v10 + 675) && *(_BYTE *)(v10 + 670) ) /*0x468741*/
  {
    v47 = *(_DWORD *)this->__pad_0 - v7; /*0x468755*/
    __asm { fild dword ptr [esp+58h+var_44+4] } /*0x46875c*/
    v48 = v8 - (unsigned int)this->BulletClass_field_0x4; /*0x468762*/
    BulletClass_field_0x8 = (char *)this->BulletClass_field_0x8; /*0x468766*/
    __asm /*0x468769*/
    {
      fstp [esp+58h+var_24+4]
      fild dword ptr [esp+58h+var_44+4]
    }
    v49 = &BulletClass_field_0x8[-v9]; /*0x468773*/
    __asm /*0x468777*/
    {
      fstp [esp+58h+var_24+8]
      fild dword ptr [esp+58h+var_44+4]
      fld [esp+58h+var_24+8]
      fld [esp+58h+var_24+4]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fld st(3)
      fmul st, st(4)
      faddp st(1), st
      fstp [esp+58h+var_5C+4]; double
      fstp st
      fstp st
      fstp st
    }
    Math::Sqrt(v43); /*0x4687a0*/
    __asm { fstp dword ptr [esp+58h+var_44+4] } /*0x4687c5*/
    __asm { fld dword ptr [esp+50h+var_44+4] }
    v12 = Random::Range( /*0x4687d2*/
            (Random *)&dword_A8B230[14].NeedsSaveOrLink,
            0,
            2 * *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5940));
    LOWORD(v13) = Math::RoundToInt(a2); /*0x4687d4*/
    v54 = v13 * v12 / *(_DWORD *)(*(_DWORD *)(_EBX + 304) + 180); /*0x4687fe*/
    v51 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x468807*/
    __asm /*0x46880b*/
    {
      fild dword ptr [esp+50h+var_44+4]
      fmul ds:dbl_7E3570
      fmul ds:dbl_7E3CC0
      fsub ds:dbl_7E2820
      fmul ds:dbl_7E2818
    }
    v14 = Math::RoundToInt(a2); /*0x468827*/
    v15 = v60; /*0x468834*/
    v52 = v14 - 0x3FFF; /*0x468838*/
    __asm /*0x46883c*/
    {
      fild dword ptr [esp+50h+var_44+4]
      fmul ds:dbl_7E2810
      fstp qword ptr [esp+50h+var_44+4]
      fild [esp+50h+var_8]
    }
    __asm
    {
      fstp qword ptr [esp+54h+var_24+4]
      fild dword ptr [esp+54h+var_34]
      fstp [esp+54h+var_34+4]
    }
    Math::SinCos(v53); /*0x468864*/
    __asm /*0x468869*/
    {
      fmul [esp+58h+var_34+4]
      fsubr qword ptr [esp+58h+var_24+4]
    }
    LOWORD(v16) = Math::RoundToInt(a2); /*0x468871*/
    v54 = v16; /*0x46887a*/
    Math::ArcTan2(v53); /*0x468884*/
    __asm { fmul [esp+60h+var_34+4] } /*0x468889*/
    __asm { fiadd [esp+50h+var_C] }
    LOWORD(v17) = Math::RoundToInt(a2); /*0x468894*/
    v58 = v17; /*0x46889d*/
    v59 = v54; /*0x4688a1*/
    v60 = v15; /*0x4688a5*/
  }
  if ( *(_BYTE *)(*(_DWORD *)(_EBX + 172) + 670) ) /*0x4688af*/
  {
    v18 = *(_DWORD *)(_EBX + 176); /*0x4688bd*/
    if ( v18 ) /*0x4688c5*/
      v19 = *(#375 **)(v18 + 540); /*0x4688c7*/
    else
      v19 = 0; /*0x4688cf*/
    FirstFirestorm = MapClass::FindFirstFirestorm((int *)&v55, (int *)this->__pad_0, &v58, (int)v19); /*0x4688e2*/
    v56[1] = *FirstFirestorm; /*0x4688f1*/
    v21 = FirstFirestorm[1]; /*0x4688f5*/
    v56[2] = v21; /*0x4688f8*/
    v22 = FirstFirestorm[2]; /*0x4688fc*/
    v57 = v22; /*0x4688ff*/
    if ( v56[1] == dword_89DE30 && __PAIR64__(v22, v21) == qword_89DE34 ) /*0x46890b*/
    {
      FirstObstacle = TrajectoryHelper::FindFirstObstacle(this, &v58, *(_DWORD *)(_EBX + 172), v19); /*0x46894a*/
      if ( FirstObstacle ) /*0x468953*/
      {
        v26 = *(_DWORD *)_EBX; /*0x468957*/
        v27 = (*(int (__thiscall **)(_DWORD *, double *))(*FirstObstacle + 72))(FirstObstacle, &v55); /*0x468960*/
        (*(void (__thiscall **)(int, int))(v26 + 436))(_EBX, v27); /*0x468966*/
      }
      else
      {
        (*(void (__thiscall **)(int, int *))(*(_DWORD *)_EBX + 436))(_EBX, &v58); /*0x468977*/
      }
      (*(void (__thiscall **)(int, int *))(*(_DWORD *)_EBX + 436))(_EBX, &v58); /*0x468986*/
      *(_DWORD *)(_EBX + 272) = 0; /*0x46898c*/
      __asm /*0x468992*/
      {
        fld qword ptr [ebx+0E8h]
        fcomp ds:dbl_7E2800
        fnstsw ax
      }
      if ( (_AX & 0x4000) != 0 ) /*0x4689a3*/
      {
        __asm /*0x4689a5*/
        {
          fld qword ptr [ebx+0F0h]
          fcomp ds:dbl_7E2800
          fnstsw ax
        }
        if ( (_AX & 0x4000) != 0 ) /*0x4689b6*/
        {
          __asm /*0x4689b8*/
          {
            fld qword ptr [ebx+0F8h]
            fcomp ds:dbl_7E2800
            fnstsw ax
          }
          if ( (_AX & 0x4000) != 0 ) /*0x4689c9*/
          {
            *(_DWORD *)(_EBX + 232) = 0; /*0x4689cb*/
            *(_DWORD *)(_EBX + 236) = 1079574528; /*0x4689d1*/
          }
        }
      }
      __asm /*0x4689db*/
      {
        fld qword ptr [ebx+0F8h]
        fld qword ptr [ebx+0F0h]
        fld qword ptr [ebx+0E8h]
        fld st(2)
        fmul st, st(3)
        fld st(2)
        fmul st, st(3)
      }
      __asm
      {
        faddp st(1), st
        fld st(1)
        fmul st, st(2)
        faddp st(1), st
        fstp [esp+58h+var_5C+4]; double
        fstp st
        fstp st
        fstp st
      }
      Math::Sqrt(v44); /*0x468a09*/
      __asm { fdivr ds:dbl_7E2800 } /*0x468a0e*/
      __asm
      {
        fld st
        fmul qword ptr [ebx+0E8h]
        fstp qword ptr [ebx+0E8h]
      }
      *(double *)(_EBX + 232) = _RT1; /*0x468a1f*/
      __asm /*0x468a25*/
      {
        fld st
        fmul qword ptr [ebx+0F0h]
        fstp qword ptr [ebx+0F0h]
      }
      *(double *)(_EBX + 240) = _RT1; /*0x468a2d*/
      __asm /*0x468a33*/
      {
        fmul qword ptr [ebx+0F8h]
        fstp qword ptr [ebx+0F8h]
      }
      *(double *)(_EBX + 248) = _RT1; /*0x468a39*/
    }
    else
    {
      GroundHeight = Cell::GetGroundHeight(&v56[1]); /*0x46891f*/
      v24 = *(_DWORD *)_EBX; /*0x468924*/
      v57 = GroundHeight; /*0x468926*/
      (*(void (__thiscall **)(int, _DWORD *))(v24 + 436))(_EBX, &v56[1]); /*0x468931*/
    }
  }
  v34 = *(_DWORD *)(_EBX + 268); /*0x468a3f*/
  if ( v34 && (*(int (__thiscall **)(int))(*(_DWORD *)v34 + 44))(v34) == 2 ) /*0x468a51*/
    v35 = 0; /*0x468a53*/
  else
    v35 = *(_DWORD *)(*(_DWORD *)(_EBX + 172) + 752); /*0x468a5d*/
  v56[1] = *(_DWORD *)(_EBX + 156); /*0x468a75*/
  v56[2] = *(_DWORD *)(_EBX + 160); /*0x468a7c*/
  v57 = *(_DWORD *)(_EBX + 164); /*0x468a88*/
  BulletClass::InitDetonationTimer((BulletClass *)(_EBX + 184), &v56[1], &v58, v35, 0x7FFFFFFF); /*0x468a93*/
  if ( *(int *)(*(_DWORD *)(_EBX + 172) + 732) > 0 ) /*0x468aa6*/
  {
    __asm /*0x468aac*/
    {
      fld qword ptr [ebx+0E8h]
      fcomp ds:dbl_7E2800
      fnstsw ax
    }
    if ( (_AX & 0x4000) != 0 ) /*0x468abd*/
    {
      __asm /*0x468abf*/
      {
        fld qword ptr [ebx+0F0h]
        fcomp ds:dbl_7E2800
        fnstsw ax
      }
      if ( (_AX & 0x4000) != 0 ) /*0x468ad0*/
      {
        __asm /*0x468ad2*/
        {
          fld qword ptr [ebx+0F8h]
          fcomp ds:dbl_7E2800
          fnstsw ax
        }
        if ( (_AX & 0x4000) != 0 ) /*0x468ae3*/
        {
          *(_DWORD *)(_EBX + 232) = 0; /*0x468ae5*/
          *(_DWORD *)(_EBX + 236) = 1079574528; /*0x468aef*/
        }
      }
    }
    __asm /*0x468af9*/
    {
      fld qword ptr [ebx+0F8h]
      fld qword ptr [ebx+0F0h]
      fld qword ptr [ebx+0E8h]
      fld st(2)
      fmul st, st(3)
      fld st(2)
      fmul st, st(3)
    }
    __asm
    {
      faddp st(1), st
      fld st(1)
      fmul st, st(2)
      faddp st(1), st
      fstp [esp+58h+var_5C+4]; double
      fstp st
      fstp st
      fstp st
    }
    Math::Sqrt(v45); /*0x468b27*/
    __asm { fdivr ds:dbl_7E1718 } /*0x468b2c*/
    __asm
    {
      fld st
      fmul qword ptr [ebx+0E8h]
      fstp qword ptr [ebx+0E8h]
    }
    *(double *)(_EBX + 232) = _RT1; /*0x468b3d*/
    __asm /*0x468b43*/
    {
      fld st
      fmul qword ptr [ebx+0F0h]
      fstp qword ptr [ebx+0F0h]
    }
    *(double *)(_EBX + 240) = _RT1; /*0x468b4b*/
    __asm /*0x468b51*/
    {
      fmul qword ptr [ebx+0F8h]
      fstp qword ptr [ebx+0F8h]
    }
    *(double *)(_EBX + 248) = _RT1; /*0x468b57*/
  }
  if ( *(_BYTE *)(_EBX + 144) ) /*0x468b5d*/
    Targeting::Readd((_DWORD *)_EBX); /*0x468b6d*/
  return 1; /*0x468b74*/
}



// ==== 0x00468B90  BulletClass::UpdateFlightPath  this=BulletClass  sig=csp ====
int __thiscall BulletClass::UpdateFlightPath(BulletClass *this)
{
  int v1; // eax

  v1 = -(*((_BYTE *)this->BulletClass_field_0xAC + 759) != 0); /*0x468b9e*/
  LOBYTE(v1) = v1 & 0xFE; /*0x468ba0*/
  return v1 + 3; /*0x468ba5*/
}



// ==== 0x00468BB0  BulletClass::CheckBulletCollision  this=BulletClass  sig=csp ====
bool __thiscall BulletClass::CheckBulletCollision(BulletClass *this, int *a2)
{
  CellClass *v4; // ebx
  _BYTE *BulletClass_field_0xAC; // eax
  CellClass *v6; // ebx
  CellClass *v7; // ebp
  void *v8; // eax
  ParticleSystemClass *BulletClass_field_0xB0; // ecx
  bool result; // al
  void *BulletClass_field_0x10C; // ecx
  int v12; // eax
  int v13; // edi
  void *v14; // ecx
  _DWORD v15[3]; // [esp+10h] [ebp-Ch] BYREF
  CellClass *v16; // [esp+20h] [ebp+4h]

  *a2 = *(_DWORD *)&this->__pad_1C[128]; /*0x468bc8*/
  a2[1] = *(_DWORD *)&this->__pad_1C[132]; /*0x468bcd*/
  a2[2] = *(_DWORD *)&this->__pad_1C[136]; /*0x468bd3*/
  v4 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2); /*0x468be0*/
  BulletClass_field_0xAC = this->BulletClass_field_0xAC; /*0x468be2*/
  v16 = v4; /*0x468be8*/
  if ( BulletClass_field_0xAC[662] || BulletClass_field_0xAC[664] ) /*0x468bf6*/
  {
    v6 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], this->__pad_134); /*0x468c21*/
    v7 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &this->BulletClass_field_0x140); /*0x468c28*/
    v8 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&this->__pad_144[8]); /*0x468c36*/
    BulletClass_field_0xB0 = this->BulletClass_field_0xB0; /*0x468c3b*/
    if ( BulletClass_field_0xB0 ) /*0x468c43*/
      BulletClass_field_0xB0 = (ParticleSystemClass *)BulletClass_field_0xB0[2].?; /*0x468c45*/
    if ( TrajectoryHelper::GetObstacle( /*0x468c6d*/
           v6,
           v7,
           (int)v8,
           *a2,
           a2[1],
           a2[2],
           (int)this->BulletClass_field_0xAC,
           (#375 *)BulletClass_field_0xB0) )
    {
      return 1; /*0x468c7f*/
    }
    v4 = v16; /*0x468c82*/
  }
  if ( (*(int (__thiscall **)(BulletClass *))(*(_DWORD *)this->__pad_0 + 456))(this) <= -4 * dword_89DE70 ) /*0x468c9d*/
    return 1; /*0x468c9f*/
  BulletClass_field_0x10C = this->BulletClass_field_0x10C; /*0x468cab*/
  if ( BulletClass_field_0x10C ) /*0x468cb3*/
  {
    if ( *((_BYTE *)this->BulletClass_field_0xAC + 675) ) /*0x468cbb*/
    {
      v12 = *(_DWORD *)&this->__pad_1C[128]; /*0x468ccb*/
      v13 = *(_DWORD *)&this->__pad_1C[136]; /*0x468cd1*/
      v15[1] = *(_DWORD *)&this->__pad_1C[132]; /*0x468cd7*/
      v15[0] = v12; /*0x468cdb*/
      if ( v13 < *(_DWORD *)((*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)BulletClass_field_0x10C + 88))( /*0x468cfa*/
                               BulletClass_field_0x10C,
                               v15)
                           + 8)
        && (*(int (__thiscall **)(BulletClass *))(*(_DWORD *)this->__pad_0 + 456))(this) < 0 )
      {
        return 1; /*0x468cfc*/
      }
    }
  }
  if ( *((_BYTE *)this->BulletClass_field_0xAC + 669) /*0x468d1c*/
    && (*(unsigned __int8 (__thiscall **)(CellClass *))(v4->mapCoords[0] + 80))(v4) )
  {
    return 1; /*0x468d23*/
  }
  result = 0; /*0x468d67*/
  if ( *((_BYTE *)this->BulletClass_field_0xAC + 676) ) /*0x468d35*/
  {
    v14 = this->BulletClass_field_0x10C; /*0x468d3f*/
    if ( v14 ) /*0x468d47*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)v14 + 84))(v14) /*0x468d65*/
        && ObjectClass::DistanceTo((ObjectClass *)this, (int)this->BulletClass_field_0x10C) < 128 )
      {
        return 1; /*0x468d3d*/
      }
    }
  }
  return result; /*0x468c78*/
}



// ==== 0x00468D80  BulletClass::Fire  this=BulletClass  sig=csp ====
double __userpurge BulletClass::Fire@<st0>(ObjectClass *this@<ecx>, double a2@<st0>, char a3)
{
  int v4; // ebx
  int *location; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  _DWORD *v10; // eax
  int *v11; // eax
  int v12; // eax
  int v13; // eax
  int *v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  int *v18; // eax
  int *v19; // eax
  int v20; // ecx
  _DWORD *v21; // ecx
  int v22; // eax
  int v23; // edi
  int v24; // eax
  int *v25; // eax
  int v26; // ecx
  int v27; // [esp+18h] [ebp-30h] BYREF
  int v28; // [esp+1Ch] [ebp-2Ch]
  int v29; // [esp+20h] [ebp-28h]
  int v30; // [esp+24h] [ebp-24h] BYREF
  int v31; // [esp+28h] [ebp-20h]
  int v32; // [esp+2Ch] [ebp-1Ch]
  char v33[12]; // [esp+30h] [ebp-18h] BYREF
  int v34[3]; // [esp+3Ch] [ebp-Ch] BYREF

  v4 = 0; /*0x468d87*/
  location = this->location; /*0x468d8a*/
  v27 = this->location[0]; /*0x468d96*/
  v6 = this->q10C; /*0x468d9a*/
  v7 = location[1]; /*0x468da0*/
  v8 = location[2]; /*0x468da5*/
  v28 = v7; /*0x468da8*/
  v29 = v8; /*0x468dac*/
  if ( v6 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 84))(v6) ) /*0x468db4*/
    v4 = this->q10C; /*0x468dbb*/
  if ( !*(_BYTE *)(this->q0AC + 674) ) /*0x468dc7*/
  {
    v9 = this->q10C; /*0x468dd5*/
    if ( v9 ) /*0x468ddd*/
    {
      v10 = (_DWORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v9 + 72))(v9, v33); /*0x468dea*/
      v11 = Coord::Subtract((Coord *)v34, v27 - *v10, v28 - v10[1], v29 - v10[2]); /*0x468e0e*/
      v30 = *v11; /*0x468e18*/
      v31 = v11[1]; /*0x468e1f*/
      v32 = v11[2]; /*0x468e2a*/
      Math::Sqrt((double)v30 * (double)v30 + (double)v32 * (double)v32 + (double)v31 * (double)v31); /*0x468e4f*/
      LOWORD(v12) = Math::RoundToInt(a2); /*0x468e57*/
      if ( v12 < 32 ) /*0x468e5f*/
      {
        v13 = this->q0AC; /*0x468e61*/
        if ( !*(_BYTE *)(v13 + 660) && !*(_BYTE *)(v13 + 674) ) /*0x468e71*/
        {
          v14 = (int *)(*(int (__thiscall **)(_DWORD, int *))(**((_DWORD **)this + 67) + 72))( /*0x468e88*/
                         this->q10C,
                         v34);
          v27 = *v14; /*0x468e8d*/
          v28 = v14[1]; /*0x468e94*/
          v29 = v14[2]; /*0x468e9b*/
        }
      }
    }
    if ( !*(_BYTE *)(this->WeaponType + 340) ) /*0x468ea5*/
    {
      v15 = this->q0AC; /*0x468eb3*/
      if ( !*(_BYTE *)(v15 + 660) ) /*0x468eb9*/
      {
        if ( !a3 /*0x468f05*/
          && !*(_BYTE *)(v15 + 667)
          && *(int *)(v15 + 732) <= 0
          && (this->u32_34 != dword_89DE30 || *(_QWORD *)((char *)this + 212) != qword_89DE34) )
        {
          v16 = this->q0D4; /*0x468f11*/
          v27 = this->u32_34; /*0x468f14*/
          v17 = this->q0D8; /*0x468f18*/
          v28 = v16; /*0x468f1b*/
          v29 = v17; /*0x468f1f*/
        }
        if ( v4 && (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 120))(v4) != 2 ) /*0x468f31*/
        {
          if ( ObjectClass::DistanceTo(this, this->q10C) >= 128 ) /*0x468f46*/
            goto LABEL_30; /*0x468f46*/
          v18 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v4 + 164))(v4, v34); /*0x468f55*/
          goto LABEL_29; /*0x468f5b*/
        }
        if ( this->q10C ) /*0x468f60*/
        {
          if ( ObjectClass::DistanceTo(this, this->q10C) < 42 ) /*0x468f79*/
          {
            v19 = (int *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, int *, double@<st0>))(**((_DWORD **)this + 67) + 88))( /*0x468f88*/
                           this->q10C,
                           v34,
                           a2);
            v27 = *v19; /*0x468f8d*/
            v20 = this->q10C; /*0x468f91*/
            v28 = v19[1]; /*0x468f9a*/
            v29 = v19[2]; /*0x468fa1*/
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 44))(v20) == 6 ) /*0x468fad*/
            {
              v21 = (_DWORD *)this->q10C; /*0x468faf*/
              if ( *(_DWORD *)(v21[328] + 3772) || *(_DWORD *)(v21[328] + 3776) || *(_DWORD *)(v21[328] + 3780) ) /*0x468fcc*/
              {
                v18 = (int *)(*(int (__thiscall **)(_DWORD *, int *))(*v21 + 164))(v21, v34); /*0x468fda*/
LABEL_29:
                v27 = *v18; /*0x468fe0*/
                v28 = v18[1]; /*0x468fe9*/
                v29 = v18[2]; /*0x468ff0*/
              }
            }
          }
        }
      }
    }
  }
LABEL_30:
  v22 = this->q0AC; /*0x468ff4*/
  if ( *(_BYTE *)(v22 + 660) ) /*0x468ffa*/
  {
    Warhead::ApplyDamage((char *)this, &v27); /*0x4690a1*/
  }
  else
  {
    v30 = v27; /*0x469010*/
    v31 = v28; /*0x469018*/
    v32 = v29; /*0x46901c*/
    v23 = 0; /*0x469026*/
    if ( *(int *)(v22 + 684) > 0 ) /*0x46902a*/
    {
      do /*0x46908f*/
      {
        Warhead::ApplyDamage((char *)this, &v27); /*0x469033*/
        if ( !this->isAliveFlag ) /*0x469038*/
          break; /*0x469040*/
        v24 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 256, 512); /*0x469057*/
        v25 = RandomCoordScatter(v34, &v30, a2, v24, 0); /*0x469067*/
        ++v23; /*0x46906e*/
        v27 = *v25; /*0x46906f*/
        v26 = this->q0AC; /*0x469073*/
        v28 = v25[1]; /*0x46907c*/
        v29 = v25[2]; /*0x469083*/
      }
      while ( v23 < *(_DWORD *)(v26 + 684) ); /*0x46908f*/
    }
  }
  return a2; /*0x469091*/
}



// ==== 0x004690B0  Warhead::ApplyDamage  this=ObjectClass  sig=csp ====
int __thiscall Warhead::ApplyDamage(char *this, int *a2)
{
  double v2; // st7
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // edi
  int v11; // eax
  Concurrency::details::SchedulerBase *v12; // ebx
  RadSiteClass *NumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ; // eax
  RadSiteClass *v14; // eax
  RadSiteClass *v15; // edi
  _BYTE *v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // edi
  bool v20; // bl
  TeamClass *v21; // ecx
  int *v22; // edi
  int v23; // eax
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // eax
  int v28; // eax
  int v29; // ecx
  _DWORD *v30; // edi
  int v31; // eax
  int v32; // ecx
  int v33; // edi
  Team *v34; // eax
  _DWORD *Member; // ebx
  int v36; // edi
  int v37; // eax
  int *v38; // eax
  CellClass *v39; // eax
  TechnoClass *v40; // ecx
  int v41; // eax
  int v42; // ecx
  int v43; // edi
  int v44; // ecx
  int v45; // ecx
  int v47; ... [32997 chars total]



// ==== 0x0046A310  Warhead::ApplyPostDamageEffects  this=Warhead  sig=csp ====
int __thiscall Warhead::ApplyPostDamageEffects(Warhead *this)
{
  double v1; // st7
  int v3; // eax
  int v4; // esi
  int *v5; // ecx
  int v6; // ebx
  int v7; // ebp
  int v8; // edx
  _DWORD *v9; // eax
  int *v10; // eax
  int result; // eax
  int v12; // eax
  int v13; // edx
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int *v19; // ecx
  int v20; // edx
  bool v21; // cc
  _WORD *v22; // ebx
  __int16 v23; // ax
  _BYTE *v24; // ebp
  int v25; // eax
  char v26; // al
  int v27; // edx
  int v28; // ebx
  int v29; // eax
  int *v30; // ebx
  int v31; // ecx
  int v32; // edx
  __int16 v34; // ax
  int v41; // ecx
  int v42; // edx
  char v43; // al
  TechnoClass *v44; // ecx
  TechnoClass *v45; // ecx
  __int16 v46; // ax
  __int16 v47; // ax
  char v48; // dl
  int v49; // ecx
  int v50; // eax
  int v51; // ebx
  int v52; // ebp
  int *v53; // eax
  int *v54; // ebx
  int v55; // edx
  __int16 v57; // ax
  __int16 v58; // bp
  int v61; // ebp
  in... [26032 chars total]



// ==== 0x0046AE70  BulletClass::SaveLoad_Prefix  this=BulletClass  sig=csp ====
int __thiscall BulletClass::SaveLoad_Prefix(BulletClass *this, int *a2, int a3)
{
  int result; // eax
  int v4; // ebx
  int v5; // eax

  result = BuildingClass::SaveLoad_Register((ObjectClass *)this); /*0x46ae7c*/
  v4 = result; /*0x46ae81*/
  if ( result >= 0 ) /*0x46ae85*/
  {
    if ( a2 ) /*0x46ae8e*/
    {
      ObjectClass::Init((ObjectClass *)a2, (int)&a3); /*0x46ae97*/
      Timer::Start((Timer *)(a2 + 46), 0); /*0x46aea6*/
      Timer::Start((Timer *)(a2 + 49), 0); /*0x46aeb0*/
      *a2 = (int)&BulletClass::`vftable'; /*0x46aeb5*/
      a2[1] = (int)&BulletClass::`vftable'; /*0x46aebb*/
      a2[2] = (int)&BulletClass::`vftable'; /*0x46aec2*/
      a2[3] = (int)&BulletClass::`vftable'; /*0x46aec9*/
    }
    if ( a2[85] /*0x46af17*/
      && (g_BuildingLoadQueue_Array.?[1] < g_BuildingLoadQueue_Array.?
       || (BYTE1(g_BuildingLoadQueue_Array.?[0]) || !g_BuildingLoadQueue_Array.?)
       && g_BuildingLoadQueue_Array.?[2] > 0
       && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.?[0] + 8))(
            g_BuildingLoadQueue_Array.?,
            g_BuildingLoadQueue_Array.? + g_BuildingLoadQueue_Array.?[2],
            0)) )
    {
      v5 = g_BuildingLoadQueue_Array.?[1]++; /*0x46af24*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v5) = a2; /*0x46af33*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 43); /*0x46af42*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 44); /*0x46af53*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 74); /*0x46af64*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 67); /*0x46af75*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 76); /*0x46af86*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 85); /*0x46af91*/
    return v4; /*0x46af97*/
  }
  return result; /*0x46af99*/
}



// ==== 0x0046AFB0  BulletClass::SaveLoad_Prefix_0  this=BulletClass  sig=csp ====
int __stdcall BulletClass::SaveLoad_Prefix_0(BulletClass *this, int *a2, int a3)
{
  return AbstractClass::SaveLoad_Prefix((int *)this->__pad_0, a2, a3); /*0x46afc4*/
}



// ==== 0x0046AFD0  BulletClass::CheckTargetValidity  this=BulletClass  sig=csp ====
LONG __stdcall BulletClass::CheckTargetValidity(BulletClass *this)
{
  ++*(_DWORD *)&g_MissionQueueFrame.waypoints[274]; /*0x46afdf*/
  return InterlockedIncrement((volatile LONG *)this->__pad_1C); /*0x46afeb*/
}



// ==== 0x0046AFF0  BulletClass::ValidateTarget  this=BulletClass  sig=csp ====
LONG __stdcall BulletClass::ValidateTarget(BulletClass *this)
{
  LONG v1; // esi

  --*(_DWORD *)&g_MissionQueueFrame.waypoints[274]; /*0x46b000*/
  v1 = InterlockedDecrement((volatile LONG *)this->__pad_1C); /*0x46b00d*/
  if ( !v1 && this ) /*0x46b015*/
    (*(void (__thiscall **)(BulletClass *, int))(*(_DWORD *)this->__pad_0 + 32))(this, 1); /*0x46b01d*/
  return v1; /*0x46b022*/
}



// ==== 0x0046B050  CreateUIObjectCOM  this=AbstractClass  sig=csp ====
int __fastcall CreateUIObjectCOM(int a1, int a2, int a3, int a4, int a5, int a6, char a7)
{
  LPVOID v10; // esi
  LPVOID ppv; // [esp+8h] [ebp-4h] BYREF

  ppv = 0; /*0x46b06a*/
  if ( CoCreateInstance(&rclsid, 0, 7u, &IID_IUnknown, &ppv) < 0 ) /*0x46b07a*/
    return 0; /*0x46b07d*/
  v10 = ppv; /*0x46b0a4*/
  Particle::Init((int *)ppv, a1, a2, a3, a4, a5, a6, a7); /*0x46b0a6*/
  return (int)v10; /*0x46b07c*/
}



// ==== 0x0046B0C0  BulletClass::RenderVoxelBullet  this=BulletClass  sig=csp ====
char __thiscall BulletClass::RenderVoxelBullet(
        BulletClass *this,
        int a2,
        float *a3,
        _DWORD *a4,
        _DWORD *a5,
        unsigned int a6,
        int a7,
        int a8)
{
  _DWORD *v8; // esi
  _DWORD *v9; // ebx
  unsigned int i; // ebp
  float *v11; // eax
  float *v12; // esi
  int v13; // edx
  int v14; // ebx
  unsigned int v15; // edi
  int v16; // ecx
  int v17; // esi
  int *v18; // eax
  int *SHPFrame; // [esp-18h] [ebp-10Ch]
  int v21; // [esp-10h] [ebp-104h]
  Viewport *v22; // [esp+0h] [ebp-F4h]
  int v23[2]; // [esp+10h] [ebp-E4h] BYREF
  _DWORD *v24; // [esp+18h] [ebp-DCh]
  _DWORD v25[6]; // [esp+1Ch] [ebp-D8h] BYREF
  float v26[12]; // [esp+34h] [ebp-C0h] BYREF
  float v27[12]; // [esp+64h] [ebp-90h] BYREF
  float v28[12]; // [esp+94h] [ebp-60h] BYREF
  float v29[12]; // [esp+C4h] [ebp-30h] BYREF

  v8 = *(_DWORD **)a2; /*0x46b0d0*/
  v9 = *(_DWORD **)(a2 + 4); /*0x46b0d2*/
  v23[0] = (int)this; /*0x46b0dd*/
  v24 = v8; /*0x46b0ed*/
  globalHelper_053C80(v8, 0, 0, a3, (float *)&stru_887460.Buffer_field_10); /*0x46b0f1*/
  Viewport::Clear(v22); /*0x46b0f6*/
  for ( i = 0; i < v8[1]; ++i ) /*0x46b0fb*/
  {
    if ( v9 ) /*0x46b106*/
    {
      qmemcpy(v26, (const void *)(v9[3] + 48 * (i + v9[1] * (a6 % v9[2]))), sizeof(v26)); /*0x46b135*/
      qmemcpy(v27, MultiplyMatrix3x4(v28, a3, v26), sizeof(v27)); /*0x46b153*/
      v8 = v24; /*0x46b155*/
    }
    v11 = MultiplyMatrix3x4(v29, (float *)stru_887430.m_Data, v27); /*0x46b16a*/
    TransformVoxelVertex(v8, i, 0, v11); /*0x46b176*/
  }
  v12 = Voxel::RenderFrame(v26); /*0x46b18c*/
  v13 = *(_DWORD *)(v23[0] + 172); /*0x46b19b*/
  v14 = 0; /*0x46b1a1*/
  qmemcpy(v25, v12, sizeof(v25)); /*0x46b1a3*/
  v15 = a7 & 0xFFFFFFEF; /*0x46b1b2*/
  if ( *(_BYTE *)(v13 + 759) ) /*0x46b1ac*/
  {
    v14 = dword_81AF00; /*0x46b1b9*/
    v15 = a7 & 0xFFFFDFEF | 0x2000; /*0x46b1bf*/
  }
  v16 = v25[1] + a4[1]; /*0x46b1dd*/
  v23[0] = v25[0] + *a4; /*0x46b1df*/
  v23[1] = v16; /*0x46b1e8*/
  v17 = *(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)(v13 + 724); /*0x46b1fe*/
  v21 = *(_BYTE *)(v13 + 759) != 0 ? 0 : 2;
  SHPFrame = (int *)BuildingClass::GetSHPFrame(*(BuildingClass **)(*(_DWORD *)v17 + 780), v15); /*0x46b226*/
  v18 = Miles::DriverGet(); /*0x46b234*/
  return BlitterDrawSHP( /*0x46b24d*/
           (int *)g_DSurface_Hidden_2->__pad_0,
           *(_DWORD *)(*(_DWORD *)v17 + 780),
           v18,
           &v25[2],
           v23,
           a5,
           0,
           SHPFrame,
           v14,
           v21,
           a8,
           0,
           0);
}



// ==== 0x0046B260  Function::46B260  this=Function  sig=csp ====
int __thiscall Function::Method_46B260(Function *this, int a2)
{
  *((_DWORD *)this + 76) = a2; /*0x46b264*/
  return a2; /*0x46b26a*/
}



// ==== 0x0046B270  TechnoClass::updateHealthBar  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::updateHealthBar(TechnoClass *this)
{
  return (int)this->deployAnim; /*0x46b276*/
}



// ==== 0x0046B280  BulletClass::InitScalable  this=BulletClass  sig=csp ====
int __thiscall BulletClass::InitScalable(BulletClass *this)
{
  int v2; // eax
  int v3; // edx

  if ( dword_89DE28 < dword_89DE20 /*0x46b2b7*/
    || (byte_89DE25 || !dword_89DE20)
    && dword_89DE2C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_89DE18 + 8))(
         &dword_89DE18,
         dword_89DE20 + dword_89DE2C,
         0) )
  {
    v2 = dword_89DE28++; /*0x46b2c4*/
    *((_DWORD *)dword_89DE1C + v2) = this; /*0x46b2d3*/
  }
  v3 = dword_89DE28 - 5; /*0x46b2dc*/
  if ( dword_89DE28 - 5 < 0 ) /*0x46b2e1*/
    v3 = 0; /*0x46b2e3*/
  return BulletTypeClass::SetScaledSpawnDelay( /*0x46b307*/
           (BulletTypeClass *)this->BulletClass_field_0xAC,
           v3 / 3 + *((_DWORD *)this->BulletClass_field_0xAC + 185));
}



// ==== 0x0046B310  SuperWeapon::CreateNukePayload  this=SuperWeapon  sig=csp ====
int __thiscall SuperWeapon::CreateNukePayload(SuperWeapon *this)
{
  double v1; // st3
  double v2; // st4
  double v3; // st5
  double v4; // st6
  double v5; // st7
  int v7; // ebx
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int result; // eax
  _DWORD *v15; // edi
  int v16; // ecx
  _DWORD *v17; // eax
  int v18; // esi
  int v19; // eax
  LPVOID ppv; // [esp+10h] [ebp-60h] BYREF
  __int16 v21[2]; // [esp+14h] [ebp-5Ch] BYREF
  int v22; // [esp+18h] [ebp-58h]
  int v23; // [esp+1Ch] [ebp-54h]
  int v24[2]; // [esp+20h] [ebp-50h]
  int v25[2]; // [esp+28h] [ebp-48h]
  double v26; // [esp+30h] [ebp-40h]
  _DWORD v27[2]; // [esp+3Ch] [ebp-34h] BYREF
  int v28; // [esp+44h] [ebp-2Ch]
  double v29[2]; // [esp+48h] [ebp-28h] BYREF
  _QWORD v30[3]; // [esp+58h] [ebp-18h] BYREF

  v7 = this->q10C; /*0x46b323*/
  v8 = (_DWORD *)(*(int (__thiscall **)(int, double *))(*(_DWORD *)v7 + 72))(v7, v29); /*0x46b32e*/
  LOWORD(ppv) = *v8 / 256; /*0x46b341*/
  HIWORD(ppv) = v8[1] / 256; /*0x46b35a*/
  *(_DWORD *)v21 = ppv; /*0x46b367*/
  LODWORD(v26) = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v21); /*0x46b376*/
  ppv = 0; /*0x46b385*/
  v9 = (_DWORD *)*((_DWORD *)g_WeaponTypeConfig + SuperWeaponClass::FindByName((SuperWeaponClass *)&stru_81AF8C.?)); /*0x46b38d*/
  v10 = v9[40]; /*0x46b399*/
  v11 = v9[43]; /*0x46b39f*/
  v22 = v9[42]; /*0x46b3a5*/
  v25[0] = v10; /*0x46b3ad*/
  v12 = v9[41]; /*0x46b3b1*/
  v23 = v11; /*0x46b3bd*/
  v13 = this->q0B0; /*0x46b3c1*/
  v24[0] = v12; /*0x46b3d0*/
  v24[1] = v13; /*0x46b3d4*/
  result = CoCreateInstance(&rclsid, 0, 7u, &IID_IUnknown, &ppv); /*0x46b3d8*/
  if ( result >= 0 ) /*0x46b3e0*/
  {
    v15 = ppv; /*0x46b406*/
    result = Particle::Init((int *)ppv, v25[0], v7, v24[1], v24[0], v23, v22, 1); /*0x46b408*/
    if ( v15 ) /*0x46b40f*/
    {
      (*(void (__thiscall **)(_DWORD *))(*v15 + 212))(v15); /*0x46b419*/
      v16 = LODWORD(v26); /*0x46b41f*/
      v15[76] = v9; /*0x46b423*/
      v17 = (_DWORD *)(*(int (__thiscall **)(int, double *))(*(_DWORD *)v16 + 72))(v16, v29); /*0x46b430*/
      v18 = this->u32_130; /*0x46b435*/
      v27[0] = *v17; /*0x46b447*/
      v27[1] = v17[1]; /*0x46b44e*/
      v28 = v17[2]; /*0x46b455*/
      v28 += *(_DWORD *)(*(_DWORD *)(v18 + 160) + 700); /*0x46b46f*/
      Math::SinCos(1.570748388432313); /*0x46b473*/
      v26 = v1; /*0x46b478*/
      Math::ArcTan2(1.570748388432313); /*0x46b486*/
      v26 = v2 * v26 * -1.0; /*0x46b49f*/
      Math::ArcTan2(1.570748388432313); /*0x46b4a3*/
      *(double *)v25 = v3; /*0x46b4a8*/
      Math::ArcTan2(1.570748388432313); /*0x46b4b6*/
      v29[1] = v26; /*0x46b4c7*/
      *(double *)&v30[1] = v26; /*0x46b4e3*/
      v29[0] = v4 * *(double *)v25 * -1.0; /*0x46b4ea*/
      *(double *)v30 = v29[0]; /*0x46b4f6*/
      Math::SinCos(1.570748388432313); /*0x46b50f*/
      v19 = *v15; /*0x46b51a*/
      *(double *)&v30[2] = v5 * -1.0; /*0x46b529*/
      return (*(int (__thiscall **)(_DWORD *, _DWORD *, _QWORD *))(v19 + 496))(v15, v27, v30); /*0x46b52f*/
    }
  }
  return result; /*0x46b535*/
}



// ==== 0x0046B540  BulletClass::MissionStubReturnZero  this=BulletClass  sig=csp ====
int BulletClass::MissionStubReturnZero(BulletClass *this)
{
  return 352; /*0x46b545*/
}



// ==== 0x0046B550  BulletClass::MissionStubReturnZero2  this=BulletClass  sig=csp ====
int BulletClass::MissionStubReturnZero2(BulletClass *this)
{
  return 8; /*0x46b555*/
}



// ==== 0x0046B560  BulletClass::PowerDrainProcess  this=BulletClass  sig=csp ====
int __stdcall BulletClass::PowerDrainProcess(BulletClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x46b566*/
    return -2147467261; /*0x46b568*/
  *a2 = 237448649; /*0x46b576*/
  a2[1] = 298949647; /*0x46b57e*/
  a2[2] = -1610610249; /*0x46b587*/
  a2[3] = unk_7E96EC; /*0x46b590*/
  return 0; /*0x46b56d*/
}



// ==== 0x0046B5A0  BulletClass::CheckEndOfSequence  this=BulletClass  sig=csp ====
int __thiscall BulletClass::CheckEndOfSequence(BulletClass *this, int a2)
{
  this->BulletClass_field_0x10C = (void *)a2; /*0x46b5a4*/
  return a2; /*0x46b5aa*/
}



// ==== 0x0046B5B0  BulletClass::CheckMissionAbort  this=BulletClass  sig=csp ====
int __thiscall BulletClass::CheckMissionAbort(BulletClass *this)
{
  return (int)this->BulletClass_field_0xAC; /*0x46b5b6*/
}



// ==== 0x0046B5C0  BulletClass::CheckActionStatus  this=BulletClass  sig=csp ====
void *__thiscall BulletClass::CheckActionStatus(BulletClass *this, char a2)
{
  BulletClass::Dtor(this); /*0x46b5c3*/
  if ( (a2 & 1) != 0 ) /*0x46b5cd*/
    __3_YAXPAX_Z(this); /*0x46b5d0*/
  return this; /*0x46b5da*/
}



// ==== 0x0046B5E0  VectorClass_ptr_BulletClass::Destroy  this=VectorClass_ptr_BulletClass  sig=csp ====
void __thiscall VectorClass_ptr_BulletClass::Destroy(VectorClass_ptr_BulletClass *this)
{
  void *Items; // eax

  Items = this->Items; /*0x46b5e6*/
  this->Count = 0; /*0x46b5e9*/
  if ( Items && this->IsAllocated ) /*0x46b5f0*/
  {
    __3_YAXPAX_Z(Items); /*0x46b5f6*/
    this->Items = 0; /*0x46b5fe*/
  }
  this->IsAllocated = 0; /*0x46b601*/
  this->Capacity = 0; /*0x46b604*/
}



// ==== 0x0046B610  VectorClass_ptr_BulletClass::GetItemIndex  this=VectorClass_ptr_BulletClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_BulletClass::GetItemIndex(VectorClass_ptr_BulletClass *this, int a2)
{
  if ( this->IsInitialized ) /*0x46b610*/
    return (a2 - (unsigned int)this->Items) >> 2; /*0x46b625*/
  else
    return 0; /*0x46b617*/
}



// ==== 0x0046B630  _VectorClass_PAVBulletClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_BulletClass::Get(_VectorClass_PAVBulletClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x46b63a*/
}



// ==== 0x0046B640  Timer::Start  this=Timer  sig=csp ====
_DWORD *__thiscall Timer::Start(Timer *this, int a2)
{
  *(_DWORD *)this->__pad_0 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x46b64c*/
  *(_DWORD *)&this->__pad_6[2] = a2; /*0x46b64e*/
  return this->__pad_0; /*0x46b651*/
}



// ==== 0x0046B660  _VectorClass_PAVBulletClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_BulletClass::Add(_VectorClass_PAVBulletClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x46b662*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x46b66d*/
  {
    v3 = 0; /*0x46b66f*/
    if ( m_8 <= 0 ) /*0x46b673*/
      return 1; /*0x46b693*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x46b675*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x46b67b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x46b684*/
    {
      ++v3; /*0x46b686*/
      ++v4; /*0x46b687*/
      if ( v3 >= m_8 ) /*0x46b68c*/
        return 1; /*0x46b68c*/
    }
  }
  return 0; /*0x46b68e*/
}



// ==== 0x0046B6A0  _VectorClass_PAVBulletClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_BulletClass::Release(_VectorClass_PAVBulletClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x46b6ac*/
  {
    LOBYTE(this->m_C) = 0; /*0x46b6b6*/
    if ( a3 ) /*0x46b6bc*/
      v4 = a3; /*0x46b6d2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x46b6ce*/
    LOBYTE(this->m_C) = 1; /*0x46b6d6*/
    if ( v4 ) /*0x46b6da*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x46b6e5*/
      {
        m_8 = this->m_8; /*0x46b6ec*/
        if ( a2 < m_8 ) /*0x46b6f1*/
          m_8 = a2; /*0x46b6f3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x46b6f9*/
          ++i; /*0x46b6fe*/
        if ( BYTE1(this->m_C) ) /*0x46b70b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x46b716*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x46b71e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x46b727*/
      this->m_8 = a2; /*0x46b72f*/
      BYTE1(this->m_C) = a3 == 0; /*0x46b732*/
      return 1; /*0x46b738*/
    }
    else
    {
      return 0; /*0x46b6df*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVBulletClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x46b742*/
    return 1; /*0x46b748*/
  }
}



// ==== 0x0046B750  _VectorClass_PAVBulletClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_BulletClass::Remove(_VectorClass_PAVBulletClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x46b75d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x46b763*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x46b76b*/
  }
  BYTE1(this->m_C) = 0; /*0x46b76e*/
  this->m_8 = 0; /*0x46b771*/
}



// ==== 0x0046B780  _VectorClass_PAVBulletClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_BulletClass::GetSize(_VectorClass_PAVBulletClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x46b780*/
    return 0; /*0x46b788*/
  m_8 = this->m_8; /*0x46b78e*/
  result = 0; /*0x46b791*/
  if ( m_8 <= 0 ) /*0x46b795*/
    return -1; /*0x46b7ac*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x46b79b*/
  {
    if ( ++result >= m_8 ) /*0x46b7aa*/
      return -1; /*0x46b7aa*/
  }
  return result; /*0x46b78a*/
}



// ==== 0x0046B7C0  _VectorClass_PAVBulletClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_BulletClass::GetCapacity(_VectorClass_PAVBulletClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x46b7c0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x46b7d5*/
  else
    return 0; /*0x46b7c7*/
}



// ==== 0x0046B7E0  VectorClass_ptr_BulletClass::SetCapacity  this=VectorClass_ptr_BulletClass  sig=csp ====
char __thiscall VectorClass_ptr_BulletClass::SetCapacity(VectorClass_ptr_BulletClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  void *Capacity; // ecx
  int i; // eax
  void *v7; // eax

  if ( a2 ) /*0x46b7ec*/
  {
    this->IsInitialized = 0; /*0x46b7f2*/
    if ( a3 ) /*0x46b7f8*/
      v4 = a3; /*0x46b80e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x46b80a*/
    this->IsInitialized = 1; /*0x46b812*/
    if ( !v4 ) /*0x46b816*/
      return 0; /*0x46b88a*/
    if ( this->Items ) /*0x46b818*/
    {
      Capacity = this->Capacity; /*0x46b81f*/
      if ( a2 < (int)Capacity ) /*0x46b824*/
        Capacity = (void *)a2; /*0x46b826*/
      for ( i = 0; i < (int)Capacity; v4[i - 1] = *((_DWORD *)this->Items + i - 1) ) /*0x46b82c*/
        ++i; /*0x46b831*/
      if ( this->IsAllocated ) /*0x46b83e*/
      {
        __3_YAXPAX_Z(this->Items); /*0x46b849*/
        this->Items = 0; /*0x46b851*/
      }
    }
    this->Items = v4; /*0x46b85a*/
    this->Capacity = (void *)a2; /*0x46b862*/
    this->IsAllocated = a3 == 0; /*0x46b865*/
  }
  else
  {
    (*(void (__thiscall **)(VectorClass_ptr_BulletClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x46b86e*/
  }
  v7 = this->Capacity; /*0x46b871*/
  if ( (int)v7 < (int)this->Count ) /*0x46b879*/
    this->Count = v7; /*0x46b87b*/
  return 1; /*0x46b87e*/
}



// ==== 0x0046B890  VectorClass_ptr_BulletClass::FindItemIndex  this=VectorClass_ptr_BulletClass  sig=csp ====
int __thiscall VectorClass_ptr_BulletClass::FindItemIndex(VectorClass_ptr_BulletClass *this, _DWORD *a2)
{
  void *Count; // edx
  int result; // eax
  _DWORD *i; // ecx

  Count = this->Count; /*0x46b890*/
  result = 0; /*0x46b893*/
  if ( (int)Count <= 0 ) /*0x46b898*/
    return -1; /*0x46b8af*/
  for ( i = this->Items; *i != *a2; ++i ) /*0x46b89e*/
  {
    if ( ++result >= (int)Count ) /*0x46b8ad*/
      return -1; /*0x46b8ad*/
  }
  return result; /*0x46b8b2*/
}



// ==== 0x0046B8C0  _VectorClass_PAVBulletClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_BulletClass::QueryInterface(_VectorClass_PAVBulletClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x46b8c3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<BulletClass *>::`vftable'; /*0x46b8c6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x46b8d0*/
  {
    __3_YAXPAX_Z(v3); /*0x46b8d8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x46b8e0*/
  }
  BYTE1(this->m_C) = 0; /*0x46b8eb*/
  this->m_8 = 0; /*0x46b8f1*/
  if ( (a2 & 1) != 0 ) /*0x46b8f8*/
    __3_YAXPAX_Z(this); /*0x46b8fb*/
  return this->__pad_0; /*0x46b905*/
}



// ==== 0x0046B910  VectorClass_ptr_BulletClass::loc_46B910  this=VectorClass_ptr_BulletClass  sig=ida-proto ====
_DWORD *__thiscall VectorClass_ptr_BulletClass::loc_46B910(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x46b913*/
  *Block = &vt_VectorClass_BulletClass; /*0x46b916*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x46b920*/
  {
    __3_YAXPAX_Z(v3); /*0x46b928*/
    *(Block + 1) = 0; /*0x46b930*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x46b93b*/
  *(Block + 2) = 0; /*0x46b941*/
  if ( (a2 & 1) != 0 ) /*0x46b948*/
    __3_YAXPAX_Z(Block); /*0x46b94b*/
  return Block; /*0x46b955*/
}


// ==== 0x0046B960  BulletClass::AddVector3  this=BulletClass  sig=csp ====
double *__thiscall sub_46B960(double *this, double *a2)
{
  *this = *a2 + *this; /*0x46b96a*/
  this->vtable2 = a2[1] + this->vtable2; /*0x46b972*/
  this->vtable3 = a2[2] + this->vtable3; /*0x46b97b*/
  return this; /*0x46b97e*/
}



// ==== 0x0046B990  VectorClass_ptr_BulletClass::GetItem  this=VectorClass_ptr_BulletClass  sig=csp ====
LONG __stdcall VectorClass_ptr_BulletClass::sub_46B990(int a1)
{
  return BulletClass::CheckTargetValidity(a1 - 4);
}



// ==== 0x0046B9A0  VectorClass_ptr_BulletClass::GetItem_0  this=VectorClass_ptr_BulletClass  sig=csp ====
LONG __stdcall VectorClass_ptr_BulletClass::sub_46B9A0(int a1)
{
  return BulletClass::ValidateTarget((volatile LONG *)(a1 - 4));
}



// ==== 0x0046B9B0  sub_46B9B0  this=-  sig=ida-proto ====
int sub_46B9B0()
{
  dword_89DE80 = 0; /*0x46b9b2*/
  dword_89DE84 = 0; /*0x46b9b7*/
  dword_89DE88 = 0; /*0x46b9bc*/
  dword_89DE8C = 0; /*0x46b9c1*/
  return 0; /*0x46b9c6*/
}



// ==== 0x0046B9D0  sub_46B9D0  this=-  sig=ida-proto ====
void sub_46B9D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x46b9dc*/
  dbl_89DE98 = Math::Sqrt(v0 + v0); /*0x46b9ee*/
}



// ==== 0x0046BA00  sub_46BA00  this=-  sig=ida-proto ====
void sub_46BA00()
{
  dbl_89DEE8 = dbl_89DE98 / 60.0; /*0x46ba0c*/
}



// ==== 0x0046BA20  sub_46BA20  this=-  sig=ida-proto ====
void sub_46BA20()
{
  dbl_89DED0 = 1.0 / dbl_89DEE8; /*0x46ba2c*/
}



// ==== 0x0046BA40  sub_46BA40  this=-  sig=ida-proto ====
void sub_46BA40()
{
  dbl_89DEC8 = 0.0174532925199433 * 45.0; /*0x46ba4c*/
}



// ==== 0x0046BA60  sub_46BA60  this=-  sig=ida-proto ====
void sub_46BA60()
{
  dbl_89DEA0 = 0.0174532925199433 * 60.0; /*0x46ba6c*/
}



// ==== 0x0046BA80  sub_46BA80  this=-  sig=ida-proto ====
void sub_46BA80()
{
  dbl_89DE78 = 0.0174532925199433 * 90.0; /*0x46ba8c*/
}



// ==== 0x0046BAA0  sub_46BAA0  this=-  sig=ida-proto ====
__int64 sub_46BAA0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89DE78 - dbl_89DEA0); /*0x46bab2*/
  result = Math::RoundToInt(v0 * dbl_89DE98 * 0.5); /*0x46bac6*/
  dword_89DEF0 = result; /*0x46bacb*/
  return result; /*0x46bad0*/
}



// ==== 0x0046BAE0  sub_46BAE0  this=-  sig=ida-proto ====
void sub_46BAE0()
{
  dbl_89DEA8 = Math::ArcTan((double)dword_89DEF0 * 0.00390625); /*0x46baf7*/
}



// ==== 0x0046BB10  sub_46BB10  this=-  sig=ida-proto ====
void sub_46BB10()
{
  dbl_89DEC0 = Math::ArcTan((double)(2 * dword_89DEF0) / dbl_89DE98); /*0x46bb32*/
}



// ==== 0x0046BB40  sub_46BB40  this=-  sig=ida-proto ====
__int64 sub_46BB40()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89DEF0) + 0.5); /*0x46bb5b*/
  dword_89DEE4 = result; /*0x46bb60*/
  return result; /*0x46bb66*/
}



// ==== 0x0046BB70  sub_46BB70  this=-  sig=ida-proto ====
int sub_46BB70()
{
  word_89DE90 = 0; /*0x46bb72*/
  word_89DE92 = 0; /*0x46bb78*/
  return 0; /*0x46bb7e*/
}



// ==== 0x0046BB80  sub_46BB80  this=-  sig=ida-proto ====
int sub_46BB80()
{
  dword_89DEB0 = 0; /*0x46bb82*/
  dword_89DEB4 = 0; /*0x46bb87*/
  dword_89DEB8 = 0; /*0x46bb8c*/
  return 0; /*0x46bb91*/
}



// ==== 0x0046BBA0  sub_46BBA0  this=-  sig=ida-proto ====
int sub_46BBA0()
{
  dword_89DEE0 = 0; /*0x46bba5*/
  dword_89DED8 = 128; /*0x46bbaf*/
  dword_89DEDC = 128; /*0x46bbb4*/
  return 128; /*0x46bbb9*/
}



// ==== 0x0046BBC0  BulletTypeClass::Construct  this=BulletTypeClass  sig=csp ====
_BYTE *__thiscall BulletTypeClass::Construct(BulletTypeClass *this, char *Source)
{
  int v3; // eax
  int v4; // eax

  ObjectTypeClass::ConstructFull((int *)this, Source); /*0x46bbc9*/
  this->airburst = 0; /*0x46bbd5*/
  this->floater = 0; /*0x46bbdb*/
  this->subjectToCliffs = 0; /*0x46bbe1*/
  this->subjectToElevation = 0; /*0x46bbe7*/
  this->subjectToWalls = 0; /*0x46bbed*/
  this->veryHigh = 0; /*0x46bbf3*/
  this->shadow = 1; /*0x46bbf9*/
  this->arcing = 0; /*0x46bc00*/
  this->dropping = 0; /*0x46bc06*/
  this->level = 0; /*0x46bc0c*/
  this->inviso = 0; /*0x46bc12*/
  this->proximity = 0; /*0x46bc18*/
  this->ranged = 0; /*0x46bc1e*/
  this->noRotate = 1; /*0x46bc24*/
  this->inaccurate = 0; /*0x46bc2b*/
  this->flakScatter = 0; /*0x46bc31*/
  this->AA = 0; /*0x46bc37*/
  this->q2A5 = 1; /*0x46bc3d*/
  this->TurretVoxel = 3; /*0x46bc44*/
  this->q0B9 = 3; /*0x46bc4a*/
  this->degenerates = 0; /*0x46bc50*/
  this->bouncy = 0; /*0x46bc59*/
  this->animPalette = 0; /*0x46bc5f*/
  this->elasticity = 0; /*0x46bc65*/
  this->firersPalette = 0; /*0x46bc6c*/
  this->q0AB = 1; /*0x46bc72*/
  this->AlphaImage = 0; /*0x46bc7c*/
  this->shrapnelWeapon = 0; /*0x46bc82*/
  this->shrapnelCount = 0; /*0x46bc88*/
  this->detonationAltitude = 0; /*0x46bc8e*/
  this->vertical = 0; /*0x46bc94*/
  this->Acceleration = 1072168960; /*0x46bc9a*/
  this->Color = 0; /*0x46bca4*/
  this->trailer = 0; /*0x46bcaa*/
  this->rot = 0; /*0x46bcb0*/
  this->BarrelVoxel = 0; /*0x46bcb6*/
  this->scaledSpawnDelay = 0; /*0x46bcbc*/
  this->scalable = 0; /*0x46bcc2*/
  this->ChargerTurrets = 0; /*0x46bcc8*/
  this->animLow = 0; /*0x46bcce*/
  this->animHigh = 0; /*0x46bcd4*/
  this->animRate = 0; /*0x46bcda*/
  this->flat = 0; /*0x46bce0*/
  *(_DWORD *)this->ObjectTypeClass = &BulletTypeClass::`vftable'; /*0x46bce6*/
  *(_DWORD *)&this->ObjectTypeClass[4] = &BulletTypeClass::`vftable'; /*0x46bcec*/
  *(_DWORD *)&this->ObjectTypeClass[8] = &BulletTypeClass::`vftable'; /*0x46bcf2*/
  *(_DWORD *)&this->ObjectTypeClass[12] = &BulletTypeClass::`vftable'; /*0x46bcf9*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->ObjectTypeClass[4]); /*0x46bd00*/
  this->q234 = 1; /*0x46bd05*/
  this->q22F = 1; /*0x46bd0c*/
  this->q230 = 0; /*0x46bd13*/
  this->q231 = 0; /*0x46bd19*/
  this->q232 = 1; /*0x46bd1f*/
  this->q233 = 1; /*0x46bd26*/
  this->q235 = 0; /*0x46bd2d*/
  if ( dword_A83C90 < dword_A83C88 /*0x46bd65*/
    || (byte_A83C8D || !dword_A83C88)
    && dword_A83C94 > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A83C80 + 8))(
         &dword_A83C80,
         dword_A83C88 + dword_A83C94,
         0) )
  {
    v3 = dword_A83C90++; /*0x46bd72*/
    *((_DWORD *)dword_A83C84 + v3) = this; /*0x46bd81*/
  }
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x46bdb8*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v4 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x46bdc5*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4) = this; /*0x46bdd4*/
  }
  return this->ObjectTypeClass; /*0x46bdd9*/
}



// ==== 0x0046BEE0  BulletTypeClass::LoadFromINI  this=BulletTypeClass  sig=csp ====
char __userpurge BulletTypeClass::LoadFromINI@<al>(BulletTypeClass *this, double a2@<st0>, unsigned __int8 ***a3)
{
  int v3; // ecx
  int v4; // esi
  char Bool_Overwrite; // al
  char v7; // cl
  char v8; // al
  char v9; // al
  char v10; // cl
  char v11; // al
  char v12; // al
  char v13; // cl
  char v14; // al
  char v15; // al
  char v16; // cl
  char v17; // al
  char v18; // dl
  char v19; // al
  char v20; // cl
  char v21; // al
  _DWORD *v22; // eax
  char v23; // al
  int v24; // eax
  int v25; // eax
  int Int_Overwrite; // eax
  char v27; // cl
  char v28; // al
  char v29; // al
  int v30; // edx
  char v32; // [esp-Ch] [ebp-98h]
  char v33; // [esp-Ch] [ebp-98h]
  char v34; // [esp-Ch] [ebp-98h]
  int v35; // [esp-Ch] [ebp-98h]
  char v36; // [esp-Ch] [ebp-98h]
  int v37; // [esp-Ch] [ebp-98h]
  char v38; // [esp-Ch] [ebp-98h]
  _DWORD *v39; // [esp+8h] [ebp-84h]
  int v40; // [esp+8h] [ebp-84h]
  int v41; // [esp+8h] [ebp-84h]
  char Destination[128]; // [esp+Ch] [ebp-80h] BYREF

  v4 = v3; /*0x46beef*/
  INIClass::ResetSection((INIClass *)this); /*0x46bef3*/
  if ( !ObjectTypeClass::LoadFromINI((ObjectTypeClass *)v4, (unsigned __int8 ***)this) ) /*0x46befb*/
    return 0; /*0x46c42a*/
  *(_DWORD *)(v4 + 752) = INIClass::ReadInt_Overwrite( /*0x46bf21*/
                            this->ObjectTypeClass,
                            (unsigned __int8 *)(v4 + 36),
                            (unsigned __int8 *)&stru_81AF8C.?[143],
                            *(_DWORD *)(v4 + 752));
  *(_DWORD *)(v4 + 732) = INIClass::ReadInt_Overwrite( /*0x46bf3b*/
                            this->ObjectTypeClass,
                            (unsigned __int8 *)(v4 + 36),
                            (unsigned __int8 *)&stru_81AF8C.?[139],
                            *(_DWORD *)(v4 + 732));
  *(_DWORD *)(v4 + 736) = INIClass::ReadInt_Overwrite( /*0x46bf55*/
                            this->ObjectTypeClass,
                            (unsigned __int8 *)(v4 + 36),
                            (unsigned __int8 *)&stru_81AF8C.?[119],
                            *(_DWORD *)(v4 + 736));
  INIClass::ReadDouble_Overwrite( /*0x46bf71*/
    (double *)this->ObjectTypeClass,
    (unsigned __int8 *)(v4 + 36),
    g_INI_Key_Elasticity,
    *(double *)(v4 + 712));
  __asm { fstp qword ptr [esi+2C8h] } /*0x46bf76*/
  *(double *)(v4 + 712) = _RT1; /*0x46bf76*/
  *(_DWORD *)(v4 + 720) = INIClass::ReadInt_Overwrite( /*0x46bf90*/
                            this->ObjectTypeClass,
                            (unsigned __int8 *)(v4 + 36),
                            (unsigned __int8 *)&stru_81AF8C.?[103],
                            *(_DWORD *)(v4 + 720));
  *(_DWORD *)(v4 + 724) = BuildingTypeClass::FindAnimByName( /*0x46bfaa*/
                            (BuildingTypeClass *)this,
                            (unsigned __int8 *)(v4 + 36),
                            (unsigned __int8 *)&stru_81AF8C.?[95],
                            *(_DWORD *)(v4 + 724));
  *(_BYTE *)(v4 + 667) = INIClass::ReadBool_Overwrite( /*0x46bfc4*/
                           (int *)this,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&stru_81AF8C.?[87],
                           *(_BYTE *)(v4 + 667));
  *(_BYTE *)(v4 + 661) = INIClass::ReadBool_Overwrite( /*0x46bfde*/
                           (int *)this,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&stru_81AF8C.?[79],
                           *(_BYTE *)(v4 + 661));
  *(_BYTE *)(v4 + 662) = INIClass::ReadBool_Overwrite( /*0x46bff8*/
                           (int *)this,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&stru_81AF8C.?[63],
                           *(_BYTE *)(v4 + 662));
  *(_BYTE *)(v4 + 663) = INIClass::ReadBool_Overwrite( /*0x46c012*/
                           (int *)this,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&stru_81AF8C.?[43],
                           *(_BYTE *)(v4 + 663));
  *(_BYTE *)(v4 + 664) = INIClass::ReadBool_Overwrite( /*0x46c02c*/
                           (int *)this,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&stru_81AF8C.?[27],
                           *(_BYTE *)(v4 + 664));
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x46c041*/
                     (int *)this,
                     (unsigned __int8 *)(v4 + 36),
                     (unsigned __int8 *)&stru_81AF8C.?[15],
                     *(_BYTE *)(v4 + 665));
  v7 = *(_BYTE *)(v4 + 666); /*0x46c046*/
  *(_BYTE *)(v4 + 665) = Bool_Overwrite; /*0x46c04c*/
  v8 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aShadow, v7); /*0x46c05b*/
  v32 = *(_BYTE *)(v4 + 668); /*0x46c068*/
  *(_BYTE *)(v4 + 666) = v8; /*0x46c06f*/
  *(_BYTE *)(v4 + 668) = INIClass::ReadBool_Overwrite( /*0x46c07a*/
                           (int *)this,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&stru_81AF8C.?[3],
                           v32);
  v9 = INIClass::ReadBool_Overwrite( /*0x46c08f*/
         (int *)this,
         (unsigned __int8 *)(v4 + 36),
         (unsigned __int8 *)&stru_81AF8C.?[17],
         *(_BYTE *)(v4 + 669));
  v10 = *(_BYTE *)(v4 + 670); /*0x46c094*/
  *(_BYTE *)(v4 + 669) = v9; /*0x46c09a*/
  v11 = INIClass::ReadBool_Overwrite( /*0x46c0a9*/
          (int *)this,
          (unsigned __int8 *)(v4 + 36),
          (unsigned __int8 *)&stru_81AF8C.?[15],
          v10);
  v33 = *(_BYTE *)(v4 + 671); /*0x46c0b6*/
  *(_BYTE *)(v4 + 670) = v11; /*0x46c0bd*/
  *(_BYTE *)(v4 + 671) = INIClass::ReadBool_Overwrite( /*0x46c0c8*/
                           (int *)this,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&stru_81AF8C.?[12],
                           v33);
  v12 = INIClass::ReadBool_Overwrite( /*0x46c0dd*/
          (int *)this,
          (unsigned __int8 *)(v4 + 36),
          (unsigned __int8 *)&stru_81AF8C.?[10],
          *(_BYTE *)(v4 + 672));
  v13 = *(_BYTE *)(v4 + 674); /*0x46c0e2*/
  *(_BYTE *)(v4 + 672) = v12; /*0x46c0e8*/
  v14 = INIClass::ReadBool_Overwrite( /*0x46c0f7*/
          (int *)this,
          (unsigned __int8 *)(v4 + 36),
          (unsigned __int8 *)&stru_81AF8C.?[7],
          v13);
  v34 = *(_BYTE *)(v4 + 675); /*0x46c104*/
  *(_BYTE *)(v4 + 674) = v14; /*0x46c10b*/
  *(_BYTE *)(v4 + 675) = INIClass::ReadBool_Overwrite( /*0x46c116*/
                           (int *)this,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&stru_81AF8C.?[4],
                           v34);
  v15 = INIClass::ReadBool_Overwrite( /*0x46c12b*/
          (int *)this,
          (unsigned __int8 *)(v4 + 36),
          (unsigned __int8 *)&stru_81AF8C.?[3],
          *(_BYTE *)(v4 + 676));
  v16 = *(_BYTE *)(v4 + 677); /*0x46c130*/
  *(_BYTE *)(v4 + 676) = v15; /*0x46c136*/
  v17 = INIClass::ReadBool_Overwrite( /*0x46c145*/
          (int *)this,
          (unsigned __int8 *)(v4 + 36),
          (unsigned __int8 *)&stru_81AF8C.?[2],
          v16);
  v18 = *(_BYTE *)(v4 + 678); /*0x46c14a*/
  *(_BYTE *)(v4 + 677) = v17; /*0x46c150*/
  *(_BYTE *)(v4 + 678) = INIClass::ReadBool_Overwrite( /*0x46c164*/
                           (int *)this,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&stru_81AF8C.?[17],
                           v18);
  v19 = INIClass::ReadBool_Overwrite( /*0x46c179*/
          (int *)this,
          (unsigned __int8 *)(v4 + 36),
          (unsigned __int8 *)&stru_81AF8C.?[15],
          *(_BYTE *)(v4 + 679));
  v20 = *(_BYTE *)(v4 + 660); /*0x46c17e*/
  *(_BYTE *)(v4 + 679) = v19; /*0x46c184*/
  v21 = INIClass::ReadBool_Overwrite( /*0x46c193*/
          (int *)this,
          (unsigned __int8 *)(v4 + 36),
          (unsigned __int8 *)&stru_81AF8C.?[12],
          v20);
  v35 = *(_DWORD *)(v4 + 684); /*0x46c1a0*/
  *(_BYTE *)(v4 + 660) = v21; /*0x46c1a7*/
  *(_DWORD *)(v4 + 684) = INIClass::ReadInt_Overwrite( /*0x46c1b2*/
                            this->ObjectTypeClass,
                            (unsigned __int8 *)(v4 + 36),
                            (unsigned __int8 *)&stru_81AF8C.?[10],
                            v35);
  *(_BYTE *)(v4 + 748) = INIClass::ReadBool_Overwrite( /*0x46c1e2*/
                           (int *)this,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&stru_81AF8C.?[7],
                           *(_BYTE *)(v4 + 748));
  if ( INIClass::GetString( /*0x46c1ef*/
         (INIClass *)this,
         (unsigned __int8 *)(v4 + 36),
         (unsigned __int8 *)g_INI_Key_Image,
         &g_INI_DefaultBuffer,
         (char *)(v4 + 504),
         25) > 0 )
  {
    v39 = *(_DWORD **)(v4 + 728); /*0x46c20a*/
    if ( INIClass::GetString( /*0x46c219*/
           (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
           (unsigned __int8 *)(v4 + 504),
           aTrailer,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {
      v22 = AnimTypeClass::FindOrCreate(Destination); /*0x46c226*/
    }
    else
    {
      v22 = v39; /*0x46c22d*/
    }
    *(_DWORD *)(v4 + 728) = v22; /*0x46c231*/
    *(_DWORD *)(v4 + 740) = INIClass::ReadInt_Overwrite( /*0x46c24e*/
                              (bool *)&DSurface_ViewBounds.__pad_FC[228],
                              (unsigned __int8 *)(v4 + 504),
                              aSpawndelay,
                              *(_DWORD *)(v4 + 740));
    v23 = INIClass::ReadBool_Overwrite( /*0x46c26b*/
            (int *)&DSurface_ViewBounds.__pad_FC[228],
            (unsigned __int8 *)(v4 + 504),
            (unsigned __int8 *)&stru_81AF8C.?[5],
            *(_BYTE *)(v4 + 673) == 0);
    v36 = *(_BYTE *)(v4 + 759); /*0x46c27d*/
    *(_BYTE *)(v4 + 673) = v23 == 0; /*0x46c287*/
    *(_BYTE *)(v4 + 759) = INIClass::ReadBool_Overwrite( /*0x46c292*/
                             (int *)&DSurface_ViewBounds.__pad_FC[228],
                             (unsigned __int8 *)(v4 + 504),
                             g_INI_Key_Flat,
                             v36);
  }
  v40 = *(_DWORD *)(v4 + 688); /*0x46c2ad*/
  if ( INIClass::GetString( /*0x46c2b9*/
         (INIClass *)this,
         (unsigned __int8 *)(v4 + 36),
         (unsigned __int8 *)&stru_81AF8C.?[1],
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v24 = InfantryTypeClass::Find(Destination); /*0x46c2c6*/
  }
  else
  {
    v24 = v40; /*0x46c2cd*/
  }
  *(_DWORD *)(v4 + 688) = v24; /*0x46c2db*/
  v41 = *(_DWORD *)(v4 + 692); /*0x46c2f4*/
  if ( INIClass::GetString( /*0x46c2f8*/
         (INIClass *)this,
         (unsigned __int8 *)(v4 + 36),
         (unsigned __int8 *)stru_81AF8C.?,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v25 = InfantryTypeClass::Find(Destination); /*0x46c305*/
  }
  else
  {
    v25 = v41; /*0x46c30c*/
  }
  v37 = *(_DWORD *)(v4 + 696); /*0x46c318*/
  *(_DWORD *)(v4 + 692) = v25; /*0x46c31f*/
  *(_DWORD *)(v4 + 696) = INIClass::ReadInt_Overwrite( /*0x46c32a*/
                            this->ObjectTypeClass,
                            (unsigned __int8 *)(v4 + 36),
                            (unsigned __int8 *)&stru_81AF8C.?,
                            v37);
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x46c33f*/
                    this->ObjectTypeClass,
                    (unsigned __int8 *)(v4 + 36),
                    (unsigned __int8 *)&stru_81AF8C.?[40],
                    *(_DWORD *)(v4 + 700));
  v27 = *(_BYTE *)(v4 + 704); /*0x46c344*/
  *(_DWORD *)(v4 + 700) = Int_Overwrite; /*0x46c34a*/
  v28 = INIClass::ReadBool_Overwrite( /*0x46c359*/
          (int *)this,
          (unsigned __int8 *)(v4 + 36),
          (unsigned __int8 *)&stru_81AF8C.?[28],
          v27);
  v38 = *(_BYTE *)(v4 + 681); /*0x46c366*/
  *(_BYTE *)(v4 + 704) = v28; /*0x46c36d*/
  *(_BYTE *)(v4 + 681) = INIClass::ReadBool_Overwrite( /*0x46c378*/
                           (int *)this,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&stru_81AF8C.?[12],
                           v38);
  *(_BYTE *)(v4 + 756) = INIClass::ReadInt_Overwrite( /*0x46c399*/
                           (bool *)&DSurface_ViewBounds.__pad_FC[228],
                           (unsigned __int8 *)(v4 + 504),
                           (unsigned __int8 *)&stru_81AF8C.?[4],
                           *(unsigned __int8 *)(v4 + 756));
  v29 = INIClass::ReadInt_Overwrite( /*0x46c3b1*/
          (bool *)&DSurface_ViewBounds.__pad_FC[228],
          (unsigned __int8 *)(v4 + 504),
          (unsigned __int8 *)&stru_81AF8C.?[31],
          *(unsigned __int8 *)(v4 + 757));
  v30 = *(unsigned __int8 *)(v4 + 758); /*0x46c3bd*/
  *(_BYTE *)(v4 + 757) = v29; /*0x46c3c3*/
  *(_BYTE *)(v4 + 758) = INIClass::ReadInt_Overwrite( /*0x46c3d5*/
                           (bool *)&DSurface_ViewBounds.__pad_FC[228],
                           (unsigned __int8 *)(v4 + 504),
                           (unsigned __int8 *)&stru_81AF8C.?[19],
                           v30);
  *(_BYTE *)(v4 + 680) = INIClass::ReadBool_Overwrite( /*0x46c3f2*/
                           (int *)&DSurface_ViewBounds.__pad_FC[228],
                           (unsigned __int8 *)(v4 + 504),
                           (unsigned __int8 *)&stru_81AF8C.?[7],
                           *(_BYTE *)(v4 + 680));
  if ( !*(_BYTE *)(v4 + 670) ) /*0x46c3f8*/
    ObjectTypeClass::Load2DArt((char *)v4); /*0x46c406*/
  if ( *(_BYTE *)(v4 + 566) ) /*0x46c40b*/
    VoxelAnimType::LoadAnim((char *)v4); /*0x46c417*/
  return 1; /*0x46c41c*/
}



// ==== 0x0046C4F0  BulletTypeClass::GetROF  this=BulletTypeClass  sig=csp ====
_DWORD *__stdcall BulletTypeClass::GetROF(BulletTypeClass *this, int *a2)
{
  int GroundHeight; // eax
  int v3; // ecx
  int v5; // [esp+0h] [ebp-Ch] BYREF
  int v6; // [esp+4h] [ebp-8h]
  int v7; // [esp+8h] [ebp-4h]

  v5 = *a2; /*0x46c4f9*/
  v6 = a2[1]; /*0x46c50a*/
  v7 = a2[2]; /*0x46c511*/
  GroundHeight = Cell::GetGroundHeight(&v5); /*0x46c515*/
  v3 = v7; /*0x46c51a*/
  if ( v7 <= GroundHeight ) /*0x46c520*/
    v3 = Cell::GetGroundHeight(&v5) + 1; /*0x46c533*/
  *(_DWORD *)this->ObjectTypeClass = v5; /*0x46c53f*/
  *(_DWORD *)&this->ObjectTypeClass[4] = v6; /*0x46c545*/
  *(_DWORD *)&this->ObjectTypeClass[8] = v3; /*0x46c549*/
  return this->ObjectTypeClass; /*0x46c54c*/
}



// ==== 0x0046C560  BulletTypeClass::ProcessPower  this=BulletTypeClass  sig=csp ====
int __thiscall BulletTypeClass::ProcessPower(BulletTypeClass *this, int *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // edx

  v3 = AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x46c569*/
  LOBYTE(v3) = this->airburst; /*0x46c56e*/
  Power::FlagProcess((Power *)a2, v3); /*0x46c577*/
  LOBYTE(v4) = this->shadow; /*0x46c57c*/
  Power::FlagProcess((Power *)a2, v4); /*0x46c585*/
  LOBYTE(v5) = this->arcing; /*0x46c58a*/
  v6 = Power::FlagProcess((Power *)a2, v5); /*0x46c593*/
  LOBYTE(v6) = this->dropping; /*0x46c598*/
  Power::FlagProcess((Power *)a2, v6); /*0x46c5a1*/
  LOBYTE(v7) = this->level; /*0x46c5a6*/
  Power::FlagProcess((Power *)a2, v7); /*0x46c5af*/
  LOBYTE(v8) = this->inviso; /*0x46c5b4*/
  v9 = Power::FlagProcess((Power *)a2, v8); /*0x46c5bd*/
  LOBYTE(v9) = this->proximity; /*0x46c5c2*/
  Power::FlagProcess((Power *)a2, v9); /*0x46c5cb*/
  LOBYTE(v10) = this->ranged; /*0x46c5d0*/
  Power::FlagProcess((Power *)a2, v10); /*0x46c5d9*/
  LOBYTE(v11) = this->noRotate; /*0x46c5de*/
  v12 = Power::FlagProcess((Power *)a2, v11); /*0x46c5e7*/
  LOBYTE(v12) = this->inaccurate; /*0x46c5ec*/
  Power::FlagProcess((Power *)a2, v12); /*0x46c5f5*/
  LOBYTE(v13) = this->flakScatter; /*0x46c5fa*/
  Power::FlagProcess((Power *)a2, v13); /*0x46c603*/
  LOBYTE(v14) = this->AA; /*0x46c608*/
  v15 = Power::FlagProcess((Power *)a2, v14); /*0x46c611*/
  LOBYTE(v15) = this->q2A5; /*0x46c616*/
  Power::FlagProcess((Power *)a2, v15); /*0x46c61f*/
  LOBYTE(v16) = this->degenerates; /*0x46c624*/
  Power::FlagProcess((Power *)a2, v16); /*0x46c62d*/
  LOBYTE(v17) = this->bouncy; /*0x46c632*/
  Power::FlagProcess((Power *)a2, v17); /*0x46c63b*/
  Checksummer::Add_double((Checksummer *)a2, this->elasticity, this->Acceleration); /*0x46c650*/
  Power::TimerProcess(this->TurretVoxel); /*0x46c65e*/
  Power::TimerProcess(this->rot); /*0x46c66c*/
  Power::TimerProcess(this->ChargerTurrets); /*0x46c67a*/
  LOBYTE(v18) = this->flat; /*0x46c67f*/
  return Power::FlagProcess((Power *)a2, v18); /*0x46c68d*/
}



// ==== 0x0046C6A0  BulletTypeClass::SaveLoad_Prefix  this=BulletTypeClass  sig=csp ====
int __stdcall BulletTypeClass::SaveLoad_Prefix(BulletTypeClass *this, int a2)
{
  int result; // eax

  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)this, a2); /*0x46c6ab*/
  if ( result >= 0 ) /*0x46c6b2*/
  {
    if ( this ) /*0x46c6b6*/
    {
      ObjectTypeClass::Construct((ObjectTypeClass *)this, (int)&a2); /*0x46c6bf*/
      *(_DWORD *)this->ObjectTypeClass = &BulletTypeClass::`vftable'; /*0x46c6c4*/
      *(_DWORD *)&this->ObjectTypeClass[4] = &BulletTypeClass::`vftable'; /*0x46c6ca*/
      *(_DWORD *)&this->ObjectTypeClass[8] = &BulletTypeClass::`vftable'; /*0x46c6d1*/
      *(_DWORD *)&this->ObjectTypeClass[12] = &BulletTypeClass::`vftable'; /*0x46c6d8*/
    }
    VoxelAnimType::LoadAnim(this->ObjectTypeClass); /*0x46c6e1*/
    ObjectTypeClass::Load2DArt(this->ObjectTypeClass); /*0x46c6e8*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 182); /*0x46c6f9*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 172); /*0x46c70a*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 173); /*0x46c71b*/
    return 0; /*0x46c720*/
  }
  return result; /*0x46c722*/
}



// ==== 0x0046C730  BulletTypeClass::SaveLoad_Prefix_0  this=BulletTypeClass  sig=csp ====
int __stdcall BulletTypeClass::SaveLoad_Prefix_0(BulletTypeClass *this, int a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper((AbstractClass *)this, a2, a3); /*0x46c73f*/
  if ( result >= 0 ) /*0x46c746*/
    return 0; /*0x46c748*/
  return result; /*0x46c74a*/
}



// ==== 0x0046C750  BulletTypeClass::GetClassIdentifier  this=BulletTypeClass  sig=csp ====
int __stdcall BulletTypeClass::GetClassIdentifier(BulletTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x46c756*/
    return -2147467261; /*0x46c758*/
  *a2 = 1525862007; /*0x46c766*/
  a2[1] = 298976820; /*0x46c76e*/
  a2[2] = 1610654892; /*0x46c777*/
  a2[3] = unk_7E95DC; /*0x46c780*/
  return 0; /*0x46c75d*/
}



// ==== 0x0046C790  ObjectTypeClass::FindOrCreate  this=AbstractTypeClass  sig=csp ====
_BYTE *__thiscall ObjectTypeClass::FindOrCreate(char *Source)
{
  int v2; // esi
  BulletTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x46c7ac*/
    return 0; /*0x46c80f*/
  v2 = 0; /*0x46c7bd*/
  if ( dword_A83C90 <= 0 ) /*0x46c7c1*/
  {
LABEL_6:
    v3 = (BulletTypeClass *)__2_YAPAXI_Z(0x2F8u); /*0x46c7e6*/
    if ( v3 ) /*0x46c7f5*/
      return BulletTypeClass::Construct(v3, Source); /*0x46c801*/
    return 0; /*0x46c7f5*/
  }
  while ( _strcmpi((char *)(*((_DWORD *)dword_A83C84 + v2) + 36), Source) ) /*0x46c7da*/
  {
    if ( ++v2 >= dword_A83C90 ) /*0x46c7e4*/
      goto LABEL_6; /*0x46c7e4*/
  }
  return (_BYTE *)*((_DWORD *)dword_A83C84 + v2); /*0x46c7ff*/
}



// ==== 0x0046C820  BulletTypeClass::GetWarhead  this=BulletTypeClass  sig=csp ====
int __thiscall BulletTypeClass::GetWarhead(BulletTypeClass *this, int a2, int a3)
{
  int result; // eax

  result = a2; /*0x46c820*/
  if ( a2 == this->trailer ) /*0x46c82c*/
    this->trailer = 0; /*0x46c82e*/
  return result; /*0x46c838*/
}



// ==== 0x0046C840  BulletTypeClass::SetScaledSpawnDelay  this=BulletTypeClass  sig=csp ====
int __thiscall BulletTypeClass::SetScaledSpawnDelay(BulletTypeClass *this, int a2)
{
  this->scaledSpawnDelay = a2; /*0x46c844*/
  return a2; /*0x46c84a*/
}



// ==== 0x0046C850  BulletTypeClass::GetTypeIdentifier  this=BulletTypeClass  sig=csp ====
int BulletTypeClass::GetTypeIdentifier(BulletTypeClass *this)
{
  return 9; /*0x46c855*/
}



// ==== 0x0046C860  BulletTypeClass::GetObjectSize  this=BulletTypeClass  sig=csp ====
int BulletTypeClass::GetObjectSize(BulletTypeClass *this)
{
  return 760; /*0x46c865*/
}



// ==== 0x0046C870  BulletTypeClass::Stub  this=BulletTypeClass  sig=csp ====
char __stdcall BulletTypeClass::Stub(BulletTypeClass *this, int a2)
{
  return 0; /*0x46c872*/
}



// ==== 0x0046C880  BulletTypeClass::StubReturnFalse  this=BulletTypeClass  sig=csp ====
int __stdcall BulletTypeClass::StubReturnFalse(BulletTypeClass *this)
{
  return 0; /*0x46c882*/
}



// ==== 0x0046C890  BulletTypeClass::ddtor  this=BulletTypeClass  sig=csp ====
void **__thiscall BulletTypeClass::ddtor(BulletTypeClass *this, char a2)
{
  int v3; // eax
  int v4; // eax
  BulletTypeClass *v6; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this->ObjectTypeClass = &BulletTypeClass::`vftable'; /*0x46c896*/
  *(_DWORD *)&this->ObjectTypeClass[4] = &BulletTypeClass::`vftable'; /*0x46c89c*/
  *(_DWORD *)&this->ObjectTypeClass[8] = &BulletTypeClass::`vftable'; /*0x46c8a3*/
  *(_DWORD *)&this->ObjectTypeClass[12] = &BulletTypeClass::`vftable'; /*0x46c8aa*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x46c8b1*/
  v6 = this; /*0x46c8c6*/
  v3 = (*(int (__thiscall **)(int *, BulletTypeClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x46c8ca*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v6);
  if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x46c8da*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x46c8df*/
    for ( ; /*0x46c8e5*/
          v3 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v3 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v3) )
    {
      ++v3; /*0x46c8ed*/
    }
  }
  v6 = this; /*0x46c90f*/
  v4 = (*(int (__thiscall **)(_DWORD *, BulletTypeClass **))(dword_A83C80 + 16))(&dword_A83C80, &v6); /*0x46c913*/
  if ( v4 != -1 && v4 < dword_A83C90 && v4 < --dword_A83C90 ) /*0x46c92e*/
  {
    do /*0x46c946*/
    {
      ++v4; /*0x46c936*/
      *((_DWORD *)dword_A83C84 + v4 - 1) = *((_DWORD *)dword_A83C84 + v4); /*0x46c93a*/
    }
    while ( v4 < dword_A83C90 ); /*0x46c946*/
  }
  ObjectTypeClass::Destruct((int)this); /*0x46c94a*/
  if ( (a2 & 1) != 0 ) /*0x46c954*/
    __3_YAXPAX_Z(this); /*0x46c957*/
  return (void **)this; /*0x46c961*/
}



// ==== 0x0046C970  sub_46C970  this=-  sig=ida-proto ====
void sub_46C970()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x46c97c*/
  dbl_89DF08 = Math::Sqrt(v0 + v0); /*0x46c98e*/
}



// ==== 0x0046C9A0  sub_46C9A0  this=-  sig=ida-proto ====
void sub_46C9A0()
{
  dbl_89DF58 = dbl_89DF08 / 60.0; /*0x46c9ac*/
}



// ==== 0x0046C9C0  sub_46C9C0  this=-  sig=ida-proto ====
void sub_46C9C0()
{
  dbl_89DF40 = 1.0 / dbl_89DF58; /*0x46c9cc*/
}



// ==== 0x0046C9E0  sub_46C9E0  this=-  sig=ida-proto ====
void sub_46C9E0()
{
  dbl_89DF38 = 0.0174532925199433 * 45.0; /*0x46c9ec*/
}



// ==== 0x0046CA00  sub_46CA00  this=-  sig=ida-proto ====
void sub_46CA00()
{
  dbl_89DF10 = 0.0174532925199433 * 60.0; /*0x46ca0c*/
}



// ==== 0x0046CA20  sub_46CA20  this=-  sig=ida-proto ====
void sub_46CA20()
{
  dbl_89DEF8 = 0.0174532925199433 * 90.0; /*0x46ca2c*/
}



// ==== 0x0046CA40  sub_46CA40  this=-  sig=ida-proto ====
__int64 sub_46CA40()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89DEF8 - dbl_89DF10); /*0x46ca52*/
  result = Math::RoundToInt(v0 * dbl_89DF08 * 0.5); /*0x46ca66*/
  dword_89DF60 = result; /*0x46ca6b*/
  return result; /*0x46ca70*/
}



// ==== 0x0046CA80  sub_46CA80  this=-  sig=ida-proto ====
void sub_46CA80()
{
  dbl_89DF18 = Math::ArcTan((double)dword_89DF60 * 0.00390625); /*0x46ca97*/
}



// ==== 0x0046CAB0  sub_46CAB0  this=-  sig=ida-proto ====
void sub_46CAB0()
{
  dbl_89DF30 = Math::ArcTan((double)(2 * dword_89DF60) / dbl_89DF08); /*0x46cad2*/
}



// ==== 0x0046CAE0  sub_46CAE0  this=-  sig=ida-proto ====
__int64 sub_46CAE0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89DF60) + 0.5); /*0x46cafb*/
  dword_89DF54 = result; /*0x46cb00*/
  return result; /*0x46cb06*/
}



// ==== 0x0046CB10  sub_46CB10  this=-  sig=ida-proto ====
int sub_46CB10()
{
  word_89DF00 = 0; /*0x46cb12*/
  word_89DF02 = 0; /*0x46cb18*/
  return 0; /*0x46cb1e*/
}



// ==== 0x0046CB20  sub_46CB20  this=-  sig=ida-proto ====
int sub_46CB20()
{
  dword_89DF20 = 0; /*0x46cb22*/
  dword_89DF24 = 0; /*0x46cb27*/
  dword_89DF28 = 0; /*0x46cb2c*/
  return 0; /*0x46cb31*/
}



// ==== 0x0046CB40  sub_46CB40  this=-  sig=ida-proto ====
int sub_46CB40()
{
  dword_89DF50 = 0; /*0x46cb45*/
  dword_89DF48 = 128; /*0x46cb4f*/
  dword_89DF4C = 128; /*0x46cb54*/
  return 128; /*0x46cb59*/
}



// ==== 0x0046CB60  CampaignClass::CampaignClass  this=CampaignClass  sig=csp ====
int __thiscall CampaignClass::CampaignClass(CampaignClass *this, char *Source)
{
  int v3; // eax

  AbstractTypeClass::Constructor((int *)this, Source); /*0x46cb68*/
  this->AbstractClass = &CampaignClass::`vftable'; /*0x46cb70*/
  this->scenario[28] = -1; /*0x46cb76*/
  this->description[28] = -1; /*0x46cb7c*/
  this->? = &CampaignClass::`vftable'; /*0x46cb82*/
  this->? = &CampaignClass::`vftable'; /*0x46cb89*/
  this->? = &CampaignClass::`vftable'; /*0x46cb90*/
  if ( dword_A83D08 < dword_A83D00 /*0x46cbcc*/
    || (byte_A83D05 || !dword_A83D00)
    && dword_A83D0C > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A83CF8 + 8))(
         &dword_A83CF8,
         dword_A83D00 + dword_A83D0C,
         0) )
  {
    v3 = dword_A83D08++; /*0x46cbd9*/
    *((_DWORD *)dword_A83CFC + v3) = this; /*0x46cbe8*/
  }
  LOBYTE(this->scenario[29]) = 0; /*0x46cbf7*/
  wcscpy((wchar_t *)&this->description[29], &g_TypeClass_DefaultString); /*0x46cbfe*/
  return (int)this; /*0x46cc08*/
}



// ==== 0x0046CC90  CampaignSelect::LookupByName  this=CampaignSelect  sig=csp ====
int __thiscall CampaignSelect::LookupByName(CampaignSelect *this)
{
  int v1; // esi

  v1 = 0; /*0x46cc96*/
  if ( dword_A83D08 <= 0 ) /*0x46cc9d*/
    return -1; /*0x46ccc2*/
  while ( _strcmpi((char *)(*((_DWORD *)dword_A83CFC + v1) + 36), this->__pad_0) ) /*0x46ccb6*/
  {
    if ( ++v1 >= dword_A83D08 ) /*0x46ccc0*/
      return -1; /*0x46ccc0*/
  }
  return v1; /*0x46ccc2*/
}



// ==== 0x0046CCD0  CampaignClass::GetMapData  this=CampaignClass  sig=csp ====
char __thiscall CampaignClass::GetMapData(CampaignClass *this, unsigned __int8 ***a2)
{
  int Int_Overwrite; // eax
  int v4; // ecx
  char Destination[1024]; // [esp+8h] [ebp-400h] BYREF

  INIClass::ResetSection((INIClass *)a2); /*0x46cce3*/
  if ( !(unsigned __int8)AbstractTypeClass::LoadFromINI((AbstractTypeClass *)this, a2) ) /*0x46cceb*/
    return 0; /*0x46cdf7*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x46cd0c*/
                    (bool *)a2,
                    (unsigned __int8 *)&this->idxCd,
                    (unsigned __int8 *)&stru_81AF8C.?[1],
                    this->scenario[28]);
  v4 = this->description[28]; /*0x46cd11*/
  this->scenario[28] = Int_Overwrite; /*0x46cd17*/
  this->description[28] = INIClass::GetBool( /*0x46cd40*/
                            (INIClass *)a2,
                            (unsigned __int8 *)&this->idxCd,
                            (unsigned __int8 *)&stru_81AF8C.?[1],
                            v4);
  INIClass::GetString( /*0x46cd46*/
    (INIClass *)a2,
    (unsigned __int8 *)&this->idxCd,
    (unsigned __int8 *)&stru_81AF8C.?,
    (char *)&this->scenario[29],
    (char *)&this->scenario[29],
    512);
  _strupr((char *)&this->scenario[29]); /*0x46cd4c*/
  if ( (unsigned __int8)INIClass::ReadBool_Overwrite( /*0x46cd5e*/
                          (int *)a2,
                          (unsigned __int8 *)&this->idxCd,
                          (unsigned __int8 *)&stru_81AF8C.?[17],
                          0) )
  {
    INIClass::GetString( /*0x46cda3*/
      (INIClass *)a2,
      (unsigned __int8 *)&this->idxCd,
      (unsigned __int8 *)&stru_81AF8C.?[5],
      0,
      Destination,
      1024);
    strcat(Destination, &stru_81AF8C.?[8]); /*0x46cdcf*/
    BulkCharToWide(&this->description[29], (unsigned __int8 *)Destination, -1); /*0x46cde2*/
  }
  else
  {
    INIClass::GetStringEx( /*0x46cd7b*/
      (int)a2,
      (unsigned __int8 *)&this->idxCd,
      (unsigned __int8 *)&stru_81AF8C.?[5],
      (wchar_t *)&this->description[29],
      0x80u);
  }
  return 1; /*0x46cd82*/
}



// ==== 0x0046CE10  CampaignClass::LoadFromINIList  this=CCINIClass  sig=csp ====
int __thiscall CampaignClass::LoadFromINIList(INIClass *this)
{
  int result; // eax
  int v3; // ebp
  unsigned __int8 *StringByIndex; // eax
  int v5; // esi
  int v6; // esi
  int v7; // eax
  int i; // [esp+8h] [ebp-24h]
  char Source[32]; // [esp+Ch] [ebp-20h] BYREF

  result = INIClass::GetKeyCount(this->__pad_0, (unsigned __int8 *)&stru_81AF8C.?[2]); /*0x46ce1c*/
  v3 = 0; /*0x46ce21*/
  for ( i = result; v3 < i; ++v3 ) /*0x46ce29*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex( /*0x46ce48*/
                                         this->__pad_0,
                                         (unsigned __int8 *)&stru_81AF8C.?[2],
                                         v3);
    INIClass::GetString(this, (unsigned __int8 *)&stru_81AF8C.?[2], StringByIndex, &g_INI_DefaultBuffer, Source, 32); /*0x46ce55*/
    v5 = 0; /*0x46ce5f*/
    if ( dword_A83D08 <= 0 ) /*0x46ce63*/
      goto LABEL_7; /*0x46ce63*/
    while ( _strcmpi((char *)(*((_DWORD *)dword_A83CFC + v5) + 36), Source) ) /*0x46ce81*/
    {
      if ( ++v5 >= dword_A83D08 ) /*0x46ce8b*/
        goto LABEL_7; /*0x46ce8b*/
    }
    if ( v5 == -1 ) /*0x46ce91*/
    {
LABEL_7:
      v6 = __2_YAPAXI_Z(0x3A0u); /*0x46ce97*/
      if ( v6 ) /*0x46cea8*/
      {
        AbstractTypeClass::Constructor((int *)v6, Source); /*0x46ceb5*/
        *(_DWORD *)(v6 + 152) = -1; /*0x46ceba*/
        *(_DWORD *)(v6 + 668) = -1; /*0x46cec0*/
        *(_DWORD *)v6 = &CampaignClass::`vftable'; /*0x46cec6*/
        *(_DWORD *)(v6 + 4) = &CampaignClass::`vftable'; /*0x46cecc*/
        *(_DWORD *)(v6 + 8) = &CampaignClass::`vftable'; /*0x46ced3*/
        *(_DWORD *)(v6 + 12) = &CampaignClass::`vftable'; /*0x46ceda*/
        if ( dword_A83D08 < dword_A83D00 /*0x46cf18*/
          || (byte_A83D05 || !dword_A83D00)
          && dword_A83D0C > 0
          && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A83CF8 + 8))(
               &dword_A83CF8,
               dword_A83D00 + dword_A83D0C,
               0) )
        {
          v7 = dword_A83D08++; /*0x46cf25*/
          *((_DWORD *)dword_A83CFC + v7) = v6; /*0x46cf34*/
        }
        *(_BYTE *)(v6 + 156) = 0; /*0x46cf43*/
        wcscpy((wchar_t *)(v6 + 672), &g_TypeClass_DefaultString); /*0x46cf4a*/
      }
      else
      {
        v6 = 0; /*0x46cf54*/
      }
    }
    else
    {
      v6 = *((_DWORD *)dword_A83CFC + v5); /*0x46cf5d*/
    }
    result = (*(int (__thiscall **)(int, INIClass *))(*(_DWORD *)v6 + 100))(v6, this); /*0x46cf65*/
  }
  return result; /*0x46cf75*/
}



// ==== 0x0046CF80  CampaignClass::ddtor  this=CampaignClass  sig=csp ====
int __stdcall CampaignClass::ddtor(CampaignClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x46cf86*/
    return -2147467261; /*0x46cf88*/
  *a2 = -2439096; /*0x46cf96*/
  a2[1] = 298980631; /*0x46cf9e*/
  a2[2] = 1610642817; /*0x46cfa7*/
  a2[3] = unk_7E990C; /*0x46cfb0*/
  return 0; /*0x46cf8d*/
}



// ==== 0x0046CFC0  CampaignClass::Stat  this=CampaignClass  sig=csp ====
int __thiscall CampaignClass::Stat(CampaignClass *this, int *a2)
{
  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x46cfc9*/
  Power::TimerProcess(this->scenario[28]); /*0x46cfd7*/
  Checksum::AddString((Checksum *)a2, (unsigned __int8 *)&this->scenario[29]); /*0x46cfe5*/
  return Power::TimerProcess(this->description[28]); /*0x46cff8*/
}



// ==== 0x0046D000  CampaignClass::Write  this=CampaignClass  sig=csp ====
int __stdcall CampaignClass::Write(CampaignClass *this, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x46d00b*/
  if ( result >= 0 ) /*0x46d012*/
  {
    if ( this ) /*0x46d016*/
    {
      AbstractTypeClass::Init((int)this, (int)&a2); /*0x46d01f*/
      this->AbstractClass = &CampaignClass::`vftable'; /*0x46d024*/
      this->? = &CampaignClass::`vftable'; /*0x46d02a*/
      this->? = &CampaignClass::`vftable'; /*0x46d031*/
      this->? = &CampaignClass::`vftable'; /*0x46d038*/
    }
    return 0; /*0x46d03f*/
  }
  return result; /*0x46d041*/
}



// ==== 0x0046D050  CampaignClass::Seek  this=CampaignClass  sig=csp ====
int __stdcall CampaignClass::Seek(CampaignClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x46d05f*/
  if ( result >= 0 ) /*0x46d066*/
    return 0; /*0x46d068*/
  return result; /*0x46d06a*/
}



// ==== 0x0046D070  CampaignClass::StubReturn928  this=CampaignClass  sig=csp ====
int CampaignClass::StubReturn928(CampaignClass *this)
{
  return 928; /*0x46d075*/
}



// ==== 0x0046D080  CampaignClass::StubReturn10  this=CampaignClass  sig=csp ====
int CampaignClass::StubReturn10(CampaignClass *this)
{
  return 10; /*0x46d085*/
}



// ==== 0x0046D090  CampaignClass::DTOR  this=CampaignClass  sig=csp ====
void **__thiscall CampaignClass::DTOR(CampaignClass *this, char a2)
{
  int v3; // eax
  CampaignClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &CampaignClass::`vftable'; /*0x46d096*/
  this->? = &CampaignClass::`vftable'; /*0x46d09c*/
  this->? = &CampaignClass::`vftable'; /*0x46d0a3*/
  this->? = &CampaignClass::`vftable'; /*0x46d0aa*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x46d0b1*/
  v5 = this; /*0x46d0c6*/
  v3 = (*(int (__thiscall **)(_DWORD *, CampaignClass **))(dword_A83CF8 + 16))(&dword_A83CF8, &v5); /*0x46d0ca*/
  if ( v3 != -1 && v3 < dword_A83D08 && v3 < --dword_A83D08 ) /*0x46d0e5*/
  {
    do /*0x46d0fd*/
    {
      ++v3; /*0x46d0ed*/
      *((_DWORD *)dword_A83CFC + v3 - 1) = *((_DWORD *)dword_A83CFC + v3); /*0x46d0f1*/
    }
    while ( v3 < dword_A83D08 ); /*0x46d0fd*/
  }
  AbstractTypeClass::Dtor((AbstractTypeClass *)this); /*0x46d101*/
  if ( (a2 & 1) != 0 ) /*0x46d10b*/
    __3_YAXPAX_Z(this); /*0x46d10e*/
  return &this->AbstractClass; /*0x46d118*/
}



// ==== 0x0046D120  sub_46D120  this=-  sig=ida-proto ====
void sub_46D120()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x46d12c*/
  dbl_89DFA8 = Math::Sqrt(v0 + v0); /*0x46d13e*/
}



// ==== 0x0046D150  sub_46D150  this=-  sig=ida-proto ====
void sub_46D150()
{
  dbl_89E040 = dbl_89DFA8 / 60.0; /*0x46d15c*/
}



// ==== 0x0046D170  sub_46D170  this=-  sig=ida-proto ====
void sub_46D170()
{
  dbl_89E018 = 1.0 / dbl_89E040; /*0x46d17c*/
}



// ==== 0x0046D190  sub_46D190  this=-  sig=ida-proto ====
void sub_46D190()
{
  dbl_89E010 = 0.0174532925199433 * 45.0; /*0x46d19c*/
}



// ==== 0x0046D1B0  sub_46D1B0  this=-  sig=ida-proto ====
void sub_46D1B0()
{
  dbl_89DFB0 = 0.0174532925199433 * 60.0; /*0x46d1bc*/
}



// ==== 0x0046D1D0  sub_46D1D0  this=-  sig=ida-proto ====
void sub_46D1D0()
{
  dbl_89DF68 = 0.0174532925199433 * 90.0; /*0x46d1dc*/
}



// ==== 0x0046D1F0  sub_46D1F0  this=-  sig=ida-proto ====
__int64 sub_46D1F0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89DF68 - dbl_89DFB0); /*0x46d202*/
  result = Math::RoundToInt(v0 * dbl_89DFA8 * 0.5); /*0x46d216*/
  dword_89E048 = result; /*0x46d21b*/
  return result; /*0x46d220*/
}



// ==== 0x0046D230  sub_46D230  this=-  sig=ida-proto ====
void sub_46D230()
{
  dbl_89DFB8 = Math::ArcTan((double)dword_89E048 * 0.00390625); /*0x46d247*/
}



// ==== 0x0046D260  sub_46D260  this=-  sig=ida-proto ====
void sub_46D260()
{
  dbl_89DFD8 = Math::ArcTan((double)(2 * dword_89E048) / dbl_89DFA8); /*0x46d282*/
}



// ==== 0x0046D290  sub_46D290  this=-  sig=ida-proto ====
__int64 sub_46D290()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89E048) + 0.5); /*0x46d2ab*/
  dword_89E034 = result; /*0x46d2b0*/
  return result; /*0x46d2b6*/
}



// ==== 0x0046D2C0  sub_46D2C0  this=-  sig=ida-proto ====
int sub_46D2C0()
{
  word_89DFA0 = 0; /*0x46d2c2*/
  word_89DFA2 = 0; /*0x46d2c8*/
  return 0; /*0x46d2ce*/
}



// ==== 0x0046D2D0  sub_46D2D0  this=-  sig=ida-proto ====
int sub_46D2D0()
{
  dword_89DFC8 = 0; /*0x46d2d2*/
  dword_89DFCC = 0; /*0x46d2d7*/
  dword_89DFD0 = 0; /*0x46d2dc*/
  return 0; /*0x46d2e1*/
}



// ==== 0x0046D2F0  sub_46D2F0  this=-  sig=ida-proto ====
int sub_46D2F0()
{
  dword_89E030 = 0; /*0x46d2f5*/
  dword_89E028 = 128; /*0x46d2ff*/
  dword_89E02C = 128; /*0x46d304*/
  return 128; /*0x46d309*/
}



// ==== 0x0046D310  sub_46D310  this=-  sig=ida-proto ====
int sub_46D310()
{
  dword_89DF70 = 0; /*0x46d312*/
  dword_89DF74 = 0; /*0x46d317*/
  dword_89DF78 = 0; /*0x46d31c*/
  dword_89DF7C = 0; /*0x46d321*/
  return 0; /*0x46d326*/
}



// ==== 0x0046D330  MPCooperative::initGame  this=CampaignScore  sig=csp ====
_DWORD *__thiscall MPCooperative::initGame(MPCooperative *this)
{
  this->MPCooperative_field_0x0 = &CampaignScoreClass::`vftable'; /*0x46d334*/
  this->MPCooperative_field_0x4 = 0; /*0x46d33a*/
  dword_89E050 = 0; /*0x46d33d*/
  stru_81AF8C.?[6] = -1; /*0x46d343*/
  return &this->MPCooperative_field_0x0; /*0x46d34d*/
}



// ==== 0x0046D350  CampaignScoreClass::method_46D350  this=CampaignScore  sig=csp ====
void __thiscall sub_46D350(CampaignScoreClass *this)
{
  this->m_0 = (int)&CampaignScoreClass::`vftable'; /*0x46d350*/
}



// ==== 0x0046D480  ObjectClass::method_46D480  this=ObjectClass  sig=csp ====
__int64 __usercall sub_46D480@<edx:eax>(ObjectClass *this, int a2@<ecx>)
{
  __int64 result; // rax

  *((_BYTE *)&g_GameModeOptionState + a2) = BYTE4(result); /*0x46d480*/
  return result; /*0x46d486*/
}



// ==== 0x0046D490  ObjectClass::method_46D490  this=ObjectClass  sig=csp ====
char __thiscall sub_46D490(ObjectClass *this)
{
  return *((_BYTE *)&g_GameModeOptionState + (_DWORD)this); /*0x46d496*/
}



// ==== 0x0046D4A0  Game::SendCampaignOptions  this=Game  sig=ida-proto ====
int Game_SendCampaignOptions()
{
  int result; // eax
  int i; // esi
  int v2; // ecx
  int Option; // eax
  int v4; // ecx
  int PlayerSide; // eax
  int v6; // ecx
  char *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // eax
  wchar_t **v12; // esi
  int v13; // [esp+8h] [ebp-1C8h] BYREF
  char v14[452]; // [esp+Ch] [ebp-1C4h] BYREF

  v13 = 50; /*0x46d4bc*/
  strcpy(v14, unk_A8B380); /*0x46d4cd*/
  result = Settings::CheckString(); /*0x46d4d6*/
  if ( (_BYTE)result )
  {
    Debug::Log(aSendingCampaig); /*0x46d4e8*/
    v14[43] = dword_A8EB68; /*0x46d4f6*/
    for ( i = 0; i < 8; ++i )
    {
      v2 = *(&dword_A8DA90 + i); /*0x46d4fc*/
      if ( !v2 || v2 == g_HouseClass_ObserverFlags || v2 == g_Lobby_PlayerCount ) /*0x46d515*/
      {
        *(_DWORD *)&v14[4 * i + 44] = -1; /*0x46d542*/
        *(_DWORD *)&v14[4 * i + 76] = -1; /*0x46d54a*/
        *(_DWORD *)&v14[4 * i + 108] = -1; /*0x46d552*/
      }
      else
      {
        Option = SessionClass::GetOption(v2); /*0x46d517*/
        v4 = *(&dword_A8DA90 + i); /*0x46d51c*/
        *(_DWORD *)&v14[4 * i + 44] = Option; /*0x46d523*/
        PlayerSide = SessionClass::GetPlayerSide(v4); /*0x46d527*/
        v6 = *(&dword_A8DA90 + i); /*0x46d52c*/
        *(_DWORD *)&v14[4 * i + 76] = PlayerSide; /*0x46d533*/
        *(_DWORD *)&v14[4 * i + 108] = SessionClass::GetPlayerColor(v6); /*0x46d53c*/
      }
      v7 = ToWideStringChar((char *)*(&dword_A8DA90 + i)); /*0x46d561*/
      Debug::Log(
        "Player %i %s: Start %i, Country %i, Color %i\n",
        i,
        v7,
        *(_DWORD *)&v14[4 * i + 44],
        *(_DWORD *)&v14[4 * i + 76],
        *(_DWORD *)&v14[4 * i + 108]);
      v8 = MEMORY[0xA8B2BC][i]; /*0x46d588*/
      v9 = MEMORY[0xA8B27C][i]; /*0x46d58f*/
      *(_DWORD *)&v14[4 * i + 140] = MEMORY[0xA8B29C][i]; /*0x46d596*/
      v10 = MEMORY[0xA8B2DC][i]; /*0x46d59d*/
      *(_DWORD *)&v14[4 * i + 172] = v8; /*0x46d5a4*/
      *(_DWORD *)&v14[4 * i + 204] = v9; /*0x46d5ab*/
      *(_DWORD *)&v14[4 * i + 236] = v10; /*0x46d5b2*/
      v11 = MEMORY[0xA8B2FC][i]; /*0x46d5b9*/
      *(_DWORD *)&v14[4 * i + 268] = v11; /*0x46d5c0*/
      result = Debug::Log(
                 "AI %i: Difficulty %i, Country %i, Color %i, Start %i, Ally %i\n",
                 i,
                 *(_DWORD *)&v14[4 * i + 204],
                 *(_DWORD *)&v14[4 * i + 140],
                 *(_DWORD *)&v14[4 * i + 172],
                 *(_DWORD *)&v14[4 * i + 236],
                 v11);
    }
    v12 = (wchar_t **)&unk_A8DA94; /*0x46d600*/
    do /*0x46d640*/
    {
      if ( *v12 ) /*0x46d605*/
      {
        result = IsKnownPointer(*v12); /*0x46d60b*/
        if ( (_BYTE)result ) /*0x46d612*/
        {
          Network::SendToPlayer((int)unk_A8E9C0, (int)&v13, 455, 1, *v12); /*0x46d628*/
          result = Network::ReceiveLoop(unk_A8E9C0); /*0x46d632*/
        }
      }
      ++v12; /*0x46d637*/
    }
    while ( (int)v12 < (int)&dword_A8DAB0 ); /*0x46d640*/
  }
  return result; /*0x46d642*/
}



// ==== 0x0046D650  sub_46D650  this=-  sig=ida-proto ====
bool sub_46D650()
{
  bool v0; // bl
  HWND v1; // eax
  HWND DlgItem; // eax
  int v3; // ebp
  LPARAM *v4; // esi
  int v5; // ecx
  int v6; // edi
  int v7; // edi
  int v8; // edi
  LPARAM v9; // eax
  LPARAM v10; // eax
  LPARAM v11; // eax
  LPARAM v12; // eax
  LPARAM v13; // eax

  if ( dword_A8D638 != 50 ) /*0x46d65b*/
    return 0; /*0x46d80a*/
  Debug::Log(); /*0x46d666*/
  v0 = dword_A8EB68 != (char)dword_A8D667; /*0x46d67f*/
  dword_A8EB68 = (char)dword_A8D667; /*0x46d686*/
  v1 = (HWND)Dialog::FindByHandle((void *)0xBC6); /*0x46d68b*/
  if ( v1 ) /*0x46d692*/
  {
    DlgItem = GetDlgItem(v1, 1842); /*0x46d69a*/
    if ( DlgItem ) /*0x46d6a2*/
      PostMessageA(DlgItem, 0x405u, 1u, dword_A8EB68); /*0x46d6b3*/
  }
  v3 = 0; /*0x46d6bc*/
  v4 = &dword_A8DA90; /*0x46d6be*/
  do /*0x46d7fd*/
  {
    v5 = *v4; /*0x46d6c3*/
    if ( *v4 && v5 != g_HouseClass_ObserverFlags && v5 != g_Lobby_PlayerCount ) /*0x46d6d7*/
    {
      v6 = *(v4 - 266); /*0x46d6d9*/
      if ( SessionClass::GetOption(v5) != v6 ) /*0x46d6e6*/
        v0 = 1; /*0x46d6e8*/
      SessionClass::SetOption(*v4, v6); /*0x46d6ed*/
      v7 = *(v4 - 258); /*0x46d6f4*/
      if ( SessionClass::GetPlayerSide(*v4) != v7 ) /*0x46d701*/
        v0 = 1; /*0x46d703*/
      SessionClass::SetPlayerOption(*v4, v7); /*0x46d708*/
      v8 = *(v4 - 250); /*0x46d70f*/
      if ( SessionClass::GetPlayerColor(*v4) != v8 ) /*0x46d71c*/
        v0 = 1; /*0x46d71e*/
      SessionClass::SetPlayerColor(*v4, v8); /*0x46d723*/
    }
    ToWideStringChar((char *)*v4); /*0x46d72a*/
    SessionClass::GetPlayerColor(*v4); /*0x46d733*/
    SessionClass::GetPlayerSide(*v4); /*0x46d73b*/
    SessionClass::GetOption(*v4); /*0x46d743*/
    Debug::Log(); /*0x46d750*/
    v9 = *(v4 - 242); /*0x46d755*/
    if ( *(v4 - 2557) != v9 ) /*0x46d766*/
      v0 = 1; /*0x46d768*/
    *(v4 - 2557) = v9; /*0x46d76a*/
    v10 = *(v4 - 234); /*0x46d770*/
    if ( *(v4 - 2549) != v10 ) /*0x46d77c*/
      v0 = 1; /*0x46d77e*/
    *(v4 - 2549) = v10; /*0x46d780*/
    v11 = *(v4 - 226); /*0x46d786*/
    if ( *(v4 - 2565) != v11 ) /*0x46d792*/
      v0 = 1; /*0x46d794*/
    *(v4 - 2565) = v11; /*0x46d796*/
    v12 = *(v4 - 218); /*0x46d79c*/
    if ( *(v4 - 2541) != v12 ) /*0x46d7a8*/
      v0 = 1; /*0x46d7aa*/
    *(v4 - 2541) = v12; /*0x46d7ac*/
    v13 = *(v4 - 210); /*0x46d7b2*/
    if ( *(v4 - 2533) != v13 ) /*0x46d7be*/
      v0 = 1; /*0x46d7c0*/
    *(v4 - 2533) = v13; /*0x46d7c2*/
    Debug::Log(); /*0x46d7eb*/
    ++v4; /*0x46d7f3*/
    ++v3; /*0x46d7f6*/
  }
  while ( (int)v4 < (int)&dword_A8DAB0 ); /*0x46d7fd*/
  return v0; /*0x46d808*/
}



// ==== 0x0046D810  ObjectClass::method_46D810  this=ObjectClass  sig=csp ====
int sub_46D810(ObjectClass *this)
{
  int result; // eax
  int v2; // [esp+8h] [ebp-1C8h] BYREF
  char v3[43]; // [esp+Ch] [ebp-1C4h] BYREF
  int Option; // [esp+37h] [ebp-199h]
  int PlayerSide; // [esp+3Bh] [ebp-195h]
  int PlayerColor; // [esp+3Fh] [ebp-191h]

  v2 = 51; /*0x46d82c*/
  strcpy(v3, unk_A8B380); /*0x46d83d*/
  Option = SessionClass::GetOption((int *)*dword_A8DA78); /*0x46d859*/
  PlayerSide = SessionClass::GetPlayerSide((int *)*dword_A8DA78); /*0x46d864*/
  PlayerColor = SessionClass::GetPlayerColor((SessionClass *)*dword_A8DA78); /*0x46d874*/
  result = dword_A8DA90; /*0x46d878*/
  if ( dword_A8DA90 ) /*0x46d881*/
  {
    Network::SendToPlayer((int)&unk_A8E9C0, (int)&v2, 455, 1, (wchar_t *)dword_A8DA90); /*0x46d895*/
    return Network::ReceiveLoop(&unk_A8E9C0); /*0x46d89f*/
  }
  return result; /*0x46d87d*/
}



// ==== 0x0046D8B0  ObjectClass::method_46D8B0  this=ObjectClass  sig=csp ====
char sub_46D8B0(ObjectClass *this)
{
  char v1; // bl
  int v2; // edi
  const wchar_t **v3; // esi
  char *v4; // eax
  unsigned __int8 (__thiscall **vtable0)(ObjectClass *, int); // esi
  int PlayerSide; // eax
  int v8; // [esp-4h] [ebp-10h]

  v1 = 0; /*0x46d8b3*/
  v2 = 0; /*0x46d8b5*/
  v3 = (const wchar_t **)dword_A8DA90; /*0x46d8b7*/
  while ( 1 ) /*0x46d8c1*/
  {
    v4 = CharToWideString(&stru_A8D600.__pad_34[8]); /*0x46d8c1*/
    if ( !wcscmp((const wchar_t *)v4, *v3) ) /*0x46d8ca*/
      break; /*0x46d8ca*/
    ++v3; /*0x46d8d6*/
    ++v2; /*0x46d8d9*/
    if ( (int)v3 >= (int)&dword_A8DAB0 ) /*0x46d8e0*/
      return 0; /*0x46d8e7*/
  }
  if ( v2 == -1 ) /*0x46d8eb*/
    return 0; /*0x46d8f2*/
  if ( SessionClass::GetPlayerSide((int *)dword_A8DA90[v2]) != *(_DWORD *)&stru_A8D600.__pad_64[7] ) /*0x46d907*/
    v1 = 1; /*0x46d909*/
  if ( dword_A8B23C ) /*0x46d913*/
  {
    if ( (*((unsigned __int8 (__thiscall **)(ObjectClass *, _DWORD))dword_A8B23C->AbstractClass + 7))( /*0x46d918*/
           dword_A8B23C,
           *(_DWORD *)&stru_A8D600.__pad_64[7]) )
    {
      SessionClass::SetPlayerOption((int *)dword_A8DA90[v2], *(int *)&stru_A8D600.__pad_64[7]); /*0x46d926*/
    }
    else if ( dword_A8B23C ) /*0x46d92f*/
    {
      vtable0 = (unsigned __int8 (__thiscall **)(ObjectClass *, int))dword_A8B23C->AbstractClass; /*0x46d938*/
      PlayerSide = SessionClass::GetPlayerSide((int *)dword_A8DA90[v2]); /*0x46d93a*/
      if ( !vtable0[7](dword_A8B23C, PlayerSide) ) /*0x46d946*/
      {
        v8 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 10))(dword_A8B23C); /*0x46d958*/
        SessionClass::SetPlayerOption((int *)dword_A8DA90[v2], v8); /*0x46d960*/
      }
    }
  }
  if ( SessionClass::GetPlayerColor((SessionClass *)dword_A8DA90[v2]) != *(_DWORD *)stru_A8D600.Network_field_0x6F ) /*0x46d979*/
    v1 = 1; /*0x46d97b*/
  if ( IsAvailableColorhWnd(*(int *)stru_A8D600.Network_field_0x6F) ) /*0x46d97d*/
  {
    if ( SessionClass::GetPlayerColor((SessionClass *)dword_A8DA90[v2]) != *(_DWORD *)stru_A8D600.Network_field_0x6F ) /*0x46d998*/
    {
      SessionClass::SetPlayerColor((int *)dword_A8DA90[v2], -2); /*0x46d9a3*/
      v1 = 1; /*0x46d9a8*/
    }
  }
  else
  {
    SessionClass::SetPlayerColor((int *)dword_A8DA90[v2], *(int *)stru_A8D600.Network_field_0x6F); /*0x46d9b9*/
  }
  if ( SessionClass::GetPlayerColor((SessionClass *)dword_A8DA90[v2]) != *(_DWORD *)&stru_A8D600.__pad_64[3] ) /*0x46d9d2*/
    v1 = 1; /*0x46d9d4*/
  if ( sub_4E50A0(*(int *)&stru_A8D600.__pad_64[3]) ) /*0x46d9d6*/
  {
    if ( SessionClass::GetOption((int *)dword_A8DA90[v2]) != *(_DWORD *)&stru_A8D600.__pad_64[3] ) /*0x46d9f1*/
    {
      SessionClass::SetOption((int *)dword_A8DA90[v2], -2); /*0x46d9fc*/
      return v1; /*0x46da06*/
    }
  }
  else
  {
    SessionClass::SetOption((int *)dword_A8DA90[v2], *(int *)&stru_A8D600.__pad_64[3]); /*0x46da15*/
  }
  return v1; /*0x46d8e2*/
}



// ==== 0x0046DA20  sub_46DA20  this=-  sig=ida-proto ====
LRESULT __fastcall sub_46DA20(HWND hDlg, int nIDDlgItem, wchar_t *Format)
{
  HWND DlgItem; // eax
  wchar_t Buffer[32]; // [esp+8h] [ebp-40h] BYREF

  swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, Format); /*0x46da38*/
  DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x46da42*/
  return SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer); /*0x46da5b*/
}



// ==== 0x0046DA70  ObjectClass::method_46DA70  this=ObjectClass  sig=csp ====
void sub_46DA70(ObjectClass *this)
{
  int nextArrayIndex; // ebx
  int v2; // esi
  int v3; // edi
  size_t v4; // ebp
  int v5; // esi
  int v6; // eax
  int *v7; // ecx
  int v8; // edx
  int v9; // ebp
  int *v10; // ecx
  int v11; // edx
  int v12; // ebp
  int Count; // ebp
  int v14; // ebp
  int v15; // ebp
  int v16; // edi
  int i; // [esp+8h] [ebp-8h]
  int v18; // [esp+Ch] [ebp-4h]

  nextArrayIndex = stru_A80220.?; /*0x46da74*/
  v2 = 0; /*0x46da7b*/
  dword_A8D580 = 0; /*0x46da7f*/
  v18 = stru_A80220.?; /*0x46da85*/
  for ( i = 0; v2 < nextArrayIndex; i = v2 ) /*0x46da8d*/
  {
    v3 = *((_DWORD *)stru_A80220.? + v2); /*0x46da9a*/
    if ( v3 /*0x46dab7*/
      && *(_BYTE *)(*(_DWORD *)(v3 + 52) + 422) != 1
      && (unsigned __int8)House::IsCurrentPlayer(*((House **)stru_A80220.? + v2)) )
    {
      v4 = dword_A8D580++; /*0x46dacf*/
      v5 = 112 * v4; /*0x46dae1*/
      *((_DWORD *)&dword_A8D228 + 28 * v4) = 0; /*0x46daea*/
      wcscpy((wchar_t *)&unk_A8D1FC + 56 * v4, (const wchar_t *)(v3 + 90154)); /*0x46daf5*/
      v6 = 0; /*0x46dafa*/
      *((_DWORD *)&dword_A8D22C + 28 * v4) = 0; /*0x46daff*/
      *((_DWORD *)&dword_A8D23C + 28 * v4) = 0; /*0x46db05*/
      *((_DWORD *)&dword_A8D24C + 28 * v4) = 0; /*0x46db0b*/
      dword_A8D25C[28 * v4] = 0; /*0x46db11*/
      *((_DWORD *)&dword_A8D224 + 28 * v4) = *(_DWORD *)(v3 + 90196); /*0x46db1d*/
      if ( !*(_BYTE *)(v3 + 501) ) /*0x46db23*/
      {
        ++*((_DWORD *)&dword_A8D228 + 28 * v4); /*0x46db34*/
        dword_A8D584 = v4; /*0x46db3a*/
      }
      v7 = (int *)(v3 + 21476); /*0x46db40*/
      v8 = 20; /*0x46db46*/
      do /*0x46db53*/
      {
        v9 = *v7++; /*0x46db4b*/
        v6 += v9; /*0x46db50*/
        --v8; /*0x46db52*/
      }
      while ( v8 ); /*0x46db53*/
      v10 = (int *)(v3 + 21560); /*0x46db55*/
      v11 = 20; /*0x46db5b*/
      do /*0x46db68*/
      {
        v12 = *v10++; /*0x46db60*/
        v6 += v12; /*0x46db65*/
        --v11; /*0x46db67*/
      }
      while ( v11 ); /*0x46db68*/
      *(_DWORD *)((char *)&dword_A8D23C + v5) = v6; /*0x46db6a*/
      *(_DWORD *)((char *)&dword_A8D22C + v5) = *(_DWORD *)(v3 + 21640) + *(_DWORD *)(v3 + 21556); /*0x46db84*/
      Count = VectorClass::GetCount((VectorClass *)(v3 + 21840)); /*0x46db95*/
      v14 = VectorClass::GetCount((VectorClass *)(v3 + 21860)) + Count; /*0x46dba2*/
      v15 = VectorClass::GetCount((VectorClass *)(v3 + 21880)) + v14; /*0x46dbaf*/
      *(_DWORD *)((char *)&dword_A8D24C + v5) = *(_DWORD *)(v3 + 21640) /*0x46dbc8*/
                                              + VectorClass::GetCount((VectorClass *)(v3 + 21900))
                                              + v15
                                              + *(_DWORD *)(v3 + 21556);
      v16 = *(_DWORD *)(v3 + 21736); /*0x46dbce*/
      if ( v16 > 0 ) /*0x46dbd6*/
        dword_A8D25C[v5 / 4u] += v16; /*0x46dbd8*/
      Debug::Log(); /*0x46dc1c*/
      v2 = i; /*0x46dc21*/
      nextArrayIndex = v18; /*0x46dc25*/
    }
    ++v2; /*0x46dc2c*/
  }
}



// ==== 0x0046DC90  Compare::Field96  this=Compare  sig=ida-proto ====
int __cdecl Compare_Field96(const void *a1, const void *a2)
{
  int v2; // eax
  int v3; // ecx

  v2 = *(_DWORD *)(*(_DWORD *)a1 + 96); /*0x46dc9c*/
  v3 = *(_DWORD *)(*(_DWORD *)a2 + 96); /*0x46dc9f*/
  if ( v2 == v3 )
    return 0; /*0x46dca6*/
  else
    return v2 <= v3 ? 1 : -1;
}



// ==== 0x0046DCC0  sub_46DCC0  this=-  sig=csp ====
BOOL __fastcall sub_46DCC0(HWND hDlg, unsigned __int8 a2)
{
  int i; // edi
  BOOL result; // eax
  int v5; // eax
  HWND DlgItem; // eax
  int ResourceID2CSF; // eax
  HWND v8; // eax
  int ResourceIDCSF; // eax
  HWND v10; // eax
  int ResourceID3CSF; // eax
  HWND v12; // eax

  for ( i = 0; i < 8; ++i )
  {
    result = IsKnownPointer((wchar_t *)*(&dword_A8DA90 + i)); /*0x46dcda*/
    if ( result && i != dword_A8DA8C )
    {
      if ( i )
        v5 = i != 1 ? -1 : 1042;
      else
        v5 = 1041; /*0x46dcef*/
      DlgItem = GetDlgItem(hDlg, v5); /*0x46dd09*/
      EnableWindow(DlgItem, a2); /*0x46dd17*/
      ResourceID2CSF = GetResourceID2CSF((void *)i); /*0x46dd1f*/
      v8 = GetDlgItem(hDlg, ResourceID2CSF); /*0x46dd26*/
      EnableWindow(v8, a2); /*0x46dd2a*/
      ResourceIDCSF = GetResourceIDCSF((void *)i); /*0x46dd32*/
      v10 = GetDlgItem(hDlg, ResourceIDCSF); /*0x46dd39*/
      EnableWindow(v10, a2); /*0x46dd3d*/
      ResourceID3CSF = GetResourceID3CSF((void *)i); /*0x46dd45*/
      v12 = GetDlgItem(hDlg, ResourceID3CSF); /*0x46dd4c*/
      result = EnableWindow(v12, a2); /*0x46dd50*/
    }
  }
  return result; /*0x46dd60*/
}



// ==== 0x0046DD70  EnableGameModeControls  this=-  sig=csp ====
HWND __fastcall GameMode_EnableControls(HWND hDlg, unsigned __int8 a2)
{
  int v4; // eax
  HWND DlgItem; // eax
  int ResourceID2; // eax
  HWND v7; // eax
  int ResourceID; // eax
  HWND v9; // eax
  int ResourceID3; // eax
  HWND v11; // eax
  HWND result; // eax
  HWND v13; // edi

  if ( dword_A8DA8C )
    v4 = dword_A8DA8C != 1 ? -1 : 1042;
  else
    v4 = 1041; /*0x46dd81*/
  DlgItem = GetDlgItem(hDlg, v4); /*0x46dd9f*/
  EnableWindow(DlgItem, a2); /*0x46ddaf*/
  ResourceID2 = GetResourceID2CSF((void *)dword_A8DA8C); /*0x46ddb7*/
  v7 = GetDlgItem(hDlg, ResourceID2); /*0x46ddbe*/
  EnableWindow(v7, a2); /*0x46ddc2*/
  ResourceID = GetResourceIDCSF((void *)dword_A8DA8C); /*0x46ddca*/
  v9 = GetDlgItem(hDlg, ResourceID); /*0x46ddd1*/
  EnableWindow(v9, a2); /*0x46ddd5*/
  ResourceID3 = GetResourceID3CSF((void *)dword_A8DA8C); /*0x46dddd*/
  v11 = GetDlgItem(hDlg, ResourceID3); /*0x46dde4*/
  EnableWindow(v11, a2); /*0x46dde8*/
  result = (HWND)Settings::CheckString(); /*0x46ddea*/
  if ( (_BYTE)result ) /*0x46ddf1*/
  {
    result = GetDlgItem(hDlg, 1842); /*0x46ddf9*/
    v13 = result; /*0x46ddfb*/
    if ( result ) /*0x46ddff*/
    {
      EnableWindow(result, a2); /*0x46de03*/
      return (HWND)InvalidateRect(v13, 0, 0); /*0x46de0a*/
    }
  }
  return result; /*0x46de10*/
}



// ==== 0x0046DE20  sub_46DE20  this=-  sig=csp ====
HWND __fastcall sub_46DE20(HWND hDlg, int nCmdShow)
{
  HWND DlgItem; // eax
  HWND v5; // eax
  HWND v6; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  HWND v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  HWND v14; // eax
  HWND v15; // eax
  HWND v16; // eax
  HWND v17; // eax
  HWND v18; // eax
  HWND v19; // eax
  HWND v20; // eax
  HWND v21; // eax
  HWND v22; // eax
  HWND v23; // eax
  HWND v24; // eax
  HWND v25; // eax
  HWND result; // eax
  HWND hWnd; // [esp+10h] [ebp-4h]

  DlgItem = GetDlgItem(hDlg, 1842); /*0x46de35*/
  hWnd = DlgItem; /*0x46de3f*/
  if ( DlgItem ) /*0x46de43*/
  {
    ShowWindow(DlgItem, nCmdShow); /*0x46de47*/
    InvalidateRect(hWnd, 0, 0); /*0x46de52*/
  }
  v5 = GetDlgItem(hDlg, 1839); /*0x46de5e*/
  if ( v5 ) /*0x46de62*/
    ShowWindow(v5, nCmdShow); /*0x46de66*/
  v6 = GetDlgItem(hDlg, 1944); /*0x46de6e*/
  if ( v6 ) /*0x46de72*/
    ShowWindow(v6, nCmdShow); /*0x46de76*/
  v7 = GetDlgItem(hDlg, 1945); /*0x46de7e*/
  if ( v7 ) /*0x46de82*/
    ShowWindow(v7, nCmdShow); /*0x46de86*/
  v8 = GetDlgItem(hDlg, 1946); /*0x46de8e*/
  if ( v8 ) /*0x46de92*/
    ShowWindow(v8, nCmdShow); /*0x46de96*/
  v9 = GetDlgItem(hDlg, 1947); /*0x46de9e*/
  if ( v9 ) /*0x46dea2*/
    ShowWindow(v9, nCmdShow); /*0x46dea6*/
  v10 = GetDlgItem(hDlg, 1918); /*0x46deae*/
  if ( v10 ) /*0x46deb2*/
    ShowWindow(v10, nCmdShow); /*0x46deb6*/
  v11 = GetDlgItem(hDlg, 1746); /*0x46debe*/
  if ( v11 ) /*0x46dec2*/
    ShowWindow(v11, nCmdShow); /*0x46dec6*/
  v12 = GetDlgItem(hDlg, 1747); /*0x46dece*/
  if ( v12 ) /*0x46ded2*/
    ShowWindow(v12, nCmdShow); /*0x46ded6*/
  v13 = GetDlgItem(hDlg, 1041); /*0x46dede*/
  if ( v13 ) /*0x46dee2*/
    ShowWindow(v13, nCmdShow); /*0x46dee6*/
  v14 = GetDlgItem(hDlg, 1042); /*0x46deee*/
  if ( v14 ) /*0x46def2*/
    ShowWindow(v14, nCmdShow); /*0x46def6*/
  v15 = GetDlgItem(hDlg, 1754); /*0x46defe*/
  if ( v15 ) /*0x46df02*/
    ShowWindow(v15, nCmdShow); /*0x46df06*/
  v16 = GetDlgItem(hDlg, 1755); /*0x46df0e*/
  if ( v16 ) /*0x46df12*/
    ShowWindow(v16, nCmdShow); /*0x46df16*/
  v17 = GetDlgItem(hDlg, 1697); /*0x46df1e*/
  if ( v17 ) /*0x46df22*/
    ShowWindow(v17, nCmdShow); /*0x46df26*/
  v18 = GetDlgItem(hDlg, 1296); /*0x46df2e*/
  if ( v18 ) /*0x46df32*/
    ShowWindow(v18, nCmdShow); /*0x46df36*/
  v19 = GetDlgItem(hDlg, 1698); /*0x46df3e*/
  if ( v19 ) /*0x46df42*/
    ShowWindow(v19, nCmdShow); /*0x46df46*/
  v20 = GetDlgItem(hDlg, 1314); /*0x46df4e*/
  if ( v20 ) /*0x46df52*/
    ShowWindow(v20, nCmdShow); /*0x46df56*/
  v21 = GetDlgItem(hDlg, 1699); /*0x46df5e*/
  if ( v21 ) /*0x46df62*/
    ShowWindow(v21, nCmdShow); /*0x46df66*/
  v22 = GetDlgItem(hDlg, 1700); /*0x46df6e*/
  if ( v22 ) /*0x46df72*/
    ShowWindow(v22, nCmdShow); /*0x46df76*/
  v23 = GetDlgItem(hDlg, 1745); /*0x46df7e*/
  if ( v23 ) /*0x46df82*/
    ShowWindow(v23, nCmdShow); /*0x46df86*/
  v24 = GetDlgItem(hDlg, 1448); /*0x46df8e*/
  if ( v24 ) /*0x46df92*/
    ShowWindow(v24, nCmdShow); /*0x46df96*/
  v25 = GetDlgItem(hDlg, 1820); /*0x46df9e*/
  if ( v25 ) /*0x46dfa2*/
    ShowWindow(v25, nCmdShow == 0); /*0x46dfaf*/
  result = GetDlgItem(hDlg, 1128); /*0x46dfb7*/
  if ( result ) /*0x46dfbb*/
    return (HWND)ShowWindow(result, nCmdShow); /*0x46dfbf*/
  return result; /*0x46dfc1*/
}



// ==== 0x0046DFD0  CampaignScore::DialogProc  this=CampaignScore  sig=csp ====
int __stdcall CampaignScore::DialogProc(HWND hWnd, unsigned int a2, UINT_PTR uIDEvent, HWND a4)
{
  HWND v4; // ebp
  UINT_PTR v5; // edi
  int result; // eax
  Skirmish *v7; // esi
  HWND v8; // eax
  int v9; // ebx
  HWND v10; // eax
  char *v11; // eax
  int v12; // eax
  int v13; // edi
  int v14; // esi
  int jj; // esi
  int v16; // edi
  ObjectClass **v17; // esi
  ObjectClass *v18; // ebx
  int v19; // esi
  int v20; // eax
  int ii; // esi
  int v22; // edi
  int v23; // eax
  int v24; // edi
  ObjectClass **v25; // esi
  ObjectClass *v26; // ebx
  int v27; // esi
  int v28; // eax
  int m; // esi
  int v30; // edi
  int v31; // eax
  int v32; // edi
  ObjectClass **v33; // esi
  ObjectClass *v34; // ebx
  int v35; // esi
  int v36; // eax
  int n; // esi
  int v38; // edi
  int v39; // eax
  signed int v40; // esi
  const wchar_t **v41; // edi
  int *v42; // ebx
  const wchar_t *v43; // eax
  wchar_t *StringCSF; // esi
  HWND v45; // eax
  HWND v46; // eax
  signed int v47; // esi
  int *v48; // edi
  wchar_t *v49; // esi
  HWND v50; // eax
  wchar_t *v51; // esi
  HWND v52; // eax
  HWND v53; // eax
  ObjectClass **v54; // esi
  int v55; // edi
  HWND v56; // esi
  const wchar_t *v57; // ebx
  LRESULT v58; // edi
  bool v59; // cc
  ObjectClass *v60; // ebp
  int ResourceIDCSF; // esi
  int LobbyPlayerColor; // eax
  int k; // esi
  int v64; // edi
  int v65; // eax
  int v66; // esi
  char *v67; // eax
  int **v68; // esi
  ObjectClass *v69; // esi
  const wchar_t **v70; // edi
  char *v71; // eax
  HWND v72; // eax
  HWND v73; // esi
  HWND v74; // edi
  int j; // esi
  int v76; // eax
  int v77; // edx
  int **v78; // esi
  HWND v79; // eax
  int v80; // ecx
  int v81; // esi
  int v82; // ecx
  wchar_t *v83; // eax
  HWND v84; // eax
  ObjectClass **v85; // esi
  int v86; // eax
  LPARAM v87; // esi
  LPARAM v88; // edx
  HWND v89; // eax
  HWND v90; // eax
  ErrorCode v91; // eax
  HWND v92; // eax
  HWND v93; // eax
  HWND v94; // eax
  HWND v95; // eax
  ErrorCode v96; // eax
  HWND v97; // eax
  HWND v98; // eax
  ErrorCode v99; // eax
  HWND v100; // eax
  HWND v101; // eax
  char v102; // al
  HWND v103; // eax
  HWND v104; // eax
  HWND v105; // eax
  HWND v106; // eax
  HWND v107; // eax
  int v108; // edi
  ObjectClass **v109; // esi
  int v110; // eax
  int v111; // edi
  HWND DlgItem; // esi
  LPARAM v113; // ebx
  LRESULT v114; // edi
  int i; // esi
  int ResourceID3CSF; // edi
  int HouseClassSideIndex; // eax
  int v118; // [esp-8h] [ebp-428h]
  const wchar_t *v119; // [esp-4h] [ebp-424h]
  int v120; // [esp-4h] [ebp-424h]
  ObjectClass *v121; // [esp+0h] [ebp-420h] BYREF
  HWND hDlg; // [esp+10h] [ebp-410h]
  int v123; // [esp+14h] [ebp-40Ch]
  ErrorCode *WindowLongA; // [esp+18h] [ebp-408h]
  LPARAM v125; // [esp+1Ch] [ebp-404h]
  int nIDDlgItem; // [esp+20h] [ebp-400h]
  char v127; // [esp+27h] [ebp-3F9h]
  int v128; // [esp+28h] [ebp-3F8h]
  wchar_t *v129; // [esp+30h] [ebp-3F0h] BYREF
  DeleteAndZero v130; // [esp+34h] [ebp-3ECh] BYREF
  _DWORD v131[113]; // [esp+38h] [ebp-3E8h] BYREF
  __int16 v132; // [esp+1FCh] [ebp-224h]
  char v133; // [esp+1FEh] [ebp-222h]
  wchar_t Buffer[32]; // [esp+200h] [ebp-220h] BYREF
  wchar_t v135[32]; // [esp+240h] [ebp-1E0h] BYREF
  wchar_t v136[32]; // [esp+280h] [ebp-1A0h] BYREF
  wchar_t v137[32]; // [esp+2C0h] [ebp-160h] BYREF
  wchar_t v138[32]; // [esp+300h] [ebp-120h] BYREF
  wchar_t lParam[111]; // [esp+340h] [ebp-E0h] BYREF
  __int16 v140; // [esp+41Eh] [ebp-2h]

  v4 = hWnd; /*0x46dfdc*/
  v5 = uIDEvent; /*0x46dfec*/
  result = BaseDialogProc(hWnd, a2, uIDEvent, a4); /*0x46dff9*/
  if ( result ) /*0x46e000*/
    return result; /*0x46e000*/
  WindowLongA = (ErrorCode *)GetWindowLongA(hWnd, 8); /*0x46e01b*/
  if ( a2 > 0x113 ) /*0x46e01f*/
  {
    if ( a2 == 276 ) /*0x46eb67*/
    {
      if ( a4 != GetDlgItem(hWnd, 1842) ) /*0x46f30d*/
        return 0; /*0x46f30d*/
      if ( byte_89E0A2 ) /*0x46f31a*/
        stru_A8EB00.ObjectTypeClass[26] = SendDlgItemMessageA(hWnd, 1842, 0x400u, 0, 0); /*0x46f331*/
      else
        byte_89E0A2 = 1; /*0x46f338*/
      if ( byte_89E0A0 ) /*0x46f346*/
      {
        byte_89E0A1 = 1; /*0x46f4c2*/
        return 0; /*0x46f4c2*/
      }
      Game::SendCampaignOptions(); /*0x46f34c*/
      v108 = 0; /*0x46f351*/
      v109 = (ObjectClass **)dword_A8DA90; /*0x46f353*/
      do /*0x46f374*/
      {
        if ( (unsigned __int8)IsKnownPointer(*v109) ) /*0x46f35a*/
          *((_BYTE *)&g_GameModeOptionState + v108) = 0; /*0x46f363*/
        ++v109; /*0x46f36a*/
        ++v108; /*0x46f36d*/
      }
      while ( (int)v109 < (int)&dword_A8DAB0 ); /*0x46f374*/
      hDlg = hWnd; /*0x46f378*/
      if ( hWnd || (hDlg = (HWND)Dialog::FindByHandle((Dialog *)0xBC6)) != 0 ) /*0x46f38e*/
      {
        v125 = 0; /*0x46f394*/
        WindowLongA = (ErrorCode *)dword_A8DA90; /*0x46f39c*/
        do /*0x46f454*/
        {
          v110 = ErrorCode::Map((ErrorCode *)v125); /*0x46f3a8*/
          v111 = v110; /*0x46f3ad*/
          if ( v110 != -1 ) /*0x46f3b2*/
          {
            nIDDlgItem = (int)GetDlgItem(hDlg, v110); /*0x46f3c7*/
            if ( ShowWindow((HWND)nIDDlgItem, 0) ) /*0x46f3cb*/
            {
              DlgItem = GetDlgItem(hDlg, v111); /*0x46f3e1*/
              v113 = (LPARAM)*WindowLongA; /*0x46f3e7*/
              if ( *WindowLongA ) /*0x46f3e7*/
              {
                SendDlgItemMessageA(hDlg, v111, 0x14Bu, 0, 0); /*0x46f3fc*/
                v114 = SendMessageA(DlgItem, 0x4C2u, 0, v113); /*0x46f411*/
                SendMessageA(DlgItem, 0x151u, v114, v113); /*0x46f421*/
                SendMessageA(DlgItem, 0x14Eu, v114, 0); /*0x46f42c*/
                ShowWindow((HWND)nIDDlgItem, 5); /*0x46f435*/
              }
            }
          }
          v59 = (int)&WindowLongA[1] < (int)&dword_A8DAB0; /*0x46f447*/
          ++v125; /*0x46f44c*/
          ++WindowLongA; /*0x46f450*/
        }
        while ( v59 ); /*0x46f454*/
        Count::SetupAllCountriesLobby((Count *)hDlg); /*0x46f460*/
        Skirmish::SetupAllSpawnLocations((Skirmish *)hDlg); /*0x46f467*/
        for ( i = 0; i < 8; ++i ) /*0x46f46c*/
        {
          ResourceID3CSF = GetResourceID3CSF((ObjectClass *)i); /*0x46f477*/
          HouseClassSideIndex = GetHouseClassSideIndex(i); /*0x46f479*/
          SetupLobbyFactionSlots(hDlg, ResourceID3CSF, HouseClassSideIndex); /*0x46f483*/
        }
        Lobby::UpdateReadyIcons((Lobby *)hDlg); /*0x46f490*/
        Lobby::EnableStartButton((Lobby *)hDlg); /*0x46f497*/
      }
      SetTimer(hWnd, 0, 0x1F4u, 0); /*0x46f4a6*/
      byte_89E0A0 = 1; /*0x46f4af*/
      return 0; /*0x46f4bf*/
    }
    if ( a2 != 1175 ) /*0x46eb73*/
    {
      if ( a2 == 1261 ) /*0x46eb78*/
      {
        Screen::Capture(1, 0, (int)GetDlgItem, (int)hWnd); /*0x46eb82*/
        Dialog::InitWindow(hWnd, 1); /*0x46eb8a*/
        ShowWindow(hWnd, 0); /*0x46eb92*/
        return 0; /*0x46eba4*/
      }
      return 0; /*0x46eb78*/
    }
    byte_89E0A2 = 0; /*0x46ebac*/
    v67 = &stru_A8B250.__pad_0[76]; /*0x46ebb5*/
    if ( byte_89E05D ) /*0x46ebba*/
    {
      do /*0x46ebd0*/
      {
        *((_DWORD *)v67 + 8) = -1; /*0x46ebc3*/
        *(_DWORD *)v67 = -1; /*0x46ebc6*/
        v67 += 4; /*0x46ebc8*/
      }
      while ( (int)v67 < (int)&stru_A8B250.__pad_0[108] ); /*0x46ebd0*/
      InitGameDropdownColors(v121); /*0x46ebd2*/
      Lobby::FillPlayerFactions((Lobby *)hWnd); /*0x46ebd9*/
      v68 = (int **)dword_A8DA90; /*0x46ebde*/
      do /*0x46ec0a*/
      {
        *(v68 - 2541) = (int *)-2; /*0x46ebe8*/
        if ( (unsigned __int8)IsKnownPointer((ObjectClass *)*v68) ) /*0x46ebf0*/
          SessionClass::SetOption(*v68, -2); /*0x46ebfc*/
        ++v68; /*0x46ec01*/
      }
      while ( (int)v68 < (int)&dword_A8DAB0 ); /*0x46ec0a*/
      _cfltcvt_init(); /*0x46ec0c*/
      v69 = 0; /*0x46ec16*/
      if ( dword_A8DA84 > 0 ) /*0x46ec1a*/
      {
        v70 = (const wchar_t **)dword_A8DA90; /*0x46ec1c*/
        do /*0x46ec50*/
        {
          if ( *v70 ) /*0x46ec21*/
          {
            v119 = *v70; /*0x46ec27*/
            v71 = CharToWideString(unk_A8B380); /*0x46ec2d*/
            if ( !wcscmp((const wchar_t *)v71, v119) ) /*0x46ec33*/
              dword_A8DA8C = v69; /*0x46ec3f*/
          }
          v69 = (ObjectClass *)((char *)v69 + 1); /*0x46ec4a*/
          ++v70; /*0x46ec4b*/
        }
        while ( (int)v69 < dword_A8DA84 ); /*0x46ec50*/
      }
      MapSkirmishDialogPlayerToControl(hWnd, (int)dword_A8DA8C); /*0x46ec5a*/
      if ( dword_A8B23C ) /*0x46ec67*/
        (*((void (__thiscall **)(ObjectClass *, HWND))dword_A8B23C->AbstractClass + 14))(dword_A8B23C, hWnd); /*0x46ec6c*/
      v72 = GetDlgItem(hWnd, 1842); /*0x46ec75*/
      v73 = v72; /*0x46ec77*/
      if ( v72 ) /*0x46ec7b*/
      {
        PostMessageA(v72, 0x4ACu, 0, 0); /*0x46ec8d*/
        PostMessageA(v73, 0x406u, 1u, 0x20000); /*0x46ec9c*/
        PostMessageA(v73, 0x405u, 1u, stru_A8EB00.ObjectTypeClass[26]); /*0x46ecac*/
      }
      sub_46DCC0(hWnd, 0); /*0x46ecb2*/
      if ( !(unsigned __int8)Settings::CheckString() ) /*0x46ecb7*/
      {
        v131[0] = 51; /*0x46ecd8*/
        strcpy((char *)&v131[1], unk_A8B380); /*0x46ece9*/
        *(_DWORD *)((char *)&v131[11] + 3) = SessionClass::GetOption((int *)*dword_A8DA78); /*0x46ed05*/
        *(_DWORD *)((char *)&v131[12] + 3) = SessionClass::GetPlayerSide((int *)*dword_A8DA78); /*0x46ed10*/
        *(_DWORD *)((char *)&v131[13] + 3) = SessionClass::GetPlayerColor((SessionClass *)*dword_A8DA78); /*0x46ed20*/
        if ( dword_A8DA90[0] ) /*0x46ed2b*/
        {
          Network::SendToPlayer((int)&unk_A8E9C0, (int)v131, 455, 1, (wchar_t *)dword_A8DA90[0]); /*0x46ed3f*/
          Network::ReceiveLoop(&unk_A8E9C0); /*0x46ed49*/
        }
      }
      v74 = hWnd; /*0x46ed50*/
      if ( hWnd || (v74 = (HWND)Dialog::FindByHandle((Dialog *)0xBC6)) != 0 ) /*0x46ed62*/
      {
        Skirmish::FillPlayerNames((Skirmish *)v74); /*0x46ed66*/
        Count::SetupAllCountriesLobby((Count *)v74); /*0x46ed6d*/
        Skirmish::SetupAllSpawnLocations((Skirmish *)v74); /*0x46ed74*/
        for ( j = 0; j < 8; ++j ) /*0x46ed79*/
        {
          nIDDlgItem = GetResourceID3CSF((ObjectClass *)j); /*0x46ed84*/
          v76 = GetHouseClassSideIndex(j); /*0x46ed88*/
          SetupLobbyFactionSlots(v74, nIDDlgItem, v76); /*0x46ed94*/
        }
        Lobby::UpdateReadyIcons((Lobby *)v74); /*0x46eda1*/
        Lobby::EnableStartButton((Lobby *)v74); /*0x46eda8*/
      }
      v77 = 5; /*0x46edad*/
    }
    else
    {
      do /*0x46edc4*/
      {
        *((_DWORD *)v67 + 8) = -1; /*0x46edb7*/
        *(_DWORD *)v67 = -1; /*0x46edba*/
        v67 += 4; /*0x46edbc*/
      }
      while ( (int)v67 < (int)&stru_A8B250.__pad_0[108] ); /*0x46edc4*/
      InitGameDropdownColors(v121); /*0x46edc6*/
      v78 = (int **)dword_A8DA90; /*0x46edcb*/
      do /*0x46edf7*/
      {
        *(v78 - 2541) = (int *)-2; /*0x46edd5*/
        if ( (unsigned __int8)IsKnownPointer((ObjectClass *)*v78) ) /*0x46eddd*/
          SessionClass::SetOption(*v78, -2); /*0x46ede9*/
        ++v78; /*0x46edee*/
      }
      while ( (int)v78 < (int)&dword_A8DAB0 ); /*0x46edf7*/
      _cfltcvt_init(); /*0x46edf9*/
      v77 = 0; /*0x46edfe*/
    }
    sub_46DE20(hWnd, v77); /*0x46ee02*/
    SetTimer(hWnd, 1u, 0x4E20u, 0); /*0x46ee11*/
    goto LABEL_161; /*0x46ee11*/
  }
  if ( a2 == 275 ) /*0x46e02b*/
  {
    if ( uIDEvent ) /*0x46e91e*/
    {
      if ( uIDEvent != 1 ) /*0x46eac1*/
        return 0; /*0x46eac1*/
      memset(v131, 0, sizeof(v131)); /*0x46ead8*/
      v132 = 0; /*0x46eada*/
      v133 = 0; /*0x46eadc*/
      v131[0] = 13; /*0x46eadd*/
      strcpy((char *)&v131[1], ToWideStringChar((char *)*dword_A8DA78)); /*0x46eb06*/
      v66 = 1; /*0x46eb14*/
      if ( dword_A8DA84 <= 1 ) /*0x46eb1b*/
        return 0; /*0x46eb1b*/
      do /*0x46eb50*/
      {
        Network::SendToPlayer((int)&unk_A8E9C0, (int)v131, 47, 1, (wchar_t *)dword_A8DA78[v66]); /*0x46eb39*/
        Network::ReceiveLoop(&unk_A8E9C0); /*0x46eb43*/
        ++v66; /*0x46eb4d*/
      }
      while ( v66 < dword_A8DA84 ); /*0x46eb50*/
      return 0; /*0x46eb55*/
    }
    else
    {
      KillTimer(hWnd, 0); /*0x46e926*/
      byte_89E0A0 = 0; /*0x46e931*/
      if ( !byte_89E0A1 ) /*0x46e93a*/
        return 0; /*0x46e93a*/
      Game::SendCampaignOptions(); /*0x46e940*/
      v54 = (ObjectClass **)dword_A8DA90; /*0x46e945*/
      do /*0x46e966*/
      {
        if ( (unsigned __int8)IsKnownPointer(*v54) ) /*0x46e94c*/
          *((_BYTE *)&g_GameModeOptionState + v5) = 0; /*0x46e955*/
        ++v54; /*0x46e95c*/
        ++v5; /*0x46e95f*/
      }
      while ( (int)v54 < (int)&dword_A8DAB0 ); /*0x46e966*/
      hDlg = hWnd; /*0x46e96a*/
      if ( !hWnd ) /*0x46e96e*/
      {
        hDlg = (HWND)Dialog::FindByHandle((Dialog *)0xBC6); /*0x46e97c*/
        if ( !hDlg ) /*0x46e980*/
          return 0; /*0x46e980*/
      }
      WindowLongA = 0; /*0x46e98c*/
      v123 = (int)dword_A8DA90; /*0x46e994*/
      do /*0x46ea3e*/
      {
        v55 = ErrorCode::Map(WindowLongA); /*0x46e9a5*/
        if ( v55 != -1 ) /*0x46e9aa*/
        {
          nIDDlgItem = (int)GetDlgItem(hDlg, v55); /*0x46e9bb*/
          if ( ShowWindow((HWND)nIDDlgItem, 0) ) /*0x46e9bf*/
          {
            v56 = GetDlgItem(hDlg, v55); /*0x46e9d5*/
            v57 = *(const wchar_t **)v123; /*0x46e9db*/
            if ( *(_DWORD *)v123 ) /*0x46e9db*/
            {
              SendDlgItemMessageA(hDlg, v55, 0x14Bu, 0, 0); /*0x46e9f0*/
              v58 = SendMessageA(v56, 0x4C2u, 0, (LPARAM)v57); /*0x46ea01*/
              SendMessageA(v56, 0x151u, v58, (LPARAM)v57); /*0x46ea0b*/
              SendMessageA(v56, 0x14Eu, v58, 0); /*0x46ea16*/
              ShowWindow((HWND)nIDDlgItem, 5); /*0x46ea1f*/
            }
          }
        }
        v59 = v123 + 4 < (int)&dword_A8DAB0; /*0x46ea31*/
        WindowLongA = (ErrorCode *)((char *)WindowLongA + 1); /*0x46ea36*/
        v123 += 4; /*0x46ea3a*/
      }
      while ( v59 ); /*0x46ea3e*/
      Count::SetupAllCountriesLobby((Count *)hDlg); /*0x46ea4a*/
      v60 = dword_A8DA8C; /*0x46ea4f*/
      if ( dword_A8DA8C != (ObjectClass *)-1 ) /*0x46ea58*/
      {
        ResourceIDCSF = GetResourceIDCSF(dword_A8DA8C); /*0x46ea63*/
        LobbyPlayerColor = GetLobbyPlayerColor((int)v60); /*0x46ea65*/
        SetupSkirmishSpawnLocations(hDlg, ResourceIDCSF, LobbyPlayerColor); /*0x46ea6f*/
      }
      for ( k = 0; k < 8; ++k ) /*0x46ea74*/
      {
        if ( (ObjectClass *)k != v60 ) /*0x46ea78*/
        {
          v64 = GetResourceIDCSF((ObjectClass *)k); /*0x46ea83*/
          v65 = GetLobbyPlayerColor(k); /*0x46ea85*/
          SetupSkirmishSpawnLocations(hDlg, v64, v65); /*0x46ea8f*/
        }
      }
      Lobby::SetupAllFactionSlots((Lobby *)hDlg); /*0x46ea9c*/
      Lobby::UpdateReadyIcons((Lobby *)hDlg); /*0x46eaa3*/
      Lobby::EnableStartButton((Lobby *)hDlg); /*0x46eaaa*/
      return 0; /*0x46eab2*/
    }
  }
  if ( a2 > 0x110 ) /*0x46e037*/
  {
    if ( a2 != 273 ) /*0x46e0be*/
      return 0; /*0x46e0be*/
    if ( (unsigned __int16)uIDEvent > 0x6A1u ) /*0x46e0d2*/
    {
      switch ( (__int16)uIDEvent ) /*0x46e4be*/
      {
        case 1698: /*0x46e4be*/
LABEL_48:
          AssignPlayerColor(hWnd, (void *)(unsigned __int16)uIDEvent); /*0x46e4c5*/
          if ( (unsigned __int8)Settings::CheckString() ) /*0x46e4cc*/
          {
            Game::SendCampaignOptions(); /*0x46e4d5*/
          }
          else
          {
            v131[0] = 51; /*0x46e4f3*/
            strcpy((char *)&v131[1], unk_A8B380); /*0x46e504*/
            *(_DWORD *)((char *)&v131[11] + 3) = SessionClass::GetOption((int *)*dword_A8DA78); /*0x46e520*/
            *(_DWORD *)((char *)&v131[12] + 3) = SessionClass::GetPlayerSide((int *)*dword_A8DA78); /*0x46e52b*/
            *(_DWORD *)((char *)&v131[13] + 3) = SessionClass::GetPlayerColor((SessionClass *)*dword_A8DA78); /*0x46e53b*/
            if ( dword_A8DA90[0] ) /*0x46e546*/
            {
              Network::SendToPlayer((int)&unk_A8E9C0, (int)v131, 455, 1, (wchar_t *)dword_A8DA90[0]); /*0x46e55a*/
              Network::ReceiveLoop(&unk_A8E9C0); /*0x46e564*/
            }
          }
          v24 = 0; /*0x46e569*/
          v25 = (ObjectClass **)dword_A8DA90; /*0x46e56b*/
          do /*0x46e58c*/
          {
            if ( (unsigned __int8)IsKnownPointer(*v25) ) /*0x46e572*/
              *((_BYTE *)&g_GameModeOptionState + v24) = 0; /*0x46e57b*/
            ++v25; /*0x46e582*/
            ++v24; /*0x46e585*/
          }
          while ( (int)v25 < (int)&dword_A8DAB0 ); /*0x46e58c*/
          if ( !hWnd ) /*0x46e590*/
          {
            v4 = (HWND)Dialog::FindByHandle((Dialog *)0xBC6); /*0x46e59c*/
            if ( !v4 ) /*0x46e5a0*/
              return 0; /*0x46e5a0*/
          }
          Skirmish::FillPlayerNames((Skirmish *)v4); /*0x46e5a8*/
          Count::SetupAllCountriesLobby((Count *)v4); /*0x46e5af*/
          v26 = dword_A8DA8C; /*0x46e5b4*/
          if ( dword_A8DA8C != (ObjectClass *)-1 ) /*0x46e5bd*/
          {
            v27 = GetResourceIDCSF(dword_A8DA8C); /*0x46e5c8*/
            v28 = GetLobbyPlayerColor((int)v26); /*0x46e5ca*/
            SetupSkirmishSpawnLocations(v4, v27, v28); /*0x46e5d4*/
          }
          for ( m = 0; m < 8; ++m ) /*0x46e5d9*/
          {
            if ( (ObjectClass *)m != v26 ) /*0x46e5dd*/
            {
              v30 = GetResourceIDCSF((ObjectClass *)m); /*0x46e5e8*/
              v31 = GetLobbyPlayerColor(m); /*0x46e5ea*/
              SetupSkirmishSpawnLocations(v4, v30, v31); /*0x46e5f4*/
            }
          }
          goto LABEL_46; /*0x46e5fd*/
        case 1699: /*0x46e4be*/
        case 1700: /*0x46e4be*/
          AssignPlayerSide(hWnd, (unsigned __int16)uIDEvent); /*0x46e606*/
          if ( (unsigned __int8)Settings::CheckString() ) /*0x46e60b*/
          {
            Game::SendCampaignOptions(); /*0x46e614*/
          }
          else
          {
            v131[0] = 51; /*0x46e632*/
            strcpy((char *)&v131[1], unk_A8B380); /*0x46e643*/
            *(_DWORD *)((char *)&v131[11] + 3) = SessionClass::GetOption((int *)*dword_A8DA78); /*0x46e65f*/
            *(_DWORD *)((char *)&v131[12] + 3) = SessionClass::GetPlayerSide((int *)*dword_A8DA78); /*0x46e66a*/
            *(_DWORD *)((char *)&v131[13] + 3) = SessionClass::GetPlayerColor((SessionClass *)*dword_A8DA78); /*0x46e67a*/
            if ( dword_A8DA90[0] ) /*0x46e685*/
            {
              Network::SendToPlayer((int)&unk_A8E9C0, (int)v131, 455, 1, (wchar_t *)dword_A8DA90[0]); /*0x46e699*/
              Network::ReceiveLoop(&unk_A8E9C0); /*0x46e6a3*/
            }
          }
          v32 = 0; /*0x46e6a8*/
          v33 = (ObjectClass **)dword_A8DA90; /*0x46e6aa*/
          do /*0x46e6cb*/
          {
            if ( (unsigned __int8)IsKnownPointer(*v33) ) /*0x46e6b1*/
              *((_BYTE *)&g_GameModeOptionState + v32) = 0; /*0x46e6ba*/
            ++v33; /*0x46e6c1*/
            ++v32; /*0x46e6c4*/
          }
          while ( (int)v33 < (int)&dword_A8DAB0 ); /*0x46e6cb*/
          if ( !hWnd ) /*0x46e6cf*/
          {
            v4 = (HWND)Dialog::FindByHandle((Dialog *)0xBC6); /*0x46e6db*/
            if ( !v4 ) /*0x46e6df*/
              return 0; /*0x46e6df*/
          }
          Skirmish::FillPlayerNames((Skirmish *)v4); /*0x46e6e7*/
          Count::SetupAllCountriesLobby((Count *)v4); /*0x46e6ee*/
          v34 = dword_A8DA8C; /*0x46e6f3*/
          if ( dword_A8DA8C != (ObjectClass *)-1 ) /*0x46e6fc*/
          {
            v35 = GetResourceIDCSF(dword_A8DA8C); /*0x46e707*/
            v36 = GetLobbyPlayerColor((int)v34); /*0x46e709*/
            SetupSkirmishSpawnLocations(v4, v35, v36); /*0x46e713*/
          }
          for ( n = 0; n < 8; ++n ) /*0x46e718*/
          {
            if ( (ObjectClass *)n != v34 ) /*0x46e71c*/
            {
              v38 = GetResourceIDCSF((ObjectClass *)n); /*0x46e727*/
              v39 = GetLobbyPlayerColor(n); /*0x46e729*/
              SetupSkirmishSpawnLocations(v4, v38, v39); /*0x46e733*/
            }
          }
          goto LABEL_46; /*0x46e73c*/
        case 1745: /*0x46e4be*/
          EnableGameModeControls(hWnd, 0); /*0x46e747*/
          if ( byte_89E0A1 && (unsigned __int8)Settings::CheckString() ) /*0x46e755*/
            Game::SendCampaignOptions(); /*0x46e75e*/
          if ( !byte_89E05C ) /*0x46e76a*/
          {
            v40 = 0; /*0x46e775*/
            if ( (int)dword_A8D580 > 0 ) /*0x46e779*/
            {
              v41 = (const wchar_t **)&unk_89DF80; /*0x46e77b*/
              v42 = &stru_81AF8C.?[12]; /*0x46e780*/
              while ( 1 ) /*0x46e78d*/
              {
                v43 = *v41; /*0x46e78d*/
                nIDDlgItem = *v42; /*0x46e78f*/
                if ( !wcscmp((const wchar_t *)*dword_A8DA78, v43) ) /*0x46e797*/
                  break; /*0x46e797*/
                ++v40; /*0x46e7a8*/
                v42 += 6; /*0x46e7a9*/
                ++v41; /*0x46e7ac*/
                if ( v40 >= (int)dword_A8D580 ) /*0x46e7b1*/
                  goto LABEL_92; /*0x46e7b1*/
              }
              StringCSF = GetStringCSF(g_Str_TXT_READY, 0, g_Str_File_CampScor_cpp, 1346); /*0x46e7cb*/
              v45 = GetDlgItem(hWnd, nIDDlgItem); /*0x46e7d3*/
              SendMessageA(v45, 0x4B2u, 0, (LPARAM)StringCSF); /*0x46e7e2*/
            }
LABEL_92:
            v46 = GetDlgItem(hWnd, 1745); /*0x46e7e8*/
            EnableWindow(v46, 0); /*0x46e7f7*/
            *WindowLongA = (ErrorCode)1; /*0x46e806*/
            byte_89E05C = 1; /*0x46e80c*/
            InvalidateRect(hWnd, 0, 0); /*0x46e813*/
            return 0; /*0x46e825*/
          }
          v47 = 0; /*0x46e833*/
          if ( (int)dword_A8D580 <= 0 ) /*0x46e837*/
            goto LABEL_99; /*0x46e837*/
          hDlg = (HWND)&unk_89DF80; /*0x46e839*/
          v48 = &stru_81AF8C.?[12]; /*0x46e841*/
          break; /*0x46e841*/
        default:
          return 0;
      }
      while ( 1 ) /*0x46e84c*/
      {
        nIDDlgItem = *v48; /*0x46e84c*/
        if ( !wcscmp((const wchar_t *)*dword_A8DA78, *(const wchar_t **)hDlg) ) /*0x46e85c*/
          break; /*0x46e85c*/
        ++v47; /*0x46e871*/
        v48 += 6; /*0x46e872*/
        ++hDlg; /*0x46e87a*/
        if ( v47 >= (int)dword_A8D580 ) /*0x46e87e*/
          goto LABEL_99; /*0x46e87e*/
      }
      v49 = GetStringCSF(g_Str_TXT_WAITING, 0, g_Str_File_CampScor_cpp, 1363); /*0x46e898*/
      v50 = GetDlgItem(hWnd, nIDDlgItem); /*0x46e8a0*/
      SendMessageA(v50, 0x4B2u, 0, (LPARAM)v49); /*0x46e8ab*/
LABEL_99:
      v51 = GetStringCSF(aGuiContinue, 0, g_Str_File_CampScor_cpp, 1368); /*0x46e8b1*/
      v52 = GetDlgItem(hWnd, 1745); /*0x46e8cf*/
      SendMessageA(v52, 0x4B2u, 0, (LPARAM)v51); /*0x46e8da*/
      v53 = GetDlgItem(hWnd, 1472); /*0x46e8e8*/
      EnableWindow(v53, 1); /*0x46e8eb*/
      *WindowLongA = (ErrorCode)1; /*0x46e8fa*/
      byte_89E05C = 0; /*0x46e900*/
      InvalidateRect(hWnd, 0, 0); /*0x46e907*/
      return 0; /*0x46e910*/
    }
    else if ( (unsigned __int16)uIDEvent == 1697 ) /*0x46e0d8*/
    {
LABEL_30:
      SelectLobbyCountry(hWnd, (void *)(unsigned __int16)uIDEvent); /*0x46e349*/
      if ( (unsigned __int8)Settings::CheckString() ) /*0x46e350*/
      {
        Game::SendCampaignOptions(); /*0x46e359*/
      }
      else
      {
        v131[0] = 51; /*0x46e377*/
        strcpy((char *)&v131[1], unk_A8B380); /*0x46e388*/
        *(_DWORD *)((char *)&v131[11] + 3) = SessionClass::GetOption((int *)*dword_A8DA78); /*0x46e3a4*/
        *(_DWORD *)((char *)&v131[12] + 3) = SessionClass::GetPlayerSide((int *)*dword_A8DA78); /*0x46e3af*/
        *(_DWORD *)((char *)&v131[13] + 3) = SessionClass::GetPlayerColor((SessionClass *)*dword_A8DA78); /*0x46e3bf*/
        if ( dword_A8DA90[0] ) /*0x46e3ca*/
        {
          Network::SendToPlayer((int)&unk_A8E9C0, (int)v131, 455, 1, (wchar_t *)dword_A8DA90[0]); /*0x46e3de*/
          Network::ReceiveLoop(&unk_A8E9C0); /*0x46e3e8*/
        }
      }
      v16 = 0; /*0x46e3ed*/
      v17 = (ObjectClass **)dword_A8DA90; /*0x46e3ef*/
      do /*0x46e410*/
      {
        if ( (unsigned __int8)IsKnownPointer(*v17) ) /*0x46e3f6*/
          *((_BYTE *)&g_GameModeOptionState + v16) = 0; /*0x46e3ff*/
        ++v17; /*0x46e406*/
        ++v16; /*0x46e409*/
      }
      while ( (int)v17 < (int)&dword_A8DAB0 ); /*0x46e410*/
      if ( !hWnd ) /*0x46e414*/
      {
        v4 = (HWND)Dialog::FindByHandle((Dialog *)0xBC6); /*0x46e420*/
        if ( !v4 ) /*0x46e424*/
          return 0; /*0x46e424*/
      }
      Skirmish::FillPlayerNames((Skirmish *)v4); /*0x46e42c*/
      Count::SetupAllCountriesLobby((Count *)v4); /*0x46e433*/
      v18 = dword_A8DA8C; /*0x46e438*/
      if ( dword_A8DA8C != (ObjectClass *)-1 ) /*0x46e441*/
      {
        v19 = GetResourceIDCSF(dword_A8DA8C); /*0x46e44c*/
        v20 = GetLobbyPlayerColor((int)v18); /*0x46e44e*/
        SetupSkirmishSpawnLocations(v4, v19, v20); /*0x46e458*/
      }
      for ( ii = 0; ii < 8; ++ii ) /*0x46e45d*/
      {
        if ( (ObjectClass *)ii != v18 ) /*0x46e461*/
        {
          v22 = GetResourceIDCSF((ObjectClass *)ii); /*0x46e46c*/
          v23 = GetLobbyPlayerColor(ii); /*0x46e46e*/
          SetupSkirmishSpawnLocations(v4, v22, v23); /*0x46e478*/
        }
      }
LABEL_46:
      Lobby::SetupAllFactionSlots((Lobby *)v4); /*0x46e483*/
      Lobby::UpdateReadyIcons((Lobby *)v4); /*0x46e48c*/
      Lobby::EnableStartButton((Lobby *)v4); /*0x46e493*/
      return 0; /*0x46e49b*/
    }
    else
    {
      switch ( (__int16)uIDEvent ) /*0x46e0f7*/
      {
        case 1296: /*0x46e0f7*/
          goto LABEL_30;
        case 1314: /*0x46e0f7*/
          goto LABEL_48;
        case 1344: /*0x46e0f7*/
          ReadChatMessage(&v129, a4); /*0x46e109*/
          DeleteAndZero::Alt((DeleteAndZero *)&v129); /*0x46e112*/
          if ( HIWORD(uIDEvent) != 1281 ) /*0x46e120*/
            return 0; /*0x46e120*/
          v125 = 61680; /*0x46e13d*/
          nIDDlgItem = (int)Math::InitDegToRad; /*0x46e141*/
          v8 = GetDlgItem(hWnd, 1344); /*0x46e145*/
          SendMessageA(v8, 0x4B3u, 0x6Fu, (LPARAM)lParam); /*0x46e15d*/
          v140 = 0; /*0x46e166*/
          v9 = wcslen(lParam); /*0x46e179*/
          v10 = GetDlgItem(hWnd, 1344); /*0x46e181*/
          SendMessageA(v10, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x46e190*/
          InvalidateRect(hWnd, 0, 1); /*0x46e197*/
          if ( v9 <= 2 ) /*0x46e1a0*/
            return 0; /*0x46e1a0*/
          v11 = CharToWideString(unk_A8B380); /*0x46e1b3*/
          Dialog::ShowMessage(nIDDlgItem, (size_t)g_Str_Trace___s_, v11, lParam); /*0x46e1c3*/
          memset(v131, 0, sizeof(v131)); /*0x46e1d7*/
          v132 = 0; /*0x46e1d9*/
          v133 = 0; /*0x46e1db*/
          v131[0] = 12; /*0x46e1e6*/
          strcpy((char *)&v131[1], unk_A8B380); /*0x46e201*/
          wcscpy((wchar_t *)&v131[12], lParam); /*0x46e213*/
          v131[68] = v125; /*0x46e224*/
          v12 = WideString::Hash((wchar_t *)&stru_A8D600.Network_field_0x10); /*0x46e22b*/
          v13 = dword_A8DA84; /*0x46e230*/
          v14 = 1; /*0x46e236*/
          v131[69] = v12; /*0x46e23d*/
          if ( dword_A8DA84 <= 1 ) /*0x46e244*/
            return 0; /*0x46e244*/
          do /*0x46e27b*/
          {
            if ( dword_A8DA78[v14] ) /*0x46e250*/
            {
              Network::SendToPlayer((int)&unk_A8E9C0, (int)v131, 455, 1, (wchar_t *)dword_A8DA78[v14]); /*0x46e269*/
              Network::ReceiveLoop(&unk_A8E9C0); /*0x46e273*/
            }
            ++v14; /*0x46e278*/
          }
          while ( v14 < v13 ); /*0x46e27b*/
          result = 0; /*0x46e280*/
          break; /*0x46e289*/
        case 1472: /*0x46e0f7*/
          *WindowLongA = (ErrorCode)2; /*0x46e290*/
          byte_89E04C = 0; /*0x46e29e*/
          if ( *(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4 ) /*0x46e2aa*/
          {
            memset(v131, 0, sizeof(v131)); /*0x46e2bb*/
            v132 = 0; /*0x46e2c3*/
            v133 = 0; /*0x46e2c5*/
            v131[0] = 36; /*0x46e2c6*/
            strcpy((char *)&v131[1], ToWideStringChar((char *)*dword_A8DA78)); /*0x46e2ef*/
            for ( jj = 1; jj < dword_A8DA84; ++jj ) /*0x46e304*/
            {
              Network::SendToPlayer((int)&unk_A8E9C0, (int)v131, 47, 1, (wchar_t *)dword_A8DA78[jj]); /*0x46e31e*/
              Network::ReceiveLoop(&unk_A8E9C0); /*0x46e328*/
            }
          }
          result = 1; /*0x46e33a*/
          break; /*0x46e346*/
        default:
          return 0;
      }
    }
    return result; /*0x46e346*/
  }
  if ( a2 == 272 ) /*0x46e039*/
  {
LABEL_161:
    v79 = GetDlgItem(hWnd, 1918); /*0x46ee17*/
    SendMessageA(v79, 0x4B2u, 0, 11055906); /*0x46ee32*/
    v80 = dword_89E050 / 60; /*0x46ee4d*/
    if ( &v121 != (ObjectClass **)-512 ) /*0x46ee58*/
    {
      if ( v80 / 3600 > 99 ) /*0x46ee74*/
        v80 = 359999; /*0x46ee76*/
      v81 = v80 / 3600; /*0x46ee8e*/
      v82 = 720 * (4 * (v80 / -3600) - v80 / 3600) + v80; /*0x46eea7*/
      v120 = v82 % 60; /*0x46eec2*/
      v118 = v82 / 60; /*0x46eec3*/
      v83 = GetStringCSF((wchar_t *)&stru_81AF8C.IsAnimatedTiberium, 0, g_Str_File_CampScor_cpp, 169); /*0x46eed6*/
      swprintf(Buffer, (const size_t)v83, (const wchar_t *const)v81, v118, v120); /*0x46eee4*/
    }
    v84 = GetDlgItem(hWnd, 1002); /*0x46eef2*/
    SendMessageA(v84, 0x4B2u, 0, (LPARAM)Buffer); /*0x46ef04*/
    v85 = (ObjectClass **)dword_A8DA90; /*0x46ef0b*/
    g_GameModeOptionState = 16843009; /*0x46ef10*/
    hDlg = 0; /*0x46ef15*/
    dword_89E004 = 16843009; /*0x46ef1d*/
    do /*0x46ef4a*/
    {
      if ( (unsigned __int8)IsKnownPointer(*v85) ) /*0x46ef24*/
        *((_BYTE *)&g_GameModeOptionState + (_DWORD)hDlg) = 0; /*0x46ef31*/
      ++v85; /*0x46ef3c*/
      hDlg = (HWND)((char *)hDlg + 1); /*0x46ef46*/
    }
    while ( (int)v85 < (int)&dword_A8DAB0 ); /*0x46ef4a*/
    nIDDlgItem = 0; /*0x46ef51*/
    if ( (int)dword_A8D580 > 0 ) /*0x46ef5b*/
    {
      WindowLongA = (ErrorCode *)&unk_89DF80; /*0x46ef61*/
      hDlg = (HWND)&stru_81AF8C.?[8]; /*0x46ef69*/
      do /*0x46f27e*/
      {
        v86 = Color::ConvertToRGB( /*0x46ef8e*/
                (Color *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)(*(_DWORD *)WindowLongA + 40))
                        + 776),
                (int)&v130);
        LOWORD(v128) = *(_WORD *)v86; /*0x46ef96*/
        BYTE2(v128) = *(_BYTE *)(v86 + 2); /*0x46ef9e*/
        v87 = (unsigned __int8)v128 | (*(unsigned __int16 *)((char *)&v128 + 1) << 8); /*0x46efd4*/
        v88 = (LPARAM)*WindowLongA; /*0x46efd6*/
        v123 = *((_DWORD *)hDlg - 1); /*0x46efd9*/
        v125 = v88; /*0x46efdd*/
        v89 = GetDlgItem(hWnd, v123); /*0x46efe1*/
        SendMessageA(v89, 0x4B2u, 0, v125); /*0x46eff0*/
        v90 = GetDlgItem(hWnd, v123); /*0x46eff8*/
        SendMessageA(v90, 0x498u, 0, v87); /*0x46f003*/
        v91 = *WindowLongA; /*0x46f00f*/
        v123 = *(_DWORD *)hDlg; /*0x46f011*/
        swprintf(v137, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(*(_DWORD *)&v91 + 64)); /*0x46f026*/
        v92 = GetDlgItem(hWnd, v123); /*0x46f034*/
        SendMessageA(v92, 0x4B2u, 0, (LPARAM)v137); /*0x46f046*/
        v93 = GetDlgItem(hWnd, v123); /*0x46f04e*/
        SendMessageA(v93, 0x498u, 0, v87); /*0x46f059*/
        v123 = *((_DWORD *)hDlg + 1); /*0x46f062*/
        swprintf(v135, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(*(_DWORD *)WindowLongA + 48)); /*0x46f07d*/
        v94 = GetDlgItem(hWnd, v123); /*0x46f08b*/
        SendMessageA(v94, 0x4B2u, 0, (LPARAM)v135); /*0x46f09d*/
        v95 = GetDlgItem(hWnd, v123); /*0x46f0a5*/
        SendMessageA(v95, 0x498u, 0, v87); /*0x46f0b0*/
        v96 = *WindowLongA; /*0x46f0bd*/
        v123 = *((_DWORD *)hDlg + 2); /*0x46f0bf*/
        swprintf(v138, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(*(_DWORD *)&v96 + 80)); /*0x46f0d4*/
        v97 = GetDlgItem(hWnd, v123); /*0x46f0e2*/
        SendMessageA(v97, 0x4B2u, 0, (LPARAM)v138); /*0x46f0f4*/
        v98 = GetDlgItem(hWnd, v123); /*0x46f0fc*/
        SendMessageA(v98, 0x498u, 0, v87); /*0x46f107*/
        v99 = *WindowLongA; /*0x46f114*/
        v123 = *((_DWORD *)hDlg + 3); /*0x46f116*/
        swprintf(v136, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(*(_DWORD *)&v99 + 96)); /*0x46f12b*/
        v100 = GetDlgItem(hWnd, v123); /*0x46f139*/
        SendMessageA(v100, 0x4B2u, 0, (LPARAM)v136); /*0x46f14b*/
        v101 = GetDlgItem(hWnd, v123); /*0x46f153*/
        SendMessageA(v101, 0x498u, 0, v87); /*0x46f15e*/
        v127 = 0; /*0x46f160*/
        v125 = 0; /*0x46f165*/
        v123 = (int)dword_A8DA90; /*0x46f16d*/
        while ( wcscmp(*(const wchar_t **)v123, *(const wchar_t **)WindowLongA) ) /*0x46f18d*/
        {
          ++v125; /*0x46f194*/
          v123 += 4; /*0x46f1a4*/
          if ( v123 >= (int)&dword_A8DAB0 ) /*0x46f1a8*/
          {
            v102 = v127; /*0x46f1aa*/
            goto LABEL_176; /*0x46f1ae*/
          }
        }
        v102 = 1; /*0x46f1b0*/
LABEL_176:
        v123 = *((_DWORD *)hDlg + 4); /*0x46f1b2*/
        if ( v102 ) /*0x46f1bf*/
        {
          v125 = (LPARAM)GetStringCSF(g_Str_TXT_WAITING, 0, g_Str_File_CampScor_cpp, 1213); /*0x46f1d7*/
          v103 = GetDlgItem(hWnd, v123); /*0x46f1e1*/
          SendMessageA(v103, 0x4B2u, 0, v125); /*0x46f1f0*/
        }
        else if ( !*((_BYTE *)&g_GameModeOptionState + v125) ) /*0x46f1f8*/
        {
          v125 = (LPARAM)GetStringCSF(aTxtAborted, 0, g_Str_File_CampScor_cpp, 1216); /*0x46f218*/
          v104 = GetDlgItem(hWnd, v123); /*0x46f222*/
          SendMessageA(v104, 0x4B2u, 0, v125); /*0x46f231*/
          v105 = GetDlgItem(hWnd, 1745); /*0x46f23b*/
          EnableWindow(v105, 0); /*0x46f23e*/
        }
        v106 = GetDlgItem(hWnd, v123); /*0x46f24a*/
        SendMessageA(v106, 0x498u, 0, v87); /*0x46f255*/
        v59 = ++nIDDlgItem < (int)dword_A8D580; /*0x46f270*/
        ++WindowLongA; /*0x46f276*/
        hDlg += 6; /*0x46f27a*/
      }
      while ( v59 ); /*0x46f27e*/
    }
    if ( (unsigned __int8)Settings::CheckString() ) /*0x46f284*/
    {
      v107 = GetDlgItem(hWnd, 1842); /*0x46f293*/
      if ( v107 ) /*0x46f297*/
        EnableWindow(v107, 1); /*0x46f29c*/
    }
    SetDialogPlayerName(hWnd, (int)dword_A8B23C); /*0x46f2aa*/
    if ( byte_89E05D ) /*0x46f2b8*/
    {
      CampaignScore::LookupDialogHash((CampaignScore *)hWnd); /*0x46f2ba*/
      Dialog::ShowPlayerName((Dialog *)hWnd); /*0x46f2c1*/
      Session::StartGame((Session *)hWnd); /*0x46f2c8*/
    }
    else
    {
      CampaignScore::FindDialogTemplate((CampaignScore *)hWnd); /*0x46f2cf*/
    }
    byte_89E05C = 0; /*0x46f2d9*/
    ResetLobbyFactionTable((int)dword_A8B230[127].vtable2); /*0x46f2e6*/
    return 0; /*0x46f2f7*/
  }
  if ( a2 != 2 ) /*0x46e042*/
  {
    if ( a2 == 15 ) /*0x46e047*/
    {
      if ( g_UIControlState ) /*0x46e055*/
        Skirmish::RenderPreview(g_UIControlState, hWnd); /*0x46e058*/
      Dialog::StopBink((Dialog *)hWnd); /*0x46e05f*/
      ValidateRect(hWnd, 0); /*0x46e067*/
      return 0; /*0x46e079*/
    }
    return 0; /*0x46f4c9*/
  }
  v7 = g_UIControlState; /*0x46e07c*/
  if ( g_UIControlState ) /*0x46e084*/
  {
    ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x46e088*/
    __3_YAXPAX_Z(v7); /*0x46e08e*/
    g_UIControlState = 0; /*0x46e096*/
  }
  KillTimer(hWnd, 1u); /*0x46e0a3*/
  return 0; /*0x46e06d*/
}


// ==== 0x0046F5E0  ErrorCode::Map  this=ErrorCode  sig=csp ====
int __thiscall ErrorCode::Map(ErrorCode *this)
{
  if ( this )
    return this != (ErrorCode *)1 ? -1 : 1042;
  else
    return 1041; /*0x46f5e6*/
}



// ==== 0x0046F600  Skirmish::FillPlayerNames  this=Skirmish  sig=csp ====
int __thiscall Skirmish::FillPlayerNames(Skirmish *this)
{
  int result; // eax
  int v2; // ebx
  HWND v3; // esi
  LPARAM v4; // edi
  LRESULT v5; // ebx
  int i; // [esp+14h] [ebp-8h]
  HWND DlgItem; // [esp+18h] [ebp-4h]

  result = 0; /*0x46f60b*/
  for ( i = 0; i < 8; ++i ) /*0x46f613*/
  {
    if ( result ) /*0x46f619*/
    {
      if ( result != 1 ) /*0x46f625*/
        goto LABEL_9; /*0x46f625*/
      v2 = 1042; /*0x46f62b*/
    }
    else
    {
      v2 = 1041; /*0x46f61b*/
    }
    DlgItem = GetDlgItem((HWND)this, v2); /*0x46f643*/
    if ( ShowWindow(DlgItem, 0) ) /*0x46f647*/
    {
      v3 = GetDlgItem((HWND)this, v2); /*0x46f65e*/
      v4 = dword_A8DA90[i]; /*0x46f664*/
      if ( v4 ) /*0x46f66d*/
      {
        SendDlgItemMessageA((HWND)this, v2, 0x14Bu, 0, 0); /*0x46f67e*/
        v5 = SendMessageA(v3, 0x4C2u, 0, v4); /*0x46f68f*/
        SendMessageA(v3, 0x151u, v5, v4); /*0x46f699*/
        SendMessageA(v3, 0x14Eu, v5, 0); /*0x46f6a4*/
        ShowWindow(DlgItem, 5); /*0x46f6ad*/
      }
    }
LABEL_9:
    result = i + 1; /*0x46f6b3*/
  }
  return result; /*0x46f6c5*/
}



// ==== 0x0046F6D0  Count::SetupAllCountriesLobby  this=Count  sig=csp ====
BOOL __thiscall Count::SetupAllCountriesLobby(Count *this)
{
  ObjectClass *v1; // ecx
  int **v2; // esi
  int ResourceID2CSF; // ebp
  BOOL result; // eax
  int *v5; // ebx
  int v6; // edi
  int PlayerSide; // esi
  int **v8; // [esp+10h] [ebp-10h]
  int v10; // [esp+18h] [ebp-8h]
  HWND hWnd; // [esp+1Ch] [ebp-4h]

  v1 = 0; /*0x46f6da*/
  v2 = (int **)dword_A8DA90; /*0x46f6dc*/
  v10 = 0; /*0x46f6e2*/
  v8 = (int **)dword_A8DA90; /*0x46f6e6*/
  do /*0x46f7ff*/
  {
    ResourceID2CSF = GetResourceID2CSF(v1); /*0x46f6ef*/
    hWnd = GetDlgItem((HWND)this, ResourceID2CSF); /*0x46f700*/
    result = ShowWindow(hWnd, 0); /*0x46f704*/
    if ( result ) /*0x46f70c*/
    {
      v5 = *v2; /*0x46f718*/
      v6 = -2; /*0x46f71c*/
      if ( dword_A8B23C && (*(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4) ) /*0x46f730*/
        v6 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 10))(dword_A8B23C); /*0x46f737*/
      if ( (unsigned __int8)Player::IsObserver((Player *)v5) ) /*0x46f73b*/
      {
        PlayerSide = (int)*(v2 - 2557); /*0x46f744*/
      }
      else if ( v5 == (int *)g_HouseClass_ObserverFlags ) /*0x46f752*/
      {
        PlayerSide = v6; /*0x46f754*/
      }
      else if ( v5 == (int *)g_Lobby_PlayerCount ) /*0x46f75e*/
      {
        PlayerSide = v6; /*0x46f760*/
      }
      else if ( v5 == (int *)g_Lobby_PlayerReady ) /*0x46f76a*/
      {
        PlayerSide = v6; /*0x46f76c*/
      }
      else if ( v5 == (int *)g_Lobby_MaxPlayers ) /*0x46f776*/
      {
        PlayerSide = -3; /*0x46f778*/
      }
      else
      {
        PlayerSide = SessionClass::GetPlayerSide(v5); /*0x46f786*/
      }
      if ( dword_A8B23C /*0x46f795*/
        && !(*((unsigned __int8 (__thiscall **)(ObjectClass *, int))dword_A8B23C->AbstractClass + 7))(
              dword_A8B23C,
              PlayerSide) )
      {
        PlayerSide = v6; /*0x46f79e*/
        if ( (unsigned __int8)Player::IsObserver((Player *)v5) ) /*0x46f7a0*/
        {
          *(v8 - 2557) = (int *)v6; /*0x46f7ad*/
        }
        else if ( (unsigned __int8)IsKnownPointer((ObjectClass *)v5) ) /*0x46f7b7*/
        {
          SessionClass::SetPlayerOption(*v8, v6); /*0x46f7c7*/
        }
      }
      SetupLobbyCountryCombo((HWND)this, ResourceID2CSF, PlayerSide); /*0x46f7d3*/
      result = ShowWindow(hWnd, 5); /*0x46f7df*/
      v2 = v8; /*0x46f7e5*/
    }
    ++v2; /*0x46f7ed*/
    v1 = (ObjectClass *)++v10; /*0x46f7f0*/
    v8 = v2; /*0x46f7fb*/
  }
  while ( (int)v2 < (int)&dword_A8DAB0 ); /*0x46f7ff*/
  return result; /*0x46f805*/
}



// ==== 0x0046F810  GetLobbyPlayerColor  this=ObjectClass  sig=ida-proto ====
int __fastcall Lobby_GetPlayerColor(int a1)
{
  wchar_t *v2; // esi

  v2 = (wchar_t *)*(&dword_A8DA90 + a1); /*0x46f814*/
  if ( Player::IsObserver(v2) ) /*0x46f81d*/
    return MEMORY[0xA8B2BC][a1]; /*0x46f826*/
  if ( v2 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x46f836*/
    return -2; /*0x46f839*/
  if ( v2 == (wchar_t *)g_Lobby_PlayerCount ) /*0x46f846*/
    return -2; /*0x46f849*/
  if ( v2 == g_Lobby_PlayerReady ) /*0x46f856*/
    return -2; /*0x46f859*/
  if ( v2 == (wchar_t *)g_Lobby_MaxPlayers ) /*0x46f866*/
    return -2; /*0x46f869*/
  return SessionClass::GetPlayerColor((int)v2); /*0x46f82d*/
}



// ==== 0x0046F880  GetHouseClassSideIndex  this=ObjectClass  sig=ida-proto ====
int __fastcall HouseClass_GetSideIndex(int a1)
{
  wchar_t *v2; // esi

  v2 = (wchar_t *)*(&dword_A8DA90 + a1); /*0x46f884*/
  if ( Player::IsObserver(v2) ) /*0x46f88d*/
    return MEMORY[0xA8B2DC][a1]; /*0x46f896*/
  if ( v2 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x46f8a6*/
    return -2; /*0x46f8a9*/
  if ( v2 == (wchar_t *)g_Lobby_PlayerCount ) /*0x46f8b6*/
    return -2; /*0x46f8b9*/
  if ( v2 == g_Lobby_PlayerReady ) /*0x46f8c6*/
    return -2; /*0x46f8c9*/
  if ( v2 == (wchar_t *)g_Lobby_MaxPlayers ) /*0x46f8d6*/
    return -2; /*0x46f8d9*/
  return SessionClass::GetOption((int)v2); /*0x46f89d*/
}



// ==== 0x0046F8F0  Skirmish::SetupAllSpawnLocations  this=Skirmish  sig=csp ====
void __thiscall Skirmish::SetupAllSpawnLocations(Skirmish *this)
{
  ObjectClass *v1; // ebp
  int ResourceIDCSF; // eax
  SessionClass *v4; // esi
  int v5; // edi
  int PlayerColor; // eax
  ObjectClass *v7; // ebx
  int *v8; // edi
  int v9; // eax
  SessionClass *v10; // esi
  int v11; // ebp
  int v12; // eax
  ObjectClass *v14; // [esp+14h] [ebp-4h]

  v1 = dword_A8DA8C; /*0x46f8f5*/
  v14 = dword_A8DA8C; /*0x46f906*/
  if ( dword_A8DA8C != (ObjectClass *)-1 ) /*0x46f90a*/
  {
    ResourceIDCSF = GetResourceIDCSF(dword_A8DA8C); /*0x46f90e*/
    v4 = (SessionClass *)dword_A8DA90[(_DWORD)v1]; /*0x46f913*/
    v5 = ResourceIDCSF; /*0x46f91a*/
    if ( (unsigned __int8)Player::IsObserver((Player *)v4) ) /*0x46f91e*/
    {
      PlayerColor = *(_DWORD *)&stru_A8B250.__pad_0[4 * (_DWORD)v1 + 108]; /*0x46f927*/
    }
    else if ( v4 == (SessionClass *)g_HouseClass_ObserverFlags ) /*0x46f936*/
    {
      PlayerColor = -2; /*0x46f938*/
    }
    else if ( v4 == (SessionClass *)g_Lobby_PlayerCount ) /*0x46f945*/
    {
      PlayerColor = -2; /*0x46f947*/
    }
    else if ( v4 == (SessionClass *)g_Lobby_PlayerReady ) /*0x46f954*/
    {
      PlayerColor = -2; /*0x46f956*/
    }
    else if ( v4 == (SessionClass *)g_Lobby_MaxPlayers ) /*0x46f963*/
    {
      PlayerColor = -2; /*0x46f965*/
    }
    else
    {
      PlayerColor = SessionClass::GetPlayerColor(v4); /*0x46f96e*/
    }
    SetupSkirmishSpawnLocations((HWND)this, v5, PlayerColor); /*0x46f978*/
  }
  v7 = 0; /*0x46f97d*/
  v8 = (int *)&stru_A8B250.__pad_0[108]; /*0x46f97f*/
  do /*0x46fa03*/
  {
    if ( v7 != v1 ) /*0x46f986*/
    {
      v9 = GetResourceIDCSF(v7); /*0x46f98a*/
      v10 = (SessionClass *)v8[2549]; /*0x46f98f*/
      v11 = v9; /*0x46f995*/
      if ( (unsigned __int8)Player::IsObserver((Player *)v10) ) /*0x46f999*/
      {
        v12 = *v8; /*0x46f9a2*/
      }
      else if ( v10 == (SessionClass *)g_HouseClass_ObserverFlags ) /*0x46f9ac*/
      {
        v12 = -2; /*0x46f9ae*/
      }
      else if ( v10 == (SessionClass *)g_Lobby_PlayerCount ) /*0x46f9bb*/
      {
        v12 = -2; /*0x46f9bd*/
      }
      else if ( v10 == (SessionClass *)g_Lobby_PlayerReady ) /*0x46f9ca*/
      {
        v12 = -2; /*0x46f9cc*/
      }
      else if ( v10 == (SessionClass *)g_Lobby_MaxPlayers ) /*0x46f9d9*/
      {
        v12 = -2; /*0x46f9db*/
      }
      else
      {
        v12 = SessionClass::GetPlayerColor(v10); /*0x46f9e4*/
      }
      SetupSkirmishSpawnLocations((HWND)this, v11, v12); /*0x46f9f0*/
      v1 = v14; /*0x46f9f5*/
    }
    ++v8; /*0x46f9f9*/
    v7 = (ObjectClass *)((char *)v7 + 1); /*0x46f9fc*/
  }
  while ( (int)v8 < (int)&stru_A8B250.__pad_0[140] ); /*0x46fa03*/
}



// ==== 0x0046FA20  Lobby::UpdateReadyIcons  this=Lobby  sig=csp ====
int __thiscall Lobby::UpdateReadyIcons(Lobby *this)
{
  int v2; // ebp
  int result; // eax
  int v4; // esi
  ObjectClass *v5; // ecx
  int v6; // eax
  HWND v7; // edx
  int v8; // [esp+10h] [ebp-4h]

  v2 = HashTable::Find(&g_DialogHashTable, (const char *)stru_81AF8C.?[4], 0); /*0x46fa3f*/
  result = HashTable::Find(&g_DialogHashTable, (const char *)stru_81AF8C.?[5], 0); /*0x46fa49*/
  v4 = 0; /*0x46fa54*/
  v8 = result; /*0x46fa56*/
  do /*0x46fab0*/
  {
    v5 = (ObjectClass *)dword_A8DA90[v4]; /*0x46fa5a*/
    if ( v5 ) /*0x46fa63*/
    {
      result = IsKnownPointer(v5); /*0x46fa65*/
      if ( (_BYTE)result ) /*0x46fa6c*/
      {
        if ( v4 ) /*0x46fa70*/
        {
          if ( v4 != 1 ) /*0x46fa7c*/
            goto LABEL_15; /*0x46fa7c*/
          v6 = 1747; /*0x46fa7e*/
        }
        else
        {
          v6 = 1746; /*0x46fa72*/
        }
        result = (int)GetDlgItem((HWND)this, v6); /*0x46fa85*/
        if ( result ) /*0x46fa8b*/
        {
          if ( *((_BYTE *)&g_GameModeOptionState + v4) ) /*0x46fa8d*/
          {
            if ( v4 ) /*0x46fa99*/
              v7 = (HWND)v8; /*0x46fa9f*/
            else
              v7 = (HWND)v2; /*0x46fa9b*/
          }
          else
          {
            v7 = 0; /*0x46faa5*/
          }
          result = (int)CacheDialogInvalidate((HWND)result, v7); /*0x46faa7*/
        }
      }
    }
LABEL_15:
    ++v4; /*0x46faac*/
  }
  while ( v4 < 8 ); /*0x46fab0*/
  return result; /*0x46fab2*/
}



// ==== 0x0046FAC0  Lobby::SetupAllFactionSlots  this=Lobby  sig=csp ====
int __thiscall Lobby::SetupAllFactionSlots(Lobby *this)
{
  ObjectClass *v1; // ebx
  int *v2; // edi
  int ResourceID3CSF; // eax
  int *v4; // esi
  int v5; // ebp
  int Option; // eax
  int result; // eax

  v1 = 0; /*0x46fac9*/
  v2 = (int *)&stru_A8B250.__pad_0[140]; /*0x46facb*/
  do /*0x46fb47*/
  {
    ResourceID3CSF = GetResourceID3CSF(v1); /*0x46fad2*/
    v4 = (int *)v2[2541]; /*0x46fad7*/
    v5 = ResourceID3CSF; /*0x46fadd*/
    if ( (unsigned __int8)Player::IsObserver((Player *)v4) ) /*0x46fae1*/
    {
      Option = *v2; /*0x46faea*/
    }
    else if ( v4 == (int *)g_HouseClass_ObserverFlags ) /*0x46faf4*/
    {
      Option = -2; /*0x46faf6*/
    }
    else if ( v4 == (int *)g_Lobby_PlayerCount ) /*0x46fb03*/
    {
      Option = -2; /*0x46fb05*/
    }
    else if ( v4 == (int *)g_Lobby_PlayerReady ) /*0x46fb12*/
    {
      Option = -2; /*0x46fb14*/
    }
    else if ( v4 == (int *)g_Lobby_MaxPlayers ) /*0x46fb21*/
    {
      Option = -2; /*0x46fb23*/
    }
    else
    {
      Option = SessionClass::GetOption(v4); /*0x46fb2c*/
    }
    result = SetupLobbyFactionSlots((HWND)this, v5, Option); /*0x46fb38*/
    ++v2; /*0x46fb3d*/
    v1 = (ObjectClass *)((char *)v1 + 1); /*0x46fb40*/
  }
  while ( (int)v2 < (int)&stru_A8B250.__pad_0[172] ); /*0x46fb47*/
  return result; /*0x46fb49*/
}



// ==== 0x0046FB50  Lobby::EnableStartButton  this=Lobby  sig=csp ====
int __thiscall Lobby::EnableStartButton(Lobby *this)
{
  HWND DlgItem; // esi
  int result; // eax
  HWND v4; // edi

  DlgItem = GetDlgItem((HWND)this, 1745); /*0x46fb63*/
  result = (int)GetDlgItem((HWND)this, 1472); /*0x46fb6b*/
  v4 = (HWND)result; /*0x46fb6f*/
  if ( DlgItem ) /*0x46fb71*/
  {
    if ( dword_A8DA84 >= (int)dword_A8D580 ) /*0x46fb80*/
    {
      if ( *((_BYTE *)&g_GameModeOptionState + (_DWORD)dword_A8DA8C) ) /*0x46fba0*/
        return EnableWindow(DlgItem, 0); /*0x46fbad*/
      else
        return EnableWindow(DlgItem, 1); /*0x46fbba*/
    }
    else
    {
      result = EnableWindow(DlgItem, 0); /*0x46fb8b*/
      if ( v4 ) /*0x46fb8f*/
        return EnableWindow(v4, 1); /*0x46fb94*/
    }
  }
  return result; /*0x46fb96*/
}



// ==== 0x0046FC00  CampaignScore::ProcessScreen  this=CampaignScore  sig=csp ====
void __userpurge CampaignScore::ProcessScreen(
        int ResourceID3@<ebp>,
        int a2,
        _BYTE *Block,
        int a4,
        __int16 a5,
        int a6,
        int a7,
        int a8,
        char a9,
        int a10,
        wchar_t *Source)
{
  _BYTE *v12; // edi
  int v13; // edx
  int *v14; // eax
  signed int v15; // esi
  _DWORD *v16; // ecx
  char *v17; // eax
  size_t v18; // edx
  HWND Dialog; // eax
  Dialog *v20; // esi
  int i; // esi
  Skirmish *v22; // eax
  Count *v23; // edi
  int j; // esi
  int HouseClassSideIndex; // eax
  int v26; // eax
  bool v27; // zf
  int k; // esi
  int m; // eax
  int n; // esi
  signed int v31; // edi
  char **v32; // ebp
  int v33; // esi
  wchar_t *StringCSF; // edi
  HWND DlgItem; // eax
  char **v36; // edi
  Skirmish *v37; // eax
  Count *v38; // edi
  int ii; // esi
  int v40; // eax
  int jj; // eax
  int kk; // esi
  int nn; // eax
  signed int v44; // edi
  char **v45; // ebp
  Lobby *v46; // ebx
  char **v47; // edi
  int v48; // esi
  wchar_t *v49; // edi
  HWND v50; // eax
  int v51; // edi
  int v52; // eax
  Skirmish *v53; // eax
  Count *v54; // edi
  int i2; // esi
  int v56; // eax
  HWND v57; // eax
  HWND v58; // eax
  wchar_t *v59; // eax
  signed int v60; // edi
  char **v61; // ebp
  int v62; // esi
  wchar_t *v63; // edi
  HWND v64; // eax
  char **v65; // edi
  char *v66; // eax
  int v67; // edi
  ObjectClass **v68; // esi
  Count *v69; // esi
  ErrorCode *v70; // ecx
  int v71; // eax
  int v72; // edi
  HWND v73; // esi
  LRESULT v74; // edi
  bool v75; // cc
  HWND v76; // eax
  int i3; // esi
  int v78; // edi
  ObjectClass **v79; // esi
  Count *v80; // ebx
  ErrorCode *v81; // ecx
  int v82; // eax
  int v83; // edi
  HWND v84; // esi
  LRESULT v85; // edi
  int i4; // esi
  int ResourceID3CSF; // edi
  int v88; // eax
  int mm; // esi
  int i1; // esi
  char *v91; // [esp-4h] [ebp-918h]
  LRESULT (__stdcall *v92)(HWND, UINT, WPARAM, LPARAM); // [esp-4h] [ebp-918h]
  ObjectClass *v93; // [esp+0h] [ebp-914h]
  ObjectClass *v94; // [esp+0h] [ebp-914h]
  char v95; // [esp+13h] [ebp-901h]
  HWND hDlg; // [esp+14h] [ebp-900h]
  int *v97; // [esp+18h] [ebp-8FCh]
  int *v98; // [esp+18h] [ebp-8FCh]
  int v99; // [esp+1Ch] [ebp-8F8h]
  int v100; // [esp+1Ch] [ebp-8F8h]
  HWND v101; // [esp+20h] [ebp-8F4h]
  LONG dwNewLong; // [esp+24h] [ebp-8F0h] BYREF
  HWND hWnd; // [esp+28h] [ebp-8ECh]
  int v104[113]; // [esp+2Ch] [ebp-8E8h] BYREF
  __int16 v105; // [esp+1F0h] [ebp-724h]
  char v106; // [esp+1F2h] [ebp-722h]
  int v107[113]; // [esp+1F4h] [ebp-720h] BYREF
  __int16 v108; // [esp+3B8h] [ebp-55Ch]
  char v109; // [esp+3BAh] [ebp-55Ah]
  int v110[113]; // [esp+3BCh] [ebp-558h] BYREF
  __int16 v111; // [esp+580h] [ebp-394h]
  char v112; // [esp+582h] [ebp-392h]
  int v113[113]; // [esp+584h] [ebp-390h] BYREF
  __int16 v114; // [esp+748h] [ebp-1CCh]
  char v115; // [esp+74Ah] [ebp-1CAh]
  int v116[113]; // [esp+74Ch] [ebp-1C8h] BYREF
  __int16 v117; // [esp+910h] [ebp-4h]
  char v118; // [esp+912h] [ebp-2h]

  byte_89E05D = a9; /*0x46fc21*/
  dword_89E054 = a6; /*0x46fc2e*/
  dword_89E058 = 0; /*0x46fc42*/
  dword_89E050 = a8; /*0x46fc48*/
  stru_81AF8C.?[6] = a10; /*0x46fc4e*/
  v95 = 0; /*0x46fc53*/
  wcscpy(&word_89E060, Source); /*0x46fc57*/
  v12 = Block; /*0x46fc61*/
  v13 = dword_89E054; /*0x46fc76*/
  g_GameModeOptionState = 0; /*0x46fc7f*/
  dword_89E004 = 0; /*0x46fc86*/
  if ( dword_89E054 > 0 ) /*0x46fc8b*/
  {
    v14 = (int *)&unk_89DF80; /*0x46fc8d*/
    do /*0x46fc9f*/
    {
      ResourceID3 = *(int *)((char *)v14 + Block - (_BYTE *)&unk_89DF80); /*0x46fc96*/
      *v14++ = ResourceID3; /*0x46fc99*/
      --v13; /*0x46fc9e*/
    }
    while ( v13 ); /*0x46fc9f*/
  }
  sub_46DA70(v93); /*0x46fca3*/
  v15 = dword_A8D580; /*0x46fca8*/
  if ( (int)dword_A8D580 > 0 ) /*0x46fcb0*/
  {
    v16 = &unk_89DF80; /*0x46fcb2*/
    v17 = (char *)&unk_A8D1FC; /*0x46fcb7*/
    v18 = dword_A8D580; /*0x46fcbc*/
    do /*0x46fcc7*/
    {
      *v16 = v17; /*0x46fcbe*/
      v17 += 112; /*0x46fcc0*/
      ++v16; /*0x46fcc3*/
      --v18; /*0x46fcc6*/
    }
    while ( v18 ); /*0x46fcc7*/
  }
  if ( v15 > 1 ) /*0x46fccc*/
    qsort(&unk_89DF80, v15, 4u, Compare::Field96); /*0x46fcdb*/
  CampaignScore::LoadCampaignScoreAssetsGame((CampaignScore *)dword_A8B230[374].NeedsSaveOrLink); /*0x46fcef*/
  Screen::Capture(1, 0, 0, ResourceID3); /*0x46fcf8*/
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x46fd04*/
    Network::Disconnect((Network *)&unk_A8E9C0); /*0x46fd0b*/
  Dialog = (HWND)CreateDialog(0xBC6u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))CampaignScore::DialogProc, 0); /*0x46fd1b*/
  v20 = (Dialog *)Dialog; /*0x46fd20*/
  dwNewLong = 0; /*0x46fd22*/
  hDlg = Dialog; /*0x46fd28*/
  if ( Dialog ) /*0x46fd2c*/
  {
    SetWindowLongA(Dialog, 8, (LONG)&dwNewLong); /*0x46fd3a*/
    Dialog::Show(v20); /*0x46fd42*/
    while ( 1 ) /*0x4700a7*/
    {
      while ( 1 ) /*0x470092*/
      {
        do /*0x470092*/
        {
LABEL_13:
          if ( (unsigned int)dwNewLong > 1 ) /*0x46fd52*/
          {
LABEL_165:
            Screen::Capture(1, 0, 1, ResourceID3); /*0x470b99*/
            Dialog::Destroy((Dialog *)hDlg); /*0x470ba6*/
            Screen::Capture(1, 0, 1, ResourceID3); /*0x470baf*/
            v12 = Block; /*0x470bb4*/
            goto LABEL_166; /*0x470bb4*/
          }
          MessageLoop(); /*0x46fd5c*/
          if ( dwNewLong == 1 ) /*0x46fd65*/
          {
            if ( byte_89E05C ) /*0x46fd72*/
            {
              *((_BYTE *)&g_GameModeOptionState + (_DWORD)dword_A8DA8C) = 1; /*0x46fd7d*/
              if ( *(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4 ) /*0x46fd91*/
              {
                if ( (unsigned __int8)Settings::CheckString() && a9 ) /*0x46fda9*/
                  Game::SendCampaignOptions(); /*0x46fdab*/
                memset(v107, 0, sizeof(v107)); /*0x46fdbe*/
                v108 = 0; /*0x46fdc6*/
                v109 = 0; /*0x46fdc8*/
                v107[0] = 38; /*0x46fdc9*/
                strcpy((char *)&v107[1], ToWideStringChar((char *)*dword_A8DA78)); /*0x46fdf8*/
                for ( i = 1; i < dword_A8DA84; ++i ) /*0x46fe0a*/
                {
                  Network::SendToPlayer((int)&unk_A8E9C0, (int)v107, 47, 1, (wchar_t *)dword_A8DA78[i]); /*0x46fe26*/
                  Network::ReceiveLoop(&unk_A8E9C0); /*0x46fe30*/
                }
              }
              v22 = (Skirmish *)Dialog::FindByHandle((Dialog *)0xBC6); /*0x46fe44*/
              v23 = (Count *)v22; /*0x46fe49*/
              if ( v22 ) /*0x46fe4d*/
              {
                Skirmish::FillPlayerNames(v22); /*0x46fe55*/
                Count::SetupAllCountriesLobby(v23); /*0x46fe5c*/
                Skirmish::SetupAllSpawnLocations((Skirmish *)v23); /*0x46fe63*/
                for ( j = 0; j < 8; ++j ) /*0x46fe68*/
                {
                  ResourceID3 = GetResourceID3CSF((ObjectClass *)j); /*0x46fe73*/
                  HouseClassSideIndex = GetHouseClassSideIndex(j); /*0x46fe75*/
                  SetupLobbyFactionSlots((HWND)v23, ResourceID3, HouseClassSideIndex); /*0x46fe7f*/
                }
                Lobby::UpdateReadyIcons((Lobby *)v23); /*0x46fe8c*/
                Lobby::EnableStartButton((Lobby *)v23); /*0x46fe93*/
              }
            }
            else
            {
              v26 = *(_DWORD *)&dword_A8B238; /*0x46fea3*/
              v27 = *(_DWORD *)&dword_A8B238 == 3; /*0x46fea8*/
              *((_BYTE *)&g_GameModeOptionState + (_DWORD)dword_A8DA8C) = 0; /*0x46feab*/
              if ( v27 || v26 == 4 ) /*0x46feb7*/
              {
                memset(v116, 0, sizeof(v116)); /*0x46fed1*/
                v117 = 0; /*0x46fed3*/
                v118 = 0; /*0x46fed5*/
                v116[0] = 37; /*0x46fed6*/
                strcpy((char *)&v116[1], ToWideStringChar((char *)*dword_A8DA78)); /*0x46ff05*/
                for ( k = 1; k < dword_A8DA84; ++k ) /*0x46ff17*/
                {
                  Network::SendToPlayer((int)&unk_A8E9C0, (int)v116, 47, 1, (wchar_t *)dword_A8DA78[k]); /*0x46ff33*/
                  Network::ReceiveLoop(&unk_A8E9C0); /*0x46ff3d*/
                }
              }
            }
            if ( (unsigned __int8)Settings::CheckString() ) /*0x46ff4c*/
            {
              for ( m = 0; m < 8; ++m ) /*0x46ff59*/
              {
                if ( !*((_BYTE *)&g_GameModeOptionState + m) ) /*0x46ff5b*/
                  break; /*0x46ff63*/
              }
              if ( m == 8 ) /*0x46ff6e*/
              {
                if ( !a9 ) /*0x46ff7d*/
                  goto LABEL_158; /*0x46ff7d*/
                memset(v113, 0, sizeof(v113)); /*0x46ff91*/
                v114 = 0; /*0x46ff99*/
                v115 = 0; /*0x46ff9b*/
                v113[0] = 52; /*0x46ff9c*/
                strcpy((char *)&v113[1], ToWideStringChar((char *)*dword_A8DA78)); /*0x46ffcb*/
                for ( n = 1; n < dword_A8DA84; ++n ) /*0x46ffdd*/
                {
                  Network::SendToPlayer((int)&unk_A8E9C0, (int)v113, 47, 1, (wchar_t *)dword_A8DA78[n]); /*0x46fff9*/
                  Network::ReceiveLoop(&unk_A8E9C0); /*0x470003*/
                }
                (*((void (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 26))(dword_A8B23C); /*0x47001a*/
                Player::RandomAssign(&dword_A8B238); /*0x470022*/
                ++dword_89E058; /*0x470027*/
                Game::SendCampaignOptions(); /*0x47002d*/
              }
            }
            if ( !a9 ) /*0x47003b*/
            {
LABEL_158:
              byte_89E04C = 0; /*0x470a65*/
              goto LABEL_165; /*0x470a6c*/
            }
            dwNewLong = 0; /*0x470041*/
          }
          Network::ReceiveLoop(&unk_A8E9C0); /*0x47004e*/
        }
        while ( !Network::Send( /*0x470092*/
                   (Network *)&unk_A8E9C0,
                   (int)&stru_A8D600.__pad_34[4],
                   (int)&unk_A8D800,
                   (int)dword_A8D804,
                   (int)&word_A8D810)
             || word_A8D810 != 0xAA04
             || SendNetworkPlayerOptions(&stru_A8D600.__pad_34[4], (int)dword_A8D804) );
        if ( *(_DWORD *)&stru_A8D600.__pad_34[4] != 38 ) /*0x4700a7*/
          break; /*0x4700a7*/
        v31 = 0; /*0x4700b2*/
        if ( (int)dword_A8D580 > 0 ) /*0x4700b6*/
        {
          v32 = (char **)&unk_89DF80; /*0x4700bc*/
          while ( strcmp(&stru_A8D600.__pad_34[8], ToWideStringChar(*v32)) ) /*0x4700fb*/
          {
            ++v31; /*0x470102*/
            ++v32; /*0x470103*/
            if ( v31 >= (int)dword_A8D580 ) /*0x470108*/
              goto LABEL_52; /*0x470108*/
          }
          v33 = stru_81AF8C.?[6 * v31 + 12]; /*0x47011b*/
          StringCSF = GetStringCSF(g_Str_TXT_READY, 0, g_Str_File_CampScor_cpp, 1576); /*0x470132*/
          DlgItem = GetDlgItem(hDlg, v33); /*0x470134*/
          SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)StringCSF); /*0x470143*/
        }
LABEL_52:
        ResourceID3 = 0; /*0x470149*/
        v36 = (char **)dword_A8DA90; /*0x47014b*/
        while ( strcmp(&stru_A8D600.__pad_34[8], ToWideStringChar(*v36)) ) /*0x470189*/
        {
          ++v36; /*0x47018b*/
          ++ResourceID3; /*0x47018e*/
          if ( (int)v36 >= (int)&dword_A8DAB0 ) /*0x470195*/
            goto LABEL_57; /*0x470195*/
        }
        *((_BYTE *)&g_GameModeOptionState + ResourceID3) = 1; /*0x470199*/
LABEL_57:
        v37 = (Skirmish *)Dialog::FindByHandle((Dialog *)0xBC6); /*0x4701a0*/
        v38 = (Count *)v37; /*0x4701aa*/
        if ( v37 ) /*0x4701ae*/
        {
          Skirmish::FillPlayerNames(v37); /*0x4701b2*/
          Count::SetupAllCountriesLobby(v38); /*0x4701b9*/
          Skirmish::SetupAllSpawnLocations((Skirmish *)v38); /*0x4701c0*/
          for ( ii = 0; ii < 8; ++ii ) /*0x4701c5*/
          {
            ResourceID3 = GetResourceID3CSF((ObjectClass *)ii); /*0x4701d0*/
            v40 = GetHouseClassSideIndex(ii); /*0x4701d2*/
            SetupLobbyFactionSlots((HWND)v38, ResourceID3, v40); /*0x4701dc*/
          }
          Lobby::UpdateReadyIcons((Lobby *)v38); /*0x4701e9*/
          Lobby::EnableStartButton((Lobby *)v38); /*0x4701f0*/
        }
        if ( (unsigned __int8)Settings::CheckString() ) /*0x4701f5*/
        {
          for ( jj = 0; jj < 8; ++jj ) /*0x470202*/
          {
            if ( !*((_BYTE *)&g_GameModeOptionState + jj) ) /*0x470204*/
              break; /*0x47020c*/
          }
          if ( jj == 8 && a9 ) /*0x470226*/
          {
            memset(v110, 0, sizeof(v110)); /*0x47023a*/
            v111 = 0; /*0x47023c*/
            v112 = 0; /*0x47023e*/
            v110[0] = 52; /*0x470244*/
            strcpy((char *)&v110[1], ToWideStringChar((char *)*dword_A8DA78)); /*0x470273*/
            for ( kk = 1; kk < dword_A8DA84; ++kk ) /*0x470285*/
            {
              Network::SendToPlayer((int)&unk_A8E9C0, (int)v110, 47, 1, (wchar_t *)dword_A8DA78[kk]); /*0x4702a1*/
              Network::ReceiveLoop(&unk_A8E9C0); /*0x4702ab*/
            }
            (*((void (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 26))(dword_A8B23C); /*0x4702c2*/
            Player::RandomAssign(&dword_A8B238); /*0x4702ca*/
            ++dword_89E058; /*0x4702cf*/
            Game::SendCampaignOptions(); /*0x4702d5*/
          }
        }
      }
      switch ( *(_DWORD *)&stru_A8D600.__pad_34[4] ) /*0x4702e2*/
      {
        case 0x23: /*0x4702e2*/
          if ( ++dword_89E058 == dword_A8D580 ) /*0x4702f7*/
          {
            byte_89E04C = 1; /*0x470a7c*/
            memset(v104, 0, sizeof(v104)); /*0x470a83*/
            v105 = 0; /*0x470a85*/
            v106 = 0; /*0x470a87*/
            v104[0] = 49; /*0x470a8d*/
            strcpy((char *)&v104[1], ToWideStringChar((char *)*dword_A8DA78)); /*0x470ab6*/
            for ( mm = 1; mm < dword_A8DA84; ++mm ) /*0x470ac8*/
            {
              Network::SendToPlayer((int)&unk_A8E9C0, (int)v104, 47, 1, (wchar_t *)dword_A8DA78[mm]); /*0x470ae5*/
              Network::ReceiveLoop(&unk_A8E9C0); /*0x470aef*/
            }
            goto LABEL_165; /*0x470afc*/
          }
LABEL_72:
          if ( (unsigned __int8)Settings::CheckString() ) /*0x4702fd*/
          {
            for ( nn = 0; nn < 8; ++nn ) /*0x47030a*/
            {
              if ( !*((_BYTE *)&g_GameModeOptionState + nn) ) /*0x47030c*/
                break; /*0x470314*/
            }
            if ( nn == 8 && a9 ) /*0x47032e*/
            {
              byte_89E04C = 1; /*0x470b1a*/
              memset(v104, 0, sizeof(v104)); /*0x470b21*/
              v105 = 0; /*0x470b29*/
              v106 = 0; /*0x470b2b*/
              v104[0] = 49; /*0x470b2c*/
              strcpy((char *)&v104[1], ToWideStringChar((char *)*dword_A8DA78)); /*0x470b55*/
              for ( i1 = 1; i1 < dword_A8DA84; ++i1 ) /*0x470b67*/
              {
                Network::SendToPlayer((int)&unk_A8E9C0, (int)v104, 47, 1, (wchar_t *)dword_A8DA78[i1]); /*0x470b80*/
                Network::ReceiveLoop(&unk_A8E9C0); /*0x470b8a*/
              }
              goto LABEL_165; /*0x470b97*/
            }
          }
          break;
        case 0x34: /*0x4702e2*/
          v95 = 1; /*0x47033e*/
          goto LABEL_72; /*0x470343*/
        case 0x24: /*0x4702e2*/
          v44 = 0; /*0x470353*/
          if ( (int)dword_A8D580 <= 0 ) /*0x470357*/
          {
LABEL_86:
            v46 = (Lobby *)hDlg; /*0x4703ab*/
          }
          else
          {
            v45 = (char **)&unk_89DF80; /*0x470359*/
            while ( strcmp(&stru_A8D600.__pad_34[8], ToWideStringChar(*v45)) ) /*0x47039c*/
            {
              ++v44; /*0x4703a3*/
              ++v45; /*0x4703a4*/
              if ( v44 >= (int)dword_A8D580 ) /*0x4703a9*/
                goto LABEL_86; /*0x4703a9*/
            }
            v48 = stru_81AF8C.?[6 * v44 + 12]; /*0x4703f7*/
            v46 = (Lobby *)hDlg; /*0x470408*/
            v49 = GetStringCSF(aTxtAborted, 0, g_Str_File_CampScor_cpp, 1619); /*0x47040e*/
            v50 = GetDlgItem(hDlg, v48); /*0x470410*/
            SendMessageA(v50, 0x4B2u, 0, (LPARAM)v49); /*0x47041f*/
          }
          ResourceID3 = 0; /*0x4703af*/
          v47 = (char **)dword_A8DA90; /*0x4703b1*/
          while ( strcmp(&stru_A8D600.__pad_34[8], ToWideStringChar(*v47)) ) /*0x47042e*/
          {
            ++v47; /*0x470430*/
            ++ResourceID3; /*0x470433*/
            if ( (int)v47 >= (int)&dword_A8DAB0 ) /*0x47043a*/
              goto LABEL_94; /*0x47043a*/
          }
          *((_BYTE *)&g_GameModeOptionState + ResourceID3) = 0; /*0x470444*/
          Lobby::UpdateReadyIcons(v46); /*0x47044b*/
          dword_A8DA90[ResourceID3] = g_HouseClass_ObserverFlags; /*0x470455*/
LABEL_94:
          v51 = 0; /*0x47045c*/
          if ( dword_A8DA84 > 0 ) /*0x470465*/
          {
            while ( strcmp(&stru_A8D600.__pad_34[8], ToWideStringChar((char *)dword_A8DA78[v51])) ) /*0x4704ab*/
            {
              if ( ++v51 >= dword_A8DA84 ) /*0x4704b5*/
                goto LABEL_102; /*0x4704b5*/
            }
            __3_YAXPAX_Z((void *)dword_A8DA78[v51]); /*0x4704c2*/
            v52 = (*(int (__thiscall **)(PtrVector *, _DWORD *))(*(_DWORD *)&stru_A8DA74 + 16))( /*0x4704de*/
                    &stru_A8DA74,
                    &dword_A8DA78[v51]);
            if ( v52 != -1 && v52 < dword_A8DA84 && v52 < --dword_A8DA84 ) /*0x4704f9*/
            {
              do /*0x470511*/
              {
                ++v52; /*0x470501*/
                dword_A8DA78[v52 - 1] = dword_A8DA78[v52]; /*0x470505*/
              }
              while ( v52 < dword_A8DA84 ); /*0x470511*/
            }
          }
LABEL_102:
          v53 = (Skirmish *)Dialog::FindByHandle((Dialog *)0xBC6); /*0x470513*/
          v54 = (Count *)v53; /*0x47051d*/
          if ( v53 ) /*0x470521*/
          {
            Skirmish::FillPlayerNames(v53); /*0x470525*/
            Count::SetupAllCountriesLobby(v54); /*0x47052c*/
            Skirmish::SetupAllSpawnLocations((Skirmish *)v54); /*0x470533*/
            for ( i2 = 0; i2 < 8; ++i2 ) /*0x470538*/
            {
              ResourceID3 = GetResourceID3CSF((ObjectClass *)i2); /*0x470543*/
              v56 = GetHouseClassSideIndex(i2); /*0x470545*/
              SetupLobbyFactionSlots((HWND)v54, ResourceID3, v56); /*0x47054f*/
            }
            Lobby::UpdateReadyIcons((Lobby *)v54); /*0x47055c*/
            Lobby::EnableStartButton((Lobby *)v54); /*0x470563*/
          }
          v57 = GetDlgItem((HWND)v46, 1745); /*0x470576*/
          EnableWindow(v57, 0); /*0x47057f*/
          v58 = GetDlgItem((HWND)v46, 1472); /*0x470589*/
          EnableWindow(v58, 1); /*0x47058c*/
          v91 = CharToWideString(&stru_A8D600.__pad_34[8]); /*0x470598*/
          v59 = GetStringCSF(aGuiPlayerleftc, 0, g_Str_File_CampScor_cpp, 1647); /*0x4705aa*/
          Dialog::ShowMessage(-1, (size_t)v59, v91); /*0x4705b2*/
          break;
        case 0x25: /*0x4702e2*/
          v60 = 0; /*0x4705cd*/
          if ( (int)dword_A8D580 > 0 ) /*0x4705d1*/
          {
            v61 = (char **)&unk_89DF80; /*0x4705d7*/
            while ( strcmp(&stru_A8D600.__pad_34[8], ToWideStringChar(*v61)) ) /*0x47061a*/
            {
              ++v60; /*0x470621*/
              ++v61; /*0x470622*/
              if ( v60 >= (int)dword_A8D580 ) /*0x470627*/
                goto LABEL_114; /*0x470627*/
            }
            v62 = stru_81AF8C.?[6 * v60 + 12]; /*0x47063a*/
            v63 = GetStringCSF(g_Str_TXT_WAITING, 0, g_Str_File_CampScor_cpp, 1655); /*0x470651*/
            v64 = GetDlgItem(hDlg, v62); /*0x470653*/
            SendMessageA(v64, 0x4B2u, 0, (LPARAM)v63); /*0x470662*/
          }
LABEL_114:
          ResourceID3 = 0; /*0x470668*/
          v65 = (char **)dword_A8DA90; /*0x47066a*/
          while ( strcmp(&stru_A8D600.__pad_34[8], ToWideStringChar(*v65)) ) /*0x4706ac*/
          {
            ++v65; /*0x4706ae*/
            ++ResourceID3; /*0x4706b1*/
            if ( (int)v65 >= (int)&dword_A8DAB0 ) /*0x4706b8*/
              goto LABEL_13; /*0x4706b8*/
          }
          *((_BYTE *)&g_GameModeOptionState + ResourceID3) = 0; /*0x4706bf*/
          break;
        case 0x31: /*0x4702e2*/
          byte_89E04C = 1; /*0x470b03*/
          goto LABEL_165; /*0x470b0a*/
        case 0xC: /*0x4702e2*/
          if ( *(_DWORD *)&stru_A8D600.__pad_87[197] == WideString::Hash((wchar_t *)&stru_A8D600.Network_field_0x10) ) /*0x4706e9*/
          {
            v66 = CharToWideString(&stru_A8D600.__pad_34[8]); /*0x4706f9*/
            Dialog::ShowMessage(*(int *)&stru_A8D600.__pad_87[193], (size_t)g_Str_Trace___s_, v66, 11064936); /*0x47070a*/
          }
          break;
        case 0x32: /*0x4702e2*/
          if ( sub_46D650() ) /*0x470720*/
          {
            EnableGameModeControls(hDlg, 1u); /*0x470733*/
            byte_89E05C = 0; /*0x470738*/
            v67 = 0; /*0x47073f*/
            v68 = (ObjectClass **)dword_A8DA90; /*0x470741*/
            do /*0x470762*/
            {
              if ( (unsigned __int8)IsKnownPointer(*v68) ) /*0x470748*/
                *((_BYTE *)&g_GameModeOptionState + v67) = 0; /*0x470751*/
              ++v68; /*0x470758*/
              ++v67; /*0x47075b*/
            }
            while ( (int)v68 < (int)&dword_A8DAB0 ); /*0x470762*/
            v69 = (Count *)Dialog::FindByHandle((Dialog *)0xBC6); /*0x47076e*/
            v101 = (HWND)v69; /*0x470772*/
            if ( v69 ) /*0x470776*/
            {
              v70 = 0; /*0x470782*/
              v99 = 0; /*0x470784*/
              v97 = dword_A8DA90; /*0x470788*/
              do /*0x47082e*/
              {
                v71 = ErrorCode::Map(v70); /*0x470790*/
                v72 = v71; /*0x470795*/
                if ( v71 != -1 ) /*0x47079a*/
                {
                  hWnd = GetDlgItem((HWND)v69, v71); /*0x4707a7*/
                  if ( ShowWindow(hWnd, 0) ) /*0x4707ab*/
                  {
                    v73 = GetDlgItem(v101, v72); /*0x4707c5*/
                    ResourceID3 = *v97; /*0x4707c7*/
                    if ( *v97 ) /*0x4707c7*/
                    {
                      SendDlgItemMessageA(v101, v72, 0x14Bu, 0, 0); /*0x4707dc*/
                      v74 = SendMessageA(v73, 0x4C2u, 0, ResourceID3); /*0x4707ed*/
                      SendMessageA(v73, 0x151u, v74, ResourceID3); /*0x4707f7*/
                      SendMessageA(v73, 0x14Eu, v74, 0); /*0x470802*/
                      ShowWindow(hWnd, 5); /*0x47080b*/
                    }
                    v69 = (Count *)v101; /*0x470811*/
                  }
                }
                v70 = (ErrorCode *)(v99 + 1); /*0x470820*/
                v75 = (int)(v97 + 1) < (int)&dword_A8DAB0; /*0x470821*/
                ++v99; /*0x470826*/
                ++v97; /*0x47082a*/
              }
              while ( v75 ); /*0x47082e*/
              Count::SetupAllCountriesLobby(v69); /*0x470836*/
              Skirmish::SetupAllSpawnLocations((Skirmish *)v69); /*0x47083d*/
              Lobby::SetupAllFactionSlots((Lobby *)v69); /*0x470844*/
              Lobby::UpdateReadyIcons((Lobby *)v69); /*0x47084b*/
              Lobby::EnableStartButton((Lobby *)v69); /*0x470852*/
            }
          }
          if ( v95 ) /*0x470862*/
          {
            v76 = GetDlgItem(hDlg, 1472); /*0x470874*/
            EnableWindow(v76, 0); /*0x47087b*/
            memset(v104, 0, sizeof(v104)); /*0x47088c*/
            v105 = 0; /*0x47088e*/
            v106 = 0; /*0x470890*/
            v104[0] = 35; /*0x470896*/
            strcpy((char *)&v104[1], ToWideStringChar((char *)*dword_A8DA78)); /*0x4708bf*/
            for ( i3 = 1; i3 < dword_A8DA84; ++i3 ) /*0x4708d1*/
            {
              Network::SendToPlayer((int)&unk_A8E9C0, (int)v104, 47, 1, (wchar_t *)dword_A8DA78[i3]); /*0x4708ee*/
              Network::ReceiveLoop(&unk_A8E9C0); /*0x4708f8*/
            }
          }
          break;
        case 0x33: /*0x4702e2*/
          if ( sub_46D8B0(v94) ) /*0x470915*/
          {
            Game::SendCampaignOptions(); /*0x470922*/
            EnableGameModeControls(hDlg, 1u); /*0x47092d*/
            byte_89E05C = 0; /*0x470932*/
            v78 = 0; /*0x470939*/
            v79 = (ObjectClass **)dword_A8DA90; /*0x47093b*/
            do /*0x47095c*/
            {
              if ( (unsigned __int8)IsKnownPointer(*v79) ) /*0x470942*/
                *((_BYTE *)&g_GameModeOptionState + v78) = 0; /*0x47094b*/
              ++v79; /*0x470952*/
              ++v78; /*0x470955*/
            }
            while ( (int)v79 < (int)&dword_A8DAB0 ); /*0x47095c*/
            v80 = (Count *)Dialog::FindByHandle((Dialog *)0xBC6); /*0x470968*/
            if ( v80 ) /*0x47096c*/
            {
              v81 = 0; /*0x470972*/
              v98 = dword_A8DA90; /*0x470974*/
              v100 = 0; /*0x47097c*/
              do /*0x470a1c*/
              {
                v82 = ErrorCode::Map(v81); /*0x470980*/
                v83 = v82; /*0x470985*/
                if ( v82 != -1 ) /*0x47098a*/
                {
                  hWnd = GetDlgItem((HWND)v80, v82); /*0x470997*/
                  if ( ShowWindow(hWnd, 0) ) /*0x47099b*/
                  {
                    v84 = GetDlgItem((HWND)v80, v83); /*0x4709b1*/
                    ResourceID3 = *v98; /*0x4709b3*/
                    if ( *v98 ) /*0x4709b3*/
                    {
                      SendDlgItemMessageA((HWND)v80, v83, 0x14Bu, 0, 0); /*0x4709c4*/
                      v85 = SendMessageA(v84, 0x4C2u, 0, ResourceID3); /*0x4709d9*/
                      v92 = (LRESULT (__stdcall *)(HWND, UINT, WPARAM, LPARAM))ResourceID3; /*0x4709db*/
                      ResourceID3 = (int)SendMessageA; /*0x4709dc*/
                      SendMessageA(v84, 0x151u, v85, (LPARAM)v92); /*0x4709e9*/
                      SendMessageA(v84, 0x14Eu, v85, 0); /*0x4709f4*/
                      ShowWindow(hWnd, 5); /*0x4709fd*/
                    }
                  }
                }
                v81 = (ErrorCode *)(v100 + 1); /*0x470a0e*/
                v75 = (int)(v98 + 1) < (int)&dword_A8DAB0; /*0x470a0f*/
                ++v100; /*0x470a14*/
                ++v98; /*0x470a18*/
              }
              while ( v75 ); /*0x470a1c*/
              Count::SetupAllCountriesLobby(v80); /*0x470a24*/
              Skirmish::SetupAllSpawnLocations((Skirmish *)v80); /*0x470a2b*/
              for ( i4 = 0; i4 < 8; ++i4 ) /*0x470a30*/
              {
                ResourceID3CSF = GetResourceID3CSF((ObjectClass *)i4); /*0x470a3b*/
                v88 = GetHouseClassSideIndex(i4); /*0x470a3d*/
                SetupLobbyFactionSlots((HWND)v80, ResourceID3CSF, v88); /*0x470a47*/
              }
              Lobby::UpdateReadyIcons((Lobby *)v80); /*0x470a54*/
              Lobby::EnableStartButton((Lobby *)v80); /*0x470a5b*/
            }
          }
          break;
        default:
          goto LABEL_72; /*0x47090f*/
      }
    }
  }
LABEL_166:
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x470bc2*/
    Connection::Close((Connection *)&unk_A8E9C0); /*0x470bc9*/
  FileSystem::CleanupTrees((FileSystem *)v94); /*0x470bce*/
  if ( v12 && HIBYTE(a5) ) /*0x470be0*/
    __3_YAXPAX_Z(v12); /*0x470be3*/
}

