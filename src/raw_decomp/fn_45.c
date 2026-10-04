// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x004500A0  BuildingClass::GetAdjustedExitCoords  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetAdjustedExitCoords(BuildingClass *this)
{
  _DWORD *v2; // eax
  int v3; // edi
  int v4; // ebx
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  _BYTE v9[12]; // [esp+Ch] [ebp-Ch] BYREF
  int *v10; // [esp+1Ch] [ebp+4h]

  v2 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass + 18))(this, v9); /*0x4500b1*/
  v3 = v2[1]; /*0x4500b6*/
  v4 = v2[2]; /*0x4500b9*/
  v5 = *v2 + this->Type->TargetCoordOffset[0]; /*0x4500cd*/
  v6 = this->Type->TargetCoordOffset[1]; /*0x4500cf*/
  v7 = this->Type->TargetCoordOffset[2]; /*0x4500d2*/
  *v10 = v5; /*0x4500db*/
  v10[1] = v3 + v6; /*0x4500dd*/
  v10[2] = v4 + v7; /*0x4500e0*/
  return (int)v10; /*0x4500e5*/
}



// ==== 0x004500F0  ObjectClass::ProcessAutoProduction  this=ObjectClass  sig=csp ====
void __thiscall ProcessAutoProduction(TechnoClass *this)
{
  ObjectClass *v2; // ecx
  int v3; // edx
  int v4; // eax
  _DWORD *Type; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  wchar_t *v10; // edi
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // edi
  int v16; // eax
  AbstractClass *v17; // ecx
  int owner; // eax
  int v19; // eax
  int v20; // edi
  char v21; // al
  TeamTypeClass *v22; // eax
  int v23; // eax
  bool v24; // al
  int v25; // eax
  int v26; // [esp+Ch] [ebp-Ch] BYREF
  int v27; // [esp+10h] [ebp-8h]
  int v28; // [esp+14h] [ebp-4h]

  v2 = (ObjectClass *)*((_DWORD *)this + 329); /*0x4500fa*/
  if ( !v2 || !(unsigned __int8)ObjectClass::IsCliffWall(v2) ) /*0x450108*/
    goto LABEL_19; /*0x45010f*/
  v3 = *((_DWORD *)this + 340); /*0x450115*/
  v4 = *((_DWORD *)this + 342); /*0x45011b*/
  if ( v3 == -1 ) /*0x450124*/
    goto LABEL_6; /*0x450124*/
  if ( (int)dword_A8ED84 - v3 < v4 ) /*0x450130*/
  {
    v4 -= (int)dword_A8ED84 - v3; /*0x450132*/
LABEL_6:
    if ( v4 ) /*0x450136*/
      goto LABEL_19; /*0x450136*/
  }
  Type = (_DWORD *)AbstractClass::GetType(*((AbstractClass **)this + 329)); /*0x45013c*/
  v6 = (*(int (__thiscall **)(TechnoClass *, _DWORD *, int))(this->vtable0 + 256))(this, Type, g_TerrainTypeTable); /*0x450155*/
  if ( !v6 ) /*0x45015d*/
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*Type + 44))(Type) == 6 && *(_BYTE *)(Type[328] + 3278) ) /*0x450211*/
      *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*Type + 60))(Type) + 496) = 0; /*0x450220*/
    BuildingClass::AbandonProduction(*((_DWORD *)this + 329)); /*0x45022c*/
    v13 = *((_DWORD *)this + 329); /*0x450231*/
    if ( v13 ) /*0x450239*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 32))(v13, 1); /*0x45023f*/
    goto LABEL_18; /*0x45023f*/
  }
  v7 = v6 - 1; /*0x450163*/
  if ( v7 ) /*0x450164*/
  {
    if ( v7 == 1 ) /*0x450167*/
    {
      v26 = this->location[0]; /*0x450176*/
      v8 = *((_DWORD *)this + 328); /*0x45017a*/
      v27 = this->location[1]; /*0x450183*/
      v28 = this->location[2]; /*0x45018a*/
      PlayAudioAt2(*(_DWORD *)(v8 + 3700), &v26, 0); /*0x450198*/
      HouseClass::ProcessPromotionSound(this->owner, Type); /*0x4501a4*/
      ProductionQueue::CompleteOrCancel(*((ProductionQueue **)this + 329)); /*0x4501af*/
      v9 = *((_DWORD *)this + 329); /*0x4501b4*/
      if ( v9 ) /*0x4501bc*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 32))(v9, 1); /*0x4501c6*/
LABEL_18:
      *((_DWORD *)this + 329) = 0; /*0x450242*/
    }
  }
  else
  {
    v10 = dword_A8ED84; /*0x4501d0*/
    LOWORD(v11) = Math::RoundToInt(*(double *)dword_8871E0->PlacementDelay * 900.0); /*0x4501e2*/
    v12 = v27; /*0x4501e7*/
    *((_DWORD *)this + 340) = v10; /*0x4501eb*/
    *((_DWORD *)this + 341) = v12; /*0x4501f1*/
    *((_DWORD *)this + 342) = v11; /*0x4501f7*/
  }
LABEL_19:
  if ( !*(_BYTE *)(this->owner + 494) /*0x450286*/
    || (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 388))(this) == 18
    || (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 388))(this) == 19
    || !*(_DWORD *)(*((_DWORD *)this + 328) + 3768) )
  {
    return; /*0x45028c*/
  }
  v14 = *((_DWORD *)this + 329); /*0x450292*/
  if ( v14 ) /*0x45029a*/
  {
    v15 = *((_DWORD *)this + 340); /*0x45029c*/
    v16 = *((_DWORD *)this + 342); /*0x4502a2*/
    if ( v15 != -1 ) /*0x4502ab*/
    {
      if ( (int)dword_A8ED84 - v15 >= v16 ) /*0x4502b7*/
      {
LABEL_28:
        if ( *(_DWORD *)(v14 + 56) && !*(_BYTE *)(v14 + 112) ) /*0x4502cb*/
          return; /*0x4502cb*/
        BuildingClass::AbandonProduction(v14); /*0x4502d1*/
        v17 = (AbstractClass *)*((_DWORD *)this + 329); /*0x4502d6*/
        goto LABEL_31; /*0x4502d6*/
      }
      v16 -= (int)dword_A8ED84 - v15; /*0x4502b9*/
    }
    if ( v16 ) /*0x4502bd*/
      return; /*0x4502bd*/
    goto LABEL_28; /*0x4502bd*/
  }
  owner = this->owner; /*0x4502f4*/
  if ( *(_BYTE *)(owner + 494) )
  {
    if ( (*(int (__stdcall **)(int))(*(_DWORD *)(owner + 36) + 24))(owner + 36) > 10 )
    {
      v19 = sub_4FBD80((ObjectClass *)this->owner, *(_DWORD *)(*((_DWORD *)this + 328) + 3768), 0); /*0x45032d*/
      v20 = v19; /*0x450332*/
      if ( v19 )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 44))(v19) != 40
          || ((v21 = *(_BYTE *)(*((_DWORD *)this + 328) + 3278)) == 0 || *(_BYTE *)(v20 + 3278))
          && (!*(_BYTE *)(v20 + 3278) || v21) )
        {
          v22 = (TeamTypeClass *)__2_YAPAXI_Z(0x74u); /*0x45036e*/
          v23 = v22 ? TeamTypeClass::Construct(v22) : 0;
          *((_DWORD *)this + 329) = v23; /*0x450387*/
          if ( v23 ) /*0x45038d*/
          {
            v24 = FactoryClass::DemandProduction(v23, v20, (#375 *)this->owner, 0); /*0x45039a*/
            v17 = (AbstractClass *)*((_DWORD *)this + 329); /*0x45039f*/
            if ( v24 ) /*0x4503a7*/
            {
              v25 = AbstractClass::GetType(v17); /*0x4503ad*/
              nullsub_100(v25); /*0x4503b9*/
              ProductionClass::StartTimer(*((_DWORD *)this + 329), 0); /*0x4503c5*/
              return; /*0x4503c5*/
            }
LABEL_31:
            if ( v17 ) /*0x4502de*/
              (*(void (__thiscall **)(AbstractClass *, int))(v17->vtable0 + 32))(v17, 1); /*0x4502e4*/
            *((_DWORD *)this + 329) = 0; /*0x4502e7*/
          }
        }
      }
    }
  }
}



// ==== 0x004503E0  nullsub_101  this=-  sig=ida-proto ====
void nullsub_101()
{
  ; /*0x4503e0*/
}



// ==== 0x004503F0  BuildingClass::UpdatePrism  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::UpdatePrism(BuildingClass *this)
{
  __int64 v2; // rax
  int v3; // ecx
  int v4; // eax
  int v5; // ecx

  LODWORD(v2) = this->PrismStage[0]; /*0x4503f3*/
  if ( (_DWORD)v2 ) /*0x4503fb*/
  {
    v3 = this->DelayBeforeFiring - 1; /*0x450408*/
    this->DelayBeforeFiring = v3; /*0x45040a*/
    if ( v3 <= 0 ) /*0x450412*/
    {
      v4 = v2 - 1; /*0x450418*/
      this->DelayBeforeFiring = 0; /*0x450419*/
      if ( v4 ) /*0x450423*/
      {
        LODWORD(v2) = v4 - 1; /*0x450425*/
        if ( !(_DWORD)v2 ) /*0x450426*/
        {
          LODWORD(v2) = BuildingClass::FireLaser( /*0x45044d*/
                          this,
                          this->PrismTargetCoords[0],
                          this->PrismTargetCoords[1],
                          this->PrismTargetCoords[2]);
          this->PrismStage[0] = 0; /*0x450452*/
          return v2; /*0x45045d*/
        }
      }
      else
      {
        LODWORD(v2) = this->?; /*0x45045e*/
        if ( (_DWORD)v2 ) /*0x450466*/
        {
          LODWORD(v2) = (*((int (__thiscall **)(BuildingClass *, _DWORD, int, int))this->TechnoClass + 240))( /*0x450476*/
                          this,
                          v2,
                          this->PrismTargetCoords[0],
                          1);
          if ( !(_DWORD)v2 ) /*0x45047e*/
          {
            LODWORD(v2) = (*((int (__thiscall **)(BuildingClass *, AbstractClass *, int))this->TechnoClass + 243))( /*0x450492*/
                            this,
                            this->?,
                            this->PrismTargetCoords[0]);
            v5 = v2; /*0x450498*/
            if ( (_DWORD)v2 ) /*0x45049c*/
            {
              LODWORD(v2) = this->SupportingPrisms; /*0x45049e*/
              if ( (_DWORD)v2 ) /*0x4504a6*/
              {
                v2 = 1374389535LL /*0x4504c2*/
                   * (unsigned int)(((_DWORD)v2 * *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1180) + 100) << 8);
                *(_DWORD *)(v5 + 336) = HIDWORD(v2) >> 5; /*0x4504c7*/
                this->SupportingPrisms = 0; /*0x4504cd*/
              }
            }
          }
        }
      }
      this->PrismStage[0] = 0; /*0x4504d7*/
    }
  }
  return v2; /*0x45045c*/
}



// ==== 0x00450630  BuildingClass::ProcessActiveAnimation  this=BuildingClass  sig=csp ====
char __usercall BuildingClass::ProcessActiveAnimation@<al>(BuildingClass *this, double a2@<st0>)
{
  BuildingClass *v2; // ecx
  BuildingClass *v3; // esi
  House *owner; // ecx
  int v6; // eax
  int v7; // ebp
  int v8; // eax
  int v9; // eax
  char *pad_280; // edx
  int v13; // eax
  int v15; // eax
  int v16; // et2
  BuildingTypeClass *Type; // ecx
  int v18; // edi
  int v19; // ebp
  BuildingTypeClass *v20; // edx
  int v21; // ebx
  int v22; // edi
  int Strength; // eax
  BOOL v25; // ebx
  int v26; // ebp
  int v27; // edi
  int *v28; // eax
  ParticleSystemClass *damageParticles; // ecx
  int *Anims; // [esp+10h] [ebp-14h]
  int ProductionFrame; // [esp+14h] [ebp-10h]
  int v35; // [esp+1Ch] [ebp-8h]

  v3 = v2; /*0x45063c*/
  if ( v2->?->iqLevel2 < *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5188) /*0x450683*/
    || (*((int (**)(void))v2->TechnoClass + 97))() == 18
    || (*((int (__thiscall **)(BuildingClass *))v3->TechnoClass + 97))(v3) == 19
    || !(*((unsigned __int8 (__thiscall **)(BuildingClass *))v3->TechnoClass + 37))(v3) )
  {
    goto LABEL_22; /*0x45068b*/
  }
  if ( (*(int (__stdcall **)(int *))(v3->?->arrayIndex + 24))(&v3->?->arrayIndex) < *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] /*0x4506ac*/
                                                                                              + 5976) )
  {
    if ( *(_DWORD *)&dword_A8B238 || v3->BuildingClass_field_bool_6DC ) /*0x45078a*/
    {
      if ( v3->? ) /*0x450794*/
      {
        if ( *(_DWORD *)&v3->?->__pad_13C[148] >= *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5212) /*0x4507eb*/
          && (unsigned int)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 50) < *(_DWORD *)&v3->?->__pad_13C[152]
          && !v3->?
          && v3->Type->Factory[0] != 7 )
        {
          BuildingClass::GetHealthRatio(v3); /*0x4507ef*/
          _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4507f4*/
          __asm /*0x4507fa*/
          {
            fcomp qword ptr [ecx+1708h]
            fnstsw ax
          }
          if ( (_AX & 0x100) != 0 ) /*0x450805*/
            (*((void (__thiscall **)(BuildingClass *, int))v3->TechnoClass + 104))(v3, 1); /*0x45080d*/
        }
      }
    }
LABEL_22:
    LOBYTE(v13) = v3->IsBeingRepaired; /*0x450813*/
    if ( !(_BYTE)v13 ) /*0x45081b*/
      return v13; /*0x45081b*/
    goto LABEL_23; /*0x45081b*/
  }
  owner = (House *)v3->?; /*0x4506b2*/
  if ( owner->__pad_1F0[85] ) /*0x4506b8*/
    goto LABEL_22; /*0x4506c0*/
  if ( !v3->IsBeingRepaired ) /*0x4506c6*/
  {
    if ( v3->HasBeenCaptured || v3->__pad_6B8[19] || (unsigned __int8)House::IsCurrentPlayer(owner) ) /*0x4506e8*/
    {
      v3->?->repairing = 1; /*0x4506ff*/
      (*((void (__thiscall **)(BuildingClass *, int))v3->TechnoClass + 103))(v3, 1); /*0x450708*/
      if ( !(unsigned __int8)House::IsCurrentPlayer((House *)v3->?) ) /*0x450714*/
      {
        _EDI = v3->?; /*0x450721*/
        __asm /*0x450727*/
        {
          fld qword ptr [edi+1C0h]
          fmul ds:dbl_7E44B8
        }
        LOWORD(v6) = Math::RoundToInt(a2); /*0x450733*/
        __asm /*0x450738*/
        {
          fld qword ptr [edi+1C0h]
          fmul ds:dbl_7E44B0
        }
        v7 = v6; /*0x450744*/
        LOWORD(v8) = Math::RoundToInt(a2); /*0x450746*/
        v9 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, v8, v7); /*0x450759*/
        pad_280 = v3->?->__pad_280; /*0x45076a*/
        *(_DWORD *)pad_280 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x450770*/
        *((_DWORD *)pad_280 + 1) = v35; /*0x450776*/
        *((_DWORD *)pad_280 + 2) = v9; /*0x450779*/
      }
    }
    goto LABEL_22; /*0x45077c*/
  }
LABEL_23:
  _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x450821*/
  __asm /*0x450826*/
  {
    fld qword ptr [eax+16E0h]
    fmul ds:dbl_7E27F8
  }
  LOWORD(v15) = Math::RoundToInt(a2); /*0x450832*/
  v16 = *(_DWORD *)&stru_A8EB00.?[416] % v15; /*0x45083f*/
  v13 = *(_DWORD *)&stru_A8EB00.?[416] / v15; /*0x45083f*/
  if ( !v16 )
  {
    Type = v3->Type; /*0x45084f*/
    v3->NeedsRepairs = v3->NeedsRepairs == 0; /*0x45085a*/
    v18 = (*((int (__thiscall **)(BuildingTypeClass *))Type->TechnoTypeClass + 44))(Type); /*0x45086e*/
    v19 = (*((int (__thiscall **)(BuildingTypeClass *))v3->Type->TechnoTypeClass + 45))(v3->Type); /*0x45087a*/
    ProductionFrame = BuildingClass::GetProductionFrame(v3); /*0x450881*/
    v13 = (*(int (__stdcall **)(int *))(v3->?->arrayIndex + 24))(&v3->?->arrayIndex); /*0x450891*/
    if ( v13 < v18 )
    {
      v3->IsBeingRepaired = 0; /*0x4509b4*/
    }
    else
    {
      HouseClass::ProcessPowerDrain((int *)v3->?, v18); /*0x4508a3*/
      v20 = v3->Type; /*0x4508ae*/
      v21 = v19 + v3->?; /*0x4508b4*/
      v22 = v19 + v3->?; /*0x4508b6*/
      v3->? = v21; /*0x4508b8*/
      v3->? = v22; /*0x4508bb*/
      Strength = v20->?; /*0x4508be*/
      if ( v21 >= Strength ) /*0x4508c8*/
      {
        v3->? = Strength; /*0x4508ca*/
        v3->? = Strength; /*0x4508cd*/
        v3->IsBeingRepaired = 0; /*0x4508d0*/
      }
      BuildingClass::GetHealthRatio(v3); /*0x4508d9*/
      _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4508de*/
      __asm /*0x4508e3*/
      {
        fcomp qword ptr [eax+1700h]
        fnstsw ax
      }
      v25 = (_EAX & 0x4100) != 0; /*0x4508ee*/
      if ( v3->IsDamaged != v25 )
      {
        v26 = 0; /*0x450907*/
        v3->IsDamaged = v25; /*0x450909*/
        v27 = 0; /*0x45090f*/
        Anims = v3->Anims; /*0x450911*/
        do
        {
          if ( *Anims )
          {
            v28 = v25 ? &v3->Type->BuildingAnim[v27 + 16] : &v3->Type->BuildingAnim[v27 + 12];
            if ( v28 && *(_BYTE *)v28 ) /*0x450942*/
              BuildingClass::PlayAnim(v3, (int)Anims, v28, v26, v25, 0, 0); /*0x450950*/
          }
          v27 += 17; /*0x450959*/
          ++v26; /*0x45095c*/
          ++Anims; /*0x450966*/
        }
        while ( v27 < 357 );
      }
      BuildingClass::GetHealthRatio(v3); /*0x45096e*/
      _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x450973*/
      __asm /*0x450979*/
      {
        fcomp qword ptr [edx+1700h]
        fnstsw ax
      }
      if ( (_AX & 0x4100) == 0 ) /*0x450984*/
      {
        damageParticles = v3->?; /*0x450986*/
        if ( damageParticles ) /*0x45098e*/
          (*((void (__thiscall **)(ParticleSystemClass *))damageParticles->ObjectClass + 62))(damageParticles); /*0x450992*/
      }
      v13 = BuildingClass::GetProductionFrame(v3); /*0x45099a*/
      if ( v13 != ProductionFrame ) /*0x4509a3*/
        v3->? = 1; /*0x4509a5*/
    }
  }
  return v13; /*0x4509ac*/
}



// ==== 0x004509D0  BuildingClass::UpdateAnimFrames  this=BuildingClass  sig=csp ====
char __usercall BuildingClass::UpdateAnimFrames@<al>(BuildingClass *this, double a2@<st0>)
{
  Locomotor *v2; // ecx
  Locomotor *v3; // esi
  Locomotor *v4; // edi
  int v5; // ecx
  int Locomotor_field_00; // eax
  int v7; // edx
  int v8; // edx
  int v9; // edi
  __int64 v10; // rax
  unsigned __int16 v11; // ax
  int v14; // ecx
  _BYTE *v15; // eax
  int v16; // eax
  BOOL v18; // ebx
  bool v19; // al
  int v20; // edx
  _BYTE *v21; // eax
  bool v22; // zf
  int v23; // eax
  BOOL v26; // ebx
  bool v27; // al
  int v28; // edx
  _BYTE *v29; // eax
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  int v35; // edi
  int v36; // eax
  int v37; // edx
  int v39; // ecx
  _BYTE *v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // eax
  int v48; // ecx
  _BYTE *v49; // eax
  int v50; // edx
  int v52; // ecx
  _BYTE *v53; // eax
  int v54; // edx
  int v57; // ecx
  _BYTE *v58; // eax
  int v61; // ecx
  _BYTE *v62; // eax
  int v65; // eax
  int v66; // ebx
  _DWORD *v68; // eax
  int v69; // edx
  int v70; // ecx
  int v72; // edx
  int v74; // ecx
  _BYTE *v75; // eax
  int v76; // edx
  int v79; // ecx
  _BYTE *v80; // eax
  int v81; // ecx
  _DWORD *v82; // edi
  _DWORD *Value; // eax
  int v84; // ecx
  unsigned int v85; // eax
  char result; // al
  unsigned int v87; // eax
  int *v88; // edi
  char *ProductionTimeMult; // eax
  int v90; // eax
  char v91; // [esp+Eh] [ebp-12h]
  char v92; // [esp+Fh] [ebp-11h]
  int v93; // [esp+10h] [ebp-10h] BYREF
  int v94; // [esp+18h] [ebp-8h]

  v3 = v2; /*0x4509db*/
  v4 = v2 + 64; /*0x4509de*/
  if ( Locomotor::GetSpeed(v2 + 64) || (v5 = v3[67].Locomotor_field_00) == 0 ) /*0x4509f7*/
  {
    LOBYTE(v3[63].Locomotor_field_00) = 0; /*0x450a2c*/
    v91 = 0; /*0x450a33*/
  }
  else
  {
    Locomotor_field_00 = v3[68].Locomotor_field_00; /*0x4509f9*/
    v7 = v3[62].Locomotor_field_00; /*0x4509ff*/
    LOBYTE(v3[63].Locomotor_field_00) = 1; /*0x450a07*/
    v3[62].Locomotor_field_00 = Locomotor_field_00 + v7; /*0x450a0e*/
    v8 = v94; /*0x450a19*/
    v4->Locomotor_field_00 = *(int *)&stru_A8EB00.?[416]; /*0x450a1d*/
    v4[1].Locomotor_field_00 = v8; /*0x450a1f*/
    v4[2].Locomotor_field_00 = v5; /*0x450a22*/
    v91 = 1; /*0x450a25*/
  }
  v92 = 0; /*0x450a3c*/
  v9 = (*(int (__thiscall **)(Locomotor *))(v3->Locomotor_field_00 + 484))(v3); /*0x450a4b*/
  v10 = ((__int64 (__thiscall *)(Locomotor *))*(_DWORD *)(v3->Locomotor_field_00 + 444))(v3); /*0x450a4d*/
  v11 = globalHelper_056FB0(v3, SHIDWORD(v10), *(__int16 *)(v10 + 266)); /*0x450a5d*/
  LOWORD(v3[448].Locomotor_field_00) = v11; /*0x450a62*/
  BuildingClass::SyncCrateVisuals((char *)v3, v9, v11); /*0x450a72*/
  BuildingClass::SetConnectedBuildingMission((BuildingClass *)v3, SBYTE1(v3[443].Locomotor_field_00)); /*0x450a81*/
  if ( *(_BYTE *)(v3[328].Locomotor_field_00 + 5801) /*0x450ac7*/
    && (*(int (__thiscall **)(Locomotor *))(v3->Locomotor_field_00 + 388))(v3) != 20
    && (v3[351].Locomotor_field_00 || v3[354].Locomotor_field_00)
    && !*(_BYTE *)(v3[328].Locomotor_field_00 + 3278) )
  {
    BuildingClass::GetHealthRatio((BuildingClass *)v3); /*0x450ad3*/
    _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x450ad8*/
    __asm /*0x450ade*/
    {
      fcomp qword ptr [edx+1700h]
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x450ae9*/
    {
      v14 = 1; /*0x450af1*/
      v15 = (_BYTE *)(v3[328].Locomotor_field_00 + 4748); /*0x450af6*/
    }
    else
    {
      v14 = 0; /*0x450b03*/
      v15 = (_BYTE *)(v3[328].Locomotor_field_00 + 4732); /*0x450b05*/
    }
    if ( v15 && *v15 ) /*0x450b0e*/
      BuildingClass::PlayAnim(v3, *(int *)&DSurface_ViewBounds.__pad_FC[324], v15, 12, v14, 0, 0); /*0x450b1d*/
    BuildingClass::ClearAnims((BuildingClass *)v3, 8); /*0x450b26*/
    BuildingClass::ClearAnims((BuildingClass *)v3, 11); /*0x450b2f*/
  }
  v16 = v3[328].Locomotor_field_00; /*0x450b34*/
  if ( *(int *)(v16 + 3816) > 0
    && *(_BYTE *)(v16 + 5807)
    && LOBYTE(v3[441].Locomotor_field_00)
    && v3[333].Locomotor_field_00 )
  {
    if ( HouseClass::SumPowerDrain((HouseClass *)&v3[69]) <= 0 )
    {
      if ( v3[347].Locomotor_field_00 ) /*0x450c22*/
        BuildingClass::ClearAnims((BuildingClass *)v3, 4); /*0x450c30*/
      if ( !v3[346].Locomotor_field_00 )
      {
        BuildingClass::GetHealthRatio((BuildingClass *)v3); /*0x450c41*/
        _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x450c46*/
        __asm /*0x450c4c*/
        {
          fcomp qword ptr [edx+1700h]
          fnstsw ax
        }
        v26 = (_AX & 0x4100) != 0; /*0x450c57*/
        v27 = (*(int (__thiscall **)(Locomotor *))(v3->Locomotor_field_00 + 1032))(v3) > 0; /*0x450c6e*/
        LOBYTE(v93) = v27; /*0x450c73*/
        if ( v26 )
        {
          v29 = (_BYTE *)(v3[328].Locomotor_field_00 + 4136); /*0x450c7f*/
        }
        else
        {
          v22 = !v27; /*0x450c86*/
          v30 = v3[328].Locomotor_field_00; /*0x450c88*/
          v29 = (_BYTE *)(v22 ? v30 + 4120 : v30 + 4152);
        }
        if ( v29 && *v29 ) /*0x450ca0*/
          BuildingClass::PlayAnim(v3, v28, v29, 3, v26, v93, 0); /*0x450cb2*/
      }
    }
    else
    {
      if ( v3[346].Locomotor_field_00 ) /*0x450b85*/
        BuildingClass::ClearAnims((BuildingClass *)v3, 3); /*0x450b93*/
      if ( !v3[347].Locomotor_field_00 )
      {
        BuildingClass::GetHealthRatio((BuildingClass *)v3); /*0x450ba8*/
        _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x450bad*/
        __asm /*0x450bb2*/
        {
          fcomp qword ptr [eax+1700h]
          fnstsw ax
        }
        v18 = (_EAX & 0x4100) != 0; /*0x450bbd*/
        v19 = (*(int (__thiscall **)(Locomotor *))(v3->Locomotor_field_00 + 1032))(v3) > 0; /*0x450bd4*/
        LOBYTE(v93) = v19; /*0x450bd9*/
        if ( v18 )
        {
          v21 = (_BYTE *)(v3[328].Locomotor_field_00 + 4204); /*0x450be5*/
        }
        else
        {
          v22 = !v19; /*0x450bec*/
          v23 = v3[328].Locomotor_field_00; /*0x450bee*/
          v21 = (_BYTE *)(v22 ? v23 + 4188 : v23 + 4220);
        }
        if ( v21 && *v21 ) /*0x450c0a*/
          BuildingClass::PlayAnim(v3, v20, v21, 4, v18, v93, 0); /*0x450c1d*/
      }
    }
  }
  v31 = v3[328].Locomotor_field_00; /*0x450cb7*/
  if ( *(_BYTE *)(v31 + 5800) ) /*0x450cbd*/
  {
    v32 = 0; /*0x450cd1*/
    if ( *(int *)(v31 + 2048) <= 0 ) /*0x450cd5*/
      goto LABEL_49; /*0x450cd5*/
    Float4::Sum(&v3[207].Locomotor_field_00); /*0x450cdd*/
    LOWORD(v33) = Math::RoundToInt(a2); /*0x450ce2*/
    _EDX = v3[328].Locomotor_field_00; /*0x450ce7*/
    v93 = 4 * v33; /*0x450cf0*/
    __asm /*0x450cf4*/
    {
      fild [esp+20h+var_10]
      fidiv dword ptr [edx+800h]
      fadd ds:dbl_7E1738
    }
    LOWORD(v32) = Math::RoundToInt(a2); /*0x450d04*/
    if ( v32 < 0 ) /*0x450d0b*/
    {
      v35 = 0; /*0x450d0d*/
      goto LABEL_50; /*0x450d0f*/
    }
    v35 = 3; /*0x450d14*/
    if ( v32 <= 3 ) /*0x450d19*/
LABEL_49:
      v35 = v32; /*0x450d1b*/
LABEL_50:
    v36 = v3[353].Locomotor_field_00; /*0x450d1d*/
    if ( v35 ) /*0x450d25*/
    {
      if ( !v36 ) /*0x450d29*/
      {
        BuildingClass::GetHealthRatio((BuildingClass *)v3); /*0x450d2d*/
        _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x450d32*/
        __asm /*0x450d37*/
        {
          fcomp qword ptr [eax+1700h]
          fnstsw ax
        }
        if ( (_EAX & 0x4100) != 0 ) /*0x450d42*/
        {
          v39 = 1; /*0x450d4a*/
          v40 = (_BYTE *)(v3[328].Locomotor_field_00 + 4612); /*0x450d4f*/
        }
        else
        {
          v39 = 0; /*0x450d5c*/
          v40 = (_BYTE *)(v3[328].Locomotor_field_00 + 4596); /*0x450d5e*/
        }
        if ( v40 && *v40 ) /*0x450d67*/
          BuildingClass::PlayAnim(v3, v37, v40, 10, v39, 0, 0); /*0x450d76*/
      }
      *(_DWORD *)(v3[353].Locomotor_field_00 + 172) = v35; /*0x450d81*/
    }
    else if ( v36 ) /*0x450d8b*/
    {
      BuildingClass::ClearAnims((BuildingClass *)v3, 10); /*0x450d91*/
    }
  }
  if ( *(_BYTE *)(v3[328].Locomotor_field_00 + 5819) ) /*0x450d9c*/
  {
    Float4::Sum(&v3[207].Locomotor_field_00); /*0x450db2*/
    LOWORD(v41) = Math::RoundToInt(a2); /*0x450db7*/
    if ( v41 ) /*0x450dbe*/
    {
      Float4::Sum(&v3[207].Locomotor_field_00); /*0x450dc2*/
      LOWORD(v42) = Math::RoundToInt(a2); /*0x450dc7*/
      v41 = 4 * v42 / *(_DWORD *)(v3[328].Locomotor_field_00 + 2048); /*0x450dd6*/
    }
    v43 = v3[444].Locomotor_field_00; /*0x450ddc*/
    if ( v43 != v41 ) /*0x450de4*/
    {
      if ( v43 < 3 ) /*0x450ded*/
      {
        if ( v43 < 2 ) /*0x450df6*/
        {
          if ( v43 < 1 ) /*0x450dff*/
          {
            if ( v43 >= 0 ) /*0x450e07*/
              BuildingClass::ClearAnims((BuildingClass *)v3, 3); /*0x450e0d*/
          }
          else
          {
            BuildingClass::ClearAnims((BuildingClass *)v3, 4); /*0x450e03*/
          }
        }
        else
        {
          BuildingClass::ClearAnims((BuildingClass *)v3, 5); /*0x450dfa*/
        }
      }
      else
      {
        BuildingClass::ClearAnims((BuildingClass *)v3, 6); /*0x450df1*/
      }
      Float4::Sum(&v3[207].Locomotor_field_00); /*0x450e14*/
      LOWORD(v44) = Math::RoundToInt(a2); /*0x450e19*/
      if ( v44 ) /*0x450e20*/
      {
        Float4::Sum(&v3[207].Locomotor_field_00); /*0x450e24*/
        LOWORD(v45) = Math::RoundToInt(a2); /*0x450e29*/
        v44 = 4 * v45 / *(_DWORD *)(v3[328].Locomotor_field_00 + 2048); /*0x450e38*/
      }
      v3[444].Locomotor_field_00 = v44; /*0x450e41*/
      if ( v44 < 3 ) /*0x450e47*/
      {
        if ( v44 < 2 ) /*0x450ea2*/
        {
          if ( v44 < 1 ) /*0x450efc*/
          {
            if ( v44 >= 0 ) /*0x450f4b*/
            {
              BuildingClass::GetHealthRatio((BuildingClass *)v3); /*0x450f4f*/
              _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x450f54*/
              __asm /*0x450f5a*/
              {
                fcomp qword ptr [edx+1700h]
                fnstsw ax
              }
              if ( (_AX & 0x4100) != 0 ) /*0x450f65*/
              {
                v61 = 1; /*0x450f6d*/
                v62 = (_BYTE *)(v3[328].Locomotor_field_00 + 4136); /*0x450f72*/
              }
              else
              {
                v61 = 0; /*0x450f7f*/
                v62 = (_BYTE *)(v3[328].Locomotor_field_00 + 4120); /*0x450f81*/
              }
              if ( v62 && *v62 ) /*0x450f8a*/
                BuildingClass::PlayAnim(v3, *(int *)&DSurface_ViewBounds.__pad_FC[324], v62, 3, v61, 0, 0); /*0x450f99*/
            }
          }
          else
          {
            BuildingClass::GetHealthRatio((BuildingClass *)v3); /*0x450f00*/
            _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x450f05*/
            __asm /*0x450f0b*/
            {
              fcomp qword ptr [ecx+1700h]
              fnstsw ax
            }
            if ( (_AX & 0x4100) != 0 ) /*0x450f16*/
            {
              v57 = 1; /*0x450f1e*/
              v58 = (_BYTE *)(v3[328].Locomotor_field_00 + 4204); /*0x450f23*/
            }
            else
            {
              v57 = 0; /*0x450f30*/
              v58 = (_BYTE *)(v3[328].Locomotor_field_00 + 4188); /*0x450f32*/
            }
            if ( v58 && *v58 ) /*0x450f3b*/
              BuildingClass::PlayAnim(v3, v54, v58, 4, v57, 0, 0); /*0x450f47*/
          }
        }
        else
        {
          BuildingClass::GetHealthRatio((BuildingClass *)v3); /*0x450ea6*/
          _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x450eab*/
          __asm /*0x450eb0*/
          {
            fcomp qword ptr [eax+1700h]
            fnstsw ax
          }
          if ( (_EAX & 0x4100) != 0 ) /*0x450ebb*/
          {
            v52 = 1; /*0x450ec3*/
            v53 = (_BYTE *)(v3[328].Locomotor_field_00 + 4272); /*0x450ec8*/
          }
          else
          {
            v52 = 0; /*0x450ed5*/
            v53 = (_BYTE *)(v3[328].Locomotor_field_00 + 4256); /*0x450ed7*/
          }
          if ( v53 && *v53 ) /*0x450ee4*/
            BuildingClass::PlayAnim(v3, v50, v53, 5, v52, 0, 0); /*0x450ef4*/
        }
      }
      else
      {
        BuildingClass::GetHealthRatio((BuildingClass *)v3); /*0x450e4b*/
        _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x450e50*/
        __asm /*0x450e56*/
        {
          fcomp qword ptr [edx+1700h]
          fnstsw ax
        }
        if ( (_AX & 0x4100) != 0 ) /*0x450e61*/
        {
          v48 = 1; /*0x450e69*/
          v49 = (_BYTE *)(v3[328].Locomotor_field_00 + 4340); /*0x450e6e*/
        }
        else
        {
          v48 = 0; /*0x450e7b*/
          v49 = (_BYTE *)(v3[328].Locomotor_field_00 + 4324); /*0x450e7d*/
        }
        if ( v49 && *v49 ) /*0x450e8a*/
          BuildingClass::PlayAnim(v3, *(int *)&DSurface_ViewBounds.__pad_FC[324], v49, 6, v48, 0, 0); /*0x450e9a*/
      }
    }
  }
  if ( *(_DWORD *)(v3[328].Locomotor_field_00 + 5872) != -1 /*0x450fd1*/
    && (*(int (__thiscall **)(Locomotor *))(v3->Locomotor_field_00 + 388))(v3) != 18
    && (*(int (__thiscall **)(Locomotor *))(v3->Locomotor_field_00 + 388))(v3) != 19 )
  {
    _ECX = v3[328].Locomotor_field_00; /*0x450fd7*/
    __asm /*0x450fdd*/
    {
      fld dword ptr [ecx+16E8h]
      fcomp ds:flt_7E44C4
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x450fee*/
    {
      v65 = v3[135].Locomotor_field_00; /*0x450ff4*/
      v66 = 0; /*0x450ffa*/
      if ( *(int *)(v65 + 612) > 0 ) /*0x451004*/
      {
        while ( 1 ) /*0x451010*/
        {
          _EDI = v3[328].Locomotor_field_00; /*0x451010*/
          v68 = *(_DWORD **)(*(_DWORD *)(v65 + 600) + 4 * v66); /*0x451016*/
          if ( *(_DWORD *)(v68[10] + 180) == *(_DWORD *)(_EDI + 5872) ) /*0x45102a*/
            break; /*0x45102a*/
LABEL_129:
          v65 = v3[135].Locomotor_field_00; /*0x451132*/
          if ( ++v66 >= *(_DWORD *)(v65 + 612) ) /*0x45113f*/
            goto LABEL_130; /*0x45113f*/
        }
        v69 = v68[12]; /*0x451030*/
        v70 = v68[14]; /*0x451033*/
        if ( v69 != -1 ) /*0x451039*/
        {
          if ( *(_DWORD *)&stru_A8EB00.?[416] - v69 >= v70 ) /*0x451044*/
          {
            v93 = 0; /*0x4510a5*/
LABEL_113:
            __asm /*0x45104c*/
            {
              fild [esp+20h+var_10]
              fmul ds:flt_7E44C0
              fcomp dword ptr [edi+16E8h]
              fnstsw ax
            }
            if ( (_AX & 0x4100) != 0 ) /*0x451061*/
            {
              if ( v3[357].Locomotor_field_00 ) /*0x451063*/
              {
                BuildingClass::ClearAnims((BuildingClass *)v3, 14); /*0x451075*/
                BuildingClass::GetHealthRatio((BuildingClass *)v3); /*0x45107c*/
                _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x451081*/
                __asm /*0x451086*/
                {
                  fcomp qword ptr [eax+1700h]
                  fnstsw ax
                }
                if ( (_EAX & 0x4100) != 0 ) /*0x451091*/
                {
                  v74 = 1; /*0x451099*/
                  v75 = (_BYTE *)(v3[328].Locomotor_field_00 + 4952); /*0x45109e*/
                }
                else
                {
                  v74 = 0; /*0x4510b5*/
                  v75 = (_BYTE *)(v3[328].Locomotor_field_00 + 4936); /*0x4510b7*/
                }
                if ( v75 && *v75 ) /*0x4510c0*/
                  BuildingClass::PlayAnim(v3, v72, v75, 15, v74, 0, 0); /*0x4510cc*/
              }
            }
            else if ( v3[359].Locomotor_field_00 ) /*0x4510ce*/
            {
              BuildingClass::ClearAnims((BuildingClass *)v3, 16); /*0x4510dc*/
              BuildingClass::GetHealthRatio((BuildingClass *)v3); /*0x4510e3*/
              _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4510e8*/
              __asm /*0x4510ee*/
              {
                fcomp qword ptr [ecx+1700h]
                fnstsw ax
              }
              if ( (_AX & 0x4100) != 0 ) /*0x4510f9*/
              {
                v79 = 1; /*0x451101*/
                v80 = (_BYTE *)(v3[328].Locomotor_field_00 + 5088); /*0x451106*/
              }
              else
              {
                v79 = 0; /*0x451113*/
                v80 = (_BYTE *)(v3[328].Locomotor_field_00 + 5072); /*0x451115*/
              }
              if ( v80 && *v80 ) /*0x45111e*/
                BuildingClass::PlayAnim(v3, v76, v80, 17, v79, 0, 0); /*0x45112d*/
            }
            goto LABEL_129; /*0x4510cc*/
          }
          v70 -= *(_DWORD *)&stru_A8EB00.?[416] - v69; /*0x451046*/
        }
        v93 = v70; /*0x451048*/
        goto LABEL_113; /*0x451048*/
      }
    }
  }
LABEL_130:
  if ( !(*(unsigned __int8 (__thiscall **)(Locomotor *))(v3->Locomotor_field_00 + 1020))(v3) /*0x45116f*/
    || (*(int (__thiscall **)(Locomotor *))(v3->Locomotor_field_00 + 388))(v3) == 18
    || (*(int (__thiscall **)(Locomotor *))(v3->Locomotor_field_00 + 388))(v3) == 19 )
  {
    if ( v91 ) /*0x45117b*/
    {
      v81 = v3[328].Locomotor_field_00; /*0x451187*/
      v82 = (_DWORD *)(v81 + 12 * v3[333].Locomotor_field_00 + 3844); /*0x451197*/
      if ( v3[62].Locomotor_field_00 == *(_DWORD *)(v81 + 12 * v3[333].Locomotor_field_00 + 3848) + *v82 - 1 /*0x4511dd*/
        || !v3[134].Locomotor_field_00
        && *(_DWORD *)(v81 + 1032)
        && (*(int (__thiscall **)(Locomotor *))(v3->Locomotor_field_00 + 388))(v3) == 19
        && v3[62].Locomotor_field_00 == 23 )
      {
        BYTE1(v3[439].Locomotor_field_00) = 1; /*0x4511df*/
      }
      if ( v3[62].Locomotor_field_00 >= *v82 + v82[1] ) /*0x4511f5*/
        v92 = 1; /*0x4511f7*/
      LOBYTE(v3[32].Locomotor_field_00) = 1; /*0x4511fc*/
    }
    else if ( v3[333].Locomotor_field_00 == -1 || !v3[67].Locomotor_field_00 ) /*0x45120e*/
    {
      BYTE1(v3[439].Locomotor_field_00) = 1; /*0x451218*/
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(Locomotor *))(v3->Locomotor_field_00 + 352))(v3) ) /*0x451223*/
    LOBYTE(v3[32].Locomotor_field_00) = 1; /*0x45122d*/
  if ( (*(unsigned __int8 (__thiscall **)(Locomotor *))(v3->Locomotor_field_00 + 1020))(v3) ) /*0x451238*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(Locomotor *))(v3->Locomotor_field_00 + 1020))(v3) ) /*0x451246*/
    {
      if ( v3[352].Locomotor_field_00 ) /*0x451250*/
      {
        Value = ProgressTimer::GetValue((ProgressTimer *)&v3[226], &v93); /*0x451265*/
        v84 = v3[352].Locomotor_field_00; /*0x45126c*/
        v85 = ((unsigned int)((*Value >> 10) + 1) >> 1) & 0x1F; /*0x451278*/
        if ( v84 ) /*0x45127d*/
        {
          *(_DWORD *)(v84 + 172) = dword_7F4890[v85]; /*0x451286*/
          *(_DWORD *)(v84 + 196) = 0; /*0x45128c*/
        }
      }
    }
  }
  result = v92; /*0x451296*/
  if ( v92 ) /*0x45129c*/
  {
    v87 = v3[333].Locomotor_field_00; /*0x45129e*/
    v88 = (int *)(v3[328].Locomotor_field_00 + 12 * v87 + 3844); /*0x4512af*/
    if ( v87 < 2 ) /*0x4512b6*/
      ProductionTimeMult = Rules::GetProductionTimeMult( /*0x4512e1*/
                             (Rules *)&stru_A8EB00.ObjectTypeClass[24],
                             *(_DWORD *)(v3[328].Locomotor_field_00 + 12 * v87 + 3852));
    else
      ProductionTimeMult = *(char **)(v3[328].Locomotor_field_00 + 12 * v87 + 3852); /*0x4512c3*/
    v3[64].Locomotor_field_00 = *(int *)&stru_A8EB00.?[416]; /*0x4512cc*/
    v3[65].Locomotor_field_00 = v94; /*0x4512fc*/
    v3[66].Locomotor_field_00 = (int)ProductionTimeMult; /*0x451303*/
    v3[67].Locomotor_field_00 = (int)ProductionTimeMult; /*0x451306*/
    v90 = v3->Locomotor_field_00; /*0x45130e*/
    v3[62].Locomotor_field_00 = *v88; /*0x451310*/
    return (*(char (__thiscall **)(Locomotor *, int))(v90 + 292))(v3, 2); /*0x451316*/
  }
  return result; /*0x45131c*/
}



// ==== 0x00451330  BuildingClass::GetCrewCount  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetCrewCount(BuildingClass *this)
{
  BuildingTypeClass *Type; // ecx
  HouseClass *owner; // edx
  int sideIndex; // eax
  int v5; // esi
  int result; // eax

  if ( this->NoCrew ) /*0x451334*/
    return 0; /*0x451334*/
  Type = this->Type; /*0x451342*/
  if ( !Type->?[0] ) /*0x451348*/
    return 0; /*0x451350*/
  owner = this->?; /*0x451352*/
  sideIndex = owner->sideIndex; /*0x451358*/
  if ( sideIndex ) /*0x451360*/
  {
    if ( sideIndex == 1 ) /*0x451372*/
    {
      v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5372); /*0x451379*/
    }
    else
    {
      if ( sideIndex != 2 ) /*0x451384*/
        return 0; /*0x4513c9*/
      v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5376); /*0x45138b*/
    }
  }
  else
  {
    v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5368); /*0x451367*/
  }
  if ( !v5 ) /*0x451393*/
    return 0; /*0x451393*/
  if ( this->HasBeenCaptured ) /*0x451395*/
    v5 *= 2; /*0x45139f*/
  result = (*((int (__thiscall **)(BuildingTypeClass *, HouseClass *, _DWORD))Type->TechnoTypeClass + 46))( /*0x4513ad*/
             Type,
             owner,
             0)
         / v5;
  if ( result < 1 ) /*0x4513b2*/
    return 1; /*0x4513b5*/
  if ( result > 5 ) /*0x4513bf*/
    return 5; /*0x4513c2*/
  return result; /*0x4513b4*/
}



// ==== 0x004513D0  BuildingClass::ProductionCheck  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ProductionCheck(BuildingClass *this)
{
  if ( this->BuildingClass_field_int_534 && this->ActuallyPlacedOnMap ) /*0x4513da*/
    return (*((int (__thiscall **)(BuildingTypeClass *))this->Type->TechnoTypeClass + 39))(this->Type); /*0x4513ec*/
  else
    return (*((int (__thiscall **)(BuildingTypeClass *))this->Type->TechnoTypeClass + 48))(this->Type); /*0x4513fa*/
}



// ==== 0x00451400  UpdateBuildingActiveAnim  this=-  sig=ida-proto ====
char __fastcall UpdateBuildingActiveAnim(BuildingClass *a1, int a2)
{
  int Strength; // eax
  int v4; // edi
  int v5; // esi
  int *Anims; // ebx
  BuildingTypeClass *Type; // ecx
  ParticleSystemClass *damageParticles; // ecx
  int v11; // edi
  int v12; // esi
  int *v13; // ebx
  BuildingTypeClass *v14; // ecx
  BuildingTypeClass *v15; // ecx
  int SuperWeaponToken; // eax
  int v17; // ebx
  unsigned int v18; // edx
  unsigned int v19; // ecx
  char UpgradeLevel; // al
  BOOL v23; // edx
  int v24; // eax
  int *v25; // ecx
  char v26[64]; // [esp+10h] [ebp-40h] BYREF

  Strength = a1->Type->?; /*0x451412*/
  if ( a1->? != Strength ) /*0x45141a*/
  {
    a1->? = Strength; /*0x451420*/
    if ( a1->IsDamaged ) /*0x451423*/
    {
      v4 = 0; /*0x45142d*/
      a1->IsDamaged = 0; /*0x45142f*/
      v5 = 0; /*0x451436*/
      Anims = a1->Anims; /*0x451438*/
      do /*0x451475*/
      {
        if ( *Anims ) /*0x45143e*/
        {
          Type = a1->Type; /*0x451443*/
          if ( (BuildingTypeClass *)((char *)Type + v5 * 4) != (BuildingTypeClass *)-3916 ) /*0x451452*/
          {
            if ( LOBYTE(Type->BuildingAnim[v5 + 12]) ) /*0x451454*/
              BuildingClass::PlayAnim(a1, a2, &Type->BuildingAnim[v5 + 12], v4, 0, 0, 0); /*0x451463*/
          }
        }
        v5 += 17; /*0x451468*/
        ++v4; /*0x45146b*/
        ++Anims; /*0x45146c*/
      }
      while ( v5 < 357 ); /*0x451475*/
    }
    BuildingClass::GetHealthRatio(a1); /*0x451479*/
    _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x45147e*/
    __asm /*0x451484*/
    {
      fcomp qword ptr [edx+1700h]
      fnstsw ax
    }
    if ( (_AX & 0x4100) == 0 ) /*0x45148f*/
    {
      damageParticles = a1->?; /*0x451491*/
      if ( damageParticles ) /*0x451499*/
        (*((void (__thiscall **)(ParticleSystemClass *))damageParticles->ObjectClass + 62))(damageParticles); /*0x45149d*/
    }
    v11 = 3; /*0x4514a3*/
    v12 = 51; /*0x4514a8*/
    v13 = &a1->Anims[3]; /*0x4514ad*/
    do /*0x4514ea*/
    {
      if ( !*v13 ) /*0x4514b3*/
      {
        v14 = a1->Type; /*0x4514b8*/
        if ( (BuildingTypeClass *)((char *)v14 + v12 * 4) != (BuildingTypeClass *)-3916 ) /*0x4514c7*/
        {
          if ( LOBYTE(v14->BuildingAnim[v12 + 12]) ) /*0x4514c9*/
            BuildingClass::PlayAnim(a1, _EDX, &v14->BuildingAnim[v12 + 12], v11, 0, 0, 0); /*0x4514d8*/
        }
      }
      v12 += 17; /*0x4514dd*/
      ++v11; /*0x4514e0*/
      ++v13; /*0x4514e1*/
    }
    while ( v12 <= 102 ); /*0x4514ea*/
    a1->? = 1; /*0x4514ec*/
  }
  v15 = a1->Type; /*0x4514f9*/
  if ( v15 == *(BuildingTypeClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2172) ) /*0x451505*/
  {
    SuperWeaponToken = a1->SuperWeaponToken; /*0x45150b*/
    v17 = SuperWeaponToken + 1; /*0x451511*/
    if ( SuperWeaponToken + 1 > 2 ) /*0x451517*/
      v17 = 0; /*0x451519*/
    if ( v17 != SuperWeaponToken && !v15->TurretAnimIsVoxel ) /*0x451523*/
    {
      BuildingClass::ClearAnims(a1, 9); /*0x451535*/
      if ( v17 != -1 ) /*0x45153d*/
      {
        strcpy(v26, a1->Type->?); /*0x45156b*/
        v18 = strlen(asc_818D7C) + 1; /*0x45158c*/
        qmemcpy(&v26[strlen(v26)], asc_818D7C, v18); /*0x451599*/
        v19 = strlen(v26); /*0x4515b3*/
        v26[v19] = v17 + 66; /*0x4515b6*/
        v26[v19 + 1] = 0; /*0x4515ba*/
        BuildingClass::PlayAnim(a1, v18, v26, 9, 0, 0, 0); /*0x4515c6*/
        a1->SuperWeaponToken = v17; /*0x4515cb*/
      }
    }
    ++a1->UpgradeLevel; /*0x4515db*/
    return 1; /*0x4515e2*/
  }
  else
  {
    UpgradeLevel = a1->UpgradeLevel; /*0x4515e9*/
    if ( UpgradeLevel == *(_DWORD *)&v15->__pad_F70[1392] ) /*0x4515fa*/
    {
      return 0; /*0x4515ff*/
    }
    else
    {
      a1->UpgradeLevel = UpgradeLevel + 1; /*0x45160a*/
      BuildingClass::GetHealthRatio(a1); /*0x451610*/
      _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x451615*/
      __asm /*0x45161a*/
      {
        fcomp qword ptr [eax+1700h]
        fnstsw ax
      }
      v23 = (_EAX & 0x4100) != 0; /*0x451625*/
      v24 = a1->UpgradeLevel - 1; /*0x451637*/
      if ( v23 ) /*0x45163c*/
        v25 = &a1->Type->BuildingAnim[17 * v24 + 16]; /*0x451649*/
      else
        v25 = &a1->Type->BuildingAnim[17 * v24 + 12]; /*0x45165d*/
      if ( v25 && *(_BYTE *)v25 ) /*0x451668*/
        BuildingClass::PlayAnim(a1, v23, v25, v24, v23, 0, 0); /*0x451676*/
      return 1; /*0x45167e*/
    }
  }
}



// ==== 0x00451690  BuildingClass::ClearSuperWeaponAnim  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::ClearSuperWeaponAnim(BuildingClass *this)
{
  char result; // al
  int v3; // ecx
  bool v4; // bl
  int v5; // eax
  char v6; // cl

  result = this->UpgradeLevel; /*0x451694*/
  if ( result ) /*0x45169c*/
  {
    v3 = result; /*0x4516a1*/
    v4 = 0; /*0x4516a4*/
    v5 = this->DamageFireAnims[result + 8]; /*0x4516a6*/
    if ( v5 && (v4 = *(_DWORD *)(v5 + 5872) != -1, *(_BYTE *)(v5 + 3233)) ) /*0x4516c0*/
    {
      BuildingClass::ClearAnims(this, 9); /*0x4516ce*/
      this->DamageFireAnims[this->UpgradeLevel + 8] = 0; /*0x4516dc*/
      this->UpgradeLevel = 0; /*0x4516e7*/
      this->SuperWeaponToken = -1; /*0x4516ee*/
      if ( v4 ) /*0x4516f8*/
      {
        SuperWeapon::UpdateSuperWeaponsOwnedHouseClass((SuperWeapon *)this->?); /*0x451700*/
        return 1; /*0x451709*/
      }
    }
    else
    {
      BuildingClass::ClearAnims(this, v3 - 1); /*0x45170e*/
      v6 = this->UpgradeLevel - 1; /*0x451719*/
      this->UpgradeLevel = v6; /*0x45171b*/
      this->Upgrades[v6] = 0; /*0x451726*/
      if ( v4 ) /*0x451731*/
        SuperWeapon::UpdateSuperWeaponsOwnedHouseClass((SuperWeapon *)this->?); /*0x451739*/
    }
    return 1; /*0x45173f*/
  }
  return result; /*0x45169e*/
}



// ==== 0x00451750  BuildingClass::PlayUpgradeAnim  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::PlayUpgradeAnim(BuildingClass *this, int a2, int a3, int a4, void *a5)
{
  int result; // eax
  int *v6; // edx

  if ( (_BYTE)a3 ) /*0x45175f*/
  {
    result = a2; /*0x451761*/
    v6 = &this->Type->BuildingAnim[17 * a2 + 16]; /*0x451772*/
  }
  else
  {
    result = a2; /*0x45177b*/
    if ( (_BYTE)a4 ) /*0x451783*/
      v6 = &this->Type->BuildingAnim[17 * a2 + 20]; /*0x451790*/
    else
      v6 = &this->Type->BuildingAnim[17 * a2 + 12]; /*0x4517a4*/
  }
  if ( v6 ) /*0x4517ad*/
  {
    if ( *(_BYTE *)v6 ) /*0x4517af*/
      return BuildingClass::PlayAnim(this, (int)v6, v6, result, a3, a4, a5); /*0x4517bf*/
  }
  return result; /*0x4517c4*/
}



// ==== 0x004517D0  ObjectClass::method_4517D0  this=ObjectClass  sig=csp ====
int __thiscall sub_4517D0(TechnoClass *this)
{
  int *v2; // eax
  int v3; // edi
  int v4; // edx
  int result; // eax
  int *v6; // esi
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int **v12; // [esp+10h] [ebp-28h]
  int v13; // [esp+14h] [ebp-24h]
  int v14; // [esp+18h] [ebp-20h]
  int v15; // [esp+1Ch] [ebp-1Ch]
  _DWORD v16[3]; // [esp+20h] [ebp-18h] BYREF
  _DWORD v17[3]; // [esp+2Ch] [ebp-Ch] BYREF

  v2 = (int *)(*(int (__thiscall **)(TechnoClass *, _DWORD *))(this->vtable0 + 172))(this, v16); /*0x4517e2*/
  v3 = 0; /*0x4517ea*/
  v13 = *v2; /*0x4517ec*/
  v14 = v2[1]; /*0x4517f3*/
  v4 = v2[2]; /*0x4517f7*/
  result = (int)this + 1372; /*0x4517fa*/
  v15 = v4; /*0x451800*/
  v12 = (int **)((char *)this + 1372); /*0x451804*/
  do /*0x451879*/
  {
    v6 = *v12; /*0x45180c*/
    if ( *v12 ) /*0x45180c*/
    {
      v7 = Matrix3x4::TransformCell( /*0x45182b*/
             (float *)g_TacticalClass_Instance,
             v17,
             (int *)(*((_DWORD *)this + 328) + v3 + 3964));
      v8 = v13 + *v7; /*0x45183a*/
      v9 = v7[1]; /*0x45183c*/
      v10 = v7[2]; /*0x45183f*/
      v16[1] = v14 + v9; /*0x45184a*/
      v11 = *v6; /*0x45184e*/
      v16[2] = v15 + v10; /*0x451850*/
      v16[0] = v8; /*0x451858*/
      result = (*(int (__thiscall **)(int *, _DWORD *))(v11 + 436))(v6, v16); /*0x45185f*/
    }
    v3 += 68; /*0x451869*/
    ++v12; /*0x451875*/
  }
  while ( v3 < 1428 ); /*0x451879*/
  return result; /*0x45187b*/
}



// ==== 0x00451890  BuildingClass::PlayAnim  this=ObjectClass  sig=csp ====
int __fastcall BuildingClass::PlayAnim(BuildingClass *a1, int a2, AnimTypeClass *a3, int a4, int a5, int a6, void *a7)
{
  int v8; // edi
  int *Anims; // ebp
  int result; // eax
  int v11; // ebp
  int v12; // edi
  _DWORD *v13; // ebx
  _DWORD *v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  AnimClass *v18; // eax
  void **v19; // ebp
  void *v20; // edx
  int Translucency; // ebx
  int *v22; // ecx
  int v23; // edx
  int v24; // eax
  int v25; // ecx
  BuildingTypeClass *Type; // eax
  int v27; // eax
  int started; // edi
  _DWORD *v29; // eax
  int v30[3]; // [esp+10h] [ebp-24h] BYREF
  _DWORD v31[3]; // [esp+1Ch] [ebp-18h] BYREF
  _BYTE v32[12]; // [esp+28h] [ebp-Ch] BYREF

  if ( a1->IsDamaged != (_BYTE)a5 ) /*0x4518a3*/
  {
    a1->IsDamaged = a5; /*0x4518a5*/
    v8 = 0; /*0x4518ab*/
    Anims = a1->Anims; /*0x4518ad*/
    do /*0x4518cd*/
    {
      if ( *Anims ) /*0x4518b3*/
        BuildingClass::PlayUpgradeAnim(a1, v8, a5, 0, 0); /*0x4518c1*/
      ++v8; /*0x4518c6*/
      ++Anims; /*0x4518c7*/
    }
    while ( v8 < 21 ); /*0x4518cd*/
  }
  result = AnimTypeClass::FindIndex(a3); /*0x4518d3*/
  v11 = result; /*0x4518d8*/
  if ( result != -1 )
  {
    v12 = 68 * a4; /*0x4518f8*/
    v13 = Matrix3x4::TransformCell((float *)g_TacticalClass_Instance, v31, (int *)&a1->Type->__pad_F70[68 * a4 + 12]); /*0x451913*/
    v14 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))a1->TechnoClass + 43))(a1, v32); /*0x45191a*/
    v15 = *v13 + *v14; /*0x451924*/
    v16 = v13[1] + v14[1]; /*0x45192c*/
    v17 = v13[2] + v14[2]; /*0x45192f*/
    v30[0] = v15; /*0x451937*/
    v30[1] = v16; /*0x45193b*/
    v30[2] = v17; /*0x45193f*/
    v18 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x451943*/
    if ( v18 ) /*0x45194d*/
      v19 = AnimClass::ctor(v18, *(void **)(FootClass_Array.?[3] + 4 * v11), v30, a7, 1, (void *)0x1600, 0, 0); /*0x451975*/
    else
      v19 = 0; /*0x451979*/
    v19[64] = *(void **)&a1->Type->__pad_F70[v12 + 20]; /*0x451988*/
    v20 = *(void **)&a1->Type->__pad_F70[v12 + 24]; /*0x451994*/
    *((_BYTE *)v19 + 280) = 1; /*0x45199b*/
    v19[65] = v20; /*0x4519a2*/
    if ( a1->IsFogged ) /*0x4519a8*/
      *((_BYTE *)v19 + 409) = 1; /*0x4519b2*/
    Translucency = a1->Translucency; /*0x4519b9*/
    if ( Translucency == 15 /*0x4519d3*/
      && (*((int (__thiscall **)(BuildingClass *, _DWORD, _DWORD))a1->TechnoClass + 26))(a1, 0, 0) == 5 )
    {
      LOBYTE(Translucency) = 16; /*0x4519d5*/
    }
    v22 = a1->Anims; /*0x4519da*/
    v23 = 21; /*0x4519e0*/
    do /*0x4519f5*/
    {
      if ( *v22 ) /*0x4519e5*/
        *(_BYTE *)(*v22 + 376) = Translucency; /*0x4519eb*/
      ++v22; /*0x4519f1*/
      --v23; /*0x4519f4*/
    }
    while ( v23 ); /*0x4519f5*/
    v24 = a1->Anims[a4]; /*0x4519fb*/
    if ( v24 ) /*0x451a04*/
    {
      v19[43] = *(void **)(v24 + 172); /*0x451a0c*/
      v25 = a1->Anims[a4]; /*0x451a12*/
      a1->Anims[a4] = 0; /*0x451a1b*/
      if ( v25 ) /*0x451a26*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v25 + 32))(v25, 1); /*0x451a2c*/
    }
    a1->Anims[a4] = (int)v19; /*0x451a2f*/
    if ( !a1->StuffEnabled || !(*((unsigned __int8 (__thiscall **)(BuildingClass *))a1->TechnoClass + 212))(a1) ) /*0x451a44*/
    {
      Type = a1->Type; /*0x451a4e*/
      if ( Type->Powered ) /*0x451a54*/
      {
        if ( Type->__pad_F70[v12 + 28] ) /*0x451a5e*/
          BuildingClass::SetField8((BuildingClass *)v19); /*0x451a6b*/
      }
    }
    if ( *((_BYTE *)v19[50] + 860) )
    {
      v19[53] = (void *)(*((int (__thiscall **)(BuildingClass *))a1->TechnoClass + 121))(a1); /*0x451a8a*/
      v27 = (*((int (__thiscall **)(BuildingClass *))a1->TechnoClass + 111))(a1); /*0x451a94*/
      started = (*((int (__thiscall **)(BuildingClass *, _DWORD))a1->TechnoClass + 281))(a1, *(__int16 *)(v27 + 266)); /*0x451aac*/
      if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))a1->TechnoClass + 88))(a1)
        || a1->?
        && (a1
          ? (v29 = (*((int (__thiscall **)(BuildingClass *))a1->TechnoClass + 11))(a1) == 6 ? (_DWORD *)a1 : 0)
          : (v29 = 0),
            (_DWORD *)a1->?->AirstrikeClass_field_50 == v29) )
      {
        started = Techno::StartInvulnerability(started); /*0x451af3*/
      }
      v19[63] = (void *)started; /*0x451af5*/
    }
    if ( a4 == 9 && a1->Type->BarrelAnimIsVoxel ) /*0x451b06*/
      *((_BYTE *)v19 + 413) = 1; /*0x451b10*/
    result = (*((int (__thiscall **)(BuildingClass *))a1->TechnoClass + 117))(a1); /*0x451b1b*/
    if ( (_BYTE)result ) /*0x451b23*/
      *((_BYTE *)v19 + 282) = 1; /*0x451b25*/
  }
  return result; /*0x451b2c*/
}



// ==== 0x00451B40  BuildingClass::StopAnim  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::StopAnim(BuildingClass *this, int a2)
{
  int Type; // eax
  int *i; // ecx
  int v5; // edx
  int v8; // ecx
  BOOL v11; // ebx
  bool v12; // al
  int v13; // edx
  bool v14; // zf
  BuildingTypeClass *v15; // eax
  int v18; // ecx
  int v21; // ecx
  int v22; // edx
  int v24; // ecx

  LOBYTE(Type) = this->?; /*0x451b44*/
  if ( (_BYTE)Type )
  {
    Type = 0; /*0x451b56*/
    for ( i = this->Anims; *i != a2; ++i ) /*0x451b58*/
    {
      if ( ++Type >= 21 ) /*0x451b69*/
        return Type; /*0x451b69*/
    }
    this->Anims[Type] = 0; /*0x451b70*/
    Type -= 10; /*0x451b7b*/
    switch ( Type )
    {
      case 0:
        Type = (int)this->Type; /*0x451b8e*/
        if ( *(_BYTE *)(Type + 5801) )
        {
          if ( !(unsigned __int8)Team::AllMembersValid((Team *)this) /*0x451bba*/
            || (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) != 20 )
          {
            BuildingClass::GetHealthRatio(this); /*0x451c1c*/
            _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x451c21*/
            __asm { fcomp qword ptr [edx+1700h] } /*0x451c27*/
            goto LABEL_30; /*0x451c2d*/
          }
          BuildingClass::GetHealthRatio(this); /*0x451bbe*/
          _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x451bc3*/
          __asm /*0x451bc9*/
          {
            fcomp qword ptr [ecx+1700h]
            fnstsw ax
          }
          if ( (_AX & 0x4100) != 0 ) /*0x451bd4*/
          {
            v8 = 1; /*0x451bdc*/
            Type = (int)&this->Type->__pad_F70[728]; /*0x451be1*/
          }
          else
          {
            v8 = 0; /*0x451bee*/
            Type = (int)&this->Type->__pad_F70[712]; /*0x451bf0*/
          }
          if ( Type && *(_BYTE *)Type ) /*0x451bfd*/
            LOBYTE(Type) = BuildingClass::PlayAnim(this, v5, (AnimTypeClass *)Type, 11, v8, 0, 0); /*0x451c10*/
        }
        else if ( *(_BYTE *)(Type + 5799) )
        {
          LOBYTE(Type) = *(_BYTE *)(a2 + 377); /*0x451c40*/
          if ( (_BYTE)Type )
          {
            BuildingClass::GetHealthRatio(this); /*0x451c50*/
            _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x451c55*/
            __asm /*0x451c5a*/
            {
              fcomp qword ptr [eax+1700h]
              fnstsw ax
            }
            v11 = (_EAX & 0x4100) != 0; /*0x451c65*/
            v12 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 258))(this) > 0; /*0x451c7c*/
            LOBYTE(a2) = v12; /*0x451c81*/
            if ( v11 )
            {
              Type = (int)&this->Type->__pad_F70[184]; /*0x451c8d*/
            }
            else
            {
              v14 = !v12; /*0x451c94*/
              v15 = this->Type; /*0x451c96*/
              Type = (int)(v14 ? &v15->__pad_F70[168] : &v15->__pad_F70[200]);
            }
            if ( Type && *(_BYTE *)Type ) /*0x451cb2*/
              LOBYTE(Type) = BuildingClass::PlayAnim(this, v13, (AnimTypeClass *)Type, 3, v11, a2, 0); /*0x451cc8*/
          }
        }
        break; /*0x451c17*/
      case 2:
        Type = (int)this->Type; /*0x451cd2*/
        if ( *(_BYTE *)(Type + 5801) ) /*0x451cd8*/
        {
          LOBYTE(Type) = *(_BYTE *)(a2 + 377); /*0x451ce6*/
          if ( (_BYTE)Type ) /*0x451cee*/
          {
            BuildingClass::GetHealthRatio(this); /*0x451cf6*/
            _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x451cfb*/
            __asm { fcomp qword ptr [ecx+1700h] } /*0x451d01*/
LABEL_30:
            __asm { fnstsw ax } /*0x451d07*/
            if ( (_AX & 0x4100) != 0 ) /*0x451d0c*/
            {
              v18 = 1; /*0x451d14*/
              Type = (int)&this->Type->__pad_F70[1204]; /*0x451d19*/
            }
            else
            {
              v18 = 0; /*0x451d26*/
              Type = (int)&this->Type->__pad_F70[1188]; /*0x451d28*/
            }
            if ( Type && *(_BYTE *)Type ) /*0x451d35*/
              LOBYTE(Type) = BuildingClass::PlayAnim(this, _EDX, (AnimTypeClass *)Type, 18, v18, 0, 0); /*0x451d48*/
          }
        }
        break; /*0x451d4f*/
      case 5:
        LOBYTE(Type) = *(_BYTE *)(a2 + 377); /*0x451d52*/
        if ( (_BYTE)Type ) /*0x451d5a*/
        {
          BuildingClass::GetHealthRatio(this); /*0x451d62*/
          _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x451d67*/
          __asm /*0x451d6d*/
          {
            fcomp qword ptr [edx+1700h]
            fnstsw ax
          }
          if ( (_AX & 0x4100) != 0 ) /*0x451d78*/
          {
            v21 = 1; /*0x451d80*/
            Type = (int)&this->Type->__pad_F70[1068]; /*0x451d85*/
          }
          else
          {
            v21 = 0; /*0x451d92*/
            Type = (int)&this->Type->__pad_F70[1052]; /*0x451d94*/
          }
          if ( Type && *(_BYTE *)Type ) /*0x451d9d*/
            LOBYTE(Type) = BuildingClass::PlayAnim( /*0x451dac*/
                             this,
                             *(int *)&DSurface_ViewBounds.__pad_FC[324],
                             (AnimTypeClass *)Type,
                             16,
                             v21,
                             0,
                             0);
        }
        break; /*0x451db3*/
      case 7:
        LOBYTE(Type) = *(_BYTE *)(a2 + 377); /*0x451db6*/
        if ( (_BYTE)Type ) /*0x451dbe*/
        {
          BuildingClass::GetHealthRatio(this); /*0x451dc2*/
          _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x451dc7*/
          __asm /*0x451dcc*/
          {
            fcomp qword ptr [eax+1700h]
            fnstsw ax
          }
          if ( (_EAX & 0x4100) != 0 ) /*0x451dd7*/
          {
            v24 = 1; /*0x451ddf*/
            Type = (int)&this->Type->__pad_F70[932]; /*0x451de4*/
          }
          else
          {
            v24 = 0; /*0x451df1*/
            Type = (int)&this->Type->__pad_F70[916]; /*0x451df3*/
          }
          if ( Type && *(_BYTE *)Type ) /*0x451dfc*/
            LOBYTE(Type) = BuildingClass::PlayAnim(this, v22, (AnimTypeClass *)Type, 14, v24, 0, 0); /*0x451e0b*/
        }
        break; /*0x451e0b*/
      default:
        return Type;
    }
  }
  return Type; /*0x451b6b*/
}



// ==== 0x00451E40  BuildingClass::ClearAnims  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ClearAnims(BuildingClass *this, int a2)
{
  int result; // eax
  int *Anims; // esi
  int v4; // edi
  int v5; // ecx

  if ( a2 == -2 ) /*0x451e47*/
  {
    Anims = this->Anims; /*0x451e4b*/
    v4 = 21; /*0x451e51*/
    do /*0x451e6d*/
    {
      v5 = *Anims; /*0x451e56*/
      if ( *Anims ) /*0x451e56*/
      {
        *Anims = 0; /*0x451e5c*/
        result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 32))(v5, 1); /*0x451e66*/
      }
      ++Anims; /*0x451e69*/
      --v4; /*0x451e6c*/
    }
    while ( v4 ); /*0x451e6d*/
  }
  else
  {
    result = this->Anims[a2]; /*0x451e74*/
    if ( result ) /*0x451e7d*/
    {
      this->Anims[a2] = 0; /*0x451e7f*/
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)result + 32))(result, 1); /*0x451e90*/
    }
  }
  return result; /*0x451e71*/
}



// ==== 0x00451EE0  globalHelper_051EE0  this=TechnoClass  sig=csp ====
void __fastcall sub_451EE0(int a1, int a2, int a3)
{
  int v4; // ecx
  int v5; // ebp
  int v6; // esi
  _DWORD *v7; // ebx
  _BYTE *v8; // eax

  v4 = a3; /*0x451ee3*/
  if ( *(_BYTE *)(a1 + 1766) != (_BYTE)a3 ) /*0x451eed*/
  {
    v5 = 0; /*0x451ef2*/
    *(_BYTE *)(a1 + 1766) = a3; /*0x451ef4*/
    v6 = 0; /*0x451efa*/
    v7 = (_DWORD *)(a1 + 1372); /*0x451efc*/
    do /*0x451f4f*/
    {
      if ( *v7 ) /*0x451f02*/
      {
        if ( (_BYTE)v4 ) /*0x451f09*/
        {
          v8 = (_BYTE *)(*(_DWORD *)(a1 + 1312) + v6 + 3932); /*0x451f11*/
        }
        else
        {
          a2 = *(_DWORD *)(a1 + 1312); /*0x451f1a*/
          v8 = (_BYTE *)(a2 + v6 + 3916); /*0x451f20*/
        }
        if ( v8 ) /*0x451f29*/
        {
          if ( *v8 ) /*0x451f2b*/
          {
            BuildingClass::PlayAnim((_DWORD *)a1, a2, v8, v5, v4, 0, 0); /*0x451f39*/
            v4 = a3; /*0x451f3e*/
          }
        }
      }
      v6 += 68; /*0x451f42*/
      ++v5; /*0x451f45*/
      ++v7; /*0x451f46*/
    }
    while ( v6 < 1428 ); /*0x451f4f*/
  }
}



// ==== 0x00451F60  BuildingClass::SyncCrateVisuals  this=BuildingClass  sig=csp ====
int __thiscall sub_451F60(char *this, int a2, int a3)
{
  _DWORD *v4; // ebp
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // ebx
  char *v8; // ecx
  int v9; // esi
  int result; // eax
  int v11; // [esp+10h] [ebp-4h]

  v11 = 21; /*0x451f67*/
  v4 = this + 1372; /*0x451f6f*/
  do /*0x451fee*/
  {
    v5 = (_DWORD *)*v4; /*0x451f75*/
    if ( *v4 ) /*0x451f75*/
    {
      v6 = v5[50]; /*0x451f7c*/
      if ( v6 && *(_BYTE *)(v6 + 860) ) /*0x451f86*/
      {
        v5[53] = a2; /*0x451f98*/
        v5[63] = a3; /*0x451f9e*/
      }
      v7 = this->Translucency; /*0x451fa4*/
      if ( v7 == 15 && (*(int (__thiscall **)(char *, _DWORD, _DWORD))(this->bombVisible)(this, 0, 0) == 5 ) /*0x451fbe*/
        LOBYTE(v7) = 16; /*0x451fc0*/
      v8 = this + 1372; /*0x451fc5*/
      v9 = 21; /*0x451fcb*/
      do /*0x451fe0*/
      {
        if ( *(_DWORD *)v8 ) /*0x451fd0*/
          *(_BYTE *)(*(_DWORD *)v8 + 376) = v7; /*0x451fd6*/
        v8 += 4; /*0x451fdc*/
        --v9; /*0x451fdf*/
      }
      while ( v9 ); /*0x451fe0*/
    }
    ++v4; /*0x451fe6*/
    result = --v11; /*0x451fe9*/
  }
  while ( v11 ); /*0x451fee*/
  return result; /*0x451ff0*/
}



// ==== 0x00452000  sub_452000  this=TechnoClass  sig=csp ====
int __fastcall sub_452000(_DWORD *a1)
{
  int v2; // eax
  int v3; // edi
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // ebx
  _DWORD *v8; // ecx
  int v9; // ebp
  bool v10; // zf
  int v11; // ebx
  int *v12; // ecx
  int v13; // esi
  int result; // eax
  _DWORD *v15; // [esp+10h] [ebp-10h]
  int v16; // [esp+14h] [ebp-Ch]
  int v17; // [esp+18h] [ebp-8h]

  v17 = (*(int (__thiscall **)(_DWORD *))(*a1 + 484))(a1); /*0x452015*/
  v2 = (*(int (__thiscall **)(_DWORD *))(*a1 + 444))(a1); /*0x452019*/
  v3 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a1 + 1124))(a1, *(__int16 *)(v2 + 266)); /*0x452031*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 352))(a1)
    || a1[165]
    && (a1 ? (v4 = (*(int (__thiscall **)(_DWORD *))(*a1 + 44))(a1) == 6 ? a1 : 0) : (v4 = 0),
        *(_DWORD **)(a1[165] + 80) == v4) )
  {
    LOWORD(v3) = Techno::StartInvulnerability(v3); /*0x452078*/
  }
  *((_WORD *)a1 + 896) = v3; /*0x45207a*/
  v15 = a1 + 343; /*0x452091*/
  v16 = 21; /*0x452095*/
  do /*0x45211d*/
  {
    v5 = (_DWORD *)*v15; /*0x4520a1*/
    if ( *v15 ) /*0x4520a1*/
    {
      v6 = v5[50]; /*0x4520a7*/
      if ( v6 && *(_BYTE *)(v6 + 860) ) /*0x4520b1*/
      {
        v5[53] = v17; /*0x4520c3*/
        v5[63] = (unsigned __int16)v3; /*0x4520c9*/
      }
      v7 = *((char *)a1 + 1773); /*0x4520cf*/
      if ( v7 == 15 && (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*a1 + 104))(a1, 0, 0) == 5 ) /*0x4520e9*/
        LOBYTE(v7) = 16; /*0x4520eb*/
      v8 = a1 + 343; /*0x4520f0*/
      v9 = 21; /*0x4520f2*/
      do /*0x452107*/
      {
        if ( *v8 ) /*0x4520f7*/
          *(_BYTE *)(*v8 + 376) = v7; /*0x4520fd*/
        ++v8; /*0x452103*/
        --v9; /*0x452106*/
      }
      while ( v9 ); /*0x452107*/
    }
    v10 = v16 == 1; /*0x452114*/
    ++v15; /*0x452115*/
    --v16; /*0x452119*/
  }
  while ( !v10 ); /*0x45211d*/
  v11 = *((char *)a1 + 1773); /*0x452123*/
  if ( v11 == 15 && (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*a1 + 104))(a1, 0, 0) == 5 ) /*0x45213d*/
    LOBYTE(v11) = 16; /*0x45213f*/
  v12 = a1 + 343; /*0x452144*/
  v13 = 21; /*0x452146*/
  do /*0x45215b*/
  {
    result = *v12; /*0x45214b*/
    if ( *v12 ) /*0x45214b*/
      *(_BYTE *)(result + 376) = v11; /*0x452151*/
    ++v12; /*0x452157*/
    --v13; /*0x45215a*/
  }
  while ( v13 ); /*0x45215b*/
  return result; /*0x45215d*/
}



// ==== 0x00452170  BuildingClass::SetConnectedBuildingMission  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::SetConnectedBuildingMission(BuildingClass *this, int a2)
{
  char v3; // bl
  int *Anims; // ecx
  int v5; // esi
  int result; // eax

  v3 = a2; /*0x45217b*/
  if ( a2 == 15 && (*((int (__thiscall **)(BuildingClass *, _DWORD, _DWORD))this->TechnoClass + 26))(this, 0, 0) == 5 ) /*0x45218b*/
    v3 = 16; /*0x45218d*/
  Anims = this->Anims; /*0x452192*/
  v5 = 21; /*0x452198*/
  do /*0x4521ad*/
  {
    result = *Anims; /*0x45219d*/
    if ( *Anims ) /*0x45219d*/
      *(_BYTE *)(result + 376) = v3; /*0x4521a3*/
    ++Anims; /*0x4521a9*/
    --v5; /*0x4521ac*/
  }
  while ( v5 ); /*0x4521ad*/
  return result; /*0x4521af*/
}



// ==== 0x004521C0  BuildingClass::DisableTemporal  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::DisableTemporal(BuildingClass *this)
{
  int *Anims; // ecx
  int v2; // edx
  int result; // eax
  int v4; // esi

  this->HasPower = 0; /*0x4521c0*/
  Anims = this->Anims; /*0x4521c8*/
  v2 = 21; /*0x4521ce*/
  do /*0x4521fe*/
  {
    result = *Anims; /*0x4521d3*/
    if ( *Anims ) /*0x4521d3*/
    {
      v4 = *(_DWORD *)(result + 172); /*0x4521d9*/
      *(_BYTE *)(result + 282) = 1; /*0x4521df*/
      *(_BYTE *)(result + 283) = 0; /*0x4521e6*/
      *(_DWORD *)(result + 284) = v4; /*0x4521ed*/
      *(_BYTE *)(result + 281) = 1; /*0x4521f3*/
    }
    ++Anims; /*0x4521fa*/
    --v2; /*0x4521fd*/
  }
  while ( v2 ); /*0x4521fe*/
  return result; /*0x452200*/
}



// ==== 0x00452210  BuildingClass::EnableTogglePower  this=BuildingClass  sig=csp ====
_BYTE *__thiscall BuildingClass::EnableTogglePower(BuildingClass *this)
{
  int *Anims; // ecx
  int v2; // edx
  _BYTE *result; // eax

  this->HasPower = 1; /*0x452210*/
  Anims = this->Anims; /*0x452218*/
  v2 = 21; /*0x45221e*/
  do /*0x452242*/
  {
    result = (_BYTE *)*Anims; /*0x452225*/
    if ( *Anims ) /*0x452225*/
    {
      result[282] = 0; /*0x45222b*/
      result[283] = 1; /*0x452231*/
      result[281] = 0; /*0x452238*/
    }
    ++Anims; /*0x45223e*/
    --v2; /*0x452241*/
  }
  while ( v2 ); /*0x452242*/
  return result; /*0x452244*/
}



// ==== 0x00452250  BuildingClass::StubReturn0  this=BuildingClass  sig=csp ====
int __thiscall FootClass::StubReturn0(BuildingClass *this)
{
  return 0; /*0x452252*/
}



// ==== 0x00452260  BuildingClass::AnnounceReady  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::AnnounceReady(BuildingClass *this)
{
  HouseClass *owner; // ecx
  LightSourceClass *LightSource; // ecx
  BuildingTypeClass *Type; // edx
  int v5; // edi
  int *Anims; // ebx
  BuildingTypeClass *v7; // eax
  int v8; // ecx

  if ( !this->HasPower && !this->? ) /*0x452271*/
  {
    owner = this->?; /*0x45227f*/
    this->HasPower = 1; /*0x452287*/
    this->? = 1; /*0x45228d*/
    LOBYTE(owner->HouseClass_field_timer_B[2]) = 1; /*0x452293*/
    BYTE1(this->?->HouseClass_field_timer_B[2]) = 1; /*0x45229f*/
    this->?->recheckTechTree = 1; /*0x4522ab*/
    LightSource = this->LightSource; /*0x4522b1*/
    this->StuffEnabled = 1; /*0x4522b9*/
    if ( LightSource ) /*0x4522bf*/
      Trigger::EnableOnce((Trigger *)LightSource, 0); /*0x4522c3*/
    Type = this->Type; /*0x4522c8*/
    if ( Type->LaserFencePost ) /*0x4522ce*/
      BuildingClass::RepairPlacement(this, 0); /*0x4522dc*/
    v5 = 0; /*0x4522e3*/
    Anims = this->Anims; /*0x4522e5*/
    do /*0x452313*/
    {
      if ( this->Type->__pad_F70[v5 + 28] && *Anims ) /*0x4522fc*/
        VtableStub::Method_425270((_BYTE *)*Anims); /*0x452302*/
      v5 += 68; /*0x452307*/
      ++Anims; /*0x45230a*/
    }
    while ( v5 < 1428 ); /*0x452313*/
    v7 = this->Type; /*0x452315*/
    v8 = v7->Factory[0]; /*0x45231d*/
    if ( v8 ) /*0x452325*/
    {
      LOBYTE(Type) = v7->?[1]; /*0x452327*/
      HouseClass::UpdateProduction((int)this->?, v8, (int)Type, 0); /*0x452337*/
    }
    if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x452342*/
      VoxClass::FindAndPlay((VoxClass *)&stru_818E00.Next, -1); /*0x452355*/
  }
}



// ==== 0x00452360  BuildingClass::PowerOff  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::PowerOff(BuildingClass *this)
{
  BuildingTypeClass *Type; // eax
  HouseClass *owner; // ecx
  int v4; // edx
  int v5; // ecx

  LOBYTE(Type) = this->HasPower; /*0x452363*/
  if ( (_BYTE)Type ) /*0x45236b*/
  {
    Type = this->Type; /*0x452371*/
    if ( Type->PowerDrain > 0 || Type->Powered ) /*0x452381*/
    {
      owner = this->?; /*0x45238b*/
      this->HasPower = 0; /*0x452393*/
      this->? = 1; /*0x45239a*/
      LOBYTE(owner->HouseClass_field_timer_B[2]) = 1; /*0x4523a0*/
      BYTE1(this->?->HouseClass_field_timer_B[2]) = 1; /*0x4523ac*/
      this->?->recheckTechTree = 1; /*0x4523b8*/
      BuildingClass::Deactivate(this); /*0x4523c0*/
      if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x4523cb*/
        VoxClass::FindAndPlay((VoxClass *)&stru_818E00.TrailerAnim, -1); /*0x4523de*/
      Type = this->Type; /*0x4523e3*/
      v5 = Type->Factory[0]; /*0x4523e9*/
      if ( v5 ) /*0x4523f1*/
      {
        LOBYTE(v4) = Type->?[1]; /*0x4523f3*/
        LOBYTE(Type) = HouseClass::UpdateProduction((int)this->?, v5, v4, 0); /*0x452403*/
      }
    }
  }
  return (char)Type; /*0x452408*/
}



// ==== 0x00452410  BuildingClass::EnableStuff  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::EnableStuff(BuildingClass *this)
{
  LightSourceClass *LightSource; // ecx
  int v3; // esi
  int *Anims; // edi

  LightSource = this->LightSource; /*0x452415*/
  this->StuffEnabled = 1; /*0x45241b*/
  if ( LightSource ) /*0x452424*/
    Trigger::EnableOnce((Trigger *)LightSource, 0); /*0x452428*/
  if ( this->Type->LaserFencePost ) /*0x452433*/
    BuildingClass::RepairPlacement(this, 0); /*0x452441*/
  v3 = 0; /*0x452446*/
  Anims = this->Anims; /*0x452448*/
  do /*0x452476*/
  {
    if ( this->Type->__pad_F70[v3 + 28] ) /*0x452454*/
    {
      if ( *Anims ) /*0x45245f*/
        VtableStub::Method_425270((_BYTE *)*Anims); /*0x452465*/
    }
    v3 += 68; /*0x45246a*/
    ++Anims; /*0x45246d*/
  }
  while ( v3 < 1428 ); /*0x452476*/
}



// ==== 0x00452480  BuildingClass::Deactivate  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::Deactivate(BuildingClass *this)
{
  LightSourceClass *LightSource; // ecx
  BuildingTypeClass *Type; // eax
  char CloakRadius; // cl
  int v5; // esi
  int *Anims; // ebx

  LightSource = this->LightSource; /*0x452485*/
  this->StuffEnabled = 0; /*0x45248b*/
  if ( LightSource ) /*0x452494*/
    MapClass::ScrollOnce((int)LightSource, 0); /*0x452498*/
  Type = this->Type; /*0x45249d*/
  if ( Type->CloakGenerator ) /*0x4524a3*/
  {
    CloakRadius = this->CloakRadius; /*0x4524ad*/
    this->HasCloakingData = -1; /*0x4524b3*/
    if ( !CloakRadius ) /*0x4524bc*/
      this->CloakRadius = Type->CloakRadiusInCells; /*0x4524c4*/
    this->? = 1; /*0x4524ca*/
  }
  if ( Type->? && this->? ) /*0x4524db*/
    (*((void (__thiscall **)(BuildingClass *))this->TechnoClass + 262))(this); /*0x4524e9*/
  if ( this->Type->LaserFencePost ) /*0x4524f5*/
    BuildingClass::RepairPlacement(this, 0); /*0x452503*/
  v5 = 0; /*0x452508*/
  Anims = this->Anims; /*0x45250a*/
  do /*0x452538*/
  {
    if ( this->Type->__pad_F70[v5 + 28] ) /*0x452516*/
    {
      if ( *Anims ) /*0x452521*/
        BuildingClass::SetField8((BuildingClass *)*Anims); /*0x452527*/
    }
    v5 += 68; /*0x45252c*/
    ++Anims; /*0x45252f*/
  }
  while ( v5 < 1428 ); /*0x452538*/
}



// ==== 0x00452540  BuildingClass::MakeTraversable  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::MakeTraversable(BuildingClass *this)
{
  if ( !this->Type->Gate ) /*0x45254a*/
    return 1; /*0x452558*/
  if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) != 24 /*0x45257b*/
    || (unsigned __int8)BuildingClass::CheckFlag24((BuildingClass *)this->?)
    || (unsigned __int8)Flag::CheckNone((Flag *)this->?) )
  {
    (*((void (__thiscall **)(BuildingClass *, int))this->TechnoClass + 124))(this, -1); /*0x4525be*/
    (*((void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass + 122))(this, 24, 0); /*0x4525cc*/
    (*((void (__thiscall **)(BuildingClass *))this->TechnoClass + 123))(this); /*0x4525d6*/
  }
  else
  {
    if ( !this->Type->Gate ) /*0x45258a*/
      return 1; /*0x452598*/
    if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) == 24 /*0x4525aa*/
      && (unsigned __int8)BuildingClass::CheckPowerFlags((BuildingClass *)this->?) )
    {
      return 1; /*0x4525b7*/
    }
  }
  return 0; /*0x452554*/
}



// ==== 0x004525F0  BuildingClass::IsPoweredOn  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::IsPoweredOn(BuildingClass *this)
{
  int result; // eax

  result = (int)this->Type; /*0x4525f3*/
  if ( *(_BYTE *)(result + 5815) ) /*0x4525f9*/
  {
    result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this); /*0x45260b*/
    LOBYTE(result) = result == 24 && (result = BuildingClass::CheckPowerFlags((BuildingClass *)this->?), (_BYTE)result); /*0x452625*/
  }
  else
  {
    LOBYTE(result) = 1; /*0x452603*/
  }
  return result; /*0x452605*/
}



// ==== 0x00452630  BuildingClass::CheckHealthForRepair  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CheckHealthForRepair(BuildingClass *this)
{
  int result; // eax

  result = this->?; /*0x452633*/
  if ( result ) /*0x452638*/
  {
    result = (int)this->Type; /*0x45263e*/
    if ( *(_BYTE *)(result + 5498) ) /*0x452644*/
    {
      result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 32))(this); /*0x452656*/
      if ( (_BYTE)result ) /*0x45265e*/
        LOBYTE(result) = 0; /*0x452660*/
      else
        return InfantryClass::CheckHealthDiff((TechnoClass *)this); /*0x452666*/
    }
    else
    {
      LOBYTE(result) = 0; /*0x45264e*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x45263a*/
  }
  return result; /*0x45263c*/
}



// ==== 0x00452670  BuildingClass::CanAcceptType  this=AbstractClass  sig=csp ====
int __thiscall BuildingClass::CanAcceptType(bool *this, int a2, int a3)
{
  int result; // eax

  result = a3; /*0x452670*/
  if ( a3 != *((_DWORD *)this + 135) ) /*0x45267e*/
    goto LABEL_6; /*0x45267e*/
  result = _strcmpi((char *)(a2 + 3720), (char *)(*((_DWORD *)this + 328) + 36)); /*0x452695*/
  if ( result ) /*0x45269f*/
    goto LABEL_6; /*0x45269f*/
  result = *(_DWORD *)(a2 + 5884); /*0x4526a1*/
  if ( result == -1 ) /*0x4526aa*/
  {
    result = *(this + 1794); /*0x4526c2*/
    if ( result < *(_DWORD *)(*((_DWORD *)this + 328) + 5344) ) /*0x4526cf*/
    {
      LOBYTE(result) = 1; /*0x4526d2*/
      return result; /*0x4526d5*/
    }
  }
  else if ( result <= 0 || result > 3 ) /*0x4526b3*/
  {
    goto LABEL_6; /*0x4526b3*/
  }
  if ( *(this + 1794) ) /*0x4526d8*/
  {
LABEL_6:
    LOBYTE(result) = 0; /*0x4526b5*/
    return result; /*0x4526b9*/
  }
  LOBYTE(result) = 1; /*0x4526e3*/
  return result; /*0x4526b5*/
}



// ==== 0x004526F0  BuildingClass::SelectVocOrSfx  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::SelectVocOrSfx(BuildingClass *this)
{
  char UpgradeLevel; // al
  int v3; // ebx
  int *Upgrades; // edi
  int result; // eax
  int v6; // eax
  int *v7; // esi
  bool v8; // zf
  int v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // [esp+14h] [ebp+4h]

  UpgradeLevel = this->UpgradeLevel; /*0x4526fa*/
  if ( UpgradeLevel && (v3 = 0, UpgradeLevel > 0) ) /*0x452708*/
  {
    Upgrades = this->Upgrades; /*0x45270a*/
    while ( 1 ) /*0x452710*/
    {
      if ( *Upgrades ) /*0x452710*/
      {
        result = TechnoClass::GetAudioEntry((TechnoClass *)*Upgrades, v12); /*0x452717*/
        if ( *(_DWORD *)result ) /*0x45271c*/
          break; /*0x45271c*/
      }
      ++v3; /*0x45272c*/
      ++Upgrades; /*0x45272d*/
      if ( v3 >= this->UpgradeLevel ) /*0x452732*/
        goto LABEL_7; /*0x452732*/
    }
  }
  else
  {
LABEL_7:
    if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 256))(this) ) /*0x452738*/
    {
      v6 = this->Audio8[4]; /*0x452742*/
      if ( v6 < this->Audio8[2] ) /*0x452750*/
      {
        v7 = *(int **)(this->Audio7[4] + 4 * v6); /*0x452758*/
        v8 = (unsigned __int8)Audio::IsLoud(v7 + 84) == 0; /*0x452766*/
        v9 = v7[432]; /*0x452768*/
        if ( v8 ) /*0x45276e*/
        {
          v11 = *(_DWORD *)(v9 + 3588); /*0x452792*/
          result = v9 + 3588; /*0x452798*/
          if ( v11 ) /*0x45279f*/
            return result; /*0x45279f*/
        }
        else
        {
          v10 = *(_DWORD *)(v9 + 3616); /*0x452770*/
          result = v9 + 3616; /*0x452776*/
          if ( v10 ) /*0x45277d*/
            return result; /*0x45277d*/
        }
        return (*(int (__thiscall **)(int *, _DWORD))(*v7 + 1016))(v7, 0); /*0x45278f*/
      }
    }
    return (int)TechnoClass::SelectVocOrSfx((float *)this, v12); /*0x4527b7*/
  }
  return result; /*0x45278b*/
}



// ==== 0x004527D0  BuildingClass::HasOccupantAudio  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::HasOccupantAudio(BuildingClass *this)
{
  int result; // eax
  char UpgradeLevel; // al
  int v3; // esi
  int v4; // edx
  int *Upgrades; // ecx

  result = (int)this->Type; /*0x4527d0*/
  if ( *(_BYTE *)(result + 3233) ) /*0x4527d8*/
  {
LABEL_2:
    LOBYTE(result) = 1; /*0x4527e2*/
    return result; /*0x4527e6*/
  }
  UpgradeLevel = this->UpgradeLevel; /*0x4527e7*/
  if ( UpgradeLevel ) /*0x4527ef*/
  {
    v3 = UpgradeLevel; /*0x4527f1*/
    v4 = 0; /*0x4527f4*/
    if ( UpgradeLevel > 0 ) /*0x4527f8*/
    {
      Upgrades = this->Upgrades; /*0x4527fa*/
      do /*0x452800*/
      {
        result = *Upgrades; /*0x452800*/
        if ( *Upgrades ) /*0x452800*/
        {
          if ( *(_BYTE *)(result + 3233) ) /*0x452806*/
            goto LABEL_2; /*0x45280e*/
        }
        ++v4; /*0x452810*/
        ++Upgrades; /*0x452811*/
      }
      while ( v4 < v3 ); /*0x452800*/
    }
  }
  LOBYTE(result) = 0; /*0x452818*/
  return result; /*0x4527e2*/
}



// ==== 0x00452820  Warhead::RemoveFromDamageList  this=Warhead  sig=csp ====
char __thiscall Warhead::RemoveFromDamageList(Warhead *this, int a2)
{
  Warhead *v2; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // edx

  v2 = this + 1644; /*0x452827*/
  v3 = (*(int (__thiscall **)(Warhead *, int *))(this->u32_66C + 16))(this + 1644, &a2); /*0x452834*/
  if ( v3 != -1 ) /*0x45283a*/
  {
    v4 = *(_DWORD *)&v2[16]; /*0x45283c*/
    if ( v3 < v4 ) /*0x452841*/
    {
      v5 = v4 - 1; /*0x452843*/
      for ( *(_DWORD *)&v2[16] = v5; /*0x452849*/
            v3 < *(_DWORD *)&v2[16];
            *(_DWORD *)(*(_DWORD *)&v2[4] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&v2[4] + 4 * v3) )
      {
        ++v3; /*0x45284e*/
      }
    }
  }
  v6 = *(_DWORD *)&v2[8]; /*0x45285d*/
  if ( *(_DWORD *)&v2[16] < v6 /*0x452887*/
    || ((LOBYTE(v7) = v2[13], (_BYTE)v7) || !v6)
    && (v7 = *(_DWORD *)&v2[20], v7 > 0)
    && (LOBYTE(v7) = (*(int (__thiscall **)(Warhead *, int, _DWORD))(*(_DWORD *)v2 + 8))(v2, v6 + v7, 0), (_BYTE)v7) )
  {
    v7 = *(_DWORD *)&v2[16]; /*0x452889*/
    v8 = *(_DWORD *)&v2[4]; /*0x45288c*/
    *(_DWORD *)&v2[16] = v7 + 1; /*0x452892*/
    *(_DWORD *)(v8 + 4 * v7) = a2; /*0x452899*/
  }
  return v7; /*0x45289c*/
}



// ==== 0x004528A0  ObjectClass::method_4528A0  this=ObjectClass  sig=csp ====
bool __thiscall sub_4528A0(TechnoClass *this, int a2)
{
  double v2; // st7
  int *v4; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // ebp
  _DWORD *v8; // eax
  int v9; // edi
  int v10; // edx
  int v11; // eax
  int v13; // [esp+20h] [ebp-Ch] BYREF
  int v14; // [esp+24h] [ebp-8h]
  int v15; // [esp+28h] [ebp-4h]

  v4 = (int *)(*(int (__thiscall **)(TechnoClass *, int *))(this->vtable0 + 72))(this, &v13); /*0x4528b2*/
  v5 = *v4; /*0x4528b5*/
  v6 = v4[1]; /*0x4528bb*/
  v7 = v4[2]; /*0x4528c0*/
  v8 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a2 + 72))(a2, &v13); /*0x4528c8*/
  v9 = v5 - *v8; /*0x4528d2*/
  v10 = v8[2]; /*0x4528d9*/
  v14 = v6 - v8[1]; /*0x4528dc*/
  v13 = v9; /*0x4528e6*/
  v15 = v7 - v10; /*0x4528ea*/
  Math::Sqrt((double)v9 * (double)v9 + (double)(v7 - v10) * (double)(v7 - v10) + (double)v14 * (double)v14); /*0x45290f*/
  LOWORD(v11) = Math::RoundToInt(v2); /*0x452917*/
  return v11 <= *(_DWORD *)(*((_DWORD *)this + 328) + 5900) << 8; /*0x452922*/
}



// ==== 0x00452940  CellClass::Get  this=CellClass  sig=csp ====
bool __thiscall CellClass::Get(CellClass *this, _DWORD *a2)
{
  double v2; // st7
  int *v4; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // ebp
  int *Coords; // eax
  int v9; // edi
  int v10; // edx
  int v11; // eax
  int v13; // [esp+1Ch] [ebp-Ch] BYREF
  int v14; // [esp+20h] [ebp-8h]
  int v15; // [esp+24h] [ebp-4h]

  v4 = (int *)(*(int (__thiscall **)(CellClass *, int *))(this->mapCoords[0] + 72))(this, &v13); /*0x452952*/
  v5 = *v4; /*0x452955*/
  v6 = v4[1]; /*0x45295f*/
  v7 = v4[2]; /*0x452963*/
  Coords = CellClass::GetCoords((CellClass *)a2, &v13); /*0x452966*/
  v9 = v5 - *Coords; /*0x452972*/
  v10 = Coords[2]; /*0x452979*/
  v14 = v6 - Coords[1]; /*0x45297c*/
  v13 = v9; /*0x452986*/
  v15 = v7 - v10; /*0x45298a*/
  Math::Sqrt((double)v9 * (double)v9 + (double)(v7 - v10) * (double)(v7 - v10) + (double)v14 * (double)v14); /*0x4529af*/
  LOWORD(v11) = Math::RoundToInt(v2); /*0x4529b7*/
  return v11 <= *(_DWORD *)(*((_DWORD *)this + 328) + 5900) << 8; /*0x4529c2*/
}



// ==== 0x00452A40  BuildingClass::DemolishBridgeCheck  this=BuildingClass  sig=csp ====
_DWORD *__thiscall BuildingClass::DemolishBridgeCheck(BuildingClass *this, int a2)
{
  _DWORD *result; // eax
  int v4; // esi
  _DWORD *v5; // eax
  int v6; // edi
  int v7; // ecx
  int v8; // edx
  Cell *v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // edi
  int v12; // ebp
  _DWORD *v13; // [esp+4h] [ebp-20h]
  int v14; // [esp+8h] [ebp-1Ch]
  char v15; // [esp+Ch] [ebp-18h]
  __int16 v16[2]; // [esp+10h] [ebp-14h] BYREF
  int v17; // [esp+14h] [ebp-10h] BYREF
  _BYTE v18[12]; // [esp+18h] [ebp-Ch] BYREF
  __int16 v19; // [esp+28h] [ebp+4h]
  __int16 v20; // [esp+2Ah] [ebp+6h]

  result = (_DWORD *)dword_A8E7AC; /*0x452a40*/
  if ( !dword_A8E7AC ) /*0x452a4d*/
  {
    result = &this->Type->TechnoTypeClass; /*0x452a53*/
    if ( *((_BYTE *)result + 5822) ) /*0x452a59*/
    {
      v15 = a2 == 1; /*0x452a79*/
      v4 = 0; /*0x452a89*/
      v5 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass + 18))(this, v18); /*0x452a8b*/
      v13 = &unk_818CA0; /*0x452a90*/
      v6 = *v5 / 256; /*0x452ab3*/
      v7 = v5[1] / 256; /*0x452ab6*/
      v19 = v6; /*0x452ab9*/
      v20 = v7; /*0x452abe*/
      while ( 1 ) /*0x452ad1*/
      {
        v8 = v4 & 7; /*0x452ad1*/
        LOWORD(v14) = v6 + LOWORD(g_DDrawSurfaceManager.scenario[v8 + 82]); /*0x452aed*/
        HIWORD(v14) = v7 + HIWORD(g_DDrawSurfaceManager.scenario[v8 + 82]); /*0x452af2*/
        *(_DWORD *)v16 = v14; /*0x452aff*/
        v9 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v16); /*0x452b09*/
        v10 = Cell::IsBridge(v9); /*0x452b10*/
        v11 = v10; /*0x452b15*/
        if ( v10 ) /*0x452b19*/
        {
          if ( *(_BYTE *)(v10[328] + 5823) ) /*0x452b21*/
          {
            v12 = (*(int (__thiscall **)(_DWORD *))(*v10 + 56))(v10); /*0x452b32*/
            if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 14))(this) == v12 /*0x452b5f*/
              && (v4 & 3) == (((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(v11 + 226), &v17) >> 12) + 1) >> 1)
                            & 3) )
            {
              this->LaserFenceFrame |= *v13; /*0x452b79*/
              BuildingClass::DemolishBridgeAnim(this, v4, v15); /*0x452b7f*/
            }
          }
        }
        result = v13 + 1; /*0x452b8b*/
        v4 = ((_BYTE)v4 + 2) & 7; /*0x452b8e*/
        if ( (int)++v13 >= (int)&dword_818CB0 ) /*0x452b9a*/
          break; /*0x452b9a*/
        LOWORD(v7) = v20; /*0x452aca*/
        LOWORD(v6) = v19; /*0x452aca*/
      }
    }
  }
  return result; /*0x452ba3*/
}



// ==== 0x00452BB0  BuildingClass::FindBridgeSegment  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::FindBridgeSegment(BuildingClass *this, int a2, char a3, int a4)
{
  int v4; // ebx
  BuildingTypeClass *Type; // eax
  char v7; // si
  int v8; // ebp
  _DWORD *v9; // eax
  int result; // eax
  _WORD *v11; // esi
  Cell *v12; // eax
  _DWORD *v13; // eax
  int v14; // esi
  int v15; // ebx
  int v16; // ebx
  int v17; // [esp+10h] [ebp-20h]
  int v18; // [esp+14h] [ebp-1Ch]
  int v19; // [esp+18h] [ebp-18h]
  _WORD *i; // [esp+1Ch] [ebp-14h]
  int v21; // [esp+20h] [ebp-10h] BYREF
  char v22[12]; // [esp+24h] [ebp-Ch] BYREF

  v4 = 1; /*0x452bba*/
  v17 = 1; /*0x452bc4*/
  if ( a4 >= 0 ) /*0x452bc8*/
  {
    v4 = a4; /*0x452bf3*/
  }
  else
  {
    Type = this->Type; /*0x452bca*/
    if ( !Type->LaserFencePost ) /*0x452bd0*/
      goto LABEL_7; /*0x452bd0*/
    v4 = Type->? >> 8; /*0x452be0*/
    v17 = v4; /*0x452be6*/
    if ( v4 > 1 ) /*0x452bea*/
      goto LABEL_7; /*0x452bea*/
    v4 = 1; /*0x452bec*/
  }
  v17 = v4; /*0x452bf5*/
LABEL_7:
  v7 = a2; /*0x452bf9*/
  v8 = a2 & 3; /*0x452c08*/
  v9 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 18))(this, v22); /*0x452c0b*/
  LOWORD(a4) = *v9 / 256; /*0x452c1e*/
  HIWORD(a4) = v9[1] / 256; /*0x452c32*/
  result = 0; /*0x452c3b*/
  a2 = a4; /*0x452c3d*/
  a4 = 0; /*0x452c43*/
  v19 = 0; /*0x452c47*/
  if ( v4 <= 0 ) /*0x452c4b*/
    return result; /*0x452c4b*/
  v11 = (_WORD *)(4 * (v7 & 7) + 9041544); /*0x452c54*/
  for ( i = v11; ; v11 = i ) /*0x452c5b*/
  {
    LOWORD(v18) = a2 + *v11; /*0x452c76*/
    HIWORD(v18) = HIWORD(a2) + v11[1]; /*0x452c7b*/
    a2 = v18; /*0x452c8e*/
    v12 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x452c92*/
    v13 = Cell::IsBridge(v12); /*0x452c99*/
    v14 = (int)v13; /*0x452c9e*/
    if ( !v13 ) /*0x452ca2*/
      goto LABEL_19; /*0x452ca2*/
    if ( *(_BYTE *)(v13[328] + 5822) ) /*0x452caa*/
    {
      v15 = (*(int (__thiscall **)(_DWORD *))(*v13 + 56))(v13); /*0x452cbb*/
      if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 14))(this) == v15 ) /*0x452cc6*/
        a4 = v14; /*0x452cc8*/
    }
    if ( !a3 ) /*0x452cd2*/
      break; /*0x452cd2*/
    if ( !*(_BYTE *)(*(_DWORD *)(v14 + 1312) + 5823) ) /*0x452cda*/
      break; /*0x452cda*/
    v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 56))(v14); /*0x452ceb*/
    if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 14))(this) != v16 /*0x452d15*/
      || (((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(v14 + 904), &v21) >> 12) + 1) >> 1) & 3) != v8 )
    {
      break; /*0x452d15*/
    }
    v4 = v17; /*0x452d17*/
LABEL_19:
    if ( ++v19 >= v4 ) /*0x452d26*/
      return a4; /*0x452d26*/
  }
  return a4; /*0x452d30*/
}



// ==== 0x00452D40  ObjectClass::ProcessDataBuildingClass  this=ObjectClass  sig=csp ====
int ProcessDataBuildingClass(ObjectClass *this)
{
  int result; // eax
  int i; // edi
  BuildingClass *v3; // esi

  result = stru_A8EB00.ObjectTypeClass[20]; /*0x452d40*/
  for ( i = 0; i < stru_A8EB00.ObjectTypeClass[20]; ++i ) /*0x452d4a*/
  {
    v3 = *(BuildingClass **)(stru_A8EB00.ObjectTypeClass[17] + 4 * i); /*0x452d52*/
    if ( v3 && v3->Type->LaserFencePost && !dword_A8E7AC && v3->? && !v3->? ) /*0x452d7c*/
    {
      BuildingClass::DemolishBridge(v3); /*0x452d8a*/
      BuildingClass::DemolishBridge(v3); /*0x452d93*/
      BuildingClass::DemolishBridge(v3); /*0x452d9c*/
      BuildingClass::DemolishBridge(v3); /*0x452da5*/
      BuildingClass::RepairPlacement(v3, 1); /*0x452dae*/
    }
    result = stru_A8EB00.ObjectTypeClass[20]; /*0x452db3*/
  }
  return result; /*0x452dbe*/
}



// ==== 0x00452DC0  BuildingClass::DemolishBridge  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::DemolishBridge(BuildingClass *this)
{
  int BridgeSegment; // eax
  int v3; // ebp
  char *v4; // ecx
  _DWORD *v5; // eax
  _WORD *v6; // ebx
  __int16 v7; // cx
  Cell *v8; // eax
  _DWORD *v9; // eax
  int *v10; // esi
  int v11; // ebx
  int v12; // eax
  int v13; // esi
  int v14; // eax
  _DWORD *v15; // eax
  int *v16; // esi
  Cell *v17; // eax
  _DWORD *v18; // eax
  __int16 v19[2]; // [esp+10h] [ebp-20h] BYREF
  int v20; // [esp+14h] [ebp-1Ch]
  _DWORD *v21; // [esp+18h] [ebp-18h]
  _WORD *i; // [esp+1Ch] [ebp-14h]
  unsigned int v23; // [esp+20h] [ebp-10h]
  _DWORD v24[3]; // [esp+24h] [ebp-Ch] BYREF
  int v25; // [esp+34h] [ebp+4h]
  int v26; // [esp+34h] [ebp+4h]
  int v27; // [esp+34h] [ebp+4h]

  if ( !dword_A8E7AC ) /*0x452dd0*/
  {
    if ( this->Type->LaserFencePost ) /*0x452ddc*/
    {
      BridgeSegment = BuildingClass::FindBridgeSegment(this, v25, 0, -1); /*0x452e08*/
      v21 = (_DWORD *)BridgeSegment; /*0x452e0f*/
      if ( BridgeSegment ) /*0x452e13*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)BridgeSegment + 388))(BridgeSegment) != 19 ) /*0x452e26*/
        {
          v3 = 0; /*0x452e31*/
          if ( dword_A83C78 > 0 ) /*0x452e35*/
          {
            v4 = (char *)dword_A83C6C; /*0x452e37*/
            do /*0x452e4e*/
            {
              if ( *(_BYTE *)(*(_DWORD *)v4 + 5823) ) /*0x452e3f*/
                break; /*0x452e46*/
              ++v3; /*0x452e48*/
              v4 += 4; /*0x452e49*/
            }
            while ( v3 < dword_A83C78 ); /*0x452e4e*/
          }
          if ( v3 < dword_A83C78 ) /*0x452e52*/
          {
            v5 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD *))this->TechnoClass + 18))(this, v24); /*0x452e61*/
            LOWORD(v20) = *v5 / 256; /*0x452e74*/
            HIWORD(v20) = v5[1] / 256; /*0x452e88*/
            *(_DWORD *)v19 = v20; /*0x452e93*/
            v6 = (_WORD *)(4 * (v25 & 7) + 9041544); /*0x452ea0*/
            for ( i = v6; ; v6 = i ) /*0x452ea7*/
            {
              v7 = v6[1] + v19[1]; /*0x452ebe*/
              LOWORD(v20) = v19[0] + *v6; /*0x452ec2*/
              HIWORD(v20) = v7; /*0x452ec7*/
              *(_DWORD *)v19 = v20; /*0x452eda*/
              v8 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x452ede*/
              v9 = Cell::IsBridge(v8); /*0x452ee5*/
              if ( v9 == v21 ) /*0x452eee*/
                break; /*0x452eee*/
              v10 = (int *)*((_DWORD *)dword_A83C6C + v3); /*0x452efc*/
              v11 = *v10; /*0x452f01*/
              v12 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 15))(this); /*0x452f03*/
              v13 = (*(int (__thiscall **)(int *, int))(v11 + 140))(v10, v12); /*0x452f13*/
              v24[2] = 0; /*0x452f21*/
              LOWORD(v23) = (v25 & 3) << 13; /*0x452f38*/
              v24[0] = (v19[0] << 8) + 128; /*0x452f3d*/
              v14 = *(_DWORD *)v13; /*0x452f48*/
              v24[1] = (v19[1] << 8) + 128; /*0x452f54*/
              if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD *, _DWORD))(v14 + 216))( /*0x452f68*/
                      v13,
                      v24,
                      (unsigned __int8)(((v23 >> 7) + 1) >> 1)) )
              {
                if ( v13 ) /*0x452f78*/
                  (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 32))(v13, 1); /*0x452f80*/
                BuildingClass::DemolishBridgeAnim(this, v25, 0); /*0x452f88*/
                return; /*0x452f94*/
              }
            }
            v15 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD *))this->TechnoClass + 18))(this, v24); /*0x452fa0*/
            LOWORD(v26) = *v15 / 256; /*0x452fb8*/
            HIWORD(v26) = v15[1] / 256; /*0x452fcc*/
            *(_DWORD *)v19 = v26; /*0x452fd5*/
            do /*0x453048*/
            {
              v16 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x452fe8*/
              if ( BuildingClass::FindByCellHash((BuildingClass *)v16) != -1 ) /*0x452ff4*/
                CellClass::ReduceTiberium(v16, 12); /*0x452ffa*/
              if ( v16[17] == 126 ) /*0x453002*/
                Helper_486E30((ObjectClass *)v16); /*0x453006*/
              LOWORD(v27) = *v6 + v19[0]; /*0x45301c*/
              HIWORD(v27) = v19[1] + v6[1]; /*0x453021*/
              *(_DWORD *)v19 = v27; /*0x453034*/
              v17 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x453038*/
              v18 = Cell::IsBridge(v17); /*0x45303f*/
            }
            while ( v18 != v21 ); /*0x453048*/
          }
        }
      }
    }
  }
}



// ==== 0x00453060  BuildingClass::DemolishBridgeAnim  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::DemolishBridgeAnim(BuildingClass *this, int a2, char a3)
{
  BuildingClass *v3; // ebx
  int result; // eax
  int v5; // ebp
  char v6; // si
  int v7; // edi
  _DWORD *v8; // eax
  _WORD *v9; // esi
  Cell *v10; // eax
  int v11; // esi
  int v12; // ebp
  int v13; // ebp
  int v14; // ebx
  int *v15; // eax
  char v16; // [esp+14h] [ebp-38h]
  int v17; // [esp+18h] [ebp-34h]
  int v18; // [esp+24h] [ebp-28h]
  __int64 v19; // [esp+28h] [ebp-24h]
  int v20; // [esp+28h] [ebp-24h]
  _WORD *i; // [esp+30h] [ebp-1Ch]
  int v23; // [esp+38h] [ebp-14h]
  int v24; // [esp+3Ch] [ebp-10h] BYREF
  _BYTE v25[12]; // [esp+40h] [ebp-Ch] BYREF

  v3 = this; /*0x453064*/
  result = (int)this->Type; /*0x453068*/
  if ( *(_BYTE *)(result + 5822) ) /*0x453073*/
  {
    v5 = *(int *)(result + 1464) >> 8; /*0x453087*/
    v18 = v5; /*0x45308d*/
    if ( v5 <= 1 ) /*0x453091*/
    {
      v5 = 1; /*0x453093*/
      v18 = 1; /*0x453098*/
    }
    v6 = a2; /*0x45309c*/
    v7 = a2 & 3; /*0x4530a8*/
    v23 = v7; /*0x4530ae*/
    v8 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass + 18))(this, v25); /*0x4530b2*/
    HIWORD(v19) = 0; /*0x4530b7*/
    LOWORD(v19) = *v8 / 256; /*0x4530cd*/
    *(_DWORD *)((char *)&v19 + 2) = (unsigned __int16)(v8[1] / 256); /*0x4530e1*/
    a2 = v19; /*0x4530ec*/
    v9 = (_WORD *)(4 * (v6 & 7) + 9041544); /*0x4530f9*/
    for ( i = v9; ; v9 = i ) /*0x453100*/
    {
      LOWORD(v20) = a2 + *v9; /*0x45311b*/
      HIWORD(v20) = HIWORD(a2) + v9[1]; /*0x453120*/
      a2 = v20; /*0x453133*/
      v10 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x453137*/
      result = (int)Cell::IsBridge(v10); /*0x45313e*/
      v11 = result; /*0x453143*/
      if ( result ) /*0x453147*/
      {
        LOBYTE(result) = *(_BYTE *)(*(_DWORD *)(result + 1312) + 5823); /*0x453153*/
        if ( !(_BYTE)result ) /*0x45315b*/
          return result; /*0x45315b*/
        v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 56))(v11); /*0x453168*/
        result = (*((int (__thiscall **)(BuildingClass *))v3->TechnoClass + 14))(v3); /*0x45316e*/
        if ( result != v12 ) /*0x453173*/
          return result; /*0x453173*/
        result = (int)ProgressTimer::GetValue((ProgressTimer *)(v11 + 904), &v24); /*0x453184*/
        if ( (((unsigned int)((*(_DWORD *)result >> 12) + 1) >> 1) & 3) != v7 ) /*0x453196*/
          return result; /*0x453196*/
        if ( a3 ) /*0x4531a2*/
        {
          v13 = *(_DWORD *)(v11 + 108); /*0x4531ab*/
          v14 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008); /*0x4531b1*/
          v15 = (int *)(*(int (__thiscall **)(int, _BYTE *, _DWORD, _DWORD))(*(_DWORD *)v11 + 72))(v11, v25, 0, 0); /*0x4531c2*/
          CreateSmokeEffectAt(v13, v14, *v15, v15[1], v15[2], v16, v17); /*0x4531de*/
          v17 = 0; /*0x4531ea*/
          v16 = 1; /*0x4531ec*/
          (*(void (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v11 + 364))( /*0x4531fe*/
            v11,
            v11 + 108,
            0,
            *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
            0,
            1);
          v3 = this; /*0x453204*/
          v5 = v18; /*0x453208*/
          v7 = v23; /*0x45320c*/
        }
        else
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 248))(v11); /*0x453216*/
          v5 = v18; /*0x45321c*/
        }
      }
      result = ++HIDWORD(v19); /*0x453224*/
      if ( SHIDWORD(v19) >= v5 ) /*0x45322b*/
        return result; /*0x45322b*/
    }
  }
  return result; /*0x453231*/
}



// ==== 0x00453240  BuildingClass::TraverseBridgeSegments  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::TraverseBridgeSegments(BuildingClass *this)
{
  Cell *v2; // eax
  Cell *v3; // ebp
  unsigned int v4; // esi
  void *vtable0; // eax
  BuildingClass *v6; // ebx
  unsigned int v7; // esi
  int v8; // edx
  _WORD *v9; // edi
  __int16 v10; // cx
  int i; // ecx
  Cell *v12; // eax
  BuildingClass *v13; // eax
  BuildingTypeClass *Type; // eax
  __int16 v15; // cx
  __int16 v17[2]; // [esp+10h] [ebp-10h] BYREF
  void *v18; // [esp+14h] [ebp-Ch]
  int v19; // [esp+18h] [ebp-8h]
  int v20; // [esp+1Ch] [ebp-4h] BYREF

  v2 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)this); /*0x45324f*/
  if ( v2 ) /*0x453256*/
  {
    v2 = (Cell *)Cell::IsBridge(v2); /*0x45325e*/
    v3 = v2; /*0x453263*/
    if ( v2 ) /*0x453267*/
    {
      v2 = *(Cell **)&v2[1].__pad_250[48]; /*0x45326d*/
      if ( v2[8].__pad_144[123] ) /*0x453273*/
      {
        v4 = *ProgressTimer::GetValue((ProgressTimer *)v3[1].__pad_E8, &v20); /*0x453291*/
        vtable0 = this->TechnoClass; /*0x453293*/
        v6 = 0; /*0x453299*/
        v7 = (((v4 >> 12) + 1) >> 1) & 3; /*0x45329d*/
        v18 = vtable0; /*0x4532a0*/
        v8 = v7 & 7; /*0x4532a6*/
        v9 = (_WORD *)(4 * v8 + 9041544); /*0x4532b1*/
        v10 = (_WORD)vtable0 + LOWORD(g_DDrawSurfaceManager.scenario[v8 + 82]); /*0x4532b8*/
        LOWORD(v8) = HIWORD(g_DDrawSurfaceManager.scenario[v8 + 82]); /*0x4532bb*/
        LOWORD(v19) = v10; /*0x4532bf*/
        HIWORD(v19) = HIWORD(vtable0) + v8; /*0x4532c9*/
        for ( i = v19; ; i = v19 ) /*0x4532ce*/
        {
          *(_DWORD *)v17 = i; /*0x4532d5*/
          if ( (_WORD)i == (_WORD)vtable0 ) /*0x4532d9*/
          {
            LOBYTE(v2) = BYTE2(v18); /*0x4532db*/
            if ( v17[1] == HIWORD(v18) ) /*0x4532e5*/
              break; /*0x4532e5*/
          }
          v12 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v17); /*0x4532f1*/
          v13 = (BuildingClass *)Cell::IsBridge(v12); /*0x4532f8*/
          v6 = v13; /*0x4532fd*/
          if ( !v13 ) /*0x453301*/
            goto LABEL_13; /*0x453301*/
          Type = v13->Type; /*0x453303*/
          if ( Type->LaserFencePost ) /*0x453309*/
          {
            LOBYTE(v2) = BuildingClass::DemolishBridgeAnim(v6, v7 | 4, 0); /*0x45334c*/
            break; /*0x45334c*/
          }
          if ( !Type->LaserFence ) /*0x45331b*/
            goto LABEL_13; /*0x45331b*/
          LOWORD(vtable0) = v17[0]; /*0x45331d*/
          v15 = v9[1]; /*0x453324*/
          LOWORD(v19) = v17[0] + *v9; /*0x453330*/
          v18 = *(void **)v17; /*0x453335*/
          HIWORD(v19) = v17[1] + v15; /*0x453339*/
        }
        if ( v6 ) /*0x453353*/
          return (char)v2; /*0x453353*/
LABEL_13:
        LOBYTE(v2) = (*(char (__thiscall **)(Cell *))(v3->Cell_field_0x0 + 248))(v3); /*0x453355*/
      }
    }
  }
  return (char)v2; /*0x453360*/
}



// ==== 0x004533A0  BuildingClass::RepairPlacement  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::RepairPlacement(BuildingClass *this, char a2)
{
  BuildingClass *v2; // ebx
  int result; // eax
  _DWORD *v4; // eax
  char v5; // si
  int v6; // kr00_4
  int v7; // edx
  __int16 v8; // di
  __int16 v9; // cx
  Cell *v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // edi
  int v13; // esi
  int v14; // ebp
  _BYTE *BridgeSegment; // esi
  int v16; // ebx
  int v17; // esi
  _DWORD *Value; // eax
  _DWORD *v19; // esi
  int v20; // eax
  _DWORD *v21; // ebp
  __int16 v22; // dx
  __int16 v23; // ax
  Cell *v24; // eax
  _DWORD *v25; // eax
  bool v26; // zf
  bool v27; // [esp+6h] [ebp-4Eh]
  char v28; // [esp+7h] [ebp-4Dh]
  int v29; // [esp+8h] [ebp-4Ch]
  __int16 v30[2]; // [esp+Ch] [ebp-48h] BYREF
  int v31; // [esp+10h] [ebp-44h]
  int v32; // [esp+14h] [ebp-40h]
  int v33; // [esp+18h] [ebp-3Ch]
  int v34; // [esp+1Ch] [ebp-38h]
  BuildingClass *v35; // [esp+20h] [ebp-34h]
  int v36; // [esp+24h] [ebp-30h]
  int v37; // [esp+28h] [ebp-2Ch]
  int v38; // [esp+2Ch] [ebp-28h]
  _DWORD *v39; // [esp+30h] [ebp-24h]
  _DWORD *v40; // [esp+34h] [ebp-20h]
  int v41; // [esp+38h] [ebp-1Ch]
  _WORD *v42; // [esp+3Ch] [ebp-18h]
  int v43; // [esp+40h] [ebp-14h] BYREF
  int v44; // [esp+44h] [ebp-10h] BYREF
  char v45[12]; // [esp+48h] [ebp-Ch] BYREF

  v2 = this; /*0x4533a4*/
  v35 = this; /*0x4533a6*/
  result = (int)this->Type; /*0x4533aa*/
  if ( *(_BYTE *)(result + 5822) && this->? && !this->? ) /*0x4533cc*/
  {
    v37 = *(int *)(result + 1464) >> 8; /*0x4533e6*/
    if ( v37 <= 1 ) /*0x4533ea*/
      v37 = 1; /*0x4533ec*/
    v27 = 0; /*0x4533f8*/
    if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 212))(this) /*0x45341e*/
      && v2->StuffEnabled
      && (*((int (__thiscall **)(BuildingClass *))v2->TechnoClass + 97))(v2) != 19 )
    {
      v27 = (*((int (__thiscall **)(BuildingClass *))v2->TechnoClass + 97))(v2) != 18; /*0x45342f*/
    }
    v32 = 0; /*0x453437*/
    v41 = 4; /*0x45343f*/
    do /*0x453450*/
    {
      v4 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, char *))v2->TechnoClass + 18))(v2, v45); /*0x453450*/
      v5 = v32; /*0x453465*/
      v6 = v4[1]; /*0x453470*/
      v7 = v32 & 7; /*0x453474*/
      v8 = *v4 / 256 + LOWORD(g_DDrawSurfaceManager.scenario[v7 + 82]); /*0x453489*/
      v42 = (_WORD *)(4 * v7 + 9041544); /*0x45348c*/
      v9 = HIWORD(g_DDrawSurfaceManager.scenario[v7 + 82]); /*0x453490*/
      LOWORD(v36) = v8; /*0x453494*/
      HIWORD(v36) = v6 / 256 + v9; /*0x4534a3*/
      *(_DWORD *)v30 = v36; /*0x4534b2*/
      v10 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v30); /*0x4534b6*/
      v11 = Cell::IsBridge(v10); /*0x4534bd*/
      v12 = v11; /*0x4534c2*/
      v13 = v5 & 3; /*0x4534c4*/
      v34 = v13; /*0x4534c9*/
      if ( v11 ) /*0x4534cd*/
      {
        if ( *(_BYTE *)(v11[328] + 5823) ) /*0x4534d9*/
        {
          v14 = (*(int (__thiscall **)(_DWORD *))(*v11 + 56))(v11); /*0x4534ee*/
          if ( (*((int (__thiscall **)(BuildingClass *))v2->TechnoClass + 14))(v2) == v14 /*0x45351c*/
            && (((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(v12 + 226), &v43) >> 12) + 1) >> 1) & 3) == v13 )
          {
            v40 = v12; /*0x453526*/
            v39 = v12; /*0x45352c*/
            if ( a2 ) /*0x453530*/
              goto LABEL_20; /*0x453530*/
            if ( v27 ) /*0x453538*/
            {
              if ( (int)v12[390] >= 8 ) /*0x453547*/
                goto LABEL_20; /*0x453547*/
            }
            else if ( (int)v12[390] < 8 ) /*0x453556*/
            {
LABEL_20:
              BridgeSegment = 0; /*0x453561*/
              if ( v27 ) /*0x453569*/
                BridgeSegment = (_BYTE *)BuildingClass::FindBridgeSegment(v2, v32, 1, -1); /*0x45357b*/
              v16 = 12; /*0x453581*/
              v29 = 12; /*0x453589*/
              v31 = 12; /*0x45358d*/
              if ( v34 == 2 ) /*0x453591*/
              {
                v16 = 8; /*0x453593*/
                v29 = 8; /*0x453595*/
                v31 = 8; /*0x453599*/
              }
              v28 = 0; /*0x4535a1*/
              if ( v27 /*0x4535f4*/
                && BridgeSegment
                && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)BridgeSegment + 848))(BridgeSegment)
                && BridgeSegment[1770]
                && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)BridgeSegment + 388))(BridgeSegment) != 19
                && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)BridgeSegment + 388))(BridgeSegment) != 18 )
              {
                v28 = 1; /*0x4535fa*/
                switch ( v32 ) /*0x453604*/
                {
                  case 0: /*0x453604*/
                    v16 = 5; /*0x45360b*/
                    v29 = 4; /*0x453610*/
                    v31 = 6; /*0x453618*/
                    break; /*0x453620*/
                  case 2: /*0x453604*/
                    v16 = 1; /*0x453639*/
                    v29 = 0; /*0x45363e*/
                    v31 = 2; /*0x453642*/
                    break; /*0x45364a*/
                  case 4: /*0x453604*/
                    v16 = 6; /*0x453622*/
                    v29 = 4; /*0x453627*/
                    v31 = 5; /*0x45362f*/
                    break; /*0x453637*/
                  case 6: /*0x453604*/
                    v16 = 2; /*0x45364c*/
                    v29 = 0; /*0x453651*/
                    v31 = 1; /*0x453655*/
                    break; /*0x453655*/
                  default:
                    break;
                }
              }
              v33 = 0; /*0x45365d*/
              do /*0x4537a8*/
              {
                if ( v33 >= v37 ) /*0x45366f*/
                  break; /*0x45366f*/
                if ( !*(_BYTE *)(v12[328] + 5823) ) /*0x45367b*/
                  break; /*0x45367b*/
                v17 = (*(int (__thiscall **)(_DWORD *))(*v12 + 56))(v12); /*0x453694*/
                if ( (*((int (__thiscall **)(BuildingClass *))v35->TechnoClass + 14))(v35) != v17 ) /*0x45369d*/
                  break; /*0x45369d*/
                Value = ProgressTimer::GetValue((ProgressTimer *)(v12 + 226), &v44); /*0x4536ae*/
                if ( (((unsigned int)((*Value >> 12) + 1) >> 1) & 3) != v34 ) /*0x4536c4*/
                  break; /*0x4536c4*/
                v39 = v12; /*0x4536ce*/
                if ( v12 == v40 ) /*0x4536d4*/
                  v12[390] = v16; /*0x4536d6*/
                else
                  v12[390] = v29; /*0x4536e2*/
                *((_BYTE *)v12 + 128) = 1; /*0x4536ec*/
                if ( v28 ) /*0x4536f5*/
                {
                  v19 = (_DWORD *)*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v30) + 57); /*0x453706*/
                  while ( v19 ) /*0x45370e*/
                  {
                    v20 = (*(int (__thiscall **)(_DWORD *))(*v19 + 44))(v19); /*0x453714*/
                    if ( v20 > 0 && (v20 <= 2 || v20 == 15) ) /*0x453723*/
                    {
                      v21 = (_DWORD *)v19[12]; /*0x453728*/
                      if ( (int)v19[27] > 0 ) /*0x453730*/
                        (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD, _DWORD, _DWORD *, int, int, _DWORD))(*v19 + 364))( /*0x45374d*/
                          v19,
                          v19 + 27,
                          0,
                          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
                          v12,
                          1,
                          1,
                          0);
                      v19 = v21; /*0x453753*/
                    }
                    else
                    {
                      v19 = (_DWORD *)v19[12]; /*0x453757*/
                    }
                  }
                }
                v22 = v30[0] + *v42; /*0x45376e*/
                v23 = v30[1] + v42[1]; /*0x453773*/
                ++v33; /*0x453778*/
                LOWORD(v38) = v22; /*0x45377c*/
                HIWORD(v38) = v23; /*0x453781*/
                *(_DWORD *)v30 = v38; /*0x45378e*/
                v24 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v30); /*0x453798*/
                v12 = Cell::IsBridge(v24); /*0x4537a4*/
              }
              while ( v12 ); /*0x4537a8*/
              if ( v28 ) /*0x4537b4*/
              {
                v25 = v39; /*0x4537b6*/
                if ( v39 ) /*0x4537bc*/
                {
                  if ( v40 == v39 ) /*0x4537c2*/
                  {
                    if ( v34 == 2 ) /*0x4537c9*/
                      v39[390] = 3; /*0x4537cb*/
                    else
                      v39[390] = 7; /*0x4537d7*/
                  }
                  else
                  {
                    v39[390] = v31; /*0x4537e7*/
                  }
                  *((_BYTE *)v25 + 128) = 1; /*0x4537ed*/
                }
              }
              v2 = v35; /*0x4537f4*/
            }
          }
        }
      }
      result = v41 - 1; /*0x4537f8*/
      v26 = v41 == 1; /*0x453806*/
      v32 = ((_BYTE)v32 + 2) & 7; /*0x453807*/
      --v41; /*0x45380b*/
    }
    while ( !v26 ); /*0x453450*/
  }
  return result; /*0x453818*/
}



// ==== 0x00453840  BuildingClass::RenderExitPosition  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::RenderExitPosition(BuildingClass *this)
{
  int *v2; // eax
  int v3; // edi
  int v4; // ebx
  int *v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  BuildingTypeClass *Type; // ecx
  int *v11; // eax
  int v12; // edi
  int v13; // ebx
  int *v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int *v18; // eax
  int v19; // edi
  int v20; // ebx
  int *v21; // eax
  int v22; // esi
  int v23; // ecx
  _DWORD *v24; // ecx
  int *v25; // eax
  int v26; // edi
  BuildingTypeClass *v27; // esi
  int v28; // ebx
  int v29; // ebp
  int v30; // ecx
  _DWORD *v31; // eax
  int *PrimaryFirePixelOffset; // [esp-4h] [ebp-28h]
  int *v33; // [esp+0h] [ebp-24h]
  int v34[2]; // [esp+10h] [ebp-14h] BYREF
  int v35[3]; // [esp+18h] [ebp-Ch] BYREF
  _DWORD *cell; // [esp+28h] [ebp+4h]
  int v37; // [esp+2Ch] [ebp+8h]

  if ( this->Type->CanBeOccupied && (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 258))(this) > 0 ) /*0x453865*/
  {
    v2 = (int *)World::ToScreen(v34, &this->Type->__pad_1584[8 * this->Audio8[4] + 4], v33); /*0x453886*/
    v3 = *v2; /*0x45388b*/
    v4 = v2[1]; /*0x45388d*/
    v5 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 43))(this, v35); /*0x453899*/
    v6 = *v5; /*0x45389f*/
    v7 = v5[1]; /*0x4538a5*/
    v8 = v5[2]; /*0x4538a8*/
    *cell = v3 + v6; /*0x4538b1*/
    cell[1] = v4 + v7; /*0x4538b3*/
    cell[2] = v8; /*0x4538b6*/
    return (int)cell; /*0x4538b9*/
  }
  else
  {
    Type = this->Type; /*0x4538c5*/
    if ( Type->PrimaryFirePixelOffset[0] == 0xFFFF && Type->PrimaryFirePixelOffset[1] == 0xFFFF ) /*0x4538e6*/
    {
      if ( Type->BarrelAnimIsVoxel ) /*0x4539a1*/
      {
        v24 = BuildingClass::CalcBarrelFlashPosition(this, v35, v37, 1); /*0x4539be*/
        *cell = *v24; /*0x4539c8*/
        cell[1] = v24[1]; /*0x4539cd*/
        cell[2] = v24[2]; /*0x4539d3*/
        return (int)cell; /*0x4539c0*/
      }
      else
      {
        v25 = TechnoClass::ComputeTransform((TechnoClass *)this, v35, v37, 0, 0, 0); /*0x4539ff*/
        v26 = *v25; /*0x453a04*/
        v27 = this->Type; /*0x453a06*/
        v28 = v25[1]; /*0x453a0c*/
        v29 = v25[2]; /*0x453a0f*/
        if ( v27->TurretAnimIsVoxel ) /*0x453a12*/
        {
          v30 = *(_DWORD *)&v27->__pad_F70[624]; /*0x453a22*/
          v34[1] = *(_DWORD *)&v27->__pad_F70[628]; /*0x453a28*/
          v34[0] = v30; /*0x453a34*/
          v31 = (_DWORD *)World::ToScreen(v35, v34, v33); /*0x453a40*/
          v26 += *v31; /*0x453a4a*/
          v28 += v31[1]; /*0x453a4c*/
        }
        *cell = v26; /*0x453a54*/
        cell[1] = v28; /*0x453a58*/
        cell[2] = v29; /*0x453a5b*/
        return (int)cell; /*0x453a4e*/
      }
    }
    else
    {
      PrimaryFirePixelOffset = Type->PrimaryFirePixelOffset; /*0x4538f2*/
      if ( Type->__pad_1714[80] ) /*0x4538ec*/
      {
        v11 = (int *)World::ToScreen(v34, PrimaryFirePixelOffset, v33); /*0x453902*/
        v12 = *v11; /*0x453907*/
        v13 = v11[1]; /*0x453909*/
        v14 = TechnoClass::ComputeTransform((TechnoClass *)this, v35, v37, 0, 0, 0); /*0x45392c*/
        v15 = *v14; /*0x453931*/
        v16 = v14[1]; /*0x453937*/
        v17 = v14[2]; /*0x45393a*/
        *cell = v12 + v15; /*0x453943*/
        cell[1] = v13 + v16; /*0x453945*/
      }
      else
      {
        v18 = (int *)World::ToScreen(v34, PrimaryFirePixelOffset, v33); /*0x453962*/
        v19 = *v18; /*0x453967*/
        v20 = v18[1]; /*0x453969*/
        v21 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 43))(this, v35); /*0x453975*/
        v22 = *v21; /*0x45397b*/
        v23 = v21[1]; /*0x453981*/
        v17 = v21[2]; /*0x453984*/
        *cell = v22 + v19; /*0x45398d*/
        cell[1] = v20 + v23; /*0x45398f*/
      }
      cell[2] = v17; /*0x453948*/
      return (int)cell; /*0x45394b*/
    }
  }
}



// ==== 0x00453A70  TechnoClass::GetTurretScreenPos  this=BuildingClass  sig=csp ====
int __thiscall TechnoClass::GetTurretScreenPos(TechnoClass *this)
{
  int *v1; // ebp
  int *v3; // eax
  int v4; // edi
  int v5; // ebx
  int (__thiscall **vtable0)(TechnoClass *, int *); // edx
  int *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v12; // ecx
  int *v13; // eax
  _DWORD *v14; // ecx
  int *TurretOffset; // eax
  int v16; // edi
  int v17; // esi
  int v18; // ebx
  int v19; // ebp
  int v20; // ecx
  _DWORD *v21; // eax
  int *v22; // [esp-4h] [ebp-24h]
  int *v23; // [esp+0h] [ebp-20h]
  int v24[2]; // [esp+Ch] [ebp-14h] BYREF
  int v25[3]; // [esp+14h] [ebp-Ch] BYREF
  _DWORD *v26; // [esp+24h] [ebp+4h]
  int v27; // [esp+28h] [ebp+8h]

  if ( *(_BYTE *)(this->gattlingValue + 5499) /*0x453a94*/
    && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 258))(this) > 0 )
  {
    v3 = (int *)World::ToScreen(v24, (_DWORD *)(this->gattlingValue + 8 * this->q1A7 + 5512), v23); /*0x453ab5*/
    v4 = *v3; /*0x453aba*/
    v5 = v3[1]; /*0x453abc*/
    vtable0 = (int (__thiscall **)(TechnoClass *, int *))this->RadioClass; /*0x453abf*/
LABEL_4:
    v7 = (int *)vtable0[43](this, v25); /*0x453ac5*/
    v8 = *v7; /*0x453ace*/
    v9 = v7[1]; /*0x453ad4*/
    v10 = v7[2]; /*0x453ad7*/
    *v26 = v4 + v8; /*0x453ae0*/
    v26[1] = v5 + v9; /*0x453ae2*/
    v26[2] = v10; /*0x453ae5*/
    return (int)v26; /*0x453af0*/
  }
  v12 = this->gattlingValue; /*0x453af3*/
  if ( *(_DWORD *)(v12 + 3652) != 0xFFFF || *(_DWORD *)(v12 + 3656) != 0xFFFF ) /*0x453b14*/
  {
    v13 = (int *)World::ToScreen(v24, (_DWORD *)(v12 + 3652), v23); /*0x453b22*/
    v4 = *v13; /*0x453b27*/
    v5 = v13[1]; /*0x453b29*/
    vtable0 = (int (__thiscall **)(TechnoClass *, int *))this->RadioClass; /*0x453b2c*/
    goto LABEL_4; /*0x453b32*/
  }
  if ( *(_BYTE *)(v12 + 5830) ) /*0x453b34*/
  {
    v14 = BuildingClass::CalcBarrelFlashPosition((BuildingClass *)this, v25, v27, 0); /*0x453b51*/
    *v26 = *v14; /*0x453b5c*/
    v26[1] = v14[1]; /*0x453b61*/
    v26[2] = v14[2]; /*0x453b69*/
    return (int)v26; /*0x453b53*/
  }
  else
  {
    v22 = v1; /*0x453b76*/
    TurretOffset = TechnoClass::GetTurretOffset(this, v25, v27); /*0x453b7f*/
    v16 = *TurretOffset; /*0x453b84*/
    v17 = this->gattlingValue; /*0x453b86*/
    v18 = TurretOffset[1]; /*0x453b8c*/
    v19 = TurretOffset[2]; /*0x453b8f*/
    if ( *(_BYTE *)(v17 + 5829) ) /*0x453b92*/
    {
      v20 = *(_DWORD *)(v17 + 4576); /*0x453ba2*/
      v24[1] = *(_DWORD *)(v17 + 4580); /*0x453ba8*/
      v24[0] = v20; /*0x453bb4*/
      v21 = (_DWORD *)World::ToScreen(v25, v24, v22); /*0x453bc0*/
      v16 += *v21; /*0x453bca*/
      v18 += v21[1]; /*0x453bcc*/
    }
    *v26 = v16; /*0x453bd4*/
    v26[1] = v18; /*0x453bd6*/
    v26[2] = v19; /*0x453bd9*/
    return (int)v26; /*0x453bce*/
  }
}



// ==== 0x00453BF0  BuildingClass::CalcBarrelFlashPosition  this=BuildingClass  sig=csp ====
_DWORD *__thiscall BuildingClass::CalcBarrelFlashPosition(BuildingClass *this, _DWORD *a2, int a3, char a4)
{
  int v5; // eax
  int currentBurstIndex; // ecx
  int v7; // eax
  BuildingTypeClass *Type; // eax
  double v9; // st7
  float *v10; // eax
  float *v11; // eax
  float v12; // edx
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  int v16; // ebp
  float v17; // eax
  int v18; // edx
  int v19; // kr00_4
  _DWORD *v20; // eax
  BuildingTypeClass *v21; // esi
  int v22; // ecx
  int v23; // ebp
  int v24; // edx
  float v25; // edi
  int v26; // ebx
  _DWORD *v27; // eax
  int v28; // edx
  int *v30; // [esp+0h] [ebp-6Ch]
  _DWORD v31[2]; // [esp+10h] [ebp-5Ch] BYREF
  int v32; // [esp+18h] [ebp-54h] BYREF
  float v33; // [esp+1Ch] [ebp-50h]
  float v34; // [esp+20h] [ebp-4Ch]
  float v35[3]; // [esp+24h] [ebp-48h] BYREF
  float v36[3]; // [esp+30h] [ebp-3Ch] BYREF
  float v37[12]; // [esp+3Ch] [ebp-30h] BYREF
  int v38; // [esp+78h] [ebp+Ch]

  v5 = *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, int))this->TechnoClass + 254))(this, a3); /*0x453c0c*/
  if ( a4 ) /*0x453c10*/
  {
    currentBurstIndex = this->?; /*0x453c12*/
    if ( currentBurstIndex ) /*0x453c1a*/
      v7 = currentBurstIndex - 1; /*0x453c25*/
    else
      v7 = *(_DWORD *)(v5 + 156) - 1; /*0x453c22*/
  }
  else
  {
    v7 = this->?; /*0x453c2a*/
  }
  if ( v7 ) /*0x453c32*/
  {
    if ( v7 == 1 ) /*0x453c49*/
      v38 = -*(_DWORD *)&this->Type->__pad_1714[68]; /*0x453c59*/
    else
      v38 = 0; /*0x453c5f*/
  }
  else
  {
    v38 = *(_DWORD *)&this->Type->__pad_1714[68]; /*0x453c40*/
  }
  Type = this->Type; /*0x453c67*/
  v9 = (double)*(int *)&Type->__pad_1714[72]; /*0x453c71*/
  v35[0] = (float)*(int *)&Type->__pad_1714[64]; /*0x453c83*/
  v35[1] = (float)v38; /*0x453c90*/
  v35[2] = v9; /*0x453c94*/
  v10 = BuildingClass::BuildTurretTransform((int)this, v37); /*0x453c98*/
  v11 = TransformMatrix3x4Point(v36, v10, v35); /*0x453ca3*/
  v32 = *(int *)v11; /*0x453caa*/
  v12 = v11[2]; /*0x453cb5*/
  v33 = v11[1]; /*0x453cb8*/
  v34 = v12; /*0x453cbc*/
  LOWORD(v13) = Math::RoundToInt(*(float *)&v32); /*0x453cc0*/
  v14 = v13; /*0x453ccb*/
  LOWORD(v15) = Math::RoundToInt(-v33); /*0x453ccd*/
  v16 = v15; /*0x453cd6*/
  v19 = Math::RoundToInt(v34); /*0x453cd8*/
  LOWORD(v18) = HIWORD(v19); /*0x453cd8*/
  LOWORD(v17) = v19; /*0x453cd8*/
  v34 = v17; /*0x453ce1*/
  v20 = (_DWORD *)(*((int (__fastcall **)(BuildingClass *, int, float *))this->TechnoClass + 43))(this, v18, v36); /*0x453cea*/
  v21 = this->Type; /*0x453cfc*/
  v22 = v16 + v20[1]; /*0x453d04*/
  v23 = LODWORD(v34) + v20[2]; /*0x453d06*/
  v24 = *(_DWORD *)&v21->__pad_F70[624]; /*0x453d0e*/
  LODWORD(v25) = v14 + *v20; /*0x453d14*/
  v31[1] = *(_DWORD *)&v21->__pad_F70[628]; /*0x453d16*/
  v26 = v22; /*0x453d1a*/
  v36[0] = v25; /*0x453d2c*/
  v31[0] = v24; /*0x453d30*/
  v27 = (_DWORD *)World::ToScreen(&v32, v31, v30); /*0x453d34*/
  v28 = v27[1]; /*0x453d3b*/
  *a2 = LODWORD(v25) + *v27; /*0x453d4a*/
  a2[1] = v28 + v26; /*0x453d4c*/
  a2[2] = v23; /*0x453d4f*/
  return a2; /*0x453d48*/
}



// ==== 0x00453D60  BuildingClass::MarkCellOccupied  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::MarkCellOccupied(#377 *this)
{
  _DWORD *v1; // ecx
  _DWORD *v2; // eax
  int v3; // ecx
  int result; // eax
  _DWORD *v5; // [esp+4h] [ebp+4h] BYREF

  v1 = v5; /*0x453d60*/
  LOWORD(v5) = *v5 / 256; /*0x453d72*/
  HIWORD(v5) = v1[1] / 256; /*0x453d8b*/
  v2 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v5); /*0x453d9d*/
  v3 = v2[73]; /*0x453da2*/
  result = (int)(v2 + 73); /*0x453da8*/
  LOBYTE(v3) = v3 | 0x80; /*0x453dad*/
  *(_DWORD *)result = v3; /*0x453db0*/
  return result; /*0x453db2*/
}



// ==== 0x00453DC0  BuildingClass::ClearCellOccupied  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ClearCellOccupied(#377 *this)
{
  _DWORD *v1; // ecx
  _DWORD *v2; // eax
  int v3; // ecx
  int result; // eax
  _DWORD *v5; // [esp+4h] [ebp+4h] BYREF

  v1 = v5; /*0x453dc0*/
  LOWORD(v5) = *v5 / 256; /*0x453dd2*/
  HIWORD(v5) = v1[1] / 256; /*0x453deb*/
  v2 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v5); /*0x453dfd*/
  v3 = v2[73]; /*0x453e02*/
  result = (int)(v2 + 73); /*0x453e08*/
  LOBYTE(v3) = v3 & 0x7F; /*0x453e0d*/
  *(_DWORD *)result = v3; /*0x453e10*/
  return result; /*0x453e12*/
}



// ==== 0x00453E20  BuildingClass::LoadFromStream  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::LoadFromStream(BuildingClass *this)
{
  BuildingClass *v1; // edi
  void **p_vtable1; // esi
  int v3; // eax
  int v4; // ebx
  signed int v5; // eax
  int v6; // ecx
  char *i; // eax
  _DWORD *v8; // eax
  int v9; // ebp
  int result; // eax
  int v11; // esi
  int vtable2; // eax
  int v13; // eax
  int FiringOccupantIndex; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // edx
  int v18; // esi
  int v19; // eax
  int v20; // ebx
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  int v24; // edx
  int v25; // esi
  int *Anims; // esi
  int v27; // ebp
  int *Upgrades; // esi
  int v29; // ebp
  int *DamageFireAnims; // esi
  int v31; // ebp
  int v32; // [esp+58h] [ebp-4h]
  BuildingClass *v33; // [esp+60h] [ebp+4h] BYREF
  int v34; // [esp+64h] [ebp+8h] BYREF

  v1 = v33; /*0x453e25*/
  p_vtable1 = &v33->?; /*0x453e2c*/
  v33 = (BuildingClass *)(*((int (__stdcall **)(void **))v33->? + 4))(&v33->?); /*0x453e3d*/
  v3 = BuildingTypeClass::Dequeue(&g_BuildingLoadQueue_Array, (int *)&v33); /*0x453e41*/
  v4 = 0; /*0x453e46*/
  if ( v3 ) /*0x453e4a*/
  {
    v5 = (signed int)(v3 - (unsigned int)g_BuildingLoadQueue_Array.TechnoTypeClass) >> 3; /*0x453e52*/
    if ( v5 != -1 ) /*0x453e58*/
    {
      v6 = v5 + 1; /*0x453e5a*/
      for ( i = (char *)g_BuildingLoadQueue_Array.?; /*0x453e64*/
            v6 < (int)g_BuildingLoadQueue_Array.?;
            i = (char *)g_BuildingLoadQueue_Array.? )
      {
        v8 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * v6++; /*0x453e6c*/
        *(v8 - 2) = *v8; /*0x453e72*/
        *(v8 - 1) = v8[1]; /*0x453e78*/
      }
      g_BuildingLoadQueue_Array.? = i - 1; /*0x453e8d*/
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = 0; /*0x453e92*/
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = 0; /*0x453ea3*/
      g_BuildingLoadQueue_Array.? = 0; /*0x453ea7*/
    }
  }
  v9 = v34; /*0x453ead*/
  result = BuildingClass::AllocAndCtor((int)v1, v34); /*0x453eb3*/
  v32 = result; /*0x453eba*/
  if ( result >= 0 ) /*0x453ebe*/
  {
    if ( v1 ) /*0x453ec6*/
      BuildingClass::ctor(v1, (int)&v33); /*0x453ecf*/
    v11 = (*((int (__stdcall **)(void **))*p_vtable1 + 4))(p_vtable1); /*0x453ee0*/
    vtable2 = (int)g_BuildingLoadQueue_Array.?; /*0x453ee2*/
    if ( (int)g_BuildingLoadQueue_Array.? + 1 <= (int)g_BuildingLoadQueue_Array.? ) /*0x453eea*/
      goto LABEL_13; /*0x453eea*/
    if ( !g_BuildingLoadQueue_Array.? ) /*0x453eee*/
      vtable2 = 10; /*0x453ef0*/
    if ( BuildingTypeClass::Enqueue((int)&g_BuildingLoadQueue_Array, vtable2) ) /*0x453efb*/
    {
LABEL_13:
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = v11; /*0x453f0f*/
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = v1; /*0x453f1e*/
      LOBYTE(g_BuildingLoadQueue_Array.?) = 0; /*0x453f28*/
      ++g_BuildingLoadQueue_Array.?; /*0x453f2f*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v1->Type); /*0x453f40*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v1->Factory); /*0x453f51*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v1->C4AppliedBy); /*0x453f62*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v1->FirestormAnim); /*0x453f73*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v1->PsiWarnAnim); /*0x453f84*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v1->Spotlight); /*0x453f95*/
    AudioController::Init((AudioController *)&v1->WasOnline); /*0x453fa0*/
    AudioController::Init((AudioController *)v1->Audio8_2); /*0x453fab*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v1->SecretProduction); /*0x453fbc*/
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v9 + 12))(v9, &v34, 4, 0); /*0x453fcd*/
    if ( result >= 0 ) /*0x453fd2*/
    {
      v13 = v34; /*0x453fd8*/
      if ( v34 <= 0 ) /*0x453fde*/
      {
LABEL_24:
        v18 = 0; /*0x45404c*/
        if ( v13 > 0 ) /*0x454050*/
        {
          do /*0x45406b*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1->Occupants[0] + 4 * v18++)); /*0x454061*/
          while ( v18 < v34 ); /*0x45406b*/
        }
        result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v9 + 12))(v9, &v34, 4, 0); /*0x45407a*/
        if ( result >= 0 ) /*0x45407f*/
        {
          v19 = v34; /*0x454085*/
          v20 = 0; /*0x454089*/
          if ( v34 <= 0 ) /*0x45408d*/
          {
LABEL_36:
            v25 = 0; /*0x4540fb*/
            if ( v19 > 0 ) /*0x4540ff*/
            {
              do /*0x45411a*/
                ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1->Audio7[4] + 4 * v25++)); /*0x454110*/
              while ( v25 < v34 ); /*0x45411a*/
            }
            Anims = v1->Anims; /*0x45411c*/
            v27 = 21; /*0x454122*/
            do /*0x454136*/
            {
              ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, Anims++); /*0x45412d*/
              --v27; /*0x454135*/
            }
            while ( v27 ); /*0x454136*/
            Upgrades = v1->Upgrades; /*0x454138*/
            v29 = 3; /*0x45413e*/
            do /*0x454152*/
            {
              ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, Upgrades++); /*0x454149*/
              --v29; /*0x454151*/
            }
            while ( v29 ); /*0x454152*/
            DamageFireAnims = v1->DamageFireAnims; /*0x454154*/
            v31 = 8; /*0x45415a*/
            do /*0x45416e*/
            {
              ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, DamageFireAnims++); /*0x454165*/
              --v31; /*0x45416d*/
            }
            while ( v31 ); /*0x45416e*/
            v1->LightSource = 0; /*0x454174*/
            return v32; /*0x454170*/
          }
          else
          {
            while ( 1 ) /*0x45409c*/
            {
              result = (*(int (__stdcall **)(int, BuildingClass **, int, _DWORD))(*(_DWORD *)v9 + 12))(v9, &v33, 4, 0); /*0x45409c*/
              if ( result < 0 ) /*0x4540a1*/
                break; /*0x4540a1*/
              v21 = v1->Audio8[0]; /*0x4540a7*/
              if ( v1->Audio8[2] < v21 /*0x4540d8*/
                || (BYTE1(v1->Audio8[1]) || !v21)
                && (v22 = v1->Audio8[3], v22 > 0)
                && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(v1->Audio7[3] + 8))(
                     &v1->Audio7[3],
                     v21 + v22,
                     0) )
              {
                v23 = v1->Audio8[2]; /*0x4540df*/
                v24 = v1->Audio7[4]; /*0x4540e2*/
                v1->Audio8[2] = v23 + 1; /*0x4540e8*/
                *(_DWORD *)(v24 + 4 * v23) = v33; /*0x4540ef*/
              }
              v19 = v34; /*0x4540f2*/
              if ( ++v20 >= v34 ) /*0x4540f9*/
                goto LABEL_36; /*0x4540f9*/
            }
          }
        }
      }
      else
      {
        while ( 1 ) /*0x453fed*/
        {
          result = (*(int (__stdcall **)(int, BuildingClass **, int, _DWORD))(*(_DWORD *)v9 + 12))(v9, &v33, 4, 0); /*0x453fed*/
          if ( result < 0 ) /*0x453ff2*/
            break; /*0x453ff2*/
          FiringOccupantIndex = v1->FiringOccupantIndex; /*0x453ff8*/
          if ( v1->Audio7[1] < FiringOccupantIndex /*0x454029*/
            || (BYTE1(v1->Audio7[0]) || !FiringOccupantIndex)
            && (v15 = v1->Audio7[2], v15 > 0)
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(v1->Overpowerers[0] + 8))(
                 v1->Overpowerers,
                 FiringOccupantIndex + v15,
                 0) )
          {
            v16 = v1->Audio7[1]; /*0x454030*/
            v17 = v1->Occupants[0]; /*0x454033*/
            v1->Audio7[1] = v16 + 1; /*0x454039*/
            *(_DWORD *)(v17 + 4 * v16) = v33; /*0x454040*/
          }
          v13 = v34; /*0x454043*/
          if ( ++v4 >= v34 ) /*0x45404a*/
            goto LABEL_24; /*0x45404a*/
        }
      }
    }
  }
  return result; /*0x45417e*/
}



// ==== 0x00454190  BuildingClass::Size  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::Size(BuildingClass *this)
{
  int SizeMax; // ebp
  int v2; // edx
  int result; // eax
  int v4; // ebx
  int v5; // edx
  int v6; // ebx
  TechnoClass *v7; // [esp+38h] [ebp+4h]
  int v8; // [esp+3Ch] [ebp+8h]
  int v9; // [esp+40h] [ebp+Ch] BYREF

  SizeMax = IPersistStream::GetSizeMax(v7, v8, v9); /*0x4541a8*/
  if ( SizeMax < 0 ) /*0x4541ac*/
    return SizeMax; /*0x4541ac*/
  v2 = *(_DWORD *)v8; /*0x4541b8*/
  v9 = v7[1].armorMultiplier[1]; /*0x4541c4*/
  result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v2 + 16))(v8, &v9, 4, 0); /*0x4541c8*/
  if ( result < 0 ) /*0x4541cd*/
    return result; /*0x4541cd*/
  v4 = 0; /*0x4541d3*/
  if ( v9 <= 0 ) /*0x4541d7*/
  {
LABEL_6:
    v5 = *(_DWORD *)v8; /*0x4541fa*/
    v9 = v7[1].radarFlashTimer[0]; /*0x45420c*/
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v5 + 16))(v8, &v9, 4, 0); /*0x454210*/
    if ( result < 0 ) /*0x454215*/
      return result; /*0x454215*/
    v6 = 0; /*0x45421b*/
    if ( v9 > 0 ) /*0x45421f*/
    {
      while ( 1 ) /*0x454232*/
      {
        result = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v8 + 16))( /*0x454232*/
                   v8,
                   v7[1].idleActionTimer[0] + 4 * v6,
                   4,
                   0);
        if ( result < 0 ) /*0x454237*/
          break; /*0x454237*/
        if ( ++v6 >= v9 ) /*0x454240*/
          return SizeMax; /*0x454240*/
      }
      return result; /*0x454237*/
    }
    return SizeMax; /*0x454242*/
  }
  while ( 1 ) /*0x4541ea*/
  {
    result = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v8 + 16))(v8, v7[1].veterancy[0] + 4 * v4, 4, 0); /*0x4541ea*/
    if ( result < 0 ) /*0x4541ef*/
      return result; /*0x454244*/
    if ( ++v4 >= v9 ) /*0x4541f8*/
      goto LABEL_6; /*0x4541f8*/
  }
}



// ==== 0x00454250  BuildingClass::IsProducing  this=BuildingClass  sig=csp ====
int __thiscall MissionClass::IsProducing(BuildingClass *this)
{
  int result; // eax

  LOBYTE(result) = this->BuildingClass_field_bool_6DD != 0; /*0x454258*/
  return result; /*0x45425b*/
}



// ==== 0x00454260  BuildingClass::PowerDrainUpdate  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::PowerDrainUpdate(BuildingClass *this)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx
  int v5; // eax
  InfantryClass *C4AppliedBy; // eax
  int v7; // eax
  AnimClass *FirestormAnim; // eax
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // ecx
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
  int v29; // edx
  Power *v31; // [esp+Ch] [ebp+4h]

  House::PowerBeginUpdate((TechnoClass *)this, (int)v31); /*0x454269*/
  v2 = this->C4Timer[0]; /*0x45426e*/
  v3 = this->C4Timer[2]; /*0x454274*/
  if ( v2 != -1 ) /*0x45427d*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v2 >= v3 ) /*0x454289*/
      v3 = 0; /*0x45428f*/
    else
      v3 -= *(_DWORD *)&stru_A8EB00.?[416] - v2; /*0x45428b*/
  }
  Power::TimerProcess(v3); /*0x454294*/
  v4 = *(_DWORD *)&this->__pad_6B8[24]; /*0x454299*/
  v5 = *(_DWORD *)&this->__pad_6B8[32]; /*0x45429f*/
  if ( v4 != -1 ) /*0x4542a8*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v4 >= v5 ) /*0x4542b4*/
      v5 = 0; /*0x4542ba*/
    else
      v5 -= *(_DWORD *)&stru_A8EB00.?[416] - v4; /*0x4542b6*/
  }
  Power::TimerProcess(v5); /*0x4542bf*/
  Power::TimerProcess(this->BuildingClass_field_int_534); /*0x4542cd*/
  Power::TimerProcess(this->BuildingClass_field_int_538); /*0x4542db*/
  Power::TimerProcess(this->OwnerCountryIndex); /*0x4542e9*/
  C4AppliedBy = this->C4AppliedBy; /*0x4542ee*/
  if ( C4AppliedBy ) /*0x4542f6*/
  {
    v7 = (*((int (__stdcall **)(void **))C4AppliedBy->? + 4))(&C4AppliedBy->?); /*0x4542ff*/
    Power::TimerProcess(v7); /*0x454305*/
  }
  Power::TimerProcess(this->BuildingClass_field_544); /*0x454313*/
  FirestormAnim = this->FirestormAnim; /*0x454318*/
  if ( FirestormAnim ) /*0x454320*/
  {
    v9 = (*((int (__stdcall **)(void **))FirestormAnim->AnimClass_field_0x4 + 4))(&FirestormAnim->AnimClass_field_0x4); /*0x454329*/
    Power::TimerProcess(v9); /*0x45432f*/
  }
  v10 = this->BuildingClass_field_timer_550[0]; /*0x454334*/
  v11 = this->BuildingClass_field_timer_550[2]; /*0x45433a*/
  if ( v10 != -1 ) /*0x454343*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v10 >= v11 ) /*0x45434f*/
      v11 = 0; /*0x454355*/
    else
      v11 -= *(_DWORD *)&stru_A8EB00.?[416] - v10; /*0x454351*/
  }
  Power::TimerProcess(v11); /*0x45435a*/
  Power::TimerProcess(this->SuperWeaponToken); /*0x454368*/
  Power::TimerProcess(this->LaserFenceFrame); /*0x454376*/
  Power::TimerProcess(this->FirestormWallFrame); /*0x454384*/
  LOBYTE(v12) = this->HasPower; /*0x454389*/
  v13 = Power::FlagProcess(v31, v12); /*0x454392*/
  LOBYTE(v13) = this->StuffEnabled; /*0x454397*/
  Power::FlagProcess(v31, v13); /*0x4543a0*/
  LOBYTE(v14) = this->__pad_6B8[18]; /*0x4543a5*/
  Power::FlagProcess(v31, v14); /*0x4543ae*/
  LOBYTE(v15) = this->__pad_6B8[19]; /*0x4543b3*/
  v16 = Power::FlagProcess(v31, v15); /*0x4543bc*/
  LOBYTE(v16) = this->BuildingClass_field_bool_6DC; /*0x4543c1*/
  Power::FlagProcess(v31, v16); /*0x4543ca*/
  LOBYTE(v17) = this->BuildingClass_field_bool_6DD; /*0x4543cf*/
  Power::FlagProcess(v31, v17); /*0x4543d8*/
  LOBYTE(v18) = this->IsBeingRepaired; /*0x4543dd*/
  v19 = Power::FlagProcess(v31, v18); /*0x4543e6*/
  LOBYTE(v19) = this->NeedsRepairs; /*0x4543eb*/
  Power::FlagProcess(v31, v19); /*0x4543f4*/
  LOBYTE(v20) = this->C4Applied; /*0x4543f9*/
  Power::FlagProcess(v31, v20); /*0x454402*/
  LOBYTE(v21) = this->NoCrew; /*0x454407*/
  v22 = Power::FlagProcess(v31, v21); /*0x454410*/
  LOBYTE(v22) = this->BuildingClass_field_bool_6E1; /*0x454415*/
  Power::FlagProcess(v31, v22); /*0x45441e*/
  LOBYTE(v23) = this->BuildingClass_field_bool_6E2; /*0x454423*/
  Power::FlagProcess(v31, v23); /*0x45442c*/
  LOBYTE(v24) = this->HasBeenCaptured; /*0x454431*/
  v25 = Power::FlagProcess(v31, v24); /*0x45443a*/
  LOBYTE(v25) = this->ActuallyPlacedOnMap; /*0x45443f*/
  Power::FlagProcess(v31, v25); /*0x454448*/
  LOBYTE(v26) = this->__pad_6B8[20]; /*0x45444d*/
  Power::FlagProcess(v31, v26); /*0x454456*/
  LOBYTE(v27) = this->BuildingClass_field_bool_6E5; /*0x45445b*/
  v28 = Power::FlagProcess(v31, v27); /*0x454464*/
  LOBYTE(v28) = this->IsDamaged; /*0x454469*/
  Power::FlagProcess(v31, v28); /*0x454472*/
  Power::TimerProcess(*(unsigned __int16 *)this->BuildingClass_field_short_700); /*0x454483*/
  LOBYTE(v29) = this->UpgradeLevel; /*0x454488*/
  return Power::FinalizeDrain(v31, v29); /*0x454496*/
}



// ==== 0x004544A0  BuildingClass::UpdatePowerDrain  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::UpdatePowerDrain(BuildingClass *this)
{
  char Translucency; // al
  int v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  Cell *v8; // eax
  int v10; // [esp-4h] [ebp-18h]
  int v11; // [esp+18h] [ebp+4h]
  int v12; // [esp+1Ch] [ebp+8h] BYREF

  Translucency = this->Translucency; /*0x4544a7*/
  if ( !Translucency ) /*0x4544af*/
    return TechnoClass::UpdatePowerDrain((char *)this, v11, v12); /*0x4545c3*/
  if ( Translucency <= 10 ) /*0x4544b7*/
    return (Translucency > 5) + 1; /*0x4545ae*/
  if ( (_BYTE)v11 ) /*0x4544c3*/
  {
    v3 = v12; /*0x4544c5*/
    if ( v12 ) /*0x4544cb*/
    {
      v4 = this->?[0]; /*0x4544d7*/
      v5 = this->?[1]; /*0x4544d9*/
      LOWORD(v12) = v4 / 256; /*0x4544ef*/
      v6 = v5; /*0x4544f6*/
      v7 = *(_DWORD *)(v3 + 48); /*0x4544f7*/
      HIWORD(v12) = v6 / 256; /*0x454509*/
      v10 = v7; /*0x454512*/
      v8 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v12); /*0x45451d*/
      if ( (unsigned __int8)Cell::IsPassableOffset(v8, v10) ) /*0x454524*/
        return 3; /*0x454537*/
    }
  }
  else if ( this->? /*0x45458f*/
         || (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 202))(this)
         || !g_hWnd
         || *(_DWORD *)&dword_A8B238
         && this->?
         && dword_A83D4C
         && (unsigned __int8)HouseClass::IsAlliedWith((#375 *)dword_A83D4C, (#375 *)this->?)
         && (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->?, (#375 *)dword_A83D4C) )
  {
    return 3; /*0x454596*/
  }
  return 5; /*0x45452d*/
}



// ==== 0x004545D0  BuildingClass::ProcessAnimationStates  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::ProcessAnimationStates(BuildingClass *this)
{
  int *Anims; // ecx
  int v3; // ebp
  int v4; // edi
  BuildingTypeClass *Type; // eax
  _BYTE *v6; // ecx
  BuildingTypeClass *v7; // edx
  int v9; // ecx
  AnimTypeClass *v10; // eax
  int *v13; // [esp+Ch] [ebp-4h]

  BuildingClass::ClearAnims(this, 20); /*0x4545d8*/
  Anims = this->Anims; /*0x4545dd*/
  v3 = 0; /*0x4545e3*/
  v4 = 0; /*0x4545e5*/
  v13 = this->Anims; /*0x4545e7*/
  do /*0x454716*/
  {
    Type = this->Type; /*0x4545eb*/
    if ( Type->__pad_F70[v4 * 4 + 28] ) /*0x4545f1*/
    {
      v6 = (_BYTE *)*Anims; /*0x4545fc*/
      if ( v6 ) /*0x454600*/
        VtableStub::Method_425270(v6); /*0x454606*/
    }
    else if ( Type->__pad_F70[v4 * 4 + 29] ) /*0x454610*/
    {
      if ( !*Anims && this->ActuallyPlacedOnMap && (!Type->IsAnimDelayedFire || v4 != 170) ) /*0x454642*/
      {
        BuildingClass::GetHealthRatio(this); /*0x45464a*/
        _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x45464f*/
        __asm /*0x454654*/
        {
          fcomp qword ptr [eax+1700h]
          fnstsw ax
        }
        if ( (_EAX & 0x4100) != 0 ) /*0x45465f*/
        {
          v7 = this->Type; /*0x454661*/
          v9 = 1; /*0x454667*/
          v10 = (AnimTypeClass *)&v7->BuildingAnim[v4 + 16]; /*0x45466c*/
        }
        else
        {
          v9 = 0; /*0x45467b*/
          v10 = (AnimTypeClass *)&this->Type->BuildingAnim[v4 + 12]; /*0x45467d*/
        }
        if ( v10 && LOBYTE(v10->ObjectTypeClass) ) /*0x454688*/
          goto LABEL_23; /*0x45468b*/
      }
    }
    else if ( Type->__pad_F70[v4 * 4 + 30] && this->AnimStates[v3] ) /*0x45469a*/
    {
      this->AnimStates[v3] = 0; /*0x4546a7*/
      BuildingClass::GetHealthRatio(this); /*0x4546af*/
      _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4546b4*/
      __asm /*0x4546ba*/
      {
        fcomp qword ptr [ecx+1700h]
        fnstsw ax
      }
      if ( (_AX & 0x4100) != 0 ) /*0x4546c5*/
      {
        v7 = this->Type; /*0x4546c7*/
        v9 = 1; /*0x4546cd*/
        v10 = (AnimTypeClass *)&v7->BuildingAnim[v4 + 16]; /*0x4546d2*/
      }
      else
      {
        v9 = 0; /*0x4546e1*/
        v10 = (AnimTypeClass *)&this->Type->BuildingAnim[v4 + 12]; /*0x4546e3*/
      }
      if ( v10 && LOBYTE(v10->ObjectTypeClass) ) /*0x4546ee*/
LABEL_23:
        BuildingClass::PlayAnim(this, (int)v7, v10, v3, v9, 0, 0); /*0x4546f3*/
    }
    v4 += 17; /*0x454701*/
    ++v3; /*0x454708*/
    Anims = ++v13; /*0x454709*/
  }
  while ( v4 < 357 ); /*0x454716*/
}



// ==== 0x00454730  BuildingClass::UpdateIdleAnims  this=BuildingClass  sig=csp ====
_BYTE *__thiscall BuildingClass::UpdateIdleAnims(BuildingClass *this)
{
  int v2; // ebx
  int i; // edi
  _BYTE *result; // eax
  BuildingTypeClass *Type; // edx
  int v8; // ecx

  BuildingClass::ClearAnims(this, 19); /*0x454737*/
  v2 = 0; /*0x45473c*/
  for ( i = 0; i < 357; i += 17 ) /*0x45473e*/
  {
    result = this->Type; /*0x454740*/
    if ( result[i * 4 + 3983] ) /*0x454746*/
    {
      BuildingClass::GetHealthRatio(this); /*0x454753*/
      _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x454758*/
      __asm /*0x45475e*/
      {
        fcomp qword ptr [ecx+1700h]
        fnstsw ax
      }
      if ( (_AX & 0x4100) != 0 ) /*0x454769*/
      {
        Type = this->Type; /*0x45476b*/
        v8 = 1; /*0x454771*/
        result = &Type->BuildingAnim[i + 16]; /*0x454776*/
      }
      else
      {
        v8 = 0; /*0x454785*/
        result = &this->Type->BuildingAnim[i + 12]; /*0x454787*/
      }
      if ( result ) /*0x454790*/
      {
        if ( *result ) /*0x454792*/
          result = (_BYTE *)BuildingClass::PlayAnim(this, (int)Type, (AnimTypeClass *)result, v2, v8, 0, 0); /*0x4547a0*/
      }
    }
    ++v2; /*0x4547a8*/
  }
  return result; /*0x4547b1*/
}



// ==== 0x004547C0  BuildingClass::UpdateAnimationSlots  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::UpdateAnimationSlots(BuildingClass *this)
{
  int i; // edi
  char *v3; // eax
  BuildingClass *v4; // ecx
  BuildingTypeClass *Type; // eax
  int v8; // ecx
  char *v9; // eax
  int v10; // edx
  int v12; // ecx
  char *v13; // eax

  for ( i = 0; i < 21; ++i ) /*0x4547c4*/
  {
    v3 = (char *)this->Type + 68 * i; /*0x4547d3*/
    if ( v3[3980] ) /*0x4547d6*/
    {
      v4 = (BuildingClass *)this->Anims[i]; /*0x4547e0*/
      if ( v4 ) /*0x4547e9*/
        BuildingClass::SetField8(v4); /*0x4547ef*/
    }
    else if ( v3[3981] ) /*0x4547f9*/
    {
      if ( this->Anims[i] ) /*0x454807*/
      {
        BuildingClass::ClearAnims(this, i); /*0x454819*/
        if ( i == 10 ) /*0x454821*/
        {
          Type = this->Type; /*0x454827*/
          if ( Type->IsAnimDelayedFire ) /*0x45482d*/
          {
            if ( Type->__pad_F70[232] ) /*0x45483b*/
            {
              BuildingClass::GetHealthRatio(this); /*0x45484b*/
              _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x454850*/
              __asm /*0x454856*/
              {
                fcomp qword ptr [edx+1700h]
                fnstsw ax
              }
              if ( (_AX & 0x4100) != 0 ) /*0x454861*/
              {
                v8 = 1; /*0x454869*/
                v9 = &this->Type->__pad_F70[184]; /*0x45486e*/
              }
              else
              {
                v8 = 0; /*0x45487b*/
                v9 = &this->Type->__pad_F70[168]; /*0x45487d*/
              }
              if ( v9 && *v9 ) /*0x45488a*/
                BuildingClass::PlayAnim( /*0x45489a*/
                  this,
                  *(int *)&DSurface_ViewBounds.__pad_FC[324],
                  (AnimTypeClass *)v9,
                  3,
                  v8,
                  0,
                  0);
            }
          }
        }
      }
    }
    else if ( v3[3982] ) /*0x45489c*/
    {
      if ( this->Anims[i] ) /*0x4548a6*/
      {
        this->AnimStates[i] = 1; /*0x4548b4*/
        BuildingClass::ClearAnims(this, i); /*0x4548bc*/
        if ( i == 16 ) /*0x4548c4*/
        {
          BuildingClass::GetHealthRatio(this); /*0x4548c8*/
          _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4548cd*/
          __asm /*0x4548d2*/
          {
            fcomp qword ptr [eax+1700h]
            fnstsw ax
          }
          if ( (_EAX & 0x4100) != 0 ) /*0x4548dd*/
          {
            v12 = 1; /*0x4548e5*/
            v13 = &this->Type->__pad_F70[1340]; /*0x4548ea*/
          }
          else
          {
            v12 = 0; /*0x4548f7*/
            v13 = &this->Type->__pad_F70[1324]; /*0x4548f9*/
          }
          if ( v13 && *v13 ) /*0x454902*/
            BuildingClass::PlayAnim(this, v10, (AnimTypeClass *)v13, 20, v12, 0, 0); /*0x454911*/
        }
      }
    }
  }
}



// ==== 0x00454930  BuildingClass::ProcessDamageAnim  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::ProcessDamageAnim(BuildingClass *this)
{
  int v2; // edx
  int v4; // ecx
  char *v5; // eax
  int v6; // ebx
  int i; // esi

  BuildingClass::GetHealthRatio(this); /*0x454935*/
  _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x45493a*/
  __asm /*0x45493f*/
  {
    fcomp qword ptr [eax+1700h]
    fnstsw ax
  }
  if ( (_EAX & 0x4100) != 0 ) /*0x45494a*/
  {
    v4 = 1; /*0x454952*/
    v5 = &this->Type->__pad_F70[1272]; /*0x454957*/
  }
  else
  {
    v4 = 0; /*0x454964*/
    v5 = &this->Type->__pad_F70[1256]; /*0x454966*/
  }
  if ( v5 && *v5 ) /*0x45496f*/
    BuildingClass::PlayAnim(this, v2, (AnimTypeClass *)v5, 19, v4, 0, 0); /*0x45497e*/
  v6 = 0; /*0x454983*/
  for ( i = 0; i < 1428; i += 68 ) /*0x454985*/
  {
    if ( this->Type->__pad_F70[i + 31] ) /*0x45498d*/
      BuildingClass::ClearAnims(this, v6); /*0x45499b*/
    ++v6; /*0x4549a3*/
  }
}



// ==== 0x004549B0  Animation::UpdateBuildingAnimations  this=Animation  sig=csp ====
void __thiscall Animation::UpdateBuildingAnimations(Animation *this)
{
  bool v2; // zf
  int v3; // eax
  int v4; // ecx
  _BYTE *v5; // eax
  char v6; // cl
  int v7; // eax
  int v8; // ebp
  int i; // edi
  int v12; // ecx
  AnimTypeClass *v13; // eax
  int v14; // ecx
  CaptureManager *v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // edi
  int v21; // edx
  int v22; // eax
  int v25; // ecx
  AnimTypeClass *v26; // eax
  int v27; // ebp
  int j; // edi

  v2 = (*(unsigned __int8 (__thiscall **)(Animation *))(this->u32_350)(this) == 0; /*0x4549bd*/
  v3 = this->q148; /*0x4549bf*/
  v4 = *(_DWORD *)(v3 + 1036); /*0x4549c5*/
  if ( !v2 ) /*0x4549cb*/
  {
    if ( v4 && !this->u32_662 ) /*0x4549d5*/
    {
      this->u32_662 = 1; /*0x4549df*/
      TechnoClass::Find(this->q087, *(_DWORD *)(v3 + 1036)); /*0x4549f3*/
    }
    v5 = (_BYTE *)this->q148; /*0x4549f8*/
    if ( v5[5831] ) /*0x4549fe*/
    {
      if ( *((char *)this + 1771) <= 0 ) /*0x454a10*/
      {
        v6 = this->u8_6EC; /*0x454a12*/
        if ( v6 != v5[5895] ) /*0x454a20*/
        {
          this->u8_6EB = 1; /*0x454a22*/
          if ( v6 == v5[5895] ) /*0x454a31*/
            this->u8_6EC = 0; /*0x454a33*/
          this->q020 = 1; /*0x454a3a*/
        }
      }
    }
    if ( v5[3281] && !this->u8_269 ) /*0x454a4b*/
      (*(void (__thiscall **)(Animation *))(this->u32_414)(this); /*0x454a59*/
    v7 = this->q148; /*0x454a5f*/
    if ( *(_BYTE *)(v7 + 5491) && *(int *)(v7 + 3812) > 0 ) /*0x454a77*/
      BuildingClass::ProcessAnimationStates((BuildingClass *)this); /*0x454a7b*/
    if ( *(_BYTE *)(this->q148 + 5492) ) /*0x454a86*/
    {
      BuildingClass::ClearAnims((BuildingClass *)this, 19); /*0x454a98*/
      v8 = 0; /*0x454a9d*/
      for ( i = 0; i < 1428; i += 68 ) /*0x454a9f*/
      {
        if ( *(_BYTE *)(i + this->q148 + 3983) ) /*0x454aa7*/
        {
          BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x454ab4*/
          _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x454ab9*/
          __asm /*0x454abf*/
          {
            fcomp qword ptr [edx+1700h]
            fnstsw ax
          }
          if ( (_AX & 0x4100) != 0 ) /*0x454aca*/
          {
            v12 = 1; /*0x454ad2*/
            v13 = (AnimTypeClass *)(i + this->q148 + 3932); /*0x454ad7*/
          }
          else
          {
            _EDX = this->q148; /*0x454ae0*/
            v12 = 0; /*0x454ae6*/
            v13 = (AnimTypeClass *)(i + _EDX + 3916); /*0x454ae8*/
          }
          if ( v13 ) /*0x454af1*/
          {
            if ( LOBYTE(v13->ObjectTypeClass) ) /*0x454af3*/
              BuildingClass::PlayAnim((BuildingClass *)this, _EDX, v13, v8, v12, 0, 0); /*0x454b01*/
          }
        }
        ++v8; /*0x454b09*/
      }
    }
    return; /*0x454b10*/
  }
  if ( v4 && this->u32_662 ) /*0x454b1a*/
  {
    v14 = this->q087; /*0x454b24*/
    this->u32_662 = 0; /*0x454b2a*/
    HouseClass::LostPoweredCenter(v14, *(_DWORD *)(v3 + 1036)); /*0x454b38*/
  }
  v15 = (CaptureManager *)this->q0AF; /*0x454b3d*/
  if ( v15 ) /*0x454b45*/
    CaptureManager::FreeAll(v15); /*0x454b47*/
  if ( this->q0AB ) /*0x454b4c*/
    TechnoClass::EjectPassengers((TechnoClass *)this, 1); /*0x454b5a*/
  v16 = this->q148; /*0x454b5f*/
  if ( *(_BYTE *)(v16 + 5831) && *((char *)this + 1771) >= 0 && this->u8_6EC ) /*0x454b79*/
  {
    this->u8_6EB = -1; /*0x454b83*/
    this->q020 = 1; /*0x454b8a*/
  }
  if ( *(_BYTE *)(v16 + 3281) ) /*0x454b91*/
  {
    if ( this->u8_269 ) /*0x454b9b*/
    {
      (*(void (__thiscall **)(Animation *))(this->u32_418)(this); /*0x454ba9*/
      if ( this->u8_268 ) /*0x454baf*/
      {
        v17 = this->q087; /*0x454bb9*/
        this->u8_268 = 0; /*0x454bbf*/
        this->u8_669 = 0; /*0x454bc6*/
        *(_BYTE *)(v17 + 22392) = 1; /*0x454bcd*/
        v18 = *(_DWORD *)this; /*0x454bda*/
        this->q09B = *(char *)(this->q148 + 3282); /*0x454be5*/
        (*(void (__thiscall **)(Animation *))(v18 + 1044))(this); /*0x454beb*/
      }
    }
  }
  v19 = this->q148; /*0x454bf1*/
  if ( *(_BYTE *)(v19 + 5491) && *(int *)(v19 + 3812) > 0 ) /*0x454c09*/
    BuildingClass::UpdateAnimationSlots((BuildingClass *)this); /*0x454c0d*/
  if ( *(_BYTE *)(this->q148 + 5492) ) /*0x454c18*/
  {
    v20 = this->q087; /*0x454c26*/
    v21 = *(_DWORD *)(v20 + 676); /*0x454c2c*/
    v22 = *(_DWORD *)(v20 + 684); /*0x454c32*/
    if ( v21 != -1 ) /*0x454c3b*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v21 >= v22 ) /*0x454c47*/
        goto LABEL_51; /*0x454c47*/
      v22 -= *(_DWORD *)&stru_A8EB00.?[416] - v21; /*0x454c49*/
    }
    if ( v22 ) /*0x454c4d*/
    {
LABEL_52:
      BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x454c59*/
      _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x454c60*/
      __asm /*0x454c66*/
      {
        fcomp qword ptr [edx+1700h]
        fnstsw ax
      }
      if ( (_AX & 0x4100) != 0 ) /*0x454c71*/
      {
        v25 = 1; /*0x454c79*/
        v26 = (AnimTypeClass *)(this->q148 + 5224); /*0x454c7e*/
      }
      else
      {
        v25 = 0; /*0x454c8b*/
        v26 = (AnimTypeClass *)(this->q148 + 5208); /*0x454c8d*/
      }
      if ( v26 && LOBYTE(v26->ObjectTypeClass) ) /*0x454c96*/
        BuildingClass::PlayAnim((BuildingClass *)this, *(int *)&DSurface_ViewBounds.__pad_FC[324], v26, 19, v25, 0, 0); /*0x454ca5*/
      v27 = 0; /*0x454caa*/
      for ( j = 0; j < 1428; j += 68 ) /*0x454cac*/
      {
        if ( *(_BYTE *)(j + this->q148 + 3983) ) /*0x454cb4*/
          BuildingClass::ClearAnims((BuildingClass *)this, v27); /*0x454cc2*/
        ++v27; /*0x454cca*/
      }
      return; /*0x454cd1*/
    }
LABEL_51:
    if ( !*(_BYTE *)(v20 + 22395) ) /*0x454c57*/
      return; /*0x454c57*/
    goto LABEL_52; /*0x454c57*/
  }
}



// ==== 0x00454CE0  ObjectClass::nullsub_5  this=ObjectClass  sig=csp ====
void nullsub_5(ObjectClass *this)
{
  ; /*0x454ce0*/
}



// ==== 0x00454DB0  BuildingClass::CleanupOccupation  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CleanupOccupation(BuildingClass *this)
{
  BuildingClass *v1; // esi
  int result; // eax
  _DWORD *v3; // eax
  int cloakState; // eax
  char Translucency; // al
  char v6; // al
  char v7; // bl
  int *Anims; // ecx
  int v9; // edi
  ParticleSystemClass *ambientParticles; // ecx
  char v11; // al
  char v12; // al
  char v13; // bl
  int *v14; // ecx
  int v15; // edi
  ParticleSystemClass *v16; // eax
  int *NaturalParticleSystemLocation; // eax
  int v18; // ebp
  int v19; // ebx
  int *v20; // edi
  int v21; // edx
  int v22; // esi
  int v23; // edx
  int v24; // eax
  CellClass *v25; // eax
  int v26; // eax
  BuildingClass *v27; // ebx
  Draw *v28; // esi
  int Draw_field_00; // eax
  int v30; // ebp
  int v31; // edi
  int *v32; // eax
  int v33; // ebp
  int k; // ebx
  bool v35; // zf
  BuildingClass *v36; // edi
  _DWORD *m; // esi
  int v38; // eax
  _DWORD *v39; // eax
  _DWORD *v40; // eax
  int *v41; // eax
  int *v42; // eax
  int v43; // ebp
  int v44; // ebx
  BuildingClass *v45; // edi
  _DWORD *i; // esi
  int v47; // eax
  _DWORD *v48; // eax
  int *v49; // eax
  int v50; // kr1C_4
  int v51; // eax
  int j; // edi
  BuildingClass *v53; // esi
  _DWORD *v54; // eax
  int v55; // edx
  BuildingTypeClass *Type; // eax
  char CloakRadius; // dl
  char v58; // al
  int v59; // [esp+1Ch] [ebp-54h]
  int v61; // [esp+30h] [ebp-40h]
  char v62[4]; // [esp+34h] [ebp-3Ch] BYREF
  _BYTE *v63; // [esp+38h] [ebp-38h]
  _BYTE *v64; // [esp+3Ch] [ebp-34h]
  int v65[3]; // [esp+40h] [ebp-30h] BYREF
  int v66; // [esp+4Ch] [ebp-24h]
  _DWORD v67[2]; // [esp+54h] [ebp-1Ch] BYREF
  int v68; // [esp+5Ch] [ebp-14h] BYREF
  int v69[2]; // [esp+60h] [ebp-10h] BYREF
  int v70; // [esp+68h] [ebp-8h]
  _BYTE *v71; // [esp+74h] [ebp+4h] BYREF

  v1 = this; /*0x454db6*/
  result = (int)this->Type; /*0x454dbb*/
  if ( result ) /*0x454dc7*/
  {
    v3 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 18))(this, v69); /*0x454dd6*/
    LOWORD(v66) = *v3 / 256; /*0x454de9*/
    HIWORD(v66) = v3[1] / 256; /*0x454dfd*/
    cloakState = v1->?; /*0x454e02*/
    if ( cloakState == 1 ) /*0x454e0b*/
    {
      Translucency = v1->Translucency; /*0x454e11*/
      if ( Translucency < 15 ) /*0x454e19*/
      {
        v6 = Translucency + 1; /*0x454e1f*/
        v1->Translucency = v6; /*0x454e23*/
        if ( v6 == 1 || v6 == 6 || v6 == 11 ) /*0x454e31*/
          v1->? = 1; /*0x454e33*/
        v7 = v6; /*0x454e3a*/
        if ( v6 == 15 && (*((int (__thiscall **)(BuildingClass *, _DWORD, _DWORD))v1->TechnoClass + 26))(v1, 0, 0) == 5 ) /*0x454e4e*/
          v7 = 16; /*0x454e50*/
        Anims = v1->Anims; /*0x454e55*/
        v9 = 21; /*0x454e5b*/
        do /*0x454e70*/
        {
          if ( *Anims ) /*0x454e60*/
            *(_BYTE *)(*Anims + 376) = v7; /*0x454e66*/
          ++Anims; /*0x454e6c*/
          --v9; /*0x454e6f*/
        }
        while ( v9 ); /*0x454e70*/
        if ( v1->Translucency == 15 ) /*0x454e79*/
        {
          ambientParticles = v1->?; /*0x454e7f*/
          v1->? = 2; /*0x454e85*/
          if ( ambientParticles ) /*0x454e91*/
          {
            (*((void (__thiscall **)(ParticleSystemClass *, int))ambientParticles->ObjectClass + 8))( /*0x454e9b*/
              ambientParticles,
              1);
            v1->? = 0; /*0x454e9e*/
          }
        }
      }
    }
    else if ( cloakState == 3 ) /*0x454eac*/
    {
      v11 = v1->Translucency; /*0x454eb2*/
      if ( v11 >= 0 ) /*0x454eba*/
      {
        if ( v11 > 0 ) /*0x454ec0*/
          v1->Translucency = v11 - 1; /*0x454ec4*/
        v12 = v1->Translucency; /*0x454eca*/
        if ( !v12 || v12 == 5 || v12 == 10 ) /*0x454eda*/
          v1->? = 1; /*0x454edc*/
        v13 = v12; /*0x454ee3*/
        if ( v12 == 15 && (*((int (__thiscall **)(BuildingClass *, _DWORD, _DWORD))v1->TechnoClass + 26))(v1, 0, 0) == 5 ) /*0x454ef7*/
          v13 = 16; /*0x454ef9*/
        v14 = v1->Anims; /*0x454efe*/
        v15 = 21; /*0x454f04*/
        do /*0x454f19*/
        {
          if ( *v14 ) /*0x454f09*/
            *(_BYTE *)(*v14 + 376) = v13; /*0x454f0f*/
          ++v14; /*0x454f15*/
          --v15; /*0x454f18*/
        }
        while ( v15 ); /*0x454f19*/
        if ( !v1->Translucency ) /*0x454f1b*/
        {
          v16 = v1->?; /*0x454f29*/
          v1->? = 0; /*0x454f2f*/
          if ( !v16 ) /*0x454f37*/
          {
            NaturalParticleSystemLocation = v1->Type->?; /*0x454f49*/
            if ( *NaturalParticleSystemLocation != g_BuildingClassPool /*0x454f6c*/
              || v1->Type->?[1] != dword_89C84C
              || v1->Type->?[2] != dword_89C850 )
            {
              v18 = *NaturalParticleSystemLocation; /*0x454f75*/
              v19 = v1->Type->?[1]; /*0x454f77*/
              v70 = v1->Type->?[2]; /*0x454f7f*/
              v20 = (int *)__2_YAPAXI_Z(0x100u); /*0x454f88*/
              if ( v20 ) /*0x454f8f*/
              {
                v21 = this->?[1]; /*0x454fa9*/
                v65[0] = v18 + this->?[0]; /*0x454fac*/
                v22 = this->?[2]; /*0x454fb4*/
                v67[0] = this->?[0]; /*0x454fbb*/
                v65[1] = v19 + v21; /*0x454fbf*/
                v23 = this->?[1]; /*0x454fc3*/
                v24 = this->?[2]; /*0x454fc6*/
                v65[2] = v70 + v22; /*0x454fd5*/
                v67[1] = v23; /*0x454fd9*/
                v68 = v24; /*0x454fdd*/
                v25 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v67); /*0x454fe1*/
                v26 = ParticleSystemClass::Constructor(v20, this->Type->?[0], v65, (int)v25, 0, &g_BuildingClassPool, 0); /*0x454fff*/
                v1 = this; /*0x455004*/
              }
              else
              {
                v26 = 0; /*0x45500a*/
              }
              v1->? = (ParticleSystemClass *)v26; /*0x45500c*/
            }
          }
        }
      }
    }
    if ( v1->? == 2 && (*((unsigned __int8 (__thiscall **)(BuildingClass *))v1->TechnoClass + 169))(v1) ) /*0x45501f*/
      (*((void (__thiscall **)(BuildingClass *, _DWORD))v1->TechnoClass + 279))(v1, 0); /*0x45502f*/
    result = v1->?; /*0x455035*/
    if ( !result ) /*0x45503d*/
    {
      result = (*((int (__thiscall **)(BuildingClass *))v1->TechnoClass + 168))(v1); /*0x455043*/
      if ( (_BYTE)result ) /*0x45504b*/
        result = (*((int (__thiscall **)(BuildingClass *, _DWORD))v1->TechnoClass + 280))(v1, 0); /*0x455053*/
    }
    LOBYTE(result) = v1->HasCloakingData; /*0x455059*/
    if ( (_BYTE)result ) /*0x455061*/
    {
      result = (int)v1->Type; /*0x455067*/
      if ( *(_BYTE *)(result + 5831) ) /*0x45506d*/
      {
        v27 = this; /*0x45507b*/
        v28 = dword_89DDC0; /*0x45507f*/
        Draw_field_00 = dword_89DDC0->Draw_field_00; /*0x45508b*/
        *(_DWORD *)v62 = this->?->relatedTagsCount; /*0x455092*/
        v30 = (*(int (__thiscall **)(Draw *))(Draw_field_00 + 124))(dword_89DDC0); /*0x455099*/
        result = v30 - (v30 >> 31); /*0x45509c*/
        v61 = v30; /*0x45509e*/
        v31 = v30 / 2; /*0x4550aa*/
        LOBYTE(result) = this->CloakRadius; /*0x4550ae*/
        if ( this->HasCloakingData <= 0 ) /*0x4550b4*/
        {
          if ( (_BYTE)result ) /*0x455275*/
          {
            this->CloakRadius = result - 1; /*0x45528b*/
            (*(void (__thiscall **)(Draw *))(v28->Draw_field_00 + 24))(v28); /*0x455295*/
            v41 = (int *)(*(int (__thiscall **)(Draw *, int *, _DWORD))(v28->Draw_field_00 + 120))(v28, &v68, 0); /*0x4552a3*/
            Draw::Ellipse(v28, v31, v31, this->Type->CloakRadiusInCells, *v41, v41[1], v41[2], v41[3], 2); /*0x4552d3*/
            if ( this->CloakRadius ) /*0x4552d8*/
            {
              v42 = (int *)(*(int (__thiscall **)(Draw *, int *))(v28->Draw_field_00 + 120))(v28, v69); /*0x4552ed*/
              Draw::Ellipse(v28, v31, v31, this->CloakRadius, *v42, v42[1], v42[2], v42[3], 1); /*0x455317*/
            }
            v64 = (_BYTE *)(*(int (__thiscall **)(Draw *, _DWORD, _DWORD))(v28->Draw_field_00 + 92))(v28, 0, 0); /*0x45532d*/
            result = v66 - v31; /*0x455337*/
            HIWORD(v67[0]) = HIWORD(v66) - v31; /*0x455339*/
            LOWORD(v67[0]) = v66 - v31; /*0x455340*/
            v63 = 0; /*0x455345*/
            if ( v30 > 0 ) /*0x45534d*/
            {
              v43 = *(_DWORD *)v62; /*0x455353*/
              while ( 2 ) /*0x455357*/
              {
                v44 = 0; /*0x455357*/
                do /*0x45544d*/
                {
                  v35 = *v64++ == 0; /*0x455360*/
                  if ( v35 ) /*0x455366*/
                  {
                    LOWORD(v65[0]) = v44 + LOWORD(v67[0]); /*0x45537d*/
                    HIWORD(v65[0]) = (_WORD)v63 + HIWORD(v67[0]); /*0x455382*/
                    *(_DWORD *)v62 = v65[0]; /*0x45538f*/
                    v45 = (BuildingClass *)CellCoord::To_CellObj( /*0x45539e*/
                                             (CellCoord *)&stru_87F5F0.__pad_58[416],
                                             (__int16 *)v62);
                    if ( (unsigned __int8)Cell::HasOccupierBit((Cell *)v45, v43) ) /*0x4553a3*/
                    {
                      BuildingClass::updateOccupiedState(v45, v43); /*0x4553b3*/
                      for ( i = (_DWORD *)v45->?[1]; i; i = (_DWORD *)i[12] ) /*0x4553c0*/
                      {
                        v47 = (*(int (__thiscall **)(_DWORD *))(*i + 44))(i); /*0x4553c6*/
                        if ( v47 == 1 || v47 == 15 || v47 == 2 ) /*0x4553d6*/
                          (*(void (__thiscall **)(_DWORD *))(*i + 1056))(i); /*0x4553dc*/
                      }
                      v48 = Cell::IsBridge((Cell *)v45); /*0x4553eb*/
                      if ( v48 ) /*0x4553f2*/
                      {
                        if ( *(_DWORD *)(v48[135] + 48) == v43 ) /*0x4553fd*/
                        {
                          v49 = (int *)(*(int (__thiscall **)(_DWORD *, int *))(*v48 + 72))(v48, v69); /*0x455408*/
                          v50 = *v49; /*0x455418*/
                          v51 = v49[1] / 256; /*0x455429*/
                          if ( (unsigned __int16)(v50 / 256) == *(_WORD *)v62 /*0x455440*/
                            && (_WORD)v51 == *(_WORD *)&v62[2]
                            && !(_BYTE)v71 )
                          {
                            ++this->CloakRadius; /*0x4555c0*/
                            return (int)this; /*0x4555b0*/
                          }
                        }
                      }
                    }
                  }
                  ++v44; /*0x45544a*/
                }
                while ( v44 < v61 ); /*0x45544d*/
                result = (int)++v63; /*0x45545b*/
                if ( (int)v63 < v61 ) /*0x455462*/
                  continue; /*0x455462*/
                break;
              }
              v27 = this; /*0x455468*/
            }
            LOBYTE(result) = v27->CloakRadius; /*0x45546c*/
            if ( !(_BYTE)result ) /*0x455474*/
            {
              result = stru_A8EB00.ObjectTypeClass[20]; /*0x45547a*/
              for ( j = 0; j < stru_A8EB00.ObjectTypeClass[20]; ++j ) /*0x455483*/
              {
                v53 = *(BuildingClass **)(stru_A8EB00.ObjectTypeClass[17] + 4 * j); /*0x45548f*/
                if ( v53->? ) /*0x455492*/
                {
                  if ( v53 != v27 ) /*0x4554a2*/
                  {
                    if ( v53->Type->CloakGenerator ) /*0x4554ae*/
                    {
                      if ( (*((unsigned __int8 (__thiscall **)(_DWORD))v53->TechnoClass + 212))(*(_DWORD *)(stru_A8EB00.ObjectTypeClass[17] + 4 * j)) ) /*0x4554c0*/
                      {
                        if ( !v53->HasCloakingData ) /*0x4554ce*/
                        {
                          v54 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, int *))v53->TechnoClass + 18))( /*0x4554e5*/
                                            v53,
                                            v69);
                          LOWORD(v67[0]) = *v54 / 256; /*0x4554f8*/
                          HIWORD(v67[0]) = v54[1] / 256; /*0x455510*/
                          v55 = v27->Type->CloakRadiusInCells + 2; /*0x45553a*/
                          if ( (__int16)(HIWORD(v66) - HIWORD(v67[0])) * (__int16)(HIWORD(v66) - HIWORD(v67[0])) /*0x455551*/
                             + (__int16)(v66 - LOWORD(v67[0])) * (__int16)(v66 - LOWORD(v67[0])) < 4 * v55 * v55 )
                          {
                            Type = v53->Type; /*0x455553*/
                            if ( Type->CloakGenerator ) /*0x455559*/
                            {
                              CloakRadius = v53->CloakRadius; /*0x455563*/
                              v53->HasCloakingData = 1; /*0x455569*/
                              if ( CloakRadius == Type->CloakRadiusInCells ) /*0x455576*/
                                v53->CloakRadius = 0; /*0x455578*/
                              v53->? = 1; /*0x45557f*/
                            }
                            v58 = v53->CloakRadius; /*0x455586*/
                            if ( v58 ) /*0x45558e*/
                              v53->CloakRadius = v58 - 1; /*0x455592*/
                          }
                        }
                      }
                    }
                  }
                }
                result = stru_A8EB00.ObjectTypeClass[20]; /*0x455598*/
              }
            }
          }
          else
          {
            this->HasCloakingData = 0; /*0x455277*/
          }
        }
        else if ( (_BYTE)result == this->Type->CloakRadiusInCells ) /*0x4550c6*/
        {
          this->HasCloakingData = 0; /*0x4550c8*/
        }
        else
        {
          this->CloakRadius = result + 1; /*0x4550dd*/
          (*(void (__thiscall **)(Draw *, _DWORD))(v28->Draw_field_00 + 24))(v28, 0); /*0x4550e7*/
          v32 = (int *)(*(int (__thiscall **)(Draw *, int *, int))(v28->Draw_field_00 + 120))(v28, v69, 1); /*0x4550f5*/
          Draw::Ellipse(v28, v31, v31, this->CloakRadius, *v32, v32[1], v32[2], v32[3], v59); /*0x45511f*/
          v63 = (_BYTE *)(*(int (__thiscall **)(Draw *, _DWORD))(v28->Draw_field_00 + 92))(v28, 0); /*0x455135*/
          v33 = 0; /*0x455141*/
          LOWORD(v65[0]) = v66 - v31; /*0x455143*/
          result = v61; /*0x455148*/
          for ( HIWORD(v65[0]) = HIWORD(v66) - v31; v33 < v61; ++v33 ) /*0x455153*/
          {
            for ( k = 0; k < v61; ++k ) /*0x455159*/
            {
              v35 = *v63++ == 0; /*0x455162*/
              if ( !v35 ) /*0x455168*/
              {
                HIWORD(v64) = v33 + HIWORD(v65[0]); /*0x45517b*/
                LOWORD(v64) = k + LOWORD(v65[0]); /*0x455180*/
                v71 = v64; /*0x45518d*/
                v36 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v71); /*0x4551a0*/
                if ( !(unsigned __int8)Cell::HasOccupierBit((Cell *)v36, v62[0]) ) /*0x4551a5*/
                {
                  BuildingClass::checkOccupant(v36, v62[0]); /*0x4551b9*/
                  for ( m = (_DWORD *)v36->?[1]; m; m = (_DWORD *)m[12] ) /*0x4551c6*/
                  {
                    v38 = (*(int (__thiscall **)(_DWORD *))(*m + 44))(m); /*0x4551cc*/
                    if ( v38 == 1 || v38 == 15 || v38 == 2 ) /*0x4551dc*/
                      (*(void (__thiscall **)(_DWORD *))(*m + 1056))(m); /*0x4551e2*/
                  }
                  v39 = Cell::IsBridge((Cell *)v36); /*0x4551f1*/
                  if ( v39 ) /*0x4551f8*/
                  {
                    if ( *(_DWORD *)(v39[135] + 48) == *(_DWORD *)v62 ) /*0x455207*/
                    {
                      v40 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v39 + 72))(v39, v69); /*0x455212*/
                      if ( (_BYTE *)__PAIR32__(v40[1] / 256, *v40 / 256) == v71 ) /*0x45523b*/
                      {
                        --this->CloakRadius; /*0x455263*/
                        return (int)this; /*0x455270*/
                      }
                    }
                  }
                }
              }
              result = v61; /*0x455244*/
            }
          }
        }
      }
    }
  }
  return result; /*0x4550cf*/
}



// ==== 0x004555D0  BuildingClass::IsPoweredActive  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::IsPoweredActive(BuildingClass *this)
{
  int result; // eax
  BuildingTypeClass *Type; // ebx
  HouseClass *owner; // edi
  int v5; // edx

  if ( !this->HasPower && this->Audio7[1] < 2 ) /*0x4555ea*/
    goto LABEL_20; /*0x4555ea*/
  result = this->?; /*0x4555f0*/
  if ( result > 0 ) /*0x4555f8*/
    goto LABEL_20; /*0x4555f8*/
  result = this->?; /*0x4555fe*/
  if ( !result ) /*0x455603*/
    goto LABEL_20; /*0x455603*/
  result = (int)this->Type; /*0x455609*/
  if ( *(_BYTE *)(result + 5491) ) /*0x45560f*/
  {
    if ( *(int *)(result + 3812) > 0 ) /*0x455621*/
    {
      result = HouseClass::GetPowerRatio(this->?); /*0x455629*/
      __asm /*0x45562e*/
      {
        fcomp ds:dbl_7E1718
        fnstsw ax
      }
      if ( (result & 0x100) != 0 && this->Audio7[1] < 2 ) /*0x455641*/
        goto LABEL_20; /*0x455641*/
    }
  }
  Type = this->Type; /*0x455643*/
  if ( Type->PoweredSpecial ) /*0x455649*/
  {
    owner = this->?; /*0x455653*/
    v5 = owner->powerBlackoutTimer[0]; /*0x455659*/
    result = owner->powerBlackoutTimer[2]; /*0x45565f*/
    if ( v5 != -1 ) /*0x455668*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v5 >= result ) /*0x455674*/
      {
LABEL_14:
        if ( HIBYTE(owner->HouseClass_field_timer_B[2]) ) /*0x45567c*/
          goto LABEL_20; /*0x455684*/
        goto LABEL_15; /*0x455684*/
      }
      result -= *(_DWORD *)&stru_A8EB00.?[416] - v5; /*0x455676*/
    }
    if ( result ) /*0x45567a*/
      goto LABEL_20; /*0x45567a*/
    goto LABEL_14; /*0x45567a*/
  }
LABEL_15:
  if ( !Type->NeedsEngineer || this->__pad_6B8[20] ) /*0x455690*/
  {
    result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this); /*0x45569e*/
    if ( result != 18 ) /*0x4556a7*/
    {
      result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this); /*0x4556ad*/
      if ( result != 19 ) /*0x4556b6*/
      {
        LOBYTE(result) = 1; /*0x4556ba*/
        return result; /*0x4556bd*/
      }
    }
  }
LABEL_20:
  LOBYTE(result) = 0; /*0x4556be*/
  return result; /*0x4556b8*/
}



// ==== 0x004556D0  BuildingClass::ScanCircleForUnits  this=BuildingClass  sig=csp ====
int __thiscall FootClass::ScanCircleForUnits(BuildingClass *this)
{
  int CloakRadiusInCells; // ebp
  int relatedTagsCount; // eax
  int v3; // esi
  _DWORD *v4; // eax
  int v5; // edi
  int result; // eax
  int v7; // ebx
  FootClass *v8; // esi
  _DWORD *j; // esi
  int v10; // eax
  int v11; // [esp+Ch] [ebp-24h]
  int v12; // [esp+Ch] [ebp-24h]
  int i; // [esp+10h] [ebp-20h]
  __int16 v14[2]; // [esp+14h] [ebp-1Ch] BYREF
  int v15; // [esp+18h] [ebp-18h]
  int v16; // [esp+1Ch] [ebp-14h]
  int v17; // [esp+20h] [ebp-10h]
  _BYTE v18[12]; // [esp+24h] [ebp-Ch] BYREF
  int v19; // [esp+34h] [ebp+4h]

  CloakRadiusInCells = this->Type->CloakRadiusInCells; /*0x4556e1*/
  relatedTagsCount = this->?->relatedTagsCount; /*0x4556ea*/
  v3 = CloakRadiusInCells * CloakRadiusInCells; /*0x4556ed*/
  v16 = CloakRadiusInCells * CloakRadiusInCells; /*0x4556fd*/
  v15 = relatedTagsCount; /*0x455701*/
  if ( v19 == g_TerrainTypeTable ) /*0x455705*/
  {
    v4 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass + 18))(this, v18); /*0x45571c*/
    LOWORD(v11) = *v4 / 256; /*0x45572f*/
    HIWORD(v11) = v4[1] / 256; /*0x455743*/
    v19 = v11; /*0x45574c*/
  }
  v5 = -CloakRadiusInCells; /*0x455752*/
  result = -CloakRadiusInCells; /*0x455754*/
  v17 = -CloakRadiusInCells; /*0x455756*/
  for ( i = -CloakRadiusInCells; result < CloakRadiusInCells; i = result ) /*0x455760*/
  {
    if ( v5 < CloakRadiusInCells ) /*0x455769*/
    {
      v7 = result * result; /*0x455775*/
      HIWORD(v12) = result + HIWORD(v19); /*0x45577b*/
      do /*0x4557f8*/
      {
        LOWORD(v12) = v5 + v19; /*0x455787*/
        *(_DWORD *)v14 = v12; /*0x455799*/
        if ( v7 + v5 * v5 < v3 ) /*0x45579d*/
        {
          v8 = (FootClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v14); /*0x4557ae*/
          FootClass::updateLocomotion(v8, v15); /*0x4557b7*/
          for ( j = (_DWORD *)v8->?[1]; j; j = (_DWORD *)j[12] ) /*0x4557c4*/
          {
            v10 = (*(int (__thiscall **)(_DWORD *))(*j + 44))(j); /*0x4557ca*/
            if ( v10 == 1 || v10 == 15 || v10 == 2 ) /*0x4557da*/
              (*(void (__thiscall **)(_DWORD *))(*j + 1056))(j); /*0x4557e0*/
          }
          result = i; /*0x4557ed*/
          v3 = v16; /*0x4557f1*/
        }
        ++v5; /*0x4557f5*/
      }
      while ( v5 < CloakRadiusInCells ); /*0x4557f8*/
      v5 = v17; /*0x4557fa*/
    }
    ++result; /*0x4557fe*/
  }
  return result; /*0x45580c*/
}



// ==== 0x00455820  BuildingClass::ScanCircleForUnits2  this=BuildingClass  sig=csp ====
int __thiscall FootClass::ScanCircleForUnits2(BuildingClass *this)
{
  int result; // eax
  int SensorsSight; // ebp
  _DWORD *v4; // eax
  int v5; // edi
  int v6; // ebx
  FootClass *v7; // esi
  _DWORD *j; // esi
  int v9; // eax
  int v10; // [esp+Ch] [ebp-24h]
  int v11; // [esp+Ch] [ebp-24h]
  int i; // [esp+10h] [ebp-20h]
  __int16 v13[2]; // [esp+18h] [ebp-18h] BYREF
  int relatedTagsCount; // [esp+1Ch] [ebp-14h]
  int v15; // [esp+20h] [ebp-10h]
  _BYTE v16[12]; // [esp+24h] [ebp-Ch] BYREF
  int v17; // [esp+34h] [ebp+4h]

  result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 212))(this); /*0x45582a*/
  if ( (_BYTE)result ) /*0x455832*/
  {
    SensorsSight = this->Type->?; /*0x455844*/
    relatedTagsCount = this->?->relatedTagsCount; /*0x455862*/
    if ( v17 == g_TerrainTypeTable ) /*0x455866*/
    {
      v4 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass + 18))(this, v16); /*0x45587f*/
      LOWORD(v10) = *v4 / 256; /*0x455892*/
      HIWORD(v10) = v4[1] / 256; /*0x4558a6*/
      v17 = v10; /*0x4558af*/
    }
    v5 = -SensorsSight; /*0x4558b5*/
    result = -SensorsSight; /*0x4558b7*/
    v15 = -SensorsSight; /*0x4558b9*/
    for ( i = -SensorsSight; result < SensorsSight; i = result ) /*0x4558c3*/
    {
      if ( v5 < SensorsSight ) /*0x4558cc*/
      {
        v6 = result * result; /*0x4558d8*/
        HIWORD(v11) = result + HIWORD(v17); /*0x4558de*/
        do /*0x45595b*/
        {
          LOWORD(v11) = v5 + v17; /*0x4558ea*/
          *(_DWORD *)v13 = v11; /*0x4558f8*/
          if ( v6 + v5 * v5 < SensorsSight * SensorsSight ) /*0x455904*/
          {
            v7 = (FootClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v13); /*0x455919*/
            FootClass::checkTerrainSpeed(v7, relatedTagsCount); /*0x45591e*/
            for ( j = (_DWORD *)v7->?[1]; j; j = (_DWORD *)j[12] ) /*0x45592b*/
            {
              v9 = (*(int (__thiscall **)(_DWORD *))(*j + 44))(j); /*0x455931*/
              if ( v9 == 1 || v9 == 15 || v9 == 2 ) /*0x455941*/
                (*(void (__thiscall **)(_DWORD *))(*j + 1056))(j); /*0x455947*/
            }
            result = i; /*0x455954*/
          }
          ++v5; /*0x455958*/
        }
        while ( v5 < SensorsSight ); /*0x45595b*/
        v5 = v15; /*0x45595d*/
      }
      ++result; /*0x455961*/
    }
  }
  return result; /*0x45596f*/
}



// ==== 0x00455980  BuildingClass::ScanCircleForTiberium  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ScanCircleForTiberium(BuildingClass *this)
{
  int DetectDisguiseRange; // ebx
  int result; // eax
  _DWORD *v3; // eax
  int v4; // esi
  int v5; // ebp
  BuildingClass *v6; // eax
  int v7; // [esp+Ch] [ebp-20h]
  int v8; // [esp+Ch] [ebp-20h]
  __int16 v9[2]; // [esp+14h] [ebp-18h] BYREF
  int v10; // [esp+18h] [ebp-14h]
  int i; // [esp+1Ch] [ebp-10h]
  _BYTE v12[12]; // [esp+20h] [ebp-Ch] BYREF
  int v13; // [esp+30h] [ebp+4h]

  DetectDisguiseRange = this->Type->?; /*0x455991*/
  result = this->?->relatedTagsCount; /*0x4559a1*/
  v10 = result; /*0x4559a9*/
  if ( (_WORD)v13 == (_WORD)g_TerrainTypeTable ) /*0x4559b4*/
  {
    LOWORD(result) = HIWORD(v13); /*0x4559b6*/
    if ( HIWORD(v13) == HIWORD(g_TerrainTypeTable) ) /*0x4559c2*/
    {
      v3 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass + 18))(this, v12); /*0x4559cb*/
      LOWORD(v7) = *v3 / 256; /*0x4559de*/
      result = v3[1] / 256; /*0x4559ef*/
      HIWORD(v7) = result; /*0x4559f2*/
      v13 = v7; /*0x4559fb*/
    }
  }
  v4 = -DetectDisguiseRange; /*0x455a01*/
  v5 = -DetectDisguiseRange; /*0x455a03*/
  for ( i = -DetectDisguiseRange; v5 < DetectDisguiseRange; ++v5 ) /*0x455a0b*/
  {
    if ( v4 < DetectDisguiseRange ) /*0x455a10*/
    {
      do /*0x455a64*/
      {
        LOWORD(v8) = v4 + v13; /*0x455a2f*/
        HIWORD(v8) = HIWORD(v13) + v5; /*0x455a1e*/
        *(_DWORD *)v9 = v8; /*0x455a38*/
        result = DetectDisguiseRange * DetectDisguiseRange; /*0x455a3c*/
        if ( v5 * v5 + v4 * v4 < DetectDisguiseRange * DetectDisguiseRange ) /*0x455a44*/
        {
          v6 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v9); /*0x455a50*/
          result = BuildingClass::evaulateDefense(v6, v10); /*0x455a5c*/
        }
        ++v4; /*0x455a61*/
      }
      while ( v4 < DetectDisguiseRange ); /*0x455a64*/
      v4 = i; /*0x455a66*/
    }
  }
  return result; /*0x455a70*/
}



// ==== 0x00455A80  BuildingClass::UpdateTerrainEffect  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::UpdateTerrainEffect(BuildingClass *this)
{
  int result; // eax
  int DetectDisguiseRange; // ebx
  _DWORD *v4; // eax
  int v5; // esi
  int v6; // ebp
  BuildingClass *v7; // eax
  int v8; // [esp+Ch] [ebp-20h]
  int v9; // [esp+Ch] [ebp-20h]
  __int16 v10[2]; // [esp+14h] [ebp-18h] BYREF
  int v11; // [esp+18h] [ebp-14h]
  int i; // [esp+1Ch] [ebp-10h]
  _BYTE v13[12]; // [esp+20h] [ebp-Ch] BYREF
  int v14; // [esp+30h] [ebp+4h]

  result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 212))(this); /*0x455a8a*/
  if ( (_BYTE)result ) /*0x455a92*/
  {
    DetectDisguiseRange = this->Type->?; /*0x455aa4*/
    result = this->?->relatedTagsCount; /*0x455abf*/
    v11 = result; /*0x455ac2*/
    if ( v14 == g_TerrainTypeTable ) /*0x455ac6*/
    {
      v4 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass + 18))(this, v13); /*0x455adf*/
      LOWORD(v8) = *v4 / 256; /*0x455af2*/
      result = v4[1] / 256; /*0x455b03*/
      HIWORD(v8) = result; /*0x455b06*/
      v14 = v8; /*0x455b0f*/
    }
    v5 = -DetectDisguiseRange; /*0x455b15*/
    v6 = -DetectDisguiseRange; /*0x455b17*/
    for ( i = -DetectDisguiseRange; v6 < DetectDisguiseRange; ++v6 ) /*0x455b1f*/
    {
      if ( v5 < DetectDisguiseRange ) /*0x455b24*/
      {
        do /*0x455b78*/
        {
          LOWORD(v9) = v5 + v14; /*0x455b43*/
          result = DetectDisguiseRange * DetectDisguiseRange; /*0x455b48*/
          HIWORD(v9) = HIWORD(v14) + v6; /*0x455b32*/
          *(_DWORD *)v10 = v9; /*0x455b54*/
          if ( v6 * v6 + v5 * v5 < DetectDisguiseRange * DetectDisguiseRange ) /*0x455b58*/
          {
            v7 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v10); /*0x455b64*/
            result = BuildingClass::processGarrison(v7, v11); /*0x455b70*/
          }
          ++v5; /*0x455b75*/
        }
        while ( v5 < DetectDisguiseRange ); /*0x455b78*/
        v5 = i; /*0x455b7a*/
      }
    }
  }
  return result; /*0x455b84*/
}



// ==== 0x00455B90  BuildingClass::GetFWFlags  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetFWFlags(BuildingClass *this)
{
  int *location; // ecx
  int v2; // ebx
  CellClass *v3; // edi
  signed int i; // esi
  Cell *NeighbourContent; // eax
  _DWORD *v6; // eax
  _DWORD v8[3]; // [esp+Ch] [ebp-Ch] BYREF

  location = this->?; /*0x455b93*/
  v2 = 0; /*0x455b9e*/
  v8[0] = *location; /*0x455ba0*/
  v8[1] = location[1]; /*0x455ba7*/
  v8[2] = location[2]; /*0x455bb8*/
  v3 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v8); /*0x455bc1*/
  for ( i = 0; i < 8; i += 2 ) /*0x455bc3*/
  {
    NeighbourContent = (Cell *)Cell::GetNeighbourContent((Cell *)v3, i); /*0x455bc8*/
    v6 = Cell::IsBridge(NeighbourContent); /*0x455bcf*/
    if ( v6 && *(_BYTE *)(v6[328] + 5824) && !*((_BYTE *)v6 + 129) && *((_BYTE *)v6 + 144) ) /*0x455bf2*/
      v2 |= 1 << (i >> 1); /*0x455c07*/
  }
  return v2; /*0x455c11*/
}



// ==== 0x00455C20  ObjectClass::GetScreenCoords  this=BuildingClass  sig=csp ====
int __thiscall ObjectClass::GetScreenCoords(TechnoClass *this)
{
  int *v2; // eax
  bool v3; // zf
  int v4; // edx
  int v5; // edi
  char *v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // esi
  int v10; // edi
  int *v11; // eax
  int v12; // edi
  int v13; // eax
  int *v14; // esi
  IPersistStream v16; // [esp+10h] [ebp-34h]
  IPersistStream v17; // [esp+14h] [ebp-30h]
  int v18; // [esp+18h] [ebp-2Ch] BYREF
  int v19; // [esp+1Ch] [ebp-28h]
  int v20; // [esp+20h] [ebp-24h]
  int v21; // [esp+24h] [ebp-20h]
  int v22; // [esp+28h] [ebp-1Ch] BYREF
  int v23; // [esp+2Ch] [ebp-18h]
  int v24; // [esp+30h] [ebp-14h]
  int v25[4]; // [esp+34h] [ebp-10h] BYREF
  int *v26; // [esp+48h] [ebp+4h]

  v2 = (int *)(*(int (__thiscall **)(TechnoClass *, int *))(this->vtable0 + 172))(this, &v18); /*0x455c32*/
  v22 = *v2; /*0x455c3c*/
  v3 = v22 == this->BuildingClass_field_coord_64C; /*0x455c40*/
  v4 = v2[1]; /*0x455c46*/
  v23 = v4; /*0x455c49*/
  v5 = v2[2]; /*0x455c4d*/
  v24 = v5; /*0x455c56*/
  v16 = g_TacticalClass_Instance[44]; /*0x455c66*/
  v17 = g_TacticalClass_Instance[45]; /*0x455c6a*/
  if ( v3 /*0x455c8e*/
    && v4 == this->q194
    && v5 == this->q654
    && *(_DWORD *)&g_TacticalClass_Instance[44] == this->BuildingClass_field_int_658
    && *(_DWORD *)&g_TacticalClass_Instance[45] == this->BuildingClass_field_65C )
  {
    v6 = (char *)this + 1596; /*0x455c96*/
    v7 = this->BuildingClass_field_rect_63C; /*0x455c98*/
    v8 = this->ironCurtainTimer; /*0x455c9a*/
    v9 = this->chronoLockRemaining; /*0x455c9d*/
    v10 = *((_DWORD *)v6 + 3); /*0x455ca0*/
  }
  else
  {
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v22, &v18); /*0x455cb2*/
    v11 = CalculateBuildingFoundationBounds(*((ObjectClass **)this + 328), v25); /*0x455cc2*/
    v7 = v18 + *v11; /*0x455cd4*/
    v8 = v19 + v11[1]; /*0x455cda*/
    v12 = v11[2]; /*0x455cdc*/
    v13 = v11[3]; /*0x455cdf*/
    this->BuildingClass_field_coord_64C = v22; /*0x455ce2*/
    v20 = v12; /*0x455cec*/
    this->q194 = v23; /*0x455cf0*/
    this->q654 = v24; /*0x455cfa*/
    *((IPersistStream *)this + 406) = v16; /*0x455d04*/
    *((IPersistStream *)this + 407) = v17; /*0x455d0e*/
    v14 = (int *)((char *)this + 1596); /*0x455d14*/
    v19 = v8; /*0x455d1a*/
    v21 = v13; /*0x455d1e*/
    *v14 = v7; /*0x455d22*/
    v14[1] = v8; /*0x455d24*/
    v14[2] = v12; /*0x455d27*/
    v10 = v13; /*0x455d2a*/
    v14[3] = v13; /*0x455d2c*/
    v9 = v20; /*0x455d2f*/
  }
  *v26 = v7; /*0x455d39*/
  v26[1] = v8; /*0x455d3b*/
  v26[2] = v9; /*0x455d3e*/
  v26[3] = v10; /*0x455d41*/
  return (int)v26; /*0x455d44*/
}



// ==== 0x00455D50  BuildingClass::AssignDestination_SyncLog  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::AssignDestination_SyncLog(BuildingClass *this)
{
  int result; // eax
  TechnoClass *v3; // [esp+8h] [ebp+4h]
  int v4; // [esp+Ch] [ebp+8h]

  if ( this->? != 19 ) /*0x455d5a*/
  {
    if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 161))(this) /*0x455d73*/
      || this->Type->ConstructionYard )
    {
      TechnoClass::SetFocus((TechnoClass *)this, (int)v3); /*0x455d80*/
    }
    IPersistStream::Stub(v3, v4); /*0x455d8d*/
  }
  return result; /*0x455d93*/
}



// ==== 0x00455DA0  BuildingClass::CheckSpecialUpdateFlags  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CheckSpecialUpdateFlags(BuildingClass *this)
{
  int result; // eax
  int v2; // ecx

  result = (int)this->Type; /*0x455da0*/
  v2 = *(_DWORD *)(result + 3768); /*0x455da6*/
  LOBYTE(result) = v2 == 40 || v2 == 16 || *(_BYTE *)(result + 5804) || *(_BYTE *)(result + 5801); /*0x455dcd*/
  return result; /*0x455dcc*/
}



// ==== 0x00455DD0  globalHelper_055DD0  this=-  sig=csp ====
_DWORD *__fastcall sub_455DD0(int a1, _DWORD *a2)
{
  int v2; // esi
  _DWORD *v3; // edi
  int v4; // eax
  _DWORD *v5; // esi
  double v6; // st7
  int v7; // eax
  int v9; // [esp+24h] [ebp-24h]
  int v11; // [esp+2Ch] [ebp-1Ch]
  _DWORD *v12; // [esp+30h] [ebp-18h]
  int v14; // [esp+38h] [ebp-10h]
  int v15; // [esp+3Ch] [ebp-Ch]
  int v16; // [esp+40h] [ebp-8h]
  int v17; // [esp+44h] [ebp-4h]

  v2 = a1; /*0x455ddc*/
  v3 = a2; /*0x455de7*/
  v12 = 0; /*0x455df5*/
  v9 = 0x7FFFFFFF; /*0x455df9*/
  if ( (byte_89C828 & 1) == 0 ) /*0x455e01*/
  {
    byte_89C828 |= 1u; /*0x455e11*/
    dword_89C7F0 = Math::RoundToInt(dbl_89C820 * 20.0); /*0x455e1c*/
  }
  v4 = 0; /*0x455e27*/
  v14 = *(_DWORD *)(v2 + 144); /*0x455e2b*/
  v11 = 0; /*0x455e2f*/
  if ( v14 <= 0 ) /*0x455e33*/
    return 0; /*0x455f00*/
  while ( 1 ) /*0x455e47*/
  {
    v5 = *(_DWORD **)(*(_DWORD *)(v2 + 132) + 4 * v4); /*0x455e47*/
    if ( (*(int (__thiscall **)(_DWORD *, int, _DWORD *))(*v3 + 632))(v3, 15, v5) ) /*0x455e4f*/
    {
      v15 = v5[39] - v3[39]; /*0x455e7f*/
      v16 = v5[40] - v3[40]; /*0x455e88*/
      v17 = v5[41] - v3[41]; /*0x455e92*/
      v6 = Math::Sqrt((double)v15 * (double)v15 + (double)v17 * (double)v17 + (double)v16 * (double)v16); /*0x455eb7*/
      v7 = Math::RoundToInt(v6); /*0x455ebf*/
      if ( v7 < v9 && v7 < dword_89C7F0 ) /*0x455ed0*/
      {
        v12 = v5; /*0x455ed2*/
        v9 = v7; /*0x455ed6*/
      }
      v3 = a2; /*0x455eda*/
    }
    v4 = ++v11; /*0x455ee6*/
    if ( v11 >= v14 ) /*0x455eed*/
      break; /*0x455eed*/
    v2 = a1; /*0x455e3b*/
  }
  return v12; /*0x455ef7*/
}



// ==== 0x00455F10  ObjectClass::MarkBuildingFoundationCells  this=ObjectClass  sig=csp ====
char __thiscall MarkBuildingFoundationCells(TechnoClass *this, int a2)
{
  int v2; // esi
  int FoundationWidth; // eax
  int *v5; // ecx
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // edx
  __int16 v10; // cx
  int v11; // ebx
  int v12; // esi
  int v13; // esi
  _DWORD *v14; // eax
  int *v15; // eax
  int v16; // ebx
  int v17; // edi
  int v18; // edi
  int v19; // ebx
  int v20; // eax
  int v21; // edx
  int v22; // esi
  int v23; // ebx
  int v24; // edi
  int owner; // edx
  ObjectClass *v26; // eax
  _DWORD *v27; // esi
  int v28; // ecx
  int v29; // ecx
  _DWORD *v30; // esi
  int v31; // ecx
  int v32; // edx
  int v34; // [esp-4h] [ebp-38h]
  int v35; // [esp+10h] [ebp-24h]
  int v36; // [esp+14h] [ebp-20h]
  __int16 v37[2]; // [esp+18h] [ebp-1Ch] BYREF
  int v38; // [esp+1Ch] [ebp-18h]
  int v39; // [esp+20h] [ebp-14h]
  int v40; // [esp+24h] [ebp-10h]
  int v41; // [esp+28h] [ebp-Ch]
  int v42; // [esp+30h] [ebp-4h]

  v2 = *(_DWORD *)&dword_8871E0->__pad_13BC[164]; /*0x455f1b*/
  FoundationWidth = BuildingTypeClass::GetFoundationWidth(*((BuildingTypeClass **)this + 328)); /*0x455f2d*/
  v5 = (int *)*((_DWORD *)this + 328); /*0x455f32*/
  v39 = 2 * v2 + FoundationWidth; /*0x455f3c*/
  v36 = 2 * v2 + BuildingTypeClass::GetFoundationHeight(v5, 0); /*0x455f53*/
  v6 = this->location[0]; /*0x455f5f*/
  v7 = 1 << *(_DWORD *)(this->owner + 48); /*0x455f61*/
  v8 = this->location[1]; /*0x455f63*/
  v42 = this->location[2]; /*0x455f69*/
  LOWORD(v41) = v6 / 256; /*0x455f79*/
  v9 = (__int16)(v41 - v2); /*0x455f9b*/
  v10 = v8 / 256 - v2; /*0x455fa2*/
  v11 = v9; /*0x455fa4*/
  HIWORD(v41) = v10; /*0x455fa6*/
  v12 = v9 + v39; /*0x455fab*/
  v40 = v9; /*0x455fae*/
  v38 = v9 + v39; /*0x455fb4*/
  if ( v9 < v9 + v39 ) /*0x455fb8*/
  {
    v35 = v36 + v10; /*0x455fc3*/
    do /*0x456013*/
    {
      v13 = v10; /*0x455fcb*/
      if ( v10 < v35 ) /*0x455fd0*/
      {
        do /*0x456001*/
        {
          v37[0] = v11; /*0x455fd6*/
          v37[1] = v13; /*0x455fe1*/
          v14 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v37); /*0x455fe6*/
          ++v13; /*0x455ff8*/
          v14[55] |= v7; /*0x455ff9*/
        }
        while ( v13 < v35 ); /*0x456001*/
        v9 = v40; /*0x456003*/
        v10 = HIWORD(v41); /*0x456007*/
      }
      ++v11; /*0x456010*/
    }
    while ( v11 < v38 ); /*0x456013*/
    v12 = v38; /*0x456015*/
  }
  v15 = (int *)(this->owner + 22356); /*0x45601d*/
  if ( !*v15 ) /*0x456022*/
    *v15 = v9; /*0x456027*/
  if ( !v15[1] ) /*0x456029*/
    v15[1] = v10; /*0x456033*/
  if ( v9 < *v15 ) /*0x45603a*/
  {
    v16 = v15[2]; /*0x45603c*/
    v17 = *v15 - v9; /*0x45603f*/
    *v15 = v9; /*0x456043*/
    v15[2] = v17 + v16; /*0x456045*/
  }
  if ( v12 > v15[2] + *v15 ) /*0x456051*/
    v15[2] = v39 + v9 - *v15; /*0x45605d*/
  v18 = v15[1]; /*0x456060*/
  if ( v10 < v18 ) /*0x456068*/
  {
    v19 = v15[3]; /*0x45606a*/
    v15[1] = v10; /*0x456071*/
    v15[3] = v18 - v10 + v19; /*0x456074*/
  }
  if ( v10 + v36 > v15[1] + v15[3] ) /*0x45608f*/
    v15[3] = v36 + v10 - v15[1]; /*0x45609e*/
  LOBYTE(v20) = a2; /*0x4560a1*/
  if ( !(_BYTE)a2 ) /*0x4560a7*/
  {
    v21 = v9 - 1; /*0x4560ad*/
    v22 = v12 + 2; /*0x4560ae*/
    v38 = v21; /*0x4560b3*/
    v40 = v22; /*0x4560b7*/
    if ( v21 < v22 ) /*0x4560bb*/
    {
      LOBYTE(v20) = v10 + v36; /*0x4560c1*/
      v41 = v10 - 1; /*0x4560c6*/
      v23 = v10 + v36 + 2; /*0x4560ca*/
      do /*0x4561dc*/
      {
        v24 = v41; /*0x4560cd*/
        if ( v41 < v23 ) /*0x4560d3*/
        {
          LOWORD(v39) = v21; /*0x4560d9*/
          do /*0x4561c7*/
          {
            owner = this->owner; /*0x4560de*/
            HIWORD(v39) = v24; /*0x4560e4*/
            a2 = v39; /*0x4560ed*/
            v34 = *(_DWORD *)(owner + 48); /*0x4560f8*/
            v26 = (ObjectClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&a2); /*0x4560ff*/
            v20 = sub_486D90(v26, v34); /*0x456106*/
            if ( v20 == 255 ) /*0x456110*/
            {
              v27 = (_DWORD *)(this->owner + 22304); /*0x45611c*/
              v20 = (*(int (__thiscall **)(_DWORD *, int *))(*v27 + 16))(v27, &a2); /*0x456127*/
              if ( v20 != -1 ) /*0x45612d*/
              {
                v28 = v27[4]; /*0x456133*/
                if ( v20 < v28 ) /*0x456138*/
                {
                  v29 = v28 - 1; /*0x45613e*/
                  for ( v27[4] = v29; v20 < v27[4]; *(_DWORD *)(v27[1] + 4 * v20 - 4) = *(_DWORD *)(v27[1] + 4 * v20) ) /*0x456144*/
                    ++v20; /*0x456149*/
                }
              }
            }
            else if ( v20 > 0 ) /*0x45615c*/
            {
              v20 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)(this->owner + 22304) + 16))( /*0x456171*/
                      this->owner + 22304,
                      &a2);
              if ( v20 == -1 ) /*0x456177*/
              {
                v30 = (_DWORD *)(this->owner + 22304); /*0x45617f*/
                v20 = *(_DWORD *)(this->owner + 22312); /*0x456185*/
                if ( *(_DWORD *)(this->owner + 22320) < v20 /*0x4561af*/
                  || (*(_BYTE *)(this->owner + 22317) || !v20)
                  && (v31 = *(_DWORD *)(this->owner + 22324), v31 > 0)
                  && (LOBYTE(v20) = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*v30 + 8))(v30, v20 + v31, 0),
                      (_BYTE)v20) )
                {
                  v20 = v30[4]; /*0x4561b1*/
                  v32 = v30[1]; /*0x4561b4*/
                  v30[4] = v20 + 1; /*0x4561ba*/
                  *(_DWORD *)(v32 + 4 * v20) = a2; /*0x4561c1*/
                }
              }
            }
            ++v24; /*0x4561c4*/
          }
          while ( v24 < v23 ); /*0x4561c7*/
          v21 = v38; /*0x4561cd*/
          v22 = v40; /*0x4561d1*/
        }
        v38 = ++v21; /*0x4561d8*/
      }
      while ( v21 < v22 ); /*0x4561dc*/
    }
  }
  return v20; /*0x4561e2*/
}



// ==== 0x004561F0  ObjectClass::RecalculateBuildingFoundation  this=ObjectClass  sig=csp ====
int __thiscall RecalculateBuildingFoundation(TechnoClass *this)
{
  int v1; // edi
  TechnoClass *v2; // esi
  int v3; // ebp
  int FoundationHeight; // eax
  int owner; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ebx
  __int16 v10; // cx
  int v11; // esi
  _DWORD *v12; // eax
  int v13; // ebx
  int v14; // ebp
  int v15; // edi
  Cell *v16; // eax
  TechnoClass *v17; // eax
  TechnoClass *v18; // esi
  int vtable0; // eax
  int v20; // ebp
  int result; // eax
  int v22; // edx
  int v23; // ebx
  int v24; // edi
  int v25; // eax
  ObjectClass *v26; // eax
  int v27; // eax
  _DWORD *v28; // esi
  int v29; // ecx
  int v30; // ecx
  int v31; // esi
  int v32; // ecx
  int v33; // edx
  _DWORD *v34; // esi
  int v35; // eax
  int v36; // ecx
  int v37; // ecx
  _DWORD *v38; // eax
  int v39; // edx
  int v40; // [esp-4h] [ebp-44h]
  __int16 v42[2]; // [esp+14h] [ebp-2Ch] BYREF
  __int16 v43[2]; // [esp+18h] [ebp-28h] BYREF
  __int16 v44[2]; // [esp+1Ch] [ebp-24h] BYREF
  int v45; // [esp+20h] [ebp-20h]
  __int16 v46; // [esp+26h] [ebp-1Ah]
  int v47; // [esp+28h] [ebp-18h]
  int v48; // [esp+2Ch] [ebp-14h]
  int v49; // [esp+30h] [ebp-10h]
  int v50; // [esp+34h] [ebp-Ch]
  int v51; // [esp+3Ch] [ebp-4h]

  v1 = *(_DWORD *)&dword_8871E0->__pad_13BC[164]; /*0x4561fc*/
  v2 = this; /*0x456202*/
  v3 = 2 * v1 + BuildingTypeClass::GetFoundationWidth(*((BuildingTypeClass **)this + 328)); /*0x456220*/
  FoundationHeight = BuildingTypeClass::GetFoundationHeight((int *)v2[1].vtable0, 0); /*0x456222*/
  owner = v2->owner; /*0x456227*/
  *(_DWORD *)v42 = 2 * v1 + FoundationHeight; /*0x45622f*/
  v48 = 1 << *(_DWORD *)(owner + 48); /*0x456243*/
  v6 = v2->location[0]; /*0x456247*/
  v7 = v2->location[1]; /*0x456249*/
  v51 = v2->location[2]; /*0x45624f*/
  LOWORD(v50) = v6 / 256; /*0x45625f*/
  HIWORD(v50) = v7 / 256; /*0x456272*/
  v8 = (__int16)(v50 - v1); /*0x456281*/
  v9 = v8; /*0x456284*/
  v10 = HIWORD(v50) - v1; /*0x456286*/
  v46 = HIWORD(v50) - v1; /*0x45628b*/
  v45 = v8; /*0x456292*/
  v47 = v8 + v3; /*0x456296*/
  if ( v8 < v8 + v3 ) /*0x45629a*/
  {
    *(_DWORD *)v44 = *(_DWORD *)v42 + v10; /*0x4562a5*/
    do /*0x456303*/
    {
      v11 = v10; /*0x4562ad*/
      if ( v10 < *(int *)v44 ) /*0x4562b2*/
      {
        v49 = ~v48; /*0x4562ba*/
        do /*0x4562f1*/
        {
          v43[0] = v9; /*0x4562c8*/
          v43[1] = v11; /*0x4562cd*/
          v12 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v43); /*0x4562d2*/
          ++v11; /*0x4562e8*/
          v12[55] &= v49; /*0x4562e9*/
        }
        while ( v11 < *(int *)v44 ); /*0x4562f1*/
        v8 = v45; /*0x4562f3*/
        v10 = v46; /*0x4562f7*/
      }
      ++v9; /*0x456300*/
    }
    while ( v9 < v47 ); /*0x456303*/
    v2 = this; /*0x456305*/
  }
  v49 = 2 * v1; /*0x45630e*/
  v13 = v8 - v1; /*0x456314*/
  v50 = v8 + 2 * v1 + v3; /*0x45631a*/
  if ( v8 - v1 < v50 ) /*0x45631e*/
  {
    *(_DWORD *)v43 = v10 - v1; /*0x456335*/
    v14 = v49 + v10 + *(_DWORD *)v42; /*0x456339*/
    do /*0x4563ba*/
    {
      v15 = *(_DWORD *)v43; /*0x45633c*/
      if ( *(int *)v43 < v14 ) /*0x456342*/
      {
        do /*0x4563a4*/
        {
          v44[0] = v13; /*0x45634e*/
          v44[1] = v15; /*0x456353*/
          v16 = (Cell *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v44); /*0x456358*/
          v17 = (TechnoClass *)Cell::IsBridge(v16); /*0x45635f*/
          v18 = v17; /*0x456364*/
          if ( v17 ) /*0x456368*/
          {
            if ( v17 != this ) /*0x45636e*/
            {
              vtable0 = v17[1].vtable0; /*0x456370*/
              if ( (!*(_DWORD *)(vtable0 + 1032) || !*(_BYTE *)(vtable0 + 1516)) /*0x45638e*/
                && !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(v18->vtable0 + 128))(v18) )
              {
                MarkBuildingFoundationCells(v18, 1); /*0x45639c*/
              }
            }
          }
          ++v15; /*0x4563a1*/
        }
        while ( v15 < v14 ); /*0x4563a4*/
        v8 = v45; /*0x4563a6*/
        v10 = v46; /*0x4563aa*/
        v2 = this; /*0x4563af*/
      }
      ++v13; /*0x4563b7*/
    }
    while ( v13 < v50 ); /*0x4563ba*/
  }
  v20 = v8 - 1; /*0x4563bc*/
  result = v47; /*0x4563bf*/
  v22 = v47 + 2; /*0x4563c3*/
  v49 = v47 + 2; /*0x4563c8*/
  if ( v20 >= v47 + 2 ) /*0x4563cc*/
    return result; /*0x4563cc*/
  result = v10; /*0x4563d2*/
  v50 = v10 - 1; /*0x4563d8*/
  v23 = v10 + *(_DWORD *)v42 + 2; /*0x4563e0*/
  do /*0x45656a*/
  {
    v24 = v50; /*0x4563e4*/
    if ( v50 >= v23 ) /*0x4563ea*/
      goto LABEL_47; /*0x4563ea*/
    LOWORD(v47) = v20; /*0x4563f0*/
    do /*0x45655d*/
    {
      v25 = v2->owner; /*0x4563f5*/
      HIWORD(v47) = v24; /*0x4563fb*/
      *(_DWORD *)v42 = v47; /*0x456404*/
      v40 = *(_DWORD *)(v25 + 48); /*0x45640f*/
      v26 = (ObjectClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v42); /*0x456416*/
      v27 = sub_486D90(v26, v40); /*0x45641d*/
      if ( v27 == 255 ) /*0x456427*/
      {
        v28 = (_DWORD *)(v2->owner + 22304); /*0x456433*/
        result = (*(int (__thiscall **)(_DWORD *, __int16 *))(*v28 + 16))(v28, v42); /*0x45643e*/
        if ( result != -1 ) /*0x456444*/
        {
          v29 = v28[4]; /*0x45644a*/
          if ( result < v29 ) /*0x45644f*/
          {
            v30 = v29 - 1; /*0x456455*/
            for ( v28[4] = v30; result < v28[4]; *(_DWORD *)(v28[1] + 4 * result - 4) = *(_DWORD *)(v28[1] + 4 * result) ) /*0x45645b*/
              ++result; /*0x456464*/
          }
        }
      }
      else if ( v27 <= 0 ) /*0x45647a*/
      {
        v34 = (_DWORD *)(v2->owner + 22304); /*0x4564fe*/
        v35 = (*(int (__thiscall **)(_DWORD *, __int16 *))(*v34 + 16))(v34, v42); /*0x456509*/
        if ( v35 != -1 ) /*0x45650f*/
        {
          v36 = v34[4]; /*0x456511*/
          if ( v35 < v36 ) /*0x456516*/
          {
            v37 = v36 - 1; /*0x456518*/
            for ( v34[4] = v37; v35 < v34[4]; *(_DWORD *)(v34[1] + 4 * v35 - 4) = *(_DWORD *)(v34[1] + 4 * v35) ) /*0x45651e*/
              ++v35; /*0x456523*/
          }
        }
        v38 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v42); /*0x45653c*/
        v39 = v38[55]; /*0x456545*/
        result = (int)(v38 + 55); /*0x45654b*/
        *(_DWORD *)result = ~v48 & v39; /*0x456554*/
      }
      else
      {
        result = (*(int (__thiscall **)(int, __int16 *))(*(_DWORD *)(v2->owner + 22304) + 16))(v2->owner + 22304, v42); /*0x456493*/
        if ( result != -1 ) /*0x456499*/
          goto LABEL_45; /*0x456499*/
        v31 = v2->owner + 22304; /*0x4564a5*/
        result = *(_DWORD *)(v31 + 8); /*0x4564ab*/
        if ( *(_DWORD *)(v31 + 16) < result /*0x4564dd*/
          || (*(_BYTE *)(v31 + 13) || !result)
          && (v32 = *(_DWORD *)(v31 + 20), v32 > 0)
          && (result = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v31 + 8))(v31, result + v32, 0),
              (_BYTE)result) )
        {
          result = *(_DWORD *)(v31 + 16); /*0x4564df*/
          v33 = *(_DWORD *)(v31 + 4); /*0x4564e2*/
          *(_DWORD *)(v31 + 16) = result + 1; /*0x4564e8*/
          *(_DWORD *)(v33 + 4 * result) = *(_DWORD *)v42; /*0x4564ef*/
        }
      }
      v2 = this; /*0x456556*/
LABEL_45:
      ++v24; /*0x45655a*/
    }
    while ( v24 < v23 ); /*0x45655d*/
    v22 = v49; /*0x456563*/
LABEL_47:
    ++v20; /*0x456567*/
  }
  while ( v20 < v22 ); /*0x45656a*/
  return result; /*0x456570*/
}



// ==== 0x00456580  BuildingClass::UpdateRevealField  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::UpdateRevealField(BuildingClass *this)
{
  char *Field; // ebx
  int v3; // edi
  int result; // eax

  Field = Diplomacy::GetField(&stru_87F5F0.__pad_58[416], (int)this->Type); /*0x456596*/
  v3 = 0; /*0x456598*/
  result = *((_DWORD *)Field + 4); /*0x45659a*/
  if ( result > 0 ) /*0x45659f*/
  {
    do /*0x4565d0*/
    {
      BuildingClass::ProcessFogCellOccupancy( /*0x4565c5*/
        (int)&stru_87F5F0.__pad_58[416],
        (int)this,
        *(_DWORD *)(*((_DWORD *)Field + 1) + 8 * v3) + this->?,
        this->? + *(_DWORD *)(*((_DWORD *)Field + 1) + 8 * v3 + 4));
      result = *((_DWORD *)Field + 4); /*0x4565ca*/
      ++v3; /*0x4565cd*/
    }
    while ( v3 < result ); /*0x4565d0*/
  }
  this->? = 1; /*0x4565d2*/
  return result; /*0x4565d9*/
}



// ==== 0x004565E0  BuildingClass::UpdateGapGeneratorField  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::UpdateGapGeneratorField(BuildingClass *this)
{
  char *Field; // ebp
  int v3; // edi
  int result; // eax

  Field = Diplomacy::GetField(&stru_87F5F0.__pad_58[416], (int)this->Type); /*0x4565f6*/
  v3 = 0; /*0x4565f8*/
  result = *((_DWORD *)Field + 4); /*0x4565fa*/
  if ( result > 0 ) /*0x4565ff*/
  {
    do /*0x456630*/
    {
      BuildingClass::RemoveGapCellCoverage( /*0x456625*/
        (int)&stru_87F5F0.__pad_58[416],
        (int)this,
        *(_DWORD *)(*((_DWORD *)Field + 1) + 8 * v3) + this->?,
        this->? + *(_DWORD *)(*((_DWORD *)Field + 1) + 8 * v3 + 4));
      result = *((_DWORD *)Field + 4); /*0x45662a*/
      ++v3; /*0x45662d*/
    }
    while ( v3 < result ); /*0x456630*/
  }
  this->? = 0; /*0x456632*/
  return result; /*0x456639*/
}



// ==== 0x00456640  BuildingClass::UpdateDetectionField  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::UpdateDetectionField(BuildingClass *this)
{
  char *Field; // ebx
  int v3; // esi
  int result; // eax
  int v5; // ecx
  int v6; // eax
  int currentBarrelIndex; // edx
  int v8; // ecx
  _DWORD v9[2]; // [esp+Ch] [ebp-8h] BYREF

  Field = Diplomacy::GetField(&stru_87F5F0.__pad_58[416], (int)this->Type); /*0x456659*/
  v3 = 0; /*0x45665b*/
  result = *((_DWORD *)Field + 4); /*0x45665d*/
  if ( result > 0 ) /*0x456662*/
  {
    do /*0x45669d*/
    {
      v5 = *((_DWORD *)Field + 1); /*0x456664*/
      v6 = *(_DWORD *)(v5 + 8 * v3) + this->?; /*0x456673*/
      currentBarrelIndex = this->?; /*0x456675*/
      v8 = *(_DWORD *)(v5 + 8 * v3 + 4); /*0x45667b*/
      v9[0] = v6; /*0x45667e*/
      v9[1] = currentBarrelIndex + v8; /*0x456688*/
      FogOfWar::RevealCell((int)&stru_87F5F0.__pad_58[416], v9); /*0x456692*/
      result = *((_DWORD *)Field + 4); /*0x456697*/
      ++v3; /*0x45669a*/
    }
    while ( v3 < result ); /*0x45669d*/
  }
  return result; /*0x45669f*/
}



// ==== 0x004566B0  BuildingClass::GetPowerFrame  this=IUnknown  sig=csp ====
int __thiscall BuildingClass::GetPowerFrame(TechnoClass *this)
{
  int v2; // ecx
  int result; // eax
  _DWORD *updated; // edi
  int v6; // eax

  v2 = this->q148; /*0x4566b7*/
  result = *(_DWORD *)(v2 + 5900); /*0x4566bd*/
  if ( result <= 0 ) /*0x4566c5*/
  {
    if ( *(_BYTE *)(v2 + 3281) ) /*0x4566cb*/
    {
      if ( this->gapSuperCharged ) /*0x4566d5*/
        return *(char *)(v2 + 3283); /*0x4566df*/
      else
        return *(char *)(v2 + 3282); /*0x4566ec*/
    }
    else if ( *(_BYTE *)(v2 + 5832) || *(_BYTE *)(v2 + 5831) ) /*0x456703*/
    {
      return *(char *)(v2 + 5895); /*0x45673e*/
    }
    else
    {
      updated = (_DWORD *)TechnoClass::UpdatePowered(this); /*0x456714*/
      if ( (unsigned __int8)IsNonNullPtr(updated) && (v6 = *(_DWORD *)(*updated + 180), v6 > 0) ) /*0x45672c*/
        return v6 / 256; /*0x456739*/
      else
        return 0; /*0x456749*/
    }
  }
  return result; /*0x4566e5*/
}



// ==== 0x00456750  BuildingClass::DrawDeployCircle  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::DrawDeployCircle(BuildingClass *this)
{
  double v1; // st7
  int result; // eax
  char *v4; // ecx
  DWORD Time; // eax
  char v6; // ecx^3
  int v7; // edi
  int *v8; // eax
  int v9; // eax
  HouseClass *owner; // ecx
  int *v11; // eax
  HouseClass *v12; // ecx
  int *v13; // eax
  int v14; // [esp+0h] [ebp-2Ch]
  int v15; // [esp+0h] [ebp-2Ch]
  int v16; // [esp+0h] [ebp-2Ch]
  float v17; // [esp+4h] [ebp-28h]
  float v18; // [esp+4h] [ebp-28h]
  float v19; // [esp+4h] [ebp-28h]
  int v20; // [esp+18h] [ebp-14h]
  int v21[3]; // [esp+20h] [ebp-Ch] BYREF
  Color v22; // [esp+30h] [ebp+4h] BYREF

  result = BuildingClass::GetPowerFrame((TechnoClass *)this); /*0x456757*/
  v20 = result; /*0x45675e*/
  if ( result > 0 ) /*0x456762*/
  {
    LOBYTE(result) = this->HasPower; /*0x456768*/
    if ( (_BYTE)result ) /*0x456770*/
    {
      result = House::IsHumanPlayer((House *)this->?); /*0x45677c*/
      if ( (_BYTE)result ) /*0x456783*/
      {
        if ( this->Type->ConcentricRadialIndicator ) /*0x45678f*/
        {
          if ( (byte_89C838 & 1) == 0 ) /*0x4567a4*/
          {
            byte_89C800 = -1; /*0x4567b0*/
            byte_89C838 |= 1u; /*0x4567b7*/
            byte_89C801 = -1; /*0x4567bd*/
            byte_89C802 = -1; /*0x4567c4*/
            atexit(nullsub_103); /*0x4567cb*/
          }
          v4 = (char *)&this->?->base[4] + 1; /*0x4567d9*/
          LOWORD(v22.Color_field_00) = *(_WORD *)v4; /*0x4567e2*/
          BYTE2(v22.Color_field_00) = v4[2]; /*0x4567ea*/
          Time = timeGetTime(); /*0x4567ee*/
          v7 = (Time >> 1) & 0x3FF; /*0x4567f8*/
          if ( ((Time >> 1) & 0x200) == 0 ) /*0x456804*/
          {
            if ( ((Time >> 1) & 0x100) == 0 ) /*0x45680c*/
              Color::Lerp(&v22, ~(Time >> 1), &byte_89C800); /*0x456822*/
            v17 = (float)v20; /*0x456835*/
            HIBYTE(v14) = v6; /*0x456838*/
            LOWORD(v14) = v22.Color_field_00; /*0x45683f*/
            BYTE2(v14) = BYTE2(v22.Color_field_00); /*0x456847*/
            v8 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 18))(this, v21); /*0x45684e*/
            DrawTechnoDeployCircle(0, 0, *v8, v8[1], v8[2], v14, v17, 0, 1); /*0x45686a*/
          }
          Math::Sqrt(2.0); /*0x456884*/
          LOWORD(v9) = Math::RoundToInt(((double)v20 + 0.5) / v1 * 60.0); /*0x456896*/
          result = (unsigned int)(v7 * v9) >> 10; /*0x45689e*/
          if ( (unsigned int)result > 0x20 ) /*0x4568a4*/
          {
            owner = this->?; /*0x4568bf*/
            v18 = (float)(unsigned int)result; /*0x4568cb*/
            v15 = (int)&owner->base[4] + 1; /*0x4568ce*/
            LOWORD(v15) = *(_WORD *)((char *)&owner->base[4] + 1); /*0x4568d7*/
            BYTE2(v15) = HIBYTE(owner->base[4]); /*0x4568df*/
            v11 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 18))(this, v21); /*0x4568e6*/
            LOBYTE(result) = DrawTechnoDeployCircle(0, 0, *v11, v11[1], v11[2], v15, v18, 1, 1); /*0x456902*/
          }
        }
        else
        {
          v12 = this->?; /*0x456918*/
          v19 = (float)v20; /*0x456924*/
          v16 = (int)&v12->base[4] + 1; /*0x456927*/
          LOWORD(v16) = *(_WORD *)((char *)&v12->base[4] + 1); /*0x456930*/
          BYTE2(v16) = HIBYTE(v12->base[4]); /*0x456938*/
          v13 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 18))(this, v21); /*0x45693f*/
          LOBYTE(result) = DrawTechnoDeployCircle(v22.Color_field_00, 1, *v13, v13[1], v13[2], v16, v19, 0, 1); /*0x45695d*/
        }
      }
    }
  }
  return result; /*0x456907*/
}



// ==== 0x00456970  nullsub_103  this=-  sig=ida-proto ====
void __cdecl nullsub_103()
{
  ; /*0x456970*/
}



// ==== 0x00456980  DrawTechnoDeployCircle  this=-  sig=csp ====
char __fastcall sub_456980(char a1, char a2, int a3, int a4, int a5, int a6, float a7, char a8, char a9)
{
  double v9; // st7
  int v10; // eax
  double v11; // st7
  int v12; // esi
  double *v13; // edx
  int v14; // eax
  double v15; // st7
  double *v16; // ebx
  double v17; // st7
  double v18; // st7
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // esi
  int v23; // eax
  double v24; // st7
  double v25; // st7
  int v26; // esi
  int v27; // eax
  int v28; // edi
  double v29; // st7
  float v31; // [esp+5Ch] [ebp-8Ch]
  __int16 v34; // [esp+70h] [ebp-78h] BYREF
  char v35; // [esp+72h] [ebp-76h]
  int v36; // [esp+74h] [ebp-74h]
  double v37; // [esp+78h] [ebp-70h]
  __int16 v38; // [esp+80h] [ebp-68h]
  unsigned __int8 v39; // [esp+82h] [ebp-66h]
  int v40; // [esp+88h] [ebp-60h] BYREF
  int v41; // [esp+8Ch] [ebp-5Ch]
  double v42; // [esp+90h] [ebp-58h]
  double v43; // [esp+98h] [ebp-50h]
  double v44; // [esp+A0h] [ebp-48h]
  double v45; // [esp+A8h] [ebp-40h]
  double v46; // [esp+B0h] [ebp-38h]
  _DWORD v47[4]; // [esp+B8h] [ebp-30h] BYREF
  double v48; // [esp+C8h] [ebp-20h] BYREF
  int v49[4]; // [esp+D8h] [ebp-10h] BYREF

  v9 = a7; /*0x45698d*/
  if ( a9 ) /*0x45699c*/
    v9 = (double)(int)Math::RoundToInt(v9); /*0x4569a7*/
  if ( a8 ) /*0x4569b0*/
  {
    v10 = Math::RoundToInt(v9); /*0x4569b2*/
  }
  else
  {
    v48 = v9 + 0.5; /*0x4569c6*/
    v11 = Math::Sqrt(2.0); /*0x4569ca*/
    v10 = Math::RoundToInt(v48 / v11 * 60.0); /*0x4569dc*/
  }
  v12 = v10; /*0x4569e1*/
  v36 = v10; /*0x4569f2*/
  Coord::To_Screen(g_TacticalClass_Instance, &a3, &v40); /*0x4569f6*/
  v40 += DSurface_ViewBounds; /*0x456a11*/
  v41 += dword_886FA4; /*0x456a20*/
  v49[1] = v41 - v12 / 2; /*0x456a2f*/
  LODWORD(v37) = v12 / 2; /*0x456a48*/
  v49[0] = v40 - v12; /*0x456a4c*/
  v49[2] = 2 * v12; /*0x456a53*/
  v49[3] = v12; /*0x456a5a*/
  v13 = (double *)ClipRectIntersection(v47, v49, &DSurface_ViewBounds, 0, 0); /*0x456a66*/
  v48 = *v13; /*0x456a6a*/
  v14 = *((_DWORD *)v13 + 2); /*0x456a75*/
  if ( v14 > 0 && *((int *)v13 + 3) > 0 ) /*0x456a85*/
  {
    v39 = BYTE2(a6); /*0x456a92*/
    v34 = 0; /*0x456a9c*/
    v35 = 0; /*0x456aa6*/
    v38 = a6; /*0x456aab*/
    if ( a2 ) /*0x456ab0*/
      Color::Lerp(50, &v34); /*0x456abd*/
    (*(void (__thiscall **)(int, int, int, int, int, int, int, int, int, int))(*(_DWORD *)g_DSurface_Hidden_2 + 32))( /*0x456b57*/
      g_DSurface_Hidden_2,
      v40,
      v41,
      v12,
      v12 / 2,
      DSurface_ViewBounds,
      dword_886FA4,
      dword_886FA8,
      dword_886FAC,
      ((unsigned __int8)v38 >> g_BitShift_Green_0 << g_BitShift_Red)
    | (HIBYTE(v38) >> g_BitMask_Blue << g_BitMask_Green)
    | (v39 >> g_BitMask_Red << g_BitShift_Blue));
    (*(void (__thiscall **)(int, int, int, int, int, int, int, int, int, int))(*(_DWORD *)g_DSurface_Hidden_2 + 32))( /*0x456beb*/
      g_DSurface_Hidden_2,
      v40,
      v41,
      v12 - 1,
      v12 / 2 - 1,
      DSurface_ViewBounds,
      dword_886FA4,
      dword_886FA8,
      dword_886FAC,
      ((unsigned __int8)v38 >> g_BitShift_Green_0 << g_BitShift_Red)
    | (HIBYTE(v38) >> g_BitMask_Blue << g_BitMask_Green)
    | (v39 >> g_BitMask_Red << g_BitShift_Blue));
    LOBYTE(v14) = a1; /*0x456bee*/
    if ( a1 ) /*0x456bf4*/
    {
      v15 = (double)v36; /*0x456bfa*/
      v36 = 0; /*0x456bfe*/
      v16 = (double *)&dword_818CC8; /*0x456c06*/
      v43 = v15; /*0x456c0b*/
      v42 = (double)SLODWORD(v37); /*0x456c13*/
      do /*0x456c23*/
      {
        LODWORD(v37) = (char *)dword_A8ED84 + v36; /*0x456c23*/
        v17 = (double)((int)dword_A8ED84 + v36) * 0.005; /*0x456c2b*/
        v37 = v17 - (double)(int)Math::RoundToInt(v17) * 6.283185307179586; /*0x456c4e*/
        if ( fabs(v37 - 1.570796326794897) >= 0.001 ) /*0x456c6b*/
        {
          if ( fabs(v37 - 4.71238898038469) >= 0.001 ) /*0x456ca1*/
          {
            v24 = Math::Sin(v37); /*0x456cb3*/
            v45 = v42 * v42; /*0x456cc0*/
            v44 = v43 * v43; /*0x456ccc*/
            v46 = Math::Sqrt(1.0 / (v24 * v24 / v45 + 1.0 / v44)); /*0x456cf4*/
            v25 = Math::Sqrt((1.0 - v46 * v46 / v44) * v45); /*0x456d0f*/
            if ( v37 < 3.141592653589793 ) /*0x456d54*/
              v25 = -v25; /*0x456d5a*/
            v26 = Math::RoundToInt(v25); /*0x456d61*/
            v27 = Math::RoundToInt(v25); /*0x456d63*/
            v21 = v40; /*0x456d68*/
            v20 = v41; /*0x456d6c*/
            v28 = v26 + v40; /*0x456d70*/
            v22 = v41 + v27; /*0x456d73*/
            v23 = v28; /*0x456d76*/
            goto LABEL_20; /*0x456d76*/
          }
          v18 = v42; /*0x456ca3*/
        }
        else
        {
          v18 = -v42; /*0x456c71*/
        }
        v19 = Math::RoundToInt(v18); /*0x456c73*/
        v20 = v41; /*0x456c78*/
        v21 = v40; /*0x456c7c*/
        v22 = v41 + v19; /*0x456c80*/
        v23 = v40; /*0x456c83*/
LABEL_20:
        v29 = *v16; /*0x456d78*/
        v47[0] = v23 - DSurface_ViewBounds; /*0x456d88*/
        HIDWORD(v48) = v20 - dword_886FA4; /*0x456d91*/
        LODWORD(v48) = v21 - DSurface_ViewBounds; /*0x456da3*/
        v31 = v29; /*0x456da7*/
        v47[1] = v22 - dword_886FA4; /*0x456dc9*/
        LOBYTE(v14) = (*(int (__thiscall **)(int, int *, double *, _DWORD *, int *, int, int, _DWORD, int, int, int, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2 + 60))( /*0x456dd8*/
                        g_DSurface_Hidden_2,
                        &DSurface_ViewBounds,
                        &v48,
                        v47,
                        &a6,
                        -500,
                        -500,
                        0,
                        1,
                        1,
                        1,
                        LODWORD(v31));
        ++v16; /*0x456ddf*/
        ++v36; /*0x456de9*/
      }
      while ( (int)v16 < (int)aStructures ); /*0x456c23*/
    }
  }
  return v14; /*0x456df5*/
}



// ==== 0x00456E00  BuildingClass::AcquireTarget  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::AcquireTarget(BuildingClass *this)
{
  int v2; // eax
  int v3; // edi
  BuildingClass *v4; // eax
  _DWORD *v5; // eax
  int v6; // ecx
  int Translucency; // ebx
  int *v8; // ecx
  int v9; // ebp
  bool v10; // zf
  int v11; // ebx
  int *v12; // ecx
  int v13; // esi
  int result; // eax
  int v15; // [esp+10h] [ebp-Ch]
  int v16; // [esp+14h] [ebp-8h]
  int v17; // [esp+20h] [ebp+4h]
  int *Anims; // [esp+20h] [ebp+4h]

  if ( v17 ) /*0x456e0f*/
    this->? = 1; /*0x456e11*/
  TechnoClass::SetTargetIfAllowed((TechnoClass *)this, v17); /*0x456e1b*/
  v16 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 121))(this); /*0x456e2e*/
  v2 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 111))(this); /*0x456e32*/
  v3 = (*((int (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 281))(this, *(__int16 *)(v2 + 266)); /*0x456e4a*/
  if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 88))(this)
    || this->?
    && (this ? (v4 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 11))(this) == 6 ? this : 0) : (v4 = 0),
        (BuildingClass *)this->?->AirstrikeClass_field_50 == v4) )
  {
    LOWORD(v3) = Techno::StartInvulnerability(v3); /*0x456e91*/
  }
  *(_WORD *)this->BuildingClass_field_short_700 = v3; /*0x456e93*/
  Anims = this->Anims; /*0x456eaa*/
  v15 = 21; /*0x456eae*/
  do /*0x456f36*/
  {
    v5 = (_DWORD *)*Anims; /*0x456eba*/
    if ( *Anims ) /*0x456eba*/
    {
      v6 = v5[50]; /*0x456ec0*/
      if ( v6 && *(_BYTE *)(v6 + 860) ) /*0x456eca*/
      {
        v5[53] = v16; /*0x456edc*/
        v5[63] = (unsigned __int16)v3; /*0x456ee2*/
      }
      Translucency = this->Translucency; /*0x456ee8*/
      if ( Translucency == 15 /*0x456f02*/
        && (*((int (__thiscall **)(BuildingClass *, _DWORD, _DWORD))this->TechnoClass + 26))(this, 0, 0) == 5 )
      {
        LOBYTE(Translucency) = 16; /*0x456f04*/
      }
      v8 = this->Anims; /*0x456f09*/
      v9 = 21; /*0x456f0b*/
      do /*0x456f20*/
      {
        if ( *v8 ) /*0x456f10*/
          *(_BYTE *)(*v8 + 376) = Translucency; /*0x456f16*/
        ++v8; /*0x456f1c*/
        --v9; /*0x456f1f*/
      }
      while ( v9 ); /*0x456f20*/
    }
    v10 = v15 == 1; /*0x456f2d*/
    ++Anims; /*0x456f2e*/
    --v15; /*0x456f32*/
  }
  while ( !v10 ); /*0x456f36*/
  v11 = this->Translucency; /*0x456f3c*/
  if ( v11 == 15 && (*((int (__thiscall **)(BuildingClass *, _DWORD, _DWORD))this->TechnoClass + 26))(this, 0, 0) == 5 ) /*0x456f56*/
    LOBYTE(v11) = 16; /*0x456f58*/
  v12 = this->Anims; /*0x456f5d*/
  v13 = 21; /*0x456f5f*/
  do /*0x456f74*/
  {
    result = *v12; /*0x456f64*/
    if ( *v12 ) /*0x456f64*/
      *(_BYTE *)(result + 376) = v11; /*0x456f6a*/
    ++v12; /*0x456f70*/
    --v13; /*0x456f73*/
  }
  while ( v13 ); /*0x456f74*/
  return result; /*0x456f76*/
}



// ==== 0x00456F80  TechnoClass::ProcessMissionDeploy  this=BuildingClass  sig=csp ====
int __thiscall TechnoClass::ProcessMissionDeploy(TechnoClass *this)
{
  int result; // eax
  int v2; // [esp+4h] [ebp+4h]

  result = v2; /*0x456f8b*/
  if ( (this->flashing[0] & 2) == 2 ) /*0x456f8f*/
  {
    if ( v2 <= 1500 ) /*0x456f96*/
      return v2 + 500; /*0x456fa0*/
    else
      return v2 - 500; /*0x456f98*/
  }
  return result; /*0x456f9d*/
}



// ==== 0x00456FB0  globalHelper_056FB0  this=BuildingClass  sig=csp ====
int __fastcall sub_456FB0(_DWORD *a1, int a2, int a3)
{
  int v4; // edi
  _DWORD *v5; // eax

  v4 = (*(int (__thiscall **)(_DWORD *, int))(*a1 + 1124))(a1, a3); /*0x456fc7*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 352))(a1) ) /*0x456fc9*/
    return Techno::StartInvulnerability(v4); /*0x456fc9*/
  if ( a1[165]
    && (a1 ? (v5 = (*(int (__thiscall **)(_DWORD *))(*a1 + 44))(a1) == 6 ? a1 : 0) : (v5 = 0),
        *(_DWORD **)(a1[165] + 80) == v5) )
  {
    return Techno::StartInvulnerability(v4); /*0x457005*/
  }
  else
  {
    return v4; /*0x45700f*/
  }
}



// ==== 0x00457020  BuildingClass::IsCellVisibleToPlayer  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::IsCellVisibleToPlayer(BuildingClass *this)
{
  int result; // eax
  _DWORD *v3; // eax
  int v4; // ebx
  int v5; // ebp
  int v6; // esi
  int v7; // ebx
  bool v8; // bl
  int v9; // [esp+8h] [ebp-20h]
  __int16 v10[2]; // [esp+Ch] [ebp-1Ch] BYREF
  _DWORD v11[3]; // [esp+10h] [ebp-18h] BYREF
  _DWORD v12[3]; // [esp+1Ch] [ebp-Ch] BYREF
  _DWORD *v13; // [esp+2Ch] [ebp+4h]

  result = (int)this->Type; /*0x457027*/
  if ( *(_BYTE *)(result + 3226) || this->? ) /*0x45703b*/
    goto LABEL_22; /*0x45703b*/
  result = House::IsHumanPlayer((House *)this->?); /*0x45704f*/
  if ( (_BYTE)result ) /*0x457056*/
  {
    LOBYTE(result) = this->? != 0; /*0x457061*/
    return result; /*0x457068*/
  }
  v3 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD *))this->TechnoClass + 18))(this, v12); /*0x457074*/
  LOWORD(v9) = *v3 / 256; /*0x457089*/
  HIWORD(v9) = v3[1] / 256; /*0x4570a1*/
  *(_DWORD *)v10 = v9; /*0x4570aa*/
  result = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v10, 1); /*0x4570b4*/
  if ( !(_BYTE)result ) /*0x4570bb*/
    goto LABEL_22; /*0x4570bb*/
  v4 = (BuildingTypeClass::GetFoundationHeight((int *)this->Type, 0) << 8) - 256; /*0x4570db*/
  v5 = (BuildingTypeClass::GetFoundationWidth(this->Type) << 8) - 256; /*0x4570f5*/
  v11[0] = this->?[0]; /*0x4570fb*/
  v11[1] = this->?[1]; /*0x45710c*/
  v11[2] = this->?[2]; /*0x457113*/
  v8 = 0; /*0x457154*/
  if ( (unsigned __int8)Cell::IsPassable(v11) ) /*0x457117*/
  {
    v6 = this->?[2]; /*0x457125*/
    v7 = this->?[1] + v4; /*0x45712e*/
    v12[0] = v5 + this->?[0]; /*0x457136*/
    v12[1] = v7; /*0x45713a*/
    v12[2] = v6; /*0x45713e*/
    if ( (unsigned __int8)Cell::IsPassable(v12) ) /*0x457142*/
    {
      if ( g_hWnd ) /*0x457152*/
        v8 = 1; /*0x45711e*/
    }
  }
  result = this->?; /*0x45715a*/
  if ( result != 2 && this->Translucency != 15 && !this->IsFogged && !v8 ) /*0x45717c*/
  {
    LOBYTE(result) = 1; /*0x45717f*/
    return result; /*0x457185*/
  }
  result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 202))(this); /*0x45718c*/
  if ( !(_BYTE)result ) /*0x457194*/
  {
LABEL_22:
    LOBYTE(result) = 0; /*0x4571cf*/
  }
  else
  {
    result = HouseClass::IsAlliedWith((#375 *)dword_A83D4C, (#375 *)this->?); /*0x4571a3*/
    if ( !(_BYTE)result && !this->IsFogged && !v8 ) /*0x4571b8*/
      *v13 = 1; /*0x4571be*/
    LOBYTE(result) = 1; /*0x4571c5*/
  }
  return result; /*0x45705e*/
}



// ==== 0x004571E0  BuildingClass::Infiltrate  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::Infiltrate(BuildingClass *this, void *a2)
{
  House *v3; // edi
  HouseClass *owner; // ecx
  int *v5; // eax
  BuildingTypeClass *Type; // ecx
  int v7; // esi
  int v8; // eax
  BuildingTypeClass **v9; // edx
  int SuperWeapon; // eax
  int AIBasePlanningSide; // ecx
  int v12; // eax
  int v13; // esi
  int v14; // ecx
  char v15; // [esp+Bh] [ebp-1h]

  v3 = (House *)a2; /*0x4571e5*/
  owner = this->?; /*0x4571e9*/
  v15 = 0; /*0x4571ef*/
  if ( owner != a2 ) /*0x4571f6*/
  {
    if ( (unsigned __int8)House::IsHumanPlayer((House *)owner) || (unsigned __int8)House::IsHumanPlayer(v3) ) /*0x45720e*/
    {
      v5 = (int *)(*((int (__thiscall **)(BuildingClass *, void **))this->TechnoClass + 110))(this, &a2); /*0x457221*/
      if ( (unsigned __int8)CreateTriggerClassIfFarEnough(9, *v5, *v5) ) /*0x45722f*/
        v15 = 1; /*0x457238*/
    }
    Type = this->Type; /*0x45723c*/
    if ( Type->__pad_1624[128] ) /*0x457242*/
    {
      HouseClass::ReshroudMap(this->?); /*0x457252*/
      if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) /*0x45727c*/
        && !BYTE2(this->?->HouseClass_field_timer_B[2])
        && v15 )
      {
        VoxClass::FindAndPlay((VoxClass *)g_Str_EVA_BuildingInfiltrated.Type, -1); /*0x457288*/
      }
      if ( (unsigned __int8)House::IsHumanPlayer(v3) && !BYTE2(this->?->HouseClass_field_timer_B[2]) ) /*0x4572a2*/
      {
        if ( v15 ) /*0x4572b6*/
          VoxClass::FindAndPlay((VoxClass *)g_Str_EVA_BuildingInfiltrated.YuriVoice, -1); /*0x4572c6*/
      }
      goto LABEL_64; /*0x4572c6*/
    }
    if ( Type->PowerBonus > 0 ) /*0x4572d9*/
    {
      HouseClass::CreatePowerOutage((int)this->?, *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3428)); /*0x4572e8*/
      if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) && v15 ) /*0x457302*/
      {
        VoxClass::FindAndPlay((VoxClass *)&g_Str_EVA_BuildingInfiltrated.Name[6], -1); /*0x45730e*/
      }
      else if ( (unsigned __int8)House::IsHumanPlayer(v3) && v15 ) /*0x457328*/
      {
        VoxClass::FindAndPlay(&g_Str_EVA_BuildingInfiltrated, -1); /*0x457338*/
        VoxClass::FindAndPlay((VoxClass *)aEvaEnemybasepo, -1); /*0x457347*/
      }
      goto LABEL_64; /*0x45730e*/
    }
    v7 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2348); /*0x45734c*/
    v8 = 0; /*0x457352*/
    if ( v7 <= 0 ) /*0x457356*/
    {
LABEL_26:
      SuperWeapon = Type->SuperWeapon; /*0x45736a*/
      if ( SuperWeapon != -1 ) /*0x457373*/
      {
        SuperClass::Reset(*(SuperClass **)(this->?->supersCount + 4 * SuperWeapon)); /*0x457388*/
        if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) || (unsigned __int8)House::IsHumanPlayer(v3) && v15 ) /*0x4573b1*/
          VoxClass::FindAndPlay(&g_Str_EVA_BuildingInfiltrated, -1); /*0x4573c1*/
        goto LABEL_64; /*0x4573c1*/
      }
      if ( Type->? > 0 ) /*0x45741c*/
      {
        a2 = (void *)(*(int (__stdcall **)(int *))(this->?->arrayIndex + 24))(&this->?->arrayIndex); /*0x457437*/
        LOWORD(v12) = Math::RoundToInt((double)(int)a2 * *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3432)); /*0x457445*/
        v13 = v12; /*0x457450*/
        HouseClass::ProcessPowerDrain((int *)this->?, v12); /*0x457453*/
        HouseClass::AddPower((HouseClass *)v3, v13); /*0x45745b*/
        if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) && v15 ) /*0x457475*/
          VoxClass::FindAndPlay((VoxClass *)&stru_818E00.Flamer, -1); /*0x457481*/
        if ( (unsigned __int8)House::IsHumanPlayer(v3) && v15 ) /*0x45749b*/
          VoxClass::FindAndPlay((VoxClass *)&stru_818E00.RunningFrames, -1); /*0x4574ab*/
        goto LABEL_64; /*0x4574ab*/
      }
      v14 = Type->Factory[0]; /*0x4574b0*/
      if ( v14 != 40 ) /*0x4574b9*/
      {
        if ( v14 != 16 ) /*0x45751a*/
          goto LABEL_64; /*0x45751a*/
        v3->__pad_2B0[15] = 1; /*0x45751e*/
        v3->__pad_1F0[12] = 1; /*0x457524*/
        if ( (unsigned __int8)House::IsHumanPlayer(v3) ) /*0x45752a*/
          byte_884B8E = 1; /*0x457533*/
        if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) && v15 ) /*0x45754e*/
          VoxClass::FindAndPlay((VoxClass *)&stru_818E00.TiberiumSpawnType, -1); /*0x45755a*/
        if ( !(unsigned __int8)House::IsHumanPlayer(v3) || !v15 ) /*0x457570*/
          goto LABEL_64; /*0x457570*/
LABEL_63:
        VoxClass::FindAndPlay(&g_Str_EVA_BuildingInfiltrated, -1); /*0x457572*/
        VoxClass::FindAndPlay((VoxClass *)&stru_818E00.MinZVel[1], -1); /*0x45758b*/
LABEL_64:
        (*((void (__thiscall **)(BuildingClass *, int))this->TechnoClass + 73))(this, 2); /*0x457590*/
        return; /*0x457597*/
      }
      v3->__pad_2B0[16] = 1; /*0x4574bd*/
      v3->__pad_1F0[12] = 1; /*0x4574c3*/
      if ( (unsigned __int8)House::IsHumanPlayer(v3) ) /*0x4574c9*/
        byte_884B8E = 1; /*0x4574d2*/
      if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) && v15 ) /*0x4574ed*/
        goto LABEL_51; /*0x4574ed*/
    }
    else
    {
      v9 = *(BuildingTypeClass ***)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2336); /*0x457358*/
      while ( *v9 != Type ) /*0x457360*/
      {
        ++v8; /*0x457362*/
        ++v9; /*0x457363*/
        if ( v8 >= v7 ) /*0x457368*/
          goto LABEL_26; /*0x457368*/
      }
      AIBasePlanningSide = Type->?; /*0x4573c6*/
      if ( AIBasePlanningSide ) /*0x4573ce*/
      {
        if ( AIBasePlanningSide == 1 ) /*0x4573da*/
          v3->__pad_2B0[13] = 1; /*0x4573dc*/
        else
          v3->__pad_2B0[12] = 1; /*0x4573e4*/
      }
      else
      {
        v3->__pad_2B0[14] = 1; /*0x4573d0*/
      }
      v3->__pad_1F0[12] = 1; /*0x4573ea*/
      if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) && v15 ) /*0x457409*/
LABEL_51:
        VoxClass::FindAndPlay((VoxClass *)&stru_818E00.TiberiumSpawnType, -1); /*0x4574ef*/
    }
    if ( !(unsigned __int8)House::IsHumanPlayer(v3) || !v15 ) /*0x457513*/
      goto LABEL_64; /*0x457513*/
    goto LABEL_63; /*0x457513*/
  }
}



// ==== 0x004575B0  HouseClass::Add  this=HouseClass  sig=csp ====
int __thiscall HouseClass::Add(HouseClass *this)
{
  char i; // al
  int v3; // ecx
  int v4; // eax

  for ( i = BYTE2(this->builtInfantryTypes[246]); i > 0; i = BYTE2(this->builtInfantryTypes[246]) ) /*0x4575c1*/
  {
    v3 = this->builtInfantryTypes[i + 176]; /*0x4575c7*/
    v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v3 + 184))(v3, this->planningPaths[3], 1); /*0x4575d7*/
    HouseClass::AddPower((HouseClass *)this->planningPaths[3], v4); /*0x4575e4*/
    BuildingClass::ClearSuperWeaponAnim((BuildingClass *)this); /*0x4575eb*/
    *(_BYTE *)(this->planningPaths[3] + 22392) = 1; /*0x4575f6*/
    *(_BYTE *)(this->planningPaths[3] + 22393) = 1; /*0x457602*/
  }
  return (*((int (__thiscall **)(HouseClass *, int))this->AbstractClass + 104))(this, 1); /*0x45761d*/
}



// ==== 0x00457620  BuildingClass::IsFactorySelectable  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::IsFactorySelectable(BuildingClass *this)
{
  int result; // eax

  LOBYTE(result) = BuildingClass::Is1x1AndUndeployable_BuildingMassSelectable((BuildingClass *)this->Type); /*0x457626*/
  return result;
}



// ==== 0x00457630  BuildingClass::SWAvailable  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::SWAvailable(BuildingClass *this)
{
  int SuperWeapon; // eax
  int v3; // eax

  SuperWeapon = this->Type->SuperWeapon; /*0x457639*/
  if ( SuperWeapon == -1 ) /*0x457642*/
    return this->Type->SuperWeapon; /*0x457642*/
  v3 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_A83CBC + SuperWeapon) + 40) + 200); /*0x457650*/
  if ( !v3 || DynamicVector::GetOrGrow((DynamicVector *)this->?->ownedInfantryTypes2, *(_DWORD *)(v3 + 3576)) ) /*0x45766d*/
    return this->Type->SuperWeapon; /*0x457682*/
  else
    return -1; /*0x457676*/
}



// ==== 0x00457690  BuildingClass::SW2Available  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::SW2Available(BuildingClass *this)
{
  int SuperWeapon2; // eax
  int v3; // eax

  SuperWeapon2 = this->Type->SuperWeapon2; /*0x457699*/
  if ( SuperWeapon2 == -1 ) /*0x4576a2*/
    return this->Type->SuperWeapon2; /*0x4576a2*/
  v3 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_A83CBC + SuperWeapon2) + 40) + 200); /*0x4576b0*/
  if ( !v3 || DynamicVector::GetOrGrow((DynamicVector *)this->?->ownedInfantryTypes2, *(_DWORD *)(v3 + 3576)) ) /*0x4576cd*/
    return this->Type->SuperWeapon2; /*0x4576e2*/
  else
    return -1; /*0x4576d6*/
}



// ==== 0x004576F0  BuildingClass::DestroyOnBridgeCollapse  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::DestroyOnBridgeCollapse(BuildingClass *this)
{
  int result; // eax
  int i; // edi
  int v4; // esi
  _DWORD *v5; // eax
  CellClass *v6; // eax
  BuildingClass *v7; // eax
  BuildingClass *v8; // ecx
  _BYTE v9[12]; // [esp+8h] [ebp-Ch] BYREF

  result = *(_DWORD *)&stru_A83D50.__pad_80[40]; /*0x4576f0*/
  for ( i = 0; i < *(int *)&stru_A83D50.__pad_80[40]; ++i ) /*0x457700*/
  {
    v4 = *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_80[28] + 4 * i); /*0x45770a*/
    v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)v4 + 76))(v4, v9, 0); /*0x457716*/
    v6 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v5); /*0x45771f*/
    v7 = (BuildingClass *)Cell::IsBridge((Cell *)v6); /*0x457726*/
    if ( *(_BYTE *)(v4 + 144) ) /*0x45772b*/
    {
      if ( v7 ) /*0x457737*/
      {
        if ( v7 == this ) /*0x45773b*/
        {
          v8 = *(BuildingClass **)(v4 + 1444); /*0x45773d*/
          if ( !v8 || v8 == v7 ) /*0x457749*/
            (*(void (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)v4 + 372))(v4, &g_BuildingClassPool, 1, 1); /*0x457758*/
        }
      }
    }
    result = *(_DWORD *)&stru_A83D50.__pad_80[40]; /*0x45775e*/
  }
  return result; /*0x457769*/
}



// ==== 0x00457770  BuildingClass::UpdateCloak  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::UpdateCloak(BuildingClass *this)
{
  int result; // eax
  int *v3; // eax
  BuildingTypeClass *Type; // ecx
  int FoundationWidth; // eax
  int *v6; // ecx
  int v7; // ebx
  int v8; // edi
  __int16 v9; // si
  __int16 v10; // di
  __int16 v11; // si
  Object *v12; // eax
  BuildingClass *ClosestObjectCell; // eax
  WTFMode *v14; // eax
  int v15; // [esp+10h] [ebp-30h]
  int v16; // [esp+14h] [ebp-2Ch]
  int v17; // [esp+18h] [ebp-28h]
  int v18; // [esp+1Ch] [ebp-24h]
  __int16 v19[2]; // [esp+20h] [ebp-20h] BYREF
  __int16 v20[2]; // [esp+24h] [ebp-1Ch] BYREF
  int v21; // [esp+28h] [ebp-18h]
  int v22; // [esp+2Ch] [ebp-14h] BYREF
  int v23; // [esp+30h] [ebp-10h]
  _DWORD v24[2]; // [esp+38h] [ebp-8h] BYREF

  if ( TechnoClass::ShouldBeCloaked((TechnoClass *)this) ) /*0x457779*/
  {
    v3 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 110))(this, &v22); /*0x457790*/
    Type = this->Type; /*0x457798*/
    v23 = *v3; /*0x45779e*/
    FoundationWidth = BuildingTypeClass::GetFoundationWidth(Type); /*0x4577a2*/
    v6 = (int *)this->Type; /*0x4577a7*/
    v7 = FoundationWidth; /*0x4577ad*/
    v22 = FoundationWidth; /*0x4577b1*/
    result = BuildingTypeClass::GetFoundationHeight(v6, 0); /*0x4577b5*/
    v8 = -1; /*0x4577ba*/
    v21 = result; /*0x4577c0*/
    v18 = -1; /*0x4577c4*/
    if ( v7 < -1 ) /*0x4577c8*/
    {
LABEL_13:
      LOBYTE(result) = 1; /*0x4578a3*/
      return result; /*0x4578ac*/
    }
    while ( 1 ) /*0x4577ce*/
    {
      v9 = -1; /*0x4577ce*/
      v17 = -1; /*0x4577d4*/
      if ( result >= -1 ) /*0x4577d8*/
        break; /*0x4577d8*/
LABEL_12:
      v18 = ++v8; /*0x457899*/
      if ( v8 > v7 ) /*0x45789d*/
        goto LABEL_13; /*0x45789d*/
    }
    v10 = v23 + v8; /*0x4577e2*/
    while ( 1 ) /*0x4577eb*/
    {
      v24[0] = 0; /*0x4577eb*/
      v24[1] = 0; /*0x4577ef*/
      v11 = HIWORD(v23) + v9; /*0x4577f4*/
      LOWORD(v15) = v10; /*0x4577fe*/
      HIWORD(v15) = v11; /*0x457803*/
      *(_DWORD *)v19 = v15; /*0x457813*/
      v12 = (Object *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x457817*/
      ClosestObjectCell = (BuildingClass *)Object::FindClosestObjectCell(v12, v24, 0, 0); /*0x45781e*/
      if ( ClosestObjectCell == this ) /*0x457825*/
      {
        LOWORD(v16) = v10; /*0x457827*/
        HIWORD(v16) = v11; /*0x45782c*/
        *(_DWORD *)v20 = v16; /*0x457841*/
        v14 = (WTFMode *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v20); /*0x457845*/
        ClosestObjectCell = (BuildingClass *)WTFMode::FindObjectByType(v14, 0); /*0x45784c*/
      }
      if ( ClosestObjectCell ) /*0x457853*/
      {
        if ( ClosestObjectCell->? != this->? ) /*0x457863*/
        {
          result = (*((int (__thiscall **)(BuildingClass *))ClosestObjectCell->TechnoClass + 33))(ClosestObjectCell); /*0x457869*/
          if ( *(_BYTE *)(result + 3229) ) /*0x45786f*/
            break; /*0x45786f*/
        }
      }
      result = v21; /*0x45787d*/
      v9 = ++v17; /*0x457881*/
      if ( v17 > v21 ) /*0x457888*/
      {
        v7 = v22; /*0x45788e*/
        v8 = v18; /*0x457892*/
        goto LABEL_12; /*0x457892*/
      }
    }
  }
  LOBYTE(result) = 0; /*0x4578b0*/
  return result; /*0x4578a3*/
}



// ==== 0x004578C0  BuildingClass::IsFootprintBlocked  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::IsFootprintBlocked(BuildingClass *this)
{
  int result; // eax
  int *v3; // eax
  BuildingTypeClass *Type; // ecx
  int FoundationWidth; // eax
  int *v6; // ecx
  int v7; // ebx
  int v8; // edi
  __int16 v9; // si
  __int16 v10; // di
  __int16 v11; // si
  Object *v12; // eax
  BuildingClass *ClosestObjectCell; // eax
  WTFMode *v14; // eax
  int v15; // [esp+10h] [ebp-30h]
  int v16; // [esp+14h] [ebp-2Ch]
  int v17; // [esp+18h] [ebp-28h]
  int v18; // [esp+1Ch] [ebp-24h]
  __int16 v19[2]; // [esp+20h] [ebp-20h] BYREF
  __int16 v20[2]; // [esp+24h] [ebp-1Ch] BYREF
  int v21; // [esp+28h] [ebp-18h]
  int v22; // [esp+2Ch] [ebp-14h] BYREF
  int v23; // [esp+30h] [ebp-10h]
  _DWORD v24[2]; // [esp+38h] [ebp-8h] BYREF

  if ( !TechnoClass::ShouldNotBeCloaked((float *)this) ) /*0x4578c9*/
  {
    v3 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 110))(this, &v22); /*0x4578e0*/
    Type = this->Type; /*0x4578e8*/
    v23 = *v3; /*0x4578ee*/
    FoundationWidth = BuildingTypeClass::GetFoundationWidth(Type); /*0x4578f2*/
    v6 = (int *)this->Type; /*0x4578f7*/
    v7 = FoundationWidth; /*0x4578fd*/
    v22 = FoundationWidth; /*0x457901*/
    result = BuildingTypeClass::GetFoundationHeight(v6, 0); /*0x457905*/
    v8 = -1; /*0x45790a*/
    v21 = result; /*0x457910*/
    v18 = -1; /*0x457914*/
    if ( v7 < -1 ) /*0x457918*/
    {
LABEL_13:
      LOBYTE(result) = 0; /*0x4579f3*/
      return result; /*0x4579fc*/
    }
    while ( 1 ) /*0x45791e*/
    {
      v9 = -1; /*0x45791e*/
      v17 = -1; /*0x457924*/
      if ( result >= -1 ) /*0x457928*/
        break; /*0x457928*/
LABEL_12:
      v18 = ++v8; /*0x4579e9*/
      if ( v8 > v7 ) /*0x4579ed*/
        goto LABEL_13; /*0x4579ed*/
    }
    v10 = v23 + v8; /*0x457932*/
    while ( 1 ) /*0x45793b*/
    {
      v24[0] = 0; /*0x45793b*/
      v24[1] = 0; /*0x45793f*/
      v11 = HIWORD(v23) + v9; /*0x457944*/
      LOWORD(v15) = v10; /*0x45794e*/
      HIWORD(v15) = v11; /*0x457953*/
      *(_DWORD *)v19 = v15; /*0x457963*/
      v12 = (Object *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x457967*/
      ClosestObjectCell = (BuildingClass *)Object::FindClosestObjectCell(v12, v24, 0, 0); /*0x45796e*/
      if ( ClosestObjectCell == this ) /*0x457975*/
      {
        LOWORD(v16) = v10; /*0x457977*/
        HIWORD(v16) = v11; /*0x45797c*/
        *(_DWORD *)v20 = v16; /*0x457991*/
        v14 = (WTFMode *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v20); /*0x457995*/
        ClosestObjectCell = (BuildingClass *)WTFMode::FindObjectByType(v14, 0); /*0x45799c*/
      }
      if ( ClosestObjectCell ) /*0x4579a3*/
      {
        if ( ClosestObjectCell->? != this->? ) /*0x4579b3*/
        {
          result = (*((int (__thiscall **)(BuildingClass *))ClosestObjectCell->TechnoClass + 33))(ClosestObjectCell); /*0x4579b9*/
          if ( *(_BYTE *)(result + 3229) ) /*0x4579bf*/
            break; /*0x4579bf*/
        }
      }
      result = v21; /*0x4579cd*/
      v9 = ++v17; /*0x4579d1*/
      if ( v17 > v21 ) /*0x4579d8*/
      {
        v7 = v22; /*0x4579de*/
        v8 = v18; /*0x4579e2*/
        goto LABEL_12; /*0x4579e2*/
      }
    }
  }
  LOBYTE(result) = 1; /*0x457a00*/
  return result; /*0x4579f3*/
}



// ==== 0x00457A10  ObjectClass::method_457A10  this=ObjectClass  sig=csp ====
char __thiscall sub_457A10(TechnoClass *this)
{
  int v2; // edi
  _WORD *i; // esi
  int v5; // [esp+Ch] [ebp-8h]
  __int16 v6[2]; // [esp+10h] [ebp-4h] BYREF

  v2 = *(_DWORD *)(*(int (__thiscall **)(TechnoClass *, __int16 *))(this->vtable0 + 440))(this, v6); /*0x457a2d*/
  for ( i = (_WORD *)(*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 328) + 144))( /*0x457a42*/
                       *((_DWORD *)this + 328),
                       0); *i != 0x7FFF || i[1] != 0x7FFF; i += 2 )
  {
    LOWORD(v5) = v2 + *i; /*0x457a59*/
    HIWORD(v5) = HIWORD(v2) + i[1]; /*0x457a66*/
    *(_DWORD *)v6 = v5; /*0x457a6f*/
    if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v6) + 80) & 0x400000) == 0 ) /*0x457a87*/
      return 0; /*0x457a96*/
  }
  return 1; /*0x457a8e*/
}



// ==== 0x00457AA0  BuildingClass::CreateFoggedObjects  this=BuildingClass  sig=csp ====
__int16 __thiscall BuildingClass::CreateFoggedObjects(BuildingClass *this, int a2, _DWORD *a3, char a4)
{
  __int16 *v5; // edi
  int v6; // eax
  __int16 result; // ax
  _DWORD *v9; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // esi
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  __int16 *v20; // [esp+18h] [ebp-Ch]
  int v21; // [esp+1Ch] [ebp-8h]
  __int16 v22[2]; // [esp+20h] [ebp-4h] BYREF
  int v23; // [esp+28h] [ebp+4h]
  int v24; // [esp+30h] [ebp+Ch]

  v5 = (__int16 *)(*((int (__thiscall **)(BuildingTypeClass *, _DWORD))this->Type->TechnoTypeClass + 36))(this->Type, 0); /*0x457abc*/
  v20 = v5; /*0x457ac0*/
  (*((void (__thiscall **)(BuildingClass *))this->TechnoClass + 84))(this); /*0x457ac4*/
  v6 = __2_YAPAXI_Z(0x78u); /*0x457acc*/
  if ( v6 ) /*0x457ad6*/
    v24 = FoggedObjectClass::Constructor(v6, (int *)this, a4); /*0x457ae5*/
  else
    v24 = 0; /*0x457aeb*/
  v21 = *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, __int16 *))this->TechnoClass + 110))(this, v22); /*0x457b04*/
  while ( 1 ) /*0x457b08*/
  {
    result = *v5; /*0x457b08*/
    if ( *v5 == 0x7FFF && v5[1] == 0x7FFF ) /*0x457b15*/
      return result; /*0x457c79*/
    LOWORD(v23) = v21 + result; /*0x457b25*/
    HIWORD(v23) = HIWORD(v21) + v5[1]; /*0x457b34*/
    *(_DWORD *)v22 = v23; /*0x457b3d*/
    v9 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v22); /*0x457b4b*/
    if ( a3 && v9 == a3 ) /*0x457b57*/
    {
      v10 = *(_DWORD *)(a2 + 8); /*0x457b59*/
      if ( *(_DWORD *)(a2 + 16) < v10 /*0x457b84*/
        || (*(_BYTE *)(a2 + 13) || !v10)
        && (v11 = *(_DWORD *)(a2 + 20), v11 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a2 + 8))(a2, v10 + v11, 0) )
      {
        v12 = *(_DWORD *)(a2 + 16); /*0x457b8f*/
        v13 = *(_DWORD *)(a2 + 4); /*0x457b92*/
        *(_DWORD *)(a2 + 16) = v12 + 1; /*0x457b98*/
LABEL_31:
        *(_DWORD *)(v13 + 4 * v12) = v24; /*0x457c60*/
      }
    }
    else
    {
      v14 = v9[10]; /*0x457ba0*/
      if ( v14 ) /*0x457ba5*/
      {
        v15 = *(_DWORD *)(v14 + 8); /*0x457ba7*/
        if ( *(_DWORD *)(v14 + 16) < v15 ) /*0x457baf*/
          goto LABEL_30; /*0x457baf*/
        if ( *(_BYTE *)(v14 + 13) || !v15 ) /*0x457bbc*/
        {
          v16 = *(_DWORD *)(v14 + 20); /*0x457bc2*/
          if ( v16 > 0 ) /*0x457bc7*/
          {
            if ( (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v14 + 8))(v14, v15 + v16, 0) ) /*0x457bd5*/
              goto LABEL_30; /*0x457bda*/
          }
        }
      }
      else
      {
        v17 = __2_YAPAXI_Z(0x18u); /*0x457be4*/
        if ( v17 ) /*0x457bee*/
        {
          *(_DWORD *)(v17 + 4) = 0; /*0x457bf0*/
          *(_DWORD *)(v17 + 8) = 0; /*0x457bf3*/
          *(_BYTE *)(v17 + 12) = 1; /*0x457bf6*/
          *(_BYTE *)(v17 + 13) = 0; /*0x457bfa*/
          *(_DWORD *)v17 = &DynamicVectorClass<FoggedObjectClass *>::`vftable'; /*0x457bfd*/
          *(_DWORD *)(v17 + 20) = 10; /*0x457c03*/
          *(_DWORD *)(v17 + 16) = 0; /*0x457c0a*/
        }
        else
        {
          v17 = 0; /*0x457c0f*/
        }
        v9[10] = v17; /*0x457c11*/
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v17 + 8))(v17, 1, 0); /*0x457c1b*/
        *(_DWORD *)(v9[10] + 20) = 1; /*0x457c21*/
        v14 = v9[10]; /*0x457c28*/
        v18 = *(_DWORD *)(v14 + 8); /*0x457c2b*/
        if ( *(_DWORD *)(v14 + 16) < v18 /*0x457c4d*/
          || (*(_BYTE *)(v14 + 13) || !v18)
          && (v19 = *(_DWORD *)(v14 + 20), v19 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v14 + 8))(v14, v18 + v19, 0) )
        {
LABEL_30:
          v12 = *(_DWORD *)(v14 + 16); /*0x457c54*/
          *(_DWORD *)(v14 + 16) = v12 + 1; /*0x457c5a*/
          v13 = *(_DWORD *)(v14 + 4); /*0x457c5d*/
          goto LABEL_31; /*0x457c5d*/
        }
      }
    }
    v20 += 2; /*0x457c67*/
    v5 = v20; /*0x457c72*/
  }
}



// ==== 0x00457C90  BuildingClass::IronCurtain  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::IronCurtain(BuildingClass *this)
{
  int v1; // eax
  int v3; // [esp+4h] [ebp-8h]
  int v4; // [esp+10h] [ebp+4h]
  int v5; // [esp+14h] [ebp+8h]
  char v6; // [esp+18h] [ebp+Ch]

  if ( this->C4Applied ) /*0x457c90*/
  {
    this->C4Applied = 0; /*0x457ca0*/
    v1 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x457ca6*/
    this->C4AppliedBy = 0; /*0x457cb1*/
    this->C4Timer[0] = v1; /*0x457cb7*/
    this->C4Timer[1] = v3; /*0x457cbd*/
    this->C4Timer[2] = 0; /*0x457cc0*/
  }
  return TechnoClass::IronCurtain((TechnoClass *)this, v4, v5, v6); /*0x457cd8*/
}



// ==== 0x00457CE0  BuildingClass::CanRepair  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CanRepair(BuildingClass *this, int a2)
{
  int result; // eax
  _DWORD *v4; // eax
  HouseClass *owner; // eax
  _BYTE v6[12]; // [esp+8h] [ebp-Ch] BYREF

  if ( !a2 ) /*0x457ced*/
    goto LABEL_13; /*0x457ced*/
  result = (int)this->Type; /*0x457cf3*/
  if ( !*(_BYTE *)(result + 5499) ) /*0x457cf9*/
    goto LABEL_13; /*0x457cf9*/
  result = this->?; /*0x457d07*/
  if ( result == 18 ) /*0x457d10*/
    goto LABEL_13; /*0x457d10*/
  if ( result == 19 ) /*0x457d19*/
    goto LABEL_13; /*0x457d19*/
  v4 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass + 18))(this, v6); /*0x457d28*/
  result = IsCoordVisibleMap((ObjectClass *)&stru_87F5F0.__pad_58[416], v4); /*0x457d31*/
  if ( !(_BYTE)result ) /*0x457d38*/
    goto LABEL_13; /*0x457d38*/
  result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 117))(this); /*0x457d3e*/
  if ( (_BYTE)result ) /*0x457d46*/
    goto LABEL_13; /*0x457d46*/
  result = *(_DWORD *)(a2 + 1728); /*0x457d48*/
  if ( !*(_BYTE *)(result + 3764) ) /*0x457d56*/
  {
    if ( *(_BYTE *)(result + 3765) ) /*0x457dad*/
    {
      result = Object::IsAlliedWithObjectHouse((Object *)this->?, a2); /*0x457dbe*/
      if ( !(_BYTE)result ) /*0x457dc5*/
      {
        result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 258))(this); /*0x457dcb*/
        if ( result ) /*0x457dd3*/
          goto LABEL_17; /*0x457dd3*/
      }
    }
LABEL_13:
    LOBYTE(result) = 0; /*0x457da3*/
    return result; /*0x457daa*/
  }
  owner = this->?; /*0x457d58*/
  if ( owner != *(HouseClass **)(a2 + 540) ) /*0x457d66*/
  {
    result = owner->relatedTagsCapacity; /*0x457d68*/
    if ( !*(_BYTE *)(result + 422) ) /*0x457d6b*/
      goto LABEL_13; /*0x457d6b*/
  }
  result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 258))(this); /*0x457d79*/
  if ( result == this->Type->MaxNumberOccupants ) /*0x457d8b*/
    goto LABEL_13; /*0x457d8b*/
  result = BuildingClass::IsHealthLow(this); /*0x457d8f*/
  if ( (_BYTE)result ) /*0x457d96*/
    goto LABEL_13; /*0x457d96*/
  result = BuildingClass::IsBeingRepairedOrCaptured((BuildingClass *)a2); /*0x457d9a*/
  if ( (_BYTE)result ) /*0x457da1*/
    goto LABEL_13; /*0x457da1*/
LABEL_17:
  LOBYTE(result) = 1; /*0x457dd5*/
  return result; /*0x457da3*/
}



// ==== 0x00457DE0  BuildingClass::UnloadUnits  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::UnloadUnits(BuildingClass *this, char a2, char a3)
{
  int (**vtable0)(void); // eax
  BuildingTypeClass *Type; // ecx
  int FoundationWidth; // eax
  int *v7; // ecx
  __int16 v8; // di
  int FoundationHeight; // eax
  int (__thiscall **v10)(BuildingClass *, char *); // edx
  __int16 v11; // bp
  char v12; // bl
  _DWORD *v13; // eax
  int **v14; // edx
  int *v15; // edi
  int v16; // ebp
  void *v17; // eax
  int v18; // eax
  int v19; // ebp
  void *v20; // eax
  int *v21; // eax
  int v22; // ecx
  __int16 *v23; // eax
  int v24; // ebp
  void *v25; // eax
  __int16 *v26; // eax
  int v27; // ebp
  void *v28; // eax
  int v29; // ebp
  int v30; // eax
  int v31; // ebx
  void *v32; // eax
  void *v33; // eax
  int *v34; // eax
  int v35; // edx
  int v36; // ebp
  int v37; // edi
  int v38; // ebx
  int v39; // eax
  int *v40; // ecx
  __int16 v41; // di
  _WORD *v42; // eax
  int v43; // ebx
  _DWORD *v44; // eax
  __int16 v45[2]; // [esp+84h] [ebp-2Ch] BYREF
  __int16 v46[2]; // [esp+88h] [ebp-28h] BYREF
  int v47; // [esp+8Ch] [ebp-24h]
  int v48; // [esp+90h] [ebp-20h]
  char v49[4]; // [esp+94h] [ebp-1Ch] BYREF
  int v50; // [esp+98h] [ebp-18h] BYREF
  int v51; // [esp+9Ch] [ebp-14h]
  int i; // [esp+A0h] [ebp-10h]
  _BYTE v53[12]; // [esp+A4h] [ebp-Ch] BYREF
  int v54; // [esp+B8h] [ebp+8h]

  vtable0 = (int (**)(void))this->TechnoClass; /*0x457de9*/
  this->Audio8[4] = 0; /*0x457deb*/
  if ( vtable0[258]() ) /*0x457df5*/
  {
    v50 = g_BuildingClassPool; /*0x457e14*/
    v51 = dword_89C84C; /*0x457e1e*/
    *(_DWORD *)v46 = g_TerrainTypeTable; /*0x457e22*/
    Type = this->Type; /*0x457e26*/
    i = dword_89C850; /*0x457e2c*/
    FoundationWidth = BuildingTypeClass::GetFoundationWidth(Type); /*0x457e30*/
    v7 = (int *)this->Type; /*0x457e35*/
    v8 = FoundationWidth; /*0x457e3b*/
    v47 = FoundationWidth; /*0x457e3f*/
    FoundationHeight = BuildingTypeClass::GetFoundationHeight(v7, 0); /*0x457e43*/
    v10 = (int (__thiscall **)(BuildingClass *, char *))this->TechnoClass; /*0x457e48*/
    v11 = FoundationHeight; /*0x457e4a*/
    v48 = FoundationHeight; /*0x457e53*/
    v12 = 0; /*0x457e57*/
    v13 = (_DWORD *)v10[110](this, v49); /*0x457e59*/
    v14 = (int **)this->Audio7[4]; /*0x457e61*/
    *(_DWORD *)v45 = *v13; /*0x457e67*/
    v45[0] += v8; /*0x457e6b*/
    v45[1] += v11; /*0x457e70*/
    v15 = *v14; /*0x457e75*/
    v16 = **v14; /*0x457e7b*/
    v17 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v45); /*0x457e8b*/
    if ( (*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v16 + 428))(v15, v17, -1, -1, 0, 1) ) /*0x457e93*/
    {
      while ( 1 ) /*0x457ea6*/
      {
        v18 = (*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 110))(this, v49); /*0x457ea6*/
        if ( v45[1] <= *(__int16 *)(v18 + 2) - 1 ) /*0x457eb8*/
          break; /*0x457eb8*/
        --v45[1]; /*0x457eba*/
        v19 = *v15; /*0x457ebf*/
        v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v45); /*0x457ed3*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v19 + 428))(v15, v20, -1, -1, 0, 1) ) /*0x457edb*/
          goto LABEL_5; /*0x457ee3*/
      }
    }
    else
    {
LABEL_5:
      v12 = 1; /*0x457ee5*/
      *(_DWORD *)v46 = *(_DWORD *)v45; /*0x457eeb*/
    }
    v21 = (int *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 110))(this, v49); /*0x457ef8*/
    v22 = *v21; /*0x457efe*/
    v45[0] = v47 + *v21; /*0x457f0e*/
    v45[1] = v48 + HIWORD(v22); /*0x457f13*/
    if ( !v12 ) /*0x457f1a*/
    {
      while ( 1 ) /*0x457f25*/
      {
        v23 = (__int16 *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 110))(this, v49); /*0x457f25*/
        if ( v45[0] <= *v23 - 1 ) /*0x457f36*/
          break; /*0x457f36*/
        --v45[0]; /*0x457f38*/
        v24 = *v15; /*0x457f3d*/
        v25 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v45); /*0x457f51*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v24 + 428))(v15, v25, -1, -1, 0, 1) ) /*0x457f59*/
        {
          v12 = 1; /*0x457f67*/
          *(_DWORD *)v46 = *(_DWORD *)v45; /*0x457f69*/
          break; /*0x457f69*/
        }
      }
    }
    *(_DWORD *)v45 = *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 110))(this, v49); /*0x457f6d*/
    --v45[0]; /*0x457f82*/
    --v45[1]; /*0x457f87*/
    if ( !v12 ) /*0x457f8e*/
    {
      while ( 1 ) /*0x457f99*/
      {
        v26 = (__int16 *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 110))(this, v49); /*0x457f99*/
        if ( v45[0] >= v47 + *v26 ) /*0x457fad*/
          break; /*0x457fad*/
        ++v45[0]; /*0x457faf*/
        v27 = *v15; /*0x457fb4*/
        v28 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v45); /*0x457fc8*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v27 + 428))(v15, v28, -1, -1, 0, 1) ) /*0x457fd0*/
        {
          v12 = 1; /*0x457fde*/
          *(_DWORD *)v46 = *(_DWORD *)v45; /*0x457fe0*/
          break; /*0x457fe0*/
        }
      }
    }
    *(_DWORD *)v45 = *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 110))(this, v49); /*0x457fe4*/
    --v45[0]; /*0x457ff9*/
    --v45[1]; /*0x457ffe*/
    if ( !v12 ) /*0x458005*/
    {
      v29 = v48; /*0x458007*/
      while ( 1 ) /*0x458014*/
      {
        v30 = (*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 110))(this, v49); /*0x458014*/
        if ( v45[1] >= v29 + *(__int16 *)(v30 + 2) ) /*0x458027*/
          break; /*0x458027*/
        ++v45[1]; /*0x45802d*/
        v31 = *v15; /*0x458032*/
        v32 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v45); /*0x458046*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v31 + 428))(v15, v32, -1, -1, 0, 1) ) /*0x45804e*/
        {
          *(_DWORD *)v46 = *(_DWORD *)v45; /*0x45805c*/
          goto LABEL_19; /*0x45805c*/
        }
      }
      if ( !a3 ) /*0x458146*/
      {
        BuildingClass::AnimateUnloadUnits(this, 0); /*0x458184*/
        return; /*0x458190*/
      }
      v41 = v47 - 1; /*0x458156*/
      v42 = (_WORD *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 110))(this, v49); /*0x458159*/
      LOWORD(v54) = *v42 + v41; /*0x458169*/
      HIWORD(v54) = v29 - 1 + v42[1]; /*0x45816e*/
      *(_DWORD *)v46 = v54; /*0x458177*/
    }
LABEL_19:
    v33 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v46); /*0x458060*/
    v34 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v33 + 72))(v33, v53); /*0x458078*/
    v50 = *v34; /*0x45807d*/
    v51 = v34[1]; /*0x458084*/
    v35 = v34[2]; /*0x45808e*/
    ++dword_A8E7AC; /*0x458092*/
    v36 = this->Audio8[2] - 1; /*0x45809e*/
    for ( i = v35; v36 >= 0; --v36 ) /*0x4580a3*/
    {
      v37 = *(_DWORD *)(this->Audio7[4] + 4 * v36); /*0x4580b1*/
      if ( (*(unsigned __int8 (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v37 + 216))(v37, &v50, 0) ) /*0x4580bd*/
      {
        if ( *(_BYTE *)(*(_DWORD *)(v37 + 540) + 492) ) /*0x4580d1*/
        {
          *(_BYTE *)(v37 + 1681) = 0; /*0x4580db*/
          *(_BYTE *)(v37 + 1680) = 0; /*0x4580e2*/
        }
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v37 + 968))(v37, 0); /*0x4580ef*/
        v38 = *(_DWORD *)v37; /*0x4580f7*/
        v39 = (*((int (__thiscall **)(BuildingClass *, _BYTE *, int, int))this->TechnoClass + 18))(this, v53, 1, 1); /*0x458104*/
        (*(void (__thiscall **)(int, int))(v38 + 372))(v37, v39); /*0x45810a*/
        if ( a2 ) /*0x458116*/
        {
          v40 = *(int **)(v37 + 1492); /*0x45811c*/
          if ( v40 ) /*0x458124*/
            TeamClass::LiberateMember_Start(v40, v37, 0xFFFFFFFF, 0); /*0x45812b*/
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v37 + 488))(v37, 15, 0); /*0x458138*/
        }
      }
      else
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v37 + 248))(v37); /*0x458197*/
      }
    }
    --dword_A8E7AC; /*0x4581b2*/
    v43 = this->Audio8[0]; /*0x4581b9*/
    (*(void (__thiscall **)(int *))(this->Audio7[3] + 12))(&this->Audio7[3]); /*0x4581bc*/
    (*(void (__thiscall **)(int *, int, _DWORD))(this->Audio7[3] + 8))(&this->Audio7[3], v43, 0); /*0x4581c6*/
    v44 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 111))(this); /*0x4581cd*/
    BuildingClass::UpdateThreatBounds(this, v44); /*0x4581d6*/
  }
}



// ==== 0x004581F0  BuildingClass::MissionStubReturnZero6  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::MissionStubReturnZero6(BuildingClass *this)
{
  return this->Audio8[2]; /*0x4581f6*/
}



// ==== 0x00458200  BuildingClass::ProcessStructureAbandoned  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ProcessStructureAbandoned(BuildingClass *this)
{
  int result; // eax
  int v3; // edi
  House *v4; // ebx
  int v5; // eax
  int v6; // ecx
  HouseClass *v7; // edx
  House *owner; // ecx
  __int64 v9; // rax
  _BYTE v10[4]; // [esp+8h] [ebp-4h] BYREF

  result = this->Type; /*0x458205*/
  if ( *(_DWORD *)(result + 1588) == -1 ) /*0x458212*/
  {
    if ( (unsigned __int8)BuildingClass::IsHealthLow(this) ) /*0x45821a*/
      BuildingClass::UnloadUnits(this, 0, 0); /*0x458229*/
    v3 = dword_A80238; /*0x458230*/
    v4 = 0; /*0x45823b*/
    v5 = HouseTypeClass::Find(&g_INI_Key_Civilian); /*0x45823d*/
    v6 = 0; /*0x458242*/
    if ( v3 > 0 ) /*0x458246*/
    {
      v7 = dword_A8022C; /*0x458248*/
      while ( *(_DWORD *)(*(_DWORD *)(v7->vtable0 + 52) + 188) != v5 ) /*0x458259*/
      {
        ++v6; /*0x45825b*/
        v7 = (HouseClass *)((char *)v7 + 4); /*0x45825c*/
        if ( v6 >= v3 ) /*0x458261*/
          goto LABEL_10; /*0x458261*/
      }
      v4 = (House *)*(&dword_A8022C->vtable0 + v6); /*0x45826b*/
    }
LABEL_10:
    if ( !(*(int (__thiscall **)(BuildingClass *))(this->vtable0 + 1032))(this) ) /*0x458272*/
    {
      owner = (House *)this->owner; /*0x45827e*/
      if ( owner != v4 ) /*0x458286*/
      {
        if ( (unsigned __int8)House::IsHumanPlayer(owner) ) /*0x458288*/
        {
          PlayVocClass(dword_8871E0->GeneticMutatorActivateSound, 0x2000, 1.0, 0); /*0x4582a9*/
          v9 = ((__int64 (__thiscall *)(BuildingClass *, _BYTE *))*(_DWORD *)(this->vtable0 + 440))(this, v10); /*0x4582b7*/
          if ( (unsigned __int8)CreateTriggerClassIfFarEnough(15, SHIDWORD(v9), *(_DWORD *)v9) ) /*0x4582c5*/
            VoxClass::FindAndPlay(&stru_81926C, -1); /*0x4582d8*/
        }
        PlayHealthDependentBuildingAnim(this); /*0x4582df*/
        (*(void (__thiscall **)(BuildingClass *, House *, _DWORD))(this->vtable0 + 980))(this, v4, 0); /*0x4582eb*/
      }
    }
    result = (*(int (__thiscall **)(BuildingClass *))(this->vtable0 + 1032))(this); /*0x4582f5*/
    if ( result > 0 && (House *)this->owner == v4 ) /*0x458305*/
    {
      PlayHealthDependentBuildingAnim(this); /*0x458309*/
      return (*(int (__thiscall **)(BuildingClass *, _DWORD, _DWORD))(this->vtable0 + 980))( /*0x458323*/
               this,
               *(_DWORD *)(*(_DWORD *)this->Audio7[4] + 540),
               0);
    }
  }
  return result; /*0x458329*/
}



// ==== 0x00458330  ObjectClass::PlayHealthDependentBuildingAnim  this=ObjectClass  sig=csp ====
_BYTE *__thiscall PlayHealthDependentBuildingAnim(TechnoClass *this)
{
  BOOL v3; // ebx
  bool v4; // al
  int v5; // edx
  AnimTypeClass *v6; // eax
  bool v7; // zf
  int v8; // eax
  BOOL v11; // ebx
  bool v12; // al
  int v13; // edx
  AnimTypeClass *v14; // eax
  int v15; // eax
  BOOL v18; // ebx
  bool v19; // al
  int v20; // edx
  AnimTypeClass *v21; // eax
  int v22; // eax
  BOOL v25; // ebx
  bool v26; // al
  int v27; // edx
  AnimTypeClass *v28; // eax
  int v29; // eax
  _BYTE *result; // eax
  BOOL v33; // ebx
  bool v34; // al
  int v35; // edx
  int v36; // eax
  int v37; // [esp+8h] [ebp-4h]

  if ( *((_DWORD *)this + 361) )
  {
    BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x45833f*/
    _EAX = dword_8871E0; /*0x458344*/
    __asm /*0x458349*/
    {
      fcomp qword ptr [eax+1700h]
      fnstsw ax
    }
    v3 = (BYTE1(_EAX) & 0x41) != 0; /*0x458354*/
    v4 = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 1032))(this) > 0; /*0x45836b*/
    LOBYTE(v37) = v4; /*0x458370*/
    if ( v3 )
    {
      v6 = (AnimTypeClass *)(*((_DWORD *)this + 328) + 5156); /*0x45837c*/
    }
    else
    {
      v7 = !v4; /*0x458383*/
      v8 = *((_DWORD *)this + 328); /*0x458385*/
      v6 = (AnimTypeClass *)(v7 ? v8 + 5140 : v8 + 5172);
    }
    if ( v6 && LOBYTE(v6->vtable0) ) /*0x45839d*/
      BuildingClass::PlayAnim((BuildingClass *)this, v5, v6, 18, v3, v37, 0); /*0x4583af*/
  }
  if ( *((_DWORD *)this + 346) )
  {
    BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x4583c0*/
    _EDX = dword_8871E0; /*0x4583c5*/
    __asm /*0x4583cb*/
    {
      fcomp qword ptr [edx+1700h]
      fnstsw ax
    }
    v11 = (_AX & 0x4100) != 0; /*0x4583d6*/
    v12 = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 1032))(this) > 0; /*0x4583ed*/
    LOBYTE(v37) = v12; /*0x4583f2*/
    if ( v11 )
    {
      v14 = (AnimTypeClass *)(*((_DWORD *)this + 328) + 4136); /*0x4583fe*/
    }
    else
    {
      v7 = !v12; /*0x458405*/
      v15 = *((_DWORD *)this + 328); /*0x458407*/
      v14 = (AnimTypeClass *)(v7 ? v15 + 4120 : v15 + 4152);
    }
    if ( v14 && LOBYTE(v14->vtable0) ) /*0x45841f*/
      BuildingClass::PlayAnim((BuildingClass *)this, v13, v14, 3, v11, v37, 0); /*0x458431*/
  }
  if ( *((_DWORD *)this + 347) )
  {
    BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x458442*/
    _EDX = dword_8871E0; /*0x458447*/
    __asm /*0x45844d*/
    {
      fcomp qword ptr [edx+1700h]
      fnstsw ax
    }
    v18 = (_AX & 0x4100) != 0; /*0x458458*/
    v19 = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 1032))(this) > 0; /*0x45846f*/
    LOBYTE(v37) = v19; /*0x458474*/
    if ( v18 )
    {
      v21 = (AnimTypeClass *)(*((_DWORD *)this + 328) + 4204); /*0x458480*/
    }
    else
    {
      v7 = !v19; /*0x458487*/
      v22 = *((_DWORD *)this + 328); /*0x458489*/
      v21 = (AnimTypeClass *)(v7 ? v22 + 4188 : v22 + 4220);
    }
    if ( v21 && LOBYTE(v21->vtable0) ) /*0x4584a1*/
      BuildingClass::PlayAnim((BuildingClass *)this, v20, v21, 4, v18, v37, 0); /*0x4584b3*/
  }
  if ( *((_DWORD *)this + 348) )
  {
    BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x4584c4*/
    _EDX = dword_8871E0; /*0x4584c9*/
    __asm /*0x4584cf*/
    {
      fcomp qword ptr [edx+1700h]
      fnstsw ax
    }
    v25 = (_AX & 0x4100) != 0; /*0x4584da*/
    v26 = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 1032))(this) > 0; /*0x4584f1*/
    LOBYTE(v37) = v26; /*0x4584f6*/
    if ( v25 )
    {
      v28 = (AnimTypeClass *)(*((_DWORD *)this + 328) + 4272); /*0x458502*/
    }
    else
    {
      v7 = !v26; /*0x458509*/
      v29 = *((_DWORD *)this + 328); /*0x45850b*/
      v28 = (AnimTypeClass *)(v7 ? v29 + 4256 : v29 + 4288);
    }
    if ( v28 && LOBYTE(v28->vtable0) ) /*0x458523*/
      BuildingClass::PlayAnim((BuildingClass *)this, v27, v28, 5, v25, v37, 0); /*0x458535*/
  }
  result = (_BYTE *)*((_DWORD *)this + 349); /*0x45853a*/
  if ( result ) /*0x458542*/
  {
    BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x458546*/
    _EDX = dword_8871E0; /*0x45854b*/
    __asm /*0x458551*/
    {
      fcomp qword ptr [edx+1700h]
      fnstsw ax
    }
    v33 = (_AX & 0x4100) != 0; /*0x45855c*/
    v34 = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 1032))(this) > 0; /*0x458573*/
    LOBYTE(v37) = v34; /*0x458578*/
    if ( v33 ) /*0x45857c*/
    {
      result = (_BYTE *)(*((_DWORD *)this + 328) + 4340); /*0x458584*/
    }
    else
    {
      v7 = !v34; /*0x45858b*/
      v36 = *((_DWORD *)this + 328); /*0x45858d*/
      if ( v7 ) /*0x458593*/
        result = (_BYTE *)(v36 + 4324); /*0x45859c*/
      else
        result = (_BYTE *)(v36 + 4356); /*0x458595*/
    }
    if ( result ) /*0x4585a3*/
    {
      if ( *result ) /*0x4585a5*/
        return (_BYTE *)BuildingClass::PlayAnim((BuildingClass *)this, v35, (AnimTypeClass *)result, 6, v33, v37, 0); /*0x4585b7*/
    }
  }
  return result; /*0x4585bc*/
}



// ==== 0x004585C0  BuildingClass::AnimateUnloadUnits  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::AnimateUnloadUnits(BuildingClass *this, int a2)
{
  int v4; // edi
  int i; // edi
  int v6; // ecx
  int v7; // edi
  int *v8; // eax
  int v9; // ecx
  int (__thiscall **vtable0)(BuildingClass *, char *); // edx
  _DWORD *v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  AnimClass *v15; // ebx
  int v16; // eax
  void **v17; // eax
  int v18; // ecx
  int v19; // ebx
  _DWORD *v20; // eax
  int *v21; // [esp+0h] [ebp-30h]
  int v22; // [esp+10h] [ebp-20h] BYREF
  int v23; // [esp+18h] [ebp-18h] BYREF
  int v24; // [esp+1Ch] [ebp-14h]
  int v25; // [esp+20h] [ebp-10h]
  char v26[12]; // [esp+24h] [ebp-Ch] BYREF
  int v27; // [esp+34h] [ebp+4h]

  this->Audio8[4] = 0; /*0x4585cf*/
  v4 = this->Audio8[2]; /*0x4585d9*/
  if ( a2 ) /*0x4585df*/
  {
    v7 = v4 - 1; /*0x458601*/
    if ( v7 >= 0 ) /*0x458602*/
    {
      v27 = 8 * v7 + 5512; /*0x45860f*/
      do /*0x4586fe*/
      {
        v8 = (int *)World::ToScreen(&v22, (void **)((char *)&this->Type->TechnoTypeClass + v27), v21); /*0x45862b*/
        v9 = v8[1]; /*0x458630*/
        vtable0 = (int (__thiscall **)(BuildingClass *, char *))this->TechnoClass; /*0x458635*/
        v23 = *v8; /*0x458637*/
        v24 = v9; /*0x45863f*/
        v25 = 0; /*0x458646*/
        v11 = (_DWORD *)vtable0[43](this, v26); /*0x45864e*/
        v12 = v23 + *v11; /*0x45865e*/
        v13 = v11[1]; /*0x458660*/
        v14 = v25 + v11[2]; /*0x45866c*/
        v23 = v12; /*0x458673*/
        v24 += v13; /*0x458677*/
        v25 = v14; /*0x45867b*/
        v15 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x458684*/
        if ( v15 ) /*0x45868b*/
        {
          v16 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 1016))(a2, 0); /*0x4586a6*/
          v17 = AnimClass::ctor(v15, *(void **)(*(_DWORD *)v16 + 276), &v23, 0, 1, (void *)0x600, 0, 0); /*0x4586b7*/
        }
        else
        {
          v17 = 0; /*0x4586be*/
        }
        v17[64] = (void *)-200; /*0x4586c0*/
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 224))(a2, *(_DWORD *)(this->Audio7[4] + 4 * v7)); /*0x4586d9*/
        v18 = *(_DWORD *)(this->Audio7[4] + 4 * v7); /*0x4586e5*/
        (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 248))(v18); /*0x4586ea*/
        --v7; /*0x4586f4*/
        v27 -= 8; /*0x4586fa*/
      }
      while ( v7 >= 0 ); /*0x4586fe*/
    }
  }
  else
  {
    for ( i = v4 - 1; i >= 0; --i ) /*0x4585e2*/
    {
      v6 = *(_DWORD *)(this->Audio7[4] + 4 * i); /*0x4585ee*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 248))(v6); /*0x4585f3*/
    }
  }
  v19 = this->Audio8[0]; /*0x45870a*/
  (*(void (__thiscall **)(int *))(this->Audio7[3] + 12))(&this->Audio7[3]); /*0x458718*/
  (*(void (__thiscall **)(int *, int, _DWORD))(this->Audio7[3] + 8))(&this->Audio7[3], v19, 0); /*0x458722*/
  v20 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 111))(this); /*0x458729*/
  BuildingClass::UpdateThreatBounds(this, v20); /*0x458732*/
}



// ==== 0x00458750  HouseClass::Process  this=HouseClass  sig=csp ====
char __thiscall HouseClass::Process(HouseClass *this)
{
  int v2; // ecx
  char result; // al
  int v4; // eax
  int v5; // [esp+8h] [ebp-8h]

  v2 = *(_DWORD *)(this->builtInfantryTypes[126] + 5472); /*0x458767*/
  this->builtInfantryTypes[234] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x45876d*/
  this->builtInfantryTypes[235] = v5; /*0x458773*/
  this->builtInfantryTypes[236] = v2; /*0x458776*/
  result = *(_BYTE *)(*(_DWORD *)(this->planningPaths[3] + 52) + 422); /*0x458782*/
  if ( !result ) /*0x45878a*/
  {
    result = (*((int (__thiscall **)(HouseClass *))this->AbstractClass + 212))(this); /*0x458790*/
    if ( result ) /*0x458798*/
    {
      v4 = *(_DWORD *)(this->builtInfantryTypes[126] + 5468); /*0x4587a0*/
      if ( v4 <= 0 ) /*0x4587a8*/
        return HouseClass::ProcessPowerDrain((int *)this->planningPaths[3], -v4); /*0x4587c4*/
      else
        return HouseClass::AddPower((HouseClass *)this->planningPaths[3], v4); /*0x4587b1*/
    }
  }
  return result; /*0x4587b6*/
}



// ==== 0x00458810  BuildingClass::BuildTurretTransform  this=BuildingClass  sig=csp ====
float *__thiscall sub_458810(int this, float *a2)
{
  float v4; // [esp+0h] [ebp-44h]
  float v5; // [esp+0h] [ebp-44h]
  float v6; // [esp+0h] [ebp-44h]
  float v7; // [esp+0h] [ebp-44h]
  float v8; // [esp+0h] [ebp-44h]
  float v9; // [esp+0h] [ebp-44h]
  float v10; // [esp+0h] [ebp-44h]
  float v11; // [esp+0h] [ebp-44h]
  float v12; // [esp+0h] [ebp-44h]
  float v13; // [esp+0h] [ebp-44h]
  float v14; // [esp+0h] [ebp-44h]
  float v15; // [esp+Ch] [ebp-38h]
  int v16; // [esp+10h] [ebp-34h] BYREF
  float v17[12]; // [esp+14h] [ebp-30h] BYREF

  Matrix3x4::Identity(v17); /*0x45881b*/
  v4 = (float)*(int *)(*(_DWORD *)(this + 1312) + 5960); /*0x458831*/
  Matrix3x4::Translate(v17, v4); /*0x458834*/
  v5 = (float)*(int *)(*(_DWORD *)(this + 1312) + 5964); /*0x45884a*/
  Matrix3x3::ApplyCol0(v17, v5); /*0x45884d*/
  v6 = (float)*(int *)(*(_DWORD *)(this + 1312) + 5968); /*0x458863*/
  Matrix3x3::ApplyCol1(v17, v6); /*0x458866*/
  v7 = (double)(int)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)(this + 904), &v16) >> 10) + 1) >> 1) & 0x1F) /*0x45889c*/
                   - 8)
     * -0.1963495408493621;
  Matrix2D::Rotate(v17, v7); /*0x45889f*/
  v8 = (float)*(int *)(*(_DWORD *)(this + 1312) + 5948); /*0x4588b5*/
  Matrix3x4::Translate(v17, v8); /*0x4588b8*/
  v9 = (float)*(int *)(*(_DWORD *)(this + 1312) + 5952); /*0x4588ce*/
  Matrix3x3::ApplyCol0(v17, v9); /*0x4588d1*/
  v10 = (float)*(int *)(*(_DWORD *)(this + 1312) + 5956); /*0x4588e7*/
  Matrix3x3::ApplyCol1(v17, v10); /*0x4588ea*/
  v11 = -((double)(int)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)(this + 880), &v16) >> 10) + 1) >> 1) & 0x1F) /*0x458922*/
                      - 8)
        * -0.1963495408493621);
  Matrix3D::RotateZ(v17, v11); /*0x458925*/
  v12 = (float)*(int *)(*(_DWORD *)(this + 1312) + 5936); /*0x45893b*/
  Matrix3x4::Translate(v17, v12); /*0x45893e*/
  v13 = (float)*(int *)(*(_DWORD *)(this + 1312) + 5940); /*0x458954*/
  Matrix3x3::ApplyCol0(v17, v13); /*0x458957*/
  v14 = (float)*(int *)(*(_DWORD *)(this + 1312) + 5944); /*0x45896d*/
  Matrix3x3::ApplyCol1(v17, v14); /*0x458970*/
  v15 = *(double *)(*(_DWORD *)(this + 1312) + 5928); /*0x458985*/
  BuildingClass::processBaseExpansion(v17, v15); /*0x45898e*/
  BuildingClass::updateFoundation(v17, v15); /*0x458998*/
  BuildingClass::recalcAdjacency(v17, v15); /*0x4589a2*/
  qmemcpy(a2, v17, 0x30u); /*0x4589b6*/
  return a2; /*0x4589b8*/
}



// ==== 0x00458A00  UnitClass::IsCellBlockedByBridge  this=UnitClass  sig=csp ====
int __thiscall UnitClass::IsCellBlockedByBridge(UnitClass *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  int result; // eax
  int v5; // edi

  v2 = a2; /*0x458a02*/
  result = (int)Cell::IsBridge((Cell *)a2); /*0x458a0a*/
  if ( (UnitClass *)result == this ) /*0x458a11*/
  {
    result = this->?; /*0x458a1a*/
    if ( *(_DWORD *)(result + 5664) == -1 ) /*0x458a27*/
    {
      LOBYTE(result) = 1; /*0x458a2a*/
    }
    else if ( *(_BYTE *)(result + 5803) && (result = (int)this->?) != 0 ) /*0x458a42*/
    {
      LOBYTE(result) = 1; /*0x458a45*/
    }
    else
    {
      v5 = *((__int16 *)v2 + 18); /*0x458a51*/
      result = *(__int16 *)(*((int (__thiscall **)(UnitClass *, _DWORD **))this->FootClass + 110))(this, &a2); /*0x458a64*/
      LOBYTE(result) = result + *(_DWORD *)(this->? + 5664) > v5; /*0x458a72*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x458a14*/
  }
  return result; /*0x458a13*/
}



// ==== 0x00458A80  TechnoClass::EvacuateFootprintCells  this=BuildingClass  sig=csp ====
int __thiscall TechnoClass::EvacuateFootprintCells(TechnoClass *this)
{
  TechnoClass *v1; // esi
  int (__stdcall **vtable0)(_DWORD); // eax
  _WORD *v3; // ebp
  _WORD *v4; // eax
  __int16 v5; // dx
  _DWORD *v6; // edi
  _BYTE *v7; // esi
  int v8; // eax
  int i; // edi
  _DWORD *v10; // esi
  int j; // edi
  _DWORD *v12; // esi
  int result; // eax
  int k; // edi
  int *v15; // esi
  int v16; // eax
  int v17; // eax
  int *v18; // eax
  int v19; // ebx
  int v20; // eax
  int *v21; // [esp+0h] [ebp-44h]
  int v22; // [esp+4h] [ebp-40h]
  __int16 v23; // [esp+10h] [ebp-34h]
  __int16 v24; // [esp+12h] [ebp-32h]
  int v25; // [esp+14h] [ebp-30h] BYREF
  TechnoClass *v26; // [esp+18h] [ebp-2Ch] BYREF
  __int16 v27[2]; // [esp+1Ch] [ebp-28h] BYREF
  int v28; // [esp+20h] [ebp-24h] BYREF
  __int16 v29[2]; // [esp+24h] [ebp-20h] BYREF
  int v30; // [esp+28h] [ebp-1Ch] BYREF
  void **v31; // [esp+2Ch] [ebp-18h] BYREF
  void *Block; // [esp+30h] [ebp-14h]
  int v33; // [esp+34h] [ebp-10h]
  int v34; // [esp+38h] [ebp-Ch]
  int v35; // [esp+3Ch] [ebp-8h]
  int v36; // [esp+40h] [ebp-4h]
  _DWORD *v37; // [esp+48h] [ebp+4h]
  int v38; // [esp+4Ch] [ebp+8h]
  int v39; // [esp+50h] [ebp+Ch] BYREF
  int v40; // [esp+54h] [ebp+10h] BYREF

  v1 = this; /*0x458a86*/
  vtable0 = (int (__stdcall **)(_DWORD))this->RadioClass; /*0x458a8b*/
  v26 = this; /*0x458a8e*/
  v3 = (_WORD *)vtable0[66](0); /*0x458a9c*/
  v23 = *v37 / 256; /*0x458aae*/
  v24 = v37[1] / 256; /*0x458ac6*/
  EventClass::resetEvent((EventClass *)&v31, 0, 0); /*0x458acb*/
  v31 = &DynamicVectorClass<TechnoClass *>::`vftable'; /*0x458ad0*/
  v36 = 10; /*0x458ad8*/
  v35 = 0; /*0x458ae0*/
  while ( *v3 != 0x7FFF || v3[1] != 0x7FFF ) /*0x458af8*/
  {
    v4 = v3; /*0x458afe*/
    v3 += 2; /*0x458b00*/
    v5 = v24 + v4[1]; /*0x458b0f*/
    LOWORD(v25) = v23 + *v4; /*0x458b14*/
    HIWORD(v25) = v5; /*0x458b1d*/
    *(_DWORD *)v27 = v25; /*0x458b2c*/
    v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v27); /*0x458b35*/
    if ( v6[17] != -1 ) /*0x458b3d*/
    {
      v6[17] = -1; /*0x458b3f*/
      *((_BYTE *)v6 + 286) = 0; /*0x458b42*/
      v6[16] = 0; /*0x458b48*/
    }
    v7 = (_BYTE *)v6[57]; /*0x458b4b*/
    if ( v7 ) /*0x458b53*/
    {
      while ( (v7[20] & 1) != 0 && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v7 + 44))(v7) != 6 ) /*0x458b65*/
      {
        if ( v35 < v33 /*0x458b91*/
          || (BYTE1(v34) || !v33)
          && v36 > 0
          && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v31[2])(&v31, v36 + v33, 0) )
        {
          v8 = v35++; /*0x458b9c*/
          *((_DWORD *)Block + v8) = v7; /*0x458ba7*/
        }
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v7 + 212))(v7); /*0x458bae*/
        v7 = (_BYTE *)v6[57]; /*0x458bb4*/
        if ( !v7 ) /*0x458bbc*/
          goto LABEL_2; /*0x458bbc*/
      }
      for ( i = v35 - 1; i >= 0; --i ) /*0x458bcc*/
      {
        v10 = (_DWORD *)*((_DWORD *)Block + i); /*0x458bd7*/
        v28 = v10[39]; /*0x458be6*/
        *(_DWORD *)v29 = v10[40]; /*0x458bed*/
        v30 = v10[41]; /*0x458bf9*/
        if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int *, _DWORD))(*v10 + 216))(v10, &v28, 0) ) /*0x458c01*/
          (*(void (__thiscall **)(_DWORD *))(*v10 + 248))(v10); /*0x458c0f*/
      }
      goto LABEL_28; /*0x458c16*/
    }
LABEL_2:
    v1 = v26; /*0x458ae6*/
  }
  if ( !(*((unsigned __int8 (__thiscall **)(TechnoClass *, _DWORD *, int))v1->RadioClass + 54))(v1, v37, v38) ) /*0x458c28*/
  {
    (*((void (__thiscall **)(TechnoClass *))v1->RadioClass + 62))(v1); /*0x458c3a*/
    for ( j = v35 - 1; j >= 0; --j ) /*0x458c49*/
    {
      v12 = (_DWORD *)*((_DWORD *)Block + j); /*0x458c50*/
      v28 = v12[39]; /*0x458c5f*/
      *(_DWORD *)v29 = v12[40]; /*0x458c68*/
      v30 = v12[41]; /*0x458c6f*/
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int *, _DWORD))(*v12 + 216))(v12, &v28, 0) ) /*0x458c7a*/
        (*(void (__thiscall **)(_DWORD *))(*v12 + 248))(v12); /*0x458c88*/
    }
LABEL_28:
    result = (int)Block; /*0x458c91*/
    v35 = 0; /*0x458c95*/
    if ( Block && BYTE1(v34) ) /*0x458ca1*/
      __3_YAXPAX_Z(Block); /*0x458ca4*/
    LOBYTE(result) = 0; /*0x458caf*/
    return result; /*0x458cb5*/
  }
  for ( k = v35 - 1; k >= 0; --k ) /*0x458cc1*/
  {
    v15 = (int *)*((_DWORD *)Block + k); /*0x458cd9*/
    v40 = *(_DWORD *)(*(int (__thiscall **)(int *, int *, int *, int))(*v15 + 440))(v15, &v25, v21, v22); /*0x458cfb*/
    v16 = *v15; /*0x458cff*/
    v39 = 0; /*0x458d07*/
    v17 = (*(int (__thiscall **)(int *))(v16 + 132))(v15); /*0x458d11*/
    *(_DWORD *)v29 = *LayerClass::Pathfinding_Find( /*0x458d38*/
                        &stru_87F5F0.__pad_58[416],
                        (int)&v40,
                        &v26,
                        (__int16 *)&v40,
                        *(_DWORD *)(v17 + 1660),
                        -1,
                        0,
                        0,
                        1,
                        1,
                        0,
                        0,
                        0,
                        1,
                        (__int16 *)&v39,
                        0,
                        0);
    v18 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v29); /*0x458d42*/
    v22 = 0; /*0x458d4d*/
    v19 = *v18; /*0x458d4e*/
    v21 = &v30; /*0x458d50*/
    v28 = *v15; /*0x458d53*/
    v20 = (*(int (__thiscall **)(int *))(v19 + 72))(v18); /*0x458d57*/
    if ( !(*(unsigned __int8 (__thiscall **)(int *, int))(*(_DWORD *)v27 + 216))(v15, v20) ) /*0x458d61*/
      (*(void (__thiscall **)(int *))(*v15 + 248))(v15); /*0x458d6f*/
  }
  result = (int)Block; /*0x458d7e*/
  v31 = &VectorClass<TechnoClass *>::`vftable'; /*0x458d82*/
  if ( Block && BYTE1(v34) ) /*0x458d92*/
    __3_YAXPAX_Z(Block); /*0x458d95*/
  LOBYTE(result) = 1; /*0x458da0*/
  return result; /*0x458cac*/
}



// ==== 0x00458DB0  BuildingClass::HasActiveParam  this=BuildingClass  sig=csp ====
bool __thiscall BuildingClass::HasActiveParam(BuildingClass *this)
{
  return (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 256))(this) /*0x458dbf*/
      || TechnoClass::HasActiveParam((TechnoClass *)this);
}



// ==== 0x00458DD0  BuildingClass::CheckMissionGuard  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CheckMissionGuard(BuildingClass *this)
{
  BuildingTypeClass *Type; // eax

  Type = this->Type; /*0x458dd0*/
  return Type->CanBeOccupied /*0x458dfb*/
      && Type->CanOccupyFire
      && (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 258))(this) > 0;
}



// ==== 0x00458E00  BuildingClass::CheckMissionAttack  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CheckMissionAttack(BuildingClass *this)
{
  int FoundationHeight; // edi

  FoundationHeight = BuildingTypeClass::GetFoundationHeight((int *)this->Type, 0); /*0x458e17*/
  if ( BuildingTypeClass::GetFoundationWidth(this->Type) >= FoundationHeight ) /*0x458e20*/
    return BuildingTypeClass::GetFoundationHeight((int *)this->Type, 0) / 2; /*0x458e46*/
  else
    return BuildingTypeClass::GetFoundationWidth(this->Type) / 2; /*0x458e31*/
}



// ==== 0x00458E50  BuildingClass::UpdateBunker  this=BuildingClass  sig=csp ====
char __usercall BuildingClass::UpdateBunker@<al>(BuildingClass *this, double a2@<st0>)
{
  BuildingClass *v2; // ecx
  BuildingClass *v3; // esi
  char *bunkerLinkedUnit; // ebp
  char (__thiscall **vtable0)(BuildingClass *, int, _DWORD); // eax
  char *BunkerState; // eax
  Cell *v7; // eax
  _WORD *v8; // ebx
  Object *v9; // eax
  char *ClosestObjectCell; // eax
  char *v11; // edi
  int v12; // ebx
  int v13; // eax
  _WORD *v14; // edi
  int v15; // ebx
  Object *v16; // eax
  int v19; // eax
  int *v20; // eax
  int v21; // edi
  int v22; // ebx
  int v23; // ecx
  int v24; // eax
  Cell *v25; // eax
  int v26; // edx
  int v28; // ecx
  AnimTypeClass *v29; // eax
  int v30; // edx
  int v33; // ecx
  int v34; // edx
  TechnoClass *v35; // ecx
  int *location; // esi
  double v38; // [esp+10h] [ebp-98h]
  double v39; // [esp+18h] [ebp-90h]
  char v40; // [esp+33h] [ebp-75h]
  int v41; // [esp+34h] [ebp-74h]
  int v42; // [esp+34h] [ebp-74h]
  int v43; // [esp+38h] [ebp-70h]
  int v44; // [esp+38h] [ebp-70h]
  _WORD *v45; // [esp+3Ch] [ebp-6Ch]
  int v46; // [esp+3Ch] [ebp-6Ch]
  int v47; // [esp+3Ch] [ebp-6Ch]
  __int16 v48[2]; // [esp+40h] [ebp-68h] BYREF
  __int16 v49[2]; // [esp+44h] [ebp-64h] BYREF
  int v50; // [esp+48h] [ebp-60h] BYREF
  __int16 v51; // [esp+4Ch] [ebp-5Ch] BYREF
  int v52; // [esp+50h] [ebp-58h] BYREF
  int v53; // [esp+54h] [ebp-54h] BYREF
  int v54; // [esp+58h] [ebp-50h] BYREF
  _DWORD v55[2]; // [esp+5Ch] [ebp-4Ch] BYREF
  _DWORD v56[2]; // [esp+64h] [ebp-44h] BYREF
  _DWORD v57[3]; // [esp+6Ch] [ebp-3Ch] BYREF
  _BYTE v58[8]; // [esp+78h] [ebp-30h] BYREF
  int v59; // [esp+80h] [ebp-28h]
  _BYTE v60[12]; // [esp+84h] [ebp-24h] BYREF
  _BYTE v61[12]; // [esp+90h] [ebp-18h] BYREF
  _BYTE v62[12]; // [esp+9Ch] [ebp-Ch] BYREF

  v3 = v2; /*0x458e56*/
  bunkerLinkedUnit = (char *)v2->?; /*0x458e5b*/
  if ( (bunkerLinkedUnit || (bunkerLinkedUnit = (char *)Team::GetMember((Team *)v2, 0)) != 0) /*0x458e7c*/
    && (*(int (__thiscall **)(char *))(*(_DWORD *)bunkerLinkedUnit + 44))(bunkerLinkedUnit) == 1 )
  {
    BunkerState = (char *)v3->BunkerState; /*0x458e99*/
    switch ( (unsigned int)BunkerState ) /*0x458ea8*/
    {
      case 0u: /*0x458ea8*/
        v7 = (Cell *)(*(int (__thiscall **)(char *))(*(_DWORD *)bunkerLinkedUnit + 444))(bunkerLinkedUnit); /*0x458eb4*/
        BunkerState = (char *)Cell::IsBridge(v7); /*0x458ebc*/
        if ( BunkerState == (char *)v3 ) /*0x458ec3*/
        {
          if ( !*((_DWORD *)bunkerLinkedUnit + 413) ) /*0x458ec9*/
            WinAPI::Wrapper(-2147467261); /*0x458ed6*/
          LOBYTE(BunkerState) = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)bunkerLinkedUnit + 413) + 16))(*((_DWORD *)bunkerLinkedUnit + 413)); /*0x458ee4*/
          if ( !(_BYTE)BunkerState ) /*0x458ee9*/
          {
            v8 = (_WORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD))v3->TechnoClass + 66))(v3, 0); /*0x458efe*/
            v45 = v8; /*0x458f05*/
            v41 = *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, int *))v3->TechnoClass + 110))(v3, &v52); /*0x458f11*/
            while ( 1 ) /*0x458f15*/
            {
              LOWORD(BunkerState) = *v8; /*0x458f15*/
              if ( *v8 == 0x7FFF && v8[1] == 0x7FFF ) /*0x458f22*/
                break; /*0x458f22*/
              LOWORD(v43) = v41 + (_WORD)BunkerState; /*0x458f3b*/
              HIWORD(v43) = HIWORD(v41) + v8[1]; /*0x458f40*/
              *(_DWORD *)v48 = v43; /*0x458f4f*/
              v9 = (Object *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x458f53*/
              v55[0] = 128; /*0x458f62*/
              v55[1] = 128; /*0x458f66*/
              ClosestObjectCell = (char *)Object::FindClosestObjectCell(v9, v55, 0, (int)v3); /*0x458f6f*/
              v11 = ClosestObjectCell; /*0x458f74*/
              if ( ClosestObjectCell && ClosestObjectCell != bunkerLinkedUnit ) /*0x458f7c*/
              {
                v12 = *(_DWORD *)ClosestObjectCell; /*0x458f80*/
                v13 = (*((int (__thiscall **)(BuildingClass *, _BYTE *, int, _DWORD))v3->TechnoClass + 18))( /*0x458f8d*/
                        v3,
                        v60,
                        1,
                        0);
                (*(void (__thiscall **)(char *, int))(v12 + 372))(v11, v13); /*0x458f93*/
                v8 = v45; /*0x458f99*/
              }
              v8 += 2; /*0x458f9d*/
              v45 = v8; /*0x458fa0*/
            }
            goto LABEL_25; /*0x458f22*/
          }
        }
        break; /*0x458fa4*/
      case 1u: /*0x458ea8*/
        v40 = 0; /*0x458fae*/
        v14 = (_WORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD))v3->TechnoClass + 66))(v3, 0); /*0x458fbd*/
        v15 = *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, int *))v3->TechnoClass + 110))(v3, &v53); /*0x458fca*/
        while ( *v14 != 0x7FFF || v14[1] != 0x7FFF ) /*0x458fdd*/
        {
          LOWORD(v46) = v15 + *v14; /*0x458fee*/
          HIWORD(v46) = HIWORD(v15) + v14[1]; /*0x458ff4*/
          *(_DWORD *)v49 = v46; /*0x459002*/
          v16 = (Object *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v49); /*0x459006*/
          v56[0] = 128; /*0x459015*/
          v56[1] = 128; /*0x459019*/
          BunkerState = (char *)Object::FindClosestObjectCell(v16, v56, 0, (int)v3); /*0x459022*/
          if ( BunkerState ) /*0x459029*/
          {
            if ( BunkerState != bunkerLinkedUnit ) /*0x45902d*/
            {
              v40 = 1; /*0x459032*/
              if ( (BunkerState[20] & 4) != 0 && !*((_DWORD *)BunkerState + 361) ) /*0x459044*/
              {
LABEL_25:
                v3->BunkerState = 1; /*0x45904b*/
                return (char)BunkerState; /*0x45905c*/
              }
            }
          }
          v14 += 2; /*0x459046*/
        }
        LOBYTE(BunkerState) = v40; /*0x45905d*/
        if ( !v40 ) /*0x459063*/
        {
          _EDI = (int *)(*(int (__thiscall **)(char *, _BYTE *))(*(_DWORD *)bunkerLinkedUnit + 72))( /*0x459078*/
                          bunkerLinkedUnit,
                          v61);
          _EAX = (int *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))v3->TechnoClass + 18))(v3, v58); /*0x459081*/
          v47 = *_EDI; /*0x459088*/
          v44 = *_EAX; /*0x45908c*/
          __asm { fild [esp+88h+var_6C] } /*0x459090*/
          __asm
          {
            fisub [esp+98h+var_70]
            fstp [esp+98h+var_90]; double
            fild dword ptr [eax+4]
            fisub dword ptr [edi+4]
            fstp [esp+98h+var_98]; double
          }
          Math::CalcAngle(v38, v39); /*0x4590ab*/
          __asm { fsub ds:dbl_7E2820 } /*0x4590b0*/
          __asm { fmul ds:dbl_7E2818 }
          LOWORD(v47) = Math::RoundToInt(a2) + 0x7FFF; /*0x4590d6*/
          v50 = v47; /*0x4590df*/
          LOBYTE(BunkerState) = FacingClass::Update(bunkerLinkedUnit + 904, &v50); /*0x4590ea*/
          v3->BunkerState = 2; /*0x4590ef*/
        }
        break; /*0x459100*/
      case 2u: /*0x458ea8*/
        LOBYTE(BunkerState) = TimerClass::Active((int)(bunkerLinkedUnit + 904)); /*0x459109*/
        if ( !(_BYTE)BunkerState ) /*0x459110*/
        {
          v19 = ((unsigned __int16)(*ProgressTimer::GetValue((ProgressTimer *)(bunkerLinkedUnit + 904), &v54) >> 7) + 1) /*0x459128*/
              & 0x1FE;
          if ( v19 == 64 ) /*0x459130*/
          {
            v42 = 67; /*0x459132*/
          }
          else if ( v19 == 448 ) /*0x459141*/
          {
            v42 = 70; /*0x459143*/
          }
          else
          {
            v42 = 68; /*0x459152*/
            if ( v19 != 192 ) /*0x45915a*/
              v42 = 69; /*0x45915c*/
          }
          v20 = (int *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))v3->TechnoClass + 18))(v3, v62); /*0x45916d*/
          v21 = *v20; /*0x459170*/
          v22 = v20[1]; /*0x459172*/
          v23 = v20[2]; /*0x459175*/
          v24 = *((_DWORD *)bunkerLinkedUnit + 413); /*0x459178*/
          v59 = v23; /*0x459180*/
          if ( !v24 ) /*0x459184*/
            WinAPI::Wrapper(-2147467261); /*0x45918b*/
          (*(void (__stdcall **)(_DWORD, int, int, int, int))(**((_DWORD **)bunkerLinkedUnit + 413) + 112))( /*0x4591af*/
            *((_DWORD *)bunkerLinkedUnit + 413),
            v42,
            v21,
            v22,
            v59);
          LOBYTE(BunkerState) = (*(int (__thiscall **)(char *, _DWORD, int))(*(_DWORD *)bunkerLinkedUnit + 1348))( /*0x4591be*/
                                  bunkerLinkedUnit,
                                  0,
                                  1072693248);
          v3->BunkerState = 3; /*0x4591c4*/
        }
        break; /*0x4591d5*/
      case 3u: /*0x458ea8*/
        v25 = (Cell *)(*(int (__thiscall **)(char *))(*(_DWORD *)bunkerLinkedUnit + 444))(bunkerLinkedUnit); /*0x4591db*/
        BunkerState = (char *)Cell::IsBridge(v25); /*0x4591e3*/
        if ( BunkerState == (char *)v3 ) /*0x4591ea*/
        {
          if ( !*((_DWORD *)bunkerLinkedUnit + 413) ) /*0x4591f0*/
            WinAPI::Wrapper(-2147467261); /*0x4591fd*/
          LOBYTE(BunkerState) = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)bunkerLinkedUnit + 413) + 16))(*((_DWORD *)bunkerLinkedUnit + 413)); /*0x45920b*/
          if ( !(_BYTE)BunkerState ) /*0x459210*/
          {
            v51 = 0x8000; /*0x459221*/
            LOBYTE(BunkerState) = FacingClass::Update(bunkerLinkedUnit + 904, &v51); /*0x459228*/
            v3->BunkerState = 4; /*0x45922d*/
          }
        }
        break; /*0x45923e*/
      case 4u: /*0x458ea8*/
        LOBYTE(BunkerState) = TimerClass::Active((int)(bunkerLinkedUnit + 904)); /*0x459245*/
        if ( !(_BYTE)BunkerState ) /*0x45924c*/
        {
          BuildingClass::GetHealthRatio(v3); /*0x459254*/
          _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x459259*/
          __asm /*0x45925e*/
          {
            fcomp qword ptr [eax+1700h]
            fnstsw ax
          }
          if ( (_EAX & 0x4100) != 0 ) /*0x459269*/
          {
            v28 = 1; /*0x459271*/
            v29 = (AnimTypeClass *)&v3->Type->__pad_F70[660]; /*0x459276*/
          }
          else
          {
            v28 = 0; /*0x459283*/
            v29 = (AnimTypeClass *)&v3->Type->__pad_F70[644]; /*0x459285*/
          }
          if ( v29 && LOBYTE(v29->ObjectTypeClass) ) /*0x45928e*/
            BuildingClass::PlayAnim(v3, v26, v29, 10, v28, 0, 0); /*0x45929b*/
          BuildingClass::GetHealthRatio(v3); /*0x4592a2*/
          _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4592a7*/
          __asm /*0x4592ad*/
          {
            fcomp qword ptr [ecx+1700h]
            fnstsw ax
          }
          if ( (_AX & 0x4100) != 0 ) /*0x4592b8*/
          {
            v33 = 1; /*0x4592c0*/
            BunkerState = &v3->Type->__pad_F70[728]; /*0x4592c5*/
          }
          else
          {
            v33 = 0; /*0x4592d2*/
            BunkerState = &v3->Type->__pad_F70[712]; /*0x4592d4*/
          }
          if ( BunkerState && *BunkerState ) /*0x4592dd*/
            LOBYTE(BunkerState) = BuildingClass::PlayAnim(v3, v30, (AnimTypeClass *)BunkerState, 11, v33, 0, 0); /*0x4592ea*/
          v3->BunkerState = 5; /*0x4592ef*/
        }
        break; /*0x459300*/
      case 5u: /*0x458ea8*/
        v3->? = (TechnoClass *)bunkerLinkedUnit; /*0x459301*/
        v34 = *(_DWORD *)bunkerLinkedUnit; /*0x459307*/
        *((_DWORD *)bunkerLinkedUnit + 185) = v3; /*0x45930f*/
        *((_DWORD *)bunkerLinkedUnit + 133) = -1; /*0x459315*/
        (*(void (__thiscall **)(char *))(v34 + 336))(bunkerLinkedUnit); /*0x45931b*/
        v35 = v3->?; /*0x459321*/
        v3->BunkerState = 6; /*0x459327*/
        (*((void (__thiscall **)(TechnoClass *, int, int))v35->RadioClass + 122))(v35, 5, 1); /*0x459337*/
        LOBYTE(BunkerState) = DSurface_ViewBounds.__pad_FC[324]; /*0x45933d*/
        if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 576) != -1 ) /*0x459348*/
        {
          location = v3->?; /*0x45934a*/
          v57[0] = *location; /*0x459353*/
          v57[1] = location[1]; /*0x45935a*/
          v57[2] = location[2]; /*0x459365*/
          LOBYTE(BunkerState) = (unsigned __int8)StartAudioControllerAt( /*0x45936f*/
                                                   *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 576),
                                                   v57,
                                                   0);
        }
        break; /*0x45936f*/
      default:
        return (char)BunkerState;
    }
  }
  else
  {
    vtable0 = (char (__thiscall **)(BuildingClass *, int, _DWORD))v3->TechnoClass; /*0x458e7e*/
    v3->BunkerState = 0; /*0x458e85*/
    LOBYTE(BunkerState) = vtable0[122](v3, 5, 0); /*0x458e8b*/
  }
  return (char)BunkerState; /*0x458e91*/
}



// ==== 0x004593A0  BuildingClass::RemoveLimpet  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::RemoveLimpet(BuildingClass *this)
{
  TechnoClass *bunkerLinkedUnit; // esi
  int *v3; // eax
  int v4; // ebx
  int v5; // ebp
  int v6; // ecx
  int v7; // eax
  int v8; // ebx
  int v9; // ebp
  void (__thiscall **vtable0)(BuildingClass *, int); // eax
  int v11; // [esp+10h] [ebp-Ch] BYREF
  int v12; // [esp+18h] [ebp-4h]

  bunkerLinkedUnit = this->?; /*0x4593a9*/
  if ( bunkerLinkedUnit && (*((int (__thiscall **)(TechnoClass *))bunkerLinkedUnit->RadioClass + 11))(this->?) == 1 ) /*0x4593c1*/
  {
    if ( !bunkerLinkedUnit[1].alignmentPadding154[0] ) /*0x4593c7*/
      WinAPI::Wrapper(-2147467261); /*0x4593d6*/
    (*(void (__stdcall **)(int))(*(_DWORD *)bunkerLinkedUnit[1].alignmentPadding154[0] + 88))(bunkerLinkedUnit[1].alignmentPadding154[0]); /*0x4593e4*/
    v3 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 18))(this, &v11); /*0x4593f0*/
    v4 = *v3; /*0x4593f3*/
    v5 = v3[1]; /*0x4593f5*/
    v6 = v3[2]; /*0x4593f8*/
    v7 = bunkerLinkedUnit[1].alignmentPadding154[0]; /*0x4593fb*/
    v8 = v4 - 128; /*0x459401*/
    v9 = v5 + 128; /*0x459407*/
    v12 = v6; /*0x45940f*/
    if ( !v7 ) /*0x459413*/
      WinAPI::Wrapper(-2147467261); /*0x45941a*/
    (*(void (__stdcall **)(int, int, int, int, int))(*(_DWORD *)bunkerLinkedUnit[1].alignmentPadding154[0] + 112))( /*0x45943b*/
      bunkerLinkedUnit[1].alignmentPadding154[0],
      71,
      v8,
      v9,
      v12);
    (*((void (__thiscall **)(TechnoClass *, _DWORD, int))bunkerLinkedUnit->RadioClass + 337))( /*0x45944a*/
      bunkerLinkedUnit,
      0,
      1072693248);
    bunkerLinkedUnit->bunkerLinkedUnit = 0; /*0x459450*/
    vtable0 = (void (__thiscall **)(BuildingClass *, int))this->TechnoClass; /*0x459456*/
    this->? = 0; /*0x45945c*/
    vtable0[157](this, 3); /*0x459462*/
  }
}



// ==== 0x00459470  BuildingClass::UpdateDamageAnim  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::UpdateDamageAnim(BuildingClass *this)
{
  int result; // eax
  int v5; // ecx
  char *v6; // eax
  int v7; // edx
  int v9; // ecx
  char *v10; // eax
  int (__thiscall **vtable0)(BuildingClass *, int, _DWORD); // edx
  _DWORD v12[3]; // [esp+4h] [ebp-Ch] BYREF

  BuildingClass::ClearAnims(this, 10); /*0x459478*/
  BuildingClass::ClearAnims(this, 11); /*0x459481*/
  result = (int)this->?; /*0x459486*/
  if ( result ) /*0x45948e*/
  {
    if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 580) != -1 ) /*0x4594a0*/
    {
      v12[0] = this->?[0]; /*0x4594ac*/
      v12[1] = this->?[1]; /*0x4594b3*/
      v12[2] = this->?[2]; /*0x4594be*/
      StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 580), v12, 0); /*0x4594c8*/
    }
    BuildingClass::GetHealthRatio(this); /*0x4594cf*/
    _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4594d4*/
    __asm /*0x4594da*/
    {
      fcomp qword ptr [edx+1700h]
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x4594e5*/
    {
      v5 = 1; /*0x4594ed*/
      v6 = &this->Type->__pad_F70[796]; /*0x4594f2*/
    }
    else
    {
      v5 = 0; /*0x4594ff*/
      v6 = &this->Type->__pad_F70[780]; /*0x459501*/
    }
    if ( v6 && *v6 ) /*0x45950a*/
      BuildingClass::PlayAnim(this, *(int *)&DSurface_ViewBounds.__pad_FC[324], (AnimTypeClass *)v6, 12, v5, 0, 0); /*0x459519*/
    BuildingClass::GetHealthRatio(this); /*0x459520*/
    _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x459525*/
    __asm /*0x45952a*/
    {
      fcomp qword ptr [eax+1700h]
      fnstsw ax
    }
    if ( (_EAX & 0x4100) != 0 ) /*0x459535*/
    {
      v9 = 1; /*0x45953d*/
      v10 = &this->Type->__pad_F70[864]; /*0x459542*/
    }
    else
    {
      v9 = 0; /*0x45954f*/
      v10 = &this->Type->__pad_F70[848]; /*0x459551*/
    }
    if ( v10 ) /*0x459558*/
    {
      if ( *v10 ) /*0x45955a*/
        BuildingClass::PlayAnim(this, v7, (AnimTypeClass *)v10, 13, v9, 0, 0); /*0x459569*/
    }
    (*((void (__thiscall **)(BuildingClass *, int))this->TechnoClass + 157))(this, 3); /*0x459574*/
    this->?->bunkerLinkedUnit = 0; /*0x459586*/
    vtable0 = (int (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass; /*0x459590*/
    this->? = 0; /*0x459592*/
    this->BunkerState = 0; /*0x45959c*/
    return vtable0[122](this, 5, 0); /*0x4595a6*/
  }
  return result; /*0x4595ac*/
}



// ==== 0x004595C0  BuildingClass::EmptyBunker  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::EmptyBunker(BuildingClass *this)
{
  int v4; // ecx
  char *v5; // eax
  int v6; // edx
  int v8; // ecx
  char *v9; // eax
  TechnoClass *bunkerLinkedUnit; // esi
  int (__thiscall **v11)(BuildingClass *, int, _DWORD); // edx
  int result; // eax
  int *v13; // eax
  int v14; // ebp
  int v15; // ebx
  int v16; // ecx
  int v17; // eax
  int v18; // ebp
  int v19; // ebx
  __int16 *v20; // eax
  __int16 v21; // dx
  int (__thiscall **vtable0)(TechnoClass *); // eax
  int v23; // eax
  __int16 *v24; // eax
  void *v25; // eax
  void (__thiscall **v26)(BuildingClass *, int, _DWORD); // edx
  int v27; // [esp+18h] [ebp-28h]
  int v28; // [esp+1Ch] [ebp-24h]
  int v29; // [esp+30h] [ebp-10h] BYREF
  int v30; // [esp+34h] [ebp-Ch] BYREF
  int v31; // [esp+38h] [ebp-8h] BYREF
  int v32; // [esp+3Ch] [ebp-4h]

  BuildingClass::ClearAnims(this, 10); /*0x4595cb*/
  BuildingClass::ClearAnims(this, 11); /*0x4595d4*/
  if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 580) != -1 ) /*0x4595e5*/
  {
    v30 = this->?[0]; /*0x4595f1*/
    v31 = this->?[1]; /*0x4595f8*/
    v32 = this->?[2]; /*0x459603*/
    StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 580), &v30, 0); /*0x45960d*/
  }
  BuildingClass::GetHealthRatio(this); /*0x459614*/
  _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x459619*/
  __asm /*0x45961f*/
  {
    fcomp qword ptr [edx+1700h]
    fnstsw ax
  }
  if ( (_AX & 0x4100) != 0 ) /*0x45962a*/
  {
    v4 = 1; /*0x459632*/
    v5 = &this->Type->__pad_F70[796]; /*0x459637*/
  }
  else
  {
    v4 = 0; /*0x459644*/
    v5 = &this->Type->__pad_F70[780]; /*0x459646*/
  }
  if ( v5 && *v5 ) /*0x459651*/
    BuildingClass::PlayAnim(this, *(int *)&DSurface_ViewBounds.__pad_FC[324], (AnimTypeClass *)v5, 12, v4, 0, 0); /*0x45965e*/
  BuildingClass::GetHealthRatio(this); /*0x459665*/
  _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x45966a*/
  __asm /*0x45966f*/
  {
    fcomp qword ptr [eax+1700h]
    fnstsw ax
  }
  if ( (_EAX & 0x4100) != 0 ) /*0x45967a*/
  {
    v8 = 1; /*0x459682*/
    v9 = &this->Type->__pad_F70[864]; /*0x459687*/
  }
  else
  {
    v8 = 0; /*0x459694*/
    v9 = &this->Type->__pad_F70[848]; /*0x459696*/
  }
  if ( v9 && *v9 ) /*0x45969f*/
    BuildingClass::PlayAnim(this, v6, (AnimTypeClass *)v9, 13, v8, 0, 0); /*0x4596ac*/
  bunkerLinkedUnit = this->?; /*0x4596b1*/
  if ( bunkerLinkedUnit ) /*0x4596b9*/
  {
    result = (*((int (__thiscall **)(TechnoClass *))bunkerLinkedUnit->RadioClass + 11))(this->?); /*0x4596da*/
    if ( result == 1 ) /*0x4596e0*/
    {
      bunkerLinkedUnit->bunkerLinkedUnit = 0; /*0x4596e6*/
      if ( !bunkerLinkedUnit[1].alignmentPadding154[0] ) /*0x4596ec*/
        WinAPI::Wrapper(-2147467261); /*0x4596fb*/
      (*(void (__stdcall **)(int))(*(_DWORD *)bunkerLinkedUnit[1].alignmentPadding154[0] + 88))(bunkerLinkedUnit[1].alignmentPadding154[0]); /*0x459709*/
      v13 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 18))(this, &v30); /*0x459715*/
      v14 = *v13; /*0x459718*/
      v15 = v13[1]; /*0x45971a*/
      v16 = v13[2]; /*0x45971d*/
      v17 = bunkerLinkedUnit[1].alignmentPadding154[0]; /*0x459720*/
      v18 = v14 - 128; /*0x459726*/
      v19 = v15 + 128; /*0x45972c*/
      v32 = v16; /*0x459734*/
      if ( !v17 ) /*0x459738*/
        WinAPI::Wrapper(-2147467261); /*0x45973f*/
      (*(void (__stdcall **)(int, int, int, int, int, int, int))(*(_DWORD *)bunkerLinkedUnit[1].alignmentPadding154[0] /*0x459760*/
                                                               + 112))(
        bunkerLinkedUnit[1].alignmentPadding154[0],
        71,
        v18,
        v19,
        v32,
        v27,
        v28);
      (*((void (__thiscall **)(TechnoClass *, _DWORD, int))bunkerLinkedUnit->RadioClass + 337))( /*0x45976f*/
        bunkerLinkedUnit,
        0,
        1072693248);
      v20 = (__int16 *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 110))(this, &v31); /*0x45977e*/
      v21 = *v20; /*0x459784*/
      LOWORD(v20) = v20[1] + 1; /*0x45978d*/
      LOWORD(v29) = v21 - 1; /*0x45978f*/
      HIWORD(v29) = (_WORD)v20; /*0x459794*/
      v30 = v29; /*0x4597aa*/
      vtable0 = (int (__thiscall **)(TechnoClass *))bunkerLinkedUnit->RadioClass; /*0x4597b5*/
      v29 = 0; /*0x4597bd*/
      v23 = vtable0[33](bunkerLinkedUnit); /*0x4597c7*/
      v24 = (__int16 *)LayerClass::Pathfinding_Find( /*0x4597e3*/
                         &stru_87F5F0.__pad_58[416],
                         (int)&v30,
                         &v31,
                         (__int16 *)&v30,
                         *(_DWORD *)(v23 + 1660),
                         -1,
                         0,
                         0,
                         1,
                         1,
                         0,
                         0,
                         0,
                         1,
                         (__int16 *)&v29,
                         0,
                         0);
      v25 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24); /*0x4597ee*/
      (*((void (__thiscall **)(TechnoClass *, void *, int))bunkerLinkedUnit->RadioClass + 288))( /*0x4597fa*/
        bunkerLinkedUnit,
        v25,
        1);
      (*((void (__thiscall **)(TechnoClass *, int, _DWORD))bunkerLinkedUnit->RadioClass + 122))(bunkerLinkedUnit, 2, 0); /*0x459807*/
      v26 = (void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass; /*0x45980d*/
      this->? = 0; /*0x459814*/
      this->BunkerState = 0; /*0x45981a*/
      v26[122](this, 5, 0); /*0x459820*/
      return (*((int (__thiscall **)(BuildingClass *, int))this->TechnoClass + 157))(this, 3); /*0x45982c*/
    }
  }
  else
  {
    v11 = (int (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass; /*0x4596bb*/
    this->BunkerState = 0; /*0x4596c2*/
    return v11[122](this, 5, 0); /*0x4596c8*/
  }
  return result; /*0x4596ce*/
}



// ==== 0x00459840  HouseClass::GetRepairStepAmount  this=HouseClass  sig=csp ====
int __thiscall HouseClass::GetRepairStepAmount(HouseClass *this)
{
  _DWORD *v1; // edx
  int result; // eax

  v1 = (_DWORD *)this->builtInfantryTypes[126]; /*0x459840*/
  result = v1[937]; /*0x459846*/
  if ( !result ) /*0x45984e*/
  {
    result = v1[938]; /*0x459850*/
    if ( !result ) /*0x459858*/
    {
      result = v1[939]; /*0x45985a*/
      if ( !result ) /*0x459862*/
        return this->builtInfantryTypes[243]; /*0x459864*/
    }
  }
  return result; /*0x45986a*/
}



// ==== 0x00459870  BuildingClass::MissionStubReturnZero  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::MissionStubReturnZero(BuildingClass *this)
{
  return *(_DWORD *)&this->Type->__pad_F70[1460]; /*0x45987c*/
}



// ==== 0x00459880  BuildingClass::MissionStubReturnZero2  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::MissionStubReturnZero2(BuildingClass *this)
{
  return *(_DWORD *)&this->Type->__pad_F70[1464]; /*0x45988c*/
}



// ==== 0x00459890  BuildingClass::MissionStubReturnZero3  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::MissionStubReturnZero3(BuildingClass *this)
{
  return *(_DWORD *)&this->Type->__pad_F70[1468]; /*0x45989c*/
}



// ==== 0x004598A0  InfantryClass::updateDeployAnimation  this=InfantryClass  sig=csp ====
BOOL __thiscall InfantryClass::updateDeployAnimation(InfantryClass *this)
{
  int planningPathIdx; // eax

  planningPathIdx = this->?; /*0x4598a0*/
  return *(_BYTE *)(planningPathIdx + 5806) || *(_BYTE *)(planningPathIdx + 5807); /*0x4598bc*/
}



// ==== 0x00459900  BuildingClass::SpawnParticles  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::SpawnParticles(BuildingClass *this)
{
  int result; // eax
  int v3; // ebp
  int v4; // ecx
  int v5; // edx
  int *v6; // eax
  int v7; // ebx
  int v8; // edi
  ObjectClass *v9; // eax
  int *RefinerySmokeOffsetTwo; // edx
  int v11; // ecx
  int v12; // edx
  int *v13; // eax
  int v14; // ebx
  int v15; // edi
  ObjectClass *v16; // eax
  int *RefinerySmokeOffsetThree; // edx
  int v18; // ecx
  int v19; // edx
  int *v20; // eax
  int v21; // ebx
  int v22; // edi
  ObjectClass *v23; // eax
  int *RefinerySmokeOffsetFour; // edx
  int v25; // ecx
  int v26; // edx
  int *v27; // eax
  int v28; // ebx
  int v29; // edi
  ObjectClass *v30; // eax
  int v31; // [esp+10h] [ebp-1Ch]
  Coord3D v32; // [esp+14h] [ebp-18h] BYREF
  int v33; // [esp+20h] [ebp-Ch] BYREF
  int v34; // [esp+24h] [ebp-8h]
  int v35; // [esp+28h] [ebp-4h]

  result = (int)this->Type; /*0x459909*/
  v3 = *(_DWORD *)(result + 1908); /*0x45990f*/
  if ( v3 ) /*0x459917*/
  {
    v31 = *(_DWORD *)(result + 5484); /*0x459930*/
    *(_DWORD *)v32.__pad_0 = *(_DWORD *)(result + 1996); /*0x459936*/
    v4 = *(_DWORD *)(result + 2000); /*0x45993c*/
    v32.Coord3D_field_0x04 = v4; /*0x45993f*/
    v5 = *(_DWORD *)(result + 2004); /*0x459943*/
    v32.Coord3D_field_0x08 = v5; /*0x459946*/
    if ( (*(_DWORD *)v32.__pad_0 != g_BuildingClassPool || v4 != dword_89C84C || v5 != dword_89C850) /*0x459965*/
      && !(unsigned __int8)Coord3D::Equals(&v32, &dword_89C870) )
    {
      v6 = (int *)__2_YAPAXI_Z(0x100u); /*0x459973*/
      if ( v6 ) /*0x45997d*/
      {
        v7 = this->?[2]; /*0x459994*/
        v8 = v32.Coord3D_field_0x04 + this->?[1]; /*0x4599a1*/
        v33 = *(_DWORD *)v32.__pad_0 + this->?[0]; /*0x4599a7*/
        v34 = v8; /*0x4599b5*/
        v35 = v32.Coord3D_field_0x08 + v7; /*0x4599b9*/
        v9 = (ObjectClass *)ParticleSystemClass::Constructor(v6, v3, &v33, 0, this, &g_BuildingClassPool, 0); /*0x4599bd*/
      }
      else
      {
        v9 = 0; /*0x4599c4*/
      }
      ObjectClass::SetMember59(v9, v31); /*0x4599cd*/
    }
    RefinerySmokeOffsetTwo = this->Type->?; /*0x4599de*/
    *(_DWORD *)v32.__pad_0 = *RefinerySmokeOffsetTwo; /*0x4599e6*/
    v11 = RefinerySmokeOffsetTwo[1]; /*0x4599ec*/
    v32.Coord3D_field_0x04 = v11; /*0x4599ef*/
    v12 = RefinerySmokeOffsetTwo[2]; /*0x4599f3*/
    v32.Coord3D_field_0x08 = v12; /*0x4599f6*/
    if ( (*(_DWORD *)v32.__pad_0 != g_BuildingClassPool || v11 != dword_89C84C || v12 != dword_89C850) /*0x459a15*/
      && !(unsigned __int8)Coord3D::Equals(&v32, &dword_89C870) )
    {
      v13 = (int *)__2_YAPAXI_Z(0x100u); /*0x459a23*/
      if ( v13 ) /*0x459a2d*/
      {
        v14 = this->?[2]; /*0x459a44*/
        v15 = v32.Coord3D_field_0x04 + this->?[1]; /*0x459a51*/
        v33 = *(_DWORD *)v32.__pad_0 + this->?[0]; /*0x459a57*/
        v34 = v15; /*0x459a65*/
        v35 = v32.Coord3D_field_0x08 + v14; /*0x459a69*/
        v16 = (ObjectClass *)ParticleSystemClass::Constructor(v13, v3, &v33, 0, this, &g_BuildingClassPool, 0); /*0x459a6d*/
      }
      else
      {
        v16 = 0; /*0x459a74*/
      }
      ObjectClass::SetMember59(v16, v31); /*0x459a7d*/
    }
    RefinerySmokeOffsetThree = this->Type->?; /*0x459a8e*/
    *(_DWORD *)v32.__pad_0 = *RefinerySmokeOffsetThree; /*0x459a96*/
    v18 = RefinerySmokeOffsetThree[1]; /*0x459a9c*/
    v32.Coord3D_field_0x04 = v18; /*0x459a9f*/
    v19 = RefinerySmokeOffsetThree[2]; /*0x459aa3*/
    v32.Coord3D_field_0x08 = v19; /*0x459aa6*/
    if ( (*(_DWORD *)v32.__pad_0 != g_BuildingClassPool || v18 != dword_89C84C || v19 != dword_89C850) /*0x459ac5*/
      && !(unsigned __int8)Coord3D::Equals(&v32, &dword_89C870) )
    {
      v20 = (int *)__2_YAPAXI_Z(0x100u); /*0x459ad3*/
      if ( v20 ) /*0x459add*/
      {
        v21 = this->?[2]; /*0x459af4*/
        v22 = v32.Coord3D_field_0x04 + this->?[1]; /*0x459b01*/
        v33 = *(_DWORD *)v32.__pad_0 + this->?[0]; /*0x459b07*/
        v34 = v22; /*0x459b15*/
        v35 = v32.Coord3D_field_0x08 + v21; /*0x459b19*/
        v23 = (ObjectClass *)ParticleSystemClass::Constructor(v20, v3, &v33, 0, this, &g_BuildingClassPool, 0); /*0x459b1d*/
      }
      else
      {
        v23 = 0; /*0x459b24*/
      }
      ObjectClass::SetMember59(v23, v31); /*0x459b2d*/
    }
    RefinerySmokeOffsetFour = this->Type->?; /*0x459b3e*/
    result = *RefinerySmokeOffsetFour; /*0x459b44*/
    *(_DWORD *)v32.__pad_0 = result; /*0x459b46*/
    v25 = RefinerySmokeOffsetFour[1]; /*0x459b4c*/
    v32.Coord3D_field_0x04 = v25; /*0x459b4f*/
    v26 = RefinerySmokeOffsetFour[2]; /*0x459b53*/
    v32.Coord3D_field_0x08 = v26; /*0x459b56*/
    if ( result != g_BuildingClassPool || v25 != dword_89C84C || v26 != dword_89C850 ) /*0x459b6a*/
    {
      result = Coord3D::Equals(&v32, &dword_89C870); /*0x459b79*/
      if ( !(_BYTE)result ) /*0x459b80*/
      {
        v27 = (int *)__2_YAPAXI_Z(0x100u); /*0x459b87*/
        if ( v27 ) /*0x459b91*/
        {
          v28 = this->?[2]; /*0x459ba8*/
          v29 = v32.Coord3D_field_0x04 + this->?[1]; /*0x459bb5*/
          v33 = *(_DWORD *)v32.__pad_0 + this->?[0]; /*0x459bbb*/
          v34 = v29; /*0x459bc9*/
          v35 = v32.Coord3D_field_0x08 + v28; /*0x459bcd*/
          v30 = (ObjectClass *)ParticleSystemClass::Constructor(v27, v3, &v33, 0, this, &g_BuildingClassPool, 0); /*0x459bd1*/
          return ObjectClass::SetMember59(v30, v31); /*0x459bdd*/
        }
        else
        {
          return ObjectClass::SetMember59(0, v31); /*0x459bf3*/
        }
      }
    }
  }
  return result; /*0x459be2*/
}



// ==== 0x00459C00  BuildingClass::IsMassSelectable  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::IsMassSelectable(BuildingClass *this)
{
  int result; // eax

  LOBYTE(result) = BuildingClass::Is1x1AndUndeployable_BuildingMassSelectable((BuildingClass *)this->Type); /*0x459c09*/
  if ( (_BYTE)result ) /*0x459c10*/
    LOBYTE(result) = TechnoClass::CanMoveToCell((TechnoClass *)this); /*0x459c16*/
  return result; /*0x459c12*/
}



// ==== 0x00459C20  BuildingClass::ProcessUpgradeTargeting  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ProcessUpgradeTargeting(BuildingClass *this)
{
  AbstractClass *focus; // ecx
  AbstractClass *v3; // esi
  unsigned int v4; // eax
  BuildingTypeClass *Type; // eax
  int VoiceHarvest; // eax
  int result; // eax

  focus = this->?; /*0x459c23*/
  if ( focus && (*((int (__thiscall **)(AbstractClass *))focus->vtable0 + 11))(focus) == 11 )
  {
    v3 = this->?; /*0x459c38*/
    v4 = v3 ? ((*((int (__thiscall **)(AbstractClass *))v3->vtable0 + 11))(this->?) == 11 ? (unsigned int)v3 : 0) : 0;
    if ( *(_DWORD *)(v4 + 236) == 5 ) /*0x459c62*/
    {
      Type = this->Type; /*0x459c64*/
      if ( Type->? ) /*0x459c6a*/
      {
        if ( Type->? ) /*0x459c74*/
        {
          VoiceHarvest = Type->?; /*0x459c7e*/
          if ( VoiceHarvest != -1 ) /*0x459c87*/
            return (*((int (__thiscall **)(BuildingClass *, int))this->TechnoClass + 213))(this, VoiceHarvest); /*0x459c8e*/
        }
      }
    }
  }
  TechnoClass::PickAlternateTarget((TechnoClass *)this); /*0x459c98*/
  return result; /*0x459c94*/
}



// ==== 0x00459CA0  ObjectClass::ProcessDataCellClass  this=ObjectClass  sig=csp ====
char __thiscall ProcessDataCellClass(TechnoClass *this)
{
  _WORD *v1; // esi
  int v2; // edi
  __int16 v3; // bx
  _WORD *v4; // eax
  __int16 v5; // dx
  bool *v6; // eax
  __int16 v8[2]; // [esp+Ch] [ebp-8h] BYREF
  int v9; // [esp+10h] [ebp-4h] BYREF

  v1 = *(_WORD **)(*((_DWORD *)this + 328) + 3796); /*0x459cad*/
  v2 = *(_DWORD *)(*(int (__thiscall **)(TechnoClass *, int *))(this->vtable0 + 440))(this, &v9); /*0x459cbf*/
  v9 = v2; /*0x459cc3*/
  if ( v1 ) /*0x459cc7*/
  {
    v3 = HIWORD(v9); /*0x459ccd*/
    while ( *v1 != 0x7FFF || v1[1] != 0x7FFF ) /*0x459cdf*/
    {
      v4 = v1; /*0x459ce5*/
      v1 += 2; /*0x459cea*/
      v5 = v3 + v4[1]; /*0x459cf4*/
      LOWORD(v9) = *v4 + v2; /*0x459cf7*/
      HIWORD(v9) = v5; /*0x459d00*/
      *(_DWORD *)v8 = v9; /*0x459d0f*/
      if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, v8) ) /*0x459d13*/
      {
        if ( !*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v8) + 57) ) /*0x459d2b*/
        {
          v6 = (bool *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v8); /*0x459d4d*/
          if ( (unsigned __int8)Cell::IsBuildable(v6, 0, 0, 0, -1, 0, -1, 1) ) /*0x459d54*/
            return 1; /*0x459d69*/
        }
      }
    }
  }
  return 0; /*0x459d61*/
}



// ==== 0x00459D80  TechnoClass::StubReturnFalse  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::StubReturnFalse(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x459d80*/
  return result; /*0x459d82*/
}



// ==== 0x00459D90  TechnoClass::MissionStubReturnZero4  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::MissionStubReturnZero4(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 1; /*0x459d90*/
  return result; /*0x459d92*/
}



// ==== 0x00459DA0  TechnoClass::MissionStubReturnZero5  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::MissionStubReturnZero5(TechnoClass *this)
{
  return 2; /*0x459da5*/
}



// ==== 0x00459DB0  TechnoClass::ClearLimpetCheck  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::ClearLimpetCheck(TechnoClass *this)
{
  _DWORD *v2; // [esp+4h] [ebp+4h]

  *v2 = g_TerrainTypeTable; /*0x459dba*/
  return (int)v2; /*0x459dbc*/
}



// ==== 0x00459DC0  TechnoClass::COMStub_Return0_190  this=TechnoClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_190(TechnoClass *this)
{
  int result; // eax

  return result; /*0x459dc0*/
}



// ==== 0x00459DD0  TechnoClass::StubReturnFalse2  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::StubReturnFalse2(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x459dd0*/
  return result; /*0x459dd2*/
}



// ==== 0x00459DE0  TechnoClass::COMStub_Return0_205  this=TechnoClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_205(TechnoClass *this)
{
  int result; // eax

  return result; /*0x459de0*/
}



// ==== 0x00459DF0  TechnoClass::StubReturnFalse3  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::StubReturnFalse3(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x459df0*/
  return result; /*0x459df2*/
}



// ==== 0x00459E00  TechnoClass::StubReturnFalse4  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::StubReturnFalse4(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x459e00*/
  return result; /*0x459e02*/
}



// ==== 0x00459E10  TechnoClass::StubReturnFalse10  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::StubReturnFalse10(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x459e10*/
  return result; /*0x459e12*/
}



// ==== 0x00459E20  TechnoClass::StubReturnFalse11  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::StubReturnFalse11(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x459e20*/
  return result; /*0x459e22*/
}



// ==== 0x00459E30  TechnoClass::StubReturnFalse12  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::StubReturnFalse12(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x459e30*/
  return result; /*0x459e32*/
}



// ==== 0x00459E40  TechnoClass::StubReturnFalse13  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::StubReturnFalse13(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x459e40*/
  return result; /*0x459e42*/
}



// ==== 0x00459E50  TechnoClass::StubReturnFalse14  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::StubReturnFalse14(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x459e50*/
  return result; /*0x459e52*/
}



// ==== 0x00459E60  TechnoClass::COMStub_Return0_270  this=TechnoClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_270(TechnoClass *this)
{
  int result; // eax

  return result; /*0x459e60*/
}



// ==== 0x00459E70  BuildingClass::Mission_Guard  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::Mission_Guard(BuildingClass *this)
{
  return 1824; /*0x459e75*/
}



// ==== 0x00459E80  BuildingClass::Destroyed  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::Destroyed(BuildingClass *this)
{
  _DWORD *v2; // [esp+8h] [ebp+8h]

  if ( !v2 ) /*0x459e86*/
    return -2147467261; /*0x459e88*/
  *v2 = 237448646; /*0x459e96*/
  v2[1] = 298949647; /*0x459e9e*/
  v2[2] = -1610610249; /*0x459ea7*/
  v2[3] = unk_7E96AC; /*0x459eb0*/
  return 0; /*0x459e8d*/
}



// ==== 0x00459EC0  BuildingClass::Mission_Construction  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::Mission_Construction(BuildingClass *this)
{
  return 6; /*0x459ec5*/
}



// ==== 0x00459ED0  BuildingClass::GetTypeField60  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetTypeField60(BuildingClass *this)
{
  return (int)this->Type->?; /*0x459ed9*/
}



// ==== 0x00459EE0  BuildingClass::GetTypePtr  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetTypePtr(BuildingClass *this)
{
  return (int)this->Type; /*0x459ee6*/
}



// ==== 0x00459EF0  BuildingClass::GetBuildCoordsAdjusted  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetBuildCoordsAdjusted(BuildingClass *this)
{
  int *location; // edx
  int v2; // eax
  int v3; // ecx
  int v4; // esi
  int v6; // edx
  int *v7; // [esp+Ch] [ebp+4h]

  location = this->?; /*0x459ef7*/
  v2 = this->?[0]; /*0x459efa*/
  v3 = this->?[1]; /*0x459efc*/
  v4 = v2 - 128; /*0x459eff*/
  v6 = location[2]; /*0x459f09*/
  *v7 = v4; /*0x459f0e*/
  v7[1] = v3 - 128; /*0x459f10*/
  v7[2] = v6; /*0x459f13*/
  return (int)v7; /*0x459f16*/
}



// ==== 0x00459F20  BuildingClass::ScalarDtor  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ScalarDtor(BuildingClass *this)
{
  char v3; // [esp+8h] [ebp+4h]

  BuildingClass::Dtor(this); /*0x459f23*/
  if ( (v3 & 1) != 0 ) /*0x459f2d*/
    __3_YAXPAX_Z(this); /*0x459f30*/
  return (int)this; /*0x459f3a*/
}



// ==== 0x00459F40  IsObjectTypeBuildingType  this=BuildingClass  sig=ida-proto ====
int __fastcall ObjectType_IsBuildingType(int a1)
{
  if ( a1 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 44))(a1) == 6 ? a1 : 0;
  else
    return 0; /*0x459f47*/
}



// ==== 0x00459F60  Coord3D::Equals  this=Coord3D  sig=csp ====
int __thiscall Coord3D::Equals(Coord3D *this, _DWORD *a2)
{
  return *(_DWORD *)this->__pad_0 == *a2 && this->Coord3D_field_0x04 == a2[1] && this->Coord3D_field_0x08 == a2[2]; /*0x459f84*/
}



// ==== 0x00459F90  _DynamicVectorClass_PBVParticleSystemTypeClass::GetClassIdentifier  this=DynamicVector  sig=csp ====
void __thiscall TypeList_cptr_ParticleSystemTypeClass::GetClassIdentifier(
        _DynamicVectorClass_PBVParticleSystemTypeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x459f96*/
  this->m_10 = 0; /*0x459f99*/
  if ( v2 && BYTE1(this->m_C) ) /*0x459fa0*/
  {
    __3_YAXPAX_Z(v2); /*0x459fa6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x459fae*/
  }
  BYTE1(this->m_C) = 0; /*0x459fb1*/
  this->m_8 = 0; /*0x459fb4*/
}



// ==== 0x00459FC0  _DynamicVectorClass_PBVParticleSystemTypeClass::LoadTypeData  this=DynamicVector  sig=csp ====
unsigned int __thiscall TypeList_cptr_ParticleSystemTypeClass::LoadTypeData(
        _DynamicVectorClass_PBVParticleSystemTypeClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x459fc0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x459fd5*/
  else
    return 0; /*0x459fc7*/
}



// ==== 0x00459FE0  _VectorClass_PBVParticleSystemTypeClass::GetIndex  this=VectorClass  sig=csp ====
int __thiscall TypeList_Particle::GetIndex(_VectorClass_PBVParticleSystemTypeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x459fea*/
}



// ==== 0x00459FF0  ?$DynamicVectorClass@PAVInfantryClass@@::initBuildingData  this=DynamicVector  sig=csp ====
void __thiscall BuildingClass::sub_459FF0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x459ff6*/
  *(_DWORD *)(this + 16) = 0; /*0x459ff9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x45a000*/
  {
    __3_YAXPAX_Z(v2); /*0x45a006*/
    *(_DWORD *)(this + 4) = 0; /*0x45a00e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x45a011*/
  *(_DWORD *)(this + 8) = 0; /*0x45a014*/
}



// ==== 0x0045A020  ?$DynamicVectorClass@PAVInfantryClass@@::updateFactoryProduction  this=DynamicVector  sig=csp ====
unsigned int __thiscall BuildingClass::sub_45A020(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x45a020*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x45a035*/
  else
    return 0; /*0x45a027*/
}



// ==== 0x0045A040  _VectorClass_PAVInfantryClass::Get  this=VectorClass  sig=csp ====
int __thiscall FootClass::Get(_VectorClass_PAVInfantryClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x45a04a*/
}



// ==== 0x0045A050  Stream::GetChecked  this=Stream  sig=csp ====
int __thiscall Stream::GetChecked(Stream *this)
{
  if ( !this->m_Stream ) /*0x45a053*/
    WinAPI::Wrapper(-2147467261); /*0x45a05d*/
  return (int)this->m_Stream->__pad_0; /*0x45a064*/
}



// ==== 0x0045A070  _DynamicVectorClass_PAVFoggedObjectClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_FoggedObjectClass::Destroy(_DynamicVectorClass_PAVFoggedObjectClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x45a076*/
  this->m_10 = 0; /*0x45a079*/
  if ( v2 && BYTE1(this->m_C) ) /*0x45a080*/
  {
    __3_YAXPAX_Z(v2); /*0x45a086*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x45a08e*/
  }
  BYTE1(this->m_C) = 0; /*0x45a091*/
  this->m_8 = 0; /*0x45a094*/
}



// ==== 0x0045A0A0  _DynamicVectorClass_PAVFoggedObjectClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_FoggedObjectClass::GetItemIndex(
        _DynamicVectorClass_PAVFoggedObjectClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x45a0a0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x45a0b5*/
  else
    return 0; /*0x45a0a7*/
}



// ==== 0x0045A0C0  _VectorClass_PAVFoggedObjectClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_FoggedObjectClass::Get(_VectorClass_PAVFoggedObjectClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x45a0ca*/
}



// ==== 0x0045A0D0  _DynamicVectorClass_PAVReestablish::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_Reestablish::Destroy(_DynamicVectorClass_PAVReestablish *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x45a0d6*/
  this->m_10 = 0; /*0x45a0d9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x45a0e0*/
  {
    __3_YAXPAX_Z(v2); /*0x45a0e6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x45a0ee*/
  }
  BYTE1(this->m_C) = 0; /*0x45a0f1*/
  this->m_8 = 0; /*0x45a0f4*/
}



// ==== 0x0045A100  _DynamicVectorClass_PAVReestablish::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_Reestablish::GetItemIndex(_DynamicVectorClass_PAVReestablish *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x45a100*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x45a115*/
  else
    return 0; /*0x45a107*/
}



// ==== 0x0045A120  _VectorClass_PAVReestablish::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_Reestablish::Clear(_VectorClass_PAVReestablish *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x45a12a*/
}



// ==== 0x0045A130  Rect::Construct  this=Rect  sig=csp ====
_DWORD *__thiscall Rect::Construct(Rect *this, _DWORD *a2, int a3, int a4)
{
  this->X = *a2; /*0x45a138*/
  this->Y = a2[1]; /*0x45a141*/
  this->Width = a3; /*0x45a148*/
  this->Height = a4; /*0x45a14b*/
  return &this->X; /*0x45a14e*/
}



// ==== 0x0045A160  ObjectClass::Release2COM  this=ObjectClass  sig=csp ====
int __thiscall Release2COM(ObjectClass *this)
{
  int result; // eax

  result = (int)this->AbstractClass; /*0x45a160*/
  if ( this->AbstractClass ) /*0x45a160*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x45a169*/
  return result; /*0x45a16c*/
}



// ==== 0x0045A170  CellClass::SetField2C  this=CellClass  sig=csp ====
int __thiscall CellClass::SetField2C(CellClass *this)
{
  int result; // eax

  result = this->mapCoords[0]; /*0x45a170*/
  if ( this->mapCoords[0] ) /*0x45a170*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 4))(result); /*0x45a179*/
  return result; /*0x45a17c*/
}



// ==== 0x0045A180  _VectorClass_PBVParticleSystemTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall TypeList_Particle::AddRef(_VectorClass_PBVParticleSystemTypeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x45a182*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x45a18d*/
  {
    v3 = 0; /*0x45a18f*/
    if ( m_8 <= 0 ) /*0x45a193*/
      return 1; /*0x45a1b3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x45a195*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x45a19b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x45a1a4*/
    {
      ++v3; /*0x45a1a6*/
      ++v4; /*0x45a1a7*/
      if ( v3 >= m_8 ) /*0x45a1ac*/
        return 1; /*0x45a1ac*/
    }
  }
  return 0; /*0x45a1ae*/
}



// ==== 0x0045A1C0  _VectorClass_PBVParticleSystemTypeClass::Remove  this=VectorClass  sig=csp ====
char __thiscall TypeList_Particle::Remove(_VectorClass_PBVParticleSystemTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x45a1cc*/
  {
    LOBYTE(this->m_C) = 0; /*0x45a1d6*/
    if ( a3 ) /*0x45a1dc*/
      v4 = a3; /*0x45a1f2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x45a1ee*/
    LOBYTE(this->m_C) = 1; /*0x45a1f6*/
    if ( v4 ) /*0x45a1fa*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x45a205*/
      {
        m_8 = this->m_8; /*0x45a20c*/
        if ( a2 < m_8 ) /*0x45a211*/
          m_8 = a2; /*0x45a213*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x45a219*/
          ++i; /*0x45a21e*/
        if ( BYTE1(this->m_C) ) /*0x45a22b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x45a236*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x45a23e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x45a247*/
      this->m_8 = a2; /*0x45a24f*/
      BYTE1(this->m_C) = a3 == 0; /*0x45a252*/
      return 1; /*0x45a258*/
    }
    else
    {
      return 0; /*0x45a1ff*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBVParticleSystemTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x45a262*/
    return 1; /*0x45a268*/
  }
}



// ==== 0x0045A270  ?$VectorClass@PBVParticleSystemTypeClass@@::Cleanup  this=VectorClass  sig=csp ====
void __thiscall VectorClass_Cleanup(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x45a27d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x45a283*/
    *(_DWORD *)(this + 4) = 0; /*0x45a28b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x45a28e*/
  *(_DWORD *)(this + 8) = 0; /*0x45a291*/
}



// ==== 0x0045A2A0  _VectorClass_PBVParticleSystemTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall TypeList_Particle::GetSize(_VectorClass_PBVParticleSystemTypeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x45a2a0*/
    return 0; /*0x45a2a8*/
  m_8 = this->m_8; /*0x45a2ae*/
  result = 0; /*0x45a2b1*/
  if ( m_8 <= 0 ) /*0x45a2b5*/
    return -1; /*0x45a2cc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x45a2bb*/
  {
    if ( ++result >= m_8 ) /*0x45a2ca*/
      return -1; /*0x45a2ca*/
  }
  return result; /*0x45a2aa*/
}



// ==== 0x0045A2E0  _VectorClass_PBVParticleSystemTypeClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall TypeList_Particle::GetCapacity(_VectorClass_PBVParticleSystemTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x45a2e0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x45a2f5*/
  else
    return 0; /*0x45a2e7*/
}



// ==== 0x0045A300  _DynamicVectorClass_PBVParticleSystemTypeClass::Add  this=DynamicVector  sig=csp ====
char __thiscall TypeList_cptr_ParticleSystemTypeClass::Add(
        _DynamicVectorClass_PBVParticleSystemTypeClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x45a30c*/
  {
    LOBYTE(this->m_C) = 0; /*0x45a312*/
    if ( a3 ) /*0x45a318*/
      v4 = a3; /*0x45a32e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x45a32a*/
    LOBYTE(this->m_C) = 1; /*0x45a332*/
    if ( !v4 ) /*0x45a336*/
      return 0; /*0x45a3aa*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x45a338*/
    {
      m_8 = this->m_8; /*0x45a33f*/
      if ( a2 < m_8 ) /*0x45a344*/
        m_8 = a2; /*0x45a346*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x45a34c*/
        ++i; /*0x45a351*/
      if ( BYTE1(this->m_C) ) /*0x45a35e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x45a369*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x45a371*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x45a37a*/
    this->m_8 = a2; /*0x45a382*/
    BYTE1(this->m_C) = a3 == 0; /*0x45a385*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PBVParticleSystemTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x45a38e*/
  }
  v7 = this->m_8; /*0x45a391*/
  if ( v7 < this->m_10 ) /*0x45a399*/
    this->m_10 = v7; /*0x45a39b*/
  return 1; /*0x45a39e*/
}



// ==== 0x0045A3B0  _DynamicVectorClass_PBVParticleSystemTypeClass::Remove  this=DynamicVector  sig=csp ====
int __thiscall TypeList_cptr_ParticleSystemTypeClass::Remove(
        _DynamicVectorClass_PBVParticleSystemTypeClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x45a3b0*/
  result = 0; /*0x45a3b3*/
  if ( m_10 <= 0 ) /*0x45a3b8*/
    return -1; /*0x45a3cf*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x45a3be*/
  {
    if ( ++result >= m_10 ) /*0x45a3cd*/
      return -1; /*0x45a3cd*/
  }
  return result; /*0x45a3d2*/
}



// ==== 0x0045A3E0  _VectorClass_PAVInfantryClass::Add  this=VectorClass  sig=csp ====
char __thiscall FootClass::Add(_VectorClass_PAVInfantryClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x45a3e2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x45a3ed*/
  {
    v3 = 0; /*0x45a3ef*/
    if ( m_8 <= 0 ) /*0x45a3f3*/
      return 1; /*0x45a413*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x45a3f5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x45a3fb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x45a404*/
    {
      ++v3; /*0x45a406*/
      ++v4; /*0x45a407*/
      if ( v3 >= m_8 ) /*0x45a40c*/
        return 1; /*0x45a40c*/
    }
  }
  return 0; /*0x45a40e*/
}



// ==== 0x0045A420  ?$VectorClass@PAVInfantryClass@@::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_InfantryClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x45a42c*/
  {
    this->IsInitialized = 0; /*0x45a436*/
    if ( a3 ) /*0x45a43c*/
      v4 = a3; /*0x45a452*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x45a44e*/
    this->IsInitialized = 1; /*0x45a456*/
    if ( v4 ) /*0x45a45a*/
    {
      if ( this->Items ) /*0x45a465*/
      {
        v6 = this->Capacity; /*0x45a46c*/
        if ( a2 < v6 ) /*0x45a471*/
          v6 = a2; /*0x45a473*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x45a479*/
          ++i; /*0x45a47e*/
        if ( this->IsAllocated ) /*0x45a48b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x45a496*/
          this->Items = 0; /*0x45a49e*/
        }
      }
      this->Items = v4; /*0x45a4a7*/
      this->Capacity = a2; /*0x45a4af*/
      this->IsAllocated = a3 == 0; /*0x45a4b2*/
      return 1; /*0x45a4b8*/
    }
    else
    {
      return 0; /*0x45a45f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x45a4c2*/
    return 1; /*0x45a4c8*/
  }
}



// ==== 0x0045A4D0  _VectorClass_PAVInfantryClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_InfantryClass::Remove(_VectorClass_PAVInfantryClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && this->m_D[0] ) /*0x45a4dd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x45a4e3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x45a4eb*/
  }
  this->m_D[0] = 0; /*0x45a4ee*/
  this->m_8 = 0; /*0x45a4f1*/
}



// ==== 0x0045A500  ?$VectorClass@PAVInfantryClass@@::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_InfantryClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x45a500*/
    return 0; /*0x45a508*/
  v3 = *(_DWORD *)(this + 8); /*0x45a50e*/
  result = 0; /*0x45a511*/
  if ( v3 <= 0 ) /*0x45a515*/
    return -1; /*0x45a52c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x45a51b*/
  {
    if ( ++result >= v3 ) /*0x45a52a*/
      return -1; /*0x45a52a*/
  }
  return result; /*0x45a50a*/
}



// ==== 0x0045A540  ?$VectorClass@PAVInfantryClass@@::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_InfantryClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x45a540*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x45a555*/
  else
    return 0; /*0x45a547*/
}



// ==== 0x0045A560  ?$DynamicVectorClass@PAVInfantryClass@@::ResizeOccupiedCellList  this=DynamicVector  sig=csp ====
char __thiscall BuildingClass::sub_45A560(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x45a56c*/
  {
    this->IsInitialized = 0; /*0x45a572*/
    if ( a3 ) /*0x45a578*/
      v4 = a3; /*0x45a58e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x45a58a*/
    this->IsInitialized = 1; /*0x45a592*/
    if ( !v4 ) /*0x45a596*/
      return 0; /*0x45a60a*/
    if ( this->Items ) /*0x45a598*/
    {
      v5 = this->q008; /*0x45a59f*/
      if ( a2 < v5 ) /*0x45a5a4*/
        v5 = a2; /*0x45a5a6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x45a5ac*/
        ++i; /*0x45a5b1*/
      if ( this->IsAllocated ) /*0x45a5be*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x45a5c9*/
        this->Items = 0; /*0x45a5d1*/
      }
    }
    this->Items = v4; /*0x45a5da*/
    this->q008 = a2; /*0x45a5e2*/
    this->IsAllocated = a3 == 0; /*0x45a5e5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x45a5ee*/
  }
  v7 = this->q008; /*0x45a5f1*/
  if ( v7 < this->Items ) /*0x45a5f9*/
    this->Items = v7; /*0x45a5fb*/
  return 1; /*0x45a5fe*/
}



// ==== 0x0045A610  ?$DynamicVectorClass@PAVInfantryClass@@::FindInPointerArray  this=DynamicVector  sig=csp ====
int __thiscall BuildingClass::sub_45A610(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x45a610*/
  result = 0; /*0x45a613*/
  if ( v2 <= 0 ) /*0x45a618*/
    return -1; /*0x45a62f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x45a61e*/
  {
    if ( ++result >= v2 ) /*0x45a62d*/
      return -1; /*0x45a62d*/
  }
  return result; /*0x45a632*/
}



// ==== 0x0045A640  _VectorClass_PAVFoggedObjectClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_FoggedObjectClass::Add(_VectorClass_PAVFoggedObjectClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x45a642*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x45a64d*/
  {
    v3 = 0; /*0x45a64f*/
    if ( m_8 <= 0 ) /*0x45a653*/
      return 1; /*0x45a673*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x45a655*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x45a65b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x45a664*/
    {
      ++v3; /*0x45a666*/
      ++v4; /*0x45a667*/
      if ( v3 >= m_8 ) /*0x45a66c*/
        return 1; /*0x45a66c*/
    }
  }
  return 0; /*0x45a66e*/
}



// ==== 0x0045A680  _DynamicVectorClass_PAVFoggedObjectClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_FoggedObjectClass::SetCapacity(
        _DynamicVectorClass_PAVFoggedObjectClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x45a68c*/
  {
    LOBYTE(this->m_C) = 0; /*0x45a692*/
    if ( a3 ) /*0x45a698*/
      v4 = a3; /*0x45a6ae*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x45a6aa*/
    LOBYTE(this->m_C) = 1; /*0x45a6b2*/
    if ( !v4 ) /*0x45a6b6*/
      return 0; /*0x45a72a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x45a6b8*/
    {
      m_8 = this->m_8; /*0x45a6bf*/
      if ( a2 < m_8 ) /*0x45a6c4*/
        m_8 = a2; /*0x45a6c6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x45a6cc*/
        ++i; /*0x45a6d1*/
      if ( BYTE1(this->m_C) ) /*0x45a6de*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x45a6e9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x45a6f1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x45a6fa*/
    this->m_8 = a2; /*0x45a702*/
    BYTE1(this->m_C) = a3 == 0; /*0x45a705*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVFoggedObjectClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x45a70e*/
  }
  v7 = this->m_8; /*0x45a711*/
  if ( v7 < this->m_10 ) /*0x45a719*/
    this->m_10 = v7; /*0x45a71b*/
  return 1; /*0x45a71e*/
}



// ==== 0x0045A730  _DynamicVectorClass_PAVFoggedObjectClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_FoggedObjectClass::FindItemIndex(
        _DynamicVectorClass_PAVFoggedObjectClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x45a730*/
  result = 0; /*0x45a733*/
  if ( m_10 <= 0 ) /*0x45a738*/
    return -1; /*0x45a74f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x45a73e*/
  {
    if ( ++result >= m_10 ) /*0x45a74d*/
      return -1; /*0x45a74d*/
  }
  return result; /*0x45a752*/
}



// ==== 0x0045A760  _VectorClass_PAVReestablish::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_Reestablish::AddRef(_VectorClass_PAVReestablish *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x45a762*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x45a76d*/
  {
    v3 = 0; /*0x45a76f*/
    if ( m_8 <= 0 ) /*0x45a773*/
      return 1; /*0x45a793*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x45a775*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x45a77b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x45a784*/
    {
      ++v3; /*0x45a786*/
      ++v4; /*0x45a787*/
      if ( v3 >= m_8 ) /*0x45a78c*/
        return 1; /*0x45a78c*/
    }
  }
  return 0; /*0x45a78e*/
}



// ==== 0x0045A7A0  _VectorClass_PAVReestablish::Remove  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_Reestablish::Remove(_VectorClass_PAVReestablish *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x45a7ac*/
  {
    LOBYTE(this->m_C) = 0; /*0x45a7b6*/
    if ( a3 ) /*0x45a7bc*/
      v4 = a3; /*0x45a7d2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x45a7ce*/
    LOBYTE(this->m_C) = 1; /*0x45a7d6*/
    if ( v4 ) /*0x45a7da*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x45a7e5*/
      {
        m_8 = this->m_8; /*0x45a7ec*/
        if ( a2 < m_8 ) /*0x45a7f1*/
          m_8 = a2; /*0x45a7f3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x45a7f9*/
          ++i; /*0x45a7fe*/
        if ( BYTE1(this->m_C) ) /*0x45a80b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x45a816*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x45a81e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x45a827*/
      this->m_8 = a2; /*0x45a82f*/
      BYTE1(this->m_C) = a3 == 0; /*0x45a832*/
      return 1; /*0x45a838*/
    }
    else
    {
      return 0; /*0x45a7df*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVReestablish *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x45a842*/
    return 1; /*0x45a848*/
  }
}



// ==== 0x0045A850  _VectorClass_PAVReestablish::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_Reestablish::ddtor(_VectorClass_PAVReestablish *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x45a85d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x45a863*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x45a86b*/
  }
  BYTE1(this->m_C) = 0; /*0x45a86e*/
  this->m_8 = 0; /*0x45a871*/
}



// ==== 0x0045A880  _VectorClass_PAVReestablish::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_Reestablish::GetSize(_VectorClass_PAVReestablish *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x45a880*/
    return 0; /*0x45a888*/
  m_8 = this->m_8; /*0x45a88e*/
  result = 0; /*0x45a891*/
  if ( m_8 <= 0 ) /*0x45a895*/
    return -1; /*0x45a8ac*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x45a89b*/
  {
    if ( ++result >= m_8 ) /*0x45a8aa*/
      return -1; /*0x45a8aa*/
  }
  return result; /*0x45a88a*/
}



// ==== 0x0045A8C0  _VectorClass_PAVReestablish::Get  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_Reestablish::Get(_VectorClass_PAVReestablish *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x45a8c0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x45a8d5*/
  else
    return 0; /*0x45a8c7*/
}



// ==== 0x0045A8E0  _DynamicVectorClass_PAVReestablish::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_Reestablish::SetCapacity(_DynamicVectorClass_PAVReestablish *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x45a8ec*/
  {
    LOBYTE(this->m_C) = 0; /*0x45a8f2*/
    if ( a3 ) /*0x45a8f8*/
      v4 = a3; /*0x45a90e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x45a90a*/
    LOBYTE(this->m_C) = 1; /*0x45a912*/
    if ( !v4 ) /*0x45a916*/
      return 0; /*0x45a98a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x45a918*/
    {
      m_8 = this->m_8; /*0x45a91f*/
      if ( a2 < m_8 ) /*0x45a924*/
        m_8 = a2; /*0x45a926*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x45a92c*/
        ++i; /*0x45a931*/
      if ( BYTE1(this->m_C) ) /*0x45a93e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x45a949*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x45a951*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x45a95a*/
    this->m_8 = a2; /*0x45a962*/
    BYTE1(this->m_C) = a3 == 0; /*0x45a965*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVReestablish *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x45a96e*/
  }
  v7 = this->m_8; /*0x45a971*/
  if ( v7 < this->m_10 ) /*0x45a979*/
    this->m_10 = v7; /*0x45a97b*/
  return 1; /*0x45a97e*/
}



// ==== 0x0045A990  _DynamicVectorClass_PAVReestablish::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_Reestablish::FindItemIndex(_DynamicVectorClass_PAVReestablish *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x45a990*/
  result = 0; /*0x45a993*/
  if ( m_10 <= 0 ) /*0x45a998*/
    return -1; /*0x45a9af*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x45a99e*/
  {
    if ( ++result >= m_10 ) /*0x45a9ad*/
      return -1; /*0x45a9ad*/
  }
  return result; /*0x45a9b2*/
}



// ==== 0x0045A9C0  _VectorClass_PBVParticleSystemTypeClass::Add  this=VectorClass  sig=csp ====
_DWORD *__thiscall TypeList_Particle::Add(_VectorClass_PBVParticleSystemTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x45a9c3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ParticleSystemTypeClass const *>::`vftable'; /*0x45a9c6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x45a9d0*/
  {
    __3_YAXPAX_Z(v3); /*0x45a9d8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x45a9e0*/
  }
  BYTE1(this->m_C) = 0; /*0x45a9eb*/
  this->m_8 = 0; /*0x45a9f1*/
  if ( (a2 & 1) != 0 ) /*0x45a9f8*/
    __3_YAXPAX_Z(this); /*0x45a9fb*/
  return this->__pad_0; /*0x45aa05*/
}



// ==== 0x0045AA10  _DynamicVectorClass_PBVParticleSystemTypeClass::Constructor  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_Reestablish::Constructor(
        _DynamicVectorClass_PBVParticleSystemTypeClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x45aa13*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ParticleSystemTypeClass const *>::`vftable'; /*0x45aa16*/
  if ( v3 && BYTE1(this->m_C) ) /*0x45aa20*/
  {
    __3_YAXPAX_Z(v3); /*0x45aa28*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x45aa30*/
  }
  BYTE1(this->m_C) = 0; /*0x45aa3b*/
  this->m_8 = 0; /*0x45aa41*/
  if ( (a2 & 1) != 0 ) /*0x45aa48*/
    __3_YAXPAX_Z(this); /*0x45aa4b*/
  return this->__pad_0; /*0x45aa55*/
}



// ==== 0x0045AA60  ?$VectorClass@PAVInfantryClass@@::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_InfantryClass::_vt00(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x45aa63*/
  *Block = &VectorClass<InfantryClass *>::`vftable'; /*0x45aa66*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x45aa70*/
  {
    __3_YAXPAX_Z(v3); /*0x45aa78*/
    *(Block + 1) = 0; /*0x45aa80*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x45aa8b*/
  *(Block + 2) = 0; /*0x45aa91*/
  if ( (a2 & 1) != 0 ) /*0x45aa98*/
    __3_YAXPAX_Z(Block); /*0x45aa9b*/
  return Block; /*0x45aaa5*/
}



// ==== 0x0045AAB0  _DynamicVectorClass_PAVInfantryClass::Destruct  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_InfantryPtr::Destruct(_DynamicVectorClass_PAVInfantryClass *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x45aab3*/
  *(_DWORD *)this = &VectorClass<InfantryClass *>::`vftable'; /*0x45aab6*/
  if ( v3 && this->IsAllocated ) /*0x45aac0*/
  {
    __3_YAXPAX_Z(v3); /*0x45aac8*/
    this->Items = 0; /*0x45aad0*/
  }
  this->IsAllocated = 0; /*0x45aadb*/
  this->q008 = 0; /*0x45aae1*/
  if ( (a2 & 1) != 0 ) /*0x45aae8*/
    __3_YAXPAX_Z(this); /*0x45aaeb*/
  return this; /*0x45aaf5*/
}



// ==== 0x0045AB00  _DynamicVectorClass_PAVFoggedObjectClass::Constructor_VectorClass_FoggedObjectClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_FoggedObjectClass::Constructor_VectorClass_FoggedObjectClass___(
        _DynamicVectorClass_PAVFoggedObjectClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x45ab03*/
  *(_DWORD *)this->__pad_0 = &VectorClass<FoggedObjectClass *>::`vftable'; /*0x45ab06*/
  if ( v3 && BYTE1(this->m_C) ) /*0x45ab10*/
  {
    __3_YAXPAX_Z(v3); /*0x45ab18*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x45ab20*/
  }
  BYTE1(this->m_C) = 0; /*0x45ab2b*/
  this->m_8 = 0; /*0x45ab31*/
  if ( (a2 & 1) != 0 ) /*0x45ab38*/
    __3_YAXPAX_Z(this); /*0x45ab3b*/
  return this->__pad_0; /*0x45ab45*/
}



// ==== 0x0045AB50  _VectorClass_PAVFoggedObjectClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_FoggedObjectClass::Release(_VectorClass_PAVFoggedObjectClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x45ab5c*/
  {
    LOBYTE(this->m_C) = 0; /*0x45ab66*/
    if ( a3 ) /*0x45ab6c*/
      v4 = a3; /*0x45ab82*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x45ab7e*/
    LOBYTE(this->m_C) = 1; /*0x45ab86*/
    if ( v4 ) /*0x45ab8a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x45ab95*/
      {
        m_8 = this->m_8; /*0x45ab9c*/
        if ( a2 < m_8 ) /*0x45aba1*/
          m_8 = a2; /*0x45aba3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x45aba9*/
          ++i; /*0x45abae*/
        if ( BYTE1(this->m_C) ) /*0x45abbb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x45abc6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x45abce*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x45abd7*/
      this->m_8 = a2; /*0x45abdf*/
      BYTE1(this->m_C) = a3 == 0; /*0x45abe2*/
      return 1; /*0x45abe8*/
    }
    else
    {
      return 0; /*0x45ab8f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVFoggedObjectClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x45abf2*/
    return 1; /*0x45abf8*/
  }
}



// ==== 0x0045AC00  _VectorClass_PAVFoggedObjectClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_FoggedObjectClass::Remove(_VectorClass_PAVFoggedObjectClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x45ac0d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x45ac13*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x45ac1b*/
  }
  BYTE1(this->m_C) = 0; /*0x45ac1e*/
  this->m_8 = 0; /*0x45ac21*/
}



// ==== 0x0045AC30  _VectorClass_PAVFoggedObjectClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_FoggedObjectClass::GetSize(_VectorClass_PAVFoggedObjectClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x45ac30*/
    return 0; /*0x45ac38*/
  m_8 = this->m_8; /*0x45ac3e*/
  result = 0; /*0x45ac41*/
  if ( m_8 <= 0 ) /*0x45ac45*/
    return -1; /*0x45ac5c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x45ac4b*/
  {
    if ( ++result >= m_8 ) /*0x45ac5a*/
      return -1; /*0x45ac5a*/
  }
  return result; /*0x45ac3a*/
}



// ==== 0x0045AC70  _VectorClass_PAVFoggedObjectClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_FoggedObjectClass::GetCapacity(_VectorClass_PAVFoggedObjectClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x45ac70*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x45ac85*/
  else
    return 0; /*0x45ac77*/
}



// ==== 0x0045AC90  _VectorClass_PAVFoggedObjectClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_FoggedObjectClass::QueryInterface(_VectorClass_PAVFoggedObjectClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x45ac93*/
  *(_DWORD *)this->__pad_0 = &VectorClass<FoggedObjectClass *>::`vftable'; /*0x45ac96*/
  if ( v3 && BYTE1(this->m_C) ) /*0x45aca0*/
  {
    __3_YAXPAX_Z(v3); /*0x45aca8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x45acb0*/
  }
  BYTE1(this->m_C) = 0; /*0x45acbb*/
  this->m_8 = 0; /*0x45acc1*/
  if ( (a2 & 1) != 0 ) /*0x45acc8*/
    __3_YAXPAX_Z(this); /*0x45accb*/
  return this->__pad_0; /*0x45acd5*/
}



// ==== 0x0045ACE0  _VectorClass_PAVReestablish::Add  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_Reestablish::Add(_VectorClass_PAVReestablish *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x45ace3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<Reestablish *>::`vftable'; /*0x45ace6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x45acf0*/
  {
    __3_YAXPAX_Z(v3); /*0x45acf8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x45ad00*/
  }
  BYTE1(this->m_C) = 0; /*0x45ad0b*/
  this->m_8 = 0; /*0x45ad11*/
  if ( (a2 & 1) != 0 ) /*0x45ad18*/
    __3_YAXPAX_Z(this); /*0x45ad1b*/
  return this->__pad_0; /*0x45ad25*/
}



// ==== 0x0045AD30  _DynamicVectorClass_PAVReestablish::Constructor_VectorClass_Reestablish___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_Reestablish::Constructor_VectorClass_Reestablish___(
        _DynamicVectorClass_PAVReestablish *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x45ad33*/
  *(_DWORD *)this->__pad_0 = &VectorClass<Reestablish *>::`vftable'; /*0x45ad36*/
  if ( v3 && BYTE1(this->m_C) ) /*0x45ad40*/
  {
    __3_YAXPAX_Z(v3); /*0x45ad48*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x45ad50*/
  }
  BYTE1(this->m_C) = 0; /*0x45ad5b*/
  this->m_8 = 0; /*0x45ad61*/
  if ( (a2 & 1) != 0 ) /*0x45ad68*/
    __3_YAXPAX_Z(this); /*0x45ad6b*/
  return this->__pad_0; /*0x45ad75*/
}



// ==== 0x0045AD80  VectorClass::ConstructorWithVtable  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::ConstructorWithVtable(VectorClass *this, int a2, int a3)
{
  this->Items = 0; /*0x45ad8b*/
  this->Capacity = a2; /*0x45ad8e*/
  this->IsInitialized = 1; /*0x45ad91*/
  this->IsAllocated = 0; /*0x45ad95*/
  this->vtable0 = &VectorClass<ParticleSystemTypeClass const *>::`vftable'; /*0x45ad98*/
  if ( a2 ) /*0x45ad9e*/
  {
    if ( a3 ) /*0x45ada6*/
    {
      this->Items = (void *)a3; /*0x45ada8*/
      return &this->vtable0; /*0x45adae*/
    }
    this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x45adbd*/
    this->IsAllocated = 1; /*0x45adc0*/
  }
  return &this->vtable0; /*0x45adad*/
}



// ==== 0x0045ADD0  DynamicVector::RemoveItem  this=DynamicVector  sig=csp ====
int __thiscall DynamicVector::RemoveItem(DynamicVector *this, int a2)
{
  char *DynamicVector_field_0x10; // edx
  int result; // eax
  char *v4; // edx

  DynamicVector_field_0x10 = (char *)this->DynamicVector_field_0x10; /*0x45add0*/
  result = a2; /*0x45add3*/
  if ( a2 >= (int)DynamicVector_field_0x10 ) /*0x45add9*/
  {
    LOBYTE(result) = 0; /*0x45adfc*/
  }
  else
  {
    v4 = DynamicVector_field_0x10 - 1; /*0x45addb*/
    this->DynamicVector_field_0x10 = v4; /*0x45adde*/
    if ( a2 < (int)v4 ) /*0x45ade1*/
    {
      do /*0x45adf4*/
      {
        ++result; /*0x45ade7*/
        *(_DWORD *)(*(_DWORD *)&this->DynamicVector_field_0x1[3] + 4 * result - 4) = *(_DWORD *)(*(_DWORD *)&this->DynamicVector_field_0x1[3] /*0x45adeb*/
                                                                                               + 4 * result);
      }
      while ( result < (int)this->DynamicVector_field_0x10 ); /*0x45adf4*/
    }
    LOBYTE(result) = 1; /*0x45adf7*/
  }
  return result; /*0x45adf9*/
}



// ==== 0x0045AE10  Vector::RemoveAt  this=Vector  sig=csp ====
int __thiscall Vector::RemoveAt(Vector *this, int a2)
{
  char *Vector_field_0x10; // edx
  int result; // eax
  char *v4; // edx

  Vector_field_0x10 = (char *)this->Vector_field_0x10; /*0x45ae10*/
  result = a2; /*0x45ae13*/
  if ( a2 >= (int)Vector_field_0x10 ) /*0x45ae19*/
  {
    LOBYTE(result) = 0; /*0x45ae3c*/
  }
  else
  {
    v4 = Vector_field_0x10 - 1; /*0x45ae1b*/
    this->Vector_field_0x10 = v4; /*0x45ae1e*/
    if ( a2 < (int)v4 ) /*0x45ae21*/
    {
      do /*0x45ae34*/
      {
        ++result; /*0x45ae27*/
        *((_DWORD *)this->Vector_field_0x4 + result - 1) = *((_DWORD *)this->Vector_field_0x4 + result); /*0x45ae2b*/
      }
      while ( result < (int)this->Vector_field_0x10 ); /*0x45ae34*/
    }
    LOBYTE(result) = 1; /*0x45ae37*/
  }
  return result; /*0x45ae39*/
}



// ==== 0x0045AE50  VectorClass_ReestablishPtr::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ReestablishPtr::Construct(VectorClass_ReestablishPtr *this, int a2, int a3)
{
  *(_DWORD *)&this->m_1[3] = 0; /*0x45ae5b*/
  *(_DWORD *)&this->__pad_5[3] = a2; /*0x45ae5e*/
  LOBYTE(this->m_C) = 1; /*0x45ae61*/
  BYTE1(this->m_C) = 0; /*0x45ae65*/
  *(_DWORD *)this->__pad_0 = &VectorClass<Reestablish *>::`vftable'; /*0x45ae68*/
  if ( a2 ) /*0x45ae6e*/
  {
    if ( a3 ) /*0x45ae76*/
    {
      *(_DWORD *)&this->m_1[3] = a3; /*0x45ae78*/
      return this->__pad_0; /*0x45ae7e*/
    }
    *(_DWORD *)&this->m_1[3] = __2_YAPAXI_Z(4 * a2); /*0x45ae8d*/
    BYTE1(this->m_C) = 1; /*0x45ae90*/
  }
  return this->__pad_0; /*0x45ae7d*/
}



// ==== 0x0045AEA0  StreamClass::Set2  this=StreamClass  sig=csp ====
int __thiscall StreamClass::Set2(StreamClass *this, _DWORD *a2)
{
  int v3; // edi
  _DWORD *v5; // ebx
  int v6; // eax

  if ( *a2 ) /*0x45aea8*/
  {
    v3 = (**(int (__stdcall ***)(_DWORD, void *, _DWORD **))*a2)(*a2, &unk_818858, &a2); /*0x45aebd*/
    if ( v3 >= 0 ) /*0x45aec1*/
    {
      v5 = a2; /*0x45aedf*/
      if ( *(_DWORD *)this->__pad_0 ) /*0x45aedc*/
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)this->__pad_0 + 8))(*(_DWORD *)this->__pad_0); /*0x45aeea*/
      *(_DWORD *)this->__pad_0 = v5; /*0x45aeed*/
      return v3; /*0x45aef0*/
    }
    else
    {
      if ( *(_DWORD *)this->__pad_0 ) /*0x45aec3*/
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)this->__pad_0 + 8))(*(_DWORD *)this->__pad_0); /*0x45aecc*/
      *(_DWORD *)this->__pad_0 = 0; /*0x45aed1*/
      return v3; /*0x45aecf*/
    }
  }
  else
  {
    v6 = *(_DWORD *)this->__pad_0; /*0x45aef7*/
    if ( *(_DWORD *)this->__pad_0 ) /*0x45aef7*/
    {
      *(_DWORD *)this->__pad_0 = 0; /*0x45aefd*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x45af06*/
    }
    return -2147467262; /*0x45af0e*/
  }
}



// ==== 0x0045AF20  StreamClass::Set  this=ILocomotion  sig=csp ====
int __thiscall StreamClass::Set(StreamClass *this, _DWORD *a2)
{
  int v3; // edi
  _DWORD *v5; // ebx
  int v6; // eax

  if ( *a2 ) /*0x45af28*/
  {
    v3 = (**(int (__stdcall ***)(_DWORD, int *, _DWORD **))*a2)(*a2, &stru_818E00.?[17], &a2); /*0x45af3d*/
    if ( v3 >= 0 ) /*0x45af41*/
    {
      v5 = a2; /*0x45af5f*/
      if ( *(_DWORD *)this->__pad_0 ) /*0x45af5c*/
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)this->__pad_0 + 8))(*(_DWORD *)this->__pad_0); /*0x45af6a*/
      *(_DWORD *)this->__pad_0 = v5; /*0x45af6d*/
      return v3; /*0x45af70*/
    }
    else
    {
      if ( *(_DWORD *)this->__pad_0 ) /*0x45af43*/
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)this->__pad_0 + 8))(*(_DWORD *)this->__pad_0); /*0x45af4c*/
      *(_DWORD *)this->__pad_0 = 0; /*0x45af51*/
      return v3; /*0x45af4f*/
    }
  }
  else
  {
    v6 = *(_DWORD *)this->__pad_0; /*0x45af77*/
    if ( *(_DWORD *)this->__pad_0 ) /*0x45af77*/
    {
      *(_DWORD *)this->__pad_0 = 0; /*0x45af7d*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x45af86*/
    }
    return -2147467262; /*0x45af8e*/
  }
}



// ==== 0x0045AFA0  sub_45AFA0  this=-  sig=ida-proto ====
void sub_45AFA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x45afac*/
  dbl_89C8B8 = Math::Sqrt(v0 + v0); /*0x45afbe*/
}



// ==== 0x0045AFD0  sub_45AFD0  this=-  sig=ida-proto ====
void sub_45AFD0()
{
  dbl_89D360 = dbl_89C8B8 / 60.0; /*0x45afdc*/
}



// ==== 0x0045AFF0  sub_45AFF0  this=-  sig=ida-proto ====
void sub_45AFF0()
{
  dbl_89C8F8 = 1.0 / dbl_89D360; /*0x45affc*/
}



// ==== 0x0045B010  sub_45B010  this=-  sig=ida-proto ====
void sub_45B010()
{
  dbl_89C8F0 = 0.0174532925199433 * 45.0; /*0x45b01c*/
}



// ==== 0x0045B030  sub_45B030  this=-  sig=ida-proto ====
void sub_45B030()
{
  dbl_89C8C0 = 0.0174532925199433 * 60.0; /*0x45b03c*/
}



// ==== 0x0045B050  sub_45B050  this=-  sig=ida-proto ====
void sub_45B050()
{
  dbl_89C898 = 0.0174532925199433 * 90.0; /*0x45b05c*/
}



// ==== 0x0045B070  sub_45B070  this=-  sig=ida-proto ====
__int64 sub_45B070()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89C898 - dbl_89C8C0); /*0x45b082*/
  result = Math::RoundToInt(v0 * dbl_89C8B8 * 0.5); /*0x45b096*/
  dword_89DDB8 = result; /*0x45b09b*/
  return result; /*0x45b0a0*/
}



// ==== 0x0045B0B0  sub_45B0B0  this=-  sig=ida-proto ====
void sub_45B0B0()
{
  dbl_89C8C8 = Math::ArcTan((double)dword_89DDB8 * 0.00390625); /*0x45b0c7*/
}



// ==== 0x0045B0E0  sub_45B0E0  this=-  sig=ida-proto ====
void sub_45B0E0()
{
  dbl_89C8E0 = Math::ArcTan((double)(2 * dword_89DDB8) / dbl_89C8B8); /*0x45b102*/
}



// ==== 0x0045B110  sub_45B110  this=-  sig=ida-proto ====
__int64 sub_45B110()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89DDB8) + 0.5); /*0x45b12b*/
  dword_89D35C = result; /*0x45b130*/
  return result; /*0x45b136*/
}



// ==== 0x0045B140  sub_45B140  this=-  sig=ida-proto ====
int sub_45B140()
{
  word_89C8B0 = 0; /*0x45b142*/
  word_89C8B2 = 0; /*0x45b148*/
  return 0; /*0x45b14e*/
}



// ==== 0x0045B150  sub_45B150  this=-  sig=ida-proto ====
int sub_45B150()
{
  dword_89C8D0 = 0; /*0x45b152*/
  dword_89C8D4 = 0; /*0x45b157*/
  dword_89C8D8 = 0; /*0x45b15c*/
  return 0; /*0x45b161*/
}



// ==== 0x0045B170  sub_45B170  this=-  sig=ida-proto ====
int sub_45B170()
{
  dword_89D358 = 0; /*0x45b175*/
  dword_89D350 = 128; /*0x45b17f*/
  dword_89D354 = 128; /*0x45b184*/
  return 128; /*0x45b189*/
}



// ==== 0x0045B190  sub_45B190  this=-  sig=ida-proto ====
int sub_45B190()
{
  dword_89C8A0 = 0; /*0x45b192*/
  dword_89C8A4 = 0; /*0x45b197*/
  dword_89C8A8 = 0; /*0x45b19c*/
  dword_89C8AC = 0; /*0x45b1a1*/
  return 0; /*0x45b1a6*/
}



// ==== 0x0045B1B0  j_MapData_InitHeights  this=-  sig=ida-proto ====
// attributes: thunk
int j_MapData_InitHeights()
{
  return MapData::InitHeights();
}



// ==== 0x0045B1C0  MapData::InitHeights  this=MapData  sig=ida-proto ====
int MapData_InitHeights()
{
  int v0; // eax
  int v2; // [esp+10h] [ebp-4h] BYREF

  dword_89C900 = 0; /*0x45b1e8*/
  dword_89C904 = 2147450879; /*0x45b1ed*/
  memset(&unk_89C908, 0, 0x70u); /*0x45b204*/
  dword_89C978 = 0; /*0x45b222*/
  dword_89C97C = 1; /*0x45b235*/
  dword_89C980 = 2147450879; /*0x45b23b*/
  memset(&unk_89C984, 0, 0x6Cu); /*0x45b251*/
  dword_89C9F0 = 0; /*0x45b26a*/
  dword_89C9F4 = 0x10000; /*0x45b27e*/
  dword_89C9F8 = 2147450879; /*0x45b283*/
  memset(&unk_89C9FC, 0, 0x6Cu); /*0x45b295*/
  dword_89CA68 = 0; /*0x45b2b3*/
  dword_89CA6C = 1; /*0x45b2c6*/
  dword_89CA70 = 0x10000; /*0x45b2da*/
  dword_89CA74 = 65537; /*0x45b2ed*/
  dword_89CA78 = 2147450879; /*0x45b2f3*/
  memset(&unk_89CA7C, 0, 0x64u); /*0x45b309*/
  dword_89CAE0 = 0; /*0x45b314*/
  dword_89CAE4 = 1; /*0x45b336*/
  dword_89CAE8 = 0x10000; /*0x45b34e*/
  dword_89CAEC = 65537; /*0x45b362*/
  dword_89CAF0 = 0x20000; /*0x45b375*/
  dword_89CAF4 = 131073; /*0x45b389*/
  dword_89CAF8 = 2147450879; /*0x45b38e*/
  memset(&unk_89CAFC, 0, 0x5Cu); /*0x45b3a0*/
  dword_89CB58 = 0; /*0x45b3be*/
  dword_89CB5C = 1; /*0x45b3d1*/
  dword_89CB60 = 2; /*0x45b3e5*/
  dword_89CB64 = 0x10000; /*0x45b3f8*/
  dword_89CB68 = 65537; /*0x45b40c*/
  dword_89CB6C = 65538; /*0x45b41f*/
  dword_89CB70 = 2147450879; /*0x45b425*/
  memset(&unk_89CB74, 0, 0x5Cu); /*0x45b43b*/
  dword_89CBD0 = 0; /*0x45b454*/
  dword_89CBD4 = 1; /*0x45b468*/
  dword_89CBD8 = 2; /*0x45b47b*/
  dword_89CBDC = 0x10000; /*0x45b48f*/
  dword_89CBE0 = 65537; /*0x45b494*/
  dword_89CBE4 = 65538; /*0x45b4b6*/
  dword_89CBE8 = 0x20000; /*0x45b4c9*/
  dword_89CBEC = 131073; /*0x45b4dd*/
  dword_89CBF0 = 131074; /*0x45b4f0*/
  dword_89CBF4 = 2147450879; /*0x45b4f6*/
  memset(&unk_89CBF8, 0, 0x50u); /*0x45b50c*/
  dword_89CC48 = 0; /*0x45b525*/
  dword_89CC4C = 1; /*0x45b539*/
  dword_89CC50 = 2; /*0x45b54c*/
  dword_89CC54 = 0x10000; /*0x45b560*/
  dword_89CC58 = 65537; /*0x45b573*/
  dword_89CC5C = 65538; /*0x45b587*/
  dword_89CC60 = 0x20000; /*0x45b59a*/
  dword_89CC64 = 131073; /*0x45b5a0*/
  dword_89CC68 = 131074; /*0x45b5b8*/
  dword_89CC6C = 196608; /*0x45b5d1*/
  dword_89CC74 = 196610; /*0x45b5ee*/
  dword_89CC70 = 196609; /*0x45b5f8*/
  dword_89CC78 = 0x40000; /*0x45b60c*/
  dword_89CC7C = 262145; /*0x45b620*/
  dword_89CC80 = 262146; /*0x45b642*/
  dword_89CC84 = 2147450879; /*0x45b647*/
  memset(&unk_89CC88, 0, 0x38u); /*0x45b659*/
  dword_89CCC0 = 0; /*0x45b677*/
  dword_89CCC8 = 2; /*0x45b68a*/
  dword_89CCC4 = 1; /*0x45b694*/
  dword_89CCCC = 3; /*0x45b6a8*/
  dword_89CCD0 = 0x10000; /*0x45b6bc*/
  dword_89CCD4 = 65537; /*0x45b6d0*/
  dword_89CCD8 = 65538; /*0x45b6f2*/
  dword_89CCDC = 65539; /*0x45b706*/
  dword_89CCE0 = 2147450879; /*0x45b70b*/
  memset(&unk_89CCE4, 0, 0x54u); /*0x45b71d*/
  dword_89CD38 = 0; /*0x45b73b*/
  dword_89CD3C = 1; /*0x45b74e*/
  dword_89CD40 = 2; /*0x45b762*/
  dword_89CD44 = 0x10000; /*0x45b775*/
  dword_89CD48 = 65537; /*0x45b789*/
  dword_89CD4C = 0x20000; /*0x45b79c*/
  dword_89CD50 = 131073; /*0x45b7a2*/
  dword_89CD54 = 131074; /*0x45b7c3*/
  dword_89CD58 = 2147450879; /*0x45b7c9*/
  memset(&unk_89CD5C, 0, 0x54u); /*0x45b7da*/
  dword_89CDB0 = 0; /*0x45b7f8*/
  dword_89CDB4 = 0x10000; /*0x45b80c*/
  dword_89CDB8 = 0x20000; /*0x45b81f*/
  dword_89CDBC = 2147450879; /*0x45b825*/
  memset(&unk_89CDC0, 0, 0x68u); /*0x45b83b*/
  dword_89CE28 = 0; /*0x45b854*/
  dword_89CE2C = 1; /*0x45b868*/
  dword_89CE30 = 2; /*0x45b87b*/
  dword_89CE34 = 2147450879; /*0x45b881*/
  memset(&unk_89CE38, 0, 0x68u); /*0x45b892*/
  dword_89CEA0 = 0; /*0x45b8b0*/
  dword_89CEA4 = 1; /*0x45b8b6*/
  dword_89CEA8 = 2; /*0x45b8ce*/
  dword_89CEAC = 3; /*0x45b8e2*/
  dword_89CEB0 = 0x10000; /*0x45b8f6*/
  dword_89CEB4 = 65537; /*0x45b90a*/
  dword_89CEB8 = 65538; /*0x45b91e*/
  dword_89CEBC = 65539; /*0x45b932*/
  dword_89CEC0 = 0x20000; /*0x45b946*/
  dword_89CEC4 = 131073; /*0x45b95a*/
  dword_89CEC8 = 131074; /*0x45b97c*/
  dword_89CECC = 131075; /*0x45b990*/
  dword_89CED0 = 2147450879; /*0x45b995*/
  memset(&unk_89CED4, 0, 0x44u); /*0x45b9a7*/
  dword_89CF18 = 0; /*0x45b9c5*/
  dword_89CF1C = 0x10000; /*0x45b9d8*/
  dword_89CF20 = 0x20000; /*0x45b9ee*/
  dword_89CF24 = 196608; /*0x45ba01*/
  dword_89CF28 = 2147450879; /*0x45ba07*/
  memset(&unk_89CF2C, 0, 0x64u); /*0x45ba1d*/
  dword_89CF90 = 0; /*0x45ba36*/
  dword_89CF94 = 0x10000; /*0x45ba4a*/
  dword_89CF98 = 0x20000; /*0x45ba5f*/
  dword_89CF9C = 196608; /*0x45ba75*/
  dword_89CFA0 = 0x40000; /*0x45ba88*/
  dword_89CFA4 = 2147450879; /*0x45ba8e*/
  memset(&unk_89CFA8, 0, 0x60u); /*0x45ba9f*/
  dword_89D008 = 0; /*0x45babd*/
  dword_89D00C = 1; /*0x45bad1*/
  dword_89D010 = 0x10000; /*0x45bae4*/
  dword_89D014 = 65537; /*0x45baf8*/
  dword_89D01C = 131073; /*0x45bb0b*/
  dword_89D018 = 0x20000; /*0x45bb15*/
  dword_89D020 = 196608; /*0x45bb37*/
  dword_89D024 = 196609; /*0x45bb3d*/
  dword_89D02C = 262145; /*0x45bb63*/
  dword_89D028 = 0x40000; /*0x45bb6d*/
  dword_89D030 = 327680; /*0x45bb8f*/
  dword_89D034 = 327681; /*0x45bba3*/
  dword_89D038 = 2147450879; /*0x45bba8*/
  memset(&unk_89D03C, 0, 0x44u); /*0x45bbba*/
  dword_89D080 = 0; /*0x45bbd8*/
  dword_89D084 = 1; /*0x45bbeb*/
  dword_89D088 = 0x10000; /*0x45bbff*/
  dword_89D08C = 65537; /*0x45bc12*/
  dword_89D090 = 0x20000; /*0x45bc26*/
  dword_89D094 = 131073; /*0x45bc2b*/
  dword_89D098 = 196608; /*0x45bc52*/
  dword_89D09C = 196609; /*0x45bc58*/
  dword_89D0A0 = 0x40000; /*0x45bc7e*/
  dword_89D0A4 = 262145; /*0x45bc92*/
  dword_89D0A8 = 2147450879; /*0x45bc97*/
  memset(&unk_89D0AC, 0, 0x4Cu); /*0x45bcae*/
  dword_89D0F8 = 0; /*0x45bcc7*/
  dword_89D0FC = 1; /*0x45bccc*/
  dword_89D100 = 2; /*0x45bce5*/
  dword_89D104 = 3; /*0x45bcfd*/
  dword_89D108 = 4; /*0x45bd10*/
  dword_89D10C = 0x10000; /*0x45bd24*/
  dword_89D110 = 65537; /*0x45bd38*/
  dword_89D114 = 65538; /*0x45bd4c*/
  dword_89D118 = 65539; /*0x45bd60*/
  dword_89D11C = 65540; /*0x45bd74*/
  dword_89D120 = 0x20000; /*0x45bd88*/
  dword_89D124 = 131073; /*0x45bd9c*/
  dword_89D128 = 131074; /*0x45bdb0*/
  dword_89D12C = 131075; /*0x45bdd2*/
  dword_89D130 = 131076; /*0x45bde6*/
  dword_89D134 = 2147450879; /*0x45bdeb*/
  memset(&unk_89D138, 0, 0x38u); /*0x45bdfd*/
  dword_89D170 = 0; /*0x45be1b*/
  dword_89D178 = 2; /*0x45be2e*/
  dword_89D174 = 1; /*0x45be38*/
  dword_89D17C = 3; /*0x45be4c*/
  dword_89D180 = 0x10000; /*0x45be60*/
  dword_89D184 = 65537; /*0x45be74*/
  dword_89D188 = 65538; /*0x45be88*/
  dword_89D18C = 65539; /*0x45be9c*/
  dword_89D190 = 0x20000; /*0x45beb0*/
  dword_89D194 = 131073; /*0x45bec4*/
  dword_89D198 = 131074; /*0x45bed8*/
  dword_89D19C = 131075; /*0x45beec*/
  dword_89D1A0 = 196608; /*0x45bf00*/
  dword_89D1A4 = 196609; /*0x45bf14*/
  dword_89D1A8 = 196610; /*0x45bf36*/
  dword_89D1AC = 196611; /*0x45bf3c*/
  dword_89D1B0 = 2147450879; /*0x45bf4f*/
  v2 = 1; /*0x45bf6f*/
  memset(&unk_89D1B4, 0, 0x34u); /*0x45bf74*/
  dword_89D1E8 = 0; /*0x45bf85*/
  dword_89D1EC = 1; /*0x45bf8b*/
  dword_89D1F0 = *(_DWORD *)CellStruct::Set(&v2, 2, 0); /*0x45bf98*/
  dword_89D1F4 = *(_DWORD *)CellStruct::Set(&v2, 0, 1); /*0x45bfb0*/
  dword_89D1F8 = *(_DWORD *)CellStruct::Set(&v2, 1, 1); /*0x45bfc3*/
  dword_89D1FC = *(_DWORD *)CellStruct::Set(&v2, 2, 1); /*0x45bfd0*/
  dword_89D200 = *(_DWORD *)CellStruct::Set(&v2, 0, 2); /*0x45bfe8*/
  dword_89D204 = *(_DWORD *)CellStruct::Set(&v2, 1, 2); /*0x45bffb*/
  dword_89D208 = *(_DWORD *)CellStruct::Set(&v2, 2, 2); /*0x45c009*/
  dword_89D20C = *(_DWORD *)CellStruct::Set(&v2, 0, 3); /*0x45c022*/
  dword_89D210 = *(_DWORD *)CellStruct::Set(&v2, 1, 3); /*0x45c036*/
  dword_89D214 = *(_DWORD *)CellStruct::Set(&v2, 2, 3); /*0x45c047*/
  dword_89D218 = *(_DWORD *)CellStruct::Set(&v2, 0x7FFF, 0x7FFF); /*0x45c05d*/
  memset(&dword_89D21C, 0, 0x44u); /*0x45c078*/
  Array::ForEach((int)&dword_89D21C, 4, 17, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x45c07f*/
  dword_89D260 = *(_DWORD *)CellStruct::Set(&v2, 0, 0); /*0x45c097*/
  dword_89D264 = *(_DWORD *)CellStruct::Set(&v2, 1, 0); /*0x45c0a4*/
  dword_89D268 = *(_DWORD *)CellStruct::Set(&v2, 2, 0); /*0x45c0bd*/
  dword_89D26C = *(_DWORD *)CellStruct::Set(&v2, 3, 0); /*0x45c0d1*/
  dword_89D270 = *(_DWORD *)CellStruct::Set(&v2, 4, 0); /*0x45c0de*/
  dword_89D274 = *(_DWORD *)CellStruct::Set(&v2, 5, 0); /*0x45c0f7*/
  dword_89D278 = *(_DWORD *)CellStruct::Set(&v2, 0, 1); /*0x45c10a*/
  dword_89D27C = *(_DWORD *)CellStruct::Set(&v2, 1, 1); /*0x45c117*/
  dword_89D280 = *(_DWORD *)CellStruct::Set(&v2, 2, 1); /*0x45c130*/
  dword_89D284 = *(_DWORD *)CellStruct::Set(&v2, 3, 1); /*0x45c144*/
  dword_89D288 = *(_DWORD *)CellStruct::Set(&v2, 4, 1); /*0x45c151*/
  dword_89D28C = *(_DWORD *)CellStruct::Set(&v2, 5, 1); /*0x45c164*/
  dword_89D290 = *(_DWORD *)CellStruct::Set(&v2, 0, 2); /*0x45c17d*/
  dword_89D294 = *(_DWORD *)CellStruct::Set(&v2, 1, 2); /*0x45c18a*/
  dword_89D298 = *(_DWORD *)CellStruct::Set(&v2, 2, 2); /*0x45c1a3*/
  dword_89D29C = *(_DWORD *)CellStruct::Set(&v2, 3, 2); /*0x45c1b7*/
  dword_89D2A0 = *(_DWORD *)CellStruct::Set(&v2, 4, 2); /*0x45c1c4*/
  dword_89D2A4 = *(_DWORD *)CellStruct::Set(&v2, 5, 2); /*0x45c1de*/
  dword_89D2A8 = *(_DWORD *)CellStruct::Set(&v2, 0, 3); /*0x45c1f2*/
  dword_89D2AC = *(_DWORD *)CellStruct::Set(&v2, 1, 3); /*0x45c200*/
  dword_89D2B0 = *(_DWORD *)CellStruct::Set(&v2, 2, 3); /*0x45c21a*/
  dword_89D2B4 = *(_DWORD *)CellStruct::Set(&v2, 3, 3); /*0x45c22f*/
  dword_89D2B8 = *(_DWORD *)CellStruct::Set(&v2, 4, 3); /*0x45c23d*/
  dword_89D2BC = *(_DWORD *)CellStruct::Set(&v2, 5, 3); /*0x45c25e*/
  v0 = *(_DWORD *)CellStruct::Set(&v2, 0x7FFF, 0x7FFF); /*0x45c269*/
  dword_89D2C4 = 0; /*0x45c26d*/
  dword_89D2C0 = v0; /*0x45c273*/
  dword_89D2C8 = 0; /*0x45c278*/
  dword_89D2CC = 0; /*0x45c27e*/
  dword_89D2D0 = 0; /*0x45c28b*/
  dword_89D2D4 = 0; /*0x45c298*/
  Array::ForEach((int)&dword_89D2C4, 4, 5, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x45c29e*/
  dword_89D2D8 = *(_DWORD *)CellStruct::Set(&v2, 0x7FFF, 0x7FFF); /*0x45c2cb*/
  memset(&dword_89D2DC, 0, 0x74u); /*0x45c2d3*/
  return Array::ForEach((int)&dword_89D2DC, 4, 29, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x45c2df*/
}


// ==== 0x0045C2F0  j_Map_InitCellOffsets  this=-  sig=ida-proto ====
// attributes: thunk
int j_Map_InitCellOffsets()
{
  return InitCellOffsetsMap();
}



// ==== 0x0045C300  InitCellOffsetsMap  this=-  sig=ida-proto ====
int Map_InitCellOffsets()
{
  int v1; // [esp+10h] [ebp-4h] BYREF

  dword_89D368 = 0x10000; /*0x45c32b*/
  dword_89D36C = 0x1FFFF; /*0x45c33e*/
  dword_89D370 = 65537; /*0x45c352*/
  dword_89D374 = 0xFFFF; /*0x45c365*/
  dword_89D378 = 1; /*0x45c379*/
  dword_89D380 = -1; /*0x45c38c*/
  dword_89D37C = -65536; /*0x45c391*/
  dword_89D384 = -65535; /*0x45c3b8*/
  dword_89D388 = 2147450879; /*0x45c3be*/
  memset(&unk_89D38C, 0, 0x54u); /*0x45c3d4*/
  dword_89D3E0 = 0x10000; /*0x45c3ed*/
  dword_89D3E4 = 65537; /*0x45c406*/
  dword_89D3E8 = 0x1FFFF; /*0x45c419*/
  dword_89D3EC = 65538; /*0x45c42d*/
  dword_89D3F0 = 0xFFFF; /*0x45c440*/
  dword_89D3F4 = 2; /*0x45c454*/
  dword_89D3F8 = -65536; /*0x45c467*/
  dword_89D3FC = -65535; /*0x45c46d*/
  dword_89D404 = -65534; /*0x45c48e*/
  dword_89D400 = -1; /*0x45c498*/
  dword_89D408 = 2147450879; /*0x45c4ac*/
  memset(&unk_89D40C, 0, 0x4Cu); /*0x45c4be*/
  dword_89D458 = 0x20000; /*0x45c4dc*/
  dword_89D45C = 131073; /*0x45c4ef*/
  dword_89D46... [15107 chars total]



// ==== 0x0045DD20  ObjectClass::method_45DD20  this=ObjectClass  sig=csp ====
char *__thiscall sub_45DD20(ObjectClass *this)
{
  int v1; // edx
  ObjectClass **v2; // eax

  v1 = 0; /*0x45dd20*/
  v2 = (ObjectClass **)&stru_81926C.Name[8]; /*0x45dd22*/
  while ( *v2 != this ) /*0x45dd29*/
  {
    v2 += 2; /*0x45dd2b*/
    ++v1; /*0x45dd2e*/
    if ( (int)v2 >= (int)&stru_81926C.voiceIndex ) /*0x45dd34*/
      return (char *)stru_81926C.Name[7]; /*0x45dd3b*/
  }
  return (char *)stru_81926C.Name[2 * v1 + 7]; /*0x45dd3b*/
}



// ==== 0x0045DD50  ObjectClass::method_45DD50  this=ObjectClass  sig=csp ====
int __thiscall sub_45DD50(ObjectClass *this)
{
  int v2; // edi
  char **v3; // esi

  v2 = 0; /*0x45dd55*/
  v3 = (char **)&stru_81926C.Name[7]; /*0x45dd57*/
  while ( _strcmpi(*v3, (char *)this) ) /*0x45dd6a*/
  {
    v3 += 2; /*0x45dd6c*/
    ++v2; /*0x45dd6f*/
    if ( (int)v3 >= (int)stru_81926C.Type ) /*0x45dd76*/
      return 0; /*0x45dd7d*/
  }
  return stru_81926C.Name[2 * v2 + 8]; /*0x45dd78*/
}



// ==== 0x0045DD90  BuildingTypeClass::ConstructFull  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass_ConstructorFull(int this, char *Source)
{
  int v3; // ecx
  int v4; // eax
  bool v5; // zf
  int v6; // ecx
  _DWORD *v7; // edx
  _DWORD *v8; // eax
  int v9; // ecx
  _DWORD *v10; // ebp
  _DWORD *v11; // ebp
  _DWORD *v12; // eax
  int v13; // edi
  int v14; // edx
  _DWORD *v15; // eax
  int v16; // edi
  int v17; // edx
  _DWORD *v18; // eax
  int v19; // ecx
  _DWORD *v20; // edi

  TechnoTypeClass::ReadINI((char *)this, Source, 0); /*0x45dda1*/
  *(_DWORD *)(this + 3576) = -1; /*0x45ddaf*/
  *(_DWORD *)(this + 3580) = 0; /*0x45ddb5*/
  *(_DWORD *)(this + 3584) = 0; /*0x45ddbb*/
  *(_BYTE *)(this + 3588) = 0; /*0x45ddc1*/
  *(_DWORD *)(this + 3592) = 0; /*0x45ddc7*/
  *(_DWORD *)(this + 3596) = dword_89C8D0; /*0x45ddd3*/
  *(_DWORD *)(this + 3600) = dword_89C8D4; /*0x45ddda*/
  *(_DWORD *)(this + 3604) = dword_89C8D8; /*0x45dde9*/
  *(_DWORD *)(this + 3608) = dword_89C8D0; /*0x45ddf2*/
  *(_DWORD *)(this + 3612) = dword_89C8D4; /*0x45ddfa*/
  *(_DWORD *)(this + 3616) = dword_89C8D8; /*0x45de03*/
  *(_DWORD *)(this + 3624) = 0; /*0x45de06*/
  *(_DWORD *)(this + 3628) = 0; /*0x45de0c*/
  *(_DWORD *)(this + 3632) = 5000; /*0x45de12*/
  *(_DWORD *)(this + 3636) = 0; /*0x45de21*/
  *(_DWORD *)(this + 3640) = 1000000; /*0x45de27*/
  *(_DWORD *)(this + 3644) = 1000000; /*0x45de2d*/
  *(_DWORD *)(this + 3648) = 1000000; /*0x45de33*/
  *(_DWORD *)(this + 3652) = 0xFFFF; /*0x45de40*/
  *(_DWORD *)(this + 3656) = 0xFFFF; /*0x45de46*/
  *(_DWORD *)(this + 3660) = 0xFFFF; /*0x45de4c*/
  *(_DWORD *)(this + 3664) = 0xFFFF; /*0x45de52*/
  *(_DWORD *)(this + 3668) = 0; /*0x45de58*/
  *(_DWORD *)(this + 3672) = 0; /*0x45de5e*/
  *(_DWORD *)(this + 3692) = -1; /*0x45de64*/
  *(_DWORD *)(this + 3696) = -1; /*0x45de6a*/
  *(_DWORD *)(this + 3700) = -1; /*0x45de70*/
  *(_DWORD *)(this + 3704) = -1; /*0x45de76*/
  *(_DWORD *)(this + 3708) = -1; /*0x45de7c*/
  *(_DWORD *)(this + 3712) = -1; /*0x45de82*/
  *(_DWORD *)(this + 3716) = -1; /*0x45de88*/
  *(_DWORD *)(this + 3744) = 0; /*0x45de8e*/
  *(_DWORD *)(this + 3748) = 0; /*0x45de94*/
  *(_DWORD *)(this + 3752) = 0; /*0x45de9a*/
  *(_DWORD *)(this + 3756) = 0; /*0x45dea0*/
  *(_DWORD *)(this + 3760) = -1; /*0x45dea6*/
  *(_DWORD *)(this + 3764) = 3; /*0x45deac*/
  *(_DWORD *)(this + 3768) = 0; /*0x45deb6*/
  *(_DWORD *)(this + 3772) = 0; /*0x45debc*/
  *(_DWORD *)(this + 3776) = 0; /*0x45dec2*/
  *(_DWORD *)(this + 3780) = 0; /*0x45dec8*/
  *(_DWORD *)(this + 3784) = 0; /*0x45dece*/
  *(_DWORD *)(this + 3788) = 0; /*0x45ded4*/
  *(_DWORD *)(this + 3792) = 0; /*0x45deda*/
  *(_DWORD *)(this + 3796) = 0; /*0x45dee0*/
  *(_DWORD *)(this + 3800) = 0; /*0x45dee6*/
  *(_DWORD *)(this + 3804) = 128; /*0x45deec*/
  *(_DWORD *)(this + 3808) = 0; /*0x45def6*/
  *(_DWORD *)(this + 3812) = 0; /*0x45defc*/
  *(_DWORD *)(this + 3816) = 0; /*0x45df02*/
  *(_DWORD *)(this + 3820) = 0; /*0x45df08*/
  *(_DWORD *)(this + 3824) = 0; /*0x45df13*/
  *(_DWORD *)(this + 3828) = 2; /*0x45df19*/
  *(_DWORD *)(this + 3832) = 2; /*0x45df1f*/
  *(_DWORD *)(this + 3836) = 0; /*0x45df25*/
  *(_DWORD *)(this + 3840) = 0; /*0x45df2b*/
  *(_DWORD *)(this + 5344) = 0; /*0x45df31*/
  *(_DWORD *)(this + 5348) = 0; /*0x45df37*/
  *(_DWORD *)(this + 5356) = 0; /*0x45df3d*/
  *(_DWORD *)(this + 5364) = 0; /*0x45df43*/
  *(_DWORD *)(this + 5372) = 0; /*0x45df49*/
  *(_DWORD *)(this + 5380) = 0; /*0x45df4f*/
  *(_DWORD *)(this + 5388) = 0; /*0x45df55*/
  *(_DWORD *)(this + 5392) = 0; /*0x45df5b*/
  *(_DWORD *)(this + 5396) = 0; /*0x45df61*/
  *(_DWORD *)(this + 5400) = 0; /*0x45df67*/
  *(_BYTE *)(this + 5404) = 0; /*0x45df6d*/
  *(_DWORD *)(this + 5408) = 0; /*0x45df73*/
  *(_DWORD *)(this + 5412) = 0; /*0x45df79*/
  *(_DWORD *)(this + 5416) = 0; /*0x45df7f*/
  *(_DWORD *)(this + 5420) = 0; /*0x45df87*/
  *(_DWORD *)(this + 5424) = 0; /*0x45df8d*/
  *(_DWORD *)(this + 5428) = 0; /*0x45df93*/
  *(_DWORD *)(this + 5432) = dword_89C8A0; /*0x45dfa4*/
  *(_DWORD *)(this + 5436) = dword_89C8A4; /*0x45dfb0*/
  *(_DWORD *)(this + 5440) = dword_89C8A8; /*0x45dfb8*/
  v3 = dword_89C8AC; /*0x45dfbb*/
  *(_BYTE *)(this + 5454) = 0; /*0x45dfc3*/
  *(_DWORD *)(this + 5444) = v3; /*0x45dfc9*/
  *(_WORD *)(this + 5448) = 0; /*0x45dfcc*/
  *(_BYTE *)(this + 5450) = 1; /*0x45dfd3*/
  *(_BYTE *)(this + 5451) = 0; /*0x45dfda*/
  *(_BYTE *)(this + 5452) = 0; /*0x45dfe0*/
  *(_DWORD *)(this + 5656) = 0; /*0x45dfe6*/
  *(_BYTE *)(this + 5453) = 0; /*0x45dfec*/
  *(_BYTE *)(this + 5455) = 1; /*0x45dff2*/
  *(_BYTE *)(this + 5456) = 0; /*0x45dff9*/
  *(_BYTE *)(this + 5457) = 0; /*0x45dfff*/
  *(_BYTE *)(this + 5458) = 0; /*0x45e005*/
  *(_DWORD *)(this + 5460) = -1; /*0x45e00b*/
  *(_DWORD *)(this + 5464) = 0; /*0x45e011*/
  *(_DWORD *)(this + 5468) = 0; /*0x45e017*/
  *(_DWORD *)(this + 5472) = 0; /*0x45e01d*/
  *(_DWORD *)(this + 5476) = 0; /*0x45e023*/
  *(_DWORD *)(this + 5480) = 0; /*0x45e029*/
  *(_DWORD *)(this + 5484) = 25; /*0x45e02f*/
  *(_BYTE *)(this + 5488) = 0; /*0x45e039*/
  *(_BYTE *)(this + 5489) = 0; /*0x45e03f*/
  *(_BYTE *)(this + 5490) = 0; /*0x45e045*/
  *(_BYTE *)(this + 5491) = 0; /*0x45e04b*/
  *(_BYTE *)(this + 5492) = 0; /*0x45e051*/
  *(_BYTE *)(this + 5493) = 0; /*0x45e057*/
  *(_BYTE *)(this + 5494) = 0; /*0x45e05d*/
  *(_BYTE *)(this + 5495) = 1; /*0x45e063*/
  *(_BYTE *)(this + 5496) = 0; /*0x45e06a*/
  *(_BYTE *)(this + 5497) = 0; /*0x45e070*/
  *(_BYTE *)(this + 5498) = 1; /*0x45e076*/
  *(_BYTE *)(this + 5499) = 0; /*0x45e07d*/
  *(_BYTE *)(this + 5500) = 0; /*0x45e083*/
  *(_DWORD *)(this + 5504) = 0; /*0x45e089*/
  *(_BYTE *)(this + 5508) = 1; /*0x45e08f*/
  *(_DWORD *)(this + 5660) = 0; /*0x45e096*/
  *(_DWORD *)(this + 5664) = -1; /*0x45e09c*/
  *(_BYTE *)(this + 5796) = 0; /*0x45e0a2*/
  *(_BYTE *)(this + 5797) = 0; /*0x45e0a8*/
  *(_BYTE *)(this + 5798) = 0; /*0x45e0ae*/
  *(_BYTE *)(this + 5799) = 0; /*0x45e0b4*/
  *(_BYTE *)(this + 5800) = 0; /*0x45e0ba*/
  *(_BYTE *)(this + 5801) = 0; /*0x45e0c0*/
  *(_BYTE *)(this + 5802) = 0; /*0x45e0c6*/
  *(_BYTE *)(this + 5803) = 0; /*0x45e0cc*/
  *(_BYTE *)(this + 5804) = 0; /*0x45e0d2*/
  *(_BYTE *)(this + 5805) = 0; /*0x45e0d8*/
  *(_BYTE *)(this + 5806) = 0; /*0x45e0de*/
  *(_BYTE *)(this + 5807) = 0; /*0x45e0e4*/
  *(_BYTE *)(this + 5808) = 0; /*0x45e0ea*/
  *(_BYTE *)(this + 5809) = 0; /*0x45e0f0*/
  *(_BYTE *)(this + 5810) = 0; /*0x45e0f6*/
  *(_BYTE *)(this + 5811) = 0; /*0x45e0fc*/
  *(_BYTE *)(this + 5812) = 0; /*0x45e102*/
  *(_BYTE *)(this + 5813) = 1; /*0x45e108*/
  *(_BYTE *)(this + 5814) = 0; /*0x45e10f*/
  *(_BYTE *)(this + 5815) = 0; /*0x45e115*/
  *(_BYTE *)(this + 5816) = 0; /*0x45e11b*/
  *(_BYTE *)(this + 5817) = 0; /*0x45e121*/
  *(_BYTE *)(this + 5818) = 0; /*0x45e127*/
  *(_BYTE *)(this + 5819) = 0; /*0x45e12d*/
  *(_BYTE *)(this + 5820) = 0; /*0x45e133*/
  *(_BYTE *)(this + 5821) = 0; /*0x45e139*/
  *(_BYTE *)(this + 5822) = 0; /*0x45e13f*/
  *(_BYTE *)(this + 5823) = 0; /*0x45e145*/
  *(_BYTE *)(this + 5824) = 0; /*0x45e14b*/
  *(_BYTE *)(this + 5825) = 0; /*0x45e151*/
  *(_BYTE *)(this + 5826) = 0; /*0x45e157*/
  *(_BYTE *)(this + 5827) = 0; /*0x45e15d*/
  *(_BYTE *)(this + 5828) = 0; /*0x45e163*/
  *(_BYTE *)(this + 5829) = 0; /*0x45e169*/
  *(_BYTE *)(this + 5830) = 0; /*0x45e16f*/
  *(_BYTE *)(this + 5831) = 0; /*0x45e175*/
  *(_BYTE *)(this + 5832) = 0; /*0x45e17b*/
  *(_BYTE *)(this + 5833) = 0; /*0x45e181*/
  *(_BYTE *)(this + 5834) = 0; /*0x45e187*/
  *(_BYTE *)(this + 5835) = 0; /*0x45e18d*/
  *(_BYTE *)(this + 5836) = 0; /*0x45e193*/
  *(_BYTE *)(this + 5837) = 0; /*0x45e19e*/
  *(_DWORD *)(this + 5840) = 1065353216; /*0x45e1a4*/
  *(_DWORD *)(this + 5844) = 1065353216; /*0x45e1aa*/
  *(_DWORD *)(this + 5848) = 1065353216; /*0x45e1b0*/
  *(_DWORD *)(this + 5852) = 1065353216; /*0x45e1b6*/
  *(_DWORD *)(this + 5856) = 1065353216; /*0x45e1bc*/
  *(_BYTE *)(this + 5860) = 0; /*0x45e1c2*/
  *(_BYTE *)(this + 5861) = 0; /*0x45e1c8*/
  *(_BYTE *)(this + 5862) = 0; /*0x45e1ce*/
  *(_DWORD *)(this + 5864) = 1148829696; /*0x45e1d4*/
  *(_DWORD *)(this + 5868) = 0; /*0x45e1de*/
  *(_DWORD *)(this + 5872) = -1; /*0x45e1e4*/
  *(_DWORD *)(this + 5876) = -1; /*0x45e1ea*/
  *(_DWORD *)(this + 5880) = 9; /*0x45e1f0*/
  *(_DWORD *)(this + 5884) = -1; /*0x45e1fa*/
  *(_BYTE *)(this + 5888) = 0; /*0x45e200*/
  *(_BYTE *)(this + 5889) = 0; /*0x45e206*/
  *(_BYTE *)(this + 5890) = 0; /*0x45e20c*/
  *(_BYTE *)(this + 5891) = 0; /*0x45e212*/
  *(_BYTE *)(this + 5892) = 1; /*0x45e218*/
  *(_BYTE *)(this + 5893) = 0; /*0x45e21f*/
  *(_BYTE *)(this + 5894) = 0; /*0x45e225*/
  *(_BYTE *)(this + 5895) = 20; /*0x45e22b*/
  *(_BYTE *)(this + 5896) = 0; /*0x45e232*/
  *(_DWORD *)(this + 5900) = 0; /*0x45e238*/
  *(_DWORD *)(this + 5904) = 64; /*0x45e23e*/
  *(_BYTE *)(this + 5984) = 0; /*0x45e248*/
  *(_BYTE *)(this + 5985) = 0; /*0x45e24e*/
  *(_BYTE *)(this + 5986) = 0; /*0x45e254*/
  *(_BYTE *)(this + 5987) = 0; /*0x45e25a*/
  *(_BYTE *)(this + 5988) = 0; /*0x45e260*/
  *(_BYTE *)(this + 5989) = 0; /*0x45e266*/
  *(_BYTE *)(this + 5990) = 1; /*0x45e26c*/
  *(_BYTE *)(this + 5991) = 0; /*0x45e273*/
  *(_BYTE *)(this + 5992) = 0; /*0x45e279*/
  *(_BYTE *)(this + 5993) = 0; /*0x45e284*/
  *(_DWORD *)(this + 6016) = 1; /*0x45e28a*/
  *(_DWORD *)(this + 6024) = 0; /*0x45e292*/
  *(_DWORD *)(this + 6028) = 1; /*0x45e298*/
  *(_BYTE *)(this + 6032) = 1; /*0x45e29e*/
  *(_BYTE *)(this + 6033) = 0; /*0x45e2a5*/
  *(_DWORD *)(this + 6020) = &VectorClass<TPoint3D<int>>::`vftable'; /*0x45e2ab*/
  *(_DWORD *)(this + 6024) = __2_YAPAXI_Z(0xCu); /*0x45e2ba*/
  *(_BYTE *)(this + 6033) = 1; /*0x45e2c6*/
  *(_DWORD *)this = &BuildingTypeClass::`vftable'; /*0x45e2cd*/
  *(_DWORD *)(this + 4) = &BuildingTypeClass::`vftable'; /*0x45e2d3*/
  *(_DWORD *)(this + 8) = &BuildingTypeClass::`vftable'; /*0x45e2d9*/
  *(_DWORD *)(this + 12) = &BuildingTypeClass::`vftable'; /*0x45e2e1*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x45e2e8*/
  v4 = dword_A83C78; /*0x45e2ed*/
  if ( dword_A83C78 < dword_A83C70 /*0x45e32b*/
    || (byte_A83C75 || !dword_A83C70)
    && dword_A83C7C > 0
    && (v5 = (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A83C68 + 8))(
               &dword_A83C68,
               dword_A83C7C + dword_A83C70,
               0) == 0,
        v4 = dword_A83C78,
        !v5) )
  {
    dword_A83C78 = v4 + 1; /*0x45e330*/
    *((_DWORD *)dword_A83C6C + v4) = this; /*0x45e33a*/
    v4 = dword_A83C78; /*0x45e33d*/
  }
  v6 = 0; /*0x45e342*/
  if ( v4 <= 0 ) /*0x45e346*/
  {
LABEL_11:
    v6 = -1; /*0x45e35a*/
  }
  else
  {
    v7 = dword_A83C6C; /*0x45e348*/
    while ( *v7 != this ) /*0x45e350*/
    {
      ++v6; /*0x45e352*/
      ++v7; /*0x45e353*/
      if ( v6 >= v4 ) /*0x45e358*/
        goto LABEL_11; /*0x45e358*/
    }
  }
  *(_DWORD *)(this + 3576) = v6; /*0x45e35c*/
  *(_DWORD *)(this + 3844) = 0; /*0x45e362*/
  *(_DWORD *)(this + 3848) = 1; /*0x45e368*/
  *(_DWORD *)(this + 3852) = 0; /*0x45e36e*/
  *(_DWORD *)(this + 3856) = 0; /*0x45e374*/
  *(_DWORD *)(this + 3860) = 1; /*0x45e37a*/
  *(_DWORD *)(this + 3864) = 0; /*0x45e380*/
  *(_DWORD *)(this + 3868) = 0; /*0x45e386*/
  *(_DWORD *)(this + 3872) = 1; /*0x45e38c*/
  *(_DWORD *)(this + 3876) = 0; /*0x45e392*/
  *(_DWORD *)(this + 3892) = 0; /*0x45e398*/
  *(_DWORD *)(this + 3896) = 1; /*0x45e39e*/
  *(_DWORD *)(this + 3900) = 0; /*0x45e3a4*/
  *(_DWORD *)(this + 3904) = 0; /*0x45e3aa*/
  *(_DWORD *)(this + 3908) = 1; /*0x45e3b0*/
  *(_DWORD *)(this + 3912) = 0; /*0x45e3b6*/
  v8 = (_DWORD *)(this + 3932); /*0x45e3be*/
  v9 = 21; /*0x45e3c4*/
  do /*0x45e414*/
  {
    v10 = v8 - 4; /*0x45e3c9*/
    *v10 = 0; /*0x45e3ce*/
    v10[1] = 0; /*0x45e3d1*/
    v10[2] = 0; /*0x45e3d4*/
    v10[3] = 0; /*0x45e3d7*/
    *v8 = 0; /*0x45e3dc*/
    v8[1] = 0; /*0x45e3df*/
    v8[2] = 0; /*0x45e3e2*/
    v8[3] = 0; /*0x45e3e5*/
    v11 = v8 + 4; /*0x45e3e8*/
    v8 += 17; /*0x45e3eb*/
    --v9; /*0x45e3ee*/
    *v11 = 0; /*0x45e3ef*/
    v11[1] = 0; /*0x45e3f2*/
    v11[2] = 0; /*0x45e3f5*/
    v11[3] = 0; /*0x45e3f8*/
    *(v8 - 9) = 0; /*0x45e3fb*/
    *(v8 - 8) = 0; /*0x45e3fe*/
    *(v8 - 7) = 0; /*0x45e401*/
    *(v8 - 6) = 0; /*0x45e404*/
    *((_BYTE *)v8 - 20) = 1; /*0x45e407*/
    *((_BYTE *)v8 - 19) = 0; /*0x45e40b*/
    *((_BYTE *)v8 - 18) = 0; /*0x45e40e*/
    *((_BYTE *)v8 - 17) = 0; /*0x45e411*/
  }
  while ( v9 ); /*0x45e414*/
  *(_BYTE *)(this + 3676) = 0; /*0x45e416*/
  *(_BYTE *)(this + 3720) = 0; /*0x45e41c*/
  *(_BYTE *)(this + 5994) = 0; /*0x45e422*/
  *(_BYTE *)(this + 5908) = 0; /*0x45e428*/
  *(_BYTE *)(this + 3214) = 0; /*0x45e42e*/
  *(_BYTE *)(this + 5352) = 0; /*0x45e434*/
  *(_BYTE *)(this + 5360) = 0; /*0x45e43a*/
  *(_BYTE *)(this + 5368) = 0; /*0x45e440*/
  *(_BYTE *)(this + 5376) = 0; /*0x45e446*/
  *(_BYTE *)(this + 5384) = 0; /*0x45e44c*/
  v12 = (_DWORD *)(this + 5512); /*0x45e452*/
  v13 = 10; /*0x45e458*/
  do /*0x45e472*/
  {
    v14 = dword_89C8D4; /*0x45e463*/
    *v12 = dword_89C8D0; /*0x45e469*/
    v12[1] = v14; /*0x45e46b*/
    v12 += 2; /*0x45e46e*/
    --v13; /*0x45e471*/
  }
  while ( v13 ); /*0x45e472*/
  v15 = (_DWORD *)(this + 5592); /*0x45e474*/
  v16 = 8; /*0x45e47a*/
  do /*0x45e494*/
  {
    v17 = dword_89C8D4; /*0x45e485*/
    *v15 = dword_89C8D0; /*0x45e48b*/
    v15[1] = v17; /*0x45e48d*/
    v15 += 2; /*0x45e490*/
    --v16; /*0x45e493*/
  }
  while ( v16 ); /*0x45e494*/
  v18 = (_DWORD *)(this + 5732); /*0x45e49b*/
  v19 = 8; /*0x45e4a7*/
  do /*0x45e4c4*/
  {
    *(v18 - 16) = 0xFFFF; /*0x45e4ac*/
    *(v18 - 15) = 0xFFFF; /*0x45e4b4*/
    *v18 = 0xFFFF; /*0x45e4b7*/
    v18[1] = 0xFFFF; /*0x45e4bd*/
    v18 += 2; /*0x45e4c0*/
    --v19; /*0x45e4c3*/
  }
  while ( v19 ); /*0x45e4c4*/
  v20 = *(_DWORD **)(this + 6024); /*0x45e4c6*/
  *v20 = 0; /*0x45e4d2*/
  v20[1] = 0; /*0x45e4d6*/
  v20[2] = 0; /*0x45e4d9*/
  *(_BYTE *)(this + 3381) = 1; /*0x45e4dc*/
  *(_BYTE *)(this + 3382) = 1; /*0x45e4e3*/
  *(_BYTE *)(this + 3387) = 0; /*0x45e4ea*/
  *(_BYTE *)(this + 3384) = 0; /*0x45e4f0*/
  *(_BYTE *)(this + 3479) = 0; /*0x45e4f6*/
  *(_BYTE *)(this + 3478) = 0; /*0x45e4fc*/
  *(_BYTE *)(this + 3374) = 0; /*0x45e502*/
  return this; /*0x45e508*/
}



// ==== 0x0045E520  BuildingTypeClass::loadBuildingProperty_b_545E520  this=BuildingTypeClass  sig=csp ====
_DWORD *__thiscall BuildingTypeClass::loadBuildingProperty_b_545E520(BuildingTypeClass *this, int a2)
{
  TechnoTypeClass::Construct((int)this, a2); /*0x45e528*/
  this->Buildup[0] = 0; /*0x45e52f*/
  *(_DWORD *)&this->__pad_1714[116] = 0; /*0x45e535*/
  *(_DWORD *)&this->__pad_1714[120] = 0; /*0x45e53b*/
  this->__pad_1714[124] = 1; /*0x45e541*/
  this->__pad_1714[125] = 0; /*0x45e548*/
  *(_DWORD *)&this->__pad_1714[112] = &VectorClass<TPoint3D<int>>::`vftable'; /*0x45e54e*/
  this->TechnoTypeClass = &BuildingTypeClass::`vftable'; /*0x45e558*/
  this->? = &BuildingTypeClass::`vftable'; /*0x45e55e*/
  this->? = &BuildingTypeClass::`vftable'; /*0x45e565*/
  this->? = &BuildingTypeClass::`vftable'; /*0x45e56c*/
  return &this->TechnoTypeClass; /*0x45e575*/
}



// ==== 0x0045E580  BuildingTypeClass::CleanupMembers  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::CleanupMembers(BuildingTypeClass *this)
{
  char BuildupLoaded; // al
  int v3; // eax
  void *v4; // eax
  BuildingTypeClass *v6; // [esp+8h] [ebp-4h] BYREF

  BuildupLoaded = this->BuildupLoaded; /*0x45e587*/
  this->TechnoTypeClass = &BuildingTypeClass::`vftable'; /*0x45e58d*/
  this->? = &BuildingTypeClass::`vftable'; /*0x45e595*/
  this->? = &BuildingTypeClass::`vftable'; /*0x45e59c*/
  this->? = &BuildingTypeClass::`vftable'; /*0x45e5a3*/
  if ( BuildupLoaded && this->Buildup[0] ) /*0x45e5ac*/
  {
    __3_YAXPAX_Z((void *)this->Buildup[0]); /*0x45e5b7*/
    this->Buildup[0] = 0; /*0x45e5bf*/
    this->BuildupLoaded = 0; /*0x45e5c5*/
  }
  if ( this->__pad_F70[1452] && *(_DWORD *)&this->__pad_F70[1448] ) /*0x45e5d3*/
  {
    __3_YAXPAX_Z(*(void **)&this->__pad_F70[1448]); /*0x45e5de*/
    *(_DWORD *)&this->__pad_F70[1448] = 0; /*0x45e5e6*/
    this->__pad_F70[1452] = 0; /*0x45e5ec*/
  }
  if ( this->__pad_F70[1400] && *(_DWORD *)&this->__pad_F70[1396] ) /*0x45e5fa*/
  {
    __3_YAXPAX_Z(*(void **)&this->__pad_F70[1396]); /*0x45e605*/
    *(_DWORD *)&this->__pad_F70[1396] = 0; /*0x45e60d*/
    this->__pad_F70[1400] = 0; /*0x45e613*/
  }
  if ( this->__pad_F70[1408] && *(_DWORD *)&this->__pad_F70[1404] ) /*0x45e621*/
  {
    __3_YAXPAX_Z(*(void **)&this->__pad_F70[1404]); /*0x45e62c*/
    *(_DWORD *)&this->__pad_F70[1404] = 0; /*0x45e634*/
    this->__pad_F70[1408] = 0; /*0x45e63a*/
  }
  if ( this->__pad_F70[1416] && *(_DWORD *)&this->__pad_F70[1412] ) /*0x45e648*/
  {
    __3_YAXPAX_Z(*(void **)&this->__pad_F70[1412]); /*0x45e653*/
    *(_DWORD *)&this->__pad_F70[1412] = 0; /*0x45e65b*/
    this->__pad_F70[1416] = 0; /*0x45e661*/
  }
  if ( this->__pad_F70[1424] && *(_DWORD *)&this->__pad_F70[1420] ) /*0x45e66f*/
  {
    __3_YAXPAX_Z(*(void **)&this->__pad_F70[1420]); /*0x45e67a*/
    *(_DWORD *)&this->__pad_F70[1420] = 0; /*0x45e682*/
    this->__pad_F70[1424] = 0; /*0x45e688*/
  }
  if ( this->__pad_F70[1432] && *(_DWORD *)&this->__pad_F70[1428] ) /*0x45e696*/
  {
    __3_YAXPAX_Z(*(void **)&this->__pad_F70[1428]); /*0x45e6a1*/
    *(_DWORD *)&this->__pad_F70[1428] = 0; /*0x45e6a9*/
    this->__pad_F70[1432] = 0; /*0x45e6af*/
  }
  AbstractClass::AnnounceExpiredPointer(&this->TechnoTypeClass, 1); /*0x45e6b9*/
  v6 = this; /*0x45e6ce*/
  v3 = (*(int (__thiscall **)(_DWORD *, BuildingTypeClass **))(dword_A83C68 + 16))(&dword_A83C68, &v6); /*0x45e6d2*/
  if ( v3 != -1 && v3 < dword_A83C78 && v3 < --dword_A83C78 ) /*0x45e6ed*/
  {
    do /*0x45e705*/
    {
      ++v3; /*0x45e6f5*/
      *((_DWORD *)dword_A83C6C + v3 - 1) = *((_DWORD *)dword_A83C6C + v3); /*0x45e6f9*/
    }
    while ( v3 < dword_A83C78 ); /*0x45e705*/
  }
  v4 = *(void **)&this->__pad_1714[116]; /*0x45e707*/
  *(_DWORD *)&this->__pad_1714[112] = &VectorClass<TPoint3D<int>>::`vftable'; /*0x45e70d*/
  if ( v4 && this->__pad_1714[125] ) /*0x45e71b*/
  {
    __3_YAXPAX_Z(v4); /*0x45e724*/
    *(_DWORD *)&this->__pad_1714[116] = 0; /*0x45e72c*/
  }
  this->__pad_1714[125] = 0; /*0x45e734*/
  *(_DWORD *)&this->__pad_1714[120] = 0; /*0x45e73a*/
  return TechnoTypeClass::DTOR((int)this); /*0x45e745*/
}



// ==== 0x0045E750  nullsub_6  this=-  sig=ida-proto ====
void nullsub_6()
{
  ; /*0x45e750*/
}



// ==== 0x0045E7B0  BuildingTypeClass::FindIndexByName  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::FindIndexByName(BuildingTypeClass *this)
{
  int v2; // esi

  if ( !this ) /*0x45e7b6*/
    return -1; /*0x45e7b6*/
  v2 = 0; /*0x45e7bd*/
  if ( dword_A83C78 <= 0 ) /*0x45e7c1*/
    return -1; /*0x45e7e6*/
  while ( _strcmpi((char *)(*((_DWORD *)dword_A83C6C + v2) + 36), (char *)this) ) /*0x45e7da*/
  {
    if ( ++v2 >= dword_A83C78 ) /*0x45e7e4*/
      return -1; /*0x45e7e4*/
  }
  return v2; /*0x45e7e6*/
}



// ==== 0x0045E800  AbstractClass::clearRefCount  this=AbstractClass  sig=csp ====
char __thiscall AbstractClass::clearRefCount(AbstractClass *this, __int16 *a2, int a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // edx
  _DWORD v8[3]; // [esp+4h] [ebp-Ch] BYREF

  v4 = __2_YAPAXI_Z(0x720u); /*0x45e80b*/
  if ( !v4 ) /*0x45e815*/
    return 0; /*0x45e815*/
  v5 = BuildingClass::Construct(v4, (int)this, a3); /*0x45e81f*/
  if ( !v5 ) /*0x45e826*/
    return 0; /*0x45e86d*/
  v8[2] = 0; /*0x45e82e*/
  v6 = *a2 << 8; /*0x45e840*/
  v8[1] = (a2[1] << 8) + 128; /*0x45e84f*/
  v8[0] = v6 + 128; /*0x45e857*/
  return (*(char (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v5 + 216))(v5, v8, 0); /*0x45e866*/
}



// ==== 0x0045E880  AbstractClass::addRefCount  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::addRefCount(AbstractClass *this, int a2)
{
  int v3; // eax

  v3 = __2_YAPAXI_Z(0x720u); /*0x45e888*/
  if ( v3 ) /*0x45e892*/
    return BuildingClass::Construct(v3, (int)this, a2); /*0x45e89c*/
  else
    return 0; /*0x45e8a5*/
}



// ==== 0x0045E8B0  ObjectClass::method_45E8B0  this=ObjectClass  sig=csp ====
int __thiscall sub_45E8B0(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  int result; // eax
  char *v6; // edx

  result = 3 * a2 + 963; /*0x45e8bc*/
  v6 = (char *)this + 12 * a2; /*0x45e8c3*/
  *((_DWORD *)v6 + 961) = a3; /*0x45e8c6*/
  *((_DWORD *)v6 + 962) = a4; /*0x45e8d0*/
  *((_DWORD *)&this->AbstractClass + result) = a5; /*0x45e8da*/
  return result; /*0x45e8dd*/
}



// ==== 0x0045E8F0  ObjectClass::ProcessDataCCFileClass  this=ObjectClass  sig=csp ====
char sub_45E8F0()
{
  int SubFile; // eax
  int v1; // esi
  int v2; // edx
  int v3; // edi
  int i; // ecx
  _DWORD v6[4]; // [esp+4h] [ebp-10h] BYREF

  LOBYTE(SubFile) = (_BYTE)dword_89DDBC; /*0x45e8f0*/
  if ( !dword_89DDBC ) /*0x45e8fb*/
  {
    dword_89DDBC = (void *)SearchMIXFile(aBuildngzSha, 0); /*0x45e90d*/
    Building::GetFoundationSize(v6, 0); /*0x45e917*/
    SubFile = MixFileClass::GetSubFile((char **)dword_89DDBC, 0); /*0x45e924*/
    v1 = *((__int16 *)dword_89DDBC + 1); /*0x45e92f*/
    if ( *((__int16 *)dword_89DDBC + 2) > 0 ) /*0x45e939*/
    {
      v2 = SubFile; /*0x45e93c*/
      v3 = *((__int16 *)dword_89DDBC + 2); /*0x45e93e*/
      do /*0x45e95a*/
      {
        for ( i = 0; i < v1; ++i ) /*0x45e944*/
        {
          LOBYTE(SubFile) = *(_BYTE *)(v2 + i); /*0x45e946*/
          if ( (_BYTE)SubFile ) /*0x45e94b*/
          {
            LOBYTE(SubFile) = SubFile - 65; /*0x45e94d*/
            *(_BYTE *)(v2 + i) = SubFile; /*0x45e94f*/
          }
        }
        v2 += v1; /*0x45e957*/
        --v3; /*0x45e959*/
      }
      while ( v3 ); /*0x45e95a*/
    }
  }
  return SubFile; /*0x45e95d*/
}



// ==== 0x0045E970  BuildingTypeClass::LoadRepairAnimations  this=BuildingTypeClass  sig=csp ====
void BuildingTypeClass::LoadRepairAnimations(BuildingTypeClass *this)
{
  int v1; // ecx
  int v2; // edi
  int v3; // ebp
  int v4; // esi
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  int v9; // [esp+10h] [ebp-204h]
  char Buffer[512]; // [esp+14h] [ebp-200h] BYREF

  v2 = v1; /*0x45e97a*/
  ProcessDataCCFileClass(); /*0x45e97c*/
  FileSystem_POWEROFF_SHP = SearchMIXFile(aPoweroffShp, 0); /*0x45e994*/
  FileSystem_WRENCH_SHP = SearchMIXFile(aWrenchShp, 0); /*0x45e99e*/
  v3 = 0; /*0x45e9aa*/
  v9 = 0; /*0x45e9ae*/
  if ( dword_A83C78 > 0 ) /*0x45e9b2*/
  {
    do /*0x45eb42*/
    {
      v4 = *((_DWORD *)dword_A83C6C + v3); /*0x45e9c1*/
      if ( v9 <= *(char *)(v4 + 5895) ) /*0x45e9cd*/
        v9 = *(char *)(v4 + 5895); /*0x45e9cf*/
      if ( *(_BYTE *)(v4 + 556) ) /*0x45e9d3*/
      {
        if ( *(_BYTE *)(v4 + 5984) ) /*0x45e9df*/
        {
          if ( *(_DWORD *)(v4 + 164) ) /*0x45ea23*/
          {
            __3_YAXPAX_Z(*(void **)(v4 + 164)); /*0x45ea2e*/
            *(_DWORD *)(v4 + 164) = 0; /*0x45ea36*/
            *(_BYTE *)(v4 + 168) = 0; /*0x45ea3c*/
          }
        }
        else
        {
          _makepath(Buffer, 0, 0, (const char *)(v4 + 504), (const char *)&off_7E1BC6 + 112 * v2); /*0x45ea08*/
          *(_DWORD *)(v4 + 164) = SearchMIXFile(Buffer, 0); /*0x45ea1b*/
        }
        if ( *(_BYTE *)(v4 + 5985) ) /*0x45ea42*/
        {
          if ( *(_DWORD *)(v4 + 3584) ) /*0x45ea86*/
          {
            __3_YAXPAX_Z(*(void **)(v4 + 3584)); /*0x45ea91*/
            *(_DWORD *)(v4 + 3584) = 0; /*0x45ea99*/
            *(_BYTE *)(v4 + 3588) = 0; /*0x45ea9f*/
          }
        }
        else
        {
          _makepath(Buffer, 0, 0, (const char *)(v4 + 3676), (const char *)&off_7E1BC6 + 112 * v2); /*0x45ea6b*/
          *(_DWORD *)(v4 + 3584) = SearchMIXFile(Buffer, 0); /*0x45ea7e*/
        }
        v5 = *(_DWORD *)(v4 + 3584); /*0x45eaa5*/
        if ( v5 ) /*0x45eaad*/
        {
          v6 = *(__int16 *)(v5 + 6); /*0x45eab3*/
          v7 = 1; /*0x45eab9*/
          if ( v6 ) /*0x45eabe*/
            v7 = 75 / v6; /*0x45eac6*/
          *(_DWORD *)(v4 + 3844) = 0; /*0x45eac8*/
          *(_DWORD *)(v4 + 3848) = v6; /*0x45eace*/
          *(_DWORD *)(v4 + 3852) = v7; /*0x45ead4*/
        }
      }
      else if ( *(_BYTE *)(v4 + 567) ) /*0x45eadc*/
      {
        if ( *(_BYTE *)(v4 + 5984) && *(_DWORD *)(v4 + 164) ) /*0x45eaec*/
        {
          __3_YAXPAX_Z(*(void **)(v4 + 164)); /*0x45eaf7*/
          *(_DWORD *)(v4 + 164) = 0; /*0x45eaff*/
          *(_BYTE *)(v4 + 168) = 0; /*0x45eb05*/
        }
        if ( *(_BYTE *)(v4 + 5985) && *(_DWORD *)(v4 + 3584) ) /*0x45eb13*/
        {
          __3_YAXPAX_Z(*(void **)(v4 + 3584)); /*0x45eb1e*/
          *(_DWORD *)(v4 + 3584) = 0; /*0x45eb26*/
          *(_BYTE *)(v4 + 3588) = 0; /*0x45eb2c*/
        }
        BuildingTypeClass::LoadAnimations(v4, v2); /*0x45eb35*/
      }
      ++v3; /*0x45eb3f*/
    }
    while ( v3 < dword_A83C78 ); /*0x45eb42*/
    if ( v9 ) /*0x45eb4c*/
    {
      if ( dword_89DDC0 ) /*0x45eb56*/
        (*(void (__thiscall **)(Draw *, int))dword_89DDC0->Draw_field_00)(dword_89DDC0, 1); /*0x45eb5c*/
      v8 = __2_YAPAXI_Z(0x20u); /*0x45eb65*/
      if ( v8 ) /*0x45eb6c*/
      {
        *(_DWORD *)(v8 + 12) = 0; /*0x45eb72*/
        *(_DWORD *)v8 = &XSurface_Vtable; /*0x45eb78*/
        *(_DWORD *)(v8 + 4) = v9 + 16; /*0x45eb80*/
        *(_DWORD *)(v8 + 8) = v9 + 16; /*0x45eb8b*/
        *(_DWORD *)(v8 + 16) = 1; /*0x45eb8e*/
        Buffer::Init((Buffer *)(v8 + 20), 0, (v9 + 16) * (v9 + 16)); /*0x45eb95*/
        *(_DWORD *)v8 = &BSurface_Vtable; /*0x45eb9a*/
        dword_89DDC0 = (Draw *)v8; /*0x45eba0*/
      }
      else
      {
        dword_89DDC0 = 0; /*0x45ebb1*/
      }
    }
  }
}



// ==== 0x0045EBD0  AbstractClass::checkPointer  this=AbstractClass  sig=csp ====
_DWORD *__thiscall AbstractClass::checkPointer(AbstractClass *this, _DWORD *a2)
{
  _DWORD *FoundationSize; // eax
  int v3; // ecx
  int v4; // edx
  _DWORD v6[4]; // [esp+10h] [ebp-10h] BYREF

  if ( (*((int (__thiscall **)(AbstractClass *))this->vtable0 + 39))(this) ) /*0x45ebd5*/
  {
    FoundationSize = Building::GetFoundationSize(v6, 0); /*0x45ebe8*/
    v3 = FoundationSize[2]; /*0x45ebfa*/
    v4 = FoundationSize[3]; /*0x45ebfd*/
  }
  else
  {
    v3 = 0; /*0x45ec02*/
    v4 = 0; /*0x45ec04*/
  }
  *a2 = v3; /*0x45ec0d*/
  a2[1] = v3; /*0x45ec0f*/
  a2[2] = v4; /*0x45ec12*/
  return a2; /*0x45ec16*/
}



// ==== 0x0045EC20  AbstractClass::validatePointer  this=AbstractClass  sig=csp ====
int *__thiscall AbstractClass::validatePointer(AbstractClass *this, int a2)
{
  int *result; // eax

  if ( (byte_89C890 & 1) == 0 ) /*0x45ec2e*/
  {
    byte_89C890 |= 1u; /*0x45ec4c*/
    dword_89C8E8 = 2147450879; /*0x45ec52*/
    atexit(nullsub_107); /*0x45ec57*/
  }
  result = (int *)*((_DWORD *)this + 895); /*0x45ec5f*/
  if ( !result ) /*0x45ec68*/
    return &dword_89C8E8; /*0x45ec6a*/
  return result; /*0x45ec65*/
}



// ==== 0x0045EC80  nullsub_107  this=-  sig=ida-proto ====
void __cdecl nullsub_107()
{
  ; /*0x45ec80*/
}



// ==== 0x0045EC90  BuildingTypeClass::GetFoundationWidth  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::GetFoundationWidth(BuildingTypeClass *this)
{
  return stru_81926C.Type[this->Foundation[0]]; /*0x45ec9d*/
}



// ==== 0x0045ECA0  BuildingTypeClass::GetFoundationHeight  this=IUnknown  sig=csp ====
int __thiscall BuildingTypeClass::GetFoundationHeight(int *this, char a2)
{
  if ( a2 && *((_BYTE *)this + 5488) ) /*0x45eca8*/
    return dword_819310[this->q3BC] + 1; /*0x45ecc4*/
  else
    return dword_819310[this->q3BC]; /*0x45ecd1*/
}



// ==== 0x0045ECE0  BuildingTypeClass::GetMaxPips  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::GetMaxPips(BuildingTypeClass *this)
{
  int result; // eax
  int v2; // ecx
  int Storage; // ecx

  result = 60 * stru_81926C.Type[this->Foundation[0]] / 8; /*0x45ed02*/
  if ( this->?[0] == 2 ) /*0x45ed08*/
  {
    if ( this->Weeder ) /*0x45ed14*/
    {
      v2 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6096); /*0x45ed24*/
      if ( v2 >= 0 ) /*0x45ed2c*/
      {
        if ( v2 <= result ) /*0x45ed33*/
          return *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6096); /*0x45ed35*/
      }
      else
      {
        return 0; /*0x45ed2e*/
      }
    }
    else
    {
      Storage = this->?; /*0x45ed38*/
      if ( Storage >= 0 ) /*0x45ed40*/
      {
        if ( Storage <= result ) /*0x45ed47*/
          return Storage; /*0x45ed49*/
      }
      else
      {
        return 0; /*0x45ed42*/
      }
    }
  }
  else if ( this->?[0] != 4 ) /*0x45ed0d*/
  {
    return ObjectClass::GetModeSpecificValue((TechnoTypeClass *)this); /*0x45ed0f*/
  }
  return result; /*0x45ed30*/
}



// ==== 0x0045ED50  AbstractClass::removePointer  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::removePointer(HouseClass *this)
{
  int Member388; // esi
  int *v3; // eax
  int v4; // edi
  int v5; // ebp
  int v6; // ebx
  int v7; // eax

  Member388 = TechnoClass::GetMember388((TechnoTypeClass *)this); /*0x45ed61*/
  v3 = (int *)dword_8871E0->Easy[4]; /*0x45ed63*/
  v4 = *v3; /*0x45ed69*/
  if ( this == **(HouseClass ***)(*v3 + 1004) && !LOBYTE(dword_8871E0->ElevationIncrementBonus[1]) ) /*0x45ed75*/
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v3[1] + 172))(v3[1]); /*0x45ed8c*/
    Member388 += (v5 + (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 172))(v4)) / -2; /*0x45eda1*/
  }
  v6 = *(_DWORD *)&this->builtUnitTypes[880]; /*0x45eda3*/
  if ( !v6 ) /*0x45edab*/
    return Member388; /*0x45edc8*/
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 172))(v6); /*0x45edb1*/
  return (Member388 - v7) & ((Member388 - v7 <= 0) - 1); /*0x45edc1*/
}



// ==== 0x0045EDD0  AbstractClass::addPointer  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::addPointer(HouseClass *this, int a2)
{
  int v4; // esi
  int *v5; // eax
  int v6; // edi
  int v7; // ebx
  int v8; // eax
  int v10; // [esp+14h] [ebp+4h]

  v4 = TechnoTypeClass::ComputeValueSimple((TechnoTypeClass *)this, a2); /*0x45ede6*/
  v5 = (int *)dword_8871E0->Easy[4]; /*0x45ede8*/
  v6 = *v5; /*0x45edee*/
  if ( this == **(HouseClass ***)(*v5 + 1004) && !LOBYTE(dword_8871E0->ElevationIncrementBonus[1]) ) /*0x45edfa*/
  {
    v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5[1] + 132))(v5[1], a2); /*0x45ee19*/
    v4 += (v10 + (*(int (__thiscall **)(int, int))(*(_DWORD *)v6 + 132))(v6, a2)) / 2; /*0x45ee2e*/
  }
  v7 = *(_DWORD *)&this->builtUnitTypes[880]; /*0x45ee30*/
  if ( !v7 ) /*0x45ee38*/
    return v4; /*0x45ee58*/
  v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 132))(v7, a2); /*0x45ee3f*/
  return v8 + v4 <= 0 ? 0 : v8 + v4;
}



// ==== 0x0045EE70  BuildingClass::ApplyFoundationDamage  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ApplyFoundationDamage(BuildingClass *this, _WORD *a2, void *other)
{
  _WORD *v4; // edi
  _WORD *v5; // eax
  __int16 v6; // dx
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // esi
  Cell *v10; // eax
  char v12; // [esp+13h] [ebp-15h]
  __int16 v13[2]; // [esp+14h] [ebp-14h] BYREF
  int v14; // [esp+18h] [ebp-10h]
  _DWORD v15[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v12 = 0; /*0x45ee81*/
  if ( *a2 == word_89C8B0 && a2[1] == word_89C8B2 ) /*0x45ee9a*/
    return 0; /*0x45ee9a*/
  v4 = (_WORD *)(*(int (__thiscall **)(BuildingClass *, int))(this->vtable0 + 144))(this, 1); /*0x45eeac*/
  while ( *v4 != 0x7FFF || v4[1] != 0x7FFF ) /*0x45eebb*/
  {
    v5 = v4; /*0x45eec5*/
    v4 += 2; /*0x45eec7*/
    v6 = a2[1] + v5[1]; /*0x45eed1*/
    LOWORD(v14) = *v5 + *a2; /*0x45eed5*/
    HIWORD(v14) = v6; /*0x45eede*/
    *(_DWORD *)v13 = v14; /*0x45eeed*/
    if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, v13) ) /*0x45eef1*/
    {
      v7 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v13); /*0x45ef04*/
      v8 = v7[17]; /*0x45ef09*/
      if ( v8 != -1 && (this != (BuildingClass *)dword_8871E0->NukeDown || v8 != 2) ) /*0x45ef26*/
        return 2; /*0x45f017*/
      v9 = v7[57]; /*0x45ef2c*/
      if ( v9 ) /*0x45ef34*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 44))(v9) == 36 ) /*0x45ef44*/
          return 2; /*0x45ef44*/
        if ( (*(_BYTE *)(v9 + 20) & 1) != 0 ) /*0x45ef4e*/
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 44))(v9) == 6 ) /*0x45ef5e*/
          {
            if ( !(unsigned __int8)BuildingClass::CanAcceptType((bool *)v9, (int)this, (int)other) ) /*0x45ef6f*/
              return 2; /*0x45ef6f*/
          }
          else
          {
            if ( !(unsigned __int8)HouseClass::IsAlliedWith(*(HouseClass **)(v9 + 540)) /*0x45ef9b*/
              || (*(_BYTE *)(v9 + 20) & 4) == 0 )
            {
              return 2; /*0x45ef9b*/
            }
            v12 = 1; /*0x45efa3*/
            if ( !*(_DWORD *)(v9 + 1444) /*0x45efdf*/
              || (v15[0] = *(_DWORD *)(v9 + 156),
                  v15[1] = *(_DWORD *)(v9 + 160),
                  v15[2] = *(_DWORD *)(v9 + 164),
                  Coord::To_Cell((Coord *)&dword_87F7E8, v15) == *(CellClass **)(v9 + 1444)) )
            {
              v10 = (Cell *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v13); /*0x45effa*/
              Cell::ApplyDamage(v10, (int)&dword_89C8D0, 1, 1, 0); /*0x45f001*/
            }
          }
        }
      }
    }
  }
  return v12 != 0; /*0x45f034*/
}



// ==== 0x0045F040  AbstractClass::LoadTypeFile  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::LoadTypeFile(AbstractClass *this)
{
  int result; // eax
  void *v3; // eax
  void *v4; // eax
  CCFileClass v5; // [esp+4h] [ebp-1DCh] BYREF
  int v6[3]; // [esp+5Ch] [ebp-184h] BYREF
  int v7; // [esp+68h] [ebp-178h]
  CCFileClass v8; // [esp+70h] [ebp-170h] BYREF
  int v9[3]; // [esp+C8h] [ebp-118h] BYREF
  int v10; // [esp+D4h] [ebp-10Ch]
  char Destination[260]; // [esp+DCh] [ebp-104h] BYREF

  result = *((_DWORD *)this + 41); /*0x45f049*/
  if ( !result && *((_BYTE *)this + 5984) ) /*0x45f057*/
  {
    if ( *((_BYTE *)this + 5994) ) /*0x45f065*/
    {
      CCFileClass::Construct(&v5, (char *)this + 5994); /*0x45f07f*/
      CCFileClass::Open(&v5, 0); /*0x45f08a*/
      v3 = CCFileClass::ReadEntireFile(&v5); /*0x45f093*/
      *((_DWORD *)this + 41) = v3; /*0x45f09a*/
      if ( v3 ) /*0x45f0a0*/
      {
        *((_BYTE *)this + 168) = 1; /*0x45f0a2*/
      }
      else
      {
        strncpy(Destination, (const char *)this + 5994, 0x13u); /*0x45f0b6*/
        ObjectTypeClass::SetRTTI71((ObjectTypeClass *)Destination); /*0x45f0c5*/
        CCFileClass::Construct(&v8, Destination); /*0x45f0d6*/
        v4 = CCFileClass::ReadEntireFile(&v8); /*0x45f0df*/
        *((_DWORD *)this + 41) = v4; /*0x45f0e6*/
        if ( v4 ) /*0x45f0ec*/
          *((_BYTE *)this + 168) = 1; /*0x45f0ee*/
        *(_DWORD *)v8.CDFileClass = &CCFileClass::`vftable'; /*0x45f0fc*/
        v10 = 0; /*0x45f104*/
        Vector::Clear((int)v9); /*0x45f10f*/
        *(_DWORD *)v8.CDFileClass = &off_7E1668; /*0x45f118*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v8); /*0x45f120*/
      }
      *(_DWORD *)v5.CDFileClass = &CCFileClass::`vftable'; /*0x45f129*/
      v7 = 0; /*0x45f131*/
      Vector::Clear((int)v6); /*0x45f139*/
      *(_DWORD *)v5.CDFileClass = &off_7E1668; /*0x45f142*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v5); /*0x45f14a*/
    }
    return *((_DWORD *)this + 41); /*0x45f14f*/
  }
  return result; /*0x45f156*/
}



// ==== 0x0045F160  BuildingClass::GetPlacementCoords  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetPlacementCoords(BuildingClass *this, int *a2, _DWORD *a3)
{
  int result; // eax

  if ( *((_BYTE *)this + 5992) && a2 ) /*0x45f171*/
  {
    result = *((_DWORD *)this + 1341); /*0x45f173*/
    if ( result ) /*0x45f17b*/
    {
      *a2 = result; /*0x45f1ad*/
      LOBYTE(result) = 1; /*0x45f1af*/
      *a3 = 0; /*0x45f1b2*/
      return result; /*0x45f1b8*/
    }
    result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 39))(this); /*0x45f17f*/
    *a2 = result; /*0x45f187*/
    if ( result ) /*0x45f189*/
    {
      result = *(__int16 *)(result + 6) / 2; /*0x45f192*/
      if ( result > 3 ) /*0x45f197*/
      {
        LOBYTE(result) = 1; /*0x45f19d*/
        *a3 = 3; /*0x45f1a0*/
        return result; /*0x45f1a6*/
      }
    }
  }
  LOBYTE(result) = 0; /*0x45f1bb*/
  return result; /*0x45f19f*/
}



// ==== 0x0045F1D0  TacticalClass::initTacticalMap  this=TacticalClass  sig=csp ====
char __thiscall TacticalClass::initTacticalMap(TacticalClass *this, int *a2, int *a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax

  if ( *((_BYTE *)this + 5992) && a2 ) /*0x45f1e1*/
  {
    v3 = *((_DWORD *)this + 1341); /*0x45f1e3*/
    if ( v3 ) /*0x45f1eb*/
    {
      *a2 = v3; /*0x45f218*/
      *a3 = *(__int16 *)(v3 + 6) / 2; /*0x45f227*/
    }
    else
    {
      v4 = (*((int (__thiscall **)(TacticalClass *))this->AbstractClass + 39))(this); /*0x45f1ef*/
      *a2 = v4; /*0x45f1f7*/
      if ( v4 ) /*0x45f1f9*/
      {
        v5 = *(__int16 *)(v4 + 6) / 2; /*0x45f202*/
        if ( v5 > 3 ) /*0x45f207*/
        {
          *a3 = v5 + 3; /*0x45f211*/
          return 1; /*0x45f215*/
        }
      }
    }
  }
  return 0; /*0x45f210*/
}



// ==== 0x0045F230  BuildingTypeClass::LoadAnimations  this=ObjectTypeClass  sig=csp ====
void __thiscall BuildingTypeClass::LoadAnimations(int this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // esi
  int v6; // eax
  _BYTE *v7; // esi
  void *FileSHP; // eax
  _BYTE *v9; // esi
  void *v10; // eax
  int v11; // eax
  _BYTE *v12; // esi
  void *v13; // eax
  _BYTE *v14; // esi
  void *v15; // eax
  _BYTE *v16; // esi
  void *v17; // eax
  int v18; // eax
  _BYTE *v19; // esi
  void *v20; // eax
  const char *v21; // edi
  int v22; // eax
  int v23; // [esp+10h] [ebp-158h]
  char Filename[64]; // [esp+14h] [ebp-154h] BYREF
  char Ext[16]; // [esp+54h] [ebp-114h] BYREF
  char Source[260]; // [esp+64h] [ebp-104h] BYREF

  if ( !*(_BYTE *)(this + 5985) && strlen((const char *)(this + 3676)) ) /*0x45f257*/
  {
    _makepath(Source, 0, 0, (const char *)(this + 3676), ::Ext); /*0x45f26f*/
    TheaterObjectTypeClassSpecificID(Source, a2); /*0x45f282*/
    v3 = SearchMIXFile(Source, 0); /*0x45f28d*/
    if ( !v3 ) /*0x45f294*/
    {
      ObjectTypeClass::SetRTTI71((ObjectTypeClass *)Source); /*0x45f29a*/
      v3 = SearchMIXFile(Source, 0); /*0x45f2a5*/
    }
    *(_DWORD *)(this + 3584) = v3; /*0x45f2ac*/
    if ( v3 ) /*0x45f2b2*/
    {
      v4 = 1; /*0x45f2bb*/
      v5 = *(__int16 *)(v3 + 6) / 2; /*0x45f2c8*/
      v23 = v5; /*0x45f2cc*/
      if ( *(_BYTE *)(this + 5815) ) /*0x45f2c2*/
      {
        v5 = *(_DWORD *)(this + 5880) + 1; /*0x45f2d8*/
        v23 = v5; /*0x45f2d9*/
      }
      if ( v5 > 0 ) /*0x45f2df*/
      {
        LOWORD(v6) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5400) * 900.0 / (double)v23); /*0x45f2f7*/
        v4 = v6; /*0x45f2fc*/
      }
      *(_DWORD *)(this + 3844) = 0; /*0x45f2fe*/
      *(_DWORD *)(this + 3848) = v5; /*0x45f304*/
      *(_DWORD *)(this + 3852) = v4; /*0x45f30a*/
    }
  }
  INIClass::GetString( /*0x45f32d*/
    (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
    (unsigned __int8 *)(this + 504),
    aDeployinganim,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f336*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f357*/
    TheaterObjectTypeClassSpecificID(Source, a2); /*0x45f36a*/
    v7 = (_BYTE *)(this + 5352); /*0x45f375*/
    if ( *(_BYTE *)(this + 5352) && *(_DWORD *)(this + 5348) ) /*0x45f37f*/
    {
      __3_YAXPAX_Z(*(void **)(this + 5348)); /*0x45f38a*/
      *(_DWORD *)(this + 5348) = 0; /*0x45f392*/
      *v7 = 0; /*0x45f398*/
    }
    FileSHP = LoadFileSHP(Source, (bool *)(this + 5352)); /*0x45f3a0*/
    *(_DWORD *)(this + 5348) = FileSHP; /*0x45f3a7*/
    if ( !FileSHP ) /*0x45f3ad*/
    {
      ObjectTypeClass::SetRTTI71((ObjectTypeClass *)Source); /*0x45f3b3*/
      if ( *v7 && *(_DWORD *)(this + 5348) ) /*0x45f3bc*/
      {
        __3_YAXPAX_Z(*(void **)(this + 5348)); /*0x45f3c7*/
        *(_DWORD *)(this + 5348) = 0; /*0x45f3cf*/
        *v7 = 0; /*0x45f3d5*/
      }
      *(_DWORD *)(this + 5348) = LoadFileSHP(Source, (bool *)(this + 5352)); /*0x45f3e2*/
    }
  }
  INIClass::GetString( /*0x45f405*/
    (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
    (unsigned __int8 *)(this + 504),
    aRoofdeployinga,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f40e*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f42f*/
    TheaterObjectTypeClassSpecificID(Source, a2); /*0x45f442*/
    v9 = (_BYTE *)(this + 5376); /*0x45f44d*/
    if ( *(_BYTE *)(this + 5376) && *(_DWORD *)(this + 5372) ) /*0x45f457*/
    {
      __3_YAXPAX_Z(*(void **)(this + 5372)); /*0x45f462*/
      *(_DWORD *)(this + 5372) = 0; /*0x45f46a*/
      *v9 = 0; /*0x45f470*/
    }
    v10 = LoadFileSHP(Source, (bool *)(this + 5376)); /*0x45f478*/
    *(_DWORD *)(this + 5372) = v10; /*0x45f47f*/
    if ( !v10 ) /*0x45f485*/
    {
      ObjectTypeClass::SetRTTI71((ObjectTypeClass *)Source); /*0x45f48b*/
      if ( *v9 && *(_DWORD *)(this + 5372) ) /*0x45f494*/
      {
        __3_YAXPAX_Z(*(void **)(this + 5372)); /*0x45f49f*/
        *(_DWORD *)(this + 5372) = 0; /*0x45f4a7*/
        *v9 = 0; /*0x45f4ad*/
      }
      *(_DWORD *)(this + 5372) = LoadFileSHP(Source, (bool *)(this + 5352)); /*0x45f4be*/
    }
  }
  INIClass::GetString( /*0x45f4e1*/
    (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
    (unsigned __int8 *)(this + 504),
    aDooranim,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f4ea*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f507*/
    TheaterObjectTypeClassSpecificID(Source, a2); /*0x45f51a*/
    v11 = SearchMIXFile(Source, 0); /*0x45f525*/
    *(_DWORD *)(this + 5388) = v11; /*0x45f52c*/
    if ( !v11 ) /*0x45f532*/
    {
      ObjectTypeClass::SetRTTI71((ObjectTypeClass *)Source); /*0x45f538*/
      *(_DWORD *)(this + 5388) = SearchMIXFile(Source, 0); /*0x45f548*/
    }
  }
  INIClass::GetString( /*0x45f565*/
    (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
    (unsigned __int8 *)(this + 504),
    aUnderdooranim,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f56e*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f58f*/
    TheaterObjectTypeClassSpecificID(Source, a2); /*0x45f5a2*/
    v12 = (_BYTE *)(this + 5360); /*0x45f5ad*/
    if ( *(_BYTE *)(this + 5360) && *(_DWORD *)(this + 5356) ) /*0x45f5b7*/
    {
      __3_YAXPAX_Z(*(void **)(this + 5356)); /*0x45f5c2*/
      *(_DWORD *)(this + 5356) = 0; /*0x45f5ca*/
      *v12 = 0; /*0x45f5d0*/
    }
    v13 = LoadFileSHP(Source, (bool *)(this + 5360)); /*0x45f5d8*/
    *(_DWORD *)(this + 5356) = v13; /*0x45f5df*/
    if ( !v13 ) /*0x45f5e5*/
    {
      ObjectTypeClass::SetRTTI71((ObjectTypeClass *)Source); /*0x45f5eb*/
      if ( *v12 && *(_DWORD *)(this + 5356) ) /*0x45f5f4*/
      {
        __3_YAXPAX_Z(*(void **)(this + 5356)); /*0x45f5ff*/
        *(_DWORD *)(this + 5356) = 0; /*0x45f607*/
        *v12 = 0; /*0x45f60d*/
      }
      *(_DWORD *)(this + 5356) = SearchMIXFile(Source, 0); /*0x45f61a*/
    }
  }
  v14 = (_BYTE *)(this + 5368); /*0x45f626*/
  if ( *(_BYTE *)(this + 5368) && *(_DWORD *)(this + 5364) ) /*0x45f630*/
  {
    __3_YAXPAX_Z(*(void **)(this + 5364)); /*0x45f63b*/
    *(_DWORD *)(this + 5364) = 0; /*0x45f643*/
    *v14 = 0; /*0x45f649*/
  }
  INIClass::GetString( /*0x45f668*/
    (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
    (unsigned __int8 *)(this + 504),
    aRubble,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f671*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f68e*/
    TheaterObjectTypeClassSpecificID(Source, a2); /*0x45f6a1*/
    v15 = LoadFileSHP(Source, (bool *)(this + 5368)); /*0x45f6ac*/
    *(_DWORD *)(this + 5364) = v15; /*0x45f6b3*/
    if ( !v15 ) /*0x45f6b9*/
    {
      ObjectTypeClass::SetRTTI71((ObjectTypeClass *)Source); /*0x45f6bf*/
      if ( *v14 && *(_DWORD *)(this + 5364) ) /*0x45f6c8*/
      {
        __3_YAXPAX_Z(*(void **)(this + 5364)); /*0x45f6d3*/
        *(_DWORD *)(this + 5364) = 0; /*0x45f6db*/
        *v14 = 0; /*0x45f6e1*/
      }
      *(_DWORD *)(this + 5364) = SearchMIXFile(Source, 0); /*0x45f6ee*/
    }
  }
  INIClass::GetString( /*0x45f711*/
    (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
    (unsigned __int8 *)(this + 504),
    aUnderroofdoora,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f71a*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f73b*/
    TheaterObjectTypeClassSpecificID(Source, a2); /*0x45f74e*/
    v16 = (_BYTE *)(this + 5384); /*0x45f759*/
    if ( *(_BYTE *)(this + 5384) && *(_DWORD *)(this + 5380) ) /*0x45f763*/
    {
      __3_YAXPAX_Z(*(void **)(this + 5380)); /*0x45f76e*/
      *(_DWORD *)(this + 5380) = 0; /*0x45f776*/
      *v16 = 0; /*0x45f77c*/
    }
    v17 = LoadFileSHP(Source, (bool *)(this + 5384)); /*0x45f784*/
    *(_DWORD *)(this + 5380) = v17; /*0x45f78b*/
    if ( !v17 ) /*0x45f791*/
    {
      ObjectTypeClass::SetRTTI71((ObjectTypeClass *)Source); /*0x45f797*/
      if ( *v16 && *(_DWORD *)(this + 5380) ) /*0x45f7a0*/
      {
        __3_YAXPAX_Z(*(void **)(this + 5380)); /*0x45f7ab*/
        *(_DWORD *)(this + 5380) = 0; /*0x45f7b3*/
        *v16 = 0; /*0x45f7b9*/
      }
      *(_DWORD *)(this + 5380) = SearchMIXFile(Source, 0); /*0x45f7c6*/
    }
  }
  INIClass::GetString( /*0x45f7e9*/
    (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
    (unsigned __int8 *)(this + 504),
    aSpecialzoverla,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f7f2*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f80f*/
    TheaterObjectTypeClassSpecificID(Source, a2); /*0x45f822*/
    v18 = SearchMIXFile(Source, 0); /*0x45f82d*/
    *(_DWORD *)(this + 5392) = v18; /*0x45f834*/
    if ( !v18 ) /*0x45f83a*/
    {
      ObjectTypeClass::SetRTTI71((ObjectTypeClass *)Source); /*0x45f840*/
      *(_DWORD *)(this + 5392) = SearchMIXFile(Source, 0); /*0x45f850*/
    }
  }
  INIClass::GetString( /*0x45f86d*/
    (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
    (unsigned __int8 *)(this + 504),
    aBibshape,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f876*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f897*/
    TheaterObjectTypeClassSpecificID(Source, a2); /*0x45f8aa*/
    v19 = (_BYTE *)(this + 5404); /*0x45f8b5*/
    if ( *(_BYTE *)(this + 5404) && *(_DWORD *)(this + 5400) ) /*0x45f8bf*/
    {
      __3_YAXPAX_Z(*(void **)(this + 5400)); /*0x45f8ca*/
      *(_DWORD *)(this + 5400) = 0; /*0x45f8d2*/
      *v19 = 0; /*0x45f8d8*/
    }
    v20 = LoadFileSHP(Source, (bool *)(this + 5404)); /*0x45f8e0*/
    *(_DWORD *)(this + 5400) = v20; /*0x45f8e7*/
    if ( !v20 ) /*0x45f8ed*/
    {
      ObjectTypeClass::SetRTTI71((ObjectTypeClass *)Source); /*0x45f8f3*/
      if ( *v19 && *(_DWORD *)(this + 5400) ) /*0x45f8fc*/
      {
        __3_YAXPAX_Z(*(void **)(this + 5400)); /*0x45f907*/
        *(_DWORD *)(this + 5400) = 0; /*0x45f90f*/
        *v19 = 0; /*0x45f915*/
      }
      *(_DWORD *)(this + 5400) = SearchMIXFile(Source, 0); /*0x45f922*/
    }
  }
  INIClass::GetString( /*0x45f945*/
    (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
    (unsigned __int8 *)(this + 504),
    (unsigned __int8 *)g_INI_Key_Image,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( !*(_BYTE *)(this + 556) || a2 == -1 ) /*0x45f95c*/
    v21 = ::Ext; /*0x45f97a*/
  else
    v21 = (const char *)(&off_7E1BC6 + 28 * a2); /*0x45f96e*/
  strcpy(Ext, v21); /*0x45f993*/
  if ( strlen(Filename) ) /*0x45f9a2*/
    _makepath(Source, 0, 0, Filename, Ext); /*0x45f9bd*/
  else
    _makepath(Source, 0, 0, (const char *)(this + 504), Ext); /*0x45f9cd*/
  TheaterObjectTypeClassSpecificID(Source, a2); /*0x45f9e0*/
  strncpy((char *)(this + 5994), Source, 0x13u); /*0x45f9f3*/
  if ( !*(_BYTE *)(this + 5984) ) /*0x45f9f8*/
  {
    v22 = SearchMIXFile(Source, 0); /*0x45fa0b*/
    *(_DWORD *)(this + 164) = v22; /*0x45fa12*/
    if ( !v22 ) /*0x45fa18*/
    {
      ObjectTypeClass::SetRTTI71((ObjectTypeClass *)Source); /*0x45fa1e*/
      strncpy((char *)(this + 5994), Source, 0x13u); /*0x45fa2b*/
      *(_DWORD *)(this + 164) = SearchMIXFile(Source, 0); /*0x45fa3e*/
    }
    if ( !*(_DWORD *)(this + 164) ) /*0x45fa44*/
    {
      ObjectTypeClass::SetRTTI71((ObjectTypeClass *)Source); /*0x45fa50*/
      strncpy((char *)(this + 5994), Source, 0x13u); /*0x45fa5d*/
      *(_DWORD *)(this + 164) = SearchMIXFile(Source, 0); /*0x45fa70*/
    }
  }
  BuildingTypeClass::LoadVoxel((BuildingTypeClass *)this); /*0x45fa78*/
}



// ==== 0x0045FA90  BuildingTypeClass::LoadVoxel  this=BuildingTypeClass  sig=csp ====
void __thiscall BuildingTypeClass::LoadVoxel(BuildingTypeClass *this)
{
  char *v2; // eax
  void *v3; // esi
  File *v4; // eax
  _DWORD *FileVXL; // eax
  void *v6; // esi
  File *v7; // eax
  _DWORD *FileHVA; // eax
  int Info; // eax
  char *v10; // eax
  char *v11; // eax
  _BYTE *v12; // eax
  void *v13; // esi
  File *v14; // eax
  _DWORD *v15; // eax
  void *v16; // esi
  File *v17; // eax
  _DWORD *v18; // eax
  int v19; // eax
  char *v20; // [esp-Ch] [ebp-2D8h]
  char *v21; // [esp-Ch] [ebp-2D8h]
  CCFileClass v22; // [esp+8h] [ebp-2C4h] BYREF
  int v23[3]; // [esp+60h] [ebp-26Ch] BYREF
  int v24; // [esp+6Ch] [ebp-260h]
  CCFileClass v25; // [esp+74h] [ebp-258h] BYREF
  int v26[3]; // [esp+CCh] [ebp-200h] BYREF
  int v27; // [esp+D8h] [ebp-1F4h]
  CCFileClass v28; // [esp+E0h] [ebp-1ECh] BYREF
  int v29[3]; // [esp+138h] [ebp-194h] BYREF
  int v30; // [esp+144h] [ebp-188h]
  char Destination[4]; // [esp+14Ch] [ebp-180h] BYREF
  char v32[124]; // [esp+150h] [ebp-17Ch] BYREF
  char Buffer[4]; // [esp+1CCh] [ebp-100h] BYREF
  char String[252]; // [esp+1D0h] [ebp-FCh] BYREF

  if ( this->TurretAnimIsVoxel || this->BarrelAnimIsVoxel ) /*0x45faa4*/
  {
    strcpy(Destination, &this->__pad_F70[576]); /*0x45fadf*/
    _makepath(Buffer, 0, 0, Destination, g_Str_File__VXL); /*0x45faf3*/
    v20 = _strupr(off_8194A8); /*0x45fb05*/
    v2 = _strupr(String); /*0x45fb0e*/
    if ( strstr(v2, v20) ) /*0x45fb17*/
    {
      CCFileClass::Construct(&v25, Buffer); /*0x45fb3b*/
      if ( (unsigned __int8)CCFileClass::Open(&v25, 0) ) /*0x45fb48*/
      {
        v3 = (void *)this->?[0]; /*0x45fb55*/
        if ( v3 ) /*0x45fb5d*/
        {
          WaveClass::Destroy((WaveClass *)this->?[0]); /*0x45fb61*/
          __3_YAXPAX_Z(v3); /*0x45fb67*/
        }
        v4 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x45fb71*/
        if ( v4 ) /*0x45fb7b*/
          FileVXL = File::LoadFileVXL(v4, (int)&v25, 0); /*0x45fb85*/
        else
          FileVXL = 0; /*0x45fb8c*/
        this->?[0] = (int)FileVXL; /*0x45fb8e*/
        _makepath(Buffer, 0, 0, Destination, g_Str_File__HVA); /*0x45fbab*/
        CCFileClass::Construct(&v22, Buffer); /*0x45fbbf*/
        v6 = (void *)this->?[0]; /*0x45fbc4*/
        if ( v6 ) /*0x45fbcc*/
        {
          String::Release((String *)this->?[0]); /*0x45fbd0*/
          __3_YAXPAX_Z(v6); /*0x45fbd6*/
        }
        v7 = (File *)__2_YAPAXI_Z(0x10u); /*0x45fbe0*/
        if ( v7 ) /*0x45fbea*/
          FileHVA = File::LoadFileHVA(v7, (int)&v22); /*0x45fbf3*/
        else
          FileHVA = 0; /*0x45fbfa*/
        this->?[0] = (int)FileHVA; /*0x45fbfe*/
        if ( FileHVA && !*(_BYTE *)FileHVA ) /*0x45fc06*/
        {
          Info = VoxelSection::GetInfo((VoxelSection *)this->?[0], 0, 0); /*0x45fc12*/
          Matrix::Scale((Matrix *)this->?[0], *(float *)(Info + 12)); /*0x45fc21*/
        }
        *(_DWORD *)v22.CDFileClass = &CCFileClass::`vftable'; /*0x45fc2a*/
        v24 = 0; /*0x45fc32*/
        Vector::Clear((int)v23); /*0x45fc36*/
        *(_DWORD *)v22.CDFileClass = &off_7E1668; /*0x45fc3f*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v22); /*0x45fc43*/
      }
      v21 = _strupr(off_8194A8); /*0x45fc55*/
      v10 = _strupr(v32); /*0x45fc5e*/
      v11 = strstr(v10, v21); /*0x45fc67*/
      if ( v11 ) /*0x45fc71*/
      {
        *v11 = 66; /*0x45fc73*/
        v12 = v11 + 1; /*0x45fc76*/
        *v12++ = 65; /*0x45fc77*/
        *v12++ = 82; /*0x45fc7b*/
        *v12 = 76; /*0x45fc7f*/
        v12[1] = 0; /*0x45fc82*/
      }
      *(_DWORD *)v25.CDFileClass = &CCFileClass::`vftable'; /*0x45fc8c*/
      v27 = 0; /*0x45fc94*/
      Vector::Clear((int)v26); /*0x45fc9b*/
      *(_DWORD *)v25.CDFileClass = &off_7E1668; /*0x45fca4*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v25); /*0x45fca8*/
    }
    else if ( this->BarrelAnimIsVoxel ) /*0x45fcaf*/
    {
      strncpy(Destination, this->__pad_1714, 0x80u); /*0x45fccb*/
    }
    _makepath(Buffer, 0, 0, Destination, g_Str_File__VXL); /*0x45fcea*/
    CCFileClass::Construct(&v28, Buffer); /*0x45fd01*/
    if ( (unsigned __int8)CCFileClass::Open(&v28, 0) ) /*0x45fd0e*/
    {
      v13 = (void *)this->?[1]; /*0x45fd1b*/
      if ( v13 ) /*0x45fd23*/
      {
        WaveClass::Destroy((WaveClass *)this->?[1]); /*0x45fd27*/
        __3_YAXPAX_Z(v13); /*0x45fd2d*/
      }
      v14 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x45fd37*/
      if ( v14 ) /*0x45fd41*/
        v15 = File::LoadFileVXL(v14, (int)&v28, 0); /*0x45fd4e*/
      else
        v15 = 0; /*0x45fd55*/
      this->?[1] = (int)v15; /*0x45fd63*/
      _makepath(Buffer, 0, 0, Destination, g_Str_File__HVA); /*0x45fd74*/
      CCFileClass::Construct(&v22, Buffer); /*0x45fd88*/
      v16 = (void *)this->?[2]; /*0x45fd8d*/
      if ( v16 ) /*0x45fd95*/
      {
        String::Release((String *)this->?[2]); /*0x45fd99*/
        __3_YAXPAX_Z(v16); /*0x45fd9f*/
      }
      v17 = (File *)__2_YAPAXI_Z(0x10u); /*0x45fda9*/
      if ( v17 ) /*0x45fdb3*/
        v18 = File::LoadFileHVA(v17, (int)&v22); /*0x45fdbc*/
      else
        v18 = 0; /*0x45fdc3*/
      this->?[2] = (int)v18; /*0x45fdc7*/
      if ( v18 ) /*0x45fdcd*/
      {
        if ( !*(_BYTE *)v18 ) /*0x45fdcf*/
        {
          v19 = VoxelSection::GetInfo((VoxelSection *)this->?[1], 0, 0); /*0x45fddb*/
          Matrix::Scale((Matrix *)this->?[2], *(float *)(v19 + 12)); /*0x45fdea*/
        }
      }
      *(_DWORD *)v22.CDFileClass = &CCFileClass::`vftable'; /*0x45fdf3*/
      v24 = 0; /*0x45fdfb*/
      Vector::Clear((int)v23); /*0x45fdff*/
      *(_DWORD *)v22.CDFileClass = &off_7E1668; /*0x45fe08*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v22); /*0x45fe0c*/
    }
    *(_DWORD *)v28.CDFileClass = &CCFileClass::`vftable'; /*0x45fe18*/
    v30 = 0; /*0x45fe23*/
    Vector::Clear((int)v29); /*0x45fe2a*/
    *(_DWORD *)v28.CDFileClass = &off_7E1668; /*0x45fe36*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v28); /*0x45fe3d*/
  }
}



// ==== 0x004500A0  BuildingClass::GetAdjustedExitCoords  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetAdjustedExitCoords(BuildingClass *this)
{
  _DWORD *v2; // eax
  int v3; // edi
  int v4; // ebx
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  _BYTE v9[12]; // [esp+Ch] [ebp-Ch] BYREF
  int *v10; // [esp+1Ch] [ebp+4h]

  v2 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass + 18))(this, v9); /*0x4500b1*/
  v3 = v2[1]; /*0x4500b6*/
  v4 = v2[2]; /*0x4500b9*/
  v5 = *v2 + this->Type->TargetCoordOffset[0]; /*0x4500cd*/
  v6 = this->Type->TargetCoordOffset[1]; /*0x4500cf*/
  v7 = this->Type->TargetCoordOffset[2]; /*0x4500d2*/
  *v10 = v5; /*0x4500db*/
  v10[1] = v3 + v6; /*0x4500dd*/
  v10[2] = v4 + v7; /*0x4500e0*/
  return (int)v10; /*0x4500e5*/
}



// ==== 0x004500F0  ObjectClass::ProcessAutoProduction  this=ObjectClass  sig=csp ====
void __thiscall ProcessAutoProduction(TechnoClass *this)
{
  ObjectClass *v2; // ecx
  int v3; // edx
  int v4; // eax
  _DWORD *Type; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  wchar_t *v10; // edi
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // edi
  int v16; // eax
  AbstractClass *v17; // ecx
  int owner; // eax
  int v19; // eax
  int v20; // edi
  char v21; // al
  TeamTypeClass *v22; // eax
  int v23; // eax
  bool v24; // al
  int v25; // eax
  int v26; // [esp+Ch] [ebp-Ch] BYREF
  int v27; // [esp+10h] [ebp-8h]
  int v28; // [esp+14h] [ebp-4h]

  v2 = (ObjectClass *)*((_DWORD *)this + 329); /*0x4500fa*/
  if ( !v2 || !(unsigned __int8)ObjectClass::IsCliffWall(v2) ) /*0x450108*/
    goto LABEL_19; /*0x45010f*/
  v3 = *((_DWORD *)this + 340); /*0x450115*/
  v4 = *((_DWORD *)this + 342); /*0x45011b*/
  if ( v3 == -1 ) /*0x450124*/
    goto LABEL_6; /*0x450124*/
  if ( (int)dword_A8ED84 - v3 < v4 ) /*0x450130*/
  {
    v4 -= (int)dword_A8ED84 - v3; /*0x450132*/
LABEL_6:
    if ( v4 ) /*0x450136*/
      goto LABEL_19; /*0x450136*/
  }
  Type = (_DWORD *)AbstractClass::GetType(*((AbstractClass **)this + 329)); /*0x45013c*/
  v6 = (*(int (__thiscall **)(TechnoClass *, _DWORD *, int))(this->vtable0 + 256))(this, Type, g_TerrainTypeTable); /*0x450155*/
  if ( !v6 ) /*0x45015d*/
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*Type + 44))(Type) == 6 && *(_BYTE *)(Type[328] + 3278) ) /*0x450211*/
      *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*Type + 60))(Type) + 496) = 0; /*0x450220*/
    BuildingClass::AbandonProduction(*((_DWORD *)this + 329)); /*0x45022c*/
    v13 = *((_DWORD *)this + 329); /*0x450231*/
    if ( v13 ) /*0x450239*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 32))(v13, 1); /*0x45023f*/
    goto LABEL_18; /*0x45023f*/
  }
  v7 = v6 - 1; /*0x450163*/
  if ( v7 ) /*0x450164*/
  {
    if ( v7 == 1 ) /*0x450167*/
    {
      v26 = this->location[0]; /*0x450176*/
      v8 = *((_DWORD *)this + 328); /*0x45017a*/
      v27 = this->location[1]; /*0x450183*/
      v28 = this->location[2]; /*0x45018a*/
      PlayAudioAt2(*(_DWORD *)(v8 + 3700), &v26, 0); /*0x450198*/
      HouseClass::ProcessPromotionSound(this->owner, Type); /*0x4501a4*/
      ProductionQueue::CompleteOrCancel(*((ProductionQueue **)this + 329)); /*0x4501af*/
      v9 = *((_DWORD *)this + 329); /*0x4501b4*/
      if ( v9 ) /*0x4501bc*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 32))(v9, 1); /*0x4501c6*/
LABEL_18:
      *((_DWORD *)this + 329) = 0; /*0x450242*/
    }
  }
  else
  {
    v10 = dword_A8ED84; /*0x4501d0*/
    LOWORD(v11) = Math::RoundToInt(*(double *)dword_8871E0->PlacementDelay * 900.0); /*0x4501e2*/
    v12 = v27; /*0x4501e7*/
    *((_DWORD *)this + 340) = v10; /*0x4501eb*/
    *((_DWORD *)this + 341) = v12; /*0x4501f1*/
    *((_DWORD *)this + 342) = v11; /*0x4501f7*/
  }
LABEL_19:
  if ( !*(_BYTE *)(this->owner + 494) /*0x450286*/
    || (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 388))(this) == 18
    || (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 388))(this) == 19
    || !*(_DWORD *)(*((_DWORD *)this + 328) + 3768) )
  {
    return; /*0x45028c*/
  }
  v14 = *((_DWORD *)this + 329); /*0x450292*/
  if ( v14 ) /*0x45029a*/
  {
    v15 = *((_DWORD *)this + 340); /*0x45029c*/
    v16 = *((_DWORD *)this + 342); /*0x4502a2*/
    if ( v15 != -1 ) /*0x4502ab*/
    {
      if ( (int)dword_A8ED84 - v15 >= v16 ) /*0x4502b7*/
      {
LABEL_28:
        if ( *(_DWORD *)(v14 + 56) && !*(_BYTE *)(v14 + 112) ) /*0x4502cb*/
          return; /*0x4502cb*/
        BuildingClass::AbandonProduction(v14); /*0x4502d1*/
        v17 = (AbstractClass *)*((_DWORD *)this + 329); /*0x4502d6*/
        goto LABEL_31; /*0x4502d6*/
      }
      v16 -= (int)dword_A8ED84 - v15; /*0x4502b9*/
    }
    if ( v16 ) /*0x4502bd*/
      return; /*0x4502bd*/
    goto LABEL_28; /*0x4502bd*/
  }
  owner = this->owner; /*0x4502f4*/
  if ( *(_BYTE *)(owner + 494) )
  {
    if ( (*(int (__stdcall **)(int))(*(_DWORD *)(owner + 36) + 24))(owner + 36) > 10 )
    {
      v19 = sub_4FBD80((ObjectClass *)this->owner, *(_DWORD *)(*((_DWORD *)this + 328) + 3768), 0); /*0x45032d*/
      v20 = v19; /*0x450332*/
      if ( v19 )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 44))(v19) != 40
          || ((v21 = *(_BYTE *)(*((_DWORD *)this + 328) + 3278)) == 0 || *(_BYTE *)(v20 + 3278))
          && (!*(_BYTE *)(v20 + 3278) || v21) )
        {
          v22 = (TeamTypeClass *)__2_YAPAXI_Z(0x74u); /*0x45036e*/
          v23 = v22 ? TeamTypeClass::Construct(v22) : 0;
          *((_DWORD *)this + 329) = v23; /*0x450387*/
          if ( v23 ) /*0x45038d*/
          {
            v24 = FactoryClass::DemandProduction(v23, v20, (#375 *)this->owner, 0); /*0x45039a*/
            v17 = (AbstractClass *)*((_DWORD *)this + 329); /*0x45039f*/
            if ( v24 ) /*0x4503a7*/
            {
              v25 = AbstractClass::GetType(v17); /*0x4503ad*/
              nullsub_100(v25); /*0x4503b9*/
              ProductionClass::StartTimer(*((_DWORD *)this + 329), 0); /*0x4503c5*/
              return; /*0x4503c5*/
            }
LABEL_31:
            if ( v17 ) /*0x4502de*/
              (*(void (__thiscall **)(AbstractClass *, int))(v17->vtable0 + 32))(v17, 1); /*0x4502e4*/
            *((_DWORD *)this + 329) = 0; /*0x4502e7*/
          }
        }
      }
    }
  }
}



// ==== 0x004503E0  nullsub_101  this=-  sig=ida-proto ====
void nullsub_101()
{
  ; /*0x4503e0*/
}



// ==== 0x004503F0  BuildingClass::UpdatePrism  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::UpdatePrism(BuildingClass *this)
{
  __int64 v2; // rax
  int v3; // ecx
  int v4; // eax
  int v5; // ecx

  LODWORD(v2) = this->PrismStage[0]; /*0x4503f3*/
  if ( (_DWORD)v2 ) /*0x4503fb*/
  {
    v3 = this->DelayBeforeFiring - 1; /*0x450408*/
    this->DelayBeforeFiring = v3; /*0x45040a*/
    if ( v3 <= 0 ) /*0x450412*/
    {
      v4 = v2 - 1; /*0x450418*/
      this->DelayBeforeFiring = 0; /*0x450419*/
      if ( v4 ) /*0x450423*/
      {
        LODWORD(v2) = v4 - 1; /*0x450425*/
        if ( !(_DWORD)v2 ) /*0x450426*/
        {
          LODWORD(v2) = BuildingClass::FireLaser( /*0x45044d*/
                          this,
                          this->PrismTargetCoords[0],
                          this->PrismTargetCoords[1],
                          this->PrismTargetCoords[2]);
          this->PrismStage[0] = 0; /*0x450452*/
          return v2; /*0x45045d*/
        }
      }
      else
      {
        LODWORD(v2) = this->?; /*0x45045e*/
        if ( (_DWORD)v2 ) /*0x450466*/
        {
          LODWORD(v2) = (*((int (__thiscall **)(BuildingClass *, _DWORD, int, int))this->TechnoClass + 240))( /*0x450476*/
                          this,
                          v2,
                          this->PrismTargetCoords[0],
                          1);
          if ( !(_DWORD)v2 ) /*0x45047e*/
          {
            LODWORD(v2) = (*((int (__thiscall **)(BuildingClass *, AbstractClass *, int))this->TechnoClass + 243))( /*0x450492*/
                            this,
                            this->?,
                            this->PrismTargetCoords[0]);
            v5 = v2; /*0x450498*/
            if ( (_DWORD)v2 ) /*0x45049c*/
            {
              LODWORD(v2) = this->SupportingPrisms; /*0x45049e*/
              if ( (_DWORD)v2 ) /*0x4504a6*/
              {
                v2 = 1374389535LL /*0x4504c2*/
                   * (unsigned int)(((_DWORD)v2 * *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1180) + 100) << 8);
                *(_DWORD *)(v5 + 336) = HIDWORD(v2) >> 5; /*0x4504c7*/
                this->SupportingPrisms = 0; /*0x4504cd*/
              }
            }
          }
        }
      }
      this->PrismStage[0] = 0; /*0x4504d7*/
    }
  }
  return v2; /*0x45045c*/
}



// ==== 0x00450630  BuildingClass::ProcessActiveAnimation  this=BuildingClass  sig=csp ====
char __usercall BuildingClass::ProcessActiveAnimation@<al>(BuildingClass *this, double a2@<st0>)
{
  BuildingClass *v2; // ecx
  BuildingClass *v3; // esi
  House *owner; // ecx
  int v6; // eax
  int v7; // ebp
  int v8; // eax
  int v9; // eax
  char *pad_280; // edx
  int v13; // eax
  int v15; // eax
  int v16; // et2
  BuildingTypeClass *Type; // ecx
  int v18; // edi
  int v19; // ebp
  BuildingTypeClass *v20; // edx
  int v21; // ebx
  int v22; // edi
  int Strength; // eax
  BOOL v25; // ebx
  int v26; // ebp
  int v27; // edi
  int *v28; // eax
  ParticleSystemClass *damageParticles; // ecx
  int *Anims; // [esp+10h] [ebp-14h]
  int ProductionFrame; // [esp+14h] [ebp-10h]
  int v35; // [esp+1Ch] [ebp-8h]

  v3 = v2; /*0x45063c*/
  if ( v2->?->iqLevel2 < *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5188) /*0x450683*/
    || (*((int (**)(void))v2->TechnoClass + 97))() == 18
    || (*((int (__thiscall **)(BuildingClass *))v3->TechnoClass + 97))(v3) == 19
    || !(*((unsigned __int8 (__thiscall **)(BuildingClass *))v3->TechnoClass + 37))(v3) )
  {
    goto LABEL_22; /*0x45068b*/
  }
  if ( (*(int (__stdcall **)(int *))(v3->?->arrayIndex + 24))(&v3->?->arrayIndex) < *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] /*0x4506ac*/
                                                                                              + 5976) )
  {
    if ( *(_DWORD *)&dword_A8B238 || v3->BuildingClass_field_bool_6DC ) /*0x45078a*/
    {
      if ( v3->? ) /*0x450794*/
      {
        if ( *(_DWORD *)&v3->?->__pad_13C[148] >= *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5212) /*0x4507eb*/
          && (unsigned int)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 50) < *(_DWORD *)&v3->?->__pad_13C[152]
          && !v3->?
          && v3->Type->Factory[0] != 7 )
        {
          BuildingClass::GetHealthRatio(v3); /*0x4507ef*/
          _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4507f4*/
          __asm /*0x4507fa*/
          {
            fcomp qword ptr [ecx+1708h]
            fnstsw ax
          }
          if ( (_AX & 0x100) != 0 ) /*0x450805*/
            (*((void (__thiscall **)(BuildingClass *, int))v3->TechnoClass + 104))(v3, 1); /*0x45080d*/
        }
      }
    }
LABEL_22:
    LOBYTE(v13) = v3->IsBeingRepaired; /*0x450813*/
    if ( !(_BYTE)v13 ) /*0x45081b*/
      return v13; /*0x45081b*/
    goto LABEL_23; /*0x45081b*/
  }
  owner = (House *)v3->?; /*0x4506b2*/
  if ( owner->__pad_1F0[85] ) /*0x4506b8*/
    goto LABEL_22; /*0x4506c0*/
  if ( !v3->IsBeingRepaired ) /*0x4506c6*/
  {
    if ( v3->HasBeenCaptured || v3->__pad_6B8[19] || (unsigned __int8)House::IsCurrentPlayer(owner) ) /*0x4506e8*/
    {
      v3->?->repairing = 1; /*0x4506ff*/
      (*((void (__thiscall **)(BuildingClass *, int))v3->TechnoClass + 103))(v3, 1); /*0x450708*/
      if ( !(unsigned __int8)House::IsCurrentPlayer((House *)v3->?) ) /*0x450714*/
      {
        _EDI = v3->?; /*0x450721*/
        __asm /*0x450727*/
        {
          fld qword ptr [edi+1C0h]
          fmul ds:dbl_7E44B8
        }
        LOWORD(v6) = Math::RoundToInt(a2); /*0x450733*/
        __asm /*0x450738*/
        {
          fld qword ptr [edi+1C0h]
          fmul ds:dbl_7E44B0
        }
        v7 = v6; /*0x450744*/
        LOWORD(v8) = Math::RoundToInt(a2); /*0x450746*/
        v9 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, v8, v7); /*0x450759*/
        pad_280 = v3->?->__pad_280; /*0x45076a*/
        *(_DWORD *)pad_280 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x450770*/
        *((_DWORD *)pad_280 + 1) = v35; /*0x450776*/
        *((_DWORD *)pad_280 + 2) = v9; /*0x450779*/
      }
    }
    goto LABEL_22; /*0x45077c*/
  }
LABEL_23:
  _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x450821*/
  __asm /*0x450826*/
  {
    fld qword ptr [eax+16E0h]
    fmul ds:dbl_7E27F8
  }
  LOWORD(v15) = Math::RoundToInt(a2); /*0x450832*/
  v16 = *(_DWORD *)&stru_A8EB00.?[416] % v15; /*0x45083f*/
  v13 = *(_DWORD *)&stru_A8EB00.?[416] / v15; /*0x45083f*/
  if ( !v16 )
  {
    Type = v3->Type; /*0x45084f*/
    v3->NeedsRepairs = v3->NeedsRepairs == 0; /*0x45085a*/
    v18 = (*((int (__thiscall **)(BuildingTypeClass *))Type->TechnoTypeClass + 44))(Type); /*0x45086e*/
    v19 = (*((int (__thiscall **)(BuildingTypeClass *))v3->Type->TechnoTypeClass + 45))(v3->Type); /*0x45087a*/
    ProductionFrame = BuildingClass::GetProductionFrame(v3); /*0x450881*/
    v13 = (*(int (__stdcall **)(int *))(v3->?->arrayIndex + 24))(&v3->?->arrayIndex); /*0x450891*/
    if ( v13 < v18 )
    {
      v3->IsBeingRepaired = 0; /*0x4509b4*/
    }
    else
    {
      HouseClass::ProcessPowerDrain((int *)v3->?, v18); /*0x4508a3*/
      v20 = v3->Type; /*0x4508ae*/
      v21 = v19 + v3->?; /*0x4508b4*/
      v22 = v19 + v3->?; /*0x4508b6*/
      v3->? = v21; /*0x4508b8*/
      v3->? = v22; /*0x4508bb*/
      Strength = v20->?; /*0x4508be*/
      if ( v21 >= Strength ) /*0x4508c8*/
      {
        v3->? = Strength; /*0x4508ca*/
        v3->? = Strength; /*0x4508cd*/
        v3->IsBeingRepaired = 0; /*0x4508d0*/
      }
      BuildingClass::GetHealthRatio(v3); /*0x4508d9*/
      _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4508de*/
      __asm /*0x4508e3*/
      {
        fcomp qword ptr [eax+1700h]
        fnstsw ax
      }
      v25 = (_EAX & 0x4100) != 0; /*0x4508ee*/
      if ( v3->IsDamaged != v25 )
      {
        v26 = 0; /*0x450907*/
        v3->IsDamaged = v25; /*0x450909*/
        v27 = 0; /*0x45090f*/
        Anims = v3->Anims; /*0x450911*/
        do
        {
          if ( *Anims )
          {
            v28 = v25 ? &v3->Type->BuildingAnim[v27 + 16] : &v3->Type->BuildingAnim[v27 + 12];
            if ( v28 && *(_BYTE *)v28 ) /*0x450942*/
              BuildingClass::PlayAnim(v3, (int)Anims, v28, v26, v25, 0, 0); /*0x450950*/
          }
          v27 += 17; /*0x450959*/
          ++v26; /*0x45095c*/
          ++Anims; /*0x450966*/
        }
        while ( v27 < 357 );
      }
      BuildingClass::GetHealthRatio(v3); /*0x45096e*/
      _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x450973*/
      __asm /*0x450979*/
      {
        fcomp qword ptr [edx+1700h]
        fnstsw ax
      }
      if ( (_AX & 0x4100) == 0 ) /*0x450984*/
      {
        damageParticles = v3->?; /*0x450986*/
        if ( damageParticles ) /*0x45098e*/
          (*((void (__thiscall **)(ParticleSystemClass *))damageParticles->ObjectClass + 62))(damageParticles); /*0x450992*/
      }
      v13 = BuildingClass::GetProductionFrame(v3); /*0x45099a*/
      if ( v13 != ProductionFrame ) /*0x4509a3*/
        v3->? = 1; /*0x4509a5*/
    }
  }
  return v13; /*0x4509ac*/
}



// ==== 0x004509D0  BuildingClass::UpdateAnimFrames  this=BuildingClass  sig=csp ====
char __usercall BuildingClass::UpdateAnimFrames@<al>(BuildingClass *this, double a2@<st0>)
{
  Locomotor *v2; // ecx
  Locomotor *v3; // esi
  Locomotor *v4; // edi
  int v5; // ecx
  int Locomotor_field_00; // eax
  int v7; // edx
  int v8; // edx
  int v9; // edi
  __int64 v10; // rax
  unsigned __int16 v11; // ax
  int v14; // ecx
  _BYTE *v15; // eax
  int v16; // eax
  BOOL v18; // ebx
  bool v19; // al
  int v20; // edx
  _BYTE *v21; // eax
  bool v22; // zf
  int v23; // eax
  BOOL v26; // ebx
  bool v27; // al
  int v28; // edx
  _BYTE *v29; // eax
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  int v35; // edi
  int v36; // eax
  int v37; // edx
  int v39; // ecx
  _BYTE *v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // eax
  int v48; // ecx
  _BYTE *v49; // eax
  int v50; // edx
  int v52; // ecx
  _BYTE *v53; // eax
  int v54; // edx
  int v57; // ecx
  _BYTE *v58; // eax
  int v61; // ecx
  _BYTE *v62; // eax
  int v65; // eax
  int v66; // ebx
  _DWORD *v68; // eax
  int v69; // edx
  int v70; // ecx
  int v72; // edx
  int v74; // ecx
  _BYTE *v75; // eax
  int v76; // edx
  int v79; // ecx
  _BYTE *v80; // eax
  int v81; // ecx
  _DWORD *v82; // edi
  _DWORD *Value; // eax
  int v84; // ecx
  unsigned int v85; // eax
  char result; // al
  unsigned int v87; // eax
  int *v88; // edi
  char *ProductionTimeMult; // eax
  int v90; // eax
  char v91; // [esp+Eh] [ebp-12h]
  char v92; // [esp+Fh] [ebp-11h]
  int v93; // [esp+10h] [ebp-10h] BYREF
  int v94; // [esp+18h] [ebp-8h]

  v3 = v2; /*0x4509db*/
  v4 = v2 + 64; /*0x4509de*/
  if ( Locomotor::GetSpeed(v2 + 64) || (v5 = v3[67].Locomotor_field_00) == 0 ) /*0x4509f7*/
  {
    LOBYTE(v3[63].Locomotor_field_00) = 0; /*0x450a2c*/
    v91 = 0; /*0x450a33*/
  }
  else
  {
    Locomotor_field_00 = v3[68].Locomotor_field_00; /*0x4509f9*/
    v7 = v3[62].Locomotor_field_00; /*0x4509ff*/
    LOBYTE(v3[63].Locomotor_field_00) = 1; /*0x450a07*/
    v3[62].Locomotor_field_00 = Locomotor_field_00 + v7; /*0x450a0e*/
    v8 = v94; /*0x450a19*/
    v4->Locomotor_field_00 = *(int *)&stru_A8EB00.?[416]; /*0x450a1d*/
    v4[1].Locomotor_field_00 = v8; /*0x450a1f*/
    v4[2].Locomotor_field_00 = v5; /*0x450a22*/
    v91 = 1; /*0x450a25*/
  }
  v92 = 0; /*0x450a3c*/
  v9 = (*(int (__thiscall **)(Locomotor *))(v3->Locomotor_field_00 + 484))(v3); /*0x450a4b*/
  v10 = ((__int64 (__thiscall *)(Locomotor *))*(_DWORD *)(v3->Locomotor_field_00 + 444))(v3); /*0x450a4d*/
  v11 = globalHelper_056FB0(v3, SHIDWORD(v10), *(__int16 *)(v10 + 266)); /*0x450a5d*/
  LOWORD(v3[448].Locomotor_field_00) = v11; /*0x450a62*/
  BuildingClass::SyncCrateVisuals((char *)v3, v9, v11); /*0x450a72*/
  BuildingClass::SetConnectedBuildingMission((BuildingClass *)v3, SBYTE1(v3[443].Locomotor_field_00)); /*0x450a81*/
  if ( *(_BYTE *)(v3[328].Locomotor_field_00 + 5801) /*0x450ac7*/
    && (*(int (__thiscall **)(Locomotor *))(v3->Locomotor_field_00 + 388))(v3) != 20
    && (v3[351].Locomotor_field_00 || v3[354].Locomotor_field_00)
    && !*(_BYTE *)(v3[328].Locomotor_field_00 + 3278) )
  {
    BuildingClass::GetHealthRatio((BuildingClass *)v3); /*0x450ad3*/
    _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x450ad8*/
    __asm /*0x450ade*/
    {
      fcomp qword ptr [edx+1700h]
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x450ae9*/
    {
      v14 = 1; /*0x450af1*/
      v15 = (_BYTE *)(v3[328].Locomotor_field_00 + 4748); /*0x450af6*/
    }
    else
    {
      v14 = 0; /*0x450b03*/
      v15 = (_BYTE *)(v3[328].Locomotor_field_00 + 4732); /*0x450b05*/
    }
    if ( v15 && *v15 ) /*0x450b0e*/
      BuildingClass::PlayAnim(v3, *(int *)&DSurface_ViewBounds.__pad_FC[324], v15, 12, v14, 0, 0); /*0x450b1d*/
    BuildingClass::ClearAnims((BuildingClass *)v3, 8); /*0x450b26*/
    BuildingClass::ClearAnims((BuildingClass *)v3, 11); /*0x450b2f*/
  }
  v16 = v3[328].Locomotor_field_00; /*0x450b34*/
  if ( *(int *)(v16 + 3816) > 0
    && *(_BYTE *)(v16 + 5807)
    && LOBYTE(v3[441].Locomotor_field_00)
    && v3[333].Locomotor_field_00 )
  {
    if ( HouseClass::SumPowerDrain((HouseClass *)&v3[69]) <= 0 )
    {
      if ( v3[347].Locomotor_field_00 ) /*0x450c22*/
        BuildingClass::ClearAnims((BuildingClass *)v3, 4); /*0x450c30*/
      if ( !v3[346].Locomotor_field_00 )
      {
        BuildingClass::GetHealthRatio((BuildingClass *)v3); /*0x450c41*/
        _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x450c46*/
        __asm /*0x450c4c*/
        {
          fcomp qword ptr [edx+1700h]
          fnstsw ax
        }
        v26 = (_AX & 0x4100) != 0; /*0x450c57*/
        v27 = (*(int (__thiscall **)(Locomotor *))(v3->Locomotor_field_00 + 1032))(v3) > 0; /*0x450c6e*/
        LOBYTE(v93) = v27; /*0x450c73*/
        if ( v26 )
        {
          v29 = (_BYTE *)(v3[328].Locomotor_field_00 + 4136); /*0x450c7f*/
        }
        else
        {
          v22 = !v27; /*0x450c86*/
          v30 = v3[328].Locomotor_field_00; /*0x450c88*/
          v29 = (_BYTE *)(v22 ? v30 + 4120 : v30 + 4152);
        }
        if ( v29 && *v29 ) /*0x450ca0*/
          BuildingClass::PlayAnim(v3, v28, v29, 3, v26, v93, 0); /*0x450cb2*/
      }
    }
    else
    {
      if ( v3[346].Locomotor_field_00 ) /*0x450b85*/
        BuildingClass::ClearAnims((BuildingClass *)v3, 3); /*0x450b93*/
      if ( !v3[347].Locomotor_field_00 )
      {
        BuildingClass::GetHealthRatio((BuildingClass *)v3); /*0x450ba8*/
        _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x450bad*/
        __asm /*0x450bb2*/
        {
          fcomp qword ptr [eax+1700h]
          fnstsw ax
        }
        v18 = (_EAX & 0x4100) != 0; /*0x450bbd*/
        v19 = (*(int (__thiscall **)(Locomotor *))(v3->Locomotor_field_00 + 1032))(v3) > 0; /*0x450bd4*/
        LOBYTE(v93) = v19; /*0x450bd9*/
        if ( v18 )
        {
          v21 = (_BYTE *)(v3[328].Locomotor_field_00 + 4204); /*0x450be5*/
        }
        else
        {
          v22 = !v19; /*0x450bec*/
          v23 = v3[328].Locomotor_field_00; /*0x450bee*/
          v21 = (_BYTE *)(v22 ? v23 + 4188 : v23 + 4220);
        }
        if ( v21 && *v21 ) /*0x450c0a*/
          BuildingClass::PlayAnim(v3, v20, v21, 4, v18, v93, 0); /*0x450c1d*/
      }
    }
  }
  v31 = v3[328].Locomotor_field_00; /*0x450cb7*/
  if ( *(_BYTE *)(v31 + 5800) ) /*0x450cbd*/
  {
    v32 = 0; /*0x450cd1*/
    if ( *(int *)(v31 + 2048) <= 0 ) /*0x450cd5*/
      goto LABEL_49; /*0x450cd5*/
    Float4::Sum(&v3[207].Locomotor_field_00); /*0x450cdd*/
    LOWORD(v33) = Math::RoundToInt(a2); /*0x450ce2*/
    _EDX = v3[328].Locomotor_field_00; /*0x450ce7*/
    v93 = 4 * v33; /*0x450cf0*/
    __asm /*0x450cf4*/
    {
      fild [esp+20h+var_10]
      fidiv dword ptr [edx+800h]
      fadd ds:dbl_7E1738
    }
    LOWORD(v32) = Math::RoundToInt(a2); /*0x450d04*/
    if ( v32 < 0 ) /*0x450d0b*/
    {
      v35 = 0; /*0x450d0d*/
      goto LABEL_50; /*0x450d0f*/
    }
    v35 = 3; /*0x450d14*/
    if ( v32 <= 3 ) /*0x450d19*/
LABEL_49:
      v35 = v32; /*0x450d1b*/
LABEL_50:
    v36 = v3[353].Locomotor_field_00; /*0x450d1d*/
    if ( v35 ) /*0x450d25*/
    {
      if ( !v36 ) /*0x450d29*/
      {
        BuildingClass::GetHealthRatio((BuildingClass *)v3); /*0x450d2d*/
        _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x450d32*/
        __asm /*0x450d37*/
        {
          fcomp qword ptr [eax+1700h]
          fnstsw ax
        }
        if ( (_EAX & 0x4100) != 0 ) /*0x450d42*/
        {
          v39 = 1; /*0x450d4a*/
          v40 = (_BYTE *)(v3[328].Locomotor_field_00 + 4612); /*0x450d4f*/
        }
        else
        {
          v39 = 0; /*0x450d5c*/
          v40 = (_BYTE *)(v3[328].Locomotor_field_00 + 4596); /*0x450d5e*/
        }
        if ( v40 && *v40 ) /*0x450d67*/
          BuildingClass::PlayAnim(v3, v37, v40, 10, v39, 0, 0); /*0x450d76*/
      }
      *(_DWORD *)(v3[353].Locomotor_field_00 + 172) = v35; /*0x450d81*/
    }
    else if ( v36 ) /*0x450d8b*/
    {
      BuildingClass::ClearAnims((BuildingClass *)v3, 10); /*0x450d91*/
    }
  }
  if ( *(_BYTE *)(v3[328].Locomotor_field_00 + 5819) ) /*0x450d9c*/
  {
    Float4::Sum(&v3[207].Locomotor_field_00); /*0x450db2*/
    LOWORD(v41) = Math::RoundToInt(a2); /*0x450db7*/
    if ( v41 ) /*0x450dbe*/
    {
      Float4::Sum(&v3[207].Locomotor_field_00); /*0x450dc2*/
      LOWORD(v42) = Math::RoundToInt(a2); /*0x450dc7*/
      v41 = 4 * v42 / *(_DWORD *)(v3[328].Locomotor_field_00 + 2048); /*0x450dd6*/
    }
    v43 = v3[444].Locomotor_field_00; /*0x450ddc*/
    if ( v43 != v41 ) /*0x450de4*/
    {
      if ( v43 < 3 ) /*0x450ded*/
      {
        if ( v43 < 2 ) /*0x450df6*/
        {
          if ( v43 < 1 ) /*0x450dff*/
          {
            if ( v43 >= 0 ) /*0x450e07*/
              BuildingClass::ClearAnims((BuildingClass *)v3, 3); /*0x450e0d*/
          }
          else
          {
            BuildingClass::ClearAnims((BuildingClass *)v3, 4); /*0x450e03*/
          }
        }
        else
        {
          BuildingClass::ClearAnims((BuildingClass *)v3, 5); /*0x450dfa*/
        }
      }
      else
      {
        BuildingClass::ClearAnims((BuildingClass *)v3, 6); /*0x450df1*/
      }
      Float4::Sum(&v3[207].Locomotor_field_00); /*0x450e14*/
      LOWORD(v44) = Math::RoundToInt(a2); /*0x450e19*/
      if ( v44 ) /*0x450e20*/
      {
        Float4::Sum(&v3[207].Locomotor_field_00); /*0x450e24*/
        LOWORD(v45) = Math::RoundToInt(a2); /*0x450e29*/
        v44 = 4 * v45 / *(_DWORD *)(v3[328].Locomotor_field_00 + 2048); /*0x450e38*/
      }
      v3[444].Locomotor_field_00 = v44; /*0x450e41*/
      if ( v44 < 3 ) /*0x450e47*/
      {
        if ( v44 < 2 ) /*0x450ea2*/
        {
          if ( v44 < 1 ) /*0x450efc*/
          {
            if ( v44 >= 0 ) /*0x450f4b*/
            {
              BuildingClass::GetHealthRatio((BuildingClass *)v3); /*0x450f4f*/
              _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x450f54*/
              __asm /*0x450f5a*/
              {
                fcomp qword ptr [edx+1700h]
                fnstsw ax
              }
              if ( (_AX & 0x4100) != 0 ) /*0x450f65*/
              {
                v61 = 1; /*0x450f6d*/
                v62 = (_BYTE *)(v3[328].Locomotor_field_00 + 4136); /*0x450f72*/
              }
              else
              {
                v61 = 0; /*0x450f7f*/
                v62 = (_BYTE *)(v3[328].Locomotor_field_00 + 4120); /*0x450f81*/
              }
              if ( v62 && *v62 ) /*0x450f8a*/
                BuildingClass::PlayAnim(v3, *(int *)&DSurface_ViewBounds.__pad_FC[324], v62, 3, v61, 0, 0); /*0x450f99*/
            }
          }
          else
          {
            BuildingClass::GetHealthRatio((BuildingClass *)v3); /*0x450f00*/
            _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x450f05*/
            __asm /*0x450f0b*/
            {
              fcomp qword ptr [ecx+1700h]
              fnstsw ax
            }
            if ( (_AX & 0x4100) != 0 ) /*0x450f16*/
            {
              v57 = 1; /*0x450f1e*/
              v58 = (_BYTE *)(v3[328].Locomotor_field_00 + 4204); /*0x450f23*/
            }
            else
            {
              v57 = 0; /*0x450f30*/
              v58 = (_BYTE *)(v3[328].Locomotor_field_00 + 4188); /*0x450f32*/
            }
            if ( v58 && *v58 ) /*0x450f3b*/
              BuildingClass::PlayAnim(v3, v54, v58, 4, v57, 0, 0); /*0x450f47*/
          }
        }
        else
        {
          BuildingClass::GetHealthRatio((BuildingClass *)v3); /*0x450ea6*/
          _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x450eab*/
          __asm /*0x450eb0*/
          {
            fcomp qword ptr [eax+1700h]
            fnstsw ax
          }
          if ( (_EAX & 0x4100) != 0 ) /*0x450ebb*/
          {
            v52 = 1; /*0x450ec3*/
            v53 = (_BYTE *)(v3[328].Locomotor_field_00 + 4272); /*0x450ec8*/
          }
          else
          {
            v52 = 0; /*0x450ed5*/
            v53 = (_BYTE *)(v3[328].Locomotor_field_00 + 4256); /*0x450ed7*/
          }
          if ( v53 && *v53 ) /*0x450ee4*/
            BuildingClass::PlayAnim(v3, v50, v53, 5, v52, 0, 0); /*0x450ef4*/
        }
      }
      else
      {
        BuildingClass::GetHealthRatio((BuildingClass *)v3); /*0x450e4b*/
        _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x450e50*/
        __asm /*0x450e56*/
        {
          fcomp qword ptr [edx+1700h]
          fnstsw ax
        }
        if ( (_AX & 0x4100) != 0 ) /*0x450e61*/
        {
          v48 = 1; /*0x450e69*/
          v49 = (_BYTE *)(v3[328].Locomotor_field_00 + 4340); /*0x450e6e*/
        }
        else
        {
          v48 = 0; /*0x450e7b*/
          v49 = (_BYTE *)(v3[328].Locomotor_field_00 + 4324); /*0x450e7d*/
        }
        if ( v49 && *v49 ) /*0x450e8a*/
          BuildingClass::PlayAnim(v3, *(int *)&DSurface_ViewBounds.__pad_FC[324], v49, 6, v48, 0, 0); /*0x450e9a*/
      }
    }
  }
  if ( *(_DWORD *)(v3[328].Locomotor_field_00 + 5872) != -1 /*0x450fd1*/
    && (*(int (__thiscall **)(Locomotor *))(v3->Locomotor_field_00 + 388))(v3) != 18
    && (*(int (__thiscall **)(Locomotor *))(v3->Locomotor_field_00 + 388))(v3) != 19 )
  {
    _ECX = v3[328].Locomotor_field_00; /*0x450fd7*/
    __asm /*0x450fdd*/
    {
      fld dword ptr [ecx+16E8h]
      fcomp ds:flt_7E44C4
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x450fee*/
    {
      v65 = v3[135].Locomotor_field_00; /*0x450ff4*/
      v66 = 0; /*0x450ffa*/
      if ( *(int *)(v65 + 612) > 0 ) /*0x451004*/
      {
        while ( 1 ) /*0x451010*/
        {
          _EDI = v3[328].Locomotor_field_00; /*0x451010*/
          v68 = *(_DWORD **)(*(_DWORD *)(v65 + 600) + 4 * v66); /*0x451016*/
          if ( *(_DWORD *)(v68[10] + 180) == *(_DWORD *)(_EDI + 5872) ) /*0x45102a*/
            break; /*0x45102a*/
LABEL_129:
          v65 = v3[135].Locomotor_field_00; /*0x451132*/
          if ( ++v66 >= *(_DWORD *)(v65 + 612) ) /*0x45113f*/
            goto LABEL_130; /*0x45113f*/
        }
        v69 = v68[12]; /*0x451030*/
        v70 = v68[14]; /*0x451033*/
        if ( v69 != -1 ) /*0x451039*/
        {
          if ( *(_DWORD *)&stru_A8EB00.?[416] - v69 >= v70 ) /*0x451044*/
          {
            v93 = 0; /*0x4510a5*/
LABEL_113:
            __asm /*0x45104c*/
            {
              fild [esp+20h+var_10]
              fmul ds:flt_7E44C0
              fcomp dword ptr [edi+16E8h]
              fnstsw ax
            }
            if ( (_AX & 0x4100) != 0 ) /*0x451061*/
            {
              if ( v3[357].Locomotor_field_00 ) /*0x451063*/
              {
                BuildingClass::ClearAnims((BuildingClass *)v3, 14); /*0x451075*/
                BuildingClass::GetHealthRatio((BuildingClass *)v3); /*0x45107c*/
                _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x451081*/
                __asm /*0x451086*/
                {
                  fcomp qword ptr [eax+1700h]
                  fnstsw ax
                }
                if ( (_EAX & 0x4100) != 0 ) /*0x451091*/
                {
                  v74 = 1; /*0x451099*/
                  v75 = (_BYTE *)(v3[328].Locomotor_field_00 + 4952); /*0x45109e*/
                }
                else
                {
                  v74 = 0; /*0x4510b5*/
                  v75 = (_BYTE *)(v3[328].Locomotor_field_00 + 4936); /*0x4510b7*/
                }
                if ( v75 && *v75 ) /*0x4510c0*/
                  BuildingClass::PlayAnim(v3, v72, v75, 15, v74, 0, 0); /*0x4510cc*/
              }
            }
            else if ( v3[359].Locomotor_field_00 ) /*0x4510ce*/
            {
              BuildingClass::ClearAnims((BuildingClass *)v3, 16); /*0x4510dc*/
              BuildingClass::GetHealthRatio((BuildingClass *)v3); /*0x4510e3*/
              _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4510e8*/
              __asm /*0x4510ee*/
              {
                fcomp qword ptr [ecx+1700h]
                fnstsw ax
              }
              if ( (_AX & 0x4100) != 0 ) /*0x4510f9*/
              {
                v79 = 1; /*0x451101*/
                v80 = (_BYTE *)(v3[328].Locomotor_field_00 + 5088); /*0x451106*/
              }
              else
              {
                v79 = 0; /*0x451113*/
                v80 = (_BYTE *)(v3[328].Locomotor_field_00 + 5072); /*0x451115*/
              }
              if ( v80 && *v80 ) /*0x45111e*/
                BuildingClass::PlayAnim(v3, v76, v80, 17, v79, 0, 0); /*0x45112d*/
            }
            goto LABEL_129; /*0x4510cc*/
          }
          v70 -= *(_DWORD *)&stru_A8EB00.?[416] - v69; /*0x451046*/
        }
        v93 = v70; /*0x451048*/
        goto LABEL_113; /*0x451048*/
      }
    }
  }
LABEL_130:
  if ( !(*(unsigned __int8 (__thiscall **)(Locomotor *))(v3->Locomotor_field_00 + 1020))(v3) /*0x45116f*/
    || (*(int (__thiscall **)(Locomotor *))(v3->Locomotor_field_00 + 388))(v3) == 18
    || (*(int (__thiscall **)(Locomotor *))(v3->Locomotor_field_00 + 388))(v3) == 19 )
  {
    if ( v91 ) /*0x45117b*/
    {
      v81 = v3[328].Locomotor_field_00; /*0x451187*/
      v82 = (_DWORD *)(v81 + 12 * v3[333].Locomotor_field_00 + 3844); /*0x451197*/
      if ( v3[62].Locomotor_field_00 == *(_DWORD *)(v81 + 12 * v3[333].Locomotor_field_00 + 3848) + *v82 - 1 /*0x4511dd*/
        || !v3[134].Locomotor_field_00
        && *(_DWORD *)(v81 + 1032)
        && (*(int (__thiscall **)(Locomotor *))(v3->Locomotor_field_00 + 388))(v3) == 19
        && v3[62].Locomotor_field_00 == 23 )
      {
        BYTE1(v3[439].Locomotor_field_00) = 1; /*0x4511df*/
      }
      if ( v3[62].Locomotor_field_00 >= *v82 + v82[1] ) /*0x4511f5*/
        v92 = 1; /*0x4511f7*/
      LOBYTE(v3[32].Locomotor_field_00) = 1; /*0x4511fc*/
    }
    else if ( v3[333].Locomotor_field_00 == -1 || !v3[67].Locomotor_field_00 ) /*0x45120e*/
    {
      BYTE1(v3[439].Locomotor_field_00) = 1; /*0x451218*/
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(Locomotor *))(v3->Locomotor_field_00 + 352))(v3) ) /*0x451223*/
    LOBYTE(v3[32].Locomotor_field_00) = 1; /*0x45122d*/
  if ( (*(unsigned __int8 (__thiscall **)(Locomotor *))(v3->Locomotor_field_00 + 1020))(v3) ) /*0x451238*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(Locomotor *))(v3->Locomotor_field_00 + 1020))(v3) ) /*0x451246*/
    {
      if ( v3[352].Locomotor_field_00 ) /*0x451250*/
      {
        Value = ProgressTimer::GetValue((ProgressTimer *)&v3[226], &v93); /*0x451265*/
        v84 = v3[352].Locomotor_field_00; /*0x45126c*/
        v85 = ((unsigned int)((*Value >> 10) + 1) >> 1) & 0x1F; /*0x451278*/
        if ( v84 ) /*0x45127d*/
        {
          *(_DWORD *)(v84 + 172) = dword_7F4890[v85]; /*0x451286*/
          *(_DWORD *)(v84 + 196) = 0; /*0x45128c*/
        }
      }
    }
  }
  result = v92; /*0x451296*/
  if ( v92 ) /*0x45129c*/
  {
    v87 = v3[333].Locomotor_field_00; /*0x45129e*/
    v88 = (int *)(v3[328].Locomotor_field_00 + 12 * v87 + 3844); /*0x4512af*/
    if ( v87 < 2 ) /*0x4512b6*/
      ProductionTimeMult = Rules::GetProductionTimeMult( /*0x4512e1*/
                             (Rules *)&stru_A8EB00.ObjectTypeClass[24],
                             *(_DWORD *)(v3[328].Locomotor_field_00 + 12 * v87 + 3852));
    else
      ProductionTimeMult = *(char **)(v3[328].Locomotor_field_00 + 12 * v87 + 3852); /*0x4512c3*/
    v3[64].Locomotor_field_00 = *(int *)&stru_A8EB00.?[416]; /*0x4512cc*/
    v3[65].Locomotor_field_00 = v94; /*0x4512fc*/
    v3[66].Locomotor_field_00 = (int)ProductionTimeMult; /*0x451303*/
    v3[67].Locomotor_field_00 = (int)ProductionTimeMult; /*0x451306*/
    v90 = v3->Locomotor_field_00; /*0x45130e*/
    v3[62].Locomotor_field_00 = *v88; /*0x451310*/
    return (*(char (__thiscall **)(Locomotor *, int))(v90 + 292))(v3, 2); /*0x451316*/
  }
  return result; /*0x45131c*/
}



// ==== 0x00451330  BuildingClass::GetCrewCount  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetCrewCount(BuildingClass *this)
{
  BuildingTypeClass *Type; // ecx
  HouseClass *owner; // edx
  int sideIndex; // eax
  int v5; // esi
  int result; // eax

  if ( this->NoCrew ) /*0x451334*/
    return 0; /*0x451334*/
  Type = this->Type; /*0x451342*/
  if ( !Type->?[0] ) /*0x451348*/
    return 0; /*0x451350*/
  owner = this->?; /*0x451352*/
  sideIndex = owner->sideIndex; /*0x451358*/
  if ( sideIndex ) /*0x451360*/
  {
    if ( sideIndex == 1 ) /*0x451372*/
    {
      v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5372); /*0x451379*/
    }
    else
    {
      if ( sideIndex != 2 ) /*0x451384*/
        return 0; /*0x4513c9*/
      v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5376); /*0x45138b*/
    }
  }
  else
  {
    v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5368); /*0x451367*/
  }
  if ( !v5 ) /*0x451393*/
    return 0; /*0x451393*/
  if ( this->HasBeenCaptured ) /*0x451395*/
    v5 *= 2; /*0x45139f*/
  result = (*((int (__thiscall **)(BuildingTypeClass *, HouseClass *, _DWORD))Type->TechnoTypeClass + 46))( /*0x4513ad*/
             Type,
             owner,
             0)
         / v5;
  if ( result < 1 ) /*0x4513b2*/
    return 1; /*0x4513b5*/
  if ( result > 5 ) /*0x4513bf*/
    return 5; /*0x4513c2*/
  return result; /*0x4513b4*/
}



// ==== 0x004513D0  BuildingClass::ProductionCheck  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ProductionCheck(BuildingClass *this)
{
  if ( this->BuildingClass_field_int_534 && this->ActuallyPlacedOnMap ) /*0x4513da*/
    return (*((int (__thiscall **)(BuildingTypeClass *))this->Type->TechnoTypeClass + 39))(this->Type); /*0x4513ec*/
  else
    return (*((int (__thiscall **)(BuildingTypeClass *))this->Type->TechnoTypeClass + 48))(this->Type); /*0x4513fa*/
}



// ==== 0x00451400  UpdateBuildingActiveAnim  this=-  sig=ida-proto ====
char __fastcall UpdateBuildingActiveAnim(BuildingClass *a1, int a2)
{
  int Strength; // eax
  int v4; // edi
  int v5; // esi
  int *Anims; // ebx
  BuildingTypeClass *Type; // ecx
  ParticleSystemClass *damageParticles; // ecx
  int v11; // edi
  int v12; // esi
  int *v13; // ebx
  BuildingTypeClass *v14; // ecx
  BuildingTypeClass *v15; // ecx
  int SuperWeaponToken; // eax
  int v17; // ebx
  unsigned int v18; // edx
  unsigned int v19; // ecx
  char UpgradeLevel; // al
  BOOL v23; // edx
  int v24; // eax
  int *v25; // ecx
  char v26[64]; // [esp+10h] [ebp-40h] BYREF

  Strength = a1->Type->?; /*0x451412*/
  if ( a1->? != Strength ) /*0x45141a*/
  {
    a1->? = Strength; /*0x451420*/
    if ( a1->IsDamaged ) /*0x451423*/
    {
      v4 = 0; /*0x45142d*/
      a1->IsDamaged = 0; /*0x45142f*/
      v5 = 0; /*0x451436*/
      Anims = a1->Anims; /*0x451438*/
      do /*0x451475*/
      {
        if ( *Anims ) /*0x45143e*/
        {
          Type = a1->Type; /*0x451443*/
          if ( (BuildingTypeClass *)((char *)Type + v5 * 4) != (BuildingTypeClass *)-3916 ) /*0x451452*/
          {
            if ( LOBYTE(Type->BuildingAnim[v5 + 12]) ) /*0x451454*/
              BuildingClass::PlayAnim(a1, a2, &Type->BuildingAnim[v5 + 12], v4, 0, 0, 0); /*0x451463*/
          }
        }
        v5 += 17; /*0x451468*/
        ++v4; /*0x45146b*/
        ++Anims; /*0x45146c*/
      }
      while ( v5 < 357 ); /*0x451475*/
    }
    BuildingClass::GetHealthRatio(a1); /*0x451479*/
    _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x45147e*/
    __asm /*0x451484*/
    {
      fcomp qword ptr [edx+1700h]
      fnstsw ax
    }
    if ( (_AX & 0x4100) == 0 ) /*0x45148f*/
    {
      damageParticles = a1->?; /*0x451491*/
      if ( damageParticles ) /*0x451499*/
        (*((void (__thiscall **)(ParticleSystemClass *))damageParticles->ObjectClass + 62))(damageParticles); /*0x45149d*/
    }
    v11 = 3; /*0x4514a3*/
    v12 = 51; /*0x4514a8*/
    v13 = &a1->Anims[3]; /*0x4514ad*/
    do /*0x4514ea*/
    {
      if ( !*v13 ) /*0x4514b3*/
      {
        v14 = a1->Type; /*0x4514b8*/
        if ( (BuildingTypeClass *)((char *)v14 + v12 * 4) != (BuildingTypeClass *)-3916 ) /*0x4514c7*/
        {
          if ( LOBYTE(v14->BuildingAnim[v12 + 12]) ) /*0x4514c9*/
            BuildingClass::PlayAnim(a1, _EDX, &v14->BuildingAnim[v12 + 12], v11, 0, 0, 0); /*0x4514d8*/
        }
      }
      v12 += 17; /*0x4514dd*/
      ++v11; /*0x4514e0*/
      ++v13; /*0x4514e1*/
    }
    while ( v12 <= 102 ); /*0x4514ea*/
    a1->? = 1; /*0x4514ec*/
  }
  v15 = a1->Type; /*0x4514f9*/
  if ( v15 == *(BuildingTypeClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2172) ) /*0x451505*/
  {
    SuperWeaponToken = a1->SuperWeaponToken; /*0x45150b*/
    v17 = SuperWeaponToken + 1; /*0x451511*/
    if ( SuperWeaponToken + 1 > 2 ) /*0x451517*/
      v17 = 0; /*0x451519*/
    if ( v17 != SuperWeaponToken && !v15->TurretAnimIsVoxel ) /*0x451523*/
    {
      BuildingClass::ClearAnims(a1, 9); /*0x451535*/
      if ( v17 != -1 ) /*0x45153d*/
      {
        strcpy(v26, a1->Type->?); /*0x45156b*/
        v18 = strlen(asc_818D7C) + 1; /*0x45158c*/
        qmemcpy(&v26[strlen(v26)], asc_818D7C, v18); /*0x451599*/
        v19 = strlen(v26); /*0x4515b3*/
        v26[v19] = v17 + 66; /*0x4515b6*/
        v26[v19 + 1] = 0; /*0x4515ba*/
        BuildingClass::PlayAnim(a1, v18, v26, 9, 0, 0, 0); /*0x4515c6*/
        a1->SuperWeaponToken = v17; /*0x4515cb*/
      }
    }
    ++a1->UpgradeLevel; /*0x4515db*/
    return 1; /*0x4515e2*/
  }
  else
  {
    UpgradeLevel = a1->UpgradeLevel; /*0x4515e9*/
    if ( UpgradeLevel == *(_DWORD *)&v15->__pad_F70[1392] ) /*0x4515fa*/
    {
      return 0; /*0x4515ff*/
    }
    else
    {
      a1->UpgradeLevel = UpgradeLevel + 1; /*0x45160a*/
      BuildingClass::GetHealthRatio(a1); /*0x451610*/
      _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x451615*/
      __asm /*0x45161a*/
      {
        fcomp qword ptr [eax+1700h]
        fnstsw ax
      }
      v23 = (_EAX & 0x4100) != 0; /*0x451625*/
      v24 = a1->UpgradeLevel - 1; /*0x451637*/
      if ( v23 ) /*0x45163c*/
        v25 = &a1->Type->BuildingAnim[17 * v24 + 16]; /*0x451649*/
      else
        v25 = &a1->Type->BuildingAnim[17 * v24 + 12]; /*0x45165d*/
      if ( v25 && *(_BYTE *)v25 ) /*0x451668*/
        BuildingClass::PlayAnim(a1, v23, v25, v24, v23, 0, 0); /*0x451676*/
      return 1; /*0x45167e*/
    }
  }
}



// ==== 0x00451690  BuildingClass::ClearSuperWeaponAnim  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::ClearSuperWeaponAnim(BuildingClass *this)
{
  char result; // al
  int v3; // ecx
  bool v4; // bl
  int v5; // eax
  char v6; // cl

  result = this->UpgradeLevel; /*0x451694*/
  if ( result ) /*0x45169c*/
  {
    v3 = result; /*0x4516a1*/
    v4 = 0; /*0x4516a4*/
    v5 = this->DamageFireAnims[result + 8]; /*0x4516a6*/
    if ( v5 && (v4 = *(_DWORD *)(v5 + 5872) != -1, *(_BYTE *)(v5 + 3233)) ) /*0x4516c0*/
    {
      BuildingClass::ClearAnims(this, 9); /*0x4516ce*/
      this->DamageFireAnims[this->UpgradeLevel + 8] = 0; /*0x4516dc*/
      this->UpgradeLevel = 0; /*0x4516e7*/
      this->SuperWeaponToken = -1; /*0x4516ee*/
      if ( v4 ) /*0x4516f8*/
      {
        SuperWeapon::UpdateSuperWeaponsOwnedHouseClass((SuperWeapon *)this->?); /*0x451700*/
        return 1; /*0x451709*/
      }
    }
    else
    {
      BuildingClass::ClearAnims(this, v3 - 1); /*0x45170e*/
      v6 = this->UpgradeLevel - 1; /*0x451719*/
      this->UpgradeLevel = v6; /*0x45171b*/
      this->Upgrades[v6] = 0; /*0x451726*/
      if ( v4 ) /*0x451731*/
        SuperWeapon::UpdateSuperWeaponsOwnedHouseClass((SuperWeapon *)this->?); /*0x451739*/
    }
    return 1; /*0x45173f*/
  }
  return result; /*0x45169e*/
}



// ==== 0x00451750  BuildingClass::PlayUpgradeAnim  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::PlayUpgradeAnim(BuildingClass *this, int a2, int a3, int a4, void *a5)
{
  int result; // eax
  int *v6; // edx

  if ( (_BYTE)a3 ) /*0x45175f*/
  {
    result = a2; /*0x451761*/
    v6 = &this->Type->BuildingAnim[17 * a2 + 16]; /*0x451772*/
  }
  else
  {
    result = a2; /*0x45177b*/
    if ( (_BYTE)a4 ) /*0x451783*/
      v6 = &this->Type->BuildingAnim[17 * a2 + 20]; /*0x451790*/
    else
      v6 = &this->Type->BuildingAnim[17 * a2 + 12]; /*0x4517a4*/
  }
  if ( v6 ) /*0x4517ad*/
  {
    if ( *(_BYTE *)v6 ) /*0x4517af*/
      return BuildingClass::PlayAnim(this, (int)v6, v6, result, a3, a4, a5); /*0x4517bf*/
  }
  return result; /*0x4517c4*/
}



// ==== 0x004517D0  ObjectClass::method_4517D0  this=ObjectClass  sig=csp ====
int __thiscall sub_4517D0(TechnoClass *this)
{
  int *v2; // eax
  int v3; // edi
  int v4; // edx
  int result; // eax
  int *v6; // esi
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int **v12; // [esp+10h] [ebp-28h]
  int v13; // [esp+14h] [ebp-24h]
  int v14; // [esp+18h] [ebp-20h]
  int v15; // [esp+1Ch] [ebp-1Ch]
  _DWORD v16[3]; // [esp+20h] [ebp-18h] BYREF
  _DWORD v17[3]; // [esp+2Ch] [ebp-Ch] BYREF

  v2 = (int *)(*(int (__thiscall **)(TechnoClass *, _DWORD *))(this->vtable0 + 172))(this, v16); /*0x4517e2*/
  v3 = 0; /*0x4517ea*/
  v13 = *v2; /*0x4517ec*/
  v14 = v2[1]; /*0x4517f3*/
  v4 = v2[2]; /*0x4517f7*/
  result = (int)this + 1372; /*0x4517fa*/
  v15 = v4; /*0x451800*/
  v12 = (int **)((char *)this + 1372); /*0x451804*/
  do /*0x451879*/
  {
    v6 = *v12; /*0x45180c*/
    if ( *v12 ) /*0x45180c*/
    {
      v7 = Matrix3x4::TransformCell( /*0x45182b*/
             (float *)g_TacticalClass_Instance,
             v17,
             (int *)(*((_DWORD *)this + 328) + v3 + 3964));
      v8 = v13 + *v7; /*0x45183a*/
      v9 = v7[1]; /*0x45183c*/
      v10 = v7[2]; /*0x45183f*/
      v16[1] = v14 + v9; /*0x45184a*/
      v11 = *v6; /*0x45184e*/
      v16[2] = v15 + v10; /*0x451850*/
      v16[0] = v8; /*0x451858*/
      result = (*(int (__thiscall **)(int *, _DWORD *))(v11 + 436))(v6, v16); /*0x45185f*/
    }
    v3 += 68; /*0x451869*/
    ++v12; /*0x451875*/
  }
  while ( v3 < 1428 ); /*0x451879*/
  return result; /*0x45187b*/
}



// ==== 0x00451890  BuildingClass::PlayAnim  this=ObjectClass  sig=csp ====
int __fastcall BuildingClass::PlayAnim(BuildingClass *a1, int a2, AnimTypeClass *a3, int a4, int a5, int a6, void *a7)
{
  int v8; // edi
  int *Anims; // ebp
  int result; // eax
  int v11; // ebp
  int v12; // edi
  _DWORD *v13; // ebx
  _DWORD *v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  AnimClass *v18; // eax
  void **v19; // ebp
  void *v20; // edx
  int Translucency; // ebx
  int *v22; // ecx
  int v23; // edx
  int v24; // eax
  int v25; // ecx
  BuildingTypeClass *Type; // eax
  int v27; // eax
  int started; // edi
  _DWORD *v29; // eax
  int v30[3]; // [esp+10h] [ebp-24h] BYREF
  _DWORD v31[3]; // [esp+1Ch] [ebp-18h] BYREF
  _BYTE v32[12]; // [esp+28h] [ebp-Ch] BYREF

  if ( a1->IsDamaged != (_BYTE)a5 ) /*0x4518a3*/
  {
    a1->IsDamaged = a5; /*0x4518a5*/
    v8 = 0; /*0x4518ab*/
    Anims = a1->Anims; /*0x4518ad*/
    do /*0x4518cd*/
    {
      if ( *Anims ) /*0x4518b3*/
        BuildingClass::PlayUpgradeAnim(a1, v8, a5, 0, 0); /*0x4518c1*/
      ++v8; /*0x4518c6*/
      ++Anims; /*0x4518c7*/
    }
    while ( v8 < 21 ); /*0x4518cd*/
  }
  result = AnimTypeClass::FindIndex(a3); /*0x4518d3*/
  v11 = result; /*0x4518d8*/
  if ( result != -1 )
  {
    v12 = 68 * a4; /*0x4518f8*/
    v13 = Matrix3x4::TransformCell((float *)g_TacticalClass_Instance, v31, (int *)&a1->Type->__pad_F70[68 * a4 + 12]); /*0x451913*/
    v14 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))a1->TechnoClass + 43))(a1, v32); /*0x45191a*/
    v15 = *v13 + *v14; /*0x451924*/
    v16 = v13[1] + v14[1]; /*0x45192c*/
    v17 = v13[2] + v14[2]; /*0x45192f*/
    v30[0] = v15; /*0x451937*/
    v30[1] = v16; /*0x45193b*/
    v30[2] = v17; /*0x45193f*/
    v18 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x451943*/
    if ( v18 ) /*0x45194d*/
      v19 = AnimClass::ctor(v18, *(void **)(FootClass_Array.?[3] + 4 * v11), v30, a7, 1, (void *)0x1600, 0, 0); /*0x451975*/
    else
      v19 = 0; /*0x451979*/
    v19[64] = *(void **)&a1->Type->__pad_F70[v12 + 20]; /*0x451988*/
    v20 = *(void **)&a1->Type->__pad_F70[v12 + 24]; /*0x451994*/
    *((_BYTE *)v19 + 280) = 1; /*0x45199b*/
    v19[65] = v20; /*0x4519a2*/
    if ( a1->IsFogged ) /*0x4519a8*/
      *((_BYTE *)v19 + 409) = 1; /*0x4519b2*/
    Translucency = a1->Translucency; /*0x4519b9*/
    if ( Translucency == 15 /*0x4519d3*/
      && (*((int (__thiscall **)(BuildingClass *, _DWORD, _DWORD))a1->TechnoClass + 26))(a1, 0, 0) == 5 )
    {
      LOBYTE(Translucency) = 16; /*0x4519d5*/
    }
    v22 = a1->Anims; /*0x4519da*/
    v23 = 21; /*0x4519e0*/
    do /*0x4519f5*/
    {
      if ( *v22 ) /*0x4519e5*/
        *(_BYTE *)(*v22 + 376) = Translucency; /*0x4519eb*/
      ++v22; /*0x4519f1*/
      --v23; /*0x4519f4*/
    }
    while ( v23 ); /*0x4519f5*/
    v24 = a1->Anims[a4]; /*0x4519fb*/
    if ( v24 ) /*0x451a04*/
    {
      v19[43] = *(void **)(v24 + 172); /*0x451a0c*/
      v25 = a1->Anims[a4]; /*0x451a12*/
      a1->Anims[a4] = 0; /*0x451a1b*/
      if ( v25 ) /*0x451a26*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v25 + 32))(v25, 1); /*0x451a2c*/
    }
    a1->Anims[a4] = (int)v19; /*0x451a2f*/
    if ( !a1->StuffEnabled || !(*((unsigned __int8 (__thiscall **)(BuildingClass *))a1->TechnoClass + 212))(a1) ) /*0x451a44*/
    {
      Type = a1->Type; /*0x451a4e*/
      if ( Type->Powered ) /*0x451a54*/
      {
        if ( Type->__pad_F70[v12 + 28] ) /*0x451a5e*/
          BuildingClass::SetField8((BuildingClass *)v19); /*0x451a6b*/
      }
    }
    if ( *((_BYTE *)v19[50] + 860) )
    {
      v19[53] = (void *)(*((int (__thiscall **)(BuildingClass *))a1->TechnoClass + 121))(a1); /*0x451a8a*/
      v27 = (*((int (__thiscall **)(BuildingClass *))a1->TechnoClass + 111))(a1); /*0x451a94*/
      started = (*((int (__thiscall **)(BuildingClass *, _DWORD))a1->TechnoClass + 281))(a1, *(__int16 *)(v27 + 266)); /*0x451aac*/
      if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))a1->TechnoClass + 88))(a1)
        || a1->?
        && (a1
          ? (v29 = (*((int (__thiscall **)(BuildingClass *))a1->TechnoClass + 11))(a1) == 6 ? (_DWORD *)a1 : 0)
          : (v29 = 0),
            (_DWORD *)a1->?->AirstrikeClass_field_50 == v29) )
      {
        started = Techno::StartInvulnerability(started); /*0x451af3*/
      }
      v19[63] = (void *)started; /*0x451af5*/
    }
    if ( a4 == 9 && a1->Type->BarrelAnimIsVoxel ) /*0x451b06*/
      *((_BYTE *)v19 + 413) = 1; /*0x451b10*/
    result = (*((int (__thiscall **)(BuildingClass *))a1->TechnoClass + 117))(a1); /*0x451b1b*/
    if ( (_BYTE)result ) /*0x451b23*/
      *((_BYTE *)v19 + 282) = 1; /*0x451b25*/
  }
  return result; /*0x451b2c*/
}



// ==== 0x00451B40  BuildingClass::StopAnim  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::StopAnim(BuildingClass *this, int a2)
{
  int Type; // eax
  int *i; // ecx
  int v5; // edx
  int v8; // ecx
  BOOL v11; // ebx
  bool v12; // al
  int v13; // edx
  bool v14; // zf
  BuildingTypeClass *v15; // eax
  int v18; // ecx
  int v21; // ecx
  int v22; // edx
  int v24; // ecx

  LOBYTE(Type) = this->?; /*0x451b44*/
  if ( (_BYTE)Type )
  {
    Type = 0; /*0x451b56*/
    for ( i = this->Anims; *i != a2; ++i ) /*0x451b58*/
    {
      if ( ++Type >= 21 ) /*0x451b69*/
        return Type; /*0x451b69*/
    }
    this->Anims[Type] = 0; /*0x451b70*/
    Type -= 10; /*0x451b7b*/
    switch ( Type )
    {
      case 0:
        Type = (int)this->Type; /*0x451b8e*/
        if ( *(_BYTE *)(Type + 5801) )
        {
          if ( !(unsigned __int8)Team::AllMembersValid((Team *)this) /*0x451bba*/
            || (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) != 20 )
          {
            BuildingClass::GetHealthRatio(this); /*0x451c1c*/
            _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x451c21*/
            __asm { fcomp qword ptr [edx+1700h] } /*0x451c27*/
            goto LABEL_30; /*0x451c2d*/
          }
          BuildingClass::GetHealthRatio(this); /*0x451bbe*/
          _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x451bc3*/
          __asm /*0x451bc9*/
          {
            fcomp qword ptr [ecx+1700h]
            fnstsw ax
          }
          if ( (_AX & 0x4100) != 0 ) /*0x451bd4*/
          {
            v8 = 1; /*0x451bdc*/
            Type = (int)&this->Type->__pad_F70[728]; /*0x451be1*/
          }
          else
          {
            v8 = 0; /*0x451bee*/
            Type = (int)&this->Type->__pad_F70[712]; /*0x451bf0*/
          }
          if ( Type && *(_BYTE *)Type ) /*0x451bfd*/
            LOBYTE(Type) = BuildingClass::PlayAnim(this, v5, (AnimTypeClass *)Type, 11, v8, 0, 0); /*0x451c10*/
        }
        else if ( *(_BYTE *)(Type + 5799) )
        {
          LOBYTE(Type) = *(_BYTE *)(a2 + 377); /*0x451c40*/
          if ( (_BYTE)Type )
          {
            BuildingClass::GetHealthRatio(this); /*0x451c50*/
            _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x451c55*/
            __asm /*0x451c5a*/
            {
              fcomp qword ptr [eax+1700h]
              fnstsw ax
            }
            v11 = (_EAX & 0x4100) != 0; /*0x451c65*/
            v12 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 258))(this) > 0; /*0x451c7c*/
            LOBYTE(a2) = v12; /*0x451c81*/
            if ( v11 )
            {
              Type = (int)&this->Type->__pad_F70[184]; /*0x451c8d*/
            }
            else
            {
              v14 = !v12; /*0x451c94*/
              v15 = this->Type; /*0x451c96*/
              Type = (int)(v14 ? &v15->__pad_F70[168] : &v15->__pad_F70[200]);
            }
            if ( Type && *(_BYTE *)Type ) /*0x451cb2*/
              LOBYTE(Type) = BuildingClass::PlayAnim(this, v13, (AnimTypeClass *)Type, 3, v11, a2, 0); /*0x451cc8*/
          }
        }
        break; /*0x451c17*/
      case 2:
        Type = (int)this->Type; /*0x451cd2*/
        if ( *(_BYTE *)(Type + 5801) ) /*0x451cd8*/
        {
          LOBYTE(Type) = *(_BYTE *)(a2 + 377); /*0x451ce6*/
          if ( (_BYTE)Type ) /*0x451cee*/
          {
            BuildingClass::GetHealthRatio(this); /*0x451cf6*/
            _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x451cfb*/
            __asm { fcomp qword ptr [ecx+1700h] } /*0x451d01*/
LABEL_30:
            __asm { fnstsw ax } /*0x451d07*/
            if ( (_AX & 0x4100) != 0 ) /*0x451d0c*/
            {
              v18 = 1; /*0x451d14*/
              Type = (int)&this->Type->__pad_F70[1204]; /*0x451d19*/
            }
            else
            {
              v18 = 0; /*0x451d26*/
              Type = (int)&this->Type->__pad_F70[1188]; /*0x451d28*/
            }
            if ( Type && *(_BYTE *)Type ) /*0x451d35*/
              LOBYTE(Type) = BuildingClass::PlayAnim(this, _EDX, (AnimTypeClass *)Type, 18, v18, 0, 0); /*0x451d48*/
          }
        }
        break; /*0x451d4f*/
      case 5:
        LOBYTE(Type) = *(_BYTE *)(a2 + 377); /*0x451d52*/
        if ( (_BYTE)Type ) /*0x451d5a*/
        {
          BuildingClass::GetHealthRatio(this); /*0x451d62*/
          _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x451d67*/
          __asm /*0x451d6d*/
          {
            fcomp qword ptr [edx+1700h]
            fnstsw ax
          }
          if ( (_AX & 0x4100) != 0 ) /*0x451d78*/
          {
            v21 = 1; /*0x451d80*/
            Type = (int)&this->Type->__pad_F70[1068]; /*0x451d85*/
          }
          else
          {
            v21 = 0; /*0x451d92*/
            Type = (int)&this->Type->__pad_F70[1052]; /*0x451d94*/
          }
          if ( Type && *(_BYTE *)Type ) /*0x451d9d*/
            LOBYTE(Type) = BuildingClass::PlayAnim( /*0x451dac*/
                             this,
                             *(int *)&DSurface_ViewBounds.__pad_FC[324],
                             (AnimTypeClass *)Type,
                             16,
                             v21,
                             0,
                             0);
        }
        break; /*0x451db3*/
      case 7:
        LOBYTE(Type) = *(_BYTE *)(a2 + 377); /*0x451db6*/
        if ( (_BYTE)Type ) /*0x451dbe*/
        {
          BuildingClass::GetHealthRatio(this); /*0x451dc2*/
          _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x451dc7*/
          __asm /*0x451dcc*/
          {
            fcomp qword ptr [eax+1700h]
            fnstsw ax
          }
          if ( (_EAX & 0x4100) != 0 ) /*0x451dd7*/
          {
            v24 = 1; /*0x451ddf*/
            Type = (int)&this->Type->__pad_F70[932]; /*0x451de4*/
          }
          else
          {
            v24 = 0; /*0x451df1*/
            Type = (int)&this->Type->__pad_F70[916]; /*0x451df3*/
          }
          if ( Type && *(_BYTE *)Type ) /*0x451dfc*/
            LOBYTE(Type) = BuildingClass::PlayAnim(this, v22, (AnimTypeClass *)Type, 14, v24, 0, 0); /*0x451e0b*/
        }
        break; /*0x451e0b*/
      default:
        return Type;
    }
  }
  return Type; /*0x451b6b*/
}



// ==== 0x00451E40  BuildingClass::ClearAnims  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ClearAnims(BuildingClass *this, int a2)
{
  int result; // eax
  int *Anims; // esi
  int v4; // edi
  int v5; // ecx

  if ( a2 == -2 ) /*0x451e47*/
  {
    Anims = this->Anims; /*0x451e4b*/
    v4 = 21; /*0x451e51*/
    do /*0x451e6d*/
    {
      v5 = *Anims; /*0x451e56*/
      if ( *Anims ) /*0x451e56*/
      {
        *Anims = 0; /*0x451e5c*/
        result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 32))(v5, 1); /*0x451e66*/
      }
      ++Anims; /*0x451e69*/
      --v4; /*0x451e6c*/
    }
    while ( v4 ); /*0x451e6d*/
  }
  else
  {
    result = this->Anims[a2]; /*0x451e74*/
    if ( result ) /*0x451e7d*/
    {
      this->Anims[a2] = 0; /*0x451e7f*/
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)result + 32))(result, 1); /*0x451e90*/
    }
  }
  return result; /*0x451e71*/
}



// ==== 0x00451EE0  globalHelper_051EE0  this=TechnoClass  sig=csp ====
void __fastcall sub_451EE0(int a1, int a2, int a3)
{
  int v4; // ecx
  int v5; // ebp
  int v6; // esi
  _DWORD *v7; // ebx
  _BYTE *v8; // eax

  v4 = a3; /*0x451ee3*/
  if ( *(_BYTE *)(a1 + 1766) != (_BYTE)a3 ) /*0x451eed*/
  {
    v5 = 0; /*0x451ef2*/
    *(_BYTE *)(a1 + 1766) = a3; /*0x451ef4*/
    v6 = 0; /*0x451efa*/
    v7 = (_DWORD *)(a1 + 1372); /*0x451efc*/
    do /*0x451f4f*/
    {
      if ( *v7 ) /*0x451f02*/
      {
        if ( (_BYTE)v4 ) /*0x451f09*/
        {
          v8 = (_BYTE *)(*(_DWORD *)(a1 + 1312) + v6 + 3932); /*0x451f11*/
        }
        else
        {
          a2 = *(_DWORD *)(a1 + 1312); /*0x451f1a*/
          v8 = (_BYTE *)(a2 + v6 + 3916); /*0x451f20*/
        }
        if ( v8 ) /*0x451f29*/
        {
          if ( *v8 ) /*0x451f2b*/
          {
            BuildingClass::PlayAnim((_DWORD *)a1, a2, v8, v5, v4, 0, 0); /*0x451f39*/
            v4 = a3; /*0x451f3e*/
          }
        }
      }
      v6 += 68; /*0x451f42*/
      ++v5; /*0x451f45*/
      ++v7; /*0x451f46*/
    }
    while ( v6 < 1428 ); /*0x451f4f*/
  }
}



// ==== 0x00451F60  BuildingClass::SyncCrateVisuals  this=BuildingClass  sig=csp ====
int __thiscall sub_451F60(char *this, int a2, int a3)
{
  _DWORD *v4; // ebp
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // ebx
  char *v8; // ecx
  int v9; // esi
  int result; // eax
  int v11; // [esp+10h] [ebp-4h]

  v11 = 21; /*0x451f67*/
  v4 = this + 1372; /*0x451f6f*/
  do /*0x451fee*/
  {
    v5 = (_DWORD *)*v4; /*0x451f75*/
    if ( *v4 ) /*0x451f75*/
    {
      v6 = v5[50]; /*0x451f7c*/
      if ( v6 && *(_BYTE *)(v6 + 860) ) /*0x451f86*/
      {
        v5[53] = a2; /*0x451f98*/
        v5[63] = a3; /*0x451f9e*/
      }
      v7 = this->Translucency; /*0x451fa4*/
      if ( v7 == 15 && (*(int (__thiscall **)(char *, _DWORD, _DWORD))(this->bombVisible)(this, 0, 0) == 5 ) /*0x451fbe*/
        LOBYTE(v7) = 16; /*0x451fc0*/
      v8 = this + 1372; /*0x451fc5*/
      v9 = 21; /*0x451fcb*/
      do /*0x451fe0*/
      {
        if ( *(_DWORD *)v8 ) /*0x451fd0*/
          *(_BYTE *)(*(_DWORD *)v8 + 376) = v7; /*0x451fd6*/
        v8 += 4; /*0x451fdc*/
        --v9; /*0x451fdf*/
      }
      while ( v9 ); /*0x451fe0*/
    }
    ++v4; /*0x451fe6*/
    result = --v11; /*0x451fe9*/
  }
  while ( v11 ); /*0x451fee*/
  return result; /*0x451ff0*/
}



// ==== 0x00452000  sub_452000  this=TechnoClass  sig=csp ====
int __fastcall sub_452000(_DWORD *a1)
{
  int v2; // eax
  int v3; // edi
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // ebx
  _DWORD *v8; // ecx
  int v9; // ebp
  bool v10; // zf
  int v11; // ebx
  int *v12; // ecx
  int v13; // esi
  int result; // eax
  _DWORD *v15; // [esp+10h] [ebp-10h]
  int v16; // [esp+14h] [ebp-Ch]
  int v17; // [esp+18h] [ebp-8h]

  v17 = (*(int (__thiscall **)(_DWORD *))(*a1 + 484))(a1); /*0x452015*/
  v2 = (*(int (__thiscall **)(_DWORD *))(*a1 + 444))(a1); /*0x452019*/
  v3 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a1 + 1124))(a1, *(__int16 *)(v2 + 266)); /*0x452031*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 352))(a1)
    || a1[165]
    && (a1 ? (v4 = (*(int (__thiscall **)(_DWORD *))(*a1 + 44))(a1) == 6 ? a1 : 0) : (v4 = 0),
        *(_DWORD **)(a1[165] + 80) == v4) )
  {
    LOWORD(v3) = Techno::StartInvulnerability(v3); /*0x452078*/
  }
  *((_WORD *)a1 + 896) = v3; /*0x45207a*/
  v15 = a1 + 343; /*0x452091*/
  v16 = 21; /*0x452095*/
  do /*0x45211d*/
  {
    v5 = (_DWORD *)*v15; /*0x4520a1*/
    if ( *v15 ) /*0x4520a1*/
    {
      v6 = v5[50]; /*0x4520a7*/
      if ( v6 && *(_BYTE *)(v6 + 860) ) /*0x4520b1*/
      {
        v5[53] = v17; /*0x4520c3*/
        v5[63] = (unsigned __int16)v3; /*0x4520c9*/
      }
      v7 = *((char *)a1 + 1773); /*0x4520cf*/
      if ( v7 == 15 && (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*a1 + 104))(a1, 0, 0) == 5 ) /*0x4520e9*/
        LOBYTE(v7) = 16; /*0x4520eb*/
      v8 = a1 + 343; /*0x4520f0*/
      v9 = 21; /*0x4520f2*/
      do /*0x452107*/
      {
        if ( *v8 ) /*0x4520f7*/
          *(_BYTE *)(*v8 + 376) = v7; /*0x4520fd*/
        ++v8; /*0x452103*/
        --v9; /*0x452106*/
      }
      while ( v9 ); /*0x452107*/
    }
    v10 = v16 == 1; /*0x452114*/
    ++v15; /*0x452115*/
    --v16; /*0x452119*/
  }
  while ( !v10 ); /*0x45211d*/
  v11 = *((char *)a1 + 1773); /*0x452123*/
  if ( v11 == 15 && (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*a1 + 104))(a1, 0, 0) == 5 ) /*0x45213d*/
    LOBYTE(v11) = 16; /*0x45213f*/
  v12 = a1 + 343; /*0x452144*/
  v13 = 21; /*0x452146*/
  do /*0x45215b*/
  {
    result = *v12; /*0x45214b*/
    if ( *v12 ) /*0x45214b*/
      *(_BYTE *)(result + 376) = v11; /*0x452151*/
    ++v12; /*0x452157*/
    --v13; /*0x45215a*/
  }
  while ( v13 ); /*0x45215b*/
  return result; /*0x45215d*/
}



// ==== 0x00452170  BuildingClass::SetConnectedBuildingMission  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::SetConnectedBuildingMission(BuildingClass *this, int a2)
{
  char v3; // bl
  int *Anims; // ecx
  int v5; // esi
  int result; // eax

  v3 = a2; /*0x45217b*/
  if ( a2 == 15 && (*((int (__thiscall **)(BuildingClass *, _DWORD, _DWORD))this->TechnoClass + 26))(this, 0, 0) == 5 ) /*0x45218b*/
    v3 = 16; /*0x45218d*/
  Anims = this->Anims; /*0x452192*/
  v5 = 21; /*0x452198*/
  do /*0x4521ad*/
  {
    result = *Anims; /*0x45219d*/
    if ( *Anims ) /*0x45219d*/
      *(_BYTE *)(result + 376) = v3; /*0x4521a3*/
    ++Anims; /*0x4521a9*/
    --v5; /*0x4521ac*/
  }
  while ( v5 ); /*0x4521ad*/
  return result; /*0x4521af*/
}



// ==== 0x004521C0  BuildingClass::DisableTemporal  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::DisableTemporal(BuildingClass *this)
{
  int *Anims; // ecx
  int v2; // edx
  int result; // eax
  int v4; // esi

  this->HasPower = 0; /*0x4521c0*/
  Anims = this->Anims; /*0x4521c8*/
  v2 = 21; /*0x4521ce*/
  do /*0x4521fe*/
  {
    result = *Anims; /*0x4521d3*/
    if ( *Anims ) /*0x4521d3*/
    {
      v4 = *(_DWORD *)(result + 172); /*0x4521d9*/
      *(_BYTE *)(result + 282) = 1; /*0x4521df*/
      *(_BYTE *)(result + 283) = 0; /*0x4521e6*/
      *(_DWORD *)(result + 284) = v4; /*0x4521ed*/
      *(_BYTE *)(result + 281) = 1; /*0x4521f3*/
    }
    ++Anims; /*0x4521fa*/
    --v2; /*0x4521fd*/
  }
  while ( v2 ); /*0x4521fe*/
  return result; /*0x452200*/
}



// ==== 0x00452210  BuildingClass::EnableTogglePower  this=BuildingClass  sig=csp ====
_BYTE *__thiscall BuildingClass::EnableTogglePower(BuildingClass *this)
{
  int *Anims; // ecx
  int v2; // edx
  _BYTE *result; // eax

  this->HasPower = 1; /*0x452210*/
  Anims = this->Anims; /*0x452218*/
  v2 = 21; /*0x45221e*/
  do /*0x452242*/
  {
    result = (_BYTE *)*Anims; /*0x452225*/
    if ( *Anims ) /*0x452225*/
    {
      result[282] = 0; /*0x45222b*/
      result[283] = 1; /*0x452231*/
      result[281] = 0; /*0x452238*/
    }
    ++Anims; /*0x45223e*/
    --v2; /*0x452241*/
  }
  while ( v2 ); /*0x452242*/
  return result; /*0x452244*/
}



// ==== 0x00452250  BuildingClass::StubReturn0  this=BuildingClass  sig=csp ====
int __thiscall FootClass::StubReturn0(BuildingClass *this)
{
  return 0; /*0x452252*/
}



// ==== 0x00452260  BuildingClass::AnnounceReady  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::AnnounceReady(BuildingClass *this)
{
  HouseClass *owner; // ecx
  LightSourceClass *LightSource; // ecx
  BuildingTypeClass *Type; // edx
  int v5; // edi
  int *Anims; // ebx
  BuildingTypeClass *v7; // eax
  int v8; // ecx

  if ( !this->HasPower && !this->? ) /*0x452271*/
  {
    owner = this->?; /*0x45227f*/
    this->HasPower = 1; /*0x452287*/
    this->? = 1; /*0x45228d*/
    LOBYTE(owner->HouseClass_field_timer_B[2]) = 1; /*0x452293*/
    BYTE1(this->?->HouseClass_field_timer_B[2]) = 1; /*0x45229f*/
    this->?->recheckTechTree = 1; /*0x4522ab*/
    LightSource = this->LightSource; /*0x4522b1*/
    this->StuffEnabled = 1; /*0x4522b9*/
    if ( LightSource ) /*0x4522bf*/
      Trigger::EnableOnce((Trigger *)LightSource, 0); /*0x4522c3*/
    Type = this->Type; /*0x4522c8*/
    if ( Type->LaserFencePost ) /*0x4522ce*/
      BuildingClass::RepairPlacement(this, 0); /*0x4522dc*/
    v5 = 0; /*0x4522e3*/
    Anims = this->Anims; /*0x4522e5*/
    do /*0x452313*/
    {
      if ( this->Type->__pad_F70[v5 + 28] && *Anims ) /*0x4522fc*/
        VtableStub::Method_425270((_BYTE *)*Anims); /*0x452302*/
      v5 += 68; /*0x452307*/
      ++Anims; /*0x45230a*/
    }
    while ( v5 < 1428 ); /*0x452313*/
    v7 = this->Type; /*0x452315*/
    v8 = v7->Factory[0]; /*0x45231d*/
    if ( v8 ) /*0x452325*/
    {
      LOBYTE(Type) = v7->?[1]; /*0x452327*/
      HouseClass::UpdateProduction((int)this->?, v8, (int)Type, 0); /*0x452337*/
    }
    if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x452342*/
      VoxClass::FindAndPlay((VoxClass *)&stru_818E00.Next, -1); /*0x452355*/
  }
}



// ==== 0x00452360  BuildingClass::PowerOff  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::PowerOff(BuildingClass *this)
{
  BuildingTypeClass *Type; // eax
  HouseClass *owner; // ecx
  int v4; // edx
  int v5; // ecx

  LOBYTE(Type) = this->HasPower; /*0x452363*/
  if ( (_BYTE)Type ) /*0x45236b*/
  {
    Type = this->Type; /*0x452371*/
    if ( Type->PowerDrain > 0 || Type->Powered ) /*0x452381*/
    {
      owner = this->?; /*0x45238b*/
      this->HasPower = 0; /*0x452393*/
      this->? = 1; /*0x45239a*/
      LOBYTE(owner->HouseClass_field_timer_B[2]) = 1; /*0x4523a0*/
      BYTE1(this->?->HouseClass_field_timer_B[2]) = 1; /*0x4523ac*/
      this->?->recheckTechTree = 1; /*0x4523b8*/
      BuildingClass::Deactivate(this); /*0x4523c0*/
      if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x4523cb*/
        VoxClass::FindAndPlay((VoxClass *)&stru_818E00.TrailerAnim, -1); /*0x4523de*/
      Type = this->Type; /*0x4523e3*/
      v5 = Type->Factory[0]; /*0x4523e9*/
      if ( v5 ) /*0x4523f1*/
      {
        LOBYTE(v4) = Type->?[1]; /*0x4523f3*/
        LOBYTE(Type) = HouseClass::UpdateProduction((int)this->?, v5, v4, 0); /*0x452403*/
      }
    }
  }
  return (char)Type; /*0x452408*/
}



// ==== 0x00452410  BuildingClass::EnableStuff  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::EnableStuff(BuildingClass *this)
{
  LightSourceClass *LightSource; // ecx
  int v3; // esi
  int *Anims; // edi

  LightSource = this->LightSource; /*0x452415*/
  this->StuffEnabled = 1; /*0x45241b*/
  if ( LightSource ) /*0x452424*/
    Trigger::EnableOnce((Trigger *)LightSource, 0); /*0x452428*/
  if ( this->Type->LaserFencePost ) /*0x452433*/
    BuildingClass::RepairPlacement(this, 0); /*0x452441*/
  v3 = 0; /*0x452446*/
  Anims = this->Anims; /*0x452448*/
  do /*0x452476*/
  {
    if ( this->Type->__pad_F70[v3 + 28] ) /*0x452454*/
    {
      if ( *Anims ) /*0x45245f*/
        VtableStub::Method_425270((_BYTE *)*Anims); /*0x452465*/
    }
    v3 += 68; /*0x45246a*/
    ++Anims; /*0x45246d*/
  }
  while ( v3 < 1428 ); /*0x452476*/
}



// ==== 0x00452480  BuildingClass::Deactivate  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::Deactivate(BuildingClass *this)
{
  LightSourceClass *LightSource; // ecx
  BuildingTypeClass *Type; // eax
  char CloakRadius; // cl
  int v5; // esi
  int *Anims; // ebx

  LightSource = this->LightSource; /*0x452485*/
  this->StuffEnabled = 0; /*0x45248b*/
  if ( LightSource ) /*0x452494*/
    MapClass::ScrollOnce((int)LightSource, 0); /*0x452498*/
  Type = this->Type; /*0x45249d*/
  if ( Type->CloakGenerator ) /*0x4524a3*/
  {
    CloakRadius = this->CloakRadius; /*0x4524ad*/
    this->HasCloakingData = -1; /*0x4524b3*/
    if ( !CloakRadius ) /*0x4524bc*/
      this->CloakRadius = Type->CloakRadiusInCells; /*0x4524c4*/
    this->? = 1; /*0x4524ca*/
  }
  if ( Type->? && this->? ) /*0x4524db*/
    (*((void (__thiscall **)(BuildingClass *))this->TechnoClass + 262))(this); /*0x4524e9*/
  if ( this->Type->LaserFencePost ) /*0x4524f5*/
    BuildingClass::RepairPlacement(this, 0); /*0x452503*/
  v5 = 0; /*0x452508*/
  Anims = this->Anims; /*0x45250a*/
  do /*0x452538*/
  {
    if ( this->Type->__pad_F70[v5 + 28] ) /*0x452516*/
    {
      if ( *Anims ) /*0x452521*/
        BuildingClass::SetField8((BuildingClass *)*Anims); /*0x452527*/
    }
    v5 += 68; /*0x45252c*/
    ++Anims; /*0x45252f*/
  }
  while ( v5 < 1428 ); /*0x452538*/
}



// ==== 0x00452540  BuildingClass::MakeTraversable  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::MakeTraversable(BuildingClass *this)
{
  if ( !this->Type->Gate ) /*0x45254a*/
    return 1; /*0x452558*/
  if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) != 24 /*0x45257b*/
    || (unsigned __int8)BuildingClass::CheckFlag24((BuildingClass *)this->?)
    || (unsigned __int8)Flag::CheckNone((Flag *)this->?) )
  {
    (*((void (__thiscall **)(BuildingClass *, int))this->TechnoClass + 124))(this, -1); /*0x4525be*/
    (*((void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass + 122))(this, 24, 0); /*0x4525cc*/
    (*((void (__thiscall **)(BuildingClass *))this->TechnoClass + 123))(this); /*0x4525d6*/
  }
  else
  {
    if ( !this->Type->Gate ) /*0x45258a*/
      return 1; /*0x452598*/
    if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) == 24 /*0x4525aa*/
      && (unsigned __int8)BuildingClass::CheckPowerFlags((BuildingClass *)this->?) )
    {
      return 1; /*0x4525b7*/
    }
  }
  return 0; /*0x452554*/
}



// ==== 0x004525F0  BuildingClass::IsPoweredOn  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::IsPoweredOn(BuildingClass *this)
{
  int result; // eax

  result = (int)this->Type; /*0x4525f3*/
  if ( *(_BYTE *)(result + 5815) ) /*0x4525f9*/
  {
    result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this); /*0x45260b*/
    LOBYTE(result) = result == 24 && (result = BuildingClass::CheckPowerFlags((BuildingClass *)this->?), (_BYTE)result); /*0x452625*/
  }
  else
  {
    LOBYTE(result) = 1; /*0x452603*/
  }
  return result; /*0x452605*/
}



// ==== 0x00452630  BuildingClass::CheckHealthForRepair  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CheckHealthForRepair(BuildingClass *this)
{
  int result; // eax

  result = this->?; /*0x452633*/
  if ( result ) /*0x452638*/
  {
    result = (int)this->Type; /*0x45263e*/
    if ( *(_BYTE *)(result + 5498) ) /*0x452644*/
    {
      result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 32))(this); /*0x452656*/
      if ( (_BYTE)result ) /*0x45265e*/
        LOBYTE(result) = 0; /*0x452660*/
      else
        return InfantryClass::CheckHealthDiff((TechnoClass *)this); /*0x452666*/
    }
    else
    {
      LOBYTE(result) = 0; /*0x45264e*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x45263a*/
  }
  return result; /*0x45263c*/
}



// ==== 0x00452670  BuildingClass::CanAcceptType  this=AbstractClass  sig=csp ====
int __thiscall BuildingClass::CanAcceptType(bool *this, int a2, int a3)
{
  int result; // eax

  result = a3; /*0x452670*/
  if ( a3 != *((_DWORD *)this + 135) ) /*0x45267e*/
    goto LABEL_6; /*0x45267e*/
  result = _strcmpi((char *)(a2 + 3720), (char *)(*((_DWORD *)this + 328) + 36)); /*0x452695*/
  if ( result ) /*0x45269f*/
    goto LABEL_6; /*0x45269f*/
  result = *(_DWORD *)(a2 + 5884); /*0x4526a1*/
  if ( result == -1 ) /*0x4526aa*/
  {
    result = *(this + 1794); /*0x4526c2*/
    if ( result < *(_DWORD *)(*((_DWORD *)this + 328) + 5344) ) /*0x4526cf*/
    {
      LOBYTE(result) = 1; /*0x4526d2*/
      return result; /*0x4526d5*/
    }
  }
  else if ( result <= 0 || result > 3 ) /*0x4526b3*/
  {
    goto LABEL_6; /*0x4526b3*/
  }
  if ( *(this + 1794) ) /*0x4526d8*/
  {
LABEL_6:
    LOBYTE(result) = 0; /*0x4526b5*/
    return result; /*0x4526b9*/
  }
  LOBYTE(result) = 1; /*0x4526e3*/
  return result; /*0x4526b5*/
}



// ==== 0x004526F0  BuildingClass::SelectVocOrSfx  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::SelectVocOrSfx(BuildingClass *this)
{
  char UpgradeLevel; // al
  int v3; // ebx
  int *Upgrades; // edi
  int result; // eax
  int v6; // eax
  int *v7; // esi
  bool v8; // zf
  int v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // [esp+14h] [ebp+4h]

  UpgradeLevel = this->UpgradeLevel; /*0x4526fa*/
  if ( UpgradeLevel && (v3 = 0, UpgradeLevel > 0) ) /*0x452708*/
  {
    Upgrades = this->Upgrades; /*0x45270a*/
    while ( 1 ) /*0x452710*/
    {
      if ( *Upgrades ) /*0x452710*/
      {
        result = TechnoClass::GetAudioEntry((TechnoClass *)*Upgrades, v12); /*0x452717*/
        if ( *(_DWORD *)result ) /*0x45271c*/
          break; /*0x45271c*/
      }
      ++v3; /*0x45272c*/
      ++Upgrades; /*0x45272d*/
      if ( v3 >= this->UpgradeLevel ) /*0x452732*/
        goto LABEL_7; /*0x452732*/
    }
  }
  else
  {
LABEL_7:
    if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 256))(this) ) /*0x452738*/
    {
      v6 = this->Audio8[4]; /*0x452742*/
      if ( v6 < this->Audio8[2] ) /*0x452750*/
      {
        v7 = *(int **)(this->Audio7[4] + 4 * v6); /*0x452758*/
        v8 = (unsigned __int8)Audio::IsLoud(v7 + 84) == 0; /*0x452766*/
        v9 = v7[432]; /*0x452768*/
        if ( v8 ) /*0x45276e*/
        {
          v11 = *(_DWORD *)(v9 + 3588); /*0x452792*/
          result = v9 + 3588; /*0x452798*/
          if ( v11 ) /*0x45279f*/
            return result; /*0x45279f*/
        }
        else
        {
          v10 = *(_DWORD *)(v9 + 3616); /*0x452770*/
          result = v9 + 3616; /*0x452776*/
          if ( v10 ) /*0x45277d*/
            return result; /*0x45277d*/
        }
        return (*(int (__thiscall **)(int *, _DWORD))(*v7 + 1016))(v7, 0); /*0x45278f*/
      }
    }
    return (int)TechnoClass::SelectVocOrSfx((float *)this, v12); /*0x4527b7*/
  }
  return result; /*0x45278b*/
}



// ==== 0x004527D0  BuildingClass::HasOccupantAudio  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::HasOccupantAudio(BuildingClass *this)
{
  int result; // eax
  char UpgradeLevel; // al
  int v3; // esi
  int v4; // edx
  int *Upgrades; // ecx

  result = (int)this->Type; /*0x4527d0*/
  if ( *(_BYTE *)(result + 3233) ) /*0x4527d8*/
  {
LABEL_2:
    LOBYTE(result) = 1; /*0x4527e2*/
    return result; /*0x4527e6*/
  }
  UpgradeLevel = this->UpgradeLevel; /*0x4527e7*/
  if ( UpgradeLevel ) /*0x4527ef*/
  {
    v3 = UpgradeLevel; /*0x4527f1*/
    v4 = 0; /*0x4527f4*/
    if ( UpgradeLevel > 0 ) /*0x4527f8*/
    {
      Upgrades = this->Upgrades; /*0x4527fa*/
      do /*0x452800*/
      {
        result = *Upgrades; /*0x452800*/
        if ( *Upgrades ) /*0x452800*/
        {
          if ( *(_BYTE *)(result + 3233) ) /*0x452806*/
            goto LABEL_2; /*0x45280e*/
        }
        ++v4; /*0x452810*/
        ++Upgrades; /*0x452811*/
      }
      while ( v4 < v3 ); /*0x452800*/
    }
  }
  LOBYTE(result) = 0; /*0x452818*/
  return result; /*0x4527e2*/
}



// ==== 0x00452820  Warhead::RemoveFromDamageList  this=Warhead  sig=csp ====
char __thiscall Warhead::RemoveFromDamageList(Warhead *this, int a2)
{
  Warhead *v2; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // edx

  v2 = this + 1644; /*0x452827*/
  v3 = (*(int (__thiscall **)(Warhead *, int *))(this->u32_66C + 16))(this + 1644, &a2); /*0x452834*/
  if ( v3 != -1 ) /*0x45283a*/
  {
    v4 = *(_DWORD *)&v2[16]; /*0x45283c*/
    if ( v3 < v4 ) /*0x452841*/
    {
      v5 = v4 - 1; /*0x452843*/
      for ( *(_DWORD *)&v2[16] = v5; /*0x452849*/
            v3 < *(_DWORD *)&v2[16];
            *(_DWORD *)(*(_DWORD *)&v2[4] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&v2[4] + 4 * v3) )
      {
        ++v3; /*0x45284e*/
      }
    }
  }
  v6 = *(_DWORD *)&v2[8]; /*0x45285d*/
  if ( *(_DWORD *)&v2[16] < v6 /*0x452887*/
    || ((LOBYTE(v7) = v2[13], (_BYTE)v7) || !v6)
    && (v7 = *(_DWORD *)&v2[20], v7 > 0)
    && (LOBYTE(v7) = (*(int (__thiscall **)(Warhead *, int, _DWORD))(*(_DWORD *)v2 + 8))(v2, v6 + v7, 0), (_BYTE)v7) )
  {
    v7 = *(_DWORD *)&v2[16]; /*0x452889*/
    v8 = *(_DWORD *)&v2[4]; /*0x45288c*/
    *(_DWORD *)&v2[16] = v7 + 1; /*0x452892*/
    *(_DWORD *)(v8 + 4 * v7) = a2; /*0x452899*/
  }
  return v7; /*0x45289c*/
}



// ==== 0x004528A0  ObjectClass::method_4528A0  this=ObjectClass  sig=csp ====
bool __thiscall sub_4528A0(TechnoClass *this, int a2)
{
  double v2; // st7
  int *v4; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // ebp
  _DWORD *v8; // eax
  int v9; // edi
  int v10; // edx
  int v11; // eax
  int v13; // [esp+20h] [ebp-Ch] BYREF
  int v14; // [esp+24h] [ebp-8h]
  int v15; // [esp+28h] [ebp-4h]

  v4 = (int *)(*(int (__thiscall **)(TechnoClass *, int *))(this->vtable0 + 72))(this, &v13); /*0x4528b2*/
  v5 = *v4; /*0x4528b5*/
  v6 = v4[1]; /*0x4528bb*/
  v7 = v4[2]; /*0x4528c0*/
  v8 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a2 + 72))(a2, &v13); /*0x4528c8*/
  v9 = v5 - *v8; /*0x4528d2*/
  v10 = v8[2]; /*0x4528d9*/
  v14 = v6 - v8[1]; /*0x4528dc*/
  v13 = v9; /*0x4528e6*/
  v15 = v7 - v10; /*0x4528ea*/
  Math::Sqrt((double)v9 * (double)v9 + (double)(v7 - v10) * (double)(v7 - v10) + (double)v14 * (double)v14); /*0x45290f*/
  LOWORD(v11) = Math::RoundToInt(v2); /*0x452917*/
  return v11 <= *(_DWORD *)(*((_DWORD *)this + 328) + 5900) << 8; /*0x452922*/
}



// ==== 0x00452940  CellClass::Get  this=CellClass  sig=csp ====
bool __thiscall CellClass::Get(CellClass *this, _DWORD *a2)
{
  double v2; // st7
  int *v4; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // ebp
  int *Coords; // eax
  int v9; // edi
  int v10; // edx
  int v11; // eax
  int v13; // [esp+1Ch] [ebp-Ch] BYREF
  int v14; // [esp+20h] [ebp-8h]
  int v15; // [esp+24h] [ebp-4h]

  v4 = (int *)(*(int (__thiscall **)(CellClass *, int *))(this->mapCoords[0] + 72))(this, &v13); /*0x452952*/
  v5 = *v4; /*0x452955*/
  v6 = v4[1]; /*0x45295f*/
  v7 = v4[2]; /*0x452963*/
  Coords = CellClass::GetCoords((CellClass *)a2, &v13); /*0x452966*/
  v9 = v5 - *Coords; /*0x452972*/
  v10 = Coords[2]; /*0x452979*/
  v14 = v6 - Coords[1]; /*0x45297c*/
  v13 = v9; /*0x452986*/
  v15 = v7 - v10; /*0x45298a*/
  Math::Sqrt((double)v9 * (double)v9 + (double)(v7 - v10) * (double)(v7 - v10) + (double)v14 * (double)v14); /*0x4529af*/
  LOWORD(v11) = Math::RoundToInt(v2); /*0x4529b7*/
  return v11 <= *(_DWORD *)(*((_DWORD *)this + 328) + 5900) << 8; /*0x4529c2*/
}



// ==== 0x00452A40  BuildingClass::DemolishBridgeCheck  this=BuildingClass  sig=csp ====
_DWORD *__thiscall BuildingClass::DemolishBridgeCheck(BuildingClass *this, int a2)
{
  _DWORD *result; // eax
  int v4; // esi
  _DWORD *v5; // eax
  int v6; // edi
  int v7; // ecx
  int v8; // edx
  Cell *v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // edi
  int v12; // ebp
  _DWORD *v13; // [esp+4h] [ebp-20h]
  int v14; // [esp+8h] [ebp-1Ch]
  char v15; // [esp+Ch] [ebp-18h]
  __int16 v16[2]; // [esp+10h] [ebp-14h] BYREF
  int v17; // [esp+14h] [ebp-10h] BYREF
  _BYTE v18[12]; // [esp+18h] [ebp-Ch] BYREF
  __int16 v19; // [esp+28h] [ebp+4h]
  __int16 v20; // [esp+2Ah] [ebp+6h]

  result = (_DWORD *)dword_A8E7AC; /*0x452a40*/
  if ( !dword_A8E7AC ) /*0x452a4d*/
  {
    result = &this->Type->TechnoTypeClass; /*0x452a53*/
    if ( *((_BYTE *)result + 5822) ) /*0x452a59*/
    {
      v15 = a2 == 1; /*0x452a79*/
      v4 = 0; /*0x452a89*/
      v5 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass + 18))(this, v18); /*0x452a8b*/
      v13 = &unk_818CA0; /*0x452a90*/
      v6 = *v5 / 256; /*0x452ab3*/
      v7 = v5[1] / 256; /*0x452ab6*/
      v19 = v6; /*0x452ab9*/
      v20 = v7; /*0x452abe*/
      while ( 1 ) /*0x452ad1*/
      {
        v8 = v4 & 7; /*0x452ad1*/
        LOWORD(v14) = v6 + LOWORD(g_DDrawSurfaceManager.scenario[v8 + 82]); /*0x452aed*/
        HIWORD(v14) = v7 + HIWORD(g_DDrawSurfaceManager.scenario[v8 + 82]); /*0x452af2*/
        *(_DWORD *)v16 = v14; /*0x452aff*/
        v9 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v16); /*0x452b09*/
        v10 = Cell::IsBridge(v9); /*0x452b10*/
        v11 = v10; /*0x452b15*/
        if ( v10 ) /*0x452b19*/
        {
          if ( *(_BYTE *)(v10[328] + 5823) ) /*0x452b21*/
          {
            v12 = (*(int (__thiscall **)(_DWORD *))(*v10 + 56))(v10); /*0x452b32*/
            if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 14))(this) == v12 /*0x452b5f*/
              && (v4 & 3) == (((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(v11 + 226), &v17) >> 12) + 1) >> 1)
                            & 3) )
            {
              this->LaserFenceFrame |= *v13; /*0x452b79*/
              BuildingClass::DemolishBridgeAnim(this, v4, v15); /*0x452b7f*/
            }
          }
        }
        result = v13 + 1; /*0x452b8b*/
        v4 = ((_BYTE)v4 + 2) & 7; /*0x452b8e*/
        if ( (int)++v13 >= (int)&dword_818CB0 ) /*0x452b9a*/
          break; /*0x452b9a*/
        LOWORD(v7) = v20; /*0x452aca*/
        LOWORD(v6) = v19; /*0x452aca*/
      }
    }
  }
  return result; /*0x452ba3*/
}



// ==== 0x00452BB0  BuildingClass::FindBridgeSegment  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::FindBridgeSegment(BuildingClass *this, int a2, char a3, int a4)
{
  int v4; // ebx
  BuildingTypeClass *Type; // eax
  char v7; // si
  int v8; // ebp
  _DWORD *v9; // eax
  int result; // eax
  _WORD *v11; // esi
  Cell *v12; // eax
  _DWORD *v13; // eax
  int v14; // esi
  int v15; // ebx
  int v16; // ebx
  int v17; // [esp+10h] [ebp-20h]
  int v18; // [esp+14h] [ebp-1Ch]
  int v19; // [esp+18h] [ebp-18h]
  _WORD *i; // [esp+1Ch] [ebp-14h]
  int v21; // [esp+20h] [ebp-10h] BYREF
  char v22[12]; // [esp+24h] [ebp-Ch] BYREF

  v4 = 1; /*0x452bba*/
  v17 = 1; /*0x452bc4*/
  if ( a4 >= 0 ) /*0x452bc8*/
  {
    v4 = a4; /*0x452bf3*/
  }
  else
  {
    Type = this->Type; /*0x452bca*/
    if ( !Type->LaserFencePost ) /*0x452bd0*/
      goto LABEL_7; /*0x452bd0*/
    v4 = Type->? >> 8; /*0x452be0*/
    v17 = v4; /*0x452be6*/
    if ( v4 > 1 ) /*0x452bea*/
      goto LABEL_7; /*0x452bea*/
    v4 = 1; /*0x452bec*/
  }
  v17 = v4; /*0x452bf5*/
LABEL_7:
  v7 = a2; /*0x452bf9*/
  v8 = a2 & 3; /*0x452c08*/
  v9 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 18))(this, v22); /*0x452c0b*/
  LOWORD(a4) = *v9 / 256; /*0x452c1e*/
  HIWORD(a4) = v9[1] / 256; /*0x452c32*/
  result = 0; /*0x452c3b*/
  a2 = a4; /*0x452c3d*/
  a4 = 0; /*0x452c43*/
  v19 = 0; /*0x452c47*/
  if ( v4 <= 0 ) /*0x452c4b*/
    return result; /*0x452c4b*/
  v11 = (_WORD *)(4 * (v7 & 7) + 9041544); /*0x452c54*/
  for ( i = v11; ; v11 = i ) /*0x452c5b*/
  {
    LOWORD(v18) = a2 + *v11; /*0x452c76*/
    HIWORD(v18) = HIWORD(a2) + v11[1]; /*0x452c7b*/
    a2 = v18; /*0x452c8e*/
    v12 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x452c92*/
    v13 = Cell::IsBridge(v12); /*0x452c99*/
    v14 = (int)v13; /*0x452c9e*/
    if ( !v13 ) /*0x452ca2*/
      goto LABEL_19; /*0x452ca2*/
    if ( *(_BYTE *)(v13[328] + 5822) ) /*0x452caa*/
    {
      v15 = (*(int (__thiscall **)(_DWORD *))(*v13 + 56))(v13); /*0x452cbb*/
      if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 14))(this) == v15 ) /*0x452cc6*/
        a4 = v14; /*0x452cc8*/
    }
    if ( !a3 ) /*0x452cd2*/
      break; /*0x452cd2*/
    if ( !*(_BYTE *)(*(_DWORD *)(v14 + 1312) + 5823) ) /*0x452cda*/
      break; /*0x452cda*/
    v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 56))(v14); /*0x452ceb*/
    if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 14))(this) != v16 /*0x452d15*/
      || (((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(v14 + 904), &v21) >> 12) + 1) >> 1) & 3) != v8 )
    {
      break; /*0x452d15*/
    }
    v4 = v17; /*0x452d17*/
LABEL_19:
    if ( ++v19 >= v4 ) /*0x452d26*/
      return a4; /*0x452d26*/
  }
  return a4; /*0x452d30*/
}



// ==== 0x00452D40  ObjectClass::ProcessDataBuildingClass  this=ObjectClass  sig=csp ====
int ProcessDataBuildingClass(ObjectClass *this)
{
  int result; // eax
  int i; // edi
  BuildingClass *v3; // esi

  result = stru_A8EB00.ObjectTypeClass[20]; /*0x452d40*/
  for ( i = 0; i < stru_A8EB00.ObjectTypeClass[20]; ++i ) /*0x452d4a*/
  {
    v3 = *(BuildingClass **)(stru_A8EB00.ObjectTypeClass[17] + 4 * i); /*0x452d52*/
    if ( v3 && v3->Type->LaserFencePost && !dword_A8E7AC && v3->? && !v3->? ) /*0x452d7c*/
    {
      BuildingClass::DemolishBridge(v3); /*0x452d8a*/
      BuildingClass::DemolishBridge(v3); /*0x452d93*/
      BuildingClass::DemolishBridge(v3); /*0x452d9c*/
      BuildingClass::DemolishBridge(v3); /*0x452da5*/
      BuildingClass::RepairPlacement(v3, 1); /*0x452dae*/
    }
    result = stru_A8EB00.ObjectTypeClass[20]; /*0x452db3*/
  }
  return result; /*0x452dbe*/
}



// ==== 0x00452DC0  BuildingClass::DemolishBridge  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::DemolishBridge(BuildingClass *this)
{
  int BridgeSegment; // eax
  int v3; // ebp
  char *v4; // ecx
  _DWORD *v5; // eax
  _WORD *v6; // ebx
  __int16 v7; // cx
  Cell *v8; // eax
  _DWORD *v9; // eax
  int *v10; // esi
  int v11; // ebx
  int v12; // eax
  int v13; // esi
  int v14; // eax
  _DWORD *v15; // eax
  int *v16; // esi
  Cell *v17; // eax
  _DWORD *v18; // eax
  __int16 v19[2]; // [esp+10h] [ebp-20h] BYREF
  int v20; // [esp+14h] [ebp-1Ch]
  _DWORD *v21; // [esp+18h] [ebp-18h]
  _WORD *i; // [esp+1Ch] [ebp-14h]
  unsigned int v23; // [esp+20h] [ebp-10h]
  _DWORD v24[3]; // [esp+24h] [ebp-Ch] BYREF
  int v25; // [esp+34h] [ebp+4h]
  int v26; // [esp+34h] [ebp+4h]
  int v27; // [esp+34h] [ebp+4h]

  if ( !dword_A8E7AC ) /*0x452dd0*/
  {
    if ( this->Type->LaserFencePost ) /*0x452ddc*/
    {
      BridgeSegment = BuildingClass::FindBridgeSegment(this, v25, 0, -1); /*0x452e08*/
      v21 = (_DWORD *)BridgeSegment; /*0x452e0f*/
      if ( BridgeSegment ) /*0x452e13*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)BridgeSegment + 388))(BridgeSegment) != 19 ) /*0x452e26*/
        {
          v3 = 0; /*0x452e31*/
          if ( dword_A83C78 > 0 ) /*0x452e35*/
          {
            v4 = (char *)dword_A83C6C; /*0x452e37*/
            do /*0x452e4e*/
            {
              if ( *(_BYTE *)(*(_DWORD *)v4 + 5823) ) /*0x452e3f*/
                break; /*0x452e46*/
              ++v3; /*0x452e48*/
              v4 += 4; /*0x452e49*/
            }
            while ( v3 < dword_A83C78 ); /*0x452e4e*/
          }
          if ( v3 < dword_A83C78 ) /*0x452e52*/
          {
            v5 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD *))this->TechnoClass + 18))(this, v24); /*0x452e61*/
            LOWORD(v20) = *v5 / 256; /*0x452e74*/
            HIWORD(v20) = v5[1] / 256; /*0x452e88*/
            *(_DWORD *)v19 = v20; /*0x452e93*/
            v6 = (_WORD *)(4 * (v25 & 7) + 9041544); /*0x452ea0*/
            for ( i = v6; ; v6 = i ) /*0x452ea7*/
            {
              v7 = v6[1] + v19[1]; /*0x452ebe*/
              LOWORD(v20) = v19[0] + *v6; /*0x452ec2*/
              HIWORD(v20) = v7; /*0x452ec7*/
              *(_DWORD *)v19 = v20; /*0x452eda*/
              v8 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x452ede*/
              v9 = Cell::IsBridge(v8); /*0x452ee5*/
              if ( v9 == v21 ) /*0x452eee*/
                break; /*0x452eee*/
              v10 = (int *)*((_DWORD *)dword_A83C6C + v3); /*0x452efc*/
              v11 = *v10; /*0x452f01*/
              v12 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 15))(this); /*0x452f03*/
              v13 = (*(int (__thiscall **)(int *, int))(v11 + 140))(v10, v12); /*0x452f13*/
              v24[2] = 0; /*0x452f21*/
              LOWORD(v23) = (v25 & 3) << 13; /*0x452f38*/
              v24[0] = (v19[0] << 8) + 128; /*0x452f3d*/
              v14 = *(_DWORD *)v13; /*0x452f48*/
              v24[1] = (v19[1] << 8) + 128; /*0x452f54*/
              if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD *, _DWORD))(v14 + 216))( /*0x452f68*/
                      v13,
                      v24,
                      (unsigned __int8)(((v23 >> 7) + 1) >> 1)) )
              {
                if ( v13 ) /*0x452f78*/
                  (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 32))(v13, 1); /*0x452f80*/
                BuildingClass::DemolishBridgeAnim(this, v25, 0); /*0x452f88*/
                return; /*0x452f94*/
              }
            }
            v15 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD *))this->TechnoClass + 18))(this, v24); /*0x452fa0*/
            LOWORD(v26) = *v15 / 256; /*0x452fb8*/
            HIWORD(v26) = v15[1] / 256; /*0x452fcc*/
            *(_DWORD *)v19 = v26; /*0x452fd5*/
            do /*0x453048*/
            {
              v16 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x452fe8*/
              if ( BuildingClass::FindByCellHash((BuildingClass *)v16) != -1 ) /*0x452ff4*/
                CellClass::ReduceTiberium(v16, 12); /*0x452ffa*/
              if ( v16[17] == 126 ) /*0x453002*/
                Helper_486E30((ObjectClass *)v16); /*0x453006*/
              LOWORD(v27) = *v6 + v19[0]; /*0x45301c*/
              HIWORD(v27) = v19[1] + v6[1]; /*0x453021*/
              *(_DWORD *)v19 = v27; /*0x453034*/
              v17 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x453038*/
              v18 = Cell::IsBridge(v17); /*0x45303f*/
            }
            while ( v18 != v21 ); /*0x453048*/
          }
        }
      }
    }
  }
}



// ==== 0x00453060  BuildingClass::DemolishBridgeAnim  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::DemolishBridgeAnim(BuildingClass *this, int a2, char a3)
{
  BuildingClass *v3; // ebx
  int result; // eax
  int v5; // ebp
  char v6; // si
  int v7; // edi
  _DWORD *v8; // eax
  _WORD *v9; // esi
  Cell *v10; // eax
  int v11; // esi
  int v12; // ebp
  int v13; // ebp
  int v14; // ebx
  int *v15; // eax
  char v16; // [esp+14h] [ebp-38h]
  int v17; // [esp+18h] [ebp-34h]
  int v18; // [esp+24h] [ebp-28h]
  __int64 v19; // [esp+28h] [ebp-24h]
  int v20; // [esp+28h] [ebp-24h]
  _WORD *i; // [esp+30h] [ebp-1Ch]
  int v23; // [esp+38h] [ebp-14h]
  int v24; // [esp+3Ch] [ebp-10h] BYREF
  _BYTE v25[12]; // [esp+40h] [ebp-Ch] BYREF

  v3 = this; /*0x453064*/
  result = (int)this->Type; /*0x453068*/
  if ( *(_BYTE *)(result + 5822) ) /*0x453073*/
  {
    v5 = *(int *)(result + 1464) >> 8; /*0x453087*/
    v18 = v5; /*0x45308d*/
    if ( v5 <= 1 ) /*0x453091*/
    {
      v5 = 1; /*0x453093*/
      v18 = 1; /*0x453098*/
    }
    v6 = a2; /*0x45309c*/
    v7 = a2 & 3; /*0x4530a8*/
    v23 = v7; /*0x4530ae*/
    v8 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass + 18))(this, v25); /*0x4530b2*/
    HIWORD(v19) = 0; /*0x4530b7*/
    LOWORD(v19) = *v8 / 256; /*0x4530cd*/
    *(_DWORD *)((char *)&v19 + 2) = (unsigned __int16)(v8[1] / 256); /*0x4530e1*/
    a2 = v19; /*0x4530ec*/
    v9 = (_WORD *)(4 * (v6 & 7) + 9041544); /*0x4530f9*/
    for ( i = v9; ; v9 = i ) /*0x453100*/
    {
      LOWORD(v20) = a2 + *v9; /*0x45311b*/
      HIWORD(v20) = HIWORD(a2) + v9[1]; /*0x453120*/
      a2 = v20; /*0x453133*/
      v10 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x453137*/
      result = (int)Cell::IsBridge(v10); /*0x45313e*/
      v11 = result; /*0x453143*/
      if ( result ) /*0x453147*/
      {
        LOBYTE(result) = *(_BYTE *)(*(_DWORD *)(result + 1312) + 5823); /*0x453153*/
        if ( !(_BYTE)result ) /*0x45315b*/
          return result; /*0x45315b*/
        v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 56))(v11); /*0x453168*/
        result = (*((int (__thiscall **)(BuildingClass *))v3->TechnoClass + 14))(v3); /*0x45316e*/
        if ( result != v12 ) /*0x453173*/
          return result; /*0x453173*/
        result = (int)ProgressTimer::GetValue((ProgressTimer *)(v11 + 904), &v24); /*0x453184*/
        if ( (((unsigned int)((*(_DWORD *)result >> 12) + 1) >> 1) & 3) != v7 ) /*0x453196*/
          return result; /*0x453196*/
        if ( a3 ) /*0x4531a2*/
        {
          v13 = *(_DWORD *)(v11 + 108); /*0x4531ab*/
          v14 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008); /*0x4531b1*/
          v15 = (int *)(*(int (__thiscall **)(int, _BYTE *, _DWORD, _DWORD))(*(_DWORD *)v11 + 72))(v11, v25, 0, 0); /*0x4531c2*/
          CreateSmokeEffectAt(v13, v14, *v15, v15[1], v15[2], v16, v17); /*0x4531de*/
          v17 = 0; /*0x4531ea*/
          v16 = 1; /*0x4531ec*/
          (*(void (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v11 + 364))( /*0x4531fe*/
            v11,
            v11 + 108,
            0,
            *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
            0,
            1);
          v3 = this; /*0x453204*/
          v5 = v18; /*0x453208*/
          v7 = v23; /*0x45320c*/
        }
        else
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 248))(v11); /*0x453216*/
          v5 = v18; /*0x45321c*/
        }
      }
      result = ++HIDWORD(v19); /*0x453224*/
      if ( SHIDWORD(v19) >= v5 ) /*0x45322b*/
        return result; /*0x45322b*/
    }
  }
  return result; /*0x453231*/
}



// ==== 0x00453240  BuildingClass::TraverseBridgeSegments  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::TraverseBridgeSegments(BuildingClass *this)
{
  Cell *v2; // eax
  Cell *v3; // ebp
  unsigned int v4; // esi
  void *vtable0; // eax
  BuildingClass *v6; // ebx
  unsigned int v7; // esi
  int v8; // edx
  _WORD *v9; // edi
  __int16 v10; // cx
  int i; // ecx
  Cell *v12; // eax
  BuildingClass *v13; // eax
  BuildingTypeClass *Type; // eax
  __int16 v15; // cx
  __int16 v17[2]; // [esp+10h] [ebp-10h] BYREF
  void *v18; // [esp+14h] [ebp-Ch]
  int v19; // [esp+18h] [ebp-8h]
  int v20; // [esp+1Ch] [ebp-4h] BYREF

  v2 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)this); /*0x45324f*/
  if ( v2 ) /*0x453256*/
  {
    v2 = (Cell *)Cell::IsBridge(v2); /*0x45325e*/
    v3 = v2; /*0x453263*/
    if ( v2 ) /*0x453267*/
    {
      v2 = *(Cell **)&v2[1].__pad_250[48]; /*0x45326d*/
      if ( v2[8].__pad_144[123] ) /*0x453273*/
      {
        v4 = *ProgressTimer::GetValue((ProgressTimer *)v3[1].__pad_E8, &v20); /*0x453291*/
        vtable0 = this->TechnoClass; /*0x453293*/
        v6 = 0; /*0x453299*/
        v7 = (((v4 >> 12) + 1) >> 1) & 3; /*0x45329d*/
        v18 = vtable0; /*0x4532a0*/
        v8 = v7 & 7; /*0x4532a6*/
        v9 = (_WORD *)(4 * v8 + 9041544); /*0x4532b1*/
        v10 = (_WORD)vtable0 + LOWORD(g_DDrawSurfaceManager.scenario[v8 + 82]); /*0x4532b8*/
        LOWORD(v8) = HIWORD(g_DDrawSurfaceManager.scenario[v8 + 82]); /*0x4532bb*/
        LOWORD(v19) = v10; /*0x4532bf*/
        HIWORD(v19) = HIWORD(vtable0) + v8; /*0x4532c9*/
        for ( i = v19; ; i = v19 ) /*0x4532ce*/
        {
          *(_DWORD *)v17 = i; /*0x4532d5*/
          if ( (_WORD)i == (_WORD)vtable0 ) /*0x4532d9*/
          {
            LOBYTE(v2) = BYTE2(v18); /*0x4532db*/
            if ( v17[1] == HIWORD(v18) ) /*0x4532e5*/
              break; /*0x4532e5*/
          }
          v12 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v17); /*0x4532f1*/
          v13 = (BuildingClass *)Cell::IsBridge(v12); /*0x4532f8*/
          v6 = v13; /*0x4532fd*/
          if ( !v13 ) /*0x453301*/
            goto LABEL_13; /*0x453301*/
          Type = v13->Type; /*0x453303*/
          if ( Type->LaserFencePost ) /*0x453309*/
          {
            LOBYTE(v2) = BuildingClass::DemolishBridgeAnim(v6, v7 | 4, 0); /*0x45334c*/
            break; /*0x45334c*/
          }
          if ( !Type->LaserFence ) /*0x45331b*/
            goto LABEL_13; /*0x45331b*/
          LOWORD(vtable0) = v17[0]; /*0x45331d*/
          v15 = v9[1]; /*0x453324*/
          LOWORD(v19) = v17[0] + *v9; /*0x453330*/
          v18 = *(void **)v17; /*0x453335*/
          HIWORD(v19) = v17[1] + v15; /*0x453339*/
        }
        if ( v6 ) /*0x453353*/
          return (char)v2; /*0x453353*/
LABEL_13:
        LOBYTE(v2) = (*(char (__thiscall **)(Cell *))(v3->Cell_field_0x0 + 248))(v3); /*0x453355*/
      }
    }
  }
  return (char)v2; /*0x453360*/
}



// ==== 0x004533A0  BuildingClass::RepairPlacement  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::RepairPlacement(BuildingClass *this, char a2)
{
  BuildingClass *v2; // ebx
  int result; // eax
  _DWORD *v4; // eax
  char v5; // si
  int v6; // kr00_4
  int v7; // edx
  __int16 v8; // di
  __int16 v9; // cx
  Cell *v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // edi
  int v13; // esi
  int v14; // ebp
  _BYTE *BridgeSegment; // esi
  int v16; // ebx
  int v17; // esi
  _DWORD *Value; // eax
  _DWORD *v19; // esi
  int v20; // eax
  _DWORD *v21; // ebp
  __int16 v22; // dx
  __int16 v23; // ax
  Cell *v24; // eax
  _DWORD *v25; // eax
  bool v26; // zf
  bool v27; // [esp+6h] [ebp-4Eh]
  char v28; // [esp+7h] [ebp-4Dh]
  int v29; // [esp+8h] [ebp-4Ch]
  __int16 v30[2]; // [esp+Ch] [ebp-48h] BYREF
  int v31; // [esp+10h] [ebp-44h]
  int v32; // [esp+14h] [ebp-40h]
  int v33; // [esp+18h] [ebp-3Ch]
  int v34; // [esp+1Ch] [ebp-38h]
  BuildingClass *v35; // [esp+20h] [ebp-34h]
  int v36; // [esp+24h] [ebp-30h]
  int v37; // [esp+28h] [ebp-2Ch]
  int v38; // [esp+2Ch] [ebp-28h]
  _DWORD *v39; // [esp+30h] [ebp-24h]
  _DWORD *v40; // [esp+34h] [ebp-20h]
  int v41; // [esp+38h] [ebp-1Ch]
  _WORD *v42; // [esp+3Ch] [ebp-18h]
  int v43; // [esp+40h] [ebp-14h] BYREF
  int v44; // [esp+44h] [ebp-10h] BYREF
  char v45[12]; // [esp+48h] [ebp-Ch] BYREF

  v2 = this; /*0x4533a4*/
  v35 = this; /*0x4533a6*/
  result = (int)this->Type; /*0x4533aa*/
  if ( *(_BYTE *)(result + 5822) && this->? && !this->? ) /*0x4533cc*/
  {
    v37 = *(int *)(result + 1464) >> 8; /*0x4533e6*/
    if ( v37 <= 1 ) /*0x4533ea*/
      v37 = 1; /*0x4533ec*/
    v27 = 0; /*0x4533f8*/
    if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 212))(this) /*0x45341e*/
      && v2->StuffEnabled
      && (*((int (__thiscall **)(BuildingClass *))v2->TechnoClass + 97))(v2) != 19 )
    {
      v27 = (*((int (__thiscall **)(BuildingClass *))v2->TechnoClass + 97))(v2) != 18; /*0x45342f*/
    }
    v32 = 0; /*0x453437*/
    v41 = 4; /*0x45343f*/
    do /*0x453450*/
    {
      v4 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, char *))v2->TechnoClass + 18))(v2, v45); /*0x453450*/
      v5 = v32; /*0x453465*/
      v6 = v4[1]; /*0x453470*/
      v7 = v32 & 7; /*0x453474*/
      v8 = *v4 / 256 + LOWORD(g_DDrawSurfaceManager.scenario[v7 + 82]); /*0x453489*/
      v42 = (_WORD *)(4 * v7 + 9041544); /*0x45348c*/
      v9 = HIWORD(g_DDrawSurfaceManager.scenario[v7 + 82]); /*0x453490*/
      LOWORD(v36) = v8; /*0x453494*/
      HIWORD(v36) = v6 / 256 + v9; /*0x4534a3*/
      *(_DWORD *)v30 = v36; /*0x4534b2*/
      v10 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v30); /*0x4534b6*/
      v11 = Cell::IsBridge(v10); /*0x4534bd*/
      v12 = v11; /*0x4534c2*/
      v13 = v5 & 3; /*0x4534c4*/
      v34 = v13; /*0x4534c9*/
      if ( v11 ) /*0x4534cd*/
      {
        if ( *(_BYTE *)(v11[328] + 5823) ) /*0x4534d9*/
        {
          v14 = (*(int (__thiscall **)(_DWORD *))(*v11 + 56))(v11); /*0x4534ee*/
          if ( (*((int (__thiscall **)(BuildingClass *))v2->TechnoClass + 14))(v2) == v14 /*0x45351c*/
            && (((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(v12 + 226), &v43) >> 12) + 1) >> 1) & 3) == v13 )
          {
            v40 = v12; /*0x453526*/
            v39 = v12; /*0x45352c*/
            if ( a2 ) /*0x453530*/
              goto LABEL_20; /*0x453530*/
            if ( v27 ) /*0x453538*/
            {
              if ( (int)v12[390] >= 8 ) /*0x453547*/
                goto LABEL_20; /*0x453547*/
            }
            else if ( (int)v12[390] < 8 ) /*0x453556*/
            {
LABEL_20:
              BridgeSegment = 0; /*0x453561*/
              if ( v27 ) /*0x453569*/
                BridgeSegment = (_BYTE *)BuildingClass::FindBridgeSegment(v2, v32, 1, -1); /*0x45357b*/
              v16 = 12; /*0x453581*/
              v29 = 12; /*0x453589*/
              v31 = 12; /*0x45358d*/
              if ( v34 == 2 ) /*0x453591*/
              {
                v16 = 8; /*0x453593*/
                v29 = 8; /*0x453595*/
                v31 = 8; /*0x453599*/
              }
              v28 = 0; /*0x4535a1*/
              if ( v27 /*0x4535f4*/
                && BridgeSegment
                && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)BridgeSegment + 848))(BridgeSegment)
                && BridgeSegment[1770]
                && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)BridgeSegment + 388))(BridgeSegment) != 19
                && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)BridgeSegment + 388))(BridgeSegment) != 18 )
              {
                v28 = 1; /*0x4535fa*/
                switch ( v32 ) /*0x453604*/
                {
                  case 0: /*0x453604*/
                    v16 = 5; /*0x45360b*/
                    v29 = 4; /*0x453610*/
                    v31 = 6; /*0x453618*/
                    break; /*0x453620*/
                  case 2: /*0x453604*/
                    v16 = 1; /*0x453639*/
                    v29 = 0; /*0x45363e*/
                    v31 = 2; /*0x453642*/
                    break; /*0x45364a*/
                  case 4: /*0x453604*/
                    v16 = 6; /*0x453622*/
                    v29 = 4; /*0x453627*/
                    v31 = 5; /*0x45362f*/
                    break; /*0x453637*/
                  case 6: /*0x453604*/
                    v16 = 2; /*0x45364c*/
                    v29 = 0; /*0x453651*/
                    v31 = 1; /*0x453655*/
                    break; /*0x453655*/
                  default:
                    break;
                }
              }
              v33 = 0; /*0x45365d*/
              do /*0x4537a8*/
              {
                if ( v33 >= v37 ) /*0x45366f*/
                  break; /*0x45366f*/
                if ( !*(_BYTE *)(v12[328] + 5823) ) /*0x45367b*/
                  break; /*0x45367b*/
                v17 = (*(int (__thiscall **)(_DWORD *))(*v12 + 56))(v12); /*0x453694*/
                if ( (*((int (__thiscall **)(BuildingClass *))v35->TechnoClass + 14))(v35) != v17 ) /*0x45369d*/
                  break; /*0x45369d*/
                Value = ProgressTimer::GetValue((ProgressTimer *)(v12 + 226), &v44); /*0x4536ae*/
                if ( (((unsigned int)((*Value >> 12) + 1) >> 1) & 3) != v34 ) /*0x4536c4*/
                  break; /*0x4536c4*/
                v39 = v12; /*0x4536ce*/
                if ( v12 == v40 ) /*0x4536d4*/
                  v12[390] = v16; /*0x4536d6*/
                else
                  v12[390] = v29; /*0x4536e2*/
                *((_BYTE *)v12 + 128) = 1; /*0x4536ec*/
                if ( v28 ) /*0x4536f5*/
                {
                  v19 = (_DWORD *)*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v30) + 57); /*0x453706*/
                  while ( v19 ) /*0x45370e*/
                  {
                    v20 = (*(int (__thiscall **)(_DWORD *))(*v19 + 44))(v19); /*0x453714*/
                    if ( v20 > 0 && (v20 <= 2 || v20 == 15) ) /*0x453723*/
                    {
                      v21 = (_DWORD *)v19[12]; /*0x453728*/
                      if ( (int)v19[27] > 0 ) /*0x453730*/
                        (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD, _DWORD, _DWORD *, int, int, _DWORD))(*v19 + 364))( /*0x45374d*/
                          v19,
                          v19 + 27,
                          0,
                          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
                          v12,
                          1,
                          1,
                          0);
                      v19 = v21; /*0x453753*/
                    }
                    else
                    {
                      v19 = (_DWORD *)v19[12]; /*0x453757*/
                    }
                  }
                }
                v22 = v30[0] + *v42; /*0x45376e*/
                v23 = v30[1] + v42[1]; /*0x453773*/
                ++v33; /*0x453778*/
                LOWORD(v38) = v22; /*0x45377c*/
                HIWORD(v38) = v23; /*0x453781*/
                *(_DWORD *)v30 = v38; /*0x45378e*/
                v24 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v30); /*0x453798*/
                v12 = Cell::IsBridge(v24); /*0x4537a4*/
              }
              while ( v12 ); /*0x4537a8*/
              if ( v28 ) /*0x4537b4*/
              {
                v25 = v39; /*0x4537b6*/
                if ( v39 ) /*0x4537bc*/
                {
                  if ( v40 == v39 ) /*0x4537c2*/
                  {
                    if ( v34 == 2 ) /*0x4537c9*/
                      v39[390] = 3; /*0x4537cb*/
                    else
                      v39[390] = 7; /*0x4537d7*/
                  }
                  else
                  {
                    v39[390] = v31; /*0x4537e7*/
                  }
                  *((_BYTE *)v25 + 128) = 1; /*0x4537ed*/
                }
              }
              v2 = v35; /*0x4537f4*/
            }
          }
        }
      }
      result = v41 - 1; /*0x4537f8*/
      v26 = v41 == 1; /*0x453806*/
      v32 = ((_BYTE)v32 + 2) & 7; /*0x453807*/
      --v41; /*0x45380b*/
    }
    while ( !v26 ); /*0x453450*/
  }
  return result; /*0x453818*/
}



// ==== 0x00453840  BuildingClass::RenderExitPosition  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::RenderExitPosition(BuildingClass *this)
{
  int *v2; // eax
  int v3; // edi
  int v4; // ebx
  int *v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  BuildingTypeClass *Type; // ecx
  int *v11; // eax
  int v12; // edi
  int v13; // ebx
  int *v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int *v18; // eax
  int v19; // edi
  int v20; // ebx
  int *v21; // eax
  int v22; // esi
  int v23; // ecx
  _DWORD *v24; // ecx
  int *v25; // eax
  int v26; // edi
  BuildingTypeClass *v27; // esi
  int v28; // ebx
  int v29; // ebp
  int v30; // ecx
  _DWORD *v31; // eax
  int *PrimaryFirePixelOffset; // [esp-4h] [ebp-28h]
  int *v33; // [esp+0h] [ebp-24h]
  int v34[2]; // [esp+10h] [ebp-14h] BYREF
  int v35[3]; // [esp+18h] [ebp-Ch] BYREF
  _DWORD *cell; // [esp+28h] [ebp+4h]
  int v37; // [esp+2Ch] [ebp+8h]

  if ( this->Type->CanBeOccupied && (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 258))(this) > 0 ) /*0x453865*/
  {
    v2 = (int *)World::ToScreen(v34, &this->Type->__pad_1584[8 * this->Audio8[4] + 4], v33); /*0x453886*/
    v3 = *v2; /*0x45388b*/
    v4 = v2[1]; /*0x45388d*/
    v5 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 43))(this, v35); /*0x453899*/
    v6 = *v5; /*0x45389f*/
    v7 = v5[1]; /*0x4538a5*/
    v8 = v5[2]; /*0x4538a8*/
    *cell = v3 + v6; /*0x4538b1*/
    cell[1] = v4 + v7; /*0x4538b3*/
    cell[2] = v8; /*0x4538b6*/
    return (int)cell; /*0x4538b9*/
  }
  else
  {
    Type = this->Type; /*0x4538c5*/
    if ( Type->PrimaryFirePixelOffset[0] == 0xFFFF && Type->PrimaryFirePixelOffset[1] == 0xFFFF ) /*0x4538e6*/
    {
      if ( Type->BarrelAnimIsVoxel ) /*0x4539a1*/
      {
        v24 = BuildingClass::CalcBarrelFlashPosition(this, v35, v37, 1); /*0x4539be*/
        *cell = *v24; /*0x4539c8*/
        cell[1] = v24[1]; /*0x4539cd*/
        cell[2] = v24[2]; /*0x4539d3*/
        return (int)cell; /*0x4539c0*/
      }
      else
      {
        v25 = TechnoClass::ComputeTransform((TechnoClass *)this, v35, v37, 0, 0, 0); /*0x4539ff*/
        v26 = *v25; /*0x453a04*/
        v27 = this->Type; /*0x453a06*/
        v28 = v25[1]; /*0x453a0c*/
        v29 = v25[2]; /*0x453a0f*/
        if ( v27->TurretAnimIsVoxel ) /*0x453a12*/
        {
          v30 = *(_DWORD *)&v27->__pad_F70[624]; /*0x453a22*/
          v34[1] = *(_DWORD *)&v27->__pad_F70[628]; /*0x453a28*/
          v34[0] = v30; /*0x453a34*/
          v31 = (_DWORD *)World::ToScreen(v35, v34, v33); /*0x453a40*/
          v26 += *v31; /*0x453a4a*/
          v28 += v31[1]; /*0x453a4c*/
        }
        *cell = v26; /*0x453a54*/
        cell[1] = v28; /*0x453a58*/
        cell[2] = v29; /*0x453a5b*/
        return (int)cell; /*0x453a4e*/
      }
    }
    else
    {
      PrimaryFirePixelOffset = Type->PrimaryFirePixelOffset; /*0x4538f2*/
      if ( Type->__pad_1714[80] ) /*0x4538ec*/
      {
        v11 = (int *)World::ToScreen(v34, PrimaryFirePixelOffset, v33); /*0x453902*/
        v12 = *v11; /*0x453907*/
        v13 = v11[1]; /*0x453909*/
        v14 = TechnoClass::ComputeTransform((TechnoClass *)this, v35, v37, 0, 0, 0); /*0x45392c*/
        v15 = *v14; /*0x453931*/
        v16 = v14[1]; /*0x453937*/
        v17 = v14[2]; /*0x45393a*/
        *cell = v12 + v15; /*0x453943*/
        cell[1] = v13 + v16; /*0x453945*/
      }
      else
      {
        v18 = (int *)World::ToScreen(v34, PrimaryFirePixelOffset, v33); /*0x453962*/
        v19 = *v18; /*0x453967*/
        v20 = v18[1]; /*0x453969*/
        v21 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 43))(this, v35); /*0x453975*/
        v22 = *v21; /*0x45397b*/
        v23 = v21[1]; /*0x453981*/
        v17 = v21[2]; /*0x453984*/
        *cell = v22 + v19; /*0x45398d*/
        cell[1] = v20 + v23; /*0x45398f*/
      }
      cell[2] = v17; /*0x453948*/
      return (int)cell; /*0x45394b*/
    }
  }
}



// ==== 0x00453A70  TechnoClass::GetTurretScreenPos  this=BuildingClass  sig=csp ====
int __thiscall TechnoClass::GetTurretScreenPos(TechnoClass *this)
{
  int *v1; // ebp
  int *v3; // eax
  int v4; // edi
  int v5; // ebx
  int (__thiscall **vtable0)(TechnoClass *, int *); // edx
  int *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v12; // ecx
  int *v13; // eax
  _DWORD *v14; // ecx
  int *TurretOffset; // eax
  int v16; // edi
  int v17; // esi
  int v18; // ebx
  int v19; // ebp
  int v20; // ecx
  _DWORD *v21; // eax
  int *v22; // [esp-4h] [ebp-24h]
  int *v23; // [esp+0h] [ebp-20h]
  int v24[2]; // [esp+Ch] [ebp-14h] BYREF
  int v25[3]; // [esp+14h] [ebp-Ch] BYREF
  _DWORD *v26; // [esp+24h] [ebp+4h]
  int v27; // [esp+28h] [ebp+8h]

  if ( *(_BYTE *)(this->gattlingValue + 5499) /*0x453a94*/
    && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 258))(this) > 0 )
  {
    v3 = (int *)World::ToScreen(v24, (_DWORD *)(this->gattlingValue + 8 * this->q1A7 + 5512), v23); /*0x453ab5*/
    v4 = *v3; /*0x453aba*/
    v5 = v3[1]; /*0x453abc*/
    vtable0 = (int (__thiscall **)(TechnoClass *, int *))this->RadioClass; /*0x453abf*/
LABEL_4:
    v7 = (int *)vtable0[43](this, v25); /*0x453ac5*/
    v8 = *v7; /*0x453ace*/
    v9 = v7[1]; /*0x453ad4*/
    v10 = v7[2]; /*0x453ad7*/
    *v26 = v4 + v8; /*0x453ae0*/
    v26[1] = v5 + v9; /*0x453ae2*/
    v26[2] = v10; /*0x453ae5*/
    return (int)v26; /*0x453af0*/
  }
  v12 = this->gattlingValue; /*0x453af3*/
  if ( *(_DWORD *)(v12 + 3652) != 0xFFFF || *(_DWORD *)(v12 + 3656) != 0xFFFF ) /*0x453b14*/
  {
    v13 = (int *)World::ToScreen(v24, (_DWORD *)(v12 + 3652), v23); /*0x453b22*/
    v4 = *v13; /*0x453b27*/
    v5 = v13[1]; /*0x453b29*/
    vtable0 = (int (__thiscall **)(TechnoClass *, int *))this->RadioClass; /*0x453b2c*/
    goto LABEL_4; /*0x453b32*/
  }
  if ( *(_BYTE *)(v12 + 5830) ) /*0x453b34*/
  {
    v14 = BuildingClass::CalcBarrelFlashPosition((BuildingClass *)this, v25, v27, 0); /*0x453b51*/
    *v26 = *v14; /*0x453b5c*/
    v26[1] = v14[1]; /*0x453b61*/
    v26[2] = v14[2]; /*0x453b69*/
    return (int)v26; /*0x453b53*/
  }
  else
  {
    v22 = v1; /*0x453b76*/
    TurretOffset = TechnoClass::GetTurretOffset(this, v25, v27); /*0x453b7f*/
    v16 = *TurretOffset; /*0x453b84*/
    v17 = this->gattlingValue; /*0x453b86*/
    v18 = TurretOffset[1]; /*0x453b8c*/
    v19 = TurretOffset[2]; /*0x453b8f*/
    if ( *(_BYTE *)(v17 + 5829) ) /*0x453b92*/
    {
      v20 = *(_DWORD *)(v17 + 4576); /*0x453ba2*/
      v24[1] = *(_DWORD *)(v17 + 4580); /*0x453ba8*/
      v24[0] = v20; /*0x453bb4*/
      v21 = (_DWORD *)World::ToScreen(v25, v24, v22); /*0x453bc0*/
      v16 += *v21; /*0x453bca*/
      v18 += v21[1]; /*0x453bcc*/
    }
    *v26 = v16; /*0x453bd4*/
    v26[1] = v18; /*0x453bd6*/
    v26[2] = v19; /*0x453bd9*/
    return (int)v26; /*0x453bce*/
  }
}



// ==== 0x00453BF0  BuildingClass::CalcBarrelFlashPosition  this=BuildingClass  sig=csp ====
_DWORD *__thiscall BuildingClass::CalcBarrelFlashPosition(BuildingClass *this, _DWORD *a2, int a3, char a4)
{
  int v5; // eax
  int currentBurstIndex; // ecx
  int v7; // eax
  BuildingTypeClass *Type; // eax
  double v9; // st7
  float *v10; // eax
  float *v11; // eax
  float v12; // edx
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  int v16; // ebp
  float v17; // eax
  int v18; // edx
  int v19; // kr00_4
  _DWORD *v20; // eax
  BuildingTypeClass *v21; // esi
  int v22; // ecx
  int v23; // ebp
  int v24; // edx
  float v25; // edi
  int v26; // ebx
  _DWORD *v27; // eax
  int v28; // edx
  int *v30; // [esp+0h] [ebp-6Ch]
  _DWORD v31[2]; // [esp+10h] [ebp-5Ch] BYREF
  int v32; // [esp+18h] [ebp-54h] BYREF
  float v33; // [esp+1Ch] [ebp-50h]
  float v34; // [esp+20h] [ebp-4Ch]
  float v35[3]; // [esp+24h] [ebp-48h] BYREF
  float v36[3]; // [esp+30h] [ebp-3Ch] BYREF
  float v37[12]; // [esp+3Ch] [ebp-30h] BYREF
  int v38; // [esp+78h] [ebp+Ch]

  v5 = *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, int))this->TechnoClass + 254))(this, a3); /*0x453c0c*/
  if ( a4 ) /*0x453c10*/
  {
    currentBurstIndex = this->?; /*0x453c12*/
    if ( currentBurstIndex ) /*0x453c1a*/
      v7 = currentBurstIndex - 1; /*0x453c25*/
    else
      v7 = *(_DWORD *)(v5 + 156) - 1; /*0x453c22*/
  }
  else
  {
    v7 = this->?; /*0x453c2a*/
  }
  if ( v7 ) /*0x453c32*/
  {
    if ( v7 == 1 ) /*0x453c49*/
      v38 = -*(_DWORD *)&this->Type->__pad_1714[68]; /*0x453c59*/
    else
      v38 = 0; /*0x453c5f*/
  }
  else
  {
    v38 = *(_DWORD *)&this->Type->__pad_1714[68]; /*0x453c40*/
  }
  Type = this->Type; /*0x453c67*/
  v9 = (double)*(int *)&Type->__pad_1714[72]; /*0x453c71*/
  v35[0] = (float)*(int *)&Type->__pad_1714[64]; /*0x453c83*/
  v35[1] = (float)v38; /*0x453c90*/
  v35[2] = v9; /*0x453c94*/
  v10 = BuildingClass::BuildTurretTransform((int)this, v37); /*0x453c98*/
  v11 = TransformMatrix3x4Point(v36, v10, v35); /*0x453ca3*/
  v32 = *(int *)v11; /*0x453caa*/
  v12 = v11[2]; /*0x453cb5*/
  v33 = v11[1]; /*0x453cb8*/
  v34 = v12; /*0x453cbc*/
  LOWORD(v13) = Math::RoundToInt(*(float *)&v32); /*0x453cc0*/
  v14 = v13; /*0x453ccb*/
  LOWORD(v15) = Math::RoundToInt(-v33); /*0x453ccd*/
  v16 = v15; /*0x453cd6*/
  v19 = Math::RoundToInt(v34); /*0x453cd8*/
  LOWORD(v18) = HIWORD(v19); /*0x453cd8*/
  LOWORD(v17) = v19; /*0x453cd8*/
  v34 = v17; /*0x453ce1*/
  v20 = (_DWORD *)(*((int (__fastcall **)(BuildingClass *, int, float *))this->TechnoClass + 43))(this, v18, v36); /*0x453cea*/
  v21 = this->Type; /*0x453cfc*/
  v22 = v16 + v20[1]; /*0x453d04*/
  v23 = LODWORD(v34) + v20[2]; /*0x453d06*/
  v24 = *(_DWORD *)&v21->__pad_F70[624]; /*0x453d0e*/
  LODWORD(v25) = v14 + *v20; /*0x453d14*/
  v31[1] = *(_DWORD *)&v21->__pad_F70[628]; /*0x453d16*/
  v26 = v22; /*0x453d1a*/
  v36[0] = v25; /*0x453d2c*/
  v31[0] = v24; /*0x453d30*/
  v27 = (_DWORD *)World::ToScreen(&v32, v31, v30); /*0x453d34*/
  v28 = v27[1]; /*0x453d3b*/
  *a2 = LODWORD(v25) + *v27; /*0x453d4a*/
  a2[1] = v28 + v26; /*0x453d4c*/
  a2[2] = v23; /*0x453d4f*/
  return a2; /*0x453d48*/
}



// ==== 0x00453D60  BuildingClass::MarkCellOccupied  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::MarkCellOccupied(#377 *this)
{
  _DWORD *v1; // ecx
  _DWORD *v2; // eax
  int v3; // ecx
  int result; // eax
  _DWORD *v5; // [esp+4h] [ebp+4h] BYREF

  v1 = v5; /*0x453d60*/
  LOWORD(v5) = *v5 / 256; /*0x453d72*/
  HIWORD(v5) = v1[1] / 256; /*0x453d8b*/
  v2 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v5); /*0x453d9d*/
  v3 = v2[73]; /*0x453da2*/
  result = (int)(v2 + 73); /*0x453da8*/
  LOBYTE(v3) = v3 | 0x80; /*0x453dad*/
  *(_DWORD *)result = v3; /*0x453db0*/
  return result; /*0x453db2*/
}



// ==== 0x00453DC0  BuildingClass::ClearCellOccupied  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ClearCellOccupied(#377 *this)
{
  _DWORD *v1; // ecx
  _DWORD *v2; // eax
  int v3; // ecx
  int result; // eax
  _DWORD *v5; // [esp+4h] [ebp+4h] BYREF

  v1 = v5; /*0x453dc0*/
  LOWORD(v5) = *v5 / 256; /*0x453dd2*/
  HIWORD(v5) = v1[1] / 256; /*0x453deb*/
  v2 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v5); /*0x453dfd*/
  v3 = v2[73]; /*0x453e02*/
  result = (int)(v2 + 73); /*0x453e08*/
  LOBYTE(v3) = v3 & 0x7F; /*0x453e0d*/
  *(_DWORD *)result = v3; /*0x453e10*/
  return result; /*0x453e12*/
}



// ==== 0x00453E20  BuildingClass::LoadFromStream  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::LoadFromStream(BuildingClass *this)
{
  BuildingClass *v1; // edi
  void **p_vtable1; // esi
  int v3; // eax
  int v4; // ebx
  signed int v5; // eax
  int v6; // ecx
  char *i; // eax
  _DWORD *v8; // eax
  int v9; // ebp
  int result; // eax
  int v11; // esi
  int vtable2; // eax
  int v13; // eax
  int FiringOccupantIndex; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // edx
  int v18; // esi
  int v19; // eax
  int v20; // ebx
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  int v24; // edx
  int v25; // esi
  int *Anims; // esi
  int v27; // ebp
  int *Upgrades; // esi
  int v29; // ebp
  int *DamageFireAnims; // esi
  int v31; // ebp
  int v32; // [esp+58h] [ebp-4h]
  BuildingClass *v33; // [esp+60h] [ebp+4h] BYREF
  int v34; // [esp+64h] [ebp+8h] BYREF

  v1 = v33; /*0x453e25*/
  p_vtable1 = &v33->?; /*0x453e2c*/
  v33 = (BuildingClass *)(*((int (__stdcall **)(void **))v33->? + 4))(&v33->?); /*0x453e3d*/
  v3 = BuildingTypeClass::Dequeue(&g_BuildingLoadQueue_Array, (int *)&v33); /*0x453e41*/
  v4 = 0; /*0x453e46*/
  if ( v3 ) /*0x453e4a*/
  {
    v5 = (signed int)(v3 - (unsigned int)g_BuildingLoadQueue_Array.TechnoTypeClass) >> 3; /*0x453e52*/
    if ( v5 != -1 ) /*0x453e58*/
    {
      v6 = v5 + 1; /*0x453e5a*/
      for ( i = (char *)g_BuildingLoadQueue_Array.?; /*0x453e64*/
            v6 < (int)g_BuildingLoadQueue_Array.?;
            i = (char *)g_BuildingLoadQueue_Array.? )
      {
        v8 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * v6++; /*0x453e6c*/
        *(v8 - 2) = *v8; /*0x453e72*/
        *(v8 - 1) = v8[1]; /*0x453e78*/
      }
      g_BuildingLoadQueue_Array.? = i - 1; /*0x453e8d*/
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = 0; /*0x453e92*/
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = 0; /*0x453ea3*/
      g_BuildingLoadQueue_Array.? = 0; /*0x453ea7*/
    }
  }
  v9 = v34; /*0x453ead*/
  result = BuildingClass::AllocAndCtor((int)v1, v34); /*0x453eb3*/
  v32 = result; /*0x453eba*/
  if ( result >= 0 ) /*0x453ebe*/
  {
    if ( v1 ) /*0x453ec6*/
      BuildingClass::ctor(v1, (int)&v33); /*0x453ecf*/
    v11 = (*((int (__stdcall **)(void **))*p_vtable1 + 4))(p_vtable1); /*0x453ee0*/
    vtable2 = (int)g_BuildingLoadQueue_Array.?; /*0x453ee2*/
    if ( (int)g_BuildingLoadQueue_Array.? + 1 <= (int)g_BuildingLoadQueue_Array.? ) /*0x453eea*/
      goto LABEL_13; /*0x453eea*/
    if ( !g_BuildingLoadQueue_Array.? ) /*0x453eee*/
      vtable2 = 10; /*0x453ef0*/
    if ( BuildingTypeClass::Enqueue((int)&g_BuildingLoadQueue_Array, vtable2) ) /*0x453efb*/
    {
LABEL_13:
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = v11; /*0x453f0f*/
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = v1; /*0x453f1e*/
      LOBYTE(g_BuildingLoadQueue_Array.?) = 0; /*0x453f28*/
      ++g_BuildingLoadQueue_Array.?; /*0x453f2f*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v1->Type); /*0x453f40*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v1->Factory); /*0x453f51*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v1->C4AppliedBy); /*0x453f62*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v1->FirestormAnim); /*0x453f73*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v1->PsiWarnAnim); /*0x453f84*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v1->Spotlight); /*0x453f95*/
    AudioController::Init((AudioController *)&v1->WasOnline); /*0x453fa0*/
    AudioController::Init((AudioController *)v1->Audio8_2); /*0x453fab*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v1->SecretProduction); /*0x453fbc*/
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v9 + 12))(v9, &v34, 4, 0); /*0x453fcd*/
    if ( result >= 0 ) /*0x453fd2*/
    {
      v13 = v34; /*0x453fd8*/
      if ( v34 <= 0 ) /*0x453fde*/
      {
LABEL_24:
        v18 = 0; /*0x45404c*/
        if ( v13 > 0 ) /*0x454050*/
        {
          do /*0x45406b*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1->Occupants[0] + 4 * v18++)); /*0x454061*/
          while ( v18 < v34 ); /*0x45406b*/
        }
        result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v9 + 12))(v9, &v34, 4, 0); /*0x45407a*/
        if ( result >= 0 ) /*0x45407f*/
        {
          v19 = v34; /*0x454085*/
          v20 = 0; /*0x454089*/
          if ( v34 <= 0 ) /*0x45408d*/
          {
LABEL_36:
            v25 = 0; /*0x4540fb*/
            if ( v19 > 0 ) /*0x4540ff*/
            {
              do /*0x45411a*/
                ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1->Audio7[4] + 4 * v25++)); /*0x454110*/
              while ( v25 < v34 ); /*0x45411a*/
            }
            Anims = v1->Anims; /*0x45411c*/
            v27 = 21; /*0x454122*/
            do /*0x454136*/
            {
              ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, Anims++); /*0x45412d*/
              --v27; /*0x454135*/
            }
            while ( v27 ); /*0x454136*/
            Upgrades = v1->Upgrades; /*0x454138*/
            v29 = 3; /*0x45413e*/
            do /*0x454152*/
            {
              ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, Upgrades++); /*0x454149*/
              --v29; /*0x454151*/
            }
            while ( v29 ); /*0x454152*/
            DamageFireAnims = v1->DamageFireAnims; /*0x454154*/
            v31 = 8; /*0x45415a*/
            do /*0x45416e*/
            {
              ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, DamageFireAnims++); /*0x454165*/
              --v31; /*0x45416d*/
            }
            while ( v31 ); /*0x45416e*/
            v1->LightSource = 0; /*0x454174*/
            return v32; /*0x454170*/
          }
          else
          {
            while ( 1 ) /*0x45409c*/
            {
              result = (*(int (__stdcall **)(int, BuildingClass **, int, _DWORD))(*(_DWORD *)v9 + 12))(v9, &v33, 4, 0); /*0x45409c*/
              if ( result < 0 ) /*0x4540a1*/
                break; /*0x4540a1*/
              v21 = v1->Audio8[0]; /*0x4540a7*/
              if ( v1->Audio8[2] < v21 /*0x4540d8*/
                || (BYTE1(v1->Audio8[1]) || !v21)
                && (v22 = v1->Audio8[3], v22 > 0)
                && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(v1->Audio7[3] + 8))(
                     &v1->Audio7[3],
                     v21 + v22,
                     0) )
              {
                v23 = v1->Audio8[2]; /*0x4540df*/
                v24 = v1->Audio7[4]; /*0x4540e2*/
                v1->Audio8[2] = v23 + 1; /*0x4540e8*/
                *(_DWORD *)(v24 + 4 * v23) = v33; /*0x4540ef*/
              }
              v19 = v34; /*0x4540f2*/
              if ( ++v20 >= v34 ) /*0x4540f9*/
                goto LABEL_36; /*0x4540f9*/
            }
          }
        }
      }
      else
      {
        while ( 1 ) /*0x453fed*/
        {
          result = (*(int (__stdcall **)(int, BuildingClass **, int, _DWORD))(*(_DWORD *)v9 + 12))(v9, &v33, 4, 0); /*0x453fed*/
          if ( result < 0 ) /*0x453ff2*/
            break; /*0x453ff2*/
          FiringOccupantIndex = v1->FiringOccupantIndex; /*0x453ff8*/
          if ( v1->Audio7[1] < FiringOccupantIndex /*0x454029*/
            || (BYTE1(v1->Audio7[0]) || !FiringOccupantIndex)
            && (v15 = v1->Audio7[2], v15 > 0)
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(v1->Overpowerers[0] + 8))(
                 v1->Overpowerers,
                 FiringOccupantIndex + v15,
                 0) )
          {
            v16 = v1->Audio7[1]; /*0x454030*/
            v17 = v1->Occupants[0]; /*0x454033*/
            v1->Audio7[1] = v16 + 1; /*0x454039*/
            *(_DWORD *)(v17 + 4 * v16) = v33; /*0x454040*/
          }
          v13 = v34; /*0x454043*/
          if ( ++v4 >= v34 ) /*0x45404a*/
            goto LABEL_24; /*0x45404a*/
        }
      }
    }
  }
  return result; /*0x45417e*/
}



// ==== 0x00454190  BuildingClass::Size  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::Size(BuildingClass *this)
{
  int SizeMax; // ebp
  int v2; // edx
  int result; // eax
  int v4; // ebx
  int v5; // edx
  int v6; // ebx
  TechnoClass *v7; // [esp+38h] [ebp+4h]
  int v8; // [esp+3Ch] [ebp+8h]
  int v9; // [esp+40h] [ebp+Ch] BYREF

  SizeMax = IPersistStream::GetSizeMax(v7, v8, v9); /*0x4541a8*/
  if ( SizeMax < 0 ) /*0x4541ac*/
    return SizeMax; /*0x4541ac*/
  v2 = *(_DWORD *)v8; /*0x4541b8*/
  v9 = v7[1].armorMultiplier[1]; /*0x4541c4*/
  result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v2 + 16))(v8, &v9, 4, 0); /*0x4541c8*/
  if ( result < 0 ) /*0x4541cd*/
    return result; /*0x4541cd*/
  v4 = 0; /*0x4541d3*/
  if ( v9 <= 0 ) /*0x4541d7*/
  {
LABEL_6:
    v5 = *(_DWORD *)v8; /*0x4541fa*/
    v9 = v7[1].radarFlashTimer[0]; /*0x45420c*/
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v5 + 16))(v8, &v9, 4, 0); /*0x454210*/
    if ( result < 0 ) /*0x454215*/
      return result; /*0x454215*/
    v6 = 0; /*0x45421b*/
    if ( v9 > 0 ) /*0x45421f*/
    {
      while ( 1 ) /*0x454232*/
      {
        result = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v8 + 16))( /*0x454232*/
                   v8,
                   v7[1].idleActionTimer[0] + 4 * v6,
                   4,
                   0);
        if ( result < 0 ) /*0x454237*/
          break; /*0x454237*/
        if ( ++v6 >= v9 ) /*0x454240*/
          return SizeMax; /*0x454240*/
      }
      return result; /*0x454237*/
    }
    return SizeMax; /*0x454242*/
  }
  while ( 1 ) /*0x4541ea*/
  {
    result = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v8 + 16))(v8, v7[1].veterancy[0] + 4 * v4, 4, 0); /*0x4541ea*/
    if ( result < 0 ) /*0x4541ef*/
      return result; /*0x454244*/
    if ( ++v4 >= v9 ) /*0x4541f8*/
      goto LABEL_6; /*0x4541f8*/
  }
}



// ==== 0x00454250  BuildingClass::IsProducing  this=BuildingClass  sig=csp ====
int __thiscall MissionClass::IsProducing(BuildingClass *this)
{
  int result; // eax

  LOBYTE(result) = this->BuildingClass_field_bool_6DD != 0; /*0x454258*/
  return result; /*0x45425b*/
}



// ==== 0x00454260  BuildingClass::PowerDrainUpdate  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::PowerDrainUpdate(BuildingClass *this)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx
  int v5; // eax
  InfantryClass *C4AppliedBy; // eax
  int v7; // eax
  AnimClass *FirestormAnim; // eax
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // ecx
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
  int v29; // edx
  Power *v31; // [esp+Ch] [ebp+4h]

  House::PowerBeginUpdate((TechnoClass *)this, (int)v31); /*0x454269*/
  v2 = this->C4Timer[0]; /*0x45426e*/
  v3 = this->C4Timer[2]; /*0x454274*/
  if ( v2 != -1 ) /*0x45427d*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v2 >= v3 ) /*0x454289*/
      v3 = 0; /*0x45428f*/
    else
      v3 -= *(_DWORD *)&stru_A8EB00.?[416] - v2; /*0x45428b*/
  }
  Power::TimerProcess(v3); /*0x454294*/
  v4 = *(_DWORD *)&this->__pad_6B8[24]; /*0x454299*/
  v5 = *(_DWORD *)&this->__pad_6B8[32]; /*0x45429f*/
  if ( v4 != -1 ) /*0x4542a8*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v4 >= v5 ) /*0x4542b4*/
      v5 = 0; /*0x4542ba*/
    else
      v5 -= *(_DWORD *)&stru_A8EB00.?[416] - v4; /*0x4542b6*/
  }
  Power::TimerProcess(v5); /*0x4542bf*/
  Power::TimerProcess(this->BuildingClass_field_int_534); /*0x4542cd*/
  Power::TimerProcess(this->BuildingClass_field_int_538); /*0x4542db*/
  Power::TimerProcess(this->OwnerCountryIndex); /*0x4542e9*/
  C4AppliedBy = this->C4AppliedBy; /*0x4542ee*/
  if ( C4AppliedBy ) /*0x4542f6*/
  {
    v7 = (*((int (__stdcall **)(void **))C4AppliedBy->? + 4))(&C4AppliedBy->?); /*0x4542ff*/
    Power::TimerProcess(v7); /*0x454305*/
  }
  Power::TimerProcess(this->BuildingClass_field_544); /*0x454313*/
  FirestormAnim = this->FirestormAnim; /*0x454318*/
  if ( FirestormAnim ) /*0x454320*/
  {
    v9 = (*((int (__stdcall **)(void **))FirestormAnim->AnimClass_field_0x4 + 4))(&FirestormAnim->AnimClass_field_0x4); /*0x454329*/
    Power::TimerProcess(v9); /*0x45432f*/
  }
  v10 = this->BuildingClass_field_timer_550[0]; /*0x454334*/
  v11 = this->BuildingClass_field_timer_550[2]; /*0x45433a*/
  if ( v10 != -1 ) /*0x454343*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v10 >= v11 ) /*0x45434f*/
      v11 = 0; /*0x454355*/
    else
      v11 -= *(_DWORD *)&stru_A8EB00.?[416] - v10; /*0x454351*/
  }
  Power::TimerProcess(v11); /*0x45435a*/
  Power::TimerProcess(this->SuperWeaponToken); /*0x454368*/
  Power::TimerProcess(this->LaserFenceFrame); /*0x454376*/
  Power::TimerProcess(this->FirestormWallFrame); /*0x454384*/
  LOBYTE(v12) = this->HasPower; /*0x454389*/
  v13 = Power::FlagProcess(v31, v12); /*0x454392*/
  LOBYTE(v13) = this->StuffEnabled; /*0x454397*/
  Power::FlagProcess(v31, v13); /*0x4543a0*/
  LOBYTE(v14) = this->__pad_6B8[18]; /*0x4543a5*/
  Power::FlagProcess(v31, v14); /*0x4543ae*/
  LOBYTE(v15) = this->__pad_6B8[19]; /*0x4543b3*/
  v16 = Power::FlagProcess(v31, v15); /*0x4543bc*/
  LOBYTE(v16) = this->BuildingClass_field_bool_6DC; /*0x4543c1*/
  Power::FlagProcess(v31, v16); /*0x4543ca*/
  LOBYTE(v17) = this->BuildingClass_field_bool_6DD; /*0x4543cf*/
  Power::FlagProcess(v31, v17); /*0x4543d8*/
  LOBYTE(v18) = this->IsBeingRepaired; /*0x4543dd*/
  v19 = Power::FlagProcess(v31, v18); /*0x4543e6*/
  LOBYTE(v19) = this->NeedsRepairs; /*0x4543eb*/
  Power::FlagProcess(v31, v19); /*0x4543f4*/
  LOBYTE(v20) = this->C4Applied; /*0x4543f9*/
  Power::FlagProcess(v31, v20); /*0x454402*/
  LOBYTE(v21) = this->NoCrew; /*0x454407*/
  v22 = Power::FlagProcess(v31, v21); /*0x454410*/
  LOBYTE(v22) = this->BuildingClass_field_bool_6E1; /*0x454415*/
  Power::FlagProcess(v31, v22); /*0x45441e*/
  LOBYTE(v23) = this->BuildingClass_field_bool_6E2; /*0x454423*/
  Power::FlagProcess(v31, v23); /*0x45442c*/
  LOBYTE(v24) = this->HasBeenCaptured; /*0x454431*/
  v25 = Power::FlagProcess(v31, v24); /*0x45443a*/
  LOBYTE(v25) = this->ActuallyPlacedOnMap; /*0x45443f*/
  Power::FlagProcess(v31, v25); /*0x454448*/
  LOBYTE(v26) = this->__pad_6B8[20]; /*0x45444d*/
  Power::FlagProcess(v31, v26); /*0x454456*/
  LOBYTE(v27) = this->BuildingClass_field_bool_6E5; /*0x45445b*/
  v28 = Power::FlagProcess(v31, v27); /*0x454464*/
  LOBYTE(v28) = this->IsDamaged; /*0x454469*/
  Power::FlagProcess(v31, v28); /*0x454472*/
  Power::TimerProcess(*(unsigned __int16 *)this->BuildingClass_field_short_700); /*0x454483*/
  LOBYTE(v29) = this->UpgradeLevel; /*0x454488*/
  return Power::FinalizeDrain(v31, v29); /*0x454496*/
}



// ==== 0x004544A0  BuildingClass::UpdatePowerDrain  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::UpdatePowerDrain(BuildingClass *this)
{
  char Translucency; // al
  int v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  Cell *v8; // eax
  int v10; // [esp-4h] [ebp-18h]
  int v11; // [esp+18h] [ebp+4h]
  int v12; // [esp+1Ch] [ebp+8h] BYREF

  Translucency = this->Translucency; /*0x4544a7*/
  if ( !Translucency ) /*0x4544af*/
    return TechnoClass::UpdatePowerDrain((char *)this, v11, v12); /*0x4545c3*/
  if ( Translucency <= 10 ) /*0x4544b7*/
    return (Translucency > 5) + 1; /*0x4545ae*/
  if ( (_BYTE)v11 ) /*0x4544c3*/
  {
    v3 = v12; /*0x4544c5*/
    if ( v12 ) /*0x4544cb*/
    {
      v4 = this->?[0]; /*0x4544d7*/
      v5 = this->?[1]; /*0x4544d9*/
      LOWORD(v12) = v4 / 256; /*0x4544ef*/
      v6 = v5; /*0x4544f6*/
      v7 = *(_DWORD *)(v3 + 48); /*0x4544f7*/
      HIWORD(v12) = v6 / 256; /*0x454509*/
      v10 = v7; /*0x454512*/
      v8 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v12); /*0x45451d*/
      if ( (unsigned __int8)Cell::IsPassableOffset(v8, v10) ) /*0x454524*/
        return 3; /*0x454537*/
    }
  }
  else if ( this->? /*0x45458f*/
         || (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 202))(this)
         || !g_hWnd
         || *(_DWORD *)&dword_A8B238
         && this->?
         && dword_A83D4C
         && (unsigned __int8)HouseClass::IsAlliedWith((#375 *)dword_A83D4C, (#375 *)this->?)
         && (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->?, (#375 *)dword_A83D4C) )
  {
    return 3; /*0x454596*/
  }
  return 5; /*0x45452d*/
}



// ==== 0x004545D0  BuildingClass::ProcessAnimationStates  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::ProcessAnimationStates(BuildingClass *this)
{
  int *Anims; // ecx
  int v3; // ebp
  int v4; // edi
  BuildingTypeClass *Type; // eax
  _BYTE *v6; // ecx
  BuildingTypeClass *v7; // edx
  int v9; // ecx
  AnimTypeClass *v10; // eax
  int *v13; // [esp+Ch] [ebp-4h]

  BuildingClass::ClearAnims(this, 20); /*0x4545d8*/
  Anims = this->Anims; /*0x4545dd*/
  v3 = 0; /*0x4545e3*/
  v4 = 0; /*0x4545e5*/
  v13 = this->Anims; /*0x4545e7*/
  do /*0x454716*/
  {
    Type = this->Type; /*0x4545eb*/
    if ( Type->__pad_F70[v4 * 4 + 28] ) /*0x4545f1*/
    {
      v6 = (_BYTE *)*Anims; /*0x4545fc*/
      if ( v6 ) /*0x454600*/
        VtableStub::Method_425270(v6); /*0x454606*/
    }
    else if ( Type->__pad_F70[v4 * 4 + 29] ) /*0x454610*/
    {
      if ( !*Anims && this->ActuallyPlacedOnMap && (!Type->IsAnimDelayedFire || v4 != 170) ) /*0x454642*/
      {
        BuildingClass::GetHealthRatio(this); /*0x45464a*/
        _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x45464f*/
        __asm /*0x454654*/
        {
          fcomp qword ptr [eax+1700h]
          fnstsw ax
        }
        if ( (_EAX & 0x4100) != 0 ) /*0x45465f*/
        {
          v7 = this->Type; /*0x454661*/
          v9 = 1; /*0x454667*/
          v10 = (AnimTypeClass *)&v7->BuildingAnim[v4 + 16]; /*0x45466c*/
        }
        else
        {
          v9 = 0; /*0x45467b*/
          v10 = (AnimTypeClass *)&this->Type->BuildingAnim[v4 + 12]; /*0x45467d*/
        }
        if ( v10 && LOBYTE(v10->ObjectTypeClass) ) /*0x454688*/
          goto LABEL_23; /*0x45468b*/
      }
    }
    else if ( Type->__pad_F70[v4 * 4 + 30] && this->AnimStates[v3] ) /*0x45469a*/
    {
      this->AnimStates[v3] = 0; /*0x4546a7*/
      BuildingClass::GetHealthRatio(this); /*0x4546af*/
      _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4546b4*/
      __asm /*0x4546ba*/
      {
        fcomp qword ptr [ecx+1700h]
        fnstsw ax
      }
      if ( (_AX & 0x4100) != 0 ) /*0x4546c5*/
      {
        v7 = this->Type; /*0x4546c7*/
        v9 = 1; /*0x4546cd*/
        v10 = (AnimTypeClass *)&v7->BuildingAnim[v4 + 16]; /*0x4546d2*/
      }
      else
      {
        v9 = 0; /*0x4546e1*/
        v10 = (AnimTypeClass *)&this->Type->BuildingAnim[v4 + 12]; /*0x4546e3*/
      }
      if ( v10 && LOBYTE(v10->ObjectTypeClass) ) /*0x4546ee*/
LABEL_23:
        BuildingClass::PlayAnim(this, (int)v7, v10, v3, v9, 0, 0); /*0x4546f3*/
    }
    v4 += 17; /*0x454701*/
    ++v3; /*0x454708*/
    Anims = ++v13; /*0x454709*/
  }
  while ( v4 < 357 ); /*0x454716*/
}



// ==== 0x00454730  BuildingClass::UpdateIdleAnims  this=BuildingClass  sig=csp ====
_BYTE *__thiscall BuildingClass::UpdateIdleAnims(BuildingClass *this)
{
  int v2; // ebx
  int i; // edi
  _BYTE *result; // eax
  BuildingTypeClass *Type; // edx
  int v8; // ecx

  BuildingClass::ClearAnims(this, 19); /*0x454737*/
  v2 = 0; /*0x45473c*/
  for ( i = 0; i < 357; i += 17 ) /*0x45473e*/
  {
    result = this->Type; /*0x454740*/
    if ( result[i * 4 + 3983] ) /*0x454746*/
    {
      BuildingClass::GetHealthRatio(this); /*0x454753*/
      _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x454758*/
      __asm /*0x45475e*/
      {
        fcomp qword ptr [ecx+1700h]
        fnstsw ax
      }
      if ( (_AX & 0x4100) != 0 ) /*0x454769*/
      {
        Type = this->Type; /*0x45476b*/
        v8 = 1; /*0x454771*/
        result = &Type->BuildingAnim[i + 16]; /*0x454776*/
      }
      else
      {
        v8 = 0; /*0x454785*/
        result = &this->Type->BuildingAnim[i + 12]; /*0x454787*/
      }
      if ( result ) /*0x454790*/
      {
        if ( *result ) /*0x454792*/
          result = (_BYTE *)BuildingClass::PlayAnim(this, (int)Type, (AnimTypeClass *)result, v2, v8, 0, 0); /*0x4547a0*/
      }
    }
    ++v2; /*0x4547a8*/
  }
  return result; /*0x4547b1*/
}



// ==== 0x004547C0  BuildingClass::UpdateAnimationSlots  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::UpdateAnimationSlots(BuildingClass *this)
{
  int i; // edi
  char *v3; // eax
  BuildingClass *v4; // ecx
  BuildingTypeClass *Type; // eax
  int v8; // ecx
  char *v9; // eax
  int v10; // edx
  int v12; // ecx
  char *v13; // eax

  for ( i = 0; i < 21; ++i ) /*0x4547c4*/
  {
    v3 = (char *)this->Type + 68 * i; /*0x4547d3*/
    if ( v3[3980] ) /*0x4547d6*/
    {
      v4 = (BuildingClass *)this->Anims[i]; /*0x4547e0*/
      if ( v4 ) /*0x4547e9*/
        BuildingClass::SetField8(v4); /*0x4547ef*/
    }
    else if ( v3[3981] ) /*0x4547f9*/
    {
      if ( this->Anims[i] ) /*0x454807*/
      {
        BuildingClass::ClearAnims(this, i); /*0x454819*/
        if ( i == 10 ) /*0x454821*/
        {
          Type = this->Type; /*0x454827*/
          if ( Type->IsAnimDelayedFire ) /*0x45482d*/
          {
            if ( Type->__pad_F70[232] ) /*0x45483b*/
            {
              BuildingClass::GetHealthRatio(this); /*0x45484b*/
              _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x454850*/
              __asm /*0x454856*/
              {
                fcomp qword ptr [edx+1700h]
                fnstsw ax
              }
              if ( (_AX & 0x4100) != 0 ) /*0x454861*/
              {
                v8 = 1; /*0x454869*/
                v9 = &this->Type->__pad_F70[184]; /*0x45486e*/
              }
              else
              {
                v8 = 0; /*0x45487b*/
                v9 = &this->Type->__pad_F70[168]; /*0x45487d*/
              }
              if ( v9 && *v9 ) /*0x45488a*/
                BuildingClass::PlayAnim( /*0x45489a*/
                  this,
                  *(int *)&DSurface_ViewBounds.__pad_FC[324],
                  (AnimTypeClass *)v9,
                  3,
                  v8,
                  0,
                  0);
            }
          }
        }
      }
    }
    else if ( v3[3982] ) /*0x45489c*/
    {
      if ( this->Anims[i] ) /*0x4548a6*/
      {
        this->AnimStates[i] = 1; /*0x4548b4*/
        BuildingClass::ClearAnims(this, i); /*0x4548bc*/
        if ( i == 16 ) /*0x4548c4*/
        {
          BuildingClass::GetHealthRatio(this); /*0x4548c8*/
          _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4548cd*/
          __asm /*0x4548d2*/
          {
            fcomp qword ptr [eax+1700h]
            fnstsw ax
          }
          if ( (_EAX & 0x4100) != 0 ) /*0x4548dd*/
          {
            v12 = 1; /*0x4548e5*/
            v13 = &this->Type->__pad_F70[1340]; /*0x4548ea*/
          }
          else
          {
            v12 = 0; /*0x4548f7*/
            v13 = &this->Type->__pad_F70[1324]; /*0x4548f9*/
          }
          if ( v13 && *v13 ) /*0x454902*/
            BuildingClass::PlayAnim(this, v10, (AnimTypeClass *)v13, 20, v12, 0, 0); /*0x454911*/
        }
      }
    }
  }
}



// ==== 0x00454930  BuildingClass::ProcessDamageAnim  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::ProcessDamageAnim(BuildingClass *this)
{
  int v2; // edx
  int v4; // ecx
  char *v5; // eax
  int v6; // ebx
  int i; // esi

  BuildingClass::GetHealthRatio(this); /*0x454935*/
  _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x45493a*/
  __asm /*0x45493f*/
  {
    fcomp qword ptr [eax+1700h]
    fnstsw ax
  }
  if ( (_EAX & 0x4100) != 0 ) /*0x45494a*/
  {
    v4 = 1; /*0x454952*/
    v5 = &this->Type->__pad_F70[1272]; /*0x454957*/
  }
  else
  {
    v4 = 0; /*0x454964*/
    v5 = &this->Type->__pad_F70[1256]; /*0x454966*/
  }
  if ( v5 && *v5 ) /*0x45496f*/
    BuildingClass::PlayAnim(this, v2, (AnimTypeClass *)v5, 19, v4, 0, 0); /*0x45497e*/
  v6 = 0; /*0x454983*/
  for ( i = 0; i < 1428; i += 68 ) /*0x454985*/
  {
    if ( this->Type->__pad_F70[i + 31] ) /*0x45498d*/
      BuildingClass::ClearAnims(this, v6); /*0x45499b*/
    ++v6; /*0x4549a3*/
  }
}



// ==== 0x004549B0  Animation::UpdateBuildingAnimations  this=Animation  sig=csp ====
void __thiscall Animation::UpdateBuildingAnimations(Animation *this)
{
  bool v2; // zf
  int v3; // eax
  int v4; // ecx
  _BYTE *v5; // eax
  char v6; // cl
  int v7; // eax
  int v8; // ebp
  int i; // edi
  int v12; // ecx
  AnimTypeClass *v13; // eax
  int v14; // ecx
  CaptureManager *v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // edi
  int v21; // edx
  int v22; // eax
  int v25; // ecx
  AnimTypeClass *v26; // eax
  int v27; // ebp
  int j; // edi

  v2 = (*(unsigned __int8 (__thiscall **)(Animation *))(this->u32_350)(this) == 0; /*0x4549bd*/
  v3 = this->q148; /*0x4549bf*/
  v4 = *(_DWORD *)(v3 + 1036); /*0x4549c5*/
  if ( !v2 ) /*0x4549cb*/
  {
    if ( v4 && !this->u32_662 ) /*0x4549d5*/
    {
      this->u32_662 = 1; /*0x4549df*/
      TechnoClass::Find(this->q087, *(_DWORD *)(v3 + 1036)); /*0x4549f3*/
    }
    v5 = (_BYTE *)this->q148; /*0x4549f8*/
    if ( v5[5831] ) /*0x4549fe*/
    {
      if ( *((char *)this + 1771) <= 0 ) /*0x454a10*/
      {
        v6 = this->u8_6EC; /*0x454a12*/
        if ( v6 != v5[5895] ) /*0x454a20*/
        {
          this->u8_6EB = 1; /*0x454a22*/
          if ( v6 == v5[5895] ) /*0x454a31*/
            this->u8_6EC = 0; /*0x454a33*/
          this->q020 = 1; /*0x454a3a*/
        }
      }
    }
    if ( v5[3281] && !this->u8_269 ) /*0x454a4b*/
      (*(void (__thiscall **)(Animation *))(this->u32_414)(this); /*0x454a59*/
    v7 = this->q148; /*0x454a5f*/
    if ( *(_BYTE *)(v7 + 5491) && *(int *)(v7 + 3812) > 0 ) /*0x454a77*/
      BuildingClass::ProcessAnimationStates((BuildingClass *)this); /*0x454a7b*/
    if ( *(_BYTE *)(this->q148 + 5492) ) /*0x454a86*/
    {
      BuildingClass::ClearAnims((BuildingClass *)this, 19); /*0x454a98*/
      v8 = 0; /*0x454a9d*/
      for ( i = 0; i < 1428; i += 68 ) /*0x454a9f*/
      {
        if ( *(_BYTE *)(i + this->q148 + 3983) ) /*0x454aa7*/
        {
          BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x454ab4*/
          _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x454ab9*/
          __asm /*0x454abf*/
          {
            fcomp qword ptr [edx+1700h]
            fnstsw ax
          }
          if ( (_AX & 0x4100) != 0 ) /*0x454aca*/
          {
            v12 = 1; /*0x454ad2*/
            v13 = (AnimTypeClass *)(i + this->q148 + 3932); /*0x454ad7*/
          }
          else
          {
            _EDX = this->q148; /*0x454ae0*/
            v12 = 0; /*0x454ae6*/
            v13 = (AnimTypeClass *)(i + _EDX + 3916); /*0x454ae8*/
          }
          if ( v13 ) /*0x454af1*/
          {
            if ( LOBYTE(v13->ObjectTypeClass) ) /*0x454af3*/
              BuildingClass::PlayAnim((BuildingClass *)this, _EDX, v13, v8, v12, 0, 0); /*0x454b01*/
          }
        }
        ++v8; /*0x454b09*/
      }
    }
    return; /*0x454b10*/
  }
  if ( v4 && this->u32_662 ) /*0x454b1a*/
  {
    v14 = this->q087; /*0x454b24*/
    this->u32_662 = 0; /*0x454b2a*/
    HouseClass::LostPoweredCenter(v14, *(_DWORD *)(v3 + 1036)); /*0x454b38*/
  }
  v15 = (CaptureManager *)this->q0AF; /*0x454b3d*/
  if ( v15 ) /*0x454b45*/
    CaptureManager::FreeAll(v15); /*0x454b47*/
  if ( this->q0AB ) /*0x454b4c*/
    TechnoClass::EjectPassengers((TechnoClass *)this, 1); /*0x454b5a*/
  v16 = this->q148; /*0x454b5f*/
  if ( *(_BYTE *)(v16 + 5831) && *((char *)this + 1771) >= 0 && this->u8_6EC ) /*0x454b79*/
  {
    this->u8_6EB = -1; /*0x454b83*/
    this->q020 = 1; /*0x454b8a*/
  }
  if ( *(_BYTE *)(v16 + 3281) ) /*0x454b91*/
  {
    if ( this->u8_269 ) /*0x454b9b*/
    {
      (*(void (__thiscall **)(Animation *))(this->u32_418)(this); /*0x454ba9*/
      if ( this->u8_268 ) /*0x454baf*/
      {
        v17 = this->q087; /*0x454bb9*/
        this->u8_268 = 0; /*0x454bbf*/
        this->u8_669 = 0; /*0x454bc6*/
        *(_BYTE *)(v17 + 22392) = 1; /*0x454bcd*/
        v18 = *(_DWORD *)this; /*0x454bda*/
        this->q09B = *(char *)(this->q148 + 3282); /*0x454be5*/
        (*(void (__thiscall **)(Animation *))(v18 + 1044))(this); /*0x454beb*/
      }
    }
  }
  v19 = this->q148; /*0x454bf1*/
  if ( *(_BYTE *)(v19 + 5491) && *(int *)(v19 + 3812) > 0 ) /*0x454c09*/
    BuildingClass::UpdateAnimationSlots((BuildingClass *)this); /*0x454c0d*/
  if ( *(_BYTE *)(this->q148 + 5492) ) /*0x454c18*/
  {
    v20 = this->q087; /*0x454c26*/
    v21 = *(_DWORD *)(v20 + 676); /*0x454c2c*/
    v22 = *(_DWORD *)(v20 + 684); /*0x454c32*/
    if ( v21 != -1 ) /*0x454c3b*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v21 >= v22 ) /*0x454c47*/
        goto LABEL_51; /*0x454c47*/
      v22 -= *(_DWORD *)&stru_A8EB00.?[416] - v21; /*0x454c49*/
    }
    if ( v22 ) /*0x454c4d*/
    {
LABEL_52:
      BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x454c59*/
      _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x454c60*/
      __asm /*0x454c66*/
      {
        fcomp qword ptr [edx+1700h]
        fnstsw ax
      }
      if ( (_AX & 0x4100) != 0 ) /*0x454c71*/
      {
        v25 = 1; /*0x454c79*/
        v26 = (AnimTypeClass *)(this->q148 + 5224); /*0x454c7e*/
      }
      else
      {
        v25 = 0; /*0x454c8b*/
        v26 = (AnimTypeClass *)(this->q148 + 5208); /*0x454c8d*/
      }
      if ( v26 && LOBYTE(v26->ObjectTypeClass) ) /*0x454c96*/
        BuildingClass::PlayAnim((BuildingClass *)this, *(int *)&DSurface_ViewBounds.__pad_FC[324], v26, 19, v25, 0, 0); /*0x454ca5*/
      v27 = 0; /*0x454caa*/
      for ( j = 0; j < 1428; j += 68 ) /*0x454cac*/
      {
        if ( *(_BYTE *)(j + this->q148 + 3983) ) /*0x454cb4*/
          BuildingClass::ClearAnims((BuildingClass *)this, v27); /*0x454cc2*/
        ++v27; /*0x454cca*/
      }
      return; /*0x454cd1*/
    }
LABEL_51:
    if ( !*(_BYTE *)(v20 + 22395) ) /*0x454c57*/
      return; /*0x454c57*/
    goto LABEL_52; /*0x454c57*/
  }
}



// ==== 0x00454CE0  ObjectClass::nullsub_5  this=ObjectClass  sig=csp ====
void nullsub_5(ObjectClass *this)
{
  ; /*0x454ce0*/
}



// ==== 0x00454DB0  BuildingClass::CleanupOccupation  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CleanupOccupation(BuildingClass *this)
{
  BuildingClass *v1; // esi
  int result; // eax
  _DWORD *v3; // eax
  int cloakState; // eax
  char Translucency; // al
  char v6; // al
  char v7; // bl
  int *Anims; // ecx
  int v9; // edi
  ParticleSystemClass *ambientParticles; // ecx
  char v11; // al
  char v12; // al
  char v13; // bl
  int *v14; // ecx
  int v15; // edi
  ParticleSystemClass *v16; // eax
  int *NaturalParticleSystemLocation; // eax
  int v18; // ebp
  int v19; // ebx
  int *v20; // edi
  int v21; // edx
  int v22; // esi
  int v23; // edx
  int v24; // eax
  CellClass *v25; // eax
  int v26; // eax
  BuildingClass *v27; // ebx
  Draw *v28; // esi
  int Draw_field_00; // eax
  int v30; // ebp
  int v31; // edi
  int *v32; // eax
  int v33; // ebp
  int k; // ebx
  bool v35; // zf
  BuildingClass *v36; // edi
  _DWORD *m; // esi
  int v38; // eax
  _DWORD *v39; // eax
  _DWORD *v40; // eax
  int *v41; // eax
  int *v42; // eax
  int v43; // ebp
  int v44; // ebx
  BuildingClass *v45; // edi
  _DWORD *i; // esi
  int v47; // eax
  _DWORD *v48; // eax
  int *v49; // eax
  int v50; // kr1C_4
  int v51; // eax
  int j; // edi
  BuildingClass *v53; // esi
  _DWORD *v54; // eax
  int v55; // edx
  BuildingTypeClass *Type; // eax
  char CloakRadius; // dl
  char v58; // al
  int v59; // [esp+1Ch] [ebp-54h]
  int v61; // [esp+30h] [ebp-40h]
  char v62[4]; // [esp+34h] [ebp-3Ch] BYREF
  _BYTE *v63; // [esp+38h] [ebp-38h]
  _BYTE *v64; // [esp+3Ch] [ebp-34h]
  int v65[3]; // [esp+40h] [ebp-30h] BYREF
  int v66; // [esp+4Ch] [ebp-24h]
  _DWORD v67[2]; // [esp+54h] [ebp-1Ch] BYREF
  int v68; // [esp+5Ch] [ebp-14h] BYREF
  int v69[2]; // [esp+60h] [ebp-10h] BYREF
  int v70; // [esp+68h] [ebp-8h]
  _BYTE *v71; // [esp+74h] [ebp+4h] BYREF

  v1 = this; /*0x454db6*/
  result = (int)this->Type; /*0x454dbb*/
  if ( result ) /*0x454dc7*/
  {
    v3 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 18))(this, v69); /*0x454dd6*/
    LOWORD(v66) = *v3 / 256; /*0x454de9*/
    HIWORD(v66) = v3[1] / 256; /*0x454dfd*/
    cloakState = v1->?; /*0x454e02*/
    if ( cloakState == 1 ) /*0x454e0b*/
    {
      Translucency = v1->Translucency; /*0x454e11*/
      if ( Translucency < 15 ) /*0x454e19*/
      {
        v6 = Translucency + 1; /*0x454e1f*/
        v1->Translucency = v6; /*0x454e23*/
        if ( v6 == 1 || v6 == 6 || v6 == 11 ) /*0x454e31*/
          v1->? = 1; /*0x454e33*/
        v7 = v6; /*0x454e3a*/
        if ( v6 == 15 && (*((int (__thiscall **)(BuildingClass *, _DWORD, _DWORD))v1->TechnoClass + 26))(v1, 0, 0) == 5 ) /*0x454e4e*/
          v7 = 16; /*0x454e50*/
        Anims = v1->Anims; /*0x454e55*/
        v9 = 21; /*0x454e5b*/
        do /*0x454e70*/
        {
          if ( *Anims ) /*0x454e60*/
            *(_BYTE *)(*Anims + 376) = v7; /*0x454e66*/
          ++Anims; /*0x454e6c*/
          --v9; /*0x454e6f*/
        }
        while ( v9 ); /*0x454e70*/
        if ( v1->Translucency == 15 ) /*0x454e79*/
        {
          ambientParticles = v1->?; /*0x454e7f*/
          v1->? = 2; /*0x454e85*/
          if ( ambientParticles ) /*0x454e91*/
          {
            (*((void (__thiscall **)(ParticleSystemClass *, int))ambientParticles->ObjectClass + 8))( /*0x454e9b*/
              ambientParticles,
              1);
            v1->? = 0; /*0x454e9e*/
          }
        }
      }
    }
    else if ( cloakState == 3 ) /*0x454eac*/
    {
      v11 = v1->Translucency; /*0x454eb2*/
      if ( v11 >= 0 ) /*0x454eba*/
      {
        if ( v11 > 0 ) /*0x454ec0*/
          v1->Translucency = v11 - 1; /*0x454ec4*/
        v12 = v1->Translucency; /*0x454eca*/
        if ( !v12 || v12 == 5 || v12 == 10 ) /*0x454eda*/
          v1->? = 1; /*0x454edc*/
        v13 = v12; /*0x454ee3*/
        if ( v12 == 15 && (*((int (__thiscall **)(BuildingClass *, _DWORD, _DWORD))v1->TechnoClass + 26))(v1, 0, 0) == 5 ) /*0x454ef7*/
          v13 = 16; /*0x454ef9*/
        v14 = v1->Anims; /*0x454efe*/
        v15 = 21; /*0x454f04*/
        do /*0x454f19*/
        {
          if ( *v14 ) /*0x454f09*/
            *(_BYTE *)(*v14 + 376) = v13; /*0x454f0f*/
          ++v14; /*0x454f15*/
          --v15; /*0x454f18*/
        }
        while ( v15 ); /*0x454f19*/
        if ( !v1->Translucency ) /*0x454f1b*/
        {
          v16 = v1->?; /*0x454f29*/
          v1->? = 0; /*0x454f2f*/
          if ( !v16 ) /*0x454f37*/
          {
            NaturalParticleSystemLocation = v1->Type->?; /*0x454f49*/
            if ( *NaturalParticleSystemLocation != g_BuildingClassPool /*0x454f6c*/
              || v1->Type->?[1] != dword_89C84C
              || v1->Type->?[2] != dword_89C850 )
            {
              v18 = *NaturalParticleSystemLocation; /*0x454f75*/
              v19 = v1->Type->?[1]; /*0x454f77*/
              v70 = v1->Type->?[2]; /*0x454f7f*/
              v20 = (int *)__2_YAPAXI_Z(0x100u); /*0x454f88*/
              if ( v20 ) /*0x454f8f*/
              {
                v21 = this->?[1]; /*0x454fa9*/
                v65[0] = v18 + this->?[0]; /*0x454fac*/
                v22 = this->?[2]; /*0x454fb4*/
                v67[0] = this->?[0]; /*0x454fbb*/
                v65[1] = v19 + v21; /*0x454fbf*/
                v23 = this->?[1]; /*0x454fc3*/
                v24 = this->?[2]; /*0x454fc6*/
                v65[2] = v70 + v22; /*0x454fd5*/
                v67[1] = v23; /*0x454fd9*/
                v68 = v24; /*0x454fdd*/
                v25 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v67); /*0x454fe1*/
                v26 = ParticleSystemClass::Constructor(v20, this->Type->?[0], v65, (int)v25, 0, &g_BuildingClassPool, 0); /*0x454fff*/
                v1 = this; /*0x455004*/
              }
              else
              {
                v26 = 0; /*0x45500a*/
              }
              v1->? = (ParticleSystemClass *)v26; /*0x45500c*/
            }
          }
        }
      }
    }
    if ( v1->? == 2 && (*((unsigned __int8 (__thiscall **)(BuildingClass *))v1->TechnoClass + 169))(v1) ) /*0x45501f*/
      (*((void (__thiscall **)(BuildingClass *, _DWORD))v1->TechnoClass + 279))(v1, 0); /*0x45502f*/
    result = v1->?; /*0x455035*/
    if ( !result ) /*0x45503d*/
    {
      result = (*((int (__thiscall **)(BuildingClass *))v1->TechnoClass + 168))(v1); /*0x455043*/
      if ( (_BYTE)result ) /*0x45504b*/
        result = (*((int (__thiscall **)(BuildingClass *, _DWORD))v1->TechnoClass + 280))(v1, 0); /*0x455053*/
    }
    LOBYTE(result) = v1->HasCloakingData; /*0x455059*/
    if ( (_BYTE)result ) /*0x455061*/
    {
      result = (int)v1->Type; /*0x455067*/
      if ( *(_BYTE *)(result + 5831) ) /*0x45506d*/
      {
        v27 = this; /*0x45507b*/
        v28 = dword_89DDC0; /*0x45507f*/
        Draw_field_00 = dword_89DDC0->Draw_field_00; /*0x45508b*/
        *(_DWORD *)v62 = this->?->relatedTagsCount; /*0x455092*/
        v30 = (*(int (__thiscall **)(Draw *))(Draw_field_00 + 124))(dword_89DDC0); /*0x455099*/
        result = v30 - (v30 >> 31); /*0x45509c*/
        v61 = v30; /*0x45509e*/
        v31 = v30 / 2; /*0x4550aa*/
        LOBYTE(result) = this->CloakRadius; /*0x4550ae*/
        if ( this->HasCloakingData <= 0 ) /*0x4550b4*/
        {
          if ( (_BYTE)result ) /*0x455275*/
          {
            this->CloakRadius = result - 1; /*0x45528b*/
            (*(void (__thiscall **)(Draw *))(v28->Draw_field_00 + 24))(v28); /*0x455295*/
            v41 = (int *)(*(int (__thiscall **)(Draw *, int *, _DWORD))(v28->Draw_field_00 + 120))(v28, &v68, 0); /*0x4552a3*/
            Draw::Ellipse(v28, v31, v31, this->Type->CloakRadiusInCells, *v41, v41[1], v41[2], v41[3], 2); /*0x4552d3*/
            if ( this->CloakRadius ) /*0x4552d8*/
            {
              v42 = (int *)(*(int (__thiscall **)(Draw *, int *))(v28->Draw_field_00 + 120))(v28, v69); /*0x4552ed*/
              Draw::Ellipse(v28, v31, v31, this->CloakRadius, *v42, v42[1], v42[2], v42[3], 1); /*0x455317*/
            }
            v64 = (_BYTE *)(*(int (__thiscall **)(Draw *, _DWORD, _DWORD))(v28->Draw_field_00 + 92))(v28, 0, 0); /*0x45532d*/
            result = v66 - v31; /*0x455337*/
            HIWORD(v67[0]) = HIWORD(v66) - v31; /*0x455339*/
            LOWORD(v67[0]) = v66 - v31; /*0x455340*/
            v63 = 0; /*0x455345*/
            if ( v30 > 0 ) /*0x45534d*/
            {
              v43 = *(_DWORD *)v62; /*0x455353*/
              while ( 2 ) /*0x455357*/
              {
                v44 = 0; /*0x455357*/
                do /*0x45544d*/
                {
                  v35 = *v64++ == 0; /*0x455360*/
                  if ( v35 ) /*0x455366*/
                  {
                    LOWORD(v65[0]) = v44 + LOWORD(v67[0]); /*0x45537d*/
                    HIWORD(v65[0]) = (_WORD)v63 + HIWORD(v67[0]); /*0x455382*/
                    *(_DWORD *)v62 = v65[0]; /*0x45538f*/
                    v45 = (BuildingClass *)CellCoord::To_CellObj( /*0x45539e*/
                                             (CellCoord *)&stru_87F5F0.__pad_58[416],
                                             (__int16 *)v62);
                    if ( (unsigned __int8)Cell::HasOccupierBit((Cell *)v45, v43) ) /*0x4553a3*/
                    {
                      BuildingClass::updateOccupiedState(v45, v43); /*0x4553b3*/
                      for ( i = (_DWORD *)v45->?[1]; i; i = (_DWORD *)i[12] ) /*0x4553c0*/
                      {
                        v47 = (*(int (__thiscall **)(_DWORD *))(*i + 44))(i); /*0x4553c6*/
                        if ( v47 == 1 || v47 == 15 || v47 == 2 ) /*0x4553d6*/
                          (*(void (__thiscall **)(_DWORD *))(*i + 1056))(i); /*0x4553dc*/
                      }
                      v48 = Cell::IsBridge((Cell *)v45); /*0x4553eb*/
                      if ( v48 ) /*0x4553f2*/
                      {
                        if ( *(_DWORD *)(v48[135] + 48) == v43 ) /*0x4553fd*/
                        {
                          v49 = (int *)(*(int (__thiscall **)(_DWORD *, int *))(*v48 + 72))(v48, v69); /*0x455408*/
                          v50 = *v49; /*0x455418*/
                          v51 = v49[1] / 256; /*0x455429*/
                          if ( (unsigned __int16)(v50 / 256) == *(_WORD *)v62 /*0x455440*/
                            && (_WORD)v51 == *(_WORD *)&v62[2]
                            && !(_BYTE)v71 )
                          {
                            ++this->CloakRadius; /*0x4555c0*/
                            return (int)this; /*0x4555b0*/
                          }
                        }
                      }
                    }
                  }
                  ++v44; /*0x45544a*/
                }
                while ( v44 < v61 ); /*0x45544d*/
                result = (int)++v63; /*0x45545b*/
                if ( (int)v63 < v61 ) /*0x455462*/
                  continue; /*0x455462*/
                break;
              }
              v27 = this; /*0x455468*/
            }
            LOBYTE(result) = v27->CloakRadius; /*0x45546c*/
            if ( !(_BYTE)result ) /*0x455474*/
            {
              result = stru_A8EB00.ObjectTypeClass[20]; /*0x45547a*/
              for ( j = 0; j < stru_A8EB00.ObjectTypeClass[20]; ++j ) /*0x455483*/
              {
                v53 = *(BuildingClass **)(stru_A8EB00.ObjectTypeClass[17] + 4 * j); /*0x45548f*/
                if ( v53->? ) /*0x455492*/
                {
                  if ( v53 != v27 ) /*0x4554a2*/
                  {
                    if ( v53->Type->CloakGenerator ) /*0x4554ae*/
                    {
                      if ( (*((unsigned __int8 (__thiscall **)(_DWORD))v53->TechnoClass + 212))(*(_DWORD *)(stru_A8EB00.ObjectTypeClass[17] + 4 * j)) ) /*0x4554c0*/
                      {
                        if ( !v53->HasCloakingData ) /*0x4554ce*/
                        {
                          v54 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, int *))v53->TechnoClass + 18))( /*0x4554e5*/
                                            v53,
                                            v69);
                          LOWORD(v67[0]) = *v54 / 256; /*0x4554f8*/
                          HIWORD(v67[0]) = v54[1] / 256; /*0x455510*/
                          v55 = v27->Type->CloakRadiusInCells + 2; /*0x45553a*/
                          if ( (__int16)(HIWORD(v66) - HIWORD(v67[0])) * (__int16)(HIWORD(v66) - HIWORD(v67[0])) /*0x455551*/
                             + (__int16)(v66 - LOWORD(v67[0])) * (__int16)(v66 - LOWORD(v67[0])) < 4 * v55 * v55 )
                          {
                            Type = v53->Type; /*0x455553*/
                            if ( Type->CloakGenerator ) /*0x455559*/
                            {
                              CloakRadius = v53->CloakRadius; /*0x455563*/
                              v53->HasCloakingData = 1; /*0x455569*/
                              if ( CloakRadius == Type->CloakRadiusInCells ) /*0x455576*/
                                v53->CloakRadius = 0; /*0x455578*/
                              v53->? = 1; /*0x45557f*/
                            }
                            v58 = v53->CloakRadius; /*0x455586*/
                            if ( v58 ) /*0x45558e*/
                              v53->CloakRadius = v58 - 1; /*0x455592*/
                          }
                        }
                      }
                    }
                  }
                }
                result = stru_A8EB00.ObjectTypeClass[20]; /*0x455598*/
              }
            }
          }
          else
          {
            this->HasCloakingData = 0; /*0x455277*/
          }
        }
        else if ( (_BYTE)result == this->Type->CloakRadiusInCells ) /*0x4550c6*/
        {
          this->HasCloakingData = 0; /*0x4550c8*/
        }
        else
        {
          this->CloakRadius = result + 1; /*0x4550dd*/
          (*(void (__thiscall **)(Draw *, _DWORD))(v28->Draw_field_00 + 24))(v28, 0); /*0x4550e7*/
          v32 = (int *)(*(int (__thiscall **)(Draw *, int *, int))(v28->Draw_field_00 + 120))(v28, v69, 1); /*0x4550f5*/
          Draw::Ellipse(v28, v31, v31, this->CloakRadius, *v32, v32[1], v32[2], v32[3], v59); /*0x45511f*/
          v63 = (_BYTE *)(*(int (__thiscall **)(Draw *, _DWORD))(v28->Draw_field_00 + 92))(v28, 0); /*0x455135*/
          v33 = 0; /*0x455141*/
          LOWORD(v65[0]) = v66 - v31; /*0x455143*/
          result = v61; /*0x455148*/
          for ( HIWORD(v65[0]) = HIWORD(v66) - v31; v33 < v61; ++v33 ) /*0x455153*/
          {
            for ( k = 0; k < v61; ++k ) /*0x455159*/
            {
              v35 = *v63++ == 0; /*0x455162*/
              if ( !v35 ) /*0x455168*/
              {
                HIWORD(v64) = v33 + HIWORD(v65[0]); /*0x45517b*/
                LOWORD(v64) = k + LOWORD(v65[0]); /*0x455180*/
                v71 = v64; /*0x45518d*/
                v36 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v71); /*0x4551a0*/
                if ( !(unsigned __int8)Cell::HasOccupierBit((Cell *)v36, v62[0]) ) /*0x4551a5*/
                {
                  BuildingClass::checkOccupant(v36, v62[0]); /*0x4551b9*/
                  for ( m = (_DWORD *)v36->?[1]; m; m = (_DWORD *)m[12] ) /*0x4551c6*/
                  {
                    v38 = (*(int (__thiscall **)(_DWORD *))(*m + 44))(m); /*0x4551cc*/
                    if ( v38 == 1 || v38 == 15 || v38 == 2 ) /*0x4551dc*/
                      (*(void (__thiscall **)(_DWORD *))(*m + 1056))(m); /*0x4551e2*/
                  }
                  v39 = Cell::IsBridge((Cell *)v36); /*0x4551f1*/
                  if ( v39 ) /*0x4551f8*/
                  {
                    if ( *(_DWORD *)(v39[135] + 48) == *(_DWORD *)v62 ) /*0x455207*/
                    {
                      v40 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v39 + 72))(v39, v69); /*0x455212*/
                      if ( (_BYTE *)__PAIR32__(v40[1] / 256, *v40 / 256) == v71 ) /*0x45523b*/
                      {
                        --this->CloakRadius; /*0x455263*/
                        return (int)this; /*0x455270*/
                      }
                    }
                  }
                }
              }
              result = v61; /*0x455244*/
            }
          }
        }
      }
    }
  }
  return result; /*0x4550cf*/
}



// ==== 0x004555D0  BuildingClass::IsPoweredActive  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::IsPoweredActive(BuildingClass *this)
{
  int result; // eax
  BuildingTypeClass *Type; // ebx
  HouseClass *owner; // edi
  int v5; // edx

  if ( !this->HasPower && this->Audio7[1] < 2 ) /*0x4555ea*/
    goto LABEL_20; /*0x4555ea*/
  result = this->?; /*0x4555f0*/
  if ( result > 0 ) /*0x4555f8*/
    goto LABEL_20; /*0x4555f8*/
  result = this->?; /*0x4555fe*/
  if ( !result ) /*0x455603*/
    goto LABEL_20; /*0x455603*/
  result = (int)this->Type; /*0x455609*/
  if ( *(_BYTE *)(result + 5491) ) /*0x45560f*/
  {
    if ( *(int *)(result + 3812) > 0 ) /*0x455621*/
    {
      result = HouseClass::GetPowerRatio(this->?); /*0x455629*/
      __asm /*0x45562e*/
      {
        fcomp ds:dbl_7E1718
        fnstsw ax
      }
      if ( (result & 0x100) != 0 && this->Audio7[1] < 2 ) /*0x455641*/
        goto LABEL_20; /*0x455641*/
    }
  }
  Type = this->Type; /*0x455643*/
  if ( Type->PoweredSpecial ) /*0x455649*/
  {
    owner = this->?; /*0x455653*/
    v5 = owner->powerBlackoutTimer[0]; /*0x455659*/
    result = owner->powerBlackoutTimer[2]; /*0x45565f*/
    if ( v5 != -1 ) /*0x455668*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v5 >= result ) /*0x455674*/
      {
LABEL_14:
        if ( HIBYTE(owner->HouseClass_field_timer_B[2]) ) /*0x45567c*/
          goto LABEL_20; /*0x455684*/
        goto LABEL_15; /*0x455684*/
      }
      result -= *(_DWORD *)&stru_A8EB00.?[416] - v5; /*0x455676*/
    }
    if ( result ) /*0x45567a*/
      goto LABEL_20; /*0x45567a*/
    goto LABEL_14; /*0x45567a*/
  }
LABEL_15:
  if ( !Type->NeedsEngineer || this->__pad_6B8[20] ) /*0x455690*/
  {
    result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this); /*0x45569e*/
    if ( result != 18 ) /*0x4556a7*/
    {
      result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this); /*0x4556ad*/
      if ( result != 19 ) /*0x4556b6*/
      {
        LOBYTE(result) = 1; /*0x4556ba*/
        return result; /*0x4556bd*/
      }
    }
  }
LABEL_20:
  LOBYTE(result) = 0; /*0x4556be*/
  return result; /*0x4556b8*/
}



// ==== 0x004556D0  BuildingClass::ScanCircleForUnits  this=BuildingClass  sig=csp ====
int __thiscall FootClass::ScanCircleForUnits(BuildingClass *this)
{
  int CloakRadiusInCells; // ebp
  int relatedTagsCount; // eax
  int v3; // esi
  _DWORD *v4; // eax
  int v5; // edi
  int result; // eax
  int v7; // ebx
  FootClass *v8; // esi
  _DWORD *j; // esi
  int v10; // eax
  int v11; // [esp+Ch] [ebp-24h]
  int v12; // [esp+Ch] [ebp-24h]
  int i; // [esp+10h] [ebp-20h]
  __int16 v14[2]; // [esp+14h] [ebp-1Ch] BYREF
  int v15; // [esp+18h] [ebp-18h]
  int v16; // [esp+1Ch] [ebp-14h]
  int v17; // [esp+20h] [ebp-10h]
  _BYTE v18[12]; // [esp+24h] [ebp-Ch] BYREF
  int v19; // [esp+34h] [ebp+4h]

  CloakRadiusInCells = this->Type->CloakRadiusInCells; /*0x4556e1*/
  relatedTagsCount = this->?->relatedTagsCount; /*0x4556ea*/
  v3 = CloakRadiusInCells * CloakRadiusInCells; /*0x4556ed*/
  v16 = CloakRadiusInCells * CloakRadiusInCells; /*0x4556fd*/
  v15 = relatedTagsCount; /*0x455701*/
  if ( v19 == g_TerrainTypeTable ) /*0x455705*/
  {
    v4 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass + 18))(this, v18); /*0x45571c*/
    LOWORD(v11) = *v4 / 256; /*0x45572f*/
    HIWORD(v11) = v4[1] / 256; /*0x455743*/
    v19 = v11; /*0x45574c*/
  }
  v5 = -CloakRadiusInCells; /*0x455752*/
  result = -CloakRadiusInCells; /*0x455754*/
  v17 = -CloakRadiusInCells; /*0x455756*/
  for ( i = -CloakRadiusInCells; result < CloakRadiusInCells; i = result ) /*0x455760*/
  {
    if ( v5 < CloakRadiusInCells ) /*0x455769*/
    {
      v7 = result * result; /*0x455775*/
      HIWORD(v12) = result + HIWORD(v19); /*0x45577b*/
      do /*0x4557f8*/
      {
        LOWORD(v12) = v5 + v19; /*0x455787*/
        *(_DWORD *)v14 = v12; /*0x455799*/
        if ( v7 + v5 * v5 < v3 ) /*0x45579d*/
        {
          v8 = (FootClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v14); /*0x4557ae*/
          FootClass::updateLocomotion(v8, v15); /*0x4557b7*/
          for ( j = (_DWORD *)v8->?[1]; j; j = (_DWORD *)j[12] ) /*0x4557c4*/
          {
            v10 = (*(int (__thiscall **)(_DWORD *))(*j + 44))(j); /*0x4557ca*/
            if ( v10 == 1 || v10 == 15 || v10 == 2 ) /*0x4557da*/
              (*(void (__thiscall **)(_DWORD *))(*j + 1056))(j); /*0x4557e0*/
          }
          result = i; /*0x4557ed*/
          v3 = v16; /*0x4557f1*/
        }
        ++v5; /*0x4557f5*/
      }
      while ( v5 < CloakRadiusInCells ); /*0x4557f8*/
      v5 = v17; /*0x4557fa*/
    }
    ++result; /*0x4557fe*/
  }
  return result; /*0x45580c*/
}



// ==== 0x00455820  BuildingClass::ScanCircleForUnits2  this=BuildingClass  sig=csp ====
int __thiscall FootClass::ScanCircleForUnits2(BuildingClass *this)
{
  int result; // eax
  int SensorsSight; // ebp
  _DWORD *v4; // eax
  int v5; // edi
  int v6; // ebx
  FootClass *v7; // esi
  _DWORD *j; // esi
  int v9; // eax
  int v10; // [esp+Ch] [ebp-24h]
  int v11; // [esp+Ch] [ebp-24h]
  int i; // [esp+10h] [ebp-20h]
  __int16 v13[2]; // [esp+18h] [ebp-18h] BYREF
  int relatedTagsCount; // [esp+1Ch] [ebp-14h]
  int v15; // [esp+20h] [ebp-10h]
  _BYTE v16[12]; // [esp+24h] [ebp-Ch] BYREF
  int v17; // [esp+34h] [ebp+4h]

  result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 212))(this); /*0x45582a*/
  if ( (_BYTE)result ) /*0x455832*/
  {
    SensorsSight = this->Type->?; /*0x455844*/
    relatedTagsCount = this->?->relatedTagsCount; /*0x455862*/
    if ( v17 == g_TerrainTypeTable ) /*0x455866*/
    {
      v4 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass + 18))(this, v16); /*0x45587f*/
      LOWORD(v10) = *v4 / 256; /*0x455892*/
      HIWORD(v10) = v4[1] / 256; /*0x4558a6*/
      v17 = v10; /*0x4558af*/
    }
    v5 = -SensorsSight; /*0x4558b5*/
    result = -SensorsSight; /*0x4558b7*/
    v15 = -SensorsSight; /*0x4558b9*/
    for ( i = -SensorsSight; result < SensorsSight; i = result ) /*0x4558c3*/
    {
      if ( v5 < SensorsSight ) /*0x4558cc*/
      {
        v6 = result * result; /*0x4558d8*/
        HIWORD(v11) = result + HIWORD(v17); /*0x4558de*/
        do /*0x45595b*/
        {
          LOWORD(v11) = v5 + v17; /*0x4558ea*/
          *(_DWORD *)v13 = v11; /*0x4558f8*/
          if ( v6 + v5 * v5 < SensorsSight * SensorsSight ) /*0x455904*/
          {
            v7 = (FootClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v13); /*0x455919*/
            FootClass::checkTerrainSpeed(v7, relatedTagsCount); /*0x45591e*/
            for ( j = (_DWORD *)v7->?[1]; j; j = (_DWORD *)j[12] ) /*0x45592b*/
            {
              v9 = (*(int (__thiscall **)(_DWORD *))(*j + 44))(j); /*0x455931*/
              if ( v9 == 1 || v9 == 15 || v9 == 2 ) /*0x455941*/
                (*(void (__thiscall **)(_DWORD *))(*j + 1056))(j); /*0x455947*/
            }
            result = i; /*0x455954*/
          }
          ++v5; /*0x455958*/
        }
        while ( v5 < SensorsSight ); /*0x45595b*/
        v5 = v15; /*0x45595d*/
      }
      ++result; /*0x455961*/
    }
  }
  return result; /*0x45596f*/
}



// ==== 0x00455980  BuildingClass::ScanCircleForTiberium  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ScanCircleForTiberium(BuildingClass *this)
{
  int DetectDisguiseRange; // ebx
  int result; // eax
  _DWORD *v3; // eax
  int v4; // esi
  int v5; // ebp
  BuildingClass *v6; // eax
  int v7; // [esp+Ch] [ebp-20h]
  int v8; // [esp+Ch] [ebp-20h]
  __int16 v9[2]; // [esp+14h] [ebp-18h] BYREF
  int v10; // [esp+18h] [ebp-14h]
  int i; // [esp+1Ch] [ebp-10h]
  _BYTE v12[12]; // [esp+20h] [ebp-Ch] BYREF
  int v13; // [esp+30h] [ebp+4h]

  DetectDisguiseRange = this->Type->?; /*0x455991*/
  result = this->?->relatedTagsCount; /*0x4559a1*/
  v10 = result; /*0x4559a9*/
  if ( (_WORD)v13 == (_WORD)g_TerrainTypeTable ) /*0x4559b4*/
  {
    LOWORD(result) = HIWORD(v13); /*0x4559b6*/
    if ( HIWORD(v13) == HIWORD(g_TerrainTypeTable) ) /*0x4559c2*/
    {
      v3 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass + 18))(this, v12); /*0x4559cb*/
      LOWORD(v7) = *v3 / 256; /*0x4559de*/
      result = v3[1] / 256; /*0x4559ef*/
      HIWORD(v7) = result; /*0x4559f2*/
      v13 = v7; /*0x4559fb*/
    }
  }
  v4 = -DetectDisguiseRange; /*0x455a01*/
  v5 = -DetectDisguiseRange; /*0x455a03*/
  for ( i = -DetectDisguiseRange; v5 < DetectDisguiseRange; ++v5 ) /*0x455a0b*/
  {
    if ( v4 < DetectDisguiseRange ) /*0x455a10*/
    {
      do /*0x455a64*/
      {
        LOWORD(v8) = v4 + v13; /*0x455a2f*/
        HIWORD(v8) = HIWORD(v13) + v5; /*0x455a1e*/
        *(_DWORD *)v9 = v8; /*0x455a38*/
        result = DetectDisguiseRange * DetectDisguiseRange; /*0x455a3c*/
        if ( v5 * v5 + v4 * v4 < DetectDisguiseRange * DetectDisguiseRange ) /*0x455a44*/
        {
          v6 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v9); /*0x455a50*/
          result = BuildingClass::evaulateDefense(v6, v10); /*0x455a5c*/
        }
        ++v4; /*0x455a61*/
      }
      while ( v4 < DetectDisguiseRange ); /*0x455a64*/
      v4 = i; /*0x455a66*/
    }
  }
  return result; /*0x455a70*/
}



// ==== 0x00455A80  BuildingClass::UpdateTerrainEffect  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::UpdateTerrainEffect(BuildingClass *this)
{
  int result; // eax
  int DetectDisguiseRange; // ebx
  _DWORD *v4; // eax
  int v5; // esi
  int v6; // ebp
  BuildingClass *v7; // eax
  int v8; // [esp+Ch] [ebp-20h]
  int v9; // [esp+Ch] [ebp-20h]
  __int16 v10[2]; // [esp+14h] [ebp-18h] BYREF
  int v11; // [esp+18h] [ebp-14h]
  int i; // [esp+1Ch] [ebp-10h]
  _BYTE v13[12]; // [esp+20h] [ebp-Ch] BYREF
  int v14; // [esp+30h] [ebp+4h]

  result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 212))(this); /*0x455a8a*/
  if ( (_BYTE)result ) /*0x455a92*/
  {
    DetectDisguiseRange = this->Type->?; /*0x455aa4*/
    result = this->?->relatedTagsCount; /*0x455abf*/
    v11 = result; /*0x455ac2*/
    if ( v14 == g_TerrainTypeTable ) /*0x455ac6*/
    {
      v4 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass + 18))(this, v13); /*0x455adf*/
      LOWORD(v8) = *v4 / 256; /*0x455af2*/
      result = v4[1] / 256; /*0x455b03*/
      HIWORD(v8) = result; /*0x455b06*/
      v14 = v8; /*0x455b0f*/
    }
    v5 = -DetectDisguiseRange; /*0x455b15*/
    v6 = -DetectDisguiseRange; /*0x455b17*/
    for ( i = -DetectDisguiseRange; v6 < DetectDisguiseRange; ++v6 ) /*0x455b1f*/
    {
      if ( v5 < DetectDisguiseRange ) /*0x455b24*/
      {
        do /*0x455b78*/
        {
          LOWORD(v9) = v5 + v14; /*0x455b43*/
          result = DetectDisguiseRange * DetectDisguiseRange; /*0x455b48*/
          HIWORD(v9) = HIWORD(v14) + v6; /*0x455b32*/
          *(_DWORD *)v10 = v9; /*0x455b54*/
          if ( v6 * v6 + v5 * v5 < DetectDisguiseRange * DetectDisguiseRange ) /*0x455b58*/
          {
            v7 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v10); /*0x455b64*/
            result = BuildingClass::processGarrison(v7, v11); /*0x455b70*/
          }
          ++v5; /*0x455b75*/
        }
        while ( v5 < DetectDisguiseRange ); /*0x455b78*/
        v5 = i; /*0x455b7a*/
      }
    }
  }
  return result; /*0x455b84*/
}



// ==== 0x00455B90  BuildingClass::GetFWFlags  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetFWFlags(BuildingClass *this)
{
  int *location; // ecx
  int v2; // ebx
  CellClass *v3; // edi
  signed int i; // esi
  Cell *NeighbourContent; // eax
  _DWORD *v6; // eax
  _DWORD v8[3]; // [esp+Ch] [ebp-Ch] BYREF

  location = this->?; /*0x455b93*/
  v2 = 0; /*0x455b9e*/
  v8[0] = *location; /*0x455ba0*/
  v8[1] = location[1]; /*0x455ba7*/
  v8[2] = location[2]; /*0x455bb8*/
  v3 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v8); /*0x455bc1*/
  for ( i = 0; i < 8; i += 2 ) /*0x455bc3*/
  {
    NeighbourContent = (Cell *)Cell::GetNeighbourContent((Cell *)v3, i); /*0x455bc8*/
    v6 = Cell::IsBridge(NeighbourContent); /*0x455bcf*/
    if ( v6 && *(_BYTE *)(v6[328] + 5824) && !*((_BYTE *)v6 + 129) && *((_BYTE *)v6 + 144) ) /*0x455bf2*/
      v2 |= 1 << (i >> 1); /*0x455c07*/
  }
  return v2; /*0x455c11*/
}



// ==== 0x00455C20  ObjectClass::GetScreenCoords  this=BuildingClass  sig=csp ====
int __thiscall ObjectClass::GetScreenCoords(TechnoClass *this)
{
  int *v2; // eax
  bool v3; // zf
  int v4; // edx
  int v5; // edi
  char *v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // esi
  int v10; // edi
  int *v11; // eax
  int v12; // edi
  int v13; // eax
  int *v14; // esi
  IPersistStream v16; // [esp+10h] [ebp-34h]
  IPersistStream v17; // [esp+14h] [ebp-30h]
  int v18; // [esp+18h] [ebp-2Ch] BYREF
  int v19; // [esp+1Ch] [ebp-28h]
  int v20; // [esp+20h] [ebp-24h]
  int v21; // [esp+24h] [ebp-20h]
  int v22; // [esp+28h] [ebp-1Ch] BYREF
  int v23; // [esp+2Ch] [ebp-18h]
  int v24; // [esp+30h] [ebp-14h]
  int v25[4]; // [esp+34h] [ebp-10h] BYREF
  int *v26; // [esp+48h] [ebp+4h]

  v2 = (int *)(*(int (__thiscall **)(TechnoClass *, int *))(this->vtable0 + 172))(this, &v18); /*0x455c32*/
  v22 = *v2; /*0x455c3c*/
  v3 = v22 == this->BuildingClass_field_coord_64C; /*0x455c40*/
  v4 = v2[1]; /*0x455c46*/
  v23 = v4; /*0x455c49*/
  v5 = v2[2]; /*0x455c4d*/
  v24 = v5; /*0x455c56*/
  v16 = g_TacticalClass_Instance[44]; /*0x455c66*/
  v17 = g_TacticalClass_Instance[45]; /*0x455c6a*/
  if ( v3 /*0x455c8e*/
    && v4 == this->q194
    && v5 == this->q654
    && *(_DWORD *)&g_TacticalClass_Instance[44] == this->BuildingClass_field_int_658
    && *(_DWORD *)&g_TacticalClass_Instance[45] == this->BuildingClass_field_65C )
  {
    v6 = (char *)this + 1596; /*0x455c96*/
    v7 = this->BuildingClass_field_rect_63C; /*0x455c98*/
    v8 = this->ironCurtainTimer; /*0x455c9a*/
    v9 = this->chronoLockRemaining; /*0x455c9d*/
    v10 = *((_DWORD *)v6 + 3); /*0x455ca0*/
  }
  else
  {
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v22, &v18); /*0x455cb2*/
    v11 = CalculateBuildingFoundationBounds(*((ObjectClass **)this + 328), v25); /*0x455cc2*/
    v7 = v18 + *v11; /*0x455cd4*/
    v8 = v19 + v11[1]; /*0x455cda*/
    v12 = v11[2]; /*0x455cdc*/
    v13 = v11[3]; /*0x455cdf*/
    this->BuildingClass_field_coord_64C = v22; /*0x455ce2*/
    v20 = v12; /*0x455cec*/
    this->q194 = v23; /*0x455cf0*/
    this->q654 = v24; /*0x455cfa*/
    *((IPersistStream *)this + 406) = v16; /*0x455d04*/
    *((IPersistStream *)this + 407) = v17; /*0x455d0e*/
    v14 = (int *)((char *)this + 1596); /*0x455d14*/
    v19 = v8; /*0x455d1a*/
    v21 = v13; /*0x455d1e*/
    *v14 = v7; /*0x455d22*/
    v14[1] = v8; /*0x455d24*/
    v14[2] = v12; /*0x455d27*/
    v10 = v13; /*0x455d2a*/
    v14[3] = v13; /*0x455d2c*/
    v9 = v20; /*0x455d2f*/
  }
  *v26 = v7; /*0x455d39*/
  v26[1] = v8; /*0x455d3b*/
  v26[2] = v9; /*0x455d3e*/
  v26[3] = v10; /*0x455d41*/
  return (int)v26; /*0x455d44*/
}



// ==== 0x00455D50  BuildingClass::AssignDestination_SyncLog  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::AssignDestination_SyncLog(BuildingClass *this)
{
  int result; // eax
  TechnoClass *v3; // [esp+8h] [ebp+4h]
  int v4; // [esp+Ch] [ebp+8h]

  if ( this->? != 19 ) /*0x455d5a*/
  {
    if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 161))(this) /*0x455d73*/
      || this->Type->ConstructionYard )
    {
      TechnoClass::SetFocus((TechnoClass *)this, (int)v3); /*0x455d80*/
    }
    IPersistStream::Stub(v3, v4); /*0x455d8d*/
  }
  return result; /*0x455d93*/
}



// ==== 0x00455DA0  BuildingClass::CheckSpecialUpdateFlags  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CheckSpecialUpdateFlags(BuildingClass *this)
{
  int result; // eax
  int v2; // ecx

  result = (int)this->Type; /*0x455da0*/
  v2 = *(_DWORD *)(result + 3768); /*0x455da6*/
  LOBYTE(result) = v2 == 40 || v2 == 16 || *(_BYTE *)(result + 5804) || *(_BYTE *)(result + 5801); /*0x455dcd*/
  return result; /*0x455dcc*/
}



// ==== 0x00455DD0  globalHelper_055DD0  this=-  sig=csp ====
_DWORD *__fastcall sub_455DD0(int a1, _DWORD *a2)
{
  int v2; // esi
  _DWORD *v3; // edi
  int v4; // eax
  _DWORD *v5; // esi
  double v6; // st7
  int v7; // eax
  int v9; // [esp+24h] [ebp-24h]
  int v11; // [esp+2Ch] [ebp-1Ch]
  _DWORD *v12; // [esp+30h] [ebp-18h]
  int v14; // [esp+38h] [ebp-10h]
  int v15; // [esp+3Ch] [ebp-Ch]
  int v16; // [esp+40h] [ebp-8h]
  int v17; // [esp+44h] [ebp-4h]

  v2 = a1; /*0x455ddc*/
  v3 = a2; /*0x455de7*/
  v12 = 0; /*0x455df5*/
  v9 = 0x7FFFFFFF; /*0x455df9*/
  if ( (byte_89C828 & 1) == 0 ) /*0x455e01*/
  {
    byte_89C828 |= 1u; /*0x455e11*/
    dword_89C7F0 = Math::RoundToInt(dbl_89C820 * 20.0); /*0x455e1c*/
  }
  v4 = 0; /*0x455e27*/
  v14 = *(_DWORD *)(v2 + 144); /*0x455e2b*/
  v11 = 0; /*0x455e2f*/
  if ( v14 <= 0 ) /*0x455e33*/
    return 0; /*0x455f00*/
  while ( 1 ) /*0x455e47*/
  {
    v5 = *(_DWORD **)(*(_DWORD *)(v2 + 132) + 4 * v4); /*0x455e47*/
    if ( (*(int (__thiscall **)(_DWORD *, int, _DWORD *))(*v3 + 632))(v3, 15, v5) ) /*0x455e4f*/
    {
      v15 = v5[39] - v3[39]; /*0x455e7f*/
      v16 = v5[40] - v3[40]; /*0x455e88*/
      v17 = v5[41] - v3[41]; /*0x455e92*/
      v6 = Math::Sqrt((double)v15 * (double)v15 + (double)v17 * (double)v17 + (double)v16 * (double)v16); /*0x455eb7*/
      v7 = Math::RoundToInt(v6); /*0x455ebf*/
      if ( v7 < v9 && v7 < dword_89C7F0 ) /*0x455ed0*/
      {
        v12 = v5; /*0x455ed2*/
        v9 = v7; /*0x455ed6*/
      }
      v3 = a2; /*0x455eda*/
    }
    v4 = ++v11; /*0x455ee6*/
    if ( v11 >= v14 ) /*0x455eed*/
      break; /*0x455eed*/
    v2 = a1; /*0x455e3b*/
  }
  return v12; /*0x455ef7*/
}



// ==== 0x00455F10  ObjectClass::MarkBuildingFoundationCells  this=ObjectClass  sig=csp ====
char __thiscall MarkBuildingFoundationCells(TechnoClass *this, int a2)
{
  int v2; // esi
  int FoundationWidth; // eax
  int *v5; // ecx
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // edx
  __int16 v10; // cx
  int v11; // ebx
  int v12; // esi
  int v13; // esi
  _DWORD *v14; // eax
  int *v15; // eax
  int v16; // ebx
  int v17; // edi
  int v18; // edi
  int v19; // ebx
  int v20; // eax
  int v21; // edx
  int v22; // esi
  int v23; // ebx
  int v24; // edi
  int owner; // edx
  ObjectClass *v26; // eax
  _DWORD *v27; // esi
  int v28; // ecx
  int v29; // ecx
  _DWORD *v30; // esi
  int v31; // ecx
  int v32; // edx
  int v34; // [esp-4h] [ebp-38h]
  int v35; // [esp+10h] [ebp-24h]
  int v36; // [esp+14h] [ebp-20h]
  __int16 v37[2]; // [esp+18h] [ebp-1Ch] BYREF
  int v38; // [esp+1Ch] [ebp-18h]
  int v39; // [esp+20h] [ebp-14h]
  int v40; // [esp+24h] [ebp-10h]
  int v41; // [esp+28h] [ebp-Ch]
  int v42; // [esp+30h] [ebp-4h]

  v2 = *(_DWORD *)&dword_8871E0->__pad_13BC[164]; /*0x455f1b*/
  FoundationWidth = BuildingTypeClass::GetFoundationWidth(*((BuildingTypeClass **)this + 328)); /*0x455f2d*/
  v5 = (int *)*((_DWORD *)this + 328); /*0x455f32*/
  v39 = 2 * v2 + FoundationWidth; /*0x455f3c*/
  v36 = 2 * v2 + BuildingTypeClass::GetFoundationHeight(v5, 0); /*0x455f53*/
  v6 = this->location[0]; /*0x455f5f*/
  v7 = 1 << *(_DWORD *)(this->owner + 48); /*0x455f61*/
  v8 = this->location[1]; /*0x455f63*/
  v42 = this->location[2]; /*0x455f69*/
  LOWORD(v41) = v6 / 256; /*0x455f79*/
  v9 = (__int16)(v41 - v2); /*0x455f9b*/
  v10 = v8 / 256 - v2; /*0x455fa2*/
  v11 = v9; /*0x455fa4*/
  HIWORD(v41) = v10; /*0x455fa6*/
  v12 = v9 + v39; /*0x455fab*/
  v40 = v9; /*0x455fae*/
  v38 = v9 + v39; /*0x455fb4*/
  if ( v9 < v9 + v39 ) /*0x455fb8*/
  {
    v35 = v36 + v10; /*0x455fc3*/
    do /*0x456013*/
    {
      v13 = v10; /*0x455fcb*/
      if ( v10 < v35 ) /*0x455fd0*/
      {
        do /*0x456001*/
        {
          v37[0] = v11; /*0x455fd6*/
          v37[1] = v13; /*0x455fe1*/
          v14 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v37); /*0x455fe6*/
          ++v13; /*0x455ff8*/
          v14[55] |= v7; /*0x455ff9*/
        }
        while ( v13 < v35 ); /*0x456001*/
        v9 = v40; /*0x456003*/
        v10 = HIWORD(v41); /*0x456007*/
      }
      ++v11; /*0x456010*/
    }
    while ( v11 < v38 ); /*0x456013*/
    v12 = v38; /*0x456015*/
  }
  v15 = (int *)(this->owner + 22356); /*0x45601d*/
  if ( !*v15 ) /*0x456022*/
    *v15 = v9; /*0x456027*/
  if ( !v15[1] ) /*0x456029*/
    v15[1] = v10; /*0x456033*/
  if ( v9 < *v15 ) /*0x45603a*/
  {
    v16 = v15[2]; /*0x45603c*/
    v17 = *v15 - v9; /*0x45603f*/
    *v15 = v9; /*0x456043*/
    v15[2] = v17 + v16; /*0x456045*/
  }
  if ( v12 > v15[2] + *v15 ) /*0x456051*/
    v15[2] = v39 + v9 - *v15; /*0x45605d*/
  v18 = v15[1]; /*0x456060*/
  if ( v10 < v18 ) /*0x456068*/
  {
    v19 = v15[3]; /*0x45606a*/
    v15[1] = v10; /*0x456071*/
    v15[3] = v18 - v10 + v19; /*0x456074*/
  }
  if ( v10 + v36 > v15[1] + v15[3] ) /*0x45608f*/
    v15[3] = v36 + v10 - v15[1]; /*0x45609e*/
  LOBYTE(v20) = a2; /*0x4560a1*/
  if ( !(_BYTE)a2 ) /*0x4560a7*/
  {
    v21 = v9 - 1; /*0x4560ad*/
    v22 = v12 + 2; /*0x4560ae*/
    v38 = v21; /*0x4560b3*/
    v40 = v22; /*0x4560b7*/
    if ( v21 < v22 ) /*0x4560bb*/
    {
      LOBYTE(v20) = v10 + v36; /*0x4560c1*/
      v41 = v10 - 1; /*0x4560c6*/
      v23 = v10 + v36 + 2; /*0x4560ca*/
      do /*0x4561dc*/
      {
        v24 = v41; /*0x4560cd*/
        if ( v41 < v23 ) /*0x4560d3*/
        {
          LOWORD(v39) = v21; /*0x4560d9*/
          do /*0x4561c7*/
          {
            owner = this->owner; /*0x4560de*/
            HIWORD(v39) = v24; /*0x4560e4*/
            a2 = v39; /*0x4560ed*/
            v34 = *(_DWORD *)(owner + 48); /*0x4560f8*/
            v26 = (ObjectClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&a2); /*0x4560ff*/
            v20 = sub_486D90(v26, v34); /*0x456106*/
            if ( v20 == 255 ) /*0x456110*/
            {
              v27 = (_DWORD *)(this->owner + 22304); /*0x45611c*/
              v20 = (*(int (__thiscall **)(_DWORD *, int *))(*v27 + 16))(v27, &a2); /*0x456127*/
              if ( v20 != -1 ) /*0x45612d*/
              {
                v28 = v27[4]; /*0x456133*/
                if ( v20 < v28 ) /*0x456138*/
                {
                  v29 = v28 - 1; /*0x45613e*/
                  for ( v27[4] = v29; v20 < v27[4]; *(_DWORD *)(v27[1] + 4 * v20 - 4) = *(_DWORD *)(v27[1] + 4 * v20) ) /*0x456144*/
                    ++v20; /*0x456149*/
                }
              }
            }
            else if ( v20 > 0 ) /*0x45615c*/
            {
              v20 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)(this->owner + 22304) + 16))( /*0x456171*/
                      this->owner + 22304,
                      &a2);
              if ( v20 == -1 ) /*0x456177*/
              {
                v30 = (_DWORD *)(this->owner + 22304); /*0x45617f*/
                v20 = *(_DWORD *)(this->owner + 22312); /*0x456185*/
                if ( *(_DWORD *)(this->owner + 22320) < v20 /*0x4561af*/
                  || (*(_BYTE *)(this->owner + 22317) || !v20)
                  && (v31 = *(_DWORD *)(this->owner + 22324), v31 > 0)
                  && (LOBYTE(v20) = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*v30 + 8))(v30, v20 + v31, 0),
                      (_BYTE)v20) )
                {
                  v20 = v30[4]; /*0x4561b1*/
                  v32 = v30[1]; /*0x4561b4*/
                  v30[4] = v20 + 1; /*0x4561ba*/
                  *(_DWORD *)(v32 + 4 * v20) = a2; /*0x4561c1*/
                }
              }
            }
            ++v24; /*0x4561c4*/
          }
          while ( v24 < v23 ); /*0x4561c7*/
          v21 = v38; /*0x4561cd*/
          v22 = v40; /*0x4561d1*/
        }
        v38 = ++v21; /*0x4561d8*/
      }
      while ( v21 < v22 ); /*0x4561dc*/
    }
  }
  return v20; /*0x4561e2*/
}



// ==== 0x004561F0  ObjectClass::RecalculateBuildingFoundation  this=ObjectClass  sig=csp ====
int __thiscall RecalculateBuildingFoundation(TechnoClass *this)
{
  int v1; // edi
  TechnoClass *v2; // esi
  int v3; // ebp
  int FoundationHeight; // eax
  int owner; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ebx
  __int16 v10; // cx
  int v11; // esi
  _DWORD *v12; // eax
  int v13; // ebx
  int v14; // ebp
  int v15; // edi
  Cell *v16; // eax
  TechnoClass *v17; // eax
  TechnoClass *v18; // esi
  int vtable0; // eax
  int v20; // ebp
  int result; // eax
  int v22; // edx
  int v23; // ebx
  int v24; // edi
  int v25; // eax
  ObjectClass *v26; // eax
  int v27; // eax
  _DWORD *v28; // esi
  int v29; // ecx
  int v30; // ecx
  int v31; // esi
  int v32; // ecx
  int v33; // edx
  _DWORD *v34; // esi
  int v35; // eax
  int v36; // ecx
  int v37; // ecx
  _DWORD *v38; // eax
  int v39; // edx
  int v40; // [esp-4h] [ebp-44h]
  __int16 v42[2]; // [esp+14h] [ebp-2Ch] BYREF
  __int16 v43[2]; // [esp+18h] [ebp-28h] BYREF
  __int16 v44[2]; // [esp+1Ch] [ebp-24h] BYREF
  int v45; // [esp+20h] [ebp-20h]
  __int16 v46; // [esp+26h] [ebp-1Ah]
  int v47; // [esp+28h] [ebp-18h]
  int v48; // [esp+2Ch] [ebp-14h]
  int v49; // [esp+30h] [ebp-10h]
  int v50; // [esp+34h] [ebp-Ch]
  int v51; // [esp+3Ch] [ebp-4h]

  v1 = *(_DWORD *)&dword_8871E0->__pad_13BC[164]; /*0x4561fc*/
  v2 = this; /*0x456202*/
  v3 = 2 * v1 + BuildingTypeClass::GetFoundationWidth(*((BuildingTypeClass **)this + 328)); /*0x456220*/
  FoundationHeight = BuildingTypeClass::GetFoundationHeight((int *)v2[1].vtable0, 0); /*0x456222*/
  owner = v2->owner; /*0x456227*/
  *(_DWORD *)v42 = 2 * v1 + FoundationHeight; /*0x45622f*/
  v48 = 1 << *(_DWORD *)(owner + 48); /*0x456243*/
  v6 = v2->location[0]; /*0x456247*/
  v7 = v2->location[1]; /*0x456249*/
  v51 = v2->location[2]; /*0x45624f*/
  LOWORD(v50) = v6 / 256; /*0x45625f*/
  HIWORD(v50) = v7 / 256; /*0x456272*/
  v8 = (__int16)(v50 - v1); /*0x456281*/
  v9 = v8; /*0x456284*/
  v10 = HIWORD(v50) - v1; /*0x456286*/
  v46 = HIWORD(v50) - v1; /*0x45628b*/
  v45 = v8; /*0x456292*/
  v47 = v8 + v3; /*0x456296*/
  if ( v8 < v8 + v3 ) /*0x45629a*/
  {
    *(_DWORD *)v44 = *(_DWORD *)v42 + v10; /*0x4562a5*/
    do /*0x456303*/
    {
      v11 = v10; /*0x4562ad*/
      if ( v10 < *(int *)v44 ) /*0x4562b2*/
      {
        v49 = ~v48; /*0x4562ba*/
        do /*0x4562f1*/
        {
          v43[0] = v9; /*0x4562c8*/
          v43[1] = v11; /*0x4562cd*/
          v12 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v43); /*0x4562d2*/
          ++v11; /*0x4562e8*/
          v12[55] &= v49; /*0x4562e9*/
        }
        while ( v11 < *(int *)v44 ); /*0x4562f1*/
        v8 = v45; /*0x4562f3*/
        v10 = v46; /*0x4562f7*/
      }
      ++v9; /*0x456300*/
    }
    while ( v9 < v47 ); /*0x456303*/
    v2 = this; /*0x456305*/
  }
  v49 = 2 * v1; /*0x45630e*/
  v13 = v8 - v1; /*0x456314*/
  v50 = v8 + 2 * v1 + v3; /*0x45631a*/
  if ( v8 - v1 < v50 ) /*0x45631e*/
  {
    *(_DWORD *)v43 = v10 - v1; /*0x456335*/
    v14 = v49 + v10 + *(_DWORD *)v42; /*0x456339*/
    do /*0x4563ba*/
    {
      v15 = *(_DWORD *)v43; /*0x45633c*/
      if ( *(int *)v43 < v14 ) /*0x456342*/
      {
        do /*0x4563a4*/
        {
          v44[0] = v13; /*0x45634e*/
          v44[1] = v15; /*0x456353*/
          v16 = (Cell *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v44); /*0x456358*/
          v17 = (TechnoClass *)Cell::IsBridge(v16); /*0x45635f*/
          v18 = v17; /*0x456364*/
          if ( v17 ) /*0x456368*/
          {
            if ( v17 != this ) /*0x45636e*/
            {
              vtable0 = v17[1].vtable0; /*0x456370*/
              if ( (!*(_DWORD *)(vtable0 + 1032) || !*(_BYTE *)(vtable0 + 1516)) /*0x45638e*/
                && !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(v18->vtable0 + 128))(v18) )
              {
                MarkBuildingFoundationCells(v18, 1); /*0x45639c*/
              }
            }
          }
          ++v15; /*0x4563a1*/
        }
        while ( v15 < v14 ); /*0x4563a4*/
        v8 = v45; /*0x4563a6*/
        v10 = v46; /*0x4563aa*/
        v2 = this; /*0x4563af*/
      }
      ++v13; /*0x4563b7*/
    }
    while ( v13 < v50 ); /*0x4563ba*/
  }
  v20 = v8 - 1; /*0x4563bc*/
  result = v47; /*0x4563bf*/
  v22 = v47 + 2; /*0x4563c3*/
  v49 = v47 + 2; /*0x4563c8*/
  if ( v20 >= v47 + 2 ) /*0x4563cc*/
    return result; /*0x4563cc*/
  result = v10; /*0x4563d2*/
  v50 = v10 - 1; /*0x4563d8*/
  v23 = v10 + *(_DWORD *)v42 + 2; /*0x4563e0*/
  do /*0x45656a*/
  {
    v24 = v50; /*0x4563e4*/
    if ( v50 >= v23 ) /*0x4563ea*/
      goto LABEL_47; /*0x4563ea*/
    LOWORD(v47) = v20; /*0x4563f0*/
    do /*0x45655d*/
    {
      v25 = v2->owner; /*0x4563f5*/
      HIWORD(v47) = v24; /*0x4563fb*/
      *(_DWORD *)v42 = v47; /*0x456404*/
      v40 = *(_DWORD *)(v25 + 48); /*0x45640f*/
      v26 = (ObjectClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v42); /*0x456416*/
      v27 = sub_486D90(v26, v40); /*0x45641d*/
      if ( v27 == 255 ) /*0x456427*/
      {
        v28 = (_DWORD *)(v2->owner + 22304); /*0x456433*/
        result = (*(int (__thiscall **)(_DWORD *, __int16 *))(*v28 + 16))(v28, v42); /*0x45643e*/
        if ( result != -1 ) /*0x456444*/
        {
          v29 = v28[4]; /*0x45644a*/
          if ( result < v29 ) /*0x45644f*/
          {
            v30 = v29 - 1; /*0x456455*/
            for ( v28[4] = v30; result < v28[4]; *(_DWORD *)(v28[1] + 4 * result - 4) = *(_DWORD *)(v28[1] + 4 * result) ) /*0x45645b*/
              ++result; /*0x456464*/
          }
        }
      }
      else if ( v27 <= 0 ) /*0x45647a*/
      {
        v34 = (_DWORD *)(v2->owner + 22304); /*0x4564fe*/
        v35 = (*(int (__thiscall **)(_DWORD *, __int16 *))(*v34 + 16))(v34, v42); /*0x456509*/
        if ( v35 != -1 ) /*0x45650f*/
        {
          v36 = v34[4]; /*0x456511*/
          if ( v35 < v36 ) /*0x456516*/
          {
            v37 = v36 - 1; /*0x456518*/
            for ( v34[4] = v37; v35 < v34[4]; *(_DWORD *)(v34[1] + 4 * v35 - 4) = *(_DWORD *)(v34[1] + 4 * v35) ) /*0x45651e*/
              ++v35; /*0x456523*/
          }
        }
        v38 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v42); /*0x45653c*/
        v39 = v38[55]; /*0x456545*/
        result = (int)(v38 + 55); /*0x45654b*/
        *(_DWORD *)result = ~v48 & v39; /*0x456554*/
      }
      else
      {
        result = (*(int (__thiscall **)(int, __int16 *))(*(_DWORD *)(v2->owner + 22304) + 16))(v2->owner + 22304, v42); /*0x456493*/
        if ( result != -1 ) /*0x456499*/
          goto LABEL_45; /*0x456499*/
        v31 = v2->owner + 22304; /*0x4564a5*/
        result = *(_DWORD *)(v31 + 8); /*0x4564ab*/
        if ( *(_DWORD *)(v31 + 16) < result /*0x4564dd*/
          || (*(_BYTE *)(v31 + 13) || !result)
          && (v32 = *(_DWORD *)(v31 + 20), v32 > 0)
          && (result = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v31 + 8))(v31, result + v32, 0),
              (_BYTE)result) )
        {
          result = *(_DWORD *)(v31 + 16); /*0x4564df*/
          v33 = *(_DWORD *)(v31 + 4); /*0x4564e2*/
          *(_DWORD *)(v31 + 16) = result + 1; /*0x4564e8*/
          *(_DWORD *)(v33 + 4 * result) = *(_DWORD *)v42; /*0x4564ef*/
        }
      }
      v2 = this; /*0x456556*/
LABEL_45:
      ++v24; /*0x45655a*/
    }
    while ( v24 < v23 ); /*0x45655d*/
    v22 = v49; /*0x456563*/
LABEL_47:
    ++v20; /*0x456567*/
  }
  while ( v20 < v22 ); /*0x45656a*/
  return result; /*0x456570*/
}



// ==== 0x00456580  BuildingClass::UpdateRevealField  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::UpdateRevealField(BuildingClass *this)
{
  char *Field; // ebx
  int v3; // edi
  int result; // eax

  Field = Diplomacy::GetField(&stru_87F5F0.__pad_58[416], (int)this->Type); /*0x456596*/
  v3 = 0; /*0x456598*/
  result = *((_DWORD *)Field + 4); /*0x45659a*/
  if ( result > 0 ) /*0x45659f*/
  {
    do /*0x4565d0*/
    {
      BuildingClass::ProcessFogCellOccupancy( /*0x4565c5*/
        (int)&stru_87F5F0.__pad_58[416],
        (int)this,
        *(_DWORD *)(*((_DWORD *)Field + 1) + 8 * v3) + this->?,
        this->? + *(_DWORD *)(*((_DWORD *)Field + 1) + 8 * v3 + 4));
      result = *((_DWORD *)Field + 4); /*0x4565ca*/
      ++v3; /*0x4565cd*/
    }
    while ( v3 < result ); /*0x4565d0*/
  }
  this->? = 1; /*0x4565d2*/
  return result; /*0x4565d9*/
}



// ==== 0x004565E0  BuildingClass::UpdateGapGeneratorField  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::UpdateGapGeneratorField(BuildingClass *this)
{
  char *Field; // ebp
  int v3; // edi
  int result; // eax

  Field = Diplomacy::GetField(&stru_87F5F0.__pad_58[416], (int)this->Type); /*0x4565f6*/
  v3 = 0; /*0x4565f8*/
  result = *((_DWORD *)Field + 4); /*0x4565fa*/
  if ( result > 0 ) /*0x4565ff*/
  {
    do /*0x456630*/
    {
      BuildingClass::RemoveGapCellCoverage( /*0x456625*/
        (int)&stru_87F5F0.__pad_58[416],
        (int)this,
        *(_DWORD *)(*((_DWORD *)Field + 1) + 8 * v3) + this->?,
        this->? + *(_DWORD *)(*((_DWORD *)Field + 1) + 8 * v3 + 4));
      result = *((_DWORD *)Field + 4); /*0x45662a*/
      ++v3; /*0x45662d*/
    }
    while ( v3 < result ); /*0x456630*/
  }
  this->? = 0; /*0x456632*/
  return result; /*0x456639*/
}



// ==== 0x00456640  BuildingClass::UpdateDetectionField  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::UpdateDetectionField(BuildingClass *this)
{
  char *Field; // ebx
  int v3; // esi
  int result; // eax
  int v5; // ecx
  int v6; // eax
  int currentBarrelIndex; // edx
  int v8; // ecx
  _DWORD v9[2]; // [esp+Ch] [ebp-8h] BYREF

  Field = Diplomacy::GetField(&stru_87F5F0.__pad_58[416], (int)this->Type); /*0x456659*/
  v3 = 0; /*0x45665b*/
  result = *((_DWORD *)Field + 4); /*0x45665d*/
  if ( result > 0 ) /*0x456662*/
  {
    do /*0x45669d*/
    {
      v5 = *((_DWORD *)Field + 1); /*0x456664*/
      v6 = *(_DWORD *)(v5 + 8 * v3) + this->?; /*0x456673*/
      currentBarrelIndex = this->?; /*0x456675*/
      v8 = *(_DWORD *)(v5 + 8 * v3 + 4); /*0x45667b*/
      v9[0] = v6; /*0x45667e*/
      v9[1] = currentBarrelIndex + v8; /*0x456688*/
      FogOfWar::RevealCell((int)&stru_87F5F0.__pad_58[416], v9); /*0x456692*/
      result = *((_DWORD *)Field + 4); /*0x456697*/
      ++v3; /*0x45669a*/
    }
    while ( v3 < result ); /*0x45669d*/
  }
  return result; /*0x45669f*/
}



// ==== 0x004566B0  BuildingClass::GetPowerFrame  this=IUnknown  sig=csp ====
int __thiscall BuildingClass::GetPowerFrame(TechnoClass *this)
{
  int v2; // ecx
  int result; // eax
  _DWORD *updated; // edi
  int v6; // eax

  v2 = this->q148; /*0x4566b7*/
  result = *(_DWORD *)(v2 + 5900); /*0x4566bd*/
  if ( result <= 0 ) /*0x4566c5*/
  {
    if ( *(_BYTE *)(v2 + 3281) ) /*0x4566cb*/
    {
      if ( this->gapSuperCharged ) /*0x4566d5*/
        return *(char *)(v2 + 3283); /*0x4566df*/
      else
        return *(char *)(v2 + 3282); /*0x4566ec*/
    }
    else if ( *(_BYTE *)(v2 + 5832) || *(_BYTE *)(v2 + 5831) ) /*0x456703*/
    {
      return *(char *)(v2 + 5895); /*0x45673e*/
    }
    else
    {
      updated = (_DWORD *)TechnoClass::UpdatePowered(this); /*0x456714*/
      if ( (unsigned __int8)IsNonNullPtr(updated) && (v6 = *(_DWORD *)(*updated + 180), v6 > 0) ) /*0x45672c*/
        return v6 / 256; /*0x456739*/
      else
        return 0; /*0x456749*/
    }
  }
  return result; /*0x4566e5*/
}



// ==== 0x00456750  BuildingClass::DrawDeployCircle  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::DrawDeployCircle(BuildingClass *this)
{
  double v1; // st7
  int result; // eax
  char *v4; // ecx
  DWORD Time; // eax
  char v6; // ecx^3
  int v7; // edi
  int *v8; // eax
  int v9; // eax
  HouseClass *owner; // ecx
  int *v11; // eax
  HouseClass *v12; // ecx
  int *v13; // eax
  int v14; // [esp+0h] [ebp-2Ch]
  int v15; // [esp+0h] [ebp-2Ch]
  int v16; // [esp+0h] [ebp-2Ch]
  float v17; // [esp+4h] [ebp-28h]
  float v18; // [esp+4h] [ebp-28h]
  float v19; // [esp+4h] [ebp-28h]
  int v20; // [esp+18h] [ebp-14h]
  int v21[3]; // [esp+20h] [ebp-Ch] BYREF
  Color v22; // [esp+30h] [ebp+4h] BYREF

  result = BuildingClass::GetPowerFrame((TechnoClass *)this); /*0x456757*/
  v20 = result; /*0x45675e*/
  if ( result > 0 ) /*0x456762*/
  {
    LOBYTE(result) = this->HasPower; /*0x456768*/
    if ( (_BYTE)result ) /*0x456770*/
    {
      result = House::IsHumanPlayer((House *)this->?); /*0x45677c*/
      if ( (_BYTE)result ) /*0x456783*/
      {
        if ( this->Type->ConcentricRadialIndicator ) /*0x45678f*/
        {
          if ( (byte_89C838 & 1) == 0 ) /*0x4567a4*/
          {
            byte_89C800 = -1; /*0x4567b0*/
            byte_89C838 |= 1u; /*0x4567b7*/
            byte_89C801 = -1; /*0x4567bd*/
            byte_89C802 = -1; /*0x4567c4*/
            atexit(nullsub_103); /*0x4567cb*/
          }
          v4 = (char *)&this->?->base[4] + 1; /*0x4567d9*/
          LOWORD(v22.Color_field_00) = *(_WORD *)v4; /*0x4567e2*/
          BYTE2(v22.Color_field_00) = v4[2]; /*0x4567ea*/
          Time = timeGetTime(); /*0x4567ee*/
          v7 = (Time >> 1) & 0x3FF; /*0x4567f8*/
          if ( ((Time >> 1) & 0x200) == 0 ) /*0x456804*/
          {
            if ( ((Time >> 1) & 0x100) == 0 ) /*0x45680c*/
              Color::Lerp(&v22, ~(Time >> 1), &byte_89C800); /*0x456822*/
            v17 = (float)v20; /*0x456835*/
            HIBYTE(v14) = v6; /*0x456838*/
            LOWORD(v14) = v22.Color_field_00; /*0x45683f*/
            BYTE2(v14) = BYTE2(v22.Color_field_00); /*0x456847*/
            v8 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 18))(this, v21); /*0x45684e*/
            DrawTechnoDeployCircle(0, 0, *v8, v8[1], v8[2], v14, v17, 0, 1); /*0x45686a*/
          }
          Math::Sqrt(2.0); /*0x456884*/
          LOWORD(v9) = Math::RoundToInt(((double)v20 + 0.5) / v1 * 60.0); /*0x456896*/
          result = (unsigned int)(v7 * v9) >> 10; /*0x45689e*/
          if ( (unsigned int)result > 0x20 ) /*0x4568a4*/
          {
            owner = this->?; /*0x4568bf*/
            v18 = (float)(unsigned int)result; /*0x4568cb*/
            v15 = (int)&owner->base[4] + 1; /*0x4568ce*/
            LOWORD(v15) = *(_WORD *)((char *)&owner->base[4] + 1); /*0x4568d7*/
            BYTE2(v15) = HIBYTE(owner->base[4]); /*0x4568df*/
            v11 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 18))(this, v21); /*0x4568e6*/
            LOBYTE(result) = DrawTechnoDeployCircle(0, 0, *v11, v11[1], v11[2], v15, v18, 1, 1); /*0x456902*/
          }
        }
        else
        {
          v12 = this->?; /*0x456918*/
          v19 = (float)v20; /*0x456924*/
          v16 = (int)&v12->base[4] + 1; /*0x456927*/
          LOWORD(v16) = *(_WORD *)((char *)&v12->base[4] + 1); /*0x456930*/
          BYTE2(v16) = HIBYTE(v12->base[4]); /*0x456938*/
          v13 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 18))(this, v21); /*0x45693f*/
          LOBYTE(result) = DrawTechnoDeployCircle(v22.Color_field_00, 1, *v13, v13[1], v13[2], v16, v19, 0, 1); /*0x45695d*/
        }
      }
    }
  }
  return result; /*0x456907*/
}



// ==== 0x00456970  nullsub_103  this=-  sig=ida-proto ====
void __cdecl nullsub_103()
{
  ; /*0x456970*/
}



// ==== 0x00456980  DrawTechnoDeployCircle  this=-  sig=csp ====
char __fastcall sub_456980(char a1, char a2, int a3, int a4, int a5, int a6, float a7, char a8, char a9)
{
  double v9; // st7
  int v10; // eax
  double v11; // st7
  int v12; // esi
  double *v13; // edx
  int v14; // eax
  double v15; // st7
  double *v16; // ebx
  double v17; // st7
  double v18; // st7
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // esi
  int v23; // eax
  double v24; // st7
  double v25; // st7
  int v26; // esi
  int v27; // eax
  int v28; // edi
  double v29; // st7
  float v31; // [esp+5Ch] [ebp-8Ch]
  __int16 v34; // [esp+70h] [ebp-78h] BYREF
  char v35; // [esp+72h] [ebp-76h]
  int v36; // [esp+74h] [ebp-74h]
  double v37; // [esp+78h] [ebp-70h]
  __int16 v38; // [esp+80h] [ebp-68h]
  unsigned __int8 v39; // [esp+82h] [ebp-66h]
  int v40; // [esp+88h] [ebp-60h] BYREF
  int v41; // [esp+8Ch] [ebp-5Ch]
  double v42; // [esp+90h] [ebp-58h]
  double v43; // [esp+98h] [ebp-50h]
  double v44; // [esp+A0h] [ebp-48h]
  double v45; // [esp+A8h] [ebp-40h]
  double v46; // [esp+B0h] [ebp-38h]
  _DWORD v47[4]; // [esp+B8h] [ebp-30h] BYREF
  double v48; // [esp+C8h] [ebp-20h] BYREF
  int v49[4]; // [esp+D8h] [ebp-10h] BYREF

  v9 = a7; /*0x45698d*/
  if ( a9 ) /*0x45699c*/
    v9 = (double)(int)Math::RoundToInt(v9); /*0x4569a7*/
  if ( a8 ) /*0x4569b0*/
  {
    v10 = Math::RoundToInt(v9); /*0x4569b2*/
  }
  else
  {
    v48 = v9 + 0.5; /*0x4569c6*/
    v11 = Math::Sqrt(2.0); /*0x4569ca*/
    v10 = Math::RoundToInt(v48 / v11 * 60.0); /*0x4569dc*/
  }
  v12 = v10; /*0x4569e1*/
  v36 = v10; /*0x4569f2*/
  Coord::To_Screen(g_TacticalClass_Instance, &a3, &v40); /*0x4569f6*/
  v40 += DSurface_ViewBounds; /*0x456a11*/
  v41 += dword_886FA4; /*0x456a20*/
  v49[1] = v41 - v12 / 2; /*0x456a2f*/
  LODWORD(v37) = v12 / 2; /*0x456a48*/
  v49[0] = v40 - v12; /*0x456a4c*/
  v49[2] = 2 * v12; /*0x456a53*/
  v49[3] = v12; /*0x456a5a*/
  v13 = (double *)ClipRectIntersection(v47, v49, &DSurface_ViewBounds, 0, 0); /*0x456a66*/
  v48 = *v13; /*0x456a6a*/
  v14 = *((_DWORD *)v13 + 2); /*0x456a75*/
  if ( v14 > 0 && *((int *)v13 + 3) > 0 ) /*0x456a85*/
  {
    v39 = BYTE2(a6); /*0x456a92*/
    v34 = 0; /*0x456a9c*/
    v35 = 0; /*0x456aa6*/
    v38 = a6; /*0x456aab*/
    if ( a2 ) /*0x456ab0*/
      Color::Lerp(50, &v34); /*0x456abd*/
    (*(void (__thiscall **)(int, int, int, int, int, int, int, int, int, int))(*(_DWORD *)g_DSurface_Hidden_2 + 32))( /*0x456b57*/
      g_DSurface_Hidden_2,
      v40,
      v41,
      v12,
      v12 / 2,
      DSurface_ViewBounds,
      dword_886FA4,
      dword_886FA8,
      dword_886FAC,
      ((unsigned __int8)v38 >> g_BitShift_Green_0 << g_BitShift_Red)
    | (HIBYTE(v38) >> g_BitMask_Blue << g_BitMask_Green)
    | (v39 >> g_BitMask_Red << g_BitShift_Blue));
    (*(void (__thiscall **)(int, int, int, int, int, int, int, int, int, int))(*(_DWORD *)g_DSurface_Hidden_2 + 32))( /*0x456beb*/
      g_DSurface_Hidden_2,
      v40,
      v41,
      v12 - 1,
      v12 / 2 - 1,
      DSurface_ViewBounds,
      dword_886FA4,
      dword_886FA8,
      dword_886FAC,
      ((unsigned __int8)v38 >> g_BitShift_Green_0 << g_BitShift_Red)
    | (HIBYTE(v38) >> g_BitMask_Blue << g_BitMask_Green)
    | (v39 >> g_BitMask_Red << g_BitShift_Blue));
    LOBYTE(v14) = a1; /*0x456bee*/
    if ( a1 ) /*0x456bf4*/
    {
      v15 = (double)v36; /*0x456bfa*/
      v36 = 0; /*0x456bfe*/
      v16 = (double *)&dword_818CC8; /*0x456c06*/
      v43 = v15; /*0x456c0b*/
      v42 = (double)SLODWORD(v37); /*0x456c13*/
      do /*0x456c23*/
      {
        LODWORD(v37) = (char *)dword_A8ED84 + v36; /*0x456c23*/
        v17 = (double)((int)dword_A8ED84 + v36) * 0.005; /*0x456c2b*/
        v37 = v17 - (double)(int)Math::RoundToInt(v17) * 6.283185307179586; /*0x456c4e*/
        if ( fabs(v37 - 1.570796326794897) >= 0.001 ) /*0x456c6b*/
        {
          if ( fabs(v37 - 4.71238898038469) >= 0.001 ) /*0x456ca1*/
          {
            v24 = Math::Sin(v37); /*0x456cb3*/
            v45 = v42 * v42; /*0x456cc0*/
            v44 = v43 * v43; /*0x456ccc*/
            v46 = Math::Sqrt(1.0 / (v24 * v24 / v45 + 1.0 / v44)); /*0x456cf4*/
            v25 = Math::Sqrt((1.0 - v46 * v46 / v44) * v45); /*0x456d0f*/
            if ( v37 < 3.141592653589793 ) /*0x456d54*/
              v25 = -v25; /*0x456d5a*/
            v26 = Math::RoundToInt(v25); /*0x456d61*/
            v27 = Math::RoundToInt(v25); /*0x456d63*/
            v21 = v40; /*0x456d68*/
            v20 = v41; /*0x456d6c*/
            v28 = v26 + v40; /*0x456d70*/
            v22 = v41 + v27; /*0x456d73*/
            v23 = v28; /*0x456d76*/
            goto LABEL_20; /*0x456d76*/
          }
          v18 = v42; /*0x456ca3*/
        }
        else
        {
          v18 = -v42; /*0x456c71*/
        }
        v19 = Math::RoundToInt(v18); /*0x456c73*/
        v20 = v41; /*0x456c78*/
        v21 = v40; /*0x456c7c*/
        v22 = v41 + v19; /*0x456c80*/
        v23 = v40; /*0x456c83*/
LABEL_20:
        v29 = *v16; /*0x456d78*/
        v47[0] = v23 - DSurface_ViewBounds; /*0x456d88*/
        HIDWORD(v48) = v20 - dword_886FA4; /*0x456d91*/
        LODWORD(v48) = v21 - DSurface_ViewBounds; /*0x456da3*/
        v31 = v29; /*0x456da7*/
        v47[1] = v22 - dword_886FA4; /*0x456dc9*/
        LOBYTE(v14) = (*(int (__thiscall **)(int, int *, double *, _DWORD *, int *, int, int, _DWORD, int, int, int, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2 + 60))( /*0x456dd8*/
                        g_DSurface_Hidden_2,
                        &DSurface_ViewBounds,
                        &v48,
                        v47,
                        &a6,
                        -500,
                        -500,
                        0,
                        1,
                        1,
                        1,
                        LODWORD(v31));
        ++v16; /*0x456ddf*/
        ++v36; /*0x456de9*/
      }
      while ( (int)v16 < (int)aStructures ); /*0x456c23*/
    }
  }
  return v14; /*0x456df5*/
}



// ==== 0x00456E00  BuildingClass::AcquireTarget  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::AcquireTarget(BuildingClass *this)
{
  int v2; // eax
  int v3; // edi
  BuildingClass *v4; // eax
  _DWORD *v5; // eax
  int v6; // ecx
  int Translucency; // ebx
  int *v8; // ecx
  int v9; // ebp
  bool v10; // zf
  int v11; // ebx
  int *v12; // ecx
  int v13; // esi
  int result; // eax
  int v15; // [esp+10h] [ebp-Ch]
  int v16; // [esp+14h] [ebp-8h]
  int v17; // [esp+20h] [ebp+4h]
  int *Anims; // [esp+20h] [ebp+4h]

  if ( v17 ) /*0x456e0f*/
    this->? = 1; /*0x456e11*/
  TechnoClass::SetTargetIfAllowed((TechnoClass *)this, v17); /*0x456e1b*/
  v16 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 121))(this); /*0x456e2e*/
  v2 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 111))(this); /*0x456e32*/
  v3 = (*((int (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 281))(this, *(__int16 *)(v2 + 266)); /*0x456e4a*/
  if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 88))(this)
    || this->?
    && (this ? (v4 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 11))(this) == 6 ? this : 0) : (v4 = 0),
        (BuildingClass *)this->?->AirstrikeClass_field_50 == v4) )
  {
    LOWORD(v3) = Techno::StartInvulnerability(v3); /*0x456e91*/
  }
  *(_WORD *)this->BuildingClass_field_short_700 = v3; /*0x456e93*/
  Anims = this->Anims; /*0x456eaa*/
  v15 = 21; /*0x456eae*/
  do /*0x456f36*/
  {
    v5 = (_DWORD *)*Anims; /*0x456eba*/
    if ( *Anims ) /*0x456eba*/
    {
      v6 = v5[50]; /*0x456ec0*/
      if ( v6 && *(_BYTE *)(v6 + 860) ) /*0x456eca*/
      {
        v5[53] = v16; /*0x456edc*/
        v5[63] = (unsigned __int16)v3; /*0x456ee2*/
      }
      Translucency = this->Translucency; /*0x456ee8*/
      if ( Translucency == 15 /*0x456f02*/
        && (*((int (__thiscall **)(BuildingClass *, _DWORD, _DWORD))this->TechnoClass + 26))(this, 0, 0) == 5 )
      {
        LOBYTE(Translucency) = 16; /*0x456f04*/
      }
      v8 = this->Anims; /*0x456f09*/
      v9 = 21; /*0x456f0b*/
      do /*0x456f20*/
      {
        if ( *v8 ) /*0x456f10*/
          *(_BYTE *)(*v8 + 376) = Translucency; /*0x456f16*/
        ++v8; /*0x456f1c*/
        --v9; /*0x456f1f*/
      }
      while ( v9 ); /*0x456f20*/
    }
    v10 = v15 == 1; /*0x456f2d*/
    ++Anims; /*0x456f2e*/
    --v15; /*0x456f32*/
  }
  while ( !v10 ); /*0x456f36*/
  v11 = this->Translucency; /*0x456f3c*/
  if ( v11 == 15 && (*((int (__thiscall **)(BuildingClass *, _DWORD, _DWORD))this->TechnoClass + 26))(this, 0, 0) == 5 ) /*0x456f56*/
    LOBYTE(v11) = 16; /*0x456f58*/
  v12 = this->Anims; /*0x456f5d*/
  v13 = 21; /*0x456f5f*/
  do /*0x456f74*/
  {
    result = *v12; /*0x456f64*/
    if ( *v12 ) /*0x456f64*/
      *(_BYTE *)(result + 376) = v11; /*0x456f6a*/
    ++v12; /*0x456f70*/
    --v13; /*0x456f73*/
  }
  while ( v13 ); /*0x456f74*/
  return result; /*0x456f76*/
}



// ==== 0x00456F80  TechnoClass::ProcessMissionDeploy  this=BuildingClass  sig=csp ====
int __thiscall TechnoClass::ProcessMissionDeploy(TechnoClass *this)
{
  int result; // eax
  int v2; // [esp+4h] [ebp+4h]

  result = v2; /*0x456f8b*/
  if ( (this->flashing[0] & 2) == 2 ) /*0x456f8f*/
  {
    if ( v2 <= 1500 ) /*0x456f96*/
      return v2 + 500; /*0x456fa0*/
    else
      return v2 - 500; /*0x456f98*/
  }
  return result; /*0x456f9d*/
}



// ==== 0x00456FB0  globalHelper_056FB0  this=BuildingClass  sig=csp ====
int __fastcall sub_456FB0(_DWORD *a1, int a2, int a3)
{
  int v4; // edi
  _DWORD *v5; // eax

  v4 = (*(int (__thiscall **)(_DWORD *, int))(*a1 + 1124))(a1, a3); /*0x456fc7*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 352))(a1) ) /*0x456fc9*/
    return Techno::StartInvulnerability(v4); /*0x456fc9*/
  if ( a1[165]
    && (a1 ? (v5 = (*(int (__thiscall **)(_DWORD *))(*a1 + 44))(a1) == 6 ? a1 : 0) : (v5 = 0),
        *(_DWORD **)(a1[165] + 80) == v5) )
  {
    return Techno::StartInvulnerability(v4); /*0x457005*/
  }
  else
  {
    return v4; /*0x45700f*/
  }
}



// ==== 0x00457020  BuildingClass::IsCellVisibleToPlayer  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::IsCellVisibleToPlayer(BuildingClass *this)
{
  int result; // eax
  _DWORD *v3; // eax
  int v4; // ebx
  int v5; // ebp
  int v6; // esi
  int v7; // ebx
  bool v8; // bl
  int v9; // [esp+8h] [ebp-20h]
  __int16 v10[2]; // [esp+Ch] [ebp-1Ch] BYREF
  _DWORD v11[3]; // [esp+10h] [ebp-18h] BYREF
  _DWORD v12[3]; // [esp+1Ch] [ebp-Ch] BYREF
  _DWORD *v13; // [esp+2Ch] [ebp+4h]

  result = (int)this->Type; /*0x457027*/
  if ( *(_BYTE *)(result + 3226) || this->? ) /*0x45703b*/
    goto LABEL_22; /*0x45703b*/
  result = House::IsHumanPlayer((House *)this->?); /*0x45704f*/
  if ( (_BYTE)result ) /*0x457056*/
  {
    LOBYTE(result) = this->? != 0; /*0x457061*/
    return result; /*0x457068*/
  }
  v3 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD *))this->TechnoClass + 18))(this, v12); /*0x457074*/
  LOWORD(v9) = *v3 / 256; /*0x457089*/
  HIWORD(v9) = v3[1] / 256; /*0x4570a1*/
  *(_DWORD *)v10 = v9; /*0x4570aa*/
  result = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v10, 1); /*0x4570b4*/
  if ( !(_BYTE)result ) /*0x4570bb*/
    goto LABEL_22; /*0x4570bb*/
  v4 = (BuildingTypeClass::GetFoundationHeight((int *)this->Type, 0) << 8) - 256; /*0x4570db*/
  v5 = (BuildingTypeClass::GetFoundationWidth(this->Type) << 8) - 256; /*0x4570f5*/
  v11[0] = this->?[0]; /*0x4570fb*/
  v11[1] = this->?[1]; /*0x45710c*/
  v11[2] = this->?[2]; /*0x457113*/
  v8 = 0; /*0x457154*/
  if ( (unsigned __int8)Cell::IsPassable(v11) ) /*0x457117*/
  {
    v6 = this->?[2]; /*0x457125*/
    v7 = this->?[1] + v4; /*0x45712e*/
    v12[0] = v5 + this->?[0]; /*0x457136*/
    v12[1] = v7; /*0x45713a*/
    v12[2] = v6; /*0x45713e*/
    if ( (unsigned __int8)Cell::IsPassable(v12) ) /*0x457142*/
    {
      if ( g_hWnd ) /*0x457152*/
        v8 = 1; /*0x45711e*/
    }
  }
  result = this->?; /*0x45715a*/
  if ( result != 2 && this->Translucency != 15 && !this->IsFogged && !v8 ) /*0x45717c*/
  {
    LOBYTE(result) = 1; /*0x45717f*/
    return result; /*0x457185*/
  }
  result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 202))(this); /*0x45718c*/
  if ( !(_BYTE)result ) /*0x457194*/
  {
LABEL_22:
    LOBYTE(result) = 0; /*0x4571cf*/
  }
  else
  {
    result = HouseClass::IsAlliedWith((#375 *)dword_A83D4C, (#375 *)this->?); /*0x4571a3*/
    if ( !(_BYTE)result && !this->IsFogged && !v8 ) /*0x4571b8*/
      *v13 = 1; /*0x4571be*/
    LOBYTE(result) = 1; /*0x4571c5*/
  }
  return result; /*0x45705e*/
}



// ==== 0x004571E0  BuildingClass::Infiltrate  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::Infiltrate(BuildingClass *this, void *a2)
{
  House *v3; // edi
  HouseClass *owner; // ecx
  int *v5; // eax
  BuildingTypeClass *Type; // ecx
  int v7; // esi
  int v8; // eax
  BuildingTypeClass **v9; // edx
  int SuperWeapon; // eax
  int AIBasePlanningSide; // ecx
  int v12; // eax
  int v13; // esi
  int v14; // ecx
  char v15; // [esp+Bh] [ebp-1h]

  v3 = (House *)a2; /*0x4571e5*/
  owner = this->?; /*0x4571e9*/
  v15 = 0; /*0x4571ef*/
  if ( owner != a2 ) /*0x4571f6*/
  {
    if ( (unsigned __int8)House::IsHumanPlayer((House *)owner) || (unsigned __int8)House::IsHumanPlayer(v3) ) /*0x45720e*/
    {
      v5 = (int *)(*((int (__thiscall **)(BuildingClass *, void **))this->TechnoClass + 110))(this, &a2); /*0x457221*/
      if ( (unsigned __int8)CreateTriggerClassIfFarEnough(9, *v5, *v5) ) /*0x45722f*/
        v15 = 1; /*0x457238*/
    }
    Type = this->Type; /*0x45723c*/
    if ( Type->__pad_1624[128] ) /*0x457242*/
    {
      HouseClass::ReshroudMap(this->?); /*0x457252*/
      if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) /*0x45727c*/
        && !BYTE2(this->?->HouseClass_field_timer_B[2])
        && v15 )
      {
        VoxClass::FindAndPlay((VoxClass *)g_Str_EVA_BuildingInfiltrated.Type, -1); /*0x457288*/
      }
      if ( (unsigned __int8)House::IsHumanPlayer(v3) && !BYTE2(this->?->HouseClass_field_timer_B[2]) ) /*0x4572a2*/
      {
        if ( v15 ) /*0x4572b6*/
          VoxClass::FindAndPlay((VoxClass *)g_Str_EVA_BuildingInfiltrated.YuriVoice, -1); /*0x4572c6*/
      }
      goto LABEL_64; /*0x4572c6*/
    }
    if ( Type->PowerBonus > 0 ) /*0x4572d9*/
    {
      HouseClass::CreatePowerOutage((int)this->?, *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3428)); /*0x4572e8*/
      if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) && v15 ) /*0x457302*/
      {
        VoxClass::FindAndPlay((VoxClass *)&g_Str_EVA_BuildingInfiltrated.Name[6], -1); /*0x45730e*/
      }
      else if ( (unsigned __int8)House::IsHumanPlayer(v3) && v15 ) /*0x457328*/
      {
        VoxClass::FindAndPlay(&g_Str_EVA_BuildingInfiltrated, -1); /*0x457338*/
        VoxClass::FindAndPlay((VoxClass *)aEvaEnemybasepo, -1); /*0x457347*/
      }
      goto LABEL_64; /*0x45730e*/
    }
    v7 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2348); /*0x45734c*/
    v8 = 0; /*0x457352*/
    if ( v7 <= 0 ) /*0x457356*/
    {
LABEL_26:
      SuperWeapon = Type->SuperWeapon; /*0x45736a*/
      if ( SuperWeapon != -1 ) /*0x457373*/
      {
        SuperClass::Reset(*(SuperClass **)(this->?->supersCount + 4 * SuperWeapon)); /*0x457388*/
        if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) || (unsigned __int8)House::IsHumanPlayer(v3) && v15 ) /*0x4573b1*/
          VoxClass::FindAndPlay(&g_Str_EVA_BuildingInfiltrated, -1); /*0x4573c1*/
        goto LABEL_64; /*0x4573c1*/
      }
      if ( Type->? > 0 ) /*0x45741c*/
      {
        a2 = (void *)(*(int (__stdcall **)(int *))(this->?->arrayIndex + 24))(&this->?->arrayIndex); /*0x457437*/
        LOWORD(v12) = Math::RoundToInt((double)(int)a2 * *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3432)); /*0x457445*/
        v13 = v12; /*0x457450*/
        HouseClass::ProcessPowerDrain((int *)this->?, v12); /*0x457453*/
        HouseClass::AddPower((HouseClass *)v3, v13); /*0x45745b*/
        if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) && v15 ) /*0x457475*/
          VoxClass::FindAndPlay((VoxClass *)&stru_818E00.Flamer, -1); /*0x457481*/
        if ( (unsigned __int8)House::IsHumanPlayer(v3) && v15 ) /*0x45749b*/
          VoxClass::FindAndPlay((VoxClass *)&stru_818E00.RunningFrames, -1); /*0x4574ab*/
        goto LABEL_64; /*0x4574ab*/
      }
      v14 = Type->Factory[0]; /*0x4574b0*/
      if ( v14 != 40 ) /*0x4574b9*/
      {
        if ( v14 != 16 ) /*0x45751a*/
          goto LABEL_64; /*0x45751a*/
        v3->__pad_2B0[15] = 1; /*0x45751e*/
        v3->__pad_1F0[12] = 1; /*0x457524*/
        if ( (unsigned __int8)House::IsHumanPlayer(v3) ) /*0x45752a*/
          byte_884B8E = 1; /*0x457533*/
        if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) && v15 ) /*0x45754e*/
          VoxClass::FindAndPlay((VoxClass *)&stru_818E00.TiberiumSpawnType, -1); /*0x45755a*/
        if ( !(unsigned __int8)House::IsHumanPlayer(v3) || !v15 ) /*0x457570*/
          goto LABEL_64; /*0x457570*/
LABEL_63:
        VoxClass::FindAndPlay(&g_Str_EVA_BuildingInfiltrated, -1); /*0x457572*/
        VoxClass::FindAndPlay((VoxClass *)&stru_818E00.MinZVel[1], -1); /*0x45758b*/
LABEL_64:
        (*((void (__thiscall **)(BuildingClass *, int))this->TechnoClass + 73))(this, 2); /*0x457590*/
        return; /*0x457597*/
      }
      v3->__pad_2B0[16] = 1; /*0x4574bd*/
      v3->__pad_1F0[12] = 1; /*0x4574c3*/
      if ( (unsigned __int8)House::IsHumanPlayer(v3) ) /*0x4574c9*/
        byte_884B8E = 1; /*0x4574d2*/
      if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) && v15 ) /*0x4574ed*/
        goto LABEL_51; /*0x4574ed*/
    }
    else
    {
      v9 = *(BuildingTypeClass ***)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2336); /*0x457358*/
      while ( *v9 != Type ) /*0x457360*/
      {
        ++v8; /*0x457362*/
        ++v9; /*0x457363*/
        if ( v8 >= v7 ) /*0x457368*/
          goto LABEL_26; /*0x457368*/
      }
      AIBasePlanningSide = Type->?; /*0x4573c6*/
      if ( AIBasePlanningSide ) /*0x4573ce*/
      {
        if ( AIBasePlanningSide == 1 ) /*0x4573da*/
          v3->__pad_2B0[13] = 1; /*0x4573dc*/
        else
          v3->__pad_2B0[12] = 1; /*0x4573e4*/
      }
      else
      {
        v3->__pad_2B0[14] = 1; /*0x4573d0*/
      }
      v3->__pad_1F0[12] = 1; /*0x4573ea*/
      if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) && v15 ) /*0x457409*/
LABEL_51:
        VoxClass::FindAndPlay((VoxClass *)&stru_818E00.TiberiumSpawnType, -1); /*0x4574ef*/
    }
    if ( !(unsigned __int8)House::IsHumanPlayer(v3) || !v15 ) /*0x457513*/
      goto LABEL_64; /*0x457513*/
    goto LABEL_63; /*0x457513*/
  }
}



// ==== 0x004575B0  HouseClass::Add  this=HouseClass  sig=csp ====
int __thiscall HouseClass::Add(HouseClass *this)
{
  char i; // al
  int v3; // ecx
  int v4; // eax

  for ( i = BYTE2(this->builtInfantryTypes[246]); i > 0; i = BYTE2(this->builtInfantryTypes[246]) ) /*0x4575c1*/
  {
    v3 = this->builtInfantryTypes[i + 176]; /*0x4575c7*/
    v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v3 + 184))(v3, this->planningPaths[3], 1); /*0x4575d7*/
    HouseClass::AddPower((HouseClass *)this->planningPaths[3], v4); /*0x4575e4*/
    BuildingClass::ClearSuperWeaponAnim((BuildingClass *)this); /*0x4575eb*/
    *(_BYTE *)(this->planningPaths[3] + 22392) = 1; /*0x4575f6*/
    *(_BYTE *)(this->planningPaths[3] + 22393) = 1; /*0x457602*/
  }
  return (*((int (__thiscall **)(HouseClass *, int))this->AbstractClass + 104))(this, 1); /*0x45761d*/
}



// ==== 0x00457620  BuildingClass::IsFactorySelectable  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::IsFactorySelectable(BuildingClass *this)
{
  int result; // eax

  LOBYTE(result) = BuildingClass::Is1x1AndUndeployable_BuildingMassSelectable((BuildingClass *)this->Type); /*0x457626*/
  return result;
}



// ==== 0x00457630  BuildingClass::SWAvailable  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::SWAvailable(BuildingClass *this)
{
  int SuperWeapon; // eax
  int v3; // eax

  SuperWeapon = this->Type->SuperWeapon; /*0x457639*/
  if ( SuperWeapon == -1 ) /*0x457642*/
    return this->Type->SuperWeapon; /*0x457642*/
  v3 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_A83CBC + SuperWeapon) + 40) + 200); /*0x457650*/
  if ( !v3 || DynamicVector::GetOrGrow((DynamicVector *)this->?->ownedInfantryTypes2, *(_DWORD *)(v3 + 3576)) ) /*0x45766d*/
    return this->Type->SuperWeapon; /*0x457682*/
  else
    return -1; /*0x457676*/
}



// ==== 0x00457690  BuildingClass::SW2Available  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::SW2Available(BuildingClass *this)
{
  int SuperWeapon2; // eax
  int v3; // eax

  SuperWeapon2 = this->Type->SuperWeapon2; /*0x457699*/
  if ( SuperWeapon2 == -1 ) /*0x4576a2*/
    return this->Type->SuperWeapon2; /*0x4576a2*/
  v3 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_A83CBC + SuperWeapon2) + 40) + 200); /*0x4576b0*/
  if ( !v3 || DynamicVector::GetOrGrow((DynamicVector *)this->?->ownedInfantryTypes2, *(_DWORD *)(v3 + 3576)) ) /*0x4576cd*/
    return this->Type->SuperWeapon2; /*0x4576e2*/
  else
    return -1; /*0x4576d6*/
}



// ==== 0x004576F0  BuildingClass::DestroyOnBridgeCollapse  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::DestroyOnBridgeCollapse(BuildingClass *this)
{
  int result; // eax
  int i; // edi
  int v4; // esi
  _DWORD *v5; // eax
  CellClass *v6; // eax
  BuildingClass *v7; // eax
  BuildingClass *v8; // ecx
  _BYTE v9[12]; // [esp+8h] [ebp-Ch] BYREF

  result = *(_DWORD *)&stru_A83D50.__pad_80[40]; /*0x4576f0*/
  for ( i = 0; i < *(int *)&stru_A83D50.__pad_80[40]; ++i ) /*0x457700*/
  {
    v4 = *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_80[28] + 4 * i); /*0x45770a*/
    v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)v4 + 76))(v4, v9, 0); /*0x457716*/
    v6 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v5); /*0x45771f*/
    v7 = (BuildingClass *)Cell::IsBridge((Cell *)v6); /*0x457726*/
    if ( *(_BYTE *)(v4 + 144) ) /*0x45772b*/
    {
      if ( v7 ) /*0x457737*/
      {
        if ( v7 == this ) /*0x45773b*/
        {
          v8 = *(BuildingClass **)(v4 + 1444); /*0x45773d*/
          if ( !v8 || v8 == v7 ) /*0x457749*/
            (*(void (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)v4 + 372))(v4, &g_BuildingClassPool, 1, 1); /*0x457758*/
        }
      }
    }
    result = *(_DWORD *)&stru_A83D50.__pad_80[40]; /*0x45775e*/
  }
  return result; /*0x457769*/
}



// ==== 0x00457770  BuildingClass::UpdateCloak  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::UpdateCloak(BuildingClass *this)
{
  int result; // eax
  int *v3; // eax
  BuildingTypeClass *Type; // ecx
  int FoundationWidth; // eax
  int *v6; // ecx
  int v7; // ebx
  int v8; // edi
  __int16 v9; // si
  __int16 v10; // di
  __int16 v11; // si
  Object *v12; // eax
  BuildingClass *ClosestObjectCell; // eax
  WTFMode *v14; // eax
  int v15; // [esp+10h] [ebp-30h]
  int v16; // [esp+14h] [ebp-2Ch]
  int v17; // [esp+18h] [ebp-28h]
  int v18; // [esp+1Ch] [ebp-24h]
  __int16 v19[2]; // [esp+20h] [ebp-20h] BYREF
  __int16 v20[2]; // [esp+24h] [ebp-1Ch] BYREF
  int v21; // [esp+28h] [ebp-18h]
  int v22; // [esp+2Ch] [ebp-14h] BYREF
  int v23; // [esp+30h] [ebp-10h]
  _DWORD v24[2]; // [esp+38h] [ebp-8h] BYREF

  if ( TechnoClass::ShouldBeCloaked((TechnoClass *)this) ) /*0x457779*/
  {
    v3 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 110))(this, &v22); /*0x457790*/
    Type = this->Type; /*0x457798*/
    v23 = *v3; /*0x45779e*/
    FoundationWidth = BuildingTypeClass::GetFoundationWidth(Type); /*0x4577a2*/
    v6 = (int *)this->Type; /*0x4577a7*/
    v7 = FoundationWidth; /*0x4577ad*/
    v22 = FoundationWidth; /*0x4577b1*/
    result = BuildingTypeClass::GetFoundationHeight(v6, 0); /*0x4577b5*/
    v8 = -1; /*0x4577ba*/
    v21 = result; /*0x4577c0*/
    v18 = -1; /*0x4577c4*/
    if ( v7 < -1 ) /*0x4577c8*/
    {
LABEL_13:
      LOBYTE(result) = 1; /*0x4578a3*/
      return result; /*0x4578ac*/
    }
    while ( 1 ) /*0x4577ce*/
    {
      v9 = -1; /*0x4577ce*/
      v17 = -1; /*0x4577d4*/
      if ( result >= -1 ) /*0x4577d8*/
        break; /*0x4577d8*/
LABEL_12:
      v18 = ++v8; /*0x457899*/
      if ( v8 > v7 ) /*0x45789d*/
        goto LABEL_13; /*0x45789d*/
    }
    v10 = v23 + v8; /*0x4577e2*/
    while ( 1 ) /*0x4577eb*/
    {
      v24[0] = 0; /*0x4577eb*/
      v24[1] = 0; /*0x4577ef*/
      v11 = HIWORD(v23) + v9; /*0x4577f4*/
      LOWORD(v15) = v10; /*0x4577fe*/
      HIWORD(v15) = v11; /*0x457803*/
      *(_DWORD *)v19 = v15; /*0x457813*/
      v12 = (Object *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x457817*/
      ClosestObjectCell = (BuildingClass *)Object::FindClosestObjectCell(v12, v24, 0, 0); /*0x45781e*/
      if ( ClosestObjectCell == this ) /*0x457825*/
      {
        LOWORD(v16) = v10; /*0x457827*/
        HIWORD(v16) = v11; /*0x45782c*/
        *(_DWORD *)v20 = v16; /*0x457841*/
        v14 = (WTFMode *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v20); /*0x457845*/
        ClosestObjectCell = (BuildingClass *)WTFMode::FindObjectByType(v14, 0); /*0x45784c*/
      }
      if ( ClosestObjectCell ) /*0x457853*/
      {
        if ( ClosestObjectCell->? != this->? ) /*0x457863*/
        {
          result = (*((int (__thiscall **)(BuildingClass *))ClosestObjectCell->TechnoClass + 33))(ClosestObjectCell); /*0x457869*/
          if ( *(_BYTE *)(result + 3229) ) /*0x45786f*/
            break; /*0x45786f*/
        }
      }
      result = v21; /*0x45787d*/
      v9 = ++v17; /*0x457881*/
      if ( v17 > v21 ) /*0x457888*/
      {
        v7 = v22; /*0x45788e*/
        v8 = v18; /*0x457892*/
        goto LABEL_12; /*0x457892*/
      }
    }
  }
  LOBYTE(result) = 0; /*0x4578b0*/
  return result; /*0x4578a3*/
}



// ==== 0x004578C0  BuildingClass::IsFootprintBlocked  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::IsFootprintBlocked(BuildingClass *this)
{
  int result; // eax
  int *v3; // eax
  BuildingTypeClass *Type; // ecx
  int FoundationWidth; // eax
  int *v6; // ecx
  int v7; // ebx
  int v8; // edi
  __int16 v9; // si
  __int16 v10; // di
  __int16 v11; // si
  Object *v12; // eax
  BuildingClass *ClosestObjectCell; // eax
  WTFMode *v14; // eax
  int v15; // [esp+10h] [ebp-30h]
  int v16; // [esp+14h] [ebp-2Ch]
  int v17; // [esp+18h] [ebp-28h]
  int v18; // [esp+1Ch] [ebp-24h]
  __int16 v19[2]; // [esp+20h] [ebp-20h] BYREF
  __int16 v20[2]; // [esp+24h] [ebp-1Ch] BYREF
  int v21; // [esp+28h] [ebp-18h]
  int v22; // [esp+2Ch] [ebp-14h] BYREF
  int v23; // [esp+30h] [ebp-10h]
  _DWORD v24[2]; // [esp+38h] [ebp-8h] BYREF

  if ( !TechnoClass::ShouldNotBeCloaked((float *)this) ) /*0x4578c9*/
  {
    v3 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 110))(this, &v22); /*0x4578e0*/
    Type = this->Type; /*0x4578e8*/
    v23 = *v3; /*0x4578ee*/
    FoundationWidth = BuildingTypeClass::GetFoundationWidth(Type); /*0x4578f2*/
    v6 = (int *)this->Type; /*0x4578f7*/
    v7 = FoundationWidth; /*0x4578fd*/
    v22 = FoundationWidth; /*0x457901*/
    result = BuildingTypeClass::GetFoundationHeight(v6, 0); /*0x457905*/
    v8 = -1; /*0x45790a*/
    v21 = result; /*0x457910*/
    v18 = -1; /*0x457914*/
    if ( v7 < -1 ) /*0x457918*/
    {
LABEL_13:
      LOBYTE(result) = 0; /*0x4579f3*/
      return result; /*0x4579fc*/
    }
    while ( 1 ) /*0x45791e*/
    {
      v9 = -1; /*0x45791e*/
      v17 = -1; /*0x457924*/
      if ( result >= -1 ) /*0x457928*/
        break; /*0x457928*/
LABEL_12:
      v18 = ++v8; /*0x4579e9*/
      if ( v8 > v7 ) /*0x4579ed*/
        goto LABEL_13; /*0x4579ed*/
    }
    v10 = v23 + v8; /*0x457932*/
    while ( 1 ) /*0x45793b*/
    {
      v24[0] = 0; /*0x45793b*/
      v24[1] = 0; /*0x45793f*/
      v11 = HIWORD(v23) + v9; /*0x457944*/
      LOWORD(v15) = v10; /*0x45794e*/
      HIWORD(v15) = v11; /*0x457953*/
      *(_DWORD *)v19 = v15; /*0x457963*/
      v12 = (Object *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x457967*/
      ClosestObjectCell = (BuildingClass *)Object::FindClosestObjectCell(v12, v24, 0, 0); /*0x45796e*/
      if ( ClosestObjectCell == this ) /*0x457975*/
      {
        LOWORD(v16) = v10; /*0x457977*/
        HIWORD(v16) = v11; /*0x45797c*/
        *(_DWORD *)v20 = v16; /*0x457991*/
        v14 = (WTFMode *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v20); /*0x457995*/
        ClosestObjectCell = (BuildingClass *)WTFMode::FindObjectByType(v14, 0); /*0x45799c*/
      }
      if ( ClosestObjectCell ) /*0x4579a3*/
      {
        if ( ClosestObjectCell->? != this->? ) /*0x4579b3*/
        {
          result = (*((int (__thiscall **)(BuildingClass *))ClosestObjectCell->TechnoClass + 33))(ClosestObjectCell); /*0x4579b9*/
          if ( *(_BYTE *)(result + 3229) ) /*0x4579bf*/
            break; /*0x4579bf*/
        }
      }
      result = v21; /*0x4579cd*/
      v9 = ++v17; /*0x4579d1*/
      if ( v17 > v21 ) /*0x4579d8*/
      {
        v7 = v22; /*0x4579de*/
        v8 = v18; /*0x4579e2*/
        goto LABEL_12; /*0x4579e2*/
      }
    }
  }
  LOBYTE(result) = 1; /*0x457a00*/
  return result; /*0x4579f3*/
}



// ==== 0x00457A10  ObjectClass::method_457A10  this=ObjectClass  sig=csp ====
char __thiscall sub_457A10(TechnoClass *this)
{
  int v2; // edi
  _WORD *i; // esi
  int v5; // [esp+Ch] [ebp-8h]
  __int16 v6[2]; // [esp+10h] [ebp-4h] BYREF

  v2 = *(_DWORD *)(*(int (__thiscall **)(TechnoClass *, __int16 *))(this->vtable0 + 440))(this, v6); /*0x457a2d*/
  for ( i = (_WORD *)(*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 328) + 144))( /*0x457a42*/
                       *((_DWORD *)this + 328),
                       0); *i != 0x7FFF || i[1] != 0x7FFF; i += 2 )
  {
    LOWORD(v5) = v2 + *i; /*0x457a59*/
    HIWORD(v5) = HIWORD(v2) + i[1]; /*0x457a66*/
    *(_DWORD *)v6 = v5; /*0x457a6f*/
    if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v6) + 80) & 0x400000) == 0 ) /*0x457a87*/
      return 0; /*0x457a96*/
  }
  return 1; /*0x457a8e*/
}



// ==== 0x00457AA0  BuildingClass::CreateFoggedObjects  this=BuildingClass  sig=csp ====
__int16 __thiscall BuildingClass::CreateFoggedObjects(BuildingClass *this, int a2, _DWORD *a3, char a4)
{
  __int16 *v5; // edi
  int v6; // eax
  __int16 result; // ax
  _DWORD *v9; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // esi
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  __int16 *v20; // [esp+18h] [ebp-Ch]
  int v21; // [esp+1Ch] [ebp-8h]
  __int16 v22[2]; // [esp+20h] [ebp-4h] BYREF
  int v23; // [esp+28h] [ebp+4h]
  int v24; // [esp+30h] [ebp+Ch]

  v5 = (__int16 *)(*((int (__thiscall **)(BuildingTypeClass *, _DWORD))this->Type->TechnoTypeClass + 36))(this->Type, 0); /*0x457abc*/
  v20 = v5; /*0x457ac0*/
  (*((void (__thiscall **)(BuildingClass *))this->TechnoClass + 84))(this); /*0x457ac4*/
  v6 = __2_YAPAXI_Z(0x78u); /*0x457acc*/
  if ( v6 ) /*0x457ad6*/
    v24 = FoggedObjectClass::Constructor(v6, (int *)this, a4); /*0x457ae5*/
  else
    v24 = 0; /*0x457aeb*/
  v21 = *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, __int16 *))this->TechnoClass + 110))(this, v22); /*0x457b04*/
  while ( 1 ) /*0x457b08*/
  {
    result = *v5; /*0x457b08*/
    if ( *v5 == 0x7FFF && v5[1] == 0x7FFF ) /*0x457b15*/
      return result; /*0x457c79*/
    LOWORD(v23) = v21 + result; /*0x457b25*/
    HIWORD(v23) = HIWORD(v21) + v5[1]; /*0x457b34*/
    *(_DWORD *)v22 = v23; /*0x457b3d*/
    v9 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v22); /*0x457b4b*/
    if ( a3 && v9 == a3 ) /*0x457b57*/
    {
      v10 = *(_DWORD *)(a2 + 8); /*0x457b59*/
      if ( *(_DWORD *)(a2 + 16) < v10 /*0x457b84*/
        || (*(_BYTE *)(a2 + 13) || !v10)
        && (v11 = *(_DWORD *)(a2 + 20), v11 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a2 + 8))(a2, v10 + v11, 0) )
      {
        v12 = *(_DWORD *)(a2 + 16); /*0x457b8f*/
        v13 = *(_DWORD *)(a2 + 4); /*0x457b92*/
        *(_DWORD *)(a2 + 16) = v12 + 1; /*0x457b98*/
LABEL_31:
        *(_DWORD *)(v13 + 4 * v12) = v24; /*0x457c60*/
      }
    }
    else
    {
      v14 = v9[10]; /*0x457ba0*/
      if ( v14 ) /*0x457ba5*/
      {
        v15 = *(_DWORD *)(v14 + 8); /*0x457ba7*/
        if ( *(_DWORD *)(v14 + 16) < v15 ) /*0x457baf*/
          goto LABEL_30; /*0x457baf*/
        if ( *(_BYTE *)(v14 + 13) || !v15 ) /*0x457bbc*/
        {
          v16 = *(_DWORD *)(v14 + 20); /*0x457bc2*/
          if ( v16 > 0 ) /*0x457bc7*/
          {
            if ( (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v14 + 8))(v14, v15 + v16, 0) ) /*0x457bd5*/
              goto LABEL_30; /*0x457bda*/
          }
        }
      }
      else
      {
        v17 = __2_YAPAXI_Z(0x18u); /*0x457be4*/
        if ( v17 ) /*0x457bee*/
        {
          *(_DWORD *)(v17 + 4) = 0; /*0x457bf0*/
          *(_DWORD *)(v17 + 8) = 0; /*0x457bf3*/
          *(_BYTE *)(v17 + 12) = 1; /*0x457bf6*/
          *(_BYTE *)(v17 + 13) = 0; /*0x457bfa*/
          *(_DWORD *)v17 = &DynamicVectorClass<FoggedObjectClass *>::`vftable'; /*0x457bfd*/
          *(_DWORD *)(v17 + 20) = 10; /*0x457c03*/
          *(_DWORD *)(v17 + 16) = 0; /*0x457c0a*/
        }
        else
        {
          v17 = 0; /*0x457c0f*/
        }
        v9[10] = v17; /*0x457c11*/
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v17 + 8))(v17, 1, 0); /*0x457c1b*/
        *(_DWORD *)(v9[10] + 20) = 1; /*0x457c21*/
        v14 = v9[10]; /*0x457c28*/
        v18 = *(_DWORD *)(v14 + 8); /*0x457c2b*/
        if ( *(_DWORD *)(v14 + 16) < v18 /*0x457c4d*/
          || (*(_BYTE *)(v14 + 13) || !v18)
          && (v19 = *(_DWORD *)(v14 + 20), v19 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v14 + 8))(v14, v18 + v19, 0) )
        {
LABEL_30:
          v12 = *(_DWORD *)(v14 + 16); /*0x457c54*/
          *(_DWORD *)(v14 + 16) = v12 + 1; /*0x457c5a*/
          v13 = *(_DWORD *)(v14 + 4); /*0x457c5d*/
          goto LABEL_31; /*0x457c5d*/
        }
      }
    }
    v20 += 2; /*0x457c67*/
    v5 = v20; /*0x457c72*/
  }
}



// ==== 0x00457C90  BuildingClass::IronCurtain  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::IronCurtain(BuildingClass *this)
{
  int v1; // eax
  int v3; // [esp+4h] [ebp-8h]
  int v4; // [esp+10h] [ebp+4h]
  int v5; // [esp+14h] [ebp+8h]
  char v6; // [esp+18h] [ebp+Ch]

  if ( this->C4Applied ) /*0x457c90*/
  {
    this->C4Applied = 0; /*0x457ca0*/
    v1 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x457ca6*/
    this->C4AppliedBy = 0; /*0x457cb1*/
    this->C4Timer[0] = v1; /*0x457cb7*/
    this->C4Timer[1] = v3; /*0x457cbd*/
    this->C4Timer[2] = 0; /*0x457cc0*/
  }
  return TechnoClass::IronCurtain((TechnoClass *)this, v4, v5, v6); /*0x457cd8*/
}



// ==== 0x00457CE0  BuildingClass::CanRepair  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CanRepair(BuildingClass *this, int a2)
{
  int result; // eax
  _DWORD *v4; // eax
  HouseClass *owner; // eax
  _BYTE v6[12]; // [esp+8h] [ebp-Ch] BYREF

  if ( !a2 ) /*0x457ced*/
    goto LABEL_13; /*0x457ced*/
  result = (int)this->Type; /*0x457cf3*/
  if ( !*(_BYTE *)(result + 5499) ) /*0x457cf9*/
    goto LABEL_13; /*0x457cf9*/
  result = this->?; /*0x457d07*/
  if ( result == 18 ) /*0x457d10*/
    goto LABEL_13; /*0x457d10*/
  if ( result == 19 ) /*0x457d19*/
    goto LABEL_13; /*0x457d19*/
  v4 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass + 18))(this, v6); /*0x457d28*/
  result = IsCoordVisibleMap((ObjectClass *)&stru_87F5F0.__pad_58[416], v4); /*0x457d31*/
  if ( !(_BYTE)result ) /*0x457d38*/
    goto LABEL_13; /*0x457d38*/
  result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 117))(this); /*0x457d3e*/
  if ( (_BYTE)result ) /*0x457d46*/
    goto LABEL_13; /*0x457d46*/
  result = *(_DWORD *)(a2 + 1728); /*0x457d48*/
  if ( !*(_BYTE *)(result + 3764) ) /*0x457d56*/
  {
    if ( *(_BYTE *)(result + 3765) ) /*0x457dad*/
    {
      result = Object::IsAlliedWithObjectHouse((Object *)this->?, a2); /*0x457dbe*/
      if ( !(_BYTE)result ) /*0x457dc5*/
      {
        result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 258))(this); /*0x457dcb*/
        if ( result ) /*0x457dd3*/
          goto LABEL_17; /*0x457dd3*/
      }
    }
LABEL_13:
    LOBYTE(result) = 0; /*0x457da3*/
    return result; /*0x457daa*/
  }
  owner = this->?; /*0x457d58*/
  if ( owner != *(HouseClass **)(a2 + 540) ) /*0x457d66*/
  {
    result = owner->relatedTagsCapacity; /*0x457d68*/
    if ( !*(_BYTE *)(result + 422) ) /*0x457d6b*/
      goto LABEL_13; /*0x457d6b*/
  }
  result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 258))(this); /*0x457d79*/
  if ( result == this->Type->MaxNumberOccupants ) /*0x457d8b*/
    goto LABEL_13; /*0x457d8b*/
  result = BuildingClass::IsHealthLow(this); /*0x457d8f*/
  if ( (_BYTE)result ) /*0x457d96*/
    goto LABEL_13; /*0x457d96*/
  result = BuildingClass::IsBeingRepairedOrCaptured((BuildingClass *)a2); /*0x457d9a*/
  if ( (_BYTE)result ) /*0x457da1*/
    goto LABEL_13; /*0x457da1*/
LABEL_17:
  LOBYTE(result) = 1; /*0x457dd5*/
  return result; /*0x457da3*/
}



// ==== 0x00457DE0  BuildingClass::UnloadUnits  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::UnloadUnits(BuildingClass *this, char a2, char a3)
{
  int (**vtable0)(void); // eax
  BuildingTypeClass *Type; // ecx
  int FoundationWidth; // eax
  int *v7; // ecx
  __int16 v8; // di
  int FoundationHeight; // eax
  int (__thiscall **v10)(BuildingClass *, char *); // edx
  __int16 v11; // bp
  char v12; // bl
  _DWORD *v13; // eax
  int **v14; // edx
  int *v15; // edi
  int v16; // ebp
  void *v17; // eax
  int v18; // eax
  int v19; // ebp
  void *v20; // eax
  int *v21; // eax
  int v22; // ecx
  __int16 *v23; // eax
  int v24; // ebp
  void *v25; // eax
  __int16 *v26; // eax
  int v27; // ebp
  void *v28; // eax
  int v29; // ebp
  int v30; // eax
  int v31; // ebx
  void *v32; // eax
  void *v33; // eax
  int *v34; // eax
  int v35; // edx
  int v36; // ebp
  int v37; // edi
  int v38; // ebx
  int v39; // eax
  int *v40; // ecx
  __int16 v41; // di
  _WORD *v42; // eax
  int v43; // ebx
  _DWORD *v44; // eax
  __int16 v45[2]; // [esp+84h] [ebp-2Ch] BYREF
  __int16 v46[2]; // [esp+88h] [ebp-28h] BYREF
  int v47; // [esp+8Ch] [ebp-24h]
  int v48; // [esp+90h] [ebp-20h]
  char v49[4]; // [esp+94h] [ebp-1Ch] BYREF
  int v50; // [esp+98h] [ebp-18h] BYREF
  int v51; // [esp+9Ch] [ebp-14h]
  int i; // [esp+A0h] [ebp-10h]
  _BYTE v53[12]; // [esp+A4h] [ebp-Ch] BYREF
  int v54; // [esp+B8h] [ebp+8h]

  vtable0 = (int (**)(void))this->TechnoClass; /*0x457de9*/
  this->Audio8[4] = 0; /*0x457deb*/
  if ( vtable0[258]() ) /*0x457df5*/
  {
    v50 = g_BuildingClassPool; /*0x457e14*/
    v51 = dword_89C84C; /*0x457e1e*/
    *(_DWORD *)v46 = g_TerrainTypeTable; /*0x457e22*/
    Type = this->Type; /*0x457e26*/
    i = dword_89C850; /*0x457e2c*/
    FoundationWidth = BuildingTypeClass::GetFoundationWidth(Type); /*0x457e30*/
    v7 = (int *)this->Type; /*0x457e35*/
    v8 = FoundationWidth; /*0x457e3b*/
    v47 = FoundationWidth; /*0x457e3f*/
    FoundationHeight = BuildingTypeClass::GetFoundationHeight(v7, 0); /*0x457e43*/
    v10 = (int (__thiscall **)(BuildingClass *, char *))this->TechnoClass; /*0x457e48*/
    v11 = FoundationHeight; /*0x457e4a*/
    v48 = FoundationHeight; /*0x457e53*/
    v12 = 0; /*0x457e57*/
    v13 = (_DWORD *)v10[110](this, v49); /*0x457e59*/
    v14 = (int **)this->Audio7[4]; /*0x457e61*/
    *(_DWORD *)v45 = *v13; /*0x457e67*/
    v45[0] += v8; /*0x457e6b*/
    v45[1] += v11; /*0x457e70*/
    v15 = *v14; /*0x457e75*/
    v16 = **v14; /*0x457e7b*/
    v17 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v45); /*0x457e8b*/
    if ( (*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v16 + 428))(v15, v17, -1, -1, 0, 1) ) /*0x457e93*/
    {
      while ( 1 ) /*0x457ea6*/
      {
        v18 = (*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 110))(this, v49); /*0x457ea6*/
        if ( v45[1] <= *(__int16 *)(v18 + 2) - 1 ) /*0x457eb8*/
          break; /*0x457eb8*/
        --v45[1]; /*0x457eba*/
        v19 = *v15; /*0x457ebf*/
        v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v45); /*0x457ed3*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v19 + 428))(v15, v20, -1, -1, 0, 1) ) /*0x457edb*/
          goto LABEL_5; /*0x457ee3*/
      }
    }
    else
    {
LABEL_5:
      v12 = 1; /*0x457ee5*/
      *(_DWORD *)v46 = *(_DWORD *)v45; /*0x457eeb*/
    }
    v21 = (int *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 110))(this, v49); /*0x457ef8*/
    v22 = *v21; /*0x457efe*/
    v45[0] = v47 + *v21; /*0x457f0e*/
    v45[1] = v48 + HIWORD(v22); /*0x457f13*/
    if ( !v12 ) /*0x457f1a*/
    {
      while ( 1 ) /*0x457f25*/
      {
        v23 = (__int16 *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 110))(this, v49); /*0x457f25*/
        if ( v45[0] <= *v23 - 1 ) /*0x457f36*/
          break; /*0x457f36*/
        --v45[0]; /*0x457f38*/
        v24 = *v15; /*0x457f3d*/
        v25 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v45); /*0x457f51*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v24 + 428))(v15, v25, -1, -1, 0, 1) ) /*0x457f59*/
        {
          v12 = 1; /*0x457f67*/
          *(_DWORD *)v46 = *(_DWORD *)v45; /*0x457f69*/
          break; /*0x457f69*/
        }
      }
    }
    *(_DWORD *)v45 = *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 110))(this, v49); /*0x457f6d*/
    --v45[0]; /*0x457f82*/
    --v45[1]; /*0x457f87*/
    if ( !v12 ) /*0x457f8e*/
    {
      while ( 1 ) /*0x457f99*/
      {
        v26 = (__int16 *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 110))(this, v49); /*0x457f99*/
        if ( v45[0] >= v47 + *v26 ) /*0x457fad*/
          break; /*0x457fad*/
        ++v45[0]; /*0x457faf*/
        v27 = *v15; /*0x457fb4*/
        v28 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v45); /*0x457fc8*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v27 + 428))(v15, v28, -1, -1, 0, 1) ) /*0x457fd0*/
        {
          v12 = 1; /*0x457fde*/
          *(_DWORD *)v46 = *(_DWORD *)v45; /*0x457fe0*/
          break; /*0x457fe0*/
        }
      }
    }
    *(_DWORD *)v45 = *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 110))(this, v49); /*0x457fe4*/
    --v45[0]; /*0x457ff9*/
    --v45[1]; /*0x457ffe*/
    if ( !v12 ) /*0x458005*/
    {
      v29 = v48; /*0x458007*/
      while ( 1 ) /*0x458014*/
      {
        v30 = (*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 110))(this, v49); /*0x458014*/
        if ( v45[1] >= v29 + *(__int16 *)(v30 + 2) ) /*0x458027*/
          break; /*0x458027*/
        ++v45[1]; /*0x45802d*/
        v31 = *v15; /*0x458032*/
        v32 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v45); /*0x458046*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v31 + 428))(v15, v32, -1, -1, 0, 1) ) /*0x45804e*/
        {
          *(_DWORD *)v46 = *(_DWORD *)v45; /*0x45805c*/
          goto LABEL_19; /*0x45805c*/
        }
      }
      if ( !a3 ) /*0x458146*/
      {
        BuildingClass::AnimateUnloadUnits(this, 0); /*0x458184*/
        return; /*0x458190*/
      }
      v41 = v47 - 1; /*0x458156*/
      v42 = (_WORD *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 110))(this, v49); /*0x458159*/
      LOWORD(v54) = *v42 + v41; /*0x458169*/
      HIWORD(v54) = v29 - 1 + v42[1]; /*0x45816e*/
      *(_DWORD *)v46 = v54; /*0x458177*/
    }
LABEL_19:
    v33 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v46); /*0x458060*/
    v34 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v33 + 72))(v33, v53); /*0x458078*/
    v50 = *v34; /*0x45807d*/
    v51 = v34[1]; /*0x458084*/
    v35 = v34[2]; /*0x45808e*/
    ++dword_A8E7AC; /*0x458092*/
    v36 = this->Audio8[2] - 1; /*0x45809e*/
    for ( i = v35; v36 >= 0; --v36 ) /*0x4580a3*/
    {
      v37 = *(_DWORD *)(this->Audio7[4] + 4 * v36); /*0x4580b1*/
      if ( (*(unsigned __int8 (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v37 + 216))(v37, &v50, 0) ) /*0x4580bd*/
      {
        if ( *(_BYTE *)(*(_DWORD *)(v37 + 540) + 492) ) /*0x4580d1*/
        {
          *(_BYTE *)(v37 + 1681) = 0; /*0x4580db*/
          *(_BYTE *)(v37 + 1680) = 0; /*0x4580e2*/
        }
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v37 + 968))(v37, 0); /*0x4580ef*/
        v38 = *(_DWORD *)v37; /*0x4580f7*/
        v39 = (*((int (__thiscall **)(BuildingClass *, _BYTE *, int, int))this->TechnoClass + 18))(this, v53, 1, 1); /*0x458104*/
        (*(void (__thiscall **)(int, int))(v38 + 372))(v37, v39); /*0x45810a*/
        if ( a2 ) /*0x458116*/
        {
          v40 = *(int **)(v37 + 1492); /*0x45811c*/
          if ( v40 ) /*0x458124*/
            TeamClass::LiberateMember_Start(v40, v37, 0xFFFFFFFF, 0); /*0x45812b*/
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v37 + 488))(v37, 15, 0); /*0x458138*/
        }
      }
      else
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v37 + 248))(v37); /*0x458197*/
      }
    }
    --dword_A8E7AC; /*0x4581b2*/
    v43 = this->Audio8[0]; /*0x4581b9*/
    (*(void (__thiscall **)(int *))(this->Audio7[3] + 12))(&this->Audio7[3]); /*0x4581bc*/
    (*(void (__thiscall **)(int *, int, _DWORD))(this->Audio7[3] + 8))(&this->Audio7[3], v43, 0); /*0x4581c6*/
    v44 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 111))(this); /*0x4581cd*/
    BuildingClass::UpdateThreatBounds(this, v44); /*0x4581d6*/
  }
}



// ==== 0x004581F0  BuildingClass::MissionStubReturnZero6  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::MissionStubReturnZero6(BuildingClass *this)
{
  return this->Audio8[2]; /*0x4581f6*/
}



// ==== 0x00458200  BuildingClass::ProcessStructureAbandoned  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ProcessStructureAbandoned(BuildingClass *this)
{
  int result; // eax
  int v3; // edi
  House *v4; // ebx
  int v5; // eax
  int v6; // ecx
  HouseClass *v7; // edx
  House *owner; // ecx
  __int64 v9; // rax
  _BYTE v10[4]; // [esp+8h] [ebp-4h] BYREF

  result = this->Type; /*0x458205*/
  if ( *(_DWORD *)(result + 1588) == -1 ) /*0x458212*/
  {
    if ( (unsigned __int8)BuildingClass::IsHealthLow(this) ) /*0x45821a*/
      BuildingClass::UnloadUnits(this, 0, 0); /*0x458229*/
    v3 = dword_A80238; /*0x458230*/
    v4 = 0; /*0x45823b*/
    v5 = HouseTypeClass::Find(&g_INI_Key_Civilian); /*0x45823d*/
    v6 = 0; /*0x458242*/
    if ( v3 > 0 ) /*0x458246*/
    {
      v7 = dword_A8022C; /*0x458248*/
      while ( *(_DWORD *)(*(_DWORD *)(v7->vtable0 + 52) + 188) != v5 ) /*0x458259*/
      {
        ++v6; /*0x45825b*/
        v7 = (HouseClass *)((char *)v7 + 4); /*0x45825c*/
        if ( v6 >= v3 ) /*0x458261*/
          goto LABEL_10; /*0x458261*/
      }
      v4 = (House *)*(&dword_A8022C->vtable0 + v6); /*0x45826b*/
    }
LABEL_10:
    if ( !(*(int (__thiscall **)(BuildingClass *))(this->vtable0 + 1032))(this) ) /*0x458272*/
    {
      owner = (House *)this->owner; /*0x45827e*/
      if ( owner != v4 ) /*0x458286*/
      {
        if ( (unsigned __int8)House::IsHumanPlayer(owner) ) /*0x458288*/
        {
          PlayVocClass(dword_8871E0->GeneticMutatorActivateSound, 0x2000, 1.0, 0); /*0x4582a9*/
          v9 = ((__int64 (__thiscall *)(BuildingClass *, _BYTE *))*(_DWORD *)(this->vtable0 + 440))(this, v10); /*0x4582b7*/
          if ( (unsigned __int8)CreateTriggerClassIfFarEnough(15, SHIDWORD(v9), *(_DWORD *)v9) ) /*0x4582c5*/
            VoxClass::FindAndPlay(&stru_81926C, -1); /*0x4582d8*/
        }
        PlayHealthDependentBuildingAnim(this); /*0x4582df*/
        (*(void (__thiscall **)(BuildingClass *, House *, _DWORD))(this->vtable0 + 980))(this, v4, 0); /*0x4582eb*/
      }
    }
    result = (*(int (__thiscall **)(BuildingClass *))(this->vtable0 + 1032))(this); /*0x4582f5*/
    if ( result > 0 && (House *)this->owner == v4 ) /*0x458305*/
    {
      PlayHealthDependentBuildingAnim(this); /*0x458309*/
      return (*(int (__thiscall **)(BuildingClass *, _DWORD, _DWORD))(this->vtable0 + 980))( /*0x458323*/
               this,
               *(_DWORD *)(*(_DWORD *)this->Audio7[4] + 540),
               0);
    }
  }
  return result; /*0x458329*/
}



// ==== 0x00458330  ObjectClass::PlayHealthDependentBuildingAnim  this=ObjectClass  sig=csp ====
_BYTE *__thiscall PlayHealthDependentBuildingAnim(TechnoClass *this)
{
  BOOL v3; // ebx
  bool v4; // al
  int v5; // edx
  AnimTypeClass *v6; // eax
  bool v7; // zf
  int v8; // eax
  BOOL v11; // ebx
  bool v12; // al
  int v13; // edx
  AnimTypeClass *v14; // eax
  int v15; // eax
  BOOL v18; // ebx
  bool v19; // al
  int v20; // edx
  AnimTypeClass *v21; // eax
  int v22; // eax
  BOOL v25; // ebx
  bool v26; // al
  int v27; // edx
  AnimTypeClass *v28; // eax
  int v29; // eax
  _BYTE *result; // eax
  BOOL v33; // ebx
  bool v34; // al
  int v35; // edx
  int v36; // eax
  int v37; // [esp+8h] [ebp-4h]

  if ( *((_DWORD *)this + 361) )
  {
    BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x45833f*/
    _EAX = dword_8871E0; /*0x458344*/
    __asm /*0x458349*/
    {
      fcomp qword ptr [eax+1700h]
      fnstsw ax
    }
    v3 = (BYTE1(_EAX) & 0x41) != 0; /*0x458354*/
    v4 = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 1032))(this) > 0; /*0x45836b*/
    LOBYTE(v37) = v4; /*0x458370*/
    if ( v3 )
    {
      v6 = (AnimTypeClass *)(*((_DWORD *)this + 328) + 5156); /*0x45837c*/
    }
    else
    {
      v7 = !v4; /*0x458383*/
      v8 = *((_DWORD *)this + 328); /*0x458385*/
      v6 = (AnimTypeClass *)(v7 ? v8 + 5140 : v8 + 5172);
    }
    if ( v6 && LOBYTE(v6->vtable0) ) /*0x45839d*/
      BuildingClass::PlayAnim((BuildingClass *)this, v5, v6, 18, v3, v37, 0); /*0x4583af*/
  }
  if ( *((_DWORD *)this + 346) )
  {
    BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x4583c0*/
    _EDX = dword_8871E0; /*0x4583c5*/
    __asm /*0x4583cb*/
    {
      fcomp qword ptr [edx+1700h]
      fnstsw ax
    }
    v11 = (_AX & 0x4100) != 0; /*0x4583d6*/
    v12 = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 1032))(this) > 0; /*0x4583ed*/
    LOBYTE(v37) = v12; /*0x4583f2*/
    if ( v11 )
    {
      v14 = (AnimTypeClass *)(*((_DWORD *)this + 328) + 4136); /*0x4583fe*/
    }
    else
    {
      v7 = !v12; /*0x458405*/
      v15 = *((_DWORD *)this + 328); /*0x458407*/
      v14 = (AnimTypeClass *)(v7 ? v15 + 4120 : v15 + 4152);
    }
    if ( v14 && LOBYTE(v14->vtable0) ) /*0x45841f*/
      BuildingClass::PlayAnim((BuildingClass *)this, v13, v14, 3, v11, v37, 0); /*0x458431*/
  }
  if ( *((_DWORD *)this + 347) )
  {
    BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x458442*/
    _EDX = dword_8871E0; /*0x458447*/
    __asm /*0x45844d*/
    {
      fcomp qword ptr [edx+1700h]
      fnstsw ax
    }
    v18 = (_AX & 0x4100) != 0; /*0x458458*/
    v19 = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 1032))(this) > 0; /*0x45846f*/
    LOBYTE(v37) = v19; /*0x458474*/
    if ( v18 )
    {
      v21 = (AnimTypeClass *)(*((_DWORD *)this + 328) + 4204); /*0x458480*/
    }
    else
    {
      v7 = !v19; /*0x458487*/
      v22 = *((_DWORD *)this + 328); /*0x458489*/
      v21 = (AnimTypeClass *)(v7 ? v22 + 4188 : v22 + 4220);
    }
    if ( v21 && LOBYTE(v21->vtable0) ) /*0x4584a1*/
      BuildingClass::PlayAnim((BuildingClass *)this, v20, v21, 4, v18, v37, 0); /*0x4584b3*/
  }
  if ( *((_DWORD *)this + 348) )
  {
    BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x4584c4*/
    _EDX = dword_8871E0; /*0x4584c9*/
    __asm /*0x4584cf*/
    {
      fcomp qword ptr [edx+1700h]
      fnstsw ax
    }
    v25 = (_AX & 0x4100) != 0; /*0x4584da*/
    v26 = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 1032))(this) > 0; /*0x4584f1*/
    LOBYTE(v37) = v26; /*0x4584f6*/
    if ( v25 )
    {
      v28 = (AnimTypeClass *)(*((_DWORD *)this + 328) + 4272); /*0x458502*/
    }
    else
    {
      v7 = !v26; /*0x458509*/
      v29 = *((_DWORD *)this + 328); /*0x45850b*/
      v28 = (AnimTypeClass *)(v7 ? v29 + 4256 : v29 + 4288);
    }
    if ( v28 && LOBYTE(v28->vtable0) ) /*0x458523*/
      BuildingClass::PlayAnim((BuildingClass *)this, v27, v28, 5, v25, v37, 0); /*0x458535*/
  }
  result = (_BYTE *)*((_DWORD *)this + 349); /*0x45853a*/
  if ( result ) /*0x458542*/
  {
    BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x458546*/
    _EDX = dword_8871E0; /*0x45854b*/
    __asm /*0x458551*/
    {
      fcomp qword ptr [edx+1700h]
      fnstsw ax
    }
    v33 = (_AX & 0x4100) != 0; /*0x45855c*/
    v34 = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 1032))(this) > 0; /*0x458573*/
    LOBYTE(v37) = v34; /*0x458578*/
    if ( v33 ) /*0x45857c*/
    {
      result = (_BYTE *)(*((_DWORD *)this + 328) + 4340); /*0x458584*/
    }
    else
    {
      v7 = !v34; /*0x45858b*/
      v36 = *((_DWORD *)this + 328); /*0x45858d*/
      if ( v7 ) /*0x458593*/
        result = (_BYTE *)(v36 + 4324); /*0x45859c*/
      else
        result = (_BYTE *)(v36 + 4356); /*0x458595*/
    }
    if ( result ) /*0x4585a3*/
    {
      if ( *result ) /*0x4585a5*/
        return (_BYTE *)BuildingClass::PlayAnim((BuildingClass *)this, v35, (AnimTypeClass *)result, 6, v33, v37, 0); /*0x4585b7*/
    }
  }
  return result; /*0x4585bc*/
}



// ==== 0x004585C0  BuildingClass::AnimateUnloadUnits  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::AnimateUnloadUnits(BuildingClass *this, int a2)
{
  int v4; // edi
  int i; // edi
  int v6; // ecx
  int v7; // edi
  int *v8; // eax
  int v9; // ecx
  int (__thiscall **vtable0)(BuildingClass *, char *); // edx
  _DWORD *v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  AnimClass *v15; // ebx
  int v16; // eax
  void **v17; // eax
  int v18; // ecx
  int v19; // ebx
  _DWORD *v20; // eax
  int *v21; // [esp+0h] [ebp-30h]
  int v22; // [esp+10h] [ebp-20h] BYREF
  int v23; // [esp+18h] [ebp-18h] BYREF
  int v24; // [esp+1Ch] [ebp-14h]
  int v25; // [esp+20h] [ebp-10h]
  char v26[12]; // [esp+24h] [ebp-Ch] BYREF
  int v27; // [esp+34h] [ebp+4h]

  this->Audio8[4] = 0; /*0x4585cf*/
  v4 = this->Audio8[2]; /*0x4585d9*/
  if ( a2 ) /*0x4585df*/
  {
    v7 = v4 - 1; /*0x458601*/
    if ( v7 >= 0 ) /*0x458602*/
    {
      v27 = 8 * v7 + 5512; /*0x45860f*/
      do /*0x4586fe*/
      {
        v8 = (int *)World::ToScreen(&v22, (void **)((char *)&this->Type->TechnoTypeClass + v27), v21); /*0x45862b*/
        v9 = v8[1]; /*0x458630*/
        vtable0 = (int (__thiscall **)(BuildingClass *, char *))this->TechnoClass; /*0x458635*/
        v23 = *v8; /*0x458637*/
        v24 = v9; /*0x45863f*/
        v25 = 0; /*0x458646*/
        v11 = (_DWORD *)vtable0[43](this, v26); /*0x45864e*/
        v12 = v23 + *v11; /*0x45865e*/
        v13 = v11[1]; /*0x458660*/
        v14 = v25 + v11[2]; /*0x45866c*/
        v23 = v12; /*0x458673*/
        v24 += v13; /*0x458677*/
        v25 = v14; /*0x45867b*/
        v15 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x458684*/
        if ( v15 ) /*0x45868b*/
        {
          v16 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 1016))(a2, 0); /*0x4586a6*/
          v17 = AnimClass::ctor(v15, *(void **)(*(_DWORD *)v16 + 276), &v23, 0, 1, (void *)0x600, 0, 0); /*0x4586b7*/
        }
        else
        {
          v17 = 0; /*0x4586be*/
        }
        v17[64] = (void *)-200; /*0x4586c0*/
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 224))(a2, *(_DWORD *)(this->Audio7[4] + 4 * v7)); /*0x4586d9*/
        v18 = *(_DWORD *)(this->Audio7[4] + 4 * v7); /*0x4586e5*/
        (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 248))(v18); /*0x4586ea*/
        --v7; /*0x4586f4*/
        v27 -= 8; /*0x4586fa*/
      }
      while ( v7 >= 0 ); /*0x4586fe*/
    }
  }
  else
  {
    for ( i = v4 - 1; i >= 0; --i ) /*0x4585e2*/
    {
      v6 = *(_DWORD *)(this->Audio7[4] + 4 * i); /*0x4585ee*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 248))(v6); /*0x4585f3*/
    }
  }
  v19 = this->Audio8[0]; /*0x45870a*/
  (*(void (__thiscall **)(int *))(this->Audio7[3] + 12))(&this->Audio7[3]); /*0x458718*/
  (*(void (__thiscall **)(int *, int, _DWORD))(this->Audio7[3] + 8))(&this->Audio7[3], v19, 0); /*0x458722*/
  v20 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 111))(this); /*0x458729*/
  BuildingClass::UpdateThreatBounds(this, v20); /*0x458732*/
}



// ==== 0x00458750  HouseClass::Process  this=HouseClass  sig=csp ====
char __thiscall HouseClass::Process(HouseClass *this)
{
  int v2; // ecx
  char result; // al
  int v4; // eax
  int v5; // [esp+8h] [ebp-8h]

  v2 = *(_DWORD *)(this->builtInfantryTypes[126] + 5472); /*0x458767*/
  this->builtInfantryTypes[234] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x45876d*/
  this->builtInfantryTypes[235] = v5; /*0x458773*/
  this->builtInfantryTypes[236] = v2; /*0x458776*/
  result = *(_BYTE *)(*(_DWORD *)(this->planningPaths[3] + 52) + 422); /*0x458782*/
  if ( !result ) /*0x45878a*/
  {
    result = (*((int (__thiscall **)(HouseClass *))this->AbstractClass + 212))(this); /*0x458790*/
    if ( result ) /*0x458798*/
    {
      v4 = *(_DWORD *)(this->builtInfantryTypes[126] + 5468); /*0x4587a0*/
      if ( v4 <= 0 ) /*0x4587a8*/
        return HouseClass::ProcessPowerDrain((int *)this->planningPaths[3], -v4); /*0x4587c4*/
      else
        return HouseClass::AddPower((HouseClass *)this->planningPaths[3], v4); /*0x4587b1*/
    }
  }
  return result; /*0x4587b6*/
}



// ==== 0x00458810  BuildingClass::BuildTurretTransform  this=BuildingClass  sig=csp ====
float *__thiscall sub_458810(int this, float *a2)
{
  float v4; // [esp+0h] [ebp-44h]
  float v5; // [esp+0h] [ebp-44h]
  float v6; // [esp+0h] [ebp-44h]
  float v7; // [esp+0h] [ebp-44h]
  float v8; // [esp+0h] [ebp-44h]
  float v9; // [esp+0h] [ebp-44h]
  float v10; // [esp+0h] [ebp-44h]
  float v11; // [esp+0h] [ebp-44h]
  float v12; // [esp+0h] [ebp-44h]
  float v13; // [esp+0h] [ebp-44h]
  float v14; // [esp+0h] [ebp-44h]
  float v15; // [esp+Ch] [ebp-38h]
  int v16; // [esp+10h] [ebp-34h] BYREF
  float v17[12]; // [esp+14h] [ebp-30h] BYREF

  Matrix3x4::Identity(v17); /*0x45881b*/
  v4 = (float)*(int *)(*(_DWORD *)(this + 1312) + 5960); /*0x458831*/
  Matrix3x4::Translate(v17, v4); /*0x458834*/
  v5 = (float)*(int *)(*(_DWORD *)(this + 1312) + 5964); /*0x45884a*/
  Matrix3x3::ApplyCol0(v17, v5); /*0x45884d*/
  v6 = (float)*(int *)(*(_DWORD *)(this + 1312) + 5968); /*0x458863*/
  Matrix3x3::ApplyCol1(v17, v6); /*0x458866*/
  v7 = (double)(int)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)(this + 904), &v16) >> 10) + 1) >> 1) & 0x1F) /*0x45889c*/
                   - 8)
     * -0.1963495408493621;
  Matrix2D::Rotate(v17, v7); /*0x45889f*/
  v8 = (float)*(int *)(*(_DWORD *)(this + 1312) + 5948); /*0x4588b5*/
  Matrix3x4::Translate(v17, v8); /*0x4588b8*/
  v9 = (float)*(int *)(*(_DWORD *)(this + 1312) + 5952); /*0x4588ce*/
  Matrix3x3::ApplyCol0(v17, v9); /*0x4588d1*/
  v10 = (float)*(int *)(*(_DWORD *)(this + 1312) + 5956); /*0x4588e7*/
  Matrix3x3::ApplyCol1(v17, v10); /*0x4588ea*/
  v11 = -((double)(int)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)(this + 880), &v16) >> 10) + 1) >> 1) & 0x1F) /*0x458922*/
                      - 8)
        * -0.1963495408493621);
  Matrix3D::RotateZ(v17, v11); /*0x458925*/
  v12 = (float)*(int *)(*(_DWORD *)(this + 1312) + 5936); /*0x45893b*/
  Matrix3x4::Translate(v17, v12); /*0x45893e*/
  v13 = (float)*(int *)(*(_DWORD *)(this + 1312) + 5940); /*0x458954*/
  Matrix3x3::ApplyCol0(v17, v13); /*0x458957*/
  v14 = (float)*(int *)(*(_DWORD *)(this + 1312) + 5944); /*0x45896d*/
  Matrix3x3::ApplyCol1(v17, v14); /*0x458970*/
  v15 = *(double *)(*(_DWORD *)(this + 1312) + 5928); /*0x458985*/
  BuildingClass::processBaseExpansion(v17, v15); /*0x45898e*/
  BuildingClass::updateFoundation(v17, v15); /*0x458998*/
  BuildingClass::recalcAdjacency(v17, v15); /*0x4589a2*/
  qmemcpy(a2, v17, 0x30u); /*0x4589b6*/
  return a2; /*0x4589b8*/
}



// ==== 0x00458A00  UnitClass::IsCellBlockedByBridge  this=UnitClass  sig=csp ====
int __thiscall UnitClass::IsCellBlockedByBridge(UnitClass *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  int result; // eax
  int v5; // edi

  v2 = a2; /*0x458a02*/
  result = (int)Cell::IsBridge((Cell *)a2); /*0x458a0a*/
  if ( (UnitClass *)result == this ) /*0x458a11*/
  {
    result = this->?; /*0x458a1a*/
    if ( *(_DWORD *)(result + 5664) == -1 ) /*0x458a27*/
    {
      LOBYTE(result) = 1; /*0x458a2a*/
    }
    else if ( *(_BYTE *)(result + 5803) && (result = (int)this->?) != 0 ) /*0x458a42*/
    {
      LOBYTE(result) = 1; /*0x458a45*/
    }
    else
    {
      v5 = *((__int16 *)v2 + 18); /*0x458a51*/
      result = *(__int16 *)(*((int (__thiscall **)(UnitClass *, _DWORD **))this->FootClass + 110))(this, &a2); /*0x458a64*/
      LOBYTE(result) = result + *(_DWORD *)(this->? + 5664) > v5; /*0x458a72*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x458a14*/
  }
  return result; /*0x458a13*/
}



// ==== 0x00458A80  TechnoClass::EvacuateFootprintCells  this=BuildingClass  sig=csp ====
int __thiscall TechnoClass::EvacuateFootprintCells(TechnoClass *this)
{
  TechnoClass *v1; // esi
  int (__stdcall **vtable0)(_DWORD); // eax
  _WORD *v3; // ebp
  _WORD *v4; // eax
  __int16 v5; // dx
  _DWORD *v6; // edi
  _BYTE *v7; // esi
  int v8; // eax
  int i; // edi
  _DWORD *v10; // esi
  int j; // edi
  _DWORD *v12; // esi
  int result; // eax
  int k; // edi
  int *v15; // esi
  int v16; // eax
  int v17; // eax
  int *v18; // eax
  int v19; // ebx
  int v20; // eax
  int *v21; // [esp+0h] [ebp-44h]
  int v22; // [esp+4h] [ebp-40h]
  __int16 v23; // [esp+10h] [ebp-34h]
  __int16 v24; // [esp+12h] [ebp-32h]
  int v25; // [esp+14h] [ebp-30h] BYREF
  TechnoClass *v26; // [esp+18h] [ebp-2Ch] BYREF
  __int16 v27[2]; // [esp+1Ch] [ebp-28h] BYREF
  int v28; // [esp+20h] [ebp-24h] BYREF
  __int16 v29[2]; // [esp+24h] [ebp-20h] BYREF
  int v30; // [esp+28h] [ebp-1Ch] BYREF
  void **v31; // [esp+2Ch] [ebp-18h] BYREF
  void *Block; // [esp+30h] [ebp-14h]
  int v33; // [esp+34h] [ebp-10h]
  int v34; // [esp+38h] [ebp-Ch]
  int v35; // [esp+3Ch] [ebp-8h]
  int v36; // [esp+40h] [ebp-4h]
  _DWORD *v37; // [esp+48h] [ebp+4h]
  int v38; // [esp+4Ch] [ebp+8h]
  int v39; // [esp+50h] [ebp+Ch] BYREF
  int v40; // [esp+54h] [ebp+10h] BYREF

  v1 = this; /*0x458a86*/
  vtable0 = (int (__stdcall **)(_DWORD))this->RadioClass; /*0x458a8b*/
  v26 = this; /*0x458a8e*/
  v3 = (_WORD *)vtable0[66](0); /*0x458a9c*/
  v23 = *v37 / 256; /*0x458aae*/
  v24 = v37[1] / 256; /*0x458ac6*/
  EventClass::resetEvent((EventClass *)&v31, 0, 0); /*0x458acb*/
  v31 = &DynamicVectorClass<TechnoClass *>::`vftable'; /*0x458ad0*/
  v36 = 10; /*0x458ad8*/
  v35 = 0; /*0x458ae0*/
  while ( *v3 != 0x7FFF || v3[1] != 0x7FFF ) /*0x458af8*/
  {
    v4 = v3; /*0x458afe*/
    v3 += 2; /*0x458b00*/
    v5 = v24 + v4[1]; /*0x458b0f*/
    LOWORD(v25) = v23 + *v4; /*0x458b14*/
    HIWORD(v25) = v5; /*0x458b1d*/
    *(_DWORD *)v27 = v25; /*0x458b2c*/
    v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v27); /*0x458b35*/
    if ( v6[17] != -1 ) /*0x458b3d*/
    {
      v6[17] = -1; /*0x458b3f*/
      *((_BYTE *)v6 + 286) = 0; /*0x458b42*/
      v6[16] = 0; /*0x458b48*/
    }
    v7 = (_BYTE *)v6[57]; /*0x458b4b*/
    if ( v7 ) /*0x458b53*/
    {
      while ( (v7[20] & 1) != 0 && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v7 + 44))(v7) != 6 ) /*0x458b65*/
      {
        if ( v35 < v33 /*0x458b91*/
          || (BYTE1(v34) || !v33)
          && v36 > 0
          && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v31[2])(&v31, v36 + v33, 0) )
        {
          v8 = v35++; /*0x458b9c*/
          *((_DWORD *)Block + v8) = v7; /*0x458ba7*/
        }
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v7 + 212))(v7); /*0x458bae*/
        v7 = (_BYTE *)v6[57]; /*0x458bb4*/
        if ( !v7 ) /*0x458bbc*/
          goto LABEL_2; /*0x458bbc*/
      }
      for ( i = v35 - 1; i >= 0; --i ) /*0x458bcc*/
      {
        v10 = (_DWORD *)*((_DWORD *)Block + i); /*0x458bd7*/
        v28 = v10[39]; /*0x458be6*/
        *(_DWORD *)v29 = v10[40]; /*0x458bed*/
        v30 = v10[41]; /*0x458bf9*/
        if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int *, _DWORD))(*v10 + 216))(v10, &v28, 0) ) /*0x458c01*/
          (*(void (__thiscall **)(_DWORD *))(*v10 + 248))(v10); /*0x458c0f*/
      }
      goto LABEL_28; /*0x458c16*/
    }
LABEL_2:
    v1 = v26; /*0x458ae6*/
  }
  if ( !(*((unsigned __int8 (__thiscall **)(TechnoClass *, _DWORD *, int))v1->RadioClass + 54))(v1, v37, v38) ) /*0x458c28*/
  {
    (*((void (__thiscall **)(TechnoClass *))v1->RadioClass + 62))(v1); /*0x458c3a*/
    for ( j = v35 - 1; j >= 0; --j ) /*0x458c49*/
    {
      v12 = (_DWORD *)*((_DWORD *)Block + j); /*0x458c50*/
      v28 = v12[39]; /*0x458c5f*/
      *(_DWORD *)v29 = v12[40]; /*0x458c68*/
      v30 = v12[41]; /*0x458c6f*/
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int *, _DWORD))(*v12 + 216))(v12, &v28, 0) ) /*0x458c7a*/
        (*(void (__thiscall **)(_DWORD *))(*v12 + 248))(v12); /*0x458c88*/
    }
LABEL_28:
    result = (int)Block; /*0x458c91*/
    v35 = 0; /*0x458c95*/
    if ( Block && BYTE1(v34) ) /*0x458ca1*/
      __3_YAXPAX_Z(Block); /*0x458ca4*/
    LOBYTE(result) = 0; /*0x458caf*/
    return result; /*0x458cb5*/
  }
  for ( k = v35 - 1; k >= 0; --k ) /*0x458cc1*/
  {
    v15 = (int *)*((_DWORD *)Block + k); /*0x458cd9*/
    v40 = *(_DWORD *)(*(int (__thiscall **)(int *, int *, int *, int))(*v15 + 440))(v15, &v25, v21, v22); /*0x458cfb*/
    v16 = *v15; /*0x458cff*/
    v39 = 0; /*0x458d07*/
    v17 = (*(int (__thiscall **)(int *))(v16 + 132))(v15); /*0x458d11*/
    *(_DWORD *)v29 = *LayerClass::Pathfinding_Find( /*0x458d38*/
                        &stru_87F5F0.__pad_58[416],
                        (int)&v40,
                        &v26,
                        (__int16 *)&v40,
                        *(_DWORD *)(v17 + 1660),
                        -1,
                        0,
                        0,
                        1,
                        1,
                        0,
                        0,
                        0,
                        1,
                        (__int16 *)&v39,
                        0,
                        0);
    v18 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v29); /*0x458d42*/
    v22 = 0; /*0x458d4d*/
    v19 = *v18; /*0x458d4e*/
    v21 = &v30; /*0x458d50*/
    v28 = *v15; /*0x458d53*/
    v20 = (*(int (__thiscall **)(int *))(v19 + 72))(v18); /*0x458d57*/
    if ( !(*(unsigned __int8 (__thiscall **)(int *, int))(*(_DWORD *)v27 + 216))(v15, v20) ) /*0x458d61*/
      (*(void (__thiscall **)(int *))(*v15 + 248))(v15); /*0x458d6f*/
  }
  result = (int)Block; /*0x458d7e*/
  v31 = &VectorClass<TechnoClass *>::`vftable'; /*0x458d82*/
  if ( Block && BYTE1(v34) ) /*0x458d92*/
    __3_YAXPAX_Z(Block); /*0x458d95*/
  LOBYTE(result) = 1; /*0x458da0*/
  return result; /*0x458cac*/
}



// ==== 0x00458DB0  BuildingClass::HasActiveParam  this=BuildingClass  sig=csp ====
bool __thiscall BuildingClass::HasActiveParam(BuildingClass *this)
{
  return (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 256))(this) /*0x458dbf*/
      || TechnoClass::HasActiveParam((TechnoClass *)this);
}



// ==== 0x00458DD0  BuildingClass::CheckMissionGuard  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CheckMissionGuard(BuildingClass *this)
{
  BuildingTypeClass *Type; // eax

  Type = this->Type; /*0x458dd0*/
  return Type->CanBeOccupied /*0x458dfb*/
      && Type->CanOccupyFire
      && (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 258))(this) > 0;
}



// ==== 0x00458E00  BuildingClass::CheckMissionAttack  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CheckMissionAttack(BuildingClass *this)
{
  int FoundationHeight; // edi

  FoundationHeight = BuildingTypeClass::GetFoundationHeight((int *)this->Type, 0); /*0x458e17*/
  if ( BuildingTypeClass::GetFoundationWidth(this->Type) >= FoundationHeight ) /*0x458e20*/
    return BuildingTypeClass::GetFoundationHeight((int *)this->Type, 0) / 2; /*0x458e46*/
  else
    return BuildingTypeClass::GetFoundationWidth(this->Type) / 2; /*0x458e31*/
}



// ==== 0x00458E50  BuildingClass::UpdateBunker  this=BuildingClass  sig=csp ====
char __usercall BuildingClass::UpdateBunker@<al>(BuildingClass *this, double a2@<st0>)
{
  BuildingClass *v2; // ecx
  BuildingClass *v3; // esi
  char *bunkerLinkedUnit; // ebp
  char (__thiscall **vtable0)(BuildingClass *, int, _DWORD); // eax
  char *BunkerState; // eax
  Cell *v7; // eax
  _WORD *v8; // ebx
  Object *v9; // eax
  char *ClosestObjectCell; // eax
  char *v11; // edi
  int v12; // ebx
  int v13; // eax
  _WORD *v14; // edi
  int v15; // ebx
  Object *v16; // eax
  int v19; // eax
  int *v20; // eax
  int v21; // edi
  int v22; // ebx
  int v23; // ecx
  int v24; // eax
  Cell *v25; // eax
  int v26; // edx
  int v28; // ecx
  AnimTypeClass *v29; // eax
  int v30; // edx
  int v33; // ecx
  int v34; // edx
  TechnoClass *v35; // ecx
  int *location; // esi
  double v38; // [esp+10h] [ebp-98h]
  double v39; // [esp+18h] [ebp-90h]
  char v40; // [esp+33h] [ebp-75h]
  int v41; // [esp+34h] [ebp-74h]
  int v42; // [esp+34h] [ebp-74h]
  int v43; // [esp+38h] [ebp-70h]
  int v44; // [esp+38h] [ebp-70h]
  _WORD *v45; // [esp+3Ch] [ebp-6Ch]
  int v46; // [esp+3Ch] [ebp-6Ch]
  int v47; // [esp+3Ch] [ebp-6Ch]
  __int16 v48[2]; // [esp+40h] [ebp-68h] BYREF
  __int16 v49[2]; // [esp+44h] [ebp-64h] BYREF
  int v50; // [esp+48h] [ebp-60h] BYREF
  __int16 v51; // [esp+4Ch] [ebp-5Ch] BYREF
  int v52; // [esp+50h] [ebp-58h] BYREF
  int v53; // [esp+54h] [ebp-54h] BYREF
  int v54; // [esp+58h] [ebp-50h] BYREF
  _DWORD v55[2]; // [esp+5Ch] [ebp-4Ch] BYREF
  _DWORD v56[2]; // [esp+64h] [ebp-44h] BYREF
  _DWORD v57[3]; // [esp+6Ch] [ebp-3Ch] BYREF
  _BYTE v58[8]; // [esp+78h] [ebp-30h] BYREF
  int v59; // [esp+80h] [ebp-28h]
  _BYTE v60[12]; // [esp+84h] [ebp-24h] BYREF
  _BYTE v61[12]; // [esp+90h] [ebp-18h] BYREF
  _BYTE v62[12]; // [esp+9Ch] [ebp-Ch] BYREF

  v3 = v2; /*0x458e56*/
  bunkerLinkedUnit = (char *)v2->?; /*0x458e5b*/
  if ( (bunkerLinkedUnit || (bunkerLinkedUnit = (char *)Team::GetMember((Team *)v2, 0)) != 0) /*0x458e7c*/
    && (*(int (__thiscall **)(char *))(*(_DWORD *)bunkerLinkedUnit + 44))(bunkerLinkedUnit) == 1 )
  {
    BunkerState = (char *)v3->BunkerState; /*0x458e99*/
    switch ( (unsigned int)BunkerState ) /*0x458ea8*/
    {
      case 0u: /*0x458ea8*/
        v7 = (Cell *)(*(int (__thiscall **)(char *))(*(_DWORD *)bunkerLinkedUnit + 444))(bunkerLinkedUnit); /*0x458eb4*/
        BunkerState = (char *)Cell::IsBridge(v7); /*0x458ebc*/
        if ( BunkerState == (char *)v3 ) /*0x458ec3*/
        {
          if ( !*((_DWORD *)bunkerLinkedUnit + 413) ) /*0x458ec9*/
            WinAPI::Wrapper(-2147467261); /*0x458ed6*/
          LOBYTE(BunkerState) = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)bunkerLinkedUnit + 413) + 16))(*((_DWORD *)bunkerLinkedUnit + 413)); /*0x458ee4*/
          if ( !(_BYTE)BunkerState ) /*0x458ee9*/
          {
            v8 = (_WORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD))v3->TechnoClass + 66))(v3, 0); /*0x458efe*/
            v45 = v8; /*0x458f05*/
            v41 = *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, int *))v3->TechnoClass + 110))(v3, &v52); /*0x458f11*/
            while ( 1 ) /*0x458f15*/
            {
              LOWORD(BunkerState) = *v8; /*0x458f15*/
              if ( *v8 == 0x7FFF && v8[1] == 0x7FFF ) /*0x458f22*/
                break; /*0x458f22*/
              LOWORD(v43) = v41 + (_WORD)BunkerState; /*0x458f3b*/
              HIWORD(v43) = HIWORD(v41) + v8[1]; /*0x458f40*/
              *(_DWORD *)v48 = v43; /*0x458f4f*/
              v9 = (Object *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x458f53*/
              v55[0] = 128; /*0x458f62*/
              v55[1] = 128; /*0x458f66*/
              ClosestObjectCell = (char *)Object::FindClosestObjectCell(v9, v55, 0, (int)v3); /*0x458f6f*/
              v11 = ClosestObjectCell; /*0x458f74*/
              if ( ClosestObjectCell && ClosestObjectCell != bunkerLinkedUnit ) /*0x458f7c*/
              {
                v12 = *(_DWORD *)ClosestObjectCell; /*0x458f80*/
                v13 = (*((int (__thiscall **)(BuildingClass *, _BYTE *, int, _DWORD))v3->TechnoClass + 18))( /*0x458f8d*/
                        v3,
                        v60,
                        1,
                        0);
                (*(void (__thiscall **)(char *, int))(v12 + 372))(v11, v13); /*0x458f93*/
                v8 = v45; /*0x458f99*/
              }
              v8 += 2; /*0x458f9d*/
              v45 = v8; /*0x458fa0*/
            }
            goto LABEL_25; /*0x458f22*/
          }
        }
        break; /*0x458fa4*/
      case 1u: /*0x458ea8*/
        v40 = 0; /*0x458fae*/
        v14 = (_WORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD))v3->TechnoClass + 66))(v3, 0); /*0x458fbd*/
        v15 = *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, int *))v3->TechnoClass + 110))(v3, &v53); /*0x458fca*/
        while ( *v14 != 0x7FFF || v14[1] != 0x7FFF ) /*0x458fdd*/
        {
          LOWORD(v46) = v15 + *v14; /*0x458fee*/
          HIWORD(v46) = HIWORD(v15) + v14[1]; /*0x458ff4*/
          *(_DWORD *)v49 = v46; /*0x459002*/
          v16 = (Object *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v49); /*0x459006*/
          v56[0] = 128; /*0x459015*/
          v56[1] = 128; /*0x459019*/
          BunkerState = (char *)Object::FindClosestObjectCell(v16, v56, 0, (int)v3); /*0x459022*/
          if ( BunkerState ) /*0x459029*/
          {
            if ( BunkerState != bunkerLinkedUnit ) /*0x45902d*/
            {
              v40 = 1; /*0x459032*/
              if ( (BunkerState[20] & 4) != 0 && !*((_DWORD *)BunkerState + 361) ) /*0x459044*/
              {
LABEL_25:
                v3->BunkerState = 1; /*0x45904b*/
                return (char)BunkerState; /*0x45905c*/
              }
            }
          }
          v14 += 2; /*0x459046*/
        }
        LOBYTE(BunkerState) = v40; /*0x45905d*/
        if ( !v40 ) /*0x459063*/
        {
          _EDI = (int *)(*(int (__thiscall **)(char *, _BYTE *))(*(_DWORD *)bunkerLinkedUnit + 72))( /*0x459078*/
                          bunkerLinkedUnit,
                          v61);
          _EAX = (int *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))v3->TechnoClass + 18))(v3, v58); /*0x459081*/
          v47 = *_EDI; /*0x459088*/
          v44 = *_EAX; /*0x45908c*/
          __asm { fild [esp+88h+var_6C] } /*0x459090*/
          __asm
          {
            fisub [esp+98h+var_70]
            fstp [esp+98h+var_90]; double
            fild dword ptr [eax+4]
            fisub dword ptr [edi+4]
            fstp [esp+98h+var_98]; double
          }
          Math::CalcAngle(v38, v39); /*0x4590ab*/
          __asm { fsub ds:dbl_7E2820 } /*0x4590b0*/
          __asm { fmul ds:dbl_7E2818 }
          LOWORD(v47) = Math::RoundToInt(a2) + 0x7FFF; /*0x4590d6*/
          v50 = v47; /*0x4590df*/
          LOBYTE(BunkerState) = FacingClass::Update(bunkerLinkedUnit + 904, &v50); /*0x4590ea*/
          v3->BunkerState = 2; /*0x4590ef*/
        }
        break; /*0x459100*/
      case 2u: /*0x458ea8*/
        LOBYTE(BunkerState) = TimerClass::Active((int)(bunkerLinkedUnit + 904)); /*0x459109*/
        if ( !(_BYTE)BunkerState ) /*0x459110*/
        {
          v19 = ((unsigned __int16)(*ProgressTimer::GetValue((ProgressTimer *)(bunkerLinkedUnit + 904), &v54) >> 7) + 1) /*0x459128*/
              & 0x1FE;
          if ( v19 == 64 ) /*0x459130*/
          {
            v42 = 67; /*0x459132*/
          }
          else if ( v19 == 448 ) /*0x459141*/
          {
            v42 = 70; /*0x459143*/
          }
          else
          {
            v42 = 68; /*0x459152*/
            if ( v19 != 192 ) /*0x45915a*/
              v42 = 69; /*0x45915c*/
          }
          v20 = (int *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))v3->TechnoClass + 18))(v3, v62); /*0x45916d*/
          v21 = *v20; /*0x459170*/
          v22 = v20[1]; /*0x459172*/
          v23 = v20[2]; /*0x459175*/
          v24 = *((_DWORD *)bunkerLinkedUnit + 413); /*0x459178*/
          v59 = v23; /*0x459180*/
          if ( !v24 ) /*0x459184*/
            WinAPI::Wrapper(-2147467261); /*0x45918b*/
          (*(void (__stdcall **)(_DWORD, int, int, int, int))(**((_DWORD **)bunkerLinkedUnit + 413) + 112))( /*0x4591af*/
            *((_DWORD *)bunkerLinkedUnit + 413),
            v42,
            v21,
            v22,
            v59);
          LOBYTE(BunkerState) = (*(int (__thiscall **)(char *, _DWORD, int))(*(_DWORD *)bunkerLinkedUnit + 1348))( /*0x4591be*/
                                  bunkerLinkedUnit,
                                  0,
                                  1072693248);
          v3->BunkerState = 3; /*0x4591c4*/
        }
        break; /*0x4591d5*/
      case 3u: /*0x458ea8*/
        v25 = (Cell *)(*(int (__thiscall **)(char *))(*(_DWORD *)bunkerLinkedUnit + 444))(bunkerLinkedUnit); /*0x4591db*/
        BunkerState = (char *)Cell::IsBridge(v25); /*0x4591e3*/
        if ( BunkerState == (char *)v3 ) /*0x4591ea*/
        {
          if ( !*((_DWORD *)bunkerLinkedUnit + 413) ) /*0x4591f0*/
            WinAPI::Wrapper(-2147467261); /*0x4591fd*/
          LOBYTE(BunkerState) = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)bunkerLinkedUnit + 413) + 16))(*((_DWORD *)bunkerLinkedUnit + 413)); /*0x45920b*/
          if ( !(_BYTE)BunkerState ) /*0x459210*/
          {
            v51 = 0x8000; /*0x459221*/
            LOBYTE(BunkerState) = FacingClass::Update(bunkerLinkedUnit + 904, &v51); /*0x459228*/
            v3->BunkerState = 4; /*0x45922d*/
          }
        }
        break; /*0x45923e*/
      case 4u: /*0x458ea8*/
        LOBYTE(BunkerState) = TimerClass::Active((int)(bunkerLinkedUnit + 904)); /*0x459245*/
        if ( !(_BYTE)BunkerState ) /*0x45924c*/
        {
          BuildingClass::GetHealthRatio(v3); /*0x459254*/
          _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x459259*/
          __asm /*0x45925e*/
          {
            fcomp qword ptr [eax+1700h]
            fnstsw ax
          }
          if ( (_EAX & 0x4100) != 0 ) /*0x459269*/
          {
            v28 = 1; /*0x459271*/
            v29 = (AnimTypeClass *)&v3->Type->__pad_F70[660]; /*0x459276*/
          }
          else
          {
            v28 = 0; /*0x459283*/
            v29 = (AnimTypeClass *)&v3->Type->__pad_F70[644]; /*0x459285*/
          }
          if ( v29 && LOBYTE(v29->ObjectTypeClass) ) /*0x45928e*/
            BuildingClass::PlayAnim(v3, v26, v29, 10, v28, 0, 0); /*0x45929b*/
          BuildingClass::GetHealthRatio(v3); /*0x4592a2*/
          _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4592a7*/
          __asm /*0x4592ad*/
          {
            fcomp qword ptr [ecx+1700h]
            fnstsw ax
          }
          if ( (_AX & 0x4100) != 0 ) /*0x4592b8*/
          {
            v33 = 1; /*0x4592c0*/
            BunkerState = &v3->Type->__pad_F70[728]; /*0x4592c5*/
          }
          else
          {
            v33 = 0; /*0x4592d2*/
            BunkerState = &v3->Type->__pad_F70[712]; /*0x4592d4*/
          }
          if ( BunkerState && *BunkerState ) /*0x4592dd*/
            LOBYTE(BunkerState) = BuildingClass::PlayAnim(v3, v30, (AnimTypeClass *)BunkerState, 11, v33, 0, 0); /*0x4592ea*/
          v3->BunkerState = 5; /*0x4592ef*/
        }
        break; /*0x459300*/
      case 5u: /*0x458ea8*/
        v3->? = (TechnoClass *)bunkerLinkedUnit; /*0x459301*/
        v34 = *(_DWORD *)bunkerLinkedUnit; /*0x459307*/
        *((_DWORD *)bunkerLinkedUnit + 185) = v3; /*0x45930f*/
        *((_DWORD *)bunkerLinkedUnit + 133) = -1; /*0x459315*/
        (*(void (__thiscall **)(char *))(v34 + 336))(bunkerLinkedUnit); /*0x45931b*/
        v35 = v3->?; /*0x459321*/
        v3->BunkerState = 6; /*0x459327*/
        (*((void (__thiscall **)(TechnoClass *, int, int))v35->RadioClass + 122))(v35, 5, 1); /*0x459337*/
        LOBYTE(BunkerState) = DSurface_ViewBounds.__pad_FC[324]; /*0x45933d*/
        if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 576) != -1 ) /*0x459348*/
        {
          location = v3->?; /*0x45934a*/
          v57[0] = *location; /*0x459353*/
          v57[1] = location[1]; /*0x45935a*/
          v57[2] = location[2]; /*0x459365*/
          LOBYTE(BunkerState) = (unsigned __int8)StartAudioControllerAt( /*0x45936f*/
                                                   *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 576),
                                                   v57,
                                                   0);
        }
        break; /*0x45936f*/
      default:
        return (char)BunkerState;
    }
  }
  else
  {
    vtable0 = (char (__thiscall **)(BuildingClass *, int, _DWORD))v3->TechnoClass; /*0x458e7e*/
    v3->BunkerState = 0; /*0x458e85*/
    LOBYTE(BunkerState) = vtable0[122](v3, 5, 0); /*0x458e8b*/
  }
  return (char)BunkerState; /*0x458e91*/
}



// ==== 0x004593A0  BuildingClass::RemoveLimpet  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::RemoveLimpet(BuildingClass *this)
{
  TechnoClass *bunkerLinkedUnit; // esi
  int *v3; // eax
  int v4; // ebx
  int v5; // ebp
  int v6; // ecx
  int v7; // eax
  int v8; // ebx
  int v9; // ebp
  void (__thiscall **vtable0)(BuildingClass *, int); // eax
  int v11; // [esp+10h] [ebp-Ch] BYREF
  int v12; // [esp+18h] [ebp-4h]

  bunkerLinkedUnit = this->?; /*0x4593a9*/
  if ( bunkerLinkedUnit && (*((int (__thiscall **)(TechnoClass *))bunkerLinkedUnit->RadioClass + 11))(this->?) == 1 ) /*0x4593c1*/
  {
    if ( !bunkerLinkedUnit[1].alignmentPadding154[0] ) /*0x4593c7*/
      WinAPI::Wrapper(-2147467261); /*0x4593d6*/
    (*(void (__stdcall **)(int))(*(_DWORD *)bunkerLinkedUnit[1].alignmentPadding154[0] + 88))(bunkerLinkedUnit[1].alignmentPadding154[0]); /*0x4593e4*/
    v3 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 18))(this, &v11); /*0x4593f0*/
    v4 = *v3; /*0x4593f3*/
    v5 = v3[1]; /*0x4593f5*/
    v6 = v3[2]; /*0x4593f8*/
    v7 = bunkerLinkedUnit[1].alignmentPadding154[0]; /*0x4593fb*/
    v8 = v4 - 128; /*0x459401*/
    v9 = v5 + 128; /*0x459407*/
    v12 = v6; /*0x45940f*/
    if ( !v7 ) /*0x459413*/
      WinAPI::Wrapper(-2147467261); /*0x45941a*/
    (*(void (__stdcall **)(int, int, int, int, int))(*(_DWORD *)bunkerLinkedUnit[1].alignmentPadding154[0] + 112))( /*0x45943b*/
      bunkerLinkedUnit[1].alignmentPadding154[0],
      71,
      v8,
      v9,
      v12);
    (*((void (__thiscall **)(TechnoClass *, _DWORD, int))bunkerLinkedUnit->RadioClass + 337))( /*0x45944a*/
      bunkerLinkedUnit,
      0,
      1072693248);
    bunkerLinkedUnit->bunkerLinkedUnit = 0; /*0x459450*/
    vtable0 = (void (__thiscall **)(BuildingClass *, int))this->TechnoClass; /*0x459456*/
    this->? = 0; /*0x45945c*/
    vtable0[157](this, 3); /*0x459462*/
  }
}



// ==== 0x00459470  BuildingClass::UpdateDamageAnim  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::UpdateDamageAnim(BuildingClass *this)
{
  int result; // eax
  int v5; // ecx
  char *v6; // eax
  int v7; // edx
  int v9; // ecx
  char *v10; // eax
  int (__thiscall **vtable0)(BuildingClass *, int, _DWORD); // edx
  _DWORD v12[3]; // [esp+4h] [ebp-Ch] BYREF

  BuildingClass::ClearAnims(this, 10); /*0x459478*/
  BuildingClass::ClearAnims(this, 11); /*0x459481*/
  result = (int)this->?; /*0x459486*/
  if ( result ) /*0x45948e*/
  {
    if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 580) != -1 ) /*0x4594a0*/
    {
      v12[0] = this->?[0]; /*0x4594ac*/
      v12[1] = this->?[1]; /*0x4594b3*/
      v12[2] = this->?[2]; /*0x4594be*/
      StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 580), v12, 0); /*0x4594c8*/
    }
    BuildingClass::GetHealthRatio(this); /*0x4594cf*/
    _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4594d4*/
    __asm /*0x4594da*/
    {
      fcomp qword ptr [edx+1700h]
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x4594e5*/
    {
      v5 = 1; /*0x4594ed*/
      v6 = &this->Type->__pad_F70[796]; /*0x4594f2*/
    }
    else
    {
      v5 = 0; /*0x4594ff*/
      v6 = &this->Type->__pad_F70[780]; /*0x459501*/
    }
    if ( v6 && *v6 ) /*0x45950a*/
      BuildingClass::PlayAnim(this, *(int *)&DSurface_ViewBounds.__pad_FC[324], (AnimTypeClass *)v6, 12, v5, 0, 0); /*0x459519*/
    BuildingClass::GetHealthRatio(this); /*0x459520*/
    _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x459525*/
    __asm /*0x45952a*/
    {
      fcomp qword ptr [eax+1700h]
      fnstsw ax
    }
    if ( (_EAX & 0x4100) != 0 ) /*0x459535*/
    {
      v9 = 1; /*0x45953d*/
      v10 = &this->Type->__pad_F70[864]; /*0x459542*/
    }
    else
    {
      v9 = 0; /*0x45954f*/
      v10 = &this->Type->__pad_F70[848]; /*0x459551*/
    }
    if ( v10 ) /*0x459558*/
    {
      if ( *v10 ) /*0x45955a*/
        BuildingClass::PlayAnim(this, v7, (AnimTypeClass *)v10, 13, v9, 0, 0); /*0x459569*/
    }
    (*((void (__thiscall **)(BuildingClass *, int))this->TechnoClass + 157))(this, 3); /*0x459574*/
    this->?->bunkerLinkedUnit = 0; /*0x459586*/
    vtable0 = (int (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass; /*0x459590*/
    this->? = 0; /*0x459592*/
    this->BunkerState = 0; /*0x45959c*/
    return vtable0[122](this, 5, 0); /*0x4595a6*/
  }
  return result; /*0x4595ac*/
}



// ==== 0x004595C0  BuildingClass::EmptyBunker  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::EmptyBunker(BuildingClass *this)
{
  int v4; // ecx
  char *v5; // eax
  int v6; // edx
  int v8; // ecx
  char *v9; // eax
  TechnoClass *bunkerLinkedUnit; // esi
  int (__thiscall **v11)(BuildingClass *, int, _DWORD); // edx
  int result; // eax
  int *v13; // eax
  int v14; // ebp
  int v15; // ebx
  int v16; // ecx
  int v17; // eax
  int v18; // ebp
  int v19; // ebx
  __int16 *v20; // eax
  __int16 v21; // dx
  int (__thiscall **vtable0)(TechnoClass *); // eax
  int v23; // eax
  __int16 *v24; // eax
  void *v25; // eax
  void (__thiscall **v26)(BuildingClass *, int, _DWORD); // edx
  int v27; // [esp+18h] [ebp-28h]
  int v28; // [esp+1Ch] [ebp-24h]
  int v29; // [esp+30h] [ebp-10h] BYREF
  int v30; // [esp+34h] [ebp-Ch] BYREF
  int v31; // [esp+38h] [ebp-8h] BYREF
  int v32; // [esp+3Ch] [ebp-4h]

  BuildingClass::ClearAnims(this, 10); /*0x4595cb*/
  BuildingClass::ClearAnims(this, 11); /*0x4595d4*/
  if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 580) != -1 ) /*0x4595e5*/
  {
    v30 = this->?[0]; /*0x4595f1*/
    v31 = this->?[1]; /*0x4595f8*/
    v32 = this->?[2]; /*0x459603*/
    StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 580), &v30, 0); /*0x45960d*/
  }
  BuildingClass::GetHealthRatio(this); /*0x459614*/
  _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x459619*/
  __asm /*0x45961f*/
  {
    fcomp qword ptr [edx+1700h]
    fnstsw ax
  }
  if ( (_AX & 0x4100) != 0 ) /*0x45962a*/
  {
    v4 = 1; /*0x459632*/
    v5 = &this->Type->__pad_F70[796]; /*0x459637*/
  }
  else
  {
    v4 = 0; /*0x459644*/
    v5 = &this->Type->__pad_F70[780]; /*0x459646*/
  }
  if ( v5 && *v5 ) /*0x459651*/
    BuildingClass::PlayAnim(this, *(int *)&DSurface_ViewBounds.__pad_FC[324], (AnimTypeClass *)v5, 12, v4, 0, 0); /*0x45965e*/
  BuildingClass::GetHealthRatio(this); /*0x459665*/
  _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x45966a*/
  __asm /*0x45966f*/
  {
    fcomp qword ptr [eax+1700h]
    fnstsw ax
  }
  if ( (_EAX & 0x4100) != 0 ) /*0x45967a*/
  {
    v8 = 1; /*0x459682*/
    v9 = &this->Type->__pad_F70[864]; /*0x459687*/
  }
  else
  {
    v8 = 0; /*0x459694*/
    v9 = &this->Type->__pad_F70[848]; /*0x459696*/
  }
  if ( v9 && *v9 ) /*0x45969f*/
    BuildingClass::PlayAnim(this, v6, (AnimTypeClass *)v9, 13, v8, 0, 0); /*0x4596ac*/
  bunkerLinkedUnit = this->?; /*0x4596b1*/
  if ( bunkerLinkedUnit ) /*0x4596b9*/
  {
    result = (*((int (__thiscall **)(TechnoClass *))bunkerLinkedUnit->RadioClass + 11))(this->?); /*0x4596da*/
    if ( result == 1 ) /*0x4596e0*/
    {
      bunkerLinkedUnit->bunkerLinkedUnit = 0; /*0x4596e6*/
      if ( !bunkerLinkedUnit[1].alignmentPadding154[0] ) /*0x4596ec*/
        WinAPI::Wrapper(-2147467261); /*0x4596fb*/
      (*(void (__stdcall **)(int))(*(_DWORD *)bunkerLinkedUnit[1].alignmentPadding154[0] + 88))(bunkerLinkedUnit[1].alignmentPadding154[0]); /*0x459709*/
      v13 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 18))(this, &v30); /*0x459715*/
      v14 = *v13; /*0x459718*/
      v15 = v13[1]; /*0x45971a*/
      v16 = v13[2]; /*0x45971d*/
      v17 = bunkerLinkedUnit[1].alignmentPadding154[0]; /*0x459720*/
      v18 = v14 - 128; /*0x459726*/
      v19 = v15 + 128; /*0x45972c*/
      v32 = v16; /*0x459734*/
      if ( !v17 ) /*0x459738*/
        WinAPI::Wrapper(-2147467261); /*0x45973f*/
      (*(void (__stdcall **)(int, int, int, int, int, int, int))(*(_DWORD *)bunkerLinkedUnit[1].alignmentPadding154[0] /*0x459760*/
                                                               + 112))(
        bunkerLinkedUnit[1].alignmentPadding154[0],
        71,
        v18,
        v19,
        v32,
        v27,
        v28);
      (*((void (__thiscall **)(TechnoClass *, _DWORD, int))bunkerLinkedUnit->RadioClass + 337))( /*0x45976f*/
        bunkerLinkedUnit,
        0,
        1072693248);
      v20 = (__int16 *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 110))(this, &v31); /*0x45977e*/
      v21 = *v20; /*0x459784*/
      LOWORD(v20) = v20[1] + 1; /*0x45978d*/
      LOWORD(v29) = v21 - 1; /*0x45978f*/
      HIWORD(v29) = (_WORD)v20; /*0x459794*/
      v30 = v29; /*0x4597aa*/
      vtable0 = (int (__thiscall **)(TechnoClass *))bunkerLinkedUnit->RadioClass; /*0x4597b5*/
      v29 = 0; /*0x4597bd*/
      v23 = vtable0[33](bunkerLinkedUnit); /*0x4597c7*/
      v24 = (__int16 *)LayerClass::Pathfinding_Find( /*0x4597e3*/
                         &stru_87F5F0.__pad_58[416],
                         (int)&v30,
                         &v31,
                         (__int16 *)&v30,
                         *(_DWORD *)(v23 + 1660),
                         -1,
                         0,
                         0,
                         1,
                         1,
                         0,
                         0,
                         0,
                         1,
                         (__int16 *)&v29,
                         0,
                         0);
      v25 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24); /*0x4597ee*/
      (*((void (__thiscall **)(TechnoClass *, void *, int))bunkerLinkedUnit->RadioClass + 288))( /*0x4597fa*/
        bunkerLinkedUnit,
        v25,
        1);
      (*((void (__thiscall **)(TechnoClass *, int, _DWORD))bunkerLinkedUnit->RadioClass + 122))(bunkerLinkedUnit, 2, 0); /*0x459807*/
      v26 = (void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass; /*0x45980d*/
      this->? = 0; /*0x459814*/
      this->BunkerState = 0; /*0x45981a*/
      v26[122](this, 5, 0); /*0x459820*/
      return (*((int (__thiscall **)(BuildingClass *, int))this->TechnoClass + 157))(this, 3); /*0x45982c*/
    }
  }
  else
  {
    v11 = (int (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass; /*0x4596bb*/
    this->BunkerState = 0; /*0x4596c2*/
    return v11[122](this, 5, 0); /*0x4596c8*/
  }
  return result; /*0x4596ce*/
}



// ==== 0x00459840  HouseClass::GetRepairStepAmount  this=HouseClass  sig=csp ====
int __thiscall HouseClass::GetRepairStepAmount(HouseClass *this)
{
  _DWORD *v1; // edx
  int result; // eax

  v1 = (_DWORD *)this->builtInfantryTypes[126]; /*0x459840*/
  result = v1[937]; /*0x459846*/
  if ( !result ) /*0x45984e*/
  {
    result = v1[938]; /*0x459850*/
    if ( !result ) /*0x459858*/
    {
      result = v1[939]; /*0x45985a*/
      if ( !result ) /*0x459862*/
        return this->builtInfantryTypes[243]; /*0x459864*/
    }
  }
  return result; /*0x45986a*/
}



// ==== 0x00459870  BuildingClass::MissionStubReturnZero  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::MissionStubReturnZero(BuildingClass *this)
{
  return *(_DWORD *)&this->Type->__pad_F70[1460]; /*0x45987c*/
}



// ==== 0x00459880  BuildingClass::MissionStubReturnZero2  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::MissionStubReturnZero2(BuildingClass *this)
{
  return *(_DWORD *)&this->Type->__pad_F70[1464]; /*0x45988c*/
}



// ==== 0x00459890  BuildingClass::MissionStubReturnZero3  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::MissionStubReturnZero3(BuildingClass *this)
{
  return *(_DWORD *)&this->Type->__pad_F70[1468]; /*0x45989c*/
}



// ==== 0x004598A0  InfantryClass::updateDeployAnimation  this=InfantryClass  sig=csp ====
BOOL __thiscall InfantryClass::updateDeployAnimation(InfantryClass *this)
{
  int planningPathIdx; // eax

  planningPathIdx = this->?; /*0x4598a0*/
  return *(_BYTE *)(planningPathIdx + 5806) || *(_BYTE *)(planningPathIdx + 5807); /*0x4598bc*/
}



// ==== 0x00459900  BuildingClass::SpawnParticles  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::SpawnParticles(BuildingClass *this)
{
  int result; // eax
  int v3; // ebp
  int v4; // ecx
  int v5; // edx
  int *v6; // eax
  int v7; // ebx
  int v8; // edi
  ObjectClass *v9; // eax
  int *RefinerySmokeOffsetTwo; // edx
  int v11; // ecx
  int v12; // edx
  int *v13; // eax
  int v14; // ebx
  int v15; // edi
  ObjectClass *v16; // eax
  int *RefinerySmokeOffsetThree; // edx
  int v18; // ecx
  int v19; // edx
  int *v20; // eax
  int v21; // ebx
  int v22; // edi
  ObjectClass *v23; // eax
  int *RefinerySmokeOffsetFour; // edx
  int v25; // ecx
  int v26; // edx
  int *v27; // eax
  int v28; // ebx
  int v29; // edi
  ObjectClass *v30; // eax
  int v31; // [esp+10h] [ebp-1Ch]
  Coord3D v32; // [esp+14h] [ebp-18h] BYREF
  int v33; // [esp+20h] [ebp-Ch] BYREF
  int v34; // [esp+24h] [ebp-8h]
  int v35; // [esp+28h] [ebp-4h]

  result = (int)this->Type; /*0x459909*/
  v3 = *(_DWORD *)(result + 1908); /*0x45990f*/
  if ( v3 ) /*0x459917*/
  {
    v31 = *(_DWORD *)(result + 5484); /*0x459930*/
    *(_DWORD *)v32.__pad_0 = *(_DWORD *)(result + 1996); /*0x459936*/
    v4 = *(_DWORD *)(result + 2000); /*0x45993c*/
    v32.Coord3D_field_0x04 = v4; /*0x45993f*/
    v5 = *(_DWORD *)(result + 2004); /*0x459943*/
    v32.Coord3D_field_0x08 = v5; /*0x459946*/
    if ( (*(_DWORD *)v32.__pad_0 != g_BuildingClassPool || v4 != dword_89C84C || v5 != dword_89C850) /*0x459965*/
      && !(unsigned __int8)Coord3D::Equals(&v32, &dword_89C870) )
    {
      v6 = (int *)__2_YAPAXI_Z(0x100u); /*0x459973*/
      if ( v6 ) /*0x45997d*/
      {
        v7 = this->?[2]; /*0x459994*/
        v8 = v32.Coord3D_field_0x04 + this->?[1]; /*0x4599a1*/
        v33 = *(_DWORD *)v32.__pad_0 + this->?[0]; /*0x4599a7*/
        v34 = v8; /*0x4599b5*/
        v35 = v32.Coord3D_field_0x08 + v7; /*0x4599b9*/
        v9 = (ObjectClass *)ParticleSystemClass::Constructor(v6, v3, &v33, 0, this, &g_BuildingClassPool, 0); /*0x4599bd*/
      }
      else
      {
        v9 = 0; /*0x4599c4*/
      }
      ObjectClass::SetMember59(v9, v31); /*0x4599cd*/
    }
    RefinerySmokeOffsetTwo = this->Type->?; /*0x4599de*/
    *(_DWORD *)v32.__pad_0 = *RefinerySmokeOffsetTwo; /*0x4599e6*/
    v11 = RefinerySmokeOffsetTwo[1]; /*0x4599ec*/
    v32.Coord3D_field_0x04 = v11; /*0x4599ef*/
    v12 = RefinerySmokeOffsetTwo[2]; /*0x4599f3*/
    v32.Coord3D_field_0x08 = v12; /*0x4599f6*/
    if ( (*(_DWORD *)v32.__pad_0 != g_BuildingClassPool || v11 != dword_89C84C || v12 != dword_89C850) /*0x459a15*/
      && !(unsigned __int8)Coord3D::Equals(&v32, &dword_89C870) )
    {
      v13 = (int *)__2_YAPAXI_Z(0x100u); /*0x459a23*/
      if ( v13 ) /*0x459a2d*/
      {
        v14 = this->?[2]; /*0x459a44*/
        v15 = v32.Coord3D_field_0x04 + this->?[1]; /*0x459a51*/
        v33 = *(_DWORD *)v32.__pad_0 + this->?[0]; /*0x459a57*/
        v34 = v15; /*0x459a65*/
        v35 = v32.Coord3D_field_0x08 + v14; /*0x459a69*/
        v16 = (ObjectClass *)ParticleSystemClass::Constructor(v13, v3, &v33, 0, this, &g_BuildingClassPool, 0); /*0x459a6d*/
      }
      else
      {
        v16 = 0; /*0x459a74*/
      }
      ObjectClass::SetMember59(v16, v31); /*0x459a7d*/
    }
    RefinerySmokeOffsetThree = this->Type->?; /*0x459a8e*/
    *(_DWORD *)v32.__pad_0 = *RefinerySmokeOffsetThree; /*0x459a96*/
    v18 = RefinerySmokeOffsetThree[1]; /*0x459a9c*/
    v32.Coord3D_field_0x04 = v18; /*0x459a9f*/
    v19 = RefinerySmokeOffsetThree[2]; /*0x459aa3*/
    v32.Coord3D_field_0x08 = v19; /*0x459aa6*/
    if ( (*(_DWORD *)v32.__pad_0 != g_BuildingClassPool || v18 != dword_89C84C || v19 != dword_89C850) /*0x459ac5*/
      && !(unsigned __int8)Coord3D::Equals(&v32, &dword_89C870) )
    {
      v20 = (int *)__2_YAPAXI_Z(0x100u); /*0x459ad3*/
      if ( v20 ) /*0x459add*/
      {
        v21 = this->?[2]; /*0x459af4*/
        v22 = v32.Coord3D_field_0x04 + this->?[1]; /*0x459b01*/
        v33 = *(_DWORD *)v32.__pad_0 + this->?[0]; /*0x459b07*/
        v34 = v22; /*0x459b15*/
        v35 = v32.Coord3D_field_0x08 + v21; /*0x459b19*/
        v23 = (ObjectClass *)ParticleSystemClass::Constructor(v20, v3, &v33, 0, this, &g_BuildingClassPool, 0); /*0x459b1d*/
      }
      else
      {
        v23 = 0; /*0x459b24*/
      }
      ObjectClass::SetMember59(v23, v31); /*0x459b2d*/
    }
    RefinerySmokeOffsetFour = this->Type->?; /*0x459b3e*/
    result = *RefinerySmokeOffsetFour; /*0x459b44*/
    *(_DWORD *)v32.__pad_0 = result; /*0x459b46*/
    v25 = RefinerySmokeOffsetFour[1]; /*0x459b4c*/
    v32.Coord3D_field_0x04 = v25; /*0x459b4f*/
    v26 = RefinerySmokeOffsetFour[2]; /*0x459b53*/
    v32.Coord3D_field_0x08 = v26; /*0x459b56*/
    if ( result != g_BuildingClassPool || v25 != dword_89C84C || v26 != dword_89C850 ) /*0x459b6a*/
    {
      result = Coord3D::Equals(&v32, &dword_89C870); /*0x459b79*/
      if ( !(_BYTE)result ) /*0x459b80*/
      {
        v27 = (int *)__2_YAPAXI_Z(0x100u); /*0x459b87*/
        if ( v27 ) /*0x459b91*/
        {
          v28 = this->?[2]; /*0x459ba8*/
          v29 = v32.Coord3D_field_0x04 + this->?[1]; /*0x459bb5*/
          v33 = *(_DWORD *)v32.__pad_0 + this->?[0]; /*0x459bbb*/
          v34 = v29; /*0x459bc9*/
          v35 = v32.Coord3D_field_0x08 + v28; /*0x459bcd*/
          v30 = (ObjectClass *)ParticleSystemClass::Constructor(v27, v3, &v33, 0, this, &g_BuildingClassPool, 0); /*0x459bd1*/
          return ObjectClass::SetMember59(v30, v31); /*0x459bdd*/
        }
        else
        {
          return ObjectClass::SetMember59(0, v31); /*0x459bf3*/
        }
      }
    }
  }
  return result; /*0x459be2*/
}



// ==== 0x00459C00  BuildingClass::IsMassSelectable  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::IsMassSelectable(BuildingClass *this)
{
  int result; // eax

  LOBYTE(result) = BuildingClass::Is1x1AndUndeployable_BuildingMassSelectable((BuildingClass *)this->Type); /*0x459c09*/
  if ( (_BYTE)result ) /*0x459c10*/
    LOBYTE(result) = TechnoClass::CanMoveToCell((TechnoClass *)this); /*0x459c16*/
  return result; /*0x459c12*/
}



// ==== 0x00459C20  BuildingClass::ProcessUpgradeTargeting  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ProcessUpgradeTargeting(BuildingClass *this)
{
  AbstractClass *focus; // ecx
  AbstractClass *v3; // esi
  unsigned int v4; // eax
  BuildingTypeClass *Type; // eax
  int VoiceHarvest; // eax
  int result; // eax

  focus = this->?; /*0x459c23*/
  if ( focus && (*((int (__thiscall **)(AbstractClass *))focus->vtable0 + 11))(focus) == 11 )
  {
    v3 = this->?; /*0x459c38*/
    v4 = v3 ? ((*((int (__thiscall **)(AbstractClass *))v3->vtable0 + 11))(this->?) == 11 ? (unsigned int)v3 : 0) : 0;
    if ( *(_DWORD *)(v4 + 236) == 5 ) /*0x459c62*/
    {
      Type = this->Type; /*0x459c64*/
      if ( Type->? ) /*0x459c6a*/
      {
        if ( Type->? ) /*0x459c74*/
        {
          VoiceHarvest = Type->?; /*0x459c7e*/
          if ( VoiceHarvest != -1 ) /*0x459c87*/
            return (*((int (__thiscall **)(BuildingClass *, int))this->TechnoClass + 213))(this, VoiceHarvest); /*0x459c8e*/
        }
      }
    }
  }
  TechnoClass::PickAlternateTarget((TechnoClass *)this); /*0x459c98*/
  return result; /*0x459c94*/
}



// ==== 0x00459CA0  ObjectClass::ProcessDataCellClass  this=ObjectClass  sig=csp ====
char __thiscall ProcessDataCellClass(TechnoClass *this)
{
  _WORD *v1; // esi
  int v2; // edi
  __int16 v3; // bx
  _WORD *v4; // eax
  __int16 v5; // dx
  bool *v6; // eax
  __int16 v8[2]; // [esp+Ch] [ebp-8h] BYREF
  int v9; // [esp+10h] [ebp-4h] BYREF

  v1 = *(_WORD **)(*((_DWORD *)this + 328) + 3796); /*0x459cad*/
  v2 = *(_DWORD *)(*(int (__thiscall **)(TechnoClass *, int *))(this->vtable0 + 440))(this, &v9); /*0x459cbf*/
  v9 = v2; /*0x459cc3*/
  if ( v1 ) /*0x459cc7*/
  {
    v3 = HIWORD(v9); /*0x459ccd*/
    while ( *v1 != 0x7FFF || v1[1] != 0x7FFF ) /*0x459cdf*/
    {
      v4 = v1; /*0x459ce5*/
      v1 += 2; /*0x459cea*/
      v5 = v3 + v4[1]; /*0x459cf4*/
      LOWORD(v9) = *v4 + v2; /*0x459cf7*/
      HIWORD(v9) = v5; /*0x459d00*/
      *(_DWORD *)v8 = v9; /*0x459d0f*/
      if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, v8) ) /*0x459d13*/
      {
        if ( !*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v8) + 57) ) /*0x459d2b*/
        {
          v6 = (bool *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v8); /*0x459d4d*/
          if ( (unsigned __int8)Cell::IsBuildable(v6, 0, 0, 0, -1, 0, -1, 1) ) /*0x459d54*/
            return 1; /*0x459d69*/
        }
      }
    }
  }
  return 0; /*0x459d61*/
}



// ==== 0x00459D80  TechnoClass::StubReturnFalse  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::StubReturnFalse(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x459d80*/
  return result; /*0x459d82*/
}



// ==== 0x00459D90  TechnoClass::MissionStubReturnZero4  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::MissionStubReturnZero4(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 1; /*0x459d90*/
  return result; /*0x459d92*/
}



// ==== 0x00459DA0  TechnoClass::MissionStubReturnZero5  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::MissionStubReturnZero5(TechnoClass *this)
{
  return 2; /*0x459da5*/
}



// ==== 0x00459DB0  TechnoClass::ClearLimpetCheck  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::ClearLimpetCheck(TechnoClass *this)
{
  _DWORD *v2; // [esp+4h] [ebp+4h]

  *v2 = g_TerrainTypeTable; /*0x459dba*/
  return (int)v2; /*0x459dbc*/
}



// ==== 0x00459DC0  TechnoClass::COMStub_Return0_190  this=TechnoClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_190(TechnoClass *this)
{
  int result; // eax

  return result; /*0x459dc0*/
}



// ==== 0x00459DD0  TechnoClass::StubReturnFalse2  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::StubReturnFalse2(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x459dd0*/
  return result; /*0x459dd2*/
}



// ==== 0x00459DE0  TechnoClass::COMStub_Return0_205  this=TechnoClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_205(TechnoClass *this)
{
  int result; // eax

  return result; /*0x459de0*/
}



// ==== 0x00459DF0  TechnoClass::StubReturnFalse3  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::StubReturnFalse3(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x459df0*/
  return result; /*0x459df2*/
}



// ==== 0x00459E00  TechnoClass::StubReturnFalse4  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::StubReturnFalse4(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x459e00*/
  return result; /*0x459e02*/
}



// ==== 0x00459E10  TechnoClass::StubReturnFalse10  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::StubReturnFalse10(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x459e10*/
  return result; /*0x459e12*/
}



// ==== 0x00459E20  TechnoClass::StubReturnFalse11  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::StubReturnFalse11(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x459e20*/
  return result; /*0x459e22*/
}



// ==== 0x00459E30  TechnoClass::StubReturnFalse12  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::StubReturnFalse12(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x459e30*/
  return result; /*0x459e32*/
}



// ==== 0x00459E40  TechnoClass::StubReturnFalse13  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::StubReturnFalse13(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x459e40*/
  return result; /*0x459e42*/
}



// ==== 0x00459E50  TechnoClass::StubReturnFalse14  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::StubReturnFalse14(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x459e50*/
  return result; /*0x459e52*/
}



// ==== 0x00459E60  TechnoClass::COMStub_Return0_270  this=TechnoClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_270(TechnoClass *this)
{
  int result; // eax

  return result; /*0x459e60*/
}



// ==== 0x00459E70  BuildingClass::Mission_Guard  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::Mission_Guard(BuildingClass *this)
{
  return 1824; /*0x459e75*/
}



// ==== 0x00459E80  BuildingClass::Destroyed  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::Destroyed(BuildingClass *this)
{
  _DWORD *v2; // [esp+8h] [ebp+8h]

  if ( !v2 ) /*0x459e86*/
    return -2147467261; /*0x459e88*/
  *v2 = 237448646; /*0x459e96*/
  v2[1] = 298949647; /*0x459e9e*/
  v2[2] = -1610610249; /*0x459ea7*/
  v2[3] = unk_7E96AC; /*0x459eb0*/
  return 0; /*0x459e8d*/
}



// ==== 0x00459EC0  BuildingClass::Mission_Construction  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::Mission_Construction(BuildingClass *this)
{
  return 6; /*0x459ec5*/
}



// ==== 0x00459ED0  BuildingClass::GetTypeField60  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetTypeField60(BuildingClass *this)
{
  return (int)this->Type->?; /*0x459ed9*/
}



// ==== 0x00459EE0  BuildingClass::GetTypePtr  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetTypePtr(BuildingClass *this)
{
  return (int)this->Type; /*0x459ee6*/
}



// ==== 0x00459EF0  BuildingClass::GetBuildCoordsAdjusted  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetBuildCoordsAdjusted(BuildingClass *this)
{
  int *location; // edx
  int v2; // eax
  int v3; // ecx
  int v4; // esi
  int v6; // edx
  int *v7; // [esp+Ch] [ebp+4h]

  location = this->?; /*0x459ef7*/
  v2 = this->?[0]; /*0x459efa*/
  v3 = this->?[1]; /*0x459efc*/
  v4 = v2 - 128; /*0x459eff*/
  v6 = location[2]; /*0x459f09*/
  *v7 = v4; /*0x459f0e*/
  v7[1] = v3 - 128; /*0x459f10*/
  v7[2] = v6; /*0x459f13*/
  return (int)v7; /*0x459f16*/
}



// ==== 0x00459F20  BuildingClass::ScalarDtor  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ScalarDtor(BuildingClass *this)
{
  char v3; // [esp+8h] [ebp+4h]

  BuildingClass::Dtor(this); /*0x459f23*/
  if ( (v3 & 1) != 0 ) /*0x459f2d*/
    __3_YAXPAX_Z(this); /*0x459f30*/
  return (int)this; /*0x459f3a*/
}



// ==== 0x00459F40  IsObjectTypeBuildingType  this=BuildingClass  sig=ida-proto ====
int __fastcall ObjectType_IsBuildingType(int a1)
{
  if ( a1 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 44))(a1) == 6 ? a1 : 0;
  else
    return 0; /*0x459f47*/
}



// ==== 0x00459F60  Coord3D::Equals  this=Coord3D  sig=csp ====
int __thiscall Coord3D::Equals(Coord3D *this, _DWORD *a2)
{
  return *(_DWORD *)this->__pad_0 == *a2 && this->Coord3D_field_0x04 == a2[1] && this->Coord3D_field_0x08 == a2[2]; /*0x459f84*/
}



// ==== 0x00459F90  _DynamicVectorClass_PBVParticleSystemTypeClass::GetClassIdentifier  this=DynamicVector  sig=csp ====
void __thiscall TypeList_cptr_ParticleSystemTypeClass::GetClassIdentifier(
        _DynamicVectorClass_PBVParticleSystemTypeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x459f96*/
  this->m_10 = 0; /*0x459f99*/
  if ( v2 && BYTE1(this->m_C) ) /*0x459fa0*/
  {
    __3_YAXPAX_Z(v2); /*0x459fa6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x459fae*/
  }
  BYTE1(this->m_C) = 0; /*0x459fb1*/
  this->m_8 = 0; /*0x459fb4*/
}



// ==== 0x00459FC0  _DynamicVectorClass_PBVParticleSystemTypeClass::LoadTypeData  this=DynamicVector  sig=csp ====
unsigned int __thiscall TypeList_cptr_ParticleSystemTypeClass::LoadTypeData(
        _DynamicVectorClass_PBVParticleSystemTypeClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x459fc0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x459fd5*/
  else
    return 0; /*0x459fc7*/
}



// ==== 0x00459FE0  _VectorClass_PBVParticleSystemTypeClass::GetIndex  this=VectorClass  sig=csp ====
int __thiscall TypeList_Particle::GetIndex(_VectorClass_PBVParticleSystemTypeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x459fea*/
}



// ==== 0x00459FF0  ?$DynamicVectorClass@PAVInfantryClass@@::initBuildingData  this=DynamicVector  sig=csp ====
void __thiscall BuildingClass::sub_459FF0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x459ff6*/
  *(_DWORD *)(this + 16) = 0; /*0x459ff9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x45a000*/
  {
    __3_YAXPAX_Z(v2); /*0x45a006*/
    *(_DWORD *)(this + 4) = 0; /*0x45a00e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x45a011*/
  *(_DWORD *)(this + 8) = 0; /*0x45a014*/
}



// ==== 0x0045A020  ?$DynamicVectorClass@PAVInfantryClass@@::updateFactoryProduction  this=DynamicVector  sig=csp ====
unsigned int __thiscall BuildingClass::sub_45A020(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x45a020*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x45a035*/
  else
    return 0; /*0x45a027*/
}



// ==== 0x0045A040  _VectorClass_PAVInfantryClass::Get  this=VectorClass  sig=csp ====
int __thiscall FootClass::Get(_VectorClass_PAVInfantryClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x45a04a*/
}



// ==== 0x0045A050  Stream::GetChecked  this=Stream  sig=csp ====
int __thiscall Stream::GetChecked(Stream *this)
{
  if ( !this->m_Stream ) /*0x45a053*/
    WinAPI::Wrapper(-2147467261); /*0x45a05d*/
  return (int)this->m_Stream->__pad_0; /*0x45a064*/
}



// ==== 0x0045A070  _DynamicVectorClass_PAVFoggedObjectClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_FoggedObjectClass::Destroy(_DynamicVectorClass_PAVFoggedObjectClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x45a076*/
  this->m_10 = 0; /*0x45a079*/
  if ( v2 && BYTE1(this->m_C) ) /*0x45a080*/
  {
    __3_YAXPAX_Z(v2); /*0x45a086*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x45a08e*/
  }
  BYTE1(this->m_C) = 0; /*0x45a091*/
  this->m_8 = 0; /*0x45a094*/
}



// ==== 0x0045A0A0  _DynamicVectorClass_PAVFoggedObjectClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_FoggedObjectClass::GetItemIndex(
        _DynamicVectorClass_PAVFoggedObjectClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x45a0a0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x45a0b5*/
  else
    return 0; /*0x45a0a7*/
}



// ==== 0x0045A0C0  _VectorClass_PAVFoggedObjectClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_FoggedObjectClass::Get(_VectorClass_PAVFoggedObjectClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x45a0ca*/
}



// ==== 0x0045A0D0  _DynamicVectorClass_PAVReestablish::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_Reestablish::Destroy(_DynamicVectorClass_PAVReestablish *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x45a0d6*/
  this->m_10 = 0; /*0x45a0d9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x45a0e0*/
  {
    __3_YAXPAX_Z(v2); /*0x45a0e6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x45a0ee*/
  }
  BYTE1(this->m_C) = 0; /*0x45a0f1*/
  this->m_8 = 0; /*0x45a0f4*/
}



// ==== 0x0045A100  _DynamicVectorClass_PAVReestablish::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_Reestablish::GetItemIndex(_DynamicVectorClass_PAVReestablish *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x45a100*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x45a115*/
  else
    return 0; /*0x45a107*/
}



// ==== 0x0045A120  _VectorClass_PAVReestablish::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_Reestablish::Clear(_VectorClass_PAVReestablish *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x45a12a*/
}



// ==== 0x0045A130  Rect::Construct  this=Rect  sig=csp ====
_DWORD *__thiscall Rect::Construct(Rect *this, _DWORD *a2, int a3, int a4)
{
  this->X = *a2; /*0x45a138*/
  this->Y = a2[1]; /*0x45a141*/
  this->Width = a3; /*0x45a148*/
  this->Height = a4; /*0x45a14b*/
  return &this->X; /*0x45a14e*/
}



// ==== 0x0045A160  ObjectClass::Release2COM  this=ObjectClass  sig=csp ====
int __thiscall Release2COM(ObjectClass *this)
{
  int result; // eax

  result = (int)this->AbstractClass; /*0x45a160*/
  if ( this->AbstractClass ) /*0x45a160*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x45a169*/
  return result; /*0x45a16c*/
}



// ==== 0x0045A170  CellClass::SetField2C  this=CellClass  sig=csp ====
int __thiscall CellClass::SetField2C(CellClass *this)
{
  int result; // eax

  result = this->mapCoords[0]; /*0x45a170*/
  if ( this->mapCoords[0] ) /*0x45a170*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 4))(result); /*0x45a179*/
  return result; /*0x45a17c*/
}



// ==== 0x0045A180  _VectorClass_PBVParticleSystemTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall TypeList_Particle::AddRef(_VectorClass_PBVParticleSystemTypeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x45a182*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x45a18d*/
  {
    v3 = 0; /*0x45a18f*/
    if ( m_8 <= 0 ) /*0x45a193*/
      return 1; /*0x45a1b3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x45a195*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x45a19b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x45a1a4*/
    {
      ++v3; /*0x45a1a6*/
      ++v4; /*0x45a1a7*/
      if ( v3 >= m_8 ) /*0x45a1ac*/
        return 1; /*0x45a1ac*/
    }
  }
  return 0; /*0x45a1ae*/
}



// ==== 0x0045A1C0  _VectorClass_PBVParticleSystemTypeClass::Remove  this=VectorClass  sig=csp ====
char __thiscall TypeList_Particle::Remove(_VectorClass_PBVParticleSystemTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x45a1cc*/
  {
    LOBYTE(this->m_C) = 0; /*0x45a1d6*/
    if ( a3 ) /*0x45a1dc*/
      v4 = a3; /*0x45a1f2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x45a1ee*/
    LOBYTE(this->m_C) = 1; /*0x45a1f6*/
    if ( v4 ) /*0x45a1fa*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x45a205*/
      {
        m_8 = this->m_8; /*0x45a20c*/
        if ( a2 < m_8 ) /*0x45a211*/
          m_8 = a2; /*0x45a213*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x45a219*/
          ++i; /*0x45a21e*/
        if ( BYTE1(this->m_C) ) /*0x45a22b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x45a236*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x45a23e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x45a247*/
      this->m_8 = a2; /*0x45a24f*/
      BYTE1(this->m_C) = a3 == 0; /*0x45a252*/
      return 1; /*0x45a258*/
    }
    else
    {
      return 0; /*0x45a1ff*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBVParticleSystemTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x45a262*/
    return 1; /*0x45a268*/
  }
}



// ==== 0x0045A270  ?$VectorClass@PBVParticleSystemTypeClass@@::Cleanup  this=VectorClass  sig=csp ====
void __thiscall VectorClass_Cleanup(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x45a27d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x45a283*/
    *(_DWORD *)(this + 4) = 0; /*0x45a28b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x45a28e*/
  *(_DWORD *)(this + 8) = 0; /*0x45a291*/
}



// ==== 0x0045A2A0  _VectorClass_PBVParticleSystemTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall TypeList_Particle::GetSize(_VectorClass_PBVParticleSystemTypeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x45a2a0*/
    return 0; /*0x45a2a8*/
  m_8 = this->m_8; /*0x45a2ae*/
  result = 0; /*0x45a2b1*/
  if ( m_8 <= 0 ) /*0x45a2b5*/
    return -1; /*0x45a2cc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x45a2bb*/
  {
    if ( ++result >= m_8 ) /*0x45a2ca*/
      return -1; /*0x45a2ca*/
  }
  return result; /*0x45a2aa*/
}



// ==== 0x0045A2E0  _VectorClass_PBVParticleSystemTypeClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall TypeList_Particle::GetCapacity(_VectorClass_PBVParticleSystemTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x45a2e0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x45a2f5*/
  else
    return 0; /*0x45a2e7*/
}



// ==== 0x0045A300  _DynamicVectorClass_PBVParticleSystemTypeClass::Add  this=DynamicVector  sig=csp ====
char __thiscall TypeList_cptr_ParticleSystemTypeClass::Add(
        _DynamicVectorClass_PBVParticleSystemTypeClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x45a30c*/
  {
    LOBYTE(this->m_C) = 0; /*0x45a312*/
    if ( a3 ) /*0x45a318*/
      v4 = a3; /*0x45a32e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x45a32a*/
    LOBYTE(this->m_C) = 1; /*0x45a332*/
    if ( !v4 ) /*0x45a336*/
      return 0; /*0x45a3aa*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x45a338*/
    {
      m_8 = this->m_8; /*0x45a33f*/
      if ( a2 < m_8 ) /*0x45a344*/
        m_8 = a2; /*0x45a346*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x45a34c*/
        ++i; /*0x45a351*/
      if ( BYTE1(this->m_C) ) /*0x45a35e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x45a369*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x45a371*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x45a37a*/
    this->m_8 = a2; /*0x45a382*/
    BYTE1(this->m_C) = a3 == 0; /*0x45a385*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PBVParticleSystemTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x45a38e*/
  }
  v7 = this->m_8; /*0x45a391*/
  if ( v7 < this->m_10 ) /*0x45a399*/
    this->m_10 = v7; /*0x45a39b*/
  return 1; /*0x45a39e*/
}



// ==== 0x0045A3B0  _DynamicVectorClass_PBVParticleSystemTypeClass::Remove  this=DynamicVector  sig=csp ====
int __thiscall TypeList_cptr_ParticleSystemTypeClass::Remove(
        _DynamicVectorClass_PBVParticleSystemTypeClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x45a3b0*/
  result = 0; /*0x45a3b3*/
  if ( m_10 <= 0 ) /*0x45a3b8*/
    return -1; /*0x45a3cf*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x45a3be*/
  {
    if ( ++result >= m_10 ) /*0x45a3cd*/
      return -1; /*0x45a3cd*/
  }
  return result; /*0x45a3d2*/
}



// ==== 0x0045A3E0  _VectorClass_PAVInfantryClass::Add  this=VectorClass  sig=csp ====
char __thiscall FootClass::Add(_VectorClass_PAVInfantryClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x45a3e2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x45a3ed*/
  {
    v3 = 0; /*0x45a3ef*/
    if ( m_8 <= 0 ) /*0x45a3f3*/
      return 1; /*0x45a413*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x45a3f5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x45a3fb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x45a404*/
    {
      ++v3; /*0x45a406*/
      ++v4; /*0x45a407*/
      if ( v3 >= m_8 ) /*0x45a40c*/
        return 1; /*0x45a40c*/
    }
  }
  return 0; /*0x45a40e*/
}



// ==== 0x0045A420  ?$VectorClass@PAVInfantryClass@@::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_InfantryClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x45a42c*/
  {
    this->IsInitialized = 0; /*0x45a436*/
    if ( a3 ) /*0x45a43c*/
      v4 = a3; /*0x45a452*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x45a44e*/
    this->IsInitialized = 1; /*0x45a456*/
    if ( v4 ) /*0x45a45a*/
    {
      if ( this->Items ) /*0x45a465*/
      {
        v6 = this->Capacity; /*0x45a46c*/
        if ( a2 < v6 ) /*0x45a471*/
          v6 = a2; /*0x45a473*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x45a479*/
          ++i; /*0x45a47e*/
        if ( this->IsAllocated ) /*0x45a48b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x45a496*/
          this->Items = 0; /*0x45a49e*/
        }
      }
      this->Items = v4; /*0x45a4a7*/
      this->Capacity = a2; /*0x45a4af*/
      this->IsAllocated = a3 == 0; /*0x45a4b2*/
      return 1; /*0x45a4b8*/
    }
    else
    {
      return 0; /*0x45a45f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x45a4c2*/
    return 1; /*0x45a4c8*/
  }
}



// ==== 0x0045A4D0  _VectorClass_PAVInfantryClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_InfantryClass::Remove(_VectorClass_PAVInfantryClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && this->m_D[0] ) /*0x45a4dd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x45a4e3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x45a4eb*/
  }
  this->m_D[0] = 0; /*0x45a4ee*/
  this->m_8 = 0; /*0x45a4f1*/
}



// ==== 0x0045A500  ?$VectorClass@PAVInfantryClass@@::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_InfantryClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x45a500*/
    return 0; /*0x45a508*/
  v3 = *(_DWORD *)(this + 8); /*0x45a50e*/
  result = 0; /*0x45a511*/
  if ( v3 <= 0 ) /*0x45a515*/
    return -1; /*0x45a52c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x45a51b*/
  {
    if ( ++result >= v3 ) /*0x45a52a*/
      return -1; /*0x45a52a*/
  }
  return result; /*0x45a50a*/
}



// ==== 0x0045A540  ?$VectorClass@PAVInfantryClass@@::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_InfantryClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x45a540*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x45a555*/
  else
    return 0; /*0x45a547*/
}



// ==== 0x0045A560  ?$DynamicVectorClass@PAVInfantryClass@@::ResizeOccupiedCellList  this=DynamicVector  sig=csp ====
char __thiscall BuildingClass::sub_45A560(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x45a56c*/
  {
    this->IsInitialized = 0; /*0x45a572*/
    if ( a3 ) /*0x45a578*/
      v4 = a3; /*0x45a58e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x45a58a*/
    this->IsInitialized = 1; /*0x45a592*/
    if ( !v4 ) /*0x45a596*/
      return 0; /*0x45a60a*/
    if ( this->Items ) /*0x45a598*/
    {
      v5 = this->q008; /*0x45a59f*/
      if ( a2 < v5 ) /*0x45a5a4*/
        v5 = a2; /*0x45a5a6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x45a5ac*/
        ++i; /*0x45a5b1*/
      if ( this->IsAllocated ) /*0x45a5be*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x45a5c9*/
        this->Items = 0; /*0x45a5d1*/
      }
    }
    this->Items = v4; /*0x45a5da*/
    this->q008 = a2; /*0x45a5e2*/
    this->IsAllocated = a3 == 0; /*0x45a5e5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x45a5ee*/
  }
  v7 = this->q008; /*0x45a5f1*/
  if ( v7 < this->Items ) /*0x45a5f9*/
    this->Items = v7; /*0x45a5fb*/
  return 1; /*0x45a5fe*/
}



// ==== 0x0045A610  ?$DynamicVectorClass@PAVInfantryClass@@::FindInPointerArray  this=DynamicVector  sig=csp ====
int __thiscall BuildingClass::sub_45A610(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x45a610*/
  result = 0; /*0x45a613*/
  if ( v2 <= 0 ) /*0x45a618*/
    return -1; /*0x45a62f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x45a61e*/
  {
    if ( ++result >= v2 ) /*0x45a62d*/
      return -1; /*0x45a62d*/
  }
  return result; /*0x45a632*/
}



// ==== 0x0045A640  _VectorClass_PAVFoggedObjectClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_FoggedObjectClass::Add(_VectorClass_PAVFoggedObjectClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x45a642*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x45a64d*/
  {
    v3 = 0; /*0x45a64f*/
    if ( m_8 <= 0 ) /*0x45a653*/
      return 1; /*0x45a673*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x45a655*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x45a65b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x45a664*/
    {
      ++v3; /*0x45a666*/
      ++v4; /*0x45a667*/
      if ( v3 >= m_8 ) /*0x45a66c*/
        return 1; /*0x45a66c*/
    }
  }
  return 0; /*0x45a66e*/
}



// ==== 0x0045A680  _DynamicVectorClass_PAVFoggedObjectClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_FoggedObjectClass::SetCapacity(
        _DynamicVectorClass_PAVFoggedObjectClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x45a68c*/
  {
    LOBYTE(this->m_C) = 0; /*0x45a692*/
    if ( a3 ) /*0x45a698*/
      v4 = a3; /*0x45a6ae*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x45a6aa*/
    LOBYTE(this->m_C) = 1; /*0x45a6b2*/
    if ( !v4 ) /*0x45a6b6*/
      return 0; /*0x45a72a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x45a6b8*/
    {
      m_8 = this->m_8; /*0x45a6bf*/
      if ( a2 < m_8 ) /*0x45a6c4*/
        m_8 = a2; /*0x45a6c6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x45a6cc*/
        ++i; /*0x45a6d1*/
      if ( BYTE1(this->m_C) ) /*0x45a6de*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x45a6e9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x45a6f1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x45a6fa*/
    this->m_8 = a2; /*0x45a702*/
    BYTE1(this->m_C) = a3 == 0; /*0x45a705*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVFoggedObjectClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x45a70e*/
  }
  v7 = this->m_8; /*0x45a711*/
  if ( v7 < this->m_10 ) /*0x45a719*/
    this->m_10 = v7; /*0x45a71b*/
  return 1; /*0x45a71e*/
}



// ==== 0x0045A730  _DynamicVectorClass_PAVFoggedObjectClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_FoggedObjectClass::FindItemIndex(
        _DynamicVectorClass_PAVFoggedObjectClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x45a730*/
  result = 0; /*0x45a733*/
  if ( m_10 <= 0 ) /*0x45a738*/
    return -1; /*0x45a74f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x45a73e*/
  {
    if ( ++result >= m_10 ) /*0x45a74d*/
      return -1; /*0x45a74d*/
  }
  return result; /*0x45a752*/
}



// ==== 0x0045A760  _VectorClass_PAVReestablish::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_Reestablish::AddRef(_VectorClass_PAVReestablish *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x45a762*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x45a76d*/
  {
    v3 = 0; /*0x45a76f*/
    if ( m_8 <= 0 ) /*0x45a773*/
      return 1; /*0x45a793*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x45a775*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x45a77b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x45a784*/
    {
      ++v3; /*0x45a786*/
      ++v4; /*0x45a787*/
      if ( v3 >= m_8 ) /*0x45a78c*/
        return 1; /*0x45a78c*/
    }
  }
  return 0; /*0x45a78e*/
}



// ==== 0x0045A7A0  _VectorClass_PAVReestablish::Remove  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_Reestablish::Remove(_VectorClass_PAVReestablish *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x45a7ac*/
  {
    LOBYTE(this->m_C) = 0; /*0x45a7b6*/
    if ( a3 ) /*0x45a7bc*/
      v4 = a3; /*0x45a7d2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x45a7ce*/
    LOBYTE(this->m_C) = 1; /*0x45a7d6*/
    if ( v4 ) /*0x45a7da*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x45a7e5*/
      {
        m_8 = this->m_8; /*0x45a7ec*/
        if ( a2 < m_8 ) /*0x45a7f1*/
          m_8 = a2; /*0x45a7f3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x45a7f9*/
          ++i; /*0x45a7fe*/
        if ( BYTE1(this->m_C) ) /*0x45a80b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x45a816*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x45a81e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x45a827*/
      this->m_8 = a2; /*0x45a82f*/
      BYTE1(this->m_C) = a3 == 0; /*0x45a832*/
      return 1; /*0x45a838*/
    }
    else
    {
      return 0; /*0x45a7df*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVReestablish *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x45a842*/
    return 1; /*0x45a848*/
  }
}



// ==== 0x0045A850  _VectorClass_PAVReestablish::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_Reestablish::ddtor(_VectorClass_PAVReestablish *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x45a85d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x45a863*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x45a86b*/
  }
  BYTE1(this->m_C) = 0; /*0x45a86e*/
  this->m_8 = 0; /*0x45a871*/
}



// ==== 0x0045A880  _VectorClass_PAVReestablish::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_Reestablish::GetSize(_VectorClass_PAVReestablish *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x45a880*/
    return 0; /*0x45a888*/
  m_8 = this->m_8; /*0x45a88e*/
  result = 0; /*0x45a891*/
  if ( m_8 <= 0 ) /*0x45a895*/
    return -1; /*0x45a8ac*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x45a89b*/
  {
    if ( ++result >= m_8 ) /*0x45a8aa*/
      return -1; /*0x45a8aa*/
  }
  return result; /*0x45a88a*/
}



// ==== 0x0045A8C0  _VectorClass_PAVReestablish::Get  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_Reestablish::Get(_VectorClass_PAVReestablish *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x45a8c0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x45a8d5*/
  else
    return 0; /*0x45a8c7*/
}



// ==== 0x0045A8E0  _DynamicVectorClass_PAVReestablish::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_Reestablish::SetCapacity(_DynamicVectorClass_PAVReestablish *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x45a8ec*/
  {
    LOBYTE(this->m_C) = 0; /*0x45a8f2*/
    if ( a3 ) /*0x45a8f8*/
      v4 = a3; /*0x45a90e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x45a90a*/
    LOBYTE(this->m_C) = 1; /*0x45a912*/
    if ( !v4 ) /*0x45a916*/
      return 0; /*0x45a98a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x45a918*/
    {
      m_8 = this->m_8; /*0x45a91f*/
      if ( a2 < m_8 ) /*0x45a924*/
        m_8 = a2; /*0x45a926*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x45a92c*/
        ++i; /*0x45a931*/
      if ( BYTE1(this->m_C) ) /*0x45a93e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x45a949*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x45a951*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x45a95a*/
    this->m_8 = a2; /*0x45a962*/
    BYTE1(this->m_C) = a3 == 0; /*0x45a965*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVReestablish *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x45a96e*/
  }
  v7 = this->m_8; /*0x45a971*/
  if ( v7 < this->m_10 ) /*0x45a979*/
    this->m_10 = v7; /*0x45a97b*/
  return 1; /*0x45a97e*/
}



// ==== 0x0045A990  _DynamicVectorClass_PAVReestablish::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_Reestablish::FindItemIndex(_DynamicVectorClass_PAVReestablish *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x45a990*/
  result = 0; /*0x45a993*/
  if ( m_10 <= 0 ) /*0x45a998*/
    return -1; /*0x45a9af*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x45a99e*/
  {
    if ( ++result >= m_10 ) /*0x45a9ad*/
      return -1; /*0x45a9ad*/
  }
  return result; /*0x45a9b2*/
}



// ==== 0x0045A9C0  _VectorClass_PBVParticleSystemTypeClass::Add  this=VectorClass  sig=csp ====
_DWORD *__thiscall TypeList_Particle::Add(_VectorClass_PBVParticleSystemTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x45a9c3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ParticleSystemTypeClass const *>::`vftable'; /*0x45a9c6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x45a9d0*/
  {
    __3_YAXPAX_Z(v3); /*0x45a9d8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x45a9e0*/
  }
  BYTE1(this->m_C) = 0; /*0x45a9eb*/
  this->m_8 = 0; /*0x45a9f1*/
  if ( (a2 & 1) != 0 ) /*0x45a9f8*/
    __3_YAXPAX_Z(this); /*0x45a9fb*/
  return this->__pad_0; /*0x45aa05*/
}



// ==== 0x0045AA10  _DynamicVectorClass_PBVParticleSystemTypeClass::Constructor  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_Reestablish::Constructor(
        _DynamicVectorClass_PBVParticleSystemTypeClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x45aa13*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ParticleSystemTypeClass const *>::`vftable'; /*0x45aa16*/
  if ( v3 && BYTE1(this->m_C) ) /*0x45aa20*/
  {
    __3_YAXPAX_Z(v3); /*0x45aa28*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x45aa30*/
  }
  BYTE1(this->m_C) = 0; /*0x45aa3b*/
  this->m_8 = 0; /*0x45aa41*/
  if ( (a2 & 1) != 0 ) /*0x45aa48*/
    __3_YAXPAX_Z(this); /*0x45aa4b*/
  return this->__pad_0; /*0x45aa55*/
}



// ==== 0x0045AA60  ?$VectorClass@PAVInfantryClass@@::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_InfantryClass::_vt00(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x45aa63*/
  *Block = &VectorClass<InfantryClass *>::`vftable'; /*0x45aa66*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x45aa70*/
  {
    __3_YAXPAX_Z(v3); /*0x45aa78*/
    *(Block + 1) = 0; /*0x45aa80*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x45aa8b*/
  *(Block + 2) = 0; /*0x45aa91*/
  if ( (a2 & 1) != 0 ) /*0x45aa98*/
    __3_YAXPAX_Z(Block); /*0x45aa9b*/
  return Block; /*0x45aaa5*/
}



// ==== 0x0045AAB0  _DynamicVectorClass_PAVInfantryClass::Destruct  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_InfantryPtr::Destruct(_DynamicVectorClass_PAVInfantryClass *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x45aab3*/
  *(_DWORD *)this = &VectorClass<InfantryClass *>::`vftable'; /*0x45aab6*/
  if ( v3 && this->IsAllocated ) /*0x45aac0*/
  {
    __3_YAXPAX_Z(v3); /*0x45aac8*/
    this->Items = 0; /*0x45aad0*/
  }
  this->IsAllocated = 0; /*0x45aadb*/
  this->q008 = 0; /*0x45aae1*/
  if ( (a2 & 1) != 0 ) /*0x45aae8*/
    __3_YAXPAX_Z(this); /*0x45aaeb*/
  return this; /*0x45aaf5*/
}



// ==== 0x0045AB00  _DynamicVectorClass_PAVFoggedObjectClass::Constructor_VectorClass_FoggedObjectClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_FoggedObjectClass::Constructor_VectorClass_FoggedObjectClass___(
        _DynamicVectorClass_PAVFoggedObjectClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x45ab03*/
  *(_DWORD *)this->__pad_0 = &VectorClass<FoggedObjectClass *>::`vftable'; /*0x45ab06*/
  if ( v3 && BYTE1(this->m_C) ) /*0x45ab10*/
  {
    __3_YAXPAX_Z(v3); /*0x45ab18*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x45ab20*/
  }
  BYTE1(this->m_C) = 0; /*0x45ab2b*/
  this->m_8 = 0; /*0x45ab31*/
  if ( (a2 & 1) != 0 ) /*0x45ab38*/
    __3_YAXPAX_Z(this); /*0x45ab3b*/
  return this->__pad_0; /*0x45ab45*/
}



// ==== 0x0045AB50  _VectorClass_PAVFoggedObjectClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_FoggedObjectClass::Release(_VectorClass_PAVFoggedObjectClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x45ab5c*/
  {
    LOBYTE(this->m_C) = 0; /*0x45ab66*/
    if ( a3 ) /*0x45ab6c*/
      v4 = a3; /*0x45ab82*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x45ab7e*/
    LOBYTE(this->m_C) = 1; /*0x45ab86*/
    if ( v4 ) /*0x45ab8a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x45ab95*/
      {
        m_8 = this->m_8; /*0x45ab9c*/
        if ( a2 < m_8 ) /*0x45aba1*/
          m_8 = a2; /*0x45aba3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x45aba9*/
          ++i; /*0x45abae*/
        if ( BYTE1(this->m_C) ) /*0x45abbb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x45abc6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x45abce*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x45abd7*/
      this->m_8 = a2; /*0x45abdf*/
      BYTE1(this->m_C) = a3 == 0; /*0x45abe2*/
      return 1; /*0x45abe8*/
    }
    else
    {
      return 0; /*0x45ab8f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVFoggedObjectClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x45abf2*/
    return 1; /*0x45abf8*/
  }
}



// ==== 0x0045AC00  _VectorClass_PAVFoggedObjectClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_FoggedObjectClass::Remove(_VectorClass_PAVFoggedObjectClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x45ac0d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x45ac13*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x45ac1b*/
  }
  BYTE1(this->m_C) = 0; /*0x45ac1e*/
  this->m_8 = 0; /*0x45ac21*/
}



// ==== 0x0045AC30  _VectorClass_PAVFoggedObjectClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_FoggedObjectClass::GetSize(_VectorClass_PAVFoggedObjectClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x45ac30*/
    return 0; /*0x45ac38*/
  m_8 = this->m_8; /*0x45ac3e*/
  result = 0; /*0x45ac41*/
  if ( m_8 <= 0 ) /*0x45ac45*/
    return -1; /*0x45ac5c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x45ac4b*/
  {
    if ( ++result >= m_8 ) /*0x45ac5a*/
      return -1; /*0x45ac5a*/
  }
  return result; /*0x45ac3a*/
}



// ==== 0x0045AC70  _VectorClass_PAVFoggedObjectClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_FoggedObjectClass::GetCapacity(_VectorClass_PAVFoggedObjectClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x45ac70*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x45ac85*/
  else
    return 0; /*0x45ac77*/
}



// ==== 0x0045AC90  _VectorClass_PAVFoggedObjectClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_FoggedObjectClass::QueryInterface(_VectorClass_PAVFoggedObjectClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x45ac93*/
  *(_DWORD *)this->__pad_0 = &VectorClass<FoggedObjectClass *>::`vftable'; /*0x45ac96*/
  if ( v3 && BYTE1(this->m_C) ) /*0x45aca0*/
  {
    __3_YAXPAX_Z(v3); /*0x45aca8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x45acb0*/
  }
  BYTE1(this->m_C) = 0; /*0x45acbb*/
  this->m_8 = 0; /*0x45acc1*/
  if ( (a2 & 1) != 0 ) /*0x45acc8*/
    __3_YAXPAX_Z(this); /*0x45accb*/
  return this->__pad_0; /*0x45acd5*/
}



// ==== 0x0045ACE0  _VectorClass_PAVReestablish::Add  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_Reestablish::Add(_VectorClass_PAVReestablish *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x45ace3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<Reestablish *>::`vftable'; /*0x45ace6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x45acf0*/
  {
    __3_YAXPAX_Z(v3); /*0x45acf8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x45ad00*/
  }
  BYTE1(this->m_C) = 0; /*0x45ad0b*/
  this->m_8 = 0; /*0x45ad11*/
  if ( (a2 & 1) != 0 ) /*0x45ad18*/
    __3_YAXPAX_Z(this); /*0x45ad1b*/
  return this->__pad_0; /*0x45ad25*/
}



// ==== 0x0045AD30  _DynamicVectorClass_PAVReestablish::Constructor_VectorClass_Reestablish___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_Reestablish::Constructor_VectorClass_Reestablish___(
        _DynamicVectorClass_PAVReestablish *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x45ad33*/
  *(_DWORD *)this->__pad_0 = &VectorClass<Reestablish *>::`vftable'; /*0x45ad36*/
  if ( v3 && BYTE1(this->m_C) ) /*0x45ad40*/
  {
    __3_YAXPAX_Z(v3); /*0x45ad48*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x45ad50*/
  }
  BYTE1(this->m_C) = 0; /*0x45ad5b*/
  this->m_8 = 0; /*0x45ad61*/
  if ( (a2 & 1) != 0 ) /*0x45ad68*/
    __3_YAXPAX_Z(this); /*0x45ad6b*/
  return this->__pad_0; /*0x45ad75*/
}



// ==== 0x0045AD80  VectorClass::ConstructorWithVtable  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::ConstructorWithVtable(VectorClass *this, int a2, int a3)
{
  this->Items = 0; /*0x45ad8b*/
  this->Capacity = a2; /*0x45ad8e*/
  this->IsInitialized = 1; /*0x45ad91*/
  this->IsAllocated = 0; /*0x45ad95*/
  this->vtable0 = &VectorClass<ParticleSystemTypeClass const *>::`vftable'; /*0x45ad98*/
  if ( a2 ) /*0x45ad9e*/
  {
    if ( a3 ) /*0x45ada6*/
    {
      this->Items = (void *)a3; /*0x45ada8*/
      return &this->vtable0; /*0x45adae*/
    }
    this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x45adbd*/
    this->IsAllocated = 1; /*0x45adc0*/
  }
  return &this->vtable0; /*0x45adad*/
}



// ==== 0x0045ADD0  DynamicVector::RemoveItem  this=DynamicVector  sig=csp ====
int __thiscall DynamicVector::RemoveItem(DynamicVector *this, int a2)
{
  char *DynamicVector_field_0x10; // edx
  int result; // eax
  char *v4; // edx

  DynamicVector_field_0x10 = (char *)this->DynamicVector_field_0x10; /*0x45add0*/
  result = a2; /*0x45add3*/
  if ( a2 >= (int)DynamicVector_field_0x10 ) /*0x45add9*/
  {
    LOBYTE(result) = 0; /*0x45adfc*/
  }
  else
  {
    v4 = DynamicVector_field_0x10 - 1; /*0x45addb*/
    this->DynamicVector_field_0x10 = v4; /*0x45adde*/
    if ( a2 < (int)v4 ) /*0x45ade1*/
    {
      do /*0x45adf4*/
      {
        ++result; /*0x45ade7*/
        *(_DWORD *)(*(_DWORD *)&this->DynamicVector_field_0x1[3] + 4 * result - 4) = *(_DWORD *)(*(_DWORD *)&this->DynamicVector_field_0x1[3] /*0x45adeb*/
                                                                                               + 4 * result);
      }
      while ( result < (int)this->DynamicVector_field_0x10 ); /*0x45adf4*/
    }
    LOBYTE(result) = 1; /*0x45adf7*/
  }
  return result; /*0x45adf9*/
}



// ==== 0x0045AE10  Vector::RemoveAt  this=Vector  sig=csp ====
int __thiscall Vector::RemoveAt(Vector *this, int a2)
{
  char *Vector_field_0x10; // edx
  int result; // eax
  char *v4; // edx

  Vector_field_0x10 = (char *)this->Vector_field_0x10; /*0x45ae10*/
  result = a2; /*0x45ae13*/
  if ( a2 >= (int)Vector_field_0x10 ) /*0x45ae19*/
  {
    LOBYTE(result) = 0; /*0x45ae3c*/
  }
  else
  {
    v4 = Vector_field_0x10 - 1; /*0x45ae1b*/
    this->Vector_field_0x10 = v4; /*0x45ae1e*/
    if ( a2 < (int)v4 ) /*0x45ae21*/
    {
      do /*0x45ae34*/
      {
        ++result; /*0x45ae27*/
        *((_DWORD *)this->Vector_field_0x4 + result - 1) = *((_DWORD *)this->Vector_field_0x4 + result); /*0x45ae2b*/
      }
      while ( result < (int)this->Vector_field_0x10 ); /*0x45ae34*/
    }
    LOBYTE(result) = 1; /*0x45ae37*/
  }
  return result; /*0x45ae39*/
}



// ==== 0x0045AE50  VectorClass_ReestablishPtr::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ReestablishPtr::Construct(VectorClass_ReestablishPtr *this, int a2, int a3)
{
  *(_DWORD *)&this->m_1[3] = 0; /*0x45ae5b*/
  *(_DWORD *)&this->__pad_5[3] = a2; /*0x45ae5e*/
  LOBYTE(this->m_C) = 1; /*0x45ae61*/
  BYTE1(this->m_C) = 0; /*0x45ae65*/
  *(_DWORD *)this->__pad_0 = &VectorClass<Reestablish *>::`vftable'; /*0x45ae68*/
  if ( a2 ) /*0x45ae6e*/
  {
    if ( a3 ) /*0x45ae76*/
    {
      *(_DWORD *)&this->m_1[3] = a3; /*0x45ae78*/
      return this->__pad_0; /*0x45ae7e*/
    }
    *(_DWORD *)&this->m_1[3] = __2_YAPAXI_Z(4 * a2); /*0x45ae8d*/
    BYTE1(this->m_C) = 1; /*0x45ae90*/
  }
  return this->__pad_0; /*0x45ae7d*/
}



// ==== 0x0045AEA0  StreamClass::Set2  this=StreamClass  sig=csp ====
int __thiscall StreamClass::Set2(StreamClass *this, _DWORD *a2)
{
  int v3; // edi
  _DWORD *v5; // ebx
  int v6; // eax

  if ( *a2 ) /*0x45aea8*/
  {
    v3 = (**(int (__stdcall ***)(_DWORD, void *, _DWORD **))*a2)(*a2, &unk_818858, &a2); /*0x45aebd*/
    if ( v3 >= 0 ) /*0x45aec1*/
    {
      v5 = a2; /*0x45aedf*/
      if ( *(_DWORD *)this->__pad_0 ) /*0x45aedc*/
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)this->__pad_0 + 8))(*(_DWORD *)this->__pad_0); /*0x45aeea*/
      *(_DWORD *)this->__pad_0 = v5; /*0x45aeed*/
      return v3; /*0x45aef0*/
    }
    else
    {
      if ( *(_DWORD *)this->__pad_0 ) /*0x45aec3*/
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)this->__pad_0 + 8))(*(_DWORD *)this->__pad_0); /*0x45aecc*/
      *(_DWORD *)this->__pad_0 = 0; /*0x45aed1*/
      return v3; /*0x45aecf*/
    }
  }
  else
  {
    v6 = *(_DWORD *)this->__pad_0; /*0x45aef7*/
    if ( *(_DWORD *)this->__pad_0 ) /*0x45aef7*/
    {
      *(_DWORD *)this->__pad_0 = 0; /*0x45aefd*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x45af06*/
    }
    return -2147467262; /*0x45af0e*/
  }
}



// ==== 0x0045AF20  StreamClass::Set  this=ILocomotion  sig=csp ====
int __thiscall StreamClass::Set(StreamClass *this, _DWORD *a2)
{
  int v3; // edi
  _DWORD *v5; // ebx
  int v6; // eax

  if ( *a2 ) /*0x45af28*/
  {
    v3 = (**(int (__stdcall ***)(_DWORD, int *, _DWORD **))*a2)(*a2, &stru_818E00.?[17], &a2); /*0x45af3d*/
    if ( v3 >= 0 ) /*0x45af41*/
    {
      v5 = a2; /*0x45af5f*/
      if ( *(_DWORD *)this->__pad_0 ) /*0x45af5c*/
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)this->__pad_0 + 8))(*(_DWORD *)this->__pad_0); /*0x45af6a*/
      *(_DWORD *)this->__pad_0 = v5; /*0x45af6d*/
      return v3; /*0x45af70*/
    }
    else
    {
      if ( *(_DWORD *)this->__pad_0 ) /*0x45af43*/
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)this->__pad_0 + 8))(*(_DWORD *)this->__pad_0); /*0x45af4c*/
      *(_DWORD *)this->__pad_0 = 0; /*0x45af51*/
      return v3; /*0x45af4f*/
    }
  }
  else
  {
    v6 = *(_DWORD *)this->__pad_0; /*0x45af77*/
    if ( *(_DWORD *)this->__pad_0 ) /*0x45af77*/
    {
      *(_DWORD *)this->__pad_0 = 0; /*0x45af7d*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x45af86*/
    }
    return -2147467262; /*0x45af8e*/
  }
}



// ==== 0x0045AFA0  sub_45AFA0  this=-  sig=ida-proto ====
void sub_45AFA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x45afac*/
  dbl_89C8B8 = Math::Sqrt(v0 + v0); /*0x45afbe*/
}



// ==== 0x0045AFD0  sub_45AFD0  this=-  sig=ida-proto ====
void sub_45AFD0()
{
  dbl_89D360 = dbl_89C8B8 / 60.0; /*0x45afdc*/
}



// ==== 0x0045AFF0  sub_45AFF0  this=-  sig=ida-proto ====
void sub_45AFF0()
{
  dbl_89C8F8 = 1.0 / dbl_89D360; /*0x45affc*/
}



// ==== 0x0045B010  sub_45B010  this=-  sig=ida-proto ====
void sub_45B010()
{
  dbl_89C8F0 = 0.0174532925199433 * 45.0; /*0x45b01c*/
}



// ==== 0x0045B030  sub_45B030  this=-  sig=ida-proto ====
void sub_45B030()
{
  dbl_89C8C0 = 0.0174532925199433 * 60.0; /*0x45b03c*/
}



// ==== 0x0045B050  sub_45B050  this=-  sig=ida-proto ====
void sub_45B050()
{
  dbl_89C898 = 0.0174532925199433 * 90.0; /*0x45b05c*/
}



// ==== 0x0045B070  sub_45B070  this=-  sig=ida-proto ====
__int64 sub_45B070()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89C898 - dbl_89C8C0); /*0x45b082*/
  result = Math::RoundToInt(v0 * dbl_89C8B8 * 0.5); /*0x45b096*/
  dword_89DDB8 = result; /*0x45b09b*/
  return result; /*0x45b0a0*/
}



// ==== 0x0045B0B0  sub_45B0B0  this=-  sig=ida-proto ====
void sub_45B0B0()
{
  dbl_89C8C8 = Math::ArcTan((double)dword_89DDB8 * 0.00390625); /*0x45b0c7*/
}



// ==== 0x0045B0E0  sub_45B0E0  this=-  sig=ida-proto ====
void sub_45B0E0()
{
  dbl_89C8E0 = Math::ArcTan((double)(2 * dword_89DDB8) / dbl_89C8B8); /*0x45b102*/
}



// ==== 0x0045B110  sub_45B110  this=-  sig=ida-proto ====
__int64 sub_45B110()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89DDB8) + 0.5); /*0x45b12b*/
  dword_89D35C = result; /*0x45b130*/
  return result; /*0x45b136*/
}



// ==== 0x0045B140  sub_45B140  this=-  sig=ida-proto ====
int sub_45B140()
{
  word_89C8B0 = 0; /*0x45b142*/
  word_89C8B2 = 0; /*0x45b148*/
  return 0; /*0x45b14e*/
}



// ==== 0x0045B150  sub_45B150  this=-  sig=ida-proto ====
int sub_45B150()
{
  dword_89C8D0 = 0; /*0x45b152*/
  dword_89C8D4 = 0; /*0x45b157*/
  dword_89C8D8 = 0; /*0x45b15c*/
  return 0; /*0x45b161*/
}



// ==== 0x0045B170  sub_45B170  this=-  sig=ida-proto ====
int sub_45B170()
{
  dword_89D358 = 0; /*0x45b175*/
  dword_89D350 = 128; /*0x45b17f*/
  dword_89D354 = 128; /*0x45b184*/
  return 128; /*0x45b189*/
}



// ==== 0x0045B190  sub_45B190  this=-  sig=ida-proto ====
int sub_45B190()
{
  dword_89C8A0 = 0; /*0x45b192*/
  dword_89C8A4 = 0; /*0x45b197*/
  dword_89C8A8 = 0; /*0x45b19c*/
  dword_89C8AC = 0; /*0x45b1a1*/
  return 0; /*0x45b1a6*/
}



// ==== 0x0045B1B0  j_MapData_InitHeights  this=-  sig=ida-proto ====
// attributes: thunk
int j_MapData_InitHeights()
{
  return MapData::InitHeights();
}



// ==== 0x0045B1C0  MapData::InitHeights  this=MapData  sig=ida-proto ====
int MapData_InitHeights()
{
  int v0; // eax
  int v2; // [esp+10h] [ebp-4h] BYREF

  dword_89C900 = 0; /*0x45b1e8*/
  dword_89C904 = 2147450879; /*0x45b1ed*/
  memset(&unk_89C908, 0, 0x70u); /*0x45b204*/
  dword_89C978 = 0; /*0x45b222*/
  dword_89C97C = 1; /*0x45b235*/
  dword_89C980 = 2147450879; /*0x45b23b*/
  memset(&unk_89C984, 0, 0x6Cu); /*0x45b251*/
  dword_89C9F0 = 0; /*0x45b26a*/
  dword_89C9F4 = 0x10000; /*0x45b27e*/
  dword_89C9F8 = 2147450879; /*0x45b283*/
  memset(&unk_89C9FC, 0, 0x6Cu); /*0x45b295*/
  dword_89CA68 = 0; /*0x45b2b3*/
  dword_89CA6C = 1; /*0x45b2c6*/
  dword_89CA70 = 0x10000; /*0x45b2da*/
  dword_89CA74 = 65537; /*0x45b2ed*/
  dword_89CA78 = 2147450879; /*0x45b2f3*/
  memset(&unk_89CA7C, 0, 0x64u); /*0x45b309*/
  dword_89CAE0 = 0; /*0x45b314*/
  dword_89CAE4 = 1; /*0x45b336*/
  dword_89CAE8 = 0x10000; /*0x45b34e*/
  dword_89CAEC = 65537; /*0x45b362*/
  dword_89CAF0 = 0x20000; /*0x45b375*/
  dword_89CAF4 = 131073; /*0x45b389*/
  dword_89CAF8 = 2147450879; /*0x45b38e*/
  memset(&unk_89CAFC, 0, 0x5Cu); /*0x45b3a0*/
  dword_89CB58 = 0; /*0x45b3be*/
  dword_89CB5C = 1; /*0x45b3d1*/
  dword_89CB60 = 2; /*0x45b3e5*/
  dword_89CB64 = 0x10000; /*0x45b3f8*/
  dword_89CB68 = 65537; /*0x45b40c*/
  dword_89CB6C = 65538; /*0x45b41f*/
  dword_89CB70 = 2147450879; /*0x45b425*/
  memset(&unk_89CB74, 0, 0x5Cu); /*0x45b43b*/
  dword_89CBD0 = 0; /*0x45b454*/
  dword_89CBD4 = 1; /*0x45b468*/
  dword_89CBD8 = 2; /*0x45b47b*/
  dword_89CBDC = 0x10000; /*0x45b48f*/
  dword_89CBE0 = 65537; /*0x45b494*/
  dword_89CBE4 = 65538; /*0x45b4b6*/
  dword_89CBE8 = 0x20000; /*0x45b4c9*/
  dword_89CBEC = 131073; /*0x45b4dd*/
  dword_89CBF0 = 131074; /*0x45b4f0*/
  dword_89CBF4 = 2147450879; /*0x45b4f6*/
  memset(&unk_89CBF8, 0, 0x50u); /*0x45b50c*/
  dword_89CC48 = 0; /*0x45b525*/
  dword_89CC4C = 1; /*0x45b539*/
  dword_89CC50 = 2; /*0x45b54c*/
  dword_89CC54 = 0x10000; /*0x45b560*/
  dword_89CC58 = 65537; /*0x45b573*/
  dword_89CC5C = 65538; /*0x45b587*/
  dword_89CC60 = 0x20000; /*0x45b59a*/
  dword_89CC64 = 131073; /*0x45b5a0*/
  dword_89CC68 = 131074; /*0x45b5b8*/
  dword_89CC6C = 196608; /*0x45b5d1*/
  dword_89CC74 = 196610; /*0x45b5ee*/
  dword_89CC70 = 196609; /*0x45b5f8*/
  dword_89CC78 = 0x40000; /*0x45b60c*/
  dword_89CC7C = 262145; /*0x45b620*/
  dword_89CC80 = 262146; /*0x45b642*/
  dword_89CC84 = 2147450879; /*0x45b647*/
  memset(&unk_89CC88, 0, 0x38u); /*0x45b659*/
  dword_89CCC0 = 0; /*0x45b677*/
  dword_89CCC8 = 2; /*0x45b68a*/
  dword_89CCC4 = 1; /*0x45b694*/
  dword_89CCCC = 3; /*0x45b6a8*/
  dword_89CCD0 = 0x10000; /*0x45b6bc*/
  dword_89CCD4 = 65537; /*0x45b6d0*/
  dword_89CCD8 = 65538; /*0x45b6f2*/
  dword_89CCDC = 65539; /*0x45b706*/
  dword_89CCE0 = 2147450879; /*0x45b70b*/
  memset(&unk_89CCE4, 0, 0x54u); /*0x45b71d*/
  dword_89CD38 = 0; /*0x45b73b*/
  dword_89CD3C = 1; /*0x45b74e*/
  dword_89CD40 = 2; /*0x45b762*/
  dword_89CD44 = 0x10000; /*0x45b775*/
  dword_89CD48 = 65537; /*0x45b789*/
  dword_89CD4C = 0x20000; /*0x45b79c*/
  dword_89CD50 = 131073; /*0x45b7a2*/
  dword_89CD54 = 131074; /*0x45b7c3*/
  dword_89CD58 = 2147450879; /*0x45b7c9*/
  memset(&unk_89CD5C, 0, 0x54u); /*0x45b7da*/
  dword_89CDB0 = 0; /*0x45b7f8*/
  dword_89CDB4 = 0x10000; /*0x45b80c*/
  dword_89CDB8 = 0x20000; /*0x45b81f*/
  dword_89CDBC = 2147450879; /*0x45b825*/
  memset(&unk_89CDC0, 0, 0x68u); /*0x45b83b*/
  dword_89CE28 = 0; /*0x45b854*/
  dword_89CE2C = 1; /*0x45b868*/
  dword_89CE30 = 2; /*0x45b87b*/
  dword_89CE34 = 2147450879; /*0x45b881*/
  memset(&unk_89CE38, 0, 0x68u); /*0x45b892*/
  dword_89CEA0 = 0; /*0x45b8b0*/
  dword_89CEA4 = 1; /*0x45b8b6*/
  dword_89CEA8 = 2; /*0x45b8ce*/
  dword_89CEAC = 3; /*0x45b8e2*/
  dword_89CEB0 = 0x10000; /*0x45b8f6*/
  dword_89CEB4 = 65537; /*0x45b90a*/
  dword_89CEB8 = 65538; /*0x45b91e*/
  dword_89CEBC = 65539; /*0x45b932*/
  dword_89CEC0 = 0x20000; /*0x45b946*/
  dword_89CEC4 = 131073; /*0x45b95a*/
  dword_89CEC8 = 131074; /*0x45b97c*/
  dword_89CECC = 131075; /*0x45b990*/
  dword_89CED0 = 2147450879; /*0x45b995*/
  memset(&unk_89CED4, 0, 0x44u); /*0x45b9a7*/
  dword_89CF18 = 0; /*0x45b9c5*/
  dword_89CF1C = 0x10000; /*0x45b9d8*/
  dword_89CF20 = 0x20000; /*0x45b9ee*/
  dword_89CF24 = 196608; /*0x45ba01*/
  dword_89CF28 = 2147450879; /*0x45ba07*/
  memset(&unk_89CF2C, 0, 0x64u); /*0x45ba1d*/
  dword_89CF90 = 0; /*0x45ba36*/
  dword_89CF94 = 0x10000; /*0x45ba4a*/
  dword_89CF98 = 0x20000; /*0x45ba5f*/
  dword_89CF9C = 196608; /*0x45ba75*/
  dword_89CFA0 = 0x40000; /*0x45ba88*/
  dword_89CFA4 = 2147450879; /*0x45ba8e*/
  memset(&unk_89CFA8, 0, 0x60u); /*0x45ba9f*/
  dword_89D008 = 0; /*0x45babd*/
  dword_89D00C = 1; /*0x45bad1*/
  dword_89D010 = 0x10000; /*0x45bae4*/
  dword_89D014 = 65537; /*0x45baf8*/
  dword_89D01C = 131073; /*0x45bb0b*/
  dword_89D018 = 0x20000; /*0x45bb15*/
  dword_89D020 = 196608; /*0x45bb37*/
  dword_89D024 = 196609; /*0x45bb3d*/
  dword_89D02C = 262145; /*0x45bb63*/
  dword_89D028 = 0x40000; /*0x45bb6d*/
  dword_89D030 = 327680; /*0x45bb8f*/
  dword_89D034 = 327681; /*0x45bba3*/
  dword_89D038 = 2147450879; /*0x45bba8*/
  memset(&unk_89D03C, 0, 0x44u); /*0x45bbba*/
  dword_89D080 = 0; /*0x45bbd8*/
  dword_89D084 = 1; /*0x45bbeb*/
  dword_89D088 = 0x10000; /*0x45bbff*/
  dword_89D08C = 65537; /*0x45bc12*/
  dword_89D090 = 0x20000; /*0x45bc26*/
  dword_89D094 = 131073; /*0x45bc2b*/
  dword_89D098 = 196608; /*0x45bc52*/
  dword_89D09C = 196609; /*0x45bc58*/
  dword_89D0A0 = 0x40000; /*0x45bc7e*/
  dword_89D0A4 = 262145; /*0x45bc92*/
  dword_89D0A8 = 2147450879; /*0x45bc97*/
  memset(&unk_89D0AC, 0, 0x4Cu); /*0x45bcae*/
  dword_89D0F8 = 0; /*0x45bcc7*/
  dword_89D0FC = 1; /*0x45bccc*/
  dword_89D100 = 2; /*0x45bce5*/
  dword_89D104 = 3; /*0x45bcfd*/
  dword_89D108 = 4; /*0x45bd10*/
  dword_89D10C = 0x10000; /*0x45bd24*/
  dword_89D110 = 65537; /*0x45bd38*/
  dword_89D114 = 65538; /*0x45bd4c*/
  dword_89D118 = 65539; /*0x45bd60*/
  dword_89D11C = 65540; /*0x45bd74*/
  dword_89D120 = 0x20000; /*0x45bd88*/
  dword_89D124 = 131073; /*0x45bd9c*/
  dword_89D128 = 131074; /*0x45bdb0*/
  dword_89D12C = 131075; /*0x45bdd2*/
  dword_89D130 = 131076; /*0x45bde6*/
  dword_89D134 = 2147450879; /*0x45bdeb*/
  memset(&unk_89D138, 0, 0x38u); /*0x45bdfd*/
  dword_89D170 = 0; /*0x45be1b*/
  dword_89D178 = 2; /*0x45be2e*/
  dword_89D174 = 1; /*0x45be38*/
  dword_89D17C = 3; /*0x45be4c*/
  dword_89D180 = 0x10000; /*0x45be60*/
  dword_89D184 = 65537; /*0x45be74*/
  dword_89D188 = 65538; /*0x45be88*/
  dword_89D18C = 65539; /*0x45be9c*/
  dword_89D190 = 0x20000; /*0x45beb0*/
  dword_89D194 = 131073; /*0x45bec4*/
  dword_89D198 = 131074; /*0x45bed8*/
  dword_89D19C = 131075; /*0x45beec*/
  dword_89D1A0 = 196608; /*0x45bf00*/
  dword_89D1A4 = 196609; /*0x45bf14*/
  dword_89D1A8 = 196610; /*0x45bf36*/
  dword_89D1AC = 196611; /*0x45bf3c*/
  dword_89D1B0 = 2147450879; /*0x45bf4f*/
  v2 = 1; /*0x45bf6f*/
  memset(&unk_89D1B4, 0, 0x34u); /*0x45bf74*/
  dword_89D1E8 = 0; /*0x45bf85*/
  dword_89D1EC = 1; /*0x45bf8b*/
  dword_89D1F0 = *(_DWORD *)CellStruct::Set(&v2, 2, 0); /*0x45bf98*/
  dword_89D1F4 = *(_DWORD *)CellStruct::Set(&v2, 0, 1); /*0x45bfb0*/
  dword_89D1F8 = *(_DWORD *)CellStruct::Set(&v2, 1, 1); /*0x45bfc3*/
  dword_89D1FC = *(_DWORD *)CellStruct::Set(&v2, 2, 1); /*0x45bfd0*/
  dword_89D200 = *(_DWORD *)CellStruct::Set(&v2, 0, 2); /*0x45bfe8*/
  dword_89D204 = *(_DWORD *)CellStruct::Set(&v2, 1, 2); /*0x45bffb*/
  dword_89D208 = *(_DWORD *)CellStruct::Set(&v2, 2, 2); /*0x45c009*/
  dword_89D20C = *(_DWORD *)CellStruct::Set(&v2, 0, 3); /*0x45c022*/
  dword_89D210 = *(_DWORD *)CellStruct::Set(&v2, 1, 3); /*0x45c036*/
  dword_89D214 = *(_DWORD *)CellStruct::Set(&v2, 2, 3); /*0x45c047*/
  dword_89D218 = *(_DWORD *)CellStruct::Set(&v2, 0x7FFF, 0x7FFF); /*0x45c05d*/
  memset(&dword_89D21C, 0, 0x44u); /*0x45c078*/
  Array::ForEach((int)&dword_89D21C, 4, 17, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x45c07f*/
  dword_89D260 = *(_DWORD *)CellStruct::Set(&v2, 0, 0); /*0x45c097*/
  dword_89D264 = *(_DWORD *)CellStruct::Set(&v2, 1, 0); /*0x45c0a4*/
  dword_89D268 = *(_DWORD *)CellStruct::Set(&v2, 2, 0); /*0x45c0bd*/
  dword_89D26C = *(_DWORD *)CellStruct::Set(&v2, 3, 0); /*0x45c0d1*/
  dword_89D270 = *(_DWORD *)CellStruct::Set(&v2, 4, 0); /*0x45c0de*/
  dword_89D274 = *(_DWORD *)CellStruct::Set(&v2, 5, 0); /*0x45c0f7*/
  dword_89D278 = *(_DWORD *)CellStruct::Set(&v2, 0, 1); /*0x45c10a*/
  dword_89D27C = *(_DWORD *)CellStruct::Set(&v2, 1, 1); /*0x45c117*/
  dword_89D280 = *(_DWORD *)CellStruct::Set(&v2, 2, 1); /*0x45c130*/
  dword_89D284 = *(_DWORD *)CellStruct::Set(&v2, 3, 1); /*0x45c144*/
  dword_89D288 = *(_DWORD *)CellStruct::Set(&v2, 4, 1); /*0x45c151*/
  dword_89D28C = *(_DWORD *)CellStruct::Set(&v2, 5, 1); /*0x45c164*/
  dword_89D290 = *(_DWORD *)CellStruct::Set(&v2, 0, 2); /*0x45c17d*/
  dword_89D294 = *(_DWORD *)CellStruct::Set(&v2, 1, 2); /*0x45c18a*/
  dword_89D298 = *(_DWORD *)CellStruct::Set(&v2, 2, 2); /*0x45c1a3*/
  dword_89D29C = *(_DWORD *)CellStruct::Set(&v2, 3, 2); /*0x45c1b7*/
  dword_89D2A0 = *(_DWORD *)CellStruct::Set(&v2, 4, 2); /*0x45c1c4*/
  dword_89D2A4 = *(_DWORD *)CellStruct::Set(&v2, 5, 2); /*0x45c1de*/
  dword_89D2A8 = *(_DWORD *)CellStruct::Set(&v2, 0, 3); /*0x45c1f2*/
  dword_89D2AC = *(_DWORD *)CellStruct::Set(&v2, 1, 3); /*0x45c200*/
  dword_89D2B0 = *(_DWORD *)CellStruct::Set(&v2, 2, 3); /*0x45c21a*/
  dword_89D2B4 = *(_DWORD *)CellStruct::Set(&v2, 3, 3); /*0x45c22f*/
  dword_89D2B8 = *(_DWORD *)CellStruct::Set(&v2, 4, 3); /*0x45c23d*/
  dword_89D2BC = *(_DWORD *)CellStruct::Set(&v2, 5, 3); /*0x45c25e*/
  v0 = *(_DWORD *)CellStruct::Set(&v2, 0x7FFF, 0x7FFF); /*0x45c269*/
  dword_89D2C4 = 0; /*0x45c26d*/
  dword_89D2C0 = v0; /*0x45c273*/
  dword_89D2C8 = 0; /*0x45c278*/
  dword_89D2CC = 0; /*0x45c27e*/
  dword_89D2D0 = 0; /*0x45c28b*/
  dword_89D2D4 = 0; /*0x45c298*/
  Array::ForEach((int)&dword_89D2C4, 4, 5, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x45c29e*/
  dword_89D2D8 = *(_DWORD *)CellStruct::Set(&v2, 0x7FFF, 0x7FFF); /*0x45c2cb*/
  memset(&dword_89D2DC, 0, 0x74u); /*0x45c2d3*/
  return Array::ForEach((int)&dword_89D2DC, 4, 29, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x45c2df*/
}


// ==== 0x0045C2F0  j_Map_InitCellOffsets  this=-  sig=ida-proto ====
// attributes: thunk
int j_Map_InitCellOffsets()
{
  return InitCellOffsetsMap();
}



// ==== 0x0045C300  InitCellOffsetsMap  this=-  sig=ida-proto ====
int Map_InitCellOffsets()
{
  int v1; // [esp+10h] [ebp-4h] BYREF

  dword_89D368 = 0x10000; /*0x45c32b*/
  dword_89D36C = 0x1FFFF; /*0x45c33e*/
  dword_89D370 = 65537; /*0x45c352*/
  dword_89D374 = 0xFFFF; /*0x45c365*/
  dword_89D378 = 1; /*0x45c379*/
  dword_89D380 = -1; /*0x45c38c*/
  dword_89D37C = -65536; /*0x45c391*/
  dword_89D384 = -65535; /*0x45c3b8*/
  dword_89D388 = 2147450879; /*0x45c3be*/
  memset(&unk_89D38C, 0, 0x54u); /*0x45c3d4*/
  dword_89D3E0 = 0x10000; /*0x45c3ed*/
  dword_89D3E4 = 65537; /*0x45c406*/
  dword_89D3E8 = 0x1FFFF; /*0x45c419*/
  dword_89D3EC = 65538; /*0x45c42d*/
  dword_89D3F0 = 0xFFFF; /*0x45c440*/
  dword_89D3F4 = 2; /*0x45c454*/
  dword_89D3F8 = -65536; /*0x45c467*/
  dword_89D3FC = -65535; /*0x45c46d*/
  dword_89D404 = -65534; /*0x45c48e*/
  dword_89D400 = -1; /*0x45c498*/
  dword_89D408 = 2147450879; /*0x45c4ac*/
  memset(&unk_89D40C, 0, 0x4Cu); /*0x45c4be*/
  dword_89D458 = 0x20000; /*0x45c4dc*/
  dword_89D45C = 131073; /*0x45c4ef*/
  dword_89D46... [15107 chars total]



// ==== 0x0045DD20  ObjectClass::method_45DD20  this=ObjectClass  sig=csp ====
char *__thiscall sub_45DD20(ObjectClass *this)
{
  int v1; // edx
  ObjectClass **v2; // eax

  v1 = 0; /*0x45dd20*/
  v2 = (ObjectClass **)&stru_81926C.Name[8]; /*0x45dd22*/
  while ( *v2 != this ) /*0x45dd29*/
  {
    v2 += 2; /*0x45dd2b*/
    ++v1; /*0x45dd2e*/
    if ( (int)v2 >= (int)&stru_81926C.voiceIndex ) /*0x45dd34*/
      return (char *)stru_81926C.Name[7]; /*0x45dd3b*/
  }
  return (char *)stru_81926C.Name[2 * v1 + 7]; /*0x45dd3b*/
}



// ==== 0x0045DD50  ObjectClass::method_45DD50  this=ObjectClass  sig=csp ====
int __thiscall sub_45DD50(ObjectClass *this)
{
  int v2; // edi
  char **v3; // esi

  v2 = 0; /*0x45dd55*/
  v3 = (char **)&stru_81926C.Name[7]; /*0x45dd57*/
  while ( _strcmpi(*v3, (char *)this) ) /*0x45dd6a*/
  {
    v3 += 2; /*0x45dd6c*/
    ++v2; /*0x45dd6f*/
    if ( (int)v3 >= (int)stru_81926C.Type ) /*0x45dd76*/
      return 0; /*0x45dd7d*/
  }
  return stru_81926C.Name[2 * v2 + 8]; /*0x45dd78*/
}



// ==== 0x0045DD90  BuildingTypeClass::ConstructFull  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass_ConstructorFull(int this, char *Source)
{
  int v3; // ecx
  int v4; // eax
  bool v5; // zf
  int v6; // ecx
  _DWORD *v7; // edx
  _DWORD *v8; // eax
  int v9; // ecx
  _DWORD *v10; // ebp
  _DWORD *v11; // ebp
  _DWORD *v12; // eax
  int v13; // edi
  int v14; // edx
  _DWORD *v15; // eax
  int v16; // edi
  int v17; // edx
  _DWORD *v18; // eax
  int v19; // ecx
  _DWORD *v20; // edi

  TechnoTypeClass::ReadINI((char *)this, Source, 0); /*0x45dda1*/
  *(_DWORD *)(this + 3576) = -1; /*0x45ddaf*/
  *(_DWORD *)(this + 3580) = 0; /*0x45ddb5*/
  *(_DWORD *)(this + 3584) = 0; /*0x45ddbb*/
  *(_BYTE *)(this + 3588) = 0; /*0x45ddc1*/
  *(_DWORD *)(this + 3592) = 0; /*0x45ddc7*/
  *(_DWORD *)(this + 3596) = dword_89C8D0; /*0x45ddd3*/
  *(_DWORD *)(this + 3600) = dword_89C8D4; /*0x45ddda*/
  *(_DWORD *)(this + 3604) = dword_89C8D8; /*0x45dde9*/
  *(_DWORD *)(this + 3608) = dword_89C8D0; /*0x45ddf2*/
  *(_DWORD *)(this + 3612) = dword_89C8D4; /*0x45ddfa*/
  *(_DWORD *)(this + 3616) = dword_89C8D8; /*0x45de03*/
  *(_DWORD *)(this + 3624) = 0; /*0x45de06*/
  *(_DWORD *)(this + 3628) = 0; /*0x45de0c*/
  *(_DWORD *)(this + 3632) = 5000; /*0x45de12*/
  *(_DWORD *)(this + 3636) = 0; /*0x45de21*/
  *(_DWORD *)(this + 3640) = 1000000; /*0x45de27*/
  *(_DWORD *)(this + 3644) = 1000000; /*0x45de2d*/
  *(_DWORD *)(this + 3648) = 1000000; /*0x45de33*/
  *(_DWORD *)(this + 3652) = 0xFFFF; /*0x45de40*/
  *(_DWORD *)(this + 3656) = 0xFFFF; /*0x45de46*/
  *(_DWORD *)(this + 3660) = 0xFFFF; /*0x45de4c*/
  *(_DWORD *)(this + 3664) = 0xFFFF; /*0x45de52*/
  *(_DWORD *)(this + 3668) = 0; /*0x45de58*/
  *(_DWORD *)(this + 3672) = 0; /*0x45de5e*/
  *(_DWORD *)(this + 3692) = -1; /*0x45de64*/
  *(_DWORD *)(this + 3696) = -1; /*0x45de6a*/
  *(_DWORD *)(this + 3700) = -1; /*0x45de70*/
  *(_DWORD *)(this + 3704) = -1; /*0x45de76*/
  *(_DWORD *)(this + 3708) = -1; /*0x45de7c*/
  *(_DWORD *)(this + 3712) = -1; /*0x45de82*/
  *(_DWORD *)(this + 3716) = -1; /*0x45de88*/
  *(_DWORD *)(this + 3744) = 0; /*0x45de8e*/
  *(_DWORD *)(this + 3748) = 0; /*0x45de94*/
  *(_DWORD *)(this + 3752) = 0; /*0x45de9a*/
  *(_DWORD *)(this + 3756) = 0; /*0x45dea0*/
  *(_DWORD *)(this + 3760) = -1; /*0x45dea6*/
  *(_DWORD *)(this + 3764) = 3; /*0x45deac*/
  *(_DWORD *)(this + 3768) = 0; /*0x45deb6*/
  *(_DWORD *)(this + 3772) = 0; /*0x45debc*/
  *(_DWORD *)(this + 3776) = 0; /*0x45dec2*/
  *(_DWORD *)(this + 3780) = 0; /*0x45dec8*/
  *(_DWORD *)(this + 3784) = 0; /*0x45dece*/
  *(_DWORD *)(this + 3788) = 0; /*0x45ded4*/
  *(_DWORD *)(this + 3792) = 0; /*0x45deda*/
  *(_DWORD *)(this + 3796) = 0; /*0x45dee0*/
  *(_DWORD *)(this + 3800) = 0; /*0x45dee6*/
  *(_DWORD *)(this + 3804) = 128; /*0x45deec*/
  *(_DWORD *)(this + 3808) = 0; /*0x45def6*/
  *(_DWORD *)(this + 3812) = 0; /*0x45defc*/
  *(_DWORD *)(this + 3816) = 0; /*0x45df02*/
  *(_DWORD *)(this + 3820) = 0; /*0x45df08*/
  *(_DWORD *)(this + 3824) = 0; /*0x45df13*/
  *(_DWORD *)(this + 3828) = 2; /*0x45df19*/
  *(_DWORD *)(this + 3832) = 2; /*0x45df1f*/
  *(_DWORD *)(this + 3836) = 0; /*0x45df25*/
  *(_DWORD *)(this + 3840) = 0; /*0x45df2b*/
  *(_DWORD *)(this + 5344) = 0; /*0x45df31*/
  *(_DWORD *)(this + 5348) = 0; /*0x45df37*/
  *(_DWORD *)(this + 5356) = 0; /*0x45df3d*/
  *(_DWORD *)(this + 5364) = 0; /*0x45df43*/
  *(_DWORD *)(this + 5372) = 0; /*0x45df49*/
  *(_DWORD *)(this + 5380) = 0; /*0x45df4f*/
  *(_DWORD *)(this + 5388) = 0; /*0x45df55*/
  *(_DWORD *)(this + 5392) = 0; /*0x45df5b*/
  *(_DWORD *)(this + 5396) = 0; /*0x45df61*/
  *(_DWORD *)(this + 5400) = 0; /*0x45df67*/
  *(_BYTE *)(this + 5404) = 0; /*0x45df6d*/
  *(_DWORD *)(this + 5408) = 0; /*0x45df73*/
  *(_DWORD *)(this + 5412) = 0; /*0x45df79*/
  *(_DWORD *)(this + 5416) = 0; /*0x45df7f*/
  *(_DWORD *)(this + 5420) = 0; /*0x45df87*/
  *(_DWORD *)(this + 5424) = 0; /*0x45df8d*/
  *(_DWORD *)(this + 5428) = 0; /*0x45df93*/
  *(_DWORD *)(this + 5432) = dword_89C8A0; /*0x45dfa4*/
  *(_DWORD *)(this + 5436) = dword_89C8A4; /*0x45dfb0*/
  *(_DWORD *)(this + 5440) = dword_89C8A8; /*0x45dfb8*/
  v3 = dword_89C8AC; /*0x45dfbb*/
  *(_BYTE *)(this + 5454) = 0; /*0x45dfc3*/
  *(_DWORD *)(this + 5444) = v3; /*0x45dfc9*/
  *(_WORD *)(this + 5448) = 0; /*0x45dfcc*/
  *(_BYTE *)(this + 5450) = 1; /*0x45dfd3*/
  *(_BYTE *)(this + 5451) = 0; /*0x45dfda*/
  *(_BYTE *)(this + 5452) = 0; /*0x45dfe0*/
  *(_DWORD *)(this + 5656) = 0; /*0x45dfe6*/
  *(_BYTE *)(this + 5453) = 0; /*0x45dfec*/
  *(_BYTE *)(this + 5455) = 1; /*0x45dff2*/
  *(_BYTE *)(this + 5456) = 0; /*0x45dff9*/
  *(_BYTE *)(this + 5457) = 0; /*0x45dfff*/
  *(_BYTE *)(this + 5458) = 0; /*0x45e005*/
  *(_DWORD *)(this + 5460) = -1; /*0x45e00b*/
  *(_DWORD *)(this + 5464) = 0; /*0x45e011*/
  *(_DWORD *)(this + 5468) = 0; /*0x45e017*/
  *(_DWORD *)(this + 5472) = 0; /*0x45e01d*/
  *(_DWORD *)(this + 5476) = 0; /*0x45e023*/
  *(_DWORD *)(this + 5480) = 0; /*0x45e029*/
  *(_DWORD *)(this + 5484) = 25; /*0x45e02f*/
  *(_BYTE *)(this + 5488) = 0; /*0x45e039*/
  *(_BYTE *)(this + 5489) = 0; /*0x45e03f*/
  *(_BYTE *)(this + 5490) = 0; /*0x45e045*/
  *(_BYTE *)(this + 5491) = 0; /*0x45e04b*/
  *(_BYTE *)(this + 5492) = 0; /*0x45e051*/
  *(_BYTE *)(this + 5493) = 0; /*0x45e057*/
  *(_BYTE *)(this + 5494) = 0; /*0x45e05d*/
  *(_BYTE *)(this + 5495) = 1; /*0x45e063*/
  *(_BYTE *)(this + 5496) = 0; /*0x45e06a*/
  *(_BYTE *)(this + 5497) = 0; /*0x45e070*/
  *(_BYTE *)(this + 5498) = 1; /*0x45e076*/
  *(_BYTE *)(this + 5499) = 0; /*0x45e07d*/
  *(_BYTE *)(this + 5500) = 0; /*0x45e083*/
  *(_DWORD *)(this + 5504) = 0; /*0x45e089*/
  *(_BYTE *)(this + 5508) = 1; /*0x45e08f*/
  *(_DWORD *)(this + 5660) = 0; /*0x45e096*/
  *(_DWORD *)(this + 5664) = -1; /*0x45e09c*/
  *(_BYTE *)(this + 5796) = 0; /*0x45e0a2*/
  *(_BYTE *)(this + 5797) = 0; /*0x45e0a8*/
  *(_BYTE *)(this + 5798) = 0; /*0x45e0ae*/
  *(_BYTE *)(this + 5799) = 0; /*0x45e0b4*/
  *(_BYTE *)(this + 5800) = 0; /*0x45e0ba*/
  *(_BYTE *)(this + 5801) = 0; /*0x45e0c0*/
  *(_BYTE *)(this + 5802) = 0; /*0x45e0c6*/
  *(_BYTE *)(this + 5803) = 0; /*0x45e0cc*/
  *(_BYTE *)(this + 5804) = 0; /*0x45e0d2*/
  *(_BYTE *)(this + 5805) = 0; /*0x45e0d8*/
  *(_BYTE *)(this + 5806) = 0; /*0x45e0de*/
  *(_BYTE *)(this + 5807) = 0; /*0x45e0e4*/
  *(_BYTE *)(this + 5808) = 0; /*0x45e0ea*/
  *(_BYTE *)(this + 5809) = 0; /*0x45e0f0*/
  *(_BYTE *)(this + 5810) = 0; /*0x45e0f6*/
  *(_BYTE *)(this + 5811) = 0; /*0x45e0fc*/
  *(_BYTE *)(this + 5812) = 0; /*0x45e102*/
  *(_BYTE *)(this + 5813) = 1; /*0x45e108*/
  *(_BYTE *)(this + 5814) = 0; /*0x45e10f*/
  *(_BYTE *)(this + 5815) = 0; /*0x45e115*/
  *(_BYTE *)(this + 5816) = 0; /*0x45e11b*/
  *(_BYTE *)(this + 5817) = 0; /*0x45e121*/
  *(_BYTE *)(this + 5818) = 0; /*0x45e127*/
  *(_BYTE *)(this + 5819) = 0; /*0x45e12d*/
  *(_BYTE *)(this + 5820) = 0; /*0x45e133*/
  *(_BYTE *)(this + 5821) = 0; /*0x45e139*/
  *(_BYTE *)(this + 5822) = 0; /*0x45e13f*/
  *(_BYTE *)(this + 5823) = 0; /*0x45e145*/
  *(_BYTE *)(this + 5824) = 0; /*0x45e14b*/
  *(_BYTE *)(this + 5825) = 0; /*0x45e151*/
  *(_BYTE *)(this + 5826) = 0; /*0x45e157*/
  *(_BYTE *)(this + 5827) = 0; /*0x45e15d*/
  *(_BYTE *)(this + 5828) = 0; /*0x45e163*/
  *(_BYTE *)(this + 5829) = 0; /*0x45e169*/
  *(_BYTE *)(this + 5830) = 0; /*0x45e16f*/
  *(_BYTE *)(this + 5831) = 0; /*0x45e175*/
  *(_BYTE *)(this + 5832) = 0; /*0x45e17b*/
  *(_BYTE *)(this + 5833) = 0; /*0x45e181*/
  *(_BYTE *)(this + 5834) = 0; /*0x45e187*/
  *(_BYTE *)(this + 5835) = 0; /*0x45e18d*/
  *(_BYTE *)(this + 5836) = 0; /*0x45e193*/
  *(_BYTE *)(this + 5837) = 0; /*0x45e19e*/
  *(_DWORD *)(this + 5840) = 1065353216; /*0x45e1a4*/
  *(_DWORD *)(this + 5844) = 1065353216; /*0x45e1aa*/
  *(_DWORD *)(this + 5848) = 1065353216; /*0x45e1b0*/
  *(_DWORD *)(this + 5852) = 1065353216; /*0x45e1b6*/
  *(_DWORD *)(this + 5856) = 1065353216; /*0x45e1bc*/
  *(_BYTE *)(this + 5860) = 0; /*0x45e1c2*/
  *(_BYTE *)(this + 5861) = 0; /*0x45e1c8*/
  *(_BYTE *)(this + 5862) = 0; /*0x45e1ce*/
  *(_DWORD *)(this + 5864) = 1148829696; /*0x45e1d4*/
  *(_DWORD *)(this + 5868) = 0; /*0x45e1de*/
  *(_DWORD *)(this + 5872) = -1; /*0x45e1e4*/
  *(_DWORD *)(this + 5876) = -1; /*0x45e1ea*/
  *(_DWORD *)(this + 5880) = 9; /*0x45e1f0*/
  *(_DWORD *)(this + 5884) = -1; /*0x45e1fa*/
  *(_BYTE *)(this + 5888) = 0; /*0x45e200*/
  *(_BYTE *)(this + 5889) = 0; /*0x45e206*/
  *(_BYTE *)(this + 5890) = 0; /*0x45e20c*/
  *(_BYTE *)(this + 5891) = 0; /*0x45e212*/
  *(_BYTE *)(this + 5892) = 1; /*0x45e218*/
  *(_BYTE *)(this + 5893) = 0; /*0x45e21f*/
  *(_BYTE *)(this + 5894) = 0; /*0x45e225*/
  *(_BYTE *)(this + 5895) = 20; /*0x45e22b*/
  *(_BYTE *)(this + 5896) = 0; /*0x45e232*/
  *(_DWORD *)(this + 5900) = 0; /*0x45e238*/
  *(_DWORD *)(this + 5904) = 64; /*0x45e23e*/
  *(_BYTE *)(this + 5984) = 0; /*0x45e248*/
  *(_BYTE *)(this + 5985) = 0; /*0x45e24e*/
  *(_BYTE *)(this + 5986) = 0; /*0x45e254*/
  *(_BYTE *)(this + 5987) = 0; /*0x45e25a*/
  *(_BYTE *)(this + 5988) = 0; /*0x45e260*/
  *(_BYTE *)(this + 5989) = 0; /*0x45e266*/
  *(_BYTE *)(this + 5990) = 1; /*0x45e26c*/
  *(_BYTE *)(this + 5991) = 0; /*0x45e273*/
  *(_BYTE *)(this + 5992) = 0; /*0x45e279*/
  *(_BYTE *)(this + 5993) = 0; /*0x45e284*/
  *(_DWORD *)(this + 6016) = 1; /*0x45e28a*/
  *(_DWORD *)(this + 6024) = 0; /*0x45e292*/
  *(_DWORD *)(this + 6028) = 1; /*0x45e298*/
  *(_BYTE *)(this + 6032) = 1; /*0x45e29e*/
  *(_BYTE *)(this + 6033) = 0; /*0x45e2a5*/
  *(_DWORD *)(this + 6020) = &VectorClass<TPoint3D<int>>::`vftable'; /*0x45e2ab*/
  *(_DWORD *)(this + 6024) = __2_YAPAXI_Z(0xCu); /*0x45e2ba*/
  *(_BYTE *)(this + 6033) = 1; /*0x45e2c6*/
  *(_DWORD *)this = &BuildingTypeClass::`vftable'; /*0x45e2cd*/
  *(_DWORD *)(this + 4) = &BuildingTypeClass::`vftable'; /*0x45e2d3*/
  *(_DWORD *)(this + 8) = &BuildingTypeClass::`vftable'; /*0x45e2d9*/
  *(_DWORD *)(this + 12) = &BuildingTypeClass::`vftable'; /*0x45e2e1*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x45e2e8*/
  v4 = dword_A83C78; /*0x45e2ed*/
  if ( dword_A83C78 < dword_A83C70 /*0x45e32b*/
    || (byte_A83C75 || !dword_A83C70)
    && dword_A83C7C > 0
    && (v5 = (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A83C68 + 8))(
               &dword_A83C68,
               dword_A83C7C + dword_A83C70,
               0) == 0,
        v4 = dword_A83C78,
        !v5) )
  {
    dword_A83C78 = v4 + 1; /*0x45e330*/
    *((_DWORD *)dword_A83C6C + v4) = this; /*0x45e33a*/
    v4 = dword_A83C78; /*0x45e33d*/
  }
  v6 = 0; /*0x45e342*/
  if ( v4 <= 0 ) /*0x45e346*/
  {
LABEL_11:
    v6 = -1; /*0x45e35a*/
  }
  else
  {
    v7 = dword_A83C6C; /*0x45e348*/
    while ( *v7 != this ) /*0x45e350*/
    {
      ++v6; /*0x45e352*/
      ++v7; /*0x45e353*/
      if ( v6 >= v4 ) /*0x45e358*/
        goto LABEL_11; /*0x45e358*/
    }
  }
  *(_DWORD *)(this + 3576) = v6; /*0x45e35c*/
  *(_DWORD *)(this + 3844) = 0; /*0x45e362*/
  *(_DWORD *)(this + 3848) = 1; /*0x45e368*/
  *(_DWORD *)(this + 3852) = 0; /*0x45e36e*/
  *(_DWORD *)(this + 3856) = 0; /*0x45e374*/
  *(_DWORD *)(this + 3860) = 1; /*0x45e37a*/
  *(_DWORD *)(this + 3864) = 0; /*0x45e380*/
  *(_DWORD *)(this + 3868) = 0; /*0x45e386*/
  *(_DWORD *)(this + 3872) = 1; /*0x45e38c*/
  *(_DWORD *)(this + 3876) = 0; /*0x45e392*/
  *(_DWORD *)(this + 3892) = 0; /*0x45e398*/
  *(_DWORD *)(this + 3896) = 1; /*0x45e39e*/
  *(_DWORD *)(this + 3900) = 0; /*0x45e3a4*/
  *(_DWORD *)(this + 3904) = 0; /*0x45e3aa*/
  *(_DWORD *)(this + 3908) = 1; /*0x45e3b0*/
  *(_DWORD *)(this + 3912) = 0; /*0x45e3b6*/
  v8 = (_DWORD *)(this + 3932); /*0x45e3be*/
  v9 = 21; /*0x45e3c4*/
  do /*0x45e414*/
  {
    v10 = v8 - 4; /*0x45e3c9*/
    *v10 = 0; /*0x45e3ce*/
    v10[1] = 0; /*0x45e3d1*/
    v10[2] = 0; /*0x45e3d4*/
    v10[3] = 0; /*0x45e3d7*/
    *v8 = 0; /*0x45e3dc*/
    v8[1] = 0; /*0x45e3df*/
    v8[2] = 0; /*0x45e3e2*/
    v8[3] = 0; /*0x45e3e5*/
    v11 = v8 + 4; /*0x45e3e8*/
    v8 += 17; /*0x45e3eb*/
    --v9; /*0x45e3ee*/
    *v11 = 0; /*0x45e3ef*/
    v11[1] = 0; /*0x45e3f2*/
    v11[2] = 0; /*0x45e3f5*/
    v11[3] = 0; /*0x45e3f8*/
    *(v8 - 9) = 0; /*0x45e3fb*/
    *(v8 - 8) = 0; /*0x45e3fe*/
    *(v8 - 7) = 0; /*0x45e401*/
    *(v8 - 6) = 0; /*0x45e404*/
    *((_BYTE *)v8 - 20) = 1; /*0x45e407*/
    *((_BYTE *)v8 - 19) = 0; /*0x45e40b*/
    *((_BYTE *)v8 - 18) = 0; /*0x45e40e*/
    *((_BYTE *)v8 - 17) = 0; /*0x45e411*/
  }
  while ( v9 ); /*0x45e414*/
  *(_BYTE *)(this + 3676) = 0; /*0x45e416*/
  *(_BYTE *)(this + 3720) = 0; /*0x45e41c*/
  *(_BYTE *)(this + 5994) = 0; /*0x45e422*/
  *(_BYTE *)(this + 5908) = 0; /*0x45e428*/
  *(_BYTE *)(this + 3214) = 0; /*0x45e42e*/
  *(_BYTE *)(this + 5352) = 0; /*0x45e434*/
  *(_BYTE *)(this + 5360) = 0; /*0x45e43a*/
  *(_BYTE *)(this + 5368) = 0; /*0x45e440*/
  *(_BYTE *)(this + 5376) = 0; /*0x45e446*/
  *(_BYTE *)(this + 5384) = 0; /*0x45e44c*/
  v12 = (_DWORD *)(this + 5512); /*0x45e452*/
  v13 = 10; /*0x45e458*/
  do /*0x45e472*/
  {
    v14 = dword_89C8D4; /*0x45e463*/
    *v12 = dword_89C8D0; /*0x45e469*/
    v12[1] = v14; /*0x45e46b*/
    v12 += 2; /*0x45e46e*/
    --v13; /*0x45e471*/
  }
  while ( v13 ); /*0x45e472*/
  v15 = (_DWORD *)(this + 5592); /*0x45e474*/
  v16 = 8; /*0x45e47a*/
  do /*0x45e494*/
  {
    v17 = dword_89C8D4; /*0x45e485*/
    *v15 = dword_89C8D0; /*0x45e48b*/
    v15[1] = v17; /*0x45e48d*/
    v15 += 2; /*0x45e490*/
    --v16; /*0x45e493*/
  }
  while ( v16 ); /*0x45e494*/
  v18 = (_DWORD *)(this + 5732); /*0x45e49b*/
  v19 = 8; /*0x45e4a7*/
  do /*0x45e4c4*/
  {
    *(v18 - 16) = 0xFFFF; /*0x45e4ac*/
    *(v18 - 15) = 0xFFFF; /*0x45e4b4*/
    *v18 = 0xFFFF; /*0x45e4b7*/
    v18[1] = 0xFFFF; /*0x45e4bd*/
    v18 += 2; /*0x45e4c0*/
    --v19; /*0x45e4c3*/
  }
  while ( v19 ); /*0x45e4c4*/
  v20 = *(_DWORD **)(this + 6024); /*0x45e4c6*/
  *v20 = 0; /*0x45e4d2*/
  v20[1] = 0; /*0x45e4d6*/
  v20[2] = 0; /*0x45e4d9*/
  *(_BYTE *)(this + 3381) = 1; /*0x45e4dc*/
  *(_BYTE *)(this + 3382) = 1; /*0x45e4e3*/
  *(_BYTE *)(this + 3387) = 0; /*0x45e4ea*/
  *(_BYTE *)(this + 3384) = 0; /*0x45e4f0*/
  *(_BYTE *)(this + 3479) = 0; /*0x45e4f6*/
  *(_BYTE *)(this + 3478) = 0; /*0x45e4fc*/
  *(_BYTE *)(this + 3374) = 0; /*0x45e502*/
  return this; /*0x45e508*/
}



// ==== 0x0045E520  BuildingTypeClass::loadBuildingProperty_b_545E520  this=BuildingTypeClass  sig=csp ====
_DWORD *__thiscall BuildingTypeClass::loadBuildingProperty_b_545E520(BuildingTypeClass *this, int a2)
{
  TechnoTypeClass::Construct((int)this, a2); /*0x45e528*/
  this->Buildup[0] = 0; /*0x45e52f*/
  *(_DWORD *)&this->__pad_1714[116] = 0; /*0x45e535*/
  *(_DWORD *)&this->__pad_1714[120] = 0; /*0x45e53b*/
  this->__pad_1714[124] = 1; /*0x45e541*/
  this->__pad_1714[125] = 0; /*0x45e548*/
  *(_DWORD *)&this->__pad_1714[112] = &VectorClass<TPoint3D<int>>::`vftable'; /*0x45e54e*/
  this->TechnoTypeClass = &BuildingTypeClass::`vftable'; /*0x45e558*/
  this->? = &BuildingTypeClass::`vftable'; /*0x45e55e*/
  this->? = &BuildingTypeClass::`vftable'; /*0x45e565*/
  this->? = &BuildingTypeClass::`vftable'; /*0x45e56c*/
  return &this->TechnoTypeClass; /*0x45e575*/
}



// ==== 0x0045E580  BuildingTypeClass::CleanupMembers  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::CleanupMembers(BuildingTypeClass *this)
{
  char BuildupLoaded; // al
  int v3; // eax
  void *v4; // eax
  BuildingTypeClass *v6; // [esp+8h] [ebp-4h] BYREF

  BuildupLoaded = this->BuildupLoaded; /*0x45e587*/
  this->TechnoTypeClass = &BuildingTypeClass::`vftable'; /*0x45e58d*/
  this->? = &BuildingTypeClass::`vftable'; /*0x45e595*/
  this->? = &BuildingTypeClass::`vftable'; /*0x45e59c*/
  this->? = &BuildingTypeClass::`vftable'; /*0x45e5a3*/
  if ( BuildupLoaded && this->Buildup[0] ) /*0x45e5ac*/
  {
    __3_YAXPAX_Z((void *)this->Buildup[0]); /*0x45e5b7*/
    this->Buildup[0] = 0; /*0x45e5bf*/
    this->BuildupLoaded = 0; /*0x45e5c5*/
  }
  if ( this->__pad_F70[1452] && *(_DWORD *)&this->__pad_F70[1448] ) /*0x45e5d3*/
  {
    __3_YAXPAX_Z(*(void **)&this->__pad_F70[1448]); /*0x45e5de*/
    *(_DWORD *)&this->__pad_F70[1448] = 0; /*0x45e5e6*/
    this->__pad_F70[1452] = 0; /*0x45e5ec*/
  }
  if ( this->__pad_F70[1400] && *(_DWORD *)&this->__pad_F70[1396] ) /*0x45e5fa*/
  {
    __3_YAXPAX_Z(*(void **)&this->__pad_F70[1396]); /*0x45e605*/
    *(_DWORD *)&this->__pad_F70[1396] = 0; /*0x45e60d*/
    this->__pad_F70[1400] = 0; /*0x45e613*/
  }
  if ( this->__pad_F70[1408] && *(_DWORD *)&this->__pad_F70[1404] ) /*0x45e621*/
  {
    __3_YAXPAX_Z(*(void **)&this->__pad_F70[1404]); /*0x45e62c*/
    *(_DWORD *)&this->__pad_F70[1404] = 0; /*0x45e634*/
    this->__pad_F70[1408] = 0; /*0x45e63a*/
  }
  if ( this->__pad_F70[1416] && *(_DWORD *)&this->__pad_F70[1412] ) /*0x45e648*/
  {
    __3_YAXPAX_Z(*(void **)&this->__pad_F70[1412]); /*0x45e653*/
    *(_DWORD *)&this->__pad_F70[1412] = 0; /*0x45e65b*/
    this->__pad_F70[1416] = 0; /*0x45e661*/
  }
  if ( this->__pad_F70[1424] && *(_DWORD *)&this->__pad_F70[1420] ) /*0x45e66f*/
  {
    __3_YAXPAX_Z(*(void **)&this->__pad_F70[1420]); /*0x45e67a*/
    *(_DWORD *)&this->__pad_F70[1420] = 0; /*0x45e682*/
    this->__pad_F70[1424] = 0; /*0x45e688*/
  }
  if ( this->__pad_F70[1432] && *(_DWORD *)&this->__pad_F70[1428] ) /*0x45e696*/
  {
    __3_YAXPAX_Z(*(void **)&this->__pad_F70[1428]); /*0x45e6a1*/
    *(_DWORD *)&this->__pad_F70[1428] = 0; /*0x45e6a9*/
    this->__pad_F70[1432] = 0; /*0x45e6af*/
  }
  AbstractClass::AnnounceExpiredPointer(&this->TechnoTypeClass, 1); /*0x45e6b9*/
  v6 = this; /*0x45e6ce*/
  v3 = (*(int (__thiscall **)(_DWORD *, BuildingTypeClass **))(dword_A83C68 + 16))(&dword_A83C68, &v6); /*0x45e6d2*/
  if ( v3 != -1 && v3 < dword_A83C78 && v3 < --dword_A83C78 ) /*0x45e6ed*/
  {
    do /*0x45e705*/
    {
      ++v3; /*0x45e6f5*/
      *((_DWORD *)dword_A83C6C + v3 - 1) = *((_DWORD *)dword_A83C6C + v3); /*0x45e6f9*/
    }
    while ( v3 < dword_A83C78 ); /*0x45e705*/
  }
  v4 = *(void **)&this->__pad_1714[116]; /*0x45e707*/
  *(_DWORD *)&this->__pad_1714[112] = &VectorClass<TPoint3D<int>>::`vftable'; /*0x45e70d*/
  if ( v4 && this->__pad_1714[125] ) /*0x45e71b*/
  {
    __3_YAXPAX_Z(v4); /*0x45e724*/
    *(_DWORD *)&this->__pad_1714[116] = 0; /*0x45e72c*/
  }
  this->__pad_1714[125] = 0; /*0x45e734*/
  *(_DWORD *)&this->__pad_1714[120] = 0; /*0x45e73a*/
  return TechnoTypeClass::DTOR((int)this); /*0x45e745*/
}



// ==== 0x0045E750  nullsub_6  this=-  sig=ida-proto ====
void nullsub_6()
{
  ; /*0x45e750*/
}



// ==== 0x0045E7B0  BuildingTypeClass::FindIndexByName  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::FindIndexByName(BuildingTypeClass *this)
{
  int v2; // esi

  if ( !this ) /*0x45e7b6*/
    return -1; /*0x45e7b6*/
  v2 = 0; /*0x45e7bd*/
  if ( dword_A83C78 <= 0 ) /*0x45e7c1*/
    return -1; /*0x45e7e6*/
  while ( _strcmpi((char *)(*((_DWORD *)dword_A83C6C + v2) + 36), (char *)this) ) /*0x45e7da*/
  {
    if ( ++v2 >= dword_A83C78 ) /*0x45e7e4*/
      return -1; /*0x45e7e4*/
  }
  return v2; /*0x45e7e6*/
}



// ==== 0x0045E800  AbstractClass::clearRefCount  this=AbstractClass  sig=csp ====
char __thiscall AbstractClass::clearRefCount(AbstractClass *this, __int16 *a2, int a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // edx
  _DWORD v8[3]; // [esp+4h] [ebp-Ch] BYREF

  v4 = __2_YAPAXI_Z(0x720u); /*0x45e80b*/
  if ( !v4 ) /*0x45e815*/
    return 0; /*0x45e815*/
  v5 = BuildingClass::Construct(v4, (int)this, a3); /*0x45e81f*/
  if ( !v5 ) /*0x45e826*/
    return 0; /*0x45e86d*/
  v8[2] = 0; /*0x45e82e*/
  v6 = *a2 << 8; /*0x45e840*/
  v8[1] = (a2[1] << 8) + 128; /*0x45e84f*/
  v8[0] = v6 + 128; /*0x45e857*/
  return (*(char (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v5 + 216))(v5, v8, 0); /*0x45e866*/
}



// ==== 0x0045E880  AbstractClass::addRefCount  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::addRefCount(AbstractClass *this, int a2)
{
  int v3; // eax

  v3 = __2_YAPAXI_Z(0x720u); /*0x45e888*/
  if ( v3 ) /*0x45e892*/
    return BuildingClass::Construct(v3, (int)this, a2); /*0x45e89c*/
  else
    return 0; /*0x45e8a5*/
}



// ==== 0x0045E8B0  ObjectClass::method_45E8B0  this=ObjectClass  sig=csp ====
int __thiscall sub_45E8B0(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  int result; // eax
  char *v6; // edx

  result = 3 * a2 + 963; /*0x45e8bc*/
  v6 = (char *)this + 12 * a2; /*0x45e8c3*/
  *((_DWORD *)v6 + 961) = a3; /*0x45e8c6*/
  *((_DWORD *)v6 + 962) = a4; /*0x45e8d0*/
  *((_DWORD *)&this->AbstractClass + result) = a5; /*0x45e8da*/
  return result; /*0x45e8dd*/
}



// ==== 0x0045E8F0  ObjectClass::ProcessDataCCFileClass  this=ObjectClass  sig=csp ====
char sub_45E8F0()
{
  int SubFile; // eax
  int v1; // esi
  int v2; // edx
  int v3; // edi
  int i; // ecx
  _DWORD v6[4]; // [esp+4h] [ebp-10h] BYREF

  LOBYTE(SubFile) = (_BYTE)dword_89DDBC; /*0x45e8f0*/
  if ( !dword_89DDBC ) /*0x45e8fb*/
  {
    dword_89DDBC = (void *)SearchMIXFile(aBuildngzSha, 0); /*0x45e90d*/
    Building::GetFoundationSize(v6, 0); /*0x45e917*/
    SubFile = MixFileClass::GetSubFile((char **)dword_89DDBC, 0); /*0x45e924*/
    v1 = *((__int16 *)dword_89DDBC + 1); /*0x45e92f*/
    if ( *((__int16 *)dword_89DDBC + 2) > 0 ) /*0x45e939*/
    {
      v2 = SubFile; /*0x45e93c*/
      v3 = *((__int16 *)dword_89DDBC + 2); /*0x45e93e*/
      do /*0x45e95a*/
      {
        for ( i = 0; i < v1; ++i ) /*0x45e944*/
        {
          LOBYTE(SubFile) = *(_BYTE *)(v2 + i); /*0x45e946*/
          if ( (_BYTE)SubFile ) /*0x45e94b*/
          {
            LOBYTE(SubFile) = SubFile - 65; /*0x45e94d*/
            *(_BYTE *)(v2 + i) = SubFile; /*0x45e94f*/
          }
        }
        v2 += v1; /*0x45e957*/
        --v3; /*0x45e959*/
      }
      while ( v3 ); /*0x45e95a*/
    }
  }
  return SubFile; /*0x45e95d*/
}



// ==== 0x0045E970  BuildingTypeClass::LoadRepairAnimations  this=BuildingTypeClass  sig=csp ====
void BuildingTypeClass::LoadRepairAnimations(BuildingTypeClass *this)
{
  int v1; // ecx
  int v2; // edi
  int v3; // ebp
  int v4; // esi
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  int v9; // [esp+10h] [ebp-204h]
  char Buffer[512]; // [esp+14h] [ebp-200h] BYREF

  v2 = v1; /*0x45e97a*/
  ProcessDataCCFileClass(); /*0x45e97c*/
  FileSystem_POWEROFF_SHP = SearchMIXFile(aPoweroffShp, 0); /*0x45e994*/
  FileSystem_WRENCH_SHP = SearchMIXFile(aWrenchShp, 0); /*0x45e99e*/
  v3 = 0; /*0x45e9aa*/
  v9 = 0; /*0x45e9ae*/
  if ( dword_A83C78 > 0 ) /*0x45e9b2*/
  {
    do /*0x45eb42*/
    {
      v4 = *((_DWORD *)dword_A83C6C + v3); /*0x45e9c1*/
      if ( v9 <= *(char *)(v4 + 5895) ) /*0x45e9cd*/
        v9 = *(char *)(v4 + 5895); /*0x45e9cf*/
      if ( *(_BYTE *)(v4 + 556) ) /*0x45e9d3*/
      {
        if ( *(_BYTE *)(v4 + 5984) ) /*0x45e9df*/
        {
          if ( *(_DWORD *)(v4 + 164) ) /*0x45ea23*/
          {
            __3_YAXPAX_Z(*(void **)(v4 + 164)); /*0x45ea2e*/
            *(_DWORD *)(v4 + 164) = 0; /*0x45ea36*/
            *(_BYTE *)(v4 + 168) = 0; /*0x45ea3c*/
          }
        }
        else
        {
          _makepath(Buffer, 0, 0, (const char *)(v4 + 504), (const char *)&off_7E1BC6 + 112 * v2); /*0x45ea08*/
          *(_DWORD *)(v4 + 164) = SearchMIXFile(Buffer, 0); /*0x45ea1b*/
        }
        if ( *(_BYTE *)(v4 + 5985) ) /*0x45ea42*/
        {
          if ( *(_DWORD *)(v4 + 3584) ) /*0x45ea86*/
          {
            __3_YAXPAX_Z(*(void **)(v4 + 3584)); /*0x45ea91*/
            *(_DWORD *)(v4 + 3584) = 0; /*0x45ea99*/
            *(_BYTE *)(v4 + 3588) = 0; /*0x45ea9f*/
          }
        }
        else
        {
          _makepath(Buffer, 0, 0, (const char *)(v4 + 3676), (const char *)&off_7E1BC6 + 112 * v2); /*0x45ea6b*/
          *(_DWORD *)(v4 + 3584) = SearchMIXFile(Buffer, 0); /*0x45ea7e*/
        }
        v5 = *(_DWORD *)(v4 + 3584); /*0x45eaa5*/
        if ( v5 ) /*0x45eaad*/
        {
          v6 = *(__int16 *)(v5 + 6); /*0x45eab3*/
          v7 = 1; /*0x45eab9*/
          if ( v6 ) /*0x45eabe*/
            v7 = 75 / v6; /*0x45eac6*/
          *(_DWORD *)(v4 + 3844) = 0; /*0x45eac8*/
          *(_DWORD *)(v4 + 3848) = v6; /*0x45eace*/
          *(_DWORD *)(v4 + 3852) = v7; /*0x45ead4*/
        }
      }
      else if ( *(_BYTE *)(v4 + 567) ) /*0x45eadc*/
      {
        if ( *(_BYTE *)(v4 + 5984) && *(_DWORD *)(v4 + 164) ) /*0x45eaec*/
        {
          __3_YAXPAX_Z(*(void **)(v4 + 164)); /*0x45eaf7*/
          *(_DWORD *)(v4 + 164) = 0; /*0x45eaff*/
          *(_BYTE *)(v4 + 168) = 0; /*0x45eb05*/
        }
        if ( *(_BYTE *)(v4 + 5985) && *(_DWORD *)(v4 + 3584) ) /*0x45eb13*/
        {
          __3_YAXPAX_Z(*(void **)(v4 + 3584)); /*0x45eb1e*/
          *(_DWORD *)(v4 + 3584) = 0; /*0x45eb26*/
          *(_BYTE *)(v4 + 3588) = 0; /*0x45eb2c*/
        }
        BuildingTypeClass::LoadAnimations(v4, v2); /*0x45eb35*/
      }
      ++v3; /*0x45eb3f*/
    }
    while ( v3 < dword_A83C78 ); /*0x45eb42*/
    if ( v9 ) /*0x45eb4c*/
    {
      if ( dword_89DDC0 ) /*0x45eb56*/
        (*(void (__thiscall **)(Draw *, int))dword_89DDC0->Draw_field_00)(dword_89DDC0, 1); /*0x45eb5c*/
      v8 = __2_YAPAXI_Z(0x20u); /*0x45eb65*/
      if ( v8 ) /*0x45eb6c*/
      {
        *(_DWORD *)(v8 + 12) = 0; /*0x45eb72*/
        *(_DWORD *)v8 = &XSurface_Vtable; /*0x45eb78*/
        *(_DWORD *)(v8 + 4) = v9 + 16; /*0x45eb80*/
        *(_DWORD *)(v8 + 8) = v9 + 16; /*0x45eb8b*/
        *(_DWORD *)(v8 + 16) = 1; /*0x45eb8e*/
        Buffer::Init((Buffer *)(v8 + 20), 0, (v9 + 16) * (v9 + 16)); /*0x45eb95*/
        *(_DWORD *)v8 = &BSurface_Vtable; /*0x45eb9a*/
        dword_89DDC0 = (Draw *)v8; /*0x45eba0*/
      }
      else
      {
        dword_89DDC0 = 0; /*0x45ebb1*/
      }
    }
  }
}



// ==== 0x0045EBD0  AbstractClass::checkPointer  this=AbstractClass  sig=csp ====
_DWORD *__thiscall AbstractClass::checkPointer(AbstractClass *this, _DWORD *a2)
{
  _DWORD *FoundationSize; // eax
  int v3; // ecx
  int v4; // edx
  _DWORD v6[4]; // [esp+10h] [ebp-10h] BYREF

  if ( (*((int (__thiscall **)(AbstractClass *))this->vtable0 + 39))(this) ) /*0x45ebd5*/
  {
    FoundationSize = Building::GetFoundationSize(v6, 0); /*0x45ebe8*/
    v3 = FoundationSize[2]; /*0x45ebfa*/
    v4 = FoundationSize[3]; /*0x45ebfd*/
  }
  else
  {
    v3 = 0; /*0x45ec02*/
    v4 = 0; /*0x45ec04*/
  }
  *a2 = v3; /*0x45ec0d*/
  a2[1] = v3; /*0x45ec0f*/
  a2[2] = v4; /*0x45ec12*/
  return a2; /*0x45ec16*/
}



// ==== 0x0045EC20  AbstractClass::validatePointer  this=AbstractClass  sig=csp ====
int *__thiscall AbstractClass::validatePointer(AbstractClass *this, int a2)
{
  int *result; // eax

  if ( (byte_89C890 & 1) == 0 ) /*0x45ec2e*/
  {
    byte_89C890 |= 1u; /*0x45ec4c*/
    dword_89C8E8 = 2147450879; /*0x45ec52*/
    atexit(nullsub_107); /*0x45ec57*/
  }
  result = (int *)*((_DWORD *)this + 895); /*0x45ec5f*/
  if ( !result ) /*0x45ec68*/
    return &dword_89C8E8; /*0x45ec6a*/
  return result; /*0x45ec65*/
}



// ==== 0x0045EC80  nullsub_107  this=-  sig=ida-proto ====
void __cdecl nullsub_107()
{
  ; /*0x45ec80*/
}



// ==== 0x0045EC90  BuildingTypeClass::GetFoundationWidth  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::GetFoundationWidth(BuildingTypeClass *this)
{
  return stru_81926C.Type[this->Foundation[0]]; /*0x45ec9d*/
}



// ==== 0x0045ECA0  BuildingTypeClass::GetFoundationHeight  this=IUnknown  sig=csp ====
int __thiscall BuildingTypeClass::GetFoundationHeight(int *this, char a2)
{
  if ( a2 && *((_BYTE *)this + 5488) ) /*0x45eca8*/
    return dword_819310[this->q3BC] + 1; /*0x45ecc4*/
  else
    return dword_819310[this->q3BC]; /*0x45ecd1*/
}



// ==== 0x0045ECE0  BuildingTypeClass::GetMaxPips  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::GetMaxPips(BuildingTypeClass *this)
{
  int result; // eax
  int v2; // ecx
  int Storage; // ecx

  result = 60 * stru_81926C.Type[this->Foundation[0]] / 8; /*0x45ed02*/
  if ( this->?[0] == 2 ) /*0x45ed08*/
  {
    if ( this->Weeder ) /*0x45ed14*/
    {
      v2 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6096); /*0x45ed24*/
      if ( v2 >= 0 ) /*0x45ed2c*/
      {
        if ( v2 <= result ) /*0x45ed33*/
          return *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6096); /*0x45ed35*/
      }
      else
      {
        return 0; /*0x45ed2e*/
      }
    }
    else
    {
      Storage = this->?; /*0x45ed38*/
      if ( Storage >= 0 ) /*0x45ed40*/
      {
        if ( Storage <= result ) /*0x45ed47*/
          return Storage; /*0x45ed49*/
      }
      else
      {
        return 0; /*0x45ed42*/
      }
    }
  }
  else if ( this->?[0] != 4 ) /*0x45ed0d*/
  {
    return ObjectClass::GetModeSpecificValue((TechnoTypeClass *)this); /*0x45ed0f*/
  }
  return result; /*0x45ed30*/
}



// ==== 0x0045ED50  AbstractClass::removePointer  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::removePointer(HouseClass *this)
{
  int Member388; // esi
  int *v3; // eax
  int v4; // edi
  int v5; // ebp
  int v6; // ebx
  int v7; // eax

  Member388 = TechnoClass::GetMember388((TechnoTypeClass *)this); /*0x45ed61*/
  v3 = (int *)dword_8871E0->Easy[4]; /*0x45ed63*/
  v4 = *v3; /*0x45ed69*/
  if ( this == **(HouseClass ***)(*v3 + 1004) && !LOBYTE(dword_8871E0->ElevationIncrementBonus[1]) ) /*0x45ed75*/
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v3[1] + 172))(v3[1]); /*0x45ed8c*/
    Member388 += (v5 + (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 172))(v4)) / -2; /*0x45eda1*/
  }
  v6 = *(_DWORD *)&this->builtUnitTypes[880]; /*0x45eda3*/
  if ( !v6 ) /*0x45edab*/
    return Member388; /*0x45edc8*/
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 172))(v6); /*0x45edb1*/
  return (Member388 - v7) & ((Member388 - v7 <= 0) - 1); /*0x45edc1*/
}



// ==== 0x0045EDD0  AbstractClass::addPointer  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::addPointer(HouseClass *this, int a2)
{
  int v4; // esi
  int *v5; // eax
  int v6; // edi
  int v7; // ebx
  int v8; // eax
  int v10; // [esp+14h] [ebp+4h]

  v4 = TechnoTypeClass::ComputeValueSimple((TechnoTypeClass *)this, a2); /*0x45ede6*/
  v5 = (int *)dword_8871E0->Easy[4]; /*0x45ede8*/
  v6 = *v5; /*0x45edee*/
  if ( this == **(HouseClass ***)(*v5 + 1004) && !LOBYTE(dword_8871E0->ElevationIncrementBonus[1]) ) /*0x45edfa*/
  {
    v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5[1] + 132))(v5[1], a2); /*0x45ee19*/
    v4 += (v10 + (*(int (__thiscall **)(int, int))(*(_DWORD *)v6 + 132))(v6, a2)) / 2; /*0x45ee2e*/
  }
  v7 = *(_DWORD *)&this->builtUnitTypes[880]; /*0x45ee30*/
  if ( !v7 ) /*0x45ee38*/
    return v4; /*0x45ee58*/
  v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 132))(v7, a2); /*0x45ee3f*/
  return v8 + v4 <= 0 ? 0 : v8 + v4;
}



// ==== 0x0045EE70  BuildingClass::ApplyFoundationDamage  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ApplyFoundationDamage(BuildingClass *this, _WORD *a2, void *other)
{
  _WORD *v4; // edi
  _WORD *v5; // eax
  __int16 v6; // dx
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // esi
  Cell *v10; // eax
  char v12; // [esp+13h] [ebp-15h]
  __int16 v13[2]; // [esp+14h] [ebp-14h] BYREF
  int v14; // [esp+18h] [ebp-10h]
  _DWORD v15[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v12 = 0; /*0x45ee81*/
  if ( *a2 == word_89C8B0 && a2[1] == word_89C8B2 ) /*0x45ee9a*/
    return 0; /*0x45ee9a*/
  v4 = (_WORD *)(*(int (__thiscall **)(BuildingClass *, int))(this->vtable0 + 144))(this, 1); /*0x45eeac*/
  while ( *v4 != 0x7FFF || v4[1] != 0x7FFF ) /*0x45eebb*/
  {
    v5 = v4; /*0x45eec5*/
    v4 += 2; /*0x45eec7*/
    v6 = a2[1] + v5[1]; /*0x45eed1*/
    LOWORD(v14) = *v5 + *a2; /*0x45eed5*/
    HIWORD(v14) = v6; /*0x45eede*/
    *(_DWORD *)v13 = v14; /*0x45eeed*/
    if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, v13) ) /*0x45eef1*/
    {
      v7 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v13); /*0x45ef04*/
      v8 = v7[17]; /*0x45ef09*/
      if ( v8 != -1 && (this != (BuildingClass *)dword_8871E0->NukeDown || v8 != 2) ) /*0x45ef26*/
        return 2; /*0x45f017*/
      v9 = v7[57]; /*0x45ef2c*/
      if ( v9 ) /*0x45ef34*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 44))(v9) == 36 ) /*0x45ef44*/
          return 2; /*0x45ef44*/
        if ( (*(_BYTE *)(v9 + 20) & 1) != 0 ) /*0x45ef4e*/
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 44))(v9) == 6 ) /*0x45ef5e*/
          {
            if ( !(unsigned __int8)BuildingClass::CanAcceptType((bool *)v9, (int)this, (int)other) ) /*0x45ef6f*/
              return 2; /*0x45ef6f*/
          }
          else
          {
            if ( !(unsigned __int8)HouseClass::IsAlliedWith(*(HouseClass **)(v9 + 540)) /*0x45ef9b*/
              || (*(_BYTE *)(v9 + 20) & 4) == 0 )
            {
              return 2; /*0x45ef9b*/
            }
            v12 = 1; /*0x45efa3*/
            if ( !*(_DWORD *)(v9 + 1444) /*0x45efdf*/
              || (v15[0] = *(_DWORD *)(v9 + 156),
                  v15[1] = *(_DWORD *)(v9 + 160),
                  v15[2] = *(_DWORD *)(v9 + 164),
                  Coord::To_Cell((Coord *)&dword_87F7E8, v15) == *(CellClass **)(v9 + 1444)) )
            {
              v10 = (Cell *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v13); /*0x45effa*/
              Cell::ApplyDamage(v10, (int)&dword_89C8D0, 1, 1, 0); /*0x45f001*/
            }
          }
        }
      }
    }
  }
  return v12 != 0; /*0x45f034*/
}



// ==== 0x0045F040  AbstractClass::LoadTypeFile  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::LoadTypeFile(AbstractClass *this)
{
  int result; // eax
  void *v3; // eax
  void *v4; // eax
  CCFileClass v5; // [esp+4h] [ebp-1DCh] BYREF
  int v6[3]; // [esp+5Ch] [ebp-184h] BYREF
  int v7; // [esp+68h] [ebp-178h]
  CCFileClass v8; // [esp+70h] [ebp-170h] BYREF
  int v9[3]; // [esp+C8h] [ebp-118h] BYREF
  int v10; // [esp+D4h] [ebp-10Ch]
  char Destination[260]; // [esp+DCh] [ebp-104h] BYREF

  result = *((_DWORD *)this + 41); /*0x45f049*/
  if ( !result && *((_BYTE *)this + 5984) ) /*0x45f057*/
  {
    if ( *((_BYTE *)this + 5994) ) /*0x45f065*/
    {
      CCFileClass::Construct(&v5, (char *)this + 5994); /*0x45f07f*/
      CCFileClass::Open(&v5, 0); /*0x45f08a*/
      v3 = CCFileClass::ReadEntireFile(&v5); /*0x45f093*/
      *((_DWORD *)this + 41) = v3; /*0x45f09a*/
      if ( v3 ) /*0x45f0a0*/
      {
        *((_BYTE *)this + 168) = 1; /*0x45f0a2*/
      }
      else
      {
        strncpy(Destination, (const char *)this + 5994, 0x13u); /*0x45f0b6*/
        ObjectTypeClass::SetRTTI71((ObjectTypeClass *)Destination); /*0x45f0c5*/
        CCFileClass::Construct(&v8, Destination); /*0x45f0d6*/
        v4 = CCFileClass::ReadEntireFile(&v8); /*0x45f0df*/
        *((_DWORD *)this + 41) = v4; /*0x45f0e6*/
        if ( v4 ) /*0x45f0ec*/
          *((_BYTE *)this + 168) = 1; /*0x45f0ee*/
        *(_DWORD *)v8.CDFileClass = &CCFileClass::`vftable'; /*0x45f0fc*/
        v10 = 0; /*0x45f104*/
        Vector::Clear((int)v9); /*0x45f10f*/
        *(_DWORD *)v8.CDFileClass = &off_7E1668; /*0x45f118*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v8); /*0x45f120*/
      }
      *(_DWORD *)v5.CDFileClass = &CCFileClass::`vftable'; /*0x45f129*/
      v7 = 0; /*0x45f131*/
      Vector::Clear((int)v6); /*0x45f139*/
      *(_DWORD *)v5.CDFileClass = &off_7E1668; /*0x45f142*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v5); /*0x45f14a*/
    }
    return *((_DWORD *)this + 41); /*0x45f14f*/
  }
  return result; /*0x45f156*/
}



// ==== 0x0045F160  BuildingClass::GetPlacementCoords  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetPlacementCoords(BuildingClass *this, int *a2, _DWORD *a3)
{
  int result; // eax

  if ( *((_BYTE *)this + 5992) && a2 ) /*0x45f171*/
  {
    result = *((_DWORD *)this + 1341); /*0x45f173*/
    if ( result ) /*0x45f17b*/
    {
      *a2 = result; /*0x45f1ad*/
      LOBYTE(result) = 1; /*0x45f1af*/
      *a3 = 0; /*0x45f1b2*/
      return result; /*0x45f1b8*/
    }
    result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 39))(this); /*0x45f17f*/
    *a2 = result; /*0x45f187*/
    if ( result ) /*0x45f189*/
    {
      result = *(__int16 *)(result + 6) / 2; /*0x45f192*/
      if ( result > 3 ) /*0x45f197*/
      {
        LOBYTE(result) = 1; /*0x45f19d*/
        *a3 = 3; /*0x45f1a0*/
        return result; /*0x45f1a6*/
      }
    }
  }
  LOBYTE(result) = 0; /*0x45f1bb*/
  return result; /*0x45f19f*/
}



// ==== 0x0045F1D0  TacticalClass::initTacticalMap  this=TacticalClass  sig=csp ====
char __thiscall TacticalClass::initTacticalMap(TacticalClass *this, int *a2, int *a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax

  if ( *((_BYTE *)this + 5992) && a2 ) /*0x45f1e1*/
  {
    v3 = *((_DWORD *)this + 1341); /*0x45f1e3*/
    if ( v3 ) /*0x45f1eb*/
    {
      *a2 = v3; /*0x45f218*/
      *a3 = *(__int16 *)(v3 + 6) / 2; /*0x45f227*/
    }
    else
    {
      v4 = (*((int (__thiscall **)(TacticalClass *))this->AbstractClass + 39))(this); /*0x45f1ef*/
      *a2 = v4; /*0x45f1f7*/
      if ( v4 ) /*0x45f1f9*/
      {
        v5 = *(__int16 *)(v4 + 6) / 2; /*0x45f202*/
        if ( v5 > 3 ) /*0x45f207*/
        {
          *a3 = v5 + 3; /*0x45f211*/
          return 1; /*0x45f215*/
        }
      }
    }
  }
  return 0; /*0x45f210*/
}



// ==== 0x0045F230  BuildingTypeClass::LoadAnimations  this=ObjectTypeClass  sig=csp ====
void __thiscall BuildingTypeClass::LoadAnimations(int this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // esi
  int v6; // eax
  _BYTE *v7; // esi
  void *FileSHP; // eax
  _BYTE *v9; // esi
  void *v10; // eax
  int v11; // eax
  _BYTE *v12; // esi
  void *v13; // eax
  _BYTE *v14; // esi
  void *v15; // eax
  _BYTE *v16; // esi
  void *v17; // eax
  int v18; // eax
  _BYTE *v19; // esi
  void *v20; // eax
  const char *v21; // edi
  int v22; // eax
  int v23; // [esp+10h] [ebp-158h]
  char Filename[64]; // [esp+14h] [ebp-154h] BYREF
  char Ext[16]; // [esp+54h] [ebp-114h] BYREF
  char Source[260]; // [esp+64h] [ebp-104h] BYREF

  if ( !*(_BYTE *)(this + 5985) && strlen((const char *)(this + 3676)) ) /*0x45f257*/
  {
    _makepath(Source, 0, 0, (const char *)(this + 3676), ::Ext); /*0x45f26f*/
    TheaterObjectTypeClassSpecificID(Source, a2); /*0x45f282*/
    v3 = SearchMIXFile(Source, 0); /*0x45f28d*/
    if ( !v3 ) /*0x45f294*/
    {
      ObjectTypeClass::SetRTTI71((ObjectTypeClass *)Source); /*0x45f29a*/
      v3 = SearchMIXFile(Source, 0); /*0x45f2a5*/
    }
    *(_DWORD *)(this + 3584) = v3; /*0x45f2ac*/
    if ( v3 ) /*0x45f2b2*/
    {
      v4 = 1; /*0x45f2bb*/
      v5 = *(__int16 *)(v3 + 6) / 2; /*0x45f2c8*/
      v23 = v5; /*0x45f2cc*/
      if ( *(_BYTE *)(this + 5815) ) /*0x45f2c2*/
      {
        v5 = *(_DWORD *)(this + 5880) + 1; /*0x45f2d8*/
        v23 = v5; /*0x45f2d9*/
      }
      if ( v5 > 0 ) /*0x45f2df*/
      {
        LOWORD(v6) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5400) * 900.0 / (double)v23); /*0x45f2f7*/
        v4 = v6; /*0x45f2fc*/
      }
      *(_DWORD *)(this + 3844) = 0; /*0x45f2fe*/
      *(_DWORD *)(this + 3848) = v5; /*0x45f304*/
      *(_DWORD *)(this + 3852) = v4; /*0x45f30a*/
    }
  }
  INIClass::GetString( /*0x45f32d*/
    (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
    (unsigned __int8 *)(this + 504),
    aDeployinganim,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f336*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f357*/
    TheaterObjectTypeClassSpecificID(Source, a2); /*0x45f36a*/
    v7 = (_BYTE *)(this + 5352); /*0x45f375*/
    if ( *(_BYTE *)(this + 5352) && *(_DWORD *)(this + 5348) ) /*0x45f37f*/
    {
      __3_YAXPAX_Z(*(void **)(this + 5348)); /*0x45f38a*/
      *(_DWORD *)(this + 5348) = 0; /*0x45f392*/
      *v7 = 0; /*0x45f398*/
    }
    FileSHP = LoadFileSHP(Source, (bool *)(this + 5352)); /*0x45f3a0*/
    *(_DWORD *)(this + 5348) = FileSHP; /*0x45f3a7*/
    if ( !FileSHP ) /*0x45f3ad*/
    {
      ObjectTypeClass::SetRTTI71((ObjectTypeClass *)Source); /*0x45f3b3*/
      if ( *v7 && *(_DWORD *)(this + 5348) ) /*0x45f3bc*/
      {
        __3_YAXPAX_Z(*(void **)(this + 5348)); /*0x45f3c7*/
        *(_DWORD *)(this + 5348) = 0; /*0x45f3cf*/
        *v7 = 0; /*0x45f3d5*/
      }
      *(_DWORD *)(this + 5348) = LoadFileSHP(Source, (bool *)(this + 5352)); /*0x45f3e2*/
    }
  }
  INIClass::GetString( /*0x45f405*/
    (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
    (unsigned __int8 *)(this + 504),
    aRoofdeployinga,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f40e*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f42f*/
    TheaterObjectTypeClassSpecificID(Source, a2); /*0x45f442*/
    v9 = (_BYTE *)(this + 5376); /*0x45f44d*/
    if ( *(_BYTE *)(this + 5376) && *(_DWORD *)(this + 5372) ) /*0x45f457*/
    {
      __3_YAXPAX_Z(*(void **)(this + 5372)); /*0x45f462*/
      *(_DWORD *)(this + 5372) = 0; /*0x45f46a*/
      *v9 = 0; /*0x45f470*/
    }
    v10 = LoadFileSHP(Source, (bool *)(this + 5376)); /*0x45f478*/
    *(_DWORD *)(this + 5372) = v10; /*0x45f47f*/
    if ( !v10 ) /*0x45f485*/
    {
      ObjectTypeClass::SetRTTI71((ObjectTypeClass *)Source); /*0x45f48b*/
      if ( *v9 && *(_DWORD *)(this + 5372) ) /*0x45f494*/
      {
        __3_YAXPAX_Z(*(void **)(this + 5372)); /*0x45f49f*/
        *(_DWORD *)(this + 5372) = 0; /*0x45f4a7*/
        *v9 = 0; /*0x45f4ad*/
      }
      *(_DWORD *)(this + 5372) = LoadFileSHP(Source, (bool *)(this + 5352)); /*0x45f4be*/
    }
  }
  INIClass::GetString( /*0x45f4e1*/
    (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
    (unsigned __int8 *)(this + 504),
    aDooranim,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f4ea*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f507*/
    TheaterObjectTypeClassSpecificID(Source, a2); /*0x45f51a*/
    v11 = SearchMIXFile(Source, 0); /*0x45f525*/
    *(_DWORD *)(this + 5388) = v11; /*0x45f52c*/
    if ( !v11 ) /*0x45f532*/
    {
      ObjectTypeClass::SetRTTI71((ObjectTypeClass *)Source); /*0x45f538*/
      *(_DWORD *)(this + 5388) = SearchMIXFile(Source, 0); /*0x45f548*/
    }
  }
  INIClass::GetString( /*0x45f565*/
    (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
    (unsigned __int8 *)(this + 504),
    aUnderdooranim,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f56e*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f58f*/
    TheaterObjectTypeClassSpecificID(Source, a2); /*0x45f5a2*/
    v12 = (_BYTE *)(this + 5360); /*0x45f5ad*/
    if ( *(_BYTE *)(this + 5360) && *(_DWORD *)(this + 5356) ) /*0x45f5b7*/
    {
      __3_YAXPAX_Z(*(void **)(this + 5356)); /*0x45f5c2*/
      *(_DWORD *)(this + 5356) = 0; /*0x45f5ca*/
      *v12 = 0; /*0x45f5d0*/
    }
    v13 = LoadFileSHP(Source, (bool *)(this + 5360)); /*0x45f5d8*/
    *(_DWORD *)(this + 5356) = v13; /*0x45f5df*/
    if ( !v13 ) /*0x45f5e5*/
    {
      ObjectTypeClass::SetRTTI71((ObjectTypeClass *)Source); /*0x45f5eb*/
      if ( *v12 && *(_DWORD *)(this + 5356) ) /*0x45f5f4*/
      {
        __3_YAXPAX_Z(*(void **)(this + 5356)); /*0x45f5ff*/
        *(_DWORD *)(this + 5356) = 0; /*0x45f607*/
        *v12 = 0; /*0x45f60d*/
      }
      *(_DWORD *)(this + 5356) = SearchMIXFile(Source, 0); /*0x45f61a*/
    }
  }
  v14 = (_BYTE *)(this + 5368); /*0x45f626*/
  if ( *(_BYTE *)(this + 5368) && *(_DWORD *)(this + 5364) ) /*0x45f630*/
  {
    __3_YAXPAX_Z(*(void **)(this + 5364)); /*0x45f63b*/
    *(_DWORD *)(this + 5364) = 0; /*0x45f643*/
    *v14 = 0; /*0x45f649*/
  }
  INIClass::GetString( /*0x45f668*/
    (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
    (unsigned __int8 *)(this + 504),
    aRubble,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f671*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f68e*/
    TheaterObjectTypeClassSpecificID(Source, a2); /*0x45f6a1*/
    v15 = LoadFileSHP(Source, (bool *)(this + 5368)); /*0x45f6ac*/
    *(_DWORD *)(this + 5364) = v15; /*0x45f6b3*/
    if ( !v15 ) /*0x45f6b9*/
    {
      ObjectTypeClass::SetRTTI71((ObjectTypeClass *)Source); /*0x45f6bf*/
      if ( *v14 && *(_DWORD *)(this + 5364) ) /*0x45f6c8*/
      {
        __3_YAXPAX_Z(*(void **)(this + 5364)); /*0x45f6d3*/
        *(_DWORD *)(this + 5364) = 0; /*0x45f6db*/
        *v14 = 0; /*0x45f6e1*/
      }
      *(_DWORD *)(this + 5364) = SearchMIXFile(Source, 0); /*0x45f6ee*/
    }
  }
  INIClass::GetString( /*0x45f711*/
    (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
    (unsigned __int8 *)(this + 504),
    aUnderroofdoora,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f71a*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f73b*/
    TheaterObjectTypeClassSpecificID(Source, a2); /*0x45f74e*/
    v16 = (_BYTE *)(this + 5384); /*0x45f759*/
    if ( *(_BYTE *)(this + 5384) && *(_DWORD *)(this + 5380) ) /*0x45f763*/
    {
      __3_YAXPAX_Z(*(void **)(this + 5380)); /*0x45f76e*/
      *(_DWORD *)(this + 5380) = 0; /*0x45f776*/
      *v16 = 0; /*0x45f77c*/
    }
    v17 = LoadFileSHP(Source, (bool *)(this + 5384)); /*0x45f784*/
    *(_DWORD *)(this + 5380) = v17; /*0x45f78b*/
    if ( !v17 ) /*0x45f791*/
    {
      ObjectTypeClass::SetRTTI71((ObjectTypeClass *)Source); /*0x45f797*/
      if ( *v16 && *(_DWORD *)(this + 5380) ) /*0x45f7a0*/
      {
        __3_YAXPAX_Z(*(void **)(this + 5380)); /*0x45f7ab*/
        *(_DWORD *)(this + 5380) = 0; /*0x45f7b3*/
        *v16 = 0; /*0x45f7b9*/
      }
      *(_DWORD *)(this + 5380) = SearchMIXFile(Source, 0); /*0x45f7c6*/
    }
  }
  INIClass::GetString( /*0x45f7e9*/
    (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
    (unsigned __int8 *)(this + 504),
    aSpecialzoverla,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f7f2*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f80f*/
    TheaterObjectTypeClassSpecificID(Source, a2); /*0x45f822*/
    v18 = SearchMIXFile(Source, 0); /*0x45f82d*/
    *(_DWORD *)(this + 5392) = v18; /*0x45f834*/
    if ( !v18 ) /*0x45f83a*/
    {
      ObjectTypeClass::SetRTTI71((ObjectTypeClass *)Source); /*0x45f840*/
      *(_DWORD *)(this + 5392) = SearchMIXFile(Source, 0); /*0x45f850*/
    }
  }
  INIClass::GetString( /*0x45f86d*/
    (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
    (unsigned __int8 *)(this + 504),
    aBibshape,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f876*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f897*/
    TheaterObjectTypeClassSpecificID(Source, a2); /*0x45f8aa*/
    v19 = (_BYTE *)(this + 5404); /*0x45f8b5*/
    if ( *(_BYTE *)(this + 5404) && *(_DWORD *)(this + 5400) ) /*0x45f8bf*/
    {
      __3_YAXPAX_Z(*(void **)(this + 5400)); /*0x45f8ca*/
      *(_DWORD *)(this + 5400) = 0; /*0x45f8d2*/
      *v19 = 0; /*0x45f8d8*/
    }
    v20 = LoadFileSHP(Source, (bool *)(this + 5404)); /*0x45f8e0*/
    *(_DWORD *)(this + 5400) = v20; /*0x45f8e7*/
    if ( !v20 ) /*0x45f8ed*/
    {
      ObjectTypeClass::SetRTTI71((ObjectTypeClass *)Source); /*0x45f8f3*/
      if ( *v19 && *(_DWORD *)(this + 5400) ) /*0x45f8fc*/
      {
        __3_YAXPAX_Z(*(void **)(this + 5400)); /*0x45f907*/
        *(_DWORD *)(this + 5400) = 0; /*0x45f90f*/
        *v19 = 0; /*0x45f915*/
      }
      *(_DWORD *)(this + 5400) = SearchMIXFile(Source, 0); /*0x45f922*/
    }
  }
  INIClass::GetString( /*0x45f945*/
    (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
    (unsigned __int8 *)(this + 504),
    (unsigned __int8 *)g_INI_Key_Image,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( !*(_BYTE *)(this + 556) || a2 == -1 ) /*0x45f95c*/
    v21 = ::Ext; /*0x45f97a*/
  else
    v21 = (const char *)(&off_7E1BC6 + 28 * a2); /*0x45f96e*/
  strcpy(Ext, v21); /*0x45f993*/
  if ( strlen(Filename) ) /*0x45f9a2*/
    _makepath(Source, 0, 0, Filename, Ext); /*0x45f9bd*/
  else
    _makepath(Source, 0, 0, (const char *)(this + 504), Ext); /*0x45f9cd*/
  TheaterObjectTypeClassSpecificID(Source, a2); /*0x45f9e0*/
  strncpy((char *)(this + 5994), Source, 0x13u); /*0x45f9f3*/
  if ( !*(_BYTE *)(this + 5984) ) /*0x45f9f8*/
  {
    v22 = SearchMIXFile(Source, 0); /*0x45fa0b*/
    *(_DWORD *)(this + 164) = v22; /*0x45fa12*/
    if ( !v22 ) /*0x45fa18*/
    {
      ObjectTypeClass::SetRTTI71((ObjectTypeClass *)Source); /*0x45fa1e*/
      strncpy((char *)(this + 5994), Source, 0x13u); /*0x45fa2b*/
      *(_DWORD *)(this + 164) = SearchMIXFile(Source, 0); /*0x45fa3e*/
    }
    if ( !*(_DWORD *)(this + 164) ) /*0x45fa44*/
    {
      ObjectTypeClass::SetRTTI71((ObjectTypeClass *)Source); /*0x45fa50*/
      strncpy((char *)(this + 5994), Source, 0x13u); /*0x45fa5d*/
      *(_DWORD *)(this + 164) = SearchMIXFile(Source, 0); /*0x45fa70*/
    }
  }
  BuildingTypeClass::LoadVoxel((BuildingTypeClass *)this); /*0x45fa78*/
}



// ==== 0x0045FA90  BuildingTypeClass::LoadVoxel  this=BuildingTypeClass  sig=csp ====
void __thiscall BuildingTypeClass::LoadVoxel(BuildingTypeClass *this)
{
  char *v2; // eax
  void *v3; // esi
  File *v4; // eax
  _DWORD *FileVXL; // eax
  void *v6; // esi
  File *v7; // eax
  _DWORD *FileHVA; // eax
  int Info; // eax
  char *v10; // eax
  char *v11; // eax
  _BYTE *v12; // eax
  void *v13; // esi
  File *v14; // eax
  _DWORD *v15; // eax
  void *v16; // esi
  File *v17; // eax
  _DWORD *v18; // eax
  int v19; // eax
  char *v20; // [esp-Ch] [ebp-2D8h]
  char *v21; // [esp-Ch] [ebp-2D8h]
  CCFileClass v22; // [esp+8h] [ebp-2C4h] BYREF
  int v23[3]; // [esp+60h] [ebp-26Ch] BYREF
  int v24; // [esp+6Ch] [ebp-260h]
  CCFileClass v25; // [esp+74h] [ebp-258h] BYREF
  int v26[3]; // [esp+CCh] [ebp-200h] BYREF
  int v27; // [esp+D8h] [ebp-1F4h]
  CCFileClass v28; // [esp+E0h] [ebp-1ECh] BYREF
  int v29[3]; // [esp+138h] [ebp-194h] BYREF
  int v30; // [esp+144h] [ebp-188h]
  char Destination[4]; // [esp+14Ch] [ebp-180h] BYREF
  char v32[124]; // [esp+150h] [ebp-17Ch] BYREF
  char Buffer[4]; // [esp+1CCh] [ebp-100h] BYREF
  char String[252]; // [esp+1D0h] [ebp-FCh] BYREF

  if ( this->TurretAnimIsVoxel || this->BarrelAnimIsVoxel ) /*0x45faa4*/
  {
    strcpy(Destination, &this->__pad_F70[576]); /*0x45fadf*/
    _makepath(Buffer, 0, 0, Destination, g_Str_File__VXL); /*0x45faf3*/
    v20 = _strupr(off_8194A8); /*0x45fb05*/
    v2 = _strupr(String); /*0x45fb0e*/
    if ( strstr(v2, v20) ) /*0x45fb17*/
    {
      CCFileClass::Construct(&v25, Buffer); /*0x45fb3b*/
      if ( (unsigned __int8)CCFileClass::Open(&v25, 0) ) /*0x45fb48*/
      {
        v3 = (void *)this->?[0]; /*0x45fb55*/
        if ( v3 ) /*0x45fb5d*/
        {
          WaveClass::Destroy((WaveClass *)this->?[0]); /*0x45fb61*/
          __3_YAXPAX_Z(v3); /*0x45fb67*/
        }
        v4 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x45fb71*/
        if ( v4 ) /*0x45fb7b*/
          FileVXL = File::LoadFileVXL(v4, (int)&v25, 0); /*0x45fb85*/
        else
          FileVXL = 0; /*0x45fb8c*/
        this->?[0] = (int)FileVXL; /*0x45fb8e*/
        _makepath(Buffer, 0, 0, Destination, g_Str_File__HVA); /*0x45fbab*/
        CCFileClass::Construct(&v22, Buffer); /*0x45fbbf*/
        v6 = (void *)this->?[0]; /*0x45fbc4*/
        if ( v6 ) /*0x45fbcc*/
        {
          String::Release((String *)this->?[0]); /*0x45fbd0*/
          __3_YAXPAX_Z(v6); /*0x45fbd6*/
        }
        v7 = (File *)__2_YAPAXI_Z(0x10u); /*0x45fbe0*/
        if ( v7 ) /*0x45fbea*/
          FileHVA = File::LoadFileHVA(v7, (int)&v22); /*0x45fbf3*/
        else
          FileHVA = 0; /*0x45fbfa*/
        this->?[0] = (int)FileHVA; /*0x45fbfe*/
        if ( FileHVA && !*(_BYTE *)FileHVA ) /*0x45fc06*/
        {
          Info = VoxelSection::GetInfo((VoxelSection *)this->?[0], 0, 0); /*0x45fc12*/
          Matrix::Scale((Matrix *)this->?[0], *(float *)(Info + 12)); /*0x45fc21*/
        }
        *(_DWORD *)v22.CDFileClass = &CCFileClass::`vftable'; /*0x45fc2a*/
        v24 = 0; /*0x45fc32*/
        Vector::Clear((int)v23); /*0x45fc36*/
        *(_DWORD *)v22.CDFileClass = &off_7E1668; /*0x45fc3f*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v22); /*0x45fc43*/
      }
      v21 = _strupr(off_8194A8); /*0x45fc55*/
      v10 = _strupr(v32); /*0x45fc5e*/
      v11 = strstr(v10, v21); /*0x45fc67*/
      if ( v11 ) /*0x45fc71*/
      {
        *v11 = 66; /*0x45fc73*/
        v12 = v11 + 1; /*0x45fc76*/
        *v12++ = 65; /*0x45fc77*/
        *v12++ = 82; /*0x45fc7b*/
        *v12 = 76; /*0x45fc7f*/
        v12[1] = 0; /*0x45fc82*/
      }
      *(_DWORD *)v25.CDFileClass = &CCFileClass::`vftable'; /*0x45fc8c*/
      v27 = 0; /*0x45fc94*/
      Vector::Clear((int)v26); /*0x45fc9b*/
      *(_DWORD *)v25.CDFileClass = &off_7E1668; /*0x45fca4*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v25); /*0x45fca8*/
    }
    else if ( this->BarrelAnimIsVoxel ) /*0x45fcaf*/
    {
      strncpy(Destination, this->__pad_1714, 0x80u); /*0x45fccb*/
    }
    _makepath(Buffer, 0, 0, Destination, g_Str_File__VXL); /*0x45fcea*/
    CCFileClass::Construct(&v28, Buffer); /*0x45fd01*/
    if ( (unsigned __int8)CCFileClass::Open(&v28, 0) ) /*0x45fd0e*/
    {
      v13 = (void *)this->?[1]; /*0x45fd1b*/
      if ( v13 ) /*0x45fd23*/
      {
        WaveClass::Destroy((WaveClass *)this->?[1]); /*0x45fd27*/
        __3_YAXPAX_Z(v13); /*0x45fd2d*/
      }
      v14 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x45fd37*/
      if ( v14 ) /*0x45fd41*/
        v15 = File::LoadFileVXL(v14, (int)&v28, 0); /*0x45fd4e*/
      else
        v15 = 0; /*0x45fd55*/
      this->?[1] = (int)v15; /*0x45fd63*/
      _makepath(Buffer, 0, 0, Destination, g_Str_File__HVA); /*0x45fd74*/
      CCFileClass::Construct(&v22, Buffer); /*0x45fd88*/
      v16 = (void *)this->?[2]; /*0x45fd8d*/
      if ( v16 ) /*0x45fd95*/
      {
        String::Release((String *)this->?[2]); /*0x45fd99*/
        __3_YAXPAX_Z(v16); /*0x45fd9f*/
      }
      v17 = (File *)__2_YAPAXI_Z(0x10u); /*0x45fda9*/
      if ( v17 ) /*0x45fdb3*/
        v18 = File::LoadFileHVA(v17, (int)&v22); /*0x45fdbc*/
      else
        v18 = 0; /*0x45fdc3*/
      this->?[2] = (int)v18; /*0x45fdc7*/
      if ( v18 ) /*0x45fdcd*/
      {
        if ( !*(_BYTE *)v18 ) /*0x45fdcf*/
        {
          v19 = VoxelSection::GetInfo((VoxelSection *)this->?[1], 0, 0); /*0x45fddb*/
          Matrix::Scale((Matrix *)this->?[2], *(float *)(v19 + 12)); /*0x45fdea*/
        }
      }
      *(_DWORD *)v22.CDFileClass = &CCFileClass::`vftable'; /*0x45fdf3*/
      v24 = 0; /*0x45fdfb*/
      Vector::Clear((int)v23); /*0x45fdff*/
      *(_DWORD *)v22.CDFileClass = &off_7E1668; /*0x45fe08*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v22); /*0x45fe0c*/
    }
    *(_DWORD *)v28.CDFileClass = &CCFileClass::`vftable'; /*0x45fe18*/
    v30 = 0; /*0x45fe23*/
    Vector::Clear((int)v29); /*0x45fe2a*/
    *(_DWORD *)v28.CDFileClass = &off_7E1668; /*0x45fe36*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v28); /*0x45fe3d*/
  }
}


