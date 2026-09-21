// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x005200B0  InfantryClass::ProcessIdleDeploy  this=ObjectClass  sig=csp ====
char __thiscall sub_5200B0(int *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax

  if ( this->q1B5 > 0 )
  {
    if ( !*(_BYTE *)(this->q1B0 + 3772) )
      --this->q1B5;
    if ( !this->q1B5 && !this->q0BF && (*(unsigned __int8 (__thiscall **)(int *))(*this + 684))(this) )
      this->q0BF = *(_DWORD *)(this->q1B0 + 1668);
    v2 = this->q1B5;
    if ( *((_BYTE *)this + 1755) )
    {
      if ( v2 < 50 )
      {
        v3 = this->q1B1;
        if ( v3 != 27 && v3 != 28 && v3 != 29 && v3 != 30 )
          (*(void (__thiscall **)(int *, int, _DWORD, _DWORD))(*this + 1368))(this, 7, 0, 0);
      }
    }
    else if ( v2 >= 50 )
    {
      v4 = this->q1B1;
      if ( v4 != 27 && v4 != 28 && v4 != 29 && v4 != 30 )
      {
        if ( !(unsigned __int8)House::IsCurrentPlayer((#375 *)this->q21C) )
          goto LABEL_42;
        if ( !this->q169 )
        {
          if ( !this->__pad_19D )
            WinAPI::Wrapper(-2147467261);
          if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)this->__pad_19D + 16))(this->__pad_19D) )
          {
LABEL_42:
            if ( !*(_BYTE *)(this->q1B0 + 3775) )
              (*(void (__thiscall **)(int *, int, _DWORD, _DWORD))(*this + 1368))(this, 5, 0, 0);
          }
        }
      }
    }
  }
  LOBYTE(v5) = *(_BYTE *)(this->q1B0 + 3775);
  if ( (_BYTE)v5 )
  {
    if ( this->q1B5 > 50 )
    {
      v5 = this->q1B1;
      if ( v5 != 27 && v5 != 28 && v5 != 29 && v5 != 30 )
      {
        LOBYTE(v5) = this->isFallingDown;
        if ( !(_BYTE)v5 )
        {
          if ( !this->__pad_19D )
            WinAPI::Wrapper(-2147467261);
          LOBYTE(v5) = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)this->__pad_19D + 16))(this->__pad_19D);
          if ( !(_BYTE)v5 )
          {
            v5 = this->q169;
            if ( !v5 )
              LOBYTE(v5) = (*(int (__thiscall **)(int *, int *, int, _DWORD))(*this + 372))(
                             this,
                             &MEMORY[0xA8F200],
                             1,
                             0);
          }
        }
      }
    }
  }
  return v5;


// ==== 0x00520260  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_520260(_DWORD *this)
{
  int v2; // eax
  _DWORD v4[3]; // [esp+4h] [ebp-Ch] BYREF

  v2 = this->q175; /*0x520266*/
  if ( v2 && *((_BYTE *)this + 981) ) /*0x520270*/
    *(_BYTE *)(v2 + 130) = 1; /*0x52027a*/
  if ( this->q175 ) /*0x520281*/
    return 0; /*0x520281*/
  if ( (*(int (__thiscall **)(_DWORD *))(*this + 388))(this) != 5 ) /*0x520298*/
    return 0; /*0x520298*/
  v4[0] = this->location; /*0x5202a6*/
  v4[1] = this->q0A0; /*0x5202b2*/
  v4[2] = this->q0A4; /*0x5202b9*/
  if ( Tactical::IsCellVisible(&MEMORY[0x87F7E8], v4) ) /*0x5202c2*/
    return 0; /*0x5202e6*/
  (*(void (__thiscall **)(_DWORD *))(*this + 928))(this); /*0x5202cf*/
  (*(void (__thiscall **)(_DWORD *))(*this + 248))(this); /*0x5202d9*/
  return 1; /*0x5202e1*/
}


// ==== 0x005202F0  ObjectClass::ProcessTechnoSquadResponse  this=ObjectClass  sig=csp ====
char __thiscall ProcessTechnoSquadResponse(FootClass **this)
{
  FootClass *v2; // ecx
  FootClass *v3; // edi
  int *v4; // eax
  FootClass *v5; // edx
  int v6; // ebx
  int *v7; // eax
  _DWORD *v8; // ebx
  _DWORD *v9; // eax
  IUnknown *v10; // eax
  void **attachedTag; // ecx
  _DWORD *v12; // ecx
  _DWORD *v14; // ebx
  _DWORD *v15; // eax
  IUnknown *v16; // eax
  bool v17; // cc
  int v18; // eax
  int *v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int *v23; // eax
  int v24; // ebx
  int v25; // ebp
  int v26; // edx
  _DWORD *v27; // eax
  IUnknown *v28; // eax
  int *v29; // eax
  int v30; // ecx
  int v31; // edx
  int v32; // eax
  _DWORD *v33; // eax
  int v34; // ebx
  int v35; // ebp
  _DWORD *v36; // edi
  int v37; // [esp+28h] [ebp-30h] BYREF
  int v38; // [esp+2Ch] [ebp-2Ch]
  int v39; // [esp+30h] [ebp-28h]
  _DWORD v40[3]; // [esp+34h] [ebp-24h] BYREF
  _BYTE v41[12]; // [esp+40h] [ebp-18h] BYREF
  _DWORD v42[3]; // [esp+4Ch] [ebp-Ch] BYREF

  if ( !BYTE1((this->q1B0)[2].gattlingStage) ) /*0x5202ff*/
    return 0; /*0x5202ff*/
  v2 = this->q169; /*0x52030d*/
  if ( !v2 ) /*0x520315*/
    return 0; /*0x520315*/
  if ( (*(int (__thiscall **)(FootClass *))(*(_DWORD *)v2->__pad_0 + 44))(v2) != 1 ) /*0x520323*/
    return 0; /*0x520323*/
  v3 = this->q169; /*0x520329*/
  if ( Object::IsAlliedWithObjectHouse(this->q21C, (IUnknown *)v3) ) /*0x520336*/
    return 0; /*0x52033d*/
  v4 = (int *)(*(int (__thiscall **)(FootClass *, _DWORD *, FootClass **))(*(_DWORD *)v3->__pad_0 + 76))(v3, v40, this); /*0x52034d*/
  v37 = *v4; /*0x520352*/
  v5 = *this; /*0x520356*/
  v38 = v4[1]; /*0x52035b*/
  v6 = v4[2]; /*0x520361*/
  v7 = (int *)((int (__thiscall *)(FootClass **, _DWORD *))v5->ambientSoundController[3])(this, v40); /*0x520369*/
  v37 = *v7; /*0x52036e*/
  v38 = v7[1]; /*0x520375*/
  if ( (int)abs32(v6 - v7[2]) >= *(int *)&MEMORY[0xA8D63C].__pad_14B0[1876] /*0x5203f1*/
    || (v8 = (_DWORD *)(*(int (__thiscall **)(FootClass *, _DWORD *))(*(_DWORD *)v3->__pad_0 + 72))(v3, v40),
        v9 = (_DWORD *)((int (__thiscall *)(FootClass **, _BYTE *))(*this)->ambientSoundController[3])(this, v41),
        v10 = Coord::Subtract(v42, (IUnknown *)(*v9 - *v8), (IUnknown *)(v9[1] - v8[1]), (IUnknown *)(v9[2] - v8[2])),
        v37 = v10->field_0,
        v38 = v10->field_4,
        v39 = v10->field_8,
        (int)Coord::Length(&v37) >= 128) )
  {
    v14 = (_DWORD *)(*(int (__thiscall **)(FootClass *, _DWORD *))(*(_DWORD *)v3->__pad_0 + 72))(v3, v42); /*0x52048b*/
    v15 = (_DWORD *)((int (__thiscall *)(FootClass **, _BYTE *))(*this)->ambientSoundController[3])(this, v41); /*0x520494*/
    v16 = Coord::Subtract(v40, (IUnknown *)(*v15 - *v14), (IUnknown *)(v15[1] - v14[1]), (IUnknown *)(v15[2] - v14[2])); /*0x5204b4*/
    v37 = v16->field_0; /*0x5204bb*/
    v38 = v16->field_4; /*0x5204c6*/
    v39 = v16->field_8; /*0x5204cd*/
    v17 = (int)Coord::Length(&v37) < 512; /*0x5204d6*/
    v18 = (int)this->__pad_19D; /*0x5204db*/
    if ( v17 ) /*0x5204e1*/
    {
      if ( !v18 ) /*0x5204e9*/
        WinAPI::Wrapper(-2147467261); /*0x5204f0*/
      v19 = (int *)(*(int (__stdcall **)(_DWORD, _DWORD *))(*(_DWORD *)(this->__pad_19D)->__pad_0 + 20))( /*0x520503*/
                     this->__pad_19D,
                     v42);
      v20 = *v19; /*0x520506*/
      v21 = v19[1]; /*0x52050e*/
      v22 = v19[2]; /*0x520511*/
      if ( v20 != *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1812] /*0x520526*/
        || v21 != *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1816]
        || v22 != *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1820] )
      {
        if ( !this->__pad_19D ) /*0x52052c*/
          WinAPI::Wrapper(-2147467261); /*0x52053b*/
        v23 = (int *)(*(int (__stdcall **)(_DWORD, _DWORD *))(*(_DWORD *)(this->__pad_19D)->__pad_0 + 20))( /*0x52054e*/
                       this->__pad_19D,
                       v42);
        v24 = *v23; /*0x520551*/
        v25 = v23[1]; /*0x520553*/
        v26 = *(_DWORD *)v3->__pad_0; /*0x520559*/
        v39 = v23[2]; /*0x52055b*/
        v27 = (_DWORD *)(*(int (__thiscall **)(FootClass *, _BYTE *))(v26 + 72))(v3, v41); /*0x520566*/
        v28 = Coord::Subtract(v40, (IUnknown *)(*v27 - v24), (IUnknown *)(v27[1] - v25), (IUnknown *)(v27[2] - v39)); /*0x520582*/
        v37 = v28->field_0; /*0x520589*/
        v38 = v28->field_4; /*0x520594*/
        v39 = v28->field_8; /*0x52059b*/
        if ( (int)Coord::Length(&v37) <= 128 ) /*0x5205a9*/
          return 0; /*0x5205a9*/
      }
      ((void (__thiscall *)(FootClass **, _DWORD, int))(*this)->audioController4[1])(this, this->q169, 1); /*0x5205bc*/
    }
    else
    {
      if ( !v18 ) /*0x5205c9*/
        WinAPI::Wrapper(-2147467261); /*0x5205d0*/
      v29 = (int *)(*(int (__stdcall **)(_DWORD, _DWORD *))(*(_DWORD *)(this->__pad_19D)->__pad_0 + 20))( /*0x5205e3*/
                     this->__pad_19D,
                     v42);
      v30 = *v29; /*0x5205e6*/
      v31 = v29[1]; /*0x5205ee*/
      v32 = v29[2]; /*0x5205f1*/
      if ( v30 != *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1812] /*0x520606*/
        || v31 != *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1816]
        || v32 != *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1820] )
      {
        if ( !this->__pad_19D ) /*0x52060c*/
          WinAPI::Wrapper(-2147467261); /*0x52061b*/
        v33 = (_DWORD *)(*(int (__stdcall **)(_DWORD, _DWORD *))(*(_DWORD *)(this->__pad_19D)->__pad_0 + 20))( /*0x52062e*/
                          this->__pad_19D,
                          v42);
        v34 = *v33 / 256; /*0x52065a*/
        v35 = v33[1] / 256; /*0x52065d*/
        v36 = (_DWORD *)(*(int (__thiscall **)(FootClass *, _BYTE *, FootClass **))(*(_DWORD *)v3->__pad_0 + 76))( /*0x520663*/
                          v3,
                          v41,
                          this);
        if ( (unsigned __int16)(*v36 / 256) == (_WORD)v34 && (unsigned __int16)(v36[1] / 256) == (_WORD)v35 ) /*0x52068c*/
          return 0; /*0x52068c*/
      }
    }
    ((void (__thiscall *)(FootClass **, _DWORD, int))(*this)->audioController4[1])(this, this->q169, 1); /*0x52069b*/
    return 0; /*0x5206a4*/
  }
  attachedTag = (void **)v3->attachedTag; /*0x5203f7*/
  if ( attachedTag ) /*0x5203fc*/
    TeamClass::Update_0(attachedTag, 1, (AbstractClass *)this, *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[1780], 0, 0); /*0x52040c*/
  (*(void (__thiscall **)(FootClass *, int))(*(_DWORD *)v3->__pad_0 + 628))(v3, 3); /*0x520417*/
  (*(void (__thiscall **)(FootClass *, _DWORD))(*(_DWORD *)v3->__pad_0 + 220))(v3, 0); /*0x520423*/
  v12 = this->attachedTag; /*0x520429*/
  if ( v12 ) /*0x52042e*/
  {
    if ( TechnoClass::HasAnyMission(v12) ) /*0x520430*/
      ObjectClass::SetReference(v3, (int)this->attachedTag); /*0x52043f*/
  }
  (*(void (__thiscall **)(FootClass *, _DWORD, int))(*(_DWORD *)v3->__pad_0 + 980))(v3, this->q21C, 1); /*0x520451*/
  v3->waveEffect = (void *)(this->q1B0)[2].spawnStatus; /*0x520465*/
  ((void (__thiscall *)(FootClass **))(*this)->passengers[1])(this); /*0x52046d*/
  return 1; /*0x520473*/
}


// ==== 0x005206B0  ObjectClass::FireTechnoAtTarget  this=ObjectClass  sig=csp ====
void __thiscall FireTechnoAtTarget(int this)
{
  TechnoClass *v2; // eax
  ObjectClass *v3; // edi
  char v4; // al
  int v5; // eax
  TechnoClass *v6; // esi
  int v7; // ecx
  int v8; // eax
  bool v9; // bl
  int v10; // eax
  int *v11; // eax
  _DWORD *v12; // eax
  char v13; // cl
  int v14; // edx
  ObjectClass *v15; // esi
  char v16; // al
  int v17; // eax
  IUnknown *v18; // eax
  _DWORD *v19; // eax
  ObjectClass *v20; // [esp+2Ch] [ebp-38h]
  int v21; // [esp+3Ch] [ebp-28h] BYREF
  ObjectClass *v22; // [esp+40h] [ebp-24h]
  int v23; // [esp+44h] [ebp-20h] BYREF
  _DWORD v24[3]; // [esp+48h] [ebp-1Ch] BYREF
  _BYTE v25[16]; // [esp+54h] [ebp-10h] BYREF

  v2 = *(TechnoClass **)(this + 692); /*0x5206b7*/
  if ( !v2 ) /*0x5206bf*/
  {
    *(_BYTE *)(this + 1677) = 0; /*0x520ad2*/
    return; /*0x520ad2*/
  }
  v3 = (ObjectClass *)(*(int (__thiscall **)(int, TechnoClass *))(this->__pad_2E4)(this, v2); /*0x5206d0*/
  v4 = *(_BYTE *)(this + 1677); /*0x5206d2*/
  v22 = v3; /*0x5206da*/
  if ( !v4 ) /*0x5206de*/
  {
    v5 = (*(int (__thiscall **)(int, _DWORD, ObjectClass *, int))(this->q3C0)( /*0x5206f3*/
           this,
           *(_DWORD *)(this + 692),
           v3,
           1);
    if ( v5 ) /*0x5206fb*/
    {
      if ( v5 == 5 ) /*0x520704*/
      {
        if ( TechnoClass::GetValue((_DWORD *)this, v3) < 0 ) /*0x52072b*/
        {
          v6 = *(TechnoClass **)(this + 692); /*0x520731*/
          if ( !v6 /*0x520765*/
            || (v6->abstractFlags & 2) == 0
            || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6->__pad_0 + 44))(*(_DWORD *)(this + 692)) != 15
            || BuildingClass::GetHealthRatio((int *)v6->__pad_0) >= *(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108]
                                                                              + 5880) )
          {
            (*(void (__thiscall **)(int, _DWORD))(this->q0F2)(this, 0); /*0x520772*/
          }
        }
      }
      else if ( v5 == 9 ) /*0x520709*/
      {
        (*(void (__thiscall **)(int, _DWORD))(this->__pad_45C)(this, 0); /*0x520716*/
      }
      goto LABEL_46; /*0x52071c*/
    }
    if ( *(_BYTE *)(*(_DWORD *)(this + 1728) + 3476) ) /*0x520795*/
    {
      v7 = *(_DWORD *)(this + 1652); /*0x5207a3*/
      v21 = 0; /*0x5207b1*/
      if ( !v7 ) /*0x5207b9*/
        goto LABEL_20; /*0x5207b9*/
      v8 = StreamClass::Set2(&v21, (_DWORD *)(this + 1652)); /*0x5207c0*/
      if ( v8 < 0 && v8 != -2147467262 ) /*0x5207ce*/
        WinAPI::Wrapper(v8); /*0x5207d1*/
      if ( !v21 ) /*0x5207dc*/
LABEL_20:
        WinAPI::Wrapper(-2147467261); /*0x5207e3*/
      (*(void (__stdcall **)(int, _BYTE *))(*(_DWORD *)v21 + 12))(v21, v25); /*0x5207f5*/
      v9 = memcmp(v25, &g_CLSID_JumpjetLocomotion, 0x10u) == 0; /*0x52080e*/
      if ( v21 ) /*0x520813*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v21 + 8))(v21); /*0x520818*/
      if ( v9 ) /*0x52081e*/
      {
        (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)this + 1368))(this, 26, 0, 0); /*0x52082b*/
        v3 = v22; /*0x520831*/
        goto LABEL_44; /*0x520835*/
      }
      v3 = v22; /*0x52083a*/
    }
    v10 = *(_DWORD *)(this + 1732); /*0x52083e*/
    if ( v10 == 27 || v10 == 28 || v10 == 29 || v10 == 30 ) /*0x520856*/
    {
      (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)this + 1368))(this, 29, 0, 0); /*0x520861*/
      goto LABEL_44; /*0x520861*/
    }
    if ( *(_DWORD *)(this + 660) && (v10 == 40 || v10 == 41) ) /*0x520878*/
    {
      *(_DWORD *)(this + 248) = 0; /*0x52087a*/
      goto LABEL_44; /*0x520884*/
    }
    if ( !v3 ) /*0x520888*/
      goto LABEL_73; /*0x520888*/
    if ( *(_BYTE *)(this + 1755) && *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 1728) + 3644) + 1480) ) /*0x5208a0*/
    {
      (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)this + 1368))(this, 41, 0, 0); /*0x5208b3*/
      goto LABEL_44; /*0x5208b3*/
    }
    if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 1728) + 3644) + 1444) ) /*0x5208c1*/
    {
      (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)this + 1368))(this, 40, 0, 0); /*0x5208d4*/
    }
    else
    {
LABEL_73:
      if ( *(_BYTE *)(this + 1755) ) /*0x5208d6*/
        (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)this + 1368))(this, 8, 0, 0); /*0x5208eb*/
      else
        (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)this + 1368))(this, 4, 0, 0); /*0x5208fe*/
    }
LABEL_44:
    v20 = *(ObjectClass **)(this + 692); /*0x520904*/
    *(_BYTE *)(this + 1677) = 1; /*0x520912*/
    v11 = ObjectClass::CalcTargetFacing((void *)this, (IUnknown *)&v23, v20); /*0x520919*/
    FacingClass::Set_SyncLog((char *)(this + 904), v11); /*0x520925*/
    if ( *(_DWORD *)(this + 692) == *(_DWORD *)(this + 1444) ) /*0x520938*/
    {
      FootClass::ClearPathIndex((_DWORD *)this); /*0x52093c*/
      (*(void (__thiscall **)(int))(this->q140)(this); /*0x520946*/
    }
  }
LABEL_46:
  v12 = *(_DWORD **)(this + 1728); /*0x52094c*/
  v13 = *(_BYTE *)(this + 1755); /*0x520952*/
  v14 = v12[912]; /*0x52095a*/
  if ( v13 ) /*0x520960*/
    v14 = v12[913]; /*0x520962*/
  if ( v3 ) /*0x52096a*/
  {
    if ( v13 ) /*0x52096e*/
    {
      if ( *(_DWORD *)(v12[911] + 1480) ) /*0x520976*/
        v14 = v12[915]; /*0x520980*/
    }
    else if ( *(_DWORD *)(v12[911] + 1444) ) /*0x520990*/
    {
      v14 = v12[914]; /*0x52099a*/
    }
  }
  if ( *(_BYTE *)(this + 1677) && *(_DWORD *)(this + 248) == v14 ) /*0x5209b5*/
  {
    v15 = (ObjectClass *)(*(int (__thiscall **)(int, _DWORD))(this->__pad_2E4)(this, *(_DWORD *)(this + 692)); /*0x5209d0*/
    if ( (*(int (__thiscall **)(int, _DWORD, ObjectClass *, int))(this->q3C0)( /*0x5209de*/
           this,
           *(_DWORD *)(this + 692),
           v15,
           1) )
    {
      v16 = *(_BYTE *)(this + 1755); /*0x5209fd*/
      *(_BYTE *)(this + 1677) = 0; /*0x520a03*/
      if ( v16 ) /*0x520a0c*/
      {
        (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)this + 1368))(this, 2, 0, 0); /*0x520a17*/
      }
      else
      {
        v17 = *(_DWORD *)(this + 1732); /*0x520a19*/
        if ( v17 == 27 || v17 == 28 || v17 == 29 || v17 == 30 ) /*0x520a31*/
          (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)this + 1368))(this, 28, 0, 0); /*0x520a3e*/
        else
          (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 1368))(this, 0, 0, 0); /*0x520a51*/
      }
    }
    else
    {
      (*(void (__thiscall **)(int, _DWORD, ObjectClass *))(*(_DWORD *)this + 972))(this, *(_DWORD *)(this + 692), v15); /*0x5209f5*/
    }
    if ( *(_DWORD *)(this + 692) ) /*0x520a57*/
    {
      if ( *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 1016))(this, 0) + 168) < *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5824) ) /*0x520a83*/
      {
        v24[0] = *(_DWORD *)(this + 156); /*0x520a93*/
        v24[1] = *(_DWORD *)(this + 160); /*0x520a9f*/
        v24[2] = *(_DWORD *)(this + 164); /*0x520aab*/
        v18 = (IUnknown *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 692) + 72))( /*0x520ab7*/
                            *(_DWORD *)(this + 692),
                            v25);
        v19 = Coord::To_Cell(&MEMORY[0x87F7E8], v18); /*0x520ac0*/
        Cell::ApplyDamage(v19, (IUnknown *)v24, 1, 0, 0); /*0x520ac7*/
      }
    }
  }
}


// ==== 0x00520AE0  Mission::ExecuteTechnoMissionAction  this=ObjectClass  sig=csp ====
int __thiscall TechnoClass_MissionAction(_DWORD *this)
{
  int v2; // eax
  int v3; // ecx
  void **v4; // ebp
  unsigned int v5; // edx
  char *v6; // eax
  void *v7; // edi
  int v8; // edx
  int *v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  int v14; // edi
  int result; // eax
  int *v16; // ebp
  int v17; // ecx
  __int16 v18; // [esp+14h] [ebp-1Ch] BYREF
  _DWORD v19[3]; // [esp+18h] [ebp-18h] BYREF
  char v20; // [esp+24h] [ebp-Ch] BYREF

  v2 = this->q6C4; /*0x520ae9*/
  if ( v2 == -1 || this->q0F8 >= *(_DWORD *)(*(_DWORD *)(this->q6C0 + 3644) + 36 * v2 + 4) ) /*0x520b0d*/
  {
    switch ( v2 ) /*0x520b27*/
    {
      case 11: /*0x520b27*/
      case 12: /*0x520b27*/
      case 13: /*0x520b27*/
      case 14: /*0x520b27*/
      case 15: /*0x520b27*/
        v3 = this->q6C0; /*0x520bc6*/
        if ( this->q0F8 < *(_DWORD *)(*(_DWORD *)(v3 + 3644) + 36 * v2 + 4) ) /*0x520bdf*/
          break; /*0x520bdf*/
        if ( *(int *)(v3 + 3680) > 0 ) /*0x520bed*/
        {
          v4 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x520bf9*/
          if ( !v4 ) /*0x520c00*/
            goto LABEL_20; /*0x520c00*/
          v5 = (unsigned int)Random::State((_DWORD *)MEMORY[0xA8B230] + 134) % *(_DWORD *)(this->q6C0 + 3680); /*0x520c2d*/
          v6 = (char *)v19; /*0x520c37*/
          v7 = *(void **)(*(_DWORD *)(this->q6C0 + 3668) + 4 * v5); /*0x520c3b*/
          v8 = *this; /*0x520c3e*/
          goto LABEL_19; /*0x520c40*/
        }
        if ( !*(_BYTE *)(v3 + 3757) ) /*0x520c42*/
        {
          v4 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x520c56*/
          if ( v4 ) /*0x520c5d*/
          {
            v7 = *(void **)(MEMORY[0x8871E0]->GUICheckboxSound[2] /*0x520c91*/
                          + 4
                          * ((unsigned int)Random::State((_DWORD *)MEMORY[0xA8B230] + 134)
                           % MEMORY[0x8871E0]->BuildingGarrisonedSound[1]));
            v8 = *this; /*0x520c94*/
            v6 = &v20; /*0x520c96*/
LABEL_19:
            v9 = (int *)(*(int (__thiscall **)(_DWORD *, char *))(v8 + 72))(this, v6); /*0x520c9a*/
            AnimClass::ctor(v4, v7, v9, 0, 1, (void *)0x600, 0, 0); /*0x520ca4*/
          }
        }
LABEL_20:
        (*(void (__thiscall **)(_DWORD *))(*this + 248))(this); /*0x520ca9*/
        break; /*0x520cb3*/
      case 20: /*0x520b27*/
      case 21: /*0x520b27*/
      case 36: /*0x520b27*/
        if ( this->q0F8 >= *(_DWORD *)(*(_DWORD *)(this->q6C0 + 3644) + 36 * v2 + 4) ) /*0x520cd1*/
          (*(void (__thiscall **)(_DWORD *))(*this + 248))(this); /*0x520cdb*/
        break; /*0x520ce1*/
      case 27: /*0x520b27*/
        (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*this + 1368))(this, 28, 1, 0); /*0x520b38*/
        if ( !*(_BYTE *)(this->q6C0 + 3785) ) /*0x520b44*/
          this->q2A4 = 1; /*0x520b4e*/
        Mission::GetMissionDelay(this); /*0x520b57*/
        break; /*0x520b5c*/
      case 31: /*0x520b27*/
        (*(void (__thiscall **)(_DWORD *, _DWORD, int, _DWORD))(*this + 1368))(this, 0, 1, 0); /*0x520b93*/
        if ( !*(_BYTE *)(this->q6C0 + 3785) ) /*0x520b9f*/
          this->q2A4 = 0; /*0x520bad*/
        break; /*0x520bb4*/
      case 33: /*0x520b27*/
        break;
      case 34: /*0x520b27*/
        (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*this + 1368))(this, 35, 1, 0); /*0x520bc1*/
        break; /*0x520bc1*/
      case 38: /*0x520b27*/
        if ( (*(int (__thiscall **)(_DWORD *))(*this + 388))(this) != 10 ) /*0x520b6e*/
          goto LABEL_51; /*0x520b6e*/
        (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*this + 1368))(this, 38, 1, 0); /*0x520b7e*/
        break; /*0x520b84*/
      default:
        if ( v2 != -1 ) /*0x520ce9*/
        {
          v10 = *(_DWORD *)(*(_DWORD *)(this->q6C0 + 3644) + 36 * v2 + 12); /*0x520cfa*/
          if ( v10 != -1 ) /*0x520d01*/
          {
            v18 = (_WORD)v10 << 13; /*0x520d11*/
            FacingClass::Set_SyncLog(&v18); /*0x520d16*/
          }
        }
        if ( !this->__pad_19D ) /*0x520d1b*/
          WinAPI::Wrapper(-2147467261); /*0x520d2a*/
        if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)this->__pad_19D + 16))(this->__pad_19D) /*0x520d50*/
          && *((double *)this + 175) > 0.1 )
        {
          if ( *((_BYTE *)this + 1755) ) /*0x520d52*/
            (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*this + 1368))(this, 6, 1, 0); /*0x520d66*/
          else
            (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*this + 1368))(this, 3, 1, 0); /*0x520d79*/
        }
        else
        {
          v11 = this->q6C4; /*0x520d7e*/
          if ( v11 != 40 && v11 != 41 || !this->q294 || !this->q2B4 ) /*0x520d98*/
            goto LABEL_44; /*0x520d98*/
          if ( !this->__pad_19D ) /*0x520da2*/
            WinAPI::Wrapper(-2147467261); /*0x520db1*/
          if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)this->__pad_19D + 16))(this->__pad_19D) ) /*0x520dbf*/
          {
            if ( *((_BYTE *)this + 1755) ) /*0x520dc6*/
              (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*this + 1368))(this, 41, 1, 0); /*0x520dda*/
            else
              (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*this + 1368))(this, 40, 1, 0); /*0x520df3*/
            *((_BYTE *)this + 1677) = 0; /*0x520de0*/
          }
          else
          {
LABEL_44:
            v12 = this->q6C4; /*0x520e02*/
            if ( v12 == 27 || v12 == 28 || v12 == 29 || v12 == 30 ) /*0x520e1a*/
            {
              (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*this + 1368))(this, 28, 1, 0); /*0x520e24*/
            }
            else if ( *((_BYTE *)this + 1755) ) /*0x520e26*/
            {
              (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*this + 1368))(this, 2, 1, 0); /*0x520e3a*/
            }
            else
            {
LABEL_51:
              (*(void (__thiscall **)(_DWORD *, _DWORD, int, _DWORD))(*this + 1368))(this, 0, 1, 0); /*0x520e42*/
            }
          }
        }
        break; /*0x520d6c*/
    }
  }
  if ( this->q6C4 == 33 && !this->isFallingDown ) /*0x520e5b*/
    (*(void (__thiscall **)(_DWORD *, _DWORD, int, _DWORD))(*this + 1368))(this, 0, 1, 0); /*0x520e6f*/
  v13 = 0; /*0x520e81*/
  v14 = *(_DWORD *)(this->q6C0 + 3644) + 36 * this->q6C4; /*0x520e8c*/
  result = *(_DWORD *)(v14 + 16); /*0x520e8f*/
  if ( result > 0 ) /*0x520e95*/
  {
    v16 = (int *)(v14 + 24); /*0x520e97*/
    do /*0x520ef2*/
    {
      if ( this->q0FC ) /*0x520e9a*/
      {
        v17 = *(_DWORD *)(v14 + 4); /*0x520eaa*/
        if ( v17 <= 1 ) /*0x520eac*/
          v17 = 1; /*0x520eae*/
        if ( this->q0F8 % v17 == *(v16 - 1) ) /*0x520ebf*/
        {
          v19[0] = this->location; /*0x520ecb*/
          v19[1] = this->q0A0; /*0x520ed6*/
          v19[2] = this->q0A4; /*0x520edd*/
          StartAudioControllerAt(*v16, (int)v19, 0); /*0x520ee4*/
        }
      }
      result = *(_DWORD *)(v14 + 16); /*0x520ee9*/
      ++v13; /*0x520eec*/
      v16 += 2; /*0x520eed*/
    }
    while ( v13 < result ); /*0x520ef2*/
  }
  return result; /*0x520ef4*/
}


// ==== 0x00520F40  Mission::ProcessUnitMissionAI  this=ObjectClass  sig=csp ====
char __thiscall ProcessUnitMissionAI(_DWORD *this)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  _DWORD *v5; // eax
  int v6; // esi
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // edx
  char v11; // al
  int (__stdcall ***v12)(_DWORD, void *, int *); // eax
  int v13; // esi
  int v14; // eax
  int v15; // edi
  bool v16; // bl
  int v17; // eax
  int v19; // [esp+4Ch] [ebp-30h]
  int v20; // [esp+58h] [ebp-24h]
  __int16 v21; // [esp+5Ch] [ebp-20h] BYREF
  int v22; // [esp+60h] [ebp-1Ch] BYREF
  int v23; // [esp+64h] [ebp-18h] BYREF
  int v24; // [esp+68h] [ebp-14h] BYREF
  _BYTE v25[16]; // [esp+6Ch] [ebp-10h] BYREF

  if ( (*(int (__thiscall **)(_DWORD *))(*this + 388))(this) == 2 ) /*0x520f53*/
  {
    if ( !this->__pad_19D ) /*0x520f55*/
      WinAPI::Wrapper(-2147467261); /*0x520f64*/
    if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)this->__pad_19D + 16))(this->__pad_19D) ) /*0x520f72*/
    {
      v2 = this->q5A4; /*0x520f79*/
      v3 = *this; /*0x520f7f*/
      if ( v2 ) /*0x520f86*/
      {
        (*(void (__thiscall **)(_DWORD *, int, int))(v3 + 1152))(this, v2, 1); /*0x520f97*/
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1348))(this, 0, 1072693248); /*0x520fa9*/
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(v3 + 1156))(this, 0, 1); /*0x520f8c*/
      }
    }
  }
  v4 = this->q5A4; /*0x520faf*/
  if ( v4 ) /*0x520fb7*/
  {
    v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *, _DWORD *))(*(_DWORD *)v4 + 76))(v4, v25, this); /*0x520fc5*/
    LOWORD(v22) = *v5 / 256; /*0x520fd8*/
    HIWORD(v22) = v5[1] / 256; /*0x520fec*/
    LOBYTE(v5) = this->q1B7; /*0x520ff1*/
    v23 = v22; /*0x520ffd*/
    if ( !(_BYTE)v5 /*0x521022*/
      || (v6 = *this,
          v7 = (*(int (__thiscall **)(_DWORD *, int, int, _DWORD, int))(*this + 452))(this, -1, -1, 0, 1),
          (*(int (__thiscall **)(_DWORD *, int))(v6 + 428))(this, v7) != 7) )
    {
      if ( !this->__pad_19D ) /*0x521028*/
        WinAPI::Wrapper(-2147467261); /*0x521037*/
      if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)this->__pad_19D + 16))(this->__pad_19D) /*0x521050*/
        && !*((_BYTE *)this + 1048) )
      {
        if ( this->q5A4 ) /*0x52105e*/
        {
          if ( *((_BYTE *)this + 981) ) /*0x52106c*/
          {
            v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 76))(this); /*0x521086*/
            LOWORD(v20) = *v8 / 256; /*0x521099*/
            HIWORD(v20) = v8[1] / 256; /*0x5210af*/
            v9 = *this; /*0x5210b8*/
            v22 = v20; /*0x5210bb*/
            v19 = (*(int (__thiscall **)(_DWORD *))(v9 + 800))(this); /*0x5210c9*/
            v10 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], &v21) + 80) >> 8; /*0x5210de*/
            LOBYTE(v10) = v10 & 1; /*0x5210e1*/
            v11 = (*(int (__thiscall **)(_DWORD *, _DWORD, int, int))(*this + 188))(this, 0, v10, v19); /*0x5210e9*/
            if ( !MapSeed::CheckTileMatch( /*0x521133*/
                    &MEMORY[0x87F7E8],
                    (__int16 *)&v24,
                    (__int16 *)&v23,
                    *(_DWORD *)(this->q6C0 + 1460),
                    v11,
                    (char)v25,
                    0)
              && !*(_BYTE *)(this->q6C0 + 3774)
              && (*(int (__thiscall **)(_DWORD *))(*this + 388))(this) != 7 )
            {
              (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1152))(this, 0, 1); /*0x52113e*/
            }
          }
        }
      }
    }
  }
  if ( !this->__pad_19D ) /*0x521144*/
    WinAPI::Wrapper(-2147467261); /*0x521153*/
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)this->__pad_19D + 168))(this->__pad_19D) ) /*0x521161*/
  {
    if ( !*(_BYTE *)(this->q6C0 + 3476) ) /*0x521175*/
      goto LABEL_55; /*0x521175*/
    v12 = (int (__stdcall ***)(_DWORD, void *, int *))this->__pad_19D; /*0x521183*/
    v22 = 0; /*0x52118d*/
    if ( !v12 ) /*0x521195*/
      goto LABEL_33; /*0x521195*/
    v13 = (**v12)(v12, &unk_818858, &v24); /*0x5211a6*/
    if ( v13 >= 0 ) /*0x5211aa*/
    {
      v15 = v24; /*0x5211b9*/
      ComPtr::Release_Alt(&v22); /*0x5211c1*/
      v14 = v15; /*0x5211c6*/
    }
    else
    {
      ComPtr::Release_Alt(&v22); /*0x5211b0*/
      v14 = 0; /*0x5211b5*/
    }
    v22 = v14; /*0x5211ca*/
    if ( v13 < 0 && v13 != -2147467262 ) /*0x5211d6*/
      WinAPI::Wrapper(v13); /*0x5211d9*/
    if ( !v14 ) /*0x5211e4*/
LABEL_33:
      WinAPI::Wrapper(-2147467261); /*0x5211eb*/
    (*(void (__stdcall **)(int, _BYTE *))(*(_DWORD *)v14 + 12))(v14, v25); /*0x5211fc*/
    v16 = memcmp(v25, &g_CLSID_JumpjetLocomotion, 0x10u) == 0; /*0x521215*/
    if ( v22 ) /*0x52121a*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v22 + 8))(v22); /*0x52121f*/
    if ( v16 ) /*0x521226*/
    {
      LOBYTE(v17) = *((_BYTE *)this + 1677); /*0x521228*/
      if ( !(_BYTE)v17 ) /*0x521230*/
      {
        if ( *((double *)this + 175) <= 0.8 ) /*0x521247*/
          LOBYTE(v17) = (*(int (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 1368))(this, 23, 0, 0); /*0x52126b*/
        else
          LOBYTE(v17) = (*(int (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 1368))(this, 24, 0, 0); /*0x521254*/
      }
    }
    else
    {
LABEL_55:
      if ( *((_BYTE *)this + 1755) ) /*0x521277*/
        LOBYTE(v17) = (*(int (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 1368))(this, 6, 0, 0); /*0x52128c*/
      else
        LOBYTE(v17) = (*(int (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 1368))(this, 3, 0, 0); /*0x5212a3*/
    }
  }
  else
  {
    v17 = this->q6C4; /*0x5212af*/
    switch ( v17 ) /*0x5212c2*/
    {
      case 3: /*0x5212c2*/
      case 24: /*0x5212c2*/
      case 23: /*0x5212c2*/
        LOBYTE(v17) = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD))(*this + 1368))(this, 0, 0, 0); /*0x521307*/
        break;
      case 6: /*0x5212c2*/
        LOBYTE(v17) = (*(int (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 1368))(this, 2, 0, 0); /*0x5212d4*/
        break;
      case 17: /*0x5212c2*/
        LOBYTE(v17) = (*(int (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 1368))(this, 16, 0, 0); /*0x5212f0*/
        break;
    }
  }
  return v17; /*0x52125a*/
}


// ==== 0x00521320  InfantryClass::GetIdleTimer  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass_GetIdleTimer(int *this)
{
  int v2; // eax
  int v3; // eax
  __int16 *v5; // eax
  #344 *v6; // eax
  unsigned int NumberOfActiveVirtualProcessors; // edi
  int v8; // ecx
  int v9; // edi
  __int16 *v10; // eax
  void *v11; // eax
  char *v12; // eax
  int v13; // esi
  char *v14; // eax
  int v15; // esi
  #375 *v16; // eax
  int v17; // eax
  _DWORD *v18; // eax
  int v19; // edi
  int v20; // ebx
  int *v21; // eax
  int v22; // kr0C_4
  int v23; // eax
  char *MissionControl; // eax
  int v25; // esi
  _BYTE v26[4]; // [esp+Ch] [ebp-1Ch] BYREF
  _BYTE v27[12]; // [esp+10h] [ebp-18h] BYREF
  _BYTE v28[12]; // [esp+1Ch] [ebp-Ch] BYREF

  v2 = this->q1B1; /*0x521328*/
  if ( v2 != 27 && v2 != 28 && v2 != 29 && v2 != 30 ) /*0x521340*/
  {
    v16 = (#375 *)(*(int (__thiscall **)(int *))(*this + 60))(this); /*0x5214fb*/
    if ( !(unsigned __int8)House::IsCurrentPlayer(v16) ) /*0x521500*/
    {
      v17 = this->animation; /*0x52150d*/
      if ( *(_BYTE *)(v17 + 3784) ) /*0x521513*/
      {
        if ( *(_BYTE *)(v17 + 1708) ) /*0x521521*/
        {
          if ( *(int *)(v17 + 1732) <= -1 /*0x521574*/
            && !this->q169
            && this->nextObject + *(_DWORD *)(*((_DWORD *)MEMORY[0x8871E0] + 908) + 4 * *(_DWORD *)(this->owner + 388)) < (int)MEMORY[0xA8ED84] )
          {
            if ( !this->q086 /*0x5215f3*/
              || (v18 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 72))(this, v27),
                  v19 = *v18 / 256,
                  v20 = v18[1] / 256,
                  v21 = (int *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)this->q086 + 72))(
                                 this->q086,
                                 v28),
                  v22 = *v21,
                  v23 = v21[1] / 256,
                  (unsigned __int16)(v22 / 256) == (_WORD)v19)
              && (_WORD)v23 == (_WORD)v20 )
            {
              if ( !*(_BYTE *)(this->animation + 3383) ) /*0x5215ff*/
              {
                if ( !this->Locomotor ) /*0x52160d*/
                  WinAPI::Wrapper(-2147467261); /*0x52161c*/
                if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)this->Locomotor + 16))(this->Locomotor) ) /*0x52162a*/
                {
                  if ( !this->Locomotor ) /*0x52165a*/
                    WinAPI::Wrapper(-2147467261); /*0x521669*/
                  (*(void (__stdcall **)(_DWORD))(*(_DWORD *)this->Locomotor + 72))(this->Locomotor); /*0x521677*/
                  this->ShouldDeploy = 1; /*0x52167c*/
                  MissionControl = MissionClass::GetMissionControl(this); /*0x521683*/
                  v25 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x5216a0*/
                  return v25 + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2); /*0x5216ad*/
                }
                else
                {
                  (*(void (__thiscall **)(int *, int, _DWORD, _DWORD))(*this + 1368))(this, 27, 0, 0); /*0x52163b*/
                  return *(_DWORD *)(*(_DWORD *)(this->animation + 3644) + 976); /*0x521650*/
                }
              }
            }
          }
        }
      }
    }
    return -1; /*0x5216b8*/
  }
  v3 = this->animation; /*0x521346*/
  if ( *(int *)(v3 + 1732) > -1 ) /*0x521353*/
  {
    (*(void (__thiscall **)(int *, int, _DWORD, _DWORD))(*this + 1368))(this, 31, 0, 0); /*0x52135f*/
    return *(_DWORD *)(*(_DWORD *)(this->animation + 3644) + 1120); /*0x52137d*/
  }
  if ( !*(_BYTE *)(v3 + 1708) ) /*0x521386*/
    return -1; /*0x521386*/
  if ( *(_BYTE *)(v3 + 3383) ) /*0x52138c*/
  {
    v5 = (__int16 *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 440))(this, v26); /*0x5213a3*/
    v6 = (#344 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v5); /*0x5213af*/
    NumberOfActiveVirtualProcessors = _GetNumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ(v6); /*0x5213c1*/
    v8 = *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int *, int))(*this + 1016))(this, 1) + 344); /*0x5213cb*/
    if ( !NumberOfActiveVirtualProcessors || CellClass::GetOccupiedRatio(NumberOfActiveVirtualProcessors) < v8 / 3 ) /*0x5213ee*/
    {
      v9 = *this; /*0x5213f4*/
      v10 = (__int16 *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 440))(this, v26); /*0x5213fd*/
      v11 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v10); /*0x521409*/
      (*(void (__thiscall **)(int *, void *))(v9 + 968))(this, v11); /*0x521411*/
      if ( !(*(int (__thiscall **)(int *, _DWORD, int, int))(*this + 960))(this, this->target, 1, 1) ) /*0x521426*/
      {
        (*(void (__thiscall **)(int *, _DWORD, int))(*this + 972))(this, this->target, 1); /*0x52143d*/
        (*(void (__thiscall **)(int *, _DWORD))(*this + 968))(this, 0); /*0x521449*/
        (*(void (__thiscall **)(int *, int, _DWORD, _DWORD))(*this + 1368))(this, 29, 0, 0); /*0x521459*/
        return *(_DWORD *)(*(_DWORD *)(this->animation + 3644) + 1048); /*0x521477*/
      }
      (*(void (__thiscall **)(int *, _DWORD))(*this + 968))(this, 0); /*0x52147e*/
    }
    v12 = MissionClass::GetMissionControl(this); /*0x521486*/
    v13 = Math::RoundToInt(*((double *)v12 + 2) * 900.0); /*0x5214a9*/
    return v13 + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 10, 20); /*0x5214b0*/
  }
  else
  {
    (*(void (__thiscall **)(int *))(*this + 1064))(this); /*0x5214bd*/
    v14 = MissionClass::GetMissionControl(this); /*0x5214c5*/
    v15 = Math::RoundToInt(*((double *)v14 + 2) * 900.0); /*0x5214d8*/
    return v15 + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2); /*0x5214ee*/
  }
}


// ==== 0x005216C0  TechnoClass::GetThreatValue_0  this=InfantryClass  sig=csp ====
// attributes: thunk
int __thiscall TechnoClass::GetThreatValue_0(#375 **this)
{
  return TechnoClass::GetThreatValue(this);
}


// ==== 0x005216D0  InfantryClass::CanMoveFreely  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::CanMoveFreely(int this)
{
  char result; // al
  unsigned int v3; // eax

  result = TechnoClass::IsTimerExpired((#377 *)this); /*0x5216d3*/
  if ( result ) /*0x5216da*/
  {
    if ( !*(_DWORD *)(this + 1652) ) /*0x5216de*/
      WinAPI::Wrapper(-2147467261); /*0x5216ed*/
    if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1652) + 16))(*(_DWORD *)(this + 1652)) ) /*0x5216fb*/
    {
      return 0; /*0x521702*/
    }
    else if ( *(_BYTE *)(this + 1755) ) /*0x521706*/
    {
      return 0; /*0x521710*/
    }
    else if ( *(_BYTE *)(this + 1677) ) /*0x521714*/
    {
      return 0; /*0x52171e*/
    }
    else
    {
      v3 = *(_DWORD *)(this + 1732); /*0x521722*/
      return v3 != 27 && v3 != 28 && v3 != 29 && v3 != 30 && (v3 < 2 || v3 == 16); /*0x52173c*/
    }
  }
  return result; /*0x5216dc*/
}


// ==== 0x00521760  InfantryClass::ParachuteTo  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::ParachuteTo(int this, int a2)
{
  if ( !(unsigned __int8)ObjectClass::ParachuteDrop((#374 *)this) ) /*0x521768*/
    return 0; /*0x5217b4*/
  if ( (unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 540)) ) /*0x521777*/
    (*(void (__thiscall **)(int, int, _DWORD))(this->q7A0)(this, 5, 0); /*0x521788*/
  else
    (*(void (__thiscall **)(int, int, _DWORD))(this->q7A0)(this, 15, 0); /*0x521798*/
  (*(void (__thiscall **)(int, int, int, _DWORD))(this->FootClass_field_558)(this, 33, 1, 0); /*0x5217a8*/
  return 1; /*0x5217b0*/
}


// ==== 0x005217C0  InfantryClass::MarkCellPassability  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::MarkCellPassability(void *this, _DWORD *a2)
{
  char v3; // bp
  _BYTE *v4; // esi
  int result; // eax

  v3 = Input::OffsetToDirection(a2); /*0x5217d7*/
  v4 = Coord::To_Cell(&MEMORY[0x87F7E8], a2); /*0x5217e4*/
  if ( MEMORY[0xA8F234] + Cell::GetGroundHeight(a2) <= a2[2] && (*((_DWORD *)v4 + 80) & 0x100) != 0 ) /*0x521803*/
  {
    v4[296] |= 1 << v3; /*0x521813*/
    result = (*(int (__thiscall **)(void *))(this->attachedBomb)(this); /*0x52181d*/
    *((_DWORD *)v4 + 22) = result; /*0x521820*/
  }
  else
  {
    v4[292] |= 1 << v3; /*0x521838*/
    result = (*(int (__thiscall **)(void *))(this->attachedBomb)(this); /*0x521842*/
    *((_DWORD *)v4 + 21) = result; /*0x521845*/
  }
  return result; /*0x521823*/
}


// ==== 0x00521850  InfantryClass::ClearCellPassability  this=InfantryClass  sig=csp ====
char __stdcall InfantryClass::ClearCellPassability(_DWORD *a1)
{
  char v1; // bl
  _BYTE *v2; // esi
  char result; // al

  v1 = Input::OffsetToDirection(a1); /*0x521864*/
  v2 = Coord::To_Cell(&MEMORY[0x87F7E8], a1); /*0x521871*/
  if ( Cell::GetGroundHeight(a1) + MEMORY[0xA8F234] > a1[2] ) /*0x521885*/
  {
    result = ~(1 << v1) & v2[292]; /*0x5218c0*/
    v2[292] = result; /*0x5218c2*/
    if ( (result & 0x1C) == 0 ) /*0x5218ca*/
      *((_DWORD *)v2 + 21) = -1; /*0x5218cc*/
  }
  else
  {
    result = ~(1 << v1) & v2[296]; /*0x521897*/
    v2[296] = result; /*0x521899*/
    if ( (result & 0x1C) == 0 ) /*0x5218a1*/
      *((_DWORD *)v2 + 22) = -1; /*0x5218a3*/
  }
  return result; /*0x5218aa*/
}


// ==== 0x005218E0  InfantryClass::GetDeployWeaponIndex  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::GetDeployWeaponIndex(#377 *this, int a2)
{
  int v3; // ecx
  int v4; // eax

  v3 = this->animation; /*0x5218e3*/
  if ( !*(_BYTE *)(v3 + 1708) ) /*0x5218e9*/
    return TechnoClass::SelectWeapon(this); /*0x521955*/
  v4 = this->q1B1; /*0x5218f3*/
  if ( v4 == 27 || v4 == 28 || v4 == 29 || v4 == 30 ) /*0x52190b*/
    return *(_DWORD *)(v3 + 1704); /*0x52190d*/
  if ( !this->inOpenToppedTransport /*0x521932*/
    || *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3408) == -1 )
  {
    return 0; /*0x521948*/
  }
  return *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3408); /*0x521913*/
}


// ==== 0x00521960  InfantryClass::LoadFromStream  this=InfantryClass  sig=csp ====
int __stdcall InfantryClass::LoadFromStream(int *a0, FootClass *aP1)
{
  FootClass *v2; // esi
  int *v3; // ebx
  size_t v4; // eax
  int v5; // eax
  int v6; // ecx
  IUnknown *i; // eax
  _DWORD *v8; // eax
  int result; // eax
  int v10; // edi
  int v11; // ebp
  int v12; // edi
  AbstractClass *v13; // eax

  v2 = (FootClass *)a0; /*0x521962*/
  v3 = a0 + 1; /*0x52196a*/
  a0 = (int *)(*(int (__stdcall **)(int *))(a0[1] + 16))(a0 + 1); /*0x52197b*/
  v4 = BuildingTypeClass::Dequeue((char **)&stru_B05488.__pad_579C[15388], (BuildingClass *)&a0); /*0x52197f*/
  if ( v4 ) /*0x521986*/
  {
    v5 = (int)(v4 - *(_DWORD *)&stru_B05488.__pad_579C[15388]) >> 3; /*0x52198e*/
    if ( v5 != -1 ) /*0x521994*/
    {
      v6 = v5 + 1; /*0x521996*/
      for ( i = *(IUnknown **)&stru_B05488.__pad_579C[15392]; /*0x5219a0*/
            v6 < *(int *)&stru_B05488.__pad_579C[15392];
            i = *(IUnknown **)&stru_B05488.__pad_579C[15392] )
      {
        v8 = (_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15388] + 8 * v6++); /*0x5219a8*/
        *(v8 - 2) = *v8; /*0x5219ae*/
        *(v8 - 1) = v8[1]; /*0x5219b4*/
      }
      *(_DWORD *)&stru_B05488.__pad_579C[15392] = (char *)i - 1; /*0x5219c9*/
      *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15388] + 8 * *(_DWORD *)&stru_B05488.__pad_579C[15392]) = 0; /*0x5219ce*/
      *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15388] + 8 * *(_DWORD *)&stru_B05488.__pad_579C[15392] + 4) = 0; /*0x5219de*/
      *(_DWORD *)&stru_B05488.__pad_579C[15404] = 0; /*0x5219e2*/
    }
  }
  result = ObjectClass::LoadFromStream_Common(v2, (LPSTREAM)aP1); /*0x5219ee*/
  if ( result >= 0 ) /*0x5219f5*/
  {
    v10 = v2->locomotor[0]; /*0x5219fb*/
    if ( v2 ) /*0x521a03*/
    {
      FootClass::PostLoadInit(v2, (int)&a0); /*0x521a0c*/
      *(_DWORD *)v2->__pad_0 = &InfantryClass::`vftable'; /*0x521a11*/
      *v3 = (int)&InfantryClass::`vftable'; /*0x521a17*/
      *(_DWORD *)&v2->__pad_0[8] = &vt_InfantryClass; /*0x521a1d*/
      *(_DWORD *)&v2->__pad_0[12] = &off_7EB02C; /*0x521a24*/
    }
    v11 = v2->locomotor[0]; /*0x521a2c*/
    if ( v11 != v10 ) /*0x521a34*/
    {
      v2->locomotor[0] = v10; /*0x521a38*/
      if ( v10 ) /*0x521a3e*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 4))(v10); /*0x521a43*/
      if ( v11 ) /*0x521a48*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(v11); /*0x521a4e*/
    }
    (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x521a54*/
    v12 = (*(int (__stdcall **)(int *))(*v3 + 16))(v3); /*0x521a63*/
    v13 = *(AbstractClass **)&stru_B05488.__pad_579C[15396]; /*0x521a65*/
    if ( *(_DWORD *)&stru_B05488.__pad_579C[15392] + 1 <= *(int *)&stru_B05488.__pad_579C[15396] ) /*0x521a6e*/
      goto LABEL_18; /*0x521a6e*/
    if ( !*(_DWORD *)&stru_B05488.__pad_579C[15396] ) /*0x521a72*/
      v13 = (AbstractClass *)10; /*0x521a74*/
    if ( BuildingTypeClass::Enqueue((int)&stru_B05488.__pad_579C[15388], (int)v13) ) /*0x521a7f*/
    {
LABEL_18:
      *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15388] + 8 * *(_DWORD *)&stru_B05488.__pad_579C[15392]) = v12; /*0x521a93*/
      *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15388] + 8 * *(_DWORD *)&stru_B05488.__pad_579C[15392] + 4) = v2; /*0x521aa1*/
      stru_B05488.__pad_579C[15400] = 0; /*0x521aab*/
      ++*(_DWORD *)&stru_B05488.__pad_579C[15392]; /*0x521ab2*/
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&v2[1]); /*0x521ac3*/
    ObjectPtr::RegisterForTracking( /*0x521ad4*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&v2->disguiseAsType);
    ObjectPtr::RegisterForTracking( /*0x521ae5*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&v2->isDisguisedFlag_as_house);
    return 0; /*0x521aea*/
  }
  return result; /*0x521aec*/
}


// ==== 0x00521B00  InfantryClass::SaveLoad_Prefix  this=InfantryClass  sig=csp ====
HRESULT __stdcall InfantryClass::SaveLoad_Prefix(IPersistStream *a0, FootClass *aP1, struct IPersistStreamVtbl *a2)
{
  return ObjectClass::SaveToStream_Common(a0, aP1, a2); /*0x521b14*/
}


// ==== 0x00521B20  InfantryClass::ResetMissionIfDone  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ResetMissionIfDone(_DWORD *this)
{
  int result; // eax

  result = this->SequenceAnim; /*0x521b20*/
  if ( result == 6 || result == 3 || result == 17 ) /*0x521b33*/
    this->SequenceAnim = -1; /*0x521b35*/
  return result; /*0x521b3f*/
}


// ==== 0x00521B40  InfantryClass::ProcessMission16  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::ProcessMission16(_BYTE *this)
{
  char result; // al
  int v2; // eax

  result = this->ShouldDeploy; /*0x521b40*/
  if ( result ) /*0x521b48*/
  {
    v2 = *(_DWORD *)this; /*0x521b4a*/
    this->ShouldDeploy = 0; /*0x521b52*/
    return (*(int (__stdcall **)(int, _DWORD, _DWORD))(v2 + 1368))(27, 0, 0); /*0x521b59*/
  }
  return result; /*0x521b5f*/
}


// ==== 0x00521B60  InfantryClass::CanInitiateDeploy  this=InfantryClass  sig=csp ====
bool __thiscall InfantryClass::CanInitiateDeploy(_DWORD *this)
{
  int v2; // eax
  int v3; // esi

  v2 = this->currentMission; /*0x521b63*/
  if ( v2 == 6 || v2 == 21 || this->unknownBool68D || this->slaveManager ) /*0x521b89*/
    return 0; /*0x521b89*/
  if ( !this->Locomotor ) /*0x521b93*/
    WinAPI::Wrapper(-2147467261); /*0x521ba2*/
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)this->Locomotor + 128))(this->Locomotor) /*0x521be7*/
    && (*(int (__thiscall **)(_DWORD *))(*this + 388))(this) != 5
    && (*(int (__thiscall **)(_DWORD *))(*this + 388))(this) != 15
    && ((*(int (__thiscall **)(_DWORD *))(*this + 388))(this) != 1 || this->target) )
  {
    return 0; /*0x521be7*/
  }
  v3 = this->SequenceAnim; /*0x521bf1*/
  return v3 == -1 || byte_7EAF7C[4 * v3]; /*0x521c0b*/
}


// ==== 0x00521C10  InfantryClass::InitVoiceResponseTimer  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::InitVoiceResponseTimer(int this)
{
  InfantryTypeClass *v2; // eax

  v2 = *(InfantryTypeClass **)(this + 1728); /*0x521c13*/
  if ( !v2->?[2888] ) /*0x521c19*/
  {
    LOBYTE(v2) = TechnoClass::HasVoiceResponse((TechnoClass *)this, 13); /*0x521c27*/
    if ( !(_BYTE)v2 ) /*0x521c2e*/
      *(_DWORD *)(this + 1748) = 300; /*0x521c30*/
  }
  return (char)v2; /*0x521c3a*/
}


// ==== 0x00521C40  InfantryClass::ResetReloadIfNeeded  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ResetReloadIfNeeded(_DWORD *this)
{
  int result; // eax

  result = this->Type; /*0x521c40*/
  if ( !*(_BYTE *)(result + 3772) ) /*0x521c46*/
    this->PanicDurationLeft = 0; /*0x521c50*/
  return result; /*0x521c5a*/
}


// ==== 0x00521C60  InfantryClass::SetMissionOnCondition  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::SetMissionOnCondition(void *this, int a2)
{
  if ( a2 == 1 ) /*0x521c65*/
    return (*(int (__thiscall **)(void *, int, _DWORD, _DWORD))(this->FootClass_field_558)(this, 10, 0, 0); /*0x521c80*/
  else
    return (*(int (__thiscall **)(void *, int, _DWORD, _DWORD))(this->FootClass_field_558)(this, 9, 0, 0); /*0x521c6f*/
}


// ==== 0x00521C90  InfantryClass::PowerDrainUpdate  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass_PowerDrainUpdate(int this, int *a2)
{
  int v3; // edx
  int v4; // eax
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax

  FootClass::BeginPowerUpdate(a2); /*0x521c99*/
  Power::TimerProcess(*(_DWORD *)(this + 1732)); /*0x521ca7*/
  v3 = *(_DWORD *)(this + 1736); /*0x521cac*/
  v4 = *(_DWORD *)(this + 1744); /*0x521cb2*/
  if ( v3 != -1 ) /*0x521cbb*/
  {
    if ( (int)MEMORY[0xA8ED84] - v3 >= v4 ) /*0x521cc7*/
      v4 = 0; /*0x521ccd*/
    else
      v4 -= (int)MEMORY[0xA8ED84] - v3; /*0x521cc9*/
  }
  Power::TimerProcess(v4); /*0x521cd2*/
  Power::TimerProcess(*(_DWORD *)(this + 1748)); /*0x521ce0*/
  LOBYTE(v5) = *(_BYTE *)(this + 1753); /*0x521ce5*/
  v6 = Power::FlagProcess(a2, v5); /*0x521cee*/
  LOBYTE(v6) = *(_BYTE *)(this + 1754); /*0x521cf3*/
  Power::FlagProcess(a2, v6); /*0x521cfc*/
  LOBYTE(v7) = *(_BYTE *)(this + 1755); /*0x521d01*/
  Power::FlagProcess(a2, v7); /*0x521d0a*/
  LOBYTE(v8) = *(_BYTE *)(this + 1756); /*0x521d0f*/
  v9 = Power::FlagProcess(a2, v8); /*0x521d18*/
  LOBYTE(v9) = *(_BYTE *)(this + 1757); /*0x521d1d*/
  return Power::FlagProcess(a2, v9); /*0x521d2b*/
}


// ==== 0x00521D30  InfantryClass::GetTransformMatrix  this=InfantryClass  sig=csp ====
_DWORD *__thiscall InfantryClass::GetTransformMatrix(void *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // ecx
  _BYTE v5[12]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *, int, _DWORD, _DWORD, _DWORD))(this->suspendedMission)( /*0x521d5b*/
                   this,
                   v5,
                   a3,
                   0,
                   0,
                   0);
  *a2 = *v3; /*0x521d66*/
  a2[1] = v3[1]; /*0x521d6b*/
  a2[2] = v3[2]; /*0x521d73*/
  return a2; /*0x521d63*/
}


// ==== 0x00521D80  InfantryClass::ComputeDeploySpeedFactor  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ComputeDeploySpeedFactor(int this)
{
  int v2; // ecx

  v2 = TechnoClass::ComputeSpeedFactorEx((double *)this); /*0x521d88*/
  if ( *(_BYTE *)(this + 1755) ) /*0x521d8a*/
  {
    if ( *(_BYTE *)(*(_DWORD *)(this + 1728) + 3773) ) /*0x521d9a*/
      return ((unsigned int)(((unsigned __int64)(1431655765LL * v2) >> 32) - v2) >> 31) /*0x521dbb*/
           + ((int)(((unsigned __int64)(1431655765LL * v2) >> 32) - v2) >> 1)
           + v2;
    v2 += v2 / 2; /*0x521dc3*/
  }
  return v2; /*0x521da9*/
}


// ==== 0x00521DD0  InfantryClass::CheckAndApplyBomb  this=InfantryClass  sig=csp ====
AbstractClass *__thiscall InfantryClass::CheckAndApplyBomb(AbstractClass **this)
{
  AbstractClass *result; // eax
  int (__stdcall ***v3)(_DWORD, void *, AbstractClass **); // esi
  InfantryTypeClass *v4; // esi
  AbstractClass *v5; // eax
  AbstractClass *v6; // edi
  AbstractClass *v7; // [esp+14h] [ebp-18h] BYREF
  AbstractClass *v8; // [esp+18h] [ebp-14h] BYREF
  char v9[16]; // [esp+1Ch] [ebp-10h] BYREF

  FootClass::vt_entry_4F4(this); /*0x521dd6*/
  result = this->q169; /*0x521ddb*/
  if ( result ) /*0x521de3*/
  {
    result = (AbstractClass *)ObjectClass::DistanceTo(this, this->q169); /*0x521dec*/
    if ( (int)result < 1024 ) /*0x521df6*/
    {
      result = this->animation; /*0x521dfc*/
      if ( LOBYTE(result[96].abstractFlags) ) /*0x521e02*/
      {
        v3 = (int (__stdcall ***)(_DWORD, void *, AbstractClass **))this->Locomotor; /*0x521e10*/
        v7 = 0; /*0x521e16*/
        if ( !v3 ) /*0x521e20*/
          goto LABEL_12; /*0x521e20*/
        v4 = (InfantryTypeClass *)(**v3)(v3, &unk_818858, &v8); /*0x521e31*/
        if ( (int)v4 >= 0 ) /*0x521e35*/
        {
          v6 = v8; /*0x521e49*/
          ComPtr::Release_Alt((int *)&v7); /*0x521e51*/
          v5 = v6; /*0x521e56*/
          v7 = v6; /*0x521e59*/
        }
        else
        {
          ComPtr::Release_Alt((int *)&v7); /*0x521e3b*/
          v5 = 0; /*0x521e40*/
          v7 = 0; /*0x521e42*/
        }
        if ( (int)v4 < 0 && v4 != (InfantryTypeClass *)-2147467262 ) /*0x521e67*/
          WinAPI::Wrapper(v4); /*0x521e6a*/
        if ( !v5 ) /*0x521e75*/
LABEL_12:
          WinAPI::Wrapper(-2147467261); /*0x521e7c*/
        (*(void (__stdcall **)(AbstractClass *, char *))(*(_DWORD *)v5->__pad_0 + 12))(v5, v9); /*0x521e8d*/
        result = v7; /*0x521e90*/
        if ( v7 ) /*0x521e96*/
          return (AbstractClass *)(*(int (__stdcall **)(AbstractClass *))(*(_DWORD *)v7->__pad_0 + 8))(v7); /*0x521e9b*/
      }
    }
  }
  return result; /*0x521e9e*/
}


// ==== 0x00521EB0  InfantryClass::CheckDeployPath  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::CheckDeployPath(_DWORD *this)
{
  int v2; // esi
  int v3; // eax
  _DWORD *v4; // ecx
  _DWORD *v5; // ebp
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  _DWORD *v12; // eax
  LPVOID ppv; // [esp+30h] [ebp-1Ch] BYREF
  int v15; // [esp+34h] [ebp-18h] BYREF
  BOOL v16; // [esp+38h] [ebp-14h] BYREF
  _BYTE v17[16]; // [esp+3Ch] [ebp-10h] BYREF

  v2 = 0; /*0x521ebe*/
  if ( this->Archive ) /*0x521eb8*/
  {
    v3 = 0; /*0x521ec5*/
    v4 = this + 376; /*0x521ec7*/
    do /*0x521ee1*/
    {
      if ( *v4 == -1 ) /*0x521ed2*/
        break; /*0x521ed2*/
      if ( *v4 == 8 ) /*0x521ed7*/
        break; /*0x521ed7*/
      ++v2; /*0x521ed9*/
      ++v3; /*0x521eda*/
      ++v4; /*0x521edb*/
    }
    while ( v3 < 24 ); /*0x521ee1*/
    if ( v2 >= 4 ) /*0x521ee6*/
      return 0; /*0x521ee6*/
  }
  if ( !*(_BYTE *)(this->Type + 3476) ) /*0x521ef2*/
    return 0; /*0x521ef2*/
  v5 = this + 413; /*0x521f00*/
  InfantryClass::updateOccupiedBuilding(this + 413); /*0x521f0b*/
  if ( !v15 ) /*0x521f16*/
    WinAPI::Wrapper(-2147467261); /*0x521f1d*/
  (*(void (__stdcall **)(int, _BYTE *))(*(_DWORD *)v15 + 12))(v15, v17); /*0x521f2e*/
  v16 = memcmp(v17, &g_CLSID_JumpjetLocomotion, 0x10u) != 0; /*0x521f4e*/
  ComPtr::Release_Alt(&v15); /*0x521f56*/
  if ( v16 ) /*0x521f68*/
    return 0; /*0x521f68*/
  v6 = *v5; /*0x521f6e*/
  v15 = 0; /*0x521f71*/
  if ( !v6 ) /*0x521f77*/
    return 0; /*0x521f77*/
  v7 = StreamClass::Set(&v15, this + 413); /*0x521f82*/
  if ( v7 < 0 && v7 != -2147467262 ) /*0x521f90*/
    WinAPI::Wrapper(v7); /*0x521f93*/
  if ( !v15 ) /*0x521f9e*/
    return 0; /*0x521f9e*/
  if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v15 + 28))(v15) ) /*0x521fa7*/
    goto LABEL_36; /*0x521fac*/
  ppv = 0; /*0x521fbe*/
  v8 = CreateInstanceCOM(&ppv, (IID *)&g_CLSID_WalkLocomotion, 0, 7u); /*0x521fc2*/
  if ( v8 < 0 && v8 != -2147467262 ) /*0x521fd0*/
    WinAPI::Wrapper(v8); /*0x521fd3*/
  if ( !ppv ) /*0x521fde*/
    WinAPI::Wrapper(-2147467261); /*0x521fe5*/
  (*(void (__stdcall **)(LPVOID, _DWORD *))(*(_DWORD *)ppv + 12))(ppv, this); /*0x521ff2*/
  v16 = 0; /*0x521ff9*/
  if ( ppv ) /*0x521fff*/
  {
    v9 = StreamClass::Set(&v16, &ppv); /*0x52200a*/
    if ( v9 < 0 && v9 != -2147467262 ) /*0x522018*/
      WinAPI::Wrapper(v9); /*0x52201b*/
  }
  COMObject::SwapReference(&v15, v16); /*0x522029*/
  Release2COM(&v16); /*0x522032*/
  v10 = v15; /*0x522037*/
  if ( !v15 ) /*0x52203d*/
  {
    if ( !ppv ) /*0x5220cf*/
      return 0; /*0x5220e8*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv); /*0x5220d4*/
LABEL_36:
    if ( v15 ) /*0x5220dd*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v15 + 8))(v15); /*0x5220e2*/
    return 0; /*0x5220e2*/
  }
  v11 = *v5; /*0x522043*/
  this->pathDirections = -1; /*0x522046*/
  (*(void (__stdcall **)(int, int))(*(_DWORD *)v10 + 12))(v10, v11); /*0x522054*/
  InfantryClass::checkBridgeClearance(ppv); /*0x52205e*/
  v12 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)this->Archive + 72))(this->Archive, v17); /*0x522070*/
  if ( !*v5 ) /*0x52207b*/
    WinAPI::Wrapper(-2147467261); /*0x522087*/
  (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)*v5 + 68))(*v5, *v12, v12[1], v12[2]); /*0x5220a0*/
  if ( ppv ) /*0x5220a9*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv); /*0x5220ae*/
  if ( v15 ) /*0x5220b7*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v15 + 8))(v15); /*0x5220bc*/
  return 1; /*0x5220c1*/
}


// ==== 0x005220F0  InfantryClass::SetFlag1752  this=InfantryClass  sig=csp ====
void __thiscall InfantryClass::SetFlag1752(_BYTE *this)
{
  this->PermanentBerzerk = 1; /*0x5220f0*/
}


// ==== 0x00522100  ObjectClass::method  this=ObjectClass  sig=csp ====
bool __thiscall sub_522100(_DWORD *this)
{
  int (__stdcall ***v2)(_DWORD, void *, int *); // eax
  int v3; // esi
  int v4; // eax
  int v5; // edi
  bool v6; // bl
  int v7; // [esp+14h] [ebp-18h] BYREF
  int v8; // [esp+18h] [ebp-14h] BYREF
  _BYTE v9[16]; // [esp+1Ch] [ebp-10h] BYREF

  if ( !*(_BYTE *)(this->q6C0 + 3476) ) /*0x522109*/
    return 0; /*0x522113*/
  v2 = (int (__stdcall ***)(_DWORD, void *, int *))this->__pad_19D; /*0x522119*/
  v7 = 0; /*0x522124*/
  if ( !v2 ) /*0x52212c*/
    goto LABEL_11; /*0x52212c*/
  v3 = (**v2)(v2, &unk_818858, &v8); /*0x52213d*/
  if ( v3 >= 0 ) /*0x522141*/
  {
    v5 = v8; /*0x522150*/
    ComPtr::Release_Alt(&v7); /*0x522158*/
    v4 = v5; /*0x52215d*/
  }
  else
  {
    ComPtr::Release_Alt(&v7); /*0x522147*/
    v4 = 0; /*0x52214c*/
  }
  v7 = v4; /*0x522161*/
  if ( v3 < 0 && v3 != -2147467262 ) /*0x52216d*/
    WinAPI::Wrapper(v3); /*0x522170*/
  if ( !v4 ) /*0x52217b*/
LABEL_11:
    WinAPI::Wrapper(-2147467261); /*0x522182*/
  (*(void (__stdcall **)(int, _BYTE *))(*(_DWORD *)v4 + 12))(v4, v9); /*0x522193*/
  v6 = memcmp(v9, &g_CLSID_JumpjetLocomotion, 0x10u) == 0; /*0x5221ac*/
  if ( v7 ) /*0x5221b1*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x5221b6*/
  return v6; /*0x522115*/
}


// ==== 0x005221D0  InfantryClass::CanDeployAtCell  this=InfantryClass  sig=csp ====
bool __thiscall InfantryClass::CanDeployAtCell(#375 **this, __int16 *aP1, __int16 *aP2)
{
  void *v5; // eax
  _DWORD *v6; // eax
  signed int v7; // ecx
  __int64 v8; // rax
  int v9; // eax
  _DWORD *v10; // eax
  IUnknown *v11; // ecx
  IUnknown *v12; // eax

  (*((void (__thiscall **)(#375 **))*this + 114))(this); /*0x5221d8*/
  if ( HouseClass::IonSensitivesShouldBeOffline() ) /*0x5221e4*/
    return 0; /*0x5221f3*/
  if ( (*((int (__thiscall **)(#375 **))*this + 114))(this) > 0 ) /*0x522202*/
    return 1; /*0x522202*/
  if ( (unsigned __int8)House::IsCurrentPlayer(this->owner) ) /*0x52220e*/
  {
    v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], aP1); /*0x522221*/
    if ( v5 ) /*0x522228*/
    {
      if ( InfantryClass::ValidateAttackPosition((int)v5) ) /*0x52222c*/
        return 0; /*0x52223b*/
    }
  }
  v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], aP2); /*0x52224a*/
  if ( !MapSeed::CheckTileMatch(&MEMORY[0x87F7E8], aP1, aP2, 7, this->onBridge, BYTE1(v6[80]) & 1, 0) ) /*0x52226b*/
    return 1; /*0x52226b*/
  if ( *aP1 == *aP2 && aP1[1] == aP2[1] ) /*0x522288*/
    return 0; /*0x522290*/
  v7 = abs32(aP2[1] - aP1[1]); /*0x5222a5*/
  v8 = *aP2 - *aP1; /*0x5222ac*/
  v9 = (HIDWORD(v8) ^ v8) - HIDWORD(v8); /*0x5222af*/
  if ( v9 <= v7 ) /*0x5222b3*/
    v9 = v7; /*0x5222b5*/
  if ( v9 == 1 ) /*0x5222ba*/
    return 0; /*0x5222c2*/
  if ( v9 >= 4 /*0x5222e3*/
    || !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (IUnknown *)aP1, (TechnoClass *)1)
    || !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (IUnknown *)aP2, (TechnoClass *)1) )
  {
    return 1; /*0x52232d*/
  }
  v10 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], aP2); /*0x5222f4*/
  LOBYTE(v11) = this->onBridge; /*0x5222ff*/
  v12 = (IUnknown *)(v10[80] >> 8); /*0x522305*/
  LOBYTE(v12) = (unsigned __int8)v12 & 1; /*0x522308*/
  return Pathfinding::CalcDistance( /*0x5221ed*/
           (int)MEMORY[0x87E8B8],
           (IUnknown *)aP1,
           (IUnknown *)aP2,
           (TechnoClass *)this,
           v11,
           v12,
           7) > 7;
}


// ==== 0x00522340  InfantryClass::CalculateApproachPath  this=InfantryClass  sig=csp ====
void *__thiscall InfantryClass::CalculateApproachPath(int this, char a2)
{
  int v3; // eax
  #375 *v5; // eax
  int v6; // eax
  int v7; // edi
  char v8; // bl
  int v9; // eax
  int v10; // eax

  if ( *(_DWORD *)(this + 692) )
  {
    v3 = *(_DWORD *)(this + 1732);
    if ( v3 != 27 && v3 != 28 && v3 != 29 && v3 != 30 )
      return FootClass::CalculateApproachPath((_DWORD *)this, 0);
    v5 = (#375 *)(*(int (__thiscall **)(int))(this->ambientSoundController)(this);
    if ( !(unsigned __int8)House::IsCurrentPlayer(v5) )
    {
      v6 = *(_DWORD *)(this + 1728);
      if ( *(_BYTE *)(v6 + 3784) )
      {
        if ( *(_BYTE *)(v6 + 1708) )
        {
          v7 = *(_DWORD *)(v6 + 1704);
          v8 = (*(int (__thiscall **)(int, _DWORD, int))(this->qEA0)(this, *(_DWORD *)(this + 692), v7);
          v9 = *(_DWORD *)(*(int (__thiscall **)(int, int))(this->q3F8)(this, v7);
          if ( v9 )
          {
            if ( !*(_BYTE *)(v9 + 336) )
            {
              v10 = *(_DWORD *)(this + 1732);
              if ( v10 == 27 || v10 == 28 || v10 == 29 || v10 == 30 )
              {
                if ( !v8 && !a2 )
                {
                  (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(this->FootClass_field_558)(this, 31, 0, 0);
                  return 0;
                }
              }
              else if ( v8 && !a2 )
              {
                if ( !*(_DWORD *)(this + 1652) )
                  WinAPI::Wrapper(-2147467261);
                if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1652) + 16))(*(_DWORD *)(this + 1652)) )
                {
                  (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(this->FootClass_field_558)(this, 27, 0, 0);
                  return 0;
                }
                if ( !*(_DWORD *)(this + 1652) )
                  WinAPI::Wrapper(-2147467261);
                (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1652) + 72))(*(_DWORD *)(this + 1652));
                *(_BYTE *)(this + 1764) = 1;
                MissionClass::GetMissionControl((_DWORD *)this);
                Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2);
              }
            }
          }
        }
      }
    }
  }
  return 0;


// ==== 0x005224D0  InfantryClass::IsBridgeRepairEnabled  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::IsBridgeRepairEnabled(_DWORD *this)
{
  return *(_BYTE *)(this->Type + 3779); /*0x5224dc*/
}


// ==== 0x005224E0  TechnoClass::GetTypeFlag  this=ObjectClass  sig=csp ====
char __thiscall TechnoClass_GetTypeFlag(_DWORD *this)
{
  return *(_BYTE *)(this->q6C0 + 3784); /*0x5224ec*/
}


// ==== 0x005224F0  TechnoClass::updateTurretRotation  this=ObjectClass  sig=csp ====
bool __thiscall sub_5224F0(_DWORD *this)
{
  return *(_DWORD *)(this->q6C0 + 1732) > -1; /*0x522504*/
}


// ==== 0x00522510  TechnoClass::IsMission27to30  this=ObjectClass  sig=csp ====
BOOL __thiscall TechnoClass_IsMission27to30(_DWORD *this)
{
  int v1; // eax

  v1 = this->q6C4; /*0x522510*/
  return v1 == 27 || v1 == 28 || v1 == 29 || v1 == 30; /*0x52252c*/
}


// ==== 0x00522540  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_522540(_DWORD *this)
{
  return *(_BYTE *)(this->q6C0 + 1708); /*0x52254c*/
}


// ==== 0x00522600  InfantryClass::FireAtTargetPos  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::FireAtTargetPos(int *this, int a2, int a3, int a4)
{
  int v4; // eax
  int v6; // [esp+0h] [ebp-4h] BYREF

  v4 = *this; /*0x52260d*/
  v6 = *(_DWORD *)(this->animation + 160); /*0x52260f*/
  return (*(int (__thiscall **)(int *, int *, _DWORD, _DWORD, _DWORD, int, _DWORD, int))(v4 + 364))( /*0x522639*/
           this,
           &v6,
           0,
           *(_DWORD *)(MEMORY[0x87F7E8][7806] + 4008),
           0,
           1,
           0,
           a3);
}


// ==== 0x00522640  InfantryClass::GetProductionLimit  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::GetProductionLimit(int this, char a2)
{
  int result; // eax
  int v4; // eax

  if ( (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(this + 540), (#375 *)MEMORY[0x87F7E8][528729]) && !a2 ) /*0x52265e*/
    return *(_DWORD *)(this + 1728); /*0x522667*/
  result = *(_DWORD *)(this + 1304); /*0x52266a*/
  if ( !result ) /*0x522672*/
  {
    if ( !MEMORY[0x87F7E8][528729] ) /*0x52267b*/
      return *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3424); /*0x52267b*/
    v4 = *(_DWORD *)(MEMORY[0x87F7E8][528729] + 488); /*0x52267d*/
    if ( !v4 ) /*0x522685*/
      return *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3416); /*0x522694*/
    if ( v4 == 1 ) /*0x52269a*/
      return *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3420); /*0x5226a3*/
    else
      return *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3424); /*0x5226b1*/
  }
  return result; /*0x522666*/
}


// ==== 0x005226C0  InfantryClass::GetProductionHouse  this=InfantryClass  sig=csp ====
#375 *__thiscall InfantryClass::GetProductionHouse(#375 **this, char a2)
{
  #375 *result; // eax

  if ( (unsigned __int8)HouseClass::IsAlliedWith(this->owner, HouseClass_Player) && !a2 ) /*0x5226de*/
    return this->owner; /*0x5226e0*/
  result = this->disguisedAsHouse; /*0x5226ea*/
  if ( !result ) /*0x5226f2*/
    return HouseClass_Player; /*0x5226f4*/
  return result; /*0x5226e6*/
}


// ==== 0x00522700  InfantryClass::CaptureAttackerInfo  this=InfantryClass  sig=csp ====
void __thiscall InfantryClass::CaptureAttackerInfo(#377 *this, int *a2)
{
  bool v3; // zf
  int v4; // eax

  if ( a2 && (*(int (__thiscall **)(int *))(*a2 + 44))(a2) == 15 ) /*0x522716*/
  {
    TechnoClass::ActivateEffect(this); /*0x52271b*/
    v3 = (*(unsigned __int8 (__thiscall **)(int *))(*a2 + 196))(a2) == 0; /*0x52272a*/
    v4 = *a2; /*0x52272c*/
    if ( v3 ) /*0x52272e*/
    {
      this->disguiseAsType = (*(int (__thiscall **)(int *))(v4 + 136))(a2); /*0x52275f*/
      this->disguisedAsHouse = (*(int (__thiscall **)(int *))(*a2 + 60))(a2); /*0x52276c*/
    }
    else
    {
      this->disguiseAsType = (*(int (__thiscall **)(int *, int))(v4 + 204))(a2, 1); /*0x52273a*/
      this->disguisedAsHouse = (*(int (__thiscall **)(int *, int))(*a2 + 208))(a2, 1); /*0x52274c*/
    }
  }
}


// ==== 0x00522780  InfantryClass::InitProductionLimits  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::InitProductionLimits(int this)
{
  int result; // eax
  int v2; // eax
  int v3; // eax

  result = *(_DWORD *)(this + 1728); /*0x522780*/
  if ( *(_BYTE *)(result + 3376) ) /*0x522786*/
  {
    v2 = *(_DWORD *)(this + 540); /*0x522790*/
    *(_BYTE *)(this + 472) = 1; /*0x522796*/
    *(_DWORD *)(this + 1308) = v2; /*0x52279d*/
    v3 = *(_DWORD *)(v2 + 488); /*0x5227a3*/
    if ( v3 ) /*0x5227ab*/
    {
      if ( v3 == 1 ) /*0x5227c9*/
        result = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3420); /*0x5227cb*/
      else
        result = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3424); /*0x5227d8*/
      *(_DWORD *)(this + 1304) = result; /*0x5227d1*/
    }
    else
    {
      result = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3416); /*0x5227b3*/
      *(_DWORD *)(this + 1304) = result; /*0x5227b9*/
    }
  }
  else
  {
    *(_BYTE *)(this + 472) = 0; /*0x5227e5*/
  }
  return result; /*0x5227bf*/
}


// ==== 0x005227F0  InfantryClass::CanAttackTarget  this=InfantryClass  sig=csp ====
bool __thiscall InfantryClass::CanAttackTarget(#375 **this, #375 *other)
{
  _DWORD *v3; // eax
  _WORD *v4; // ebx
  #375 *v5; // esi
  bool result; // al
  int v7; // [esp+Ch] [ebp-14h]
  int v8; // [esp+10h] [ebp-10h] BYREF
  _BYTE v9[12]; // [esp+14h] [ebp-Ch] BYREF

  result = 0; /*0x5228a0*/
  if ( (*((unsigned __int8 (__thiscall **)(#375 **))*this + 49))(this) ) /*0x5227fa*/
  {
    v3 = (_DWORD *)(*((int (__thiscall **)(#375 **, _BYTE *))*this + 18))(this, v9); /*0x522811*/
    LOWORD(v7) = *v3 / 256; /*0x522824*/
    HIWORD(v7) = v3[1] / 256; /*0x52283c*/
    v8 = v7; /*0x522845*/
    v4 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v8); /*0x52285f*/
    if ( !(unsigned __int8)House::IsAlliedWith(this->owner, other) /*0x522870*/
      && !HouseClass::HasType(v4, *((_DWORD *)other + 12)) )
    {
      v5 = this->disguisedAsHouse; /*0x522879*/
      if ( v5 == other || !v5 || (unsigned __int8)House::IsAlliedWith(other, v5) ) /*0x52288a*/
        return 1; /*0x522802*/
    }
  }
  return result; /*0x522893*/
}


// ==== 0x005228B0  ObjectClass::GetTypeVt40_0  this=InfantryClass  sig=csp ====
// attributes: thunk
int __thiscall ObjectClass::GetTypeVt40_0(#377 *this)
{
  return TechnoClass::GetTypeVt40(this);
}


// ==== 0x005228C0  ObjectClass::GetTypeVt41_0  this=InfantryClass  sig=csp ====
// attributes: thunk
int __thiscall ObjectClass::GetTypeVt41_0(#377 *this)
{
  return ObjectClass::GetTypeVt41(this);
}


// ==== 0x005228D0  InfantryClass::IsBombDeployMission  this=InfantryClass  sig=csp ====
BOOL __thiscall InfantryClass::IsBombDeployMission(_DWORD *this)
{
  int v1; // eax
  BOOL result; // eax

  result = 0; /*0x5228fa*/
  if ( *(_BYTE *)(this->Type + 3784) ) /*0x5228d6*/
  {
    v1 = this->SequenceAnim; /*0x5228e0*/
    if ( v1 == 27 || v1 == 28 || v1 == 29 || v1 == 30 ) /*0x5228f8*/
      return 1; /*0x5228de*/
  }
  return result; /*0x5228ff*/
}


// ==== 0x00522910  TechnoClass::GarrisonBuilding  this=InfantryClass  sig=csp ====
void __thiscall TechnoClass::GarrisonBuilding(InfantryTypeClass **this, _DWORD *a2)
{
  InfantryTypeClass *v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  _DWORD *v8; // eax
  int v9; // eax
  InfantryTypeClass *v10; // ebx
  int v11; // eax
  _BYTE v12[12]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = this->animation; /*0x52291a*/
  if ( v3->?[2880] ) /*0x522920*/
  {
    ((void (__thiscall *)(InfantryTypeClass **))(*this)->ChargerTurrets[6])(this); /*0x522931*/
    v4 = a2[419]; /*0x52293b*/
    if ( a2[421] < v4 /*0x522969*/
      || (*((_BYTE *)a2 + 1681) || !v4)
      && (v5 = a2[422], v5 > 0)
      && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(a2[417] + 8))(a2 + 417, v4 + v5, 0) )
    {
      v6 = a2[421]; /*0x522970*/
      v7 = a2[418]; /*0x522973*/
      a2[421] = v6 + 1; /*0x522979*/
      *(_DWORD *)(v7 + 4 * v6) = this; /*0x52297c*/
    }
    v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a2 + 444))(a2); /*0x522984*/
    BuildingClass::UpdateThreatBounds(a2, v8); /*0x52298d*/
    if ( a2[421] == 1 ) /*0x522999*/
    {
      (*(void (__thiscall **)(_DWORD *, int))(*a2 + 292))(a2, 2); /*0x5229a2*/
      if ( (unsigned __int8)House::IsHumanPlayer((#375 *)this->owner) ) /*0x5229ae*/
      {
        VoxClass::FindAndPlay(MEMORY[0x8255B0], -1, -1); /*0x5229c1*/
        v9 = (*(int (__thiscall **)(InfantryTypeClass **, _BYTE *))&(*this)->UINameLabel[11])(this, v12); /*0x5229d0*/
        StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 444), v9, 0); /*0x5229e0*/
      }
    }
    if ( LOBYTE((this->owner)->MaxDimension) ) /*0x5229ec*/
    {
      this->shouldGarrisonStructure = 0; /*0x5229f4*/
      this->shouldEnterOccupiable = 0; /*0x5229fa*/
    }
  }
  else if ( v3->?[2881] ) /*0x522a09*/
  {
    BuildingClass::AnimateUnloadUnits(a2, (CoordStruct *)this); /*0x522a18*/
    (*(void (__thiscall **)(InfantryTypeClass **, _DWORD, int))&(*this)->?[268])(this, 0, 1); /*0x522a24*/
    v10 = *this; /*0x522a2c*/
    v11 = (*(int (__thiscall **)(_DWORD *, _BYTE *, int, int))(*a2 + 72))(a2, v12, 1, 1); /*0x522a39*/
    (*(void (__thiscall **)(InfantryTypeClass **, int))&v10->__pad_14D[39])(this, v11); /*0x522a3f*/
  }
}


// ==== 0x00522A50  nullsub_146  this=-  sig=csp ====
void __stdcall nullsub_146(int a1)
{
  ; /*0x522a50*/
}


// ==== 0x00522A60  TechnoClass::HandleSpecialAction  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::sub_522A60(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  _DWORD *v5; // esi
  int v6; // eax
  _DWORD *v8; // esi
  _DWORD *v9; // eax
  int v10; // [esp+Ch] [ebp-10h] BYREF
  _BYTE v11[12]; // [esp+10h] [ebp-Ch] BYREF
  int v12; // [esp+20h] [ebp+4h]

  v4 = this->q1AE; /*0x522a6c*/
  if ( (*(_BYTE *)(v4 + 3434) || *(_BYTE *)(v4 + 3476)) /*0x522a93*/
    && a2 == 4475
    && (v5 = this - 2, Team::AllMembersValid(this - 2)) )
  {
    (*(void (__thiscall **)(_DWORD *, int))(*v5 + 628))(this - 2, 8); /*0x522aa2*/
    v6 = this->currentBurstCount_e; /*0x522aa8*/
    if ( !v6 || v6 == this->q167 ) /*0x522ab8*/
    {
      FootClass::ClearPathIndex(this - 2); /*0x522ad4*/
      (*(void (__thiscall **)(_DWORD *, int *, int, _DWORD))(*v5 + 372))(this - 2, &MEMORY[0xA8F200], 1, 0); /*0x522ae6*/
      return 1; /*0x522aee*/
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *, int, int))(*v5 + 1152))(this - 2, v6, 1); /*0x522ac1*/
      return 1; /*0x522ac9*/
    }
  }
  else if ( *(_BYTE *)(this->q1AE + 3477) && a2 == 4476 ) /*0x522b11*/
  {
    v8 = this - 2; /*0x522b1a*/
    v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*(this - 2) + 72))(this - 2, v11); /*0x522b24*/
    LOWORD(v12) = *v9 / 256; /*0x522b37*/
    HIWORD(v12) = v9[1] / 256; /*0x522b4f*/
    v10 = v12; /*0x522b58*/
    if ( (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v10) + 80) & 0x100) != 0 ) /*0x522b70*/
      (*(void (__thiscall **)(_DWORD *, int))(*v8 + 460))(this - 2, MEMORY[0xA8F234]); /*0x522b7d*/
    else
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v8 + 460))(this - 2, 0); /*0x522b8b*/
    (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*v8 + 1368))(this - 2, 36, 1, 0); /*0x522b9b*/
    return 1; /*0x522ba3*/
  }
  else
  {
    return 0; /*0x522bae*/
  }
}


// ==== 0x00522BC0  InfantryClass::CanEnterBuilding  this=InfantryClass  sig=csp ====
bool __thiscall InfantryClass::CanEnterBuilding(_DWORD *this)
{
  int v2; // eax
  bool result; // al

  result = 0; /*0x522bfc*/
  if ( (*(int (__thiscall **)(_DWORD *))(*this + 388))(this) == 5 /*0x522bdd*/
    || (*(int (__thiscall **)(_DWORD *))(*this + 388))(this) == 11 )
  {
    v2 = this->SequenceAnim; /*0x522bdf*/
    if ( !v2 || v2 == 9 || v2 == 10 || v2 == 32 ) /*0x522bf6*/
      return 1; /*0x522bdd*/
  }
  return result; /*0x522bfa*/
}


// ==== 0x00522C00  InfantryClass::StartBombDeploy  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::StartBombDeploy(void *this, char a2)
{
  int result; // eax

  if ( a2 ) /*0x522c09*/
    return (*(int (__thiscall **)(void *, int, _DWORD, _DWORD))(this->FootClass_field_558)(this, 32, 0, 0); /*0x522c09*/
  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 900))(this); /*0x522c0d*/
  if ( (_BYTE)result ) /*0x522c15*/
    return (*(int (__thiscall **)(void *, int, _DWORD, _DWORD))(this->FootClass_field_558)(this, 32, 0, 0); /*0x522c21*/
  return result; /*0x522c27*/
}


// ==== 0x00522CB0  TechnoClass::IsEnteringOrCapturingStructure  this=TechnoClass  sig=csp ====
BOOL __thiscall sub_522CB0(_DWORD *this)
{
  int v1; // eax

  v1 = this->q6C4; /*0x522cb0*/
  return v1 == 11 /*0x522cea*/
      || v1 == 12
      || v1 == 13
      || v1 == 14
      || v1 == 15
      || v1 == 34
      || v1 == 35
      || v1 == 36
      || v1 == 20
      || v1 == 21;
}


// ==== 0x00522D00  SlaveManagerClass::Check  this=TechnoClass  sig=csp ====
int __thiscall sub_522D00(_DWORD *this)
{
  int result; // eax

  if ( this->currentMission != 10 ) /*0x522d07*/
    return (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 488))(this, 10, 0); /*0x522d0f*/
  return result; /*0x522d15*/
}


// ==== 0x00522D20  SlaveManagerClass::VtableDispatch  this=SlaveManagerClass  sig=csp ====
int __thiscall sub_522D20(void *this)
{
  return (*(int (__thiscall **)(void *, int, _DWORD))(this->q7A0)(this, 5, 0); /*0x522d2c*/
}


// ==== 0x00522D30  SlaveManagerClass::CheckIsOne  this=TechnoClass  sig=csp ====
bool __thiscall sub_522D30(void *this)
{
  return ((double (__thiscall *)(void *))*(_DWORD *)(this->sprayOffsetIndex_e)(this) == 1.0; /*0x522d47*/
}


// ==== 0x00522D50  InfantryClass::SlaveGiveMoney_RecordBalanceBefore  this=TechnoClass  sig=csp ====
int __thiscall InfantryClass::SlaveGiveMoney_RecordBalanceBefore(float *this, TechnoClass *aP1)
{
  float *v2; // ebp
  char v3; // bl
  int result; // eax
  BuildingClass *v5; // esi
  _DWORD *owner; // edi
  double v7; // st7
  float v8; // [esp+Ch] [ebp-Ch]
  AbstractClass *v9; // [esp+10h] [ebp-8h]
  AbstractClass *v10; // [esp+10h] [ebp-8h]
  AbstractClass *v11; // [esp+14h] [ebp-4h]

  v2 = this + 207; /*0x522d55*/
  v3 = 0; /*0x522d5e*/
  result = FirstFloatPositive(this + 207); /*0x522d60*/
  v5 = (BuildingClass *)result; /*0x522d65*/
  if ( result != -1 ) /*0x522d6a*/
  {
    do /*0x522e44*/
    {
      owner = aP1->owner; /*0x522d75*/
      v9 = (AbstractClass *)owner[5347]; /*0x522d89*/
      if ( !*((_BYTE *)owner + 492) && *(_DWORD *)&HouseClass_Player.__pad_5568[8068] ) /*0x522d97*/
        v9 = (AbstractClass *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4900) + 4 * owner[97]) /*0x522dae*/
                             + owner[5347]);
      if ( v5 == (BuildingClass *)-1 ) /*0x522db5*/
        v8 = 0.0; /*0x522dc5*/
      else
        v8 = FloatArray::Get(v2, v5); /*0x522dbf*/
      *(float *)&v10 = (double)(int)v9 * *(float *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3900) * v8; /*0x522de3*/
      if ( v5 != (BuildingClass *)-1 ) /*0x522de7*/
      {
        v7 = Float::SubtractClamped(v2, (BuildingTypeClass *)LODWORD(v8), (IUnknown *)v5); /*0x522df1*/
        if ( v7 > 0.0 ) /*0x522e05*/
        {
          v3 = 1; /*0x522e0f*/
          *(float *)&v11 = v7; /*0x522df6*/
          HouseClass::GiveTiberium_Storage(owner, v11, v5); /*0x522e11*/
          if ( *(float *)&v10 > 0.0 ) /*0x522e27*/
            HouseClass::GiveTiberium_Storage(owner, v10, v5); /*0x522e31*/
        }
      }
      result = FirstFloatPositive(v2); /*0x522e3a*/
      v5 = (BuildingClass *)result; /*0x522e3f*/
    }
    while ( result != -1 ); /*0x522e44*/
    if ( v3 ) /*0x522e4d*/
      return (*(int (__thiscall **)(TechnoClass *))(aP1->vtable0 + 1128))(aP1); /*0x522e55*/
  }
  return result; /*0x522e5b*/
}


// ==== 0x00522E70  InfantryClass::ProcessTiberiumHarvest  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ProcessTiberiumHarvest(int *this)
{
  int v2; // edx
  _DWORD *v4; // ebx
  int v5; // ebp
  double v6; // st7
  int v7; // eax
  float v8; // [esp+Ch] [ebp-1Ch]
  float v9; // [esp+24h] [ebp-4h]
  float v10; // [esp+24h] [ebp-4h]
  int v11; // [esp+24h] [ebp-4h]

  v2 = *this; /*0x522e7b*/
  if ( *(_DWORD *)(this->animation + 2048) ) /*0x522e7d*/
  {
    v4 = (_DWORD *)(*(int (__thiscall **)(int *))(v2 + 444))(this); /*0x522eb4*/
    if ( !Cell::IsBridge2(v4) || ((double (__thiscall *)(int *))*(_DWORD *)(*this + 692))(this) == 1.0 ) /*0x522eda*/
    {
      (*(void (__thiscall **)(int *, _DWORD, _DWORD, _DWORD))(*this + 1368))(this, 0, 0, 0); /*0x522f98*/
      (*(void (__thiscall **)(int *, int, _DWORD))(*this + 488))(this, 5, 0); /*0x522fa6*/
      return 1; /*0x522fad*/
    }
    else
    {
      if ( this->q1B1 != 38 ) /*0x522ee7*/
        (*(void (__thiscall **)(int *, int, _DWORD, _DWORD))(*this + 1368))(this, 38, 0, 0); /*0x522ef3*/
      v5 = BuildingClass::FindByCellHash(v4); /*0x522f02*/
      v9 = (float)*(int *)(this->animation + 2048); /*0x522f18*/
      if ( v9 - Float4::Sum((float *)this + 207) <= 1.0 ) /*0x522f30*/
      {
        v10 = (float)*(int *)(this->animation + 2048); /*0x522f48*/
        v6 = v10 - Float4::Sum((float *)this + 207); /*0x522f51*/
      }
      else
      {
        v6 = 1.0; /*0x522f32*/
      }
      v7 = Math::RoundToInt(v6); /*0x522f55*/
      v11 = CellClass::ReduceTiberium((int)v4, v7); /*0x522f64*/
      if ( v11 > 0 ) /*0x522f68*/
      {
        v8 = (float)v11; /*0x522f72*/
        Float::Accumulate((float *)this + 207, v8, v5); /*0x522f75*/
      }
      return *(_DWORD *)(this->animation + 3768); /*0x522f85*/
    }
  }
  else
  {
    (*(void (__thiscall **)(int *, _DWORD, _DWORD, _DWORD))(v2 + 1368))(this, 0, 0, 0); /*0x522e8f*/
    (*(void (__thiscall **)(int *, int, _DWORD))(*this + 488))(this, 5, 0); /*0x522e9d*/
    return 1; /*0x522ea4*/
  }
}


// ==== 0x00522FC0  SlaveManagerClass::IsMasterHarvester  this=SlaveManagerClass  sig=csp ====
bool __thiscall sub_522FC0(void *this)
{
  return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 388))(this) == 10; /*0x522fd2*/
}


// ==== 0x00522FE0  InfantryClass::CreateDeployLocomotor  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::_vt322(_BYTE *this, int a2, int a3, int a4)
{
  int v5; // edi
  void *v6; // eax
  int v7; // eax
  int v8; // eax
  LPVOID v9; // edi
  LPVOID v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // edi
  int v14; // edx
  void *v15; // eax
  LPVOID ppv; // [esp+50h] [ebp-8h] BYREF
  int v18; // [esp+54h] [ebp-4h] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(this->q054)(this) /*0x52302c*/
    || (*(unsigned __int8 (__thiscall **)(_BYTE *))(this->firepowerMultiplier)(this)
    || this->firingParticles
    || (*(unsigned __int8 (__thiscall **)(_BYTE *))(this->q1D4)(this)
    || (*(unsigned __int8 (__thiscall **)(_BYTE *))(this->q1D8)(this) )
  {
    return 0; /*0x523239*/
  }
  if ( !this->Locomotor ) /*0x52303a*/
    WinAPI::Wrapper(-2147467261); /*0x523049*/
  (*(void (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 413) + 156))(this->Locomotor, 0); /*0x523059*/
  (*(void (__thiscall **)(_BYTE *, int *))(this->q0F4)(this, &a2); /*0x523068*/
  v5 = *(_DWORD *)this; /*0x52306e*/
  this->FootClass_field_6B6 = 1; /*0x52307c*/
  v6 = Coord::To_Cell(&MEMORY[0x87F7E8], &a2); /*0x523083*/
  (*(void (__thiscall **)(_BYTE *, void *, int))(v5 + 1152))(this, v6, 1); /*0x52308b*/
  if ( !this->Locomotor ) /*0x523091*/
    WinAPI::Wrapper(-2147467261); /*0x5230ac*/
  (*(void (__stdcall **)(_DWORD, int, int, int))(**((_DWORD **)this + 413) + 120))(this->Locomotor, a2, a3, a4); /*0x5230c7*/
  ppv = 0; /*0x5230d8*/
  v7 = CreateInstanceCOM(&ppv, (IID *)&g_CLSID_HoverLocomotion, 0, 7u); /*0x5230dc*/
  if ( v7 < 0 && v7 != -2147467262 ) /*0x5230ea*/
    WinAPI::Wrapper(v7); /*0x5230ed*/
  v18 = 0; /*0x5230f6*/
  if ( ppv ) /*0x5230fc*/
  {
    v8 = StreamClass::Set(&v18, &ppv); /*0x523107*/
    if ( v8 < 0 && v8 != -2147467262 ) /*0x523115*/
      WinAPI::Wrapper(v8); /*0x523118*/
  }
  if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &a2) + 80) & 0x100) != 0 ) /*0x523135*/
    a4 += MEMORY[0xA8F234]; /*0x523143*/
  if ( !ppv ) /*0x52314d*/
    WinAPI::Wrapper(-2147467261); /*0x523154*/
  (*(void (__stdcall **)(LPVOID, _BYTE *))(*(_DWORD *)ppv + 12))(ppv, this); /*0x523161*/
  if ( !v18 ) /*0x523170*/
    WinAPI::Wrapper(-2147467261); /*0x523177*/
  (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v18 + 12))(v18, this->Locomotor); /*0x523184*/
  v9 = (LPVOID)this->Locomotor; /*0x523187*/
  v10 = ppv; /*0x52318d*/
  if ( v9 != ppv ) /*0x523193*/
  {
    this->Locomotor = ppv; /*0x523197*/
    if ( v10 ) /*0x52319d*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)v10 + 4))(v10); /*0x5231a2*/
    if ( v9 ) /*0x5231a7*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)v9 + 8))(v9); /*0x5231ac*/
  }
  v11 = a2; /*0x5231af*/
  v12 = a3; /*0x5231b3*/
  v13 = *(_DWORD *)this; /*0x5231bd*/
  this->firingParticles = 1; /*0x5231c1*/
  this->tiltForwardsAngle = v11; /*0x5231c8*/
  v14 = a4; /*0x5231ca*/
  this->q0A3 = v12; /*0x5231ce*/
  this->q0A4 = v14; /*0x5231d6*/
  v15 = Coord::To_Cell(&MEMORY[0x87F7E8], &a2); /*0x5231de*/
  (*(void (__thiscall **)(_BYTE *, void *, int))(v13 + 1152))(this, v15, 1); /*0x5231e6*/
  if ( !this->Locomotor ) /*0x5231ec*/
    WinAPI::Wrapper(-2147467261); /*0x5231f9*/
  (*(void (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 413) + 156))(this->Locomotor, 0); /*0x523208*/
  if ( v18 ) /*0x523214*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v18 + 8))(v18); /*0x523219*/
  if ( ppv ) /*0x523222*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv); /*0x523227*/
  return 1; /*0x52322c*/
}


// ==== 0x00523250  InfantryClass::ComputeTransform  this=InfantryClass  sig=csp ====
_DWORD *__thiscall InfantryClass::ComputeTransform(int this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  _DWORD v12[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( *(_BYTE *)(this + 130) /*0x52327b*/
    && (v7 = *(_DWORD *)(this + 284)) != 0
    && (v8 = TechnoClass::IndexOf((_DWORD *)(v7 + 276), (InfantryClass *)this)) != 0 )
  {
    v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD *, int, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 284) + 176))( /*0x5232a1*/
                     *(_DWORD *)(this + 284),
                     v12,
                     -v8,
                     0,
                     0,
                     0);
  }
  else
  {
    v9 = TechnoClass::ComputeTransform((_DWORD **)this, v12, a3, 0, 0, 0); /*0x5232c8*/
  }
  v10 = v9; /*0x5232cd*/
  *a2 = *v10; /*0x5232d8*/
  a2[1] = v10[1]; /*0x5232dd*/
  a2[2] = v10[2]; /*0x5232e5*/
  return a2; /*0x5232d5*/
}


// ==== 0x005232F0  InfantryClass::StubReturn1776  this=InfantryClass  sig=csp ====
int InfantryClass::_vt12()
{
  return 1776; /*0x5232f5*/
}


// ==== 0x00523300  InfantryClass::GetClassID  this=InfantryClass  sig=csp ====
int __stdcall InfantryClass::GetClassID(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x523306*/
    return -2147467261; /*0x523308*/
  *a2 = 237448644; /*0x523316*/
  a2[1] = 298949647; /*0x52331e*/
  a2[2] = -1610610249; /*0x523327*/
  a2[3] = -777003740; /*0x523330*/
  return 0; /*0x52330d*/
}


// ==== 0x00523340  InfantryClass::StubReturn15  this=InfantryClass  sig=csp ====
int InfantryClass::_vt11()
{
  return 15; /*0x523345*/
}


// ==== 0x00523350  InfantryClass::ScalarDtor  this=InfantryClass  sig=csp ====
InfantryClass *__thiscall InfantryClass::ScalarDtor(void **Block, char a2)
{
  InfantryClass::Destruct(Block); /*0x523353*/
  if ( (a2 & 1) != 0 ) /*0x52335d*/
    __3_YAXPAX_Z(Block); /*0x523360*/
  return (InfantryClass *)Block; /*0x52336a*/
}


// ==== 0x00523370  InfantryClass::checkBridgeClearance  this=IUnknown  sig=csp ====
int *__thiscall sub_523370(int *this, int a2)
{
  int v3; // edi

  v3 = *this; /*0x523378*/
  if ( *this != a2 ) /*0x52337c*/
  {
    *this = a2; /*0x523380*/
    if ( a2 ) /*0x523382*/
      (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x523387*/
    if ( v3 ) /*0x52338c*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3); /*0x523391*/
  }
  return this; /*0x523396*/
}


// ==== 0x005233A0  COMObject::SwapReference  this=COMObject  sig=csp ====
int *__thiscall COMObject::SwapReference(int *this, int a2)
{
  int v3; // edi

  v3 = *this; /*0x5233a8*/
  if ( *this != a2 ) /*0x5233ac*/
  {
    *this = a2; /*0x5233b0*/
    if ( a2 ) /*0x5233b2*/
      (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x5233b7*/
    if ( v3 ) /*0x5233bc*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3); /*0x5233c1*/
  }
  return this; /*0x5233c6*/
}


// ==== 0x005233D0  InfantryClass::updateOccupiedBuilding  this=InfantryClass  sig=csp ====
_DWORD *__thiscall InfantryClass::updateOccupiedBuilding(_DWORD *this, IUnknown *aP1)
{
  IUnknown *v2; // eax
  int (__stdcall ***v4)(_DWORD, void *, IUnknown **); // eax
  int v5; // ebx
  IUnknown *v6; // edi

  v2 = aP1; /*0x5233d0*/
  *this = 0; /*0x5233d8*/
  v4 = (int (__stdcall ***)(_DWORD, void *, IUnknown **))v2->field_0; /*0x5233de*/
  if ( v4 ) /*0x5233e2*/
  {
    v5 = (**v4)(v4, &unk_818858, &aP1); /*0x5233f3*/
    if ( v5 >= 0 ) /*0x5233f7*/
    {
      v6 = aP1; /*0x523410*/
      if ( *this ) /*0x52340d*/
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*this + 8))(*this); /*0x52341b*/
      *this = v6; /*0x52341e*/
    }
    else
    {
      if ( *this ) /*0x5233f9*/
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*this + 8))(*this); /*0x523402*/
      *this = 0; /*0x523405*/
    }
    if ( v5 < 0 && v5 != -2147467262 ) /*0x52342b*/
      WinAPI::Wrapper(v5); /*0x52342e*/
  }
  return this; /*0x523435*/
}


// ==== 0x00523440  BinaryArraySearch  this=AbstractClass  sig=csp ====
int __fastcall BinaryArraySearch(AbstractClass *aP0, int edx0, int *a2)
{
  int v3; // esi
  int v4; // ebx
  int v5; // edi

  v3 = edx0; /*0x523445*/
  if ( edx0 <= 0 ) /*0x523447*/
    return 0; /*0x523479*/
  v4 = *a2; /*0x52344d*/
  while ( 1 ) /*0x523456*/
  {
    v5 = *(_DWORD *)&aP0->__pad_0[8 * (v3 / 2)]; /*0x523456*/
    if ( v5 <= v4 ) /*0x52345e*/
      break; /*0x52345e*/
    v3 /= 2; /*0x523460*/
LABEL_7:
    if ( v3 <= 0 ) /*0x523472*/
      return 0; /*0x523472*/
  }
  if ( v5 != v4 ) /*0x523464*/
  {
    aP0 = (AbstractClass *)((char *)aP0 + 8 * (v3 / 2) + 8); /*0x523466*/
    v3 += -1 - v3 / 2; /*0x52346e*/
    goto LABEL_7; /*0x52346e*/
  }
  return (int)&aP0->__pad_0[8 * (v3 / 2)]; /*0x523474*/
}


// ==== 0x00523490  sub_523490  this=-  sig=ida-proto ====
void sub_523490()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x52349c*/
  MEMORY[0xA8F268] = Math::Sqrt(v0 + v0); /*0x5234ae*/
}


// ==== 0x005234C0  sub_5234C0  this=-  sig=ida-proto ====
void sub_5234C0()
{
  MEMORY[0xA8F2C0] = MEMORY[0xA8F268] / 60.0; /*0x5234cc*/
}


// ==== 0x005234E0  sub_5234E0  this=-  sig=ida-proto ====
void sub_5234E0()
{
  MEMORY[0xA8F2A8] = 1.0 / MEMORY[0xA8F2C0]; /*0x5234ec*/
}


// ==== 0x00523500  sub_523500  this=-  sig=ida-proto ====
void sub_523500()
{
  MEMORY[0xA8F2A0] = 0.0174532925199433 * 45.0; /*0x52350c*/
}


// ==== 0x00523520  sub_523520  this=-  sig=ida-proto ====
void sub_523520()
{
  MEMORY[0xA8F270] = 0.0174532925199433 * 60.0; /*0x52352c*/
}


// ==== 0x00523540  sub_523540  this=-  sig=ida-proto ====
void sub_523540()
{
  MEMORY[0xA8F248] = 0.0174532925199433 * 90.0; /*0x52354c*/
}


// ==== 0x00523560  sub_523560  this=-  sig=ida-proto ====
__int64 sub_523560()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xA8F248] - MEMORY[0xA8F270]); /*0x523572*/
  result = Math::RoundToInt(v0 * MEMORY[0xA8F268] * 0.5); /*0x523586*/
  MEMORY[0xA8F2CC] = result; /*0x52358b*/
  return result; /*0x523590*/
}


// ==== 0x005235A0  sub_5235A0  this=-  sig=ida-proto ====
void sub_5235A0()
{
  MEMORY[0xA8F278] = Math::ArcTan((double)MEMORY[0xA8F2CC] * 0.00390625); /*0x5235b7*/
}


// ==== 0x005235D0  sub_5235D0  this=-  sig=ida-proto ====
void sub_5235D0()
{
  MEMORY[0xA8F298] = Math::ArcTan((double)(2 * MEMORY[0xA8F2CC]) / MEMORY[0xA8F268]); /*0x5235f2*/
}


// ==== 0x00523600  sub_523600  this=-  sig=ida-proto ====
__int64 sub_523600()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xA8F2CC]) + 0.5); /*0x52361b*/
  MEMORY[0xA8F2BC] = result; /*0x523620*/
  return result; /*0x523626*/
}


// ==== 0x00523630  sub_523630  this=-  sig=ida-proto ====
int sub_523630()
{
  MEMORY[0xA8F260] = 0; /*0x523632*/
  MEMORY[0xA8F262] = 0; /*0x523638*/
  return 0; /*0x52363e*/
}


// ==== 0x00523640  sub_523640  this=-  sig=ida-proto ====
int sub_523640()
{
  MEMORY[0xA8F280] = 0; /*0x523642*/
  MEMORY[0xA8F284] = 0; /*0x523647*/
  MEMORY[0xA8F288] = 0; /*0x52364c*/
  return 0; /*0x523651*/
}


// ==== 0x00523660  sub_523660  this=-  sig=ida-proto ====
int sub_523660()
{
  MEMORY[0xA8F2B8] = 0; /*0x523665*/
  MEMORY[0xA8F2B0] = 128; /*0x52366f*/
  MEMORY[0xA8F2B4] = 128; /*0x523674*/
  return 128; /*0x523679*/
}


// ==== 0x00523680  sub_523680  this=-  sig=ida-proto ====
int sub_523680()
{
  MEMORY[0xA8F250] = 0; /*0x523682*/
  MEMORY[0xA8F254] = 0; /*0x523687*/
  MEMORY[0xA8F258] = 0; /*0x52368c*/
  MEMORY[0xA8F25C] = 0; /*0x523691*/
  return 0; /*0x523696*/
}


// ==== 0x005236A0  InfantryTypeClass::Constructor  this=InfantryTypeClass  sig=csp ====
int __thiscall InfantryTypeClass::Constructor(int this, ObjectClass *aP1)
{
  InfantryTypeClass *v3; // eax
  bool v4; // zf
  int v5; // ecx
  CCINIClass *v6; // edx
  int i; // eax

  TechnoTypeClass::ReadINI((char *)this, aP1->__pad_0, 0); /*0x5236ae*/
  *(_DWORD *)(this + 3576) = -1; /*0x5236b3*/
  *(_DWORD *)(this + 3580) = 1; /*0x5236bd*/
  *(_DWORD *)(this + 3584) = 7; /*0x5236c7*/
  *(_DWORD *)(this + 3644) = 0; /*0x5236d1*/
  *(_DWORD *)(this + 3648) = 0; /*0x5236d7*/
  *(_DWORD *)(this + 3652) = 0; /*0x5236e3*/
  *(_DWORD *)(this + 3656) = 0; /*0x5236ea*/
  *(_DWORD *)(this + 3660) = 0; /*0x5236f3*/
  AnimTypeVector::Constructor((_DWORD *)(this + 3664), 0, 0); /*0x5236f9*/
  *(_DWORD *)(this + 3680) = 0; /*0x523703*/
  *(_DWORD *)(this + 3684) = 10; /*0x523706*/
  *(_DWORD *)(this + 3664) = &vt_TypeList_AnimTypeClass_const; /*0x523709*/
  AnimTypeVector::Constructor((_DWORD *)(this + 3692), 0, 0); /*0x523719*/
  *(_DWORD *)(this + 3712) = 10; /*0x52371e*/
  *(_DWORD *)(this + 3708) = 0; /*0x523721*/
  *(_DWORD *)(this + 3692) = &vt_TypeList_AnimTypeClass_const; /*0x523724*/
  VectorClass::Construct((_DWORD *)(this + 3720), 0, 0); /*0x523734*/
  *(_DWORD *)(this + 3740) = 10; /*0x523739*/
  *(_DWORD *)(this + 3736) = 0; /*0x52373c*/
  *(_DWORD *)(this + 3720) = &vt_TypeList_int; /*0x52373f*/
  *(_DWORD *)(this + 3748) = -1; /*0x523748*/
  *(_DWORD *)(this + 3752) = -1; /*0x52374e*/
  *(_BYTE *)(this + 3756) = 0; /*0x523754*/
  *(_BYTE *)(this + 3757) = 0; /*0x52375a*/
  *(_BYTE *)(this + 3758) = 0; /*0x523760*/
  *(_DWORD *)(this + 3760) = 0; /*0x523766*/
  *(_BYTE *)(this + 3764) = 0; /*0x52376c*/
  *(_BYTE *)(this + 3765) = 0; /*0x523772*/
  *(_DWORD *)(this + 3768) = 1; /*0x523778*/
  *(_BYTE *)(this + 3772) = 0; /*0x523782*/
  *(_BYTE *)(this + 3773) = 1; /*0x523788*/
  *(_BYTE *)(this + 3774) = 0; /*0x52378f*/
  *(_BYTE *)(this + 3775) = 0; /*0x523795*/
  *(_BYTE *)(this + 3776) = 0; /*0x52379b*/
  *(_BYTE *)(this + 3777) = 0; /*0x5237a1*/
  *(_BYTE *)(this + 3778) = 0; /*0x5237a7*/
  *(_BYTE *)(this + 3779) = 0; /*0x5237ad*/
  *(_BYTE *)(this + 3780) = 0; /*0x5237b6*/
  *(_BYTE *)(this + 3781) = 0; /*0x5237bc*/
  *(_BYTE *)(this + 3782) = 0; /*0x5237c3*/
  *(_BYTE *)(this + 3783) = 0; /*0x5237c9*/
  *(_BYTE *)(this + 3784) = 0; /*0x5237cf*/
  *(_BYTE *)(this + 3785) = 1; /*0x5237d5*/
  *(_BYTE *)(this + 3786) = 0; /*0x5237dc*/
  *(_BYTE *)(this + 3787) = 0; /*0x5237e2*/
  *(_DWORD *)this = &InfantryTypeClass::`vftable'; /*0x5237e8*/
  *(_DWORD *)(this + 4) = &InfantryTypeClass::`vftable'; /*0x5237ee*/
  *(_DWORD *)(this + 8) = &InfantryTypeClass::`vftable'; /*0x5237f4*/
  *(_DWORD *)(this + 12) = &vt_InfantryTypeClass; /*0x5237fb*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x523802*/
  v3 = *(InfantryTypeClass **)&MEMORY[0xA8D63C].__pad_BC0[348]; /*0x523807*/
  if ( *(int *)&MEMORY[0xA8D63C].__pad_BC0[348] < *(int *)&MEMORY[0xA8D63C].__pad_BC0[340] /*0x523845*/
    || (MEMORY[0xA8D63C].__pad_BC0[345] || !*(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[340])
    && *(int *)&MEMORY[0xA8D63C].__pad_BC0[352] > 0
    && (v4 = (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[332] + 8))(
               &MEMORY[0xA8D63C].__pad_BC0[332],
               *(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[340] + *(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[352],
               0) == 0,
        v3 = *(InfantryTypeClass **)&MEMORY[0xA8D63C].__pad_BC0[348],
        !v4) )
  {
    *(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[348] = &v3->vtable0[1]; /*0x52384a*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[336] + 4 * (_DWORD)v3) = this; /*0x523854*/
    v3 = *(InfantryTypeClass **)&MEMORY[0xA8D63C].__pad_BC0[348]; /*0x523857*/
  }
  v5 = 0; /*0x52385c*/
  if ( (int)v3 <= 0 ) /*0x523860*/
  {
LABEL_11:
    v5 = -1; /*0x523874*/
  }
  else
  {
    v6 = *(CCINIClass **)&MEMORY[0xA8D63C].__pad_BC0[336]; /*0x523862*/
    while ( *(_DWORD *)v6->__pad_0 != this ) /*0x52386a*/
    {
      ++v5; /*0x52386c*/
      v6 = (CCINIClass *)((char *)v6 + 4); /*0x52386d*/
      if ( v5 >= (int)v3 ) /*0x523872*/
        goto LABEL_11; /*0x523872*/
    }
  }
  *(_DWORD *)(this + 3576) = v5; /*0x52387e*/
  *(_DWORD *)(this + 3592) = 0; /*0x523886*/
  *(_DWORD *)(this + 3588) = 0; /*0x523890*/
  *(_DWORD *)(this + 3596) = 0; /*0x523896*/
  *(_DWORD *)(this + 3604) = 0; /*0x523899*/
  *(_DWORD *)(this + 3608) = 0; /*0x52389f*/
  *(_BYTE *)(this + 3612) = 0; /*0x5238a5*/
  *(_DWORD *)(this + 3600) = 0; /*0x5238ab*/
  *(_DWORD *)(this + 3616) = 0; /*0x5238b4*/
  *(_DWORD *)(this + 3632) = 0; /*0x5238ba*/
  *(_DWORD *)(this + 3620) = 0; /*0x5238c0*/
  *(_DWORD *)(this + 3636) = 0; /*0x5238c3*/
  *(_BYTE *)(this + 3640) = 0; /*0x5238c9*/
  *(_DWORD *)(this + 1816) = 8; /*0x5238cf*/
  *(_DWORD *)(this + 3624) = 0; /*0x5238d9*/
  *(_BYTE *)(this + 3227) = 0; /*0x5238dc*/
  *(_BYTE *)(this + 557) = 1; /*0x5238e2*/
  *(_BYTE *)(this + 3276) = 0; /*0x5238e9*/
  *(_DWORD *)(this + 3628) = 0; /*0x5238ef*/
  *(_BYTE *)(this + 3277) = 0; /*0x5238f2*/
  *(_BYTE *)(this + 3381) = 0; /*0x5238f8*/
  *(_BYTE *)(this + 3382) = 0; /*0x5238fe*/
  *(_BYTE *)(this + 3387) = 0; /*0x523904*/
  *(_BYTE *)(this + 3384) = 1; /*0x52390a*/
  *(_BYTE *)(this + 3479) = 1; /*0x523911*/
  *(_BYTE *)(this + 3478) = 0; /*0x523918*/
  *(_BYTE *)(this + 3374) = 0; /*0x52391e*/
  *(_DWORD *)(this + 3644) = __2_YAPAXI_Z(0x5E8u); /*0x52392c*/
  for ( i = 0; i < 1512; *(_DWORD *)(i + *(_DWORD *)(this + 3644) - 20) = 0 ) /*0x523932*/
  {
    i += 36; /*0x52393a*/
    *(_DWORD *)(i + *(_DWORD *)(this + 3644) - 36) = 0; /*0x523942*/
    *(_DWORD *)(i + *(_DWORD *)(this + 3644) - 32) = 0; /*0x52394c*/
    *(_DWORD *)(i + *(_DWORD *)(this + 3644) - 28) = 0; /*0x523956*/
    *(_DWORD *)(i + *(_DWORD *)(this + 3644) - 24) = -1; /*0x523960*/
  }
  return this; /*0x523972*/
}


// ==== 0x00523980  InfantryTypeClass::Constructor  this=InfantryTypeClass  sig=csp ====
_DWORD *__thiscall InfantryTypeClass::Constructor_523980(_DWORD *this, ObjectTypeClass *aP1)
{
  TechnoTypeClass::Construct((int)this, aP1); /*0x523988*/
  this->qE50 = &vt_TypeList_AnimTypeClass_const; /*0x523992*/
  this->qE6C = &vt_TypeList_AnimTypeClass_const; /*0x523998*/
  this->qE88 = &vt_TypeList_int; /*0x52399e*/
  *this = &InfantryTypeClass::`vftable'; /*0x5239a8*/
  this->vtable2 = &InfantryTypeClass::`vftable'; /*0x5239ae*/
  this->vtable3 = &InfantryTypeClass::`vftable'; /*0x5239b5*/
  this->vtable4 = &vt_InfantryTypeClass; /*0x5239bc*/
  return this; /*0x5239c5*/
}


// ==== 0x005239D0  InfantryClass::ProcessAnimation  this=InfantryTypeClass  sig=csp ====
int __fastcall InfantryClass::ProcessAnimation(int this, AbstractClass *a2)
{
  int eax1; // eax
  CCINIClass *v3; // eax
  CCINIClass *v4; // eax
  CCINIClass *v5; // eax
  InfantryTypeClass *v7; // [esp+8h] [ebp-4h] BYREF

  LOBYTE(a2) = 1; /*0x5239d5*/
  *(_DWORD *)this = &InfantryTypeClass::`vftable'; /*0x5239d7*/
  *(_DWORD *)(this + 4) = &InfantryTypeClass::`vftable'; /*0x5239dd*/
  *(_DWORD *)(this + 8) = &InfantryTypeClass::`vftable'; /*0x5239e4*/
  *(_DWORD *)(this + 12) = &vt_InfantryTypeClass; /*0x5239eb*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, a2); /*0x5239f2*/
  v7 = (InfantryTypeClass *)this; /*0x523a07*/
  eax1 = (*(int (__thiscall **)(char *, InfantryTypeClass **))(*(_DWORD *)&HouseClass_Player.__pad_5568[20628] + 16))( /*0x523a0b*/
           &HouseClass_Player.__pad_5568[20628],
           &v7);
  if ( eax1 != -1 && eax1 < *(int *)&HouseClass_Player.__pad_5568[20644] ) /*0x523a1b*/
  {
    --*(_DWORD *)&HouseClass_Player.__pad_5568[20644]; /*0x523a20*/
    for ( ; /*0x523a26*/
          eax1 < *(int *)&HouseClass_Player.__pad_5568[20644];
          *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[20632] + 4 * eax1 - 4) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[20632]
                                                                                                  + 4 * eax1) )
    {
      ++eax1; /*0x523a2e*/
    }
  }
  OperatorDelete(*(_DWORD *)(this + 3644)); /*0x523a47*/
  *(_DWORD *)(this + 3644) = 0; /*0x523a51*/
  v3 = *(_DWORD *)(this + 3724); /*0x523a57*/
  *(_DWORD *)(this + 3720) = &vt_VectorClass_int; /*0x523a5f*/
  if ( v3 && *(_BYTE *)(this + 3733) ) /*0x523a6b*/
  {
    OperatorDelete(v3); /*0x523a74*/
    *(_DWORD *)(this + 3724) = 0; /*0x523a7c*/
  }
  *(_BYTE *)(this + 3733) = 0; /*0x523a82*/
  *(_DWORD *)(this + 3728) = 0; /*0x523a88*/
  v4 = *(_DWORD *)(this + 3696); /*0x523a8e*/
  *(_DWORD *)(this + 3692) = &vt_VectorClass_AnimTypeClass_const; /*0x523a94*/
  if ( v4 && *(_BYTE *)(this + 3705) ) /*0x523aa2*/
  {
    OperatorDelete(v4); /*0x523aab*/
    *(_DWORD *)(this + 3696) = 0; /*0x523ab3*/
  }
  *(_BYTE *)(this + 3705) = 0; /*0x523ab9*/
  *(_DWORD *)(this + 3700) = 0; /*0x523abf*/
  v5 = *(_DWORD *)(this + 3668); /*0x523ac5*/
  *(_DWORD *)(this + 3664) = &vt_VectorClass_AnimTypeClass_const; /*0x523acb*/
  if ( v5 && *(_BYTE *)(this + 3677) ) /*0x523ad9*/
  {
    OperatorDelete(v5); /*0x523ae2*/
    *(_DWORD *)(this + 3668) = 0; /*0x523aea*/
  }
  *(_BYTE *)(this + 3677) = 0; /*0x523af2*/
  *(_DWORD *)(this + 3672) = 0; /*0x523af8*/
  return TechnoTypeClass::DTOR(this); /*0x523b03*/
}


// ==== 0x00523B10  InfantryTypeClass::ConstructInfantry  this=InfantryTypeClass  sig=csp ====
InfantryClass *__thiscall InfantryTypeClass::ConstructInfantry(AbstractClass *this, AbstractClass *ppv)
{
  int v3; // eax

  v3 = __2_YAPAXI_Z(0x6F0u); /*0x523b18*/
  if ( v3 ) /*0x523b22*/
    return (InfantryClass *)InfantryClass::Construct(v3, this, ppv); /*0x523b2c*/
  else
    return 0; /*0x523b35*/
}


// ==== 0x00523B40  InfantryTypeClass::CreateInfantry  this=InfantryTypeClass  sig=csp ====
char __thiscall InfantryTypeClass::CreateInfantry(AbstractClass *this, __int16 *a2, AbstractClass *ppv)
{
  int v4; // eax
  InfantryClass *v5; // esi
  int v6; // eax
  _DWORD *v7; // eax
  int *v8; // eax
  int v9; // ecx
  int v10; // edx
  _DWORD v12[3]; // [esp+4h] [ebp-24h] BYREF
  _DWORD v13[3]; // [esp+10h] [ebp-18h] BYREF
  int a1[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v4 = __2_YAPAXI_Z(0x6F0u); /*0x523b4b*/
  if ( v4 ) /*0x523b55*/
  {
    v5 = (InfantryClass *)InfantryClass::Construct(v4, this, ppv); /*0x523b68*/
    if ( v5 ) /*0x523b6c*/
    {
      v6 = a2[1] << 8; /*0x523b85*/
      v12[0] = (*a2 << 8) + 128; /*0x523b93*/
      v12[1] = v6 + 128; /*0x523b9b*/
      v12[2] = 0; /*0x523bb1*/
      v7 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)v12); /*0x523bb9*/
      v8 = ObjectPlacement::CalcPosition(v7, a1, (IUnknown *)v12, 0, 0, 0); /*0x523bc0*/
      v13[0] = *v8; /*0x523bcf*/
      v9 = v8[1]; /*0x523bd5*/
      v13[1] = v9; /*0x523bd9*/
      v10 = v8[2]; /*0x523bdd*/
      v13[2] = v10; /*0x523be0*/
      if ( v13[0] != *(_DWORD *)&HouseClass_Player.__pad_5568[24524] /*0x523bf4*/
        || v9 != *(_DWORD *)&HouseClass_Player.__pad_5568[24528]
        || v10 != *(_DWORD *)&HouseClass_Player.__pad_5568[24532] )
      {
        return (*(char (__thiscall **)(InfantryClass *, _DWORD *, int))(*(_DWORD *)v5->__pad_0 + 216))(v5, v13, 64); /*0x523c0b*/
      }
      (*(void (__thiscall **)(InfantryClass *, int))(*(_DWORD *)v5->__pad_0 + 32))(v5, 1); /*0x523c14*/
    }
  }
  return 0; /*0x523c07*/
}


// ==== 0x00523C20  InfantryTypeClass::GetDimensions  this=InfantryTypeClass  sig=csp ====
int *__stdcall InfantryTypeClass::_vt36(int a1)
{
  if ( (MEMORY[0xA8F2C8] & 1) == 0 ) /*0x523c2b*/
  {
    MEMORY[0xA8F2C8] |= 1u; /*0x523c46*/
    MEMORY[0xA8F28C] = 0; /*0x523c4c*/
    MEMORY[0xA8F290] = 2147450879; /*0x523c64*/
    atexit(nullsub_147); /*0x523c6a*/
  }
  return &MEMORY[0xA8F28C]; /*0x523c78*/
}


// ==== 0x00523C80  nullsub_147  this=-  sig=ida-proto ====
void __cdecl nullsub_147()
{
  ; /*0x523c80*/
}


// ==== 0x00523C90  Factory::FindExitCellByName  this=Factory  sig=csp ====
int __thiscall Factory::FindExitCellByName(void *this)
{
  int v2; // esi

  if ( !_strcmpi(this, &stru_817460.sectionHead[1]) ) /*0x523c9a*/
    return -1; /*0x523c9a*/
  if ( !_strcmpi(this, g_Str_none) ) /*0x523cac*/
    return -1; /*0x523cac*/
  v2 = 0; /*0x523cbd*/
  if ( *(int *)&HouseClass_Player.__pad_5568[20644] <= 0 ) /*0x523cc1*/
    return -1; /*0x523ce6*/
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[20632] + 4 * v2) + 36), this) ) /*0x523cda*/
  {
    if ( ++v2 >= *(int *)&HouseClass_Player.__pad_5568[20644] ) /*0x523ce4*/
      return -1; /*0x523ce4*/
  }
  return v2; /*0x523ce6*/
}


// ==== 0x00523D00  AnimSequence::Parse  this=AnimSequence  sig=csp ====
unsigned __int8 **__thiscall AnimSequence_Parse(int this)
{
  unsigned __int8 **result; // eax
  int v3; // esi
  int v4; // ebx
  _DWORD *v5; // ebp
  unsigned __int8 *v6; // eax
  char *v7; // eax
  int v8; // edi
  char *v9; // eax
  int Index; // esi
  int v11; // edx
  char *v12; // ecx
  int v13; // ebx
  int v14; // edx
  char v15; // [esp+4h] [ebp-120h] BYREF
  int v16; // [esp+5h] [ebp-11Fh]
  int v17; // [esp+9h] [ebp-11Bh]
  char v18; // [esp+Dh] [ebp-117h]
  const char **v19; // [esp+10h] [ebp-114h]
  int v20; // [esp+14h] [ebp-110h]
  int v21; // [esp+18h] [ebp-10Ch]
  char Buffer[32]; // [esp+1Ch] [ebp-108h] BYREF
  char Destination[32]; // [esp+3Ch] [ebp-E8h] BYREF
  char v24[200]; // [esp+5Ch] [ebp-C8h] BYREF

  result = (unsigned __int8 **)INIClass::GetString( /*0x523d26*/
                                 (unsigned __int8 ***)&MEMORY[0x887180],
                                 (unsigned __int8 *)(this + 504),
                                 (unsigned __int8 *)MEMORY[0x8258E8],
                                 &MEMORY[0x889F64],
                                 Destination,
                                 32);
  if ( (int)result > 0 ) /*0x523d2d*/
  {
    v3 = *(_DWORD *)(this + 3644); /*0x523d33*/
    result = (unsigned __int8 **)MEMORY[0x8255C8]; /*0x523d3f*/
    v4 = -12 - v3; /*0x523d44*/
    v21 = v3; /*0x523d48*/
    v19 = (const char **)MEMORY[0x8255C8]; /*0x523d4c*/
    v5 = (_DWORD *)(v3 + 12); /*0x523d50*/
    v20 = -12 - v3; /*0x523d53*/
    do /*0x524086*/
    {
      v6 = *result; /*0x523d5d*/
      v15 = MEMORY[0x889F64]; /*0x523d61*/
      v16 = 0; /*0x523d65*/
      v17 = 0; /*0x523d6d*/
      v18 = 0; /*0x523d73*/
      if ( (int)INIClass::GetString( /*0x523d8f*/
                  (unsigned __int8 ***)&MEMORY[0x887180],
                  (unsigned __int8 *)Destination,
                  v6,
                  &MEMORY[0x889F64],
                  Buffer,
                  32) > 0 )
      {
        sscanf(Buffer, MEMORY[0x8258DC], v5 - 3, v5 - 2, v5 - 1, &v15); /*0x523db0*/
        if ( !strcmp(MEMORY[0x8258D8], &v15) ) /*0x523dc7*/
        {
          *v5 = 0; /*0x523dee*/
        }
        else if ( !strcmp(MEMORY[0x8258D4], &v15) ) /*0x523e05*/
        {
          *v5 = 1; /*0x523e2c*/
        }
        else if ( !strcmp(MEMORY[0x8258D0], &v15) ) /*0x523e47*/
        {
          *v5 = 2; /*0x523e6e*/
        }
        else if ( !strcmp(MEMORY[0x8258CC], &v15) ) /*0x523e89*/
        {
          *v5 = 3; /*0x523eb0*/
        }
        else if ( !strcmp(MEMORY[0x8258C8], &v15) ) /*0x523ecb*/
        {
          *v5 = 4; /*0x523ef2*/
        }
        else if ( !strcmp(MEMORY[0x8258C4], &v15) ) /*0x523f0d*/
        {
          *v5 = 5; /*0x523f34*/
        }
        else if ( !strcmp(MEMORY[0x8258C0], &v15) ) /*0x523f4c*/
        {
          *v5 = 6; /*0x523f73*/
        }
        else if ( !strcmp(MEMORY[0x8258BC], &v15) ) /*0x523f8b*/
        {
          *v5 = 7; /*0x523fb2*/
        }
      }
      sprintf(v24, MEMORY[0x8258B0], *v19); /*0x523fca*/
      if ( (int)INIClass::GetString( /*0x523ff4*/
                  (unsigned __int8 ***)&MEMORY[0x887180],
                  (unsigned __int8 *)Destination,
                  (unsigned __int8 *)v24,
                  &MEMORY[0x889F64],
                  Buffer,
                  32) > 0 )
      {
        v7 = strtok(Buffer, stru_8258AC); /*0x524000*/
        while ( v7 ) /*0x52400a*/
        {
          v8 = atoi(v7); /*0x524019*/
          v9 = strtok(0, stru_8258AC); /*0x52401b*/
          if ( !v9 ) /*0x524025*/
            break; /*0x524025*/
          Index = VocClass::FindIndex(v9); /*0x524035*/
          v7 = strtok(0, stru_8258AC); /*0x524037*/
          if ( Index != -1 ) /*0x524042*/
          {
            v11 = v5[1]; /*0x524044*/
            if ( v11 < 2 ) /*0x52404a*/
            {
              v12 = (char *)v5 + v4; /*0x52404c*/
              v13 = (int)&v5[2 * v11] + v4; /*0x52404f*/
              v14 = v21; /*0x524052*/
              *(_DWORD *)(v13 + v21 + 20) = v8; /*0x524056*/
              v4 = v20; /*0x52405d*/
              *(_DWORD *)&v12[8 * v5[1]++ + 24 + v14] = Index; /*0x524065*/
            }
          }
        }
      }
      v5 += 9; /*0x524077*/
      result = (unsigned __int8 **)++v19; /*0x52407a*/
    }
    while ( (int)v19 < (int)g_INI_Key_SecondaryProne ); /*0x524086*/
  }
  return result; /*0x52408f*/
}


// ==== 0x005240A0  InfantryTypeClass::LoadFromINI  this=InfantryTypeClass  sig=csp ====
char __thiscall InfantryTypeClass::LoadFromINI(int this, unsigned __int8 ***a2)
{
  int PipIdx; // eax
  WeaponTypeClass *v5; // ebx
  WeaponTypeClass *v6; // eax
  WeaponTypeClass *v7; // ebx
  WeaponTypeClass *v8; // eax
  INIClass *inited; // eax
  VectorClass *v10; // eax
  AbstractClass *i; // eax
  VectorClass *v12; // ecx
  int v13; // edx
  AbstractClass *j; // eax
  char Bool_Overwrite; // al
  int v16; // ebx
  int Index; // eax
  int v18; // ebx
  int v19; // eax
  char v20; // al
  char v21; // cl
  char v22; // al
  char v23; // al
  char v24; // cl
  char v25; // al
  int Int_Overwrite; // eax
  char v27; // cl
  char v28; // al
  char v29; // al
  char v30; // cl
  char v31; // al
  char v32; // al
  char v33; // cl
  char v34; // al
  char v35; // al
  char v36; // cl
  char v37; // al
  char v38; // al
  int v39; // eax
  CCINIClass *v40; // ecx
  int v41; // eax
  void **v43[2]; // [esp-1Ch] [ebp-E8h] BYREF
  INIClass *v44; // [esp-14h] [ebp-E0h]
  VectorClass *v45; // [esp-10h] [ebp-DCh]
  CCINIClass *v46; // [esp-Ch] [ebp-D8h]
  CCINIClass *p_unknown30; // [esp-8h] [ebp-D4h]
  int v48; // [esp-4h] [ebp-D0h]
  double v49; // [esp+0h] [ebp-CCh]
  unsigned __int8 ***v50; // [esp+8h] [ebp-C4h]
  VectorClass *INIClassIntList; // [esp+10h] [ebp-BCh] BYREF
  VectorClass v52; // [esp+14h] [ebp-B8h] BYREF
  DynamicVector aP1; // [esp+30h] [ebp-9Ch] BYREF

  INIClass::ResetSection(a2); /*0x5240b5*/
  v48 = (int)a2; /*0x5240ba*/
  *(_BYTE *)(this + 3215) = 0; /*0x5240bd*/
  if ( !ObjectTypeClass::LoadExtras((CCINIClass *)v48, v49, v50) ) /*0x5240c4*/
    return 0; /*0x524751*/
  *(_DWORD *)(this + 3580) = INIClass::GetPipIdx(a2, (CCINIClass *)(this + 36), aPip, *(BaseClass **)(this + 3580)); /*0x5240e8*/
  PipIdx = INIClass::GetPipIdx(a2, (CCINIClass *)(this + 36), &unk_825A60, *(BaseClass **)(this + 3584)); /*0x5240fd*/
  v5 = *(WeaponTypeClass **)(this + 3588); /*0x524102*/
  v48 = 128; /*0x52410c*/
  p_unknown30 = (CCINIClass *)&aP1.field_1C; /*0x524111*/
  v46 = (CCINIClass *)&stru_87C374.__pad_579C[33876]; /*0x524112*/
  v45 = (VectorClass *)&unk_825A50; /*0x524117*/
  v44 = (INIClass *)(this + 36); /*0x52411c*/
  *(_DWORD *)(this + 3584) = PipIdx; /*0x52411f*/
  if ( INIClass::GetString(a2, v44, (unsigned __int8 *)v45, (INIClass *)v46, (INIClass *)p_unknown30, v48) ) /*0x524125*/
    v6 = InfantryTypeClass::Find((ObjectClass *)&aP1.field_1C); /*0x524132*/
  else
    v6 = v5; /*0x524139*/
  v7 = *(WeaponTypeClass **)(this + 3616); /*0x52413b*/
  *(_DWORD *)(this + 3588) = v6; /*0x524141*/
  if ( INIClass::GetString( /*0x52415e*/
         a2,
         (INIClass *)(this + 36),
         &unk_825A3C,
         (INIClass *)&stru_87C374.__pad_579C[33876],
         (INIClass *)&aP1.field_1C,
         128) )
  {
    v8 = InfantryTypeClass::Find((ObjectClass *)&aP1.field_1C); /*0x52416b*/
  }
  else
  {
    v8 = v7; /*0x524172*/
  }
  *(_DWORD *)(this + 3616) = v8; /*0x52417f*/
  INIClassIntList = (VectorClass *)v43; /*0x524186*/
  DynamicVectorClass::Copy(v43, (DynamicVector *)(this + 3720)); /*0x52418a*/
  INIClassIntList->vtable0 = &vt_TypeList_int; /*0x524198*/
  inited = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(this + 36)); /*0x5241a0*/
  INIClassIntList = GetINIClassIntList( /*0x5241b4*/
                      (int)&v52,
                      a2,
                      inited,
                      byte_825A2C,
                      v43[0],
                      v43[1],
                      (int)v44,
                      (__int16)v45,
                      (int)v46,
                      (int)p_unknown30,
                      v48);
  TypeList::Copy((_DWORD *)(this + 3720), INIClassIntList); /*0x5241b8*/
  v10 = INIClassIntList; /*0x5241bd*/
  *(_DWORD *)(this + 3736) = INIClassIntList[1].vtable0; /*0x5241c4*/
  *(_DWORD *)(this + 3740) = v10[1].Items; /*0x5241ca*/
  *(_DWORD *)(this + 3744) = v10[1].Capacity; /*0x5241d4*/
  v52.vtable0 = &vt_VectorClass_int; /*0x5241d7*/
  VectorClass::Destroy((int)&v52); /*0x5241df*/
  if ( INIClass::GetString( /*0x5241fb*/
         a2,
         (INIClass *)(this + 36),
         &unk_825A20,
         (INIClass *)&stru_87C374.__pad_579C[33876],
         (INIClass *)&aP1.field_1C,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor(&v52, 0, 0); /*0x524210*/
    v52.vtable0 = &vt_TypeList_AnimTypeClass_const; /*0x52421f*/
    for ( i = (AbstractClass *)strtok((char *)&aP1.field_1C, (ObjectClass *)&stru_817F40.nextObject); /*0x524231*/
          i;
          i = (AbstractClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
    {
      if ( !i->__pad_0[0] ) /*0x524233*/
        break; /*0x524236*/
      INIClassIntList = (VectorClass *)AnimTypeClass::FindOrCreate(i); /*0x524241*/
      if ( INIClassIntList ) /*0x524245*/
        DynamicVector::Add_Alt4(&v52, (VectorClass *)&INIClassIntList); /*0x524250*/
    }
    TypeList::AnimTypeCopy(&aP1, &v52); /*0x524271*/
    v52.vtable0 = &vt_VectorClass_AnimTypeClass_const; /*0x52427a*/
    DynamicVectorClass::Destroy_Alt((int)&v52); /*0x524282*/
  }
  else
  {
    TypeList::AnimTypeCopy(&aP1, (VectorClass *)(this + 3664)); /*0x524294*/
  }
  VectorClass::CopyDefault((_DWORD *)(this + 3664), (VectorClass *)&aP1); /*0x5242a6*/
  v12 = *(VectorClass **)aP1.__pad_14; /*0x5242af*/
  v13 = *(_DWORD *)&aP1.__pad_14[4]; /*0x5242b3*/
  *(_DWORD *)(this + 3680) = aP1.field_10; /*0x5242b7*/
  *(_DWORD *)(this + 3684) = v12; /*0x5242ba*/
  *(_DWORD *)(this + 3688) = v13; /*0x5242bd*/
  *(_DWORD *)aP1.__pad_0 = &vt_VectorClass_AnimTypeClass_const; /*0x5242c9*/
  DynamicVectorClass::Destroy_Alt((int)&aP1); /*0x5242cd*/
  if ( INIClass::GetString( /*0x5242e9*/
         a2,
         (INIClass *)(this + 36),
         &unk_825A14,
         (INIClass *)&stru_87C374.__pad_579C[33876],
         (INIClass *)&aP1.field_1C,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor(&v52, 0, 0); /*0x5242fa*/
    v52.vtable0 = &vt_TypeList_AnimTypeClass_const; /*0x524309*/
    for ( j = (AbstractClass *)strtok((char *)&aP1.field_1C, (ObjectClass *)&stru_817F40.nextObject); /*0x52431b*/
          j;
          j = (AbstractClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
    {
      if ( !j->__pad_0[0] ) /*0x52431d*/
        break; /*0x524320*/
      INIClassIntList = (VectorClass *)AnimTypeClass::FindOrCreate(j); /*0x52432b*/
      if ( INIClassIntList ) /*0x52432f*/
        DynamicVector::Add_Alt4(&v52, (VectorClass *)&INIClassIntList); /*0x52433a*/
    }
    TypeList::AnimTypeCopy(&aP1, &v52); /*0x52435b*/
    v52.vtable0 = &vt_VectorClass_AnimTypeClass_const; /*0x524364*/
    DynamicVectorClass::Destroy_Alt((int)&v52); /*0x524368*/
  }
  else
  {
    TypeList::AnimTypeCopy(&aP1, (VectorClass *)(this + 3692)); /*0x52437a*/
  }
  InfantryTypeClass::CopyDataArray((_DWORD *)(this + 3692), &aP1); /*0x52438c*/
  *(_DWORD *)(this + 3716) = *(_DWORD *)&aP1.__pad_14[4]; /*0x524399*/
  *(_DWORD *)aP1.__pad_0 = &vt_VectorClass_AnimTypeClass_const; /*0x52439c*/
  DynamicVectorClass::Destroy_Alt((int)&aP1); /*0x5243a4*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x5243b8*/
                     (int)a2,
                     (unsigned __int8 *)(this + 36),
                     &unk_825A0C,
                     *(_BYTE *)(this + 3756));
  LOBYTE(v48) = *(_BYTE *)(this + 3757); /*0x5243c5*/
  p_unknown30 = &unk_825A00; /*0x5243c6*/
  v46 = (CCINIClass *)(this + 36); /*0x5243cb*/
  *(_BYTE *)(this + 3756) = Bool_Overwrite; /*0x5243cc*/
  *(_BYTE *)(this + 3757) = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)v46, p_unknown30, v48); /*0x5243d7*/
  if ( *(_BYTE *)(this + 3756) ) /*0x5243dd*/
    *(_BYTE *)(this + 3215) = 1; /*0x5243e7*/
  v16 = *(_DWORD *)(this + 3748); /*0x5243ee*/
  if ( !INIClass::GetString( /*0x524420*/
          a2,
          (INIClass *)(this + 36),
          &unk_8259F0,
          (INIClass *)&stru_87C374.__pad_579C[33876],
          (INIClass *)&aP1.field_1C,
          128)
    || (Index = VocClass::FindIndex(&aP1.field_1C), Index == -1) )
  {
    Index = v16; /*0x524422*/
  }
  v18 = *(_DWORD *)(this + 3752); /*0x524424*/
  v48 = 128; /*0x52442e*/
  p_unknown30 = (CCINIClass *)&aP1.field_1C; /*0x524433*/
  v46 = (CCINIClass *)&stru_87C374.__pad_579C[33876]; /*0x524434*/
  v45 = (VectorClass *)&unk_8259E0; /*0x524439*/
  v44 = (INIClass *)(this + 36); /*0x52443e*/
  *(_DWORD *)(this + 3748) = Index; /*0x524441*/
  if ( !INIClass::GetString(a2, v44, (unsigned __int8 *)v45, (INIClass *)v46, (INIClass *)p_unknown30, v48) /*0x52445c*/
    || (v19 = VocClass::FindIndex(&aP1.field_1C), v19 == -1) )
  {
    v19 = v18; /*0x52445e*/
  }
  LOBYTE(v48) = *(_BYTE *)(this + 3772); /*0x524468*/
  p_unknown30 = &unk_8259D4; /*0x524469*/
  v46 = (CCINIClass *)(this + 36); /*0x52446e*/
  *(_DWORD *)(this + 3752) = v19; /*0x52446f*/
  *(_BYTE *)(this + 3772) = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)v46, p_unknown30, v48); /*0x52447a*/
  v20 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_8259C8, *(_BYTE *)(this + 3775)); /*0x52448f*/
  v21 = *(_BYTE *)(this + 3774); /*0x524494*/
  *(_BYTE *)(this + 3775) = v20; /*0x52449a*/
  v22 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_8259BC, v21); /*0x5244a9*/
  LOBYTE(v48) = *(_BYTE *)(this + 3758); /*0x5244b6*/
  p_unknown30 = &unk_8259B4; /*0x5244b7*/
  v46 = (CCINIClass *)(this + 36); /*0x5244bc*/
  *(_BYTE *)(this + 3774) = v22; /*0x5244bd*/
  *(_BYTE *)(this + 3758) = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)v46, p_unknown30, v48); /*0x5244c8*/
  v23 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_8259A8, *(_BYTE *)(this + 3764)); /*0x5244dd*/
  v24 = *(_BYTE *)(this + 3765); /*0x5244e2*/
  *(_BYTE *)(this + 3764) = v23; /*0x5244e8*/
  v25 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_82599C, v24); /*0x5244f7*/
  v48 = *(_DWORD *)(this + 3760); /*0x524504*/
  p_unknown30 = &unk_825988; /*0x524505*/
  v46 = (CCINIClass *)(this + 36); /*0x52450a*/
  *(_BYTE *)(this + 3765) = v25; /*0x52450b*/
  *(_DWORD *)(this + 3760) = INIClass::ReadInt_Overwrite((int)a2, (unsigned __int8 *)v46, p_unknown30, (INIClass *)v48); /*0x524516*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x52452b*/
                    (int)a2,
                    (unsigned __int8 *)(this + 36),
                    &unk_82597C,
                    *(INIClass **)(this + 3768));
  v27 = *(_BYTE *)(this + 3778); /*0x524530*/
  *(_DWORD *)(this + 3768) = Int_Overwrite; /*0x524536*/
  v28 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_825978, v27); /*0x524545*/
  LOBYTE(v48) = *(_BYTE *)(this + 3777); /*0x524552*/
  p_unknown30 = (CCINIClass *)&g_INI_Key_Easy.unknown30; /*0x524553*/
  v46 = (CCINIClass *)(this + 36); /*0x524558*/
  *(_BYTE *)(this + 3778) = v28; /*0x524559*/
  *(_BYTE *)(this + 3777) = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)v46, p_unknown30, v48); /*0x524564*/
  v29 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_82596C, *(_BYTE *)(this + 3779)); /*0x524579*/
  v30 = *(_BYTE *)(this + 3776); /*0x52457e*/
  *(_BYTE *)(this + 3779) = v29; /*0x524584*/
  v31 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_82595C, v30); /*0x524593*/
  LOBYTE(v48) = *(_BYTE *)(this + 3780); /*0x5245a0*/
  p_unknown30 = (CCINIClass *)&stru_8258AC.lineTrailer; /*0x5245a1*/
  v46 = (CCINIClass *)(this + 36); /*0x5245a6*/
  *(_BYTE *)(this + 3776) = v31; /*0x5245a7*/
  *(_BYTE *)(this + 3780) = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)v46, p_unknown30, v48); /*0x5245b2*/
  v32 = INIClass::ReadBool_Overwrite( /*0x5245c7*/
          (int)a2,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_8258AC.location[1],
          *(_BYTE *)(this + 3781));
  v33 = *(_BYTE *)(this + 3782); /*0x5245cc*/
  *(_BYTE *)(this + 3781) = v32; /*0x5245d2*/
  v34 = INIClass::ReadBool_Overwrite( /*0x5245e1*/
          (int)a2,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_8258AC.isAliveFlag,
          v33);
  LOBYTE(v48) = *(_BYTE *)(this + 3783); /*0x5245ee*/
  p_unknown30 = (CCINIClass *)&stru_8258AC.parachute; /*0x5245ef*/
  v46 = (CCINIClass *)(this + 36); /*0x5245f4*/
  *(_BYTE *)(this + 3782) = v34; /*0x5245f5*/
  *(_BYTE *)(this + 3783) = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)v46, p_unknown30, v48); /*0x524600*/
  v35 = INIClass::ReadBool_Overwrite( /*0x524615*/
          (int)a2,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_8258AC.visibilityFlags,
          *(_BYTE *)(this + 3784));
  v36 = *(_BYTE *)(this + 3785); /*0x52461a*/
  *(_BYTE *)(this + 3784) = v35; /*0x524620*/
  v37 = INIClass::ReadBool_Overwrite( /*0x52462f*/
          (int)a2,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_8258AC.bombVisible,
          v36);
  LOBYTE(v48) = *(_BYTE *)(this + 3786); /*0x52463c*/
  p_unknown30 = (CCINIClass *)&stru_8258AC.customSound_controller[3]; /*0x52463d*/
  v46 = (CCINIClass *)(this + 36); /*0x524642*/
  *(_BYTE *)(this + 3785) = v37; /*0x524643*/
  *(_BYTE *)(this + 3786) = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)v46, p_unknown30, v48); /*0x52464e*/
  *(_BYTE *)(this + 3787) = INIClass::ReadBool_Overwrite( /*0x524668*/
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)stru_8258AC.customSound_controller,
                              *(_BYTE *)(this + 3787));
  if ( *(_BYTE *)(this + 3778) ) /*0x52466e*/
    *(_BYTE *)(this + 3774) = 1; /*0x524678*/
  if ( *(_BYTE *)(this + 3779) ) /*0x52467f*/
    *(_BYTE *)(this + 3774) = 1; /*0x524689*/
  if ( *(_BYTE *)(this + 3780) ) /*0x524690*/
    *(_BYTE *)(this + 3774) = 1; /*0x52469a*/
  v38 = INIClass::ReadBool_Overwrite( /*0x5246b9*/
          (int)&stru_87C374.__pad_579C[22128],
          (unsigned __int8 *)(this + 504),
          (CCINIClass *)&stru_8258AC.ambientSoundController[3],
          *(_BYTE *)(this + 3773));
  v48 = *(_DWORD *)(this + 3648); /*0x5246c9*/
  p_unknown30 = (CCINIClass *)stru_8257B8.__pad_20; /*0x5246ca*/
  v46 = (CCINIClass *)(this + 504); /*0x5246cf*/
  *(_BYTE *)(this + 3773) = v38; /*0x5246d0*/
  *(_DWORD *)(this + 3648) = INIClass::ReadInt_Overwrite( /*0x5246db*/
                               (int)&stru_87C374.__pad_579C[22128],
                               (unsigned __int8 *)v46,
                               p_unknown30,
                               (INIClass *)v48);
  v39 = INIClass::ReadInt_Overwrite( /*0x5246f3*/
          (int)&stru_87C374.__pad_579C[22128],
          (unsigned __int8 *)(this + 504),
          &stru_8257B8,
          *(INIClass **)(this + 3652));
  v40 = *(CCINIClass **)(this + 3656); /*0x5246f8*/
  *(_DWORD *)(this + 3652) = v39; /*0x5246fe*/
  v41 = INIClass::ReadInt_Overwrite( /*0x524710*/
          (int)&stru_87C374.__pad_579C[22128],
          (unsigned __int8 *)(this + 504),
          (CCINIClass *)g_INI_Key_SecondaryProne.sectionHead,
          (INIClass *)v40);
  v48 = *(_DWORD *)(this + 3660); /*0x524720*/
  p_unknown30 = &g_INI_Key_SecondaryProne; /*0x524721*/
  v46 = (CCINIClass *)(this + 504); /*0x524726*/
  *(_DWORD *)(this + 3656) = v41; /*0x524727*/
  *(_DWORD *)(this + 3660) = INIClass::ReadInt_Overwrite( /*0x524734*/
                               (int)&stru_87C374.__pad_579C[22128],
                               (unsigned __int8 *)v46,
                               p_unknown30,
                               (INIClass *)v48);
  AnimSequence::Parse(this); /*0x52473a*/
  return 1; /*0x524741*/
}


// ==== 0x00524760  InfantryTypeClass::GetDefaultDimensions  this=InfantryTypeClass  sig=csp ====
_DWORD *__stdcall InfantryTypeClass::_vt31(_DWORD *a1)
{
  int v1; // esi

  v1 = 2 * MEMORY[0xA8F2CC]; /*0x52476c*/
  *a1 = 85; /*0x524777*/
  a1[1] = 85; /*0x524779*/
  a1[2] = v1; /*0x52477c*/
  return a1; /*0x52477f*/
}


// ==== 0x00524790  InfantryTypeClass::GetGameplayValue  this=InfantryTypeClass  sig=csp ====
int InfantryTypeClass::_vt45()
{
  return MEMORY[0x8871E0][1].?; /*0x52479b*/
}


// ==== 0x005247A0  InfantryTypeClass::StubReturnFalse  this=InfantryTypeClass  sig=csp ====
int InfantryTypeClass::_vt44()
{
  return 0; /*0x5247a2*/
}


// ==== 0x005247B0  InfantryTypeClass::j_?do_always_noconv_codecvt_base_std__MBE_NXZ_19  this=InfantryTypeClass  sig=csp ====
// attributes: thunk
bool __thiscall InfantryTypeClass::j__do_always_noconv_codecvt_base_std__MBE_NXZ_19(std::codecvt_base *this)
{
  return AbstractClass::processWeaponFire(this);
}


// ==== 0x005247C0  TechnoTypeClass::CanAttackMove_IgnoreWeapon_0  this=InfantryTypeClass  sig=ida-proto ====
// attributes: thunk
bool __thiscall TechnoTypeClass::CanAttackMove_IgnoreWeapon_0(int this)
{
  return TechnoTypeClass::CanAttackMove_IgnoreWeapon(this);
}


// ==== 0x005247D0  InfantryTypeClass::ClampToGroundHeight  this=InfantryTypeClass  sig=csp ====
_DWORD *__stdcall InfantryTypeClass::_vt27(_DWORD *a1, int *a2)
{
  int GroundHeight; // eax
  int v3; // ecx
  int v5; // [esp+0h] [ebp-Ch] BYREF
  int v6; // [esp+4h] [ebp-8h]
  int v7; // [esp+8h] [ebp-4h]

  v5 = *a2; /*0x5247d9*/
  v6 = a2[1]; /*0x5247ea*/
  v7 = a2[2]; /*0x5247f1*/
  GroundHeight = Cell::GetGroundHeight(&v5); /*0x5247f5*/
  v3 = v7; /*0x5247fa*/
  if ( v7 < GroundHeight ) /*0x524800*/
    v3 = Cell::GetGroundHeight(&v5); /*0x524811*/
  *a1 = v5; /*0x52481e*/
  a1[1] = v6; /*0x524824*/
  a1[2] = v3; /*0x524828*/
  return a1; /*0x52482b*/
}


// ==== 0x00524840  InfantryTypeClass::PowerDrainUpdate  this=InfantryTypeClass  sig=csp ====
int __thiscall InfantryTypeClass::_vt13(int this, int *a2)
{
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

  BuildingTypeClass::ProcessPower(this, a2); /*0x524849*/
  Power::TimerProcess(*(_DWORD *)(this + 3580)); /*0x524857*/
  Checksummer::Add_Buffer((unsigned int *)a2, *(unsigned __int8 **)(this + 3644), 1512); /*0x52486a*/
  Power::TimerProcess(*(_DWORD *)(this + 3648)); /*0x524878*/
  Power::TimerProcess(*(_DWORD *)(this + 3652)); /*0x524886*/
  Power::TimerProcess(*(_DWORD *)(this + 3736)); /*0x524894*/
  Power::TimerProcess(*(_DWORD *)(this + 3680)); /*0x5248a2*/
  Power::TimerProcess(*(_DWORD *)(this + 3708)); /*0x5248b0*/
  LOBYTE(v3) = *(_BYTE *)(this + 3772); /*0x5248b5*/
  Power::FlagProcess(a2, v3); /*0x5248be*/
  LOBYTE(v4) = *(_BYTE *)(this + 3773); /*0x5248c3*/
  v5 = Power::FlagProcess(a2, v4); /*0x5248cc*/
  LOBYTE(v5) = *(_BYTE *)(this + 3774); /*0x5248d1*/
  Power::FlagProcess(a2, v5); /*0x5248da*/
  LOBYTE(v6) = *(_BYTE *)(this + 3775); /*0x5248df*/
  Power::FlagProcess(a2, v6); /*0x5248e8*/
  LOBYTE(v7) = *(_BYTE *)(this + 3776); /*0x5248ed*/
  v8 = Power::FlagProcess(a2, v7); /*0x5248f6*/
  LOBYTE(v8) = *(_BYTE *)(this + 3777); /*0x5248fb*/
  Power::FlagProcess(a2, v8); /*0x524904*/
  LOBYTE(v9) = *(_BYTE *)(this + 3778); /*0x524909*/
  Power::FlagProcess(a2, v9); /*0x524912*/
  LOBYTE(v10) = *(_BYTE *)(this + 3779); /*0x524917*/
  v11 = Power::FlagProcess(a2, v10); /*0x524920*/
  LOBYTE(v11) = *(_BYTE *)(this + 3780); /*0x524925*/
  Power::FlagProcess(a2, v11); /*0x52492e*/
  LOBYTE(v12) = *(_BYTE *)(this + 3781); /*0x524933*/
  Power::FlagProcess(a2, v12); /*0x52493c*/
  LOBYTE(v13) = *(_BYTE *)(this + 3782); /*0x524941*/
  return Power::FlagProcess(a2, v13); /*0x52494f*/
}


// ==== 0x00524960  InfantryTypeClass::LoadTypeData  this=InfantryTypeClass  sig=csp ====
int __userpurge InfantryTypeClass::_vt05@<eax>(int a1@<ebp>, int a2, int a3, int a4)
{
  _DWORD *v4; // edi
  int v5; // ebx
  int v6; // esi
  int result; // eax
  int i; // ebx
  int j; // ebx
  int k; // ebx
  int m; // ebx
  void *v12; // eax
  int v13; // [esp+70h] [ebp-4h]

  v4 = (_DWORD *)a2; /*0x524964*/
  v5 = 0; /*0x524968*/
  if ( *(_DWORD *)(a2 + 3644) ) /*0x52496a*/
  {
    __3_YAXPAX_Z(*(void **)(a2 + 3644)); /*0x524975*/
    v4[911] = 0; /*0x52497d*/
  }
  v6 = a3; /*0x524983*/
  result = TechnoTypeClass::SaveLoad_Prefix((int)v4, a3); /*0x524989*/
  v13 = result; /*0x524990*/
  if ( result >= 0 ) /*0x524994*/
  {
    if ( v4 ) /*0x52499c*/
      InfantryTypeClass::Constructor_523980(v4, (int)&a2); /*0x5249a5*/
    VoxelAnimType::LoadAnim((char *)v4); /*0x5249ad*/
    ObjectTypeClass::Load2DArt((char *)v4); /*0x5249b4*/
    if ( v4 != (_DWORD *)-3720 ) /*0x5249c1*/
    {
      DynamicVectorClass::Construct(v4 + 930, 0, 0); /*0x5249c7*/
      v4[930] = &vt_TypeList_int; /*0x5249cc*/
    }
    (*(void (__stdcall **)(int, int *, int, _DWORD, int))(*(_DWORD *)v6 + 12))(v6, &a2, 4, 0, a1); /*0x5249de*/
    if ( a3 > 0 ) /*0x5249e7*/
    {
      do /*0x524a09*/
      {
        (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v6 + 12))(v6, &a4, 4, 0); /*0x5249f5*/
        DynamicVector::Add_Alt(v4 + 930, &a4); /*0x5249ff*/
        ++v5; /*0x524a04*/
      }
      while ( v5 < a3 ); /*0x524a09*/
    }
    if ( v4 != (_DWORD *)-3664 ) /*0x524a13*/
    {
      DynamicVectorClass::AnimTypeConstructor(v4 + 916, 0, 0); /*0x524a1b*/
      v4[916] = &vt_TypeList_AnimTypeClass_const; /*0x524a20*/
    }
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v6 + 12))(v6, &a3, 4, 0); /*0x524a33*/
    for ( i = 0; i < a3; ++i ) /*0x524a3e*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v6 + 12))(v6, &a4, 4, 0); /*0x524a4c*/
      DynamicVector::Add_Alt4(v4 + 916, &a4); /*0x524a56*/
    }
    for ( j = 0; j < v4[920]; ++j ) /*0x524a6c*/
      ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v4[917] + 4 * j)); /*0x524a7d*/
    if ( v4 != (_DWORD *)-3692 ) /*0x524a95*/
    {
      DynamicVectorClass::AnimTypeConstructor(v4 + 923, 0, 0); /*0x524a9d*/
      v4[923] = &vt_TypeList_AnimTypeClass_const; /*0x524aa2*/
    }
    (*(void (__stdcall **)(int, int *, int))(*(_DWORD *)v6 + 12))(v6, &a3, 4); /*0x524ab5*/
    for ( k = 0; k < a2; ++k ) /*0x524ac0*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v6 + 12))(v6, &a3, 4, 0); /*0x524ace*/
      DynamicVector::Add_Alt4(v4 + 923, &a3); /*0x524ad8*/
    }
    for ( m = 0; m < v4[927]; ++m ) /*0x524aef*/
      ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v4[924] + 4 * m)); /*0x524b00*/
    v12 = __2_YAPAXI_Z(0x5E8u); /*0x524b15*/
    v4[911] = v12; /*0x524b1d*/
    (*(void (__stdcall **)(int, void *, int, _DWORD))(*(_DWORD *)v6 + 12))(v6, v12, 1512, 0); /*0x524b2e*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v4 + 897); /*0x524b3d*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v4 + 904); /*0x524b4e*/
    return v13; /*0x524b53*/
  }
  return result; /*0x524b57*/
}


// ==== 0x00524B60  InfantryTypeClass::SaveLoad_Prefix  this=InfantryTypeClass  sig=csp ====
int __userpurge InfantryTypeClass::SaveLoad_Prefix@<eax>(int a1@<ebx>, _DWORD *a2, int *a3, int a4, int a5)
{
  int result; // eax
  int v6; // ebp
  int v7; // edx
  int i; // ebx
  int v9; // edx
  int j; // ebx
  int v11; // edx
  int k; // ebx

  result = TechnoTypeClass::SaveLoad_Prefix_0(a2, a3, a4); /*0x524b72*/
  v6 = result; /*0x524b77*/
  if ( result >= 0 ) /*0x524b7b*/
  {
    v7 = *a3; /*0x524b87*/
    a4 = a2[934]; /*0x524b94*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD, int))(v7 + 16))(a3, &a4, 4, 0, a1); /*0x524b98*/
    for ( i = 0; i < a5; ++i ) /*0x524ba3*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a3 + 16))(a3, a2[931] + 4 * i, 4, 0); /*0x524bb6*/
    v9 = *a3; /*0x524bc6*/
    a5 = a2[920]; /*0x524bd2*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v9 + 16))(a3, &a5, 4, 0); /*0x524bd6*/
    for ( j = 0; j < a5; ++j ) /*0x524be1*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a3 + 16))(a3, a2[917] + 4 * j, 4, 0); /*0x524bf4*/
    v11 = *a3; /*0x524c04*/
    a5 = a2[927]; /*0x524c10*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v11 + 16))(a3, &a5, 4, 0); /*0x524c14*/
    for ( k = 0; k < a5; ++k ) /*0x524c1f*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a3 + 16))(a3, a2[924] + 4 * k, 4, 0); /*0x524c32*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*a3 + 16))(a3, a2[911], 1512); /*0x524c4d*/
    return v6; /*0x524c52*/
  }
  return result; /*0x524c51*/
}


// ==== 0x00524C70  InfantryTypeClass::GetClassIdentifier  this=InfantryTypeClass  sig=csp ====
int __stdcall InfantryTypeClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x524c76*/
    return -2147467261; /*0x524c78*/
  *a2 = -1366608936; /*0x524c86*/
  a2[1] = 298976796; /*0x524c8e*/
  a2[2] = 1610654892; /*0x524c97*/
  a2[3] = -1252326136; /*0x524ca0*/
  return 0; /*0x524c7d*/
}


// ==== 0x00524CB0  KeywordType::FindOrCreate2  this=IUnknown  sig=csp ====
InfantryTypeClass *__thiscall KeywordType::FindOrCreate2(ObjectClass *Source)
{
  int v2; // esi
  int v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x524ccc*/
    return 0; /*0x524d2f*/
  v2 = 0; /*0x524cdd*/
  if ( *(int *)&HouseClass_Player.__pad_5568[20644] <= 0 ) /*0x524ce1*/
  {
LABEL_6:
    v3 = __2_YAPAXI_Z(0xED0u); /*0x524d06*/
    if ( v3 ) /*0x524d15*/
      return (InfantryTypeClass *)InfantryTypeClass::Constructor(v3, Source); /*0x524d21*/
    return 0; /*0x524d15*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[20632] + 4 * v2) + 36), Source) ) /*0x524cfa*/
  {
    if ( ++v2 >= *(int *)&HouseClass_Player.__pad_5568[20644] ) /*0x524d04*/
      goto LABEL_6; /*0x524d04*/
  }
  return *(InfantryTypeClass **)(*(_DWORD *)&HouseClass_Player.__pad_5568[20632] + 4 * v2); /*0x524d1f*/
}


// ==== 0x00524D40  InfantryTypeClass::GetTypeIdentifier  this=InfantryTypeClass  sig=csp ====
int InfantryTypeClass::_vt11()
{
  return 16; /*0x524d45*/
}


// ==== 0x00524D50  InfantryTypeClass::GetObjectSize  this=InfantryTypeClass  sig=csp ====
int InfantryTypeClass::_vt12()
{
  return 3792; /*0x524d55*/
}


// ==== 0x00524D60  InfantryTypeClass::GetAuxField  this=InfantryTypeClass  sig=csp ====
int __thiscall InfantryTypeClass::_vt16(_DWORD *this)
{
  return this->ArrayIndex; /*0x524d66*/
}


// ==== 0x00524D70  InfantryTypeClass::ddtor  this=InfantryTypeClass  sig=csp ====
InfantryTypeClass *__thiscall InfantryTypeClass::ddtor(int Block, char a2)
{
  int v3; // eax
  void *v4; // eax
  void *v5; // eax
  void *v6; // eax
  int v8; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)Block = &InfantryTypeClass::`vftable'; /*0x524d76*/
  *(_DWORD *)(Block + 4) = &InfantryTypeClass::`vftable'; /*0x524d7c*/
  *(_DWORD *)(Block + 8) = &InfantryTypeClass::`vftable'; /*0x524d83*/
  *(_DWORD *)(Block + 12) = &vt_InfantryTypeClass; /*0x524d8a*/
  AbstractClass::AnnounceExpiredPointer((void **)Block, 1); /*0x524d91*/
  v8 = Block; /*0x524da6*/
  v3 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xA8E348] + 16))(&MEMORY[0xA8E348], &v8); /*0x524daa*/
  if ( v3 != -1 && v3 < MEMORY[0xA8E358] && v3 < --MEMORY[0xA8E358] ) /*0x524dc5*/
  {
    do /*0x524ddd*/
    {
      ++v3; /*0x524dcd*/
      *((_DWORD *)MEMORY[0xA8E34C] + v3 - 1) = *((_DWORD *)MEMORY[0xA8E34C] + v3); /*0x524dd1*/
    }
    while ( v3 < MEMORY[0xA8E358] ); /*0x524ddd*/
  }
  OperatorDelete(*(void **)(Block + 3644)); /*0x524de7*/
  *(_DWORD *)(Block + 3644) = 0; /*0x524df1*/
  v4 = *(void **)(Block + 3724); /*0x524df7*/
  *(_DWORD *)(Block + 3720) = &vt_VectorClass_int; /*0x524dff*/
  if ( v4 && *(_BYTE *)(Block + 3733) ) /*0x524e0b*/
  {
    OperatorDelete(v4); /*0x524e14*/
    *(_DWORD *)(Block + 3724) = 0; /*0x524e1c*/
  }
  *(_BYTE *)(Block + 3733) = 0; /*0x524e22*/
  *(_DWORD *)(Block + 3728) = 0; /*0x524e28*/
  v5 = *(void **)(Block + 3696); /*0x524e2e*/
  *(_DWORD *)(Block + 3692) = &vt_VectorClass_AnimTypeClass_const; /*0x524e34*/
  if ( v5 && *(_BYTE *)(Block + 3705) ) /*0x524e42*/
  {
    OperatorDelete(v5); /*0x524e4b*/
    *(_DWORD *)(Block + 3696) = 0; /*0x524e53*/
  }
  *(_BYTE *)(Block + 3705) = 0; /*0x524e59*/
  *(_DWORD *)(Block + 3700) = 0; /*0x524e5f*/
  v6 = *(void **)(Block + 3668); /*0x524e65*/
  *(_DWORD *)(Block + 3664) = &vt_VectorClass_AnimTypeClass_const; /*0x524e6b*/
  if ( v6 && *(_BYTE *)(Block + 3677) ) /*0x524e79*/
  {
    OperatorDelete(v6); /*0x524e82*/
    *(_DWORD *)(Block + 3668) = 0; /*0x524e8a*/
  }
  *(_BYTE *)(Block + 3677) = 0; /*0x524e92*/
  *(_DWORD *)(Block + 3672) = 0; /*0x524e98*/
  TechnoTypeClass::DTOR(Block); /*0x524e9e*/
  if ( (a2 & 1) != 0 ) /*0x524eaa*/
    OperatorDelete((void *)Block); /*0x524ead*/
  return (InfantryTypeClass *)Block; /*0x524eb7*/
}


// ==== 0x00524EC0  ObjectClass::??0Iostream_init_QAE_XZ_4  this=ObjectClass  sig=csp ====
Iostream_init *__thiscall __0Iostream_init_QAE_XZ_4(Iostream_init *this)
{
  return this; /*0x524ec2*/
}


// ==== 0x00524ED0  _DynamicVectorClass_PBVAnimTypeClass::GetClassIdentifier  this=DynamicVector  sig=csp ====
void __thiscall WarheadTypeClass::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x524ed6*/
  *(_DWORD *)(this + 16) = 0; /*0x524ed9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x524ee0*/
  {
    __3_YAXPAX_Z(v2); /*0x524ee6*/
    *(_DWORD *)(this + 4) = 0; /*0x524eee*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x524ef1*/
  *(_DWORD *)(this + 8) = 0; /*0x524ef4*/
}


// ==== 0x00524F00  _DynamicVectorClass_PBVAnimTypeClass::LoadTypeData  this=DynamicVector  sig=csp ====
unsigned int __thiscall WarheadTypeClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x524f00*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x524f15*/
  else
    return 0; /*0x524f07*/
}


// ==== 0x00524F20  InfantryTypeClass::CopyDataArray  this=DynamicVectorClass  sig=csp ====
_DWORD *__thiscall InfantryTypeClass::CopyDataArray(_DWORD *this, DynamicVector *aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == (_DWORD *)aP1 ) /*0x524f2a*/
    goto LABEL_8; /*0x524f2a*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x524f2e*/
  v3 = aP1->field_8; /*0x524f31*/
  this->Capacity = v3; /*0x524f36*/
  if ( !v3 ) /*0x524f39*/
  {
    this->Items = 0; /*0x524f86*/
    this->IsAllocated = 0; /*0x524f8d*/
LABEL_8:
    this->Count = aP1->field_10; /*0x524f91*/
    this->CapacityIncrement = *(_DWORD *)aP1->__pad_14; /*0x524f9a*/
    return this; /*0x524f9d*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x524f43*/
  this->Items = v4; /*0x524f4b*/
  if ( !v4 ) /*0x524f50*/
    goto LABEL_8; /*0x524f50*/
  v5 = this->Capacity; /*0x524f52*/
  v6 = 0; /*0x524f55*/
  this->IsAllocated = 1; /*0x524f59*/
  if ( v5 <= 0 ) /*0x524f5d*/
    goto LABEL_8; /*0x524f5d*/
  do /*0x524f71*/
  {
    *(_DWORD *)(this->Items + 4 * v6) = *(_DWORD *)(*(_DWORD *)&aP1->field_1[3] + 4 * v6); /*0x524f68*/
    ++v6; /*0x524f6e*/
  }
  while ( v6 < this->Capacity ); /*0x524f71*/
  this->Count = aP1->field_10; /*0x524f76*/
  this->CapacityIncrement = *(_DWORD *)aP1->__pad_14; /*0x524f7c*/
  return this; /*0x524f81*/
}


// ==== 0x00524FB0  _VectorClass_PBVAnimTypeClass::SaveToINI  this=VectorClass  sig=csp ====
int __thiscall WarheadTypeClass::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x524fba*/
}


// ==== 0x00524FC0  ?$TypeList@PBVAnimTypeClass@@::QueryInterface  this=TypeList  sig=csp ====
TypeList *__thiscall WarheadTypeClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x524fc3*/
  *Block = &vt_VectorClass_AnimTypeClass_const; /*0x524fc6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x524fd0*/
  {
    __3_YAXPAX_Z(v3); /*0x524fd8*/
    *(Block + 1) = 0; /*0x524fe0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x524feb*/
  *(Block + 2) = 0; /*0x524ff1*/
  if ( (a2 & 1) != 0 ) /*0x524ff8*/
    __3_YAXPAX_Z(Block); /*0x524ffb*/
  return (TypeList *)Block; /*0x525005*/
}


// ==== 0x00525010  _VectorClass_PBVAnimTypeClass::Add  this=VectorClass  sig=csp ====
VectorClass *__thiscall DynamicVectorClass_AnimType::Add(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x525013*/
  *Block = &vt_VectorClass_AnimTypeClass_const; /*0x525016*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x525020*/
  {
    __3_YAXPAX_Z(v3); /*0x525028*/
    *(Block + 1) = 0; /*0x525030*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x52503b*/
  *(Block + 2) = 0; /*0x525041*/
  if ( (a2 & 1) != 0 ) /*0x525048*/
    __3_YAXPAX_Z(Block); /*0x52504b*/
  return (VectorClass *)Block; /*0x525055*/
}


// ==== 0x00525060  VectorClass::CopyDefault  this=DynamicVectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::CopyDefault(_DWORD *this, VectorClass *aP1)
{
  void *v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == (_DWORD *)aP1 ) /*0x52506a*/
    return this; /*0x52506a*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x52506e*/
  v3 = aP1->field_8; /*0x525071*/
  this->Capacity = v3; /*0x525076*/
  if ( !v3 ) /*0x525079*/
  {
    this->Items = 0; /*0x5250ba*/
    this->IsAllocated = 0; /*0x5250c1*/
    return this; /*0x5250c5*/
  }
  v4 = __2_YAPAXI_Z(4 * (_DWORD)v3); /*0x525083*/
  this->Items = v4; /*0x52508b*/
  if ( !v4 ) /*0x525090*/
    return this; /*0x525090*/
  v5 = this->Capacity; /*0x525092*/
  v6 = 0; /*0x525095*/
  this->IsAllocated = 1; /*0x525099*/
  if ( v5 <= 0 ) /*0x52509d*/
    return this; /*0x52509d*/
  do /*0x5250b1*/
  {
    *(_DWORD *)(this->Items + 4 * v6) = *(_DWORD *)(*(_DWORD *)&aP1->field_1[3] + 4 * v6); /*0x5250a8*/
    ++v6; /*0x5250ae*/
  }
  while ( v6 < this->Capacity ); /*0x5250b1*/
  return this; /*0x5250b5*/
}


// ==== 0x005250D0  _VectorClass_PBVAnimTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall WarheadTypeClass::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x5250d2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5250dd*/
  {
    v3 = 0; /*0x5250df*/
    if ( v2 <= 0 ) /*0x5250e3*/
      return 1; /*0x525103*/
    v4 = (_DWORD *)this->Items; /*0x5250e5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5250eb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5250f4*/
    {
      ++v3; /*0x5250f6*/
      ++v4; /*0x5250f7*/
      if ( v3 >= v2 ) /*0x5250fc*/
        return 1; /*0x5250fc*/
    }
  }
  return 0; /*0x5250fe*/
}


// ==== 0x00525110  _VectorClass_PBVAnimTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall DynamicVectorClass_AnimType::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x52511c*/
  {
    this->IsInitialized = 0; /*0x525126*/
    if ( a3 ) /*0x52512c*/
      v4 = a3; /*0x525142*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x52513e*/
    this->IsInitialized = 1; /*0x525146*/
    if ( v4 ) /*0x52514a*/
    {
      if ( this->Items ) /*0x525155*/
      {
        v6 = this->Capacity; /*0x52515c*/
        if ( a2 < v6 ) /*0x525161*/
          v6 = a2; /*0x525163*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x525169*/
          ++i; /*0x52516e*/
        if ( this->IsAllocated ) /*0x52517b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x525186*/
          this->Items = 0; /*0x52518e*/
        }
      }
      this->Items = v4; /*0x525197*/
      this->Capacity = a2; /*0x52519f*/
      this->IsAllocated = a3 == 0; /*0x5251a2*/
      return 1; /*0x5251a8*/
    }
    else
    {
      return 0; /*0x52514f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5251b2*/
    return 1; /*0x5251b8*/
  }
}


// ==== 0x005251C0  _VectorClass_PBVAnimTypeClass::Destroy_Alt  this=VectorClass  sig=csp ====
void __thiscall DynamicVectorClass_Destroy_Alt(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5251cd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5251d3*/
    *(_DWORD *)(this + 4) = 0; /*0x5251db*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5251de*/
  *(_DWORD *)(this + 8) = 0; /*0x5251e1*/
}


// ==== 0x005251F0  _VectorClass_PBVAnimTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall DynamicVectorClass_AnimType::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x5251f0*/
    return 0; /*0x5251f8*/
  v3 = *(_DWORD *)(this + 8); /*0x5251fe*/
  result = 0; /*0x525201*/
  if ( v3 <= 0 ) /*0x525205*/
    return -1; /*0x52521c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x52520b*/
  {
    if ( ++result >= v3 ) /*0x52521a*/
      return -1; /*0x52521a*/
  }
  return result; /*0x5251fa*/
}


// ==== 0x00525230  _VectorClass_PBVAnimTypeClass::Remove  this=VectorClass  sig=csp ====
unsigned int __thiscall DynamicVectorClass_AnimType::Remove(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x525230*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x525245*/
  else
    return 0; /*0x525237*/
}


// ==== 0x00525250  DynamicVectorClass::AnimTypeConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall DynamicVectorClass::AnimTypeConstructor(_DWORD *this, DynamicVector *aP1, DynamicVector *aP2)
{
  this->Items = 0; /*0x525259*/
  this->Capacity = aP1; /*0x525260*/
  this->q030 = 1; /*0x525263*/
  this->__pad_034 = 0; /*0x525267*/
  *this = &vt_VectorClass_AnimTypeClass_const; /*0x52526b*/
  if ( aP1 ) /*0x525271*/
  {
    if ( aP2 ) /*0x525279*/
    {
      this->Items = aP2; /*0x52527b*/
    }
    else
    {
      this->Items = __2_YAPAXI_Z(4 * (_DWORD)aP1); /*0x52528c*/
      this->__pad_034 = 1; /*0x52528f*/
    }
  }
  *this = &vt_DynamicVectorClass_AnimTypeClass_const; /*0x525293*/
  this->q005 = 10; /*0x525299*/
  this->q010 = 0; /*0x5252a0*/
  return this; /*0x5252a9*/
}


// ==== 0x005252B0  _DynamicVectorClass_PBVAnimTypeClass::Add  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall DynamicVectorClass_cptr_AnimTypeClass::Add(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5252b3*/
  *Block = &vt_VectorClass_AnimTypeClass_const; /*0x5252b6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5252c0*/
  {
    __3_YAXPAX_Z(v3); /*0x5252c8*/
    *(Block + 1) = 0; /*0x5252d0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5252db*/
  *(Block + 2) = 0; /*0x5252e1*/
  if ( (a2 & 1) != 0 ) /*0x5252e8*/
    __3_YAXPAX_Z(Block); /*0x5252eb*/
  return (DynamicVector *)Block; /*0x5252f5*/
}


// ==== 0x00525300  _DynamicVectorClass_PBVAnimTypeClass::Release  this=DynamicVector  sig=csp ====
char __thiscall WarheadTypeClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x52530c*/
  {
    this->IsInitialized = 0; /*0x525312*/
    if ( a3 ) /*0x525318*/
      v4 = a3; /*0x52532e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x52532a*/
    this->IsInitialized = 1; /*0x525332*/
    if ( !v4 ) /*0x525336*/
      return 0; /*0x5253aa*/
    if ( this->Items ) /*0x525338*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x52533f*/
      if ( a2 < v5 ) /*0x525344*/
        v5 = a2; /*0x525346*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x52534c*/
        ++i; /*0x525351*/
      if ( this->IsAllocated ) /*0x52535e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x525369*/
        this->Items = 0; /*0x525371*/
      }
    }
    this->Items = v4; /*0x52537a*/
    this->DynamicVector_field_0x8 = a2; /*0x525382*/
    this->IsAllocated = a3 == 0; /*0x525385*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x52538e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x525391*/
  if ( v7 < this->Items ) /*0x525399*/
    this->Items = v7; /*0x52539b*/
  return 1; /*0x52539e*/
}


// ==== 0x005253B0  DynamicVector::Add_Alt4  this=VectorClass  sig=csp ====
char __thiscall DynamicVector::Add_Alt4(_DWORD *this, VectorClass *aP1)
{
  MapClass *v3; // ecx
  int v4; // eax
  int v6; // eax
  VectorClass *v7; // edx

  v3 = (MapClass *)this->Capacity; /*0x5253b3*/
  if ( this->q010 >= (int)v3 ) /*0x5253bb*/
  {
    if ( !this->__pad_034 && v3 ) /*0x5253c6*/
      return 0; /*0x5253c6*/
    v4 = this->q005; /*0x5253c8*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, char *, _DWORD))(*this + 8))(this, (char *)v3 + v4, 0) ) /*0x5253d8*/
      return 0; /*0x5253df*/
  }
  v6 = this->q010; /*0x5253e5*/
  v7 = (VectorClass *)this->Items; /*0x5253e8*/
  this->q010 = v6 + 1; /*0x5253ee*/
  *(_DWORD *)&v7->vtable0[4 * v6] = *(_DWORD *)aP1->vtable0; /*0x5253f8*/
  return 1; /*0x5253e1*/
}


// ==== 0x00525400  _DynamicVectorClass_PBVAnimTypeClass::Init  this=DynamicVector  sig=csp ====
int __thiscall WarheadTypeClass::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x525400*/
  result = 0; /*0x525403*/
  if ( v2 <= 0 ) /*0x525408*/
    return -1; /*0x52541f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x52540e*/
  {
    if ( ++result >= v2 ) /*0x52541d*/
      return -1; /*0x52541d*/
  }
  return result; /*0x525422*/
}


// ==== 0x00525430  GetINIClassIntList  this=TypeList  sig=csp ====
VectorClass *__fastcall GetINIClassIntList(
        int a1,
        unsigned __int8 ***edx0,
        INIClass *aP1,
        unsigned __int8 *a2,
        void **a5,
        void *a6,
        int a7,
        __int16 a8,
        int a9,
        int a10,
        int a11)
{
  char *i; // eax
  void *_751520; // eax
  CCINIClass *v14; // edi
  int v15; // eax
  VectorClass *v16; // ecx
  void *v17; // eax
  bool v18; // zf
  void *v19; // eax
  int v20; // ecx
  VectorClass *v22; // [esp+Ch] [ebp-9Ch] BYREF
  void *Block; // [esp+10h] [ebp-98h]
  int v24; // [esp+14h] [ebp-94h]
  char v25; // [esp+19h] [ebp-8Fh]
  int v26; // [esp+1Ch] [ebp-8Ch]
  int v27; // [esp+20h] [ebp-88h]
  INIClass String[2]; // [esp+28h] [ebp-80h] BYREF

  if ( INIClass::GetString(edx0, aP1, a2, (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760], String, 128) ) /*0x52545c*/
  {
    VectorClass::Construct(&v22, 0, 0); /*0x525471*/
    v27 = 10; /*0x52547a*/
    v26 = 0; /*0x525488*/
    v22 = (VectorClass *)&vt_TypeList_int; /*0x52548c*/
    for ( i = strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0); i; i = strtok(0, MEMORY[0x817F70].__pad_0) ) /*0x52549e*/
    {
      if ( !*i ) /*0x5254a0*/
        break; /*0x5254a2*/
      _751520 = (void *)System_Get_751520(i); /*0x5254a6*/
      if ( _751520 ) /*0x5254ad*/
      {
        v14 = (CCINIClass *)System_Get_7515C0(_751520); /*0x5254ba*/
        if ( v26 < v24 /*0x5254e2*/
          || (v25 || !v24)
          && v27 > 0
          && ((unsigned __int8 (__thiscall *)(VectorClass **, int, _DWORD))v22->Capacity)(&v22, v27 + v24, 0) )
        {
          v15 = v26++; /*0x5254ed*/
          *((_DWORD *)Block + v15) = v14; /*0x5254f8*/
        }
      }
    }
    IntVector::Copy((_DWORD *)a1, (VectorClass *)&v22); /*0x525514*/
    *(_DWORD *)a1 = &vt_TypeList_int; /*0x52551e*/
    v16 = (VectorClass *)v27; /*0x525528*/
    *(_DWORD *)(a1 + 16) = v26; /*0x52552c*/
    v17 = Block; /*0x52552f*/
    v18 = Block == 0; /*0x525533*/
    *(_DWORD *)(a1 + 20) = v16; /*0x525535*/
    v22 = (VectorClass *)&vt_VectorClass_int; /*0x525538*/
    if ( !v18 && v25 ) /*0x525542*/
    {
      __3_YAXPAX_Z(v17); /*0x525545*/
      Block = 0; /*0x52554d*/
    }
    v19 = a6; /*0x525551*/
    v25 = 0; /*0x525558*/
    v24 = 0; /*0x52555e*/
    a5 = &vt_VectorClass_int; /*0x525562*/
    if ( a6 && HIBYTE(a8) ) /*0x525572*/
      goto LABEL_20; /*0x525572*/
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0; /*0x525587*/
    *(_DWORD *)(a1 + 8) = 0; /*0x52558a*/
    *(_BYTE *)(a1 + 12) = 1; /*0x52558d*/
    *(_BYTE *)(a1 + 13) = 0; /*0x525591*/
    *(_DWORD *)a1 = &vt_VectorClass_int; /*0x525594*/
    TypeList::Copy((_DWORD *)a1, &a5); /*0x525596*/
    *(_DWORD *)a1 = &vt_TypeList_int; /*0x52559b*/
    a5 = &vt_VectorClass_int; /*0x5255a1*/
    v20 = a10; /*0x5255af*/
    *(_DWORD *)(a1 + 16) = a9; /*0x5255b6*/
    v19 = a6; /*0x5255b9*/
    v18 = a6 == 0; /*0x5255c0*/
    *(_DWORD *)(a1 + 20) = v20; /*0x5255c2*/
    if ( !v18 && HIBYTE(a8) ) /*0x5255ce*/
LABEL_20:
      __3_YAXPAX_Z(v19); /*0x5255d0*/
  }
  return (VectorClass *)a1; /*0x5255db*/
}


// ==== 0x005255F0  TypeList::AnimTypeCopy  this=VectorClass  sig=csp ====
_DWORD *__thiscall TypeList::AnimTypeCopy(_DWORD *this, VectorClass *aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  this->Items = 0; /*0x5255fd*/
  this->Capacity = 0; /*0x525600*/
  this->q030 = 1; /*0x525603*/
  this->__pad_034 = 0; /*0x525607*/
  *this = &vt_VectorClass_AnimTypeClass_const; /*0x52560a*/
  if ( this != (_DWORD *)aP1 ) /*0x525610*/
  {
    DynamicVectorClass::Destroy_Alt((int)this); /*0x525612*/
    v3 = aP1->Capacity; /*0x525618*/
    this->Capacity = v3; /*0x52561d*/
    if ( v3 ) /*0x525620*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x525626*/
      this->Items = v4; /*0x525630*/
      if ( v4 ) /*0x525633*/
      {
        v5 = this->Capacity; /*0x525635*/
        v6 = 0; /*0x525638*/
        this->__pad_034 = 1; /*0x52563c*/
        if ( v5 > 0 ) /*0x525640*/
        {
          do /*0x525654*/
          {
            *(_DWORD *)(this->Items + 4 * v6) = *((_DWORD *)aP1->Items + v6); /*0x52564b*/
            ++v6; /*0x525651*/
          }
          while ( v6 < this->Capacity ); /*0x525654*/
        }
      }
    }
    else
    {
      this->Items = 0; /*0x525658*/
      this->__pad_034 = 0; /*0x52565b*/
    }
  }
  this->q010 = aP1[1].vtable0; /*0x525661*/
  this->q005 = aP1[1].Items; /*0x525667*/
  *this = &vt_TypeList_AnimTypeClass_const; /*0x52566a*/
  return this; /*0x525672*/
}


// ==== 0x00525680  AnimTypeVector::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall AnimTypeVector::Constructor(_DWORD *this, TechnoTypeClass *aP1, TechnoTypeClass *aP2)
{
  this->Items = 0; /*0x52568b*/
  this->Capacity = aP1; /*0x52568e*/
  this->q030 = 1; /*0x525691*/
  this->__pad_034 = 0; /*0x525695*/
  *this = &vt_VectorClass_AnimTypeClass_const; /*0x525698*/
  if ( aP1 ) /*0x52569e*/
  {
    if ( aP2 ) /*0x5256a6*/
    {
      this->Items = aP2; /*0x5256a8*/
      return this; /*0x5256ae*/
    }
    this->Items = __2_YAPAXI_Z(4 * (_DWORD)aP1); /*0x5256bd*/
    this->__pad_034 = 1; /*0x5256c0*/
  }
  return this; /*0x5256ad*/
}


// ==== 0x005256D0  sub_5256D0  this=-  sig=ida-proto ====
int sub_5256D0()
{
  MEMORY[0xA8F2D0] = 0; /*0x5256d2*/
  MEMORY[0xA8F2D4] = 0; /*0x5256d7*/
  MEMORY[0xA8F2D8] = 0; /*0x5256dc*/
  MEMORY[0xA8F2DC] = 0; /*0x5256e1*/
  return 0; /*0x5256e6*/
}


// ==== 0x005256F0  INIClass::DestroyHashTableINIClass  this=INIClass  sig=csp ====
char *__thiscall INIClass_DestroyHashTable(void **this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // edx
  int v6; // ecx
  char *result; // eax
  int v8; // edx
  int v9; // ecx

  *this = &INIClass::`vftable'; /*0x5256f8*/
  INIClass::ClearSection(0, 0); /*0x5256fe*/
  __3_YAXPAX_Z(this->q028); /*0x525707*/
  this->q028 = 0; /*0x52570c*/
  this->INIClass_field_2C = 0; /*0x52570f*/
  this->q00C = 0; /*0x525712*/
  this->needsSave_flag = 0; /*0x525715*/
  this->unknown38 = 0; /*0x525718*/
  this->q00C = &GenericList::`vftable'; /*0x52571e*/
  while ( 1 ) /*0x525725*/
  {
    v2 = (int)this->q014; /*0x525725*/
    if ( !v2 ) /*0x52572a*/
      break; /*0x52572a*/
    if ( !*(_DWORD *)(v2 + 4) ) /*0x52572c*/
      break; /*0x52572c*/
    v3 = *(_DWORD *)(v2 + 8); /*0x525731*/
    if ( !v3 ) /*0x525736*/
      break; /*0x525736*/
    v4 = *(_DWORD *)(v2 + 4); /*0x52573c*/
    if ( v4 ) /*0x525741*/
    {
      *(_DWORD *)(v3 + 4) = v4; /*0x525747*/
      *(_DWORD *)(*(_DWORD *)(v2 + 4) + 8) = *(_DWORD *)(v2 + 8); /*0x525750*/
      *(_DWORD *)(v2 + 8) = 0; /*0x525753*/
      *(_DWORD *)(v2 + 4) = 0; /*0x525756*/
    }
  }
  this->sectionCount = &GenericNode::`vftable'; /*0x525760*/
  if ( this != (void **)-28 ) /*0x525766*/
  {
    v5 = (int)this->q008; /*0x525768*/
    if ( v5 ) /*0x52576d*/
    {
      v6 = (int)this->q009; /*0x52576f*/
      if ( v6 ) /*0x525774*/
      {
        *(_DWORD *)(v6 + 4) = v5; /*0x525776*/
        *((_DWORD *)this->q008 + 2) = this->q009; /*0x52577f*/
        this->q009 = 0; /*0x525782*/
        this->q008 = 0; /*0x525785*/
      }
    }
  }
  result = (char *)(this + 4); /*0x525788*/
  this->headNode = &GenericNode::`vftable'; /*0x52578d*/
  if ( this != (void **)-16 ) /*0x525793*/
  {
    v8 = (int)this->q014; /*0x525795*/
    if ( v8 ) /*0x52579a*/
    {
      v9 = (int)this->q018; /*0x52579c*/
      if ( v9 ) /*0x5257a1*/
      {
        *(_DWORD *)(v9 + 4) = v8; /*0x5257a3*/
        *((_DWORD *)this->q014 + 2) = this->q018; /*0x5257ac*/
        this->q018 = 0; /*0x5257af*/
        this->q014 = 0; /*0x5257b2*/
      }
    }
  }
  return result; /*0x5257b5*/
}


// ==== 0x005257C0  INIClass::ClearSection  this=AbstractClass  sig=csp ====
char __thiscall INIClass::ClearSection(int this, INIClass *aP1, AbstractClass *aP2)
{
  INIClass *v3; // edx
  bool v5; // zf
  int v6; // ecx
  int v7; // edi
  CCINIClass *v9; // edi
  int v10; // ebp
  int *v11; // eax
  int esi13; // esi
  CCINIClass *v12; // esi
  int *v14; // eax
  int v15; // ebp
  unsigned __int8 *v16; // edx
  size_t v17; // eax
  int v18; // eax
  int i; // ecx
  _DWORD *v20; // eax
  int v21; // edi
  int v22; // eax
  unsigned __int8 *edx26; // edx
  INIClass *v23; // [esp+10h] [ebp-10h] BYREF
  unsigned int v25; // [esp+14h] [ebp-Ch] BYREF
  int v26; // [esp+18h] [ebp-8h]
  CCINIClass *v27; // [esp+1Ch] [ebp-4h]

  v3 = aP1; /*0x5257c0*/
  v5 = aP1 == 0; /*0x5257cf*/
  *(_DWORD *)(this + 4) = 0; /*0x5257d1*/
  *(_DWORD *)(this + 8) = 0; /*0x5257d4*/
  if ( v5 ) /*0x5257d7*/
  {
    while ( 1 ) /*0x5257d9*/
    {
      v6 = *(_DWORD *)(this + 20); /*0x5257d9*/
      if ( !v6 || !*(_DWORD *)(v6 + 4) || !*(_DWORD *)(v6 + 8) ) /*0x5257e5*/
        break; /*0x5257e5*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x5257f2*/
    }
    __3_YAXPAX_Z(*(void **)(this + 40)); /*0x5257fa*/
    *(_DWORD *)(this + 40) = 0; /*0x5257ff*/
    *(_DWORD *)(this + 44) = 0; /*0x525802*/
    *(_DWORD *)(this + 48) = 0; /*0x525805*/
    *(_BYTE *)(this + 52) = 0; /*0x525808*/
    *(_DWORD *)(this + 56) = 0; /*0x52580b*/
    if ( *(_DWORD *)(this + 60) ) /*0x52580e*/
    {
      do /*0x52583d*/
      {
        free(**(void ***)(this + 60)); /*0x525822*/
        v7 = *(_DWORD *)(*(_DWORD *)(this + 60) + 4); /*0x52582c*/
        __3_YAXPAX_Z(*(void **)(this + 60)); /*0x525830*/
        *(_DWORD *)(this + 60) = v7; /*0x52583a*/
      }
      while ( v7 ); /*0x52583d*/
      return 1; /*0x525848*/
    }
    return 1; /*0x5259fa*/
  }
  v25 = 0; /*0x525852*/
  v26 = 0; /*0x52585b*/
  v27 = 0; /*0x525865*/
  v9 = (CCINIClass *)Checksummer::Add_Buffer(&v25, (unsigned __int8 *)v3, (IUnknown *)strlen(v3->__pad_0)); /*0x52586e*/
  v10 = this + 40; /*0x525870*/
  aP1 = (INIClass *)v9; /*0x52587a*/
  if ( !HashTable::BinarySearch(this + 40, (ObjectClass *)&aP1) ) /*0x52587e*/
    return 1; /*0x52587e*/
  v23 = (INIClass *)v9; /*0x52588f*/
  v11 = HashTable::BinarySearch(this + 40, (ObjectClass *)&v23)
      ? (int *)(*(_DWORD *)(this + 56) + 4)
      : (int *)&unk_B7882C;
  esi13 = *v11; /*0x5258ac*/
  if ( !*v11 ) /*0x5258ac*/
    return 1; /*0x5258b0*/
  if ( !aP2 ) /*0x5258bc*/
  {
    edx26 = *(unsigned __int8 **)(esi13 + 12); /*0x5259b9*/
    v25 = 0; /*0x5259c3*/
    v26 = 0; /*0x5259c7*/
    v27 = 0; /*0x5259cb*/
    aP1 = (INIClass *)Checksummer::Add_Buffer(&v25, edx26, (IUnknown *)strlen((const char *)edx26)); /*0x5259e3*/
    INIClass::deleteSection(v10, (int *)&aP1); /*0x5259ea*/
    (**(void (__thiscall ***)(int, int))esi13)(esi13, 1); /*0x5259f5*/
    return 1; /*0x5259f5*/
  }
  v25 = 0; /*0x5258c9*/
  v26 = 0; /*0x5258d2*/
  v27 = 0; /*0x5258dc*/
  v12 = (CCINIClass *)(esi13 + 44); /*0x5258e5*/
  aP1 = (INIClass *)Checksummer::Add_Buffer(&v25, (unsigned __int8 *)aP2, (IUnknown *)strlen(aP2->__pad_0)); /*0x5258ef*/
  if ( !SortedArray::Find((int)v12, (CCINIClass *)&aP1) ) /*0x5258f3*/
    return 1; /*0x5258f3*/
  v14 = SortedArray::Find((int)v12, (CCINIClass *)&aP1) ? (int *)(v12->sectionHead[0] + 4) : (int *)&unk_B78830;
  v15 = *v14; /*0x52591d*/
  if ( !*v14 ) /*0x52591d*/
    return 1; /*0x525921*/
  v16 = *(unsigned __int8 **)(v15 + 12); /*0x525927*/
  v25 = 0; /*0x525931*/
  v26 = 0; /*0x525935*/
  v27 = 0; /*0x525939*/
  aP2 = (AbstractClass *)Checksummer::Add_Buffer(&v25, v16, (IUnknown *)strlen((const char *)v16)); /*0x525951*/
  v17 = HashTable::BinarySearchAlt((char **)v12, (CCINIClass *)&aP2); /*0x525958*/
  if ( v17 ) /*0x52595f*/
  {
    v18 = (int)(v17 - *(_DWORD *)v12->__pad_0) >> 3; /*0x525963*/
    if ( v18 != -1 ) /*0x525969*/
    {
      for ( i = v18 + 1; i < v12->headNode[0]; *(v20 - 1) = v20[1] ) /*0x525973*/
      {
        v20 = (_DWORD *)(*(_DWORD *)v12->__pad_0 + 8 * i++); /*0x525977*/
        *(v20 - 2) = *v20; /*0x52597d*/
      }
      v21 = *(_DWORD *)v12->__pad_0; /*0x525990*/
      v22 = v12->headNode[0] - 1; /*0x525992*/
      v12->headNode[0] = v22; /*0x525995*/
      *(_DWORD *)(v21 + 8 * v22) = 0; /*0x52599a*/
      *(_DWORD *)(v21 + 8 * v22 + 4) = 0; /*0x52599d*/
      v12->sectionHead[0] = 0; /*0x5259a1*/
    }
  }
  (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x5259ab*/
  return 1; /*0x52583f*/
}


// ==== 0x00525A10  FileStraw::Open  this=FileStraw  sig=csp ====
int __thiscall FileStraw_Open(_DWORD *this, int a2, char a3)
{
  int v3; // esi
  _DWORD v5[4]; // [esp+4h] [ebp-14h] BYREF
  char v6; // [esp+14h] [ebp-4h]

  this->FileStraw_field_0x04 = 0; /*0x525a19*/
  this->q008 = 0; /*0x525a1c*/
  v5[1] = 0; /*0x525a1f*/
  v5[2] = 0; /*0x525a23*/
  v6 = 0; /*0x525a27*/
  v5[3] = a2; /*0x525a2f*/
  v5[0] = &vt_FileStraw; /*0x525a3a*/
  v3 = INIClass::LoadFile(v5, a3); /*0x525a4b*/
  FileStraw::Destructor(v5); /*0x525a4d*/
  return v3; /*0x525a54*/
}


// ==== 0x00525A60  INIClass::LoadFile  this=IUnknown  sig=csp ====
int __thiscall INIClass::LoadFile(_DWORD *this, CCINIClass *aP1, INIClass *aP2)
{
  char *v3; // ebp
  int v4; // eax
  INIClass *v5; // edi
  INIClass *v6; // ebx
  INIClass *p_Str; // ecx
  char i; // al
  INIClass *v9; // eax
  INIClass *v10; // esi
  char *v11; // eax
  unsigned int v12; // esi
  INIClass *v13; // ecx
  char j; // al
  char *v15; // eax
  char *v16; // eax
  INIClass *v17; // esi
  INIClass *v19; // esi
  char *v20; // eax
  INIClass *v21; // ebx
  char *v22; // eax
  INIClass *v23; // edi
  int *p_INIClass_field_2C; // ebp
  INIClass *v25; // ecx
  INIClass *v26; // ecx
  char m; // al
  INIClass *v28; // esi
  INIClass *v29; // eax
  CCINIClass *v30; // edi
  CCINIClass *v31; // eax
  char *v32; // eax
  char *v33; // eax
  char *v34; // esi
  INIClass *v35; // esi
  INIClass *v36; // esi
  unsigned int v37; // edi
  int v38; // ebx
  char *v39; // eax
  INIClass *v40; // edx
  CCINIClass *v41; // eax
  CCINIClass *v42; // edx
  CCINIClass *v43; // eax
  CCINIClass *v44; // edx
  char *v45; // eax
  INIClass *v46; // ecx
  INIClass *v47; // eax
  char *v48; // ebx
  AbstractClass *v49; // edi
  CCINIClass *v50; // eax
  int v51; // ecx
  int v52; // eax
  _DWORD *v53; // edx
  char *v54; // eax
  int v55; // eax
  int v56; // eax
  INIClass *v57; // ecx
  INIClass *v58; // edx
  INIClass *v59; // edx
  INIClass *v60; // ecx
  CCINIClass *v61; // eax
  INIClass *v62; // esi
  CCINIClass *v63; // edx
  char *v64; // eax
  int v65; // edi
  int v66; // eax
  char *v67; // ebp
  AbstractClass *v68; // esi
  int v69; // ecx
  int v70; // eax
  CCINIClass *v71; // ecx
  char *v72; // ecx
  int v73; // eax
  INIClass *v74; // eax
  CCINIClass *v75; // edi
  INIClass *v76; // ecx
  INIClass *v77; // edx
  INIClass *v78; // eax
  INIClass *v79; // esi
  CCINIClass *v80; // esi
  INIClass *v81; // edi
  _BYTE v82[19]; // [esp+0h] [ebp-478h] BYREF
  char v83; // [esp+13h] [ebp-465h] BYREF
  INIClass *k; // [esp+14h] [ebp-464h]
  char v85; // [esp+1Bh] [ebp-45Dh]
  CCINIClass *v86; // [esp+1Ch] [ebp-45Ch]
  CCINIClass *Block; // [esp+20h] [ebp-458h]
  char *v88; // [esp+24h] [ebp-454h]
  int v89; // [esp+28h] [ebp-450h]
  INIClass *v90; // [esp+2Ch] [ebp-44Ch] BYREF
  int v91; // [esp+30h] [ebp-448h] BYREF
  unsigned int v92; // [esp+34h] [ebp-444h] BYREF
  INIClass *v93; // [esp+38h] [ebp-440h]
  int v94[3]; // [esp+3Ch] [ebp-43Ch] BYREF
  _DWORD v95[4]; // [esp+48h] [ebp-430h] BYREF
  INIClass *v97; // [esp+58h] [ebp-420h]
  char *var41C; // [esp+5Ch] [ebp-41Ch]
  unsigned int v98[3]; // [esp+60h] [ebp-418h] BYREF
  unsigned int v99[3]; // [esp+6Ch] [ebp-40Ch] BYREF
  INIClass Str[8]; // [esp+78h] [ebp-400h] BYREF
  INIClass v101; // [esp+278h] [ebp-200h] BYREF

  v3 = (char *)this; /*0x525a69*/
  this->q004 = 0; /*0x525a6e*/
  this->q008 = 0; /*0x525a71*/
  v4 = this->q02C; /*0x525a74*/
  v5 = 0; /*0x525a77*/
  v6 = 0; /*0x525a79*/
  v89 = (int)this; /*0x525a7d*/
  v83 = 0; /*0x525a81*/
  k = 0; /*0x525a86*/
  v85 = 0; /*0x525a8a*/
  if ( v4 > 0 ) /*0x525a8e*/
  {
    v85 = 1; /*0x525a90*/
    LOBYTE(aP2) = 0; /*0x525a95*/
  }
  v94[1] = 0; /*0x525aa5*/
  v94[2] = 0; /*0x525aa9*/
  INIClass::loadFile(v95, (AbstractClass *)0x1000); /*0x525ab5*/
  v95[3] = 0; /*0x525ac6*/
  v97 = 0; /*0x525aca*/
  v94[0] = (int)&CacheStraw::`vftable'; /*0x525ace*/
  Delegate::Set(v94, (AbstractTypeClass *)aP1); /*0x525ad6*/
  do /*0x525b9d*/
  {
    ReadStreamLine((int)v94, Str[0].__pad_0, 512, &v83); /*0x525afa*/
    if ( v83 ) /*0x525b05*/
    {
      if ( (_BYTE)aP2 ) /*0x525baf*/
      {
        *((_DWORD *)v3 + 15) = v5; /*0x525bb1*/
        goto LABEL_51; /*0x525bb4*/
      }
      if ( v5 ) /*0x525bbb*/
      {
        do /*0x525bd9*/
        {
          free(*(void **)v5->__pad_0); /*0x525bc4*/
          v10 = (INIClass *)v5->headNode[0]; /*0x525bc9*/
          __3_YAXPAX_Z(v5); /*0x525bcd*/
          v5 = v10; /*0x525bd5*/
        }
        while ( v10 ); /*0x525bd9*/
      }
      goto LABEL_143; /*0x525bd9*/
    }
    p_Str = Str; /*0x525b0f*/
    if ( v82 != (_BYTE *)-120 ) /*0x525b15*/
    {
      for ( i = Str[0].__pad_0[0]; i; p_Str = (INIClass *)((char *)p_Str + 1) ) /*0x525b1d*/
      {
        if ( (unsigned __int8)i > 0x20u ) /*0x525b21*/
          break; /*0x525b21*/
        i = p_Str->__pad_0[1]; /*0x525b23*/
      }
      if ( p_Str->__pad_0[0] == 91 && strchr(p_Str->__pad_0, 93) ) /*0x525b33*/
        break; /*0x525b3d*/
    }
    if ( (_BYTE)aP2 ) /*0x525b4c*/
    {
      v9 = (INIClass *)__2_YAPAXI_Z(8u); /*0x525b50*/
      if ( v9 ) /*0x525b5c*/
      {
        *(_DWORD *)v9->__pad_0 = 0; /*0x525b60*/
        v9->headNode[0] = 0; /*0x525b66*/
        if ( v6 ) /*0x525b6d*/
        {
          v6->headNode[0] = (int)v9; /*0x525b6f*/
          v6 = v9; /*0x525b72*/
        }
        else
        {
          v5 = v9; /*0x525b80*/
          v6 = v9; /*0x525b82*/
          k = v9; /*0x525b84*/
        }
        *(_DWORD *)v9->__pad_0 = _strdup(Str[0].__pad_0); /*0x525b95*/
      }
      else
      {
        LOBYTE(aP2) = 0; /*0x525b76*/
      }
    }
  }
  while ( !v83 ); /*0x525b9d*/
  if ( v85 ) /*0x525be8*/
  {
    if ( v83 ) /*0x525bf4*/
      goto LABEL_50; /*0x525bf4*/
LABEL_27:
    v101.__pad_0[0] = 0; /*0x525bfa*/
    String::Trim(Str[0].__pad_0); /*0x525c06*/
    if ( Str[0].__pad_0[0] == 91 ) /*0x525c10*/
    {
      v11 = strchr(Str[0].__pad_0, 93); /*0x525c19*/
      if ( v11 ) /*0x525c23*/
        *v11 = 0; /*0x525c25*/
      strcpy(v101.__pad_0, &Str[0].__pad_0[1]); /*0x525c47*/
    }
    if ( v83 ) /*0x525c56*/
      goto LABEL_50; /*0x525c56*/
    while ( 1 ) /*0x525c77*/
    {
      v12 = ReadStreamLine((int)v94, Str[0].__pad_0, 512, &v83); /*0x525c77*/
      v13 = Str; /*0x525c7b*/
      if ( v82 != (_BYTE *)-120 ) /*0x525c7f*/
      {
        for ( j = Str[0].__pad_0[0]; j; v13 = (INIClass *)((char *)v13 + 1) ) /*0x525c87*/
        {
          if ( (unsigned __int8)j > 0x20u ) /*0x525c8b*/
            break; /*0x525c8b*/
          j = v13->__pad_0[1]; /*0x525c8d*/
        }
        if ( v13->__pad_0[0] == 91 && strchr(v13->__pad_0, 93) ) /*0x525c9d*/
        {
          if ( v83 ) /*0x525d53*/
            goto LABEL_50; /*0x525d53*/
          goto LABEL_27; /*0x525d53*/
        }
        v15 = strchr(Str[0].__pad_0, 59); /*0x525cb4*/
        if ( v15 ) /*0x525cbe*/
        {
          *v15 = 0; /*0x525cc4*/
          String::Trim(Str[0].__pad_0); /*0x525cc7*/
        }
      }
      if ( v12 ) /*0x525cce*/
      {
        if ( Str[0].__pad_0[0] != 59 && Str[0].__pad_0[0] != 61 ) /*0x525cda*/
        {
          v16 = strchr(Str[0].__pad_0, 61); /*0x525ce3*/
          if ( v16 ) /*0x525cef*/
          {
            *v16 = 0; /*0x525cf1*/
            v17 = (INIClass *)(v16 + 1); /*0x525cf8*/
            String::Trim(Str[0].__pad_0); /*0x525cf9*/
            if ( strlen(Str[0].__pad_0) ) /*0x525d02*/
            {
              String::Trim(v17->__pad_0); /*0x525d10*/
              if ( strlen(v17->__pad_0) ) /*0x525d17*/
              {
                if ( !INIClass::SetString(v3, &v101, Str, v17) ) /*0x525d3a*/
                  goto LABEL_143; /*0x525d3a*/
              }
            }
          }
        }
      }
      if ( v83 ) /*0x525d46*/
        goto LABEL_50; /*0x525d46*/
    }
  }
  if ( *((_DWORD *)v3 + 15) ) /*0x525d88*/
  {
    do /*0x525dae*/
    {
      free(**((void ***)v3 + 15)); /*0x525d93*/
      v19 = *(INIClass **)(*((_DWORD *)v3 + 15) + 4); /*0x525d9d*/
      __3_YAXPAX_Z(*((void **)v3 + 15)); /*0x525da1*/
      *((_DWORD *)v3 + 15) = v19; /*0x525da9*/
    }
    while ( v19 ); /*0x525dae*/
  }
  if ( v83 ) /*0x525db6*/
    goto LABEL_50; /*0x525db6*/
  while ( 2 ) /*0x525db8*/
  {
    String::Trim(Str[0].__pad_0); /*0x525db8*/
    if ( Str[0].__pad_0[0] == 91 ) /*0x525dc6*/
    {
      v20 = strchr(Str[0].__pad_0, 93); /*0x525dcf*/
      if ( v20 ) /*0x525dd9*/
        *v20 = 0; /*0x525ddb*/
    }
    else
    {
      Str[0].__pad_0[0] = 0; /*0x525de0*/
      Str[0].__pad_0[1] = 0; /*0x525de5*/
    }
    v21 = (INIClass *)__2_YAPAXI_Z(0x44u); /*0x525df1*/
    v93 = v21; /*0x525df8*/
    if ( v21 ) /*0x525dfc*/
    {
      v22 = _strdup(&Str[0].__pad_0[1]); /*0x525e07*/
      v23 = 0; /*0x525e0f*/
      v21->headNode[0] = 0; /*0x525e16*/
      v21->headNode[1] = 0; /*0x525e19*/
      *(_DWORD *)v21->__pad_0 = &Node<INIClass::INISection *>::`vftable'; /*0x525e1c*/
      v21->headNode[2] = (int)v22; /*0x525e22*/
      GenericList::Constructor(v21->sectionHead); /*0x525e25*/
      p_INIClass_field_2C = &v21->INIClass_field_2C; /*0x525e2a*/
      v21->sectionHead[0] = (int)&List<INIClass::INIEntry *>::`vftable'; /*0x525e2d*/
      INIClass::getValue(&v21->INIClass_field_2C); /*0x525e35*/
      v25 = k; /*0x525e3a*/
      *(_DWORD *)v21->__pad_0 = &vt_INIClass_INISection; /*0x525e3e*/
      *(_DWORD *)v21[1].__pad_0 = v25; /*0x525e44*/
      v86 = 0; /*0x525e4d*/
      for ( k = 0; !v83; v23 = k ) /*0x525e55*/
      {
        v88 = (char *)ReadStreamLine((int)v94, Str[0].__pad_0, 512, &v83); /*0x525e75*/
        if ( v83 ) /*0x525e7f*/
          break; /*0x525e7f*/
        v26 = Str; /*0x525e89*/
        if ( v82 != (_BYTE *)-120 ) /*0x525e8f*/
        {
          for ( m = Str[0].__pad_0[0]; m; v26 = (INIClass *)((char *)v26 + 1) ) /*0x525e97*/
          {
            if ( (unsigned __int8)m > 0x20u ) /*0x525e9b*/
              break; /*0x525e9b*/
            m = v26->__pad_0[1]; /*0x525e9d*/
          }
          if ( v26->__pad_0[0] == 91 && strchr(v26->__pad_0, 93) ) /*0x525ead*/
            break; /*0x525eb7*/
        }
        if ( (_BYTE)aP2 ) /*0x525ec6*/
        {
          v28 = (INIClass *)__2_YAPAXI_Z(8u); /*0x525ecf*/
          if ( v28 ) /*0x525ed6*/
          {
            v29 = (INIClass *)v86; /*0x525ed8*/
            *(_DWORD *)v28->__pad_0 = 0; /*0x525edc*/
            v28->headNode[0] = 0; /*0x525ee4*/
            if ( v29 ) /*0x525eeb*/
            {
              v29->headNode[0] = (int)v28; /*0x525eed*/
              v86 = (CCINIClass *)v28; /*0x525ef0*/
            }
            else
            {
              v86 = (CCINIClass *)v28; /*0x525f00*/
              k = v28; /*0x525f04*/
            }
            *(_DWORD *)v28->__pad_0 = _strdup(Str[0].__pad_0); /*0x525f15*/
          }
          else
          {
            LOBYTE(aP2) = 0; /*0x525ef6*/
          }
        }
        v30 = 0; /*0x525f20*/
        v91 = 0; /*0x525f22*/
        v92 = 0; /*0x525f28*/
        v90 = 0; /*0x525f2c*/
        Block = 0; /*0x525f30*/
        if ( (_BYTE)aP2 ) /*0x525f34*/
        {
          v31 = (CCINIClass *)System_Load((unsigned __int8 *)Str, (unsigned int *)&v91, &v92, (unsigned int *)&v90); /*0x525f4b*/
          v30 = v31; /*0x525f50*/
          Block = v31; /*0x525f54*/
          if ( v31 ) /*0x525f58*/
          {
            v30 = (CCINIClass *)_strdup(v31->__pad_0); /*0x525f60*/
            Block = v30; /*0x525f65*/
          }
        }
        if ( v82 != (_BYTE *)-120 ) /*0x525f6f*/
        {
          v32 = strchr(Str[0].__pad_0, 59); /*0x525f78*/
          if ( v32 ) /*0x525f82*/
          {
            *v32 = 0; /*0x525f88*/
            String::Trim(Str[0].__pad_0); /*0x525f8b*/
          }
        }
        if ( !v88 || Str[0].__pad_0[0] == 59 || Str[0].__pad_0[0] == 61 || (v33 = strchr(Str[0].__pad_0, 61)) == 0 ) /*0x525fc1*/
        {
          free(v30); /*0x5261df*/
        }
        else
        {
          *v33 = 0; /*0x525fc7*/
          v34 = v33 + 1; /*0x525fca*/
          v88 = v33 + 1; /*0x525fcf*/
          String::Trim(Str[0].__pad_0); /*0x525fd3*/
          if ( strlen(Str[0].__pad_0) ) /*0x525fdc*/
          {
            String::Trim(v34); /*0x525ff4*/
            if ( strlen(v34) ) /*0x525ffb*/
            {
              if ( (_BYTE)aP2 ) /*0x52601a*/
              {
                v35 = (INIClass *)v86; /*0x52601c*/
                if ( v86 ) /*0x526022*/
                {
                  if ( *(_DWORD *)v86->__pad_0 ) /*0x526024*/
                  {
                    free(*(void **)v86->__pad_0); /*0x52602b*/
                    *(_DWORD *)v35->__pad_0 = 0; /*0x526033*/
                  }
                }
              }
              v36 = (INIClass *)__2_YAPAXI_Z(0x28u); /*0x526040*/
              if ( !v36 ) /*0x526047*/
              {
                free(Block); /*0x5263ae*/
                v80 = (CCINIClass *)k; /*0x5263b3*/
                if ( k ) /*0x5263bc*/
                {
                  do /*0x5263d6*/
                  {
                    free(*(void **)v80->__pad_0); /*0x5263c1*/
                    v81 = (INIClass *)v80->headNode[0]; /*0x5263c6*/
                    __3_YAXPAX_Z(v80); /*0x5263ca*/
                    v80 = (CCINIClass *)v81; /*0x5263d2*/
                  }
                  while ( v81 ); /*0x5263d6*/
                }
                if ( v21 ) /*0x5263da*/
                  (**(void (__thiscall ***)(INIClass *, int))v21->__pad_0)(v21, 1); /*0x5263e2*/
                INIClass::ClearSection(v89, 0, 0); /*0x5263ec*/
                goto LABEL_143; /*0x5263ec*/
              }
              v37 = v92; /*0x526055*/
              v38 = v91; /*0x526059*/
              v86 = (CCINIClass *)v90; /*0x52605e*/
              v88 = _strdup(v88); /*0x52606b*/
              v39 = _strdup(Str[0].__pad_0); /*0x526070*/
              v40 = k; /*0x526075*/
              v36->headNode[2] = (int)v39; /*0x526079*/
              v41 = (CCINIClass *)v88; /*0x52607c*/
              v36->sectionHead[1] = (int)v40; /*0x526080*/
              v42 = v86; /*0x526083*/
              v36->sectionHead[0] = (int)v41; /*0x526087*/
              v43 = Block; /*0x52608a*/
              v36->headNode[0] = 0; /*0x526090*/
              v36->headNode[1] = 0; /*0x526093*/
              v36->sectionHead[2] = (int)v43; /*0x526096*/
              v36->sectionCount = v38; /*0x526099*/
              *(_DWORD *)v36->__pad_20 = v37; /*0x52609c*/
              *(_DWORD *)&v36->__pad_20[4] = v42; /*0x52609f*/
              *(_DWORD *)v36->__pad_0 = &vt_INIClass_INIEntry; /*0x5260a2*/
              v44 = (CCINIClass *)v36->headNode[2]; /*0x5260a8*/
              v86 = 0; /*0x5260ab*/
              k = 0; /*0x5260af*/
              memset(v98, 0, sizeof(v98)); /*0x5260b3*/
              v45 = (char *)Checksummer::Add_Buffer(v98, (unsigned __int8 *)v44, (IUnknown *)strlen(v44->__pad_0)); /*0x5260d4*/
              v46 = (INIClass *)p_INIClass_field_2C[1]; /*0x5260d9*/
              v88 = v45; /*0x5260dc*/
              v47 = (INIClass *)p_INIClass_field_2C[2]; /*0x5260e0*/
              if ( (int)&v46->__pad_0[1] <= (int)v47 ) /*0x5260e6*/
              {
LABEL_101:
                *(_DWORD *)(*p_INIClass_field_2C + 8 * p_INIClass_field_2C[1]) = v88; /*0x526177*/
                *(_DWORD *)(*p_INIClass_field_2C + 8 * p_INIClass_field_2C[1] + 4) = v36; /*0x52618a*/
                v55 = p_INIClass_field_2C[1] + 1; /*0x526191*/
                *((_BYTE *)p_INIClass_field_2C + 12) = 0; /*0x526192*/
                p_INIClass_field_2C[1] = v55; /*0x526196*/
              }
              else
              {
                if ( !v47 ) /*0x5260ee*/
                {
                  Block = (CCINIClass *)10; /*0x5260f0*/
                  goto LABEL_97; /*0x5260f8*/
                }
                Block = (CCINIClass *)p_INIClass_field_2C[2]; /*0x5260fe*/
                if ( (int)v47 >= 0 ) /*0x526102*/
                {
LABEL_97:
                  v48 = &Block->__pad_0[(_DWORD)v47]; /*0x526108*/
                  v49 = (AbstractClass *)__2_YAPAXI_Z(8 * (int)&Block->__pad_0[(_DWORD)v47]); /*0x52611c*/
                  if ( v49 ) /*0x526123*/
                  {
                    v50 = (CCINIClass *)p_INIClass_field_2C[1]; /*0x526125*/
                    v51 = 0; /*0x526129*/
                    var41C = v48 - 1; /*0x52612b*/
                    if ( (int)v50 > 0 ) /*0x526131*/
                    {
                      do /*0x526153*/
                      {
                        v52 = 8 * v51; /*0x526136*/
                        v53 = (_DWORD *)(*p_INIClass_field_2C + 8 * v51++); /*0x52613f*/
                        *(_DWORD *)&v49->__pad_0[v52] = *v53; /*0x526144*/
                        *(_DWORD *)&v49->__pad_0[v52 + 4] = v53[1]; /*0x52614a*/
                      }
                      while ( v51 < p_INIClass_field_2C[1] ); /*0x526153*/
                    }
                    __3_YAXPAX_Z((void *)*p_INIClass_field_2C); /*0x526159*/
                    v54 = &Block->__pad_0[p_INIClass_field_2C[2]]; /*0x526168*/
                    *p_INIClass_field_2C = (int)v49; /*0x52616a*/
                    p_INIClass_field_2C[2] = (int)v54; /*0x52616d*/
                    p_INIClass_field_2C[4] = 0; /*0x526170*/
                    goto LABEL_101; /*0x526170*/
                  }
                }
              }
              v56 = *(_DWORD *)&v93->__pad_20[8]; /*0x52619f*/
              v57 = (INIClass *)v36->headNode[0]; /*0x5261a2*/
              if ( v57 ) /*0x5261a7*/
              {
                v58 = (INIClass *)v36->headNode[1]; /*0x5261a9*/
                if ( v58 ) /*0x5261ae*/
                {
                  v58->headNode[0] = (int)v57; /*0x5261b0*/
                  *(_DWORD *)(v36->headNode[0] + 8) = v36->headNode[1]; /*0x5261b9*/
                  v36->headNode[1] = 0; /*0x5261bc*/
                  v36->headNode[0] = 0; /*0x5261bf*/
                }
              }
              v59 = *(INIClass **)(v56 + 4); /*0x5261c2*/
              v36->headNode[1] = v56; /*0x5261c5*/
              v36->headNode[0] = (int)v59; /*0x5261c8*/
              v60 = *(INIClass **)(v56 + 4); /*0x5261cb*/
              if ( v60 ) /*0x5261d0*/
                v60->headNode[1] = (int)v36; /*0x5261d2*/
              v21 = v93; /*0x5261d5*/
              *(_DWORD *)(v56 + 4) = v36; /*0x5261d9*/
              continue; /*0x5261dc*/
            }
          }
          free(Block); /*0x525fed*/
        }
      }
      if ( !(_BYTE)aP2 ) /*0x526200*/
      {
        v61 = (CCINIClass *)v21->sectionHead[2]; /*0x526202*/
        if ( !v61 || !v61->headNode[0] || !v61->headNode[1] ) /*0x526210*/
        {
          if ( v23 ) /*0x526219*/
          {
            do /*0x526233*/
            {
              free(*(void **)v23->__pad_0); /*0x52621e*/
              v62 = (INIClass *)v23->headNode[0]; /*0x526223*/
              __3_YAXPAX_Z(v23); /*0x526227*/
              v23 = v62; /*0x52622f*/
            }
            while ( v62 ); /*0x526233*/
            k = 0; /*0x526235*/
          }
          (**(void (__thiscall ***)(INIClass *, int))v21->__pad_0)(v21, 1); /*0x52623f*/
LABEL_133:
          if ( !v83 ) /*0x526370*/
          {
            v5 = k; /*0x526376*/
            v3 = (char *)v89; /*0x52637a*/
            continue; /*0x52637e*/
          }
LABEL_50:
          *(_DWORD *)(v89 + 60) = k; /*0x525d59*/
LABEL_51:
          Vector::Clear((int)v95); /*0x525d64*/
          Straw::Dtor(v94); /*0x525d71*/
          return 1; /*0x525d85*/
        }
      }
      v63 = (CCINIClass *)v21->headNode[2]; /*0x526246*/
      memset(v99, 0, sizeof(v99)); /*0x526252*/
      v64 = (char *)Checksummer::Add_Buffer(v99, (unsigned __int8 *)v63, (IUnknown *)strlen(v63->__pad_0)); /*0x526269*/
      v65 = v89; /*0x52626e*/
      v88 = v64; /*0x526272*/
      v66 = *(_DWORD *)(v89 + 48); /*0x526279*/
      if ( *(_DWORD *)(v89 + 44) + 1 <= v66 ) /*0x52627f*/
      {
LABEL_126:
        *(_DWORD *)(*(_DWORD *)(v65 + 40) + 8 * *(_DWORD *)(v65 + 44)) = v88; /*0x52630b*/
        *(_DWORD *)(*(_DWORD *)(v65 + 40) + 8 * *(_DWORD *)(v65 + 44) + 4) = v21; /*0x52631e*/
        v73 = *(_DWORD *)(v65 + 44) + 1; /*0x526325*/
        *(_BYTE *)(v65 + 52) = 0; /*0x526326*/
        *(_DWORD *)(v65 + 44) = v73; /*0x52632a*/
      }
      else
      {
        if ( !v66 ) /*0x526287*/
        {
          v86 = (CCINIClass *)10; /*0x526289*/
          goto LABEL_122; /*0x526291*/
        }
        v86 = *(CCINIClass **)(v89 + 48); /*0x526297*/
        if ( v66 >= 0 ) /*0x52629b*/
        {
LABEL_122:
          v67 = &v86->__pad_0[v66]; /*0x5262a1*/
          v68 = (AbstractClass *)__2_YAPAXI_Z(8 * ((_DWORD)v86 + v66)); /*0x5262b5*/
          if ( v68 ) /*0x5262bc*/
          {
            v69 = *(_DWORD *)(v65 + 44); /*0x5262be*/
            v70 = 0; /*0x5262c2*/
            var41C = v67 - 1; /*0x5262c4*/
            if ( v69 > 0 ) /*0x5262ca*/
            {
              do /*0x5262e5*/
              {
                v71 = *(CCINIClass **)(v65 + 40); /*0x5262cc*/
                ++v70; /*0x5262cf*/
                *(_DWORD *)&v68->__pad_0[8 * v70 - 8] = *(_DWORD *)&v71->__pad_0[8 * v70 - 8]; /*0x5262d4*/
                *(_DWORD *)&v68->__pad_0[8 * v70 - 4] = *(_DWORD *)&v71->__pad_0[8 * v70 - 4]; /*0x5262dc*/
              }
              while ( v70 < *(_DWORD *)(v65 + 44) ); /*0x5262e5*/
            }
            __3_YAXPAX_Z(*(void **)(v65 + 40)); /*0x5262eb*/
            v72 = &v86->__pad_0[*(_DWORD *)(v65 + 48)]; /*0x5262f7*/
            *(_DWORD *)(v65 + 40) = v68; /*0x5262fc*/
            *(_DWORD *)(v65 + 48) = v72; /*0x5262ff*/
            *(_DWORD *)(v65 + 56) = 0; /*0x526302*/
            goto LABEL_126; /*0x526302*/
          }
        }
      }
      v74 = (INIClass *)v21->headNode[0]; /*0x526331*/
      v75 = *(CCINIClass **)(v65 + 36); /*0x526334*/
      if ( v74 ) /*0x526339*/
      {
        v76 = (INIClass *)v21->headNode[1]; /*0x52633b*/
        if ( v76 ) /*0x526340*/
        {
          v76->headNode[0] = (int)v74; /*0x526342*/
          *(_DWORD *)(v21->headNode[0] + 8) = v21->headNode[1]; /*0x52634b*/
          v21->headNode[1] = 0; /*0x52634e*/
          v21->headNode[0] = 0; /*0x526351*/
        }
      }
      v77 = (INIClass *)v75->headNode[0]; /*0x526354*/
      v21->headNode[1] = (int)v75; /*0x526357*/
      v21->headNode[0] = (int)v77; /*0x52635a*/
      v78 = (INIClass *)v75->headNode[0]; /*0x52635d*/
      if ( v78 ) /*0x526362*/
        v78->headNode[1] = (int)v21; /*0x526364*/
      v75->headNode[0] = (int)v21; /*0x526367*/
      goto LABEL_133; /*0x526367*/
    }
    break;
  }
  if ( v5 ) /*0x526385*/
  {
    do /*0x52639f*/
    {
      free(*(void **)v5->__pad_0); /*0x52638a*/
      v79 = (INIClass *)v5->headNode[0]; /*0x52638f*/
      __3_YAXPAX_Z(v5); /*0x526393*/
      v5 = v79; /*0x52639b*/
    }
    while ( v79 ); /*0x52639f*/
  }
  INIClass::ClearSection((int)v3, 0, 0); /*0x5263a7*/
LABEL_143:
  Vector::Clear((int)v95); /*0x5263f1*/
  Straw::Dtor(v94); /*0x5263fe*/
  return 0; /*0x525d76*/
}


// ==== 0x00526420  INIClass::SaveToPipe  this=INIClass  sig=csp ====
int __thiscall INIClass_SaveToPipe(_DWORD *this, int a2)
{
  int v2; // esi
  _DWORD v4[4]; // [esp+4h] [ebp-14h] BYREF
  char v5; // [esp+14h] [ebp-4h]

  this->headNode = 0; /*0x526429*/
  this->q008 = 0; /*0x52642c*/
  v4[1] = 0; /*0x52642f*/
  v4[2] = 0; /*0x526433*/
  v5 = 0; /*0x526437*/
  v4[3] = a2; /*0x526441*/
  v4[0] = &FilePipe::`vftable'; /*0x526445*/
  v2 = INIClass::WriteToString(this, (int)v4); /*0x526456*/
  FilePipe::Destructor(v4); /*0x526458*/
  return v2; /*0x52645f*/
}


// ==== 0x00526470  INIClass::WriteToString  this=AbstractClass  sig=csp ====
int __thiscall INIClass::WriteToString(_DWORD *this, CCINIClass *aP1)
{
  CCINIClass *v2; // edx
  int v3; // ebp
  int v4; // ebx
  _DWORD *v5; // eax
  int v6; // ebp
  int v7; // ebp
  int v8; // ebp
  int v9; // ebp
  int j; // ebx
  _DWORD *v11; // eax
  int v12; // ebp
  unsigned int v13; // kr20_4
  unsigned int v14; // kr24_4
  int v15; // edi
  int v16; // ebp
  int v17; // ebp
  int v18; // edi
  int v19; // ebp
  int v20; // eax
  int v21; // eax
  int v22; // eax
  CCINIClass *v23; // eax
  int v24; // ebp
  _DWORD *v26; // [esp+98h] [ebp-218h]
  int v27; // [esp+98h] [ebp-218h]
  _DWORD *i; // [esp+9Ch] [ebp-214h]
  CCINIClass *k; // [esp+A0h] [ebp-210h]
  int v31; // [esp+A4h] [ebp-20Ch]
  _BYTE v32[512]; // [esp+B0h] [ebp-200h] BYREF

  v2 = (CCINIClass *)this; /*0x526478*/
  v3 = 0; /*0x52647a*/
  this->vtable2 = 0; /*0x526485*/
  this->vtable3 = 0; /*0x526488*/
  v4 = this->abstractFlags; /*0x52648b*/
  memset(v32, 0x20u, sizeof(v32)); /*0x52649e*/
  v32[511] = 0; /*0x5264a4*/
  v31 = v4; /*0x5264ac*/
  if ( v4 ) /*0x5264b0*/
  {
    while ( *(_DWORD *)(v4 + 4) && *(_DWORD *)(v4 + 8) ) /*0x5264cc*/
    {
      if ( v3 > 0 && !*(_DWORD *)(v4 + 64) ) /*0x5264d6*/
        v3 += (*(int (__thiscall **)(CCINIClass *, CHAR *, unsigned int))(*(_DWORD *)aP1->__pad_0 + 16))( /*0x5264f9*/
                aP1,
                String2,
                strlen(String2));
      v5 = *(_DWORD **)(v4 + 64); /*0x5264fb*/
      for ( i = v5; v5; i = v5 ) /*0x526504*/
      {
        if ( *v5 ) /*0x526506*/
        {
          v6 = (*(int (__thiscall **)(CCINIClass *, _DWORD, unsigned int))(*(_DWORD *)aP1->__pad_0 + 16))( /*0x526521*/
                 aP1,
                 *v5,
                 strlen((const char *)*v5))
             + v3;
          v4 = v31; /*0x52653f*/
          v3 = (*(int (__thiscall **)(CCINIClass *, CHAR *, unsigned int))(*(_DWORD *)aP1->__pad_0 + 16))( /*0x526543*/
                 aP1,
                 String2,
                 strlen(String2))
             + v6;
          v5 = i; /*0x526545*/
        }
        v5 = (_DWORD *)v5[1]; /*0x526549*/
      }
      v7 = (*(int (__thiscall **)(CCINIClass *, char *, int))(*(_DWORD *)aP1->__pad_0 + 16))(aP1, asc_825B68, 1) + v3; /*0x526565*/
      v8 = (*(int (__thiscall **)(CCINIClass *, _DWORD, unsigned int))(*(_DWORD *)aP1->__pad_0 + 16))( /*0x526587*/
             aP1,
             *(_DWORD *)(v4 + 12),
             strlen(*(const char **)(v4 + 12)))
         + v7;
      v9 = (*(int (__thiscall **)(CCINIClass *, char *, int))(*(_DWORD *)aP1->__pad_0 + 16))(aP1, asc_825B64, 1) + v8; /*0x52658c*/
      v3 = (*(int (__thiscall **)(CCINIClass *, CHAR *, unsigned int))(*(_DWORD *)aP1->__pad_0 + 16))( /*0x5265aa*/
             aP1,
             String2,
             strlen(String2))
         + v9;
      for ( j = *(_DWORD *)(v31 + 24); j; v3 = v22 + v19 ) /*0x5265b5*/
      {
        if ( !*(_DWORD *)(j + 4) || !*(_DWORD *)(j + 8) ) /*0x5265c6*/
          break; /*0x5265cb*/
        v11 = *(_DWORD **)(j + 20); /*0x5265d1*/
        v26 = v11; /*0x5265d6*/
        if ( v11 ) /*0x5265da*/
        {
          while ( 1 ) /*0x5265e2*/
          {
            if ( *v11 ) /*0x5265e2*/
            {
              v12 = (*(int (__thiscall **)(CCINIClass *, _DWORD, unsigned int))(*(_DWORD *)aP1->__pad_0 + 16))( /*0x526601*/
                      aP1,
                      *v26,
                      strlen((const char *)*v11))
                  + v3;
              v3 = (*(int (__thiscall **)(CCINIClass *, CHAR *, unsigned int))(*(_DWORD *)aP1->__pad_0 + 16))( /*0x52661f*/
                     aP1,
                     String2,
                     strlen(String2))
                 + v12;
              v11 = v26; /*0x526621*/
            }
            v26 = (_DWORD *)v11[1]; /*0x52662a*/
            if ( !v26 ) /*0x52662e*/
              break; /*0x52662e*/
            v11 = (_DWORD *)v11[1]; /*0x5265de*/
          }
        }
        v13 = strlen(*(const char **)(j + 12)) + 1; /*0x52663a*/
        v27 = 0; /*0x52663f*/
        v14 = strlen(*(const char **)(j + 16)) + 1; /*0x526651*/
        v15 = *(_DWORD *)(j + 28) - (v13 - 1); /*0x52665c*/
        if ( v15 > 256 ) /*0x526669*/
          v15 = 256; /*0x52666b*/
        v16 = (*(int (__thiscall **)(CCINIClass *, _DWORD, unsigned int))(*(_DWORD *)aP1->__pad_0 + 16))( /*0x52667b*/
                aP1,
                *(_DWORD *)(j + 12),
                v13 - 1)
            + v3;
        if ( v15 > 0 ) /*0x52667f*/
        {
          v16 += (*(int (__thiscall **)(CCINIClass *, _BYTE *, int))(*(_DWORD *)aP1->__pad_0 + 16))(aP1, v32, v15); /*0x52668e*/
          v27 = v15; /*0x526690*/
        }
        v17 = (*(int (__thiscall **)(CCINIClass *, char *, int))(*(_DWORD *)aP1->__pad_0 + 16))( /*0x5266a9*/
                aP1,
                MEMORY[0x818A0C],
                1)
            + v16;
        v18 = *(_DWORD *)(j + 32) - v27 - v13; /*0x5266b3*/
        if ( v18 <= 256 ) /*0x5266ba*/
        {
          if ( v18 <= 0 ) /*0x5266c5*/
            goto LABEL_30; /*0x5266c5*/
        }
        else
        {
          v18 = 256; /*0x5266bc*/
        }
        v17 += (*(int (__thiscall **)(CCINIClass *, _BYTE *, int))(*(_DWORD *)aP1->__pad_0 + 16))(aP1, v32, v18); /*0x5266d4*/
        v27 += v18; /*0x5266dc*/
LABEL_30:
        v19 = (*(int (__thiscall **)(CCINIClass *, _DWORD, unsigned int))(*(_DWORD *)aP1->__pad_0 + 16))( /*0x5266e0*/
                aP1,
                *(_DWORD *)(j + 16),
                v14 - 1)
            + v17;
        if ( *(_DWORD *)(j + 24) ) /*0x5266f2*/
        {
          v20 = *(_DWORD *)(j + 36) - v27 - (v14 - 1) - v13; /*0x52670a*/
          if ( v20 > 256 ) /*0x526710*/
          {
            v20 = 256; /*0x526712*/
            goto LABEL_34; /*0x526717*/
          }
          if ( v20 > 0 ) /*0x52671b*/
LABEL_34:
            v19 += (*(int (__thiscall **)(CCINIClass *, _BYTE *, int))(*(_DWORD *)aP1->__pad_0 + 16))(aP1, v32, v20); /*0x52671d*/
          v21 = (*(int (__thiscall **)(CCINIClass *, char *, int))(*(_DWORD *)aP1->__pad_0 + 16))(aP1, Control, 1); /*0x526737*/
          v19 += (*(int (__thiscall **)(CCINIClass *, _DWORD, unsigned int))(*(_DWORD *)aP1->__pad_0 + 16))( /*0x526755*/
                   aP1,
                   *(_DWORD *)(j + 24),
                   strlen(*(const char **)(j + 24)))
               + v21;
        }
        v22 = (*(int (__thiscall **)(CCINIClass *, CHAR *, unsigned int))(*(_DWORD *)aP1->__pad_0 + 16))( /*0x526757*/
                aP1,
                String2,
                strlen(String2));
        j = *(_DWORD *)(j + 4); /*0x526773*/
      }
      v2 = (CCINIClass *)this; /*0x526780*/
      v31 = *(_DWORD *)(v31 + 4); /*0x52678d*/
      if ( !v31 ) /*0x526791*/
        break; /*0x526791*/
      v4 = v31; /*0x5264b8*/
    }
  }
  v23 = (CCINIClass *)v2->INIClass_field_3C; /*0x526797*/
  for ( k = v23; v23; k = v23 ) /*0x5267a0*/
  {
    if ( *(_DWORD *)v23->__pad_0 ) /*0x5267a2*/
    {
      v24 = (*(int (__thiscall **)(CCINIClass *, _DWORD, unsigned int))(*(_DWORD *)aP1->__pad_0 + 16))( /*0x5267bd*/
              aP1,
              *(_DWORD *)v23->__pad_0,
              strlen(*(const char **)v23->__pad_0))
          + v3;
      v3 = (*(int (__thiscall **)(CCINIClass *, CHAR *, unsigned int))(*(_DWORD *)aP1->__pad_0 + 16))( /*0x5267db*/
             aP1,
             String2,
             strlen(String2))
         + v24;
      v23 = k; /*0x5267dd*/
    }
    v23 = (CCINIClass *)v23->headNode[0]; /*0x5267e1*/
  }
  return v3 + (*(int (__thiscall **)(CCINIClass *))(*(_DWORD *)aP1->__pad_0 + 8))(aP1); /*0x5267f3*/
}


// ==== 0x00526810  INIClass::BinarySearchSection  this=IUnknown  sig=csp ====
int __thiscall INIClass::BinarySearchSection(int this, INIClass *aP1)
{
  int v3; // eax
  ObjectClass *v4; // ecx
  unsigned int v5; // edi
  ObjectClass *v6; // eax
  int v7; // edx
  int ecx7; // ecx
  int eax7; // eax
  ObjectClass *v8; // eax
  ObjectClass *v9; // ecx
  ObjectClass *v10; // ecx
  int v13; // ebp
  INIClass *v14; // edi
  int v15; // edx
  unsigned int v17[3]; // [esp+Ch] [ebp-Ch] BYREF
  INIClass *aP1a; // [esp+1Ch] [ebp+4h]

  if ( !aP1 ) /*0x526820*/
    return 0; /*0x526820*/
  memset(v17, 0, sizeof(v17)); /*0x52682d*/
  v3 = Checksummer::Add_Buffer(v17, (unsigned __int8 *)aP1, (IUnknown *)strlen(aP1->__pad_0)); /*0x526844*/
  v4 = *(ObjectClass **)(this + 44); /*0x526849*/
  v5 = v3; /*0x52684c*/
  aP1a = (INIClass *)v3; /*0x526850*/
  if ( !v4 ) /*0x526854*/
    return 0; /*0x526854*/
  v6 = *(ObjectClass **)(this + 56); /*0x52685a*/
  if ( v6 && *(_DWORD *)v6->__pad_0 == v5 ) /*0x526863*/
    goto LABEL_9; /*0x526863*/
  if ( !*(_BYTE *)(this + 52) ) /*0x526865*/
  {
    qsort(*(void **)(this + 40), (size_t)v4, 8u, CompareFunc4Int); /*0x526876*/
    *(_DWORD *)(this + 56) = 0; /*0x52687e*/
    *(_BYTE *)(this + 52) = 1; /*0x526881*/
  }
  v7 = *(_DWORD *)(this + 44); /*0x526885*/
  ecx7 = *(_DWORD *)(this + 40); /*0x52688d*/
  v17[0] = v5; /*0x526890*/
  eax7 = System_Search(ecx7, v7, (int *)v17); /*0x526894*/
  if ( !eax7 ) /*0x52689b*/
    return 0; /*0x526938*/
  *(_DWORD *)(this + 56) = eax7; /*0x5268a1*/
LABEL_9:
  v8 = *(ObjectClass **)(this + 44); /*0x5268a4*/
  if ( !v8 ) /*0x5268aa*/
    return unk_B7882C; /*0x5268aa*/
  v9 = *(ObjectClass **)(this + 56); /*0x5268ac*/
  if ( v9 && *(_DWORD *)v9->__pad_0 == v5 ) /*0x5268b5*/
    return *(_DWORD *)(*(_DWORD *)(this + 56) + 4); /*0x526933*/
  if ( !*(_BYTE *)(this + 52) ) /*0x5268b7*/
  {
    qsort(*(void **)(this + 40), (size_t)v8, 8u, CompareFunc4Int); /*0x5268c8*/
    *(_DWORD *)(this + 56) = 0; /*0x5268d0*/
    *(_BYTE *)(this + 52) = 1; /*0x5268d3*/
  }
  v10 = *(ObjectClass **)(this + 44); /*0x5268d7*/
  v13 = *(_DWORD *)(this + 40); /*0x5268da*/
  if ( (int)v10 <= 0 ) /*0x5268df*/
    return unk_B7882C; /*0x5268df*/
  while ( 1 ) /*0x5268ec*/
  {
    v14 = *(INIClass **)(v13 + 8 * ((int)v10 / 2)); /*0x5268ec*/
    v15 = v13 + 8 * ((int)v10 / 2); /*0x5268f0*/
    if ( (int)v14 <= (int)aP1a ) /*0x5268f6*/
      break; /*0x5268f6*/
    v10 = (ObjectClass *)((int)v10 / 2); /*0x5268f8*/
LABEL_19:
    if ( (int)v10 <= 0 ) /*0x52690a*/
      return unk_B7882C; /*0x52690a*/
  }
  if ( v14 != aP1a ) /*0x5268fc*/
  {
    v13 = v15 + 8; /*0x5268fe*/
    v10 = (ObjectClass *)((char *)v10 - 1 - (int)v10 / 2); /*0x526906*/
    goto LABEL_19; /*0x526906*/
  }
  if ( v15 ) /*0x52691f*/
  {
    *(_DWORD *)(this + 56) = v15; /*0x526921*/
    return *(_DWORD *)(*(_DWORD *)(this + 56) + 4); /*0x526921*/
  }
  return unk_B7882C; /*0x526912*/
}


// ==== 0x00526950  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_526950(_DWORD *this)
{
  return this->fallRate; /*0x526953*/
}


// ==== 0x00526960  INIClass::GetKeyCount  this=IUnknown  sig=csp ====
int __thiscall INIClass::GetKeyCount(char *this, INIClass *aP1)
{
  CCINIClass *v2; // esi
  INIClass *v3; // edi
  CCINIClass *v4; // eax
  size_t v5; // eax
  int v6; // eax
  CCINIClass *v7; // eax
  size_t v8; // eax
  int *v9; // esi
  int v10; // esi
  unsigned int v12[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !aP1 ) /*0x52696d*/
    return 0; /*0x52696d*/
  memset(v12, 0, sizeof(v12)); /*0x52697a*/
  v2 = (CCINIClass *)(this + 40); /*0x5269a2*/
  v3 = (INIClass *)Checksummer::Add_Buffer(v12, (unsigned __int8 *)aP1, (IUnknown *)strlen(aP1->__pad_0)); /*0x5269a5*/
  aP1 = v3; /*0x5269a7*/
  if ( !v2->headNode[0] ) /*0x5269ab*/
    return 0; /*0x5269b0*/
  v4 = (CCINIClass *)v2->sectionHead[0]; /*0x5269b2*/
  if ( !v4 || *(INIClass **)v4->__pad_0 != v3 ) /*0x5269bb*/
  {
    v5 = SortedArray::BinarySearch((char **)v2, (CCINIClass *)&aP1); /*0x5269c4*/
    if ( !v5 ) /*0x5269cb*/
      return 0; /*0x5269cb*/
    v2->sectionHead[0] = v5; /*0x5269cd*/
  }
  v6 = v2->headNode[0]; /*0x5269d0*/
  aP1 = v3; /*0x5269d3*/
  if ( v6 ) /*0x5269d9*/
  {
    v7 = (CCINIClass *)v2->sectionHead[0]; /*0x5269db*/
    if ( v7 && *(INIClass **)v7->__pad_0 == v3 ) /*0x5269e4*/
      goto LABEL_12; /*0x5269e4*/
    v8 = SortedArray::BinarySearch((char **)v2, (CCINIClass *)&aP1); /*0x5269ed*/
    if ( v8 ) /*0x5269f4*/
    {
      v2->sectionHead[0] = v8; /*0x5269f6*/
LABEL_12:
      v9 = (int *)(v2->sectionHead[0] + 4); /*0x5269f9*/
      goto LABEL_14; /*0x5269ff*/
    }
  }
  v9 = (int *)&unk_B7882C; /*0x526a01*/
LABEL_14:
  v10 = *v9; /*0x526a06*/
  if ( v10 ) /*0x526a0a*/
    return *(_DWORD *)(v10 + 48); /*0x526a14*/
  return 0; /*0x526a0f*/
}


// ==== 0x00526A30  INIClass::FindKey  this=ObjectClass  sig=csp ====
int __thiscall INIClass::FindKey(char *this, AbstractClass *aP1)
{
  unsigned __int8 *v3; // eax
  CCINIClass *v4; // esi
  AbstractClass *v5; // edi
  CCINIClass *v6; // eax
  size_t v7; // eax
  int v8; // eax
  CCINIClass *v9; // eax
  size_t v10; // eax
  int *v11; // esi
  int v12; // esi
  INIClass *v14; // [esp+8h] [ebp-10h] BYREF
  unsigned int v15[3]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = (unsigned __int8 *)String::GetOrEmpty_Alt((char **)aP1); /*0x526a3b*/
  if ( !v3 ) /*0x526a44*/
    return 0; /*0x526a44*/
  memset(v15, 0, sizeof(v15)); /*0x526a51*/
  v4 = (CCINIClass *)(this + 40); /*0x526a79*/
  v5 = (AbstractClass *)Checksummer::Add_Buffer(v15, v3, (IUnknown *)strlen((const char *)v3)); /*0x526a7c*/
  aP1 = v5; /*0x526a7e*/
  if ( !v4->headNode[0] ) /*0x526a82*/
    return 0; /*0x526a87*/
  v6 = (CCINIClass *)v4->sectionHead[0]; /*0x526a89*/
  if ( !v6 || *(AbstractClass **)v6->__pad_0 != v5 ) /*0x526a92*/
  {
    v7 = SortedArray::BinarySearch((char **)v4, (CCINIClass *)&aP1); /*0x526a9b*/
    if ( !v7 ) /*0x526aa2*/
      return 0; /*0x526aa2*/
    v4->sectionHead[0] = v7; /*0x526aa4*/
  }
  v8 = v4->headNode[0]; /*0x526aa7*/
  v14 = (INIClass *)v5; /*0x526aaa*/
  if ( v8 ) /*0x526ab0*/
  {
    v9 = (CCINIClass *)v4->sectionHead[0]; /*0x526ab2*/
    if ( v9 && *(AbstractClass **)v9->__pad_0 == v5 ) /*0x526abb*/
      goto LABEL_12; /*0x526abb*/
    v10 = SortedArray::BinarySearch((char **)v4, (CCINIClass *)&v14); /*0x526ac4*/
    if ( v10 ) /*0x526acb*/
    {
      v4->sectionHead[0] = v10; /*0x526acd*/
LABEL_12:
      v11 = (int *)(v4->sectionHead[0] + 4); /*0x526ad0*/
      goto LABEL_14; /*0x526ad6*/
    }
  }
  v11 = (int *)&unk_B7882C; /*0x526ad8*/
LABEL_14:
  v12 = *v11; /*0x526add*/
  if ( v12 ) /*0x526ae1*/
    return *(_DWORD *)(v12 + 48); /*0x526aeb*/
  return 0; /*0x526ae6*/
}


// ==== 0x00526B00  INIClass::ResetSection  this=IUnknown  sig=csp ====
int __thiscall INIClass_ResetSection(_DWORD *this)
{
  this->q004 = 0; /*0x526b02*/
  this->q008 = 0; /*0x526b05*/
  return 0; /*0x526b08*/
}


// ==== 0x00526B10  HashTableSection::FindSection  this=IUnknown  sig=csp ====
int __thiscall HashTableSection::FindSection(int this, CCINIClass *aP1, CCINIClass *aP2)
{
  CCINIClass *v3; // ebx
  int v5; // esi
  CCINIClass *v6; // eax
  ObjectClass *v7; // ecx
  CCINIClass *v8; // esi
  CCINIClass **v9; // edx
  int edx10; // edx
  int v11; // ecx
  AudioController *v10; // eax
  CCINIClass **v13; // ecx
  size_t v14; // eax
  CCINIClass *v16; // edi
  CCINIClass **v17; // eax
  size_t v18; // eax
  int *v19; // esi
  CCINIClass *v20; // [esp+10h] [ebp-1Ch] BYREF
  unsigned int v21[3]; // [esp+14h] [ebp-18h] BYREF
  unsigned int v22[3]; // [esp+20h] [ebp-Ch] BYREF

  v3 = aP1; /*0x526b14*/
  if ( aP1 == *(CCINIClass **)(this + 4) ) /*0x526b20*/
  {
    v5 = *(_DWORD *)(this + 8); /*0x526b26*/
    goto LABEL_3; /*0x526b26*/
  }
  if ( !aP1 ) /*0x526c07*/
    goto LABEL_29; /*0x526c07*/
  memset(v21, 0, sizeof(v21)); /*0x526c17*/
  v16 = (CCINIClass *)Checksummer::Add_Buffer(v21, (unsigned __int8 *)aP1, (IUnknown *)strlen(aP1->__pad_0)); /*0x526c31*/
  aP1 = v16; /*0x526c33*/
  if ( !*(_DWORD *)(this + 44) ) /*0x526c37*/
    goto LABEL_29; /*0x526c37*/
  v17 = *(CCINIClass ***)(this + 56); /*0x526c3e*/
  if ( v17 && *v17 == v16 ) /*0x526c47*/
    goto LABEL_24; /*0x526c47*/
  v18 = SortedArray::BinarySearch((char **)(this + 40), (CCINIClass *)&aP1); /*0x526c50*/
  if ( !v18 ) /*0x526c57*/
  {
LABEL_29:
    *(_DWORD *)(this + 4) = 0; /*0x526c90*/
    *(_DWORD *)(this + 8) = 0; /*0x526c93*/
    return 0; /*0x526c93*/
  }
  *(_DWORD *)(this + 56) = v18; /*0x526c59*/
LABEL_24:
  v20 = v16; /*0x526c5c*/
  if ( HashTable::BinarySearch(this + 40, (ObjectClass *)&v20) ) /*0x526c67*/
    v19 = (int *)(*(_DWORD *)(this + 56) + 4); /*0x526c73*/
  else
    v19 = (int *)&unk_B7882C; /*0x526c78*/
  v5 = *v19; /*0x526c7d*/
  if ( !v5 ) /*0x526c81*/
    goto LABEL_29; /*0x526c81*/
  *(_DWORD *)(this + 8) = v5; /*0x526c83*/
  *(_DWORD *)(this + 4) = v3; /*0x526c86*/
LABEL_3:
  if ( !v5 ) /*0x526b2d*/
    return 0; /*0x526b2d*/
  if ( !aP2 ) /*0x526b39*/
    return 0; /*0x526b39*/
  memset(v22, 0, sizeof(v22)); /*0x526b46*/
  v6 = (CCINIClass *)Checksummer::Add_Buffer(v22, (unsigned __int8 *)aP2, (IUnknown *)strlen(aP2->__pad_0)); /*0x526b5d*/
  v7 = *(ObjectClass **)(v5 + 48); /*0x526b62*/
  v8 = (CCINIClass *)(v5 + 44); /*0x526b65*/
  aP1 = v6; /*0x526b6a*/
  if ( !v7 ) /*0x526b6e*/
    return 0; /*0x526b6e*/
  v9 = (CCINIClass **)v8->sectionHead[0]; /*0x526b74*/
  if ( v9 && *v9 == v6 ) /*0x526b7d*/
    goto LABEL_12; /*0x526b7d*/
  if ( !LOBYTE(v8->headNode[2]) ) /*0x526b7f*/
  {
    qsort(*(void **)v8->__pad_0, (size_t)v7, 8u, CompareFunc3Int); /*0x526b91*/
    v6 = aP1; /*0x526b96*/
    v8->sectionHead[0] = 0; /*0x526b9d*/
    LOBYTE(v8->headNode[2]) = 1; /*0x526ba0*/
  }
  edx10 = v8->headNode[0]; /*0x526ba4*/
  v11 = *(_DWORD *)v8->__pad_0; /*0x526ba7*/
  v21[0] = (unsigned int)v6; /*0x526ba9*/
  v10 = (AudioController *)UI_Find(v11, edx10, (int *)v21); /*0x526bb2*/
  if ( !v10 ) /*0x526bb9*/
    return 0; /*0x526c9f*/
  v8->sectionHead[0] = (int)v10; /*0x526bbf*/
  v6 = aP1; /*0x526bc2*/
LABEL_12:
  if ( v8->headNode[0] ) /*0x526bc6*/
  {
    v13 = (CCINIClass **)v8->sectionHead[0]; /*0x526bcf*/
    if ( v13 && *v13 == v6 ) /*0x526bd8*/
      return *(_DWORD *)(v8->sectionHead[0] + 4); /*0x526bd8*/
    v14 = HashTable::BinarySearchAlt((char **)v8, (CCINIClass *)&aP1); /*0x526be1*/
    if ( v14 ) /*0x526be8*/
    {
      v8->sectionHead[0] = v14; /*0x526bee*/
      return *(_DWORD *)(v8->sectionHead[0] + 4); /*0x526c00*/
    }
  }
  return unk_B78830; /*0x526bf4*/
}


// ==== 0x00526CC0  INIClass::GetStringByIndex  this=IUnknown  sig=csp ====
int __thiscall INIClass::GetStringByIndex(char *this, CCINIClass *aP1, CCINIClass *aP2)
{
  CCINIClass *v3; // esi
  CCINIClass *v4; // edi
  size_t v5; // eax
  int v6; // eax
  CCINIClass *v7; // edx
  _DWORD *v8; // eax
  unsigned int v10[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !aP1 ) /*0x526ccd*/
    return 0; /*0x526ccd*/
  memset(v10, 0, sizeof(v10)); /*0x526cda*/
  v3 = (CCINIClass *)(this + 40); /*0x526d02*/
  v4 = (CCINIClass *)Checksummer::Add_Buffer(v10, (unsigned __int8 *)aP1, (IUnknown *)strlen(aP1->__pad_0)); /*0x526d05*/
  aP1 = v4; /*0x526d07*/
  if ( !v3->headNode[0] ) /*0x526d0b*/
    return 0; /*0x526d10*/
  if ( !SortedArray::CheckCache(v3, &aP1) ) /*0x526d19*/
  {
    v5 = SortedArray::BinarySearch((char **)v3, (CCINIClass *)&aP1); /*0x526d29*/
    if ( !v5 ) /*0x526d30*/
      return 0; /*0x526d30*/
    v3->sectionHead[0] = v5; /*0x526d32*/
  }
  aP1 = v4; /*0x526d3c*/
  v6 = *(_DWORD *)SortedArray::FindValue((int)v3, (INIClass *)&aP1); /*0x526d45*/
  if ( v6 ) /*0x526d49*/
  {
    v7 = aP2; /*0x526d4b*/
    if ( (int)aP2 < *(_DWORD *)(v6 + 48) ) /*0x526d54*/
    {
      v8 = *(_DWORD **)(v6 + 24); /*0x526d56*/
      if ( v8 ) /*0x526d5b*/
      {
        while ( v8[1] && v8[2] ) /*0x526d69*/
        {
          if ( !v7 ) /*0x526d6d*/
            return v8[3]; /*0x526d80*/
          v8 = (_DWORD *)v8[1]; /*0x526d6f*/
          v7 = (CCINIClass *)((char *)v7 - 1); /*0x526d71*/
        }
      }
    }
  }
  return 0; /*0x526d7b*/
}


// ==== 0x00526D90  INIClass::GetStringByIndexEx  this=ObjectClass  sig=csp ====
char **__thiscall INIClass::GetStringByIndexEx(void *this, ObjectClass *aP1, ObjectClass *aP2, ObjectClass *aP3)
{
  ObjectClass *v4; // ebp
  unsigned __int8 *v6; // eax
  CCINIClass *v7; // esi
  ObjectClass *v8; // edi
  size_t v9; // eax
  int v10; // eax
  _DWORD *v11; // eax
  const char *v12; // eax
  INIClass *v14; // [esp+Ch] [ebp-10h] BYREF
  unsigned int v15[3]; // [esp+10h] [ebp-Ch] BYREF

  v4 = aP3; /*0x526d94*/
  v6 = (unsigned __int8 *)String::GetOrEmpty_Alt((char **)aP2); /*0x526da0*/
  if ( !v6 ) /*0x526da9*/
    goto LABEL_14; /*0x526da9*/
  memset(v15, 0, sizeof(v15)); /*0x526db6*/
  v7 = (CCINIClass *)((char *)this + 40); /*0x526dde*/
  v8 = (ObjectClass *)Checksummer::Add_Buffer(v15, v6, (IUnknown *)strlen((const char *)v6)); /*0x526de1*/
  aP2 = v8; /*0x526de3*/
  if ( !v7->headNode[0] ) /*0x526de7*/
    goto LABEL_14; /*0x526dec*/
  if ( !SortedArray::CheckCache(v7, &aP2) ) /*0x526df5*/
  {
    v9 = SortedArray::BinarySearch((char **)v7, (CCINIClass *)&aP2); /*0x526e05*/
    if ( !v9 ) /*0x526e0c*/
      goto LABEL_14; /*0x526e0c*/
    v7->sectionHead[0] = v9; /*0x526e0e*/
  }
  v14 = (INIClass *)v8; /*0x526e18*/
  v10 = *(_DWORD *)SortedArray::FindValue((int)v7, (INIClass *)&v14); /*0x526e21*/
  if ( v10 ) /*0x526e25*/
  {
    if ( (int)aP3 < *(_DWORD *)(v10 + 48) ) /*0x526e30*/
    {
      v11 = *(_DWORD **)(v10 + 24); /*0x526e32*/
      if ( v11 ) /*0x526e37*/
      {
        while ( v11[1] && v11[2] ) /*0x526e45*/
        {
          if ( !v4 ) /*0x526e49*/
          {
            v12 = (const char *)v11[3]; /*0x526e54*/
            goto LABEL_15; /*0x526e57*/
          }
          v11 = (_DWORD *)v11[1]; /*0x526e4b*/
          v4 = (ObjectClass *)((char *)v4 - 1); /*0x526e4d*/
        }
      }
    }
  }
LABEL_14:
  v12 = 0; /*0x526e59*/
LABEL_15:
  String::Assign((char **)aP1, v12); /*0x526e5b*/
  return (char **)aP1; /*0x526e69*/
}


// ==== 0x00526E80  INIClass::ReadBase64Data  this=AbstractClass  sig=csp ====
char __thiscall INIClass::ReadBase64Data(char *this, unsigned __int8 *Block, ObjectClass *aP2, ObjectClass *aP3)
{
  INIClass *v5; // esi
  size_t v6; // eax
  size_t v7; // eax
  AbstractTypeClass aP1; // [esp+10h] [ebp-A0h] BYREF

  if ( !Block || !aP2 || (int)aP3 < 1 ) /*0x526eb4*/
    return 0; /*0x526fa4*/
  INIClass::ClearSection((int)this, (INIClass *)Block, 0); /*0x526ebc*/
  *(_DWORD *)&aP1.__pad_0[4] = 0; /*0x526ece*/
  *(_DWORD *)&aP1.__pad_0[8] = 0; /*0x526ed2*/
  Buffer::Init(&aP1.__pad_0[12], (int)aP2, (AbstractClass *)aP3); /*0x526ede*/
  aP1.nextArrayIndex = 0; /*0x526ee7*/
  *(_DWORD *)aP1.__pad_0 = &vt_BufferStraw; /*0x526ef0*/
  memset(&aP1.NeedsSaveOrLink, 0, 16); /*0x526ef8*/
  aP1.referenceCount = (int)&Base64Straw::`vftable'; /*0x526f08*/
  Delegate::Set(&aP1.referenceCount, &aP1); /*0x526f10*/
  v5 = (INIClass *)1; /*0x526f21*/
  v6 = BitmapClass::ProcessFrame((Base64Straw *)&aP1.referenceCount, &aP1.__pad_24[20], 70); /*0x526f26*/
  aP1.__pad_24[v6 + 20] = 0; /*0x526f2d*/
  if ( v6 ) /*0x526f31*/
  {
    do /*0x526f75*/
    {
      sprintf(&aP1.Name[28], MEMORY[0x817F6C], v5); /*0x526f41*/
      INIClass::SetString(this, (INIClass *)Block, (INIClass *)&aP1.Name[28], (INIClass *)&aP1.__pad_24[20]); /*0x526f59*/
      v5 = (INIClass *)((char *)v5 + 1); /*0x526f69*/
      v7 = BitmapClass::ProcessFrame((Base64Straw *)&aP1.referenceCount, &aP1.__pad_24[20], 70); /*0x526f6a*/
      aP1.__pad_24[v7 + 20] = 0; /*0x526f71*/
    }
    while ( v7 ); /*0x526f75*/
  }
  Straw::Dtor(&aP1.referenceCount); /*0x526f7b*/
  Vector::Clear((int)&aP1.__pad_0[12]); /*0x526f84*/
  Straw::Dtor((int *)aP1.__pad_0); /*0x526f8d*/
  return 1; /*0x526f92*/
}


// ==== 0x00526FB0  INIClass::GetBase64Data  this=IUnknown  sig=csp ====
int __thiscall INIClass_GetBase64Data(void *this, char *a2, int a3, size_t Size)
{
  unsigned int v6; // kr04_4
  unsigned int *v7; // eax
  int v8; // esi
  int v9; // eax
  int i; // ebp
  int v11; // edi
  int v12; // esi
  int v13; // eax
  _DWORD *v14; // eax
  unsigned __int8 *v15; // eax
  const char *v16; // esi
  int v17; // eax
  const char *v18; // eax
  size_t v19; // ecx
  int v20; // eax
  int v21; // esi
  int v22; // [esp-4h] [ebp-E0h] BYREF
  int v23; // [esp+Ch] [ebp-D0h] BYREF
  int v24; // [esp+10h] [ebp-CCh]
  int v25; // [esp+14h] [ebp-C8h]
  int v26[7]; // [esp+18h] [ebp-C4h] BYREF
  int v27[3]; // [esp+34h] [ebp-A8h] BYREF
  _DWORD v28[4]; // [esp+40h] [ebp-9Ch] BYREF
  int v29[3]; // [esp+50h] [ebp-8Ch] BYREF
  char Destination[128]; // [esp+5Ch] [ebp-80h] BYREF

  v25 = (int)this; /*0x526fc6*/
  if ( !a2 ) /*0x526fca*/
    return 0; /*0x526fd7*/
  v26[1] = 0; /*0x526fef*/
  v26[2] = 0; /*0x526ff3*/
  v26[3] = 1; /*0x526ff7*/
  v26[4] = 0; /*0x526fff*/
  v26[0] = (int)&Base64Pipe::`vftable'; /*0x527003*/
  v27[1] = 0; /*0x52700b*/
  v27[2] = 0; /*0x52700f*/
  Buffer::Init(v28, a3, Size); /*0x52701b*/
  v28[3] = 0; /*0x527029*/
  v27[0] = (int)&vt_BufferPipe; /*0x52702d*/
  Pipe::SetDelegate(v27); /*0x527035*/
  v24 = 0; /*0x527041*/
  v6 = strlen(a2) + 1; /*0x527045*/
  v7 = KeyValuePair::Init(v29, 0); /*0x527051*/
  v8 = Checksummer::Add_Buffer(v7, (unsigned __int8 *)a2, v6 - 1); /*0x52705d*/
  v23 = v8; /*0x527069*/
  if ( HashTable::BinarySearch((int)this + 40, &v23) /*0x52708a*/
    && (v23 = v8, (v9 = *(_DWORD *)SortedArray::FindValue((int)this + 40, &v23)) != 0) )
  {
    v23 = *(_DWORD *)(v9 + 48); /*0x52708f*/
  }
  else
  {
    v23 = 0; /*0x527095*/
  }
  for ( i = 0; i < v23; v24 += v20 ) /*0x5270a1*/
  {
    v11 = v25; /*0x5270ae*/
    v12 = i; /*0x5270b5*/
    v13 = INIClass::BinarySearchSection(v25, (unsigned __int8 *)a2); /*0x5270b7*/
    if ( v13 ) /*0x5270be*/
    {
      if ( i < *(_DWORD *)(v13 + 48) ) /*0x5270c3*/
      {
        v14 = *(_DWORD **)(v13 + 24); /*0x5270c5*/
        if ( v14 ) /*0x5270ca*/
        {
          while ( v14[1] && v14[2] ) /*0x5270d6*/
          {
            if ( !v12 ) /*0x5270da*/
            {
              v15 = (unsigned __int8 *)v14[3]; /*0x5270e5*/
              goto LABEL_17; /*0x5270e8*/
            }
            v14 = (_DWORD *)v14[1]; /*0x5270dc*/
            --v12; /*0x5270de*/
          }
        }
      }
    }
    v15 = 0; /*0x5270ea*/
LABEL_17:
    v16 = MEMORY[0x818A0C]; /*0x5270ec*/
    if ( &v22 != (int *)-96 && v15 ) /*0x5270fb*/
    {
      v17 = HashTableSection::FindSection(v11, (unsigned __int8 *)a2, v15); /*0x527108*/
      if ( v17 ) /*0x52710f*/
      {
        v18 = *(const char **)(v17 + 16); /*0x527111*/
        if ( v18 ) /*0x527116*/
          v16 = v18; /*0x527118*/
      }
      if ( v16 ) /*0x52711c*/
      {
        strncpy(Destination, v16, 0x80u); /*0x527190*/
        Destination[127] = 0; /*0x52719c*/
        String::Trim(Destination); /*0x5271a3*/
        v19 = strlen(Destination); /*0x5271b5*/
        goto LABEL_25; /*0x5271b6*/
      }
      Destination[0] = 0; /*0x52711e*/
    }
    v19 = 0; /*0x527122*/
LABEL_25:
    v20 = Delegate::ProcessBitmapStream(Destination, v19); /*0x527124*/
    ++i; /*0x52713d*/
  }
  v21 = (*(int (__thiscall **)(int *))(v26[0] + 4))(v26); /*0x52714a*/
  Vector::Clear((int)v28); /*0x52715b*/
  Pipe::Dtor(v27); /*0x527164*/
  Pipe::Dtor(v26); /*0x52716d*/
  return v21 + v24; /*0x526fcc*/
}


// ==== 0x005271C0  INIClass::ReadIntList2  this=INIClass  sig=csp ====
char __thiscall INIClass::ReadIntList2(char *this, INIClass *aP1, char *Source)
{
  char *v4; // ebp
  INIClass *i; // ebx
  unsigned int v6; // kr04_4
  unsigned int v7; // esi
  char v8; // al
  INIClass Buffer; // [esp+4h] [ebp-A0h] BYREF
  char v11; // [esp+6Fh] [ebp-35h]

  if ( !aP1 ) /*0x5271d3*/
    return 0; /*0x5271d5*/
  INIClass::ClearSection((int)this, aP1, 0); /*0x5271e7*/
  v4 = Source; /*0x5271ec*/
  for ( i = (INIClass *)1; v4; v4 += v7 ) /*0x5271fa*/
  {
    if ( !*v4 ) /*0x527200*/
      break; /*0x527200*/
    strncpy(Buffer.__pad_20, v4, 0x4Bu); /*0x527212*/
    v11 = 0; /*0x527222*/
    sprintf(Buffer.__pad_0, MEMORY[0x817F6C], i); /*0x52722a*/
    v6 = strlen(Buffer.__pad_20) + 1; /*0x52723b*/
    v7 = v6 - 1; /*0x527240*/
    if ( (int)(v6 - 1) <= 0 ) /*0x527244*/
      break; /*0x527244*/
    if ( (int)(v6 - 1) >= 75 ) /*0x527249*/
    {
      while ( 1 ) /*0x52724b*/
      {
        v8 = Buffer.__pad_20[v7]; /*0x52724b*/
        if ( v8 ) /*0x527251*/
        {
          if ( (unsigned __int8)v8 <= 0x20u ) /*0x527255*/
            break; /*0x527255*/
        }
        if ( !--v7 ) /*0x527258*/
          return 1; /*0x527258*/
      }
      if ( !v7 ) /*0x52725e*/
        return 1; /*0x52725e*/
      Buffer.__pad_20[v7] = 0; /*0x527260*/
    }
    String::Trim(Buffer.__pad_20); /*0x527269*/
    INIClass::SetString(this, aP1, &Buffer, (INIClass *)Buffer.__pad_20); /*0x527284*/
    i = (INIClass *)((char *)i + 1); /*0x527289*/
  }
  return 1; /*0x5271d7*/
}


// ==== 0x005272B0  ObjectClass::LookupCSFString  this=ObjectClass  sig=csp ====
unsigned __int8 *__thiscall LookupCSFString(_DWORD *this, unsigned __int8 *a2, char *Destination, int Count)
{
  int v4; // eax
  char *v6; // ebx
  int v7; // esi
  unsigned __int8 *v8; // edi
  int *v9; // esi
  int v10; // esi
  int v11; // eax
  char *v12; // ecx
  int v13; // edx
  int v14; // ebp
  unsigned int v15; // kr08_4
  unsigned int *inited; // eax
  int v17; // esi
  int v18; // eax
  _DWORD *v19; // eax
  char *v20; // ebp
  int v21; // esi
  unsigned int v22; // kr0C_4
  unsigned int *v23; // eax
  int v24; // esi
  int v25; // eax
  char *v26; // eax
  unsigned int v27; // kr10_4
  unsigned int *v28; // eax
  int v29; // esi
  char *v30; // ecx
  unsigned int v31; // kr14_4
  bool v32; // cc
  int v34; // [esp+Ch] [ebp-40h]
  int v35; // [esp+10h] [ebp-3Ch]
  int v36; // [esp+14h] [ebp-38h] BYREF
  char *Source; // [esp+18h] [ebp-34h]
  int v38; // [esp+1Ch] [ebp-30h] BYREF
  int v39; // [esp+20h] [ebp-2Ch] BYREF
  int v40; // [esp+24h] [ebp-28h] BYREF
  unsigned int v41[3]; // [esp+28h] [ebp-24h] BYREF
  _DWORD v42[3]; // [esp+34h] [ebp-18h] BYREF
  _DWORD v43[3]; // [esp+40h] [ebp-Ch] BYREF

  v4 = Count; /*0x5272b3*/
  if ( Count <= 0 ) /*0x5272c3*/
    return 0; /*0x5272cc*/
  *Destination = 0; /*0x5272d6*/
  if ( v4 <= 1 ) /*0x5272d9*/
    return 0; /*0x5272e2*/
  v6 = (char *)a2; /*0x5272e6*/
  if ( a2
    && (memset(v41, 0, sizeof(v41)),
        v7 = (int)(this + 10),
        v8 = (unsigned __int8 *)Checksummer::Add_Buffer(v41, a2, strlen((const char *)a2)),
        a2 = v8,
        HashTable::BinarySearch(v7, (int *)&a2))
    && ((a2 = v8, !HashTable::BinarySearch(v7, (int *)&a2))
      ? (v9 = (int *)&unk_B7882C)
      : (v9 = (int *)(*(_DWORD *)(v7 + 16) + 4)),
        (v10 = *v9) != 0) )
  {
    v35 = *(_DWORD *)(v10 + 48); /*0x527355*/
  }
  else
  {
    v35 = 0; /*0x52735b*/
  }
  v11 = 0; /*0x527363*/
  a2 = 0; /*0x527367*/
  v34 = 0; /*0x52736b*/
  if ( v35 > 0 ) /*0x52736f*/
  {
    while ( 1 ) /*0x527379*/
    {
      if ( v11 > 0 ) /*0x52737b*/
      {
        v12 = Destination; /*0x52737d*/
        v13 = Count; /*0x527381*/
        *Destination = 32; /*0x527385*/
        Destination = v12 + 1; /*0x527389*/
        Count = v13 - 1; /*0x527393*/
        ++a2; /*0x527397*/
      }
      v14 = v11; /*0x52739d*/
      if ( v6 ) /*0x52739f*/
      {
        v15 = strlen(v6) + 1; /*0x5273ac*/
        inited = KeyValuePair::Init(v41, 0); /*0x5273b8*/
        v17 = Checksummer::Add_Buffer(inited, (unsigned __int8 *)v6, v15 - 1); /*0x5273c8*/
        v38 = v17; /*0x5273ce*/
        if ( HashTable::BinarySearch((int)(this + 10), &v38) ) /*0x5273d8*/
        {
          v39 = v17; /*0x5273e5*/
          v18 = *(_DWORD *)SortedArray::FindValue((int)(this + 10), &v39); /*0x5273f1*/
          if ( v18 ) /*0x5273f5*/
          {
            if ( v34 < *(_DWORD *)(v18 + 48) ) /*0x527400*/
            {
              v19 = *(_DWORD **)(v18 + 24); /*0x527402*/
              if ( v19 ) /*0x527407*/
              {
                while ( v19[1] && v19[2] ) /*0x527415*/
                {
                  if ( !v14 ) /*0x527419*/
                  {
                    v20 = (char *)v19[3]; /*0x527424*/
                    goto LABEL_27; /*0x527427*/
                  }
                  v19 = (_DWORD *)v19[1]; /*0x52741b*/
                  --v14; /*0x52741d*/
                }
              }
            }
          }
        }
      }
      v20 = 0; /*0x527429*/
LABEL_27:
      Source = &MEMORY[0x889F64]; /*0x52742b*/
      if ( !Destination || Count < 2 || !v6 || !v20 ) /*0x527454*/
        goto LABEL_45; /*0x527454*/
      if ( v6 == (char *)this->vtable2 ) /*0x527461*/
        break; /*0x527461*/
      v27 = strlen(v6) + 1; /*0x5274d7*/
      v28 = KeyValuePair::Init(v42, 0); /*0x5274e3*/
      v29 = Checksummer::Add_Buffer(v28, (unsigned __int8 *)v6, v27 - 1); /*0x5274ef*/
      v40 = v29; /*0x5274f9*/
      if ( HashTable::BinarySearch((int)(this + 10), &v40) ) /*0x527503*/
      {
        v40 = v29; /*0x527513*/
        v21 = *(_DWORD *)SortedArray::FindValue((int)(this + 10), &v40); /*0x52751c*/
        if ( v21 ) /*0x527520*/
        {
          this->vtable3 = v21; /*0x527526*/
          this->vtable2 = v6; /*0x527529*/
          goto LABEL_33; /*0x52752c*/
        }
      }
      this->vtable2 = 0; /*0x527537*/
      this->vtable3 = 0; /*0x52753a*/
LABEL_38:
      if ( Source ) /*0x5274c3*/
      {
        strncpy(Destination, Source, Count); /*0x52754d*/
        v30 = Destination; /*0x527552*/
        Destination[Count - 1] = 0; /*0x52755d*/
        String::Trim(v30); /*0x527562*/
      }
      else
      {
        *Destination = 0; /*0x5274c9*/
      }
LABEL_45:
      v31 = strlen(Destination) + 1; /*0x527567*/
      v32 = (int)(Count - (v31 - 1)) <= 1; /*0x527585*/
      a2 += v31 - 1; /*0x527588*/
      Destination += v31 - 1; /*0x52758c*/
      Count -= v31 - 1; /*0x527590*/
      if ( !v32 ) /*0x527594*/
      {
        v11 = ++v34; /*0x52759e*/
        if ( v34 < v35 ) /*0x5275a5*/
          continue; /*0x5275a5*/
      }
      return a2; /*0x5275a5*/
    }
    v21 = this->vtable3; /*0x527463*/
LABEL_33:
    if ( v21 ) /*0x527468*/
    {
      v22 = strlen(v20) + 1; /*0x527471*/
      v23 = KeyValuePair::Init(v43, 0); /*0x52747d*/
      v36 = Checksummer::Add_Buffer(v23, (unsigned __int8 *)v20, v22 - 1); /*0x527489*/
      v24 = v21 + 44; /*0x52748d*/
      if ( SortedArray::Find(v24, &v36) ) /*0x527497*/
      {
        v25 = *(_DWORD *)SortedArray::BinarySearch2(v24, &v36); /*0x5274ac*/
        if ( v25 ) /*0x5274b0*/
        {
          v26 = *(char **)(v25 + 16); /*0x5274b2*/
          if ( v26 ) /*0x5274b7*/
            Source = v26; /*0x5274b9*/
        }
      }
    }
    goto LABEL_38; /*0x5274b9*/
  }
  return a2; /*0x5272c5*/
}


// ==== 0x005275C0  INIClass::SetInt  this=AbstractClass  sig=csp ====
char __thiscall INIClass::SetInt(char *this, INIClass *aP1, CCINIClass *aP2, INIClass *aP3, int a5)
{
  ObjectClass *v7; // [esp-8h] [ebp-20Ch]
  INIClass Buffer[8]; // [esp+4h] [ebp-200h] BYREF

  if ( a5 == 1 ) /*0x5275ce*/
  {
    sprintf(Buffer[0].__pad_0, &stru_825BAC, aP3); /*0x52760d*/
  }
  else
  {
    if ( a5 == 2 ) /*0x5275d1*/
      v7 = (ObjectClass *)&stru_825BAC.__pad_0[4]; /*0x5275f3*/
    else
      v7 = (ObjectClass *)&stru_817F40.fallRate; /*0x5275df*/
    sprintf(Buffer[0].__pad_0, v7, aP3); /*0x5275e5*/
  }
  return INIClass::SetString(this, aP1, (INIClass *)aP2, Buffer); /*0x527631*/
}


// ==== 0x00527640  INIClass::SetIntFormat  this=INIClass  sig=csp ====
char __thiscall INIClass::SetIntFormat(char *this, char **a1, ObjectClass *aP2, int a4, GenericNode *aP4)
{
  INIClass *v6; // edi
  INIClass *v7; // ebx
  const char *v9; // [esp-8h] [ebp-214h]
  INIClass Buffer[8]; // [esp+Ch] [ebp-200h] BYREF

  v6 = (INIClass *)String::GetOrEmpty_Alt((char **)aP2); /*0x52765e*/
  v7 = (INIClass *)String::GetOrEmpty_Alt(a1); /*0x527665*/
  if ( aP4 == (GenericNode *)1 ) /*0x52766f*/
  {
    sprintf(Buffer[0].__pad_0, stru_825BAC, a4); /*0x5276ae*/
  }
  else
  {
    if ( aP4 == (GenericNode *)2 ) /*0x527672*/
      v9 = (const char *)&MEMORY[0x825BB0]; /*0x527694*/
    else
      v9 = MEMORY[0x817F6C]; /*0x527680*/
    sprintf(Buffer[0].__pad_0, v9, a4); /*0x527686*/
  }
  return INIClass::SetString(this, v7, v6, Buffer); /*0x5276c4*/
}


// ==== 0x005276D0  INIClass::ReadInt_Overwrite  this=IUnknown  sig=csp ====
int __thiscall INIClass::ReadInt_Overwrite(int this, unsigned __int8 *a1, CCINIClass *aP2, INIClass *aP3)
{
  unsigned __int8 *v4; // ebp
  CCINIClass *v6; // edx
  int v7; // esi
  CCINIClass *v8; // eax
  int v9; // ecx
  int v10; // esi
  CCINIClass **v11; // ecx
  size_t v12; // eax
  CCINIClass **v13; // ecx
  size_t v14; // eax
  int *v15; // esi
  unsigned __int8 *v16; // edi
  unsigned __int8 **v17; // eax
  size_t v18; // eax
  int *v19; // esi
  int v21; // esi
  const char *v22; // edx
  unsigned int v23; // [esp+8h] [ebp-Ch] BYREF
  int v24; // [esp+Ch] [ebp-8h]
  int v25; // [esp+10h] [ebp-4h]

  v4 = a1; /*0x5276d7*/
  if ( a1 ) /*0x5276df*/
  {
    v6 = aP2; /*0x5276e5*/
    if ( aP2 ) /*0x5276eb*/
    {
      if ( a1 == *(unsigned __int8 **)(this + 4) ) /*0x5276f8*/
      {
        v7 = *(_DWORD *)(this + 8); /*0x5276fe*/
LABEL_5:
        if ( v7 ) /*0x527703*/
        {
          v23 = 0; /*0x527709*/
          v24 = 0; /*0x52770d*/
          v25 = 0; /*0x527711*/
          v8 = (CCINIClass *)Checksummer::Add_Buffer(&v23, (unsigned __int8 *)v6, (IUnknown *)strlen(v6->__pad_0)); /*0x527727*/
          v9 = *(_DWORD *)(v7 + 48); /*0x52772c*/
          v10 = v7 + 44; /*0x52772f*/
          aP2 = v8; /*0x527734*/
          if ( v9 ) /*0x527738*/
          {
            v11 = *(CCINIClass ***)(v10 + 16); /*0x52773e*/
            if ( v11 && *v11 == v8 ) /*0x527747*/
            {
LABEL_11:
              if ( *(_DWORD *)(v10 + 4) ) /*0x527764*/
              {
                v13 = *(CCINIClass ***)(v10 + 16); /*0x52776f*/
                if ( v13 && *v13 == v8 ) /*0x527778*/
                  goto LABEL_16; /*0x527778*/
                v14 = HashTable::BinarySearchAlt((char **)v10, (CCINIClass *)&aP2); /*0x527781*/
                if ( v14 ) /*0x527788*/
                {
                  *(_DWORD *)(v10 + 16) = v14; /*0x52778e*/
LABEL_16:
                  v15 = (int *)(*(_DWORD *)(v10 + 16) + 4); /*0x527791*/
LABEL_29:
                  v21 = *v15; /*0x527840*/
                  if ( v21 ) /*0x527844*/
                  {
                    v22 = *(const char **)(v21 + 16); /*0x52784a*/
                    if ( v22 ) /*0x52784f*/
                    {
                      if ( *v22 == 36 ) /*0x527854*/
                      {
                        sscanf(v22, MEMORY[0x825BB8], &aP3); /*0x527861*/
                        return (int)aP3->__pad_0; /*0x527874*/
                      }
                      if ( tolower(v22[strlen(*(const char **)(v21 + 16)) - 1]) == 104 ) /*0x527894*/
                      {
                        sscanf(*(const char *const *)(v21 + 16), MEMORY[0x825BB4], &aP3); /*0x5278a4*/
                        return (int)aP3->__pad_0; /*0x5278b7*/
                      }
                      return atoi(*(const char **)(v21 + 16)); /*0x5278c6*/
                    }
                  }
                  return (int)aP3->__pad_0; /*0x5278c6*/
                }
              }
              v15 = (int *)&unk_B78830; /*0x52783b*/
              goto LABEL_29; /*0x52783b*/
            }
            v12 = HashTable::BinarySearchAlt((char **)v10, (CCINIClass *)&aP2); /*0x527750*/
            if ( v12 ) /*0x527757*/
            {
              *(_DWORD *)(v10 + 16) = v12; /*0x52775d*/
              v8 = aP2; /*0x527760*/
              goto LABEL_11; /*0x527760*/
            }
          }
        }
        return (int)aP3->__pad_0; /*0x5278d5*/
      }
      v23 = 0; /*0x52779c*/
      v24 = 0; /*0x5277a0*/
      v25 = 0; /*0x5277a4*/
      v16 = (unsigned __int8 *)Checksummer::Add_Buffer(&v23, a1, (IUnknown *)strlen((const char *)a1)); /*0x5277c2*/
      a1 = v16; /*0x5277c4*/
      if ( *(_DWORD *)(this + 44) ) /*0x5277c8*/
      {
        v17 = *(unsigned __int8 ***)(this + 56); /*0x5277cf*/
        if ( !v17 || *v17 != v16 ) /*0x5277d8*/
        {
          v18 = SortedArray::BinarySearch((char **)(this + 40), (CCINIClass *)&a1); /*0x5277e1*/
          if ( !v18 ) /*0x5277e8*/
            goto LABEL_27; /*0x5277e8*/
          *(_DWORD *)(this + 56) = v18; /*0x5277ea*/
        }
        a1 = v16; /*0x5277f1*/
        if ( HashTable::BinarySearch(this + 40, (ObjectClass *)&a1) ) /*0x5277f8*/
          v19 = (int *)(*(_DWORD *)(this + 56) + 4); /*0x527804*/
        else
          v19 = (int *)&unk_B7882C; /*0x527809*/
        v7 = *v19; /*0x52780e*/
        if ( v7 ) /*0x527812*/
        {
          v6 = aP2; /*0x527814*/
          *(_DWORD *)(this + 8) = v7; /*0x527818*/
          *(_DWORD *)(this + 4) = v4; /*0x52781b*/
          goto LABEL_5; /*0x527820*/
        }
      }
LABEL_27:
      *(_DWORD *)(this + 4) = 0; /*0x527825*/
      *(_DWORD *)(this + 8) = 0; /*0x52782c*/
      return (int)aP3->__pad_0; /*0x527838*/
    }
  }
  return (int)aP3->__pad_0; /*0x527833*/
}


// ==== 0x005278F0  INIClass::ReadInt  this=INIClass  sig=csp ====
int __thiscall INIClass::ReadInt(void *this, ObjectClass *aP1, ReferenceCounted *aP2, INIClass *aP3)
{
  unsigned __int8 *eax1a; // eax
  ObjectClass *v5; // [esp-8h] [ebp-Ch]

  v5 = (ObjectClass *)String::GetOrEmpty_Alt((char **)aP2); /*0x527905*/
  eax1a = (unsigned __int8 *)String::GetOrEmpty_Alt((char **)aP1); /*0x527906*/
  return INIClass::ReadInt_Overwrite((int)this, eax1a, (CCINIClass *)v5, aP3); /*0x527913*/
}


// ==== 0x00527920  INIClass::ReadGUID_Overwrite  this=IUnknown  sig=csp ====
int __thiscall INIClass::ReadGUID_Overwrite(
        int this,
        int a2,
        INIClass *aP2,
        unsigned __int8 *a3,
        int a5,
        int a6,
        int a7,
        int a8)
{
  unsigned __int8 *v9; // edx
  int v10; // esi
  int v11; // eax
  int v12; // ecx
  CCINIClass *v13; // esi
  _DWORD *v14; // ecx
  size_t v15; // eax
  int *v16; // esi
  int v17; // edi
  size_t v18; // eax
  int *v19; // esi
  int v20; // esi
  int v21; // esi
  CCINIClass aP1; // [esp+Ch] [ebp-1ACh] BYREF
  char v24; // [esp+B7h] [ebp-101h]
  WCHAR WideCharStr[128]; // [esp+B8h] [ebp-100h] BYREF

  aP1.headNode[0] = (int)&stru_87C374.__pad_579C[33876]; /*0x527931*/
  if ( &aP1 == (CCINIClass *)-44 ) /*0x527939*/
    goto LABEL_32; /*0x527939*/
  if ( !aP2 ) /*0x52794a*/
    goto LABEL_32; /*0x52794a*/
  v9 = a3; /*0x527950*/
  if ( !a3 ) /*0x527959*/
    goto LABEL_32; /*0x527959*/
  if ( aP2 != *(INIClass **)(this + 4) ) /*0x527965*/
  {
    memset(aP1.__pad_20, 0, sizeof(aP1.__pad_20)); /*0x5279ec*/
    v17 = Checksummer::Add_Buffer( /*0x527a12*/
            (unsigned int *)aP1.__pad_20,
            (unsigned __int8 *)aP2,
            (IUnknown *)strlen(aP2->__pad_0));
    aP1.headNode[1] = v17; /*0x527a14*/
    if ( *(_DWORD *)(this + 44) ) /*0x527a18*/
    {
      if ( !SortedArray::CheckCache((_DWORD *)(this + 40), &aP1.headNode[1]) ) /*0x527a26*/
      {
        v18 = SortedArray::BinarySearch((char **)(this + 40), (CCINIClass *)&aP1.headNode[1]); /*0x527a36*/
        if ( !v18 ) /*0x527a3d*/
          goto LABEL_23; /*0x527a3d*/
        *(_DWORD *)(this + 56) = v18; /*0x527a3f*/
      }
      aP1.sectionCount = v17; /*0x527a49*/
      if ( HashTable::BinarySearch(this + 40, (ObjectClass *)&aP1.sectionCount) ) /*0x527a4d*/
        v19 = (int *)(*(_DWORD *)(this + 56) + 4); /*0x527a59*/
      else
        v19 = (int *)&unk_B7882C; /*0x527a5e*/
      v10 = *v19; /*0x527a63*/
      if ( v10 ) /*0x527a67*/
      {
        v9 = a3; /*0x527a69*/
        *(_DWORD *)(this + 8) = v10; /*0x527a70*/
        *(_DWORD *)(this + 4) = aP2; /*0x527a73*/
        goto LABEL_6; /*0x527a78*/
      }
    }
LABEL_23:
    *(_DWORD *)(this + 4) = 0; /*0x527a7d*/
    *(_DWORD *)(this + 8) = 0; /*0x527a82*/
    goto LABEL_28; /*0x527a85*/
  }
  v10 = *(_DWORD *)(this + 8); /*0x52796b*/
LABEL_6:
  if ( v10 ) /*0x527970*/
  {
    memset(&aP1.headNode[2], 0, 12); /*0x527976*/
    v11 = Checksummer::Add_Buffer((unsigned int *)&aP1.headNode[2], v9, (IUnknown *)strlen((const char *)v9)); /*0x527994*/
    v12 = *(_DWORD *)(v10 + 48); /*0x527999*/
    v13 = (CCINIClass *)(v10 + 44); /*0x52799c*/
    *(_DWORD *)aP1.__pad_0 = v11; /*0x5279a1*/
    if ( v12 ) /*0x5279a5*/
    {
      v14 = (_DWORD *)v13->sectionHead[0]; /*0x5279ab*/
      if ( !v14 || *v14 != v11 ) /*0x5279b4*/
      {
        v15 = HashTable::BinarySearchAlt((char **)v13, &aP1); /*0x5279bd*/
        if ( !v15 ) /*0x5279c4*/
          goto LABEL_28; /*0x5279c4*/
        v13->sectionHead[0] = v15; /*0x5279ca*/
      }
      if ( SortedArray::Find((int)v13, &aP1) ) /*0x5279d4*/
        v16 = (int *)(v13->sectionHead[0] + 4); /*0x5279e4*/
      else
        v16 = (int *)&unk_B78830; /*0x527a87*/
      v20 = *v16; /*0x527a8c*/
      if ( v20 ) /*0x527a90*/
      {
        v21 = *(_DWORD *)(v20 + 16); /*0x527a92*/
        if ( v21 ) /*0x527a97*/
          aP1.headNode[0] = v21; /*0x527a99*/
      }
    }
  }
LABEL_28:
  if ( aP1.headNode[0] ) /*0x527aa6*/
  {
    strncpy((char *)&aP1.INIClass_field_2C, (const char *)aP1.headNode[0], (IUnknown *)0x80); /*0x527ab7*/
    v24 = 0; /*0x527ac3*/
    String::Trim((char *)&aP1.INIClass_field_2C); /*0x527acb*/
    if ( strlen((const char *)&aP1.INIClass_field_2C) ) /*0x527ad4*/
    {
      MultiByteToWideChar(0, 1u, (LPCCH)&aP1.INIClass_field_2C, -1, WideCharStr, 128); /*0x527af9*/
      if ( CLSIDFromString(WideCharStr, (LPCLSID)&aP1.headNode[2]) >= 0 ) /*0x527b14*/
      {
        *(_DWORD *)a2 = aP1.headNode[2]; /*0x527b26*/
        *(_DWORD *)(a2 + 4) = aP1.sectionHead[0]; /*0x527b2c*/
        *(_DWORD *)(a2 + 8) = aP1.sectionHead[1]; /*0x527b33*/
        *(_DWORD *)(a2 + 12) = aP1.sectionHead[2]; /*0x527b3a*/
        return a2; /*0x527b43*/
      }
    }
  }
LABEL_32:
  *(_DWORD *)a2 = a5; /*0x527b46*/
  *(_DWORD *)(a2 + 4) = a6; /*0x527b62*/
  *(_DWORD *)(a2 + 8) = a7; /*0x527b6c*/
  *(_DWORD *)(a2 + 12) = a8; /*0x527b76*/
  return a2; /*0x527b23*/
}


// ==== 0x00527B90  INIClass::ReadDouble  this=INIClass  sig=csp ====
char __thiscall INIClass::ReadDouble(char *this, INIClass *Block, INIClass *aP2, IID *rclsid)
{
  LPOLESTR lpsz; // [esp+4h] [ebp-84h] BYREF
  INIClass MultiByteStr[2]; // [esp+8h] [ebp-80h] BYREF

  lpsz = 0; /*0x527ba6*/
  StringFromCLSID(rclsid, &lpsz); /*0x527bae*/
  if ( !WideCharToMultiByte(0, 0, lpsz, -1, MultiByteStr[0].__pad_0, 128, 0, 0) ) /*0x527bcd*/
    GetLastError(); /*0x527bd7*/
  SysFreeString(lpsz); /*0x527be2*/
  return INIClass::SetString(this, Block, aP2, MultiByteStr); /*0x527c04*/
}


// ==== 0x00527C10  INIClass::SetRect  this=AbstractClass  sig=csp ====
char __thiscall INIClass::SetRect(char *this, INIClass *aP1, char *a2, CCINIClass *aP3)
{
  INIClass Buffer; // [esp+4h] [ebp-40h] BYREF

  sprintf( /*0x527c33*/
    Buffer.__pad_0,
    MEMORY[0x825BBC],
    *(_DWORD *)aP3->__pad_0,
    aP3->headNode[0],
    aP3->headNode[1],
    aP3->headNode[2]);
  return INIClass::SetString(this, aP1, (INIClass *)a2, &Buffer); /*0x527c51*/
}


// ==== 0x00527C60  INIClass::ReadFloat  this=INIClass  sig=csp ====
char __thiscall INIClass::ReadFloat(char *this, char **a2, char **a3, _DWORD *a4)
{
  INIClass *v5; // edi
  INIClass *v6; // ebx
  INIClass Buffer; // [esp+Ch] [ebp-40h] BYREF

  v5 = (INIClass *)String::GetOrEmpty_Alt(a3); /*0x527c75*/
  v6 = (INIClass *)String::GetOrEmpty_Alt(a2); /*0x527c7c*/
  sprintf(Buffer.__pad_0, MEMORY[0x825BBC], *a4, a4[1], a4[2], a4[3]); /*0x527c9b*/
  return INIClass::SetString(this, v6, v5, &Buffer); /*0x527cb1*/
}


// ==== 0x00527CC0  INIClass::ParseValue  this=IUnknown  sig=csp ====
unsigned int *__thiscall INIClass::ParseValue(
        int this,
        CCINIClass *aP1,
        INIClass *aP2,
        unsigned __int8 *a3,
        MouseClass *aP4)
{
  CCINIClass *v6; // ebx
  CCINIClass *v7; // edx
  int v8; // esi
  unsigned __int8 *v9; // eax
  int v10; // ecx
  CCINIClass *v11; // esi
  unsigned __int8 **v12; // ecx
  size_t v13; // eax
  int *v14; // esi
  INIClass *v15; // edi
  size_t v16; // eax
  int *v17; // esi
  int v18; // esi
  Color *v19; // esi
  MouseClass *v21; // ecx
  Color *Source; // [esp+10h] [ebp-64h]
  INIClass *v23; // [esp+14h] [ebp-60h] BYREF
  unsigned int v24[3]; // [esp+18h] [ebp-5Ch] BYREF
  unsigned int v25; // [esp+24h] [ebp-50h] BYREF
  void *v26; // [esp+28h] [ebp-4Ch] BYREF
  void *v27; // [esp+2Ch] [ebp-48h] BYREF
  void *v28; // [esp+30h] [ebp-44h] BYREF
  char Destination[64]; // [esp+34h] [ebp-40h] BYREF

  Source = (Color *)MEMORY[0x825BC8]; /*0x527ccf*/
  if ( !Destination ) /*0x527cd7*/
    goto LABEL_31; /*0x527cd7*/
  v6 = (CCINIClass *)aP2; /*0x527cdd*/
  if ( !aP2 ) /*0x527ce5*/
    goto LABEL_31; /*0x527ce5*/
  v7 = (CCINIClass *)a3; /*0x527ceb*/
  if ( !a3 ) /*0x527cf4*/
    goto LABEL_31; /*0x527cf4*/
  if ( aP2 != *(INIClass **)(this + 4) ) /*0x527cfd*/
  {
    memset(v24, 0, sizeof(v24)); /*0x527d8d*/
    v15 = (INIClass *)Checksummer::Add_Buffer(v24, (unsigned __int8 *)aP2, (IUnknown *)strlen(aP2->__pad_0)); /*0x527db3*/
    aP2 = v15; /*0x527db5*/
    if ( *(_DWORD *)(this + 44) ) /*0x527db9*/
    {
      if ( !SortedArray::CheckCache((_DWORD *)(this + 40), &aP2) ) /*0x527dc7*/
      {
        v16 = SortedArray::BinarySearch((char **)(this + 40), (CCINIClass *)&aP2); /*0x527dd7*/
        if ( !v16 ) /*0x527dde*/
          goto LABEL_23; /*0x527dde*/
        *(_DWORD *)(this + 56) = v16; /*0x527de0*/
      }
      v23 = v15; /*0x527dea*/
      if ( HashTable::BinarySearch(this + 40, (ObjectClass *)&v23) ) /*0x527dee*/
        v17 = (int *)(*(_DWORD *)(this + 56) + 4); /*0x527dfa*/
      else
        v17 = (int *)&unk_B7882C; /*0x527dff*/
      v8 = *v17; /*0x527e04*/
      if ( v8 ) /*0x527e08*/
      {
        v7 = (CCINIClass *)a3; /*0x527e0a*/
        *(_DWORD *)(this + 8) = v8; /*0x527e11*/
        *(_DWORD *)(this + 4) = v6; /*0x527e14*/
        goto LABEL_6; /*0x527e19*/
      }
    }
LABEL_23:
    *(_DWORD *)(this + 4) = 0; /*0x527e1e*/
    *(_DWORD *)(this + 8) = 0; /*0x527e23*/
    goto LABEL_28; /*0x527e26*/
  }
  v8 = *(_DWORD *)(this + 8); /*0x527d03*/
LABEL_6:
  if ( v8 ) /*0x527d08*/
  {
    v25 = 0; /*0x527d0e*/
    v26 = 0; /*0x527d12*/
    v27 = 0; /*0x527d16*/
    v9 = (unsigned __int8 *)Checksummer::Add_Buffer(&v25, (unsigned __int8 *)v7, (IUnknown *)strlen(v7->__pad_0)); /*0x527d2c*/
    v10 = *(_DWORD *)(v8 + 48); /*0x527d31*/
    v11 = (CCINIClass *)(v8 + 44); /*0x527d34*/
    a3 = v9; /*0x527d39*/
    if ( v10 ) /*0x527d40*/
    {
      v12 = (unsigned __int8 **)v11->sectionHead[0]; /*0x527d46*/
      if ( !v12 || *v12 != v9 ) /*0x527d4f*/
      {
        v13 = HashTable::BinarySearchAlt((char **)v11, (CCINIClass *)&a3); /*0x527d5b*/
        if ( !v13 ) /*0x527d62*/
          goto LABEL_28; /*0x527d62*/
        v11->sectionHead[0] = v13; /*0x527d68*/
      }
      if ( SortedArray::Find((int)v11, (CCINIClass *)&a3) ) /*0x527d75*/
        v14 = (int *)(v11->sectionHead[0] + 4); /*0x527d85*/
      else
        v14 = (int *)&unk_B78830; /*0x527e28*/
      v18 = *v14; /*0x527e2d*/
      if ( v18 ) /*0x527e31*/
      {
        v19 = *(Color **)(v18 + 16); /*0x527e33*/
        if ( v19 ) /*0x527e38*/
          Source = v19; /*0x527e3a*/
      }
    }
  }
LABEL_28:
  if ( Source ) /*0x527e46*/
  {
    strncpy(Destination, (const char *)Source, 0x40u); /*0x527e54*/
    Destination[63] = 0; /*0x527e60*/
    String::Trim(Destination); /*0x527e65*/
    if ( strlen(Destination) ) /*0x527e6e*/
    {
      v25 = aP4->field_0; /*0x527e85*/
      v26 = aP4->field_4; /*0x527e8c*/
      v27 = aP4->field_8; /*0x527e93*/
      v28 = aP4->field_C; /*0x527ea2*/
      sscanf(Destination, MEMORY[0x825BBC], &v25, &v26, &v27, &v28); /*0x527ebc*/
      *(_DWORD *)aP1->__pad_0 = v25; /*0x527ed1*/
      aP1->headNode[0] = (int)v26; /*0x527ed9*/
      aP1->headNode[1] = (int)v27; /*0x527ee2*/
      aP1->headNode[2] = (int)v28; /*0x527ee9*/
      return (unsigned int *)aP1; /*0x527eef*/
    }
  }
LABEL_31:
  v21 = aP4; /*0x527ef2*/
  *(_DWORD *)aP1->__pad_0 = aP4->field_0; /*0x527f02*/
  aP1->headNode[0] = (int)v21->field_4; /*0x527f07*/
  aP1->headNode[1] = (int)v21->field_8; /*0x527f0d*/
  aP1->headNode[2] = (int)v21->field_C; /*0x527f15*/
  return (unsigned int *)aP1; /*0x527ed7*/
}


// ==== 0x00527F20  INIClass::GetRect  this=IUnknown  sig=csp ====
_DWORD *__thiscall INIClass::GetRect(int this, MSAnim *aP1, ObjectClass *aP2, CCINIClass *aP3, ObjectClass *aP4)
{
  ObjectClass *v6; // edi
  unsigned __int8 *v7; // ebx
  int v8; // esi
  CCINIClass *v9; // esi
  size_t v10; // eax
  int *v11; // esi
  int v12; // edi
  size_t v13; // eax
  int v14; // esi
  int v15; // esi
  int v16; // ecx
  int v17; // edx
  int INIClass_field_2C; // esi
  int unknown30; // edi
  int v21; // [esp+0h] [ebp-88h] BYREF
  ObjectClass *v22; // [esp+10h] [ebp-78h] BYREF
  CCINIClass v23; // [esp+14h] [ebp-74h] BYREF
  char v24; // [esp+87h] [ebp-1h]

  v6 = (ObjectClass *)String::GetOrEmpty_Alt((char **)aP3); /*0x527f3c*/
  v22 = v6; /*0x527f3e*/
  v7 = (unsigned __int8 *)String::GetOrEmpty_Alt((char **)aP2); /*0x527f47*/
  v23.headNode[0] = (int)MEMORY[0x825BC8]; /*0x527f4f*/
  if ( &v21 == (int *)-72 || !v7 || !v6 ) /*0x527f69*/
    goto LABEL_27; /*0x527f69*/
  if ( v7 != *(unsigned __int8 **)(this + 4) ) /*0x527f72*/
  {
    memset(&v23.headNode[2], 0, 12); /*0x528000*/
    v12 = Checksummer::Add_Buffer((unsigned int *)&v23.headNode[2], v7, (IUnknown *)strlen((const char *)v7)); /*0x528026*/
    *(_DWORD *)v23.__pad_0 = v12; /*0x528028*/
    if ( *(_DWORD *)(this + 44) ) /*0x52802c*/
    {
      if ( !SortedArray::CheckCache((_DWORD *)(this + 40), &v23) ) /*0x52803a*/
      {
        v13 = SortedArray::BinarySearch((char **)(this + 40), &v23); /*0x52804a*/
        if ( !v13 ) /*0x528051*/
          goto LABEL_19; /*0x528051*/
        *(_DWORD *)(this + 56) = v13; /*0x528053*/
      }
      v23.headNode[1] = v12; /*0x52805d*/
      v8 = *(_DWORD *)SortedArray::FindValue(this + 40, (INIClass *)&v23.headNode[1]); /*0x528066*/
      if ( v8 ) /*0x52806a*/
      {
        v6 = v22; /*0x52806c*/
        *(_DWORD *)(this + 8) = v8; /*0x528070*/
        *(_DWORD *)(this + 4) = v7; /*0x528073*/
        goto LABEL_6; /*0x528078*/
      }
    }
LABEL_19:
    *(_DWORD *)(this + 4) = 0; /*0x52807d*/
    *(_DWORD *)(this + 8) = 0; /*0x528082*/
    goto LABEL_24; /*0x528085*/
  }
  v8 = *(_DWORD *)(this + 8); /*0x527f78*/
LABEL_6:
  if ( v8 ) /*0x527f7d*/
  {
    memset(&v23.sectionHead[2], 0, 12); /*0x527f83*/
    v9 = (CCINIClass *)(v8 + 44); /*0x527fa8*/
    v22 = (ObjectClass *)Checksummer::Add_Buffer( /*0x527fab*/
                           (unsigned int *)&v23.sectionHead[2],
                           (unsigned __int8 *)v22,
                           (IUnknown *)strlen(v6->__pad_0));
    if ( v9->headNode[0] ) /*0x527faf*/
    {
      if ( !INIClass::deleteKey(v9, (ObjectClass *)&v22) ) /*0x527fc1*/
      {
        v10 = HashTable::BinarySearchAlt((char **)v9, (CCINIClass *)&v22); /*0x527fd1*/
        if ( !v10 ) /*0x527fd8*/
          goto LABEL_24; /*0x527fd8*/
        v9->sectionHead[0] = v10; /*0x527fde*/
      }
      if ( SortedArray::Find((int)v9, (CCINIClass *)&v22) ) /*0x527fe8*/
        v11 = (int *)(v9->sectionHead[0] + 4); /*0x527ff8*/
      else
        v11 = (int *)&unk_B78830; /*0x528087*/
      v14 = *v11; /*0x52808c*/
      if ( v14 ) /*0x528090*/
      {
        v15 = *(_DWORD *)(v14 + 16); /*0x528092*/
        if ( v15 ) /*0x528097*/
          v23.headNode[0] = v15; /*0x528099*/
      }
    }
  }
LABEL_24:
  if ( !v23.headNode[0] /*0x5280d0*/
    || (strncpy(&v23.needsSave_flag, (const char *)v23.headNode[0], 0x40u),
        v24 = 0,
        String::Trim(&v23.needsSave_flag),
        !strlen(&v23.needsSave_flag)) )
  {
LABEL_27:
    v16 = *(_DWORD *)aP4->__pad_0; /*0x528138*/
    v17 = *(_DWORD *)&aP4->__pad_0[4]; /*0x528141*/
    INIClass_field_2C = *(_DWORD *)&aP4->__pad_0[8]; /*0x528144*/
    unknown30 = *(_DWORD *)&aP4->__pad_0[12]; /*0x528147*/
    goto LABEL_28; /*0x528147*/
  }
  *(_DWORD *)&v23.__pad_20[4] = *(_DWORD *)aP4->__pad_0; /*0x5280e7*/
  *(_DWORD *)&v23.__pad_20[8] = *(_DWORD *)&aP4->__pad_0[4]; /*0x5280ee*/
  v23.INIClass_field_2C = *(_DWORD *)&aP4->__pad_0[8]; /*0x5280f5*/
  v23.unknown30 = *(_DWORD *)&aP4->__pad_0[12]; /*0x528104*/
  sscanf( /*0x52811e*/
    &v23.needsSave_flag,
    MEMORY[0x825BBC],
    &v23.__pad_20[4],
    &v23.__pad_20[8],
    &v23.INIClass_field_2C,
    &v23.unknown30);
  v16 = *(_DWORD *)&v23.__pad_20[4]; /*0x528123*/
  v17 = *(_DWORD *)&v23.__pad_20[8]; /*0x528127*/
  INIClass_field_2C = v23.INIClass_field_2C; /*0x52812b*/
  unknown30 = v23.unknown30; /*0x52812f*/
LABEL_28:
  *(_DWORD *)aP1->__pad_0 = v16; /*0x52814a*/
  aP1->MSAnim_field_0x04 = v17; /*0x528155*/
  aP1->MSAnim_field_0x08 = INIClass_field_2C; /*0x528158*/
  *(_DWORD *)aP1[1].__pad_0 = unknown30; /*0x52815b*/
  return aP1->__pad_0; /*0x52815e*/
}


// ==== 0x00528170  INIClass::ReadDouble3  this=INIClass  sig=csp ====
char __thiscall INIClass::ReadDouble3(char *this, ObjectClass *aP1, INIClass *aP2, INIClass *aP3)
{
  INIClass Buffer[8]; // [esp+4h] [ebp-200h] BYREF

  sprintf(Buffer[0].__pad_0, (ObjectClass *)&stru_825BAC.objectTypeFlags, aP3); /*0x528188*/
  return INIClass::SetString(this, (INIClass *)aP1, aP2, Buffer); /*0x5281ac*/
}


// ==== 0x005281C0  INIClass::ReadDouble2  this=INIClass  sig=csp ====
char __thiscall INIClass::ReadDouble2(char *this, char **a1, char **a2, ObjectClass *aP3)
{
  INIClass *v5; // edi
  INIClass *v6; // ebx
  INIClass Buffer[8]; // [esp+Ch] [ebp-200h] BYREF

  v5 = (INIClass *)String::GetOrEmpty_Alt(a2); /*0x5281de*/
  v6 = (INIClass *)String::GetOrEmpty_Alt(a1); /*0x5281e5*/
  sprintf(Buffer[0].__pad_0, (ObjectClass *)&stru_825BAC.objectTypeFlags, (INIClass *)aP3); /*0x5281f9*/
  return INIClass::SetString(this, v6, v5, Buffer); /*0x52820f*/
}


// ==== 0x00528220  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_528220(int this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  unsigned __int8 *v4; // ebp
  unsigned __int8 *v6; // edx
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // esi
  _DWORD *v11; // ecx
  size_t v12; // eax
  _DWORD *v13; // ecx
  size_t v14; // eax
  int *v15; // esi
  int v16; // edi
  _DWORD *v17; // eax
  size_t v18; // eax
  int *v19; // esi
  int v21; // esi
  const char *v22; // esi
  unsigned int v23; // [esp+8h] [ebp-Ch] BYREF
  int v24; // [esp+Ch] [ebp-8h]
  int v25; // [esp+10h] [ebp-4h]

  v4 = a2; /*0x528227*/
  if ( a2 ) /*0x52822f*/
  {
    v6 = a3; /*0x528235*/
    if ( a3 ) /*0x52823b*/
    {
      if ( a2 == *(unsigned __int8 **)(this + 4) ) /*0x528248*/
      {
        v7 = *(_DWORD *)(this + 8); /*0x52824e*/
LABEL_5:
        if ( v7 ) /*0x528253*/
        {
          v23 = 0; /*0x528259*/
          v24 = 0; /*0x52825d*/
          v25 = 0; /*0x528261*/
          v8 = Checksummer::Add_Buffer(&v23, v6, strlen((const char *)v6)); /*0x528277*/
          v9 = *(_DWORD *)(v7 + 48); /*0x52827c*/
          v10 = v7 + 44; /*0x52827f*/
          a3 = (unsigned __int8 *)v8; /*0x528284*/
          if ( v9 ) /*0x528288*/
          {
            v11 = *(_DWORD **)(v10 + 16); /*0x52828e*/
            if ( v11 && *v11 == v8 ) /*0x528297*/
            {
LABEL_11:
              if ( *(_DWORD *)(v10 + 4) ) /*0x5282b4*/
              {
                v13 = *(_DWORD **)(v10 + 16); /*0x5282bf*/
                if ( v13 && *v13 == v8 ) /*0x5282c8*/
                  goto LABEL_16; /*0x5282c8*/
                v14 = HashTable::BinarySearchAlt((char **)v10, (int *)&a3); /*0x5282d1*/
                if ( v14 ) /*0x5282d8*/
                {
                  *(_DWORD *)(v10 + 16) = v14; /*0x5282de*/
LABEL_16:
                  v15 = (int *)(*(_DWORD *)(v10 + 16) + 4); /*0x5282e1*/
                  goto LABEL_29; /*0x5282e7*/
                }
              }
              v15 = (int *)&unk_B78830; /*0x52838b*/
LABEL_29:
              v21 = *v15; /*0x528390*/
              if ( v21 ) /*0x528394*/
              {
                v22 = *(const char **)(v21 + 16); /*0x528396*/
                if ( v22 ) /*0x52839b*/
                  sscanf(v22, MEMORY[0x825BD4], &a4); /*0x5283a8*/
              }
              return a4; /*0x5283a8*/
            }
            v12 = HashTable::BinarySearchAlt((char **)v10, (int *)&a3); /*0x5282a0*/
            if ( v12 ) /*0x5282a7*/
            {
              *(_DWORD *)(v10 + 16) = v12; /*0x5282ad*/
              v8 = (int)a3; /*0x5282b0*/
              goto LABEL_11; /*0x5282b0*/
            }
          }
        }
        return a4; /*0x5283bb*/
      }
      v23 = 0; /*0x5282ec*/
      v24 = 0; /*0x5282f0*/
      v25 = 0; /*0x5282f4*/
      v16 = Checksummer::Add_Buffer(&v23, a2, strlen((const char *)a2)); /*0x528312*/
      a2 = (unsigned __int8 *)v16; /*0x528314*/
      if ( *(_DWORD *)(this + 44) ) /*0x528318*/
      {
        v17 = *(_DWORD **)(this + 56); /*0x52831f*/
        if ( !v17 || *v17 != v16 ) /*0x528328*/
        {
          v18 = SortedArray::BinarySearch((char **)(this + 40), (int *)&a2); /*0x528331*/
          if ( !v18 ) /*0x528338*/
            goto LABEL_27; /*0x528338*/
          *(_DWORD *)(this + 56) = v18; /*0x52833a*/
        }
        a2 = (unsigned __int8 *)v16; /*0x528341*/
        if ( HashTable::BinarySearch(this + 40, (int *)&a2) ) /*0x528348*/
          v19 = (int *)(*(_DWORD *)(this + 56) + 4); /*0x528354*/
        else
          v19 = (int *)&unk_B7882C; /*0x528359*/
        v7 = *v19; /*0x52835e*/
        if ( v7 ) /*0x528362*/
        {
          v6 = a3; /*0x528364*/
          *(_DWORD *)(this + 8) = v7; /*0x528368*/
          *(_DWORD *)(this + 4) = v4; /*0x52836b*/
          goto LABEL_5; /*0x528370*/
        }
      }
LABEL_27:
      *(_DWORD *)(this + 4) = 0; /*0x528375*/
      *(_DWORD *)(this + 8) = 0; /*0x52837c*/
      return a4; /*0x528388*/
    }
  }
  return a4; /*0x528383*/
}


// ==== 0x005283D0  INIClass::ReadDouble_Overwrite  this=IUnknown  sig=csp ====
// local variable allocation has failed, the output may be wrong!
double __thiscall INIClass::ReadDouble_Overwrite(int this, INIClass *aP1, unsigned __int8 *a2, INIClass *aP3)
{
  INIClass *v4; // ebp
  unsigned __int8 *v6; // edx
  int v7; // esi
  unsigned __int8 *v8; // eax
  int v9; // ecx
  int v10; // esi
  unsigned __int8 **v11; // ecx
  size_t v12; // eax
  unsigned __int8 **v13; // ecx
  size_t v14; // eax
  int *v15; // esi
  INIClass *v16; // edi
  INIClass **v17; // eax
  size_t v18; // eax
  int *v19; // esi
  double result; // st7
  int v21; // esi
  const char *v22; // eax
  const char *v23; // edx
  unsigned int v24; // [esp+8h] [ebp-Ch] BYREF
  int v25; // [esp+Ch] [ebp-8h]
  int v26; // [esp+10h] [ebp-4h]

  v4 = aP1; /*0x5283d7*/
  if ( *(float *)&aP1 != 0.0 ) /*0x5283df*/
  {
    v6 = a2; /*0x5283e5*/
    if ( a2 ) /*0x5283eb*/
    {
      if ( aP1 == *(INIClass **)(this + 4) ) /*0x5283f8*/
      {
        v7 = *(_DWORD *)(this + 8); /*0x5283fe*/
LABEL_5:
        if ( v7 ) /*0x528403*/
        {
          v24 = 0; /*0x528409*/
          v25 = 0; /*0x52840d*/
          v26 = 0; /*0x528411*/
          v8 = (unsigned __int8 *)Checksummer::Add_Buffer(&v24, v6, (IUnknown *)strlen((const char *)v6)); /*0x528427*/
          v9 = *(_DWORD *)(v7 + 48); /*0x52842c*/
          v10 = v7 + 44; /*0x52842f*/
          a2 = v8; /*0x528434*/
          if ( v9 ) /*0x528438*/
          {
            v11 = *(unsigned __int8 ***)(v10 + 16); /*0x52843e*/
            if ( v11 && *v11 == v8 ) /*0x528447*/
            {
LABEL_11:
              if ( *(_DWORD *)(v10 + 4) ) /*0x528464*/
              {
                v13 = *(unsigned __int8 ***)(v10 + 16); /*0x52846f*/
                if ( v13 && *v13 == v8 ) /*0x528478*/
                  goto LABEL_16; /*0x528478*/
                v14 = HashTable::BinarySearchAlt((char **)v10, (CCINIClass *)&a2); /*0x528481*/
                if ( v14 ) /*0x528488*/
                {
                  *(_DWORD *)(v10 + 16) = v14; /*0x52848e*/
LABEL_16:
                  v15 = (int *)(*(_DWORD *)(v10 + 16) + 4); /*0x528491*/
LABEL_29:
                  v21 = *v15; /*0x528540*/
                  if ( v21 ) /*0x528544*/
                  {
                    v22 = *(const char **)(v21 + 16); /*0x528546*/
                    if ( v22 ) /*0x52854b*/
                    {
                      sscanf(v22, MEMORY[0x825BD8], &aP1); /*0x528558*/
                      v23 = *(const char **)(v21 + 16); /*0x528561*/
                      *(double *)&aP3 = *(float *)&aP1; /*0x528569*/
                      if ( strchr(v23, 9509) ) /*0x52856e*/
                        *(double *)&aP3 = *(double *)&aP3 * 0.01; /*0x528584*/
                    }
                  }
                  return *(double *)&aP3; /*0x528584*/
                }
              }
              v15 = (int *)&unk_B78830; /*0x52853b*/
              goto LABEL_29; /*0x52853b*/
            }
            v12 = HashTable::BinarySearchAlt((char **)v10, (CCINIClass *)&a2); /*0x528450*/
            if ( v12 ) /*0x528457*/
            {
              *(_DWORD *)(v10 + 16) = v12; /*0x52845d*/
              v8 = a2; /*0x528460*/
              goto LABEL_11; /*0x528460*/
            }
          }
        }
        return *(double *)&aP3; /*0x528593*/
      }
      v24 = 0; /*0x52849c*/
      v25 = 0; /*0x5284a0*/
      v26 = 0; /*0x5284a4*/
      v16 = (INIClass *)Checksummer::Add_Buffer(&v24, (unsigned __int8 *)aP1, (IUnknown *)strlen(aP1->__pad_0)); /*0x5284c2*/
      aP1 = v16; /*0x5284c4*/
      if ( *(_DWORD *)(this + 44) ) /*0x5284c8*/
      {
        v17 = *(INIClass ***)(this + 56); /*0x5284cf*/
        if ( !v17 || *v17 != v16 ) /*0x5284d8*/
        {
          v18 = SortedArray::BinarySearch((char **)(this + 40), (CCINIClass *)&aP1); /*0x5284e1*/
          if ( !v18 ) /*0x5284e8*/
            goto LABEL_27; /*0x5284e8*/
          *(_DWORD *)(this + 56) = v18; /*0x5284ea*/
        }
        aP1 = v16; /*0x5284f1*/
        if ( HashTable::BinarySearch(this + 40, (ObjectClass *)&aP1) ) /*0x5284f8*/
          v19 = (int *)(*(_DWORD *)(this + 56) + 4); /*0x528504*/
        else
          v19 = (int *)&unk_B7882C; /*0x528509*/
        v7 = *v19; /*0x52850e*/
        if ( v7 ) /*0x528512*/
        {
          v6 = a2; /*0x528514*/
          *(_DWORD *)(this + 8) = v7; /*0x528518*/
          *(_DWORD *)(this + 4) = v4; /*0x52851b*/
          goto LABEL_5; /*0x528520*/
        }
      }
LABEL_27:
      result = *(double *)&aP3; /*0x528525*/
      *(_DWORD *)(this + 4) = 0; /*0x52852d*/
      *(_DWORD *)(this + 8) = 0; /*0x528530*/
      return result; /*0x528538*/
    }
  }
  return *(double *)&aP3; /*0x528533*/
}


// ==== 0x005285B0  INIClass::SetDouble  this=AbstractTypeClass  sig=csp ====
char __thiscall INIClass::SetDouble(char *this, CCINIClass *aP1, char *a2, double a4)
{
  INIClass Buffer[8]; // [esp+Ch] [ebp-200h] BYREF

  sprintf(Buffer[0].__pad_0, MEMORY[0x825BD8], a4); /*0x5285cd*/
  return INIClass::SetString(this, (INIClass *)aP1, (INIClass *)a2, Buffer); /*0x5285f8*/
}


// ==== 0x00528600  INIClass::GetString2  this=INIClass  sig=csp ====
char __thiscall INIClass::GetString2(char *this, char **a2, char **a3, double a4)
{
  INIClass *v5; // edi
  INIClass *v6; // ebx
  INIClass Buffer[8]; // [esp+14h] [ebp-200h] BYREF

  v5 = (INIClass *)String::GetOrEmpty_Alt(a3); /*0x52861e*/
  v6 = (INIClass *)String::GetOrEmpty_Alt(a2); /*0x52862f*/
  sprintf(Buffer[0].__pad_0, MEMORY[0x825BD8], a4); /*0x52863e*/
  return INIClass::SetString(this, v6, v5, Buffer); /*0x528654*/
}


// ==== 0x00528660  INIClass::SetString  this=INIClass  sig=csp ====
char __thiscall INIClass::SetString(char *this, INIClass *aP1, INIClass *aP2, INIClass *aP3)
{
  int v5; // esi
  char *v6; // ebp
  GenericNode *v7; // eax
  GenericNode *v8; // esi
  char *v9; // edi
  INIClass *v10; // eax
  _DWORD *v11; // ecx
  unsigned __int8 *Previous; // edx
  int v13; // edi
  int v14; // eax
  int v15; // eax
  INIClass *v16; // ebp
  int p_Previous; // esi
  int v18; // eax
  CCINIClass *v17; // ecx
  int v20; // edx
  unsigned int v21; // kr10_4
  unsigned int *v22; // eax
  size_t v23; // eax
  int v24; // eax
  int i; // ecx
  int v26; // edx
  int v27; // eax
  char *v28; // edi
  int v29; // eax
  INIEntry_INIClass *edi26; // edi
  CCINIClass *v31; // eax
  _DWORD *Section; // eax
  INIClass *v30; // esi
  unsigned int kr18_4_32; // kr18_4
  unsigned int *v36; // eax
  INIClass *v34; // [esp-18h] [ebp-60h]
  CCINIClass *v35; // [esp-Ch] [ebp-54h]
  unsigned __int8 *v39; // [esp-8h] [ebp-50h]
  int v40; // [esp-8h] [ebp-50h]
  unsigned __int8 *v41; // [esp-8h] [ebp-50h]
  Color *_FFFFFFFC; // [esp-4h] [ebp-4Ch]
  _DWORD *v43; // [esp+10h] [ebp-38h] BYREF
  GenericNode *v44; // [esp+14h] [ebp-34h]
  INIClass *v42; // [esp+18h] [ebp-30h] BYREF
  int v46; // [esp+1Ch] [ebp-2Ch]
  int v47; // [esp+20h] [ebp-28h]
  INIClass *v45; // [esp+24h] [ebp-24h]
  int var20; // [esp+28h] [ebp-20h] BYREF
  int v50; // [esp+2Ch] [ebp-1Ch] BYREF
  unsigned int v51[3]; // [esp+30h] [ebp-18h] BYREF
  INIClass *v49; // [esp+3Ch] [ebp-Ch] BYREF
  int v53; // [esp+40h] [ebp-8h]
  int v54; // [esp+44h] [ebp-4h]
  void *Block; // [esp+4Ch] [ebp+4h]

  v45 = (INIClass *)this; /*0x528671*/
  if ( !aP1 || !aP2 ) /*0x52867f*/
    return 0; /*0x52867f*/
  memset(v51, 0, sizeof(v51)); /*0x52868c*/
  v5 = Checksummer::Add_Buffer(v51, (unsigned __int8 *)aP1, (IUnknown *)strlen(aP1->__pad_0)); /*0x5286a8*/
  v6 = this + 40; /*0x5286aa*/
  var20 = v5; /*0x5286b4*/
  if ( HashTable::BinarySearch((int)v6, (ObjectClass *)&var20) ) /*0x5286b8*/
  {
    v50 = v5; /*0x5286c5*/
    v7 = *(GenericNode **)SortedArray::FindValue((int)v6, (INIClass *)&v50); /*0x5286d1*/
  }
  else
  {
    v7 = 0; /*0x5286d5*/
  }
  v44 = v7; /*0x5286d9*/
  if ( !v7 ) /*0x5286dd*/
  {
    v8 = (GenericNode *)__2_YAPAXI_Z(0x44u); /*0x5286ea*/
    if ( !v8 ) /*0x5286f1*/
      return 0; /*0x5289d1*/
    v9 = _strdup(aP1->__pad_0); /*0x528706*/
    GenericNode::Constructor(v8); /*0x528708*/
    *(_DWORD *)v8->__pad_0 = &Node<INIClass::INISection *>::`vftable'; /*0x528710*/
    v8[1].Previous = v9; /*0x528716*/
    INIClass::sectionExists(v8[2].__pad_0); /*0x528719*/
    INIClass::getValue(&v8[5].Previous); /*0x528721*/
    v10 = v45; /*0x528726*/
    *(_DWORD *)v8[8].__pad_0 = 0; /*0x52872a*/
    *(_DWORD *)v8->__pad_0 = &vt_INIClass_INISection; /*0x52872d*/
    v11 = *(_DWORD **)&v10->__pad_20[4]; /*0x528734*/
    v44 = v8; /*0x528737*/
    LinkedList::Prepend(v11, (int)v8); /*0x52873b*/
    Previous = (unsigned __int8 *)v8[1].Previous; /*0x528740*/
    v49 = 0; /*0x52874a*/
    v53 = 0; /*0x52874e*/
    v54 = 0; /*0x528752*/
    v13 = Checksummer::Add_Buffer((unsigned int *)&v49, Previous, (IUnknown *)strlen((const char *)Previous)); /*0x528769*/
    v14 = *((_DWORD *)v6 + 2); /*0x52876b*/
    if ( *((_DWORD *)v6 + 1) + 1 <= v14 ) /*0x528771*/
      goto LABEL_12; /*0x528771*/
    if ( !v14 ) /*0x528775*/
      v14 = 10; /*0x528777*/
    if ( INIClass::mergeSection((int)v6, v14) ) /*0x52877f*/
    {
LABEL_12:
      *(_DWORD *)(*(_DWORD *)v6 + 8 * *((_DWORD *)v6 + 1)) = v13; /*0x52878e*/
      *(_DWORD *)(*(_DWORD *)v6 + 8 * *((_DWORD *)v6 + 1) + 4) = v8; /*0x528797*/
      v15 = *((_DWORD *)v6 + 1) + 1; /*0x52879e*/
      v6[12] = 0; /*0x52879f*/
      *((_DWORD *)v6 + 1) = v15; /*0x5287a2*/
    }
  }
  v16 = 0; /*0x5287b0*/
  Block = 0; /*0x5287b2*/
  v45 = 0; /*0x5287bb*/
  v47 = 0; /*0x5287c5*/
  v46 = 0; /*0x5287c9*/
  v49 = 0; /*0x5287cd*/
  v53 = 0; /*0x5287d1*/
  v54 = 0; /*0x5287d5*/
  v42 = (INIClass *)Checksummer::Add_Buffer( /*0x5287de*/
                      (unsigned int *)&v49,
                      (unsigned __int8 *)aP2,
                      (IUnknown *)strlen(aP2->__pad_0));
  p_Previous = (int)&v44[5].Previous; /*0x5287ea*/
  if ( SortedArray::Find((int)&v44[5].Previous, (CCINIClass *)&v42) ) /*0x5287f0*/
    v18 = *(_DWORD *)SortedArray::BinarySearch2(p_Previous, (Color *)&v42); /*0x528805*/
  else
    v18 = 0; /*0x528809*/
  v43 = (_DWORD *)v18; /*0x52880d*/
  if ( v18 ) /*0x528811*/
  {
    v16 = *(INIClass **)(v18 + 20); /*0x52881d*/
    Block = *(void **)(v18 + 24); /*0x528820*/
    v17 = *(CCINIClass **)(v18 + 28); /*0x528824*/
    v45 = *(INIClass **)(v18 + 36); /*0x528827*/
    v20 = *(_DWORD *)(v18 + 32); /*0x52882b*/
    *(_DWORD *)(v18 + 20) = 0; /*0x52882e*/
    v47 = (int)v17; /*0x528835*/
    v46 = v20; /*0x528839*/
    v43[6] = 0; /*0x52883d*/
    v21 = strlen((const char *)v43[3]) + 1; /*0x52884e*/
    v39 = (unsigned __int8 *)v43[3]; /*0x528854*/
    v22 = KeyValuePair::Init(&v49, 0); /*0x52885a*/
    v42 = (INIClass *)Checksummer::Add_Buffer(v22, v39, (IUnknown *)(v21 - 1)); /*0x52886d*/
    v23 = HashTable::BinarySearchAlt((char **)p_Previous, (CCINIClass *)&v42); /*0x528871*/
    if ( v23 ) /*0x528878*/
    {
      v24 = (int)(v23 - *(_DWORD *)p_Previous) >> 3; /*0x52887c*/
      if ( v24 != -1 ) /*0x528882*/
      {
        for ( i = v24 + 1; i < *(_DWORD *)(p_Previous + 4); *(_DWORD *)(v27 - 4) = *(_DWORD *)(v27 + 4) ) /*0x52888c*/
        {
          v26 = *(_DWORD *)(*(_DWORD *)p_Previous + 8 * i); /*0x528890*/
          v27 = *(_DWORD *)p_Previous + 8 * i++; /*0x528893*/
          *(_DWORD *)(v27 - 8) = v26; /*0x528897*/
        }
        v28 = *(char **)p_Previous; /*0x5288aa*/
        v29 = *(_DWORD *)(p_Previous + 4) - 1; /*0x5288ac*/
        *(_DWORD *)(p_Previous + 4) = v29; /*0x5288af*/
        *(_DWORD *)&v28[8 * v29] = 0; /*0x5288b4*/
        *(_DWORD *)&v28[8 * v29 + 4] = 0; /*0x5288b7*/
        *(_DWORD *)(p_Previous + 16) = 0; /*0x5288bb*/
      }
    }
    if ( v43 ) /*0x5288c4*/
      (*(void (__thiscall **)(_DWORD *, int))*v43)(v43, 1); /*0x5288ca*/
  }
  if ( !aP3 || !strlen(aP3->__pad_0) ) /*0x5288d8*/
    return 1; /*0x5288e2*/
  edi26 = (INIEntry_INIClass *)__2_YAPAXI_Z(0x28u); /*0x5288ef*/
  if ( edi26 ) /*0x5288f6*/
  {
    _FFFFFFFC = (Color *)v46; /*0x528904*/
    v40 = v47; /*0x528909*/
    v35 = (CCINIClass *)v45; /*0x52890e*/
    v34 = (INIClass *)_strdup(aP3->__pad_0); /*0x52891a*/
    v31 = (CCINIClass *)_strdup(aP2->__pad_0); /*0x528920*/
    Section = INIClass::findSection(edi26, v31, (int)v34, (int)v16, (int)Block, (int)v35, v40, (int)_FFFFFFFC); /*0x52892b*/
    v43 = Section; /*0x528932*/
    if ( !Section ) /*0x528936*/
      goto LABEL_28; /*0x528936*/
    LinkedList::Prepend(*(_DWORD **)v44[5].__pad_0, (int)Section); /*0x528982*/
    kr18_4_32 = strlen((const char *)v43[3]) + 1; /*0x528995*/
    v41 = (unsigned __int8 *)v43[3]; /*0x52899b*/
    v36 = KeyValuePair::Init(&v49, 0); /*0x5289a1*/
    aP2 = (INIClass *)Checksummer::Add_Buffer(v36, v41, (IUnknown *)(kr18_4_32 - 1)); /*0x5289ad*/
    INIClass::setValue(p_Previous, &aP2, (CCINIClass *)&v43); /*0x5289bd*/
    return 1; /*0x5289cb*/
  }
  v43 = 0; /*0x528974*/
LABEL_28:
  free(Block); /*0x528938*/
  if ( !v16 ) /*0x528947*/
    return 0; /*0x528947*/
  do /*0x528966*/
  {
    free(*(void **)v16->__pad_0); /*0x528951*/
    v30 = (INIClass *)v16->headNode[0]; /*0x528956*/
    __3_YAXPAX_Z(v16); /*0x52895a*/
    v16 = v30; /*0x528964*/
  }
  while ( v30 ); /*0x528966*/
  return 0; /*0x528968*/
}


// ==== 0x005289E0  INIClass::SetStringOrEmpty  this=ObjectClass  sig=csp ====
char __thiscall INIClass::SetStringOrEmpty(char *this, char **a1, char **a2, ObjectClass *aP3)
{
  INIClass *v5; // eax
  INIClass *v7; // [esp-8h] [ebp-Ch]
  INIClass *v8; // [esp-4h] [ebp-8h]

  v8 = (INIClass *)String::GetOrEmpty_Alt((char **)aP3); /*0x5289f0*/
  v7 = (INIClass *)String::GetOrEmpty_Alt(a2); /*0x5289fa*/
  v5 = (INIClass *)String::GetOrEmpty_Alt(a1); /*0x5289fb*/
  return INIClass::SetString(this, v5, v7, v8); /*0x528a08*/
}


// ==== 0x00528A10  INIClass::GetString  this=IUnknown  sig=csp ====
unsigned int __thiscall INIClass::GetString(
        unsigned __int8 ***this,
        INIClass *aP1,
        unsigned __int8 *a2,
        INIClass *aP3,
        INIClass *aP4,
        int Count)
{
  INIClass *v6; // edi
  unsigned __int8 **v8; // ebx
  unsigned __int8 *v9; // edx
  unsigned __int8 *v10; // esi
  unsigned __int8 *v11; // eax
  int v12; // ecx
  unsigned __int8 *v13; // esi
  unsigned __int8 **v14; // ecx
  size_t v15; // eax
  unsigned __int8 **v16; // ecx
  size_t v17; // eax
  int *v18; // esi
  INIClass *v19; // edi
  INIClass **v20; // eax
  unsigned __int8 **v21; // eax
  unsigned __int8 **v22; // esi
  INIClass *v23; // ecx
  int v24; // esi
  WeaponTypeClass *v26; // [esp+Ch] [ebp-Ch] BYREF
  int v27; // [esp+10h] [ebp-8h]
  int v28; // [esp+14h] [ebp-4h]

  v6 = aP4; /*0x528a18*/
  if ( !aP4 ) /*0x528a20*/
    return 0; /*0x528a20*/
  if ( Count < 2 ) /*0x528a2b*/
    return 0; /*0x528a2b*/
  v8 = (unsigned __int8 **)aP1; /*0x528a31*/
  if ( !aP1 ) /*0x528a37*/
    return 0; /*0x528a37*/
  v9 = a2; /*0x528a3d*/
  if ( !a2 ) /*0x528a43*/
    return 0; /*0x528a43*/
  if ( aP1 == (INIClass *)this->q004 ) /*0x528a4f*/
  {
    v10 = (unsigned __int8 *)this->q008; /*0x528a55*/
    goto LABEL_7; /*0x528a55*/
  }
  v26 = 0; /*0x528af3*/
  v27 = 0; /*0x528af7*/
  v28 = 0; /*0x528afb*/
  v19 = (INIClass *)Checksummer::Add_Buffer( /*0x528b19*/
                      (unsigned int *)&v26,
                      (unsigned __int8 *)aP1,
                      (IUnknown *)strlen(aP1->__pad_0));
  aP1 = v19; /*0x528b1b*/
  if ( !this->q02C ) /*0x528b1f*/
    goto LABEL_29; /*0x528b1f*/
  v20 = (INIClass **)this->q038; /*0x528b26*/
  if ( v20 && *v20 == v19 ) /*0x528b2f*/
    goto LABEL_24; /*0x528b2f*/
  v21 = (unsigned __int8 **)SortedArray::BinarySearch((char **)this + 10, (CCINIClass *)&aP1); /*0x528b38*/
  if ( !v21 ) /*0x528b3f*/
  {
LABEL_29:
    v23 = aP3; /*0x528b80*/
    v6 = aP4; /*0x528b84*/
    this->q004 = 0; /*0x528b8a*/
    this->q008 = 0; /*0x528b8d*/
    goto LABEL_36; /*0x528b90*/
  }
  this->q038 = v21; /*0x528b41*/
LABEL_24:
  aP1 = v19; /*0x528b44*/
  if ( HashTable::BinarySearch((int)(this + 10), (ObjectClass *)&aP1) ) /*0x528b4f*/
    v22 = this->q038 + 1; /*0x528b5b*/
  else
    v22 = (unsigned __int8 **)&unk_B7882C; /*0x528b60*/
  v10 = *v22; /*0x528b65*/
  if ( !v10 ) /*0x528b69*/
    goto LABEL_29; /*0x528b69*/
  v9 = a2; /*0x528b6b*/
  v6 = aP4; /*0x528b6f*/
  this->q008 = (unsigned __int8 **)v10; /*0x528b73*/
  this->q004 = v8; /*0x528b76*/
LABEL_7:
  if ( v10 ) /*0x528a5a*/
  {
    v26 = 0; /*0x528a60*/
    v27 = 0; /*0x528a64*/
    v28 = 0; /*0x528a68*/
    v11 = (unsigned __int8 *)Checksummer::Add_Buffer((unsigned int *)&v26, v9, (IUnknown *)strlen((const char *)v9)); /*0x528a7e*/
    v12 = *((_DWORD *)v10 + 12); /*0x528a83*/
    v13 = v10 + 44; /*0x528a86*/
    a2 = v11; /*0x528a8b*/
    if ( v12 ) /*0x528a8f*/
    {
      v14 = (unsigned __int8 **)*((_DWORD *)v13 + 4); /*0x528a95*/
      if ( v14 && *v14 == v11 ) /*0x528a9e*/
      {
LABEL_13:
        if ( *((_DWORD *)v13 + 1) ) /*0x528abb*/
        {
          v16 = (unsigned __int8 **)*((_DWORD *)v13 + 4); /*0x528ac6*/
          if ( v16 && *v16 == v11 ) /*0x528acf*/
            goto LABEL_18; /*0x528acf*/
          v17 = HashTable::BinarySearchAlt((char **)v13, (CCINIClass *)&a2); /*0x528ad8*/
          if ( v17 ) /*0x528adf*/
          {
            *((_DWORD *)v13 + 4) = v17; /*0x528ae5*/
LABEL_18:
            v18 = (int *)(*((_DWORD *)v13 + 4) + 4); /*0x528ae8*/
LABEL_31:
            v24 = *v18; /*0x528b97*/
            if ( v24 ) /*0x528b9b*/
            {
              v23 = *(INIClass **)(v24 + 16); /*0x528b9d*/
              if ( v23 ) /*0x528ba2*/
              {
                v6 = aP4; /*0x528ba4*/
                goto LABEL_36; /*0x528baa*/
              }
            }
            goto LABEL_34; /*0x528ba2*/
          }
        }
        v18 = (int *)&unk_B78830; /*0x528b92*/
        goto LABEL_31; /*0x528b92*/
      }
      v15 = HashTable::BinarySearchAlt((char **)v13, (CCINIClass *)&a2); /*0x528aa7*/
      if ( v15 ) /*0x528aae*/
      {
        *((_DWORD *)v13 + 4) = v15; /*0x528ab4*/
        v11 = a2; /*0x528ab7*/
        goto LABEL_13; /*0x528ab7*/
      }
    }
LABEL_34:
    v6 = aP4; /*0x528bac*/
  }
  v23 = aP3; /*0x528bb2*/
LABEL_36:
  if ( !v23 ) /*0x528bb9*/
  {
    v6->__pad_0[0] = 0; /*0x528bbb*/
    return 0; /*0x528bc6*/
  }
  strncpy(v6->__pad_0, v23->__pad_0, Count); /*0x528bd0*/
  v6->__pad_0[Count - 1] = 0; /*0x528bde*/
  String::Trim(v6->__pad_0); /*0x528be3*/
  return strlen(v6->__pad_0); /*0x528bbe*/
}


// ==== 0x00528C00  INIClass::ReadString  this=IUnknown  sig=csp ====
unsigned int __thiscall INIClass::ReadString(
        ObjectClass *this,
        ObjectClass *aP1,
        ObjectClass *aP2,
        ReferenceCounted *aP3,
        int a5)
{
  CCINIClass *v6; // edi
  unsigned __int8 *v7; // ebx
  int v8; // esi
  CCINIClass *v9; // eax
  int v10; // ecx
  int v11; // esi
  CCINIClass **v12; // ecx
  size_t v13; // eax
  int *v14; // esi
  INIClass *v15; // edi
  void *v16; // eax
  int *v17; // esi
  int v18; // esi
  CCINIClass *v19; // esi
  unsigned int v20; // esi
  ReferenceCounted *v22; // [esp+0h] [ebp-428h] BYREF
  CCINIClass *v23; // [esp+10h] [ebp-418h] BYREF
  INIClass *v24; // [esp+14h] [ebp-414h] BYREF
  CCINIClass *Source; // [esp+18h] [ebp-410h]
  unsigned int aP1_12; // [esp+1Ch] [ebp-40Ch] BYREF
  int aP1_16; // [esp+20h] [ebp-408h]
  int aP1_20; // [esp+24h] [ebp-404h]
  CCINIClass aP1_24[11]; // [esp+28h] [ebp-400h] BYREF
  char v30; // [esp+426h] [ebp-2h]

  Source = (CCINIClass *)String::GetOrEmpty_Alt((char **)aP3); /*0x528c1f*/
  v6 = (CCINIClass *)String::GetOrEmpty_Alt((char **)aP2); /*0x528c2f*/
  v23 = v6; /*0x528c31*/
  v7 = (unsigned __int8 *)String::GetOrEmpty_Alt((char **)aP1); /*0x528c3a*/
  if ( &v22 == (ReferenceCounted **)-40 || !v7 || !v6 ) /*0x528c54*/
    goto LABEL_30; /*0x528c54*/
  if ( v7 != *(unsigned __int8 **)&this->__pad_0[4] ) /*0x528c5d*/
  {
    aP1_12 = 0; /*0x528ce6*/
    aP1_16 = 0; /*0x528cea*/
    aP1_20 = 0; /*0x528cee*/
    v15 = (INIClass *)Checksummer::Add_Buffer(&aP1_12, v7, (IUnknown *)strlen((const char *)v7)); /*0x528d0c*/
    v24 = v15; /*0x528d0e*/
    if ( this->fallRate ) /*0x528d12*/
    {
      if ( !SortedArray::CheckCache(&this->owningHouseIndex, &v24) ) /*0x528d20*/
      {
        v16 = (void *)SortedArray::BinarySearch((char **)&this->owningHouseIndex, (CCINIClass *)&v24); /*0x528d30*/
        if ( !v16 ) /*0x528d37*/
          goto LABEL_23; /*0x528d37*/
        this->attachedBomb = v16; /*0x528d39*/
      }
      v24 = v15; /*0x528d43*/
      if ( HashTable::BinarySearch((int)&this->owningHouseIndex, (ObjectClass *)&v24) ) /*0x528d47*/
        v17 = (int *)((char *)this->attachedBomb + 4); /*0x528d53*/
      else
        v17 = (int *)&unk_B7882C; /*0x528d58*/
      v8 = *v17; /*0x528d5d*/
      if ( v8 ) /*0x528d61*/
      {
        v6 = v23; /*0x528d63*/
        *(_DWORD *)&this->__pad_0[8] = v8; /*0x528d67*/
        *(_DWORD *)&this->__pad_0[4] = v7; /*0x528d6a*/
        goto LABEL_6; /*0x528d6d*/
      }
    }
LABEL_23:
    *(_DWORD *)&this->__pad_0[4] = 0; /*0x528d72*/
    *(_DWORD *)&this->__pad_0[8] = 0; /*0x528d77*/
    goto LABEL_28; /*0x528d7a*/
  }
  v8 = *(_DWORD *)&this->__pad_0[8]; /*0x528c63*/
LABEL_6:
  if ( v8 ) /*0x528c6a*/
  {
    aP1_12 = 0; /*0x528c73*/
    aP1_16 = 0; /*0x528c7c*/
    aP1_20 = 0; /*0x528c8a*/
    v9 = (CCINIClass *)Checksummer::Add_Buffer(&aP1_12, (unsigned __int8 *)v23, (IUnknown *)strlen(v6->__pad_0)); /*0x528c8e*/
    v10 = *(_DWORD *)(v8 + 48); /*0x528c93*/
    v11 = v8 + 44; /*0x528c96*/
    v23 = v9; /*0x528c9b*/
    if ( v10 ) /*0x528c9f*/
    {
      v12 = *(CCINIClass ***)(v11 + 16); /*0x528ca5*/
      if ( v12 && *v12 == v9 ) /*0x528cae*/
      {
LABEL_12:
        if ( SortedArray::Find(v11, (CCINIClass *)&v23) ) /*0x528cce*/
          v14 = (int *)(*(_DWORD *)(v11 + 16) + 4); /*0x528cde*/
        else
          v14 = (int *)&unk_B78830; /*0x528d7c*/
        v18 = *v14; /*0x528d81*/
        if ( v18 ) /*0x528d85*/
        {
          v19 = *(CCINIClass **)(v18 + 16); /*0x528d87*/
          if ( v19 ) /*0x528d8c*/
            Source = v19; /*0x528d8e*/
        }
        goto LABEL_28; /*0x528d8e*/
      }
      v13 = HashTable::BinarySearchAlt((char **)v11, (CCINIClass *)&v23); /*0x528cb7*/
      if ( v13 ) /*0x528cbe*/
      {
        *(_DWORD *)(v11 + 16) = v13; /*0x528cc4*/
        goto LABEL_12; /*0x528cc4*/
      }
    }
  }
LABEL_28:
  if ( Source ) /*0x528d98*/
  {
    strncpy(aP1_24[0].__pad_0, Source->__pad_0, 0x3FFu); /*0x528dcb*/
    v30 = 0; /*0x528dd7*/
    String::Trim(aP1_24[0].__pad_0); /*0x528ddf*/
    v20 = strlen(aP1_24[0].__pad_0); /*0x528df2*/
    goto LABEL_31; /*0x528df4*/
  }
  aP1_24[0].__pad_0[0] = 0; /*0x528d9a*/
LABEL_30:
  v20 = 0; /*0x528d9e*/
LABEL_31:
  String::Assign_Alt((void **)a5, aP1_24); /*0x528da0*/
  return v20; /*0x528db3*/
}


// ==== 0x00528E00  INIClass::SetWideAsHex  this=AbstractTypeClass  sig=csp ====
char __thiscall INIClass::SetWideAsHex(char *this, INIClass *aP1, CCINIClass *aP2, CCINIClass *aP3)
{
  char v4; // bl
  size_t v5; // eax
  INIClass *v6; // eax
  INIClass *v7; // ebp
  unsigned __int16 v8; // ax
  char *i; // ebx

  v4 = 0; /*0x528e08*/
  if ( aP3 ) /*0x528e10*/
  {
    v5 = wcslen((const wchar_t *)aP3); /*0x528e17*/
    v6 = (INIClass *)__2_YAPAXI_Z(8 * v5 + 1); /*0x528e21*/
    v7 = v6; /*0x528e26*/
    if ( v6 ) /*0x528e2d*/
    {
      v6->__pad_0[0] = 0; /*0x528e33*/
      v8 = *(_WORD *)aP3->__pad_0; /*0x528e37*/
      for ( i = (char *)v7; *(_WORD *)aP3->__pad_0; i = &v7->__pad_0[strlen(v7->__pad_0)] ) /*0x528e37*/
      {
        _itoa(v8, i, 16); /*0x528e4b*/
        strcat(i, (const char *)&stru_817F40.nextObject); /*0x528e74*/
        aP3 = (CCINIClass *)((char *)aP3 + 2); /*0x528e8e*/
        v8 = *(_WORD *)aP3->__pad_0; /*0x528e94*/
      }
      v4 = INIClass::SetString(this, aP1, (INIClass *)aP2, v7); /*0x528eb4*/
      __3_YAXPAX_Z(v7); /*0x528eb6*/
    }
  }
  return v4; /*0x528ebe*/
}


// ==== 0x00528F00  INIClass::ParseValue_Wide  this=AbstractTypeClass  sig=csp ====
size_t __thiscall INIClass::ParseValue_Wide(
        char **this,
        unsigned __int8 *a1,
        CCINIClass *aP2,
        wchar_t *Source,
        CCINIClass *aP4,
        size_t Count)
{
  CCINIClass *v7; // edx
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  CCINIClass *v11; // esi
  _DWORD *v12; // ecx
  size_t v13; // eax
  int *v14; // esi
  CCINIClass *v15; // edi
  char *v16; // eax
  char *v17; // esi
  int v18; // esi
  const char *v19; // eax
  char *v21; // eax
  CCINIClass *v22; // esi
  DropListClass *v23; // edi
  CCINIClass aP1; // [esp+10h] [ebp-5014h] BYREF
  char v25; // [esp+5023h] [ebp-1h]

  if ( &aP1 == (CCINIClass *)-20 ) /*0x528f16*/
    goto LABEL_29; /*0x528f16*/
  if ( !a1 ) /*0x528f27*/
    goto LABEL_29; /*0x528f27*/
  v7 = aP2; /*0x528f2d*/
  if ( !aP2 ) /*0x528f36*/
    goto LABEL_29; /*0x528f36*/
  if ( a1 == (unsigned __int8 *)this->vtable2 ) /*0x528f3f*/
  {
    v8 = (int)this->vtable3; /*0x528f45*/
    goto LABEL_6; /*0x528f45*/
  }
  memset(&aP1.headNode[1], 0, 12); /*0x528fc6*/
  v15 = (CCINIClass *)Checksummer::Add_Buffer( /*0x528fec*/
                        (unsigned int *)&aP1.headNode[1],
                        a1,
                        (IUnknown *)strlen((const char *)a1));
  *(_DWORD *)aP1.__pad_0 = v15; /*0x528fee*/
  if ( !this->q02C ) /*0x528ff2*/
    goto LABEL_23; /*0x528ff2*/
  if ( SortedArray::CheckCache(this + 10, &aP1) ) /*0x529000*/
    goto LABEL_18; /*0x529007*/
  v16 = (char *)SortedArray::BinarySearch(this + 10, &aP1); /*0x529010*/
  if ( !v16 ) /*0x529017*/
  {
LABEL_23:
    this->vtable2 = 0; /*0x529057*/
    this->vtable3 = 0; /*0x52905c*/
    LOBYTE(aP1.sectionHead[1]) = 0; /*0x52905f*/
LABEL_29:
    wcsncpy((wchar_t *)aP4, Source, Count); /*0x5290b6*/
    return wcslen((const wchar_t *)aP4); /*0x5290e6*/
  }
  this->q038 = v16; /*0x529019*/
LABEL_18:
  aP1.headNode[0] = (int)v15; /*0x52901c*/
  if ( HashTable::BinarySearch((int)(this + 10), (ObjectClass *)aP1.headNode) ) /*0x529027*/
    v17 = this->q038 + 4; /*0x529033*/
  else
    v17 = (char *)&unk_B7882C; /*0x529038*/
  v8 = *(_DWORD *)v17; /*0x52903d*/
  if ( !v8 ) /*0x529041*/
    goto LABEL_23; /*0x529041*/
  v7 = aP2; /*0x529043*/
  this->vtable3 = (char *)v8; /*0x52904a*/
  this->vtable2 = (char *)a1; /*0x52904d*/
LABEL_6:
  if ( !v8 ) /*0x528f4a*/
    goto LABEL_27; /*0x528f4a*/
  memset(&aP1.headNode[1], 0, 12); /*0x528f50*/
  v9 = Checksummer::Add_Buffer((unsigned int *)&aP1.headNode[1], (unsigned __int8 *)v7, (IUnknown *)strlen(v7->__pad_0)); /*0x528f6e*/
  v10 = *(_DWORD *)(v8 + 48); /*0x528f73*/
  v11 = (CCINIClass *)(v8 + 44); /*0x528f76*/
  *(_DWORD *)aP1.__pad_0 = v9; /*0x528f7b*/
  if ( !v10 ) /*0x528f7f*/
    goto LABEL_27; /*0x528f7f*/
  v12 = (_DWORD *)v11->sectionHead[0]; /*0x528f85*/
  if ( v12 && *v12 == v9 ) /*0x528f8e*/
    goto LABEL_12; /*0x528f8e*/
  v13 = HashTable::BinarySearchAlt((char **)v11, &aP1); /*0x528f97*/
  if ( !v13 ) /*0x528f9e*/
  {
LABEL_27:
    LOBYTE(aP1.sectionHead[1]) = 0; /*0x529079*/
    goto LABEL_29; /*0x52907e*/
  }
  v11->sectionHead[0] = v13; /*0x528fa4*/
LABEL_12:
  if ( SortedArray::Find((int)v11, &aP1) ) /*0x528fae*/
    v14 = (int *)(v11->sectionHead[0] + 4); /*0x528fbe*/
  else
    v14 = (int *)&unk_B78830; /*0x529065*/
  v18 = *v14; /*0x52906a*/
  if ( !v18 ) /*0x52906e*/
    goto LABEL_27; /*0x52906e*/
  v19 = *(const char **)(v18 + 16); /*0x529070*/
  if ( !v19 ) /*0x529075*/
    goto LABEL_27; /*0x529075*/
  strncpy((char *)&aP1.sectionHead[1], v19, 0x5000u); /*0x52908b*/
  v25 = 0; /*0x529097*/
  String::Trim((char *)&aP1.sectionHead[1]); /*0x52909f*/
  if ( !strlen((const char *)&aP1.sectionHead[1]) ) /*0x5290a8*/
    goto LABEL_29; /*0x5290b4*/
  v21 = strtok((char *)&aP1.sectionHead[1], MEMORY[0x817F70].__pad_0); /*0x5290f3*/
  v22 = aP4; /*0x529104*/
  if ( v21 ) /*0x529106*/
  {
    v23 = (DropListClass *)Count; /*0x529108*/
    do /*0x529140*/
    {
      if ( !v23 ) /*0x529111*/
        break; /*0x529111*/
      sscanf(v21, MEMORY[0x825BD4], aP1.headNode); /*0x52911e*/
      *(_WORD *)v22->__pad_0 = aP1.headNode[0]; /*0x52912d*/
      v22 = (CCINIClass *)((char *)v22 + 2); /*0x529132*/
      v21 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x529135*/
      v23 = (DropListClass *)((char *)v23 - 1); /*0x52913d*/
    }
    while ( v21 ); /*0x529140*/
  }
  *(_WORD *)v22->__pad_0 = 0; /*0x529143*/
  return wcslen((const wchar_t *)aP4); /*0x5290dc*/
}


// ==== 0x00529160  INIClass::GetStringEx  this=IUnknown  sig=csp ====
size_t __thiscall INIClass::GetStringEx(int this, INIClass *aP1, CCINIClass *aP2, CCINIClass *aP3, size_t Count)
{
  CCINIClass *v6; // edx
  int v7; // esi
  ObjectClass *v8; // eax
  int v9; // ecx
  CCINIClass *v10; // esi
  ObjectClass **v11; // ecx
  size_t v12; // eax
  int *v13; // esi
  ObjectClass *v14; // edi
  size_t v15; // eax
  int *v16; // esi
  int v17; // esi
  const char *v18; // eax
  wchar_t *StringCSF; // eax
  ObjectClass *v21; // [esp+10h] [ebp-414h] BYREF
  unsigned int v22; // [esp+14h] [ebp-410h] BYREF
  int v23; // [esp+18h] [ebp-40Ch]
  int v24; // [esp+1Ch] [ebp-408h]
  ObjectClass v25[5]; // [esp+20h] [ebp-404h] BYREF
  char v26; // [esp+423h] [ebp-1h]

  if ( v25 != (ObjectClass *)-4 ) /*0x529172*/
  {
    if ( aP1 ) /*0x529183*/
    {
      v6 = aP2; /*0x529189*/
      if ( aP2 ) /*0x529192*/
      {
        if ( aP1 == *(INIClass **)(this + 4) ) /*0x52919b*/
        {
          v7 = *(_DWORD *)(this + 8); /*0x5291a1*/
LABEL_6:
          if ( v7 ) /*0x5291a6*/
          {
            v22 = 0; /*0x5291ac*/
            v23 = 0; /*0x5291b0*/
            v24 = 0; /*0x5291b4*/
            v8 = (ObjectClass *)Checksummer::Add_Buffer(&v22, (unsigned __int8 *)v6, (IUnknown *)strlen(v6->__pad_0)); /*0x5291ca*/
            v9 = *(_DWORD *)(v7 + 48); /*0x5291cf*/
            v10 = (CCINIClass *)(v7 + 44); /*0x5291d2*/
            v21 = v8; /*0x5291d7*/
            if ( v9 ) /*0x5291db*/
            {
              v11 = (ObjectClass **)v10->sectionHead[0]; /*0x5291e1*/
              if ( v11 && *v11 == v8 ) /*0x5291ea*/
                goto LABEL_12; /*0x5291ea*/
              v12 = HashTable::BinarySearchAlt((char **)v10, (CCINIClass *)&v21); /*0x5291f3*/
              if ( v12 ) /*0x5291fa*/
              {
                v10->sectionHead[0] = v12; /*0x529200*/
LABEL_12:
                if ( SortedArray::Find((int)v10, (CCINIClass *)&v21) ) /*0x52920a*/
                  v13 = (int *)(v10->sectionHead[0] + 4); /*0x52921a*/
                else
                  v13 = (int *)&unk_B78830; /*0x5292c4*/
                v17 = *v13; /*0x5292c9*/
                if ( v17 ) /*0x5292cd*/
                {
                  v18 = *(const char **)(v17 + 16); /*0x5292cf*/
                  if ( v18 ) /*0x5292d4*/
                  {
                    strncpy(&v25[0].__pad_0[4], v18, 0x400u); /*0x5292ec*/
                    v26 = 0; /*0x5292f8*/
                    String::Trim(&v25[0].__pad_0[4]); /*0x529300*/
                    goto LABEL_29; /*0x529300*/
                  }
                }
              }
            }
          }
          v25[0].__pad_0[4] = 0; /*0x5292da*/
          goto LABEL_29; /*0x5292df*/
        }
        v22 = 0; /*0x529222*/
        v23 = 0; /*0x529226*/
        v24 = 0; /*0x52922a*/
        v14 = (ObjectClass *)Checksummer::Add_Buffer(&v22, (unsigned __int8 *)aP1, (IUnknown *)strlen(aP1->__pad_0)); /*0x529248*/
        v21 = v14; /*0x52924a*/
        if ( !*(_DWORD *)(this + 44) ) /*0x529253*/
          goto LABEL_23; /*0x529253*/
        if ( !SortedArray::CheckCache((_DWORD *)(this + 40), &v21) ) /*0x52925c*/
        {
          v15 = SortedArray::BinarySearch((char **)(this + 40), (CCINIClass *)&v21); /*0x52926c*/
          if ( !v15 ) /*0x529273*/
          {
LABEL_23:
            *(_DWORD *)(this + 4) = 0; /*0x5292b3*/
            *(_DWORD *)(this + 8) = 0; /*0x5292ba*/
            v25[0].__pad_0[4] = 0; /*0x5292bd*/
            goto LABEL_29; /*0x5292c2*/
          }
          *(_DWORD *)(this + 56) = v15; /*0x529275*/
        }
        *(_DWORD *)v25[0].__pad_0 = v14; /*0x52927f*/
        if ( HashTable::BinarySearch(this + 40, v25) ) /*0x529283*/
          v16 = (int *)(*(_DWORD *)(this + 56) + 4); /*0x52928f*/
        else
          v16 = (int *)&unk_B7882C; /*0x529294*/
        v7 = *v16; /*0x529299*/
        if ( v7 ) /*0x52929d*/
        {
          v6 = aP2; /*0x52929f*/
          *(_DWORD *)(this + 8) = v7; /*0x5292a6*/
          *(_DWORD *)(this + 4) = aP1; /*0x5292a9*/
          goto LABEL_6; /*0x5292ae*/
        }
        goto LABEL_23; /*0x52929d*/
      }
    }
  }
LABEL_29:
  StringCSF = GetStringCSF((wchar_t *)&v25[0].__pad_0[4], 0, MEMORY[0x825BDC], 1858); /*0x529307*/
  wcsncpy((wchar_t *)aP3, StringCSF, Count); /*0x52932d*/
  *(_WORD *)&aP3->__pad_0[2 * Count - 2] = 0; /*0x529333*/
  return wcslen((const wchar_t *)aP3); /*0x529340*/
}


// ==== 0x00529350  INIClass::GetCSFString  this=INIClass  sig=csp ====
size_t __thiscall INIClass::GetCSFString(
        char **this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        wchar_t *String,
        wchar_t *a5,
        size_t Count)
{
  unsigned __int8 *v7; // edx
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  int v11; // esi
  _DWORD *v12; // ecx
  size_t v13; // eax
  int *v14; // esi
  int v15; // edi
  size_t v16; // eax
  int *v17; // esi
  int v18; // esi
  const char *v19; // eax
  wchar_t *StringCSF; // eax
  int v22; // [esp+10h] [ebp-414h] BYREF
  unsigned int v23; // [esp+14h] [ebp-410h] BYREF
  int v24; // [esp+18h] [ebp-40Ch]
  int v25; // [esp+1Ch] [ebp-408h]
  int v26; // [esp+20h] [ebp-404h] BYREF
  char Destination[1024]; // [esp+24h] [ebp-400h] BYREF

  if ( !Destination ) /*0x529362*/
    goto LABEL_29; /*0x529362*/
  if ( !a2 ) /*0x529373*/
    goto LABEL_29; /*0x529373*/
  v7 = a3; /*0x529379*/
  if ( !a3 ) /*0x529382*/
    goto LABEL_29; /*0x529382*/
  if ( a2 == (unsigned __int8 *)this->headNode ) /*0x52938b*/
  {
    v8 = (int)this->q008; /*0x529391*/
    goto LABEL_6; /*0x529391*/
  }
  v23 = 0; /*0x529412*/
  v24 = 0; /*0x529416*/
  v25 = 0; /*0x52941a*/
  v15 = Checksummer::Add_Buffer(&v23, a2, strlen((const char *)a2)); /*0x529438*/
  v22 = v15; /*0x52943a*/
  if ( !this->INIClass_field_2C ) /*0x52943e*/
    goto LABEL_23; /*0x52943e*/
  if ( SortedArray::CheckCache(this + 10, &v22) ) /*0x52944c*/
    goto LABEL_18; /*0x529453*/
  v16 = SortedArray::BinarySearch(this + 10, &v22); /*0x52945c*/
  if ( !v16 ) /*0x529463*/
  {
LABEL_23:
    this->headNode = 0; /*0x5294a1*/
    this->q008 = 0; /*0x5294a6*/
    Destination[0] = 0; /*0x5294a9*/
    goto LABEL_29; /*0x5294ad*/
  }
  this->unknown38 = (char *)v16; /*0x529465*/
LABEL_18:
  v26 = v15; /*0x529468*/
  if ( HashTable::BinarySearch((int)(this + 10), &v26) ) /*0x529473*/
    v17 = (int *)(this->unknown38 + 4); /*0x52947f*/
  else
    v17 = (int *)&unk_B7882C; /*0x529484*/
  v8 = *v17; /*0x529489*/
  if ( !v8 ) /*0x52948d*/
    goto LABEL_23; /*0x52948d*/
  v7 = a3; /*0x52948f*/
  this->q008 = (char *)v8; /*0x529496*/
  this->headNode = (char *)a2; /*0x529499*/
LABEL_6:
  if ( !v8 ) /*0x529398*/
    goto LABEL_27; /*0x529398*/
  v23 = 0; /*0x5293a8*/
  v24 = 0; /*0x5293b2*/
  v25 = 0; /*0x5293b6*/
  v9 = Checksummer::Add_Buffer(&v23, v7, strlen((const char *)v7)); /*0x5293ba*/
  v10 = *(_DWORD *)(v8 + 48); /*0x5293bf*/
  v11 = v8 + 44; /*0x5293c2*/
  v22 = v9; /*0x5293c7*/
  if ( !v10 ) /*0x5293cb*/
    goto LABEL_27; /*0x5293cb*/
  v12 = *(_DWORD **)(v11 + 16); /*0x5293d1*/
  if ( v12 && *v12 == v9 ) /*0x5293da*/
    goto LABEL_12; /*0x5293da*/
  v13 = HashTable::BinarySearchAlt((char **)v11, &v22); /*0x5293e3*/
  if ( !v13 ) /*0x5293ea*/
  {
LABEL_27:
    Destination[0] = 0; /*0x5294c3*/
    goto LABEL_29; /*0x5294c8*/
  }
  *(_DWORD *)(v11 + 16) = v13; /*0x5293f0*/
LABEL_12:
  if ( SortedArray::Find(v11, &v22) ) /*0x5293fa*/
    v14 = (int *)(*(_DWORD *)(v11 + 16) + 4); /*0x52940a*/
  else
    v14 = (int *)&unk_B78830; /*0x5294af*/
  v18 = *v14; /*0x5294b4*/
  if ( !v18 ) /*0x5294b8*/
    goto LABEL_27; /*0x5294b8*/
  v19 = *(const char **)(v18 + 16); /*0x5294ba*/
  if ( !v19 ) /*0x5294bf*/
    goto LABEL_27; /*0x5294bf*/
  strncpy(Destination, v19, 0x400u); /*0x5294d5*/
  Destination[1023] = 0; /*0x5294e1*/
  String::Trim(Destination); /*0x5294e9*/
LABEL_29:
  if ( strlen(Destination) ) /*0x5294f2*/
    StringCSF = GetStringCSF((wchar_t *)Destination, 0, MEMORY[0x825BDC], 1874); /*0x52952b*/
  else
    StringCSF = GetStringCSF(a5, 0, MEMORY[0x825BDC], 1872); /*0x529519*/
  wcsncpy(String, StringCSF, Count); /*0x529539*/
  String[Count - 1] = 0; /*0x529541*/
  return wcslen(String); /*0x529551*/
}


// ==== 0x00529560  INIClass::SetBool  this=AbstractClass  sig=csp ====
char __thiscall INIClass::SetBool(char *this, INIClass *aP1, char *a2, INIClass *aP3)
{
  if ( (_BYTE)aP3 ) /*0x529566*/
    return INIClass::SetString(this, aP1, (INIClass *)a2, (INIClass *)MEMORY[0x825BF4].headNode); /*0x529577*/
  else
    return INIClass::SetString(this, aP1, (INIClass *)a2, &MEMORY[0x825BF4]); /*0x52958e*/
}


// ==== 0x005295A0  INIClass::ReadBool3  this=INIClass  sig=csp ====
char __thiscall INIClass::ReadBool3(char *this, char **a1, char **a2, ObjectClass *aP3)
{
  INIClass *v5; // edi
  INIClass *v6; // eax

  v5 = (INIClass *)String::GetOrEmpty_Alt(a2); /*0x5295b1*/
  v6 = (INIClass *)String::GetOrEmpty_Alt(a1); /*0x5295b3*/
  if ( (_BYTE)aP3 ) /*0x5295be*/
    return INIClass::SetString(this, v6, v5, (INIClass *)&stru_825BAC.ambientSoundController[4]); /*0x5295c9*/
  else
    return INIClass::SetString(this, v6, v5, (INIClass *)&stru_825BAC.ambientSoundController[3]); /*0x5295dc*/
}


// ==== 0x005295F0  INIClass::ReadBool_Overwrite  this=IUnknown  sig=csp ====
char __thiscall INIClass::ReadBool_Overwrite(int this, unsigned __int8 *a1, CCINIClass *aP2, char a4)
{
  unsigned __int8 *v4; // ebp
  CCINIClass *v6; // edx
  int v7; // esi
  CCINIClass *v8; // eax
  int v9; // ecx
  int v10; // esi
  CCINIClass **v11; // ecx
  size_t v12; // eax
  CCINIClass **v13; // ecx
  size_t v14; // eax
  int *v15; // esi
  unsigned __int8 *v16; // edi
  unsigned __int8 **v17; // eax
  size_t v18; // eax
  int *v19; // esi
  char result; // al
  int v21; // esi
  char *v22; // esi
  unsigned int v23; // [esp+10h] [ebp-Ch] BYREF
  int v24; // [esp+14h] [ebp-8h]
  int v25; // [esp+18h] [ebp-4h]

  v4 = a1; /*0x5295f7*/
  if ( !a1 ) /*0x529601*/
    return a4; /*0x529601*/
  v6 = aP2; /*0x529607*/
  if ( !aP2 ) /*0x52960d*/
    return a4; /*0x52960d*/
  if ( a1 != *(unsigned __int8 **)(this + 4) ) /*0x529616*/
  {
    v23 = 0; /*0x5296ba*/
    v24 = 0; /*0x5296be*/
    v25 = 0; /*0x5296c2*/
    v16 = (unsigned __int8 *)Checksummer::Add_Buffer(&v23, a1, (IUnknown *)strlen((const char *)a1)); /*0x5296e0*/
    a1 = v16; /*0x5296e2*/
    if ( *(_DWORD *)(this + 44) ) /*0x5296e6*/
    {
      v17 = *(unsigned __int8 ***)(this + 56); /*0x5296ed*/
      if ( !v17 || *v17 != v16 ) /*0x5296f6*/
      {
        v18 = SortedArray::BinarySearch((char **)(this + 40), (CCINIClass *)&a1); /*0x5296ff*/
        if ( !v18 ) /*0x529706*/
          goto LABEL_27; /*0x529706*/
        *(_DWORD *)(this + 56) = v18; /*0x529708*/
      }
      a1 = v16; /*0x52970f*/
      if ( HashTable::BinarySearch(this + 40, (ObjectClass *)&a1) ) /*0x529716*/
        v19 = (int *)(*(_DWORD *)(this + 56) + 4); /*0x529722*/
      else
        v19 = (int *)&unk_B7882C; /*0x529727*/
      v7 = *v19; /*0x52972c*/
      if ( v7 ) /*0x529730*/
      {
        v6 = aP2; /*0x529732*/
        *(_DWORD *)(this + 8) = v7; /*0x529736*/
        *(_DWORD *)(this + 4) = v4; /*0x529739*/
        goto LABEL_5; /*0x52973e*/
      }
    }
LABEL_27:
    *(_DWORD *)(this + 4) = 0; /*0x529743*/
    *(_DWORD *)(this + 8) = 0; /*0x529748*/
    return a4; /*0x529748*/
  }
  v7 = *(_DWORD *)(this + 8); /*0x52961c*/
LABEL_5:
  if ( !v7 ) /*0x529621*/
    return a4; /*0x529621*/
  v23 = 0; /*0x529627*/
  v24 = 0; /*0x52962b*/
  v25 = 0; /*0x52962f*/
  v8 = (CCINIClass *)Checksummer::Add_Buffer(&v23, (unsigned __int8 *)v6, (IUnknown *)strlen(v6->__pad_0)); /*0x529645*/
  v9 = *(_DWORD *)(v7 + 48); /*0x52964a*/
  v10 = v7 + 44; /*0x52964d*/
  aP2 = v8; /*0x529652*/
  if ( !v9 ) /*0x529656*/
    return a4; /*0x529656*/
  v11 = *(CCINIClass ***)(v10 + 16); /*0x52965c*/
  if ( v11 && *v11 == v8 ) /*0x529665*/
    goto LABEL_11; /*0x529665*/
  v12 = HashTable::BinarySearchAlt((char **)v10, (CCINIClass *)&aP2); /*0x52966e*/
  if ( !v12 ) /*0x529675*/
    return a4; /*0x529756*/
  *(_DWORD *)(v10 + 16) = v12; /*0x52967b*/
  v8 = aP2; /*0x52967e*/
LABEL_11:
  if ( !*(_DWORD *)(v10 + 4) ) /*0x529682*/
    goto LABEL_29; /*0x529682*/
  v13 = *(CCINIClass ***)(v10 + 16); /*0x52968d*/
  if ( v13 && *v13 == v8 ) /*0x529696*/
    goto LABEL_16; /*0x529696*/
  v14 = HashTable::BinarySearchAlt((char **)v10, (CCINIClass *)&aP2); /*0x52969f*/
  if ( !v14 ) /*0x5296a6*/
  {
LABEL_29:
    v15 = (int *)&unk_B78830; /*0x529759*/
    goto LABEL_30; /*0x529759*/
  }
  *(_DWORD *)(v10 + 16) = v14; /*0x5296ac*/
LABEL_16:
  v15 = (int *)(*(_DWORD *)(v10 + 16) + 4); /*0x5296af*/
LABEL_30:
  v21 = *v15; /*0x52975e*/
  if ( !v21 ) /*0x529762*/
    return a4; /*0x529762*/
  v22 = *(char **)(v21 + 16); /*0x529764*/
  if ( !v22 ) /*0x529769*/
    return a4; /*0x529769*/
  switch ( toupper(*v22) ) /*0x529787*/
  {
    case '0': /*0x529787*/
    case 'F': /*0x529787*/
    case 'N': /*0x529787*/
      result = 0; /*0x52979d*/
      break; /*0x52979d*/
    case '1': /*0x529787*/
    case 'T': /*0x529787*/
    case 'Y': /*0x529787*/
      result = 1; /*0x529791*/
      break; /*0x529797*/
    default:
      return a4;
  }
  return result; /*0x52974f*/
}


// ==== 0x005297E0  INIEntry::Write2Integers  this=ObjectTypeClass  sig=csp ====
char __thiscall INIEntry::Write2Integers(char *this, unsigned __int8 *Block, char *a2, CCINIClass *aP3)
{
  char Buffer[56]; // [esp+4h] [ebp-38h] BYREF

  sprintf(Buffer, g_INI_Key_Digest.__pad_20, *(_DWORD *)aP3->__pad_0, aP3->headNode[0]); /*0x5297fb*/
  return INIClass::SetString(this, (INIClass *)Block, (INIClass *)a2, (INIClass *)Buffer); /*0x529819*/
}


// ==== 0x00529820  INIClass::GetInt  this=INIClass  sig=csp ====
char __thiscall INIClass::GetInt(char *this, char **a2, char **a3, _DWORD *a4)
{
  INIClass *v5; // edi
  INIClass *v6; // ebx
  char Buffer[56]; // [esp+Ch] [ebp-38h] BYREF

  v5 = (INIClass *)String::GetOrEmpty_Alt(a3); /*0x529835*/
  v6 = (INIClass *)String::GetOrEmpty_Alt(a2); /*0x52983c*/
  sprintf(Buffer, g_INI_Key_Digest.__pad_20, *a4, a4[1]); /*0x529853*/
  return INIClass::SetString(this, v6, v5, (INIClass *)Buffer); /*0x529869*/
}


// ==== 0x00529880  INIClass::ReadPoint2D_Overwrite  this=IUnknown  sig=csp ====
int *__thiscall INIClass::ReadPoint2D_Overwrite(
        _DWORD *this,
        RandomStruct *aP1,
        INIClass *aP2,
        CCINIClass *aP3,
        RandomStruct *aP4)
{
  INIClass *v6; // ebx
  Color *v7; // edx
  int v8; // esi
  unsigned int v9; // kr04_4
  unsigned int *v10; // eax
  int v11; // esi
  int v12; // eax
  RandomStruct *v13; // eax
  INIClass *v15; // edx
  INIClass *v16; // esi
  RandomStruct *v18; // [esp-Ch] [ebp-78h]
  INIClass *Source; // [esp+Ch] [ebp-60h]
  INIClass v19; // [esp+10h] [ebp-5Ch] BYREF
  char v20; // [esp+6Bh] [ebp-1h]

  Source = (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760]; /*0x52988e*/
  if ( &v19 == (INIClass *)-28 ) /*0x529896*/
    goto LABEL_18; /*0x529896*/
  v6 = aP2; /*0x52989c*/
  if ( !aP2 ) /*0x5298a4*/
    goto LABEL_18; /*0x5298a4*/
  v7 = (Color *)aP3; /*0x5298aa*/
  if ( !aP3 ) /*0x5298b0*/
    goto LABEL_18; /*0x5298b0*/
  if ( aP2 == (INIClass *)this->q004 ) /*0x5298bc*/
  {
    v8 = this->q008; /*0x5298c2*/
  }
  else
  {
    memset(v19.headNode, 0, sizeof(v19.headNode)); /*0x52999c*/
    v16 = (INIClass *)Checksummer::Add_Buffer( /*0x5299c6*/
                        (unsigned int *)v19.headNode,
                        (unsigned __int8 *)aP2,
                        (IUnknown *)strlen(aP2->__pad_0));
    aP2 = v16; /*0x5299cb*/
    if ( !HashTable::BinarySearch((int)(this + 10), (ObjectClass *)&aP2) /*0x5299ec*/
      || (*(_DWORD *)v19.__pad_0 = v16, (v8 = *(_DWORD *)SortedArray::FindValue((int)(this + 10), &v19)) == 0) )
    {
      this->q004 = 0; /*0x5299ff*/
      this->q008 = 0; /*0x529a02*/
      goto LABEL_11; /*0x529a05*/
    }
    v7 = (Color *)aP3; /*0x5299ee*/
    this->q008 = v8; /*0x5299f2*/
    this->q004 = v6; /*0x5299f5*/
  }
  if ( v8 ) /*0x5298c7*/
  {
    v9 = strlen((const char *)v7) + 1; /*0x5298d0*/
    v18 = (RandomStruct *)v7; /*0x5298d6*/
    v10 = KeyValuePair::Init(v19.sectionHead, 0); /*0x5298dc*/
    aP3 = (CCINIClass *)Checksummer::Add_Buffer(v10, (unsigned __int8 *)v18, (IUnknown *)(v9 - 1)); /*0x5298e8*/
    v11 = v8 + 44; /*0x5298ec*/
    if ( SortedArray::Find(v11, (CCINIClass *)&aP3) ) /*0x5298f6*/
    {
      v12 = *(_DWORD *)SortedArray::BinarySearch2(v11, (Color *)&aP3); /*0x52990b*/
      if ( v12 ) /*0x52990f*/
      {
        v13 = *(RandomStruct **)(v12 + 16); /*0x529911*/
        if ( v13 ) /*0x529916*/
          Source = (INIClass *)v13; /*0x529918*/
      }
    }
  }
LABEL_11:
  if ( Source ) /*0x529923*/
  {
    strncpy((char *)&v19.sectionCount, Source->__pad_0, 0x40u); /*0x529931*/
    v20 = 0; /*0x52993d*/
    String::Trim((char *)&v19.sectionCount); /*0x529942*/
    if ( strlen((const char *)&v19.sectionCount) ) /*0x52994b*/
    {
      sscanf((const char *const)&v19.sectionCount, g_INI_Key_Digest.__pad_20, &aP3, &aP2); /*0x529971*/
      v15 = aP2; /*0x529984*/
      aP1->Min = (int)aP3; /*0x52998e*/
      aP1->Max = (int)v15; /*0x529990*/
      return &aP1->Min; /*0x529999*/
    }
  }
LABEL_18:
  *aP1 = *aP4; /*0x529a0a*/
  return &aP1->Min; /*0x529993*/
}


// ==== 0x00529A30  INIClass::GetCoordPair  this=IUnknown  sig=csp ====
_DWORD *__thiscall INIClass::GetCoordPair(_DWORD *this, CCINIClass *aP1, ObjectClass *aP2, char **a3, CCINIClass *aP4)
{
  char **v6; // edi
  char *v7; // ebp
  int v8; // ebx
  unsigned int v9; // kr04_4
  unsigned int *v10; // eax
  int v11; // ebx
  int v12; // eax
  ObjectClass *v13; // eax
  CCINIClass *v15; // edx
  unsigned int v16; // kr0C_4
  unsigned int *eax14; // eax
  INIClass *v17; // edi
  int edx18; // edx
  CCINIClass *v19; // [esp-Ch] [ebp-78h]
  CCINIClass *v20; // [esp+0h] [ebp-6Ch] BYREF
  INIClass *v22; // [esp+Ch] [ebp-60h] BYREF
  INIClass v23; // [esp+10h] [ebp-5Ch] BYREF
  char v24; // [esp+6Bh] [ebp-1h]

  v6 = (char **)String::GetOrEmpty_Alt(a3); /*0x529a45*/
  a3 = v6; /*0x529a47*/
  v7 = String::GetOrEmpty_Alt((char **)aP2); /*0x529a50*/
  aP2 = (ObjectClass *)&MEMORY[0x87F8E4].__pad_5568[20760]; /*0x529a58*/
  if ( &v20 == (CCINIClass **)-44 || !v7 || !v6 ) /*0x529a70*/
    goto LABEL_18; /*0x529a70*/
  if ( v7 == (char *)this->q004 ) /*0x529a7c*/
  {
    v8 = this->q008; /*0x529a82*/
  }
  else
  {
    v16 = strlen(v7) + 1; /*0x529b69*/
    eax14 = KeyValuePair::Init(v23.headNode, 0); /*0x529b75*/
    v17 = (INIClass *)Checksummer::Add_Buffer(eax14, (unsigned __int8 *)v7, (IUnknown *)(v16 - 1)); /*0x529b88*/
    v22 = v17; /*0x529b8d*/
    if ( !HashTable::BinarySearch((int)(this + 10), (ObjectClass *)&v22) /*0x529bae*/
      || (*(_DWORD *)v23.__pad_0 = v17, (v8 = *(_DWORD *)SortedArray::FindValue((int)(this + 10), &v23)) == 0) )
    {
      this->q004 = 0; /*0x529bc1*/
      this->q008 = 0; /*0x529bc4*/
      goto LABEL_11; /*0x529bc7*/
    }
    v6 = a3; /*0x529bb0*/
    this->q008 = v8; /*0x529bb4*/
    this->q004 = v7; /*0x529bb7*/
  }
  if ( v8 ) /*0x529a87*/
  {
    v9 = strlen((const char *)v6) + 1; /*0x529a8e*/
    v19 = (CCINIClass *)a3; /*0x529a98*/
    v10 = KeyValuePair::Init(v23.sectionHead, 0); /*0x529a9f*/
    v11 = v8 + 44; /*0x529aaf*/
    a3 = (char **)Checksummer::Add_Buffer(v10, (unsigned __int8 *)v19, (IUnknown *)(v9 - 1)); /*0x529ab5*/
    if ( SortedArray::Find(v11, (CCINIClass *)&a3) ) /*0x529abc*/
    {
      v12 = *(_DWORD *)SortedArray::BinarySearch2(v11, (Color *)&a3); /*0x529ad1*/
      if ( v12 ) /*0x529ad5*/
      {
        v13 = *(ObjectClass **)(v12 + 16); /*0x529ad7*/
        if ( v13 ) /*0x529adc*/
          aP2 = v13; /*0x529ade*/
      }
    }
  }
LABEL_11:
  if ( aP2 ) /*0x529ae9*/
  {
    strncpy((char *)&v23.sectionCount, aP2->__pad_0, 0x40u); /*0x529af7*/
    v24 = 0; /*0x529b03*/
    String::Trim((char *)&v23.sectionCount); /*0x529b08*/
    if ( strlen((const char *)&v23.sectionCount) ) /*0x529b11*/
    {
      sscanf((const char *const)&v23.sectionCount, g_INI_Key_Digest.__pad_20, &aP2, &aP4); /*0x529b37*/
      v15 = aP4; /*0x529b4a*/
      *(_DWORD *)aP1->__pad_0 = aP2; /*0x529b54*/
      aP1->headNode[0] = (int)v15; /*0x529b56*/
      return aP1->__pad_0; /*0x529b5f*/
    }
  }
LABEL_18:
  edx18 = aP4->headNode[0]; /*0x529bcc*/
  *(_DWORD *)aP1->__pad_0 = *(_DWORD *)aP4->__pad_0; /*0x529bdc*/
  aP1->headNode[0] = edx18; /*0x529bde*/
  return aP1->__pad_0; /*0x529b59*/
}


// ==== 0x00529BF0  INIClass::ReadCoord3  this=INIClass  sig=csp ====
char __thiscall INIClass::ReadCoord3(char *this, INIClass *Block, INIClass *aP2, AbstractClass *aP3)
{
  char Buffer[56]; // [esp+4h] [ebp-38h] BYREF

  sprintf(Buffer, (ObjectClass *)&stru_81898C.objectTypeFlags, *(INIClass **)aP3->__pad_0); /*0x529c0f*/
  return INIClass::SetString(this, Block, aP2, (INIClass *)Buffer); /*0x529c2d*/
}


// ==== 0x00529C40  INIClass::ReadCoord2  this=INIClass  sig=csp ====
char __thiscall INIClass::ReadCoord2(char *this, char **a2, char **a3, _DWORD *a4)
{
  INIClass *v5; // edi
  INIClass *v6; // ebx
  char Buffer[56]; // [esp+Ch] [ebp-38h] BYREF

  v5 = (INIClass *)String::GetOrEmpty_Alt(a3); /*0x529c55*/
  v6 = (INIClass *)String::GetOrEmpty_Alt(a2); /*0x529c5c*/
  sprintf(Buffer, (const char *const)&MEMORY[0x818994].sectionCount, *a4, a4[1], a4[2]); /*0x529c77*/
  return INIClass::SetString(this, v6, v5, (INIClass *)Buffer); /*0x529c8d*/
}


// ==== 0x00529CA0  INIClass::ReadPoint3D_Overwrite  this=AbstractTypeClass  sig=csp ====
int *__thiscall INIClass::ReadPoint3D_Overwrite(
        _DWORD *this,
        CCINIClass *aP1,
        unsigned __int8 *a2,
        int aP1_4,
        _DWORD *a4)
{
  Color *v6; // ebx
  Color *v7; // edx
  int v8; // esi
  unsigned int v9; // kr04_4
  unsigned int *v10; // eax
  int v11; // esi
  int v12; // eax
  ObjectClass *v13; // eax
  unsigned __int8 *v15; // edx
  _DWORD *v16; // esi
  unsigned __int8 *v17; // esi
  _DWORD *v18; // ecx
  unsigned __int8 *v19; // [esp-8h] [ebp-78h]
  ObjectClass *Source; // [esp+10h] [ebp-60h]
  INIClass v21; // [esp+14h] [ebp-5Ch] BYREF
  char v22; // [esp+6Fh] [ebp-1h]

  Source = (ObjectClass *)&stru_87C374.__pad_579C[33876]; /*0x529caf*/
  if ( &v21 == (INIClass *)-28 ) /*0x529cb7*/
    goto LABEL_18; /*0x529cb7*/
  v6 = (Color *)a2; /*0x529cbd*/
  if ( !a2 ) /*0x529cc5*/
    goto LABEL_18; /*0x529cc5*/
  v7 = (Color *)aP1_4; /*0x529ccb*/
  if ( !aP1_4 ) /*0x529cd1*/
    goto LABEL_18; /*0x529cd1*/
  if ( a2 == (unsigned __int8 *)this->vtable2 ) /*0x529cda*/
  {
    v8 = this->vtable3; /*0x529ce0*/
  }
  else
  {
    memset(v21.headNode, 0, sizeof(v21.headNode)); /*0x529dd1*/
    v17 = (unsigned __int8 *)Checksummer::Add_Buffer( /*0x529dfb*/
                               (unsigned int *)v21.headNode,
                               a2,
                               (IUnknown *)strlen((const char *)a2));
    a2 = v17; /*0x529e00*/
    if ( !HashTable::BinarySearch((int)(this + 10), (ObjectClass *)&a2) /*0x529e21*/
      || (*(_DWORD *)v21.__pad_0 = v17, (v8 = *(_DWORD *)SortedArray::FindValue((int)(this + 10), &v21)) == 0) )
    {
      this->vtable2 = 0; /*0x529e34*/
      this->vtable3 = 0; /*0x529e37*/
      goto LABEL_11; /*0x529e3a*/
    }
    v7 = (Color *)aP1_4; /*0x529e23*/
    this->vtable3 = v8; /*0x529e27*/
    this->vtable2 = v6; /*0x529e2a*/
  }
  if ( v8 ) /*0x529ce5*/
  {
    v9 = strlen((const char *)v7) + 1; /*0x529cee*/
    v19 = (unsigned __int8 *)v7; /*0x529cf4*/
    v10 = KeyValuePair::Init(v21.sectionHead, 0); /*0x529cfa*/
    aP1_4 = Checksummer::Add_Buffer(v10, v19, (IUnknown *)(v9 - 1)); /*0x529d06*/
    v11 = v8 + 44; /*0x529d0a*/
    if ( SortedArray::Find(v11, (CCINIClass *)&aP1_4) ) /*0x529d14*/
    {
      v12 = *(_DWORD *)SortedArray::BinarySearch2(v11, (Color *)&aP1_4); /*0x529d29*/
      if ( v12 ) /*0x529d2d*/
      {
        v13 = *(ObjectClass **)(v12 + 16); /*0x529d2f*/
        if ( v13 ) /*0x529d34*/
          Source = v13; /*0x529d36*/
      }
    }
  }
LABEL_11:
  if ( Source ) /*0x529d40*/
  {
    strncpy((char *)&v21.sectionCount, Source->__pad_0, (IUnknown *)0x40); /*0x529d4e*/
    v22 = 0; /*0x529d5a*/
    String::Trim((char *)&v21.sectionCount); /*0x529d5f*/
    if ( strlen((const char *)&v21.sectionCount) ) /*0x529d68*/
    {
      sscanf((const char *const)&v21.sectionCount, (const char *const)&stru_81898C.objectTypeFlags, &aP1_4, &a2, &a4); /*0x529d99*/
      v15 = a2; /*0x529dac*/
      v16 = a4; /*0x529db3*/
      *(_DWORD *)aP1->__pad_0 = aP1_4; /*0x529dbf*/
      aP1->headNode[0] = (int)v15; /*0x529dc1*/
      aP1->headNode[1] = (int)v16; /*0x529dc4*/
      return (int *)aP1->__pad_0; /*0x529dce*/
    }
  }
LABEL_18:
  v18 = a4; /*0x529e3f*/
  *(_DWORD *)aP1->__pad_0 = *a4; /*0x529e4f*/
  aP1->headNode[0] = v18[1]; /*0x529e54*/
  aP1->headNode[1] = v18[2]; /*0x529e5c*/
  return (int *)aP1->__pad_0; /*0x529dc7*/
}


// ==== 0x00529E70  ObjectClass::method_529E70  this=ObjectClass  sig=csp ====
char **__thiscall sub_529E70(_DWORD *this, char **a2, char *Source, char **a4, char **a5)
{
  char *v6; // edi
  char *v7; // ebp
  int v8; // ebx
  unsigned int v9; // kr04_4
  unsigned int *v10; // eax
  int v11; // ebx
  int v12; // eax
  char *v13; // eax
  char *v14; // ecx
  char *v15; // edx
  char *v16; // esi
  unsigned int v17; // kr0C_4
  unsigned int *v18; // eax
  int v19; // edi
  unsigned __int8 *v21; // [esp-Ch] [ebp-7Ch]
  int v22; // [esp+0h] [ebp-70h] BYREF
  int v23; // [esp+Ch] [ebp-64h] BYREF
  int v24; // [esp+10h] [ebp-60h] BYREF
  char *v25; // [esp+14h] [ebp-5Ch] BYREF
  int v26[3]; // [esp+18h] [ebp-58h] BYREF
  int v27[3]; // [esp+24h] [ebp-4Ch] BYREF
  char Destination[64]; // [esp+30h] [ebp-40h] BYREF

  v6 = String::GetOrEmpty_Alt(a4); /*0x529e85*/
  a4 = (char **)v6; /*0x529e87*/
  v7 = String::GetOrEmpty_Alt((char **)Source); /*0x529e90*/
  Source = &MEMORY[0x889F64]; /*0x529e98*/
  if ( &v22 == (int *)-48 || !v7 || !v6 ) /*0x529eb0*/
    goto LABEL_18; /*0x529eb0*/
  if ( v7 == (char *)this->vtable2 ) /*0x529ebc*/
  {
    v8 = this->vtable3; /*0x529ec2*/
  }
  else
  {
    v17 = strlen(v7) + 1; /*0x529fab*/
    v18 = KeyValuePair::Init(v26, 0); /*0x529fb7*/
    v19 = Checksummer::Add_Buffer(v18, (unsigned __int8 *)v7, v17 - 1); /*0x529fca*/
    v23 = v19; /*0x529fcf*/
    if ( !HashTable::BinarySearch((int)(this + 10), &v23) /*0x529ff0*/
      || (v24 = v19, (v8 = *(_DWORD *)SortedArray::FindValue((int)(this + 10), &v24)) == 0) )
    {
      this->vtable2 = 0; /*0x52a006*/
      this->vtable3 = 0; /*0x52a009*/
      goto LABEL_11; /*0x52a00c*/
    }
    v6 = (char *)a4; /*0x529ff2*/
    this->vtable3 = v8; /*0x529ff9*/
    this->vtable2 = v7; /*0x529ffc*/
  }
  if ( v8 ) /*0x529ec7*/
  {
    v9 = strlen(v6) + 1; /*0x529ece*/
    v21 = (unsigned __int8 *)a4; /*0x529edb*/
    v10 = KeyValuePair::Init(v27, 0); /*0x529ee2*/
    v11 = v8 + 44; /*0x529ef5*/
    a4 = (char **)Checksummer::Add_Buffer(v10, v21, v9 - 1); /*0x529efb*/
    if ( SortedArray::Find(v11, (int *)&a4) ) /*0x529f02*/
    {
      v12 = *(_DWORD *)SortedArray::BinarySearch2(v11, (int *)&a4); /*0x529f1a*/
      if ( v12 ) /*0x529f1e*/
      {
        v13 = *(char **)(v12 + 16); /*0x529f20*/
        if ( v13 ) /*0x529f25*/
          Source = v13; /*0x529f27*/
      }
    }
  }
LABEL_11:
  if ( !Source /*0x529f5a*/
    || (strncpy(Destination, Source, 0x40u), Destination[63] = 0, String::Trim(Destination), !strlen(Destination)) )
  {
LABEL_18:
    v14 = *a5; /*0x52a011*/
    v15 = a5[1]; /*0x52a01a*/
    v16 = a5[2]; /*0x52a01d*/
    goto LABEL_19; /*0x52a01d*/
  }
  sscanf(Destination, MEMORY[0x8189B0], &Source, &a5, &v25); /*0x529f88*/
  v14 = Source; /*0x529f8d*/
  v15 = (char *)a5; /*0x529f94*/
  v16 = v25; /*0x529f9b*/
LABEL_19:
  *a2 = v14; /*0x52a020*/
  a2[1] = v15; /*0x52a028*/
  a2[2] = v16; /*0x52a02b*/
  return a2; /*0x52a02e*/
}


// ==== 0x0052A040  INIClass::ReadBool2  this=INIClass  sig=csp ====
char __thiscall INIClass::ReadBool2(char *this, INIClass *Block, INIClass *aP2, float *a4)
{
  char Buffer[56]; // [esp+1Ch] [ebp-38h] BYREF

  sprintf(Buffer, (const char *const)&MEMORY[0x825BF4].headNode[1], *a4, a4[1], a4[2]); /*0x52a06e*/
  return INIClass::SetString(this, Block, aP2, (INIClass *)Buffer); /*0x52a08c*/
}


// ==== 0x0052A0A0  INIClass::ReadBool  this=INIClass  sig=csp ====
char __thiscall INIClass::ReadBool(char *this, char **a2, char **a3, float *a4)
{
  INIClass *v5; // edi
  INIClass *v6; // ebx
  char Buffer[56]; // [esp+24h] [ebp-38h] BYREF

  v5 = (INIClass *)String::GetOrEmpty_Alt(a3); /*0x52a0b5*/
  v6 = (INIClass *)String::GetOrEmpty_Alt(a2); /*0x52a0bc*/
  sprintf(Buffer, (const char *const)&MEMORY[0x825BF4].headNode[1], *a4, a4[1], a4[2]); /*0x52a0e6*/
  return INIClass::SetString(this, v6, v5, (INIClass *)Buffer); /*0x52a0fc*/
}


// ==== 0x0052A110  ObjectClass::method_52A110  this=ObjectClass  sig=csp ====
float *__thiscall sub_52A110(_DWORD *this, float *a2, unsigned __int8 *a3, float a4, float *a5)
{
  unsigned __int8 *v6; // ebx
  const char *v7; // edx
  int v8; // esi
  unsigned int v9; // kr04_4
  unsigned int *v10; // eax
  int v11; // esi
  int v12; // eax
  char *v13; // eax
  double v15; // st7
  unsigned __int8 *v16; // esi
  float v17; // ecx
  unsigned __int8 *v18; // [esp-8h] [ebp-78h]
  char *Source; // [esp+10h] [ebp-60h]
  unsigned __int8 *v20; // [esp+14h] [ebp-5Ch] BYREF
  float v21; // [esp+18h] [ebp-58h] BYREF
  float v22; // [esp+1Ch] [ebp-54h]
  float v23; // [esp+20h] [ebp-50h]
  _DWORD v24[3]; // [esp+24h] [ebp-4Ch] BYREF
  char Destination[64]; // [esp+30h] [ebp-40h] BYREF

  Source = &MEMORY[0x889F64]; /*0x52a11f*/
  if ( !Destination ) /*0x52a127*/
    goto LABEL_18; /*0x52a127*/
  v6 = a3; /*0x52a12d*/
  if ( *(float *)&a3 == 0.0 ) /*0x52a135*/
    goto LABEL_18; /*0x52a135*/
  v7 = (const char *)LODWORD(a4); /*0x52a13b*/
  if ( a4 == 0.0 ) /*0x52a141*/
    goto LABEL_18; /*0x52a141*/
  if ( a3 == (unsigned __int8 *)this->vtable2 ) /*0x52a14a*/
  {
    v8 = this->vtable3; /*0x52a150*/
  }
  else
  {
    v21 = 0.0; /*0x52a256*/
    v22 = 0.0; /*0x52a25a*/
    v23 = 0.0; /*0x52a25e*/
    *(float *)&v16 = COERCE_FLOAT(Checksummer::Add_Buffer((unsigned int *)&v21, a3, strlen((const char *)a3))); /*0x52a280*/
    a3 = v16; /*0x52a285*/
    if ( !HashTable::BinarySearch((int)(this + 10), (int *)&a3) /*0x52a2a6*/
      || (v20 = v16, (v8 = *(_DWORD *)SortedArray::FindValue((int)(this + 10), (int *)&v20)) == 0) )
    {
      this->vtable2 = 0; /*0x52a2b9*/
      this->vtable3 = 0; /*0x52a2bc*/
      goto LABEL_11; /*0x52a2bf*/
    }
    v7 = (const char *)LODWORD(a4); /*0x52a2a8*/
    this->vtable3 = v8; /*0x52a2ac*/
    this->vtable2 = v6; /*0x52a2af*/
  }
  if ( v8 ) /*0x52a155*/
  {
    v9 = strlen(v7) + 1; /*0x52a15e*/
    v18 = (unsigned __int8 *)v7; /*0x52a164*/
    v10 = KeyValuePair::Init(v24, 0); /*0x52a16a*/
    a4 = COERCE_FLOAT(Checksummer::Add_Buffer(v10, v18, v9 - 1)); /*0x52a176*/
    v11 = v8 + 44; /*0x52a17a*/
    if ( SortedArray::Find(v11, (int *)&a4) ) /*0x52a184*/
    {
      v12 = *(_DWORD *)SortedArray::BinarySearch2(v11, (int *)&a4); /*0x52a199*/
      if ( v12 ) /*0x52a19d*/
      {
        v13 = *(char **)(v12 + 16); /*0x52a19f*/
        if ( v13 ) /*0x52a1a4*/
          Source = v13; /*0x52a1a6*/
      }
    }
  }
LABEL_11:
  if ( Source ) /*0x52a1b0*/
  {
    strncpy(Destination, Source, 0x40u); /*0x52a1be*/
    Destination[63] = 0; /*0x52a1ca*/
    String::Trim(Destination); /*0x52a1cf*/
    if ( strlen(Destination) ) /*0x52a1d8*/
    {
      sscanf(Destination, MEMORY[0x825BFC], &a4, &a3, &a5); /*0x52a209*/
      v21 = a4; /*0x52a21f*/
      v22 = *(float *)&a3; /*0x52a22d*/
      v15 = *(float *)&a5; /*0x52a231*/
      *a2 = a4; /*0x52a238*/
      v23 = v15; /*0x52a23e*/
      a2[1] = v22; /*0x52a242*/
      a2[2] = v23; /*0x52a24c*/
      return a2; /*0x52a253*/
    }
  }
LABEL_18:
  v17 = *(float *)&a5; /*0x52a2c4*/
  *a2 = *a5; /*0x52a2d4*/
  a2[1] = *(float *)(LODWORD(v17) + 4); /*0x52a2d9*/
  a2[2] = *(float *)(LODWORD(v17) + 8); /*0x52a2e1*/
  return a2; /*0x52a249*/
}


// ==== 0x0052A2F0  ObjectClass::method_52A2F0  this=ObjectClass  sig=csp ====
float *__thiscall sub_52A2F0(_DWORD *this, float *a2, float Source, char **a4, float *a5)
{
  char *v6; // edi
  char *v7; // ebp
  int v8; // ebx
  unsigned int v9; // kr04_4
  unsigned int *v10; // eax
  int v11; // ebx
  int v12; // eax
  char *v13; // eax
  float v14; // ecx
  float *v15; // edx
  float v16; // esi
  unsigned int v17; // kr0C_4
  unsigned int *v18; // eax
  int v19; // edi
  unsigned __int8 *v21; // [esp-Ch] [ebp-7Ch]
  int v22; // [esp+0h] [ebp-70h] BYREF
  int v23; // [esp+Ch] [ebp-64h] BYREF
  int v24; // [esp+10h] [ebp-60h] BYREF
  float v25; // [esp+14h] [ebp-5Ch] BYREF
  float v26[3]; // [esp+18h] [ebp-58h] BYREF
  int v27[3]; // [esp+24h] [ebp-4Ch] BYREF
  char Destination[64]; // [esp+30h] [ebp-40h] BYREF

  v6 = String::GetOrEmpty_Alt(a4); /*0x52a305*/
  a4 = (char **)v6; /*0x52a307*/
  v7 = String::GetOrEmpty_Alt((char **)LODWORD(Source)); /*0x52a310*/
  Source = COERCE_FLOAT(&MEMORY[0x889F64]); /*0x52a318*/
  if ( &v22 == (int *)-48 || !v7 || !v6 ) /*0x52a330*/
    goto LABEL_18; /*0x52a330*/
  if ( v7 == (char *)this->vtable2 ) /*0x52a33c*/
  {
    v8 = this->vtable3; /*0x52a342*/
  }
  else
  {
    v17 = strlen(v7) + 1; /*0x52a443*/
    v18 = KeyValuePair::Init(v26, 0); /*0x52a44f*/
    v19 = Checksummer::Add_Buffer(v18, (unsigned __int8 *)v7, v17 - 1); /*0x52a462*/
    v23 = v19; /*0x52a467*/
    if ( !HashTable::BinarySearch((int)(this + 10), &v23) /*0x52a488*/
      || (v24 = v19, (v8 = *(_DWORD *)SortedArray::FindValue((int)(this + 10), &v24)) == 0) )
    {
      this->vtable2 = 0; /*0x52a49e*/
      this->vtable3 = 0; /*0x52a4a1*/
      goto LABEL_11; /*0x52a4a4*/
    }
    v6 = (char *)a4; /*0x52a48a*/
    this->vtable3 = v8; /*0x52a491*/
    this->vtable2 = v7; /*0x52a494*/
  }
  if ( v8 ) /*0x52a347*/
  {
    v9 = strlen(v6) + 1; /*0x52a34e*/
    v21 = (unsigned __int8 *)a4; /*0x52a35b*/
    v10 = KeyValuePair::Init(v27, 0); /*0x52a362*/
    v11 = v8 + 44; /*0x52a375*/
    a4 = (char **)Checksummer::Add_Buffer(v10, v21, v9 - 1); /*0x52a37b*/
    if ( SortedArray::Find(v11, (int *)&a4) ) /*0x52a382*/
    {
      v12 = *(_DWORD *)SortedArray::BinarySearch2(v11, (int *)&a4); /*0x52a39a*/
      if ( v12 ) /*0x52a39e*/
      {
        v13 = *(char **)(v12 + 16); /*0x52a3a0*/
        if ( *(float *)&v13 != 0.0 ) /*0x52a3a5*/
          Source = *(float *)&v13; /*0x52a3a7*/
      }
    }
  }
LABEL_11:
  if ( Source == 0.0 /*0x52a3da*/
    || (strncpy(Destination, (const char *)LODWORD(Source), 0x40u),
        Destination[63] = 0,
        String::Trim(Destination),
        !strlen(Destination)) )
  {
LABEL_18:
    v14 = *a5; /*0x52a4a9*/
    v15 = (float *)*((_DWORD *)a5 + 1); /*0x52a4b2*/
    v16 = a5[2]; /*0x52a4b5*/
    goto LABEL_19; /*0x52a4b5*/
  }
  sscanf(Destination, MEMORY[0x825BFC], &Source, &a5, &v25); /*0x52a408*/
  v26[0] = Source; /*0x52a414*/
  v14 = Source; /*0x52a41f*/
  v26[1] = *(float *)&a5; /*0x52a426*/
  v15 = a5; /*0x52a42e*/
  v26[2] = v25; /*0x52a432*/
  v16 = v25; /*0x52a436*/
LABEL_19:
  *a2 = v14; /*0x52a4b8*/
  *((_DWORD *)a2 + 1) = v15; /*0x52a4c0*/
  a2[2] = v16; /*0x52a4c3*/
  return a2; /*0x52a4c6*/
}


// ==== 0x0052A4D0  ObjectClass::method_52A4D0  this=ObjectClass  sig=csp ====
int __thiscall sub_52A4D0(int this, unsigned __int8 *a2)
{
  int v3; // eax
  size_t v4; // ecx
  unsigned int v5; // edi
  _DWORD *v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  size_t v10; // eax
  _DWORD *v11; // ecx
  int v12; // ecx
  int v13; // ebp
  int v14; // edi
  int v15; // edx
  unsigned int v17[3]; // [esp+Ch] [ebp-Ch] BYREF
  int v18; // [esp+1Ch] [ebp+4h]

  if ( !a2 ) /*0x52a4e0*/
    return 0; /*0x52a4e0*/
  memset(v17, 0, sizeof(v17)); /*0x52a4ed*/
  v3 = Checksummer::Add_Buffer(v17, a2, strlen((const char *)a2)); /*0x52a504*/
  v4 = *(_DWORD *)(this + 48); /*0x52a509*/
  v5 = v3; /*0x52a50c*/
  v18 = v3; /*0x52a510*/
  if ( !v4 ) /*0x52a514*/
    return 0; /*0x52a514*/
  v6 = *(_DWORD **)(this + 60); /*0x52a51a*/
  if ( v6 && *v6 == v5 ) /*0x52a523*/
    goto LABEL_9; /*0x52a523*/
  if ( !*(_BYTE *)(this + 56) ) /*0x52a525*/
  {
    qsort(*(void **)(this + 44), v4, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc3Int); /*0x52a536*/
    *(_DWORD *)(this + 60) = 0; /*0x52a53e*/
    *(_BYTE *)(this + 56) = 1; /*0x52a541*/
  }
  v7 = *(_DWORD *)(this + 48); /*0x52a545*/
  v8 = *(_DWORD *)(this + 44); /*0x52a54d*/
  v17[0] = v5; /*0x52a550*/
  v9 = UI_Find(v8, v7, (int *)v17); /*0x52a554*/
  if ( !v9 ) /*0x52a55b*/
    return 0; /*0x52a5f8*/
  *(_DWORD *)(this + 60) = v9; /*0x52a561*/
LABEL_9:
  v10 = *(_DWORD *)(this + 48); /*0x52a564*/
  if ( !v10 ) /*0x52a56a*/
    return unk_B78830; /*0x52a56a*/
  v11 = *(_DWORD **)(this + 60); /*0x52a56c*/
  if ( v11 && *v11 == v5 ) /*0x52a575*/
    return *(_DWORD *)(*(_DWORD *)(this + 60) + 4); /*0x52a5f3*/
  if ( !*(_BYTE *)(this + 56) ) /*0x52a577*/
  {
    qsort(*(void **)(this + 44), v10, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc3Int); /*0x52a588*/
    *(_DWORD *)(this + 60) = 0; /*0x52a590*/
    *(_BYTE *)(this + 56) = 1; /*0x52a593*/
  }
  v12 = *(_DWORD *)(this + 48); /*0x52a597*/
  v13 = *(_DWORD *)(this + 44); /*0x52a59a*/
  if ( v12 <= 0 ) /*0x52a59f*/
    return unk_B78830; /*0x52a59f*/
  while ( 1 ) /*0x52a5ac*/
  {
    v14 = *(_DWORD *)(v13 + 8 * (v12 / 2)); /*0x52a5ac*/
    v15 = v13 + 8 * (v12 / 2); /*0x52a5b0*/
    if ( v14 <= v18 ) /*0x52a5b6*/
      break; /*0x52a5b6*/
    v12 /= 2; /*0x52a5b8*/
LABEL_19:
    if ( v12 <= 0 ) /*0x52a5ca*/
      return unk_B78830; /*0x52a5ca*/
  }
  if ( v14 != v18 ) /*0x52a5bc*/
  {
    v13 = v15 + 8; /*0x52a5be*/
    v12 += -1 - v12 / 2; /*0x52a5c6*/
    goto LABEL_19; /*0x52a5c6*/
  }
  if ( v15 ) /*0x52a5df*/
  {
    *(_DWORD *)(this + 60) = v15; /*0x52a5e1*/
    return *(_DWORD *)(*(_DWORD *)(this + 60) + 4); /*0x52a5e1*/
  }
  return unk_B78830; /*0x52a5d2*/
}


// ==== 0x0052A610  ObjectClass::method_52A610  this=ObjectClass  sig=csp ====
char __thiscall sub_52A610(char *this, void *a2)
{
  ObjectClass *v3; // eax
  ObjectClass *v4; // eax
  ObjectClass aP1[2]; // [esp+8h] [ebp-200h] BYREF

  v3 = (ObjectClass *)sub_631FC0(a2, aP1); /*0x52a628*/
  INIClass::ReadBase64Data(this, (unsigned __int8 *)MEMORY[0x825BF4].__pad_20, aP1, v3); /*0x52a63a*/
  v4 = (ObjectClass *)sub_631FE0(a2, aP1); /*0x52a646*/
  INIClass::ReadBase64Data(this, (unsigned __int8 *)&MEMORY[0x825BF4].sectionHead[1], aP1, v4); /*0x52a658*/
  return 1; /*0x52a65d*/
}


// ==== 0x0052A670  ObjectClass::WinMain_Init  this=ObjectClass  sig=csp ====
void *__thiscall sub_52A670(void *this, void *a2, char a3)
{
  _DWORD v5[129]; // [esp+8h] [ebp-504h] BYREF
  _BYTE v6[512]; // [esp+20Ch] [ebp-300h] BYREF
  _DWORD v7[64]; // [esp+40Ch] [ebp-100h] BYREF

  InitArrayWithValue(v5, 0, 64); /*0x52a682*/
  InitArrayWithValue(&v5[64], 0, 64); /*0x52a692*/
  v5[128] = 0; /*0x52a69e*/
  if ( a3 ) /*0x52a6ab*/
  {
    InitArrayWithValue(v7, 65537, 64); /*0x52a6bb*/
    EncodeVarInt((int)v7, v6, 64); /*0x52a6d0*/
  }
  else
  {
    INIClass::GetBase64Data(this, MEMORY[0x825C08], (int)v6, 0x200u); /*0x52a6f3*/
  }
  System_Init_632030(v5, v6); /*0x52a6dd*/
  INIClass::GetBase64Data(this, MEMORY[0x825C14], (int)v6, 0x200u); /*0x52a71d*/
  System_Init_632000(v5, v6); /*0x52a72e*/
  qmemcpy(a2, v5, 0x204u); /*0x52a745*/
  return a2; /*0x52a747*/
}


// ==== 0x0052A760  INIClass::ReadTimeString  this=IUnknown  sig=csp ====
int __thiscall INIClass::ReadTimeString(int this, unsigned __int8 *a1, unsigned __int8 *a2, CCINIClass *aP3)
{
  Color *v5; // edx
  int v6; // esi
  unsigned __int8 *v7; // eax
  int v8; // ecx
  CCINIClass *v9; // esi
  unsigned __int8 **v10; // ecx
  size_t v11; // eax
  unsigned __int8 **v12; // ecx
  size_t v13; // eax
  int *v14; // esi
  CCINIClass *v15; // edi
  CCINIClass **v16; // eax
  size_t v17; // eax
  int *v18; // esi
  CCINIClass *v19; // edx
  int v21; // esi
  const char *v22; // eax
  CCINIClass *v23; // [esp+10h] [ebp-10h] BYREF
  Color *v24; // [esp+14h] [ebp-Ch] BYREF
  int v25; // [esp+18h] [ebp-8h]
  int v26; // [esp+1Ch] [ebp-4h]

  if ( !a1 ) /*0x52a771*/
    return (int)aP3->__pad_0; /*0x52a771*/
  v5 = (Color *)a2; /*0x52a777*/
  if ( !a2 ) /*0x52a77d*/
    return (int)aP3->__pad_0; /*0x52a77d*/
  if ( a1 != *(unsigned __int8 **)(this + 4) ) /*0x52a786*/
  {
    v24 = 0; /*0x52a82f*/
    v25 = 0; /*0x52a838*/
    v26 = 0; /*0x52a842*/
    v15 = (CCINIClass *)Checksummer::Add_Buffer((unsigned int *)&v24, a1, (IUnknown *)strlen((const char *)a1)); /*0x52a84e*/
    v23 = v15; /*0x52a850*/
    if ( *(_DWORD *)(this + 44) ) /*0x52a854*/
    {
      v16 = *(CCINIClass ***)(this + 56); /*0x52a859*/
      if ( !v16 || *v16 != v15 ) /*0x52a862*/
      {
        v17 = SortedArray::BinarySearch((char **)(this + 40), (CCINIClass *)&v23); /*0x52a86b*/
        if ( !v17 ) /*0x52a872*/
          goto LABEL_27; /*0x52a872*/
        *(_DWORD *)(this + 56) = v17; /*0x52a874*/
      }
      v23 = v15; /*0x52a87b*/
      if ( HashTable::BinarySearch(this + 40, (ObjectClass *)&v23) ) /*0x52a882*/
        v18 = (int *)(*(_DWORD *)(this + 56) + 4); /*0x52a88e*/
      else
        v18 = (int *)&unk_B7882C; /*0x52a893*/
      v6 = *v18; /*0x52a898*/
      if ( v6 ) /*0x52a89c*/
      {
        v19 = (CCINIClass *)a1; /*0x52a89e*/
        *(_DWORD *)(this + 8) = v6; /*0x52a8a2*/
        *(_DWORD *)(this + 4) = v19; /*0x52a8a5*/
        v5 = (Color *)a2; /*0x52a8a8*/
        goto LABEL_5; /*0x52a8ac*/
      }
    }
LABEL_27:
    *(_DWORD *)(this + 4) = 0; /*0x52a8b1*/
    *(_DWORD *)(this + 8) = 0; /*0x52a8b4*/
    return (int)aP3->__pad_0; /*0x52a8b4*/
  }
  v6 = *(_DWORD *)(this + 8); /*0x52a78c*/
LABEL_5:
  if ( !v6 ) /*0x52a791*/
    return (int)aP3->__pad_0; /*0x52a791*/
  v24 = 0; /*0x52a79e*/
  v25 = 0; /*0x52a7a7*/
  v26 = 0; /*0x52a7b1*/
  v7 = (unsigned __int8 *)Checksummer::Add_Buffer( /*0x52a7b5*/
                            (unsigned int *)&v24,
                            (unsigned __int8 *)v5,
                            (IUnknown *)strlen((const char *)v5));
  v8 = *(_DWORD *)(v6 + 48); /*0x52a7ba*/
  v9 = (CCINIClass *)(v6 + 44); /*0x52a7bd*/
  a1 = v7; /*0x52a7c2*/
  if ( !v8 ) /*0x52a7c6*/
    return (int)aP3->__pad_0; /*0x52a7c6*/
  v10 = (unsigned __int8 **)v9->sectionHead[0]; /*0x52a7cc*/
  if ( v10 && *v10 == v7 ) /*0x52a7d5*/
    goto LABEL_11; /*0x52a7d5*/
  v11 = HashTable::BinarySearchAlt((char **)v9, (CCINIClass *)&a1); /*0x52a7de*/
  if ( !v11 ) /*0x52a7e5*/
    return (int)aP3->__pad_0; /*0x52a8c2*/
  v9->sectionHead[0] = v11; /*0x52a7eb*/
  v7 = a1; /*0x52a7ee*/
LABEL_11:
  if ( !v9->headNode[0] ) /*0x52a7f2*/
    goto LABEL_29; /*0x52a7f2*/
  v12 = (unsigned __int8 **)v9->sectionHead[0]; /*0x52a7fb*/
  if ( v12 && *v12 == v7 ) /*0x52a804*/
    goto LABEL_16; /*0x52a804*/
  v13 = HashTable::BinarySearchAlt((char **)v9, (CCINIClass *)&a1); /*0x52a80d*/
  if ( !v13 ) /*0x52a814*/
  {
LABEL_29:
    v14 = (int *)&unk_B78830; /*0x52a8c5*/
    goto LABEL_30; /*0x52a8c5*/
  }
  v9->sectionHead[0] = v13; /*0x52a81a*/
LABEL_16:
  v14 = (int *)(v9->sectionHead[0] + 4); /*0x52a81d*/
LABEL_30:
  v21 = *v14; /*0x52a8ca*/
  if ( !v21 ) /*0x52a8ce*/
    return (int)aP3->__pad_0; /*0x52a8ce*/
  v22 = *(const char **)(v21 + 16); /*0x52a8d0*/
  if ( !v22 ) /*0x52a8d5*/
    return (int)aP3->__pad_0; /*0x52a8d5*/
  a1 = 0; /*0x52a8ec*/
  a2 = 0; /*0x52a8f0*/
  aP3 = 0; /*0x52a8f4*/
  sscanf(v22, stru_81F0A8, &a1, &a2, &aP3); /*0x52a8f8*/
  return 60 * ((_DWORD)aP3 + 60 * (_DWORD)&a2[60 * (_DWORD)a1]); /*0x52a8bb*/
}


// ==== 0x0052A940  INIClass::SaveTimeField  this=INIClass  sig=csp ====
char __thiscall INIClass::SaveTimeField(char *this, unsigned __int8 *Block, char *a2, CCINIClass *aP3)
{
  char Buffer[32]; // [esp+8h] [ebp-20h] BYREF

  sprintf(Buffer, stru_81F0A8, (int)aP3 / 60 / 60 / 60, (int)aP3 / 60 / 60 % 60, (int)aP3 / 60 % 60); /*0x52a9ab*/
  return INIClass::SetString(this, (INIClass *)Block, (INIClass *)a2, (INIClass *)Buffer); /*0x52a9c9*/
}


// ==== 0x0052A9E0  System_Load  this=-  sig=csp ====
_BYTE *__fastcall sub_52A9E0(unsigned __int8 *a1, unsigned int *a2, unsigned int *a3, unsigned int *a4)
{
  _BYTE *result; // eax
  unsigned __int8 v5; // bl
  unsigned int v6; // esi
  unsigned __int8 v7; // bl

  *a2 = -1; /*0x52a9ec*/
  result = 0; /*0x52a9f2*/
  *a3 = -1; /*0x52a9f4*/
  *a4 = -1; /*0x52a9fa*/
  v5 = *a1; /*0x52aa01*/
  v6 = 0; /*0x52aa03*/
  if ( *a1 ) /*0x52aa01*/
  {
    while ( 1 ) /*0x52aa09*/
    {
      if ( (*a2 & 0x80000000) == 0 && (*a3 & 0x80000000) != 0 && v5 > 0x20u ) /*0x52aa16*/
        *a3 = v6; /*0x52aa18*/
      v7 = *a1; /*0x52aa1a*/
      if ( *a1 == 59 ) /*0x52aa1f*/
        break; /*0x52aa1f*/
      if ( v7 == 9 ) /*0x52aa24*/
      {
        v6 = (v6 & 0xFFFFFFF8) + 8; /*0x52aa3b*/
      }
      else if ( v7 == 61 ) /*0x52aa29*/
      {
        if ( (*a2 & 0x80000000) != 0 ) /*0x52aa31*/
          *a2 = v6; /*0x52aa33*/
        ++v6; /*0x52aa35*/
      }
      else
      {
        ++v6; /*0x52aa2b*/
      }
      v5 = *++a1; /*0x52aa3e*/
      if ( !v5 ) /*0x52aa44*/
        goto LABEL_17; /*0x52aa44*/
    }
    *a4 = v6; /*0x52aa48*/
    result = a1 + 1; /*0x52aa4b*/
  }
LABEL_17:
  *a2 &= ((*a2 & 0x80000000) != 0) - 1; /*0x52aa4e*/
  *a3 &= ((*a3 & 0x80000000) != 0) - 1; /*0x52aa6a*/
  *a4 &= ((*a4 & 0x80000000) != 0) - 1; /*0x52aa79*/
  return result; /*0x52aa75*/
}


// ==== 0x0052AAF0  INIEntry@INIClass::method_52AAF0  this=INIEntry@INIClass  sig=csp ====
void __thiscall sub_52AAF0(INIEntry_INIClass *this)
{
  CCINIClass *v2; // eax
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  void *v7; // [esp-8h] [ebp-10h]

  v2 = (CCINIClass *)this->field_C; /*0x52aaf4*/
  *(_DWORD *)this->__pad_0 = &vt_INIClass_INIEntry; /*0x52aaf7*/
  free(v2); /*0x52aafe*/
  v7 = (void *)this->field_10; /*0x52ab08*/
  this->field_C = 0; /*0x52ab09*/
  free(v7); /*0x52ab0c*/
  v3 = *(_DWORD *)this->__pad_14; /*0x52ab11*/
  this->field_10 = 0; /*0x52ab19*/
  if ( v3 ) /*0x52ab1c*/
  {
    do /*0x52ab40*/
    {
      free(**(void ***)this->__pad_14); /*0x52ab25*/
      v4 = *(_DWORD *)(*(_DWORD *)this->__pad_14 + 4); /*0x52ab2f*/
      __3_YAXPAX_Z(*(void **)this->__pad_14); /*0x52ab33*/
      *(_DWORD *)this->__pad_14 = v4; /*0x52ab3d*/
    }
    while ( v4 ); /*0x52ab40*/
  }
  free((void *)this->field_18); /*0x52ab47*/
  this->field_18 = 0; /*0x52ab51*/
  *(_DWORD *)this->__pad_0 = &vt_GenericNode; /*0x52ab54*/
  if ( this ) /*0x52ab5a*/
  {
    v5 = *(_DWORD *)&this->__pad_0[4]; /*0x52ab5c*/
    if ( v5 ) /*0x52ab61*/
    {
      v6 = *(_DWORD *)&this->__pad_0[8]; /*0x52ab63*/
      if ( v6 ) /*0x52ab68*/
      {
        *(_DWORD *)(v6 + 4) = v5; /*0x52ab6a*/
        *(_DWORD *)(*(_DWORD *)&this->__pad_0[4] + 8) = *(_DWORD *)&this->__pad_0[8]; /*0x52ab73*/
        *(_DWORD *)&this->__pad_0[8] = 0; /*0x52ab76*/
        *(_DWORD *)&this->__pad_0[4] = 0; /*0x52ab79*/
      }
    }
  }
}


// ==== 0x0052AB80  WarheadTypeClass::parseVerses  this=INISection@INIClass  sig=csp ====
char *__thiscall WarheadTypeClass::parseVerses(INISection_INIClass *this)
{
  CCINIClass *v2; // eax
  int v3; // ecx
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // edx
  int v9; // ecx
  char *result; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // ecx

  v2 = (CCINIClass *)this->field_C; /*0x52ab84*/
  this->field_0 = (int)&vt_INIClass_INISection; /*0x52ab87*/
  free(v2); /*0x52ab8e*/
  this->field_C = 0; /*0x52ab98*/
  while ( 1 ) /*0x52ab9b*/
  {
    v3 = *(_DWORD *)&this->__pad_10[8]; /*0x52ab9b*/
    if ( !v3 || !*(_DWORD *)(v3 + 4) || !*(_DWORD *)(v3 + 8) ) /*0x52aba7*/
      break; /*0x52aba7*/
    (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x52abb4*/
  }
  __3_YAXPAX_Z((void *)this->field_2C); /*0x52abbc*/
  this->field_2C = 0; /*0x52abc1*/
  this->q00C = 0; /*0x52abc4*/
  *((_DWORD *)this + 13) = 0; /*0x52abc7*/
  *((_BYTE *)this + 56) = 0; /*0x52abca*/
  *((_DWORD *)this + 15) = 0; /*0x52abcd*/
  if ( this->q004 ) /*0x52abd0*/
  {
    do /*0x52abfc*/
    {
      free(**((void ***)this + 16)); /*0x52abe1*/
      v4 = *(_DWORD *)(this->q004 + 4); /*0x52abeb*/
      __3_YAXPAX_Z(*((void **)this + 16)); /*0x52abef*/
      this->q004 = v4; /*0x52abf9*/
    }
    while ( v4 ); /*0x52abfc*/
  }
  __3_YAXPAX_Z((void *)this->field_2C); /*0x52ac03*/
  this->field_2C = 0; /*0x52ac08*/
  this->q00C = 0; /*0x52ac0b*/
  *((_DWORD *)this + 13) = 0; /*0x52ac0e*/
  *((_BYTE *)this + 56) = 0; /*0x52ac11*/
  *((_DWORD *)this + 15) = 0; /*0x52ac14*/
  *(_DWORD *)this->__pad_10 = &vt_GenericList; /*0x52ac1a*/
  while ( 1 ) /*0x52ac21*/
  {
    v5 = *(_DWORD *)&this->__pad_10[8]; /*0x52ac21*/
    if ( !v5 ) /*0x52ac26*/
      break; /*0x52ac26*/
    if ( !*(_DWORD *)(v5 + 4) ) /*0x52ac28*/
      break; /*0x52ac28*/
    v6 = *(_DWORD *)(v5 + 8); /*0x52ac2d*/
    if ( !v6 ) /*0x52ac32*/
      break; /*0x52ac32*/
    v7 = *(_DWORD *)(v5 + 4); /*0x52ac38*/
    if ( v7 ) /*0x52ac3d*/
    {
      *(_DWORD *)(v6 + 4) = v7; /*0x52ac43*/
      *(_DWORD *)(*(_DWORD *)(v5 + 4) + 8) = *(_DWORD *)(v5 + 8); /*0x52ac4c*/
      *(_DWORD *)(v5 + 8) = 0; /*0x52ac4f*/
      *(_DWORD *)(v5 + 4) = 0; /*0x52ac52*/
    }
  }
  *(_DWORD *)&this->__pad_10[16] = &vt_GenericNode; /*0x52ac5c*/
  if ( this != (INISection_INIClass *)-32 ) /*0x52ac62*/
  {
    v8 = *(_DWORD *)&this->__pad_10[20]; /*0x52ac64*/
    if ( v8 ) /*0x52ac69*/
    {
      v9 = *(_DWORD *)&this->__pad_10[24]; /*0x52ac6b*/
      if ( v9 ) /*0x52ac70*/
      {
        *(_DWORD *)(v9 + 4) = v8; /*0x52ac72*/
        *(_DWORD *)(*(_DWORD *)&this->__pad_10[20] + 8) = *(_DWORD *)&this->__pad_10[24]; /*0x52ac7b*/
        *(_DWORD *)&this->__pad_10[24] = 0; /*0x52ac7e*/
        *(_DWORD *)&this->__pad_10[20] = 0; /*0x52ac81*/
      }
    }
  }
  result = &this->__pad_10[4]; /*0x52ac84*/
  *(_DWORD *)&this->__pad_10[4] = &vt_GenericNode; /*0x52ac89*/
  if ( this != (INISection_INIClass *)-20 ) /*0x52ac8f*/
  {
    v11 = *(_DWORD *)&this->__pad_10[8]; /*0x52ac91*/
    if ( v11 ) /*0x52ac96*/
    {
      v12 = *(_DWORD *)&this->__pad_10[12]; /*0x52ac98*/
      if ( v12 ) /*0x52ac9d*/
      {
        *(_DWORD *)(v12 + 4) = v11; /*0x52ac9f*/
        *(_DWORD *)(*(_DWORD *)&this->__pad_10[8] + 8) = *(_DWORD *)&this->__pad_10[12]; /*0x52aca8*/
        *(_DWORD *)&this->__pad_10[12] = 0; /*0x52acab*/
        *(_DWORD *)&this->__pad_10[8] = 0; /*0x52acae*/
      }
    }
  }
  this->field_0 = (int)&vt_GenericNode; /*0x52acb3*/
  if ( this ) /*0x52acb9*/
  {
    v13 = *(_DWORD *)this->__pad_4; /*0x52acbb*/
    if ( v13 ) /*0x52acc0*/
    {
      result = *(char **)&this->__pad_4[4]; /*0x52acc2*/
      if ( result ) /*0x52acc7*/
      {
        *((_DWORD *)result + 1) = v13; /*0x52acc9*/
        result = *(char **)this->__pad_4; /*0x52accc*/
        *((_DWORD *)result + 2) = *(_DWORD *)&this->__pad_4[4]; /*0x52acd2*/
        *(_DWORD *)&this->__pad_4[4] = 0; /*0x52acd5*/
        *(_DWORD *)this->__pad_4 = 0; /*0x52acd8*/
      }
    }
  }
  return result; /*0x52acdb*/
}


// ==== 0x0052ACE0  GenericList::Constructor  this=GenericList  sig=csp ====
_DWORD *__thiscall GenericList_Constructor(_DWORD *this)
{
  _DWORD *result; // eax
  _DWORD *v2; // edx
  int v3; // ebx
  int v4; // edi
  int v5; // edi
  int v6; // edi

  result = this; /*0x52ace0*/
  v2 = this + 4; /*0x52ace9*/
  this->q008 = 0; /*0x52acef*/
  this->q00C = 0; /*0x52acf2*/
  this->q004 = &vt_GenericNode; /*0x52acf5*/
  this->q005 = 0; /*0x52acfb*/
  this->q006 = 0; /*0x52acfe*/
  this->q004 = &vt_GenericNode; /*0x52ad01*/
  *this = &vt_GenericList; /*0x52ad07*/
  if ( this != (_DWORD *)-16 ) /*0x52ad0d*/
  {
    v3 = this->q005; /*0x52ad0f*/
    if ( v3 ) /*0x52ad14*/
    {
      v4 = this->q006; /*0x52ad16*/
      if ( v4 ) /*0x52ad1b*/
      {
        *(_DWORD *)(v4 + 4) = v3; /*0x52ad1d*/
        *(_DWORD *)(this->q005 + 8) = this->q006; /*0x52ad26*/
        this->q006 = 0; /*0x52ad29*/
        this->q005 = 0; /*0x52ad2c*/
      }
    }
  }
  v5 = this->q008; /*0x52ad2f*/
  this->q006 = this + 1; /*0x52ad32*/
  this->q005 = v5; /*0x52ad35*/
  v6 = this->q008; /*0x52ad38*/
  if ( v6 ) /*0x52ad3d*/
    *(_DWORD *)(v6 + 8) = v2; /*0x52ad3f*/
  this->q008 = v2; /*0x52ad42*/
  return result; /*0x52ad45*/
}


// ==== 0x0052AD50  WarheadTypeClass::parseModifiers  this=INIEntry@INIClass  sig=csp ====
void *__thiscall WarheadTypeClass::parseModifiers(INIEntry_INIClass *this, char a2)
{
  CCINIClass *v3; // eax
  int v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  void *v9; // [esp-8h] [ebp-10h]

  v3 = (CCINIClass *)this->field_C; /*0x52ad54*/
  *(_DWORD *)this->__pad_0 = &vt_INIClass_INIEntry; /*0x52ad57*/
  free(v3); /*0x52ad5e*/
  v9 = (void *)this->field_10; /*0x52ad68*/
  this->field_C = 0; /*0x52ad69*/
  free(v9); /*0x52ad6c*/
  v4 = *(_DWORD *)this->__pad_14; /*0x52ad71*/
  this->field_10 = 0; /*0x52ad79*/
  if ( v4 ) /*0x52ad7c*/
  {
    do /*0x52ada0*/
    {
      free(**(void ***)this->__pad_14); /*0x52ad85*/
      v5 = *(_DWORD *)(*(_DWORD *)this->__pad_14 + 4); /*0x52ad8f*/
      __3_YAXPAX_Z(*(void **)this->__pad_14); /*0x52ad93*/
      *(_DWORD *)this->__pad_14 = v5; /*0x52ad9d*/
    }
    while ( v5 ); /*0x52ada0*/
  }
  free((void *)this->field_18); /*0x52ada7*/
  this->field_18 = 0; /*0x52adb1*/
  *(_DWORD *)this->__pad_0 = &vt_GenericNode; /*0x52adb4*/
  if ( this ) /*0x52adba*/
  {
    v6 = *(_DWORD *)&this->__pad_0[4]; /*0x52adbc*/
    if ( v6 ) /*0x52adc1*/
    {
      v7 = *(_DWORD *)&this->__pad_0[8]; /*0x52adc3*/
      if ( v7 ) /*0x52adc8*/
      {
        *(_DWORD *)(v7 + 4) = v6; /*0x52adca*/
        *(_DWORD *)(*(_DWORD *)&this->__pad_0[4] + 8) = *(_DWORD *)&this->__pad_0[8]; /*0x52add3*/
        *(_DWORD *)&this->__pad_0[8] = 0; /*0x52add6*/
        *(_DWORD *)&this->__pad_0[4] = 0; /*0x52add9*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x52ade1*/
    __3_YAXPAX_Z(this); /*0x52ade4*/
  return this; /*0x52adee*/
}


// ==== 0x0052AE00  WarheadTypeClass::parseAnimations  this=WarheadTypeClass  sig=csp ====
WarheadTypeClass *__thiscall WarheadTypeClass::parseAnimations(char *Block, char a2)
{
  WarheadTypeClass::parseVerses(Block); /*0x52ae03*/
  if ( (a2 & 1) != 0 ) /*0x52ae0d*/
    __3_YAXPAX_Z(Block); /*0x52ae10*/
  return (WarheadTypeClass *)Block; /*0x52ae1a*/
}


// ==== 0x0052AE20  GenericNode::Constructor_GenericNode  this=GenericNode  sig=csp ====
GenericNode *__thiscall Delegate::Constructor_GenericNode(GenericNode **Block, char a2)
{
  GenericNode *v3; // ecx
  GenericNode *v4; // eax

  *Block = (GenericNode *)&vt_GenericNode; /*0x52ae27*/
  if ( Block ) /*0x52ae2d*/
  {
    v3 = *(Block + 1); /*0x52ae2f*/
    if ( v3 ) /*0x52ae34*/
    {
      v4 = *(Block + 2); /*0x52ae36*/
      if ( v4 ) /*0x52ae3b*/
      {
        v4->Previous = v3; /*0x52ae3d*/
        *(_DWORD *)(*(Block + 1))[1].__pad_0 = *(Block + 2); /*0x52ae46*/
        *(Block + 2) = 0; /*0x52ae49*/
        *(Block + 1) = 0; /*0x52ae4c*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x52ae54*/
    __3_YAXPAX_Z(Block); /*0x52ae57*/
  return (GenericNode *)Block; /*0x52ae61*/
}


// ==== 0x0052AE70  CacheStraw::ClearVectorAndStraw  this=CacheStraw  sig=csp ====
int *__thiscall Delegate::ClearVectorAndStraw(CacheStraw *this, char a2)
{
  Vector::Clear((int)&this->__pad_0[12]); /*0x52ae76*/
  Straw::Dtor((int *)this->__pad_0); /*0x52ae7d*/
  if ( (a2 & 1) != 0 ) /*0x52ae87*/
    __3_YAXPAX_Z(this); /*0x52ae8a*/
  return (int *)this->__pad_0; /*0x52ae94*/
}


// ==== 0x0052AEA0  Base64Straw::DestroyStraw  this=Base64Straw  sig=csp ====
int *__thiscall Delegate::DestroyStraw(Base64Straw *this, char a2)
{
  Straw::Dtor((int *)this); /*0x52aea3*/
  if ( (a2 & 1) != 0 ) /*0x52aead*/
    __3_YAXPAX_Z(this); /*0x52aeb0*/
  return (int *)this; /*0x52aeba*/
}


// ==== 0x0052AEC0  KeyValuePair::Init  this=KeyValuePair  sig=csp ====
_DWORD *__thiscall KeyValuePair::Init(_DWORD *this, INIClass *aP1)
{
  *this = aP1; /*0x52aec6*/
  this->q004 = 0; /*0x52aeca*/
  this->q002 = 0; /*0x52aecd*/
  return this; /*0x52aed0*/
}


// ==== 0x0052AEE0  Base64Pipe::DestroyPipe  this=Base64Pipe  sig=csp ====
int *__thiscall Delegate::DestroyPipe(Base64Pipe *this, char a2)
{
  Pipe::Dtor((int *)this->__pad_0); /*0x52aee3*/
  if ( (a2 & 1) != 0 ) /*0x52aeed*/
    __3_YAXPAX_Z(this); /*0x52aef0*/
  return (int *)this->__pad_0; /*0x52aefa*/
}


// ==== 0x0052AF00  INIClass::findSection  this=INIEntry@INIClass  sig=csp ====
_DWORD *__thiscall INIClass::findSection(
        INIEntry_INIClass *this,
        CCINIClass *aP1,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  *(_DWORD *)&this->__pad_0[4] = 0; /*0x52af08*/
  *(_DWORD *)&this->__pad_0[8] = 0; /*0x52af0b*/
  this->field_10 = a3; /*0x52af12*/
  this->field_C = (int)aP1; /*0x52af19*/
  this->field_18 = a5; /*0x52af20*/
  *(_DWORD *)this->__pad_14 = a4; /*0x52af27*/
  this->q008 = a8; /*0x52af2e*/
  *((_DWORD *)this + 7) = a7; /*0x52af31*/
  *((_DWORD *)this + 9) = a6; /*0x52af38*/
  *(_DWORD *)this->__pad_0 = &vt_INIClass_INIEntry; /*0x52af3b*/
  return this->__pad_0; /*0x52af41*/
}


// ==== 0x0052AF50  INIClass::sectionExists  this=GenericList  sig=csp ====
_DWORD *__thiscall sub_52AF50(_DWORD *this)
{
  _DWORD *result; // eax
  _DWORD *v2; // edx
  int v3; // ebx
  int v4; // edi
  int v5; // edi
  int v6; // edi

  result = this; /*0x52af50*/
  v2 = this + 4; /*0x52af59*/
  this->q008 = 0; /*0x52af5f*/
  this->q00C = 0; /*0x52af62*/
  this->q004 = &vt_GenericNode; /*0x52af65*/
  this->q005 = 0; /*0x52af6b*/
  this->q006 = 0; /*0x52af6e*/
  this->q004 = &vt_GenericNode; /*0x52af71*/
  *this = &vt_GenericList; /*0x52af77*/
  if ( this != (_DWORD *)-16 ) /*0x52af7d*/
  {
    v3 = this->q005; /*0x52af7f*/
    if ( v3 ) /*0x52af84*/
    {
      v4 = this->q006; /*0x52af86*/
      if ( v4 ) /*0x52af8b*/
      {
        *(_DWORD *)(v4 + 4) = v3; /*0x52af8d*/
        *(_DWORD *)(this->q005 + 8) = this->q006; /*0x52af96*/
        this->q006 = 0; /*0x52af99*/
        this->q005 = 0; /*0x52af9c*/
      }
    }
  }
  v5 = this->q008; /*0x52af9f*/
  this->q006 = this + 1; /*0x52afa2*/
  this->q005 = v5; /*0x52afa5*/
  v6 = this->q008; /*0x52afa8*/
  if ( v6 ) /*0x52afad*/
    *(_DWORD *)(v6 + 8) = v2; /*0x52afaf*/
  this->q008 = v2; /*0x52afb2*/
  *this = &List<INIClass::INIEntry *>::`vftable'; /*0x52afb7*/
  return result; /*0x52afb5*/
}


// ==== 0x0052AFC0  WarheadTypeClass::ReadParticleSystems  this=GenericList  sig=csp ====
GenericList *__thiscall WarheadTypeClass::ReadParticleSystems(_DWORD *Block, char a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx

  *Block = &vt_GenericList; /*0x52afc6*/
  while ( 1 ) /*0x52afcc*/
  {
    v3 = *(Block + 2); /*0x52afcc*/
    if ( !v3 ) /*0x52afd1*/
      break; /*0x52afd1*/
    if ( !*(_DWORD *)(v3 + 4) ) /*0x52afd3*/
      break; /*0x52afd3*/
    v4 = *(_DWORD *)(v3 + 8); /*0x52afd8*/
    if ( !v4 ) /*0x52afdd*/
      break; /*0x52afdd*/
    v5 = *(_DWORD *)(v3 + 4); /*0x52afe3*/
    if ( v5 ) /*0x52afe8*/
    {
      *(_DWORD *)(v4 + 4) = v5; /*0x52afee*/
      *(_DWORD *)(*(_DWORD *)(v3 + 4) + 8) = *(_DWORD *)(v3 + 8); /*0x52aff7*/
      *(_DWORD *)(v3 + 8) = 0; /*0x52affa*/
      *(_DWORD *)(v3 + 4) = 0; /*0x52affd*/
    }
  }
  *(Block + 4) = &vt_GenericNode; /*0x52b007*/
  if ( Block != (_DWORD *)-16 ) /*0x52b00d*/
  {
    v6 = *(Block + 5); /*0x52b00f*/
    if ( v6 ) /*0x52b014*/
    {
      v7 = *(Block + 6); /*0x52b016*/
      if ( v7 ) /*0x52b01b*/
      {
        *(_DWORD *)(v7 + 4) = v6; /*0x52b01d*/
        *(_DWORD *)(*(Block + 5) + 8) = *(Block + 6); /*0x52b026*/
        *(Block + 6) = 0; /*0x52b029*/
        *(Block + 5) = 0; /*0x52b02c*/
      }
    }
  }
  *(Block + 1) = &vt_GenericNode; /*0x52b034*/
  if ( Block != (_DWORD *)-4 ) /*0x52b03a*/
  {
    v8 = *(Block + 2); /*0x52b03c*/
    if ( v8 ) /*0x52b041*/
    {
      v9 = *(Block + 3); /*0x52b043*/
      if ( v9 ) /*0x52b048*/
      {
        *(_DWORD *)(v9 + 4) = v8; /*0x52b04a*/
        *(_DWORD *)(*(Block + 2) + 8) = *(Block + 3); /*0x52b053*/
        *(Block + 3) = 0; /*0x52b056*/
        *(Block + 2) = 0; /*0x52b059*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x52b061*/
    __3_YAXPAX_Z(Block); /*0x52b064*/
  return (GenericList *)Block; /*0x52b06e*/
}


// ==== 0x0052B080  INIClass::getValue  this=INIClass  sig=csp ====
_DWORD *__thiscall sub_52B080(_DWORD *this)
{
  *this = 0; /*0x52b084*/
  this->headNode = 0; /*0x52b086*/
  this->q008 = 0; /*0x52b089*/
  this->unknown30 = 0; /*0x52b08c*/
  this->sectionHead = 0; /*0x52b08f*/
  return this; /*0x52b092*/
}


// ==== 0x0052B0A0  INIClass::setValue  this=INIClass  sig=csp ====
char __thiscall INIClass::setValue(int this, _DWORD *a1, CCINIClass *aP2)
{
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int i; // ecx
  int v8; // eax
  _DWORD *v9; // edx
  int v10; // eax
  int v11; // eax

  v4 = *(_DWORD *)(this + 8); /*0x52b0aa*/
  if ( *(_DWORD *)(this + 4) + 1 <= v4 ) /*0x52b0b0*/
  {
LABEL_9:
    *(_DWORD *)(*(_DWORD *)this + 8 * *(_DWORD *)(this + 4)) = *a1; /*0x52b12b*/
    *(_DWORD *)(*(_DWORD *)this + 8 * *(_DWORD *)(this + 4) + 4) = *(_DWORD *)aP2->__pad_0; /*0x52b145*/
    v11 = *(_DWORD *)(this + 4) + 1; /*0x52b14c*/
    *(_BYTE *)(this + 12) = 0; /*0x52b14d*/
    *(_DWORD *)(this + 4) = v11; /*0x52b151*/
    return 1; /*0x52b15a*/
  }
  if ( v4 ) /*0x52b0b4*/
  {
    v5 = *(_DWORD *)(this + 8); /*0x52b0bd*/
    if ( v4 < 0 ) /*0x52b0c1*/
      return 0; /*0x52b0c1*/
  }
  else
  {
    v5 = 10; /*0x52b0b6*/
  }
  v6 = __2_YAPAXI_Z(8 * (v4 + v5)); /*0x52b0d7*/
  if ( v6 ) /*0x52b0de*/
  {
    for ( i = 0; i < *(_DWORD *)(this + 4); *(_DWORD *)(v8 + v6 + 4) = v9[1] ) /*0x52b0ec*/
    {
      v8 = 8 * i; /*0x52b0f0*/
      v9 = (_DWORD *)(*(_DWORD *)this + 8 * i++); /*0x52b0f9*/
      *(_DWORD *)(v8 + v6) = *v9; /*0x52b0fe*/
    }
    __3_YAXPAX_Z(*(void **)this); /*0x52b112*/
    v10 = *(_DWORD *)(this + 8); /*0x52b117*/
    *(_DWORD *)this = v6; /*0x52b11f*/
    *(_DWORD *)(this + 8) = v5 + v10; /*0x52b121*/
    *(_DWORD *)(this + 16) = 0; /*0x52b124*/
    goto LABEL_9; /*0x52b124*/
  }
  return 0; /*0x52b134*/
}


// ==== 0x0052B170  SortedArray::Find  this=SortedArray  sig=csp ====
char __thiscall SortedArray::Find(int this, CCINIClass *aP1)
{
  size_t v3; // ecx
  _DWORD *v4; // eax
  int v6; // ecx
  int v7; // ebp
  ObjectClass *v8; // edi
  int v9; // esi
  char *v10; // edx

  v3 = *(_DWORD *)(this + 4); /*0x52b175*/
  if ( !v3 ) /*0x52b17b*/
    return 0; /*0x52b17b*/
  v4 = *(_DWORD **)(this + 16); /*0x52b17d*/
  if ( v4 && *v4 == *(_DWORD *)aP1->__pad_0 ) /*0x52b18e*/
    return 1; /*0x52b196*/
  if ( !*(_BYTE *)(this + 12) ) /*0x52b199*/
  {
    qsort(*(void **)this, v3, 8u, CompareFunc3Int); /*0x52b1ab*/
    *(_DWORD *)(this + 16) = 0; /*0x52b1b3*/
    *(_BYTE *)(this + 12) = 1; /*0x52b1ba*/
  }
  v6 = *(_DWORD *)(this + 4); /*0x52b1be*/
  v7 = *(_DWORD *)aP1->__pad_0; /*0x52b1c1*/
  v8 = *(ObjectClass **)this; /*0x52b1c3*/
  if ( v6 <= 0 ) /*0x52b1c7*/
    return 0; /*0x52b1c7*/
  while ( 1 ) /*0x52b1d0*/
  {
    v9 = *(_DWORD *)&v8->__pad_0[8 * (v6 / 2)]; /*0x52b1d0*/
    v10 = &v8->__pad_0[8 * (v6 / 2)]; /*0x52b1d3*/
    if ( v9 <= v7 ) /*0x52b1d8*/
      break; /*0x52b1d8*/
    v6 /= 2; /*0x52b1da*/
LABEL_12:
    if ( v6 <= 0 ) /*0x52b1ec*/
      return 0; /*0x52b1ec*/
  }
  if ( v9 != v7 ) /*0x52b1de*/
  {
    v8 = (ObjectClass *)(v10 + 8); /*0x52b1e0*/
    v6 += -1 - v6 / 2; /*0x52b1e8*/
    goto LABEL_12; /*0x52b1e8*/
  }
  if ( !v10 ) /*0x52b1f9*/
    return 0; /*0x52b1f4*/
  *(_DWORD *)(this + 16) = v10; /*0x52b1fd*/
  return 1; /*0x52b190*/
}


// ==== 0x0052B210  SortedArray::BinarySearch2  this=AbstractClass  sig=csp ====
void *__thiscall SortedArray::BinarySearch2(int this, Color *aP1)
{
  size_t v3; // ecx
  _DWORD *v4; // eax
  int v5; // ecx
  int Color_field_00; // ebp
  ObjectClass *v7; // edi
  int v8; // esi
  char *v9; // edx

  v3 = *(_DWORD *)(this + 4); /*0x52b215*/
  if ( !v3 ) /*0x52b21b*/
    return &unk_B78830; /*0x52b21b*/
  v4 = *(_DWORD **)(this + 16); /*0x52b21d*/
  if ( v4 && *v4 == aP1->Color_field_00 ) /*0x52b22e*/
    return (void *)(*(_DWORD *)(this + 16) + 4); /*0x52b29e*/
  if ( !*(_BYTE *)(this + 12) ) /*0x52b230*/
  {
    qsort(*(void **)this, v3, 8u, CompareFunc3Int); /*0x52b242*/
    *(_DWORD *)(this + 16) = 0; /*0x52b24a*/
    *(_BYTE *)(this + 12) = 1; /*0x52b251*/
  }
  v5 = *(_DWORD *)(this + 4); /*0x52b255*/
  Color_field_00 = aP1->Color_field_00; /*0x52b258*/
  v7 = *(ObjectClass **)this; /*0x52b25a*/
  if ( v5 <= 0 ) /*0x52b25e*/
    return &unk_B78830; /*0x52b25e*/
  while ( 1 ) /*0x52b267*/
  {
    v8 = *(_DWORD *)&v7->__pad_0[8 * (v5 / 2)]; /*0x52b267*/
    v9 = &v7->__pad_0[8 * (v5 / 2)]; /*0x52b26a*/
    if ( v8 <= Color_field_00 ) /*0x52b26f*/
      break; /*0x52b26f*/
    v5 /= 2; /*0x52b271*/
LABEL_11:
    if ( v5 <= 0 ) /*0x52b283*/
      return &unk_B78830; /*0x52b283*/
  }
  if ( v8 != Color_field_00 ) /*0x52b275*/
  {
    v7 = (ObjectClass *)(v9 + 8); /*0x52b277*/
    v5 += -1 - v5 / 2; /*0x52b27f*/
    goto LABEL_11; /*0x52b27f*/
  }
  if ( v9 ) /*0x52b293*/
  {
    *(_DWORD *)(this + 16) = v9; /*0x52b295*/
    return (void *)(*(_DWORD *)(this + 16) + 4); /*0x52b295*/
  }
  return &unk_B78830; /*0x52b285*/
}


// ==== 0x0052B2B0  INIClass::deleteSection  this=INIClass  sig=csp ====
char __thiscall sub_52B2B0(int this, int *a2)
{
  size_t v3; // eax
  int v4; // edi
  _DWORD *v5; // ebp
  int v6; // edx
  char *v7; // ecx
  int v9; // ecx
  int i; // ecx
  int v11; // edi
  int v12; // eax
  _DWORD *v13; // edi
  int v14; // eax
  int v15; // [esp+10h] [ebp-8h]

  v3 = *(_DWORD *)(this + 4); /*0x52b2b9*/
  if ( !v3 ) /*0x52b2be*/
    return 0; /*0x52b2be*/
  if ( !*(_BYTE *)(this + 12) ) /*0x52b2c0*/
  {
    qsort(*(void **)this, v3, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc4Int); /*0x52b2d2*/
    *(_DWORD *)(this + 16) = 0; /*0x52b2da*/
    *(_BYTE *)(this + 12) = 1; /*0x52b2e1*/
  }
  v4 = *(_DWORD *)(this + 4); /*0x52b2e9*/
  v5 = *(_DWORD **)this; /*0x52b2f0*/
  v15 = *a2; /*0x52b2f4*/
  if ( v4 <= 0 ) /*0x52b2f8*/
    return 0; /*0x52b2f8*/
  while ( 1 ) /*0x52b301*/
  {
    v6 = v5[2 * (v4 / 2)]; /*0x52b301*/
    v7 = (char *)&v5[2 * (v4 / 2)]; /*0x52b305*/
    if ( v15 >= v6 ) /*0x52b30d*/
      break; /*0x52b30d*/
    v4 /= 2; /*0x52b30f*/
LABEL_9:
    if ( v4 <= 0 ) /*0x52b325*/
      return 0; /*0x52b325*/
  }
  if ( v6 != v15 ) /*0x52b317*/
  {
    v5 = v7 + 8; /*0x52b319*/
    v4 += -1 - v4 / 2; /*0x52b321*/
    goto LABEL_9; /*0x52b321*/
  }
  if ( !v7 ) /*0x52b337*/
    return 0; /*0x52b337*/
  v9 = (int)&v7[-*(_DWORD *)this] >> 3; /*0x52b33b*/
  if ( v9 == -1 ) /*0x52b341*/
    return 0; /*0x52b330*/
  for ( i = v9 + 1; i < *(_DWORD *)(this + 4); *(_DWORD *)(v12 - 4) = *(_DWORD *)(v12 + 4) ) /*0x52b349*/
  {
    v11 = *(_DWORD *)(*(_DWORD *)this + 8 * i); /*0x52b34d*/
    v12 = *(_DWORD *)this + 8 * i++; /*0x52b350*/
    *(_DWORD *)(v12 - 8) = v11; /*0x52b354*/
  }
  v13 = *(_DWORD **)this; /*0x52b367*/
  v14 = *(_DWORD *)(this + 4) - 1; /*0x52b369*/
  *(_DWORD *)(this + 4) = v14; /*0x52b36c*/
  v13[2 * v14] = 0; /*0x52b36f*/
  v13[2 * v14 + 1] = 0; /*0x52b372*/
  *(_DWORD *)(this + 16) = 0; /*0x52b376*/
  return 1; /*0x52b327*/
}


// ==== 0x0052B390  HashTable::BinarySearch  this=AbstractClass  sig=csp ====
char __thiscall HashTable::BinarySearch(int this, ObjectClass *aP1)
{
  size_t v3; // ecx
  _DWORD *v4; // eax
  int v6; // ecx
  int v7; // ebp
  ObjectClass *v8; // edi
  int v9; // esi
  char *v10; // edx

  v3 = *(_DWORD *)(this + 4); /*0x52b395*/
  if ( !v3 ) /*0x52b39b*/
    return 0; /*0x52b39b*/
  v4 = *(_DWORD **)(this + 16); /*0x52b39d*/
  if ( v4 && *v4 == *(_DWORD *)aP1->__pad_0 ) /*0x52b3ae*/
    return 1; /*0x52b3b6*/
  if ( !*(_BYTE *)(this + 12) ) /*0x52b3b9*/
  {
    qsort(*(void **)this, v3, 8u, CompareFunc4Int); /*0x52b3cb*/
    *(_DWORD *)(this + 16) = 0; /*0x52b3d3*/
    *(_BYTE *)(this + 12) = 1; /*0x52b3da*/
  }
  v6 = *(_DWORD *)(this + 4); /*0x52b3de*/
  v7 = *(_DWORD *)aP1->__pad_0; /*0x52b3e1*/
  v8 = *(ObjectClass **)this; /*0x52b3e3*/
  if ( v6 <= 0 ) /*0x52b3e7*/
    return 0; /*0x52b3e7*/
  while ( 1 ) /*0x52b3f0*/
  {
    v9 = *(_DWORD *)&v8->__pad_0[8 * (v6 / 2)]; /*0x52b3f0*/
    v10 = &v8->__pad_0[8 * (v6 / 2)]; /*0x52b3f3*/
    if ( v9 <= v7 ) /*0x52b3f8*/
      break; /*0x52b3f8*/
    v6 /= 2; /*0x52b3fa*/
LABEL_12:
    if ( v6 <= 0 ) /*0x52b40c*/
      return 0; /*0x52b40c*/
  }
  if ( v9 != v7 ) /*0x52b3fe*/
  {
    v8 = (ObjectClass *)(v10 + 8); /*0x52b400*/
    v6 += -1 - v6 / 2; /*0x52b408*/
    goto LABEL_12; /*0x52b408*/
  }
  if ( !v10 ) /*0x52b419*/
    return 0; /*0x52b414*/
  *(_DWORD *)(this + 16) = v10; /*0x52b41d*/
  return 1; /*0x52b3b0*/
}


// ==== 0x0052B430  SortedArray::FindValue  this=AbstractClass  sig=csp ====
void *__thiscall SortedArray::FindValue(int this, INIClass *aP1)
{
  size_t v3; // ecx
  _DWORD *v4; // eax
  int v5; // ecx
  int v6; // ebp
  ObjectClass *v7; // edi
  int v8; // esi
  char *v9; // edx

  v3 = *(_DWORD *)(this + 4); /*0x52b435*/
  if ( !v3 ) /*0x52b43b*/
    return &unk_B7882C; /*0x52b43b*/
  v4 = *(_DWORD **)(this + 16); /*0x52b43d*/
  if ( v4 && *v4 == *(_DWORD *)aP1->__pad_0 ) /*0x52b44e*/
    return (void *)(*(_DWORD *)(this + 16) + 4); /*0x52b4be*/
  if ( !*(_BYTE *)(this + 12) ) /*0x52b450*/
  {
    qsort(*(void **)this, v3, 8u, CompareFunc4Int); /*0x52b462*/
    *(_DWORD *)(this + 16) = 0; /*0x52b46a*/
    *(_BYTE *)(this + 12) = 1; /*0x52b471*/
  }
  v5 = *(_DWORD *)(this + 4); /*0x52b475*/
  v6 = *(_DWORD *)aP1->__pad_0; /*0x52b478*/
  v7 = *(ObjectClass **)this; /*0x52b47a*/
  if ( v5 <= 0 ) /*0x52b47e*/
    return &unk_B7882C; /*0x52b47e*/
  while ( 1 ) /*0x52b487*/
  {
    v8 = *(_DWORD *)&v7->__pad_0[8 * (v5 / 2)]; /*0x52b487*/
    v9 = &v7->__pad_0[8 * (v5 / 2)]; /*0x52b48a*/
    if ( v8 <= v6 ) /*0x52b48f*/
      break; /*0x52b48f*/
    v5 /= 2; /*0x52b491*/
LABEL_11:
    if ( v5 <= 0 ) /*0x52b4a3*/
      return &unk_B7882C; /*0x52b4a3*/
  }
  if ( v8 != v6 ) /*0x52b495*/
  {
    v7 = (ObjectClass *)(v9 + 8); /*0x52b497*/
    v5 += -1 - v5 / 2; /*0x52b49f*/
    goto LABEL_11; /*0x52b49f*/
  }
  if ( v9 ) /*0x52b4b3*/
  {
    *(_DWORD *)(this + 16) = v9; /*0x52b4b5*/
    return (void *)(*(_DWORD *)(this + 16) + 4); /*0x52b4b5*/
  }
  return &unk_B7882C; /*0x52b4a5*/
}


// ==== 0x0052B4D0  INIClass::deleteKey  this=AbstractTypeClass  sig=csp ====
bool __thiscall INIClass::deleteKey(_DWORD *this, ObjectClass *aP1)
{
  _DWORD *v2; // eax

  v2 = (_DWORD *)this->uniqueId; /*0x52b4d0*/
  return v2 && *v2 == *(_DWORD *)aP1->__pad_0; /*0x52b4e3*/
}


// ==== 0x0052B4F0  HashTable::BinarySearchAlt  this=HashTable  sig=csp ====
size_t __thiscall HashTable::BinarySearchAlt(char **this, CCINIClass *aP1)
{
  size_t result; // eax
  ObjectClass *v4; // edi
  ObjectClass *v5; // ebx
  int v6; // ecx
  ObjectClass *v7; // esi

  result = (size_t)this->HashTable_field_0x04; /*0x52b4f3*/
  if ( result ) /*0x52b4f8*/
  {
    if ( !this->HashTable_field_0x0C ) /*0x52b4fe*/
    {
      qsort(*this, result, 8u, CompareFunc3Int); /*0x52b510*/
      this->HashTable_field_0x04 = 0; /*0x52b518*/
      this->HashTable_field_0x0C = 1; /*0x52b51f*/
    }
    v4 = (ObjectClass *)*this; /*0x52b529*/
    v5 = *(ObjectClass **)aP1->__pad_0; /*0x52b52b*/
    v6 = (int)this->HashTable_field_0x04; /*0x52b52d*/
    if ( v6 <= 0 ) /*0x52b532*/
      return 0; /*0x52b55e*/
    while ( 1 ) /*0x52b53b*/
    {
      v7 = *(ObjectClass **)&v4->__pad_0[8 * (v6 / 2)]; /*0x52b53b*/
      if ( (int)v7 <= (int)v5 ) /*0x52b543*/
      {
        if ( v7 == v5 ) /*0x52b549*/
          return (size_t)v4 + 8 * (v6 / 2); /*0x52b563*/
        v4 = (ObjectClass *)((char *)v4 + 8 * (v6 / 2) + 8); /*0x52b54b*/
        v6 += -1 - v6 / 2; /*0x52b553*/
      }
      else
      {
        v6 /= 2; /*0x52b545*/
      }
      if ( v6 <= 0 ) /*0x52b557*/
        return 0; /*0x52b557*/
    }
  }
  return result; /*0x52b4fa*/
}


// ==== 0x0052B570  INIClass::mergeSection  this=INIClass  sig=csp ====
char __thiscall sub_52B570(int this, int a2)
{
  char *v3; // edi
  int i; // ecx
  int v5; // eax
  _DWORD *v6; // edx
  int v7; // eax

  if ( a2 < 0 ) /*0x52b57c*/
    return 0; /*0x52b57c*/
  v3 = (char *)__2_YAPAXI_Z(8 * (a2 + *(_DWORD *)(this + 8))); /*0x52b590*/
  if ( !v3 ) /*0x52b597*/
    return 0; /*0x52b5f0*/
  for ( i = 0; i < *(_DWORD *)(this + 4); *(_DWORD *)&v3[v5 + 4] = v6[1] ) /*0x52b5a5*/
  {
    v5 = 8 * i; /*0x52b5a9*/
    v6 = (_DWORD *)(*(_DWORD *)this + 8 * i++); /*0x52b5b2*/
    *(_DWORD *)&v3[v5] = *v6; /*0x52b5b7*/
  }
  __3_YAXPAX_Z(*(void **)this); /*0x52b5cb*/
  v7 = a2 + *(_DWORD *)(this + 8); /*0x52b5d6*/
  *(_DWORD *)this = v3; /*0x52b5d8*/
  *(_DWORD *)(this + 8) = v7; /*0x52b5da*/
  *(_DWORD *)(this + 16) = 0; /*0x52b5dd*/
  return 1; /*0x52b5e4*/
}


// ==== 0x0052B600  SortedArray::CheckCache  this=AbstractTypeClass  sig=csp ====
bool __thiscall SortedArray_CheckCache(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // eax

  v2 = (_DWORD *)this->uniqueId; /*0x52b600*/
  return v2 && *v2 == *a2; /*0x52b613*/
}


// ==== 0x0052B620  SortedArray::BinarySearch  this=AbstractClass  sig=csp ====
size_t __thiscall SortedArray::BinarySearch(char **this, CCINIClass *aP1)
{
  size_t result; // eax
  ObjectClass *v4; // edi
  ObjectClass *v5; // ebx
  int v6; // ecx
  ObjectClass *v7; // esi

  result = (size_t)this->vtable2; /*0x52b623*/
  if ( result ) /*0x52b628*/
  {
    if ( !this->vtable4 ) /*0x52b62e*/
    {
      qsort(*this, result, 8u, CompareFunc4Int); /*0x52b640*/
      this->vtable2 = 0; /*0x52b648*/
      this->vtable4 = 1; /*0x52b64f*/
    }
    v4 = (ObjectClass *)*this; /*0x52b659*/
    v5 = *(ObjectClass **)aP1->__pad_0; /*0x52b65b*/
    v6 = (int)this->vtable2; /*0x52b65d*/
    if ( v6 <= 0 ) /*0x52b662*/
      return 0; /*0x52b68e*/
    while ( 1 ) /*0x52b66b*/
    {
      v7 = *(ObjectClass **)&v4->__pad_0[8 * (v6 / 2)]; /*0x52b66b*/
      if ( (int)v7 <= (int)v5 ) /*0x52b673*/
      {
        if ( v7 == v5 ) /*0x52b679*/
          return (size_t)v4 + 8 * (v6 / 2); /*0x52b693*/
        v4 = (ObjectClass *)((char *)v4 + 8 * (v6 / 2) + 8); /*0x52b67b*/
        v6 += -1 - v6 / 2; /*0x52b683*/
      }
      else
      {
        v6 /= 2; /*0x52b675*/
      }
      if ( v6 <= 0 ) /*0x52b687*/
        return 0; /*0x52b687*/
    }
  }
  return result; /*0x52b62a*/
}


// ==== 0x0052B6A0  CompareFunc3Int  this=-  sig=ida-proto ====
int __cdecl CompareFunc3Int(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x52b6b0*/
  else
    return *a1 >= *a2 ? 1 : -1;
}


// ==== 0x0052B6D0  UI_Find  this=INIClass  sig=csp ====
int __fastcall sub_52B6D0(int a1, int a2, int *a3)
{
  int v3; // esi
  int v4; // ebx
  int v5; // edi

  v3 = a2; /*0x52b6d5*/
  if ( a2 <= 0 ) /*0x52b6d7*/
    return 0; /*0x52b709*/
  v4 = *a3; /*0x52b6dd*/
  while ( 1 ) /*0x52b6e6*/
  {
    v5 = *(_DWORD *)(a1 + 8 * (v3 / 2)); /*0x52b6e6*/
    if ( v5 <= v4 ) /*0x52b6ee*/
      break; /*0x52b6ee*/
    v3 /= 2; /*0x52b6f0*/
LABEL_7:
    if ( v3 <= 0 ) /*0x52b702*/
      return 0; /*0x52b702*/
  }
  if ( v5 != v4 ) /*0x52b6f4*/
  {
    a1 += 8 * (v3 / 2) + 8; /*0x52b6f6*/
    v3 += -1 - v3 / 2; /*0x52b6fe*/
    goto LABEL_7; /*0x52b6fe*/
  }
  return a1 + 8 * (v3 / 2); /*0x52b704*/
}


// ==== 0x0052B720  CompareFunc4Int  this=-  sig=ida-proto ====
int __cdecl Int_CompareFunc4(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x52b730*/
  else
    return *a1 >= *a2 ? 1 : -1;
}


// ==== 0x0052B750  System_Search  this=-  sig=csp ====
int __fastcall System_Search(ObjectClass *aP0, int edx0, int *a2)
{
  int v3; // esi
  int v4; // ebx
  int v5; // edi

  v3 = edx0; /*0x52b755*/
  if ( edx0 <= 0 ) /*0x52b757*/
    return 0; /*0x52b789*/
  v4 = *a2; /*0x52b75d*/
  while ( 1 ) /*0x52b766*/
  {
    v5 = *(_DWORD *)&aP0->__pad_0[8 * (v3 / 2)]; /*0x52b766*/
    if ( v5 <= v4 ) /*0x52b76e*/
      break; /*0x52b76e*/
    v3 /= 2; /*0x52b770*/
LABEL_7:
    if ( v3 <= 0 ) /*0x52b782*/
      return 0; /*0x52b782*/
  }
  if ( v5 != v4 ) /*0x52b774*/
  {
    aP0 = (ObjectClass *)((char *)aP0 + 8 * (v3 / 2) + 8); /*0x52b776*/
    v3 += -1 - v3 / 2; /*0x52b77e*/
    goto LABEL_7; /*0x52b77e*/
  }
  return (int)&aP0->__pad_0[8 * (v3 / 2)]; /*0x52b784*/
}


// ==== 0x0052B7A0  sub_52B7A0  this=-  sig=ida-proto ====
int sub_52B7A0()
{
  MEMORY[0xA8F2E8] = 0; /*0x52b7a2*/
  MEMORY[0xA8F2EC] = 0; /*0x52b7a7*/
  MEMORY[0xA8F2F0] = 0; /*0x52b7ac*/
  MEMORY[0xA8F2F4] = 0; /*0x52b7b1*/
  return 0; /*0x52b7b6*/
}


// ==== 0x0052B7C0  sub_52B7C0  this=-  sig=ida-proto ====
void sub_52B7C0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x52b7cc*/
  MEMORY[0xA8F418] = Math::Sqrt(v0 + v0); /*0x52b7de*/
}


// ==== 0x0052B7F0  sub_52B7F0  this=-  sig=ida-proto ====
void sub_52B7F0()
{
  MEMORY[0xA8F778] = MEMORY[0xA8F418] / 60.0; /*0x52b7fc*/
}


// ==== 0x0052B810  sub_52B810  this=-  sig=ida-proto ====
void sub_52B810()
{
  MEMORY[0xA8F760] = 1.0 / MEMORY[0xA8F778]; /*0x52b81c*/
}


// ==== 0x0052B830  sub_52B830  this=-  sig=ida-proto ====
void sub_52B830()
{
  MEMORY[0xA8F758] = 0.0174532925199433 * 45.0; /*0x52b83c*/
}


// ==== 0x0052B850  sub_52B850  this=-  sig=ida-proto ====
void sub_52B850()
{
  MEMORY[0xA8F5A0] = 0.0174532925199433 * 60.0; /*0x52b85c*/
}


// ==== 0x0052B870  sub_52B870  this=-  sig=ida-proto ====
void sub_52B870()
{
  MEMORY[0xA8F2E0] = 0.0174532925199433 * 90.0; /*0x52b87c*/
}


// ==== 0x0052B890  sub_52B890  this=-  sig=ida-proto ====
__int64 sub_52B890()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xA8F2E0] - MEMORY[0xA8F5A0]); /*0x52b8a2*/
  result = Math::RoundToInt(v0 * MEMORY[0xA8F418] * 0.5); /*0x52b8b6*/
  MEMORY[0xA8F780] = result; /*0x52b8bb*/
  return result; /*0x52b8c0*/
}


// ==== 0x0052B8D0  sub_52B8D0  this=-  sig=ida-proto ====
void sub_52B8D0()
{
  MEMORY[0xA8F5A8] = Math::ArcTan((double)MEMORY[0xA8F780] * 0.00390625); /*0x52b8e7*/
}


// ==== 0x0052B900  sub_52B900  this=-  sig=ida-proto ====
void sub_52B900()
{
  MEMORY[0xA8F648] = Math::ArcTan((double)(2 * MEMORY[0xA8F780]) / MEMORY[0xA8F418]); /*0x52b922*/
}


// ==== 0x0052B930  sub_52B930  this=-  sig=ida-proto ====
__int64 sub_52B930()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xA8F780]) + 0.5); /*0x52b94b*/
  MEMORY[0xA8F774] = result; /*0x52b950*/
  return result; /*0x52b956*/
}


// ==== 0x0052B960  sub_52B960  this=-  sig=ida-proto ====
int sub_52B960()
{
  MEMORY[0xA8F2F8] = 0; /*0x52b962*/
  MEMORY[0xA8F2FA] = 0; /*0x52b968*/
  return 0; /*0x52b96e*/
}


// ==== 0x0052B970  sub_52B970  this=-  sig=ida-proto ====
int sub_52B970()
{
  MEMORY[0xA8F638] = 0; /*0x52b972*/
  MEMORY[0xA8F63C] = 0; /*0x52b977*/
  MEMORY[0xA8F640] = 0; /*0x52b97c*/
  return 0; /*0x52b981*/
}


// ==== 0x0052B990  sub_52B990  this=-  sig=ida-proto ====
int sub_52B990()
{
  MEMORY[0xA8F770] = 0; /*0x52b995*/
  MEMORY[0xA8F768] = 128; /*0x52b99f*/
  MEMORY[0xA8F76C] = 128; /*0x52b9a4*/
  return 128; /*0x52b9a9*/
}


// ==== 0x0052B9B0  BINK::Background_Setup  this=AbstractClass  sig=csp ====
HWND __thiscall BINK::Background_Setup(HWND hDlg)
{
  HWND result; // eax
  HWND v2; // esi
  int v3; // ecx
  int v4; // eax

  result = GetDlgItem(hDlg, 1818); /*0x52b9b8*/
  v2 = result; /*0x52b9be*/
  if ( result ) /*0x52b9c2*/
  {
    if ( MEMORY[0x8A00A4] > 800 ) /*0x52b9d2*/
      v3 = (MEMORY[0x8A00A4] - 800) / 2; /*0x52b9e2*/
    else
      v3 = 0; /*0x52b9d4*/
    if ( *(&MEMORY[0x8A00A4] + 1) > 600 ) /*0x52b9ee*/
      v4 = (*(&MEMORY[0x8A00A4] + 1) - 600) / 2; /*0x52b9fc*/
    else
      v4 = 0; /*0x52b9f0*/
    SetWindowPos(v2, 0, v3, v4, -1, -1, 0xDu); /*0x52ba09*/
    SendMessageA(v2, 0x4E3u, 1u, 0); /*0x52ba1f*/
    if ( MEMORY[0x8A00A4] == 640 ) /*0x52ba2b*/
      return (HWND)SendMessageA(v2, 0x4E4u, 0, (LPARAM)aRa2tsS); /*0x52ba3a*/
    else
      return (HWND)SendMessageA(v2, 0x4E4u, 0, (LPARAM)aRa2tsL); /*0x52ba4c*/
  }
  return result; /*0x52ba3c*/
}


// ==== 0x0052BA60  ObjectClass::InitGame  this=ObjectClass  sig=csp ====
int InitGame()
{
  int v0; // eax
  int v1; // ebx
  RulesClass *v3; // eax
  _BYTE *TextBufferEntry; // eax
  _DWORD *v5; // eax
  IUnknown *v6; // edx
  AbstractClass *v7; // eax
  int i; // edi
  char *esi20; // esi
  ObjectClass *v9; // eax
  IUnknown *v11; // edx
  AbstractClass *v12; // eax
  int j; // edi
  char *v14; // esi
  ObjectClass *v13; // eax
  IUnknown *v16; // edx
  AbstractClass *eax23; // eax
  int k; // edi
  char *v19; // esi
  ObjectClass *v17; // eax
  int v21; // edi
  char *v22; // esi
  ObjectClass *v20; // eax
  char *ecx26; // ecx
  _DWORD *v25; // eax
  IUnknown *edx30; // edx
  AbstractClass *v27; // eax
  int m; // edi
  ConvertClass *v24; // eax
  _BYTE *v30; // esi
  ObjectClass *v26; // eax
  _DWORD *v32; // eax
  IUnknown *v33; // edx
  AbstractClass *eax35; // eax
  int n; // edi
  ConvertClass *v29; // eax
  _BYTE *v37; // esi
  ObjectClass *v31; // eax
  _DWORD *eax37; // eax
  IUnknown *v40; // edx
  AbstractClass *eax40; // eax
  int ii; // edi
  ConvertClass *v34; // eax
  _BYTE *esi41; // esi
  ObjectClass *v36; // eax
  _DWORD *eax42; // eax
  IUnknown *v47; // edx
  AbstractClass *v48; // eax
  int jj; // edi
  ConvertClass *v39; // eax
  _BYTE *v51; // esi
  ObjectClass *v41; // eax
  _DWORD *eax47; // eax
  IUnknown *v54; // edx
  AbstractClass *v55; // eax
  int kk; // edi
  ConvertClass *v44; // eax
  _BYTE *GameDirectoryCD; // esi
  ObjectClass *v46; // eax
  _DWORD *v60; // eax
  ObjectClass *v49; // eax
  _DWORD *v62; // eax
  char *v63; // ebp
  wchar_t *v64; // eax
  Tactical *v53; // ecx
  int v66; // eax
  void *v67; // ecx
  int mm; // esi
  int nn; // esi
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rax
  int v72; // edx
  char *v73; // ecx
  _DWORD *v74; // eax
  int v75; // edx
  wchar_t *v76; // [esp-10h] [ebp-2F50h]
  wchar_t *StringCSF; // [esp-Ch] [ebp-2F4Ch]
  int v78; // [esp+0h] [ebp-2F40h]
  char v79; // [esp+4h] [ebp-2F3Ch]
  char v80; // [esp+8h] [ebp-2F38h]
  _DWORD v81[2]; // [esp+10h] [ebp-2F30h] BYREF
  _BYTE v82[4]; // [esp+18h] [ebp-2F28h] BYREF
  _BYTE v83[4]; // [esp+1Ch] [ebp-2F24h] BYREF
  _BYTE v84[4]; // [esp+20h] [ebp-2F20h] BYREF
  _BYTE v85[4]; // [esp+24h] [ebp-2F1Ch] BYREF
  _BYTE v86[4]; // [esp+28h] [ebp-2F18h] BYREF
  _BYTE v87[4]; // [esp+2Ch] [ebp-2F14h] BYREF
  int v88; // [esp+30h] [ebp-2F10h] BYREF
  _BYTE v89[4]; // [esp+34h] [ebp-2F0Ch] BYREF
  _DWORD v90[7]; // [esp+38h] [ebp-2F08h] BYREF
  MultiplayerGameMode aP1; // [esp+54h] [ebp-2EECh] BYREF
  _BYTE v92[12]; // [esp+ACh] [ebp-2E94h] BYREF
  int v93; // [esp+B8h] [ebp-2E88h]
  MultiplayerGameMode v94; // [esp+C0h] [ebp-2E80h] BYREF
  _BYTE v95[12]; // [esp+118h] [ebp-2E28h] BYREF
  int v96; // [esp+124h] [ebp-2E1Ch]
  void *v97[16]; // [esp+12Ch] [ebp-2E14h] BYREF
  char v98; // [esp+16Ch] [ebp-2DD4h]
  CCINIClass v99; // [esp+184h] [ebp-2DBCh] BYREF
  void *v100[22]; // [esp+1DCh] [ebp-2D64h] BYREF
  MultiplayerGameMode v101[3]; // [esp+234h] [ebp-2D0Ch] BYREF
  _DWORD v102[27]; // [esp+2A0h] [ebp-2CA0h] BYREF
  _DWORD v103[27]; // [esp+30Ch] [ebp-2C34h] BYREF
  _BYTE a0[768]; // [esp+378h] [ebp-2BC8h] BYREF
  char Buffer[200]; // [esp+678h] [ebp-28C8h] BYREF
  INIClass Source[160]; // [esp+740h] [ebp-2800h] BYREF

  Debug::Log();
  v0 = __2_YAPAXI_Z(0x3740u);
  v1 = 0;
  if ( !v0 )
  {
    *(_DWORD *)&HouseClass_Player.__pad_5568[8060] = 0;
    goto LABEL_3;
  }
  *(_DWORD *)&HouseClass_Player.__pad_5568[8060] = ScenarioClass::Constructor(v0);
  if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[8060] )
  {
LABEL_3:
    Debug::Log();
    return -1;
  }
  v3 = (RulesClass *)__2_YAPAXI_Z(0x18C0u);
  if ( !v3 )
  {
    *(_DWORD *)&stru_87C374.__pad_579C[22224] = 0;
    goto LABEL_3;
  }
  *(_DWORD *)&stru_87C374.__pad_579C[22224] = RulesClass::RulesClass(v3);
  if ( !*(_DWORD *)&stru_87C374.__pad_579C[22224] )
    goto LABEL_3;
  Debug::Log();
  if ( !g_Is16BitMode )
    FadePalette(&stru_87C374.__pad_579C[13168], 0, 0);
  if ( stru_89E138.__pad_220[72] == 1 )
    SetSoundWarning(-2);
  do
    EventQueue::Process(*(_DWORD **)&stru_87C374.__pad_14B0[8012]);
  while ( !HouseClass_Player.__pad_5568[23244] );
  stru_89E138.__pad_14B0[2744] = 0;
  TextBufferEntry = (_BYTE *)GetTextBufferEntry(4);
  TextBuffer::Init(TextBufferEntry);
  if ( !MixFileClass::Bootstrap() )
  {
    Debug::Log();
    Debug::Log_0();
    return -1;
  }
  v5 = (_DWORD *)__2_YAPAXI_Z(4u);
  if ( v5 )
    unk_89C4B8 = BitTextClass::LoadFont(v5);
  else
    unk_89C4B8 = 0;
  Init::StubPlaceholder();
  LoadMouseClassResources();
  InitializeAudioSubsystem(*(void **)&stru_830620.__pad_579C[44212]);
  Timer::PumpMessages(*(HWND **)&stru_87C374.__pad_14B0[8012]);
  LOBYTE(v6) = 0;
  v7 = (AbstractClass *)SearchMIXFile(&g_Str_File_MOUSE_SHA.__pad_6[134], v6);
  memcpy(&stru_87C374.__pad_579C[18544], v7, 0x300u);
  for ( i = 0; i < 256; ++i )
  {
    esi20 = &stru_87C374.__pad_579C[3 * (i % 256) + 18544];
    v9 = (ObjectClass *)Palette::6BitTo16Bit(
                          v89,
                          4 * *esi20,
                          4 * stru_87C374.__pad_579C[3 * (i % 256) + 18545],
                          4 * stru_87C374.__pad_579C[3 * (i % 256) + 18546]);
    *(_WORD *)esi20 = *(_WORD *)v9->__pad_0;
    esi20[2] = v9->__pad_0[2];
  }
  LOBYTE(v11) = 0;
  v12 = (AbstractClass *)SearchMIXFile(&g_Str_File_MOUSE_SHA.__pad_6[118], v11);
  memcpy(&stru_87C374.__pad_579C[15472], v12, 0x300u);
  for ( j = 0; j < 256; ++j )
  {
    v14 = &stru_87C374.__pad_579C[3 * (j % 256) + 15472];
    v13 = (ObjectClass *)Palette::6BitTo16Bit(
                           v90,
                           4 * *v14,
                           4 * stru_87C374.__pad_579C[3 * (j % 256) + 15473],
                           4 * stru_87C374.__pad_579C[3 * (j % 256) + 15474]);
    *(_WORD *)v14 = *(_WORD *)v13->__pad_0;
    v14[2] = v13->__pad_0[2];
  }
  Block::Copy(&stru_87C374.__pad_579C[16240], &stru_87C374.__pad_579C[15472]);
  Block::Copy(&stru_87C374.__pad_579C[17776], &stru_87C374.__pad_579C[15472]);
  stru_87C374.__pad_579C[17010] = stru_87C374.__pad_579C[13170];
  LOBYTE(v16) = 0;
  *(_WORD *)&stru_87C374.__pad_579C[17008] = *(_WORD *)&stru_87C374.__pad_579C[13168];
  eax23 = (AbstractClass *)SearchMIXFile(&g_Str_File_MOUSE_SHA.__pad_6[102], v16);
  memcpy(&stru_87C374.__pad_579C[13936], eax23, 0x300u);
  for ( k = 0; k < 256; ++k )
  {
    v19 = &stru_87C374.__pad_579C[3 * (k % 256) + 13936];
    v17 = (ObjectClass *)Palette::6BitTo16Bit(
                           v87,
                           4 * *v19,
                           4 * stru_87C374.__pad_579C[3 * (k % 256) + 13937],
                           4 * stru_87C374.__pad_579C[3 * (k % 256) + 13938]);
    *(_WORD *)v19 = *(_WORD *)v17->__pad_0;
    v19[2] = v17->__pad_0[2];
  }
  CCFileClass::Construct(Buffer, &g_Str_File_MOUSE_SHA.__pad_6[90]);
  VoxelPaletteClass::LoadFromFile(Buffer);
  v21 = 0;
  v22 = &stru_B1D188.__pad_579C[53845];
  do
  {
    v20 = (ObjectClass *)Palette::6BitTo16Bit(v85, *(v22 - 1), *v22, v22[1]);
    ecx26 = &stru_87C374.__pad_579C[3 * (v21 % 256) + 19312];
    v22 += 3;
    ++v21;
    *(_WORD *)ecx26 = *(_WORD *)v20->__pad_0;
    ecx26[2] = v20->__pad_0[2];
  }
  while ( (int)v22 < (int)&stru_B1D188.__pad_579C[54613] );
  *(float *)&stru_87C374.__pad_579C[22796] = 0.95990276;
  stru_87C374.__pad_579C[22792] = 1;
  Matrix3x4::Identity(&stru_87C374.__pad_579C[22816]);
  Voxel::SetProjectionAngle(0.785375);
  dword_B43184 = 1;
  dword_B43180 = 0;
  Voxel::Projection_Setup();
  v25 = (_DWORD *)__2_YAPAXI_Z(0x188u);
  if ( v25 )
    *(_DWORD *)&stru_87C374.__pad_14B0[7828] = ConvertClass::Construct(
                                                 v25,
                                                 (ConvertClass *)&stru_87C374.__pad_579C[15472],
                                                 (int)&stru_87C374.__pad_579C[15472],
                                                 *(ConvertClass **)&stru_87C374.__pad_579C[22520],
                                                 (ObjectClass *)0x35,
                                                 0);
  else
    *(_DWORD *)&stru_87C374.__pad_14B0[7828] = 0;
  Array::ForEach((AbstractClass *)a0, 3, (IUnknown *)0x100, (int (__thiscall *)(int))Struct::Zero3);
  LOBYTE(edx30) = 0;
  v27 = (AbstractClass *)SearchMIXFile(&g_Str_File_MOUSE_SHA.__pad_6[78], edx30);
  memcpy(a0, v27, sizeof(a0));
  for ( m = 0; m < 256; ++m )
  {
    v24 = (ConvertClass *)(3 * (m % 256));
    v30 = &a0[(_DWORD)v24];
    v26 = (ObjectClass *)Palette::6BitTo16Bit(
                           v82,
                           4 * a0[(_DWORD)v24],
                           4 * a0[(_DWORD)v24 + 1],
                           4 * a0[(_DWORD)v24 + 2]);
    *(_WORD *)v30 = *(_WORD *)v26->__pad_0;
    v30[2] = v26->__pad_0[2];
  }
  v32 = (_DWORD *)__2_YAPAXI_Z(0x188u);
  if ( v32 )
    *(_DWORD *)&stru_87C374.__pad_14B0[7836] = ConvertClass::Construct(
                                                 v32,
                                                 (ConvertClass *)a0,
                                                 (int)&stru_87C374.__pad_579C[15472],
                                                 *(ConvertClass **)&stru_87C374.__pad_579C[22520],
                                                 (ObjectClass *)0x35,
                                                 0);
  else
    *(_DWORD *)&stru_87C374.__pad_14B0[7836] = 0;
  LOBYTE(v33) = 0;
  eax35 = (AbstractClass *)SearchMIXFile(&g_Str_File_MOUSE_SHA.__pad_6[66], v33);
  memcpy(a0, eax35, sizeof(a0));
  for ( n = 0; n < 256; ++n )
  {
    v29 = (ConvertClass *)(3 * (n % 256));
    v37 = &a0[(_DWORD)v29];
    v31 = (ObjectClass *)Palette::6BitTo16Bit(
                           v83,
                           4 * a0[(_DWORD)v29],
                           4 * a0[(_DWORD)v29 + 1],
                           4 * a0[(_DWORD)v29 + 2]);
    *(_WORD *)v37 = *(_WORD *)v31->__pad_0;
    v37[2] = v31->__pad_0[2];
  }
  eax37 = (_DWORD *)__2_YAPAXI_Z(0x188u);
  if ( eax37 )
    *(_DWORD *)&stru_87C374.__pad_14B0[7840] = ConvertClass::Construct(
                                                 eax37,
                                                 (ConvertClass *)a0,
                                                 (int)&stru_87C374.__pad_579C[15472],
                                                 *(ConvertClass **)&stru_87C374.__pad_579C[22520],
                                                 (ObjectClass *)0x35,
                                                 0);
  else
    *(_DWORD *)&stru_87C374.__pad_14B0[7840] = 0;
  LOBYTE(v40) = 0;
  eax40 = (AbstractClass *)SearchMIXFile(&g_Str_File_MOUSE_SHA.__pad_6[134], v40);
  memcpy(a0, eax40, sizeof(a0));
  for ( ii = 0; ii < 256; ++ii )
  {
    v34 = (ConvertClass *)(3 * (ii % 256));
    esi41 = &a0[(_DWORD)v34];
    v36 = (ObjectClass *)Palette::6BitTo16Bit(
                           v84,
                           4 * a0[(_DWORD)v34],
                           4 * a0[(_DWORD)v34 + 1],
                           4 * a0[(_DWORD)v34 + 2]);
    *(_WORD *)esi41 = *(_WORD *)v36->__pad_0;
    esi41[2] = v36->__pad_0[2];
  }
  eax42 = (_DWORD *)__2_YAPAXI_Z(0x188u);
  if ( eax42 )
    *(_DWORD *)&stru_87C374.__pad_14B0[7824] = ConvertClass::Construct(
                                                 eax42,
                                                 (ConvertClass *)a0,
                                                 (int)&stru_87C374.__pad_579C[15472],
                                                 *(ConvertClass **)&stru_87C374.__pad_579C[22520],
                                                 (ObjectClass *)0x35,
                                                 0);
  else
    *(_DWORD *)&stru_87C374.__pad_14B0[7824] = 0;
  LOBYTE(v47) = 0;
  v48 = (AbstractClass *)SearchMIXFile(aCameoPal, v47);
  memcpy(a0, v48, sizeof(a0));
  for ( jj = 0; jj < 256; ++jj )
  {
    v39 = (ConvertClass *)(3 * (jj % 256));
    v51 = &a0[(_DWORD)v39];
    v41 = (ObjectClass *)Palette::6BitTo16Bit(
                           v86,
                           4 * a0[(_DWORD)v39],
                           4 * a0[(_DWORD)v39 + 1],
                           4 * a0[(_DWORD)v39 + 2]);
    *(_WORD *)v51 = *(_WORD *)v41->__pad_0;
    v51[2] = v41->__pad_0[2];
  }
  eax47 = (_DWORD *)__2_YAPAXI_Z(0x188u);
  if ( eax47 )
    *(_DWORD *)&stru_87C374.__pad_14B0[7820] = ConvertClass::Construct(
                                                 eax47,
                                                 (ConvertClass *)a0,
                                                 (int)&stru_87C374.__pad_579C[15472],
                                                 *(ConvertClass **)&stru_87C374.__pad_579C[22520],
                                                 (ObjectClass *)0x35,
                                                 0);
  else
    *(_DWORD *)&stru_87C374.__pad_14B0[7820] = 0;
  LOBYTE(v54) = 0;
  v55 = (AbstractClass *)SearchMIXFile(&g_Str_File_MOUSE_SHA.__pad_6[50], v54);
  memcpy(a0, v55, sizeof(a0));
  for ( kk = 0; kk < 256; ++kk )
  {
    v44 = (ConvertClass *)(3 * (kk % 256));
    GameDirectoryCD = &a0[(_DWORD)v44];
    v46 = (ObjectClass *)Palette::6BitTo16Bit(
                           &v88,
                           4 * a0[(_DWORD)v44],
                           4 * a0[(_DWORD)v44 + 1],
                           4 * a0[(_DWORD)v44 + 2]);
    *(_WORD *)GameDirectoryCD = *(_WORD *)v46->__pad_0;
    GameDirectoryCD[2] = v46->__pad_0[2];
  }
  v60 = (_DWORD *)__2_YAPAXI_Z(0x188u);
  if ( v60 )
    *(_DWORD *)&stru_87C374.__pad_14B0[7844] = ConvertClass::Construct(
                                                 v60,
                                                 (ConvertClass *)a0,
                                                 (int)&stru_87C374.__pad_579C[15472],
                                                 *(ConvertClass **)&stru_87C374.__pad_579C[22520],
                                                 (ObjectClass *)1,
                                                 0);
  else
    *(_DWORD *)&stru_87C374.__pad_14B0[7844] = 0;
  *(_DWORD *)&stru_87C374.__pad_14B0[7832] = *(_DWORD *)&stru_87C374.__pad_14B0[7824];
  CCFileClass::Construct(v103, &g_Str_File_MOUSE_SHA.__pad_6[38]);
  if ( CCFileClass::Open(v103, 0) )
  {
    *(_DWORD *)&HouseClass_Player.__pad_5568[25820] = CCFileClass::ReadEntireFile(v103);
    CCFileClass::Reset(v103);
    for ( kk = 0; kk < 256; ++kk )
    {
      GameDirectoryCD = (_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[25820] + 2 * (kk % 256) + kk % 256);
      v49 = (ObjectClass *)Palette::6BitTo16Bit(
                             v81,
                             4 * *GameDirectoryCD,
                             4 * GameDirectoryCD[1],
                             4 * GameDirectoryCD[2]);
      *(_WORD *)GameDirectoryCD = *(_WORD *)v49->__pad_0;
      GameDirectoryCD[2] = v49->__pad_0[2];
    }
  }
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[25820] )
  {
    v62 = (_DWORD *)__2_YAPAXI_Z(0x188u);
    if ( v62 )
      *(_DWORD *)&HouseClass_Player.__pad_5568[25828] = ConvertClass::Construct(
                                                          v62,
                                                          *(ConvertClass **)&HouseClass_Player.__pad_5568[25820],
                                                          (int)&stru_87C374.__pad_579C[15472],
                                                          *(ConvertClass **)&stru_87C374.__pad_579C[22520],
                                                          (ObjectClass *)1,
                                                          0);
    else
      *(_DWORD *)&HouseClass_Player.__pad_5568[25828] = 0;
  }
  CCFileClass::Construct(v102, &g_Str_File_MOUSE_SHA.__pad_6[26]);
  if ( CCFileClass::Open(v102, 0) )
  {
    *(_DWORD *)&HouseClass_Player.__pad_5568[25824] = CCFileClass::ReadEntireFile(v102);
    CCFileClass::Reset(v102);
  }
  LoadExpansionMixFiles();
  CCFileClass::Destruct(v102);
  CCFileClass::Destruct(v103);
  CCFileClass::Destruct(Buffer);
  Debug::Log_0();
  Debug::Log();
  *(_DWORD *)&stru_B05488.__pad_579C[4300] = LoadFileSHP(
                                               &g_Str_File_MOUSE_SHA,
                                               (ConvertClass *)&stru_B05488.__pad_579C[4304]);
  if ( *(_DWORD *)&stru_B05488.__pad_579C[4300] )
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 12))(*(_DWORD *)&stru_87C374.__pad_579C[23344]);
    v81[0] = 0;
    v81[1] = 0;
    (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 4))(
      *(_DWORD *)&stru_87C374.__pad_579C[23344],
      v81,
      *(_DWORD *)&stru_B05488.__pad_579C[4300],
      0);
  }
  Mission::SetAndCall((int *)&stru_87C374.__pad_14B0[8132], 0, 0);
  Event::Dispatch();
  Debug::Log();
  if ( !*(_DWORD *)&stru_89E138.__pad_2B8[32] )
  {
    Debug::Log();
    kk = (int)&CD::`vftable';
    v90[5] = &CD::`vftable';
    if ( !(unsigned __int8)CD::`vftable'(-1) )
    {
LABEL_68:
      Debug::Log();
      Debug::Log();
      return 1;
    }
    while ( 1 )
    {
      Source[0].__pad_0[0] = 0;
      if ( *(int *)&HouseClass_Player.__pad_5568[22172] > 0 )
      {
        v63 = &HouseClass_Player.__pad_5568[22068];
        while ( 1 )
        {
          sprintf(
            Buffer,
            (ObjectClass *)&g_Str_Trace______c_.ambientSoundController[3],
            (INIClass *)(*(_DWORD *)v63 + 65));
          strcat(Source[0].__pad_0, Buffer);
          ++v1;
          v63 += 4;
          if ( v1 >= *(int *)&HouseClass_Player.__pad_5568[22172] )
            break;
          strcat(Source[0].__pad_0, Control.__pad_0);
        }
        kk = (int)&CD::`vftable';
        v1 = 0;
      }
      GameDirectoryCD = (_BYTE *)Game::FindGameDirectoryCD(Source);
      if ( GameDirectoryCD == (_BYTE *)1 )
        break;
      if ( GameDirectoryCD == (_BYTE *)2 )
        goto LABEL_79;
      v90[1] = &CD::`vftable';
      if ( !(unsigned __int8)CD::`vftable'(dword_81C1D0) )
        goto LABEL_68;
LABEL_80:
      if ( !GameDirectoryCD )
      {
        v53 = (Tactical *)-1;
        goto LABEL_82;
      }
    }
    v90[3] = &CD::`vftable';
    if ( !(unsigned __int8)CD::`vftable'(dword_81C1D0) )
      goto LABEL_68;
LABEL_79:
    FadePalette(&stru_87C374.__pad_579C[15472], 0, 0);
    v81[0] = &stru_82083C;
    StringCSF = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_Init_CPP, 4276);
    v76 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_Init_CPP, 4276);
    v64 = GetStringCSF(aTxtCdDialog1, 0, g_Str_File_Init_CPP, 4276);
    if ( Dialog::ShowMessageBox((int)v64, v76, (Movie *)StringCSF, 0, 0, v78) == 1 )
      goto LABEL_68;
    goto LABEL_80;
  }
  Debug::Log();
  v53 = (Tactical *)-2;
LABEL_82:
  SetSoundWarning((int)v53);
  Debug::Log();
  if ( !MixFile::LoadAll() )
  {
    Debug::Log_0();
    return -1;
  }
  Debug::Log_0();
  Movie::Play((CCINIClass *)1, 1, (CCINIClass *)1, 0, v78, v79, v80);
  ShowLoadingScreen((int *)0xFFFFFFFF, kk, (int)GameDirectoryCD);
  Debug::Log();
  Credits::Screen();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  GameSettings::Read((unsigned __int16 *)&HouseClass_Player.__pad_5568[22700]);
  Debug::Log();
  AnimSystem::Init();
  ResetAnimSystem(0);
  Debug::Log();
  off_822724 = &g_INI_Key_Grey;
  Debug::Log();
  if ( *(_DWORD *)&stru_87C374.__pad_579C[22548] )
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22548] + 32))(
      *(_DWORD *)&stru_87C374.__pad_579C[22548],
      1);
  v66 = __2_YAPAXI_Z(0xE18u);
  if ( !v66 )
  {
    *(_DWORD *)&stru_87C374.__pad_579C[22548] = 0;
    goto LABEL_89;
  }
  *(_DWORD *)&stru_87C374.__pad_579C[22548] = TacticalMap::Construct(v66);
  if ( !*(_DWORD *)&stru_87C374.__pad_579C[22548] )
  {
LABEL_89:
    Debug::Log();
    return -1;
  }
  *(_DWORD *)&stru_87C374.__pad_579C[22532] = *(_DWORD *)&stru_87C374.__pad_579C[22524];
  Debug::Log();
  CCFileClass::Construct(&aP1, aSoundmdIni);
  if ( !CCFileClass::Open(&aP1, 0) )
  {
    Debug::Log();
LABEL_93:
    *(_DWORD *)aP1.__pad_0 = &vt_CCFileClass;
LABEL_94:
    v93 = 0;
    Vector::Clear((int)v92);
    BufferIOFileClass::Destruct(&aP1);
    return -1;
  }
  INIClass::INIClass(v97);
  v98 = 0;
  v97[0] = &CCINIClass_Vtable;
  if ( !CCINIClass::Load(v97, &aP1, 0, 0) )
  {
    Debug::Log();
    HashTable::DestroyHashTableINIClass(v97);
    goto LABEL_93;
  }
  Audio::LoadSoundINI();
  Audio::InitFromINI((unsigned __int8 ***)v97);
  Debug::Log();
  CCFileClass::Construct(&v94, aEvamdIni);
  if ( !CCFileClass::Open(&v94, 0) )
  {
    Debug::Log();
    *(_DWORD *)v94.__pad_0 = &vt_CCFileClass;
    v96 = 0;
    Vector::Clear((int)v95);
    BufferIOFileClass::Destruct(&v94);
    HashTable::DestroyHashTableINIClass(v97);
    *(_DWORD *)aP1.__pad_0 = &vt_CCFileClass;
    goto LABEL_94;
  }
  INIClass::INIClass(&v99);
  v99.ownsFile = 0;
  *(_DWORD *)v99.__pad_0 = &CCINIClass_Vtable;
  if ( !CCINIClass::Load(&v99, &v94, 0, 0) )
  {
    Debug::Log();
    HashTable::DestroyHashTableINIClass((void **)&v99);
    *(_DWORD *)v94.__pad_0 = &vt_CCFileClass;
    v96 = 0;
    Vector::Clear((int)v95);
    BufferIOFileClass::Destruct(&v94);
LABEL_109:
    HashTable::DestroyHashTableINIClass(v97);
    CCFileClass::Destruct(&aP1);
    return -1;
  }
  LoadINIEVA(v67);
  InitFromINIEVA(&v99);
  Debug::Log();
  CCFileClass::Construct(v101, aThememdIni);
  if ( !CCFileClass::Open(v101, 0) )
  {
    Debug::Log();
LABEL_108:
    CCFileClass::Destruct(v101);
    HashTable::DestroyHashTableINIClass((void **)&v99);
    CCFileClass::Destruct(&v94);
    goto LABEL_109;
  }
  CCINIClass::CCINIClass(v100);
  if ( !CCINIClass::Load(v100, v101, 0, 0) )
    goto LABEL_106;
  ThemeManager::Cleanup((int)&g_BuildingTypeClass_Count);
  ThemeClass::InitializeThemes((int)&g_BuildingTypeClass_Count, (char *)v100);
  Audio::LoadWAVFiles(&g_BuildingTypeClass_Count);
  Debug::Log();
  if ( !InitBulkData() )
  {
LABEL_107:
    HashTable::DestroyHashTableINIClass(v100);
    goto LABEL_108;
  }
  Debug::Log();
  if ( !InitRules() )
  {
LABEL_106:
    Debug::Log();
    goto LABEL_107;
  }
  RulesClass::LoadAnimTypes(*(RulesClass **)&stru_87C374.__pad_579C[22224]);
  for ( mm = 0; mm < *(int *)&stru_89E138.__pad_1600D[27]; ++mm )
    (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(*(_DWORD *)&stru_89E138.__pad_1600D[15] + 4 * mm) + 100))(
      *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_1600D[15] + 4 * mm),
      &stru_87C374.__pad_579C[22128]);
  RulesClass::LoadBuildingTypes(*(RulesClass **)&stru_87C374.__pad_579C[22224]);
  for ( nn = 0; nn < (int)g_TriggerClassCount; ++nn )
    (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)g_TriggerTypeCount + nn) + 100))(
      *((_DWORD *)g_TriggerTypeCount + nn),
      *(_DWORD *)&stru_87C374.__pad_579C[21816]);
  LODWORD(v70) = Audio::Callback();
  if ( v70 < *(_QWORD *)&HouseClass_Player.__pad_5568[25812] )
  {
    do
      LODWORD(v71) = Audio::Callback();
    while ( v71 < *(_QWORD *)&HouseClass_Player.__pad_5568[25812] );
  }
  PlayIntroSequence(0, -1, (int)&g_INI_Key_Grey);
  v72 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5328);
  off_822724 = &g_INI_Key_Grey;
  *(_DWORD *)&HouseClass_Player.__pad_5568[8852] = v72;
  *(_DWORD *)&HouseClass_Player.__pad_5568[17096] = 0;
  *(_DWORD *)&HouseClass_Player.__pad_5568[17100] = 0;
  *(_DWORD *)&HouseClass_Player.__pad_5568[17108] = 0;
  v73 = &HouseClass_Player.__pad_5568[16244];
  do
  {
    *((_WORD *)v73 - 22) = 0;
    *(_DWORD *)v73 = 0;
    v74 = v73 + 4;
    v75 = 4;
    do
    {
      v74[4] = -1;
      *v74 = -1;
      v74[8] = -1;
      v74[12] = -1;
      ++v74;
      --v75;
    }
    while ( v75 );
    v73 += 112;
  }
  while ( (int)v73 < (int)&HouseClass_Player.__pad_5568[17140] );
  *(_DWORD *)&HouseClass_Player.__pad_5568[15956] = 16843009;
  *(_DWORD *)&HouseClass_Player.__pad_5568[15960] = 16843009;
  InitRandomSeed();
  Debug::Log();
  InitCommands();
  Debug::Log();
  CompleteGameInit();
  HashTable::DestroyHashTableINIClass(v100);
  CCFileClass::Destruct(v101);
  HashTable::DestroyHashTableINIClass((void **)&v99);
  CCFileClass::Destruct(&v94);
  HashTable::DestroyHashTableINIClass(v97);
  CCFileClass::Destruct(&aP1);
  return 0;
}


// ==== 0x0052CB50  PlayIntroSequence  this=-  sig=ida-proto ====
char __usercall Init::Intro@<al>(int a1@<ebx>, int a2@<ebp>, int a3@<edi>)
{
  if ( (MEMORY[0xA8E960] & 4) != 0 ) /*0x52cb57*/
    Movie::Play(-1, a2, a3, 1, 1, 1, 0); /*0x52cb69*/
  Screen::Capture(1, 0, a1, a2); /*0x52cb72*/
  return Event::Dispatch();
}


// ==== 0x0052CB80  nullsub_18  this=-  sig=ida-proto ====
void nullsub_18()
{
  ; /*0x52cb80*/
}


// ==== 0x0052CB90  Credits::Screen  this=Credits  sig=ida-proto ====
char Credits::Screen()
{
  int v0; // esi
  char *v1; // ebp
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // edi
  char result; // al
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  _DWORD *v8; // edi
  char v9; // [esp+Fh] [ebp-1B1h]
  int v10; // [esp+10h] [ebp-1B0h]
  _DWORD v11[22]; // [esp+14h] [ebp-1ACh] BYREF
  _BYTE v12[12]; // [esp+6Ch] [ebp-154h] BYREF
  int v13; // [esp+78h] [ebp-148h]
  _WORD FindFileData[160]; // [esp+80h] [ebp-140h] BYREF

  v9 = 0; /*0x52cba5*/
  v0 = ((int (__stdcall *)(char *, _WORD *))FindFirstFileA)(aBattlemdIni, FindFileData); /*0x52cbaf*/
  v10 = v0; /*0x52cbb4*/
  if ( v0 == -1 ) /*0x52cbb8*/
    goto LABEL_15; /*0x52cbb8*/
  do /*0x52ccab*/
  {
    if ( (FindFileData[0] & 0x116) == 0 ) /*0x52cbca*/
    {
      v1 = (char *)&FindFileData[152]; /*0x52cbdc*/
      if ( !strlen((const char *)&FindFileData[152]) ) /*0x52cbe3*/
        v1 = (char *)&FindFileData[22]; /*0x52cbea*/
      CCFileClass::Construct(v11, v1); /*0x52cbf6*/
      v2 = (_DWORD *)__2_YAPAXI_Z(88); /*0x52cbfd*/
      v3 = v2; /*0x52cc02*/
      if ( v2 ) /*0x52cc09*/
      {
        v4 = v2 + 3; /*0x52cc0b*/
        v2[1] = 0; /*0x52cc0e*/
        v2[2] = 0; /*0x52cc13*/
        GenericList::Constructor(v2 + 3); /*0x52cc16*/
        *v4 = &List<INIClass::INISection *>::`vftable'; /*0x52cc1b*/
        v3[10] = 0; /*0x52cc21*/
        v3[11] = 0; /*0x52cc24*/
        v3[12] = 0; /*0x52cc27*/
        *((_BYTE *)v3 + 52) = 0; /*0x52cc2a*/
        v3[14] = 0; /*0x52cc2d*/
        v3[15] = 0; /*0x52cc30*/
        *((_BYTE *)v3 + 64) = 0; /*0x52cc33*/
        *v3 = &CCINIClass_Vtable; /*0x52cc36*/
      }
      else
      {
        v3 = 0; /*0x52cc3e*/
      }
      CCINIClass::Load((char *)v3, (int)v11, 0, 0); /*0x52cc49*/
      if ( !_strcmpi(v1, aBattlemdIni_0) ) /*0x52cc54*/
        v9 = 1; /*0x52cc60*/
      CampaignClass::LoadFromINIList((char *)v3); /*0x52cc67*/
      if ( v3 ) /*0x52cc6e*/
        (*(void (__thiscall **)(_DWORD *, int))*v3)(v3, 1); /*0x52cc76*/
      v11[0] = &CCFileClass::`vftable'; /*0x52cc7c*/
      v13 = 0; /*0x52cc84*/
      Vector::Clear((int)v12); /*0x52cc88*/
      v11[0] = &off_7E1668; /*0x52cc91*/
      BufferIOFileClass::Dtor(v11); /*0x52cc99*/
      v0 = v10; /*0x52cc9e*/
    }
  }
  while ( ((int (__stdcall *)(int, _WORD *))FindNextFileA)(v0, FindFileData) ); /*0x52ccab*/
  ((void (__stdcall *)(int))FindClose)(v0); /*0x52ccba*/
  result = v9; /*0x52ccc0*/
  if ( !v9 ) /*0x52ccc7*/
  {
LABEL_15:
    CCFileClass::Construct(v11, aBattlemdIni_0); /*0x52ccd6*/
    v6 = (_DWORD *)__2_YAPAXI_Z(88); /*0x52ccdd*/
    v7 = v6; /*0x52cce2*/
    if ( v6 ) /*0x52cce9*/
    {
      v8 = v6 + 3; /*0x52cceb*/
      v6[1] = 0; /*0x52ccee*/
      v6[2] = 0; /*0x52ccf3*/
      GenericList::Constructor(v6 + 3); /*0x52ccf6*/
      *v8 = &List<INIClass::INISection *>::`vftable'; /*0x52ccff*/
      v7[10] = 0; /*0x52cd08*/
      v7[11] = 0; /*0x52cd0b*/
      v7[12] = 0; /*0x52cd0e*/
      *((_BYTE *)v7 + 52) = 0; /*0x52cd11*/
      v7[14] = 0; /*0x52cd14*/
      v7[15] = 0; /*0x52cd19*/
      *((_BYTE *)v7 + 64) = 0; /*0x52cd1c*/
      *v7 = &CCINIClass_Vtable; /*0x52cd1f*/
      CCINIClass::Load((char *)v7, (int)v11, 0, 0); /*0x52cd25*/
      CampaignClass::LoadFromINIList((char *)v7); /*0x52cd2c*/
      (*(void (__thiscall **)(_DWORD *, int))*v7)(v7, 1); /*0x52cd37*/
    }
    v11[0] = &CCFileClass::`vftable'; /*0x52cd3d*/
    v13 = 0; /*0x52cd45*/
    Vector::Clear((int)v12); /*0x52cd49*/
    v11[0] = &off_7E1668; /*0x52cd52*/
    return BufferIOFileClass::Dtor(v11); /*0x52cd5a*/
  }
  return result; /*0x52cd5f*/
}


// ==== 0x0052CD70  ObjectClass::InitRules  this=ObjectClass  sig=csp ====
char InitRules()
{
  HANDLE FirstFileA; // ebp
  char *cAlternateFileName; // edi
  INIClass *v2; // eax
  INIClass *v3; // esi
  int v4; // eax
  int v5; // eax
  INIClass *v6; // eax
  INIClass *v7; // esi
  int v8; // eax
  int v10; // eax
  INT_PTR v11; // eax
  int v12; // esi
  MultiplayerGameMode *v13; // eax
  void (__thiscall ***v14)(_DWORD, int); // ecx
  char v15; // [esp+13h] [ebp-309h]
  LPARAM dwInitParam; // [esp+14h] [ebp-308h] BYREF
  MultiplayerGameMode *Src; // [esp+18h] [ebp-304h]
  int v18; // [esp+1Ch] [ebp-300h]
  char v19; // [esp+21h] [ebp-2FBh]
  int v20; // [esp+24h] [ebp-2F8h]
  int v21; // [esp+28h] [ebp-2F4h]
  MultiplayerGameMode aP1[2]; // [esp+2Ch] [ebp-2F0h] BYREF
  char v23; // [esp+6Ch] [ebp-2B0h]
  _BYTE v24[12]; // [esp+84h] [ebp-298h] BYREF
  int v25; // [esp+90h] [ebp-28Ch]
  MultiplayerGameMode v26; // [esp+98h] [ebp-284h] BYREF
  _DWORD v27[3]; // [esp+F0h] [ebp-22Ch] BYREF
  int v28; // [esp+FCh] [ebp-220h]
  MultiplayerGameMode v29; // [esp+104h] [ebp-218h] BYREF
  _DWORD v30[3]; // [esp+15Ch] [ebp-1C0h] BYREF
  int v31; // [esp+168h] [ebp-1B4h]
  MultiplayerGameMode v32; // [esp+170h] [ebp-1ACh] BYREF
  _DWORD v33[5]; // [esp+1C8h] [ebp-154h] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+1DCh] [ebp-140h] BYREF

  RulesClass::InitINIChain(&dwInitParam, 0, 0); /*0x52cd82*/
  dwInitParam = (LPARAM)&vt_DynamicVectorClass_CCINIClass; /*0x52cd8e*/
  v21 = 10; /*0x52cd9c*/
  v20 = 0; /*0x52cda4*/
  v15 = 0; /*0x52cda8*/
  FirstFileA = FindFirstFileA(aRulemdIni, &FindFileData); /*0x52cdb2*/
  if ( FirstFileA == (HANDLE)-1 ) /*0x52cdb7*/
    goto LABEL_27; /*0x52cdb7*/
  do /*0x52cf19*/
  {
    if ( (FindFileData.dwFileAttributes & 0x116) != 0 ) /*0x52cdc8*/
      continue; /*0x52cdc8*/
    cAlternateFileName = FindFileData.cAlternateFileName; /*0x52cdd5*/
    if ( !FindFileData.cAlternateFileName[0] ) /*0x52cdde*/
      cAlternateFileName = FindFileData.cFileName; /*0x52cde0*/
    CCFileClass::Construct(aP1, cAlternateFileName); /*0x52cdec*/
    v2 = (INIClass *)__2_YAPAXI_Z(0x58u); /*0x52cdf3*/
    v3 = v2; /*0x52cdf8*/
    if ( v2 ) /*0x52cdff*/
    {
      INIClass::INIClass(v2); /*0x52ce03*/
      v3[1].__pad_0[0] = 0; /*0x52ce08*/
      *(_DWORD *)v3->__pad_0 = &CCINIClass_Vtable; /*0x52ce0b*/
    }
    else
    {
      v3 = 0; /*0x52ce13*/
    }
    CCINIClass::Load(v3, aP1, 0, 0); /*0x52ce1e*/
    if ( _strcmpi(cAlternateFileName, aRulesmdIni) ) /*0x52ce29*/
    {
      if ( v20 < v18 /*0x52cecb*/
        || (v19 || !v18)
        && v21 > 0
        && (*(unsigned __int8 (__thiscall **)(LPARAM *, int, _DWORD))(dwInitParam + 8))(&dwInitParam, v21 + v18, 0) )
      {
        v5 = v20++; /*0x52ced6*/
        *(_DWORD *)&Src->__pad_0[4 * v5] = v3; /*0x52cee1*/
      }
      goto LABEL_24; /*0x52cee1*/
    }
    v4 = v20; /*0x52ce35*/
    v15 = 1; /*0x52ce3f*/
    if ( v20 < v18 ) /*0x52ce44*/
      goto LABEL_15; /*0x52ce44*/
    if ( (v19 || !v18) /*0x52ce6c*/
      && v21 > 0
      && (*(unsigned __int8 (__thiscall **)(LPARAM *, int, _DWORD))(dwInitParam + 8))(&dwInitParam, v21 + v18, 0) )
    {
      v4 = v20; /*0x52ce73*/
LABEL_15:
      if ( v4 ) /*0x52ce79*/
        memcpy(&Src->MultiplayerGameMode_field_0x04, Src, 4 * v4); /*0x52ce88*/
      *(_DWORD *)Src->__pad_0 = v3; /*0x52ce94*/
      ++v20; /*0x52ce9b*/
    }
LABEL_24:
    *(_DWORD *)aP1[0].__pad_0 = &vt_CCFileClass; /*0x52cee4*/
    v25 = 0; /*0x52cef3*/
    Vector::Clear((int)v24); /*0x52cefa*/
    *(_DWORD *)aP1[0].__pad_0 = &off_7E1668; /*0x52cf03*/
    BufferIOFileClass::Dtor(aP1); /*0x52cf0b*/
  }
  while ( FindNextFileA(FirstFileA, &FindFileData) ); /*0x52cf19*/
  FindClose(FirstFileA); /*0x52cf28*/
  if ( !v15 ) /*0x52cf32*/
  {
LABEL_27:
    CCFileClass::Construct(aP1, aRulesmdIni); /*0x52cf38*/
    v6 = (INIClass *)__2_YAPAXI_Z(0x58u); /*0x52cf48*/
    v7 = v6; /*0x52cf4d*/
    if ( v6 ) /*0x52cf54*/
    {
      INIClass::INIClass(v6); /*0x52cf58*/
      v7[1].__pad_0[0] = 0; /*0x52cf5d*/
      *(_DWORD *)v7->__pad_0 = &CCINIClass_Vtable; /*0x52cf60*/
    }
    else
    {
      v7 = 0; /*0x52cf68*/
    }
    CCINIClass::Load(v7, aP1, 0, 0); /*0x52cf73*/
    v8 = v20; /*0x52cf78*/
    if ( v20 < v18 ) /*0x52cf82*/
    {
LABEL_36:
      if ( v8 ) /*0x52cfaf*/
        memcpy(&Src->MultiplayerGameMode_field_0x04, Src, 4 * v8); /*0x52cfbe*/
      *(_DWORD *)Src->__pad_0 = v7; /*0x52cfca*/
      ++v20; /*0x52cfd1*/
    }
    else if ( (v19 || !v18) /*0x52cfa2*/
           && v21 > 0
           && (*(unsigned __int8 (__thiscall **)(LPARAM *, int, _DWORD))(dwInitParam + 8))(&dwInitParam, v21 + v18, 0) )
    {
      v8 = v20; /*0x52cfa9*/
      goto LABEL_36; /*0x52cfa9*/
    }
    *(_DWORD *)aP1[0].__pad_0 = &vt_CCFileClass; /*0x52cfe1*/
    v25 = 0; /*0x52cfe5*/
    Vector::Clear((int)v24); /*0x52cfec*/
    *(_DWORD *)aP1[0].__pad_0 = &off_7E1668; /*0x52cffa*/
    BufferIOFileClass::Dtor(aP1); /*0x52cffe*/
  }
  if ( v20 <= 0 ) /*0x52d013*/
  {
    dwInitParam = (LPARAM)&vt_VectorClass_CCINIClass; /*0x52d019*/
    VectorClass_ptr_CCINIClass::ddtor((int)&dwInitParam); /*0x52d021*/
    return 0; /*0x52d032*/
  }
  CCFileClass::Construct(&v26, aArtmdIni); /*0x52d03f*/
  if ( !CCINIClass::Load(&MEMORY[0x87F8E4].__pad_5568[9012], &v26, 0, 0) ) /*0x52d053*/
  {
    Debug::Log(); /*0x52d061*/
    *(_DWORD *)v26.__pad_0 = &vt_CCFileClass; /*0x52d070*/
    v28 = 0; /*0x52d077*/
    Vector::Clear((int)v27); /*0x52d07e*/
    *(_DWORD *)v26.__pad_0 = &off_7E1668; /*0x52d08a*/
    BufferIOFileClass::Dtor(&v26); /*0x52d091*/
    dwInitParam = (LPARAM)&vt_VectorClass_CCINIClass; /*0x52d09a*/
    VectorClass_ptr_CCINIClass::ddtor((int)&dwInitParam); /*0x52d0a2*/
    return 0; /*0x52d0b3*/
  }
  if ( v20 == 1 ) /*0x52d0b9*/
  {
    v10 = *(_DWORD *)Src->__pad_0; /*0x52d0bf*/
  }
  else
  {
    v11 = DialogBoxParamA( /*0x52d0df*/
            (HINSTANCE)g_hInstance,
            (LPCSTR)0x93,
            (HWND)g_hWnd,
            (DLGPROC)ReadModConfigINI,
            (LPARAM)&dwInitParam);
    if ( v11 == -1 ) /*0x52d0e8*/
      v11 = 0; /*0x52d0ea*/
    v10 = *(_DWORD *)&Src->__pad_0[4 * v11]; /*0x52d0f0*/
  }
  *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8700] = v10; /*0x52d0fa*/
  RulesClass::ReadColors(*(RulesClass **)&MEMORY[0x87F8E4].__pad_5568[9108]); /*0x52d0ff*/
  RulesClass::ReadColorAdd(*(RulesClass **)&MEMORY[0x87F8E4].__pad_5568[9108]); /*0x52d111*/
  RulesClass::ReadMovies(*(RulesClass **)&MEMORY[0x87F8E4].__pad_5568[9108]); /*0x52d121*/
  Rules::ReadMiscINI(*(RulesClass **)&MEMORY[0x87F8E4].__pad_5568[9108]); /*0x52d132*/
  Dialog::ReadMultiplayerDialogSettings(*(RulesClass **)&MEMORY[0x87F8E4].__pad_5568[9108]); /*0x52d144*/
  MEMORY[0xA8B25C] = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5252); /*0x52d159*/
  MEMORY[0xA8B270] = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5268); /*0x52d165*/
  g_RulesInitConfig = *(ObjectClass **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5276); /*0x52d171*/
  MEMORY[0xA8B268] = *(CellStruct **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5280); /*0x52d17d*/
  MEMORY[0xA8B278] = *(IUnknown **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5284); /*0x52d189*/
  MEMORY[0xA8B274] = *(ObjectClass **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5288); /*0x52d195*/
  LOBYTE(MEMORY[0xA8B260]) = *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5292); /*0x52d1a1*/
  LOBYTE(MEMORY[0xA8B258]) = *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5295); /*0x52d1ad*/
  LOBYTE(MEMORY[0xA8B261]) = *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5297); /*0x52d1b9*/
  MEMORY[0xA8B31E] = *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5298); /*0x52d1c5*/
  LOBYTE(MEMORY[0xA8B31D]) = *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5299); /*0x52d1d1*/
  LOBYTE(MEMORY[0xA8B26C]) = *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5300); /*0x52d1dd*/
  LOBYTE(MEMORY[0xA8B31C]) = *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5301); /*0x52d1e9*/
  LOBYTE(MEMORY[0xA8B262]) = *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5302); /*0x52d1f5*/
  LOBYTE(MEMORY[0xA8B263]) = *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5305); /*0x52d201*/
  LOBYTE(MEMORY[0xA8B264]) = *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5306); /*0x52d20d*/
  LOBYTE(MEMORY[0xA8B31F]) = *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5303); /*0x52d219*/
  LOBYTE(MEMORY[0xA8B320]) = *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5304); /*0x52d22c*/
  CCFileClass::Construct(&v29, aLangruleIni); /*0x52d231*/
  if ( CCFileClass::Open(&v29, 0) == 1 ) /*0x52d245*/
  {
    INIClass::INIClass(aP1); /*0x52d24f*/
    v23 = 0; /*0x52d25b*/
    *(_DWORD *)aP1[0].__pad_0 = &CCINIClass_Vtable; /*0x52d267*/
    if ( CCINIClass::Load(aP1, &v29, 1, 0) > 1 ) /*0x52d277*/
    {
      HashTable::DestroyHashTableINIClass((void **)aP1); /*0x52d281*/
      *(_DWORD *)v29.__pad_0 = &vt_CCFileClass; /*0x52d28d*/
      v31 = 0; /*0x52d294*/
      Vector::Clear((int)v30); /*0x52d29b*/
      *(_DWORD *)v29.__pad_0 = &off_7E1668; /*0x52d2a7*/
      BufferIOFileClass::Dtor(&v29); /*0x52d2ae*/
      *(_DWORD *)v26.__pad_0 = &vt_CCFileClass; /*0x52d2ba*/
      v28 = 0; /*0x52d2c1*/
      Vector::Clear((int)v27); /*0x52d2c8*/
      *(_DWORD *)v26.__pad_0 = &off_7E1668; /*0x52d2d4*/
      BufferIOFileClass::Dtor(&v26); /*0x52d2db*/
      dwInitParam = (LPARAM)&vt_VectorClass_CCINIClass; /*0x52d2e4*/
      if ( Src ) /*0x52d2ee*/
      {
        if ( v19 ) /*0x52d2f4*/
          __3_YAXPAX_Z(Src); /*0x52d2f7*/
      }
      return 0; /*0x52d30b*/
    }
    RulesClass::Addition(*(RulesClass **)&MEMORY[0x87F8E4].__pad_5568[9108]); /*0x52d317*/
    HashTable::DestroyHashTableINIClass((void **)aP1); /*0x52d320*/
  }
  v12 = 0; /*0x52d329*/
  if ( v20 > 0 ) /*0x52d32d*/
  {
    v13 = Src; /*0x52d32f*/
    do /*0x52d355*/
    {
      v14 = *(void (__thiscall ****)(_DWORD, int))&v13->__pad_0[4 * v12]; /*0x52d333*/
      if ( v14 != *(void (__thiscall ****)(_DWORD, int))&MEMORY[0x87F8E4].__pad_5568[8700] && v14 ) /*0x52d342*/
      {
        (**v14)(v14, 1); /*0x52d348*/
        v13 = Src; /*0x52d34a*/
      }
      ++v12; /*0x52d352*/
    }
    while ( v12 < v20 ); /*0x52d355*/
  }
  CCFileClass::Construct(&v32, aAimdIni); /*0x52d363*/
  CCINIClass::Load(&MEMORY[0x87F8E4].__pad_5568[8924], &v32, 1, 0); /*0x52d378*/
  *(_DWORD *)v32.__pad_0 = &vt_CCFileClass; /*0x52d384*/
  v33[3] = 0; /*0x52d38b*/
  Vector::Clear((int)v33); /*0x52d392*/
  *(_DWORD *)v32.__pad_0 = &off_7E1668; /*0x52d39e*/
  BufferIOFileClass::Dtor(&v32); /*0x52d3a5*/
  *(_DWORD *)v29.__pad_0 = &vt_CCFileClass; /*0x52d3b1*/
  v31 = 0; /*0x52d3b8*/
  Vector::Clear((int)v30); /*0x52d3bf*/
  *(_DWORD *)v29.__pad_0 = &off_7E1668; /*0x52d3cb*/
  BufferIOFileClass::Dtor(&v29); /*0x52d3d2*/
  *(_DWORD *)v26.__pad_0 = &vt_CCFileClass; /*0x52d3de*/
  v28 = 0; /*0x52d3e5*/
  Vector::Clear((int)v27); /*0x52d3ec*/
  *(_DWORD *)v26.__pad_0 = &off_7E1668; /*0x52d3f8*/
  BufferIOFileClass::Dtor(&v26); /*0x52d3ff*/
  dwInitParam = (LPARAM)&vt_VectorClass_CCINIClass; /*0x52d408*/
  if ( Src && v19 ) /*0x52d418*/
    __3_YAXPAX_Z(Src); /*0x52d41b*/
  return 1; /*0x52d028*/
}


// ==== 0x0052D430  ReadModConfigINI  this=-  sig=csp ====
INT_PTR __stdcall ReadModConfigINI(HWND hDlg, UINT a2, WPARAM a3, int *a4)
{
  HWND v5; // ebx
  int i; // esi
  HWND DlgItem; // eax
  INT_PTR v8; // eax
  char lParam[128]; // [esp+4h] [ebp-80h] BYREF

  if ( a2 > 0x110 ) /*0x52d440*/
  {
    if ( a2 == 273 ) /*0x52d516*/
    {
      if ( ((unsigned __int16)a3 == 2 || (unsigned __int16)a3 == 1188) && !HIWORD(a3) ) /*0x52d563*/
      {
        DlgItem = GetDlgItem(hDlg, 1187); /*0x52d575*/
        v8 = SendMessageA(DlgItem, 0x188u, 0, 0); /*0x52d585*/
        EndDialog(hDlg, v8); /*0x52d58d*/
        DestroyWindow(hDlg); /*0x52d594*/
      }
    }
    else if ( a2 == 534 ) /*0x52d51d*/
    {
      return (unsigned __int8)Window::ClampToScreen(a4); /*0x52d546*/
    }
    return 0; /*0x52d51d*/
  }
  if ( a2 != 272 ) /*0x52d446*/
  {
    if ( a2 == 83 ) /*0x52d44b*/
    {
      System_Read_776880((HWND *)a4); /*0x52d475*/
      return 0; /*0x52d483*/
    }
    if ( a2 == 123 ) /*0x52d450*/
    {
      System_Read_7768A0((HWND)a3); /*0x52d45d*/
      return 0; /*0x52d46b*/
    }
    return 0; /*0x52d59a*/
  }
  Dialog::RestoreParent(hDlg); /*0x52d492*/
  v5 = GetDlgItem(hDlg, 1187); /*0x52d4a9*/
  for ( i = 0; i < a4[4]; ++i ) /*0x52d4b9*/
  {
    INIClass::GetString( /*0x52d4da*/
      *(unsigned __int8 ****)(a4[1] + 4 * i),
      (unsigned __int8 *)g_INI_Key_General,
      (unsigned __int8 *)MEMORY[0x817854],
      &MEMORY[0x889F64],
      lParam,
      128);
    SendMessageA(v5, 0x180u, 0, (LPARAM)lParam); /*0x52d4ec*/
  }
  SendMessageA(v5, 0x186u, 0, 0); /*0x52d500*/
  return 0; /*0x52d464*/
}


// ==== 0x0052D610  nullsub_148  this=-  sig=ida-proto ====
void nullsub_148()
{
  ; /*0x52d610*/
}


// ==== 0x0052D620  nullsub_149  this=-  sig=ida-proto ====
void nullsub_149()
{
  ; /*0x52d620*/
}


// ==== 0x0052D630  nullsub_150  this=-  sig=ida-proto ====
void nullsub_150()
{
  ; /*0x52d630*/
}


// ==== 0x0052D640  CampaignMenu::DlgProc  this=CampaignMenu  sig=csp ====
int __stdcall Dialog_Init(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax
  _DWORD *WindowLongA; // eax
  HWND v6; // esi
  int v7; // eax
  HWND DlgItem; // eax
  _BYTE v9[56]; // [esp+Ch] [ebp-38h] BYREF
  unsigned __int8 v10; // [esp+54h] [ebp+10h]

  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x52d65c*/
  if ( !result ) /*0x52d663*/
  {
    WindowLongA = (_DWORD *)GetWindowLongA(hWnd, 8); /*0x52d66c*/
    switch ( a2 ) /*0x52d675*/
    {
      case 0xFu: /*0x52d675*/
        DlgItem = GetDlgItem(hWnd, 1818); /*0x52d767*/
        SendMessageA(DlgItem, 0x4F0u, 0, 0); /*0x52d777*/
        break;
      case 0x111u: /*0x52d675*/
        if ( (unsigned __int16)a3 > 0x688u ) /*0x52d6ed*/
        {
          if ( (unsigned __int16)a3 == 1673 ) /*0x52d73a*/
          {
            *WindowLongA = 9; /*0x52d751*/
            return 0; /*0x52d75e*/
          }
          if ( (unsigned __int16)a3 == 1674 ) /*0x52d73d*/
          {
            *WindowLongA = 10; /*0x52d740*/
            return 0; /*0x52d74d*/
          }
        }
        else
        {
          switch ( (unsigned __int16)a3 ) /*0x52d6ef*/
          {
            case 0x688u: /*0x52d6ef*/
              *WindowLongA = 8; /*0x52d724*/
              return 0; /*0x52d731*/
            case 0x579u: /*0x52d6ef*/
              *WindowLongA = 11; /*0x52d713*/
              return 0; /*0x52d720*/
            case 0x686u: /*0x52d6ef*/
              *WindowLongA = 18; /*0x52d702*/
              return 0; /*0x52d70f*/
          }
        }
        break;
      case 0x497u: /*0x52d675*/
        v6 = GetDlgItem(hWnd, 1673); /*0x52d69b*/
        if ( v6 ) /*0x52d69f*/
        {
          v7 = LoadOptions::LoadOptions(v9); /*0x52d6a9*/
          v10 = LoadOptions::Check(v7); /*0x52d6b9*/
          LoadOptions::Cleanup(v9); /*0x52d6bd*/
          EnableWindow(v6, v10); /*0x52d6ce*/
          return 0; /*0x52d6dc*/
        }
        break;
    }
    return 0; /*0x52d77d*/
  }
  return result; /*0x52d6d4*/
}


// ==== 0x0052D790  sub_52D790  this=-  sig=csp ====
int __stdcall sub_52D790(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax
  _DWORD *WindowLongA; // eax
  HWND DlgItem; // eax

  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x52d7a9*/
  if ( result ) /*0x52d7b0*/
    return result; /*0x52d7b0*/
  WindowLongA = (_DWORD *)GetWindowLongA(hWnd, 8); /*0x52d7b9*/
  if ( a2 == 15 ) /*0x52d7c2*/
  {
    DlgItem = GetDlgItem(hWnd, 1818); /*0x52d82a*/
    SendMessageA(DlgItem, 0x4F0u, 0, 0); /*0x52d83a*/
    return 0; /*0x52d83a*/
  }
  if ( a2 != 273 ) /*0x52d7ca*/
    return 0; /*0x52d840*/
  switch ( (__int16)a3 ) /*0x52d7e5*/
  {
    case 1670: /*0x52d7e5*/
      *WindowLongA = 18; /*0x52d817*/
      result = 0; /*0x52d81e*/
      break; /*0x52d821*/
    case 1677: /*0x52d7e5*/
      *WindowLongA = 13; /*0x52d7ed*/
      result = 0; /*0x52d7f4*/
      break; /*0x52d7f7*/
    case 1678: /*0x52d7e5*/
      *WindowLongA = 14; /*0x52d7fb*/
      result = 0; /*0x52d802*/
      break; /*0x52d805*/
    case 1679: /*0x52d7e5*/
      *WindowLongA = 15; /*0x52d809*/
      result = 0; /*0x52d810*/
      break; /*0x52d813*/
    default:
      return 0;
  }
  return result; /*0x52d7ec*/
}


// ==== 0x0052D870  sub_52D870  this=-  sig=csp ====
int __stdcall sub_52D870(HWND hDlg, unsigned int a2, unsigned int a3, unsigned int a4)
{
  HWND DlgItem; // esi
  int result; // eax
  _DWORD *WindowLongA; // eax
  LRESULT v7; // eax
  LRESULT v8; // eax
  bool v9; // [esp+13h] [ebp-1h]
  HWND hDlga; // [esp+18h] [ebp+4h]

  v9 = 0; /*0x52d87f*/
  DlgItem = GetDlgItem(hDlg, 1860); /*0x52d88a*/
  result = BaseDialogProc(hDlg, a2, a3, a4); /*0x52d89e*/
  if ( !result ) /*0x52d8a5*/
  {
    WindowLongA = (_DWORD *)GetWindowLongA(hDlg, 8); /*0x52d8ae*/
    hDlga = (HWND)WindowLongA; /*0x52d8c2*/
    if ( a2 == 273 ) /*0x52d8c6*/
    {
      if ( (unsigned __int16)a3 == 1670 ) /*0x52d92b*/
      {
        if ( WindowLongA ) /*0x52d94c*/
          *WindowLongA = -1; /*0x52d94e*/
      }
      else if ( (unsigned __int16)a3 == 1860 ) /*0x52d932*/
      {
        v9 = HIWORD(a3) == 0; /*0x52d943*/
      }
      else
      {
        v9 = (unsigned __int16)a3 == 1861; /*0x52d937*/
      }
    }
    else if ( a2 == 1175 ) /*0x52d8ce*/
    {
      if ( !DlgItem ) /*0x52d8d6*/
      {
        if ( WindowLongA ) /*0x52d909*/
        {
          *WindowLongA = -1; /*0x52d912*/
          return 0; /*0x52d91c*/
        }
        return 0; /*0x52d909*/
      }
      GameOptionsClass::PopulateMovieList(MEMORY[0xA8EB60], DlgItem); /*0x52d8de*/
      if ( SendMessageA(DlgItem, 0x186u, wParam, 0) == -1 ) /*0x52d8f7*/
        SendMessageA(DlgItem, 0x186u, 0, 0); /*0x52d903*/
    }
    if ( DlgItem ) /*0x52d956*/
    {
      if ( v9 ) /*0x52d95e*/
      {
        v7 = SendMessageA(DlgItem, 0x188u, 0, 0); /*0x52d96a*/
        wParam = v7; /*0x52d96f*/
        if ( v7 != -1 ) /*0x52d974*/
        {
          v8 = SendMessageA(DlgItem, 0x199u, v7, 0); /*0x52d97f*/
          if ( v8 ) /*0x52d983*/
          {
            if ( hDlga ) /*0x52d98b*/
              *(_DWORD *)hDlga = v8; /*0x52d98d*/
          }
        }
      }
    }
    return 0; /*0x52d98f*/
  }
  return result; /*0x52d90f*/
}


// ==== 0x0052D9A0  ObjectClass::MenuSelect  this=ObjectClass  sig=csp ====
char MenuSelect()
{
  Movie *v0; // eax
  int v1; // edx
  _DWORD *v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // edx
  int j; // edi
  int i; // eax
  int v8; // edx
  LONG esi12; // esi
  Movie *v9; // eax
  void (__thiscall ***v11)(_DWORD, int); // ecx
  Movie *eax34; // eax
  Movie *v12; // eax
  wchar_t *StringCSF; // esi
  wchar_t *v15; // ebp
  LONG v16; // eax
  IUnknown *v17; // eax
  Movie *v18; // eax
  HWND Dialog; // eax
  unsigned __int64 v20; // rax
  Frame *v21; // ecx
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  _DWORD *Options; // eax
  char v25; // bl
  int *p_visibilityFlags; // eax
  char v27; // al
  int *v28; // eax
  char v29; // bl
  int v30; // eax
  Movie *v31; // eax
  int *v32; // eax
  _DWORD *v33; // eax
  IPXInterfaceClass *v36; // eax
  wchar_t *v35; // eax
  Frame *ecx152; // ecx
  int v37; // eax
  int v38; // esi
  DWORD Ticks; // ecx
  int v40; // esi
  int v41; // edi
  int v42; // esi
  char result; // al
  int v44; // eax
  Movie *v49; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int eax203; // eax
  Frame *v50; // ecx
  Movie *v54; // [esp+6h] [ebp-120h]
  char v52; // [esp+Ah] [ebp-11Ch]
  char v53; // [esp+Eh] [ebp-118h]
  char var110_2; // [esp+18h] [ebp-10Eh]
  char v55; // [esp+19h] [ebp-10Dh]
  LONG dwNewLong; // [esp+1Ah] [ebp-10Ch] BYREF
  int v57; // [esp+1Eh] [ebp-108h]
  CampaignScore *v58; // [esp+22h] [ebp-104h]
  _DWORD (__stdcall **v59)(_DWORD); // [esp+26h] [ebp-100h]
  int v60; // [esp+2Ah] [ebp-FCh]
  _DWORD v61[14]; // [esp+32h] [ebp-F4h] BYREF
  LONG v62[23]; // [esp+6Ah] [ebp-BCh] BYREF
  LONG v63[24]; // [esp+C6h] [ebp-60h] BYREF

  v0 = (Movie *)StringList::Find(&g_BuildingTypeClass_Count, g_INI_Key_INTRO);
  ThemeClass::Play((int *)&g_BuildingTypeClass_Count, v0);
LABEL_2:
  v1 = *(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584;
  HouseClass_Player.__pad_5568[22252] = 1;
  HouseClass_Player.field_0 = 0;
  dword_8B41F8 = 0;
  word_8B41FC = 0;
  unk_8B4200 = 0;
  Networking_LastEventIndex = 0;
  g_NetworkEventIndex = 0;
  Networking_NextPacketIndex = 0;
  *(_DWORD *)&HouseClass_Player.__pad_5568[23248] = 0;
  *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584) = 0;
  v55 = 0;
  *(_DWORD *)(v1 + 4) = v60;
  var110_2 = 1;
  *(_DWORD *)(v1 + 8) = 0;
  v2 = (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584);
  v3 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584);
  if ( v3 != -1 )
  {
    v4 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4592);
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - v3 >= v4 )
      v5 = 0;
    else
      v5 = v4 - (*(_DWORD *)&HouseClass_Player.__pad_5568[23248] - v3);
    *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4592) = v5;
    *v2 = -1;
  }
  j = 1;
  *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1552) = 1;
  *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1548) = 1;
  byte_A83D49 = 0;
  HouseClass_Player.__pad_5568[23068] = 0;
  unk_8B41C0 = 0;
  byte_A83D48 = 0;
  *(_DWORD *)&HouseClass_Player.__pad_5568[8836] = 0;
  Mouse::SetBounds((int)&stru_87C374.__pad_14B0[8132], 0);
  *(_DWORD *)&stru_87C374.__pad_14B0[12648] = 0;
  *(_DWORD *)&stru_87C374.__pad_14B0[12652] = 0;
  *(_DWORD *)&stru_87C374.__pad_14B0[12656] = -1;
  *(_DWORD *)&HouseClass_Player.__pad_5568[8876] = 0;
  *(_DWORD *)&HouseClass_Player.__pad_5568[8880] = 0;
  *(_DWORD *)&HouseClass_Player.__pad_5568[8868] = 30;
  *(_DWORD *)&HouseClass_Player.__pad_5568[8004] = 0;
  *(_DWORD *)&HouseClass_Player.__pad_5568[7976] = 0;
  for ( i = 0; i < 112; i += 28 )
  {
    v8 = i + *(_DWORD *)&HouseClass_Player.__pad_5568[17108];
    *(_DWORD *)&HouseClass_Player.__pad_5568[4 * v8 + 16264] = -1;
  }
  Mission::SetAndCall((int *)&stru_87C374.__pad_14B0[8132], 0, 0);
  if ( *(_DWORD *)&stru_87C374.__pad_579C[22616] )
    Tooltip::Enable(*(void **)&stru_87C374.__pad_579C[22616], 0);
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] )
    esi12 = (*(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4) + 16;
  else
    esi12 = 18;
  if ( HouseClass_Player.__pad_5568[23223] )
    goto LABEL_145;
  if ( (HouseClass_Player.__pad_5568[17220] & 2) != 0 && CCFileClass::Open(&HouseClass_Player.__pad_5568[17112], 0) )
  {
    if ( !FileClass::Load((int *)&HouseClass_Player.__pad_5568[17112], (CDFileClass *)1) )
    {
      v9 = *(Movie **)&HouseClass_Player.__pad_5568[17220];
      LOBYTE(v9) = HouseClass_Player.__pad_5568[17220] & 0xFD;
      *(_DWORD *)&HouseClass_Player.__pad_5568[17220] = v9;
      goto LABEL_20;
    }
LABEL_18:
    (*(void (__thiscall **)(char *, ObjectClass **, int))(*(_DWORD *)&HouseClass_Player.__pad_5568[17112] + 36))(
      &HouseClass_Player.__pad_5568[17112],
      &g_RulesInitConfig,
      4);
    (*(void (__thiscall **)(char *, char *, int))(*(_DWORD *)&HouseClass_Player.__pad_5568[17112] + 36))(
      &HouseClass_Player.__pad_5568[17112],
      &HouseClass_Player.__pad_5568[23264],
      4);
    (*(void (__thiscall **)(char *, int, int))(*(_DWORD *)&HouseClass_Player.__pad_5568[17112] + 36))(
      &HouseClass_Player.__pad_5568[17112],
      *(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4692,
      4);
    (*(void (__thiscall **)(char *, int, int))(*(_DWORD *)&HouseClass_Player.__pad_5568[17112] + 36))(
      &HouseClass_Player.__pad_5568[17112],
      *(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4700,
      260);
    (*(void (__thiscall **)(char *, char *, int))(*(_DWORD *)&HouseClass_Player.__pad_5568[17112] + 36))(
      &HouseClass_Player.__pad_5568[17112],
      &HouseClass_Player.__pad_5568[23004],
      4);
    (*(void (__thiscall **)(char *, char *, int))(*(_DWORD *)&HouseClass_Player.__pad_5568[17112] + 36))(
      &HouseClass_Player.__pad_5568[17112],
      &HouseClass_Player.__pad_5568[22188],
      4);
    (*(void (__thiscall **)(char *, char *, int))(*(_DWORD *)&HouseClass_Player.__pad_5568[17112] + 36))(
      &HouseClass_Player.__pad_5568[17112],
      &HouseClass_Player.__pad_5568[22700],
      184);
    Debug::Log();
    Theme::Stop(&g_BuildingTypeClass_Count, (ObjectClass *)1);
    goto LABEL_145;
  }
LABEL_20:
  while ( 2 )
  {
    v11 = *(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[23320];
    if ( *(_DWORD *)&stru_87C374.__pad_579C[23320] )
    {
      if ( HouseClass_Player.__pad_5568[18668] )
      {
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[22360] )
          NetworkEventQueueClass::WaitForResponse((int)&g_NetworkEventQueue);
        v11 = *(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[23320];
        HouseClass_Player.__pad_5568[18668] = 0;
      }
      if ( v11 )
        (**v11)(v11, 1);
      *(_DWORD *)&stru_87C374.__pad_579C[23320] = 0;
      Network::Init();
    }
    if ( esi12 == 18 )
    {
      if ( HouseClass_Player.__pad_5568[23209] )
        goto LABEL_32;
      esi12 = MainMenu::Screen(0, -1);
    }
    if ( HouseClass_Player.__pad_5568[23209] )
    {
LABEL_32:
      esi12 = 8;
      goto LABEL_34;
    }
    if ( esi12 == 7 )
      goto LABEL_35;
LABEL_34:
    eax34 = (Movie *)StringList::Find(&g_BuildingTypeClass_Count, g_INI_Key_INTRO);
    ThemeClass::Play((int *)&g_BuildingTypeClass_Count, eax34);
LABEL_35:
    Event::Dispatch();
    switch ( esi12 )
    {
      case -1:
        if ( (HouseClass_Player.__pad_5568[17220] & 4) == 0
          || !CCFileClass::Open(&HouseClass_Player.__pad_5568[17112], 0) )
        {
          goto LABEL_40;
        }
        j = *(_DWORD *)&HouseClass_Player.__pad_5568[17220] | 2;
        *(_DWORD *)&HouseClass_Player.__pad_5568[17220] |= 2u;
        if ( FileClass::Load((int *)&HouseClass_Player.__pad_5568[17112], (CDFileClass *)1) )
          goto LABEL_18;
        v12 = *(Movie **)&HouseClass_Player.__pad_5568[17220];
        LOBYTE(v12) = HouseClass_Player.__pad_5568[17220] & 0xFD;
        *(_DWORD *)&HouseClass_Player.__pad_5568[17220] = v12;
LABEL_40:
        esi12 = 18;
        goto LABEL_134;
      case 1:
        *(&g_MatrixTransformState + 2222) = 0;
        esi12 = Campaign::Screen(1);
        goto LABEL_134;
      case 2:
        esi12 = 16;
        *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 4;
        Multiplayer::Screen((void *)2);
        goto LABEL_134;
      case 3:
        esi12 = 16;
        *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 3;
        Multiplayer::Screen((void *)1);
        goto LABEL_134;
      case 4:
        esi12 = Campaign::Screen(1);
        goto LABEL_134;
      case 5:
        esi12 = 18;
        Options::Screen_Dialog();
        goto LABEL_134;
      case 6:
        StringCSF = GetStringCSF(aGuiExitareyous, 0, g_Str_File_Init_CPP, 2502);
        j = (int)GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_Init_CPP, 2503);
        v15 = GetStringCSF(aGuiCancel, 0, g_Str_File_Init_CPP, 2504);
        Screen::Capture(1, 0, 0, (int)v15);
        v58 = &stru_82083C;
        if ( Dialog::ShowMessageBox((int)StringCSF, (_WORD *)j, (Movie *)v15, 0, 0, (int)v54) )
        {
          Screen::Capture(1, 0, 0, (int)v15);
          esi12 = 18;
        }
        else
        {
          esi12 = 7;
          ScenarioClass::SaveGameOptions((int)&HouseClass_Player.__pad_5568[22700]);
        }
        goto LABEL_134;
      case 7:
        Theme::Stop(&g_BuildingTypeClass_Count, (ObjectClass *)1);
        v40 = *(_DWORD *)&stru_87C374.__pad_579C[22576];
        if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 )
          v40 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568];
        v41 = v40 + 3000;
        while ( Theme::IsPlaying((int)&g_BuildingTypeClass_Count) )
        {
          if ( !(unsigned __int8)Audio::IsPlaying() )
            break;
          v42 = *(_DWORD *)&stru_87C374.__pad_579C[22576];
          if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 )
            v42 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568];
          if ( v41 <= v42 )
            break;
          Event::Dispatch();
        }
        Theme::Stop(&g_BuildingTypeClass_Count, 0);
        if ( !g_Is16BitMode )
          FadePalette(&stru_87C374.__pad_579C[13168], 30, 0);
        return 0;
      case 8:
        if ( &stru_89E138 != (IUnknown *)-22440 )
          Menu::Reset((int)&stru_89E138.__pad_579C[12]);
        LOBYTE(v57) = 0;
        dwNewLong = -1;
        if ( g_UnitTypeInitState || (Credits::Screen(), g_UnitTypeInitState) )
        {
          InitializeGameLoading();
          AudioController::Init(&HouseClass_Player.__pad_5568[24652]);
          *(_DWORD *)&HouseClass_Player.__pad_5568[25836] = 0;
          *(_DWORD *)&HouseClass_Player.__pad_5568[25840] = 0;
          *(_DWORD *)&HouseClass_Player.__pad_5568[25844] = 0;
          Dialog = (HWND)CreateDialog(
                           0x94u,
                           (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))CampaignSelect::DlgProc,
                           0);
          j = (int)Dialog;
          if ( Dialog )
          {
            SetWindowLongA(Dialog, 8, (LONG)&dwNewLong);
            SetDialogParent((HWND)j, g_hWnd);
            Dialog::Show((HWND)j);
            while ( !(_BYTE)v57 )
            {
              if ( Dialog::PumpMessages() == 1 )
                break;
              if ( *(_DWORD *)&stru_825BAC.isOnMap != -1 )
              {
                LODWORD(v20) = Audio::Callback();
                if ( *(_QWORD *)&HouseClass_Player.__pad_5568[25836] < v20 )
                {
                  AudioController::Stop(&HouseClass_Player.__pad_5568[24652]);
                  PlayVocClass(*(int *)&stru_825BAC.isOnMap, 0x2000, 1.0, (int)&HouseClass_Player.__pad_5568[24652]);
                  *(_DWORD *)&stru_825BAC.isOnMap = -1;
                }
              }
              if ( stru_89E138.__pad_14B0[2744] )
              {
                stru_89E138.__pad_14B0[2744] = 0;
                Screen::Capture(1, 0, 0, -1);
                LOBYTE(v21) = 0;
                Frame::Present(v21, 0);
              }
            }
            Dialog::Destroy((SkirmishDialog *)j);
          }
          LODWORD(v22) = Audio::Callback();
          *(_QWORD *)&HouseClass_Player.__pad_5568[25836] = v22 + 3000;
          while ( AudioSource::Get((int **)&HouseClass_Player.__pad_5568[24652]) )
          {
            LODWORD(v23) = Audio::Callback();
            if ( *(_QWORD *)&HouseClass_Player.__pad_5568[25836] <= v23 )
              break;
            Event::Dispatch();
          }
          CleanupEVASystem();
          v18 = (Movie *)dwNewLong;
        }
        else
        {
          v18 = (Movie *)-1;
        }
        *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13516) = v18;
        if ( *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13516) == -1 )
        {
          var110_2 = 1;
          esi12 = 1;
          continue;
        }
        switch ( *(_DWORD *)&HouseClass_Player.__pad_5568[22704] )
        {
          case 0:
            *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1552) = 2;
            *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1548) = 0;
            *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 0;
            break;
          case 1:
            *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1552) = 2;
            *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1548) = 1;
            *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 0;
            break;
          case 2:
            *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1552) = 1;
            *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1548) = 1;
            *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 0;
            break;
          case 3:
            *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1552) = 0;
            *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1548) = 1;
            *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 0;
            break;
          case 4:
            *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1552) = 0;
            *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1548) = 2;
            goto LABEL_143;
          default:
LABEL_143:
            *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 0;
            break;
        }
LABEL_147:
        Timer::PumpMessages(*(HWND **)&stru_87C374.__pad_14B0[8012]);
        InitRandomSeed();
        PlanningNodeClass::CleanupAll();
        if ( v55 || *(_DWORD *)&HouseClass_Player.__pad_5568[9732] )
          goto LABEL_189;
        Debug::Log();
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 12))(*(_DWORD *)&stru_87C374.__pad_579C[23344]);
        if ( esi12 != 8 )
        {
          if ( !g_Is16BitMode )
            FadePalette(&stru_87C374.__pad_579C[13168], 15, (void (*)(void))Event::Dispatch);
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 24))(
            *(_DWORD *)&stru_87C374.__pad_579C[22524],
            0);
          LOBYTE(ecx152) = 1;
          Frame::Present(ecx152, 0);
        }
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 16))(*(_DWORD *)&stru_87C374.__pad_579C[23344]);
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 )
        {
          v37 = *(_DWORD *)&stru_87C374.__pad_579C[22568];
          j = (int)&HouseClass_Player.__pad_5568[20432];
          do
          {
            v38 = *(_DWORD *)&stru_87C374.__pad_579C[22576];
            if ( v37 != -1 )
            {
              Ticks = Timer::GetTicks();
              v37 = *(_DWORD *)&stru_87C374.__pad_579C[22568];
              v38 += Ticks - *(_DWORD *)&stru_87C374.__pad_579C[22568];
            }
            *(_DWORD *)j = v38;
            j += 4;
          }
          while ( j < (int)&HouseClass_Player.__pad_5568[20464] );
        }
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068]
          || HouseClass_Player.__pad_5568[23209]
          || (HouseClass_Player.__pad_5568[17220] & 2) != 0 )
        {
          if ( ScenarioClass::LoadScenarioAndStart(
                 (AnimClass *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4700),
                 1,
                 -1) )
          {
            goto LABEL_184;
          }
          if ( HouseClass_Player.__pad_5568[23223] )
            goto LABEL_183;
          goto LABEL_2;
        }
        if ( ScenarioClass::LoadScenarioAndStart(
               (AnimClass *)(*(_DWORD *)&g_CampaignTypeArray->__pad_0[4
                                                                    * *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060]
                                                                                + 13516)]
                           + 156),
               1,
               *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13516)) )
        {
LABEL_184:
          if ( (HouseClass_Player.__pad_5568[17220] & 1) != 0 )
          {
            if ( FileClass::Load((int *)&HouseClass_Player.__pad_5568[17112], (CDFileClass *)2) )
            {
              Debug::Log();
              (*(void (__thiscall **)(char *, ObjectClass **, int))(*(_DWORD *)&HouseClass_Player.__pad_5568[17112] + 48))(
                &HouseClass_Player.__pad_5568[17112],
                &g_RulesInitConfig,
                4);
              (*(void (__thiscall **)(char *, char *, int))(*(_DWORD *)&HouseClass_Player.__pad_5568[17112] + 48))(
                &HouseClass_Player.__pad_5568[17112],
                &HouseClass_Player.__pad_5568[23264],
                4);
              (*(void (__thiscall **)(char *, int, int))(*(_DWORD *)&HouseClass_Player.__pad_5568[17112] + 48))(
                &HouseClass_Player.__pad_5568[17112],
                *(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4692,
                4);
              (*(void (__thiscall **)(char *, int, int))(*(_DWORD *)&HouseClass_Player.__pad_5568[17112] + 48))(
                &HouseClass_Player.__pad_5568[17112],
                *(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4700,
                260);
              (*(void (__thiscall **)(char *, char *, int))(*(_DWORD *)&HouseClass_Player.__pad_5568[17112] + 48))(
                &HouseClass_Player.__pad_5568[17112],
                &HouseClass_Player.__pad_5568[23004],
                4);
              (*(void (__thiscall **)(char *, char *, int))(*(_DWORD *)&HouseClass_Player.__pad_5568[17112] + 48))(
                &HouseClass_Player.__pad_5568[17112],
                &HouseClass_Player.__pad_5568[22188],
                4);
              (*(void (__thiscall **)(char *, char *, int))(*(_DWORD *)&HouseClass_Player.__pad_5568[17112] + 48))(
                &HouseClass_Player.__pad_5568[17112],
                &HouseClass_Player.__pad_5568[22700],
                184);
              v44 = *(_DWORD *)&HouseClass_Player.__pad_5568[22188];
              LOBYTE(v44) = HouseClass_Player.__pad_5568[22188] & 0xFB;
              *(_DWORD *)&HouseClass_Player.__pad_5568[22188] = v44;
              goto LABEL_189;
            }
            v49 = *(Movie **)&HouseClass_Player.__pad_5568[17220];
            LOBYTE(v49) = HouseClass_Player.__pad_5568[17220] & 0xFE;
            *(_DWORD *)&HouseClass_Player.__pad_5568[17220] = v49;
          }
          v46 = *(_DWORD *)&HouseClass_Player.__pad_5568[22188];
          LOBYTE(v46) = HouseClass_Player.__pad_5568[22188] & 0xFB;
          *(_DWORD *)&HouseClass_Player.__pad_5568[22188] = v46;
LABEL_189:
          Debug::Log();
          Debug::Log();
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068]
            && *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 5
            && (HouseClass_Player.__pad_5568[17220] & 2) == 0 )
          {
            SessionClass::CreateConnections(&HouseClass_Player.__pad_5568[8068]);
            if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 3 )
            {
              if ( (unsigned int)(Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) + 2) >= 0xF )
                v47 = Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) + 2;
              else
                v47 = 15;
              Network::SetConnectionParams(
                (int *)&HouseClass_Player.__pad_5568[22284],
                (IUnknown *)v47,
                -1,
                600,
                (CellStruct *)1);
              if ( (unsigned int)(Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) + 2) >= 0x3C )
                v48 = Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) + 2;
              else
                v48 = 60;
              TacticalClass::SetCameraPosition(&HouseClass_Player.__pad_5568[22284], v48, -1, 600);
            }
            else if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4
                   && !*(_DWORD *)&HouseClass_Player.__pad_5568[8892] )
            {
              if ( (unsigned int)(Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) + 2) >= 0x3C )
                eax203 = Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) + 2;
              else
                eax203 = 60;
              Network::SetConnectionParams(
                (int *)&HouseClass_Player.__pad_5568[22284],
                (IUnknown *)eax203,
                -1,
                600,
                (CellStruct *)1);
            }
          }
          Event::Dispatch();
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 12))(*(_DWORD *)&stru_87C374.__pad_579C[23344]);
          if ( !g_Is16BitMode )
            FadePalette(&stru_87C374.__pad_579C[13168], 15, (void (*)(void))Event::Dispatch);
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 24))(
            *(_DWORD *)&stru_87C374.__pad_579C[22524],
            0);
          LOBYTE(v50) = 1;
          Frame::Present(v50, 0);
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 16))(*(_DWORD *)&stru_87C374.__pad_579C[23344]);
          *(_DWORD *)&stru_87C374.__pad_579C[22532] = *(_DWORD *)&stru_87C374.__pad_579C[22524];
          Mouse::SetCursor((int)&stru_87C374.__pad_14B0[8132], (ObjectClass *)0x13, 0);
          MouseClass::GetPosition(&stru_87C374.__pad_14B0[8132]);
          if ( !HouseClass_Player.__pad_5568[23223] )
            TacticalClass::BuildCommandBar(&stru_87C374.__pad_14B0[8132], j, 1);
          MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 0);
          Event::Dispatch();
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 12))(*(_DWORD *)&stru_87C374.__pad_579C[23344]);
          ChatMessageWOL(0, (wchar_t *)&stru_87C374.__pad_579C[23588]);
          return 1;
        }
        if ( !HouseClass_Player.__pad_5568[23223] )
          goto LABEL_2;
LABEL_183:
        ChatMessageWOL(0, (wchar_t *)&stru_87C374.__pad_579C[23588]);
        return 0;
      case 9:
        ++*(_DWORD *)&HouseClass_Player.__pad_5568[21752];
        Credits::Screen();
        --*(_DWORD *)&HouseClass_Player.__pad_5568[21752];
        Options = LoadOptions::LoadOptions(v61);
        v25 = LoadOptions::Run(Options);
        LoadOptions::Cleanup(v61);
        if ( v25 )
        {
          v55 = 1;
LABEL_145:
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 )
          {
            v35 = GetStringCSF(aTxtAwayLoading, 0, g_Str_File_Init_CPP, 2993);
            ChatMessageWOL(1, v35);
          }
          goto LABEL_147;
        }
        esi12 = 1;
LABEL_134:
        if ( !var110_2 )
          goto LABEL_145;
        continue;
      case 10:
        esi12 = 1;
        goto LABEL_134;
      case 11:
        *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 5;
        goto LABEL_81;
      case 13:
        esi12 = 4;
        Movie::Play((CCINIClass *)1, 1, (CCINIClass *)1, 0, (char)v54, v52, v53);
        Screen::Capture(1, 0, 0, -1);
        goto LABEL_134;
      case 14:
        v16 = Campaign::Screen(1);
        j = v16;
        if ( v16 == -1 || !v16 )
        {
          esi12 = 4;
        }
        else
        {
          v59 = &CD::`vftable';
          if ( (unsigned __int8)CD::`vftable'(*(_DWORD *)(v16 + 8)) )
          {
            Movie::Play((CCINIClass *)1, 1, (CCINIClass *)1, 0, (char)v54, v52, v53);
            Screen::Capture(1, 0, 0, -1);
          }
        }
        goto LABEL_134;
      case 15:
        esi12 = 4;
        CreditsPower::Display(0, j, 4);
        v17 = (IUnknown *)StringList::Find(&g_BuildingTypeClass_Count, g_INI_Key_INTRO);
        Theme::QueueSong((int)&g_BuildingTypeClass_Count, v17);
        Screen::Capture(1, 0, 0, -1);
        goto LABEL_134;
      case 16:
      case 17:
LABEL_81:
        ScenarioClass::LoadNetworkConfig((int)&HouseClass_Player.__pad_5568[8068]);
        for ( j = 0; j < g_SuperWeaponTypeArray; ++j )
          (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)g_SuperWeaponTypeCount + j) + 100))(
            *((_DWORD *)g_SuperWeaponTypeCount + j),
            *(_DWORD *)&stru_87C374.__pad_579C[21816]);
        *(_DWORD *)&HouseClass_Player.__pad_5568[18432] = 0;
        switch ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] )
        {
          case 0:
            goto LABEL_40;
          case 1:
          case 2:
            p_visibilityFlags = &stru_825BAC.visibilityFlags;
            do
            {
              if ( !*((_BYTE *)p_visibilityFlags + 12) )
                *(_BYTE *)*p_visibilityFlags = 0;
              p_visibilityFlags += 4;
            }
            while ( (int)p_visibilityFlags < (int)g_PlayerHouseFlags_End );
            HouseClass_Player.__pad_5568[17242] = 1;
            if ( !NullModemClass::COMStub(&HouseClass_Player.__pad_5568[22460]) )
            {
              esi12 = 18;
              *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 0;
              goto LABEL_134;
            }
            EventClass::CheckFlag(&HouseClass_Player.__pad_5568[22460]);
            if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 2 )
            {
              if ( *(_DWORD *)&HouseClass_Player.__pad_5568[18556] )
                goto LABEL_93;
            }
            else if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 1
                   || *(_DWORD *)&HouseClass_Player.__pad_5568[18556] != 2 )
            {
LABEL_93:
              v27 = ModemGuest::Dialog((LONG)v62);
              goto LABEL_97;
            }
            v27 = ModemHost::Dialog((LONG)v63);
LABEL_97:
            if ( !v27 )
            {
              *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 0;
              esi12 = 18;
            }
LABEL_116:
            switch ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] )
            {
              case 1:
              case 2:
              case 4:
              case 5:
                goto LABEL_145;
              case 3:
                v32 = &stru_825BAC.visibilityFlags;
                do
                {
                  if ( !*((_BYTE *)v32 + 12) )
                    *(_BYTE *)*v32 = 0;
                  v32 += 4;
                }
                while ( (int)v32 < (int)g_PlayerHouseFlags_End );
                ScenarioClass::LoadNetworkConfig((int)&HouseClass_Player.__pad_5568[8068]);
                if ( *(_DWORD *)&stru_87C374.__pad_579C[23320] )
                {
                  (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[23320])(
                    *(_DWORD *)&stru_87C374.__pad_579C[23320],
                    1);
                  *(_DWORD *)&stru_87C374.__pad_579C[23320] = 0;
                }
                for ( j = 0; j < g_SuperWeaponTypeArray; ++j )
                  (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)g_SuperWeaponTypeCount + j) + 100))(
                    *((_DWORD *)g_SuperWeaponTypeCount + j),
                    *(_DWORD *)&stru_87C374.__pad_579C[21816]);
                *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 3;
                *(_DWORD *)&HouseClass_Player.__pad_5568[8088] = 2;
                if ( *(_DWORD *)&stru_87C374.__pad_579C[23320] )
                  goto LABEL_134;
                v33 = (_DWORD *)__2_YAPAXI_Z(0x3F310u);
                if ( v33 )
                  v36 = (IPXInterfaceClass *)IPXInterfaceClass::Construct(v33);
                else
                  v36 = 0;
                *(_DWORD *)&stru_87C374.__pad_579C[23320] = v36;
                WinsockInterface::Init(v36);
                Screen::Capture(1, 0, 0, -1);
                if ( InitNetworkGameState() && NetworkLobby::CreateGame() )
                  goto LABEL_145;
                *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 0;
                esi12 = 18;
                if ( *(_DWORD *)&stru_87C374.__pad_579C[23320] )
                  (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[23320])(
                    *(_DWORD *)&stru_87C374.__pad_579C[23320],
                    1);
                *(_DWORD *)&stru_87C374.__pad_579C[23320] = 0;
                break;
              default:
                goto LABEL_134;
            }
            break;
          case 4:
            v28 = &stru_825BAC.visibilityFlags;
            do
            {
              if ( !*((_BYTE *)v28 + 12) )
                *(_BYTE *)*v28 = 0;
              v28 += 4;
            }
            while ( (int)v28 < (int)g_PlayerHouseFlags_End );
            Debug::Log();
            memset(&HouseClass_Player.__pad_5568[18808], 0, 0x20u);
            j = 0;
            *(_WORD *)&HouseClass_Player.__pad_5568[20468] = 0;
            v29 = Network::Init();
            v30 = RunWOLMainLoop(esi12 == 17);
            esi12 = 16;
            HouseClass_Player.__pad_5568[17242] = 0;
            switch ( v30 )
            {
              case -2:
              case 0:
                if ( *(_DWORD *)&stru_87C374.__pad_579C[23320] )
                  (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[23320])(
                    *(_DWORD *)&stru_87C374.__pad_579C[23320],
                    1);
                *(_DWORD *)&stru_87C374.__pad_579C[23320] = 0;
                esi12 = 18;
                *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 0;
                v31 = (Movie *)StringList::Find(&g_BuildingTypeClass_Count, g_INI_Key_INTRO);
                ThemeClass::Play((int *)&g_BuildingTypeClass_Count, v31);
                goto LABEL_116;
              case -1:
                Theme::Stop(&g_BuildingTypeClass_Count, (ObjectClass *)1);
                if ( !g_Is16BitMode )
                  FadePalette(&stru_87C374.__pad_579C[13168], 30, 0);
                if ( *(_DWORD *)&stru_87C374.__pad_579C[23320] )
                  (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[23320])(
                    *(_DWORD *)&stru_87C374.__pad_579C[23320],
                    1);
                *(_DWORD *)&stru_87C374.__pad_579C[23320] = 0;
                result = 0;
                break;
              case 1:
                Debug::Log();
                if ( v29 )
                {
                  var110_2 = 0;
                  g_WOLReturnCode = 2;
                }
                else
                {
                  *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 0;
                  esi12 = 18;
                  if ( *(_DWORD *)&stru_87C374.__pad_579C[23320] )
                    (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[23320])(
                      *(_DWORD *)&stru_87C374.__pad_579C[23320],
                      1);
                  *(_DWORD *)&stru_87C374.__pad_579C[23320] = 0;
                  g_WOLReturnCode = -1;
                }
                goto LABEL_116;
              case 2:
                if ( *(_DWORD *)&stru_87C374.__pad_579C[23320] )
                  (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[23320])(
                    *(_DWORD *)&stru_87C374.__pad_579C[23320],
                    1);
                *(_DWORD *)&stru_87C374.__pad_579C[23320] = 0;
                *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 0;
                esi12 = 11;
                goto LABEL_116;
              default:
                goto LABEL_116;
            }
            return result;
          case 5:
            if ( !ShowSkirmishSetupScreen(0, -1) )
            {
              *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 0;
              esi12 = 1;
            }
            goto LABEL_116;
          default:
            goto LABEL_116;
        }
        goto LABEL_134;
      default:
        goto LABEL_134;
    }
  }
}


// ==== 0x0052EC00  CampaignSelect::DlgProc  this=CampaignSelect  sig=csp ====
int __stdcall CampaignSelect_DlgProc(HWND hDlg, unsigned int a2, WPARAM wParam, unsigned int a4)
{
  int result; // eax
  wchar_t *v5; // ebp
  HWND v6; // esi
  wchar_t *v7; // eax
  LONG v8; // eax
  LONG v9; // edi
  HWND v10; // eax
  HWND v11; // eax
  HWND v12; // eax
  int v13; // ebx
  int v14; // eax
  __int64 v15; // rax
  HWND v16; // eax
  int v17; // edi
  int v18; // eax
  HWND DlgItem; // ebp
  int i; // edi
  HWND v21; // edi
  HWND v22; // edi
  wchar_t *String; // eax
  HWND v24; // edi
  wchar_t *v25; // eax
  HWND v26; // eax
  HWND v27; // edi
  HWND v28; // eax
  HWND v29; // eax
  HWND v30; // eax
  HWND v31; // edi
  int DlgCtrlID; // ebp
  LONG WindowLongA; // edi
  char *v34; // ecx
  HWND v35; // eax
  POINT v36; // [esp-Ch] [ebp-2Ch]
  POINT v37; // [esp-Ch] [ebp-2Ch]
  POINT v38; // [esp-Ch] [ebp-2Ch]
  struct tagRECT Rect; // [esp+10h] [ebp-10h] BYREF

  result = BaseDialogProc(hDlg, a2, wParam, a4); /*0x52ec1d*/
  if ( result ) /*0x52ec24*/
    return result; /*0x52ec24*/
  if ( a2 > 0x201 ) /*0x52ec30*/
  {
    if ( a2 != 514 ) /*0x52ef8e*/
    {
      if ( a2 == 1175 ) /*0x52ef9a*/
      {
        dword_825C74 = VocClass::FindIndex(aSovietcampaign); /*0x52efdd*/
        dword_825C78 = VocClass::FindIndex(aAlliedcampaign); /*0x52efec*/
        dword_825C7C = VocClass::FindIndex(aBootcampselect); /*0x52f002*/
        DlgItem = GetDlgItem(hDlg, 1109); /*0x52f009*/
        if ( MEMORY[0xA8F7AD] ) /*0x52f012*/
        {
          if ( DlgItem ) /*0x52f016*/
          {
            for ( i = 0; i < g_UnitTypeInitState; ++i ) /*0x52f021*/
              SendMessageA(DlgItem, 0x4CDu, 0, *((_DWORD *)g_CampaignTypeArray + i) + 672); /*0x52f03a*/
            SendMessageA(DlgItem, 0x186u, 0, 0); /*0x52f054*/
          }
        }
        else
        {
          ShowWindow(DlgItem, 0); /*0x52f065*/
          v21 = GetDlgItem(hDlg, 1038); /*0x52f06f*/
          ShowWindow(v21, 0); /*0x52f074*/
          EnableWindow(v21, 0); /*0x52f079*/
        }
        v22 = GetDlgItem(hDlg, 1959); /*0x52f087*/
        if ( v22 ) /*0x52f08b*/
        {
          String = GetStringCSF(aSttAlliedcampa, 0, g_Str_File_Init_CPP, 1190); /*0x52f09e*/
          SendMessageA(v22, 0x4B2u, 0, (LPARAM)String); /*0x52f0ac*/
        }
        v24 = GetDlgItem(hDlg, 1960); /*0x52f0ba*/
        if ( v24 ) /*0x52f0be*/
        {
          v25 = GetStringCSF(aSttSovietcampa, 0, g_Str_File_Init_CPP, 1195); /*0x52f0d1*/
          SendMessageA(v24, 0x4B2u, 0, (LPARAM)v25); /*0x52f0df*/
        }
        v26 = GetDlgItem(hDlg, 1295); /*0x52f0eb*/
        v27 = v26; /*0x52f0f3*/
        if ( v26 ) /*0x52f0f7*/
        {
          PostMessageA(v26, 0x4ACu, 0, 0); /*0x52f103*/
          PostMessageA(v27, 0x406u, 1u, 0x20000); /*0x52f112*/
          PostMessageA(v27, 0x405u, 1u, MEMORY[0xA8EB64]); /*0x52f123*/
        }
        SendDlgItemMessageA(hDlg, 1770, 0x4D5u, 0, 0); /*0x52f13a*/
        SendDlgItemMessageA(hDlg, 1770, 0x4D4u, 0, 0); /*0x52f14b*/
        SendDlgItemMessageA(hDlg, 1772, 0x4D5u, 0, 0); /*0x52f15c*/
        SendDlgItemMessageA(hDlg, 1772, 0x4D4u, 0, 0); /*0x52f16d*/
        SendDlgItemMessageA(hDlg, 1771, 0x4D5u, 0, 0); /*0x52f17e*/
        SendDlgItemMessageA(hDlg, 1771, 0x4D4u, 0, 0); /*0x52f18f*/
        v28 = GetDlgItem(hDlg, 1770); /*0x52f197*/
        if ( v28 ) /*0x52f19b*/
          PostMessageA(v28, 0x4D7u, 0, (LPARAM)hDlg); /*0x52f1a6*/
        v29 = GetDlgItem(hDlg, 1772); /*0x52f1ae*/
        if ( v29 ) /*0x52f1b2*/
        {
          PostMessageA(v29, 0x4D7u, 0, (LPARAM)hDlg); /*0x52f1c1*/
          return 0; /*0x52f1cc*/
        }
      }
      else if ( a2 == 1240 && !wParam ) /*0x52efa7*/
      {
        SendDlgItemMessageA(hDlg, MEMORY[0xA8F7A8], 0x4D4u, 0, 0); /*0x52efbc*/
        return 0; /*0x52efcb*/
      }
      return 0; /*0x52efa7*/
    }
    GetWindowRect(hDlg, &Rect); /*0x52f1e0*/
    v38.y = HIWORD(a4) - Rect.top; /*0x52f1f4*/
    v38.x = (unsigned __int16)a4 - Rect.left; /*0x52f1f5*/
    v30 = ChildWindowFromPointEx(hDlg, v38, 1u); /*0x52f1f7*/
    v31 = v30; /*0x52f1fd*/
    if ( v30 ) /*0x52f203*/
    {
      DlgCtrlID = GetDlgCtrlID(v30); /*0x52f210*/
      if ( v31 == (HWND)MEMORY[0xA8F7B0] ) /*0x52f219*/
      {
        WindowLongA = GetWindowLongA(hDlg, 8); /*0x52f228*/
        if ( WindowLongA ) /*0x52f22c*/
        {
          switch ( DlgCtrlID ) /*0x52f238*/
          {
            case 1770: /*0x52f238*/
              v34 = g_PlayerHouseFlags_End[0]; /*0x52f23a*/
              break;
            case 1772: /*0x52f238*/
              v34 = off_825C6C[0]; /*0x52f24a*/
              break;
            case 1771: /*0x52f238*/
              v34 = (char *)off_825C70; /*0x52f25a*/
              break;
            default:
              goto LABEL_71; /*0x52f258*/
          }
          *(_DWORD *)WindowLongA = CampaignSelect::LookupByName(v34); /*0x52f265*/
          *(_BYTE *)(WindowLongA + 4) = 1; /*0x52f267*/
LABEL_71:
          if ( *(_BYTE *)(WindowLongA + 4) ) /*0x52f26b*/
          {
            MEMORY[0xABCE08] = 0; /*0x52f28b*/
            SendDlgItemMessageA(hDlg, MEMORY[0xA8F7A8], 0x4D5u, 0, 0); /*0x52f292*/
            SendDlgItemMessageA(hDlg, MEMORY[0xA8F7A8], 0x4D4u, 0, 0); /*0x52f2a3*/
            v35 = GetDlgItem(hDlg, 1295); /*0x52f2ab*/
            if ( v35 ) /*0x52f2b3*/
              MEMORY[0xA8EB64] = SendMessageA(v35, 0x400u, 0, 0); /*0x52f2c3*/
            if ( MEMORY[0x825C20] != -1 ) /*0x52f2d2*/
            {
              AudioController::Stop(MEMORY[0xA8F300]); /*0x52f2dd*/
              PlayVocClass(MEMORY[0x825C20], 0x2000, 1.0, (int)MEMORY[0xA8F300]); /*0x52f2f7*/
              MEMORY[0x825C20] = -1; /*0x52f2fc*/
            }
          }
        }
LABEL_86:
        if ( GetCapture() == hDlg ) /*0x52f3ce*/
          ReleaseCapture(); /*0x52f3d0*/
        MEMORY[0xA8F7B0] = 0; /*0x52f3d6*/
        return 0; /*0x52f3d6*/
      }
      if ( DlgCtrlID == 1770 || DlgCtrlID == 1772 || DlgCtrlID == 1771 ) /*0x52f31d*/
      {
        if ( MEMORY[0xA8F7A8] ) /*0x52f359*/
        {
          SendDlgItemMessageA(hDlg, MEMORY[0xA8F7A8], 0x4D5u, 0, 0); /*0x52f364*/
          SendDlgItemMessageA(hDlg, MEMORY[0xA8F7A8], 0x4D4u, 0, 0); /*0x52f375*/
        }
        SendDlgItemMessageA(hDlg, DlgCtrlID, 0x4D5u, 0, 0); /*0x52f380*/
        SendDlgItemMessageA(hDlg, DlgCtrlID, 0x4D3u, 0, 0); /*0x52f38b*/
        MEMORY[0xA8F7A8] = DlgCtrlID; /*0x52f38d*/
        goto LABEL_86; /*0x52f393*/
      }
      if ( !MEMORY[0xA8F7A8] ) /*0x52f326*/
        goto LABEL_86; /*0x52f326*/
    }
    else if ( !MEMORY[0xA8F7A8] ) /*0x52f39c*/
    {
      goto LABEL_86; /*0x52f39c*/
    }
    SendDlgItemMessageA(hDlg, MEMORY[0xA8F7A8], 0x4D5u, 0, 0); /*0x52f3ad*/
    SendDlgItemMessageA(hDlg, MEMORY[0xA8F7A8], 0x4D4u, 0, 0); /*0x52f3be*/
    MEMORY[0xA8F7A8] = 0; /*0x52f3c0*/
    goto LABEL_86; /*0x52f3c0*/
  }
  if ( a2 == 513 ) /*0x52ec36*/
  {
    GetWindowRect(hDlg, &Rect); /*0x52ef0b*/
    v37.y = HIWORD(a4) - Rect.top; /*0x52ef1f*/
    v37.x = (unsigned __int16)a4 - Rect.left; /*0x52ef20*/
    v16 = ChildWindowFromPointEx(hDlg, v37, 1u); /*0x52ef22*/
    v17 = (int)v16; /*0x52ef28*/
    if ( v16 ) /*0x52ef2c*/
    {
      v18 = GetDlgCtrlID(v16); /*0x52ef33*/
      if ( v18 == 1770 || v18 == 1772 || v18 == 1771 ) /*0x52ef4c*/
      {
        PlayVocClass(MEMORY[0x8871E0]->ChronoInSound, 0x2000, 1.0, 0); /*0x52ef6a*/
        MEMORY[0xA8F7B0] = v17; /*0x52ef70*/
        SetCapture(hDlg); /*0x52ef76*/
        return 0; /*0x52ef85*/
      }
    }
    return 0; /*0x52ef4c*/
  }
  if ( a2 != 132 ) /*0x52ec42*/
  {
    if ( a2 == 273 ) /*0x52ec4e*/
    {
      if ( (unsigned __int16)wParam == 1038 ) /*0x52ecbd*/
      {
        if ( !HIWORD(wParam) ) /*0x52ecf1*/
        {
          v9 = GetWindowLongA(hDlg, 8); /*0x52ed0f*/
          if ( v9 ) /*0x52ed13*/
          {
            v10 = GetDlgItem(hDlg, 1109); /*0x52ed1b*/
            if ( v10 ) /*0x52ed1f*/
            {
              *(_DWORD *)v9 = SendMessageA(v10, 0x188u, 0, 0); /*0x52ed2d*/
              *(_BYTE *)(v9 + 4) = 1; /*0x52ed2f*/
            }
          }
          v11 = GetDlgItem(hDlg, 1295); /*0x52ed39*/
          if ( v11 ) /*0x52ed3d*/
          {
            MEMORY[0xA8EB64] = SendMessageA(v11, 0x400u, 0, 0); /*0x52ed51*/
            return 0; /*0x52ed5d*/
          }
        }
      }
      else if ( (unsigned __int16)wParam == 1670 ) /*0x52ecc4*/
      {
        v8 = GetWindowLongA(hDlg, 8); /*0x52eccd*/
        if ( v8 ) /*0x52ecd5*/
        {
          *(_DWORD *)v8 = -1; /*0x52ecdd*/
          *(_BYTE *)(v8 + 4) = 1; /*0x52ece3*/
          return 0; /*0x52ecee*/
        }
      }
    }
    else if ( a2 == 276 && (HWND)a4 == GetDlgItem(hDlg, 1295) ) /*0x52ec69*/
    {
      v5 = (&off_822774)[HIWORD(wParam)]; /*0x52ec78*/
      v6 = GetDlgItem(hDlg, 1648); /*0x52ec8f*/
      v7 = GetStringCSF(v5, 0, g_Str_File_Init_CPP, 1253); /*0x52ec91*/
      SendMessageA(v6, 0x4B2u, 0, (LPARAM)v7); /*0x52ec9f*/
      return 0; /*0x52ecae*/
    }
    return 0; /*0x52ec69*/
  }
  if ( MEMORY[0xA8F7B0] ) /*0x52ed67*/
    return 0; /*0x52ed67*/
  GetWindowRect(hDlg, &Rect); /*0x52ed7e*/
  v36.y = HIWORD(a4) - Rect.top; /*0x52ed92*/
  v36.x = (unsigned __int16)a4 - Rect.left; /*0x52ed93*/
  v12 = ChildWindowFromPointEx(hDlg, v36, 1u); /*0x52ed95*/
  if ( !v12 ) /*0x52ed9d*/
  {
    if ( MEMORY[0xA8F7A8] ) /*0x52eec2*/
    {
      SendDlgItemMessageA(hDlg, MEMORY[0xA8F7A8], 0x4D5u, 0, 0); /*0x52eed9*/
      SendDlgItemMessageA(hDlg, MEMORY[0xA8F7A8], 0x4D4u, 0, 0); /*0x52eeec*/
      return 0; /*0x52eef7*/
    }
    return 0; /*0x52eec2*/
  }
  v13 = GetDlgCtrlID(v12); /*0x52edb0*/
  v14 = MEMORY[0xA8F7A8]; /*0x52edb2*/
  if ( MEMORY[0xA8F7A8] != v13 ) /*0x52edb9*/
  {
    SendDlgItemMessageA(hDlg, MEMORY[0xA8F7A8], 0x4D5u, 0, 0); /*0x52edc6*/
    SendDlgItemMessageA(hDlg, MEMORY[0xA8F7A8], 0x4D4u, 0, 0); /*0x52edd9*/
    LODWORD(v15) = Audio::Callback(); /*0x52eddb*/
    MEMORY[0x825C20] = -1; /*0x52ede5*/
    MEMORY[0xA8F7A0] = v15 + 500; /*0x52edf2*/
    v14 = 0; /*0x52edf7*/
    MEMORY[0xA8F7A8] = 0; /*0x52edff*/
  }
  if ( v13 == 1770 ) /*0x52ee0a*/
  {
    if ( v14 != 1770 ) /*0x52ee0e*/
    {
      MEMORY[0x825C20] = dword_825C78; /*0x52ee25*/
      SendDlgItemMessageA(hDlg, 1770, 0x4D3u, 0, 0); /*0x52ee2b*/
      MEMORY[0xA8F7A8] = 1770; /*0x52ee2f*/
      return 0; /*0x52ee3c*/
    }
    return 0; /*0x52ee0e*/
  }
  if ( v13 == 1772 ) /*0x52ee45*/
  {
    if ( v14 != 1772 ) /*0x52ee49*/
    {
      MEMORY[0x825C20] = dword_825C74; /*0x52ee5f*/
      SendDlgItemMessageA(hDlg, 1772, 0x4D3u, 0, 0); /*0x52ee64*/
      MEMORY[0xA8F7A8] = 1772; /*0x52ee68*/
      return 0; /*0x52ee75*/
    }
    return 0; /*0x52ee49*/
  }
  if ( v13 != 1771 ) /*0x52ee7e*/
    return 0; /*0x52f3dc*/
  if ( v14 != 1771 ) /*0x52ee86*/
    MEMORY[0x825C20] = dword_825C7C; /*0x52ee8e*/
  SendDlgItemMessageA(hDlg, 1771, 0x4D3u, 0, 0); /*0x52eea3*/
  MEMORY[0xA8F7A8] = 1771; /*0x52eea8*/
  return 0; /*0x52eca5*/
}


// ==== 0x0052F3F0  Network::Init  this=Network  sig=csp ====
char Network_Init()
{
  int v0; // ecx
  int v1; // esi
  void *v2; // eax
  char v4; // [esp+Dh] [ebp-25h]
  _BYTE v5[36]; // [esp+Eh] [ebp-24h] BYREF

  v0 = MEMORY[0x887628]; /*0x52f3f0*/
  if ( MEMORY[0x887628] ) /*0x52f3fe*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x887628])(MEMORY[0x887628], 1); /*0x52f404*/
    v0 = 0; /*0x52f406*/
    MEMORY[0x887628] = 0; /*0x52f408*/
  }
  v1 = 0; /*0x52f414*/
  if ( g_SuperWeaponTypeArray > 0 ) /*0x52f419*/
  {
    do /*0x52f437*/
    {
      (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)g_SuperWeaponTypeCount + v1) + 100))( /*0x52f42c*/
        *((_DWORD *)g_SuperWeaponTypeCount + v1),
        MEMORY[0x887048]);
      ++v1; /*0x52f434*/
    }
    while ( v1 < g_SuperWeaponTypeArray ); /*0x52f437*/
    v0 = MEMORY[0x887628]; /*0x52f439*/
  }
  if ( !v0 ) /*0x52f441*/
  {
    v2 = __2_YAPAXI_Z(0x3F5CCu); /*0x52f448*/
    if ( v2 ) /*0x52f452*/
      v0 = Network::finalizeSession(v2); /*0x52f45b*/
    else
      v0 = 0; /*0x52f45f*/
    MEMORY[0x887628] = v0; /*0x52f461*/
  }
  MEMORY[0xA8B24C] = 2; /*0x52f467*/
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v0 + 60))(v0, 0); /*0x52f474*/
  Network::SetConnectionParams(30, -1, 600, 1); /*0x52f489*/
  Debug::Log(MEMORY[0x826450]); /*0x52f493*/
  v4 = Network_Init_5DA6C0(); /*0x52f4a6*/
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 28))(MEMORY[0x887628]); /*0x52f4ac*/
  MEMORY[0xA8E2B2] = 0; /*0x52f4b3*/
  MEMORY[0xA8E2B6] = 0; /*0x52f4be*/
  MEMORY[0xA8E2B0] = 0; /*0x52f4c4*/
  MEMORY[0xA8E2BA] = 0; /*0x52f4ca*/
  MEMORY[0xA8E2A4] = 0; /*0x52f4d0*/
  MEMORY[0xA8E2BE] = 0; /*0x52f4d6*/
  LOWORD(MEMORY[0xA8DBBC]) = 0; /*0x52f4e1*/
  MEMORY[0xA8E2A6] = 0; /*0x52f4e8*/
  MEMORY[0xA8E2C4] = 0; /*0x52f4ef*/
  MEMORY[0xA8E2CC] = -1; /*0x52f4f5*/
  MEMORY[0xA8E2D4] = 20; /*0x52f4fb*/
  MEMORY[0xA8E2D8] = 0; /*0x52f505*/
  MEMORY[0xA8E2DC] = 0; /*0x52f50b*/
  MEMORY[0xA8E2E0] = -1; /*0x52f511*/
  memset(&MEMORY[0xA8DC4C], 0, 0x200u); /*0x52f517*/
  memset(&MEMORY[0xA8DE4C], 0xFFu, 0x200u); /*0x52f527*/
  MEMORY[0xA8E050] = 0; /*0x52f529*/
  MEMORY[0xA8E054] = 0; /*0x52f534*/
  MEMORY[0xA8E058] = 0; /*0x52f53c*/
  MEMORY[0xA8E05C] = 0; /*0x52f547*/
  memset(&MEMORY[0xA8E230], 0, 0x20u); /*0x52f54d*/
  MEMORY[0xA8E04C] = 0; /*0x52f557*/
  if ( MEMORY[0xA8E22C] ) /*0x52f55e*/
  {
    MEMORY[0xA8E228] = MEMORY[0xA8E22C]; /*0x52f560*/
  }
  else if ( MEMORY[0xA8E250] ) /*0x52f56d*/
  {
    MEMORY[0xA8E228] += 7; /*0x52f57c*/
    if ( MEMORY[0xA8E228] >= 1950 ) /*0x52f581*/
      MEMORY[0xA8E228] = 1250; /*0x52f583*/
    MEMORY[0xA8E250] = 0; /*0x52f58d*/
  }
  RawFileClass::Construct(MEMORY[0x826444]); /*0x52f59c*/
  INIClass::SetInt(MEMORY[0x82642C], MEMORY[0x826438], MEMORY[0xA8E228], 0); /*0x52f5b7*/
  INIClass::SetInt(MEMORY[0x82642C], stru_826420, MEMORY[0xABFED8], 0); /*0x52f5d3*/
  INIClass::WriteDigest(v5, 0); /*0x52f5e3*/
  Network::validatePacket(&g_NetworkEventQueue); /*0x52f5ed*/
  MEMORY[0xA8D60E] = 1; /*0x52f5f6*/
  RawFileClass::Dtor(v5); /*0x52f5fd*/
  return v4; /*0x52f606*/
}


// ==== 0x0052F620  ParseCommandLine  this=-  sig=ida-proto ====
char __fastcall ParseCommandLine(int a1, int a2)
{
  char **v4; // esi
  char *v5; // esi
  int v6; // eax
  int v7; // edi
  char *v8; // eax
  _DWORD *v9; // eax
  __int16 v10; // ax
  unsigned __int16 v11; // ax
  int v12; // eax
  char *v13; // esi
  char v14; // al
  bool v15; // cc
  #72 *v17; // eax
  #72 *StringCSF; // eax
  #72 *v19; // eax
  #72 *v20; // eax
  #72 *v21; // eax
  #72 *v22; // eax
  char v23; // [esp+10h] [ebp-28h] BYREF
  int v24; // [esp+14h] [ebp-24h]
  char **v25; // [esp+18h] [ebp-20h]
  int v26; // [esp+1Ch] [ebp-1Ch] BYREF
  int v27; // [esp+20h] [ebp-18h]
  int v28; // [esp+24h] [ebp-14h] BYREF
  __int16 v29; // [esp+28h] [ebp-10h]
  int v30[3]; // [esp+2Ch] [ebp-Ch] BYREF

  v27 = a1; /*0x52f630*/
  ScenarioClass::ResetIntroFlags(&MEMORY[0x87F7E8][539742]); /*0x52f634*/
  HIBYTE(dword_A8ED54[5]) = 0; /*0x52f63e*/
  v24 = 1; /*0x52f644*/
  if ( a1 <= 1 ) /*0x52f64c*/
    return 1; /*0x52fb40*/
  v4 = (char **)(a2 + 4); /*0x52f652*/
  v25 = v4; /*0x52f65a*/
  while ( 1 ) /*0x52f666*/
  {
    v5 = _strupr(*v4); /*0x52f666*/
    if ( _strcmpi(aJabber, v5) ) /*0x52f66e*/
      break; /*0x52f66e*/
    RestartNetworkSession((void *)1); /*0x52f67f*/
LABEL_64:
    v4 = v25 + 1; /*0x52fb17*/
    v15 = ++v24 < v27; /*0x52fb27*/
    ++v25; /*0x52fb2d*/
    if ( !v15 ) /*0x52fb31*/
      return 1; /*0x52fb31*/
  }
  if ( !_strcmpi(aStr, v5) ) /*0x52f68f*/
  {
    ToggleNetworkSession((void *)1); /*0x52f6a0*/
    goto LABEL_64; /*0x52f6a5*/
  }
  if ( !_strcmpi(aNostr, v5) ) /*0x52f6b0*/
  {
    ToggleNetworkSession(0); /*0x52f6be*/
    goto LABEL_64; /*0x52f6c3*/
  }
  if ( !_strcmpi(aNoaudio, v5) ) /*0x52f6ce*/
  {
    g_Audio_MixerEnabled = 0; /*0x52f6da*/
    goto LABEL_64; /*0x52f6e0*/
  }
  if ( !_strcmpi(aRecord, v5) ) /*0x52f6eb*/
  {
    dword_A8ED54[652] = 1; /*0x52f6f7*/
    goto LABEL_64; /*0x52f701*/
  }
  if ( !_strcmpi(aPlay, v5) ) /*0x52f70c*/
  {
    dword_A8ED54[652] = 2; /*0x52f718*/
    goto LABEL_64; /*0x52f71e*/
  }
  if ( !_strcmpi(&unk_8265B8, v5) /*0x52f76b*/
    || !_strcmpi(&unk_8265B4, v5)
    || !_strcmpi(&unk_8265B0, v5)
    || !_strcmpi(&unk_8265AC, v5) )
  {
    StringCSF = GetStringCSF((#72 *)aTxtOptionHelp0, 0, g_Str_File_Init_CPP, 3414); /*0x52fb7b*/
    _putws(StringCSF); /*0x52fb81*/
    v19 = GetStringCSF((#72 *)aTxtOptionHelp0_0, 0, g_Str_File_Init_CPP, 3415); /*0x52fb9a*/
    _putws(v19); /*0x52fba0*/
    v20 = GetStringCSF((#72 *)aTxtOptionHelp0_1, 0, g_Str_File_Init_CPP, 3416); /*0x52fbb9*/
    _putws(v20); /*0x52fbbf*/
    v21 = GetStringCSF((#72 *)aTxtOptionHelp0_2, 0, g_Str_File_Init_CPP, 3417); /*0x52fbd8*/
    _putws(v21); /*0x52fbde*/
    v22 = GetStringCSF((#72 *)aTxtOptionHelp0_3, 0, g_Str_File_Init_CPP, 3418); /*0x52fbf7*/
    _putws(v22); /*0x52fbfd*/
    v17 = GetStringCSF((#72 *)aTxtOptionHelp0_4, 0, g_Str_File_Init_CPP, 3419); /*0x52fc16*/
    goto LABEL_67; /*0x52fc16*/
  }
  if ( Checksummer::HashString(v5) == -648255326 ) /*0x52f787*/
  {
    v6 = MEMORY[0x87F7E8][539742]; /*0x52f789*/
    LOBYTE(v6) = LOBYTE(MEMORY[0x87F7E8][539742]) | 4; /*0x52f78e*/
    MEMORY[0x87F7E8][539742] = v6; /*0x52f790*/
    goto LABEL_64; /*0x52f795*/
  }
  if ( strstr(v5, SubStr) ) /*0x52f7a0*/
  {
    LOBYTE(MEMORY[0x87F7E8][31470]) = 1; /*0x52f7af*/
    Game::FindGameDirectoryCD(v5 + 3); /*0x52f7b6*/
    goto LABEL_64; /*0x52f7bb*/
  }
  if ( strstr(v5, aDestnet_0) ) /*0x52f7c6*/
  {
    v7 = 0; /*0x52f7df*/
    v8 = strtok(v5 + 8, asc_826598); /*0x52f7e1*/
    if ( v8 ) /*0x52f7eb*/
    {
      do /*0x52f82c*/
      {
        sscanf(v8, "%x", &v23); /*0x52f7fc*/
        if ( v7 >= 4 ) /*0x52f807*/
          *((_BYTE *)&v27 + v7) = v23; /*0x52f817*/
        else
          *((_BYTE *)&v26 + v7) = v23; /*0x52f80d*/
        ++v7; /*0x52f821*/
        v8 = strtok(0, asc_826598); /*0x52f822*/
      }
      while ( v8 ); /*0x52f82c*/
      if ( v7 >= 4 ) /*0x52f831*/
      {
        v28 = -1; /*0x52f83e*/
        v29 = -1; /*0x52f847*/
        MEMORY[0x87F7E8][538501] = 1; /*0x52f852*/
        v9 = NetworkAddress::Assign(v30, &v26, (int)&v28, 0); /*0x52f85c*/
        MEMORY[0x87F7E8][538502] = *v9; /*0x52f863*/
        MEMORY[0x87F7E8][538503] = v9[1]; /*0x52f86c*/
        MEMORY[0x87F7E8][538504] = v9[2]; /*0x52f875*/
      }
    }
    goto LABEL_64; /*0x52f87a*/
  }
  if ( strstr(v5, aSocket_0) ) /*0x52f885*/
  {
    v10 = atoi(&v5[strlen(aSocket_1)]) + 0x4000; /*0x52f8a8*/
    if ( v10 >= 0x4000 ) /*0x52f8b4*/
      Network::GetField(&MEMORY[0x87F7E8][539766], v10); /*0x52f8ca*/
    goto LABEL_64; /*0x52f8cf*/
  }
  SessionClass::SetInstance(0); /*0x52f8d6*/
  if ( strstr(v5, aMpdebug) ) /*0x52f8e1*/
  {
    LOBYTE(dword_A8ED54[120523]) = 1; /*0x52f8ed*/
    LOBYTE(MEMORY[0x87F7E8][536627]) = 1; /*0x52f8f4*/
  }
  if ( strstr(v5, aDrop) ) /*0x52f901*/
  {
    v11 = atoi(&v5[strlen(aDrop)]); /*0x52f91f*/
    SessionClass::SetInstance((void *)v11); /*0x52f92f*/
    goto LABEL_64; /*0x52f934*/
  }
  if ( strstr(v5, aSpeedcontrol) ) /*0x52f93f*/
    LOBYTE(dword_A8ED54[34]) = 1; /*0x52f94b*/
  if ( strstr(v5, aDlink1) ) /*0x52f958*/
    dword_A8ED54[238641] = 1; /*0x52f964*/
  if ( strstr(v5, aNetgear) ) /*0x52f974*/
    dword_A8ED54[238641] = 2; /*0x52f980*/
  if ( strstr(v5, aNorouter) ) /*0x52f98c*/
    LOBYTE(MEMORY[0x87F7E8][539320]) = 0; /*0x52f998*/
  if ( strstr(v5, aStealth) ) /*0x52f9a4*/
  {
    LOBYTE(MEMORY[0x87F7E8][538505]) = 1; /*0x52f9b0*/
    goto LABEL_64; /*0x52f9b7*/
  }
  if ( strstr(v5, aMessages) ) /*0x52f9c2*/
  {
    BYTE1(MEMORY[0x87F7E8][538505]) = 0; /*0x52f9ce*/
    goto LABEL_64; /*0x52f9d4*/
  }
  if ( strstr(v5, aAttract) ) /*0x52f9df*/
  {
    v12 = MEMORY[0x87F7E8][538500]; /*0x52f9eb*/
    LOBYTE(v12) = LOBYTE(MEMORY[0x87F7E8][538500]) | 4; /*0x52f9f0*/
    MEMORY[0x87F7E8][538500] = v12; /*0x52f9f2*/
    goto LABEL_64; /*0x52f9f7*/
  }
  if ( isdigit(v5[1]) ) /*0x52fa01*/
  {
    sscanf(v5, "-%dX%d", &MEMORY[0x87F7E8][539879], &MEMORY[0x87F7E8][539880]); /*0x52fa1d*/
    goto LABEL_64; /*0x52fa25*/
  }
  if ( !strcmp(v5, a480) ) /*0x52fa37*/
  {
    MEMORY[0x87F7E8][539880] = 480; /*0x52fa5c*/
    goto LABEL_64; /*0x52fa66*/
  }
  if ( !strcmp(v5, a16) ) /*0x52fa78*/
  {
    g_Is16BitMode = 1; /*0x52fa9d*/
    goto LABEL_64; /*0x52faa4*/
  }
  if ( !_strcmpi(v5, aWin) ) /*0x52faac*/
  {
    LOBYTE(MEMORY[0x87F7E8][32868]) = 1; /*0x52fab8*/
    goto LABEL_64; /*0x52fabf*/
  }
  if ( _strnicmp(v5, asc_8264FC, strlen(aO)) ) /*0x52fad7*/
    goto LABEL_64; /*0x52fad7*/
  v13 = &v5[strlen(asc_8264FC)]; /*0x52faf0*/
  v14 = *v13; /*0x52faf2*/
  if ( !*v13 ) /*0x52faf2*/
    goto LABEL_64; /*0x52faf6*/
  while ( 1 ) /*0x52fafc*/
  {
    ++v13; /*0x52fafc*/
    if ( toupper(v14) != 81 ) /*0x52fb08*/
      break; /*0x52fb08*/
    LOBYTE(dword_A8ED54[4]) = 1; /*0x52fb0a*/
    v14 = *v13; /*0x52fb11*/
    if ( !*v13 ) /*0x52fb11*/
      goto LABEL_64; /*0x52fb15*/
  }
  v17 = GetStringCSF((#72 *)aTxtInvalid, 0, g_Str_File_Init_CPP, 3732); /*0x52fb52*/
LABEL_67:
  _putws(v17); /*0x52fb57*/
  return 0; /*0x52fb37*/
}


// ==== 0x0052FC20  ObjectClass::InitRandomSeed  this=ObjectClass  sig=csp ====
void InitRandomSeed()
{
  int v0; // eax
  _WORD SystemTime[10]; // [esp+8h] [ebp-408h] BYREF
  _DWORD v2[253]; // [esp+1Ch] [ebp-3F4h] BYREF

  Debug::Log(); /*0x52fc2d*/
  if ( MEMORY[0x87F7E8][536628] || (MEMORY[0x87F7E8][538500] & 2) != 0 || UI_Update() ) /*0x52fc4f*/
  {
    SeedInitRNG(v2, dword_A8ED54[16]); /*0x52fe66*/
    qmemcpy((void *)(MEMORY[0x87F7E8][536210] + 536), v2, 0x3F4u); /*0x52fe80*/
    SeedInitRNG(v2, dword_A8ED54[16]); /*0x52fe8d*/
    qmemcpy(&MEMORY[0x87F7E8][7400], v2, 0x3F4u); /*0x52feab*/
    Debug::Log(); /*0x52fead*/
  }
  else
  {
    if ( !MEMORY[0x87F7E8][536212] || MEMORY[0x87F7E8][536212] == 5 ) /*0x52fc68*/
    {
      ((void (__stdcall *)(_WORD *))GetSystemTime)(SystemTime); /*0x52fc73*/
      Random::AdvanceRandomBytes((char *)&MEMORY[0x87F7E8][539634], SystemTime[7]); /*0x52fc83*/
      SHA1TickRNG(&MEMORY[0x87F7E8][539634], SystemTime[6]); /*0x52fc98*/
      SHA1TickRNG(&MEMORY[0x87F7E8][539634], SystemTime[6] >> 1); /*0x52fcae*/
      SHA1TickRNG(&MEMORY[0x87F7E8][539634], SystemTime[6] >> 2); /*0x52fcc6*/
      SHA1TickRNG(&MEMORY[0x87F7E8][539634], SystemTime[6] >> 3); /*0x52fcde*/
      SHA1TickRNG(&MEMORY[0x87F7E8][539634], SystemTime[6] >> 4); /*0x52fcf5*/
      SHA1TickRNG(&MEMORY[0x87F7E8][539634], SystemTime[5]); /*0x52fd0a*/
      SHA1TickRNG(&MEMORY[0x87F7E8][539634], SystemTime[5] >> 1); /*0x52fd21*/
      SHA1TickRNG(&MEMORY[0x87F7E8][539634], SystemTime[5] >> 2); /*0x52fd38*/
      SHA1TickRNG(&MEMORY[0x87F7E8][539634], SystemTime[5] >> 3); /*0x52fd50*/
      SHA1TickRNG(&MEMORY[0x87F7E8][539634], SystemTime[5] >> 4); /*0x52fd68*/
      SHA1TickRNG(&MEMORY[0x87F7E8][539634], SystemTime[4]); /*0x52fd7c*/
      SHA1TickRNG(&MEMORY[0x87F7E8][539634], SystemTime[3]); /*0x52fd91*/
      SHA1TickRNG(&MEMORY[0x87F7E8][539634], SystemTime[2]); /*0x52fda6*/
      SHA1TickRNG(&MEMORY[0x87F7E8][539634], SystemTime[1]); /*0x52fdba*/
      SHA1TickRNG(&MEMORY[0x87F7E8][539634], SystemTime[0]); /*0x52fdcf*/
      v0 = dword_A8ED54[17]; /*0x52fdd4*/
      if ( !dword_A8ED54[17] ) /*0x52fddb*/
      {
        RandomStraw::Release(&MEMORY[0x87F7E8][539634], (int)&dword_A8ED54[16], 4); /*0x52fde9*/
        v0 = ((int (*)(void))GetTickCount)(); /*0x52fdee*/
      }
      dword_A8ED54[16] = v0; /*0x52fdf4*/
    }
    Debug::Log(); /*0x52fe05*/
    SeedInitRNG(v2, dword_A8ED54[16]); /*0x52fe17*/
    qmemcpy((void *)(MEMORY[0x87F7E8][536210] + 536), v2, 0x3F4u); /*0x52fe31*/
    SeedInitRNG(v2, dword_A8ED54[16]); /*0x52fe3e*/
    qmemcpy(&MEMORY[0x87F7E8][7400], v2, 0x3F4u); /*0x52fe51*/
  }
}


// ==== 0x0052FEC0  Screen::Capture  this=Screen  sig=csp ====
char __usercall Screen::Capture@<al>(char a1@<dl>, int a2@<ecx>, int a3@<ebx>, int a4@<ebp>)
{
  int v4; // edi
  int v5; // ebx
  int v6; // ebp
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  char result; // al
  int v10; // [esp+Ah] [ebp-1Ch]
  int v11; // [esp+Eh] [ebp-18h]
  int *v12; // [esp+12h] [ebp-14h]
  int v13[2]; // [esp+1Eh] [ebp-8h] BYREF
  int retaddr; // [esp+26h] [ebp+0h]

  v4 = a2; /*0x52fec5*/
  HIBYTE(v12) = a1; /*0x52fecb*/
  if ( !a2 ) /*0x52fecf*/
    v4 = MEMORY[0x87F7E8][7881]; /*0x52fed1*/
  (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)v4 + 24))(v4, 0, a4, a3); /*0x52fede*/
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 124))(v4); /*0x52fee8*/
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 128))(v4); /*0x52fef4*/
  v13[0] = 0; /*0x52fef6*/
  v13[1] = 0; /*0x52fefc*/
  retaddr = v5; /*0x52ff00*/
  v7 = (_DWORD *)__2_YAPAXI_Z(32); /*0x52ff08*/
  v8 = v7; /*0x52ff0d*/
  if ( v7 ) /*0x52ff14*/
  {
    v7[2] = v6; /*0x52ff16*/
    v7[1] = v5; /*0x52ff24*/
    v7[3] = 0; /*0x52ff27*/
    *v7 = &XSurface_Vtable; /*0x52ff2e*/
    v7[4] = 2; /*0x52ff34*/
    Buffer::Init(v7 + 5, 0, 2 * v5 * v6); /*0x52ff3b*/
    *v8 = &BSurface_Vtable; /*0x52ff40*/
  }
  else
  {
    v8 = 0; /*0x52ff48*/
  }
  Render_Draw((int)v8, v13, 0); /*0x52ff52*/
  (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v4 + 4))(v4, v8); /*0x52ff60*/
  if ( v8 ) /*0x52ff67*/
    (*(void (__thiscall **)(_DWORD *, int))*v8)(v8, 1); /*0x52ff6f*/
  result = HIBYTE(v12); /*0x52ff71*/
  if ( HIBYTE(v12) ) /*0x52ff77*/
    return Frame::Present(v4, 1, 0, v4, 0, v10, v11, v12); /*0x52ff7f*/
  return result; /*0x52ff84*/
}


// ==== 0x0052FF90  ObjectClass::Render_Load  this=ObjectClass  sig=csp ====
int __usercall Render_Load@<eax>(char *Source@<ecx>, char a2@<dl>, int a3@<ebp>)
{
  int result; // eax
  Frame *v6; // ecx
  int v7; // [esp+0h] [ebp-8h]
  int v8; // [esp+4h] [ebp-4h]

  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0x88730C] + 24))(MEMORY[0x88730C], 0); /*0x52ffa0*/
  result = ScoreScreen::DrawSHPBackground(Source, (int *)MEMORY[0x88730C], a2, a3, (int)&MEMORY[0x886080], v7, v8); /*0x52ffb0*/
  if ( a2 ) /*0x52ffb9*/
  {
    LOBYTE(v6) = 1; /*0x52ffc3*/
    return Frame::Present(v6, 0); /*0x52ffc5*/
  }
  return result; /*0x52ffb7*/
}


// ==== 0x0052FFD0  ObjectClass::method_52FFD0  this=ObjectClass  sig=csp ====
int __fastcall sub_52FFD0(char a1)
{
  int result; // eax
  Frame *v3; // ecx

  result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0x88730C] + 24))(MEMORY[0x88730C], 0); /*0x52ffdd*/
  if ( a1 ) /*0x52ffe3*/
  {
    LOBYTE(v3) = 1; /*0x52ffed*/
    return Frame::Present(v3, 0); /*0x52ffef*/
  }
  return result; /*0x52ffe2*/
}

