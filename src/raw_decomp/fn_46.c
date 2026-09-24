// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00464A70  AbstractClass::queryInterface  this=AbstractClass  sig=csp ====
_DWORD *__userpurge AbstractClass::sub_464A70@<eax>(int a1@<esi>, _DWORD *a2, int *a3)
{
  int GroundHeight; // eax
  int v5; // [esp+4h] [ebp-Ch] BYREF
  int v6; // [esp+8h] [ebp-8h]
  int v7; // [esp+Ch] [ebp-4h]

  v5 = *a3; /*0x464a7a*/
  v6 = a3[1]; /*0x464a8b*/
  v7 = a3[2]; /*0x464a92*/
  GroundHeight = Cell::GetGroundHeight(&v5); /*0x464a96*/
  *a2 = a1; /*0x464aa5*/
  a2[1] = v6; /*0x464aab*/
  a2[2] = GroundHeight; /*0x464aaf*/
  return a2; /*0x464a9f*/
}



// ==== 0x00464AC0  AbstractClass::addRef  this=AbstractClass  sig=csp ====
bool __thiscall AbstractClass::sub_464AC0(int this, _WORD *a2, int a3)
{
  return *(_BYTE *)(this + 5891) || BuildingClass::ValidatePath((int *)this, a2, a3); /*0x464aca*/
}



// ==== 0x00464AF0  BuildingTypeClass::GetSizeInLeptons  this=BuildingTypeClass  sig=csp ====
_DWORD *__thiscall BuildingTypeClass::GetSizeInLeptons(_DWORD *this, _DWORD *a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // eax

  v2 = this->qEF0; /*0x464af0*/
  v3 = dword_89DDB8 * this->DeployingAnimLoaded; /*0x464afc*/
  v2 *= 4; /*0x464b03*/
  v4 = *(int *)((char *)dword_8192B8 + v2); /*0x464b0b*/
  v5 = *(int *)((char *)dword_819310 + v2); /*0x464b11*/
  *a2 = v4 << 8; /*0x464b1d*/
  a2[1] = v5 << 8; /*0x464b22*/
  a2[2] = v3; /*0x464b27*/
  return a2; /*0x464b2a*/
}



// ==== 0x00464B30  BuildingTypeClass::UpdatePower  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::UpdatePower(#376 *this)
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
  int *v54; // [esp+Ch] [ebp+4h]

  BuildingTypeClass::ProcessPower((int)this, v54); /*0x464b39*/
  Checksummer::Add_double(this->GateCloseDelay, this->qE2C); /*0x464b4e*/
  Power::TimerProcess(this->q38C); /*0x464b5c*/
  Power::TimerProcess(this->LightIntensity); /*0x464b6a*/
  Power::TimerProcess(this->LightRedTint); /*0x464b78*/
  Power::TimerProcess(this->LightGreenTint); /*0x464b86*/
  Power::TimerProcess(this->HoverAttack); /*0x464b94*/
  Checksum::AddString((unsigned int *)v54, (unsigned __int8 *)this + 3676); /*0x464ba2*/
  Checksum::AddString((unsigned int *)v54, (unsigned __int8 *)this + 3720); /*0x464bb0*/
  Power::TimerProcess(this->FoundationOutside); /*0x464bbe*/
  Power::TimerProcess(this->BuildingTypeClass_field_ED8); /*0x464bcc*/
  Power::TimerProcess(this->BuildLimit); /*0x464bda*/
  Power::TimerProcess(this->BuildingAnimFrame_6); /*0x464be8*/
  Power::TimerProcess(this->BuildingAnim_0x15); /*0x464bf6*/
  Power::TimerProcess(this->Upgrades); /*0x464c04*/
  Power::TimerProcess(this->Category); /*0x464c12*/
  Power::TimerProcess(this->DeployingAnimLoaded); /*0x464c20*/
  Power::TimerProcess(this->UnderDoorAnim); /*0x464c2e*/
  Power::TimerProcess(this->UnderDoorAnimLoaded); /*0x464c3c*/
  Power::TimerProcess(this->TechnoTypeClass_field_3C0); /*0x464c4a*/
  Checksummer::Add_Buffer((unsigned int *)v54, (unsigned __int8 *)this + 3844, 72); /*0x464c5a*/
  Checksummer::Add_Buffer((unsigned int *)v54, (unsigned __int8 *)this + 3916, 1428); /*0x464c6d*/
  Power::TimerProcess(this->IFVMode); /*0x464c7b*/
  v2 = Power::TimerProcess(this->CloseRange); /*0x464c89*/
  LOBYTE(v2) = this->HoverPad; /*0x464c8e*/
  Power::FlagProcess(v54, v2); /*0x464c97*/
  LOBYTE(v3) = this->IsPlug; /*0x464c9c*/
  Power::FlagProcess(v54, v3); /*0x464ca5*/
  LOBYTE(v4) = this->IsTemple; /*0x464caa*/
  v5 = Power::FlagProcess(v54, v4); /*0x464cb3*/
  LOBYTE(v5) = this->HasSpotlight; /*0x464cb8*/
  Power::FlagProcess(v54, v5); /*0x464cc1*/
  LOBYTE(v6) = this->BaseNormal; /*0x464cc6*/
  Power::FlagProcess(v54, v6); /*0x464ccf*/
  LOBYTE(v7) = this->EligibileForAllyBuilding; /*0x464cd4*/
  v8 = Power::FlagProcess(v54, v7); /*0x464cdd*/
  LOBYTE(v8) = this->NeedsEngineer; /*0x464ce2*/
  Power::FlagProcess(v54, v8); /*0x464ceb*/
  LOBYTE(v9) = this->Bib; /*0x464cf0*/
  Power::FlagProcess(v54, v9); /*0x464cf9*/
  LOBYTE(v10) = this->Wall; /*0x464cfe*/
  v11 = Power::FlagProcess(v54, v10); /*0x464d07*/
  LOBYTE(v11) = this->Capturable; /*0x464d0c*/
  Power::FlagProcess(v54, v11); /*0x464d15*/
  LOBYTE(v12) = this->Powered; /*0x464d1a*/
  Power::FlagProcess(v54, v12); /*0x464d23*/
  LOBYTE(v13) = this->Unsellable; /*0x464d28*/
  v14 = Power::FlagProcess(v54, v13); /*0x464d31*/
  LOBYTE(v14) = this->Radar; /*0x464d36*/
  Power::FlagProcess(v54, v14); /*0x464d3f*/
  LOBYTE(v15) = this->SpySat; /*0x464d44*/
  Power::FlagProcess(v54, v15); /*0x464d4d*/
  LOBYTE(v16) = this->ChargeAnim; /*0x464d52*/
  v17 = Power::FlagProcess(v54, v16); /*0x464d5b*/
  LOBYTE(v17) = this->IsAnimDelayedFire; /*0x464d60*/
  Power::FlagProcess(v54, v17); /*0x464d69*/
  Power::TimerProcess(this->DelayedFireDelay); /*0x464d77*/
  LOBYTE(v18) = this->SiloDamage; /*0x464d7c*/
  v19 = Power::FlagProcess(v54, v18); /*0x464d85*/
  LOBYTE(v19) = this->UnitRepair; /*0x464d8a*/
  Power::FlagProcess(v54, v19); /*0x464d93*/
  LOBYTE(v20) = this->UnitReload; /*0x464d98*/
  Power::FlagProcess(v54, v20); /*0x464da1*/
  LOBYTE(v21) = this->Cloning; /*0x464da6*/
  v22 = Power::FlagProcess(v54, v21); /*0x464daf*/
  LOBYTE(v22) = this->Grinding; /*0x464db4*/
  Power::FlagProcess(v54, v22); /*0x464dbd*/
  LOBYTE(v23) = this->UnitAbsorb; /*0x464dc2*/
  Power::FlagProcess(v54, v23); /*0x464dcb*/
  LOBYTE(v24) = this->InfantryAbsorb; /*0x464dd0*/
  v25 = Power::FlagProcess(v54, v24); /*0x464dd9*/
  LOBYTE(v25) = this->SecretLab; /*0x464dde*/
  Power::FlagProcess(v54, v25); /*0x464de7*/
  LOBYTE(v26) = this->Flat; /*0x464dec*/
  Power::FlagProcess(v54, v26); /*0x464df5*/
  LOBYTE(v27) = this->DockUnload; /*0x464dfa*/
  v28 = Power::FlagProcess(v54, v27); /*0x464e03*/
  LOBYTE(v28) = this->Recoilless; /*0x464e08*/
  Power::FlagProcess(v54, v28); /*0x464e11*/
  LOBYTE(v29) = this->BridgeRepairHut; /*0x464e16*/
  Power::FlagProcess(v54, v29); /*0x464e1f*/
  LOBYTE(v30) = this->Gate; /*0x464e24*/
  v31 = Power::FlagProcess(v54, v30); /*0x464e2d*/
  LOBYTE(v31) = this->SAM; /*0x464e32*/
  Power::FlagProcess(v54, v31); /*0x464e3b*/
  LOBYTE(v32) = this->ConstructionYard; /*0x464e40*/
  Power::FlagProcess(v54, v32); /*0x464e49*/
  LOBYTE(v33) = this->NukeSilo; /*0x464e4e*/
  v34 = Power::FlagProcess(v54, v33); /*0x464e57*/
  LOBYTE(v34) = this->Refinery; /*0x464e5c*/
  Power::FlagProcess(v54, v34); /*0x464e65*/
  LOBYTE(v35) = this->WeaponsFactory; /*0x464e6a*/
  Power::FlagProcess(v54, v35); /*0x464e73*/
  LOBYTE(v36) = this->LaserFencePost; /*0x464e78*/
  v37 = Power::FlagProcess(v54, v36); /*0x464e81*/
  LOBYTE(v37) = this->LaserFence; /*0x464e86*/
  Power::FlagProcess(v54, v37); /*0x464e8f*/
  LOBYTE(v38) = this->FirestormWall; /*0x464e94*/
  Power::FlagProcess(v54, v38); /*0x464e9d*/
  LOBYTE(v39) = this->Helipad; /*0x464ea2*/
  v40 = Power::FlagProcess(v54, v39); /*0x464eab*/
  LOBYTE(v40) = this->OrePurifier; /*0x464eb0*/
  Power::FlagProcess(v54, v40); /*0x464eb9*/
  LOBYTE(v41) = this->ExtraDamageStage; /*0x464ebe*/
  Power::FlagProcess(v54, v41); /*0x464ec7*/
  LOBYTE(v42) = this->Hospital; /*0x464ecc*/
  v43 = Power::FlagProcess(v54, v42); /*0x464ed5*/
  LOBYTE(v43) = this->Armory; /*0x464eda*/
  Power::FlagProcess(v54, v43); /*0x464ee3*/
  Power::TimerProcess(this->GateStages); /*0x464ef1*/
  v44 = Power::TimerProcess(this->PowersUpToLevel); /*0x464eff*/
  LOBYTE(v44) = this->DamagedDoor; /*0x464f04*/
  Power::FlagProcess(v54, v44); /*0x464f0d*/
  LOBYTE(v45) = this->InvisibleInGame; /*0x464f12*/
  Power::FlagProcess(v54, v45); /*0x464f1b*/
  LOBYTE(v46) = this->TerrainPalette; /*0x464f20*/
  v47 = Power::FlagProcess(v54, v46); /*0x464f29*/
  LOBYTE(v47) = this->TurretAnimIsVoxel; /*0x464f2e*/
  Power::FlagProcess(v54, v47); /*0x464f37*/
  LOBYTE(v48) = this->BarrelAnimIsVoxel; /*0x464f3c*/
  Power::FlagProcess(v54, v48); /*0x464f45*/
  Checksum::AddString((unsigned int *)v54, (unsigned __int8 *)this + 5908); /*0x464f53*/
  Checksummer::Add_double(this->u32_1728, this->u32_172C); /*0x464f68*/
  Checksummer::Add_Buffer((unsigned int *)v54, (unsigned __int8 *)this + 5936, 12); /*0x464f78*/
  Checksummer::Add_Buffer((unsigned int *)v54, (unsigned __int8 *)this + 5948, 12); /*0x464f88*/
  Checksummer::Add_Buffer((unsigned int *)v54, (unsigned __int8 *)this + 5960, 12); /*0x464f98*/
  v49 = Checksummer::Add_Buffer((unsigned int *)v54, (unsigned __int8 *)this + 5972, 12); /*0x464fa8*/
  LOBYTE(v49) = this->CrateBeneath; /*0x464fad*/
  Power::FlagProcess(v54, v49); /*0x464fb6*/
  LOBYTE(v50) = this->LeaveRubble; /*0x464fbb*/
  Power::FlagProcess(v54, v50); /*0x464fc4*/
  LOBYTE(v51) = this->CrateBeneathIsMoney; /*0x464fc9*/
  Power::FlagProcess(v54, v51); /*0x464fd2*/
  Power::TimerProcess(this->q5E0); /*0x464fe0*/
  Power::TimerProcess(this->q5C4); /*0x464fee*/
  LOBYTE(v52) = this->ConcentricRadialIndicator; /*0x464ff3*/
  return Power::FlagProcess(v54, v52); /*0x465001*/
}



// ==== 0x00465010  BuildingTypeClass::SaveLoad_Prefix  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::SaveLoad_Prefix(#376 *this)
{
  int v1; // esi
  int v2; // edi
  int result; // eax
  int v4; // ecx
  int v5; // ebp
  int v6; // eax
  _DWORD *v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // [esp+28h] [ebp-Ch] BYREF
  int v11; // [esp+2Ch] [ebp-8h]
  int v12; // [esp+30h] [ebp-4h]
  int v13; // [esp+38h] [ebp+4h] BYREF
  int v14; // [esp+3Ch] [ebp+8h] BYREF

  v1 = v13; /*0x465016*/
  if ( *(_BYTE *)(v13 + 5986) && *(_DWORD *)(v13 + 3584) ) /*0x465025*/
  {
    __3_YAXPAX_Z(*(void **)(v13 + 3584)); /*0x465030*/
    *(_DWORD *)(v1 + 3584) = 0; /*0x465038*/
    *(_BYTE *)(v1 + 3588) = 0; /*0x46503e*/
  }
  if ( *(_BYTE *)(v1 + 5404) && *(_DWORD *)(v1 + 5400) ) /*0x46504c*/
  {
    __3_YAXPAX_Z(*(void **)(v1 + 5400)); /*0x465057*/
    *(_DWORD *)(v1 + 5400) = 0; /*0x46505f*/
    *(_BYTE *)(v1 + 5404) = 0; /*0x465065*/
  }
  if ( *(_BYTE *)(v1 + 5352) && *(_DWORD *)(v1 + 5348) ) /*0x465073*/
  {
    __3_YAXPAX_Z(*(void **)(v1 + 5348)); /*0x46507e*/
    *(_DWORD *)(v1 + 5348) = 0; /*0x465086*/
    *(_BYTE *)(v1 + 5352) = 0; /*0x46508c*/
  }
  if ( *(_BYTE *)(v1 + 5360) && *(_DWORD *)(v1 + 5356) ) /*0x46509a*/
  {
    __3_YAXPAX_Z(*(void **)(v1 + 5356)); /*0x4650a5*/
    *(_DWORD *)(v1 + 5356) = 0; /*0x4650ad*/
    *(_BYTE *)(v1 + 5360) = 0; /*0x4650b3*/
  }
  if ( *(_BYTE *)(v1 + 5368) && *(_DWORD *)(v1 + 5364) ) /*0x4650c1*/
  {
    __3_YAXPAX_Z(*(void **)(v1 + 5364)); /*0x4650cc*/
    *(_DWORD *)(v1 + 5364) = 0; /*0x4650d4*/
    *(_BYTE *)(v1 + 5368) = 0; /*0x4650da*/
  }
  if ( *(_BYTE *)(v1 + 5376) && *(_DWORD *)(v1 + 5372) ) /*0x4650e8*/
  {
    __3_YAXPAX_Z(*(void **)(v1 + 5372)); /*0x4650f3*/
    *(_DWORD *)(v1 + 5372) = 0; /*0x4650fb*/
    *(_BYTE *)(v1 + 5376) = 0; /*0x465101*/
  }
  if ( *(_BYTE *)(v1 + 5384) && *(_DWORD *)(v1 + 5380) ) /*0x46510f*/
  {
    __3_YAXPAX_Z(*(void **)(v1 + 5380)); /*0x46511a*/
    *(_DWORD *)(v1 + 5380) = 0; /*0x465122*/
    *(_BYTE *)(v1 + 5384) = 0; /*0x465128*/
  }
  v2 = v14; /*0x46512e*/
  result = TechnoTypeClass::SaveLoad_Prefix(v1, v14); /*0x465134*/
  if ( result >= 0 ) /*0x46513b*/
  {
    if ( v1 ) /*0x465143*/
      BuildingTypeClass::loadBuildingProperty_b_545E520((_DWORD *)v1, (int)&v13); /*0x46514c*/
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &v14, 4, 0); /*0x46515c*/
    if ( result >= 0 ) /*0x465161*/
    {
      v4 = v1 + 6020; /*0x465167*/
      if ( v1 != -6020 ) /*0x46516f*/
      {
        *(_DWORD *)(v1 + 6024) = 0; /*0x465171*/
        *(_DWORD *)(v1 + 6028) = 0; /*0x465174*/
        *(_BYTE *)(v1 + 6032) = 1; /*0x465177*/
        *(_BYTE *)(v1 + 6033) = 0; /*0x46517b*/
        *(_DWORD *)v4 = &VectorClass<TPoint3D<int>>::`vftable'; /*0x46517e*/
      }
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v4 + 8))(v4, v14, 0); /*0x46518c*/
      v5 = 0; /*0x46518f*/
      if ( v14 <= 0 ) /*0x465195*/
      {
LABEL_32:
        BuildingTypeClass::LoadVoxel(v1); /*0x4651ed*/
        ObjectTypeClass::Load2DArt((char *)v1); /*0x4651f6*/
        v9 = *(_DWORD *)(v1 + 3824); /*0x4651fb*/
        *(_DWORD *)(v1 + 3672) = 0; /*0x465210*/
        v9 *= 120; /*0x465219*/
        *(_DWORD *)(v1 + 3580) = (char *)&dword_89C900 + v9; /*0x465228*/
        *(_DWORD *)(v1 + 3796) = (char *)&dword_89D368 + v9; /*0x46522e*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 3668)); /*0x465234*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 3744)); /*0x465245*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 3748)); /*0x465256*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 3752)); /*0x465267*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 3756)); /*0x465278*/
        BuildingTypeClass::LoadVoxel(v1); /*0x46527f*/
        *(_DWORD *)(v1 + 3584) = 0; /*0x465284*/
        *(_BYTE *)(v1 + 3588) = 0; /*0x46528a*/
        *(_DWORD *)(v1 + 5400) = 0; /*0x465290*/
        *(_BYTE *)(v1 + 5404) = 0; /*0x465296*/
        *(_DWORD *)(v1 + 5348) = 0; /*0x46529c*/
        *(_BYTE *)(v1 + 5352) = 0; /*0x4652a2*/
        *(_DWORD *)(v1 + 5356) = 0; /*0x4652a8*/
        *(_BYTE *)(v1 + 5360) = 0; /*0x4652ae*/
        *(_DWORD *)(v1 + 5364) = 0; /*0x4652b4*/
        *(_BYTE *)(v1 + 5368) = 0; /*0x4652ba*/
        *(_DWORD *)(v1 + 5372) = 0; /*0x4652c0*/
        *(_BYTE *)(v1 + 5376) = 0; /*0x4652c6*/
        *(_DWORD *)(v1 + 5380) = 0; /*0x4652cc*/
        *(_BYTE *)(v1 + 5384) = 0; /*0x4652d2*/
        BuildingTypeClass::LoadAnimations(v1, *((_DWORD *)g_ScenarioClass_Instance + 1174)); /*0x4652e6*/
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
          v7 = (_DWORD *)(v13 + *(_DWORD *)(v1 + 6024)); /*0x4651cb*/
          v8 = v13 + 12; /*0x4651cd*/
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
int __thiscall BuildingTypeClass::SaveLoad_Prefix_0(#376 *this)
{
  int result; // eax
  int v2; // edx
  int v3; // ebp
  int i; // edi
  int v5; // [esp+4h] [ebp-10h]
  _DWORD *v6; // [esp+18h] [ebp+4h]
  int *v7; // [esp+1Ch] [ebp+8h]
  int v8; // [esp+20h] [ebp+Ch] BYREF

  result = TechnoTypeClass::SaveLoad_Prefix_0((int)v6, v6, v7, v8, v5); /*0x465313*/
  if ( result >= 0 ) /*0x46531a*/
  {
    v2 = *v7; /*0x465322*/
    v8 = v6[1507]; /*0x46532e*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v2 + 16))(v7, &v8, 4, 0); /*0x465332*/
    if ( result >= 0 ) /*0x465337*/
    {
      v3 = 0; /*0x46533d*/
      if ( v8 <= 0 ) /*0x465341*/
      {
        return 0; /*0x465368*/
      }
      else
      {
        for ( i = 0; ; i += 12 ) /*0x465343*/
        {
          result = (*(int (__stdcall **)(int *, int, int, _DWORD))(*v7 + 16))(v7, i + v6[1506], 12, 0); /*0x465355*/
          if ( result < 0 ) /*0x46535a*/
            break; /*0x46535a*/
          if ( ++v3 >= v8 ) /*0x465366*/
            return 0; /*0x465366*/
        }
      }
    }
  }
  return result; /*0x46536a*/
}



// ==== 0x00465380  BuildingTypeClass::GetClassIdentifier  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::_vt03(#376 *this)
{
  _DWORD *v2; // [esp+8h] [ebp+8h]

  if ( !v2 ) /*0x465386*/
    return -2147467261; /*0x465388*/
  *v2 = -1366608933; /*0x465396*/
  v2[1] = 298976796; /*0x46539e*/
  v2[2] = 1610654892; /*0x4653a7*/
  v2[3] = -1252326136; /*0x4653b0*/
  return 0; /*0x46538d*/
}



// ==== 0x004653C0  BuildingTypeClass::FindOrCreate  this=IUnknown  sig=csp ====
int __thiscall BuildingTypeClass_FindOrCreate(char *Source)
{
  int v2; // esi

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x4653dc*/
    return 0; /*0x46543f*/
  v2 = 0; /*0x4653ed*/
  if ( g_TriggerClassCount <= 0 ) /*0x4653f1*/
  {
LABEL_6:
    if ( __2_YAPAXI_Z(0x1798u) ) /*0x46541b*/
      return BuildingTypeClass::ConstructFull(Source); /*0x465431*/
    return 0; /*0x465425*/
  }
  while ( _strcmpi((const void *)(*((_DWORD *)g_TriggerTypeCount + v2) + 36), Source) ) /*0x46540a*/
  {
    if ( ++v2 >= g_TriggerClassCount ) /*0x465414*/
      goto LABEL_6; /*0x465414*/
  }
  return *((_DWORD *)g_TriggerTypeCount + v2); /*0x46542f*/
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

  v0 = g_TriggerClassCount; /*0x465450*/
  v1 = 0; /*0x46545e*/
  if ( g_TriggerClassCount > 0 ) /*0x465462*/
  {
    v2 = (char *)g_TriggerTypeCount; /*0x465464*/
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
  result = g_TriggerClassCount; /*0x4654df*/
  for ( i = 0; i < g_TriggerClassCount; ++i ) /*0x4654e8*/
  {
    v6 = *((_DWORD *)g_TriggerTypeCount + i); /*0x4654f7*/
    Destination[0] = 0; /*0x465500*/
    INIClass::GetString( /*0x46550e*/
      (unsigned __int8 ***)CCINIClass_INI_Rules,
      (unsigned __int8 *)(v6 + 36),
      (unsigned __int8 *)aTotile,
      0,
      Destination,
      60);
    v7 = Entity_Read(Destination); /*0x465517*/
    if ( v7 >= 0 && v7 < g_TechnoClassCount ) /*0x465526*/
      *(_DWORD *)(v6 + 3672) = *((_DWORD *)g_FrameCounter + v7); /*0x465531*/
    result = g_TriggerClassCount; /*0x465537*/
  }
  return result; /*0x465541*/
}



// ==== 0x00465570  ObjectClass::CalculateBuildingFoundationBounds  this=ObjectClass  sig=csp ====
int *__thiscall CalculateBuildingFoundationBounds(int *this, int *a2)
{
  __int16 *v3; // eax
  int v4; // esi
  int v5; // ebx
  int v6; // ebp
  int v7; // edi
  int *FoundationSizeBuilding; // eax
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

  v36 = this + 1358; /*0x46558c*/
  if ( this->q54E == dword_89C8A0 /*0x4655b7*/
    && this->q54F == dword_89C8A4
    && this->q550 == dword_89C8A8
    && this->q551 == dword_89C8AC )
  {
    v3 = (__int16 *)(*(int (__thiscall **)(int *))(*this + 156))(this); /*0x4655de*/
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
        FoundationSizeBuilding = Building::GetFoundationSize(&v37, i); /*0x465671*/
        if ( v4 <= 0 || v6 <= 0 ) /*0x46567c*/
        {
          v7 = *FoundationSizeBuilding; /*0x4656e0*/
          v5 = FoundationSizeBuilding[1]; /*0x4656e2*/
          v4 = FoundationSizeBuilding[2]; /*0x4656e5*/
          v12 = FoundationSizeBuilding[3]; /*0x4656e8*/
        }
        else
        {
          v9 = FoundationSizeBuilding[2]; /*0x46567e*/
          if ( v9 > 0 ) /*0x465687*/
          {
            v32 = FoundationSizeBuilding[3]; /*0x46568e*/
            if ( v32 > 0 ) /*0x465692*/
            {
              v10 = *FoundationSizeBuilding; /*0x465694*/
              if ( v7 > *FoundationSizeBuilding ) /*0x465698*/
              {
                v4 = v7 + v4 - v10; /*0x46569c*/
                v7 = *FoundationSizeBuilding; /*0x46569e*/
              }
              v11 = FoundationSizeBuilding[1]; /*0x4656a0*/
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
      v25 = this->q380 == 0; /*0x465710*/
      v13 = (*(int (__thiscall **)(int *))(*this + 192))(this); /*0x465715*/
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
            v19 = (void *)this->q380; /*0x4657f8*/
            if ( v19 ) /*0x465800*/
            {
              __3_YAXPAX_Z(v19); /*0x465803*/
              this->q380 = 0; /*0x46580f*/
              this->qE04 = 0; /*0x465819*/
            }
          }
        }
      }
      if ( this->q546 ) /*0x465824*/
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
    *a2 = this->q54E; /*0x4655c1*/
    a2[1] = this->q54F; /*0x4655c6*/
    a2[2] = this->q550; /*0x4655cc*/
    a2[3] = this->q551; /*0x4655d3*/
    return a2; /*0x4655b9*/
  }
}



// ==== 0x00465910  AbstractClass::releaseRef  this=AbstractClass  sig=csp ====
char AbstractClass::sub_465910()
{
  return 0; /*0x465912*/
}



// ==== 0x00465920  AbstractClass::finalRelease  this=AbstractClass  sig=csp ====
char AbstractClass::sub_465920()
{
  return 0; /*0x465922*/
}



// ==== 0x00465960  AbstractClass::LoadTheaterSHP  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::sub_465960(int this)
{
  int result; // eax
  __int16 *EntireFile; // edi
  int v4; // ecx
  int v5; // edi
  int v6; // [esp+4h] [ebp-1E0h]
  _DWORD v7[22]; // [esp+8h] [ebp-1DCh] BYREF
  _BYTE v8[12]; // [esp+60h] [ebp-184h] BYREF
  int v9; // [esp+6Ch] [ebp-178h]
  _DWORD v10[22]; // [esp+74h] [ebp-170h] BYREF
  _BYTE v11[12]; // [esp+CCh] [ebp-118h] BYREF
  int v12; // [esp+D8h] [ebp-10Ch]
  char Buffer[260]; // [esp+E0h] [ebp-104h] BYREF

  result = *(_DWORD *)(this + 3584); /*0x465969*/
  if ( !result && *(_BYTE *)(this + 5985) ) /*0x465977*/
  {
    if ( strlen((const char *)(this + 3676)) ) /*0x46598e*/
    {
      _makepath(Buffer, 0, 0, (const char *)(this + 3676), Ext); /*0x4659ac*/
      TheaterObjectTypeClassSpecificID(Buffer, *((_DWORD *)g_ScenarioClass_Instance + 1174)); /*0x4659c7*/
      CCFileClass::Construct(v10, Buffer); /*0x4659d8*/
      EntireFile = (__int16 *)CCFileClass::ReadEntireFile(v10); /*0x4659e6*/
      if ( !EntireFile ) /*0x4659ea*/
      {
        ObjectTypeClass::SetRTTI71(Buffer); /*0x4659f3*/
        CCFileClass::Construct(v7, Buffer); /*0x465a04*/
        EntireFile = (__int16 *)CCFileClass::ReadEntireFile(v7); /*0x465a16*/
        v7[0] = &CCFileClass::`vftable'; /*0x465a18*/
        v9 = 0; /*0x465a20*/
        Vector::Clear((int)v8); /*0x465a28*/
        v7[0] = &off_7E1668; /*0x465a31*/
        BufferIOFileClass::Dtor(v7); /*0x465a39*/
      }
      *(_DWORD *)(this + 3584) = EntireFile; /*0x465a40*/
      if ( EntireFile ) /*0x465a46*/
      {
        v4 = 1; /*0x465a48*/
        *(_BYTE *)(this + 3588) = 1; /*0x465a4d*/
        v5 = EntireFile[3] / 2; /*0x465a62*/
        v6 = v5; /*0x465a66*/
        if ( *(_BYTE *)(this + 5815) ) /*0x465a5c*/
        {
          v5 = *(_DWORD *)(this + 5880) + 1; /*0x465a72*/
          v6 = v5; /*0x465a73*/
        }
        if ( v5 > 0 ) /*0x465a79*/
          v4 = Math::RoundToInt(*(double *)&g_RulesClass_Instance[1].WaterCrateImg * 900.0 / (double)v6); /*0x465a96*/
        *(_DWORD *)(this + 3844) = 0; /*0x465a98*/
        *(_DWORD *)(this + 3848) = v5; /*0x465aa2*/
        *(_DWORD *)(this + 3852) = v4; /*0x465aa8*/
      }
      v10[0] = &CCFileClass::`vftable'; /*0x465ab5*/
      v12 = 0; /*0x465abd*/
      Vector::Clear((int)v11); /*0x465ac8*/
      v10[0] = &off_7E1668; /*0x465ad1*/
      BufferIOFileClass::Dtor(v10); /*0x465ad9*/
    }
    return *(_DWORD *)(this + 3584); /*0x465ade*/
  }
  return result; /*0x465ae5*/
}



// ==== 0x00465AF0  BuildingTypeClass::IsPowered  this=BuildingTypeClass  sig=csp ====
void __thiscall BuildingTypeClass_IsPowered(int this)
{
  if ( *(_BYTE *)(this + 5986) ) /*0x465af3*/
  {
    if ( *(_DWORD *)(this + 3584) ) /*0x465afd*/
    {
      __3_YAXPAX_Z(*(void **)(this + 3584)); /*0x465b08*/
      *(_DWORD *)(this + 3584) = 0; /*0x465b10*/
      *(_BYTE *)(this + 3588) = 0; /*0x465b1a*/
    }
  }
}



// ==== 0x00465CB0  ObjectClass::nullsub_7  this=ObjectClass  sig=csp ====
void nullsub_7()
{
  ; /*0x465cb0*/
}



// ==== 0x00465CC0  BulletTypeClass::ReadTrailerAnim  this=BulletTypeClass  sig=csp ====
int sub_465CC0()
{
  int result; // eax
  int i; // edi
  int v2; // esi
  int v3; // eax
  char Destination[60]; // [esp+4h] [ebp-3Ch] BYREF

  result = g_TriggerClassCount; /*0x465cc0*/
  for ( i = 0; i < g_TriggerClassCount; ++i ) /*0x465ccd*/
  {
    v2 = *((_DWORD *)g_TriggerTypeCount + i); /*0x465cdc*/
    Destination[0] = 0; /*0x465cef*/
    INIClass::GetString( /*0x465cf5*/
      (unsigned __int8 ***)CCINIClass_INI_Rules,
      (unsigned __int8 *)(v2 + 36),
      (unsigned __int8 *)aTotile,
      0,
      Destination,
      60);
    v3 = Entity_Read(Destination); /*0x465cfe*/
    if ( v3 >= 0 && v3 < g_TechnoClassCount ) /*0x465d0d*/
      *(_DWORD *)(v2 + 3672) = *((_DWORD *)g_FrameCounter + v3); /*0x465d18*/
    result = g_TriggerClassCount; /*0x465d1e*/
  }
  return result; /*0x465d29*/
}



// ==== 0x00465D30  ReturnFalse_465D30  this=-  sig=ida-proto ====
char ReturnFalse_465D30()
{
  return 0; /*0x465d32*/
}



// ==== 0x00465D40  BuildingClass::Is1x1AndUndeployable_BuildingMassSelectable  this=BuildingTypeClass  sig=csp ====
BOOL __thiscall BuildingClass::Is1x1AndUndeployable_BuildingMassSelectable(_DWORD *this)
{
  int v1; // eax
  BOOL result; // eax

  result = 0; /*0x465d68*/
  if ( this->VoiceMove ) /*0x465d40*/
  {
    v1 = this->qEF0; /*0x465d55*/
    if ( dword_8192B8[v1] == 1 && dword_819310[v1] == 1 ) /*0x465d66*/
      return 1; /*0x465d48*/
  }
  return result; /*0x465d6a*/
}



// ==== 0x00465D70  BuildingClass::processPowerState  this=AbstractClass  sig=csp ====
int __thiscall sub_465D70(_DWORD *this)
{
  return this->q3B7; /*0x465d76*/
}



// ==== 0x00465D80  ObjectClass::??0Iostream_init_QAE_XZ_2  this=ObjectClass  sig=csp ====
Iostream_init *__thiscall __0Iostream_init_QAE_XZ_2(Iostream_init *this)
{
  return this; /*0x465d82*/
}



// ==== 0x00465D90  BuildingTypeClass::GetTypeIdentifier  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::_vt11(#376 *this)
{
  return 7; /*0x465d95*/
}



// ==== 0x00465DA0  BuildingTypeClass::GetObjectSize  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::_vt12(#376 *this)
{
  return 6040; /*0x465da5*/
}



// ==== 0x00465DB0  BuildingTypeClass::GetAuxField  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::_vt16(#376 *this)
{
  return this->ArrayIndex; /*0x465db6*/
}



// ==== 0x00465DC0  BuildingTypeClass::ddtor  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::_vt08(#376 *this)
{
  char v3; // [esp+8h] [ebp+4h]

  BuildingTypeClass::CleanupMembers((void **)this); /*0x465dc3*/
  if ( (v3 & 1) != 0 ) /*0x465dcd*/
    __3_YAXPAX_Z(this); /*0x465dd0*/
  return (int)this; /*0x465dda*/
}



// ==== 0x00465DE0  _VectorClass_V_TPoint3D_H::Clear  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_TPoint3D_int::_vt06(_DWORD *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // edx

  v3 = (_DWORD *)(this->Items + 12 * a3); /*0x465deb*/
  *a2 = *v3; /*0x465df6*/
  a2[1] = v3[1]; /*0x465dfb*/
  a2[2] = v3[2]; /*0x465e02*/
  return a2; /*0x465dfe*/
}



// ==== 0x00465E10  _VectorClass_V_TPoint3D_H::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_TPoint3D_int::_vt01(int *this, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  v2 = this->Capacity; /*0x465e1b*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x465e20*/
  {
    v3 = 0; /*0x465e22*/
    if ( v2 <= 0 ) /*0x465e26*/
      return 1; /*0x465e60*/
    v4 = *(_DWORD *)(a2 + 4); /*0x465e28*/
    v5 = (_DWORD *)this->Items; /*0x465e2b*/
    v6 = (_DWORD *)(v4 + 8); /*0x465e2e*/
    v7 = v4 - (_DWORD)v5; /*0x465e31*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *(v6 - 1) && v5[2] == *v6 ) /*0x465e4d*/
    {
      ++v3; /*0x465e4f*/
      v6 += 3; /*0x465e50*/
      v5 += 3; /*0x465e53*/
      if ( v3 >= v2 ) /*0x465e58*/
        return 1; /*0x465e58*/
    }
  }
  return 0; /*0x465e5a*/
}



// ==== 0x00465E70  _VectorClass_V_TPoint3D_H::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_TPoint3D_int::_vt02(void *this, int a2, char *a3)
{
  int v3; // ebx
  char *v5; // ebp
  char *v6; // eax
  char *v7; // edi
  int v9; // ecx
  int v10; // eax
  char *v11; // ebx
  _DWORD *v12; // edx

  v3 = a2; /*0x465e72*/
  if ( a2 ) /*0x465e7d*/
  {
    v5 = a3; /*0x465e83*/
    this->IsInitialized = 0; /*0x465e87*/
    if ( a3 ) /*0x465e8d*/
    {
      v7 = a3; /*0x465eb4*/
    }
    else
    {
      v6 = (char *)__2_YAPAXI_Z(12 * a2); /*0x465e96*/
      if ( v6 ) /*0x465ea0*/
        v7 = v6; /*0x465ea5*/
      else
        v7 = 0; /*0x465ead*/
    }
    this->IsInitialized = 1; /*0x465ebc*/
    if ( v7 ) /*0x465ec0*/
    {
      if ( this->Items ) /*0x465ecc*/
      {
        v9 = this->Capacity; /*0x465ed3*/
        if ( a2 < v9 ) /*0x465ed8*/
          v9 = a2; /*0x465eda*/
        if ( v9 > 0 ) /*0x465ede*/
        {
          v10 = 0; /*0x465ee0*/
          do /*0x465efe*/
          {
            v11 = &v7[v10]; /*0x465ee5*/
            v12 = (_DWORD *)(v10 + this->Items); /*0x465ee8*/
            v10 += 12; /*0x465eea*/
            --v9; /*0x465eed*/
            *(_DWORD *)v11 = *v12; /*0x465ef0*/
            *((_DWORD *)v11 + 1) = v12[1]; /*0x465ef5*/
            *((_DWORD *)v11 + 2) = v12[2]; /*0x465efb*/
          }
          while ( v9 ); /*0x465efe*/
          v5 = a3; /*0x465f00*/
          v3 = a2; /*0x465f04*/
        }
        if ( this->IsAllocated ) /*0x465f08*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x465f13*/
          this->Items = 0; /*0x465f1b*/
        }
      }
      this->Items = v7; /*0x465f24*/
      this->Capacity = v3; /*0x465f2c*/
      this->IsAllocated = v5 == 0; /*0x465f2f*/
      return 1; /*0x465f35*/
    }
    else
    {
      return 0; /*0x465ec5*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x465f40*/
    return 1; /*0x465f46*/
  }
}



// ==== 0x00465F50  _VectorClass_V_TPoint3D_H::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_TPoint3D_int::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x465f5d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x465f63*/
    *(_DWORD *)(this + 4) = 0; /*0x465f6b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x465f6e*/
  *(_DWORD *)(this + 8) = 0; /*0x465f71*/
}



// ==== 0x00465F80  _VectorClass_V_TPoint3D_H::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_TPoint3D_int::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x465f80*/
    return 0; /*0x465f8e*/
  v3 = *(_DWORD *)(this + 8); /*0x465f94*/
  result = 0; /*0x465f97*/
  if ( v3 <= 0 ) /*0x465f9b*/
    return -1; /*0x465fc6*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 ) /*0x465fa1*/
  {
    if ( ++result >= v3 ) /*0x465fc4*/
      return -1; /*0x465fc4*/
  }
  return result; /*0x465f8b*/
}



// ==== 0x00465FD0  _VectorClass_V_TPoint3D_H::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_TPoint3D_int::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x465fd0*/
    return (a2 - *(_DWORD *)(this + 4)) / 0xCu; /*0x465fee*/
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
_DWORD *__thiscall VectorClass_TPoint3D_int::_vt00(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x466083*/
  *Block = &VectorClass<TPoint3D<int>>::`vftable'; /*0x466086*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x466090*/
  {
    __3_YAXPAX_Z(v3); /*0x466098*/
    *(Block + 1) = 0; /*0x4660a0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4660ab*/
  *(Block + 2) = 0; /*0x4660b1*/
  if ( (a2 & 1) != 0 ) /*0x4660b8*/
    __3_YAXPAX_Z(Block); /*0x4660bb*/
  return Block; /*0x4660c5*/
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
  unk_89DE30 = 0; /*0x466282*/
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
int __thiscall sub_466380(int this)
{
  int v2; // eax

  ObjectClass::ctor((_DWORD *)this); /*0x466384*/
  *(_DWORD *)(this + 172) = 0; /*0x466391*/
  *(_DWORD *)(this + 176) = 0; /*0x466397*/
  *(_BYTE *)(this + 180) = 0; /*0x46639d*/
  BulletClass::ResetDetonationTimer(this + 184); /*0x4663a3*/
  *(_DWORD *)(this + 288) = 0; /*0x4663aa*/
  *(_BYTE *)(this + 260) = 1; /*0x4663b0*/
  *(_BYTE *)(this + 261) = 1; /*0x4663b6*/
  *(_BYTE *)(this + 224) = 0; /*0x4663bf*/
  *(_DWORD *)(this + 256) = 0; /*0x4663c5*/
  *(_DWORD *)(this + 264) = 0; /*0x4663cb*/
  *(_DWORD *)(this + 268) = 0; /*0x4663d1*/
  *(_DWORD *)(this + 272) = 0; /*0x4663d7*/
  *(_DWORD *)(this + 276) = -1; /*0x4663dd*/
  *(_DWORD *)(this + 280) = 0; /*0x4663e3*/
  *(_DWORD *)(this + 292) = 0; /*0x4663e9*/
  *(_DWORD *)(this + 296) = 0; /*0x4663ef*/
  *(_BYTE *)(this + 300) = 0; /*0x4663f5*/
  *(_BYTE *)(this + 301) = 0; /*0x4663fb*/
  *(_DWORD *)(this + 304) = 0; /*0x466401*/
  *(_WORD *)(this + 332) = -1; /*0x466407*/
  *(_WORD *)(this + 334) = -1; /*0x46640e*/
  *(_DWORD *)(this + 340) = 0; /*0x466419*/
  *(_BYTE *)(this + 344) = 0; /*0x46641f*/
  *(_DWORD *)this = &BulletClass::`vftable'; /*0x466425*/
  *(_DWORD *)(this + 4) = &BulletClass::`vftable'; /*0x46642b*/
  *(_DWORD *)(this + 8) = &BulletClass::`vftable'; /*0x466431*/
  *(_DWORD *)(this + 12) = &BulletClass::`vftable'; /*0x466438*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x46643f*/
  *(_DWORD *)(this + 308) = 0; /*0x466444*/
  *(_DWORD *)(this + 312) = 0; /*0x46644a*/
  *(_DWORD *)(this + 316) = 0; /*0x466450*/
  *(_DWORD *)(this + 320) = 0; /*0x466456*/
  *(_DWORD *)(this + 324) = 0; /*0x46645c*/
  *(_DWORD *)(this + 328) = 0; /*0x466462*/
  if ( dword_A8ED50 < dword_A8ED48 /*0x46649b*/
    || (byte_A8ED4D || !dword_A8ED48)
    && dword_A8ED54 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(BulletClass_Array + 8))(
         &BulletClass_Array,
         dword_A8ED48 + dword_A8ED54,
         0) )
  {
    v2 = dword_A8ED50++; /*0x4664a8*/
    *((_DWORD *)dword_A8ED44 + v2) = this; /*0x4664b7*/
  }
  return this; /*0x4664bc*/
}



// ==== 0x004664C0  Particle::Init  this=AbstractClass  sig=csp ====
int __thiscall Particle_Init(int this, int a2, int a3, int a4, int a5, int a6, int a7, char a8)
{
  int result; // eax

  result = a2; /*0x4664c4*/
  *(_DWORD *)(this + 268) = a3; /*0x4664c8*/
  *(_DWORD *)(this + 272) = a7; /*0x4664d2*/
  *(_DWORD *)(this + 296) = a6; /*0x4664dc*/
  *(_BYTE *)(this + 224) = a8; /*0x4664e6*/
  *(_DWORD *)(this + 108) = a5; /*0x4664f6*/
  *(_DWORD *)(this + 172) = a2; /*0x4664fb*/
  *(_DWORD *)(this + 176) = a4; /*0x466501*/
  *(_BYTE *)(this + 300) = 0; /*0x466507*/
  *(_BYTE *)(this + 301) = *(_BYTE *)(a2 + 758); /*0x466513*/
  if ( *(_BYTE *)(a2 + 681) && a4 ) /*0x466525*/
  {
    result = *(_DWORD *)(*(_DWORD *)(a4 + 540) + 90196); /*0x46652d*/
    *(_DWORD *)(this + 276) = result; /*0x466533*/
  }
  else
  {
    *(_DWORD *)(this + 276) = -1; /*0x46653b*/
  }
  *(_DWORD *)(this + 336) = 256; /*0x466546*/
  *(_DWORD *)(this + 340) = 0; /*0x466550*/
  *(_BYTE *)(this + 344) = 0; /*0x466556*/
  return result; /*0x466545*/
}



// ==== 0x00466560  BulletClass::Dtor  this=BulletClass  sig=csp ====
int __thiscall sub_466560(#374 *this)
{
  int v2; // eax
  int v3; // eax
  #374 *v5; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this = &BulletClass::`vftable'; /*0x466566*/
  this->vtable2 = &BulletClass::`vftable'; /*0x46656c*/
  this->vtable3 = &BulletClass::`vftable'; /*0x466573*/
  this->vtable4 = &BulletClass::`vftable'; /*0x46657a*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x466581*/
  if ( this->q158 ) /*0x466586*/
  {
    v5 = this; /*0x4665a0*/
    v2 = (*(int (__thiscall **)(int *, #374 **))(g_BuildingInstanceCount + 16))(&g_BuildingInstanceCount, &v5); /*0x4665a4*/
    if ( v2 != -1 && v2 < g_BuildingTypeInstanceCount && v2 < --g_BuildingTypeInstanceCount ) /*0x4665bf*/
    {
      do /*0x4665d7*/
      {
        ++v2; /*0x4665c7*/
        *((_DWORD *)g_BuildingClassPoolManager + v2 - 1) = *((_DWORD *)g_BuildingClassPoolManager + v2); /*0x4665cb*/
      }
      while ( v2 < g_BuildingTypeInstanceCount ); /*0x4665d7*/
    }
  }
  if ( g_WTFMode ) /*0x4665e0*/
    ObjectClass::Undeploy(this); /*0x4665e4*/
  this->q0AC = 0; /*0x4665e9*/
  this->q02C = 0; /*0x4665f3*/
  this->q055 = 0; /*0x4665fd*/
  v5 = this; /*0x466617*/
  v3 = (*(int (__thiscall **)(int *, #374 **))(BulletClass_Array + 16))(&BulletClass_Array, &v5); /*0x46661b*/
  if ( v3 != -1 && v3 < dword_A8ED50 && v3 < --dword_A8ED50 ) /*0x466636*/
  {
    do /*0x46664e*/
    {
      ++v3; /*0x46663e*/
      *((_DWORD *)dword_A8ED44 + v3 - 1) = *((_DWORD *)dword_A8ED44 + v3); /*0x466642*/
    }
    while ( v3 < dword_A8ED50 ); /*0x46664e*/
  }
  return ObjectClass::Dtor(this); /*0x466657*/
}



// ==== 0x00466660  BulletClass::CalculateSpreadAngle  this=BulletClass  sig=csp ====
int *__stdcall BulletClass::_vt66(int a1)
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
bool __thiscall BulletClass::_vt73(#374 *this, int a2)
{
  return (unsigned __int8)ObjectClass::UpdateProductionDisplay(this) != 0; /*0x4666cf*/
}



// ==== 0x004666E0  BulletClass::ProcessNukeExplosion  this=BulletClass  sig=csp ====
char __thiscall BulletClass::ProcessNukeExplosion(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // ecx
  char v5; // al
  unsigned __int8 v6; // bl
  int v7; // esi
  void **v8; // eax
  int v9; // eax
  double v10; // st6
  double v11; // st5
  double *v12; // ebx
  double v13; // st3
  double v14; // st7
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  char v18; // al
  int v19; // edx
  double v20; // st7
  double v21; // st7
  double v22; // st7
  unsigned int v23; // eax
  unsigned int v24; // edx
  int v25; // ecx
  int *v26; // eax
  _BYTE *v27; // ecx
  int v28; // eax
  double *v29; // esi
  double v30; // st7
  __int64 v31; // rax
  int v32; // edi
  _DWORD *v33; // eax
  int *v34; // eax
  int v35; // edx
  int v36; // eax
  double v37; // st7
  int v38; // ecx
  char v39; // si
  __int16 v40; // cx
  char *v41; // eax
  double v42; // st7
  double v43; // st6
  double v44; // st5
  double v45; // st7
  int v46; // edx
  int *v47; // eax
  int v48; // edx
  ... [38425 chars total]



// ==== 0x00468000  BulletClass::GetAnimFrame  this=BulletClass  sig=csp ====
int __thiscall BulletClass::GetAnimFrame(int this)
{
  int result; // eax
  double v3; // st7
  int v4; // ecx
  unsigned int v5; // [esp+14h] [ebp-4h]

  result = 0; /*0x468004*/
  if ( !*(_BYTE *)(*(_DWORD *)(this + 172) + 673) ) /*0x46800c*/
  {
    v3 = Math::CalcAngle(-*(double *)(this + 240), *(double *)(this + 232)); /*0x468032*/
    LOWORD(v5) = Math::RoundToInt((v3 - 1.570796326794897) * -10430.06004058427); /*0x46804b*/
    result = dword_7F4890[(((v5 >> 10) + 1) >> 1) & 0x1F]; /*0x46805d*/
  }
  v4 = *(_DWORD *)(this + 172); /*0x468064*/
  if ( *(_BYTE *)(v4 + 756) || *(_BYTE *)(v4 + 757) ) /*0x468074*/
    return *(unsigned __int8 *)(this + 300); /*0x468080*/
  return result; /*0x468086*/
}



// ==== 0x00468090  BulletClass::SetupVoxelTransform  this=BulletClass  sig=csp ====
void __thiscall BulletClass::SetupVoxelTransform(void *this, int *a2, int *a3)
{
  int v4; // eax
  double v5; // st7
  double v6; // st7
  float *inited; // eax
  float *v8; // eax
  int v9; // ebx
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // eax
  int v16; // ebx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  float v20; // [esp+Ch] [ebp-C4h]
  float v21; // [esp+Ch] [ebp-C4h]
  unsigned int v22; // [esp+20h] [ebp-B0h]
  double v23; // [esp+20h] [ebp-B0h]
  int v24; // [esp+20h] [ebp-B0h]
  int v25; // [esp+2Ch] [ebp-A4h] BYREF
  int v26; // [esp+30h] [ebp-A0h]
  int v27; // [esp+34h] [ebp-9Ch]
  int GroundHeight; // [esp+38h] [ebp-98h]
  unsigned int v29; // [esp+3Ch] [ebp-94h]
  float v30[12]; // [esp+40h] [ebp-90h] BYREF
  _BYTE v31[48]; // [esp+70h] [ebp-60h] BYREF
  float v32[12]; // [esp+A0h] [ebp-30h] BYREF

  if ( (*(_DWORD *)g_ScenarioClass_Instance & 0x1000) == 0 /*0x4680d5*/
    || (v25 = this->u64_27, v26 = this->q028,
                                      v27 = this->q029,
                                      !Game::Stub3((int)&v25)) )
  {
    v4 = this->q0AC; /*0x4680e2*/
    if ( !*(_BYTE *)(v4 + 670) && !this->q158 ) /*0x4680f6*/
    {
      if ( *(_BYTE *)(v4 + 566) ) /*0x468104*/
      {
        Matrix3x4::Identity(v30); /*0x468116*/
        v5 = Math::CalcAngle(-*((double *)this + 30), *((double *)this + 29)); /*0x468137*/
        LOWORD(v22) = Math::RoundToInt((v5 - 1.570796326794897) * -10430.06004058427); /*0x46814d*/
        v20 = (double)(int)(((((v22 >> 10) + 1) >> 1) & 0x1F) - 8) * -0.1963495408493621; /*0x468177*/
        Matrix2D::Rotate(v30, v20); /*0x46817a*/
        v23 = Math::Sqrt(*((double *)this + 29) * *((double *)this + 29) + *((double *)this + 30) /*0x4681aa*/
                                                                         * *((double *)this + 30));
        v6 = Math::CalcAngle(*((double *)this + 31), v23); /*0x4681c0*/
        LOWORD(v23) = Math::RoundToInt((v6 - 1.570796326794897) * -10430.06004058427); /*0x4681d6*/
        v21 = -((double)(int)((((unsigned int)((LODWORD(v23) >> 10) + 1) >> 1) & 0x1F) - 8) * -0.1963495408493621); /*0x468202*/
        Matrix3D::RotateZ(v30, v21); /*0x468205*/
        inited = (float *)AudioConfig::InitDefault(v31); /*0x468227*/
        v8 = MultiplyMatrix3x4(v32, inited, v30); /*0x468235*/
        ((void (__stdcall *)(int, float *, int *, int *, _DWORD, int, int))BulletClass::RenderVoxelBullet)( /*0x46824a*/
          this->q0AC + 176,
          v8,
          a2,
          a3,
          0,
          2048,
          1000);
      }
      else
      {
        v24 = (*(int (__thiscall **)(void *))(this->u32_6C)(this); /*0x468261*/
        if ( v24 ) /*0x468265*/
        {
          v29 = (*(int (__thiscall **)(void *))(this->q1E8)(this); /*0x468275*/
          v9 = (*(int (__thiscall **)(void *))(this->u32_1C8)(this); /*0x468289*/
          v25 = this->u64_27; /*0x46828f*/
          v26 = this->q028; /*0x46829b*/
          v27 = this->q029; /*0x4682a2*/
          GroundHeight = Cell::GetGroundHeight(&v25); /*0x4682b0*/
          if ( !this->q08C ) /*0x4682b4*/
          {
            v10 = this->q028; /*0x4682c0*/
            v11 = this->q029; /*0x4682c3*/
            v25 = this->u64_27; /*0x4682c6*/
            v26 = v10; /*0x4682ce*/
            v27 = v11; /*0x4682d8*/
            if ( (*((_DWORD *)Coord::To_Cell(&MapClass_Instance, &v25) + 80) & 0x100) != 0 && v9 >= dword_89DE64 ) /*0x4682f3*/
            {
              v9 -= dword_89DE64; /*0x4682f9*/
              GroundHeight += dword_89DE64; /*0x4682fd*/
            }
          }
          if ( v9 > 0 && *(_BYTE *)(this->q0AC + 666) ) /*0x46830e*/
          {
            v12 = ZCoordToScreenY(v9); /*0x46831a*/
            v13 = *a2; /*0x468322*/
            v26 = v12 + a2[1]; /*0x468328*/
            v25 = v13; /*0x46833d*/
            v14 = ZCoordToScreenY(GroundHeight); /*0x468341*/
            DrawToSurfaceSHP( /*0x468374*/
              g_DSurface_Hidden_2,
              g_FileSystem_THEATER_PAL,
              v24,
              v29,
              &v25,
              a3,
              9729,
              0,
              -10 - v14,
              0,
              1000,
              0,
              0,
              0,
              0,
              0);
          }
          v15 = this->q0AC; /*0x468379*/
          v16 = g_FileSystem_THEATER_PAL; /*0x46837f*/
          if ( *(_BYTE *)(v15 + 680) ) /*0x468385*/
          {
            v16 = FileSystem_ANIM_PAL; /*0x46838f*/
          }
          else if ( *(_BYTE *)(v15 + 681) ) /*0x468397*/
          {
            v17 = this->u8_45; /*0x4683a1*/
            if ( v17 == -1 ) /*0x4683aa*/
              v16 = *(_DWORD *)(*((_DWORD *)BuildingTypeClass_AnimTable + *((_DWORD *)HouseClass_Player + 22549)) + 780); /*0x4683d1*/
            else
              v16 = *(_DWORD *)(*((_DWORD *)BuildingTypeClass_AnimTable + v17) + 780); /*0x4683b5*/
          }
          v18 = (*(int (__thiscall **)(void *))(this->q1D0)(this); /*0x4683ea*/
          v19 = ZCoordToScreenY(v18); /*0x4683f2*/
          DrawToSurfaceSHP(g_DSurface_Hidden_2, v16, v24, v29, a2, a3, 11776, 0, -30 - v19, 0, 1000, 0, 0, 0, 0, 0); /*0x46841d*/
        }
      }
    }
  }
}



// ==== 0x00468430  BulletClass::LoseTarget  this=BulletClass  sig=csp ====
__int16 __thiscall BulletClass::LoseTarget(_DWORD **this)
{
  _DWORD *v2; // eax
  int v4; // [esp+4h] [ebp-14h] BYREF
  int v5; // [esp+8h] [ebp-10h]
  _BYTE v6[12]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*this->q10C + 72))(this->q10C, v6); /*0x468443*/
  LOWORD(v5) = *v2 / 256; /*0x468456*/
  HIWORD(v5) = v2[1] / 256; /*0x46846a*/
  v4 = v5; /*0x468473*/
  LOWORD(v2) = g_IKnowWhatImDoing; /*0x468477*/
  if ( g_IKnowWhatImDoing /*0x46849b*/
    || (LOWORD(v2) = (*(int (__thiscall **)(_DWORD))(*this->q10C + 84))(this->q10C), (_BYTE)v2)
    || (LOWORD(v2) = v4, v4 == dword_89DDF0) )
  {
    this->q10C = 0; /*0x4684c5*/
  }
  else
  {
    v2 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v4); /*0x4684b5*/
    this->q10C = v2; /*0x4684ba*/
  }
  return (__int16)v2; /*0x4684c0*/
}



// ==== 0x004684E0  BulletClass::ProcessImpact  this=BulletClass  sig=csp ====
__int16 __thiscall BulletClass::_vt10(int this, char *a2, char *a3)
{
  char *v3; // edi
  char *v5; // eax
  char *v6; // ecx
  _DWORD *v7; // eax
  char **i; // ecx
  __int16 v10; // [esp+Ch] [ebp-10h] BYREF
  char v11[12]; // [esp+10h] [ebp-Ch] BYREF

  v3 = a2; /*0x4684ea*/
  Object::Unlink((#374 *)this); /*0x4684f2*/
  v5 = *(char **)(this + 176); /*0x4684f7*/
  if ( v5 == v3 ) /*0x468501*/
    *(_DWORD *)(this + 176) = 0; /*0x468503*/
  v6 = *(char **)(this + 268); /*0x468509*/
  if ( v6 == v3 ) /*0x468511*/
  {
    v7 = (_DWORD *)(*(int (__thiscall **)(char *, char *))(*(_DWORD *)v6 + 72))(v6, v11); /*0x46851e*/
    a2 = *(char **)CellStruct::Set(&v10, *v7 / 256, v7[1] / 256); /*0x46854d*/
    LOWORD(v5) = g_IKnowWhatImDoing; /*0x468551*/
    if ( g_IKnowWhatImDoing /*0x468575*/
      || (LOWORD(v5) = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 268) + 84))(*(_DWORD *)(this + 268)),
          (_BYTE)v5)
      || (LOWORD(v5) = (_WORD)a2, a2 == (char *)dword_89DDF0) )
    {
      *(_DWORD *)(this + 268) = 0; /*0x46859c*/
    }
    else
    {
      v5 = (char *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2); /*0x46858f*/
      *(_DWORD *)(this + 268) = v5; /*0x468594*/
    }
  }
  if ( *(char **)(this + 172) == v3 ) /*0x4685a8*/
    *(_DWORD *)(this + 172) = 0; /*0x4685aa*/
  if ( *(char **)(this + 304) == v3 ) /*0x4685b6*/
    *(_DWORD *)(this + 304) = 0; /*0x4685b8*/
  if ( *(char **)(this + 340) == v3 ) /*0x4685c4*/
    *(_DWORD *)(this + 340) = 0; /*0x4685c6*/
  if ( (_BYTE)a3 ) /*0x4685d0*/
  {
    v5 = (char *)(*(int (__thiscall **)(char *))(*(_DWORD *)v3 + 44))(v3); /*0x4685da*/
    if ( v5 == (char *)8 ) /*0x4685e0*/
    {
      a3 = v3; /*0x4685e2*/
      if ( *(_BYTE *)(*((_DWORD *)v3 + 43) + 748) ) /*0x4685ec*/
      {
        v5 = 0; /*0x4685fa*/
        if ( dword_89DE28 > 0 ) /*0x4685fe*/
        {
          for ( i = (char **)dword_89DE1C; v3 != *i; ++i ) /*0x468600*/
          {
            if ( (int)++v5 >= dword_89DE28 ) /*0x468610*/
              return (__int16)v5; /*0x468610*/
          }
          v5 = (char *)(*(int (__thiscall **)(int *, char **))(dword_89DE18 + 16))(&dword_89DE18, &a3); /*0x46862a*/
          if ( v5 != (char *)-1 && (int)v5 < dword_89DE28 && (int)v5 < --dword_89DE28 ) /*0x468645*/
          {
            do /*0x46865d*/
            {
              ++v5; /*0x46864d*/
              *((_DWORD *)dword_89DE1C + (_DWORD)v5 - 1) = *((_DWORD *)dword_89DE1C + (_DWORD)v5); /*0x468651*/
            }
            while ( (int)v5 < dword_89DE28 ); /*0x46865d*/
          }
        }
      }
    }
  }
  return (__int16)v5; /*0x468612*/
}



// ==== 0x00468670  BulletClass::ProcessObstacle  this=BulletClass  sig=csp ====
char __thiscall BulletClass::ProcessObstacle(_DWORD *this, _DWORD *a2, const void *a3)
{
  int *v4; // edx
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  int v8; // esi
  int v9; // eax
  int v10; // esi
  int v11; // eax
  __int16 v12; // ax
  int v13; // esi
  double v14; // st7
  double v15; // st7
  int v16; // eax
  int v17; // esi
  int FirstFirestorm; // eax
  int v19; // edx
  int GroundHeight; // eax
  int v21; // edx
  int FirstObstacle; // eax
  int v23; // edi
  int v24; // eax
  double v25; // st7
  int v26; // ecx
  int v27; // eax
  double v28; // st7
  int v30; // [esp+24h] [ebp-40h]
  int v31; // [esp+24h] [ebp-40h]
  float v32; // [esp+24h] [ebp-40h]
  double v33; // [esp+24h] [ebp-40h]
  int v34; // [esp+30h] [ebp-34h]
  double v35; // [esp+34h] [ebp-30h] BYREF
  _DWORD v36[3]; // [esp+40h] [ebp-24h] BYREF
  int v37; // [esp+4Ch] [ebp-18h]
  int v38; // [esp+58h] [ebp-Ch] BYREF
  int v39; // [esp+5Ch] [ebp-8h]
  int v40; // [esp+60h] [ebp-4h]

  if ( !(unsigned __int8)ObjectClass::Deploy((#374 *)this) ) /*0x468684*/
    return 0; /*0x468b7f*/
  qmemcpy(this + 58, a3, 0x18u); /*0x4686a0*/
  this->q134 = *a2; /*0x4686b1*/
  this->TargetCoords = a2[1]; /*0x4686b6*/
  this->q13C = a2[2]; /*0x4686bc*/
  LOWORD(v30) = this->q134 / 256; /*0x4686cd*/
  HIWORD(v30) = this->TargetCoords / 256; /*0x4686e6*/
  this->NextAnim = v30; /*0x4686ef*/
  RemoveTarget((int)this); /*0x4686f5*/
  v4 = (int *)(*(int (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)this->q10C + 88))(this->q10C, &v36[1]); /*0x46870a*/
  v5 = *v4; /*0x468712*/
  v38 = v5; /*0x468714*/
  v39 = v4[1]; /*0x46871b*/
  v6 = v39; /*0x468718*/
  v7 = v4[2]; /*0x46871f*/
  this->q140 = v5; /*0x468722*/
  v40 = v7; /*0x468724*/
  this->q144 = v6; /*0x468728*/
  this->DamageMultiplier = v7; /*0x46872b*/
  v8 = this->q0AC; /*0x46872e*/
  if ( *(_BYTE *)(v8 + 675) && *(_BYTE *)(v8 + 670) ) /*0x468741*/
  {
    v31 = v6 - a2[1]; /*0x468762*/
    v9 = a2[2]; /*0x468766*/
    *(float *)&v36[1] = (float)(*a2 - v5); /*0x468769*/
    *(float *)&v36[2] = (float)v31; /*0x468777*/
    v32 = Math::Sqrt( /*0x4687c5*/
            *(float *)&v36[1] * *(float *)&v36[1]
          + *(float *)&v36[2] * *(float *)&v36[2]
          + (double)(v9 - v7) * (double)(v9 - v7));
    v10 = Random::Range( /*0x4687d2*/
            (_DWORD *)g_ScenarioClass_Instance + 134,
            0,
            2 * g_RulesClass_Instance[1].PrerequisiteFactory[2]);
    v34 = (int)(Math::RoundToInt(v32) * v10) / *(_DWORD *)(this->q130 + 180); /*0x4687fe*/
    v11 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 2147483646); /*0x468802*/
    v12 = Math::RoundToInt(((double)v11 * 4.656612877414201e-10 * 6.283185307179586 - 1.570796326794897) * -10430.06004058427); /*0x468827*/
    v13 = v40; /*0x468834*/
    v33 = (double)(v12 - 0x3FFF) * -0.00009587672516830327; /*0x468846*/
    *(double *)&v36[1] = (double)v39; /*0x468853*/
    v35 = (double)v34; /*0x46885b*/
    v14 = Math::SinCos(v33); /*0x468864*/
    v34 = Math::RoundToInt(*(double *)&v36[1] - v14 * v35); /*0x46887a*/
    v15 = Math::ArcTan2(v33); /*0x468884*/
    v38 = Math::RoundToInt(v15 * v35 + (double)v38); /*0x46889d*/
    v39 = v34; /*0x4688a1*/
    v40 = v13; /*0x4688a5*/
  }
  if ( *(_BYTE *)(this->q0AC + 670) ) /*0x4688af*/
  {
    v16 = this->q0B0; /*0x4688bd*/
    if ( v16 ) /*0x4688c5*/
      v17 = *(_DWORD *)(v16 + 540); /*0x4688c7*/
    else
      v17 = 0; /*0x4688cf*/
    FirstFirestorm = MapClass::FindFirstFirestorm(&v35, a2, &v38, v17); /*0x4688e2*/
    *(_QWORD *)&v36[1] = *(_QWORD *)FirstFirestorm; /*0x4688f1*/
    v19 = *(_DWORD *)(FirstFirestorm + 8); /*0x4688fc*/
    v37 = v19; /*0x4688ff*/
    if ( *(_QWORD *)&v36[1] == unk_89DE30 && v19 == MEMORY[0x89DE38] ) /*0x468913*/
    {
      FirstObstacle = TrajectoryHelper::FindFirstObstacle(this->q0AC, v17); /*0x46894a*/
      if ( FirstObstacle ) /*0x468953*/
      {
        v23 = *this; /*0x468957*/
        v24 = (*(int (__thiscall **)(int, double *))(*(_DWORD *)FirstObstacle + 72))(FirstObstacle, &v35); /*0x468960*/
        (*(void (__thiscall **)(_DWORD *, int))(v23 + 436))(this, v24); /*0x468966*/
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, int *))(*this + 436))(this, &v38); /*0x468977*/
      }
      (*(void (__thiscall **)(_DWORD *, int *))(*this + 436))(this, &v38); /*0x468986*/
      this->q110 = 0; /*0x46898c*/
      if ( *((double *)this + 29) == 0.0 && *((double *)this + 30) == 0.0 && *((double *)this + 31) == 0.0 ) /*0x4689c9*/
      {
        this->q0E8 = 0; /*0x4689cb*/
        this->q0EC = 1079574528; /*0x4689d1*/
      }
      v25 = 0.0 /*0x468a0e*/
          / Math::Sqrt(
              *((double *)this + 31) * *((double *)this + 31)
            + *((double *)this + 30) * *((double *)this + 30)
            + *((double *)this + 29) * *((double *)this + 29));
      *((double *)this + 29) = v25 * *((double *)this + 29); /*0x468a1f*/
      *((double *)this + 30) = v25 * *((double *)this + 30); /*0x468a2d*/
      *((double *)this + 31) = v25 * *((double *)this + 31); /*0x468a39*/
    }
    else
    {
      GroundHeight = Cell::GetGroundHeight(&v36[1]); /*0x46891f*/
      v21 = *this; /*0x468924*/
      v37 = GroundHeight; /*0x468926*/
      (*(void (__thiscall **)(_DWORD *, _DWORD *))(v21 + 436))(this, &v36[1]); /*0x468931*/
    }
  }
  v26 = this->q10C; /*0x468a3f*/
  if ( v26 && (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 44))(v26) == 2 ) /*0x468a51*/
    v27 = 0; /*0x468a53*/
  else
    v27 = *(_DWORD *)(this->q0AC + 752); /*0x468a5d*/
  v36[1] = this->q09C; /*0x468a75*/
  v36[2] = this->q0A0; /*0x468a7c*/
  v37 = this->q0A4; /*0x468a88*/
  BulletClass::InitDetonationTimer(&v36[1], &v38, v27, 0x7FFFFFFF); /*0x468a93*/
  if ( *(int *)(this->q0AC + 732) > 0 ) /*0x468aa6*/
  {
    if ( *((double *)this + 29) == 0.0 && *((double *)this + 30) == 0.0 && *((double *)this + 31) == 0.0 ) /*0x468ae3*/
    {
      this->q0E8 = 0; /*0x468ae5*/
      this->q0EC = 1079574528; /*0x468aef*/
    }
    v28 = 1.0 /*0x468b2c*/
        / Math::Sqrt(
            *((double *)this + 31) * *((double *)this + 31)
          + *((double *)this + 30) * *((double *)this + 30)
          + *((double *)this + 29) * *((double *)this + 29));
    *((double *)this + 29) = v28 * *((double *)this + 29); /*0x468b3d*/
    *((double *)this + 30) = v28 * *((double *)this + 30); /*0x468b4b*/
    *((double *)this + 31) = v28 * *((double *)this + 31); /*0x468b57*/
  }
  if ( this->q240 ) /*0x468b5d*/
    Targeting::Readd(this); /*0x468b6d*/
  return 1; /*0x468b74*/
}



// ==== 0x00468B90  BulletClass::UpdateFlightPath  this=BulletClass  sig=csp ====
int __thiscall BulletClass::_vt30(_DWORD *this)
{
  int v1; // eax

  v1 = -(*(_BYTE *)(this->q0AC + 759) != 0); /*0x468b9e*/
  LOBYTE(v1) = v1 & 0xFE; /*0x468ba0*/
  return v1 + 3; /*0x468ba5*/
}



// ==== 0x00468BB0  BulletClass::CheckBulletCollision  this=BulletClass  sig=csp ====
bool __thiscall sub_468BB0(_DWORD *this, int *a2)
{
  void *v4; // ebx
  int v5; // eax
  _BYTE *v6; // ebx
  _BYTE *v7; // ebp
  void *v8; // eax
  int v9; // ecx
  bool result; // al
  int v11; // ecx
  int v12; // eax
  int v13; // edi
  int v14; // ecx
  _DWORD v15[3]; // [esp+10h] [ebp-Ch] BYREF
  void *v16; // [esp+20h] [ebp+4h]

  *a2 = this->q09C; /*0x468bc8*/
  a2[1] = this->q0A0; /*0x468bcd*/
  a2[2] = this->q0A4; /*0x468bd3*/
  v4 = Coord::To_Cell(&MapClass_Instance, a2); /*0x468be0*/
  v5 = this->q0AC; /*0x468be2*/
  v16 = v4; /*0x468be8*/
  if ( *(_BYTE *)(v5 + 662) || *(_BYTE *)(v5 + 664) ) /*0x468bf6*/
  {
    v6 = Coord::To_Cell(&MapClass_Instance, this + 77); /*0x468c21*/
    v7 = Coord::To_Cell(&MapClass_Instance, this + 80); /*0x468c28*/
    v8 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)this + 166); /*0x468c36*/
    v9 = this->q0B0; /*0x468c3b*/
    if ( v9 ) /*0x468c43*/
      v9 = *(_DWORD *)(v9 + 540); /*0x468c45*/
    if ( TrajectoryHelper::GetObstacle(v6, v7, (int)v8, *a2, a2[1], a2[2], this->q0AC, (#375 *)v9) ) /*0x468c6d*/
      return 1; /*0x468c7f*/
    v4 = v16; /*0x468c82*/
  }
  if ( (*(int (__thiscall **)(_DWORD *))(*this + 456))(this) <= -4 * dword_89DE70 ) /*0x468c9d*/
    return 1; /*0x468c9f*/
  v11 = this->q10C; /*0x468cab*/
  if ( v11 ) /*0x468cb3*/
  {
    if ( *(_BYTE *)(this->q0AC + 675) ) /*0x468cbb*/
    {
      v12 = this->q09C; /*0x468ccb*/
      v13 = this->q0A4; /*0x468cd1*/
      v15[1] = this->q0A0; /*0x468cd7*/
      v15[0] = v12; /*0x468cdb*/
      if ( v13 < *(_DWORD *)((*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v11 + 88))(v11, v15) + 8) /*0x468cfa*/
        && (*(int (__thiscall **)(_DWORD *))(*this + 456))(this) < 0 )
      {
        return 1; /*0x468cfc*/
      }
    }
  }
  if ( *(_BYTE *)(this->q0AC + 669) && (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)v4 + 80))(v4) ) /*0x468d1c*/
    return 1; /*0x468d23*/
  result = 0; /*0x468d67*/
  if ( *(_BYTE *)(this->q0AC + 676) ) /*0x468d35*/
  {
    v14 = this->q10C; /*0x468d3f*/
    if ( v14 ) /*0x468d47*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v14 + 84))(v14) /*0x468d65*/
        && ObjectClass::DistanceTo(this, this->q10C) < 128 )
      {
        return 1; /*0x468d3d*/
      }
    }
  }
  return result; /*0x468c78*/
}



// ==== 0x00468D80  BulletClass::Fire  this=BulletClass  sig=csp ====
char __thiscall ApplyScatteredDamage(int this, char a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  _DWORD *v9; // eax
  int *v10; // eax
  double v11; // st7
  int v12; // eax
  int *v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  int *v17; // eax
  int *v18; // eax
  int v19; // ecx
  _DWORD *v20; // ecx
  int v21; // eax
  int v22; // edi
  int v23; // eax
  int *v24; // eax
  int v25; // ecx
  int v27; // [esp+18h] [ebp-30h] BYREF
  int v28; // [esp+1Ch] [ebp-2Ch]
  int v29; // [esp+20h] [ebp-28h]
  int v30; // [esp+24h] [ebp-24h] BYREF
  int v31; // [esp+28h] [ebp-20h]
  int v32; // [esp+2Ch] [ebp-1Ch]
  char v33[12]; // [esp+30h] [ebp-18h] BYREF
  int v34[3]; // [esp+3Ch] [ebp-Ch] BYREF

  v3 = 0; /*0x468d87*/
  v4 = this + 156; /*0x468d8a*/
  v27 = *(_DWORD *)(this + 156); /*0x468d96*/
  v5 = *(_DWORD *)(this + 268); /*0x468d9a*/
  v6 = *(_DWORD *)(v4 + 4); /*0x468da0*/
  v7 = *(_DWORD *)(v4 + 8); /*0x468da5*/
  v28 = v6; /*0x468da8*/
  v29 = v7; /*0x468dac*/
  if ( v5 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 84))(v5) ) /*0x468db4*/
    v3 = *(_DWORD *)(this + 268); /*0x468dbb*/
  if ( !*(_BYTE *)(*(_DWORD *)(this + 172) + 674) ) /*0x468dc7*/
  {
    v8 = *(_DWORD *)(this + 268); /*0x468dd5*/
    if ( v8 ) /*0x468ddd*/
    {
      v9 = (_DWORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v8 + 72))(v8, v33); /*0x468dea*/
      v10 = Coord::Subtract(v34, v27 - *v9, v28 - v9[1], v29 - v9[2]); /*0x468e0e*/
      v30 = *v10; /*0x468e18*/
      v31 = v10[1]; /*0x468e1f*/
      v32 = v10[2]; /*0x468e2a*/
      v11 = Math::Sqrt((double)v30 * (double)v30 + (double)v32 * (double)v32 + (double)v31 * (double)v31); /*0x468e4f*/
      if ( (int)Math::RoundToInt(v11) < 32 ) /*0x468e5f*/
      {
        v12 = *(_DWORD *)(this + 172); /*0x468e61*/
        if ( !*(_BYTE *)(v12 + 660) && !*(_BYTE *)(v12 + 674) ) /*0x468e71*/
        {
          v13 = (int *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 268) + 72))( /*0x468e88*/
                         *(_DWORD *)(this + 268),
                         v34);
          v27 = *v13; /*0x468e8d*/
          v28 = v13[1]; /*0x468e94*/
          v29 = v13[2]; /*0x468e9b*/
        }
      }
    }
    if ( !*(_BYTE *)(*(_DWORD *)(this + 296) + 340) ) /*0x468ea5*/
    {
      v14 = *(_DWORD *)(this + 172); /*0x468eb3*/
      if ( !*(_BYTE *)(v14 + 660) ) /*0x468eb9*/
      {
        if ( !a2 /*0x468f05*/
          && !*(_BYTE *)(v14 + 667)
          && *(int *)(v14 + 732) <= 0
          && (*(_DWORD *)(this + 208) != unk_89DE30 || *(_QWORD *)(this + 212) != qword_89DE34) )
        {
          v15 = *(_DWORD *)(this + 212); /*0x468f11*/
          v27 = *(_DWORD *)(this + 208); /*0x468f14*/
          v16 = *(_DWORD *)(this + 216); /*0x468f18*/
          v28 = v15; /*0x468f1b*/
          v29 = v16; /*0x468f1f*/
        }
        if ( v3 && (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 120))(v3) != 2 ) /*0x468f31*/
        {
          if ( ObjectClass::DistanceTo((void *)this, *(_DWORD *)(this + 268)) >= 128 ) /*0x468f46*/
            goto LABEL_30; /*0x468f46*/
          v17 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v3 + 164))(v3, v34); /*0x468f55*/
          goto LABEL_29; /*0x468f5b*/
        }
        if ( *(_DWORD *)(this + 268) ) /*0x468f60*/
        {
          if ( ObjectClass::DistanceTo((void *)this, *(_DWORD *)(this + 268)) < 42 ) /*0x468f79*/
          {
            v18 = (int *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 268) + 88))( /*0x468f88*/
                           *(_DWORD *)(this + 268),
                           v34);
            v27 = *v18; /*0x468f8d*/
            v19 = *(_DWORD *)(this + 268); /*0x468f91*/
            v28 = v18[1]; /*0x468f9a*/
            v29 = v18[2]; /*0x468fa1*/
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 44))(v19) == 6 ) /*0x468fad*/
            {
              v20 = *(_DWORD **)(this + 268); /*0x468faf*/
              if ( *(_DWORD *)(v20[328] + 3772) || *(_DWORD *)(v20[328] + 3776) || *(_DWORD *)(v20[328] + 3780) ) /*0x468fcc*/
              {
                v17 = (int *)(*(int (__thiscall **)(_DWORD *, int *))(*v20 + 164))(v20, v34); /*0x468fda*/
LABEL_29:
                v27 = *v17; /*0x468fe0*/
                v28 = v17[1]; /*0x468fe9*/
                v29 = v17[2]; /*0x468ff0*/
              }
            }
          }
        }
      }
    }
  }
LABEL_30:
  v21 = *(_DWORD *)(this + 172); /*0x468ff4*/
  if ( *(_BYTE *)(v21 + 660) ) /*0x468ffa*/
  {
    LOBYTE(v21) = Warhead::ApplyDamage((char *)this, &v27); /*0x4690a1*/
  }
  else
  {
    v30 = v27; /*0x469010*/
    v31 = v28; /*0x469018*/
    v32 = v29; /*0x46901c*/
    v22 = 0; /*0x469026*/
    if ( *(int *)(v21 + 684) > 0 ) /*0x46902a*/
    {
      do /*0x46908f*/
      {
        Warhead::ApplyDamage((char *)this, &v27); /*0x469033*/
        LOBYTE(v21) = *(_BYTE *)(this + 144); /*0x469038*/
        if ( !(_BYTE)v21 ) /*0x469040*/
          break; /*0x469040*/
        v23 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 256, 512); /*0x469057*/
        v24 = RandomCoordScatter(v34, &v30, v23, 0); /*0x469067*/
        ++v22; /*0x46906e*/
        v27 = *v24; /*0x46906f*/
        v25 = *(_DWORD *)(this + 172); /*0x469073*/
        v28 = v24[1]; /*0x46907c*/
        v29 = v24[2]; /*0x469083*/
        v21 = *(_DWORD *)(v25 + 684); /*0x469087*/
      }
      while ( v22 < v21 ); /*0x46908f*/
    }
  }
  return v21; /*0x469091*/
}



// ==== 0x004690B0  Warhead::ApplyDamage  this=ObjectClass  sig=csp ====
char __thiscall Warhead_ApplyDamage(char *this, int *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // edi
  Concurrency::details::SchedulerBase *v9; // ebx
  _DWORD *v10; // eax
  _DWORD *v11; // edi
  _BYTE *v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // edi
  bool v16; // bl
  void **v17; // ecx
  int v18; // edi
  int v19; // eax
  int v20; // ecx
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  int v24; // ecx
  int v25; // edi
  int v26; // eax
  int v27; // ecx
  int v28; // edi
  _DWORD *v29; // eax
  _DWORD *Member; // ebx
  int v31; // edi
  int v32; // eax
  int v33; // eax
  _DWORD *v34; // eax
  int *v35; // ecx
  int v36; // eax
  int v37; // ecx
  _BYTE *v38; // edi
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  int v42; // eax
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  int *v46; // edi
  double v47; // st7
  _DWORD *v48; // edx
  int v49; // ecx
  int v50; // edx
  double v... [28570 chars total]



// ==== 0x0046A310  Warhead::ApplyPostDamageEffects  this=ObjectClass  sig=csp ====
int __thiscall Warhead_ApplyPostDamageEffects(int *this)
{
  int v2; // eax
  int v3; // esi
  int *v4; // ecx
  int v5; // ebx
  int v6; // ebp
  int v7; // edx
  _DWORD *v8; // eax
  int *v9; // eax
  int result; // eax
  int v11; // eax
  int v12; // edx
  int v13; // esi
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int *v18; // ecx
  int v19; // edx
  bool v20; // cc
  _WORD *v21; // ebx
  __int16 v22; // ax
  _BYTE *v23; // ebp
  int v24; // eax
  char v25; // al
  int v26; // edx
  int v27; // ebx
  int v28; // eax
  int *v29; // ebx
  int v30; // ecx
  int v31; // edx
  _DWORD *v32; // eax
  double v33; // st7
  __int16 v34; // ax
  double v35; // st7
  double v36; // st7
  double v37; // st7
  double v38; // st7
  double v39; // st7
  double v40; // st7
  int v41; // ecx
  int v42; // edx
  char v43; // al
  _DWORD *v44; // ecx
  int *v45; // ecx
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
  _DWORD *v56; // eax
  double v57; // st7
  __int16 v58; // bp
  unsigned int v59; // ebp
  double v60; // st7
  double v61; // st7
  double v62; // st7
  double v63; // st7
  unsigned int v64; // ebp
  double v65; // st7
  int v66; // ecx
  int v67; // edx
  int v68; // ecx
  int v69; // edx
  char v70; // al
  _BYTE *v71; // eax
  _BYTE *v72; // eax
  double v73; // [esp+3Ch] [ebp-A4h] BYREF
  double v74; // [esp+44h] [ebp-9Ch]
  double v75; // [esp+4Ch] [ebp-94h]
  int v76; // [esp+54h] [ebp-8Ch] BYREF
  double v77; // [esp+58h] [ebp-88h]
  double v78; // [esp+60h] [ebp-80h]
  LPVOID v79; // [esp+68h] [ebp-78h] BYREF
  int v80; // [esp+6Ch] [ebp-74h]
  _WORD *v81; // [esp+70h] [ebp-70h]
  LPVOID v82; // [esp+74h] [ebp-6Ch] BYREF
  int v83; // [esp+78h] [ebp-68h] BYREF
  int v84; // [esp+7Ch] [ebp-64h] BYREF
  int v85; // [esp+80h] [ebp-60h]
  int v86; // [esp+84h] [ebp-5Ch]
  double v87; // [esp+88h] [ebp-58h]
  double v88; // [esp+90h] [ebp-50h] BYREF
  int v89; // [esp+9Ch] [ebp-44h]
  int v90; // [esp+A0h] [ebp-40h] BYREF
  int v91; // [esp+A4h] [ebp-3Ch]
  int v92; // [esp+A8h] [ebp-38h]
  int v93; // [esp+ACh] [ebp-34h] BYREF
  int v94; // [esp+B0h] [ebp-30h]
  int v95; // [esp+B4h] [ebp-2Ch]
  LPVOID ppv; // [esp+B8h] [ebp-28h] BYREF
  void *v97; // [esp+BCh] [ebp-24h]
  int v98; // [esp+C0h] [ebp-20h]
  int v99; // [esp+C4h] [ebp-1Ch]
  int v100; // [esp+C8h] [ebp-18h]
  int v101; // [esp+CCh] [ebp-14h]
  int v102; // [esp+D0h] [ebp-10h]
  _BYTE v103[12]; // [esp+D4h] [ebp-Ch] BYREF

  v2 = this->q02B; /*0x46a322*/
  v3 = *(_DWORD *)(v2 + 696); /*0x46a328*/
  if ( v3 >= 0 ) /*0x46a330*/
  {
    v76 = *(_DWORD *)(v2 + 696); /*0x46a3d2*/
  }
  else
  {
    v4 = (int *)this->fallRate; /*0x46a336*/
    if ( v4 ) /*0x46a33e*/
    {
      v5 = this->q027; /*0x46a353*/
      v6 = this->owningHouseIndex; /*0x46a359*/
      v7 = *v4; /*0x46a35f*/
      v92 = this->q029; /*0x46a361*/
      v8 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(v7 + 72))(v4, &v93); /*0x46a370*/
      v9 = Coord::Subtract(&v90, *v8 - v5, v8[1] - v6, v8[2] - v92); /*0x46a392*/
      v84 = *v9; /*0x46a399*/
      v85 = v9[1]; /*0x46a3a4*/
      v86 = v9[2]; /*0x46a3ab*/
      result = (int)Coord::Length(&v84) / 256; /*0x46a3bd*/
      v76 = -v3 - result; /*0x46a3c6*/
      if ( v76 <= 0 ) /*0x46a3ca*/
        return result; /*0x46a3ca*/
    }
    else
    {
      v76 = 3; /*0x46a340*/
    }
  }
  result = (*(int (__thiscall **)(int *))(*this + 444))(this); /*0x46a3da*/
  if ( *(_DWORD *)(result + 228) ) /*0x46a3e0*/
  {
    v11 = (*(int (__thiscall **)(int *))(*this + 444))(this); /*0x46a3f2*/
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v11 + 228) + 44))(*(_DWORD *)(v11 + 228)); /*0x46a400*/
    if ( result != 6 ) /*0x46a406*/
    {
      v12 = *this; /*0x46a412*/
      v13 = *(_DWORD *)(this->q02B + 692); /*0x46a414*/
      v99 = *(_DWORD *)(v13 + 160); /*0x46a425*/
      v14 = *(_DWORD *)(*(int (__thiscall **)(int *, int *))(v12 + 440))(this, &v83); /*0x46a434*/
      v15 = *(_DWORD *)(v13 + 180); /*0x46a43c*/
      v98 = v14; /*0x46a443*/
      v16 = 0; /*0x46a44c*/
      v17 = v15 / 256; /*0x46a44e*/
      v83 = v17; /*0x46a454*/
      v89 = 0; /*0x46a458*/
      v80 = 1; /*0x46a45c*/
      if ( v17 >= 1 ) /*0x46a464*/
      {
        v18 = &dword_7ED3D4; /*0x46a46a*/
        v79 = &dword_7ED3D4; /*0x46a46f*/
        do /*0x46a926*/
        {
          v19 = *(v18 - 1); /*0x46a475*/
          v20 = v19 < *v18; /*0x46a478*/
          LODWORD(v78) = *v18; /*0x46a47a*/
          v100 = v19; /*0x46a47e*/
          if ( v20 ) /*0x46a485*/
          {
            v21 = (_WORD *)(4 * v19 + 11261072); /*0x46a48b*/
            v81 = v21; /*0x46a492*/
            do /*0x46a906*/
            {
              v22 = HIWORD(v98) + v21[1]; /*0x46a4a5*/
              LOWORD(v97) = v98 + *v21; /*0x46a4ad*/
              HIWORD(v97) = v22; /*0x46a4b5*/
              v82 = v97; /*0x46a4c8*/
              v23 = (_BYTE *)*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v82) + 57); /*0x46a4d7*/
              if ( v23 ) /*0x46a4df*/
              {
                v24 = this->fallRate; /*0x46a4e5*/
                if ( v23 != (_BYTE *)v24 && v24 && !Object::IsAlliedWithObjectHouse(*(_DWORD **)(v24 + 540), (int)v23) ) /*0x46a502*/
                {
                  v25 = *(_BYTE *)(v13 + 303); /*0x46a515*/
                  v26 = *(_DWORD *)(v13 + 164); /*0x46a51b*/
                  v27 = *(_DWORD *)(v13 + 168); /*0x46a521*/
                  v102 = *(_DWORD *)(v13 + 172); /*0x46a527*/
                  LOBYTE(v101) = v25; /*0x46a53b*/
                  v28 = this->fallRate; /*0x46a542*/
                  LODWORD(v88) = v26; /*0x46a551*/
                  LODWORD(v77) = v28; /*0x46a555*/
                  ppv = 0; /*0x46a559*/
                  if ( CoCreateInstance(&rclsid, 0, 7u, &IID_IUnknown, &ppv) >= 0 ) /*0x46a56c*/
                  {
                    v82 = ppv; /*0x46a59d*/
                    Particle::Init((int)ppv, v99, (int)v23, SLODWORD(v77), SLODWORD(v88), v102, v27, v101); /*0x46a5a1*/
                    if ( v82 ) /*0x46a5ac*/
                    {
                      v29 = this + 39; /*0x46a5b2*/
                      v73 = 0.0; /*0x46a5b8*/
                      v74 = 0.0; /*0x46a5ca*/
                      v30 = this->q027; /*0x46a5da*/
                      v75 = 0.0; /*0x46a5dc*/
                      v93 = v30; /*0x46a5ec*/
                      v94 = this->owningHouseIndex; /*0x46a5f8*/
                      v31 = *(_DWORD *)v23; /*0x46a5ff*/
                      v95 = this->q029; /*0x46a605*/
                      v32 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(v31 + 72))(v23, v103); /*0x46a614*/
                      LODWORD(v77) = *v32; /*0x46a61c*/
                      v33 = Math::CalcAngle((double)v94 - (double)(int)v32[1], (double)SLODWORD(v77) - (double)v93); /*0x46a63f*/
                      v34 = Math::RoundToInt((v33 - 1.570796326794897) * -10430.06004058427); /*0x46a653*/
                      v35 = v73; /*0x46a658*/
                      LOWORD(v87) = v34; /*0x46a662*/
                      if ( v73 == 0.0 ) /*0x46a66c*/
                      {
                        v35 = v74; /*0x46a66e*/
                        if ( v74 == 0.0 ) /*0x46a67d*/
                          v73 = 100.0; /*0x46a67f*/
                      }
                      Function::41C430(&v73); /*0x46a693*/
                      v88 = v35; /*0x46a69d*/
                      LODWORD(v77) = SLOWORD(v87) - 0x3FFF; /*0x46a6a7*/
                      v77 = (double)SLODWORD(v77) * -0.00009587672516830327; /*0x46a6b5*/
                      v73 = Math::ArcTan2(v77) * v35; /*0x46a6d6*/
                      v36 = -(Math::SinCos(v77) * v88); /*0x46a6ea*/
                      v74 = v36; /*0x46a6ec*/
                      Math::Hypotenuse2D(&v73); /*0x46a6f0*/
                      v37 = Math::CalcAngle(v75, v36); /*0x46a705*/
                      v38 = (double)((__int16)Math::RoundToInt((v37 - 1.570796326794897) * -10430.06004058427) - 0x3FFF) /*0x46a732*/
                          * -0.00009587672516830327;
                      v77 = v38; /*0x46a738*/
                      Vector3::Magnitude(&v73); /*0x46a73c*/
                      v88 = v38; /*0x46a741*/
                      if ( v77 != 0.0 ) /*0x46a754*/
                      {
                        v73 = v73 / Math::ArcTan2(v77); /*0x46a773*/
                        v74 = v74 / Math::ArcTan2(v77); /*0x46a783*/
                      }
                      v73 = Math::ArcTan2(0.7853262558535721) * v73; /*0x46a7a4*/
                      v74 = Math::ArcTan2(0.7853262558535721) * v74; /*0x46a7bb*/
                      v75 = Math::SinCos(0.7853262558535721) * v88; /*0x46a7ce*/
                      v77 = (double)*(int *)(v13 + 168); /*0x46a7d8*/
                      v39 = v73; /*0x46a7dc*/
                      if ( v73 == 0.0 ) /*0x46a7eb*/
                      {
                        v39 = v74; /*0x46a7ed*/
                        if ( v74 == 0.0 ) /*0x46a7fc*/
                        {
                          v39 = v75; /*0x46a7fe*/
                          if ( v75 == 0.0 ) /*0x46a80d*/
                            v73 = 100.0; /*0x46a80f*/
                        }
                      }
                      Vector3::Magnitude(&v73); /*0x46a823*/
                      v40 = v77 / v39; /*0x46a828*/
                      v90 = *v29; /*0x46a830*/
                      v91 = this->owningHouseIndex; /*0x46a837*/
                      v92 = this->q029; /*0x46a842*/
                      v73 = v40 * v73; /*0x46a859*/
                      v74 = v74 * v40; /*0x46a863*/
                      v75 = v75 * v40; /*0x46a86d*/
                      (*(void (__thiscall **)(LPVOID, int *, double *))(*(_DWORD *)v82 + 496))(v82, &v90, &v73); /*0x46a875*/
                      v41 = this->owningHouseIndex; /*0x46a87d*/
                      v42 = this->q029; /*0x46a880*/
                      v84 = *v29; /*0x46a883*/
                      v43 = *(_BYTE *)(v13 + 329); /*0x46a887*/
                      v85 = v41; /*0x46a88d*/
                      v86 = v42; /*0x46a893*/
                      if ( v43 ) /*0x46a897*/
                      {
                        v44 = (_DWORD *)this->fallRate; /*0x46a899*/
                        if ( v44 ) /*0x46a8a1*/
                          TechnoClass::CreateFireEffect(v44, v23, 0, v13, &v84); /*0x46a8ac*/
                      }
                      if ( *(_BYTE *)(v13 + 337) ) /*0x46a8b1*/
                      {
                        v45 = (int *)this->fallRate; /*0x46a8bb*/
                        if ( v45 ) /*0x46a8c3*/
                          TechnoClass::CreateRadarBlip(v45, v23, v13, &v84); /*0x46a8cc*/
                      }
                    }
                  }
                  result = ++v89; /*0x46a8d9*/
                  if ( v89 == v76 ) /*0x46a8e0*/
                    return result; /*0x46a8e0*/
                  v21 = v81; /*0x46a8e6*/
                }
              }
              v21 += 2; /*0x46a8f6*/
              v20 = ++v100 < SLODWORD(v78); /*0x46a8f9*/
              v81 = v21; /*0x46a902*/
            }
            while ( v20 ); /*0x46a906*/
            v17 = v83; /*0x46a90c*/
            v18 = (int *)v79; /*0x46a910*/
          }
          v79 = ++v18; /*0x46a91c*/
          ++v80; /*0x46a922*/
        }
        while ( v80 <= v17 ); /*0x46a926*/
        v16 = v89; /*0x46a92c*/
      }
      result = v76; /*0x46a930*/
      if ( v16 < v76 ) /*0x46a936*/
      {
        v81 = (_WORD *)(v76 - v16); /*0x46a93e*/
        do /*0x46adc7*/
        {
          v76 = *(_DWORD *)(*(int (__thiscall **)(int *, double *))(*this + 440))(this, &v88); /*0x46a962*/
          v46 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, -2, 2); /*0x46a966*/
          LOWORD(v76) = v46 + v76; /*0x46a971*/
          v47 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, -2, 2); /*0x46a980*/
          v48 = *(_BYTE *)(v13 + 303); /*0x46a985*/
          v49 = this->fallRate; /*0x46a98b*/
          HIWORD(v76) += v47; /*0x46a991*/
          v50 = *(_DWORD *)(v13 + 164); /*0x46a996*/
          v51 = *(_DWORD *)(v13 + 168); /*0x46a99c*/
          v52 = *(_DWORD *)(v13 + 172); /*0x46a9a2*/
          LOBYTE(v83) = v48; /*0x46a9a8*/
          LODWORD(v87) = v49; /*0x46a9b0*/
          LODWORD(v78) = v50; /*0x46a9ba*/
          LODWORD(v77) = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v76); /*0x46a9c3*/
          v79 = 0; /*0x46a9da*/
          if ( CoCreateInstance(&rclsid, 0, 7u, &IID_IUnknown, &v79) >= 0 ) /*0x46a9ea*/
          {
            v80 = (int)v79; /*0x46aa12*/
            Particle::Init((int)v79, v99, SLODWORD(v77), SLODWORD(v87), SLODWORD(v78), v52, v51, v83); /*0x46aa16*/
            if ( v80 ) /*0x46aa21*/
            {
              v73 = 0.0; /*0x46aa31*/
              v74 = 0.0; /*0x46aa41*/
              v75 = 0.0; /*0x46aa51*/
              v53 = (int *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v76); /*0x46aa61*/
              v54 = this + 39; /*0x46aa66*/
              v84 = this->q027; /*0x46aa70*/
              v85 = this->owningHouseIndex; /*0x46aa77*/
              v55 = *v53; /*0x46aa7b*/
              v86 = this->q029; /*0x46aa80*/
              v56 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(v55 + 72))(v53, v103); /*0x46aa8e*/
              LODWORD(v78) = *v56; /*0x46aa96*/
              v57 = Math::CalcAngle((double)v85 - (double)(int)v56[1], (double)SLODWORD(v78) - (double)v84); /*0x46aab3*/
              v58 = Math::RoundToInt((v57 - 1.570796326794897) * -10430.06004058427); /*0x46aad6*/
              if ( v73 == 0.0 && v74 == 0.0 ) /*0x46aaef*/
                v73 = 100.0; /*0x46aaf1*/
              v87 = Math::Sqrt(v74 * v74 + v73 * v73); /*0x46ab26*/
              LODWORD(v78) = v58 - 0x3FFF; /*0x46ab2a*/
              v78 = (double)SLODWORD(v78) * -0.00009587672516830327; /*0x46ab38*/
              v59 = HIDWORD(v78); /*0x46ab3c*/
              v73 = Math::ArcTan2(v78) * v87; /*0x46ab55*/
              v60 = -(Math::SinCos(COERCE_DOUBLE(__PAIR64__(v59, LODWORD(v78)))) * v87); /*0x46ab65*/
              v74 = v60; /*0x46ab67*/
              v78 = (double)*(int *)(v13 + 168); /*0x46ab71*/
              if ( v73 == 0.0 && v60 == 0.0 && v75 == 0.0 ) /*0x46aba2*/
                v73 = 100.0; /*0x46aba4*/
              v61 = Math::Sqrt(v75 * v75 + v73 * v73 + v60 * v60); /*0x46abd6*/
              v62 = v78 / v61; /*0x46abdb*/
              v73 = v62 * v73; /*0x46abec*/
              v74 = v74 * v62; /*0x46abf6*/
              v75 = v75 * v62; /*0x46ac00*/
              Math::Hypotenuse2D(&v73); /*0x46ac06*/
              v63 = Math::CalcAngle(v75, v62); /*0x46ac1b*/
              LODWORD(v78) = (__int16)Math::RoundToInt((v63 - 1.570796326794897) * -10430.06004058427) - 0x3FFF; /*0x46ac3d*/
              v78 = (double)SLODWORD(v78) * -0.00009587672516830327; /*0x46ac4b*/
              v87 = Math::Sqrt(v74 * v74 + v75 * v75 + v73 * v73); /*0x46ac73*/
              if ( v78 != 0.0 ) /*0x46ac89*/
              {
                v64 = HIDWORD(v78); /*0x46ac8b*/
                v73 = v73 / Math::ArcTan2(v78); /*0x46aca4*/
                v74 = v74 / Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v64, LODWORD(v78)))); /*0x46acb4*/
              }
              v73 = Math::ArcTan2(0.7853262558535721) * v73; /*0x46acd5*/
              v74 = Math::ArcTan2(0.7853262558535721) * v74; /*0x46acec*/
              v65 = Math::SinCos(0.7853262558535721); /*0x46acf0*/
              v90 = *v54; /*0x46ad00*/
              v66 = this->owningHouseIndex; /*0x46ad04*/
              v75 = v65 * v87; /*0x46ad07*/
              v67 = this->q029; /*0x46ad0b*/
              v91 = v66; /*0x46ad0e*/
              v92 = v67; /*0x46ad16*/
              (*(void (__thiscall **)(int, int *, double *))(*(_DWORD *)v80 + 496))(v80, &v90, &v73); /*0x46ad29*/
              v68 = this->owningHouseIndex; /*0x46ad31*/
              v69 = this->q029; /*0x46ad34*/
              v93 = *v54; /*0x46ad37*/
              v70 = *(_BYTE *)(v13 + 329); /*0x46ad3e*/
              v94 = v68; /*0x46ad44*/
              v95 = v69; /*0x46ad4d*/
              if ( v70 && this->fallRate ) /*0x46ad56*/
              {
                v71 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v76); /*0x46ad75*/
                TechnoClass::CreateFireEffect((_DWORD *)this->fallRate, v71, 0, v13, &v93); /*0x46ad81*/
              }
              if ( *(_BYTE *)(v13 + 337) ) /*0x46ad86*/
              {
                if ( this->fallRate ) /*0x46ad90*/
                {
                  v72 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v76); /*0x46adad*/
                  TechnoClass::CreateRadarBlip((int *)this->fallRate, v72, v13, &v93); /*0x46adb9*/
                }
              }
            }
          }
          result = (int)v81 - 1; /*0x46adc2*/
          v81 = (_WORD *)((char *)v81 - 1); /*0x46adc3*/
        }
        while ( v81 ); /*0x46adc7*/
      }
    }
  }
  return result; /*0x46adcd*/
}



// ==== 0x0046AE70  BulletClass::SaveLoad_Prefix  this=BulletClass  sig=csp ====
int __thiscall BulletClass::SaveLoad_Prefix(#374 *this, int *a2, int a3)
{
  int result; // eax
  int v4; // ebx
  int v5; // eax

  result = BuildingClass::SaveLoad_Register(this); /*0x46ae7c*/
  v4 = result; /*0x46ae81*/
  if ( result >= 0 ) /*0x46ae85*/
  {
    if ( a2 ) /*0x46ae8e*/
    {
      ObjectClass::Init(a2, (int)&a3); /*0x46ae97*/
      Timer::Start(a2 + 46, 0); /*0x46aea6*/
      Timer::Start(a2 + 49, 0); /*0x46aeb0*/
      *a2 = (int)&BulletClass::`vftable'; /*0x46aeb5*/
      a2[1] = (int)&BulletClass::`vftable'; /*0x46aebb*/
      a2[2] = (int)&BulletClass::`vftable'; /*0x46aec2*/
      a2[3] = (int)&BulletClass::`vftable'; /*0x46aec9*/
    }
    if ( a2[85] /*0x46af17*/
      && (g_BuildingTypeInstanceCount < dword_B0F5C0
       || (byte_B0F5C5 || !dword_B0F5C0)
       && dword_B0F5CC > 0
       && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingInstanceCount + 8))(
            &g_BuildingInstanceCount,
            dword_B0F5C0 + dword_B0F5CC,
            0)) )
    {
      v5 = g_BuildingTypeInstanceCount++; /*0x46af24*/
      *((_DWORD *)g_BuildingClassPoolManager + v5) = a2; /*0x46af33*/
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
int __stdcall BulletClass::SaveLoad_Prefix_0(int *a1, int *a2, int a3)
{
  return AbstractClass::SaveLoad_Prefix(a1, a2, a3); /*0x46afc4*/
}



// ==== 0x0046AFD0  BulletClass::CheckTargetValidity  this=BulletClass  sig=csp ====
LONG __stdcall BulletClass::_vt01(int a1)
{
  ++g_BulletClassPool; /*0x46afdf*/
  return InterlockedIncrement((volatile LONG *)(a1 + 28)); /*0x46afeb*/
}



// ==== 0x0046AFF0  BulletClass::ValidateTarget  this=BulletClass  sig=csp ====
LONG __stdcall BulletClass::_vt02(volatile LONG *a1)
{
  LONG v1; // esi

  --g_BulletClassPool; /*0x46b000*/
  v1 = InterlockedDecrement(a1 + 7); /*0x46b00d*/
  if ( !v1 && a1 ) /*0x46b015*/
    (*(void (__thiscall **)(volatile LONG *, int))(*a1 + 32))(a1, 1); /*0x46b01d*/
  return v1; /*0x46b022*/
}



// ==== 0x0046B050  CreateUIObjectCOM  this=AbstractClass  sig=csp ====
LPVOID __fastcall COM_CreateUIObject(int a1, int a2, int a3, int a4, int a5, int a6, char a7)
{
  LPVOID v10; // esi
  LPVOID ppv; // [esp+8h] [ebp-4h] BYREF

  ppv = 0; /*0x46b06a*/
  if ( CoCreateInstance(&rclsid, 0, 7u, &IID_IUnknown, &ppv) < 0 ) /*0x46b07a*/
    return 0; /*0x46b07d*/
  v10 = ppv; /*0x46b0a4*/
  Particle::Init(a1, a2, a3, a4, a5, a6, a7); /*0x46b0a6*/
  return v10; /*0x46b07c*/
}



// ==== 0x0046B0C0  BulletClass::RenderVoxelBullet  this=BulletClass  sig=csp ====
char __thiscall sub_46B0C0(void *this, int a2, float *a3, _DWORD *a4, _DWORD *a5, unsigned int a6, int a7, int a8)
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
  char *v17; // esi
  int *v18; // eax
  int *SHPFrame; // [esp-18h] [ebp-10Ch]
  int v21; // [esp-10h] [ebp-104h]
  int v22[2]; // [esp+10h] [ebp-E4h] BYREF
  _DWORD *v23; // [esp+18h] [ebp-DCh]
  _DWORD v24[6]; // [esp+1Ch] [ebp-D8h] BYREF
  float v25[12]; // [esp+34h] [ebp-C0h] BYREF
  float v26[12]; // [esp+64h] [ebp-90h] BYREF
  float v27[12]; // [esp+94h] [ebp-60h] BYREF
  float v28[12]; // [esp+C4h] [ebp-30h] BYREF

  v8 = *(_DWORD **)a2; /*0x46b0d0*/
  v9 = *(_DWORD **)(a2 + 4); /*0x46b0d2*/
  v22[0] = (int)this; /*0x46b0dd*/
  v23 = v8; /*0x46b0ed*/
  globalHelper_053C80(v8, 0, 0, a3, (float *)&dword_887470); /*0x46b0f1*/
  Viewport::Clear(); /*0x46b0f6*/
  for ( i = 0; i < v8[1]; ++i ) /*0x46b0fb*/
  {
    if ( v9 ) /*0x46b106*/
    {
      qmemcpy(v25, (const void *)(v9[3] + 48 * (i + v9[1] * (a6 % v9[2]))), sizeof(v25)); /*0x46b135*/
      qmemcpy(v26, MultiplyMatrix3x4(v27, a3, v25), sizeof(v26)); /*0x46b153*/
      v8 = v23; /*0x46b155*/
    }
    v11 = MultiplyMatrix3x4(v28, flt_887430, v26); /*0x46b16a*/
    TransformVoxelVertex(v8, i, 0, v11); /*0x46b176*/
  }
  v12 = Voxel::RenderFrame(v25); /*0x46b18c*/
  v13 = *(_DWORD *)(v22[0] + 172); /*0x46b19b*/
  v14 = 0; /*0x46b1a1*/
  qmemcpy(v24, v12, sizeof(v24)); /*0x46b1a3*/
  v15 = a7 & 0xFFFFFFEF; /*0x46b1b2*/
  if ( *(_BYTE *)(v13 + 759) ) /*0x46b1ac*/
  {
    v14 = dword_81AF00; /*0x46b1b9*/
    v15 = a7 & 0xFFFFDFEF | 0x2000; /*0x46b1bf*/
  }
  v16 = v24[1] + a4[1]; /*0x46b1dd*/
  v22[0] = v24[0] + *a4; /*0x46b1df*/
  v22[1] = v16; /*0x46b1e8*/
  v17 = (char *)BuildingTypeClass_AnimTable + 4 * *(_DWORD *)(v13 + 724); /*0x46b1fe*/
  v21 = *(_BYTE *)(v13 + 759) != 0 ? 0 : 2;
  SHPFrame = (int *)BuildingClass::GetSHPFrame(*(_DWORD **)(*(_DWORD *)v17 + 780), v15); /*0x46b226*/
  v18 = Miles::DriverGet(); /*0x46b234*/
  return BlitterDrawSHP( /*0x46b24d*/
           (int *)g_DSurface_Hidden_2,
           *(_DWORD *)(*(_DWORD *)v17 + 780),
           v18,
           &v24[2],
           v22,
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
int __thiscall MiniStub_46b260(_DWORD *this, int a2)
{
  this->q130 = a2; /*0x46b264*/
  return a2; /*0x46b26a*/
}



// ==== 0x0046B270  TechnoClass::updateHealthBar  this=AbstractClass  sig=csp ====
int __thiscall sub_46B270(_DWORD *this)
{
  return this->q130; /*0x46b276*/
}



// ==== 0x0046B280  BulletClass::InitScalable  this=BulletClass  sig=csp ====
int __thiscall BulletClass::InitScalable(_DWORD **this)
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
  return BulletTypeClass::SetScaledSpawnDelay(this->q0AC, v3 / 3 + (this->q0AC)[185]); /*0x46b307*/
}



// ==== 0x0046B310  SuperWeapon::CreateNukePayload  this=ObjectClass  sig=csp ====
HRESULT __thiscall SuperWeapon_CreateNukePayload(int *this)
{
  int v2; // ebx
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  int v5; // edx
  int v6; // eax
  int v7; // edx
  int v8; // eax
  HRESULT result; // eax
  _DWORD *v10; // edi
  int v11; // ecx
  _DWORD *v12; // eax
  int v13; // esi
  double v14; // st7
  double v15; // st7
  int v16; // eax
  LPVOID ppv; // [esp+10h] [ebp-60h] BYREF
  LPVOID v18; // [esp+14h] [ebp-5Ch] BYREF
  int v19; // [esp+18h] [ebp-58h]
  int v20; // [esp+1Ch] [ebp-54h]
  int v21; // [esp+20h] [ebp-50h]
  int v22; // [esp+24h] [ebp-4Ch]
  double v23; // [esp+28h] [ebp-48h]
  double v24; // [esp+30h] [ebp-40h]
  _DWORD v25[2]; // [esp+3Ch] [ebp-34h] BYREF
  int v26; // [esp+44h] [ebp-2Ch]
  double v27[2]; // [esp+48h] [ebp-28h] BYREF
  _QWORD v28[3]; // [esp+58h] [ebp-18h] BYREF

  v2 = this->q043; /*0x46b323*/
  v3 = (_DWORD *)(*(int (__thiscall **)(int, double *))(*(_DWORD *)v2 + 72))(v2, v27); /*0x46b32e*/
  LOWORD(ppv) = *v3 / 256; /*0x46b341*/
  HIWORD(ppv) = v3[1] / 256; /*0x46b35a*/
  v18 = ppv; /*0x46b367*/
  LODWORD(v24) = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v18); /*0x46b376*/
  ppv = 0; /*0x46b385*/
  v4 = (_DWORD *)*((_DWORD *)g_WeaponTypeConfig + SuperWeaponClass::FindByName(g_INI_Key_NukePayload)); /*0x46b38d*/
  v5 = v4[40]; /*0x46b399*/
  v6 = v4[43]; /*0x46b39f*/
  v19 = v4[42]; /*0x46b3a5*/
  LODWORD(v23) = v5; /*0x46b3ad*/
  v7 = v4[41]; /*0x46b3b1*/
  v20 = v6; /*0x46b3bd*/
  v8 = this->fallRate; /*0x46b3c1*/
  v21 = v7; /*0x46b3d0*/
  v22 = v8; /*0x46b3d4*/
  result = CoCreateInstance(&rclsid, 0, 7u, &IID_IUnknown, &ppv); /*0x46b3d8*/
  if ( result >= 0 ) /*0x46b3e0*/
  {
    v10 = ppv; /*0x46b406*/
    result = Particle::Init((int)ppv, SLODWORD(v23), v2, v22, v21, v20, v19, 1); /*0x46b408*/
    if ( v10 ) /*0x46b40f*/
    {
      (*(void (__thiscall **)(_DWORD *))(*v10 + 212))(v10); /*0x46b419*/
      v11 = LODWORD(v24); /*0x46b41f*/
      v10[76] = v4; /*0x46b423*/
      v12 = (_DWORD *)(*(int (__thiscall **)(int, double *))(*(_DWORD *)v11 + 72))(v11, v27); /*0x46b430*/
      v13 = this->q04C; /*0x46b435*/
      v25[0] = *v12; /*0x46b447*/
      v25[1] = v12[1]; /*0x46b44e*/
      v26 = v12[2]; /*0x46b455*/
      v26 += *(_DWORD *)(*(_DWORD *)(v13 + 160) + 700); /*0x46b46f*/
      v24 = Math::SinCos(1.570748388432313); /*0x46b478*/
      v24 = Math::ArcTan2(1.570748388432313) * v24 * -1.0; /*0x46b49f*/
      v23 = Math::ArcTan2(1.570748388432313); /*0x46b4a8*/
      v14 = Math::ArcTan2(1.570748388432313); /*0x46b4b6*/
      v27[1] = v24; /*0x46b4c7*/
      *(double *)&v28[1] = v24; /*0x46b4e3*/
      v27[0] = v14 * v23 * -1.0; /*0x46b4ea*/
      *(double *)v28 = v27[0]; /*0x46b4f6*/
      v15 = Math::SinCos(1.570748388432313); /*0x46b50f*/
      v16 = *v10; /*0x46b51a*/
      *(double *)&v28[2] = v15 * -1.0; /*0x46b529*/
      return (*(int (__thiscall **)(_DWORD *, _DWORD *, _QWORD *))(v16 + 496))(v10, v25, v28); /*0x46b52f*/
    }
  }
  return result; /*0x46b535*/
}



// ==== 0x0046B540  BulletClass::MissionStubReturnZero  this=BulletClass  sig=csp ====
int BulletClass::_vt12()
{
  return 352; /*0x46b545*/
}



// ==== 0x0046B550  BulletClass::MissionStubReturnZero2  this=BulletClass  sig=csp ====
int BulletClass::_vt11()
{
  return 8; /*0x46b555*/
}



// ==== 0x0046B560  BulletClass::PowerDrainProcess  this=BulletClass  sig=csp ====
int __stdcall BulletClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x46b566*/
    return -2147467261; /*0x46b568*/
  *a2 = 237448649; /*0x46b576*/
  a2[1] = 298949647; /*0x46b57e*/
  a2[2] = -1610610249; /*0x46b587*/
  a2[3] = -777003740; /*0x46b590*/
  return 0; /*0x46b56d*/
}



// ==== 0x0046B5A0  BulletClass::CheckEndOfSequence  this=BulletClass  sig=csp ====
int __thiscall BulletClass::_vt123(_DWORD *this, int a2)
{
  this->q10C = a2; /*0x46b5a4*/
  return a2; /*0x46b5aa*/
}



// ==== 0x0046B5B0  BulletClass::CheckMissionAbort  this=BulletClass  sig=csp ====
int __thiscall BulletClass::_vt34(_DWORD *this)
{
  return this->q0AC; /*0x46b5b6*/
}



// ==== 0x0046B5C0  BulletClass::CheckActionStatus  this=BulletClass  sig=csp ====
#374 *__thiscall BulletClass::_vt08(#374 *Block, char a2)
{
  BulletClass::Dtor(Block); /*0x46b5c3*/
  if ( (a2 & 1) != 0 ) /*0x46b5cd*/
    __3_YAXPAX_Z(Block); /*0x46b5d0*/
  return Block; /*0x46b5da*/
}



// ==== 0x0046B5E0  VectorClass_ptr_BulletClass::Destroy  this=VectorClass_ptr_BulletClass  sig=csp ====
void __thiscall VectorClass_ptr_BulletClass::sub_46B5E0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x46b5e6*/
  *(_DWORD *)(this + 16) = 0; /*0x46b5e9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x46b5f0*/
  {
    __3_YAXPAX_Z(v2); /*0x46b5f6*/
    *(_DWORD *)(this + 4) = 0; /*0x46b5fe*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x46b601*/
  *(_DWORD *)(this + 8) = 0; /*0x46b604*/
}



// ==== 0x0046B610  VectorClass_ptr_BulletClass::GetItemIndex  this=VectorClass_ptr_BulletClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_BulletClass::sub_46B610(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x46b610*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x46b625*/
  else
    return 0; /*0x46b617*/
}



// ==== 0x0046B630  _VectorClass_PAVBulletClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_BulletClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x46b63a*/
}



// ==== 0x0046B640  Timer::Start  this=Timer  sig=csp ====
_DWORD *__thiscall Timer_Start(_DWORD *this, int a2)
{
  *this = g_CurrentFrame; /*0x46b64c*/
  this->ptr_8 = a2; /*0x46b64e*/
  return this; /*0x46b651*/
}



// ==== 0x0046B660  _VectorClass_PAVBulletClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_BulletClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x46b662*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x46b66d*/
  {
    v3 = 0; /*0x46b66f*/
    if ( v2 <= 0 ) /*0x46b673*/
      return 1; /*0x46b693*/
    v4 = (_DWORD *)this->Items; /*0x46b675*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x46b67b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x46b684*/
    {
      ++v3; /*0x46b686*/
      ++v4; /*0x46b687*/
      if ( v3 >= v2 ) /*0x46b68c*/
        return 1; /*0x46b68c*/
    }
  }
  return 0; /*0x46b68e*/
}



// ==== 0x0046B6A0  _VectorClass_PAVBulletClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_BulletClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x46b6ac*/
  {
    this->IsInitialized = 0; /*0x46b6b6*/
    if ( a3 ) /*0x46b6bc*/
      v4 = a3; /*0x46b6d2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x46b6ce*/
    this->IsInitialized = 1; /*0x46b6d6*/
    if ( v4 ) /*0x46b6da*/
    {
      if ( this->Items ) /*0x46b6e5*/
      {
        v6 = this->Capacity; /*0x46b6ec*/
        if ( a2 < v6 ) /*0x46b6f1*/
          v6 = a2; /*0x46b6f3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x46b6f9*/
          ++i; /*0x46b6fe*/
        if ( this->IsAllocated ) /*0x46b70b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x46b716*/
          this->Items = 0; /*0x46b71e*/
        }
      }
      this->Items = v4; /*0x46b727*/
      this->Capacity = a2; /*0x46b72f*/
      this->IsAllocated = a3 == 0; /*0x46b732*/
      return 1; /*0x46b738*/
    }
    else
    {
      return 0; /*0x46b6df*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x46b742*/
    return 1; /*0x46b748*/
  }
}



// ==== 0x0046B750  _VectorClass_PAVBulletClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_BulletClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x46b75d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x46b763*/
    *(_DWORD *)(this + 4) = 0; /*0x46b76b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x46b76e*/
  *(_DWORD *)(this + 8) = 0; /*0x46b771*/
}



// ==== 0x0046B780  _VectorClass_PAVBulletClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_BulletClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x46b780*/
    return 0; /*0x46b788*/
  v3 = *(_DWORD *)(this + 8); /*0x46b78e*/
  result = 0; /*0x46b791*/
  if ( v3 <= 0 ) /*0x46b795*/
    return -1; /*0x46b7ac*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x46b79b*/
  {
    if ( ++result >= v3 ) /*0x46b7aa*/
      return -1; /*0x46b7aa*/
  }
  return result; /*0x46b78a*/
}



// ==== 0x0046B7C0  _VectorClass_PAVBulletClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_BulletClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x46b7c0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x46b7d5*/
  else
    return 0; /*0x46b7c7*/
}



// ==== 0x0046B7E0  VectorClass_ptr_BulletClass::SetCapacity  this=VectorClass_ptr_BulletClass  sig=csp ====
char __thiscall VectorClass_ptr_BulletClass::sub_46B7E0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x46b7ec*/
  {
    this->IsInitialized = 0; /*0x46b7f2*/
    if ( a3 ) /*0x46b7f8*/
      v4 = a3; /*0x46b80e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x46b80a*/
    this->IsInitialized = 1; /*0x46b812*/
    if ( !v4 ) /*0x46b816*/
      return 0; /*0x46b88a*/
    if ( this->Items ) /*0x46b818*/
    {
      v5 = this->Capacity; /*0x46b81f*/
      if ( a2 < v5 ) /*0x46b824*/
        v5 = a2; /*0x46b826*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x46b82c*/
        ++i; /*0x46b831*/
      if ( this->IsAllocated ) /*0x46b83e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x46b849*/
        this->Items = 0; /*0x46b851*/
      }
    }
    this->Items = v4; /*0x46b85a*/
    this->Capacity = a2; /*0x46b862*/
    this->IsAllocated = a3 == 0; /*0x46b865*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x46b86e*/
  }
  v7 = this->Capacity; /*0x46b871*/
  if ( v7 < this->Items ) /*0x46b879*/
    this->Items = v7; /*0x46b87b*/
  return 1; /*0x46b87e*/
}



// ==== 0x0046B890  VectorClass_ptr_BulletClass::FindItemIndex  this=VectorClass_ptr_BulletClass  sig=csp ====
int __thiscall VectorClass_ptr_BulletClass::sub_46B890(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x46b890*/
  result = 0; /*0x46b893*/
  if ( v2 <= 0 ) /*0x46b898*/
    return -1; /*0x46b8af*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x46b89e*/
  {
    if ( ++result >= v2 ) /*0x46b8ad*/
      return -1; /*0x46b8ad*/
  }
  return result; /*0x46b8b2*/
}



// ==== 0x0046B8C0  _VectorClass_PAVBulletClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_BulletClass::_vt00(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x46b8c3*/
  *Block = &VectorClass<BulletClass *>::`vftable'; /*0x46b8c6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x46b8d0*/
  {
    __3_YAXPAX_Z(v3); /*0x46b8d8*/
    *(Block + 1) = 0; /*0x46b8e0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x46b8eb*/
  *(Block + 2) = 0; /*0x46b8f1*/
  if ( (a2 & 1) != 0 ) /*0x46b8f8*/
    __3_YAXPAX_Z(Block); /*0x46b8fb*/
  return Block; /*0x46b905*/
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
_BYTE *__thiscall BulletTypeClass_Constructor(_BYTE *this, char *Source)
{
  int v3; // eax
  int v4; // eax

  ObjectTypeClass::ConstructFull((int)this, Source); /*0x46bbc9*/
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
  *(_DWORD *)this = &BulletTypeClass::`vftable'; /*0x46bce6*/
  this->vtable2 = &BulletTypeClass::`vftable'; /*0x46bcec*/
  this->vtable3 = &BulletTypeClass::`vftable'; /*0x46bcf2*/
  this->vtable4 = &BulletTypeClass::`vftable'; /*0x46bcf9*/
  AbstractClass::GenerateUniqueID((int)(this + 4)); /*0x46bd00*/
  this->q234 = 1; /*0x46bd05*/
  this->q22F = 1; /*0x46bd0c*/
  this->q230 = 0; /*0x46bd13*/
  this->q231 = 0; /*0x46bd19*/
  this->q232 = 1; /*0x46bd1f*/
  this->q233 = 1; /*0x46bd26*/
  this->q235 = 0; /*0x46bd2d*/
  if ( g_BulletTypeInitState < dword_A83C88 /*0x46bd65*/
    || (byte_A83C8D || !dword_A83C88)
    && dword_A83C94 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(BulletTypeClass_Array + 8))(
         &BulletTypeClass_Array,
         dword_A83C88 + dword_A83C94,
         0) )
  {
    v3 = g_BulletTypeInitState++; /*0x46bd72*/
    *((_DWORD *)dword_A83C84 + v3) = this; /*0x46bd81*/
  }
  if ( g_AnimManager < g_AnimTypePool /*0x46bdb8*/
    || (g_AnimPoolLocked || !g_AnimTypePool)
    && g_AnimManagerConfig > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_AnimPoolManager + 8))(
         &g_AnimPoolManager,
         g_AnimTypePool + g_AnimManagerConfig,
         0) )
  {
    v4 = g_AnimManager++; /*0x46bdc5*/
    *((_DWORD *)g_AnimPoolCount + v4) = this; /*0x46bdd4*/
  }
  return this; /*0x46bdd9*/
}



// ==== 0x0046BEE0  BulletTypeClass::LoadFromINI  this=BulletTypeClass  sig=csp ====
char __userpurge BulletTypeClass_LoadFromINI@<al>(int a1@<ecx>, double a2@<st0>, unsigned __int8 ***a3)
{
  char Bool_Overwrite; // al
  char v5; // cl
  char v6; // al
  char v7; // al
  char v8; // cl
  char v9; // al
  char v10; // al
  char v11; // cl
  char v12; // al
  char v13; // al
  char v14; // cl
  char v15; // al
  char v16; // dl
  char v17; // al
  char v18; // cl
  char v19; // al
  int v20; // eax
  char v21; // al
  int v22; // eax
  int v23; // eax
  int Int_Overwrite; // eax
  char v25; // cl
  char v26; // al
  char v27; // al
  int v28; // edx
  char v30; // [esp-Ch] [ebp-98h]
  char v31; // [esp-Ch] [ebp-98h]
  char v32; // [esp-Ch] [ebp-98h]
  int v33; // [esp-Ch] [ebp-98h]
  char v34; // [esp-Ch] [ebp-98h]
  int v35; // [esp-Ch] [ebp-98h]
  char v36; // [esp-Ch] [ebp-98h]
  int v37; // [esp+8h] [ebp-84h]
  int v38; // [esp+8h] [ebp-84h]
  int v39; // [esp+8h] [ebp-84h]
  char Destination[128]; // [esp+Ch] [ebp-80h] BYREF

  INIClass::ResetSection(a3); /*0x46bef3*/
  if ( !ObjectTypeClass::LoadFromINI((char *)a1, a3) ) /*0x46befb*/
    return 0; /*0x46c42a*/
  *(_DWORD *)(a1 + 752) = INIClass::ReadInt_Overwrite(a1 + 36, &unk_81B168, *(_DWORD *)(a1 + 752)); /*0x46bf21*/
  *(_DWORD *)(a1 + 732) = INIClass::ReadInt_Overwrite(a1 + 36, &off_81B164, *(_DWORD *)(a1 + 732)); /*0x46bf3b*/
  *(_DWORD *)(a1 + 736) = INIClass::ReadInt_Overwrite(a1 + 36, aCourselockdura, *(_DWORD *)(a1 + 736)); /*0x46bf55*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)g_INI_Key_Elasticity, *(double *)(a1 + 712)); /*0x46bf71*/
  *(double *)(a1 + 712) = a2; /*0x46bf76*/
  *(_DWORD *)(a1 + 720) = INIClass::ReadInt_Overwrite(a1 + 36, aAcceleration, *(_DWORD *)(a1 + 720)); /*0x46bf90*/
  *(_DWORD *)(a1 + 724) = BuildingTypeClass::FindAnimByName(a1 + 36, g_INI_Key_Color, *(_DWORD *)(a1 + 724)); /*0x46bfaa*/
  *(_BYTE *)(a1 + 667) = INIClass::ReadBool_Overwrite(a1 + 36, aArcing, *(_BYTE *)(a1 + 667)); /*0x46bfc4*/
  *(_BYTE *)(a1 + 661) = INIClass::ReadBool_Overwrite(a1 + 36, aFloater, *(_BYTE *)(a1 + 661)); /*0x46bfde*/
  *(_BYTE *)(a1 + 662) = INIClass::ReadBool_Overwrite(a1 + 36, aSubjecttocliff, *(_BYTE *)(a1 + 662)); /*0x46bff8*/
  *(_BYTE *)(a1 + 663) = INIClass::ReadBool_Overwrite(a1 + 36, aSubjecttoeleva, *(_BYTE *)(a1 + 663)); /*0x46c012*/
  *(_BYTE *)(a1 + 664) = INIClass::ReadBool_Overwrite(a1 + 36, aSubjecttowalls, *(_BYTE *)(a1 + 664)); /*0x46c02c*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite(a1 + 36, aVeryhigh, *(_BYTE *)(a1 + 665)); /*0x46c041*/
  v5 = *(_BYTE *)(a1 + 666); /*0x46c046*/
  *(_BYTE *)(a1 + 665) = Bool_Overwrite; /*0x46c04c*/
  v6 = INIClass::ReadBool_Overwrite(a1 + 36, aShadow, v5); /*0x46c05b*/
  v30 = *(_BYTE *)(a1 + 668); /*0x46c068*/
  *(_BYTE *)(a1 + 666) = v6; /*0x46c06f*/
  *(_BYTE *)(a1 + 668) = INIClass::ReadBool_Overwrite(a1 + 36, aDropping, v30); /*0x46c07a*/
  v7 = INIClass::ReadBool_Overwrite(a1 + 36, g_INI_Key_Level, *(_BYTE *)(a1 + 669)); /*0x46c08f*/
  v8 = *(_BYTE *)(a1 + 670); /*0x46c094*/
  *(_BYTE *)(a1 + 669) = v7; /*0x46c09a*/
  v9 = INIClass::ReadBool_Overwrite(a1 + 36, aInviso_0, v8); /*0x46c0a9*/
  v31 = *(_BYTE *)(a1 + 671); /*0x46c0b6*/
  *(_BYTE *)(a1 + 670) = v9; /*0x46c0bd*/
  *(_BYTE *)(a1 + 671) = INIClass::ReadBool_Overwrite(a1 + 36, aProximity, v31); /*0x46c0c8*/
  v10 = INIClass::ReadBool_Overwrite(a1 + 36, aRanged, *(_BYTE *)(a1 + 672)); /*0x46c0dd*/
  v11 = *(_BYTE *)(a1 + 674); /*0x46c0e2*/
  *(_BYTE *)(a1 + 672) = v10; /*0x46c0e8*/
  v12 = INIClass::ReadBool_Overwrite(a1 + 36, aInaccurate, v11); /*0x46c0f7*/
  v32 = *(_BYTE *)(a1 + 675); /*0x46c104*/
  *(_BYTE *)(a1 + 674) = v12; /*0x46c10b*/
  *(_BYTE *)(a1 + 675) = INIClass::ReadBool_Overwrite(a1 + 36, aFlakscatter, v32); /*0x46c116*/
  v13 = INIClass::ReadBool_Overwrite(a1 + 36, aAa, *(_BYTE *)(a1 + 676)); /*0x46c12b*/
  v14 = *(_BYTE *)(a1 + 677); /*0x46c130*/
  *(_BYTE *)(a1 + 676) = v13; /*0x46c136*/
  v15 = INIClass::ReadBool_Overwrite(a1 + 36, aAg, v14); /*0x46c145*/
  v16 = *(_BYTE *)(a1 + 678); /*0x46c14a*/
  *(_BYTE *)(a1 + 677) = v15; /*0x46c150*/
  *(_BYTE *)(a1 + 678) = INIClass::ReadBool_Overwrite(a1 + 36, aDegenerates, v16); /*0x46c164*/
  v17 = INIClass::ReadBool_Overwrite(a1 + 36, aBouncy, *(_BYTE *)(a1 + 679)); /*0x46c179*/
  v18 = *(_BYTE *)(a1 + 660); /*0x46c17e*/
  *(_BYTE *)(a1 + 679) = v17; /*0x46c184*/
  v19 = INIClass::ReadBool_Overwrite(a1 + 36, aAirburst, v18); /*0x46c193*/
  v33 = *(_DWORD *)(a1 + 684); /*0x46c1a0*/
  *(_BYTE *)(a1 + 660) = v19; /*0x46c1a7*/
  *(_DWORD *)(a1 + 684) = INIClass::ReadInt_Overwrite(a1 + 36, aCluster, v33); /*0x46c1b2*/
  *(_BYTE *)(a1 + 748) = INIClass::ReadBool_Overwrite(a1 + 36, aScalable, *(_BYTE *)(a1 + 748)); /*0x46c1e2*/
  if ( (int)INIClass::GetString( /*0x46c1ef*/
              a3,
              (unsigned __int8 *)(a1 + 36),
              (unsigned __int8 *)g_INI_Key_Image,
              &g_INI_DefaultBuffer,
              (char *)(a1 + 504),
              25) > 0 )
  {
    v37 = *(_DWORD *)(a1 + 728); /*0x46c20a*/
    if ( INIClass::GetString( /*0x46c219*/
           (unsigned __int8 ***)&CCINIClass_INI_Art,
           (unsigned __int8 *)(a1 + 504),
           (unsigned __int8 *)aTrailer,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {
      v20 = AnimTypeClass::FindOrCreate(Destination); /*0x46c226*/
    }
    else
    {
      v20 = v37; /*0x46c22d*/
    }
    *(_DWORD *)(a1 + 728) = v20; /*0x46c231*/
    *(_DWORD *)(a1 + 740) = INIClass::ReadInt_Overwrite(a1 + 504, aSpawndelay, *(_DWORD *)(a1 + 740)); /*0x46c24e*/
    v21 = INIClass::ReadBool_Overwrite(a1 + 504, aRotates, *(_BYTE *)(a1 + 673) == 0); /*0x46c26b*/
    v34 = *(_BYTE *)(a1 + 759); /*0x46c27d*/
    *(_BYTE *)(a1 + 673) = v21 == 0; /*0x46c287*/
    *(_BYTE *)(a1 + 759) = INIClass::ReadBool_Overwrite(a1 + 504, g_INI_Key_Flat, v34); /*0x46c292*/
  }
  v38 = *(_DWORD *)(a1 + 688); /*0x46c2ad*/
  if ( INIClass::GetString( /*0x46c2b9*/
         a3,
         (unsigned __int8 *)(a1 + 36),
         (unsigned __int8 *)aAirburstweapon,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v22 = InfantryTypeClass::Find(Destination); /*0x46c2c6*/
  }
  else
  {
    v22 = v38; /*0x46c2cd*/
  }
  *(_DWORD *)(a1 + 688) = v22; /*0x46c2db*/
  v39 = *(_DWORD *)(a1 + 692); /*0x46c2f4*/
  if ( INIClass::GetString( /*0x46c2f8*/
         a3,
         (unsigned __int8 *)(a1 + 36),
         (unsigned __int8 *)aShrapnelweapon,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v23 = InfantryTypeClass::Find(Destination); /*0x46c305*/
  }
  else
  {
    v23 = v39; /*0x46c30c*/
  }
  v35 = *(_DWORD *)(a1 + 696); /*0x46c318*/
  *(_DWORD *)(a1 + 692) = v23; /*0x46c31f*/
  *(_DWORD *)(a1 + 696) = INIClass::ReadInt_Overwrite(a1 + 36, aShrapnelcount, v35); /*0x46c32a*/
  Int_Overwrite = INIClass::ReadInt_Overwrite(a1 + 36, aDetonationalti, *(_DWORD *)(a1 + 700)); /*0x46c33f*/
  v25 = *(_BYTE *)(a1 + 704); /*0x46c344*/
  *(_DWORD *)(a1 + 700) = Int_Overwrite; /*0x46c34a*/
  v26 = INIClass::ReadBool_Overwrite(a1 + 36, aVertical, v25); /*0x46c359*/
  v36 = *(_BYTE *)(a1 + 681); /*0x46c366*/
  *(_BYTE *)(a1 + 704) = v26; /*0x46c36d*/
  *(_BYTE *)(a1 + 681) = INIClass::ReadBool_Overwrite(a1 + 36, aFirerspalette, v36); /*0x46c378*/
  *(_BYTE *)(a1 + 756) = INIClass::ReadInt_Overwrite(a1 + 504, aAnimlow, *(unsigned __int8 *)(a1 + 756)); /*0x46c399*/
  v27 = INIClass::ReadInt_Overwrite(a1 + 504, aAnimhigh, *(unsigned __int8 *)(a1 + 757)); /*0x46c3b1*/
  v28 = *(unsigned __int8 *)(a1 + 758); /*0x46c3bd*/
  *(_BYTE *)(a1 + 757) = v27; /*0x46c3c3*/
  *(_BYTE *)(a1 + 758) = INIClass::ReadInt_Overwrite(a1 + 504, aAnimrate, v28); /*0x46c3d5*/
  *(_BYTE *)(a1 + 680) = INIClass::ReadBool_Overwrite(a1 + 504, aAnimpalette, *(_BYTE *)(a1 + 680)); /*0x46c3f2*/
  if ( !*(_BYTE *)(a1 + 670) ) /*0x46c3f8*/
    ObjectTypeClass::Load2DArt(a1); /*0x46c406*/
  if ( *(_BYTE *)(a1 + 566) ) /*0x46c40b*/
    VoxelAnimType::LoadAnim((char *)a1); /*0x46c417*/
  return 1; /*0x46c41c*/
}



// ==== 0x0046C4F0  BulletTypeClass::GetROF  this=BulletTypeClass  sig=csp ====
_DWORD *__stdcall BulletTypeClass::_vt27(_DWORD *a1, int *a2)
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
  *a1 = v5; /*0x46c53f*/
  a1[1] = v6; /*0x46c545*/
  a1[2] = v3; /*0x46c549*/
  return a1; /*0x46c54c*/
}



// ==== 0x0046C560  BulletTypeClass::ProcessPower  this=BulletTypeClass  sig=csp ====
int __thiscall BulletTypeClass::ProcessPower(int this, int *a2)
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

  v3 = AbstractTypeClass::ProcessPower((char *)this, a2); /*0x46c569*/
  LOBYTE(v3) = *(_BYTE *)(this + 660); /*0x46c56e*/
  Power::FlagProcess(a2, v3); /*0x46c577*/
  LOBYTE(v4) = *(_BYTE *)(this + 666); /*0x46c57c*/
  Power::FlagProcess(a2, v4); /*0x46c585*/
  LOBYTE(v5) = *(_BYTE *)(this + 667); /*0x46c58a*/
  v6 = Power::FlagProcess(a2, v5); /*0x46c593*/
  LOBYTE(v6) = *(_BYTE *)(this + 668); /*0x46c598*/
  Power::FlagProcess(a2, v6); /*0x46c5a1*/
  LOBYTE(v7) = *(_BYTE *)(this + 669); /*0x46c5a6*/
  Power::FlagProcess(a2, v7); /*0x46c5af*/
  LOBYTE(v8) = *(_BYTE *)(this + 670); /*0x46c5b4*/
  v9 = Power::FlagProcess(a2, v8); /*0x46c5bd*/
  LOBYTE(v9) = *(_BYTE *)(this + 671); /*0x46c5c2*/
  Power::FlagProcess(a2, v9); /*0x46c5cb*/
  LOBYTE(v10) = *(_BYTE *)(this + 672); /*0x46c5d0*/
  Power::FlagProcess(a2, v10); /*0x46c5d9*/
  LOBYTE(v11) = *(_BYTE *)(this + 673); /*0x46c5de*/
  v12 = Power::FlagProcess(a2, v11); /*0x46c5e7*/
  LOBYTE(v12) = *(_BYTE *)(this + 674); /*0x46c5ec*/
  Power::FlagProcess(a2, v12); /*0x46c5f5*/
  LOBYTE(v13) = *(_BYTE *)(this + 675); /*0x46c5fa*/
  Power::FlagProcess(a2, v13); /*0x46c603*/
  LOBYTE(v14) = *(_BYTE *)(this + 676); /*0x46c608*/
  v15 = Power::FlagProcess(a2, v14); /*0x46c611*/
  LOBYTE(v15) = *(_BYTE *)(this + 677); /*0x46c616*/
  Power::FlagProcess(a2, v15); /*0x46c61f*/
  LOBYTE(v16) = *(_BYTE *)(this + 678); /*0x46c624*/
  Power::FlagProcess(a2, v16); /*0x46c62d*/
  LOBYTE(v17) = *(_BYTE *)(this + 679); /*0x46c632*/
  Power::FlagProcess(a2, v17); /*0x46c63b*/
  Checksummer::Add_double(*(_DWORD *)(this + 712), *(_DWORD *)(this + 716)); /*0x46c650*/
  Power::TimerProcess(*(_DWORD *)(this + 720)); /*0x46c65e*/
  Power::TimerProcess(*(_DWORD *)(this + 732)); /*0x46c66c*/
  Power::TimerProcess(*(_DWORD *)(this + 752)); /*0x46c67a*/
  LOBYTE(v18) = *(_BYTE *)(this + 759); /*0x46c67f*/
  return Power::FlagProcess(a2, v18); /*0x46c68d*/
}



// ==== 0x0046C6A0  BulletTypeClass::SaveLoad_Prefix  this=BulletTypeClass  sig=csp ====
int __stdcall BulletTypeClass::SaveLoad_Prefix(_DWORD *a1, int a2)
{
  int result; // eax

  result = ObjectTypeClass::LoadCleanup((int)a1, a2); /*0x46c6ab*/
  if ( result >= 0 ) /*0x46c6b2*/
  {
    if ( a1 ) /*0x46c6b6*/
    {
      ObjectTypeClass::Construct(a1, (int)&a2); /*0x46c6bf*/
      *a1 = &BulletTypeClass::`vftable'; /*0x46c6c4*/
      a1[1] = &BulletTypeClass::`vftable'; /*0x46c6ca*/
      a1[2] = &BulletTypeClass::`vftable'; /*0x46c6d1*/
      a1[3] = &BulletTypeClass::`vftable'; /*0x46c6d8*/
    }
    VoxelAnimType::LoadAnim((char *)a1); /*0x46c6e1*/
    ObjectTypeClass::Load2DArt((char *)a1); /*0x46c6e8*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 182); /*0x46c6f9*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 172); /*0x46c70a*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 173); /*0x46c71b*/
    return 0; /*0x46c720*/
  }
  return result; /*0x46c722*/
}



// ==== 0x0046C730  BulletTypeClass::SaveLoad_Prefix_0  this=BulletTypeClass  sig=csp ====
int __stdcall BulletTypeClass::SaveLoad_Prefix_0(int a1, int a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper(a1, a2, a3); /*0x46c73f*/
  if ( result >= 0 ) /*0x46c746*/
    return 0; /*0x46c748*/
  return result; /*0x46c74a*/
}



// ==== 0x0046C750  BulletTypeClass::GetClassIdentifier  this=BulletTypeClass  sig=csp ====
int __stdcall BulletTypeClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x46c756*/
    return -2147467261; /*0x46c758*/
  *a2 = 1525862007; /*0x46c766*/
  a2[1] = 298976820; /*0x46c76e*/
  a2[2] = 1610654892; /*0x46c777*/
  a2[3] = -1252326136; /*0x46c780*/
  return 0; /*0x46c75d*/
}



// ==== 0x0046C790  ObjectTypeClass::FindOrCreate  this=ObjectClass  sig=csp ====
int __thiscall ObjectTypeClass_FindOrCreate(char *Source)
{
  int v2; // esi

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x46c7ac*/
    return 0; /*0x46c80f*/
  v2 = 0; /*0x46c7bd*/
  if ( g_BulletTypeInitState <= 0 ) /*0x46c7c1*/
  {
LABEL_6:
    if ( __2_YAPAXI_Z(0x2F8u) ) /*0x46c7eb*/
      return BulletTypeClass::Construct(Source); /*0x46c801*/
    return 0; /*0x46c7f5*/
  }
  while ( _strcmpi((const void *)(*((_DWORD *)dword_A83C84 + v2) + 36), Source) ) /*0x46c7da*/
  {
    if ( ++v2 >= g_BulletTypeInitState ) /*0x46c7e4*/
      goto LABEL_6; /*0x46c7e4*/
  }
  return *((_DWORD *)dword_A83C84 + v2); /*0x46c7ff*/
}



// ==== 0x0046C820  BulletTypeClass::GetWarhead  this=BulletTypeClass  sig=csp ====
int __thiscall BulletTypeClass::_vt10(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2; /*0x46c820*/
  if ( a2 == this->trailer ) /*0x46c82c*/
    this->trailer = 0; /*0x46c82e*/
  return result; /*0x46c838*/
}



// ==== 0x0046C840  BulletTypeClass::SetScaledSpawnDelay  this=BulletTypeClass  sig=csp ====
int __thiscall BulletTypeClass::SetScaledSpawnDelay(_DWORD *this, int a2)
{
  this->scaledSpawnDelay = a2; /*0x46c844*/
  return a2; /*0x46c84a*/
}



// ==== 0x0046C850  BulletTypeClass::GetTypeIdentifier  this=BulletTypeClass  sig=csp ====
int BulletTypeClass::_vt11()
{
  return 9; /*0x46c855*/
}



// ==== 0x0046C860  BulletTypeClass::GetObjectSize  this=BulletTypeClass  sig=csp ====
int BulletTypeClass::_vt12()
{
  return 760; /*0x46c865*/
}



// ==== 0x0046C870  BulletTypeClass::Stub  this=BulletTypeClass  sig=csp ====
char __stdcall BulletTypeClass::_vt32(int a1, int a2)
{
  return 0; /*0x46c872*/
}



// ==== 0x0046C880  BulletTypeClass::StubReturnFalse  this=BulletTypeClass  sig=csp ====
int __stdcall BulletTypeClass::_vt35(int a1)
{
  return 0; /*0x46c882*/
}



// ==== 0x0046C890  BulletTypeClass::ddtor  this=BulletTypeClass  sig=csp ====
void **__thiscall BulletTypeClass::_vt08(void **Block, char a2)
{
  int v3; // eax
  int v4; // eax
  void **v6; // [esp+4h] [ebp-4h] BYREF

  *Block = &BulletTypeClass::`vftable'; /*0x46c896*/
  *(Block + 1) = &BulletTypeClass::`vftable'; /*0x46c89c*/
  *(Block + 2) = &BulletTypeClass::`vftable'; /*0x46c8a3*/
  *(Block + 3) = &BulletTypeClass::`vftable'; /*0x46c8aa*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x46c8b1*/
  v6 = Block; /*0x46c8c6*/
  v3 = (*(int (__thiscall **)(int *, void ***))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &v6); /*0x46c8ca*/
  if ( v3 != -1 && v3 < g_AnimManager && v3 < --g_AnimManager ) /*0x46c8e5*/
  {
    do /*0x46c8fd*/
    {
      ++v3; /*0x46c8ed*/
      *((_DWORD *)g_AnimPoolCount + v3 - 1) = *((_DWORD *)g_AnimPoolCount + v3); /*0x46c8f1*/
    }
    while ( v3 < g_AnimManager ); /*0x46c8fd*/
  }
  v6 = Block; /*0x46c90f*/
  v4 = (*(int (__thiscall **)(int *, void ***))(BulletTypeClass_Array + 16))(&BulletTypeClass_Array, &v6); /*0x46c913*/
  if ( v4 != -1 && v4 < g_BulletTypeInitState && v4 < --g_BulletTypeInitState ) /*0x46c92e*/
  {
    do /*0x46c946*/
    {
      ++v4; /*0x46c936*/
      *((_DWORD *)dword_A83C84 + v4 - 1) = *((_DWORD *)dword_A83C84 + v4); /*0x46c93a*/
    }
    while ( v4 < g_BulletTypeInitState ); /*0x46c946*/
  }
  ObjectTypeClass::Destruct((int)Block); /*0x46c94a*/
  if ( (a2 & 1) != 0 ) /*0x46c954*/
    __3_YAXPAX_Z(Block); /*0x46c957*/
  return Block; /*0x46c961*/
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
int __thiscall sub_46CB60(int this, char *Source)
{
  int v3; // eax

  AbstractTypeClass::Constructor(this, Source); /*0x46cb68*/
  *(_DWORD *)this = &CampaignClass::`vftable'; /*0x46cb70*/
  *(_DWORD *)(this + 152) = -1; /*0x46cb76*/
  *(_DWORD *)(this + 668) = -1; /*0x46cb7c*/
  *(_DWORD *)(this + 4) = &CampaignClass::`vftable'; /*0x46cb82*/
  *(_DWORD *)(this + 8) = &CampaignClass::`vftable'; /*0x46cb89*/
  *(_DWORD *)(this + 12) = &CampaignClass::`vftable'; /*0x46cb90*/
  if ( g_UnitTypeInitState < dword_A83D00 /*0x46cbcc*/
    || (byte_A83D05 || !dword_A83D00)
    && dword_A83D0C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A83CF8 + 8))(
         &dword_A83CF8,
         dword_A83D00 + dword_A83D0C,
         0) )
  {
    v3 = g_UnitTypeInitState++; /*0x46cbd9*/
    *((_DWORD *)g_CampaignTypeArray + v3) = this; /*0x46cbe8*/
  }
  *(_BYTE *)(this + 156) = 0; /*0x46cbf7*/
  wcscpy((wchar_t *)(this + 672), &g_TypeClass_DefaultString); /*0x46cbfe*/
  return this; /*0x46cc08*/
}



// ==== 0x0046CC90  CampaignSelect::LookupByName  this=ObjectClass  sig=csp ====
int __thiscall sub_46CC90(void *this)
{
  int v1; // esi

  v1 = 0; /*0x46cc96*/
  if ( g_UnitTypeInitState <= 0 ) /*0x46cc9d*/
    return -1; /*0x46ccc2*/
  while ( _strcmpi((const void *)(*((_DWORD *)g_CampaignTypeArray + v1) + 36), this) ) /*0x46ccb6*/
  {
    if ( ++v1 >= g_UnitTypeInitState ) /*0x46ccc0*/
      return -1; /*0x46ccc0*/
  }
  return v1; /*0x46ccc2*/
}



// ==== 0x0046CCD0  CampaignClass::GetMapData  this=CampaignClass  sig=csp ====
char __thiscall CampaignClass::_vt25(int this, unsigned __int8 ***a2)
{
  int Int_Overwrite; // eax
  int v4; // ecx
  char Destination[1024]; // [esp+8h] [ebp-400h] BYREF

  INIClass::ResetSection(a2); /*0x46cce3*/
  if ( !AbstractTypeClass::LoadFromINI(this, a2) ) /*0x46cceb*/
    return 0; /*0x46cdf7*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x46cd0c*/
                    (int)a2,
                    (unsigned __int8 *)(this + 36),
                    (unsigned __int8 *)aCd,
                    *(_DWORD *)(this + 152));
  v4 = *(_DWORD *)(this + 668); /*0x46cd11*/
  *(_DWORD *)(this + 152) = Int_Overwrite; /*0x46cd17*/
  *(_DWORD *)(this + 668) = INIClass::GetBool(a2, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aFinalmovie, v4); /*0x46cd40*/
  INIClass::GetString( /*0x46cd46*/
    a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)g_INI_Key_Scenario,
    (char *)(this + 156),
    (char *)(this + 156),
    512);
  _strupr((char *)(this + 156)); /*0x46cd4c*/
  if ( INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aDebugonly, 0) ) /*0x46cd5e*/
  {
    INIClass::GetString( /*0x46cda3*/
      a2,
      (unsigned __int8 *)(this + 36),
      (unsigned __int8 *)g_INI_Key_Description,
      0,
      Destination,
      1024);
    strcat(Destination, aForDebugTestin); /*0x46cdcf*/
    BulkCharToWide((_WORD *)(this + 672), (unsigned __int8 *)Destination, -1); /*0x46cde2*/
  }
  else
  {
    INIClass::GetStringEx( /*0x46cd7b*/
      (int)a2,
      (unsigned __int8 *)(this + 36),
      (unsigned __int8 *)g_INI_Key_Description,
      (wchar_t *)(this + 672),
      0x80u);
  }
  return 1; /*0x46cd82*/
}



// ==== 0x0046CE10  CampaignClass::LoadFromINIList  this=CampaignClass  sig=csp ====
int __thiscall CampaignClass_LoadFromINIList(char *this)
{
  int result; // eax
  int v3; // ebp
  unsigned __int8 *StringByIndex; // eax
  int v5; // esi
  void *v6; // esi
  int v7; // eax
  int i; // [esp+8h] [ebp-24h]
  char Source[32]; // [esp+Ch] [ebp-20h] BYREF

  result = INIClass::GetKeyCount(this, (unsigned __int8 *)g_INI_Key_Battles); /*0x46ce1c*/
  v3 = 0; /*0x46ce21*/
  for ( i = result; v3 < i; ++v3 ) /*0x46ce29*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(this, (unsigned __int8 *)g_INI_Key_Battles, v3); /*0x46ce48*/
    INIClass::GetString( /*0x46ce55*/
      (unsigned __int8 ***)this,
      (unsigned __int8 *)g_INI_Key_Battles,
      StringByIndex,
      &g_INI_DefaultBuffer,
      Source,
      32);
    v5 = 0; /*0x46ce5f*/
    if ( g_UnitTypeInitState <= 0 ) /*0x46ce63*/
      goto LABEL_7; /*0x46ce63*/
    while ( _strcmpi((const void *)(*((_DWORD *)g_CampaignTypeArray + v5) + 36), Source) ) /*0x46ce81*/
    {
      if ( ++v5 >= g_UnitTypeInitState ) /*0x46ce8b*/
        goto LABEL_7; /*0x46ce8b*/
    }
    if ( v5 == -1 ) /*0x46ce91*/
    {
LABEL_7:
      v6 = __2_YAPAXI_Z(0x3A0u); /*0x46ce97*/
      if ( v6 ) /*0x46cea8*/
      {
        AbstractTypeClass::Constructor((int)v6, Source); /*0x46ceb5*/
        *((_DWORD *)v6 + 38) = -1; /*0x46ceba*/
        *((_DWORD *)v6 + 167) = -1; /*0x46cec0*/
        *(_DWORD *)v6 = &CampaignClass::`vftable'; /*0x46cec6*/
        *((_DWORD *)v6 + 1) = &CampaignClass::`vftable'; /*0x46cecc*/
        *((_DWORD *)v6 + 2) = &CampaignClass::`vftable'; /*0x46ced3*/
        *((_DWORD *)v6 + 3) = &CampaignClass::`vftable'; /*0x46ceda*/
        if ( g_UnitTypeInitState < dword_A83D00 /*0x46cf18*/
          || (byte_A83D05 || !dword_A83D00)
          && dword_A83D0C > 0
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A83CF8 + 8))(
               &dword_A83CF8,
               dword_A83D00 + dword_A83D0C,
               0) )
        {
          v7 = g_UnitTypeInitState++; /*0x46cf25*/
          *((_DWORD *)g_CampaignTypeArray + v7) = v6; /*0x46cf34*/
        }
        *((_BYTE *)v6 + 156) = 0; /*0x46cf43*/
        wcscpy((wchar_t *)v6 + 336, &g_TypeClass_DefaultString); /*0x46cf4a*/
      }
      else
      {
        v6 = 0; /*0x46cf54*/
      }
    }
    else
    {
      v6 = (void *)*((_DWORD *)g_CampaignTypeArray + v5); /*0x46cf5d*/
    }
    result = (*(int (__thiscall **)(void *, char *))(*(_DWORD *)v6 + 100))(v6, this); /*0x46cf65*/
  }
  return result; /*0x46cf75*/
}



// ==== 0x0046CF80  CampaignClass::ddtor  this=CampaignClass  sig=csp ====
int __stdcall CampaignClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x46cf86*/
    return -2147467261; /*0x46cf88*/
  *a2 = -2439096; /*0x46cf96*/
  a2[1] = 298980631; /*0x46cf9e*/
  a2[2] = 1610642817; /*0x46cfa7*/
  a2[3] = -1252326136; /*0x46cfb0*/
  return 0; /*0x46cf8d*/
}



// ==== 0x0046CFC0  CampaignClass::Stat  this=CampaignClass  sig=csp ====
int __thiscall CampaignClass::_vt13(int this, int *a2)
{
  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x46cfc9*/
  Power::TimerProcess(*(_DWORD *)(this + 152)); /*0x46cfd7*/
  Checksum::AddString((unsigned int *)a2, (unsigned __int8 *)(this + 156)); /*0x46cfe5*/
  return Power::TimerProcess(*(_DWORD *)(this + 668)); /*0x46cff8*/
}



// ==== 0x0046D000  CampaignClass::Write  this=CampaignClass  sig=csp ====
int __stdcall CampaignClass::_vt05(_DWORD *a1, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(a1, a2); /*0x46d00b*/
  if ( result >= 0 ) /*0x46d012*/
  {
    if ( a1 ) /*0x46d016*/
    {
      AbstractTypeClass::Init((int)a1, (int)&a2); /*0x46d01f*/
      *a1 = &CampaignClass::`vftable'; /*0x46d024*/
      a1[1] = &CampaignClass::`vftable'; /*0x46d02a*/
      a1[2] = &CampaignClass::`vftable'; /*0x46d031*/
      a1[3] = &CampaignClass::`vftable'; /*0x46d038*/
    }
    return 0; /*0x46d03f*/
  }
  return result; /*0x46d041*/
}



// ==== 0x0046D050  CampaignClass::Seek  this=CampaignClass  sig=csp ====
int __stdcall CampaignClass::_vt06(int *a1, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix(a1, a2, a3); /*0x46d05f*/
  if ( result >= 0 ) /*0x46d066*/
    return 0; /*0x46d068*/
  return result; /*0x46d06a*/
}



// ==== 0x0046D070  CampaignClass::StubReturn928  this=CampaignClass  sig=csp ====
int CampaignClass::_vt12()
{
  return 928; /*0x46d075*/
}



// ==== 0x0046D080  CampaignClass::StubReturn10  this=CampaignClass  sig=csp ====
int CampaignClass::_vt11()
{
  return 10; /*0x46d085*/
}



// ==== 0x0046D090  CampaignClass::DTOR  this=CampaignClass  sig=csp ====
void **__thiscall CampaignClass::DTOR(void **Block, char a2)
{
  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *Block = &CampaignClass::`vftable'; /*0x46d096*/
  *(Block + 1) = &CampaignClass::`vftable'; /*0x46d09c*/
  *(Block + 2) = &CampaignClass::`vftable'; /*0x46d0a3*/
  *(Block + 3) = &CampaignClass::`vftable'; /*0x46d0aa*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x46d0b1*/
  v5 = Block; /*0x46d0c6*/
  v3 = (*(int (__thiscall **)(int *, void ***))(dword_A83CF8 + 16))(&dword_A83CF8, &v5); /*0x46d0ca*/
  if ( v3 != -1 && v3 < g_UnitTypeInitState && v3 < --g_UnitTypeInitState ) /*0x46d0e5*/
  {
    do /*0x46d0fd*/
    {
      ++v3; /*0x46d0ed*/
      *((_DWORD *)g_CampaignTypeArray + v3 - 1) = *((_DWORD *)g_CampaignTypeArray + v3); /*0x46d0f1*/
    }
    while ( v3 < g_UnitTypeInitState ); /*0x46d0fd*/
  }
  AbstractTypeClass::Dtor(Block); /*0x46d101*/
  if ( (a2 & 1) != 0 ) /*0x46d10b*/
    __3_YAXPAX_Z(Block); /*0x46d10e*/
  return Block; /*0x46d118*/
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
_DWORD *__thiscall sub_46D330(_DWORD *this)
{
  *this = &CampaignScoreClass::`vftable'; /*0x46d334*/
  this->q004 = 0; /*0x46d33a*/
  dword_89E050 = 0; /*0x46d33d*/
  dword_81B1E8 = -1; /*0x46d343*/
  return this; /*0x46d34d*/
}



// ==== 0x0046D350  CampaignScoreClass::method_46D350  this=CampaignScore  sig=csp ====
void __thiscall sub_46D350(_DWORD *this)
{
  *this = &CampaignScoreClass::`vftable'; /*0x46d350*/
}



// ==== 0x0046D480  ObjectClass::method_46D480  this=ObjectClass  sig=csp ====
__int64 __usercall sub_46D480@<edx:eax>(__int64 result@<edx:eax>, int a2@<ecx>)
{
  *((_BYTE *)&g_GameModeOptionState + a2) = BYTE4(result); /*0x46d480*/
  return result; /*0x46d486*/
}



// ==== 0x0046D490  ObjectClass::method_46D490  this=ObjectClass  sig=csp ====
char __thiscall sub_46D490(void *this)
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
  strcpy(v14, g_GameSetupBuffer); /*0x46d4cd*/
  result = Settings::CheckString(); /*0x46d4d6*/
  if ( (_BYTE)result )
  {
    Debug::Log(aSendingCampaig); /*0x46d4e8*/
    v14[43] = dword_A8EB68; /*0x46d4f6*/
    for ( i = 0; i < 8; ++i )
    {
      v2 = *(&g_NetworkPlayerName + i); /*0x46d4fc*/
      if ( !v2 || v2 == g_HouseClass_ObserverFlags || v2 == g_Lobby_PlayerCount ) /*0x46d515*/
      {
        *(_DWORD *)&v14[4 * i + 44] = -1; /*0x46d542*/
        *(_DWORD *)&v14[4 * i + 76] = -1; /*0x46d54a*/
        *(_DWORD *)&v14[4 * i + 108] = -1; /*0x46d552*/
      }
      else
      {
        Option = SessionClass::GetOption(v2); /*0x46d517*/
        v4 = *(&g_NetworkPlayerName + i); /*0x46d51c*/
        *(_DWORD *)&v14[4 * i + 44] = Option; /*0x46d523*/
        PlayerSide = SessionClass::GetPlayerSide(v4); /*0x46d527*/
        v6 = *(&g_NetworkPlayerName + i); /*0x46d52c*/
        *(_DWORD *)&v14[4 * i + 76] = PlayerSide; /*0x46d533*/
        *(_DWORD *)&v14[4 * i + 108] = SessionClass::GetPlayerColor(v6); /*0x46d53c*/
      }
      v7 = ToWideStringChar((char *)*(&g_NetworkPlayerName + i)); /*0x46d561*/
      Debug::Log(
        "Player %i %s: Start %i, Country %i, Color %i\n",
        i,
        v7,
        *(_DWORD *)&v14[4 * i + 44],
        *(_DWORD *)&v14[4 * i + 76],
        *(_DWORD *)&v14[4 * i + 108]);
      v8 = g_CampaignConfig[i]; /*0x46d588*/
      v9 = dword_A8B27C[i]; /*0x46d58f*/
      *(_DWORD *)&v14[4 * i + 140] = g_CampaignPlayerArray[i]; /*0x46d596*/
      v10 = g_CampaignSideIndex[i]; /*0x46d59d*/
      *(_DWORD *)&v14[4 * i + 172] = v8; /*0x46d5a4*/
      *(_DWORD *)&v14[4 * i + 204] = v9; /*0x46d5ab*/
      *(_DWORD *)&v14[4 * i + 236] = v10; /*0x46d5b2*/
      v11 = g_CampaignFactionSlot[i]; /*0x46d5b9*/
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
          Network::SendToPlayer((int)g_NetworkManager, (int)&v13, 455, 1, *v12); /*0x46d628*/
          result = Network::ReceiveLoop(g_NetworkManager); /*0x46d632*/
        }
      }
      ++v12; /*0x46d637*/
    }
    while ( (int)v12 < (int)&g_PlayerNameListEnd ); /*0x46d640*/
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

  if ( Network_EventType != 50 ) /*0x46d65b*/
    return 0; /*0x46d80a*/
  Debug::Log(); /*0x46d666*/
  v0 = dword_A8EB68 != (char)qword_A8D667; /*0x46d67f*/
  dword_A8EB68 = (char)qword_A8D667; /*0x46d686*/
  v1 = (HWND)Dialog::FindByHandle((void *)0xBC6); /*0x46d68b*/
  if ( v1 ) /*0x46d692*/
  {
    DlgItem = GetDlgItem(v1, 1842); /*0x46d69a*/
    if ( DlgItem ) /*0x46d6a2*/
      PostMessageA(DlgItem, 0x405u, 1u, dword_A8EB68); /*0x46d6b3*/
  }
  v3 = 0; /*0x46d6bc*/
  v4 = &g_NetworkPlayerName; /*0x46d6be*/
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
  while ( (int)v4 < (int)&g_PlayerNameListEnd ); /*0x46d7fd*/
  return v0; /*0x46d808*/
}



// ==== 0x0046D810  ObjectClass::method_46D810  this=ObjectClass  sig=csp ====
int sub_46D810()
{
  int result; // eax
  int v1; // [esp+8h] [ebp-1C8h] BYREF
  char v2[43]; // [esp+Ch] [ebp-1C4h] BYREF
  int Option; // [esp+37h] [ebp-199h]
  int PlayerSide; // [esp+3Bh] [ebp-195h]
  int PlayerColor; // [esp+3Fh] [ebp-191h]

  v1 = 51; /*0x46d82c*/
  strcpy(v2, g_GameSetupBuffer); /*0x46d83d*/
  Option = SessionClass::GetOption(*(_DWORD *)Game_PlayerInfoArray); /*0x46d859*/
  PlayerSide = SessionClass::GetPlayerSide(*(_DWORD *)Game_PlayerInfoArray); /*0x46d864*/
  PlayerColor = SessionClass::GetPlayerColor(*(_DWORD *)Game_PlayerInfoArray); /*0x46d874*/
  result = g_NetworkPlayerName; /*0x46d878*/
  if ( g_NetworkPlayerName ) /*0x46d881*/
  {
    Network::SendToPlayer((int)g_NetworkManager, (int)&v1, 455, 1, (wchar_t *)g_NetworkPlayerName); /*0x46d895*/
    return Network::ReceiveLoop(g_NetworkManager); /*0x46d89f*/
  }
  return result; /*0x46d87d*/
}



// ==== 0x0046D8B0  ObjectClass::method_46D8B0  this=ObjectClass  sig=csp ====
char sub_46D8B0()
{
  char v0; // bl
  int v1; // edi
  const wchar_t **v2; // esi
  char *v3; // eax
  int v5; // esi
  int PlayerSide; // eax
  int v7; // [esp-4h] [ebp-10h]

  v0 = 0; /*0x46d8b3*/
  v1 = 0; /*0x46d8b5*/
  v2 = (const wchar_t **)&g_NetworkPlayerName; /*0x46d8b7*/
  while ( 1 ) /*0x46d8c1*/
  {
    v3 = CharToWideString(g_NetworkPlayerBuffer); /*0x46d8c1*/
    if ( !wcscmp((const wchar_t *)v3, *v2) ) /*0x46d8ca*/
      break; /*0x46d8ca*/
    ++v2; /*0x46d8d6*/
    ++v1; /*0x46d8d9*/
    if ( (int)v2 >= (int)&g_PlayerNameListEnd ) /*0x46d8e0*/
      return 0; /*0x46d8e7*/
  }
  if ( v1 == -1 ) /*0x46d8eb*/
    return 0; /*0x46d8f2*/
  if ( SessionClass::GetPlayerSide(*(&g_NetworkPlayerName + v1)) != *((_DWORD *)&qword_A8D667 + 1) ) /*0x46d907*/
    v0 = 1; /*0x46d909*/
  if ( g_GameStateFlags ) /*0x46d913*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)g_GameStateFlags + 28))( /*0x46d918*/
           g_GameStateFlags,
           *((_DWORD *)&qword_A8D667 + 1)) )
    {
      SessionClass::SetPlayerOption(*(&g_NetworkPlayerName + v1), *((int *)&qword_A8D667 + 1)); /*0x46d926*/
    }
    else if ( g_GameStateFlags ) /*0x46d92f*/
    {
      v5 = *(_DWORD *)g_GameStateFlags; /*0x46d938*/
      PlayerSide = SessionClass::GetPlayerSide(*(&g_NetworkPlayerName + v1)); /*0x46d93a*/
      if ( !(*(unsigned __int8 (__thiscall **)(int, int))(v5 + 28))(g_GameStateFlags, PlayerSide) ) /*0x46d946*/
      {
        v7 = (*(int (__thiscall **)(int))(*(_DWORD *)g_GameStateFlags + 40))(g_GameStateFlags); /*0x46d958*/
        SessionClass::SetPlayerOption(*(&g_NetworkPlayerName + v1), v7); /*0x46d960*/
      }
    }
  }
  if ( SessionClass::GetPlayerColor(*(&g_NetworkPlayerName + v1)) != dword_A8D66F ) /*0x46d979*/
    v0 = 1; /*0x46d97b*/
  if ( (unsigned __int8)IsAvailableColorhWnd() ) /*0x46d97d*/
  {
    if ( SessionClass::GetPlayerColor(*(&g_NetworkPlayerName + v1)) != dword_A8D66F ) /*0x46d998*/
    {
      SessionClass::SetPlayerColor(*(&g_NetworkPlayerName + v1), -2); /*0x46d9a3*/
      v0 = 1; /*0x46d9a8*/
    }
  }
  else
  {
    SessionClass::SetPlayerColor(*(&g_NetworkPlayerName + v1), dword_A8D66F); /*0x46d9b9*/
  }
  if ( SessionClass::GetPlayerColor(*(&g_NetworkPlayerName + v1)) != *(_DWORD *)&qword_A8D667 ) /*0x46d9d2*/
    v0 = 1; /*0x46d9d4*/
  if ( (unsigned __int8)sub_4E50A0() ) /*0x46d9d6*/
  {
    if ( SessionClass::GetOption(*(&g_NetworkPlayerName + v1)) != *(_DWORD *)&qword_A8D667 ) /*0x46d9f1*/
    {
      SessionClass::SetOption(*(&g_NetworkPlayerName + v1), -2); /*0x46d9fc*/
      return v0; /*0x46da06*/
    }
  }
  else
  {
    SessionClass::SetOption(*(&g_NetworkPlayerName + v1), *(int *)&qword_A8D667); /*0x46da15*/
  }
  return v0; /*0x46d8e2*/
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
void sub_46DA70()
{
  int v0; // ebx
  int v1; // esi
  int v2; // edi
  size_t v3; // ebp
  int v4; // esi
  int v5; // eax
  int *v6; // ecx
  int v7; // edx
  int v8; // ebp
  int *v9; // ecx
  int v10; // edx
  int v11; // ebp
  int Count; // ebp
  int v13; // ebp
  int v14; // ebp
  int v15; // edi
  int i; // [esp+8h] [ebp-8h]
  int v17; // [esp+Ch] [ebp-4h]

  v0 = HouseClass_Count; /*0x46da74*/
  v1 = 0; /*0x46da7b*/
  g_CampaignScoreFlags = 0; /*0x46da7f*/
  v17 = HouseClass_Count; /*0x46da85*/
  for ( i = 0; v1 < v0; i = v1 ) /*0x46da8d*/
  {
    v2 = *(_DWORD *)&HouseClass_Array->gap0[4 * v1]; /*0x46da9a*/
    if ( v2 /*0x46dab7*/
      && *(_BYTE *)(*(_DWORD *)(v2 + 52) + 422) != 1
      && (unsigned __int8)House::IsCurrentPlayer(*(#375 **)&HouseClass_Array->gap0[4 * v1]) )
    {
      v3 = g_CampaignScoreFlags++; /*0x46dacf*/
      v4 = 28 * v3; /*0x46dae1*/
      dword_A8D228[28 * v3] = 0; /*0x46daea*/
      wcscpy((wchar_t *)&unk_A8D1FC + 56 * v3, (const wchar_t *)(v2 + 90154)); /*0x46daf5*/
      v5 = 0; /*0x46dafa*/
      dword_A8D22C[28 * v3] = 0; /*0x46daff*/
      dword_A8D23C[28 * v3] = 0; /*0x46db05*/
      dword_A8D24C[28 * v3] = 0; /*0x46db0b*/
      dword_A8D25C[28 * v3] = 0; /*0x46db11*/
      dword_A8D224[28 * v3] = *(_DWORD *)(v2 + 90196); /*0x46db1d*/
      if ( !*(_BYTE *)(v2 + 501) ) /*0x46db23*/
      {
        ++dword_A8D228[28 * v3]; /*0x46db34*/
        dword_A8D584 = v3; /*0x46db3a*/
      }
      v6 = (int *)(v2 + 21476); /*0x46db40*/
      v7 = 20; /*0x46db46*/
      do /*0x46db53*/
      {
        v8 = *v6++; /*0x46db4b*/
        v5 += v8; /*0x46db50*/
        --v7; /*0x46db52*/
      }
      while ( v7 ); /*0x46db53*/
      v9 = (int *)(v2 + 21560); /*0x46db55*/
      v10 = 20; /*0x46db5b*/
      do /*0x46db68*/
      {
        v11 = *v9++; /*0x46db60*/
        v5 += v11; /*0x46db65*/
        --v10; /*0x46db67*/
      }
      while ( v10 ); /*0x46db68*/
      dword_A8D23C[v4] = v5; /*0x46db6a*/
      dword_A8D22C[v4] = *(_DWORD *)(v2 + 21640) + *(_DWORD *)(v2 + 21556); /*0x46db84*/
      Count = VectorClass::GetCount((_DWORD *)(v2 + 21840)); /*0x46db95*/
      v13 = VectorClass::GetCount((_DWORD *)(v2 + 21860)) + Count; /*0x46dba2*/
      v14 = VectorClass::GetCount((_DWORD *)(v2 + 21880)) + v13; /*0x46dbaf*/
      dword_A8D24C[v4] = *(_DWORD *)(v2 + 21640) /*0x46dbc8*/
                       + VectorClass::GetCount((_DWORD *)(v2 + 21900))
                       + v14
                       + *(_DWORD *)(v2 + 21556);
      v15 = *(_DWORD *)(v2 + 21736); /*0x46dbce*/
      if ( v15 > 0 ) /*0x46dbd6*/
        dword_A8D25C[v4] += v15; /*0x46dbd8*/
      Debug::Log(); /*0x46dc1c*/
      v1 = i; /*0x46dc21*/
      v0 = v17; /*0x46dc25*/
    }
    ++v1; /*0x46dc2c*/
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



// ==== 0x0046DCC0  sub_46DCC0  this=SkirmishDialog  sig=csp ====
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
    result = IsKnownPointer((wchar_t *)*(&g_NetworkPlayerName + i)); /*0x46dcda*/
    if ( result && i != g_NetworkPlayerCount )
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



// ==== 0x0046DD70  EnableGameModeControls  this=IUnknown  sig=csp ====
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

  if ( g_NetworkPlayerCount )
    v4 = g_NetworkPlayerCount != 1 ? -1 : 1042;
  else
    v4 = 1041; /*0x46dd81*/
  DlgItem = GetDlgItem(hDlg, v4); /*0x46dd9f*/
  EnableWindow(DlgItem, a2); /*0x46ddaf*/
  ResourceID2 = GetResourceID2CSF((void *)g_NetworkPlayerCount); /*0x46ddb7*/
  v7 = GetDlgItem(hDlg, ResourceID2); /*0x46ddbe*/
  EnableWindow(v7, a2); /*0x46ddc2*/
  ResourceID = GetResourceIDCSF((void *)g_NetworkPlayerCount); /*0x46ddca*/
  v9 = GetDlgItem(hDlg, ResourceID); /*0x46ddd1*/
  EnableWindow(v9, a2); /*0x46ddd5*/
  ResourceID3 = GetResourceID3CSF((void *)g_NetworkPlayerCount); /*0x46dddd*/
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



// ==== 0x0046DE20  sub_46DE20  this=SkirmishDialog  sig=csp ====
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
int __stdcall CampaignScore_DialogProc(HWND hWnd, unsigned int a2, UINT_PTR uIDEvent, HWND a4)
{
  HWND v4; // ebp
  UINT_PTR v5; // edi
  int result; // eax
  void *v7; // esi
  HWND v8; // eax
  signed int v9; // ebx
  HWND v10; // eax
  char *v11; // eax
  int v12; // eax
  int v13; // edi
  int v14; // esi
  int jj; // esi
  int v16; // edi
  wchar_t **v17; // esi
  int v18; // ebx
  int v19; // esi
  int v20; // eax
  int ii; // esi
  int v22; // edi
  int v23; // eax
  int v24; // edi
  wchar_t **v25; // esi
  int v26; // ebx
  int v27; // esi
  int v28; // eax
  int m; // esi
  int v30; // edi
  int v31; // eax
  int v32; // edi
  wchar_t **v33; // esi
  int v34; // ebx
  int v35; // esi
  int v36; // eax
  int n; // esi
  int v38; // edi
  int v39; // eax
  signed int v40; // esi
  const wchar_t **v41; // edi
  int *v42; // ebx
  const wchar_t *v43; // eax
  wchar_t *String; // esi
  HWND v45; // eax
  HWND v46; // eax
  signed int v47; // esi
  int *v48; // edi
  wchar_t *v49;... [35179 chars total]



// ==== 0x0046F5E0  ErrorCode::Map  this=AbstractClass  sig=csp ====
int __thiscall ErrorCode_Map(void *this)
{
  if ( this )
    return this != (void *)1 ? -1 : 1042;
  else
    return 1041; /*0x46f5e6*/
}



// ==== 0x0046F600  Skirmish::FillPlayerNames  this=AbstractClass  sig=csp ====
int __thiscall Skirmish_FillPlayerNames(HWND this)
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
    DlgItem = GetDlgItem(this, v2); /*0x46f643*/
    if ( ShowWindow(DlgItem, 0) ) /*0x46f647*/
    {
      v3 = GetDlgItem(this, v2); /*0x46f65e*/
      v4 = *(&g_NetworkPlayerName + i); /*0x46f664*/
      if ( v4 ) /*0x46f66d*/
      {
        SendDlgItemMessageA(this, v2, 0x14Bu, 0, 0); /*0x46f67e*/
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



// ==== 0x0046F6D0  Count::SetupAllCountriesLobby  this=AbstractClass  sig=csp ====
BOOL __thiscall Lobby_SetupAllCountries(HWND this)
{
  void *v1; // ecx
  wchar_t **v2; // esi
  int ResourceID2; // ebp
  BOOL result; // eax
  wchar_t *v5; // ebx
  int v6; // edi
  int PlayerSide; // esi
  int *v8; // [esp+10h] [ebp-10h]
  int v10; // [esp+18h] [ebp-8h]
  HWND hWnd; // [esp+1Ch] [ebp-4h]

  v1 = 0; /*0x46f6da*/
  v2 = (wchar_t **)&g_NetworkPlayerName; /*0x46f6dc*/
  v10 = 0; /*0x46f6e2*/
  v8 = &g_NetworkPlayerName; /*0x46f6e6*/
  do /*0x46f7ff*/
  {
    ResourceID2 = GetResourceID2CSF(v1); /*0x46f6ef*/
    hWnd = GetDlgItem(this, ResourceID2); /*0x46f700*/
    result = ShowWindow(hWnd, 0); /*0x46f704*/
    if ( result ) /*0x46f70c*/
    {
      v5 = *v2; /*0x46f718*/
      v6 = -2; /*0x46f71c*/
      if ( g_GameStateFlags && (g_GameMode_Current == 3 || g_GameMode_Current == 4) ) /*0x46f730*/
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)g_GameStateFlags + 40))(g_GameStateFlags); /*0x46f737*/
      if ( (unsigned __int8)Player::IsObserver(v5) ) /*0x46f73b*/
      {
        PlayerSide = (int)*(v2 - 2557); /*0x46f744*/
      }
      else if ( v5 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x46f752*/
      {
        PlayerSide = v6; /*0x46f754*/
      }
      else if ( v5 == (wchar_t *)g_Lobby_PlayerCount ) /*0x46f75e*/
      {
        PlayerSide = v6; /*0x46f760*/
      }
      else if ( v5 == g_Lobby_PlayerReady ) /*0x46f76a*/
      {
        PlayerSide = v6; /*0x46f76c*/
      }
      else if ( v5 == (wchar_t *)g_Lobby_MaxPlayers ) /*0x46f776*/
      {
        PlayerSide = -3; /*0x46f778*/
      }
      else
      {
        PlayerSide = SessionClass::GetPlayerSide((int)v5); /*0x46f786*/
      }
      if ( g_GameStateFlags /*0x46f795*/
        && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)g_GameStateFlags + 28))(
              g_GameStateFlags,
              PlayerSide) )
      {
        PlayerSide = v6; /*0x46f79e*/
        if ( (unsigned __int8)Player::IsObserver(v5) ) /*0x46f7a0*/
        {
          *(v8 - 2557) = v6; /*0x46f7ad*/
        }
        else if ( IsKnownPointer(v5) ) /*0x46f7b7*/
        {
          SessionClass::SetPlayerOption(*v8, v6); /*0x46f7c7*/
        }
      }
      SetupLobbyCountryCombo(this, ResourceID2, PlayerSide); /*0x46f7d3*/
      result = ShowWindow(hWnd, 5); /*0x46f7df*/
      v2 = (wchar_t **)v8; /*0x46f7e5*/
    }
    ++v2; /*0x46f7ed*/
    v1 = (void *)++v10; /*0x46f7f0*/
    v8 = (int *)v2; /*0x46f7fb*/
  }
  while ( (int)v2 < (int)&g_PlayerNameListEnd ); /*0x46f7ff*/
  return result; /*0x46f805*/
}



// ==== 0x0046F810  GetLobbyPlayerColor  this=SkirmishDialog  sig=ida-proto ====
int __fastcall Lobby_GetPlayerColor(int a1)
{
  wchar_t *v2; // esi

  v2 = (wchar_t *)*(&g_NetworkPlayerName + a1); /*0x46f814*/
  if ( Player::IsObserver(v2) ) /*0x46f81d*/
    return g_CampaignConfig[a1]; /*0x46f826*/
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



// ==== 0x0046F880  GetHouseClassSideIndex  this=-  sig=ida-proto ====
int __fastcall HouseClass_GetSideIndex(int a1)
{
  wchar_t *v2; // esi

  v2 = (wchar_t *)*(&g_NetworkPlayerName + a1); /*0x46f884*/
  if ( Player::IsObserver(v2) ) /*0x46f88d*/
    return g_CampaignSideIndex[a1]; /*0x46f896*/
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



// ==== 0x0046F8F0  Skirmish::SetupAllSpawnLocations  this=AbstractClass  sig=csp ====
void __thiscall Skirmish_SetupAllSpawnLocations(HWND hDlg)
{
  int v1; // ebp
  int ResourceID; // eax
  wchar_t *v4; // esi
  int v5; // edi
  int PlayerColor; // eax
  char *v7; // ebx
  int *v8; // edi
  int v9; // eax
  wchar_t *v10; // esi
  int v11; // ebp
  int v12; // eax
  int v14; // [esp+14h] [ebp-4h]

  v1 = g_NetworkPlayerCount; /*0x46f8f5*/
  v14 = g_NetworkPlayerCount; /*0x46f906*/
  if ( g_NetworkPlayerCount != -1 ) /*0x46f90a*/
  {
    ResourceID = GetResourceIDCSF((void *)g_NetworkPlayerCount); /*0x46f90e*/
    v4 = (wchar_t *)*(&g_NetworkPlayerName + v1); /*0x46f913*/
    v5 = ResourceID; /*0x46f91a*/
    if ( Player::IsObserver(v4) ) /*0x46f91e*/
    {
      PlayerColor = g_CampaignConfig[v1]; /*0x46f927*/
    }
    else if ( v4 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x46f936*/
    {
      PlayerColor = -2; /*0x46f938*/
    }
    else if ( v4 == (wchar_t *)g_Lobby_PlayerCount ) /*0x46f945*/
    {
      PlayerColor = -2; /*0x46f947*/
    }
    else if ( v4 == g_Lobby_PlayerReady ) /*0x46f954*/
    {
      PlayerColor = -2; /*0x46f956*/
    }
    else if ( v4 == (wchar_t *)g_Lobby_MaxPlayers ) /*0x46f963*/
    {
      PlayerColor = -2; /*0x46f965*/
    }
    else
    {
      PlayerColor = SessionClass::GetPlayerColor((int)v4); /*0x46f96e*/
    }
    SetupSkirmishSpawnLocations(hDlg, v5, PlayerColor); /*0x46f978*/
  }
  v7 = 0; /*0x46f97d*/
  v8 = g_CampaignConfig; /*0x46f97f*/
  do /*0x46fa03*/
  {
    if ( v7 != (char *)v1 ) /*0x46f986*/
    {
      v9 = GetResourceIDCSF(v7); /*0x46f98a*/
      v10 = (wchar_t *)v8[2549]; /*0x46f98f*/
      v11 = v9; /*0x46f995*/
      if ( Player::IsObserver(v10) ) /*0x46f999*/
      {
        v12 = *v8; /*0x46f9a2*/
      }
      else if ( v10 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x46f9ac*/
      {
        v12 = -2; /*0x46f9ae*/
      }
      else if ( v10 == (wchar_t *)g_Lobby_PlayerCount ) /*0x46f9bb*/
      {
        v12 = -2; /*0x46f9bd*/
      }
      else if ( v10 == g_Lobby_PlayerReady ) /*0x46f9ca*/
      {
        v12 = -2; /*0x46f9cc*/
      }
      else if ( v10 == (wchar_t *)g_Lobby_MaxPlayers ) /*0x46f9d9*/
      {
        v12 = -2; /*0x46f9db*/
      }
      else
      {
        v12 = SessionClass::GetPlayerColor((int)v10); /*0x46f9e4*/
      }
      SetupSkirmishSpawnLocations(hDlg, v11, v12); /*0x46f9f0*/
      v1 = v14; /*0x46f9f5*/
    }
    ++v8; /*0x46f9f9*/
    ++v7; /*0x46f9fc*/
  }
  while ( (int)v8 < (int)g_CampaignSideIndex ); /*0x46fa03*/
}



// ==== 0x0046FA20  Lobby::UpdateReadyIcons  this=AbstractClass  sig=csp ====
HWND __thiscall Lobby_UpdateReadyIcons(HWND hDlg)
{
  int v2; // ebp
  HWND result; // eax
  int v4; // esi
  wchar_t *v5; // ecx
  int v6; // eax
  HWND v7; // edx
  HWND v8; // [esp+10h] [ebp-4h]

  v2 = HashTable::Find(g_DialogHashTable, off_81B1E0[0], 0); /*0x46fa3f*/
  result = (HWND)HashTable::Find(g_DialogHashTable, off_81B1E4, 0); /*0x46fa49*/
  v4 = 0; /*0x46fa54*/
  v8 = result; /*0x46fa56*/
  do /*0x46fab0*/
  {
    v5 = (wchar_t *)*(&g_NetworkPlayerName + v4); /*0x46fa5a*/
    if ( v5 ) /*0x46fa63*/
    {
      result = (HWND)IsKnownPointer(v5); /*0x46fa65*/
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
        result = GetDlgItem(hDlg, v6); /*0x46fa85*/
        if ( result ) /*0x46fa8b*/
        {
          if ( *((_BYTE *)&g_GameModeOptionState + v4) ) /*0x46fa8d*/
          {
            if ( v4 ) /*0x46fa99*/
              v7 = v8; /*0x46fa9f*/
            else
              v7 = (HWND)v2; /*0x46fa9b*/
          }
          else
          {
            v7 = 0; /*0x46faa5*/
          }
          result = (HWND)CacheDialogInvalidate(result, v7); /*0x46faa7*/
        }
      }
    }
LABEL_15:
    ++v4; /*0x46faac*/
  }
  while ( v4 < 8 ); /*0x46fab0*/
  return result; /*0x46fab2*/
}



// ==== 0x0046FAC0  Lobby::SetupAllFactionSlots  this=AbstractClass  sig=csp ====
int __thiscall Lobby_SetupAllFactionSlots(HWND this)
{
  char *v1; // ebx
  int *v2; // edi
  int ResourceID3; // eax
  wchar_t *v4; // esi
  int v5; // ebp
  int Option; // eax
  int result; // eax

  v1 = 0; /*0x46fac9*/
  v2 = g_CampaignSideIndex; /*0x46facb*/
  do /*0x46fb47*/
  {
    ResourceID3 = GetResourceID3CSF(v1); /*0x46fad2*/
    v4 = (wchar_t *)v2[2541]; /*0x46fad7*/
    v5 = ResourceID3; /*0x46fadd*/
    if ( Player::IsObserver(v4) ) /*0x46fae1*/
    {
      Option = *v2; /*0x46faea*/
    }
    else if ( v4 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x46faf4*/
    {
      Option = -2; /*0x46faf6*/
    }
    else if ( v4 == (wchar_t *)g_Lobby_PlayerCount ) /*0x46fb03*/
    {
      Option = -2; /*0x46fb05*/
    }
    else if ( v4 == g_Lobby_PlayerReady ) /*0x46fb12*/
    {
      Option = -2; /*0x46fb14*/
    }
    else if ( v4 == (wchar_t *)g_Lobby_MaxPlayers ) /*0x46fb21*/
    {
      Option = -2; /*0x46fb23*/
    }
    else
    {
      Option = SessionClass::GetOption((int)v4); /*0x46fb2c*/
    }
    result = SetupLobbyFactionSlots(this, v5, Option); /*0x46fb38*/
    ++v2; /*0x46fb3d*/
    ++v1; /*0x46fb40*/
  }
  while ( (int)v2 < (int)g_CampaignFactionSlot ); /*0x46fb47*/
  return result; /*0x46fb49*/
}



// ==== 0x0046FB50  Lobby::EnableStartButton  this=AbstractClass  sig=csp ====
HWND __thiscall Lobby_EnableStartButton(HWND hDlg)
{
  HWND DlgItem; // esi
  HWND result; // eax
  HWND v4; // edi

  DlgItem = GetDlgItem(hDlg, 1745); /*0x46fb63*/
  result = GetDlgItem(hDlg, 1472); /*0x46fb6b*/
  v4 = result; /*0x46fb6f*/
  if ( DlgItem ) /*0x46fb71*/
  {
    if ( Game_PlayerCount >= (int)g_CampaignScoreFlags ) /*0x46fb80*/
    {
      if ( *((_BYTE *)&g_GameModeOptionState + g_NetworkPlayerCount) ) /*0x46fba0*/
        return (HWND)EnableWindow(DlgItem, 0); /*0x46fbad*/
      else
        return (HWND)EnableWindow(DlgItem, 1); /*0x46fbba*/
    }
    else
    {
      result = (HWND)EnableWindow(DlgItem, 0); /*0x46fb8b*/
      if ( v4 ) /*0x46fb8f*/
        return (HWND)EnableWindow(v4, 1); /*0x46fb94*/
    }
  }
  return result; /*0x46fb96*/
}



// ==== 0x0046FC00  CampaignScore::ProcessScreen  this=CampaignScore  sig=csp ====
void __userpurge sub_46FC00(
        int a1@<ecx>,
        LRESULT (__stdcall *ResourceID3)(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)@<ebp>,
        int a3,
        _BYTE *Block,
        int a5,
        __int16 a6,
        int a7,
        int a8,
        int a9,
        char a10,
        int a11,
        wchar_t *Source)
{
  void *v13; // edi
  int v14; // edx
  LRESULT (__stdcall **v15)(HWND, UINT, WPARAM, LPARAM); // eax
  signed int v16; // esi
  _DWORD *v17; // ecx
  char *v18; // eax
  size_t v19; // edx
  HWND v20; // eax
  HWND v21; // esi
  int i; // esi
  HWND v23; // eax
  HWND v24; // edi
  int j; // esi
  int SideIndex; // eax
  int v27; // eax
  bool v28; // zf
  int k; // esi
  int m; // eax
  int n; // esi
  signed int v32; // edi
  char **v33; // ebp
  int v34; // esi
  wchar_t *String; // edi
  HWND DlgItem; // eax
  char **v37; // edi
  HWND v38; // eax
  HWND v39; // edi
  int ii; // esi
  int v41; // eax
  int jj; // eax
  int kk; // esi
  int nn; // eax
  ... [28290 chars total]



// ==== 0x00464A70  AbstractClass::queryInterface  this=AbstractClass  sig=csp ====
_DWORD *__userpurge AbstractClass::sub_464A70@<eax>(int a1@<esi>, _DWORD *a2, int *a3)
{
  int GroundHeight; // eax
  int v5; // [esp+4h] [ebp-Ch] BYREF
  int v6; // [esp+8h] [ebp-8h]
  int v7; // [esp+Ch] [ebp-4h]

  v5 = *a3; /*0x464a7a*/
  v6 = a3[1]; /*0x464a8b*/
  v7 = a3[2]; /*0x464a92*/
  GroundHeight = Cell::GetGroundHeight(&v5); /*0x464a96*/
  *a2 = a1; /*0x464aa5*/
  a2[1] = v6; /*0x464aab*/
  a2[2] = GroundHeight; /*0x464aaf*/
  return a2; /*0x464a9f*/
}


// ==== 0x00464AC0  AbstractClass::addRef  this=AbstractClass  sig=csp ====
bool __thiscall AbstractClass::sub_464AC0(int this, _WORD *a2, int a3)
{
  return *(_BYTE *)(this + 5891) || BuildingClass::ValidatePath((int *)this, a2, a3); /*0x464aca*/
}


// ==== 0x00464AF0  BuildingTypeClass::GetSizeInLeptons  this=BuildingTypeClass  sig=csp ====
_DWORD *__thiscall BuildingTypeClass::GetSizeInLeptons(_DWORD *this, _DWORD *a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // eax

  v2 = this->qEF0; /*0x464af0*/
  v3 = unk_89DDB8 * this->DeployingAnimLoaded; /*0x464afc*/
  v2 *= 4; /*0x464b03*/
  v4 = *(int *)((char *)dword_8192B8 + v2); /*0x464b0b*/
  v5 = *(int *)((char *)dword_819310 + v2); /*0x464b11*/
  *a2 = v4 << 8; /*0x464b1d*/
  a2[1] = v5 << 8; /*0x464b22*/
  a2[2] = v3; /*0x464b27*/
  return a2; /*0x464b2a*/
}


// ==== 0x00464B30  BuildingTypeClass::UpdatePower  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::UpdatePower(#376 *this)
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
  int *v54; // [esp+Ch] [ebp+4h]

  BuildingTypeClass::ProcessPower((int)this, v54); /*0x464b39*/
  Checksummer::Add_double(this->GateCloseDelay, this->qE2C); /*0x464b4e*/
  Power::TimerProcess(this->q38C); /*0x464b5c*/
  Power::TimerProcess(this->LightIntensity); /*0x464b6a*/
  Power::TimerProcess(this->LightRedTint); /*0x464b78*/
  Power::TimerProcess(this->LightGreenTint); /*0x464b86*/
  Power::TimerProcess(this->HoverAttack); /*0x464b94*/
  Checksum::AddString((unsigned int *)v54, (unsigned __int8 *)this + 3676); /*0x464ba2*/
  Checksum::AddString((unsigned int *)v54, (unsigned __int8 *)this + 3720); /*0x464bb0*/
  Power::TimerProcess(this->FoundationOutside); /*0x464bbe*/
  Power::TimerProcess(this->BuildingTypeClass_field_ED8); /*0x464bcc*/
  Power::TimerProcess(this->BuildLimit); /*0x464bda*/
  Power::TimerProcess(this->BuildingAnimFrame_6); /*0x464be8*/
  Power::TimerProcess(this->BuildingAnim_0x15); /*0x464bf6*/
  Power::TimerProcess(this->Upgrades); /*0x464c04*/
  Power::TimerProcess(this->Category); /*0x464c12*/
  Power::TimerProcess(this->DeployingAnimLoaded); /*0x464c20*/
  Power::TimerProcess(this->UnderDoorAnim); /*0x464c2e*/
  Power::TimerProcess(this->UnderDoorAnimLoaded); /*0x464c3c*/
  Power::TimerProcess(this->TechnoTypeClass_field_3C0); /*0x464c4a*/
  Checksummer::Add_Buffer((unsigned int *)v54, (unsigned __int8 *)this + 3844, 72); /*0x464c5a*/
  Checksummer::Add_Buffer((unsigned int *)v54, (unsigned __int8 *)this + 3916, 1428); /*0x464c6d*/
  Power::TimerProcess(this->IFVMode); /*0x464c7b*/
  v2 = Power::TimerProcess(this->CloseRange); /*0x464c89*/
  LOBYTE(v2) = this->HoverPad; /*0x464c8e*/
  Power::FlagProcess(v54, v2); /*0x464c97*/
  LOBYTE(v3) = this->IsPlug; /*0x464c9c*/
  Power::FlagProcess(v54, v3); /*0x464ca5*/
  LOBYTE(v4) = this->IsTemple; /*0x464caa*/
  v5 = Power::FlagProcess(v54, v4); /*0x464cb3*/
  LOBYTE(v5) = this->HasSpotlight; /*0x464cb8*/
  Power::FlagProcess(v54, v5); /*0x464cc1*/
  LOBYTE(v6) = this->BaseNormal; /*0x464cc6*/
  Power::FlagProcess(v54, v6); /*0x464ccf*/
  LOBYTE(v7) = this->EligibileForAllyBuilding; /*0x464cd4*/
  v8 = Power::FlagProcess(v54, v7); /*0x464cdd*/
  LOBYTE(v8) = this->NeedsEngineer; /*0x464ce2*/
  Power::FlagProcess(v54, v8); /*0x464ceb*/
  LOBYTE(v9) = this->Bib; /*0x464cf0*/
  Power::FlagProcess(v54, v9); /*0x464cf9*/
  LOBYTE(v10) = this->Wall; /*0x464cfe*/
  v11 = Power::FlagProcess(v54, v10); /*0x464d07*/
  LOBYTE(v11) = this->Capturable; /*0x464d0c*/
  Power::FlagProcess(v54, v11); /*0x464d15*/
  LOBYTE(v12) = this->Powered; /*0x464d1a*/
  Power::FlagProcess(v54, v12); /*0x464d23*/
  LOBYTE(v13) = this->Unsellable; /*0x464d28*/
  v14 = Power::FlagProcess(v54, v13); /*0x464d31*/
  LOBYTE(v14) = this->Radar; /*0x464d36*/
  Power::FlagProcess(v54, v14); /*0x464d3f*/
  LOBYTE(v15) = this->SpySat; /*0x464d44*/
  Power::FlagProcess(v54, v15); /*0x464d4d*/
  LOBYTE(v16) = this->ChargeAnim; /*0x464d52*/
  v17 = Power::FlagProcess(v54, v16); /*0x464d5b*/
  LOBYTE(v17) = this->IsAnimDelayedFire; /*0x464d60*/
  Power::FlagProcess(v54, v17); /*0x464d69*/
  Power::TimerProcess(this->DelayedFireDelay); /*0x464d77*/
  LOBYTE(v18) = this->SiloDamage; /*0x464d7c*/
  v19 = Power::FlagProcess(v54, v18); /*0x464d85*/
  LOBYTE(v19) = this->UnitRepair; /*0x464d8a*/
  Power::FlagProcess(v54, v19); /*0x464d93*/
  LOBYTE(v20) = this->UnitReload; /*0x464d98*/
  Power::FlagProcess(v54, v20); /*0x464da1*/
  LOBYTE(v21) = this->Cloning; /*0x464da6*/
  v22 = Power::FlagProcess(v54, v21); /*0x464daf*/
  LOBYTE(v22) = this->Grinding; /*0x464db4*/
  Power::FlagProcess(v54, v22); /*0x464dbd*/
  LOBYTE(v23) = this->UnitAbsorb; /*0x464dc2*/
  Power::FlagProcess(v54, v23); /*0x464dcb*/
  LOBYTE(v24) = this->InfantryAbsorb; /*0x464dd0*/
  v25 = Power::FlagProcess(v54, v24); /*0x464dd9*/
  LOBYTE(v25) = this->SecretLab; /*0x464dde*/
  Power::FlagProcess(v54, v25); /*0x464de7*/
  LOBYTE(v26) = this->Flat; /*0x464dec*/
  Power::FlagProcess(v54, v26); /*0x464df5*/
  LOBYTE(v27) = this->DockUnload; /*0x464dfa*/
  v28 = Power::FlagProcess(v54, v27); /*0x464e03*/
  LOBYTE(v28) = this->Recoilless; /*0x464e08*/
  Power::FlagProcess(v54, v28); /*0x464e11*/
  LOBYTE(v29) = this->BridgeRepairHut; /*0x464e16*/
  Power::FlagProcess(v54, v29); /*0x464e1f*/
  LOBYTE(v30) = this->Gate; /*0x464e24*/
  v31 = Power::FlagProcess(v54, v30); /*0x464e2d*/
  LOBYTE(v31) = this->SAM; /*0x464e32*/
  Power::FlagProcess(v54, v31); /*0x464e3b*/
  LOBYTE(v32) = this->ConstructionYard; /*0x464e40*/
  Power::FlagProcess(v54, v32); /*0x464e49*/
  LOBYTE(v33) = this->NukeSilo; /*0x464e4e*/
  v34 = Power::FlagProcess(v54, v33); /*0x464e57*/
  LOBYTE(v34) = this->Refinery; /*0x464e5c*/
  Power::FlagProcess(v54, v34); /*0x464e65*/
  LOBYTE(v35) = this->WeaponsFactory; /*0x464e6a*/
  Power::FlagProcess(v54, v35); /*0x464e73*/
  LOBYTE(v36) = this->LaserFencePost; /*0x464e78*/
  v37 = Power::FlagProcess(v54, v36); /*0x464e81*/
  LOBYTE(v37) = this->LaserFence; /*0x464e86*/
  Power::FlagProcess(v54, v37); /*0x464e8f*/
  LOBYTE(v38) = this->FirestormWall; /*0x464e94*/
  Power::FlagProcess(v54, v38); /*0x464e9d*/
  LOBYTE(v39) = this->Helipad; /*0x464ea2*/
  v40 = Power::FlagProcess(v54, v39); /*0x464eab*/
  LOBYTE(v40) = this->OrePurifier; /*0x464eb0*/
  Power::FlagProcess(v54, v40); /*0x464eb9*/
  LOBYTE(v41) = this->ExtraDamageStage; /*0x464ebe*/
  Power::FlagProcess(v54, v41); /*0x464ec7*/
  LOBYTE(v42) = this->Hospital; /*0x464ecc*/
  v43 = Power::FlagProcess(v54, v42); /*0x464ed5*/
  LOBYTE(v43) = this->Armory; /*0x464eda*/
  Power::FlagProcess(v54, v43); /*0x464ee3*/
  Power::TimerProcess(this->GateStages); /*0x464ef1*/
  v44 = Power::TimerProcess(this->PowersUpToLevel); /*0x464eff*/
  LOBYTE(v44) = this->DamagedDoor; /*0x464f04*/
  Power::FlagProcess(v54, v44); /*0x464f0d*/
  LOBYTE(v45) = this->InvisibleInGame; /*0x464f12*/
  Power::FlagProcess(v54, v45); /*0x464f1b*/
  LOBYTE(v46) = this->TerrainPalette; /*0x464f20*/
  v47 = Power::FlagProcess(v54, v46); /*0x464f29*/
  LOBYTE(v47) = this->TurretAnimIsVoxel; /*0x464f2e*/
  Power::FlagProcess(v54, v47); /*0x464f37*/
  LOBYTE(v48) = this->BarrelAnimIsVoxel; /*0x464f3c*/
  Power::FlagProcess(v54, v48); /*0x464f45*/
  Checksum::AddString((unsigned int *)v54, (unsigned __int8 *)this + 5908); /*0x464f53*/
  Checksummer::Add_double(this->u32_1728, this->u32_172C); /*0x464f68*/
  Checksummer::Add_Buffer((unsigned int *)v54, (unsigned __int8 *)this + 5936, 12); /*0x464f78*/
  Checksummer::Add_Buffer((unsigned int *)v54, (unsigned __int8 *)this + 5948, 12); /*0x464f88*/
  Checksummer::Add_Buffer((unsigned int *)v54, (unsigned __int8 *)this + 5960, 12); /*0x464f98*/
  v49 = Checksummer::Add_Buffer((unsigned int *)v54, (unsigned __int8 *)this + 5972, 12); /*0x464fa8*/
  LOBYTE(v49) = this->CrateBeneath; /*0x464fad*/
  Power::FlagProcess(v54, v49); /*0x464fb6*/
  LOBYTE(v50) = this->LeaveRubble; /*0x464fbb*/
  Power::FlagProcess(v54, v50); /*0x464fc4*/
  LOBYTE(v51) = this->CrateBeneathIsMoney; /*0x464fc9*/
  Power::FlagProcess(v54, v51); /*0x464fd2*/
  Power::TimerProcess(this->q5E0); /*0x464fe0*/
  Power::TimerProcess(this->q5C4); /*0x464fee*/
  LOBYTE(v52) = this->ConcentricRadialIndicator; /*0x464ff3*/
  return Power::FlagProcess(v54, v52); /*0x465001*/
}


// ==== 0x00465010  BuildingTypeClass::SaveLoad_Prefix  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::SaveLoad_Prefix(#376 *this)
{
  int v1; // esi
  int v2; // edi
  int result; // eax
  int v4; // ecx
  int v5; // ebp
  int v6; // eax
  _DWORD *v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // [esp+28h] [ebp-Ch] BYREF
  int v11; // [esp+2Ch] [ebp-8h]
  int v12; // [esp+30h] [ebp-4h]
  int v13; // [esp+38h] [ebp+4h] BYREF
  int v14; // [esp+3Ch] [ebp+8h] BYREF

  v1 = v13; /*0x465016*/
  if ( *(_BYTE *)(v13 + 5986) && *(_DWORD *)(v13 + 3584) ) /*0x465025*/
  {
    __3_YAXPAX_Z(*(void **)(v13 + 3584)); /*0x465030*/
    *(_DWORD *)(v1 + 3584) = 0; /*0x465038*/
    *(_BYTE *)(v1 + 3588) = 0; /*0x46503e*/
  }
  if ( *(_BYTE *)(v1 + 5404) && *(_DWORD *)(v1 + 5400) ) /*0x46504c*/
  {
    __3_YAXPAX_Z(*(void **)(v1 + 5400)); /*0x465057*/
    *(_DWORD *)(v1 + 5400) = 0; /*0x46505f*/
    *(_BYTE *)(v1 + 5404) = 0; /*0x465065*/
  }
  if ( *(_BYTE *)(v1 + 5352) && *(_DWORD *)(v1 + 5348) ) /*0x465073*/
  {
    __3_YAXPAX_Z(*(void **)(v1 + 5348)); /*0x46507e*/
    *(_DWORD *)(v1 + 5348) = 0; /*0x465086*/
    *(_BYTE *)(v1 + 5352) = 0; /*0x46508c*/
  }
  if ( *(_BYTE *)(v1 + 5360) && *(_DWORD *)(v1 + 5356) ) /*0x46509a*/
  {
    __3_YAXPAX_Z(*(void **)(v1 + 5356)); /*0x4650a5*/
    *(_DWORD *)(v1 + 5356) = 0; /*0x4650ad*/
    *(_BYTE *)(v1 + 5360) = 0; /*0x4650b3*/
  }
  if ( *(_BYTE *)(v1 + 5368) && *(_DWORD *)(v1 + 5364) ) /*0x4650c1*/
  {
    __3_YAXPAX_Z(*(void **)(v1 + 5364)); /*0x4650cc*/
    *(_DWORD *)(v1 + 5364) = 0; /*0x4650d4*/
    *(_BYTE *)(v1 + 5368) = 0; /*0x4650da*/
  }
  if ( *(_BYTE *)(v1 + 5376) && *(_DWORD *)(v1 + 5372) ) /*0x4650e8*/
  {
    __3_YAXPAX_Z(*(void **)(v1 + 5372)); /*0x4650f3*/
    *(_DWORD *)(v1 + 5372) = 0; /*0x4650fb*/
    *(_BYTE *)(v1 + 5376) = 0; /*0x465101*/
  }
  if ( *(_BYTE *)(v1 + 5384) && *(_DWORD *)(v1 + 5380) ) /*0x46510f*/
  {
    __3_YAXPAX_Z(*(void **)(v1 + 5380)); /*0x46511a*/
    *(_DWORD *)(v1 + 5380) = 0; /*0x465122*/
    *(_BYTE *)(v1 + 5384) = 0; /*0x465128*/
  }
  v2 = v14; /*0x46512e*/
  result = TechnoTypeClass::SaveLoad_Prefix(v1, v14); /*0x465134*/
  if ( result >= 0 ) /*0x46513b*/
  {
    if ( v1 ) /*0x465143*/
      BuildingTypeClass::loadBuildingProperty_b_545E520((_DWORD *)v1, (int)&v13); /*0x46514c*/
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &v14, 4, 0); /*0x46515c*/
    if ( result >= 0 ) /*0x465161*/
    {
      v4 = v1 + 6020; /*0x465167*/
      if ( v1 != -6020 ) /*0x46516f*/
      {
        *(_DWORD *)(v1 + 6024) = 0; /*0x465171*/
        *(_DWORD *)(v1 + 6028) = 0; /*0x465174*/
        *(_BYTE *)(v1 + 6032) = 1; /*0x465177*/
        *(_BYTE *)(v1 + 6033) = 0; /*0x46517b*/
        *(_DWORD *)v4 = &vt_VectorClass_TPoint3D_int; /*0x46517e*/
      }
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v4 + 8))(v4, v14, 0); /*0x46518c*/
      v5 = 0; /*0x46518f*/
      if ( v14 <= 0 ) /*0x465195*/
      {
LABEL_32:
        BuildingTypeClass::LoadVoxel(v1); /*0x4651ed*/
        ObjectTypeClass::Load2DArt((char *)v1); /*0x4651f6*/
        v9 = *(_DWORD *)(v1 + 3824); /*0x4651fb*/
        *(_DWORD *)(v1 + 3672) = 0; /*0x465210*/
        v9 *= 120; /*0x465219*/
        *(_DWORD *)(v1 + 3580) = (char *)&unk_89C900 + v9; /*0x465228*/
        *(_DWORD *)(v1 + 3796) = (char *)&unk_89D368 + v9; /*0x46522e*/
        ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v1 + 3668)); /*0x465234*/
        ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v1 + 3744)); /*0x465245*/
        ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v1 + 3748)); /*0x465256*/
        ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v1 + 3752)); /*0x465267*/
        ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v1 + 3756)); /*0x465278*/
        BuildingTypeClass::LoadVoxel(v1); /*0x46527f*/
        *(_DWORD *)(v1 + 3584) = 0; /*0x465284*/
        *(_BYTE *)(v1 + 3588) = 0; /*0x46528a*/
        *(_DWORD *)(v1 + 5400) = 0; /*0x465290*/
        *(_BYTE *)(v1 + 5404) = 0; /*0x465296*/
        *(_DWORD *)(v1 + 5348) = 0; /*0x46529c*/
        *(_BYTE *)(v1 + 5352) = 0; /*0x4652a2*/
        *(_DWORD *)(v1 + 5356) = 0; /*0x4652a8*/
        *(_BYTE *)(v1 + 5360) = 0; /*0x4652ae*/
        *(_DWORD *)(v1 + 5364) = 0; /*0x4652b4*/
        *(_BYTE *)(v1 + 5368) = 0; /*0x4652ba*/
        *(_DWORD *)(v1 + 5372) = 0; /*0x4652c0*/
        *(_BYTE *)(v1 + 5376) = 0; /*0x4652c6*/
        *(_DWORD *)(v1 + 5380) = 0; /*0x4652cc*/
        *(_BYTE *)(v1 + 5384) = 0; /*0x4652d2*/
        BuildingTypeClass::LoadAnimations(v1, *((_DWORD *)MEMORY[0xA8B230] + 1174)); /*0x4652e6*/
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
          v7 = (_DWORD *)(v13 + *(_DWORD *)(v1 + 6024)); /*0x4651cb*/
          v8 = v13 + 12; /*0x4651cd*/
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
int __thiscall BuildingTypeClass::SaveLoad_Prefix_0(#376 *this)
{
  int result; // eax
  int v2; // edx
  int v3; // ebp
  int i; // edi
  int v5; // [esp+4h] [ebp-10h]
  _DWORD *v6; // [esp+18h] [ebp+4h]
  int *v7; // [esp+1Ch] [ebp+8h]
  int v8; // [esp+20h] [ebp+Ch] BYREF

  result = TechnoTypeClass::SaveLoad_Prefix_0((int)v6, v6, v7, v8, v5); /*0x465313*/
  if ( result >= 0 ) /*0x46531a*/
  {
    v2 = *v7; /*0x465322*/
    v8 = v6[1507]; /*0x46532e*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v2 + 16))(v7, &v8, 4, 0); /*0x465332*/
    if ( result >= 0 ) /*0x465337*/
    {
      v3 = 0; /*0x46533d*/
      if ( v8 <= 0 ) /*0x465341*/
      {
        return 0; /*0x465368*/
      }
      else
      {
        for ( i = 0; ; i += 12 ) /*0x465343*/
        {
          result = (*(int (__stdcall **)(int *, int, int, _DWORD))(*v7 + 16))(v7, i + v6[1506], 12, 0); /*0x465355*/
          if ( result < 0 ) /*0x46535a*/
            break; /*0x46535a*/
          if ( ++v3 >= v8 ) /*0x465366*/
            return 0; /*0x465366*/
        }
      }
    }
  }
  return result; /*0x46536a*/
}


// ==== 0x00465380  BuildingTypeClass::GetClassIdentifier  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::_vt03(#376 *this)
{
  _DWORD *v2; // [esp+8h] [ebp+8h]

  if ( !v2 ) /*0x465386*/
    return -2147467261; /*0x465388*/
  *v2 = -1366608933; /*0x465396*/
  v2[1] = 298976796; /*0x46539e*/
  v2[2] = 1610654892; /*0x4653a7*/
  v2[3] = -1252326136; /*0x4653b0*/
  return 0; /*0x46538d*/
}


// ==== 0x004653C0  BuildingTypeClass::FindOrCreate  this=IUnknown  sig=csp ====
BuildingTypeClass *__thiscall BuildingTypeClass::FindOrCreate(char *Source)
{
  int v2; // esi
  int v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x4653dc*/
    return 0; /*0x46543f*/
  v2 = 0; /*0x4653ed*/
  if ( (int)g_TriggerClassCount <= 0 ) /*0x4653f1*/
  {
LABEL_6:
    v3 = __2_YAPAXI_Z(0x1798u); /*0x465416*/
    if ( v3 ) /*0x465425*/
      return (BuildingTypeClass *)BuildingTypeClass::ConstructFull(v3, Source); /*0x465431*/
    return 0; /*0x465425*/
  }
  while ( _strcmpi((const void *)(*((_DWORD *)g_TriggerTypeCount + v2) + 36), Source) ) /*0x46540a*/
  {
    if ( ++v2 >= (int)g_TriggerClassCount ) /*0x465414*/
      goto LABEL_6; /*0x465414*/
  }
  return (BuildingTypeClass *)*((_DWORD *)g_TriggerTypeCount + v2); /*0x46542f*/
}


// ==== 0x00465450  BulletTypeClass::ReadArmor  this=BulletTypeClass  sig=csp ====
int BulletTypeClass::ReadArmor()
{
  int v0; // edx
  int v1; // edi
  int v2; // ecx
  _DWORD *v3; // esi
  int result; // eax
  int i; // edi
  int v6; // esi
  int v7; // eax
  char Destination[60]; // [esp+Ch] [ebp-3Ch] BYREF

  v0 = MEMORY[0x87F7E8][528676]; /*0x465450*/
  v1 = 0; /*0x46545e*/
  if ( MEMORY[0x87F7E8][528676] > 0 ) /*0x465462*/
  {
    v2 = MEMORY[0x87F7E8][528673]; /*0x465464*/
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
      if ( MEMORY[0x87F7E8][31094] ) /*0x46548b*/
        (**(void (__thiscall ***)(_DWORD, int))MEMORY[0x87F7E8][31094])(MEMORY[0x87F7E8][31094], 1); /*0x465491*/
      v3 = (_DWORD *)__2_YAPAXI_Z(32); /*0x46549a*/
      if ( v3 ) /*0x4654a1*/
      {
        v3[3] = 0; /*0x4654a6*/
        v3[1] = v1 + 16; /*0x4654ab*/
        v3[2] = v1 + 16; /*0x4654b6*/
        *v3 = &XSurface_Vtable; /*0x4654b9*/
        v3[4] = 1; /*0x4654bf*/
        Buffer::Init(v3 + 5, 0, (v1 + 16) * (v1 + 16)); /*0x4654c6*/
        *v3 = &BSurface_Vtable; /*0x4654cb*/
        MEMORY[0x87F7E8][31094] = v3; /*0x4654d1*/
      }
      else
      {
        MEMORY[0x87F7E8][31094] = 0; /*0x4654d9*/
      }
    }
  }
  result = MEMORY[0x87F7E8][528676]; /*0x4654df*/
  for ( i = 0; i < MEMORY[0x87F7E8][528676]; ++i ) /*0x4654e8*/
  {
    v6 = *(_DWORD *)(MEMORY[0x87F7E8][528673] + 4 * i); /*0x4654f7*/
    Destination[0] = 0; /*0x465500*/
    INIClass::GetString( /*0x46550e*/
      (unsigned __int8 ***)MEMORY[0x87F7E8][7704],
      (unsigned __int8 *)(v6 + 36),
      (unsigned __int8 *)aTotile,
      0,
      Destination,
      60);
    v7 = Entity_Read(Destination); /*0x465517*/
    if ( v7 >= 0 && v7 < MEMORY[0x87F7E8][539988] ) /*0x465526*/
      *(_DWORD *)(v6 + 3672) = *(_DWORD *)(MEMORY[0x87F7E8][539985] + 4 * v7); /*0x465531*/
    result = MEMORY[0x87F7E8][528676]; /*0x465537*/
  }
  return result; /*0x465541*/
}


// ==== 0x00465570  ObjectClass::CalculateBuildingFoundationBounds  this=ObjectClass  sig=csp ====
int *__thiscall CalculateBuildingFoundationBounds(int *this, BuildingTypeClass *aP1)
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
  CCINIClass *v19; // eax
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

  v36 = this + 1358; /*0x46558c*/
  if ( this->q54E == unk_89C8A0 /*0x4655b7*/
    && this->q54F == unk_89C8A4
    && this->q550 == unk_89C8A8
    && this->q551 == unk_89C8AC )
  {
    v3 = (__int16 *)(*(int (__thiscall **)(int *))(*this + 156))(this); /*0x4655de*/
    if ( v3 ) /*0x4655ea*/
    {
      v4 = unk_89C8A8; /*0x465624*/
      v34 = v3[1]; /*0x46562a*/
      v5 = unk_89C8A4; /*0x465633*/
      v6 = unk_89C8AC; /*0x46563a*/
      v7 = unk_89C8A0; /*0x465641*/
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
      v25 = this->q380 == 0; /*0x465710*/
      v13 = (*(int (__thiscall **)(int *))(*this + 192))(this); /*0x465715*/
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
            v19 = (CCINIClass *)this->q380; /*0x4657f8*/
            if ( v19 ) /*0x465800*/
            {
              __3_YAXPAX_Z(v19); /*0x465803*/
              this->q380 = 0; /*0x46580f*/
              this->qE04 = 0; /*0x465819*/
            }
          }
        }
      }
      if ( this->q546 ) /*0x465824*/
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
      *(_DWORD *)aP1->vtable0 = v23; /*0x4658ec*/
      *(_DWORD *)&aP1->vtable0[4] = v24; /*0x4658ef*/
      *(_DWORD *)&aP1->vtable0[8] = v4; /*0x4658f2*/
      *(_DWORD *)&aP1->vtable0[12] = v6; /*0x4658f5*/
      return (int *)aP1->vtable0; /*0x4658e6*/
    }
    else
    {
      *(_DWORD *)aP1->vtable0 = unk_89C8A0; /*0x4655f9*/
      *(_DWORD *)&aP1->vtable0[4] = unk_89C8A4; /*0x465601*/
      *(_DWORD *)&aP1->vtable0[8] = unk_89C8A8; /*0x46560a*/
      *(_DWORD *)&aP1->vtable0[12] = unk_89C8AC; /*0x465613*/
      return (int *)aP1->vtable0; /*0x4655ec*/
    }
  }
  else
  {
    *(_DWORD *)aP1->vtable0 = this->q54E; /*0x4655c1*/
    *(_DWORD *)&aP1->vtable0[4] = this->q54F; /*0x4655c6*/
    *(_DWORD *)&aP1->vtable0[8] = this->q550; /*0x4655cc*/
    *(_DWORD *)&aP1->vtable0[12] = this->q551; /*0x4655d3*/
    return (int *)aP1->vtable0; /*0x4655b9*/
  }
}


// ==== 0x00465910  AbstractClass::releaseRef  this=AbstractClass  sig=csp ====
char AbstractClass::sub_465910()
{
  return 0; /*0x465912*/
}


// ==== 0x00465920  AbstractClass::finalRelease  this=AbstractClass  sig=csp ====
char AbstractClass::sub_465920()
{
  return 0; /*0x465922*/
}


// ==== 0x00465960  AbstractClass::LoadTheaterSHP  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::sub_465960(int this)
{
  int result; // eax
  __int16 *EntireFile; // edi
  int v4; // ecx
  int v5; // edi
  int v6; // [esp+4h] [ebp-1E0h]
  _DWORD v7[22]; // [esp+8h] [ebp-1DCh] BYREF
  _BYTE v8[12]; // [esp+60h] [ebp-184h] BYREF
  int v9; // [esp+6Ch] [ebp-178h]
  _DWORD v10[22]; // [esp+74h] [ebp-170h] BYREF
  _BYTE v11[12]; // [esp+CCh] [ebp-118h] BYREF
  int v12; // [esp+D8h] [ebp-10Ch]
  char Buffer[260]; // [esp+E0h] [ebp-104h] BYREF

  result = *(_DWORD *)(this + 3584); /*0x465969*/
  if ( !result && *(_BYTE *)(this + 5985) ) /*0x465977*/
  {
    if ( strlen((const char *)(this + 3676)) ) /*0x46598e*/
    {
      _makepath(Buffer, 0, 0, (const char *)(this + 3676), Ext); /*0x4659ac*/
      TheaterObjectTypeClassSpecificID(Buffer, *((_DWORD *)MEMORY[0xA8B230] + 1174)); /*0x4659c7*/
      CCFileClass::Construct(v10, Buffer); /*0x4659d8*/
      EntireFile = (__int16 *)CCFileClass::ReadEntireFile(v10); /*0x4659e6*/
      if ( !EntireFile ) /*0x4659ea*/
      {
        ObjectTypeClass::SetRTTI71(Buffer); /*0x4659f3*/
        CCFileClass::Construct(v7, Buffer); /*0x465a04*/
        EntireFile = (__int16 *)CCFileClass::ReadEntireFile(v7); /*0x465a16*/
        v7[0] = &vt_CCFileClass; /*0x465a18*/
        v9 = 0; /*0x465a20*/
        Vector::Clear((int)v8); /*0x465a28*/
        v7[0] = &off_7E1668; /*0x465a31*/
        BufferIOFileClass::Dtor(v7); /*0x465a39*/
      }
      *(_DWORD *)(this + 3584) = EntireFile; /*0x465a40*/
      if ( EntireFile ) /*0x465a46*/
      {
        v4 = 1; /*0x465a48*/
        *(_BYTE *)(this + 3588) = 1; /*0x465a4d*/
        v5 = EntireFile[3] / 2; /*0x465a62*/
        v6 = v5; /*0x465a66*/
        if ( *(_BYTE *)(this + 5815) ) /*0x465a5c*/
        {
          v5 = *(_DWORD *)(this + 5880) + 1; /*0x465a72*/
          v6 = v5; /*0x465a73*/
        }
        if ( v5 > 0 ) /*0x465a79*/
          v4 = Math::RoundToInt(*(double *)&MEMORY[0x8871E0][1].GUIBuildSound * 900.0 / (double)v6); /*0x465a96*/
        *(_DWORD *)(this + 3844) = 0; /*0x465a98*/
        *(_DWORD *)(this + 3848) = v5; /*0x465aa2*/
        *(_DWORD *)(this + 3852) = v4; /*0x465aa8*/
      }
      v10[0] = &vt_CCFileClass; /*0x465ab5*/
      v12 = 0; /*0x465abd*/
      Vector::Clear((int)v11); /*0x465ac8*/
      v10[0] = &off_7E1668; /*0x465ad1*/
      BufferIOFileClass::Dtor(v10); /*0x465ad9*/
    }
    return *(_DWORD *)(this + 3584); /*0x465ade*/
  }
  return result; /*0x465ae5*/
}


// ==== 0x00465AF0  BuildingTypeClass::IsPowered  this=BuildingTypeClass  sig=csp ====
void __thiscall BuildingTypeClass_IsPowered(int this)
{
  if ( *(_BYTE *)(this + 5986) ) /*0x465af3*/
  {
    if ( *(_DWORD *)(this + 3584) ) /*0x465afd*/
    {
      __3_YAXPAX_Z(*(void **)(this + 3584)); /*0x465b08*/
      *(_DWORD *)(this + 3584) = 0; /*0x465b10*/
      *(_BYTE *)(this + 3588) = 0; /*0x465b1a*/
    }
  }
}


// ==== 0x00465CB0  ObjectClass::nullsub_7  this=ObjectClass  sig=csp ====
void nullsub_7()
{
  ; /*0x465cb0*/
}


// ==== 0x00465CC0  BulletTypeClass::ReadTrailerAnim  this=BulletTypeClass  sig=csp ====
int sub_465CC0()
{
  int result; // eax
  int i; // edi
  int v2; // esi
  int v3; // eax
  char Destination[60]; // [esp+4h] [ebp-3Ch] BYREF

  result = g_TriggerClassCount; /*0x465cc0*/
  for ( i = 0; i < g_TriggerClassCount; ++i ) /*0x465ccd*/
  {
    v2 = *((_DWORD *)g_TriggerTypeCount + i); /*0x465cdc*/
    Destination[0] = 0; /*0x465cef*/
    INIClass::GetString( /*0x465cf5*/
      (unsigned __int8 ***)MEMORY[0x887048],
      (unsigned __int8 *)(v2 + 36),
      (unsigned __int8 *)aTotile,
      0,
      Destination,
      60);
    v3 = Entity_Read(Destination); /*0x465cfe*/
    if ( v3 >= 0 && v3 < MEMORY[0xA8ED38] ) /*0x465d0d*/
      *(_DWORD *)(v2 + 3672) = *((_DWORD *)MEMORY[0xA8ED2C] + v3); /*0x465d18*/
    result = g_TriggerClassCount; /*0x465d1e*/
  }
  return result; /*0x465d29*/
}


// ==== 0x00465D30  ReturnFalse_465D30  this=-  sig=ida-proto ====
char ReturnFalse_465D30()
{
  return 0; /*0x465d32*/
}


// ==== 0x00465D40  BuildingClass::Is1x1AndUndeployable_BuildingMassSelectable  this=BuildingTypeClass  sig=csp ====
BOOL __thiscall BuildingClass::Is1x1AndUndeployable_BuildingMassSelectable(_DWORD *this)
{
  int v1; // eax
  BOOL result; // eax

  result = 0; /*0x465d68*/
  if ( this->VoiceMove ) /*0x465d40*/
  {
    v1 = this->qEF0; /*0x465d55*/
    if ( dword_8192B8[v1] == 1 && dword_819310[v1] == 1 ) /*0x465d66*/
      return 1; /*0x465d48*/
  }
  return result; /*0x465d6a*/
}


// ==== 0x00465D70  BuildingClass::processPowerState  this=AbstractClass  sig=csp ====
int __thiscall sub_465D70(_DWORD *this)
{
  return this->q3B7; /*0x465d76*/
}


// ==== 0x00465D80  ObjectClass::??0Iostream_init_QAE_XZ_2  this=ObjectClass  sig=csp ====
Iostream_init *__thiscall __0Iostream_init_QAE_XZ_2(Iostream_init *this)
{
  return this; /*0x465d82*/
}


// ==== 0x00465D90  BuildingTypeClass::GetTypeIdentifier  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::_vt11(#376 *this)
{
  return 7; /*0x465d95*/
}


// ==== 0x00465DA0  BuildingTypeClass::GetObjectSize  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::_vt12(#376 *this)
{
  return 6040; /*0x465da5*/
}


// ==== 0x00465DB0  BuildingTypeClass::GetAuxField  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::_vt16(#376 *this)
{
  return this->ArrayIndex; /*0x465db6*/
}


// ==== 0x00465DC0  BuildingTypeClass::ddtor  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::ddtor(#376 *this)
{
  char v3; // [esp+8h] [ebp+4h]

  BuildingTypeClass::CleanupMembers((void **)this); /*0x465dc3*/
  if ( (v3 & 1) != 0 ) /*0x465dcd*/
    __3_YAXPAX_Z(this); /*0x465dd0*/
  return (int)this; /*0x465dda*/
}


// ==== 0x00465DE0  _VectorClass_V_TPoint3D_H::Clear  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_TPoint3D_int::_vt06(_DWORD *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // edx

  v3 = (_DWORD *)(this->Items + 12 * a3); /*0x465deb*/
  *a2 = *v3; /*0x465df6*/
  a2[1] = v3[1]; /*0x465dfb*/
  a2[2] = v3[2]; /*0x465e02*/
  return a2; /*0x465dfe*/
}


// ==== 0x00465E10  _VectorClass_V_TPoint3D_H::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_TPoint3D_int::_vt01(int *this, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  v2 = this->Capacity; /*0x465e1b*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x465e20*/
  {
    v3 = 0; /*0x465e22*/
    if ( v2 <= 0 ) /*0x465e26*/
      return 1; /*0x465e60*/
    v4 = *(_DWORD *)(a2 + 4); /*0x465e28*/
    v5 = (_DWORD *)this->Items; /*0x465e2b*/
    v6 = (_DWORD *)(v4 + 8); /*0x465e2e*/
    v7 = v4 - (_DWORD)v5; /*0x465e31*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *(v6 - 1) && v5[2] == *v6 ) /*0x465e4d*/
    {
      ++v3; /*0x465e4f*/
      v6 += 3; /*0x465e50*/
      v5 += 3; /*0x465e53*/
      if ( v3 >= v2 ) /*0x465e58*/
        return 1; /*0x465e58*/
    }
  }
  return 0; /*0x465e5a*/
}


// ==== 0x00465E70  _VectorClass_V_TPoint3D_H::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_TPoint3D_int::_vt02(void *this, int a2, char *a3)
{
  int v3; // ebx
  char *v5; // ebp
  char *v6; // eax
  char *v7; // edi
  int v9; // ecx
  int v10; // eax
  char *v11; // ebx
  _DWORD *v12; // edx

  v3 = a2; /*0x465e72*/
  if ( a2 ) /*0x465e7d*/
  {
    v5 = a3; /*0x465e83*/
    this->IsInitialized = 0; /*0x465e87*/
    if ( a3 ) /*0x465e8d*/
    {
      v7 = a3; /*0x465eb4*/
    }
    else
    {
      v6 = (char *)__2_YAPAXI_Z(12 * a2); /*0x465e96*/
      if ( v6 ) /*0x465ea0*/
        v7 = v6; /*0x465ea5*/
      else
        v7 = 0; /*0x465ead*/
    }
    this->IsInitialized = 1; /*0x465ebc*/
    if ( v7 ) /*0x465ec0*/
    {
      if ( this->Items ) /*0x465ecc*/
      {
        v9 = this->Capacity; /*0x465ed3*/
        if ( a2 < v9 ) /*0x465ed8*/
          v9 = a2; /*0x465eda*/
        if ( v9 > 0 ) /*0x465ede*/
        {
          v10 = 0; /*0x465ee0*/
          do /*0x465efe*/
          {
            v11 = &v7[v10]; /*0x465ee5*/
            v12 = (_DWORD *)(v10 + this->Items); /*0x465ee8*/
            v10 += 12; /*0x465eea*/
            --v9; /*0x465eed*/
            *(_DWORD *)v11 = *v12; /*0x465ef0*/
            *((_DWORD *)v11 + 1) = v12[1]; /*0x465ef5*/
            *((_DWORD *)v11 + 2) = v12[2]; /*0x465efb*/
          }
          while ( v9 ); /*0x465efe*/
          v5 = a3; /*0x465f00*/
          v3 = a2; /*0x465f04*/
        }
        if ( this->IsAllocated ) /*0x465f08*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x465f13*/
          this->Items = 0; /*0x465f1b*/
        }
      }
      this->Items = v7; /*0x465f24*/
      this->Capacity = v3; /*0x465f2c*/
      this->IsAllocated = v5 == 0; /*0x465f2f*/
      return 1; /*0x465f35*/
    }
    else
    {
      return 0; /*0x465ec5*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x465f40*/
    return 1; /*0x465f46*/
  }
}


// ==== 0x00465F50  _VectorClass_V_TPoint3D_H::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_TPoint3D_int::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x465f5d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x465f63*/
    *(_DWORD *)(this + 4) = 0; /*0x465f6b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x465f6e*/
  *(_DWORD *)(this + 8) = 0; /*0x465f71*/
}


// ==== 0x00465F80  _VectorClass_V_TPoint3D_H::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_TPoint3D_int::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x465f80*/
    return 0; /*0x465f8e*/
  v3 = *(_DWORD *)(this + 8); /*0x465f94*/
  result = 0; /*0x465f97*/
  if ( v3 <= 0 ) /*0x465f9b*/
    return -1; /*0x465fc6*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 ) /*0x465fa1*/
  {
    if ( ++result >= v3 ) /*0x465fc4*/
      return -1; /*0x465fc4*/
  }
  return result; /*0x465f8b*/
}


// ==== 0x00465FD0  _VectorClass_V_TPoint3D_H::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_TPoint3D_int::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x465fd0*/
    return (a2 - *(_DWORD *)(this + 4)) / 0xCu; /*0x465fee*/
  else
    return 0; /*0x465fd7*/
}


// ==== 0x00466000  BuildingClass::Create  this=BuildingClass  sig=ida-proto ====
int __fastcall BuildingClass::Create(char *Source, int a2)
{
  int v4; // esi
  int v5; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x46601f*/
    return 0; /*0x46607c*/
  v4 = 0; /*0x46602e*/
  if ( *(int *)(a2 + 16) <= 0 ) /*0x466032*/
  {
LABEL_6:
    v5 = __2_YAPAXI_Z(6040); /*0x466053*/
    if ( v5 ) /*0x466062*/
      return BuildingTypeClass::ConstructFull(v5, Source); /*0x46606f*/
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
VectorClass *__thiscall VectorClass_TPoint3D_int::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x466083*/
  *Block = &vt_VectorClass_TPoint3D_int; /*0x466086*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x466090*/
  {
    __3_YAXPAX_Z(v3); /*0x466098*/
    *(Block + 1) = 0; /*0x4660a0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4660ab*/
  *(Block + 2) = 0; /*0x4660b1*/
  if ( (a2 & 1) != 0 ) /*0x4660b8*/
    __3_YAXPAX_Z(Block); /*0x4660bb*/
  return (VectorClass *)Block; /*0x4660c5*/
}


// ==== 0x004660D0  sub_4660D0  this=-  sig=ida-proto ====
void sub_4660D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4660dc*/
  unk_89DDF8 = Math::Sqrt(v0 + v0); /*0x4660ee*/
}


// ==== 0x00466100  sub_466100  this=-  sig=ida-proto ====
void sub_466100()
{
  unk_89DE68 = unk_89DDF8 / 60.0; /*0x46610c*/
}


// ==== 0x00466120  sub_466120  this=-  sig=ida-proto ====
void sub_466120()
{
  unk_89DE50 = 1.0 / unk_89DE68; /*0x46612c*/
}


// ==== 0x00466140  sub_466140  this=-  sig=ida-proto ====
void sub_466140()
{
  unk_89DE48 = 0.0174532925199433 * 45.0; /*0x46614c*/
}


// ==== 0x00466160  sub_466160  this=-  sig=ida-proto ====
void sub_466160()
{
  unk_89DE00 = 0.0174532925199433 * 60.0; /*0x46616c*/
}


// ==== 0x00466180  sub_466180  this=-  sig=ida-proto ====
void sub_466180()
{
  unk_89DDD8 = 0.0174532925199433 * 90.0; /*0x46618c*/
}


// ==== 0x004661A0  sub_4661A0  this=-  sig=ida-proto ====
__int64 sub_4661A0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_89DDD8 - unk_89DE00); /*0x4661b2*/
  result = Math::RoundToInt(v0 * unk_89DDF8 * 0.5); /*0x4661c6*/
  unk_89DE70 = result; /*0x4661cb*/
  return result; /*0x4661d0*/
}


// ==== 0x004661E0  sub_4661E0  this=-  sig=ida-proto ====
void sub_4661E0()
{
  unk_89DE08 = Math::ArcTan((double)unk_89DE70 * 0.00390625); /*0x4661f7*/
}


// ==== 0x00466210  sub_466210  this=-  sig=ida-proto ====
void sub_466210()
{
  unk_89DE40 = Math::ArcTan((double)(2 * unk_89DE70) / unk_89DDF8); /*0x466232*/
}


// ==== 0x00466240  sub_466240  this=-  sig=ida-proto ====
__int64 sub_466240()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_89DE70) + 0.5); /*0x46625b*/
  unk_89DE64 = result; /*0x466260*/
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
  unk_89DE60 = 0; /*0x4662a5*/
  unk_89DE58 = 128; /*0x4662af*/
  unk_89DE5C = 128; /*0x4662b4*/
  return 128; /*0x4662b9*/
}


// ==== 0x004662C0  sub_4662C0  this=-  sig=ida-proto ====
int sub_4662C0()
{
  unk_89DDE0 = 0; /*0x4662c2*/
  unk_89DDE4 = 0; /*0x4662c7*/
  unk_89DDE8 = 0; /*0x4662cc*/
  unk_89DDEC = 0; /*0x4662d1*/
  return 0; /*0x4662d6*/
}


// ==== 0x004662E0  sub_4662E0  this=-  sig=ida-proto ====
int sub_4662E0()
{
  unk_89DE1C = 0; /*0x4662e7*/
  unk_89DE20 = 0; /*0x4662ec*/
  unk_89DE24 = 1; /*0x4662f1*/
  unk_89DE25 = 0; /*0x4662f8*/
  unk_89DE18 = (int)&off_7E4678; /*0x4662fd*/
  unk_89DE2C = 10; /*0x466307*/
  unk_89DE28 = 0; /*0x466311*/
  return atexit(sub_466320); /*0x46631c*/
}


// ==== 0x00466320  sub_466320  this=-  sig=ida-proto ====
void __cdecl sub_466320()
{
  if ( (unk_89DDD0 & 1) == 0 ) /*0x46632a*/
  {
    unk_89DE18 = (int)&vt_VectorClass_BulletClass; /*0x46632e*/
    unk_89DDD0 |= 1u; /*0x466341*/
    if ( unk_89DE1C ) /*0x466347*/
    {
      if ( unk_89DE25 ) /*0x466351*/
      {
        __3_YAXPAX_Z(unk_89DE1C); /*0x466354*/
        unk_89DE1C = 0; /*0x46635c*/
      }
    }
    unk_89DE25 = 0; /*0x466366*/
    unk_89DE20 = 0; /*0x46636d*/
  }
}


// ==== 0x00466380  BulletClass::BulletClass  this=BulletClass  sig=csp ====
int __thiscall sub_466380(int this)
{
  int v2; // eax

  ObjectClass::ctor((_DWORD *)this); /*0x466384*/
  *(_DWORD *)(this + 172) = 0; /*0x466391*/
  *(_DWORD *)(this + 176) = 0; /*0x466397*/
  *(_BYTE *)(this + 180) = 0; /*0x46639d*/
  BulletClass::ResetDetonationTimer(this + 184); /*0x4663a3*/
  *(_DWORD *)(this + 288) = 0; /*0x4663aa*/
  *(_BYTE *)(this + 260) = 1; /*0x4663b0*/
  *(_BYTE *)(this + 261) = 1; /*0x4663b6*/
  *(_BYTE *)(this + 224) = 0; /*0x4663bf*/
  *(_DWORD *)(this + 256) = 0; /*0x4663c5*/
  *(_DWORD *)(this + 264) = 0; /*0x4663cb*/
  *(_DWORD *)(this + 268) = 0; /*0x4663d1*/
  *(_DWORD *)(this + 272) = 0; /*0x4663d7*/
  *(_DWORD *)(this + 276) = -1; /*0x4663dd*/
  *(_DWORD *)(this + 280) = 0; /*0x4663e3*/
  *(_DWORD *)(this + 292) = 0; /*0x4663e9*/
  *(_DWORD *)(this + 296) = 0; /*0x4663ef*/
  *(_BYTE *)(this + 300) = 0; /*0x4663f5*/
  *(_BYTE *)(this + 301) = 0; /*0x4663fb*/
  *(_DWORD *)(this + 304) = 0; /*0x466401*/
  *(_WORD *)(this + 332) = -1; /*0x466407*/
  *(_WORD *)(this + 334) = -1; /*0x46640e*/
  *(_DWORD *)(this + 340) = 0; /*0x466419*/
  *(_BYTE *)(this + 344) = 0; /*0x46641f*/
  *(_DWORD *)this = &BulletClass::`vftable'; /*0x466425*/
  *(_DWORD *)(this + 4) = &BulletClass::`vftable'; /*0x46642b*/
  *(_DWORD *)(this + 8) = &BulletClass::`vftable'; /*0x466431*/
  *(_DWORD *)(this + 12) = &vt_BulletClass; /*0x466438*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x46643f*/
  *(_DWORD *)(this + 308) = 0; /*0x466444*/
  *(_DWORD *)(this + 312) = 0; /*0x46644a*/
  *(_DWORD *)(this + 316) = 0; /*0x466450*/
  *(_DWORD *)(this + 320) = 0; /*0x466456*/
  *(_DWORD *)(this + 324) = 0; /*0x46645c*/
  *(_DWORD *)(this + 328) = 0; /*0x466462*/
  if ( MEMORY[0xA8ED50] < MEMORY[0xA8ED48] /*0x46649b*/
    || (MEMORY[0xA8ED4D] || !MEMORY[0xA8ED48])
    && MEMORY[0xA8ED54] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA8ED40] + 8))(
         &MEMORY[0xA8ED40],
         MEMORY[0xA8ED48] + MEMORY[0xA8ED54],
         0) )
  {
    v2 = MEMORY[0xA8ED50]++; /*0x4664a8*/
    *((_DWORD *)MEMORY[0xA8ED44] + v2) = this; /*0x4664b7*/
  }
  return this; /*0x4664bc*/
}


// ==== 0x004664C0  Particle::Init  this=AbstractClass  sig=csp ====
int __thiscall Particle::Init(
        int this,
        AbstractClass *aP1,
        TechnoClass *aP2,
        IUnknown *aP3,
        TechnoClass *aP4,
        InfantryClass *aP5,
        int a7,
        AbstractClass *aP7)
{
  AbstractClass *result; // eax

  result = aP1; /*0x4664c4*/
  *(_DWORD *)(this + 268) = aP2; /*0x4664c8*/
  *(_DWORD *)(this + 272) = a7; /*0x4664d2*/
  *(_DWORD *)(this + 296) = aP5; /*0x4664dc*/
  *(_BYTE *)(this + 224) = (_BYTE)aP7; /*0x4664e6*/
  *(_DWORD *)(this + 108) = aP4; /*0x4664f6*/
  *(_DWORD *)(this + 172) = aP1; /*0x4664fb*/
  *(_DWORD *)(this + 176) = aP3; /*0x466501*/
  *(_BYTE *)(this + 300) = 0; /*0x466507*/
  *(_BYTE *)(this + 301) = aP1[21].__pad_0[2]; /*0x466513*/
  if ( BYTE1(aP1[18].NeedsSaveOrLink) && aP3 ) /*0x466525*/
  {
    result = *(AbstractClass **)(aP3->field_21C + 90196); /*0x46652d*/
    *(_DWORD *)(this + 276) = result; /*0x466533*/
  }
  else
  {
    *(_DWORD *)(this + 276) = -1; /*0x46653b*/
  }
  *(_DWORD *)(this + 336) = 256; /*0x466546*/
  *(_DWORD *)(this + 340) = 0; /*0x466550*/
  *(_BYTE *)(this + 344) = 0; /*0x466556*/
  return (int)result->__pad_0; /*0x466545*/
}


// ==== 0x00466560  BulletClass::Dtor  this=BulletClass  sig=csp ====
int __thiscall BulletClass::Dtor(#374 *this)
{
  int v2; // eax
  int v3; // eax
  #374 *v5; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this = &BulletClass::`vftable'; /*0x466566*/
  this->vtable2 = &BulletClass::`vftable'; /*0x46656c*/
  this->vtable3 = &BulletClass::`vftable'; /*0x466573*/
  this->vtable4 = &vt_BulletClass; /*0x46657a*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x466581*/
  if ( this->q158 ) /*0x466586*/
  {
    v5 = this; /*0x4665a0*/
    v2 = (*(int (__thiscall **)(int *, #374 **))(MEMORY[0xB0F5B8] + 16))(&MEMORY[0xB0F5B8], &v5); /*0x4665a4*/
    if ( v2 != -1 && v2 < MEMORY[0xB0F5C8] && v2 < --MEMORY[0xB0F5C8] ) /*0x4665bf*/
    {
      do /*0x4665d7*/
      {
        ++v2; /*0x4665c7*/
        *((_DWORD *)MEMORY[0xB0F5BC] + v2 - 1) = *((_DWORD *)MEMORY[0xB0F5BC] + v2); /*0x4665cb*/
      }
      while ( v2 < MEMORY[0xB0F5C8] ); /*0x4665d7*/
    }
  }
  if ( MEMORY[0xA8E9A0] ) /*0x4665e0*/
    ObjectClass::Undeploy(this); /*0x4665e4*/
  this->q0AC = 0; /*0x4665e9*/
  this->q02C = 0; /*0x4665f3*/
  this->q055 = 0; /*0x4665fd*/
  v5 = this; /*0x466617*/
  v3 = (*(int (__thiscall **)(int *, #374 **))(MEMORY[0xA8ED40] + 16))(&MEMORY[0xA8ED40], &v5); /*0x46661b*/
  if ( v3 != -1 && v3 < MEMORY[0xA8ED50] && v3 < --MEMORY[0xA8ED50] ) /*0x466636*/
  {
    do /*0x46664e*/
    {
      ++v3; /*0x46663e*/
      *((_DWORD *)MEMORY[0xA8ED44] + v3 - 1) = *((_DWORD *)MEMORY[0xA8ED44] + v3); /*0x466642*/
    }
    while ( v3 < MEMORY[0xA8ED50] ); /*0x46664e*/
  }
  return ObjectClass::Dtor(this); /*0x466657*/
}


// ==== 0x00466660  BulletClass::CalculateSpreadAngle  this=BulletClass  sig=csp ====
int *__stdcall BulletClass::_vt66(int a1)
{
  if ( (unk_89DE10 & 1) == 0 ) /*0x46666b*/
  {
    unk_89DE10 |= 1u; /*0x466689*/
    unk_89DDF4 = 2147450879; /*0x46668f*/
    atexit(nullsub_108); /*0x466694*/
  }
  return &unk_89DDF4; /*0x4666a2*/
}


// ==== 0x004666B0  nullsub_108  this=-  sig=ida-proto ====
void __cdecl nullsub_108()
{
  ; /*0x4666b0*/
}


// ==== 0x004666C0  BulletClass::CheckMirrorState  this=BulletClass  sig=csp ====
bool __thiscall BulletClass::CheckMirrorState(void *this, ObjectClass *aP1)
{
  return (unsigned __int8)ObjectClass::UpdateProductionDisplay((#374 *)this) != 0; /*0x4666cf*/
}


// ==== 0x004666E0  BulletClass::ProcessNukeExplosion  this=BulletClass  sig=csp ====
char __thiscall BulletClass::ProcessNukeExplosion(int *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // ecx
  char v5; // al
  unsigned __int8 v6; // bl
  int v7; // esi
  void **v8; // eax
  int v9; // eax
  double v10; // st6
  double v11; // st5
  double *v12; // ebx
  double v13; // st3
  double v14; // st7
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  char v18; // al
  IUnknown *v19; // edx
  double v20; // st7
  double v21; // st7
  double v22; // st7
  unsigned int v23; // eax
  unsigned int v24; // edx
  int v25; // ecx
  int *v26; // eax
  _BYTE *v27; // ecx
  double *v28; // esi
  double v29; // st7
  __int64 v30; // rax
  unsigned int v31; // edi
  _DWORD *v32; // eax
  IUnknown *v34; // eax
  int edx56; // edx
  BuildingTypeClass *v36; // eax
  double st7_56a; // st7
  int Y; // edx
  int v38; // ecx
  BOOL v39; // esi
  unsigned __int16 v40; // cx
  _BYTE *v41; // eax
  double v42; // st7
  double v43; // st6
  double v44; // st5
  double v45; // st7
  int v46; // edx
  IUnknown *v47; // eax
  BuildingTypeClass *v48; // edx
  double v49; // st7
  int v50; // esi
  IUnknown *v51; // eax
  int v52; // edx
  BuildingTypeClass *v53; // eax
  double v54; // st7
  int v55; // eax
  double v56; // st7
  double v57; // st7
  char v59; // c0
  int v60; // eax
  int v61; // eax
  double *v62; // ebx
  double v63; // st7
  int v64; // ecx
  int v65; // eax
  double FiringDistance; // st7
  int v67; // eax
  double v68; // st7
  int v69; // eax
  double v70; // st7
  double v71; // st7
  double v72; // st7
  int v73; // edx
  int v74; // esi
  int v75; // edi
  int v76; // eax
  int v77; // ecx
  int v78; // esi
  int v79; // edx
  IUnknown *v80; // eax
  IUnknown *v81; // ecx
  IUnknown *aP1; // eax
  IUnknown *v83; // eax
  signed int v84; // edi
  BuildingTypeClass *v85; // esi
  char v86; // bl
  double v87; // st7
  IUnknown *v88; // edi
  IUnknown *v89; // esi
  int Byte284; // eax
  float *v91; // eax
  BuildingTypeClass *v93; // eax
  double st7_146; // st7
  BuildingTypeClass *v95; // esi
  BuildingTypeClass *v96; // edi
  int eax151; // eax
  int v97; // eax
  int v98; // esi
  int v99; // eax
  BuildingTypeClass *v101; // esi
  BuildingTypeClass *v102; // edi
  _DWORD *esi157; // esi
  _DWORD *v103; // eax
  _DWORD *v104; // eax
  IUnknown *ClosestObject; // esi
  int v106; // eax
  bool IsAlliedWithObjectHouse; // al
  int v108; // ecx
  BuildingTypeClass *v110; // edx
  double st7_169; // st7
  bool v111; // al
  int v112; // edx
  int v113; // edx
  int v114; // edx
  bool v115; // al
  int v116; // edx
  bool v117; // bl
  int v118; // eax
  int v119; // esi
  int v120; // ecx
  int v121; // eax
  int v122; // eax
  int v123; // ecx
  int v124; // eax
  int X; // esi
  int v126; // edi
  BuildingTypeClass *v128; // ebx
  int eax208; // eax
  BuildingTypeClass *v130; // ecx
  double st7_208; // st7
  signed int v131; // ecx
  double v132; // st7
  double v133; // st7
  double v134; // st7
  int v135; // esi
  int v136; // eax
  __int64 v137; // rax
  AnimClass *Index; // eax
  CoordStruct *v140; // edi
  AnimClass *v141; // esi
  void *eax222a; // eax
  AnimClass *v142; // eax
  int v143; // eax
  float aP1_4; // [esp+10h] [ebp-1B4h]
  BulletClass *aP3; // [esp+14h] [ebp-1B0h]
  BulletClass *v149; // [esp+14h] [ebp-1B0h]
  BulletClass *v150; // [esp+14h] [ebp-1B0h]
  IUnknown *aP3_4; // [esp+18h] [ebp-1ACh]
  IUnknown *aP3_4a; // [esp+18h] [ebp-1ACh]
  int aP3_4b; // [esp+18h] [ebp-1ACh]
  float aP3_4c; // [esp+18h] [ebp-1ACh]
  IUnknown *aP3_4d; // [esp+18h] [ebp-1ACh]
  IUnknown *v154; // [esp+1Ch] [ebp-1A8h]
  char v155; // [esp+20h] [ebp-1A4h]
  char v156; // [esp+24h] [ebp-1A0h]
  char v157; // [esp+28h] [ebp-19Ch]
  unsigned int a1; // [esp+2Ch] [ebp-198h] BYREF
  int v159; // [esp+30h] [ebp-194h]
  int v160; // [esp+34h] [ebp-190h]
  int v161; // [esp+38h] [ebp-18Ch]
  int v162; // [esp+3Ch] [ebp-188h]
  CoordStruct aP2; // [esp+40h] [ebp-184h] BYREF
  CoordStruct a2; // [esp+4Ch] [ebp-178h] BYREF
  _DWORD v165[2]; // [esp+60h] [ebp-164h] BYREF
  int Z; // [esp+68h] [ebp-15Ch]
  CoordStruct v167; // [esp+6Ch] [ebp-158h] BYREF
  signed int v168; // [esp+7Ch] [ebp-148h]
  IUnknown *v169; // [esp+80h] [ebp-144h]
  double v170[3]; // [esp+84h] [ebp-140h] BYREF
  double v171[2]; // [esp+9Ch] [ebp-128h] BYREF
  double v172; // [esp+ACh] [ebp-118h] BYREF
  double v173; // [esp+B4h] [ebp-110h]
  double v174; // [esp+BCh] [ebp-108h]
  int v175; // [esp+C4h] [ebp-100h] BYREF
  int v176; // [esp+C8h] [ebp-FCh]
  signed int v177; // [esp+CCh] [ebp-F8h]
  _QWORD v178[3]; // [esp+D0h] [ebp-F4h] BYREF
  double v179[3]; // [esp+E8h] [ebp-DCh] BYREF
  unsigned int v180; // [esp+100h] [ebp-C4h] BYREF
  float v181[12]; // [esp+104h] [ebp-C0h] BYREF
  float v182[12]; // [esp+134h] [ebp-90h] BYREF
  char v183[48]; // [esp+164h] [ebp-60h] BYREF
  float v184[12]; // [esp+194h] [ebp-30h] BYREF

  ObjectClass::DetectCloaked((#374 *)this);
  LOBYTE(v2) = this->q090;
  if ( !(_BYTE)v2 )
    return v2;
  if ( !this->q158 )
  {
    v4 = this->q0AC;
    HIBYTE(v161) = 0;
    LOBYTE(v160) = 0;
    if ( *(_BYTE *)(v4 + 668) )
      LOBYTE(v160) = this->isFallingDown == 0;
    if ( *(_BYTE *)(v4 + 756) || *(_BYTE *)(v4 + 757) )
    {
      v5 = this->q12D - 1;
      this->q12D = v5;
      if ( !v5 )
      {
        v6 = this->SourceCoords + 1;
        this->q12D = *(_BYTE *)(v4 + 758);
        this->SourceCoords = v6;
        if ( v6 > *(_BYTE *)(v4 + 757) )
          this->SourceCoords = *(_BYTE *)(v4 + 756);
      }
    }
    aP2 = *(CoordStruct *)((_BYTE *)this + 13);
    if ( *(_DWORD *)(v4 + 728) )
    {
      v7 = *(_DWORD *)(v4 + 744);
      if ( v7 )
      {
        if ( !(*(_DWORD *)&HouseClass_Player.__pad_5568[23248] % v7) )
        {
          v8 = (void **)__2_YAPAXI_Z(0x1C8u);
          if ( v8 )
LABEL_23:
            AnimClass::ctor(
              v8,
              *(CoordStruct **)(this->q0AC + 728),
              &aP2,
              (CoordStruct *)1,
              (CoordStruct *)1,
              (void *)0x600,
              0,
              0);
        }
      }
      else if ( !(*(_DWORD *)&HouseClass_Player.__pad_5568[23248] % *(_DWORD *)(v4 + 740)) )
      {
        v8 = (void **)__2_YAPAXI_Z(0x1C8u);
        if ( v8 )
          goto LABEL_23;
      }
    }
    v9 = this->q0AC;
    v162 = 0;
    if ( *(int *)(v9 + 732) > 0 )
    {
      v10 = *((double *)this + 30);
      v11 = *((double *)this + 29);
      v12 = (double *)(this + 58);
      v13 = *((double *)this + 31) * *((double *)this + 31);
      a1 = this->u32_44;
      v14 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(v11 * v11 + v10 * v10 + v13));
      v15 = this->q0AC;
      v16 = *(_DWORD *)(v15 + 736);
      v171[0] = v14;
      if ( v16 )
      {
        v17 = this->CourseLockCounter;
        if ( v17 < v16 )
        {
          this->CourseLockCounter = v17 + 1;
          if ( v17 + 1 >= *(_DWORD *)(v15 + 736) )
            goto LABEL_31;
        }
      }
      else if ( this->u32_44 >= 40 || (double)(int)a1 <= v171[0] + 0.5 )
      {
LABEL_31:
        this->CourseLock = 0;
      }
      v18 = this->CourseLock;
      v19 = *(IUnknown **)(v15 + 720);
      v169 = v19;
      if ( v18 && !*(_DWORD *)(v15 + 736) )
      {
        v19 = (IUnknown *)(*(_DWORD *)&HouseClass_Player.__pad_5568[23248] % 2 == 0);
        v169 = v19;
      }
      v20 = (double)(int)a1;
      if ( v171[0] >= v20 )
      {
        if ( v171[0] <= v20 )
          goto LABEL_50;
        a1 = (int)v19 / 2;
        v171[0] = v171[0] - (double)((int)v19 / 2);
        if ( v171[0] <= 0.0 )
          v171[0] = 0.0;
        if ( *v12 != 0.0 || *((double *)this + 30) != 0.0 || *((double *)this + 31) != 0.0 )
        {
LABEL_49:
          v21 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                              *((double *)this + 31) * *((double *)this + 31)
                                            + *((double *)this + 30) * *((double *)this + 30)
                                            + *v12 * *v12));
          v22 = v171[0] / v21;
          *v12 = v22 * *v12;
          *((double *)this + 30) = v22 * *((double *)this + 30);
          *((double *)this + 31) = v22 * *((double *)this + 31);
LABEL_50:
          v172 = *v12;
          LODWORD(v173) = this->u32_3C;
          v23 = this->u32_FC;
          v24 = this->u64_F8;
          HIDWORD(v173) = this->u32_F4;
          v25 = this->q10C;
          v174 = COERCE_DOUBLE(__PAIR64__(v23, v24));
          if ( v25 )
            v26 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v25 + 88))(v25, &v175);
          else
            v26 = &dword_89DE30;
          a2.X = *v26;
          v27 = (_BYTE *)this->q10C;
          a2.Y = v26[1];
          a2.Z = v26[2];
          if ( v27 && (v27[20] & 2) != 0 )
            a2 = *(CoordStruct *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)v27 + 164))(v27, &v175);
          v28 = (double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1432);
          a1 = (*(_DWORD *)&HouseClass_Player.__pad_5568[23248]
              + (*(int (__stdcall **)(int *))(this->vtable2 + 16))(this + 1))
             % 15;
          v29 = Math::SinCos((IUnknown *)COERCE_UNSIGNED_INT64((double)(int)a1 * 0.06666666666666667 * 6.283185307179586));
          v30 = Math::RoundToInt((v29 * *v28 + *v28 + 1.0) * (double)*(int *)(this->q0AC + 732));
          v31 = v30;
          LODWORD(v30) = *this;
          a1 = v31;
          v32 = (_DWORD *)(*(int (__fastcall **)(int *, _DWORD, int *))(v30 + 72))(this, HIDWORD(v30), &v175);
          v34 = Coord::Subtract(
                  v171,
                  (IUnknown *)(*v32 - a2.X),
                  (IUnknown *)(v32[1] - a2.Y),
                  (IUnknown *)(v32[2] - a2.Z));
          v167.X = v34->field_0;
          edx56 = v34->field_4;
          v36 = (BuildingTypeClass *)v34->field_8;
          v167.Y = edx56;
          v167.Z = (int)v36;
          st7_56a = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                                  (double)edx56 * (double)edx56
                                                + (double)(int)v36 * (double)(int)v36
                                                + (double)v167.X * (double)v167.X));
          if ( (int)Math::RoundToInt(st7_56a) < 256 )
            LOBYTE(v31) = Math::RoundToInt((double)(int)a1 * 1.5);
          Y = aP2.Y;
          v165[0] = aP2.X;
          v38 = this->q10C;
          v165[1] = aP2.Y;
          Z = aP2.Z;
          v39 = v38 && (*(int (__thiscall **)(int))(*(_DWORD *)v38 + 44))(v38) == 2;
          LOBYTE(v40) = 0;
          HIBYTE(v40) = this->CourseLock == 0 ? v31 : 0;
          v41 = (_BYTE *)this->q0AC;
          LOWORD(a1) = v40;
          LOBYTE(Y) = v41[669];
          LOBYTE(v40) = v41[665];
          aP3_4 = (IUnknown *)Y;
          LOBYTE(Y) = v41[660];
          a1 = Movement::CalcVelocity(
                 (IUnknown *)&a2,
                 &a1,
                 COERCE_DOUBLE(__PAIR64__(Y, v39)),
                 (IUnknown *)v40,
                 aP3_4,
                 v154,
                 v155,
                 v156,
                 v157);
          v169 = (IUnknown *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP2);
          *(double *)v178 = v172;
          *(double *)&v178[1] = v173;
          *(double *)&v178[2] = v174;
          qmemcpy(v12, v178, 0x18u);
          v42 = *((double *)this + 31);
          v43 = *((double *)this + 30);
          v44 = *v12;
          *(double *)&v167.X = (double)(int)a1;
          v45 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(v44 * v44 + v43 * v43 + v42 * v42)) * 0.5;
          if ( v45 >= *(double *)&v167.X || (*(int (__thiscall **)(int *))(*this + 456))(this) <= 0 )
          {
            v46 = *this;
            LOBYTE(v160) = 1;
            v162 = 1;
            if ( (*(int (__thiscall **)(int *))(v46 + 456))(this) > 0
              && !*(_BYTE *)(this->q0AC + 660)
              && (a2.X != dword_89DE30 || *(_QWORD *)&a2.Y != qword_89DE34) )
            {
              aP2 = a2;
            }
          }
          if ( a2.X == dword_89DE30
            && *(_QWORD *)&a2.Y == qword_89DE34
            && (*(int (__thiscall **)(int *))(*this + 456))(this) >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224]
                                                                               + 1440) )
          {
            LOBYTE(v160) = 1;
            v162 = 1;
          }
          v47 = Coord::Subtract(
                  &v175,
                  (IUnknown *)(v165[0] - a2.X),
                  (IUnknown *)(v165[1] - a2.Y),
                  (IUnknown *)(Z - a2.Z));
          v167.X = v47->field_0;
          v48 = (BuildingTypeClass *)v47->field_8;
          v167.Y = v47->field_4;
          v167.Z = (int)v48;
          v49 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                              (double)(int)v48 * (double)(int)v48
                                            + (double)v167.Y * (double)v167.Y
                                            + (double)v167.X * (double)v167.X));
          v50 = Math::RoundToInt(v49);
          v51 = Coord::Subtract(
                  v171,
                  (IUnknown *)(aP2.X - a2.X),
                  (IUnknown *)(aP2.Y - a2.Y),
                  (IUnknown *)(aP2.Z - a2.Z));
          v167.X = v51->field_0;
          v52 = v51->field_4;
          v53 = (BuildingTypeClass *)v51->field_8;
          v167.Y = v52;
          v167.Z = (int)v53;
          v54 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                              (double)(int)v53 * (double)(int)v53
                                            + (double)v52 * (double)v52
                                            + (double)v167.X * (double)v167.X));
          a1 = v50 - Math::RoundToInt(v54);
          if ( !this->CourseLock )
          {
            v55 = this->q118;
            if ( v55 >= 60 )
            {
              v57 = *((double *)this + 36) * 0.9833333333333333 + (double)(int)a1;
              *((double *)this + 36) = v57;
              if ( !v59 && v57 < 60.0 )
              {
                v60 = this->q0AC;
                if ( !*(_BYTE *)(v60 + 660) && !*(_BYTE *)(v60 + 665) )
                {
                  LOBYTE(v160) = 1;
                  v162 = 1;
                  goto LABEL_184;
                }
              }
            }
            else
            {
              v56 = (double)(int)a1;
              this->q118 = v55 + 1;
              *((double *)this + 36) = v56 + *((double *)this + 36);
            }
          }
          if ( !v162
            && ((v169->field_140 & 0x100) != 0
             || (*((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)v165) + 80) & 0x100) != 0) )
          {
            v61 = unk_89DE64 + Cell::GetGroundHeight((IUnknown *)&aP2);
            if ( aP2.Z > v61 && Z < v61 )
            {
              v162 = 1;
              aP2.Z = v61;
LABEL_183:
              LOBYTE(v160) = 1;
              goto LABEL_184;
            }
            if ( aP2.Z < v61 && Z > v61 )
            {
              v162 = 1;
              aP2.Z = v61;
              goto LABEL_183;
            }
          }
LABEL_184:
          v114 = *this;
          if ( v162 == 2 )
          {
            (*(void (__thiscall **)(int *, int))(v114 + 292))(this, 2);
          }
          else
          {
            (*(void (__thiscall **)(int *, int))(v114 + 292))(this, 2);
            (*(void (__thiscall **)(int *, CoordStruct *))(*this + 436))(this, &aP2);
            if ( (_BYTE)v160 )
              goto LABEL_187;
            v165[0] = this->u64_27;
            v165[1] = this->q028;
            Z = this->q029;
            v115 = BulletClass::CheckBulletCollision(this, (IUnknown *)v165);
            v116 = *this;
            v117 = v115;
            LOBYTE(v160) = v115;
            (*(void (__thiscall **)(int *, _DWORD *))(v116 + 436))(this, v165);
            if ( v117 )
            {
LABEL_187:
              if ( (*(int (__thiscall **)(int *))(*this + 456))(this) < 0 )
                (*(void (__thiscall **)(int *, _DWORD))(*this + 460))(this, 0);
            }
            v118 = this->q0AC;
            if ( *(int *)(v118 + 732) > 0 || *(_BYTE *)(v118 + 672) )
              v119 = BulletClass::CheckProximityDetonation(this + 46, &aP2);
            else
              v119 = 0;
            v120 = this->q02C;
            v168 = v119;
            if ( v120 && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v120 + 132))(v120) + 3476) && v119 == 2 )
            {
              v119 = 1;
              v168 = 1;
            }
            if ( !(_BYTE)v160 )
            {
              v121 = this->q0AC;
              if ( *(_BYTE *)(v121 + 668) || !v119 )
              {
                if ( *(_BYTE *)(v121 + 678) )
                {
                  v122 = this->u32_6C;
                  if ( v122 > 5 )
                    this->u32_6C = v122 - 1;
                }
                goto LABEL_233;
              }
            }
            v123 = this->q10C;
            if ( v123 && (v168 == 1 || HIBYTE(v161)) )
            {
              v124 = this->q0AC;
              if ( !*(_BYTE *)(v124 + 660) && !*(_BYTE *)(v124 + 674) )
              {
                X = aP2.X;
                v126 = aP2.Y;
                v128 = (BuildingTypeClass *)aP2.Z;
                eax208 = (*(int (__thiscall **)(int, double *))(*(_DWORD *)v123 + 88))(v123, v179);
                v175 = *(_DWORD *)eax208;
                v176 = *(_DWORD *)(eax208 + 4);
                v130 = *(BuildingTypeClass **)(eax208 + 8);
                v165[1] = v126 - v176;
                Z = (int)&v128->vtable0[(int)v130] / 2 - (_DWORD)v130;
                v165[0] = X - v175;
                st7_208 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                                        (double)(X - v175) * (double)(X - v175)
                                                      + (double)Z * (double)Z
                                                      + (double)v165[1] * (double)v165[1]));
                v131 = Math::RoundToInt(st7_208);
                a1 = v131;
                if ( HIBYTE(v161) )
                  a1 = v131 / 3;
                if ( v168 == 1
                  || ((v132 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                                            *((double *)this + 29) * *((double *)this + 29)
                                                          + *((double *)this + 30) * *((double *)this + 30)
                                                          + *((double *)this + 31) * *((double *)this + 31))),
                       v132 + v132 >= 128.0)
                    ? (v134 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                                            *((double *)this + 29) * *((double *)this + 29)
                                                          + *((double *)this + 30) * *((double *)this + 30)
                                                          + *((double *)this + 31) * *((double *)this + 31))),
                       v133 = v134 + v134)
                    : (v133 = 128.0),
                      (double)(int)a1 <= v133) )
                {
                  v135 = *this;
                  v136 = (*(int (__thiscall **)(_DWORD, CoordStruct *))(*(_DWORD *)this->q10C + 72))(
                           this->q10C,
                           &a2);
                  (*(void (__thiscall **)(int *, int))(v135 + 436))(this, v136);
                }
              }
            }
            if ( AbstractTypeClass::NameEquals(this->WeaponType, aNuke) )
            {
              if ( (*(int (__thiscall **)(int *))(*this + 456))(this) < 0 )
                (*(void (__thiscall **)(int *, _DWORD))(*this + 460))(this, 0);
              Entity_Process();
              v137 = ((__int64 (__thiscall *)(int *, double *))*(_DWORD *)(*this + 440))(this, v171);
              CreateTriggerClassIfFarEnough((IUnknown *)0xD, SHIDWORD(v137), *(IUnknown **)v137);
              Index = (AnimClass *)AnimTypeClass::FindIndex(aNukeball);
              if ( Index != (AnimClass *)-1 )
              {
                v140 = *(CoordStruct **)(*(_DWORD *)&stru_89E138.__pad_1600D[15] + 4 * (_DWORD)Index);
                if ( v140 )
                {
                  v141 = (AnimClass *)__2_YAPAXI_Z(0x1C8u);
                  if ( v141 )
                  {
                    v167 = *(CoordStruct *)((_BYTE *)this + 13);
                    eax222a = (void *)Return::HRESULT_Fail((BulletClass *)this->u64_27, this->q028, this->q029);
                    v142 = AnimClass::ctor((void **)v141, v140, &v167, 0, (CoordStruct *)1, (void *)0x2600, eax222a, 0);
                  }
                  else
                  {
                    v142 = 0;
                  }
                  this->q055 = (int)v142;
                  this->q158 = 1;
                  if ( *(int *)&stru_B05488.__pad_579C[18852] < *(int *)&stru_B05488.__pad_579C[18844]
                    || (stru_B05488.__pad_579C[18849] || !*(_DWORD *)&stru_B05488.__pad_579C[18844])
                    && *(int *)&stru_B05488.__pad_579C[18856] > 0
                    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[18836]
                                                                              + 8))(
                         &stru_B05488.__pad_579C[18836],
                         *(_DWORD *)&stru_B05488.__pad_579C[18856] + *(_DWORD *)&stru_B05488.__pad_579C[18844],
                         0) )
                  {
                    v143 = (*(_DWORD *)&stru_B05488.__pad_579C[18852])++;
                    *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[18840] + 4 * v143) = this;
                  }
                  goto LABEL_233;
                }
              }
            }
            BulletClass::Fire((int)this, v160);
          }
          (*(void (__thiscall **)(int *))(*this + 248))(this);
LABEL_233:
          LOWORD(a1) = aP2.X / 256;
          v2 = aP2.Y / 256;
          HIWORD(a1) = aP2.Y / 256;
          this->q053 = a1;
          return v2;
        }
      }
      else
      {
        v171[0] = (double)(int)v169 + v171[0];
        if ( v171[0] >= v20 )
          v171[0] = v20;
        if ( *v12 != 0.0 || *((double *)this + 30) != 0.0 || *((double *)this + 31) != 0.0 )
          goto LABEL_49;
      }
      *(_DWORD *)v12 = 0;
      this->q0EC = 1079574528;
      goto LABEL_49;
    }
    v62 = (double *)(this + 58);
    v63 = *((double *)this + 31);
    v170[0] = *((double *)this + 29);
    v64 = this->u32_F4;
    LODWORD(v170[1]) = this->u32_3C;
    v170[2] = v63;
    HIDWORD(v170[1]) = v64;
    qmemcpy(v178, v170, sizeof(v178));
    v172 = v170[0];
    v173 = v170[1];
    v174 = v63;
    v162 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(v170[1] * v170[1] + v170[0] * v170[0] + v170[2] * v170[2])) < 8.0;
    v65 = this->q0AC;
    v170[0] = (double)aP2.X;
    v170[1] = (double)aP2.Y;
    v170[2] = (double)aP2.Z;
    FiringDistance = (double)*(int *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5816);
    if ( *(_BYTE *)(v65 + 661) )
      FiringDistance = RulesClass::GetFiringDistance();
    v67 = this->q0AC;
    if ( *(_BYTE *)(v67 + 704) )
    {
      v68 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                          *v62 * *v62
                                        + *((double *)this + 30) * *((double *)this + 30)
                                        + *((double *)this + 31) * *((double *)this + 31)));
      v69 = Math::RoundToInt(v68);
      if ( v69 < this->u32_44 )
      {
        a1 = v69 + *(_DWORD *)(this->q0AC + 720);
        *(double *)&v167.X = (double)(int)a1;
        if ( *v62 == 0.0 && *((double *)this + 30) == 0.0 && *((double *)this + 31) == 0.0 )
        {
          *(_DWORD *)v62 = 0;
          this->q0EC = 1079574528;
        }
        v70 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                            *((double *)this + 31) * *((double *)this + 31)
                                          + *((double *)this + 30) * *((double *)this + 30)
                                          + *v62 * *v62));
        v71 = *(double *)&v167.X / v70;
        *v62 = v71 * *v62;
        *((double *)this + 30) = v71 * *((double *)this + 30);
        *((double *)this + 31) = v71 * *((double *)this + 31);
      }
      v72 = *((double *)this + 31);
      v179[0] = *v62;
      v73 = this->u32_F4;
      LODWORD(v179[1]) = this->u32_3C;
      HIDWORD(v179[1]) = v73;
      v74 = Math::RoundToInt(v72);
      v75 = Math::RoundToInt(v72);
      v76 = Math::RoundToInt(v72);
      v165[0] = aP2.X;
      v165[1] = aP2.Y;
      aP2.X += v74;
      v77 = this->q0AC;
      Z = aP2.Z;
      aP2.Y += v75;
      aP2.Z += v76;
      if ( aP2.Z <= *(_DWORD *)(v77 + 700) )
      {
        if ( (*(int (__thiscall **)(int *))(*this + 456))(this) >= 0 )
        {
          v78 = Cell::GetGroundHeight((IUnknown *)&aP2) + unk_89DE64;
          if ( (*((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP2) + 80) & 0x100) != 0
            || (*((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)v165) + 80) & 0x100) != 0 )
          {
            if ( aP2.Z < v78 )
            {
              if ( Z >= v78 )
              {
                v162 = 1;
                LOBYTE(v160) = 1;
              }
            }
            else if ( Z < v78 )
            {
              v162 = 1;
              LOBYTE(v160) = 1;
            }
          }
        }
        else
        {
          v162 = 1;
          LOBYTE(v160) = 1;
        }
      }
      else
      {
        v162 = 1;
        LOBYTE(v160) = 1;
      }
LABEL_152:
      v97 = this->q050;
      LOWORD(a1) = aP2.X / 256;
      HIWORD(a1) = aP2.Y / 256;
      v180 = a1;
      v98 = v97 / 256;
      v99 = this->q051 / 256;
      LOWORD(a1) = v98;
      HIWORD(a1) = v99;
      LODWORD(v171[0]) = a1;
      if ( (unsigned __int16)(aP2.X / 256) == (_WORD)v98
        && (unsigned __int16)(aP2.Y / 256) == (_WORD)v99
        && !*(_BYTE *)(this->q0AC + 704)
        && (*(int (__thiscall **)(int *))(*this + 456))(this) < 2 * unk_89DE70
        || (v101 = (BuildingTypeClass *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v180),
            v102 = (BuildingTypeClass *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)v171),
            esi157 = Cell::IsBridge(v101),
            v103 = Cell::IsBridge(v102),
            esi157)
        && !*(_BYTE *)(this->q0AC + 704)
        && esi157 == v103
        && (*(int (__thiscall **)(int *))(*this + 456))(this) < 2 * unk_89DE70 )
      {
        v162 = 1;
        LOBYTE(v160) = 1;
        HIBYTE(v161) = 1;
        goto LABEL_184;
      }
      v167.X = 0;
      v167.Y = 0;
      v104 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP2);
      ClosestObject = (IUnknown *)Object::FindClosestObjectCell(v104, (IUnknown *)&v167, 0, 0);
      v106 = this->q02C;
      if ( !v106 || (HIBYTE(v159) = 1, ClosestObject != (IUnknown *)v106) )
        HIBYTE(v159) = 0;
      if ( !ClosestObject
        || !v106
        || (IsAlliedWithObjectHouse = Object::IsAlliedWithObjectHouse(*(_DWORD **)(v106 + 540), ClosestObject),
            BYTE2(v159) = 1,
            !IsAlliedWithObjectHouse) )
      {
        BYTE2(v159) = 0;
      }
      v111 = 0;
      if ( ClosestObject )
      {
        v108 = *(_DWORD *)ClosestObject->__pad_A0;
        v165[0] = aP2.X - ClosestObject->field_9C;
        v110 = (BuildingTypeClass *)ClosestObject->field_A4;
        v165[1] = aP2.Y - v108;
        Z = aP2.Z - (_DWORD)v110;
        st7_169 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                                (double)v165[0] * (double)v165[0]
                                              + (double)(aP2.Z - (int)v110) * (double)(aP2.Z - (int)v110)
                                              + (double)(aP2.Y - v108) * (double)(aP2.Y - v108)));
        if ( (int)Math::RoundToInt(st7_169) < 128 )
          v111 = 1;
      }
      if ( HIWORD(v159) || !v111 )
      {
        if ( !Tactical::IsCellVisible(&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP2) )
        {
          v162 = 2;
          LOBYTE(v160) = 1;
          aP2 = *(CoordStruct *)((_BYTE *)this + 13);
          goto LABEL_184;
        }
        v113 = this->q0AC;
        *(double *)&v178[1] = v173;
        *(double *)v178 = v172;
        if ( !*(_BYTE *)(v113 + 704) )
        {
          v179[0] = *(double *)v178;
          v179[1] = *(double *)&v178[1];
          v179[2] = v174;
          qmemcpy(this + 58, v179, 0x18u);
        }
        if ( Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                           *((double *)this + 29) * *((double *)this + 29)
                                         + *((double *)this + 30) * *((double *)this + 30)
                                         + *((double *)this + 31) * *((double *)this + 31))) < 10.0
          && (*(int (__thiscall **)(int *))(*this + 456))(this) < 10 )
        {
          v162 = 1;
          goto LABEL_183;
        }
      }
      else
      {
        v112 = this->q0AC;
        v162 = 1;
        LOBYTE(v160) = 1;
        if ( !*(_BYTE *)(v112 + 674) )
          aP2 = *(CoordStruct *)&ClosestObject->field_9C;
      }
      goto LABEL_184;
    }
    v79 = *(_DWORD *)(v67 + 712);
    v80 = *(IUnknown **)(v67 + 716);
    v81 = (IUnknown *)this->q02C;
    v167.X = v79;
    v169 = v81;
    v167.Y = (int)v80;
    v174 = v174 - FiringDistance;
    aP3_4a = (IUnknown *)Math::RoundToInt(v170[2]);
    aP3 = (BulletClass *)Math::RoundToInt(v170[1]);
    aP1 = (IUnknown *)Math::RoundToInt(v170[0]);
    Coord::Subtract(&v175, aP1, (IUnknown *)aP3, aP3_4a);
    BulletClass::AddVector3(v170, &v172);
    aP3_4b = Math::RoundToInt(v170[2]);
    v149 = (BulletClass *)Math::RoundToInt(v170[1]);
    v83 = (IUnknown *)Math::RoundToInt(v170[0]);
    Coord3D::Set(v165, v83, (MouseClass *)v149, aP3_4b);
    a1 = Cell::GetGroundHeight((IUnknown *)v165);
    v84 = a1 + unk_89DE64;
    v168 = a1 + unk_89DE64;
    v85 = (BuildingTypeClass *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)v165);
    HIWORD(v159) = 0;
    if ( (v85->ChargerBarrels[15] & 0x100) != 0
      || (*((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v175) + 80) & 0x100) != 0 )
    {
      if ( Z < v84 )
      {
        if ( v177 >= v84 )
          HIBYTE(v159) = 1;
      }
      else if ( v177 < v84 )
      {
        BYTE2(v159) = 1;
      }
    }
    v86 = 0;
    if ( !HIWORD(v159) )
    {
      v87 = (double)(int)a1;
      if ( v170[2] < v87 || v170[2] - 150.0 >= v87 )
      {
LABEL_134:
        *(double *)&a2.X = (double)(int)a1;
        if ( v170[2] >= *(double *)&a2.X && !HIWORD(v159) && !v86 )
          goto LABEL_151;
        if ( v169 )
        {
          if ( HIBYTE(v159) )
          {
            st7_146 = (double)v168;
          }
          else
          {
            if ( !BYTE2(v159) )
            {
LABEL_151:
              v95 = (BuildingTypeClass *)Math::RoundToInt(v170[0]);
              v96 = (BuildingTypeClass *)Math::RoundToInt(v170[1]);
              eax151 = Math::RoundToInt(v170[2]);
              aP2.X = (int)v95;
              aP2.Y = (int)v96;
              aP2.Z = eax151;
              goto LABEL_152;
            }
            a1 = v84 - 20;
            st7_146 = (double)(v84 - 20);
          }
          v170[2] = st7_146;
        }
        else
        {
          if ( HIBYTE(v159) )
          {
            v170[2] = (double)v168;
          }
          else if ( BYTE2(v159) )
          {
            a1 = v84 - 20;
            v170[2] = (double)(v84 - 20);
          }
          else
          {
            a1 -= 100;
            if ( (double)(int)a1 < v170[2] )
              v170[2] = *(double *)&a2.X;
          }
          Byte284 = CellClass::GetByte284((IUnknown *)v165);
          qmemcpy(v181, CopyAudioData(v183, Byte284), sizeof(v181));
          qmemcpy(v182, InvertMatrix3x3Signs(v184, v181), sizeof(v182));
          aP3_4c = v174;
          *(float *)&v150 = -v173;
          aP1_4 = v172;
          Triple::Set(&a2, (IUnknown *)LODWORD(aP1_4), (IUnknown *)v150, (IUnknown *)LODWORD(aP3_4c));
          a2 = *(CoordStruct *)Matrix3x3::TransformPoint(v182, (IUnknown *)v179, (float *)&a2.X);
          *(float *)&aP3_4d = *(double *)&v167.X;
          Coord::Scale((float *)&a2.X, aP3_4d);
          *(float *)&a2.Z = -*(float *)&a2.Z;
          v91 = Matrix3x3::TransformPoint(v181, (IUnknown *)&v167, (float *)&a2.X);
          a2.X = *(int *)v91;
          a2.Y = (int)v91[1];
          v93 = (BuildingTypeClass *)*((_DWORD *)v91 + 2);
          v172 = *(float *)&a2.X;
          v173 = -*(float *)&a2.Y;
          a2.Z = (int)v93;
          v174 = *(float *)&v93;
        }
        v162 = 1;
        LOBYTE(v160) = 1;
        goto LABEL_151;
      }
      v88 = (IUnknown *)Cell::IsBridge(v85);
      if ( !v88 && !BuildingPlacement::ValidateType(v85, (AbstractClass *)0xFFFFFFFF, (IUnknown *)0xFFFFFFFF) )
      {
        v84 = v168;
        goto LABEL_134;
      }
      v86 = 1;
      if ( v88 )
      {
        v89 = v169;
        if ( v88 == v169 || *(_BYTE *)(v88->field_520 + 5823) && *(int *)&v88->__pad_524[244] >= 8 )
          v86 = 0;
        if ( (*(unsigned __int8 (__thiscall **)(IUnknown *))(v88->field_0 + 128))(v88) )
          v86 = 0;
        if ( v89 && Object::IsAlliedWithObjectHouse((_DWORD *)v169->field_21C, v88) )
          v86 = 0;
      }
    }
    v84 = v168;
    goto LABEL_134;
  }
  v2 = this->q055;
  if ( !v2 )
  {
    a1 = (unsigned int)this;
    v3 = (*(int (__thiscall **)(char *, unsigned int *))(*(_DWORD *)&stru_B05488.__pad_579C[18836] + 16))(
           &stru_B05488.__pad_579C[18836],
           &a1);
    if ( v3 != -1 && v3 < *(int *)&stru_B05488.__pad_579C[18852] )
    {
      --*(_DWORD *)&stru_B05488.__pad_579C[18852];
      for ( ;
            v3 < *(int *)&stru_B05488.__pad_579C[18852];
            *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[18840] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[18840]
                                                                                            + 4 * v3) )
      {
        ++v3;
      }
    }
    this->q158 = 0;
    BulletClass::Fire((int)this, 0);
    LOBYTE(v2) = (*(char (__thiscall **)(int *))(*this + 248))(this);
  }
  return v2;
}


// ==== 0x00468000  BulletClass::GetAnimFrame  this=BulletClass  sig=csp ====
int __thiscall BulletClass::GetAnimFrame(int this)
{
  int result; // eax
  double v3; // st7
  int v4; // ecx
  unsigned int v5; // [esp+14h] [ebp-4h]

  result = 0; /*0x468004*/
  if ( !*(_BYTE *)(*(_DWORD *)(this + 172) + 673) ) /*0x46800c*/
  {
    v3 = Math::CalcAngle(-*(double *)(this + 240), *(double *)(this + 232)); /*0x468032*/
    LOWORD(v5) = Math::RoundToInt((v3 - 1.570796326794897) * -10430.06004058427); /*0x46804b*/
    result = dword_7F4890[(((v5 >> 10) + 1) >> 1) & 0x1F]; /*0x46805d*/
  }
  v4 = *(_DWORD *)(this + 172); /*0x468064*/
  if ( *(_BYTE *)(v4 + 756) || *(_BYTE *)(v4 + 757) ) /*0x468074*/
    return *(unsigned __int8 *)(this + 300); /*0x468080*/
  return result; /*0x468086*/
}


// ==== 0x00468090  BulletClass::SetupVoxelTransform  this=BulletClass  sig=csp ====
void __thiscall BulletClass::SetupVoxelTransform(void *this, int *a2, int *a3)
{
  int v4; // eax
  double v5; // st7
  double v6; // st7
  float *inited; // eax
  float *v8; // eax
  int v9; // ebx
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // eax
  int v16; // ebx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  float v20; // [esp+Ch] [ebp-C4h]
  float v21; // [esp+Ch] [ebp-C4h]
  unsigned int v22; // [esp+20h] [ebp-B0h]
  double v23; // [esp+20h] [ebp-B0h]
  int v24; // [esp+20h] [ebp-B0h]
  int v25; // [esp+2Ch] [ebp-A4h] BYREF
  int v26; // [esp+30h] [ebp-A0h]
  int v27; // [esp+34h] [ebp-9Ch]
  int GroundHeight; // [esp+38h] [ebp-98h]
  unsigned int v29; // [esp+3Ch] [ebp-94h]
  float v30[12]; // [esp+40h] [ebp-90h] BYREF
  _BYTE v31[48]; // [esp+70h] [ebp-60h] BYREF
  float v32[12]; // [esp+A0h] [ebp-30h] BYREF

  if ( (*(_DWORD *)MEMORY[0xA8B230] & 0x1000) == 0 /*0x4680d5*/
    || (v25 = this->u64_27, v26 = this->q028,
                                      v27 = this->q029,
                                      !Game::Stub3((int)&v25)) )
  {
    v4 = this->q0AC; /*0x4680e2*/
    if ( !*(_BYTE *)(v4 + 670) && !this->q158 ) /*0x4680f6*/
    {
      if ( *(_BYTE *)(v4 + 566) ) /*0x468104*/
      {
        Matrix3x4::Identity(v30); /*0x468116*/
        v5 = Math::CalcAngle(-*((double *)this + 30), *((double *)this + 29)); /*0x468137*/
        LOWORD(v22) = Math::RoundToInt((v5 - 1.570796326794897) * -10430.06004058427); /*0x46814d*/
        v20 = (double)(int)(((((v22 >> 10) + 1) >> 1) & 0x1F) - 8) * -0.1963495408493621; /*0x468177*/
        Matrix2D::Rotate(v30, v20); /*0x46817a*/
        v23 = Math::Sqrt(*((double *)this + 29) * *((double *)this + 29) + *((double *)this + 30) /*0x4681aa*/
                                                                         * *((double *)this + 30));
        v6 = Math::CalcAngle(*((double *)this + 31), v23); /*0x4681c0*/
        LOWORD(v23) = Math::RoundToInt((v6 - 1.570796326794897) * -10430.06004058427); /*0x4681d6*/
        v21 = -((double)(int)((((unsigned int)((LODWORD(v23) >> 10) + 1) >> 1) & 0x1F) - 8) * -0.1963495408493621); /*0x468202*/
        Matrix3D::RotateZ(v30, v21); /*0x468205*/
        inited = (float *)AudioConfig::InitDefault(v31); /*0x468227*/
        v8 = MultiplyMatrix3x4(v32, inited, v30); /*0x468235*/
        ((void (__stdcall *)(int, float *, int *, int *, _DWORD, int, int))BulletClass::RenderVoxelBullet)( /*0x46824a*/
          this->q0AC + 176,
          v8,
          a2,
          a3,
          0,
          2048,
          1000);
      }
      else
      {
        v24 = (*(int (__thiscall **)(void *))(this->u32_6C)(this); /*0x468261*/
        if ( v24 ) /*0x468265*/
        {
          v29 = (*(int (__thiscall **)(void *))(this->q1E8)(this); /*0x468275*/
          v9 = (*(int (__thiscall **)(void *))(this->u32_1C8)(this); /*0x468289*/
          v25 = this->u64_27; /*0x46828f*/
          v26 = this->q028; /*0x46829b*/
          v27 = this->q029; /*0x4682a2*/
          GroundHeight = Cell::GetGroundHeight(&v25); /*0x4682b0*/
          if ( !this->q08C ) /*0x4682b4*/
          {
            v10 = this->q028; /*0x4682c0*/
            v11 = this->q029; /*0x4682c3*/
            v25 = this->u64_27; /*0x4682c6*/
            v26 = v10; /*0x4682ce*/
            v27 = v11; /*0x4682d8*/
            if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v25) + 80) & 0x100) != 0 && v9 >= unk_89DE64 ) /*0x4682f3*/
            {
              v9 -= unk_89DE64; /*0x4682f9*/
              GroundHeight += unk_89DE64; /*0x4682fd*/
            }
          }
          if ( v9 > 0 && *(_BYTE *)(this->q0AC + 666) ) /*0x46830e*/
          {
            v12 = ZCoordToScreenY(v9); /*0x46831a*/
            v13 = *a2; /*0x468322*/
            v26 = v12 + a2[1]; /*0x468328*/
            v25 = v13; /*0x46833d*/
            v14 = ZCoordToScreenY(GroundHeight); /*0x468341*/
            DrawToSurfaceSHP( /*0x468374*/
              MEMORY[0x887314],
              MEMORY[0x87F6C4],
              v24,
              v29,
              &v25,
              a3,
              9729,
              0,
              -10 - v14,
              0,
              1000,
              0,
              0,
              0,
              0,
              0);
          }
          v15 = this->q0AC; /*0x468379*/
          v16 = MEMORY[0x87F6C4]; /*0x46837f*/
          if ( *(_BYTE *)(v15 + 680) ) /*0x468385*/
          {
            v16 = MEMORY[0x87F6C0]; /*0x46838f*/
          }
          else if ( *(_BYTE *)(v15 + 681) ) /*0x468397*/
          {
            v17 = this->u8_45; /*0x4683a1*/
            if ( v17 == -1 ) /*0x4683aa*/
              v16 = *(_DWORD *)(*((_DWORD *)MEMORY[0xB054D4] + *((_DWORD *)HouseClass_Player + 22549)) + 780); /*0x4683d1*/
            else
              v16 = *(_DWORD *)(*((_DWORD *)MEMORY[0xB054D4] + v17) + 780); /*0x4683b5*/
          }
          v18 = (*(int (__thiscall **)(void *))(this->q1D0)(this); /*0x4683ea*/
          v19 = ZCoordToScreenY(v18); /*0x4683f2*/
          DrawToSurfaceSHP(MEMORY[0x887314], v16, v24, v29, a2, a3, 11776, 0, -30 - v19, 0, 1000, 0, 0, 0, 0, 0); /*0x46841d*/
        }
      }
    }
  }
}


// ==== 0x00468430  BulletClass::LoseTarget  this=BulletClass  sig=csp ====
__int16 __thiscall BulletClass::LoseTarget(_DWORD **this)
{
  _DWORD *v2; // eax
  int v4; // [esp+4h] [ebp-14h] BYREF
  int v5; // [esp+8h] [ebp-10h]
  _BYTE v6[12]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*this->q10C + 72))(this->q10C, v6); /*0x468443*/
  LOWORD(v5) = *v2 / 256; /*0x468456*/
  HIWORD(v5) = v2[1] / 256; /*0x46846a*/
  v4 = v5; /*0x468473*/
  LOWORD(v2) = MEMORY[0xA8E7AC]; /*0x468477*/
  if ( MEMORY[0xA8E7AC] /*0x46849b*/
    || (LOWORD(v2) = (*(int (__thiscall **)(_DWORD))(*this->q10C + 84))(this->q10C), (_BYTE)v2)
    || (LOWORD(v2) = v4, v4 == dword_89DDF0) )
  {
    this->q10C = 0; /*0x4684c5*/
  }
  else
  {
    v2 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v4); /*0x4684b5*/
    this->q10C = v2; /*0x4684ba*/
  }
  return (__int16)v2; /*0x4684c0*/
}


// ==== 0x004684E0  BulletClass::ProcessImpact  this=BulletClass  sig=csp ====
__int16 __thiscall BulletClass::_vt10(int this, char *a2, char *a3)
{
  char *v3; // edi
  char *v5; // eax
  char *v6; // ecx
  _DWORD *v7; // eax
  char **i; // ecx
  __int16 v10; // [esp+Ch] [ebp-10h] BYREF
  char v11[12]; // [esp+10h] [ebp-Ch] BYREF

  v3 = a2; /*0x4684ea*/
  Object::Unlink((#374 *)this); /*0x4684f2*/
  v5 = *(char **)(this + 176); /*0x4684f7*/
  if ( v5 == v3 ) /*0x468501*/
    *(_DWORD *)(this + 176) = 0; /*0x468503*/
  v6 = *(char **)(this + 268); /*0x468509*/
  if ( v6 == v3 ) /*0x468511*/
  {
    v7 = (_DWORD *)(*(int (__thiscall **)(char *, char *))(*(_DWORD *)v6 + 72))(v6, v11); /*0x46851e*/
    a2 = *(char **)CellStruct::Set(&v10, *v7 / 256, v7[1] / 256); /*0x46854d*/
    LOWORD(v5) = MEMORY[0xA8E7AC]; /*0x468551*/
    if ( MEMORY[0xA8E7AC] /*0x468575*/
      || (LOWORD(v5) = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 268) + 84))(*(_DWORD *)(this + 268)),
          (_BYTE)v5)
      || (LOWORD(v5) = (_WORD)a2, a2 == (char *)dword_89DDF0) )
    {
      *(_DWORD *)(this + 268) = 0; /*0x46859c*/
    }
    else
    {
      v5 = (char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2); /*0x46858f*/
      *(_DWORD *)(this + 268) = v5; /*0x468594*/
    }
  }
  if ( *(char **)(this + 172) == v3 ) /*0x4685a8*/
    *(_DWORD *)(this + 172) = 0; /*0x4685aa*/
  if ( *(char **)(this + 304) == v3 ) /*0x4685b6*/
    *(_DWORD *)(this + 304) = 0; /*0x4685b8*/
  if ( *(char **)(this + 340) == v3 ) /*0x4685c4*/
    *(_DWORD *)(this + 340) = 0; /*0x4685c6*/
  if ( (_BYTE)a3 ) /*0x4685d0*/
  {
    v5 = (char *)(*(int (__thiscall **)(char *))(*(_DWORD *)v3 + 44))(v3); /*0x4685da*/
    if ( v5 == (char *)8 ) /*0x4685e0*/
    {
      a3 = v3; /*0x4685e2*/
      if ( *(_BYTE *)(*((_DWORD *)v3 + 43) + 748) ) /*0x4685ec*/
      {
        v5 = 0; /*0x4685fa*/
        if ( unk_89DE28 > 0 ) /*0x4685fe*/
        {
          for ( i = (char **)unk_89DE1C; v3 != *i; ++i ) /*0x468600*/
          {
            if ( (int)++v5 >= unk_89DE28 ) /*0x468610*/
              return (__int16)v5; /*0x468610*/
          }
          v5 = (char *)(*(int (__thiscall **)(int *, char **))(unk_89DE18 + 16))(&unk_89DE18, &a3); /*0x46862a*/
          if ( v5 != (char *)-1 && (int)v5 < unk_89DE28 && (int)v5 < --unk_89DE28 ) /*0x468645*/
          {
            do /*0x46865d*/
            {
              ++v5; /*0x46864d*/
              *((_DWORD *)unk_89DE1C + (_DWORD)v5 - 1) = *((_DWORD *)unk_89DE1C + (_DWORD)v5); /*0x468651*/
            }
            while ( (int)v5 < unk_89DE28 ); /*0x46865d*/
          }
        }
      }
    }
  }
  return (__int16)v5; /*0x468612*/
}


// ==== 0x00468670  BulletClass::ProcessObstacle  this=BulletClass  sig=csp ====
char __thiscall BulletClass::ProcessObstacle(_DWORD *this, IUnknown *aP1, const void *a2)
{
  int *v4; // edx
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  int v8; // esi
  int v9; // eax
  TechnoTypeClass *v10; // esi
  int v11; // eax
  __int16 v12; // ax
  int v13; // esi
  double v14; // st7
  double v15; // st7
  int v16; // eax
  void *v17; // esi
  int *FirstFirestorm; // eax
  int v19; // ecx
  int v20; // edx
  int GroundHeight; // eax
  int v22; // edx
  _DWORD *FirstObstacle; // eax
  int v24; // edi
  int v25; // eax
  double v26; // st7
  int v27; // ecx
  int v28; // eax
  double v29; // st7
  int v31; // [esp+24h] [ebp-40h]
  int v32; // [esp+24h] [ebp-40h]
  float v33; // [esp+24h] [ebp-40h]
  double v34; // [esp+24h] [ebp-40h]
  int a0; // [esp+30h] [ebp-34h]
  double a0_4; // [esp+34h] [ebp-30h] BYREF
  _DWORD v37[3]; // [esp+40h] [ebp-24h] BYREF
  int v38; // [esp+4Ch] [ebp-18h]
  int a1; // [esp+58h] [ebp-Ch] BYREF
  int v40; // [esp+5Ch] [ebp-8h]
  int v41; // [esp+60h] [ebp-4h]

  if ( !(unsigned __int8)ObjectClass::Deploy((#374 *)this) ) /*0x468684*/
    return 0; /*0x468b7f*/
  qmemcpy(this + 58, a2, 0x18u); /*0x4686a0*/
  this->q134 = aP1->field_0; /*0x4686b1*/
  this->TargetCoords = aP1->field_4; /*0x4686b6*/
  this->q13C = aP1->field_8; /*0x4686bc*/
  LOWORD(v31) = this->q134 / 256; /*0x4686cd*/
  HIWORD(v31) = this->TargetCoords / 256; /*0x4686e6*/
  this->NextAnim = v31; /*0x4686ef*/
  RemoveTarget((IUnknown *)this); /*0x4686f5*/
  v4 = (int *)(*(int (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)this->q10C + 88))(this->q10C, &v37[1]); /*0x46870a*/
  v5 = *v4; /*0x468712*/
  a1 = v5; /*0x468714*/
  v40 = v4[1]; /*0x46871b*/
  v6 = v40; /*0x468718*/
  v7 = v4[2]; /*0x46871f*/
  this->q140 = v5; /*0x468722*/
  v41 = v7; /*0x468724*/
  this->q144 = v6; /*0x468728*/
  this->DamageMultiplier = v7; /*0x46872b*/
  v8 = this->q0AC; /*0x46872e*/
  if ( *(_BYTE *)(v8 + 675) && *(_BYTE *)(v8 + 670) ) /*0x468741*/
  {
    v32 = v6 - aP1->field_4; /*0x468762*/
    v9 = aP1->field_8; /*0x468766*/
    *(float *)&v37[1] = (float)(aP1->field_0 - v5); /*0x468769*/
    *(float *)&v37[2] = (float)v32; /*0x468777*/
    v33 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x4687c5*/
                                        *(float *)&v37[1] * *(float *)&v37[1]
                                      + *(float *)&v37[2] * *(float *)&v37[2]
                                      + (double)(v9 - v7) * (double)(v9 - v7)));
    v10 = (TechnoTypeClass *)Random::Range( /*0x4687d2*/
                               (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                               0,
                               (IUnknown *)(2 * *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5940)));
    a0 = (int)(Math::RoundToInt(v33) * (_DWORD)v10) / *(_DWORD *)(this->q130 + 180); /*0x4687fe*/
    v11 = Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)0x7FFFFFFE); /*0x468802*/
    v12 = Math::RoundToInt(((double)v11 * 4.656612877414201e-10 * 6.283185307179586 - 1.570796326794897) * -10430.06004058427); /*0x468827*/
    v13 = v41; /*0x468834*/
    v34 = (double)(v12 - 0x3FFF) * -0.00009587672516830327; /*0x468846*/
    *(double *)&v37[1] = (double)v40; /*0x468853*/
    a0_4 = (double)a0; /*0x46885b*/
    v14 = Math::SinCos((IUnknown *)LODWORD(v34)); /*0x468864*/
    a0 = Math::RoundToInt(*(double *)&v37[1] - v14 * a0_4); /*0x46887a*/
    v15 = Math::ArcTan2((IUnknown *)LODWORD(v34)); /*0x468884*/
    a1 = Math::RoundToInt(v15 * a0_4 + (double)a1); /*0x46889d*/
    v40 = a0; /*0x4688a1*/
    v41 = v13; /*0x4688a5*/
  }
  if ( *(_BYTE *)(this->q0AC + 670) ) /*0x4688af*/
  {
    v16 = this->q0B0; /*0x4688bd*/
    if ( v16 ) /*0x4688c5*/
      v17 = *(void **)(v16 + 540); /*0x4688c7*/
    else
      v17 = 0; /*0x4688cf*/
    FirstFirestorm = MapClass::FindFirstFirestorm((int *)&a0_4, aP1, (MouseClass *)&a1, (int)v17); /*0x4688e2*/
    v37[1] = *FirstFirestorm; /*0x4688f1*/
    v19 = FirstFirestorm[1]; /*0x4688f5*/
    v37[2] = v19; /*0x4688f8*/
    v20 = FirstFirestorm[2]; /*0x4688fc*/
    v38 = v20; /*0x4688ff*/
    if ( v37[1] == dword_89DE30 && __PAIR64__(v20, v19) == qword_89DE34 ) /*0x46890b*/
    {
      FirstObstacle = TrajectoryHelper::FindFirstObstacle(aP1, &a1, this->q0AC, v17); /*0x46894a*/
      if ( FirstObstacle ) /*0x468953*/
      {
        v24 = *this; /*0x468957*/
        v25 = (*(int (__thiscall **)(_DWORD *, double *))(*FirstObstacle + 72))(FirstObstacle, &a0_4); /*0x468960*/
        (*(void (__thiscall **)(_DWORD *, int))(v24 + 436))(this, v25); /*0x468966*/
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, int *))(*this + 436))(this, &a1); /*0x468977*/
      }
      (*(void (__thiscall **)(_DWORD *, int *))(*this + 436))(this, &a1); /*0x468986*/
      this->q110 = 0; /*0x46898c*/
      if ( *((double *)this + 29) == 0.0 && *((double *)this + 30) == 0.0 && *((double *)this + 31) == 0.0 ) /*0x4689c9*/
      {
        this->q0E8 = 0; /*0x4689cb*/
        this->q0EC = 1079574528; /*0x4689d1*/
      }
      v26 = 0.0 /*0x468a0e*/
          / Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                          *((double *)this + 31) * *((double *)this + 31)
                                        + *((double *)this + 30) * *((double *)this + 30)
                                        + *((double *)this + 29) * *((double *)this + 29)));
      *((double *)this + 29) = v26 * *((double *)this + 29); /*0x468a1f*/
      *((double *)this + 30) = v26 * *((double *)this + 30); /*0x468a2d*/
      *((double *)this + 31) = v26 * *((double *)this + 31); /*0x468a39*/
    }
    else
    {
      GroundHeight = Cell::GetGroundHeight((IUnknown *)&v37[1]); /*0x46891f*/
      v22 = *this; /*0x468924*/
      v38 = GroundHeight; /*0x468926*/
      (*(void (__thiscall **)(_DWORD *, _DWORD *))(v22 + 436))(this, &v37[1]); /*0x468931*/
    }
  }
  v27 = this->q10C; /*0x468a3f*/
  if ( v27 && (*(int (__thiscall **)(int))(*(_DWORD *)v27 + 44))(v27) == 2 ) /*0x468a51*/
    v28 = 0; /*0x468a53*/
  else
    v28 = *(_DWORD *)(this->q0AC + 752); /*0x468a5d*/
  v37[1] = this->q09C; /*0x468a75*/
  v37[2] = this->q0A0; /*0x468a7c*/
  v38 = this->q0A4; /*0x468a88*/
  BulletClass::InitDetonationTimer(this + 46, &v37[1], &a1, v28, 0x7FFFFFFF); /*0x468a93*/
  if ( *(int *)(this->q0AC + 732) > 0 ) /*0x468aa6*/
  {
    if ( *((double *)this + 29) == 0.0 && *((double *)this + 30) == 0.0 && *((double *)this + 31) == 0.0 ) /*0x468ae3*/
    {
      this->q0E8 = 0; /*0x468ae5*/
      this->q0EC = 1079574528; /*0x468aef*/
    }
    v29 = 1.0 /*0x468b2c*/
        / Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                        *((double *)this + 31) * *((double *)this + 31)
                                      + *((double *)this + 30) * *((double *)this + 30)
                                      + *((double *)this + 29) * *((double *)this + 29)));
    *((double *)this + 29) = v29 * *((double *)this + 29); /*0x468b3d*/
    *((double *)this + 30) = v29 * *((double *)this + 30); /*0x468b4b*/
    *((double *)this + 31) = v29 * *((double *)this + 31); /*0x468b57*/
  }
  if ( this->q240 ) /*0x468b5d*/
    Targeting::Readd((IUnknown *)this); /*0x468b6d*/
  return 1; /*0x468b74*/
}


// ==== 0x00468B90  BulletClass::UpdateFlightPath  this=BulletClass  sig=csp ====
int __thiscall BulletClass::_vt30(_DWORD *this)
{
  int v1; // eax

  v1 = -(*(_BYTE *)(this->q0AC + 759) != 0); /*0x468b9e*/
  LOBYTE(v1) = v1 & 0xFE; /*0x468ba0*/
  return v1 + 3; /*0x468ba5*/
}


// ==== 0x00468BB0  BulletClass::CheckBulletCollision  this=BulletClass  sig=csp ====
bool __thiscall BulletClass::CheckBulletCollision(_DWORD *this, IUnknown *aP1)
{
  IUnknown *v4; // ebx
  int v5; // eax
  _BYTE *v6; // ebx
  _BYTE *v7; // ebp
  void *v8; // eax
  int v9; // ecx
  bool result; // al
  AbstractClass *v11; // ecx
  int v12; // eax
  int v13; // edi
  AbstractClass *v14; // ecx
  _DWORD v15[3]; // [esp+10h] [ebp-Ch] BYREF
  IUnknown *aP1a; // [esp+20h] [ebp+4h]

  aP1->field_0 = this->q09C; /*0x468bc8*/
  aP1->field_4 = this->q0A0; /*0x468bcd*/
  aP1->field_8 = this->q0A4; /*0x468bd3*/
  v4 = (IUnknown *)Coord::To_Cell(&MEMORY[0x87F7E8], aP1); /*0x468be0*/
  v5 = this->q0AC; /*0x468be2*/
  aP1a = v4; /*0x468be8*/
  if ( *(_BYTE *)(v5 + 662) || *(_BYTE *)(v5 + 664) ) /*0x468bf6*/
  {
    v6 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)(this + 77)); /*0x468c21*/
    v7 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)(this + 80)); /*0x468c28*/
    v8 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)this + 166); /*0x468c36*/
    v9 = this->q0B0; /*0x468c3b*/
    if ( v9 ) /*0x468c43*/
      v9 = *(_DWORD *)(v9 + 540); /*0x468c45*/
    if ( TrajectoryHelper::GetObstacle( /*0x468c6d*/
           v6,
           v7,
           (int)v8,
           aP1->field_0,
           aP1->field_4,
           aP1->field_8,
           this->q0AC,
           (#375 *)v9) )
    {
      return 1; /*0x468c7f*/
    }
    v4 = aP1a; /*0x468c82*/
  }
  if ( (*(int (__thiscall **)(_DWORD *))(*this + 456))(this) <= -4 * unk_89DE70 ) /*0x468c9d*/
    return 1; /*0x468c9f*/
  v11 = (AbstractClass *)this->q10C; /*0x468cab*/
  if ( v11 ) /*0x468cb3*/
  {
    if ( *(_BYTE *)(this->q0AC + 675) ) /*0x468cbb*/
    {
      v12 = this->q09C; /*0x468ccb*/
      v13 = this->q0A4; /*0x468cd1*/
      v15[1] = this->q0A0; /*0x468cd7*/
      v15[0] = v12; /*0x468cdb*/
      if ( v13 < *(_DWORD *)((*(int (__thiscall **)(AbstractClass *, _DWORD *))(*(_DWORD *)v11->__pad_0 + 88))(v11, v15) /*0x468cfa*/
                           + 8)
        && (*(int (__thiscall **)(_DWORD *))(*this + 456))(this) < 0 )
      {
        return 1; /*0x468cfc*/
      }
    }
  }
  if ( *(_BYTE *)(this->q0AC + 669) && (*(unsigned __int8 (__thiscall **)(IUnknown *))(v4->field_0 + 80))(v4) ) /*0x468d1c*/
    return 1; /*0x468d23*/
  result = 0; /*0x468d67*/
  if ( *(_BYTE *)(this->q0AC + 676) ) /*0x468d35*/
  {
    v14 = (AbstractClass *)this->q10C; /*0x468d3f*/
    if ( v14 ) /*0x468d47*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(AbstractClass *))(*(_DWORD *)v14->__pad_0 + 84))(v14) /*0x468d65*/
        && ObjectClass::DistanceTo(this, (AbstractClass *)this->q10C) < 128 )
      {
        return 1; /*0x468d3d*/
      }
    }
  }
  return result; /*0x468c78*/
}


// ==== 0x00468D80  BulletClass::Fire  this=BulletClass  sig=csp ====
char __thiscall BulletClass::Fire(int this, char a2)
{
  int v3; // ebx
  int v4; // eax
  AbstractClass *v5; // ecx
  int v6; // edx
  int v7; // eax
  AbstractClass *v8; // ecx
  _DWORD *v9; // eax
  IUnknown *v10; // eax
  double v11; // st7
  int v12; // eax
  int *v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  int *v17; // eax
  int *v18; // eax
  AbstractClass *v19; // ecx
  AbstractClass *v20; // ecx
  int v21; // eax
  int v22; // edi
  int v23; // eax
  int *v24; // eax
  int v25; // ecx
  int v27; // [esp+18h] [ebp-30h] BYREF
  int v28; // [esp+1Ch] [ebp-2Ch]
  int v29; // [esp+20h] [ebp-28h]
  int v30; // [esp+24h] [ebp-24h] BYREF
  int v31; // [esp+28h] [ebp-20h]
  int v32; // [esp+2Ch] [ebp-1Ch]
  char v33[12]; // [esp+30h] [ebp-18h] BYREF
  int v34[3]; // [esp+3Ch] [ebp-Ch] BYREF

  v3 = 0; /*0x468d87*/
  v4 = this + 156; /*0x468d8a*/
  v27 = *(_DWORD *)(this + 156); /*0x468d96*/
  v5 = *(AbstractClass **)(this + 268); /*0x468d9a*/
  v6 = *(_DWORD *)(v4 + 4); /*0x468da0*/
  v7 = *(_DWORD *)(v4 + 8); /*0x468da5*/
  v28 = v6; /*0x468da8*/
  v29 = v7; /*0x468dac*/
  if ( v5 && (*(unsigned __int8 (__thiscall **)(AbstractClass *))(*(_DWORD *)v5->__pad_0 + 84))(v5) ) /*0x468db4*/
    v3 = *(_DWORD *)(this + 268); /*0x468dbb*/
  if ( !*(_BYTE *)(*(_DWORD *)(this + 172) + 674) ) /*0x468dc7*/
  {
    v8 = *(AbstractClass **)(this + 268); /*0x468dd5*/
    if ( v8 ) /*0x468ddd*/
    {
      v9 = (_DWORD *)(*(int (__thiscall **)(AbstractClass *, char *))(*(_DWORD *)v8->__pad_0 + 72))(v8, v33); /*0x468dea*/
      v10 = Coord::Subtract(v34, (IUnknown *)(v27 - *v9), (IUnknown *)(v28 - v9[1]), (IUnknown *)(v29 - v9[2])); /*0x468e0e*/
      v30 = v10->field_0; /*0x468e18*/
      v31 = v10->field_4; /*0x468e1f*/
      v32 = v10->field_8; /*0x468e2a*/
      v11 = Math::Sqrt((double)v30 * (double)v30 + (double)v32 * (double)v32 + (double)v31 * (double)v31); /*0x468e4f*/
      if ( (int)Math::RoundToInt(v11) < 32 ) /*0x468e5f*/
      {
        v12 = *(_DWORD *)(this + 172); /*0x468e61*/
        if ( !*(_BYTE *)(v12 + 660) && !*(_BYTE *)(v12 + 674) ) /*0x468e71*/
        {
          v13 = (int *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 268) + 72))( /*0x468e88*/
                         *(_DWORD *)(this + 268),
                         v34);
          v27 = *v13; /*0x468e8d*/
          v28 = v13[1]; /*0x468e94*/
          v29 = v13[2]; /*0x468e9b*/
        }
      }
    }
    if ( !*(_BYTE *)(*(_DWORD *)(this + 296) + 340) ) /*0x468ea5*/
    {
      v14 = *(_DWORD *)(this + 172); /*0x468eb3*/
      if ( !*(_BYTE *)(v14 + 660) ) /*0x468eb9*/
      {
        if ( !a2 /*0x468f05*/
          && !*(_BYTE *)(v14 + 667)
          && *(int *)(v14 + 732) <= 0
          && (*(_DWORD *)(this + 208) != dword_89DE30 || *(_QWORD *)(this + 212) != qword_89DE34) )
        {
          v15 = *(_DWORD *)(this + 212); /*0x468f11*/
          v27 = *(_DWORD *)(this + 208); /*0x468f14*/
          v16 = *(_DWORD *)(this + 216); /*0x468f18*/
          v28 = v15; /*0x468f1b*/
          v29 = v16; /*0x468f1f*/
        }
        if ( v3 && (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 120))(v3) != 2 ) /*0x468f31*/
        {
          if ( ObjectClass::DistanceTo((void *)this, *(AbstractClass **)(this + 268)) >= 128 ) /*0x468f46*/
            goto LABEL_30; /*0x468f46*/
          v17 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v3 + 164))(v3, v34); /*0x468f55*/
          goto LABEL_29; /*0x468f5b*/
        }
        if ( *(_DWORD *)(this + 268) ) /*0x468f60*/
        {
          if ( ObjectClass::DistanceTo((void *)this, *(AbstractClass **)(this + 268)) < 42 ) /*0x468f79*/
          {
            v18 = (int *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 268) + 88))( /*0x468f88*/
                           *(_DWORD *)(this + 268),
                           v34);
            v27 = *v18; /*0x468f8d*/
            v19 = *(AbstractClass **)(this + 268); /*0x468f91*/
            v28 = v18[1]; /*0x468f9a*/
            v29 = v18[2]; /*0x468fa1*/
            if ( (*(int (__thiscall **)(AbstractClass *))(*(_DWORD *)v19->__pad_0 + 44))(v19) == 6 ) /*0x468fad*/
            {
              v20 = *(AbstractClass **)(this + 268); /*0x468faf*/
              if ( *(_DWORD *)(v20[36].uniqueId + 3772) /*0x468fcc*/
                || *(_DWORD *)(v20[36].uniqueId + 3776)
                || *(_DWORD *)(v20[36].uniqueId + 3780) )
              {
                v17 = (int *)(*(int (__thiscall **)(AbstractClass *, int *))(*(_DWORD *)v20->__pad_0 + 164))(v20, v34); /*0x468fda*/
LABEL_29:
                v27 = *v17; /*0x468fe0*/
                v28 = v17[1]; /*0x468fe9*/
                v29 = v17[2]; /*0x468ff0*/
              }
            }
          }
        }
      }
    }
  }
LABEL_30:
  v21 = *(_DWORD *)(this + 172); /*0x468ff4*/
  if ( *(_BYTE *)(v21 + 660) ) /*0x468ffa*/
  {
    LOBYTE(v21) = Warhead::ApplyDamage((char *)this, (ObjectClass *)&v27); /*0x4690a1*/
  }
  else
  {
    v30 = v27; /*0x469010*/
    v31 = v28; /*0x469018*/
    v32 = v29; /*0x46901c*/
    v22 = 0; /*0x469026*/
    if ( *(int *)(v21 + 684) > 0 ) /*0x46902a*/
    {
      do /*0x46908f*/
      {
        Warhead::ApplyDamage((char *)this, (ObjectClass *)&v27); /*0x469033*/
        LOBYTE(v21) = *(_BYTE *)(this + 144); /*0x469038*/
        if ( !(_BYTE)v21 ) /*0x469040*/
          break; /*0x469040*/
        v23 = Random::Range(&MEMORY[0xA8B230]->random[1], (IUnknown *)0x100, (IUnknown *)0x200); /*0x469057*/
        v24 = RandomCoordScatter(v34, &v30, v23, 0); /*0x469067*/
        ++v22; /*0x46906e*/
        v27 = *v24; /*0x46906f*/
        v25 = *(_DWORD *)(this + 172); /*0x469073*/
        v28 = v24[1]; /*0x46907c*/
        v29 = v24[2]; /*0x469083*/
        v21 = *(_DWORD *)(v25 + 684); /*0x469087*/
      }
      while ( v22 < v21 ); /*0x46908f*/
    }
  }
  return v21; /*0x469091*/
}


// ==== 0x004690B0  Warhead::ApplyDamage  this=ObjectClass  sig=csp ====
char __thiscall Warhead::ApplyDamage(char *this, ObjectClass *aP1)
{
  int v3; // eax
  IUnknown *v4; // ecx
  int v5; // eax
  IUnknown *v6; // ecx
  int v7; // ecx
  InfantryClass *v8; // edi
  Concurrency::details::SchedulerBase *v9; // ebx
  _DWORD *NumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ; // eax
  _DWORD *v11; // eax
  RadSiteClass *v12; // edi
  _BYTE *v13; // eax
  TechnoClass *v14; // eax
  int v15; // eax
  int v16; // edi
  bool v17; // bl
  void **v18; // ecx
  int v19; // edi
  int v20; // eax
  int v21; // ecx
  TechnoClass *v22; // ecx
  TechnoClass *v23; // ecx
  int v24; // eax
  int v25; // eax
  int v26; // ecx
  _DWORD *v27; // edi
  TechnoClass *v28; // eax
  int v29; // ecx
  int v30; // edi
  _DWORD *v31; // eax
  ObjectClass *Member; // ebx
  int v33; // edi
  int v34; // eax
  int v35; // eax
  _DWORD *v36; // eax
  TechnoClass *v37; // ecx
  int v38; // eax
  int v39; // ecx
  int v40; // edi
  int v41; // ecx
  int v42; // ecx
  TechnoClass *v43; // ecx
  int v44; // eax
  int owningHouseIndex0; // ecx
  int v46; // eax
  int v47; // ecx
  int v48; // eax
  int *v49; // edi
  double v50; // st7
  _DWORD *v51; // edx
  int v52; // ecx
  int v53; // edx
  double v54; // st7
  float v55; // edx
  int v56; // ebx
  int v57; // eax
  int v58; // edx
  _BYTE *v59; // eax
  int v60; // eax
  ObjectClass *v61; // eax
  TechnoClass *v62; // ecx
  TechnoClass *v63; // eax
  void *focus; // ecx
  int Instance; // eax
  char v66; // cl
  int v67; // ecx
  int v68; // edx
  RadSiteClass *v69; // eax
  int v70; // ebx
  int v71; // ecx
  int v72; // eax
  _DWORD *v73; // edi
  int v74; // edi
  int v75; // ecx
  int v76; // edx
  CoordStruct *WarheadVersusMultiplier; // ebx
  _BYTE *v78; // edx
  int v79; // eax
  AnimClass *v81; // edi
  void *eax160; // eax
  TechnoClass *v83; // eax
  int ecx162; // ecx
  int v84; // ecx
  int v85; // eax
  TechnoTypeClass *v87; // ebx
  int eax166; // eax
  TechnoClass *v88; // edx
  int v89; // edx
  VoxelAnimClass *v91; // ebx
  int *edi173; // edi
  int *v92; // eax
  AnimClass *v94; // edi
  unsigned int *eax181; // eax
  unsigned int v95; // ecx
  unsigned int v96; // edx
  unsigned int v97; // eax
  int v98; // eax
  int v99; // edi
  int v100; // edx
  unsigned int v101; // ebx
  TechnoClass *v102; // ecx
  TechnoClass *v104; // edx
  TechnoTypeClass *v105; // ebx
  char al187; // al
  __int16 v106; // cx
  double v107; // st7
  double v108; // st7
  int v109; // edx
  int v110; // eax
  int v111; // edx
  InfantryClass *v113; // ebx
  TechnoTypeClass *v114; // esi
  char al192; // al
  __int16 v115; // cx
  ObjectClass *v117; // edi
  unsigned int ebx192; // ebx
  double v118; // st7
  double v119; // st7
  int v120; // ecx
  int v121; // edx
  int v122; // eax
  CoordStruct *v124; // edi
  AnimClass *v125; // esi
  void *eax197; // eax
  float v127; // [esp+0h] [ebp-A8h]
  __int64 Z; // [esp+0h] [ebp-A8h]
  __int64 v129; // [esp+0h] [ebp-A8h]
  char v130; // [esp+17h] [ebp-91h]
  double v131; // [esp+18h] [ebp-90h]
  AbstractClass *NeighbourContent; // [esp+18h] [ebp-90h]
  double v133; // [esp+18h] [ebp-90h]
  double v134; // [esp+18h] [ebp-90h]
  AbstractClass *v138; // [esp+18h] [ebp-90h]
  double v136; // [esp+18h] [ebp-90h]
  double v137; // [esp+18h] [ebp-90h]
  double var90e; // [esp+18h] [ebp-90h]
  TechnoClass *v139; // [esp+20h] [ebp-88h] BYREF
  int v140; // [esp+24h] [ebp-84h]
  double v141; // [esp+28h] [ebp-80h] BYREF
  double v142; // [esp+30h] [ebp-78h]
  char v143; // [esp+3Bh] [ebp-6Dh]
  int v144; // [esp+3Ch] [ebp-6Ch]
  IUnknown *aP3[2]; // [esp+40h] [ebp-68h]
  double v146; // [esp+48h] [ebp-60h]
  LPVOID ppv[2]; // [esp+50h] [ebp-58h] BYREF
  TechnoClass *aP4[2]; // [esp+58h] [ebp-50h] BYREF
  int v149; // [esp+60h] [ebp-48h]
  InfantryClass *v153; // [esp+68h] [ebp-40h] BYREF
  CoordStruct aP2; // [esp+6Ch] [ebp-3Ch] BYREF
  TechnoTypeClass *v152; // [esp+78h] [ebp-30h]
  double var2C; // [esp+7Ch] [ebp-2Ch] BYREF
  __int64 v154; // [esp+84h] [ebp-24h]
  InfantryClass *aP5; // [esp+8Ch] [ebp-1Ch]
  double v156; // [esp+90h] [ebp-18h] BYREF
  double v157; // [esp+98h] [ebp-10h]
  double v158; // [esp+A0h] [ebp-8h]
  int savedregs; // [esp+A8h] [ebp+0h] BYREF

  v144 = 1;
  v130 = 0;
  v3 = this->q04A;
  v4 = *(IUnknown **)(v3 + 380);
  if ( v4 || *(_DWORD *)(v3 + 384) )
    MEMORY[0x87F7EC] = (TechnoTypeClass *)Random::Range(
                                            &MEMORY[0x87F8E4].__pad_5568[7484],
                                            v4,
                                            *(IUnknown **)(v3 + 384));
  v5 = this->q04A;
  v6 = *(IUnknown **)(v5 + 388);
  if ( v6 || *(_DWORD *)(v5 + 392) )
    MEMORY[0x87F7F0] = (TechnoTypeClass *)Random::Range(
                                            &MEMORY[0x87F8E4].__pad_5568[7484],
                                            v6,
                                            *(IUnknown **)(v5 + 392));
  v7 = this->q04C;
  if ( v7 )
  {
    v153 = *(InfantryClass **)(v7 + 344);
    v8 = v153;
    if ( (int)v153 > 0 )
    {
      LOWORD(v139) = *(_DWORD *)aP1->__pad_0 / 256;
      HIWORD(v139) = *(_DWORD *)&aP1->__pad_0[4] / 256;
      v140 = Math::RoundToInt(*(float *)(*(_DWORD *)(v7 + 172) + 292));
      v9 = (Concurrency::details::SchedulerBase *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v139);
      NumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ = (_DWORD *)_GetNumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ(v9);
      if ( NumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ )
      {
        RadSiteClass::Add(NumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ, (int)v8);
      }
      else
      {
        v11 = (_DWORD *)__2_YAPAXI_Z(0x74u);
        if ( v11 )
          v12 = (RadSiteClass *)RadSiteClass::RadSiteClass(v11);
        else
          v12 = 0;
        RadSiteClass::SetBaseCell(v12, &v139);
        RadSiteClass::SetSpread(v12, v140);
        RadSiteClass::SetRadLevel(v12, (int)v153);
        Warhead::ProcessDamageArea((int)v12);
        TerrainClass::SetFieldF8(v9, (int)v12);
      }
    }
  }
  v13 = (_BYTE *)this->q04A;
  if ( v13[341] )
  {
    v14 = (TechnoClass *)this->fallRate;
    if ( v14 && v14->rockerLinkedUnit )
    {
      v15 = this->q043;
      if ( v15 )
        v16 = (*(_BYTE *)(v15 + 20) & 2) != 0 ? v15 : 0;
      else
        v16 = 0;
      v17 = v15 && (*(_BYTE *)(v15 + 20) & 1) != 0 && (unsigned __int8)House::IsHumanPlayer(*(#375 **)(v15 + 540));
      if ( v16 )
      {
        if ( *(_BYTE *)(v16 + 144) )
        {
          v18 = *(void ***)(v16 + 52);
          if ( v18 )
          {
            TeamClass::Update_0(v18, 6, (AbstractClass *)v16, dword_89DDF0, 0, *((AbstractClass **)this + 44));
            TeamClass::Update_0(
              *(void ***)(v16 + 52),
              44,
              (AbstractClass *)v16,
              dword_89DDF0,
              0,
              *((AbstractClass **)this + 44));
          }
        }
      }
      if ( CaptureManagerClass::CaptureUnit(
             *(_DWORD *)(this->fallRate + 700),
             (int)&savedregs,
             this->q043)
        && *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 532) != -1
        && ((unsigned __int8)House::IsHumanPlayer(*(#375 **)(this->fallRate + 540)) || v17) )
      {
        v19 = v16 + 156;
        v141 = *(double *)v19;
        LODWORD(v142) = *(_DWORD *)(v19 + 8);
        StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 532), (int)&v141, 0);
      }
    }
  }
  else if ( v13[343] )
  {
    v20 = this->q043;
    if ( v20 )
      v20 = (*(_BYTE *)(v20 + 20) & 1) != 0 ? v20 : 0;
    AbstractClass::Initialize(&MEMORY[0x87F5D8], *((TechnoClass **)this + 44), (TechnoClass *)v20);
  }
  else if ( v13[344] )
  {
    v21 = this->q043;
    if ( v21 )
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v21 + 44))(v21) == 6 )
      {
        v22 = (TechnoClass *)this->fallRate;
        if ( v22 )
        {
          if ( (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v22->__pad_0 + 44))(v22) == 15 )
            Warhead::RemoveFromDamageList(*((_DWORD **)this + 67), this->fallRate);
        }
      }
    }
  }
  else if ( v13[345] )
  {
    v23 = (TechnoClass *)this->fallRate;
    if ( v23 )
    {
      v24 = this->q043;
      if ( v24 )
        ParasiteClass::TryInfect(v23[1].radarFlashTimer[1], (*(_BYTE *)(v24 + 20) & 4) != 0 ? (_DWORD *)v24 : 0);
      else
        ParasiteClass::TryInfect(v23[1].radarFlashTimer[1], 0);
    }
  }
  else if ( v13[346] )
  {
    if ( this->fallRate )
    {
      v25 = this->q043;
      if ( v25 )
      {
        if ( (*(_BYTE *)(v25 + 20) & 4) == 0
          || (v26 = (*(_BYTE *)(v25 + 20) & 4) != 0 ? v25 : 0,
              (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 120))(v26) == 2) )
        {
          v27 = (_DWORD *)this->q043;
          if ( v27 )
          {
            if ( (v27[5] & 1) != 0 )
            {
              if ( v27[185] && (*(int (__thiscall **)(_DWORD))(*v27 + 44))(this->q043) == 1 )
              {
                v27 = (_DWORD *)v27[185];
                (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)this + 44) + 968))(this->fallRate, v27);
              }
            }
            else
            {
              v27 = 0;
            }
          }
          OreManagerClass::AssignMinerToRefinery(*(_DWORD *)(this->fallRate + 628), v27);
        }
      }
    }
  }
  else if ( v13[347] )
  {
    v28 = (TechnoClass *)this->fallRate;
    if ( v28 )
    {
      v29 = this->q043;
      if ( *(_DWORD *)&v28->isBerserk != v29
        && !v28->isBerserk_duration_left
        && ((v28->abstractFlags & 4) == 0
         || !*((v28->abstractFlags & 4) != 0 ? (char *)&v28[1].targetingTimer[2] + 1 : (_BYTE *)1709)) )
      {
        v143 = 0;
        if ( v29 && (*(int (__thiscall **)(int))(*(_DWORD *)v29 + 44))(v29) == 1 )
        {
          v30 = this->q043;
          v31 = v30
              ? ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)v30 + 44))(this->q043) == 1
               ? (_DWORD *)v30
               : 0)
              : 0;
          Member = (ObjectClass *)Team::GetMember(v31, 0);
          if ( Member
            && (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)Member->__pad_0 + 44))(Member) == 6
            && *(_BYTE *)(Member[7].health + 5821) )
          {
            v33 = this->q043;
            v34 = v33
                ? ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)v33 + 44))(this->q043) == 1
                 ? v33
                 : 0)
                : 0;
            v35 = v34 + 156;
            v141 = *(double *)v35;
            LODWORD(v142) = *(_DWORD *)(v35 + 8);
            v36 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&v141);
            if ( Cell::IsBridge(v36) == (_DWORD *)Member )
              v143 = 1;
          }
        }
        v37 = (TechnoClass *)this->fallRate;
        if ( *(_DWORD *)&v37->isBerserk )
          TechnoClass::EjectPassengers((int *)v37->__pad_0, 0);
        v38 = this->q043;
        if ( v38 )
        {
          if ( !v143 )
          {
            if ( (*(_BYTE *)(v38 + 20) & 4) == 0
              || (v39 = (*(_BYTE *)(v38 + 20) & 4) != 0 ? v38 : 0,
                  (*(int (__thiscall **)(int))(*(_DWORD *)v39 + 120))(v39) == 2) )
            {
              v40 = this->q043;
              if ( v40
                && (*(_BYTE *)(v40 + 20) & 4) != 0
                && !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v40 + 352))(this->q043)
                && ((v41 = this->q043) != 0 && (*(int (__thiscall **)(int))(*(_DWORD *)v41 + 44))(v41) == 1
                 || (v42 = this->q043) != 0 && (*(int (__thiscall **)(int))(*(_DWORD *)v42 + 44))(v42) == 2)
                && !*(_BYTE *)(v40 + 1709)
                && (double)*((int *)this + 27) > *(double *)((*(int (__thiscall **)(int))(*(_DWORD *)v40 + 132))(v40)
                                                           + 896) )
              {
                FootClass::FootClass_ImbueLocomotor(
                  *((int **)this + 44),
                  (int)&savedregs,
                  v40,
                  (_DWORD *)v40,
                  *(IID *)(this->q04A + 348),
                  *(_DWORD *)(this->q04A + 360));
              }
            }
          }
        }
      }
    }
  }
  else if ( v13[364] )
  {
    v43 = (TechnoClass *)this->fallRate;
    if ( v43 )
    {
      v44 = this->q043;
      if ( v44 )
      {
        if ( (*(_BYTE *)(v44 + 20) & 1) != 0 )
        {
          owningHouseIndex0 = v43->owningHouseIndex0;
          if ( owningHouseIndex0 )
          {
            if ( Warhead::GetWarheadSound(owningHouseIndex0, (*(_BYTE *)(v44 + 20) & 1) != 0 ? v44 : 0) )
            {
              v46 = this->q043;
              if ( v46 )
                v46 = (*(_BYTE *)(v46 + 20) & 1) != 0 ? v46 : 0;
              AirstrikeClass::StartMission(*(_DWORD *)(this->fallRate + 660), (int *)v46);
            }
          }
        }
      }
    }
  }
  else if ( v13[335]
         && (v47 = this->q043) != 0
         && (*(int (__thiscall **)(int))(*(_DWORD *)v47 + 44))(v47) == 1 )
  {
    v48 = this->q043;
    if ( v48 )
      v49 = (*(_BYTE *)(v48 + 20) & 1) != 0 ? (int *)v48 : 0;
    else
      v49 = 0;
    if ( this->fallRate && v49 && !(*(unsigned __int8 (__thiscall **)(int *))(*v49 + 352))(v49) )
    {
      v140 = (this->health * this->q054) >> 8;
      v50 = (double)v140 * *(float *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 6324) / dbl_81AEF8;
      if ( v50 >= 4.0 )
        v131 = 4.0;
      else
        v131 = v50;
      aP4[0] = (TechnoClass *)v49[39];
      aP4[1] = (TechnoClass *)v49[40];
      v51 = (_DWORD *)(this->fallRate + 156);
      v149 = v49[41];
      v52 = v51[1];
      v140 = *v51 - (unsigned int)aP4[0];
      v53 = v51[2] - v149;
      *(float *)aP3 = (float)v140;
      v140 = v53;
      *(float *)&aP3[1] = (float)(v52 - (unsigned int)aP4[1]);
      *(float *)&v146 = (float)v53;
      v54 = Math::Sqrt(*(float *)aP3 * *(float *)aP3 + *(float *)&aP3[1] * *(float *)&aP3[1] + *(float *)&v146
                                                                                             * *(float *)&v146);
      if ( v54 == 0.0 )
      {
        v55 = *(float *)&v146;
        var2C = *(double *)aP3;
      }
      else
      {
        *(float *)&v141 = *(float *)aP3 / v54;
        *((float *)&v141 + 1) = *(float *)&aP3[1] / v54;
        var2C = v141;
        *(float *)&v142 = *(float *)&v146 / v54;
        v55 = *(float *)&v142;
      }
      *(float *)&v154 = v55;
      *((float *)&v141 + 1) = *((float *)&var2C + 1) * 10.0;
      *(float *)&v142 = v55 * 10.0;
      v56 = Math::RoundToInt(*(float *)&var2C * 10.0);
      HIDWORD(var2C) = Math::RoundToInt(*((float *)&v141 + 1));
      v57 = Math::RoundToInt(*(float *)&v142);
      aP4[0] = (TechnoClass *)((char *)aP4[0] + v56);
      aP4[1] = (TechnoClass *)((char *)aP4[1] + HIDWORD(var2C));
      v58 = *v49;
      v149 += v57;
      v127 = v131;
      (*(void (__thiscall **)(int *, TechnoClass **, _DWORD, int))(v58 + 984))(v49, aP4, LODWORD(v127), 1);
      v49[170] = this->fallRate;
      *(_DWORD *)(this->fallRate + 680) = v49;
    }
  }
  else
  {
    v59 = (_BYTE *)this->q04A;
    if ( v59[366] )
    {
      v60 = this->q043;
      if ( v60 )
      {
        if ( (*(_BYTE *)(v60 + 20) & 2) != 0 )
        {
          v61 = *(ObjectClass **)(v60 + 56);
          if ( v61 )
            ObjectClass::CleanupAudioAndRefs((int)v61);
        }
      }
    }
    else if ( v59[373] )
    {
      v62 = (TechnoClass *)this->fallRate;
      if ( v62 )
        (*(void (__thiscall **)(TechnoClass *, _DWORD))(*(_DWORD *)v62->__pad_0 + 1132))(v62, this->q043);
    }
    else if ( v59[374] )
    {
      SuperWeapon::CreateNukePayload((int *)this);
    }
    else
    {
      if ( *(_DWORD *)(this->q02B + 692) )
        Warhead::ApplyPostDamageEffects((int *)this);
      v63 = (TechnoClass *)this->fallRate;
      focus = 0;
      if ( v63 )
        focus = v63->focus;
      Instance = PlaySoundEffectAt(
                   aP1,
                   (this->health * this->q054) >> 8,
                   v63,
                   this->q04A,
                   1,
                   (int)focus);
      v66 = this->isAliveFlag;
      v144 = Instance;
      if ( !v66 )
        return Instance;
      if ( Instance == 2 )
        v130 = 1;
    }
  }
  v67 = *(_DWORD *)&aP1->__pad_0[4];
  aP2.X = *(_DWORD *)aP1->__pad_0;
  v68 = *(_DWORD *)&aP1->__pad_0[8];
  v69 = (RadSiteClass *)this->q02B;
  aP2.Y = v67;
  aP2.Z = v68;
  if ( BYTE2(v69[6].abstractFlags) )
    aP2 = *(CoordStruct *)RandomCoordScatter((int *)&v141, &aP2.X, 32, 0);
  v70 = -1;
  if ( (*(int (__thiscall **)(char *))(this->u32_1C8)(this) < 2 * unk_89DE70 )
  {
    v141 = *(double *)(this + 156);
    LODWORD(v142) = this->q029;
    v70 = *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&v141) + 59);
    if ( v70 == 2 && !v144 )
    {
      v71 = this->q029;
      v72 = this->owningHouseIndex;
      LODWORD(v141) = this->q027;
      LODWORD(v142) = v71;
      HIDWORD(v141) = v72;
      v73 = (_DWORD *)*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&v141) + 57);
      if ( v73 )
      {
        if ( (*(int (__thiscall **)(_DWORD *))(*v73 + 44))(v73) == 1 )
        {
          v74 = v73[433];
          if ( *(_BYTE *)(v74 + 3278) )
          {
            if ( !*(_BYTE *)(v74 + 3433) )
              v70 = -1;
          }
        }
      }
    }
  }
  v140 = (int)(this + 156);
  LODWORD(v141) = this->q027;
  v75 = this->health;
  HIDWORD(v141) = this->owningHouseIndex;
  v76 = this->q04A;
  LODWORD(v142) = this->q029;
  WarheadVersusMultiplier = (CoordStruct *)GetWarheadVersusMultiplier(v75, v76, v70, &v141);
  LOBYTE(Instance) = v130;
  if ( this->q0E0 )
  {
    if ( !v130 )
    {
      v78 = (_BYTE *)this->q04A;
      v79 = 0;
      if ( v78[337] )
        v79 = 2;
      if ( v78[338] )
        LOBYTE(v79) = v79 | 4;
      if ( v78[339] )
        LOBYTE(v79) = v79 | 8;
      CreateSmokeEffectAt(this->health, (int)v78, aP2.X, aP2.Y, aP2.Z, 1, v79);
      goto LABEL_158;
    }
  }
  else if ( !v130 )
  {
LABEL_158:
    if ( WarheadVersusMultiplier )
    {
      v81 = (AnimClass *)__2_YAPAXI_Z(0x1C8u);
      if ( !v81
        || (Z = (unsigned int)aP2.Z,
            eax160 = (void *)Return::HRESULT_Fail(aP2.X, aP2.Y, aP2.Z),
            !AnimClass::ctor(
               (void **)v81,
               WarheadVersusMultiplier,
               &aP2,
               0,
               (CoordStruct *)1,
               (void *)0x2600,
               eax160,
               SBYTE4(Z))) )
      {
        if ( this->q04A == *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 3980) )
        {
          v83 = (TechnoClass *)this->fallRate;
          ecx162 = -1;
          if ( v83 )
            ecx162 = *(_DWORD *)(*((_DWORD *)v83->focus + 13) + 184);
          LOWORD(v144) = aP2.X / 256;
          HIWORD(v144) = aP2.Y / 256;
          v153 = (InfantryClass *)v144;
          sub_4251F0(ecx162, (__int16 *)&v153);
        }
      }
    }
    v84 = this->q04A;
    v85 = *(_DWORD *)(v84 + 452);
    if ( v85 > 0 )
    {
      v87 = (TechnoTypeClass *)Random::Range(
                                 &MEMORY[0xA8B230]->random[1],
                                 *(IUnknown **)(v84 + 456),
                                 (IUnknown *)(v85 - 1));
      eax166 = this->q04A;
      ppv[1] = v87;
      if ( *(int *)(eax166 + 412) > 0 )
      {
        v88 = 0;
        v139 = 0;
        while ( (int)v87 > 0 )
        {
          v89 = (int)abs32(Random::State(&MEMORY[0xA8B230]->random[1]))
              % (*(_DWORD *)(4 * (_DWORD)v88 + *(_DWORD *)(eax166 + 428)) + 1);
          v152 = (TechnoTypeClass *)v89;
          if ( v89 >= (int)v87 )
          {
            v89 = (int)v87;
            v152 = v87;
          }
          if ( v89 > 0 )
          {
            v144 = v89;
            do
            {
              v91 = (VoxelAnimClass *)__2_YAPAXI_Z(0x148u);
              if ( v91 )
              {
                edi173 = (int *)(4 * (_DWORD)v139 + *(_DWORD *)(this->q04A + 400));
                v92 = (int *)(*(int (__thiscall **)(char *, double *))(this->q048)(this, &v141);
                DamageAnimClass::Constructor((#374 *)v91, *edi173, v92, 0);
              }
              --v144;
            }
            while ( v144 );
          }
          v87 = (TechnoTypeClass *)((char *)ppv[1] - (char *)v152);
          eax166 = this->q04A;
          v88 = (TechnoClass *)&v139->__pad_0[1];
          ppv[1] = (char *)ppv[1] - (int)v152;
          v139 = v88;
          if ( (int)v88 >= *(_DWORD *)(eax166 + 412) )
          {
            v88 = 0;
            v139 = 0;
          }
        }
      }
      if ( !*(_DWORD *)(this->q04A + 412) && (int)v87 > 0 )
      {
        do
        {
          v94 = (AnimClass *)__2_YAPAXI_Z(0x1C8u);
          if ( v94 )
          {
            eax181 = (unsigned int *)(*(int (__thiscall **)(char *, double *))(this->q048)(this, &var2C);
            v95 = *eax181;
            v96 = eax181[1];
            v97 = eax181[2];
            v141 = COERCE_DOUBLE(__PAIR64__(v96, v95));
            LODWORD(v142) = v97 + 20;
            v98 = Random::Range(
                    &MEMORY[0xA8B230]->random[1],
                    0,
                    (IUnknown *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 332) - 1));
            AnimClass::ctor(
              (void **)v94,
              *(CoordStruct **)(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 320) + 4 * v98),
              (CoordStruct *)&v141,
              0,
              (CoordStruct *)1,
              (void *)0x600,
              0,
              0);
          }
          v87 = (TechnoTypeClass *)((char *)v87 - 1);
        }
        while ( v87 );
      }
    }
    Instance = this->q02B;
    if ( *(_BYTE *)(Instance + 660) )
    {
      v99 = *(_DWORD *)(Instance + 688);
      v100 = *(_DWORD *)this;
      v101 = 0;
      v153 = *(InfantryClass **)(v99 + 160);
      v139 = (TechnoClass *)(*(int (__thiscall **)(char *))(v100 + 444))(this);
      v144 = 8;
      do
      {
        NeighbourContent = (AbstractClass *)Cell::GetNeighbourContent(v139, v101);
        v102 = *(TechnoClass **)(v99 + 164);
        v104 = (TechnoClass *)this->fallRate;
        aP5 = *(InfantryClass **)(v99 + 172);
        v101 = ((_BYTE)v101 + 1) & 7;
        v152 = (TechnoTypeClass *)v101;
        aP4[0] = v102;
        aP3[0] = (IUnknown *)v104;
        ppv[1] = 0;
        if ( CoCreateInstance(&rclsid, 0, 7u, &IID_IUnknown, &ppv[1]) >= 0 )
        {
          v105 = (TechnoTypeClass *)ppv[1];
          Particle::Init(
            (int)ppv[1],
            (AbstractClass *)v153,
            (TechnoClass *)NeighbourContent,
            aP3[0],
            aP4[0],
            aP5,
            50,
            0);
          if ( v105 )
          {
            al187 = Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)0x20);
            LOBYTE(v106) = 0;
            HIBYTE(v106) = al187;
            *(double *)aP3 = (double)(*(_DWORD *)(v99 + 168) / 10);
            v133 = (double)(v106 - 0x3FFF) * -0.00009587672516830327;
            *(double *)aP4 = Math::SinCos(v133);
            *(double *)aP4 = Math::ArcTan2(4.712436918747274) * *(double *)aP4 * *(double *)aP3;
            v134 = Math::ArcTan2(v133);
            v107 = Math::ArcTan2(4.712436918747274);
            v154 = *(_QWORD *)aP4;
            v157 = *(double *)aP4;
            var2C = v107 * v134 * *(double *)aP3;
            v156 = var2C;
            v108 = Math::SinCos(4.712436918747274);
            LODWORD(v141) = *(_DWORD *)v140;
            v109 = *(_DWORD *)(v140 + 4);
            v158 = v108 * *(double *)aP3;
            v110 = *(_DWORD *)(v140 + 8);
            HIDWORD(v141) = v109;
            v111 = *(_DWORD *)v105->vtable0;
            LODWORD(v142) = v110;
            (*(void (__thiscall **)(TechnoTypeClass *, double *, double *))(v111 + 496))(v105, &v141, &v156);
          }
          v101 = (unsigned int)v152;
        }
        --v144;
      }
      while ( v144 );
      v113 = *(InfantryClass **)(v99 + 172);
      v138 = *(AbstractClass **)(v99 + 164);
      aP3[0] = *((IUnknown **)this + 44);
      ppv[1] = 0;
      Instance = CoCreateInstance(&rclsid, 0, 7u, &IID_IUnknown, &ppv[1]);
      if ( Instance >= 0 )
      {
        v114 = (TechnoTypeClass *)ppv[1];
        LOBYTE(Instance) = Particle::Init(
                             (int)ppv[1],
                             (AbstractClass *)v153,
                             v139,
                             aP3[0],
                             (TechnoClass *)v138,
                             v113,
                             50,
                             0);
        if ( v114 )
        {
          al192 = Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)0x20);
          LOBYTE(v115) = 0;
          HIBYTE(v115) = al192;
          *(double *)aP3 = (double)(*(_DWORD *)(v99 + 168) / 10);
          v136 = (double)(v115 - 0x3FFF) * -0.00009587672516830327;
          v117 = (ObjectClass *)HIDWORD(v136);
          ebx192 = LODWORD(v136);
          v137 = Math::SinCos(v136);
          var90e = Math::ArcTan2(4.712436918747274) * v137 * *(double *)aP3;
          *(double *)aP4 = Math::ArcTan2(COERCE_DOUBLE(__PAIR64__((unsigned int)v117, ebx192)));
          v118 = Math::ArcTan2(4.712436918747274);
          v142 = var90e;
          v157 = var90e;
          v141 = v118 * *(double *)aP4 * *(double *)aP3;
          v156 = v141;
          v119 = Math::SinCos(4.712436918747274);
          v120 = *(_DWORD *)(v140 + 4);
          LODWORD(v141) = *(_DWORD *)v140;
          v121 = *(_DWORD *)(v140 + 8);
          v122 = *(_DWORD *)v114->vtable0;
          HIDWORD(v141) = v120;
          v158 = v119 * *(double *)aP3;
          LODWORD(v142) = v121;
          LOBYTE(Instance) = (*(char (__thiscall **)(TechnoTypeClass *, double *, double *))(v122 + 496))(
                               v114,
                               &v141,
                               &v156);
        }
      }
    }
    return Instance;
  }
  v124 = *(CoordStruct **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 848);
  if ( v124 )
  {
    Instance = __2_YAPAXI_Z(0x1C8u);
    v125 = (AnimClass *)Instance;
    if ( Instance )
    {
      v129 = (unsigned int)aP2.Z;
      eax197 = (void *)Return::HRESULT_Fail(aP2.X, aP2.Y, aP2.Z);
      LOBYTE(Instance) = (unsigned __int8)AnimClass::ctor(
                                            (void **)v125,
                                            v124,
                                            &aP2,
                                            0,
                                            (CoordStruct *)1,
                                            (void *)0x2600,
                                            eax197,
                                            SBYTE4(v129));
    }
  }
  return Instance;
}


// ==== 0x0046A310  Warhead::ApplyPostDamageEffects  this=ObjectClass  sig=csp ====
int __thiscall Warhead_ApplyPostDamageEffects(int *this)
{
  int v2; // eax
  int v3; // esi
  int *v4; // ecx
  int v5; // ebx
  int v6; // ebp
  int v7; // edx
  _DWORD *v8; // eax
  int *v9; // eax
  int result; // eax
  int v11; // eax
  int v12; // edx
  int v13; // esi
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int *v18; // ecx
  int v19; // edx
  bool v20; // cc
  _WORD *v21; // ebx
  __int16 v22; // ax
  _BYTE *v23; // ebp
  int v24; // eax
  char v25; // al
  int v26; // edx
  int v27; // ebx
  int v28; // eax
  int *v29; // ebx
  int v30; // ecx
  int v31; // edx
  _DWORD *v32; // eax
  double v33; // st7
  __int16 v34; // ax
  double v35; // st7
  double v36; // st7
  double v37; // st7
  double v38; // st7
  double v39; // st7
  double v40; // st7
  int v41; // ecx
  int v42; // edx
  char v43; // al
  _DWORD *v44; // ecx
  int *v45; // ecx
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
  _DWORD *v56; // eax
  double v57; // st7
  __int16 v58; // bp
  unsigned int v59; // ebp
  double v60; // st7
  double v61; // st7
  double v62; // st7
  double v63; // st7
  unsigned int v64; // ebp
  double v65; // st7
  int v66; // ecx
  int v67; // edx
  int v68; // ecx
  int v69; // edx
  char v70; // al
  _BYTE *v71; // eax
  _BYTE *v72; // eax
  double v73; // [esp+3Ch] [ebp-A4h] BYREF
  double v74; // [esp+44h] [ebp-9Ch]
  double v75; // [esp+4Ch] [ebp-94h]
  int v76; // [esp+54h] [ebp-8Ch] BYREF
  double v77; // [esp+58h] [ebp-88h]
  double v78; // [esp+60h] [ebp-80h]
  LPVOID v79; // [esp+68h] [ebp-78h] BYREF
  int v80; // [esp+6Ch] [ebp-74h]
  _WORD *v81; // [esp+70h] [ebp-70h]
  LPVOID v82; // [esp+74h] [ebp-6Ch] BYREF
  int v83; // [esp+78h] [ebp-68h] BYREF
  int v84; // [esp+7Ch] [ebp-64h] BYREF
  int v85; // [esp+80h] [ebp-60h]
  int v86; // [esp+84h] [ebp-5Ch]
  double v87; // [esp+88h] [ebp-58h]
  double v88; // [esp+90h] [ebp-50h] BYREF
  int v89; // [esp+9Ch] [ebp-44h]
  int v90; // [esp+A0h] [ebp-40h] BYREF
  int v91; // [esp+A4h] [ebp-3Ch]
  int v92; // [esp+A8h] [ebp-38h]
  int v93; // [esp+ACh] [ebp-34h] BYREF
  int v94; // [esp+B0h] [ebp-30h]
  int v95; // [esp+B4h] [ebp-2Ch]
  LPVOID ppv; // [esp+B8h] [ebp-28h] BYREF
  void *v97; // [esp+BCh] [ebp-24h]
  int v98; // [esp+C0h] [ebp-20h]
  int v99; // [esp+C4h] [ebp-1Ch]
  int v100; // [esp+C8h] [ebp-18h]
  int v101; // [esp+CCh] [ebp-14h]
  int v102; // [esp+D0h] [ebp-10h]
  _BYTE v103[12]; // [esp+D4h] [ebp-Ch] BYREF

  v2 = this->q02B; /*0x46a322*/
  v3 = *(_DWORD *)(v2 + 696); /*0x46a328*/
  if ( v3 >= 0 ) /*0x46a330*/
  {
    v76 = *(_DWORD *)(v2 + 696); /*0x46a3d2*/
  }
  else
  {
    v4 = (int *)this->fallRate; /*0x46a336*/
    if ( v4 ) /*0x46a33e*/
    {
      v5 = this->q027; /*0x46a353*/
      v6 = this->owningHouseIndex; /*0x46a359*/
      v7 = *v4; /*0x46a35f*/
      v92 = this->q029; /*0x46a361*/
      v8 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(v7 + 72))(v4, &v93); /*0x46a370*/
      v9 = Coord::Subtract(&v90, *v8 - v5, v8[1] - v6, v8[2] - v92); /*0x46a392*/
      v84 = *v9; /*0x46a399*/
      v85 = v9[1]; /*0x46a3a4*/
      v86 = v9[2]; /*0x46a3ab*/
      result = (int)Coord::Length(&v84) / 256; /*0x46a3bd*/
      v76 = -v3 - result; /*0x46a3c6*/
      if ( v76 <= 0 ) /*0x46a3ca*/
        return result; /*0x46a3ca*/
    }
    else
    {
      v76 = 3; /*0x46a340*/
    }
  }
  result = (*(int (__thiscall **)(int *))(*this + 444))(this); /*0x46a3da*/
  if ( *(_DWORD *)(result + 228) ) /*0x46a3e0*/
  {
    v11 = (*(int (__thiscall **)(int *))(*this + 444))(this); /*0x46a3f2*/
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v11 + 228) + 44))(*(_DWORD *)(v11 + 228)); /*0x46a400*/
    if ( result != 6 ) /*0x46a406*/
    {
      v12 = *this; /*0x46a412*/
      v13 = *(_DWORD *)(this->q02B + 692); /*0x46a414*/
      v99 = *(_DWORD *)(v13 + 160); /*0x46a425*/
      v14 = *(_DWORD *)(*(int (__thiscall **)(int *, int *))(v12 + 440))(this, &v83); /*0x46a434*/
      v15 = *(_DWORD *)(v13 + 180); /*0x46a43c*/
      v98 = v14; /*0x46a443*/
      v16 = 0; /*0x46a44c*/
      v17 = v15 / 256; /*0x46a44e*/
      v83 = v17; /*0x46a454*/
      v89 = 0; /*0x46a458*/
      v80 = 1; /*0x46a45c*/
      if ( v17 >= 1 ) /*0x46a464*/
      {
        v18 = &dword_7ED3D4; /*0x46a46a*/
        v79 = &dword_7ED3D4; /*0x46a46f*/
        do /*0x46a926*/
        {
          v19 = *(v18 - 1); /*0x46a475*/
          v20 = v19 < *v18; /*0x46a478*/
          LODWORD(v78) = *v18; /*0x46a47a*/
          v100 = v19; /*0x46a47e*/
          if ( v20 ) /*0x46a485*/
          {
            v21 = (_WORD *)(4 * v19 + 11261072); /*0x46a48b*/
            v81 = v21; /*0x46a492*/
            do /*0x46a906*/
            {
              v22 = HIWORD(v98) + v21[1]; /*0x46a4a5*/
              LOWORD(v97) = v98 + *v21; /*0x46a4ad*/
              HIWORD(v97) = v22; /*0x46a4b5*/
              v82 = v97; /*0x46a4c8*/
              v23 = (_BYTE *)*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v82) + 57); /*0x46a4d7*/
              if ( v23 ) /*0x46a4df*/
              {
                v24 = this->fallRate; /*0x46a4e5*/
                if ( v23 != (_BYTE *)v24 && v24 && !Object::IsAlliedWithObjectHouse(*(_DWORD **)(v24 + 540), (int)v23) ) /*0x46a502*/
                {
                  v25 = *(_BYTE *)(v13 + 303); /*0x46a515*/
                  v26 = *(_DWORD *)(v13 + 164); /*0x46a51b*/
                  v27 = *(_DWORD *)(v13 + 168); /*0x46a521*/
                  v102 = *(_DWORD *)(v13 + 172); /*0x46a527*/
                  LOBYTE(v101) = v25; /*0x46a53b*/
                  v28 = this->fallRate; /*0x46a542*/
                  LODWORD(v88) = v26; /*0x46a551*/
                  LODWORD(v77) = v28; /*0x46a555*/
                  ppv = 0; /*0x46a559*/
                  if ( CoCreateInstance(&rclsid, 0, 7u, &IID_IUnknown, &ppv) >= 0 ) /*0x46a56c*/
                  {
                    v82 = ppv; /*0x46a59d*/
                    Particle::Init((int)ppv, v99, (int)v23, SLODWORD(v77), SLODWORD(v88), v102, v27, v101); /*0x46a5a1*/
                    if ( v82 ) /*0x46a5ac*/
                    {
                      v29 = this + 39; /*0x46a5b2*/
                      v73 = 0.0; /*0x46a5b8*/
                      v74 = 0.0; /*0x46a5ca*/
                      v30 = this->q027; /*0x46a5da*/
                      v75 = 0.0; /*0x46a5dc*/
                      v93 = v30; /*0x46a5ec*/
                      v94 = this->owningHouseIndex; /*0x46a5f8*/
                      v31 = *(_DWORD *)v23; /*0x46a5ff*/
                      v95 = this->q029; /*0x46a605*/
                      v32 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(v31 + 72))(v23, v103); /*0x46a614*/
                      LODWORD(v77) = *v32; /*0x46a61c*/
                      v33 = Math::CalcAngle((double)v94 - (double)(int)v32[1], (double)SLODWORD(v77) - (double)v93); /*0x46a63f*/
                      v34 = Math::RoundToInt((v33 - 1.570796326794897) * -10430.06004058427); /*0x46a653*/
                      v35 = v73; /*0x46a658*/
                      LOWORD(v87) = v34; /*0x46a662*/
                      if ( v73 == 0.0 ) /*0x46a66c*/
                      {
                        v35 = v74; /*0x46a66e*/
                        if ( v74 == 0.0 ) /*0x46a67d*/
                          v73 = 100.0; /*0x46a67f*/
                      }
                      Function::Method_41C430(&v73); /*0x46a693*/
                      v88 = v35; /*0x46a69d*/
                      LODWORD(v77) = SLOWORD(v87) - 0x3FFF; /*0x46a6a7*/
                      v77 = (double)SLODWORD(v77) * -0.00009587672516830327; /*0x46a6b5*/
                      v73 = Math::ArcTan2(v77) * v35; /*0x46a6d6*/
                      v36 = -(Math::SinCos(v77) * v88); /*0x46a6ea*/
                      v74 = v36; /*0x46a6ec*/
                      Math::Hypotenuse2D(&v73); /*0x46a6f0*/
                      v37 = Math::CalcAngle(v75, v36); /*0x46a705*/
                      v38 = (double)((__int16)Math::RoundToInt((v37 - 1.570796326794897) * -10430.06004058427) - 0x3FFF) /*0x46a732*/
                          * -0.00009587672516830327;
                      v77 = v38; /*0x46a738*/
                      Vector3::Magnitude(&v73); /*0x46a73c*/
                      v88 = v38; /*0x46a741*/
                      if ( v77 != 0.0 ) /*0x46a754*/
                      {
                        v73 = v73 / Math::ArcTan2(v77); /*0x46a773*/
                        v74 = v74 / Math::ArcTan2(v77); /*0x46a783*/
                      }
                      v73 = Math::ArcTan2(0.7853262558535721) * v73; /*0x46a7a4*/
                      v74 = Math::ArcTan2(0.7853262558535721) * v74; /*0x46a7bb*/
                      v75 = Math::SinCos(0.7853262558535721) * v88; /*0x46a7ce*/
                      v77 = (double)*(int *)(v13 + 168); /*0x46a7d8*/
                      v39 = v73; /*0x46a7dc*/
                      if ( v73 == 0.0 ) /*0x46a7eb*/
                      {
                        v39 = v74; /*0x46a7ed*/
                        if ( v74 == 0.0 ) /*0x46a7fc*/
                        {
                          v39 = v75; /*0x46a7fe*/
                          if ( v75 == 0.0 ) /*0x46a80d*/
                            v73 = 100.0; /*0x46a80f*/
                        }
                      }
                      Vector3::Magnitude(&v73); /*0x46a823*/
                      v40 = v77 / v39; /*0x46a828*/
                      v90 = *v29; /*0x46a830*/
                      v91 = this->owningHouseIndex; /*0x46a837*/
                      v92 = this->q029; /*0x46a842*/
                      v73 = v40 * v73; /*0x46a859*/
                      v74 = v74 * v40; /*0x46a863*/
                      v75 = v75 * v40; /*0x46a86d*/
                      (*(void (__thiscall **)(LPVOID, int *, double *))(*(_DWORD *)v82 + 496))(v82, &v90, &v73); /*0x46a875*/
                      v41 = this->owningHouseIndex; /*0x46a87d*/
                      v42 = this->q029; /*0x46a880*/
                      v84 = *v29; /*0x46a883*/
                      v43 = *(_BYTE *)(v13 + 329); /*0x46a887*/
                      v85 = v41; /*0x46a88d*/
                      v86 = v42; /*0x46a893*/
                      if ( v43 ) /*0x46a897*/
                      {
                        v44 = (_DWORD *)this->fallRate; /*0x46a899*/
                        if ( v44 ) /*0x46a8a1*/
                          TechnoClass::CreateFireEffect(v44, v23, 0, v13, &v84); /*0x46a8ac*/
                      }
                      if ( *(_BYTE *)(v13 + 337) ) /*0x46a8b1*/
                      {
                        v45 = (int *)this->fallRate; /*0x46a8bb*/
                        if ( v45 ) /*0x46a8c3*/
                          TechnoClass::CreateRadarBlip(v45, v23, v13, &v84); /*0x46a8cc*/
                      }
                    }
                  }
                  result = ++v89; /*0x46a8d9*/
                  if ( v89 == v76 ) /*0x46a8e0*/
                    return result; /*0x46a8e0*/
                  v21 = v81; /*0x46a8e6*/
                }
              }
              v21 += 2; /*0x46a8f6*/
              v20 = ++v100 < SLODWORD(v78); /*0x46a8f9*/
              v81 = v21; /*0x46a902*/
            }
            while ( v20 ); /*0x46a906*/
            v17 = v83; /*0x46a90c*/
            v18 = (int *)v79; /*0x46a910*/
          }
          v79 = ++v18; /*0x46a91c*/
          ++v80; /*0x46a922*/
        }
        while ( v80 <= v17 ); /*0x46a926*/
        v16 = v89; /*0x46a92c*/
      }
      result = v76; /*0x46a930*/
      if ( v16 < v76 ) /*0x46a936*/
      {
        v81 = (_WORD *)(v76 - v16); /*0x46a93e*/
        do /*0x46adc7*/
        {
          v76 = *(_DWORD *)(*(int (__thiscall **)(int *, double *))(*this + 440))(this, &v88); /*0x46a962*/
          v46 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, -2, 2); /*0x46a966*/
          LOWORD(v76) = v46 + v76; /*0x46a971*/
          v47 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, -2, 2); /*0x46a980*/
          v48 = *(_BYTE *)(v13 + 303); /*0x46a985*/
          v49 = this->fallRate; /*0x46a98b*/
          HIWORD(v76) += v47; /*0x46a991*/
          v50 = *(_DWORD *)(v13 + 164); /*0x46a996*/
          v51 = *(_DWORD *)(v13 + 168); /*0x46a99c*/
          v52 = *(_DWORD *)(v13 + 172); /*0x46a9a2*/
          LOBYTE(v83) = v48; /*0x46a9a8*/
          LODWORD(v87) = v49; /*0x46a9b0*/
          LODWORD(v78) = v50; /*0x46a9ba*/
          LODWORD(v77) = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v76); /*0x46a9c3*/
          v79 = 0; /*0x46a9da*/
          if ( CoCreateInstance(&rclsid, 0, 7u, &IID_IUnknown, &v79) >= 0 ) /*0x46a9ea*/
          {
            v80 = (int)v79; /*0x46aa12*/
            Particle::Init((int)v79, v99, SLODWORD(v77), SLODWORD(v87), SLODWORD(v78), v52, v51, v83); /*0x46aa16*/
            if ( v80 ) /*0x46aa21*/
            {
              v73 = 0.0; /*0x46aa31*/
              v74 = 0.0; /*0x46aa41*/
              v75 = 0.0; /*0x46aa51*/
              v53 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v76); /*0x46aa61*/
              v54 = this + 39; /*0x46aa66*/
              v84 = this->q027; /*0x46aa70*/
              v85 = this->owningHouseIndex; /*0x46aa77*/
              v55 = *v53; /*0x46aa7b*/
              v86 = this->q029; /*0x46aa80*/
              v56 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(v55 + 72))(v53, v103); /*0x46aa8e*/
              LODWORD(v78) = *v56; /*0x46aa96*/
              v57 = Math::CalcAngle((double)v85 - (double)(int)v56[1], (double)SLODWORD(v78) - (double)v84); /*0x46aab3*/
              v58 = Math::RoundToInt((v57 - 1.570796326794897) * -10430.06004058427); /*0x46aad6*/
              if ( v73 == 0.0 && v74 == 0.0 ) /*0x46aaef*/
                v73 = 100.0; /*0x46aaf1*/
              v87 = Math::Sqrt(v74 * v74 + v73 * v73); /*0x46ab26*/
              LODWORD(v78) = v58 - 0x3FFF; /*0x46ab2a*/
              v78 = (double)SLODWORD(v78) * -0.00009587672516830327; /*0x46ab38*/
              v59 = HIDWORD(v78); /*0x46ab3c*/
              v73 = Math::ArcTan2(v78) * v87; /*0x46ab55*/
              v60 = -(Math::SinCos(COERCE_DOUBLE(__PAIR64__(v59, LODWORD(v78)))) * v87); /*0x46ab65*/
              v74 = v60; /*0x46ab67*/
              v78 = (double)*(int *)(v13 + 168); /*0x46ab71*/
              if ( v73 == 0.0 && v60 == 0.0 && v75 == 0.0 ) /*0x46aba2*/
                v73 = 100.0; /*0x46aba4*/
              v61 = Math::Sqrt(v75 * v75 + v73 * v73 + v60 * v60); /*0x46abd6*/
              v62 = v78 / v61; /*0x46abdb*/
              v73 = v62 * v73; /*0x46abec*/
              v74 = v74 * v62; /*0x46abf6*/
              v75 = v75 * v62; /*0x46ac00*/
              Math::Hypotenuse2D(&v73); /*0x46ac06*/
              v63 = Math::CalcAngle(v75, v62); /*0x46ac1b*/
              LODWORD(v78) = (__int16)Math::RoundToInt((v63 - 1.570796326794897) * -10430.06004058427) - 0x3FFF; /*0x46ac3d*/
              v78 = (double)SLODWORD(v78) * -0.00009587672516830327; /*0x46ac4b*/
              v87 = Math::Sqrt(v74 * v74 + v75 * v75 + v73 * v73); /*0x46ac73*/
              if ( v78 != 0.0 ) /*0x46ac89*/
              {
                v64 = HIDWORD(v78); /*0x46ac8b*/
                v73 = v73 / Math::ArcTan2(v78); /*0x46aca4*/
                v74 = v74 / Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v64, LODWORD(v78)))); /*0x46acb4*/
              }
              v73 = Math::ArcTan2(0.7853262558535721) * v73; /*0x46acd5*/
              v74 = Math::ArcTan2(0.7853262558535721) * v74; /*0x46acec*/
              v65 = Math::SinCos(0.7853262558535721); /*0x46acf0*/
              v90 = *v54; /*0x46ad00*/
              v66 = this->owningHouseIndex; /*0x46ad04*/
              v75 = v65 * v87; /*0x46ad07*/
              v67 = this->q029; /*0x46ad0b*/
              v91 = v66; /*0x46ad0e*/
              v92 = v67; /*0x46ad16*/
              (*(void (__thiscall **)(int, int *, double *))(*(_DWORD *)v80 + 496))(v80, &v90, &v73); /*0x46ad29*/
              v68 = this->owningHouseIndex; /*0x46ad31*/
              v69 = this->q029; /*0x46ad34*/
              v93 = *v54; /*0x46ad37*/
              v70 = *(_BYTE *)(v13 + 329); /*0x46ad3e*/
              v94 = v68; /*0x46ad44*/
              v95 = v69; /*0x46ad4d*/
              if ( v70 && this->fallRate ) /*0x46ad56*/
              {
                v71 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v76); /*0x46ad75*/
                TechnoClass::CreateFireEffect((_DWORD *)this->fallRate, v71, 0, v13, &v93); /*0x46ad81*/
              }
              if ( *(_BYTE *)(v13 + 337) ) /*0x46ad86*/
              {
                if ( this->fallRate ) /*0x46ad90*/
                {
                  v72 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v76); /*0x46adad*/
                  TechnoClass::CreateRadarBlip((int *)this->fallRate, v72, v13, &v93); /*0x46adb9*/
                }
              }
            }
          }
          result = (int)v81 - 1; /*0x46adc2*/
          v81 = (_WORD *)((char *)v81 - 1); /*0x46adc3*/
        }
        while ( v81 ); /*0x46adc7*/
      }
    }
  }
  return result; /*0x46adcd*/
}


// ==== 0x0046AE70  BulletClass::SaveLoad_Prefix  this=BulletClass  sig=csp ====
int __thiscall BulletClass::SaveLoad_Prefix(void *this, int *a1, ObjectClass *aP2)
{
  int result; // eax
  ObjectClass *v4; // ebx
  int v5; // eax

  result = BuildingClass::SaveLoad_Register((#374 *)this); /*0x46ae7c*/
  v4 = (ObjectClass *)result; /*0x46ae81*/
  if ( result >= 0 ) /*0x46ae85*/
  {
    if ( a1 ) /*0x46ae8e*/
    {
      ObjectClass::Init(a1, (AbstractClass *)&aP2); /*0x46ae97*/
      Timer::Start(a1 + 46, 0); /*0x46aea6*/
      Timer::Start(a1 + 49, 0); /*0x46aeb0*/
      *a1 = (int)&BulletClass::`vftable'; /*0x46aeb5*/
      a1[1] = (int)&BulletClass::`vftable'; /*0x46aebb*/
      a1[2] = (int)&BulletClass::`vftable'; /*0x46aec2*/
      a1[3] = (int)&vt_BulletClass; /*0x46aec9*/
    }
    if ( a1[85] /*0x46af17*/
      && (*(int *)&stru_B05488.__pad_579C[18852] < *(int *)&stru_B05488.__pad_579C[18844]
       || (stru_B05488.__pad_579C[18849] || !*(_DWORD *)&stru_B05488.__pad_579C[18844])
       && *(int *)&stru_B05488.__pad_579C[18856] > 0
       && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[18836] + 8))(
            &stru_B05488.__pad_579C[18836],
            *(_DWORD *)&stru_B05488.__pad_579C[18844] + *(_DWORD *)&stru_B05488.__pad_579C[18856],
            0)) )
    {
      v5 = (*(_DWORD *)&stru_B05488.__pad_579C[18852])++; /*0x46af24*/
      *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[18840] + 4 * v5) = a1; /*0x46af33*/
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)(a1 + 43)); /*0x46af42*/
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)(a1 + 44)); /*0x46af53*/
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)(a1 + 74)); /*0x46af64*/
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)(a1 + 67)); /*0x46af75*/
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)(a1 + 76)); /*0x46af86*/
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)(a1 + 85)); /*0x46af91*/
    return (int)v4->__pad_0; /*0x46af97*/
  }
  return result; /*0x46af99*/
}


// ==== 0x0046AFB0  BulletClass::SaveLoad_Prefix_0  this=BulletClass  sig=csp ====
int __stdcall BulletClass::SaveLoad_Prefix_0(TechnoTypeClass *aP0, int *a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x46afc4*/
}


// ==== 0x0046AFD0  BulletClass::CheckTargetValidity  this=BulletClass  sig=csp ====
LONG __stdcall BulletClass::_vt01(int a1)
{
  ++g_BulletClassPool; /*0x46afdf*/
  return InterlockedIncrement((volatile LONG *)(a1 + 28)); /*0x46afeb*/
}


// ==== 0x0046AFF0  BulletClass::ValidateTarget  this=BulletClass  sig=csp ====
LONG __stdcall BulletClass::_vt02(volatile LONG *a1)
{
  LONG v1; // esi

  --g_BulletClassPool; /*0x46b000*/
  v1 = InterlockedDecrement(a1 + 7); /*0x46b00d*/
  if ( !v1 && a1 ) /*0x46b015*/
    (*(void (__thiscall **)(volatile LONG *, int))(*a1 + 32))(a1, 1); /*0x46b01d*/
  return v1; /*0x46b022*/
}


// ==== 0x0046B050  CreateUIObjectCOM  this=AbstractClass  sig=csp ====
LPVOID __fastcall CreateUIObjectCOM(
        IUnknown *aP0,
        AbstractClass *aP1,
        AbstractClass *aP2,
        AbstractClass *aP3,
        AbstractClass *aP4,
        int a6,
        AbstractClass *aP7)
{
  void *v10; // esi
  LPVOID ppv; // [esp+8h] [ebp-4h] BYREF

  ppv = 0; /*0x46b06a*/
  if ( CoCreateInstance(&rclsid, 0, 7u, &IID_IUnknown, &ppv) < 0 ) /*0x46b07a*/
    return 0; /*0x46b07d*/
  v10 = ppv; /*0x46b0a4*/
  Particle::Init( /*0x46b0a6*/
    (int)ppv,
    (AbstractClass *)aP0,
    (TechnoClass *)aP1,
    (IUnknown *)aP2,
    (TechnoClass *)aP3,
    (InfantryClass *)aP4,
    a6,
    aP7);
  return v10; /*0x46b07c*/
}


// ==== 0x0046B0C0  BulletClass::RenderVoxelBullet  this=BulletClass  sig=csp ====
char __thiscall sub_46B0C0(void *this, int a2, float *a3, _DWORD *a4, _DWORD *a5, unsigned int a6, int a7, int a8)
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
  char *v17; // esi
  int *v18; // eax
  int *SHPFrame; // [esp-18h] [ebp-10Ch]
  int v21; // [esp-10h] [ebp-104h]
  int v22[2]; // [esp+10h] [ebp-E4h] BYREF
  _DWORD *v23; // [esp+18h] [ebp-DCh]
  _DWORD v24[6]; // [esp+1Ch] [ebp-D8h] BYREF
  float v25[12]; // [esp+34h] [ebp-C0h] BYREF
  float v26[12]; // [esp+64h] [ebp-90h] BYREF
  float v27[12]; // [esp+94h] [ebp-60h] BYREF
  float v28[12]; // [esp+C4h] [ebp-30h] BYREF

  v8 = *(_DWORD **)a2; /*0x46b0d0*/
  v9 = *(_DWORD **)(a2 + 4); /*0x46b0d2*/
  v22[0] = (int)this; /*0x46b0dd*/
  v23 = v8; /*0x46b0ed*/
  globalHelper_053C80(v8, 0, 0, a3, (float *)&MEMORY[0x887470]); /*0x46b0f1*/
  Viewport::Clear(); /*0x46b0f6*/
  for ( i = 0; i < v8[1]; ++i ) /*0x46b0fb*/
  {
    if ( v9 ) /*0x46b106*/
    {
      qmemcpy(v25, (const void *)(v9[3] + 48 * (i + v9[1] * (a6 % v9[2]))), sizeof(v25)); /*0x46b135*/
      qmemcpy(v26, MultiplyMatrix3x4(v27, a3, v25), sizeof(v26)); /*0x46b153*/
      v8 = v23; /*0x46b155*/
    }
    v11 = MultiplyMatrix3x4(v28, MEMORY[0x887430], v26); /*0x46b16a*/
    TransformVoxelVertex(v8, i, 0, v11); /*0x46b176*/
  }
  v12 = Voxel::RenderFrame(v25); /*0x46b18c*/
  v13 = *(_DWORD *)(v22[0] + 172); /*0x46b19b*/
  v14 = 0; /*0x46b1a1*/
  qmemcpy(v24, v12, sizeof(v24)); /*0x46b1a3*/
  v15 = a7 & 0xFFFFFFEF; /*0x46b1b2*/
  if ( *(_BYTE *)(v13 + 759) ) /*0x46b1ac*/
  {
    v14 = dword_81AF00; /*0x46b1b9*/
    v15 = a7 & 0xFFFFDFEF | 0x2000; /*0x46b1bf*/
  }
  v16 = v24[1] + a4[1]; /*0x46b1dd*/
  v22[0] = v24[0] + *a4; /*0x46b1df*/
  v22[1] = v16; /*0x46b1e8*/
  v17 = (char *)MEMORY[0xB054D4] + 4 * *(_DWORD *)(v13 + 724); /*0x46b1fe*/
  v21 = *(_BYTE *)(v13 + 759) != 0 ? 0 : 2;
  SHPFrame = (int *)BuildingClass::GetSHPFrame(*(_DWORD **)(*(_DWORD *)v17 + 780), v15); /*0x46b226*/
  v18 = Miles::DriverGet(); /*0x46b234*/
  return BlitterDrawSHP( /*0x46b24d*/
           (int *)MEMORY[0x887314],
           *(_DWORD *)(*(_DWORD *)v17 + 780),
           v18,
           &v24[2],
           v22,
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
int __thiscall MiniStub_46b260(_DWORD *this, int a2)
{
  this->q130 = a2; /*0x46b264*/
  return a2; /*0x46b26a*/
}


// ==== 0x0046B270  TechnoClass::updateHealthBar  this=AbstractClass  sig=csp ====
int __thiscall sub_46B270(_DWORD *this)
{
  return this->q130; /*0x46b276*/
}


// ==== 0x0046B280  BulletClass::InitScalable  this=BulletClass  sig=csp ====
int __thiscall BulletClass::InitScalable(_DWORD **this)
{
  int v2; // eax
  int v3; // edx

  if ( unk_89DE28 < unk_89DE20 /*0x46b2b7*/
    || (unk_89DE25 || !unk_89DE20)
    && unk_89DE2C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(unk_89DE18 + 8))(&unk_89DE18, unk_89DE20 + unk_89DE2C, 0) )
  {
    v2 = unk_89DE28++; /*0x46b2c4*/
    *((_DWORD *)unk_89DE1C + v2) = this; /*0x46b2d3*/
  }
  v3 = unk_89DE28 - 5; /*0x46b2dc*/
  if ( unk_89DE28 - 5 < 0 ) /*0x46b2e1*/
    v3 = 0; /*0x46b2e3*/
  return BulletTypeClass::SetScaledSpawnDelay(this->q0AC, v3 / 3 + (this->q0AC)[185]); /*0x46b307*/
}


// ==== 0x0046B310  SuperWeapon::CreateNukePayload  this=ObjectClass  sig=csp ====
HRESULT __thiscall SuperWeapon_CreateNukePayload(int *this)
{
  int v2; // ebx
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  int v5; // edx
  int v6; // eax
  int v7; // edx
  int v8; // eax
  HRESULT result; // eax
  _DWORD *v10; // edi
  int v11; // ecx
  _DWORD *v12; // eax
  int v13; // esi
  double v14; // st7
  double v15; // st7
  int v16; // eax
  LPVOID ppv; // [esp+10h] [ebp-60h] BYREF
  LPVOID v18; // [esp+14h] [ebp-5Ch] BYREF
  int v19; // [esp+18h] [ebp-58h]
  int v20; // [esp+1Ch] [ebp-54h]
  int v21; // [esp+20h] [ebp-50h]
  int v22; // [esp+24h] [ebp-4Ch]
  double v23; // [esp+28h] [ebp-48h]
  double v24; // [esp+30h] [ebp-40h]
  _DWORD v25[2]; // [esp+3Ch] [ebp-34h] BYREF
  int v26; // [esp+44h] [ebp-2Ch]
  double v27[2]; // [esp+48h] [ebp-28h] BYREF
  _QWORD v28[3]; // [esp+58h] [ebp-18h] BYREF

  v2 = this->q043; /*0x46b323*/
  v3 = (_DWORD *)(*(int (__thiscall **)(int, double *))(*(_DWORD *)v2 + 72))(v2, v27); /*0x46b32e*/
  LOWORD(ppv) = *v3 / 256; /*0x46b341*/
  HIWORD(ppv) = v3[1] / 256; /*0x46b35a*/
  v18 = ppv; /*0x46b367*/
  LODWORD(v24) = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v18); /*0x46b376*/
  ppv = 0; /*0x46b385*/
  v4 = (_DWORD *)*((_DWORD *)MEMORY[0x88756C] + SuperWeaponClass::FindByName(g_INI_Key_NukePayload)); /*0x46b38d*/
  v5 = v4[40]; /*0x46b399*/
  v6 = v4[43]; /*0x46b39f*/
  v19 = v4[42]; /*0x46b3a5*/
  LODWORD(v23) = v5; /*0x46b3ad*/
  v7 = v4[41]; /*0x46b3b1*/
  v20 = v6; /*0x46b3bd*/
  v8 = this->fallRate; /*0x46b3c1*/
  v21 = v7; /*0x46b3d0*/
  v22 = v8; /*0x46b3d4*/
  result = CoCreateInstance(&rclsid, 0, 7u, &IID_IUnknown, &ppv); /*0x46b3d8*/
  if ( result >= 0 ) /*0x46b3e0*/
  {
    v10 = ppv; /*0x46b406*/
    result = Particle::Init((int)ppv, SLODWORD(v23), v2, v22, v21, v20, v19, 1); /*0x46b408*/
    if ( v10 ) /*0x46b40f*/
    {
      (*(void (__thiscall **)(_DWORD *))(*v10 + 212))(v10); /*0x46b419*/
      v11 = LODWORD(v24); /*0x46b41f*/
      v10[76] = v4; /*0x46b423*/
      v12 = (_DWORD *)(*(int (__thiscall **)(int, double *))(*(_DWORD *)v11 + 72))(v11, v27); /*0x46b430*/
      v13 = this->q04C; /*0x46b435*/
      v25[0] = *v12; /*0x46b447*/
      v25[1] = v12[1]; /*0x46b44e*/
      v26 = v12[2]; /*0x46b455*/
      v26 += *(_DWORD *)(*(_DWORD *)(v13 + 160) + 700); /*0x46b46f*/
      v24 = Math::SinCos(1.570748388432313); /*0x46b478*/
      v24 = Math::ArcTan2(1.570748388432313) * v24 * -1.0; /*0x46b49f*/
      v23 = Math::ArcTan2(1.570748388432313); /*0x46b4a8*/
      v14 = Math::ArcTan2(1.570748388432313); /*0x46b4b6*/
      v27[1] = v24; /*0x46b4c7*/
      *(double *)&v28[1] = v24; /*0x46b4e3*/
      v27[0] = v14 * v23 * -1.0; /*0x46b4ea*/
      *(double *)v28 = v27[0]; /*0x46b4f6*/
      v15 = Math::SinCos(1.570748388432313); /*0x46b50f*/
      v16 = *v10; /*0x46b51a*/
      *(double *)&v28[2] = v15 * -1.0; /*0x46b529*/
      return (*(int (__thiscall **)(_DWORD *, _DWORD *, _QWORD *))(v16 + 496))(v10, v25, v28); /*0x46b52f*/
    }
  }
  return result; /*0x46b535*/
}


// ==== 0x0046B540  BulletClass::MissionStubReturnZero  this=BulletClass  sig=csp ====
int BulletClass::_vt12()
{
  return 352; /*0x46b545*/
}


// ==== 0x0046B550  BulletClass::MissionStubReturnZero2  this=BulletClass  sig=csp ====
int BulletClass::_vt11()
{
  return 8; /*0x46b555*/
}


// ==== 0x0046B560  BulletClass::PowerDrainProcess  this=BulletClass  sig=csp ====
int __stdcall BulletClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x46b566*/
    return -2147467261; /*0x46b568*/
  *a2 = 237448649; /*0x46b576*/
  a2[1] = 298949647; /*0x46b57e*/
  a2[2] = -1610610249; /*0x46b587*/
  a2[3] = -777003740; /*0x46b590*/
  return 0; /*0x46b56d*/
}


// ==== 0x0046B5A0  BulletClass::CheckEndOfSequence  this=BulletClass  sig=csp ====
int __thiscall BulletClass::_vt123(_DWORD *this, int a2)
{
  this->q10C = a2; /*0x46b5a4*/
  return a2; /*0x46b5aa*/
}


// ==== 0x0046B5B0  BulletClass::CheckMissionAbort  this=BulletClass  sig=csp ====
int __thiscall BulletClass::_vt34(_DWORD *this)
{
  return this->q0AC; /*0x46b5b6*/
}


// ==== 0x0046B5C0  BulletClass::CheckActionStatus  this=BulletClass  sig=csp ====
BulletClass *__thiscall BulletClass::CheckActionStatus(#374 *Block, char a2)
{
  BulletClass::Dtor(Block); /*0x46b5c3*/
  if ( (a2 & 1) != 0 ) /*0x46b5cd*/
    __3_YAXPAX_Z(Block); /*0x46b5d0*/
  return (BulletClass *)Block; /*0x46b5da*/
}


// ==== 0x0046B5E0  VectorClass_ptr_BulletClass::Destroy  this=VectorClass_ptr_BulletClass  sig=csp ====
void __thiscall VectorClass_ptr_BulletClass::sub_46B5E0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x46b5e6*/
  *(_DWORD *)(this + 16) = 0; /*0x46b5e9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x46b5f0*/
  {
    __3_YAXPAX_Z(v2); /*0x46b5f6*/
    *(_DWORD *)(this + 4) = 0; /*0x46b5fe*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x46b601*/
  *(_DWORD *)(this + 8) = 0; /*0x46b604*/
}


// ==== 0x0046B610  VectorClass_ptr_BulletClass::GetItemIndex  this=VectorClass_ptr_BulletClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_BulletClass::sub_46B610(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x46b610*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x46b625*/
  else
    return 0; /*0x46b617*/
}


// ==== 0x0046B630  _VectorClass_PAVBulletClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_BulletClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x46b63a*/
}


// ==== 0x0046B640  Timer::Start  this=Timer  sig=csp ====
DynamicVector *__thiscall Timer::Start(_DWORD *this, DynamicVector *aP1)
{
  *this = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x46b64c*/
  this->ptr_8 = aP1; /*0x46b64e*/
  return (DynamicVector *)this; /*0x46b651*/
}


// ==== 0x0046B660  _VectorClass_PAVBulletClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_BulletClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x46b662*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x46b66d*/
  {
    v3 = 0; /*0x46b66f*/
    if ( v2 <= 0 ) /*0x46b673*/
      return 1; /*0x46b693*/
    v4 = (_DWORD *)this->Items; /*0x46b675*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x46b67b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x46b684*/
    {
      ++v3; /*0x46b686*/
      ++v4; /*0x46b687*/
      if ( v3 >= v2 ) /*0x46b68c*/
        return 1; /*0x46b68c*/
    }
  }
  return 0; /*0x46b68e*/
}


// ==== 0x0046B6A0  _VectorClass_PAVBulletClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_BulletClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x46b6ac*/
  {
    this->IsInitialized = 0; /*0x46b6b6*/
    if ( a3 ) /*0x46b6bc*/
      v4 = a3; /*0x46b6d2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x46b6ce*/
    this->IsInitialized = 1; /*0x46b6d6*/
    if ( v4 ) /*0x46b6da*/
    {
      if ( this->Items ) /*0x46b6e5*/
      {
        v6 = this->Capacity; /*0x46b6ec*/
        if ( a2 < v6 ) /*0x46b6f1*/
          v6 = a2; /*0x46b6f3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x46b6f9*/
          ++i; /*0x46b6fe*/
        if ( this->IsAllocated ) /*0x46b70b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x46b716*/
          this->Items = 0; /*0x46b71e*/
        }
      }
      this->Items = v4; /*0x46b727*/
      this->Capacity = a2; /*0x46b72f*/
      this->IsAllocated = a3 == 0; /*0x46b732*/
      return 1; /*0x46b738*/
    }
    else
    {
      return 0; /*0x46b6df*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x46b742*/
    return 1; /*0x46b748*/
  }
}


// ==== 0x0046B750  _VectorClass_PAVBulletClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_BulletClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x46b75d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x46b763*/
    *(_DWORD *)(this + 4) = 0; /*0x46b76b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x46b76e*/
  *(_DWORD *)(this + 8) = 0; /*0x46b771*/
}


// ==== 0x0046B780  _VectorClass_PAVBulletClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_BulletClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x46b780*/
    return 0; /*0x46b788*/
  v3 = *(_DWORD *)(this + 8); /*0x46b78e*/
  result = 0; /*0x46b791*/
  if ( v3 <= 0 ) /*0x46b795*/
    return -1; /*0x46b7ac*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x46b79b*/
  {
    if ( ++result >= v3 ) /*0x46b7aa*/
      return -1; /*0x46b7aa*/
  }
  return result; /*0x46b78a*/
}


// ==== 0x0046B7C0  _VectorClass_PAVBulletClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_BulletClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x46b7c0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x46b7d5*/
  else
    return 0; /*0x46b7c7*/
}


// ==== 0x0046B7E0  VectorClass_ptr_BulletClass::SetCapacity  this=VectorClass_ptr_BulletClass  sig=csp ====
char __thiscall VectorClass_ptr_BulletClass::sub_46B7E0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x46b7ec*/
  {
    this->IsInitialized = 0; /*0x46b7f2*/
    if ( a3 ) /*0x46b7f8*/
      v4 = a3; /*0x46b80e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x46b80a*/
    this->IsInitialized = 1; /*0x46b812*/
    if ( !v4 ) /*0x46b816*/
      return 0; /*0x46b88a*/
    if ( this->Items ) /*0x46b818*/
    {
      v5 = this->Capacity; /*0x46b81f*/
      if ( a2 < v5 ) /*0x46b824*/
        v5 = a2; /*0x46b826*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x46b82c*/
        ++i; /*0x46b831*/
      if ( this->IsAllocated ) /*0x46b83e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x46b849*/
        this->Items = 0; /*0x46b851*/
      }
    }
    this->Items = v4; /*0x46b85a*/
    this->Capacity = a2; /*0x46b862*/
    this->IsAllocated = a3 == 0; /*0x46b865*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x46b86e*/
  }
  v7 = this->Capacity; /*0x46b871*/
  if ( v7 < this->Items ) /*0x46b879*/
    this->Items = v7; /*0x46b87b*/
  return 1; /*0x46b87e*/
}


// ==== 0x0046B890  VectorClass_ptr_BulletClass::FindItemIndex  this=VectorClass_ptr_BulletClass  sig=csp ====
int __thiscall VectorClass_ptr_BulletClass::sub_46B890(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x46b890*/
  result = 0; /*0x46b893*/
  if ( v2 <= 0 ) /*0x46b898*/
    return -1; /*0x46b8af*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x46b89e*/
  {
    if ( ++result >= v2 ) /*0x46b8ad*/
      return -1; /*0x46b8ad*/
  }
  return result; /*0x46b8b2*/
}


// ==== 0x0046B8C0  _VectorClass_PAVBulletClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_BulletClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x46b8c3*/
  *Block = &vt_VectorClass_BulletClass; /*0x46b8c6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x46b8d0*/
  {
    __3_YAXPAX_Z(v3); /*0x46b8d8*/
    *(Block + 1) = 0; /*0x46b8e0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x46b8eb*/
  *(Block + 2) = 0; /*0x46b8f1*/
  if ( (a2 & 1) != 0 ) /*0x46b8f8*/
    __3_YAXPAX_Z(Block); /*0x46b8fb*/
  return (VectorClass *)Block; /*0x46b905*/
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
  unk_89DE80 = 0; /*0x46b9b2*/
  unk_89DE84 = 0; /*0x46b9b7*/
  unk_89DE88 = 0; /*0x46b9bc*/
  unk_89DE8C = 0; /*0x46b9c1*/
  return 0; /*0x46b9c6*/
}


// ==== 0x0046B9D0  sub_46B9D0  this=-  sig=ida-proto ====
void sub_46B9D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x46b9dc*/
  unk_89DE98 = Math::Sqrt(v0 + v0); /*0x46b9ee*/
}


// ==== 0x0046BA00  sub_46BA00  this=-  sig=ida-proto ====
void sub_46BA00()
{
  unk_89DEE8 = unk_89DE98 / 60.0; /*0x46ba0c*/
}


// ==== 0x0046BA20  sub_46BA20  this=-  sig=ida-proto ====
void sub_46BA20()
{
  unk_89DED0 = 1.0 / unk_89DEE8; /*0x46ba2c*/
}


// ==== 0x0046BA40  sub_46BA40  this=-  sig=ida-proto ====
void sub_46BA40()
{
  unk_89DEC8 = 0.0174532925199433 * 45.0; /*0x46ba4c*/
}


// ==== 0x0046BA60  sub_46BA60  this=-  sig=ida-proto ====
void sub_46BA60()
{
  unk_89DEA0 = 0.0174532925199433 * 60.0; /*0x46ba6c*/
}


// ==== 0x0046BA80  sub_46BA80  this=-  sig=ida-proto ====
void sub_46BA80()
{
  unk_89DE78 = 0.0174532925199433 * 90.0; /*0x46ba8c*/
}


// ==== 0x0046BAA0  sub_46BAA0  this=-  sig=ida-proto ====
__int64 sub_46BAA0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_89DE78 - unk_89DEA0); /*0x46bab2*/
  result = Math::RoundToInt(v0 * unk_89DE98 * 0.5); /*0x46bac6*/
  unk_89DEF0 = result; /*0x46bacb*/
  return result; /*0x46bad0*/
}


// ==== 0x0046BAE0  sub_46BAE0  this=-  sig=ida-proto ====
void sub_46BAE0()
{
  unk_89DEA8 = Math::ArcTan((double)unk_89DEF0 * 0.00390625); /*0x46baf7*/
}


// ==== 0x0046BB10  sub_46BB10  this=-  sig=ida-proto ====
void sub_46BB10()
{
  unk_89DEC0 = Math::ArcTan((double)(2 * unk_89DEF0) / unk_89DE98); /*0x46bb32*/
}


// ==== 0x0046BB40  sub_46BB40  this=-  sig=ida-proto ====
__int64 sub_46BB40()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_89DEF0) + 0.5); /*0x46bb5b*/
  unk_89DEE4 = result; /*0x46bb60*/
  return result; /*0x46bb66*/
}


// ==== 0x0046BB70  sub_46BB70  this=-  sig=ida-proto ====
int sub_46BB70()
{
  unk_89DE90 = 0; /*0x46bb72*/
  unk_89DE92 = 0; /*0x46bb78*/
  return 0; /*0x46bb7e*/
}


// ==== 0x0046BB80  sub_46BB80  this=-  sig=ida-proto ====
int sub_46BB80()
{
  unk_89DEB0 = 0; /*0x46bb82*/
  unk_89DEB4 = 0; /*0x46bb87*/
  unk_89DEB8 = 0; /*0x46bb8c*/
  return 0; /*0x46bb91*/
}


// ==== 0x0046BBA0  sub_46BBA0  this=-  sig=ida-proto ====
int sub_46BBA0()
{
  unk_89DEE0 = 0; /*0x46bba5*/
  unk_89DED8 = 128; /*0x46bbaf*/
  unk_89DEDC = 128; /*0x46bbb4*/
  return 128; /*0x46bbb9*/
}


// ==== 0x0046BBC0  BulletTypeClass::Construct  this=BulletTypeClass  sig=csp ====
_BYTE *__thiscall BulletTypeClass::Construct(_BYTE *this, ObjectClass *aP1)
{
  BulletTypeClass *v3; // eax
  int v4; // eax

  ObjectTypeClass::ConstructFull((int)this, (AbstractClass *)aP1); /*0x46bbc9*/
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
  *(_DWORD *)this = &BulletTypeClass::`vftable'; /*0x46bce6*/
  this->vtable2 = &BulletTypeClass::`vftable'; /*0x46bcec*/
  this->vtable3 = &BulletTypeClass::`vftable'; /*0x46bcf2*/
  this->vtable4 = &vt_BulletTypeClass; /*0x46bcf9*/
  AbstractClass::GenerateUniqueID((int)(this + 4)); /*0x46bd00*/
  this->q234 = 1; /*0x46bd05*/
  this->q22F = 1; /*0x46bd0c*/
  this->q230 = 0; /*0x46bd13*/
  this->q231 = 0; /*0x46bd19*/
  this->q232 = 1; /*0x46bd1f*/
  this->q233 = 1; /*0x46bd26*/
  this->q235 = 0; /*0x46bd2d*/
  if ( (int)g_BulletTypeInitState < dword_A83C88 /*0x46bd65*/
    || (byte_A83C8D || !dword_A83C88)
    && dword_A83C94 > 0
    && ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))BulletTypeClass_Array->field_8)(
         &BulletTypeClass_Array,
         dword_A83C88 + dword_A83C94,
         0) )
  {
    v3 = g_BulletTypeInitState; /*0x46bd72*/
    g_BulletTypeInitState = (BulletTypeClass *)((char *)g_BulletTypeInitState + 1); /*0x46bd75*/
    *(_DWORD *)&dword_A83C84->__pad_0[4 * (_DWORD)v3] = this; /*0x46bd81*/
  }
  if ( *(int *)&MEMORY[0xB077F8].__pad_579C[9964] < *(int *)&MEMORY[0xB077F8].__pad_579C[9956] /*0x46bdb8*/
    || (MEMORY[0xB077F8].__pad_579C[9961] || !*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9956])
    && *(int *)&MEMORY[0xB077F8].__pad_579C[9968] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9948] + 8))(
         &MEMORY[0xB077F8].__pad_579C[9948],
         *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9956] + *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9968],
         0) )
  {
    v4 = (*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9964])++; /*0x46bdc5*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9952] + 4 * v4) = this; /*0x46bdd4*/
  }
  return this; /*0x46bdd9*/
}


// ==== 0x0046BEE0  BulletTypeClass::LoadFromINI  this=BulletTypeClass  sig=csp ====
char __thiscall BulletTypeClass::LoadFromINI(int this, unsigned __int8 ***a2)
{
  char Bool_Overwrite; // al
  char v5; // cl
  char v6; // al
  char v7; // al
  char v8; // cl
  char v9; // al
  char v10; // al
  char v11; // cl
  char v12; // al
  char v13; // al
  char v14; // cl
  char v15; // al
  char v16; // dl
  char v17; // al
  char v18; // cl
  char v19; // al
  void *v20; // eax
  char v21; // al
  WeaponTypeClass *v22; // eax
  WeaponTypeClass *v23; // eax
  int Int_Overwrite; // eax
  char v25; // cl
  char v26; // al
  char v27; // al
  INIClass *v28; // edx
  char v30; // [esp-Ch] [ebp-98h]
  char v31; // [esp-Ch] [ebp-98h]
  char v32; // [esp-Ch] [ebp-98h]
  WeaponTypeClass *v33; // [esp-Ch] [ebp-98h]
  char v34; // [esp-Ch] [ebp-98h]
  WeaponTypeClass *v35; // [esp-Ch] [ebp-98h]
  char v36; // [esp-Ch] [ebp-98h]
  WeaponTypeClass *v37; // [esp+8h] [ebp-84h]
  WeaponTypeClass *v38; // [esp+8h] [ebp-84h]
  WeaponTypeClass *v39; // [esp+8h] [ebp-84h]
  INIClass Destination[2]; // [esp+Ch] [ebp-80h] BYREF

  INIClass::ResetSection(a2); /*0x46bef3*/
  if ( !ObjectTypeClass::LoadFromINI((char *)this, (CCINIClass *)a2) ) /*0x46befb*/
    return 0; /*0x46c42a*/
  *(_DWORD *)(this + 752) = INIClass::ReadInt_Overwrite( /*0x46bf21*/
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)&stru_81B138.unknown30,
                              *(INIClass **)(this + 752));
  *(_DWORD *)(this + 732) = INIClass::ReadInt_Overwrite( /*0x46bf3b*/
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)&stru_81B138.INIClass_field_2C,
                              *(INIClass **)(this + 732));
  *(_DWORD *)(this + 736) = INIClass::ReadInt_Overwrite( /*0x46bf55*/
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)&stru_81B138.sectionHead[2],
                              *(INIClass **)(this + 736));
  *(double *)(this + 712) = INIClass::ReadDouble_Overwrite( /*0x46bf76*/
                              (int)a2,
                              (INIClass *)(this + 36),
                              (unsigned __int8 *)&stru_8184C8.INIClass_field_2C,
                              (INIClass *)*(_DWORD *)(this + 712));
  *(_DWORD *)(this + 720) = INIClass::ReadInt_Overwrite( /*0x46bf90*/
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)&stru_81B138.headNode[1],
                              *(INIClass **)(this + 720));
  *(_DWORD *)(this + 724) = BuildingTypeClass::FindAnimByName( /*0x46bfaa*/
                              a2,
                              (unsigned __int8 *)(this + 36),
                              (unsigned __int8 *)&stru_81B138,
                              *(_DWORD *)(this + 724));
  *(_BYTE *)(this + 667) = INIClass::ReadBool_Overwrite( /*0x46bfc4*/
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             &unk_81B130,
                             *(_BYTE *)(this + 667));
  *(_BYTE *)(this + 661) = INIClass::ReadBool_Overwrite( /*0x46bfde*/
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             &unk_81B128,
                             *(_BYTE *)(this + 661));
  *(_BYTE *)(this + 662) = INIClass::ReadBool_Overwrite( /*0x46bff8*/
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             &unk_81B118,
                             *(_BYTE *)(this + 662));
  *(_BYTE *)(this + 663) = INIClass::ReadBool_Overwrite( /*0x46c012*/
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             &unk_81B104,
                             *(_BYTE *)(this + 663));
  *(_BYTE *)(this + 664) = INIClass::ReadBool_Overwrite( /*0x46c02c*/
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             &unk_81B0F4,
                             *(_BYTE *)(this + 664));
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x46c041*/
                     (int)a2,
                     (unsigned __int8 *)(this + 36),
                     &unk_81B0E8,
                     *(_BYTE *)(this + 665));
  v5 = *(_BYTE *)(this + 666); /*0x46c046*/
  *(_BYTE *)(this + 665) = Bool_Overwrite; /*0x46c04c*/
  v6 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_818660, v5); /*0x46c05b*/
  v30 = *(_BYTE *)(this + 668); /*0x46c068*/
  *(_BYTE *)(this + 666) = v6; /*0x46c06f*/
  *(_BYTE *)(this + 668) = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_81B0DC, v30); /*0x46c07a*/
  v7 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &aLevel, *(_BYTE *)(this + 669)); /*0x46c08f*/
  v8 = *(_BYTE *)(this + 670); /*0x46c094*/
  *(_BYTE *)(this + 669) = v7; /*0x46c09a*/
  v9 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_81B0CC, v8); /*0x46c0a9*/
  v31 = *(_BYTE *)(this + 671); /*0x46c0b6*/
  *(_BYTE *)(this + 670) = v9; /*0x46c0bd*/
  *(_BYTE *)(this + 671) = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_81B0C0, v31); /*0x46c0c8*/
  v10 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_81B0B8, *(_BYTE *)(this + 672)); /*0x46c0dd*/
  v11 = *(_BYTE *)(this + 674); /*0x46c0e2*/
  *(_BYTE *)(this + 672) = v10; /*0x46c0e8*/
  v12 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_81B0AC, v11); /*0x46c0f7*/
  v32 = *(_BYTE *)(this + 675); /*0x46c104*/
  *(_BYTE *)(this + 674) = v12; /*0x46c10b*/
  *(_BYTE *)(this + 675) = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_81B0A0, v32); /*0x46c116*/
  v13 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_81B09C, *(_BYTE *)(this + 676)); /*0x46c12b*/
  v14 = *(_BYTE *)(this + 677); /*0x46c130*/
  *(_BYTE *)(this + 676) = v13; /*0x46c136*/
  v15 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_81B098, v14); /*0x46c145*/
  v16 = *(_BYTE *)(this + 678); /*0x46c14a*/
  *(_BYTE *)(this + 677) = v15; /*0x46c150*/
  *(_BYTE *)(this + 678) = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_81B08C, v16); /*0x46c164*/
  v17 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_81B084, *(_BYTE *)(this + 679)); /*0x46c179*/
  v18 = *(_BYTE *)(this + 660); /*0x46c17e*/
  *(_BYTE *)(this + 679) = v17; /*0x46c184*/
  v19 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_81B078, v18); /*0x46c193*/
  v33 = *(WeaponTypeClass **)(this + 684); /*0x46c1a0*/
  *(_BYTE *)(this + 660) = v19; /*0x46c1a7*/
  *(_DWORD *)(this + 684) = INIClass::ReadInt_Overwrite( /*0x46c1b2*/
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              &unk_81B070,
                              (INIClass *)v33);
  *(_BYTE *)(this + 748) = INIClass::ReadBool_Overwrite( /*0x46c1e2*/
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             &unk_81B064,
                             *(_BYTE *)(this + 748));
  if ( (int)INIClass::GetString( /*0x46c1ef*/
              a2,
              (INIClass *)(this + 36),
              (unsigned __int8 *)&g_INI_Key_Image,
              (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
              (INIClass *)(this + 504),
              25) > 0 )
  {
    v37 = *(WeaponTypeClass **)(this + 728); /*0x46c20a*/
    if ( INIClass::GetString( /*0x46c219*/
           (unsigned __int8 ***)&MEMORY[0x87F8E4].__pad_5568[9012],
           (INIClass *)(this + 504),
           (unsigned __int8 *)MEMORY[0x817F70].location,
           (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
           Destination,
           128) )
    {
      v20 = AnimTypeClass::FindOrCreate((AbstractClass *)Destination); /*0x46c226*/
    }
    else
    {
      v20 = v37; /*0x46c22d*/
    }
    *(_DWORD *)(this + 728) = v20; /*0x46c231*/
    *(_DWORD *)(this + 740) = INIClass::ReadInt_Overwrite( /*0x46c24e*/
                                (int)&MEMORY[0x87F8E4].__pad_5568[9012],
                                (unsigned __int8 *)(this + 504),
                                (CCINIClass *)&MEMORY[0x817F70].isAliveFlag,
                                *(INIClass **)(this + 740));
    v21 = INIClass::ReadBool_Overwrite( /*0x46c26b*/
            (int)&MEMORY[0x87F8E4].__pad_5568[9012],
            (unsigned __int8 *)(this + 504),
            &unk_81B05C,
            *(_BYTE *)(this + 673) == 0);
    v34 = *(_BYTE *)(this + 759); /*0x46c27d*/
    *(_BYTE *)(this + 673) = v21 == 0; /*0x46c287*/
    *(_BYTE *)(this + 759) = INIClass::ReadBool_Overwrite( /*0x46c292*/
                               (int)&MEMORY[0x87F8E4].__pad_5568[9012],
                               (unsigned __int8 *)(this + 504),
                               &unk_818624,
                               v34);
  }
  v38 = *(WeaponTypeClass **)(this + 688); /*0x46c2ad*/
  if ( INIClass::GetString( /*0x46c2b9*/
         a2,
         (INIClass *)(this + 36),
         &unk_81B04C,
         (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
         Destination,
         128) )
  {
    v22 = InfantryTypeClass::Find(Destination[0].__pad_0); /*0x46c2c6*/
  }
  else
  {
    v22 = v38; /*0x46c2cd*/
  }
  *(_DWORD *)(this + 688) = v22; /*0x46c2db*/
  v39 = *(WeaponTypeClass **)(this + 692); /*0x46c2f4*/
  if ( INIClass::GetString( /*0x46c2f8*/
         a2,
         (INIClass *)(this + 36),
         &unk_81B03C,
         (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
         Destination,
         128) )
  {
    v23 = InfantryTypeClass::Find(Destination[0].__pad_0); /*0x46c305*/
  }
  else
  {
    v23 = v39; /*0x46c30c*/
  }
  v35 = *(WeaponTypeClass **)(this + 696); /*0x46c318*/
  *(_DWORD *)(this + 692) = v23; /*0x46c31f*/
  *(_DWORD *)(this + 696) = INIClass::ReadInt_Overwrite( /*0x46c32a*/
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              &unk_81B02C,
                              (INIClass *)v35);
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x46c33f*/
                    (int)a2,
                    (unsigned __int8 *)(this + 36),
                    (CCINIClass *)stru_81AFD0.__pad_48,
                    *(INIClass **)(this + 700));
  v25 = *(_BYTE *)(this + 704); /*0x46c344*/
  *(_DWORD *)(this + 700) = Int_Overwrite; /*0x46c34a*/
  v26 = INIClass::ReadBool_Overwrite( /*0x46c359*/
          (int)a2,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_81AFD0.INIClass_field_3C,
          v25);
  v36 = *(_BYTE *)(this + 681); /*0x46c366*/
  *(_BYTE *)(this + 704) = v26; /*0x46c36d*/
  *(_BYTE *)(this + 681) = INIClass::ReadBool_Overwrite( /*0x46c378*/
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_81AFD0.INIClass_field_2C,
                             v36);
  *(_BYTE *)(this + 756) = INIClass::ReadInt_Overwrite( /*0x46c399*/
                             (int)&MEMORY[0x87F8E4].__pad_5568[9012],
                             (unsigned __int8 *)(this + 504),
                             (CCINIClass *)&stru_81AFD0.__pad_20[4],
                             (INIClass *)*(unsigned __int8 *)(this + 756));
  v27 = INIClass::ReadInt_Overwrite( /*0x46c3b1*/
          (int)&MEMORY[0x87F8E4].__pad_5568[9012],
          (unsigned __int8 *)(this + 504),
          (CCINIClass *)&stru_81AFD0.sectionHead[2],
          (INIClass *)*(unsigned __int8 *)(this + 757));
  v28 = (INIClass *)*(unsigned __int8 *)(this + 758); /*0x46c3bd*/
  *(_BYTE *)(this + 757) = v27; /*0x46c3c3*/
  *(_BYTE *)(this + 758) = INIClass::ReadInt_Overwrite( /*0x46c3d5*/
                             (int)&MEMORY[0x87F8E4].__pad_5568[9012],
                             (unsigned __int8 *)(this + 504),
                             (CCINIClass *)&stru_81AFD0.headNode[2],
                             v28);
  *(_BYTE *)(this + 680) = INIClass::ReadBool_Overwrite( /*0x46c3f2*/
                             (int)&MEMORY[0x87F8E4].__pad_5568[9012],
                             (unsigned __int8 *)(this + 504),
                             &stru_81AFD0,
                             *(_BYTE *)(this + 680));
  if ( !*(_BYTE *)(this + 670) ) /*0x46c3f8*/
    ObjectTypeClass::Load2DArt((char *)this); /*0x46c406*/
  if ( *(_BYTE *)(this + 566) ) /*0x46c40b*/
    VoxelAnimType::LoadAnim((char *)this); /*0x46c417*/
  return 1; /*0x46c41c*/
}


// ==== 0x0046C4F0  BulletTypeClass::GetROF  this=BulletTypeClass  sig=csp ====
_DWORD *__stdcall BulletTypeClass::_vt27(_DWORD *a1, int *a2)
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
  *a1 = v5; /*0x46c53f*/
  a1[1] = v6; /*0x46c545*/
  a1[2] = v3; /*0x46c549*/
  return a1; /*0x46c54c*/
}


// ==== 0x0046C560  BulletTypeClass::ProcessPower  this=BulletTypeClass  sig=csp ====
int __thiscall BulletTypeClass::ProcessPower(int this, int *a2)
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

  v3 = AbstractTypeClass::ProcessPower((char *)this, a2); /*0x46c569*/
  LOBYTE(v3) = *(_BYTE *)(this + 660); /*0x46c56e*/
  Power::FlagProcess(a2, v3); /*0x46c577*/
  LOBYTE(v4) = *(_BYTE *)(this + 666); /*0x46c57c*/
  Power::FlagProcess(a2, v4); /*0x46c585*/
  LOBYTE(v5) = *(_BYTE *)(this + 667); /*0x46c58a*/
  v6 = Power::FlagProcess(a2, v5); /*0x46c593*/
  LOBYTE(v6) = *(_BYTE *)(this + 668); /*0x46c598*/
  Power::FlagProcess(a2, v6); /*0x46c5a1*/
  LOBYTE(v7) = *(_BYTE *)(this + 669); /*0x46c5a6*/
  Power::FlagProcess(a2, v7); /*0x46c5af*/
  LOBYTE(v8) = *(_BYTE *)(this + 670); /*0x46c5b4*/
  v9 = Power::FlagProcess(a2, v8); /*0x46c5bd*/
  LOBYTE(v9) = *(_BYTE *)(this + 671); /*0x46c5c2*/
  Power::FlagProcess(a2, v9); /*0x46c5cb*/
  LOBYTE(v10) = *(_BYTE *)(this + 672); /*0x46c5d0*/
  Power::FlagProcess(a2, v10); /*0x46c5d9*/
  LOBYTE(v11) = *(_BYTE *)(this + 673); /*0x46c5de*/
  v12 = Power::FlagProcess(a2, v11); /*0x46c5e7*/
  LOBYTE(v12) = *(_BYTE *)(this + 674); /*0x46c5ec*/
  Power::FlagProcess(a2, v12); /*0x46c5f5*/
  LOBYTE(v13) = *(_BYTE *)(this + 675); /*0x46c5fa*/
  Power::FlagProcess(a2, v13); /*0x46c603*/
  LOBYTE(v14) = *(_BYTE *)(this + 676); /*0x46c608*/
  v15 = Power::FlagProcess(a2, v14); /*0x46c611*/
  LOBYTE(v15) = *(_BYTE *)(this + 677); /*0x46c616*/
  Power::FlagProcess(a2, v15); /*0x46c61f*/
  LOBYTE(v16) = *(_BYTE *)(this + 678); /*0x46c624*/
  Power::FlagProcess(a2, v16); /*0x46c62d*/
  LOBYTE(v17) = *(_BYTE *)(this + 679); /*0x46c632*/
  Power::FlagProcess(a2, v17); /*0x46c63b*/
  Checksummer::Add_double(*(_DWORD *)(this + 712), *(_DWORD *)(this + 716)); /*0x46c650*/
  Power::TimerProcess(*(_DWORD *)(this + 720)); /*0x46c65e*/
  Power::TimerProcess(*(_DWORD *)(this + 732)); /*0x46c66c*/
  Power::TimerProcess(*(_DWORD *)(this + 752)); /*0x46c67a*/
  LOBYTE(v18) = *(_BYTE *)(this + 759); /*0x46c67f*/
  return Power::FlagProcess(a2, v18); /*0x46c68d*/
}


// ==== 0x0046C6A0  BulletTypeClass::SaveLoad_Prefix  this=BulletTypeClass  sig=csp ====
int __stdcall BulletTypeClass::SaveLoad_Prefix(ObjectTypeClass *aP0, int aP1)
{
  int result; // eax

  result = ObjectTypeClass::LoadCleanup((IUnknown *)aP0, (ObjectTypeClass *)aP1); /*0x46c6ab*/
  if ( result >= 0 ) /*0x46c6b2*/
  {
    if ( aP0 ) /*0x46c6b6*/
    {
      ObjectTypeClass::Construct(aP0, (ObjectTypeClass *)&aP1); /*0x46c6bf*/
      *(_DWORD *)aP0->__pad_0 = &BulletTypeClass::`vftable'; /*0x46c6c4*/
      *(_DWORD *)&aP0->__pad_0[4] = &BulletTypeClass::`vftable'; /*0x46c6ca*/
      *(_DWORD *)&aP0->__pad_0[8] = &BulletTypeClass::`vftable'; /*0x46c6d1*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_BulletTypeClass; /*0x46c6d8*/
    }
    VoxelAnimType::LoadAnim(aP0->__pad_0); /*0x46c6e1*/
    ObjectTypeClass::Load2DArt(aP0->__pad_0); /*0x46c6e8*/
    ObjectPtr::RegisterForTracking( /*0x46c6f9*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].UINameLabel[7]);
    ObjectPtr::RegisterForTracking( /*0x46c70a*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].referenceCount);
    ObjectPtr::RegisterForTracking( /*0x46c71b*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].NeedsSaveOrLink);
    return 0; /*0x46c720*/
  }
  return result; /*0x46c722*/
}


// ==== 0x0046C730  BulletTypeClass::SaveLoad_Prefix_0  this=BulletTypeClass  sig=csp ====
int __stdcall BulletTypeClass::SaveLoad_Prefix_0(TechnoTypeClass *aP0, ObjectTypeClass *aP1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP2); /*0x46c73f*/
  if ( result >= 0 ) /*0x46c746*/
    return 0; /*0x46c748*/
  return result; /*0x46c74a*/
}


// ==== 0x0046C750  BulletTypeClass::GetClassIdentifier  this=BulletTypeClass  sig=csp ====
int __stdcall BulletTypeClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x46c756*/
    return -2147467261; /*0x46c758*/
  *a2 = 1525862007; /*0x46c766*/
  a2[1] = 298976820; /*0x46c76e*/
  a2[2] = 1610654892; /*0x46c777*/
  a2[3] = -1252326136; /*0x46c780*/
  return 0; /*0x46c75d*/
}


// ==== 0x0046C790  ObjectTypeClass::FindOrCreate  this=ObjectClass  sig=csp ====
BulletTypeClass *__thiscall ObjectTypeClass::FindOrCreate(ObjectClass *Source)
{
  int v2; // esi
  _BYTE *v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x46c7ac*/
    return 0; /*0x46c80f*/
  v2 = 0; /*0x46c7bd*/
  if ( (int)g_BulletTypeInitState <= 0 ) /*0x46c7c1*/
  {
LABEL_6:
    v3 = (_BYTE *)__2_YAPAXI_Z(0x2F8u); /*0x46c7e6*/
    if ( v3 ) /*0x46c7f5*/
      return (BulletTypeClass *)BulletTypeClass::Construct(v3, Source); /*0x46c801*/
    return 0; /*0x46c7f5*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)&dword_A83C84->__pad_0[4 * v2] + 36), Source) ) /*0x46c7da*/
  {
    if ( ++v2 >= (int)g_BulletTypeInitState ) /*0x46c7e4*/
      goto LABEL_6; /*0x46c7e4*/
  }
  return *(BulletTypeClass **)&dword_A83C84->__pad_0[4 * v2]; /*0x46c7ff*/
}


// ==== 0x0046C820  BulletTypeClass::GetWarhead  this=BulletTypeClass  sig=csp ====
int __thiscall BulletTypeClass::_vt10(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2; /*0x46c820*/
  if ( a2 == this->trailer ) /*0x46c82c*/
    this->trailer = 0; /*0x46c82e*/
  return result; /*0x46c838*/
}


// ==== 0x0046C840  BulletTypeClass::SetScaledSpawnDelay  this=BulletTypeClass  sig=csp ====
int __thiscall BulletTypeClass::SetScaledSpawnDelay(_DWORD *this, int a2)
{
  this->scaledSpawnDelay = a2; /*0x46c844*/
  return a2; /*0x46c84a*/
}


// ==== 0x0046C850  BulletTypeClass::GetTypeIdentifier  this=BulletTypeClass  sig=csp ====
int BulletTypeClass::_vt11()
{
  return 9; /*0x46c855*/
}


// ==== 0x0046C860  BulletTypeClass::GetObjectSize  this=BulletTypeClass  sig=csp ====
int BulletTypeClass::_vt12()
{
  return 760; /*0x46c865*/
}


// ==== 0x0046C870  BulletTypeClass::Stub  this=BulletTypeClass  sig=csp ====
char __stdcall BulletTypeClass::_vt32(int a1, int a2)
{
  return 0; /*0x46c872*/
}


// ==== 0x0046C880  BulletTypeClass::StubReturnFalse  this=BulletTypeClass  sig=csp ====
int __stdcall BulletTypeClass::_vt35(int a1)
{
  return 0; /*0x46c882*/
}


// ==== 0x0046C890  BulletTypeClass::ddtor  this=BulletTypeClass  sig=csp ====
BulletTypeClass *__thiscall BulletTypeClass::ddtor(void **Block, char a2)
{
  int v3; // eax
  int v4; // eax
  void **v6; // [esp+4h] [ebp-4h] BYREF

  *Block = &BulletTypeClass::`vftable'; /*0x46c896*/
  *(Block + 1) = &BulletTypeClass::`vftable'; /*0x46c89c*/
  *(Block + 2) = &BulletTypeClass::`vftable'; /*0x46c8a3*/
  *(Block + 3) = &vt_BulletTypeClass; /*0x46c8aa*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x46c8b1*/
  v6 = Block; /*0x46c8c6*/
  v3 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xB0F670] + 16))(&MEMORY[0xB0F670], &v6); /*0x46c8ca*/
  if ( v3 != -1 && v3 < MEMORY[0xB0F680] && v3 < --MEMORY[0xB0F680] ) /*0x46c8e5*/
  {
    do /*0x46c8fd*/
    {
      ++v3; /*0x46c8ed*/
      *((_DWORD *)MEMORY[0xB0F674] + v3 - 1) = *((_DWORD *)MEMORY[0xB0F674] + v3); /*0x46c8f1*/
    }
    while ( v3 < MEMORY[0xB0F680] ); /*0x46c8fd*/
  }
  v6 = Block; /*0x46c90f*/
  v4 = (*(int (__thiscall **)(int *, void ***))(BulletTypeClass_Array + 16))(&BulletTypeClass_Array, &v6); /*0x46c913*/
  if ( v4 != -1 && v4 < g_BulletTypeInitState && v4 < --g_BulletTypeInitState ) /*0x46c92e*/
  {
    do /*0x46c946*/
    {
      ++v4; /*0x46c936*/
      *((_DWORD *)dword_A83C84 + v4 - 1) = *((_DWORD *)dword_A83C84 + v4); /*0x46c93a*/
    }
    while ( v4 < g_BulletTypeInitState ); /*0x46c946*/
  }
  ObjectTypeClass::Destruct((int)Block); /*0x46c94a*/
  if ( (a2 & 1) != 0 ) /*0x46c954*/
    OperatorDelete(Block); /*0x46c957*/
  return (BulletTypeClass *)Block; /*0x46c961*/
}


// ==== 0x0046C970  sub_46C970  this=-  sig=ida-proto ====
void sub_46C970()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x46c97c*/
  unk_89DF08 = Math::Sqrt(v0 + v0); /*0x46c98e*/
}


// ==== 0x0046C9A0  sub_46C9A0  this=-  sig=ida-proto ====
void sub_46C9A0()
{
  unk_89DF58 = unk_89DF08 / 60.0; /*0x46c9ac*/
}


// ==== 0x0046C9C0  sub_46C9C0  this=-  sig=ida-proto ====
void sub_46C9C0()
{
  unk_89DF40 = 1.0 / unk_89DF58; /*0x46c9cc*/
}


// ==== 0x0046C9E0  sub_46C9E0  this=-  sig=ida-proto ====
void sub_46C9E0()
{
  unk_89DF38 = 0.0174532925199433 * 45.0; /*0x46c9ec*/
}


// ==== 0x0046CA00  sub_46CA00  this=-  sig=ida-proto ====
void sub_46CA00()
{
  unk_89DF10 = 0.0174532925199433 * 60.0; /*0x46ca0c*/
}


// ==== 0x0046CA20  sub_46CA20  this=-  sig=ida-proto ====
void sub_46CA20()
{
  unk_89DEF8 = 0.0174532925199433 * 90.0; /*0x46ca2c*/
}


// ==== 0x0046CA40  sub_46CA40  this=-  sig=ida-proto ====
__int64 sub_46CA40()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_89DEF8 - unk_89DF10); /*0x46ca52*/
  result = Math::RoundToInt(v0 * unk_89DF08 * 0.5); /*0x46ca66*/
  unk_89DF60 = result; /*0x46ca6b*/
  return result; /*0x46ca70*/
}


// ==== 0x0046CA80  sub_46CA80  this=-  sig=ida-proto ====
void sub_46CA80()
{
  unk_89DF18 = Math::ArcTan((double)unk_89DF60 * 0.00390625); /*0x46ca97*/
}


// ==== 0x0046CAB0  sub_46CAB0  this=-  sig=ida-proto ====
void sub_46CAB0()
{
  unk_89DF30 = Math::ArcTan((double)(2 * unk_89DF60) / unk_89DF08); /*0x46cad2*/
}


// ==== 0x0046CAE0  sub_46CAE0  this=-  sig=ida-proto ====
__int64 sub_46CAE0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_89DF60) + 0.5); /*0x46cafb*/
  unk_89DF54 = result; /*0x46cb00*/
  return result; /*0x46cb06*/
}


// ==== 0x0046CB10  sub_46CB10  this=-  sig=ida-proto ====
int sub_46CB10()
{
  unk_89DF00 = 0; /*0x46cb12*/
  unk_89DF02 = 0; /*0x46cb18*/
  return 0; /*0x46cb1e*/
}


// ==== 0x0046CB20  sub_46CB20  this=-  sig=ida-proto ====
int sub_46CB20()
{
  unk_89DF20 = 0; /*0x46cb22*/
  unk_89DF24 = 0; /*0x46cb27*/
  unk_89DF28 = 0; /*0x46cb2c*/
  return 0; /*0x46cb31*/
}


// ==== 0x0046CB40  sub_46CB40  this=-  sig=ida-proto ====
int sub_46CB40()
{
  unk_89DF50 = 0; /*0x46cb45*/
  unk_89DF48 = 128; /*0x46cb4f*/
  unk_89DF4C = 128; /*0x46cb54*/
  return 128; /*0x46cb59*/
}


// ==== 0x0046CB60  CampaignClass::CampaignClass  this=CampaignClass  sig=csp ====
int __thiscall CampaignClass::CampaignClass(int this, ObjectClass *aP1)
{
  int v3; // eax

  AbstractTypeClass::Constructor(this, (AbstractClass *)aP1); /*0x46cb68*/
  *(_DWORD *)this = &CampaignClass::`vftable'; /*0x46cb70*/
  *(_DWORD *)(this + 152) = -1; /*0x46cb76*/
  *(_DWORD *)(this + 668) = -1; /*0x46cb7c*/
  *(_DWORD *)(this + 4) = &CampaignClass::`vftable'; /*0x46cb82*/
  *(_DWORD *)(this + 8) = &CampaignClass::`vftable'; /*0x46cb89*/
  *(_DWORD *)(this + 12) = &vt_CampaignClass; /*0x46cb90*/
  if ( g_UnitTypeInitState < dword_A83D00 /*0x46cbcc*/
    || (byte_A83D05 || !dword_A83D00)
    && dword_A83D0C > 0
    && ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))dword_A83CF8->field_8)(
         &dword_A83CF8,
         dword_A83D00 + dword_A83D0C,
         0) )
  {
    v3 = g_UnitTypeInitState++; /*0x46cbd9*/
    *(_DWORD *)&g_CampaignTypeArray->__pad_0[4 * v3] = this; /*0x46cbe8*/
  }
  *(_BYTE *)(this + 156) = 0; /*0x46cbf7*/
  wcscpy((wchar_t *)(this + 672), (const wchar_t *)&MEMORY[0x87F8E4].__pad_5568[10472]); /*0x46cbfe*/
  return this; /*0x46cc08*/
}


// ==== 0x0046CC90  CampaignSelect::LookupByName  this=ObjectClass  sig=csp ====
int __thiscall CampaignSelect::LookupByName(void *this)
{
  int v1; // esi

  v1 = 0; /*0x46cc96*/
  if ( g_UnitTypeInitState <= 0 ) /*0x46cc9d*/
    return -1; /*0x46ccc2*/
  while ( _strcmpi((const void *)(*(_DWORD *)&g_CampaignTypeArray->__pad_0[4 * v1] + 36), this) ) /*0x46ccb6*/
  {
    if ( ++v1 >= g_UnitTypeInitState ) /*0x46ccc0*/
      return -1; /*0x46ccc0*/
  }
  return v1; /*0x46ccc2*/
}


// ==== 0x0046CCD0  CampaignClass::GetMapData  this=CampaignClass  sig=csp ====
char __thiscall CampaignClass::GetMapData(int this, unsigned __int8 ***aP1)
{
  int Int_Overwrite; // eax
  CCINIClass *v4; // ecx
  INIClass Destination[16]; // [esp+8h] [ebp-400h] BYREF

  INIClass::ResetSection(aP1); /*0x46cce3*/
  if ( !AbstractTypeClass::LoadFromINI(this, (AbstractTypeClass *)aP1) ) /*0x46cceb*/
    return 0; /*0x46cdf7*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x46cd0c*/
                    (int)aP1,
                    (unsigned __int8 *)(this + 36),
                    (CCINIClass *)&stru_81B1A4.unknown30,
                    *(INIClass **)(this + 152));
  v4 = *(CCINIClass **)(this + 668); /*0x46cd11*/
  *(_DWORD *)(this + 152) = Int_Overwrite; /*0x46cd17*/
  *(_DWORD *)(this + 668) = INIClass::GetBool( /*0x46cd40*/
                              aP1,
                              (INIClass *)(this + 36),
                              (unsigned __int8 *)&stru_81B1A4.__pad_20[4],
                              (int)v4);
  INIClass::GetString( /*0x46cd46*/
    aP1,
    (INIClass *)(this + 36),
    (unsigned __int8 *)&stru_81B1A4.sectionHead[2],
    (INIClass *)(this + 156),
    (INIClass *)(this + 156),
    512);
  _strupr((char *)(this + 156)); /*0x46cd4c*/
  if ( INIClass::ReadBool_Overwrite((int)aP1, (unsigned __int8 *)(this + 36), (CCINIClass *)&stru_81B1A4.headNode[2], 0) ) /*0x46cd5e*/
  {
    INIClass::GetString(aP1, (INIClass *)(this + 36), (unsigned __int8 *)&stru_81B1A4, 0, Destination, 1024); /*0x46cda3*/
    strcat(Destination[0].__pad_0, (const char *)&stru_81B138.unknown54); /*0x46cdcf*/
    BulkCharToWide((_WORD *)(this + 672), (unsigned __int8 *)Destination, -1); /*0x46cde2*/
  }
  else
  {
    INIClass::GetStringEx((int)aP1, (INIClass *)(this + 36), &stru_81B1A4, (CCINIClass *)(this + 672), 0x80u); /*0x46cd7b*/
  }
  return 1; /*0x46cd82*/
}


// ==== 0x0046CE10  CampaignClass::LoadFromINIList  this=CampaignClass  sig=csp ====
int __thiscall CampaignClass::LoadFromINIList(char *this)
{
  int result; // eax
  CCINIClass *v3; // ebp
  unsigned __int8 *StringByIndex; // eax
  int v5; // esi
  INIClass *v6; // esi
  int v7; // eax
  int i; // [esp+8h] [ebp-24h]
  _BYTE Source[32]; // [esp+Ch] [ebp-20h] BYREF

  result = INIClass::GetKeyCount(this, (INIClass *)&stru_81B1A4.needsSave_flag); /*0x46ce1c*/
  v3 = 0; /*0x46ce21*/
  for ( i = result; (int)v3 < i; v3 = (CCINIClass *)((char *)v3 + 1) ) /*0x46ce29*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(this, (CCINIClass *)&stru_81B1A4.needsSave_flag, v3); /*0x46ce48*/
    INIClass::GetString( /*0x46ce55*/
      (unsigned __int8 ***)this,
      (INIClass *)&stru_81B1A4.needsSave_flag,
      StringByIndex,
      (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
      (INIClass *)Source,
      32);
    v5 = 0; /*0x46ce5f*/
    if ( g_UnitTypeInitState <= 0 ) /*0x46ce63*/
      goto LABEL_7; /*0x46ce63*/
    while ( _strcmpi((char *)(*(_DWORD *)&g_CampaignTypeArray->__pad_0[4 * v5] + 36), Source) ) /*0x46ce81*/
    {
      if ( ++v5 >= g_UnitTypeInitState ) /*0x46ce8b*/
        goto LABEL_7; /*0x46ce8b*/
    }
    if ( v5 == -1 ) /*0x46ce91*/
    {
LABEL_7:
      v6 = (INIClass *)__2_YAPAXI_Z(0x3A0u); /*0x46ce97*/
      if ( v6 ) /*0x46cea8*/
      {
        AbstractTypeClass::Constructor((int)v6, (AbstractClass *)Source); /*0x46ceb5*/
        v6[2].sectionHead[2] = -1; /*0x46ceba*/
        v6[10].sectionCount = -1; /*0x46cec0*/
        *(_DWORD *)v6->__pad_0 = &CampaignClass::`vftable'; /*0x46cec6*/
        v6->headNode[0] = (int)&CampaignClass::`vftable'; /*0x46cecc*/
        v6->headNode[1] = (int)&CampaignClass::`vftable'; /*0x46ced3*/
        v6->headNode[2] = (int)&vt_CampaignClass; /*0x46ceda*/
        if ( g_UnitTypeInitState < dword_A83D00 /*0x46cf18*/
          || (byte_A83D05 || !dword_A83D00)
          && dword_A83D0C > 0
          && ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))dword_A83CF8->field_8)(
               &dword_A83CF8,
               dword_A83D00 + dword_A83D0C,
               0) )
        {
          v7 = g_UnitTypeInitState++; /*0x46cf25*/
          *(_DWORD *)&g_CampaignTypeArray->__pad_0[4 * v7] = v6; /*0x46cf34*/
        }
        LOBYTE(v6[2].sectionCount) = 0; /*0x46cf43*/
        wcscpy((wchar_t *)v6[10].__pad_20, (const wchar_t *)&MEMORY[0x87F8E4].__pad_5568[10472]); /*0x46cf4a*/
      }
      else
      {
        v6 = 0; /*0x46cf54*/
      }
    }
    else
    {
      v6 = *(INIClass **)&g_CampaignTypeArray->__pad_0[4 * v5]; /*0x46cf5d*/
    }
    result = (*(int (__thiscall **)(INIClass *, char *))(*(_DWORD *)v6->__pad_0 + 100))(v6, this); /*0x46cf65*/
  }
  return result; /*0x46cf75*/
}


// ==== 0x0046CF80  CampaignClass::ddtor  this=CampaignClass  sig=csp ====
int __stdcall CampaignClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x46cf86*/
    return -2147467261; /*0x46cf88*/
  *a2 = -2439096; /*0x46cf96*/
  a2[1] = 298980631; /*0x46cf9e*/
  a2[2] = 1610642817; /*0x46cfa7*/
  a2[3] = -1252326136; /*0x46cfb0*/
  return 0; /*0x46cf8d*/
}


// ==== 0x0046CFC0  CampaignClass::Stat  this=CampaignClass  sig=csp ====
int __thiscall CampaignClass::_vt13(int this, int *a2)
{
  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x46cfc9*/
  Power::TimerProcess(*(_DWORD *)(this + 152)); /*0x46cfd7*/
  Checksum::AddString((unsigned int *)a2, (unsigned __int8 *)(this + 156)); /*0x46cfe5*/
  return Power::TimerProcess(*(_DWORD *)(this + 668)); /*0x46cff8*/
}


// ==== 0x0046D000  CampaignClass::Write  this=CampaignClass  sig=csp ====
int __stdcall CampaignClass::Write(AbstractTypeClass *aP0, int aP1)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0((AbstractClass *)aP0, (AbstractClass *)aP1); /*0x46d00b*/
  if ( result >= 0 ) /*0x46d012*/
  {
    if ( aP0 ) /*0x46d016*/
    {
      AbstractTypeClass::Init((int)aP0, (AbstractTypeClass *)&aP1); /*0x46d01f*/
      *(_DWORD *)aP0->__pad_0 = &CampaignClass::`vftable'; /*0x46d024*/
      *(_DWORD *)&aP0->__pad_0[4] = &CampaignClass::`vftable'; /*0x46d02a*/
      *(_DWORD *)&aP0->__pad_0[8] = &CampaignClass::`vftable'; /*0x46d031*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_CampaignClass; /*0x46d038*/
    }
    return 0; /*0x46d03f*/
  }
  return result; /*0x46d041*/
}


// ==== 0x0046D050  CampaignClass::Seek  this=CampaignClass  sig=csp ====
int __stdcall CampaignClass::Seek(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x46d05f*/
  if ( result >= 0 ) /*0x46d066*/
    return 0; /*0x46d068*/
  return result; /*0x46d06a*/
}


// ==== 0x0046D070  CampaignClass::StubReturn928  this=CampaignClass  sig=csp ====
int CampaignClass::_vt12()
{
  return 928; /*0x46d075*/
}


// ==== 0x0046D080  CampaignClass::StubReturn10  this=CampaignClass  sig=csp ====
int CampaignClass::_vt11()
{
  return 10; /*0x46d085*/
}


// ==== 0x0046D090  CampaignClass::DTOR  this=CampaignClass  sig=csp ====
CampaignClass *__thiscall CampaignClass::DTOR(void **Block, char a2)
{
  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *Block = &CampaignClass::`vftable'; /*0x46d096*/
  *(Block + 1) = &CampaignClass::`vftable'; /*0x46d09c*/
  *(Block + 2) = &CampaignClass::`vftable'; /*0x46d0a3*/
  *(Block + 3) = &vt_CampaignClass; /*0x46d0aa*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x46d0b1*/
  v5 = Block; /*0x46d0c6*/
  v3 = (*(int (__thiscall **)(int *, void ***))(dword_A83CF8 + 16))(&dword_A83CF8, &v5); /*0x46d0ca*/
  if ( v3 != -1 && v3 < g_UnitTypeInitState && v3 < --g_UnitTypeInitState ) /*0x46d0e5*/
  {
    do /*0x46d0fd*/
    {
      ++v3; /*0x46d0ed*/
      *((_DWORD *)g_CampaignTypeArray + v3 - 1) = *((_DWORD *)g_CampaignTypeArray + v3); /*0x46d0f1*/
    }
    while ( v3 < g_UnitTypeInitState ); /*0x46d0fd*/
  }
  AbstractTypeClass::Dtor(Block); /*0x46d101*/
  if ( (a2 & 1) != 0 ) /*0x46d10b*/
    __3_YAXPAX_Z(Block); /*0x46d10e*/
  return (CampaignClass *)Block; /*0x46d118*/
}


// ==== 0x0046D120  sub_46D120  this=-  sig=ida-proto ====
void sub_46D120()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x46d12c*/
  unk_89DFA8 = Math::Sqrt(v0 + v0); /*0x46d13e*/
}


// ==== 0x0046D150  sub_46D150  this=-  sig=ida-proto ====
void sub_46D150()
{
  unk_89E040 = unk_89DFA8 / 60.0; /*0x46d15c*/
}


// ==== 0x0046D170  sub_46D170  this=-  sig=ida-proto ====
void sub_46D170()
{
  unk_89E018 = 1.0 / unk_89E040; /*0x46d17c*/
}


// ==== 0x0046D190  sub_46D190  this=-  sig=ida-proto ====
void sub_46D190()
{
  unk_89E010 = 0.0174532925199433 * 45.0; /*0x46d19c*/
}


// ==== 0x0046D1B0  sub_46D1B0  this=-  sig=ida-proto ====
void sub_46D1B0()
{
  unk_89DFB0 = 0.0174532925199433 * 60.0; /*0x46d1bc*/
}


// ==== 0x0046D1D0  sub_46D1D0  this=-  sig=ida-proto ====
void sub_46D1D0()
{
  unk_89DF68 = 0.0174532925199433 * 90.0; /*0x46d1dc*/
}


// ==== 0x0046D1F0  sub_46D1F0  this=-  sig=ida-proto ====
__int64 sub_46D1F0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_89DF68 - unk_89DFB0); /*0x46d202*/
  result = Math::RoundToInt(v0 * unk_89DFA8 * 0.5); /*0x46d216*/
  unk_89E048 = result; /*0x46d21b*/
  return result; /*0x46d220*/
}


// ==== 0x0046D230  sub_46D230  this=-  sig=ida-proto ====
void sub_46D230()
{
  unk_89DFB8 = Math::ArcTan((double)unk_89E048 * 0.00390625); /*0x46d247*/
}


// ==== 0x0046D260  sub_46D260  this=-  sig=ida-proto ====
void sub_46D260()
{
  unk_89DFD8 = Math::ArcTan((double)(2 * unk_89E048) / unk_89DFA8); /*0x46d282*/
}


// ==== 0x0046D290  sub_46D290  this=-  sig=ida-proto ====
__int64 sub_46D290()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_89E048) + 0.5); /*0x46d2ab*/
  unk_89E034 = result; /*0x46d2b0*/
  return result; /*0x46d2b6*/
}


// ==== 0x0046D2C0  sub_46D2C0  this=-  sig=ida-proto ====
int sub_46D2C0()
{
  MEMORY[0x89DFA0] = 0; /*0x46d2c2*/
  MEMORY[0x89DFA2] = 0; /*0x46d2c8*/
  return 0; /*0x46d2ce*/
}


// ==== 0x0046D2D0  sub_46D2D0  this=-  sig=ida-proto ====
int sub_46D2D0()
{
  unk_89DFC8 = 0; /*0x46d2d2*/
  unk_89DFCC = 0; /*0x46d2d7*/
  unk_89DFD0 = 0; /*0x46d2dc*/
  return 0; /*0x46d2e1*/
}


// ==== 0x0046D2F0  sub_46D2F0  this=-  sig=ida-proto ====
int sub_46D2F0()
{
  unk_89E030 = 0; /*0x46d2f5*/
  unk_89E028 = 128; /*0x46d2ff*/
  unk_89E02C = 128; /*0x46d304*/
  return 128; /*0x46d309*/
}


// ==== 0x0046D310  sub_46D310  this=-  sig=ida-proto ====
int sub_46D310()
{
  unk_89DF70 = 0; /*0x46d312*/
  unk_89DF74 = 0; /*0x46d317*/
  unk_89DF78 = 0; /*0x46d31c*/
  unk_89DF7C = 0; /*0x46d321*/
  return 0; /*0x46d326*/
}


// ==== 0x0046D330  MPCooperative::initGame  this=CampaignScore  sig=csp ====
_DWORD *__thiscall sub_46D330(_DWORD *this)
{
  *this = &vt_CampaignScoreClass; /*0x46d334*/
  this->q004 = 0; /*0x46d33a*/
  unk_89E050 = 0; /*0x46d33d*/
  MEMORY[0x81B1E8] = -1; /*0x46d343*/
  return this; /*0x46d34d*/
}


// ==== 0x0046D350  CampaignScoreClass::method_46D350  this=CampaignScore  sig=csp ====
void __thiscall sub_46D350(_DWORD *this)
{
  *this = &vt_CampaignScoreClass; /*0x46d350*/
}


// ==== 0x0046D480  ObjectClass::method_46D480  this=ObjectClass  sig=csp ====
__int64 __usercall sub_46D480@<edx:eax>(__int64 result@<edx:eax>, int a2@<ecx>)
{
  *((_BYTE *)&MEMORY[0x89E000] + a2) = BYTE4(result); /*0x46d480*/
  return result; /*0x46d486*/
}


// ==== 0x0046D490  ObjectClass::method_46D490  this=ObjectClass  sig=csp ====
char __thiscall sub_46D490(void *this)
{
  return *((_BYTE *)&MEMORY[0x89E000] + (_DWORD)this); /*0x46d496*/
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
  strcpy(v14, MEMORY[0xA8B380]); /*0x46d4cd*/
  result = Settings::CheckString(); /*0x46d4d6*/
  if ( (_BYTE)result )
  {
    Debug::Log(aSendingCampaig); /*0x46d4e8*/
    v14[43] = MEMORY[0xA8EB68]; /*0x46d4f6*/
    for ( i = 0; i < 8; ++i )
    {
      v2 = *(&MEMORY[0xA8DA90] + i); /*0x46d4fc*/
      if ( !v2 || v2 == MEMORY[0xAC119C] || v2 == MEMORY[0xAC11A0] ) /*0x46d515*/
      {
        *(_DWORD *)&v14[4 * i + 44] = -1; /*0x46d542*/
        *(_DWORD *)&v14[4 * i + 76] = -1; /*0x46d54a*/
        *(_DWORD *)&v14[4 * i + 108] = -1; /*0x46d552*/
      }
      else
      {
        Option = SessionClass::GetOption(v2); /*0x46d517*/
        v4 = *(&MEMORY[0xA8DA90] + i); /*0x46d51c*/
        *(_DWORD *)&v14[4 * i + 44] = Option; /*0x46d523*/
        PlayerSide = SessionClass::GetPlayerSide(v4); /*0x46d527*/
        v6 = *(&MEMORY[0xA8DA90] + i); /*0x46d52c*/
        *(_DWORD *)&v14[4 * i + 76] = PlayerSide; /*0x46d533*/
        *(_DWORD *)&v14[4 * i + 108] = SessionClass::GetPlayerColor(v6); /*0x46d53c*/
      }
      v7 = ToWideStringChar((char *)*(&MEMORY[0xA8DA90] + i)); /*0x46d561*/
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
    v12 = (wchar_t **)&MEMORY[0xA8DA94]; /*0x46d600*/
    do /*0x46d640*/
    {
      if ( *v12 ) /*0x46d605*/
      {
        result = IsKnownPointer(*v12); /*0x46d60b*/
        if ( (_BYTE)result ) /*0x46d612*/
        {
          Network::SendToPlayer((int)MEMORY[0xA8E9C0], (int)&v13, 455, 1, *v12); /*0x46d628*/
          result = Network::ReceiveLoop(MEMORY[0xA8E9C0]); /*0x46d632*/
        }
      }
      ++v12; /*0x46d637*/
    }
    while ( (int)v12 < (int)&MEMORY[0xA8DAB0] ); /*0x46d640*/
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

  if ( MEMORY[0xA8D638] != 50 ) /*0x46d65b*/
    return 0; /*0x46d80a*/
  Debug::Log(); /*0x46d666*/
  v0 = MEMORY[0xA8EB68] != (char)MEMORY[0xA8D667]; /*0x46d67f*/
  MEMORY[0xA8EB68] = (char)MEMORY[0xA8D667]; /*0x46d686*/
  v1 = (HWND)Dialog::FindByHandle((void *)0xBC6); /*0x46d68b*/
  if ( v1 ) /*0x46d692*/
  {
    DlgItem = GetDlgItem(v1, 1842); /*0x46d69a*/
    if ( DlgItem ) /*0x46d6a2*/
      PostMessageA(DlgItem, 0x405u, 1u, MEMORY[0xA8EB68]); /*0x46d6b3*/
  }
  v3 = 0; /*0x46d6bc*/
  v4 = &MEMORY[0xA8DA90]; /*0x46d6be*/
  do /*0x46d7fd*/
  {
    v5 = *v4; /*0x46d6c3*/
    if ( *v4 && v5 != MEMORY[0xAC119C] && v5 != MEMORY[0xAC11A0] ) /*0x46d6d7*/
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
  while ( (int)v4 < (int)&MEMORY[0xA8DAB0] ); /*0x46d7fd*/
  return v0; /*0x46d808*/
}


// ==== 0x0046D810  ObjectClass::method_46D810  this=ObjectClass  sig=csp ====
int sub_46D810()
{
  int result; // eax
  int v1; // [esp+8h] [ebp-1C8h] BYREF
  char v2[43]; // [esp+Ch] [ebp-1C4h] BYREF
  int Option; // [esp+37h] [ebp-199h]
  int PlayerSide; // [esp+3Bh] [ebp-195h]
  int PlayerColor; // [esp+3Fh] [ebp-191h]

  v1 = 51; /*0x46d82c*/
  strcpy(v2, MEMORY[0xA8B380]); /*0x46d83d*/
  Option = SessionClass::GetOption(*(_DWORD *)MEMORY[0xA8DA78]); /*0x46d859*/
  PlayerSide = SessionClass::GetPlayerSide(*(_DWORD *)MEMORY[0xA8DA78]); /*0x46d864*/
  PlayerColor = SessionClass::GetPlayerColor(*(_DWORD *)MEMORY[0xA8DA78]); /*0x46d874*/
  result = MEMORY[0xA8DA90]; /*0x46d878*/
  if ( MEMORY[0xA8DA90] ) /*0x46d881*/
  {
    Network::SendToPlayer((int)MEMORY[0xA8E9C0], (int)&v1, 455, 1, (wchar_t *)MEMORY[0xA8DA90]); /*0x46d895*/
    return Network::ReceiveLoop(MEMORY[0xA8E9C0]); /*0x46d89f*/
  }
  return result; /*0x46d87d*/
}


// ==== 0x0046D8B0  ObjectClass::method_46D8B0  this=ObjectClass  sig=csp ====
char sub_46D8B0()
{
  char v0; // bl
  int v1; // edi
  const wchar_t **v2; // esi
  char *v3; // eax
  int v5; // esi
  int PlayerSide; // eax
  int v7; // [esp-4h] [ebp-10h]

  v0 = 0; /*0x46d8b3*/
  v1 = 0; /*0x46d8b5*/
  v2 = (const wchar_t **)&MEMORY[0xA8DA90]; /*0x46d8b7*/
  while ( 1 ) /*0x46d8c1*/
  {
    v3 = CharToWideString(MEMORY[0xA8D63C]); /*0x46d8c1*/
    if ( !wcscmp((const wchar_t *)v3, *v2) ) /*0x46d8ca*/
      break; /*0x46d8ca*/
    ++v2; /*0x46d8d6*/
    ++v1; /*0x46d8d9*/
    if ( (int)v2 >= (int)&MEMORY[0xA8DAB0] ) /*0x46d8e0*/
      return 0; /*0x46d8e7*/
  }
  if ( v1 == -1 ) /*0x46d8eb*/
    return 0; /*0x46d8f2*/
  if ( SessionClass::GetPlayerSide(*(&MEMORY[0xA8DA90] + v1)) != *((_DWORD *)&MEMORY[0xA8D667] + 1) ) /*0x46d907*/
    v0 = 1; /*0x46d909*/
  if ( MEMORY[0xA8B23C] ) /*0x46d913*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xA8B23C] + 28))( /*0x46d918*/
           MEMORY[0xA8B23C],
           *((_DWORD *)&MEMORY[0xA8D667] + 1)) )
    {
      SessionClass::SetPlayerOption(*(&MEMORY[0xA8DA90] + v1), *((int *)&MEMORY[0xA8D667] + 1)); /*0x46d926*/
    }
    else if ( MEMORY[0xA8B23C] ) /*0x46d92f*/
    {
      v5 = *(_DWORD *)MEMORY[0xA8B23C]; /*0x46d938*/
      PlayerSide = SessionClass::GetPlayerSide(*(&MEMORY[0xA8DA90] + v1)); /*0x46d93a*/
      if ( !(*(unsigned __int8 (__thiscall **)(int, int))(v5 + 28))(MEMORY[0xA8B23C], PlayerSide) ) /*0x46d946*/
      {
        v7 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 40))(MEMORY[0xA8B23C]); /*0x46d958*/
        SessionClass::SetPlayerOption(*(&MEMORY[0xA8DA90] + v1), v7); /*0x46d960*/
      }
    }
  }
  if ( SessionClass::GetPlayerColor(*(&MEMORY[0xA8DA90] + v1)) != MEMORY[0xA8D66F] ) /*0x46d979*/
    v0 = 1; /*0x46d97b*/
  if ( (unsigned __int8)IsAvailableColorhWnd() ) /*0x46d97d*/
  {
    if ( SessionClass::GetPlayerColor(*(&MEMORY[0xA8DA90] + v1)) != MEMORY[0xA8D66F] ) /*0x46d998*/
    {
      SessionClass::SetPlayerColor(*(&MEMORY[0xA8DA90] + v1), -2); /*0x46d9a3*/
      v0 = 1; /*0x46d9a8*/
    }
  }
  else
  {
    SessionClass::SetPlayerColor(*(&MEMORY[0xA8DA90] + v1), MEMORY[0xA8D66F]); /*0x46d9b9*/
  }
  if ( SessionClass::GetPlayerColor(*(&MEMORY[0xA8DA90] + v1)) != *(_DWORD *)&MEMORY[0xA8D667] ) /*0x46d9d2*/
    v0 = 1; /*0x46d9d4*/
  if ( (unsigned __int8)sub_4E50A0() ) /*0x46d9d6*/
  {
    if ( SessionClass::GetOption(*(&MEMORY[0xA8DA90] + v1)) != *(_DWORD *)&MEMORY[0xA8D667] ) /*0x46d9f1*/
    {
      SessionClass::SetOption(*(&MEMORY[0xA8DA90] + v1), -2); /*0x46d9fc*/
      return v0; /*0x46da06*/
    }
  }
  else
  {
    SessionClass::SetOption(*(&MEMORY[0xA8DA90] + v1), *(int *)&MEMORY[0xA8D667]); /*0x46da15*/
  }
  return v0; /*0x46d8e2*/
}


// ==== 0x0046DA20  sub_46DA20  this=-  sig=ida-proto ====
LRESULT __fastcall sub_46DA20(CampaignScore *aP0, int nIDDlgItem, wchar_t *Format)
{
  HWND DlgItem; // eax
  CampaignScore *v7; // [esp+0h] [ebp-48h]
  wchar_t Buffer[32]; // [esp+8h] [ebp-40h] BYREF

  swprintf(Buffer, (const size_t)&g_Str_Fmt_PctD, Format, v7); /*0x46da38*/
  DlgItem = GetDlgItem((HWND)aP0, nIDDlgItem); /*0x46da42*/
  return SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer); /*0x46da5b*/
}


// ==== 0x0046DA70  ObjectClass::method_46DA70  this=ObjectClass  sig=csp ====
void sub_46DA70()
{
  int v0; // ebx
  int v1; // esi
  int v2; // edi
  size_t v3; // ebp
  int v4; // esi
  int v5; // eax
  int *v6; // ecx
  int v7; // edx
  int v8; // ebp
  int *v9; // ecx
  int v10; // edx
  int v11; // ebp
  int Count; // ebp
  int v13; // ebp
  int v14; // ebp
  int v15; // edi
  int i; // [esp+8h] [ebp-8h]
  int v17; // [esp+Ch] [ebp-4h]

  v0 = HouseClass_Count; /*0x46da74*/
  v1 = 0; /*0x46da7b*/
  MEMORY[0xA8D580] = 0; /*0x46da7f*/
  v17 = HouseClass_Count; /*0x46da85*/
  for ( i = 0; v1 < v0; i = v1 ) /*0x46da8d*/
  {
    v2 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v1]; /*0x46da9a*/
    if ( v2 /*0x46dab7*/
      && *(_BYTE *)(*(_DWORD *)(v2 + 52) + 422) != 1
      && (unsigned __int8)House::IsCurrentPlayer(*(#375 **)&HouseClass_Array->__pad_0[4 * v1]) )
    {
      v3 = MEMORY[0xA8D580]++; /*0x46dacf*/
      v4 = 28 * v3; /*0x46dae1*/
      MEMORY[0xA8D228][28 * v3] = 0; /*0x46daea*/
      wcscpy((wchar_t *)&MEMORY[0xA8D1FC] + 56 * v3, (const wchar_t *)(v2 + 90154)); /*0x46daf5*/
      v5 = 0; /*0x46dafa*/
      MEMORY[0xA8D22C][28 * v3] = 0; /*0x46daff*/
      MEMORY[0xA8D23C][28 * v3] = 0; /*0x46db05*/
      MEMORY[0xA8D24C][28 * v3] = 0; /*0x46db0b*/
      MEMORY[0xA8D25C][28 * v3] = 0; /*0x46db11*/
      MEMORY[0xA8D224][28 * v3] = *(_DWORD *)(v2 + 90196); /*0x46db1d*/
      if ( !*(_BYTE *)(v2 + 501) ) /*0x46db23*/
      {
        ++MEMORY[0xA8D228][28 * v3]; /*0x46db34*/
        MEMORY[0xA8D584] = v3; /*0x46db3a*/
      }
      v6 = (int *)(v2 + 21476); /*0x46db40*/
      v7 = 20; /*0x46db46*/
      do /*0x46db53*/
      {
        v8 = *v6++; /*0x46db4b*/
        v5 += v8; /*0x46db50*/
        --v7; /*0x46db52*/
      }
      while ( v7 ); /*0x46db53*/
      v9 = (int *)(v2 + 21560); /*0x46db55*/
      v10 = 20; /*0x46db5b*/
      do /*0x46db68*/
      {
        v11 = *v9++; /*0x46db60*/
        v5 += v11; /*0x46db65*/
        --v10; /*0x46db67*/
      }
      while ( v10 ); /*0x46db68*/
      MEMORY[0xA8D23C][v4] = v5; /*0x46db6a*/
      MEMORY[0xA8D22C][v4] = *(_DWORD *)(v2 + 21640) + *(_DWORD *)(v2 + 21556); /*0x46db84*/
      Count = VectorClass::GetCount((_DWORD *)(v2 + 21840)); /*0x46db95*/
      v13 = VectorClass::GetCount((_DWORD *)(v2 + 21860)) + Count; /*0x46dba2*/
      v14 = VectorClass::GetCount((_DWORD *)(v2 + 21880)) + v13; /*0x46dbaf*/
      MEMORY[0xA8D24C][v4] = *(_DWORD *)(v2 + 21640) /*0x46dbc8*/
                           + VectorClass::GetCount((_DWORD *)(v2 + 21900))
                           + v14
                           + *(_DWORD *)(v2 + 21556);
      v15 = *(_DWORD *)(v2 + 21736); /*0x46dbce*/
      if ( v15 > 0 ) /*0x46dbd6*/
        MEMORY[0xA8D25C][v4] += v15; /*0x46dbd8*/
      Debug::Log(); /*0x46dc1c*/
      v1 = i; /*0x46dc21*/
      v0 = v17; /*0x46dc25*/
    }
    ++v1; /*0x46dc2c*/
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


// ==== 0x0046DCC0  sub_46DCC0  this=SkirmishDialog  sig=csp ====
BOOL __fastcall sub_46DCC0(HWND hDlg, bool a2)
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
    result = IsKnownPointer((wchar_t *)*(&MEMORY[0xA8DA90] + i)); /*0x46dcda*/
    if ( result && i != MEMORY[0xA8DA8C] )
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


// ==== 0x0046DD70  EnableGameModeControls  this=IUnknown  sig=csp ====
HWND __fastcall EnableGameModeControls(HWND hDlg, bool a2)
{
  int v4; // eax
  HWND DlgItem; // eax
  int ResourceID2CSF; // eax
  HWND v7; // eax
  int ResourceIDCSF; // eax
  HWND v9; // eax
  int ResourceID3CSF; // eax
  HWND v11; // eax
  HWND result; // eax
  HWND v13; // edi

  if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_430[32] )
    v4 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_430[32] != 1 ? -1 : 1042;
  else
    v4 = 1041; /*0x46dd81*/
  DlgItem = GetDlgItem(hDlg, v4); /*0x46dd9f*/
  EnableWindow(DlgItem, a2); /*0x46ddaf*/
  ResourceID2CSF = GetResourceID2CSF(*(void **)&MEMORY[0xA8D63C].__pad_430[32]); /*0x46ddb7*/
  v7 = GetDlgItem(hDlg, ResourceID2CSF); /*0x46ddbe*/
  EnableWindow(v7, a2); /*0x46ddc2*/
  ResourceIDCSF = GetResourceIDCSF(*(void **)&MEMORY[0xA8D63C].__pad_430[32]); /*0x46ddca*/
  v9 = GetDlgItem(hDlg, ResourceIDCSF); /*0x46ddd1*/
  EnableWindow(v9, a2); /*0x46ddd5*/
  ResourceID3CSF = GetResourceID3CSF(*(void **)&MEMORY[0xA8D63C].__pad_430[32]); /*0x46dddd*/
  v11 = GetDlgItem(hDlg, ResourceID3CSF); /*0x46dde4*/
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


// ==== 0x0046DE20  sub_46DE20  this=SkirmishDialog  sig=csp ====
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


// ==== 0x0046F5E0  ErrorCode::Map  this=AbstractClass  sig=csp ====
int __thiscall ErrorCode_Map(void *this)
{
  if ( this )
    return this != (void *)1 ? -1 : 1042;
  else
    return 1041; /*0x46f5e6*/
}


// ==== 0x0046F600  Skirmish::FillPlayerNames  this=AbstractClass  sig=csp ====
int __thiscall Skirmish_FillPlayerNames(HWND this)
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
    DlgItem = GetDlgItem(this, v2); /*0x46f643*/
    if ( ShowWindow(DlgItem, 0) ) /*0x46f647*/
    {
      v3 = GetDlgItem(this, v2); /*0x46f65e*/
      v4 = *(&MEMORY[0xA8DA90] + i); /*0x46f664*/
      if ( v4 ) /*0x46f66d*/
      {
        SendDlgItemMessageA(this, v2, 0x14Bu, 0, 0); /*0x46f67e*/
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


// ==== 0x0046F6D0  Count::SetupAllCountriesLobby  this=AbstractClass  sig=csp ====
BOOL __thiscall Lobby_SetupAllCountries(HWND this)
{
  void *v1; // ecx
  wchar_t **v2; // esi
  int ResourceID2; // ebp
  BOOL result; // eax
  wchar_t *v5; // ebx
  int v6; // edi
  int PlayerSide; // esi
  int *v8; // [esp+10h] [ebp-10h]
  int v10; // [esp+18h] [ebp-8h]
  HWND hWnd; // [esp+1Ch] [ebp-4h]

  v1 = 0; /*0x46f6da*/
  v2 = (wchar_t **)&MEMORY[0xA8DA90]; /*0x46f6dc*/
  v10 = 0; /*0x46f6e2*/
  v8 = &MEMORY[0xA8DA90]; /*0x46f6e6*/
  do /*0x46f7ff*/
  {
    ResourceID2 = GetResourceID2CSF(v1); /*0x46f6ef*/
    hWnd = GetDlgItem(this, ResourceID2); /*0x46f700*/
    result = ShowWindow(hWnd, 0); /*0x46f704*/
    if ( result ) /*0x46f70c*/
    {
      v5 = *v2; /*0x46f718*/
      v6 = -2; /*0x46f71c*/
      if ( MEMORY[0xA8B23C] && (MEMORY[0xA8B238] == 3 || MEMORY[0xA8B238] == 4) ) /*0x46f730*/
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 40))(MEMORY[0xA8B23C]); /*0x46f737*/
      if ( (unsigned __int8)Player::IsObserver(v5) ) /*0x46f73b*/
      {
        PlayerSide = (int)*(v2 - 2557); /*0x46f744*/
      }
      else if ( v5 == (wchar_t *)MEMORY[0xAC119C] ) /*0x46f752*/
      {
        PlayerSide = v6; /*0x46f754*/
      }
      else if ( v5 == (wchar_t *)MEMORY[0xAC11A0] ) /*0x46f75e*/
      {
        PlayerSide = v6; /*0x46f760*/
      }
      else if ( v5 == MEMORY[0xAC11B0] ) /*0x46f76a*/
      {
        PlayerSide = v6; /*0x46f76c*/
      }
      else if ( v5 == (wchar_t *)MEMORY[0xAC11B4] ) /*0x46f776*/
      {
        PlayerSide = -3; /*0x46f778*/
      }
      else
      {
        PlayerSide = SessionClass::GetPlayerSide((int)v5); /*0x46f786*/
      }
      if ( MEMORY[0xA8B23C] /*0x46f795*/
        && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0xA8B23C] + 28))(
              MEMORY[0xA8B23C],
              PlayerSide) )
      {
        PlayerSide = v6; /*0x46f79e*/
        if ( (unsigned __int8)Player::IsObserver(v5) ) /*0x46f7a0*/
        {
          *(v8 - 2557) = v6; /*0x46f7ad*/
        }
        else if ( IsKnownPointer(v5) ) /*0x46f7b7*/
        {
          SessionClass::SetPlayerOption(*v8, v6); /*0x46f7c7*/
        }
      }
      SetupLobbyCountryCombo(this, ResourceID2, PlayerSide); /*0x46f7d3*/
      result = ShowWindow(hWnd, 5); /*0x46f7df*/
      v2 = (wchar_t **)v8; /*0x46f7e5*/
    }
    ++v2; /*0x46f7ed*/
    v1 = (void *)++v10; /*0x46f7f0*/
    v8 = (int *)v2; /*0x46f7fb*/
  }
  while ( (int)v2 < (int)&MEMORY[0xA8DAB0] ); /*0x46f7ff*/
  return result; /*0x46f805*/
}


// ==== 0x0046F810  GetLobbyPlayerColor  this=SkirmishDialog  sig=ida-proto ====
int __fastcall Lobby_GetPlayerColor(int a1)
{
  wchar_t *v2; // esi

  v2 = (wchar_t *)*(&MEMORY[0xA8DA90] + a1); /*0x46f814*/
  if ( Player::IsObserver(v2) ) /*0x46f81d*/
    return MEMORY[0xA8B2BC][a1]; /*0x46f826*/
  if ( v2 == (wchar_t *)MEMORY[0xAC119C] ) /*0x46f836*/
    return -2; /*0x46f839*/
  if ( v2 == (wchar_t *)MEMORY[0xAC11A0] ) /*0x46f846*/
    return -2; /*0x46f849*/
  if ( v2 == MEMORY[0xAC11B0] ) /*0x46f856*/
    return -2; /*0x46f859*/
  if ( v2 == (wchar_t *)MEMORY[0xAC11B4] ) /*0x46f866*/
    return -2; /*0x46f869*/
  return SessionClass::GetPlayerColor((int)v2); /*0x46f82d*/
}


// ==== 0x0046F880  GetHouseClassSideIndex  this=-  sig=ida-proto ====
int __fastcall HouseClass_GetSideIndex(int a1)
{
  wchar_t *v2; // esi

  v2 = (wchar_t *)*(&MEMORY[0xA8DA90] + a1); /*0x46f884*/
  if ( Player::IsObserver(v2) ) /*0x46f88d*/
    return MEMORY[0xA8B2DC][a1]; /*0x46f896*/
  if ( v2 == (wchar_t *)MEMORY[0xAC119C] ) /*0x46f8a6*/
    return -2; /*0x46f8a9*/
  if ( v2 == (wchar_t *)MEMORY[0xAC11A0] ) /*0x46f8b6*/
    return -2; /*0x46f8b9*/
  if ( v2 == MEMORY[0xAC11B0] ) /*0x46f8c6*/
    return -2; /*0x46f8c9*/
  if ( v2 == (wchar_t *)MEMORY[0xAC11B4] ) /*0x46f8d6*/
    return -2; /*0x46f8d9*/
  return SessionClass::GetOption((int)v2); /*0x46f89d*/
}


// ==== 0x0046F8F0  Skirmish::SetupAllSpawnLocations  this=AbstractClass  sig=csp ====
void __thiscall Skirmish::SetupAllSpawnLocations(HWND hDlg)
{
  int v1; // ebp
  int ResourceIDCSF; // eax
  SessionClass *v4; // esi
  int v5; // edi
  int PlayerColor; // eax
  char *v7; // ebx
  int *v8; // edi
  int v9; // eax
  SessionClass *v10; // esi
  int v11; // ebp
  int v12; // eax
  int v14; // [esp+14h] [ebp-4h]

  v1 = MEMORY[0xA8DA8C]; /*0x46f8f5*/
  v14 = MEMORY[0xA8DA8C]; /*0x46f906*/
  if ( MEMORY[0xA8DA8C] != -1 ) /*0x46f90a*/
  {
    ResourceIDCSF = GetResourceIDCSF((void *)MEMORY[0xA8DA8C]); /*0x46f90e*/
    v4 = (SessionClass *)*(&MEMORY[0xA8DA90] + v1); /*0x46f913*/
    v5 = ResourceIDCSF; /*0x46f91a*/
    if ( Player::IsObserver(v4) ) /*0x46f91e*/
    {
      PlayerColor = MEMORY[0xA8B2BC][v1]; /*0x46f927*/
    }
    else if ( v4 == (SessionClass *)MEMORY[0xAC119C] ) /*0x46f936*/
    {
      PlayerColor = -2; /*0x46f938*/
    }
    else if ( v4 == (SessionClass *)MEMORY[0xAC11A0] ) /*0x46f945*/
    {
      PlayerColor = -2; /*0x46f947*/
    }
    else if ( v4 == (SessionClass *)MEMORY[0xAC11B0] ) /*0x46f954*/
    {
      PlayerColor = -2; /*0x46f956*/
    }
    else if ( v4 == (SessionClass *)MEMORY[0xAC11B4] ) /*0x46f963*/
    {
      PlayerColor = -2; /*0x46f965*/
    }
    else
    {
      PlayerColor = SessionClass::GetPlayerColor((int)v4); /*0x46f96e*/
    }
    SetupSkirmishSpawnLocations(hDlg, v5, PlayerColor); /*0x46f978*/
  }
  v7 = 0; /*0x46f97d*/
  v8 = MEMORY[0xA8B2BC]; /*0x46f97f*/
  do /*0x46fa03*/
  {
    if ( v7 != (char *)v1 ) /*0x46f986*/
    {
      v9 = GetResourceIDCSF(v7); /*0x46f98a*/
      v10 = (SessionClass *)v8[2549]; /*0x46f98f*/
      v11 = v9; /*0x46f995*/
      if ( Player::IsObserver(v10) ) /*0x46f999*/
      {
        v12 = *v8; /*0x46f9a2*/
      }
      else if ( v10 == (SessionClass *)MEMORY[0xAC119C] ) /*0x46f9ac*/
      {
        v12 = -2; /*0x46f9ae*/
      }
      else if ( v10 == (SessionClass *)MEMORY[0xAC11A0] ) /*0x46f9bb*/
      {
        v12 = -2; /*0x46f9bd*/
      }
      else if ( v10 == (SessionClass *)MEMORY[0xAC11B0] ) /*0x46f9ca*/
      {
        v12 = -2; /*0x46f9cc*/
      }
      else if ( v10 == (SessionClass *)MEMORY[0xAC11B4] ) /*0x46f9d9*/
      {
        v12 = -2; /*0x46f9db*/
      }
      else
      {
        v12 = SessionClass::GetPlayerColor((int)v10); /*0x46f9e4*/
      }
      SetupSkirmishSpawnLocations(hDlg, v11, v12); /*0x46f9f0*/
      v1 = v14; /*0x46f9f5*/
    }
    ++v8; /*0x46f9f9*/
    ++v7; /*0x46f9fc*/
  }
  while ( (int)v8 < (int)MEMORY[0xA8B2DC] ); /*0x46fa03*/
}


// ==== 0x0046FA20  Lobby::UpdateReadyIcons  this=AbstractClass  sig=csp ====
HWND __thiscall Lobby::UpdateReadyIcons(HWND hDlg)
{
  int v2; // ebp
  HWND result; // eax
  int v4; // esi
  wchar_t *v5; // ecx
  int v6; // eax
  HWND v7; // edx
  HWND v8; // [esp+10h] [ebp-4h]

  v2 = HashTable::Find(MEMORY[0xAC4848], MEMORY[0x81B1E0][0], 0); /*0x46fa3f*/
  result = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x81B1E4], 0); /*0x46fa49*/
  v4 = 0; /*0x46fa54*/
  v8 = result; /*0x46fa56*/
  do /*0x46fab0*/
  {
    v5 = (wchar_t *)*(&MEMORY[0xA8DA90] + v4); /*0x46fa5a*/
    if ( v5 ) /*0x46fa63*/
    {
      result = (HWND)IsKnownPointer(v5); /*0x46fa65*/
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
        result = GetDlgItem(hDlg, v6); /*0x46fa85*/
        if ( result ) /*0x46fa8b*/
        {
          if ( *((_BYTE *)&MEMORY[0x89E000] + v4) ) /*0x46fa8d*/
          {
            if ( v4 ) /*0x46fa99*/
              v7 = v8; /*0x46fa9f*/
            else
              v7 = (HWND)v2; /*0x46fa9b*/
          }
          else
          {
            v7 = 0; /*0x46faa5*/
          }
          result = (HWND)CacheDialogInvalidate(result, v7); /*0x46faa7*/
        }
      }
    }
LABEL_15:
    ++v4; /*0x46faac*/
  }
  while ( v4 < 8 ); /*0x46fab0*/
  return result; /*0x46fab2*/
}


// ==== 0x0046FAC0  Lobby::SetupAllFactionSlots  this=AbstractClass  sig=csp ====
int __thiscall Lobby_SetupAllFactionSlots(HWND this)
{
  char *v1; // ebx
  int *v2; // edi
  int ResourceID3; // eax
  wchar_t *v4; // esi
  int v5; // ebp
  int Option; // eax
  int result; // eax

  v1 = 0; /*0x46fac9*/
  v2 = MEMORY[0xA8B2DC]; /*0x46facb*/
  do /*0x46fb47*/
  {
    ResourceID3 = GetResourceID3CSF(v1); /*0x46fad2*/
    v4 = (wchar_t *)v2[2541]; /*0x46fad7*/
    v5 = ResourceID3; /*0x46fadd*/
    if ( Player::IsObserver(v4) ) /*0x46fae1*/
    {
      Option = *v2; /*0x46faea*/
    }
    else if ( v4 == (wchar_t *)MEMORY[0xAC119C] ) /*0x46faf4*/
    {
      Option = -2; /*0x46faf6*/
    }
    else if ( v4 == (wchar_t *)MEMORY[0xAC11A0] ) /*0x46fb03*/
    {
      Option = -2; /*0x46fb05*/
    }
    else if ( v4 == MEMORY[0xAC11B0] ) /*0x46fb12*/
    {
      Option = -2; /*0x46fb14*/
    }
    else if ( v4 == (wchar_t *)MEMORY[0xAC11B4] ) /*0x46fb21*/
    {
      Option = -2; /*0x46fb23*/
    }
    else
    {
      Option = SessionClass::GetOption((int)v4); /*0x46fb2c*/
    }
    result = SetupLobbyFactionSlots(this, v5, Option); /*0x46fb38*/
    ++v2; /*0x46fb3d*/
    ++v1; /*0x46fb40*/
  }
  while ( (int)v2 < (int)MEMORY[0xA8B2FC] ); /*0x46fb47*/
  return result; /*0x46fb49*/
}


// ==== 0x0046FB50  Lobby::EnableStartButton  this=AbstractClass  sig=csp ====
HWND __thiscall Lobby::EnableStartButton(HWND hDlg)
{
  HWND DlgItem; // esi
  HWND result; // eax
  HWND v4; // edi

  DlgItem = GetDlgItem(hDlg, 1745); /*0x46fb63*/
  result = GetDlgItem(hDlg, 1472); /*0x46fb6b*/
  v4 = result; /*0x46fb6f*/
  if ( DlgItem ) /*0x46fb71*/
  {
    if ( MEMORY[0xA8DA84] >= (int)MEMORY[0xA8D580] ) /*0x46fb80*/
    {
      if ( *((_BYTE *)&MEMORY[0x89E000] + MEMORY[0xA8DA8C]) ) /*0x46fba0*/
        return (HWND)EnableWindow(DlgItem, 0); /*0x46fbad*/
      else
        return (HWND)EnableWindow(DlgItem, 1); /*0x46fbba*/
    }
    else
    {
      result = (HWND)EnableWindow(DlgItem, 0); /*0x46fb8b*/
      if ( v4 ) /*0x46fb8f*/
        return (HWND)EnableWindow(v4, 1); /*0x46fb94*/
    }
  }
  return result; /*0x46fb96*/
}

