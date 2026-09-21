// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x004415F0  BuildingClass::ProcessDemolish  this=BuildingClass  sig=csp ====
int __thiscall FootClass::ProcessDemolish(#377 *this)
{
  int v2; // ebp
  AnimClass *v3; // edi
  BuildingTypeClass *v4; // ecx
  int v5; // edx
  int v6; // edi
  ObjectClass *v7; // ecx
  int v8; // eax
  BuildingTypeClass *v9; // eax
  char v10; // cl
  BuildingTypeClass *vfptr0; // edx
  int FoundationWidth; // eax
  int FoundationHeight; // eax
  int v14; // edi
  int v15; // eax
  BuildingTypeClass *v16; // eax
  int v17; // edi
  _WORD *v18; // edi
  _DWORD *v19; // ebp
  __int16 v20; // dx
  __int16 v21; // cx
  int v22; // edi
  int v23; // edi
  int *v24; // eax
  CoordStruct *v25; // ecx
  int v26; // edx
  TechnoTypeClass *v27; // eax
  void **v28; // ebp
  ScenarioClass *v29; // ebx
  int v30; // edi
  unsigned int v31; // eax
  int *v32; // ebx
  int *v33; // eax
  void **v34; // ebp
  int v35; // edi
  AnimClass *Index; // eax
  IUnknown *Positive; // edi
  int v38; // eax
  int *v39; // eax
  void *v40; // eax
  IUnknown *v42; // eax
  CoordStruct *v43; // edi
  void **ebp56; // ebp
  CoordStruct *v44; // eax
  CoordStruct *v46; // edi
  const char *eax60; // eax
  BuildingTypeClass *v48; // edx
  int i; // ebx
  _DWORD *v49; // edi
  int v50; // eax
  int v51; // eax
  int v52; // ebp
  int v53; // ebx
  ParticleSystemClass *v55; // edi
  int ecx75; // ecx
  char *v56; // edx
  int v57; // eax
  ParticleSystemClass *v59; // eax
  CCINIClass *result; // eax
  int v60; // [esp+4h] [ebp-68h]
  CoordStruct *v62; // [esp+18h] [ebp-54h] BYREF
  int var54_4; // [esp+1Ch] [ebp-50h]
  int v63; // [esp+20h] [ebp-4Ch]
  CoordStruct aP2; // [esp+24h] [ebp-48h] BYREF
  int v65; // [esp+30h] [ebp-3Ch]
  int v66; // [esp+34h] [ebp-38h]
  CoordStruct *v70; // [esp+38h] [ebp-34h]
  int v68[3]; // [esp+3Ch] [ebp-30h] BYREF
  int a0; // [esp+48h] [ebp-24h] BYREF
  int var20; // [esp+4Ch] [ebp-20h]
  void **v71; // [esp+54h] [ebp-18h] BYREF
  void *Block; // [esp+58h] [ebp-14h]
  int v73; // [esp+5Ch] [ebp-10h]
  char v74; // [esp+61h] [ebp-Bh]
  int v75; // [esp+64h] [ebp-8h]
  int v76; // [esp+68h] [ebp-4h]
  AbstractClass *aP1; // [esp+74h] [ebp+8h]
  char v78; // [esp+78h] [ebp+Ch]
  _WORD *v79; // [esp+7Ch] [ebp+10h]

  v2 = 8; /*0x4415f9*/
  v3 = (AnimClass *)&CONTAINING_RECORD(this, AnimClass, __pad_C)->__pad_41C[440]; /*0x4415fe*/
  do /*0x44161a*/
  {
    if ( v3->field_0 ) /*0x441604*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v3->field_0 + 248))(v3->field_0); /*0x44160e*/
      v3->field_0 = 0; /*0x441614*/
    }
    v3 = (AnimClass *)((char *)v3 + 4); /*0x441616*/
    --v2; /*0x441619*/
  }
  while ( v2 ); /*0x44161a*/
  if ( this->hasParachute ) /*0x44161c*/
  {
    v4 = (BuildingTypeClass *)this->gattlingValue; /*0x441624*/
    this->hasParachute = 0; /*0x44162a*/
    if ( v4->? ) /*0x441630*/
    {
      *(_DWORD *)(this->focus + 21732) = 0; /*0x441640*/
      v5 = 0; /*0x44164c*/
      v6 = *(_DWORD *)(this->focus + 120); /*0x44164e*/
      if ( v6 > 0 ) /*0x441653*/
      {
        do /*0x441694*/
        {
          v7 = (ObjectClass *)this->focus; /*0x441655*/
          v8 = *(_DWORD *)(v7->health + 4 * v5); /*0x44165e*/
          if ( v8 && !*(_BYTE *)(v8 + 129) && *(_BYTE *)(*(_DWORD *)(v8 + 1312) + 5796) ) /*0x441674*/
            v7[126].ambientSoundController[0] |= *(_DWORD *)(v8 + 528); /*0x44168b*/
          ++v5; /*0x441691*/
        }
        while ( v5 < v6 ); /*0x441694*/
      }
      MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 2); /*0x44169d*/
    }
  }
  v9 = (BuildingTypeClass *)this->gattlingValue; /*0x4416a2*/
  if ( v9->CloakGenerator ) /*0x4416a8*/
  {
    v10 = this->CloakRadius; /*0x4416b2*/
    this->HasCloakingData = -1; /*0x4416b8*/
    if ( !v10 ) /*0x4416c1*/
      this->CloakRadius = v9->CloakRadiusInCells; /*0x4416c9*/
    vfptr0 = *(BuildingTypeClass **)this; /*0x4416cf*/
    this->needsRedraw = 1; /*0x4416d5*/
    this->CloakRadius = 1; /*0x4416dc*/
    (*(void (__thiscall **)(#377 *, int))&vfptr0->DebrisTypes[252])(this, 1); /*0x4416e3*/
  }
  if ( *(_BYTE *)(this->gattlingValue + 5822) ) /*0x4416ef*/
    BuildingClass::DemolishBridgeCheck((int *)this, 1); /*0x4416fd*/
  if ( *(_BYTE *)(this->gattlingValue + 1518) && !(unsigned __int8)House::IsHumanPlayer(*((#375 **)this + 135)) ) /*0x441718*/
    (*(void (__thiscall **)(#377 *, _DWORD, _DWORD, int, int))(*(_DWORD *)this + 1164))( /*0x44172f*/
      this,
      0,
      0,
      1,
      HouseClass_Player.field_0);
  if ( !*(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 1312) ) /*0x44173f*/
  {
    v62 = (CoordStruct *)this->q027; /*0x441757*/
    var54_4 = this->owningHouseIndex; /*0x441764*/
    v63 = this->q029; /*0x44176f*/
    PlayAudioAt2(*(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1768), &v62, 0); /*0x441779*/
  }
  if ( BuildingTypeClass::GetFoundationWidth(*((_DWORD **)this + 328)) >= 2 /*0x4417a1*/
    && BuildingTypeClass::GetFoundationHeight(this->gattlingValue, 0) >= 2 )
  {
    if ( BuildingTypeClass::GetFoundationWidth(*((_DWORD **)this + 328)) > 2 ) /*0x4417b5*/
    {
      FoundationWidth = BuildingTypeClass::GetFoundationWidth(*((_DWORD **)this + 328)); /*0x4417bd*/
      Random::Range( /*0x4417d3*/
        (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
        0,
        (IUnknown *)(FoundationWidth - 2));
    }
    if ( BuildingTypeClass::GetFoundationHeight(this->gattlingValue, 0) > 2 ) /*0x4417e7*/
    {
      FoundationHeight = BuildingTypeClass::GetFoundationHeight(this->gattlingValue, 0); /*0x4417f0*/
      Random::Range( /*0x441805*/
        (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
        0,
        (IUnknown *)(FoundationHeight - 2));
    }
    if ( Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)0x63) >= 50 ) /*0x441821*/
    {
      v63 = 0; /*0x441892*/
      v16 = (BuildingTypeClass *)this->q027; /*0x441896*/
      v17 = this->owningHouseIndex; /*0x441898*/
      v70 = (CoordStruct *)this->q029; /*0x44189e*/
      v62 = (CoordStruct *)(((__int16)((int)v16 / 256) << 8) + 128); /*0x4418d6*/
      var54_4 = ((__int16)(v17 / 256) << 8) + 128; /*0x4418da*/
      TimedCreateUnitAtCoords(&v62, (IUnknown *)0x64, 100, 1); /*0x4418e7*/
    }
    else
    {
      v63 = 0; /*0x44182d*/
      v14 = this->owningHouseIndex; /*0x441833*/
      v15 = this->q027; /*0x441839*/
      v70 = (CoordStruct *)this->q029; /*0x441840*/
      v62 = (CoordStruct *)(((__int16)(v15 / 256) << 8) + 128); /*0x44186f*/
      var54_4 = ((__int16)(v14 / 256) << 8) + 128; /*0x44187d*/
      StandardCreateUnitAtCoords(&v62, (IUnknown *)0x64, 100, 1); /*0x441881*/
    }
  }
  while ( *v79 != 0x7FFF || v79[1] != 0x7FFF ) /*0x4418fd*/
  {
    v18 = v79; /*0x441903*/
    v79 += 2; /*0x44190c*/
    v19 = (_DWORD *)(*(int (__thiscall **)(#377 *, int *))(this->currentMission)(this, v68); /*0x44191b*/
    v20 = v19[1] / 256 + v18[1]; /*0x44193e*/
    v21 = *v18 + *v19 / 256; /*0x44194a*/
    if ( *(int *)(this->gattlingValue + 1852) > 0 ) /*0x441955*/
    {
      v65 = this->q027; /*0x441972*/
      v22 = this->owningHouseIndex; /*0x441976*/
      v62 = (CoordStruct *)((v21 << 8) + 128); /*0x44197f*/
      var54_4 = (v20 << 8) + 128; /*0x441983*/
      v66 = v22; /*0x441987*/
      v23 = this->q029; /*0x44198b*/
      v63 = 0; /*0x441998*/
      v24 = RandomCoordScatter(&a0, (IUnknown *)&v62, 64, 0); /*0x44199c*/
      v25 = (CoordStruct *)*v24; /*0x4419a1*/
      v26 = v24[1]; /*0x4419a3*/
      v27 = (TechnoTypeClass *)(v23 + v24[2]); /*0x4419ae*/
      aP2.X = (int)v25; /*0x4419b0*/
      aP2.Y = v26; /*0x4419b4*/
      aP2.Z = (int)v27; /*0x4419b8*/
      v28 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x4419c1*/
      if ( v28 ) /*0x4419c8*/
      {
        v29 = (ScenarioClass *)Random::Range( /*0x4419f3*/
                                 (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                                 0,
                                 (IUnknown *)3);
        v30 = this->gattlingValue + 1836; /*0x4419f5*/
        v31 = Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536)); /*0x4419fb*/
        AnimClass::ctor( /*0x441a1f*/
          v28,
          *(CoordStruct **)(*(_DWORD *)(v30 + 4) + 4 * (v31 % *(_DWORD *)(v30 + 16))),
          &aP2,
          (CoordStruct *)v29,
          (CoordStruct *)1,
          (void *)0x600,
          0,
          0);
      }
    }
  }
  if ( *(_BYTE *)(this->gattlingValue + 3349) ) /*0x441a31*/
  {
    v32 = (int *)&unk_818CB8; /*0x441a3f*/
    do /*0x441b28*/
    {
      aP2.X = this->q027; /*0x441a50*/
      v60 = *v32; /*0x441a59*/
      aP2.Y = this->owningHouseIndex; /*0x441a5a*/
      aP2.Z = this->q029; /*0x441a69*/
      v33 = globalHelper_09F550(&a0, &aP2, v60); /*0x441a6d*/
      v62 = (CoordStruct *)*v33; /*0x441a74*/
      var54_4 = v33[1]; /*0x441a7b*/
      v63 = v33[2]; /*0x441a8c*/
      if ( *((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v62) + 17) != -1 ) /*0x441a99*/
      {
        if ( *(_BYTE *)(*(_DWORD *)(HouseClass_Player.field_38 /*0x441aba*/
                                  + 4
                                  * *((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v62) + 17))
                      + 688) )
        {
          v34 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x441ace*/
          if ( v34 ) /*0x441ad5*/
          {
            v35 = Random::Range( /*0x441af1*/
                    (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                    (IUnknown *)1,
                    (IUnknown *)3);
            Index = (AnimClass *)AnimTypeClass::FindIndex(aFire3); /*0x441af3*/
            AnimClass::ctor( /*0x441b1a*/
              v34,
              *(CoordStruct **)(*(_DWORD *)&stru_89E138.__pad_1600D[15] + 4 * (_DWORD)Index),
              (CoordStruct *)&v62,
              (CoordStruct *)(v35 + 3),
              (CoordStruct *)1,
              (void *)0x600,
              0,
              0);
          }
        }
      }
      ++v32; /*0x441b1f*/
    }
    while ( (int)v32 < (int)dword_818CC8 ); /*0x441b28*/
  }
  while ( Float4::Sum((float *)this + 207) >= 1.0 ) /*0x441b48*/
  {
    Positive = (IUnknown *)FirstFloatPositive((float *)this + 207); /*0x441b5b*/
    Float::SubtractClamped((float *)this + 207, (BuildingTypeClass *)0x3F800000, Positive); /*0x441b65*/
    Float::SubtractClamped((float *)(this->focus + 764), (BuildingTypeClass *)0x3F800000, Positive); /*0x441b7e*/
    v38 = Random::Range( /*0x441b9a*/
            (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
            (IUnknown *)0x100,
            (IUnknown *)0x300);
    aP2 = *(CoordStruct *)((_BYTE *)this + 13); /*0x441ba6*/
    v39 = RandomCoordScatter(&a0, (IUnknown *)&aP2, v38, (ScenarioClass *)1); /*0x441bc0*/
    v62 = (CoordStruct *)*v39; /*0x441bc9*/
    var54_4 = v39[1]; /*0x441bd1*/
    v63 = v39[2]; /*0x441be2*/
    v40 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v62); /*0x441be6*/
    Crate::FindPlacement((int)v40, Positive, 1); /*0x441bed*/
  }
  if ( (*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 328) + 132))( /*0x441c30*/
         this->gattlingValue,
         this->focus)
     / *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1480) > 0 )
    nullsub_51(); /*0x441c34*/
  if ( (*(int (__thiscall **)(#377 *))(this->q184)(this) == 19 || *(_BYTE *)(this->gattlingValue + 3349) ) /*0x441c4e*/
  {
    this->C4Timer = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x441c83*/
    this->q52C = var20; /*0x441c89*/
    this->ammoReloadTimer = 0; /*0x441c8c*/
    v42 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248]; /*0x441c8f*/
    this->behindAnim = 0; /*0x441c9a*/
    this->q040 = v42; /*0x441ca0*/
    this->currentTurretNumber = var20; /*0x441ca6*/
    this->secondaryTurretIndex = 0; /*0x441ca9*/
  }
  else
  {
    this->C4Timer = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x441c68*/
    this->q52C = var20; /*0x441c6e*/
    this->ammoReloadTimer = 8; /*0x441c71*/
  }
  if ( *(int *)(this->gattlingValue + 1880) > 0 ) /*0x441cb8*/
  {
    v43 = *(CoordStruct **)(*(_DWORD *)(this->gattlingValue + 1868) /*0x441ce3*/
                          + 4
                          * ((unsigned int)Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536))
                           % *(_DWORD *)(this->gattlingValue + 1880)));
    if ( v43 ) /*0x441ce8*/
    {
      ebp56 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x441cf4*/
      if ( ebp56 ) /*0x441cfb*/
      {
        v44 = (CoordStruct *)(*(int (__thiscall **)(#377 *, int *))(this->currentMission)(this, &a0); /*0x441d10*/
        v46 = (CoordStruct *)AnimClass::ctor(ebp56, v43, v44, 0, (CoordStruct *)1, (void *)0x600, 0, 0); /*0x441d1f*/
      }
      else
      {
        v46 = 0; /*0x441d23*/
      }
      if ( *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3568) ) /*0x441d2f*/
      {
        v46[17].Z = (*(int (__thiscall **)(#377 *))(this->infantryBlinkTimer)(this); /*0x441d41*/
        eax60 = (const char *)(this->gattlingValue + 3536); /*0x441d4d*/
        if ( *eax60 ) /*0x441d52*/
          strncpy((char *)&v46[18].Y, eax60, (IUnknown *)0x20); /*0x441d61*/
      }
    }
  }
  VectorClass::ConstructorWithVtable(&v71, 0, 0); /*0x441d6f*/
  v48 = *(BuildingTypeClass **)this; /*0x441d74*/
  v71 = &vt_DynamicVectorClass_ParticleSystemTypeClass_const; /*0x441d78*/
  v76 = 10; /*0x441d80*/
  v75 = 0; /*0x441d88*/
  for ( i = *(_DWORD *)((*(int (__thiscall **)(#377 *))&v48->Name[32])(this) + 1956) - 1; i >= 0; --i ) /*0x441d9e*/
  {
    if ( !*(_DWORD *)(*(_DWORD *)(*(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 1944) /*0x441dc3*/
                                + 4 * i)
                    + 692) )
    {
      v49 = (_DWORD *)(4 * i + *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 1944)); /*0x441de6*/
      if ( v75 < v73 /*0x441e11*/
        || (v74 || !v73)
        && v76 > 0
        && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v71[2])(&v71, v76 + v73, 0) )
      {
        v50 = v75++; /*0x441e20*/
        *((_DWORD *)Block + v50) = *v49; /*0x441e29*/
      }
    }
  }
  if ( !this->missionTimer && v75 > 0 && (*(int (__thiscall **)(#377 *))(this->forceShielded)(this) > -10 ) /*0x441e5a*/
  {
    v51 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x441e64*/
    v52 = *(_DWORD *)(v51 + 1984); /*0x441e6a*/
    v53 = *(_DWORD *)(v51 + 1988); /*0x441e70*/
    v70 = *(CoordStruct **)(v51 + 1992); /*0x441e83*/
    v55 = (ParticleSystemClass *)__2_YAPAXI_Z(0x100u); /*0x441e8c*/
    if ( v55 ) /*0x441e93*/
    {
      ecx75 = this->owningHouseIndex; /*0x441ea1*/
      aP2.X = v52 + this->q027; /*0x441ea4*/
      v56 = (char *)v70 + this->q029; /*0x441eb5*/
      aP2.Y = v53 + ecx75; /*0x441eb7*/
      aP2.Z = (int)v56; /*0x441ecb*/
      v57 = Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)(v75 - 1)); /*0x441ecf*/
      v59 = ParticleSystemClass::Constructor( /*0x441eed*/
              (int)v55,
              *((IUnknown **)Block + v57),
              (IUnknown *)&aP2,
              0,
              (IUnknown *)this,
              &aP5,
              0);
    }
    else
    {
      v59 = 0; /*0x441ef4*/
    }
    this->missionTimer = v59; /*0x441ef6*/
  }
  this->health = 0; /*0x441f00*/
  if ( v78 ) /*0x441f09*/
    this->NoCrew = 1; /*0x441f0b*/
  BuildingClass::EjectCrew((int *)this, *((TechnoClass **)this + 336)); /*0x441f1b*/
  TechnoClass::CleanupAll(this, aP1); /*0x441f27*/
  result = (CCINIClass *)Block; /*0x441f2c*/
  v71 = &vt_VectorClass_ParticleSystemTypeClass_const; /*0x441f35*/
  if ( Block && v74 ) /*0x441f46*/
    __3_YAXPAX_Z(Block); /*0x441f49*/
  return (int)result->__pad_0; /*0x441f30*/
}


// ==== 0x00441F60  BuildingClass::AfterDestruction  this=IUnknown  sig=csp ====
char __thiscall TriggerBuildingDestruction(_DWORD *this)
{
  _DWORD *v1; // ebx
  _WORD *v2; // ebp
  _DWORD *v3; // eax
  _WORD *v4; // eax
  __int16 v5; // dx
  __int16 *v6; // esi
  _DWORD *v7; // edi
  int *PlacementRectBuildingClass; // esi
  int *StartCoordsHouse; // eax
  int v10; // ecx
  int v11; // edi
  int v12; // edx
  int v13; // ebp
  int v14; // eax
  int v15; // esi
  int v16; // edi
  int *v17; // eax
  void *v18; // eax
  char result; // al
  _DWORD *v20; // eax
  int v21; // edx
  int v22; // [esp+10h] [ebp-40h] BYREF
  int v23; // [esp+14h] [ebp-3Ch]
  int v24; // [esp+18h] [ebp-38h] BYREF
  int v25; // [esp+1Ch] [ebp-34h]
  _DWORD v26[2]; // [esp+20h] [ebp-30h] BYREF
  char v27[4]; // [esp+28h] [ebp-28h] BYREF
  char v28[4]; // [esp+2Ch] [ebp-24h] BYREF
  int v29[4]; // [esp+30h] [ebp-20h] BYREF
  _DWORD v30[4]; // [esp+40h] [ebp-10h] BYREF

  v1 = this; /*0x441f65*/
  v26[0] = this; /*0x441f79*/
  if ( (unsigned __int8)((_DWORD (__stdcall *)(char *, char *))BuildingClass::GetPlacementCoords)(v28, v27) ) /*0x441f7d*/
  {
    v2 = (_WORD *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*v1 + 264))(v1, 0); /*0x441f9a*/
    v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v1 + 172))(v1, v29); /*0x441fa1*/
    LOWORD(v23) = *v3 / 256; /*0x441fb7*/
    HIWORD(v23) = v3[1] / 256; /*0x441fcb*/
    v22 = v23; /*0x441fd4*/
    while ( *v2 != 0x7FFF || v2[1] != 0x7FFF ) /*0x441fe6*/
    {
      v4 = v2; /*0x441fe8*/
      v2 += 2; /*0x441fea*/
      v5 = HIWORD(v22) + v4[1]; /*0x441ff9*/
      LOWORD(v23) = v22 + *v4; /*0x441ffe*/
      HIWORD(v23) = v5; /*0x442007*/
      v24 = v23; /*0x442016*/
      v6 = (__int16 *)CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v24); /*0x44201f*/
      BuildingClass::CreatePlacementCrater(v6); /*0x442023*/
      *((_DWORD *)v6 + 17) = 239; /*0x44202c*/
      *((_DWORD *)v6 + 16) = 0; /*0x442033*/
      House::AnnounceUpgrade((int)v6, -1); /*0x44203a*/
      Cell::SetRadar(MEMORY[0x87F7E8], v6 + 18); /*0x442048*/
      Radar::Update(MEMORY[0x87F7E8], v6 + 18); /*0x442053*/
      ((void (__thiscall *)(__int16 *))AbstractClass::ClearTargetToMeClearManagerTarget)(v6); /*0x44205a*/
    }
    v7 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v22); /*0x442077*/
    v7[16] = v1[328]; /*0x442082*/
    PlacementRectBuildingClass = BuildingClass::GetPlacementRect((int)v7, v29); /*0x442091*/
    StartCoordsHouse = House::GetStartCoords((int)v7, v30); /*0x442093*/
    if ( StartCoordsHouse[2] <= 0 || StartCoordsHouse[3] <= 0 ) /*0x4420a8*/
    {
      v10 = *PlacementRectBuildingClass; /*0x44212e*/
      v12 = PlacementRectBuildingClass[1]; /*0x442130*/
      v16 = PlacementRectBuildingClass[2]; /*0x442133*/
      v14 = PlacementRectBuildingClass[3]; /*0x442136*/
    }
    else
    {
      v23 = PlacementRectBuildingClass[2]; /*0x4420b3*/
      if ( v23 <= 0 || (v25 = PlacementRectBuildingClass[3], v25 <= 0) ) /*0x4420c2*/
      {
        v10 = *StartCoordsHouse; /*0x442121*/
        v12 = StartCoordsHouse[1]; /*0x442123*/
        v16 = StartCoordsHouse[2]; /*0x442126*/
        v14 = StartCoordsHouse[3]; /*0x442129*/
      }
      else
      {
        v10 = *StartCoordsHouse; /*0x4420c4*/
        v11 = *PlacementRectBuildingClass; /*0x4420c6*/
        v12 = StartCoordsHouse[1]; /*0x4420c8*/
        v13 = StartCoordsHouse[2]; /*0x4420cb*/
        v14 = StartCoordsHouse[3]; /*0x4420ce*/
        if ( v10 > *PlacementRectBuildingClass ) /*0x4420d3*/
        {
          v13 += v10 - v11; /*0x4420d7*/
          v10 = *PlacementRectBuildingClass; /*0x4420d9*/
        }
        v15 = PlacementRectBuildingClass[1]; /*0x4420db*/
        v24 = v15; /*0x4420e0*/
        if ( v12 > v15 ) /*0x4420e4*/
        {
          v14 += v12 - v15; /*0x4420e8*/
          v12 = v15; /*0x4420ea*/
        }
        if ( v10 + v13 < v11 + v23 ) /*0x4420f7*/
          v13 = v11 - v10 + v23 + 1; /*0x4420ff*/
        if ( v14 + v12 < v25 + v24 ) /*0x442112*/
          v14 = v25 + v24 - v12 + 1; /*0x442117*/
        v1 = (_DWORD *)v26[0]; /*0x442119*/
        v16 = v13; /*0x44211d*/
      }
    }
    v26[0] = v10 - MEMORY[0x87F7E8][7662]; /*0x442150*/
    v26[1] = v12 - MEMORY[0x87F7E8][7663]; /*0x44215a*/
    v17 = Rect::Construct(v30, v26, v16, v14); /*0x44215e*/
    Cell::CreateCrater(*v17, v17[1], v17[2], v17[3], 0); /*0x442184*/
    v18 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v22); /*0x442193*/
    Tactical::AddCellToDrawList(MEMORY[0x87F7E8][7887], (int)v18); /*0x44219f*/
  }
  result = *(_BYTE *)(v1[328] + 5991); /*0x4421aa*/
  if ( result ) /*0x4421b2*/
  {
    v20 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v1 + 172))(v1, v29); /*0x4421bd*/
    LOWORD(v22) = *v20 / 256; /*0x4421d3*/
    v21 = v1[328]; /*0x4421e4*/
    HIWORD(v22) = v20[1] / 256; /*0x4421ed*/
    if ( *(_BYTE *)(v21 + 5993) ) /*0x4421f2*/
      return BuildingClass::SearchPlacement(MEMORY[0x87F7E8], v22, 0); /*0x442208*/
    else
      return BuildingClass::SearchPlacement(MEMORY[0x87F7E8], v22, 20); /*0x442221*/
  }
  return result; /*0x44220d*/
}


// ==== 0x00442230  BuildingClass::ProcessAttack  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ProcessAttack(#377 *this)
{
  IUnknown *v1; // ebp
  BuildingClass *v3; // ebx
  int v4; // eax
  int Member; // edi
  int v6; // eax
  BuildingTypeClass *v7; // eax
  int v9; // edi
  char v10; // al
  void *v11; // eax
  int v12; // eax
  _DWORD *v13; // ecx
  int v14; // ebx
  _DWORD *v15; // edi
  _DWORD *v16; // ebp
  _DWORD *v17; // eax
  IUnknown *v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // edx
  int edi53; // edi
  LightSourceClass *v22; // ecx
  TimerStruct *v23; // ecx
  int v25; // eax
  int v26; // eax
  int v27; // edi
  BuildingTypeClass *vfptr0; // edx
  _WORD *v29; // eax
  IUnknown *FoundationHeight; // edi
  int FoundationWidth; // eax
  void **v32; // ebp
  int v33; // eax
  CoordStruct **v34; // edi
  AnimClass *v35; // eax
  void **v36; // ebp
  CoordStruct **v37; // edi
  void **v38; // ebp
  CoordStruct **v39; // edi
  char v40; // al
  unsigned __int16 v41; // dx
  int v42; // eax
  double HealthRatio; // st7
  int v44; // edx
  BOOL v45; // ebx
  IUnknown *v46; // ebp
  int v47; // edi
  _BYTE *v48; // eax
  int v49; // eax
  BOOL ebx114; // ebx
  AnimClass *v50; // edx
  IUnknown *v52; // ebp
  int v53; // edi
  char *v54; // eax
  CoordStruct *v55; // [esp+14h] [ebp-B4h]
  CoordStruct *v56; // [esp+14h] [ebp-B4h]
  CoordStruct *v57; // [esp+14h] [ebp-B4h]
  CoordStruct *v58; // [esp+1Ch] [ebp-ACh]
  CoordStruct *v59; // [esp+1Ch] [ebp-ACh]
  DirStruct desiredFacing; // [esp+3Ch] [ebp-8Ch] BYREF
  void **v61; // [esp+40h] [ebp-88h] BYREF
  void *Block; // [esp+44h] [ebp-84h]
  int v63; // [esp+48h] [ebp-80h]
  int v64; // [esp+4Ch] [ebp-7Ch]
  int v65; // [esp+50h] [ebp-78h]
  int v66; // [esp+54h] [ebp-74h]
  int v67; // [esp+58h] [ebp-70h] BYREF
  int v68; // [esp+5Ch] [ebp-6Ch]
  int v69; // [esp+60h] [ebp-68h] BYREF
  int v70; // [esp+64h] [ebp-64h]
  int GroundHeight; // [esp+68h] [ebp-60h]
  int ProductionFrame; // [esp+6Ch] [ebp-5Ch]
  _DWORD a1[3]; // [esp+70h] [ebp-58h] BYREF
  char v74[4]; // [esp+7Ch] [ebp-4Ch] BYREF
  int a0[3]; // [esp+80h] [ebp-48h] BYREF
  int v76[3]; // [esp+8Ch] [ebp-3Ch] BYREF
  int v77[3]; // [esp+98h] [ebp-30h] BYREF
  int v78[3]; // [esp+A4h] [ebp-24h] BYREF
  char v79[12]; // [esp+B0h] [ebp-18h] BYREF
  char v80[12]; // [esp+BCh] [ebp-Ch] BYREF
  FootClass *aP2; // [esp+CCh] [ebp+4h]
  FootClass *aP3; // [esp+D0h] [ebp+8h]
  TechnoClass *aP4; // [esp+D4h] [ebp+Ch]
  IUnknown *aP1; // [esp+D8h] [ebp+10h]
  int v85; // [esp+DCh] [ebp+14h]
  __int64 other; // [esp+E0h] [ebp+18h]

  v1 = aP1; /*0x442238*/
  v68 = 0; /*0x442245*/
  if ( this == (#377 *)aP1 && !*(_BYTE *)((*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 132))(aP1) + 3232) ) /*0x442262*/
    return v68; /*0x442c06*/
  BuildingClass::GetHealthRatio((int *)this); /*0x44226a*/
  v3 = 0; /*0x442278*/
  ProductionFrame = BuildingClass::GetProductionFrame((int *)this); /*0x44227a*/
  if ( aP1 && !(*(unsigned __int8 (__thiscall **)(#377 *))(this->needsRedraw)(this) ) /*0x442286*/
  {
    *(_DWORD *)(this->focus + 21720) = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x44229c*/
    *(_DWORD *)(this->focus + 21724) = *(_DWORD *)((*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 60))(aP1) /*0x4422b4*/
                                                             + 48);
    TechnoClass::EvaluateMission(this, (TechnoClass *)aP1); /*0x4422bc*/
  }
  desiredFacing = (DirStruct)(*(int (__thiscall **)(#377 *, _DWORD))(this->secondaryTurretIndex)(this, 0); /*0x4422d2*/
  EventClass::resetEvent(&v61, 0, 0); /*0x4422d6*/
  v4 = this->q0E8; /*0x4422db*/
  v61 = &vt_DynamicVectorClass_TechnoClass; /*0x4422e1*/
  v66 = 10; /*0x4422eb*/
  v65 = 0; /*0x4422f3*/
  if ( v4 > 0 ) /*0x4422f7*/
  {
    do /*0x442356*/
    {
      Member = Team::GetMember(this, (AbstractClass *)v3); /*0x442301*/
      if ( Member /*0x442334*/
        && (v65 < v63
         || (BYTE1(v64) || !v63)
         && v66 > 0
         && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v61[2])(&v61, v66 + v63, 0)) )
      {
        v6 = v65++; /*0x44233f*/
        *((_DWORD *)Block + v6) = Member; /*0x44234a*/
      }
      v3 = (BuildingClass *)((char *)v3 + 1); /*0x442353*/
    }
    while ( (int)v3 < this->q0E8 ); /*0x442356*/
  }
  v7 = (BuildingTypeClass *)this->gattlingValue; /*0x442358*/
  if ( v7->LaserFence && !(_BYTE)v85 ) /*0x442371*/
  {
    v61 = &vt_VectorClass_TechnoClass; /*0x442377*/
    if ( Block && BYTE1(v64) ) /*0x442389*/
    {
      __3_YAXPAX_Z(Block); /*0x44238c*/
      return 0; /*0x4423a0*/
    }
    return 0; /*0x442389*/
  }
  if ( v7->BridgeRepairHut && v7->Immune ) /*0x4423ad*/
  {
    v61 = &vt_VectorClass_TechnoClass; /*0x4423bb*/
    if ( Block && BYTE1(v64) ) /*0x4423cd*/
      __3_YAXPAX_Z(Block); /*0x4423d0*/
    return 0; /*0x4423e4*/
  }
  if ( this->health ) /*0x4423e7*/
  {
    v9 = TechnoClass::ReceiveDamage_Shield(this, (int)aP3, aP2, aP3, aP4, (TechnoClass *)aP1, v85, other); /*0x44242a*/
    v10 = this->isAliveFlag; /*0x44242c*/
    v68 = v9; /*0x442434*/
    if ( !v10 ) /*0x442438*/
    {
      v61 = &vt_VectorClass_TechnoClass; /*0x44243e*/
      if ( Block && BYTE1(v64) ) /*0x442450*/
        __3_YAXPAX_Z(Block); /*0x442453*/
      return v9; /*0x442467*/
    }
    switch ( v9 ) /*0x442476*/
    {
      case 2: /*0x442476*/
        v26 = this->diskLaserChargeState; /*0x4426ac*/
        if ( v26 ) /*0x4426b4*/
          *(float *)(v26 + 232) = *(float *)(v26 + 232) * 1.5; /*0x4426c2*/
        goto LABEL_64; /*0x4426c2*/
      case 3: /*0x442476*/
LABEL_64:
        if ( *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 1336) == -1 ) /*0x4426d9*/
        {
          a1[0] = this->q027; /*0x4426e5*/
          a1[1] = this->owningHouseIndex; /*0x4426f0*/
          a1[2] = this->q029; /*0x4426fc*/
          PlayAudioAt2(*(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1812), a1, 0); /*0x442706*/
        }
        while ( *(_WORD *)desiredFacing.Value != 0x7FFF || *(_WORD *)(*(_DWORD *)&desiredFacing + 2) != 0x7FFF ) /*0x44271c*/
        {
          v27 = **(_DWORD **)&desiredFacing; /*0x442722*/
          vfptr0 = *(BuildingTypeClass **)this; /*0x442724*/
          *(_DWORD *)&desiredFacing += 4; /*0x44272b*/
          v67 = v27; /*0x442734*/
          v29 = (_WORD *)(*(int (__thiscall **)(#377 *, char *))&vfptr0->__pad_14D[107])(this, v74); /*0x442738*/
          LOWORD(v27) = *v29 + v27; /*0x44273e*/
          LOWORD(v29) = HIWORD(v67) + v29[1]; /*0x442745*/
          GroundHeight = 0; /*0x44274a*/
          v69 = ((__int16)v27 << 8) + 128; /*0x442768*/
          v70 = ((__int16)v29 << 8) + 128; /*0x442778*/
          GroundHeight = Cell::GetGroundHeight((IUnknown *)&v69); /*0x442781*/
          if ( BYTE2(aP4->gattlingValue) ) /*0x442785*/
          {
            FoundationHeight = (IUnknown *)BuildingTypeClass::GetFoundationHeight(this->gattlingValue, 0); /*0x4427a6*/
            FoundationWidth = BuildingTypeClass::GetFoundationWidth(*((_DWORD **)this + 328)); /*0x4427a8*/
            switch ( Random::Range( /*0x4427d7*/
                       (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                       0,
                       (IUnknown *)((char *)&FoundationHeight->field_4 + FoundationWidth + 1)) )
            {
              case 1: /*0x4427d7*/
              case 2: /*0x4427d7*/
              case 3: /*0x4427d7*/
              case 4: /*0x4427d7*/
              case 5: /*0x4427d7*/
                v32 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x4427e8*/
                if ( v32 ) /*0x4427ef*/
                {
                  v33 = Random::Range( /*0x442804*/
                          (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                          (IUnknown *)1,
                          (IUnknown *)3);
                  v34 = *(CoordStruct ***)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2936); /*0x442818*/
                  v58 = (CoordStruct *)v33; /*0x44281e*/
                  v55 = (CoordStruct *)RandomCoordScatter(a0, (IUnknown *)&v69, 96, 0); /*0x442834*/
                  v35 = AnimClass::ctor(v32, *v34, v55, 0, v58, (void *)0x600, 0, 0); /*0x442836*/
                  goto LABEL_76; /*0x442836*/
                }
                break; /*0x442836*/
              case 6: /*0x4427d7*/
              case 7: /*0x4427d7*/
              case 8: /*0x4427d7*/
                v36 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x442845*/
                if ( v36 ) /*0x44284c*/
                {
                  v59 = (CoordStruct *)Random::Range( /*0x44287b*/
                                         (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                                         (IUnknown *)1,
                                         (IUnknown *)3);
                  v37 = (CoordStruct **)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2936) + 4); /*0x44288a*/
                  v56 = (CoordStruct *)RandomCoordScatter(v76, (IUnknown *)&v69, 96, 0); /*0x442894*/
                  v35 = AnimClass::ctor(v36, *v37, v56, 0, v59, (void *)0x600, 0, 0); /*0x442896*/
                  goto LABEL_76; /*0x442896*/
                }
                break; /*0x442896*/
              case 9: /*0x4427d7*/
                v38 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x4428a2*/
                if ( v38 ) /*0x4428a9*/
                {
                  v39 = (CoordStruct **)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2936) + 8); /*0x4428d6*/
                  v57 = (CoordStruct *)RandomCoordScatter(v78, (IUnknown *)&v69, 96, 0); /*0x4428e0*/
                  v35 = AnimClass::ctor(v38, *v39, v57, 0, (CoordStruct *)1, (void *)0x600, 0, 0); /*0x4428e4*/
LABEL_76:
                  if ( v35 ) /*0x4428eb*/
                    BuildingClass::AimTurret(v35, (IUnknown *)this); /*0x4428f4*/
                }
                break; /*0x4428f9*/
              default:
                continue;
            }
          }
        }
        v1 = aP1; /*0x4428fe*/
        break; /*0x4428fe*/
      case 4: /*0x442476*/
        if ( this->alignmentPaddingB9 ) /*0x4424a2*/
        {
          v12 = ((int (__thiscall *)(void ***, char *))v61[4])(&v61, (char *)this + 740); /*0x4424bb*/
          if ( v12 != -1 && v12 < v65 && v12 < --v65 ) /*0x4424d2*/
          {
            do /*0x4424e6*/
            {
              ++v12; /*0x4424d8*/
              *((_DWORD *)Block + v12 - 1) = *((_DWORD *)Block + v12); /*0x4424dc*/
            }
            while ( v12 < v65 ); /*0x4424e6*/
          }
          BuildingClass::RemoveLimpet(this); /*0x4424ea*/
        }
        v13 = (_DWORD *)this->rockerLinkedUnit; /*0x4424ef*/
        if ( v13 ) /*0x4424f7*/
          CaptureManager::FreeAll(v13); /*0x4424f9*/
        if ( this->isBerserk ) /*0x4424fe*/
          TechnoClass::EjectPassengers((int *)this, 1); /*0x44250c*/
        v14 = 0; /*0x442515*/
        if ( v65 > 0 ) /*0x442519*/
        {
          do /*0x4425fb*/
          {
            v15 = (_DWORD *)*((_DWORD *)Block + v14); /*0x442523*/
            v16 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v15 + 72))(v15, v79); /*0x442537*/
            v17 = (_DWORD *)(*(int (__thiscall **)(#377 *, char *))(this->q048)(this, v80); /*0x442543*/
            v18 = Coord::Subtract( /*0x442564*/
                    v77,
                    (IUnknown *)(*v17 - *v16),
                    (IUnknown *)(v17[1] - v16[1]),
                    (IUnknown *)(v17[2] - v16[2]));
            v69 = v18->field_0; /*0x44256b*/
            v70 = v18->field_4; /*0x442576*/
            GroundHeight = v18->field_8; /*0x44257d*/
            Coord::Length(&v69); /*0x442581*/
            if ( v19 < 256 || *(_BYTE *)(this->gattlingValue + 5835) ) /*0x442593*/
            {
              v20 = (*(int (__thiscall **)(_DWORD *))(*v15 + 132))(v15); /*0x4425ba*/
              v21 = *v15; /*0x4425c6*/
              v67 = 10 * *(_DWORD *)(v20 + 160); /*0x4425d6*/
              (*(void (__thiscall **)(_DWORD *, int *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(v21 + 364))( /*0x4425ee*/
                v15,
                &v67,
                0,
                *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4008),
                0,
                1,
                1,
                0);
            }
            else
            {
              (*(void (__thiscall **)(#377 *, int, _DWORD *))(this->temporalTargetingMe)(this, 23, v15); /*0x4425a4*/
              v15[320] = 0; /*0x4425aa*/
            }
            ++v14; /*0x4425f8*/
          }
          while ( v14 < v65 ); /*0x4425fb*/
          v1 = aP1; /*0x442601*/
        }
        edi53 = v63; /*0x44260c*/
        ((void (__thiscall *)(void ***))v61[3])(&v61); /*0x442614*/
        ((void (__thiscall *)(void ***, int, _DWORD))v61[2])(&v61, edi53, 0); /*0x442622*/
        if ( *(_BYTE *)(this->gattlingValue + 5499) ) /*0x44262b*/
          BuildingClass::UnloadUnits((BuildingTypeClass **)this, 0, 0); /*0x44263b*/
        v22 = (LightSourceClass *)this->LightSource; /*0x442640*/
        if ( v22 ) /*0x442648*/
          MapClass::ScrollOnce((int)v22, 0); /*0x44264c*/
        (*(void (__thiscall **)(#377 *, _DWORD, IUnknown *, int, DirStruct))(*(_DWORD *)this + 1260))( /*0x442665*/
          this,
          0,
          v1,
          v85,
          desiredFacing);
        v23 = (TimerStruct *)this->C4Timer; /*0x44266b*/
        v25 = this->ammoReloadTimer; /*0x442671*/
        if ( v23 == (TimerStruct *)-1 ) /*0x44267a*/
          goto LABEL_60; /*0x44267a*/
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - (int)v23 < v25 ) /*0x442686*/
        {
          v25 -= *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - (_DWORD)v23; /*0x44268c*/
LABEL_60:
          if ( v25 > 0 ) /*0x442690*/
          {
            (*(void (__thiscall **)(#377 *))(this->q0F8)(this); /*0x44269a*/
            BuildingClass::AfterDestruction(this); /*0x4426a2*/
          }
        }
        break; /*0x4426a7*/
      case 5: /*0x442476*/
        v11 = Block; /*0x44247d*/
        v61 = &vt_VectorClass_TechnoClass; /*0x442481*/
        if ( Block && BYTE1(v64) ) /*0x442497*/
          goto LABEL_126; /*0x442497*/
        return v68; /*0x442497*/
      default:
        break;
    }
  }
  if ( this->isAliveFlag ) /*0x442905*/
  {
    if ( v1 ) /*0x442944*/
    {
      if ( !v68 ) /*0x442950*/
        goto LABEL_113; /*0x442950*/
      if ( !*(_BYTE *)(this->gattlingValue + 562) /*0x44296a*/
        && !(*(unsigned __int8 (__thiscall **)(#377 *))(this->needsRedraw)(this) )
      {
        HouseClass::NotifyUnderAttack(*((void **)this + 135), (BuildingClass *)this); /*0x44297b*/
      }
      this->OwnerCountryIndex = *(_DWORD *)((*(int (__thiscall **)(IUnknown *))(v1->field_0 + 60))(v1) + 48); /*0x44298b*/
      if ( this->currentMission != 19 /*0x4429fa*/
        && !Object::IsAlliedWithObjectHouse(*((_DWORD **)this + 135), v1)
        && *(_DWORD *)(*(int (__thiscall **)(#377 *, _DWORD))(this->barrelRecoil)(this, 0)
        && !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(#377 *, _DWORD))(this->barrelRecoil)(this, 0)
                                 + 160)
                     + 676)
        && (!this->q2B4
         || !(*(unsigned __int8 (__thiscall **)(#377 *, _DWORD))(*(_DWORD *)this + 940))(this, this->q2B4)) )
      {
        if ( (*(int (__thiscall **)(IUnknown *))(v1->field_0 + 44))(v1) == 2 /*0x442a2a*/
          || (unsigned __int8)House::IsCurrentPlayer(*((#375 **)this + 135))
          && !*(_BYTE *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6124) )
        {
          if ( !TimerClass::Active((int)this + 904) /*0x442a56*/
            && (*(unsigned __int8 (__thiscall **)(#377 *))(this->storedTiberium)(this) )
          {
            LOWORD(v67) = 0; /*0x442a66*/
            v40 = Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536)); /*0x442a73*/
            LOBYTE(v41) = 0; /*0x442a78*/
            HIBYTE(v41) = v40; /*0x442a7e*/
            v42 = v67; /*0x442a80*/
            BYTE1(v42) = 0; /*0x442a84*/
            desiredFacing = (DirStruct)(v42 | v41); /*0x442a8c*/
            FacingClass::Update((FacingClass *)((char *)this + 904), &desiredFacing); /*0x442a90*/
          }
        }
        else
        {
          (*(void (__thiscall **)(#377 *, IUnknown *))(this->unknown_short_3C8)(this, v1); /*0x442a39*/
        }
      }
    }
    if ( v68 ) /*0x442a9b*/
    {
      HealthRatio = BuildingClass::GetHealthRatio((int *)this); /*0x442aa3*/
      v44 = *(_DWORD *)&stru_87C374.__pad_579C[22224]; /*0x442aa8*/
      v45 = HealthRatio <= *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888); /*0x442ab9*/
      if ( this->IsDamaged != v45 ) /*0x442aca*/
      {
        v46 = 0; /*0x442ad2*/
        this->IsDamaged = v45; /*0x442ad4*/
        v47 = 0; /*0x442ada*/
        desiredFacing = (DirStruct)((char *)this + 1372); /*0x442adc*/
        do /*0x442b35*/
        {
          if ( **(_DWORD **)&desiredFacing ) /*0x442ae4*/
          {
            if ( v45 ) /*0x442aeb*/
            {
              v44 = this->gattlingValue; /*0x442aed*/
              v48 = (_BYTE *)(v47 + v44 + 3932); /*0x442af3*/
            }
            else
            {
              v48 = (_BYTE *)(v47 + this->gattlingValue + 3916); /*0x442b02*/
            }
            if ( v48 && *v48 ) /*0x442b0d*/
              BuildingClass::PlayAnim((ObjectClass *)this, v44, v48, v46, (IUnknown *)v45, 0, 0); /*0x442b1b*/
          }
          v47 += 68; /*0x442b24*/
          v46 = (IUnknown *)((char *)v46 + 1); /*0x442b27*/
          v44 = *(_DWORD *)&desiredFacing + 4; /*0x442b28*/
          *(_DWORD *)&desiredFacing += 4; /*0x442b31*/
        }
        while ( v47 < 1428 ); /*0x442b35*/
      }
    }
LABEL_113:
    v49 = BuildingClass::GetProductionFrame((int *)this); /*0x442b37*/
    if ( ProductionFrame != v49 ) /*0x442b42*/
    {
      this->needsRedraw = 1; /*0x442b4a*/
      ebx114 = BuildingClass::GetHealthRatio((int *)this) <= *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888); /*0x442b67*/
      if ( this->IsDamaged != ebx114 ) /*0x442b78*/
      {
        v50 = (AnimClass *)((char *)this + 1372); /*0x442b7a*/
        v52 = 0; /*0x442b80*/
        this->IsDamaged = ebx114; /*0x442b82*/
        v53 = 0; /*0x442b88*/
        desiredFacing = (DirStruct)((char *)this + 1372); /*0x442b8a*/
        do /*0x442be3*/
        {
          if ( **(_DWORD **)&desiredFacing ) /*0x442b92*/
          {
            if ( ebx114 ) /*0x442b99*/
            {
              v54 = (char *)(v53 + this->gattlingValue + 3932); /*0x442ba1*/
            }
            else
            {
              v50 = (AnimClass *)this->gattlingValue; /*0x442baa*/
              v54 = &v50->__pad_E70[v53 + 220]; /*0x442bb0*/
            }
            if ( v54 && *v54 ) /*0x442bbb*/
              BuildingClass::PlayAnim((ObjectClass *)this, (int)v50, v54, v52, (IUnknown *)ebx114, 0, 0); /*0x442bc9*/
          }
          v53 += 68; /*0x442bd2*/
          v52 = (IUnknown *)((char *)v52 + 1); /*0x442bd5*/
          v50 = (AnimClass *)(*(_DWORD *)&desiredFacing + 4); /*0x442bd6*/
          *(_DWORD *)&desiredFacing += 4; /*0x442bdf*/
        }
        while ( v53 < 1428 ); /*0x442be3*/
      }
    }
    v11 = Block; /*0x442be5*/
    v61 = &vt_VectorClass_TechnoClass; /*0x442be9*/
    if ( Block && BYTE1(v64) ) /*0x442bfb*/
LABEL_126:
      __3_YAXPAX_Z(v11); /*0x442bfd*/
    return v68; /*0x442bfe*/
  }
  v61 = &vt_VectorClass_TechnoClass; /*0x442913*/
  if ( Block && BYTE1(v64) ) /*0x442925*/
    __3_YAXPAX_Z(Block); /*0x442928*/
  return 4; /*0x442396*/
}


// ==== 0x00442C40  BuildingClass::Update  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::EjectCrew(int *this, TechnoClass *aP1)
{
  ParticleSystemClass *v3; // edx
  int v4; // eax
  _WORD *v5; // ebp
  InfantryClass *v6; // eax
  BuildingTypeClass *v7; // eax
  BuildingTypeClass *i; // esi
  _WORD *v9; // ecx
  __int16 v10; // ax
  void *v11; // eax
  int *v12; // eax
  _DWORD *v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // edx
  char v17; // al
  _DWORD *Value; // eax
  int v19; // edx
  TechnoClass *v20; // eax
  _WORD *v21; // eax
  __int16 v22; // cx
  __int16 v23; // dx
  void *v24; // eax
  int v25; // edx
  int v26; // esi
  int v27; // ebp
  int v28; // eax
  _DWORD *v29; // eax
  int *v30; // eax
  int v31; // ecx
  int v32; // edx
  IUnknown *v33; // eax
  int v34; // eax
  int v35; // edx
  int *v36; // eax
  int v37; // kr08_4
  int v38; // eax
  int *v39; // eax
  int v40; // kr0C_4
  int v41; // eax
  int v43; // [esp+14h] [ebp-7Ch] BYREF
  ParticleSystemClass *v44; // [esp+18h] [ebp-78h]
  IUnknown *v45; // [esp+1Ch] [ebp-74h]
  int v46; // [esp+20h] [ebp-70h]
  int v47; // [esp+24h] [ebp-6Ch]
  _WORD *v48; // [esp+28h] [ebp-68h]
  int v49; // [esp+2Ch] [ebp-64h] BYREF
  IUnknown *v50; // [esp+30h] [ebp-60h] BYREF
  int v51; // [esp+34h] [ebp-5Ch]
  int v52; // [esp+38h] [ebp-58h]
  IUnknown *v53; // [esp+3Ch] [ebp-54h] BYREF
  int v54; // [esp+40h] [ebp-50h]
  int v55; // [esp+44h] [ebp-4Ch]
  int v56[3]; // [esp+48h] [ebp-48h] BYREF
  int a1[3]; // [esp+54h] [ebp-3Ch] BYREF
  int v58[3]; // [esp+60h] [ebp-30h] BYREF
  int v59[3]; // [esp+6Ch] [ebp-24h] BYREF
  int v60[3]; // [esp+78h] [ebp-18h] BYREF
  int v61[3]; // [esp+84h] [ebp-Ch] BYREF

  v3 = *(ParticleSystemClass **)(*(int (__thiscall **)(int *, int *))(*this + 440))(this, &v49); /*0x442da8*/
  v4 = *this; /*0x442daa*/
  v44 = v3; /*0x442db1*/
  v5 = (_WORD *)(*(int (__thiscall **)(int *, _DWORD))(v4 + 264))(this, 0); /*0x442dbb*/
  v6 = (InfantryClass *)this->initialOwner; /*0x442dbd*/
  v45 = (IUnknown *)2; /*0x442dc5*/
  if ( v6 ) /*0x442dcd*/
    v45 = (IUnknown *)1; /*0x442dcf*/
  if ( this->HasBeenCaptured ) /*0x442dd7*/
    v45 = (IUnknown *)((char *)v45 + 6); /*0x442ddf*/
  v46 = (*(int (__thiscall **)(int *))(*this + 720))(this); /*0x442dee*/
  v7 = (BuildingTypeClass *)this->gattlingValue; /*0x442df2*/
  if ( v7->UnitAbsorb || v7->InfantryAbsorb )
  {
    v7 = (BuildingTypeClass *)this->inAirFlag; /*0x442e0c*/
    if ( (int)v7 > 0 )
    {
      v7 = (BuildingTypeClass *)LinkedList::Pop(this + 69); /*0x442e20*/
      for ( i = v7; v7; i = v7 )
      {
        v9 = v5; /*0x442e34*/
        v5 += 2; /*0x442e38*/
        v10 = *v9 + (_WORD)v44; /*0x442e3b*/
        LOWORD(v9) = HIWORD(v44) + v9[1]; /*0x442e42*/
        v52 = 0; /*0x442e47*/
        v50 = (IUnknown *)((v10 << 8) + 128); /*0x442e62*/
        v51 = ((__int16)v9 << 8) + 164; /*0x442e66*/
        if ( (*(int (__thiscall **)(BuildingTypeClass *))(*(_DWORD *)i->vtable0 + 44))(i) == 1 ) /*0x442e74*/
        {
          v11 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&v50); /*0x442e80*/
          v12 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v11 + 72))(v11, v58); /*0x442e8e*/
        }
        else
        {
          v13 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&v50); /*0x442ebe*/
          v12 = ObjectPlacement::CalcPosition(v13, a1, (IUnknown *)&v50, 0, 0, 0); /*0x442ec5*/
        }
        v50 = (IUnknown *)*v12; /*0x442e93*/
        v51 = v12[1]; /*0x442e9a*/
        v52 = v12[2]; /*0x442ea1*/
        ++*(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48]; /*0x442eeb*/
        i->Name[40] = this->onBridge; /*0x442ef7*/
        v53 = (IUnknown *)this->q027; /*0x442eff*/
        v14 = *this; /*0x442f03*/
        v54 = this->owningHouseIndex; /*0x442f08*/
        v55 = this->q029; /*0x442f11*/
        v15 = (*(int (__thiscall **)(int *))(v14 + 444))(this); /*0x442f15*/
        v16 = *(_DWORD *)((*(int (__thiscall **)(int, int *))(*(_DWORD *)v15 + 72))(v15, v56) + 8); /*0x442f27*/
        v17 = this->NoCrew; /*0x442f2a*/
        v55 = v16; /*0x442f32*/
        if ( v17
          || (Value = ProgressTimer::GetValue((_WORD *)this + 452, (IUnknown *)&v49),
              !(*(unsigned __int8 (__thiscall **)(BuildingTypeClass *, IUnknown **, _DWORD))(*(_DWORD *)i->vtable0 + 216))(
                 i,
                 &v53,
                 (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1))) )
        {
          if ( aP1 )
            v20 = (aP1->abstractFlags & 1) != 0 ? aP1 : 0;
          else
            v20 = 0; /*0x442fd0*/
          (*(void (__thiscall **)(BuildingTypeClass *, TechnoClass *))(*(_DWORD *)i->vtable0 + 224))(i, v20); /*0x442fe5*/
          (*(void (__thiscall **)(BuildingTypeClass *))(*(_DWORD *)i->vtable0 + 248))(i); /*0x442fef*/
        }
        else
        {
          if ( !i->DebrisTypes[292] ) /*0x442f6d*/
          {
            ++*(_DWORD *)(*(_DWORD *)&i->AlphaImageFile[9] + 756); /*0x442f82*/
            i->DebrisTypes[292] = 1; /*0x442f88*/
          }
          v19 = *(_DWORD *)i->vtable0; /*0x442f8f*/
          i->DebrisTypes[293] = 0; /*0x442f9b*/
          (*(void (__thiscall **)(BuildingTypeClass *, IUnknown *, int, _DWORD))(v19 + 372))(i, &aP5, 1, 0); /*0x442fa1*/
          if ( !(unsigned __int8)House::IsCurrentPlayer((#375 *)this->focus) ) /*0x442fad*/
            (*(void (__thiscall **)(BuildingTypeClass *, int, _DWORD))(*(_DWORD *)i->vtable0 + 488))(i, 15, 0); /*0x442fbd*/
        }
        --*(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48]; /*0x442ffc*/
        v7 = (BuildingTypeClass *)LinkedList::Pop(this + 69); /*0x443008*/
      }
    }
  }
  if ( v46 ) /*0x44301b*/
  {
    while ( *v5 != 0x7FFF || v5[1] != 0x7FFF ) /*0x44302f*/
    {
      v21 = v5; /*0x44303a*/
      v5 += 2; /*0x44303c*/
      v22 = *v21 + (_WORD)v44; /*0x44303f*/
      v23 = HIWORD(v44) + v21[1]; /*0x443046*/
      v48 = v5; /*0x44304b*/
      LOWORD(v47) = v22; /*0x44304f*/
      HIWORD(v47) = v23; /*0x443058*/
      v43 = v47; /*0x443067*/
      v24 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v43); /*0x44306b*/
      v25 = this->focus; /*0x443070*/
      v49 = (int)v24; /*0x443076*/
      if ( !*(_BYTE *)(v25 + 502) && v46 > 0 && Random::Range(&MEMORY[0xA8B230]->random[1], 0, v45) == 1 ) /*0x4430aa*/
      {
        v26 = 0; /*0x4430b4*/
        v27 = (*(int (__thiscall **)(int *))(*this + 780))(this); /*0x4430bc*/
        if ( v27 ) /*0x4430c0*/
        {
          v28 = __2_YAPAXI_Z(0x6F0u); /*0x4430c7*/
          if ( v28 ) /*0x4430d1*/
            v26 = InfantryClass::Construct(v28, v27, (IUnknown *)this->focus); /*0x4430e2*/
          else
            v26 = 0; /*0x4430e6*/
        }
        Debug::Log(); /*0x443101*/
        if ( v26 ) /*0x44310b*/
        {
          if ( this->BuildingClass_field_bool_6E9 && *(_BYTE *)(*(_DWORD *)(v26 + 1728) + 3230) ) /*0x44311f*/
            *(_BYTE *)(v26 + 1753) = 1; /*0x443127*/
          ++*(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48]; /*0x443141*/
          v52 = 0; /*0x44315a*/
          v50 = (IUnknown *)(((__int16)v43 << 8) + 128); /*0x44315e*/
          v51 = (SHIWORD(v43) << 8) + 164; /*0x443166*/
          v29 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&v50); /*0x44317b*/
          v30 = ObjectPlacement::CalcPosition(v29, v59, (IUnknown *)&v50, 0, 0, 0); /*0x443182*/
          v50 = (IUnknown *)*v30; /*0x443191*/
          v31 = v30[1]; /*0x443197*/
          v51 = v31; /*0x44319a*/
          v32 = v30[2]; /*0x44319e*/
          v52 = v32; /*0x4431a1*/
          if ( v50 == (IUnknown *)aP5.field_0 && v31 == unk_89C84C && v32 == unk_89C850 /*0x4431c5*/
            || !(*(unsigned __int8 (__thiscall **)(int, IUnknown **, _DWORD))(*(_DWORD *)v26 + 216))(v26, &v50, 0) )
          {
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v26 + 32))(v26, 1); /*0x443285*/
          }
          else
          {
            Debug::Log(); /*0x4431d8*/
            v33 = *(IUnknown **)(*(_DWORD *)(v26 + 1728) + 160); /*0x4431eb*/
            --v46; /*0x4431f1*/
            v34 = Random::Range(&MEMORY[0xA8B230]->random[1], (IUnknown *)5, v33); /*0x443203*/
            v35 = *(_DWORD *)v26; /*0x443208*/
            *(_DWORD *)(v26 + 108) = v34; /*0x443214*/
            (*(void (__thiscall **)(int, IUnknown *, int, _DWORD))(v35 + 372))(v26, &aP5, 1, 0); /*0x443217*/
            if ( !aP1 || Object::IsAlliedWithObjectSimpleHouse((_DWORD *)this->focus, aP1) ) /*0x44322f*/
            {
              if ( (unsigned __int8)House::IsCurrentPlayer((#375 *)this->focus) ) /*0x443258*/
                (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v26 + 488))(v26, 2, 0); /*0x443268*/
              else
                (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v26 + 488))(v26, 15, 0); /*0x443277*/
            }
            else
            {
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v26 + 488))(v26, 1, 0); /*0x44323f*/
              (*(void (__thiscall **)(int, TechnoClass *))(*(_DWORD *)v26 + 968))(v26, aP1); /*0x44324a*/
            }
          }
          --*(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48]; /*0x443288*/
        }
        v5 = v48; /*0x44328e*/
      }
      LOBYTE(v7) = Cell::IsBuildable(v49, 1, 1, 1, (IUnknown *)0xFFFFFFFF, 0, (IUnknown *)0xFFFFFFFF, (IUnknown *)1); /*0x4432a3*/
      if ( (_BYTE)v7 ) /*0x4432aa*/
      {
        if ( Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)0x63) >= 50 ) /*0x4432c7*/
        {
          a1[1] = (SHIWORD(v43) << 8) + 128; /*0x44337d*/
          a1[0] = ((__int16)v43 << 8) + 128; /*0x443392*/
          a1[2] = 0; /*0x443396*/
          v39 = RandomCoordScatter(v61, a1, 128, 0); /*0x44339a*/
          v40 = *v39; /*0x4433af*/
          v41 = v39[1]; /*0x4433b1*/
          v58[2] = 0; /*0x4433bb*/
          v58[0] = ((__int16)(v40 / 256) << 8) + 128; /*0x4433dd*/
          v58[1] = ((__int16)(v41 / 256) << 8) + 128; /*0x4433eb*/
          LOBYTE(v7) = TimedCreateUnitAtCoords(v58, 100, 100, 0); /*0x4433ef*/
        }
        else
        {
          v53 = (IUnknown *)(((__int16)v43 << 8) + 128); /*0x4432e4*/
          v54 = (SHIWORD(v43) << 8) + 128; /*0x4432fa*/
          v55 = 0; /*0x4432fe*/
          v36 = RandomCoordScatter(v60, (int *)&v53, 128, 0); /*0x443302*/
          v37 = *v36; /*0x443317*/
          v38 = v36[1]; /*0x443319*/
          v56[2] = 0; /*0x443323*/
          v56[0] = ((__int16)(v37 / 256) << 8) + 128; /*0x443347*/
          v56[1] = ((__int16)(v38 / 256) << 8) + 128; /*0x44334b*/
          LOBYTE(v7) = StandardCreateUnitAtCoords(v56, 100, 100, 0); /*0x443358*/
        }
      }
    }
  }
  return (char)v7; /*0x4433f9*/
}


// ==== 0x00442D90  BuildingClass::EjectCrew  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::EjectCrew(int *this, _BYTE *a2)
{
  int v3; // edx
  int v4; // eax
  _WORD *v5; // ebp
  int v6; // eax
  int v7; // eax
  int i; // esi
  _WORD *v9; // ecx
  __int16 v10; // ax
  void *v11; // eax
  int *v12; // eax
  _DWORD *v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // edx
  char v17; // al
  _DWORD *Value; // eax
  int v19; // edx
  _BYTE *v20; // eax
  _WORD *v21; // eax
  __int16 v22; // cx
  __int16 v23; // dx
  void *v24; // eax
  int v25; // edx
  int v26; // esi
  int v27; // ebp
  int v28; // eax
  _DWORD *v29; // eax
  int *v30; // eax
  int v31; // ecx
  int v32; // edx
  int v33; // eax
  int v34; // eax
  int v35; // edx
  int *v36; // eax
  int v37; // kr08_4
  int v38; // eax
  int *v39; // eax
  int v40; // kr0C_4
  int v41; // eax
  int v43; // [esp+14h] [ebp-7Ch] BYREF
  int v44; // [esp+18h] [ebp-78h]
  int v45; // [esp+1Ch] [ebp-74h]
  int v46; // [esp+20h] [ebp-70h]
  int v47; // [esp+24h] [ebp-6Ch]
  _WORD *v48; // [esp+28h] [ebp-68h]
  int v49; // [esp+2Ch] [ebp-64h] BYREF
  int v50; // [esp+30h] [ebp-60h] BYREF
  int v51; // [esp+34h] [ebp-5Ch]
  int v52; // [esp+38h] [ebp-58h]
  int v53; // [esp+3Ch] [ebp-54h] BYREF
  int v54; // [esp+40h] [ebp-50h]
  int v55; // [esp+44h] [ebp-4Ch]
  int v56[3]; // [esp+48h] [ebp-48h] BYREF
  int v57[3]; // [esp+54h] [ebp-3Ch] BYREF
  int v58[3]; // [esp+60h] [ebp-30h] BYREF
  int v59[3]; // [esp+6Ch] [ebp-24h] BYREF
  int v60[3]; // [esp+78h] [ebp-18h] BYREF
  int v61[3]; // [esp+84h] [ebp-Ch] BYREF

  v3 = *(_DWORD *)(*(int (__thiscall **)(int *, int *))(*this + 440))(this, &v49); /*0x442da8*/
  v4 = *this; /*0x442daa*/
  v44 = v3; /*0x442db1*/
  v5 = (_WORD *)(*(int (__thiscall **)(int *, _DWORD))(v4 + 264))(this, 0); /*0x442dbb*/
  v6 = this->initialOwner; /*0x442dbd*/
  v45 = 2; /*0x442dc5*/
  if ( v6 ) /*0x442dcd*/
    v45 = 1; /*0x442dcf*/
  if ( this->HasBeenCaptured ) /*0x442dd7*/
    v45 += 6; /*0x442ddf*/
  v46 = (*(int (__thiscall **)(int *))(*this + 720))(this); /*0x442dee*/
  v7 = this->gattlingValue; /*0x442df2*/
  if ( *(_BYTE *)(v7 + 5806) || *(_BYTE *)(v7 + 5807) )
  {
    v7 = this->inAirFlag; /*0x442e0c*/
    if ( v7 > 0 )
    {
      v7 = LinkedList::Pop(this + 69); /*0x442e20*/
      for ( i = v7; v7; i = v7 )
      {
        v9 = v5; /*0x442e34*/
        v5 += 2; /*0x442e38*/
        v10 = *v9 + v44; /*0x442e3b*/
        LOWORD(v9) = HIWORD(v44) + v9[1]; /*0x442e42*/
        v52 = 0; /*0x442e47*/
        v50 = (v10 << 8) + 128; /*0x442e62*/
        v51 = ((__int16)v9 << 8) + 164; /*0x442e66*/
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)i + 44))(i) == 1 ) /*0x442e74*/
        {
          v11 = Coord::To_Cell(MEMORY[0x87F7E8], &v50); /*0x442e80*/
          v12 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v11 + 72))(v11, v58); /*0x442e8e*/
        }
        else
        {
          v13 = Coord::To_Cell(MEMORY[0x87F7E8], &v50); /*0x442ebe*/
          v12 = ObjectPlacement::CalcPosition(v13, v57, &v50, 0, 0, 0); /*0x442ec5*/
        }
        v50 = *v12; /*0x442e93*/
        v51 = v12[1]; /*0x442e9a*/
        v52 = v12[2]; /*0x442ea1*/
        ++MEMORY[0x87F7E8][539633]; /*0x442eeb*/
        *(_BYTE *)(i + 140) = this->onBridge; /*0x442ef7*/
        v53 = this->q027; /*0x442eff*/
        v14 = *this; /*0x442f03*/
        v54 = this->owningHouseIndex; /*0x442f08*/
        v55 = this->q029; /*0x442f11*/
        v15 = (*(int (__thiscall **)(int *))(v14 + 444))(this); /*0x442f15*/
        v16 = *(_DWORD *)((*(int (__thiscall **)(int, int *))(*(_DWORD *)v15 + 72))(v15, v56) + 8); /*0x442f27*/
        v17 = this->NoCrew; /*0x442f2a*/
        v55 = v16; /*0x442f32*/
        if ( v17
          || (Value = ProgressTimer::GetValue((_WORD *)this + 452, &v49),
              !(*(unsigned __int8 (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)i + 216))(
                 i,
                 &v53,
                 (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1))) )
        {
          if ( a2 )
            v20 = (a2[20] & 1) != 0 ? a2 : 0;
          else
            v20 = 0; /*0x442fd0*/
          (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)i + 224))(i, v20); /*0x442fe5*/
          (*(void (__thiscall **)(int))(*(_DWORD *)i + 248))(i); /*0x442fef*/
        }
        else
        {
          if ( !*(_BYTE *)(i + 1080) ) /*0x442f6d*/
          {
            ++*(_DWORD *)(*(_DWORD *)(i + 540) + 756); /*0x442f82*/
            *(_BYTE *)(i + 1080) = 1; /*0x442f88*/
          }
          v19 = *(_DWORD *)i; /*0x442f8f*/
          *(_BYTE *)(i + 1081) = 0; /*0x442f9b*/
          (*(void (__thiscall **)(int, _DWORD *, int, _DWORD))(v19 + 372))(i, &MEMORY[0x87F7E8][29720], 1, 0); /*0x442fa1*/
          if ( !(unsigned __int8)House::IsCurrentPlayer((#375 *)this->focus) ) /*0x442fad*/
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)i + 488))(i, 15, 0); /*0x442fbd*/
        }
        --MEMORY[0x87F7E8][539633]; /*0x442ffc*/
        v7 = LinkedList::Pop(this + 69); /*0x443008*/
      }
    }
  }
  if ( v46 ) /*0x44301b*/
  {
    while ( *v5 != 0x7FFF || v5[1] != 0x7FFF ) /*0x44302f*/
    {
      v21 = v5; /*0x44303a*/
      v5 += 2; /*0x44303c*/
      v22 = *v21 + v44; /*0x44303f*/
      v23 = HIWORD(v44) + v21[1]; /*0x443046*/
      v48 = v5; /*0x44304b*/
      LOWORD(v47) = v22; /*0x44304f*/
      HIWORD(v47) = v23; /*0x443058*/
      v43 = v47; /*0x443067*/
      v24 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v43); /*0x44306b*/
      v25 = this->focus; /*0x443070*/
      v49 = (int)v24; /*0x443076*/
      if ( !*(_BYTE *)(v25 + 502) && v46 > 0 && Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 0, v45) == 1 ) /*0x4430aa*/
      {
        v26 = 0; /*0x4430b4*/
        v27 = (*(int (__thiscall **)(int *))(*this + 780))(this); /*0x4430bc*/
        if ( v27 ) /*0x4430c0*/
        {
          v28 = __2_YAPAXI_Z(1776); /*0x4430c7*/
          if ( v28 ) /*0x4430d1*/
            v26 = InfantryClass::Construct(v28, v27, (#37 *)this->focus); /*0x4430e2*/
          else
            v26 = 0; /*0x4430e6*/
        }
        Debug::Log(); /*0x443101*/
        if ( v26 ) /*0x44310b*/
        {
          if ( this->BuildingClass_field_bool_6E9 && *(_BYTE *)(*(_DWORD *)(v26 + 1728) + 3230) ) /*0x44311f*/
            *(_BYTE *)(v26 + 1753) = 1; /*0x443127*/
          ++MEMORY[0x87F7E8][539633]; /*0x443141*/
          v52 = 0; /*0x44315a*/
          v50 = ((__int16)v43 << 8) + 128; /*0x44315e*/
          v51 = (SHIWORD(v43) << 8) + 164; /*0x443166*/
          v29 = Coord::To_Cell(MEMORY[0x87F7E8], &v50); /*0x44317b*/
          v30 = ObjectPlacement::CalcPosition(v29, v59, &v50, 0, 0, 0); /*0x443182*/
          v50 = *v30; /*0x443191*/
          v31 = v30[1]; /*0x443197*/
          v51 = v31; /*0x44319a*/
          v32 = v30[2]; /*0x44319e*/
          v52 = v32; /*0x4431a1*/
          if ( v50 == MEMORY[0x87F7E8][29720] && v31 == MEMORY[0x87F7E8][29721] && v32 == MEMORY[0x87F7E8][29722] /*0x4431c5*/
            || !(*(unsigned __int8 (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v26 + 216))(v26, &v50, 0) )
          {
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v26 + 32))(v26, 1); /*0x443285*/
          }
          else
          {
            Debug::Log(); /*0x4431d8*/
            v33 = *(_DWORD *)(*(_DWORD *)(v26 + 1728) + 160); /*0x4431eb*/
            --v46; /*0x4431f1*/
            v34 = Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 5, v33); /*0x443203*/
            v35 = *(_DWORD *)v26; /*0x443208*/
            *(_DWORD *)(v26 + 108) = v34; /*0x443214*/
            (*(void (__thiscall **)(int, _DWORD *, int, _DWORD))(v35 + 372))(v26, &MEMORY[0x87F7E8][29720], 1, 0); /*0x443217*/
            if ( !a2 || Object::IsAlliedWithObjectSimpleHouse((_DWORD *)this->focus, a2) ) /*0x44322f*/
            {
              if ( (unsigned __int8)House::IsCurrentPlayer((#375 *)this->focus) ) /*0x443258*/
                (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v26 + 488))(v26, 2, 0); /*0x443268*/
              else
                (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v26 + 488))(v26, 15, 0); /*0x443277*/
            }
            else
            {
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v26 + 488))(v26, 1, 0); /*0x44323f*/
              (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v26 + 968))(v26, a2); /*0x44324a*/
            }
          }
          --MEMORY[0x87F7E8][539633]; /*0x443288*/
        }
        v5 = v48; /*0x44328e*/
      }
      LOBYTE(v7) = Cell::IsBuildable(v49, 1, 1, 1, -1, 0, -1, 1); /*0x4432a3*/
      if ( (_BYTE)v7 ) /*0x4432aa*/
      {
        if ( Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 0, 99) >= 50 ) /*0x4432c7*/
        {
          v57[1] = (SHIWORD(v43) << 8) + 128; /*0x44337d*/
          v57[0] = ((__int16)v43 << 8) + 128; /*0x443392*/
          v57[2] = 0; /*0x443396*/
          v39 = RandomCoordScatter(v61, v57, 128, 0); /*0x44339a*/
          v40 = *v39; /*0x4433af*/
          v41 = v39[1]; /*0x4433b1*/
          v58[2] = 0; /*0x4433bb*/
          v58[0] = ((__int16)(v40 / 256) << 8) + 128; /*0x4433dd*/
          v58[1] = ((__int16)(v41 / 256) << 8) + 128; /*0x4433eb*/
          LOBYTE(v7) = TimedCreateUnitAtCoords(v58, 100, 100, 0); /*0x4433ef*/
        }
        else
        {
          v53 = ((__int16)v43 << 8) + 128; /*0x4432e4*/
          v54 = (SHIWORD(v43) << 8) + 128; /*0x4432fa*/
          v55 = 0; /*0x4432fe*/
          v36 = RandomCoordScatter(v60, &v53, 128, 0); /*0x443302*/
          v37 = *v36; /*0x443317*/
          v38 = v36[1]; /*0x443319*/
          v56[2] = 0; /*0x443323*/
          v56[0] = ((__int16)(v37 / 256) << 8) + 128; /*0x443347*/
          v56[1] = ((__int16)(v38 / 256) << 8) + 128; /*0x44334b*/
          LOBYTE(v7) = StandardCreateUnitAtCoords(v56, 100, 100, 0); /*0x443358*/
        }
      }
    }
  }
  return v7; /*0x4433f9*/
}


// ==== 0x00443410  BuildingClass::HandleFactoryCommand  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::HandleFactoryCommand(#377 *this)
{
  int result; // eax
  _BYTE *WaypointCoords; // eax
  AbstractClass *v4; // eax
  char *v5; // eax
  BuildingTypeClass *v6; // eax
  _BYTE *v7; // eax
  AbstractClass *v8; // eax
  _BYTE *v9; // eax
  _BYTE *v10; // eax
  IUnknown *v11; // eax
  _DWORD *v12; // eax
  int v13; // [esp-10h] [ebp-A8h]
  char v14; // [esp-Ch] [ebp-A4h]
  int v15; // [esp-8h] [ebp-A0h]
  int v16; // [esp-8h] [ebp-A0h]
  char v17; // [esp-4h] [ebp-9Ch]
  char v18; // [esp-4h] [ebp-9Ch]
  __int16 v19[4]; // [esp+Ch] [ebp-8Ch] BYREF
  int v20; // [esp+14h] [ebp-84h] BYREF
  char v21[12]; // [esp+1Ch] [ebp-7Ch] BYREF
  char v22[112]; // [esp+28h] [ebp-70h] BYREF
  int v23; // [esp+9Ch] [ebp+4h]
  IUnknown *aP1; // [esp+A0h] [ebp+8h]

  result = v23; /*0x443410*/
  switch ( v23 ) /*0x443422*/
  {
    case 5: /*0x443422*/
      result = (int)aP1; /*0x443424*/
      if ( aP1 ) /*0x44342d*/
      {
        result = (*(int (__thiscall **)(#377 *, int, IUnknown *, _DWORD, _DWORD))(*(_DWORD *)this + 888))( /*0x44343c*/
                   this,
                   1,
                   aP1,
                   0,
                   0);
        LOBYTE(result) = 1; /*0x443442*/
        return result; /*0x44344d*/
      }
      goto LABEL_25; /*0x44342d*/
    case 4: /*0x443422*/
      if ( *(_DWORD *)(this->gattlingValue + 3768) ) /*0x44345f*/
      {
        WaypointCoords = ScriptAction::GetWaypointCoords(v19, (IUnknown *)this); /*0x443472*/
        v15 = *(_DWORD *)WaypointCoords; /*0x443483*/
        v17 = WaypointCoords[4]; /*0x443487*/
        v4 = (AbstractClass *)(*(int (__thiscall **)(#377 *))(this->attachedBomb)(this); /*0x44348c*/
        v5 = EventClass::Add(v22, v4, 0x11u, v15, v17); /*0x443494*/
        if ( Networking_LastEventIndex < 128 ) /*0x4434a3*/
        {
          qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v5, 0x6Fu); /*0x4434bf*/
          g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x4434d0*/
          Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x4434e7*/
          ++Networking_LastEventIndex; /*0x4434ed*/
        }
      }
      if ( *(_BYTE *)(this->gattlingValue + 3281) ) /*0x4434ff*/
        (*(void (__thiscall **)(#377 *, int, IUnknown *, _DWORD, _DWORD))(*(_DWORD *)this + 888))(this, 16, aP1, 0, 0); /*0x443514*/
      v6 = (BuildingTypeClass *)this->gattlingValue; /*0x44351a*/
      if ( v6->UnitAbsorb || v6->InfantryAbsorb ) /*0x44352a*/
        (*(void (__thiscall **)(#377 *, int, IUnknown *, _DWORD, _DWORD))(*(_DWORD *)this + 888))(this, 16, aP1, 0, 0); /*0x44353f*/
      result = (*(int (__thiscall **)(#377 *))(this->q408)(this); /*0x443549*/
      if ( result > 0 ) /*0x443551*/
      {
        result = (*(int (__thiscall **)(#377 *, int, IUnknown *, _DWORD, _DWORD))(*(_DWORD *)this + 888))( /*0x443562*/
                   this,
                   16,
                   aP1,
                   0,
                   0);
        LOBYTE(result) = 1; /*0x443568*/
        return result; /*0x443573*/
      }
      goto LABEL_25; /*0x443551*/
    case 55: /*0x443422*/
      v7 = ScriptAction::GetWaypointCoords(v19, (IUnknown *)this); /*0x443584*/
      result = (int)EventClass::Add( /*0x4435a8*/
                      v22,
                      *(AbstractClass **)(*(_DWORD *)(this->attachedBomb + 40) + 48),
                      0xAu,
                      *(_DWORD *)v7,
                      v7[4]);
      break;
    case 1: /*0x443422*/
      v8 = *(AbstractClass **)(this->gattlingValue + 3768); /*0x443627*/
      if ( v8 == (AbstractClass *)16 || v8 == (AbstractClass *)40 || v8 == (AbstractClass *)3 ) /*0x44363a*/
      {
        v12 = (_DWORD *)(*(int (__thiscall **)(IUnknown *, char *))(aP1->field_0 + 72))(aP1, v21); /*0x44369b*/
        LOWORD(v20) = *v12 / 256; /*0x4436b0*/
        HIWORD(v20) = v12[1] / 256; /*0x4436c9*/
        *(_DWORD *)v19 = v20; /*0x4436d4*/
        BuildingClass::SetRallyPoint((int)this, (IUnknown *)v19, 1); /*0x4436d8*/
        goto LABEL_25; /*0x4436d8*/
      }
      v9 = ScriptAction::GetWaypointCoords(v19, aP1); /*0x443648*/
      v16 = *(_DWORD *)v9; /*0x443658*/
      v18 = v9[4]; /*0x44365e*/
      v10 = ScriptAction::GetWaypointCoords(&v20, (IUnknown *)this); /*0x443661*/
      v13 = *(_DWORD *)v10; /*0x443672*/
      v14 = v10[4]; /*0x443676*/
      v11 = (IUnknown *)(*(int (__thiscall **)(#377 *))(this->attachedBomb)(this); /*0x44367b*/
      result = (int)ScenarioClass::SetEvent(v22, v11, 30, v13, v14, v16, v18); /*0x443683*/
      break;
    default:
      goto LABEL_25; /*0x44361b*/
  }
  if ( Networking_LastEventIndex < 128 ) /*0x4435b7*/
  {
    qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], (const void *)result, 0x6Fu); /*0x4435d7*/
    g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x4435e8*/
    result = ++Networking_LastEventIndex; /*0x4435fe*/
    Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x443604*/
    LOBYTE(result) = 1; /*0x44360a*/
    return result; /*0x443615*/
  }
LABEL_25:
  LOBYTE(result) = 1; /*0x4436dd*/
  return result; /*0x443444*/
}


// ==== 0x004436F0  ObjectClass::HandleRallyPointCommand  this=BuildingClass  sig=csp ====
int __thiscall ObjectClass::HandleRallyPointCommand(#377 *this)
{
  int result; // eax
  int v3; // edi
  void *v4; // eax
  char v5; // bl
  _BYTE *WaypointCoords; // eax
  AbstractClass *v7; // eax
  int v8; // [esp-8h] [ebp-8Ch]
  char v9; // [esp-4h] [ebp-88h]
  char v10[8]; // [esp+Ch] [ebp-78h] BYREF
  char v11[112]; // [esp+14h] [ebp-70h] BYREF
  int v12; // [esp+88h] [ebp+4h]
  __int16 *aP1; // [esp+8Ch] [ebp+8h]

  result = v12; /*0x4436f0*/
  if ( v12 == 5 ) /*0x4436ff*/
  {
    v3 = *(_DWORD *)this; /*0x443708*/
    v4 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], aP1); /*0x443714*/
    result = (*(int (__thiscall **)(#377 *, int, void *, _DWORD, _DWORD))(v3 + 888))(this, 1, v4, 0, 0); /*0x44371e*/
    LOBYTE(result) = 1; /*0x443724*/
  }
  else
  {
    if ( v12 == 6 || v12 == 1 ) /*0x443737*/
    {
      v5 = 0; /*0x443743*/
      if ( !*(_BYTE *)(this->gattlingValue + 5817) /*0x443770*/
        || (unsigned __int8)House::IsCurrentPlayer(*((#375 **)this + 135))
        && MEMORY[0xA8B238]
        && (_BYTE)MEMORY[0xA8B320]
        && !this->suspendedMission )
      {
        if ( *(_DWORD *)(this->gattlingValue + 1032) /*0x443792*/
          || (*(unsigned __int8 (__thiscall **)(#377 *))(this->q284)(this) )
        {
          BuildingClass::SetRallyPoint((int)this, (IUnknown *)aP1, 1); /*0x4437a8*/
        }
      }
      else
      {
        v5 = 1; /*0x44377a*/
      }
      result = *(_DWORD *)(this->gattlingValue + 1032); /*0x4437b3*/
      if ( result && !v5 ) /*0x4437c3*/
      {
        WaypointCoords = ScriptAction::GetWaypointCoords(v10, (IUnknown *)this); /*0x4437ce*/
        v8 = *(_DWORD *)WaypointCoords; /*0x4437df*/
        v9 = WaypointCoords[4]; /*0x4437e3*/
        v7 = (AbstractClass *)(*(int (__thiscall **)(#377 *))(this->attachedBomb)(this); /*0x4437e8*/
        result = (int)EventClass::Add(v11, v7, 0x16u, v8, v9); /*0x4437f0*/
        if ( Networking_LastEventIndex < 128 ) /*0x4437ff*/
        {
          qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], (const void *)result, 0x6Fu); /*0x44381b*/
          g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x44382c*/
          result = Networking_LastEventIndex + 1; /*0x443842*/
          Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x443843*/
          ++Networking_LastEventIndex; /*0x443849*/
        }
      }
    }
    LOBYTE(result) = 1; /*0x443850*/
  }
  return result; /*0x443726*/
}


// ==== 0x00443860  BuildingClass::SetRallyPoint  this=TechnoClass  sig=csp ====
void __thiscall BuildingClass::SetRallyPoint(int this, __int16 *a2, char a3)
{
  int v4; // esi
  int v5; // ecx
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int TileIndex; // eax
  _DWORD *v11; // eax
  _BYTE *WaypointCoords; // eax
  _BYTE *v13; // eax
  int v14; // eax
  char *v15; // eax
  int v16; // ebp
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  _BYTE *v19; // eax
  _BYTE *v20; // eax
  int v21; // eax
  char *v22; // eax
  int v23; // [esp-10h] [ebp-B4h]
  int v24; // [esp-10h] [ebp-B4h]
  char v25; // [esp-Ch] [ebp-B0h]
  char v26; // [esp-Ch] [ebp-B0h]
  int v27; // [esp-8h] [ebp-ACh]
  int v28; // [esp-8h] [ebp-ACh]
  char v29; // [esp-4h] [ebp-A8h]
  char v30; // [esp-4h] [ebp-A8h]
  __int16 v31[4]; // [esp+10h] [ebp-94h] BYREF
  char v32[8]; // [esp+18h] [ebp-8Ch] BYREF
  int v33; // [esp+20h] [ebp-84h]
  int v34; // [esp+24h] [ebp-80h] BYREF
  _BYTE v35[8]; // [esp+28h] [ebp-7Ch] BYREF
  int v36; // [esp+30h] [ebp-74h]
  char v37[112]; // [esp+34h] [ebp-70h] BYREF

  v33 = 0; /*0x44387b*/
  v4 = 0; /*0x44387f*/
  v5 = *((_DWORD *)CellCoord::To_CellObj(MEMORY[0x87F7E8], a2) + 80); /*0x443886*/
  v6 = *(_DWORD *)(this + 1312); /*0x44388c*/
  v32[0] = BYTE1(v5) & 1; /*0x443898*/
  if ( *(_DWORD *)(v6 + 3768) == 3 ) /*0x4438a5*/
  {
    v33 = 4; /*0x4438a7*/
    v4 = 9; /*0x4438af*/
  }
  if ( *(_BYTE *)(v6 + 3278) ) /*0x4438b4*/
  {
    v33 = 6; /*0x4438bc*/
    v4 = 4; /*0x4438c4*/
  }
  v7 = *(_DWORD *)v32; /*0x4438cf*/
  v8 = *(_DWORD *)(this + 156); /*0x4438d5*/
  v9 = *(_DWORD *)(this + 160); /*0x4438d7*/
  v36 = *(_DWORD *)(this + 164); /*0x4438dd*/
  v31[0] = v8 / 256; /*0x4438ed*/
  v31[1] = v9 / 256; /*0x443905*/
  TileIndex = MapClass::GetTileIndex(MEMORY[0x87F7E8], v31, v4, v32[0]); /*0x443917*/
  v31[0] = 0; /*0x44391d*/
  v31[1] = 0; /*0x443922*/
  v34 = *LayerClass::Pathfinding_Find( /*0x443965*/
           MEMORY[0x87F7E8],
           v33,
           v32,
           a2,
           v33,
           TileIndex,
           v4,
           v7,
           1,
           1,
           0,
           0,
           0,
           1,
           v31,
           0,
           0);
  if ( v34 != MEMORY[0x87F7E8][29708] ) /*0x443969*/
  {
    v11 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v34); /*0x443987*/
    WaypointCoords = ScriptAction::GetWaypointCoords(v32, v11); /*0x443991*/
    v27 = *(_DWORD *)WaypointCoords; /*0x4439a1*/
    v29 = WaypointCoords[4]; /*0x4439a3*/
    v13 = ScriptAction::GetWaypointCoords(v31, (_DWORD *)this); /*0x4439aa*/
    v23 = *(_DWORD *)v13; /*0x4439bb*/
    v25 = v13[4]; /*0x4439c0*/
    v14 = (*(int (__thiscall **)(int))(this->attachedBomb)(this); /*0x4439c5*/
    v15 = ScenarioClass::SetEvent(v37, v14, 30, v23, v25, v27, v29); /*0x4439cd*/
    if ( MEMORY[0x87F7E8][524984] < 128 ) /*0x4439dc*/
    {
      qmemcpy((char *)&MEMORY[0x87F7E8][524987] + 111 * MEMORY[0x87F7E8][524986], v15, 0x6Fu); /*0x4439f8*/
      MEMORY[0x87F7E8][MEMORY[0x87F7E8][524986] + 528539] = ((int (*)(void))timeGetTime)(); /*0x443a09*/
      MEMORY[0x87F7E8][524986] = (LOBYTE(MEMORY[0x87F7E8][524986]) + 1) & 0x7F; /*0x443a20*/
      ++MEMORY[0x87F7E8][524984]; /*0x443a26*/
    }
    goto LABEL_8; /*0x443a26*/
  }
  if ( !*(_BYTE *)(*(_DWORD *)(this + 1312) + 5817) /*0x443ab0*/
    || !(unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 540))
    || !MEMORY[0x87F7E8][536212]
    || !LOBYTE(MEMORY[0x87F7E8][536270])
    || *(_DWORD *)(this + 704) )
  {
LABEL_8:
    if ( a3 ) /*0x443a34*/
    {
      if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)(this + 540)) ) /*0x443a3c*/
      {
        v16 = *(_DWORD *)(this + 1312); /*0x443a45*/
        if ( !*(_BYTE *)(v16 + 5817) && !*(_BYTE *)(v16 + 1517) ) /*0x443a55*/
          VoxClass::FindAndPlay(aEvaNewrallypoi, -1); /*0x443a69*/
      }
    }
    return; /*0x443a69*/
  }
  v17 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(this->q048)(this, v35); /*0x443ac8*/
  v18 = Coord::To_Cell(MEMORY[0x87F7E8], v17); /*0x443ad1*/
  v19 = ScriptAction::GetWaypointCoords(v32, v18); /*0x443adb*/
  v28 = *(_DWORD *)v19; /*0x443aeb*/
  v30 = v19[4]; /*0x443aed*/
  v20 = ScriptAction::GetWaypointCoords(v31, (_DWORD *)this); /*0x443af4*/
  v24 = *(_DWORD *)v20; /*0x443b05*/
  v26 = v20[4]; /*0x443b0a*/
  v21 = (*(int (__thiscall **)(int))(this->attachedBomb)(this); /*0x443b0f*/
  v22 = ScenarioClass::SetEvent(v37, v21, 30, v24, v26, v28, v30); /*0x443b17*/
  if ( MEMORY[0x87F7E8][524984] < 128 ) /*0x443b26*/
  {
    qmemcpy((char *)&MEMORY[0x87F7E8][524987] + 111 * MEMORY[0x87F7E8][524986], v22, 0x6Fu); /*0x443b46*/
    MEMORY[0x87F7E8][MEMORY[0x87F7E8][524986] + 528539] = ((int (*)(void))timeGetTime)(); /*0x443b5a*/
    MEMORY[0x87F7E8][524986] = (LOBYTE(MEMORY[0x87F7E8][524986]) + 1) & 0x7F; /*0x443b71*/
    ++MEMORY[0x87F7E8][524984]; /*0x443b77*/
  }
}


// ==== 0x00443B90  BuildingClass::AssignTarget_SyncLog  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::AssignTarget_SyncLog(#377 *this)
{
  int v2; // edi
  int result; // eax
  int v4; // [esp+Ch] [ebp+4h]

  if ( this->currentMission == 19 || !(*(unsigned __int8 (__thiscall **)(#377 *))(this->storedTiberium)(this) ) /*0x443b9f*/
  {
    v2 = 0; /*0x443ba9*/
LABEL_4:
    LOBYTE(result) = TechnoClass::AssignTarget_SyncLog(this, v2); /*0x443bab*/
    return result; /*0x443bae*/
  }
  v2 = v4; /*0x443bb8*/
  if ( !v4 /*0x443bf4*/
    || !*(_DWORD *)(*(int (__thiscall **)(#377 *, _DWORD))(this->barrelRecoil)(this, 0)
    || *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(#377 *, _DWORD))(this->barrelRecoil)(this, 0) + 160)
                + 676)
    || (*(unsigned __int8 (__thiscall **)(#377 *, int))(*(_DWORD *)this + 940))(this, v4) )
  {
    goto LABEL_4; /*0x443bfc*/
  }
  TechnoClass::AssignTarget_SyncLog(this, 0); /*0x443c02*/
  result = this->gattlingValue; /*0x443c07*/
  if ( *(_BYTE *)(result + 5828) || *(_BYTE *)(result + 5834) ) /*0x443c17*/
  {
    result = House::IsCurrentPlayer(*((#375 **)this + 135)); /*0x443c27*/
    if ( !(_BYTE)result ) /*0x443c2e*/
    {
      result = (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 892))(this); /*0x443c34*/
      if ( !(_BYTE)result ) /*0x443c3c*/
      {
        (*(void (__thiscall **)(#377 *, int, _DWORD))(this->q1E8)(this, 19, 0); /*0x443c4a*/
        return (*(int (__thiscall **)(#377 *))(this->disguiseBlinkTimer)(this); /*0x443c54*/
      }
    }
  }
  return result; /*0x443bb3*/
}


// ==== 0x00443C60  BuildingClass::UpdateConstruction  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::UpdateConstruction(#377 *this)
{
  int v2; // eax
  IUnknown *v3; // ebp
  unsigned int v4; // eax
  VectorClass *v5; // edx
  __int16 v6; // di
  int v7; // edx
  _DWORD *v8; // eax
  int *v9; // ecx
  __int16 v10; // ax
  IUnknown *v11; // eax
  BuildingClass *v12; // eax
  IUnknown *v13; // esi
  void *v14; // eax
  int *PlacementCellsAlt; // eax
  IUnknown *v16; // esi
  int Field9; // eax
  int v18; // edi
  int v19; // eax
  int v20; // eax
  IUnknown *v21; // edi
  int v22; // eax
  BuildingClass *v23; // esi
  BuildingTypeClass *v24; // eax
  int result; // eax
  BuildingTypeClass *v26; // eax
  BuildingTypeClass *v27; // eax
  BuildingTypeClass *v28; // eax
  _DWORD *v29; // eax
  BuildingClass *v30; // ecx
  _DWORD *v31; // eax
  int v32; // ebp
  int v33; // ebx
  __int16 *v34; // eax
  int v35; // ecx
  int v36; // edx
  double v37; // st7
  unsigned int v38; // ebp
  _DWORD *v39; // eax
  _WORD *v40; // ebp
  __int16 v41; // ax
  _DWORD *v42; // eax
  int v43; // edx
  _DWORD *v44; // eax
  int v45; // kr14_4
  int v46; // eax
  int v47; // eax
  void *v48; // eax
  int v49; // ebx
  int v50; // eax
  BuildingClass *v51; // esi
  int v52; // esi
  _DWORD *v53; // eax
  ObjectClass *Coords; // eax
  int v55; // ebx
  int v56; // eax
  #377 *v57; // ebp
  FactoryClass *v58; // ebx
  int v59; // ebp
  int v60; // eax
  int v61; // ebp
  int v62; // eax
  int v63; // edx
  int v64; // edx
  __int16 v65; // ax
  __int16 v66; // cx
  int v67; // edx
  int *v68; // eax
  double v69; // st7
  int v70; // eax
  VectorClass *v71; // ebx
  BuildingTypeClass *v72; // ecx
  __int16 v73; // bp
  BuildingTypeClass *v74; // ecx
  int v75; // ecx
  __int16 v76; // ax
  IUnknown *v77; // ecx
  BuildingTypeClass *v78; // edx
  BuildingTypeClass *v79; // eax
  IUnknown *v80; // ebp
  BuildingTypeClass *v81; // ebx
  int v82; // ecx
  BuildingTypeClass *v83; // edx
  IUnknown *v84; // ebp
  int v85; // ecx
  int v86; // eax
  int v87; // ebx
  void *v88; // eax
  int v89; // edx
  BuildingTypeClass *v90; // eax
  BuildingTypeClass *v91; // ecx
  VectorClass *v92; // eax
  int v93; // ebx
  int v94; // edx
  _DWORD *v95; // ebp
  int v96; // eax
  int v97; // eax
  double v98; // st7
  int v99; // eax
  VectorClass *v100; // ebp
  BuildingTypeClass *v101; // ecx
  __int16 v102; // bx
  BuildingTypeClass *v103; // ecx
  int FoundationHeight; // eax
  __int16 v105; // cx
  int v106; // eax
  VectorClass *v107; // edx
  BuildingTypeClass *v108; // ecx
  int v109; // ebp
  VectorClass *v110; // ebx
  int v111; // edx
  int v112; // edx
  int v113; // ebp
  int v114; // eax
  int v115; // ecx
  int v116; // ebx
  void *v117; // eax
  IUnknown *v118; // eax
  BuildingTypeClass *v119; // eax
  _DWORD *v120; // eax
  int v121; // eax
  int v122; // eax
  int v123; // eax
  VectorClass *v124; // ecx
  __int16 *v125; // ebx
  unsigned int *v126; // eax
  int v127; // ecx
  int v128; // ebp
  int v129; // ecx
  int v130; // ebp
  int v131; // ebp
  int v132; // eax
  VectorClass *v133; // ebx
  int v134; // edx
  int v135; // eax
  unsigned int *v136; // eax
  int v137; // edx
  int v138; // eax
  int v139; // edx
  VectorClass *v140; // eax
  int v141; // edx
  void *v142; // eax
  int v143; // eax
  int v144; // eax
  int v145; // eax
  int v146; // eax
  int v147; // esi
  int v148; // ecx
  int v149; // ecx
  VectorClass *v150; // edx
  int v151; // eax
  int v152; // ecx
  _DWORD *v153; // edi
  _DWORD *v154; // ecx
  int **ecx185; // ecx
  VectorClass *v155; // eax
  int v157; // ecx
  int v158; // eax
  int eax200; // eax
  VectorClass *v159; // esi
  int v161; // ecx
  int v162; // ebx
  int v163; // esi
  int *i; // eax
  int v165; // eax
  int v166; // edi
  int v167; // eax
  int ecx209; // ecx
  VectorClass *v168; // ecx
  int v170; // edx
  int v171; // edi
  int v172; // eax
  int v173; // ebx
  int v174; // ecx
  bool v175; // zf
  int v176; // ecx
  int v177; // esi
  int v178; // ecx
  int v179; // ecx
  int v180; // edx
  int v181; // eax
  int v182; // ecx
  _DWORD *v183; // edi
  _DWORD *v184; // ecx
  int FreeSlot; // eax
  int v186; // esi
  int v187; // ecx
  int v188; // ecx
  int v189; // edx
  int v190; // eax
  int v191; // ecx
  _DWORD *v192; // edi
  _DWORD *ecx228a; // ecx
  VectorClass *v193; // [esp-Ch] [ebp-178h]
  __int64 v195; // [esp+0h] [ebp-16Ch] BYREF
  double v196; // [esp+8h] [ebp-164h] BYREF
  double v197; // [esp+10h] [ebp-15Ch] BYREF
  int v198; // [esp+18h] [ebp-154h] BYREF
  VectorClass *v199; // [esp+1Ch] [ebp-150h]
  int v200; // [esp+20h] [ebp-14Ch]
  int p_a1; // [esp+24h] [ebp-148h]
  int v202; // [esp+28h] [ebp-144h]
  int v203; // [esp+2Ch] [ebp-140h]
  int v204; // [esp+30h] [ebp-13Ch] BYREF
  int v205; // [esp+34h] [ebp-138h] BYREF
  VectorClass *v206; // [esp+38h] [ebp-134h]
  int v207; // [esp+3Ch] [ebp-130h]
  VectorClass *v208; // [esp+40h] [ebp-12Ch]
  int v209; // [esp+44h] [ebp-128h] BYREF
  VectorClass *aP2; // [esp+48h] [ebp-124h]
  int var120; // [esp+4Ch] [ebp-120h]
  IUnknown *v211; // [esp+50h] [ebp-11Ch] BYREF
  BuildingTypeClass *v212; // [esp+54h] [ebp-118h]
  int v214; // [esp+58h] [ebp-114h] BYREF
  int var110; // [esp+5Ch] [ebp-110h] BYREF
  IUnknown *v215; // [esp+60h] [ebp-10Ch]
  BuildingTypeClass *v217; // [esp+64h] [ebp-108h] BYREF
  IUnknown *v218; // [esp+68h] [ebp-104h]
  int v219; // [esp+6Ch] [ebp-100h] BYREF
  int v220; // [esp+70h] [ebp-FCh]
  __int16 v221[6]; // [esp+74h] [ebp-F8h] BYREF
  int v222; // [esp+80h] [ebp-ECh] BYREF
  int v223[3]; // [esp+84h] [ebp-E8h] BYREF
  int a1; // [esp+90h] [ebp-DCh] BYREF
  int v225; // [esp+94h] [ebp-D8h] BYREF
  _DWORD v226[3]; // [esp+98h] [ebp-D4h] BYREF
  _DWORD v227[4]; // [esp+A4h] [ebp-C8h] BYREF
  int v228; // [esp+B4h] [ebp-B8h] BYREF
  _DWORD v229[2]; // [esp+B8h] [ebp-B4h] BYREF
  int v230; // [esp+C0h] [ebp-ACh] BYREF
  char v231[4]; // [esp+C4h] [ebp-A8h] BYREF
  _DWORD v232[2]; // [esp+C8h] [ebp-A4h] BYREF
  int v233; // [esp+D0h] [ebp-9Ch] BYREF
  char v234[8]; // [esp+D4h] [ebp-98h] BYREF
  int v235; // [esp+DCh] [ebp-90h] BYREF
  int v236; // [esp+E4h] [ebp-88h] BYREF
  char v237[8]; // [esp+ECh] [ebp-80h] BYREF
  char var78[12]; // [esp+F4h] [ebp-78h] BYREF
  IUnknown *v238; // [esp+100h] [ebp-6Ch] BYREF
  char v240[8]; // [esp+104h] [ebp-68h] BYREF
  _BYTE v241[16]; // [esp+10Ch] [ebp-60h] BYREF
  int v242[2]; // [esp+11Ch] [ebp-50h] BYREF
  char v243[12]; // [esp+124h] [ebp-48h] BYREF
  char v244[48]; // [esp+130h] [ebp-3Ch] BYREF
  char v245[12]; // [esp+160h] [ebp-Ch] BYREF
  IUnknown *aP1; // [esp+170h] [ebp+4h]
  IUnknown *v247; // [esp+174h] [ebp+8h]

  if ( !aP1 )
    return 0;
  v2 = aP1->field_0;
  aP1->__pad_3BC[25] = 1;
  v3 = 0;
  if ( (*(int (__thiscall **)(IUnknown *))(v2 + 44))(aP1) == 2 )
    v3 = aP1;
  v4 = (*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 44))(aP1) - 1;
  if ( v4 > 0xE )
    return 0;
  switch ( *(_BYTE *)(v4 + 4478648) )
  {
    case 0:
      v24 = (BuildingTypeClass *)this->gattlingValue;
      if ( !v24->Hospital && !v24->Armory && !v24->WeaponsFactory && !RadioClass::HasFreeLink((int *)this) )
        return 1;
      v26 = (BuildingTypeClass *)this->gattlingValue;
      if ( !v26->Hospital && !v26->Armory )
      {
        v27 = (BuildingTypeClass *)(*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 44))(aP1);
        HouseClass::UpdateBuildState(this->focus, v27);
        if ( (*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 44))(aP1) == 1 )
          *(_DWORD *)(this->focus + 22096) = -1;
        if ( (*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 44))(aP1) == 15 )
          *(_DWORD *)(this->focus + 22100) = -1;
      }
      v28 = (BuildingTypeClass *)this->gattlingValue;
      if ( v28->Refinery || v28->Weeder )
      {
        if ( (*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 44))(aP1) != 1 )
        {
          (*(void (__thiscall **)(IUnknown *, IUnknown *, int, _DWORD))(aP1->field_0 + 372))(aP1, &aP5, 1, 0);
          return 0;
        }
        v120 = (_DWORD *)(*(int (__thiscall **)(#377 *, char *))(this->q048)(this, v245);
        p_a1 = 160;
        LOWORD(aP2) = *v120 / 256;
        v121 = v120[1];
        v227[2] = 0;
        LOWORD(aP2) = *(_WORD *)&stru_89E138.__pad_14B0[180] + (_WORD)aP2;
        HIWORD(aP2) = v121 / 256 + *(_WORD *)&stru_89E138.__pad_14B0[182];
        ++*(_DWORD *)&HouseClass_Player.__pad_5568[21752];
        v206 = aP2;
        v122 = aP1->field_0;
        v227[0] = ((__int16)((_WORD)aP2 + *(_WORD *)&stru_89E138.__pad_14B0[176]) << 8) + 128;
        v227[1] = ((__int16)(HIWORD(aP2) + *(_WORD *)&stru_89E138.__pad_14B0[178]) << 8) + 128;
        if ( (*(unsigned __int8 (__thiscall **)(IUnknown *, _DWORD *, int))(v122 + 216))(aP1, v227, 160) )
        {
          v221[0] = 0x8000;
          FacingClass::Set_SyncLog((FacingClass *)&aP1->__pad_2B8[208], (DirStruct *)v221);
          (*(void (__thiscall **)(IUnknown *, int, _DWORD))(aP1->field_0 + 488))(aP1, 10, 0);
        }
        goto LABEL_146;
      }
      if ( !v28->WeaponsFactory )
      {
        if ( v28->Factory[0] == 16 || v28->Hospital || v28->Armory || v28->Cloning )
        {
          TechnoClass::SetFocus(aP1, *((IUnknown **)this + 134));
          v89 = *(_DWORD *)this;
          v202 = dword_89C818;
          p_a1 = (int)aP1;
          v200 = (int)&v230;
          v204 = *(_DWORD *)(*(int (__thiscall **)(#377 *))(v89 + 1236))(this);
          if ( v204 == dword_89C818 )
            return 0;
          v90 = (BuildingTypeClass *)this->gattlingValue;
          if ( v90->Factory[0] == 16 && !v90->Cloning )
          {
            v91 = (BuildingTypeClass *)(*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 132))(aP1);
            v92 = (VectorClass *)this->focus;
            v93 = 0;
            v217 = v91;
            if ( v92[16].Capacity > 0 )
            {
              while ( 1 )
              {
                v94 = v91->vtable0;
                v95 = *(_DWORD **)(*(_DWORD *)&v92[15].IsInitialized + 4 * v93);
                v199 = (VectorClass *)v95[135];
                v96 = (*(int (__thiscall **)(BuildingTypeClass *))(v94 + 140))(v91);
                (*(void (__thiscall **)(_DWORD *, int, int))(*v95 + 256))(v95, v96, dword_89C818);
                v92 = (VectorClass *)this->focus;
                if ( ++v93 >= v92[16].Capacity )
                  break;
                v91 = (BuildingTypeClass *)v214;
              }
            }
          }
          v206 = (VectorClass *)((SHIWORD(p_a1) << 8) + 128);
          v205 = ((__int16)p_a1 << 8) + 128;
          v97 = (*(int (__thiscall **)(#377 *, char *))(this->q048)(this, v244);
          v212 = *(BuildingTypeClass **)v97;
          v98 = ((double (__cdecl *)(double, double))Math::CalcAngle)(
                  (double)*(int *)(v97 + 4) - (double)v205,
                  (double)v204 - (double)(int)v212);
          LOWORD(v212) = Math::RoundToInt((v98 - 1.570796326794897) * -10430.06004058427);
          v212 = (BuildingTypeClass *)(unsigned __int8)((((unsigned int)v212 >> 7) + 1) >> 1);
          v99 = *(_DWORD *)this;
          v204 = v200;
          v100 = *(VectorClass **)(*(int (__thiscall **)(#377 *, char *))(v99 + 440))(this, v234);
          v101 = (BuildingTypeClass *)this->gattlingValue;
          v206 = v100;
          v200 = (__int16)v100;
          v102 = v203;
          if ( (__int16)v203 < (__int16)v100 + BuildingTypeClass::GetFoundationWidth(v101) )
          {
            if ( (__int16)v203 < (__int16)v100 )
              v102 = v203 + 1;
          }
          else
          {
            v102 = v203 - 1;
          }
          v103 = (BuildingTypeClass *)this->gattlingValue;
          v202 = SHIWORD(v206);
          FoundationHeight = BuildingTypeClass::GetFoundationHeight((int)v103, 0);
          v105 = HIWORD(v203);
          if ( SHIWORD(v203) < SHIWORD(v206) + FoundationHeight )
          {
            if ( SHIWORD(v203) < SHIWORD(v206) )
              v105 = HIWORD(v203) + 1;
          }
          else
          {
            v105 = HIWORD(v203) - 1;
          }
          v106 = (v102 << 8) + 128;
          v107 = (VectorClass *)((v105 << 8) + 128);
          var120 = 0;
          v108 = (BuildingTypeClass *)this->gattlingValue;
          v109 = v106;
          v110 = v107;
          v209 = v106;
          aP2 = v107;
          if ( v108->GDIBarracks )
          {
            if ( (__int16)v199 == v200 + 1 && SHIWORD(v199) == v202 + 2 )
            {
              v110 = (VectorClass *)((char *)v107 + v108->ExitCoord[1]);
              v111 = v108->ExitCoord[2];
              v109 = v108->ExitCoord[0] + v106;
              aP2 = v110;
              v209 = v109;
              var120 = v111;
            }
            else
            {
              v110 = aP2;
              v109 = v209;
            }
          }
          if ( v108->NODBarracks && (__int16)v199 == v200 + 2 && SHIWORD(v199) == v202 + 2 )
          {
            v112 = v108->ExitCoord[2];
            v109 += v108->ExitCoord[0];
            v110 = (VectorClass *)((char *)v110 + v108->ExitCoord[1]);
            v209 = v109;
            aP2 = v110;
            var120 += v112;
          }
          if ( v108->YuriBarracks && (__int16)v199 == v200 + 2 && SHIWORD(v199) == v202 + 1 )
          {
            v113 = v108->ExitCoord[0] + v109;
            v114 = v108->ExitCoord[1];
            v115 = v108->ExitCoord[2];
            v209 = v113;
            aP2 = (VectorClass *)((char *)v110 + v114);
            var120 += v115;
          }
          ++*(_DWORD *)&HouseClass_Player.__pad_5568[21752];
          if ( (*(unsigned __int8 (__thiscall **)(IUnknown *, int *, IUnknown *))(aP1->field_0 + 216))(aP1, &v209, v211) )
          {
            if ( *(_DWORD *)&aP1->__pad_524[128]
              && !*(_BYTE *)((*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 132))(aP1) + 3476)
              && !*(_BYTE *)((*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 132))(aP1) + 3284) )
            {
              if ( *(_DWORD *)&aP1->__pad_524[128] )
                TechnoClass::SetFocus(aP1, *(IUnknown **)&aP1->__pad_524[128]);
              (*(void (__thiscall **)(IUnknown *, int, _DWORD))(aP1->field_0 + 488))(aP1, 2, 0);
              v116 = aP1->field_0;
              v117 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v196 + 2);
              (*(void (__thiscall **)(IUnknown *, void *, int))(v116 + 1152))(aP1, v117, 1);
            }
            if ( !(unsigned __int8)House::IsCurrentPlayer(*((#375 **)this + 135))
              || *(_BYTE *)(this->gattlingValue + 5825) )
            {
              (*(void (__thiscall **)(IUnknown *, int, _DWORD))(aP1->field_0 + 488))(aP1, 11, 0);
              LODWORD(v195) = *((_DWORD *(__stdcall *)(_DWORD *, _DWORD *))BuildingPlacement::FindPosition)(&v225, aP1);
              if ( (_DWORD)v195 == dword_89C818 || !*(_DWORD *)(this->gattlingValue + 3768) )
              {
                TechnoClass::SetFocus(aP1, 0);
              }
              else
              {
                v118 = (IUnknown *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v195);
                TechnoClass::SetFocus(aP1, v118);
                v119 = (BuildingTypeClass *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v195);
                BuildingClass::AddToProductionQueue((int)aP1, v119);
              }
            }
            if ( (*(int (__thiscall **)(#377 *, int, IUnknown *))(this->temporalTargetingMe)(this, 2, aP1) == 1 )
              (*(void (__thiscall **)(#377 *, int, IUnknown *))(this->temporalTargetingMe)(this, 9, aP1);
            goto LABEL_99;
          }
        }
        else
        {
          v63 = *(_DWORD *)this;
          v202 = (int)v247;
          v64 = *(_DWORD *)(*(int (__thiscall **)(#377 *, char *, IUnknown *))(v63 + 1236))(this, v231, aP1);
          v65 = v64;
          v204 = v64;
          v66 = HIWORD(v64);
          if ( v64 == dword_89C818 )
            return 0;
          v67 = *(_DWORD *)this;
          v217 = (BuildingTypeClass *)((v65 << 8) + 128);
          v218 = (IUnknown *)((v66 << 8) + 128);
          v68 = (int *)(*(int (__thiscall **)(#377 *, char *))(v67 + 72))(this, v243);
          v207 = *v68;
          v69 = ((double (__cdecl *)(double, double))Math::CalcAngle)(
                  (double)v68[1] - (double)(int)v217,
                  (double)(int)v215 - (double)v207);
          LOWORD(v207) = Math::RoundToInt((v69 - 1.570796326794897) * -10430.06004058427);
          v215 = (IUnknown *)(unsigned __int8)((((unsigned int)v207 >> 7) + 1) >> 1);
          v70 = *(_DWORD *)this;
          aP2 = (VectorClass *)v203;
          v71 = *(VectorClass **)(*(int (__thiscall **)(#377 *, _DWORD *))(v70 + 440))(this, v229);
          v72 = (BuildingTypeClass *)this->gattlingValue;
          v206 = v71;
          v203 = (__int16)v71;
          v73 = v209;
          if ( (__int16)v209 < (__int16)v71 + BuildingTypeClass::GetFoundationWidth(v72) )
          {
            if ( (__int16)v209 < (__int16)v71 )
              v73 = v209 + 1;
          }
          else
          {
            v73 = v209 - 1;
          }
          v74 = (BuildingTypeClass *)this->gattlingValue;
          v205 = SHIWORD(v206);
          v75 = BuildingTypeClass::GetFoundationHeight((int)v74, 0);
          v76 = HIWORD(v209);
          if ( SHIWORD(v209) < SHIWORD(v206) + v75 )
          {
            if ( SHIWORD(v209) < SHIWORD(v206) )
              v76 = HIWORD(v209) + 1;
          }
          else
          {
            v76 = HIWORD(v209) - 1;
          }
          v77 = (IUnknown *)((v73 << 8) + 128);
          v78 = (BuildingTypeClass *)((v76 << 8) + 128);
          v214 = 0;
          v79 = (BuildingTypeClass *)this->gattlingValue;
          v80 = v77;
          v81 = v78;
          v211 = v77;
          v212 = v78;
          if ( v79->GDIBarracks )
          {
            if ( (__int16)v202 == v203 + 1 && SHIWORD(v202) == v205 + 2 )
            {
              v80 = (IUnknown *)((char *)v77 + v79->ExitCoord[0]);
              v82 = v79->ExitCoord[2];
              v81 = (BuildingTypeClass *)((char *)v78 + v79->ExitCoord[1]);
              v211 = v80;
              v212 = v81;
              v214 = v82;
            }
            else
            {
              v81 = v212;
              v80 = v211;
            }
          }
          if ( v79->NODBarracks && (__int16)v202 == v203 + 2 && SHIWORD(v202) == v205 + 2 )
          {
            v83 = (BuildingTypeClass *)((char *)v81 + v79->ExitCoord[1]);
            v80 = (IUnknown *)((char *)v80 + v79->ExitCoord[0]);
            v208 = (VectorClass *)(v214 + v79->ExitCoord[2]);
            v81 = v83;
            v211 = v80;
            v212 = v83;
            v214 = (int)v208;
          }
          if ( v79->YuriBarracks && (__int16)v202 == v203 + 2 && SHIWORD(v202) == v205 + 1 )
          {
            v84 = (IUnknown *)((char *)v80 + v79->ExitCoord[0]);
            v85 = v79->ExitCoord[1];
            v86 = v79->ExitCoord[2];
            v211 = v84;
            v212 = (BuildingTypeClass *)((char *)v81 + v85);
            v214 += v86;
          }
          ++*(_DWORD *)&HouseClass_Player.__pad_5568[21752];
          if ( (*(unsigned __int8 (__thiscall **)(IUnknown *, IUnknown **, int))(aP1->field_0 + 216))(
                 aP1,
                 &v211,
                 var110) )
          {
            (*(void (__thiscall **)(IUnknown *, int, _DWORD))(aP1->field_0 + 488))(aP1, 2, 0);
            v87 = aP1->field_0;
            v88 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v198);
            (*(void (__thiscall **)(IUnknown *, void *, int))(v87 + 1152))(aP1, v88, 1);
            if ( !(unsigned __int8)House::IsCurrentPlayer(*((#375 **)this + 135)) )
            {
              (*(void (__thiscall **)(IUnknown *, int, _DWORD))(aP1->field_0 + 488))(aP1, 11, 0);
              v198 = *((_DWORD *(__stdcall *)(_DWORD *, _DWORD *))BuildingPlacement::FindPosition)(&v228, aP1);
              if ( v198 == dword_89C818 || !*(_DWORD *)(this->gattlingValue + 3768) )
              {
                TechnoClass::SetFocus(aP1, 0);
              }
              else
              {
                v193 = (VectorClass *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v198);
                TechnoClass::SetFocus(aP1, (IUnknown *)v193);
              }
            }
            goto LABEL_99;
          }
        }
        goto LABEL_146;
      }
      if ( !v28->Crewed[1] )
      {
        TechnoClass::SetFocus(aP1, *((IUnknown **)this + 134));
        if ( (*(int (__thiscall **)(#377 *))(this->q184)(this) == 16 )
        {
          v55 = 0;
          var120 = *(_DWORD *)(this->focus + 120);
          v56 = var120;
          if ( var120 <= 0 )
            return 1;
          while ( 1 )
          {
            v57 = *(#377 **)(*(_DWORD *)(this->focus + 108) + 4 * v55);
            if ( *((_DWORD *)v57 + 328) == this->gattlingValue && v57 != this )
            {
              if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v57 + 388))(*(_DWORD *)(*(_DWORD *)(this->focus
                                                                                                + 108)
                                                                                    + 4 * v55)) == 5
                && !*((_DWORD *)v57 + 329) )
              {
                v58 = (FactoryClass *)this->Factory;
                *((_DWORD *)v57 + 329) = v58;
                this->Factory = 0;
                result = (*(int (__thiscall **)(#377 *, IUnknown *, int))(*(_DWORD *)v57 + 256))(v57, aP1, dword_89C818);
                *((_DWORD *)v57 + 329) = 0;
                this->Factory = v58;
                return result;
              }
              v56 = var120;
            }
            if ( ++v55 >= v56 )
              return 1;
          }
        }
        v202 = 64;
        ++*(_DWORD *)&HouseClass_Player.__pad_5568[21752];
        v59 = aP1->field_0;
        v60 = (*(int (__thiscall **)(#377 *, IUnknown **, _DWORD, int))(this->queuedMission)(this, &v238, 0, 64);
        if ( (*(unsigned __int8 (__thiscall **)(IUnknown *, int))(v59 + 216))(aP1, v60) )
        {
          (*(void (__thiscall **)(IUnknown *, _DWORD))(aP1->field_0 + 292))(aP1, 0);
          v61 = aP1->field_0;
          v62 = (*(int (__thiscall **)(#377 *, char *, _DWORD))(this->queuedMission)(this, v240, 0);
          (*(void (__thiscall **)(IUnknown *, int))(v61 + 436))(aP1, v62);
          (*(void (__thiscall **)(IUnknown *, int))(aP1->field_0 + 292))(aP1, 1);
          (*(void (__thiscall **)(#377 *, int, IUnknown *))(this->temporalTargetingMe)(this, 2, aP1);
          (*(void (__thiscall **)(#377 *, int, IUnknown *))(this->temporalTargetingMe)(this, 24, aP1);
          (*(void (__thiscall **)(#377 *, int, _DWORD))(this->q1E8)(this, 16, 0);
          goto LABEL_99;
        }
        goto LABEL_146;
      }
      if ( !Team::AllMembersValid((int *)this) )
        (*(void (__thiscall **)(#377 *, int, _DWORD))(this->q1E8)(this, 16, 0);
      v29 = (_DWORD *)(*(int (__thiscall **)(#377 *, int *))(this->q048)(this, &var110);
      LOWORD(v205) = *v29 / 256;
      v30 = (BuildingClass *)this->Owner;
      HIWORD(v205) = v29[1] / 256;
      v207 = v205;
      if ( v30 )
      {
        v31 = (_DWORD *)(*(int (__thiscall **)(BuildingClass *, int *))(*(_DWORD *)v30->__pad_0 + 72))(v30, &v214);
        v32 = *v31 / 256;
        v33 = v31[1] / 256;
        v34 = (__int16 *)(*(int (__thiscall **)(#377 *, _DWORD *))(this->airstrikeTintTimer)(this, v232);
        v35 = *v34;
        v206 = (VectorClass *)(__int16)v32;
        v36 = v34[1];
        v206 = (VectorClass *)(__int16)v33;
        v37 = ((double (__cdecl *)(double, double))Math::CalcAngle)(
                (double)v36 - (double)(__int16)v33,
                (double)(__int16)v32 - (double)v35);
        LOWORD(v206) = Math::RoundToInt((v37 - 1.570796326794897) * -10430.06004058427);
        v38 = ((((unsigned int)v206 >> 12) + 1) >> 1) & 7;
        v39 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v205);
        if ( Cell::IsBridge(v39) == (_DWORD *)this )
        {
          v40 = (_WORD *)(4 * (v38 & 7) + 9041544);
          do
          {
            v41 = HIWORD(v205) + v40[1];
            LOWORD(v203) = *v40 + v205;
            HIWORD(v203) = v41;
            v205 = v203;
            v42 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v205);
          }
          while ( Cell::IsBridge(v42) == (_DWORD *)this );
        }
      }
      if ( this->Owner
        && *((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v205) + 59) == 2 )
      {
        v197 = 0.0;
        v222 = 0;
        v223[0] = 0;
        CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v205);
        JUMPOUT(0x444329);
      }
      v43 = *(_DWORD *)this;
      v218 = 0;
      v44 = (_DWORD *)(*(int (__thiscall **)(#377 *, IUnknown **))(v43 + 72))(this, &v211);
      LODWORD(v197) = 0;
      LOWORD(v202) = *v44 / 256;
      v45 = v44[1];
      *(_QWORD *)&v196 = (unsigned int)&v217;
      v195 = 0x100000000LL;
      HIWORD(v202) = v45 / 256;
      v46 = aP1->field_0;
      v219 = v202;
      v47 = (*(int (__thiscall **)(IUnknown *))(v46 + 132))(aP1);
      v204 = *LayerClass::Pathfinding_Find(
                (IUnknown *)&stru_87C374.__pad_14B0[8132],
                (IUnknown *)&v219,
                (IUnknown *)v232,
                (IUnknown *)&v219,
                *(IUnknown **)(v47 + 1660),
                (IUnknown *)-1,
                0,
                0,
                (IUnknown *)1,
                (IUnknown *)1,
                0,
                0,
                0,
                (IUnknown *)1,
                (IUnknown *)LODWORD(v196),
                (MouseClass *)SBYTE4(v196),
                0);
      v48 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v204);
      v49 = aP1->field_0;
      v50 = (*(int (__thiscall **)(void *, _BYTE *, int))(*(_DWORD *)v48 + 72))(v48, v241, 64);
      if ( (*(unsigned __int8 (__thiscall **)(IUnknown *, int))(v49 + 216))(aP1, v50) )
      {
        v51 = (BuildingClass *)this->Owner;
        if ( v51 )
        {
          (*(void (__thiscall **)(IUnknown *, BuildingClass *, int))(aP1->field_0 + 1152))(aP1, v51, 1);
          (*(void (__thiscall **)(IUnknown *, int, _DWORD))(aP1->field_0 + 488))(aP1, 2, 0);
        }
        (*(void (__thiscall **)(IUnknown *, _DWORD))(aP1->field_0 + 292))(aP1, 0);
        v52 = aP1->field_0;
        v53 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v197);
        Coords = (ObjectClass *)CellClass::GetCoords(v53, (IUnknown *)v242);
        (*(void (__thiscall **)(IUnknown *, ObjectClass *))(v52 + 436))(aP1, Coords);
        (*(void (__thiscall **)(IUnknown *, int))(aP1->field_0 + 292))(aP1, 1);
        return 2;
      }
      return 0;
    case 1:
      HouseClass::UpdateBuildState(this->focus, (BuildingTypeClass *)2);
      v5 = (VectorClass *)this->focus;
      v202 = (int)aP1;
      v5[1381].Capacity = -1;
      if ( Array::ContainsValue((int *)this, (IUnknown *)v202)
        || HouseClass::IonSensitivesShouldBeOffline() && !*(_BYTE *)(*(_DWORD *)&v3->__pad_690[52] + 3597) )
      {
        ObjectClass::SetAnim(v3, 0);
        ++*(_DWORD *)&HouseClass_Player.__pad_5568[21752];
        if ( HouseClass::IonSensitivesShouldBeOffline() )
        {
          PlacementCellsAlt = MapClass::FindPlacementCellsAlt((char *)v3, (IUnknown *)&v233, (IUnknown *)this);
          v16 = (IUnknown *)v3->field_0;
          var120 = *PlacementCellsAlt;
          v229[1] = 0;
          v228 = ((__int16)var120 << 8) + 128;
          v229[0] = (SHIWORD(var120) << 8) + 128;
          Field9 = AbstractClass::GetField9();
          if ( (*(unsigned __int8 (__thiscall **)(IUnknown *, int *, int))v16->__pad_D8)(v3, &v228, Field9) )
          {
LABEL_99:
            --*(_DWORD *)&HouseClass_Player.__pad_5568[21752];
            return 2;
          }
        }
        else
        {
          v18 = v3->field_0;
          v19 = AbstractClass::GetField9();
          v20 = (*(int (__thiscall **)(#377 *, _BYTE *, IUnknown *, int))(this->lineTrailer)(this, v241, v3, v19);
          if ( (*(unsigned __int8 (__thiscall **)(IUnknown *, int))(v18 + 216))(v3, v20) )
          {
            (*(void (__thiscall **)(#377 *, int, IUnknown *))(this->temporalTargetingMe)(this, 2, v3);
            (*(void (__thiscall **)(#377 *, int, IUnknown *))(this->temporalTargetingMe)(this, 24, v3);
            v21 = (IUnknown *)v3->field_0;
            v22 = (*(int (__thiscall **)(#377 *, int *, IUnknown *))(this->lineTrailer)(this, v242, v3);
            (*(void (__thiscall **)(IUnknown *, int))&v21->__pad_188[44])(v3, v22);
            *(_DWORD *)&v3->__pad_690[60] = this;
            v23 = (BuildingClass *)this->Owner;
            if ( v23 && !*(_BYTE *)(*(_DWORD *)&v3->__pad_690[52] + 3597) )
            {
              (*(void (__thiscall **)(IUnknown *, BuildingClass *, int))(v3->field_0 + 1152))(v3, v23, 1);
              (*(void (__thiscall **)(IUnknown *, int, _DWORD))(v3->field_0 + 488))(v3, 2, 0);
            }
            goto LABEL_99;
          }
        }
      }
      else
      {
        if ( *(_BYTE *)(*(_DWORD *)&v3->__pad_690[52] + 3597) )
          return 0;
        LOWORD(v214) = *(_WORD *)&stru_87C374.__pad_14B0[8388];
        HIWORD(v214) = *(_WORD *)&stru_87C374.__pad_14B0[8388];
        HIWORD(v208) = *(_WORD *)&stru_87C374.__pad_14B0[8376];
        LOWORD(v220) = *(_WORD *)&stru_87C374.__pad_14B0[8384];
        HIWORD(v220) = -*(_WORD *)&stru_87C374.__pad_14B0[8384];
        LOWORD(var120) = *(_WORD *)&stru_87C374.__pad_14B0[8384] + 1;
        HIWORD(var120) = *(_WORD *)&stru_87C374.__pad_14B0[8376] - *(_WORD *)&stru_87C374.__pad_14B0[8384];
        LOWORD(v208) = *(_WORD *)&stru_87C374.__pad_14B0[8388] + *(_WORD *)&stru_87C374.__pad_14B0[8384] + 1;
        v6 = *(_WORD *)&stru_87C374.__pad_14B0[8376]
           - *(_WORD *)&stru_87C374.__pad_14B0[8384]
           + *(_WORD *)&stru_87C374.__pad_14B0[8388];
        v7 = *(_DWORD *)this;
        HIWORD(v208) = v6;
        v8 = (_DWORD *)(*(int (__thiscall **)(#377 *, char *))(v7 + 72))(this, var78);
        LOWORD(v219) = *v8 / 256;
        HIWORD(v219) = v8[1] / 256;
        if ( (__int16)(v219 - v207) - (__int16)(HIWORD(v219) - HIWORD(v207)) <= *(int *)&stru_87C374.__pad_14B0[8392] )
        {
          p_a1 = *(_DWORD *)&stru_87C374.__pad_14B0[8396];
          LOWORD(v207) = v207 - 1;
          HIWORD(v207) = v6;
          v200 = 0;
          v206 = (VectorClass *)v207;
          v9 = (int *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536);
        }
        else
        {
          LOWORD(aP2) = *(_WORD *)&stru_87C374.__pad_14B0[8392];
          HIWORD(v219) = v6;
          HIWORD(aP2) = -*(_WORD *)&stru_87C374.__pad_14B0[8392];
          LOWORD(v219) = v207 - 1;
          LOWORD(v207) = *(_WORD *)&stru_87C374.__pad_14B0[8392] + v207 - 1;
          HIWORD(v207) = v6 - *(_WORD *)&stru_87C374.__pad_14B0[8392];
          v206 = (VectorClass *)v207;
          v9 = (int *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536);
          p_a1 = *(_DWORD *)&stru_87C374.__pad_14B0[8396];
          v200 = 0;
        }
        v10 = Random::Range(v9, (IUnknown *)v200, (IUnknown *)p_a1);
        LOWORD(v206) = v10 + (_WORD)v206;
        HIWORD(v206) += v10;
        p_a1 = 0;
        v226[0] = ((__int16)v206 << 8) + 128;
        ++*(_DWORD *)&HouseClass_Player.__pad_5568[21752];
        v11 = (IUnknown *)v3->field_0;
        v226[1] = (SHIWORD(v206) << 8) + 128;
        v226[2] = 0;
        if ( (*(unsigned __int8 (__thiscall **)(IUnknown *, _DWORD *, _DWORD))v11->__pad_D8)(v3, v226, 0) )
        {
          v12 = (BuildingClass *)this->Owner;
          if ( v12 )
          {
            (*(void (__thiscall **)(IUnknown *, BuildingClass *, int))(v3->field_0 + 1152))(v3, v12, 1);
            (*(void (__thiscall **)(IUnknown *, int))(v3->field_0 + 496))(v3, 2);
          }
          else
          {
            v205 = *MapClass::FindPlacementCellsAlt((char *)v3, (IUnknown *)&v230, (IUnknown *)this);
            if ( v205 == dword_89C818 )
            {
              (*(void (__thiscall **)(IUnknown *, _DWORD, int))(v3->field_0 + 1152))(v3, 0, 1);
              (*(void (__thiscall **)(IUnknown *, int))(v3->field_0 + 496))(v3, 2);
            }
            else
            {
              v13 = (IUnknown *)v3->field_0;
              v14 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v205);
              (*(void (__thiscall **)(IUnknown *, void *, int))&v13->__pad_430[80])(v3, v14, 1);
              (*(void (__thiscall **)(IUnknown *, int))(v3->field_0 + 496))(v3, 2);
            }
          }
          goto LABEL_99;
        }
      }
LABEL_146:
      --*(_DWORD *)&HouseClass_Player.__pad_5568[21752];
      result = 0;
      break;
    case 2:
      if ( (unsigned __int8)House::IsCurrentPlayer(*((#375 **)this + 135)) )
        return 0;
      HouseClass::UpdateBuildState(this->focus, (BuildingTypeClass *)6);
      *(_DWORD *)(this->focus + 22092) = -1;
      v123 = BuildingQueue::AllocSlot((_DWORD *)(this->focus + 22272), *(_DWORD *)(aP1->field_520 + 3576));
      v124 = (VectorClass *)aP1->field_520;
      v208 = (VectorClass *)v123;
      v214 = 0;
      var110 = 0;
      v215 = 0;
      aP2 = v124;
      if ( v123 && ((v125 = (__int16 *)(v123 + 4), *(_WORD *)(v123 + 4)) || *(_WORD *)(v123 + 6)) )
      {
        if ( LOBYTE(aP2[232].Capacity) || BuildingTypeClass::ProcessData(*((_DWORD **)this + 135), aP2, v125) )
        {
          v134 = v125[1];
          v135 = *v125;
          v133 = v208;
          v132 = (v135 << 8) + 128;
          v131 = (v134 << 8) + 128;
          v214 = v132;
          var110 = v131;
          v215 = 0;
        }
        else
        {
          v126 = HouseClass::ScanBuildLocation(
                   this->focus,
                   (VectorClass *)&v236,
                   aP2,
                   globalHelper_005F80,
                   -1);
          v127 = *(__int16 *)v126;
          v128 = *((__int16 *)v126 + 1);
          v215 = 0;
          v129 = (v127 << 8) + 128;
          v130 = (v128 << 8) + 128;
          v214 = v129;
          var110 = v130;
          if ( v129 == aP5.field_0 && v130 == unk_89C84C && !unk_89C850 )
            return 0;
          LOWORD(var120) = v129 / 256;
          HIWORD(var120) = v130 / 256;
          *(_DWORD *)v125 = var120;
          v131 = var110;
          v132 = v214;
          v133 = v208;
        }
      }
      else
      {
        if ( LOBYTE(aP2[232].Capacity) )
        {
          v138 = *HouseClass::FindBestProductionBuilding(*((void **)this + 135), v237, (int)aP2);
          v220 = v138;
          if ( v138 == dword_89C818 )
          {
            v131 = var110;
            v132 = v214;
          }
          else
          {
            v139 = (SHIWORD(v138) << 8) + 128;
            v132 = ((__int16)v138 << 8) + 128;
            v131 = v139;
            v214 = v132;
            var110 = v139;
            v215 = 0;
          }
        }
        else
        {
          v136 = HouseClass::ScanBuildLocation(
                   this->focus,
                   (VectorClass *)&v235,
                   aP2,
                   globalHelper_005F80,
                   -1);
          v137 = (*((__int16 *)v136 + 1) << 8) + 128;
          v132 = (*(__int16 *)v136 << 8) + 128;
          v131 = v137;
          v214 = v132;
          var110 = v137;
          v215 = 0;
        }
        v133 = v208;
        if ( v208 && (v132 != aP5.field_0 || v131 != unk_89C84C || v215 != (IUnknown *)unk_89C850) )
        {
          LOWORD(var120) = v132 / 256;
          HIWORD(var120) = v131 / 256;
          v208->Items = (void *)var120;
          v131 = var110;
          v132 = v214;
        }
      }
      if ( v132 == aP5.field_0 && v131 == unk_89C84C && v215 == (IUnknown *)unk_89C850 )
      {
        if ( LOBYTE(aP2[232].Capacity) )
        {
          if ( (VectorClass *)BuildingQueue::AllocSlot((_DWORD *)(this->focus + 22272), -1) == v133 )
          {
            FreeSlot = BuildingQueue::FindFreeSlot((_DWORD *)(this->focus + 22272), -1);
            v186 = this->focus + 22276;
            v187 = *(_DWORD *)(v186 + 16);
            if ( FreeSlot < v187 )
            {
              v188 = v187 - 1;
              v189 = FreeSlot;
              *(_DWORD *)(v186 + 16) = v188;
              if ( FreeSlot < v188 )
              {
                v190 = 16 * FreeSlot;
                do
                {
                  v191 = *(_DWORD *)(v186 + 4);
                  v192 = (_DWORD *)(v191 + v190 + 16);
                  ecx228a = (_DWORD *)(v190 + v191);
                  ++v189;
                  v190 += 16;
                  *ecx228a = *v192;
                  ecx228a[1] = v192[1];
                  ecx228a[2] = v192[2];
                  ecx228a[3] = v192[3];
                }
                while ( v189 < *(_DWORD *)(v186 + 16) );
              }
            }
          }
        }
        return 0;
      }
      LOWORD(var120) = v132 / 256;
      HIWORD(var120) = v131 / 256;
      v140 = (VectorClass *)this->focus;
      a1 = var120;
      v141 = aP1->field_0;
      v202 = (int)v140;
      p_a1 = (int)&a1;
      v142 = (void *)(*(int (__thiscall **)(IUnknown *))(v141 + 136))(aP1);
      v143 = BuildingClass::ApplyFoundationDamage(v142, &a1, (HouseClass *)v202);
      if ( v143 )
      {
        v144 = v143 - 1;
        if ( !v144 )
        {
          v145 = HouseClass::FailedToPlaceNode((int)v133);
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] )
          {
            if ( v145 > *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3656) )
            {
              if ( v133 )
              {
                v146 = (*(int (__thiscall **)(int, VectorClass *))(*(_DWORD *)(this->focus + 22276) + 20))(
                         this->focus + 22276,
                         v133);
                v147 = this->focus + 22276;
                v148 = *(_DWORD *)(v147 + 16);
                if ( v146 < v148 )
                {
                  v149 = v148 - 1;
                  v150 = (VectorClass *)v146;
                  *(_DWORD *)(v147 + 16) = v149;
                  if ( v146 < v149 )
                  {
                    v151 = 16 * v146;
                    do
                    {
                      v152 = *(_DWORD *)(v147 + 4);
                      v153 = (_DWORD *)(v152 + v151 + 16);
                      v154 = (_DWORD *)(v151 + v152);
                      v150 = (VectorClass *)((char *)v150 + 1);
                      v151 += 16;
                      *v154 = *v153;
                      v154[1] = v153[1];
                      v154[2] = v153[2];
                      v154[3] = v153[3];
                    }
                    while ( (int)v150 < *(_DWORD *)(v147 + 16) );
                  }
                }
              }
            }
          }
          return 1;
        }
        if ( v144 != 1 )
          return 0;
      }
      else if ( (*(unsigned __int8 (__thiscall **)(IUnknown *, int *, _DWORD))(aP1->field_0 + 216))(aP1, &v214, 0) )
      {
        ecx185 = *(int ***)&aP1->__pad_2B8[32];
        if ( ecx185 )
          BuildingClass::RefreshOccupierCache(ecx185);
        if ( v133 )
        {
          v155 = (VectorClass *)this->focus;
          if ( *(_DWORD *)(aP1->field_520 + 3576) == *(_DWORD *)&v155[1380].IsInitialized )
            *(_DWORD *)&v155[1380].IsInitialized = -1;
        }
        if ( *(_DWORD *)&aP1->__pad_A8[4] == -1 && *(_DWORD *)&aP1->__pad_A8[12] == 18 )
          (*(void (__thiscall **)(IUnknown *))(aP1->field_0 + 492))(aP1);
        if ( (*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 44))(aP1) == 6 )
        {
          v157 = aP1->field_520;
          if ( *(_BYTE *)(v157 + 5824) )
          {
            v200 = aP1->field_520;
            LOWORD(v209) = (int)v211 / 256;
            HIWORD(v209) = (int)v212 / 256;
            v199 = (VectorClass *)this->focus;
            v223[0] = v209;
            globalHelper_088570((MouseClass *)v223, v199, (MouseClass *)v200);
          }
          else
          {
            v158 = *(_DWORD *)(v157 + 3668);
            if ( v158 && *(_BYTE *)(v158 + 680) )
            {
              v200 = aP1->field_520;
              LOWORD(v209) = (int)v211 / 256;
              HIWORD(v209) = (int)v212 / 256;
              v199 = (VectorClass *)this->focus;
              v222 = v209;
              ScanBuildingPlacementCells((MouseClass *)&v222, v199, (MouseClass *)v200);
            }
          }
        }
        if ( aP1->field_520 == *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2172) )
        {
          eax200 = (*(int (__thiscall **)(int, VectorClass *))(*(_DWORD *)(this->focus + 22276) + 20))(
                     this->focus + 22276,
                     v133);
          v159 = (VectorClass *)this->focus;
          v161 = eax200 + 1;
          v162 = (int)v159[1393].Items;
          if ( eax200 + 1 < v162 )
          {
            v163 = v159[1392].Capacity;
            for ( i = (int *)(v163 + 16 * v161); *i < 0 || !*(_BYTE *)(*((_DWORD *)g_TriggerTypeCount + *i) + 5894); i += 4 )
            {
              if ( ++v161 >= v162 )
                return 2;
            }
            v165 = aP1->field_9C;
            v166 = *(_DWORD *)aP1->__pad_A0;
            v215 = (IUnknown *)aP1->field_A4;
            LOWORD(v208) = v165 / 256;
            HIWORD(v208) = v166 / 256;
            *(_DWORD *)(16 * v161 + v163 + 4) = v208;
          }
        }
        return 2;
      }
      if ( !v133 )
        return 0;
      v167 = (*(int (__thiscall **)(int, VectorClass *))(*(_DWORD *)(this->focus + 22276) + 20))(
               this->focus + 22276,
               v133);
      ecx209 = *((_DWORD *)g_TriggerTypeCount + (int)v133->vtable0);
      if ( !*(_BYTE *)(ecx209 + 5489) && !*(_BYTE *)(ecx209 + 5815) )
      {
        v168 = (VectorClass *)this->focus;
        v170 = 0;
        v171 = (int)v212 / 256;
        v172 = v214 / 256;
        if ( (int)v168[1393].Items <= 0 )
          return 0;
        v173 = 0;
        do
        {
          v174 = v168[1392].Capacity;
          v175 = *(_WORD *)(v174 + v173 + 4) == (unsigned __int16)v171;
          v176 = v174 + v173 + 4;
          if ( v175 && *(_WORD *)(v176 + 2) == (_WORD)v172 )
          {
            aP2 = 0;
            *(_DWORD *)v176 = 0;
          }
          v168 = (VectorClass *)this->focus;
          ++v170;
          v173 += 16;
        }
        while ( v170 < (int)v168[1393].Items );
        return 0;
      }
      v177 = this->focus + 22276;
      v178 = *(_DWORD *)(v177 + 16);
      if ( v167 < v178 )
      {
        v179 = v178 - 1;
        v180 = v167;
        *(_DWORD *)(v177 + 16) = v179;
        if ( v167 < v179 )
        {
          v181 = 16 * v167;
          do
          {
            v182 = *(_DWORD *)(v177 + 4);
            v183 = (_DWORD *)(v182 + v181 + 16);
            v184 = (_DWORD *)(v181 + v182);
            ++v180;
            v181 += 16;
            *v184 = *v183;
            v184[1] = v183[1];
            v184[2] = v183[2];
            v184[3] = v183[3];
          }
          while ( v180 < *(_DWORD *)(v177 + 16) );
          return 0;
        }
      }
      return 0;
    case 3:
      return 0;
  }
  return result;
}



// ==== 0x004456D0  BuildingClass::UpdateSidebar  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::vt_312_(#377 *this)
{
  int result; // eax
  int j; // esi
  int m; // esi
  int k; // esi
  int i; // esi

  result = this->focus; /*0x4456d0*/
  if ( (#375 *)result == HouseClass_Player ) /*0x4456df*/
  {
    LOBYTE(result) = this->inLimbo; /*0x4456e5*/
    if ( !(_BYTE)result ) /*0x4456ed*/
    {
      LOBYTE(result) = this->isDiscoveredByCurrentPlayer; /*0x4456f3*/
      if ( (_BYTE)result ) /*0x4456fb*/
      {
        LOBYTE(result) = this->HasPower; /*0x445701*/
        if ( (_BYTE)result ) /*0x445709*/
        {
          result = *(_DWORD *)(this->gattlingValue + 3768) - 3; /*0x44571b*/
          switch ( *(_DWORD *)(this->gattlingValue + 3768) ) /*0x44572f*/
          {
            case 3: /*0x44572f*/
              result = MEMORY[0xA8B228]; /*0x445800*/
              for ( i = 0; i < MEMORY[0xA8B228]; ++i ) /*0x445809*/
              {
                if ( HouseClass::CanBuild(*((_DWORD *)MEMORY[0xA8B21C] + i), 0, 1) ) /*0x44581e*/
                  SidebarClass::AddCameo((int *)&MEMORY[0x87F7E8], 3, i); /*0x44582f*/
                result = MEMORY[0xA8B228]; /*0x445834*/
              }
              break; /*0x44583c*/
            case 7: /*0x44572f*/
              result = g_TriggerClassCount; /*0x445736*/
              for ( j = 0; j < g_TriggerClassCount; ++j ) /*0x44573f*/
              {
                if ( HouseClass::CanBuild(*((_DWORD *)g_TriggerTypeCount + j), 0, 1) ) /*0x445758*/
                  SidebarClass::AddCameo((int *)&MEMORY[0x87F7E8], 7, j); /*0x445769*/
                result = g_TriggerClassCount; /*0x44576e*/
              }
              break; /*0x445776*/
            case 0x10: /*0x44572f*/
              result = MEMORY[0xA8E358]; /*0x4457bf*/
              for ( k = 0; k < MEMORY[0xA8E358]; ++k ) /*0x4457c8*/
              {
                if ( HouseClass::CanBuild(*((_DWORD *)MEMORY[0xA8E34C] + k), 0, 1) ) /*0x4457de*/
                  SidebarClass::AddCameo((int *)&MEMORY[0x87F7E8], 16, k); /*0x4457ef*/
                result = MEMORY[0xA8E358]; /*0x4457f4*/
              }
              break; /*0x4457fc*/
            case 0x28: /*0x44572f*/
              result = g_CrateCount; /*0x44577a*/
              for ( m = 0; m < g_CrateCount; ++m ) /*0x445783*/
              {
                if ( HouseClass::CanBuild(*((_DWORD *)g_UnitTypeCount2 + m), 0, 1) ) /*0x44579d*/
                  SidebarClass::AddCameo((int *)&MEMORY[0x87F7E8], 40, m); /*0x4457ae*/
                result = g_CrateCount; /*0x4457b3*/
              }
              break; /*0x4457bb*/
            default:
              return result;
          }
        }
      }
    }
  }
  return result; /*0x445778*/
}


// ==== 0x00445880  BuildingClass::Sell  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::Sell(#377 *this)
{
  char *v2; // edx
  int v3; // eax
  int v4; // ecx
  _DWORD *v5; // edi
  int v6; // ebp
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // edx
  char *v16; // ecx
  char v17; // bl
  #381 *v18; // eax
  int i; // ebp
  int v20; // edx
  void **v21; // edi
  void *v22; // eax
  int v23; // ecx
  int v24; // kr08_4
  void **v25; // eax
  void **v26; // eax
  int v27; // ecx
  __int16 v28; // di
  __int16 v29; // bp
  void **v30; // eax
  void **v31; // eax
  _DWORD *v32; // ecx
  int FoundationWidth; // ebp
  int FoundationHeight; // edi
  int v35; // ecx
  int v36; // eax
  int v37; // ecx
  int v38; // ebp
  int v39; // edi
  __int16 v40; // bx
  _BYTE *v41; // eax
  int *v42; // eax
  int v43; // ecx
  int v44; // edx
  int v45; // eax
  int v46; // ecx
  int result; // eax
  char v48; // [esp+13h] [ebp-2Dh]
  int v49; // [esp+14h] [ebp-2Ch]
  int v50; // [esp+14h] [ebp-2Ch]
  int v51; // [esp+14h] [ebp-2Ch]
  int v52; // [esp+14h] [ebp-2Ch]
  int v53; // [esp+18h] [ebp-28h] BYREF
  int v54; // [esp+1Ch] [ebp-24h] BYREF
  int v55; // [esp+20h] [ebp-20h] BYREF
  __int16 v56; // [esp+28h] [ebp-18h]
  __int16 v57; // [esp+2Ah] [ebp-16h]
  _DWORD v58[4]; // [esp+30h] [ebp-10h] BYREF

  v48 = 0; /*0x445889*/
  v2 = (char *)this + 156; /*0x445894*/
  v3 = this->q027; /*0x445896*/
  v4 = this->owningHouseIndex; /*0x445898*/
  v58[2] = *((_DWORD *)v2 + 2); /*0x44589e*/
  LOWORD(v55) = v3 / 256; /*0x4458ae*/
  HIWORD(v55) = v4 / 256; /*0x4458c1*/
  if ( !this->inLimbo && this->gattlingValue ) /*0x4458d4*/
  {
    v5 = (_DWORD *)((char *)this + 1480); /*0x4458e4*/
    v6 = 8; /*0x4458ea*/
    do /*0x445903*/
    {
      if ( *v5 ) /*0x4458ef*/
      {
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v5 + 248))(*v5); /*0x4458f7*/
        *v5 = 0; /*0x4458fd*/
      }
      ++v5; /*0x4458ff*/
      --v6; /*0x445902*/
    }
    while ( v6 ); /*0x445903*/
    if ( *(_BYTE *)(this->gattlingValue + 5836) ) /*0x44590b*/
    {
      if ( this->ActuallyPlacedOnMap ) /*0x445915*/
      {
        --*(_DWORD *)(this->focus + 21388); /*0x44592c*/
        v7 = this->focus; /*0x445932*/
        if ( *(int *)(v7 + 21388) < 0 ) /*0x44593e*/
          *(_DWORD *)(v7 + 21388) = 0; /*0x445940*/
      }
    }
    v8 = this->gattlingValue; /*0x445946*/
    if ( *(_BYTE *)(v8 + 5835) ) /*0x44594c*/
    {
      if ( this->ActuallyPlacedOnMap ) /*0x445956*/
      {
        *(_DWORD *)(this->focus + 724) -= *(_DWORD *)(v8 + 6016); /*0x445974*/
        v9 = this->focus; /*0x44597a*/
        if ( *(int *)(v9 + 724) < 0 ) /*0x445986*/
          *(_DWORD *)(v9 + 724) = 0; /*0x445988*/
      }
    }
    v10 = *(_DWORD *)(this->gattlingValue + 5476); /*0x445994*/
    if ( v10 ) /*0x44599c*/
    {
      if ( this->ActuallyPlacedOnMap ) /*0x44599e*/
      {
        *(_DWORD *)(this->focus + 356) -= v10; /*0x4459b6*/
        v11 = this->focus; /*0x4459bc*/
        if ( *(int *)(v11 + 356) < 0 ) /*0x4459c8*/
          *(_DWORD *)(v11 + 356) = 0; /*0x4459ca*/
      }
    }
    v12 = *(_DWORD *)(this->gattlingValue + 5480); /*0x4459d6*/
    if ( v12 ) /*0x4459de*/
    {
      if ( this->ActuallyPlacedOnMap ) /*0x4459e0*/
      {
        *(_DWORD *)(this->focus + 360) -= v12; /*0x4459f8*/
        v13 = this->focus; /*0x4459fe*/
        if ( *(int *)(v13 + 360) < 0 ) /*0x445a0a*/
          *(_DWORD *)(v13 + 360) = 0; /*0x445a0c*/
      }
    }
    if ( *(_BYTE *)(this->gattlingValue + 5822) ) /*0x445a18*/
      BuildingClass::DemolishBridgeCheck((int *)this, 0); /*0x445a25*/
    if ( !MEMORY[0x87F7E8][539633] ) /*0x445a30*/
    {
      if ( *(_BYTE *)(this->gattlingValue + 5832) ) /*0x445a38*/
        (*(void (__thiscall **)(#377 *, _DWORD))(this->unknown_bool_4F8)(this, MEMORY[0x87F7E8][29708]); /*0x445a4c*/
      if ( *(_BYTE *)(this->gattlingValue + 3377) ) /*0x445a58*/
        (*(void (__thiscall **)(#377 *, _DWORD))(this->queueUpToEnter)(this, MEMORY[0x87F7E8][29708]); /*0x445a6c*/
      v14 = this->gattlingValue; /*0x445a72*/
      if ( (!*(_DWORD *)(v14 + 1032) || !*(_BYTE *)(v14 + 1516)) /*0x445a8e*/
        && !(*(unsigned __int8 (__thiscall **)(#377 *))(this->needsRedraw)(this) )
      {
        RecalculateBuildingFoundation((_DWORD **)this); /*0x445a9a*/
      }
    }
    v15 = 0; /*0x445a9f*/
    v16 = (char *)this + 1516; /*0x445aa1*/
    while ( !*(_DWORD *)v16 || !*(_BYTE *)(*(_DWORD *)v16 + 5987) ) /*0x445ab4*/
    {
      ++v15; /*0x445ab6*/
      v16 += 4; /*0x445ab7*/
      if ( v15 >= 3 ) /*0x445abd*/
        goto LABEL_40; /*0x445abd*/
    }
    v48 = 1; /*0x445ac1*/
LABEL_40:
    if ( !LOBYTE(MEMORY[0x87F7E8][539758]) ) /*0x445acd*/
    {
      v17 = 1; /*0x445acf*/
      goto LABEL_75; /*0x445ad1*/
    }
    v18 = (#381 *)MEMORY[0x87F7E8][7806]; /*0x445ad6*/
    if ( this->gattlingValue == *(_DWORD *)(MEMORY[0x87F7E8][7806] + 2172) ) /*0x445ae7*/
    {
      for ( i = 0; i < 8; i += 2 ) /*0x445aed*/
      {
        v20 = i & 7; /*0x445af3*/
        LOWORD(v49) = v55 + LOWORD(MEMORY[0x87F7E8][v20 + 32680]); /*0x445b13*/
        HIWORD(v49) = HIWORD(v55) + HIWORD(MEMORY[0x87F7E8][v20 + 32680]); /*0x445b1c*/
        v53 = v49; /*0x445b2b*/
        v21 = (void **)CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v53); /*0x445b34*/
        BuildingClass::ValidatePlacement(v21, 0); /*0x445b3a*/
        v22 = v21[17]; /*0x445b3f*/
        if ( v22 != (void *)-1 /*0x445b60*/
          && *(_BYTE *)(*(_DWORD *)(MEMORY[0x87F7E8][528743] + 4 * (_DWORD)v22) + 680)
          && *((_BYTE *)v21 + 286) < 0x10u )
        {
          BuildingClass::SellEffects((int)v21, 200); /*0x445b69*/
        }
      }
      v18 = (#381 *)MEMORY[0x87F7E8][7806]; /*0x445b7a*/
    }
    v23 = this->gattlingValue; /*0x445b81*/
    if ( v23 == *((_DWORD *)v18 + 539) || v23 == *((_DWORD *)v18 + 541) ) /*0x445b97*/
    {
      v24 = v55; /*0x445b9d*/
      HIWORD(v50) = HIWORD(v55); /*0x445ba2*/
      LOWORD(v50) = v55 - 1; /*0x445baf*/
      v53 = v50; /*0x445bbe*/
      v25 = (void **)CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v53); /*0x445bc2*/
      BuildingClass::ValidatePlacement(v25, 0); /*0x445bc9*/
      HIWORD(v50) = HIWORD(v24); /*0x445bd1*/
      LOWORD(v50) = v24 + 3; /*0x445bd6*/
      v53 = v50; /*0x445be3*/
      v26 = (void **)CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v53); /*0x445bee*/
      BuildingClass::ValidatePlacement(v26, 0); /*0x445bf5*/
      v18 = (#381 *)MEMORY[0x87F7E8][7806]; /*0x445bfa*/
    }
    v27 = this->gattlingValue; /*0x445bff*/
    if ( v27 == *((_DWORD *)v18 + 540) || v27 == *((_DWORD *)v18 + 542) ) /*0x445c15*/
    {
      v28 = HIWORD(v55); /*0x445c17*/
      v29 = v55; /*0x445c1b*/
      v53 = v55 - 0x10000; /*0x445c36*/
      v30 = (void **)CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v53); /*0x445c40*/
      BuildingClass::ValidatePlacement(v30, 0); /*0x445c47*/
      LOWORD(v51) = v29; /*0x445c53*/
      HIWORD(v51) = v28 + 3; /*0x445c58*/
      v53 = v51; /*0x445c68*/
      v31 = (void **)CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v53); /*0x445c6c*/
      BuildingClass::ValidatePlacement(v31, 0); /*0x445c73*/
    }
    v32 = (_DWORD *)this->gattlingValue; /*0x445c78*/
    if ( !v32[918] ) /*0x445c7e*/
    {
      FoundationWidth = BuildingTypeClass::GetFoundationWidth(v32); /*0x445c97*/
      FoundationHeight = BuildingTypeClass::GetFoundationHeight(this->gattlingValue, 0); /*0x445ca0*/
      v35 = *(_DWORD *)(*(int (__thiscall **)(#377 *, int *))(this->airstrikeTintTimer)(this, &v55); /*0x445caf*/
      v36 = 0; /*0x445cb1*/
      v58[0] = v35; /*0x445cb3*/
      v37 = FoundationHeight + 2; /*0x445cb7*/
      v53 = 0; /*0x445cbc*/
      v55 = FoundationHeight + 2; /*0x445cc0*/
      if ( FoundationHeight + 2 > 0 ) /*0x445cc4*/
      {
        v38 = FoundationWidth + 2; /*0x445cc6*/
        do /*0x445d33*/
        {
          v39 = 0; /*0x445cc9*/
          if ( v38 > 0 ) /*0x445ccd*/
          {
            v56 = LOWORD(v58[0]) - 1; /*0x445cd9*/
            v57 = HIWORD(v58[0]) - 1; /*0x445cde*/
            v40 = LOWORD(v58[0]) - 1; /*0x445ce7*/
            HIWORD(v52) = v36 + HIWORD(v58[0]) - 1; /*0x445ced*/
            do /*0x445d22*/
            {
              LOWORD(v52) = v40 + v39; /*0x445cf9*/
              v54 = v52; /*0x445d02*/
              v41 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v54); /*0x445d0c*/
              ++v39; /*0x445d19*/
              --v41[290]; /*0x445d1c*/
            }
            while ( v39 < v38 ); /*0x445d22*/
            v37 = v55; /*0x445d24*/
            v36 = v53; /*0x445d28*/
          }
          v53 = ++v36; /*0x445d2f*/
        }
        while ( v36 < v37 ); /*0x445d33*/
      }
    }
    if ( MEMORY[0x87F7E8][7887] ) /*0x445d3d*/
    {
      v42 = (int *)(*(int (__thiscall **)(#377 *, _DWORD *))(this->q12C)(this, v58); /*0x445d49*/
      Cell::CreateCrater(*v42, v42[1], v42[2], v42[3], 0); /*0x445d70*/
    }
    v43 = this->targetingTimer; /*0x445d75*/
    if ( v43 ) /*0x445d7d*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v43 + 248))(v43); /*0x445d81*/
    BuildingClass::DecrementTypeCounter(*((_DWORD **)this + 135), this); /*0x445d8e*/
    *(_BYTE *)(this->focus + 508) = 1; /*0x445d99*/
    BuildingClass::CalcExitCoords(*((int **)this + 135)); /*0x445da6*/
    if ( this->focus == MEMORY[0x87F7E8][528729] ) /*0x445db8*/
    {
      LOBYTE(MEMORY[0x87F7E8][1347]) = 1; /*0x445dc0*/
      MapClass::MarkForRedraw(MEMORY[0x87F7E8], 0); /*0x445dc7*/
    }
    HouseClass::RecordCratePlacement(*((int **)this + 135), this); /*0x445dd3*/
  }
  v17 = TechnoClass::CleanupDeploy(this); /*0x445ddf*/
  if ( v48 ) /*0x445de7*/
    HouseClass::AcquiredThreatNode(*((_BYTE **)this + 135)); /*0x445def*/
  v45 = this->gattlingValue; /*0x445df4*/
  v46 = *(_DWORD *)(v45 + 3768); /*0x445dfa*/
  if ( v46 ) /*0x445e02*/
  {
    LOBYTE(v44) = *(_BYTE *)(v45 + 3278); /*0x445e04*/
    HouseClass::UpdateProduction(this->focus, v46, v44, 0); /*0x445e14*/
  }
LABEL_75:
  result = this->gattlingValue; /*0x445e19*/
  if ( *(_BYTE *)(result + 5822) ) /*0x445e1f*/
  {
    result = MEMORY[0x87F7E8][539633]; /*0x445e29*/
    if ( !MEMORY[0x87F7E8][539633] ) /*0x445e30*/
      this->LaserFenceFrame = 0; /*0x445e32*/
  }
  LOBYTE(result) = v17; /*0x445e3e*/
  return result; /*0x445e3c*/
}


// ==== 0x00445E50  BuildingClass::GetFacingToTarget  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetFacingToTarget(#377 *this)
{
  int v2; // ecx
  int *v3; // edi
  int *v4; // eax
  double v5; // st7
  int v7; // ecx
  int v8; // [esp+20h] [ebp-20h]
  int v9; // [esp+24h] [ebp-1Ch] BYREF
  char v10[12]; // [esp+28h] [ebp-18h] BYREF
  char v11[12]; // [esp+34h] [ebp-Ch] BYREF
  int *v12; // [esp+44h] [ebp+4h]

  if ( (*(unsigned __int8 (__thiscall **)(#377 *))(*(_DWORD *)this + 1020))(this) || (v2 = this->q2B4) == 0 ) /*0x445e6a*/
  {
    v7 = *ProgressTimer::GetValue((_WORD *)this + 452, &v9); /*0x445eec*/
    *v12 = v7; /*0x445ef3*/
    return (int)v12; /*0x445eee*/
  }
  else
  {
    v3 = (int *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v2 + 72))(v2, v10); /*0x445e79*/
    v4 = (int *)(*(int (__thiscall **)(#377 *, char *))(this->q048)(this, v11); /*0x445e82*/
    v8 = *v3; /*0x445e89*/
    v9 = *v4; /*0x445e8d*/
    v5 = Math::CalcAngle((double)v4[1] - (double)v3[1], (double)v8 - (double)v9); /*0x445eac*/
    LOWORD(v9) = Math::RoundToInt((v5 - 1.570796326794897) * -10430.06004058427); /*0x445ec5*/
    *v12 = v9; /*0x445ed3*/
    return (int)v12; /*0x445eca*/
  }
}


// ==== 0x00445F00  BuildingClass::SelectTargetTypeFlags  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::SelectTargetTypeFlags(#377 *this)
{
  _DWORD **v2; // eax
  int v3; // eax
  int v4; // edi
  _DWORD **v5; // eax
  int v6; // eax
  int v8; // [esp+Ch] [ebp+4h]
  int v9; // [esp+10h] [ebp+8h]
  char v10; // [esp+14h] [ebp+Ch]

  if ( *(_DWORD *)(*(int (__thiscall **)(#377 *, _DWORD))(this->barrelRecoil)(this, 0) ) /*0x445f0e*/
  {
    v2 = (_DWORD **)(*(int (__thiscall **)(#377 *, _DWORD))(this->barrelRecoil)(this, 0); /*0x445f19*/
    LOBYTE(v3) = Building::GetRenderType(*v2); /*0x445f21*/
    v4 = v3 | v8; /*0x445f2a*/
  }
  else
  {
    v4 = v8; /*0x445f2e*/
  }
  if ( *(_DWORD *)(*(int (__thiscall **)(#377 *, int))(this->barrelRecoil)(this, 1) ) /*0x445f3e*/
  {
    v5 = (_DWORD **)(*(int (__thiscall **)(#377 *, int))(this->barrelRecoil)(this, 1); /*0x445f49*/
    LOBYTE(v6) = Building::GetRenderType(*v5); /*0x445f51*/
    v4 |= v6; /*0x445f56*/
  }
  return TechnoClass::SelectAutoTarget_Start_AU(v4 | 1, v9, v10); /*0x445f6d*/
}


// ==== 0x00445F80  BuildingClass::CreateUnits  this=BuildingClass  sig=csp ====
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

  v2 = this->behindAnim; /*0x46b323*/
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


// ==== 0x00446FF0  BuildingClass::ToggleRepairMode  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::vt_103_(#377 *this)
{
  int result; // eax
  int v3; // edi
  #375 *v4; // ecx
  _DWORD *v5; // esi
  _DWORD v6[3]; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+18h] [ebp+4h]

  result = v7; /*0x446ff0*/
  if ( v7 == -1 ) /*0x446ffe*/
  {
    this->IsBeingRepaired = this->IsBeingRepaired == 0; /*0x447042*/
  }
  else if ( v7 ) /*0x447002*/
  {
    if ( v7 == 1 ) /*0x447007*/
    {
      LOBYTE(result) = this->IsBeingRepaired; /*0x447009*/
      if ( (_BYTE)result ) /*0x447011*/
        return result; /*0x447011*/
      this->IsBeingRepaired = 1; /*0x447017*/
    }
  }
  else
  {
    result = *((unsigned __int8 *)this + 1768); /*0x447020*/
    if ( !(_BYTE)result ) /*0x447028*/
      return result; /*0x447028*/
    this->IsBeingRepaired = 0; /*0x44702e*/
  }
  if ( this->IsBeingRepaired ) /*0x447048*/
  {
    if ( this->health == *(_DWORD *)(this->gattlingValue + 160) ) /*0x447061*/
    {
      v3 = MEMORY[0x8871E0]->?[3]; /*0x447068*/
    }
    else
    {
      v3 = MEMORY[0x8871E0]->__pad_704[2]; /*0x447076*/
      if ( (unsigned __int8)House::IsHumanPlayer(*((#375 **)this + 135)) ) /*0x447082*/
        (*(void (__thiscall **)(#377 *, int))(this->gattlingValue)(this, 7); /*0x447091*/
      v4 = (#375 *)this->focus; /*0x447097*/
      this->NeedsRepairs = 1; /*0x44709d*/
      if ( (unsigned __int8)House::IsHumanPlayer(v4) ) /*0x4470a4*/
        VoxClass::FindAndPlay(aEvaRepairing, -1); /*0x4470b7*/
    }
  }
  else
  {
    v3 = MEMORY[0x8871E0]->__pad_704[2]; /*0x4470c3*/
  }
  result = House::IsHumanPlayer(*((#375 **)this + 135)); /*0x4470cf*/
  if ( (_BYTE)result ) /*0x4470d6*/
  {
    v5 = (_DWORD *)((char *)this + 156); /*0x4470d8*/
    v6[0] = *v5; /*0x4470e2*/
    v6[1] = v5[1]; /*0x4470eb*/
    v6[2] = v5[2]; /*0x4470f6*/
    return StartAudioControllerAt(v3, (int)v6, 0); /*0x4470fa*/
  }
  return result; /*0x4470ff*/
}


// ==== 0x00447110  BuildingClass::ToggleSellMode  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ToggleSellMode(#377 *this)
{
  int result; // eax
  _BYTE *v3; // ecx
  int v4; // [esp+8h] [ebp+4h]

  if ( this->BuildingClass_field_bool_6E9 ) /*0x447113*/
  {
    if ( v4 == -1 ) /*0x447128*/
    {
      if ( (*(int (__thiscall **)(#377 *))(this->q184)(this) == 19 ) /*0x44717b*/
        goto LABEL_12; /*0x44717b*/
      goto LABEL_11; /*0x44717b*/
    }
    if ( !v4 ) /*0x44712c*/
    {
      result = (*(int (__thiscall **)(#377 *))(this->q184)(this); /*0x447158*/
      if ( result != 19 ) /*0x447161*/
        return result; /*0x447161*/
      goto LABEL_12; /*0x447161*/
    }
    if ( v4 != 1 ) /*0x447131*/
    {
LABEL_12:
      result = House::IsHumanPlayer(*((#375 **)this + 135)); /*0x447195*/
      if ( (_BYTE)result ) /*0x4471a2*/
        return PlayVocClass(MEMORY[0x8871E0]->__pad_704[2], 0x2000, 1.0, 0); /*0x4471bc*/
      return result; /*0x4471c2*/
    }
    result = (*(int (__thiscall **)(#377 *))(this->q184)(this); /*0x447135*/
    if ( result != 19 ) /*0x44713e*/
    {
      LOBYTE(result) = this->C4Applied; /*0x447144*/
      if ( !(_BYTE)result ) /*0x44714c*/
      {
LABEL_11:
        (*(void (__thiscall **)(#377 *, int, _DWORD))(this->q1E8)(this, 19, 0); /*0x44717d*/
        (*(void (__thiscall **)(#377 *))(this->disguiseBlinkTimer)(this); /*0x44718f*/
        goto LABEL_12; /*0x44718f*/
      }
    }
  }
  else
  {
    v3 = (_BYTE *)this->gattlingValue; /*0x4471c5*/
    LOBYTE(result) = v3[5824]; /*0x4471cb*/
    if ( (_BYTE)result ) /*0x4471d3*/
    {
      (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v3 + 132))(v3, this->focus); /*0x4471de*/
      House::IsCurrentPlayer(*((#375 **)this + 135)); /*0x4471ea*/
      (*(void (__thiscall **)(#377 *))(this->lastCommands)(this); /*0x4471f3*/
      return (*(int (__thiscall **)(#377 *))(this->q0F8)(this); /*0x4471fd*/
    }
  }
  return result; /*0x4471c1*/
}


// ==== 0x00447210  BuildingClass::HandleClickEvent  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::HandleClickEvent(#377 *this)
{
  int result; // eax
  _BYTE *v3; // ebp
  int v4; // ebx
  BuildingTypeClass *v5; // eax
  int v6; // edi
  int v7; // ebx
  int v8; // eax
  _DWORD *v9; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  BuildingTypeClass *v13; // eax
  _DWORD v14[3]; // [esp+Ch] [ebp-Ch] BYREF
  _BYTE *a1; // [esp+1Ch] [ebp+4h]
  TechnoClass *a1a; // [esp+1Ch] [ebp+4h]
  TechnoClass *aP2; // [esp+20h] [ebp+8h] BYREF

  if ( *(_BYTE *)(this->gattlingValue + 5889) ) /*0x44721e*/
    return 0; /*0x447230*/
  v3 = a1; /*0x447233*/
  if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 44))(a1) == 6 && *(_BYTE *)(*((_DWORD *)a1 + 328) + 5889) ) /*0x44724a*/
    return 0; /*0x44725c*/
  result = TechnoClass::HandleCursorClick(this, a1, aP2); /*0x447267*/
  v4 = result; /*0x44726c*/
  if ( result != 8 ) /*0x447271*/
  {
    if ( result == 4 ) /*0x447280*/
    {
      v5 = (BuildingTypeClass *)this->gattlingValue; /*0x447286*/
      if ( !v5->DebrisTypes[2493] || HouseClass_Player != *((IUnknown **)this + 135) ) /*0x4472a8*/
      {
        if ( (!v5->UnitAbsorb && !v5->InfantryAbsorb || *((int *)this + 69) <= 0) /*0x447346*/
          && (*(int (__thiscall **)(#377 *))(this->q408)(this) <= 0 )
        {
          if ( !*(_DWORD *)(this->gattlingValue + 3768) ) /*0x44734e*/
            return 0; /*0x447363*/
          goto LABEL_13; /*0x447356*/
        }
LABEL_12:
        v4 = 4; /*0x4472e7*/
LABEL_13:
        if ( *(_DWORD *)(this->gattlingValue + 3768) && this->isPrimaryFactory ) /*0x447300*/
          return 0; /*0x447319*/
        return v4; /*0x447308*/
      }
      if ( this->gapSuperCharged ) /*0x4472aa*/
        goto LABEL_12; /*0x4472aa*/
      v6 = this->focus + 36; /*0x4472c4*/
      v7 = (*(int (__stdcall **)(int))(*(_DWORD *)v6 + 36))(v6); /*0x4472cb*/
      if ( (*(int (__stdcall **)(int))(*(_DWORD *)v6 + 32))(v6) - v7 > *(_DWORD *)(this->gattlingValue + 3820) ) /*0x4472e1*/
        goto LABEL_12; /*0x4472e1*/
      return 0; /*0x4473c4*/
    }
    if ( result == 5 ) /*0x447369*/
    {
      if ( !*(_DWORD *)(*(int (__thiscall **)(#377 *, _DWORD))(this->barrelRecoil)(this, 0) ) /*0x44737a*/
        goto LABEL_45; /*0x44737a*/
      if ( !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(#377 *, _DWORD))(this->barrelRecoil)(this, 0) /*0x4473a4*/
                                 + 160)
                     + 677)
        || *(_BYTE *)(this->gattlingValue + 5827) )
      {
        v4 = 0; /*0x4473ae*/
      }
      if ( this->currentMission == 19 ) /*0x4473b7*/
        return 0; /*0x4473b7*/
    }
    if ( v4 == 1 || v4 == 2 ) /*0x4473cf*/
    {
      if ( !(*(unsigned __int8 (__thiscall **)(#377 *))(this->q0A0)(this) ) /*0x4473d9*/
        return 7; /*0x4473f1*/
      v8 = *(_DWORD *)(this->gattlingValue + 3768); /*0x4473fa*/
      if ( v8 == 16 || v8 == 40 || v8 == 3 ) /*0x44740d*/
      {
        if ( !Mouse::IsButtonDown(MEMORY[0xA8D63C].__pad_14B0[268]) /*0x447434*/
          && !Mouse::IsButtonDown(MEMORY[0xA8D63C].__pad_14B0[272]) )
        {
          return 7; /*0x44744b*/
        }
        v9 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)a1 + 72))(a1, v14); /*0x44745b*/
        v10 = *v9 / 256; /*0x447476*/
        v11 = v9[1] / 256; /*0x447479*/
        LOWORD(a1a) = v10; /*0x44747c*/
        HIWORD(a1a) = v11; /*0x447481*/
        aP2 = a1a; /*0x44748a*/
        if ( *(_DWORD *)(this->gattlingValue + 3768) != 3 ) /*0x44749b*/
        {
          v12 = (__int16)v11; /*0x4474a3*/
          v13 = *(BuildingTypeClass **)this; /*0x4474a6*/
          v14[0] = ((__int16)v10 << 8) + 128; /*0x4474ae*/
          v14[1] = (v12 << 8) + 128; /*0x4474c2*/
          v14[2] = 0; /*0x4474c6*/
          if ( !((unsigned __int8 (__thiscall *)(#377 *, _DWORD *))LODWORD(v13->?))(this, v14) ) /*0x4474ce*/
            v4 = 2; /*0x4474d8*/
          if ( (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP2) + 80) & 0x100) == 0 /*0x447506*/
            && *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP2) + 19) )
          {
            return 2; /*0x44750b*/
          }
        }
      }
    }
    if ( v4 != 5 ) /*0x447510*/
      return v4; /*0x44752e*/
LABEL_45:
    if ( *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 136))(v3) + 563) ) /*0x44751d*/
      return 2; /*0x447527*/
    return v4; /*0x447525*/
  }
  return result; /*0x447228*/
}


// ==== 0x00447540  BuildingClass::HandleRepairCursor  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::HandleRepairCursor(#377 *this)
{
  BuildingTypeClass *v2; // eax
  RadarClass *v4; // edi
  MouseClass *v5; // ebx
  void *v6; // eax
  _DWORD *v7; // eax
  BuildingTypeClass *v8; // eax
  int v9; // ecx
  int v10; // edx
  BuildingTypeClass *v11; // eax
  _DWORD v12[3]; // [esp+Ch] [ebp-Ch] BYREF
  IUnknown *aP1; // [esp+1Ch] [ebp+4h]
  FootClass *aP2; // [esp+20h] [ebp+8h]
  MouseClass *aP3; // [esp+24h] [ebp+Ch]

  v2 = (BuildingTypeClass *)this->gattlingValue; /*0x447548*/
  if ( v2->InvisibleInGame ) /*0x44754e*/
    return 0; /*0x447560*/
  if ( *(_DWORD *)&v2->DebrisTypes[244] && (_BYTE)aP2 ) /*0x447577*/
  {
    v4 = (RadarClass *)aP1; /*0x44757d*/
    v5 = (MouseClass *)TechnoClass::HandleCursor((int *)this, aP1, 0, aP3); /*0x447592*/
    v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)aP1); /*0x447594*/
    v7 = (_DWORD *)(*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)v6 + 72))(v6, v12); /*0x4475a2*/
    if ( !Cell::IsPassable(v7) ) /*0x4475ab*/
    {
      if ( v5 == (MouseClass *)1 ) /*0x4475b7*/
      {
        if ( *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)aP1) + 59) == 5 ) /*0x4475cb*/
        {
          v8 = (BuildingTypeClass *)this->gattlingValue; /*0x4475cd*/
          if ( v8->DebrisTypes[729] ) /*0x4475d3*/
          {
            if ( v8->DebrisTypes[728] ) /*0x4475dd*/
              return 6; /*0x4475f2*/
          }
        }
        goto LABEL_14; /*0x4475e5*/
      }
LABEL_13:
      if ( v5 != (MouseClass *)2 ) /*0x447611*/
        goto LABEL_27; /*0x447611*/
      goto LABEL_14; /*0x447611*/
    }
  }
  else
  {
    v4 = (RadarClass *)aP1; /*0x4475f9*/
    v5 = (MouseClass *)TechnoClass::HandleCursor((int *)this, aP1, aP2, aP3); /*0x447607*/
  }
  if ( v5 != (MouseClass *)1 ) /*0x44760c*/
    goto LABEL_13; /*0x44760c*/
LABEL_14:
  if ( !(*(unsigned __int8 (__thiscall **)(#377 *))(this->q0A0)(this) && v5 == (MouseClass *)1 ) /*0x447628*/
  {
    v5 = 0; /*0x44762a*/
    goto LABEL_35; /*0x44762c*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(#377 *))(this->q284)(this) ) /*0x447635*/
  {
    if ( !Mouse::IsButtonDown(MEMORY[0xA8D63C].__pad_14B0[268]) /*0x447664*/
      && !Mouse::IsButtonDown(MEMORY[0xA8D63C].__pad_14B0[272]) )
    {
      v5 = 0; /*0x44766d*/
      goto LABEL_35; /*0x44766f*/
    }
    if ( *(_DWORD *)(this->gattlingValue + 3768) != 3 ) /*0x447681*/
    {
      v9 = SLOWORD(v4->field_0); /*0x447683*/
      v10 = SHIWORD(v4->field_0); /*0x447686*/
      v11 = *(BuildingTypeClass **)this; /*0x44768a*/
      v12[2] = 0; /*0x44768c*/
      v12[0] = (v9 << 8) + 128; /*0x44769d*/
      v12[1] = (v10 << 8) + 128; /*0x4476b1*/
      if ( !((unsigned __int8 (__thiscall *)(#377 *, _DWORD *))LODWORD(v11->?))(this, v12) ) /*0x4476b5*/
        v5 = (MouseClass *)2; /*0x4476bf*/
      if ( (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)v4) + 80) & 0x100) == 0 /*0x4476e5*/
        && *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)v4) + 19) )
      {
        v5 = (MouseClass *)2; /*0x4476ec*/
        goto LABEL_35; /*0x4476f1*/
      }
    }
  }
LABEL_27:
  if ( v5 != (MouseClass *)5 ) /*0x4476f6*/
    goto LABEL_35; /*0x4476f6*/
  if ( *(_DWORD *)(*(int (__thiscall **)(#377 *, _DWORD))(this->barrelRecoil)(this, 0) ) /*0x447704*/
  {
    if ( !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(#377 *, _DWORD))(this->barrelRecoil)(this, 0) /*0x44772d*/
                               + 160)
                   + 677)
      || *(_BYTE *)(this->gattlingValue + 5827) )
    {
      v5 = 0; /*0x447737*/
    }
    if ( this->currentMission == 19 ) /*0x447740*/
    {
      v5 = 0; /*0x447742*/
      goto LABEL_35; /*0x447744*/
    }
    if ( v5 != (MouseClass *)5 ) /*0x447749*/
    {
LABEL_35:
      if ( (*(unsigned __int8 (__thiscall **)(#377 *))(this->q284)(this) ) /*0x44774f*/
      {
        if ( (unsigned __int8)House::IsHumanPlayer(*((#375 **)this + 135)) ) /*0x44775f*/
          return 1; /*0x447768*/
      }
    }
  }
  return (int)v5; /*0x447558*/
}


// ==== 0x00447780  BuildingClass::StartProduction  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::StartProduction(int *this, int a2)
{
  int result; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // ecx
  int *v7; // ebp
  BOOL v8; // ebx
  bool v9; // al
  int v10; // edx
  _BYTE *v11; // eax
  bool v12; // zf
  int v13; // eax
  BOOL v14; // ebx
  bool v15; // al
  int v16; // edx
  _BYTE *v17; // eax
  int v18; // eax
  BOOL v19; // ebx
  bool v20; // al
  int v21; // edx
  _BYTE *v22; // eax
  int v23; // eax
  BOOL v24; // ebx
  bool v25; // al
  int v26; // edx
  _BYTE *v27; // eax
  int v28; // eax
  BOOL v29; // ebx
  bool v30; // al
  int v31; // edx
  _BYTE *v32; // eax
  int v33; // eax
  int v34; // ecx
  int v35; // [esp+Ch] [ebp-8h]

  result = -1; /*0x447783*/
  v4 = a2; /*0x44778a*/
  v5 = this->q14D; /*0x44778e*/
  *(this + 334) = a2; /*0x447794*/
  if ( v5 == -1 || !a2 || MEMORY[0x87F7E8][539633] )
  {
    v6 = this->gattlingValue; /*0x4477b0*/
    *(this + 334) = -1; /*0x4477b6*/
    this->q14D = a2; /*0x4477c1*/
    v7 = (int *)(v6 + 12 * a2 + 3844); /*0x4477c7*/
    if ( MEMORY[0x87F7E8][539633] )
    {
      v8 = BuildingClass::GetHealthRatio(this) <= *(double *)(MEMORY[0x87F7E8][7806] + 5888); /*0x4477f3*/
      v9 = (*(int (__thiscall **)(int *))(*this + 1032))(this) > 0; /*0x44780a*/
      LOBYTE(a2) = v9; /*0x44780f*/
      if ( v8 ) /*0x447813*/
      {
        v11 = (_BYTE *)(this->gattlingValue + 5156); /*0x44781b*/
      }
      else
      {
        v12 = !v9; /*0x447822*/
        v13 = this->gattlingValue; /*0x447824*/
        if ( v12 ) /*0x44782a*/
          v11 = (_BYTE *)(v13 + 5140); /*0x447833*/
        else
          v11 = (_BYTE *)(v13 + 5172); /*0x44782c*/
      }
      if ( v11 && *v11 ) /*0x44783c*/
        BuildingClass::PlayAnim(this, v10, v11, 18, v8, a2, 0); /*0x44784e*/
      if ( MEMORY[0x87F7E8][539633] )
      {
        v14 = BuildingClass::GetHealthRatio(this) <= *(double *)(MEMORY[0x87F7E8][7806] + 5888); /*0x447878*/
        v15 = (*(int (__thiscall **)(int *))(*this + 1032))(this) > 0; /*0x44788f*/
        LOBYTE(a2) = v15; /*0x447894*/
        if ( v14 ) /*0x447898*/
        {
          v17 = (_BYTE *)(this->gattlingValue + 4136); /*0x4478a0*/
        }
        else
        {
          v12 = !v15; /*0x4478a7*/
          v18 = this->gattlingValue; /*0x4478a9*/
          if ( v12 ) /*0x4478af*/
            v17 = (_BYTE *)(v18 + 4120); /*0x4478b8*/
          else
            v17 = (_BYTE *)(v18 + 4152); /*0x4478b1*/
        }
        if ( v17 && *v17 ) /*0x4478c1*/
          BuildingClass::PlayAnim(this, v16, v17, 3, v14, a2, 0); /*0x4478d3*/
        if ( MEMORY[0x87F7E8][539633] )
        {
          v19 = BuildingClass::GetHealthRatio(this) <= *(double *)(MEMORY[0x87F7E8][7806] + 5888); /*0x4478fd*/
          v20 = (*(int (__thiscall **)(int *))(*this + 1032))(this) > 0; /*0x447914*/
          LOBYTE(a2) = v20; /*0x447919*/
          if ( v19 ) /*0x44791d*/
          {
            v22 = (_BYTE *)(this->gattlingValue + 4204); /*0x447925*/
          }
          else
          {
            v12 = !v20; /*0x44792c*/
            v23 = this->gattlingValue; /*0x44792e*/
            if ( v12 ) /*0x447934*/
              v22 = (_BYTE *)(v23 + 4188); /*0x44793d*/
            else
              v22 = (_BYTE *)(v23 + 4220); /*0x447936*/
          }
          if ( v22 && *v22 ) /*0x447946*/
            BuildingClass::PlayAnim(this, v21, v22, 4, v19, a2, 0); /*0x447958*/
          if ( MEMORY[0x87F7E8][539633] )
          {
            v24 = BuildingClass::GetHealthRatio(this) <= *(double *)(MEMORY[0x87F7E8][7806] + 5888); /*0x447982*/
            v25 = (*(int (__thiscall **)(int *))(*this + 1032))(this) > 0; /*0x447999*/
            LOBYTE(a2) = v25; /*0x44799e*/
            if ( v24 ) /*0x4479a2*/
            {
              v27 = (_BYTE *)(this->gattlingValue + 4272); /*0x4479aa*/
            }
            else
            {
              v12 = !v25; /*0x4479b1*/
              v28 = this->gattlingValue; /*0x4479b3*/
              if ( v12 ) /*0x4479b9*/
                v27 = (_BYTE *)(v28 + 4256); /*0x4479c2*/
              else
                v27 = (_BYTE *)(v28 + 4288); /*0x4479bb*/
            }
            if ( v27 && *v27 ) /*0x4479cb*/
              BuildingClass::PlayAnim(this, v26, v27, 5, v24, a2, 0); /*0x4479dd*/
            if ( MEMORY[0x87F7E8][539633] )
            {
              v29 = BuildingClass::GetHealthRatio(this) <= *(double *)(MEMORY[0x87F7E8][7806] + 5888); /*0x447a03*/
              v30 = (*(int (__thiscall **)(int *))(*this + 1032))(this) > 0; /*0x447a1a*/
              LOBYTE(a2) = v30; /*0x447a1f*/
              if ( v29 )
              {
                v32 = (_BYTE *)(this->gattlingValue + 4340); /*0x447a2b*/
              }
              else
              {
                v12 = !v30; /*0x447a32*/
                v33 = this->gattlingValue; /*0x447a34*/
                v32 = (_BYTE *)(v12 ? v33 + 4324 : v33 + 4356);
              }
              if ( v32 && *v32 ) /*0x447a4c*/
                BuildingClass::PlayAnim(this, v31, v32, 6, v29, a2, 0); /*0x447a5e*/
            }
          }
        }
      }
    }
    result = v7[2]; /*0x447a69*/
    if ( *(_BYTE *)(this->gattlingValue + 3363) ) /*0x447a6c*/
    {
      if ( v4 ) /*0x447a78*/
        result = (int)Rules::GetProductionTimeMult(&MEMORY[0x87F7E8][539870], v7[2]); /*0x447a80*/
    }
    v34 = dword_A8ED54[12]; /*0x447a85*/
    this->turretChargeTimer = result; /*0x447a91*/
    this->q040 = v34; /*0x447a97*/
    this->currentTurretNumber = v35; /*0x447a9d*/
    this->transporter_e = result; /*0x447aa0*/
    this->q0F8 = *v7; /*0x447aa7*/
  }
  return result; /*0x447aae*/
}


// ==== 0x00447AC0  BuildingClass::GetExitCoords  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetExitCoords(#377 *this)
{
  #377 *v1; // edi
  int v2; // esi
  int FoundationWidth; // eax
  int v4; // ecx
  int v6; // edx
  int v7; // edi
  int *v8; // [esp+Ch] [ebp+4h]

  v1 = this; /*0x447ac2*/
  v2 = (BuildingTypeClass::GetFoundationHeight(this->gattlingValue, 0) << 7) - 128; /*0x447adc*/
  FoundationWidth = BuildingTypeClass::GetFoundationWidth(*((_DWORD **)v1 + 328)); /*0x447ae2*/
  v1 = (#377 *)((char *)v1 + 156); /*0x447ae7*/
  v4 = (FoundationWidth << 7) - 128 + *(_DWORD *)v1; /*0x447af7*/
  v6 = *((_DWORD *)v1 + 1); /*0x447afd*/
  v7 = *((_DWORD *)v1 + 2); /*0x447b04*/
  *v8 = v4; /*0x447b07*/
  v8[1] = v2 + v6; /*0x447b09*/
  v8[2] = v7; /*0x447b0c*/
  return (int)v8; /*0x447b0f*/
}


// ==== 0x00447B20  BuildingClass::CalculateTurretAngle  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CalculateTurretAngle(#377 *this)
{
  BuildingTypeClass *v2; // eax
  _WORD *v3; // eax
  __int16 v4; // dx
  int v5; // eax
  int v6; // ecx
  _DWORD *v7; // esi
  int v8; // edx
  _DWORD *Coords_Alt; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // edi
  int *v14; // eax
  int v15; // ecx
  double v16; // st7
  int v17; // eax
  int *v18; // edx
  int NumberOfDocks; // edx
  int LinkIndex; // eax
  BuildingTypeClass *v21; // ecx
  int *v22; // edi
  int *v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // ecx
  int v27; // edx
  int v28; // edi
  int v29; // edx
  int v30; // esi
  int v31; // edx
  char *v32; // eax
  int *v33; // ecx
  _DWORD v34[3]; // [esp+24h] [ebp-30h] BYREF
  char v35[12]; // [esp+30h] [ebp-24h] BYREF
  char v36[12]; // [esp+3Ch] [ebp-18h] BYREF
  char v37; // [esp+48h] [ebp-Ch] BYREF
  int *v38; // [esp+58h] [ebp+4h]
  unsigned int v39; // [esp+5Ch] [ebp+8h] BYREF

  v2 = (BuildingTypeClass *)this->gattlingValue; /*0x447b27*/
  if ( v2->Weeder ) /*0x447b2d*/
  {
    v3 = (_WORD *)(*(int (__thiscall **)(#377 *, unsigned int *))(this->airstrikeTintTimer)(this, &v39); /*0x447b40*/
    v4 = v3[1] + 1; /*0x447b51*/
    v5 = ((__int16)(*v3 + 2) << 8) + 128; /*0x447b5f*/
    v6 = (v4 << 8) + 128; /*0x447b64*/
    v7 = (_DWORD *)((char *)this + 156); /*0x447b6c*/
    v34[2] = 0; /*0x447b72*/
    v34[0] = *v7; /*0x447b78*/
    v34[1] = v7[1]; /*0x447b7f*/
    v8 = v7[2]; /*0x447b83*/
    *v38 = v5; /*0x447b8c*/
    v38[1] = v6; /*0x447b90*/
    v38[2] = v8; /*0x447b93*/
    return (int)v38; /*0x447b9b*/
  }
  if ( v2->Refinery ) /*0x447b9e*/
  {
    Coords_Alt = (_DWORD *)ObjectClass::GetCoords_Alt(this); /*0x447bb4*/
    v11 = Coords_Alt[1]; /*0x447bbb*/
    v12 = *Coords_Alt + 128; /*0x447bbe*/
LABEL_15:
    v17 = Coords_Alt[2]; /*0x447ce1*/
    *v38 = v12; /*0x447cea*/
    v38[1] = v11; /*0x447cec*/
    v38[2] = v17; /*0x447cef*/
    return (int)v38; /*0x447cf9*/
  }
  if ( v2->Bunker && v39 ) /*0x447bdd*/
  {
    v13 = (*(int (__stdcall **)(_DWORD *))(*(_DWORD *)v39 + 72))(v34); /*0x447bef*/
    v14 = (int *)(*(int (__thiscall **)(#377 *, char *))(this->q048)(this, v35); /*0x447bf8*/
    v15 = *v14; /*0x447bfd*/
    v39 = *(_DWORD *)v13; /*0x447bff*/
    v16 = Math::CalcAngle((double)v14[1] - (double)*(int *)(v13 + 4), (double)(int)v39 - (double)v15); /*0x447c22*/
    LOWORD(v39) = Math::RoundToInt((v16 - 1.570796326794897) * -10430.06004058427); /*0x447c3b*/
    if ( (unsigned __int8)(((v39 >> 7) + 1) >> 1) >= 0x40u ) /*0x447c54*/
    {
      if ( (unsigned __int8)(((v39 >> 7) + 1) >> 1) < 0x80u ) /*0x447c76*/
      {
        Coords_Alt = (_DWORD *)(*(int (__thiscall **)(#377 *, char *))(this->q048)(this, v35); /*0x447c81*/
        v12 = *Coords_Alt + 128; /*0x447c89*/
        v11 = Coords_Alt[1] + 128; /*0x447c8f*/
        goto LABEL_15; /*0x447c95*/
      }
      if ( (unsigned __int8)(((v39 >> 7) + 1) >> 1) < 0xC0u ) /*0x447ca3*/
      {
        Coords_Alt = (_DWORD *)(*(int (__thiscall **)(#377 *, char *))(this->q048)(this, v35); /*0x447cae*/
        v12 = *Coords_Alt - 128; /*0x447cb6*/
        v11 = Coords_Alt[1] + 128; /*0x447cbc*/
        goto LABEL_15; /*0x447cc2*/
      }
      Coords_Alt = (_DWORD *)(*(int (__thiscall **)(#377 *, char *))(this->q048)(this, v35); /*0x447ccd*/
      v12 = *Coords_Alt - 128; /*0x447cd2*/
    }
    else
    {
      Coords_Alt = (_DWORD *)(*(int (__thiscall **)(#377 *, char *))(this->q048)(this, v35); /*0x447c5f*/
      v12 = *Coords_Alt + 128; /*0x447c64*/
    }
    v11 = Coords_Alt[1] - 128; /*0x447cdb*/
    goto LABEL_15; /*0x447cdb*/
  }
  if ( !v2->Helipad && !v2->UnitRepair ) /*0x447d06*/
  {
    v18 = (int *)ObjectClass::GetCoords_Alt(this); /*0x447d1d*/
    *v38 = *v18; /*0x447d28*/
    v38[1] = v18[1]; /*0x447d2d*/
    v38[2] = v18[2]; /*0x447d34*/
    return (int)v38; /*0x447d3a*/
  }
  NumberOfDocks = v2->?; /*0x447d3d*/
  if ( NumberOfDocks ) /*0x447d46*/
  {
    if ( NumberOfDocks == 1 ) /*0x447d4d*/
    {
      v22 = *(int **)&v2->?; /*0x447db5*/
      v23 = (int *)(*(int (__thiscall **)(#377 *, char *))(this->q048)(this, v36); /*0x447dc4*/
      v24 = *v23; /*0x447dc7*/
      v25 = *v22; /*0x447dc9*/
      goto LABEL_24; /*0x447dcb*/
    }
    LinkIndex = RadioClass::FindLinkIndex((int *)this, v39); /*0x447d52*/
    if ( LinkIndex >= 0 ) /*0x447d59*/
    {
      v21 = (BuildingTypeClass *)this->gattlingValue; /*0x447d5b*/
      if ( LinkIndex < v21->? ) /*0x447d67*/
      {
        v22 = (int *)(*(_DWORD *)&v21->? + 12 * LinkIndex); /*0x447d74*/
        v23 = (int *)(*(int (__thiscall **)(#377 *, char *))(this->q048)(this, v35); /*0x447d7e*/
        v24 = *v22; /*0x447d81*/
        v25 = *v23; /*0x447d83*/
LABEL_24:
        v26 = v25 + v24; /*0x447d85*/
        v27 = v22[1]; /*0x447d8a*/
        v28 = v22[2]; /*0x447d8d*/
        v29 = v23[1] + v27; /*0x447d90*/
        v30 = v23[2]; /*0x447d92*/
        *v38 = v26; /*0x447d9d*/
        v38[1] = v29; /*0x447d9f*/
        v38[2] = v30 + v28; /*0x447da2*/
        return (int)v38; /*0x447daa*/
      }
    }
    v31 = *(_DWORD *)this; /*0x447dad*/
    v32 = (char *)v34; /*0x447daf*/
  }
  else
  {
    v31 = *(_DWORD *)this; /*0x447dcd*/
    v32 = &v37; /*0x447dcf*/
  }
  v33 = (int *)(*(int (__thiscall **)(#377 *, char *))(v31 + 72))(this, v32); /*0x447dd9*/
  *v38 = *v33; /*0x447de4*/
  v38[1] = v33[1]; /*0x447de9*/
  v38[2] = v33[2]; /*0x447df0*/
  return (int)v38; /*0x447b96*/
}


// ==== 0x00447E00  BuildingClass::initAnimation  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::DistanceToTarget(#377 *this)
{
  _DWORD *v2; // esi
  _DWORD *v3; // eax
  double v4; // st7
  int v6; // [esp+28h] [ebp-1Ch]
  _BYTE v7[12]; // [esp+2Ch] [ebp-18h] BYREF
  _BYTE v8[12]; // [esp+38h] [ebp-Ch] BYREF
  int v9; // [esp+48h] [ebp+4h]

  v2 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v9 + 72))(v9, v7); /*0x447e1a*/
  v3 = (_DWORD *)(*(int (__thiscall **)(#377 *, _BYTE *, int))(this->lineTrailer)(this, v8, v9); /*0x447e24*/
  v6 = v3[2] - v2[2]; /*0x447e48*/
  v4 = Math::Sqrt( /*0x447e74*/
         (double)(*v3 - *v2) * (double)(*v3 - *v2)
       + (double)v6 * (double)v6
       + (double)(v3[1] - v2[1]) * (double)(v3[1] - v2[1]));
  return Math::RoundToInt(v4); /*0x447e81*/
}


// ==== 0x00447E90  BuildingClass::TogglePrimaryFactory  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::TogglePrimaryFactory(#377 *this)
{
  _BYTE *v1; // eax
  int v2; // eax
  _DWORD *v3; // ecx
  _BYTE v5[12]; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v6; // [esp+14h] [ebp+4h]
  int v7; // [esp+18h] [ebp+8h]

  v1 = (_BYTE *)this->gattlingValue; /*0x447e90*/
  if ( v1[5835] || v1[5801] || v1[5803] ) /*0x447ec2*/
    v2 = (*(int (__thiscall **)(#377 *, _BYTE *, int))(this->lineTrailer)(this, v5, v7); /*0x447ee4*/
  else
    v2 = (*(int (__thiscall **)(#377 *, _BYTE *))(this->q048)(this, v5); /*0x447ed3*/
  v3 = (_DWORD *)v2; /*0x447eea*/
  *v6 = *v3; /*0x447ef4*/
  v6[1] = v3[1]; /*0x447ef9*/
  v6[2] = v3[2]; /*0x447f00*/
  return (int)v6; /*0x447efc*/
}


// ==== 0x00447F10  BuildingClass::GetFireError  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetFireError(#377 *this)
{
  int v2; // eax
  int v4; // edx
  int INI; // ebp
  int v6; // edi
  int v7; // ebx
  _DWORD *Value; // eax
  __int16 v9; // dx
  _BYTE *v10; // [esp+10h] [ebp+4h]
  int v11; // [esp+14h] [ebp+8h]
  int v12; // [esp+18h] [ebp+Ch] BYREF

  v2 = this->gattlingValue; /*0x447f15*/
  if ( *(_BYTE *)(v2 + 5499) /*0x447f47*/
    && (!*(_BYTE *)(v2 + 5500) || !(*(int (__thiscall **)(#377 *))(this->q408)(this))
    || (unsigned __int8)ObjectClass::HasLocation(this) )
  {
    return 5; /*0x447f47*/
  }
  if ( *(_BYTE *)(this->gattlingValue + 5827) ) /*0x447f5a*/
    return 6; /*0x447f6c*/
  if ( (*(int (__thiscall **)(#377 *))(this->q184)(this) == 19 /*0x447f8f*/
    || (*(int (__thiscall **)(#377 *))(this->q184)(this) == 18 )
  {
    return 5; /*0x44805c*/
  }
  if ( !(*(unsigned __int8 (__thiscall **)(#377 *))(this->storedTiberium)(this) ) /*0x447f99*/
    return 6; /*0x447fa5*/
  if ( this->DelayBeforeFiring ) /*0x447fae*/
    return 3; /*0x447fba*/
  INI = TriggerTypeClass::ReadINI(this, v4, v10, v11, v12); /*0x447fd9*/
  if ( INI ) /*0x447fdd*/
    return INI; /*0x447fdd*/
  if ( !(*(unsigned __int8 (__thiscall **)(#377 *))(*(_DWORD *)this + 1020))(this) ) /*0x447fe3*/
    return INI; /*0x447fe3*/
  v6 = *(_DWORD *)(*(int (__thiscall **)(#377 *, int *, _BYTE *))(*(_DWORD *)this + 1256))(this, &v12, v10); /*0x448004*/
  v7 = *(_BYTE *)(this->gattlingValue + 5829) != 0 ? 0 : 8;
  Value = ProgressTimer::GetValue((_WORD *)this + 452, &v12); /*0x448021*/
  LOBYTE(v9) = 0; /*0x448029*/
  HIBYTE(v9) = v7; /*0x44802b*/
  if ( abs16(v9) >= (int)abs16(*(_WORD *)Value - v6) ) /*0x448045*/
    return INI; /*0x448053*/
  else
    return 2; /*0x448049*/
}


// ==== 0x00448070  AnimClass::updateAnimation  this=BuildingClass  sig=csp ====
bool __thiscall AnimClass::updateAnimation(int this, IUnknown *aP1)
{
  int v3; // edx
  BOOL v4; // eax
  int v5; // eax
  int v6; // ebx
  int v7; // edi
  int *v8; // ebp
  int v9; // eax
  int v10; // ecx
  unsigned __int8 v12; // [esp+7h] [ebp-5h]
  int v13; // [esp+8h] [ebp-4h]

  v3 = *(_DWORD *)(*(_DWORD *)(this + 1312) + 3768); /*0x44807c*/
  v13 = v3; /*0x448084*/
  if ( !v3 ) /*0x448088*/
  {
    LOBYTE(v4) = 0; /*0x44808a*/
    return v4; /*0x448090*/
  }
  v12 = *(_BYTE *)(this + 979); /*0x44809a*/
  v5 = *(_DWORD *)(this + 540); /*0x44809e*/
  v6 = *(_DWORD *)(v5 + 120); /*0x4480a6*/
  v7 = 0; /*0x4480a9*/
  if ( v6 <= 0 ) /*0x4480ad*/
    goto LABEL_17; /*0x4480ad*/
  v8 = *(int **)(v5 + 108); /*0x4480af*/
  while ( 1 ) /*0x4480b8*/
  {
    v9 = *v8; /*0x4480b8*/
    if ( *(_BYTE *)(*v8 + 129) ) /*0x4480bb*/
      goto LABEL_13; /*0x4480bb*/
    if ( !*(_BYTE *)(v9 + 979) ) /*0x4480c5*/
      goto LABEL_13; /*0x4480c5*/
    v10 = *(_DWORD *)(v9 + 1312); /*0x4480cf*/
    if ( *(_DWORD *)(v10 + 3768) != v3 ) /*0x4480db*/
      goto LABEL_13; /*0x4480db*/
    if ( !*(_BYTE *)(*(_DWORD *)(this + 1312) + 3278) ) /*0x4480e3*/
      break; /*0x4480e3*/
    if ( *(_BYTE *)(v10 + 3278) ) /*0x4480ed*/
      goto LABEL_15; /*0x4480f4*/
LABEL_13:
    ++v7; /*0x448104*/
    ++v8; /*0x448105*/
    if ( v7 >= v6 ) /*0x44810a*/
      goto LABEL_17; /*0x44810a*/
    v3 = v13; /*0x4480b4*/
  }
  if ( *(_BYTE *)(v10 + 3278) ) /*0x4480fa*/
    goto LABEL_13; /*0x448102*/
LABEL_15:
  if ( (_BYTE)aP1 ) /*0x448114*/
  {
    *(_BYTE *)(v9 + 979) = 0; /*0x448116*/
LABEL_17:
    *(_BYTE *)(this + 979) = 1; /*0x44811d*/
  }
  if ( *(_DWORD *)(*(_DWORD *)(this + 1312) + 3768) == 7 ) /*0x448134*/
    House::ChooseHouseEnemy(*(int **)(this + 540), (BuildingClass *)this); /*0x44813d*/
  return *(_BYTE *)(this + 979) != v12; /*0x44808c*/
}


// ==== 0x00448160  BuildingClass::ProcessPrimarySelect  this=BuildingClass  sig=csp ====
int __thiscall FootClass::ProcessPrimarySelect(#377 *this)
{
  int v2; // ecx
  int result; // eax
  int v4; // edi
  int v5; // edx
  int v6; // ecx
  BuildingTypeClass *v7; // eax
  #375 *v8; // ecx
  int v9; // [esp+4h] [ebp-4h]

  result = this->gattlingValue; /*0x448164*/
  v2 = *(_DWORD *)(result + 3768); /*0x44816a*/
  LOBYTE(result) = this->isPrimaryFactory; /*0x448170*/
  if ( v2 ) /*0x448178*/
  {
    if ( (_BYTE)result ) /*0x448180*/
    {
      this->isPrimaryFactory = 0; /*0x448182*/
LABEL_17:
      result = (*(int (__thiscall **)(#377 *, int))(this->q124)(this, 2); /*0x448246*/
      LOBYTE(result) = this->isPrimaryFactory; /*0x448252*/
      return result; /*0x448252*/
    }
    v4 = 0; /*0x448195*/
    v9 = *(_DWORD *)(this->focus + 120); /*0x44819c*/
    if ( v9 <= 0 ) /*0x4481a0*/
    {
LABEL_13:
      v8 = (#375 *)this->focus; /*0x448205*/
      this->isPrimaryFactory = 1; /*0x44820b*/
      if ( (unsigned __int8)House::IsHumanPlayer(v8) ) /*0x448212*/
        VoxClass::FindAndPlay(aEvaPrimarybuil, -1, -1); /*0x448226*/
      if ( *(_DWORD *)(this->gattlingValue + 3768) == 7 ) /*0x448238*/
        House::ChooseHouseEnemy(*((int **)this + 135), (BuildingClass *)this); /*0x448241*/
      goto LABEL_17; /*0x448241*/
    }
    while ( 1 ) /*0x4481ac*/
    {
      v5 = *(_DWORD *)(*(_DWORD *)(this->focus + 108) + 4 * v4); /*0x4481ac*/
      if ( *(_BYTE *)(v5 + 129) ) /*0x4481af*/
        goto LABEL_12; /*0x4481af*/
      v6 = *(_DWORD *)(v5 + 1312); /*0x4481b9*/
      v7 = (BuildingTypeClass *)this->gattlingValue; /*0x4481bf*/
      if ( *(_DWORD *)(v6 + 3768) != v7->Factory[0] ) /*0x4481d1*/
        goto LABEL_12; /*0x4481d1*/
      if ( v7->DebrisTypes[2490] ) /*0x4481d3*/
        break; /*0x4481d3*/
      if ( !*(_BYTE *)(v6 + 3278) ) /*0x4481ea*/
        goto LABEL_11; /*0x4481f2*/
LABEL_12:
      if ( ++v4 >= v9 ) /*0x448202*/
        goto LABEL_13; /*0x448202*/
    }
    if ( !*(_BYTE *)(v6 + 3278) ) /*0x4481dd*/
      goto LABEL_12; /*0x4481e4*/
LABEL_11:
    *(_BYTE *)(v5 + 979) = 0; /*0x4481f4*/
    goto LABEL_12; /*0x4481f4*/
  }
  return result; /*0x448258*/
}


// ==== 0x00448260  BuildingClass::drawFrame  this=BuildingClass  sig=csp ====
int __thiscall AnimClass::drawFrame(#377 *this)
{
  int result; // eax
  int v2; // ebp
  int v3; // edi
  int v5; // ecx
  BuildingTypeClass *v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  BuildingTypeClass *v11; // edx
  int v12; // edx
  int v13; // edi
  AbstractClass *v14; // ecx
  int v15; // eax
  BuildingTypeClass *v16; // ecx
  AbstractClass *v17; // ecx
  int v18; // ecx
  __int64 v19; // rax
  BuildingTypeClass *v20; // edx
  LightSourceClass *v21; // ecx
  int v22; // edi
  _BYTE **v23; // ebp
  int v24; // eax
  int Member; // eax
  _BYTE *v26; // edi
  _DWORD *v27; // ebp
  _DWORD *v28; // eax
  IUnknown *v29; // eax
  int v30; // eax
  char v31; // bl
  AbstractClass *eax57; // eax
  AbstractClass *v32; // edi
  BuildingClass *v33; // eax
  int ecx66; // ecx
  FactoryClass *v35; // ecx
  FactoryClass *v36; // ecx
  AbstractClass *v37; // ebx
  int v39; // eax
  int v40; // ecx
  _DWORD *v41; // edx
  int v42; // eax
  int v43; // eax
  int nextArrayIndex; // ecx
  int v45; // ecx
  int abstractFlags; // edx
  int v47; // eax
  int v48; // ecx
  int v49; // ecx
  int v50; // edx
  int v51; // eax
  int v52; // ecx
  int ecx88; // ecx
  BuildingTypeClass *v53; // eax
  int (__thiscall **NeedsSaveOrLink)(void **, AbstractClass **); // eax
  int v56; // eax
  int v57; // ecx
  int v58; // ecx
  int v59; // edx
  int v60; // eax
  int v61; // ecx
  int ecx99; // ecx
  BuildingTypeClass *v62; // eax
  int v64; // eax
  int v65; // eax
  int v66; // ecx
  int v67; // ecx
  int (__thiscall **v68)(void **, AbstractClass **); // edx
  int v69; // eax
  int v70; // ecx
  int v71; // ecx
  int v72; // edx
  int v73; // eax
  int v74; // ecx
  int v75; // ecx
  int v76; // edx
  int v77; // eax
  int v78; // ecx
  int v79; // ecx
  int (__thiscall **v80)(void **, AbstractClass **); // edx
  int v81; // eax
  int v82; // ecx
  int v83; // ecx
  int (__thiscall **v84)(void **, AbstractClass **, int, int); // eax
  int v85; // eax
  int v86; // ecx
  int v87; // ecx
  int ecx134; // ecx
  AbstractClass *v88; // eax
  int ecx138; // ecx
  AbstractClass *v90; // eax
  BuildingTypeClass *v91; // eax
  BuildingTypeClass *v92; // eax
  char v94; // cl
  BuildingTypeClass *vfptr0; // edx
  HouseClass *edi150; // edi
  BuildingTypeClass *v96; // eax
  char cl153; // cl
  AbstractClass *v98; // eax
  BuildingTypeClass *v99; // edx
  int v101; // eax
  int v102; // ecx
  BuildingTypeClass *v103; // ebp
  int eax175; // eax
  BuildingTypeClass *v104; // edi
  int v106; // eax
  int v107; // ecx
  _DWORD *v108; // edx
  int v109; // ebp
  int v110; // ecx
  int v111; // eax
  int v112; // eax
  int v113; // edx
  int v114; // ecx
  int v115; // eax
  int v116; // eax
  int edx197; // edx
  BuildingTypeClass *v117; // eax
  int v119; // ecx
  int v120; // eax
  int v121; // eax
  int v122; // edx
  int v123; // ecx
  int v124; // eax
  int v125; // eax
  int edx212; // edx
  BuildingTypeClass *v126; // eax
  int v128; // ecx
  int v129; // eax
  int v130; // eax
  int v131; // edx
  int v132; // ecx
  int v133; // eax
  int v134; // eax
  int v135; // edx
  int v136; // ecx
  int v137; // eax
  int v138; // eax
  int v139; // edx
  int v140; // ecx
  int v141; // eax
  int v142; // eax
  int v143; // edx
  int v144; // ecx
  int v145; // eax
  int v146; // eax
  int v147; // edx
  int v148; // ecx
  int v149; // eax
  int v150; // eax
  int v151; // edx
  int ecx258; // ecx
  BuildingTypeClass *v152; // edx
  int UnitsGainSelfHeal; // ecx
  BuildingTypeClass *v154; // ecx
  BuildingTypeClass *v155; // eax
  AbstractClass *v156; // ecx
  BuildingTypeClass *v157; // eax
  AbstractClass *v159; // ecx
  int edi266; // edi
  CCINIClass *v160; // eax
  int v162; // eax
  char i; // al
  int v164; // ecx
  IUnknown *v165; // eax
  int v166; // ecx
  int v167; // eax
  int v168; // eax
  int v169; // edx
  int v170; // [esp+A4h] [ebp-60h]
  int v171; // [esp+A8h] [ebp-5Ch]
  char v172[8]; // [esp+B4h] [ebp-50h] BYREF
  int v173; // [esp+BCh] [ebp-48h] BYREF
  int v174; // [esp+C0h] [ebp-44h]
  int v175; // [esp+C4h] [ebp-40h]
  int v176[3]; // [esp+C8h] [ebp-3Ch] BYREF
  int v177[3]; // [esp+D4h] [ebp-30h] BYREF
  _DWORD v178[3]; // [esp+E0h] [ebp-24h] BYREF
  void **v179; // [esp+ECh] [ebp-18h] BYREF
  void *Block; // [esp+F0h] [ebp-14h]
  int v181; // [esp+F4h] [ebp-10h]
  int v182; // [esp+F8h] [ebp-Ch]
  BuildingClass *v183; // [esp+FCh] [ebp-8h]
  int v184; // [esp+100h] [ebp-4h]
  #375 *v185; // [esp+108h] [ebp+4h]
  AbstractClass *aP1; // [esp+10Ch] [ebp+8h] BYREF
  HouseClass *v187; // [esp+110h] [ebp+Ch]

  if ( v185 == *((#375 **)this + 135) )
  {
    LOBYTE(result) = 0;
  }
  else
  {
    v5 = this->attachedBomb;
    if ( v5 && !*(_BYTE *)(this->gattlingValue + 5499) )
      ObjectClass::CleanupAudioAndRefs(v5);
    if ( *(_BYTE *)(this->gattlingValue + 5831) )
      *((_BYTE *)v185 + 22264) = 1;
    if ( *(_BYTE *)(*(_DWORD *)(this->focus + 52) + 422) )
    {
      v6 = (BuildingTypeClass *)this->gattlingValue;
      if ( v6->ProduceCashStartup )
      {
        HouseClass::AddPower(v185, (IUnknown *)v6->ProduceCashStartup);
        v7 = *(_DWORD *)(this->gattlingValue + 5472);
        this->q6D0 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248];
        this->q1B5 = v174;
        this->q6D8 = v7;
      }
    }
    v8 = this->hasParachute;
    v171 = v2;
    v170 = v3;
    v9 = 1 << *(_DWORD *)(*((_DWORD *)v185 + 13) + 184);
    if ( (v8 & v9) != 0 )
    {
      v10 = v8 - v9;
      v11 = (BuildingTypeClass *)this->gattlingValue;
      this->hasParachute = v10;
      if ( v11->? )
      {
        v12 = 0;
        *(_DWORD *)(this->focus + 21732) = 0;
        v13 = *(_DWORD *)(this->focus + 120);
        if ( v13 > 0 )
        {
          do
          {
            v14 = (AbstractClass *)this->focus;
            v15 = *(_DWORD *)(*(_DWORD *)v14[3].__pad_0 + 4 * v12);
            if ( v15 && !*(_BYTE *)(v15 + 129) && *(_BYTE *)(*(_DWORD *)(v15 + 1312) + 5796) )
              v14[603].nextArrayIndex |= *(_DWORD *)(v15 + 528);
            ++v12;
          }
          while ( v12 < v13 );
        }
        MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 2);
      }
    }
    v16 = (BuildingTypeClass *)this->gattlingValue;
    this->isPrimaryFactory = 0;
    if ( v16->LaserFencePost )
      BuildingClass::DemolishBridgeCheck((int *)this, 0);
    if ( (unsigned __int8)House::IsHumanPlayer(*((#375 **)this + 135)) || (unsigned __int8)House::IsHumanPlayer(v185) )
    {
      if ( !*(_BYTE *)(*((_DWORD *)v185 + 13) + 422) && (_BYTE)aP1 )
      {
        if ( *(_BYTE *)(this->gattlingValue + 5458) )
        {
          v17 = (AbstractClass *)this->focus;
          if ( v17 != (AbstractClass *)v185 )
          {
            if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v17) )
              VoxClass::FindAndPlay(aEvaTechbuildin, -1, -1);
            if ( (unsigned __int8)House::IsHumanPlayer(v185) )
            {
              if ( (unsigned __int8)House::IsHumanPlayer(v185) )
              {
                v18 = *(_DWORD *)(this->gattlingValue + 5460);
                if ( v18 != -1 )
                  UpdateThemeManager(v18, -1, -1);
              }
            }
          }
        }
        else
        {
          v19 = ((__int64 (__thiscall *)(#377 *, AbstractClass **))*(_DWORD *)(this->airstrikeTintTimer)(this, &aP1);
          if ( CreateTriggerClassIfFarEnough((IUnknown *)0xA, SHIDWORD(v19), *(IUnknown **)v19) )
            VoxClass::FindAndPlay(aEvaBuildingcap, -1, -1);
        }
      }
      stru_87C374.__pad_14B0[13520] = 1;
      MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 0);
    }
    v20 = (BuildingTypeClass *)this->gattlingValue;
    this->needsRedraw = 1;
    this->q6CC = 1;
    if ( v20->NeedsEngineer )
    {
      v21 = (LightSourceClass *)this->LightSource;
      this->StuffEnabled = 1;
      if ( v21 )
        Trigger::EnableOnce(v21, 0);
      if ( *(_BYTE *)(this->gattlingValue + 5822) )
        BuildingClass::RepairPlacement(this, 0);
      v22 = 0;
      v23 = (_BYTE **)((char *)this + 1372);
      do
      {
        if ( *(_BYTE *)(v22 + this->gattlingValue + 3980) && *v23 )
          VtableStub::Method_425270(*v23);
        v22 += 68;
        ++v23;
      }
      while ( v22 < 1428 );
    }
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4
      && !*(_BYTE *)((*(int (__thiscall **)(#377 *, int, int))(this->hasParachute)(this, v170, v171) + 3231) )
    {
      HouseClass::IncrementStat((_DWORD *)v185 + 4314, *(_DWORD *)(this->gattlingValue + 3576));
    }
    VectorClass_ReestablishPtr::Construct(&v179, 0, 0);
    v24 = this->q0E8;
    v179 = &DynamicVectorClass<Reestablish *>::`vftable';
    v184 = 10;
    v183 = 0;
    aP1 = 0;
    if ( v24 > 0 )
    {
      do
      {
        Member = Team::GetMember(this, aP1);
        v26 = (_BYTE *)Member;
        if ( Member )
        {
          if ( (*(_BYTE *)(Member + 20) & 4) != 0 )
          {
            if ( (*(int (__thiscall **)(#377 *, int, int))(this->temporalTargetingMe)(this, 19, Member) == 1 )
            {
              if ( *(_BYTE *)(this->gattlingValue + 5821)
                || (v27 = (_DWORD *)(*(int (__thiscall **)(#377 *, int *, _BYTE *))(this->lineTrailer)(
                                      this,
                                      v176,
                                      v26),
                    v28 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)v26 + 72))(v26, v177),
                    v29 = Coord::Subtract(
                            v178,
                            (IUnknown *)(*v28 - *v27),
                            (IUnknown *)(v28[1] - v27[1]),
                            (IUnknown *)(v28[2] - v27[2])),
                    v173 = v29->field_0,
                    v174 = v29->field_4,
                    v175 = v29->field_8,
                    Coord::Length(&v173),
                    v30 < 64) )
              {
                v31 = v26[1048];
                (*(void (__thiscall **)(_BYTE *, #375 *, int))(*(_DWORD *)v26 + 980))(v26, v185, 1);
                eax57 = (AbstractClass *)__2_YAPAXI_Z(8u);
                if ( eax57 )
                {
                  *(_DWORD *)eax57->__pad_0 = v26;
                  eax57->__pad_0[4] = v31;
                  v32 = eax57;
                }
                else
                {
                  v32 = 0;
                }
                if ( (int)v183 < v181
                  || (BYTE1(v182) || !v181)
                  && v184 > 0
                  && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v179[2])(&v179, v181 + v184, 0) )
                {
                  v33 = v183;
                  v183 = (BuildingClass *)((char *)v183 + 1);
                  *((_DWORD *)Block + (_DWORD)v33) = v32;
                }
                goto LABEL_66;
              }
            }
          }
          else
          {
            v26 = 0;
          }
          (*(void (__thiscall **)(#377 *, int, _BYTE *))(this->temporalTargetingMe)(this, 23, v26);
          (*(void (__thiscall **)(#377 *, int, _BYTE *))(this->temporalTargetingMe)(this, 3, v26);
        }
LABEL_66:
        ecx66 = this->q0E8;
        aP1 = (AbstractClass *)((char *)aP1 + 1);
      }
      while ( (int)aP1 < ecx66 );
    }
    v35 = (FactoryClass *)this->Factory;
    if ( v35 )
    {
      FactoryClass::AbandonProduction((int)v35);
      v36 = (FactoryClass *)this->Factory;
      if ( v36 )
        (*(void (__thiscall **)(FactoryClass *, int))(*(_DWORD *)v36->__pad_0 + 32))(v36, 1);
      this->Factory = 0;
    }
    BuildingClass::DecrementTypeCounter(*((_DWORD **)this + 135), (BuildingClass *)this);
    v37 = (AbstractClass *)this->focus;
    ScriptAction::GetWaypointCoords(v172, (IUnknown *)this);
    this->HasBeenCaptured = 1;
    v39 = 0;
    v40 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2236);
    if ( v40 > 0 )
    {
      v41 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2224);
      while ( *v41 != this->gattlingValue )
      {
        ++v39;
        ++v41;
        if ( v39 >= v40 )
          goto LABEL_80;
      }
      v42 = *(_DWORD *)&v37[2].__pad_0[8];
      aP1 = (AbstractClass *)this;
      v43 = (*(int (__thiscall **)(char *, AbstractClass **))(v42 + 16))(&v37[2].__pad_0[8], &aP1);
      if ( v43 != -1 )
      {
        nextArrayIndex = v37[2].nextArrayIndex;
        if ( v43 < nextArrayIndex )
        {
          v45 = nextArrayIndex - 1;
          for ( v37[2].nextArrayIndex = v45;
                v43 < v37[2].nextArrayIndex;
                *(_DWORD *)(*(_DWORD *)&v37[2].__pad_0[12] + 4 * v43 - 4) = *(_DWORD *)(*(_DWORD *)&v37[2].__pad_0[12]
                                                                                      + 4 * v43) )
          {
            ++v43;
          }
        }
      }
    }
LABEL_80:
    if ( *(_BYTE *)(this->gattlingValue + 5801) )
    {
      abstractFlags = v37[3].abstractFlags;
      aP1 = (AbstractClass *)this;
      v47 = (*(int (__thiscall **)(int *, AbstractClass **))(abstractFlags + 16))(&v37[3].abstractFlags, &aP1);
      if ( v47 != -1 )
      {
        v48 = *(_DWORD *)v37[4].__pad_0;
        if ( v47 < v48 )
        {
          v49 = v48 - 1;
          for ( *(_DWORD *)v37[4].__pad_0 = v49;
                v47 < *(_DWORD *)v37[4].__pad_0;
                *(_DWORD *)(v37[3].nextArrayIndex + 4 * v47 - 4) = *(_DWORD *)(v37[3].nextArrayIndex + 4 * v47) )
          {
            ++v47;
          }
        }
      }
    }
    if ( *(_BYTE *)(this->gattlingValue + 5805) )
    {
      v50 = *(_DWORD *)&v37[4].__pad_0[8];
      aP1 = (AbstractClass *)this;
      v51 = (*(int (__thiscall **)(char *, AbstractClass **))(v50 + 16))(&v37[4].__pad_0[8], &aP1);
      if ( v51 != -1 )
      {
        v52 = v37[4].nextArrayIndex;
        if ( v51 < v52 )
        {
          ecx88 = v52 - 1;
          for ( v37[4].nextArrayIndex = ecx88;
                v51 < v37[4].nextArrayIndex;
                *(_DWORD *)(*(_DWORD *)&v37[4].__pad_0[12] + 4 * v51 - 4) = *(_DWORD *)(*(_DWORD *)&v37[4].__pad_0[12]
                                                                                      + 4 * v51) )
          {
            ++v51;
          }
        }
      }
    }
    v53 = (BuildingTypeClass *)this->gattlingValue;
    if ( v53->UnitAbsorb || v53->InfantryAbsorb )
    {
      NeedsSaveOrLink = (int (__thiscall **)(void **, AbstractClass **))v37[4].NeedsSaveOrLink;
      aP1 = (AbstractClass *)this;
      v56 = NeedsSaveOrLink[4](&v37[4].NeedsSaveOrLink, &aP1);
      if ( v56 != -1 )
      {
        v57 = *(_DWORD *)&v37[5].__pad_0[12];
        if ( v56 < v57 )
        {
          v58 = v57 - 1;
          for ( *(_DWORD *)&v37[5].__pad_0[12] = v58;
                v56 < *(_DWORD *)&v37[5].__pad_0[12];
                *(_DWORD *)(*(_DWORD *)v37[5].__pad_0 + 4 * v56 - 4) = *(_DWORD *)(*(_DWORD *)v37[5].__pad_0 + 4 * v56) )
          {
            ++v56;
          }
        }
      }
    }
    if ( *(_BYTE *)(this->gattlingValue + 5803) )
    {
      v59 = v37[5].abstractFlags;
      aP1 = (AbstractClass *)this;
      v60 = (*(int (__thiscall **)(int *, AbstractClass **))(v59 + 16))(&v37[5].abstractFlags, &aP1);
      if ( v60 != -1 )
      {
        v61 = *(_DWORD *)v37[6].__pad_0;
        if ( v60 < v61 )
        {
          ecx99 = v61 - 1;
          for ( *(_DWORD *)v37[6].__pad_0 = ecx99;
                v60 < *(_DWORD *)v37[6].__pad_0;
                *(_DWORD *)(v37[5].nextArrayIndex + 4 * v60 - 4) = *(_DWORD *)(v37[5].nextArrayIndex + 4 * v60) )
          {
            ++v60;
          }
        }
      }
    }
    v62 = (BuildingTypeClass *)this->gattlingValue;
    if ( v62->CanBeOccupied )
    {
      if ( *(int *)&v62->DebrisTypes[800] > -1 )
      {
        v64 = *(_DWORD *)&v37[6].__pad_0[8];
        aP1 = (AbstractClass *)this;
        v65 = (*(int (__thiscall **)(char *, AbstractClass **))(v64 + 16))(&v37[6].__pad_0[8], &aP1);
        if ( v65 != -1 )
        {
          v66 = v37[6].nextArrayIndex;
          if ( v65 < v66 )
          {
            v67 = v66 - 1;
            for ( v37[6].nextArrayIndex = v67;
                  v65 < v37[6].nextArrayIndex;
                  *(_DWORD *)(*(_DWORD *)&v37[6].__pad_0[12] + 4 * v65 - 4) = *(_DWORD *)(*(_DWORD *)&v37[6].__pad_0[12]
                                                                                        + 4 * v65) )
            {
              ++v65;
            }
          }
        }
      }
    }
    if ( *(_BYTE *)(this->gattlingValue + 5804) )
    {
      v68 = (int (__thiscall **)(void **, AbstractClass **))v37[6].NeedsSaveOrLink;
      aP1 = (AbstractClass *)this;
      v69 = v68[4](&v37[6].NeedsSaveOrLink, &aP1);
      if ( v69 != -1 )
      {
        v70 = *(_DWORD *)&v37[7].__pad_0[12];
        if ( v69 < v70 )
        {
          v71 = v70 - 1;
          for ( *(_DWORD *)&v37[7].__pad_0[12] = v71;
                v69 < *(_DWORD *)&v37[7].__pad_0[12];
                *(_DWORD *)(*(_DWORD *)v37[7].__pad_0 + 4 * v69 - 4) = *(_DWORD *)(*(_DWORD *)v37[7].__pad_0 + 4 * v69) )
          {
            ++v69;
          }
        }
      }
    }
    if ( *(_BYTE *)(this->gattlingValue + 5808) )
    {
      v72 = v37[7].abstractFlags;
      aP1 = (AbstractClass *)this;
      v73 = (*(int (__thiscall **)(int *, AbstractClass **))(v72 + 16))(&v37[7].abstractFlags, &aP1);
      if ( v73 != -1 )
      {
        v74 = *(_DWORD *)v37[8].__pad_0;
        if ( v73 < v74 )
        {
          v75 = v74 - 1;
          for ( *(_DWORD *)v37[8].__pad_0 = v75;
                v73 < *(_DWORD *)v37[8].__pad_0;
                *(_DWORD *)(v37[7].nextArrayIndex + 4 * v73 - 4) = *(_DWORD *)(v37[7].nextArrayIndex + 4 * v73) )
          {
            ++v73;
          }
        }
      }
    }
    if ( *(int *)(this->gattlingValue + 5900) > 0 )
    {
      v76 = *(_DWORD *)&v37[8].__pad_0[8];
      aP1 = (AbstractClass *)this;
      v77 = (*(int (__thiscall **)(char *, AbstractClass **))(v76 + 16))(&v37[8].__pad_0[8], &aP1);
      if ( v77 != -1 )
      {
        v78 = v37[8].nextArrayIndex;
        if ( v77 < v78 )
        {
          v79 = v78 - 1;
          for ( v37[8].nextArrayIndex = v79;
                v77 < v37[8].nextArrayIndex;
                *(_DWORD *)(*(_DWORD *)&v37[8].__pad_0[12] + 4 * v77 - 4) = *(_DWORD *)(*(_DWORD *)&v37[8].__pad_0[12]
                                                                                      + 4 * v77) )
          {
            ++v77;
          }
        }
      }
    }
    if ( *(_BYTE *)(this->gattlingValue + 5837) )
    {
      v80 = (int (__thiscall **)(void **, AbstractClass **))v37[8].NeedsSaveOrLink;
      aP1 = (AbstractClass *)this;
      v81 = v80[4](&v37[8].NeedsSaveOrLink, &aP1);
      if ( v81 != -1 )
      {
        v82 = *(_DWORD *)&v37[9].__pad_0[12];
        if ( v81 < v82 )
        {
          v83 = v82 - 1;
          for ( *(_DWORD *)&v37[9].__pad_0[12] = v83;
                v81 < *(_DWORD *)&v37[9].__pad_0[12];
                *(_DWORD *)(*(_DWORD *)v37[9].__pad_0 + 4 * v81 - 4) = *(_DWORD *)(*(_DWORD *)v37[9].__pad_0 + 4 * v81) )
          {
            ++v81;
          }
        }
      }
      HouseClass::CalculateCostMultipliers((float *)v37->__pad_0);
    }
    v84 = (int (__thiscall **)(void **, AbstractClass **, int, int))v37[2].NeedsSaveOrLink;
    aP1 = (AbstractClass *)this;
    v85 = v84[4](&v37[2].NeedsSaveOrLink, &aP1, v170, v171);
    if ( v85 != -1 )
    {
      v86 = *(_DWORD *)&v37[3].__pad_0[12];
      if ( v85 < v86 )
      {
        v87 = v86 - 1;
        for ( *(_DWORD *)&v37[3].__pad_0[12] = v87;
              v85 < *(_DWORD *)&v37[3].__pad_0[12];
              *(_DWORD *)(*(_DWORD *)v37[3].__pad_0 + 4 * v85 - 4) = *(_DWORD *)(*(_DWORD *)v37[3].__pad_0 + 4 * v85) )
        {
          ++v85;
        }
      }
    }
    if ( *(_BYTE *)(this->gattlingValue + 5836) )
      --*(_DWORD *)&v37[594].__pad_0[4];
    ecx134 = *(_DWORD *)(this->gattlingValue + 5476);
    if ( ecx134 )
    {
      if ( this->ActuallyPlacedOnMap )
      {
        *(_DWORD *)(this->focus + 356) -= ecx134;
        v88 = (AbstractClass *)this->focus;
        if ( (int)v88[9].NeedsSaveOrLink < 0 )
          v88[9].NeedsSaveOrLink = 0;
      }
    }
    ecx138 = *(_DWORD *)(this->gattlingValue + 5480);
    if ( ecx138 )
    {
      if ( this->ActuallyPlacedOnMap )
      {
        *(_DWORD *)(this->focus + 360) -= ecx138;
        v90 = (AbstractClass *)this->focus;
        if ( *(int *)v90[10].__pad_0 < 0 )
          *(_DWORD *)v90[10].__pad_0 = 0;
      }
    }
    v91 = (BuildingTypeClass *)this->gattlingValue;
    if ( v91->Helipad )
      *(_DWORD *)&v37[20].__pad_0[4] -= v91->?;
    v92 = (BuildingTypeClass *)this->gattlingValue;
    if ( v92->CloakGenerator )
    {
      v94 = this->CloakRadius;
      this->HasCloakingData = -1;
      if ( !v94 )
        this->CloakRadius = v92->CloakRadiusInCells;
      vfptr0 = *(BuildingTypeClass **)this;
      this->needsRedraw = 1;
      this->CloakRadius = 1;
      (*(void (__thiscall **)(#377 *, int))&vfptr0->DebrisTypes[252])(this, 1);
    }
    if ( *(_BYTE *)(this->gattlingValue + 3281) )
      (*(void (__thiscall **)(#377 *))(this->isTether)(this);
    (*(void (__thiscall **)(#377 *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 1164))(this, 0, 0, 0, 0);
    edi150 = v187;
    TechnoClass::ProcessCapture((int *)this, (int)v187, v187, 1);
    if ( *(_BYTE *)(this->gattlingValue + 5831) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(#377 *))(this->storedTiberium)(this) )
      {
        v96 = (BuildingTypeClass *)this->gattlingValue;
        if ( v96->CloakGenerator )
        {
          cl153 = this->CloakRadius;
          this->HasCloakingData = 1;
          if ( cl153 == v96->CloakRadiusInCells )
            this->CloakRadius = 0;
          this->needsRedraw = 1;
        }
      }
    }
    if ( *(_BYTE *)(this->gattlingValue + 3281)
      && (*(unsigned __int8 (__thiscall **)(#377 *))(this->storedTiberium)(this) )
    {
      (*(void (__thiscall **)(#377 *))(*(_DWORD *)this + 1044))(this);
    }
    AnimClass::updateAnimation((int)this, 0);
    v37[603].abstractFlags = (int)this;
    BuildingClass::CalcExitCoords((int *)v37->__pad_0);
    BuildingClass::CalcExitCoords(*((int **)this + 135));
    v98 = (AbstractClass *)this->focus;
    if ( (#377 *)v98[603].abstractFlags == this )
      v98[603].abstractFlags = 0;
    if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v37) && *(_BYTE *)(this->gattlingValue + 5817) )
    {
      *(_DWORD *)&stru_87C374.__pad_14B0[12648] = 0;
      *(_DWORD *)&stru_87C374.__pad_14B0[12652] = 0;
      *(_DWORD *)&stru_87C374.__pad_14B0[12656] = -1;
      Mouse::SetBounds((int)&stru_87C374.__pad_14B0[8132], 0);
    }
    BuildingClass::IncrementOccupantTypeCounter(*((_DWORD **)this + 135), (BuildingClass *)this);
    v99 = *(BuildingTypeClass **)this;
    this->IsBeingRepaired = 0;
    (*(void (__thiscall **)(#377 *, int))&v99->DebrisTypes[456])(this, 1);
    if ( *(_BYTE *)(this->gattlingValue + 5822) )
    {
      if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[21752] )
      {
        if ( !this->isAliveFlag
          || this->inLimbo
          || (BuildingClass::DemolishBridge(this),
              BuildingClass::DemolishBridge(this),
              BuildingClass::DemolishBridge(this),
              BuildingClass::DemolishBridge(this),
              BuildingClass::RepairPlacement(this, 1),
              !*(_DWORD *)&HouseClass_Player.__pad_5568[21752]) )
        {
          if ( *(_BYTE *)(this->gattlingValue + 5822) )
            this->LaserFenceFrame = 0;
        }
      }
    }
    if ( (unsigned __int8)House::IsHumanPlayer(*((#375 **)this + 135)) )
    {
      (*(void (__thiscall **)(#377 *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(this->turretRotateSoundController)(
        this,
        0,
        0,
        0,
        0,
        0);
      MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 1);
    }
    v101 = 1 << *(_DWORD *)(edi150->relatedTagsCapacity + 184);
    v102 = this->hasParachute;
    if ( (v102 & v101) != 0 )
      this->hasParachute = v102 & ~v101;
    v103 = (BuildingTypeClass *)(*(int (__thiscall **)(#377 *))(this->infantryBlinkTimer)(this);
    eax175 = (*(int (__thiscall **)(#377 *))(this->q1BC)(this);
    v104 = (BuildingTypeClass *)(*(int (__thiscall **)(#377 *, _DWORD))(this->__pad_1190)(
                                  this,
                                  *(__int16 *)(eax175 + 266));
    if ( (*(unsigned __int8 (__thiscall **)(#377 *))(this->q160)(this)
      || this->owningHouseIndex0 && *(_DWORD *)(this->owningHouseIndex0 + 80) == IsObjectTypeBuildingType((int)this) )
    {
      LOWORD(v104) = (unsigned __int16)Techno::StartInvulnerability(this, v104);
    }
    this->qE00 = (_WORD)v104;
    BuildingClass::SyncCrateVisuals((char *)this, v103, (unsigned __int16)v104);
    BuildingClass::SetConnectedBuildingMission((int *)this, (BuildingClass *)*((char *)this + 1773));
    v106 = 0;
    v107 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2236);
    if ( v107 <= 0 )
    {
LABEL_183:
      v109 = (int)v185;
    }
    else
    {
      v108 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2224);
      while ( *v108 != this->gattlingValue )
      {
        ++v106;
        ++v108;
        if ( v106 >= v107 )
          goto LABEL_183;
      }
      v109 = (int)v185;
      v166 = *((_DWORD *)v185 + 22);
      if ( *((_DWORD *)v185 + 24) < v166
        || (*((_BYTE *)v185 + 93) || !v166)
        && (v167 = *((_DWORD *)v185 + 25), v167 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*((_DWORD *)v185 + 20) + 8))(
             (int)v185 + 80,
             v166 + v167,
             0) )
      {
        v168 = *((_DWORD *)v185 + 24);
        v169 = *((_DWORD *)v185 + 21);
        *((_DWORD *)v185 + 24) = v168 + 1;
        *(_DWORD *)(v169 + 4 * v168) = this;
      }
    }
    if ( *(_BYTE *)(this->gattlingValue + 5801) )
    {
      v110 = *(_DWORD *)(v109 + 136);
      if ( *(_DWORD *)(v109 + 144) < v110
        || (*(_BYTE *)(v109 + 141) || !v110)
        && (v111 = *(_DWORD *)(v109 + 148), v111 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v109 + 128) + 8))(
             v109 + 128,
             v110 + v111,
             0) )
      {
        v112 = *(_DWORD *)(v109 + 144);
        v113 = *(_DWORD *)(v109 + 132);
        *(_DWORD *)(v109 + 144) = v112 + 1;
        *(_DWORD *)(v113 + 4 * v112) = this;
      }
    }
    if ( *(_BYTE *)(this->gattlingValue + 5805) )
    {
      v114 = *(_DWORD *)(v109 + 160);
      if ( *(_DWORD *)(v109 + 168) < v114
        || (*(_BYTE *)(v109 + 165) || !v114)
        && (v115 = *(_DWORD *)(v109 + 172), v115 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v109 + 152) + 8))(
             v109 + 152,
             v114 + v115,
             0) )
      {
        v116 = *(_DWORD *)(v109 + 168);
        edx197 = *(_DWORD *)(v109 + 156);
        *(_DWORD *)(v109 + 168) = v116 + 1;
        *(_DWORD *)(edx197 + 4 * v116) = this;
      }
    }
    v117 = (BuildingTypeClass *)this->gattlingValue;
    if ( v117->UnitAbsorb || v117->InfantryAbsorb )
    {
      v119 = *(_DWORD *)(v109 + 184);
      if ( *(_DWORD *)(v109 + 192) < v119
        || (*(_BYTE *)(v109 + 189) || !v119)
        && (v120 = *(_DWORD *)(v109 + 196), v120 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v109 + 176) + 8))(
             v109 + 176,
             v119 + v120,
             0) )
      {
        v121 = *(_DWORD *)(v109 + 192);
        v122 = *(_DWORD *)(v109 + 180);
        *(_DWORD *)(v109 + 192) = v121 + 1;
        *(_DWORD *)(v122 + 4 * v121) = this;
      }
    }
    if ( *(_BYTE *)(this->gattlingValue + 5803) )
    {
      v123 = *(_DWORD *)(v109 + 208);
      if ( *(_DWORD *)(v109 + 216) < v123
        || (*(_BYTE *)(v109 + 213) || !v123)
        && (v124 = *(_DWORD *)(v109 + 220), v124 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v109 + 200) + 8))(
             v109 + 200,
             v123 + v124,
             0) )
      {
        v125 = *(_DWORD *)(v109 + 216);
        edx212 = *(_DWORD *)(v109 + 204);
        *(_DWORD *)(v109 + 216) = v125 + 1;
        *(_DWORD *)(edx212 + 4 * v125) = this;
      }
    }
    v126 = (BuildingTypeClass *)this->gattlingValue;
    if ( v126->CanBeOccupied && *(int *)&v126->DebrisTypes[800] > -1 )
    {
      v128 = *(_DWORD *)(v109 + 232);
      if ( *(_DWORD *)(v109 + 240) < v128
        || (*(_BYTE *)(v109 + 237) || !v128)
        && (v129 = *(_DWORD *)(v109 + 244), v129 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v109 + 224) + 8))(
             v109 + 224,
             v128 + v129,
             0) )
      {
        v130 = *(_DWORD *)(v109 + 240);
        v131 = *(_DWORD *)(v109 + 228);
        *(_DWORD *)(v109 + 240) = v130 + 1;
        *(_DWORD *)(v131 + 4 * v130) = this;
      }
    }
    if ( *(_BYTE *)(this->gattlingValue + 5804) )
    {
      v132 = *(_DWORD *)(v109 + 256);
      if ( *(_DWORD *)(v109 + 264) < v132
        || (*(_BYTE *)(v109 + 261) || !v132)
        && (v133 = *(_DWORD *)(v109 + 268), v133 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v109 + 248) + 8))(
             v109 + 248,
             v132 + v133,
             0) )
      {
        v134 = *(_DWORD *)(v109 + 264);
        v135 = *(_DWORD *)(v109 + 252);
        *(_DWORD *)(v109 + 264) = v134 + 1;
        *(_DWORD *)(v135 + 4 * v134) = this;
      }
    }
    if ( *(_BYTE *)(this->gattlingValue + 5808) )
    {
      v136 = *(_DWORD *)(v109 + 280);
      if ( *(_DWORD *)(v109 + 288) < v136
        || (*(_BYTE *)(v109 + 285) || !v136)
        && (v137 = *(_DWORD *)(v109 + 292), v137 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v109 + 272) + 8))(
             v109 + 272,
             v137 + v136,
             0) )
      {
        v138 = *(_DWORD *)(v109 + 288);
        v139 = *(_DWORD *)(v109 + 276);
        *(_DWORD *)(v109 + 288) = v138 + 1;
        *(_DWORD *)(v139 + 4 * v138) = this;
      }
    }
    if ( *(int *)(this->gattlingValue + 5900) > 0 )
    {
      v140 = *(_DWORD *)(v109 + 304);
      if ( *(_DWORD *)(v109 + 312) < v140
        || (*(_BYTE *)(v109 + 309) || !v140)
        && (v141 = *(_DWORD *)(v109 + 316), v141 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v109 + 296) + 8))(
             v109 + 296,
             v141 + v140,
             0) )
      {
        v142 = *(_DWORD *)(v109 + 312);
        v143 = *(_DWORD *)(v109 + 300);
        *(_DWORD *)(v109 + 312) = v142 + 1;
        *(_DWORD *)(v143 + 4 * v142) = this;
      }
    }
    if ( *(_BYTE *)(this->gattlingValue + 5837) )
    {
      v144 = *(_DWORD *)(v109 + 328);
      if ( *(_DWORD *)(v109 + 336) < v144
        || (*(_BYTE *)(v109 + 333) || !v144)
        && (v145 = *(_DWORD *)(v109 + 340), v145 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v109 + 320) + 8))(
             v109 + 320,
             v145 + v144,
             0) )
      {
        v146 = *(_DWORD *)(v109 + 336);
        v147 = *(_DWORD *)(v109 + 324);
        *(_DWORD *)(v109 + 336) = v146 + 1;
        *(_DWORD *)(v147 + 4 * v146) = this;
      }
      HouseClass::CalculateCostMultipliers((float *)v109);
    }
    v148 = *(_DWORD *)(v109 + 112);
    if ( *(_DWORD *)(v109 + 120) < v148
      || (*(_BYTE *)(v109 + 117) || !v148)
      && (v149 = *(_DWORD *)(v109 + 124), v149 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v109 + 104) + 8))(v109 + 104, v149 + v148, 0) )
    {
      v150 = *(_DWORD *)(v109 + 120);
      v151 = *(_DWORD *)(v109 + 108);
      *(_DWORD *)(v109 + 120) = v150 + 1;
      *(_DWORD *)(v151 + 4 * v150) = this;
    }
    if ( *(_BYTE *)(this->gattlingValue + 5836) )
      ++*(_DWORD *)(this->focus + 21388);
    ecx258 = *(_DWORD *)(this->gattlingValue + 5476);
    if ( ecx258 )
      *(_DWORD *)(this->focus + 356) += ecx258;
    v152 = (BuildingTypeClass *)this->gattlingValue;
    UnitsGainSelfHeal = v152->UnitsGainSelfHeal;
    if ( UnitsGainSelfHeal )
      *(_DWORD *)(this->focus + 360) += UnitsGainSelfHeal;
    v154 = (BuildingTypeClass *)this->gattlingValue;
    if ( v154->Helipad )
      *(_DWORD *)(this->focus + 724) += v154->?;
    v155 = (BuildingTypeClass *)this->gattlingValue;
    v156 = (AbstractClass *)v155->Factory[0];
    if ( v156 )
    {
      LOBYTE(v152) = v155->DebrisTypes[2490];
      HouseClass::UpdateProduction((int)v37, (IUnknown *)v156, (AbstractClass *)v152, 0);
      v157 = (BuildingTypeClass *)this->gattlingValue;
      LOBYTE(v159) = v157->DebrisTypes[2490];
      HouseClass::UpdateProduction(v109, (IUnknown *)v157->Factory[0], v159, 0);
    }
    edi266 = 0;
    if ( (int)v183 > 0 )
    {
      v160 = (CCINIClass *)Block;
      do
      {
        (*(void (__thiscall **)(#377 *, int, _DWORD))(this->temporalTargetingMe)(
          this,
          2,
          **(_DWORD **)&v160->__pad_0[4 * edi266]);
        v160 = (CCINIClass *)Block;
        if ( *(_BYTE *)(*((_DWORD *)Block + edi266) + 4) )
        {
          this->isTether = 1;
          *(_BYTE *)(**(_DWORD **)&v160->__pad_0[4 * edi266] + 1048) = 1;
          v160 = (CCINIClass *)Block;
        }
        ++edi266;
      }
      while ( edi266 < (int)v183 );
    }
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] )
    {
      if ( !(unsigned __int8)House::IsCurrentPlayer((#375 *)v109) )
      {
        v162 = this->ammoReloadTimer;
        if ( v162 != v109 && !*(_BYTE *)(*(_DWORD *)(v162 + 52) + 422) )
        {
          for ( i = this->UpgradeLevel; i > 0; i = this->UpgradeLevel )
          {
            v164 = *((_DWORD *)this + i + 378);
            v165 = (IUnknown *)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v164 + 184))(
                                 v164,
                                 this->focus,
                                 1);
            HouseClass::AddPower(*((_DWORD **)this + 135), v165);
            BuildingClass::ClearSuperWeaponAnim((int)this);
            *(_BYTE *)(this->focus + 22392) = 1;
            *(_BYTE *)(this->focus + 22393) = 1;
          }
          (*(void (__thiscall **)(#377 *, int))(this->q1A0)(this, 1);
        }
      }
    }
    v37[14].__pad_0[4] = 1;
    result = (int)Block;
    *(_BYTE *)(v109 + 508) = 1;
    v179 = &vt_VectorClass_Reestablish;
    if ( result )
    {
      if ( BYTE1(v182) )
        __3_YAXPAX_Z((void *)result);
    }
    LOBYTE(result) = 1;
  }
  return result;
}


// ==== 0x00449410  BuildingClass::GetBoundingSizeExt  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetBoundingSizeExt(#377 *this)
{
  return (*(_BYTE *)(this->gattlingValue + 5829) != 0 ? 0x20 : 0)
       - (*(_BYTE *)(this->gattlingValue + 5815) != 0 ? 0x10 : 0)
       + ObjectClass::GetBoundingSize(this);
}


// ==== 0x00449440  BuildingClass::GetCursorAction  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetCursorAction(#377 *this)
{
  _DWORD *v1; // eax
  void *v2; // eax
  int v3; // eax
  int v5; // eax
  int v6; // [esp-Ch] [ebp-Ch]
  int v7; // [esp-8h] [ebp-8h]
  int v8; // [esp-4h] [ebp-4h]
  int v9; // [esp+4h] [ebp+4h] BYREF

  v1 = (_DWORD *)this->gattlingValue; /*0x449447*/
  v9 = *(_DWORD *)(v9 + 36); /*0x44944d*/
  if ( v1[258] && this->isOnMap ) /*0x44945b*/
  {
    v8 = this->focus; /*0x44946e*/
    v7 = (int)v1; /*0x44946f*/
    v6 = v1[415]; /*0x449474*/
    v2 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v9); /*0x44947b*/
    v3 = -(CellClass::IsPassable((int)v2, v6, v7, v8) != 0); /*0x449489*/
    LOBYTE(v3) = v3 & 0xF9; /*0x44948b*/
    return v3 + 7; /*0x44948d*/
  }
  else
  {
    v5 = -((*(unsigned __int8 (__thiscall **)(_DWORD *, int *, _DWORD))(*v1 + 168))(v1, &v9, this->focus) != 0); /*0x4494ab*/
    LOBYTE(v5) = v5 & 0xF9; /*0x4494ad*/
    return v5 + 7; /*0x4494af*/
  }
}


// ==== 0x004494C0  BuildingClass::CanBeSold  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CanBeSold(#377 *this)
{
  int result; // eax

  result = ObjectClass::HasLocation(this); /*0x4494c3*/
  if ( (_BYTE)result ) /*0x4494ca*/
    goto LABEL_11; /*0x4494ca*/
  result = this->gattlingValue; /*0x4494cc*/
  if ( *(_BYTE *)(result + 5497) ) /*0x4494d2*/
    goto LABEL_11; /*0x4494d2*/
  if ( this->BuildingClass_field_bool_6E9 ) /*0x4494dc*/
  {
    result = this->BuildingClass_field_int_534; /*0x4494e6*/
    if ( result ) /*0x4494ee*/
    {
      result = (*(int (__thiscall **)(#377 *))(this->q184)(this); /*0x4494f4*/
      if ( result != 19 ) /*0x4494fd*/
      {
        result = (*(int (__thiscall **)(#377 *))(this->q184)(this); /*0x449503*/
        if ( result != 18 ) /*0x44950c*/
        {
          LOBYTE(result) = 1; /*0x44950e*/
          return result; /*0x449511*/
        }
      }
    }
  }
  if ( !*(_BYTE *)(this->gattlingValue + 5824) || *(_BYTE *)(this->focus + 506) ) /*0x449528*/
LABEL_11:
    LOBYTE(result) = 0; /*0x449536*/
  else
    LOBYTE(result) = 1; /*0x449532*/
  return result; /*0x449510*/
}


// ==== 0x00449540  AnimClass::resetAnimation  this=TechnoClass  sig=csp ====
char __thiscall AnimClass::resetAnimation(IUnknown *this)
{
  int v2; // eax
  int v3; // edi
  _WORD *v4; // eax
  _DWORD *v5; // ebp
  int ClosestObjectCell; // eax
  IUnknown *NeighbourContent; // edi
  int v8; // eax
  TechnoClass *v10; // [esp+10h] [ebp-20h]
  TechnoClass *i; // [esp+10h] [ebp-20h]
  TechnoClass *v12; // [esp+18h] [ebp-18h] BYREF
  IUnknown *v13; // [esp+1Ch] [ebp-14h] BYREF
  int v14; // [esp+20h] [ebp-10h]
  _DWORD v15[3]; // [esp+24h] [ebp-Ch] BYREF

  v2 = this->field_520; /*0x44954b*/
  if ( !*(_BYTE *)(v2 + 5821) ) /*0x449551*/
    return 0; /*0x449551*/
  v3 = *(_DWORD *)(*(_DWORD *)(v2 + 3796) + 40); /*0x449567*/
  v4 = (_WORD *)(*(int (__thiscall **)(IUnknown *, IUnknown **))(this->field_0 + 440))(this, &v13); /*0x449573*/
  HIWORD(v10) = HIWORD(v3) + v4[1]; /*0x449596*/
  LOWORD(v10) = v3 + *v4 - 1; /*0x4495a1*/
  v15[1] = (SHIWORD(v10) << 8) + 128; /*0x4495be*/
  v12 = v10; /*0x4495c2*/
  v15[0] = ((__int16)v10 << 8) + 128; /*0x4495cc*/
  v15[2] = 0; /*0x4495d6*/
  v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v12); /*0x4495e4*/
  v13 = 0; /*0x4495ea*/
  v14 = 0; /*0x4495ee*/
  ClosestObjectCell = Object::FindClosestObjectCell(v5, (IUnknown *)&v13, 0, this); /*0x4495f2*/
  if ( !ClosestObjectCell ) /*0x4495f9*/
    return 0; /*0x44969e*/
  (*(void (__thiscall **)(int))(*(_DWORD *)ClosestObjectCell + 132))(ClosestObjectCell); /*0x449603*/
  Debug::Log(); /*0x449612*/
  Cell::ApplyDamage(v5, &aP5, 1, 1, 0); /*0x449626*/
  for ( i = 0; (int)i < 8; i = (TechnoClass *)((char *)i + 1) ) /*0x44962b*/
  {
    NeighbourContent = (IUnknown *)Cell::GetNeighbourContent(v5, (unsigned int)i); /*0x449640*/
    v13 = 0; /*0x449646*/
    v14 = 0; /*0x44964a*/
    v8 = Object::FindClosestObjectCell(NeighbourContent, (IUnknown *)&v13, 0, this); /*0x44964e*/
    if ( v8 ) /*0x449655*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 132))(v8); /*0x44965b*/
      Debug::Log(); /*0x44966a*/
      Cell::ApplyDamage(NeighbourContent, (IUnknown *)v15, 1, 1, 0); /*0x44967e*/
    }
  }
  return 1; /*0x449691*/
}


// ==== 0x004496B0  BuildingClass::UpdateProduction  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::UpdateProduction(#377 *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  char *MissionControl; // eax
  int v7; // esi
  _BYTE *v8; // ecx
  int v9; // eax
  int v10; // ebp
  _BYTE *Member; // eax
  _BYTE *v12; // edi
  _DWORD *v13; // ebx
  _DWORD *v14; // eax
  int *v15; // eax
  double v16; // st7
  char *v17; // eax
  int v18; // esi
  char *v19; // eax
  int v20; // esi
  _BYTE v21[12]; // [esp+34h] [ebp-24h] BYREF
  _BYTE v22[12]; // [esp+40h] [ebp-18h] BYREF
  _DWORD v23[3]; // [esp+4Ch] [ebp-Ch] BYREF

  if ( *(_BYTE *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3285) ) /*0x4496c7*/
  {
    TechnoClass::DrainAmmo((char *)this, this->missionData); /*0x4496da*/
    this->missionData = 0; /*0x4496df*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(#377 *))(this->isBerserk)(this) ) /*0x4496ed*/
  {
    v2 = this->gattlingValue; /*0x4496fb*/
    this->BuildingClass_field_bool_6DD = 1; /*0x449701*/
    if ( *(_BYTE *)(v2 + 5827) /*0x449780*/
      || ((v3 = *(_DWORD *)(v2 + 5872), v3 == -1)
       || (v4 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)MEMORY[0xA83CBC] + v3) + 40) + 200)) == 0
       || DynamicVector::GetOrGrow((_DWORD *)(this->focus + 21840), *(_DWORD *)(v4 + 3576)))
      && *(_DWORD *)(this->gattlingValue + 5872) != -1
      || *(_BYTE *)(this->gattlingValue + 5499)
      && (*(int (__thiscall **)(#377 *))(this->q408)(this) <= 0
      || !this->q2B4 )
    {
      MissionControl = MissionClass::GetMissionControl(this); /*0x4497b1*/
      v7 = Math::RoundToInt(*((double *)MissionControl + 3) * 900.0); /*0x4497c4*/
      return v7 + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2); /*0x4497da*/
    }
    else
    {
      (*(void (__thiscall **)(#377 *, int, _DWORD))(this->q1E8)(this, 1, 0); /*0x449792*/
      (*(void (__thiscall **)(#377 *))(this->disguiseBlinkTimer)(this); /*0x44979c*/
      return 1; /*0x4497a2*/
    }
  }
  v8 = (_BYTE *)this->gattlingValue; /*0x4497e4*/
  if ( v8[5813] ) /*0x4497ea*/
    return 100; /*0x449800*/
  v9 = this->missionStatus; /*0x449801*/
  if ( !v9 ) /*0x44980a*/
  {
    BuildingClass::StartProduction((int *)this, 1); /*0x449961*/
    this->missionStatus = 1; /*0x449966*/
LABEL_32:
    if ( *(_BYTE *)(this->gattlingValue + 5802) /*0x4499ab*/
      && Team::AllMembersValid((int *)this)
      && (*(int (__thiscall **)(#377 *, int))(this->temporalUsing)(this, 29) != 1
      && (*(int (__thiscall **)(#377 *, int))(this->temporalUsing)(this, 19) == 1 )
    {
      (*(void (__thiscall **)(#377 *, int, _DWORD))(this->q1E8)(this, 20, 0); /*0x4499b5*/
    }
    if ( *(_BYTE *)(this->gattlingValue + 5801) ) /*0x4499c1*/
    {
      v17 = MissionClass::GetMissionControl(this); /*0x4499cd*/
      v18 = Math::RoundToInt(*((double *)v17 + 2) * 900.0); /*0x4499ea*/
      return v18 + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2); /*0x4499f7*/
    }
    else
    {
      v19 = MissionClass::GetMissionControl(this); /*0x449a01*/
      v20 = Math::RoundToInt(*((double *)v19 + 2) * 900.0); /*0x449a14*/
      return 3 * v20 + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2); /*0x449a2e*/
    }
  }
  if ( v9 != 1 ) /*0x449811*/
    goto LABEL_32; /*0x449811*/
  if ( !v8[5801] && !v8[5802] && !v8[5803] || (v10 = 0, *((int *)this + 58) <= 0) ) /*0x449843*/
  {
LABEL_28:
    if ( *(_BYTE *)(this->gattlingValue + 5821) ) /*0x44992f*/
      AnimClass::resetAnimation(this); /*0x44993b*/
    goto LABEL_32; /*0x449940*/
  }
  while ( 1 ) /*0x44984c*/
  {
    Member = (_BYTE *)Team::GetMember(this, v10); /*0x44984c*/
    v12 = Member; /*0x449851*/
    if ( Member ) /*0x449855*/
    {
      if ( (Member[20] & 1) != 0 && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)Member + 388))(Member) == 7 ) /*0x449878*/
      {
        v13 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v12 + 72))(v12, v21); /*0x44988c*/
        v14 = (_DWORD *)(*(int (__thiscall **)(#377 *, _BYTE *))(this->q048)(this, v22); /*0x449895*/
        v15 = Coord::Subtract(v23, *v14 - *v13, v14[1] - v13[1], v14[2] - v13[2]); /*0x4498b5*/
        v16 = Math::Sqrt((double)*v15 * (double)*v15 + (double)v15[2] * (double)v15[2] + (double)v15[1] * (double)v15[1]); /*0x4498f6*/
        if ( (int)Math::RoundToInt(v16) < 64 /*0x449918*/
          && (*(int (__thiscall **)(#377 *, int, _BYTE *))(this->temporalTargetingMe)(this, 19, v12) == 1 )
        {
          break; /*0x449918*/
        }
      }
    }
    if ( ++v10 >= this->q0E8 ) /*0x449923*/
      goto LABEL_28; /*0x449923*/
  }
  (*(void (__thiscall **)(#377 *, int, _DWORD))(this->q1E8)(this, 20, 0); /*0x44994a*/
  return 1; /*0x4497a7*/
}


// ==== 0x00449A40  BuildingClass::GetOwnerHouse  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetOwnerHouse(#377 *this)
{
  return (*(int (__thiscall **)(#377 *))(this->focus)(this);
}


// ==== 0x00449A50  BuildingClass::setLoopCount  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::vt_145_(#377 *this)
{
  int v2; // eax
  int v3; // eax
  __int16 v4; // cx
  int SpotlightRadius; // ecx
  __int16 v7; // [esp+14h] [ebp-1Ch] BYREF
  _DWORD v8[3]; // [esp+18h] [ebp-18h] BYREF
  _DWORD v9[3]; // [esp+24h] [ebp-Ch] BYREF

  v2 = this->missionStatus; /*0x449a57*/
  if ( !v2 ) /*0x449a60*/
  {
    BuildingClass::StartProduction((int *)this, 0); /*0x449b36*/
    (*(void (__thiscall **)(#377 *, int))(this->temporalUsing)(this, 11); /*0x449b41*/
    SpotlightRadius = *(_DWORD *)(this->gattlingValue + 3692); /*0x449b4d*/
    if ( SpotlightRadius != -1 || (SpotlightRadius = MEMORY[0x8871E0]->BuildingDamageSound, SpotlightRadius != -1) ) /*0x449b67*/
    {
      v9[0] = this->q027; /*0x449b75*/
      v9[1] = this->owningHouseIndex; /*0x449b7c*/
      v9[2] = this->q029; /*0x449b8e*/
      StartAudioControllerAt(SpotlightRadius, (int)v9, (int)this + 1696); /*0x449b92*/
    }
    this->needsRedraw = 1; /*0x449b97*/
    this->missionStatus = 1; /*0x449b9e*/
    return 1; /*0x449b9e*/
  }
  if ( v2 != 1 ) /*0x449a67*/
    return 1; /*0x449a67*/
  this->needsRedraw = 1; /*0x449a79*/
  v8[0] = this->q027; /*0x449a82*/
  v8[1] = this->owningHouseIndex; /*0x449a8d*/
  v8[2] = this->q029; /*0x449a96*/
  StartAudioController((int)v8, (int)this + 1696); /*0x449a9a*/
  if ( !this->BuildingClass_field_bool_6DD ) /*0x449a9f*/
    return 1; /*0x449ba9*/
  (*(void (__thiscall **)(#377 *, int))(this->temporalUsing)(this, 12); /*0x449ab3*/
  (*(void (__thiscall **)(#377 *, int))(this->temporalUsing)(this, 3); /*0x449abf*/
  BuildingClass::StartProduction((int *)this, 1); /*0x449ac9*/
  (*(void (__thiscall **)(#377 *, _DWORD))(this->queuedVoiceSoundController)(this, 0); /*0x449ad4*/
  (*(void (__thiscall **)(#377 *, int, _DWORD))(this->q1E8)(this, 5, 0); /*0x449ae2*/
  v3 = this->gattlingValue; /*0x449ae8*/
  if ( !*(_BYTE *)(v3 + 5823) ) /*0x449aee*/
  {
    LOBYTE(v4) = 0; /*0x449af8*/
    HIBYTE(v4) = *(_BYTE *)(v3 + 3800); /*0x449afe*/
    v7 = v4; /*0x449b05*/
    FacingClass::Set_SyncLog(&v7); /*0x449b10*/
  }
  BuildingTypeClass::IsPowered(this->gattlingValue); /*0x449b1b*/
  Mixer::ReleaseChannel((int **)this + 424); /*0x449b22*/
  return 1; /*0x449b27*/
}


// ==== 0x00449C30  BuildingClass::finalizeAnimation  this=BuildingClass  sig=csp ====
void __thiscall sub_729370(int this)
{
  int v2; // edi
  int v3; // edx
  int v4; // eax
  int *v5; // ecx
  void **v6; // eax
  int *v7; // ecx
  int v8; // [esp+10h] [ebp-Ch] BYREF
  int v9; // [esp+14h] [ebp-8h]
  int v10; // [esp+18h] [ebp-4h]

  v2 = *(_DWORD *)(this + 52); /*0x729377*/
  if ( !v2 ) /*0x729380*/
    goto LABEL_7; /*0x729380*/
  v3 = *(_DWORD *)(this + 40); /*0x729382*/
  v4 = *(_DWORD *)(this + 48); /*0x729385*/
  if ( v3 != -1 ) /*0x72938b*/
  {
    if ( (int)MEMORY[0xA8ED84] - v3 >= v4 ) /*0x729397*/
      v4 = 0; /*0x72939d*/
    else
      v4 -= (int)MEMORY[0xA8ED84] - v3; /*0x729399*/
  }
  if ( (double)(v2 - v4) / (double)*(int *)(this + 52) == 1.0 ) /*0x7293b8*/
  {
LABEL_7:
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1348))( /*0x7293ca*/
      *(_DWORD *)(this + 12),
      0,
      1072693248);
    v5 = *(int **)(this + 12); /*0x7293d0*/
    *(_DWORD *)(this + 24) = 3; /*0x7293d3*/
    v5 += 39; /*0x7293da*/
    v8 = *v5; /*0x7293e4*/
    v9 = v5[1]; /*0x7293ef*/
    v10 = v5[2]; /*0x7293fb*/
    StartAudioControllerAt(MEMORY[0x8871E0]->ImpactLandSound, (int)&v8, 0); /*0x729405*/
    v6 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x72940f*/
    if ( v6 ) /*0x729419*/
    {
      v7 = (int *)(*(_DWORD *)(this + 12) + 156); /*0x729420*/
      v8 = *v7; /*0x729433*/
      v9 = v7[1]; /*0x72943a*/
      v10 = v7[2]; /*0x729446*/
      AnimClass::ctor(v6, (void *)MEMORY[0x8871E0]->?[3], &v8, 0, 1, (void *)0x600, 0, 0); /*0x729459*/
    }
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 220))(*(_DWORD *)(this + 12), 0); /*0x729465*/
  }
}


// ==== 0x0044ABD0  BuildingClass::FireLaser  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::FireLaser(_DWORD *this, int a2, int a3, int a4)
{
  int *v5; // eax
  char *v6; // eax
  wchar_t *v7; // eax
  int ConditionRedSparkingProbability_high; // ecx
  int v10; // [esp-20h] [ebp-44h]
  int ConditionYellowSparkingProbability; // [esp-14h] [ebp-38h]
  char *v12; // [esp+14h] [ebp-10h]
  _DWORD v13[3]; // [esp+18h] [ebp-Ch] BYREF

  v12 = (char *)__2_YAPAXI_Z(0x5Cu); /*0x44abef*/
  if ( v12 ) /*0x44abf3*/
  {
    ConditionYellowSparkingProbability = MEMORY[0x8871E0]->?; /*0x44ac10*/
    LOWORD(v10) = *(_WORD *)(this->focus + 22268); /*0x44ac42*/
    HIWORD(v10) = *(unsigned __int8 *)(this->focus + 22270); /*0x44ac4c*/
    v5 = (int *)(*(int (__thiscall **)(_DWORD *, _DWORD *, _DWORD, _DWORD, _DWORD, _DWORD))(*this + 176))( /*0x44ac7f*/
                  this,
                  v13,
                  0,
                  0,
                  0,
                  0);
    v6 = TimerClass::Construct( /*0x44ac9e*/
           v12,
           *v5,
           v5[1],
           v5[2],
           a2,
           a3,
           a4,
           0,
           1,
           v10,
           0,
           0,
           ConditionYellowSparkingProbability,
           0,
           1,
           1065353216,
           0);
    if ( v6 ) /*0x44aca5*/
    {
      v6[32] = 1; /*0x44aca7*/
      *((_DWORD *)v6 + 7) = 3; /*0x44acab*/
    }
  }
  v7 = MEMORY[0xA8ED84]; /*0x44acb8*/
  ConditionRedSparkingProbability_high = HIDWORD(MEMORY[0x8871E0]->?); /*0x44acc4*/
  this->SupportingPrisms = 0; /*0x44acca*/
  this->slaveManager = v7; /*0x44acd0*/
  this->slaveOwner = a3; /*0x44acd8*/
  this->originalOwnerHouse = ConditionRedSparkingProbability_high; /*0x44acdc*/
  return a3; /*0x44acc3*/
}


// ==== 0x0044ACF0  BuildingClass::ProcessActiveUpdate  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ProcessActiveUpdate(#377 *this)
{
  BuildingTypeClass *v2; // eax
  int v3; // ecx
  char *MissionControl; // eax
  BuildingTypeClass *v5; // esi
  FacingStruct *v7; // edi
  FacingStruct *v8; // eax
  int v9; // eax
  FacingStruct *v10; // edi
  FacingStruct *v11; // eax
  BuildingTypeClass *v12; // ebx
  DirStruct *v13; // eax
  BuildingTypeClass *v14; // eax
  BuildingTypeClass *vfptr0; // edx
  int v16; // ebp
  BuildingTypeClass *v17; // eax
  BuildingTypeClass *v18; // edi
  DirStruct v19; // edx
  BuildingTypeClass *v20; // eax
  char v21; // bl
  _DWORD *Value; // eax
  __int16 v23; // dx
  BuildingTypeClass *v24; // eax
  DirStruct *v25; // eax
  DirStruct *v26; // eax
  DirStruct *v27; // eax
  _DWORD *ecx73; // ecx
  BuildingTypeClass *v28; // eax
  ObjectClass *v30; // ebx
  int *v31; // eax
  int v32; // ecx
  int eax78; // eax
  TechnoClass *v33; // edi
  void *slaveManager; // edx
  char *originalOwnerHouse; // ecx
  _DWORD *v37; // edx
  int v38; // ebp
  int v39; // eax
  double v40; // st7
  int ebp90; // ebp
  BuildingTypeClass *v41; // edi
  int *v43; // eax
  int v44; // ecx
  int v45; // edx
  int v46; // eax
  int v47; // edx
  int v48; // ecx
  _BYTE *v49; // eax
  float v50; // ecx
  int v51; // eax
  double HealthRatio; // st7
  int v53; // edx
  int v54; // ecx
  _BYTE *v55; // eax
  int v56; // edx
  float v57; // eax
  int v58; // [esp+1Ch] [ebp-84h]
  DirStruct desiredFacing[2]; // [esp+38h] [ebp-68h] BYREF
  double v60; // [esp+40h] [ebp-60h] BYREF
  int v61; // [esp+4Ch] [ebp-54h] BYREF
  int v62; // [esp+50h] [ebp-50h] BYREF
  char v63[4]; // [esp+54h] [ebp-4Ch] BYREF
  double v64; // [esp+58h] [ebp-48h]
  int v65; // [esp+64h] [ebp-3Ch]
  int v66; // [esp+68h] [ebp-38h]
  int v67; // [esp+6Ch] [ebp-34h]
  int v68; // [esp+74h] [ebp-2Ch]
  float v69; // [esp+78h] [ebp-28h]
  char v70[12]; // [esp+7Ch] [ebp-24h] BYREF
  char v71[12]; // [esp+88h] [ebp-18h] BYREF
  char v72[12]; // [esp+94h] [ebp-Ch] BYREF

  v2 = (BuildingTypeClass *)this->gattlingValue; /*0x44ad01*/
  if ( !v2->SAM ) /*0x44ad0f*/
  {
    if ( !this->q2B4 ) /*0x44af86*/
    {
      (*(void (__thiscall **)(#377 *, _DWORD))(this->unknown_short_3C8)(this, 0); /*0x44af95*/
      vfptr0 = *(BuildingTypeClass **)this; /*0x44af9b*/
      this->q199 = 0; /*0x44af9f*/
      if ( (*(unsigned __int8 (__thiscall **)(#377 *))&vfptr0->DebrisTypes[284])(this) ) /*0x44afa5*/
        BuildingClass::GetType_Thunk(this); /*0x44afb1*/
      if ( (*(int (__thiscall **)(#377 *))(this->q184)(this) != 28 ) /*0x44afc3*/
      {
        (*(void (__thiscall **)(#377 *, int, _DWORD))(this->q1E8)(this, 5, 0); /*0x44afd0*/
        (*(void (__thiscall **)(#377 *))(this->disguiseBlinkTimer)(this); /*0x44afda*/
        return 1; /*0x44afec*/
      }
      return 1; /*0x44afc3*/
    }
    v16 = (*(int (__thiscall **)(#377 *, _DWORD))(this->spawnManager)(this, this->q2B4); /*0x44affe*/
    v17 = *(BuildingTypeClass **)this; /*0x44b000*/
    v58 = this->q2B4; /*0x44b005*/
    this->BuildingClass_field_bool_6DD = 1; /*0x44b008*/
    v18 = (BuildingTypeClass *)(*(int (__thiscall **)(#377 *, int, int, int))&v17->DebrisTypes[172])(this, v58, v16, 1); /*0x44b015*/
    if ( v18 == (BuildingTypeClass *)2 ) /*0x44b01a*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(#377 *))(*(_DWORD *)this + 1020))(this) ) /*0x44b024*/
      {
        if ( *(_BYTE *)(this->gattlingValue + 5829) ) /*0x44b038*/
        {
          v19 = *(DirStruct *)(*(int (__thiscall **)(#377 *, int *, _DWORD))(*(_DWORD *)this + 1256))( /*0x44b05c*/
                                this,
                                &v61,
                                this->q2B4);
          v20 = (BuildingTypeClass *)this->gattlingValue; /*0x44b05e*/
          desiredFacing[1] = v19; /*0x44b064*/
          if ( !*(_DWORD *)&v20->DebrisTypes[1032] /*0x44b0a4*/
            || (v21 = *(_DWORD *)&v20->DebrisTypes[1032],
                Value = ProgressTimer::GetValue((_WORD *)this + 452, (IUnknown *)&v61),
                LOBYTE(v23) = 0,
                HIBYTE(v23) = v21,
                abs16(v23) >= (int)abs16(*(_WORD *)Value - desiredFacing[1].Value)) )
          {
            FacingClass::Set_SyncLog((FacingClass *)((char *)this + 904), &desiredFacing[1]); /*0x44b0b3*/
            v18 = (BuildingTypeClass *)(*(int (__thiscall **)(#377 *, _DWORD, int, int))(this->q0F0)( /*0x44b0cc*/
                                         this,
                                         this->q2B4,
                                         v16,
                                         1);
          }
        }
      }
    }
    switch ( (unsigned int)v18 ) /*0x44b0d7*/
    {
      case 0u: /*0x44b0d7*/
        if ( this->UpgradeLevel ) /*0x44b2bc*/
        {
          ecx73 = (_DWORD *)this->Upgrades; /*0x44b2c6*/
          if ( ecx73 ) /*0x44b2ce*/
          {
            if ( BuildingClass::processCapture(ecx73) ) /*0x44b2d0*/
            {
              (*(void (__thiscall **)(#377 *, _DWORD, _DWORD))(this->countedAsOwned)(this, this->q2B4, 0); /*0x44b2e9*/
              (*(void (__thiscall **)(#377 *, _DWORD, int))(this->countedAsOwned)(this, this->q2B4, 1); /*0x44b2f3*/
            }
            goto LABEL_116; /*0x44b2f3*/
          }
        }
        v28 = (BuildingTypeClass *)this->gattlingValue; /*0x44b2fe*/
        if ( v28 != *(BuildingTypeClass **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1176) ) /*0x44b30a*/
        {
          if ( !v28->IsAnimDelayedFire ) /*0x44b638*/
          {
            (*(void (__thiscall **)(#377 *, _DWORD, int))(this->countedAsOwned)(this, this->q2B4, v16); /*0x44b6d0*/
            goto LABEL_116; /*0x44b6d0*/
          }
          v56 = v68; /*0x44b644*/
          this->DelayBeforeFiring = v28->DelayedFireDelay; /*0x44b64e*/
          v57 = v69; /*0x44b654*/
          this->PrismTargetCoords = v16; /*0x44b65a*/
          this->PrismStage = 1; /*0x44b65c*/
          this->q70C = v56; /*0x44b666*/
          *((float *)this + 452) = v57; /*0x44b669*/
          BuildingClass::ClearAnims((int *)this, (TechnoClass *)3); /*0x44b66e*/
          if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888) ) /*0x44b68b*/
          {
            v54 = 0; /*0x44b6a5*/
            v55 = (_BYTE *)(this->gattlingValue + 4596); /*0x44b6a7*/
          }
          else
          {
            v54 = 1; /*0x44b693*/
            v55 = (_BYTE *)(this->gattlingValue + 4612); /*0x44b698*/
          }
          if ( v55 && *v55 ) /*0x44b6b0*/
            goto LABEL_107; /*0x44b6b3*/
LABEL_116:
          if ( *(_BYTE *)(this->gattlingValue + 3285) ) /*0x44b6dc*/
          {
            TechnoClass::GattlingRateUp_GattlingRateDownReset((float *)this, this->missionData); /*0x44b6ef*/
            this->missionData = 0; /*0x44b6f4*/
          }
          else
          {
            ++this->gattlingValue; /*0x44b713*/
          }
          return 1; /*0x44b70a*/
        }
        v30 = 0; /*0x44b319*/
        desiredFacing[0] = (DirStruct)0x7FFFFFFF; /*0x44b31b*/
        v31 = (int *)(*(int (__thiscall **)(#377 *, char *))(this->currentMission)(this, v70); /*0x44b323*/
        v65 = *v31; /*0x44b32b*/
        v32 = this->q199; /*0x44b32f*/
        v66 = v31[1]; /*0x44b338*/
        v67 = v31[2]; /*0x44b345*/
        if ( v32 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1184) ) /*0x44b351*/
          goto LABEL_102; /*0x44b351*/
        eax78 = this->focus; /*0x44b357*/
        desiredFacing[1] = 0; /*0x44b35d*/
        v61 = *(_DWORD *)(eax78 + 120); /*0x44b366*/
        if ( v61 <= 0 ) /*0x44b36a*/
          goto LABEL_102; /*0x44b36a*/
        break; /*0x44b36a*/
      case 1u: /*0x44b0d7*/
      case 5u: /*0x44b0d7*/
      case 6u: /*0x44b0d7*/
      case 8u: /*0x44b0d7*/
        (*(void (__thiscall **)(#377 *, _DWORD))(this->unknown_short_3C8)(this, 0); /*0x44b0e3*/
        v24 = *(BuildingTypeClass **)this; /*0x44b0e9*/
        this->q199 = 0; /*0x44b0ed*/
        if ( (*(unsigned __int8 (__thiscall **)(#377 *))&v24->DebrisTypes[284])(this) ) /*0x44b0f3*/
          BuildingClass::GetType_Thunk(this); /*0x44b0ff*/
        if ( (*(int (__thiscall **)(#377 *))(this->q184)(this) == 28 ) /*0x44b111*/
          return 1; /*0x44b111*/
        if ( *(_BYTE *)(this->gattlingValue + 3285) ) /*0x44b119*/
        {
          TechnoClass::DrainAmmo((char *)this, *((BuildingClass **)this + 49)); /*0x44b12c*/
          this->missionData = 0; /*0x44b131*/
        }
        (*(void (__thiscall **)(#377 *, int, _DWORD))(this->q1E8)(this, 5, 0); /*0x44b13e*/
        (*(void (__thiscall **)(#377 *))(this->disguiseBlinkTimer)(this); /*0x44b148*/
        goto LABEL_53; /*0x44b148*/
      case 2u: /*0x44b0d7*/
        if ( this->q2B4 ) /*0x44b187*/
        {
          v26 = (DirStruct *)(*(int (__thiscall **)(#377 *, int *, _DWORD))(*(_DWORD *)this + 1256))( /*0x44b19b*/
                               this,
                               &v62,
                               this->q2B4);
          FacingClass::Update((FacingClass *)((char *)this + 904), v26); /*0x44b1a8*/
        }
        if ( *(_BYTE *)(this->gattlingValue + 3285) ) /*0x44b1b3*/
        {
          TechnoClass::GattlingRateUp_GattlingRateDownReset((float *)this, this->missionData); /*0x44b1c6*/
          this->missionData = 0; /*0x44b1cb*/
        }
        return 2; /*0x44b1dd*/
      case 3u: /*0x44b0d7*/
        if ( this->q2B4 ) /*0x44b1de*/
        {
          v27 = (DirStruct *)(*(int (__thiscall **)(#377 *, char *, _DWORD))(*(_DWORD *)this + 1256))( /*0x44b1f2*/
                               this,
                               v63,
                               this->q2B4);
          FacingClass::Update((FacingClass *)((char *)this + 904), v27); /*0x44b1ff*/
        }
        if ( *(_BYTE *)(this->gattlingValue + 3285) ) /*0x44b20a*/
        {
          TechnoClass::GattlingRateUp_GattlingRateDownReset((float *)this, this->missionData); /*0x44b21d*/
          this->missionData = 0; /*0x44b222*/
        }
        else
        {
          ++this->gattlingValue; /*0x44b23c*/
        }
        return 2; /*0x44b234*/
      case 9u: /*0x44b0d7*/
        (*(void (__thiscall **)(#377 *, _DWORD))(this->vecAbs_Items)(this, 0); /*0x44b289*/
        if ( *(_BYTE *)(this->gattlingValue + 3285) ) /*0x44b295*/
        {
          TechnoClass::DrainAmmo((char *)this, *((BuildingClass **)this + 49)); /*0x44b2ac*/
          this->missionData = 0; /*0x44b2b1*/
        }
        goto LABEL_53; /*0x44b2b7*/
      case 0xAu: /*0x44b0d7*/
        if ( !*(_BYTE *)(this->gattlingValue + 3285) ) /*0x44b25d*/
          return 1; /*0x44b25d*/
        TechnoClass::DrainAmmo((char *)this, *((BuildingClass **)this + 49)); /*0x44b26c*/
        this->missionData = 0; /*0x44b271*/
        return 1; /*0x44b283*/
      default:
LABEL_53:
        if ( this->q2B4 ) /*0x44b14e*/
        {
          v25 = (DirStruct *)(*(int (__thiscall **)(#377 *, char *, _DWORD))(*(_DWORD *)this + 1256))( /*0x44b162*/
                               this,
                               v63,
                               this->q2B4);
          FacingClass::Update((FacingClass *)((char *)this + 904), v25); /*0x44b16f*/
        }
        this->missionData = 0; /*0x44b174*/
        return 1; /*0x44b174*/
    }
    while ( 1 ) /*0x44b37d*/
    {
      v33 = *(TechnoClass **)(*(_DWORD *)(this->focus + 108) + 4 * *(_DWORD *)&desiredFacing[1]); /*0x44b37d*/
      if ( v33 /*0x44b3a8*/
        && v33->isAliveFlag
        && *(_DWORD *)v33[1].__pad_0 == *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1176) )
      {
        slaveManager = v33->slaveManager; /*0x44b3ae*/
        originalOwnerHouse = (char *)v33->originalOwnerHouse; /*0x44b3b4*/
        if ( slaveManager != (void *)-1 ) /*0x44b3bd*/
        {
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - (int)slaveManager >= (int)originalOwnerHouse ) /*0x44b3c8*/
            goto LABEL_86; /*0x44b3c8*/
          originalOwnerHouse -= *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - (_DWORD)slaveManager; /*0x44b3ca*/
        }
        if ( !originalOwnerHouse ) /*0x44b3ce*/
        {
LABEL_86:
          if ( !v33[1].disguiseBlinkTimer[1] /*0x44b406*/
            && !ObjectClass::HasLocation(v33)
            && (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v33->__pad_0 + 388))(v33) != 1
            && v33 != (TechnoClass *)this )
          {
            v37 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, char *))(*(_DWORD *)v33->__pad_0 + 172))(v33, v71); /*0x44b41f*/
            v39 = v37[1]; /*0x44b42c*/
            LODWORD(v60) = v65 - *v37; /*0x44b42f*/
            v38 = LODWORD(v60); /*0x44b426*/
            v69 = (float)(v67 - v37[2]); /*0x44b452*/
            v64 = (double)(v39 - v66); /*0x44b456*/
            v60 = v69; /*0x44b45e*/
            v40 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)v38 * (double)v38 + v69 * v69 + v64 * v64)); /*0x44b47f*/
            ebp90 = Math::RoundToInt(v40); /*0x44b492*/
            if ( ebp90 <= (*(int (__thiscall **)(#377 *, int))(this->q168)(this, 1) /*0x44b4a6*/
              && (!v30 || ebp90 < *(_DWORD *)desiredFacing) )
            {
              v30 = (ObjectClass *)v33; /*0x44b4a8*/
              desiredFacing[0] = (DirStruct)ebp90; /*0x44b4aa*/
            }
          }
        }
      }
      if ( ++*(_DWORD *)&desiredFacing[1] >= v61 ) /*0x44b4bd*/
      {
        if ( v30 ) /*0x44b4c5*/
        {
          v41 = *(BuildingTypeClass **)this; /*0x44b4d5*/
          ++this->q199; /*0x44b4d7*/
          v43 = (int *)((int (__thiscall *)(#377 *, char *, _DWORD, _DWORD, _DWORD, _DWORD))v41->MainVoxel[0])( /*0x44b4f6*/
                         this,
                         v72,
                         0,
                         0,
                         0,
                         0);
          v44 = *v43; /*0x44b502*/
          v45 = v43[1]; /*0x44b504*/
          v46 = v43[2]; /*0x44b507*/
          v30[10].customSound_controller[3] = *(_DWORD *)(v30[7].health + 5868); /*0x44b512*/
          v30[10].ambientSoundController[4] = 2; /*0x44b51e*/
          v30[10].customSound_controller[0] = v44; /*0x44b528*/
          v30[10].customSound_controller[1] = v45; /*0x44b52c*/
          v30[10].customSound_controller[2] = v46; /*0x44b52f*/
          BuildingClass::ClearAnims((int *)v30->__pad_0, (TechnoClass *)3); /*0x44b532*/
          if ( BuildingClass::GetHealthRatio((int *)v30->__pad_0) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] /*0x44b54f*/
                                                                              + 5888) )
          {
            v48 = 0; /*0x44b569*/
            v49 = (_BYTE *)(v30[7].health + 4596); /*0x44b56b*/
          }
          else
          {
            v48 = 1; /*0x44b557*/
            v49 = (_BYTE *)(v30[7].health + 4612); /*0x44b55c*/
          }
          if ( v49 && *v49 ) /*0x44b578*/
            BuildingClass::PlayAnim(v30, v47, v49, (IUnknown *)0xA, (IUnknown *)v48, 0, 0); /*0x44b58b*/
          goto LABEL_116; /*0x44b590*/
        }
LABEL_102:
        this->DelayBeforeFiring = *(_DWORD *)(this->gattlingValue + 5868); /*0x44b595*/
        v50 = v69; /*0x44b5b1*/
        this->PrismTargetCoords = 0; /*0x44b5b5*/
        v51 = v68; /*0x44b5b7*/
        this->PrismStage = 1; /*0x44b5bb*/
        this->q70C = v51; /*0x44b5c5*/
        *((float *)this + 452) = v50; /*0x44b5c8*/
        BuildingClass::ClearAnims((int *)this, (TechnoClass *)3); /*0x44b5cd*/
        HealthRatio = BuildingClass::GetHealthRatio((int *)this); /*0x44b5d4*/
        v53 = *(_DWORD *)&stru_87C374.__pad_579C[22224]; /*0x44b5d9*/
        if ( HealthRatio > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888) ) /*0x44b5ea*/
        {
          v54 = 0; /*0x44b604*/
          v55 = (_BYTE *)(this->gattlingValue + 4596); /*0x44b606*/
        }
        else
        {
          v54 = 1; /*0x44b5f2*/
          v55 = (_BYTE *)(this->gattlingValue + 4612); /*0x44b5f7*/
        }
        if ( !v55 || !*v55 ) /*0x44b613*/
          goto LABEL_116; /*0x44b616*/
LABEL_107:
        BuildingClass::PlayAnim((ObjectClass *)this, v53, v55, (IUnknown *)0xA, (IUnknown *)v54, 0, 0); /*0x44b61c*/
        goto LABEL_116; /*0x44b62b*/
      }
    }
  }
  v3 = this->missionStatus; /*0x44ad15*/
  if ( v3 )
  {
    if ( v3 != 1 ) /*0x44ad24*/
    {
      MissionControl = MissionClass::GetMissionControl(this); /*0x44ad28*/
      v5 = (BuildingTypeClass *)Math::RoundToInt(*((double *)MissionControl + 3) * 900.0); /*0x44ad3b*/
      return (int)&v5->vtable0[Random::Range( /*0x44ad59*/
                                 (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                                 0,
                                 (IUnknown *)2)];
    }
    v7 = (FacingStruct *)this->q2B4; /*0x44ad5a*/
    if ( v7 )
      v8 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)&v7->Value + 44))(this->q2B4) == 2 ? v7 : 0;
    else
      v8 = 0; /*0x44ad64*/
    if ( this->q2B4 && v8 && (*(int (__thiscall **)(FacingStruct *))(*(_DWORD *)&v8->Value + 464))(v8) ) /*0x44ad92*/
    {
      v9 = (*(int (__thiscall **)(#377 *, _DWORD, _DWORD, int))(this->q0F0)( /*0x44adae*/
             this,
             this->q2B4,
             0,
             1);
      if ( v9 == 5 || v9 == 6 || v9 == 8 ) /*0x44adc1*/
      {
        (*(void (__thiscall **)(#377 *, _DWORD))(this->unknown_short_3C8)(this, 0); /*0x44ae0d*/
        this->missionStatus = 0; /*0x44ae13*/
        return 1; /*0x44ae25*/
      }
      if ( v9 != 2 ) /*0x44adc6*/
      {
        if ( !v9 ) /*0x44adca*/
        {
          (*(void (__thiscall **)(#377 *, _DWORD, _DWORD))(this->countedAsOwned)(this, this->q2B4, 0); /*0x44addc*/
          (*(void (__thiscall **)(#377 *, _DWORD, int))(this->countedAsOwned)(this, this->q2B4, 1); /*0x44adef*/
          this->missionStatus = 0; /*0x44adf5*/
          return 1; /*0x44ae07*/
        }
        return 1; /*0x44b186*/
      }
    }
    else
    {
      (*(void (__thiscall **)(#377 *, _DWORD))(this->unknown_short_3C8)(this, 0); /*0x44ae2b*/
    }
    this->missionStatus = 0; /*0x44ae31*/
    return 1; /*0x44ae43*/
  }
  if ( v2->Powered && v2->PowerDrain > 0 && HouseClass::GetPowerRatio((int *)this->focus) < 1.0 ) /*0x44ae6c*/
    return 1; /*0x44ae6c*/
  v10 = (FacingStruct *)this->q2B4; /*0x44ae72*/
  if ( v10 )
    v11 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)&v10->Value + 44))(this->q2B4) == 2 ? v10 : 0;
  else
    v11 = 0; /*0x44ae7c*/
  if ( !this->q2B4 || !v11 || !(*(int (__thiscall **)(FacingStruct *))(*(_DWORD *)&v11->Value + 464))(v11) ) /*0x44aeaa*/
  {
    (*(void (__thiscall **)(#377 *, _DWORD))(this->unknown_short_3C8)(this, 0); /*0x44af56*/
    v14 = *(BuildingTypeClass **)this; /*0x44af5c*/
    this->missionStatus = 0; /*0x44af63*/
    (*(void (__thiscall **)(#377 *, int, _DWORD))&v14->__pad_14D[155])(this, 5, 0); /*0x44af69*/
    (*(void (__thiscall **)(#377 *))(this->disguiseBlinkTimer)(this); /*0x44af73*/
    return 1; /*0x44af85*/
  }
  if ( TimerClass::Active((int)this + 904) ) /*0x44aec0*/
    return 1; /*0x44aec7*/
  v12 = (BuildingTypeClass *)(*(int (__thiscall **)(#377 *, int *, _DWORD))(*(_DWORD *)this + 1256))( /*0x44aee3*/
                               this,
                               &v61,
                               this->q2B4);
  if ( abs16(*(_WORD *)ProgressTimer::GetValue((_WORD *)this + 452, (IUnknown *)&v60) - *(_WORD *)v12->vtable0) > 0x2000u ) /*0x44af0d*/
  {
    v13 = (DirStruct *)(*(int (__thiscall **)(#377 *, DirStruct *, _DWORD))(*(_DWORD *)this + 1256))( /*0x44af36*/
                         this,
                         &desiredFacing[1],
                         this->q2B4);
    FacingClass::Update((FacingClass *)((char *)this + 904), v13); /*0x44af3f*/
  }
  else
  {
    this->missionStatus = 1; /*0x44af0f*/
  }
  return 1; /*0x44ad52*/
}


// ==== 0x0044B760  AbstractClass::COMStub_133  this=BuildingClass  sig=csp ====
// attributes: thunk
int __thiscall AbstractClass::COMStub_133(#377 *this)
{
  return IPersistStream::StubReturn450();
}


// ==== 0x0044B770  AbstractClass::COMStub_137  this=BuildingClass  sig=csp ====
// attributes: thunk
int __thiscall AbstractClass::COMStub_137(#377 *this)
{
  return AircraftClass::CheckMissionStatus();
}


// ==== 0x0044D5D0  BuildingClass::CaptureBuilding  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CaptureBuilding(#377 *this)
{
  int result; // eax
  #375 *v3; // [esp+Ch] [ebp+4h]

  if ( TechnoClass::SetHouseFlag(this, v3) ) /*0x44d5d9*/
  {
    if ( !MEMORY[0xA8E7AC] ) /*0x44d5ed*/
    {
      *(_DWORD *)(this->focus + 620) = *(_DWORD *)(this->gattlingValue + 3576); /*0x44d601*/
      *(_BYTE *)(this->focus + 582) = 1; /*0x44d60d*/
    }
    *(_BYTE *)(this->focus + 508) = 1; /*0x44d61a*/
    if ( !Team::AllMembersValid((int *)this) /*0x44d682*/
      && (unsigned __int8)House::IsCurrentPlayer(*((#375 **)this + 135))
      && (*(int (__thiscall **)(#377 *))(this->q184)(this) != 18
      && this->queuedMission != 18
      || !Team::AllMembersValid((int *)this)
      && (result = House::IsCurrentPlayer(*((#375 **)this + 135)), !(_BYTE)result)
      && v3 == *((#375 **)this + 135)
      && (result = (*(int (__thiscall **)(#377 *))(this->q184)(this), result != 18) )
    {
      result = (*(int (__thiscall **)(#377 *, _DWORD))(this->queuedVoiceSoundController)(this, 0); /*0x44d68a*/
    }
    LOBYTE(result) = 1; /*0x44d691*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x44d698*/
  }
  return result; /*0x44d690*/
}


// ==== 0x0044D6A0  TechnoClass::StartOrResumeProduction  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::StartOrResumeProduction(#377 *this)
{
  int result; // eax
  char v3; // [esp+8h] [ebp+4h]

  if ( !v3 || MEMORY[0xA8E7AC] || MEMORY[0xA8ED6B] ) /*0x44d6bb*/
  {
    BuildingClass::StartProduction((int *)this, 1); /*0x44d6e0*/
    result = (*(int (__thiscall **)(#377 *, int, _DWORD))(this->q1E8)(this, 5, 0); /*0x44d6f1*/
    LOBYTE(result) = 0; /*0x44d6f7*/
  }
  else
  {
    BuildingClass::StartProduction((int *)this, 0); /*0x44d6bf*/
    result = (*(int (__thiscall **)(#377 *, int, _DWORD))(this->q1E8)(this, 18, 0); /*0x44d6d0*/
    LOBYTE(result) = 0; /*0x44d6d6*/
  }
  return result; /*0x44d6d8*/
}


// ==== 0x0044D700  BuildingClass::GetAmmoCountScaled  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetAmmoCountScaled(#377 *this)
{
  int v1; // esi
  int v3; // [esp+4h] [ebp-Ch]
  double v4; // [esp+8h] [ebp-8h]

  v1 = this->gattlingValue; /*0x44d704*/
  if ( *(_DWORD *)(v1 + 980) != 2 ) /*0x44d713*/
    return TechnoClass::GetAmmoCount(this); /*0x44d715*/
  if ( !*(_BYTE *)(v1 + 5820) ) /*0x44d71f*/
    return 0; /*0x44d755*/
  v4 = BuildingClass::checkRepairEligibility(this->focus); /*0x44d738*/
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 116))(v1); /*0x44d73f*/
  return Math::RoundToInt((double)v3 * v4); /*0x44d71a*/
}


// ==== 0x0044D760  BuildingClass::PushScriptAction  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::PushScriptAction(#377 *this)
{
  int result; // eax
  _DWORD *v3; // eax
  int v4; // [esp+8h] [ebp-10h] BYREF
  _BYTE v5[12]; // [esp+Ch] [ebp-Ch] BYREF
  int v6; // [esp+1Ch] [ebp+4h]
  int v7; // [esp+1Ch] [ebp+4h]

  result = v6; /*0x44d760*/
  if ( v6 ) /*0x44d76c*/
  {
    result = House::IsHumanPlayer(*((#375 **)this + 135)); /*0x44d774*/
    if ( (_BYTE)result ) /*0x44d77b*/
    {
      v3 = (_DWORD *)(*(int (__thiscall **)(#377 *, _BYTE *, _DWORD))(this->q04C)(this, v5, 0); /*0x44d788*/
      LOWORD(v7) = *v3 / 256; /*0x44d79b*/
      HIWORD(v7) = v3[1] / 256; /*0x44d7b3*/
      v4 = v7; /*0x44d7bc*/
      return ScriptActionQueue::PushNext(&v4); /*0x44d7c0*/
    }
  }
  return result; /*0x44d7c5*/
}


// ==== 0x0044D7D0  BuildingClass::GetTargetFacing  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetTargetFacing(#377 *this)
{
  unsigned int v2; // ecx
  __int16 v4; // dx
  unsigned int v5; // ecx
  int v6; // edx
  int v7; // [esp+4h] [ebp-4h] BYREF
  _DWORD *v8; // [esp+Ch] [ebp+4h]

  if ( this->q2B4 ) /*0x44d7d4*/
  {
    if ( !(*(unsigned __int8 (__thiscall **)(#377 *))(*(_DWORD *)this + 1020))(this) /*0x44d81a*/
      || *(_BYTE *)(this->gattlingValue + 5829) )
    {
      v6 = *(_DWORD *)(*(int (__thiscall **)(#377 *, int *, _DWORD))(*(_DWORD *)this + 1256))( /*0x44d864*/
                        this,
                        &v7,
                        this->q2B4);
      *v8 = v6; /*0x44d86b*/
      return (int)v8; /*0x44d866*/
    }
    else
    {
      v5 = *ProgressTimer::GetValue((_WORD *)this + 452, &v7); /*0x44d834*/
      *(_WORD *)v8 = ((((v5 >> 10) + 1) >> 1) & 0x1F) << 11; /*0x44d847*/
      return (int)v8; /*0x44d836*/
    }
  }
  else
  {
    v2 = *ProgressTimer::GetValue((_WORD *)this + 452, &v7); /*0x44d7ee*/
    LOBYTE(v4) = 0; /*0x44d7fb*/
    HIBYTE(v4) = ((v2 >> 7) + 1) >> 1; /*0x44d7fd*/
    *(_WORD *)v8 = v4; /*0x44d7ff*/
    return (int)v8; /*0x44d7f0*/
  }
}


// ==== 0x0044D880  BuildingClass::ClearFactoryBib  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ClearFactoryBib(#377 *this)
{
  BuildingTypeClass *v2; // eax
  BuildingTypeClass *v3; // esi
  __int16 v4; // dx
  MouseClass *v5; // eax
  unsigned int v6; // edi
  IUnknown *v7; // edi
  _WORD *v8; // eax
  int v9; // edx
  __int16 v10; // cx
  _WORD *v11; // edx
  __int16 v12; // bx
  __int16 v13; // bx
  __int16 v14; // cx
  int v15; // ebx
  void *v16; // eax
  int v17; // eax
  int v18; // ebx
  void *v19; // eax
  MouseClass *v20; // eax
  int v21; // edx
  int *v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // eax
  void *v26; // eax
  _DWORD *v27; // eax
  char v28; // al
  int v29; // eax
  int v30; // eax
  int v31; // edi
  void *v32; // eax
  char *MissionControl; // eax
  int v34; // esi
  char v36; // cl
  TechnoClass *vfptr0; // edx
  _WORD *v38; // eax
  __int16 v39; // cx
  int Member; // eax
  int v41; // esi
  char v42; // cl
  int v43; // ecx
  _BYTE *v44; // eax
  MouseClass *v45; // eax
  BuildingClass *v46; // ebx
  int FiringOccupantIndex; // eax
  IUnknown *p_FiringOccupantIndex; // ebx
  int v49; // eax
  _WORD *v50; // eax
  __int16 v51; // dx
  int v52; // edi
  void *v53; // eax
  MouseClass *v54; // edi
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int (__stdcall ***Checked)(_DWORD, void *, int *); // eax
  int v61; // esi
  int v62; // edi
  int v63; // ecx
  int v64; // esi
  int v65; // esi
  LPVOID v66; // eax
  int v67; // edx
  unsigned int v68; // eax
  TechnoClass *v69; // edx
  TechnoClass *v70; // edx
  BuildingTypeClass *v71; // ecx
  TechnoClass *v72; // eax
  IUnknown *LandHeight; // [esp+34h] [ebp-5Ch]
  IUnknown *v74; // [esp+34h] [ebp-5Ch]
  LPVOID *p_ppv; // [esp+3Ch] [ebp-54h]
  int v76; // [esp+40h] [ebp-50h]
  char v77; // [esp+52h] [ebp-3Eh]
  bool v78; // [esp+53h] [ebp-3Dh]
  int v79; // [esp+54h] [ebp-3Ch] BYREF
  int v80; // [esp+58h] [ebp-38h] BYREF
  LPVOID ppv; // [esp+5Ch] [ebp-34h] BYREF
  MouseClass *ppv_4; // [esp+60h] [ebp-30h]
  unsigned int v83; // [esp+64h] [ebp-2Ch] BYREF
  unsigned int i; // [esp+68h] [ebp-28h] BYREF
  int v85; // [esp+6Ch] [ebp-24h] BYREF
  rc_ptr_base v86; // [esp+70h] [ebp-20h] BYREF
  int v87; // [esp+74h] [ebp-1Ch] BYREF
  __int64 v88; // [esp+78h] [ebp-18h]
  int v89; // [esp+80h] [ebp-10h] BYREF
  char v90[12]; // [esp+84h] [ebp-Ch] BYREF

  if ( (*(int (__thiscall **)(#377 *))(this->q408)(this) > 0 ) /*0x44d896*/
    BuildingClass::UnloadUnits((BuildingTypeClass **)this, 0, 0); /*0x44d89c*/
  v2 = (BuildingTypeClass *)this->gattlingValue; /*0x44d8a1*/
  if ( !v2->UnitAbsorb && !v2->InfantryAbsorb || *((int *)this + 69) <= 0 )
  {
    if ( v2->WeaponsFactory )
    {
      v36 = v2->DebrisTypes[2490]; /*0x44dcc7*/
      v87 = 0; /*0x44dccd*/
      v88 = 0; /*0x44dcd3*/
      if ( !v36 ) /*0x44dcdb*/
      {
        vfptr0 = *(TechnoClass **)this; /*0x44dce3*/
        i = *((_DWORD *)v2->FoundationOutside + 10); /*0x44dcf0*/
        v38 = (_WORD *)((int (__thiscall *)(#377 *, rc_ptr_base *))vfptr0->airstrikeTintTimer[0])(this, &v86); /*0x44dcf4*/
        v39 = HIWORD(i) + v38[1]; /*0x44dd01*/
        LOWORD(v83) = *v38 + i; /*0x44dd06*/
        HIWORD(v83) = v39; /*0x44dd0b*/
        v87 = ((__int16)(v83 - 1) << 8) + 128; /*0x44dd30*/
        v88 = (unsigned int)((v39 << 8) + 128); /*0x44dd34*/
      }
      switch ( this->missionStatus )
      {
        case 0:
          Member = Team::GetMember(this, 0); /*0x44dd59*/
          v41 = Member; /*0x44dd5e*/
          if ( Member ) /*0x44dd62*/
          {
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)Member + 488))(Member, 5, 0); /*0x44dd6b*/
            (*(void (__thiscall **)(int))(*(_DWORD *)v41 + 492))(v41); /*0x44dd75*/
          }
          RateScaler::Init((_BYTE *)this + 848, *(double *)(this->gattlingValue + 968)); /*0x44dd95*/
          v42 = *(_BYTE *)(this->gattlingValue + 3278); /*0x44dda2*/
          this->needsRedraw = 1; /*0x44dda8*/
          this->missionStatus = v42 != 0 ? 4 : 1;
          BuildingClass::ClearAnims((int *)this, (TechnoClass *)0x12); /*0x44ddbf*/
          if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888) ) /*0x44dddc*/
          {
            v43 = 0; /*0x44ddf6*/
            v44 = (_BYTE *)(this->gattlingValue + 4460); /*0x44ddf8*/
          }
          else
          {
            v43 = 1; /*0x44dde4*/
            v44 = (_BYTE *)(this->gattlingValue + 4476); /*0x44dde9*/
          }
          if ( v44 && *v44 ) /*0x44de05*/
            BuildingClass::PlayAnim( /*0x44de16*/
              (ObjectClass *)this,
              *(int *)&stru_87C374.__pad_579C[22224],
              v44,
              (IUnknown *)8,
              (IUnknown *)v43,
              0,
              0);
          break; /*0x44de1b*/
        case 1:
          if ( !AnimClass::resetAnimation((IUnknown *)this) ) /*0x44de22*/
          {
            Debug::Log(); /*0x44de34*/
            this->missionStatus = 2; /*0x44de3c*/
          }
          break; /*0x44de46*/
        case 2:
          if ( BuildingClass::CheckPowerFlags((_BYTE *)this + 848) ) /*0x44de53*/
          {
            v45 = (MouseClass *)Team::GetMember(this, 0); /*0x44de63*/
            ppv_4 = v45; /*0x44de6a*/
            if ( !v45 ) /*0x44de6e*/
              goto LABEL_112; /*0x44de6e*/
            v46 = (BuildingClass *)v45; /*0x44de74*/
            (*(void (__thiscall **)(MouseClass *, int, _DWORD))(v45->field_0 + 488))(v45, 2, 0); /*0x44de7e*/
            FiringOccupantIndex = v46->FiringOccupantIndex; /*0x44de84*/
            p_FiringOccupantIndex = (IUnknown *)&v46->FiringOccupantIndex; /*0x44de8a*/
            v83 = 0; /*0x44de92*/
            if ( !FiringOccupantIndex ) /*0x44de9a*/
              goto LABEL_57; /*0x44de9a*/
            v49 = StreamClass::Set2(&v83, p_FiringOccupantIndex); /*0x44dea1*/
            if ( v49 < 0 && v49 != -2147467262 ) /*0x44deaf*/
              WinAPI::Wrapper(v49); /*0x44deb2*/
            if ( !v83 ) /*0x44debd*/
LABEL_57:
              WinAPI::Wrapper(-2147467261); /*0x44dec4*/
            (*(void (__stdcall **)(unsigned int, int *))(*(_DWORD *)v83 + 12))(v83, &v89); /*0x44ded5*/
            if ( !memcmp(&v89, &stru_7E9A50, 0x10u) || !memcmp(&v89, &g_CLSID_HoverLocomotion, 0x10u) ) /*0x44df00*/
            {
              v55 = p_FiringOccupantIndex->field_0; /*0x44dfad*/
              v79 = 0; /*0x44dfaf*/
              if ( v55 ) /*0x44dfb9*/
              {
                v56 = StreamClass::Set(&v79, p_FiringOccupantIndex); /*0x44dfc0*/
                if ( v56 < 0 && v56 != -2147467262 ) /*0x44dfce*/
                  WinAPI::Wrapper(v56); /*0x44dfd1*/
                if ( v79 && (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v79 + 28))(v79) ) /*0x44dfe1*/
                {
                  if ( p_FiringOccupantIndex->field_0 ) /*0x44dfe8*/
                    (*(void (__stdcall **)(int))(*(_DWORD *)p_FiringOccupantIndex->field_0 + 8))(p_FiringOccupantIndex->field_0); /*0x44dff1*/
                  v57 = v79; /*0x44dff4*/
                  p_FiringOccupantIndex->field_0 = 0; /*0x44dff8*/
                  if ( !v57 ) /*0x44e000*/
                    WinAPI::Wrapper(-2147467261); /*0x44e007*/
                  (*(void (__stdcall **)(int, IUnknown *))(*(_DWORD *)v57 + 16))(v57, p_FiringOccupantIndex); /*0x44e014*/
                }
              }
              ppv = 0; /*0x44e024*/
              v58 = CreateInstanceCOM(&ppv, (IID *)&stru_7E9A30, 0, 7u); /*0x44e02c*/
              if ( v58 < 0 && v58 != -2147467262 ) /*0x44e03a*/
                WinAPI::Wrapper(v58); /*0x44e03d*/
              if ( !ppv ) /*0x44e048*/
                WinAPI::Wrapper(-2147467261); /*0x44e04f*/
              v54 = ppv_4; /*0x44e058*/
              (*(void (__stdcall **)(LPVOID, MouseClass *))(*(_DWORD *)ppv + 12))(ppv, ppv_4); /*0x44e060*/
              v59 = 0; /*0x44e067*/
              v80 = 0; /*0x44e06b*/
              if ( ppv ) /*0x44e06f*/
              {
                Checked = (int (__stdcall ***)(_DWORD, void *, int *))Stream::GetChecked(&ppv); /*0x44e075*/
                v61 = (**Checked)(Checked, &unk_819088, &v85); /*0x44e089*/
                if ( v61 >= 0 ) /*0x44e08d*/
                {
                  v62 = v85; /*0x44e0a0*/
                  Release2COM(&v80); /*0x44e0a8*/
                  v59 = v62; /*0x44e0ad*/
                  v54 = ppv_4; /*0x44e0af*/
                  v80 = v59; /*0x44e0b3*/
                }
                else
                {
                  Release2COM(&v80); /*0x44e093*/
                  v59 = 0; /*0x44e098*/
                  v80 = 0; /*0x44e09a*/
                }
                if ( v61 < 0 && v61 != -2147467262 ) /*0x44e0c1*/
                  WinAPI::Wrapper(v61); /*0x44e0c4*/
              }
              v63 = v79; /*0x44e0cd*/
              if ( v79 != v59 ) /*0x44e0d3*/
              {
                v64 = v79; /*0x44e0d5*/
                v79 = v59; /*0x44e0db*/
                CellClass::SetField2C(&v79); /*0x44e0df*/
                if ( v64 ) /*0x44e0e6*/
                  (*(void (__stdcall **)(int))(*(_DWORD *)v64 + 8))(v64); /*0x44e0eb*/
                v63 = v79; /*0x44e0ee*/
                v59 = v80; /*0x44e0f2*/
              }
              if ( v59 ) /*0x44e0f8*/
              {
                (*(void (__stdcall **)(int))(*(_DWORD *)v59 + 8))(v59); /*0x44e0fd*/
                v63 = v79; /*0x44e100*/
              }
              if ( v63 ) /*0x44e106*/
              {
                (*(void (__stdcall **)(int, int))(*(_DWORD *)v63 + 12))(v63, p_FiringOccupantIndex->field_0); /*0x44e10e*/
                v65 = p_FiringOccupantIndex->field_0; /*0x44e111*/
                v66 = ppv; /*0x44e113*/
                if ( (LPVOID)p_FiringOccupantIndex->field_0 != ppv ) /*0x44e119*/
                {
                  p_FiringOccupantIndex->field_0 = (int)ppv; /*0x44e11d*/
                  if ( v66 ) /*0x44e11f*/
                    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)v66 + 4))(v66); /*0x44e124*/
                  if ( v65 ) /*0x44e129*/
                    (*(void (__stdcall **)(int))(*(_DWORD *)v65 + 8))(v65); /*0x44e12e*/
                }
                if ( !p_FiringOccupantIndex->field_0 ) /*0x44e131*/
                  WinAPI::Wrapper(-2147467261); /*0x44e13b*/
                (*(void (__stdcall **)(int, int, int, _DWORD, _DWORD))(*(_DWORD *)p_FiringOccupantIndex->field_0 + 112))( /*0x44e160*/
                  p_FiringOccupantIndex->field_0,
                  66,
                  v87,
                  v88,
                  HIDWORD(v88));
              }
              else
              {
                v67 = v54->field_0; /*0x44e168*/
                v85 = *(_DWORD *)v54->__pad_6C; /*0x44e16a*/
                (*(void (__thiscall **)(MouseClass *, int *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(v67 + 364))( /*0x44e18b*/
                  v54,
                  &v85,
                  0,
                  *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4008),
                  0,
                  1,
                  0,
                  0);
              }
              if ( ppv ) /*0x44e197*/
                (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv); /*0x44e19c*/
              if ( v79 ) /*0x44e1a5*/
                (*(void (__stdcall **)(int))(*(_DWORD *)v79 + 8))(v79); /*0x44e1aa*/
            }
            else if ( !memcmp(&v89, &stru_7E9A30, 0x10u) ) /*0x44df1a*/
            {
              if ( !p_FiringOccupantIndex->field_0 ) /*0x44df72*/
                WinAPI::Wrapper(-2147467261); /*0x44df7c*/
              (*(void (__stdcall **)(int, int, int, _DWORD, _DWORD))(*(_DWORD *)p_FiringOccupantIndex->field_0 + 112))( /*0x44dfa1*/
                p_FiringOccupantIndex->field_0,
                66,
                v87,
                v88,
                HIDWORD(v88));
              v54 = ppv_4; /*0x44dfa4*/
            }
            else
            {
              v50 = (_WORD *)(*(int (__thiscall **)(#377 *, rc_ptr_base *))(this->airstrikeTintTimer)(this, &v86); /*0x44df26*/
              v51 = v50[1] + 1; /*0x44df3b*/
              LOWORD(ppv) = *v50 + 4; /*0x44df3d*/
              HIWORD(ppv) = v51; /*0x44df42*/
              i = (unsigned int)ppv; /*0x44df52*/
              v52 = ppv_4->field_0; /*0x44df56*/
              v53 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&i); /*0x44df5d*/
              (*(void (__thiscall **)(MouseClass *, void *, int))(v52 + 1152))(ppv_4, v53, 1); /*0x44df65*/
              v54 = ppv_4; /*0x44df6b*/
            }
            (*(void (__thiscall **)(MouseClass *, _DWORD, int))(v54->field_0 + 1348))(v54, 0, 1071644672); /*0x44e1b8*/
            v68 = v83; /*0x44e1be*/
            this->missionStatus = 3; /*0x44e1c2*/
            if ( v68 ) /*0x44e1ce*/
              (*(void (__stdcall **)(unsigned int))(*(_DWORD *)v68 + 8))(v68); /*0x44e1d7*/
          }
          break; /*0x44e1da*/
        case 3:
          if ( !this->isTether ) /*0x44e202*/
          {
LABEL_112:
            Timer::StartDouble((_BYTE *)this + 848, *(double *)(this->gattlingValue + 968)); /*0x44e20c*/
            this->missionStatus = 4; /*0x44e22b*/
          }
          break; /*0x44e231*/
        case 4:
          if ( Flag::CheckNone((_BYTE *)this + 848) || *(_BYTE *)(this->gattlingValue + 3278) ) /*0x44e248*/
          {
            (*(void (__thiscall **)(#377 *, _DWORD, int))(*(_DWORD *)this + 1156))(this, 0, 1); /*0x44e25a*/
            this->needsRedraw = 1; /*0x44e260*/
          }
          break; /*0x44e260*/
        default:
          goto LABEL_35;
      }
      goto LABEL_35;
    }
    if ( !v2->DebrisTypes[2493] || !v2->DebrisTypes[2495] ) /*0x44e2b0*/
      goto LABEL_125; /*0x44e2b8*/
    if ( this->gapSuperCharged ) /*0x44e2be*/
    {
      (*(void (__thiscall **)(#377 *))(this->isTether)(this); /*0x44e333*/
      v71 = (BuildingTypeClass *)this->gattlingValue; /*0x44e339*/
      v72 = *(TechnoClass **)this; /*0x44e33f*/
      this->gapSuperCharged = 0; /*0x44e342*/
      this->HasExtraPowerDrain = 0; /*0x44e349*/
      this->gapRadius = v71->DebrisTypes[2494]; /*0x44e359*/
      (*(void (__thiscall **)(#377 *))&v72->__pad_3F7[29])(this); /*0x44e35f*/
    }
    else
    {
      (*(void (__thiscall **)(#377 *))(this->isTether)(this); /*0x44e2cd*/
      v69 = *(TechnoClass **)this; /*0x44e2d9*/
      this->gapRadius = *(char *)(this->gattlingValue + 3283); /*0x44e2e3*/
      if ( !((unsigned __int8 (__thiscall *)(#377 *))v69->storedTiberium[0])(this) ) /*0x44e2f3*/
      {
        v70 = *(TechnoClass **)this; /*0x44e31d*/
        this->gapRadius = *(char *)(this->gattlingValue + 3282); /*0x44e320*/
        (*(void (__thiscall **)(#377 *))&v70->__pad_3F7[29])(this); /*0x44e326*/
LABEL_125:
        (*(void (__thiscall **)(#377 *, int, _DWORD))(this->q1E8)(this, 5, 0); /*0x44e371*/
        return 1; /*0x44e381*/
      }
      (*(void (__thiscall **)(#377 *))(*(_DWORD *)this + 1044))(this); /*0x44e2fa*/
      this->gapSuperCharged = 1; /*0x44e300*/
      this->HasExtraPowerDrain = 1; /*0x44e306*/
    }
    *(_BYTE *)(this->focus + 22392) = 1; /*0x44e36b*/
    goto LABEL_125; /*0x44e36b*/
  }
  v3 = (BuildingTypeClass *)LinkedList::Pop((_DWORD *)this + 69); /*0x44d8d8*/
  if ( !v3 ) /*0x44d8dc*/
    goto LABEL_35; /*0x44d8dc*/
  v4 = *(_WORD *)ProgressTimer::GetValue((_WORD *)this + 452, (IUnknown *)&v85); /*0x44d8f2*/
  LOBYTE(v5) = 0; /*0x44d8f5*/
  v77 = 1; /*0x44d8fc*/
  LOWORD(v83) = v4 + 0x7FFF; /*0x44d901*/
  ppv_4 = 0; /*0x44d90e*/
  v6 = ((v83 >> 12) + 1) >> 1; /*0x44d912*/
  for ( i = v6; ; LOBYTE(v6) = i ) /*0x44d914*/
  {
    v7 = (IUnknown *)(((_BYTE)v5 + (_BYTE)v6) & 7); /*0x44d92a*/
    v8 = (_WORD *)(*(int (__thiscall **)(#377 *, rc_ptr_base *))(this->airstrikeTintTimer)(this, &v86); /*0x44d92d*/
    v9 = (unsigned __int8)v7 & 7; /*0x44d938*/
    v10 = *(_WORD *)&stru_89E138.__pad_14B0[4 * v9 + 160] + *v8; /*0x44d93f*/
    v11 = (_WORD *)(4 * v9 + 9041544); /*0x44d947*/
    v12 = v11[1]; /*0x44d94e*/
    LOWORD(v83) = v10; /*0x44d952*/
    v13 = v8[1] + v12; /*0x44d95a*/
    LOWORD(ppv) = *v11 + v10; /*0x44d95e*/
    v14 = v13 + v11[1]; /*0x44d967*/
    HIWORD(v83) = v13; /*0x44d96a*/
    v15 = *(_DWORD *)v3->vtable0; /*0x44d973*/
    HIWORD(ppv) = v14; /*0x44d975*/
    v79 = v83; /*0x44d980*/
    v80 = (int)ppv; /*0x44d984*/
    LandHeight = (IUnknown *)ObjectClass::GetLandHeight(this); /*0x44d98d*/
    v16 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v80); /*0x44d999*/
    v17 = (*(int (__thiscall **)(BuildingTypeClass *, void *, IUnknown *, IUnknown *, _DWORD, int))(v15 + 428))( /*0x44d9a1*/
            v3,
            v16,
            v7,
            LandHeight,
            0,
            1);
    v18 = *(_DWORD *)v3->vtable0; /*0x44d9a7*/
    v78 = v17 == 0; /*0x44d9b1*/
    v74 = (IUnknown *)ObjectClass::GetLandHeight(this); /*0x44d9bb*/
    v19 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v79); /*0x44d9c7*/
    if ( !(*(int (__thiscall **)(BuildingTypeClass *, void *, IUnknown *, IUnknown *, _DWORD, int))(v18 + 428))( /*0x44d9cf*/
            v3,
            v19,
            v7,
            v74,
            0,
            1) )
      break; /*0x44d9cf*/
    if ( !v77 ) /*0x44da20*/
      goto LABEL_13; /*0x44da20*/
LABEL_17:
    v20 = ppv_4; /*0x44da22*/
    if ( ppv_4 == (MouseClass *)7 ) /*0x44da2c*/
    {
      v20 = 0; /*0x44da2e*/
      v77 = 0; /*0x44da30*/
    }
LABEL_14:
    v5 = (MouseClass *)((char *)&v20->field_0 + 1); /*0x44da07*/
    ppv_4 = v5; /*0x44da0b*/
    if ( (int)v5 >= 8 ) /*0x44da0f*/
      goto LABEL_34; /*0x44da0f*/
  }
  if ( !v78 && v77 ) /*0x44d9e7*/
    goto LABEL_17; /*0x44d9e7*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v79) + 80) & 0x100) != 0 ) /*0x44da01*/
  {
LABEL_13:
    v20 = ppv_4; /*0x44da03*/
    goto LABEL_14; /*0x44da03*/
  }
  ++*(_DWORD *)&HouseClass_Player.__pad_5568[21752]; /*0x44da55*/
  v21 = *(_DWORD *)v3->vtable0; /*0x44da5f*/
  v88 = (unsigned int)((SHIWORD(v79) << 8) + 128); /*0x44da66*/
  v87 = ((__int16)v79 << 8) + 128; /*0x44da6c*/
  if ( (*(int (__thiscall **)(BuildingTypeClass *))(v21 + 44))(v3) == 15 ) /*0x44da76*/
  {
    v22 = ObjectPlacement::CalcPosition_Wrapper((MouseClass *)&v89, (IUnknown *)&v87, 0); /*0x44da89*/
    v87 = *v22; /*0x44da90*/
    LODWORD(v88) = v22[1]; /*0x44da97*/
    v23 = v22[2]; /*0x44da9b*/
  }
  else
  {
    v24 = *(_DWORD *)v3->vtable0; /*0x44dabc*/
    v83 = 0; /*0x44dac6*/
    v25 = (*(int (__thiscall **)(BuildingTypeClass *, int))(v24 + 132))(v3, -1); /*0x44dad4*/
    v80 = *LayerClass::Pathfinding_Find( /*0x44dafb*/
             (IUnknown *)&stru_87C374.__pad_14B0[8132],
             (IUnknown *)&v80,
             (IUnknown *)&v87,
             (IUnknown *)&v80,
             *(IUnknown **)(v25 + 1660),
             0,
             0,
             (IUnknown *)1,
             (IUnknown *)1,
             0,
             0,
             0,
             (IUnknown *)1,
             (IUnknown *)&v83,
             0,
             0,
             v76);
    v26 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v80); /*0x44db05*/
    v27 = (_DWORD *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)v26 + 72))(v26, v90); /*0x44db13*/
    i = *(_DWORD *)CellStruct::Set(&v86, *v27 / 256, v27[1] / 256); /*0x44db42*/
    v23 = 0; /*0x44db5f*/
    v87 = ((__int16)i << 8) + 128; /*0x44db61*/
    LODWORD(v88) = (SHIWORD(i) << 8) + 128; /*0x44db65*/
  }
  LOWORD(i) = (_WORD)v7 << 13; /*0x44db6c*/
  HIDWORD(v88) = v23; /*0x44db84*/
  v28 = (*(int (__thiscall **)(BuildingTypeClass *, int *, _DWORD))(*(_DWORD *)v3->vtable0 + 216))( /*0x44db8e*/
          v3,
          &v87,
          (unsigned __int8)(((i >> 7) + 1) >> 1));
  --*(_DWORD *)&HouseClass_Player.__pad_5568[21752]; /*0x44db9d*/
  if ( !v28 ) /*0x44dba3*/
  {
LABEL_34:
    CellClass::AddObject((_DWORD *)this + 69, (IUnknown *)v3); /*0x44dc6e*/
    (*(void (__thiscall **)(BuildingTypeClass *))(*(_DWORD *)v3->vtable0 + 284))(v3); /*0x44dc7e*/
    goto LABEL_35; /*0x44dc7e*/
  }
  if ( *(_BYTE *)(this->gattlingValue + 5807) ) /*0x44dbaf*/
  {
    v29 = (*(int (__thiscall **)(#377 *, int *))(this->q048)(this, &v89); /*0x44dbc5*/
    StartAudioControllerAt(*(AudioController **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 628), v29, 0); /*0x44dbd5*/
    v30 = *(_DWORD *)&v3->AlphaImageFile[9]; /*0x44dbda*/
    if ( *(_BYTE *)(v30 + 492) ) /*0x44dbe0*/
      v3->DebrisTypes[891] = 0; /*0x44dbea*/
    if ( !v3->DebrisTypes[292] ) /*0x44dbf1*/
    {
      ++*(_DWORD *)(v30 + 756); /*0x44dc02*/
      v3->DebrisTypes[292] = 1; /*0x44dc08*/
    }
    v3->DebrisTypes[293] = 0; /*0x44dc0f*/
  }
  (*(void (__thiscall **)(BuildingTypeClass *, int, _DWORD, int))(*(_DWORD *)v3->vtable0 + 488))(v3, 2, 0, v76); /*0x44dc1e*/
  v31 = *(_DWORD *)v3->vtable0; /*0x44dc28*/
  if ( BYTE2(v79) ) /*0x44dc2e*/
    p_ppv = &ppv; /*0x44dc34*/
  else
    p_ppv = (LPVOID *)&v80; /*0x44dc3b*/
  v32 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)p_ppv); /*0x44dc41*/
  (*(void (__thiscall **)(BuildingTypeClass *, void *))(v31 + 1152))(v3, v32); /*0x44dc49*/
  if ( *(int *)(this->gattlingValue + 3816) > 0 ) /*0x44dc5d*/
    *(_BYTE *)(this->focus + 22392) = 1; /*0x44dc65*/
LABEL_35:
  MissionControl = MissionClass::GetMissionControl(this); /*0x44dc84*/
  v34 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x44dc99*/
  return v34 + Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)2); /*0x44dcb1*/
}


// ==== 0x0044E3A0  BuildingClass::CheckOverlapWithOthers  this=BuildingClass  sig=csp ====
char __thiscall sub_44E3A0(_DWORD *this)
{
  int v2; // ebp
  _WORD *v3; // esi
  _DWORD *v4; // eax
  char v6; // [esp+13h] [ebp-9h]
  int v7; // [esp+14h] [ebp-8h]
  int v8; // [esp+18h] [ebp-4h] BYREF

  v2 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*this + 440))(this, &v8); /*0x44e3b8*/
  v3 = (_WORD *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 264))(this, 0); /*0x44e3cf*/
  v6 = 0; /*0x44e3d1*/
LABEL_2:
  while ( *v3 != 0x7FFF || v3[1] != 0x7FFF ) /*0x44e3e3*/
  {
    LOWORD(v7) = v2 + *v3; /*0x44e3eb*/
    HIWORD(v7) = HIWORD(v2) + v3[1]; /*0x44e3f8*/
    v8 = v7; /*0x44e401*/
    v3 += 2; /*0x44e40a*/
    v4 = (_DWORD *)*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v8) + 57); /*0x44e412*/
    if ( v4 ) /*0x44e41a*/
    {
      while ( this == v4 ) /*0x44e41e*/
      {
        v4 = (_DWORD *)v4[12]; /*0x44e420*/
        if ( !v4 ) /*0x44e425*/
          goto LABEL_2; /*0x44e425*/
      }
      v6 = 1; /*0x44e429*/
    }
  }
  return v6; /*0x44e434*/
}


// ==== 0x0044E440  BuildingClass::ProcessPowerPlantEffect  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ProcessPowerPlantEffect(#377 *this)
{
  int v2; // eax
  int v3; // eax
  wchar_t *v4; // ecx
  char *MissionControl; // eax
  int v6; // esi
  int result; // eax
  int *v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // edx
  _DWORD *v12; // esi
  int *v13; // esi
  int v14; // edi
  int v15; // edx
  int v16; // eax
  int v17; // eax
  double Progress; // st7
  int v19; // eax
  _DWORD v20[3]; // [esp+10h] [ebp-2Ch] BYREF
  int v21; // [esp+1Ch] [ebp-20h] BYREF
  int v22; // [esp+20h] [ebp-1Ch]
  int v23; // [esp+24h] [ebp-18h]
  int v24; // [esp+2Ch] [ebp-10h] BYREF
  int v25; // [esp+30h] [ebp-Ch]

  v2 = this->gattlingValue; /*0x44e447*/
  if ( *(_BYTE *)(v2 + 5815) ) /*0x44e44d*/
  {
    switch ( this->missionStatus ) /*0x44e466*/
    {
      case 0: /*0x44e466*/
        if ( BuildingClass::CheckPowerFlags((_BYTE *)this + 848) ) /*0x44e475*/
        {
          v3 = Math::RoundToInt(*(double *)(this->gattlingValue + 3624) * 900.0); /*0x44e490*/
          v4 = MEMORY[0xA8ED84]; /*0x44e495*/
          this->missionStatus = 2; /*0x44e4a1*/
          this->GateTimer = v4; /*0x44e4ab*/
          *((_DWORD *)this + 386) = v22; /*0x44e4b1*/
          *((_DWORD *)this + 387) = v3; /*0x44e4b4*/
          this->q184 = v3; /*0x44e4b7*/
          goto LABEL_5; /*0x44e4b7*/
        }
        if ( !Window::IsVisible((_BYTE *)this + 848) ) /*0x44e4f0*/
        {
          if ( BuildingClass::CheckFlag24((_BYTE *)this + 848) ) /*0x44e4ff*/
          {
            BuildingClass::UpdateTimerWithElapsed((char *)this + 848); /*0x44e50a*/
          }
          else
          {
            RateScaler::Init((_BYTE *)this + 848, *(double *)(this->gattlingValue + 968)); /*0x44e52a*/
            v20[0] = this->q027; /*0x44e539*/
            v20[1] = this->owningHouseIndex; /*0x44e545*/
            v20[2] = this->q029; /*0x44e54c*/
            StartAudioControllerAt(MEMORY[0x8871E0]->?[7], (int)v20, 0); /*0x44e55a*/
            v8 = (int *)(*(int (__thiscall **)(#377 *, int *))(this->q12C)(this, &v24); /*0x44e56a*/
            Cell::CreateCrater(*v8, v8[1], v8[2], v8[3], 0); /*0x44e591*/
          }
        }
        v9 = this->gattlingValue; /*0x44e596*/
        this->missionStatus = 1; /*0x44e59c*/
        v10 = Math::RoundToInt(*(double *)(v9 + 3624) * 900.0); /*0x44e5b2*/
        v11 = v25; /*0x44e5bd*/
        v12 = (_DWORD *)((char *)this + 1540); /*0x44e5c1*/
        *v12 = MEMORY[0xA8ED84]; /*0x44e5c7*/
        v12[1] = v11; /*0x44e5c9*/
        v12[2] = v10; /*0x44e5cc*/
        v12[3] = v10; /*0x44e5cf*/
        return 0; /*0x44e5d9*/
      case 1: /*0x44e466*/
        if ( BuildingClass::CheckPowerFlags((_BYTE *)this + 848) ) /*0x44e6e0*/
          this->missionStatus = 2; /*0x44e6e9*/
        goto LABEL_23; /*0x44e6e9*/
      case 2: /*0x44e466*/
        if ( (unsigned __int8)BuildingClass::CheckOverlapWithOthers(this) ) /*0x44e637*/
        {
          v17 = Math::RoundToInt(*(double *)(this->gattlingValue + 3624) * 900.0); /*0x44e6b1*/
          this->GateTimer = MEMORY[0xA8ED84]; /*0x44e6c2*/
          *((_DWORD *)this + 386) = v25; /*0x44e6cc*/
          *((_DWORD *)this + 387) = v17; /*0x44e6cf*/
          this->q184 = v17; /*0x44e6d2*/
        }
        else
        {
          v14 = this->q184; /*0x44e640*/
          if ( !v14 ) /*0x44e64c*/
            goto LABEL_19; /*0x44e64c*/
          v15 = this->GateTimer; /*0x44e64e*/
          v16 = *((_DWORD *)this + 387); /*0x44e654*/
          if ( v15 != -1 ) /*0x44e65d*/
          {
            if ( (int)MEMORY[0xA8ED84] - v15 >= v16 ) /*0x44e669*/
              v16 = 0; /*0x44e66f*/
            else
              v16 -= (int)MEMORY[0xA8ED84] - v15; /*0x44e66b*/
          }
          if ( (double)(v14 - v16) / (double)*((int *)this + 388) == 1.0 ) /*0x44e68a*/
LABEL_19:
            this->missionStatus = 3; /*0x44e690*/
        }
        goto LABEL_5; /*0x44e69a*/
      case 3: /*0x44e466*/
        Timer::StartDouble((_BYTE *)this + 848, *(double *)(v2 + 968)); /*0x44e5ee*/
        this->missionStatus = 4; /*0x44e5f3*/
        v13 = (int *)((char *)this + 156); /*0x44e5fd*/
        v21 = *v13; /*0x44e607*/
        v22 = v13[1]; /*0x44e613*/
        v23 = v13[2]; /*0x44e61a*/
        StartAudioControllerAt(MEMORY[0x8871E0]->?[6], (int)&v21, 0); /*0x44e628*/
        return 0; /*0x44e634*/
      case 4: /*0x44e466*/
LABEL_23:
        if ( Flag::CheckNone((_BYTE *)this + 848) ) /*0x44e6fb*/
        {
          (*(void (__thiscall **)(#377 *, _DWORD, int))(*(_DWORD *)this + 1156))(this, 0, 1); /*0x44e70c*/
          this->missionStatus = 5; /*0x44e712*/
          this->needsRedraw = 1; /*0x44e71c*/
        }
        if ( Window::IsVisible((_BYTE *)this + 848) /*0x44e73b*/
          || BuildingClass::CheckFlag24((_BYTE *)this + 848)
          || BuildingClass::CheckPowerFlags((_BYTE *)this + 848) )
        {
          Progress = Animation::GetProgress((int)this + 848); /*0x44e746*/
          v19 = Math::RoundToInt(Progress * (double)*(int *)(this->gattlingValue + 5880)); /*0x44e757*/
          if ( v19 != *((char *)this + 1795) ) /*0x44e765*/
          {
            this->GateStage = v19; /*0x44e767*/
            this->needsRedraw = 1; /*0x44e76d*/
          }
        }
        return 0; /*0x44e77b*/
      default:
LABEL_5:
        MissionControl = MissionClass::GetMissionControl(this); /*0x44e4ba*/
        v6 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x44e4d9*/
        result = v6 + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2); /*0x44e4e6*/
        break; /*0x44e4ed*/
    }
  }
  else
  {
    (*(void (__thiscall **)(#377 *, int, _DWORD))(this->q1E8)(this, 5, 0); /*0x44e784*/
    return 1; /*0x44e78b*/
  }
  return result; /*0x44e4e8*/
}


// ==== 0x0044E7B0  BuildingClass::GetPowerOutput  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetPowerOutput(int *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int *v6; // ecx
  int v7; // edx
  double HealthRatio; // st7
  int v10; // [esp+8h] [ebp-4h]

  v2 = *(_DWORD *)(this->gattlingValue + 3808); /*0x44e7bd*/
  v10 = v2; /*0x44e7c3*/
  if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 468))(this) ) /*0x44e7c7*/
    return 0; /*0x44e7c7*/
  if ( this->HasExtraPowerBonus ) /*0x44e7d5*/
  {
    v2 += *(_DWORD *)(this->gattlingValue + 3816); /*0x44e7e5*/
    v10 = v2; /*0x44e7eb*/
  }
  v3 = this->gattlingValue; /*0x44e7ef*/
  if ( *(_BYTE *)(v3 + 5806) || *(_BYTE *)(v3 + 5807) ) /*0x44e7ff*/
  {
    v4 = *(_DWORD *)(v3 + 3816); /*0x44e809*/
    if ( v4 > 0 ) /*0x44e811*/
    {
      v5 = this->inAirFlag; /*0x44e813*/
      if ( v5 > 0 ) /*0x44e81b*/
      {
        v2 += v5 * v4; /*0x44e820*/
        v10 = v2; /*0x44e822*/
      }
    }
  }
  if ( this->UpgradeLevel ) /*0x44e826*/
  {
    v6 = this + 379; /*0x44e830*/
    v7 = 3; /*0x44e836*/
    do /*0x44e84b*/
    {
      if ( *v6 ) /*0x44e83b*/
        v2 += *(_DWORD *)(*v6 + 3808); /*0x44e841*/
      ++v6; /*0x44e847*/
      --v7; /*0x44e84a*/
    }
    while ( v7 ); /*0x44e84b*/
    v10 = v2; /*0x44e84d*/
  }
  if ( v2 <= 0 || !this->HasPower ) /*0x44e855*/
    return 0; /*0x44e874*/
  HealthRatio = BuildingClass::GetHealthRatio(this); /*0x44e861*/
  return Math::RoundToInt(HealthRatio * (double)v10); /*0x44e86f*/
}


// ==== 0x0044E880  BuildingClass::GetPowerDrain  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetPowerDrain(_BYTE *this)
{
  int v2; // ecx
  int result; // eax
  char *v4; // edx
  int v5; // esi

  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(this->drainingMe)(this) || !this->HasPower ) /*0x44e88f*/
    return 0; /*0x44e8de*/
  v2 = this->gattlingValue; /*0x44e899*/
  result = *(_DWORD *)(v2 + 3812); /*0x44e8a7*/
  if ( this->HasExtraPowerDrain ) /*0x44e89f*/
    result += *(_DWORD *)(v2 + 3820); /*0x44e8af*/
  if ( this->UpgradeLevel ) /*0x44e8b5*/
  {
    v4 = this + 1516; /*0x44e8bf*/
    v5 = 3; /*0x44e8c5*/
    do /*0x44e8da*/
    {
      if ( *(_DWORD *)v4 ) /*0x44e8ca*/
        result += *(_DWORD *)(*(_DWORD *)v4 + 3812); /*0x44e8d0*/
      v4 += 4; /*0x44e8d6*/
      --v5; /*0x44e8d9*/
    }
    while ( v5 ); /*0x44e8da*/
  }
  return result; /*0x44e8dc*/
}


// ==== 0x0044E8F0  BuildingClass::OnObjectExpired  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::OnObjectExpired(#377 *this)
{
  int v2; // edx
  int v3; // ecx
  _BYTE *v4; // eax
  int v5; // edx
  int v6; // ecx
  _BYTE *v7; // eax
  int result; // eax
  _DWORD *v9; // ecx
  _DWORD *v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // ecx
  int v16; // eax
  char *v17; // esi
  int v18; // ecx
  int v19; // ecx
  int v20; // [esp+10h] [ebp+4h]
  _BYTE *v21; // [esp+14h] [ebp+8h] BYREF

  ObjectClass::NotifyExpired((int *)this, (_BYTE *)v20, v21); /*0x44e8ff*/
  if ( this->initialOwner == v20 ) /*0x44e90e*/
    this->initialOwner = 0; /*0x44e910*/
  if ( this->FirestormAnim == v20 ) /*0x44e91c*/
    this->FirestormAnim = 0; /*0x44e91e*/
  if ( this->Factory == v20 ) /*0x44e92a*/
    this->Factory = 0; /*0x44e92c*/
  if ( this->targetingTimer == v20 ) /*0x44e938*/
    this->targetingTimer = 0; /*0x44e93a*/
  if ( this->LightSource == v20 ) /*0x44e946*/
    this->LightSource = 0; /*0x44e948*/
  if ( this->q57C == v20 ) /*0x44e954*/
  {
    if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)(MEMORY[0x87F7E8][7806] + 5888) ) /*0x44e96e*/
    {
      v3 = 0; /*0x44e988*/
      v4 = (_BYTE *)(this->gattlingValue + 5140); /*0x44e98a*/
    }
    else
    {
      v3 = 1; /*0x44e976*/
      v4 = (_BYTE *)(this->gattlingValue + 5156); /*0x44e97b*/
    }
    if ( v4 && *v4 ) /*0x44e993*/
      BuildingClass::PlayAnim(this, v2, v4, 18, v3, 0, 0); /*0x44e99f*/
  }
  if ( *(_BYTE *)(this->gattlingValue + 5805) && this->q584 == v20 ) /*0x44e9b8*/
  {
    if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)(MEMORY[0x87F7E8][7806] + 5888) ) /*0x44e9d1*/
    {
      v6 = 0; /*0x44e9eb*/
      v7 = (_BYTE *)(this->gattlingValue + 4120); /*0x44e9ed*/
    }
    else
    {
      v6 = 1; /*0x44e9d9*/
      v7 = (_BYTE *)(this->gattlingValue + 4136); /*0x44e9de*/
    }
    if ( v7 && *v7 ) /*0x44e9f6*/
      BuildingClass::PlayAnim(this, v5, v7, 3, v6, 0, 0); /*0x44ea02*/
  }
  if ( v20 && (*(int (__stdcall **)(int))(*(_DWORD *)(v20 + 4) + 12))(v20 + 4) == 4 ) /*0x44ea18*/
  {
    result = 0; /*0x44ea1a*/
    v9 = (_DWORD *)((char *)this + 1480); /*0x44ea1c*/
    do /*0x44ea2d*/
    {
      if ( *v9 == v20 ) /*0x44ea24*/
      {
        *((_DWORD *)this + result + 370) = 0; /*0x44ea45*/
        return result; /*0x44ea4f*/
      }
      ++result; /*0x44ea26*/
      ++v9; /*0x44ea27*/
    }
    while ( result < 8 ); /*0x44ea2d*/
    if ( !*(_BYTE *)(v20 + 280) ) /*0x44ea35*/
      goto LABEL_34; /*0x44ea35*/
    LOBYTE(result) = BuildingClass::StopAnim((int)this, v20); /*0x44ea3a*/
  }
  else
  {
LABEL_34:
    if ( this->gattlingValue == v20 ) /*0x44ea58*/
      this->gattlingValue = 0; /*0x44ea5a*/
    v10 = (_DWORD *)((char *)this + 1516); /*0x44ea60*/
    v11 = 3; /*0x44ea66*/
    do /*0x44ea75*/
    {
      if ( *v10 == v20 ) /*0x44ea6d*/
        *v10 = 0; /*0x44ea6f*/
      ++v10; /*0x44ea71*/
      --v11; /*0x44ea74*/
    }
    while ( v11 ); /*0x44ea75*/
    v12 = this->Overpowerers; /*0x44ea77*/
    v21 = (_BYTE *)v20; /*0x44ea8b*/
    v13 = (*(int (__thiscall **)(char *, _BYTE **))(v12 + 16))((char *)this + 1644, &v21); /*0x44ea8f*/
    if ( v13 != -1 ) /*0x44ea95*/
    {
      v14 = this->q67C; /*0x44ea97*/
      if ( v13 < v14 ) /*0x44ea9c*/
      {
        v15 = v14 - 1; /*0x44ea9e*/
        for ( this->q67C = v15; /*0x44eaa4*/
              v13 < this->q67C;
              *(_DWORD *)(this->ironTintTimer + 4 * v13 - 4) = *(_DWORD *)(this->ironTintTimer + 4 * v13) )
        {
          ++v13; /*0x44eaa9*/
        }
      }
    }
    result = MEMORY[0x87F7E8][539633]; /*0x44eab8*/
    if ( MEMORY[0x87F7E8][539633] ) /*0x44eac0*/
    {
      v16 = this->q684; /*0x44eac2*/
      v17 = (char *)this + 1668; /*0x44eac8*/
      v21 = (_BYTE *)v20; /*0x44ead2*/
      result = (*(int (__thiscall **)(char *, _BYTE **))(v16 + 16))(v17, &v21); /*0x44ead9*/
      if ( result != -1 ) /*0x44eadf*/
      {
        v18 = *((_DWORD *)v17 + 4); /*0x44eae1*/
        if ( result < v18 ) /*0x44eae6*/
        {
          v19 = v18 - 1; /*0x44eae8*/
          for ( *((_DWORD *)v17 + 4) = v19; /*0x44eaee*/
                result < *((_DWORD *)v17 + 4);
                *(_DWORD *)(*((_DWORD *)v17 + 1) + 4 * result - 4) = *(_DWORD *)(*((_DWORD *)v17 + 1) + 4 * result) )
          {
            ++result; /*0x44eaf3*/
          }
        }
      }
    }
  }
  return result; /*0x44ea3f*/
}


// ==== 0x0044EB10  BuildingClass::GetCrew  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetCrew(#377 *this)
{
  if ( this->HasBeenCaptured /*0x44eb43*/
    || Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 0, 99) >= 25
    || *(_DWORD *)(this->gattlingValue + 3768) != 7 )
  {
    return TechnoClass::GetCrew(this); /*0x44eb55*/
  }
  else
  {
    return *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3952); /*0x44eb4c*/
  }
}


// ==== 0x0044EBF0  BuildingClass::Disappear_PrismForward  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::Disappear_PrismForward(#377 *this)
{
  int v1; // ebx
  FactoryClass *v3; // ecx
  FactoryClass *v4; // ecx
  _DWORD *v5; // ecx
  BuildingTypeClass *v6; // eax
  int v7; // edx
  _DWORD *v8; // ecx
  FactoryClass *Type; // eax
  char v10; // bl
  FactoryClass *v11; // edi
  int v12; // eax
  int v13; // eax
  BuildingTypeClass *v14; // eax
  _DWORD *v15; // ecx
  FactoryClass *v16; // eax
  char v17; // bl
  FactoryClass *v18; // edi
  int v19; // eax
  int v20; // eax
  BuildingTypeClass *v21; // eax
  _DWORD *v22; // ecx
  FactoryClass *v23; // eax
  char v24; // bl
  FactoryClass *v25; // edi
  int v26; // eax
  int v27; // eax
  BuildingTypeClass *v28; // eax
  _DWORD *v29; // ecx
  FactoryClass *v30; // eax
  char v31; // bl
  FactoryClass *v32; // edi
  int v33; // eax
  int v34; // eax
  BuildingTypeClass *v35; // eax
  _DWORD *v36; // ecx
  FactoryClass *v37; // eax
  char v38; // bl
  FactoryClass *v39; // edi
  int v40; // eax
  int v41; // eax
  BuildingTypeClass *v42; // eax
  _DWORD *BuildLimit; // eax
  AbstractClass *i; // ebp
  TechnoClass *Member; // eax
  TechnoClass *v46; // edi
  int v48; // [esp+44h] [ebp-10h]
  char v49; // [esp+58h] [ebp+4h]

  if ( v49 ) /*0x44ebfb*/
  {
    v3 = (FactoryClass *)this->Factory; /*0x44ec01*/
    if ( v3 ) /*0x44ec09*/
    {
      FactoryClass::AbandonProduction((int)v3); /*0x44ec0b*/
      v4 = (FactoryClass *)this->Factory; /*0x44ec10*/
      if ( v4 ) /*0x44ec18*/
        (*(void (__thiscall **)(FactoryClass *, int))(*(_DWORD *)v4->__pad_0 + 32))(v4, 1); /*0x44ec1e*/
      this->Factory = 0; /*0x44ec21*/
    }
    v5 = (_DWORD *)this->focus; /*0x44ec2b*/
    v48 = v1; /*0x44ec31*/
    if ( !v5 ) /*0x44ec34*/
      goto LABEL_33; /*0x44ec34*/
    v6 = (BuildingTypeClass *)this->gattlingValue; /*0x44ec3a*/
    v7 = v6->Factory[0]; /*0x44ec40*/
    if ( v7 == 7 ) /*0x44ec49*/
    {
      v8 = (_DWORD *)v5[5359]; /*0x44ec4f*/
      if ( v8 ) /*0x44ec57*/
      {
        Type = (FactoryClass *)AbstractClass::GetType(v8); /*0x44ec59*/
        v10 = this->inLimbo; /*0x44ec5e*/
        v11 = Type; /*0x44ec64*/
        this->inLimbo = 1; /*0x44ec68*/
        if ( Type ) /*0x44ec6f*/
        {
          v12 = (*(int (__thiscall **)(FactoryClass *))(*(_DWORD *)Type->__pad_0 + 132))(Type); /*0x44ec75*/
          if ( !(*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v12 + 148))( /*0x44ec8c*/
                  v12,
                  1,
                  0,
                  0,
                  this->focus) )
          {
            v13 = (*(int (__thiscall **)(FactoryClass *))(*(_DWORD *)v11->__pad_0 + 132))(v11); /*0x44ec9a*/
            v14 = (BuildingTypeClass *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 64))(v13); /*0x44eca8*/
            HouseClass::CancelProduction(*((void **)this + 135), *(void **)(this->gattlingValue + 3768), v14, 0, 0); /*0x44ecbf*/
          }
        }
        this->inLimbo = v10; /*0x44ecc4*/
      }
      v15 = *(_DWORD **)(this->focus + 21440); /*0x44ecd0*/
      if ( v15 ) /*0x44ecd8*/
      {
        v16 = (FactoryClass *)AbstractClass::GetType(v15); /*0x44ecda*/
        v17 = this->inLimbo; /*0x44ecdf*/
        v18 = v16; /*0x44ece5*/
        this->inLimbo = 1; /*0x44ece9*/
        if ( v16 ) /*0x44ecf0*/
        {
          v19 = (*(int (__thiscall **)(FactoryClass *))(*(_DWORD *)v16->__pad_0 + 132))(v16); /*0x44ecf6*/
          if ( !(*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v19 + 148))( /*0x44ed0d*/
                  v19,
                  1,
                  0,
                  0,
                  this->focus) )
          {
            v20 = (*(int (__thiscall **)(FactoryClass *))(*(_DWORD *)v18->__pad_0 + 132))(v18); /*0x44ed1b*/
            v21 = (BuildingTypeClass *)(*(int (__thiscall **)(int))(*(_DWORD *)v20 + 64))(v20); /*0x44ed29*/
            HouseClass::CancelProduction(*((void **)this + 135), *(void **)(this->gattlingValue + 3768), v21, 0, 0); /*0x44ed40*/
          }
        }
        this->inLimbo = v17; /*0x44ed45*/
      }
      v22 = *(_DWORD **)(this->focus + 21444); /*0x44ed51*/
      if ( v22 ) /*0x44ed59*/
      {
        v23 = (FactoryClass *)AbstractClass::GetType(v22); /*0x44ed5b*/
        v24 = this->inLimbo; /*0x44ed60*/
        v25 = v23; /*0x44ed66*/
        this->inLimbo = 1; /*0x44ed6a*/
        if ( v23 ) /*0x44ed71*/
        {
          v26 = (*(int (__thiscall **)(FactoryClass *))(*(_DWORD *)v23->__pad_0 + 132))(v23); /*0x44ed77*/
          if ( !(*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v26 + 148))( /*0x44ed8e*/
                  v26,
                  1,
                  0,
                  0,
                  this->focus) )
          {
            v27 = (*(int (__thiscall **)(FactoryClass *))(*(_DWORD *)v25->__pad_0 + 132))(v25); /*0x44ed9c*/
            v28 = (BuildingTypeClass *)(*(int (__thiscall **)(int))(*(_DWORD *)v27 + 64))(v27); /*0x44edaa*/
            HouseClass::CancelProduction(*((void **)this + 135), *(void **)(this->gattlingValue + 3768), v28, 0, 0); /*0x44edc1*/
          }
        }
        this->inLimbo = v24; /*0x44edc6*/
      }
      v29 = *(_DWORD **)(this->focus + 21448); /*0x44edd2*/
      if ( v29 ) /*0x44edda*/
      {
        v30 = (FactoryClass *)AbstractClass::GetType(v29); /*0x44eddc*/
        v31 = this->inLimbo; /*0x44ede1*/
        v32 = v30; /*0x44ede7*/
        this->inLimbo = 1; /*0x44edeb*/
        if ( v30 ) /*0x44edf2*/
        {
          v33 = (*(int (__thiscall **)(FactoryClass *))(*(_DWORD *)v30->__pad_0 + 132))(v30); /*0x44edf8*/
          if ( !(*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v33 + 148))( /*0x44ee0f*/
                  v33,
                  1,
                  0,
                  0,
                  this->focus) )
          {
            v34 = (*(int (__thiscall **)(FactoryClass *))(*(_DWORD *)v32->__pad_0 + 132))(v32); /*0x44ee1d*/
            v35 = (BuildingTypeClass *)(*(int (__thiscall **)(int))(*(_DWORD *)v34 + 64))(v34); /*0x44ee2b*/
            HouseClass::CancelProduction(*((void **)this + 135), *(void **)(this->gattlingValue + 3768), v35, 0, 0); /*0x44ee42*/
          }
        }
        this->inLimbo = v31; /*0x44ee47*/
      }
      v36 = *(_DWORD **)(this->focus + 21452); /*0x44ee53*/
      if ( !v36 ) /*0x44ee5b*/
        goto LABEL_33; /*0x44ee5b*/
      v37 = (FactoryClass *)AbstractClass::GetType(v36); /*0x44ee5d*/
      v38 = this->inLimbo; /*0x44ee62*/
      v39 = v37; /*0x44ee68*/
      this->inLimbo = 1; /*0x44ee6c*/
      if ( !v37 ) /*0x44ee73*/
        goto LABEL_32; /*0x44ee73*/
    }
    else
    {
      LOBYTE(v6) = v6->DebrisTypes[2490]; /*0x44eeed*/
      BuildLimit = (_DWORD *)HouseClass::GetBuildLimit(v5, v7, (IUnknown *)v6, 0); /*0x44eef7*/
      if ( !BuildLimit ) /*0x44eefe*/
        goto LABEL_33; /*0x44eefe*/
      v37 = (FactoryClass *)AbstractClass::GetType(BuildLimit); /*0x44ef02*/
      v38 = this->inLimbo; /*0x44ef07*/
      v39 = v37; /*0x44ef0d*/
      this->inLimbo = 1; /*0x44ef11*/
      if ( !v37 ) /*0x44ef18*/
      {
LABEL_32:
        this->inLimbo = v38; /*0x44eec8*/
LABEL_33:
        (*(void (__thiscall **)(#377 *, int))(this->q280)(this, 3); /*0x44eece*/
        return ObjectClass::Destroy2(this); /*0x44eed4*/
      }
    }
    v40 = (*(int (__thiscall **)(FactoryClass *, int))(*(_DWORD *)v37->__pad_0 + 132))(v37, v48); /*0x44ee79*/
    if ( !(*(int (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)v40 + 148))(v40, 1, 0, 0) ) /*0x44ee90*/
    {
      v41 = (*(int (__thiscall **)(FactoryClass *))(*(_DWORD *)v39->__pad_0 + 132))(v39); /*0x44ee9e*/
      v42 = (BuildingTypeClass *)(*(int (__thiscall **)(int))(*(_DWORD *)v41 + 64))(v41); /*0x44eeac*/
      HouseClass::CancelProduction(*((void **)this + 135), *(void **)(this->gattlingValue + 3768), v42, 0, 0); /*0x44eec3*/
    }
    goto LABEL_32; /*0x44eec3*/
  }
  for ( i = 0; (int)i < this->q0E8; i = (AbstractClass *)((char *)i + 1) ) /*0x44ef33*/
  {
    Member = (TechnoClass *)Team::GetMember(this, i); /*0x44ef38*/
    v46 = Member; /*0x44ef3d*/
    if ( Member && !Object::IsAlliedWithObjectHouse(*((_DWORD **)this + 135), (IUnknown *)Member) ) /*0x44ef4a*/
      (*(void (__thiscall **)(#377 *, int, TechnoClass *))(this->temporalTargetingMe)(this, 3, v46); /*0x44ef5a*/
  }
  return ObjectClass::Destroy2(this); /*0x44eee7*/
}


// ==== 0x0044EFB0  BuildingClass::ValidateFoundation  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ValidateFoundation(#377 *this)
{
  int *v2; // eax
  int v3; // edx
  int v4; // ebp
  int *v5; // esi
  int v6; // edi
  void *v7; // eax
  int v9; // edi
  void *v10; // eax
  int v11; // edi
  void *v12; // eax
  int v13; // eax
  _DWORD *v14; // eax
  int v15; // edi
  void *v16; // eax
  int v17; // edi
  void *v18; // eax
  int v19; // edi
  void *v20; // eax
  int v21; // edi
  void *v22; // eax
  int v23; // ecx
  _WORD *v24; // edi
  _WORD *v25; // eax
  int v26; // ebp
  void *v27; // eax
  __int16 FoundationHeight; // ax
  _DWORD *v29; // ecx
  int v30; // ebp
  __int16 v31; // di
  __int16 v32; // di
  int v33; // ebp
  void *v34; // eax
  int v35; // edi
  void *v36; // eax
  _DWORD *v37; // ecx
  __int16 FoundationWidth; // ax
  int v39; // ecx
  int v40; // ebp
  __int16 v41; // di
  __int16 v42; // di
  int v43; // ebp
  void *v44; // eax
  int v45; // edi
  void *v46; // eax
  int v47; // ecx
  int v48; // [esp+50h] [ebp-20h] BYREF
  int v49; // [esp+54h] [ebp-1Ch]
  int v50; // [esp+58h] [ebp-18h] BYREF
  int v51; // [esp+5Ch] [ebp-14h]
  int v52[3]; // [esp+64h] [ebp-Ch] BYREF
  int *v53; // [esp+74h] [ebp+4h]
  int *v54; // [esp+78h] [ebp+8h]
  int v55; // [esp+78h] [ebp+8h]
  int v56; // [esp+78h] [ebp+8h]
  int v57; // [esp+78h] [ebp+8h]
  __int16 v58; // [esp+78h] [ebp+8h]
  int v59; // [esp+78h] [ebp+8h]
  int v60; // [esp+78h] [ebp+8h]
  int v61; // [esp+78h] [ebp+8h]
  int v62; // [esp+7Ch] [ebp+Ch] BYREF

  v2 = (int *)(*(int (__thiscall **)(#377 *, int *))(this->airstrikeTintTimer)(this, &v50); /*0x44efc2*/
  v3 = this->gattlingValue; /*0x44efc8*/
  v4 = *v2; /*0x44efce*/
  v5 = v54; /*0x44efd0*/
  v51 = *v2; /*0x44efd4*/
  if ( *(_BYTE *)(v3 + 5860) ) /*0x44efd8*/
  {
    LOWORD(v55) = v4 + 1; /*0x44efec*/
    HIWORD(v55) = HIWORD(v51) + 2; /*0x44eff1*/
    v48 = v55; /*0x44f004*/
    if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v48) ) /*0x44f008*/
    {
      v6 = *v5; /*0x44f011*/
      v7 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v48); /*0x44f025*/
      if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v6 + 428))(v5, v7, -1, -1, 0, 1) ) /*0x44f02d*/
      {
        *v53 = v48; /*0x44f042*/
        return (int)v53; /*0x44f048*/
      }
    }
  }
  if ( *(_BYTE *)(this->gattlingValue + 5861) ) /*0x44f051*/
  {
    LOWORD(v56) = v4 + 2; /*0x44f062*/
    HIWORD(v56) = HIWORD(v51) + 2; /*0x44f06e*/
    v48 = v56; /*0x44f07d*/
    if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v48) ) /*0x44f081*/
    {
      v9 = *v5; /*0x44f08a*/
      v10 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v48); /*0x44f09e*/
      if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v9 + 428))(v5, v10, -1, -1, 0, 1) ) /*0x44f0a6*/
      {
        *v53 = v48; /*0x44f0bb*/
        return (int)v53; /*0x44f0c1*/
      }
    }
  }
  if ( *(_BYTE *)(this->gattlingValue + 5862) ) /*0x44f0ca*/
  {
    LOWORD(v57) = v4 + 2; /*0x44f0dc*/
    HIWORD(v57) = HIWORD(v51) + 1; /*0x44f0e1*/
    v48 = v57; /*0x44f0f4*/
    if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v48) ) /*0x44f0f8*/
    {
      v11 = *v5; /*0x44f101*/
      v12 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v48); /*0x44f115*/
      if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v11 + 428))(v5, v12, -1, -1, 0, 1) ) /*0x44f11d*/
      {
LABEL_12:
        *v53 = v48; /*0x44f127*/
        return (int)v53; /*0x44f138*/
      }
    }
  }
  v13 = this->gattlingValue; /*0x44f13b*/
  if ( *(_BYTE *)(v13 + 3278) && *(_BYTE *)(v13 + 5821) ) /*0x44f14f*/
  {
    v14 = (_DWORD *)(*(int (__thiscall **)(#377 *, int *, int *))(this->lineTrailer)(this, v52, v5); /*0x44f167*/
    v58 = *v14 / 256; /*0x44f17d*/
    HIWORD(v48) = v14[1] / 256; /*0x44f1a3*/
    ++HIWORD(v48); /*0x44f1a8*/
    LOWORD(v48) = v58 + 1; /*0x44f1ae*/
    if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v48) ) /*0x44f1b3*/
    {
      v15 = *v5; /*0x44f1bc*/
      v16 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v48); /*0x44f1d0*/
      if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, _DWORD))(v15 + 428))(v5, v16, -1, -1, 0, 0) ) /*0x44f1d8*/
      {
        *v53 = v48; /*0x44f1ed*/
        return (int)v53; /*0x44f1f3*/
      }
    }
    --HIWORD(v48); /*0x44f1f6*/
    if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v48) ) /*0x44f205*/
    {
      v17 = *v5; /*0x44f20e*/
      v18 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v48); /*0x44f222*/
      if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, _DWORD))(v17 + 428))(v5, v18, -1, -1, 0, 0) ) /*0x44f22a*/
      {
        *v53 = v48; /*0x44f23f*/
        return (int)v53; /*0x44f245*/
      }
    }
    ++HIWORD(v48); /*0x44f248*/
    LOWORD(v48) = v48 - 1; /*0x44f24d*/
    if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v48) ) /*0x44f25c*/
    {
      v19 = *v5; /*0x44f265*/
      v20 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v48); /*0x44f279*/
      if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, _DWORD))(v19 + 428))(v5, v20, -1, -1, 0, 0) ) /*0x44f281*/
      {
        *v53 = v48; /*0x44f296*/
        return (int)v53; /*0x44f29c*/
      }
    }
  }
  if ( v62 != MEMORY[0x89C818] && LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v62) ) /*0x44f2c5*/
  {
    v21 = *v5; /*0x44f2ce*/
    v22 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v62); /*0x44f2e2*/
    if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, _DWORD))(v21 + 428))(v5, v22, -1, -1, 0, 0) ) /*0x44f2ea*/
    {
      *v53 = v62; /*0x44f2ff*/
      return (int)v53; /*0x44f305*/
    }
  }
  v23 = this->gattlingValue; /*0x44f308*/
  v24 = *(_WORD **)(v23 + 3796); /*0x44f30e*/
  if ( v24 && !*(_BYTE *)(v23 + 5825) ) /*0x44f31c*/
  {
    while ( *v24 != 0x7FFF || v24[1] != 0x7FFF ) /*0x44f33e*/
    {
      v25 = v24; /*0x44f344*/
      v24 += 2; /*0x44f346*/
      LOWORD(v59) = v4 + *v25; /*0x44f358*/
      HIWORD(v59) = HIWORD(v51) + v25[1]; /*0x44f361*/
      v48 = v59; /*0x44f36a*/
      if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v48) ) /*0x44f374*/
      {
        v26 = *v5; /*0x44f37d*/
        v27 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v48); /*0x44f391*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, _DWORD))(v26 + 428))(v5, v27, -1, -1, 0, 0) ) /*0x44f399*/
          goto LABEL_36; /*0x44f3a1*/
        LOWORD(v4) = v51; /*0x44f331*/
      }
    }
    goto LABEL_53; /*0x44f33e*/
  }
  FoundationHeight = BuildingTypeClass::GetFoundationHeight(v23, 0); /*0x44f3b9*/
  v29 = (_DWORD *)this->gattlingValue; /*0x44f3be*/
  v30 = -1; /*0x44f3c4*/
  v31 = FoundationHeight; /*0x44f3c7*/
  v50 = -1; /*0x44f3c9*/
  if ( BuildingTypeClass::GetFoundationWidth(v29) >= -1 ) /*0x44f3d5*/
  {
    HIWORD(v60) = HIWORD(v51) + v31; /*0x44f3e1*/
    do /*0x44f3ef*/
    {
      v32 = v51 + v30; /*0x44f3ef*/
      LOWORD(v60) = v51 + v30; /*0x44f3f2*/
      v48 = v60; /*0x44f3fb*/
      if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v48) ) /*0x44f404*/
      {
        v33 = *v5; /*0x44f40d*/
        v34 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v48); /*0x44f421*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v33 + 428))(v5, v34, -1, -1, 0, 1) ) /*0x44f431*/
          goto LABEL_12; /*0x44f431*/
        v30 = v50; /*0x44f437*/
      }
      LOWORD(v49) = v32; /*0x44f43f*/
      HIWORD(v49) = HIWORD(v51) - 1; /*0x44f449*/
      v48 = v49; /*0x44f458*/
      if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v48) ) /*0x44f45c*/
      {
        v35 = *v5; /*0x44f465*/
        v36 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v48); /*0x44f479*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v35 + 428))(v5, v36, -1, -1, 0, 1) ) /*0x44f481*/
          goto LABEL_36; /*0x44f489*/
      }
      v37 = (_DWORD *)this->gattlingValue; /*0x44f48f*/
      v50 = ++v30; /*0x44f496*/
    }
    while ( v30 <= BuildingTypeClass::GetFoundationWidth(v37) ); /*0x44f3ef*/
  }
  FoundationWidth = BuildingTypeClass::GetFoundationWidth(*((_DWORD **)this + 328)); /*0x44f4a7*/
  v39 = this->gattlingValue; /*0x44f4b2*/
  v40 = -1; /*0x44f4b8*/
  v41 = FoundationWidth; /*0x44f4bd*/
  v49 = -1; /*0x44f4bf*/
  if ( BuildingTypeClass::GetFoundationHeight(v39, 0) >= -1 ) /*0x44f4cb*/
  {
    LOWORD(v61) = v51 + v41; /*0x44f4d7*/
    while ( 1 ) /*0x44f4e5*/
    {
      v42 = HIWORD(v51) + v40; /*0x44f4e5*/
      HIWORD(v61) = HIWORD(v51) + v40; /*0x44f4e8*/
      v48 = v61; /*0x44f4f1*/
      if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v48) ) /*0x44f4fa*/
      {
        v43 = *v5; /*0x44f503*/
        v44 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v48); /*0x44f517*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v43 + 428))(v5, v44, -1, -1, 0, 1) ) /*0x44f527*/
          goto LABEL_12; /*0x44f527*/
        v40 = v49; /*0x44f52d*/
      }
      HIWORD(v50) = v42; /*0x44f535*/
      LOWORD(v50) = v51 - 1; /*0x44f53f*/
      v48 = v50; /*0x44f54e*/
      if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v48) ) /*0x44f552*/
      {
        v45 = *v5; /*0x44f55b*/
        v46 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v48); /*0x44f56f*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v45 + 428))(v5, v46, -1, -1, 0, 1) ) /*0x44f577*/
          break; /*0x44f577*/
      }
      v47 = this->gattlingValue; /*0x44f585*/
      v49 = ++v40; /*0x44f58e*/
      if ( v40 > BuildingTypeClass::GetFoundationHeight(v47, 0) ) /*0x44f599*/
        goto LABEL_53; /*0x44f599*/
    }
LABEL_36:
    *v53 = v48; /*0x44f3a3*/
    return (int)v53; /*0x44f3b4*/
  }
LABEL_53:
  *v53 = MEMORY[0x89C818]; /*0x44f59f*/
  return (int)v53; /*0x44f03f*/
}


// ==== 0x0044F5C0  BuildingClass::CanBeSoldCheck  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CanBeSoldCheck(#377 *this)
{
  int result; // eax

  result = this->empLockRemaining; /*0x44f5c3*/
  if ( result <= 0 ) /*0x44f5cb*/
  {
    result = (*(int (__thiscall **)(#377 *))(this->q284)(this); /*0x44f5d5*/
    if ( (_BYTE)result ) /*0x44f5dd*/
    {
      LOBYTE(result) = 1; /*0x44f5df*/
    }
    else
    {
      if ( !*(_BYTE *)(this->gattlingValue + 5817) ) /*0x44f5e9*/
        return *(_DWORD *)(this->gattlingValue + 1032) != 0; /*0x44f5e9*/
      result = House::IsCurrentPlayer(*((#375 **)this + 135)); /*0x44f5f9*/
      if ( (_BYTE)result /*0x44f61c*/
        && (result = MEMORY[0xA8B238][0]) != 0
        && (_BYTE)MEMORY[0xA8B320]
        && (result = this->suspendedMission) == 0 )
      {
        return *(_DWORD *)(this->gattlingValue + 1032) != 0; /*0x44f633*/
      }
      else
      {
        LOBYTE(result) = 0; /*0x44f61e*/
      }
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x44f5cd*/
  }
  return result; /*0x44f5cf*/
}


// ==== 0x0044F640  BuildingClass::GetFactoryPosition  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetFactoryPosition(#377 *this)
{
  _DWORD *v1; // eax
  _DWORD *v2; // ecx
  int v3; // esi
  int v4; // edi
  int v5; // ecx
  int v6; // edx
  int v7; // esi
  int *v9; // ecx
  char v10[12]; // [esp+4h] [ebp-Ch] BYREF
  int *v11; // [esp+14h] [ebp+4h]

  v1 = (_DWORD *)this->gattlingValue; /*0x44f640*/
  if ( v1[946] == MEMORY[0x89C848] && v1[947] == MEMORY[0x89C84C] && v1[948] == MEMORY[0x89C850] ) /*0x44f676*/
  {
    v9 = (int *)(*(int (__thiscall **)(#377 *, char *))(this->q048)(this, v10); /*0x44f6bf*/
    *v11 = *v9; /*0x44f6c9*/
    v11[1] = v9[1]; /*0x44f6ce*/
    v11[2] = v9[2]; /*0x44f6d5*/
    return (int)v11; /*0x44f6c1*/
  }
  else
  {
    v2 = (_DWORD *)((char *)this + 156); /*0x44f678*/
    v3 = v2[1]; /*0x44f681*/
    v4 = v2[2]; /*0x44f684*/
    v5 = *v2 + v1[946]; /*0x44f68d*/
    v6 = v3 + v1[947]; /*0x44f695*/
    v7 = v1[948]; /*0x44f697*/
    *v11 = v5; /*0x44f6a5*/
    v11[1] = v6; /*0x44f6a7*/
    v11[2] = v4 + v7; /*0x44f6aa*/
    return (int)v11; /*0x44f69d*/
  }
}


// ==== 0x0044F6E0  ObjectClass::method_44F6E0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_44F6E0(void *this, _DWORD *a2, int a3)
{
  int v3; // ebx
  int v4; // edi
  _DWORD *v5; // eax
  int v6; // esi
  int v7; // ecx
  _BYTE v9[12]; // [esp+14h] [ebp-Ch] BYREF
  int v10; // [esp+28h] [ebp+8h]

  v3 = 6; /*0x44f6ed*/
  v4 = 5; /*0x44f6f2*/
  v5 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(this->q048)(this, v9); /*0x44f6f7*/
  v6 = *v5 / 256; /*0x44f71b*/
  v7 = v5[1] / 256; /*0x44f71e*/
  if ( a3 ) /*0x44f72e*/
  {
    if ( a3 == 2 ) /*0x44f733*/
      v4 = 0; /*0x44f735*/
  }
  else
  {
    v3 = 0; /*0x44f739*/
  }
  if ( (__int16)v6 - MEMORY[0x87F90C] > MEMORY[0x87F914] / 2 ) /*0x44f751*/
    v3 = -v3; /*0x44f753*/
  if ( (__int16)v7 - MEMORY[0x87F910] > MEMORY[0x87F918] / 2 ) /*0x44f76b*/
    v4 = -v4; /*0x44f76d*/
  LOWORD(v10) = v6 + v3; /*0x44f77f*/
  HIWORD(v10) = v7 + v4; /*0x44f784*/
  *a2 = v10; /*0x44f78f*/
  return a2; /*0x44f78d*/
}


// ==== 0x0044F820  Scenario::ReadTeams  this=IUnknown  sig=csp ====
int __thiscall Scenario::ReadTeams(CCINIClass *this)
{
  CCINIClass *v1; // esi
  int result; // eax
  CCINIClass *v3; // ecx
  unsigned __int8 *StringByIndex; // eax
  char *v5; // eax
  int v6; // eax
  CCINIClass *v7; // eax
  char *v8; // eax
  char *v9; // eax
  char *v10; // eax
  char *v11; // eax
  CCINIClass *v12; // edx
  char *v13; // eax
  int v14; // eax
  char *v15; // eax
  char *v16; // ebp
  char *v17; // eax
  char *v18; // eax
  char *v19; // eax
  char *v20; // eax
  char *v21; // eax
  CCINIClass *v22; // esi
  int v23; // edi
  char *v24; // eax
  char *v25; // eax
  bool v26; // bl
  char *v27; // eax
  int v28; // eax
  TechnoClass *v29; // esi
  void *v30; // eax
  int v31; // eax
  int v32; // edi
  int v33; // eax
  int v34; // edi
  int health; // edx
  int v36; // edx
  _DWORD *v37; // ecx
  AbstractClass *v38; // eax
  AbstractClass *v39; // edx
  _BYTE *v40; // ecx
  int v41; // edi
  int *ambientSoundController; // ebp
  int v43; // eax
  IUnknown *v44; // ecx
  int v45; // eax
  _DWORD *v46; // ebp
  CCINIClass *v47; // ebx
  AbstractClass *v48; // edi
  int v49; // eax
  BuildingClass *v50; // eax
  int v51; // edx
  _DWORD *Value; // eax
  int v53; // esi
  unsigned int v54; // eax
  bool v55; // [esp+8h] [ebp-DCh]
  bool v56; // [esp+9h] [ebp-DBh]
  bool v57; // [esp+Ah] [ebp-DAh]
  bool v58; // [esp+Bh] [ebp-D9h]
  CCINIClass *v59; // [esp+Ch] [ebp-D8h]
  CCINIClass *v60; // [esp+Ch] [ebp-D8h]
  CCINIClass *v61; // [esp+10h] [ebp-D4h]
  CCINIClass *v62; // [esp+14h] [ebp-D0h]
  CCINIClass *IndexByName; // [esp+18h] [ebp-CCh]
  CCINIClass *v64; // [esp+18h] [ebp-CCh]
  CCINIClass *v65; // [esp+1Ch] [ebp-C8h]
  CCINIClass *v66; // [esp+20h] [ebp-C4h]
  int v67; // [esp+24h] [ebp-C0h]
  int v68; // [esp+28h] [ebp-BCh]
  CCINIClass *v69; // [esp+2Ch] [ebp-B8h]
  int aP1; // [esp+30h] [ebp-B4h]
  int v71; // [esp+34h] [ebp-B0h]
  _DWORD v73[3]; // [esp+3Ch] [ebp-A8h] BYREF
  _DWORD v74[3]; // [esp+48h] [ebp-9Ch] BYREF
  _DWORD v75[3]; // [esp+54h] [ebp-90h] BYREF
  int v76; // [esp+60h] [ebp-84h] BYREF
  INIClass String[2]; // [esp+64h] [ebp-80h] BYREF

  v1 = this; /*0x44f827*/
  INIClass::ResetSection(this); /*0x44f82d*/
  memset(v73, 255, sizeof(v73)); /*0x44f83b*/
  result = INIClass::GetKeyCount(v1->__pad_0, (INIClass *)aStructures); /*0x44f84a*/
  v3 = 0; /*0x44f84f*/
  v71 = result; /*0x44f853*/
  v68 = 0; /*0x44f857*/
  if ( result > 0 ) /*0x44f85b*/
  {
    while ( 1 ) /*0x44f874*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v1->__pad_0, (CCINIClass *)aStructures, v3); /*0x44f874*/
      INIClass::GetString((unsigned __int8 ***)v1, (INIClass *)aStructures, StringByIndex, 0, String, 128); /*0x44f88f*/
      v5 = strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0); /*0x44f89e*/
      v6 = HouseClass::FindByName(v5); /*0x44f8a8*/
      if ( v6 != -1 ) /*0x44f8b0*/
      {
        v7 = *(CCINIClass **)&HouseClass_Array->__pad_0[4 * v6]; /*0x44f8bc*/
        v65 = v7; /*0x44f8c1*/
        if ( v7 ) /*0x44f8c5*/
        {
          if ( !MEMORY[0xA8B238] || v7 != (CCINIClass *)HouseClass_Player ) /*0x44f8db*/
          {
            v8 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x44f8e8*/
            IndexByName = (CCINIClass *)BuildingTypeClass::FindIndexByName(v8); /*0x44f8fa*/
            if ( IndexByName != (CCINIClass *)-1 ) /*0x44f8fe*/
            {
              v9 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x44f90b*/
              v61 = (CCINIClass *)atoi(v9); /*0x44f919*/
              if ( *(int *)&MEMORY[0xA8D63C].__pad_14B0[656] < 4 ) /*0x44f92c*/
              {
                v13 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x44f95e*/
                v14 = atoi(v13); /*0x44f964*/
                LOWORD(v66) = v14 % 128; /*0x44f97f*/
                HIWORD(v66) = v14 / 128; /*0x44f989*/
                v12 = v66; /*0x44f98e*/
              }
              else
              {
                v10 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x44f92e*/
                LOWORD(v69) = atoi(v10); /*0x44f940*/
                v11 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x44f945*/
                HIWORD(v69) = atoi(v11); /*0x44f950*/
                v12 = v69; /*0x44f955*/
              }
              v59 = v12; /*0x44f999*/
              v15 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x44f99d*/
              v67 = atoi(v15); /*0x44f9af*/
              v16 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x44f9bf*/
              v58 = 0; /*0x44f9c1*/
              v17 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x44f9c6*/
              if ( v17 ) /*0x44f9d0*/
                v58 = atoi(v17) != 0; /*0x44f9dd*/
              v57 = 0; /*0x44f9e9*/
              v18 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x44f9ee*/
              if ( v18 ) /*0x44f9f8*/
                v57 = atoi(v18) != 0; /*0x44fa05*/
              v55 = 1; /*0x44fa11*/
              v19 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x44fa16*/
              if ( v19 ) /*0x44fa20*/
                v55 = atoi(v19) != 0; /*0x44fa2d*/
              v62 = 0; /*0x44fa39*/
              v20 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x44fa41*/
              if ( v20 ) /*0x44fa4b*/
                v62 = (CCINIClass *)atoi(v20); /*0x44fa56*/
              aP1 = 1; /*0x44fa61*/
              v21 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x44fa69*/
              if ( v21 ) /*0x44fa73*/
                aP1 = atoi(v21); /*0x44fa7e*/
              v22 = (CCINIClass *)v73; /*0x44fa82*/
              v23 = 3; /*0x44fa86*/
              do /*0x44faab*/
              {
                v24 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x44fa92*/
                if ( v24 ) /*0x44fa9c*/
                  *(_DWORD *)v22->__pad_0 = BuildingTypeClass::FindIndexByName(v24); /*0x44faa5*/
                v22 = (CCINIClass *)((char *)v22 + 4); /*0x44faa7*/
                --v23; /*0x44faaa*/
              }
              while ( v23 ); /*0x44faab*/
              v56 = 0; /*0x44fab4*/
              v25 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x44fab9*/
              if ( v25 ) /*0x44fac3*/
                v56 = atoi(v25) != 0; /*0x44fad0*/
              v26 = 0; /*0x44fadc*/
              v27 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x44fade*/
              if ( v27 ) /*0x44fae8*/
                v26 = atoi(v27) != 0; /*0x44faf5*/
              v28 = __2_YAPAXI_Z(0x720u); /*0x44fafd*/
              if ( v28 ) /*0x44fb07*/
              {
                v29 = (TechnoClass *)BuildingClass::Construct( /*0x44fb27*/
                                       v28,
                                       *((AbstractClass **)g_TriggerTypeCount + (_DWORD)IndexByName),
                                       (AbstractClass *)v65);
                if ( v29 ) /*0x44fb2b*/
                {
                  v30 = (void *)ObjectTypeClass::FindByName(v16); /*0x44fb33*/
                  if ( v30 ) /*0x44fb3a*/
                  {
                    v31 = TeamClass::FindOrCreate(v30); /*0x44fb3e*/
                    if ( v31 ) /*0x44fb45*/
                      ObjectClass::SetReference(v29, v31); /*0x44fb4a*/
                  }
                  LOBYTE(v29[1].airstrikeTintTimer[1]) = v58; /*0x44fb5b*/
                  BYTE2(v29[1].ironTintStage) = v57; /*0x44fb61*/
                  HIBYTE(v29[1].ironTintStage) = v56; /*0x44fb70*/
                  BYTE1(v29[1].ironTintStage) = v26; /*0x44fb78*/
                  if ( (int)v61 >= 256 ) /*0x44fb7e*/
                    v61 = (CCINIClass *)256; /*0x44fb80*/
                  v32 = *(_DWORD *)v29[1].__pad_0; /*0x44fb88*/
                  v33 = Math::RoundToInt((double)(int)v61 * 0.00390625 * (double)*(int *)(v32 + 160)); /*0x44fb9a*/
                  v29->health = v33; /*0x44fb9f*/
                  v34 = *(_DWORD *)(v32 + 160); /*0x44fba2*/
                  if ( v33 > v34 - 3 ) /*0x44fbad*/
                    v29->health = v34; /*0x44fbaf*/
                  health = v29->health; /*0x44fbbc*/
                  v74[2] = 0; /*0x44fbbf*/
                  v29->estimatedHealth = health; /*0x44fbcf*/
                  v36 = *(_DWORD *)v29->__pad_0; /*0x44fbd5*/
                  v64 = (CCINIClass *)(((__int16)v59 << 8) + 128); /*0x44fbd7*/
                  v74[0] = v64; /*0x44fbdb*/
                  v60 = (CCINIClass *)((SHIWORD(v59) << 8) + 128); /*0x44fbe5*/
                  v74[1] = v60; /*0x44fbe9*/
                  if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *, _DWORD *, int))(v36 + 216))(v29, v74, v67) ) /*0x44fbf9*/
                  {
                    v37 = (_DWORD *)v29[1].radioLinks[0]; /*0x44fc07*/
                    if ( v37 ) /*0x44fc0f*/
                      BuildingLightClass::FindTarget(v37, (CCINIClass *)aP1); /*0x44fc16*/
                    if ( v55 ) /*0x44fc21*/
                    {
                      if ( !LOBYTE(v29[1].currentRank) && !v29->empLockRemaining ) /*0x44fc35*/
                      {
                        v38 = (AbstractClass *)v29->focus; /*0x44fc43*/
                        LOBYTE(v29[1].currentRank) = 1; /*0x44fc49*/
                        v29->needsRedraw = 1; /*0x44fc50*/
                        v38[622].__pad_0[0] = 1; /*0x44fc57*/
                        *((_BYTE *)v29->focus + 22393) = 1; /*0x44fc64*/
                        v39 = (AbstractClass *)v29->focus; /*0x44fc6b*/
                        v39[14].__pad_0[4] = 1; /*0x44fc71*/
                        v40 = (_BYTE *)v29[1].passengers[0]; /*0x44fc78*/
                        BYTE2(v29[1].isDeactivated) = 1; /*0x44fc80*/
                        if ( v40 ) /*0x44fc87*/
                          Trigger::EnableOnce(v40, 0); /*0x44fc8b*/
                        if ( *(_BYTE *)(*(_DWORD *)v29[1].__pad_0 + 5822) ) /*0x44fc96*/
                          BuildingClass::RepairPlacement(v29, 0); /*0x44fca4*/
                        v41 = 0; /*0x44fca9*/
                        ambientSoundController = v29[1].ambientSoundController; /*0x44fcab*/
                        do /*0x44fcda*/
                        {
                          if ( *(_BYTE *)(v41 + *(_DWORD *)v29[1].__pad_0 + 3980) && *ambientSoundController ) /*0x44fcc2*/
                            VtableStub::Method_425270((_BYTE *)*ambientSoundController); /*0x44fcc9*/
                          v41 += 68; /*0x44fcce*/
                          ++ambientSoundController; /*0x44fcd1*/
                        }
                        while ( v41 < 1428 ); /*0x44fcda*/
                        v43 = *(_DWORD *)v29[1].__pad_0; /*0x44fcdc*/
                        v44 = *(IUnknown **)(v43 + 3768); /*0x44fce2*/
                        if ( v44 ) /*0x44fcea*/
                        {
                          LOBYTE(v39) = *(_BYTE *)(v43 + 3278); /*0x44fcec*/
                          HouseClass::UpdateProduction((int)v29->focus, v44, v39, 0); /*0x44fcfc*/
                        }
                        if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v29->focus) ) /*0x44fd07*/
                          VoxClass::FindAndPlay(aEvaBuildingonl, -1, -1); /*0x44fd1a*/
                      }
                    }
                    else
                    {
                      BuildingClass::PowerOff((int)v29); /*0x44fd23*/
                    }
                    v45 = *(_DWORD *)v29[1].__pad_0; /*0x44fd28*/
                    v29->__pad_3F7[38] = 0; /*0x44fd2e*/
                    if ( *(_BYTE *)(v45 + 5458) && !LOBYTE(v29[1].airstrikeTimer[0]) ) /*0x44fd3f*/
                      BuildingClass::Deactivate((int)v29); /*0x44fd4b*/
                    if ( (int)v62 > 0 ) /*0x44fd56*/
                    {
                      v46 = v73; /*0x44fd5a*/
                      v47 = v62; /*0x44fd5e*/
                      do /*0x44fdc3*/
                      {
                        if ( *v46 != -1 ) /*0x44fd66*/
                        {
                          v48 = (AbstractClass *)*((_DWORD *)g_TriggerTypeCount + *v46); /*0x44fd73*/
                          v49 = __2_YAPAXI_Z(0x720u); /*0x44fd76*/
                          if ( v49 ) /*0x44fd80*/
                            v50 = BuildingClass::Construct(v49, v48, (AbstractClass *)v65); /*0x44fd8a*/
                          else
                            v50 = 0; /*0x44fd91*/
                          v75[0] = v64; /*0x44fd9b*/
                          v75[1] = v60; /*0x44fda8*/
                          v51 = *(_DWORD *)v50->__pad_0; /*0x44fdac*/
                          v75[2] = 0; /*0x44fdb1*/
                          (*(void (__thiscall **)(BuildingClass *, _DWORD *, int))(v51 + 216))(v50, v75, v67); /*0x44fdb9*/
                        }
                        ++v46; /*0x44fdbf*/
                        v47 = (CCINIClass *)((char *)v47 - 1); /*0x44fdc2*/
                      }
                      while ( v47 ); /*0x44fdc3*/
                    }
                    if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)v29->__pad_0 + 1020))(v29) /*0x44fde1*/
                      && (*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)v29->__pad_0 + 1020))(v29)
                      && v29[1].customSound_controller[4] )
                    {
                      Value = ProgressTimer::GetValue(&v29->target_laser_timer[2], (IUnknown *)&v76); /*0x44fdf6*/
                      v53 = v29[1].customSound_controller[4]; /*0x44fdfd*/
                      v54 = ((unsigned int)((*Value >> 10) + 1) >> 1) & 0x1F; /*0x44fe09*/
                      if ( v53 ) /*0x44fe0e*/
                      {
                        *(_DWORD *)(v53 + 172) = dword_7F4890[v54]; /*0x44fe17*/
                        *(_DWORD *)(v53 + 196) = 0; /*0x44fe1d*/
                      }
                    }
                  }
                  else
                  {
                    (*(void (__thiscall **)(TechnoClass *, int))(*(_DWORD *)v29->__pad_0 + 32))(v29, 1); /*0x44fe2f*/
                  }
                }
              }
            }
          }
        }
      }
      result = v71; /*0x44fe36*/
      v3 = (CCINIClass *)++v68; /*0x44fe3a*/
      if ( v68 >= v71 ) /*0x44fe41*/
        break; /*0x44fe41*/
      v1 = this; /*0x44f866*/
    }
  }
  return result; /*0x44fe4a*/
}


// ==== 0x0044FE60  ObjectClass::method_44FE60  this=INIClass  sig=csp ====
int __thiscall sub_44FE60(INIClass *this)
{
  int result; // eax
  int i; // esi
  int v4; // ecx

  INIClass::ClearSection((int)this, (INIClass *)aStructures, 0); /*0x44fe6c*/
  result = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[100]; /*0x44fe71*/
  for ( i = 0; i < *(int *)&MEMORY[0xA8D63C].__pad_14B0[100]; ++i ) /*0x44fe7a*/
  {
    v4 = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[88] + 4 * i); /*0x44fe82*/
    if ( !*(_BYTE *)(v4 + 129) && !*(_BYTE *)(*(_DWORD *)(v4 + 1312) + 5823) ) /*0x44fe95*/
      BuildingClass::ReadConstructionData(v4, this); /*0x44fea0*/
    result = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[100]; /*0x44fea5*/
  }
  return result; /*0x44feaf*/
}


// ==== 0x0044FEC0  BuildingClass::ReadConstructionData  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::ReadConstructionData(int this, INIClass *aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  const char *v7; // ebp
  _DWORD *Value; // eax
  INIClass *v9; // edi
  INIClass *v10; // ebx
  int v11; // eax
  double HealthRatio; // st7
  int v13; // eax
  _DWORD *v14; // ebx
  int v15; // ebp
  char *v16; // eax
  int v18; // [esp-24h] [ebp-D0h]
  int v19; // [esp-20h] [ebp-CCh]
  int v20; // [esp-1Ch] [ebp-C8h]
  int v21; // [esp-14h] [ebp-C0h]
  int v22; // [esp-10h] [ebp-BCh]
  int v23; // [esp-Ch] [ebp-B8h]
  int v24; // [esp-8h] [ebp-B4h]
  int v25; // [esp+10h] [ebp-9Ch]
  _BYTE v26[8]; // [esp+14h] [ebp-98h] BYREF
  int v27; // [esp+1Ch] [ebp-90h] BYREF
  char Buffer[12]; // [esp+20h] [ebp-8Ch] BYREF
  char Source[128]; // [esp+2Ch] [ebp-80h] BYREF

  v3 = (*(int (__stdcall **)(int))(*(_DWORD *)(this + 4) + 16))(this + 4); /*0x44fed3*/
  sprintf(Buffer, MEMORY[0x817F6C], v3); /*0x44fee1*/
  v4 = *(_DWORD *)(this + 1536); /*0x44fee6*/
  if ( v4 ) /*0x44fef1*/
    v25 = *(_DWORD *)(v4 + 220); /*0x44fef9*/
  else
    v25 = 0; /*0x44feff*/
  v5 = *(_DWORD *)(this + 52); /*0x44ff07*/
  if ( !v5 || (v6 = *(_DWORD *)(v5 + 36), v7 = (const char *)(v6 + 36), !v6) ) /*0x44ff16*/
    v7 = MEMORY[0x817F64]; /*0x44ff18*/
  Value = ProgressTimer::GetValue((_WORD *)(this + 904), (IUnknown *)&v27); /*0x44ff28*/
  v24 = *(char *)(this + 1794); /*0x44ff43*/
  v23 = *(unsigned __int8 *)(this + 1632); /*0x44ff53*/
  v22 = *(unsigned __int8 *)(this + 1738); /*0x44ff5f*/
  v21 = *(unsigned __int8 *)(this + 1756); /*0x44ff71*/
  v9 = (INIClass *)(*(_DWORD *)(this + 1312) + 36); /*0x44ff79*/
  v10 = (INIClass *)(*(_DWORD *)(this + 540) + 90100); /*0x44ff7c*/
  v11 = (*(int (__thiscall **)(int, _BYTE *, _DWORD))(this->airstrikeTintTimer)( /*0x44ff82*/
          this,
          v26,
          (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1));
  v18 = *(__int16 *)(*(int (__thiscall **)(int, int *, _DWORD))(this->airstrikeTintTimer)( /*0x44ff9f*/
                      this,
                      &v27,
                      *(__int16 *)(v11 + 2));
  HealthRatio = BuildingClass::GetHealthRatio((int *)this); /*0x44ffa2*/
  v13 = Math::RoundToInt(HealthRatio * 256.0 + 0.5); /*0x44ffb3*/
  sprintf(Source, MEMORY[0x8190E4], v10->__pad_0, v9->__pad_0, v13, v18, v19, v20, v7, v21, v22, v23, v24, v25); /*0x44ffc5*/
  v14 = (_DWORD *)(this + 1516); /*0x44ffcd*/
  v15 = 3; /*0x44ffd3*/
  do /*0x45000d*/
  {
    if ( *v14 ) /*0x44ffd8*/
      v16 = (char *)(*v14 + 36); /*0x44ffde*/
    else
      v16 = MEMORY[0x817F64]; /*0x44ffe3*/
    sprintf(&Source[strlen(Source)], MEMORY[0x8190E0], v16); /*0x450001*/
    ++v14; /*0x450009*/
    --v15; /*0x45000c*/
  }
  while ( v15 ); /*0x45000d*/
  sprintf(&Source[strlen(Source)], g_Str_Trace_, *(_BYTE *)(this + 1739) != 0); /*0x450035*/
  sprintf(&Source[strlen(Source)], g_Str_Trace_, *(_BYTE *)(this + 1737) != 0); /*0x450060*/
  return INIClass::SetString(aP1->__pad_0, (INIClass *)aStructures, (INIClass *)Buffer, (INIClass *)Source); /*0x450085*/
}

