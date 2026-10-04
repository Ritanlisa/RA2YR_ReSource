// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x005200B0  InfantryClass::ProcessIdleDeploy  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::ProcessIdleDeploy(InfantryClass *this)
{
  int PanicDurationLeft; // eax
  int v3; // eax
  int v4; // eax
  AbstractClass *movementDestination; // eax

  if ( this->PanicDurationLeft > 0 ) /*0x5200bb*/
  {
    if ( !this->Type->Fearless ) /*0x5200c7*/
      --this->PanicDurationLeft; /*0x5200d1*/
    if ( !this->PanicDurationLeft /*0x5200ef*/
      && !this->?
      && (*((unsigned __int8 (__thiscall **)(InfantryClass *))this->FootClass + 171))(this) )
    {
      this->? = this->Type->?; /*0x520105*/
    }
    PanicDurationLeft = this->PanicDurationLeft; /*0x520113*/
    if ( this->Crawling ) /*0x52010b*/
    {
      if ( PanicDurationLeft < 50 ) /*0x52011e*/
      {
        v3 = this->SequenceAnim[0]; /*0x520124*/
        if ( v3 != 27 && v3 != 28 && v3 != 29 && v3 != 30 ) /*0x520148*/
          (*((void (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 7, 0, 0); /*0x520158*/
      }
    }
    else if ( PanicDurationLeft >= 50 ) /*0x520163*/
    {
      v4 = this->SequenceAnim[0]; /*0x520165*/
      if ( v4 != 27 && v4 != 28 && v4 != 29 && v4 != 30 ) /*0x52017d*/
      {
        if ( !(unsigned __int8)House::IsCurrentPlayer((House *)this->?) ) /*0x520185*/
          goto LABEL_42; /*0x520185*/
        if ( !this->? ) /*0x52018e*/
        {
          if ( !this->?[0] ) /*0x520198*/
            WinAPI::Wrapper(-2147467261); /*0x5201a7*/
          if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->?[0] + 16))(this->?[0]) ) /*0x5201b5*/
          {
LABEL_42:
            if ( !this->Type->Fraidycat ) /*0x5201c2*/
              (*((void (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 5, 0, 0); /*0x5201d6*/
          }
        }
      }
    }
  }
  LOBYTE(movementDestination) = this->Type->Fraidycat; /*0x5201e2*/
  if ( (_BYTE)movementDestination ) /*0x5201ea*/
  {
    if ( this->PanicDurationLeft > 50 ) /*0x5201f3*/
    {
      movementDestination = (AbstractClass *)this->SequenceAnim[0]; /*0x5201f5*/
      if ( movementDestination != (AbstractClass *)27 /*0x52020d*/
        && movementDestination != (AbstractClass *)28
        && movementDestination != (AbstractClass *)29
        && movementDestination != (AbstractClass *)30 )
      {
        LOBYTE(movementDestination) = this->?; /*0x52020f*/
        if ( !(_BYTE)movementDestination ) /*0x520217*/
        {
          if ( !this->?[0] ) /*0x520219*/
            WinAPI::Wrapper(-2147467261); /*0x520228*/
          LOBYTE(movementDestination) = (*(int (__stdcall **)(int))(*(_DWORD *)this->?[0] + 16))(this->?[0]); /*0x520236*/
          if ( !(_BYTE)movementDestination ) /*0x52023b*/
          {
            movementDestination = this->?; /*0x52023d*/
            if ( !movementDestination ) /*0x520245*/
              LOBYTE(movementDestination) = (*((char (__thiscall **)(InfantryClass *, _BYTE *, int, _DWORD))this->FootClass /*0x520254*/
                                             + 93))(
                                              this,
                                              &stru_A8EB00.?[1564],
                                              1,
                                              0);
          }
        }
      }
    }
  }
  return (char)movementDestination; /*0x52025a*/
}



// ==== 0x00520260  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_520260(TechnoClass *this)
{
  int v2; // eax
  _DWORD v4[3]; // [esp+4h] [ebp-Ch] BYREF

  v2 = *((_DWORD *)this + 373); /*0x520266*/
  if ( v2 && this->isInPlayfield[0] ) /*0x520270*/
    *(_BYTE *)(v2 + 130) = 1; /*0x52027a*/
  if ( *((_DWORD *)this + 373) ) /*0x520281*/
    return 0; /*0x520281*/
  if ( (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 388))(this) != 5 ) /*0x520298*/
    return 0; /*0x520298*/
  v4[0] = this->location[0]; /*0x5202a6*/
  v4[1] = this->location[1]; /*0x5202b2*/
  v4[2] = this->location[2]; /*0x5202b9*/
  if ( (unsigned __int8)Tactical::IsCellVisible((Tactical *)&dword_87F7E8, v4) ) /*0x5202c2*/
    return 0; /*0x5202e6*/
  (*(void (__thiscall **)(TechnoClass *))(this->vtable0 + 928))(this); /*0x5202cf*/
  (*(void (__thiscall **)(TechnoClass *))(this->vtable0 + 248))(this); /*0x5202d9*/
  return 1; /*0x5202e1*/
}



// ==== 0x005202F0  ObjectClass::ProcessTechnoSquadResponse  this=ObjectClass  sig=csp ====
char __thiscall ProcessTechnoSquadResponse(TechnoClass *this)
{
  int v2; // ecx
  ObjectClass *v3; // edi
  int *v4; // eax
  int vtable0; // edx
  int v6; // ebx
  int *v7; // eax
  _DWORD *v8; // ebx
  _DWORD *v9; // eax
  int *v10; // eax
  TeamClass *attachedTag; // ecx
  TechnoClass *v12; // ecx
  _DWORD *v14; // ebx
  _DWORD *v15; // eax
  int *v16; // eax
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
  int *v28; // eax
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

  if ( !*(_BYTE *)(this->health + 3781) ) /*0x5202ff*/
    return 0; /*0x5202ff*/
  v2 = *((_DWORD *)this + 361); /*0x52030d*/
  if ( !v2 ) /*0x520315*/
    return 0; /*0x520315*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 44))(v2) != 1 ) /*0x520323*/
    return 0; /*0x520323*/
  v3 = (ObjectClass *)*((_DWORD *)this + 361); /*0x520329*/
  if ( (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->owner, (int)v3) ) /*0x520336*/
    return 0; /*0x52033d*/
  v4 = (int *)(*(int (__thiscall **)(ObjectClass *, _DWORD *, TechnoClass *))(v3->vtable0 + 76))(v3, v40, this); /*0x52034d*/
  v37 = *v4; /*0x520352*/
  vtable0 = this->vtable0; /*0x520356*/
  v38 = v4[1]; /*0x52035b*/
  v6 = v4[2]; /*0x520361*/
  v7 = (int *)(*(int (__thiscall **)(TechnoClass *, _DWORD *))(vtable0 + 72))(this, v40); /*0x520369*/
  v37 = *v7; /*0x52036e*/
  v38 = v7[1]; /*0x520375*/
  if ( (int)abs32(v6 - v7[2]) >= dword_A8F240 /*0x5203f1*/
    || (v8 = (_DWORD *)(*(int (__thiscall **)(ObjectClass *, _DWORD *))(v3->vtable0 + 72))(v3, v40),
        v9 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, _BYTE *))(this->vtable0 + 72))(this, v41),
        v10 = Coord::Subtract((Coord *)v42, *v9 - *v8, v9[1] - v8[1], v9[2] - v8[2]),
        v37 = *v10,
        v38 = v10[1],
        v39 = v10[2],
        (int)Coord::Length((Coord *)&v37) >= 128) )
  {
    v14 = (_DWORD *)(*(int (__thiscall **)(ObjectClass *, _DWORD *))(v3->vtable0 + 72))(v3, v42); /*0x52048b*/
    v15 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, _BYTE *))(this->vtable0 + 72))(this, v41); /*0x520494*/
    v16 = Coord::Subtract((Coord *)v40, *v15 - *v14, v15[1] - v14[1], v15[2] - v14[2]); /*0x5204b4*/
    v37 = *v16; /*0x5204bb*/
    v38 = v16[1]; /*0x5204c6*/
    v39 = v16[2]; /*0x5204cd*/
    v17 = (int)Coord::Length((Coord *)&v37) < 512; /*0x5204d6*/
    v18 = *((_DWORD *)this + 413); /*0x5204db*/
    if ( v17 ) /*0x5204e1*/
    {
      if ( !v18 ) /*0x5204e9*/
        WinAPI::Wrapper(-2147467261); /*0x5204f0*/
      v19 = (int *)(*(int (__stdcall **)(_DWORD, _DWORD *))(**((_DWORD **)this + 413) + 20))( /*0x520503*/
                     *((_DWORD *)this + 413),
                     v42);
      v20 = *v19; /*0x520506*/
      v21 = v19[1]; /*0x52050e*/
      v22 = v19[2]; /*0x520511*/
      if ( v20 != dword_A8F200 || v21 != dword_A8F204 || v22 != dword_A8F208 ) /*0x520526*/
      {
        if ( !*((_DWORD *)this + 413) ) /*0x52052c*/
          WinAPI::Wrapper(-2147467261); /*0x52053b*/
        v23 = (int *)(*(int (__stdcall **)(_DWORD, _DWORD *))(**((_DWORD **)this + 413) + 20))( /*0x52054e*/
                       *((_DWORD *)this + 413),
                       v42);
        v24 = *v23; /*0x520551*/
        v25 = v23[1]; /*0x520553*/
        v26 = v3->vtable0; /*0x520559*/
        v39 = v23[2]; /*0x52055b*/
        v27 = (_DWORD *)(*(int (__thiscall **)(ObjectClass *, _BYTE *))(v26 + 72))(v3, v41); /*0x520566*/
        v28 = Coord::Subtract((Coord *)v40, *v27 - v24, v27[1] - v25, v27[2] - v39); /*0x520582*/
        v37 = *v28; /*0x520589*/
        v38 = v28[1]; /*0x520594*/
        v39 = v28[2]; /*0x52059b*/
        if ( (int)Coord::Length((Coord *)&v37) <= 128 ) /*0x5205a9*/
          return 0; /*0x5205a9*/
      }
      (*(void (__thiscall **)(TechnoClass *, _DWORD, int))(this->vtable0 + 1152))(this, *((_DWORD *)this + 361), 1); /*0x5205bc*/
    }
    else
    {
      if ( !v18 ) /*0x5205c9*/
        WinAPI::Wrapper(-2147467261); /*0x5205d0*/
      v29 = (int *)(*(int (__stdcall **)(_DWORD, _DWORD *))(**((_DWORD **)this + 413) + 20))( /*0x5205e3*/
                     *((_DWORD *)this + 413),
                     v42);
      v30 = *v29; /*0x5205e6*/
      v31 = v29[1]; /*0x5205ee*/
      v32 = v29[2]; /*0x5205f1*/
      if ( v30 != dword_A8F200 || v31 != dword_A8F204 || v32 != dword_A8F208 ) /*0x520606*/
      {
        if ( !*((_DWORD *)this + 413) ) /*0x52060c*/
          WinAPI::Wrapper(-2147467261); /*0x52061b*/
        v33 = (_DWORD *)(*(int (__stdcall **)(_DWORD, _DWORD *))(**((_DWORD **)this + 413) + 20))( /*0x52062e*/
                          *((_DWORD *)this + 413),
                          v42);
        v34 = *v33 / 256; /*0x52065a*/
        v35 = v33[1] / 256; /*0x52065d*/
        v36 = (_DWORD *)(*(int (__thiscall **)(ObjectClass *, _BYTE *, TechnoClass *))(v3->vtable0 + 76))(v3, v41, this); /*0x520663*/
        if ( (unsigned __int16)(*v36 / 256) == (_WORD)v34 && (unsigned __int16)(v36[1] / 256) == (_WORD)v35 ) /*0x52068c*/
          return 0; /*0x52068c*/
      }
    }
    (*(void (__thiscall **)(TechnoClass *, _DWORD, int))(this->vtable0 + 1152))(this, *((_DWORD *)this + 361), 1); /*0x52069b*/
    return 0; /*0x5206a4*/
  }
  attachedTag = (TeamClass *)v3->attachedTag; /*0x5203f7*/
  if ( attachedTag ) /*0x5203fc*/
    TeamClass::Update_0(attachedTag, 1, (int)this, dword_A8F1E0, 0, 0); /*0x52040c*/
  (*(void (__thiscall **)(ObjectClass *, int))(v3->vtable0 + 628))(v3, 3); /*0x520417*/
  (*(void (__thiscall **)(ObjectClass *, _DWORD))(v3->vtable0 + 220))(v3, 0); /*0x520423*/
  v12 = (TechnoClass *)this->attachedTag; /*0x520429*/
  if ( v12 ) /*0x52042e*/
  {
    if ( (unsigned __int8)TechnoClass::HasAnyMission(v12) ) /*0x520430*/
      ObjectClass::SetReference(v3, this->attachedTag); /*0x52043f*/
  }
  (*(void (__thiscall **)(ObjectClass *, int, int))(v3->vtable0 + 980))(v3, this->owner, 1); /*0x520451*/
  v3[4].parachute = *(_DWORD *)(this->health + 3576); /*0x520465*/
  (*(void (__thiscall **)(TechnoClass *))(this->vtable0 + 248))(this); /*0x52046d*/
  return 1; /*0x520473*/
}



// ==== 0x005206B0  ObjectClass::FireTechnoAtTarget  this=ObjectClass  sig=csp ====
void __thiscall FireTechnoAtTarget(TechnoClass *this)
{
  int target; // eax
  int m_Data; // edi
  char v4; // al
  int v5; // eax
  BuildingClass *v6; // esi
  int v9; // ecx
  int v10; // eax
  bool v11; // bl
  int v12; // eax
  int *v13; // eax
  _DWORD *v14; // eax
  char v15; // cl
  int v16; // edx
  int v17; // esi
  char v18; // al
  int v19; // eax
  _DWORD *v20; // eax
  CellClass *v21; // eax
  int v22; // [esp+2Ch] [ebp-38h]
  StreamClass v23; // [esp+3Ch] [ebp-28h] BYREF
  int v24; // [esp+50h] [ebp-14h]
  _BYTE v25[16]; // [esp+54h] [ebp-10h] BYREF

  target = this->target; /*0x5206b7*/
  if ( !target ) /*0x5206bf*/
  {
    *((_BYTE *)this + 1677) = 0; /*0x520ad2*/
    return; /*0x520ad2*/
  }
  m_Data = (*(int (__thiscall **)(TechnoClass *, int))(this->vtable0 + 740))(this, target); /*0x5206d0*/
  v4 = *((_BYTE *)this + 1677); /*0x5206d2*/
  v23.m_Data = m_Data; /*0x5206da*/
  if ( !v4 ) /*0x5206de*/
  {
    v5 = (*(int (__thiscall **)(TechnoClass *, int, int, int))(this->vtable0 + 960))(this, this->target, m_Data, 1); /*0x5206f3*/
    if ( v5 ) /*0x5206fb*/
    {
      if ( v5 == 5 ) /*0x520704*/
      {
        if ( TechnoClass::GetValue(this, m_Data) < 0 ) /*0x52072b*/
        {
          v6 = (BuildingClass *)this->target; /*0x520731*/
          if ( !v6 ) /*0x520739*/
            goto LABEL_12; /*0x520739*/
          if ( (v6->abstractFlags & 2) == 0 ) /*0x52073f*/
            goto LABEL_12; /*0x52073f*/
          if ( (*(int (__thiscall **)(int))(v6->vtable0 + 44))(this->target) != 15 ) /*0x52074b*/
            goto LABEL_12; /*0x52074b*/
          BuildingClass::GetHealthRatio(v6); /*0x52074f*/
          _ECX = dword_8871E0; /*0x520754*/
          __asm /*0x52075a*/
          {
            fcomp qword ptr [ecx+16F8h]
            fnstsw ax
          }
          if ( (_AX & 0x100) == 0 ) /*0x520765*/
LABEL_12:
            (*(void (__thiscall **)(TechnoClass *, _DWORD))(this->vtable0 + 968))(this, 0); /*0x520772*/
        }
      }
      else if ( v5 == 9 ) /*0x520709*/
      {
        (*(void (__thiscall **)(TechnoClass *, _DWORD))(this->vtable0 + 1116))(this, 0); /*0x520716*/
      }
      goto LABEL_46; /*0x52071c*/
    }
    if ( *(_BYTE *)(this->health + 3476) ) /*0x520795*/
    {
      v9 = *((_DWORD *)this + 413); /*0x5207a3*/
      *(_DWORD *)v23.__pad_0 = 0; /*0x5207b1*/
      if ( !v9 ) /*0x5207b9*/
        goto LABEL_20; /*0x5207b9*/
      v10 = StreamClass::Set2(&v23, (_DWORD *)this + 413); /*0x5207c0*/
      if ( v10 < 0 && v10 != -2147467262 ) /*0x5207ce*/
        WinAPI::Wrapper(v10); /*0x5207d1*/
      if ( !*(_DWORD *)v23.__pad_0 ) /*0x5207dc*/
LABEL_20:
        WinAPI::Wrapper(-2147467261); /*0x5207e3*/
      (*(void (__stdcall **)(_DWORD, _BYTE *))(**(_DWORD **)v23.__pad_0 + 12))(*(_DWORD *)v23.__pad_0, v25); /*0x5207f5*/
      v11 = memcmp(v25, &g_CLSID_JumpjetLocomotion, 0x10u) == 0; /*0x52080e*/
      if ( *(_DWORD *)v23.__pad_0 ) /*0x520813*/
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)v23.__pad_0 + 8))(*(_DWORD *)v23.__pad_0); /*0x520818*/
      if ( v11 ) /*0x52081e*/
      {
        (*(void (__thiscall **)(TechnoClass *, int, _DWORD, _DWORD))(this->vtable0 + 1368))(this, 26, 0, 0); /*0x52082b*/
        m_Data = v23.m_Data; /*0x520831*/
        goto LABEL_44; /*0x520835*/
      }
      m_Data = v23.m_Data; /*0x52083a*/
    }
    v12 = *((_DWORD *)this + 433); /*0x52083e*/
    if ( v12 == 27 || v12 == 28 || v12 == 29 || v12 == 30 ) /*0x520856*/
    {
      (*(void (__thiscall **)(TechnoClass *, int, _DWORD, _DWORD))(this->vtable0 + 1368))(this, 29, 0, 0); /*0x520861*/
      goto LABEL_44; /*0x520861*/
    }
    if ( this->airstrike && (v12 == 40 || v12 == 41) ) /*0x520878*/
    {
      this->animation[0] = 0; /*0x52087a*/
      goto LABEL_44; /*0x520884*/
    }
    if ( !m_Data ) /*0x520888*/
      goto LABEL_73; /*0x520888*/
    if ( *((_BYTE *)this + 1755) && *(_DWORD *)(*(_DWORD *)(this->health + 3644) + 1480) ) /*0x5208a0*/
    {
      (*(void (__thiscall **)(TechnoClass *, int, _DWORD, _DWORD))(this->vtable0 + 1368))(this, 41, 0, 0); /*0x5208b3*/
      goto LABEL_44; /*0x5208b3*/
    }
    if ( *(_DWORD *)(*(_DWORD *)(this->health + 3644) + 1444) ) /*0x5208c1*/
    {
      (*(void (__thiscall **)(TechnoClass *, int, _DWORD, _DWORD))(this->vtable0 + 1368))(this, 40, 0, 0); /*0x5208d4*/
    }
    else
    {
LABEL_73:
      if ( *((_BYTE *)this + 1755) ) /*0x5208d6*/
        (*(void (__thiscall **)(TechnoClass *, int, _DWORD, _DWORD))(this->vtable0 + 1368))(this, 8, 0, 0); /*0x5208eb*/
      else
        (*(void (__thiscall **)(TechnoClass *, int, _DWORD, _DWORD))(this->vtable0 + 1368))(this, 4, 0, 0); /*0x5208fe*/
    }
LABEL_44:
    v22 = this->target; /*0x520904*/
    *((_BYTE *)this + 1677) = 1; /*0x520912*/
    v13 = ObjectClass::CalcTargetFacing(this, &v23.m_Position, v22); /*0x520919*/
    FacingClass::Set_SyncLog((char *)this->primaryFacing, v13); /*0x520925*/
    if ( this->target == *((_DWORD *)this + 361) ) /*0x520938*/
    {
      FootClass::ClearPathIndex((FootClass *)this); /*0x52093c*/
      (*(void (__thiscall **)(TechnoClass *))(this->vtable0 + 1280))(this); /*0x520946*/
    }
  }
LABEL_46:
  v14 = (_DWORD *)this->health; /*0x52094c*/
  v15 = *((_BYTE *)this + 1755); /*0x520952*/
  v16 = v14[912]; /*0x52095a*/
  if ( v15 ) /*0x520960*/
    v16 = v14[913]; /*0x520962*/
  if ( m_Data ) /*0x52096a*/
  {
    if ( v15 ) /*0x52096e*/
    {
      if ( *(_DWORD *)(v14[911] + 1480) ) /*0x520976*/
        v16 = v14[915]; /*0x520980*/
    }
    else if ( *(_DWORD *)(v14[911] + 1444) ) /*0x520990*/
    {
      v16 = v14[914]; /*0x52099a*/
    }
  }
  if ( *((_BYTE *)this + 1677) && this->animation[0] == v16 ) /*0x5209b5*/
  {
    v17 = (*(int (__thiscall **)(TechnoClass *, int))(this->vtable0 + 740))(this, this->target); /*0x5209d0*/
    if ( (*(int (__thiscall **)(TechnoClass *, int, int, int))(this->vtable0 + 960))(this, this->target, v17, 1) ) /*0x5209de*/
    {
      v18 = *((_BYTE *)this + 1755); /*0x5209fd*/
      *((_BYTE *)this + 1677) = 0; /*0x520a03*/
      if ( v18 ) /*0x520a0c*/
      {
        (*(void (__thiscall **)(TechnoClass *, int, _DWORD, _DWORD))(this->vtable0 + 1368))(this, 2, 0, 0); /*0x520a17*/
      }
      else
      {
        v19 = *((_DWORD *)this + 433); /*0x520a19*/
        if ( v19 == 27 || v19 == 28 || v19 == 29 || v19 == 30 ) /*0x520a31*/
          (*(void (__thiscall **)(TechnoClass *, int, _DWORD, _DWORD))(this->vtable0 + 1368))(this, 28, 0, 0); /*0x520a3e*/
        else
          (*(void (__thiscall **)(TechnoClass *, _DWORD, _DWORD, _DWORD))(this->vtable0 + 1368))(this, 0, 0, 0); /*0x520a51*/
      }
    }
    else
    {
      (*(void (__thiscall **)(TechnoClass *, int, int))(this->vtable0 + 972))(this, this->target, v17); /*0x5209f5*/
    }
    if ( this->target ) /*0x520a57*/
    {
      if ( *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(TechnoClass *, _DWORD))(this->vtable0 + 1016))(this, 0) + 168) < dword_8871E0->URepairRate[0] ) /*0x520a83*/
      {
        v23.m_Size = this->location[0]; /*0x520a93*/
        v23.StreamClass_field_0C = this->location[1]; /*0x520a9f*/
        v24 = this->location[2]; /*0x520aab*/
        v20 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this->target + 72))(this->target, v25); /*0x520ab7*/
        v21 = Coord::To_Cell((Coord *)&dword_87F7E8, v20); /*0x520ac0*/
        Cell::ApplyDamage((Cell *)v21, (int)&v23.m_Size, 1, 0, 0); /*0x520ac7*/
      }
    }
  }
}



// ==== 0x00520AE0  Mission::ExecuteTechnoMissionAction  this=Mission  sig=csp ====
int __thiscall Mission::ExecuteTechnoMissionAction(Mission *this)
{
  int v2; // eax
  int v3; // ecx
  AnimClass *v4; // ebp
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
  int v18; // [esp+14h] [ebp-1Ch] BYREF
  _DWORD v19[3]; // [esp+18h] [ebp-18h] BYREF
  char v20; // [esp+24h] [ebp-Ch] BYREF

  v2 = *(_DWORD *)&this->__pad_5B8[268]; /*0x520ae9*/
  if ( v2 == -1 /*0x520b0d*/
    || *(_DWORD *)&this->__pad_C[236] >= *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&this->__pad_5B8[264] + 3644) + 36 * v2 + 4) )
  {
    switch ( v2 ) /*0x520b27*/
    {
      case 11: /*0x520b27*/
      case 12: /*0x520b27*/
      case 13: /*0x520b27*/
      case 14: /*0x520b27*/
      case 15: /*0x520b27*/
        v3 = *(_DWORD *)&this->__pad_5B8[264]; /*0x520bc6*/
        if ( *(_DWORD *)&this->__pad_C[236] < *(_DWORD *)(*(_DWORD *)(v3 + 3644) + 36 * v2 + 4) ) /*0x520bdf*/
          break; /*0x520bdf*/
        if ( *(int *)(v3 + 3680) > 0 ) /*0x520bed*/
        {
          v4 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x520bf9*/
          if ( !v4 ) /*0x520c00*/
            goto LABEL_20; /*0x520c00*/
          v5 = (unsigned int)Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) /*0x520c2d*/
             % *(_DWORD *)(*(_DWORD *)&this->__pad_5B8[264] + 3680);
          v6 = (char *)v19; /*0x520c37*/
          v7 = *(void **)(*(_DWORD *)(*(_DWORD *)&this->__pad_5B8[264] + 3668) + 4 * v5); /*0x520c3b*/
          v8 = *(_DWORD *)this->__pad_0; /*0x520c3e*/
          goto LABEL_19; /*0x520c40*/
        }
        if ( !*(_BYTE *)(v3 + 3757) ) /*0x520c42*/
        {
          v4 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x520c56*/
          if ( v4 ) /*0x520c5d*/
          {
            v7 = *(void **)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 292) /*0x520c91*/
                          + 4
                          * ((unsigned int)Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)
                           % *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 304)));
            v8 = *(_DWORD *)this->__pad_0; /*0x520c94*/
            v6 = &v20; /*0x520c96*/
LABEL_19:
            v9 = (int *)(*(int (__thiscall **)(Mission *, char *))(v8 + 72))(this, v6); /*0x520c9a*/
            AnimClass::ctor(v4, v7, v9, 0, 1, (void *)0x600, 0, 0); /*0x520ca4*/
          }
        }
LABEL_20:
        (*(void (__thiscall **)(Mission *))(*(_DWORD *)this->__pad_0 + 248))(this); /*0x520ca9*/
        break; /*0x520cb3*/
      case 20: /*0x520b27*/
      case 21: /*0x520b27*/
      case 36: /*0x520b27*/
        if ( *(_DWORD *)&this->__pad_C[236] >= *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&this->__pad_5B8[264] + 3644) /*0x520cd1*/
                                                         + 36 * v2
                                                         + 4) )
          (*(void (__thiscall **)(Mission *))(*(_DWORD *)this->__pad_0 + 248))(this); /*0x520cdb*/
        break; /*0x520ce1*/
      case 27: /*0x520b27*/
        (*(void (__thiscall **)(Mission *, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))(this, 28, 1, 0); /*0x520b38*/
        if ( !*(_BYTE *)(*(_DWORD *)&this->__pad_5B8[264] + 3785) ) /*0x520b44*/
          this->__pad_18C[280] = 1; /*0x520b4e*/
        Mission::GetMissionDelay(this); /*0x520b57*/
        break; /*0x520b5c*/
      case 31: /*0x520b27*/
        (*(void (__thiscall **)(Mission *, _DWORD, int, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))(this, 0, 1, 0); /*0x520b93*/
        if ( !*(_BYTE *)(*(_DWORD *)&this->__pad_5B8[264] + 3785) ) /*0x520b9f*/
          this->__pad_18C[280] = 0; /*0x520bad*/
        break; /*0x520bb4*/
      case 33: /*0x520b27*/
        break;
      case 34: /*0x520b27*/
        (*(void (__thiscall **)(Mission *, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))(this, 35, 1, 0); /*0x520bc1*/
        break; /*0x520bc1*/
      case 38: /*0x520b27*/
        if ( (*(int (__thiscall **)(Mission *))(*(_DWORD *)this->__pad_0 + 388))(this) != 10 ) /*0x520b6e*/
          goto LABEL_51; /*0x520b6e*/
        (*(void (__thiscall **)(Mission *, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))(this, 38, 1, 0); /*0x520b7e*/
        break; /*0x520b84*/
      default:
        if ( v2 != -1 ) /*0x520ce9*/
        {
          v10 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&this->__pad_5B8[264] + 3644) + 36 * v2 + 12); /*0x520cfa*/
          if ( v10 != -1 ) /*0x520d01*/
          {
            LOWORD(v18) = (_WORD)v10 << 13; /*0x520d11*/
            FacingClass::Set_SyncLog(&this->__pad_18C[508], &v18); /*0x520d16*/
          }
        }
        if ( !*(_DWORD *)&this->__pad_5B8[188] ) /*0x520d1b*/
          WinAPI::Wrapper(-2147467261); /*0x520d2a*/
        if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)&this->__pad_5B8[188] + 16))(*(_DWORD *)&this->__pad_5B8[188]) /*0x520d50*/
          && *(double *)&this->__pad_18C[1004] > 0.1 )
        {
          if ( this->__pad_5B8[291] ) /*0x520d52*/
            (*(void (__thiscall **)(Mission *, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))(this, 6, 1, 0); /*0x520d66*/
          else
            (*(void (__thiscall **)(Mission *, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))(this, 3, 1, 0); /*0x520d79*/
        }
        else
        {
          v11 = *(_DWORD *)&this->__pad_5B8[268]; /*0x520d7e*/
          if ( v11 != 40 && v11 != 41 || !*(_DWORD *)&this->__pad_18C[264] || !*(_DWORD *)&this->__pad_18C[296] ) /*0x520d98*/
            goto LABEL_44; /*0x520d98*/
          if ( !*(_DWORD *)&this->__pad_5B8[188] ) /*0x520da2*/
            WinAPI::Wrapper(-2147467261); /*0x520db1*/
          if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)&this->__pad_5B8[188] + 16))(*(_DWORD *)&this->__pad_5B8[188]) ) /*0x520dbf*/
          {
            if ( this->__pad_5B8[291] ) /*0x520dc6*/
              (*(void (__thiscall **)(Mission *, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))(this, 41, 1, 0); /*0x520dda*/
            else
              (*(void (__thiscall **)(Mission *, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))(this, 40, 1, 0); /*0x520df3*/
            this->__pad_5B8[213] = 0; /*0x520de0*/
          }
          else
          {
LABEL_44:
            v12 = *(_DWORD *)&this->__pad_5B8[268]; /*0x520e02*/
            if ( v12 == 27 || v12 == 28 || v12 == 29 || v12 == 30 ) /*0x520e1a*/
            {
              (*(void (__thiscall **)(Mission *, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))(this, 28, 1, 0); /*0x520e24*/
            }
            else if ( this->__pad_5B8[291] ) /*0x520e26*/
            {
              (*(void (__thiscall **)(Mission *, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))(this, 2, 1, 0); /*0x520e3a*/
            }
            else
            {
LABEL_51:
              (*(void (__thiscall **)(Mission *, _DWORD, int, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))(this, 0, 1, 0); /*0x520e42*/
            }
          }
        }
        break; /*0x520d6c*/
    }
  }
  if ( *(_DWORD *)&this->__pad_5B8[268] == 33 && !this->__pad_C[129] ) /*0x520e5b*/
    (*(void (__thiscall **)(Mission *, _DWORD, int, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))(this, 0, 1, 0); /*0x520e6f*/
  v13 = 0; /*0x520e81*/
  v14 = *(_DWORD *)(*(_DWORD *)&this->__pad_5B8[264] + 3644) + 36 * *(_DWORD *)&this->__pad_5B8[268]; /*0x520e8c*/
  result = *(_DWORD *)(v14 + 16); /*0x520e8f*/
  if ( result > 0 ) /*0x520e95*/
  {
    v16 = (int *)(v14 + 24); /*0x520e97*/
    do /*0x520ef2*/
    {
      if ( this->__pad_C[240] ) /*0x520e9a*/
      {
        v17 = *(_DWORD *)(v14 + 4); /*0x520eaa*/
        if ( v17 <= 1 ) /*0x520eac*/
          v17 = 1; /*0x520eae*/
        if ( *(_DWORD *)&this->__pad_C[236] % v17 == *(v16 - 1) ) /*0x520ebf*/
        {
          v19[0] = *(_DWORD *)&this->__pad_C[144]; /*0x520ecb*/
          v19[1] = *(_DWORD *)&this->__pad_C[148]; /*0x520ed6*/
          v19[2] = *(_DWORD *)&this->__pad_C[152]; /*0x520edd*/
          StartAudioControllerAt(*v16, v19, 0); /*0x520ee4*/
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



// ==== 0x00520F40  Mission::ProcessUnitMissionAI  this=Mission  sig=csp ====
char __thiscall Mission::ProcessUnitMissionAI(Mission *this)
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
  int (__stdcall ***v12)(_DWORD, void *, __int16 *); // eax
  int v13; // esi
  int v14; // eax
  int v15; // edi
  bool v16; // bl
  int v17; // eax
  int v19; // [esp+4Ch] [ebp-30h]
  int v20; // [esp+58h] [ebp-24h]
  __int16 v21; // [esp+5Ch] [ebp-20h] BYREF
  int v22; // [esp+60h] [ebp-1Ch] BYREF
  __int16 v23[2]; // [esp+64h] [ebp-18h] BYREF
  __int16 v24[2]; // [esp+68h] [ebp-14h] BYREF
  char v25[16]; // [esp+6Ch] [ebp-10h] BYREF

  if ( (*(int (__thiscall **)(Mission *))(*(_DWORD *)this->__pad_0 + 388))(this) == 2 ) /*0x520f53*/
  {
    if ( !*(_DWORD *)&this->__pad_5B8[188] ) /*0x520f55*/
      WinAPI::Wrapper(-2147467261); /*0x520f64*/
    if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)&this->__pad_5B8[188] + 16))(*(_DWORD *)&this->__pad_5B8[188]) ) /*0x520f72*/
    {
      v2 = *(_DWORD *)&this->__pad_18C[1048]; /*0x520f79*/
      v3 = *(_DWORD *)this->__pad_0; /*0x520f7f*/
      if ( v2 ) /*0x520f86*/
      {
        (*(void (__thiscall **)(Mission *, int, int))(v3 + 1152))(this, v2, 1); /*0x520f97*/
        (*(void (__thiscall **)(Mission *, _DWORD, int))(*(_DWORD *)this->__pad_0 + 1348))(this, 0, 1072693248); /*0x520fa9*/
      }
      else
      {
        (*(void (__thiscall **)(Mission *, _DWORD, int))(v3 + 1156))(this, 0, 1); /*0x520f8c*/
      }
    }
  }
  v4 = *(_DWORD *)&this->__pad_18C[1048]; /*0x520faf*/
  if ( v4 ) /*0x520fb7*/
  {
    v5 = (_DWORD *)(*(int (__thiscall **)(int, char *, Mission *))(*(_DWORD *)v4 + 76))(v4, v25, this); /*0x520fc5*/
    LOWORD(v22) = *v5 / 256; /*0x520fd8*/
    HIWORD(v22) = v5[1] / 256; /*0x520fec*/
    LOBYTE(v5) = this->__pad_5B8[292]; /*0x520ff1*/
    *(_DWORD *)v23 = v22; /*0x520ffd*/
    if ( !(_BYTE)v5 /*0x521022*/
      || (v6 = *(_DWORD *)this->__pad_0,
          v7 = (*(int (__thiscall **)(Mission *, int, int, _DWORD, int))(*(_DWORD *)this->__pad_0 + 452))(
                 this,
                 -1,
                 -1,
                 0,
                 1),
          (*(int (__thiscall **)(Mission *, int))(v6 + 428))(this, v7) != 7) )
    {
      if ( !*(_DWORD *)&this->__pad_5B8[188] ) /*0x521028*/
        WinAPI::Wrapper(-2147467261); /*0x521037*/
      if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)&this->__pad_5B8[188] + 16))(*(_DWORD *)&this->__pad_5B8[188]) /*0x521050*/
        && !this->__pad_18C[652] )
      {
        if ( *(_DWORD *)&this->__pad_18C[1048] ) /*0x52105e*/
        {
          if ( this->__pad_18C[585] ) /*0x52106c*/
          {
            v8 = (_DWORD *)(*(int (__thiscall **)(Mission *))(*(_DWORD *)this->__pad_0 + 76))(this); /*0x521086*/
            LOWORD(v20) = *v8 / 256; /*0x521099*/
            HIWORD(v20) = v8[1] / 256; /*0x5210af*/
            v9 = *(_DWORD *)this->__pad_0; /*0x5210b8*/
            v22 = v20; /*0x5210bb*/
            v19 = (*(int (__thiscall **)(Mission *))(v9 + 800))(this); /*0x5210c9*/
            v10 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], &v21) + 80) >> 8; /*0x5210de*/
            LOBYTE(v10) = v10 & 1; /*0x5210e1*/
            v11 = (*(int (__thiscall **)(Mission *, _DWORD, int, int))(*(_DWORD *)this->__pad_0 + 188))( /*0x5210e9*/
                    this,
                    0,
                    v10,
                    v19);
            if ( !MapSeed::CheckTileMatch( /*0x521133*/
                    (MapSeed *)&stru_87F5F0.__pad_58[416],
                    v24,
                    v23,
                    *(_DWORD *)(*(_DWORD *)&this->__pad_5B8[264] + 1460),
                    v11,
                    (char)v25,
                    0)
              && !*(_BYTE *)(*(_DWORD *)&this->__pad_5B8[264] + 3774)
              && (*(int (__thiscall **)(Mission *))(*(_DWORD *)this->__pad_0 + 388))(this) != 7 )
            {
              (*(void (__thiscall **)(Mission *, _DWORD, int))(*(_DWORD *)this->__pad_0 + 1152))(this, 0, 1); /*0x52113e*/
            }
          }
        }
      }
    }
  }
  if ( !*(_DWORD *)&this->__pad_5B8[188] ) /*0x521144*/
    WinAPI::Wrapper(-2147467261); /*0x521153*/
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)&this->__pad_5B8[188] + 168))(*(_DWORD *)&this->__pad_5B8[188]) ) /*0x521161*/
  {
    if ( !*(_BYTE *)(*(_DWORD *)&this->__pad_5B8[264] + 3476) ) /*0x521175*/
      goto LABEL_55; /*0x521175*/
    v12 = *(int (__stdcall ****)(_DWORD, void *, __int16 *))&this->__pad_5B8[188]; /*0x521183*/
    v22 = 0; /*0x52118d*/
    if ( !v12 ) /*0x521195*/
      goto LABEL_33; /*0x521195*/
    v13 = (**v12)(v12, &unk_818858, v24); /*0x5211a6*/
    if ( v13 >= 0 ) /*0x5211aa*/
    {
      v15 = *(_DWORD *)v24; /*0x5211b9*/
      ComPtr::Release_Alt((ComPtr *)&v22); /*0x5211c1*/
      v14 = v15; /*0x5211c6*/
    }
    else
    {
      ComPtr::Release_Alt((ComPtr *)&v22); /*0x5211b0*/
      v14 = 0; /*0x5211b5*/
    }
    v22 = v14; /*0x5211ca*/
    if ( v13 < 0 && v13 != -2147467262 ) /*0x5211d6*/
      WinAPI::Wrapper(v13); /*0x5211d9*/
    if ( !v14 ) /*0x5211e4*/
LABEL_33:
      WinAPI::Wrapper(-2147467261); /*0x5211eb*/
    (*(void (__stdcall **)(int, char *))(*(_DWORD *)v14 + 12))(v14, v25); /*0x5211fc*/
    v16 = memcmp(v25, &g_CLSID_JumpjetLocomotion, 0x10u) == 0; /*0x521215*/
    if ( v22 ) /*0x52121a*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v22 + 8))(v22); /*0x52121f*/
    if ( v16 ) /*0x521226*/
    {
      LOBYTE(v17) = this->__pad_5B8[213]; /*0x521228*/
      if ( !(_BYTE)v17 ) /*0x521230*/
      {
        if ( *(double *)&this->__pad_18C[1004] <= 0.8 ) /*0x521247*/
          LOBYTE(v17) = (*(char (__thiscall **)(Mission *, int, _DWORD, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))( /*0x52126b*/
                          this,
                          23,
                          0,
                          0);
        else
          LOBYTE(v17) = (*(char (__thiscall **)(Mission *, int, _DWORD, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))( /*0x521254*/
                          this,
                          24,
                          0,
                          0);
      }
    }
    else
    {
LABEL_55:
      if ( this->__pad_5B8[291] ) /*0x521277*/
        LOBYTE(v17) = (*(char (__thiscall **)(Mission *, int, _DWORD, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))( /*0x52128c*/
                        this,
                        6,
                        0,
                        0);
      else
        LOBYTE(v17) = (*(char (__thiscall **)(Mission *, int, _DWORD, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))( /*0x5212a3*/
                        this,
                        3,
                        0,
                        0);
    }
  }
  else
  {
    v17 = *(_DWORD *)&this->__pad_5B8[268]; /*0x5212af*/
    switch ( v17 ) /*0x5212c2*/
    {
      case 3: /*0x5212c2*/
      case 24: /*0x5212c2*/
      case 23: /*0x5212c2*/
        LOBYTE(v17) = (*(char (__thiscall **)(Mission *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))( /*0x521307*/
                        this,
                        0,
                        0,
                        0);
        break;
      case 6: /*0x5212c2*/
        LOBYTE(v17) = (*(char (__thiscall **)(Mission *, int, _DWORD, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))( /*0x5212d4*/
                        this,
                        2,
                        0,
                        0);
        break;
      case 17: /*0x5212c2*/
        LOBYTE(v17) = (*(char (__thiscall **)(Mission *, int, _DWORD, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))( /*0x5212f0*/
                        this,
                        16,
                        0,
                        0);
        break;
    }
  }
  return v17; /*0x52125a*/
}



// ==== 0x00521320  InfantryClass::GetIdleTimer  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::GetIdleTimer(InfantryClass *this)
{
  int v2; // eax
  InfantryTypeClass *v3; // eax
  __int16 *v5; // eax
  Concurrency::details::SchedulerBase *v6; // eax
  CellClass *NumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ; // edi
  int v8; // ecx
  void (__thiscall **vtable0)(InfantryClass *, void *); // edi
  __int16 *v10; // eax
  void *v11; // eax
  char *v12; // eax
  int v13; // eax
  char *v14; // eax
  int v15; // eax
  House *v16; // eax
  InfantryTypeClass *Type; // eax
  _DWORD *v18; // eax
  int v19; // edi
  int v20; // ebx
  int *v21; // eax
  int v22; // kr0C_4
  int v23; // eax
  char *MissionControl; // eax
  int v25; // eax
  _BYTE v26[4]; // [esp+Ch] [ebp-1Ch] BYREF
  _BYTE v27[12]; // [esp+10h] [ebp-18h] BYREF
  _BYTE v28[12]; // [esp+1Ch] [ebp-Ch] BYREF

  v2 = this->SequenceAnim[0]; /*0x521328*/
  if ( v2 != 27 && v2 != 28 && v2 != 29 && v2 != 30 ) /*0x521340*/
  {
    v16 = (House *)(*((int (__thiscall **)(InfantryClass *))this->FootClass + 15))(this); /*0x5214fb*/
    if ( !(unsigned __int8)House::IsCurrentPlayer(v16) ) /*0x521500*/
    {
      Type = this->Type; /*0x52150d*/
      if ( Type->Deployer ) /*0x521513*/
      {
        if ( Type->? ) /*0x521521*/
        {
          if ( Type->? <= -1 /*0x521574*/
            && !this->?
            && this->?
             + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3632)
                         + 4 * *(_DWORD *)&this->?->__pad_13C[72]) < *(int *)&stru_A8EB00.?[416] )
          {
            if ( !this->? /*0x5215f3*/
              || (v18 = (_DWORD *)(*((int (__thiscall **)(InfantryClass *, _BYTE *))this->FootClass + 18))(this, v27),
                  v19 = *v18 / 256,
                  v20 = v18[1] / 256,
                  v21 = (int *)(*((int (__thiscall **)(AbstractClass *, _BYTE *))this->?->FootClass::TechnoClass::vtable0
                                + 18))(
                                 this->?,
                                 v28),
                  v22 = *v21,
                  v23 = v21[1] / 256,
                  (unsigned __int16)(v22 / 256) == (_WORD)v19)
              && (_WORD)v23 == (_WORD)v20 )
            {
              if ( !HIBYTE(this->Type->?[0]) ) /*0x5215ff*/
              {
                if ( !this->?[0] ) /*0x52160d*/
                  WinAPI::Wrapper(-2147467261); /*0x52161c*/
                if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->?[0] + 16))(this->?[0]) ) /*0x52162a*/
                {
                  if ( !this->?[0] ) /*0x52165a*/
                    WinAPI::Wrapper(-2147467261); /*0x521669*/
                  (*(void (__stdcall **)(int))(*(_DWORD *)this->?[0] + 72))(this->?[0]); /*0x521677*/
                  this->ShouldDeploy = 1; /*0x52167c*/
                  MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x521683*/
                  LOWORD(v25) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x521691*/
                  return v25 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x5216ad*/
                }
                else
                {
                  (*((void (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 27, 0, 0); /*0x52163b*/
                  return *(_DWORD *)(this->Type->Sequence[0] + 976); /*0x521650*/
                }
              }
            }
          }
        }
      }
    }
    return -1; /*0x5216b8*/
  }
  v3 = this->Type; /*0x521346*/
  if ( v3->? > -1 ) /*0x521353*/
  {
    (*((void (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 31, 0, 0); /*0x52135f*/
    return *(_DWORD *)(this->Type->Sequence[0] + 1120); /*0x52137d*/
  }
  if ( !v3->? ) /*0x521386*/
    return -1; /*0x521386*/
  if ( HIBYTE(v3->?[0]) ) /*0x52138c*/
  {
    v5 = (__int16 *)(*((int (__thiscall **)(InfantryClass *, _BYTE *))this->FootClass + 110))(this, v26); /*0x5213a3*/
    v6 = (Concurrency::details::SchedulerBase *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v5); /*0x5213af*/
    NumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ = (CellClass *)_GetNumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ(v6); /*0x5213c1*/
    v8 = *(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(InfantryClass *, int))this->FootClass + 254))(this, 1) + 344); /*0x5213cb*/
    if ( !NumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ /*0x5213ee*/
      || CellClass::GetOccupiedRatio(NumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ) < v8 / 3 )
    {
      vtable0 = (void (__thiscall **)(InfantryClass *, void *))this->FootClass; /*0x5213f4*/
      v10 = (__int16 *)(*((int (__thiscall **)(InfantryClass *, _BYTE *))this->FootClass + 110))(this, v26); /*0x5213fd*/
      v11 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v10); /*0x521409*/
      vtable0[242](this, v11); /*0x521411*/
      if ( !(*((int (__thiscall **)(InfantryClass *, AbstractClass *, int, int))this->FootClass + 240))( /*0x521426*/
              this,
              this->?,
              1,
              1) )
      {
        (*((void (__thiscall **)(InfantryClass *, AbstractClass *, int))this->FootClass + 243))(this, this->?, 1); /*0x52143d*/
        (*((void (__thiscall **)(InfantryClass *, _DWORD))this->FootClass + 242))(this, 0); /*0x521449*/
        (*((void (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 29, 0, 0); /*0x521459*/
        return *(_DWORD *)(this->Type->Sequence[0] + 1048); /*0x521477*/
      }
      (*((void (__thiscall **)(InfantryClass *, _DWORD))this->FootClass + 242))(this, 0); /*0x52147e*/
    }
    v12 = MissionClass::GetMissionControl((MissionClass *)this); /*0x521486*/
    LOWORD(v13) = Math::RoundToInt(*((double *)v12 + 2) * 900.0); /*0x521494*/
    return v13 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 10, 20); /*0x5214b0*/
  }
  else
  {
    (*((void (__thiscall **)(InfantryClass *))this->FootClass + 266))(this); /*0x5214bd*/
    v14 = MissionClass::GetMissionControl((MissionClass *)this); /*0x5214c5*/
    LOWORD(v15) = Math::RoundToInt(*((double *)v14 + 2) * 900.0); /*0x5214d3*/
    return v15 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x5214ee*/
  }
}



// ==== 0x005216C0  TechnoClass::GetThreatValue_0  this=InfantryClass  sig=csp ====
// attributes: thunk
int __thiscall TechnoClass::GetThreatValue_0(TechnoClass *this)
{
  return TechnoClass::GetThreatValue(this);
}



// ==== 0x005216D0  InfantryClass::CanMoveFreely  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::CanMoveFreely(InfantryClass *this)
{
  char result; // al
  unsigned int v3; // eax

  result = TechnoClass::IsTimerExpired((TechnoClass *)this); /*0x5216d3*/
  if ( result ) /*0x5216da*/
  {
    if ( !this->?[0] ) /*0x5216de*/
      WinAPI::Wrapper(-2147467261); /*0x5216ed*/
    if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->?[0] + 16))(this->?[0]) ) /*0x5216fb*/
    {
      return 0; /*0x521702*/
    }
    else if ( this->Crawling ) /*0x521706*/
    {
      return 0; /*0x521710*/
    }
    else if ( this->? ) /*0x521714*/
    {
      return 0; /*0x52171e*/
    }
    else
    {
      v3 = this->SequenceAnim[0]; /*0x521722*/
      return v3 != 27 && v3 != 28 && v3 != 29 && v3 != 30 && (v3 < 2 || v3 == 16); /*0x52173c*/
    }
  }
  return result; /*0x5216dc*/
}



// ==== 0x00521760  InfantryClass::ParachuteTo  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ParachuteTo(InfantryClass *this, int a2)
{
  int result; // eax

  result = ObjectClass::ParachuteDrop((IUnknown *)this); /*0x521768*/
  if ( (_BYTE)result ) /*0x52176f*/
  {
    if ( (unsigned __int8)House::IsCurrentPlayer((House *)this->?) ) /*0x521777*/
      (*((void (__thiscall **)(InfantryClass *, int, _DWORD))this->FootClass + 122))(this, 5, 0); /*0x521788*/
    else
      (*((void (__thiscall **)(InfantryClass *, int, _DWORD))this->FootClass + 122))(this, 15, 0); /*0x521798*/
    result = (*((int (__thiscall **)(InfantryClass *, int, int, _DWORD))this->FootClass + 342))(this, 33, 1, 0); /*0x5217a8*/
    LOBYTE(result) = 1; /*0x5217ae*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x5217b4*/
  }
  return result; /*0x5217b0*/
}



// ==== 0x005217C0  InfantryClass::MarkCellPassability  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::MarkCellPassability(InfantryClass *this, _DWORD *a2)
{
  char v3; // bp
  CellClass *v4; // esi
  int result; // eax

  v3 = Input::OffsetToDirection((Input *)a2); /*0x5217d7*/
  v4 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2); /*0x5217e4*/
  if ( *(_DWORD *)&stru_A8EB00.?[1616] + Cell::GetGroundHeight(a2) <= a2[2] && (v4->flags[0] & 0x100) != 0 ) /*0x521803*/
  {
    LOBYTE(v4->altOccupationFlags) |= 1 << v3; /*0x521813*/
    result = (*((int (__thiscall **)(InfantryClass *))this->FootClass + 14))(this); /*0x52181d*/
    v4->altInfantryOwnerIndex = result; /*0x521820*/
  }
  else
  {
    LOBYTE(v4->occupationFlags) |= 1 << v3; /*0x521838*/
    result = (*((int (__thiscall **)(InfantryClass *))this->FootClass + 14))(this); /*0x521842*/
    v4->infantryOwnerIndex = result; /*0x521845*/
  }
  return result; /*0x521823*/
}



// ==== 0x00521850  InfantryClass::ClearCellPassability  this=InfantryClass  sig=csp ====
int __stdcall InfantryClass::ClearCellPassability(InfantryClass *this)
{
  char v1; // bl
  CellClass *v2; // esi
  int v3; // ecx
  int result; // eax

  v1 = Input::OffsetToDirection((Input *)this); /*0x521864*/
  v2 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], this); /*0x521871*/
  v3 = Cell::GetGroundHeight(this) + *(_DWORD *)&stru_A8EB00.?[1616]; /*0x52187e*/
  result = (int)this->?; /*0x521880*/
  if ( v3 > result ) /*0x521885*/
  {
    LOBYTE(result) = ~(1 << v1) & LOBYTE(v2->occupationFlags); /*0x5218c0*/
    LOBYTE(v2->occupationFlags) = result; /*0x5218c2*/
    if ( (result & 0x1C) == 0 ) /*0x5218ca*/
      v2->infantryOwnerIndex = -1; /*0x5218cc*/
  }
  else
  {
    LOBYTE(result) = ~(1 << v1) & LOBYTE(v2->altOccupationFlags); /*0x521897*/
    LOBYTE(v2->altOccupationFlags) = result; /*0x521899*/
    if ( (result & 0x1C) == 0 ) /*0x5218a1*/
      v2->altInfantryOwnerIndex = -1; /*0x5218a3*/
  }
  return result; /*0x5218aa*/
}



// ==== 0x005218E0  InfantryClass::GetDeployWeaponIndex  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::GetDeployWeaponIndex(InfantryClass *this, int a2)
{
  InfantryTypeClass *Type; // ecx
  int v4; // eax

  Type = this->Type; /*0x5218e3*/
  if ( !Type->? ) /*0x5218e9*/
    return TechnoClass::SelectWeapon((TechnoClass *)this); /*0x521955*/
  v4 = this->SequenceAnim[0]; /*0x5218f3*/
  if ( v4 == 27 || v4 == 28 || v4 == 29 || v4 == 30 ) /*0x52190b*/
    return Type->?; /*0x52190d*/
  if ( !this->? || *(_DWORD *)((*((int (__thiscall **)(InfantryClass *))this->FootClass + 33))(this) + 3408) == -1 ) /*0x521932*/
    return 0; /*0x521948*/
  return *(_DWORD *)((*((int (__thiscall **)(InfantryClass *))this->FootClass + 33))(this) + 3408); /*0x521913*/
}



// ==== 0x00521960  InfantryClass::LoadFromStream  this=InfantryClass  sig=csp ====
int __stdcall InfantryClass::LoadFromStream(InfantryClass *this, LPSTREAM pStm)
{
  InfantryClass *v2; // esi
  void **p_vtable1; // ebx
  int v4; // eax
  signed int v5; // eax
  int v6; // ecx
  char *i; // eax
  _DWORD *v8; // eax
  int result; // eax
  int v10; // edi
  int v11; // ebp
  int v12; // edi
  int vtable2; // eax

  v2 = this; /*0x521962*/
  p_vtable1 = &this->?; /*0x52196a*/
  this = (InfantryClass *)(*((int (__stdcall **)(void **))this->? + 4))(&this->?); /*0x52197b*/
  v4 = BuildingTypeClass::Dequeue(&g_BuildingLoadQueue_Array, (int *)&this); /*0x52197f*/
  if ( v4 ) /*0x521986*/
  {
    v5 = (signed int)(v4 - (unsigned int)g_BuildingLoadQueue_Array.TechnoTypeClass) >> 3; /*0x52198e*/
    if ( v5 != -1 ) /*0x521994*/
    {
      v6 = v5 + 1; /*0x521996*/
      for ( i = (char *)g_BuildingLoadQueue_Array.?; /*0x5219a0*/
            v6 < (int)g_BuildingLoadQueue_Array.?;
            i = (char *)g_BuildingLoadQueue_Array.? )
      {
        v8 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * v6++; /*0x5219a8*/
        *(v8 - 2) = *v8; /*0x5219ae*/
        *(v8 - 1) = v8[1]; /*0x5219b4*/
      }
      g_BuildingLoadQueue_Array.? = i - 1; /*0x5219c9*/
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = 0; /*0x5219ce*/
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = 0; /*0x5219de*/
      g_BuildingLoadQueue_Array.? = 0; /*0x5219e2*/
    }
  }
  result = ObjectClass::LoadFromStream_Common((int)v2, pStm); /*0x5219ee*/
  if ( result >= 0 ) /*0x5219f5*/
  {
    v10 = v2->?[0]; /*0x5219fb*/
    if ( v2 ) /*0x521a03*/
    {
      FootClass::PostLoadInit((FootClass *)v2, (int)&this); /*0x521a0c*/
      v2->FootClass = &InfantryClass::`vftable'; /*0x521a11*/
      *p_vtable1 = &InfantryClass::`vftable'; /*0x521a17*/
      v2->? = &InfantryClass::`vftable'; /*0x521a1d*/
      v2->? = &off_7EB02C; /*0x521a24*/
    }
    v11 = v2->?[0]; /*0x521a2c*/
    if ( v11 != v10 ) /*0x521a34*/
    {
      v2->?[0] = v10; /*0x521a38*/
      if ( v10 ) /*0x521a3e*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 4))(v10); /*0x521a43*/
      if ( v11 ) /*0x521a48*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(v11); /*0x521a4e*/
    }
    (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x521a54*/
    v12 = (*((int (__stdcall **)(void **))*p_vtable1 + 4))(p_vtable1); /*0x521a63*/
    vtable2 = (int)g_BuildingLoadQueue_Array.?; /*0x521a65*/
    if ( (int)g_BuildingLoadQueue_Array.? + 1 <= (int)g_BuildingLoadQueue_Array.? ) /*0x521a6e*/
      goto LABEL_18; /*0x521a6e*/
    if ( !g_BuildingLoadQueue_Array.? ) /*0x521a72*/
      vtable2 = 10; /*0x521a74*/
    if ( BuildingTypeClass::Enqueue((int)&g_BuildingLoadQueue_Array, vtable2) ) /*0x521a7f*/
    {
LABEL_18:
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = v12; /*0x521a93*/
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = v2; /*0x521aa1*/
      LOBYTE(g_BuildingLoadQueue_Array.?) = 0; /*0x521aab*/
      ++g_BuildingLoadQueue_Array.?; /*0x521ab2*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v2->Type); /*0x521ac3*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v2->?); /*0x521ad4*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v2->?); /*0x521ae5*/
    return 0; /*0x521aea*/
  }
  return result; /*0x521aec*/
}



// ==== 0x00521B00  InfantryClass::SaveLoad_Prefix  this=InfantryClass  sig=csp ====
int __stdcall InfantryClass::SaveLoad_Prefix(InfantryClass *this, LPPERSISTSTREAM pPStm, struct IPersistStreamVtbl *a3)
{
  return ObjectClass::SaveToStream_Common((ObjectClass *)this, pPStm, a3); /*0x521b14*/
}



// ==== 0x00521B20  InfantryClass::ResetMissionIfDone  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ResetMissionIfDone(InfantryClass *this)
{
  int result; // eax

  result = this->SequenceAnim[0]; /*0x521b20*/
  if ( result == 6 || result == 3 || result == 17 ) /*0x521b33*/
    this->SequenceAnim[0] = -1; /*0x521b35*/
  return result; /*0x521b3f*/
}



// ==== 0x00521B40  InfantryClass::ProcessMission16  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ProcessMission16(InfantryClass *this)
{
  int result; // eax
  void *vtable0; // eax

  LOBYTE(result) = this->ShouldDeploy; /*0x521b40*/
  if ( (_BYTE)result ) /*0x521b48*/
  {
    vtable0 = this->FootClass; /*0x521b4a*/
    this->ShouldDeploy = 0; /*0x521b52*/
    return (*((int (__stdcall **)(int, _DWORD, _DWORD))vtable0 + 342))(27, 0, 0); /*0x521b59*/
  }
  return result; /*0x521b5f*/
}



// ==== 0x00521B60  InfantryClass::CanInitiateDeploy  this=InfantryClass  sig=csp ====
bool __thiscall InfantryClass::CanInitiateDeploy(InfantryClass *this)
{
  int currentMission; // eax
  int v3; // esi

  currentMission = this->?; /*0x521b63*/
  if ( currentMission == 6 || currentMission == 21 || this->? || this->? ) /*0x521b89*/
    return 0; /*0x521b89*/
  if ( !this->?[0] ) /*0x521b93*/
    WinAPI::Wrapper(-2147467261); /*0x521ba2*/
  if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->?[0] + 128))(this->?[0]) /*0x521be7*/
    && (*((int (__thiscall **)(InfantryClass *))this->FootClass + 97))(this) != 5
    && (*((int (__thiscall **)(InfantryClass *))this->FootClass + 97))(this) != 15
    && ((*((int (__thiscall **)(InfantryClass *))this->FootClass + 97))(this) != 1 || this->?) )
  {
    return 0; /*0x521be7*/
  }
  v3 = this->SequenceAnim[0]; /*0x521bf1*/
  return v3 == -1 || byte_7EAF7C[4 * v3]; /*0x521c0b*/
}



// ==== 0x00521C10  InfantryClass::InitVoiceResponseTimer  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::InitVoiceResponseTimer(InfantryClass *this)
{
  int result; // eax

  result = (int)this->Type; /*0x521c13*/
  if ( !*(_BYTE *)(result + 3772) ) /*0x521c19*/
  {
    result = TechnoTypeClass::HasVoiceResponse((int *)this, 13); /*0x521c27*/
    if ( !(_BYTE)result ) /*0x521c2e*/
      this->PanicDurationLeft = 300; /*0x521c30*/
  }
  return result; /*0x521c3a*/
}



// ==== 0x00521C40  InfantryClass::ResetReloadIfNeeded  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ResetReloadIfNeeded(InfantryClass *this)
{
  int result; // eax

  result = (int)this->Type; /*0x521c40*/
  if ( !*(_BYTE *)(result + 3772) ) /*0x521c46*/
    this->PanicDurationLeft = 0; /*0x521c50*/
  return result; /*0x521c5a*/
}



// ==== 0x00521C60  InfantryClass::SetMissionOnCondition  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::SetMissionOnCondition(InfantryClass *this, int a2)
{
  if ( a2 == 1 ) /*0x521c65*/
    return (*((int (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 10, 0, 0); /*0x521c80*/
  else
    return (*((int (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 9, 0, 0); /*0x521c6f*/
}



// ==== 0x00521C90  InfantryClass::PowerDrainUpdate  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::PowerDrainUpdate(InfantryClass *this, int *a2)
{
  int v3; // edx
  int v4; // eax
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax

  FootClass::BeginPowerUpdate((FootClass *)this, a2); /*0x521c99*/
  Power::TimerProcess(this->SequenceAnim[0]); /*0x521ca7*/
  v3 = this->InfantryClass_field_timer_6C8[0]; /*0x521cac*/
  v4 = this->InfantryClass_field_timer_6C8[2]; /*0x521cb2*/
  if ( v3 != -1 ) /*0x521cbb*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v3 >= v4 ) /*0x521cc7*/
      v4 = 0; /*0x521ccd*/
    else
      v4 -= *(_DWORD *)&stru_A8EB00.?[416] - v3; /*0x521cc9*/
  }
  Power::TimerProcess(v4); /*0x521cd2*/
  Power::TimerProcess(this->PanicDurationLeft); /*0x521ce0*/
  LOBYTE(v5) = this->Technician; /*0x521ce5*/
  v6 = Power::FlagProcess((Power *)a2, v5); /*0x521cee*/
  LOBYTE(v6) = this->InfantryClass_field_bool_6DA; /*0x521cf3*/
  Power::FlagProcess((Power *)a2, v6); /*0x521cfc*/
  LOBYTE(v7) = this->Crawling; /*0x521d01*/
  Power::FlagProcess((Power *)a2, v7); /*0x521d0a*/
  LOBYTE(v8) = this->InfantryClass_field_bool_6DC; /*0x521d0f*/
  v9 = Power::FlagProcess((Power *)a2, v8); /*0x521d18*/
  LOBYTE(v9) = this->InfantryClass_field_bool_6DD; /*0x521d1d*/
  return Power::FlagProcess((Power *)a2, v9); /*0x521d2b*/
}



// ==== 0x00521D30  InfantryClass::GetTransformMatrix  this=InfantryClass  sig=csp ====
_DWORD *__thiscall InfantryClass::GetTransformMatrix(InfantryClass *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // ecx
  _BYTE v5[12]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = (_DWORD *)(*((int (__thiscall **)(InfantryClass *, _BYTE *, int, _DWORD, _DWORD, _DWORD))this->FootClass + 44))( /*0x521d5b*/
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
AnimClass *__thiscall InfantryClass::ComputeDeploySpeedFactor(InfantryClass *this)
{
  int v2; // ecx

  v2 = TechnoClass::ComputeSpeedFactorEx((double *)this); /*0x521d88*/
  if ( this->Crawling ) /*0x521d8a*/
  {
    if ( this->Type->Crawls ) /*0x521d9a*/
      return (AnimClass *)(((unsigned int)(((unsigned __int64)(1431655765LL * v2) >> 32) - v2) >> 31) /*0x521dbb*/
                         + ((int)(((unsigned __int64)(1431655765LL * v2) >> 32) - v2) >> 1)
                         + v2);
    v2 += v2 / 2; /*0x521dc3*/
  }
  return (AnimClass *)v2; /*0x521da9*/
}



// ==== 0x00521DD0  InfantryClass::CheckAndApplyBomb  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::CheckAndApplyBomb(InfantryClass *this)
{
  int result; // eax
  int (__stdcall ***v3)(_DWORD, void *, int *); // esi
  int v4; // esi
  int v5; // eax
  int v6; // edi
  int v7; // [esp+14h] [ebp-18h] BYREF
  int v8; // [esp+18h] [ebp-14h] BYREF
  char v9[16]; // [esp+1Ch] [ebp-10h] BYREF

  FootClass::vt_entry_4F4((FootClass *)this); /*0x521dd6*/
  result = (int)this->?; /*0x521ddb*/
  if ( result ) /*0x521de3*/
  {
    result = ObjectClass::DistanceTo((ObjectClass *)this, (int)this->?); /*0x521dec*/
    if ( result < 1024 ) /*0x521df6*/
    {
      result = (int)this->Type; /*0x521dfc*/
      if ( *(_BYTE *)(result + 3476) ) /*0x521e02*/
      {
        v3 = (int (__stdcall ***)(_DWORD, void *, int *))this->?[0]; /*0x521e10*/
        v7 = 0; /*0x521e16*/
        if ( !v3 ) /*0x521e20*/
          goto LABEL_12; /*0x521e20*/
        v4 = (**v3)(v3, &unk_818858, &v8); /*0x521e31*/
        if ( v4 >= 0 ) /*0x521e35*/
        {
          v6 = v8; /*0x521e49*/
          ComPtr::Release_Alt((ComPtr *)&v7); /*0x521e51*/
          v5 = v6; /*0x521e56*/
          v7 = v6; /*0x521e59*/
        }
        else
        {
          ComPtr::Release_Alt((ComPtr *)&v7); /*0x521e3b*/
          v5 = 0; /*0x521e40*/
          v7 = 0; /*0x521e42*/
        }
        if ( v4 < 0 && v4 != -2147467262 ) /*0x521e67*/
          WinAPI::Wrapper(v4); /*0x521e6a*/
        if ( !v5 ) /*0x521e75*/
LABEL_12:
          WinAPI::Wrapper(-2147467261); /*0x521e7c*/
        (*(void (__stdcall **)(int, char *))(*(_DWORD *)v5 + 12))(v5, v9); /*0x521e8d*/
        result = v7; /*0x521e90*/
        if ( v7 ) /*0x521e96*/
          return (*(int (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x521e9b*/
      }
    }
  }
  return result; /*0x521e9e*/
}



// ==== 0x00521EB0  InfantryClass::CheckDeployPath  this=InfantryClass  sig=csp ====
AnimClass *__thiscall InfantryClass::CheckDeployPath(InfantryClass *this)
{
  int v2; // esi
  AnimClass *result; // eax
  int *pathDirections; // ecx
  int *locomotor; // ebp
  int v6; // eax
  int InstanceCOM; // eax
  int v8; // eax
  int v9; // eax
  AnimClass *v10; // ecx
  _DWORD *v11; // eax
  LPVOID ppv; // [esp+30h] [ebp-1Ch] BYREF
  StreamClass v13; // [esp+34h] [ebp-18h] BYREF

  v2 = 0; /*0x521ebe*/
  if ( this->? ) /*0x521eb8*/
  {
    result = 0; /*0x521ec5*/
    pathDirections = this->?; /*0x521ec7*/
    do /*0x521ee1*/
    {
      if ( *pathDirections == -1 ) /*0x521ed2*/
        break; /*0x521ed2*/
      if ( *pathDirections == 8 ) /*0x521ed7*/
        break; /*0x521ed7*/
      ++v2; /*0x521ed9*/
      result = (AnimClass *)((char *)result + 1); /*0x521eda*/
      ++pathDirections; /*0x521edb*/
    }
    while ( (int)result < 24 ); /*0x521ee1*/
    if ( v2 >= 4 ) /*0x521ee6*/
      goto LABEL_38; /*0x521ee6*/
  }
  result = (AnimClass *)this->Type; /*0x521eec*/
  if ( !result->__pad_CD2[194] ) /*0x521ef2*/
    goto LABEL_38; /*0x521ef2*/
  locomotor = this->?; /*0x521f00*/
  InfantryClass::updateOccupiedBuilding((InfantryClass *)&v13, (int (__stdcall ****)(_DWORD, void *, _DWORD *))this->?); /*0x521f0b*/
  if ( !*(_DWORD *)v13.__pad_0 ) /*0x521f16*/
    WinAPI::Wrapper(-2147467261); /*0x521f1d*/
  (*(void (__stdcall **)(_DWORD, int *))(**(_DWORD **)v13.__pad_0 + 12))(*(_DWORD *)v13.__pad_0, &v13.m_Position); /*0x521f2e*/
  v13.m_Data = (void *)(memcmp(&v13.m_Position, &g_CLSID_JumpjetLocomotion, 0x10u) != 0); /*0x521f4e*/
  result = (AnimClass *)ComPtr::Release_Alt((ComPtr *)&v13); /*0x521f56*/
  if ( v13.m_Data ) /*0x521f68*/
    goto LABEL_38; /*0x521f68*/
  result = (AnimClass *)*locomotor; /*0x521f6e*/
  *(_DWORD *)v13.__pad_0 = 0; /*0x521f71*/
  if ( !result ) /*0x521f77*/
    goto LABEL_38; /*0x521f77*/
  v6 = StreamClass::Set(&v13, this->?); /*0x521f82*/
  if ( v6 < 0 && v6 != -2147467262 ) /*0x521f90*/
    WinAPI::Wrapper(v6); /*0x521f93*/
  result = *(AnimClass **)v13.__pad_0; /*0x521f98*/
  if ( !*(_DWORD *)v13.__pad_0 ) /*0x521f9e*/
    goto LABEL_38; /*0x521f9e*/
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)v13.__pad_0 + 28))(*(_DWORD *)v13.__pad_0) ) /*0x521fa7*/
    goto LABEL_36; /*0x521fac*/
  ppv = 0; /*0x521fbe*/
  InstanceCOM = CreateInstanceCOM((ObjectClass *)&ppv, (IID *)&g_CLSID_WalkLocomotion, 0, 7u); /*0x521fc2*/
  if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x521fd0*/
    WinAPI::Wrapper(InstanceCOM); /*0x521fd3*/
  if ( !ppv ) /*0x521fde*/
    WinAPI::Wrapper(-2147467261); /*0x521fe5*/
  (*(void (__stdcall **)(LPVOID, InfantryClass *))(*(_DWORD *)ppv + 12))(ppv, this); /*0x521ff2*/
  v13.m_Data = 0; /*0x521ff9*/
  if ( ppv ) /*0x521fff*/
  {
    v8 = StreamClass::Set((StreamClass *)&v13.m_Data, &ppv); /*0x52200a*/
    if ( v8 < 0 && v8 != -2147467262 ) /*0x522018*/
      WinAPI::Wrapper(v8); /*0x52201b*/
  }
  COMObject::SwapReference((COMObject *)&v13, (int)v13.m_Data); /*0x522029*/
  Release2COM((ObjectClass *)&v13.m_Data); /*0x522032*/
  v9 = *(_DWORD *)v13.__pad_0; /*0x522037*/
  if ( !*(_DWORD *)v13.__pad_0 ) /*0x52203d*/
  {
    result = (AnimClass *)ppv; /*0x5220c9*/
    if ( !ppv ) /*0x5220cf*/
    {
LABEL_38:
      LOBYTE(result) = 0; /*0x5220e5*/
      return result; /*0x5220e8*/
    }
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv); /*0x5220d4*/
LABEL_36:
    result = *(AnimClass **)v13.__pad_0; /*0x5220d7*/
    if ( *(_DWORD *)v13.__pad_0 ) /*0x5220dd*/
      result = (AnimClass *)(*(int (__stdcall **)(_DWORD))(**(_DWORD **)v13.__pad_0 + 8))(*(_DWORD *)v13.__pad_0); /*0x5220e2*/
    goto LABEL_38; /*0x5220e2*/
  }
  v10 = (AnimClass *)*locomotor; /*0x522043*/
  this->?[0] = -1; /*0x522046*/
  (*(void (__stdcall **)(int, AnimClass *))(*(_DWORD *)v9 + 12))(v9, v10); /*0x522054*/
  InfantryClass::checkBridgeClearance((InfantryClass *)this->?, (int)ppv); /*0x52205e*/
  v11 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, int *))this->?->FootClass::vtable0 + 18))( /*0x522070*/
                    this->?,
                    &v13.m_Position);
  if ( !*locomotor ) /*0x52207b*/
    WinAPI::Wrapper(-2147467261); /*0x522087*/
  (*(void (__stdcall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)*locomotor + 68))(*locomotor, *v11, v11[1], v11[2]); /*0x5220a0*/
  if ( ppv ) /*0x5220a9*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv); /*0x5220ae*/
  result = *(AnimClass **)v13.__pad_0; /*0x5220b1*/
  if ( *(_DWORD *)v13.__pad_0 ) /*0x5220b7*/
    result = (AnimClass *)(*(int (__stdcall **)(_DWORD))(**(_DWORD **)v13.__pad_0 + 8))(*(_DWORD *)v13.__pad_0); /*0x5220bc*/
  LOBYTE(result) = 1; /*0x5220bf*/
  return result; /*0x5220c1*/
}



// ==== 0x005220F0  InfantryClass::SetFlag1752  this=InfantryClass  sig=csp ====
void __thiscall InfantryClass::SetFlag1752(InfantryClass *this)
{
  this->PermanentBerzerk = 1; /*0x5220f0*/
}



// ==== 0x00522100  ObjectClass::method  this=ObjectClass  sig=csp ====
bool __thiscall sub_522100(TechnoClass *this)
{
  int (__stdcall ***v2)(_DWORD, void *, int *); // eax
  int v3; // esi
  int v4; // eax
  int v5; // edi
  bool v6; // bl
  int v7; // [esp+14h] [ebp-18h] BYREF
  int v8; // [esp+18h] [ebp-14h] BYREF
  _BYTE v9[16]; // [esp+1Ch] [ebp-10h] BYREF

  if ( !*(_BYTE *)(this->health + 3476) ) /*0x522109*/
    return 0; /*0x522113*/
  v2 = (int (__stdcall ***)(_DWORD, void *, int *))*((_DWORD *)this + 413); /*0x522119*/
  v7 = 0; /*0x522124*/
  if ( !v2 ) /*0x52212c*/
    goto LABEL_11; /*0x52212c*/
  v3 = (**v2)(v2, &unk_818858, &v8); /*0x52213d*/
  if ( v3 >= 0 ) /*0x522141*/
  {
    v5 = v8; /*0x522150*/
    ComPtr::Release_Alt((ComPtr *)&v7); /*0x522158*/
    v4 = v5; /*0x52215d*/
  }
  else
  {
    ComPtr::Release_Alt((ComPtr *)&v7); /*0x522147*/
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
bool __thiscall InfantryClass::CanDeployAtCell(InfantryClass *this, __int16 *a2, __int16 *a3)
{
  InfantryClass *v5; // eax
  _DWORD *v6; // eax
  signed int v7; // ecx
  __int64 v8; // rax
  int v9; // eax
  _DWORD *v10; // eax
  int v11; // ecx
  int v12; // eax

  (*((void (__thiscall **)(InfantryClass *))this->FootClass + 114))(this); /*0x5221d8*/
  if ( HouseClass::IonSensitivesShouldBeOffline() ) /*0x5221e4*/
    return 0; /*0x5221f3*/
  if ( (*((int (__thiscall **)(InfantryClass *))this->FootClass + 114))(this) > 0 ) /*0x522202*/
    return 1; /*0x522202*/
  if ( (unsigned __int8)House::IsCurrentPlayer((House *)this->?) ) /*0x52220e*/
  {
    v5 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x522221*/
    if ( v5 ) /*0x522228*/
    {
      if ( InfantryClass::ValidateAttackPosition(v5) ) /*0x52222c*/
        return 0; /*0x52223b*/
    }
  }
  v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a3); /*0x52224a*/
  if ( !MapSeed::CheckTileMatch((MapSeed *)&stru_87F5F0.__pad_58[416], a2, a3, 7, this->?, BYTE1(v6[80]) & 1, 0) ) /*0x52226b*/
    return 1; /*0x52226b*/
  if ( *a2 == *a3 && a2[1] == a3[1] ) /*0x522288*/
    return 0; /*0x522290*/
  v7 = abs32(a3[1] - a2[1]); /*0x5222a5*/
  v8 = *a3 - *a2; /*0x5222ac*/
  v9 = (HIDWORD(v8) ^ v8) - HIDWORD(v8); /*0x5222af*/
  if ( v9 <= v7 ) /*0x5222b3*/
    v9 = v7; /*0x5222b5*/
  if ( v9 == 1 ) /*0x5222ba*/
    return 0; /*0x5222c2*/
  if ( v9 >= 4 /*0x5222e3*/
    || !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], a2, 1)
    || !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], a3, 1) )
  {
    return 1; /*0x52232d*/
  }
  v10 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a3); /*0x5222f4*/
  LOBYTE(v11) = this->?; /*0x5222ff*/
  v12 = v10[80] >> 8; /*0x522305*/
  LOBYTE(v12) = v12 & 1; /*0x522308*/
  return Pathfinding::CalcDistance((int)&stru_87E790.__pad_D8[80], a2, a3, (int)this, v11, v12, 7) > 7; /*0x5221ed*/
}



// ==== 0x00522340  InfantryClass::CalculateApproachPath  this=InfantryClass  sig=csp ====
void *__thiscall InfantryClass::CalculateApproachPath(InfantryClass *this, char a2)
{
  int v3; // eax
  House *v5; // eax
  InfantryTypeClass *Type; // eax
  int DeployFireWeapon; // edi
  char v8; // bl
  int v9; // eax
  int v10; // eax

  if ( this->? ) /*0x522344*/
  {
    v3 = this->SequenceAnim[0]; /*0x522352*/
    if ( v3 != 27 && v3 != 28 && v3 != 29 && v3 != 30 ) /*0x52236a*/
      return FootClass::CalculateApproachPath((FootClass *)this, 0); /*0x522375*/
    v5 = (House *)(*((int (__thiscall **)(InfantryClass *))this->FootClass + 15))(this); /*0x52237c*/
    if ( !(unsigned __int8)House::IsCurrentPlayer(v5) ) /*0x522381*/
    {
      Type = this->Type; /*0x52238e*/
      if ( Type->Deployer ) /*0x522394*/
      {
        if ( Type->? ) /*0x5223a2*/
        {
          DeployFireWeapon = Type->?; /*0x5223b3*/
          v8 = (*((int (__thiscall **)(InfantryClass *, AbstractClass *, int))this->FootClass + 234))( /*0x5223ce*/
                 this,
                 this->?,
                 DeployFireWeapon);
          v9 = *(_DWORD *)(*((int (__thiscall **)(InfantryClass *, int))this->FootClass + 254))(this, DeployFireWeapon); /*0x5223d6*/
          if ( v9 ) /*0x5223db*/
          {
            if ( !*(_BYTE *)(v9 + 336) ) /*0x5223e1*/
            {
              v10 = this->SequenceAnim[0]; /*0x5223ef*/
              if ( v10 == 27 || v10 == 28 || v10 == 29 || v10 == 30 ) /*0x522407*/
              {
                if ( !v8 && !a2 ) /*0x522417*/
                {
                  (*((void (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 31, 0, 0); /*0x522427*/
                  return 0; /*0x522431*/
                }
              }
              else if ( v8 && !a2 ) /*0x522442*/
              {
                if ( !this->?[0] ) /*0x522444*/
                  WinAPI::Wrapper(-2147467261); /*0x522453*/
                if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->?[0] + 16))(this->?[0]) ) /*0x522461*/
                {
                  (*((void (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 27, 0, 0); /*0x522472*/
                  return 0; /*0x52247c*/
                }
                if ( !this->?[0] ) /*0x52247f*/
                  WinAPI::Wrapper(-2147467261); /*0x52248e*/
                (*(void (__stdcall **)(int))(*(_DWORD *)this->?[0] + 72))(this->?[0]); /*0x52249c*/
                this->ShouldDeploy = 1; /*0x5224a1*/
                MissionClass::GetMissionControl((MissionClass *)this); /*0x5224a8*/
                Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x5224bd*/
              }
            }
          }
        }
      }
    }
  }
  return 0; /*0x522373*/
}



// ==== 0x005224D0  InfantryClass::IsBridgeRepairEnabled  this=InfantryClass  sig=csp ====
bool __thiscall InfantryClass::IsBridgeRepairEnabled(InfantryClass *this)
{
  return this->Type->Engineer; /*0x5224dc*/
}



// ==== 0x005224E0  TechnoClass::GetTypeFlag  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::GetTypeFlag(TechnoClass *this)
{
  return *(_BYTE *)(this->airstrikeTimer + 3784); /*0x5224ec*/
}



// ==== 0x005224F0  TechnoClass::updateTurretRotation  this=TechnoClass  sig=csp ====
bool __thiscall TechnoClass::updateTurretRotation(TechnoClass *this)
{
  return *(_DWORD *)(this->airstrikeTimer + 1732) > -1; /*0x522504*/
}



// ==== 0x00522510  TechnoClass::IsMission27to30  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IsMission27to30(TechnoClass *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 433); /*0x522510*/
  return v1 == 27 || v1 == 28 || v1 == 29 || v1 == 30; /*0x52252c*/
}



// ==== 0x00522540  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_522540(TechnoClass *this)
{
  return *(_BYTE *)(this->health + 1708); /*0x52254c*/
}



// ==== 0x00522600  InfantryClass::FireAtTargetPos  this=InfantryClass  sig=csp ====
AnimClass *__thiscall InfantryClass::FireAtTargetPos(InfantryClass *this, int a2, int a3, int a4)
{
  void *vtable0; // eax
  int Strength; // [esp+0h] [ebp-4h] BYREF

  vtable0 = this->FootClass; /*0x52260d*/
  Strength = this->Type->?; /*0x52260f*/
  return (*((AnimClass *(__thiscall **)(InfantryClass *, int *, _DWORD, _DWORD, _DWORD, int, _DWORD, int))vtable0 + 91))( /*0x522639*/
           this,
           &Strength,
           0,
           *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
           0,
           1,
           0,
           a3);
}



// ==== 0x00522640  InfantryClass::GetProductionLimit  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::GetProductionLimit(InfantryClass *this, char a2)
{
  int result; // eax
  int v4; // eax

  if ( (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->?, (#375 *)dword_A83D4C) && !a2 ) /*0x52265e*/
    return (int)this->Type; /*0x522667*/
  result = (int)this->?; /*0x52266a*/
  if ( !result ) /*0x522672*/
  {
    if ( !dword_A83D4C ) /*0x52267b*/
      return *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3424); /*0x52267b*/
    v4 = *(_DWORD *)&dword_A83D4C->__pad_140[168]; /*0x52267d*/
    if ( !v4 ) /*0x522685*/
      return *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3416); /*0x522694*/
    if ( v4 == 1 ) /*0x52269a*/
      return *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3420); /*0x5226a3*/
    else
      return *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3424); /*0x5226b1*/
  }
  return result; /*0x522666*/
}



// ==== 0x005226C0  InfantryClass::GetProductionHouse  this=InfantryClass  sig=csp ====
void *__thiscall InfantryClass::GetProductionHouse(InfantryClass *this, char a2)
{
  void *result; // eax

  if ( (unsigned __int8)HouseClass::IsAlliedWith((HouseClass *)this->owner) && !a2 ) /*0x5226de*/
    return (void *)this->owner; /*0x5226e0*/
  result = (void *)this->disguisedAsHouse; /*0x5226ea*/
  if ( !result ) /*0x5226f2*/
    return dword_A83D4C; /*0x5226f4*/
  return result; /*0x5226e6*/
}



// ==== 0x00522700  InfantryClass::CaptureAttackerInfo  this=InfantryClass  sig=csp ====
void __thiscall InfantryClass::CaptureAttackerInfo(InfantryClass *this, int *a2)
{
  bool v3; // zf
  int v4; // eax

  if ( a2 && (*(int (__thiscall **)(int *))(*a2 + 44))(a2) == 15 ) /*0x522716*/
  {
    TechnoClass::ActivateEffect((TechnoClass *)this); /*0x52271b*/
    v3 = (*(unsigned __int8 (__thiscall **)(int *))(*a2 + 196))(a2) == 0; /*0x52272a*/
    v4 = *a2; /*0x52272c*/
    if ( v3 ) /*0x52272e*/
    {
      this->? = (ObjectTypeClass *)(*(int (__thiscall **)(int *))(v4 + 136))(a2); /*0x52275f*/
      this->? = (HouseClass *)(*(int (__thiscall **)(int *))(*a2 + 60))(a2); /*0x52276c*/
    }
    else
    {
      this->? = (ObjectTypeClass *)(*(int (__thiscall **)(int *, int))(v4 + 204))(a2, 1); /*0x52273a*/
      this->? = (HouseClass *)(*(int (__thiscall **)(int *, int))(*a2 + 208))(a2, 1); /*0x52274c*/
    }
  }
}



// ==== 0x00522780  InfantryClass::InitProductionLimits  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::InitProductionLimits(InfantryClass *this)
{
  int result; // eax
  HouseClass *owner; // eax
  int sideIndex; // eax

  result = (int)this->Type; /*0x522780*/
  if ( *(_BYTE *)(result + 3376) ) /*0x522786*/
  {
    owner = this->?; /*0x522790*/
    this->? = 1; /*0x522796*/
    this->? = owner; /*0x52279d*/
    sideIndex = owner->sideIndex; /*0x5227a3*/
    if ( sideIndex ) /*0x5227ab*/
    {
      if ( sideIndex == 1 ) /*0x5227c9*/
        result = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3420); /*0x5227cb*/
      else
        result = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3424); /*0x5227d8*/
      this->? = (ObjectTypeClass *)result; /*0x5227d1*/
    }
    else
    {
      result = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3416); /*0x5227b3*/
      this->? = (ObjectTypeClass *)result; /*0x5227b9*/
    }
  }
  else
  {
    this->? = 0; /*0x5227e5*/
  }
  return result; /*0x5227bf*/
}



// ==== 0x005227F0  InfantryClass::CanAttackTarget  this=InfantryClass  sig=csp ====
bool __thiscall InfantryClass::CanAttackTarget(InfantryClass *this)
{
  _DWORD *v2; // eax
  HouseClass *v3; // ebx
  int disguisedAsHouse; // esi
  bool result; // al
  int v6; // [esp+Ch] [ebp-14h]
  __int16 v7[2]; // [esp+10h] [ebp-10h] BYREF
  _BYTE v8[12]; // [esp+14h] [ebp-Ch] BYREF
  HouseClass *other; // [esp+24h] [ebp+4h]

  result = 0; /*0x5228a0*/
  if ( (*(unsigned __int8 (__thiscall **)(InfantryClass *))(this->vtable0 + 196))(this) ) /*0x5227fa*/
  {
    v2 = (_DWORD *)(*(int (__thiscall **)(InfantryClass *, _BYTE *))(this->vtable0 + 72))(this, v8); /*0x522811*/
    LOWORD(v6) = *v2 / 256; /*0x522824*/
    HIWORD(v6) = v2[1] / 256; /*0x52283c*/
    *(_DWORD *)v7 = v6; /*0x522845*/
    v3 = (HouseClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v7); /*0x52285f*/
    if ( !(unsigned __int8)HouseClass::IsAlliedWith((HouseClass *)this->owner) /*0x522870*/
      && !(unsigned __int8)HouseClass::HasType(v3, other->relatedTagsCount) )
    {
      disguisedAsHouse = this->disguisedAsHouse; /*0x522879*/
      if ( (HouseClass *)disguisedAsHouse == other /*0x52288a*/
        || !disguisedAsHouse
        || (unsigned __int8)HouseClass::IsAlliedWith(other) )
      {
        return 1; /*0x522802*/
      }
    }
  }
  return result; /*0x522893*/
}



// ==== 0x005228B0  ObjectClass::GetTypeVt40_0  this=InfantryClass  sig=csp ====
// attributes: thunk
int __thiscall ObjectClass::GetTypeVt40_0(ObjectClass *this)
{
  return TechnoClass::GetTypeVt40((TechnoClass *)this);
}



// ==== 0x005228C0  ObjectClass::GetTypeVt41_0  this=InfantryClass  sig=csp ====
// attributes: thunk
int __thiscall ObjectClass::GetTypeVt41_0(ObjectClass *this)
{
  return ObjectClass::GetTypeVt41(this);
}



// ==== 0x005228D0  InfantryClass::IsBombDeployMission  this=InfantryClass  sig=csp ====
AnimClass *__thiscall InfantryClass::IsBombDeployMission(InfantryClass *this)
{
  int v1; // eax
  AnimClass *result; // eax

  result = 0; /*0x5228fa*/
  if ( this->Type->Deployer ) /*0x5228d6*/
  {
    v1 = this->SequenceAnim[0]; /*0x5228e0*/
    if ( v1 == 27 || v1 == 28 || v1 == 29 || v1 == 30 ) /*0x5228f8*/
      return (AnimClass *)1; /*0x5228de*/
  }
  return result; /*0x5228ff*/
}



// ==== 0x00522910  TechnoClass::GarrisonBuilding  this=InfantryClass  sig=csp ====
void __thiscall TechnoClass::GarrisonBuilding(TechnoClass *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  void (__thiscall **vtable0)(TechnoClass *, int); // ebx
  int v11; // eax
  _BYTE v12[12]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = this->animation; /*0x52291a*/
  if ( *(_BYTE *)(v3 + 3764) ) /*0x522920*/
  {
    (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 53))(this); /*0x522931*/
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
    BuildingClass::UpdateThreatBounds((BuildingClass *)a2, v8); /*0x52298d*/
    if ( a2[421] == 1 ) /*0x522999*/
    {
      (*(void (__thiscall **)(_DWORD *, int))(*a2 + 292))(a2, 2); /*0x5229a2*/
      if ( (unsigned __int8)House::IsHumanPlayer((House *)this->owner) ) /*0x5229ae*/
      {
        VoxClass::FindAndPlay(&stru_8255B0, -1); /*0x5229c1*/
        v9 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v12); /*0x5229d0*/
        StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 444), v9, 0); /*0x5229e0*/
      }
    }
    if ( this->owner->currentPlayer ) /*0x5229ec*/
    {
      this->shouldGarrisonStructure = 0; /*0x5229f4*/
      this->shouldEnterOccupiable = 0; /*0x5229fa*/
    }
  }
  else if ( *(_BYTE *)(v3 + 3765) ) /*0x522a09*/
  {
    BuildingClass::AnimateUnloadUnits((BuildingClass *)a2, (int)this); /*0x522a18*/
    (*((void (__thiscall **)(TechnoClass *, _DWORD, int))this->RadioClass + 288))(this, 0, 1); /*0x522a24*/
    vtable0 = (void (__thiscall **)(TechnoClass *, int))this->RadioClass; /*0x522a2c*/
    v11 = (*(int (__thiscall **)(_DWORD *, _BYTE *, int, int))(*a2 + 72))(a2, v12, 1, 1); /*0x522a39*/
    vtable0[93](this, v11); /*0x522a3f*/
  }
}



// ==== 0x00522A50  nullsub_146  this=-  sig=csp ====
void __stdcall nullsub_146(int a1)
{
  ; /*0x522a50*/
}



// ==== 0x00522A60  TechnoClass::HandleSpecialAction  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::HandleSpecialAction(TechnoClass *this, int a2, int a3)
{
  int v4; // eax
  char *v5; // esi
  int v6; // eax
  char *v8; // esi
  _DWORD *v9; // eax
  __int16 v10[2]; // [esp+Ch] [ebp-10h] BYREF
  _BYTE v11[12]; // [esp+10h] [ebp-Ch] BYREF
  int v12; // [esp+20h] [ebp+4h]

  v4 = this->q1AE; /*0x522a6c*/
  if ( (*(_BYTE *)(v4 + 3434) || *(_BYTE *)(v4 + 3476)) /*0x522a93*/
    && a2 == 4475
    && (v5 = (char *)this - 8, (unsigned __int8)Team::AllMembersValid((Team *)((char *)this - 8))) )
  {
    (*(void (__thiscall **)(char *, int))(*(_DWORD *)v5 + 628))((char *)this - 8, 8); /*0x522aa2*/
    v6 = this->displayProductionTo[0]; /*0x522aa8*/
    if ( !v6 || v6 == this->q167 ) /*0x522ab8*/
    {
      FootClass::ClearPathIndex((FootClass *)((char *)this - 8)); /*0x522ad4*/
      (*(void (__thiscall **)(char *, _BYTE *, int, _DWORD))(*(_DWORD *)v5 + 372))( /*0x522ae6*/
        (char *)this - 8,
        &stru_A8EB00.?[1564],
        1,
        0);
      return 1; /*0x522aee*/
    }
    else
    {
      (*(void (__thiscall **)(char *, int, int))(*(_DWORD *)v5 + 1152))((char *)this - 8, v6, 1); /*0x522ac1*/
      return 1; /*0x522ac9*/
    }
  }
  else if ( *(_BYTE *)(this->q1AE + 3477) && a2 == 4476 ) /*0x522b11*/
  {
    v8 = (char *)this - 8; /*0x522b1a*/
    v9 = (_DWORD *)(*(int (__thiscall **)(char *, _BYTE *))(*((_DWORD *)this - 2) + 72))((char *)this - 8, v11); /*0x522b24*/
    LOWORD(v12) = *v9 / 256; /*0x522b37*/
    HIWORD(v12) = v9[1] / 256; /*0x522b4f*/
    *(_DWORD *)v10 = v12; /*0x522b58*/
    if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v10) + 80) & 0x100) != 0 ) /*0x522b70*/
      (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v8 + 460))((char *)this - 8, *(_DWORD *)&stru_A8EB00.?[1616]); /*0x522b7d*/
    else
      (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v8 + 460))((char *)this - 8, 0); /*0x522b8b*/
    (*(void (__thiscall **)(char *, int, int, _DWORD))(*(_DWORD *)v8 + 1368))((char *)this - 8, 36, 1, 0); /*0x522b9b*/
    return 1; /*0x522ba3*/
  }
  else
  {
    return 0; /*0x522bae*/
  }
}



// ==== 0x00522BC0  InfantryClass::CanEnterBuilding  this=InfantryClass  sig=csp ====
bool __thiscall InfantryClass::CanEnterBuilding(InfantryClass *this)
{
  int v2; // eax
  bool result; // al

  result = 0; /*0x522bfc*/
  if ( (*((int (__thiscall **)(InfantryClass *))this->FootClass + 97))(this) == 5 /*0x522bdd*/
    || (*((int (__thiscall **)(InfantryClass *))this->FootClass + 97))(this) == 11 )
  {
    v2 = this->SequenceAnim[0]; /*0x522bdf*/
    if ( !v2 || v2 == 9 || v2 == 10 || v2 == 32 ) /*0x522bf6*/
      return 1; /*0x522bdd*/
  }
  return result; /*0x522bfa*/
}



// ==== 0x00522C00  InfantryClass::StartBombDeploy  this=InfantryClass  sig=csp ====
AnimClass *__thiscall InfantryClass::StartBombDeploy(InfantryClass *this, char a2)
{
  AnimClass *result; // eax

  if ( a2 ) /*0x522c09*/
    return (*((AnimClass *(__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 32, 0, 0); /*0x522c09*/
  result = (AnimClass *)(*((int (__thiscall **)(InfantryClass *))this->FootClass + 225))(this); /*0x522c0d*/
  if ( (_BYTE)result ) /*0x522c15*/
    return (*((AnimClass *(__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 32, 0, 0); /*0x522c21*/
  return result; /*0x522c27*/
}



// ==== 0x00522CB0  TechnoClass::IsEnteringOrCapturingStructure  this=TechnoClass  sig=csp ====
BOOL __thiscall TechnoClass::IsEnteringOrCapturingStructure(TechnoClass *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 433); /*0x522cb0*/
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



// ==== 0x00522D00  SlaveManagerClass::Check  this=SlaveManagerClass  sig=csp ====
int __thiscall SlaveManagerClass::Check(SlaveManagerClass *this)
{
  int result; // eax

  if ( this->q02B != 10 ) /*0x522d07*/
    return (*((int (__thiscall **)(SlaveManagerClass *, int, _DWORD))this->AbstractClass + 122))(this, 10, 0); /*0x522d0f*/
  return result; /*0x522d15*/
}



// ==== 0x00522D20  SlaveManagerClass::VtableDispatch  this=SlaveManagerClass  sig=csp ====
int __thiscall SlaveManagerClass::VtableDispatch(SlaveManagerClass *this)
{
  return (*((int (__thiscall **)(SlaveManagerClass *, int, _DWORD))this->AbstractClass + 122))(this, 5, 0); /*0x522d2c*/
}



// ==== 0x00522D30  SlaveManagerClass::CheckIsOne  this=SlaveManagerClass  sig=csp ====
bool __thiscall SlaveManagerClass::CheckIsOne(SlaveManagerClass *this)
{
  return ((double (__thiscall *)(SlaveManagerClass *))*((_DWORD *)this->AbstractClass + 173))(this) == 1.0; /*0x522d47*/
}



// ==== 0x00522D50  InfantryClass::SlaveGiveMoney_RecordBalanceBefore  this=AbstractClass  sig=csp ====
int __thiscall InfantryClass::SlaveGiveMoney_RecordBalanceBefore(int *this, _DWORD *a2)
{
  int *v2; // ebp
  char v3; // bl
  int result; // eax
  int v5; // esi
  int v6; // edi
  float v10; // [esp+Ch] [ebp-Ch]
  int v11; // [esp+10h] [ebp-8h]
  float v12; // [esp+10h] [ebp-8h]
  float v13; // [esp+14h] [ebp-4h]

  v2 = this + 207; /*0x522d55*/
  v3 = 0; /*0x522d5e*/
  result = FirstFloatPositive((float *)this + 207); /*0x522d60*/
  v5 = result; /*0x522d65*/
  if ( result != -1 ) /*0x522d6a*/
  {
    do /*0x522e44*/
    {
      v6 = a2[135]; /*0x522d75*/
      v11 = *(_DWORD *)(v6 + 21388); /*0x522d89*/
      if ( !*(_BYTE *)(v6 + 492) && dword_A8B238[0] ) /*0x522d97*/
        v11 = *(_DWORD *)(*(_DWORD *)&dword_8871E0->__pad_C3C[1768] + 4 * *(_DWORD *)(v6 + 388)) /*0x522dae*/
            + *(_DWORD *)(v6 + 21388);
      if ( v5 == -1 ) /*0x522db5*/
      {
        v10 = 0.0; /*0x522dc5*/
      }
      else
      {
        FloatArray::Get(v2, v5); /*0x522dba*/
        __asm { fstp [esp+1Ch+var_C] } /*0x522dbf*/
      }
      __asm { fild [esp+1Ch+var_8] } /*0x522dcd*/
      _EAX = dword_8871E0; /*0x522dd1*/
      __asm /*0x522dd9*/
      {
        fmul dword ptr [eax+0F3Ch]
        fmul [esp+1Ch+var_C]
        fstp [esp+1Ch+var_8]
      }
      if ( v5 != -1 ) /*0x522de7*/
      {
        Float::SubtractClamped(v2, v10, v5); /*0x522df1*/
        __asm /*0x522df6*/
        {
          fst [esp+1Ch+var_4]
          fcomp ds:flt_7E1748
          fnstsw ax
        }
        if ( (_AX & 0x4100) == 0 ) /*0x522e05*/
        {
          v3 = 1; /*0x522e0f*/
          HouseClass::GiveTiberium_Storage((_DWORD *)v6, v13, v5); /*0x522e11*/
          __asm /*0x522e16*/
          {
            fstp st
            fld [esp+1Ch+var_8]
            fcomp ds:flt_7E1748
            fnstsw ax
          }
          if ( (_AX & 0x4100) == 0 ) /*0x522e27*/
          {
            HouseClass::GiveTiberium_Storage((_DWORD *)v6, v12, v5); /*0x522e31*/
            __asm { fstp st } /*0x522e36*/
          }
        }
      }
      result = FirstFloatPositive((float *)v2); /*0x522e3a*/
      v5 = result; /*0x522e3f*/
    }
    while ( result != -1 ); /*0x522e44*/
    if ( v3 ) /*0x522e4d*/
      return (*(int (__thiscall **)(_DWORD *))(*a2 + 1128))(a2); /*0x522e55*/
  }
  return result; /*0x522e5b*/
}



// ==== 0x00522E70  InfantryClass::ProcessTiberiumHarvest  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ProcessTiberiumHarvest(InfantryClass *this)
{
  double v1; // st7
  int (__thiscall **vtable0)(InfantryClass *); // edx
  Cell *v5; // ebx
  int v7; // ebp
  int v11; // eax
  float v12; // [esp+Ch] [ebp-1Ch]
  int v15; // [esp+24h] [ebp-4h]

  vtable0 = (int (__thiscall **)(InfantryClass *))this->FootClass; /*0x522e7b*/
  if ( this->Type->? ) /*0x522e7d*/
  {
    v5 = (Cell *)vtable0[111](this); /*0x522eb4*/
    if ( !(unsigned __int8)Cell::IsBridge2(v5) ) /*0x522eb8*/
      goto LABEL_13; /*0x522eb8*/
    (*((void (__thiscall **)(InfantryClass *))this->FootClass + 173))(this); /*0x522ec9*/
    __asm /*0x522ecf*/
    {
      fcomp ds:dbl_7E1718
      fnstsw ax
    }
    if ( (_AX & 0x4000) != 0 ) /*0x522eda*/
    {
LABEL_13:
      (*((void (__thiscall **)(InfantryClass *, _DWORD, _DWORD, _DWORD))this->FootClass + 342))(this, 0, 0, 0); /*0x522f98*/
      (*((void (__thiscall **)(InfantryClass *, int, _DWORD))this->FootClass + 122))(this, 5, 0); /*0x522fa6*/
      return 1; /*0x522fad*/
    }
    else
    {
      if ( this->SequenceAnim[0] != 38 ) /*0x522ee7*/
        (*((void (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 38, 0, 0); /*0x522ef3*/
      v7 = BuildingClass::FindByCellHash((BuildingClass *)v5); /*0x522f02*/
      _EAX = this->Type; /*0x522f04*/
      __asm { fild dword ptr [eax+800h] } /*0x522f10*/
      __asm { fstp [esp+14h+var_4] }
      Float4::Sum((int *)&this->?); /*0x522f1c*/
      __asm /*0x522f21*/
      {
        fsubr [esp+14h+var_4]
        fcomp ds:flt_7E2AC8
        fnstsw ax
      }
      if ( (_AX & 0x4100) != 0 ) /*0x522f30*/
      {
        _ECX = this->Type; /*0x522f3a*/
        __asm { fild dword ptr [ecx+800h] } /*0x522f40*/
        __asm { fstp [esp+14h+var_4] }
        Float4::Sum((int *)&this->?); /*0x522f4c*/
        __asm { fsubr [esp+14h+var_4] } /*0x522f51*/
      }
      else
      {
        __asm { fld ds:flt_7E2AC8 } /*0x522f32*/
      }
      LOWORD(v11) = Math::RoundToInt(v1); /*0x522f55*/
      v15 = CellClass::ReduceTiberium(&v5->Cell_field_0x0, v11); /*0x522f64*/
      if ( v15 > 0 ) /*0x522f68*/
      {
        __asm { fild [esp+14h+var_4] } /*0x522f6a*/
        __asm { fstp [esp+1Ch+var_1C]; float }
        Float::Accumulate((int *)&this->?, v12, v7); /*0x522f75*/
        __asm { fstp st } /*0x522f7a*/
      }
      return this->Type->HarvestRate; /*0x522f85*/
    }
  }
  else
  {
    ((void (__thiscall *)(InfantryClass *, _DWORD, _DWORD, _DWORD))vtable0[342])(this, 0, 0, 0); /*0x522e8f*/
    (*((void (__thiscall **)(InfantryClass *, int, _DWORD))this->FootClass + 122))(this, 5, 0); /*0x522e9d*/
    return 1; /*0x522ea4*/
  }
}



// ==== 0x00522FC0  SlaveManagerClass::IsMasterHarvester  this=SlaveManagerClass  sig=csp ====
bool __thiscall SlaveManagerClass::IsMasterHarvester(SlaveManagerClass *this)
{
  return (*((int (__thiscall **)(SlaveManagerClass *))this->AbstractClass + 97))(this) == 10; /*0x522fd2*/
}



// ==== 0x00522FE0  InfantryClass::CreateDeployLocomotor  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::CreateDeployLocomotor(InfantryClass *this, int a2, int a3, int a4)
{
  void (__thiscall **vtable0)(InfantryClass *, CellClass *, int); // edi
  CellClass *v6; // eax
  int InstanceCOM; // eax
  int v8; // eax
  LPVOID v9; // edi
  LPVOID v10; // eax
  int v11; // edx
  int v12; // eax
  void (__thiscall **v13)(InfantryClass *, CellClass *, int); // edi
  int v14; // edx
  CellClass *v15; // eax
  LPVOID ppv; // [esp+50h] [ebp-8h] BYREF
  int v18; // [esp+54h] [ebp-4h] BYREF

  if ( (*((unsigned __int8 (__thiscall **)(InfantryClass *))this->FootClass + 21))(this) /*0x52302c*/
    || (*((unsigned __int8 (__thiscall **)(InfantryClass *))this->FootClass + 88))(this)
    || this->?
    || (*((unsigned __int8 (__thiscall **)(InfantryClass *))this->FootClass + 117))(this)
    || (*((unsigned __int8 (__thiscall **)(InfantryClass *))this->FootClass + 118))(this) )
  {
    return 0; /*0x523239*/
  }
  if ( !this->?[0] ) /*0x52303a*/
    WinAPI::Wrapper(-2147467261); /*0x523049*/
  (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)this->?[0] + 156))(this->?[0], 0); /*0x523059*/
  (*((void (__thiscall **)(InfantryClass *, int *))this->FootClass + 61))(this, &a2); /*0x523068*/
  vtable0 = (void (__thiscall **)(InfantryClass *, CellClass *, int))this->FootClass; /*0x52306e*/
  this->? = 1; /*0x52307c*/
  v6 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2); /*0x523083*/
  vtable0[288](this, v6, 1); /*0x52308b*/
  if ( !this->?[0] ) /*0x523091*/
    WinAPI::Wrapper(-2147467261); /*0x5230ac*/
  (*(void (__stdcall **)(int, int, int, int))(*(_DWORD *)this->?[0] + 120))(this->?[0], a2, a3, a4); /*0x5230c7*/
  ppv = 0; /*0x5230d8*/
  InstanceCOM = CreateInstanceCOM((ObjectClass *)&ppv, (IID *)&g_CLSID_HoverLocomotion, 0, 7u); /*0x5230dc*/
  if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x5230ea*/
    WinAPI::Wrapper(InstanceCOM); /*0x5230ed*/
  v18 = 0; /*0x5230f6*/
  if ( ppv ) /*0x5230fc*/
  {
    v8 = StreamClass::Set((StreamClass *)&v18, &ppv); /*0x523107*/
    if ( v8 < 0 && v8 != -2147467262 ) /*0x523115*/
      WinAPI::Wrapper(v8); /*0x523118*/
  }
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2)->flags[0] & 0x100) != 0 ) /*0x523135*/
    a4 += *(_DWORD *)&stru_A8EB00.?[1616]; /*0x523143*/
  if ( !ppv ) /*0x52314d*/
    WinAPI::Wrapper(-2147467261); /*0x523154*/
  (*(void (__stdcall **)(LPVOID, InfantryClass *))(*(_DWORD *)ppv + 12))(ppv, this); /*0x523161*/
  if ( !v18 ) /*0x523170*/
    WinAPI::Wrapper(-2147467261); /*0x523177*/
  (*(void (__stdcall **)(int, int))(*(_DWORD *)v18 + 12))(v18, this->?[0]); /*0x523184*/
  v9 = (LPVOID)this->?[0]; /*0x523187*/
  v10 = ppv; /*0x52318d*/
  if ( v9 != ppv ) /*0x523193*/
  {
    this->?[0] = (int)ppv; /*0x523197*/
    if ( v10 ) /*0x52319d*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)v10 + 4))(v10); /*0x5231a2*/
    if ( v9 ) /*0x5231a7*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)v9 + 8))(v9); /*0x5231ac*/
  }
  v11 = a2; /*0x5231af*/
  v12 = a3; /*0x5231b3*/
  v13 = (void (__thiscall **)(InfantryClass *, CellClass *, int))this->FootClass; /*0x5231bd*/
  this->? = 1; /*0x5231c1*/
  this->?[0] = v11; /*0x5231c8*/
  v14 = a4; /*0x5231ca*/
  this->?[1] = v12; /*0x5231ce*/
  this->?[2] = v14; /*0x5231d6*/
  v15 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2); /*0x5231de*/
  v13[288](this, v15, 1); /*0x5231e6*/
  if ( !this->?[0] ) /*0x5231ec*/
    WinAPI::Wrapper(-2147467261); /*0x5231f9*/
  (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)this->?[0] + 156))(this->?[0], 0); /*0x523208*/
  if ( v18 ) /*0x523214*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v18 + 8))(v18); /*0x523219*/
  if ( ppv ) /*0x523222*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv); /*0x523227*/
  return 1; /*0x52322c*/
}



// ==== 0x00523250  InfantryClass::ComputeTransform  this=InfantryClass  sig=csp ====
_DWORD *__thiscall InfantryClass::ComputeTransform(InfantryClass *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  TechnoClass *transporter; // eax
  int v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  _DWORD v12[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( this->? /*0x52327b*/
    && (transporter = this->?) != 0
    && (v8 = TechnoClass::IndexOf((TechnoClass *)transporter->passengers, (int)this)) != 0 )
  {
    v9 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD *, int, _DWORD, _DWORD, _DWORD))this->?->RadioClass + 44))( /*0x5232a1*/
                     this->?,
                     v12,
                     -v8,
                     0,
                     0,
                     0);
  }
  else
  {
    v9 = TechnoClass::ComputeTransform((TechnoClass *)this, v12, a3, 0, 0, 0); /*0x5232c8*/
  }
  v10 = v9; /*0x5232cd*/
  *a2 = *v10; /*0x5232d8*/
  a2[1] = v10[1]; /*0x5232dd*/
  a2[2] = v10[2]; /*0x5232e5*/
  return a2; /*0x5232d5*/
}



// ==== 0x005232F0  InfantryClass::StubReturn1776  this=InfantryClass  sig=csp ====
int InfantryClass::StubReturn1776(InfantryClass *this)
{
  return 1776; /*0x5232f5*/
}



// ==== 0x00523300  InfantryClass::GetClassID  this=InfantryClass  sig=csp ====
int __stdcall InfantryClass::GetClassID(InfantryClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x523306*/
    return -2147467261; /*0x523308*/
  *a2 = 237448644; /*0x523316*/
  a2[1] = 298949647; /*0x52331e*/
  a2[2] = -1610610249; /*0x523327*/
  a2[3] = unk_7E968C; /*0x523330*/
  return 0; /*0x52330d*/
}



// ==== 0x00523340  InfantryClass::StubReturn15  this=InfantryClass  sig=csp ====
int InfantryClass::StubReturn15(InfantryClass *this)
{
  return 15; /*0x523345*/
}



// ==== 0x00523350  InfantryClass::ScalarDtor  this=InfantryClass  sig=csp ====
void **__thiscall InfantryClass::ScalarDtor(InfantryClass *this, char a2)
{
  InfantryClass::Destruct(this); /*0x523353*/
  if ( (a2 & 1) != 0 ) /*0x52335d*/
    __3_YAXPAX_Z(this); /*0x523360*/
  return &this->FootClass; /*0x52336a*/
}



// ==== 0x00523370  InfantryClass::checkBridgeClearance  this=InfantryClass  sig=csp ====
int *__thiscall InfantryClass::checkBridgeClearance(InfantryClass *this, int a2)
{
  void *vtable0; // edi

  vtable0 = this->FootClass; /*0x523378*/
  if ( this->FootClass != (void *)a2 ) /*0x52337c*/
  {
    this->FootClass = (void *)a2; /*0x523380*/
    if ( a2 ) /*0x523382*/
      (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x523387*/
    if ( vtable0 ) /*0x52338c*/
      (*(void (__stdcall **)(void *))(*(_DWORD *)vtable0 + 8))(vtable0); /*0x523391*/
  }
  return (int *)this; /*0x523396*/
}



// ==== 0x005233A0  COMObject::SwapReference  this=COMObject  sig=csp ====
int *__thiscall COMObject::SwapReference(COMObject *this, int a2)
{
  int v3; // edi

  v3 = *(_DWORD *)this->__pad_0; /*0x5233a8*/
  if ( *(_DWORD *)this->__pad_0 != a2 ) /*0x5233ac*/
  {
    *(_DWORD *)this->__pad_0 = a2; /*0x5233b0*/
    if ( a2 ) /*0x5233b2*/
      (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x5233b7*/
    if ( v3 ) /*0x5233bc*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3); /*0x5233c1*/
  }
  return (int *)this->__pad_0; /*0x5233c6*/
}



// ==== 0x005233D0  InfantryClass::updateOccupiedBuilding  this=InfantryClass  sig=csp ====
_DWORD *__thiscall InfantryClass::updateOccupiedBuilding(
        InfantryClass *this,
        int (__stdcall ****a2)(_DWORD, void *, _DWORD *))
{
  int (__stdcall ****v2)(_DWORD, void *, _DWORD *); // eax
  int (__stdcall ***v4)(_DWORD, void *, _DWORD); // eax
  int v5; // ebx
  void *v6; // edi

  v2 = a2; /*0x5233d0*/
  this->FootClass = 0; /*0x5233d8*/
  v4 = (int (__stdcall ***)(_DWORD, void *, _DWORD))*v2; /*0x5233de*/
  if ( v4 ) /*0x5233e2*/
  {
    v5 = (**v4)(v4, &unk_818858, &a2); /*0x5233f3*/
    if ( v5 >= 0 ) /*0x5233f7*/
    {
      v6 = a2; /*0x523410*/
      if ( this->FootClass ) /*0x52340d*/
        (*(void (__stdcall **)(void *))(*(_DWORD *)this->FootClass + 8))(this->FootClass); /*0x52341b*/
      this->FootClass = v6; /*0x52341e*/
    }
    else
    {
      if ( this->FootClass ) /*0x5233f9*/
        (*(void (__stdcall **)(void *))(*(_DWORD *)this->FootClass + 8))(this->FootClass); /*0x523402*/
      this->FootClass = 0; /*0x523405*/
    }
    if ( v5 < 0 && v5 != -2147467262 ) /*0x52342b*/
      WinAPI::Wrapper(v5); /*0x52342e*/
  }
  return &this->FootClass; /*0x523435*/
}



// ==== 0x00523440  BinaryArraySearch  this=AbstractClass  sig=csp ====
int __fastcall Array_BinarySearch(int a1, int a2, int *a3)
{
  int v3; // esi
  int v4; // ebx
  int v5; // edi

  v3 = a2; /*0x523445*/
  if ( a2 <= 0 ) /*0x523447*/
    return 0; /*0x523479*/
  v4 = *a3; /*0x52344d*/
  while ( 1 ) /*0x523456*/
  {
    v5 = *(_DWORD *)(a1 + 8 * (v3 / 2)); /*0x523456*/
    if ( v5 <= v4 ) /*0x52345e*/
      break; /*0x52345e*/
    v3 /= 2; /*0x523460*/
LABEL_7:
    if ( v3 <= 0 ) /*0x523472*/
      return 0; /*0x523472*/
  }
  if ( v5 != v4 ) /*0x523464*/
  {
    a1 += 8 * (v3 / 2) + 8; /*0x523466*/
    v3 += -1 - v3 / 2; /*0x52346e*/
    goto LABEL_7; /*0x52346e*/
  }
  return a1 + 8 * (v3 / 2); /*0x523474*/
}



// ==== 0x00523490  sub_523490  this=-  sig=ida-proto ====
void sub_523490()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x52349c*/
  dbl_A8F268 = Math::Sqrt(v0 + v0); /*0x5234ae*/
}



// ==== 0x005234C0  sub_5234C0  this=-  sig=ida-proto ====
void sub_5234C0()
{
  dbl_A8F2C0 = dbl_A8F268 / 60.0; /*0x5234cc*/
}



// ==== 0x005234E0  sub_5234E0  this=-  sig=ida-proto ====
void sub_5234E0()
{
  dbl_A8F2A8 = 1.0 / dbl_A8F2C0; /*0x5234ec*/
}



// ==== 0x00523500  sub_523500  this=-  sig=ida-proto ====
void sub_523500()
{
  dbl_A8F2A0 = 0.0174532925199433 * 45.0; /*0x52350c*/
}



// ==== 0x00523520  sub_523520  this=-  sig=ida-proto ====
void sub_523520()
{
  dbl_A8F270 = 0.0174532925199433 * 60.0; /*0x52352c*/
}



// ==== 0x00523540  sub_523540  this=-  sig=ida-proto ====
void sub_523540()
{
  dbl_A8F248 = 0.0174532925199433 * 90.0; /*0x52354c*/
}



// ==== 0x00523560  sub_523560  this=-  sig=ida-proto ====
__int64 sub_523560()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_A8F248 - dbl_A8F270); /*0x523572*/
  result = Math::RoundToInt(v0 * dbl_A8F268 * 0.5); /*0x523586*/
  dword_A8F2CC = result; /*0x52358b*/
  return result; /*0x523590*/
}



// ==== 0x005235A0  sub_5235A0  this=-  sig=ida-proto ====
void sub_5235A0()
{
  dbl_A8F278 = Math::ArcTan((double)dword_A8F2CC * 0.00390625); /*0x5235b7*/
}



// ==== 0x005235D0  sub_5235D0  this=-  sig=ida-proto ====
void sub_5235D0()
{
  dbl_A8F298 = Math::ArcTan((double)(2 * dword_A8F2CC) / dbl_A8F268); /*0x5235f2*/
}



// ==== 0x00523600  sub_523600  this=-  sig=ida-proto ====
__int64 sub_523600()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_A8F2CC) + 0.5); /*0x52361b*/
  dword_A8F2BC = result; /*0x523620*/
  return result; /*0x523626*/
}



// ==== 0x00523630  sub_523630  this=-  sig=ida-proto ====
int sub_523630()
{
  word_A8F260 = 0; /*0x523632*/
  word_A8F262 = 0; /*0x523638*/
  return 0; /*0x52363e*/
}



// ==== 0x00523640  sub_523640  this=-  sig=ida-proto ====
int sub_523640()
{
  dword_A8F280 = 0; /*0x523642*/
  dword_A8F284 = 0; /*0x523647*/
  dword_A8F288 = 0; /*0x52364c*/
  return 0; /*0x523651*/
}



// ==== 0x00523660  sub_523660  this=-  sig=ida-proto ====
int sub_523660()
{
  dword_A8F2B8 = 0; /*0x523665*/
  dword_A8F2B0 = 128; /*0x52366f*/
  dword_A8F2B4 = 128; /*0x523674*/
  return 128; /*0x523679*/
}



// ==== 0x00523680  sub_523680  this=-  sig=ida-proto ====
int sub_523680()
{
  dword_A8F250 = 0; /*0x523682*/
  dword_A8F254 = 0; /*0x523687*/
  dword_A8F258 = 0; /*0x52368c*/
  dword_A8F25C = 0; /*0x523691*/
  return 0; /*0x523696*/
}



// ==== 0x005236A0  InfantryTypeClass::Constructor  this=InfantryTypeClass  sig=csp ====
int __thiscall InfantryTypeClass::Constructor(int this, char *Source)
{
  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  _DWORD *v6; // edx
  int i; // eax

  TechnoTypeClass::ReadINI((char *)this, Source, 0); /*0x5236ae*/
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
  *(_DWORD *)(this + 3664) = &TypeList<AnimTypeClass const *>::`vftable'; /*0x523709*/
  AnimTypeVector::Constructor((_DWORD *)(this + 3692), 0, 0); /*0x523719*/
  *(_DWORD *)(this + 3712) = 10; /*0x52371e*/
  *(_DWORD *)(this + 3708) = 0; /*0x523721*/
  *(_DWORD *)(this + 3692) = &TypeList<AnimTypeClass const *>::`vftable'; /*0x523724*/
  VectorClass::Construct((_DWORD *)(this + 3720), 0, 0); /*0x523734*/
  *(_DWORD *)(this + 3740) = 10; /*0x523739*/
  *(_DWORD *)(this + 3736) = 0; /*0x52373c*/
  *(_DWORD *)(this + 3720) = &TypeList<int>::`vftable'; /*0x52373f*/
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
  *(_DWORD *)(this + 12) = &InfantryTypeClass::`vftable'; /*0x5237fb*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x523802*/
  v3 = dword_A8E358; /*0x523807*/
  if ( dword_A8E358 < dword_A8E350 /*0x523845*/
    || (byte_A8E355 || !dword_A8E350)
    && dword_A8E35C > 0
    && (v4 = (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8E348 + 8))(
               &dword_A8E348,
               dword_A8E350 + dword_A8E35C,
               0) == 0,
        v3 = dword_A8E358,
        !v4) )
  {
    dword_A8E358 = v3 + 1; /*0x52384a*/
    *((_DWORD *)dword_A8E34C + v3) = this; /*0x523854*/
    v3 = dword_A8E358; /*0x523857*/
  }
  v5 = 0; /*0x52385c*/
  if ( v3 <= 0 ) /*0x523860*/
  {
LABEL_11:
    v5 = -1; /*0x523874*/
  }
  else
  {
    v6 = dword_A8E34C; /*0x523862*/
    while ( *v6 != this ) /*0x52386a*/
    {
      ++v5; /*0x52386c*/
      ++v6; /*0x52386d*/
      if ( v5 >= v3 ) /*0x523872*/
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
_DWORD *__thiscall InfantryTypeClass::Constructor_523980(InfantryTypeClass *this, int a2)
{
  TechnoTypeClass::Construct((int)this, a2); /*0x523988*/
  this->DeadBodies[0] = (int)&TypeList<AnimTypeClass const *>::`vftable'; /*0x523992*/
  this->DeathAnims[0] = (int)&TypeList<AnimTypeClass const *>::`vftable'; /*0x523998*/
  this->VoiceComment[0] = (int)&TypeList<int>::`vftable'; /*0x52399e*/
  this->TechnoTypeClass = &InfantryTypeClass::`vftable'; /*0x5239a8*/
  this->? = &InfantryTypeClass::`vftable'; /*0x5239ae*/
  this->? = &InfantryTypeClass::`vftable'; /*0x5239b5*/
  this->? = &InfantryTypeClass::`vftable'; /*0x5239bc*/
  return &this->TechnoTypeClass; /*0x5239c5*/
}



// ==== 0x005239D0  InfantryClass::ProcessAnimation  this=InfantryTypeClass  sig=csp ====
int __thiscall InfantryClass::ProcessAnimation(InfantryClass *this)
{
  int v2; // eax
  void *v3; // eax
  void *v4; // eax
  void *v5; // eax
  InfantryClass *v7; // [esp+8h] [ebp-4h] BYREF

  this->FootClass = &InfantryTypeClass::`vftable'; /*0x5239d7*/
  this->? = &InfantryTypeClass::`vftable'; /*0x5239dd*/
  this->? = &InfantryTypeClass::`vftable'; /*0x5239e4*/
  this->? = &InfantryTypeClass::`vftable'; /*0x5239eb*/
  AbstractClass::AnnounceExpiredPointer(&this->FootClass, 1); /*0x5239f2*/
  v7 = this; /*0x523a07*/
  v2 = (*(int (__thiscall **)(_DWORD *, InfantryClass **))(dword_A8E348 + 16))(&dword_A8E348, &v7); /*0x523a0b*/
  if ( v2 != -1 && v2 < dword_A8E358 && v2 < --dword_A8E358 ) /*0x523a26*/
  {
    do /*0x523a3e*/
    {
      ++v2; /*0x523a2e*/
      *((_DWORD *)dword_A8E34C + v2 - 1) = *((_DWORD *)dword_A8E34C + v2); /*0x523a32*/
    }
    while ( v2 < dword_A8E358 ); /*0x523a3e*/
  }
  __3_YAXPAX_Z(*((void **)this + 911)); /*0x523a47*/
  this->qE3C = 0; /*0x523a51*/
  v3 = (void *)this->VoiceComment_Items; /*0x523a57*/
  this->qE88 = &VectorClass<int>::`vftable'; /*0x523a5f*/
  if ( v3 && this->VoiceComment_FlagByte ) /*0x523a6b*/
  {
    __3_YAXPAX_Z(v3); /*0x523a74*/
    this->VoiceComment_Items = 0; /*0x523a7c*/
  }
  this->VoiceComment_FlagByte = 0; /*0x523a82*/
  this->q3A4 = 0; /*0x523a88*/
  v4 = (void *)this->q39C; /*0x523a8e*/
  this->qE6C = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x523a94*/
  if ( v4 && this->DeathAnims_FlagByte ) /*0x523aa2*/
  {
    __3_YAXPAX_Z(v4); /*0x523aab*/
    this->q39C = 0; /*0x523ab3*/
  }
  this->DeathAnims_FlagByte = 0; /*0x523ab9*/
  this->DeathAnims_Capacity = 0; /*0x523abf*/
  v5 = (void *)this->DeadBodies_Items; /*0x523ac5*/
  this->VHPScan = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x523acb*/
  if ( v5 && this->DeadBodies_FlagByte ) /*0x523ad9*/
  {
    __3_YAXPAX_Z(v5); /*0x523ae2*/
    this->DeadBodies_Items = 0; /*0x523aea*/
  }
  this->DeadBodies_FlagByte = 0; /*0x523af2*/
  this->DeadBodies_Capacity = 0; /*0x523af8*/
  return TechnoTypeClass::DTOR((int)this); /*0x523b03*/
}



// ==== 0x00523B10  InfantryTypeClass::ConstructInfantry  this=InfantryTypeClass  sig=csp ====
InfantryClass *__thiscall InfantryTypeClass::ConstructInfantry(InfantryTypeClass *this, IUnknown *ppv)
{
  int v2; // edi
  int v4; // eax

  v4 = __2_YAPAXI_Z(0x6F0u); /*0x523b18*/
  if ( v4 ) /*0x523b22*/
    return (InfantryClass *)InfantryClass::Construct(v4, v2, (int)this, ppv); /*0x523b2c*/
  else
    return 0; /*0x523b35*/
}



// ==== 0x00523B40  InfantryTypeClass::CreateInfantry  this=InfantryTypeClass  sig=csp ====
char __thiscall InfantryTypeClass::CreateInfantry(InfantryTypeClass *this, __int16 *a2, IUnknown *ppv)
{
  int v3; // edi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  CellClass *v8; // eax
  int *v9; // eax
  int v10; // ecx
  int v11; // edx
  _DWORD v13[3]; // [esp+4h] [ebp-24h] BYREF
  _DWORD v14[3]; // [esp+10h] [ebp-18h] BYREF
  int v15[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v5 = __2_YAPAXI_Z(0x6F0u); /*0x523b4b*/
  if ( v5 ) /*0x523b55*/
  {
    v6 = InfantryClass::Construct(v5, v3, (int)this, ppv); /*0x523b68*/
    if ( v6 ) /*0x523b6c*/
    {
      v7 = a2[1] << 8; /*0x523b85*/
      v13[0] = (*a2 << 8) + 128; /*0x523b93*/
      v13[1] = v7 + 128; /*0x523b9b*/
      v13[2] = 0; /*0x523bb1*/
      v8 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v13); /*0x523bb9*/
      v9 = ObjectPlacement::CalcPosition((ObjectPlacement *)v8, v15, v13, 0, 0, 0); /*0x523bc0*/
      v14[0] = *v9; /*0x523bcf*/
      v10 = v9[1]; /*0x523bd5*/
      v14[1] = v10; /*0x523bd9*/
      v11 = v9[2]; /*0x523bdd*/
      v14[2] = v11; /*0x523be0*/
      if ( v14[0] != *(_DWORD *)&stru_A8EB00.?[1692] /*0x523bf4*/
        || v10 != *(_DWORD *)&stru_A8EB00.?[1696]
        || v11 != *(_DWORD *)&stru_A8EB00.?[1700] )
      {
        return (*(char (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v6 + 216))(v6, v14, 64); /*0x523c0b*/
      }
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 32))(v6, 1); /*0x523c14*/
    }
  }
  return 0; /*0x523c07*/
}



// ==== 0x00523C20  InfantryTypeClass::GetDimensions  this=InfantryTypeClass  sig=csp ====
int *__stdcall InfantryTypeClass::GetDimensions(InfantryTypeClass *this)
{
  if ( (stru_A8EB00.?[1764] & 1) == 0 ) /*0x523c2b*/
  {
    stru_A8EB00.?[1764] |= 1u; /*0x523c46*/
    *(_DWORD *)&stru_A8EB00.?[1704] = 0; /*0x523c4c*/
    *(_DWORD *)&stru_A8EB00.?[1708] = 2147450879; /*0x523c64*/
    atexit(nullsub_147); /*0x523c6a*/
  }
  return (int *)&stru_A8EB00.?[1704]; /*0x523c78*/
}



// ==== 0x00523C80  nullsub_147  this=-  sig=ida-proto ====
void __cdecl nullsub_147()
{
  ; /*0x523c80*/
}



// ==== 0x00523C90  Factory::FindExitCellByName  this=Factory  sig=csp ====
int __thiscall Factory::FindExitCellByName(Factory *this)
{
  int v2; // esi

  if ( !_strcmpi(this->__pad_0, g_Str__none_) ) /*0x523c9a*/
    return -1; /*0x523c9a*/
  if ( !_strcmpi(this->__pad_0, g_Str_none) ) /*0x523cac*/
    return -1; /*0x523cac*/
  v2 = 0; /*0x523cbd*/
  if ( dword_A8E358 <= 0 ) /*0x523cc1*/
    return -1; /*0x523ce6*/
  while ( _strcmpi((char *)(*((_DWORD *)dword_A8E34C + v2) + 36), this->__pad_0) ) /*0x523cda*/
  {
    if ( ++v2 >= dword_A8E358 ) /*0x523ce4*/
      return -1; /*0x523ce4*/
  }
  return v2; /*0x523ce6*/
}



// ==== 0x00523D00  AnimSequence::Parse  this=AnimSequence  sig=csp ====
unsigned __int8 **__thiscall AnimSequence::Parse(AnimSequence *this)
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
  int *v19; // [esp+10h] [ebp-114h]
  int v20; // [esp+14h] [ebp-110h]
  int v21; // [esp+18h] [ebp-10Ch]
  char Buffer[32]; // [esp+1Ch] [ebp-108h] BYREF
  char Destination[32]; // [esp+3Ch] [ebp-E8h] BYREF
  char v24[200]; // [esp+5Ch] [ebp-C8h] BYREF

  result = (unsigned __int8 **)INIClass::GetString( /*0x523d26*/
                                 (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
                                 (unsigned __int8 *)this + 504,
                                 aSequence,
                                 &g_INI_DefaultBuffer,
                                 Destination,
                                 32);
  if ( (int)result > 0 ) /*0x523d2d*/
  {
    v3 = *((_DWORD *)this + 911); /*0x523d33*/
    result = (unsigned __int8 **)&stru_8255B0.Name[6]; /*0x523d3f*/
    v4 = -12 - v3; /*0x523d44*/
    v21 = v3; /*0x523d48*/
    v19 = &stru_8255B0.Name[6]; /*0x523d4c*/
    v5 = (_DWORD *)(v3 + 12); /*0x523d50*/
    v20 = -12 - v3; /*0x523d53*/
    do /*0x524086*/
    {
      v6 = *result; /*0x523d5d*/
      v15 = g_INI_DefaultBuffer; /*0x523d61*/
      v16 = 0; /*0x523d65*/
      v17 = 0; /*0x523d6d*/
      v18 = 0; /*0x523d73*/
      if ( INIClass::GetString( /*0x523d8f*/
             (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
             (unsigned __int8 *)Destination,
             v6,
             &g_INI_DefaultBuffer,
             Buffer,
             32) > 0 )
      {
        sscanf(Buffer, "%d,%d,%d,%s", v5 - 3, v5 - 2, v5 - 1, &v15); /*0x523db0*/
        if ( !strcmp(aN, &v15) ) /*0x523dc7*/
        {
          *v5 = 0; /*0x523dee*/
        }
        else if ( !strcmp(aNe, &v15) ) /*0x523e05*/
        {
          *v5 = 1; /*0x523e2c*/
        }
        else if ( !strcmp(aE, &v15) ) /*0x523e47*/
        {
          *v5 = 2; /*0x523e6e*/
        }
        else if ( !strcmp(aSe, &v15) ) /*0x523e89*/
        {
          *v5 = 3; /*0x523eb0*/
        }
        else if ( !strcmp(aS_5, &v15) ) /*0x523ecb*/
        {
          *v5 = 4; /*0x523ef2*/
        }
        else if ( !strcmp(aSw, &v15) ) /*0x523f0d*/
        {
          *v5 = 5; /*0x523f34*/
        }
        else if ( !strcmp(g_Str_W, &v15) ) /*0x523f4c*/
        {
          *v5 = 6; /*0x523f73*/
        }
        else if ( !strcmp(aNw, &v15) ) /*0x523f8b*/
        {
          *v5 = 7; /*0x523fb2*/
        }
      }
      sprintf(v24, "%sSounds", (const char *)*v19); /*0x523fca*/
      if ( INIClass::GetString( /*0x523ff4*/
             (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
             (unsigned __int8 *)Destination,
             (unsigned __int8 *)v24,
             &g_INI_DefaultBuffer,
             Buffer,
             32) > 0 )
      {
        v7 = strtok(Buffer, asc_8258AC); /*0x524000*/
        while ( v7 ) /*0x52400a*/
        {
          v8 = atoi(v7); /*0x524019*/
          v9 = strtok(0, asc_8258AC); /*0x52401b*/
          if ( !v9 ) /*0x524025*/
            break; /*0x524025*/
          Index = VocClass::FindIndex((VocClass *)v9); /*0x524035*/
          v7 = strtok(0, asc_8258AC); /*0x524037*/
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
char __userpurge InfantryTypeClass::LoadFromINI@<al>(InfantryTypeClass *this, double a2@<st0>, unsigned __int8 ***a3)
{
  int v3; // ecx
  int v4; // esi
  int PipIdx; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  unsigned __int8 *inited; // eax
  DynamicVectorClass *v11; // eax
  char *i; // eax
  int v13; // ecx
  int v14; // edx
  char *j; // eax
  char Bool_Overwrite; // al
  int v17; // ebx
  int Index; // eax
  int v19; // ebx
  int v20; // eax
  char v21; // al
  char v22; // cl
  char v23; // al
  char v24; // al
  char v25; // cl
  char v26; // al
  int Int_Overwrite; // eax
  char v28; // cl
  char v29; // al
  char v30; // al
  char v31; // cl
  char v32; // al
  char v33; // al
  char v34; // cl
  char v35; // al
  char v36; // al
  char v37; // cl
  char v38; // al
  char v39; // al
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  DynamicVectorClass v44; // [esp-1Ch] [ebp-E8h] BYREF
  int v45; // [esp-4h] [ebp-D0h]
  unsigned __int8 ***v46; // [esp+0h] [ebp-CCh]
  DynamicVectorClass *INIClassIntList; // [esp+10h] [ebp-BCh] BYREF
  DynamicVector v48; // [esp+14h] [ebp-B8h] BYREF
  int v49; // [esp+40h] [ebp-8Ch]
  int v50; // [esp+44h] [ebp-88h]
  int v51; // [esp+48h] [ebp-84h]
  char String[128]; // [esp+4Ch] [ebp-80h] BYREF

  v4 = v3; /*0x5240b0*/
  INIClass::ResetSection((INIClass *)this); /*0x5240b5*/
  v45 = (int)this; /*0x5240ba*/
  *(_BYTE *)(v4 + 3215) = 0; /*0x5240bd*/
  if ( !(unsigned __int8)ObjectTypeClass::LoadExtras((TechnoTypeClass *)v45, a2, v46) ) /*0x5240c4*/
    return 0; /*0x524751*/
  *(_DWORD *)(v4 + 3580) = INIClass::GetPipIdx( /*0x5240e8*/
                             (INIClass *)this,
                             (unsigned __int8 *)(v4 + 36),
                             aPip,
                             *(_DWORD *)(v4 + 3580));
  PipIdx = INIClass::GetPipIdx((INIClass *)this, (unsigned __int8 *)(v4 + 36), aOccupypip, *(_DWORD *)(v4 + 3584)); /*0x5240fd*/
  v6 = *(_DWORD *)(v4 + 3588); /*0x524102*/
  v45 = 128; /*0x52410c*/
  v44.CapacityIncrement = (int)String; /*0x524111*/
  v44.Count = (int)&g_INI_DefaultBuffer; /*0x524112*/
  v44.? = (int)aOccupyweapon; /*0x524117*/
  *(_DWORD *)&v44.?[3] = v4 + 36; /*0x52411c*/
  *(_DWORD *)(v4 + 3584) = PipIdx; /*0x52411f*/
  if ( INIClass::GetString( /*0x524125*/
         (INIClass *)this,
         *(unsigned __int8 **)&v44.?[3],
         (unsigned __int8 *)v44.?,
         (char *)v44.Count,
         (char *)v44.CapacityIncrement,
         v45) )
  {
    v7 = InfantryTypeClass::Find(String); /*0x524132*/
  }
  else
  {
    v7 = v6; /*0x524139*/
  }
  v8 = *(_DWORD *)(v4 + 3616); /*0x52413b*/
  *(_DWORD *)(v4 + 3588) = v7; /*0x524141*/
  if ( INIClass::GetString( /*0x52415e*/
         (INIClass *)this,
         (unsigned __int8 *)(v4 + 36),
         aEliteoccupywea,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    v9 = InfantryTypeClass::Find(String); /*0x52416b*/
  }
  else
  {
    v9 = v8; /*0x524172*/
  }
  *(_DWORD *)(v4 + 3616) = v9; /*0x52417f*/
  INIClassIntList = &v44; /*0x524186*/
  DynamicVectorClass::Copy(&v44, (_DWORD *)(v4 + 3720)); /*0x52418a*/
  *(_DWORD *)INIClassIntList->VectorClass = &TypeList<int>::`vftable'; /*0x524198*/
  inited = (unsigned __int8 *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36)); /*0x5241a0*/
  INIClassIntList = (DynamicVectorClass *)GetINIClassIntList( /*0x5241b4*/
                                            (int)&v48,
                                            (unsigned __int8 ***)this,
                                            inited,
                                            (unsigned __int8 *)aVoicecomment,
                                            *(void ***)v44.VectorClass,
                                            *(void **)&v44.?[3],
                                            *(int *)&v44.?[3],
                                            v44.?,
                                            v44.Count,
                                            v44.CapacityIncrement,
                                            v45);
  TypeList::Copy((TypeList *)(v4 + 3720), INIClassIntList); /*0x5241b8*/
  v11 = INIClassIntList; /*0x5241bd*/
  *(_DWORD *)(v4 + 3736) = INIClassIntList->Count; /*0x5241c4*/
  *(_DWORD *)(v4 + 3740) = v11->CapacityIncrement; /*0x5241ca*/
  *(_DWORD *)(v4 + 3744) = *(_DWORD *)v11[1].VectorClass; /*0x5241d4*/
  *(_DWORD *)v48.__pad_0 = &VectorClass<int>::`vftable'; /*0x5241d7*/
  VectorClass::Destroy((int)&v48); /*0x5241df*/
  if ( INIClass::GetString( /*0x5241fb*/
         (INIClass *)this,
         (unsigned __int8 *)(v4 + 36),
         aDeadbodies,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)&v48, 0, 0); /*0x524210*/
    *(_DWORD *)v48.__pad_0 = &TypeList<AnimTypeClass const *>::`vftable'; /*0x52421f*/
    for ( i = strtok(String, Str); i; i = strtok(0, Str) ) /*0x524231*/
    {
      if ( !*i ) /*0x524233*/
        break; /*0x524236*/
      INIClassIntList = (DynamicVectorClass *)AnimTypeClass::FindOrCreate(i); /*0x524241*/
      if ( INIClassIntList ) /*0x524245*/
        DynamicVector::Add_Alt4(&v48, &INIClassIntList); /*0x524250*/
    }
    TypeList::AnimTypeCopy((TypeList *)&v48.DynamicVector_field_0x1C, &v48); /*0x524271*/
    *(_DWORD *)v48.__pad_0 = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x52427a*/
    DynamicVectorClass::Destroy_Alt((_VectorClass_PBVAnimTypeClass *)&v48); /*0x524282*/
  }
  else
  {
    TypeList::AnimTypeCopy((TypeList *)&v48.DynamicVector_field_0x1C, (_DWORD *)(v4 + 3664)); /*0x524294*/
  }
  VectorClass::CopyDefault((VectorClass *)(v4 + 3664), &v48.DynamicVector_field_0x1C); /*0x5242a6*/
  v13 = v50; /*0x5242af*/
  v14 = v51; /*0x5242b3*/
  *(_DWORD *)(v4 + 3680) = v49; /*0x5242b7*/
  *(_DWORD *)(v4 + 3684) = v13; /*0x5242ba*/
  *(_DWORD *)(v4 + 3688) = v14; /*0x5242bd*/
  v48.DynamicVector_field_0x1C = (AbstractClass *)&VectorClass<AnimTypeClass const *>::`vftable'; /*0x5242c9*/
  DynamicVectorClass::Destroy_Alt((_VectorClass_PBVAnimTypeClass *)&v48.DynamicVector_field_0x1C); /*0x5242cd*/
  if ( INIClass::GetString( /*0x5242e9*/
         (INIClass *)this,
         (unsigned __int8 *)(v4 + 36),
         aDeathanims,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)&v48, 0, 0); /*0x5242fa*/
    *(_DWORD *)v48.__pad_0 = &TypeList<AnimTypeClass const *>::`vftable'; /*0x524309*/
    for ( j = strtok(String, Str); j; j = strtok(0, Str) ) /*0x52431b*/
    {
      if ( !*j ) /*0x52431d*/
        break; /*0x524320*/
      INIClassIntList = (DynamicVectorClass *)AnimTypeClass::FindOrCreate(j); /*0x52432b*/
      if ( INIClassIntList ) /*0x52432f*/
        DynamicVector::Add_Alt4(&v48, &INIClassIntList); /*0x52433a*/
    }
    TypeList::AnimTypeCopy((TypeList *)&v48.DynamicVector_field_0x1C, &v48); /*0x52435b*/
    *(_DWORD *)v48.__pad_0 = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x524364*/
    DynamicVectorClass::Destroy_Alt((_VectorClass_PBVAnimTypeClass *)&v48); /*0x524368*/
  }
  else
  {
    TypeList::AnimTypeCopy((TypeList *)&v48.DynamicVector_field_0x1C, (_DWORD *)(v4 + 3692)); /*0x52437a*/
  }
  InfantryTypeClass::CopyDataArray((InfantryTypeClass *)(v4 + 3692), &v48.DynamicVector_field_0x1C); /*0x52438c*/
  *(_DWORD *)(v4 + 3716) = v51; /*0x524399*/
  v48.DynamicVector_field_0x1C = (AbstractClass *)&VectorClass<AnimTypeClass const *>::`vftable'; /*0x52439c*/
  DynamicVectorClass::Destroy_Alt((_VectorClass_PBVAnimTypeClass *)&v48.DynamicVector_field_0x1C); /*0x5243a4*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x5243b8*/
                     (int *)this,
                     (unsigned __int8 *)(v4 + 36),
                     aCyborg,
                     *(_BYTE *)(v4 + 3756));
  LOBYTE(v45) = *(_BYTE *)(v4 + 3757); /*0x5243c5*/
  v44.CapacityIncrement = (int)aNothuman; /*0x5243c6*/
  v44.Count = v4 + 36; /*0x5243cb*/
  *(_BYTE *)(v4 + 3756) = Bool_Overwrite; /*0x5243cc*/
  *(_BYTE *)(v4 + 3757) = INIClass::ReadBool_Overwrite( /*0x5243d7*/
                            (int *)this,
                            (unsigned __int8 *)v44.Count,
                            (unsigned __int8 *)v44.CapacityIncrement,
                            v45);
  if ( *(_BYTE *)(v4 + 3756) ) /*0x5243dd*/
    *(_BYTE *)(v4 + 3215) = 1; /*0x5243e7*/
  v17 = *(_DWORD *)(v4 + 3748); /*0x5243ee*/
  if ( !INIClass::GetString( /*0x524420*/
          (INIClass *)this,
          (unsigned __int8 *)(v4 + 36),
          aEnterwatersoun,
          &g_INI_DefaultBuffer,
          String,
          128)
    || (Index = VocClass::FindIndex((VocClass *)String), Index == -1) )
  {
    Index = v17; /*0x524422*/
  }
  v19 = *(_DWORD *)(v4 + 3752); /*0x524424*/
  v45 = 128; /*0x52442e*/
  v44.CapacityIncrement = (int)String; /*0x524433*/
  v44.Count = (int)&g_INI_DefaultBuffer; /*0x524434*/
  v44.? = (int)aLeavewatersoun; /*0x524439*/
  *(_DWORD *)&v44.?[3] = v4 + 36; /*0x52443e*/
  *(_DWORD *)(v4 + 3748) = Index; /*0x524441*/
  if ( !INIClass::GetString( /*0x52445c*/
          (INIClass *)this,
          *(unsigned __int8 **)&v44.?[3],
          (unsigned __int8 *)v44.?,
          (char *)v44.Count,
          (char *)v44.CapacityIncrement,
          v45)
    || (v20 = VocClass::FindIndex((VocClass *)String), v20 == -1) )
  {
    v20 = v19; /*0x52445e*/
  }
  LOBYTE(v45) = *(_BYTE *)(v4 + 3772); /*0x524468*/
  v44.CapacityIncrement = (int)aFearless; /*0x524469*/
  v44.Count = v4 + 36; /*0x52446e*/
  *(_DWORD *)(v4 + 3752) = v20; /*0x52446f*/
  *(_BYTE *)(v4 + 3772) = INIClass::ReadBool_Overwrite( /*0x52447a*/
                            (int *)this,
                            (unsigned __int8 *)v44.Count,
                            (unsigned __int8 *)v44.CapacityIncrement,
                            v45);
  v21 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aFraidycat, *(_BYTE *)(v4 + 3775)); /*0x52448f*/
  v22 = *(_BYTE *)(v4 + 3774); /*0x524494*/
  *(_BYTE *)(v4 + 3775) = v21; /*0x52449a*/
  v23 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aInfiltrate, v22); /*0x5244a9*/
  LOBYTE(v45) = *(_BYTE *)(v4 + 3758); /*0x5244b6*/
  v44.CapacityIncrement = (int)aIvan; /*0x5244b7*/
  v44.Count = v4 + 36; /*0x5244bc*/
  *(_BYTE *)(v4 + 3774) = v23; /*0x5244bd*/
  *(_BYTE *)(v4 + 3758) = INIClass::ReadBool_Overwrite( /*0x5244c8*/
                            (int *)this,
                            (unsigned __int8 *)v44.Count,
                            (unsigned __int8 *)v44.CapacityIncrement,
                            v45);
  v24 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aOccupier, *(_BYTE *)(v4 + 3764)); /*0x5244dd*/
  v25 = *(_BYTE *)(v4 + 3765); /*0x5244e2*/
  *(_BYTE *)(v4 + 3764) = v24; /*0x5244e8*/
  v26 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aAssaulter, v25); /*0x5244f7*/
  v45 = *(_DWORD *)(v4 + 3760); /*0x524504*/
  v44.CapacityIncrement = (int)aDetectiondista; /*0x524505*/
  v44.Count = v4 + 36; /*0x52450a*/
  *(_BYTE *)(v4 + 3765) = v26; /*0x52450b*/
  *(_DWORD *)(v4 + 3760) = INIClass::ReadInt_Overwrite( /*0x524516*/
                             (bool *)this,
                             (unsigned __int8 *)v44.Count,
                             (unsigned __int8 *)v44.CapacityIncrement,
                             v45);
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x52452b*/
                    (bool *)this,
                    (unsigned __int8 *)(v4 + 36),
                    aHarvestrate,
                    *(_DWORD *)(v4 + 3768));
  v28 = *(_BYTE *)(v4 + 3778); /*0x524530*/
  *(_DWORD *)(v4 + 3768) = Int_Overwrite; /*0x524536*/
  v29 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aC4, v28); /*0x524545*/
  LOBYTE(v45) = *(_BYTE *)(v4 + 3777); /*0x524552*/
  v44.CapacityIncrement = (int)&g_INI_Key_Civilian; /*0x524553*/
  v44.Count = v4 + 36; /*0x524558*/
  *(_BYTE *)(v4 + 3778) = v29; /*0x524559*/
  *(_BYTE *)(v4 + 3777) = INIClass::ReadBool_Overwrite( /*0x524564*/
                            (int *)this,
                            (unsigned __int8 *)v44.Count,
                            (unsigned __int8 *)v44.CapacityIncrement,
                            v45);
  v30 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aEngineer, *(_BYTE *)(v4 + 3779)); /*0x524579*/
  v31 = *(_BYTE *)(v4 + 3776); /*0x52457e*/
  *(_BYTE *)(v4 + 3779) = v30; /*0x524584*/
  v32 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aTiberiumproof, v31); /*0x524593*/
  LOBYTE(v45) = *(_BYTE *)(v4 + 3780); /*0x5245a0*/
  v44.CapacityIncrement = (int)aAgent; /*0x5245a1*/
  v44.Count = v4 + 36; /*0x5245a6*/
  *(_BYTE *)(v4 + 3776) = v32; /*0x5245a7*/
  *(_BYTE *)(v4 + 3780) = INIClass::ReadBool_Overwrite( /*0x5245b2*/
                            (int *)this,
                            (unsigned __int8 *)v44.Count,
                            (unsigned __int8 *)v44.CapacityIncrement,
                            v45);
  v33 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aThief, *(_BYTE *)(v4 + 3781)); /*0x5245c7*/
  v34 = *(_BYTE *)(v4 + 3782); /*0x5245cc*/
  *(_BYTE *)(v4 + 3781) = v33; /*0x5245d2*/
  v35 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aVehiclethief, v34); /*0x5245e1*/
  LOBYTE(v45) = *(_BYTE *)(v4 + 3783); /*0x5245ee*/
  v44.CapacityIncrement = (int)aDoggie; /*0x5245ef*/
  v44.Count = v4 + 36; /*0x5245f4*/
  *(_BYTE *)(v4 + 3782) = v35; /*0x5245f5*/
  *(_BYTE *)(v4 + 3783) = INIClass::ReadBool_Overwrite( /*0x524600*/
                            (int *)this,
                            (unsigned __int8 *)v44.Count,
                            (unsigned __int8 *)v44.CapacityIncrement,
                            v45);
  v36 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aDeployer, *(_BYTE *)(v4 + 3784)); /*0x524615*/
  v37 = *(_BYTE *)(v4 + 3785); /*0x52461a*/
  *(_BYTE *)(v4 + 3784) = v36; /*0x524620*/
  v38 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aDeployedcrusha, v37); /*0x52462f*/
  LOBYTE(v45) = *(_BYTE *)(v4 + 3786); /*0x52463c*/
  v44.CapacityIncrement = (int)aUseownname; /*0x52463d*/
  v44.Count = v4 + 36; /*0x524642*/
  *(_BYTE *)(v4 + 3785) = v38; /*0x524643*/
  *(_BYTE *)(v4 + 3786) = INIClass::ReadBool_Overwrite( /*0x52464e*/
                            (int *)this,
                            (unsigned __int8 *)v44.Count,
                            (unsigned __int8 *)v44.CapacityIncrement,
                            v45);
  *(_BYTE *)(v4 + 3787) = INIClass::ReadBool_Overwrite( /*0x524668*/
                            (int *)this,
                            (unsigned __int8 *)(v4 + 36),
                            aJumpjetturn,
                            *(_BYTE *)(v4 + 3787));
  if ( *(_BYTE *)(v4 + 3778) ) /*0x52466e*/
    *(_BYTE *)(v4 + 3774) = 1; /*0x524678*/
  if ( *(_BYTE *)(v4 + 3779) ) /*0x52467f*/
    *(_BYTE *)(v4 + 3774) = 1; /*0x524689*/
  if ( *(_BYTE *)(v4 + 3780) ) /*0x524690*/
    *(_BYTE *)(v4 + 3774) = 1; /*0x52469a*/
  v39 = INIClass::ReadBool_Overwrite( /*0x5246b9*/
          (int *)&DSurface_ViewBounds.__pad_FC[228],
          (unsigned __int8 *)(v4 + 504),
          aCrawls,
          *(_BYTE *)(v4 + 3773));
  v45 = *(_DWORD *)(v4 + 3648); /*0x5246c9*/
  v44.CapacityIncrement = (int)aFireup; /*0x5246ca*/
  v44.Count = v4 + 504; /*0x5246cf*/
  *(_BYTE *)(v4 + 3773) = v39; /*0x5246d0*/
  *(_DWORD *)(v4 + 3648) = INIClass::ReadInt_Overwrite( /*0x5246db*/
                             (bool *)&DSurface_ViewBounds.__pad_FC[228],
                             (unsigned __int8 *)v44.Count,
                             (unsigned __int8 *)v44.CapacityIncrement,
                             v45);
  v40 = INIClass::ReadInt_Overwrite( /*0x5246f3*/
          (bool *)&DSurface_ViewBounds.__pad_FC[228],
          (unsigned __int8 *)(v4 + 504),
          aFireprone,
          *(_DWORD *)(v4 + 3652));
  v41 = *(_DWORD *)(v4 + 3656); /*0x5246f8*/
  *(_DWORD *)(v4 + 3652) = v40; /*0x5246fe*/
  v42 = INIClass::ReadInt_Overwrite( /*0x524710*/
          (bool *)&DSurface_ViewBounds.__pad_FC[228],
          (unsigned __int8 *)(v4 + 504),
          aSecondaryfire,
          v41);
  v45 = *(_DWORD *)(v4 + 3660); /*0x524720*/
  v44.CapacityIncrement = (int)g_INI_Key_SecondaryProne; /*0x524721*/
  v44.Count = v4 + 504; /*0x524726*/
  *(_DWORD *)(v4 + 3656) = v42; /*0x524727*/
  *(_DWORD *)(v4 + 3660) = INIClass::ReadInt_Overwrite( /*0x524734*/
                             (bool *)&DSurface_ViewBounds.__pad_FC[228],
                             (unsigned __int8 *)v44.Count,
                             (unsigned __int8 *)v44.CapacityIncrement,
                             v45);
  AnimSequence::Parse((AnimSequence *)v4); /*0x52473a*/
  return 1; /*0x524741*/
}



// ==== 0x00524760  InfantryTypeClass::GetDefaultDimensions  this=InfantryTypeClass  sig=csp ====
_DWORD *__stdcall InfantryTypeClass::GetDefaultDimensions(InfantryTypeClass *this)
{
  void *v1; // esi

  v1 = (void *)(2 * *(_DWORD *)&stru_A8EB00.?[1768]); /*0x52476c*/
  this->TechnoTypeClass = (void *)85; /*0x524777*/
  this->? = (void *)85; /*0x524779*/
  this->? = v1; /*0x52477c*/
  return &this->TechnoTypeClass; /*0x52477f*/
}



// ==== 0x00524790  InfantryTypeClass::GetGameplayValue  this=InfantryTypeClass  sig=csp ====
int InfantryTypeClass::GetGameplayValue(InfantryTypeClass *this)
{
  return *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5848); /*0x52479b*/
}



// ==== 0x005247A0  InfantryTypeClass::StubReturnFalse  this=InfantryTypeClass  sig=csp ====
int InfantryTypeClass::StubReturnFalse(InfantryTypeClass *this)
{
  return 0; /*0x5247a2*/
}



// ==== 0x005247B0  InfantryTypeClass::j_?do_always_noconv_codecvt_base_std__MBE_NXZ_19  this=InfantryTypeClass  sig=csp ====
// attributes: thunk
bool __thiscall InfantryTypeClass::j__do_always_noconv_codecvt_base_std__MBE_NXZ_19(std::codecvt_base *this)
{
  return AbstractClass::processWeaponFire(this);
}



// ==== 0x005247C0  InfantryTypeClass::CanAttackMove_IgnoreWeapon_0  this=InfantryTypeClass  sig=csp ====
// attributes: thunk
bool __thiscall TechnoTypeClass::CanAttackMove_IgnoreWeapon_0(int this)
{
  return TechnoTypeClass::CanAttackMove_IgnoreWeapon(this);
}



// ==== 0x005247D0  InfantryTypeClass::ClampToGroundHeight  this=InfantryTypeClass  sig=csp ====
_DWORD *__stdcall InfantryTypeClass::ClampToGroundHeight(InfantryTypeClass *this, int *a2)
{
  int GroundHeight; // eax
  void *v3; // ecx
  void *v5; // [esp+0h] [ebp-Ch] BYREF
  void *v6; // [esp+4h] [ebp-8h]
  int v7; // [esp+8h] [ebp-4h]

  v5 = (void *)*a2; /*0x5247d9*/
  v6 = (void *)a2[1]; /*0x5247ea*/
  v7 = a2[2]; /*0x5247f1*/
  GroundHeight = Cell::GetGroundHeight(&v5); /*0x5247f5*/
  v3 = (void *)v7; /*0x5247fa*/
  if ( v7 < GroundHeight ) /*0x524800*/
    v3 = (void *)Cell::GetGroundHeight(&v5); /*0x524811*/
  this->TechnoTypeClass = v5; /*0x52481e*/
  this->? = v6; /*0x524824*/
  this->? = v3; /*0x524828*/
  return &this->TechnoTypeClass; /*0x52482b*/
}



// ==== 0x00524840  InfantryTypeClass::PowerDrainUpdate  this=InfantryTypeClass  sig=csp ====
int __thiscall InfantryTypeClass::PowerDrainUpdate(InfantryTypeClass *this, int *a2)
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

  BuildingTypeClass::ProcessPower((int)this, a2); /*0x524849*/
  Power::TimerProcess(this->Pip[0]); /*0x524857*/
  Checksummer::Add_Buffer((Checksummer *)a2, (unsigned __int8 *)this->Sequence[0], 1512); /*0x52486a*/
  Power::TimerProcess(this->FireUp); /*0x524878*/
  Power::TimerProcess(this->FireProne); /*0x524886*/
  Power::TimerProcess(this->VoiceComment[4]); /*0x524894*/
  Power::TimerProcess(this->DeadBodies[4]); /*0x5248a2*/
  Power::TimerProcess(this->DeathAnims[4]); /*0x5248b0*/
  LOBYTE(v3) = this->Fearless; /*0x5248b5*/
  Power::FlagProcess((Power *)a2, v3); /*0x5248be*/
  LOBYTE(v4) = this->Crawls; /*0x5248c3*/
  v5 = Power::FlagProcess((Power *)a2, v4); /*0x5248cc*/
  LOBYTE(v5) = this->Infiltrate; /*0x5248d1*/
  Power::FlagProcess((Power *)a2, v5); /*0x5248da*/
  LOBYTE(v6) = this->Fraidycat; /*0x5248df*/
  Power::FlagProcess((Power *)a2, v6); /*0x5248e8*/
  LOBYTE(v7) = this->TiberiumProof; /*0x5248ed*/
  v8 = Power::FlagProcess((Power *)a2, v7); /*0x5248f6*/
  LOBYTE(v8) = this->Civilian; /*0x5248fb*/
  Power::FlagProcess((Power *)a2, v8); /*0x524904*/
  LOBYTE(v9) = this->C4; /*0x524909*/
  Power::FlagProcess((Power *)a2, v9); /*0x524912*/
  LOBYTE(v10) = this->Engineer; /*0x524917*/
  v11 = Power::FlagProcess((Power *)a2, v10); /*0x524920*/
  LOBYTE(v11) = this->Agent; /*0x524925*/
  Power::FlagProcess((Power *)a2, v11); /*0x52492e*/
  LOBYTE(v12) = this->Thief; /*0x524933*/
  Power::FlagProcess((Power *)a2, v12); /*0x52493c*/
  LOBYTE(v13) = this->VehicleThief; /*0x524941*/
  return Power::FlagProcess((Power *)a2, v13); /*0x52494f*/
}



// ==== 0x00524960  InfantryTypeClass::LoadTypeData  this=InfantryTypeClass  sig=csp ====
int __userpurge InfantryTypeClass::LoadTypeData@<eax>(InfantryTypeClass *this, int a2, int a3, int a4)
{
  int v4; // ebp
  InfantryTypeClass *v5; // edi
  int v6; // ebx
  int v7; // esi
  int result; // eax
  int i; // ebx
  int j; // ebx
  int k; // ebx
  int m; // ebx
  int v13; // eax
  int v14; // [esp+70h] [ebp-4h]

  v5 = this; /*0x524964*/
  v6 = 0; /*0x524968*/
  if ( this->Sequence[0] ) /*0x52496a*/
  {
    __3_YAXPAX_Z((void *)this->Sequence[0]); /*0x524975*/
    v5->Sequence[0] = 0; /*0x52497d*/
  }
  v7 = a2; /*0x524983*/
  result = TechnoTypeClass::SaveLoad_Prefix((TechnoTypeClass *)v5, a2); /*0x524989*/
  v14 = result; /*0x524990*/
  if ( result >= 0 ) /*0x524994*/
  {
    if ( v5 ) /*0x52499c*/
      InfantryTypeClass::Constructor_523980(v5, (int)&this); /*0x5249a5*/
    VoxelAnimType::LoadAnim((char *)v5); /*0x5249ad*/
    ObjectTypeClass::Load2DArt((char *)v5); /*0x5249b4*/
    if ( v5 != (InfantryTypeClass *)-3720 ) /*0x5249c1*/
    {
      DynamicVectorClass::Construct((DynamicVectorClass *)v5->VoiceComment, 0, 0); /*0x5249c7*/
      v5->VoiceComment[0] = (int)&TypeList<int>::`vftable'; /*0x5249cc*/
    }
    (*(void (__stdcall **)(int, InfantryTypeClass **, int, _DWORD, int))(*(_DWORD *)v7 + 12))(v7, &this, 4, 0, v4); /*0x5249de*/
    if ( a2 > 0 ) /*0x5249e7*/
    {
      do /*0x524a09*/
      {
        (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v7 + 12))(v7, &a3, 4, 0); /*0x5249f5*/
        DynamicVector::Add_Alt((DynamicVector *)v5->VoiceComment, &a3); /*0x5249ff*/
        ++v6; /*0x524a04*/
      }
      while ( v6 < a2 ); /*0x524a09*/
    }
    if ( v5 != (InfantryTypeClass *)-3664 ) /*0x524a13*/
    {
      DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)v5->DeadBodies, 0, 0); /*0x524a1b*/
      v5->DeadBodies[0] = (int)&TypeList<AnimTypeClass const *>::`vftable'; /*0x524a20*/
    }
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v7 + 12))(v7, &a2, 4, 0); /*0x524a33*/
    for ( i = 0; i < a2; ++i ) /*0x524a3e*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v7 + 12))(v7, &a3, 4, 0); /*0x524a4c*/
      DynamicVector::Add_Alt4((DynamicVector *)v5->DeadBodies, &a3); /*0x524a56*/
    }
    for ( j = 0; j < v5->DeadBodies[4]; ++j ) /*0x524a6c*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v5->DeadBodies[1] + 4 * j)); /*0x524a7d*/
    if ( v5 != (InfantryTypeClass *)-3692 ) /*0x524a95*/
    {
      DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)v5->DeathAnims, 0, 0); /*0x524a9d*/
      v5->DeathAnims[0] = (int)&TypeList<AnimTypeClass const *>::`vftable'; /*0x524aa2*/
    }
    (*(void (__stdcall **)(int, int *, int))(*(_DWORD *)v7 + 12))(v7, &a2, 4); /*0x524ab5*/
    for ( k = 0; k < (int)this; ++k ) /*0x524ac0*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v7 + 12))(v7, &a2, 4, 0); /*0x524ace*/
      DynamicVector::Add_Alt4((DynamicVector *)v5->DeathAnims, &a2); /*0x524ad8*/
    }
    for ( m = 0; m < v5->DeathAnims[4]; ++m ) /*0x524aef*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v5->DeathAnims[1] + 4 * m)); /*0x524b00*/
    v13 = __2_YAPAXI_Z(0x5E8u); /*0x524b15*/
    v5->Sequence[0] = v13; /*0x524b1d*/
    (*(void (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v7 + 12))(v7, v13, 1512, 0); /*0x524b2e*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v5->OccupyWeapon); /*0x524b3d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v5->EliteOccupyWeapon); /*0x524b4e*/
    return v14; /*0x524b53*/
  }
  return result; /*0x524b57*/
}



// ==== 0x00524B60  InfantryTypeClass::SaveLoad_Prefix  this=InfantryTypeClass  sig=csp ====
int __userpurge InfantryTypeClass::SaveLoad_Prefix@<eax>(InfantryTypeClass *this, _DWORD *a2, int *a3, int a4, int a5)
{
  int v5; // ebx
  int result; // eax
  int v7; // ebp
  int v8; // edx
  int i; // ebx
  int v10; // edx
  int j; // ebx
  int v12; // edx
  int k; // ebx
  int v14; // [esp+48h] [ebp-Ch]
  int v15; // [esp+4Ch] [ebp-8h]

  result = TechnoTypeClass::SaveLoad_Prefix_0((TechnoTypeClass *)this, a2, a3, v14, v15); /*0x524b72*/
  v7 = result; /*0x524b77*/
  if ( result >= 0 ) /*0x524b7b*/
  {
    v8 = *a2; /*0x524b87*/
    a3 = (int *)this->VoiceComment[4]; /*0x524b94*/
    (*(void (__stdcall **)(_DWORD *, int **, int, _DWORD, int))(v8 + 16))(a2, &a3, 4, 0, v5); /*0x524b98*/
    for ( i = 0; i < a4; ++i ) /*0x524ba3*/
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, this->VoiceComment[1] + 4 * i, 4, 0); /*0x524bb6*/
    v10 = *a2; /*0x524bc6*/
    a4 = this->DeadBodies[4]; /*0x524bd2*/
    (*(void (__stdcall **)(_DWORD *, int *, int, _DWORD))(v10 + 16))(a2, &a4, 4, 0); /*0x524bd6*/
    for ( j = 0; j < a4; ++j ) /*0x524be1*/
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, this->DeadBodies[1] + 4 * j, 4, 0); /*0x524bf4*/
    v12 = *a2; /*0x524c04*/
    a4 = this->DeathAnims[4]; /*0x524c10*/
    (*(void (__stdcall **)(_DWORD *, int *, int, _DWORD))(v12 + 16))(a2, &a4, 4, 0); /*0x524c14*/
    for ( k = 0; k < a4; ++k ) /*0x524c1f*/
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, this->DeathAnims[1] + 4 * k, 4, 0); /*0x524c32*/
    (*(void (__stdcall **)(_DWORD *, int, int))(*a2 + 16))(a2, this->Sequence[0], 1512); /*0x524c4d*/
    return v7; /*0x524c52*/
  }
  return result; /*0x524c51*/
}



// ==== 0x00524C70  InfantryTypeClass::GetClassIdentifier  this=InfantryTypeClass  sig=csp ====
int __stdcall InfantryTypeClass::GetClassIdentifier(InfantryTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x524c76*/
    return -2147467261; /*0x524c78*/
  *a2 = -1366608936; /*0x524c86*/
  a2[1] = 298976796; /*0x524c8e*/
  a2[2] = 1610654892; /*0x524c97*/
  a2[3] = unk_7E95AC; /*0x524ca0*/
  return 0; /*0x524c7d*/
}



// ==== 0x00524CB0  KeywordType::FindOrCreate2  this=KeywordType  sig=csp ====
int __thiscall sub_524CB0(char *Source)
{
  int v2; // esi

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x524ccc*/
    return 0; /*0x524d2f*/
  v2 = 0; /*0x524cdd*/
  if ( dword_A8E358 <= 0 ) /*0x524ce1*/
  {
LABEL_6:
    if ( __2_YAPAXI_Z(0xED0u) ) /*0x524d0b*/
      return InfantryTypeClass::Constructor(Source); /*0x524d21*/
    return 0; /*0x524d15*/
  }
  while ( _strcmpi((const void *)(*((_DWORD *)dword_A8E34C + v2) + 36), Source) ) /*0x524cfa*/
  {
    if ( ++v2 >= dword_A8E358 ) /*0x524d04*/
      goto LABEL_6; /*0x524d04*/
  }
  return *((_DWORD *)dword_A8E34C + v2); /*0x524d1f*/
}



// ==== 0x00524D40  InfantryTypeClass::GetTypeIdentifier  this=InfantryTypeClass  sig=csp ====
int InfantryTypeClass::GetTypeIdentifier(InfantryTypeClass *this)
{
  return 16; /*0x524d45*/
}



// ==== 0x00524D50  InfantryTypeClass::GetObjectSize  this=InfantryTypeClass  sig=csp ====
int InfantryTypeClass::GetObjectSize(InfantryTypeClass *this)
{
  return 3792; /*0x524d55*/
}



// ==== 0x00524D60  InfantryTypeClass::GetAuxField  this=InfantryTypeClass  sig=csp ====
int __thiscall InfantryTypeClass::GetAuxField(InfantryTypeClass *this)
{
  return this->ArrayIndex; /*0x524d66*/
}



// ==== 0x00524D70  InfantryTypeClass::ddtor  this=InfantryTypeClass  sig=csp ====
int __thiscall InfantryTypeClass::ddtor(InfantryTypeClass *this, char a2)
{
  int v3; // eax
  void *v4; // eax
  void *v5; // eax
  void *v6; // eax
  InfantryTypeClass *v8; // [esp+4h] [ebp-4h] BYREF

  this->TechnoTypeClass = &InfantryTypeClass::`vftable'; /*0x524d76*/
  this->? = &InfantryTypeClass::`vftable'; /*0x524d7c*/
  this->? = &InfantryTypeClass::`vftable'; /*0x524d83*/
  this->? = &InfantryTypeClass::`vftable'; /*0x524d8a*/
  AbstractClass::AnnounceExpiredPointer(&this->TechnoTypeClass, 1); /*0x524d91*/
  v8 = this; /*0x524da6*/
  v3 = (*(int (__thiscall **)(_DWORD *, InfantryTypeClass **))(dword_A8E348 + 16))(&dword_A8E348, &v8); /*0x524daa*/
  if ( v3 != -1 && v3 < dword_A8E358 && v3 < --dword_A8E358 ) /*0x524dc5*/
  {
    do /*0x524ddd*/
    {
      ++v3; /*0x524dcd*/
      *((_DWORD *)dword_A8E34C + v3 - 1) = *((_DWORD *)dword_A8E34C + v3); /*0x524dd1*/
    }
    while ( v3 < dword_A8E358 ); /*0x524ddd*/
  }
  __3_YAXPAX_Z((void *)this->Sequence[0]); /*0x524de7*/
  this->Sequence[0] = 0; /*0x524df1*/
  v4 = (void *)this->VoiceComment[1]; /*0x524df7*/
  this->VoiceComment[0] = (int)&VectorClass<int>::`vftable'; /*0x524dff*/
  if ( v4 && BYTE1(this->VoiceComment[3]) ) /*0x524e0b*/
  {
    __3_YAXPAX_Z(v4); /*0x524e14*/
    this->VoiceComment[1] = 0; /*0x524e1c*/
  }
  BYTE1(this->VoiceComment[3]) = 0; /*0x524e22*/
  this->VoiceComment[2] = 0; /*0x524e28*/
  v5 = (void *)this->DeathAnims[1]; /*0x524e2e*/
  this->DeathAnims[0] = (int)&VectorClass<AnimTypeClass const *>::`vftable'; /*0x524e34*/
  if ( v5 && BYTE1(this->DeathAnims[3]) ) /*0x524e42*/
  {
    __3_YAXPAX_Z(v5); /*0x524e4b*/
    this->DeathAnims[1] = 0; /*0x524e53*/
  }
  BYTE1(this->DeathAnims[3]) = 0; /*0x524e59*/
  this->DeathAnims[2] = 0; /*0x524e5f*/
  v6 = (void *)this->DeadBodies[1]; /*0x524e65*/
  this->DeadBodies[0] = (int)&VectorClass<AnimTypeClass const *>::`vftable'; /*0x524e6b*/
  if ( v6 && BYTE1(this->DeadBodies[3]) ) /*0x524e79*/
  {
    __3_YAXPAX_Z(v6); /*0x524e82*/
    this->DeadBodies[1] = 0; /*0x524e8a*/
  }
  BYTE1(this->DeadBodies[3]) = 0; /*0x524e92*/
  this->DeadBodies[2] = 0; /*0x524e98*/
  TechnoTypeClass::DTOR((int)this); /*0x524e9e*/
  if ( (a2 & 1) != 0 ) /*0x524eaa*/
    __3_YAXPAX_Z(this); /*0x524ead*/
  return (int)this; /*0x524eb7*/
}



// ==== 0x00524EC0  ObjectClass::??0Iostream_init_QAE_XZ_4  this=ObjectClass  sig=csp ====
Iostream_init *__thiscall __0Iostream_init_QAE_XZ_4(Iostream_init *this)
{
  return this; /*0x524ec2*/
}



// ==== 0x00524ED0  _DynamicVectorClass_PBVAnimTypeClass::GetClassIdentifier  this=DynamicVector  sig=csp ====
void __thiscall WarheadTypeClass::GetClassIdentifier(_DynamicVectorClass_PBVAnimTypeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x524ed6*/
  this->m_10 = 0; /*0x524ed9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x524ee0*/
  {
    __3_YAXPAX_Z(v2); /*0x524ee6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x524eee*/
  }
  BYTE1(this->m_C) = 0; /*0x524ef1*/
  this->m_8 = 0; /*0x524ef4*/
}



// ==== 0x00524F00  _DynamicVectorClass_PBVAnimTypeClass::LoadTypeData  this=DynamicVector  sig=csp ====
unsigned int __thiscall WarheadTypeClass::LoadTypeData(_DynamicVectorClass_PBVAnimTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x524f00*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x524f15*/
  else
    return 0; /*0x524f07*/
}



// ==== 0x00524F20  InfantryTypeClass::CopyDataArray  this=InfantryTypeClass  sig=csp ====
_DWORD *__thiscall InfantryTypeClass::CopyDataArray(InfantryTypeClass *this, _DWORD *a2)
{
  void *v3; // eax
  void *v4; // eax
  void *vtable2; // ecx
  int v6; // eax

  if ( this == (InfantryTypeClass *)a2 ) /*0x524f2a*/
    goto LABEL_8; /*0x524f2a*/
  (*((void (__thiscall **)(InfantryTypeClass *))this->TechnoTypeClass + 3))(this); /*0x524f2e*/
  v3 = (void *)a2[2]; /*0x524f31*/
  this->? = v3; /*0x524f36*/
  if ( !v3 ) /*0x524f39*/
  {
    this->? = 0; /*0x524f86*/
    BYTE1(this->?) = 0; /*0x524f8d*/
LABEL_8:
    this->? = a2[4]; /*0x524f91*/
    this->? = a2[5]; /*0x524f9a*/
    return &this->TechnoTypeClass; /*0x524f9d*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * (_DWORD)v3); /*0x524f43*/
  this->? = v4; /*0x524f4b*/
  if ( !v4 ) /*0x524f50*/
    goto LABEL_8; /*0x524f50*/
  vtable2 = this->?; /*0x524f52*/
  v6 = 0; /*0x524f55*/
  BYTE1(this->?) = 1; /*0x524f59*/
  if ( (int)vtable2 <= 0 ) /*0x524f5d*/
    goto LABEL_8; /*0x524f5d*/
  do /*0x524f71*/
  {
    *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x524f68*/
    ++v6; /*0x524f6e*/
  }
  while ( v6 < (int)this->? ); /*0x524f71*/
  this->? = a2[4]; /*0x524f76*/
  this->? = a2[5]; /*0x524f7c*/
  return &this->TechnoTypeClass; /*0x524f81*/
}



// ==== 0x00524FB0  _VectorClass_PBVAnimTypeClass::SaveToINI  this=VectorClass  sig=csp ====
int __thiscall WarheadTypeClass::SaveToINI(_VectorClass_PBVAnimTypeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x524fba*/
}



// ==== 0x00524FC0  ?$TypeList@PBVAnimTypeClass@@::QueryInterface  this=TypeList  sig=csp ====
_DWORD *__thiscall WarheadTypeClass::_vt00(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x524fc3*/
  *Block = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x524fc6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x524fd0*/
  {
    __3_YAXPAX_Z(v3); /*0x524fd8*/
    *(Block + 1) = 0; /*0x524fe0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x524feb*/
  *(Block + 2) = 0; /*0x524ff1*/
  if ( (a2 & 1) != 0 ) /*0x524ff8*/
    __3_YAXPAX_Z(Block); /*0x524ffb*/
  return Block; /*0x525005*/
}



// ==== 0x00525010  _VectorClass_PBVAnimTypeClass::Add  this=VectorClass  sig=csp ====
_DWORD *__thiscall DynamicVectorClass_AnimType::Add(_VectorClass_PBVAnimTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x525013*/
  *(_DWORD *)this->__pad_0 = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x525016*/
  if ( v3 && BYTE1(this->m_C) ) /*0x525020*/
  {
    __3_YAXPAX_Z(v3); /*0x525028*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x525030*/
  }
  BYTE1(this->m_C) = 0; /*0x52503b*/
  this->m_8 = 0; /*0x525041*/
  if ( (a2 & 1) != 0 ) /*0x525048*/
    __3_YAXPAX_Z(this); /*0x52504b*/
  return this->__pad_0; /*0x525055*/
}



// ==== 0x00525060  VectorClass::CopyDefault  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::CopyDefault(VectorClass *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this == (VectorClass *)a2 ) /*0x52506a*/
    return &this->vtable0; /*0x52506a*/
  (*((void (__thiscall **)(VectorClass *))this->vtable0 + 3))(this); /*0x52506e*/
  v3 = a2[2]; /*0x525071*/
  this->Capacity = v3; /*0x525076*/
  if ( !v3 ) /*0x525079*/
  {
    this->Items = 0; /*0x5250ba*/
    this->IsAllocated = 0; /*0x5250c1*/
    return &this->vtable0; /*0x5250c5*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x525083*/
  this->Items = v4; /*0x52508b*/
  if ( !v4 ) /*0x525090*/
    return &this->vtable0; /*0x525090*/
  Capacity = this->Capacity; /*0x525092*/
  v6 = 0; /*0x525095*/
  this->IsAllocated = 1; /*0x525099*/
  if ( Capacity <= 0 ) /*0x52509d*/
    return &this->vtable0; /*0x52509d*/
  do /*0x5250b1*/
  {
    *((_DWORD *)this->Items + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x5250a8*/
    ++v6; /*0x5250ae*/
  }
  while ( v6 < this->Capacity ); /*0x5250b1*/
  return &this->vtable0; /*0x5250b5*/
}



// ==== 0x005250D0  _VectorClass_PBVAnimTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall WarheadTypeClass::AddRef(_VectorClass_PBVAnimTypeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5250d2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5250dd*/
  {
    v3 = 0; /*0x5250df*/
    if ( m_8 <= 0 ) /*0x5250e3*/
      return 1; /*0x525103*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5250e5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5250eb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5250f4*/
    {
      ++v3; /*0x5250f6*/
      ++v4; /*0x5250f7*/
      if ( v3 >= m_8 ) /*0x5250fc*/
        return 1; /*0x5250fc*/
    }
  }
  return 0; /*0x5250fe*/
}



// ==== 0x00525110  _VectorClass_PBVAnimTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall DynamicVectorClass_AnimType::Release(_VectorClass_PBVAnimTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x52511c*/
  {
    LOBYTE(this->m_C) = 0; /*0x525126*/
    if ( a3 ) /*0x52512c*/
      v4 = a3; /*0x525142*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x52513e*/
    LOBYTE(this->m_C) = 1; /*0x525146*/
    if ( v4 ) /*0x52514a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x525155*/
      {
        m_8 = this->m_8; /*0x52515c*/
        if ( a2 < m_8 ) /*0x525161*/
          m_8 = a2; /*0x525163*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x525169*/
          ++i; /*0x52516e*/
        if ( BYTE1(this->m_C) ) /*0x52517b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x525186*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x52518e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x525197*/
      this->m_8 = a2; /*0x52519f*/
      BYTE1(this->m_C) = a3 == 0; /*0x5251a2*/
      return 1; /*0x5251a8*/
    }
    else
    {
      return 0; /*0x52514f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBVAnimTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5251b2*/
    return 1; /*0x5251b8*/
  }
}



// ==== 0x005251C0  _VectorClass_PBVAnimTypeClass::Destroy_Alt  this=VectorClass  sig=csp ====
int __thiscall DynamicVectorClass::Destroy_Alt(_VectorClass_PBVAnimTypeClass *this)
{
  int result; // eax

  result = *(_DWORD *)&this->m_1[3]; /*0x5251c6*/
  if ( result && BYTE1(this->m_C) ) /*0x5251cd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5251d3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5251db*/
  }
  BYTE1(this->m_C) = 0; /*0x5251de*/
  this->m_8 = 0; /*0x5251e1*/
  return result; /*0x5251e4*/
}



// ==== 0x005251F0  _VectorClass_PBVAnimTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall DynamicVectorClass_AnimType::GetSize(_VectorClass_PBVAnimTypeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5251f0*/
    return 0; /*0x5251f8*/
  m_8 = this->m_8; /*0x5251fe*/
  result = 0; /*0x525201*/
  if ( m_8 <= 0 ) /*0x525205*/
    return -1; /*0x52521c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x52520b*/
  {
    if ( ++result >= m_8 ) /*0x52521a*/
      return -1; /*0x52521a*/
  }
  return result; /*0x5251fa*/
}



// ==== 0x00525230  _VectorClass_PBVAnimTypeClass::Remove  this=VectorClass  sig=csp ====
unsigned int __thiscall DynamicVectorClass_AnimType::Remove(_VectorClass_PBVAnimTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x525230*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x525245*/
  else
    return 0; /*0x525237*/
}



// ==== 0x00525250  DynamicVectorClass::AnimTypeConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall DynamicVectorClass::AnimTypeConstructor(DynamicVectorClass *this, int a2, int a3)
{
  *(_DWORD *)&this->?[3] = 0; /*0x525259*/
  *(_DWORD *)&this->?[3] = a2; /*0x525260*/
  LOBYTE(this->?) = 1; /*0x525263*/
  BYTE1(this->?) = 0; /*0x525267*/
  *(_DWORD *)this->VectorClass = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x52526b*/
  if ( a2 ) /*0x525271*/
  {
    if ( a3 ) /*0x525279*/
    {
      *(_DWORD *)&this->?[3] = a3; /*0x52527b*/
    }
    else
    {
      *(_DWORD *)&this->?[3] = __2_YAPAXI_Z(4 * a2); /*0x52528c*/
      BYTE1(this->?) = 1; /*0x52528f*/
    }
  }
  *(_DWORD *)this->VectorClass = &DynamicVectorClass<AnimTypeClass const *>::`vftable'; /*0x525293*/
  this->CapacityIncrement = 10; /*0x525299*/
  this->Count = 0; /*0x5252a0*/
  return this->VectorClass; /*0x5252a9*/
}



// ==== 0x005252B0  _DynamicVectorClass_PBVAnimTypeClass::Add  this=DynamicVector  sig=csp ====
_DWORD *__thiscall DynamicVectorClass_cptr_AnimTypeClass::Add(_DynamicVectorClass_PBVAnimTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5252b3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x5252b6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5252c0*/
  {
    __3_YAXPAX_Z(v3); /*0x5252c8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5252d0*/
  }
  BYTE1(this->m_C) = 0; /*0x5252db*/
  this->m_8 = 0; /*0x5252e1*/
  if ( (a2 & 1) != 0 ) /*0x5252e8*/
    __3_YAXPAX_Z(this); /*0x5252eb*/
  return this->__pad_0; /*0x5252f5*/
}



// ==== 0x00525300  _DynamicVectorClass_PBVAnimTypeClass::Release  this=DynamicVector  sig=csp ====
char __thiscall WarheadTypeClass::Release(_DynamicVectorClass_PBVAnimTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x52530c*/
  {
    LOBYTE(this->m_C) = 0; /*0x525312*/
    if ( a3 ) /*0x525318*/
      v4 = a3; /*0x52532e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x52532a*/
    LOBYTE(this->m_C) = 1; /*0x525332*/
    if ( !v4 ) /*0x525336*/
      return 0; /*0x5253aa*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x525338*/
    {
      m_8 = this->m_8; /*0x52533f*/
      if ( a2 < m_8 ) /*0x525344*/
        m_8 = a2; /*0x525346*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x52534c*/
        ++i; /*0x525351*/
      if ( BYTE1(this->m_C) ) /*0x52535e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x525369*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x525371*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x52537a*/
    this->m_8 = a2; /*0x525382*/
    BYTE1(this->m_C) = a3 == 0; /*0x525385*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PBVAnimTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x52538e*/
  }
  v7 = this->m_8; /*0x525391*/
  if ( v7 < this->m_10 ) /*0x525399*/
    this->m_10 = v7; /*0x52539b*/
  return 1; /*0x52539e*/
}



// ==== 0x005253B0  DynamicVector::Add_Alt4  this=DynamicVector  sig=csp ====
int __thiscall DynamicVector::Add_Alt4(DynamicVector *this, _DWORD *a2)
{
  int DynamicVector_field_0x8; // ecx
  int result; // eax
  int v5; // edx

  DynamicVector_field_0x8 = this->DynamicVector_field_0x8; /*0x5253b3*/
  result = (int)this->DynamicVector_field_0x10; /*0x5253b6*/
  if ( result < DynamicVector_field_0x8 /*0x5253dd*/
    || (this->__pad_C[1] || !DynamicVector_field_0x8)
    && (result = *(_DWORD *)this->__pad_14, result > 0)
    && (result = (*(int (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 8))(
                   this,
                   DynamicVector_field_0x8 + result,
                   0),
        (_BYTE)result) )
  {
    result = (int)this->DynamicVector_field_0x10; /*0x5253e5*/
    v5 = *(_DWORD *)&this->DynamicVector_field_0x1[3]; /*0x5253e8*/
    this->DynamicVector_field_0x10 = (void *)(result + 1); /*0x5253ee*/
    *(_DWORD *)(v5 + 4 * result) = *a2; /*0x5253f8*/
    LOBYTE(result) = 1; /*0x5253fb*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x5253df*/
  }
  return result; /*0x5253e1*/
}



// ==== 0x00525400  _DynamicVectorClass_PBVAnimTypeClass::Init  this=DynamicVector  sig=csp ====
int __thiscall WarheadTypeClass::Init(_DynamicVectorClass_PBVAnimTypeClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x525400*/
  result = 0; /*0x525403*/
  if ( m_10 <= 0 ) /*0x525408*/
    return -1; /*0x52541f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x52540e*/
  {
    if ( ++result >= m_10 ) /*0x52541d*/
      return -1; /*0x52541d*/
  }
  return result; /*0x525422*/
}



// ==== 0x00525430  GetINIClassIntList  this=TypeList  sig=csp ====
int __fastcall GetINIClassIntList(
        int a1,
        unsigned __int8 ***a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        void **a5,
        void *a6,
        int a7,
        __int16 a8,
        int a9,
        int a10,
        int a11)
{
  ObjectClass *i; // eax
  ObjectClass *_751520; // eax
  int _7515C0; // edi
  int v15; // eax
  int v16; // ecx
  void *Items; // eax
  bool v18; // zf
  void *v19; // eax
  int v20; // ecx
  VectorClass v22; // [esp+Ch] [ebp-9Ch] BYREF
  int v23; // [esp+1Ch] [ebp-8Ch]
  int v24; // [esp+20h] [ebp-88h]
  char String[128]; // [esp+28h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)a2, a3, a4, &g_INI_DefaultBuffer, String, 128) ) /*0x52545c*/
  {
    VectorClass::Construct(&v22, 0, 0); /*0x525471*/
    v24 = 10; /*0x52547a*/
    v23 = 0; /*0x525488*/
    v22.vtable0 = &TypeList<int>::`vftable'; /*0x52548c*/
    for ( i = (ObjectClass *)strtok(String, Str); i; i = (ObjectClass *)strtok(0, Str) ) /*0x52549e*/
    {
      if ( !LOBYTE(i->AbstractClass) ) /*0x5254a0*/
        break; /*0x5254a2*/
      _751520 = (ObjectClass *)System_Get_751520(i); /*0x5254a6*/
      if ( _751520 ) /*0x5254ad*/
      {
        _7515C0 = System_Get_7515C0(_751520); /*0x5254ba*/
        if ( v23 < v22.Capacity /*0x5254e2*/
          || (v22.IsAllocated || !v22.Capacity)
          && v24 > 0
          && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v22.vtable0 + 2))(
               &v22,
               v24 + v22.Capacity,
               0) )
        {
          v15 = v23++; /*0x5254ed*/
          *((_DWORD *)v22.Items + v15) = _7515C0; /*0x5254f8*/
        }
      }
    }
    IntVector::Copy((IntVector *)a1, &v22); /*0x525514*/
    *(_DWORD *)a1 = &TypeList<int>::`vftable'; /*0x52551e*/
    v16 = v24; /*0x525528*/
    *(_DWORD *)(a1 + 16) = v23; /*0x52552c*/
    Items = v22.Items; /*0x52552f*/
    v18 = v22.Items == 0; /*0x525533*/
    *(_DWORD *)(a1 + 20) = v16; /*0x525535*/
    v22.vtable0 = &VectorClass<int>::`vftable'; /*0x525538*/
    if ( !v18 && v22.IsAllocated ) /*0x525542*/
    {
      __3_YAXPAX_Z(Items); /*0x525545*/
      v22.Items = 0; /*0x52554d*/
    }
    v19 = a6; /*0x525551*/
    v22.IsAllocated = 0; /*0x525558*/
    v22.Capacity = 0; /*0x52555e*/
    a5 = &VectorClass<int>::`vftable'; /*0x525562*/
    if ( a6 && HIBYTE(a8) ) /*0x525572*/
      goto LABEL_20; /*0x525572*/
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0; /*0x525587*/
    *(_DWORD *)(a1 + 8) = 0; /*0x52558a*/
    *(_BYTE *)(a1 + 12) = 1; /*0x52558d*/
    *(_BYTE *)(a1 + 13) = 0; /*0x525591*/
    *(_DWORD *)a1 = &VectorClass<int>::`vftable'; /*0x525594*/
    TypeList::Copy((TypeList *)a1, &a5); /*0x525596*/
    *(_DWORD *)a1 = &TypeList<int>::`vftable'; /*0x52559b*/
    a5 = &VectorClass<int>::`vftable'; /*0x5255a1*/
    v20 = a10; /*0x5255af*/
    *(_DWORD *)(a1 + 16) = a9; /*0x5255b6*/
    v19 = a6; /*0x5255b9*/
    v18 = a6 == 0; /*0x5255c0*/
    *(_DWORD *)(a1 + 20) = v20; /*0x5255c2*/
    if ( !v18 && HIBYTE(a8) ) /*0x5255ce*/
LABEL_20:
      __3_YAXPAX_Z(v19); /*0x5255d0*/
  }
  return a1; /*0x5255db*/
}



// ==== 0x005255F0  TypeList::AnimTypeCopy  this=VectorClass  sig=csp ====
_DWORD *__thiscall TypeList::AnimTypeCopy(TypeList *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  this->? = 0; /*0x5255fd*/
  this->? = 0; /*0x525600*/
  this->? = 1; /*0x525603*/
  this->? = 0; /*0x525607*/
  this->DynamicVectorClass = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x52560a*/
  if ( this != (TypeList *)a2 ) /*0x525610*/
  {
    DynamicVectorClass::Destroy_Alt((_VectorClass_PBVAnimTypeClass *)this); /*0x525612*/
    v3 = a2[2]; /*0x525618*/
    this->? = v3; /*0x52561d*/
    if ( v3 ) /*0x525620*/
    {
      v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x525626*/
      this->? = v4; /*0x525630*/
      if ( v4 ) /*0x525633*/
      {
        Capacity = this->?; /*0x525635*/
        v6 = 0; /*0x525638*/
        this->? = 1; /*0x52563c*/
        if ( Capacity > 0 ) /*0x525640*/
        {
          do /*0x525654*/
          {
            *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x52564b*/
            ++v6; /*0x525651*/
          }
          while ( v6 < this->? ); /*0x525654*/
        }
      }
    }
    else
    {
      this->? = 0; /*0x525658*/
      this->? = 0; /*0x52565b*/
    }
  }
  this->? = a2[4]; /*0x525661*/
  this->? = a2[5]; /*0x525667*/
  this->DynamicVectorClass = &TypeList<AnimTypeClass const *>::`vftable'; /*0x52566a*/
  return &this->DynamicVectorClass; /*0x525672*/
}



// ==== 0x00525680  AnimTypeVector::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall AnimTypeVector::Constructor(AnimTypeVector *this, int a2, int a3)
{
  this->Items = 0; /*0x52568b*/
  this->Capacity = a2; /*0x52568e*/
  this->IsInitialized = 1; /*0x525691*/
  this->IsAllocated = 0; /*0x525695*/
  *this = (AnimTypeVector)&VectorClass<AnimTypeClass const *>::`vftable'; /*0x525698*/
  if ( a2 ) /*0x52569e*/
  {
    if ( a3 ) /*0x5256a6*/
    {
      this->Items = a3; /*0x5256a8*/
      return this; /*0x5256ae*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x5256bd*/
    this->IsAllocated = 1; /*0x5256c0*/
  }
  return this; /*0x5256ad*/
}



// ==== 0x005256D0  sub_5256D0  this=-  sig=ida-proto ====
int sub_5256D0()
{
  dword_A8F2D0 = 0; /*0x5256d2*/
  dword_A8F2D4 = 0; /*0x5256d7*/
  dword_A8F2D8 = 0; /*0x5256dc*/
  dword_A8F2DC = 0; /*0x5256e1*/
  return 0; /*0x5256e6*/
}



// ==== 0x005256F0  INIClass::DestroyHashTableINIClass  this=INIClass  sig=csp ====
char *__thiscall HashTable::DestroyHashTableINIClass(INIClass *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // edx
  int v6; // ecx
  char *result; // eax
  int v8; // edx
  int v9; // ecx

  *(_DWORD *)this->__pad_0 = &INIClass::`vftable'; /*0x5256f8*/
  INIClass::ClearSection((int *)this->__pad_0, 0, 0); /*0x5256fe*/
  __3_YAXPAX_Z(*(void **)&this->__pad_20[8]); /*0x525707*/
  *(_DWORD *)&this->__pad_20[8] = 0; /*0x52570c*/
  this->INIClass_field_2C = 0; /*0x52570f*/
  this->unknown30 = 0; /*0x525712*/
  this->needsSave_flag = 0; /*0x525715*/
  this->unknown38 = 0; /*0x525718*/
  this->headNode[2] = (int)&GenericList::`vftable'; /*0x52571e*/
  while ( 1 ) /*0x525725*/
  {
    v2 = this->sectionHead[1]; /*0x525725*/
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
  this->sectionCount = (int)&GenericNode::`vftable'; /*0x525760*/
  if ( this != (INIClass *)-28 ) /*0x525766*/
  {
    v5 = *(_DWORD *)this->__pad_20; /*0x525768*/
    if ( v5 ) /*0x52576d*/
    {
      v6 = *(_DWORD *)&this->__pad_20[4]; /*0x52576f*/
      if ( v6 ) /*0x525774*/
      {
        *(_DWORD *)(v6 + 4) = v5; /*0x525776*/
        *(_DWORD *)(*(_DWORD *)this->__pad_20 + 8) = *(_DWORD *)&this->__pad_20[4]; /*0x52577f*/
        *(_DWORD *)&this->__pad_20[4] = 0; /*0x525782*/
        *(_DWORD *)this->__pad_20 = 0; /*0x525785*/
      }
    }
  }
  result = (char *)this->sectionHead; /*0x525788*/
  this->sectionHead[0] = (int)&GenericNode::`vftable'; /*0x52578d*/
  if ( this != (INIClass *)-16 ) /*0x525793*/
  {
    v8 = this->sectionHead[1]; /*0x525795*/
    if ( v8 ) /*0x52579a*/
    {
      v9 = this->sectionHead[2]; /*0x52579c*/
      if ( v9 ) /*0x5257a1*/
      {
        *(_DWORD *)(v9 + 4) = v8; /*0x5257a3*/
        *(_DWORD *)(this->sectionHead[1] + 8) = this->sectionHead[2]; /*0x5257ac*/
        this->sectionHead[2] = 0; /*0x5257af*/
        this->sectionHead[1] = 0; /*0x5257b2*/
      }
    }
  }
  return result; /*0x5257b5*/
}



// ==== 0x005257C0  INIClass::ClearSection  this=INIClass  sig=csp ====
int __thiscall INIClass::ClearSection(int *this, int a2, unsigned __int8 *a3)
{
  unsigned __int8 *v3; // edx
  bool v5; // zf
  int v6; // ecx
  int result; // eax
  int v8; // edi
  int v9; // edi
  int *v10; // ebp
  int v11; // esi
  int *v12; // esi
  int v13; // ebp
  unsigned __int8 *v14; // edx
  int v15; // eax
  int v16; // eax
  int i; // ecx
  _DWORD *v18; // eax
  int v19; // edi
  int v20; // eax
  unsigned __int8 *v21; // edx
  int v22; // [esp+10h] [ebp-10h] BYREF
  unsigned int v23; // [esp+14h] [ebp-Ch] BYREF
  int v24; // [esp+18h] [ebp-8h]
  int v25; // [esp+1Ch] [ebp-4h]

  v3 = (unsigned __int8 *)a2; /*0x5257c0*/
  v5 = a2 == 0; /*0x5257cf*/
  this->headNode = 0; /*0x5257d1*/
  this->q008 = 0; /*0x5257d4*/
  if ( v5 ) /*0x5257d7*/
  {
    while ( 1 ) /*0x5257d9*/
    {
      v6 = this->q014; /*0x5257d9*/
      if ( !v6 || !*(_DWORD *)(v6 + 4) || !*(_DWORD *)(v6 + 8) ) /*0x5257e5*/
        break; /*0x5257e5*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x5257f2*/
    }
    __3_YAXPAX_Z((void *)this->q028); /*0x5257fa*/
    this->q028 = 0; /*0x5257ff*/
    this->INIClass_field_2C = 0; /*0x525802*/
    this->q00C = 0; /*0x525805*/
    this->needsSave_flag = 0; /*0x525808*/
    this->unknown38 = 0; /*0x52580b*/
    result = this->INIClass_field_3C; /*0x52580e*/
    if ( result ) /*0x525816*/
    {
      do /*0x52583d*/
      {
        free(*(void **)this->INIClass_field_3C); /*0x525822*/
        v8 = *(_DWORD *)(this->INIClass_field_3C + 4); /*0x52582c*/
        __3_YAXPAX_Z((void *)this->INIClass_field_3C); /*0x525830*/
        this->INIClass_field_3C = v8; /*0x52583a*/
      }
      while ( v8 ); /*0x52583d*/
      LOBYTE(result) = 1; /*0x525842*/
      return result; /*0x525848*/
    }
LABEL_27:
    LOBYTE(result) = 1; /*0x5259f7*/
    return result; /*0x5259fa*/
  }
  v23 = 0; /*0x525852*/
  v24 = 0; /*0x52585b*/
  v25 = 0; /*0x525865*/
  v9 = Checksummer::Add_Buffer(&v23, v3, strlen((const char *)v3)); /*0x52586e*/
  v10 = this + 10; /*0x525870*/
  a2 = v9; /*0x52587a*/
  result = HashTable::BinarySearch(this + 10, &a2); /*0x52587e*/
  if ( !(_BYTE)result ) /*0x525885*/
    goto LABEL_27; /*0x525885*/
  v22 = v9; /*0x52588f*/
  result = (unsigned __int8)HashTable::BinarySearch(this + 10, &v22) ? this->unknown38 + 4 : (int)&unk_B7882C;
  v11 = *(_DWORD *)result; /*0x5258ac*/
  if ( !*(_DWORD *)result ) /*0x5258ac*/
    goto LABEL_27; /*0x5258b0*/
  if ( !a3 ) /*0x5258bc*/
  {
    v21 = *(unsigned __int8 **)(v11 + 12); /*0x5259b9*/
    v23 = 0; /*0x5259c3*/
    v24 = 0; /*0x5259c7*/
    v25 = 0; /*0x5259cb*/
    a2 = Checksummer::Add_Buffer(&v23, v21, strlen((const char *)v21)); /*0x5259e3*/
    INIClass::deleteSection((int)v10, &a2); /*0x5259ea*/
    result = (**(int (__thiscall ***)(int, int))v11)(v11, 1); /*0x5259f5*/
    goto LABEL_27; /*0x5259f5*/
  }
  v23 = 0; /*0x5258c9*/
  v24 = 0; /*0x5258d2*/
  v25 = 0; /*0x5258dc*/
  v12 = (int *)(v11 + 44); /*0x5258e5*/
  a2 = Checksummer::Add_Buffer(&v23, a3, strlen((const char *)a3)); /*0x5258ef*/
  result = SortedArray::Find(v12, &a2); /*0x5258f3*/
  if ( !(_BYTE)result ) /*0x5258fa*/
    goto LABEL_27; /*0x5258fa*/
  result = (unsigned __int8)SortedArray::Find(v12, &a2) ? v12[4] + 4 : (int)&unk_B78830;
  v13 = *(_DWORD *)result; /*0x52591d*/
  if ( !*(_DWORD *)result ) /*0x52591d*/
    goto LABEL_27; /*0x525921*/
  v14 = *(unsigned __int8 **)(v13 + 12); /*0x525927*/
  v23 = 0; /*0x525931*/
  v24 = 0; /*0x525935*/
  v25 = 0; /*0x525939*/
  a3 = (unsigned __int8 *)Checksummer::Add_Buffer(&v23, v14, strlen((const char *)v14)); /*0x525951*/
  v15 = HashTable::BinarySearchAlt((char **)v12, (int *)&a3); /*0x525958*/
  if ( v15 ) /*0x52595f*/
  {
    v16 = (v15 - *v12) >> 3; /*0x525963*/
    if ( v16 != -1 ) /*0x525969*/
    {
      for ( i = v16 + 1; i < v12[1]; *(v18 - 1) = v18[1] ) /*0x525973*/
      {
        v18 = (_DWORD *)(*v12 + 8 * i++); /*0x525977*/
        *(v18 - 2) = *v18; /*0x52597d*/
      }
      v19 = *v12; /*0x525990*/
      v20 = v12[1] - 1; /*0x525992*/
      v12[1] = v20; /*0x525995*/
      *(_DWORD *)(v19 + 8 * v20) = 0; /*0x52599a*/
      *(_DWORD *)(v19 + 8 * v20 + 4) = 0; /*0x52599d*/
      v12[4] = 0; /*0x5259a1*/
    }
  }
  result = (**(int (__thiscall ***)(int, int))v13)(v13, 1); /*0x5259ab*/
  LOBYTE(result) = 1; /*0x5259b0*/
  return result; /*0x52583f*/
}



// ==== 0x00525A10  FileStraw::Open  this=FileStraw  sig=csp ====
int __thiscall FileStraw::Open(FileStraw *this, int a2, char a3)
{
  int File; // esi
  int v5[4]; // [esp+4h] [ebp-14h] BYREF
  char v6; // [esp+14h] [ebp-4h]

  this->FileStraw_field_0x04 = 0; /*0x525a19*/
  *((_DWORD *)this + 2) = 0; /*0x525a1c*/
  v5[1] = 0; /*0x525a1f*/
  v5[2] = 0; /*0x525a23*/
  v6 = 0; /*0x525a27*/
  v5[3] = a2; /*0x525a2f*/
  v5[0] = (int)&FileStraw::`vftable'; /*0x525a3a*/
  File = INIClass::LoadFile((INIClass *)this, (int)v5, a3); /*0x525a4b*/
  FileStraw::Destructor((int)v5); /*0x525a4d*/
  return File; /*0x525a54*/
}



// ==== 0x00525A60  INIClass::LoadFile  this=INIClass  sig=csp ====
int __thiscall INIClass::LoadFile(INIClass *this, int a2, char a3)
{
  void *v3; // ebp
  int INIClass_field_2C; // eax
  void **v5; // edi
  char **v6; // ebx
  const char *p_unknown30; // ecx
  unsigned __int8 i; // al
  char **v9; // eax
  void **v10; // esi
  char *v11; // eax
  int v12; // esi
  const char *v13; // ecx
  unsigned __int8 j; // al
  char *v15; // eax
  char *v16; // eax
  char *v17; // esi
  int v19; // esi
  char *v20; // eax
  int v21; // ebx
  char *v22; // eax
  void **v23; // edi
  int v24; // ebp
  void *v25; // ecx
  const char *v26; // ecx
  unsigned __int8 m; // al
  char **v28; // esi
  int v29; // eax
  char *v30; // edi
  char *v31; // eax
  char *v32; // eax
  char *v33; // eax
  char *v34; // esi
  _DWORD *v35; // esi
  _DWORD *v36; // esi
  unsigned int v37; // edi
  unsigned int v38; // ebx
  char *v39; // eax
  void *v40; // edx
  char *v41; // eax
  int v42; // edx
  void *v43; // eax
  unsigned __int8 *v44; // edx
  char *v45; // eax
  int v46; // ecx
  int v47; // eax
  char *v48; // ebx
  int v49; // edi
  int v50; // eax
  int v51; // ecx
  int v52; // eax
  _DWORD *v53; // edx
  char *v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // ecx
  int v58; // edx
  int v59; // edx
  int v60; // ecx
  int v61; // eax
  void **v62; // esi
  unsigned __int8 *v63; // edx
  char *v64; // eax
  int *v65; // edi
  int v66; // eax
  int v67; // ebp
  int v68; // esi
  int v69; // ecx
  int v70; // eax
  int v71; // ecx
  int v72; // ecx
  int v73; // eax
  int v74; // eax
  int v75; // edi
  int v76; // ecx
  int v77; // edx
  int v78; // eax
  void **v79; // esi
  void **v80; // esi
  void **v81; // edi
  _BYTE v82[19]; // [esp+0h] [ebp-478h] BYREF
  char v83; // [esp+13h] [ebp-465h] BYREF
  void *k; // [esp+14h] [ebp-464h]
  char v85; // [esp+1Bh] [ebp-45Dh]
  int v86; // [esp+1Ch] [ebp-45Ch]
  void *Block; // [esp+20h] [ebp-458h]
  char *v88; // [esp+24h] [ebp-454h]
  int *v89; // [esp+28h] [ebp-450h]
  int v90; // [esp+2Ch] [ebp-44Ch] BYREF
  unsigned int v91; // [esp+30h] [ebp-448h] BYREF
  unsigned int v92; // [esp+34h] [ebp-444h] BYREF
  int v93; // [esp+38h] [ebp-440h]
  Straw v94; // [esp+3Ch] [ebp-43Ch] BYREF
  int v95; // [esp+44h] [ebp-434h]
  INIClass v96; // [esp+48h] [ebp-430h] BYREF
  char v97[512]; // [esp+278h] [ebp-200h] BYREF

  v3 = this; /*0x525a69*/
  this->headNode[0] = 0; /*0x525a6e*/
  this->headNode[1] = 0; /*0x525a71*/
  INIClass_field_2C = this->INIClass_field_2C; /*0x525a74*/
  v5 = 0; /*0x525a77*/
  v6 = 0; /*0x525a79*/
  v89 = (int *)this; /*0x525a7d*/
  v83 = 0; /*0x525a81*/
  k = 0; /*0x525a86*/
  v85 = 0; /*0x525a8a*/
  if ( INIClass_field_2C > 0 ) /*0x525a8e*/
  {
    v85 = 1; /*0x525a90*/
    a3 = 0; /*0x525a95*/
  }
  v94.Straw_field_0x04 = 0; /*0x525aa5*/
  v95 = 0; /*0x525aa9*/
  INIClass::loadFile(&v96, 4096); /*0x525ab5*/
  v96.headNode[2] = 0; /*0x525ac6*/
  v96.sectionHead[0] = 0; /*0x525aca*/
  *(_DWORD *)v94.__pad_0 = &CacheStraw::`vftable'; /*0x525ace*/
  Delegate::Set(&v94, a2); /*0x525ad6*/
  do /*0x525b9d*/
  {
    ReadStreamLine((int)&v94, (const char *)&v96.unknown30, 512, &v83); /*0x525afa*/
    if ( v83 ) /*0x525b05*/
    {
      if ( a3 ) /*0x525baf*/
      {
        *((_DWORD *)v3 + 15) = v5; /*0x525bb1*/
        goto LABEL_51; /*0x525bb4*/
      }
      if ( v5 ) /*0x525bbb*/
      {
        do /*0x525bd9*/
        {
          free(*v5); /*0x525bc4*/
          v10 = (void **)v5[1]; /*0x525bc9*/
          __3_YAXPAX_Z(v5); /*0x525bcd*/
          v5 = v10; /*0x525bd5*/
        }
        while ( v10 ); /*0x525bd9*/
      }
      goto LABEL_143; /*0x525bd9*/
    }
    p_unknown30 = (const char *)&v96.unknown30; /*0x525b0f*/
    if ( v82 != (_BYTE *)-120 ) /*0x525b15*/
    {
      for ( i = v96.unknown30; i; i = *++p_unknown30 ) /*0x525b1d*/
      {
        if ( i > 0x20u ) /*0x525b21*/
          break; /*0x525b21*/
      }
      if ( *p_unknown30 == 91 && strchr(p_unknown30, 93) ) /*0x525b33*/
        break; /*0x525b3d*/
    }
    if ( a3 ) /*0x525b4c*/
    {
      v9 = (char **)__2_YAPAXI_Z(8u); /*0x525b50*/
      if ( v9 ) /*0x525b5c*/
      {
        *v9 = 0; /*0x525b60*/
        v9[1] = 0; /*0x525b66*/
        if ( v6 ) /*0x525b6d*/
        {
          v6[1] = (char *)v9; /*0x525b6f*/
          v6 = v9; /*0x525b72*/
        }
        else
        {
          v5 = (void **)v9; /*0x525b80*/
          v6 = v9; /*0x525b82*/
          k = v9; /*0x525b84*/
        }
        *v9 = _strdup((const char *)&v96.unknown30); /*0x525b95*/
      }
      else
      {
        a3 = 0; /*0x525b76*/
      }
    }
  }
  while ( !v83 ); /*0x525b9d*/
  if ( v85 ) /*0x525be8*/
  {
    if ( v83 ) /*0x525bf4*/
      goto LABEL_50; /*0x525bf4*/
LABEL_27:
    v97[0] = 0; /*0x525bfa*/
    String::Trim((char *)&v96.unknown30); /*0x525c06*/
    if ( LOBYTE(v96.unknown30) == 91 ) /*0x525c10*/
    {
      v11 = strchr((const char *)&v96.unknown30, 93); /*0x525c19*/
      if ( v11 ) /*0x525c23*/
        *v11 = 0; /*0x525c25*/
      strcpy(v97, (const char *)&v96.unknown30 + 1); /*0x525c47*/
    }
    if ( v83 ) /*0x525c56*/
      goto LABEL_50; /*0x525c56*/
    while ( 1 ) /*0x525c77*/
    {
      v12 = ReadStreamLine((int)&v94, (const char *)&v96.unknown30, 512, &v83); /*0x525c77*/
      v13 = (const char *)&v96.unknown30; /*0x525c7b*/
      if ( v82 != (_BYTE *)-120 ) /*0x525c7f*/
      {
        for ( j = v96.unknown30; j; j = *++v13 ) /*0x525c87*/
        {
          if ( j > 0x20u ) /*0x525c8b*/
            break; /*0x525c8b*/
        }
        if ( *v13 == 91 && strchr(v13, 93) ) /*0x525c9d*/
        {
          if ( v83 ) /*0x525d53*/
            goto LABEL_50; /*0x525d53*/
          goto LABEL_27; /*0x525d53*/
        }
        v15 = strchr((const char *)&v96.unknown30, 59); /*0x525cb4*/
        if ( v15 ) /*0x525cbe*/
        {
          *v15 = 0; /*0x525cc4*/
          String::Trim((char *)&v96.unknown30); /*0x525cc7*/
        }
      }
      if ( v12 ) /*0x525cce*/
      {
        if ( LOBYTE(v96.unknown30) != 59 && LOBYTE(v96.unknown30) != 61 ) /*0x525cda*/
        {
          v16 = strchr((const char *)&v96.unknown30, 61); /*0x525ce3*/
          if ( v16 ) /*0x525cef*/
          {
            *v16 = 0; /*0x525cf1*/
            v17 = v16 + 1; /*0x525cf8*/
            String::Trim((char *)&v96.unknown30); /*0x525cf9*/
            if ( strlen((const char *)&v96.unknown30) ) /*0x525d02*/
            {
              String::Trim(v17); /*0x525d10*/
              if ( strlen(v17) ) /*0x525d17*/
              {
                if ( !INIClass::SetString((char *)v3, (unsigned __int8 *)v97, (char *)&v96.unknown30, v17) ) /*0x525d3a*/
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
      v19 = *(_DWORD *)(*((_DWORD *)v3 + 15) + 4); /*0x525d9d*/
      __3_YAXPAX_Z(*((void **)v3 + 15)); /*0x525da1*/
      *((_DWORD *)v3 + 15) = v19; /*0x525da9*/
    }
    while ( v19 ); /*0x525dae*/
  }
  if ( v83 ) /*0x525db6*/
    goto LABEL_50; /*0x525db6*/
  while ( 2 ) /*0x525db8*/
  {
    String::Trim((char *)&v96.unknown30); /*0x525db8*/
    if ( LOBYTE(v96.unknown30) == 91 ) /*0x525dc6*/
    {
      v20 = strchr((const char *)&v96.unknown30, 93); /*0x525dcf*/
      if ( v20 ) /*0x525dd9*/
        *v20 = 0; /*0x525ddb*/
    }
    else
    {
      LOWORD(v96.unknown30) = 0; /*0x525de0*/
    }
    v21 = __2_YAPAXI_Z(0x44u); /*0x525df1*/
    v93 = v21; /*0x525df8*/
    if ( v21 ) /*0x525dfc*/
    {
      v22 = _strdup((const char *)&v96.unknown30 + 1); /*0x525e07*/
      v23 = 0; /*0x525e0f*/
      *(_DWORD *)(v21 + 4) = 0; /*0x525e16*/
      *(_DWORD *)(v21 + 8) = 0; /*0x525e19*/
      *(_DWORD *)v21 = &Node<INIClass::INISection *>::`vftable'; /*0x525e1c*/
      *(_DWORD *)(v21 + 12) = v22; /*0x525e22*/
      GenericList::Constructor((GenericList *)(v21 + 16)); /*0x525e25*/
      v24 = v21 + 44; /*0x525e2a*/
      *(_DWORD *)(v21 + 16) = &List<INIClass::INIEntry *>::`vftable'; /*0x525e2d*/
      INIClass::getValue((INIClass *)(v21 + 44)); /*0x525e35*/
      v25 = k; /*0x525e3a*/
      *(_DWORD *)v21 = &INIClass::INISection::`vftable'; /*0x525e3e*/
      *(_DWORD *)(v21 + 64) = v25; /*0x525e44*/
      v86 = 0; /*0x525e4d*/
      for ( k = 0; !v83; v23 = (void **)k ) /*0x525e55*/
      {
        v88 = (char *)ReadStreamLine((int)&v94, (const char *)&v96.unknown30, 512, &v83); /*0x525e75*/
        if ( v83 ) /*0x525e7f*/
          break; /*0x525e7f*/
        v26 = (const char *)&v96.unknown30; /*0x525e89*/
        if ( v82 != (_BYTE *)-120 ) /*0x525e8f*/
        {
          for ( m = v96.unknown30; m; m = *++v26 ) /*0x525e97*/
          {
            if ( m > 0x20u ) /*0x525e9b*/
              break; /*0x525e9b*/
          }
          if ( *v26 == 91 && strchr(v26, 93) ) /*0x525ead*/
            break; /*0x525eb7*/
        }
        if ( a3 ) /*0x525ec6*/
        {
          v28 = (char **)__2_YAPAXI_Z(8u); /*0x525ecf*/
          if ( v28 ) /*0x525ed6*/
          {
            v29 = v86; /*0x525ed8*/
            *v28 = 0; /*0x525edc*/
            v28[1] = 0; /*0x525ee4*/
            if ( v29 ) /*0x525eeb*/
            {
              *(_DWORD *)(v29 + 4) = v28; /*0x525eed*/
              v86 = (int)v28; /*0x525ef0*/
            }
            else
            {
              v86 = (int)v28; /*0x525f00*/
              k = v28; /*0x525f04*/
            }
            *v28 = _strdup((const char *)&v96.unknown30); /*0x525f15*/
          }
          else
          {
            a3 = 0; /*0x525ef6*/
          }
        }
        v30 = 0; /*0x525f20*/
        v91 = 0; /*0x525f22*/
        v92 = 0; /*0x525f28*/
        v90 = 0; /*0x525f2c*/
        Block = 0; /*0x525f30*/
        if ( a3 ) /*0x525f34*/
        {
          v31 = System_Load((unsigned __int8 *)&v96.unknown30, &v91, &v92, (unsigned int *)&v90); /*0x525f4b*/
          v30 = v31; /*0x525f50*/
          Block = v31; /*0x525f54*/
          if ( v31 ) /*0x525f58*/
          {
            v30 = _strdup(v31); /*0x525f60*/
            Block = v30; /*0x525f65*/
          }
        }
        if ( v82 != (_BYTE *)-120 ) /*0x525f6f*/
        {
          v32 = strchr((const char *)&v96.unknown30, 59); /*0x525f78*/
          if ( v32 ) /*0x525f82*/
          {
            *v32 = 0; /*0x525f88*/
            String::Trim((char *)&v96.unknown30); /*0x525f8b*/
          }
        }
        if ( !v88 /*0x525fc1*/
          || LOBYTE(v96.unknown30) == 59
          || LOBYTE(v96.unknown30) == 61
          || (v33 = strchr((const char *)&v96.unknown30, 61)) == 0 )
        {
          free(v30); /*0x5261df*/
        }
        else
        {
          *v33 = 0; /*0x525fc7*/
          v34 = v33 + 1; /*0x525fca*/
          v88 = v33 + 1; /*0x525fcf*/
          String::Trim((char *)&v96.unknown30); /*0x525fd3*/
          if ( strlen((const char *)&v96.unknown30) ) /*0x525fdc*/
          {
            String::Trim(v34); /*0x525ff4*/
            if ( strlen(v34) ) /*0x525ffb*/
            {
              if ( a3 ) /*0x52601a*/
              {
                v35 = (_DWORD *)v86; /*0x52601c*/
                if ( v86 ) /*0x526022*/
                {
                  if ( *(_DWORD *)v86 ) /*0x526024*/
                  {
                    free(*(void **)v86); /*0x52602b*/
                    *v35 = 0; /*0x526033*/
                  }
                }
              }
              v36 = (_DWORD *)__2_YAPAXI_Z(0x28u); /*0x526040*/
              if ( !v36 ) /*0x526047*/
              {
                free(Block); /*0x5263ae*/
                v80 = (void **)k; /*0x5263b3*/
                if ( k ) /*0x5263bc*/
                {
                  do /*0x5263d6*/
                  {
                    free(*v80); /*0x5263c1*/
                    v81 = (void **)v80[1]; /*0x5263c6*/
                    __3_YAXPAX_Z(v80); /*0x5263ca*/
                    v80 = v81; /*0x5263d2*/
                  }
                  while ( v81 ); /*0x5263d6*/
                }
                if ( v21 ) /*0x5263da*/
                  (**(void (__thiscall ***)(int, int))v21)(v21, 1); /*0x5263e2*/
                INIClass::ClearSection(v89, 0, 0); /*0x5263ec*/
                goto LABEL_143; /*0x5263ec*/
              }
              v37 = v92; /*0x526055*/
              v38 = v91; /*0x526059*/
              v86 = v90; /*0x52605e*/
              v88 = _strdup(v88); /*0x52606b*/
              v39 = _strdup((const char *)&v96.unknown30); /*0x526070*/
              v40 = k; /*0x526075*/
              v36[3] = v39; /*0x526079*/
              v41 = v88; /*0x52607c*/
              v36[5] = v40; /*0x526080*/
              v42 = v86; /*0x526083*/
              v36[4] = v41; /*0x526087*/
              v43 = Block; /*0x52608a*/
              v36[1] = 0; /*0x526090*/
              v36[2] = 0; /*0x526093*/
              v36[6] = v43; /*0x526096*/
              v36[7] = v38; /*0x526099*/
              v36[8] = v37; /*0x52609c*/
              v36[9] = v42; /*0x52609f*/
              *v36 = &INIClass::INIEntry::`vftable'; /*0x5260a2*/
              v44 = (unsigned __int8 *)v36[3]; /*0x5260a8*/
              v86 = 0; /*0x5260ab*/
              k = 0; /*0x5260af*/
              memset(&v96.sectionHead[2], 0, 12); /*0x5260b3*/
              v45 = (char *)Checksummer::Add_Buffer((Checksummer *)&v96.sectionHead[2], v44, strlen((const char *)v44)); /*0x5260d4*/
              v46 = *(_DWORD *)(v24 + 4); /*0x5260d9*/
              v88 = v45; /*0x5260dc*/
              v47 = *(_DWORD *)(v24 + 8); /*0x5260e0*/
              if ( v46 + 1 <= v47 ) /*0x5260e6*/
              {
LABEL_101:
                *(_DWORD *)(*(_DWORD *)v24 + 8 * *(_DWORD *)(v24 + 4)) = v88; /*0x526177*/
                *(_DWORD *)(*(_DWORD *)v24 + 8 * *(_DWORD *)(v24 + 4) + 4) = v36; /*0x52618a*/
                v55 = *(_DWORD *)(v24 + 4) + 1; /*0x526191*/
                *(_BYTE *)(v24 + 12) = 0; /*0x526192*/
                *(_DWORD *)(v24 + 4) = v55; /*0x526196*/
              }
              else
              {
                if ( !v47 ) /*0x5260ee*/
                {
                  Block = (void *)10; /*0x5260f0*/
                  goto LABEL_97; /*0x5260f8*/
                }
                Block = *(void **)(v24 + 8); /*0x5260fe*/
                if ( v47 >= 0 ) /*0x526102*/
                {
LABEL_97:
                  v48 = (char *)Block + v47; /*0x526108*/
                  v49 = __2_YAPAXI_Z(8 * ((_DWORD)Block + v47)); /*0x52611c*/
                  if ( v49 ) /*0x526123*/
                  {
                    v50 = *(_DWORD *)(v24 + 4); /*0x526125*/
                    v51 = 0; /*0x526129*/
                    v96.sectionHead[1] = (int)(v48 - 1); /*0x52612b*/
                    if ( v50 > 0 ) /*0x526131*/
                    {
                      do /*0x526153*/
                      {
                        v52 = 8 * v51; /*0x526136*/
                        v53 = (_DWORD *)(*(_DWORD *)v24 + 8 * v51++); /*0x52613f*/
                        *(_DWORD *)(v52 + v49) = *v53; /*0x526144*/
                        *(_DWORD *)(v52 + v49 + 4) = v53[1]; /*0x52614a*/
                      }
                      while ( v51 < *(_DWORD *)(v24 + 4) ); /*0x526153*/
                    }
                    __3_YAXPAX_Z(*(void **)v24); /*0x526159*/
                    v54 = (char *)Block + *(_DWORD *)(v24 + 8); /*0x526168*/
                    *(_DWORD *)v24 = v49; /*0x52616a*/
                    *(_DWORD *)(v24 + 8) = v54; /*0x52616d*/
                    *(_DWORD *)(v24 + 16) = 0; /*0x526170*/
                    goto LABEL_101; /*0x526170*/
                  }
                }
              }
              v56 = *(_DWORD *)(v93 + 40); /*0x52619f*/
              v57 = v36[1]; /*0x5261a2*/
              if ( v57 ) /*0x5261a7*/
              {
                v58 = v36[2]; /*0x5261a9*/
                if ( v58 ) /*0x5261ae*/
                {
                  *(_DWORD *)(v58 + 4) = v57; /*0x5261b0*/
                  *(_DWORD *)(v36[1] + 8) = v36[2]; /*0x5261b9*/
                  v36[2] = 0; /*0x5261bc*/
                  v36[1] = 0; /*0x5261bf*/
                }
              }
              v59 = *(_DWORD *)(v56 + 4); /*0x5261c2*/
              v36[2] = v56; /*0x5261c5*/
              v36[1] = v59; /*0x5261c8*/
              v60 = *(_DWORD *)(v56 + 4); /*0x5261cb*/
              if ( v60 ) /*0x5261d0*/
                *(_DWORD *)(v60 + 8) = v36; /*0x5261d2*/
              v21 = v93; /*0x5261d5*/
              *(_DWORD *)(v56 + 4) = v36; /*0x5261d9*/
              continue; /*0x5261dc*/
            }
          }
          free(Block); /*0x525fed*/
        }
      }
      if ( !a3 ) /*0x526200*/
      {
        v61 = *(_DWORD *)(v21 + 24); /*0x526202*/
        if ( !v61 || !*(_DWORD *)(v61 + 4) || !*(_DWORD *)(v61 + 8) ) /*0x526210*/
        {
          if ( v23 ) /*0x526219*/
          {
            do /*0x526233*/
            {
              free(*v23); /*0x52621e*/
              v62 = (void **)v23[1]; /*0x526223*/
              __3_YAXPAX_Z(v23); /*0x526227*/
              v23 = v62; /*0x52622f*/
            }
            while ( v62 ); /*0x526233*/
            k = 0; /*0x526235*/
          }
          (**(void (__thiscall ***)(int, int))v21)(v21, 1); /*0x52623f*/
LABEL_133:
          if ( !v83 ) /*0x526370*/
          {
            v5 = (void **)k; /*0x526376*/
            v3 = v89; /*0x52637a*/
            continue; /*0x52637e*/
          }
LABEL_50:
          v89[15] = (int)k; /*0x525d59*/
LABEL_51:
          Vector::Clear((int)&v96); /*0x525d64*/
          Straw::Dtor(&v94); /*0x525d71*/
          return 1; /*0x525d85*/
        }
      }
      v63 = *(unsigned __int8 **)(v21 + 12); /*0x526246*/
      memset(&v96.__pad_20[4], 0, 12); /*0x526252*/
      v64 = (char *)Checksummer::Add_Buffer((Checksummer *)&v96.__pad_20[4], v63, strlen((const char *)v63)); /*0x526269*/
      v65 = v89; /*0x52626e*/
      v88 = v64; /*0x526272*/
      v66 = v89[12]; /*0x526279*/
      if ( v89[11] + 1 <= v66 ) /*0x52627f*/
      {
LABEL_126:
        *(_DWORD *)(v65[10] + 8 * v65[11]) = v88; /*0x52630b*/
        *(_DWORD *)(v65[10] + 8 * v65[11] + 4) = v21; /*0x52631e*/
        v73 = v65[11] + 1; /*0x526325*/
        *((_BYTE *)v65 + 52) = 0; /*0x526326*/
        v65[11] = v73; /*0x52632a*/
      }
      else
      {
        if ( !v66 ) /*0x526287*/
        {
          v86 = 10; /*0x526289*/
          goto LABEL_122; /*0x526291*/
        }
        v86 = v89[12]; /*0x526297*/
        if ( v66 >= 0 ) /*0x52629b*/
        {
LABEL_122:
          v67 = v86 + v66; /*0x5262a1*/
          v68 = __2_YAPAXI_Z(8 * (v86 + v66)); /*0x5262b5*/
          if ( v68 ) /*0x5262bc*/
          {
            v69 = v65[11]; /*0x5262be*/
            v70 = 0; /*0x5262c2*/
            v96.sectionHead[1] = v67 - 1; /*0x5262c4*/
            if ( v69 > 0 ) /*0x5262ca*/
            {
              do /*0x5262e5*/
              {
                v71 = v65[10]; /*0x5262cc*/
                ++v70; /*0x5262cf*/
                *(_DWORD *)(v68 + 8 * v70 - 8) = *(_DWORD *)(v71 + 8 * v70 - 8); /*0x5262d4*/
                *(_DWORD *)(v68 + 8 * v70 - 4) = *(_DWORD *)(v71 + 8 * v70 - 4); /*0x5262dc*/
              }
              while ( v70 < v65[11] ); /*0x5262e5*/
            }
            __3_YAXPAX_Z((void *)v65[10]); /*0x5262eb*/
            v72 = v86 + v65[12]; /*0x5262f7*/
            v65[10] = v68; /*0x5262fc*/
            v65[12] = v72; /*0x5262ff*/
            v65[14] = 0; /*0x526302*/
            goto LABEL_126; /*0x526302*/
          }
        }
      }
      v74 = *(_DWORD *)(v21 + 4); /*0x526331*/
      v75 = v65[9]; /*0x526334*/
      if ( v74 ) /*0x526339*/
      {
        v76 = *(_DWORD *)(v21 + 8); /*0x52633b*/
        if ( v76 ) /*0x526340*/
        {
          *(_DWORD *)(v76 + 4) = v74; /*0x526342*/
          *(_DWORD *)(*(_DWORD *)(v21 + 4) + 8) = *(_DWORD *)(v21 + 8); /*0x52634b*/
          *(_DWORD *)(v21 + 8) = 0; /*0x52634e*/
          *(_DWORD *)(v21 + 4) = 0; /*0x526351*/
        }
      }
      v77 = *(_DWORD *)(v75 + 4); /*0x526354*/
      *(_DWORD *)(v21 + 8) = v75; /*0x526357*/
      *(_DWORD *)(v21 + 4) = v77; /*0x52635a*/
      v78 = *(_DWORD *)(v75 + 4); /*0x52635d*/
      if ( v78 ) /*0x526362*/
        *(_DWORD *)(v78 + 8) = v21; /*0x526364*/
      *(_DWORD *)(v75 + 4) = v21; /*0x526367*/
      goto LABEL_133; /*0x526367*/
    }
    break;
  }
  if ( v5 ) /*0x526385*/
  {
    do /*0x52639f*/
    {
      free(*v5); /*0x52638a*/
      v79 = (void **)v5[1]; /*0x52638f*/
      __3_YAXPAX_Z(v5); /*0x526393*/
      v5 = v79; /*0x52639b*/
    }
    while ( v79 ); /*0x52639f*/
  }
  INIClass::ClearSection((int *)v3, 0, 0); /*0x5263a7*/
LABEL_143:
  Vector::Clear((int)&v96); /*0x5263f1*/
  Straw::Dtor(&v94); /*0x5263fe*/
  return 0; /*0x525d76*/
}



// ==== 0x00526420  INIClass::SaveToPipe  this=INIClass  sig=csp ====
int __thiscall INIClass::SaveToPipe(INIClass *this, int a2)
{
  int v2; // esi
  int v4[4]; // [esp+4h] [ebp-14h] BYREF
  char v5; // [esp+14h] [ebp-4h]

  this->headNode[0] = 0; /*0x526429*/
  this->headNode[1] = 0; /*0x52642c*/
  v4[1] = 0; /*0x52642f*/
  v4[2] = 0; /*0x526433*/
  v5 = 0; /*0x526437*/
  v4[3] = a2; /*0x526441*/
  v4[0] = (int)&FilePipe::`vftable'; /*0x526445*/
  v2 = INIClass::WriteToString(this, (int)v4); /*0x526456*/
  FilePipe::Destructor((int)v4); /*0x526458*/
  return v2; /*0x52645f*/
}



// ==== 0x00526470  INIClass::WriteToString  this=INIClass  sig=csp ====
int __thiscall INIClass::WriteToString(INIClass *this, int a2)
{
  INIClass *v2; // edx
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
  _DWORD *INIClass_field_3C; // eax
  int v24; // ebp
  _DWORD *v26; // [esp+98h] [ebp-218h]
  int v27; // [esp+98h] [ebp-218h]
  _DWORD *i; // [esp+9Ch] [ebp-214h]
  _DWORD *k; // [esp+A0h] [ebp-210h]
  int v31; // [esp+A4h] [ebp-20Ch]
  _BYTE v32[512]; // [esp+B0h] [ebp-200h] BYREF

  v2 = this; /*0x526478*/
  v3 = 0; /*0x52647a*/
  this->headNode[0] = 0; /*0x526485*/
  this->headNode[1] = 0; /*0x526488*/
  v4 = this->sectionHead[1]; /*0x52648b*/
  memset(v32, 0x20u, sizeof(v32)); /*0x52649e*/
  v32[511] = 0; /*0x5264a4*/
  v31 = v4; /*0x5264ac*/
  if ( v4 ) /*0x5264b0*/
  {
    while ( *(_DWORD *)(v4 + 4) && *(_DWORD *)(v4 + 8) ) /*0x5264cc*/
    {
      if ( v3 > 0 && !*(_DWORD *)(v4 + 64) ) /*0x5264d6*/
        v3 += (*(int (__thiscall **)(int, CHAR *, unsigned int))(*(_DWORD *)a2 + 16))(a2, String2, strlen(String2)); /*0x5264f9*/
      v5 = *(_DWORD **)(v4 + 64); /*0x5264fb*/
      for ( i = v5; v5; i = v5 ) /*0x526504*/
      {
        if ( *v5 ) /*0x526506*/
        {
          v6 = (*(int (__thiscall **)(int, _DWORD, unsigned int))(*(_DWORD *)a2 + 16))( /*0x526521*/
                 a2,
                 *v5,
                 strlen((const char *)*v5))
             + v3;
          v4 = v31; /*0x52653f*/
          v3 = (*(int (__thiscall **)(int, CHAR *, unsigned int))(*(_DWORD *)a2 + 16))(a2, String2, strlen(String2)) /*0x526543*/
             + v6;
          v5 = i; /*0x526545*/
        }
        v5 = (_DWORD *)v5[1]; /*0x526549*/
      }
      v7 = (*(int (__thiscall **)(int, char *, int))(*(_DWORD *)a2 + 16))(a2, asc_825B68, 1) + v3; /*0x526565*/
      v8 = (*(int (__thiscall **)(int, _DWORD, unsigned int))(*(_DWORD *)a2 + 16))( /*0x526587*/
             a2,
             *(_DWORD *)(v4 + 12),
             strlen(*(const char **)(v4 + 12)))
         + v7;
      v9 = (*(int (__thiscall **)(int, char *, int))(*(_DWORD *)a2 + 16))(a2, asc_825B64, 1) + v8; /*0x52658c*/
      v3 = (*(int (__thiscall **)(int, CHAR *, unsigned int))(*(_DWORD *)a2 + 16))(a2, String2, strlen(String2)) + v9; /*0x5265aa*/
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
              v12 = (*(int (__thiscall **)(int, _DWORD, unsigned int))(*(_DWORD *)a2 + 16))( /*0x526601*/
                      a2,
                      *v26,
                      strlen((const char *)*v11))
                  + v3;
              v3 = (*(int (__thiscall **)(int, CHAR *, unsigned int))(*(_DWORD *)a2 + 16))(a2, String2, strlen(String2)) /*0x52661f*/
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
        v16 = (*(int (__thiscall **)(int, _DWORD, unsigned int))(*(_DWORD *)a2 + 16))(a2, *(_DWORD *)(j + 12), v13 - 1) /*0x52667b*/
            + v3;
        if ( v15 > 0 ) /*0x52667f*/
        {
          v16 += (*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a2 + 16))(a2, v32, v15); /*0x52668e*/
          v27 = v15; /*0x526690*/
        }
        v17 = (*(int (__thiscall **)(int, char *, int))(*(_DWORD *)a2 + 16))(a2, asc_818A0C, 1) + v16; /*0x5266a9*/
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
        v17 += (*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a2 + 16))(a2, v32, v18); /*0x5266d4*/
        v27 += v18; /*0x5266dc*/
LABEL_30:
        v19 = (*(int (__thiscall **)(int, _DWORD, unsigned int))(*(_DWORD *)a2 + 16))(a2, *(_DWORD *)(j + 16), v14 - 1) /*0x5266e0*/
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
            v19 += (*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a2 + 16))(a2, v32, v20); /*0x52671d*/
          v21 = (*(int (__thiscall **)(int, char *, int))(*(_DWORD *)a2 + 16))(a2, asc_81C8FC, 1); /*0x526737*/
          v19 += (*(int (__thiscall **)(int, _DWORD, unsigned int))(*(_DWORD *)a2 + 16))( /*0x526755*/
                   a2,
                   *(_DWORD *)(j + 24),
                   strlen(*(const char **)(j + 24)))
               + v21;
        }
        v22 = (*(int (__thiscall **)(int, CHAR *, unsigned int))(*(_DWORD *)a2 + 16))(a2, String2, strlen(String2)); /*0x526757*/
        j = *(_DWORD *)(j + 4); /*0x526773*/
      }
      v2 = this; /*0x526780*/
      v31 = *(_DWORD *)(v31 + 4); /*0x52678d*/
      if ( !v31 ) /*0x526791*/
        break; /*0x526791*/
      v4 = v31; /*0x5264b8*/
    }
  }
  INIClass_field_3C = (_DWORD *)v2->INIClass_field_3C; /*0x526797*/
  for ( k = INIClass_field_3C; INIClass_field_3C; k = INIClass_field_3C ) /*0x5267a0*/
  {
    if ( *INIClass_field_3C ) /*0x5267a2*/
    {
      v24 = (*(int (__thiscall **)(int, _DWORD, unsigned int))(*(_DWORD *)a2 + 16))( /*0x5267bd*/
              a2,
              *INIClass_field_3C,
              strlen((const char *)*INIClass_field_3C))
          + v3;
      v3 = (*(int (__thiscall **)(int, CHAR *, unsigned int))(*(_DWORD *)a2 + 16))(a2, String2, strlen(String2)) + v24; /*0x5267db*/
      INIClass_field_3C = k; /*0x5267dd*/
    }
    INIClass_field_3C = (_DWORD *)INIClass_field_3C[1]; /*0x5267e1*/
  }
  return v3 + (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2); /*0x5267f3*/
}



// ==== 0x00526810  INIClass::BinarySearchSection  this=INIClass  sig=csp ====
int __thiscall INIClass_BinarySearchSection(int this, unsigned __int8 *a2)
{
  int v3; // eax
  size_t v4; // ecx
  unsigned int v5; // edi
  _DWORD *v6; // eax
  int v7; // eax
  size_t v8; // eax
  _DWORD *v9; // ecx
  int v10; // ecx
  int v11; // ebp
  int v12; // edi
  int v13; // edx
  unsigned int v15[3]; // [esp+Ch] [ebp-Ch] BYREF
  int v16; // [esp+1Ch] [ebp+4h]

  if ( !a2 ) /*0x526820*/
    return 0; /*0x526820*/
  memset(v15, 0, sizeof(v15)); /*0x52682d*/
  v3 = Checksummer::Add_Buffer(v15, a2, strlen((const char *)a2)); /*0x526844*/
  v4 = *(_DWORD *)(this + 44); /*0x526849*/
  v5 = v3; /*0x52684c*/
  v16 = v3; /*0x526850*/
  if ( !v4 ) /*0x526854*/
    return 0; /*0x526854*/
  v6 = *(_DWORD **)(this + 56); /*0x52685a*/
  if ( v6 && *v6 == v5 ) /*0x526863*/
    goto LABEL_9; /*0x526863*/
  if ( !*(_BYTE *)(this + 52) ) /*0x526865*/
  {
    qsort(*(void **)(this + 40), v4, 8u, CompareFunc4Int); /*0x526876*/
    *(_DWORD *)(this + 56) = 0; /*0x52687e*/
    *(_BYTE *)(this + 52) = 1; /*0x526881*/
  }
  v15[0] = v5; /*0x526890*/
  v7 = System_Search(v15); /*0x526894*/
  if ( !v7 ) /*0x52689b*/
    return 0; /*0x526938*/
  *(_DWORD *)(this + 56) = v7; /*0x5268a1*/
LABEL_9:
  v8 = *(_DWORD *)(this + 44); /*0x5268a4*/
  if ( !v8 ) /*0x5268aa*/
    return unk_B7882C; /*0x5268aa*/
  v9 = *(_DWORD **)(this + 56); /*0x5268ac*/
  if ( v9 && *v9 == v5 ) /*0x5268b5*/
    return *(_DWORD *)(*(_DWORD *)(this + 56) + 4); /*0x526933*/
  if ( !*(_BYTE *)(this + 52) ) /*0x5268b7*/
  {
    qsort(*(void **)(this + 40), v8, 8u, CompareFunc4Int); /*0x5268c8*/
    *(_DWORD *)(this + 56) = 0; /*0x5268d0*/
    *(_BYTE *)(this + 52) = 1; /*0x5268d3*/
  }
  v10 = *(_DWORD *)(this + 44); /*0x5268d7*/
  v11 = *(_DWORD *)(this + 40); /*0x5268da*/
  if ( v10 <= 0 ) /*0x5268df*/
    return unk_B7882C; /*0x5268df*/
  while ( 1 ) /*0x5268ec*/
  {
    v12 = *(_DWORD *)(v11 + 8 * (v10 / 2)); /*0x5268ec*/
    v13 = v11 + 8 * (v10 / 2); /*0x5268f0*/
    if ( v12 <= v16 ) /*0x5268f6*/
      break; /*0x5268f6*/
    v10 /= 2; /*0x5268f8*/
LABEL_19:
    if ( v10 <= 0 ) /*0x52690a*/
      return unk_B7882C; /*0x52690a*/
  }
  if ( v12 != v16 ) /*0x5268fc*/
  {
    v11 = v13 + 8; /*0x5268fe*/
    v10 += -1 - v10 / 2; /*0x526906*/
    goto LABEL_19; /*0x526906*/
  }
  if ( v13 ) /*0x52691f*/
  {
    *(_DWORD *)(this + 56) = v13; /*0x526921*/
    return *(_DWORD *)(*(_DWORD *)(this + 56) + 4); /*0x526921*/
  }
  return unk_B7882C; /*0x526912*/
}



// ==== 0x00526950  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_526950(ObjectClass *this)
{
  return this->fallRate; /*0x526953*/
}



// ==== 0x00526960  INIClass::GetKeyCount  this=INIClass  sig=csp ====
int __thiscall INIClass_GetKeyCount(char *this, unsigned __int8 *a2)
{
  char *v2; // esi
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  int *v9; // esi
  int v10; // esi
  unsigned int v12[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !a2 ) /*0x52696d*/
    return 0; /*0x52696d*/
  memset(v12, 0, sizeof(v12)); /*0x52697a*/
  v2 = this + 40; /*0x5269a2*/
  v3 = Checksummer::Add_Buffer(v12, a2, strlen((const char *)a2)); /*0x5269a5*/
  a2 = (unsigned __int8 *)v3; /*0x5269a7*/
  if ( !*((_DWORD *)v2 + 1) ) /*0x5269ab*/
    return 0; /*0x5269b0*/
  v4 = (_DWORD *)*((_DWORD *)v2 + 4); /*0x5269b2*/
  if ( !v4 || *v4 != v3 ) /*0x5269bb*/
  {
    v5 = SortedArray::BinarySearch(&a2); /*0x5269c4*/
    if ( !v5 ) /*0x5269cb*/
      return 0; /*0x5269cb*/
    *((_DWORD *)v2 + 4) = v5; /*0x5269cd*/
  }
  v6 = *((_DWORD *)v2 + 1); /*0x5269d0*/
  a2 = (unsigned __int8 *)v3; /*0x5269d3*/
  if ( v6 ) /*0x5269d9*/
  {
    v7 = (_DWORD *)*((_DWORD *)v2 + 4); /*0x5269db*/
    if ( v7 && *v7 == v3 ) /*0x5269e4*/
      goto LABEL_12; /*0x5269e4*/
    v8 = SortedArray::BinarySearch(&a2); /*0x5269ed*/
    if ( v8 ) /*0x5269f4*/
    {
      *((_DWORD *)v2 + 4) = v8; /*0x5269f6*/
LABEL_12:
      v9 = (int *)(*((_DWORD *)v2 + 4) + 4); /*0x5269f9*/
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



// ==== 0x00526A30  INIClass::FindKey  this=INIClass  sig=csp ====
int __thiscall sub_526A30(char *this, char **a2)
{
  unsigned __int8 *v3; // eax
  char *v4; // esi
  int v5; // edi
  _DWORD *v6; // eax
  size_t v7; // eax
  int v8; // eax
  _DWORD *v9; // eax
  size_t v10; // eax
  int *v11; // esi
  int v12; // esi
  int v14; // [esp+8h] [ebp-10h] BYREF
  unsigned int v15[3]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = (unsigned __int8 *)String::GetOrEmpty_Alt(a2); /*0x526a3b*/
  if ( !v3 ) /*0x526a44*/
    return 0; /*0x526a44*/
  memset(v15, 0, sizeof(v15)); /*0x526a51*/
  v4 = this + 40; /*0x526a79*/
  v5 = Checksummer::Add_Buffer(v15, v3, strlen((const char *)v3)); /*0x526a7c*/
  a2 = (char **)v5; /*0x526a7e*/
  if ( !*((_DWORD *)v4 + 1) ) /*0x526a82*/
    return 0; /*0x526a87*/
  v6 = (_DWORD *)*((_DWORD *)v4 + 4); /*0x526a89*/
  if ( !v6 || *v6 != v5 ) /*0x526a92*/
  {
    v7 = SortedArray::BinarySearch((char **)v4, (int *)&a2); /*0x526a9b*/
    if ( !v7 ) /*0x526aa2*/
      return 0; /*0x526aa2*/
    *((_DWORD *)v4 + 4) = v7; /*0x526aa4*/
  }
  v8 = *((_DWORD *)v4 + 1); /*0x526aa7*/
  v14 = v5; /*0x526aaa*/
  if ( v8 ) /*0x526ab0*/
  {
    v9 = (_DWORD *)*((_DWORD *)v4 + 4); /*0x526ab2*/
    if ( v9 && *v9 == v5 ) /*0x526abb*/
      goto LABEL_12; /*0x526abb*/
    v10 = SortedArray::BinarySearch((char **)v4, &v14); /*0x526ac4*/
    if ( v10 ) /*0x526acb*/
    {
      *((_DWORD *)v4 + 4) = v10; /*0x526acd*/
LABEL_12:
      v11 = (int *)(*((_DWORD *)v4 + 4) + 4); /*0x526ad0*/
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



// ==== 0x00526B00  INIClass::ResetSection  this=INIClass  sig=csp ====
int __thiscall INIClass::ResetSection(INIClass *this)
{
  this->headNode[0] = 0; /*0x526b02*/
  this->headNode[1] = 0; /*0x526b05*/
  return 0; /*0x526b08*/
}



// ==== 0x00526B10  HashTableSection::FindSection  this=HashTableSection  sig=csp ====
int __thiscall HashTableSection::FindSection(int *this, unsigned __int8 *a2, unsigned __int8 *a3)
{
  unsigned __int8 *v3; // ebx
  int v5; // esi
  unsigned __int8 *v6; // eax
  size_t v7; // ecx
  int v8; // esi
  unsigned __int8 **v9; // edx
  int v10; // edx
  void *v11; // ecx
  int v12; // eax
  unsigned __int8 **v13; // ecx
  int v14; // eax
  unsigned __int8 *v16; // edi
  unsigned __int8 **v17; // eax
  int v18; // eax
  int *v19; // esi
  int v20; // [esp+10h] [ebp-1Ch] BYREF
  unsigned int v21[3]; // [esp+14h] [ebp-18h] BYREF
  unsigned int v22[3]; // [esp+20h] [ebp-Ch] BYREF

  v3 = a2; /*0x526b14*/
  if ( a2 == (unsigned __int8 *)*(this + 1) ) /*0x526b20*/
  {
    v5 = *(this + 2); /*0x526b26*/
    goto LABEL_3; /*0x526b26*/
  }
  if ( !a2 ) /*0x526c07*/
    goto LABEL_29; /*0x526c07*/
  memset(v21, 0, sizeof(v21)); /*0x526c17*/
  v16 = (unsigned __int8 *)Checksummer::Add_Buffer(v21, a2, strlen((const char *)a2)); /*0x526c31*/
  a2 = v16; /*0x526c33*/
  if ( !*(this + 11) ) /*0x526c37*/
    goto LABEL_29; /*0x526c37*/
  v17 = (unsigned __int8 **)*(this + 14); /*0x526c3e*/
  if ( v17 && *v17 == v16 ) /*0x526c47*/
    goto LABEL_24; /*0x526c47*/
  v18 = SortedArray::BinarySearch((char **)this + 10, (int *)&a2); /*0x526c50*/
  if ( !v18 ) /*0x526c57*/
  {
LABEL_29:
    *(this + 1) = 0; /*0x526c90*/
    *(this + 2) = 0; /*0x526c93*/
    return 0; /*0x526c93*/
  }
  *(this + 14) = v18; /*0x526c59*/
LABEL_24:
  v20 = (int)v16; /*0x526c5c*/
  if ( (unsigned __int8)HashTable::BinarySearch(this + 10, &v20) ) /*0x526c67*/
    v19 = (int *)(*(this + 14) + 4); /*0x526c73*/
  else
    v19 = (int *)&unk_B7882C; /*0x526c78*/
  v5 = *v19; /*0x526c7d*/
  if ( !v5 ) /*0x526c81*/
    goto LABEL_29; /*0x526c81*/
  *(this + 2) = v5; /*0x526c83*/
  *(this + 1) = (int)v3; /*0x526c86*/
LABEL_3:
  if ( !v5 ) /*0x526b2d*/
    return 0; /*0x526b2d*/
  if ( !a3 ) /*0x526b39*/
    return 0; /*0x526b39*/
  memset(v22, 0, sizeof(v22)); /*0x526b46*/
  v6 = (unsigned __int8 *)Checksummer::Add_Buffer(v22, a3, strlen((const char *)a3)); /*0x526b5d*/
  v7 = *(_DWORD *)(v5 + 48); /*0x526b62*/
  v8 = v5 + 44; /*0x526b65*/
  a2 = v6; /*0x526b6a*/
  if ( !v7 ) /*0x526b6e*/
    return 0; /*0x526b6e*/
  v9 = *(unsigned __int8 ***)(v8 + 16); /*0x526b74*/
  if ( v9 && *v9 == v6 ) /*0x526b7d*/
    goto LABEL_12; /*0x526b7d*/
  if ( !*(_BYTE *)(v8 + 12) ) /*0x526b7f*/
  {
    qsort(*(void **)v8, v7, 8u, CompareFunc3Int); /*0x526b91*/
    v6 = a2; /*0x526b96*/
    *(_DWORD *)(v8 + 16) = 0; /*0x526b9d*/
    *(_BYTE *)(v8 + 12) = 1; /*0x526ba0*/
  }
  v10 = *(_DWORD *)(v8 + 4); /*0x526ba4*/
  v11 = *(void **)v8; /*0x526ba7*/
  v21[0] = (unsigned int)v6; /*0x526ba9*/
  v12 = UI_Find((int)v11, v10, (int *)v21); /*0x526bb2*/
  if ( !v12 ) /*0x526bb9*/
    return 0; /*0x526c9f*/
  *(_DWORD *)(v8 + 16) = v12; /*0x526bbf*/
  v6 = a2; /*0x526bc2*/
LABEL_12:
  if ( *(_DWORD *)(v8 + 4) ) /*0x526bc6*/
  {
    v13 = *(unsigned __int8 ***)(v8 + 16); /*0x526bcf*/
    if ( v13 && *v13 == v6 ) /*0x526bd8*/
      return *(_DWORD *)(*(_DWORD *)(v8 + 16) + 4); /*0x526bd8*/
    v14 = HashTable::BinarySearchAlt((char **)v8, (int *)&a2); /*0x526be1*/
    if ( v14 ) /*0x526be8*/
    {
      *(_DWORD *)(v8 + 16) = v14; /*0x526bee*/
      return *(_DWORD *)(*(_DWORD *)(v8 + 16) + 4); /*0x526c00*/
    }
  }
  return unk_B78830; /*0x526bf4*/
}



// ==== 0x00526CC0  INIClass::GetStringByIndex  this=INIClass  sig=csp ====
int __thiscall INIClass_GetStringByIndex(char *this, unsigned __int8 *a2, int a3)
{
  char *v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // edx
  _DWORD *v8; // eax
  unsigned int v10[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !a2 ) /*0x526ccd*/
    return 0; /*0x526ccd*/
  memset(v10, 0, sizeof(v10)); /*0x526cda*/
  v3 = this + 40; /*0x526d02*/
  v4 = Checksummer::Add_Buffer(v10, a2, strlen((const char *)a2)); /*0x526d05*/
  a2 = (unsigned __int8 *)v4; /*0x526d07*/
  if ( !*((_DWORD *)v3 + 1) ) /*0x526d0b*/
    return 0; /*0x526d10*/
  if ( !(unsigned __int8)SortedArray::CheckCache(&a2) ) /*0x526d19*/
  {
    v5 = SortedArray::BinarySearch(&a2); /*0x526d29*/
    if ( !v5 ) /*0x526d30*/
      return 0; /*0x526d30*/
    *((_DWORD *)v3 + 4) = v5; /*0x526d32*/
  }
  a2 = (unsigned __int8 *)v4; /*0x526d3c*/
  v6 = *(_DWORD *)SortedArray::FindValue(&a2); /*0x526d45*/
  if ( v6 ) /*0x526d49*/
  {
    v7 = a3; /*0x526d4b*/
    if ( a3 < *(_DWORD *)(v6 + 48) ) /*0x526d54*/
    {
      v8 = *(_DWORD **)(v6 + 24); /*0x526d56*/
      if ( v8 ) /*0x526d5b*/
      {
        while ( v8[1] && v8[2] ) /*0x526d69*/
        {
          if ( !v7 ) /*0x526d6d*/
            return v8[3]; /*0x526d80*/
          v8 = (_DWORD *)v8[1]; /*0x526d6f*/
          --v7; /*0x526d71*/
        }
      }
    }
  }
  return 0; /*0x526d7b*/
}



// ==== 0x00526D90  INIClass::GetStringByIndexEx  this=INIClass  sig=csp ====
char **__thiscall INIClass::GetStringByIndexEx(INIClass *this, char **a2, char **a3, int a4)
{
  int v4; // ebp
  unsigned __int8 *v6; // eax
  SortedArray *v7; // esi
  char **v8; // edi
  int v9; // eax
  int v10; // eax
  _DWORD *v11; // eax
  const char *v12; // eax
  int v14; // [esp+Ch] [ebp-10h] BYREF
  _BYTE v15[12]; // [esp+10h] [ebp-Ch] BYREF

  v4 = a4; /*0x526d94*/
  v6 = (unsigned __int8 *)String::GetOrEmpty_Alt((String *)a3); /*0x526da0*/
  if ( !v6 ) /*0x526da9*/
    goto LABEL_14; /*0x526da9*/
  memset(v15, 0, sizeof(v15)); /*0x526db6*/
  v7 = (SortedArray *)&this->__pad_20[8]; /*0x526dde*/
  v8 = (char **)Checksummer::Add_Buffer((Checksummer *)v15, v6, strlen((const char *)v6)); /*0x526de1*/
  a3 = v8; /*0x526de3*/
  if ( !v7->SortedArray_field_0x04 ) /*0x526de7*/
    goto LABEL_14; /*0x526dec*/
  if ( !(unsigned __int8)SortedArray::CheckCache(v7, &a3) ) /*0x526df5*/
  {
    v9 = SortedArray::BinarySearch(v7, (int *)&a3); /*0x526e05*/
    if ( !v9 ) /*0x526e0c*/
      goto LABEL_14; /*0x526e0c*/
    v7->SortedArray_field_0x10 = v9; /*0x526e0e*/
  }
  v14 = (int)v8; /*0x526e18*/
  v10 = *(_DWORD *)SortedArray::FindValue(v7, &v14); /*0x526e21*/
  if ( v10 ) /*0x526e25*/
  {
    if ( a4 < *(_DWORD *)(v10 + 48) ) /*0x526e30*/
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
          --v4; /*0x526e4d*/
        }
      }
    }
  }
LABEL_14:
  v12 = 0; /*0x526e59*/
LABEL_15:
  String::Assign((String *)a2, v12); /*0x526e5b*/
  return a2; /*0x526e69*/
}



// ==== 0x00526E80  INIClass::ReadBase64Data  this=INIClass  sig=csp ====
char __thiscall INIClass_ReadBase64Data(char *this, unsigned __int8 *Block, int a3, signed int Size)
{
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v9[3]; // [esp+10h] [ebp-A0h] BYREF
  _DWORD v10[4]; // [esp+1Ch] [ebp-94h] BYREF
  int v11[7]; // [esp+2Ch] [ebp-84h] BYREF
  char Source[72]; // [esp+48h] [ebp-68h] BYREF
  char Buffer[32]; // [esp+90h] [ebp-20h] BYREF

  if ( !Block || !a3 || Size < 1 ) /*0x526eb4*/
    return 0; /*0x526fa4*/
  INIClass::ClearSection((int)this, (int)Block, 0); /*0x526ebc*/
  v9[1] = 0; /*0x526ece*/
  v9[2] = 0; /*0x526ed2*/
  Buffer::Init(v10, a3, Size); /*0x526ede*/
  v10[3] = 0; /*0x526ee7*/
  v9[0] = (int)&BufferStraw::`vftable'; /*0x526ef0*/
  memset(&v11[1], 0, 16); /*0x526ef8*/
  v11[0] = (int)&Base64Straw::`vftable'; /*0x526f08*/
  Delegate::Set(v11, (int)v9); /*0x526f10*/
  v5 = 1; /*0x526f21*/
  v6 = BitmapClass::ProcessFrame(Source, 0x46u); /*0x526f26*/
  Source[v6] = 0; /*0x526f2d*/
  if ( v6 ) /*0x526f31*/
  {
    do /*0x526f75*/
    {
      sprintf(Buffer, "%d", v5); /*0x526f41*/
      INIClass::SetString(this, Block, Buffer, Source); /*0x526f59*/
      ++v5; /*0x526f69*/
      v7 = BitmapClass::ProcessFrame(Source, 0x46u); /*0x526f6a*/
      Source[v7] = 0; /*0x526f71*/
    }
    while ( v7 ); /*0x526f75*/
  }
  Straw::Dtor(v11); /*0x526f7b*/
  Vector::Clear((int)v10); /*0x526f84*/
  Straw::Dtor(v9); /*0x526f8d*/
  return 1; /*0x526f92*/
}



// ==== 0x00526FB0  INIClass::GetBase64Data  this=INIClass  sig=csp ====
int __thiscall INIClass::GetBase64Data(INIClass *this, char *a2, int a3, size_t Size)
{
  unsigned int v6; // kr04_4
  Checksummer *v7; // eax
  int v8; // esi
  int v9; // eax
  int i; // ebp
  int *v11; // edi
  int v12; // esi
  int v13; // eax
  _DWORD *v14; // eax
  unsigned __int8 *v15; // eax
  const char *v16; // esi
  int Section; // eax
  const char *v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // esi
  int v22; // [esp-4h] [ebp-E0h] BYREF
  int v23; // [esp+Ch] [ebp-D0h] BYREF
  int v24; // [esp+10h] [ebp-CCh]
  int *v25; // [esp+14h] [ebp-C8h]
  Base64Pipe v26; // [esp+18h] [ebp-C4h] BYREF
  Pipe v27; // [esp+34h] [ebp-A8h] BYREF
  int v28; // [esp+4Ch] [ebp-90h]
  KeyValuePair v29[3]; // [esp+50h] [ebp-8Ch] BYREF
  char Destination[128]; // [esp+5Ch] [ebp-80h] BYREF

  v25 = (int *)this; /*0x526fc6*/
  if ( !a2 ) /*0x526fca*/
    return 0; /*0x526fd7*/
  *(_DWORD *)&v26.__pad_0[4] = 0; /*0x526fef*/
  *(_DWORD *)&v26.__pad_0[8] = 0; /*0x526ff3*/
  v26.field_C = 1; /*0x526ff7*/
  v26.field_10 = 0; /*0x526fff*/
  *(_DWORD *)v26.__pad_0 = &Base64Pipe::`vftable'; /*0x527003*/
  v27.Pipe_field_0x04 = 0; /*0x52700b*/
  v27.Pipe_field_0x08 = 0; /*0x52700f*/
  Buffer::Init((Buffer *)&v27.Pipe_field_0x0C, a3, Size); /*0x52701b*/
  v28 = 0; /*0x527029*/
  *(_DWORD *)v27.__pad_0 = &BufferPipe::`vftable'; /*0x52702d*/
  Pipe::SetDelegate((Pipe *)&v26, (int)&v27); /*0x527035*/
  v24 = 0; /*0x527041*/
  v6 = strlen(a2) + 1; /*0x527045*/
  v7 = (Checksummer *)KeyValuePair::Init(v29, 0); /*0x527051*/
  v8 = Checksummer::Add_Buffer(v7, (unsigned __int8 *)a2, v6 - 1); /*0x52705d*/
  v23 = v8; /*0x527069*/
  if ( (unsigned __int8)HashTable::BinarySearch((int *)&this->__pad_20[8], &v23) /*0x52708a*/
    && (v23 = v8, (v9 = *(_DWORD *)SortedArray::FindValue((SortedArray *)&this->__pad_20[8], &v23)) != 0) )
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
    v13 = INIClass::BinarySearchSection((int)v25, (unsigned __int8 *)a2); /*0x5270b7*/
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
    v16 = asc_818A0C; /*0x5270ec*/
    if ( &v22 != (int *)-96 && v15 ) /*0x5270fb*/
    {
      Section = HashTableSection::FindSection(v11, (unsigned __int8 *)a2, v15); /*0x527108*/
      if ( Section ) /*0x52710f*/
      {
        v18 = *(const char **)(Section + 16); /*0x527111*/
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
    v20 = Delegate::ProcessBitmapStream(&v26, Destination, v19); /*0x527124*/
    ++i; /*0x52713d*/
  }
  v21 = (*(int (__thiscall **)(Base64Pipe *))(*(_DWORD *)v26.__pad_0 + 4))(&v26); /*0x52714a*/
  Vector::Clear((int)&v27.Pipe_field_0x0C); /*0x52715b*/
  Pipe::Dtor(&v27); /*0x527164*/
  Pipe::Dtor((Pipe *)&v26); /*0x52716d*/
  return v21 + v24; /*0x526fcc*/
}



// ==== 0x005271C0  INIClass::ReadIntList2  this=INIClass  sig=csp ====
char __thiscall INIClass::ReadIntList2(INIClass *this, unsigned __int8 *Block, char *Source)
{
  char *v4; // ebp
  int i; // ebx
  unsigned int v6; // kr04_4
  unsigned int v7; // esi
  char v8; // al
  char Buffer[32]; // [esp+4h] [ebp-A0h] BYREF
  char Destination[128]; // [esp+24h] [ebp-80h] BYREF

  if ( !Block ) /*0x5271d3*/
    return 0; /*0x5271d5*/
  INIClass::ClearSection((int *)this->__pad_0, (int)Block, 0); /*0x5271e7*/
  v4 = Source; /*0x5271ec*/
  for ( i = 1; v4; v4 += v7 ) /*0x5271fa*/
  {
    if ( !*v4 ) /*0x527200*/
      break; /*0x527200*/
    strncpy(Destination, v4, 0x4Bu); /*0x527212*/
    Destination[75] = 0; /*0x527222*/
    sprintf(Buffer, "%d", i); /*0x52722a*/
    v6 = strlen(Destination) + 1; /*0x52723b*/
    v7 = v6 - 1; /*0x527240*/
    if ( (int)(v6 - 1) <= 0 ) /*0x527244*/
      break; /*0x527244*/
    if ( (int)(v6 - 1) >= 75 ) /*0x527249*/
    {
      while ( 1 ) /*0x52724b*/
      {
        v8 = Destination[v7]; /*0x52724b*/
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
      Destination[v7] = 0; /*0x527260*/
    }
    String::Trim(Destination); /*0x527269*/
    INIClass::SetString(this->__pad_0, Block, Buffer, Destination); /*0x527284*/
    ++i; /*0x527289*/
  }
  return 1; /*0x5271d7*/
}



// ==== 0x005272B0  ObjectClass::LookupCSFString  this=ObjectClass  sig=csp ====
unsigned __int8 *__thiscall LookupCSFString(ObjectClass *this, unsigned __int8 *a2, char *Destination, int Count)
{
  int v4; // eax
  unsigned __int8 *v6; // ebx
  int *p_owningHouseIndex; // esi
  unsigned __int8 *v8; // edi
  int *v9; // esi
  int v10; // esi
  int v11; // eax
  char *v12; // ecx
  int v13; // edx
  int v14; // ebp
  unsigned int v15; // kr08_4
  Checksummer *v16; // eax
  int v17; // esi
  int v18; // eax
  _DWORD *v19; // eax
  char *v20; // ebp
  int *vtable2; // esi
  unsigned int v22; // kr0C_4
  Checksummer *v23; // eax
  int *v24; // esi
  int v25; // eax
  char *v26; // eax
  unsigned int v27; // kr10_4
  Checksummer *v28; // eax
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
  Checksummer v41; // [esp+28h] [ebp-24h] BYREF
  KeyValuePair v42[3]; // [esp+40h] [ebp-Ch] BYREF

  v4 = Count; /*0x5272b3*/
  if ( Count <= 0 ) /*0x5272c3*/
    return 0; /*0x5272cc*/
  *Destination = 0; /*0x5272d6*/
  if ( v4 <= 1 ) /*0x5272d9*/
    return 0; /*0x5272e2*/
  v6 = a2; /*0x5272e6*/
  if ( a2
    && (memset(&v41, 0, 12),
        p_owningHouseIndex = &this->owningHouseIndex,
        v8 = (unsigned __int8 *)Checksummer::Add_Buffer(&v41, a2, strlen((const char *)a2)),
        a2 = v8,
        (unsigned __int8)HashTable::BinarySearch(p_owningHouseIndex, (int *)&a2))
    && ((a2 = v8, !(unsigned __int8)HashTable::BinarySearch(p_owningHouseIndex, (int *)&a2))
      ? (v9 = (int *)&unk_B7882C)
      : (v9 = (int *)(p_owningHouseIndex[4] + 4)),
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
        v15 = strlen((const char *)v6) + 1; /*0x5273ac*/
        v16 = (Checksummer *)KeyValuePair::Init((KeyValuePair *)&v41, 0); /*0x5273b8*/
        v17 = Checksummer::Add_Buffer(v16, v6, v15 - 1); /*0x5273c8*/
        v38 = v17; /*0x5273ce*/
        if ( (unsigned __int8)HashTable::BinarySearch(&this->owningHouseIndex, &v38) ) /*0x5273d8*/
        {
          v39 = v17; /*0x5273e5*/
          v18 = *(_DWORD *)SortedArray::FindValue((SortedArray *)&this->owningHouseIndex, &v39); /*0x5273f1*/
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
      Source = &g_INI_DefaultBuffer; /*0x52742b*/
      if ( !Destination || Count < 2 || !v6 || !v20 ) /*0x527454*/
        goto LABEL_45; /*0x527454*/
      if ( v6 == this->? ) /*0x527461*/
        break; /*0x527461*/
      v27 = strlen((const char *)v6) + 1; /*0x5274d7*/
      v28 = (Checksummer *)KeyValuePair::Init((KeyValuePair *)&v41.buffer, 0); /*0x5274e3*/
      v29 = Checksummer::Add_Buffer(v28, v6, v27 - 1); /*0x5274ef*/
      v40 = v29; /*0x5274f9*/
      if ( (unsigned __int8)HashTable::BinarySearch(&this->owningHouseIndex, &v40) ) /*0x527503*/
      {
        v40 = v29; /*0x527513*/
        vtable2 = *(int **)SortedArray::FindValue((SortedArray *)&this->owningHouseIndex, &v40); /*0x52751c*/
        if ( vtable2 ) /*0x527520*/
        {
          this->? = vtable2; /*0x527526*/
          this->? = v6; /*0x527529*/
          goto LABEL_33; /*0x52752c*/
        }
      }
      this->? = 0; /*0x527537*/
      this->? = 0; /*0x52753a*/
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
    vtable2 = (int *)this->?; /*0x527463*/
LABEL_33:
    if ( vtable2 ) /*0x527468*/
    {
      v22 = strlen(v20) + 1; /*0x527471*/
      v23 = (Checksummer *)KeyValuePair::Init(v42, 0); /*0x52747d*/
      v36 = Checksummer::Add_Buffer(v23, (unsigned __int8 *)v20, v22 - 1); /*0x527489*/
      v24 = vtable2 + 11; /*0x52748d*/
      if ( (unsigned __int8)SortedArray::Find(v24, &v36) ) /*0x527497*/
      {
        v25 = *(_DWORD *)SortedArray::BinarySearch2((int)v24, &v36); /*0x5274ac*/
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
int __thiscall INIClass::SetInt(char *this, unsigned __int8 *Block, char *a3, int a4, int a5)
{
  int result; // eax
  const char *v7; // [esp-8h] [ebp-20Ch]
  char Buffer[512]; // [esp+4h] [ebp-200h] BYREF

  if ( a5 == 1 ) /*0x5275ce*/
  {
    sprintf(Buffer, off_825BAC, a4); /*0x52760d*/
  }
  else
  {
    if ( a5 == 2 ) /*0x5275d1*/
      v7 = (const char *)&off_825BB0; /*0x5275f3*/
    else
      v7 = g_Str_Trace; /*0x5275df*/
    sprintf(Buffer, v7, a4); /*0x5275e5*/
  }
  LOBYTE(result) = INIClass::SetString(this, Block, a3, Buffer); /*0x52762c*/
  return result; /*0x527631*/
}



// ==== 0x00527640  INIClass::SetIntFormat  this=INIClass  sig=csp ====
char __thiscall sub_527640(char *this, char **a2, char **a3, int a4, int a5)
{
  char *v6; // edi
  unsigned __int8 *v7; // ebx
  const char *v9; // [esp-8h] [ebp-214h]
  char Buffer[512]; // [esp+Ch] [ebp-200h] BYREF

  v6 = String::GetOrEmpty_Alt(a3); /*0x52765e*/
  v7 = (unsigned __int8 *)String::GetOrEmpty_Alt(a2); /*0x527665*/
  if ( a5 == 1 ) /*0x52766f*/
  {
    sprintf(Buffer, off_825BAC, a4); /*0x5276ae*/
  }
  else
  {
    if ( a5 == 2 ) /*0x527672*/
      v9 = (const char *)&off_825BB0; /*0x527694*/
    else
      v9 = g_Str_Trace; /*0x527680*/
    sprintf(Buffer, v9, a4); /*0x527686*/
  }
  return INIClass::SetString(this, v7, v6, Buffer); /*0x5276c4*/
}



// ==== 0x005276D0  INIClass::ReadInt_Overwrite  this=INIClass  sig=csp ====
int __thiscall INIClass::ReadInt_Overwrite(bool *this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  unsigned __int8 *v4; // ebp
  unsigned __int8 *v6; // edx
  int v7; // esi
  unsigned __int8 *v8; // eax
  int v9; // ecx
  HashTable *v10; // esi
  unsigned __int8 **HashTable_field_0x10; // ecx
  int v12; // eax
  unsigned __int8 **v13; // ecx
  int v14; // eax
  int *v15; // esi
  unsigned __int8 *v16; // edi
  unsigned __int8 **v17; // eax
  int v18; // eax
  int *v19; // esi
  int v21; // esi
  const char *v22; // edx
  _BYTE v23[12]; // [esp+8h] [ebp-Ch] BYREF

  v4 = a2; /*0x5276d7*/
  if ( a2 ) /*0x5276df*/
  {
    v6 = a3; /*0x5276e5*/
    if ( a3 ) /*0x5276eb*/
    {
      if ( a2 == *((unsigned __int8 **)this + 1) ) /*0x5276f8*/
      {
        v7 = this->q008; /*0x5276fe*/
LABEL_5:
        if ( v7 ) /*0x527703*/
        {
          memset(v23, 0, sizeof(v23)); /*0x527709*/
          v8 = (unsigned __int8 *)Checksummer::Add_Buffer((Checksummer *)v23, v6, strlen((const char *)v6)); /*0x527727*/
          v9 = *(_DWORD *)(v7 + 48); /*0x52772c*/
          v10 = (HashTable *)(v7 + 44); /*0x52772f*/
          a3 = v8; /*0x527734*/
          if ( v9 ) /*0x527738*/
          {
            HashTable_field_0x10 = (unsigned __int8 **)v10->HashTable_field_0x10; /*0x52773e*/
            if ( HashTable_field_0x10 && *HashTable_field_0x10 == v8 ) /*0x527747*/
            {
LABEL_11:
              if ( v10->HashTable_field_0x04 ) /*0x527764*/
              {
                v13 = (unsigned __int8 **)v10->HashTable_field_0x10; /*0x52776f*/
                if ( v13 && *v13 == v8 ) /*0x527778*/
                  goto LABEL_16; /*0x527778*/
                v14 = HashTable::BinarySearchAlt(v10, (int *)&a3); /*0x527781*/
                if ( v14 ) /*0x527788*/
                {
                  v10->HashTable_field_0x10 = v14; /*0x52778e*/
LABEL_16:
                  v15 = (int *)(v10->HashTable_field_0x10 + 4); /*0x527791*/
LABEL_29:
                  v21 = *v15; /*0x527840*/
                  if ( v21 ) /*0x527844*/
                  {
                    v22 = *(const char **)(v21 + 16); /*0x52784a*/
                    if ( v22 ) /*0x52784f*/
                    {
                      if ( *v22 == 36 ) /*0x527854*/
                      {
                        sscanf(v22, off_825BB8, &a4); /*0x527861*/
                        return a4; /*0x527874*/
                      }
                      if ( tolower(v22[strlen(*(const char **)(v21 + 16)) - 1]) == 104 ) /*0x527894*/
                      {
                        sscanf(*(const char *const *)(v21 + 16), off_825BB4, &a4); /*0x5278a4*/
                        return a4; /*0x5278b7*/
                      }
                      return atoi(*(const char **)(v21 + 16)); /*0x5278c6*/
                    }
                  }
                  return a4; /*0x5278c6*/
                }
              }
              v15 = (int *)&unk_B78830; /*0x52783b*/
              goto LABEL_29; /*0x52783b*/
            }
            v12 = HashTable::BinarySearchAlt(v10, (int *)&a3); /*0x527750*/
            if ( v12 ) /*0x527757*/
            {
              v10->HashTable_field_0x10 = v12; /*0x52775d*/
              v8 = a3; /*0x527760*/
              goto LABEL_11; /*0x527760*/
            }
          }
        }
        return a4; /*0x5278d5*/
      }
      memset(v23, 0, sizeof(v23)); /*0x52779c*/
      v16 = (unsigned __int8 *)Checksummer::Add_Buffer((Checksummer *)v23, a2, strlen((const char *)a2)); /*0x5277c2*/
      a2 = v16; /*0x5277c4*/
      if ( this->INIClass_field_2C ) /*0x5277c8*/
      {
        v17 = (unsigned __int8 **)this->unknown38; /*0x5277cf*/
        if ( !v17 || *v17 != v16 ) /*0x5277d8*/
        {
          v18 = SortedArray::BinarySearch((SortedArray *)(this + 40), (int *)&a2); /*0x5277e1*/
          if ( !v18 ) /*0x5277e8*/
            goto LABEL_27; /*0x5277e8*/
          this->unknown38 = v18; /*0x5277ea*/
        }
        a2 = v16; /*0x5277f1*/
        if ( (unsigned __int8)HashTable::BinarySearch((int *)this + 10, (int *)&a2) ) /*0x5277f8*/
          v19 = (int *)(this->unknown38 + 4); /*0x527804*/
        else
          v19 = (int *)&unk_B7882C; /*0x527809*/
        v7 = *v19; /*0x52780e*/
        if ( v7 ) /*0x527812*/
        {
          v6 = a3; /*0x527814*/
          this->q008 = v7; /*0x527818*/
          this->headNode = v4; /*0x52781b*/
          goto LABEL_5; /*0x527820*/
        }
      }
LABEL_27:
      this->headNode = 0; /*0x527825*/
      this->q008 = 0; /*0x52782c*/
      return a4; /*0x527838*/
    }
  }
  return a4; /*0x527833*/
}



// ==== 0x005278F0  INIClass::ReadInt  this=INIClass  sig=csp ====
int __thiscall INIClass::ReadInt(bool *this, String *a2, String *a3, int a4)
{
  unsigned __int8 *v5; // eax
  unsigned __int8 *v7; // [esp-8h] [ebp-Ch]

  v7 = (unsigned __int8 *)String::GetOrEmpty_Alt(a3); /*0x527905*/
  v5 = (unsigned __int8 *)String::GetOrEmpty_Alt(a2); /*0x527906*/
  return INIClass::ReadInt_Overwrite(this, v5, v7, a4); /*0x527913*/
}



// ==== 0x00527920  INIClass::ReadGUID_Overwrite  this=INIClass  sig=csp ====
int __thiscall INIClass::ReadGUID_Overwrite(
        int this,
        int a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  unsigned __int8 *v9; // edx
  int v10; // esi
  int v11; // eax
  int v12; // ecx
  int v13; // esi
  _DWORD *v14; // ecx
  int v15; // eax
  int *v16; // esi
  int v17; // edi
  int v18; // eax
  int *v19; // esi
  int v20; // esi
  char *v21; // esi
  int v23; // [esp+Ch] [ebp-1ACh] BYREF
  char *Source; // [esp+10h] [ebp-1A8h]
  int v25; // [esp+14h] [ebp-1A4h] BYREF
  CLSID pclsid; // [esp+18h] [ebp-1A0h] BYREF
  int v27; // [esp+24h] [ebp-194h]
  int v28; // [esp+28h] [ebp-190h] BYREF
  unsigned int v29[3]; // [esp+2Ch] [ebp-18Ch] BYREF
  char Destination[128]; // [esp+38h] [ebp-180h] BYREF
  WCHAR WideCharStr[128]; // [esp+B8h] [ebp-100h] BYREF

  Source = &g_INI_DefaultBuffer; /*0x527931*/
  if ( !Destination ) /*0x527939*/
    goto LABEL_32; /*0x527939*/
  if ( !a3 ) /*0x52794a*/
    goto LABEL_32; /*0x52794a*/
  v9 = a4; /*0x527950*/
  if ( !a4 ) /*0x527959*/
    goto LABEL_32; /*0x527959*/
  if ( a3 != *(unsigned __int8 **)(this + 4) ) /*0x527965*/
  {
    memset(v29, 0, sizeof(v29)); /*0x5279ec*/
    v17 = Checksummer::Add_Buffer(v29, a3, strlen((const char *)a3)); /*0x527a12*/
    v25 = v17; /*0x527a14*/
    if ( *(_DWORD *)(this + 44) ) /*0x527a18*/
    {
      if ( !(unsigned __int8)SortedArray::CheckCache((_DWORD *)(this + 40), &v25) ) /*0x527a26*/
      {
        v18 = SortedArray::BinarySearch((char **)(this + 40), &v25); /*0x527a36*/
        if ( !v18 ) /*0x527a3d*/
          goto LABEL_23; /*0x527a3d*/
        *(_DWORD *)(this + 56) = v18; /*0x527a3f*/
      }
      v28 = v17; /*0x527a49*/
      if ( (unsigned __int8)HashTable::BinarySearch((int *)(this + 40), &v28) ) /*0x527a4d*/
        v19 = (int *)(*(_DWORD *)(this + 56) + 4); /*0x527a59*/
      else
        v19 = (int *)&unk_B7882C; /*0x527a5e*/
      v10 = *v19; /*0x527a63*/
      if ( v10 ) /*0x527a67*/
      {
        v9 = a4; /*0x527a69*/
        *(_DWORD *)(this + 8) = v10; /*0x527a70*/
        *(_DWORD *)(this + 4) = a3; /*0x527a73*/
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
    memset(&pclsid, 0, sizeof(pclsid)); /*0x527976*/
    v11 = Checksummer::Add_Buffer((unsigned int *)&pclsid, v9, strlen((const char *)v9)); /*0x527994*/
    v12 = *(_DWORD *)(v10 + 48); /*0x527999*/
    v13 = v10 + 44; /*0x52799c*/
    v23 = v11; /*0x5279a1*/
    if ( v12 ) /*0x5279a5*/
    {
      v14 = *(_DWORD **)(v13 + 16); /*0x5279ab*/
      if ( !v14 || *v14 != v11 ) /*0x5279b4*/
      {
        v15 = HashTable::BinarySearchAlt((char **)v13, &v23); /*0x5279bd*/
        if ( !v15 ) /*0x5279c4*/
          goto LABEL_28; /*0x5279c4*/
        *(_DWORD *)(v13 + 16) = v15; /*0x5279ca*/
      }
      if ( (unsigned __int8)SortedArray::Find((int *)v13, &v23) ) /*0x5279d4*/
        v16 = (int *)(*(_DWORD *)(v13 + 16) + 4); /*0x5279e4*/
      else
        v16 = (int *)&unk_B78830; /*0x527a87*/
      v20 = *v16; /*0x527a8c*/
      if ( v20 ) /*0x527a90*/
      {
        v21 = *(char **)(v20 + 16); /*0x527a92*/
        if ( v21 ) /*0x527a97*/
          Source = v21; /*0x527a99*/
      }
    }
  }
LABEL_28:
  if ( Source ) /*0x527aa6*/
  {
    strncpy(Destination, Source, 0x80u); /*0x527ab7*/
    Destination[127] = 0; /*0x527ac3*/
    String::Trim(Destination); /*0x527acb*/
    if ( strlen(Destination) ) /*0x527ad4*/
    {
      MultiByteToWideChar(0, 1u, Destination, -1, WideCharStr, 128); /*0x527af9*/
      if ( CLSIDFromString(WideCharStr, &pclsid) >= 0 ) /*0x527b14*/
      {
        *(CLSID *)a2 = pclsid; /*0x527b26*/
        *(_DWORD *)(a2 + 12) = v27; /*0x527b3a*/
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
char __thiscall INIClass::ReadDouble(INIClass *this, unsigned __int8 *Block, char *a3, IID *rclsid)
{
  LPOLESTR lpsz; // [esp+4h] [ebp-84h] BYREF
  CHAR MultiByteStr[128]; // [esp+8h] [ebp-80h] BYREF

  lpsz = 0; /*0x527ba6*/
  StringFromCLSID(rclsid, &lpsz); /*0x527bae*/
  if ( !WideCharToMultiByte(0, 0, lpsz, -1, MultiByteStr, 128, 0, 0) ) /*0x527bcd*/
    GetLastError(); /*0x527bd7*/
  SysFreeString(lpsz); /*0x527be2*/
  return INIClass::SetString(this->__pad_0, Block, a3, MultiByteStr); /*0x527c04*/
}



// ==== 0x00527C10  INIClass::SetRect  this=INIClass  sig=csp ====
char __thiscall INIClass_SetRect(char *this, unsigned __int8 *Block, char *a3, _DWORD *a4)
{
  char Buffer[64]; // [esp+4h] [ebp-40h] BYREF

  sprintf(Buffer, "%d,%d,%d,%d", *a4, a4[1], a4[2], a4[3]); /*0x527c33*/
  return INIClass::SetString(this, Block, a3, Buffer); /*0x527c51*/
}



// ==== 0x00527C60  INIClass::ReadFloat  this=INIClass  sig=csp ====
char __thiscall INIClass::ReadFloat(INIClass *this, char **a2, char **a3, _DWORD *a4)
{
  char *v5; // edi
  unsigned __int8 *v6; // ebx
  char Buffer[64]; // [esp+Ch] [ebp-40h] BYREF

  v5 = String::GetOrEmpty_Alt((String *)a3); /*0x527c75*/
  v6 = (unsigned __int8 *)String::GetOrEmpty_Alt((String *)a2); /*0x527c7c*/
  sprintf(Buffer, "%d,%d,%d,%d", *a4, a4[1], a4[2], a4[3]); /*0x527c9b*/
  return INIClass::SetString(this->__pad_0, v6, v5, Buffer); /*0x527cb1*/
}



// ==== 0x00527CC0  INIClass::ParseValue  this=INIClass  sig=csp ====
unsigned int *__thiscall INIClass::ParseValue(
        INIClass *this,
        unsigned int *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned int *a5)
{
  unsigned __int8 *v6; // ebx
  unsigned __int8 *v7; // edx
  int v8; // esi
  unsigned __int8 *v9; // eax
  int v10; // ecx
  HashTable *v11; // esi
  unsigned __int8 **HashTable_field_0x10; // ecx
  int v13; // eax
  int *v14; // esi
  unsigned __int8 *v15; // edi
  int v16; // eax
  int *v17; // esi
  int v18; // esi
  char *v19; // esi
  unsigned int *v21; // ecx
  char *Source; // [esp+10h] [ebp-64h]
  int v23; // [esp+14h] [ebp-60h] BYREF
  Checksummer v24; // [esp+18h] [ebp-5Ch] BYREF
  unsigned int v25; // [esp+28h] [ebp-4Ch] BYREF
  unsigned int v26; // [esp+2Ch] [ebp-48h] BYREF
  unsigned int v27; // [esp+30h] [ebp-44h] BYREF
  char Destination[64]; // [esp+34h] [ebp-40h] BYREF

  Source = a0000; /*0x527ccf*/
  if ( !Destination ) /*0x527cd7*/
    goto LABEL_31; /*0x527cd7*/
  v6 = a3; /*0x527cdd*/
  if ( !a3 ) /*0x527ce5*/
    goto LABEL_31; /*0x527ce5*/
  v7 = a4; /*0x527ceb*/
  if ( !a4 ) /*0x527cf4*/
    goto LABEL_31; /*0x527cf4*/
  if ( a3 != (unsigned __int8 *)this->headNode[0] ) /*0x527cfd*/
  {
    memset(&v24, 0, 12); /*0x527d8d*/
    v15 = (unsigned __int8 *)Checksummer::Add_Buffer(&v24, a3, strlen((const char *)a3)); /*0x527db3*/
    a3 = v15; /*0x527db5*/
    if ( this->INIClass_field_2C ) /*0x527db9*/
    {
      if ( !(unsigned __int8)SortedArray::CheckCache((SortedArray *)&this->__pad_20[8], &a3) ) /*0x527dc7*/
      {
        v16 = SortedArray::BinarySearch((SortedArray *)&this->__pad_20[8], (int *)&a3); /*0x527dd7*/
        if ( !v16 ) /*0x527dde*/
          goto LABEL_23; /*0x527dde*/
        this->unknown38 = v16; /*0x527de0*/
      }
      v23 = (int)v15; /*0x527dea*/
      if ( (unsigned __int8)HashTable::BinarySearch((int *)&this->__pad_20[8], &v23) ) /*0x527dee*/
        v17 = (int *)(this->unknown38 + 4); /*0x527dfa*/
      else
        v17 = (int *)&unk_B7882C; /*0x527dff*/
      v8 = *v17; /*0x527e04*/
      if ( v8 ) /*0x527e08*/
      {
        v7 = a4; /*0x527e0a*/
        this->headNode[1] = v8; /*0x527e11*/
        this->headNode[0] = (int)v6; /*0x527e14*/
        goto LABEL_6; /*0x527e19*/
      }
    }
LABEL_23:
    this->headNode[0] = 0; /*0x527e1e*/
    this->headNode[1] = 0; /*0x527e23*/
    goto LABEL_28; /*0x527e26*/
  }
  v8 = this->headNode[1]; /*0x527d03*/
LABEL_6:
  if ( v8 ) /*0x527d08*/
  {
    v24.buffer = 0; /*0x527d0e*/
    v25 = 0; /*0x527d12*/
    v26 = 0; /*0x527d16*/
    v9 = (unsigned __int8 *)Checksummer::Add_Buffer((Checksummer *)&v24.buffer, v7, strlen((const char *)v7)); /*0x527d2c*/
    v10 = *(_DWORD *)(v8 + 48); /*0x527d31*/
    v11 = (HashTable *)(v8 + 44); /*0x527d34*/
    a4 = v9; /*0x527d39*/
    if ( v10 ) /*0x527d40*/
    {
      HashTable_field_0x10 = (unsigned __int8 **)v11->HashTable_field_0x10; /*0x527d46*/
      if ( !HashTable_field_0x10 || *HashTable_field_0x10 != v9 ) /*0x527d4f*/
      {
        v13 = HashTable::BinarySearchAlt(v11, (int *)&a4); /*0x527d5b*/
        if ( !v13 ) /*0x527d62*/
          goto LABEL_28; /*0x527d62*/
        v11->HashTable_field_0x10 = v13; /*0x527d68*/
      }
      if ( (unsigned __int8)SortedArray::Find((int *)v11->__pad_0, (int *)&a4) ) /*0x527d75*/
        v14 = (int *)(v11->HashTable_field_0x10 + 4); /*0x527d85*/
      else
        v14 = (int *)&unk_B78830; /*0x527e28*/
      v18 = *v14; /*0x527e2d*/
      if ( v18 ) /*0x527e31*/
      {
        v19 = *(char **)(v18 + 16); /*0x527e33*/
        if ( v19 ) /*0x527e38*/
          Source = v19; /*0x527e3a*/
      }
    }
  }
LABEL_28:
  if ( Source ) /*0x527e46*/
  {
    strncpy(Destination, Source, 0x40u); /*0x527e54*/
    Destination[63] = 0; /*0x527e60*/
    String::Trim(Destination); /*0x527e65*/
    if ( strlen(Destination) ) /*0x527e6e*/
    {
      v24.buffer = *a5; /*0x527e85*/
      v25 = a5[1]; /*0x527e8c*/
      v26 = a5[2]; /*0x527e93*/
      v27 = a5[3]; /*0x527ea2*/
      sscanf(Destination, "%d,%d,%d,%d", &v24.buffer, &v25, &v26, &v27); /*0x527ebc*/
      *a2 = v24.buffer; /*0x527ed1*/
      a2[1] = v25; /*0x527ed9*/
      a2[2] = v26; /*0x527ee2*/
      a2[3] = v27; /*0x527ee9*/
      return a2; /*0x527eef*/
    }
  }
LABEL_31:
  v21 = a5; /*0x527ef2*/
  *a2 = *a5; /*0x527f02*/
  a2[1] = v21[1]; /*0x527f07*/
  a2[2] = v21[2]; /*0x527f0d*/
  a2[3] = v21[3]; /*0x527f15*/
  return a2; /*0x527ed7*/
}



// ==== 0x00527F20  INIClass::GetRect  this=INIClass  sig=csp ====
_DWORD *__thiscall INIClass::GetRect(INIClass *this, _DWORD *a2, char **a3, char **a4, int *a5)
{
  unsigned __int8 *v6; // edi
  unsigned __int8 *v7; // ebx
  int v8; // esi
  HashTable *v9; // esi
  int v10; // eax
  int *v11; // esi
  int v12; // edi
  int v13; // eax
  int v14; // esi
  char *v15; // esi
  int v16; // ecx
  int v17; // edx
  int v18; // esi
  int v19; // edi
  int v21; // [esp+0h] [ebp-88h] BYREF
  unsigned __int8 *v22; // [esp+10h] [ebp-78h] BYREF
  int v23; // [esp+14h] [ebp-74h] BYREF
  char *Source; // [esp+18h] [ebp-70h]
  int v25; // [esp+1Ch] [ebp-6Ch] BYREF
  Checksummer v26; // [esp+20h] [ebp-68h] BYREF
  int v27; // [esp+30h] [ebp-58h]
  int v28; // [esp+34h] [ebp-54h]
  int v29; // [esp+38h] [ebp-50h] BYREF
  int v30; // [esp+3Ch] [ebp-4Ch] BYREF
  int v31; // [esp+40h] [ebp-48h] BYREF
  int v32; // [esp+44h] [ebp-44h] BYREF
  char Destination[64]; // [esp+48h] [ebp-40h] BYREF

  v6 = (unsigned __int8 *)String::GetOrEmpty_Alt((String *)a4); /*0x527f3c*/
  v22 = v6; /*0x527f3e*/
  v7 = (unsigned __int8 *)String::GetOrEmpty_Alt((String *)a3); /*0x527f47*/
  Source = a0000; /*0x527f4f*/
  if ( &v21 == (int *)-72 || !v7 || !v6 ) /*0x527f69*/
    goto LABEL_27; /*0x527f69*/
  if ( v7 != (unsigned __int8 *)this->headNode[0] ) /*0x527f72*/
  {
    memset(&v26, 0, 12); /*0x528000*/
    v12 = Checksummer::Add_Buffer(&v26, v7, strlen((const char *)v7)); /*0x528026*/
    v23 = v12; /*0x528028*/
    if ( this->INIClass_field_2C ) /*0x52802c*/
    {
      if ( !(unsigned __int8)SortedArray::CheckCache((SortedArray *)&this->__pad_20[8], &v23) ) /*0x52803a*/
      {
        v13 = SortedArray::BinarySearch((SortedArray *)&this->__pad_20[8], &v23); /*0x52804a*/
        if ( !v13 ) /*0x528051*/
          goto LABEL_19; /*0x528051*/
        this->unknown38 = v13; /*0x528053*/
      }
      v25 = v12; /*0x52805d*/
      v8 = *(_DWORD *)SortedArray::FindValue((SortedArray *)&this->__pad_20[8], &v25); /*0x528066*/
      if ( v8 ) /*0x52806a*/
      {
        v6 = v22; /*0x52806c*/
        this->headNode[1] = v8; /*0x528070*/
        this->headNode[0] = (int)v7; /*0x528073*/
        goto LABEL_6; /*0x528078*/
      }
    }
LABEL_19:
    this->headNode[0] = 0; /*0x52807d*/
    this->headNode[1] = 0; /*0x528082*/
    goto LABEL_24; /*0x528085*/
  }
  v8 = this->headNode[1]; /*0x527f78*/
LABEL_6:
  if ( v8 ) /*0x527f7d*/
  {
    v26.buffer = 0; /*0x527f83*/
    v27 = 0; /*0x527f87*/
    v28 = 0; /*0x527f8b*/
    v9 = (HashTable *)(v8 + 44); /*0x527fa8*/
    v22 = (unsigned __int8 *)Checksummer::Add_Buffer((Checksummer *)&v26.buffer, v22, strlen((const char *)v6)); /*0x527fab*/
    if ( v9->HashTable_field_0x04 ) /*0x527faf*/
    {
      if ( !INIClass::deleteKey((INIClass *)v9, &v22) ) /*0x527fc1*/
      {
        v10 = HashTable::BinarySearchAlt(v9, (int *)&v22); /*0x527fd1*/
        if ( !v10 ) /*0x527fd8*/
          goto LABEL_24; /*0x527fd8*/
        v9->HashTable_field_0x10 = v10; /*0x527fde*/
      }
      if ( (unsigned __int8)SortedArray::Find((int *)v9->__pad_0, (int *)&v22) ) /*0x527fe8*/
        v11 = (int *)(v9->HashTable_field_0x10 + 4); /*0x527ff8*/
      else
        v11 = (int *)&unk_B78830; /*0x528087*/
      v14 = *v11; /*0x52808c*/
      if ( v14 ) /*0x528090*/
      {
        v15 = *(char **)(v14 + 16); /*0x528092*/
        if ( v15 ) /*0x528097*/
          Source = v15; /*0x528099*/
      }
    }
  }
LABEL_24:
  if ( !Source /*0x5280d0*/
    || (strncpy(Destination, Source, 0x40u), Destination[63] = 0, String::Trim(Destination), !strlen(Destination)) )
  {
LABEL_27:
    v16 = *a5; /*0x528138*/
    v17 = a5[1]; /*0x528141*/
    v18 = a5[2]; /*0x528144*/
    v19 = a5[3]; /*0x528147*/
    goto LABEL_28; /*0x528147*/
  }
  v29 = *a5; /*0x5280e7*/
  v30 = a5[1]; /*0x5280ee*/
  v31 = a5[2]; /*0x5280f5*/
  v32 = a5[3]; /*0x528104*/
  sscanf(Destination, "%d,%d,%d,%d", &v29, &v30, &v31, &v32); /*0x52811e*/
  v16 = v29; /*0x528123*/
  v17 = v30; /*0x528127*/
  v18 = v31; /*0x52812b*/
  v19 = v32; /*0x52812f*/
LABEL_28:
  *a2 = v16; /*0x52814a*/
  a2[1] = v17; /*0x528155*/
  a2[2] = v18; /*0x528158*/
  a2[3] = v19; /*0x52815b*/
  return a2; /*0x52815e*/
}



// ==== 0x00528170  INIClass::ReadDouble3  this=INIClass  sig=csp ====
char __thiscall INIClass::ReadDouble3(INIClass *this, unsigned __int8 *Block, char *a3, int a4)
{
  char Buffer[512]; // [esp+4h] [ebp-200h] BYREF

  sprintf(Buffer, "%X", a4); /*0x528188*/
  return INIClass::SetString(this->__pad_0, Block, a3, Buffer); /*0x5281ac*/
}



// ==== 0x005281C0  INIClass::ReadDouble2  this=INIClass  sig=csp ====
char __thiscall INIClass::ReadDouble2(INIClass *this, char **a2, char **a3, int a4)
{
  char *v5; // edi
  unsigned __int8 *v6; // ebx
  char Buffer[512]; // [esp+Ch] [ebp-200h] BYREF

  v5 = String::GetOrEmpty_Alt((String *)a3); /*0x5281de*/
  v6 = (unsigned __int8 *)String::GetOrEmpty_Alt((String *)a2); /*0x5281e5*/
  sprintf(Buffer, "%X", a4); /*0x5281f9*/
  return INIClass::SetString(this->__pad_0, v6, v5, Buffer); /*0x52820f*/
}



// ==== 0x00528220  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_528220(ObjectClass *this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  unsigned __int8 *v4; // ebp
  unsigned __int8 *v6; // edx
  _DWORD *vtable2; // esi
  unsigned __int8 *v8; // eax
  int v9; // ecx
  HashTable *v10; // esi
  unsigned __int8 **HashTable_field_0x10; // ecx
  int v12; // eax
  unsigned __int8 **v13; // ecx
  int v14; // eax
  int *v15; // esi
  unsigned __int8 *v16; // edi
  BombClass *attachedBomb; // eax
  BombClass *v18; // eax
  void **p_vtable1; // esi
  int v21; // esi
  const char *v22; // esi
  _BYTE v23[12]; // [esp+8h] [ebp-Ch] BYREF

  v4 = a2; /*0x528227*/
  if ( a2 ) /*0x52822f*/
  {
    v6 = a3; /*0x528235*/
    if ( a3 ) /*0x52823b*/
    {
      if ( a2 == this->? ) /*0x528248*/
      {
        vtable2 = this->?; /*0x52824e*/
LABEL_5:
        if ( vtable2 ) /*0x528253*/
        {
          memset(v23, 0, sizeof(v23)); /*0x528259*/
          v8 = (unsigned __int8 *)Checksummer::Add_Buffer((Checksummer *)v23, v6, strlen((const char *)v6)); /*0x528277*/
          v9 = vtable2[12]; /*0x52827c*/
          v10 = (HashTable *)(vtable2 + 11); /*0x52827f*/
          a3 = v8; /*0x528284*/
          if ( v9 ) /*0x528288*/
          {
            HashTable_field_0x10 = (unsigned __int8 **)v10->HashTable_field_0x10; /*0x52828e*/
            if ( HashTable_field_0x10 && *HashTable_field_0x10 == v8 ) /*0x528297*/
            {
LABEL_11:
              if ( v10->HashTable_field_0x04 ) /*0x5282b4*/
              {
                v13 = (unsigned __int8 **)v10->HashTable_field_0x10; /*0x5282bf*/
                if ( v13 && *v13 == v8 ) /*0x5282c8*/
                  goto LABEL_16; /*0x5282c8*/
                v14 = HashTable::BinarySearchAlt(v10, (int *)&a3); /*0x5282d1*/
                if ( v14 ) /*0x5282d8*/
                {
                  v10->HashTable_field_0x10 = v14; /*0x5282de*/
LABEL_16:
                  v15 = (int *)(v10->HashTable_field_0x10 + 4); /*0x5282e1*/
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
                  sscanf(v22, "%x", &a4); /*0x5283a8*/
              }
              return a4; /*0x5283a8*/
            }
            v12 = HashTable::BinarySearchAlt(v10, (int *)&a3); /*0x5282a0*/
            if ( v12 ) /*0x5282a7*/
            {
              v10->HashTable_field_0x10 = v12; /*0x5282ad*/
              v8 = a3; /*0x5282b0*/
              goto LABEL_11; /*0x5282b0*/
            }
          }
        }
        return a4; /*0x5283bb*/
      }
      memset(v23, 0, sizeof(v23)); /*0x5282ec*/
      v16 = (unsigned __int8 *)Checksummer::Add_Buffer((Checksummer *)v23, a2, strlen((const char *)a2)); /*0x528312*/
      a2 = v16; /*0x528314*/
      if ( this->fallRate ) /*0x528318*/
      {
        attachedBomb = this->attachedBomb; /*0x52831f*/
        if ( !attachedBomb || attachedBomb->AbstractClass != v16 ) /*0x528328*/
        {
          v18 = (BombClass *)SortedArray::BinarySearch((SortedArray *)&this->owningHouseIndex, (int *)&a2); /*0x528331*/
          if ( !v18 ) /*0x528338*/
            goto LABEL_27; /*0x528338*/
          this->attachedBomb = v18; /*0x52833a*/
        }
        a2 = v16; /*0x528341*/
        if ( (unsigned __int8)HashTable::BinarySearch(&this->owningHouseIndex, (int *)&a2) ) /*0x528348*/
          p_vtable1 = &this->attachedBomb->?; /*0x528354*/
        else
          p_vtable1 = (void **)&unk_B7882C; /*0x528359*/
        vtable2 = *p_vtable1; /*0x52835e*/
        if ( vtable2 ) /*0x528362*/
        {
          v6 = a3; /*0x528364*/
          this->? = vtable2; /*0x528368*/
          this->? = v4; /*0x52836b*/
          goto LABEL_5; /*0x528370*/
        }
      }
LABEL_27:
      this->? = 0; /*0x528375*/
      this->? = 0; /*0x52837c*/
      return a4; /*0x528388*/
    }
  }
  return a4; /*0x528383*/
}



// ==== 0x005283D0  INIClass::ReadDouble_Overwrite  this=INIClass  sig=csp ====
int __thiscall INIClass::ReadDouble_Overwrite(double *this, unsigned __int8 *a2, unsigned __int8 *a3, double a4)
{
  int result; // eax
  unsigned __int8 *v5; // ebp
  unsigned __int8 *v7; // edx
  int v8; // esi
  int v9; // ecx
  int v10; // esi
  _DWORD *v11; // ecx
  _DWORD *v12; // ecx
  int *v13; // esi
  unsigned __int8 *v14; // edi
  unsigned __int8 **v15; // eax
  int v16; // eax
  int *v17; // esi
  int v18; // esi
  const char *v19; // edx
  unsigned int v20; // [esp+8h] [ebp-Ch] BYREF
  int v21; // [esp+Ch] [ebp-8h]
  int v22; // [esp+10h] [ebp-4h]

  result = 0; /*0x5283d3*/
  v5 = a2; /*0x5283d7*/
  if ( *(float *)&a2 == 0.0 ) /*0x5283df*/
    return result; /*0x5283df*/
  v7 = a3; /*0x5283e5*/
  if ( !a3 ) /*0x5283eb*/
    return result; /*0x5283eb*/
  if ( a2 != *((unsigned __int8 **)this + 1) ) /*0x5283f8*/
  {
    v20 = 0; /*0x52849c*/
    v21 = 0; /*0x5284a0*/
    v22 = 0; /*0x5284a4*/
    v14 = (unsigned __int8 *)Checksummer::Add_Buffer(&v20, a2, strlen((const char *)a2)); /*0x5284c2*/
    a2 = v14; /*0x5284c4*/
    if ( this->INIClass_field_2C ) /*0x5284c8*/
    {
      v15 = (unsigned __int8 **)this->unknown38; /*0x5284cf*/
      if ( !v15 || *v15 != v14 ) /*0x5284d8*/
      {
        v16 = SortedArray::BinarySearch((char **)this + 10, (int *)&a2); /*0x5284e1*/
        if ( !v16 ) /*0x5284e8*/
          goto LABEL_27; /*0x5284e8*/
        this->unknown38 = v16; /*0x5284ea*/
      }
      a2 = v14; /*0x5284f1*/
      if ( (unsigned __int8)HashTable::BinarySearch((int *)this + 10, (int *)&a2) ) /*0x5284f8*/
        v17 = (int *)(this->unknown38 + 4); /*0x528504*/
      else
        v17 = (int *)&unk_B7882C; /*0x528509*/
      v8 = *v17; /*0x52850e*/
      if ( v8 ) /*0x528512*/
      {
        v7 = a3; /*0x528514*/
        this->q008 = v8; /*0x528518*/
        this->headNode = v5; /*0x52851b*/
        result = 0; /*0x52851e*/
        goto LABEL_5; /*0x528520*/
      }
    }
LABEL_27:
    this->headNode = 0; /*0x528525*/
    this->q008 = 0; /*0x528530*/
    return 0; /*0x528538*/
  }
  v8 = this->q008; /*0x5283fe*/
LABEL_5:
  if ( !v8 ) /*0x528403*/
    return result; /*0x528403*/
  v20 = 0; /*0x528409*/
  v21 = 0; /*0x52840d*/
  v22 = 0; /*0x528411*/
  result = Checksummer::Add_Buffer(&v20, v7, strlen((const char *)v7)); /*0x528427*/
  v9 = *(_DWORD *)(v8 + 48); /*0x52842c*/
  v10 = v8 + 44; /*0x52842f*/
  a3 = (unsigned __int8 *)result; /*0x528434*/
  if ( !v9 ) /*0x528438*/
    return result; /*0x528438*/
  v11 = *(_DWORD **)(v10 + 16); /*0x52843e*/
  if ( !v11 || *v11 != result ) /*0x528447*/
  {
    result = HashTable::BinarySearchAlt((char **)v10, (int *)&a3); /*0x528450*/
    if ( !result ) /*0x528457*/
      return result; /*0x528457*/
    *(_DWORD *)(v10 + 16) = result; /*0x52845d*/
    result = (int)a3; /*0x528460*/
  }
  if ( *(_DWORD *)(v10 + 4) ) /*0x528464*/
  {
    v12 = *(_DWORD **)(v10 + 16); /*0x52846f*/
    if ( v12 && *v12 == result ) /*0x528478*/
      goto LABEL_16; /*0x528478*/
    result = HashTable::BinarySearchAlt((char **)v10, (int *)&a3); /*0x528481*/
    if ( result ) /*0x528488*/
    {
      *(_DWORD *)(v10 + 16) = result; /*0x52848e*/
LABEL_16:
      v13 = (int *)(*(_DWORD *)(v10 + 16) + 4); /*0x528491*/
      goto LABEL_29; /*0x528497*/
    }
  }
  v13 = (int *)&unk_B78830; /*0x52853b*/
LABEL_29:
  v18 = *v13; /*0x528540*/
  if ( v18 ) /*0x528544*/
  {
    result = *(_DWORD *)(v18 + 16); /*0x528546*/
    if ( result ) /*0x52854b*/
    {
      sscanf((const char *const)result, "%f", &a2); /*0x528558*/
      v19 = *(const char **)(v18 + 16); /*0x528561*/
      a4 = *(float *)&a2; /*0x528569*/
      return (int)strchr(v19, 9509); /*0x52856e*/
    }
  }
  return result; /*0x528533*/
}



// ==== 0x005285B0  INIClass::SetDouble  this=INIClass  sig=csp ====
int __thiscall INIClass::SetDouble(char *this, unsigned __int8 *Block, char *a3, double a4)
{
  int result; // eax
  char Buffer[512]; // [esp+Ch] [ebp-200h] BYREF

  sprintf(Buffer, "%f", a4); /*0x5285cd*/
  LOBYTE(result) = INIClass::SetString(this, Block, a3, Buffer); /*0x5285ec*/
  return result; /*0x5285f8*/
}



// ==== 0x00528600  INIClass::GetString2  this=INIClass  sig=csp ====
char __thiscall INIClass::GetString2(INIClass *this, char **a2, char **a3, double a4)
{
  char *v5; // edi
  unsigned __int8 *v6; // ebx
  char Buffer[512]; // [esp+14h] [ebp-200h] BYREF

  v5 = String::GetOrEmpty_Alt((String *)a3); /*0x52861e*/
  v6 = (unsigned __int8 *)String::GetOrEmpty_Alt((String *)a2); /*0x52862f*/
  sprintf(Buffer, "%f", a4); /*0x52863e*/
  return INIClass::SetString(this->__pad_0, v6, v5, Buffer); /*0x528654*/
}



// ==== 0x00528660  INIClass::SetString  this=INIClass  sig=csp ====
char __thiscall INIClass_SetString(char *this, unsigned __int8 *Block, char *a3, char *Source)
{
  int v5; // esi
  char *v6; // ebp
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  char *v9; // edi
  unsigned __int8 *v10; // edx
  int v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // ebp
  int *v15; // esi
  _DWORD *v16; // eax
  int v17; // ecx
  int v18; // edx
  unsigned int v19; // kr10_4
  unsigned int *v20; // eax
  int v21; // eax
  int v22; // eax
  int i; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // edi
  int v27; // eax
  char *v28; // eax
  _DWORD *v29; // eax
  int v30; // esi
  unsigned int v32; // kr18_4
  unsigned int *v33; // eax
  char *v34; // [esp-18h] [ebp-60h]
  char *v35; // [esp-Ch] [ebp-54h]
  unsigned __int8 *v36; // [esp-8h] [ebp-50h]
  int v37; // [esp-8h] [ebp-50h]
  unsigned __int8 *v38; // [esp-8h] [ebp-50h]
  int v39; // [esp-4h] [ebp-4Ch]
  _DWORD *v40; // [esp+10h] [ebp-38h] BYREF
  _DWORD *v41; // [esp+14h] [ebp-34h]
  int v42; // [esp+18h] [ebp-30h] BYREF
  int v43; // [esp+1Ch] [ebp-2Ch]
  int v44; // [esp+20h] [ebp-28h]
  char *v45; // [esp+24h] [ebp-24h]
  int v46; // [esp+28h] [ebp-20h] BYREF
  int v47; // [esp+2Ch] [ebp-1Ch] BYREF
  unsigned int v48[3]; // [esp+30h] [ebp-18h] BYREF
  unsigned int v49; // [esp+3Ch] [ebp-Ch] BYREF
  int v50; // [esp+40h] [ebp-8h]
  int v51; // [esp+44h] [ebp-4h]
  void *Blocka; // [esp+4Ch] [ebp+4h]

  v45 = this; /*0x528671*/
  if ( !Block || !a3 ) /*0x52867f*/
    return 0; /*0x52867f*/
  memset(v48, 0, sizeof(v48)); /*0x52868c*/
  v5 = Checksummer::Add_Buffer(v48, Block, strlen((const char *)Block)); /*0x5286a8*/
  v6 = this + 40; /*0x5286aa*/
  v46 = v5; /*0x5286b4*/
  if ( (unsigned __int8)HashTable::BinarySearch(&v46) ) /*0x5286b8*/
  {
    v47 = v5; /*0x5286c5*/
    v7 = *(_DWORD **)SortedArray::FindValue(&v47); /*0x5286d1*/
  }
  else
  {
    v7 = 0; /*0x5286d5*/
  }
  v41 = v7; /*0x5286d9*/
  if ( !v7 ) /*0x5286dd*/
  {
    v8 = __2_YAPAXI_Z(0x44u); /*0x5286ea*/
    if ( !v8 ) /*0x5286f1*/
      return 0; /*0x5289d1*/
    v9 = _strdup((const char *)Block); /*0x528706*/
    GenericNode::Constructor(v8); /*0x528708*/
    *v8 = &Node<INIClass::INISection *>::`vftable'; /*0x528710*/
    v8[3] = v9; /*0x528716*/
    INIClass::sectionExists(v8 + 4); /*0x528719*/
    INIClass::getValue(v8 + 11); /*0x528721*/
    v8[16] = 0; /*0x52872a*/
    *v8 = &INIClass::INISection::`vftable'; /*0x52872d*/
    v41 = v8; /*0x528737*/
    LinkedList::Prepend(v8); /*0x52873b*/
    v10 = (unsigned __int8 *)v8[3]; /*0x528740*/
    v49 = 0; /*0x52874a*/
    v50 = 0; /*0x52874e*/
    v51 = 0; /*0x528752*/
    v11 = Checksummer::Add_Buffer(&v49, v10, strlen((const char *)v10)); /*0x528769*/
    v12 = *((_DWORD *)v6 + 2); /*0x52876b*/
    if ( *((_DWORD *)v6 + 1) + 1 <= v12 ) /*0x528771*/
      goto LABEL_12; /*0x528771*/
    if ( !v12 ) /*0x528775*/
      v12 = 10; /*0x528777*/
    if ( (unsigned __int8)INIClass::mergeSection(v12) ) /*0x52877f*/
    {
LABEL_12:
      *(_DWORD *)(*(_DWORD *)v6 + 8 * *((_DWORD *)v6 + 1)) = v11; /*0x52878e*/
      *(_DWORD *)(*(_DWORD *)v6 + 8 * *((_DWORD *)v6 + 1) + 4) = v8; /*0x528797*/
      v13 = *((_DWORD *)v6 + 1) + 1; /*0x52879e*/
      v6[12] = 0; /*0x52879f*/
      *((_DWORD *)v6 + 1) = v13; /*0x5287a2*/
    }
  }
  v14 = 0; /*0x5287b0*/
  Blocka = 0; /*0x5287b2*/
  v45 = 0; /*0x5287bb*/
  v44 = 0; /*0x5287c5*/
  v43 = 0; /*0x5287c9*/
  v49 = 0; /*0x5287cd*/
  v50 = 0; /*0x5287d1*/
  v51 = 0; /*0x5287d5*/
  v42 = Checksummer::Add_Buffer(&v49, (unsigned __int8 *)a3, strlen(a3)); /*0x5287de*/
  v15 = v41 + 11; /*0x5287ea*/
  if ( (unsigned __int8)SortedArray::Find(&v42) ) /*0x5287f0*/
    v16 = *(_DWORD **)SortedArray::BinarySearch2(&v42); /*0x528805*/
  else
    v16 = 0; /*0x528809*/
  v40 = v16; /*0x52880d*/
  if ( v16 ) /*0x528811*/
  {
    v14 = v16[5]; /*0x52881d*/
    Blocka = (void *)v16[6]; /*0x528820*/
    v17 = v16[7]; /*0x528824*/
    v45 = (char *)v16[9]; /*0x528827*/
    v18 = v16[8]; /*0x52882b*/
    v16[5] = 0; /*0x52882e*/
    v44 = v17; /*0x528835*/
    v43 = v18; /*0x528839*/
    v40[6] = 0; /*0x52883d*/
    v19 = strlen((const char *)v40[3]) + 1; /*0x52884e*/
    v36 = (unsigned __int8 *)v40[3]; /*0x528854*/
    v20 = (unsigned int *)KeyValuePair::Init(0); /*0x52885a*/
    v42 = Checksummer::Add_Buffer(v20, v36, v19 - 1); /*0x52886d*/
    v21 = HashTable::BinarySearchAlt(&v42); /*0x528871*/
    if ( v21 ) /*0x528878*/
    {
      v22 = (v21 - *v15) >> 3; /*0x52887c*/
      if ( v22 != -1 ) /*0x528882*/
      {
        for ( i = v22 + 1; i < v15[1]; *(_DWORD *)(v25 - 4) = *(_DWORD *)(v25 + 4) ) /*0x52888c*/
        {
          v24 = *(_DWORD *)(*v15 + 8 * i); /*0x528890*/
          v25 = *v15 + 8 * i++; /*0x528893*/
          *(_DWORD *)(v25 - 8) = v24; /*0x528897*/
        }
        v26 = *v15; /*0x5288aa*/
        v27 = v15[1] - 1; /*0x5288ac*/
        v15[1] = v27; /*0x5288af*/
        *(_DWORD *)(v26 + 8 * v27) = 0; /*0x5288b4*/
        *(_DWORD *)(v26 + 8 * v27 + 4) = 0; /*0x5288b7*/
        v15[4] = 0; /*0x5288bb*/
      }
    }
    if ( v40 ) /*0x5288c4*/
      (*(void (__thiscall **)(_DWORD *, int))*v40)(v40, 1); /*0x5288ca*/
  }
  if ( !Source || !strlen(Source) ) /*0x5288dd*/
    return 1; /*0x5288e2*/
  if ( __2_YAPAXI_Z(0x28u) ) /*0x5288ea*/
  {
    v39 = v43; /*0x528904*/
    v37 = v44; /*0x528909*/
    v35 = v45; /*0x52890e*/
    v34 = _strdup(Source); /*0x52891a*/
    v28 = _strdup(a3); /*0x528920*/
    v29 = (_DWORD *)INIClass::findSection(v28, v34, v14, Blocka, v35, v37, v39); /*0x52892b*/
    v40 = v29; /*0x528932*/
    if ( !v29 ) /*0x528936*/
      goto LABEL_28; /*0x528936*/
    LinkedList::Prepend(v29); /*0x528982*/
    v32 = strlen((const char *)v40[3]) + 1; /*0x528995*/
    v38 = (unsigned __int8 *)v40[3]; /*0x52899b*/
    v33 = (unsigned int *)KeyValuePair::Init(0); /*0x5289a1*/
    a3 = (char *)Checksummer::Add_Buffer(v33, v38, v32 - 1); /*0x5289ad*/
    INIClass::setValue(&a3, &v40); /*0x5289bd*/
    return 1; /*0x5289cb*/
  }
  v40 = 0; /*0x528974*/
LABEL_28:
  free(Blocka); /*0x528938*/
  if ( !v14 ) /*0x528947*/
    return 0; /*0x528947*/
  do /*0x528966*/
  {
    free(*(void **)v14); /*0x528951*/
    v30 = *(_DWORD *)(v14 + 4); /*0x528956*/
    __3_YAXPAX_Z((void *)v14); /*0x52895a*/
    v14 = v30; /*0x528964*/
  }
  while ( v30 ); /*0x528966*/
  return 0; /*0x528968*/
}



// ==== 0x005289E0  INIClass::SetStringOrEmpty  this=ObjectClass  sig=csp ====
char __thiscall INIClass_SetStringOrEmpty(char *this, char **a2, char **a3, char **a4)
{
  unsigned __int8 *v5; // eax
  char *v7; // [esp-8h] [ebp-Ch]
  char *v8; // [esp-4h] [ebp-8h]

  v8 = String::GetOrEmpty_Alt(a4); /*0x5289f0*/
  v7 = String::GetOrEmpty_Alt(a3); /*0x5289fa*/
  v5 = (unsigned __int8 *)String::GetOrEmpty_Alt(a2); /*0x5289fb*/
  return INIClass::SetString(this, v5, v7, v8); /*0x528a08*/
}



// ==== 0x00528A10  INIClass::GetString  this=INIClass  sig=csp ====
int __thiscall INIClass::GetString(
        INIClass *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        char *Source,
        char *Destination,
        int Count)
{
  char *v6; // edi
  unsigned __int8 *v8; // ebx
  unsigned __int8 *v9; // edx
  int v10; // esi
  unsigned __int8 *v11; // eax
  int v12; // ecx
  HashTable *v13; // esi
  unsigned __int8 **HashTable_field_0x10; // ecx
  int v15; // eax
  unsigned __int8 **v16; // ecx
  int v17; // eax
  int *v18; // esi
  unsigned __int8 *v19; // edi
  unsigned __int8 **unknown38; // eax
  int v21; // eax
  int *v22; // esi
  char *v23; // ecx
  int v24; // esi
  _BYTE v26[12]; // [esp+Ch] [ebp-Ch] BYREF

  v6 = Destination; /*0x528a18*/
  if ( !Destination ) /*0x528a20*/
    return 0; /*0x528a20*/
  if ( Count < 2 ) /*0x528a2b*/
    return 0; /*0x528a2b*/
  v8 = a2; /*0x528a31*/
  if ( !a2 ) /*0x528a37*/
    return 0; /*0x528a37*/
  v9 = a3; /*0x528a3d*/
  if ( !a3 ) /*0x528a43*/
    return 0; /*0x528a43*/
  if ( a2 == (unsigned __int8 *)this->headNode[0] ) /*0x528a4f*/
  {
    v10 = this->headNode[1]; /*0x528a55*/
    goto LABEL_7; /*0x528a55*/
  }
  memset(v26, 0, sizeof(v26)); /*0x528af3*/
  v19 = (unsigned __int8 *)Checksummer::Add_Buffer((Checksummer *)v26, a2, strlen((const char *)a2)); /*0x528b19*/
  a2 = v19; /*0x528b1b*/
  if ( !this->INIClass_field_2C ) /*0x528b1f*/
    goto LABEL_29; /*0x528b1f*/
  unknown38 = (unsigned __int8 **)this->unknown38; /*0x528b26*/
  if ( unknown38 && *unknown38 == v19 ) /*0x528b2f*/
    goto LABEL_24; /*0x528b2f*/
  v21 = SortedArray::BinarySearch((SortedArray *)&this->__pad_20[8], (int *)&a2); /*0x528b38*/
  if ( !v21 ) /*0x528b3f*/
  {
LABEL_29:
    v23 = Source; /*0x528b80*/
    v6 = Destination; /*0x528b84*/
    this->headNode[0] = 0; /*0x528b8a*/
    this->headNode[1] = 0; /*0x528b8d*/
    goto LABEL_36; /*0x528b90*/
  }
  this->unknown38 = v21; /*0x528b41*/
LABEL_24:
  a2 = v19; /*0x528b44*/
  if ( (unsigned __int8)HashTable::BinarySearch((int *)&this->__pad_20[8], (int *)&a2) ) /*0x528b4f*/
    v22 = (int *)(this->unknown38 + 4); /*0x528b5b*/
  else
    v22 = (int *)&unk_B7882C; /*0x528b60*/
  v10 = *v22; /*0x528b65*/
  if ( !v10 ) /*0x528b69*/
    goto LABEL_29; /*0x528b69*/
  v9 = a3; /*0x528b6b*/
  v6 = Destination; /*0x528b6f*/
  this->headNode[1] = v10; /*0x528b73*/
  this->headNode[0] = (int)v8; /*0x528b76*/
LABEL_7:
  if ( v10 ) /*0x528a5a*/
  {
    memset(v26, 0, sizeof(v26)); /*0x528a60*/
    v11 = (unsigned __int8 *)Checksummer::Add_Buffer((Checksummer *)v26, v9, strlen((const char *)v9)); /*0x528a7e*/
    v12 = *(_DWORD *)(v10 + 48); /*0x528a83*/
    v13 = (HashTable *)(v10 + 44); /*0x528a86*/
    a3 = v11; /*0x528a8b*/
    if ( v12 ) /*0x528a8f*/
    {
      HashTable_field_0x10 = (unsigned __int8 **)v13->HashTable_field_0x10; /*0x528a95*/
      if ( HashTable_field_0x10 && *HashTable_field_0x10 == v11 ) /*0x528a9e*/
      {
LABEL_13:
        if ( v13->HashTable_field_0x04 ) /*0x528abb*/
        {
          v16 = (unsigned __int8 **)v13->HashTable_field_0x10; /*0x528ac6*/
          if ( v16 && *v16 == v11 ) /*0x528acf*/
            goto LABEL_18; /*0x528acf*/
          v17 = HashTable::BinarySearchAlt(v13, (int *)&a3); /*0x528ad8*/
          if ( v17 ) /*0x528adf*/
          {
            v13->HashTable_field_0x10 = v17; /*0x528ae5*/
LABEL_18:
            v18 = (int *)(v13->HashTable_field_0x10 + 4); /*0x528ae8*/
LABEL_31:
            v24 = *v18; /*0x528b97*/
            if ( v24 ) /*0x528b9b*/
            {
              v23 = *(char **)(v24 + 16); /*0x528b9d*/
              if ( v23 ) /*0x528ba2*/
              {
                v6 = Destination; /*0x528ba4*/
                goto LABEL_36; /*0x528baa*/
              }
            }
            goto LABEL_34; /*0x528ba2*/
          }
        }
        v18 = (int *)&unk_B78830; /*0x528b92*/
        goto LABEL_31; /*0x528b92*/
      }
      v15 = HashTable::BinarySearchAlt(v13, (int *)&a3); /*0x528aa7*/
      if ( v15 ) /*0x528aae*/
      {
        v13->HashTable_field_0x10 = v15; /*0x528ab4*/
        v11 = a3; /*0x528ab7*/
        goto LABEL_13; /*0x528ab7*/
      }
    }
LABEL_34:
    v6 = Destination; /*0x528bac*/
  }
  v23 = Source; /*0x528bb2*/
LABEL_36:
  if ( !v23 ) /*0x528bb9*/
  {
    *v6 = 0; /*0x528bbb*/
    return 0; /*0x528bc6*/
  }
  strncpy(v6, v23, Count); /*0x528bd0*/
  v6[Count - 1] = 0; /*0x528bde*/
  String::Trim(v6); /*0x528be3*/
  return strlen(v6); /*0x528bbe*/
}



// ==== 0x00528C00  INIClass::ReadString  this=INIClass  sig=csp ====
int __thiscall INIClass::ReadString(INIClass *this, char **a2, char **a3, char **a4, int a5)
{
  unsigned __int8 *v6; // edi
  unsigned __int8 *v7; // ebx
  int v8; // esi
  unsigned __int8 *v9; // eax
  int v10; // ecx
  HashTable *v11; // esi
  unsigned __int8 **HashTable_field_0x10; // ecx
  int v13; // eax
  int *v14; // esi
  int v15; // edi
  int v16; // eax
  int *v17; // esi
  int v18; // esi
  char *v19; // esi
  int v20; // esi
  int v22; // [esp+0h] [ebp-428h] BYREF
  unsigned __int8 *v23; // [esp+10h] [ebp-418h] BYREF
  int v24; // [esp+14h] [ebp-414h] BYREF
  char *Source; // [esp+18h] [ebp-410h]
  Checksummer v26; // [esp+1Ch] [ebp-40Ch] BYREF
  char v27; // [esp+426h] [ebp-2h]

  Source = String::GetOrEmpty_Alt((String *)a4); /*0x528c1f*/
  v6 = (unsigned __int8 *)String::GetOrEmpty_Alt((String *)a3); /*0x528c2f*/
  v23 = v6; /*0x528c31*/
  v7 = (unsigned __int8 *)String::GetOrEmpty_Alt((String *)a2); /*0x528c3a*/
  if ( &v22 == (int *)-40 || !v7 || !v6 ) /*0x528c54*/
    goto LABEL_30; /*0x528c54*/
  if ( v7 != (unsigned __int8 *)this->headNode[0] ) /*0x528c5d*/
  {
    memset(&v26, 0, 12); /*0x528ce6*/
    v15 = Checksummer::Add_Buffer(&v26, v7, strlen((const char *)v7)); /*0x528d0c*/
    v24 = v15; /*0x528d0e*/
    if ( this->INIClass_field_2C ) /*0x528d12*/
    {
      if ( !(unsigned __int8)SortedArray::CheckCache((SortedArray *)&this->__pad_20[8], &v24) ) /*0x528d20*/
      {
        v16 = SortedArray::BinarySearch((SortedArray *)&this->__pad_20[8], &v24); /*0x528d30*/
        if ( !v16 ) /*0x528d37*/
          goto LABEL_23; /*0x528d37*/
        this->unknown38 = v16; /*0x528d39*/
      }
      v24 = v15; /*0x528d43*/
      if ( (unsigned __int8)HashTable::BinarySearch((int *)&this->__pad_20[8], &v24) ) /*0x528d47*/
        v17 = (int *)(this->unknown38 + 4); /*0x528d53*/
      else
        v17 = (int *)&unk_B7882C; /*0x528d58*/
      v8 = *v17; /*0x528d5d*/
      if ( v8 ) /*0x528d61*/
      {
        v6 = v23; /*0x528d63*/
        this->headNode[1] = v8; /*0x528d67*/
        this->headNode[0] = (int)v7; /*0x528d6a*/
        goto LABEL_6; /*0x528d6d*/
      }
    }
LABEL_23:
    this->headNode[0] = 0; /*0x528d72*/
    this->headNode[1] = 0; /*0x528d77*/
    goto LABEL_28; /*0x528d7a*/
  }
  v8 = this->headNode[1]; /*0x528c63*/
LABEL_6:
  if ( v8 ) /*0x528c6a*/
  {
    memset(&v26, 0, 12); /*0x528c73*/
    v9 = (unsigned __int8 *)Checksummer::Add_Buffer(&v26, v23, strlen((const char *)v6)); /*0x528c8e*/
    v10 = *(_DWORD *)(v8 + 48); /*0x528c93*/
    v11 = (HashTable *)(v8 + 44); /*0x528c96*/
    v23 = v9; /*0x528c9b*/
    if ( v10 ) /*0x528c9f*/
    {
      HashTable_field_0x10 = (unsigned __int8 **)v11->HashTable_field_0x10; /*0x528ca5*/
      if ( HashTable_field_0x10 && *HashTable_field_0x10 == v9 ) /*0x528cae*/
      {
LABEL_12:
        if ( (unsigned __int8)SortedArray::Find((int *)v11->__pad_0, (int *)&v23) ) /*0x528cce*/
          v14 = (int *)(v11->HashTable_field_0x10 + 4); /*0x528cde*/
        else
          v14 = (int *)&unk_B78830; /*0x528d7c*/
        v18 = *v14; /*0x528d81*/
        if ( v18 ) /*0x528d85*/
        {
          v19 = *(char **)(v18 + 16); /*0x528d87*/
          if ( v19 ) /*0x528d8c*/
            Source = v19; /*0x528d8e*/
        }
        goto LABEL_28; /*0x528d8e*/
      }
      v13 = HashTable::BinarySearchAlt(v11, (int *)&v23); /*0x528cb7*/
      if ( v13 ) /*0x528cbe*/
      {
        v11->HashTable_field_0x10 = v13; /*0x528cc4*/
        goto LABEL_12; /*0x528cc4*/
      }
    }
  }
LABEL_28:
  if ( Source ) /*0x528d98*/
  {
    strncpy((char *)&v26.buffer, Source, 0x3FFu); /*0x528dcb*/
    v27 = 0; /*0x528dd7*/
    String::Trim((char *)&v26.buffer); /*0x528ddf*/
    v20 = strlen((const char *)&v26.buffer); /*0x528df2*/
    goto LABEL_31; /*0x528df4*/
  }
  LOBYTE(v26.buffer) = 0; /*0x528d9a*/
LABEL_30:
  v20 = 0; /*0x528d9e*/
LABEL_31:
  String::Assign_Alt((String *)a5, (const char *)&v26.buffer); /*0x528da0*/
  return v20; /*0x528db3*/
}



// ==== 0x00528E00  INIClass::SetWideAsHex  this=INIClass  sig=csp ====
int __thiscall INIClass::SetWideAsHex(char *this, unsigned __int8 *Block, char *a3, wchar_t *String)
{
  int result; // eax
  char v5; // bl
  int v6; // eax
  char *v7; // ebp
  wchar_t v8; // ax
  char *i; // ebx

  v5 = 0; /*0x528e08*/
  if ( String ) /*0x528e10*/
  {
    v6 = wcslen(String); /*0x528e17*/
    result = (int)__2_YAPAXI_Z(8 * v6 + 1); /*0x528e21*/
    v7 = (char *)result; /*0x528e26*/
    if ( result ) /*0x528e2d*/
    {
      *(_BYTE *)result = 0; /*0x528e33*/
      v8 = *String; /*0x528e37*/
      for ( i = v7; *String; i = &v7[strlen(v7)] ) /*0x528e37*/
      {
        _itoa(v8, i, 16); /*0x528e4b*/
        strcat(i, Str); /*0x528e74*/
        v8 = *++String; /*0x528e94*/
      }
      v5 = INIClass::SetString(this, Block, a3, v7); /*0x528eb4*/
      __3_YAXPAX_Z(v7); /*0x528eb6*/
    }
  }
  LOBYTE(result) = v5; /*0x528ebf*/
  return result; /*0x528ebe*/
}



// ==== 0x00528F00  INIClass::ParseValue_Wide  this=INIClass  sig=csp ====
int __thiscall INIClass::ParseValue_Wide(
        INIClass *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        wchar_t *Source,
        wchar_t *String,
        size_t Count)
{
  unsigned __int8 *v7; // edx
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  HashTable *v11; // esi
  _DWORD *HashTable_field_0x10; // ecx
  int v13; // eax
  int *v14; // esi
  int v15; // edi
  int v16; // eax
  int *v17; // esi
  int v18; // esi
  const char *v19; // eax
  char *v21; // eax
  wchar_t *v22; // esi
  size_t v23; // edi
  int v24; // [esp+10h] [ebp-5014h] BYREF
  int v25; // [esp+14h] [ebp-5010h] BYREF
  Checksummer v26; // [esp+18h] [ebp-500Ch] BYREF
  char v27; // [esp+5023h] [ebp-1h]

  if ( &v26 == (Checksummer *)-12 ) /*0x528f16*/
    goto LABEL_29; /*0x528f16*/
  if ( !a2 ) /*0x528f27*/
    goto LABEL_29; /*0x528f27*/
  v7 = a3; /*0x528f2d*/
  if ( !a3 ) /*0x528f36*/
    goto LABEL_29; /*0x528f36*/
  if ( a2 == (unsigned __int8 *)this->headNode[0] ) /*0x528f3f*/
  {
    v8 = this->headNode[1]; /*0x528f45*/
    goto LABEL_6; /*0x528f45*/
  }
  memset(&v26, 0, 12); /*0x528fc6*/
  v15 = Checksummer::Add_Buffer(&v26, a2, strlen((const char *)a2)); /*0x528fec*/
  v24 = v15; /*0x528fee*/
  if ( !this->INIClass_field_2C ) /*0x528ff2*/
    goto LABEL_23; /*0x528ff2*/
  if ( (unsigned __int8)SortedArray::CheckCache((SortedArray *)&this->__pad_20[8], &v24) ) /*0x529000*/
    goto LABEL_18; /*0x529007*/
  v16 = SortedArray::BinarySearch((SortedArray *)&this->__pad_20[8], &v24); /*0x529010*/
  if ( !v16 ) /*0x529017*/
  {
LABEL_23:
    this->headNode[0] = 0; /*0x529057*/
    this->headNode[1] = 0; /*0x52905c*/
    LOBYTE(v26.buffer) = 0; /*0x52905f*/
LABEL_29:
    wcsncpy(String, Source, Count); /*0x5290b6*/
    return wcslen(String); /*0x5290e6*/
  }
  this->unknown38 = v16; /*0x529019*/
LABEL_18:
  v25 = v15; /*0x52901c*/
  if ( (unsigned __int8)HashTable::BinarySearch((int *)&this->__pad_20[8], &v25) ) /*0x529027*/
    v17 = (int *)(this->unknown38 + 4); /*0x529033*/
  else
    v17 = (int *)&unk_B7882C; /*0x529038*/
  v8 = *v17; /*0x52903d*/
  if ( !v8 ) /*0x529041*/
    goto LABEL_23; /*0x529041*/
  v7 = a3; /*0x529043*/
  this->headNode[1] = v8; /*0x52904a*/
  this->headNode[0] = (int)a2; /*0x52904d*/
LABEL_6:
  if ( !v8 ) /*0x528f4a*/
    goto LABEL_27; /*0x528f4a*/
  memset(&v26, 0, 12); /*0x528f50*/
  v9 = Checksummer::Add_Buffer(&v26, v7, strlen((const char *)v7)); /*0x528f6e*/
  v10 = *(_DWORD *)(v8 + 48); /*0x528f73*/
  v11 = (HashTable *)(v8 + 44); /*0x528f76*/
  v24 = v9; /*0x528f7b*/
  if ( !v10 ) /*0x528f7f*/
    goto LABEL_27; /*0x528f7f*/
  HashTable_field_0x10 = (_DWORD *)v11->HashTable_field_0x10; /*0x528f85*/
  if ( HashTable_field_0x10 && *HashTable_field_0x10 == v9 ) /*0x528f8e*/
    goto LABEL_12; /*0x528f8e*/
  v13 = HashTable::BinarySearchAlt(v11, &v24); /*0x528f97*/
  if ( !v13 ) /*0x528f9e*/
  {
LABEL_27:
    LOBYTE(v26.buffer) = 0; /*0x529079*/
    goto LABEL_29; /*0x52907e*/
  }
  v11->HashTable_field_0x10 = v13; /*0x528fa4*/
LABEL_12:
  if ( (unsigned __int8)SortedArray::Find((int *)v11->__pad_0, &v24) ) /*0x528fae*/
    v14 = (int *)(v11->HashTable_field_0x10 + 4); /*0x528fbe*/
  else
    v14 = (int *)&unk_B78830; /*0x529065*/
  v18 = *v14; /*0x52906a*/
  if ( !v18 ) /*0x52906e*/
    goto LABEL_27; /*0x52906e*/
  v19 = *(const char **)(v18 + 16); /*0x529070*/
  if ( !v19 ) /*0x529075*/
    goto LABEL_27; /*0x529075*/
  strncpy((char *)&v26.buffer, v19, 0x5000u); /*0x52908b*/
  v27 = 0; /*0x529097*/
  String::Trim((char *)&v26.buffer); /*0x52909f*/
  if ( !strlen((const char *)&v26.buffer) ) /*0x5290a8*/
    goto LABEL_29; /*0x5290b4*/
  v21 = strtok((char *)&v26.buffer, Str); /*0x5290f3*/
  v22 = String; /*0x529104*/
  if ( v21 ) /*0x529106*/
  {
    v23 = Count; /*0x529108*/
    do /*0x529140*/
    {
      if ( !v23 ) /*0x529111*/
        break; /*0x529111*/
      sscanf(v21, "%x", &v25); /*0x52911e*/
      *v22++ = v25; /*0x52912d*/
      v21 = strtok(0, Str); /*0x529135*/
      --v23; /*0x52913d*/
    }
    while ( v21 ); /*0x529140*/
  }
  *v22 = 0; /*0x529143*/
  return wcslen(String); /*0x5290dc*/
}



// ==== 0x00529160  INIClass::GetStringEx  this=INIClass  sig=csp ====
int __thiscall INIClass::GetStringEx(int this, unsigned __int8 *a2, unsigned __int8 *a3, wchar_t *String, size_t Count)
{
  unsigned __int8 *v6; // edx
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // esi
  _DWORD *v11; // ecx
  int v12; // eax
  int *v13; // esi
  int v14; // edi
  int v15; // eax
  int *v16; // esi
  int v17; // esi
  const char *v18; // eax
  wchar_t *StringCSF; // eax
  int v21; // [esp+10h] [ebp-414h] BYREF
  unsigned int v22; // [esp+14h] [ebp-410h] BYREF
  int v23; // [esp+18h] [ebp-40Ch]
  int v24; // [esp+1Ch] [ebp-408h]
  int v25; // [esp+20h] [ebp-404h] BYREF
  char Destination[1024]; // [esp+24h] [ebp-400h] BYREF

  if ( Destination ) /*0x529172*/
  {
    if ( a2 ) /*0x529183*/
    {
      v6 = a3; /*0x529189*/
      if ( a3 ) /*0x529192*/
      {
        if ( a2 == *(unsigned __int8 **)(this + 4) ) /*0x52919b*/
        {
          v7 = *(_DWORD *)(this + 8); /*0x5291a1*/
LABEL_6:
          if ( v7 ) /*0x5291a6*/
          {
            v22 = 0; /*0x5291ac*/
            v23 = 0; /*0x5291b0*/
            v24 = 0; /*0x5291b4*/
            v8 = Checksummer::Add_Buffer(&v22, v6, strlen((const char *)v6)); /*0x5291ca*/
            v9 = *(_DWORD *)(v7 + 48); /*0x5291cf*/
            v10 = v7 + 44; /*0x5291d2*/
            v21 = v8; /*0x5291d7*/
            if ( v9 ) /*0x5291db*/
            {
              v11 = *(_DWORD **)(v10 + 16); /*0x5291e1*/
              if ( v11 && *v11 == v8 ) /*0x5291ea*/
                goto LABEL_12; /*0x5291ea*/
              v12 = HashTable::BinarySearchAlt((char **)v10, &v21); /*0x5291f3*/
              if ( v12 ) /*0x5291fa*/
              {
                *(_DWORD *)(v10 + 16) = v12; /*0x529200*/
LABEL_12:
                if ( (unsigned __int8)SortedArray::Find(v10, &v21) ) /*0x52920a*/
                  v13 = (int *)(*(_DWORD *)(v10 + 16) + 4); /*0x52921a*/
                else
                  v13 = (int *)&unk_B78830; /*0x5292c4*/
                v17 = *v13; /*0x5292c9*/
                if ( v17 ) /*0x5292cd*/
                {
                  v18 = *(const char **)(v17 + 16); /*0x5292cf*/
                  if ( v18 ) /*0x5292d4*/
                  {
                    strncpy(Destination, v18, 0x400u); /*0x5292ec*/
                    Destination[1023] = 0; /*0x5292f8*/
                    String::Trim(Destination); /*0x529300*/
                    goto LABEL_29; /*0x529300*/
                  }
                }
              }
            }
          }
          Destination[0] = 0; /*0x5292da*/
          goto LABEL_29; /*0x5292df*/
        }
        v22 = 0; /*0x529222*/
        v23 = 0; /*0x529226*/
        v24 = 0; /*0x52922a*/
        v14 = Checksummer::Add_Buffer(&v22, a2, strlen((const char *)a2)); /*0x529248*/
        v21 = v14; /*0x52924a*/
        if ( !*(_DWORD *)(this + 44) ) /*0x529253*/
          goto LABEL_23; /*0x529253*/
        if ( !(unsigned __int8)SortedArray::CheckCache((_DWORD *)(this + 40), &v21) ) /*0x52925c*/
        {
          v15 = SortedArray::BinarySearch((char **)(this + 40), &v21); /*0x52926c*/
          if ( !v15 ) /*0x529273*/
          {
LABEL_23:
            *(_DWORD *)(this + 4) = 0; /*0x5292b3*/
            *(_DWORD *)(this + 8) = 0; /*0x5292ba*/
            Destination[0] = 0; /*0x5292bd*/
            goto LABEL_29; /*0x5292c2*/
          }
          *(_DWORD *)(this + 56) = v15; /*0x529275*/
        }
        v25 = v14; /*0x52927f*/
        if ( (unsigned __int8)HashTable::BinarySearch(this + 40, &v25) ) /*0x529283*/
          v16 = (int *)(*(_DWORD *)(this + 56) + 4); /*0x52928f*/
        else
          v16 = (int *)&unk_B7882C; /*0x529294*/
        v7 = *v16; /*0x529299*/
        if ( v7 ) /*0x52929d*/
        {
          v6 = a3; /*0x52929f*/
          *(_DWORD *)(this + 8) = v7; /*0x5292a6*/
          *(_DWORD *)(this + 4) = a2; /*0x5292a9*/
          goto LABEL_6; /*0x5292ae*/
        }
        goto LABEL_23; /*0x52929d*/
      }
    }
  }
LABEL_29:
  StringCSF = GetStringCSF((wchar_t *)Destination, 0, g_Str_File_Ini_CPP, 1858); /*0x529307*/
  wcsncpy(String, StringCSF, Count); /*0x52932d*/
  String[Count - 1] = 0; /*0x529333*/
  return wcslen(String); /*0x529340*/
}



// ==== 0x00529350  INIClass::GetCSFString  this=INIClass  sig=csp ====
int __thiscall INIClass::GetCSFString(
        INIClass *this,
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
  HashTable *v11; // esi
  _DWORD *HashTable_field_0x10; // ecx
  int v13; // eax
  int *v14; // esi
  int v15; // edi
  int v16; // eax
  int *v17; // esi
  int v18; // esi
  const char *v19; // eax
  wchar_t *StringCSF; // eax
  int v22; // [esp+10h] [ebp-414h] BYREF
  Checksummer v23; // [esp+14h] [ebp-410h] BYREF
  char Destination[1024]; // [esp+24h] [ebp-400h] BYREF

  if ( !Destination ) /*0x529362*/
    goto LABEL_29; /*0x529362*/
  if ( !a2 ) /*0x529373*/
    goto LABEL_29; /*0x529373*/
  v7 = a3; /*0x529379*/
  if ( !a3 ) /*0x529382*/
    goto LABEL_29; /*0x529382*/
  if ( a2 == (unsigned __int8 *)this->headNode[0] ) /*0x52938b*/
  {
    v8 = this->headNode[1]; /*0x529391*/
    goto LABEL_6; /*0x529391*/
  }
  memset(&v23, 0, 12); /*0x529412*/
  v15 = Checksummer::Add_Buffer(&v23, a2, strlen((const char *)a2)); /*0x529438*/
  v22 = v15; /*0x52943a*/
  if ( !this->INIClass_field_2C ) /*0x52943e*/
    goto LABEL_23; /*0x52943e*/
  if ( (unsigned __int8)SortedArray::CheckCache((SortedArray *)&this->__pad_20[8], &v22) ) /*0x52944c*/
    goto LABEL_18; /*0x529453*/
  v16 = SortedArray::BinarySearch((SortedArray *)&this->__pad_20[8], &v22); /*0x52945c*/
  if ( !v16 ) /*0x529463*/
  {
LABEL_23:
    this->headNode[0] = 0; /*0x5294a1*/
    this->headNode[1] = 0; /*0x5294a6*/
    Destination[0] = 0; /*0x5294a9*/
    goto LABEL_29; /*0x5294ad*/
  }
  this->unknown38 = v16; /*0x529465*/
LABEL_18:
  v23.buffer = v15; /*0x529468*/
  if ( (unsigned __int8)HashTable::BinarySearch((int *)&this->__pad_20[8], &v23.buffer) ) /*0x529473*/
    v17 = (int *)(this->unknown38 + 4); /*0x52947f*/
  else
    v17 = (int *)&unk_B7882C; /*0x529484*/
  v8 = *v17; /*0x529489*/
  if ( !v8 ) /*0x52948d*/
    goto LABEL_23; /*0x52948d*/
  v7 = a3; /*0x52948f*/
  this->headNode[1] = v8; /*0x529496*/
  this->headNode[0] = (int)a2; /*0x529499*/
LABEL_6:
  if ( !v8 ) /*0x529398*/
    goto LABEL_27; /*0x529398*/
  memset(&v23, 0, 12); /*0x5293a8*/
  v9 = Checksummer::Add_Buffer(&v23, v7, strlen((const char *)v7)); /*0x5293ba*/
  v10 = *(_DWORD *)(v8 + 48); /*0x5293bf*/
  v11 = (HashTable *)(v8 + 44); /*0x5293c2*/
  v22 = v9; /*0x5293c7*/
  if ( !v10 ) /*0x5293cb*/
    goto LABEL_27; /*0x5293cb*/
  HashTable_field_0x10 = (_DWORD *)v11->HashTable_field_0x10; /*0x5293d1*/
  if ( HashTable_field_0x10 && *HashTable_field_0x10 == v9 ) /*0x5293da*/
    goto LABEL_12; /*0x5293da*/
  v13 = HashTable::BinarySearchAlt(v11, &v22); /*0x5293e3*/
  if ( !v13 ) /*0x5293ea*/
  {
LABEL_27:
    Destination[0] = 0; /*0x5294c3*/
    goto LABEL_29; /*0x5294c8*/
  }
  v11->HashTable_field_0x10 = v13; /*0x5293f0*/
LABEL_12:
  if ( (unsigned __int8)SortedArray::Find((int *)v11->__pad_0, &v22) ) /*0x5293fa*/
    v14 = (int *)(v11->HashTable_field_0x10 + 4); /*0x52940a*/
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
    StringCSF = GetStringCSF((wchar_t *)Destination, 0, g_Str_File_Ini_CPP, 1874); /*0x52952b*/
  else
    StringCSF = GetStringCSF(a5, 0, g_Str_File_Ini_CPP, 1872); /*0x529519*/
  wcsncpy(String, StringCSF, Count); /*0x529539*/
  String[Count - 1] = 0; /*0x529541*/
  return wcslen(String); /*0x529551*/
}



// ==== 0x00529560  INIClass::SetBool  this=INIClass  sig=csp ====
char __thiscall INIClass_SetBool(char *this, unsigned __int8 *Block, char *a3, char a4)
{
  if ( a4 ) /*0x529566*/
    return INIClass::SetString(this, Block, a3, off_825BF8); /*0x529577*/
  else
    return INIClass::SetString(this, Block, a3, g_Str_no); /*0x52958e*/
}



// ==== 0x005295A0  INIClass::ReadBool3  this=INIClass  sig=csp ====
char __thiscall sub_5295A0(char *this, char **a2, char **a3, char a4)
{
  char *v5; // edi
  unsigned __int8 *v6; // eax

  v5 = String::GetOrEmpty_Alt(a3); /*0x5295b1*/
  v6 = (unsigned __int8 *)String::GetOrEmpty_Alt(a2); /*0x5295b3*/
  if ( a4 ) /*0x5295be*/
    return INIClass::SetString(this, v6, v5, off_825BF8); /*0x5295c9*/
  else
    return INIClass::SetString(this, v6, v5, g_Str_no); /*0x5295dc*/
}



// ==== 0x005295F0  INIClass::ReadBool_Overwrite  this=INIClass  sig=csp ====
int __thiscall INIClass::ReadBool_Overwrite(int *this, unsigned __int8 *a2, unsigned __int8 *a3, char a4)
{
  int result; // eax
  unsigned __int8 *v5; // ebp
  unsigned __int8 *v7; // edx
  int v8; // esi
  int v9; // ecx
  int v10; // esi
  _DWORD *v11; // ecx
  _DWORD *v12; // ecx
  int *v13; // esi
  unsigned __int8 *v14; // edi
  unsigned __int8 **v15; // eax
  int v16; // eax
  int *v17; // esi
  int v18; // esi
  char *v19; // esi
  unsigned int v20; // [esp+10h] [ebp-Ch] BYREF
  int v21; // [esp+14h] [ebp-8h]
  int v22; // [esp+18h] [ebp-4h]

  result = 0; /*0x5295f3*/
  v5 = a2; /*0x5295f7*/
  if ( !a2 ) /*0x529601*/
    goto LABEL_28; /*0x529601*/
  v7 = a3; /*0x529607*/
  if ( !a3 ) /*0x52960d*/
    goto LABEL_28; /*0x52960d*/
  if ( a2 != (unsigned __int8 *)this->headNode ) /*0x529616*/
  {
    v20 = 0; /*0x5296ba*/
    v21 = 0; /*0x5296be*/
    v22 = 0; /*0x5296c2*/
    v14 = (unsigned __int8 *)Checksummer::Add_Buffer(&v20, a2, strlen((const char *)a2)); /*0x5296e0*/
    a2 = v14; /*0x5296e2*/
    if ( this->INIClass_field_2C ) /*0x5296e6*/
    {
      v15 = (unsigned __int8 **)this->unknown38; /*0x5296ed*/
      if ( !v15 || *v15 != v14 ) /*0x5296f6*/
      {
        v16 = SortedArray::BinarySearch((char **)this + 10, (int *)&a2); /*0x5296ff*/
        if ( !v16 ) /*0x529706*/
          goto LABEL_27; /*0x529706*/
        this->unknown38 = v16; /*0x529708*/
      }
      a2 = v14; /*0x52970f*/
      if ( (unsigned __int8)HashTable::BinarySearch(this + 10, (int *)&a2) ) /*0x529716*/
        v17 = (int *)(this->unknown38 + 4); /*0x529722*/
      else
        v17 = (int *)&unk_B7882C; /*0x529727*/
      v8 = *v17; /*0x52972c*/
      if ( v8 ) /*0x529730*/
      {
        v7 = a3; /*0x529732*/
        this->q008 = v8; /*0x529736*/
        this->headNode = (int)v5; /*0x529739*/
        result = 0; /*0x52973c*/
        goto LABEL_5; /*0x52973e*/
      }
    }
LABEL_27:
    result = 0; /*0x529743*/
    this->headNode = 0; /*0x529745*/
    this->q008 = 0; /*0x529748*/
    goto LABEL_28; /*0x529748*/
  }
  v8 = this->q008; /*0x52961c*/
LABEL_5:
  if ( !v8 ) /*0x529621*/
    goto LABEL_28; /*0x529621*/
  v20 = 0; /*0x529627*/
  v21 = 0; /*0x52962b*/
  v22 = 0; /*0x52962f*/
  result = Checksummer::Add_Buffer(&v20, v7, strlen((const char *)v7)); /*0x529645*/
  v9 = *(_DWORD *)(v8 + 48); /*0x52964a*/
  v10 = v8 + 44; /*0x52964d*/
  a3 = (unsigned __int8 *)result; /*0x529652*/
  if ( !v9 ) /*0x529656*/
    goto LABEL_28; /*0x529656*/
  v11 = *(_DWORD **)(v10 + 16); /*0x52965c*/
  if ( v11 && *v11 == result ) /*0x529665*/
    goto LABEL_11; /*0x529665*/
  result = HashTable::BinarySearchAlt((char **)v10, (int *)&a3); /*0x52966e*/
  if ( !result ) /*0x529675*/
  {
LABEL_28:
    LOBYTE(result) = a4; /*0x52974b*/
    return result; /*0x529756*/
  }
  *(_DWORD *)(v10 + 16) = result; /*0x52967b*/
  result = (int)a3; /*0x52967e*/
LABEL_11:
  if ( !*(_DWORD *)(v10 + 4) ) /*0x529682*/
    goto LABEL_29; /*0x529682*/
  v12 = *(_DWORD **)(v10 + 16); /*0x52968d*/
  if ( v12 && *v12 == result ) /*0x529696*/
    goto LABEL_16; /*0x529696*/
  result = HashTable::BinarySearchAlt((char **)v10, (int *)&a3); /*0x52969f*/
  if ( !result ) /*0x5296a6*/
  {
LABEL_29:
    v13 = (int *)&unk_B78830; /*0x529759*/
    goto LABEL_30; /*0x529759*/
  }
  *(_DWORD *)(v10 + 16) = result; /*0x5296ac*/
LABEL_16:
  v13 = (int *)(*(_DWORD *)(v10 + 16) + 4); /*0x5296af*/
LABEL_30:
  v18 = *v13; /*0x52975e*/
  if ( !v18 ) /*0x529762*/
    goto LABEL_28; /*0x529762*/
  v19 = *(char **)(v18 + 16); /*0x529764*/
  if ( !v19 ) /*0x529769*/
    goto LABEL_28; /*0x529769*/
  result = toupper(*v19) - 48; /*0x529774*/
  switch ( result ) /*0x529787*/
  {
    case 0: /*0x529787*/
    case 22: /*0x529787*/
    case 30: /*0x529787*/
      LOBYTE(result) = 0; /*0x52979d*/
      break; /*0x52979d*/
    case 1: /*0x529787*/
    case 36: /*0x529787*/
    case 41: /*0x529787*/
      LOBYTE(result) = 1; /*0x529791*/
      break; /*0x529797*/
    default:
      goto LABEL_28;
  }
  return result; /*0x52974f*/
}



// ==== 0x005297E0  INIEntry::Write2Integers  this=INIClass  sig=csp ====
char __thiscall INIEntry::Write2Integers(char *this, unsigned __int8 *Block, char *a3, _DWORD *a4)
{
  char Buffer[56]; // [esp+4h] [ebp-38h] BYREF

  sprintf(Buffer, "%d,%d", *a4, a4[1]); /*0x5297fb*/
  return INIClass::SetString(this, Block, a3, Buffer); /*0x529819*/
}



// ==== 0x00529820  INIClass::GetInt  this=AbstractClass  sig=csp ====
char __thiscall sub_529820(char *this, char **a2, char **a3, _DWORD *a4)
{
  char *v5; // edi
  unsigned __int8 *v6; // ebx
  char Buffer[56]; // [esp+Ch] [ebp-38h] BYREF

  v5 = String::GetOrEmpty_Alt(a3); /*0x529835*/
  v6 = (unsigned __int8 *)String::GetOrEmpty_Alt(a2); /*0x52983c*/
  sprintf(Buffer, "%d,%d", *a4, a4[1]); /*0x529853*/
  return INIClass::SetString(this, v6, v5, Buffer); /*0x529869*/
}



// ==== 0x00529880  INIClass::ReadPoint2D_Overwrite  this=INIClass  sig=csp ====
int *__thiscall INIClass::ReadPoint2D_Overwrite(INIClass *this, int *a2, unsigned __int8 *a3, int a4, _DWORD *a5)
{
  unsigned __int8 *v6; // ebx
  const char *v7; // edx
  int v8; // esi
  unsigned int v9; // kr04_4
  Checksummer *v10; // eax
  int *v11; // esi
  int v12; // eax
  char *v13; // eax
  unsigned __int8 *v15; // edx
  unsigned __int8 *v16; // esi
  _DWORD *v17; // ecx
  unsigned __int8 *v18; // [esp-Ch] [ebp-78h]
  char *Source; // [esp+Ch] [ebp-60h]
  int v20; // [esp+10h] [ebp-5Ch] BYREF
  Checksummer v21; // [esp+14h] [ebp-58h] BYREF
  char Destination[64]; // [esp+2Ch] [ebp-40h] BYREF

  Source = &g_INI_DefaultBuffer; /*0x52988e*/
  if ( !Destination ) /*0x529896*/
    goto LABEL_18; /*0x529896*/
  v6 = a3; /*0x52989c*/
  if ( !a3 ) /*0x5298a4*/
    goto LABEL_18; /*0x5298a4*/
  v7 = (const char *)a4; /*0x5298aa*/
  if ( !a4 ) /*0x5298b0*/
    goto LABEL_18; /*0x5298b0*/
  if ( a3 == (unsigned __int8 *)this->headNode[0] ) /*0x5298bc*/
  {
    v8 = this->headNode[1]; /*0x5298c2*/
  }
  else
  {
    memset(&v21, 0, 12); /*0x52999c*/
    v16 = (unsigned __int8 *)Checksummer::Add_Buffer(&v21, a3, strlen((const char *)a3)); /*0x5299c6*/
    a3 = v16; /*0x5299cb*/
    if ( !(unsigned __int8)HashTable::BinarySearch((int *)&this->__pad_20[8], (int *)&a3) /*0x5299ec*/
      || (v20 = (int)v16, (v8 = *(_DWORD *)SortedArray::FindValue((SortedArray *)&this->__pad_20[8], &v20)) == 0) )
    {
      this->headNode[0] = 0; /*0x5299ff*/
      this->headNode[1] = 0; /*0x529a02*/
      goto LABEL_11; /*0x529a05*/
    }
    v7 = (const char *)a4; /*0x5299ee*/
    this->headNode[1] = v8; /*0x5299f2*/
    this->headNode[0] = (int)v6; /*0x5299f5*/
  }
  if ( v8 ) /*0x5298c7*/
  {
    v9 = strlen(v7) + 1; /*0x5298d0*/
    v18 = (unsigned __int8 *)v7; /*0x5298d6*/
    v10 = (Checksummer *)KeyValuePair::Init((KeyValuePair *)&v21.buffer, 0); /*0x5298dc*/
    a4 = Checksummer::Add_Buffer(v10, v18, v9 - 1); /*0x5298e8*/
    v11 = (int *)(v8 + 44); /*0x5298ec*/
    if ( (unsigned __int8)SortedArray::Find(v11, &a4) ) /*0x5298f6*/
    {
      v12 = *(_DWORD *)SortedArray::BinarySearch2((int)v11, &a4); /*0x52990b*/
      if ( v12 ) /*0x52990f*/
      {
        v13 = *(char **)(v12 + 16); /*0x529911*/
        if ( v13 ) /*0x529916*/
          Source = v13; /*0x529918*/
      }
    }
  }
LABEL_11:
  if ( Source ) /*0x529923*/
  {
    strncpy(Destination, Source, 0x40u); /*0x529931*/
    Destination[63] = 0; /*0x52993d*/
    String::Trim(Destination); /*0x529942*/
    if ( strlen(Destination) ) /*0x52994b*/
    {
      sscanf(Destination, "%d,%d", &a4, &a3); /*0x529971*/
      v15 = a3; /*0x529984*/
      *a2 = a4; /*0x52998e*/
      a2[1] = (int)v15; /*0x529990*/
      return a2; /*0x529999*/
    }
  }
LABEL_18:
  v17 = a5; /*0x529a0a*/
  *a2 = *a5; /*0x529a17*/
  a2[1] = v17[1]; /*0x529a1c*/
  return a2; /*0x529993*/
}



// ==== 0x00529A30  INIClass::GetCoordPair  this=INIClass  sig=csp ====
_DWORD *__thiscall INIClass::GetCoordPair(INIClass *this, _DWORD *a2, char *Source, char **a4, _DWORD *a5)
{
  char **v6; // edi
  char *v7; // ebp
  int v8; // ebx
  unsigned int v9; // kr04_4
  Checksummer *v10; // eax
  int *v11; // ebx
  int v12; // eax
  char *v13; // eax
  _DWORD *v15; // edx
  unsigned int v16; // kr0C_4
  Checksummer *v17; // eax
  int v18; // edi
  int v19; // edx
  unsigned __int8 *v20; // [esp-Ch] [ebp-78h]
  int v21; // [esp+0h] [ebp-6Ch] BYREF
  int v22; // [esp+Ch] [ebp-60h] BYREF
  int v23; // [esp+10h] [ebp-5Ch] BYREF
  KeyValuePair v24[3]; // [esp+14h] [ebp-58h] BYREF
  KeyValuePair v25[3]; // [esp+20h] [ebp-4Ch] BYREF
  char Destination[64]; // [esp+2Ch] [ebp-40h] BYREF

  v6 = (char **)String::GetOrEmpty_Alt((String *)a4); /*0x529a45*/
  a4 = v6; /*0x529a47*/
  v7 = String::GetOrEmpty_Alt((String *)Source); /*0x529a50*/
  Source = &g_INI_DefaultBuffer; /*0x529a58*/
  if ( &v21 == (int *)-44 || !v7 || !v6 ) /*0x529a70*/
    goto LABEL_18; /*0x529a70*/
  if ( v7 == (char *)this->headNode[0] ) /*0x529a7c*/
  {
    v8 = this->headNode[1]; /*0x529a82*/
  }
  else
  {
    v16 = strlen(v7) + 1; /*0x529b69*/
    v17 = (Checksummer *)KeyValuePair::Init(v24, 0); /*0x529b75*/
    v18 = Checksummer::Add_Buffer(v17, (unsigned __int8 *)v7, v16 - 1); /*0x529b88*/
    v22 = v18; /*0x529b8d*/
    if ( !(unsigned __int8)HashTable::BinarySearch((int *)&this->__pad_20[8], &v22) /*0x529bae*/
      || (v23 = v18, (v8 = *(_DWORD *)SortedArray::FindValue((SortedArray *)&this->__pad_20[8], &v23)) == 0) )
    {
      this->headNode[0] = 0; /*0x529bc1*/
      this->headNode[1] = 0; /*0x529bc4*/
      goto LABEL_11; /*0x529bc7*/
    }
    v6 = a4; /*0x529bb0*/
    this->headNode[1] = v8; /*0x529bb4*/
    this->headNode[0] = (int)v7; /*0x529bb7*/
  }
  if ( v8 ) /*0x529a87*/
  {
    v9 = strlen((const char *)v6) + 1; /*0x529a8e*/
    v20 = (unsigned __int8 *)a4; /*0x529a98*/
    v10 = (Checksummer *)KeyValuePair::Init(v25, 0); /*0x529a9f*/
    v11 = (int *)(v8 + 44); /*0x529aaf*/
    a4 = (char **)Checksummer::Add_Buffer(v10, v20, v9 - 1); /*0x529ab5*/
    if ( (unsigned __int8)SortedArray::Find(v11, (int *)&a4) ) /*0x529abc*/
    {
      v12 = *(_DWORD *)SortedArray::BinarySearch2((int)v11, (int *)&a4); /*0x529ad1*/
      if ( v12 ) /*0x529ad5*/
      {
        v13 = *(char **)(v12 + 16); /*0x529ad7*/
        if ( v13 ) /*0x529adc*/
          Source = v13; /*0x529ade*/
      }
    }
  }
LABEL_11:
  if ( Source ) /*0x529ae9*/
  {
    strncpy(Destination, Source, 0x40u); /*0x529af7*/
    Destination[63] = 0; /*0x529b03*/
    String::Trim(Destination); /*0x529b08*/
    if ( strlen(Destination) ) /*0x529b11*/
    {
      sscanf(Destination, "%d,%d", &Source, &a5); /*0x529b37*/
      v15 = a5; /*0x529b4a*/
      *a2 = Source; /*0x529b54*/
      a2[1] = v15; /*0x529b56*/
      return a2; /*0x529b5f*/
    }
  }
LABEL_18:
  v19 = a5[1]; /*0x529bcc*/
  *a2 = *a5; /*0x529bdc*/
  a2[1] = v19; /*0x529bde*/
  return a2; /*0x529b59*/
}



// ==== 0x00529BF0  INIClass::ReadCoord3  this=INIClass  sig=csp ====
char __thiscall INIClass::ReadCoord3(INIClass *this, unsigned __int8 *Block, char *a3, _DWORD *a4)
{
  char Buffer[56]; // [esp+4h] [ebp-38h] BYREF

  sprintf(Buffer, "%d,%d,%d", *a4, a4[1], a4[2]); /*0x529c0f*/
  return INIClass::SetString(this->__pad_0, Block, a3, Buffer); /*0x529c2d*/
}



// ==== 0x00529C40  INIClass::ReadCoord2  this=INIClass  sig=csp ====
char __thiscall INIClass::ReadCoord2(INIClass *this, char **a2, char **a3, _DWORD *a4)
{
  char *v5; // edi
  unsigned __int8 *v6; // ebx
  char Buffer[56]; // [esp+Ch] [ebp-38h] BYREF

  v5 = String::GetOrEmpty_Alt((String *)a3); /*0x529c55*/
  v6 = (unsigned __int8 *)String::GetOrEmpty_Alt((String *)a2); /*0x529c5c*/
  sprintf(Buffer, "%d,%d,%d", *a4, a4[1], a4[2]); /*0x529c77*/
  return INIClass::SetString(this->__pad_0, v6, v5, Buffer); /*0x529c8d*/
}



// ==== 0x00529CA0  INIClass::ReadPoint3D_Overwrite  this=INIClass  sig=csp ====
int *__thiscall INIClass::ReadPoint3D_Overwrite(INIClass *this, int *a2, unsigned __int8 *a3, int a4, _DWORD *a5)
{
  unsigned __int8 *v6; // ebx
  const char *v7; // edx
  int v8; // esi
  unsigned int v9; // kr04_4
  Checksummer *v10; // eax
  int *v11; // esi
  int v12; // eax
  char *v13; // eax
  unsigned __int8 *v15; // edx
  _DWORD *v16; // esi
  unsigned __int8 *v17; // esi
  _DWORD *v18; // ecx
  unsigned __int8 *v19; // [esp-8h] [ebp-78h]
  char *Source; // [esp+10h] [ebp-60h]
  int v21; // [esp+14h] [ebp-5Ch] BYREF
  Checksummer v22; // [esp+18h] [ebp-58h] BYREF
  char Destination[64]; // [esp+30h] [ebp-40h] BYREF

  Source = &g_INI_DefaultBuffer; /*0x529caf*/
  if ( !Destination ) /*0x529cb7*/
    goto LABEL_18; /*0x529cb7*/
  v6 = a3; /*0x529cbd*/
  if ( !a3 ) /*0x529cc5*/
    goto LABEL_18; /*0x529cc5*/
  v7 = (const char *)a4; /*0x529ccb*/
  if ( !a4 ) /*0x529cd1*/
    goto LABEL_18; /*0x529cd1*/
  if ( a3 == (unsigned __int8 *)this->headNode[0] ) /*0x529cda*/
  {
    v8 = this->headNode[1]; /*0x529ce0*/
  }
  else
  {
    memset(&v22, 0, 12); /*0x529dd1*/
    v17 = (unsigned __int8 *)Checksummer::Add_Buffer(&v22, a3, strlen((const char *)a3)); /*0x529dfb*/
    a3 = v17; /*0x529e00*/
    if ( !(unsigned __int8)HashTable::BinarySearch((int *)&this->__pad_20[8], (int *)&a3) /*0x529e21*/
      || (v21 = (int)v17, (v8 = *(_DWORD *)SortedArray::FindValue((SortedArray *)&this->__pad_20[8], &v21)) == 0) )
    {
      this->headNode[0] = 0; /*0x529e34*/
      this->headNode[1] = 0; /*0x529e37*/
      goto LABEL_11; /*0x529e3a*/
    }
    v7 = (const char *)a4; /*0x529e23*/
    this->headNode[1] = v8; /*0x529e27*/
    this->headNode[0] = (int)v6; /*0x529e2a*/
  }
  if ( v8 ) /*0x529ce5*/
  {
    v9 = strlen(v7) + 1; /*0x529cee*/
    v19 = (unsigned __int8 *)v7; /*0x529cf4*/
    v10 = (Checksummer *)KeyValuePair::Init((KeyValuePair *)&v22.buffer, 0); /*0x529cfa*/
    a4 = Checksummer::Add_Buffer(v10, v19, v9 - 1); /*0x529d06*/
    v11 = (int *)(v8 + 44); /*0x529d0a*/
    if ( (unsigned __int8)SortedArray::Find(v11, &a4) ) /*0x529d14*/
    {
      v12 = *(_DWORD *)SortedArray::BinarySearch2((int)v11, &a4); /*0x529d29*/
      if ( v12 ) /*0x529d2d*/
      {
        v13 = *(char **)(v12 + 16); /*0x529d2f*/
        if ( v13 ) /*0x529d34*/
          Source = v13; /*0x529d36*/
      }
    }
  }
LABEL_11:
  if ( Source ) /*0x529d40*/
  {
    strncpy(Destination, Source, 0x40u); /*0x529d4e*/
    Destination[63] = 0; /*0x529d5a*/
    String::Trim(Destination); /*0x529d5f*/
    if ( strlen(Destination) ) /*0x529d68*/
    {
      sscanf(Destination, "%d,%d,%d", &a4, &a3, &a5); /*0x529d99*/
      v15 = a3; /*0x529dac*/
      v16 = a5; /*0x529db3*/
      *a2 = a4; /*0x529dbf*/
      a2[1] = (int)v15; /*0x529dc1*/
      a2[2] = (int)v16; /*0x529dc4*/
      return a2; /*0x529dce*/
    }
  }
LABEL_18:
  v18 = a5; /*0x529e3f*/
  *a2 = *a5; /*0x529e4f*/
  a2[1] = v18[1]; /*0x529e54*/
  a2[2] = v18[2]; /*0x529e5c*/
  return a2; /*0x529dc7*/
}



// ==== 0x00529E70  ObjectClass::method_529E70  this=ObjectClass  sig=csp ====
char **__thiscall sub_529E70(ObjectClass *this, char **a2, char *Source, char **a4, char **a5)
{
  char **v6; // edi
  char *v7; // ebp
  int *vtable2; // ebx
  unsigned int v9; // kr04_4
  Checksummer *v10; // eax
  int *v11; // ebx
  int v12; // eax
  char *v13; // eax
  char *v14; // ecx
  char *v15; // edx
  char *v16; // esi
  unsigned int v17; // kr0C_4
  Checksummer *v18; // eax
  int v19; // edi
  unsigned __int8 *v21; // [esp-Ch] [ebp-7Ch]
  int v22; // [esp+0h] [ebp-70h] BYREF
  int v23; // [esp+Ch] [ebp-64h] BYREF
  int v24; // [esp+10h] [ebp-60h] BYREF
  char *v25; // [esp+14h] [ebp-5Ch] BYREF
  KeyValuePair v26[3]; // [esp+18h] [ebp-58h] BYREF
  KeyValuePair v27[3]; // [esp+24h] [ebp-4Ch] BYREF
  char Destination[64]; // [esp+30h] [ebp-40h] BYREF

  v6 = (char **)String::GetOrEmpty_Alt((String *)a4); /*0x529e85*/
  a4 = v6; /*0x529e87*/
  v7 = String::GetOrEmpty_Alt((String *)Source); /*0x529e90*/
  Source = &g_INI_DefaultBuffer; /*0x529e98*/
  if ( &v22 == (int *)-48 || !v7 || !v6 ) /*0x529eb0*/
    goto LABEL_18; /*0x529eb0*/
  if ( v7 == this->? ) /*0x529ebc*/
  {
    vtable2 = (int *)this->?; /*0x529ec2*/
  }
  else
  {
    v17 = strlen(v7) + 1; /*0x529fab*/
    v18 = (Checksummer *)KeyValuePair::Init(v26, 0); /*0x529fb7*/
    v19 = Checksummer::Add_Buffer(v18, (unsigned __int8 *)v7, v17 - 1); /*0x529fca*/
    v23 = v19; /*0x529fcf*/
    if ( !(unsigned __int8)HashTable::BinarySearch(&this->owningHouseIndex, &v23) /*0x529ff0*/
      || (v24 = v19, (vtable2 = *(int **)SortedArray::FindValue((SortedArray *)&this->owningHouseIndex, &v24)) == 0) )
    {
      this->? = 0; /*0x52a006*/
      this->? = 0; /*0x52a009*/
      goto LABEL_11; /*0x52a00c*/
    }
    v6 = a4; /*0x529ff2*/
    this->? = vtable2; /*0x529ff9*/
    this->? = v7; /*0x529ffc*/
  }
  if ( vtable2 ) /*0x529ec7*/
  {
    v9 = strlen((const char *)v6) + 1; /*0x529ece*/
    v21 = (unsigned __int8 *)a4; /*0x529edb*/
    v10 = (Checksummer *)KeyValuePair::Init(v27, 0); /*0x529ee2*/
    v11 = vtable2 + 11; /*0x529ef5*/
    a4 = (char **)Checksummer::Add_Buffer(v10, v21, v9 - 1); /*0x529efb*/
    if ( (unsigned __int8)SortedArray::Find(v11, (int *)&a4) ) /*0x529f02*/
    {
      v12 = *(_DWORD *)SortedArray::BinarySearch2((int)v11, (int *)&a4); /*0x529f1a*/
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
  sscanf(Destination, "%d,%d,%d", &Source, &a5, &v25); /*0x529f88*/
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
char __thiscall INIClass::ReadBool2(INIClass *this, unsigned __int8 *Block, char *a3, float *a4)
{
  char Buffer[56]; // [esp+1Ch] [ebp-38h] BYREF

  sprintf(Buffer, "%f,%f,%f", *a4, a4[1], a4[2]); /*0x52a06e*/
  return INIClass::SetString(this->__pad_0, Block, a3, Buffer); /*0x52a08c*/
}



// ==== 0x0052A0A0  INIClass::ReadBool  this=INIClass  sig=csp ====
char __thiscall INIClass::ReadBool(INIClass *this, char **a2, char **a3, float *a4)
{
  char *v5; // edi
  unsigned __int8 *v6; // ebx
  char Buffer[56]; // [esp+24h] [ebp-38h] BYREF

  v5 = String::GetOrEmpty_Alt((String *)a3); /*0x52a0b5*/
  v6 = (unsigned __int8 *)String::GetOrEmpty_Alt((String *)a2); /*0x52a0bc*/
  sprintf(Buffer, "%f,%f,%f", *a4, a4[1], a4[2]); /*0x52a0e6*/
  return INIClass::SetString(this->__pad_0, v6, v5, Buffer); /*0x52a0fc*/
}



// ==== 0x0052A110  ObjectClass::method_52A110  this=ObjectClass  sig=csp ====
float *__thiscall sub_52A110(ObjectClass *this, float *a2, unsigned __int8 *a3, float a4, float *a5)
{
  unsigned __int8 *v6; // ebx
  float v7; // edx
  int *vtable2; // esi
  unsigned int v9; // kr04_4
  Checksummer *v10; // eax
  int *v11; // esi
  int v12; // eax
  char *v13; // eax
  double v15; // st7
  unsigned __int8 *v16; // esi
  float *v17; // ecx
  unsigned __int8 *v18; // [esp-8h] [ebp-78h]
  char *Source; // [esp+10h] [ebp-60h]
  int v20; // [esp+14h] [ebp-5Ch] BYREF
  Checksummer v21; // [esp+18h] [ebp-58h] BYREF
  char Destination[64]; // [esp+30h] [ebp-40h] BYREF

  Source = &g_INI_DefaultBuffer; /*0x52a11f*/
  if ( !Destination ) /*0x52a127*/
    goto LABEL_18; /*0x52a127*/
  v6 = a3; /*0x52a12d*/
  if ( *(float *)&a3 == 0.0 ) /*0x52a135*/
    goto LABEL_18; /*0x52a135*/
  v7 = a4; /*0x52a13b*/
  if ( a4 == 0.0 ) /*0x52a141*/
    goto LABEL_18; /*0x52a141*/
  if ( a3 == this->? ) /*0x52a14a*/
  {
    vtable2 = (int *)this->?; /*0x52a150*/
  }
  else
  {
    memset(&v21, 0, 12); /*0x52a256*/
    *(float *)&v16 = COERCE_FLOAT(Checksummer::Add_Buffer(&v21, a3, strlen((const char *)a3))); /*0x52a280*/
    a3 = v16; /*0x52a285*/
    if ( !(unsigned __int8)HashTable::BinarySearch(&this->owningHouseIndex, (int *)&a3) /*0x52a2a6*/
      || (v20 = (int)v16, (vtable2 = *(int **)SortedArray::FindValue((SortedArray *)&this->owningHouseIndex, &v20)) == 0) )
    {
      this->? = 0; /*0x52a2b9*/
      this->? = 0; /*0x52a2bc*/
      goto LABEL_11; /*0x52a2bf*/
    }
    v7 = a4; /*0x52a2a8*/
    this->? = vtable2; /*0x52a2ac*/
    this->? = v6; /*0x52a2af*/
  }
  if ( vtable2 ) /*0x52a155*/
  {
    v9 = strlen((const char *)LODWORD(v7)) + 1; /*0x52a15e*/
    v18 = (unsigned __int8 *)LODWORD(v7); /*0x52a164*/
    v10 = (Checksummer *)KeyValuePair::Init((KeyValuePair *)&v21.buffer, 0); /*0x52a16a*/
    a4 = COERCE_FLOAT(Checksummer::Add_Buffer(v10, v18, v9 - 1)); /*0x52a176*/
    v11 = vtable2 + 11; /*0x52a17a*/
    if ( (unsigned __int8)SortedArray::Find(v11, (int *)&a4) ) /*0x52a184*/
    {
      v12 = *(_DWORD *)SortedArray::BinarySearch2((int)v11, (int *)&a4); /*0x52a199*/
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
      sscanf(Destination, "%f,%f,%f", &a4, &a3, &a5); /*0x52a209*/
      *(float *)&v21.crcValue = a4; /*0x52a21f*/
      v21.bytePos = (int)a3; /*0x52a22d*/
      v15 = *(float *)&a5; /*0x52a231*/
      *a2 = a4; /*0x52a238*/
      *(float *)&v21.state = v15; /*0x52a23e*/
      a2[1] = *(float *)&v21.bytePos; /*0x52a242*/
      a2[2] = *(float *)&v21.state; /*0x52a24c*/
      return a2; /*0x52a253*/
    }
  }
LABEL_18:
  v17 = a5; /*0x52a2c4*/
  *a2 = *a5; /*0x52a2d4*/
  a2[1] = v17[1]; /*0x52a2d9*/
  a2[2] = v17[2]; /*0x52a2e1*/
  return a2; /*0x52a249*/
}



// ==== 0x0052A2F0  ObjectClass::method_52A2F0  this=ObjectClass  sig=csp ====
float *__thiscall sub_52A2F0(ObjectClass *this, float *a2, float Source, char **a4, float *a5)
{
  char **v6; // edi
  char *v7; // ebp
  int *vtable2; // ebx
  unsigned int v9; // kr04_4
  Checksummer *v10; // eax
  int *v11; // ebx
  int v12; // eax
  float v13; // eax
  float v14; // ecx
  float *v15; // edx
  float v16; // esi
  unsigned int v17; // kr0C_4
  Checksummer *v18; // eax
  int v19; // edi
  unsigned __int8 *v21; // [esp-Ch] [ebp-7Ch]
  int v22; // [esp+0h] [ebp-70h] BYREF
  int v23; // [esp+Ch] [ebp-64h] BYREF
  int v24; // [esp+10h] [ebp-60h] BYREF
  float v25; // [esp+14h] [ebp-5Ch] BYREF
  KeyValuePair v26; // [esp+18h] [ebp-58h] BYREF
  float *v27; // [esp+1Ch] [ebp-54h]
  float v28; // [esp+20h] [ebp-50h]
  KeyValuePair v29[3]; // [esp+24h] [ebp-4Ch] BYREF
  char Destination[64]; // [esp+30h] [ebp-40h] BYREF

  v6 = (char **)String::GetOrEmpty_Alt((String *)a4); /*0x52a305*/
  a4 = v6; /*0x52a307*/
  v7 = String::GetOrEmpty_Alt((String *)LODWORD(Source)); /*0x52a310*/
  Source = COERCE_FLOAT(&g_INI_DefaultBuffer); /*0x52a318*/
  if ( &v22 == (int *)-48 || !v7 || !v6 ) /*0x52a330*/
    goto LABEL_18; /*0x52a330*/
  if ( v7 == this->? ) /*0x52a33c*/
  {
    vtable2 = (int *)this->?; /*0x52a342*/
  }
  else
  {
    v17 = strlen(v7) + 1; /*0x52a443*/
    v18 = (Checksummer *)KeyValuePair::Init(&v26, 0); /*0x52a44f*/
    v19 = Checksummer::Add_Buffer(v18, (unsigned __int8 *)v7, v17 - 1); /*0x52a462*/
    v23 = v19; /*0x52a467*/
    if ( !(unsigned __int8)HashTable::BinarySearch(&this->owningHouseIndex, &v23) /*0x52a488*/
      || (v24 = v19, (vtable2 = *(int **)SortedArray::FindValue((SortedArray *)&this->owningHouseIndex, &v24)) == 0) )
    {
      this->? = 0; /*0x52a49e*/
      this->? = 0; /*0x52a4a1*/
      goto LABEL_11; /*0x52a4a4*/
    }
    v6 = a4; /*0x52a48a*/
    this->? = vtable2; /*0x52a491*/
    this->? = v7; /*0x52a494*/
  }
  if ( vtable2 ) /*0x52a347*/
  {
    v9 = strlen((const char *)v6) + 1; /*0x52a34e*/
    v21 = (unsigned __int8 *)a4; /*0x52a35b*/
    v10 = (Checksummer *)KeyValuePair::Init(v29, 0); /*0x52a362*/
    v11 = vtable2 + 11; /*0x52a375*/
    a4 = (char **)Checksummer::Add_Buffer(v10, v21, v9 - 1); /*0x52a37b*/
    if ( (unsigned __int8)SortedArray::Find(v11, (int *)&a4) ) /*0x52a382*/
    {
      v12 = *(_DWORD *)SortedArray::BinarySearch2((int)v11, (int *)&a4); /*0x52a39a*/
      if ( v12 ) /*0x52a39e*/
      {
        v13 = *(float *)(v12 + 16); /*0x52a3a0*/
        if ( v13 != 0.0 ) /*0x52a3a5*/
          Source = v13; /*0x52a3a7*/
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
  sscanf(Destination, "%f,%f,%f", &Source, &a5, &v25); /*0x52a408*/
  *(float *)&v26 = Source; /*0x52a414*/
  v14 = Source; /*0x52a41f*/
  v27 = a5; /*0x52a426*/
  v15 = a5; /*0x52a42e*/
  v28 = v25; /*0x52a432*/
  v16 = v25; /*0x52a436*/
LABEL_19:
  *a2 = v14; /*0x52a4b8*/
  *((_DWORD *)a2 + 1) = v15; /*0x52a4c0*/
  a2[2] = v16; /*0x52a4c3*/
  return a2; /*0x52a4c6*/
}



// ==== 0x0052A4D0  ObjectClass::method_52A4D0  this=ObjectClass  sig=csp ====
int __thiscall sub_52A4D0(ObjectClass *this, unsigned __int8 *a2)
{
  int v3; // eax
  ObjectClass *nextObject; // ecx
  int v5; // edi
  _DWORD *v6; // eax
  ObjectClass *v7; // edx
  int fallRate; // ecx
  int v9; // eax
  ObjectClass *v10; // eax
  _DWORD *v11; // ecx
  ObjectClass *v12; // ecx
  int v13; // ebp
  unsigned __int8 *v14; // edi
  int v15; // edx
  _BYTE v17[12]; // [esp+Ch] [ebp-Ch] BYREF
  unsigned __int8 *v18; // [esp+1Ch] [ebp+4h]

  if ( !a2 ) /*0x52a4e0*/
    return 0; /*0x52a4e0*/
  memset(v17, 0, sizeof(v17)); /*0x52a4ed*/
  v3 = Checksummer::Add_Buffer((Checksummer *)v17, a2, strlen((const char *)a2)); /*0x52a504*/
  nextObject = this->nextObject; /*0x52a509*/
  v5 = v3; /*0x52a50c*/
  v18 = (unsigned __int8 *)v3; /*0x52a510*/
  if ( !nextObject ) /*0x52a514*/
    return 0; /*0x52a514*/
  v6 = (_DWORD *)this->ambientSoundController[0]; /*0x52a51a*/
  if ( v6 && *v6 == v5 ) /*0x52a523*/
    goto LABEL_9; /*0x52a523*/
  if ( !LOBYTE(this->attachedBomb) ) /*0x52a525*/
  {
    qsort((void *)this->fallRate, (size_t)nextObject, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc3Int); /*0x52a536*/
    this->ambientSoundController[0] = 0; /*0x52a53e*/
    LOBYTE(this->attachedBomb) = 1; /*0x52a541*/
  }
  v7 = this->nextObject; /*0x52a545*/
  fallRate = this->fallRate; /*0x52a54d*/
  *(_DWORD *)v17 = v5; /*0x52a550*/
  v9 = UI_Find(fallRate, (int)v7, (int *)v17); /*0x52a554*/
  if ( !v9 ) /*0x52a55b*/
    return 0; /*0x52a5f8*/
  this->ambientSoundController[0] = v9; /*0x52a561*/
LABEL_9:
  v10 = this->nextObject; /*0x52a564*/
  if ( !v10 ) /*0x52a56a*/
    return unk_B78830; /*0x52a56a*/
  v11 = (_DWORD *)this->ambientSoundController[0]; /*0x52a56c*/
  if ( v11 && *v11 == v5 ) /*0x52a575*/
    return *(_DWORD *)(this->ambientSoundController[0] + 4); /*0x52a5f3*/
  if ( !LOBYTE(this->attachedBomb) ) /*0x52a577*/
  {
    qsort((void *)this->fallRate, (size_t)v10, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc3Int); /*0x52a588*/
    this->ambientSoundController[0] = 0; /*0x52a590*/
    LOBYTE(this->attachedBomb) = 1; /*0x52a593*/
  }
  v12 = this->nextObject; /*0x52a597*/
  v13 = this->fallRate; /*0x52a59a*/
  if ( (int)v12 <= 0 ) /*0x52a59f*/
    return unk_B78830; /*0x52a59f*/
  while ( 1 ) /*0x52a5ac*/
  {
    v14 = *(unsigned __int8 **)(v13 + 8 * ((int)v12 / 2)); /*0x52a5ac*/
    v15 = v13 + 8 * ((int)v12 / 2); /*0x52a5b0*/
    if ( (int)v14 <= (int)v18 ) /*0x52a5b6*/
      break; /*0x52a5b6*/
    v12 = (ObjectClass *)((int)v12 / 2); /*0x52a5b8*/
LABEL_19:
    if ( (int)v12 <= 0 ) /*0x52a5ca*/
      return unk_B78830; /*0x52a5ca*/
  }
  if ( v14 != v18 ) /*0x52a5bc*/
  {
    v13 = v15 + 8; /*0x52a5be*/
    v12 = (ObjectClass *)((char *)v12 - 1 - (int)v12 / 2); /*0x52a5c6*/
    goto LABEL_19; /*0x52a5c6*/
  }
  if ( v15 ) /*0x52a5df*/
  {
    this->ambientSoundController[0] = v15; /*0x52a5e1*/
    return *(_DWORD *)(this->ambientSoundController[0] + 4); /*0x52a5e1*/
  }
  return unk_B78830; /*0x52a5d2*/
}



// ==== 0x0052A610  ObjectClass::method_52A610  this=ObjectClass  sig=csp ====
char __thiscall sub_52A610(ObjectClass *this, void *a2)
{
  signed int v3; // eax
  signed int v4; // eax
  _BYTE v6[512]; // [esp+8h] [ebp-200h] BYREF

  v3 = sub_631FC0((ObjectClass *)a2, v6); /*0x52a628*/
  INIClass::ReadBase64Data((char *)this, (unsigned __int8 *)aPublickey, (int)v6, v3); /*0x52a63a*/
  v4 = sub_631FE0((ObjectClass *)a2, v6); /*0x52a646*/
  INIClass::ReadBase64Data((char *)this, (unsigned __int8 *)aPrivatekey, (int)v6, v4); /*0x52a658*/
  return 1; /*0x52a65d*/
}



// ==== 0x0052A670  ObjectClass::WinMain_Init  this=ObjectClass  sig=csp ====
void *__thiscall WinMain_Init(ObjectClass *this, void *a2, char a3)
{
  ObjectClass v5[3]; // [esp+8h] [ebp-504h] BYREF
  _BYTE v6[512]; // [esp+20Ch] [ebp-300h] BYREF
  _DWORD v7[64]; // [esp+40Ch] [ebp-100h] BYREF

  InitArrayWithValue(v5, 0, 64); /*0x52a682*/
  InitArrayWithValue(&v5[1].customSound_controller[1], 0, 64); /*0x52a692*/
  v5[2].lineTrailer = 0; /*0x52a69e*/
  if ( a3 ) /*0x52a6ab*/
  {
    InitArrayWithValue(v7, 65537, 64); /*0x52a6bb*/
    EncodeVarInt((int)v7, v6, 64); /*0x52a6d0*/
  }
  else
  {
    INIClass::GetBase64Data((INIClass *)this, aPrivatekey, (int)v6, 0x200u); /*0x52a6f3*/
  }
  System_Init_632030(v5, v6); /*0x52a6dd*/
  INIClass::GetBase64Data((INIClass *)this, aPublickey, (int)v6, 0x200u); /*0x52a71d*/
  System_Init_632000(v5, v6); /*0x52a72e*/
  qmemcpy(a2, v5, 0x204u); /*0x52a745*/
  return a2; /*0x52a747*/
}



// ==== 0x0052A760  INIClass::ReadTimeString  this=INIClass  sig=csp ====
int __thiscall INIClass_ReadTimeString(int this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  unsigned __int8 *v5; // edx
  int v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // esi
  _DWORD *v10; // ecx
  size_t v11; // eax
  _DWORD *v12; // ecx
  size_t v13; // eax
  int *v14; // esi
  int v15; // edi
  _DWORD *v16; // eax
  size_t v17; // eax
  int *v18; // esi
  unsigned __int8 *v19; // edx
  int v21; // esi
  const char *v22; // eax
  int v23; // [esp+10h] [ebp-10h] BYREF
  unsigned int v24; // [esp+14h] [ebp-Ch] BYREF
  int v25; // [esp+18h] [ebp-8h]
  int v26; // [esp+1Ch] [ebp-4h]

  if ( !a2 ) /*0x52a771*/
    return a4; /*0x52a771*/
  v5 = a3; /*0x52a777*/
  if ( !a3 ) /*0x52a77d*/
    return a4; /*0x52a77d*/
  if ( a2 != *(unsigned __int8 **)(this + 4) ) /*0x52a786*/
  {
    v24 = 0; /*0x52a82f*/
    v25 = 0; /*0x52a838*/
    v26 = 0; /*0x52a842*/
    v15 = Checksummer::Add_Buffer(&v24, a2, strlen((const char *)a2)); /*0x52a84e*/
    v23 = v15; /*0x52a850*/
    if ( *(_DWORD *)(this + 44) ) /*0x52a854*/
    {
      v16 = *(_DWORD **)(this + 56); /*0x52a859*/
      if ( !v16 || *v16 != v15 ) /*0x52a862*/
      {
        v17 = SortedArray::BinarySearch((char **)(this + 40), &v23); /*0x52a86b*/
        if ( !v17 ) /*0x52a872*/
          goto LABEL_27; /*0x52a872*/
        *(_DWORD *)(this + 56) = v17; /*0x52a874*/
      }
      v23 = v15; /*0x52a87b*/
      if ( HashTable::BinarySearch(this + 40, &v23) ) /*0x52a882*/
        v18 = (int *)(*(_DWORD *)(this + 56) + 4); /*0x52a88e*/
      else
        v18 = (int *)&unk_B7882C; /*0x52a893*/
      v6 = *v18; /*0x52a898*/
      if ( v6 ) /*0x52a89c*/
      {
        v19 = a2; /*0x52a89e*/
        *(_DWORD *)(this + 8) = v6; /*0x52a8a2*/
        *(_DWORD *)(this + 4) = v19; /*0x52a8a5*/
        v5 = a3; /*0x52a8a8*/
        goto LABEL_5; /*0x52a8ac*/
      }
    }
LABEL_27:
    *(_DWORD *)(this + 4) = 0; /*0x52a8b1*/
    *(_DWORD *)(this + 8) = 0; /*0x52a8b4*/
    return a4; /*0x52a8b4*/
  }
  v6 = *(_DWORD *)(this + 8); /*0x52a78c*/
LABEL_5:
  if ( !v6 ) /*0x52a791*/
    return a4; /*0x52a791*/
  v24 = 0; /*0x52a79e*/
  v25 = 0; /*0x52a7a7*/
  v26 = 0; /*0x52a7b1*/
  v7 = Checksummer::Add_Buffer(&v24, v5, strlen((const char *)v5)); /*0x52a7b5*/
  v8 = *(_DWORD *)(v6 + 48); /*0x52a7ba*/
  v9 = v6 + 44; /*0x52a7bd*/
  a2 = (unsigned __int8 *)v7; /*0x52a7c2*/
  if ( !v8 ) /*0x52a7c6*/
    return a4; /*0x52a7c6*/
  v10 = *(_DWORD **)(v9 + 16); /*0x52a7cc*/
  if ( v10 && *v10 == v7 ) /*0x52a7d5*/
    goto LABEL_11; /*0x52a7d5*/
  v11 = HashTable::BinarySearchAlt((char **)v9, (int *)&a2); /*0x52a7de*/
  if ( !v11 ) /*0x52a7e5*/
    return a4; /*0x52a8c2*/
  *(_DWORD *)(v9 + 16) = v11; /*0x52a7eb*/
  v7 = (int)a2; /*0x52a7ee*/
LABEL_11:
  if ( !*(_DWORD *)(v9 + 4) ) /*0x52a7f2*/
    goto LABEL_29; /*0x52a7f2*/
  v12 = *(_DWORD **)(v9 + 16); /*0x52a7fb*/
  if ( v12 && *v12 == v7 ) /*0x52a804*/
    goto LABEL_16; /*0x52a804*/
  v13 = HashTable::BinarySearchAlt((char **)v9, (int *)&a2); /*0x52a80d*/
  if ( !v13 ) /*0x52a814*/
  {
LABEL_29:
    v14 = (int *)&unk_B78830; /*0x52a8c5*/
    goto LABEL_30; /*0x52a8c5*/
  }
  *(_DWORD *)(v9 + 16) = v13; /*0x52a81a*/
LABEL_16:
  v14 = (int *)(*(_DWORD *)(v9 + 16) + 4); /*0x52a81d*/
LABEL_30:
  v21 = *v14; /*0x52a8ca*/
  if ( !v21 ) /*0x52a8ce*/
    return a4; /*0x52a8ce*/
  v22 = *(const char **)(v21 + 16); /*0x52a8d0*/
  if ( !v22 ) /*0x52a8d5*/
    return a4; /*0x52a8d5*/
  a2 = 0; /*0x52a8ec*/
  a3 = 0; /*0x52a8f0*/
  a4 = 0; /*0x52a8f4*/
  sscanf(v22, "%02d:%02d:%02d", &a2, &a3, &a4); /*0x52a8f8*/
  return 60 * (a4 + 60 * (_DWORD)&a3[60 * (_DWORD)a2]); /*0x52a8bb*/
}



// ==== 0x0052A940  INIClass::SaveTimeField  this=INIClass  sig=csp ====
char __thiscall INIClass_SaveTimeField(char *this, unsigned __int8 *Block, char *a3, int a4)
{
  char Buffer[32]; // [esp+8h] [ebp-20h] BYREF

  sprintf(Buffer, "%02d:%02d:%02d", a4 / 60 / 60 / 60, a4 / 60 / 60 % 60, a4 / 60 % 60); /*0x52a9ab*/
  return INIClass::SetString(this, Block, a3, Buffer); /*0x52a9c9*/
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
void __thiscall sub_52AAF0(void *this)
{
  void *v2; // eax
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  void *v7; // [esp-8h] [ebp-10h]

  v2 = (void *)this->q00C; /*0x52aaf4*/
  *(_DWORD *)this = &INIClass::INIEntry::`vftable'; /*0x52aaf7*/
  free(v2); /*0x52aafe*/
  v7 = (void *)this->q004; /*0x52ab08*/
  this->q00C = 0; /*0x52ab09*/
  free(v7); /*0x52ab0c*/
  v3 = *((_DWORD *)this + 5); /*0x52ab11*/
  this->q004 = 0; /*0x52ab19*/
  if ( v3 ) /*0x52ab1c*/
  {
    do /*0x52ab40*/
    {
      free(**((void ***)this + 5)); /*0x52ab25*/
      v4 = *(_DWORD *)(*((_DWORD *)this + 5) + 4); /*0x52ab2f*/
      __3_YAXPAX_Z(*((void **)this + 5)); /*0x52ab33*/
      *((_DWORD *)this + 5) = v4; /*0x52ab3d*/
    }
    while ( v4 ); /*0x52ab40*/
  }
  free(*((void **)this + 6)); /*0x52ab47*/
  this->q018 = 0; /*0x52ab51*/
  *(_DWORD *)this = &GenericNode::`vftable'; /*0x52ab54*/
  if ( this ) /*0x52ab5a*/
  {
    v5 = this->q004; /*0x52ab5c*/
    if ( v5 ) /*0x52ab61*/
    {
      v6 = this->q008; /*0x52ab63*/
      if ( v6 ) /*0x52ab68*/
      {
        *(_DWORD *)(v6 + 4) = v5; /*0x52ab6a*/
        *(_DWORD *)(this->q004 + 8) = this->q008; /*0x52ab73*/
        this->q008 = 0; /*0x52ab76*/
        this->q004 = 0; /*0x52ab79*/
      }
    }
  }
}



// ==== 0x0052AB80  WarheadTypeClass::parseVerses  this=INISection@INIClass  sig=csp ====
char *__thiscall sub_52AB80(char *this)
{
  void *v2; // eax
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

  v2 = (void *)this->q00C; /*0x52ab84*/
  *(_DWORD *)this = &INIClass::INISection::`vftable'; /*0x52ab87*/
  free(v2); /*0x52ab8e*/
  this->q00C = 0; /*0x52ab98*/
  while ( 1 ) /*0x52ab9b*/
  {
    v3 = this->q018; /*0x52ab9b*/
    if ( !v3 || !*(_DWORD *)(v3 + 4) || !*(_DWORD *)(v3 + 8) ) /*0x52aba7*/
      break; /*0x52aba7*/
    (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x52abb4*/
  }
  __3_YAXPAX_Z(*((void **)this + 11)); /*0x52abbc*/
  this->q02C = 0; /*0x52abc1*/
  this->q00C = 0; /*0x52abc4*/
  *((_DWORD *)this + 13) = 0; /*0x52abc7*/
  *(this + 56) = 0; /*0x52abca*/
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
  __3_YAXPAX_Z(*((void **)this + 11)); /*0x52ac03*/
  this->q02C = 0; /*0x52ac08*/
  this->q00C = 0; /*0x52ac0b*/
  *((_DWORD *)this + 13) = 0; /*0x52ac0e*/
  *(this + 56) = 0; /*0x52ac11*/
  *((_DWORD *)this + 15) = 0; /*0x52ac14*/
  this->q004 = &GenericList::`vftable'; /*0x52ac1a*/
  while ( 1 ) /*0x52ac21*/
  {
    v5 = this->q018; /*0x52ac21*/
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
  this->q008 = &GenericNode::`vftable'; /*0x52ac5c*/
  if ( this != (char *)-32 ) /*0x52ac62*/
  {
    v8 = this->q024; /*0x52ac64*/
    if ( v8 ) /*0x52ac69*/
    {
      v9 = *((_DWORD *)this + 10); /*0x52ac6b*/
      if ( v9 ) /*0x52ac70*/
      {
        *(_DWORD *)(v9 + 4) = v8; /*0x52ac72*/
        *(_DWORD *)(this->q024 + 8) = *((_DWORD *)this + 10); /*0x52ac7b*/
        *((_DWORD *)this + 10) = 0; /*0x52ac7e*/
        this->q024 = 0; /*0x52ac81*/
      }
    }
  }
  result = this + 20; /*0x52ac84*/
  *((_DWORD *)this + 5) = &GenericNode::`vftable'; /*0x52ac89*/
  if ( this != (char *)-20 ) /*0x52ac8f*/
  {
    v11 = this->q018; /*0x52ac91*/
    if ( v11 ) /*0x52ac96*/
    {
      v12 = *((_DWORD *)this + 7); /*0x52ac98*/
      if ( v12 ) /*0x52ac9d*/
      {
        *(_DWORD *)(v12 + 4) = v11; /*0x52ac9f*/
        *(_DWORD *)(this->q018 + 8) = *((_DWORD *)this + 7); /*0x52aca8*/
        *((_DWORD *)this + 7) = 0; /*0x52acab*/
        this->q018 = 0; /*0x52acae*/
      }
    }
  }
  *(_DWORD *)this = &GenericNode::`vftable'; /*0x52acb3*/
  if ( this ) /*0x52acb9*/
  {
    v13 = this->q004; /*0x52acbb*/
    if ( v13 ) /*0x52acc0*/
    {
      result = (char *)this->q008; /*0x52acc2*/
      if ( result ) /*0x52acc7*/
      {
        *((_DWORD *)result + 1) = v13; /*0x52acc9*/
        result = (char *)this->q004; /*0x52accc*/
        *((_DWORD *)result + 2) = this->q008; /*0x52acd2*/
        this->q008 = 0; /*0x52acd5*/
        this->q004 = 0; /*0x52acd8*/
      }
    }
  }
  return result; /*0x52acdb*/
}



// ==== 0x0052ACE0  GenericList::Constructor  this=GenericList  sig=csp ====
_DWORD *__thiscall GenericList::Constructor(GenericList *this)
{
  _DWORD *result; // eax
  GenericList *v2; // edx
  int v3; // ebx
  int v4; // edi
  int v5; // edi
  int v6; // edi

  result = &this->vtable; /*0x52ace0*/
  v2 = this + 4; /*0x52ace9*/
  *((_DWORD *)this + 2) = 0; /*0x52acef*/
  *((_DWORD *)this + 3) = 0; /*0x52acf2*/
  *((_DWORD *)this + 1) = &GenericNode::`vftable'; /*0x52acf5*/
  *((_DWORD *)this + 5) = 0; /*0x52acfb*/
  *((_DWORD *)this + 6) = 0; /*0x52acfe*/
  *((_DWORD *)this + 4) = &GenericNode::`vftable'; /*0x52ad01*/
  this->vtable = &GenericList::`vftable'; /*0x52ad07*/
  if ( this != (GenericList *)-16 ) /*0x52ad0d*/
  {
    v3 = *((_DWORD *)this + 5); /*0x52ad0f*/
    if ( v3 ) /*0x52ad14*/
    {
      v4 = *((_DWORD *)this + 6); /*0x52ad16*/
      if ( v4 ) /*0x52ad1b*/
      {
        *(_DWORD *)(v4 + 4) = v3; /*0x52ad1d*/
        *(GenericList *)(*((_DWORD *)this + 5) + 8) = *(this + 6); /*0x52ad26*/
        *((_DWORD *)this + 6) = 0; /*0x52ad29*/
        *((_DWORD *)this + 5) = 0; /*0x52ad2c*/
      }
    }
  }
  v5 = *((_DWORD *)this + 2); /*0x52ad2f*/
  *((_DWORD *)this + 6) = this + 1; /*0x52ad32*/
  *((_DWORD *)this + 5) = v5; /*0x52ad35*/
  v6 = *((_DWORD *)this + 2); /*0x52ad38*/
  if ( v6 ) /*0x52ad3d*/
    *(_DWORD *)(v6 + 8) = v2; /*0x52ad3f*/
  *((_DWORD *)this + 2) = v2; /*0x52ad42*/
  return result; /*0x52ad45*/
}



// ==== 0x0052AD50  WarheadTypeClass::parseModifiers  this=INIEntry@INIClass  sig=csp ====
void *__thiscall WarheadTypeClass::parseModifiers(WarheadTypeClass *this, char a2)
{
  void *WarheadTypeClass_field_0xC; // eax
  int v4; // eax
  int v5; // edi
  void *WarheadTypeClass_field_0x4; // ecx
  _DWORD *WarheadTypeClass_field_0x8; // eax
  void *WarheadTypeClass_field_0x10; // [esp-8h] [ebp-10h]

  WarheadTypeClass_field_0xC = this->WarheadTypeClass_field_0xC; /*0x52ad54*/
  this->Deform = &INIClass::INIEntry::`vftable'; /*0x52ad57*/
  free(WarheadTypeClass_field_0xC); /*0x52ad5e*/
  WarheadTypeClass_field_0x10 = this->WarheadTypeClass_field_0x10; /*0x52ad68*/
  this->WarheadTypeClass_field_0xC = 0; /*0x52ad69*/
  free(WarheadTypeClass_field_0x10); /*0x52ad6c*/
  v4 = this->AnimList[0]; /*0x52ad71*/
  this->WarheadTypeClass_field_0x10 = 0; /*0x52ad79*/
  if ( v4 ) /*0x52ad7c*/
  {
    do /*0x52ada0*/
    {
      free(*(void **)this->AnimList[0]); /*0x52ad85*/
      v5 = *(_DWORD *)(this->AnimList[0] + 4); /*0x52ad8f*/
      __3_YAXPAX_Z((void *)this->AnimList[0]); /*0x52ad93*/
      this->AnimList[0] = v5; /*0x52ad9d*/
    }
    while ( v5 ); /*0x52ada0*/
  }
  free((void *)this->InfDeath[0]); /*0x52ada7*/
  this->InfDeath[0] = 0; /*0x52adb1*/
  this->Deform = &GenericNode::`vftable'; /*0x52adb4*/
  if ( this ) /*0x52adba*/
  {
    WarheadTypeClass_field_0x4 = this->WarheadTypeClass_field_0x4; /*0x52adbc*/
    if ( WarheadTypeClass_field_0x4 ) /*0x52adc1*/
    {
      WarheadTypeClass_field_0x8 = this->WarheadTypeClass_field_0x8; /*0x52adc3*/
      if ( WarheadTypeClass_field_0x8 ) /*0x52adc8*/
      {
        WarheadTypeClass_field_0x8[1] = WarheadTypeClass_field_0x4; /*0x52adca*/
        *((_DWORD *)this->WarheadTypeClass_field_0x4 + 2) = this->WarheadTypeClass_field_0x8; /*0x52add3*/
        this->WarheadTypeClass_field_0x8 = 0; /*0x52add6*/
        this->WarheadTypeClass_field_0x4 = 0; /*0x52add9*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x52ade1*/
    __3_YAXPAX_Z(this); /*0x52ade4*/
  return this; /*0x52adee*/
}



// ==== 0x0052AE00  WarheadTypeClass::parseAnimations  this=WarheadTypeClass  sig=csp ====
WarheadTypeClass *WarheadTypeClass::parseAnimations(WarheadTypeClass *this, char a2)
{
  char *v2; // ecx
  WarheadTypeClass *v3; // esi

  v3 = (WarheadTypeClass *)v2; /*0x52ae01*/
  WarheadTypeClass::parseVerses(v2); /*0x52ae03*/
  if ( ((unsigned __int8)this & 1) != 0 ) /*0x52ae0d*/
    __3_YAXPAX_Z(v3); /*0x52ae10*/
  return v3; /*0x52ae1a*/
}



// ==== 0x0052AE20  GenericNode::Constructor_GenericNode  this=GenericNode  sig=csp ====
_DWORD *__thiscall Delegate::Constructor_GenericNode(MixFileClass *this, char a2)
{
  int Previous; // ecx
  int v4; // eax

  *(_DWORD *)this->__pad_0 = &GenericNode::`vftable'; /*0x52ae27*/
  if ( this ) /*0x52ae2d*/
  {
    Previous = this->Previous; /*0x52ae2f*/
    if ( Previous ) /*0x52ae34*/
    {
      v4 = *(_DWORD *)this->Blowfish; /*0x52ae36*/
      if ( v4 ) /*0x52ae3b*/
      {
        *(_DWORD *)(v4 + 4) = Previous; /*0x52ae3d*/
        *(_DWORD *)(this->Previous + 8) = *(_DWORD *)this->Blowfish; /*0x52ae46*/
        *(_DWORD *)this->Blowfish = 0; /*0x52ae49*/
        this->Previous = 0; /*0x52ae4c*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x52ae54*/
    __3_YAXPAX_Z(this); /*0x52ae57*/
  return this->__pad_0; /*0x52ae61*/
}



// ==== 0x0052AE70  CacheStraw::ClearVectorAndStraw  this=CacheStraw  sig=csp ====
int *__thiscall Delegate::ClearVectorAndStraw(CacheStraw *this, char a2)
{
  Vector::Clear((int)&this->__pad_0[12]); /*0x52ae76*/
  Straw::Dtor((Straw *)this); /*0x52ae7d*/
  if ( (a2 & 1) != 0 ) /*0x52ae87*/
    __3_YAXPAX_Z(this); /*0x52ae8a*/
  return (int *)this->__pad_0; /*0x52ae94*/
}



// ==== 0x0052AEA0  Base64Straw::DestroyStraw  this=Base64Straw  sig=csp ====
int *__thiscall Delegate::DestroyStraw(Base64Straw *this, char a2)
{
  Straw::Dtor((Straw *)this); /*0x52aea3*/
  if ( (a2 & 1) != 0 ) /*0x52aead*/
    __3_YAXPAX_Z(this); /*0x52aeb0*/
  return (int *)this->__pad_0; /*0x52aeba*/
}



// ==== 0x0052AEC0  KeyValuePair::Init  this=KeyValuePair  sig=csp ====
_DWORD *__thiscall KeyValuePair::Init(KeyValuePair *this, int a2)
{
  *this = (KeyValuePair)a2; /*0x52aec6*/
  *((_DWORD *)this + 1) = 0; /*0x52aeca*/
  *((_DWORD *)this + 2) = 0; /*0x52aecd*/
  return this; /*0x52aed0*/
}



// ==== 0x0052AEE0  Base64Pipe::DestroyPipe  this=Base64Pipe  sig=csp ====
int *__thiscall Delegate::DestroyPipe(Base64Pipe *this, char a2)
{
  Pipe::Dtor((Pipe *)this); /*0x52aee3*/
  if ( (a2 & 1) != 0 ) /*0x52aeed*/
    __3_YAXPAX_Z(this); /*0x52aef0*/
  return (int *)this->__pad_0; /*0x52aefa*/
}



// ==== 0x0052AF00  INIClass::findSection  this=INIEntry@INIClass  sig=csp ====
_DWORD *__thiscall INIClass::findSection(INIClass *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  this->headNode[0] = 0; /*0x52af08*/
  this->headNode[1] = 0; /*0x52af0b*/
  this->sectionHead[0] = a3; /*0x52af12*/
  this->headNode[2] = a2; /*0x52af19*/
  this->sectionHead[2] = a5; /*0x52af20*/
  this->sectionHead[1] = a4; /*0x52af27*/
  *(_DWORD *)this->__pad_20 = a8; /*0x52af2e*/
  this->sectionCount = a7; /*0x52af31*/
  *(_DWORD *)&this->__pad_20[4] = a6; /*0x52af38*/
  *(_DWORD *)this->__pad_0 = &INIClass::INIEntry::`vftable'; /*0x52af3b*/
  return this->__pad_0; /*0x52af41*/
}



// ==== 0x0052AF50  INIClass::sectionExists  this=GenericList  sig=csp ====
_DWORD *__thiscall INIClass::sectionExists(INIClass *this)
{
  _DWORD *result; // eax
  int *sectionHead; // edx
  int v3; // ebx
  int v4; // edi
  int v5; // edi
  int v6; // edi

  result = this->__pad_0; /*0x52af50*/
  sectionHead = this->sectionHead; /*0x52af59*/
  this->headNode[1] = 0; /*0x52af5f*/
  this->headNode[2] = 0; /*0x52af62*/
  this->headNode[0] = (int)&GenericNode::`vftable'; /*0x52af65*/
  this->sectionHead[1] = 0; /*0x52af6b*/
  this->sectionHead[2] = 0; /*0x52af6e*/
  this->sectionHead[0] = (int)&GenericNode::`vftable'; /*0x52af71*/
  *(_DWORD *)this->__pad_0 = &GenericList::`vftable'; /*0x52af77*/
  if ( this != (INIClass *)-16 ) /*0x52af7d*/
  {
    v3 = this->sectionHead[1]; /*0x52af7f*/
    if ( v3 ) /*0x52af84*/
    {
      v4 = this->sectionHead[2]; /*0x52af86*/
      if ( v4 ) /*0x52af8b*/
      {
        *(_DWORD *)(v4 + 4) = v3; /*0x52af8d*/
        *(_DWORD *)(this->sectionHead[1] + 8) = this->sectionHead[2]; /*0x52af96*/
        this->sectionHead[2] = 0; /*0x52af99*/
        this->sectionHead[1] = 0; /*0x52af9c*/
      }
    }
  }
  v5 = this->headNode[1]; /*0x52af9f*/
  this->sectionHead[2] = (int)this->headNode; /*0x52afa2*/
  this->sectionHead[1] = v5; /*0x52afa5*/
  v6 = this->headNode[1]; /*0x52afa8*/
  if ( v6 ) /*0x52afad*/
    *(_DWORD *)(v6 + 8) = sectionHead; /*0x52afaf*/
  this->headNode[1] = (int)sectionHead; /*0x52afb2*/
  *(_DWORD *)this->__pad_0 = &List<INIClass::INIEntry *>::`vftable'; /*0x52afb7*/
  return result; /*0x52afb5*/
}



// ==== 0x0052AFC0  WarheadTypeClass::ReadParticleSystems  this=GenericList  sig=csp ====
_DWORD *__thiscall WarheadTypeClass::ReadParticleSystems(WarheadTypeClass *this, char a2)
{
  _DWORD *WarheadTypeClass_field_0x8; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // edx
  int v7; // ecx
  void *v8; // edx
  _DWORD *WarheadTypeClass_field_0xC; // ecx

  this->Deform = &GenericList::`vftable'; /*0x52afc6*/
  while ( 1 ) /*0x52afcc*/
  {
    WarheadTypeClass_field_0x8 = this->WarheadTypeClass_field_0x8; /*0x52afcc*/
    if ( !WarheadTypeClass_field_0x8 ) /*0x52afd1*/
      break; /*0x52afd1*/
    if ( !WarheadTypeClass_field_0x8[1] ) /*0x52afd3*/
      break; /*0x52afd3*/
    v4 = WarheadTypeClass_field_0x8[2]; /*0x52afd8*/
    if ( !v4 ) /*0x52afdd*/
      break; /*0x52afdd*/
    v5 = WarheadTypeClass_field_0x8[1]; /*0x52afe3*/
    if ( v5 ) /*0x52afe8*/
    {
      *(_DWORD *)(v4 + 4) = v5; /*0x52afee*/
      *(_DWORD *)(WarheadTypeClass_field_0x8[1] + 8) = WarheadTypeClass_field_0x8[2]; /*0x52aff7*/
      WarheadTypeClass_field_0x8[2] = 0; /*0x52affa*/
      WarheadTypeClass_field_0x8[1] = 0; /*0x52affd*/
    }
  }
  this->WarheadTypeClass_field_0x10 = &GenericNode::`vftable'; /*0x52b007*/
  if ( this != (WarheadTypeClass *)-16 ) /*0x52b00d*/
  {
    v6 = this->AnimList[0]; /*0x52b00f*/
    if ( v6 ) /*0x52b014*/
    {
      v7 = this->InfDeath[0]; /*0x52b016*/
      if ( v7 ) /*0x52b01b*/
      {
        *(_DWORD *)(v7 + 4) = v6; /*0x52b01d*/
        *(_DWORD *)(this->AnimList[0] + 8) = this->InfDeath[0]; /*0x52b026*/
        this->InfDeath[0] = 0; /*0x52b029*/
        this->AnimList[0] = 0; /*0x52b02c*/
      }
    }
  }
  this->WarheadTypeClass_field_0x4 = &GenericNode::`vftable'; /*0x52b034*/
  if ( this != (WarheadTypeClass *)-4 ) /*0x52b03a*/
  {
    v8 = this->WarheadTypeClass_field_0x8; /*0x52b03c*/
    if ( v8 ) /*0x52b041*/
    {
      WarheadTypeClass_field_0xC = this->WarheadTypeClass_field_0xC; /*0x52b043*/
      if ( WarheadTypeClass_field_0xC ) /*0x52b048*/
      {
        WarheadTypeClass_field_0xC[1] = v8; /*0x52b04a*/
        *((_DWORD *)this->WarheadTypeClass_field_0x8 + 2) = this->WarheadTypeClass_field_0xC; /*0x52b053*/
        this->WarheadTypeClass_field_0xC = 0; /*0x52b056*/
        this->WarheadTypeClass_field_0x8 = 0; /*0x52b059*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x52b061*/
    __3_YAXPAX_Z(this); /*0x52b064*/
  return &this->Deform; /*0x52b06e*/
}



// ==== 0x0052B080  INIClass::getValue  this=INIClass  sig=csp ====
_DWORD *__thiscall INIClass::getValue(INIClass *this)
{
  *(_DWORD *)this->__pad_0 = 0; /*0x52b084*/
  this->headNode[0] = 0; /*0x52b086*/
  this->headNode[1] = 0; /*0x52b089*/
  LOBYTE(this->headNode[2]) = 0; /*0x52b08c*/
  this->sectionHead[0] = 0; /*0x52b08f*/
  return this->__pad_0; /*0x52b092*/
}



// ==== 0x0052B0A0  INIClass::setValue  this=INIClass  sig=csp ====
char __thiscall sub_52B0A0(int this, _DWORD *a2, _DWORD *a3)
{
  int v4; // eax
  int v5; // ebx
  char *v6; // edi
  int i; // ecx
  int v8; // eax
  _DWORD *v9; // edx
  int v10; // eax
  int v11; // eax

  v4 = *(_DWORD *)(this + 8); /*0x52b0aa*/
  if ( *(_DWORD *)(this + 4) + 1 <= v4 ) /*0x52b0b0*/
  {
LABEL_9:
    *(_DWORD *)(*(_DWORD *)this + 8 * *(_DWORD *)(this + 4)) = *a2; /*0x52b12b*/
    *(_DWORD *)(*(_DWORD *)this + 8 * *(_DWORD *)(this + 4) + 4) = *a3; /*0x52b145*/
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
  v6 = (char *)__2_YAPAXI_Z(8 * (v4 + v5)); /*0x52b0d7*/
  if ( v6 ) /*0x52b0de*/
  {
    for ( i = 0; i < *(_DWORD *)(this + 4); *(_DWORD *)&v6[v8 + 4] = v9[1] ) /*0x52b0ec*/
    {
      v8 = 8 * i; /*0x52b0f0*/
      v9 = (_DWORD *)(*(_DWORD *)this + 8 * i++); /*0x52b0f9*/
      *(_DWORD *)&v6[v8] = *v9; /*0x52b0fe*/
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



// ==== 0x0052B170  SortedArray::Find  this=HashTable  sig=csp ====
int __thiscall SortedArray::Find(int *this, int *a2)
{
  int result; // eax
  size_t v4; // ecx
  int v5; // ecx
  int v6; // ebp
  int v7; // edi
  int v8; // esi
  int v9; // edx

  v4 = this->q004; /*0x52b175*/
  if ( !v4 ) /*0x52b17b*/
    goto LABEL_13; /*0x52b17b*/
  result = this->q004; /*0x52b17d*/
  if ( result ) /*0x52b186*/
  {
    result = *(_DWORD *)result; /*0x52b188*/
    if ( result == *a2 ) /*0x52b18e*/
    {
      LOBYTE(result) = 1; /*0x52b193*/
      return result; /*0x52b196*/
    }
  }
  if ( !this->q00C ) /*0x52b199*/
  {
    result = qsort((void *)*this, v4, 8u, CompareFunc3Int); /*0x52b1ab*/
    this->q004 = 0; /*0x52b1b3*/
    this->q00C = 1; /*0x52b1ba*/
  }
  v5 = this->q004; /*0x52b1be*/
  v6 = *a2; /*0x52b1c1*/
  v7 = *this; /*0x52b1c3*/
  if ( v5 <= 0 ) /*0x52b1c7*/
    goto LABEL_13; /*0x52b1c7*/
  while ( 1 ) /*0x52b1ce*/
  {
    result = v5 / 2; /*0x52b1ce*/
    v8 = *(_DWORD *)(v7 + 8 * (v5 / 2)); /*0x52b1d0*/
    v9 = v7 + 8 * (v5 / 2); /*0x52b1d3*/
    if ( v8 <= v6 ) /*0x52b1d8*/
      break; /*0x52b1d8*/
    v5 /= 2; /*0x52b1da*/
LABEL_12:
    if ( v5 <= 0 ) /*0x52b1ec*/
      goto LABEL_13; /*0x52b1ec*/
  }
  if ( v8 != v6 ) /*0x52b1de*/
  {
    v7 = v9 + 8; /*0x52b1e0*/
    v5 += -1 - result; /*0x52b1e8*/
    goto LABEL_12; /*0x52b1e8*/
  }
  if ( !v9 ) /*0x52b1f9*/
  {
LABEL_13:
    LOBYTE(result) = 0; /*0x52b1ee*/
    return result; /*0x52b1f4*/
  }
  this->q004 = v9; /*0x52b1fd*/
  LOBYTE(result) = 1; /*0x52b201*/
  return result; /*0x52b190*/
}



// ==== 0x0052B210  SortedArray::BinarySearch2  this=ObjectClass  sig=csp ====
void *__thiscall SortedArray_BinarySearch2(int this, int *a2)
{
  size_t v3; // ecx
  _DWORD *v4; // eax
  int v5; // ecx
  int v6; // ebp
  _DWORD *v7; // edi
  int v8; // esi
  char *v9; // edx

  v3 = *(_DWORD *)(this + 4); /*0x52b215*/
  if ( !v3 ) /*0x52b21b*/
    return &unk_B78830; /*0x52b21b*/
  v4 = *(_DWORD **)(this + 16); /*0x52b21d*/
  if ( v4 && *v4 == *a2 ) /*0x52b22e*/
    return (void *)(*(_DWORD *)(this + 16) + 4); /*0x52b29e*/
  if ( !*(_BYTE *)(this + 12) ) /*0x52b230*/
  {
    qsort(*(void **)this, v3, 8u, CompareFunc3Int); /*0x52b242*/
    *(_DWORD *)(this + 16) = 0; /*0x52b24a*/
    *(_BYTE *)(this + 12) = 1; /*0x52b251*/
  }
  v5 = *(_DWORD *)(this + 4); /*0x52b255*/
  v6 = *a2; /*0x52b258*/
  v7 = *(_DWORD **)this; /*0x52b25a*/
  if ( v5 <= 0 ) /*0x52b25e*/
    return &unk_B78830; /*0x52b25e*/
  while ( 1 ) /*0x52b267*/
  {
    v8 = v7[2 * (v5 / 2)]; /*0x52b267*/
    v9 = (char *)&v7[2 * (v5 / 2)]; /*0x52b26a*/
    if ( v8 <= v6 ) /*0x52b26f*/
      break; /*0x52b26f*/
    v5 /= 2; /*0x52b271*/
LABEL_11:
    if ( v5 <= 0 ) /*0x52b283*/
      return &unk_B78830; /*0x52b283*/
  }
  if ( v8 != v6 ) /*0x52b275*/
  {
    v7 = v9 + 8; /*0x52b277*/
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



// ==== 0x0052B390  HashTable::BinarySearch  this=VoxelStruct  sig=csp ====
int __thiscall HashTable::BinarySearch(int *this, int *a2)
{
  int result; // eax
  size_t v4; // ecx
  int v5; // ecx
  int v6; // ebp
  int v7; // edi
  int v8; // esi
  int v9; // edx

  v4 = *(this + 1); /*0x52b395*/
  if ( !v4 ) /*0x52b39b*/
    goto LABEL_13; /*0x52b39b*/
  result = *(this + 4); /*0x52b39d*/
  if ( result ) /*0x52b3a6*/
  {
    result = *(_DWORD *)result; /*0x52b3a8*/
    if ( result == *a2 ) /*0x52b3ae*/
    {
      LOBYTE(result) = 1; /*0x52b3b3*/
      return result; /*0x52b3b6*/
    }
  }
  if ( !*((_BYTE *)this + 12) ) /*0x52b3b9*/
  {
    result = qsort((void *)*this, v4, 8u, CompareFunc4Int); /*0x52b3cb*/
    *(this + 4) = 0; /*0x52b3d3*/
    *((_BYTE *)this + 12) = 1; /*0x52b3da*/
  }
  v5 = *(this + 1); /*0x52b3de*/
  v6 = *a2; /*0x52b3e1*/
  v7 = *this; /*0x52b3e3*/
  if ( v5 <= 0 ) /*0x52b3e7*/
    goto LABEL_13; /*0x52b3e7*/
  while ( 1 ) /*0x52b3ee*/
  {
    result = v5 / 2; /*0x52b3ee*/
    v8 = *(_DWORD *)(v7 + 8 * (v5 / 2)); /*0x52b3f0*/
    v9 = v7 + 8 * (v5 / 2); /*0x52b3f3*/
    if ( v8 <= v6 ) /*0x52b3f8*/
      break; /*0x52b3f8*/
    v5 /= 2; /*0x52b3fa*/
LABEL_12:
    if ( v5 <= 0 ) /*0x52b40c*/
      goto LABEL_13; /*0x52b40c*/
  }
  if ( v8 != v6 ) /*0x52b3fe*/
  {
    v7 = v9 + 8; /*0x52b400*/
    v5 += -1 - result; /*0x52b408*/
    goto LABEL_12; /*0x52b408*/
  }
  if ( !v9 ) /*0x52b419*/
  {
LABEL_13:
    LOBYTE(result) = 0; /*0x52b40e*/
    return result; /*0x52b414*/
  }
  *(this + 4) = v9; /*0x52b41d*/
  LOBYTE(result) = 1; /*0x52b421*/
  return result; /*0x52b3b0*/
}



// ==== 0x0052B430  SortedArray::FindValue  this=SortedArray  sig=csp ====
void *__thiscall SortedArray::FindValue(SortedArray *this, int *a2)
{
  size_t SortedArray_field_0x04; // ecx
  _DWORD *SortedArray_field_0x10; // eax
  int v5; // ecx
  int v6; // ebp
  int v7; // edi
  int v8; // esi
  int v9; // edx

  SortedArray_field_0x04 = this->SortedArray_field_0x04; /*0x52b435*/
  if ( !SortedArray_field_0x04 ) /*0x52b43b*/
    return &unk_B7882C; /*0x52b43b*/
  SortedArray_field_0x10 = (_DWORD *)this->SortedArray_field_0x10; /*0x52b43d*/
  if ( SortedArray_field_0x10 && *SortedArray_field_0x10 == *a2 ) /*0x52b44e*/
    return (void *)(this->SortedArray_field_0x10 + 4); /*0x52b4be*/
  if ( !LOBYTE(this->SortedArray_field_0x0C) ) /*0x52b450*/
  {
    qsort( /*0x52b462*/
      *(void **)this->__pad_0,
      SortedArray_field_0x04,
      8u,
      (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc4Int);
    this->SortedArray_field_0x10 = 0; /*0x52b46a*/
    LOBYTE(this->SortedArray_field_0x0C) = 1; /*0x52b471*/
  }
  v5 = this->SortedArray_field_0x04; /*0x52b475*/
  v6 = *a2; /*0x52b478*/
  v7 = *(_DWORD *)this->__pad_0; /*0x52b47a*/
  if ( v5 <= 0 ) /*0x52b47e*/
    return &unk_B7882C; /*0x52b47e*/
  while ( 1 ) /*0x52b487*/
  {
    v8 = *(_DWORD *)(v7 + 8 * (v5 / 2)); /*0x52b487*/
    v9 = v7 + 8 * (v5 / 2); /*0x52b48a*/
    if ( v8 <= v6 ) /*0x52b48f*/
      break; /*0x52b48f*/
    v5 /= 2; /*0x52b491*/
LABEL_11:
    if ( v5 <= 0 ) /*0x52b4a3*/
      return &unk_B7882C; /*0x52b4a3*/
  }
  if ( v8 != v6 ) /*0x52b495*/
  {
    v7 = v9 + 8; /*0x52b497*/
    v5 += -1 - v5 / 2; /*0x52b49f*/
    goto LABEL_11; /*0x52b49f*/
  }
  if ( v9 ) /*0x52b4b3*/
  {
    this->SortedArray_field_0x10 = v9; /*0x52b4b5*/
    return (void *)(this->SortedArray_field_0x10 + 4); /*0x52b4b5*/
  }
  return &unk_B7882C; /*0x52b4a5*/
}



// ==== 0x0052B4D0  INIClass::deleteKey  this=INIClass  sig=csp ====
bool __thiscall INIClass::deleteKey(INIClass *this, _DWORD *a2)
{
  _DWORD *v2; // eax

  v2 = (_DWORD *)this->sectionHead[0]; /*0x52b4d0*/
  return v2 && *v2 == *a2; /*0x52b4e3*/
}



// ==== 0x0052B4F0  HashTable::BinarySearchAlt  this=HashTable  sig=csp ====
int __thiscall HashTable::BinarySearchAlt(HashTable *this, int *a2)
{
  int result; // eax
  int v4; // edi
  int v5; // ebx
  int HashTable_field_0x04; // ecx
  int v7; // esi

  result = this->HashTable_field_0x04; /*0x52b4f3*/
  if ( result ) /*0x52b4f8*/
  {
    if ( !LOBYTE(this->HashTable_field_0x0C) ) /*0x52b4fe*/
    {
      qsort(*(void **)this->__pad_0, result, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc3Int); /*0x52b510*/
      this->HashTable_field_0x10 = 0; /*0x52b518*/
      LOBYTE(this->HashTable_field_0x0C) = 1; /*0x52b51f*/
    }
    v4 = *(_DWORD *)this->__pad_0; /*0x52b529*/
    v5 = *a2; /*0x52b52b*/
    HashTable_field_0x04 = this->HashTable_field_0x04; /*0x52b52d*/
    if ( HashTable_field_0x04 <= 0 ) /*0x52b532*/
      return 0; /*0x52b55e*/
    while ( 1 ) /*0x52b53b*/
    {
      v7 = *(_DWORD *)(v4 + 8 * (HashTable_field_0x04 / 2)); /*0x52b53b*/
      if ( v7 <= v5 ) /*0x52b543*/
      {
        if ( v7 == v5 ) /*0x52b549*/
          return v4 + 8 * (HashTable_field_0x04 / 2); /*0x52b563*/
        v4 += 8 * (HashTable_field_0x04 / 2) + 8; /*0x52b54b*/
        HashTable_field_0x04 += -1 - HashTable_field_0x04 / 2; /*0x52b553*/
      }
      else
      {
        HashTable_field_0x04 /= 2; /*0x52b545*/
      }
      if ( HashTable_field_0x04 <= 0 ) /*0x52b557*/
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



// ==== 0x0052B600  SortedArray::CheckCache  this=SortedArray  sig=csp ====
int __thiscall SortedArray::CheckCache(SortedArray *this, _DWORD *a2)
{
  int result; // eax

  result = this->SortedArray_field_0x10; /*0x52b600*/
  LOBYTE(result) = result && (result = *(_DWORD *)result, result == *a2); /*0x52b611*/
  return result; /*0x52b613*/
}



// ==== 0x0052B620  SortedArray::BinarySearch  this=SortedArray  sig=csp ====
int __thiscall SortedArray::BinarySearch(SortedArray *this, int *a2)
{
  int result; // eax
  int v4; // edi
  int v5; // ebx
  int SortedArray_field_0x04; // ecx
  int v7; // esi

  result = this->SortedArray_field_0x04; /*0x52b623*/
  if ( result ) /*0x52b628*/
  {
    if ( !LOBYTE(this->SortedArray_field_0x0C) ) /*0x52b62e*/
    {
      qsort(*(void **)this->__pad_0, result, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc4Int); /*0x52b640*/
      this->SortedArray_field_0x10 = 0; /*0x52b648*/
      LOBYTE(this->SortedArray_field_0x0C) = 1; /*0x52b64f*/
    }
    v4 = *(_DWORD *)this->__pad_0; /*0x52b659*/
    v5 = *a2; /*0x52b65b*/
    SortedArray_field_0x04 = this->SortedArray_field_0x04; /*0x52b65d*/
    if ( SortedArray_field_0x04 <= 0 ) /*0x52b662*/
      return 0; /*0x52b68e*/
    while ( 1 ) /*0x52b66b*/
    {
      v7 = *(_DWORD *)(v4 + 8 * (SortedArray_field_0x04 / 2)); /*0x52b66b*/
      if ( v7 <= v5 ) /*0x52b673*/
      {
        if ( v7 == v5 ) /*0x52b679*/
          return v4 + 8 * (SortedArray_field_0x04 / 2); /*0x52b693*/
        v4 += 8 * (SortedArray_field_0x04 / 2) + 8; /*0x52b67b*/
        SortedArray_field_0x04 += -1 - SortedArray_field_0x04 / 2; /*0x52b683*/
      }
      else
      {
        SortedArray_field_0x04 /= 2; /*0x52b675*/
      }
      if ( SortedArray_field_0x04 <= 0 ) /*0x52b687*/
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



// ==== 0x0052B6D0  UI_Find  this=HashTable  sig=csp ====
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
int __cdecl CompareFunc4Int(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x52b730*/
  else
    return *a1 >= *a2 ? 1 : -1;
}



// ==== 0x0052B750  System_Search  this=-  sig=csp ====
int __fastcall sub_52B750(int a1, int a2, int *a3)
{
  int v3; // esi
  int v4; // ebx
  int v5; // edi

  v3 = a2; /*0x52b755*/
  if ( a2 <= 0 ) /*0x52b757*/
    return 0; /*0x52b789*/
  v4 = *a3; /*0x52b75d*/
  while ( 1 ) /*0x52b766*/
  {
    v5 = *(_DWORD *)(a1 + 8 * (v3 / 2)); /*0x52b766*/
    if ( v5 <= v4 ) /*0x52b76e*/
      break; /*0x52b76e*/
    v3 /= 2; /*0x52b770*/
LABEL_7:
    if ( v3 <= 0 ) /*0x52b782*/
      return 0; /*0x52b782*/
  }
  if ( v5 != v4 ) /*0x52b774*/
  {
    a1 += 8 * (v3 / 2) + 8; /*0x52b776*/
    v3 += -1 - v3 / 2; /*0x52b77e*/
    goto LABEL_7; /*0x52b77e*/
  }
  return a1 + 8 * (v3 / 2); /*0x52b784*/
}



// ==== 0x0052B7A0  sub_52B7A0  this=-  sig=ida-proto ====
int sub_52B7A0()
{
  dword_A8F2E8 = 0; /*0x52b7a2*/
  dword_A8F2EC = 0; /*0x52b7a7*/
  dword_A8F2F0 = 0; /*0x52b7ac*/
  dword_A8F2F4 = 0; /*0x52b7b1*/
  return 0; /*0x52b7b6*/
}



// ==== 0x0052B7C0  sub_52B7C0  this=-  sig=ida-proto ====
void sub_52B7C0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x52b7cc*/
  dbl_A8F418 = Math::Sqrt(v0 + v0); /*0x52b7de*/
}



// ==== 0x0052B7F0  sub_52B7F0  this=-  sig=ida-proto ====
void sub_52B7F0()
{
  dbl_A8F778 = dbl_A8F418 / 60.0; /*0x52b7fc*/
}



// ==== 0x0052B810  sub_52B810  this=-  sig=ida-proto ====
void sub_52B810()
{
  dbl_A8F760 = 1.0 / dbl_A8F778; /*0x52b81c*/
}



// ==== 0x0052B830  sub_52B830  this=-  sig=ida-proto ====
void sub_52B830()
{
  dbl_A8F758 = 0.0174532925199433 * 45.0; /*0x52b83c*/
}



// ==== 0x0052B850  sub_52B850  this=-  sig=ida-proto ====
void sub_52B850()
{
  dbl_A8F5A0 = 0.0174532925199433 * 60.0; /*0x52b85c*/
}



// ==== 0x0052B870  sub_52B870  this=-  sig=ida-proto ====
void sub_52B870()
{
  dbl_A8F2E0 = 0.0174532925199433 * 90.0; /*0x52b87c*/
}



// ==== 0x0052B890  sub_52B890  this=-  sig=ida-proto ====
__int64 sub_52B890()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_A8F2E0 - dbl_A8F5A0); /*0x52b8a2*/
  result = Math::RoundToInt(v0 * dbl_A8F418 * 0.5); /*0x52b8b6*/
  dword_A8F780 = result; /*0x52b8bb*/
  return result; /*0x52b8c0*/
}



// ==== 0x0052B8D0  sub_52B8D0  this=-  sig=ida-proto ====
void sub_52B8D0()
{
  dbl_A8F5A8 = Math::ArcTan((double)dword_A8F780 * 0.00390625); /*0x52b8e7*/
}



// ==== 0x0052B900  sub_52B900  this=-  sig=ida-proto ====
void sub_52B900()
{
  dbl_A8F648 = Math::ArcTan((double)(2 * dword_A8F780) / dbl_A8F418); /*0x52b922*/
}



// ==== 0x0052B930  sub_52B930  this=-  sig=ida-proto ====
__int64 sub_52B930()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_A8F780) + 0.5); /*0x52b94b*/
  dword_A8F774 = result; /*0x52b950*/
  return result; /*0x52b956*/
}



// ==== 0x0052B960  sub_52B960  this=-  sig=ida-proto ====
int sub_52B960()
{
  word_A8F2F8 = 0; /*0x52b962*/
  word_A8F2FA = 0; /*0x52b968*/
  return 0; /*0x52b96e*/
}



// ==== 0x0052B970  sub_52B970  this=-  sig=ida-proto ====
int sub_52B970()
{
  dword_A8F638 = 0; /*0x52b972*/
  dword_A8F63C = 0; /*0x52b977*/
  dword_A8F640 = 0; /*0x52b97c*/
  return 0; /*0x52b981*/
}



// ==== 0x0052B990  sub_52B990  this=-  sig=ida-proto ====
int sub_52B990()
{
  dword_A8F770 = 0; /*0x52b995*/
  dword_A8F768 = 128; /*0x52b99f*/
  dword_A8F76C = 128; /*0x52b9a4*/
  return 128; /*0x52b9a9*/
}



// ==== 0x0052B9B0  BINK::Background_Setup  this=BINK  sig=csp ====
int __thiscall BINK::Background_Setup(BINK *this)
{
  int result; // eax
  HWND v2; // esi
  int v3; // ecx
  int v4; // eax

  result = (int)GetDlgItem((HWND)this, 1818); /*0x52b9b8*/
  v2 = (HWND)result; /*0x52b9be*/
  if ( result ) /*0x52b9c2*/
  {
    if ( (int)g_DisplayWidth > 800 ) /*0x52b9d2*/
      v3 = (int)&g_DisplayWidth[-13].LoadingScreen_field_0x20 / 2; /*0x52b9e2*/
    else
      v3 = 0; /*0x52b9d4*/
    if ( (int)*(&g_DisplayWidth + 1) > 600 ) /*0x52b9ee*/
      v4 = (int)&(*(&g_DisplayWidth + 1))[-10].LoadingScreen_field_0x28 / 2; /*0x52b9fc*/
    else
      v4 = 0; /*0x52b9f0*/
    SetWindowPos(v2, 0, v3, v4, -1, -1, 0xDu); /*0x52ba09*/
    SendMessageA(v2, 0x4E3u, 1u, 0); /*0x52ba1f*/
    if ( g_DisplayWidth == (LoadingScreen *)640 ) /*0x52ba2b*/
      return SendMessageA(v2, 0x4E4u, 0, (LPARAM)aRa2tsS); /*0x52ba3a*/
    else
      return SendMessageA(v2, 0x4E4u, 0, (LPARAM)aRa2tsL); /*0x52ba4c*/
  }
  return result; /*0x52ba3c*/
}



// ==== 0x0052BA60  ObjectClass::InitGame  this=ObjectClass  sig=csp ====
int __usercall InitGame@<eax>(double a1@<st1>, double a2@<st0>)
{
  ScenarioClass *v2; // eax
  int v3; // ebx
  RulesClass *v5; // eax
  TextBuffer *TextBufferEntry; // eax
  BitTextClass *v7; // eax
  void *v8; // eax
  int i; // edi
  char *v10; // esi
  _BYTE *v11; // eax
  void *v12; // eax
  int j; // edi
  char *v14; // esi
  _BYTE *v15; // eax
  void *v16; // eax
  int k; // edi
  char *v18; // esi
  _BYTE *v19; // eax
  int v20; // edi
  char *v21; // esi
  _BYTE *v22; // eax
  char *v23; // ecx
  ConvertClass *v24; // eax
  void *v25; // eax
  int m; // edi
  int v27; // eax
  _BYTE *v28; // esi
  _BYTE *v29; // eax
  ConvertClass *v30; // eax
  void *v31; // eax
  int n; // edi
  int v33; // eax
  _BYTE *v34; // esi
  _BYTE *v35; // eax
  ConvertClass *v36; // eax
  void *v37; // eax
  int ii; // edi
  int v39; // eax
  _BYTE *v40; // esi
  _BYTE *v41; // eax
  ConvertClass *v42; // eax
  void *v43; // eax
  int jj; // edi
  int v45; // eax
  _BYTE *v46; // esi
  _BYTE *v47;... [23904 chars total]



// ==== 0x0052CB50  PlayIntroSequence  this=-  sig=ida-proto ====
char __usercall Init::Intro@<al>(int a1@<ebx>, int a2@<ebp>, int a3@<edi>)
{
  if ( (dword_A8E960 & 4) != 0 ) /*0x52cb57*/
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
char sub_52CB90()
{
  HANDLE FirstFileA; // esi
  char *cAlternateFileName; // ebp
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // edi
  char result; // al
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  _DWORD *v8; // edi
  char v9; // [esp+Fh] [ebp-1B1h]
  HANDLE v10; // [esp+10h] [ebp-1B0h]
  _DWORD v11[22]; // [esp+14h] [ebp-1ACh] BYREF
  _BYTE v12[12]; // [esp+6Ch] [ebp-154h] BYREF
  int v13; // [esp+78h] [ebp-148h]
  struct _WIN32_FIND_DATAA FindFileData; // [esp+80h] [ebp-140h] BYREF

  v9 = 0; /*0x52cba5*/
  FirstFileA = FindFirstFileA(aBattlemdIni, &FindFileData); /*0x52cbaf*/
  v10 = FirstFileA; /*0x52cbb4*/
  if ( FirstFileA == (HANDLE)-1 ) /*0x52cbb8*/
    goto LABEL_15; /*0x52cbb8*/
  do /*0x52ccab*/
  {
    if ( (FindFileData.dwFileAttributes & 0x116) == 0 ) /*0x52cbca*/
    {
      cAlternateFileName = FindFileData.cAlternateFileName; /*0x52cbdc*/
      if ( !strlen(FindFileData.cAlternateFileName) ) /*0x52cbe3*/
        cAlternateFileName = FindFileData.cFileName; /*0x52cbea*/
      CCFileClass::Construct(v11, cAlternateFileName); /*0x52cbf6*/
      v2 = __2_YAPAXI_Z(0x58u); /*0x52cbfd*/
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
      CCINIClass::Load(v11, 0, 0); /*0x52cc49*/
      if ( !_strcmpi(cAlternateFileName, aBattlemdIni_0) ) /*0x52cc54*/
        v9 = 1; /*0x52cc60*/
      CampaignClass::LoadFromINIList(v3); /*0x52cc67*/
      if ( v3 ) /*0x52cc6e*/
        (*(void (__thiscall **)(_DWORD *, int))*v3)(v3, 1); /*0x52cc76*/
      v11[0] = &CCFileClass::`vftable'; /*0x52cc7c*/
      v13 = 0; /*0x52cc84*/
      Vector::Clear(v12); /*0x52cc88*/
      v11[0] = &off_7E1668; /*0x52cc91*/
      BufferIOFileClass::Dtor(v11); /*0x52cc99*/
      FirstFileA = v10; /*0x52cc9e*/
    }
  }
  while ( FindNextFileA(FirstFileA, &FindFileData) ); /*0x52ccab*/
  FindClose(FirstFileA); /*0x52ccba*/
  result = v9; /*0x52ccc0*/
  if ( !v9 ) /*0x52ccc7*/
  {
LABEL_15:
    CCFileClass::Construct(v11, aBattlemdIni_0); /*0x52ccd6*/
    v6 = __2_YAPAXI_Z(0x58u); /*0x52ccdd*/
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
      CCINIClass::Load(v11, 0, 0); /*0x52cd25*/
      CampaignClass::LoadFromINIList(v7); /*0x52cd2c*/
      (*(void (__thiscall **)(_DWORD *, int))*v7)(v7, 1); /*0x52cd37*/
    }
    v11[0] = &CCFileClass::`vftable'; /*0x52cd3d*/
    v13 = 0; /*0x52cd45*/
    Vector::Clear(v12); /*0x52cd49*/
    v11[0] = &off_7E1668; /*0x52cd52*/
    return BufferIOFileClass::Dtor(v11); /*0x52cd5a*/
  }
  return result; /*0x52cd5f*/
}



// ==== 0x0052CD70  ObjectClass::InitRules  this=ObjectClass  sig=csp ====
char InitRules(ObjectClass *this)
{
  HANDLE FirstFileA; // ebp
  char *cAlternateFileName; // edi
  INIClass *v3; // eax
  CCINIClass *v4; // esi
  int v5; // eax
  int v6; // eax
  INIClass *v7; // eax
  CCINIClass *v8; // esi
  int v9; // eax
  int v11; // eax
  INT_PTR v12; // eax
  int v13; // esi
  int v14; // eax
  void (__thiscall ***v15)(_DWORD, int); // ecx
  char v16; // [esp+13h] [ebp-309h]
  _VectorClass_PAVCCINIClass dwInitParam; // [esp+14h] [ebp-308h] BYREF
  int v18; // [esp+28h] [ebp-2F4h]
  CCINIClass v19; // [esp+2Ch] [ebp-2F0h] BYREF
  int v20[3]; // [esp+84h] [ebp-298h] BYREF
  int v21; // [esp+90h] [ebp-28Ch]
  CCFileClass v22; // [esp+98h] [ebp-284h] BYREF
  int v23[3]; // [esp+F0h] [ebp-22Ch] BYREF
  int v24; // [esp+FCh] [ebp-220h]
  CCFileClass v25; // [esp+104h] [ebp-218h] BYREF
  int v26[3]; // [esp+15Ch] [ebp-1C0h] BYREF
  int v27; // [esp+168h] [ebp-1B4h]
  CCFileClass v28; // [esp+170h] [ebp-1ACh] BYREF
  int v29[5]; // [esp+1C8h] [ebp-154h] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+1DCh] [ebp-140h] BYREF

  RulesClass::InitINIChain((RulesClass *)&dwInitParam, 0, 0); /*0x52cd82*/
  *(_DWORD *)dwInitParam.__pad_0 = &DynamicVectorClass<CCINIClass *>::`vftable'; /*0x52cd8e*/
  v18 = 10; /*0x52cd9c*/
  *(_DWORD *)dwInitParam.__tail_10 = 0; /*0x52cda4*/
  v16 = 0; /*0x52cda8*/
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
    CCFileClass::Construct((CCFileClass *)&v19, cAlternateFileName); /*0x52cdec*/
    v3 = (INIClass *)__2_YAPAXI_Z(0x58u); /*0x52cdf3*/
    v4 = (CCINIClass *)v3; /*0x52cdf8*/
    if ( v3 ) /*0x52cdff*/
    {
      INIClass::INIClass(v3); /*0x52ce03*/
      v4->ownsFile = 0; /*0x52ce08*/
      *(_DWORD *)v4->INIClass = &CCINIClass_Vtable; /*0x52ce0b*/
    }
    else
    {
      v4 = 0; /*0x52ce13*/
    }
    CCINIClass::Load(v4, (int)&v19, 0, 0); /*0x52ce1e*/
    if ( _strcmpi(cAlternateFileName, aRulesmdIni) ) /*0x52ce29*/
    {
      if ( *(int *)dwInitParam.__tail_10 < dwInitParam.m_8 /*0x52cecb*/
        || (BYTE1(dwInitParam.m_C) || !dwInitParam.m_8)
        && v18 > 0
        && (*(unsigned __int8 (__thiscall **)(_VectorClass_PAVCCINIClass *, int, _DWORD))(*(_DWORD *)dwInitParam.__pad_0
                                                                                        + 8))(
             &dwInitParam,
             v18 + dwInitParam.m_8,
             0) )
      {
        v6 = (*(_DWORD *)dwInitParam.__tail_10)++; /*0x52ced6*/
        *(_DWORD *)(*(_DWORD *)&dwInitParam.m_1[3] + 4 * v6) = v4; /*0x52cee1*/
      }
      goto LABEL_24; /*0x52cee1*/
    }
    v5 = *(_DWORD *)dwInitParam.__tail_10; /*0x52ce35*/
    v16 = 1; /*0x52ce3f*/
    if ( *(int *)dwInitParam.__tail_10 < dwInitParam.m_8 ) /*0x52ce44*/
      goto LABEL_15; /*0x52ce44*/
    if ( (BYTE1(dwInitParam.m_C) || !dwInitParam.m_8) /*0x52ce6c*/
      && v18 > 0
      && (*(unsigned __int8 (__thiscall **)(_VectorClass_PAVCCINIClass *, int, _DWORD))(*(_DWORD *)dwInitParam.__pad_0
                                                                                      + 8))(
           &dwInitParam,
           v18 + dwInitParam.m_8,
           0) )
    {
      v5 = *(_DWORD *)dwInitParam.__tail_10; /*0x52ce73*/
LABEL_15:
      if ( v5 ) /*0x52ce79*/
        memcpy((void *)(*(_DWORD *)&dwInitParam.m_1[3] + 4), *(const void **)&dwInitParam.m_1[3], 4 * v5); /*0x52ce88*/
      **(_DWORD **)&dwInitParam.m_1[3] = v4; /*0x52ce94*/
      ++*(_DWORD *)dwInitParam.__tail_10; /*0x52ce9b*/
    }
LABEL_24:
    *(_DWORD *)v19.INIClass = &CCFileClass::`vftable'; /*0x52cee4*/
    v21 = 0; /*0x52cef3*/
    Vector::Clear((int)v20); /*0x52cefa*/
    *(_DWORD *)v19.INIClass = &off_7E1668; /*0x52cf03*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v19); /*0x52cf0b*/
  }
  while ( FindNextFileA(FirstFileA, &FindFileData) ); /*0x52cf19*/
  FindClose(FirstFileA); /*0x52cf28*/
  if ( !v16 ) /*0x52cf32*/
  {
LABEL_27:
    CCFileClass::Construct((CCFileClass *)&v19, aRulesmdIni); /*0x52cf38*/
    v7 = (INIClass *)__2_YAPAXI_Z(0x58u); /*0x52cf48*/
    v8 = (CCINIClass *)v7; /*0x52cf4d*/
    if ( v7 ) /*0x52cf54*/
    {
      INIClass::INIClass(v7); /*0x52cf58*/
      v8->ownsFile = 0; /*0x52cf5d*/
      *(_DWORD *)v8->INIClass = &CCINIClass_Vtable; /*0x52cf60*/
    }
    else
    {
      v8 = 0; /*0x52cf68*/
    }
    CCINIClass::Load(v8, (int)&v19, 0, 0); /*0x52cf73*/
    v9 = *(_DWORD *)dwInitParam.__tail_10; /*0x52cf78*/
    if ( *(int *)dwInitParam.__tail_10 < dwInitParam.m_8 ) /*0x52cf82*/
    {
LABEL_36:
      if ( v9 ) /*0x52cfaf*/
        memcpy((void *)(*(_DWORD *)&dwInitParam.m_1[3] + 4), *(const void **)&dwInitParam.m_1[3], 4 * v9); /*0x52cfbe*/
      **(_DWORD **)&dwInitParam.m_1[3] = v8; /*0x52cfca*/
      ++*(_DWORD *)dwInitParam.__tail_10; /*0x52cfd1*/
    }
    else if ( (BYTE1(dwInitParam.m_C) || !dwInitParam.m_8) /*0x52cfa2*/
           && v18 > 0
           && (*(unsigned __int8 (__thiscall **)(_VectorClass_PAVCCINIClass *, int, _DWORD))(*(_DWORD *)dwInitParam.__pad_0
                                                                                           + 8))(
                &dwInitParam,
                v18 + dwInitParam.m_8,
                0) )
    {
      v9 = *(_DWORD *)dwInitParam.__tail_10; /*0x52cfa9*/
      goto LABEL_36; /*0x52cfa9*/
    }
    *(_DWORD *)v19.INIClass = &CCFileClass::`vftable'; /*0x52cfe1*/
    v21 = 0; /*0x52cfe5*/
    Vector::Clear((int)v20); /*0x52cfec*/
    *(_DWORD *)v19.INIClass = &off_7E1668; /*0x52cffa*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v19); /*0x52cffe*/
  }
  if ( *(int *)dwInitParam.__tail_10 <= 0 ) /*0x52d013*/
  {
    *(_DWORD *)dwInitParam.__pad_0 = &VectorClass<CCINIClass *>::`vftable'; /*0x52d019*/
    VectorClass_ptr_CCINIClass::ddtor(&dwInitParam); /*0x52d021*/
    return 0; /*0x52d032*/
  }
  CCFileClass::Construct(&v22, aArtmdIni); /*0x52d03f*/
  if ( !CCINIClass::Load((CCINIClass *)&DSurface_ViewBounds.__pad_FC[228], (int)&v22, 0, 0) ) /*0x52d053*/
  {
    Debug::Log(); /*0x52d061*/
    *(_DWORD *)v22.CDFileClass = &CCFileClass::`vftable'; /*0x52d070*/
    v24 = 0; /*0x52d077*/
    Vector::Clear((int)v23); /*0x52d07e*/
    *(_DWORD *)v22.CDFileClass = &off_7E1668; /*0x52d08a*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v22); /*0x52d091*/
    *(_DWORD *)dwInitParam.__pad_0 = &VectorClass<CCINIClass *>::`vftable'; /*0x52d09a*/
    VectorClass_ptr_CCINIClass::ddtor(&dwInitParam); /*0x52d0a2*/
    return 0; /*0x52d0b3*/
  }
  if ( *(_DWORD *)dwInitParam.__tail_10 == 1 ) /*0x52d0b9*/
  {
    v11 = **(_DWORD **)&dwInitParam.m_1[3]; /*0x52d0bf*/
  }
  else
  {
    v12 = DialogBoxParamA(g_hInstance, (LPCSTR)0x93, g_hWnd, (DLGPROC)ReadModConfigINI, (LPARAM)&dwInitParam); /*0x52d0df*/
    if ( v12 == -1 ) /*0x52d0e8*/
      v12 = 0; /*0x52d0ea*/
    v11 = *(_DWORD *)(*(_DWORD *)&dwInitParam.m_1[3] + 4 * v12); /*0x52d0f0*/
  }
  *(_DWORD *)&DSurface_ViewBounds.__pad_34[116] = v11; /*0x52d0fa*/
  RulesClass::ReadColors(*(RulesClass **)&DSurface_ViewBounds.__pad_FC[324]); /*0x52d0ff*/
  RulesClass::ReadColorAdd(*(RulesClass **)&DSurface_ViewBounds.__pad_FC[324]); /*0x52d111*/
  RulesClass::ReadMovies(*(RulesClass **)&DSurface_ViewBounds.__pad_FC[324]); /*0x52d121*/
  Rules::ReadMiscINI(*(Rules **)&DSurface_ViewBounds.__pad_FC[324]); /*0x52d132*/
  Dialog::ReadMultiplayerDialogSettings(*(Dialog **)&DSurface_ViewBounds.__pad_FC[324]); /*0x52d144*/
  *(_DWORD *)&stru_A8B250.__pad_0[12] = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5252); /*0x52d159*/
  *(_DWORD *)&stru_A8B250.__pad_0[32] = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5268); /*0x52d165*/
  g_RulesInitConfig = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5276); /*0x52d171*/
  *(_DWORD *)&stru_A8B250.__pad_0[24] = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5280); /*0x52d17d*/
  *(_DWORD *)&stru_A8B250.__pad_0[40] = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5284); /*0x52d189*/
  *(_DWORD *)&stru_A8B250.__pad_0[36] = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5288); /*0x52d195*/
  stru_A8B250.__pad_0[16] = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5292); /*0x52d1a1*/
  stru_A8B250.__pad_0[8] = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5295); /*0x52d1ad*/
  stru_A8B250.__pad_0[17] = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5297); /*0x52d1b9*/
  byte_A8B31E = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5298); /*0x52d1c5*/
  byte_A8B31D = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5299); /*0x52d1d1*/
  stru_A8B250.__pad_0[28] = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5300); /*0x52d1dd*/
  byte_A8B31C = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5301); /*0x52d1e9*/
  stru_A8B250.__pad_0[18] = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5302); /*0x52d1f5*/
  stru_A8B250.__pad_0[19] = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5305); /*0x52d201*/
  stru_A8B250.__pad_0[20] = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5306); /*0x52d20d*/
  byte_A8B31F = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5303); /*0x52d219*/
  dword_A8B320 = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5304); /*0x52d22c*/
  CCFileClass::Construct(&v25, aLangruleIni); /*0x52d231*/
  if ( (unsigned __int8)CCFileClass::Open(&v25, 0) == 1 ) /*0x52d245*/
  {
    INIClass::INIClass((INIClass *)&v19); /*0x52d24f*/
    v19.ownsFile = 0; /*0x52d25b*/
    *(_DWORD *)v19.INIClass = &CCINIClass_Vtable; /*0x52d267*/
    if ( CCINIClass::Load(&v19, (int)&v25, 1, 0) > 1 ) /*0x52d277*/
    {
      HashTable::DestroyHashTableINIClass((INIClass *)&v19); /*0x52d281*/
      *(_DWORD *)v25.CDFileClass = &CCFileClass::`vftable'; /*0x52d28d*/
      v27 = 0; /*0x52d294*/
      Vector::Clear((int)v26); /*0x52d29b*/
      *(_DWORD *)v25.CDFileClass = &off_7E1668; /*0x52d2a7*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v25); /*0x52d2ae*/
      *(_DWORD *)v22.CDFileClass = &CCFileClass::`vftable'; /*0x52d2ba*/
      v24 = 0; /*0x52d2c1*/
      Vector::Clear((int)v23); /*0x52d2c8*/
      *(_DWORD *)v22.CDFileClass = &off_7E1668; /*0x52d2d4*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v22); /*0x52d2db*/
      *(_DWORD *)dwInitParam.__pad_0 = &VectorClass<CCINIClass *>::`vftable'; /*0x52d2e4*/
      if ( *(_DWORD *)&dwInitParam.m_1[3] ) /*0x52d2ee*/
      {
        if ( BYTE1(dwInitParam.m_C) ) /*0x52d2f4*/
          __3_YAXPAX_Z(*(void **)&dwInitParam.m_1[3]); /*0x52d2f7*/
      }
      return 0; /*0x52d30b*/
    }
    RulesClass::Addition(*(RulesClass **)&DSurface_ViewBounds.__pad_FC[324]); /*0x52d317*/
    HashTable::DestroyHashTableINIClass((INIClass *)&v19); /*0x52d320*/
  }
  v13 = 0; /*0x52d329*/
  if ( *(int *)dwInitParam.__tail_10 > 0 ) /*0x52d32d*/
  {
    v14 = *(_DWORD *)&dwInitParam.m_1[3]; /*0x52d32f*/
    do /*0x52d355*/
    {
      v15 = *(void (__thiscall ****)(_DWORD, int))(v14 + 4 * v13); /*0x52d333*/
      if ( v15 != *(void (__thiscall ****)(_DWORD, int))&DSurface_ViewBounds.__pad_34[116] && v15 ) /*0x52d342*/
      {
        (**v15)(v15, 1); /*0x52d348*/
        v14 = *(_DWORD *)&dwInitParam.m_1[3]; /*0x52d34a*/
      }
      ++v13; /*0x52d352*/
    }
    while ( v13 < *(int *)dwInitParam.__tail_10 ); /*0x52d355*/
  }
  CCFileClass::Construct(&v28, aAimdIni); /*0x52d363*/
  CCINIClass::Load((CCINIClass *)&DSurface_ViewBounds.__pad_FC[140], (int)&v28, 1, 0); /*0x52d378*/
  *(_DWORD *)v28.CDFileClass = &CCFileClass::`vftable'; /*0x52d384*/
  v29[3] = 0; /*0x52d38b*/
  Vector::Clear((int)v29); /*0x52d392*/
  *(_DWORD *)v28.CDFileClass = &off_7E1668; /*0x52d39e*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v28); /*0x52d3a5*/
  *(_DWORD *)v25.CDFileClass = &CCFileClass::`vftable'; /*0x52d3b1*/
  v27 = 0; /*0x52d3b8*/
  Vector::Clear((int)v26); /*0x52d3bf*/
  *(_DWORD *)v25.CDFileClass = &off_7E1668; /*0x52d3cb*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v25); /*0x52d3d2*/
  *(_DWORD *)v22.CDFileClass = &CCFileClass::`vftable'; /*0x52d3de*/
  v24 = 0; /*0x52d3e5*/
  Vector::Clear((int)v23); /*0x52d3ec*/
  *(_DWORD *)v22.CDFileClass = &off_7E1668; /*0x52d3f8*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v22); /*0x52d3ff*/
  *(_DWORD *)dwInitParam.__pad_0 = &VectorClass<CCINIClass *>::`vftable'; /*0x52d408*/
  if ( *(_DWORD *)&dwInitParam.m_1[3] && BYTE1(dwInitParam.m_C) ) /*0x52d418*/
    __3_YAXPAX_Z(*(void **)&dwInitParam.m_1[3]); /*0x52d41b*/
  return 1; /*0x52d028*/
}



// ==== 0x0052D430  ReadModConfigINI  this=-  sig=csp ====
INT_PTR __stdcall sub_52D430(HWND hDlg, UINT a2, WPARAM a3, int *a4)
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
      (unsigned __int8 *)g_INI_Key_Name,
      &g_INI_DefaultBuffer,
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
      GameOptionsClass::PopulateMovieList(dword_A8EB60, DlgItem); /*0x52d8de*/
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
char MenuSelect(ObjectClass *this)
{
  double v1; // st7
  int v2; // eax
  int *p_vtable3; // edx
  int *v4; // eax
  int vtable3; // ecx
  int abstractFlags; // edx
  int v7; // edx
  int j; // edi
  int i; // eax
  int v10; // edx
  LONG v11; // esi
  int v12; // eax
  _DWORD *v13; // ecx
  int v14; // eax
  int v15; // eax
  int *StringCSF; // esi
  wchar_t *v17; // ebp
  int v18; // eax
  int v19; // eax
  LONG v20; // eax
  HWND Dialog; // eax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  LoadOptions *v25; // eax
  char v26; // bl
  _UNKNOWN **v27; // eax
  char v28; // al
  _UNKNOWN **v29; // eax
  char v30; // bl
  int v31; // eax
  int v32; // eax
  _UNKNOWN **v33; // eax
  IPXInterfaceClass *v34; // eax
  _DWORD *v35; // eax
  wchar_t *v36; // eax
  int v37; // eax
  int v38; // esi
  int Ticks; // ecx
  int v40; // esi
  int v41; // edi
  int v42; // esi
  char result; // al
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v... [31527 chars total]



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
        dword_825C7C = VocClass::FindIndex(stru_8263E0); /*0x52f002*/
        DlgItem = GetDlgItem(hDlg, 1109); /*0x52f009*/
        if ( byte_A8F7AD ) /*0x52f012*/
        {
          if ( DlgItem ) /*0x52f016*/
          {
            for ( i = 0; i < dword_A83D08; ++i ) /*0x52f021*/
              SendMessageA(DlgItem, 0x4CDu, 0, *((_DWORD *)dword_A83CFC + i) + 672); /*0x52f03a*/
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
          PostMessageA(v27, 0x405u, 1u, dword_A8EB64); /*0x52f123*/
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
        SendDlgItemMessageA(hDlg, dword_A8F7A8, 0x4D4u, 0, 0); /*0x52efbc*/
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
      if ( v31 == (HWND)dword_A8F7B0 ) /*0x52f219*/
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
            byte_ABCE08 = 0; /*0x52f28b*/
            SendDlgItemMessageA(hDlg, dword_A8F7A8, 0x4D5u, 0, 0); /*0x52f292*/
            SendDlgItemMessageA(hDlg, dword_A8F7A8, 0x4D4u, 0, 0); /*0x52f2a3*/
            v35 = GetDlgItem(hDlg, 1295); /*0x52f2ab*/
            if ( v35 ) /*0x52f2b3*/
              dword_A8EB64 = SendMessageA(v35, 0x400u, 0, 0); /*0x52f2c3*/
            if ( g_ScenarioLoadEvent != -1 ) /*0x52f2d2*/
            {
              AudioController::Stop(stru_A8F300); /*0x52f2dd*/
              PlayVocClass(g_ScenarioLoadEvent, 0x2000, 1.0, (int)stru_A8F300); /*0x52f2f7*/
              g_ScenarioLoadEvent = -1; /*0x52f2fc*/
            }
          }
        }
LABEL_86:
        if ( GetCapture() == hDlg ) /*0x52f3ce*/
          ReleaseCapture(); /*0x52f3d0*/
        dword_A8F7B0 = 0; /*0x52f3d6*/
        return 0; /*0x52f3d6*/
      }
      if ( DlgCtrlID == 1770 || DlgCtrlID == 1772 || DlgCtrlID == 1771 ) /*0x52f31d*/
      {
        if ( dword_A8F7A8 ) /*0x52f359*/
        {
          SendDlgItemMessageA(hDlg, dword_A8F7A8, 0x4D5u, 0, 0); /*0x52f364*/
          SendDlgItemMessageA(hDlg, dword_A8F7A8, 0x4D4u, 0, 0); /*0x52f375*/
        }
        SendDlgItemMessageA(hDlg, DlgCtrlID, 0x4D5u, 0, 0); /*0x52f380*/
        SendDlgItemMessageA(hDlg, DlgCtrlID, 0x4D3u, 0, 0); /*0x52f38b*/
        dword_A8F7A8 = DlgCtrlID; /*0x52f38d*/
        goto LABEL_86; /*0x52f393*/
      }
      if ( !dword_A8F7A8 ) /*0x52f326*/
        goto LABEL_86; /*0x52f326*/
    }
    else if ( !dword_A8F7A8 ) /*0x52f39c*/
    {
      goto LABEL_86; /*0x52f39c*/
    }
    SendDlgItemMessageA(hDlg, dword_A8F7A8, 0x4D5u, 0, 0); /*0x52f3ad*/
    SendDlgItemMessageA(hDlg, dword_A8F7A8, 0x4D4u, 0, 0); /*0x52f3be*/
    dword_A8F7A8 = 0; /*0x52f3c0*/
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
        PlayVocClass(dword_8871E0->ChronoInSound, 0x2000, 1.0, 0); /*0x52ef6a*/
        dword_A8F7B0 = v17; /*0x52ef70*/
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
            dword_A8EB64 = SendMessageA(v11, 0x400u, 0, 0); /*0x52ed51*/
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
  if ( dword_A8F7B0 ) /*0x52ed67*/
    return 0; /*0x52ed67*/
  GetWindowRect(hDlg, &Rect); /*0x52ed7e*/
  v36.y = HIWORD(a4) - Rect.top; /*0x52ed92*/
  v36.x = (unsigned __int16)a4 - Rect.left; /*0x52ed93*/
  v12 = ChildWindowFromPointEx(hDlg, v36, 1u); /*0x52ed95*/
  if ( !v12 ) /*0x52ed9d*/
  {
    if ( dword_A8F7A8 ) /*0x52eec2*/
    {
      SendDlgItemMessageA(hDlg, dword_A8F7A8, 0x4D5u, 0, 0); /*0x52eed9*/
      SendDlgItemMessageA(hDlg, dword_A8F7A8, 0x4D4u, 0, 0); /*0x52eeec*/
      return 0; /*0x52eef7*/
    }
    return 0; /*0x52eec2*/
  }
  v13 = GetDlgCtrlID(v12); /*0x52edb0*/
  v14 = dword_A8F7A8; /*0x52edb2*/
  if ( dword_A8F7A8 != v13 ) /*0x52edb9*/
  {
    SendDlgItemMessageA(hDlg, dword_A8F7A8, 0x4D5u, 0, 0); /*0x52edc6*/
    SendDlgItemMessageA(hDlg, dword_A8F7A8, 0x4D4u, 0, 0); /*0x52edd9*/
    LODWORD(v15) = Audio::Callback(); /*0x52eddb*/
    g_ScenarioLoadEvent = -1; /*0x52ede5*/
    qword_A8F7A0 = v15 + 500; /*0x52edf2*/
    v14 = 0; /*0x52edf7*/
    dword_A8F7A8 = 0; /*0x52edff*/
  }
  if ( v13 == 1770 ) /*0x52ee0a*/
  {
    if ( v14 != 1770 ) /*0x52ee0e*/
    {
      g_ScenarioLoadEvent = dword_825C78; /*0x52ee25*/
      SendDlgItemMessageA(hDlg, 1770, 0x4D3u, 0, 0); /*0x52ee2b*/
      dword_A8F7A8 = 1770; /*0x52ee2f*/
      return 0; /*0x52ee3c*/
    }
    return 0; /*0x52ee0e*/
  }
  if ( v13 == 1772 ) /*0x52ee45*/
  {
    if ( v14 != 1772 ) /*0x52ee49*/
    {
      g_ScenarioLoadEvent = dword_825C74; /*0x52ee5f*/
      SendDlgItemMessageA(hDlg, 1772, 0x4D3u, 0, 0); /*0x52ee64*/
      dword_A8F7A8 = 1772; /*0x52ee68*/
      return 0; /*0x52ee75*/
    }
    return 0; /*0x52ee49*/
  }
  if ( v13 != 1771 ) /*0x52ee7e*/
    return 0; /*0x52f3dc*/
  if ( v14 != 1771 ) /*0x52ee86*/
    g_ScenarioLoadEvent = dword_825C7C; /*0x52ee8e*/
  SendDlgItemMessageA(hDlg, 1771, 0x4D3u, 0, 0); /*0x52eea3*/
  dword_A8F7A8 = 1771; /*0x52eea8*/
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

  v0 = dword_887628; /*0x52f3f0*/
  if ( dword_887628 ) /*0x52f3fe*/
  {
    (**(void (__thiscall ***)(int, int))dword_887628)(dword_887628, 1); /*0x52f404*/
    v0 = 0; /*0x52f406*/
    dword_887628 = 0; /*0x52f408*/
  }
  v1 = 0; /*0x52f414*/
  if ( dword_A83CA8 > 0 ) /*0x52f419*/
  {
    do /*0x52f437*/
    {
      (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)dword_A83C9C + v1) + 100))( /*0x52f42c*/
        *((_DWORD *)dword_A83C9C + v1),
        dword_887048);
      ++v1; /*0x52f434*/
    }
    while ( v1 < dword_A83CA8 ); /*0x52f437*/
    v0 = dword_887628; /*0x52f439*/
  }
  if ( !v0 ) /*0x52f441*/
  {
    v2 = __2_YAPAXI_Z(0x3F5CCu); /*0x52f448*/
    if ( v2 ) /*0x52f452*/
      v0 = Network::finalizeSession(v2); /*0x52f45b*/
    else
      v0 = 0; /*0x52f45f*/
    dword_887628 = v0; /*0x52f461*/
  }
  dword_A8B24C = 2; /*0x52f467*/
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v0 + 60))(v0, 0); /*0x52f474*/
  Network::SetConnectionParams(30, -1, 600, 1); /*0x52f489*/
  Debug::Log(aAboutToInitial); /*0x52f493*/
  v4 = Network_Init_5DA6C0(); /*0x52f4a6*/
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_887628 + 28))(dword_887628); /*0x52f4ac*/
  dword_A8E2B2 = 0; /*0x52f4b3*/
  dword_A8E2B6 = 0; /*0x52f4be*/
  byte_A8E2B0 = 0; /*0x52f4c4*/
  dword_A8E2BA = 0; /*0x52f4ca*/
  byte_A8E2A4 = 0; /*0x52f4d0*/
  dword_A8E2BE = 0; /*0x52f4d6*/
  LOWORD(dword_A8DBBC) = 0; /*0x52f4e1*/
  word_A8E2A6 = 0; /*0x52f4e8*/
  dword_A8E2C4 = 0; /*0x52f4ef*/
  dword_A8E2CC = -1; /*0x52f4f5*/
  dword_A8E2D4 = 20; /*0x52f4fb*/
  dword_A8E2D8 = 0; /*0x52f505*/
  dword_A8E2DC = 0; /*0x52f50b*/
  dword_A8E2E0 = -1; /*0x52f511*/
  memset(&unk_A8DC4C, 0, 0x200u); /*0x52f517*/
  memset(&dword_A8DE4C, 0xFFu, 0x200u); /*0x52f527*/
  dword_A8E050 = 0; /*0x52f529*/
  dword_A8E054 = 0; /*0x52f534*/
  dword_A8E058 = 0; /*0x52f53c*/
  dword_A8E05C = 0; /*0x52f547*/
  memset(&dword_A8E230, 0, 0x20u); /*0x52f54d*/
  dword_A8E04C = 0; /*0x52f557*/
  if ( dword_A8E22C ) /*0x52f55e*/
  {
    dword_A8E228 = dword_A8E22C; /*0x52f560*/
  }
  else if ( byte_A8E250 ) /*0x52f56d*/
  {
    dword_A8E228 += 7; /*0x52f57c*/
    if ( dword_A8E228 >= 1950 ) /*0x52f581*/
      dword_A8E228 = 1250; /*0x52f583*/
    byte_A8E250 = 0; /*0x52f58d*/
  }
  RawFileClass::Construct(aRa2mdIni); /*0x52f59c*/
  INIClass::SetInt(aMultiplayer, aPortbase, dword_A8E228, 0); /*0x52f5b7*/
  INIClass::SetInt(aMultiplayer, aPortpool, dword_ABFED8, 0); /*0x52f5d3*/
  INIClass::WriteDigest(v5, 0); /*0x52f5e3*/
  Network::validatePacket(&unk_B052D0); /*0x52f5ed*/
  byte_A8D60E = 1; /*0x52f5f6*/
  RawFileClass::Dtor(v5); /*0x52f5fd*/
  return v4; /*0x52f606*/
}



// ==== 0x0052F620  ParseCommandLine  this=-  sig=ida-proto ====
char __fastcall CommandLine_Parse(int a1, int a2)
{
  char **v4; // esi
  char *v5; // esi
  int v6; // eax
  int v7; // edi
  char *v8; // eax
  int *v9; // eax
  __int16 v10; // ax
  unsigned __int16 v11; // ax
  int v12; // eax
  char *v13; // esi
  char v14; // al
  bool v15; // cc
  const wchar_t *v17; // eax
  const wchar_t *v18; // eax
  const wchar_t *v19; // eax
  const wchar_t *v20; // eax
  const wchar_t *v21; // eax
  const wchar_t *v22; // eax
  char v23; // [esp+10h] [ebp-28h] BYREF
  int v24; // [esp+14h] [ebp-24h]
  char **v25; // [esp+18h] [ebp-20h]
  _BYTE v26[4]; // [esp+1Ch] [ebp-1Ch] BYREF
  int v27; // [esp+20h] [ebp-18h]
  int v28; // [esp+24h] [ebp-14h] BYREF
  __int16 v29; // [esp+28h] [ebp-10h]

  v27 = a1; /*0x52f630*/
  ScenarioClass::ResetIntroFlags(&dword_A8E960); /*0x52f634*/
  byte_A8ED6B = 0; /*0x52f63e*/
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
    RestartNetworkSession(1); /*0x52f67f*/
LABEL_64:
    v4 = v25 + 1; /*0x52fb17*/
    v15 = ++v24 < v27; /*0x52fb27*/
    ++v25; /*0x52fb2d*/
    if ( !v15 ) /*0x52fb31*/
      return 1; /*0x52fb31*/
  }
  if ( !_strcmpi(aStr, v5) ) /*0x52f68f*/
  {
    ToggleNetworkSession(1); /*0x52f6a0*/
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
    dword_A8F784 = 1; /*0x52f6f7*/
    goto LABEL_64; /*0x52f701*/
  }
  if ( !_strcmpi(aPlay, v5) ) /*0x52f70c*/
  {
    dword_A8F784 = 2; /*0x52f718*/
    goto LABEL_64; /*0x52f71e*/
  }
  if ( !_strcmpi(&unk_8265B8, v5) /*0x52f76b*/
    || !_strcmpi(&unk_8265B4, v5)
    || !_strcmpi(&unk_8265B0, v5)
    || !_strcmpi(&unk_8265AC, v5) )
  {
    v18 = (const wchar_t *)GetStringCSF(aTxtOptionHelp0, (int)g_Str_File_Init_CPP, 3414); /*0x52fb7b*/
    _putws(v18); /*0x52fb81*/
    v19 = (const wchar_t *)GetStringCSF(aTxtOptionHelp0_0, (int)g_Str_File_Init_CPP, 3415); /*0x52fb9a*/
    _putws(v19); /*0x52fba0*/
    v20 = (const wchar_t *)GetStringCSF(aTxtOptionHelp0_1, (int)g_Str_File_Init_CPP, 3416); /*0x52fbb9*/
    _putws(v20); /*0x52fbbf*/
    v21 = (const wchar_t *)GetStringCSF(aTxtOptionHelp0_2, (int)g_Str_File_Init_CPP, 3417); /*0x52fbd8*/
    _putws(v21); /*0x52fbde*/
    v22 = (const wchar_t *)GetStringCSF(aTxtOptionHelp0_3, (int)g_Str_File_Init_CPP, 3418); /*0x52fbf7*/
    _putws(v22); /*0x52fbfd*/
    v17 = (const wchar_t *)GetStringCSF((wchar_t *)aTxtOptionHelp0_4, (int)g_Str_File_Init_CPP, 3419); /*0x52fc16*/
    goto LABEL_67; /*0x52fc16*/
  }
  if ( Checksummer::HashString(v5) == -648255326 ) /*0x52f787*/
  {
    v6 = dword_A8E960; /*0x52f789*/
    LOBYTE(v6) = dword_A8E960 | 4; /*0x52f78e*/
    dword_A8E960 = v6; /*0x52f790*/
    goto LABEL_64; /*0x52f795*/
  }
  if ( strstr(v5, SubStr) ) /*0x52f7a0*/
  {
    byte_89E3A0 = 1; /*0x52f7af*/
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
          v26[v7] = v23; /*0x52f80d*/
        ++v7; /*0x52f821*/
        v8 = strtok(0, asc_826598); /*0x52f822*/
      }
      while ( v8 ); /*0x52f82c*/
      if ( v7 >= 4 ) /*0x52f831*/
      {
        v28 = -1; /*0x52f83e*/
        v29 = -1; /*0x52f847*/
        dword_A8D5FC = 1; /*0x52f852*/
        v9 = (int *)NetworkAddress::Assign(v26, &v28, 0); /*0x52f85c*/
        stru_A8D600 = *v9; /*0x52f863*/
        dword_A8D604 = v9[1]; /*0x52f86c*/
        dword_A8D608 = v9[2]; /*0x52f875*/
      }
    }
    goto LABEL_64; /*0x52f87a*/
  }
  if ( strstr(v5, aSocket_0) ) /*0x52f885*/
  {
    v10 = atoi(&v5[strlen(aSocket_1)]) + 0x4000; /*0x52f8a8*/
    if ( v10 >= 0x4000 ) /*0x52f8b4*/
      Network::GetField(v10); /*0x52f8ca*/
    goto LABEL_64; /*0x52f8cf*/
  }
  SessionClass::SetInstance(0); /*0x52f8d6*/
  if ( strstr(v5, aMpdebug) ) /*0x52f8e1*/
  {
    byte_B04880 = 1; /*0x52f8ed*/
    byte_A8B8B4 = 1; /*0x52f8f4*/
  }
  if ( strstr(v5, aDrop) ) /*0x52f901*/
  {
    v11 = atoi(&v5[strlen(aDrop)]); /*0x52f91f*/
    SessionClass::SetInstance(v11); /*0x52f92f*/
    goto LABEL_64; /*0x52f934*/
  }
  if ( strstr(v5, aSpeedcontrol) ) /*0x52f93f*/
    byte_A8EDDC = 1; /*0x52f94b*/
  if ( strstr(v5, aDlink1) ) /*0x52f958*/
    dword_B77E18 = 1; /*0x52f964*/
  if ( strstr(v5, aNetgear) ) /*0x52f974*/
    dword_B77E18 = 2; /*0x52f980*/
  if ( strstr(v5, aNorouter) ) /*0x52f98c*/
    byte_A8E2C8 = 0; /*0x52f998*/
  if ( strstr(v5, aStealth) ) /*0x52f9a4*/
  {
    byte_A8D60C = 1; /*0x52f9b0*/
    goto LABEL_64; /*0x52f9b7*/
  }
  if ( strstr(v5, aMessages) ) /*0x52f9c2*/
  {
    byte_A8D60D = 0; /*0x52f9ce*/
    goto LABEL_64; /*0x52f9d4*/
  }
  if ( strstr(v5, aAttract) ) /*0x52f9df*/
  {
    v12 = dword_A8D5F8; /*0x52f9eb*/
    LOBYTE(v12) = dword_A8D5F8 | 4; /*0x52f9f0*/
    dword_A8D5F8 = v12; /*0x52f9f2*/
    goto LABEL_64; /*0x52f9f7*/
  }
  if ( isdigit(v5[1]) ) /*0x52fa01*/
  {
    sscanf(v5, "-%dX%d", &dword_A8EB84, &dword_A8EB88); /*0x52fa1d*/
    goto LABEL_64; /*0x52fa25*/
  }
  if ( !strcmp(v5, a480) ) /*0x52fa37*/
  {
    dword_A8EB88 = 480; /*0x52fa5c*/
    goto LABEL_64; /*0x52fa66*/
  }
  if ( !strcmp(v5, unk_82650C) ) /*0x52fa78*/
  {
    g_Is16BitMode = 1; /*0x52fa9d*/
    goto LABEL_64; /*0x52faa4*/
  }
  if ( !_strcmpi(v5, aWin) ) /*0x52faac*/
  {
    g_DDraw_Initialized = 1; /*0x52fab8*/
    goto LABEL_64; /*0x52fabf*/
  }
  if ( _strnicmp(v5, unk_8264FC, strlen(unk_826500)) ) /*0x52fad7*/
    goto LABEL_64; /*0x52fad7*/
  v13 = &v5[strlen(unk_8264FC)]; /*0x52faf0*/
  v14 = *v13; /*0x52faf2*/
  if ( !*v13 ) /*0x52faf2*/
    goto LABEL_64; /*0x52faf6*/
  while ( 1 ) /*0x52fafc*/
  {
    ++v13; /*0x52fafc*/
    if ( toupper(v14) != 81 ) /*0x52fb08*/
      break; /*0x52fb08*/
    byte_A8ED64 = 1; /*0x52fb0a*/
    v14 = *v13; /*0x52fb11*/
    if ( !*v13 ) /*0x52fb11*/
      goto LABEL_64; /*0x52fb15*/
  }
  v17 = (const wchar_t *)GetStringCSF(aTxtInvalid, (int)g_Str_File_Init_CPP, 3732); /*0x52fb52*/
LABEL_67:
  _putws(v17); /*0x52fb57*/
  return 0; /*0x52fb37*/
}



// ==== 0x0052FC20  ObjectClass::InitRandomSeed  this=ObjectClass  sig=csp ====
int InitRandomSeed(TechnoClass *this)
{
  DWORD TickCount; // eax
  int result; // eax
  struct _SYSTEMTIME SystemTime; // [esp+8h] [ebp-408h] BYREF
  _BYTE v4[1012]; // [esp+1Ch] [ebp-3F4h] BYREF

  Debug::Log(); /*0x52fc2d*/
  if ( dword_A8B8B8 || (dword_A8D5F8 & 2) != 0 || UI_Update() ) /*0x52fc4f*/
  {
    SeedInitRNG((ObjectClass *)v4, dword_A8ED94); /*0x52fe66*/
    qmemcpy(&dword_A8B230[14].NeedsSaveOrLink, v4, 0x3F4u); /*0x52fe80*/
    SeedInitRNG((ObjectClass *)v4, dword_A8ED94); /*0x52fe8d*/
    qmemcpy(&Randomizer_Global, v4, 0x3F4u); /*0x52feab*/
    return Debug::Log(); /*0x52fead*/
  }
  else
  {
    if ( !*(_DWORD *)&dword_A8B238 || *(_DWORD *)&dword_A8B238 == 5 ) /*0x52fc68*/
    {
      GetSystemTime(&SystemTime); /*0x52fc73*/
      Random::AdvanceRandomBytes(stru_A8E7B0.__pad_0, SystemTime.wMilliseconds); /*0x52fc83*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wSecond); /*0x52fc98*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wSecond >> 1); /*0x52fcae*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wSecond >> 2); /*0x52fcc6*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wSecond >> 3); /*0x52fcde*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wSecond >> 4); /*0x52fcf5*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wMinute); /*0x52fd0a*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wMinute >> 1); /*0x52fd21*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wMinute >> 2); /*0x52fd38*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wMinute >> 3); /*0x52fd50*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wMinute >> 4); /*0x52fd68*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wHour); /*0x52fd7c*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wDay); /*0x52fd91*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wDayOfWeek); /*0x52fda6*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wMonth); /*0x52fdba*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wYear); /*0x52fdcf*/
      TickCount = dword_A8ED98; /*0x52fdd4*/
      if ( !dword_A8ED98 ) /*0x52fddb*/
      {
        RandomStraw::Release((RandomStraw *)&stru_A8E7B0, (int)&dword_A8ED94, 4); /*0x52fde9*/
        TickCount = GetTickCount(); /*0x52fdee*/
      }
      dword_A8ED94 = TickCount; /*0x52fdf4*/
    }
    Debug::Log(); /*0x52fe05*/
    SeedInitRNG((ObjectClass *)v4, dword_A8ED94); /*0x52fe17*/
    qmemcpy(&dword_A8B230[14].NeedsSaveOrLink, v4, 0x3F4u); /*0x52fe31*/
    result = (int)SeedInitRNG((ObjectClass *)v4, dword_A8ED94); /*0x52fe3e*/
    qmemcpy(&Randomizer_Global, v4, 0x3F4u); /*0x52fe51*/
  }
  return result; /*0x52fe53*/
}



// ==== 0x0052FEC0  Screen::Capture  this=Screen  sig=csp ====
int __usercall Screen::Capture@<eax>(char a1@<dl>, int a2@<ecx>, int a3@<ebx>, int a4@<ebp>)
{
  int *v4; // edi
  int v5; // ebx
  int v6; // ebp
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  int result; // eax
  int v10; // [esp+Ah] [ebp-1Ch]
  int v11; // [esp+Eh] [ebp-18h]
  int *v12; // [esp+12h] [ebp-14h]
  int v13[2]; // [esp+1Eh] [ebp-8h] BYREF
  int retaddr; // [esp+26h] [ebp+0h]

  v4 = (int *)a2; /*0x52fec5*/
  HIBYTE(v12) = a1; /*0x52fecb*/
  if ( !a2 ) /*0x52fecf*/
    v4 = g_DSurface_Hidden; /*0x52fed1*/
  (*(void (__thiscall **)(int *, _DWORD, int, int))(*v4 + 24))(v4, 0, a4, a3); /*0x52fede*/
  v5 = (*(int (__thiscall **)(int *))(*v4 + 124))(v4); /*0x52fee8*/
  v6 = (*(int (__thiscall **)(int *))(*v4 + 128))(v4); /*0x52fef4*/
  v13[0] = 0; /*0x52fef6*/
  v13[1] = 0; /*0x52fefc*/
  retaddr = v5; /*0x52ff00*/
  v7 = __2_YAPAXI_Z(0x20u); /*0x52ff08*/
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
  result = (*(int (__thiscall **)(int *, _DWORD *))(*v4 + 4))(v4, v8); /*0x52ff60*/
  if ( v8 ) /*0x52ff67*/
    result = (*(int (__thiscall **)(_DWORD *, int))*v8)(v8, 1); /*0x52ff6f*/
  LOBYTE(result) = HIBYTE(v12); /*0x52ff71*/
  if ( HIBYTE(v12) ) /*0x52ff77*/
    return Frame::Present((int)v4, 1, 0, (int)v4, 0, v10, v11, v12); /*0x52ff7f*/
  return result; /*0x52ff84*/
}



// ==== 0x005200B0  InfantryClass::ProcessIdleDeploy  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::ProcessIdleDeploy(InfantryClass *this)
{
  int PanicDurationLeft; // eax
  int v3; // eax
  int v4; // eax
  AbstractClass *movementDestination; // eax

  if ( this->PanicDurationLeft > 0 ) /*0x5200bb*/
  {
    if ( !this->Type->Fearless ) /*0x5200c7*/
      --this->PanicDurationLeft; /*0x5200d1*/
    if ( !this->PanicDurationLeft /*0x5200ef*/
      && !this->?
      && (*((unsigned __int8 (__thiscall **)(InfantryClass *))this->FootClass + 171))(this) )
    {
      this->? = this->Type->?; /*0x520105*/
    }
    PanicDurationLeft = this->PanicDurationLeft; /*0x520113*/
    if ( this->Crawling ) /*0x52010b*/
    {
      if ( PanicDurationLeft < 50 ) /*0x52011e*/
      {
        v3 = this->SequenceAnim[0]; /*0x520124*/
        if ( v3 != 27 && v3 != 28 && v3 != 29 && v3 != 30 ) /*0x520148*/
          (*((void (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 7, 0, 0); /*0x520158*/
      }
    }
    else if ( PanicDurationLeft >= 50 ) /*0x520163*/
    {
      v4 = this->SequenceAnim[0]; /*0x520165*/
      if ( v4 != 27 && v4 != 28 && v4 != 29 && v4 != 30 ) /*0x52017d*/
      {
        if ( !(unsigned __int8)House::IsCurrentPlayer((House *)this->?) ) /*0x520185*/
          goto LABEL_42; /*0x520185*/
        if ( !this->? ) /*0x52018e*/
        {
          if ( !this->?[0] ) /*0x520198*/
            WinAPI::Wrapper(-2147467261); /*0x5201a7*/
          if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->?[0] + 16))(this->?[0]) ) /*0x5201b5*/
          {
LABEL_42:
            if ( !this->Type->Fraidycat ) /*0x5201c2*/
              (*((void (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 5, 0, 0); /*0x5201d6*/
          }
        }
      }
    }
  }
  LOBYTE(movementDestination) = this->Type->Fraidycat; /*0x5201e2*/
  if ( (_BYTE)movementDestination ) /*0x5201ea*/
  {
    if ( this->PanicDurationLeft > 50 ) /*0x5201f3*/
    {
      movementDestination = (AbstractClass *)this->SequenceAnim[0]; /*0x5201f5*/
      if ( movementDestination != (AbstractClass *)27 /*0x52020d*/
        && movementDestination != (AbstractClass *)28
        && movementDestination != (AbstractClass *)29
        && movementDestination != (AbstractClass *)30 )
      {
        LOBYTE(movementDestination) = this->?; /*0x52020f*/
        if ( !(_BYTE)movementDestination ) /*0x520217*/
        {
          if ( !this->?[0] ) /*0x520219*/
            WinAPI::Wrapper(-2147467261); /*0x520228*/
          LOBYTE(movementDestination) = (*(int (__stdcall **)(int))(*(_DWORD *)this->?[0] + 16))(this->?[0]); /*0x520236*/
          if ( !(_BYTE)movementDestination ) /*0x52023b*/
          {
            movementDestination = this->?; /*0x52023d*/
            if ( !movementDestination ) /*0x520245*/
              LOBYTE(movementDestination) = (*((char (__thiscall **)(InfantryClass *, _BYTE *, int, _DWORD))this->FootClass /*0x520254*/
                                             + 93))(
                                              this,
                                              &stru_A8EB00.?[1564],
                                              1,
                                              0);
          }
        }
      }
    }
  }
  return (char)movementDestination; /*0x52025a*/
}



// ==== 0x00520260  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_520260(TechnoClass *this)
{
  int v2; // eax
  _DWORD v4[3]; // [esp+4h] [ebp-Ch] BYREF

  v2 = *((_DWORD *)this + 373); /*0x520266*/
  if ( v2 && this->isInPlayfield[0] ) /*0x520270*/
    *(_BYTE *)(v2 + 130) = 1; /*0x52027a*/
  if ( *((_DWORD *)this + 373) ) /*0x520281*/
    return 0; /*0x520281*/
  if ( (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 388))(this) != 5 ) /*0x520298*/
    return 0; /*0x520298*/
  v4[0] = this->location[0]; /*0x5202a6*/
  v4[1] = this->location[1]; /*0x5202b2*/
  v4[2] = this->location[2]; /*0x5202b9*/
  if ( (unsigned __int8)Tactical::IsCellVisible((Tactical *)&dword_87F7E8, v4) ) /*0x5202c2*/
    return 0; /*0x5202e6*/
  (*(void (__thiscall **)(TechnoClass *))(this->vtable0 + 928))(this); /*0x5202cf*/
  (*(void (__thiscall **)(TechnoClass *))(this->vtable0 + 248))(this); /*0x5202d9*/
  return 1; /*0x5202e1*/
}



// ==== 0x005202F0  ObjectClass::ProcessTechnoSquadResponse  this=ObjectClass  sig=csp ====
char __thiscall ProcessTechnoSquadResponse(TechnoClass *this)
{
  int v2; // ecx
  ObjectClass *v3; // edi
  int *v4; // eax
  int vtable0; // edx
  int v6; // ebx
  int *v7; // eax
  _DWORD *v8; // ebx
  _DWORD *v9; // eax
  int *v10; // eax
  TeamClass *attachedTag; // ecx
  TechnoClass *v12; // ecx
  _DWORD *v14; // ebx
  _DWORD *v15; // eax
  int *v16; // eax
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
  int *v28; // eax
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

  if ( !*(_BYTE *)(this->health + 3781) ) /*0x5202ff*/
    return 0; /*0x5202ff*/
  v2 = *((_DWORD *)this + 361); /*0x52030d*/
  if ( !v2 ) /*0x520315*/
    return 0; /*0x520315*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 44))(v2) != 1 ) /*0x520323*/
    return 0; /*0x520323*/
  v3 = (ObjectClass *)*((_DWORD *)this + 361); /*0x520329*/
  if ( (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->owner, (int)v3) ) /*0x520336*/
    return 0; /*0x52033d*/
  v4 = (int *)(*(int (__thiscall **)(ObjectClass *, _DWORD *, TechnoClass *))(v3->vtable0 + 76))(v3, v40, this); /*0x52034d*/
  v37 = *v4; /*0x520352*/
  vtable0 = this->vtable0; /*0x520356*/
  v38 = v4[1]; /*0x52035b*/
  v6 = v4[2]; /*0x520361*/
  v7 = (int *)(*(int (__thiscall **)(TechnoClass *, _DWORD *))(vtable0 + 72))(this, v40); /*0x520369*/
  v37 = *v7; /*0x52036e*/
  v38 = v7[1]; /*0x520375*/
  if ( (int)abs32(v6 - v7[2]) >= dword_A8F240 /*0x5203f1*/
    || (v8 = (_DWORD *)(*(int (__thiscall **)(ObjectClass *, _DWORD *))(v3->vtable0 + 72))(v3, v40),
        v9 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, _BYTE *))(this->vtable0 + 72))(this, v41),
        v10 = Coord::Subtract((Coord *)v42, *v9 - *v8, v9[1] - v8[1], v9[2] - v8[2]),
        v37 = *v10,
        v38 = v10[1],
        v39 = v10[2],
        (int)Coord::Length((Coord *)&v37) >= 128) )
  {
    v14 = (_DWORD *)(*(int (__thiscall **)(ObjectClass *, _DWORD *))(v3->vtable0 + 72))(v3, v42); /*0x52048b*/
    v15 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, _BYTE *))(this->vtable0 + 72))(this, v41); /*0x520494*/
    v16 = Coord::Subtract((Coord *)v40, *v15 - *v14, v15[1] - v14[1], v15[2] - v14[2]); /*0x5204b4*/
    v37 = *v16; /*0x5204bb*/
    v38 = v16[1]; /*0x5204c6*/
    v39 = v16[2]; /*0x5204cd*/
    v17 = (int)Coord::Length((Coord *)&v37) < 512; /*0x5204d6*/
    v18 = *((_DWORD *)this + 413); /*0x5204db*/
    if ( v17 ) /*0x5204e1*/
    {
      if ( !v18 ) /*0x5204e9*/
        WinAPI::Wrapper(-2147467261); /*0x5204f0*/
      v19 = (int *)(*(int (__stdcall **)(_DWORD, _DWORD *))(**((_DWORD **)this + 413) + 20))( /*0x520503*/
                     *((_DWORD *)this + 413),
                     v42);
      v20 = *v19; /*0x520506*/
      v21 = v19[1]; /*0x52050e*/
      v22 = v19[2]; /*0x520511*/
      if ( v20 != dword_A8F200 || v21 != dword_A8F204 || v22 != dword_A8F208 ) /*0x520526*/
      {
        if ( !*((_DWORD *)this + 413) ) /*0x52052c*/
          WinAPI::Wrapper(-2147467261); /*0x52053b*/
        v23 = (int *)(*(int (__stdcall **)(_DWORD, _DWORD *))(**((_DWORD **)this + 413) + 20))( /*0x52054e*/
                       *((_DWORD *)this + 413),
                       v42);
        v24 = *v23; /*0x520551*/
        v25 = v23[1]; /*0x520553*/
        v26 = v3->vtable0; /*0x520559*/
        v39 = v23[2]; /*0x52055b*/
        v27 = (_DWORD *)(*(int (__thiscall **)(ObjectClass *, _BYTE *))(v26 + 72))(v3, v41); /*0x520566*/
        v28 = Coord::Subtract((Coord *)v40, *v27 - v24, v27[1] - v25, v27[2] - v39); /*0x520582*/
        v37 = *v28; /*0x520589*/
        v38 = v28[1]; /*0x520594*/
        v39 = v28[2]; /*0x52059b*/
        if ( (int)Coord::Length((Coord *)&v37) <= 128 ) /*0x5205a9*/
          return 0; /*0x5205a9*/
      }
      (*(void (__thiscall **)(TechnoClass *, _DWORD, int))(this->vtable0 + 1152))(this, *((_DWORD *)this + 361), 1); /*0x5205bc*/
    }
    else
    {
      if ( !v18 ) /*0x5205c9*/
        WinAPI::Wrapper(-2147467261); /*0x5205d0*/
      v29 = (int *)(*(int (__stdcall **)(_DWORD, _DWORD *))(**((_DWORD **)this + 413) + 20))( /*0x5205e3*/
                     *((_DWORD *)this + 413),
                     v42);
      v30 = *v29; /*0x5205e6*/
      v31 = v29[1]; /*0x5205ee*/
      v32 = v29[2]; /*0x5205f1*/
      if ( v30 != dword_A8F200 || v31 != dword_A8F204 || v32 != dword_A8F208 ) /*0x520606*/
      {
        if ( !*((_DWORD *)this + 413) ) /*0x52060c*/
          WinAPI::Wrapper(-2147467261); /*0x52061b*/
        v33 = (_DWORD *)(*(int (__stdcall **)(_DWORD, _DWORD *))(**((_DWORD **)this + 413) + 20))( /*0x52062e*/
                          *((_DWORD *)this + 413),
                          v42);
        v34 = *v33 / 256; /*0x52065a*/
        v35 = v33[1] / 256; /*0x52065d*/
        v36 = (_DWORD *)(*(int (__thiscall **)(ObjectClass *, _BYTE *, TechnoClass *))(v3->vtable0 + 76))(v3, v41, this); /*0x520663*/
        if ( (unsigned __int16)(*v36 / 256) == (_WORD)v34 && (unsigned __int16)(v36[1] / 256) == (_WORD)v35 ) /*0x52068c*/
          return 0; /*0x52068c*/
      }
    }
    (*(void (__thiscall **)(TechnoClass *, _DWORD, int))(this->vtable0 + 1152))(this, *((_DWORD *)this + 361), 1); /*0x52069b*/
    return 0; /*0x5206a4*/
  }
  attachedTag = (TeamClass *)v3->attachedTag; /*0x5203f7*/
  if ( attachedTag ) /*0x5203fc*/
    TeamClass::Update_0(attachedTag, 1, (int)this, dword_A8F1E0, 0, 0); /*0x52040c*/
  (*(void (__thiscall **)(ObjectClass *, int))(v3->vtable0 + 628))(v3, 3); /*0x520417*/
  (*(void (__thiscall **)(ObjectClass *, _DWORD))(v3->vtable0 + 220))(v3, 0); /*0x520423*/
  v12 = (TechnoClass *)this->attachedTag; /*0x520429*/
  if ( v12 ) /*0x52042e*/
  {
    if ( (unsigned __int8)TechnoClass::HasAnyMission(v12) ) /*0x520430*/
      ObjectClass::SetReference(v3, this->attachedTag); /*0x52043f*/
  }
  (*(void (__thiscall **)(ObjectClass *, int, int))(v3->vtable0 + 980))(v3, this->owner, 1); /*0x520451*/
  v3[4].parachute = *(_DWORD *)(this->health + 3576); /*0x520465*/
  (*(void (__thiscall **)(TechnoClass *))(this->vtable0 + 248))(this); /*0x52046d*/
  return 1; /*0x520473*/
}



// ==== 0x005206B0  ObjectClass::FireTechnoAtTarget  this=ObjectClass  sig=csp ====
void __thiscall FireTechnoAtTarget(TechnoClass *this)
{
  int target; // eax
  int m_Data; // edi
  char v4; // al
  int v5; // eax
  BuildingClass *v6; // esi
  int v9; // ecx
  int v10; // eax
  bool v11; // bl
  int v12; // eax
  int *v13; // eax
  _DWORD *v14; // eax
  char v15; // cl
  int v16; // edx
  int v17; // esi
  char v18; // al
  int v19; // eax
  _DWORD *v20; // eax
  CellClass *v21; // eax
  int v22; // [esp+2Ch] [ebp-38h]
  StreamClass v23; // [esp+3Ch] [ebp-28h] BYREF
  int v24; // [esp+50h] [ebp-14h]
  _BYTE v25[16]; // [esp+54h] [ebp-10h] BYREF

  target = this->target; /*0x5206b7*/
  if ( !target ) /*0x5206bf*/
  {
    *((_BYTE *)this + 1677) = 0; /*0x520ad2*/
    return; /*0x520ad2*/
  }
  m_Data = (*(int (__thiscall **)(TechnoClass *, int))(this->vtable0 + 740))(this, target); /*0x5206d0*/
  v4 = *((_BYTE *)this + 1677); /*0x5206d2*/
  v23.m_Data = m_Data; /*0x5206da*/
  if ( !v4 ) /*0x5206de*/
  {
    v5 = (*(int (__thiscall **)(TechnoClass *, int, int, int))(this->vtable0 + 960))(this, this->target, m_Data, 1); /*0x5206f3*/
    if ( v5 ) /*0x5206fb*/
    {
      if ( v5 == 5 ) /*0x520704*/
      {
        if ( TechnoClass::GetValue(this, m_Data) < 0 ) /*0x52072b*/
        {
          v6 = (BuildingClass *)this->target; /*0x520731*/
          if ( !v6 ) /*0x520739*/
            goto LABEL_12; /*0x520739*/
          if ( (v6->abstractFlags & 2) == 0 ) /*0x52073f*/
            goto LABEL_12; /*0x52073f*/
          if ( (*(int (__thiscall **)(int))(v6->vtable0 + 44))(this->target) != 15 ) /*0x52074b*/
            goto LABEL_12; /*0x52074b*/
          BuildingClass::GetHealthRatio(v6); /*0x52074f*/
          _ECX = dword_8871E0; /*0x520754*/
          __asm /*0x52075a*/
          {
            fcomp qword ptr [ecx+16F8h]
            fnstsw ax
          }
          if ( (_AX & 0x100) == 0 ) /*0x520765*/
LABEL_12:
            (*(void (__thiscall **)(TechnoClass *, _DWORD))(this->vtable0 + 968))(this, 0); /*0x520772*/
        }
      }
      else if ( v5 == 9 ) /*0x520709*/
      {
        (*(void (__thiscall **)(TechnoClass *, _DWORD))(this->vtable0 + 1116))(this, 0); /*0x520716*/
      }
      goto LABEL_46; /*0x52071c*/
    }
    if ( *(_BYTE *)(this->health + 3476) ) /*0x520795*/
    {
      v9 = *((_DWORD *)this + 413); /*0x5207a3*/
      *(_DWORD *)v23.__pad_0 = 0; /*0x5207b1*/
      if ( !v9 ) /*0x5207b9*/
        goto LABEL_20; /*0x5207b9*/
      v10 = StreamClass::Set2(&v23, (_DWORD *)this + 413); /*0x5207c0*/
      if ( v10 < 0 && v10 != -2147467262 ) /*0x5207ce*/
        WinAPI::Wrapper(v10); /*0x5207d1*/
      if ( !*(_DWORD *)v23.__pad_0 ) /*0x5207dc*/
LABEL_20:
        WinAPI::Wrapper(-2147467261); /*0x5207e3*/
      (*(void (__stdcall **)(_DWORD, _BYTE *))(**(_DWORD **)v23.__pad_0 + 12))(*(_DWORD *)v23.__pad_0, v25); /*0x5207f5*/
      v11 = memcmp(v25, &g_CLSID_JumpjetLocomotion, 0x10u) == 0; /*0x52080e*/
      if ( *(_DWORD *)v23.__pad_0 ) /*0x520813*/
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)v23.__pad_0 + 8))(*(_DWORD *)v23.__pad_0); /*0x520818*/
      if ( v11 ) /*0x52081e*/
      {
        (*(void (__thiscall **)(TechnoClass *, int, _DWORD, _DWORD))(this->vtable0 + 1368))(this, 26, 0, 0); /*0x52082b*/
        m_Data = v23.m_Data; /*0x520831*/
        goto LABEL_44; /*0x520835*/
      }
      m_Data = v23.m_Data; /*0x52083a*/
    }
    v12 = *((_DWORD *)this + 433); /*0x52083e*/
    if ( v12 == 27 || v12 == 28 || v12 == 29 || v12 == 30 ) /*0x520856*/
    {
      (*(void (__thiscall **)(TechnoClass *, int, _DWORD, _DWORD))(this->vtable0 + 1368))(this, 29, 0, 0); /*0x520861*/
      goto LABEL_44; /*0x520861*/
    }
    if ( this->airstrike && (v12 == 40 || v12 == 41) ) /*0x520878*/
    {
      this->animation[0] = 0; /*0x52087a*/
      goto LABEL_44; /*0x520884*/
    }
    if ( !m_Data ) /*0x520888*/
      goto LABEL_73; /*0x520888*/
    if ( *((_BYTE *)this + 1755) && *(_DWORD *)(*(_DWORD *)(this->health + 3644) + 1480) ) /*0x5208a0*/
    {
      (*(void (__thiscall **)(TechnoClass *, int, _DWORD, _DWORD))(this->vtable0 + 1368))(this, 41, 0, 0); /*0x5208b3*/
      goto LABEL_44; /*0x5208b3*/
    }
    if ( *(_DWORD *)(*(_DWORD *)(this->health + 3644) + 1444) ) /*0x5208c1*/
    {
      (*(void (__thiscall **)(TechnoClass *, int, _DWORD, _DWORD))(this->vtable0 + 1368))(this, 40, 0, 0); /*0x5208d4*/
    }
    else
    {
LABEL_73:
      if ( *((_BYTE *)this + 1755) ) /*0x5208d6*/
        (*(void (__thiscall **)(TechnoClass *, int, _DWORD, _DWORD))(this->vtable0 + 1368))(this, 8, 0, 0); /*0x5208eb*/
      else
        (*(void (__thiscall **)(TechnoClass *, int, _DWORD, _DWORD))(this->vtable0 + 1368))(this, 4, 0, 0); /*0x5208fe*/
    }
LABEL_44:
    v22 = this->target; /*0x520904*/
    *((_BYTE *)this + 1677) = 1; /*0x520912*/
    v13 = ObjectClass::CalcTargetFacing(this, &v23.m_Position, v22); /*0x520919*/
    FacingClass::Set_SyncLog((char *)this->primaryFacing, v13); /*0x520925*/
    if ( this->target == *((_DWORD *)this + 361) ) /*0x520938*/
    {
      FootClass::ClearPathIndex((FootClass *)this); /*0x52093c*/
      (*(void (__thiscall **)(TechnoClass *))(this->vtable0 + 1280))(this); /*0x520946*/
    }
  }
LABEL_46:
  v14 = (_DWORD *)this->health; /*0x52094c*/
  v15 = *((_BYTE *)this + 1755); /*0x520952*/
  v16 = v14[912]; /*0x52095a*/
  if ( v15 ) /*0x520960*/
    v16 = v14[913]; /*0x520962*/
  if ( m_Data ) /*0x52096a*/
  {
    if ( v15 ) /*0x52096e*/
    {
      if ( *(_DWORD *)(v14[911] + 1480) ) /*0x520976*/
        v16 = v14[915]; /*0x520980*/
    }
    else if ( *(_DWORD *)(v14[911] + 1444) ) /*0x520990*/
    {
      v16 = v14[914]; /*0x52099a*/
    }
  }
  if ( *((_BYTE *)this + 1677) && this->animation[0] == v16 ) /*0x5209b5*/
  {
    v17 = (*(int (__thiscall **)(TechnoClass *, int))(this->vtable0 + 740))(this, this->target); /*0x5209d0*/
    if ( (*(int (__thiscall **)(TechnoClass *, int, int, int))(this->vtable0 + 960))(this, this->target, v17, 1) ) /*0x5209de*/
    {
      v18 = *((_BYTE *)this + 1755); /*0x5209fd*/
      *((_BYTE *)this + 1677) = 0; /*0x520a03*/
      if ( v18 ) /*0x520a0c*/
      {
        (*(void (__thiscall **)(TechnoClass *, int, _DWORD, _DWORD))(this->vtable0 + 1368))(this, 2, 0, 0); /*0x520a17*/
      }
      else
      {
        v19 = *((_DWORD *)this + 433); /*0x520a19*/
        if ( v19 == 27 || v19 == 28 || v19 == 29 || v19 == 30 ) /*0x520a31*/
          (*(void (__thiscall **)(TechnoClass *, int, _DWORD, _DWORD))(this->vtable0 + 1368))(this, 28, 0, 0); /*0x520a3e*/
        else
          (*(void (__thiscall **)(TechnoClass *, _DWORD, _DWORD, _DWORD))(this->vtable0 + 1368))(this, 0, 0, 0); /*0x520a51*/
      }
    }
    else
    {
      (*(void (__thiscall **)(TechnoClass *, int, int))(this->vtable0 + 972))(this, this->target, v17); /*0x5209f5*/
    }
    if ( this->target ) /*0x520a57*/
    {
      if ( *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(TechnoClass *, _DWORD))(this->vtable0 + 1016))(this, 0) + 168) < dword_8871E0->URepairRate[0] ) /*0x520a83*/
      {
        v23.m_Size = this->location[0]; /*0x520a93*/
        v23.StreamClass_field_0C = this->location[1]; /*0x520a9f*/
        v24 = this->location[2]; /*0x520aab*/
        v20 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this->target + 72))(this->target, v25); /*0x520ab7*/
        v21 = Coord::To_Cell((Coord *)&dword_87F7E8, v20); /*0x520ac0*/
        Cell::ApplyDamage((Cell *)v21, (int)&v23.m_Size, 1, 0, 0); /*0x520ac7*/
      }
    }
  }
}



// ==== 0x00520AE0  Mission::ExecuteTechnoMissionAction  this=Mission  sig=csp ====
int __thiscall Mission::ExecuteTechnoMissionAction(Mission *this)
{
  int v2; // eax
  int v3; // ecx
  AnimClass *v4; // ebp
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
  int v18; // [esp+14h] [ebp-1Ch] BYREF
  _DWORD v19[3]; // [esp+18h] [ebp-18h] BYREF
  char v20; // [esp+24h] [ebp-Ch] BYREF

  v2 = *(_DWORD *)&this->__pad_5B8[268]; /*0x520ae9*/
  if ( v2 == -1 /*0x520b0d*/
    || *(_DWORD *)&this->__pad_C[236] >= *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&this->__pad_5B8[264] + 3644) + 36 * v2 + 4) )
  {
    switch ( v2 ) /*0x520b27*/
    {
      case 11: /*0x520b27*/
      case 12: /*0x520b27*/
      case 13: /*0x520b27*/
      case 14: /*0x520b27*/
      case 15: /*0x520b27*/
        v3 = *(_DWORD *)&this->__pad_5B8[264]; /*0x520bc6*/
        if ( *(_DWORD *)&this->__pad_C[236] < *(_DWORD *)(*(_DWORD *)(v3 + 3644) + 36 * v2 + 4) ) /*0x520bdf*/
          break; /*0x520bdf*/
        if ( *(int *)(v3 + 3680) > 0 ) /*0x520bed*/
        {
          v4 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x520bf9*/
          if ( !v4 ) /*0x520c00*/
            goto LABEL_20; /*0x520c00*/
          v5 = (unsigned int)Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) /*0x520c2d*/
             % *(_DWORD *)(*(_DWORD *)&this->__pad_5B8[264] + 3680);
          v6 = (char *)v19; /*0x520c37*/
          v7 = *(void **)(*(_DWORD *)(*(_DWORD *)&this->__pad_5B8[264] + 3668) + 4 * v5); /*0x520c3b*/
          v8 = *(_DWORD *)this->__pad_0; /*0x520c3e*/
          goto LABEL_19; /*0x520c40*/
        }
        if ( !*(_BYTE *)(v3 + 3757) ) /*0x520c42*/
        {
          v4 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x520c56*/
          if ( v4 ) /*0x520c5d*/
          {
            v7 = *(void **)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 292) /*0x520c91*/
                          + 4
                          * ((unsigned int)Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)
                           % *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 304)));
            v8 = *(_DWORD *)this->__pad_0; /*0x520c94*/
            v6 = &v20; /*0x520c96*/
LABEL_19:
            v9 = (int *)(*(int (__thiscall **)(Mission *, char *))(v8 + 72))(this, v6); /*0x520c9a*/
            AnimClass::ctor(v4, v7, v9, 0, 1, (void *)0x600, 0, 0); /*0x520ca4*/
          }
        }
LABEL_20:
        (*(void (__thiscall **)(Mission *))(*(_DWORD *)this->__pad_0 + 248))(this); /*0x520ca9*/
        break; /*0x520cb3*/
      case 20: /*0x520b27*/
      case 21: /*0x520b27*/
      case 36: /*0x520b27*/
        if ( *(_DWORD *)&this->__pad_C[236] >= *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&this->__pad_5B8[264] + 3644) /*0x520cd1*/
                                                         + 36 * v2
                                                         + 4) )
          (*(void (__thiscall **)(Mission *))(*(_DWORD *)this->__pad_0 + 248))(this); /*0x520cdb*/
        break; /*0x520ce1*/
      case 27: /*0x520b27*/
        (*(void (__thiscall **)(Mission *, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))(this, 28, 1, 0); /*0x520b38*/
        if ( !*(_BYTE *)(*(_DWORD *)&this->__pad_5B8[264] + 3785) ) /*0x520b44*/
          this->__pad_18C[280] = 1; /*0x520b4e*/
        Mission::GetMissionDelay(this); /*0x520b57*/
        break; /*0x520b5c*/
      case 31: /*0x520b27*/
        (*(void (__thiscall **)(Mission *, _DWORD, int, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))(this, 0, 1, 0); /*0x520b93*/
        if ( !*(_BYTE *)(*(_DWORD *)&this->__pad_5B8[264] + 3785) ) /*0x520b9f*/
          this->__pad_18C[280] = 0; /*0x520bad*/
        break; /*0x520bb4*/
      case 33: /*0x520b27*/
        break;
      case 34: /*0x520b27*/
        (*(void (__thiscall **)(Mission *, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))(this, 35, 1, 0); /*0x520bc1*/
        break; /*0x520bc1*/
      case 38: /*0x520b27*/
        if ( (*(int (__thiscall **)(Mission *))(*(_DWORD *)this->__pad_0 + 388))(this) != 10 ) /*0x520b6e*/
          goto LABEL_51; /*0x520b6e*/
        (*(void (__thiscall **)(Mission *, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))(this, 38, 1, 0); /*0x520b7e*/
        break; /*0x520b84*/
      default:
        if ( v2 != -1 ) /*0x520ce9*/
        {
          v10 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&this->__pad_5B8[264] + 3644) + 36 * v2 + 12); /*0x520cfa*/
          if ( v10 != -1 ) /*0x520d01*/
          {
            LOWORD(v18) = (_WORD)v10 << 13; /*0x520d11*/
            FacingClass::Set_SyncLog(&this->__pad_18C[508], &v18); /*0x520d16*/
          }
        }
        if ( !*(_DWORD *)&this->__pad_5B8[188] ) /*0x520d1b*/
          WinAPI::Wrapper(-2147467261); /*0x520d2a*/
        if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)&this->__pad_5B8[188] + 16))(*(_DWORD *)&this->__pad_5B8[188]) /*0x520d50*/
          && *(double *)&this->__pad_18C[1004] > 0.1 )
        {
          if ( this->__pad_5B8[291] ) /*0x520d52*/
            (*(void (__thiscall **)(Mission *, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))(this, 6, 1, 0); /*0x520d66*/
          else
            (*(void (__thiscall **)(Mission *, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))(this, 3, 1, 0); /*0x520d79*/
        }
        else
        {
          v11 = *(_DWORD *)&this->__pad_5B8[268]; /*0x520d7e*/
          if ( v11 != 40 && v11 != 41 || !*(_DWORD *)&this->__pad_18C[264] || !*(_DWORD *)&this->__pad_18C[296] ) /*0x520d98*/
            goto LABEL_44; /*0x520d98*/
          if ( !*(_DWORD *)&this->__pad_5B8[188] ) /*0x520da2*/
            WinAPI::Wrapper(-2147467261); /*0x520db1*/
          if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)&this->__pad_5B8[188] + 16))(*(_DWORD *)&this->__pad_5B8[188]) ) /*0x520dbf*/
          {
            if ( this->__pad_5B8[291] ) /*0x520dc6*/
              (*(void (__thiscall **)(Mission *, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))(this, 41, 1, 0); /*0x520dda*/
            else
              (*(void (__thiscall **)(Mission *, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))(this, 40, 1, 0); /*0x520df3*/
            this->__pad_5B8[213] = 0; /*0x520de0*/
          }
          else
          {
LABEL_44:
            v12 = *(_DWORD *)&this->__pad_5B8[268]; /*0x520e02*/
            if ( v12 == 27 || v12 == 28 || v12 == 29 || v12 == 30 ) /*0x520e1a*/
            {
              (*(void (__thiscall **)(Mission *, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))(this, 28, 1, 0); /*0x520e24*/
            }
            else if ( this->__pad_5B8[291] ) /*0x520e26*/
            {
              (*(void (__thiscall **)(Mission *, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))(this, 2, 1, 0); /*0x520e3a*/
            }
            else
            {
LABEL_51:
              (*(void (__thiscall **)(Mission *, _DWORD, int, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))(this, 0, 1, 0); /*0x520e42*/
            }
          }
        }
        break; /*0x520d6c*/
    }
  }
  if ( *(_DWORD *)&this->__pad_5B8[268] == 33 && !this->__pad_C[129] ) /*0x520e5b*/
    (*(void (__thiscall **)(Mission *, _DWORD, int, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))(this, 0, 1, 0); /*0x520e6f*/
  v13 = 0; /*0x520e81*/
  v14 = *(_DWORD *)(*(_DWORD *)&this->__pad_5B8[264] + 3644) + 36 * *(_DWORD *)&this->__pad_5B8[268]; /*0x520e8c*/
  result = *(_DWORD *)(v14 + 16); /*0x520e8f*/
  if ( result > 0 ) /*0x520e95*/
  {
    v16 = (int *)(v14 + 24); /*0x520e97*/
    do /*0x520ef2*/
    {
      if ( this->__pad_C[240] ) /*0x520e9a*/
      {
        v17 = *(_DWORD *)(v14 + 4); /*0x520eaa*/
        if ( v17 <= 1 ) /*0x520eac*/
          v17 = 1; /*0x520eae*/
        if ( *(_DWORD *)&this->__pad_C[236] % v17 == *(v16 - 1) ) /*0x520ebf*/
        {
          v19[0] = *(_DWORD *)&this->__pad_C[144]; /*0x520ecb*/
          v19[1] = *(_DWORD *)&this->__pad_C[148]; /*0x520ed6*/
          v19[2] = *(_DWORD *)&this->__pad_C[152]; /*0x520edd*/
          StartAudioControllerAt(*v16, v19, 0); /*0x520ee4*/
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



// ==== 0x00520F40  Mission::ProcessUnitMissionAI  this=Mission  sig=csp ====
char __thiscall Mission::ProcessUnitMissionAI(Mission *this)
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
  int (__stdcall ***v12)(_DWORD, void *, __int16 *); // eax
  int v13; // esi
  int v14; // eax
  int v15; // edi
  bool v16; // bl
  int v17; // eax
  int v19; // [esp+4Ch] [ebp-30h]
  int v20; // [esp+58h] [ebp-24h]
  __int16 v21; // [esp+5Ch] [ebp-20h] BYREF
  int v22; // [esp+60h] [ebp-1Ch] BYREF
  __int16 v23[2]; // [esp+64h] [ebp-18h] BYREF
  __int16 v24[2]; // [esp+68h] [ebp-14h] BYREF
  char v25[16]; // [esp+6Ch] [ebp-10h] BYREF

  if ( (*(int (__thiscall **)(Mission *))(*(_DWORD *)this->__pad_0 + 388))(this) == 2 ) /*0x520f53*/
  {
    if ( !*(_DWORD *)&this->__pad_5B8[188] ) /*0x520f55*/
      WinAPI::Wrapper(-2147467261); /*0x520f64*/
    if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)&this->__pad_5B8[188] + 16))(*(_DWORD *)&this->__pad_5B8[188]) ) /*0x520f72*/
    {
      v2 = *(_DWORD *)&this->__pad_18C[1048]; /*0x520f79*/
      v3 = *(_DWORD *)this->__pad_0; /*0x520f7f*/
      if ( v2 ) /*0x520f86*/
      {
        (*(void (__thiscall **)(Mission *, int, int))(v3 + 1152))(this, v2, 1); /*0x520f97*/
        (*(void (__thiscall **)(Mission *, _DWORD, int))(*(_DWORD *)this->__pad_0 + 1348))(this, 0, 1072693248); /*0x520fa9*/
      }
      else
      {
        (*(void (__thiscall **)(Mission *, _DWORD, int))(v3 + 1156))(this, 0, 1); /*0x520f8c*/
      }
    }
  }
  v4 = *(_DWORD *)&this->__pad_18C[1048]; /*0x520faf*/
  if ( v4 ) /*0x520fb7*/
  {
    v5 = (_DWORD *)(*(int (__thiscall **)(int, char *, Mission *))(*(_DWORD *)v4 + 76))(v4, v25, this); /*0x520fc5*/
    LOWORD(v22) = *v5 / 256; /*0x520fd8*/
    HIWORD(v22) = v5[1] / 256; /*0x520fec*/
    LOBYTE(v5) = this->__pad_5B8[292]; /*0x520ff1*/
    *(_DWORD *)v23 = v22; /*0x520ffd*/
    if ( !(_BYTE)v5 /*0x521022*/
      || (v6 = *(_DWORD *)this->__pad_0,
          v7 = (*(int (__thiscall **)(Mission *, int, int, _DWORD, int))(*(_DWORD *)this->__pad_0 + 452))(
                 this,
                 -1,
                 -1,
                 0,
                 1),
          (*(int (__thiscall **)(Mission *, int))(v6 + 428))(this, v7) != 7) )
    {
      if ( !*(_DWORD *)&this->__pad_5B8[188] ) /*0x521028*/
        WinAPI::Wrapper(-2147467261); /*0x521037*/
      if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)&this->__pad_5B8[188] + 16))(*(_DWORD *)&this->__pad_5B8[188]) /*0x521050*/
        && !this->__pad_18C[652] )
      {
        if ( *(_DWORD *)&this->__pad_18C[1048] ) /*0x52105e*/
        {
          if ( this->__pad_18C[585] ) /*0x52106c*/
          {
            v8 = (_DWORD *)(*(int (__thiscall **)(Mission *))(*(_DWORD *)this->__pad_0 + 76))(this); /*0x521086*/
            LOWORD(v20) = *v8 / 256; /*0x521099*/
            HIWORD(v20) = v8[1] / 256; /*0x5210af*/
            v9 = *(_DWORD *)this->__pad_0; /*0x5210b8*/
            v22 = v20; /*0x5210bb*/
            v19 = (*(int (__thiscall **)(Mission *))(v9 + 800))(this); /*0x5210c9*/
            v10 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], &v21) + 80) >> 8; /*0x5210de*/
            LOBYTE(v10) = v10 & 1; /*0x5210e1*/
            v11 = (*(int (__thiscall **)(Mission *, _DWORD, int, int))(*(_DWORD *)this->__pad_0 + 188))( /*0x5210e9*/
                    this,
                    0,
                    v10,
                    v19);
            if ( !MapSeed::CheckTileMatch( /*0x521133*/
                    (MapSeed *)&stru_87F5F0.__pad_58[416],
                    v24,
                    v23,
                    *(_DWORD *)(*(_DWORD *)&this->__pad_5B8[264] + 1460),
                    v11,
                    (char)v25,
                    0)
              && !*(_BYTE *)(*(_DWORD *)&this->__pad_5B8[264] + 3774)
              && (*(int (__thiscall **)(Mission *))(*(_DWORD *)this->__pad_0 + 388))(this) != 7 )
            {
              (*(void (__thiscall **)(Mission *, _DWORD, int))(*(_DWORD *)this->__pad_0 + 1152))(this, 0, 1); /*0x52113e*/
            }
          }
        }
      }
    }
  }
  if ( !*(_DWORD *)&this->__pad_5B8[188] ) /*0x521144*/
    WinAPI::Wrapper(-2147467261); /*0x521153*/
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)&this->__pad_5B8[188] + 168))(*(_DWORD *)&this->__pad_5B8[188]) ) /*0x521161*/
  {
    if ( !*(_BYTE *)(*(_DWORD *)&this->__pad_5B8[264] + 3476) ) /*0x521175*/
      goto LABEL_55; /*0x521175*/
    v12 = *(int (__stdcall ****)(_DWORD, void *, __int16 *))&this->__pad_5B8[188]; /*0x521183*/
    v22 = 0; /*0x52118d*/
    if ( !v12 ) /*0x521195*/
      goto LABEL_33; /*0x521195*/
    v13 = (**v12)(v12, &unk_818858, v24); /*0x5211a6*/
    if ( v13 >= 0 ) /*0x5211aa*/
    {
      v15 = *(_DWORD *)v24; /*0x5211b9*/
      ComPtr::Release_Alt((ComPtr *)&v22); /*0x5211c1*/
      v14 = v15; /*0x5211c6*/
    }
    else
    {
      ComPtr::Release_Alt((ComPtr *)&v22); /*0x5211b0*/
      v14 = 0; /*0x5211b5*/
    }
    v22 = v14; /*0x5211ca*/
    if ( v13 < 0 && v13 != -2147467262 ) /*0x5211d6*/
      WinAPI::Wrapper(v13); /*0x5211d9*/
    if ( !v14 ) /*0x5211e4*/
LABEL_33:
      WinAPI::Wrapper(-2147467261); /*0x5211eb*/
    (*(void (__stdcall **)(int, char *))(*(_DWORD *)v14 + 12))(v14, v25); /*0x5211fc*/
    v16 = memcmp(v25, &g_CLSID_JumpjetLocomotion, 0x10u) == 0; /*0x521215*/
    if ( v22 ) /*0x52121a*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v22 + 8))(v22); /*0x52121f*/
    if ( v16 ) /*0x521226*/
    {
      LOBYTE(v17) = this->__pad_5B8[213]; /*0x521228*/
      if ( !(_BYTE)v17 ) /*0x521230*/
      {
        if ( *(double *)&this->__pad_18C[1004] <= 0.8 ) /*0x521247*/
          LOBYTE(v17) = (*(char (__thiscall **)(Mission *, int, _DWORD, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))( /*0x52126b*/
                          this,
                          23,
                          0,
                          0);
        else
          LOBYTE(v17) = (*(char (__thiscall **)(Mission *, int, _DWORD, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))( /*0x521254*/
                          this,
                          24,
                          0,
                          0);
      }
    }
    else
    {
LABEL_55:
      if ( this->__pad_5B8[291] ) /*0x521277*/
        LOBYTE(v17) = (*(char (__thiscall **)(Mission *, int, _DWORD, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))( /*0x52128c*/
                        this,
                        6,
                        0,
                        0);
      else
        LOBYTE(v17) = (*(char (__thiscall **)(Mission *, int, _DWORD, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))( /*0x5212a3*/
                        this,
                        3,
                        0,
                        0);
    }
  }
  else
  {
    v17 = *(_DWORD *)&this->__pad_5B8[268]; /*0x5212af*/
    switch ( v17 ) /*0x5212c2*/
    {
      case 3: /*0x5212c2*/
      case 24: /*0x5212c2*/
      case 23: /*0x5212c2*/
        LOBYTE(v17) = (*(char (__thiscall **)(Mission *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))( /*0x521307*/
                        this,
                        0,
                        0,
                        0);
        break;
      case 6: /*0x5212c2*/
        LOBYTE(v17) = (*(char (__thiscall **)(Mission *, int, _DWORD, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))( /*0x5212d4*/
                        this,
                        2,
                        0,
                        0);
        break;
      case 17: /*0x5212c2*/
        LOBYTE(v17) = (*(char (__thiscall **)(Mission *, int, _DWORD, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))( /*0x5212f0*/
                        this,
                        16,
                        0,
                        0);
        break;
    }
  }
  return v17; /*0x52125a*/
}



// ==== 0x00521320  InfantryClass::GetIdleTimer  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::GetIdleTimer(InfantryClass *this)
{
  int v2; // eax
  InfantryTypeClass *v3; // eax
  __int16 *v5; // eax
  Concurrency::details::SchedulerBase *v6; // eax
  CellClass *NumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ; // edi
  int v8; // ecx
  void (__thiscall **vtable0)(InfantryClass *, void *); // edi
  __int16 *v10; // eax
  void *v11; // eax
  char *v12; // eax
  int v13; // eax
  char *v14; // eax
  int v15; // eax
  House *v16; // eax
  InfantryTypeClass *Type; // eax
  _DWORD *v18; // eax
  int v19; // edi
  int v20; // ebx
  int *v21; // eax
  int v22; // kr0C_4
  int v23; // eax
  char *MissionControl; // eax
  int v25; // eax
  _BYTE v26[4]; // [esp+Ch] [ebp-1Ch] BYREF
  _BYTE v27[12]; // [esp+10h] [ebp-18h] BYREF
  _BYTE v28[12]; // [esp+1Ch] [ebp-Ch] BYREF

  v2 = this->SequenceAnim[0]; /*0x521328*/
  if ( v2 != 27 && v2 != 28 && v2 != 29 && v2 != 30 ) /*0x521340*/
  {
    v16 = (House *)(*((int (__thiscall **)(InfantryClass *))this->FootClass + 15))(this); /*0x5214fb*/
    if ( !(unsigned __int8)House::IsCurrentPlayer(v16) ) /*0x521500*/
    {
      Type = this->Type; /*0x52150d*/
      if ( Type->Deployer ) /*0x521513*/
      {
        if ( Type->? ) /*0x521521*/
        {
          if ( Type->? <= -1 /*0x521574*/
            && !this->?
            && this->?
             + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3632)
                         + 4 * *(_DWORD *)&this->?->__pad_13C[72]) < *(int *)&stru_A8EB00.?[416] )
          {
            if ( !this->? /*0x5215f3*/
              || (v18 = (_DWORD *)(*((int (__thiscall **)(InfantryClass *, _BYTE *))this->FootClass + 18))(this, v27),
                  v19 = *v18 / 256,
                  v20 = v18[1] / 256,
                  v21 = (int *)(*((int (__thiscall **)(AbstractClass *, _BYTE *))this->?->FootClass::TechnoClass::vtable0
                                + 18))(
                                 this->?,
                                 v28),
                  v22 = *v21,
                  v23 = v21[1] / 256,
                  (unsigned __int16)(v22 / 256) == (_WORD)v19)
              && (_WORD)v23 == (_WORD)v20 )
            {
              if ( !HIBYTE(this->Type->?[0]) ) /*0x5215ff*/
              {
                if ( !this->?[0] ) /*0x52160d*/
                  WinAPI::Wrapper(-2147467261); /*0x52161c*/
                if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->?[0] + 16))(this->?[0]) ) /*0x52162a*/
                {
                  if ( !this->?[0] ) /*0x52165a*/
                    WinAPI::Wrapper(-2147467261); /*0x521669*/
                  (*(void (__stdcall **)(int))(*(_DWORD *)this->?[0] + 72))(this->?[0]); /*0x521677*/
                  this->ShouldDeploy = 1; /*0x52167c*/
                  MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x521683*/
                  LOWORD(v25) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x521691*/
                  return v25 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x5216ad*/
                }
                else
                {
                  (*((void (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 27, 0, 0); /*0x52163b*/
                  return *(_DWORD *)(this->Type->Sequence[0] + 976); /*0x521650*/
                }
              }
            }
          }
        }
      }
    }
    return -1; /*0x5216b8*/
  }
  v3 = this->Type; /*0x521346*/
  if ( v3->? > -1 ) /*0x521353*/
  {
    (*((void (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 31, 0, 0); /*0x52135f*/
    return *(_DWORD *)(this->Type->Sequence[0] + 1120); /*0x52137d*/
  }
  if ( !v3->? ) /*0x521386*/
    return -1; /*0x521386*/
  if ( HIBYTE(v3->?[0]) ) /*0x52138c*/
  {
    v5 = (__int16 *)(*((int (__thiscall **)(InfantryClass *, _BYTE *))this->FootClass + 110))(this, v26); /*0x5213a3*/
    v6 = (Concurrency::details::SchedulerBase *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v5); /*0x5213af*/
    NumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ = (CellClass *)_GetNumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ(v6); /*0x5213c1*/
    v8 = *(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(InfantryClass *, int))this->FootClass + 254))(this, 1) + 344); /*0x5213cb*/
    if ( !NumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ /*0x5213ee*/
      || CellClass::GetOccupiedRatio(NumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ) < v8 / 3 )
    {
      vtable0 = (void (__thiscall **)(InfantryClass *, void *))this->FootClass; /*0x5213f4*/
      v10 = (__int16 *)(*((int (__thiscall **)(InfantryClass *, _BYTE *))this->FootClass + 110))(this, v26); /*0x5213fd*/
      v11 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v10); /*0x521409*/
      vtable0[242](this, v11); /*0x521411*/
      if ( !(*((int (__thiscall **)(InfantryClass *, AbstractClass *, int, int))this->FootClass + 240))( /*0x521426*/
              this,
              this->?,
              1,
              1) )
      {
        (*((void (__thiscall **)(InfantryClass *, AbstractClass *, int))this->FootClass + 243))(this, this->?, 1); /*0x52143d*/
        (*((void (__thiscall **)(InfantryClass *, _DWORD))this->FootClass + 242))(this, 0); /*0x521449*/
        (*((void (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 29, 0, 0); /*0x521459*/
        return *(_DWORD *)(this->Type->Sequence[0] + 1048); /*0x521477*/
      }
      (*((void (__thiscall **)(InfantryClass *, _DWORD))this->FootClass + 242))(this, 0); /*0x52147e*/
    }
    v12 = MissionClass::GetMissionControl((MissionClass *)this); /*0x521486*/
    LOWORD(v13) = Math::RoundToInt(*((double *)v12 + 2) * 900.0); /*0x521494*/
    return v13 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 10, 20); /*0x5214b0*/
  }
  else
  {
    (*((void (__thiscall **)(InfantryClass *))this->FootClass + 266))(this); /*0x5214bd*/
    v14 = MissionClass::GetMissionControl((MissionClass *)this); /*0x5214c5*/
    LOWORD(v15) = Math::RoundToInt(*((double *)v14 + 2) * 900.0); /*0x5214d3*/
    return v15 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x5214ee*/
  }
}



// ==== 0x005216C0  TechnoClass::GetThreatValue_0  this=InfantryClass  sig=csp ====
// attributes: thunk
int __thiscall TechnoClass::GetThreatValue_0(TechnoClass *this)
{
  return TechnoClass::GetThreatValue(this);
}



// ==== 0x005216D0  InfantryClass::CanMoveFreely  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::CanMoveFreely(InfantryClass *this)
{
  char result; // al
  unsigned int v3; // eax

  result = TechnoClass::IsTimerExpired((TechnoClass *)this); /*0x5216d3*/
  if ( result ) /*0x5216da*/
  {
    if ( !this->?[0] ) /*0x5216de*/
      WinAPI::Wrapper(-2147467261); /*0x5216ed*/
    if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->?[0] + 16))(this->?[0]) ) /*0x5216fb*/
    {
      return 0; /*0x521702*/
    }
    else if ( this->Crawling ) /*0x521706*/
    {
      return 0; /*0x521710*/
    }
    else if ( this->? ) /*0x521714*/
    {
      return 0; /*0x52171e*/
    }
    else
    {
      v3 = this->SequenceAnim[0]; /*0x521722*/
      return v3 != 27 && v3 != 28 && v3 != 29 && v3 != 30 && (v3 < 2 || v3 == 16); /*0x52173c*/
    }
  }
  return result; /*0x5216dc*/
}



// ==== 0x00521760  InfantryClass::ParachuteTo  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ParachuteTo(InfantryClass *this, int a2)
{
  int result; // eax

  result = ObjectClass::ParachuteDrop((IUnknown *)this); /*0x521768*/
  if ( (_BYTE)result ) /*0x52176f*/
  {
    if ( (unsigned __int8)House::IsCurrentPlayer((House *)this->?) ) /*0x521777*/
      (*((void (__thiscall **)(InfantryClass *, int, _DWORD))this->FootClass + 122))(this, 5, 0); /*0x521788*/
    else
      (*((void (__thiscall **)(InfantryClass *, int, _DWORD))this->FootClass + 122))(this, 15, 0); /*0x521798*/
    result = (*((int (__thiscall **)(InfantryClass *, int, int, _DWORD))this->FootClass + 342))(this, 33, 1, 0); /*0x5217a8*/
    LOBYTE(result) = 1; /*0x5217ae*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x5217b4*/
  }
  return result; /*0x5217b0*/
}



// ==== 0x005217C0  InfantryClass::MarkCellPassability  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::MarkCellPassability(InfantryClass *this, _DWORD *a2)
{
  char v3; // bp
  CellClass *v4; // esi
  int result; // eax

  v3 = Input::OffsetToDirection((Input *)a2); /*0x5217d7*/
  v4 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2); /*0x5217e4*/
  if ( *(_DWORD *)&stru_A8EB00.?[1616] + Cell::GetGroundHeight(a2) <= a2[2] && (v4->flags[0] & 0x100) != 0 ) /*0x521803*/
  {
    LOBYTE(v4->altOccupationFlags) |= 1 << v3; /*0x521813*/
    result = (*((int (__thiscall **)(InfantryClass *))this->FootClass + 14))(this); /*0x52181d*/
    v4->altInfantryOwnerIndex = result; /*0x521820*/
  }
  else
  {
    LOBYTE(v4->occupationFlags) |= 1 << v3; /*0x521838*/
    result = (*((int (__thiscall **)(InfantryClass *))this->FootClass + 14))(this); /*0x521842*/
    v4->infantryOwnerIndex = result; /*0x521845*/
  }
  return result; /*0x521823*/
}



// ==== 0x00521850  InfantryClass::ClearCellPassability  this=InfantryClass  sig=csp ====
int __stdcall InfantryClass::ClearCellPassability(InfantryClass *this)
{
  char v1; // bl
  CellClass *v2; // esi
  int v3; // ecx
  int result; // eax

  v1 = Input::OffsetToDirection((Input *)this); /*0x521864*/
  v2 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], this); /*0x521871*/
  v3 = Cell::GetGroundHeight(this) + *(_DWORD *)&stru_A8EB00.?[1616]; /*0x52187e*/
  result = (int)this->?; /*0x521880*/
  if ( v3 > result ) /*0x521885*/
  {
    LOBYTE(result) = ~(1 << v1) & LOBYTE(v2->occupationFlags); /*0x5218c0*/
    LOBYTE(v2->occupationFlags) = result; /*0x5218c2*/
    if ( (result & 0x1C) == 0 ) /*0x5218ca*/
      v2->infantryOwnerIndex = -1; /*0x5218cc*/
  }
  else
  {
    LOBYTE(result) = ~(1 << v1) & LOBYTE(v2->altOccupationFlags); /*0x521897*/
    LOBYTE(v2->altOccupationFlags) = result; /*0x521899*/
    if ( (result & 0x1C) == 0 ) /*0x5218a1*/
      v2->altInfantryOwnerIndex = -1; /*0x5218a3*/
  }
  return result; /*0x5218aa*/
}



// ==== 0x005218E0  InfantryClass::GetDeployWeaponIndex  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::GetDeployWeaponIndex(InfantryClass *this, int a2)
{
  InfantryTypeClass *Type; // ecx
  int v4; // eax

  Type = this->Type; /*0x5218e3*/
  if ( !Type->? ) /*0x5218e9*/
    return TechnoClass::SelectWeapon((TechnoClass *)this); /*0x521955*/
  v4 = this->SequenceAnim[0]; /*0x5218f3*/
  if ( v4 == 27 || v4 == 28 || v4 == 29 || v4 == 30 ) /*0x52190b*/
    return Type->?; /*0x52190d*/
  if ( !this->? || *(_DWORD *)((*((int (__thiscall **)(InfantryClass *))this->FootClass + 33))(this) + 3408) == -1 ) /*0x521932*/
    return 0; /*0x521948*/
  return *(_DWORD *)((*((int (__thiscall **)(InfantryClass *))this->FootClass + 33))(this) + 3408); /*0x521913*/
}



// ==== 0x00521960  InfantryClass::LoadFromStream  this=InfantryClass  sig=csp ====
int __stdcall InfantryClass::LoadFromStream(InfantryClass *this, LPSTREAM pStm)
{
  InfantryClass *v2; // esi
  void **p_vtable1; // ebx
  int v4; // eax
  signed int v5; // eax
  int v6; // ecx
  char *i; // eax
  _DWORD *v8; // eax
  int result; // eax
  int v10; // edi
  int v11; // ebp
  int v12; // edi
  int vtable2; // eax

  v2 = this; /*0x521962*/
  p_vtable1 = &this->?; /*0x52196a*/
  this = (InfantryClass *)(*((int (__stdcall **)(void **))this->? + 4))(&this->?); /*0x52197b*/
  v4 = BuildingTypeClass::Dequeue(&g_BuildingLoadQueue_Array, (int *)&this); /*0x52197f*/
  if ( v4 ) /*0x521986*/
  {
    v5 = (signed int)(v4 - (unsigned int)g_BuildingLoadQueue_Array.TechnoTypeClass) >> 3; /*0x52198e*/
    if ( v5 != -1 ) /*0x521994*/
    {
      v6 = v5 + 1; /*0x521996*/
      for ( i = (char *)g_BuildingLoadQueue_Array.?; /*0x5219a0*/
            v6 < (int)g_BuildingLoadQueue_Array.?;
            i = (char *)g_BuildingLoadQueue_Array.? )
      {
        v8 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * v6++; /*0x5219a8*/
        *(v8 - 2) = *v8; /*0x5219ae*/
        *(v8 - 1) = v8[1]; /*0x5219b4*/
      }
      g_BuildingLoadQueue_Array.? = i - 1; /*0x5219c9*/
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = 0; /*0x5219ce*/
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = 0; /*0x5219de*/
      g_BuildingLoadQueue_Array.? = 0; /*0x5219e2*/
    }
  }
  result = ObjectClass::LoadFromStream_Common((int)v2, pStm); /*0x5219ee*/
  if ( result >= 0 ) /*0x5219f5*/
  {
    v10 = v2->?[0]; /*0x5219fb*/
    if ( v2 ) /*0x521a03*/
    {
      FootClass::PostLoadInit((FootClass *)v2, (int)&this); /*0x521a0c*/
      v2->FootClass = &InfantryClass::`vftable'; /*0x521a11*/
      *p_vtable1 = &InfantryClass::`vftable'; /*0x521a17*/
      v2->? = &InfantryClass::`vftable'; /*0x521a1d*/
      v2->? = &off_7EB02C; /*0x521a24*/
    }
    v11 = v2->?[0]; /*0x521a2c*/
    if ( v11 != v10 ) /*0x521a34*/
    {
      v2->?[0] = v10; /*0x521a38*/
      if ( v10 ) /*0x521a3e*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 4))(v10); /*0x521a43*/
      if ( v11 ) /*0x521a48*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(v11); /*0x521a4e*/
    }
    (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x521a54*/
    v12 = (*((int (__stdcall **)(void **))*p_vtable1 + 4))(p_vtable1); /*0x521a63*/
    vtable2 = (int)g_BuildingLoadQueue_Array.?; /*0x521a65*/
    if ( (int)g_BuildingLoadQueue_Array.? + 1 <= (int)g_BuildingLoadQueue_Array.? ) /*0x521a6e*/
      goto LABEL_18; /*0x521a6e*/
    if ( !g_BuildingLoadQueue_Array.? ) /*0x521a72*/
      vtable2 = 10; /*0x521a74*/
    if ( BuildingTypeClass::Enqueue((int)&g_BuildingLoadQueue_Array, vtable2) ) /*0x521a7f*/
    {
LABEL_18:
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = v12; /*0x521a93*/
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = v2; /*0x521aa1*/
      LOBYTE(g_BuildingLoadQueue_Array.?) = 0; /*0x521aab*/
      ++g_BuildingLoadQueue_Array.?; /*0x521ab2*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v2->Type); /*0x521ac3*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v2->?); /*0x521ad4*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v2->?); /*0x521ae5*/
    return 0; /*0x521aea*/
  }
  return result; /*0x521aec*/
}



// ==== 0x00521B00  InfantryClass::SaveLoad_Prefix  this=InfantryClass  sig=csp ====
int __stdcall InfantryClass::SaveLoad_Prefix(InfantryClass *this, LPPERSISTSTREAM pPStm, struct IPersistStreamVtbl *a3)
{
  return ObjectClass::SaveToStream_Common((ObjectClass *)this, pPStm, a3); /*0x521b14*/
}



// ==== 0x00521B20  InfantryClass::ResetMissionIfDone  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ResetMissionIfDone(InfantryClass *this)
{
  int result; // eax

  result = this->SequenceAnim[0]; /*0x521b20*/
  if ( result == 6 || result == 3 || result == 17 ) /*0x521b33*/
    this->SequenceAnim[0] = -1; /*0x521b35*/
  return result; /*0x521b3f*/
}



// ==== 0x00521B40  InfantryClass::ProcessMission16  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ProcessMission16(InfantryClass *this)
{
  int result; // eax
  void *vtable0; // eax

  LOBYTE(result) = this->ShouldDeploy; /*0x521b40*/
  if ( (_BYTE)result ) /*0x521b48*/
  {
    vtable0 = this->FootClass; /*0x521b4a*/
    this->ShouldDeploy = 0; /*0x521b52*/
    return (*((int (__stdcall **)(int, _DWORD, _DWORD))vtable0 + 342))(27, 0, 0); /*0x521b59*/
  }
  return result; /*0x521b5f*/
}



// ==== 0x00521B60  InfantryClass::CanInitiateDeploy  this=InfantryClass  sig=csp ====
bool __thiscall InfantryClass::CanInitiateDeploy(InfantryClass *this)
{
  int currentMission; // eax
  int v3; // esi

  currentMission = this->?; /*0x521b63*/
  if ( currentMission == 6 || currentMission == 21 || this->? || this->? ) /*0x521b89*/
    return 0; /*0x521b89*/
  if ( !this->?[0] ) /*0x521b93*/
    WinAPI::Wrapper(-2147467261); /*0x521ba2*/
  if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->?[0] + 128))(this->?[0]) /*0x521be7*/
    && (*((int (__thiscall **)(InfantryClass *))this->FootClass + 97))(this) != 5
    && (*((int (__thiscall **)(InfantryClass *))this->FootClass + 97))(this) != 15
    && ((*((int (__thiscall **)(InfantryClass *))this->FootClass + 97))(this) != 1 || this->?) )
  {
    return 0; /*0x521be7*/
  }
  v3 = this->SequenceAnim[0]; /*0x521bf1*/
  return v3 == -1 || byte_7EAF7C[4 * v3]; /*0x521c0b*/
}



// ==== 0x00521C10  InfantryClass::InitVoiceResponseTimer  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::InitVoiceResponseTimer(InfantryClass *this)
{
  int result; // eax

  result = (int)this->Type; /*0x521c13*/
  if ( !*(_BYTE *)(result + 3772) ) /*0x521c19*/
  {
    result = TechnoTypeClass::HasVoiceResponse((int *)this, 13); /*0x521c27*/
    if ( !(_BYTE)result ) /*0x521c2e*/
      this->PanicDurationLeft = 300; /*0x521c30*/
  }
  return result; /*0x521c3a*/
}



// ==== 0x00521C40  InfantryClass::ResetReloadIfNeeded  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ResetReloadIfNeeded(InfantryClass *this)
{
  int result; // eax

  result = (int)this->Type; /*0x521c40*/
  if ( !*(_BYTE *)(result + 3772) ) /*0x521c46*/
    this->PanicDurationLeft = 0; /*0x521c50*/
  return result; /*0x521c5a*/
}



// ==== 0x00521C60  InfantryClass::SetMissionOnCondition  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::SetMissionOnCondition(InfantryClass *this, int a2)
{
  if ( a2 == 1 ) /*0x521c65*/
    return (*((int (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 10, 0, 0); /*0x521c80*/
  else
    return (*((int (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 9, 0, 0); /*0x521c6f*/
}



// ==== 0x00521C90  InfantryClass::PowerDrainUpdate  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::PowerDrainUpdate(InfantryClass *this, int *a2)
{
  int v3; // edx
  int v4; // eax
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax

  FootClass::BeginPowerUpdate((FootClass *)this, a2); /*0x521c99*/
  Power::TimerProcess(this->SequenceAnim[0]); /*0x521ca7*/
  v3 = this->InfantryClass_field_timer_6C8[0]; /*0x521cac*/
  v4 = this->InfantryClass_field_timer_6C8[2]; /*0x521cb2*/
  if ( v3 != -1 ) /*0x521cbb*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v3 >= v4 ) /*0x521cc7*/
      v4 = 0; /*0x521ccd*/
    else
      v4 -= *(_DWORD *)&stru_A8EB00.?[416] - v3; /*0x521cc9*/
  }
  Power::TimerProcess(v4); /*0x521cd2*/
  Power::TimerProcess(this->PanicDurationLeft); /*0x521ce0*/
  LOBYTE(v5) = this->Technician; /*0x521ce5*/
  v6 = Power::FlagProcess((Power *)a2, v5); /*0x521cee*/
  LOBYTE(v6) = this->InfantryClass_field_bool_6DA; /*0x521cf3*/
  Power::FlagProcess((Power *)a2, v6); /*0x521cfc*/
  LOBYTE(v7) = this->Crawling; /*0x521d01*/
  Power::FlagProcess((Power *)a2, v7); /*0x521d0a*/
  LOBYTE(v8) = this->InfantryClass_field_bool_6DC; /*0x521d0f*/
  v9 = Power::FlagProcess((Power *)a2, v8); /*0x521d18*/
  LOBYTE(v9) = this->InfantryClass_field_bool_6DD; /*0x521d1d*/
  return Power::FlagProcess((Power *)a2, v9); /*0x521d2b*/
}



// ==== 0x00521D30  InfantryClass::GetTransformMatrix  this=InfantryClass  sig=csp ====
_DWORD *__thiscall InfantryClass::GetTransformMatrix(InfantryClass *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // ecx
  _BYTE v5[12]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = (_DWORD *)(*((int (__thiscall **)(InfantryClass *, _BYTE *, int, _DWORD, _DWORD, _DWORD))this->FootClass + 44))( /*0x521d5b*/
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
AnimClass *__thiscall InfantryClass::ComputeDeploySpeedFactor(InfantryClass *this)
{
  int v2; // ecx

  v2 = TechnoClass::ComputeSpeedFactorEx((double *)this); /*0x521d88*/
  if ( this->Crawling ) /*0x521d8a*/
  {
    if ( this->Type->Crawls ) /*0x521d9a*/
      return (AnimClass *)(((unsigned int)(((unsigned __int64)(1431655765LL * v2) >> 32) - v2) >> 31) /*0x521dbb*/
                         + ((int)(((unsigned __int64)(1431655765LL * v2) >> 32) - v2) >> 1)
                         + v2);
    v2 += v2 / 2; /*0x521dc3*/
  }
  return (AnimClass *)v2; /*0x521da9*/
}



// ==== 0x00521DD0  InfantryClass::CheckAndApplyBomb  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::CheckAndApplyBomb(InfantryClass *this)
{
  int result; // eax
  int (__stdcall ***v3)(_DWORD, void *, int *); // esi
  int v4; // esi
  int v5; // eax
  int v6; // edi
  int v7; // [esp+14h] [ebp-18h] BYREF
  int v8; // [esp+18h] [ebp-14h] BYREF
  char v9[16]; // [esp+1Ch] [ebp-10h] BYREF

  FootClass::vt_entry_4F4((FootClass *)this); /*0x521dd6*/
  result = (int)this->?; /*0x521ddb*/
  if ( result ) /*0x521de3*/
  {
    result = ObjectClass::DistanceTo((ObjectClass *)this, (int)this->?); /*0x521dec*/
    if ( result < 1024 ) /*0x521df6*/
    {
      result = (int)this->Type; /*0x521dfc*/
      if ( *(_BYTE *)(result + 3476) ) /*0x521e02*/
      {
        v3 = (int (__stdcall ***)(_DWORD, void *, int *))this->?[0]; /*0x521e10*/
        v7 = 0; /*0x521e16*/
        if ( !v3 ) /*0x521e20*/
          goto LABEL_12; /*0x521e20*/
        v4 = (**v3)(v3, &unk_818858, &v8); /*0x521e31*/
        if ( v4 >= 0 ) /*0x521e35*/
        {
          v6 = v8; /*0x521e49*/
          ComPtr::Release_Alt((ComPtr *)&v7); /*0x521e51*/
          v5 = v6; /*0x521e56*/
          v7 = v6; /*0x521e59*/
        }
        else
        {
          ComPtr::Release_Alt((ComPtr *)&v7); /*0x521e3b*/
          v5 = 0; /*0x521e40*/
          v7 = 0; /*0x521e42*/
        }
        if ( v4 < 0 && v4 != -2147467262 ) /*0x521e67*/
          WinAPI::Wrapper(v4); /*0x521e6a*/
        if ( !v5 ) /*0x521e75*/
LABEL_12:
          WinAPI::Wrapper(-2147467261); /*0x521e7c*/
        (*(void (__stdcall **)(int, char *))(*(_DWORD *)v5 + 12))(v5, v9); /*0x521e8d*/
        result = v7; /*0x521e90*/
        if ( v7 ) /*0x521e96*/
          return (*(int (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x521e9b*/
      }
    }
  }
  return result; /*0x521e9e*/
}



// ==== 0x00521EB0  InfantryClass::CheckDeployPath  this=InfantryClass  sig=csp ====
AnimClass *__thiscall InfantryClass::CheckDeployPath(InfantryClass *this)
{
  int v2; // esi
  AnimClass *result; // eax
  int *pathDirections; // ecx
  int *locomotor; // ebp
  int v6; // eax
  int InstanceCOM; // eax
  int v8; // eax
  int v9; // eax
  AnimClass *v10; // ecx
  _DWORD *v11; // eax
  LPVOID ppv; // [esp+30h] [ebp-1Ch] BYREF
  StreamClass v13; // [esp+34h] [ebp-18h] BYREF

  v2 = 0; /*0x521ebe*/
  if ( this->? ) /*0x521eb8*/
  {
    result = 0; /*0x521ec5*/
    pathDirections = this->?; /*0x521ec7*/
    do /*0x521ee1*/
    {
      if ( *pathDirections == -1 ) /*0x521ed2*/
        break; /*0x521ed2*/
      if ( *pathDirections == 8 ) /*0x521ed7*/
        break; /*0x521ed7*/
      ++v2; /*0x521ed9*/
      result = (AnimClass *)((char *)result + 1); /*0x521eda*/
      ++pathDirections; /*0x521edb*/
    }
    while ( (int)result < 24 ); /*0x521ee1*/
    if ( v2 >= 4 ) /*0x521ee6*/
      goto LABEL_38; /*0x521ee6*/
  }
  result = (AnimClass *)this->Type; /*0x521eec*/
  if ( !result->__pad_CD2[194] ) /*0x521ef2*/
    goto LABEL_38; /*0x521ef2*/
  locomotor = this->?; /*0x521f00*/
  InfantryClass::updateOccupiedBuilding((InfantryClass *)&v13, (int (__stdcall ****)(_DWORD, void *, _DWORD *))this->?); /*0x521f0b*/
  if ( !*(_DWORD *)v13.__pad_0 ) /*0x521f16*/
    WinAPI::Wrapper(-2147467261); /*0x521f1d*/
  (*(void (__stdcall **)(_DWORD, int *))(**(_DWORD **)v13.__pad_0 + 12))(*(_DWORD *)v13.__pad_0, &v13.m_Position); /*0x521f2e*/
  v13.m_Data = (void *)(memcmp(&v13.m_Position, &g_CLSID_JumpjetLocomotion, 0x10u) != 0); /*0x521f4e*/
  result = (AnimClass *)ComPtr::Release_Alt((ComPtr *)&v13); /*0x521f56*/
  if ( v13.m_Data ) /*0x521f68*/
    goto LABEL_38; /*0x521f68*/
  result = (AnimClass *)*locomotor; /*0x521f6e*/
  *(_DWORD *)v13.__pad_0 = 0; /*0x521f71*/
  if ( !result ) /*0x521f77*/
    goto LABEL_38; /*0x521f77*/
  v6 = StreamClass::Set(&v13, this->?); /*0x521f82*/
  if ( v6 < 0 && v6 != -2147467262 ) /*0x521f90*/
    WinAPI::Wrapper(v6); /*0x521f93*/
  result = *(AnimClass **)v13.__pad_0; /*0x521f98*/
  if ( !*(_DWORD *)v13.__pad_0 ) /*0x521f9e*/
    goto LABEL_38; /*0x521f9e*/
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)v13.__pad_0 + 28))(*(_DWORD *)v13.__pad_0) ) /*0x521fa7*/
    goto LABEL_36; /*0x521fac*/
  ppv = 0; /*0x521fbe*/
  InstanceCOM = CreateInstanceCOM((ObjectClass *)&ppv, (IID *)&g_CLSID_WalkLocomotion, 0, 7u); /*0x521fc2*/
  if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x521fd0*/
    WinAPI::Wrapper(InstanceCOM); /*0x521fd3*/
  if ( !ppv ) /*0x521fde*/
    WinAPI::Wrapper(-2147467261); /*0x521fe5*/
  (*(void (__stdcall **)(LPVOID, InfantryClass *))(*(_DWORD *)ppv + 12))(ppv, this); /*0x521ff2*/
  v13.m_Data = 0; /*0x521ff9*/
  if ( ppv ) /*0x521fff*/
  {
    v8 = StreamClass::Set((StreamClass *)&v13.m_Data, &ppv); /*0x52200a*/
    if ( v8 < 0 && v8 != -2147467262 ) /*0x522018*/
      WinAPI::Wrapper(v8); /*0x52201b*/
  }
  COMObject::SwapReference((COMObject *)&v13, (int)v13.m_Data); /*0x522029*/
  Release2COM((ObjectClass *)&v13.m_Data); /*0x522032*/
  v9 = *(_DWORD *)v13.__pad_0; /*0x522037*/
  if ( !*(_DWORD *)v13.__pad_0 ) /*0x52203d*/
  {
    result = (AnimClass *)ppv; /*0x5220c9*/
    if ( !ppv ) /*0x5220cf*/
    {
LABEL_38:
      LOBYTE(result) = 0; /*0x5220e5*/
      return result; /*0x5220e8*/
    }
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv); /*0x5220d4*/
LABEL_36:
    result = *(AnimClass **)v13.__pad_0; /*0x5220d7*/
    if ( *(_DWORD *)v13.__pad_0 ) /*0x5220dd*/
      result = (AnimClass *)(*(int (__stdcall **)(_DWORD))(**(_DWORD **)v13.__pad_0 + 8))(*(_DWORD *)v13.__pad_0); /*0x5220e2*/
    goto LABEL_38; /*0x5220e2*/
  }
  v10 = (AnimClass *)*locomotor; /*0x522043*/
  this->?[0] = -1; /*0x522046*/
  (*(void (__stdcall **)(int, AnimClass *))(*(_DWORD *)v9 + 12))(v9, v10); /*0x522054*/
  InfantryClass::checkBridgeClearance((InfantryClass *)this->?, (int)ppv); /*0x52205e*/
  v11 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, int *))this->?->FootClass::vtable0 + 18))( /*0x522070*/
                    this->?,
                    &v13.m_Position);
  if ( !*locomotor ) /*0x52207b*/
    WinAPI::Wrapper(-2147467261); /*0x522087*/
  (*(void (__stdcall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)*locomotor + 68))(*locomotor, *v11, v11[1], v11[2]); /*0x5220a0*/
  if ( ppv ) /*0x5220a9*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv); /*0x5220ae*/
  result = *(AnimClass **)v13.__pad_0; /*0x5220b1*/
  if ( *(_DWORD *)v13.__pad_0 ) /*0x5220b7*/
    result = (AnimClass *)(*(int (__stdcall **)(_DWORD))(**(_DWORD **)v13.__pad_0 + 8))(*(_DWORD *)v13.__pad_0); /*0x5220bc*/
  LOBYTE(result) = 1; /*0x5220bf*/
  return result; /*0x5220c1*/
}



// ==== 0x005220F0  InfantryClass::SetFlag1752  this=InfantryClass  sig=csp ====
void __thiscall InfantryClass::SetFlag1752(InfantryClass *this)
{
  this->PermanentBerzerk = 1; /*0x5220f0*/
}



// ==== 0x00522100  ObjectClass::method  this=ObjectClass  sig=csp ====
bool __thiscall sub_522100(TechnoClass *this)
{
  int (__stdcall ***v2)(_DWORD, void *, int *); // eax
  int v3; // esi
  int v4; // eax
  int v5; // edi
  bool v6; // bl
  int v7; // [esp+14h] [ebp-18h] BYREF
  int v8; // [esp+18h] [ebp-14h] BYREF
  _BYTE v9[16]; // [esp+1Ch] [ebp-10h] BYREF

  if ( !*(_BYTE *)(this->health + 3476) ) /*0x522109*/
    return 0; /*0x522113*/
  v2 = (int (__stdcall ***)(_DWORD, void *, int *))*((_DWORD *)this + 413); /*0x522119*/
  v7 = 0; /*0x522124*/
  if ( !v2 ) /*0x52212c*/
    goto LABEL_11; /*0x52212c*/
  v3 = (**v2)(v2, &unk_818858, &v8); /*0x52213d*/
  if ( v3 >= 0 ) /*0x522141*/
  {
    v5 = v8; /*0x522150*/
    ComPtr::Release_Alt((ComPtr *)&v7); /*0x522158*/
    v4 = v5; /*0x52215d*/
  }
  else
  {
    ComPtr::Release_Alt((ComPtr *)&v7); /*0x522147*/
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
bool __thiscall InfantryClass::CanDeployAtCell(InfantryClass *this, __int16 *a2, __int16 *a3)
{
  InfantryClass *v5; // eax
  _DWORD *v6; // eax
  signed int v7; // ecx
  __int64 v8; // rax
  int v9; // eax
  _DWORD *v10; // eax
  int v11; // ecx
  int v12; // eax

  (*((void (__thiscall **)(InfantryClass *))this->FootClass + 114))(this); /*0x5221d8*/
  if ( HouseClass::IonSensitivesShouldBeOffline() ) /*0x5221e4*/
    return 0; /*0x5221f3*/
  if ( (*((int (__thiscall **)(InfantryClass *))this->FootClass + 114))(this) > 0 ) /*0x522202*/
    return 1; /*0x522202*/
  if ( (unsigned __int8)House::IsCurrentPlayer((House *)this->?) ) /*0x52220e*/
  {
    v5 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x522221*/
    if ( v5 ) /*0x522228*/
    {
      if ( InfantryClass::ValidateAttackPosition(v5) ) /*0x52222c*/
        return 0; /*0x52223b*/
    }
  }
  v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a3); /*0x52224a*/
  if ( !MapSeed::CheckTileMatch((MapSeed *)&stru_87F5F0.__pad_58[416], a2, a3, 7, this->?, BYTE1(v6[80]) & 1, 0) ) /*0x52226b*/
    return 1; /*0x52226b*/
  if ( *a2 == *a3 && a2[1] == a3[1] ) /*0x522288*/
    return 0; /*0x522290*/
  v7 = abs32(a3[1] - a2[1]); /*0x5222a5*/
  v8 = *a3 - *a2; /*0x5222ac*/
  v9 = (HIDWORD(v8) ^ v8) - HIDWORD(v8); /*0x5222af*/
  if ( v9 <= v7 ) /*0x5222b3*/
    v9 = v7; /*0x5222b5*/
  if ( v9 == 1 ) /*0x5222ba*/
    return 0; /*0x5222c2*/
  if ( v9 >= 4 /*0x5222e3*/
    || !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], a2, 1)
    || !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], a3, 1) )
  {
    return 1; /*0x52232d*/
  }
  v10 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a3); /*0x5222f4*/
  LOBYTE(v11) = this->?; /*0x5222ff*/
  v12 = v10[80] >> 8; /*0x522305*/
  LOBYTE(v12) = v12 & 1; /*0x522308*/
  return Pathfinding::CalcDistance((int)&stru_87E790.__pad_D8[80], a2, a3, (int)this, v11, v12, 7) > 7; /*0x5221ed*/
}



// ==== 0x00522340  InfantryClass::CalculateApproachPath  this=InfantryClass  sig=csp ====
void *__thiscall InfantryClass::CalculateApproachPath(InfantryClass *this, char a2)
{
  int v3; // eax
  House *v5; // eax
  InfantryTypeClass *Type; // eax
  int DeployFireWeapon; // edi
  char v8; // bl
  int v9; // eax
  int v10; // eax

  if ( this->? ) /*0x522344*/
  {
    v3 = this->SequenceAnim[0]; /*0x522352*/
    if ( v3 != 27 && v3 != 28 && v3 != 29 && v3 != 30 ) /*0x52236a*/
      return FootClass::CalculateApproachPath((FootClass *)this, 0); /*0x522375*/
    v5 = (House *)(*((int (__thiscall **)(InfantryClass *))this->FootClass + 15))(this); /*0x52237c*/
    if ( !(unsigned __int8)House::IsCurrentPlayer(v5) ) /*0x522381*/
    {
      Type = this->Type; /*0x52238e*/
      if ( Type->Deployer ) /*0x522394*/
      {
        if ( Type->? ) /*0x5223a2*/
        {
          DeployFireWeapon = Type->?; /*0x5223b3*/
          v8 = (*((int (__thiscall **)(InfantryClass *, AbstractClass *, int))this->FootClass + 234))( /*0x5223ce*/
                 this,
                 this->?,
                 DeployFireWeapon);
          v9 = *(_DWORD *)(*((int (__thiscall **)(InfantryClass *, int))this->FootClass + 254))(this, DeployFireWeapon); /*0x5223d6*/
          if ( v9 ) /*0x5223db*/
          {
            if ( !*(_BYTE *)(v9 + 336) ) /*0x5223e1*/
            {
              v10 = this->SequenceAnim[0]; /*0x5223ef*/
              if ( v10 == 27 || v10 == 28 || v10 == 29 || v10 == 30 ) /*0x522407*/
              {
                if ( !v8 && !a2 ) /*0x522417*/
                {
                  (*((void (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 31, 0, 0); /*0x522427*/
                  return 0; /*0x522431*/
                }
              }
              else if ( v8 && !a2 ) /*0x522442*/
              {
                if ( !this->?[0] ) /*0x522444*/
                  WinAPI::Wrapper(-2147467261); /*0x522453*/
                if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->?[0] + 16))(this->?[0]) ) /*0x522461*/
                {
                  (*((void (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 27, 0, 0); /*0x522472*/
                  return 0; /*0x52247c*/
                }
                if ( !this->?[0] ) /*0x52247f*/
                  WinAPI::Wrapper(-2147467261); /*0x52248e*/
                (*(void (__stdcall **)(int))(*(_DWORD *)this->?[0] + 72))(this->?[0]); /*0x52249c*/
                this->ShouldDeploy = 1; /*0x5224a1*/
                MissionClass::GetMissionControl((MissionClass *)this); /*0x5224a8*/
                Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x5224bd*/
              }
            }
          }
        }
      }
    }
  }
  return 0; /*0x522373*/
}



// ==== 0x005224D0  InfantryClass::IsBridgeRepairEnabled  this=InfantryClass  sig=csp ====
bool __thiscall InfantryClass::IsBridgeRepairEnabled(InfantryClass *this)
{
  return this->Type->Engineer; /*0x5224dc*/
}



// ==== 0x005224E0  TechnoClass::GetTypeFlag  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::GetTypeFlag(TechnoClass *this)
{
  return *(_BYTE *)(this->airstrikeTimer + 3784); /*0x5224ec*/
}



// ==== 0x005224F0  TechnoClass::updateTurretRotation  this=TechnoClass  sig=csp ====
bool __thiscall TechnoClass::updateTurretRotation(TechnoClass *this)
{
  return *(_DWORD *)(this->airstrikeTimer + 1732) > -1; /*0x522504*/
}



// ==== 0x00522510  TechnoClass::IsMission27to30  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IsMission27to30(TechnoClass *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 433); /*0x522510*/
  return v1 == 27 || v1 == 28 || v1 == 29 || v1 == 30; /*0x52252c*/
}



// ==== 0x00522540  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_522540(TechnoClass *this)
{
  return *(_BYTE *)(this->health + 1708); /*0x52254c*/
}



// ==== 0x00522600  InfantryClass::FireAtTargetPos  this=InfantryClass  sig=csp ====
AnimClass *__thiscall InfantryClass::FireAtTargetPos(InfantryClass *this, int a2, int a3, int a4)
{
  void *vtable0; // eax
  int Strength; // [esp+0h] [ebp-4h] BYREF

  vtable0 = this->FootClass; /*0x52260d*/
  Strength = this->Type->?; /*0x52260f*/
  return (*((AnimClass *(__thiscall **)(InfantryClass *, int *, _DWORD, _DWORD, _DWORD, int, _DWORD, int))vtable0 + 91))( /*0x522639*/
           this,
           &Strength,
           0,
           *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
           0,
           1,
           0,
           a3);
}



// ==== 0x00522640  InfantryClass::GetProductionLimit  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::GetProductionLimit(InfantryClass *this, char a2)
{
  int result; // eax
  int v4; // eax

  if ( (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->?, (#375 *)dword_A83D4C) && !a2 ) /*0x52265e*/
    return (int)this->Type; /*0x522667*/
  result = (int)this->?; /*0x52266a*/
  if ( !result ) /*0x522672*/
  {
    if ( !dword_A83D4C ) /*0x52267b*/
      return *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3424); /*0x52267b*/
    v4 = *(_DWORD *)&dword_A83D4C->__pad_140[168]; /*0x52267d*/
    if ( !v4 ) /*0x522685*/
      return *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3416); /*0x522694*/
    if ( v4 == 1 ) /*0x52269a*/
      return *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3420); /*0x5226a3*/
    else
      return *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3424); /*0x5226b1*/
  }
  return result; /*0x522666*/
}



// ==== 0x005226C0  InfantryClass::GetProductionHouse  this=InfantryClass  sig=csp ====
void *__thiscall InfantryClass::GetProductionHouse(InfantryClass *this, char a2)
{
  void *result; // eax

  if ( (unsigned __int8)HouseClass::IsAlliedWith((HouseClass *)this->owner) && !a2 ) /*0x5226de*/
    return (void *)this->owner; /*0x5226e0*/
  result = (void *)this->disguisedAsHouse; /*0x5226ea*/
  if ( !result ) /*0x5226f2*/
    return dword_A83D4C; /*0x5226f4*/
  return result; /*0x5226e6*/
}



// ==== 0x00522700  InfantryClass::CaptureAttackerInfo  this=InfantryClass  sig=csp ====
void __thiscall InfantryClass::CaptureAttackerInfo(InfantryClass *this, int *a2)
{
  bool v3; // zf
  int v4; // eax

  if ( a2 && (*(int (__thiscall **)(int *))(*a2 + 44))(a2) == 15 ) /*0x522716*/
  {
    TechnoClass::ActivateEffect((TechnoClass *)this); /*0x52271b*/
    v3 = (*(unsigned __int8 (__thiscall **)(int *))(*a2 + 196))(a2) == 0; /*0x52272a*/
    v4 = *a2; /*0x52272c*/
    if ( v3 ) /*0x52272e*/
    {
      this->? = (ObjectTypeClass *)(*(int (__thiscall **)(int *))(v4 + 136))(a2); /*0x52275f*/
      this->? = (HouseClass *)(*(int (__thiscall **)(int *))(*a2 + 60))(a2); /*0x52276c*/
    }
    else
    {
      this->? = (ObjectTypeClass *)(*(int (__thiscall **)(int *, int))(v4 + 204))(a2, 1); /*0x52273a*/
      this->? = (HouseClass *)(*(int (__thiscall **)(int *, int))(*a2 + 208))(a2, 1); /*0x52274c*/
    }
  }
}



// ==== 0x00522780  InfantryClass::InitProductionLimits  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::InitProductionLimits(InfantryClass *this)
{
  int result; // eax
  HouseClass *owner; // eax
  int sideIndex; // eax

  result = (int)this->Type; /*0x522780*/
  if ( *(_BYTE *)(result + 3376) ) /*0x522786*/
  {
    owner = this->?; /*0x522790*/
    this->? = 1; /*0x522796*/
    this->? = owner; /*0x52279d*/
    sideIndex = owner->sideIndex; /*0x5227a3*/
    if ( sideIndex ) /*0x5227ab*/
    {
      if ( sideIndex == 1 ) /*0x5227c9*/
        result = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3420); /*0x5227cb*/
      else
        result = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3424); /*0x5227d8*/
      this->? = (ObjectTypeClass *)result; /*0x5227d1*/
    }
    else
    {
      result = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3416); /*0x5227b3*/
      this->? = (ObjectTypeClass *)result; /*0x5227b9*/
    }
  }
  else
  {
    this->? = 0; /*0x5227e5*/
  }
  return result; /*0x5227bf*/
}



// ==== 0x005227F0  InfantryClass::CanAttackTarget  this=InfantryClass  sig=csp ====
bool __thiscall InfantryClass::CanAttackTarget(InfantryClass *this)
{
  _DWORD *v2; // eax
  HouseClass *v3; // ebx
  int disguisedAsHouse; // esi
  bool result; // al
  int v6; // [esp+Ch] [ebp-14h]
  __int16 v7[2]; // [esp+10h] [ebp-10h] BYREF
  _BYTE v8[12]; // [esp+14h] [ebp-Ch] BYREF
  HouseClass *other; // [esp+24h] [ebp+4h]

  result = 0; /*0x5228a0*/
  if ( (*(unsigned __int8 (__thiscall **)(InfantryClass *))(this->vtable0 + 196))(this) ) /*0x5227fa*/
  {
    v2 = (_DWORD *)(*(int (__thiscall **)(InfantryClass *, _BYTE *))(this->vtable0 + 72))(this, v8); /*0x522811*/
    LOWORD(v6) = *v2 / 256; /*0x522824*/
    HIWORD(v6) = v2[1] / 256; /*0x52283c*/
    *(_DWORD *)v7 = v6; /*0x522845*/
    v3 = (HouseClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v7); /*0x52285f*/
    if ( !(unsigned __int8)HouseClass::IsAlliedWith((HouseClass *)this->owner) /*0x522870*/
      && !(unsigned __int8)HouseClass::HasType(v3, other->relatedTagsCount) )
    {
      disguisedAsHouse = this->disguisedAsHouse; /*0x522879*/
      if ( (HouseClass *)disguisedAsHouse == other /*0x52288a*/
        || !disguisedAsHouse
        || (unsigned __int8)HouseClass::IsAlliedWith(other) )
      {
        return 1; /*0x522802*/
      }
    }
  }
  return result; /*0x522893*/
}



// ==== 0x005228B0  ObjectClass::GetTypeVt40_0  this=InfantryClass  sig=csp ====
// attributes: thunk
int __thiscall ObjectClass::GetTypeVt40_0(ObjectClass *this)
{
  return TechnoClass::GetTypeVt40((TechnoClass *)this);
}



// ==== 0x005228C0  ObjectClass::GetTypeVt41_0  this=InfantryClass  sig=csp ====
// attributes: thunk
int __thiscall ObjectClass::GetTypeVt41_0(ObjectClass *this)
{
  return ObjectClass::GetTypeVt41(this);
}



// ==== 0x005228D0  InfantryClass::IsBombDeployMission  this=InfantryClass  sig=csp ====
AnimClass *__thiscall InfantryClass::IsBombDeployMission(InfantryClass *this)
{
  int v1; // eax
  AnimClass *result; // eax

  result = 0; /*0x5228fa*/
  if ( this->Type->Deployer ) /*0x5228d6*/
  {
    v1 = this->SequenceAnim[0]; /*0x5228e0*/
    if ( v1 == 27 || v1 == 28 || v1 == 29 || v1 == 30 ) /*0x5228f8*/
      return (AnimClass *)1; /*0x5228de*/
  }
  return result; /*0x5228ff*/
}



// ==== 0x00522910  TechnoClass::GarrisonBuilding  this=InfantryClass  sig=csp ====
void __thiscall TechnoClass::GarrisonBuilding(TechnoClass *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  void (__thiscall **vtable0)(TechnoClass *, int); // ebx
  int v11; // eax
  _BYTE v12[12]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = this->animation; /*0x52291a*/
  if ( *(_BYTE *)(v3 + 3764) ) /*0x522920*/
  {
    (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 53))(this); /*0x522931*/
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
    BuildingClass::UpdateThreatBounds((BuildingClass *)a2, v8); /*0x52298d*/
    if ( a2[421] == 1 ) /*0x522999*/
    {
      (*(void (__thiscall **)(_DWORD *, int))(*a2 + 292))(a2, 2); /*0x5229a2*/
      if ( (unsigned __int8)House::IsHumanPlayer((House *)this->owner) ) /*0x5229ae*/
      {
        VoxClass::FindAndPlay(&stru_8255B0, -1); /*0x5229c1*/
        v9 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v12); /*0x5229d0*/
        StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 444), v9, 0); /*0x5229e0*/
      }
    }
    if ( this->owner->currentPlayer ) /*0x5229ec*/
    {
      this->shouldGarrisonStructure = 0; /*0x5229f4*/
      this->shouldEnterOccupiable = 0; /*0x5229fa*/
    }
  }
  else if ( *(_BYTE *)(v3 + 3765) ) /*0x522a09*/
  {
    BuildingClass::AnimateUnloadUnits((BuildingClass *)a2, (int)this); /*0x522a18*/
    (*((void (__thiscall **)(TechnoClass *, _DWORD, int))this->RadioClass + 288))(this, 0, 1); /*0x522a24*/
    vtable0 = (void (__thiscall **)(TechnoClass *, int))this->RadioClass; /*0x522a2c*/
    v11 = (*(int (__thiscall **)(_DWORD *, _BYTE *, int, int))(*a2 + 72))(a2, v12, 1, 1); /*0x522a39*/
    vtable0[93](this, v11); /*0x522a3f*/
  }
}



// ==== 0x00522A50  nullsub_146  this=-  sig=csp ====
void __stdcall nullsub_146(int a1)
{
  ; /*0x522a50*/
}



// ==== 0x00522A60  TechnoClass::HandleSpecialAction  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::HandleSpecialAction(TechnoClass *this, int a2, int a3)
{
  int v4; // eax
  char *v5; // esi
  int v6; // eax
  char *v8; // esi
  _DWORD *v9; // eax
  __int16 v10[2]; // [esp+Ch] [ebp-10h] BYREF
  _BYTE v11[12]; // [esp+10h] [ebp-Ch] BYREF
  int v12; // [esp+20h] [ebp+4h]

  v4 = this->q1AE; /*0x522a6c*/
  if ( (*(_BYTE *)(v4 + 3434) || *(_BYTE *)(v4 + 3476)) /*0x522a93*/
    && a2 == 4475
    && (v5 = (char *)this - 8, (unsigned __int8)Team::AllMembersValid((Team *)((char *)this - 8))) )
  {
    (*(void (__thiscall **)(char *, int))(*(_DWORD *)v5 + 628))((char *)this - 8, 8); /*0x522aa2*/
    v6 = this->displayProductionTo[0]; /*0x522aa8*/
    if ( !v6 || v6 == this->q167 ) /*0x522ab8*/
    {
      FootClass::ClearPathIndex((FootClass *)((char *)this - 8)); /*0x522ad4*/
      (*(void (__thiscall **)(char *, _BYTE *, int, _DWORD))(*(_DWORD *)v5 + 372))( /*0x522ae6*/
        (char *)this - 8,
        &stru_A8EB00.?[1564],
        1,
        0);
      return 1; /*0x522aee*/
    }
    else
    {
      (*(void (__thiscall **)(char *, int, int))(*(_DWORD *)v5 + 1152))((char *)this - 8, v6, 1); /*0x522ac1*/
      return 1; /*0x522ac9*/
    }
  }
  else if ( *(_BYTE *)(this->q1AE + 3477) && a2 == 4476 ) /*0x522b11*/
  {
    v8 = (char *)this - 8; /*0x522b1a*/
    v9 = (_DWORD *)(*(int (__thiscall **)(char *, _BYTE *))(*((_DWORD *)this - 2) + 72))((char *)this - 8, v11); /*0x522b24*/
    LOWORD(v12) = *v9 / 256; /*0x522b37*/
    HIWORD(v12) = v9[1] / 256; /*0x522b4f*/
    *(_DWORD *)v10 = v12; /*0x522b58*/
    if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v10) + 80) & 0x100) != 0 ) /*0x522b70*/
      (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v8 + 460))((char *)this - 8, *(_DWORD *)&stru_A8EB00.?[1616]); /*0x522b7d*/
    else
      (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v8 + 460))((char *)this - 8, 0); /*0x522b8b*/
    (*(void (__thiscall **)(char *, int, int, _DWORD))(*(_DWORD *)v8 + 1368))((char *)this - 8, 36, 1, 0); /*0x522b9b*/
    return 1; /*0x522ba3*/
  }
  else
  {
    return 0; /*0x522bae*/
  }
}



// ==== 0x00522BC0  InfantryClass::CanEnterBuilding  this=InfantryClass  sig=csp ====
bool __thiscall InfantryClass::CanEnterBuilding(InfantryClass *this)
{
  int v2; // eax
  bool result; // al

  result = 0; /*0x522bfc*/
  if ( (*((int (__thiscall **)(InfantryClass *))this->FootClass + 97))(this) == 5 /*0x522bdd*/
    || (*((int (__thiscall **)(InfantryClass *))this->FootClass + 97))(this) == 11 )
  {
    v2 = this->SequenceAnim[0]; /*0x522bdf*/
    if ( !v2 || v2 == 9 || v2 == 10 || v2 == 32 ) /*0x522bf6*/
      return 1; /*0x522bdd*/
  }
  return result; /*0x522bfa*/
}



// ==== 0x00522C00  InfantryClass::StartBombDeploy  this=InfantryClass  sig=csp ====
AnimClass *__thiscall InfantryClass::StartBombDeploy(InfantryClass *this, char a2)
{
  AnimClass *result; // eax

  if ( a2 ) /*0x522c09*/
    return (*((AnimClass *(__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 32, 0, 0); /*0x522c09*/
  result = (AnimClass *)(*((int (__thiscall **)(InfantryClass *))this->FootClass + 225))(this); /*0x522c0d*/
  if ( (_BYTE)result ) /*0x522c15*/
    return (*((AnimClass *(__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 32, 0, 0); /*0x522c21*/
  return result; /*0x522c27*/
}



// ==== 0x00522CB0  TechnoClass::IsEnteringOrCapturingStructure  this=TechnoClass  sig=csp ====
BOOL __thiscall TechnoClass::IsEnteringOrCapturingStructure(TechnoClass *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 433); /*0x522cb0*/
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



// ==== 0x00522D00  SlaveManagerClass::Check  this=SlaveManagerClass  sig=csp ====
int __thiscall SlaveManagerClass::Check(SlaveManagerClass *this)
{
  int result; // eax

  if ( this->q02B != 10 ) /*0x522d07*/
    return (*((int (__thiscall **)(SlaveManagerClass *, int, _DWORD))this->AbstractClass + 122))(this, 10, 0); /*0x522d0f*/
  return result; /*0x522d15*/
}



// ==== 0x00522D20  SlaveManagerClass::VtableDispatch  this=SlaveManagerClass  sig=csp ====
int __thiscall SlaveManagerClass::VtableDispatch(SlaveManagerClass *this)
{
  return (*((int (__thiscall **)(SlaveManagerClass *, int, _DWORD))this->AbstractClass + 122))(this, 5, 0); /*0x522d2c*/
}



// ==== 0x00522D30  SlaveManagerClass::CheckIsOne  this=SlaveManagerClass  sig=csp ====
bool __thiscall SlaveManagerClass::CheckIsOne(SlaveManagerClass *this)
{
  return ((double (__thiscall *)(SlaveManagerClass *))*((_DWORD *)this->AbstractClass + 173))(this) == 1.0; /*0x522d47*/
}



// ==== 0x00522D50  InfantryClass::SlaveGiveMoney_RecordBalanceBefore  this=AbstractClass  sig=csp ====
int __thiscall InfantryClass::SlaveGiveMoney_RecordBalanceBefore(int *this, _DWORD *a2)
{
  int *v2; // ebp
  char v3; // bl
  int result; // eax
  int v5; // esi
  int v6; // edi
  float v10; // [esp+Ch] [ebp-Ch]
  int v11; // [esp+10h] [ebp-8h]
  float v12; // [esp+10h] [ebp-8h]
  float v13; // [esp+14h] [ebp-4h]

  v2 = this + 207; /*0x522d55*/
  v3 = 0; /*0x522d5e*/
  result = FirstFloatPositive((float *)this + 207); /*0x522d60*/
  v5 = result; /*0x522d65*/
  if ( result != -1 ) /*0x522d6a*/
  {
    do /*0x522e44*/
    {
      v6 = a2[135]; /*0x522d75*/
      v11 = *(_DWORD *)(v6 + 21388); /*0x522d89*/
      if ( !*(_BYTE *)(v6 + 492) && dword_A8B238[0] ) /*0x522d97*/
        v11 = *(_DWORD *)(*(_DWORD *)&dword_8871E0->__pad_C3C[1768] + 4 * *(_DWORD *)(v6 + 388)) /*0x522dae*/
            + *(_DWORD *)(v6 + 21388);
      if ( v5 == -1 ) /*0x522db5*/
      {
        v10 = 0.0; /*0x522dc5*/
      }
      else
      {
        FloatArray::Get(v2, v5); /*0x522dba*/
        __asm { fstp [esp+1Ch+var_C] } /*0x522dbf*/
      }
      __asm { fild [esp+1Ch+var_8] } /*0x522dcd*/
      _EAX = dword_8871E0; /*0x522dd1*/
      __asm /*0x522dd9*/
      {
        fmul dword ptr [eax+0F3Ch]
        fmul [esp+1Ch+var_C]
        fstp [esp+1Ch+var_8]
      }
      if ( v5 != -1 ) /*0x522de7*/
      {
        Float::SubtractClamped(v2, v10, v5); /*0x522df1*/
        __asm /*0x522df6*/
        {
          fst [esp+1Ch+var_4]
          fcomp ds:flt_7E1748
          fnstsw ax
        }
        if ( (_AX & 0x4100) == 0 ) /*0x522e05*/
        {
          v3 = 1; /*0x522e0f*/
          HouseClass::GiveTiberium_Storage((_DWORD *)v6, v13, v5); /*0x522e11*/
          __asm /*0x522e16*/
          {
            fstp st
            fld [esp+1Ch+var_8]
            fcomp ds:flt_7E1748
            fnstsw ax
          }
          if ( (_AX & 0x4100) == 0 ) /*0x522e27*/
          {
            HouseClass::GiveTiberium_Storage((_DWORD *)v6, v12, v5); /*0x522e31*/
            __asm { fstp st } /*0x522e36*/
          }
        }
      }
      result = FirstFloatPositive((float *)v2); /*0x522e3a*/
      v5 = result; /*0x522e3f*/
    }
    while ( result != -1 ); /*0x522e44*/
    if ( v3 ) /*0x522e4d*/
      return (*(int (__thiscall **)(_DWORD *))(*a2 + 1128))(a2); /*0x522e55*/
  }
  return result; /*0x522e5b*/
}



// ==== 0x00522E70  InfantryClass::ProcessTiberiumHarvest  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ProcessTiberiumHarvest(InfantryClass *this)
{
  double v1; // st7
  int (__thiscall **vtable0)(InfantryClass *); // edx
  Cell *v5; // ebx
  int v7; // ebp
  int v11; // eax
  float v12; // [esp+Ch] [ebp-1Ch]
  int v15; // [esp+24h] [ebp-4h]

  vtable0 = (int (__thiscall **)(InfantryClass *))this->FootClass; /*0x522e7b*/
  if ( this->Type->? ) /*0x522e7d*/
  {
    v5 = (Cell *)vtable0[111](this); /*0x522eb4*/
    if ( !(unsigned __int8)Cell::IsBridge2(v5) ) /*0x522eb8*/
      goto LABEL_13; /*0x522eb8*/
    (*((void (__thiscall **)(InfantryClass *))this->FootClass + 173))(this); /*0x522ec9*/
    __asm /*0x522ecf*/
    {
      fcomp ds:dbl_7E1718
      fnstsw ax
    }
    if ( (_AX & 0x4000) != 0 ) /*0x522eda*/
    {
LABEL_13:
      (*((void (__thiscall **)(InfantryClass *, _DWORD, _DWORD, _DWORD))this->FootClass + 342))(this, 0, 0, 0); /*0x522f98*/
      (*((void (__thiscall **)(InfantryClass *, int, _DWORD))this->FootClass + 122))(this, 5, 0); /*0x522fa6*/
      return 1; /*0x522fad*/
    }
    else
    {
      if ( this->SequenceAnim[0] != 38 ) /*0x522ee7*/
        (*((void (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 38, 0, 0); /*0x522ef3*/
      v7 = BuildingClass::FindByCellHash((BuildingClass *)v5); /*0x522f02*/
      _EAX = this->Type; /*0x522f04*/
      __asm { fild dword ptr [eax+800h] } /*0x522f10*/
      __asm { fstp [esp+14h+var_4] }
      Float4::Sum((int *)&this->?); /*0x522f1c*/
      __asm /*0x522f21*/
      {
        fsubr [esp+14h+var_4]
        fcomp ds:flt_7E2AC8
        fnstsw ax
      }
      if ( (_AX & 0x4100) != 0 ) /*0x522f30*/
      {
        _ECX = this->Type; /*0x522f3a*/
        __asm { fild dword ptr [ecx+800h] } /*0x522f40*/
        __asm { fstp [esp+14h+var_4] }
        Float4::Sum((int *)&this->?); /*0x522f4c*/
        __asm { fsubr [esp+14h+var_4] } /*0x522f51*/
      }
      else
      {
        __asm { fld ds:flt_7E2AC8 } /*0x522f32*/
      }
      LOWORD(v11) = Math::RoundToInt(v1); /*0x522f55*/
      v15 = CellClass::ReduceTiberium(&v5->Cell_field_0x0, v11); /*0x522f64*/
      if ( v15 > 0 ) /*0x522f68*/
      {
        __asm { fild [esp+14h+var_4] } /*0x522f6a*/
        __asm { fstp [esp+1Ch+var_1C]; float }
        Float::Accumulate((int *)&this->?, v12, v7); /*0x522f75*/
        __asm { fstp st } /*0x522f7a*/
      }
      return this->Type->HarvestRate; /*0x522f85*/
    }
  }
  else
  {
    ((void (__thiscall *)(InfantryClass *, _DWORD, _DWORD, _DWORD))vtable0[342])(this, 0, 0, 0); /*0x522e8f*/
    (*((void (__thiscall **)(InfantryClass *, int, _DWORD))this->FootClass + 122))(this, 5, 0); /*0x522e9d*/
    return 1; /*0x522ea4*/
  }
}



// ==== 0x00522FC0  SlaveManagerClass::IsMasterHarvester  this=SlaveManagerClass  sig=csp ====
bool __thiscall SlaveManagerClass::IsMasterHarvester(SlaveManagerClass *this)
{
  return (*((int (__thiscall **)(SlaveManagerClass *))this->AbstractClass + 97))(this) == 10; /*0x522fd2*/
}



// ==== 0x00522FE0  InfantryClass::CreateDeployLocomotor  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::CreateDeployLocomotor(InfantryClass *this, int a2, int a3, int a4)
{
  void (__thiscall **vtable0)(InfantryClass *, CellClass *, int); // edi
  CellClass *v6; // eax
  int InstanceCOM; // eax
  int v8; // eax
  LPVOID v9; // edi
  LPVOID v10; // eax
  int v11; // edx
  int v12; // eax
  void (__thiscall **v13)(InfantryClass *, CellClass *, int); // edi
  int v14; // edx
  CellClass *v15; // eax
  LPVOID ppv; // [esp+50h] [ebp-8h] BYREF
  int v18; // [esp+54h] [ebp-4h] BYREF

  if ( (*((unsigned __int8 (__thiscall **)(InfantryClass *))this->FootClass + 21))(this) /*0x52302c*/
    || (*((unsigned __int8 (__thiscall **)(InfantryClass *))this->FootClass + 88))(this)
    || this->?
    || (*((unsigned __int8 (__thiscall **)(InfantryClass *))this->FootClass + 117))(this)
    || (*((unsigned __int8 (__thiscall **)(InfantryClass *))this->FootClass + 118))(this) )
  {
    return 0; /*0x523239*/
  }
  if ( !this->?[0] ) /*0x52303a*/
    WinAPI::Wrapper(-2147467261); /*0x523049*/
  (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)this->?[0] + 156))(this->?[0], 0); /*0x523059*/
  (*((void (__thiscall **)(InfantryClass *, int *))this->FootClass + 61))(this, &a2); /*0x523068*/
  vtable0 = (void (__thiscall **)(InfantryClass *, CellClass *, int))this->FootClass; /*0x52306e*/
  this->? = 1; /*0x52307c*/
  v6 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2); /*0x523083*/
  vtable0[288](this, v6, 1); /*0x52308b*/
  if ( !this->?[0] ) /*0x523091*/
    WinAPI::Wrapper(-2147467261); /*0x5230ac*/
  (*(void (__stdcall **)(int, int, int, int))(*(_DWORD *)this->?[0] + 120))(this->?[0], a2, a3, a4); /*0x5230c7*/
  ppv = 0; /*0x5230d8*/
  InstanceCOM = CreateInstanceCOM((ObjectClass *)&ppv, (IID *)&g_CLSID_HoverLocomotion, 0, 7u); /*0x5230dc*/
  if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x5230ea*/
    WinAPI::Wrapper(InstanceCOM); /*0x5230ed*/
  v18 = 0; /*0x5230f6*/
  if ( ppv ) /*0x5230fc*/
  {
    v8 = StreamClass::Set((StreamClass *)&v18, &ppv); /*0x523107*/
    if ( v8 < 0 && v8 != -2147467262 ) /*0x523115*/
      WinAPI::Wrapper(v8); /*0x523118*/
  }
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2)->flags[0] & 0x100) != 0 ) /*0x523135*/
    a4 += *(_DWORD *)&stru_A8EB00.?[1616]; /*0x523143*/
  if ( !ppv ) /*0x52314d*/
    WinAPI::Wrapper(-2147467261); /*0x523154*/
  (*(void (__stdcall **)(LPVOID, InfantryClass *))(*(_DWORD *)ppv + 12))(ppv, this); /*0x523161*/
  if ( !v18 ) /*0x523170*/
    WinAPI::Wrapper(-2147467261); /*0x523177*/
  (*(void (__stdcall **)(int, int))(*(_DWORD *)v18 + 12))(v18, this->?[0]); /*0x523184*/
  v9 = (LPVOID)this->?[0]; /*0x523187*/
  v10 = ppv; /*0x52318d*/
  if ( v9 != ppv ) /*0x523193*/
  {
    this->?[0] = (int)ppv; /*0x523197*/
    if ( v10 ) /*0x52319d*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)v10 + 4))(v10); /*0x5231a2*/
    if ( v9 ) /*0x5231a7*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)v9 + 8))(v9); /*0x5231ac*/
  }
  v11 = a2; /*0x5231af*/
  v12 = a3; /*0x5231b3*/
  v13 = (void (__thiscall **)(InfantryClass *, CellClass *, int))this->FootClass; /*0x5231bd*/
  this->? = 1; /*0x5231c1*/
  this->?[0] = v11; /*0x5231c8*/
  v14 = a4; /*0x5231ca*/
  this->?[1] = v12; /*0x5231ce*/
  this->?[2] = v14; /*0x5231d6*/
  v15 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2); /*0x5231de*/
  v13[288](this, v15, 1); /*0x5231e6*/
  if ( !this->?[0] ) /*0x5231ec*/
    WinAPI::Wrapper(-2147467261); /*0x5231f9*/
  (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)this->?[0] + 156))(this->?[0], 0); /*0x523208*/
  if ( v18 ) /*0x523214*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v18 + 8))(v18); /*0x523219*/
  if ( ppv ) /*0x523222*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv); /*0x523227*/
  return 1; /*0x52322c*/
}



// ==== 0x00523250  InfantryClass::ComputeTransform  this=InfantryClass  sig=csp ====
_DWORD *__thiscall InfantryClass::ComputeTransform(InfantryClass *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  TechnoClass *transporter; // eax
  int v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  _DWORD v12[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( this->? /*0x52327b*/
    && (transporter = this->?) != 0
    && (v8 = TechnoClass::IndexOf((TechnoClass *)transporter->passengers, (int)this)) != 0 )
  {
    v9 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD *, int, _DWORD, _DWORD, _DWORD))this->?->RadioClass + 44))( /*0x5232a1*/
                     this->?,
                     v12,
                     -v8,
                     0,
                     0,
                     0);
  }
  else
  {
    v9 = TechnoClass::ComputeTransform((TechnoClass *)this, v12, a3, 0, 0, 0); /*0x5232c8*/
  }
  v10 = v9; /*0x5232cd*/
  *a2 = *v10; /*0x5232d8*/
  a2[1] = v10[1]; /*0x5232dd*/
  a2[2] = v10[2]; /*0x5232e5*/
  return a2; /*0x5232d5*/
}



// ==== 0x005232F0  InfantryClass::StubReturn1776  this=InfantryClass  sig=csp ====
int InfantryClass::StubReturn1776(InfantryClass *this)
{
  return 1776; /*0x5232f5*/
}



// ==== 0x00523300  InfantryClass::GetClassID  this=InfantryClass  sig=csp ====
int __stdcall InfantryClass::GetClassID(InfantryClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x523306*/
    return -2147467261; /*0x523308*/
  *a2 = 237448644; /*0x523316*/
  a2[1] = 298949647; /*0x52331e*/
  a2[2] = -1610610249; /*0x523327*/
  a2[3] = unk_7E968C; /*0x523330*/
  return 0; /*0x52330d*/
}



// ==== 0x00523340  InfantryClass::StubReturn15  this=InfantryClass  sig=csp ====
int InfantryClass::StubReturn15(InfantryClass *this)
{
  return 15; /*0x523345*/
}



// ==== 0x00523350  InfantryClass::ScalarDtor  this=InfantryClass  sig=csp ====
void **__thiscall InfantryClass::ScalarDtor(InfantryClass *this, char a2)
{
  InfantryClass::Destruct(this); /*0x523353*/
  if ( (a2 & 1) != 0 ) /*0x52335d*/
    __3_YAXPAX_Z(this); /*0x523360*/
  return &this->FootClass; /*0x52336a*/
}



// ==== 0x00523370  InfantryClass::checkBridgeClearance  this=InfantryClass  sig=csp ====
int *__thiscall InfantryClass::checkBridgeClearance(InfantryClass *this, int a2)
{
  void *vtable0; // edi

  vtable0 = this->FootClass; /*0x523378*/
  if ( this->FootClass != (void *)a2 ) /*0x52337c*/
  {
    this->FootClass = (void *)a2; /*0x523380*/
    if ( a2 ) /*0x523382*/
      (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x523387*/
    if ( vtable0 ) /*0x52338c*/
      (*(void (__stdcall **)(void *))(*(_DWORD *)vtable0 + 8))(vtable0); /*0x523391*/
  }
  return (int *)this; /*0x523396*/
}



// ==== 0x005233A0  COMObject::SwapReference  this=COMObject  sig=csp ====
int *__thiscall COMObject::SwapReference(COMObject *this, int a2)
{
  int v3; // edi

  v3 = *(_DWORD *)this->__pad_0; /*0x5233a8*/
  if ( *(_DWORD *)this->__pad_0 != a2 ) /*0x5233ac*/
  {
    *(_DWORD *)this->__pad_0 = a2; /*0x5233b0*/
    if ( a2 ) /*0x5233b2*/
      (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x5233b7*/
    if ( v3 ) /*0x5233bc*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3); /*0x5233c1*/
  }
  return (int *)this->__pad_0; /*0x5233c6*/
}



// ==== 0x005233D0  InfantryClass::updateOccupiedBuilding  this=InfantryClass  sig=csp ====
_DWORD *__thiscall InfantryClass::updateOccupiedBuilding(
        InfantryClass *this,
        int (__stdcall ****a2)(_DWORD, void *, _DWORD *))
{
  int (__stdcall ****v2)(_DWORD, void *, _DWORD *); // eax
  int (__stdcall ***v4)(_DWORD, void *, _DWORD); // eax
  int v5; // ebx
  void *v6; // edi

  v2 = a2; /*0x5233d0*/
  this->FootClass = 0; /*0x5233d8*/
  v4 = (int (__stdcall ***)(_DWORD, void *, _DWORD))*v2; /*0x5233de*/
  if ( v4 ) /*0x5233e2*/
  {
    v5 = (**v4)(v4, &unk_818858, &a2); /*0x5233f3*/
    if ( v5 >= 0 ) /*0x5233f7*/
    {
      v6 = a2; /*0x523410*/
      if ( this->FootClass ) /*0x52340d*/
        (*(void (__stdcall **)(void *))(*(_DWORD *)this->FootClass + 8))(this->FootClass); /*0x52341b*/
      this->FootClass = v6; /*0x52341e*/
    }
    else
    {
      if ( this->FootClass ) /*0x5233f9*/
        (*(void (__stdcall **)(void *))(*(_DWORD *)this->FootClass + 8))(this->FootClass); /*0x523402*/
      this->FootClass = 0; /*0x523405*/
    }
    if ( v5 < 0 && v5 != -2147467262 ) /*0x52342b*/
      WinAPI::Wrapper(v5); /*0x52342e*/
  }
  return &this->FootClass; /*0x523435*/
}



// ==== 0x00523440  BinaryArraySearch  this=AbstractClass  sig=csp ====
int __fastcall Array_BinarySearch(int a1, int a2, int *a3)
{
  int v3; // esi
  int v4; // ebx
  int v5; // edi

  v3 = a2; /*0x523445*/
  if ( a2 <= 0 ) /*0x523447*/
    return 0; /*0x523479*/
  v4 = *a3; /*0x52344d*/
  while ( 1 ) /*0x523456*/
  {
    v5 = *(_DWORD *)(a1 + 8 * (v3 / 2)); /*0x523456*/
    if ( v5 <= v4 ) /*0x52345e*/
      break; /*0x52345e*/
    v3 /= 2; /*0x523460*/
LABEL_7:
    if ( v3 <= 0 ) /*0x523472*/
      return 0; /*0x523472*/
  }
  if ( v5 != v4 ) /*0x523464*/
  {
    a1 += 8 * (v3 / 2) + 8; /*0x523466*/
    v3 += -1 - v3 / 2; /*0x52346e*/
    goto LABEL_7; /*0x52346e*/
  }
  return a1 + 8 * (v3 / 2); /*0x523474*/
}



// ==== 0x00523490  sub_523490  this=-  sig=ida-proto ====
void sub_523490()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x52349c*/
  dbl_A8F268 = Math::Sqrt(v0 + v0); /*0x5234ae*/
}



// ==== 0x005234C0  sub_5234C0  this=-  sig=ida-proto ====
void sub_5234C0()
{
  dbl_A8F2C0 = dbl_A8F268 / 60.0; /*0x5234cc*/
}



// ==== 0x005234E0  sub_5234E0  this=-  sig=ida-proto ====
void sub_5234E0()
{
  dbl_A8F2A8 = 1.0 / dbl_A8F2C0; /*0x5234ec*/
}



// ==== 0x00523500  sub_523500  this=-  sig=ida-proto ====
void sub_523500()
{
  dbl_A8F2A0 = 0.0174532925199433 * 45.0; /*0x52350c*/
}



// ==== 0x00523520  sub_523520  this=-  sig=ida-proto ====
void sub_523520()
{
  dbl_A8F270 = 0.0174532925199433 * 60.0; /*0x52352c*/
}



// ==== 0x00523540  sub_523540  this=-  sig=ida-proto ====
void sub_523540()
{
  dbl_A8F248 = 0.0174532925199433 * 90.0; /*0x52354c*/
}



// ==== 0x00523560  sub_523560  this=-  sig=ida-proto ====
__int64 sub_523560()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_A8F248 - dbl_A8F270); /*0x523572*/
  result = Math::RoundToInt(v0 * dbl_A8F268 * 0.5); /*0x523586*/
  dword_A8F2CC = result; /*0x52358b*/
  return result; /*0x523590*/
}



// ==== 0x005235A0  sub_5235A0  this=-  sig=ida-proto ====
void sub_5235A0()
{
  dbl_A8F278 = Math::ArcTan((double)dword_A8F2CC * 0.00390625); /*0x5235b7*/
}



// ==== 0x005235D0  sub_5235D0  this=-  sig=ida-proto ====
void sub_5235D0()
{
  dbl_A8F298 = Math::ArcTan((double)(2 * dword_A8F2CC) / dbl_A8F268); /*0x5235f2*/
}



// ==== 0x00523600  sub_523600  this=-  sig=ida-proto ====
__int64 sub_523600()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_A8F2CC) + 0.5); /*0x52361b*/
  dword_A8F2BC = result; /*0x523620*/
  return result; /*0x523626*/
}



// ==== 0x00523630  sub_523630  this=-  sig=ida-proto ====
int sub_523630()
{
  word_A8F260 = 0; /*0x523632*/
  word_A8F262 = 0; /*0x523638*/
  return 0; /*0x52363e*/
}



// ==== 0x00523640  sub_523640  this=-  sig=ida-proto ====
int sub_523640()
{
  dword_A8F280 = 0; /*0x523642*/
  dword_A8F284 = 0; /*0x523647*/
  dword_A8F288 = 0; /*0x52364c*/
  return 0; /*0x523651*/
}



// ==== 0x00523660  sub_523660  this=-  sig=ida-proto ====
int sub_523660()
{
  dword_A8F2B8 = 0; /*0x523665*/
  dword_A8F2B0 = 128; /*0x52366f*/
  dword_A8F2B4 = 128; /*0x523674*/
  return 128; /*0x523679*/
}



// ==== 0x00523680  sub_523680  this=-  sig=ida-proto ====
int sub_523680()
{
  dword_A8F250 = 0; /*0x523682*/
  dword_A8F254 = 0; /*0x523687*/
  dword_A8F258 = 0; /*0x52368c*/
  dword_A8F25C = 0; /*0x523691*/
  return 0; /*0x523696*/
}



// ==== 0x005236A0  InfantryTypeClass::Constructor  this=InfantryTypeClass  sig=csp ====
int __thiscall InfantryTypeClass::Constructor(int this, char *Source)
{
  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  _DWORD *v6; // edx
  int i; // eax

  TechnoTypeClass::ReadINI((char *)this, Source, 0); /*0x5236ae*/
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
  *(_DWORD *)(this + 3664) = &TypeList<AnimTypeClass const *>::`vftable'; /*0x523709*/
  AnimTypeVector::Constructor((_DWORD *)(this + 3692), 0, 0); /*0x523719*/
  *(_DWORD *)(this + 3712) = 10; /*0x52371e*/
  *(_DWORD *)(this + 3708) = 0; /*0x523721*/
  *(_DWORD *)(this + 3692) = &TypeList<AnimTypeClass const *>::`vftable'; /*0x523724*/
  VectorClass::Construct((_DWORD *)(this + 3720), 0, 0); /*0x523734*/
  *(_DWORD *)(this + 3740) = 10; /*0x523739*/
  *(_DWORD *)(this + 3736) = 0; /*0x52373c*/
  *(_DWORD *)(this + 3720) = &TypeList<int>::`vftable'; /*0x52373f*/
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
  *(_DWORD *)(this + 12) = &InfantryTypeClass::`vftable'; /*0x5237fb*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x523802*/
  v3 = dword_A8E358; /*0x523807*/
  if ( dword_A8E358 < dword_A8E350 /*0x523845*/
    || (byte_A8E355 || !dword_A8E350)
    && dword_A8E35C > 0
    && (v4 = (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8E348 + 8))(
               &dword_A8E348,
               dword_A8E350 + dword_A8E35C,
               0) == 0,
        v3 = dword_A8E358,
        !v4) )
  {
    dword_A8E358 = v3 + 1; /*0x52384a*/
    *((_DWORD *)dword_A8E34C + v3) = this; /*0x523854*/
    v3 = dword_A8E358; /*0x523857*/
  }
  v5 = 0; /*0x52385c*/
  if ( v3 <= 0 ) /*0x523860*/
  {
LABEL_11:
    v5 = -1; /*0x523874*/
  }
  else
  {
    v6 = dword_A8E34C; /*0x523862*/
    while ( *v6 != this ) /*0x52386a*/
    {
      ++v5; /*0x52386c*/
      ++v6; /*0x52386d*/
      if ( v5 >= v3 ) /*0x523872*/
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
_DWORD *__thiscall InfantryTypeClass::Constructor_523980(InfantryTypeClass *this, int a2)
{
  TechnoTypeClass::Construct((int)this, a2); /*0x523988*/
  this->DeadBodies[0] = (int)&TypeList<AnimTypeClass const *>::`vftable'; /*0x523992*/
  this->DeathAnims[0] = (int)&TypeList<AnimTypeClass const *>::`vftable'; /*0x523998*/
  this->VoiceComment[0] = (int)&TypeList<int>::`vftable'; /*0x52399e*/
  this->TechnoTypeClass = &InfantryTypeClass::`vftable'; /*0x5239a8*/
  this->? = &InfantryTypeClass::`vftable'; /*0x5239ae*/
  this->? = &InfantryTypeClass::`vftable'; /*0x5239b5*/
  this->? = &InfantryTypeClass::`vftable'; /*0x5239bc*/
  return &this->TechnoTypeClass; /*0x5239c5*/
}



// ==== 0x005239D0  InfantryClass::ProcessAnimation  this=InfantryTypeClass  sig=csp ====
int __thiscall InfantryClass::ProcessAnimation(InfantryClass *this)
{
  int v2; // eax
  void *v3; // eax
  void *v4; // eax
  void *v5; // eax
  InfantryClass *v7; // [esp+8h] [ebp-4h] BYREF

  this->FootClass = &InfantryTypeClass::`vftable'; /*0x5239d7*/
  this->? = &InfantryTypeClass::`vftable'; /*0x5239dd*/
  this->? = &InfantryTypeClass::`vftable'; /*0x5239e4*/
  this->? = &InfantryTypeClass::`vftable'; /*0x5239eb*/
  AbstractClass::AnnounceExpiredPointer(&this->FootClass, 1); /*0x5239f2*/
  v7 = this; /*0x523a07*/
  v2 = (*(int (__thiscall **)(_DWORD *, InfantryClass **))(dword_A8E348 + 16))(&dword_A8E348, &v7); /*0x523a0b*/
  if ( v2 != -1 && v2 < dword_A8E358 && v2 < --dword_A8E358 ) /*0x523a26*/
  {
    do /*0x523a3e*/
    {
      ++v2; /*0x523a2e*/
      *((_DWORD *)dword_A8E34C + v2 - 1) = *((_DWORD *)dword_A8E34C + v2); /*0x523a32*/
    }
    while ( v2 < dword_A8E358 ); /*0x523a3e*/
  }
  __3_YAXPAX_Z(*((void **)this + 911)); /*0x523a47*/
  this->qE3C = 0; /*0x523a51*/
  v3 = (void *)this->VoiceComment_Items; /*0x523a57*/
  this->qE88 = &VectorClass<int>::`vftable'; /*0x523a5f*/
  if ( v3 && this->VoiceComment_FlagByte ) /*0x523a6b*/
  {
    __3_YAXPAX_Z(v3); /*0x523a74*/
    this->VoiceComment_Items = 0; /*0x523a7c*/
  }
  this->VoiceComment_FlagByte = 0; /*0x523a82*/
  this->q3A4 = 0; /*0x523a88*/
  v4 = (void *)this->q39C; /*0x523a8e*/
  this->qE6C = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x523a94*/
  if ( v4 && this->DeathAnims_FlagByte ) /*0x523aa2*/
  {
    __3_YAXPAX_Z(v4); /*0x523aab*/
    this->q39C = 0; /*0x523ab3*/
  }
  this->DeathAnims_FlagByte = 0; /*0x523ab9*/
  this->DeathAnims_Capacity = 0; /*0x523abf*/
  v5 = (void *)this->DeadBodies_Items; /*0x523ac5*/
  this->VHPScan = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x523acb*/
  if ( v5 && this->DeadBodies_FlagByte ) /*0x523ad9*/
  {
    __3_YAXPAX_Z(v5); /*0x523ae2*/
    this->DeadBodies_Items = 0; /*0x523aea*/
  }
  this->DeadBodies_FlagByte = 0; /*0x523af2*/
  this->DeadBodies_Capacity = 0; /*0x523af8*/
  return TechnoTypeClass::DTOR((int)this); /*0x523b03*/
}



// ==== 0x00523B10  InfantryTypeClass::ConstructInfantry  this=InfantryTypeClass  sig=csp ====
InfantryClass *__thiscall InfantryTypeClass::ConstructInfantry(InfantryTypeClass *this, IUnknown *ppv)
{
  int v2; // edi
  int v4; // eax

  v4 = __2_YAPAXI_Z(0x6F0u); /*0x523b18*/
  if ( v4 ) /*0x523b22*/
    return (InfantryClass *)InfantryClass::Construct(v4, v2, (int)this, ppv); /*0x523b2c*/
  else
    return 0; /*0x523b35*/
}



// ==== 0x00523B40  InfantryTypeClass::CreateInfantry  this=InfantryTypeClass  sig=csp ====
char __thiscall InfantryTypeClass::CreateInfantry(InfantryTypeClass *this, __int16 *a2, IUnknown *ppv)
{
  int v3; // edi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  CellClass *v8; // eax
  int *v9; // eax
  int v10; // ecx
  int v11; // edx
  _DWORD v13[3]; // [esp+4h] [ebp-24h] BYREF
  _DWORD v14[3]; // [esp+10h] [ebp-18h] BYREF
  int v15[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v5 = __2_YAPAXI_Z(0x6F0u); /*0x523b4b*/
  if ( v5 ) /*0x523b55*/
  {
    v6 = InfantryClass::Construct(v5, v3, (int)this, ppv); /*0x523b68*/
    if ( v6 ) /*0x523b6c*/
    {
      v7 = a2[1] << 8; /*0x523b85*/
      v13[0] = (*a2 << 8) + 128; /*0x523b93*/
      v13[1] = v7 + 128; /*0x523b9b*/
      v13[2] = 0; /*0x523bb1*/
      v8 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v13); /*0x523bb9*/
      v9 = ObjectPlacement::CalcPosition((ObjectPlacement *)v8, v15, v13, 0, 0, 0); /*0x523bc0*/
      v14[0] = *v9; /*0x523bcf*/
      v10 = v9[1]; /*0x523bd5*/
      v14[1] = v10; /*0x523bd9*/
      v11 = v9[2]; /*0x523bdd*/
      v14[2] = v11; /*0x523be0*/
      if ( v14[0] != *(_DWORD *)&stru_A8EB00.?[1692] /*0x523bf4*/
        || v10 != *(_DWORD *)&stru_A8EB00.?[1696]
        || v11 != *(_DWORD *)&stru_A8EB00.?[1700] )
      {
        return (*(char (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v6 + 216))(v6, v14, 64); /*0x523c0b*/
      }
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 32))(v6, 1); /*0x523c14*/
    }
  }
  return 0; /*0x523c07*/
}



// ==== 0x00523C20  InfantryTypeClass::GetDimensions  this=InfantryTypeClass  sig=csp ====
int *__stdcall InfantryTypeClass::GetDimensions(InfantryTypeClass *this)
{
  if ( (stru_A8EB00.?[1764] & 1) == 0 ) /*0x523c2b*/
  {
    stru_A8EB00.?[1764] |= 1u; /*0x523c46*/
    *(_DWORD *)&stru_A8EB00.?[1704] = 0; /*0x523c4c*/
    *(_DWORD *)&stru_A8EB00.?[1708] = 2147450879; /*0x523c64*/
    atexit(nullsub_147); /*0x523c6a*/
  }
  return (int *)&stru_A8EB00.?[1704]; /*0x523c78*/
}



// ==== 0x00523C80  nullsub_147  this=-  sig=ida-proto ====
void __cdecl nullsub_147()
{
  ; /*0x523c80*/
}



// ==== 0x00523C90  Factory::FindExitCellByName  this=Factory  sig=csp ====
int __thiscall Factory::FindExitCellByName(Factory *this)
{
  int v2; // esi

  if ( !_strcmpi(this->__pad_0, g_Str__none_) ) /*0x523c9a*/
    return -1; /*0x523c9a*/
  if ( !_strcmpi(this->__pad_0, g_Str_none) ) /*0x523cac*/
    return -1; /*0x523cac*/
  v2 = 0; /*0x523cbd*/
  if ( dword_A8E358 <= 0 ) /*0x523cc1*/
    return -1; /*0x523ce6*/
  while ( _strcmpi((char *)(*((_DWORD *)dword_A8E34C + v2) + 36), this->__pad_0) ) /*0x523cda*/
  {
    if ( ++v2 >= dword_A8E358 ) /*0x523ce4*/
      return -1; /*0x523ce4*/
  }
  return v2; /*0x523ce6*/
}



// ==== 0x00523D00  AnimSequence::Parse  this=AnimSequence  sig=csp ====
unsigned __int8 **__thiscall AnimSequence::Parse(AnimSequence *this)
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
  int *v19; // [esp+10h] [ebp-114h]
  int v20; // [esp+14h] [ebp-110h]
  int v21; // [esp+18h] [ebp-10Ch]
  char Buffer[32]; // [esp+1Ch] [ebp-108h] BYREF
  char Destination[32]; // [esp+3Ch] [ebp-E8h] BYREF
  char v24[200]; // [esp+5Ch] [ebp-C8h] BYREF

  result = (unsigned __int8 **)INIClass::GetString( /*0x523d26*/
                                 (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
                                 (unsigned __int8 *)this + 504,
                                 aSequence,
                                 &g_INI_DefaultBuffer,
                                 Destination,
                                 32);
  if ( (int)result > 0 ) /*0x523d2d*/
  {
    v3 = *((_DWORD *)this + 911); /*0x523d33*/
    result = (unsigned __int8 **)&stru_8255B0.Name[6]; /*0x523d3f*/
    v4 = -12 - v3; /*0x523d44*/
    v21 = v3; /*0x523d48*/
    v19 = &stru_8255B0.Name[6]; /*0x523d4c*/
    v5 = (_DWORD *)(v3 + 12); /*0x523d50*/
    v20 = -12 - v3; /*0x523d53*/
    do /*0x524086*/
    {
      v6 = *result; /*0x523d5d*/
      v15 = g_INI_DefaultBuffer; /*0x523d61*/
      v16 = 0; /*0x523d65*/
      v17 = 0; /*0x523d6d*/
      v18 = 0; /*0x523d73*/
      if ( INIClass::GetString( /*0x523d8f*/
             (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
             (unsigned __int8 *)Destination,
             v6,
             &g_INI_DefaultBuffer,
             Buffer,
             32) > 0 )
      {
        sscanf(Buffer, "%d,%d,%d,%s", v5 - 3, v5 - 2, v5 - 1, &v15); /*0x523db0*/
        if ( !strcmp(aN, &v15) ) /*0x523dc7*/
        {
          *v5 = 0; /*0x523dee*/
        }
        else if ( !strcmp(aNe, &v15) ) /*0x523e05*/
        {
          *v5 = 1; /*0x523e2c*/
        }
        else if ( !strcmp(aE, &v15) ) /*0x523e47*/
        {
          *v5 = 2; /*0x523e6e*/
        }
        else if ( !strcmp(aSe, &v15) ) /*0x523e89*/
        {
          *v5 = 3; /*0x523eb0*/
        }
        else if ( !strcmp(aS_5, &v15) ) /*0x523ecb*/
        {
          *v5 = 4; /*0x523ef2*/
        }
        else if ( !strcmp(aSw, &v15) ) /*0x523f0d*/
        {
          *v5 = 5; /*0x523f34*/
        }
        else if ( !strcmp(g_Str_W, &v15) ) /*0x523f4c*/
        {
          *v5 = 6; /*0x523f73*/
        }
        else if ( !strcmp(aNw, &v15) ) /*0x523f8b*/
        {
          *v5 = 7; /*0x523fb2*/
        }
      }
      sprintf(v24, "%sSounds", (const char *)*v19); /*0x523fca*/
      if ( INIClass::GetString( /*0x523ff4*/
             (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
             (unsigned __int8 *)Destination,
             (unsigned __int8 *)v24,
             &g_INI_DefaultBuffer,
             Buffer,
             32) > 0 )
      {
        v7 = strtok(Buffer, asc_8258AC); /*0x524000*/
        while ( v7 ) /*0x52400a*/
        {
          v8 = atoi(v7); /*0x524019*/
          v9 = strtok(0, asc_8258AC); /*0x52401b*/
          if ( !v9 ) /*0x524025*/
            break; /*0x524025*/
          Index = VocClass::FindIndex((VocClass *)v9); /*0x524035*/
          v7 = strtok(0, asc_8258AC); /*0x524037*/
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
char __userpurge InfantryTypeClass::LoadFromINI@<al>(InfantryTypeClass *this, double a2@<st0>, unsigned __int8 ***a3)
{
  int v3; // ecx
  int v4; // esi
  int PipIdx; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  unsigned __int8 *inited; // eax
  DynamicVectorClass *v11; // eax
  char *i; // eax
  int v13; // ecx
  int v14; // edx
  char *j; // eax
  char Bool_Overwrite; // al
  int v17; // ebx
  int Index; // eax
  int v19; // ebx
  int v20; // eax
  char v21; // al
  char v22; // cl
  char v23; // al
  char v24; // al
  char v25; // cl
  char v26; // al
  int Int_Overwrite; // eax
  char v28; // cl
  char v29; // al
  char v30; // al
  char v31; // cl
  char v32; // al
  char v33; // al
  char v34; // cl
  char v35; // al
  char v36; // al
  char v37; // cl
  char v38; // al
  char v39; // al
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  DynamicVectorClass v44; // [esp-1Ch] [ebp-E8h] BYREF
  int v45; // [esp-4h] [ebp-D0h]
  unsigned __int8 ***v46; // [esp+0h] [ebp-CCh]
  DynamicVectorClass *INIClassIntList; // [esp+10h] [ebp-BCh] BYREF
  DynamicVector v48; // [esp+14h] [ebp-B8h] BYREF
  int v49; // [esp+40h] [ebp-8Ch]
  int v50; // [esp+44h] [ebp-88h]
  int v51; // [esp+48h] [ebp-84h]
  char String[128]; // [esp+4Ch] [ebp-80h] BYREF

  v4 = v3; /*0x5240b0*/
  INIClass::ResetSection((INIClass *)this); /*0x5240b5*/
  v45 = (int)this; /*0x5240ba*/
  *(_BYTE *)(v4 + 3215) = 0; /*0x5240bd*/
  if ( !(unsigned __int8)ObjectTypeClass::LoadExtras((TechnoTypeClass *)v45, a2, v46) ) /*0x5240c4*/
    return 0; /*0x524751*/
  *(_DWORD *)(v4 + 3580) = INIClass::GetPipIdx( /*0x5240e8*/
                             (INIClass *)this,
                             (unsigned __int8 *)(v4 + 36),
                             aPip,
                             *(_DWORD *)(v4 + 3580));
  PipIdx = INIClass::GetPipIdx((INIClass *)this, (unsigned __int8 *)(v4 + 36), aOccupypip, *(_DWORD *)(v4 + 3584)); /*0x5240fd*/
  v6 = *(_DWORD *)(v4 + 3588); /*0x524102*/
  v45 = 128; /*0x52410c*/
  v44.CapacityIncrement = (int)String; /*0x524111*/
  v44.Count = (int)&g_INI_DefaultBuffer; /*0x524112*/
  v44.? = (int)aOccupyweapon; /*0x524117*/
  *(_DWORD *)&v44.?[3] = v4 + 36; /*0x52411c*/
  *(_DWORD *)(v4 + 3584) = PipIdx; /*0x52411f*/
  if ( INIClass::GetString( /*0x524125*/
         (INIClass *)this,
         *(unsigned __int8 **)&v44.?[3],
         (unsigned __int8 *)v44.?,
         (char *)v44.Count,
         (char *)v44.CapacityIncrement,
         v45) )
  {
    v7 = InfantryTypeClass::Find(String); /*0x524132*/
  }
  else
  {
    v7 = v6; /*0x524139*/
  }
  v8 = *(_DWORD *)(v4 + 3616); /*0x52413b*/
  *(_DWORD *)(v4 + 3588) = v7; /*0x524141*/
  if ( INIClass::GetString( /*0x52415e*/
         (INIClass *)this,
         (unsigned __int8 *)(v4 + 36),
         aEliteoccupywea,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    v9 = InfantryTypeClass::Find(String); /*0x52416b*/
  }
  else
  {
    v9 = v8; /*0x524172*/
  }
  *(_DWORD *)(v4 + 3616) = v9; /*0x52417f*/
  INIClassIntList = &v44; /*0x524186*/
  DynamicVectorClass::Copy(&v44, (_DWORD *)(v4 + 3720)); /*0x52418a*/
  *(_DWORD *)INIClassIntList->VectorClass = &TypeList<int>::`vftable'; /*0x524198*/
  inited = (unsigned __int8 *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36)); /*0x5241a0*/
  INIClassIntList = (DynamicVectorClass *)GetINIClassIntList( /*0x5241b4*/
                                            (int)&v48,
                                            (unsigned __int8 ***)this,
                                            inited,
                                            (unsigned __int8 *)aVoicecomment,
                                            *(void ***)v44.VectorClass,
                                            *(void **)&v44.?[3],
                                            *(int *)&v44.?[3],
                                            v44.?,
                                            v44.Count,
                                            v44.CapacityIncrement,
                                            v45);
  TypeList::Copy((TypeList *)(v4 + 3720), INIClassIntList); /*0x5241b8*/
  v11 = INIClassIntList; /*0x5241bd*/
  *(_DWORD *)(v4 + 3736) = INIClassIntList->Count; /*0x5241c4*/
  *(_DWORD *)(v4 + 3740) = v11->CapacityIncrement; /*0x5241ca*/
  *(_DWORD *)(v4 + 3744) = *(_DWORD *)v11[1].VectorClass; /*0x5241d4*/
  *(_DWORD *)v48.__pad_0 = &VectorClass<int>::`vftable'; /*0x5241d7*/
  VectorClass::Destroy((int)&v48); /*0x5241df*/
  if ( INIClass::GetString( /*0x5241fb*/
         (INIClass *)this,
         (unsigned __int8 *)(v4 + 36),
         aDeadbodies,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)&v48, 0, 0); /*0x524210*/
    *(_DWORD *)v48.__pad_0 = &TypeList<AnimTypeClass const *>::`vftable'; /*0x52421f*/
    for ( i = strtok(String, Str); i; i = strtok(0, Str) ) /*0x524231*/
    {
      if ( !*i ) /*0x524233*/
        break; /*0x524236*/
      INIClassIntList = (DynamicVectorClass *)AnimTypeClass::FindOrCreate(i); /*0x524241*/
      if ( INIClassIntList ) /*0x524245*/
        DynamicVector::Add_Alt4(&v48, &INIClassIntList); /*0x524250*/
    }
    TypeList::AnimTypeCopy((TypeList *)&v48.DynamicVector_field_0x1C, &v48); /*0x524271*/
    *(_DWORD *)v48.__pad_0 = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x52427a*/
    DynamicVectorClass::Destroy_Alt((_VectorClass_PBVAnimTypeClass *)&v48); /*0x524282*/
  }
  else
  {
    TypeList::AnimTypeCopy((TypeList *)&v48.DynamicVector_field_0x1C, (_DWORD *)(v4 + 3664)); /*0x524294*/
  }
  VectorClass::CopyDefault((VectorClass *)(v4 + 3664), &v48.DynamicVector_field_0x1C); /*0x5242a6*/
  v13 = v50; /*0x5242af*/
  v14 = v51; /*0x5242b3*/
  *(_DWORD *)(v4 + 3680) = v49; /*0x5242b7*/
  *(_DWORD *)(v4 + 3684) = v13; /*0x5242ba*/
  *(_DWORD *)(v4 + 3688) = v14; /*0x5242bd*/
  v48.DynamicVector_field_0x1C = (AbstractClass *)&VectorClass<AnimTypeClass const *>::`vftable'; /*0x5242c9*/
  DynamicVectorClass::Destroy_Alt((_VectorClass_PBVAnimTypeClass *)&v48.DynamicVector_field_0x1C); /*0x5242cd*/
  if ( INIClass::GetString( /*0x5242e9*/
         (INIClass *)this,
         (unsigned __int8 *)(v4 + 36),
         aDeathanims,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)&v48, 0, 0); /*0x5242fa*/
    *(_DWORD *)v48.__pad_0 = &TypeList<AnimTypeClass const *>::`vftable'; /*0x524309*/
    for ( j = strtok(String, Str); j; j = strtok(0, Str) ) /*0x52431b*/
    {
      if ( !*j ) /*0x52431d*/
        break; /*0x524320*/
      INIClassIntList = (DynamicVectorClass *)AnimTypeClass::FindOrCreate(j); /*0x52432b*/
      if ( INIClassIntList ) /*0x52432f*/
        DynamicVector::Add_Alt4(&v48, &INIClassIntList); /*0x52433a*/
    }
    TypeList::AnimTypeCopy((TypeList *)&v48.DynamicVector_field_0x1C, &v48); /*0x52435b*/
    *(_DWORD *)v48.__pad_0 = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x524364*/
    DynamicVectorClass::Destroy_Alt((_VectorClass_PBVAnimTypeClass *)&v48); /*0x524368*/
  }
  else
  {
    TypeList::AnimTypeCopy((TypeList *)&v48.DynamicVector_field_0x1C, (_DWORD *)(v4 + 3692)); /*0x52437a*/
  }
  InfantryTypeClass::CopyDataArray((InfantryTypeClass *)(v4 + 3692), &v48.DynamicVector_field_0x1C); /*0x52438c*/
  *(_DWORD *)(v4 + 3716) = v51; /*0x524399*/
  v48.DynamicVector_field_0x1C = (AbstractClass *)&VectorClass<AnimTypeClass const *>::`vftable'; /*0x52439c*/
  DynamicVectorClass::Destroy_Alt((_VectorClass_PBVAnimTypeClass *)&v48.DynamicVector_field_0x1C); /*0x5243a4*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x5243b8*/
                     (int *)this,
                     (unsigned __int8 *)(v4 + 36),
                     aCyborg,
                     *(_BYTE *)(v4 + 3756));
  LOBYTE(v45) = *(_BYTE *)(v4 + 3757); /*0x5243c5*/
  v44.CapacityIncrement = (int)aNothuman; /*0x5243c6*/
  v44.Count = v4 + 36; /*0x5243cb*/
  *(_BYTE *)(v4 + 3756) = Bool_Overwrite; /*0x5243cc*/
  *(_BYTE *)(v4 + 3757) = INIClass::ReadBool_Overwrite( /*0x5243d7*/
                            (int *)this,
                            (unsigned __int8 *)v44.Count,
                            (unsigned __int8 *)v44.CapacityIncrement,
                            v45);
  if ( *(_BYTE *)(v4 + 3756) ) /*0x5243dd*/
    *(_BYTE *)(v4 + 3215) = 1; /*0x5243e7*/
  v17 = *(_DWORD *)(v4 + 3748); /*0x5243ee*/
  if ( !INIClass::GetString( /*0x524420*/
          (INIClass *)this,
          (unsigned __int8 *)(v4 + 36),
          aEnterwatersoun,
          &g_INI_DefaultBuffer,
          String,
          128)
    || (Index = VocClass::FindIndex((VocClass *)String), Index == -1) )
  {
    Index = v17; /*0x524422*/
  }
  v19 = *(_DWORD *)(v4 + 3752); /*0x524424*/
  v45 = 128; /*0x52442e*/
  v44.CapacityIncrement = (int)String; /*0x524433*/
  v44.Count = (int)&g_INI_DefaultBuffer; /*0x524434*/
  v44.? = (int)aLeavewatersoun; /*0x524439*/
  *(_DWORD *)&v44.?[3] = v4 + 36; /*0x52443e*/
  *(_DWORD *)(v4 + 3748) = Index; /*0x524441*/
  if ( !INIClass::GetString( /*0x52445c*/
          (INIClass *)this,
          *(unsigned __int8 **)&v44.?[3],
          (unsigned __int8 *)v44.?,
          (char *)v44.Count,
          (char *)v44.CapacityIncrement,
          v45)
    || (v20 = VocClass::FindIndex((VocClass *)String), v20 == -1) )
  {
    v20 = v19; /*0x52445e*/
  }
  LOBYTE(v45) = *(_BYTE *)(v4 + 3772); /*0x524468*/
  v44.CapacityIncrement = (int)aFearless; /*0x524469*/
  v44.Count = v4 + 36; /*0x52446e*/
  *(_DWORD *)(v4 + 3752) = v20; /*0x52446f*/
  *(_BYTE *)(v4 + 3772) = INIClass::ReadBool_Overwrite( /*0x52447a*/
                            (int *)this,
                            (unsigned __int8 *)v44.Count,
                            (unsigned __int8 *)v44.CapacityIncrement,
                            v45);
  v21 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aFraidycat, *(_BYTE *)(v4 + 3775)); /*0x52448f*/
  v22 = *(_BYTE *)(v4 + 3774); /*0x524494*/
  *(_BYTE *)(v4 + 3775) = v21; /*0x52449a*/
  v23 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aInfiltrate, v22); /*0x5244a9*/
  LOBYTE(v45) = *(_BYTE *)(v4 + 3758); /*0x5244b6*/
  v44.CapacityIncrement = (int)aIvan; /*0x5244b7*/
  v44.Count = v4 + 36; /*0x5244bc*/
  *(_BYTE *)(v4 + 3774) = v23; /*0x5244bd*/
  *(_BYTE *)(v4 + 3758) = INIClass::ReadBool_Overwrite( /*0x5244c8*/
                            (int *)this,
                            (unsigned __int8 *)v44.Count,
                            (unsigned __int8 *)v44.CapacityIncrement,
                            v45);
  v24 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aOccupier, *(_BYTE *)(v4 + 3764)); /*0x5244dd*/
  v25 = *(_BYTE *)(v4 + 3765); /*0x5244e2*/
  *(_BYTE *)(v4 + 3764) = v24; /*0x5244e8*/
  v26 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aAssaulter, v25); /*0x5244f7*/
  v45 = *(_DWORD *)(v4 + 3760); /*0x524504*/
  v44.CapacityIncrement = (int)aDetectiondista; /*0x524505*/
  v44.Count = v4 + 36; /*0x52450a*/
  *(_BYTE *)(v4 + 3765) = v26; /*0x52450b*/
  *(_DWORD *)(v4 + 3760) = INIClass::ReadInt_Overwrite( /*0x524516*/
                             (bool *)this,
                             (unsigned __int8 *)v44.Count,
                             (unsigned __int8 *)v44.CapacityIncrement,
                             v45);
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x52452b*/
                    (bool *)this,
                    (unsigned __int8 *)(v4 + 36),
                    aHarvestrate,
                    *(_DWORD *)(v4 + 3768));
  v28 = *(_BYTE *)(v4 + 3778); /*0x524530*/
  *(_DWORD *)(v4 + 3768) = Int_Overwrite; /*0x524536*/
  v29 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aC4, v28); /*0x524545*/
  LOBYTE(v45) = *(_BYTE *)(v4 + 3777); /*0x524552*/
  v44.CapacityIncrement = (int)&g_INI_Key_Civilian; /*0x524553*/
  v44.Count = v4 + 36; /*0x524558*/
  *(_BYTE *)(v4 + 3778) = v29; /*0x524559*/
  *(_BYTE *)(v4 + 3777) = INIClass::ReadBool_Overwrite( /*0x524564*/
                            (int *)this,
                            (unsigned __int8 *)v44.Count,
                            (unsigned __int8 *)v44.CapacityIncrement,
                            v45);
  v30 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aEngineer, *(_BYTE *)(v4 + 3779)); /*0x524579*/
  v31 = *(_BYTE *)(v4 + 3776); /*0x52457e*/
  *(_BYTE *)(v4 + 3779) = v30; /*0x524584*/
  v32 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aTiberiumproof, v31); /*0x524593*/
  LOBYTE(v45) = *(_BYTE *)(v4 + 3780); /*0x5245a0*/
  v44.CapacityIncrement = (int)aAgent; /*0x5245a1*/
  v44.Count = v4 + 36; /*0x5245a6*/
  *(_BYTE *)(v4 + 3776) = v32; /*0x5245a7*/
  *(_BYTE *)(v4 + 3780) = INIClass::ReadBool_Overwrite( /*0x5245b2*/
                            (int *)this,
                            (unsigned __int8 *)v44.Count,
                            (unsigned __int8 *)v44.CapacityIncrement,
                            v45);
  v33 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aThief, *(_BYTE *)(v4 + 3781)); /*0x5245c7*/
  v34 = *(_BYTE *)(v4 + 3782); /*0x5245cc*/
  *(_BYTE *)(v4 + 3781) = v33; /*0x5245d2*/
  v35 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aVehiclethief, v34); /*0x5245e1*/
  LOBYTE(v45) = *(_BYTE *)(v4 + 3783); /*0x5245ee*/
  v44.CapacityIncrement = (int)aDoggie; /*0x5245ef*/
  v44.Count = v4 + 36; /*0x5245f4*/
  *(_BYTE *)(v4 + 3782) = v35; /*0x5245f5*/
  *(_BYTE *)(v4 + 3783) = INIClass::ReadBool_Overwrite( /*0x524600*/
                            (int *)this,
                            (unsigned __int8 *)v44.Count,
                            (unsigned __int8 *)v44.CapacityIncrement,
                            v45);
  v36 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aDeployer, *(_BYTE *)(v4 + 3784)); /*0x524615*/
  v37 = *(_BYTE *)(v4 + 3785); /*0x52461a*/
  *(_BYTE *)(v4 + 3784) = v36; /*0x524620*/
  v38 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aDeployedcrusha, v37); /*0x52462f*/
  LOBYTE(v45) = *(_BYTE *)(v4 + 3786); /*0x52463c*/
  v44.CapacityIncrement = (int)aUseownname; /*0x52463d*/
  v44.Count = v4 + 36; /*0x524642*/
  *(_BYTE *)(v4 + 3785) = v38; /*0x524643*/
  *(_BYTE *)(v4 + 3786) = INIClass::ReadBool_Overwrite( /*0x52464e*/
                            (int *)this,
                            (unsigned __int8 *)v44.Count,
                            (unsigned __int8 *)v44.CapacityIncrement,
                            v45);
  *(_BYTE *)(v4 + 3787) = INIClass::ReadBool_Overwrite( /*0x524668*/
                            (int *)this,
                            (unsigned __int8 *)(v4 + 36),
                            aJumpjetturn,
                            *(_BYTE *)(v4 + 3787));
  if ( *(_BYTE *)(v4 + 3778) ) /*0x52466e*/
    *(_BYTE *)(v4 + 3774) = 1; /*0x524678*/
  if ( *(_BYTE *)(v4 + 3779) ) /*0x52467f*/
    *(_BYTE *)(v4 + 3774) = 1; /*0x524689*/
  if ( *(_BYTE *)(v4 + 3780) ) /*0x524690*/
    *(_BYTE *)(v4 + 3774) = 1; /*0x52469a*/
  v39 = INIClass::ReadBool_Overwrite( /*0x5246b9*/
          (int *)&DSurface_ViewBounds.__pad_FC[228],
          (unsigned __int8 *)(v4 + 504),
          aCrawls,
          *(_BYTE *)(v4 + 3773));
  v45 = *(_DWORD *)(v4 + 3648); /*0x5246c9*/
  v44.CapacityIncrement = (int)aFireup; /*0x5246ca*/
  v44.Count = v4 + 504; /*0x5246cf*/
  *(_BYTE *)(v4 + 3773) = v39; /*0x5246d0*/
  *(_DWORD *)(v4 + 3648) = INIClass::ReadInt_Overwrite( /*0x5246db*/
                             (bool *)&DSurface_ViewBounds.__pad_FC[228],
                             (unsigned __int8 *)v44.Count,
                             (unsigned __int8 *)v44.CapacityIncrement,
                             v45);
  v40 = INIClass::ReadInt_Overwrite( /*0x5246f3*/
          (bool *)&DSurface_ViewBounds.__pad_FC[228],
          (unsigned __int8 *)(v4 + 504),
          aFireprone,
          *(_DWORD *)(v4 + 3652));
  v41 = *(_DWORD *)(v4 + 3656); /*0x5246f8*/
  *(_DWORD *)(v4 + 3652) = v40; /*0x5246fe*/
  v42 = INIClass::ReadInt_Overwrite( /*0x524710*/
          (bool *)&DSurface_ViewBounds.__pad_FC[228],
          (unsigned __int8 *)(v4 + 504),
          aSecondaryfire,
          v41);
  v45 = *(_DWORD *)(v4 + 3660); /*0x524720*/
  v44.CapacityIncrement = (int)g_INI_Key_SecondaryProne; /*0x524721*/
  v44.Count = v4 + 504; /*0x524726*/
  *(_DWORD *)(v4 + 3656) = v42; /*0x524727*/
  *(_DWORD *)(v4 + 3660) = INIClass::ReadInt_Overwrite( /*0x524734*/
                             (bool *)&DSurface_ViewBounds.__pad_FC[228],
                             (unsigned __int8 *)v44.Count,
                             (unsigned __int8 *)v44.CapacityIncrement,
                             v45);
  AnimSequence::Parse((AnimSequence *)v4); /*0x52473a*/
  return 1; /*0x524741*/
}



// ==== 0x00524760  InfantryTypeClass::GetDefaultDimensions  this=InfantryTypeClass  sig=csp ====
_DWORD *__stdcall InfantryTypeClass::GetDefaultDimensions(InfantryTypeClass *this)
{
  void *v1; // esi

  v1 = (void *)(2 * *(_DWORD *)&stru_A8EB00.?[1768]); /*0x52476c*/
  this->TechnoTypeClass = (void *)85; /*0x524777*/
  this->? = (void *)85; /*0x524779*/
  this->? = v1; /*0x52477c*/
  return &this->TechnoTypeClass; /*0x52477f*/
}



// ==== 0x00524790  InfantryTypeClass::GetGameplayValue  this=InfantryTypeClass  sig=csp ====
int InfantryTypeClass::GetGameplayValue(InfantryTypeClass *this)
{
  return *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5848); /*0x52479b*/
}



// ==== 0x005247A0  InfantryTypeClass::StubReturnFalse  this=InfantryTypeClass  sig=csp ====
int InfantryTypeClass::StubReturnFalse(InfantryTypeClass *this)
{
  return 0; /*0x5247a2*/
}



// ==== 0x005247B0  InfantryTypeClass::j_?do_always_noconv_codecvt_base_std__MBE_NXZ_19  this=InfantryTypeClass  sig=csp ====
// attributes: thunk
bool __thiscall InfantryTypeClass::j__do_always_noconv_codecvt_base_std__MBE_NXZ_19(std::codecvt_base *this)
{
  return AbstractClass::processWeaponFire(this);
}



// ==== 0x005247C0  InfantryTypeClass::CanAttackMove_IgnoreWeapon_0  this=InfantryTypeClass  sig=csp ====
// attributes: thunk
bool __thiscall TechnoTypeClass::CanAttackMove_IgnoreWeapon_0(int this)
{
  return TechnoTypeClass::CanAttackMove_IgnoreWeapon(this);
}



// ==== 0x005247D0  InfantryTypeClass::ClampToGroundHeight  this=InfantryTypeClass  sig=csp ====
_DWORD *__stdcall InfantryTypeClass::ClampToGroundHeight(InfantryTypeClass *this, int *a2)
{
  int GroundHeight; // eax
  void *v3; // ecx
  void *v5; // [esp+0h] [ebp-Ch] BYREF
  void *v6; // [esp+4h] [ebp-8h]
  int v7; // [esp+8h] [ebp-4h]

  v5 = (void *)*a2; /*0x5247d9*/
  v6 = (void *)a2[1]; /*0x5247ea*/
  v7 = a2[2]; /*0x5247f1*/
  GroundHeight = Cell::GetGroundHeight(&v5); /*0x5247f5*/
  v3 = (void *)v7; /*0x5247fa*/
  if ( v7 < GroundHeight ) /*0x524800*/
    v3 = (void *)Cell::GetGroundHeight(&v5); /*0x524811*/
  this->TechnoTypeClass = v5; /*0x52481e*/
  this->? = v6; /*0x524824*/
  this->? = v3; /*0x524828*/
  return &this->TechnoTypeClass; /*0x52482b*/
}



// ==== 0x00524840  InfantryTypeClass::PowerDrainUpdate  this=InfantryTypeClass  sig=csp ====
int __thiscall InfantryTypeClass::PowerDrainUpdate(InfantryTypeClass *this, int *a2)
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

  BuildingTypeClass::ProcessPower((int)this, a2); /*0x524849*/
  Power::TimerProcess(this->Pip[0]); /*0x524857*/
  Checksummer::Add_Buffer((Checksummer *)a2, (unsigned __int8 *)this->Sequence[0], 1512); /*0x52486a*/
  Power::TimerProcess(this->FireUp); /*0x524878*/
  Power::TimerProcess(this->FireProne); /*0x524886*/
  Power::TimerProcess(this->VoiceComment[4]); /*0x524894*/
  Power::TimerProcess(this->DeadBodies[4]); /*0x5248a2*/
  Power::TimerProcess(this->DeathAnims[4]); /*0x5248b0*/
  LOBYTE(v3) = this->Fearless; /*0x5248b5*/
  Power::FlagProcess((Power *)a2, v3); /*0x5248be*/
  LOBYTE(v4) = this->Crawls; /*0x5248c3*/
  v5 = Power::FlagProcess((Power *)a2, v4); /*0x5248cc*/
  LOBYTE(v5) = this->Infiltrate; /*0x5248d1*/
  Power::FlagProcess((Power *)a2, v5); /*0x5248da*/
  LOBYTE(v6) = this->Fraidycat; /*0x5248df*/
  Power::FlagProcess((Power *)a2, v6); /*0x5248e8*/
  LOBYTE(v7) = this->TiberiumProof; /*0x5248ed*/
  v8 = Power::FlagProcess((Power *)a2, v7); /*0x5248f6*/
  LOBYTE(v8) = this->Civilian; /*0x5248fb*/
  Power::FlagProcess((Power *)a2, v8); /*0x524904*/
  LOBYTE(v9) = this->C4; /*0x524909*/
  Power::FlagProcess((Power *)a2, v9); /*0x524912*/
  LOBYTE(v10) = this->Engineer; /*0x524917*/
  v11 = Power::FlagProcess((Power *)a2, v10); /*0x524920*/
  LOBYTE(v11) = this->Agent; /*0x524925*/
  Power::FlagProcess((Power *)a2, v11); /*0x52492e*/
  LOBYTE(v12) = this->Thief; /*0x524933*/
  Power::FlagProcess((Power *)a2, v12); /*0x52493c*/
  LOBYTE(v13) = this->VehicleThief; /*0x524941*/
  return Power::FlagProcess((Power *)a2, v13); /*0x52494f*/
}



// ==== 0x00524960  InfantryTypeClass::LoadTypeData  this=InfantryTypeClass  sig=csp ====
int __userpurge InfantryTypeClass::LoadTypeData@<eax>(InfantryTypeClass *this, int a2, int a3, int a4)
{
  int v4; // ebp
  InfantryTypeClass *v5; // edi
  int v6; // ebx
  int v7; // esi
  int result; // eax
  int i; // ebx
  int j; // ebx
  int k; // ebx
  int m; // ebx
  int v13; // eax
  int v14; // [esp+70h] [ebp-4h]

  v5 = this; /*0x524964*/
  v6 = 0; /*0x524968*/
  if ( this->Sequence[0] ) /*0x52496a*/
  {
    __3_YAXPAX_Z((void *)this->Sequence[0]); /*0x524975*/
    v5->Sequence[0] = 0; /*0x52497d*/
  }
  v7 = a2; /*0x524983*/
  result = TechnoTypeClass::SaveLoad_Prefix((TechnoTypeClass *)v5, a2); /*0x524989*/
  v14 = result; /*0x524990*/
  if ( result >= 0 ) /*0x524994*/
  {
    if ( v5 ) /*0x52499c*/
      InfantryTypeClass::Constructor_523980(v5, (int)&this); /*0x5249a5*/
    VoxelAnimType::LoadAnim((char *)v5); /*0x5249ad*/
    ObjectTypeClass::Load2DArt((char *)v5); /*0x5249b4*/
    if ( v5 != (InfantryTypeClass *)-3720 ) /*0x5249c1*/
    {
      DynamicVectorClass::Construct((DynamicVectorClass *)v5->VoiceComment, 0, 0); /*0x5249c7*/
      v5->VoiceComment[0] = (int)&TypeList<int>::`vftable'; /*0x5249cc*/
    }
    (*(void (__stdcall **)(int, InfantryTypeClass **, int, _DWORD, int))(*(_DWORD *)v7 + 12))(v7, &this, 4, 0, v4); /*0x5249de*/
    if ( a2 > 0 ) /*0x5249e7*/
    {
      do /*0x524a09*/
      {
        (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v7 + 12))(v7, &a3, 4, 0); /*0x5249f5*/
        DynamicVector::Add_Alt((DynamicVector *)v5->VoiceComment, &a3); /*0x5249ff*/
        ++v6; /*0x524a04*/
      }
      while ( v6 < a2 ); /*0x524a09*/
    }
    if ( v5 != (InfantryTypeClass *)-3664 ) /*0x524a13*/
    {
      DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)v5->DeadBodies, 0, 0); /*0x524a1b*/
      v5->DeadBodies[0] = (int)&TypeList<AnimTypeClass const *>::`vftable'; /*0x524a20*/
    }
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v7 + 12))(v7, &a2, 4, 0); /*0x524a33*/
    for ( i = 0; i < a2; ++i ) /*0x524a3e*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v7 + 12))(v7, &a3, 4, 0); /*0x524a4c*/
      DynamicVector::Add_Alt4((DynamicVector *)v5->DeadBodies, &a3); /*0x524a56*/
    }
    for ( j = 0; j < v5->DeadBodies[4]; ++j ) /*0x524a6c*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v5->DeadBodies[1] + 4 * j)); /*0x524a7d*/
    if ( v5 != (InfantryTypeClass *)-3692 ) /*0x524a95*/
    {
      DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)v5->DeathAnims, 0, 0); /*0x524a9d*/
      v5->DeathAnims[0] = (int)&TypeList<AnimTypeClass const *>::`vftable'; /*0x524aa2*/
    }
    (*(void (__stdcall **)(int, int *, int))(*(_DWORD *)v7 + 12))(v7, &a2, 4); /*0x524ab5*/
    for ( k = 0; k < (int)this; ++k ) /*0x524ac0*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v7 + 12))(v7, &a2, 4, 0); /*0x524ace*/
      DynamicVector::Add_Alt4((DynamicVector *)v5->DeathAnims, &a2); /*0x524ad8*/
    }
    for ( m = 0; m < v5->DeathAnims[4]; ++m ) /*0x524aef*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v5->DeathAnims[1] + 4 * m)); /*0x524b00*/
    v13 = __2_YAPAXI_Z(0x5E8u); /*0x524b15*/
    v5->Sequence[0] = v13; /*0x524b1d*/
    (*(void (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v7 + 12))(v7, v13, 1512, 0); /*0x524b2e*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v5->OccupyWeapon); /*0x524b3d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v5->EliteOccupyWeapon); /*0x524b4e*/
    return v14; /*0x524b53*/
  }
  return result; /*0x524b57*/
}



// ==== 0x00524B60  InfantryTypeClass::SaveLoad_Prefix  this=InfantryTypeClass  sig=csp ====
int __userpurge InfantryTypeClass::SaveLoad_Prefix@<eax>(InfantryTypeClass *this, _DWORD *a2, int *a3, int a4, int a5)
{
  int v5; // ebx
  int result; // eax
  int v7; // ebp
  int v8; // edx
  int i; // ebx
  int v10; // edx
  int j; // ebx
  int v12; // edx
  int k; // ebx
  int v14; // [esp+48h] [ebp-Ch]
  int v15; // [esp+4Ch] [ebp-8h]

  result = TechnoTypeClass::SaveLoad_Prefix_0((TechnoTypeClass *)this, a2, a3, v14, v15); /*0x524b72*/
  v7 = result; /*0x524b77*/
  if ( result >= 0 ) /*0x524b7b*/
  {
    v8 = *a2; /*0x524b87*/
    a3 = (int *)this->VoiceComment[4]; /*0x524b94*/
    (*(void (__stdcall **)(_DWORD *, int **, int, _DWORD, int))(v8 + 16))(a2, &a3, 4, 0, v5); /*0x524b98*/
    for ( i = 0; i < a4; ++i ) /*0x524ba3*/
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, this->VoiceComment[1] + 4 * i, 4, 0); /*0x524bb6*/
    v10 = *a2; /*0x524bc6*/
    a4 = this->DeadBodies[4]; /*0x524bd2*/
    (*(void (__stdcall **)(_DWORD *, int *, int, _DWORD))(v10 + 16))(a2, &a4, 4, 0); /*0x524bd6*/
    for ( j = 0; j < a4; ++j ) /*0x524be1*/
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, this->DeadBodies[1] + 4 * j, 4, 0); /*0x524bf4*/
    v12 = *a2; /*0x524c04*/
    a4 = this->DeathAnims[4]; /*0x524c10*/
    (*(void (__stdcall **)(_DWORD *, int *, int, _DWORD))(v12 + 16))(a2, &a4, 4, 0); /*0x524c14*/
    for ( k = 0; k < a4; ++k ) /*0x524c1f*/
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, this->DeathAnims[1] + 4 * k, 4, 0); /*0x524c32*/
    (*(void (__stdcall **)(_DWORD *, int, int))(*a2 + 16))(a2, this->Sequence[0], 1512); /*0x524c4d*/
    return v7; /*0x524c52*/
  }
  return result; /*0x524c51*/
}



// ==== 0x00524C70  InfantryTypeClass::GetClassIdentifier  this=InfantryTypeClass  sig=csp ====
int __stdcall InfantryTypeClass::GetClassIdentifier(InfantryTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x524c76*/
    return -2147467261; /*0x524c78*/
  *a2 = -1366608936; /*0x524c86*/
  a2[1] = 298976796; /*0x524c8e*/
  a2[2] = 1610654892; /*0x524c97*/
  a2[3] = unk_7E95AC; /*0x524ca0*/
  return 0; /*0x524c7d*/
}



// ==== 0x00524CB0  KeywordType::FindOrCreate2  this=KeywordType  sig=csp ====
int __thiscall sub_524CB0(char *Source)
{
  int v2; // esi

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x524ccc*/
    return 0; /*0x524d2f*/
  v2 = 0; /*0x524cdd*/
  if ( dword_A8E358 <= 0 ) /*0x524ce1*/
  {
LABEL_6:
    if ( __2_YAPAXI_Z(0xED0u) ) /*0x524d0b*/
      return InfantryTypeClass::Constructor(Source); /*0x524d21*/
    return 0; /*0x524d15*/
  }
  while ( _strcmpi((const void *)(*((_DWORD *)dword_A8E34C + v2) + 36), Source) ) /*0x524cfa*/
  {
    if ( ++v2 >= dword_A8E358 ) /*0x524d04*/
      goto LABEL_6; /*0x524d04*/
  }
  return *((_DWORD *)dword_A8E34C + v2); /*0x524d1f*/
}



// ==== 0x00524D40  InfantryTypeClass::GetTypeIdentifier  this=InfantryTypeClass  sig=csp ====
int InfantryTypeClass::GetTypeIdentifier(InfantryTypeClass *this)
{
  return 16; /*0x524d45*/
}



// ==== 0x00524D50  InfantryTypeClass::GetObjectSize  this=InfantryTypeClass  sig=csp ====
int InfantryTypeClass::GetObjectSize(InfantryTypeClass *this)
{
  return 3792; /*0x524d55*/
}



// ==== 0x00524D60  InfantryTypeClass::GetAuxField  this=InfantryTypeClass  sig=csp ====
int __thiscall InfantryTypeClass::GetAuxField(InfantryTypeClass *this)
{
  return this->ArrayIndex; /*0x524d66*/
}



// ==== 0x00524D70  InfantryTypeClass::ddtor  this=InfantryTypeClass  sig=csp ====
int __thiscall InfantryTypeClass::ddtor(InfantryTypeClass *this, char a2)
{
  int v3; // eax
  void *v4; // eax
  void *v5; // eax
  void *v6; // eax
  InfantryTypeClass *v8; // [esp+4h] [ebp-4h] BYREF

  this->TechnoTypeClass = &InfantryTypeClass::`vftable'; /*0x524d76*/
  this->? = &InfantryTypeClass::`vftable'; /*0x524d7c*/
  this->? = &InfantryTypeClass::`vftable'; /*0x524d83*/
  this->? = &InfantryTypeClass::`vftable'; /*0x524d8a*/
  AbstractClass::AnnounceExpiredPointer(&this->TechnoTypeClass, 1); /*0x524d91*/
  v8 = this; /*0x524da6*/
  v3 = (*(int (__thiscall **)(_DWORD *, InfantryTypeClass **))(dword_A8E348 + 16))(&dword_A8E348, &v8); /*0x524daa*/
  if ( v3 != -1 && v3 < dword_A8E358 && v3 < --dword_A8E358 ) /*0x524dc5*/
  {
    do /*0x524ddd*/
    {
      ++v3; /*0x524dcd*/
      *((_DWORD *)dword_A8E34C + v3 - 1) = *((_DWORD *)dword_A8E34C + v3); /*0x524dd1*/
    }
    while ( v3 < dword_A8E358 ); /*0x524ddd*/
  }
  __3_YAXPAX_Z((void *)this->Sequence[0]); /*0x524de7*/
  this->Sequence[0] = 0; /*0x524df1*/
  v4 = (void *)this->VoiceComment[1]; /*0x524df7*/
  this->VoiceComment[0] = (int)&VectorClass<int>::`vftable'; /*0x524dff*/
  if ( v4 && BYTE1(this->VoiceComment[3]) ) /*0x524e0b*/
  {
    __3_YAXPAX_Z(v4); /*0x524e14*/
    this->VoiceComment[1] = 0; /*0x524e1c*/
  }
  BYTE1(this->VoiceComment[3]) = 0; /*0x524e22*/
  this->VoiceComment[2] = 0; /*0x524e28*/
  v5 = (void *)this->DeathAnims[1]; /*0x524e2e*/
  this->DeathAnims[0] = (int)&VectorClass<AnimTypeClass const *>::`vftable'; /*0x524e34*/
  if ( v5 && BYTE1(this->DeathAnims[3]) ) /*0x524e42*/
  {
    __3_YAXPAX_Z(v5); /*0x524e4b*/
    this->DeathAnims[1] = 0; /*0x524e53*/
  }
  BYTE1(this->DeathAnims[3]) = 0; /*0x524e59*/
  this->DeathAnims[2] = 0; /*0x524e5f*/
  v6 = (void *)this->DeadBodies[1]; /*0x524e65*/
  this->DeadBodies[0] = (int)&VectorClass<AnimTypeClass const *>::`vftable'; /*0x524e6b*/
  if ( v6 && BYTE1(this->DeadBodies[3]) ) /*0x524e79*/
  {
    __3_YAXPAX_Z(v6); /*0x524e82*/
    this->DeadBodies[1] = 0; /*0x524e8a*/
  }
  BYTE1(this->DeadBodies[3]) = 0; /*0x524e92*/
  this->DeadBodies[2] = 0; /*0x524e98*/
  TechnoTypeClass::DTOR((int)this); /*0x524e9e*/
  if ( (a2 & 1) != 0 ) /*0x524eaa*/
    __3_YAXPAX_Z(this); /*0x524ead*/
  return (int)this; /*0x524eb7*/
}



// ==== 0x00524EC0  ObjectClass::??0Iostream_init_QAE_XZ_4  this=ObjectClass  sig=csp ====
Iostream_init *__thiscall __0Iostream_init_QAE_XZ_4(Iostream_init *this)
{
  return this; /*0x524ec2*/
}



// ==== 0x00524ED0  _DynamicVectorClass_PBVAnimTypeClass::GetClassIdentifier  this=DynamicVector  sig=csp ====
void __thiscall WarheadTypeClass::GetClassIdentifier(_DynamicVectorClass_PBVAnimTypeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x524ed6*/
  this->m_10 = 0; /*0x524ed9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x524ee0*/
  {
    __3_YAXPAX_Z(v2); /*0x524ee6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x524eee*/
  }
  BYTE1(this->m_C) = 0; /*0x524ef1*/
  this->m_8 = 0; /*0x524ef4*/
}



// ==== 0x00524F00  _DynamicVectorClass_PBVAnimTypeClass::LoadTypeData  this=DynamicVector  sig=csp ====
unsigned int __thiscall WarheadTypeClass::LoadTypeData(_DynamicVectorClass_PBVAnimTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x524f00*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x524f15*/
  else
    return 0; /*0x524f07*/
}



// ==== 0x00524F20  InfantryTypeClass::CopyDataArray  this=InfantryTypeClass  sig=csp ====
_DWORD *__thiscall InfantryTypeClass::CopyDataArray(InfantryTypeClass *this, _DWORD *a2)
{
  void *v3; // eax
  void *v4; // eax
  void *vtable2; // ecx
  int v6; // eax

  if ( this == (InfantryTypeClass *)a2 ) /*0x524f2a*/
    goto LABEL_8; /*0x524f2a*/
  (*((void (__thiscall **)(InfantryTypeClass *))this->TechnoTypeClass + 3))(this); /*0x524f2e*/
  v3 = (void *)a2[2]; /*0x524f31*/
  this->? = v3; /*0x524f36*/
  if ( !v3 ) /*0x524f39*/
  {
    this->? = 0; /*0x524f86*/
    BYTE1(this->?) = 0; /*0x524f8d*/
LABEL_8:
    this->? = a2[4]; /*0x524f91*/
    this->? = a2[5]; /*0x524f9a*/
    return &this->TechnoTypeClass; /*0x524f9d*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * (_DWORD)v3); /*0x524f43*/
  this->? = v4; /*0x524f4b*/
  if ( !v4 ) /*0x524f50*/
    goto LABEL_8; /*0x524f50*/
  vtable2 = this->?; /*0x524f52*/
  v6 = 0; /*0x524f55*/
  BYTE1(this->?) = 1; /*0x524f59*/
  if ( (int)vtable2 <= 0 ) /*0x524f5d*/
    goto LABEL_8; /*0x524f5d*/
  do /*0x524f71*/
  {
    *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x524f68*/
    ++v6; /*0x524f6e*/
  }
  while ( v6 < (int)this->? ); /*0x524f71*/
  this->? = a2[4]; /*0x524f76*/
  this->? = a2[5]; /*0x524f7c*/
  return &this->TechnoTypeClass; /*0x524f81*/
}



// ==== 0x00524FB0  _VectorClass_PBVAnimTypeClass::SaveToINI  this=VectorClass  sig=csp ====
int __thiscall WarheadTypeClass::SaveToINI(_VectorClass_PBVAnimTypeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x524fba*/
}



// ==== 0x00524FC0  ?$TypeList@PBVAnimTypeClass@@::QueryInterface  this=TypeList  sig=csp ====
_DWORD *__thiscall WarheadTypeClass::_vt00(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x524fc3*/
  *Block = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x524fc6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x524fd0*/
  {
    __3_YAXPAX_Z(v3); /*0x524fd8*/
    *(Block + 1) = 0; /*0x524fe0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x524feb*/
  *(Block + 2) = 0; /*0x524ff1*/
  if ( (a2 & 1) != 0 ) /*0x524ff8*/
    __3_YAXPAX_Z(Block); /*0x524ffb*/
  return Block; /*0x525005*/
}



// ==== 0x00525010  _VectorClass_PBVAnimTypeClass::Add  this=VectorClass  sig=csp ====
_DWORD *__thiscall DynamicVectorClass_AnimType::Add(_VectorClass_PBVAnimTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x525013*/
  *(_DWORD *)this->__pad_0 = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x525016*/
  if ( v3 && BYTE1(this->m_C) ) /*0x525020*/
  {
    __3_YAXPAX_Z(v3); /*0x525028*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x525030*/
  }
  BYTE1(this->m_C) = 0; /*0x52503b*/
  this->m_8 = 0; /*0x525041*/
  if ( (a2 & 1) != 0 ) /*0x525048*/
    __3_YAXPAX_Z(this); /*0x52504b*/
  return this->__pad_0; /*0x525055*/
}



// ==== 0x00525060  VectorClass::CopyDefault  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::CopyDefault(VectorClass *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this == (VectorClass *)a2 ) /*0x52506a*/
    return &this->vtable0; /*0x52506a*/
  (*((void (__thiscall **)(VectorClass *))this->vtable0 + 3))(this); /*0x52506e*/
  v3 = a2[2]; /*0x525071*/
  this->Capacity = v3; /*0x525076*/
  if ( !v3 ) /*0x525079*/
  {
    this->Items = 0; /*0x5250ba*/
    this->IsAllocated = 0; /*0x5250c1*/
    return &this->vtable0; /*0x5250c5*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x525083*/
  this->Items = v4; /*0x52508b*/
  if ( !v4 ) /*0x525090*/
    return &this->vtable0; /*0x525090*/
  Capacity = this->Capacity; /*0x525092*/
  v6 = 0; /*0x525095*/
  this->IsAllocated = 1; /*0x525099*/
  if ( Capacity <= 0 ) /*0x52509d*/
    return &this->vtable0; /*0x52509d*/
  do /*0x5250b1*/
  {
    *((_DWORD *)this->Items + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x5250a8*/
    ++v6; /*0x5250ae*/
  }
  while ( v6 < this->Capacity ); /*0x5250b1*/
  return &this->vtable0; /*0x5250b5*/
}



// ==== 0x005250D0  _VectorClass_PBVAnimTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall WarheadTypeClass::AddRef(_VectorClass_PBVAnimTypeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5250d2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5250dd*/
  {
    v3 = 0; /*0x5250df*/
    if ( m_8 <= 0 ) /*0x5250e3*/
      return 1; /*0x525103*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5250e5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5250eb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5250f4*/
    {
      ++v3; /*0x5250f6*/
      ++v4; /*0x5250f7*/
      if ( v3 >= m_8 ) /*0x5250fc*/
        return 1; /*0x5250fc*/
    }
  }
  return 0; /*0x5250fe*/
}



// ==== 0x00525110  _VectorClass_PBVAnimTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall DynamicVectorClass_AnimType::Release(_VectorClass_PBVAnimTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x52511c*/
  {
    LOBYTE(this->m_C) = 0; /*0x525126*/
    if ( a3 ) /*0x52512c*/
      v4 = a3; /*0x525142*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x52513e*/
    LOBYTE(this->m_C) = 1; /*0x525146*/
    if ( v4 ) /*0x52514a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x525155*/
      {
        m_8 = this->m_8; /*0x52515c*/
        if ( a2 < m_8 ) /*0x525161*/
          m_8 = a2; /*0x525163*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x525169*/
          ++i; /*0x52516e*/
        if ( BYTE1(this->m_C) ) /*0x52517b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x525186*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x52518e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x525197*/
      this->m_8 = a2; /*0x52519f*/
      BYTE1(this->m_C) = a3 == 0; /*0x5251a2*/
      return 1; /*0x5251a8*/
    }
    else
    {
      return 0; /*0x52514f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBVAnimTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5251b2*/
    return 1; /*0x5251b8*/
  }
}



// ==== 0x005251C0  _VectorClass_PBVAnimTypeClass::Destroy_Alt  this=VectorClass  sig=csp ====
int __thiscall DynamicVectorClass::Destroy_Alt(_VectorClass_PBVAnimTypeClass *this)
{
  int result; // eax

  result = *(_DWORD *)&this->m_1[3]; /*0x5251c6*/
  if ( result && BYTE1(this->m_C) ) /*0x5251cd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5251d3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5251db*/
  }
  BYTE1(this->m_C) = 0; /*0x5251de*/
  this->m_8 = 0; /*0x5251e1*/
  return result; /*0x5251e4*/
}



// ==== 0x005251F0  _VectorClass_PBVAnimTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall DynamicVectorClass_AnimType::GetSize(_VectorClass_PBVAnimTypeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5251f0*/
    return 0; /*0x5251f8*/
  m_8 = this->m_8; /*0x5251fe*/
  result = 0; /*0x525201*/
  if ( m_8 <= 0 ) /*0x525205*/
    return -1; /*0x52521c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x52520b*/
  {
    if ( ++result >= m_8 ) /*0x52521a*/
      return -1; /*0x52521a*/
  }
  return result; /*0x5251fa*/
}



// ==== 0x00525230  _VectorClass_PBVAnimTypeClass::Remove  this=VectorClass  sig=csp ====
unsigned int __thiscall DynamicVectorClass_AnimType::Remove(_VectorClass_PBVAnimTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x525230*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x525245*/
  else
    return 0; /*0x525237*/
}



// ==== 0x00525250  DynamicVectorClass::AnimTypeConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall DynamicVectorClass::AnimTypeConstructor(DynamicVectorClass *this, int a2, int a3)
{
  *(_DWORD *)&this->?[3] = 0; /*0x525259*/
  *(_DWORD *)&this->?[3] = a2; /*0x525260*/
  LOBYTE(this->?) = 1; /*0x525263*/
  BYTE1(this->?) = 0; /*0x525267*/
  *(_DWORD *)this->VectorClass = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x52526b*/
  if ( a2 ) /*0x525271*/
  {
    if ( a3 ) /*0x525279*/
    {
      *(_DWORD *)&this->?[3] = a3; /*0x52527b*/
    }
    else
    {
      *(_DWORD *)&this->?[3] = __2_YAPAXI_Z(4 * a2); /*0x52528c*/
      BYTE1(this->?) = 1; /*0x52528f*/
    }
  }
  *(_DWORD *)this->VectorClass = &DynamicVectorClass<AnimTypeClass const *>::`vftable'; /*0x525293*/
  this->CapacityIncrement = 10; /*0x525299*/
  this->Count = 0; /*0x5252a0*/
  return this->VectorClass; /*0x5252a9*/
}



// ==== 0x005252B0  _DynamicVectorClass_PBVAnimTypeClass::Add  this=DynamicVector  sig=csp ====
_DWORD *__thiscall DynamicVectorClass_cptr_AnimTypeClass::Add(_DynamicVectorClass_PBVAnimTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5252b3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x5252b6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5252c0*/
  {
    __3_YAXPAX_Z(v3); /*0x5252c8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5252d0*/
  }
  BYTE1(this->m_C) = 0; /*0x5252db*/
  this->m_8 = 0; /*0x5252e1*/
  if ( (a2 & 1) != 0 ) /*0x5252e8*/
    __3_YAXPAX_Z(this); /*0x5252eb*/
  return this->__pad_0; /*0x5252f5*/
}



// ==== 0x00525300  _DynamicVectorClass_PBVAnimTypeClass::Release  this=DynamicVector  sig=csp ====
char __thiscall WarheadTypeClass::Release(_DynamicVectorClass_PBVAnimTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x52530c*/
  {
    LOBYTE(this->m_C) = 0; /*0x525312*/
    if ( a3 ) /*0x525318*/
      v4 = a3; /*0x52532e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x52532a*/
    LOBYTE(this->m_C) = 1; /*0x525332*/
    if ( !v4 ) /*0x525336*/
      return 0; /*0x5253aa*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x525338*/
    {
      m_8 = this->m_8; /*0x52533f*/
      if ( a2 < m_8 ) /*0x525344*/
        m_8 = a2; /*0x525346*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x52534c*/
        ++i; /*0x525351*/
      if ( BYTE1(this->m_C) ) /*0x52535e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x525369*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x525371*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x52537a*/
    this->m_8 = a2; /*0x525382*/
    BYTE1(this->m_C) = a3 == 0; /*0x525385*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PBVAnimTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x52538e*/
  }
  v7 = this->m_8; /*0x525391*/
  if ( v7 < this->m_10 ) /*0x525399*/
    this->m_10 = v7; /*0x52539b*/
  return 1; /*0x52539e*/
}



// ==== 0x005253B0  DynamicVector::Add_Alt4  this=DynamicVector  sig=csp ====
int __thiscall DynamicVector::Add_Alt4(DynamicVector *this, _DWORD *a2)
{
  int DynamicVector_field_0x8; // ecx
  int result; // eax
  int v5; // edx

  DynamicVector_field_0x8 = this->DynamicVector_field_0x8; /*0x5253b3*/
  result = (int)this->DynamicVector_field_0x10; /*0x5253b6*/
  if ( result < DynamicVector_field_0x8 /*0x5253dd*/
    || (this->__pad_C[1] || !DynamicVector_field_0x8)
    && (result = *(_DWORD *)this->__pad_14, result > 0)
    && (result = (*(int (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 8))(
                   this,
                   DynamicVector_field_0x8 + result,
                   0),
        (_BYTE)result) )
  {
    result = (int)this->DynamicVector_field_0x10; /*0x5253e5*/
    v5 = *(_DWORD *)&this->DynamicVector_field_0x1[3]; /*0x5253e8*/
    this->DynamicVector_field_0x10 = (void *)(result + 1); /*0x5253ee*/
    *(_DWORD *)(v5 + 4 * result) = *a2; /*0x5253f8*/
    LOBYTE(result) = 1; /*0x5253fb*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x5253df*/
  }
  return result; /*0x5253e1*/
}



// ==== 0x00525400  _DynamicVectorClass_PBVAnimTypeClass::Init  this=DynamicVector  sig=csp ====
int __thiscall WarheadTypeClass::Init(_DynamicVectorClass_PBVAnimTypeClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x525400*/
  result = 0; /*0x525403*/
  if ( m_10 <= 0 ) /*0x525408*/
    return -1; /*0x52541f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x52540e*/
  {
    if ( ++result >= m_10 ) /*0x52541d*/
      return -1; /*0x52541d*/
  }
  return result; /*0x525422*/
}



// ==== 0x00525430  GetINIClassIntList  this=TypeList  sig=csp ====
int __fastcall GetINIClassIntList(
        int a1,
        unsigned __int8 ***a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        void **a5,
        void *a6,
        int a7,
        __int16 a8,
        int a9,
        int a10,
        int a11)
{
  ObjectClass *i; // eax
  ObjectClass *_751520; // eax
  int _7515C0; // edi
  int v15; // eax
  int v16; // ecx
  void *Items; // eax
  bool v18; // zf
  void *v19; // eax
  int v20; // ecx
  VectorClass v22; // [esp+Ch] [ebp-9Ch] BYREF
  int v23; // [esp+1Ch] [ebp-8Ch]
  int v24; // [esp+20h] [ebp-88h]
  char String[128]; // [esp+28h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)a2, a3, a4, &g_INI_DefaultBuffer, String, 128) ) /*0x52545c*/
  {
    VectorClass::Construct(&v22, 0, 0); /*0x525471*/
    v24 = 10; /*0x52547a*/
    v23 = 0; /*0x525488*/
    v22.vtable0 = &TypeList<int>::`vftable'; /*0x52548c*/
    for ( i = (ObjectClass *)strtok(String, Str); i; i = (ObjectClass *)strtok(0, Str) ) /*0x52549e*/
    {
      if ( !LOBYTE(i->AbstractClass) ) /*0x5254a0*/
        break; /*0x5254a2*/
      _751520 = (ObjectClass *)System_Get_751520(i); /*0x5254a6*/
      if ( _751520 ) /*0x5254ad*/
      {
        _7515C0 = System_Get_7515C0(_751520); /*0x5254ba*/
        if ( v23 < v22.Capacity /*0x5254e2*/
          || (v22.IsAllocated || !v22.Capacity)
          && v24 > 0
          && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v22.vtable0 + 2))(
               &v22,
               v24 + v22.Capacity,
               0) )
        {
          v15 = v23++; /*0x5254ed*/
          *((_DWORD *)v22.Items + v15) = _7515C0; /*0x5254f8*/
        }
      }
    }
    IntVector::Copy((IntVector *)a1, &v22); /*0x525514*/
    *(_DWORD *)a1 = &TypeList<int>::`vftable'; /*0x52551e*/
    v16 = v24; /*0x525528*/
    *(_DWORD *)(a1 + 16) = v23; /*0x52552c*/
    Items = v22.Items; /*0x52552f*/
    v18 = v22.Items == 0; /*0x525533*/
    *(_DWORD *)(a1 + 20) = v16; /*0x525535*/
    v22.vtable0 = &VectorClass<int>::`vftable'; /*0x525538*/
    if ( !v18 && v22.IsAllocated ) /*0x525542*/
    {
      __3_YAXPAX_Z(Items); /*0x525545*/
      v22.Items = 0; /*0x52554d*/
    }
    v19 = a6; /*0x525551*/
    v22.IsAllocated = 0; /*0x525558*/
    v22.Capacity = 0; /*0x52555e*/
    a5 = &VectorClass<int>::`vftable'; /*0x525562*/
    if ( a6 && HIBYTE(a8) ) /*0x525572*/
      goto LABEL_20; /*0x525572*/
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0; /*0x525587*/
    *(_DWORD *)(a1 + 8) = 0; /*0x52558a*/
    *(_BYTE *)(a1 + 12) = 1; /*0x52558d*/
    *(_BYTE *)(a1 + 13) = 0; /*0x525591*/
    *(_DWORD *)a1 = &VectorClass<int>::`vftable'; /*0x525594*/
    TypeList::Copy((TypeList *)a1, &a5); /*0x525596*/
    *(_DWORD *)a1 = &TypeList<int>::`vftable'; /*0x52559b*/
    a5 = &VectorClass<int>::`vftable'; /*0x5255a1*/
    v20 = a10; /*0x5255af*/
    *(_DWORD *)(a1 + 16) = a9; /*0x5255b6*/
    v19 = a6; /*0x5255b9*/
    v18 = a6 == 0; /*0x5255c0*/
    *(_DWORD *)(a1 + 20) = v20; /*0x5255c2*/
    if ( !v18 && HIBYTE(a8) ) /*0x5255ce*/
LABEL_20:
      __3_YAXPAX_Z(v19); /*0x5255d0*/
  }
  return a1; /*0x5255db*/
}



// ==== 0x005255F0  TypeList::AnimTypeCopy  this=VectorClass  sig=csp ====
_DWORD *__thiscall TypeList::AnimTypeCopy(TypeList *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  this->? = 0; /*0x5255fd*/
  this->? = 0; /*0x525600*/
  this->? = 1; /*0x525603*/
  this->? = 0; /*0x525607*/
  this->DynamicVectorClass = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x52560a*/
  if ( this != (TypeList *)a2 ) /*0x525610*/
  {
    DynamicVectorClass::Destroy_Alt((_VectorClass_PBVAnimTypeClass *)this); /*0x525612*/
    v3 = a2[2]; /*0x525618*/
    this->? = v3; /*0x52561d*/
    if ( v3 ) /*0x525620*/
    {
      v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x525626*/
      this->? = v4; /*0x525630*/
      if ( v4 ) /*0x525633*/
      {
        Capacity = this->?; /*0x525635*/
        v6 = 0; /*0x525638*/
        this->? = 1; /*0x52563c*/
        if ( Capacity > 0 ) /*0x525640*/
        {
          do /*0x525654*/
          {
            *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x52564b*/
            ++v6; /*0x525651*/
          }
          while ( v6 < this->? ); /*0x525654*/
        }
      }
    }
    else
    {
      this->? = 0; /*0x525658*/
      this->? = 0; /*0x52565b*/
    }
  }
  this->? = a2[4]; /*0x525661*/
  this->? = a2[5]; /*0x525667*/
  this->DynamicVectorClass = &TypeList<AnimTypeClass const *>::`vftable'; /*0x52566a*/
  return &this->DynamicVectorClass; /*0x525672*/
}



// ==== 0x00525680  AnimTypeVector::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall AnimTypeVector::Constructor(AnimTypeVector *this, int a2, int a3)
{
  this->Items = 0; /*0x52568b*/
  this->Capacity = a2; /*0x52568e*/
  this->IsInitialized = 1; /*0x525691*/
  this->IsAllocated = 0; /*0x525695*/
  *this = (AnimTypeVector)&VectorClass<AnimTypeClass const *>::`vftable'; /*0x525698*/
  if ( a2 ) /*0x52569e*/
  {
    if ( a3 ) /*0x5256a6*/
    {
      this->Items = a3; /*0x5256a8*/
      return this; /*0x5256ae*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x5256bd*/
    this->IsAllocated = 1; /*0x5256c0*/
  }
  return this; /*0x5256ad*/
}



// ==== 0x005256D0  sub_5256D0  this=-  sig=ida-proto ====
int sub_5256D0()
{
  dword_A8F2D0 = 0; /*0x5256d2*/
  dword_A8F2D4 = 0; /*0x5256d7*/
  dword_A8F2D8 = 0; /*0x5256dc*/
  dword_A8F2DC = 0; /*0x5256e1*/
  return 0; /*0x5256e6*/
}



// ==== 0x005256F0  INIClass::DestroyHashTableINIClass  this=INIClass  sig=csp ====
char *__thiscall HashTable::DestroyHashTableINIClass(INIClass *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // edx
  int v6; // ecx
  char *result; // eax
  int v8; // edx
  int v9; // ecx

  *(_DWORD *)this->__pad_0 = &INIClass::`vftable'; /*0x5256f8*/
  INIClass::ClearSection((int *)this->__pad_0, 0, 0); /*0x5256fe*/
  __3_YAXPAX_Z(*(void **)&this->__pad_20[8]); /*0x525707*/
  *(_DWORD *)&this->__pad_20[8] = 0; /*0x52570c*/
  this->INIClass_field_2C = 0; /*0x52570f*/
  this->unknown30 = 0; /*0x525712*/
  this->needsSave_flag = 0; /*0x525715*/
  this->unknown38 = 0; /*0x525718*/
  this->headNode[2] = (int)&GenericList::`vftable'; /*0x52571e*/
  while ( 1 ) /*0x525725*/
  {
    v2 = this->sectionHead[1]; /*0x525725*/
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
  this->sectionCount = (int)&GenericNode::`vftable'; /*0x525760*/
  if ( this != (INIClass *)-28 ) /*0x525766*/
  {
    v5 = *(_DWORD *)this->__pad_20; /*0x525768*/
    if ( v5 ) /*0x52576d*/
    {
      v6 = *(_DWORD *)&this->__pad_20[4]; /*0x52576f*/
      if ( v6 ) /*0x525774*/
      {
        *(_DWORD *)(v6 + 4) = v5; /*0x525776*/
        *(_DWORD *)(*(_DWORD *)this->__pad_20 + 8) = *(_DWORD *)&this->__pad_20[4]; /*0x52577f*/
        *(_DWORD *)&this->__pad_20[4] = 0; /*0x525782*/
        *(_DWORD *)this->__pad_20 = 0; /*0x525785*/
      }
    }
  }
  result = (char *)this->sectionHead; /*0x525788*/
  this->sectionHead[0] = (int)&GenericNode::`vftable'; /*0x52578d*/
  if ( this != (INIClass *)-16 ) /*0x525793*/
  {
    v8 = this->sectionHead[1]; /*0x525795*/
    if ( v8 ) /*0x52579a*/
    {
      v9 = this->sectionHead[2]; /*0x52579c*/
      if ( v9 ) /*0x5257a1*/
      {
        *(_DWORD *)(v9 + 4) = v8; /*0x5257a3*/
        *(_DWORD *)(this->sectionHead[1] + 8) = this->sectionHead[2]; /*0x5257ac*/
        this->sectionHead[2] = 0; /*0x5257af*/
        this->sectionHead[1] = 0; /*0x5257b2*/
      }
    }
  }
  return result; /*0x5257b5*/
}



// ==== 0x005257C0  INIClass::ClearSection  this=INIClass  sig=csp ====
int __thiscall INIClass::ClearSection(int *this, int a2, unsigned __int8 *a3)
{
  unsigned __int8 *v3; // edx
  bool v5; // zf
  int v6; // ecx
  int result; // eax
  int v8; // edi
  int v9; // edi
  int *v10; // ebp
  int v11; // esi
  int *v12; // esi
  int v13; // ebp
  unsigned __int8 *v14; // edx
  int v15; // eax
  int v16; // eax
  int i; // ecx
  _DWORD *v18; // eax
  int v19; // edi
  int v20; // eax
  unsigned __int8 *v21; // edx
  int v22; // [esp+10h] [ebp-10h] BYREF
  unsigned int v23; // [esp+14h] [ebp-Ch] BYREF
  int v24; // [esp+18h] [ebp-8h]
  int v25; // [esp+1Ch] [ebp-4h]

  v3 = (unsigned __int8 *)a2; /*0x5257c0*/
  v5 = a2 == 0; /*0x5257cf*/
  this->headNode = 0; /*0x5257d1*/
  this->q008 = 0; /*0x5257d4*/
  if ( v5 ) /*0x5257d7*/
  {
    while ( 1 ) /*0x5257d9*/
    {
      v6 = this->q014; /*0x5257d9*/
      if ( !v6 || !*(_DWORD *)(v6 + 4) || !*(_DWORD *)(v6 + 8) ) /*0x5257e5*/
        break; /*0x5257e5*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x5257f2*/
    }
    __3_YAXPAX_Z((void *)this->q028); /*0x5257fa*/
    this->q028 = 0; /*0x5257ff*/
    this->INIClass_field_2C = 0; /*0x525802*/
    this->q00C = 0; /*0x525805*/
    this->needsSave_flag = 0; /*0x525808*/
    this->unknown38 = 0; /*0x52580b*/
    result = this->INIClass_field_3C; /*0x52580e*/
    if ( result ) /*0x525816*/
    {
      do /*0x52583d*/
      {
        free(*(void **)this->INIClass_field_3C); /*0x525822*/
        v8 = *(_DWORD *)(this->INIClass_field_3C + 4); /*0x52582c*/
        __3_YAXPAX_Z((void *)this->INIClass_field_3C); /*0x525830*/
        this->INIClass_field_3C = v8; /*0x52583a*/
      }
      while ( v8 ); /*0x52583d*/
      LOBYTE(result) = 1; /*0x525842*/
      return result; /*0x525848*/
    }
LABEL_27:
    LOBYTE(result) = 1; /*0x5259f7*/
    return result; /*0x5259fa*/
  }
  v23 = 0; /*0x525852*/
  v24 = 0; /*0x52585b*/
  v25 = 0; /*0x525865*/
  v9 = Checksummer::Add_Buffer(&v23, v3, strlen((const char *)v3)); /*0x52586e*/
  v10 = this + 10; /*0x525870*/
  a2 = v9; /*0x52587a*/
  result = HashTable::BinarySearch(this + 10, &a2); /*0x52587e*/
  if ( !(_BYTE)result ) /*0x525885*/
    goto LABEL_27; /*0x525885*/
  v22 = v9; /*0x52588f*/
  result = (unsigned __int8)HashTable::BinarySearch(this + 10, &v22) ? this->unknown38 + 4 : (int)&unk_B7882C;
  v11 = *(_DWORD *)result; /*0x5258ac*/
  if ( !*(_DWORD *)result ) /*0x5258ac*/
    goto LABEL_27; /*0x5258b0*/
  if ( !a3 ) /*0x5258bc*/
  {
    v21 = *(unsigned __int8 **)(v11 + 12); /*0x5259b9*/
    v23 = 0; /*0x5259c3*/
    v24 = 0; /*0x5259c7*/
    v25 = 0; /*0x5259cb*/
    a2 = Checksummer::Add_Buffer(&v23, v21, strlen((const char *)v21)); /*0x5259e3*/
    INIClass::deleteSection((int)v10, &a2); /*0x5259ea*/
    result = (**(int (__thiscall ***)(int, int))v11)(v11, 1); /*0x5259f5*/
    goto LABEL_27; /*0x5259f5*/
  }
  v23 = 0; /*0x5258c9*/
  v24 = 0; /*0x5258d2*/
  v25 = 0; /*0x5258dc*/
  v12 = (int *)(v11 + 44); /*0x5258e5*/
  a2 = Checksummer::Add_Buffer(&v23, a3, strlen((const char *)a3)); /*0x5258ef*/
  result = SortedArray::Find(v12, &a2); /*0x5258f3*/
  if ( !(_BYTE)result ) /*0x5258fa*/
    goto LABEL_27; /*0x5258fa*/
  result = (unsigned __int8)SortedArray::Find(v12, &a2) ? v12[4] + 4 : (int)&unk_B78830;
  v13 = *(_DWORD *)result; /*0x52591d*/
  if ( !*(_DWORD *)result ) /*0x52591d*/
    goto LABEL_27; /*0x525921*/
  v14 = *(unsigned __int8 **)(v13 + 12); /*0x525927*/
  v23 = 0; /*0x525931*/
  v24 = 0; /*0x525935*/
  v25 = 0; /*0x525939*/
  a3 = (unsigned __int8 *)Checksummer::Add_Buffer(&v23, v14, strlen((const char *)v14)); /*0x525951*/
  v15 = HashTable::BinarySearchAlt((char **)v12, (int *)&a3); /*0x525958*/
  if ( v15 ) /*0x52595f*/
  {
    v16 = (v15 - *v12) >> 3; /*0x525963*/
    if ( v16 != -1 ) /*0x525969*/
    {
      for ( i = v16 + 1; i < v12[1]; *(v18 - 1) = v18[1] ) /*0x525973*/
      {
        v18 = (_DWORD *)(*v12 + 8 * i++); /*0x525977*/
        *(v18 - 2) = *v18; /*0x52597d*/
      }
      v19 = *v12; /*0x525990*/
      v20 = v12[1] - 1; /*0x525992*/
      v12[1] = v20; /*0x525995*/
      *(_DWORD *)(v19 + 8 * v20) = 0; /*0x52599a*/
      *(_DWORD *)(v19 + 8 * v20 + 4) = 0; /*0x52599d*/
      v12[4] = 0; /*0x5259a1*/
    }
  }
  result = (**(int (__thiscall ***)(int, int))v13)(v13, 1); /*0x5259ab*/
  LOBYTE(result) = 1; /*0x5259b0*/
  return result; /*0x52583f*/
}



// ==== 0x00525A10  FileStraw::Open  this=FileStraw  sig=csp ====
int __thiscall FileStraw::Open(FileStraw *this, int a2, char a3)
{
  int File; // esi
  int v5[4]; // [esp+4h] [ebp-14h] BYREF
  char v6; // [esp+14h] [ebp-4h]

  this->FileStraw_field_0x04 = 0; /*0x525a19*/
  *((_DWORD *)this + 2) = 0; /*0x525a1c*/
  v5[1] = 0; /*0x525a1f*/
  v5[2] = 0; /*0x525a23*/
  v6 = 0; /*0x525a27*/
  v5[3] = a2; /*0x525a2f*/
  v5[0] = (int)&FileStraw::`vftable'; /*0x525a3a*/
  File = INIClass::LoadFile((INIClass *)this, (int)v5, a3); /*0x525a4b*/
  FileStraw::Destructor((int)v5); /*0x525a4d*/
  return File; /*0x525a54*/
}



// ==== 0x00525A60  INIClass::LoadFile  this=INIClass  sig=csp ====
int __thiscall INIClass::LoadFile(INIClass *this, int a2, char a3)
{
  void *v3; // ebp
  int INIClass_field_2C; // eax
  void **v5; // edi
  char **v6; // ebx
  const char *p_unknown30; // ecx
  unsigned __int8 i; // al
  char **v9; // eax
  void **v10; // esi
  char *v11; // eax
  int v12; // esi
  const char *v13; // ecx
  unsigned __int8 j; // al
  char *v15; // eax
  char *v16; // eax
  char *v17; // esi
  int v19; // esi
  char *v20; // eax
  int v21; // ebx
  char *v22; // eax
  void **v23; // edi
  int v24; // ebp
  void *v25; // ecx
  const char *v26; // ecx
  unsigned __int8 m; // al
  char **v28; // esi
  int v29; // eax
  char *v30; // edi
  char *v31; // eax
  char *v32; // eax
  char *v33; // eax
  char *v34; // esi
  _DWORD *v35; // esi
  _DWORD *v36; // esi
  unsigned int v37; // edi
  unsigned int v38; // ebx
  char *v39; // eax
  void *v40; // edx
  char *v41; // eax
  int v42; // edx
  void *v43; // eax
  unsigned __int8 *v44; // edx
  char *v45; // eax
  int v46; // ecx
  int v47; // eax
  char *v48; // ebx
  int v49; // edi
  int v50; // eax
  int v51; // ecx
  int v52; // eax
  _DWORD *v53; // edx
  char *v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // ecx
  int v58; // edx
  int v59; // edx
  int v60; // ecx
  int v61; // eax
  void **v62; // esi
  unsigned __int8 *v63; // edx
  char *v64; // eax
  int *v65; // edi
  int v66; // eax
  int v67; // ebp
  int v68; // esi
  int v69; // ecx
  int v70; // eax
  int v71; // ecx
  int v72; // ecx
  int v73; // eax
  int v74; // eax
  int v75; // edi
  int v76; // ecx
  int v77; // edx
  int v78; // eax
  void **v79; // esi
  void **v80; // esi
  void **v81; // edi
  _BYTE v82[19]; // [esp+0h] [ebp-478h] BYREF
  char v83; // [esp+13h] [ebp-465h] BYREF
  void *k; // [esp+14h] [ebp-464h]
  char v85; // [esp+1Bh] [ebp-45Dh]
  int v86; // [esp+1Ch] [ebp-45Ch]
  void *Block; // [esp+20h] [ebp-458h]
  char *v88; // [esp+24h] [ebp-454h]
  int *v89; // [esp+28h] [ebp-450h]
  int v90; // [esp+2Ch] [ebp-44Ch] BYREF
  unsigned int v91; // [esp+30h] [ebp-448h] BYREF
  unsigned int v92; // [esp+34h] [ebp-444h] BYREF
  int v93; // [esp+38h] [ebp-440h]
  Straw v94; // [esp+3Ch] [ebp-43Ch] BYREF
  int v95; // [esp+44h] [ebp-434h]
  INIClass v96; // [esp+48h] [ebp-430h] BYREF
  char v97[512]; // [esp+278h] [ebp-200h] BYREF

  v3 = this; /*0x525a69*/
  this->headNode[0] = 0; /*0x525a6e*/
  this->headNode[1] = 0; /*0x525a71*/
  INIClass_field_2C = this->INIClass_field_2C; /*0x525a74*/
  v5 = 0; /*0x525a77*/
  v6 = 0; /*0x525a79*/
  v89 = (int *)this; /*0x525a7d*/
  v83 = 0; /*0x525a81*/
  k = 0; /*0x525a86*/
  v85 = 0; /*0x525a8a*/
  if ( INIClass_field_2C > 0 ) /*0x525a8e*/
  {
    v85 = 1; /*0x525a90*/
    a3 = 0; /*0x525a95*/
  }
  v94.Straw_field_0x04 = 0; /*0x525aa5*/
  v95 = 0; /*0x525aa9*/
  INIClass::loadFile(&v96, 4096); /*0x525ab5*/
  v96.headNode[2] = 0; /*0x525ac6*/
  v96.sectionHead[0] = 0; /*0x525aca*/
  *(_DWORD *)v94.__pad_0 = &CacheStraw::`vftable'; /*0x525ace*/
  Delegate::Set(&v94, a2); /*0x525ad6*/
  do /*0x525b9d*/
  {
    ReadStreamLine((int)&v94, (const char *)&v96.unknown30, 512, &v83); /*0x525afa*/
    if ( v83 ) /*0x525b05*/
    {
      if ( a3 ) /*0x525baf*/
      {
        *((_DWORD *)v3 + 15) = v5; /*0x525bb1*/
        goto LABEL_51; /*0x525bb4*/
      }
      if ( v5 ) /*0x525bbb*/
      {
        do /*0x525bd9*/
        {
          free(*v5); /*0x525bc4*/
          v10 = (void **)v5[1]; /*0x525bc9*/
          __3_YAXPAX_Z(v5); /*0x525bcd*/
          v5 = v10; /*0x525bd5*/
        }
        while ( v10 ); /*0x525bd9*/
      }
      goto LABEL_143; /*0x525bd9*/
    }
    p_unknown30 = (const char *)&v96.unknown30; /*0x525b0f*/
    if ( v82 != (_BYTE *)-120 ) /*0x525b15*/
    {
      for ( i = v96.unknown30; i; i = *++p_unknown30 ) /*0x525b1d*/
      {
        if ( i > 0x20u ) /*0x525b21*/
          break; /*0x525b21*/
      }
      if ( *p_unknown30 == 91 && strchr(p_unknown30, 93) ) /*0x525b33*/
        break; /*0x525b3d*/
    }
    if ( a3 ) /*0x525b4c*/
    {
      v9 = (char **)__2_YAPAXI_Z(8u); /*0x525b50*/
      if ( v9 ) /*0x525b5c*/
      {
        *v9 = 0; /*0x525b60*/
        v9[1] = 0; /*0x525b66*/
        if ( v6 ) /*0x525b6d*/
        {
          v6[1] = (char *)v9; /*0x525b6f*/
          v6 = v9; /*0x525b72*/
        }
        else
        {
          v5 = (void **)v9; /*0x525b80*/
          v6 = v9; /*0x525b82*/
          k = v9; /*0x525b84*/
        }
        *v9 = _strdup((const char *)&v96.unknown30); /*0x525b95*/
      }
      else
      {
        a3 = 0; /*0x525b76*/
      }
    }
  }
  while ( !v83 ); /*0x525b9d*/
  if ( v85 ) /*0x525be8*/
  {
    if ( v83 ) /*0x525bf4*/
      goto LABEL_50; /*0x525bf4*/
LABEL_27:
    v97[0] = 0; /*0x525bfa*/
    String::Trim((char *)&v96.unknown30); /*0x525c06*/
    if ( LOBYTE(v96.unknown30) == 91 ) /*0x525c10*/
    {
      v11 = strchr((const char *)&v96.unknown30, 93); /*0x525c19*/
      if ( v11 ) /*0x525c23*/
        *v11 = 0; /*0x525c25*/
      strcpy(v97, (const char *)&v96.unknown30 + 1); /*0x525c47*/
    }
    if ( v83 ) /*0x525c56*/
      goto LABEL_50; /*0x525c56*/
    while ( 1 ) /*0x525c77*/
    {
      v12 = ReadStreamLine((int)&v94, (const char *)&v96.unknown30, 512, &v83); /*0x525c77*/
      v13 = (const char *)&v96.unknown30; /*0x525c7b*/
      if ( v82 != (_BYTE *)-120 ) /*0x525c7f*/
      {
        for ( j = v96.unknown30; j; j = *++v13 ) /*0x525c87*/
        {
          if ( j > 0x20u ) /*0x525c8b*/
            break; /*0x525c8b*/
        }
        if ( *v13 == 91 && strchr(v13, 93) ) /*0x525c9d*/
        {
          if ( v83 ) /*0x525d53*/
            goto LABEL_50; /*0x525d53*/
          goto LABEL_27; /*0x525d53*/
        }
        v15 = strchr((const char *)&v96.unknown30, 59); /*0x525cb4*/
        if ( v15 ) /*0x525cbe*/
        {
          *v15 = 0; /*0x525cc4*/
          String::Trim((char *)&v96.unknown30); /*0x525cc7*/
        }
      }
      if ( v12 ) /*0x525cce*/
      {
        if ( LOBYTE(v96.unknown30) != 59 && LOBYTE(v96.unknown30) != 61 ) /*0x525cda*/
        {
          v16 = strchr((const char *)&v96.unknown30, 61); /*0x525ce3*/
          if ( v16 ) /*0x525cef*/
          {
            *v16 = 0; /*0x525cf1*/
            v17 = v16 + 1; /*0x525cf8*/
            String::Trim((char *)&v96.unknown30); /*0x525cf9*/
            if ( strlen((const char *)&v96.unknown30) ) /*0x525d02*/
            {
              String::Trim(v17); /*0x525d10*/
              if ( strlen(v17) ) /*0x525d17*/
              {
                if ( !INIClass::SetString((char *)v3, (unsigned __int8 *)v97, (char *)&v96.unknown30, v17) ) /*0x525d3a*/
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
      v19 = *(_DWORD *)(*((_DWORD *)v3 + 15) + 4); /*0x525d9d*/
      __3_YAXPAX_Z(*((void **)v3 + 15)); /*0x525da1*/
      *((_DWORD *)v3 + 15) = v19; /*0x525da9*/
    }
    while ( v19 ); /*0x525dae*/
  }
  if ( v83 ) /*0x525db6*/
    goto LABEL_50; /*0x525db6*/
  while ( 2 ) /*0x525db8*/
  {
    String::Trim((char *)&v96.unknown30); /*0x525db8*/
    if ( LOBYTE(v96.unknown30) == 91 ) /*0x525dc6*/
    {
      v20 = strchr((const char *)&v96.unknown30, 93); /*0x525dcf*/
      if ( v20 ) /*0x525dd9*/
        *v20 = 0; /*0x525ddb*/
    }
    else
    {
      LOWORD(v96.unknown30) = 0; /*0x525de0*/
    }
    v21 = __2_YAPAXI_Z(0x44u); /*0x525df1*/
    v93 = v21; /*0x525df8*/
    if ( v21 ) /*0x525dfc*/
    {
      v22 = _strdup((const char *)&v96.unknown30 + 1); /*0x525e07*/
      v23 = 0; /*0x525e0f*/
      *(_DWORD *)(v21 + 4) = 0; /*0x525e16*/
      *(_DWORD *)(v21 + 8) = 0; /*0x525e19*/
      *(_DWORD *)v21 = &Node<INIClass::INISection *>::`vftable'; /*0x525e1c*/
      *(_DWORD *)(v21 + 12) = v22; /*0x525e22*/
      GenericList::Constructor((GenericList *)(v21 + 16)); /*0x525e25*/
      v24 = v21 + 44; /*0x525e2a*/
      *(_DWORD *)(v21 + 16) = &List<INIClass::INIEntry *>::`vftable'; /*0x525e2d*/
      INIClass::getValue((INIClass *)(v21 + 44)); /*0x525e35*/
      v25 = k; /*0x525e3a*/
      *(_DWORD *)v21 = &INIClass::INISection::`vftable'; /*0x525e3e*/
      *(_DWORD *)(v21 + 64) = v25; /*0x525e44*/
      v86 = 0; /*0x525e4d*/
      for ( k = 0; !v83; v23 = (void **)k ) /*0x525e55*/
      {
        v88 = (char *)ReadStreamLine((int)&v94, (const char *)&v96.unknown30, 512, &v83); /*0x525e75*/
        if ( v83 ) /*0x525e7f*/
          break; /*0x525e7f*/
        v26 = (const char *)&v96.unknown30; /*0x525e89*/
        if ( v82 != (_BYTE *)-120 ) /*0x525e8f*/
        {
          for ( m = v96.unknown30; m; m = *++v26 ) /*0x525e97*/
          {
            if ( m > 0x20u ) /*0x525e9b*/
              break; /*0x525e9b*/
          }
          if ( *v26 == 91 && strchr(v26, 93) ) /*0x525ead*/
            break; /*0x525eb7*/
        }
        if ( a3 ) /*0x525ec6*/
        {
          v28 = (char **)__2_YAPAXI_Z(8u); /*0x525ecf*/
          if ( v28 ) /*0x525ed6*/
          {
            v29 = v86; /*0x525ed8*/
            *v28 = 0; /*0x525edc*/
            v28[1] = 0; /*0x525ee4*/
            if ( v29 ) /*0x525eeb*/
            {
              *(_DWORD *)(v29 + 4) = v28; /*0x525eed*/
              v86 = (int)v28; /*0x525ef0*/
            }
            else
            {
              v86 = (int)v28; /*0x525f00*/
              k = v28; /*0x525f04*/
            }
            *v28 = _strdup((const char *)&v96.unknown30); /*0x525f15*/
          }
          else
          {
            a3 = 0; /*0x525ef6*/
          }
        }
        v30 = 0; /*0x525f20*/
        v91 = 0; /*0x525f22*/
        v92 = 0; /*0x525f28*/
        v90 = 0; /*0x525f2c*/
        Block = 0; /*0x525f30*/
        if ( a3 ) /*0x525f34*/
        {
          v31 = System_Load((unsigned __int8 *)&v96.unknown30, &v91, &v92, (unsigned int *)&v90); /*0x525f4b*/
          v30 = v31; /*0x525f50*/
          Block = v31; /*0x525f54*/
          if ( v31 ) /*0x525f58*/
          {
            v30 = _strdup(v31); /*0x525f60*/
            Block = v30; /*0x525f65*/
          }
        }
        if ( v82 != (_BYTE *)-120 ) /*0x525f6f*/
        {
          v32 = strchr((const char *)&v96.unknown30, 59); /*0x525f78*/
          if ( v32 ) /*0x525f82*/
          {
            *v32 = 0; /*0x525f88*/
            String::Trim((char *)&v96.unknown30); /*0x525f8b*/
          }
        }
        if ( !v88 /*0x525fc1*/
          || LOBYTE(v96.unknown30) == 59
          || LOBYTE(v96.unknown30) == 61
          || (v33 = strchr((const char *)&v96.unknown30, 61)) == 0 )
        {
          free(v30); /*0x5261df*/
        }
        else
        {
          *v33 = 0; /*0x525fc7*/
          v34 = v33 + 1; /*0x525fca*/
          v88 = v33 + 1; /*0x525fcf*/
          String::Trim((char *)&v96.unknown30); /*0x525fd3*/
          if ( strlen((const char *)&v96.unknown30) ) /*0x525fdc*/
          {
            String::Trim(v34); /*0x525ff4*/
            if ( strlen(v34) ) /*0x525ffb*/
            {
              if ( a3 ) /*0x52601a*/
              {
                v35 = (_DWORD *)v86; /*0x52601c*/
                if ( v86 ) /*0x526022*/
                {
                  if ( *(_DWORD *)v86 ) /*0x526024*/
                  {
                    free(*(void **)v86); /*0x52602b*/
                    *v35 = 0; /*0x526033*/
                  }
                }
              }
              v36 = (_DWORD *)__2_YAPAXI_Z(0x28u); /*0x526040*/
              if ( !v36 ) /*0x526047*/
              {
                free(Block); /*0x5263ae*/
                v80 = (void **)k; /*0x5263b3*/
                if ( k ) /*0x5263bc*/
                {
                  do /*0x5263d6*/
                  {
                    free(*v80); /*0x5263c1*/
                    v81 = (void **)v80[1]; /*0x5263c6*/
                    __3_YAXPAX_Z(v80); /*0x5263ca*/
                    v80 = v81; /*0x5263d2*/
                  }
                  while ( v81 ); /*0x5263d6*/
                }
                if ( v21 ) /*0x5263da*/
                  (**(void (__thiscall ***)(int, int))v21)(v21, 1); /*0x5263e2*/
                INIClass::ClearSection(v89, 0, 0); /*0x5263ec*/
                goto LABEL_143; /*0x5263ec*/
              }
              v37 = v92; /*0x526055*/
              v38 = v91; /*0x526059*/
              v86 = v90; /*0x52605e*/
              v88 = _strdup(v88); /*0x52606b*/
              v39 = _strdup((const char *)&v96.unknown30); /*0x526070*/
              v40 = k; /*0x526075*/
              v36[3] = v39; /*0x526079*/
              v41 = v88; /*0x52607c*/
              v36[5] = v40; /*0x526080*/
              v42 = v86; /*0x526083*/
              v36[4] = v41; /*0x526087*/
              v43 = Block; /*0x52608a*/
              v36[1] = 0; /*0x526090*/
              v36[2] = 0; /*0x526093*/
              v36[6] = v43; /*0x526096*/
              v36[7] = v38; /*0x526099*/
              v36[8] = v37; /*0x52609c*/
              v36[9] = v42; /*0x52609f*/
              *v36 = &INIClass::INIEntry::`vftable'; /*0x5260a2*/
              v44 = (unsigned __int8 *)v36[3]; /*0x5260a8*/
              v86 = 0; /*0x5260ab*/
              k = 0; /*0x5260af*/
              memset(&v96.sectionHead[2], 0, 12); /*0x5260b3*/
              v45 = (char *)Checksummer::Add_Buffer((Checksummer *)&v96.sectionHead[2], v44, strlen((const char *)v44)); /*0x5260d4*/
              v46 = *(_DWORD *)(v24 + 4); /*0x5260d9*/
              v88 = v45; /*0x5260dc*/
              v47 = *(_DWORD *)(v24 + 8); /*0x5260e0*/
              if ( v46 + 1 <= v47 ) /*0x5260e6*/
              {
LABEL_101:
                *(_DWORD *)(*(_DWORD *)v24 + 8 * *(_DWORD *)(v24 + 4)) = v88; /*0x526177*/
                *(_DWORD *)(*(_DWORD *)v24 + 8 * *(_DWORD *)(v24 + 4) + 4) = v36; /*0x52618a*/
                v55 = *(_DWORD *)(v24 + 4) + 1; /*0x526191*/
                *(_BYTE *)(v24 + 12) = 0; /*0x526192*/
                *(_DWORD *)(v24 + 4) = v55; /*0x526196*/
              }
              else
              {
                if ( !v47 ) /*0x5260ee*/
                {
                  Block = (void *)10; /*0x5260f0*/
                  goto LABEL_97; /*0x5260f8*/
                }
                Block = *(void **)(v24 + 8); /*0x5260fe*/
                if ( v47 >= 0 ) /*0x526102*/
                {
LABEL_97:
                  v48 = (char *)Block + v47; /*0x526108*/
                  v49 = __2_YAPAXI_Z(8 * ((_DWORD)Block + v47)); /*0x52611c*/
                  if ( v49 ) /*0x526123*/
                  {
                    v50 = *(_DWORD *)(v24 + 4); /*0x526125*/
                    v51 = 0; /*0x526129*/
                    v96.sectionHead[1] = (int)(v48 - 1); /*0x52612b*/
                    if ( v50 > 0 ) /*0x526131*/
                    {
                      do /*0x526153*/
                      {
                        v52 = 8 * v51; /*0x526136*/
                        v53 = (_DWORD *)(*(_DWORD *)v24 + 8 * v51++); /*0x52613f*/
                        *(_DWORD *)(v52 + v49) = *v53; /*0x526144*/
                        *(_DWORD *)(v52 + v49 + 4) = v53[1]; /*0x52614a*/
                      }
                      while ( v51 < *(_DWORD *)(v24 + 4) ); /*0x526153*/
                    }
                    __3_YAXPAX_Z(*(void **)v24); /*0x526159*/
                    v54 = (char *)Block + *(_DWORD *)(v24 + 8); /*0x526168*/
                    *(_DWORD *)v24 = v49; /*0x52616a*/
                    *(_DWORD *)(v24 + 8) = v54; /*0x52616d*/
                    *(_DWORD *)(v24 + 16) = 0; /*0x526170*/
                    goto LABEL_101; /*0x526170*/
                  }
                }
              }
              v56 = *(_DWORD *)(v93 + 40); /*0x52619f*/
              v57 = v36[1]; /*0x5261a2*/
              if ( v57 ) /*0x5261a7*/
              {
                v58 = v36[2]; /*0x5261a9*/
                if ( v58 ) /*0x5261ae*/
                {
                  *(_DWORD *)(v58 + 4) = v57; /*0x5261b0*/
                  *(_DWORD *)(v36[1] + 8) = v36[2]; /*0x5261b9*/
                  v36[2] = 0; /*0x5261bc*/
                  v36[1] = 0; /*0x5261bf*/
                }
              }
              v59 = *(_DWORD *)(v56 + 4); /*0x5261c2*/
              v36[2] = v56; /*0x5261c5*/
              v36[1] = v59; /*0x5261c8*/
              v60 = *(_DWORD *)(v56 + 4); /*0x5261cb*/
              if ( v60 ) /*0x5261d0*/
                *(_DWORD *)(v60 + 8) = v36; /*0x5261d2*/
              v21 = v93; /*0x5261d5*/
              *(_DWORD *)(v56 + 4) = v36; /*0x5261d9*/
              continue; /*0x5261dc*/
            }
          }
          free(Block); /*0x525fed*/
        }
      }
      if ( !a3 ) /*0x526200*/
      {
        v61 = *(_DWORD *)(v21 + 24); /*0x526202*/
        if ( !v61 || !*(_DWORD *)(v61 + 4) || !*(_DWORD *)(v61 + 8) ) /*0x526210*/
        {
          if ( v23 ) /*0x526219*/
          {
            do /*0x526233*/
            {
              free(*v23); /*0x52621e*/
              v62 = (void **)v23[1]; /*0x526223*/
              __3_YAXPAX_Z(v23); /*0x526227*/
              v23 = v62; /*0x52622f*/
            }
            while ( v62 ); /*0x526233*/
            k = 0; /*0x526235*/
          }
          (**(void (__thiscall ***)(int, int))v21)(v21, 1); /*0x52623f*/
LABEL_133:
          if ( !v83 ) /*0x526370*/
          {
            v5 = (void **)k; /*0x526376*/
            v3 = v89; /*0x52637a*/
            continue; /*0x52637e*/
          }
LABEL_50:
          v89[15] = (int)k; /*0x525d59*/
LABEL_51:
          Vector::Clear((int)&v96); /*0x525d64*/
          Straw::Dtor(&v94); /*0x525d71*/
          return 1; /*0x525d85*/
        }
      }
      v63 = *(unsigned __int8 **)(v21 + 12); /*0x526246*/
      memset(&v96.__pad_20[4], 0, 12); /*0x526252*/
      v64 = (char *)Checksummer::Add_Buffer((Checksummer *)&v96.__pad_20[4], v63, strlen((const char *)v63)); /*0x526269*/
      v65 = v89; /*0x52626e*/
      v88 = v64; /*0x526272*/
      v66 = v89[12]; /*0x526279*/
      if ( v89[11] + 1 <= v66 ) /*0x52627f*/
      {
LABEL_126:
        *(_DWORD *)(v65[10] + 8 * v65[11]) = v88; /*0x52630b*/
        *(_DWORD *)(v65[10] + 8 * v65[11] + 4) = v21; /*0x52631e*/
        v73 = v65[11] + 1; /*0x526325*/
        *((_BYTE *)v65 + 52) = 0; /*0x526326*/
        v65[11] = v73; /*0x52632a*/
      }
      else
      {
        if ( !v66 ) /*0x526287*/
        {
          v86 = 10; /*0x526289*/
          goto LABEL_122; /*0x526291*/
        }
        v86 = v89[12]; /*0x526297*/
        if ( v66 >= 0 ) /*0x52629b*/
        {
LABEL_122:
          v67 = v86 + v66; /*0x5262a1*/
          v68 = __2_YAPAXI_Z(8 * (v86 + v66)); /*0x5262b5*/
          if ( v68 ) /*0x5262bc*/
          {
            v69 = v65[11]; /*0x5262be*/
            v70 = 0; /*0x5262c2*/
            v96.sectionHead[1] = v67 - 1; /*0x5262c4*/
            if ( v69 > 0 ) /*0x5262ca*/
            {
              do /*0x5262e5*/
              {
                v71 = v65[10]; /*0x5262cc*/
                ++v70; /*0x5262cf*/
                *(_DWORD *)(v68 + 8 * v70 - 8) = *(_DWORD *)(v71 + 8 * v70 - 8); /*0x5262d4*/
                *(_DWORD *)(v68 + 8 * v70 - 4) = *(_DWORD *)(v71 + 8 * v70 - 4); /*0x5262dc*/
              }
              while ( v70 < v65[11] ); /*0x5262e5*/
            }
            __3_YAXPAX_Z((void *)v65[10]); /*0x5262eb*/
            v72 = v86 + v65[12]; /*0x5262f7*/
            v65[10] = v68; /*0x5262fc*/
            v65[12] = v72; /*0x5262ff*/
            v65[14] = 0; /*0x526302*/
            goto LABEL_126; /*0x526302*/
          }
        }
      }
      v74 = *(_DWORD *)(v21 + 4); /*0x526331*/
      v75 = v65[9]; /*0x526334*/
      if ( v74 ) /*0x526339*/
      {
        v76 = *(_DWORD *)(v21 + 8); /*0x52633b*/
        if ( v76 ) /*0x526340*/
        {
          *(_DWORD *)(v76 + 4) = v74; /*0x526342*/
          *(_DWORD *)(*(_DWORD *)(v21 + 4) + 8) = *(_DWORD *)(v21 + 8); /*0x52634b*/
          *(_DWORD *)(v21 + 8) = 0; /*0x52634e*/
          *(_DWORD *)(v21 + 4) = 0; /*0x526351*/
        }
      }
      v77 = *(_DWORD *)(v75 + 4); /*0x526354*/
      *(_DWORD *)(v21 + 8) = v75; /*0x526357*/
      *(_DWORD *)(v21 + 4) = v77; /*0x52635a*/
      v78 = *(_DWORD *)(v75 + 4); /*0x52635d*/
      if ( v78 ) /*0x526362*/
        *(_DWORD *)(v78 + 8) = v21; /*0x526364*/
      *(_DWORD *)(v75 + 4) = v21; /*0x526367*/
      goto LABEL_133; /*0x526367*/
    }
    break;
  }
  if ( v5 ) /*0x526385*/
  {
    do /*0x52639f*/
    {
      free(*v5); /*0x52638a*/
      v79 = (void **)v5[1]; /*0x52638f*/
      __3_YAXPAX_Z(v5); /*0x526393*/
      v5 = v79; /*0x52639b*/
    }
    while ( v79 ); /*0x52639f*/
  }
  INIClass::ClearSection((int *)v3, 0, 0); /*0x5263a7*/
LABEL_143:
  Vector::Clear((int)&v96); /*0x5263f1*/
  Straw::Dtor(&v94); /*0x5263fe*/
  return 0; /*0x525d76*/
}



// ==== 0x00526420  INIClass::SaveToPipe  this=INIClass  sig=csp ====
int __thiscall INIClass::SaveToPipe(INIClass *this, int a2)
{
  int v2; // esi
  int v4[4]; // [esp+4h] [ebp-14h] BYREF
  char v5; // [esp+14h] [ebp-4h]

  this->headNode[0] = 0; /*0x526429*/
  this->headNode[1] = 0; /*0x52642c*/
  v4[1] = 0; /*0x52642f*/
  v4[2] = 0; /*0x526433*/
  v5 = 0; /*0x526437*/
  v4[3] = a2; /*0x526441*/
  v4[0] = (int)&FilePipe::`vftable'; /*0x526445*/
  v2 = INIClass::WriteToString(this, (int)v4); /*0x526456*/
  FilePipe::Destructor((int)v4); /*0x526458*/
  return v2; /*0x52645f*/
}



// ==== 0x00526470  INIClass::WriteToString  this=INIClass  sig=csp ====
int __thiscall INIClass::WriteToString(INIClass *this, int a2)
{
  INIClass *v2; // edx
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
  _DWORD *INIClass_field_3C; // eax
  int v24; // ebp
  _DWORD *v26; // [esp+98h] [ebp-218h]
  int v27; // [esp+98h] [ebp-218h]
  _DWORD *i; // [esp+9Ch] [ebp-214h]
  _DWORD *k; // [esp+A0h] [ebp-210h]
  int v31; // [esp+A4h] [ebp-20Ch]
  _BYTE v32[512]; // [esp+B0h] [ebp-200h] BYREF

  v2 = this; /*0x526478*/
  v3 = 0; /*0x52647a*/
  this->headNode[0] = 0; /*0x526485*/
  this->headNode[1] = 0; /*0x526488*/
  v4 = this->sectionHead[1]; /*0x52648b*/
  memset(v32, 0x20u, sizeof(v32)); /*0x52649e*/
  v32[511] = 0; /*0x5264a4*/
  v31 = v4; /*0x5264ac*/
  if ( v4 ) /*0x5264b0*/
  {
    while ( *(_DWORD *)(v4 + 4) && *(_DWORD *)(v4 + 8) ) /*0x5264cc*/
    {
      if ( v3 > 0 && !*(_DWORD *)(v4 + 64) ) /*0x5264d6*/
        v3 += (*(int (__thiscall **)(int, CHAR *, unsigned int))(*(_DWORD *)a2 + 16))(a2, String2, strlen(String2)); /*0x5264f9*/
      v5 = *(_DWORD **)(v4 + 64); /*0x5264fb*/
      for ( i = v5; v5; i = v5 ) /*0x526504*/
      {
        if ( *v5 ) /*0x526506*/
        {
          v6 = (*(int (__thiscall **)(int, _DWORD, unsigned int))(*(_DWORD *)a2 + 16))( /*0x526521*/
                 a2,
                 *v5,
                 strlen((const char *)*v5))
             + v3;
          v4 = v31; /*0x52653f*/
          v3 = (*(int (__thiscall **)(int, CHAR *, unsigned int))(*(_DWORD *)a2 + 16))(a2, String2, strlen(String2)) /*0x526543*/
             + v6;
          v5 = i; /*0x526545*/
        }
        v5 = (_DWORD *)v5[1]; /*0x526549*/
      }
      v7 = (*(int (__thiscall **)(int, char *, int))(*(_DWORD *)a2 + 16))(a2, asc_825B68, 1) + v3; /*0x526565*/
      v8 = (*(int (__thiscall **)(int, _DWORD, unsigned int))(*(_DWORD *)a2 + 16))( /*0x526587*/
             a2,
             *(_DWORD *)(v4 + 12),
             strlen(*(const char **)(v4 + 12)))
         + v7;
      v9 = (*(int (__thiscall **)(int, char *, int))(*(_DWORD *)a2 + 16))(a2, asc_825B64, 1) + v8; /*0x52658c*/
      v3 = (*(int (__thiscall **)(int, CHAR *, unsigned int))(*(_DWORD *)a2 + 16))(a2, String2, strlen(String2)) + v9; /*0x5265aa*/
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
              v12 = (*(int (__thiscall **)(int, _DWORD, unsigned int))(*(_DWORD *)a2 + 16))( /*0x526601*/
                      a2,
                      *v26,
                      strlen((const char *)*v11))
                  + v3;
              v3 = (*(int (__thiscall **)(int, CHAR *, unsigned int))(*(_DWORD *)a2 + 16))(a2, String2, strlen(String2)) /*0x52661f*/
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
        v16 = (*(int (__thiscall **)(int, _DWORD, unsigned int))(*(_DWORD *)a2 + 16))(a2, *(_DWORD *)(j + 12), v13 - 1) /*0x52667b*/
            + v3;
        if ( v15 > 0 ) /*0x52667f*/
        {
          v16 += (*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a2 + 16))(a2, v32, v15); /*0x52668e*/
          v27 = v15; /*0x526690*/
        }
        v17 = (*(int (__thiscall **)(int, char *, int))(*(_DWORD *)a2 + 16))(a2, asc_818A0C, 1) + v16; /*0x5266a9*/
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
        v17 += (*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a2 + 16))(a2, v32, v18); /*0x5266d4*/
        v27 += v18; /*0x5266dc*/
LABEL_30:
        v19 = (*(int (__thiscall **)(int, _DWORD, unsigned int))(*(_DWORD *)a2 + 16))(a2, *(_DWORD *)(j + 16), v14 - 1) /*0x5266e0*/
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
            v19 += (*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a2 + 16))(a2, v32, v20); /*0x52671d*/
          v21 = (*(int (__thiscall **)(int, char *, int))(*(_DWORD *)a2 + 16))(a2, asc_81C8FC, 1); /*0x526737*/
          v19 += (*(int (__thiscall **)(int, _DWORD, unsigned int))(*(_DWORD *)a2 + 16))( /*0x526755*/
                   a2,
                   *(_DWORD *)(j + 24),
                   strlen(*(const char **)(j + 24)))
               + v21;
        }
        v22 = (*(int (__thiscall **)(int, CHAR *, unsigned int))(*(_DWORD *)a2 + 16))(a2, String2, strlen(String2)); /*0x526757*/
        j = *(_DWORD *)(j + 4); /*0x526773*/
      }
      v2 = this; /*0x526780*/
      v31 = *(_DWORD *)(v31 + 4); /*0x52678d*/
      if ( !v31 ) /*0x526791*/
        break; /*0x526791*/
      v4 = v31; /*0x5264b8*/
    }
  }
  INIClass_field_3C = (_DWORD *)v2->INIClass_field_3C; /*0x526797*/
  for ( k = INIClass_field_3C; INIClass_field_3C; k = INIClass_field_3C ) /*0x5267a0*/
  {
    if ( *INIClass_field_3C ) /*0x5267a2*/
    {
      v24 = (*(int (__thiscall **)(int, _DWORD, unsigned int))(*(_DWORD *)a2 + 16))( /*0x5267bd*/
              a2,
              *INIClass_field_3C,
              strlen((const char *)*INIClass_field_3C))
          + v3;
      v3 = (*(int (__thiscall **)(int, CHAR *, unsigned int))(*(_DWORD *)a2 + 16))(a2, String2, strlen(String2)) + v24; /*0x5267db*/
      INIClass_field_3C = k; /*0x5267dd*/
    }
    INIClass_field_3C = (_DWORD *)INIClass_field_3C[1]; /*0x5267e1*/
  }
  return v3 + (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2); /*0x5267f3*/
}



// ==== 0x00526810  INIClass::BinarySearchSection  this=INIClass  sig=csp ====
int __thiscall INIClass_BinarySearchSection(int this, unsigned __int8 *a2)
{
  int v3; // eax
  size_t v4; // ecx
  unsigned int v5; // edi
  _DWORD *v6; // eax
  int v7; // eax
  size_t v8; // eax
  _DWORD *v9; // ecx
  int v10; // ecx
  int v11; // ebp
  int v12; // edi
  int v13; // edx
  unsigned int v15[3]; // [esp+Ch] [ebp-Ch] BYREF
  int v16; // [esp+1Ch] [ebp+4h]

  if ( !a2 ) /*0x526820*/
    return 0; /*0x526820*/
  memset(v15, 0, sizeof(v15)); /*0x52682d*/
  v3 = Checksummer::Add_Buffer(v15, a2, strlen((const char *)a2)); /*0x526844*/
  v4 = *(_DWORD *)(this + 44); /*0x526849*/
  v5 = v3; /*0x52684c*/
  v16 = v3; /*0x526850*/
  if ( !v4 ) /*0x526854*/
    return 0; /*0x526854*/
  v6 = *(_DWORD **)(this + 56); /*0x52685a*/
  if ( v6 && *v6 == v5 ) /*0x526863*/
    goto LABEL_9; /*0x526863*/
  if ( !*(_BYTE *)(this + 52) ) /*0x526865*/
  {
    qsort(*(void **)(this + 40), v4, 8u, CompareFunc4Int); /*0x526876*/
    *(_DWORD *)(this + 56) = 0; /*0x52687e*/
    *(_BYTE *)(this + 52) = 1; /*0x526881*/
  }
  v15[0] = v5; /*0x526890*/
  v7 = System_Search(v15); /*0x526894*/
  if ( !v7 ) /*0x52689b*/
    return 0; /*0x526938*/
  *(_DWORD *)(this + 56) = v7; /*0x5268a1*/
LABEL_9:
  v8 = *(_DWORD *)(this + 44); /*0x5268a4*/
  if ( !v8 ) /*0x5268aa*/
    return unk_B7882C; /*0x5268aa*/
  v9 = *(_DWORD **)(this + 56); /*0x5268ac*/
  if ( v9 && *v9 == v5 ) /*0x5268b5*/
    return *(_DWORD *)(*(_DWORD *)(this + 56) + 4); /*0x526933*/
  if ( !*(_BYTE *)(this + 52) ) /*0x5268b7*/
  {
    qsort(*(void **)(this + 40), v8, 8u, CompareFunc4Int); /*0x5268c8*/
    *(_DWORD *)(this + 56) = 0; /*0x5268d0*/
    *(_BYTE *)(this + 52) = 1; /*0x5268d3*/
  }
  v10 = *(_DWORD *)(this + 44); /*0x5268d7*/
  v11 = *(_DWORD *)(this + 40); /*0x5268da*/
  if ( v10 <= 0 ) /*0x5268df*/
    return unk_B7882C; /*0x5268df*/
  while ( 1 ) /*0x5268ec*/
  {
    v12 = *(_DWORD *)(v11 + 8 * (v10 / 2)); /*0x5268ec*/
    v13 = v11 + 8 * (v10 / 2); /*0x5268f0*/
    if ( v12 <= v16 ) /*0x5268f6*/
      break; /*0x5268f6*/
    v10 /= 2; /*0x5268f8*/
LABEL_19:
    if ( v10 <= 0 ) /*0x52690a*/
      return unk_B7882C; /*0x52690a*/
  }
  if ( v12 != v16 ) /*0x5268fc*/
  {
    v11 = v13 + 8; /*0x5268fe*/
    v10 += -1 - v10 / 2; /*0x526906*/
    goto LABEL_19; /*0x526906*/
  }
  if ( v13 ) /*0x52691f*/
  {
    *(_DWORD *)(this + 56) = v13; /*0x526921*/
    return *(_DWORD *)(*(_DWORD *)(this + 56) + 4); /*0x526921*/
  }
  return unk_B7882C; /*0x526912*/
}



// ==== 0x00526950  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_526950(ObjectClass *this)
{
  return this->fallRate; /*0x526953*/
}



// ==== 0x00526960  INIClass::GetKeyCount  this=INIClass  sig=csp ====
int __thiscall INIClass_GetKeyCount(char *this, unsigned __int8 *a2)
{
  char *v2; // esi
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  int *v9; // esi
  int v10; // esi
  unsigned int v12[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !a2 ) /*0x52696d*/
    return 0; /*0x52696d*/
  memset(v12, 0, sizeof(v12)); /*0x52697a*/
  v2 = this + 40; /*0x5269a2*/
  v3 = Checksummer::Add_Buffer(v12, a2, strlen((const char *)a2)); /*0x5269a5*/
  a2 = (unsigned __int8 *)v3; /*0x5269a7*/
  if ( !*((_DWORD *)v2 + 1) ) /*0x5269ab*/
    return 0; /*0x5269b0*/
  v4 = (_DWORD *)*((_DWORD *)v2 + 4); /*0x5269b2*/
  if ( !v4 || *v4 != v3 ) /*0x5269bb*/
  {
    v5 = SortedArray::BinarySearch(&a2); /*0x5269c4*/
    if ( !v5 ) /*0x5269cb*/
      return 0; /*0x5269cb*/
    *((_DWORD *)v2 + 4) = v5; /*0x5269cd*/
  }
  v6 = *((_DWORD *)v2 + 1); /*0x5269d0*/
  a2 = (unsigned __int8 *)v3; /*0x5269d3*/
  if ( v6 ) /*0x5269d9*/
  {
    v7 = (_DWORD *)*((_DWORD *)v2 + 4); /*0x5269db*/
    if ( v7 && *v7 == v3 ) /*0x5269e4*/
      goto LABEL_12; /*0x5269e4*/
    v8 = SortedArray::BinarySearch(&a2); /*0x5269ed*/
    if ( v8 ) /*0x5269f4*/
    {
      *((_DWORD *)v2 + 4) = v8; /*0x5269f6*/
LABEL_12:
      v9 = (int *)(*((_DWORD *)v2 + 4) + 4); /*0x5269f9*/
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



// ==== 0x00526A30  INIClass::FindKey  this=INIClass  sig=csp ====
int __thiscall sub_526A30(char *this, char **a2)
{
  unsigned __int8 *v3; // eax
  char *v4; // esi
  int v5; // edi
  _DWORD *v6; // eax
  size_t v7; // eax
  int v8; // eax
  _DWORD *v9; // eax
  size_t v10; // eax
  int *v11; // esi
  int v12; // esi
  int v14; // [esp+8h] [ebp-10h] BYREF
  unsigned int v15[3]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = (unsigned __int8 *)String::GetOrEmpty_Alt(a2); /*0x526a3b*/
  if ( !v3 ) /*0x526a44*/
    return 0; /*0x526a44*/
  memset(v15, 0, sizeof(v15)); /*0x526a51*/
  v4 = this + 40; /*0x526a79*/
  v5 = Checksummer::Add_Buffer(v15, v3, strlen((const char *)v3)); /*0x526a7c*/
  a2 = (char **)v5; /*0x526a7e*/
  if ( !*((_DWORD *)v4 + 1) ) /*0x526a82*/
    return 0; /*0x526a87*/
  v6 = (_DWORD *)*((_DWORD *)v4 + 4); /*0x526a89*/
  if ( !v6 || *v6 != v5 ) /*0x526a92*/
  {
    v7 = SortedArray::BinarySearch((char **)v4, (int *)&a2); /*0x526a9b*/
    if ( !v7 ) /*0x526aa2*/
      return 0; /*0x526aa2*/
    *((_DWORD *)v4 + 4) = v7; /*0x526aa4*/
  }
  v8 = *((_DWORD *)v4 + 1); /*0x526aa7*/
  v14 = v5; /*0x526aaa*/
  if ( v8 ) /*0x526ab0*/
  {
    v9 = (_DWORD *)*((_DWORD *)v4 + 4); /*0x526ab2*/
    if ( v9 && *v9 == v5 ) /*0x526abb*/
      goto LABEL_12; /*0x526abb*/
    v10 = SortedArray::BinarySearch((char **)v4, &v14); /*0x526ac4*/
    if ( v10 ) /*0x526acb*/
    {
      *((_DWORD *)v4 + 4) = v10; /*0x526acd*/
LABEL_12:
      v11 = (int *)(*((_DWORD *)v4 + 4) + 4); /*0x526ad0*/
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



// ==== 0x00526B00  INIClass::ResetSection  this=INIClass  sig=csp ====
int __thiscall INIClass::ResetSection(INIClass *this)
{
  this->headNode[0] = 0; /*0x526b02*/
  this->headNode[1] = 0; /*0x526b05*/
  return 0; /*0x526b08*/
}



// ==== 0x00526B10  HashTableSection::FindSection  this=HashTableSection  sig=csp ====
int __thiscall HashTableSection::FindSection(int *this, unsigned __int8 *a2, unsigned __int8 *a3)
{
  unsigned __int8 *v3; // ebx
  int v5; // esi
  unsigned __int8 *v6; // eax
  size_t v7; // ecx
  int v8; // esi
  unsigned __int8 **v9; // edx
  int v10; // edx
  void *v11; // ecx
  int v12; // eax
  unsigned __int8 **v13; // ecx
  int v14; // eax
  unsigned __int8 *v16; // edi
  unsigned __int8 **v17; // eax
  int v18; // eax
  int *v19; // esi
  int v20; // [esp+10h] [ebp-1Ch] BYREF
  unsigned int v21[3]; // [esp+14h] [ebp-18h] BYREF
  unsigned int v22[3]; // [esp+20h] [ebp-Ch] BYREF

  v3 = a2; /*0x526b14*/
  if ( a2 == (unsigned __int8 *)*(this + 1) ) /*0x526b20*/
  {
    v5 = *(this + 2); /*0x526b26*/
    goto LABEL_3; /*0x526b26*/
  }
  if ( !a2 ) /*0x526c07*/
    goto LABEL_29; /*0x526c07*/
  memset(v21, 0, sizeof(v21)); /*0x526c17*/
  v16 = (unsigned __int8 *)Checksummer::Add_Buffer(v21, a2, strlen((const char *)a2)); /*0x526c31*/
  a2 = v16; /*0x526c33*/
  if ( !*(this + 11) ) /*0x526c37*/
    goto LABEL_29; /*0x526c37*/
  v17 = (unsigned __int8 **)*(this + 14); /*0x526c3e*/
  if ( v17 && *v17 == v16 ) /*0x526c47*/
    goto LABEL_24; /*0x526c47*/
  v18 = SortedArray::BinarySearch((char **)this + 10, (int *)&a2); /*0x526c50*/
  if ( !v18 ) /*0x526c57*/
  {
LABEL_29:
    *(this + 1) = 0; /*0x526c90*/
    *(this + 2) = 0; /*0x526c93*/
    return 0; /*0x526c93*/
  }
  *(this + 14) = v18; /*0x526c59*/
LABEL_24:
  v20 = (int)v16; /*0x526c5c*/
  if ( (unsigned __int8)HashTable::BinarySearch(this + 10, &v20) ) /*0x526c67*/
    v19 = (int *)(*(this + 14) + 4); /*0x526c73*/
  else
    v19 = (int *)&unk_B7882C; /*0x526c78*/
  v5 = *v19; /*0x526c7d*/
  if ( !v5 ) /*0x526c81*/
    goto LABEL_29; /*0x526c81*/
  *(this + 2) = v5; /*0x526c83*/
  *(this + 1) = (int)v3; /*0x526c86*/
LABEL_3:
  if ( !v5 ) /*0x526b2d*/
    return 0; /*0x526b2d*/
  if ( !a3 ) /*0x526b39*/
    return 0; /*0x526b39*/
  memset(v22, 0, sizeof(v22)); /*0x526b46*/
  v6 = (unsigned __int8 *)Checksummer::Add_Buffer(v22, a3, strlen((const char *)a3)); /*0x526b5d*/
  v7 = *(_DWORD *)(v5 + 48); /*0x526b62*/
  v8 = v5 + 44; /*0x526b65*/
  a2 = v6; /*0x526b6a*/
  if ( !v7 ) /*0x526b6e*/
    return 0; /*0x526b6e*/
  v9 = *(unsigned __int8 ***)(v8 + 16); /*0x526b74*/
  if ( v9 && *v9 == v6 ) /*0x526b7d*/
    goto LABEL_12; /*0x526b7d*/
  if ( !*(_BYTE *)(v8 + 12) ) /*0x526b7f*/
  {
    qsort(*(void **)v8, v7, 8u, CompareFunc3Int); /*0x526b91*/
    v6 = a2; /*0x526b96*/
    *(_DWORD *)(v8 + 16) = 0; /*0x526b9d*/
    *(_BYTE *)(v8 + 12) = 1; /*0x526ba0*/
  }
  v10 = *(_DWORD *)(v8 + 4); /*0x526ba4*/
  v11 = *(void **)v8; /*0x526ba7*/
  v21[0] = (unsigned int)v6; /*0x526ba9*/
  v12 = UI_Find((int)v11, v10, (int *)v21); /*0x526bb2*/
  if ( !v12 ) /*0x526bb9*/
    return 0; /*0x526c9f*/
  *(_DWORD *)(v8 + 16) = v12; /*0x526bbf*/
  v6 = a2; /*0x526bc2*/
LABEL_12:
  if ( *(_DWORD *)(v8 + 4) ) /*0x526bc6*/
  {
    v13 = *(unsigned __int8 ***)(v8 + 16); /*0x526bcf*/
    if ( v13 && *v13 == v6 ) /*0x526bd8*/
      return *(_DWORD *)(*(_DWORD *)(v8 + 16) + 4); /*0x526bd8*/
    v14 = HashTable::BinarySearchAlt((char **)v8, (int *)&a2); /*0x526be1*/
    if ( v14 ) /*0x526be8*/
    {
      *(_DWORD *)(v8 + 16) = v14; /*0x526bee*/
      return *(_DWORD *)(*(_DWORD *)(v8 + 16) + 4); /*0x526c00*/
    }
  }
  return unk_B78830; /*0x526bf4*/
}



// ==== 0x00526CC0  INIClass::GetStringByIndex  this=INIClass  sig=csp ====
int __thiscall INIClass_GetStringByIndex(char *this, unsigned __int8 *a2, int a3)
{
  char *v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // edx
  _DWORD *v8; // eax
  unsigned int v10[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !a2 ) /*0x526ccd*/
    return 0; /*0x526ccd*/
  memset(v10, 0, sizeof(v10)); /*0x526cda*/
  v3 = this + 40; /*0x526d02*/
  v4 = Checksummer::Add_Buffer(v10, a2, strlen((const char *)a2)); /*0x526d05*/
  a2 = (unsigned __int8 *)v4; /*0x526d07*/
  if ( !*((_DWORD *)v3 + 1) ) /*0x526d0b*/
    return 0; /*0x526d10*/
  if ( !(unsigned __int8)SortedArray::CheckCache(&a2) ) /*0x526d19*/
  {
    v5 = SortedArray::BinarySearch(&a2); /*0x526d29*/
    if ( !v5 ) /*0x526d30*/
      return 0; /*0x526d30*/
    *((_DWORD *)v3 + 4) = v5; /*0x526d32*/
  }
  a2 = (unsigned __int8 *)v4; /*0x526d3c*/
  v6 = *(_DWORD *)SortedArray::FindValue(&a2); /*0x526d45*/
  if ( v6 ) /*0x526d49*/
  {
    v7 = a3; /*0x526d4b*/
    if ( a3 < *(_DWORD *)(v6 + 48) ) /*0x526d54*/
    {
      v8 = *(_DWORD **)(v6 + 24); /*0x526d56*/
      if ( v8 ) /*0x526d5b*/
      {
        while ( v8[1] && v8[2] ) /*0x526d69*/
        {
          if ( !v7 ) /*0x526d6d*/
            return v8[3]; /*0x526d80*/
          v8 = (_DWORD *)v8[1]; /*0x526d6f*/
          --v7; /*0x526d71*/
        }
      }
    }
  }
  return 0; /*0x526d7b*/
}



// ==== 0x00526D90  INIClass::GetStringByIndexEx  this=INIClass  sig=csp ====
char **__thiscall INIClass::GetStringByIndexEx(INIClass *this, char **a2, char **a3, int a4)
{
  int v4; // ebp
  unsigned __int8 *v6; // eax
  SortedArray *v7; // esi
  char **v8; // edi
  int v9; // eax
  int v10; // eax
  _DWORD *v11; // eax
  const char *v12; // eax
  int v14; // [esp+Ch] [ebp-10h] BYREF
  _BYTE v15[12]; // [esp+10h] [ebp-Ch] BYREF

  v4 = a4; /*0x526d94*/
  v6 = (unsigned __int8 *)String::GetOrEmpty_Alt((String *)a3); /*0x526da0*/
  if ( !v6 ) /*0x526da9*/
    goto LABEL_14; /*0x526da9*/
  memset(v15, 0, sizeof(v15)); /*0x526db6*/
  v7 = (SortedArray *)&this->__pad_20[8]; /*0x526dde*/
  v8 = (char **)Checksummer::Add_Buffer((Checksummer *)v15, v6, strlen((const char *)v6)); /*0x526de1*/
  a3 = v8; /*0x526de3*/
  if ( !v7->SortedArray_field_0x04 ) /*0x526de7*/
    goto LABEL_14; /*0x526dec*/
  if ( !(unsigned __int8)SortedArray::CheckCache(v7, &a3) ) /*0x526df5*/
  {
    v9 = SortedArray::BinarySearch(v7, (int *)&a3); /*0x526e05*/
    if ( !v9 ) /*0x526e0c*/
      goto LABEL_14; /*0x526e0c*/
    v7->SortedArray_field_0x10 = v9; /*0x526e0e*/
  }
  v14 = (int)v8; /*0x526e18*/
  v10 = *(_DWORD *)SortedArray::FindValue(v7, &v14); /*0x526e21*/
  if ( v10 ) /*0x526e25*/
  {
    if ( a4 < *(_DWORD *)(v10 + 48) ) /*0x526e30*/
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
          --v4; /*0x526e4d*/
        }
      }
    }
  }
LABEL_14:
  v12 = 0; /*0x526e59*/
LABEL_15:
  String::Assign((String *)a2, v12); /*0x526e5b*/
  return a2; /*0x526e69*/
}



// ==== 0x00526E80  INIClass::ReadBase64Data  this=INIClass  sig=csp ====
char __thiscall INIClass_ReadBase64Data(char *this, unsigned __int8 *Block, int a3, signed int Size)
{
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v9[3]; // [esp+10h] [ebp-A0h] BYREF
  _DWORD v10[4]; // [esp+1Ch] [ebp-94h] BYREF
  int v11[7]; // [esp+2Ch] [ebp-84h] BYREF
  char Source[72]; // [esp+48h] [ebp-68h] BYREF
  char Buffer[32]; // [esp+90h] [ebp-20h] BYREF

  if ( !Block || !a3 || Size < 1 ) /*0x526eb4*/
    return 0; /*0x526fa4*/
  INIClass::ClearSection((int)this, (int)Block, 0); /*0x526ebc*/
  v9[1] = 0; /*0x526ece*/
  v9[2] = 0; /*0x526ed2*/
  Buffer::Init(v10, a3, Size); /*0x526ede*/
  v10[3] = 0; /*0x526ee7*/
  v9[0] = (int)&BufferStraw::`vftable'; /*0x526ef0*/
  memset(&v11[1], 0, 16); /*0x526ef8*/
  v11[0] = (int)&Base64Straw::`vftable'; /*0x526f08*/
  Delegate::Set(v11, (int)v9); /*0x526f10*/
  v5 = 1; /*0x526f21*/
  v6 = BitmapClass::ProcessFrame(Source, 0x46u); /*0x526f26*/
  Source[v6] = 0; /*0x526f2d*/
  if ( v6 ) /*0x526f31*/
  {
    do /*0x526f75*/
    {
      sprintf(Buffer, "%d", v5); /*0x526f41*/
      INIClass::SetString(this, Block, Buffer, Source); /*0x526f59*/
      ++v5; /*0x526f69*/
      v7 = BitmapClass::ProcessFrame(Source, 0x46u); /*0x526f6a*/
      Source[v7] = 0; /*0x526f71*/
    }
    while ( v7 ); /*0x526f75*/
  }
  Straw::Dtor(v11); /*0x526f7b*/
  Vector::Clear((int)v10); /*0x526f84*/
  Straw::Dtor(v9); /*0x526f8d*/
  return 1; /*0x526f92*/
}



// ==== 0x00526FB0  INIClass::GetBase64Data  this=INIClass  sig=csp ====
int __thiscall INIClass::GetBase64Data(INIClass *this, char *a2, int a3, size_t Size)
{
  unsigned int v6; // kr04_4
  Checksummer *v7; // eax
  int v8; // esi
  int v9; // eax
  int i; // ebp
  int *v11; // edi
  int v12; // esi
  int v13; // eax
  _DWORD *v14; // eax
  unsigned __int8 *v15; // eax
  const char *v16; // esi
  int Section; // eax
  const char *v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // esi
  int v22; // [esp-4h] [ebp-E0h] BYREF
  int v23; // [esp+Ch] [ebp-D0h] BYREF
  int v24; // [esp+10h] [ebp-CCh]
  int *v25; // [esp+14h] [ebp-C8h]
  Base64Pipe v26; // [esp+18h] [ebp-C4h] BYREF
  Pipe v27; // [esp+34h] [ebp-A8h] BYREF
  int v28; // [esp+4Ch] [ebp-90h]
  KeyValuePair v29[3]; // [esp+50h] [ebp-8Ch] BYREF
  char Destination[128]; // [esp+5Ch] [ebp-80h] BYREF

  v25 = (int *)this; /*0x526fc6*/
  if ( !a2 ) /*0x526fca*/
    return 0; /*0x526fd7*/
  *(_DWORD *)&v26.__pad_0[4] = 0; /*0x526fef*/
  *(_DWORD *)&v26.__pad_0[8] = 0; /*0x526ff3*/
  v26.field_C = 1; /*0x526ff7*/
  v26.field_10 = 0; /*0x526fff*/
  *(_DWORD *)v26.__pad_0 = &Base64Pipe::`vftable'; /*0x527003*/
  v27.Pipe_field_0x04 = 0; /*0x52700b*/
  v27.Pipe_field_0x08 = 0; /*0x52700f*/
  Buffer::Init((Buffer *)&v27.Pipe_field_0x0C, a3, Size); /*0x52701b*/
  v28 = 0; /*0x527029*/
  *(_DWORD *)v27.__pad_0 = &BufferPipe::`vftable'; /*0x52702d*/
  Pipe::SetDelegate((Pipe *)&v26, (int)&v27); /*0x527035*/
  v24 = 0; /*0x527041*/
  v6 = strlen(a2) + 1; /*0x527045*/
  v7 = (Checksummer *)KeyValuePair::Init(v29, 0); /*0x527051*/
  v8 = Checksummer::Add_Buffer(v7, (unsigned __int8 *)a2, v6 - 1); /*0x52705d*/
  v23 = v8; /*0x527069*/
  if ( (unsigned __int8)HashTable::BinarySearch((int *)&this->__pad_20[8], &v23) /*0x52708a*/
    && (v23 = v8, (v9 = *(_DWORD *)SortedArray::FindValue((SortedArray *)&this->__pad_20[8], &v23)) != 0) )
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
    v13 = INIClass::BinarySearchSection((int)v25, (unsigned __int8 *)a2); /*0x5270b7*/
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
    v16 = asc_818A0C; /*0x5270ec*/
    if ( &v22 != (int *)-96 && v15 ) /*0x5270fb*/
    {
      Section = HashTableSection::FindSection(v11, (unsigned __int8 *)a2, v15); /*0x527108*/
      if ( Section ) /*0x52710f*/
      {
        v18 = *(const char **)(Section + 16); /*0x527111*/
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
    v20 = Delegate::ProcessBitmapStream(&v26, Destination, v19); /*0x527124*/
    ++i; /*0x52713d*/
  }
  v21 = (*(int (__thiscall **)(Base64Pipe *))(*(_DWORD *)v26.__pad_0 + 4))(&v26); /*0x52714a*/
  Vector::Clear((int)&v27.Pipe_field_0x0C); /*0x52715b*/
  Pipe::Dtor(&v27); /*0x527164*/
  Pipe::Dtor((Pipe *)&v26); /*0x52716d*/
  return v21 + v24; /*0x526fcc*/
}



// ==== 0x005271C0  INIClass::ReadIntList2  this=INIClass  sig=csp ====
char __thiscall INIClass::ReadIntList2(INIClass *this, unsigned __int8 *Block, char *Source)
{
  char *v4; // ebp
  int i; // ebx
  unsigned int v6; // kr04_4
  unsigned int v7; // esi
  char v8; // al
  char Buffer[32]; // [esp+4h] [ebp-A0h] BYREF
  char Destination[128]; // [esp+24h] [ebp-80h] BYREF

  if ( !Block ) /*0x5271d3*/
    return 0; /*0x5271d5*/
  INIClass::ClearSection((int *)this->__pad_0, (int)Block, 0); /*0x5271e7*/
  v4 = Source; /*0x5271ec*/
  for ( i = 1; v4; v4 += v7 ) /*0x5271fa*/
  {
    if ( !*v4 ) /*0x527200*/
      break; /*0x527200*/
    strncpy(Destination, v4, 0x4Bu); /*0x527212*/
    Destination[75] = 0; /*0x527222*/
    sprintf(Buffer, "%d", i); /*0x52722a*/
    v6 = strlen(Destination) + 1; /*0x52723b*/
    v7 = v6 - 1; /*0x527240*/
    if ( (int)(v6 - 1) <= 0 ) /*0x527244*/
      break; /*0x527244*/
    if ( (int)(v6 - 1) >= 75 ) /*0x527249*/
    {
      while ( 1 ) /*0x52724b*/
      {
        v8 = Destination[v7]; /*0x52724b*/
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
      Destination[v7] = 0; /*0x527260*/
    }
    String::Trim(Destination); /*0x527269*/
    INIClass::SetString(this->__pad_0, Block, Buffer, Destination); /*0x527284*/
    ++i; /*0x527289*/
  }
  return 1; /*0x5271d7*/
}



// ==== 0x005272B0  ObjectClass::LookupCSFString  this=ObjectClass  sig=csp ====
unsigned __int8 *__thiscall LookupCSFString(ObjectClass *this, unsigned __int8 *a2, char *Destination, int Count)
{
  int v4; // eax
  unsigned __int8 *v6; // ebx
  int *p_owningHouseIndex; // esi
  unsigned __int8 *v8; // edi
  int *v9; // esi
  int v10; // esi
  int v11; // eax
  char *v12; // ecx
  int v13; // edx
  int v14; // ebp
  unsigned int v15; // kr08_4
  Checksummer *v16; // eax
  int v17; // esi
  int v18; // eax
  _DWORD *v19; // eax
  char *v20; // ebp
  int *vtable2; // esi
  unsigned int v22; // kr0C_4
  Checksummer *v23; // eax
  int *v24; // esi
  int v25; // eax
  char *v26; // eax
  unsigned int v27; // kr10_4
  Checksummer *v28; // eax
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
  Checksummer v41; // [esp+28h] [ebp-24h] BYREF
  KeyValuePair v42[3]; // [esp+40h] [ebp-Ch] BYREF

  v4 = Count; /*0x5272b3*/
  if ( Count <= 0 ) /*0x5272c3*/
    return 0; /*0x5272cc*/
  *Destination = 0; /*0x5272d6*/
  if ( v4 <= 1 ) /*0x5272d9*/
    return 0; /*0x5272e2*/
  v6 = a2; /*0x5272e6*/
  if ( a2
    && (memset(&v41, 0, 12),
        p_owningHouseIndex = &this->owningHouseIndex,
        v8 = (unsigned __int8 *)Checksummer::Add_Buffer(&v41, a2, strlen((const char *)a2)),
        a2 = v8,
        (unsigned __int8)HashTable::BinarySearch(p_owningHouseIndex, (int *)&a2))
    && ((a2 = v8, !(unsigned __int8)HashTable::BinarySearch(p_owningHouseIndex, (int *)&a2))
      ? (v9 = (int *)&unk_B7882C)
      : (v9 = (int *)(p_owningHouseIndex[4] + 4)),
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
        v15 = strlen((const char *)v6) + 1; /*0x5273ac*/
        v16 = (Checksummer *)KeyValuePair::Init((KeyValuePair *)&v41, 0); /*0x5273b8*/
        v17 = Checksummer::Add_Buffer(v16, v6, v15 - 1); /*0x5273c8*/
        v38 = v17; /*0x5273ce*/
        if ( (unsigned __int8)HashTable::BinarySearch(&this->owningHouseIndex, &v38) ) /*0x5273d8*/
        {
          v39 = v17; /*0x5273e5*/
          v18 = *(_DWORD *)SortedArray::FindValue((SortedArray *)&this->owningHouseIndex, &v39); /*0x5273f1*/
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
      Source = &g_INI_DefaultBuffer; /*0x52742b*/
      if ( !Destination || Count < 2 || !v6 || !v20 ) /*0x527454*/
        goto LABEL_45; /*0x527454*/
      if ( v6 == this->? ) /*0x527461*/
        break; /*0x527461*/
      v27 = strlen((const char *)v6) + 1; /*0x5274d7*/
      v28 = (Checksummer *)KeyValuePair::Init((KeyValuePair *)&v41.buffer, 0); /*0x5274e3*/
      v29 = Checksummer::Add_Buffer(v28, v6, v27 - 1); /*0x5274ef*/
      v40 = v29; /*0x5274f9*/
      if ( (unsigned __int8)HashTable::BinarySearch(&this->owningHouseIndex, &v40) ) /*0x527503*/
      {
        v40 = v29; /*0x527513*/
        vtable2 = *(int **)SortedArray::FindValue((SortedArray *)&this->owningHouseIndex, &v40); /*0x52751c*/
        if ( vtable2 ) /*0x527520*/
        {
          this->? = vtable2; /*0x527526*/
          this->? = v6; /*0x527529*/
          goto LABEL_33; /*0x52752c*/
        }
      }
      this->? = 0; /*0x527537*/
      this->? = 0; /*0x52753a*/
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
    vtable2 = (int *)this->?; /*0x527463*/
LABEL_33:
    if ( vtable2 ) /*0x527468*/
    {
      v22 = strlen(v20) + 1; /*0x527471*/
      v23 = (Checksummer *)KeyValuePair::Init(v42, 0); /*0x52747d*/
      v36 = Checksummer::Add_Buffer(v23, (unsigned __int8 *)v20, v22 - 1); /*0x527489*/
      v24 = vtable2 + 11; /*0x52748d*/
      if ( (unsigned __int8)SortedArray::Find(v24, &v36) ) /*0x527497*/
      {
        v25 = *(_DWORD *)SortedArray::BinarySearch2((int)v24, &v36); /*0x5274ac*/
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
int __thiscall INIClass::SetInt(char *this, unsigned __int8 *Block, char *a3, int a4, int a5)
{
  int result; // eax
  const char *v7; // [esp-8h] [ebp-20Ch]
  char Buffer[512]; // [esp+4h] [ebp-200h] BYREF

  if ( a5 == 1 ) /*0x5275ce*/
  {
    sprintf(Buffer, off_825BAC, a4); /*0x52760d*/
  }
  else
  {
    if ( a5 == 2 ) /*0x5275d1*/
      v7 = (const char *)&off_825BB0; /*0x5275f3*/
    else
      v7 = g_Str_Trace; /*0x5275df*/
    sprintf(Buffer, v7, a4); /*0x5275e5*/
  }
  LOBYTE(result) = INIClass::SetString(this, Block, a3, Buffer); /*0x52762c*/
  return result; /*0x527631*/
}



// ==== 0x00527640  INIClass::SetIntFormat  this=INIClass  sig=csp ====
char __thiscall sub_527640(char *this, char **a2, char **a3, int a4, int a5)
{
  char *v6; // edi
  unsigned __int8 *v7; // ebx
  const char *v9; // [esp-8h] [ebp-214h]
  char Buffer[512]; // [esp+Ch] [ebp-200h] BYREF

  v6 = String::GetOrEmpty_Alt(a3); /*0x52765e*/
  v7 = (unsigned __int8 *)String::GetOrEmpty_Alt(a2); /*0x527665*/
  if ( a5 == 1 ) /*0x52766f*/
  {
    sprintf(Buffer, off_825BAC, a4); /*0x5276ae*/
  }
  else
  {
    if ( a5 == 2 ) /*0x527672*/
      v9 = (const char *)&off_825BB0; /*0x527694*/
    else
      v9 = g_Str_Trace; /*0x527680*/
    sprintf(Buffer, v9, a4); /*0x527686*/
  }
  return INIClass::SetString(this, v7, v6, Buffer); /*0x5276c4*/
}



// ==== 0x005276D0  INIClass::ReadInt_Overwrite  this=INIClass  sig=csp ====
int __thiscall INIClass::ReadInt_Overwrite(bool *this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  unsigned __int8 *v4; // ebp
  unsigned __int8 *v6; // edx
  int v7; // esi
  unsigned __int8 *v8; // eax
  int v9; // ecx
  HashTable *v10; // esi
  unsigned __int8 **HashTable_field_0x10; // ecx
  int v12; // eax
  unsigned __int8 **v13; // ecx
  int v14; // eax
  int *v15; // esi
  unsigned __int8 *v16; // edi
  unsigned __int8 **v17; // eax
  int v18; // eax
  int *v19; // esi
  int v21; // esi
  const char *v22; // edx
  _BYTE v23[12]; // [esp+8h] [ebp-Ch] BYREF

  v4 = a2; /*0x5276d7*/
  if ( a2 ) /*0x5276df*/
  {
    v6 = a3; /*0x5276e5*/
    if ( a3 ) /*0x5276eb*/
    {
      if ( a2 == *((unsigned __int8 **)this + 1) ) /*0x5276f8*/
      {
        v7 = this->q008; /*0x5276fe*/
LABEL_5:
        if ( v7 ) /*0x527703*/
        {
          memset(v23, 0, sizeof(v23)); /*0x527709*/
          v8 = (unsigned __int8 *)Checksummer::Add_Buffer((Checksummer *)v23, v6, strlen((const char *)v6)); /*0x527727*/
          v9 = *(_DWORD *)(v7 + 48); /*0x52772c*/
          v10 = (HashTable *)(v7 + 44); /*0x52772f*/
          a3 = v8; /*0x527734*/
          if ( v9 ) /*0x527738*/
          {
            HashTable_field_0x10 = (unsigned __int8 **)v10->HashTable_field_0x10; /*0x52773e*/
            if ( HashTable_field_0x10 && *HashTable_field_0x10 == v8 ) /*0x527747*/
            {
LABEL_11:
              if ( v10->HashTable_field_0x04 ) /*0x527764*/
              {
                v13 = (unsigned __int8 **)v10->HashTable_field_0x10; /*0x52776f*/
                if ( v13 && *v13 == v8 ) /*0x527778*/
                  goto LABEL_16; /*0x527778*/
                v14 = HashTable::BinarySearchAlt(v10, (int *)&a3); /*0x527781*/
                if ( v14 ) /*0x527788*/
                {
                  v10->HashTable_field_0x10 = v14; /*0x52778e*/
LABEL_16:
                  v15 = (int *)(v10->HashTable_field_0x10 + 4); /*0x527791*/
LABEL_29:
                  v21 = *v15; /*0x527840*/
                  if ( v21 ) /*0x527844*/
                  {
                    v22 = *(const char **)(v21 + 16); /*0x52784a*/
                    if ( v22 ) /*0x52784f*/
                    {
                      if ( *v22 == 36 ) /*0x527854*/
                      {
                        sscanf(v22, off_825BB8, &a4); /*0x527861*/
                        return a4; /*0x527874*/
                      }
                      if ( tolower(v22[strlen(*(const char **)(v21 + 16)) - 1]) == 104 ) /*0x527894*/
                      {
                        sscanf(*(const char *const *)(v21 + 16), off_825BB4, &a4); /*0x5278a4*/
                        return a4; /*0x5278b7*/
                      }
                      return atoi(*(const char **)(v21 + 16)); /*0x5278c6*/
                    }
                  }
                  return a4; /*0x5278c6*/
                }
              }
              v15 = (int *)&unk_B78830; /*0x52783b*/
              goto LABEL_29; /*0x52783b*/
            }
            v12 = HashTable::BinarySearchAlt(v10, (int *)&a3); /*0x527750*/
            if ( v12 ) /*0x527757*/
            {
              v10->HashTable_field_0x10 = v12; /*0x52775d*/
              v8 = a3; /*0x527760*/
              goto LABEL_11; /*0x527760*/
            }
          }
        }
        return a4; /*0x5278d5*/
      }
      memset(v23, 0, sizeof(v23)); /*0x52779c*/
      v16 = (unsigned __int8 *)Checksummer::Add_Buffer((Checksummer *)v23, a2, strlen((const char *)a2)); /*0x5277c2*/
      a2 = v16; /*0x5277c4*/
      if ( this->INIClass_field_2C ) /*0x5277c8*/
      {
        v17 = (unsigned __int8 **)this->unknown38; /*0x5277cf*/
        if ( !v17 || *v17 != v16 ) /*0x5277d8*/
        {
          v18 = SortedArray::BinarySearch((SortedArray *)(this + 40), (int *)&a2); /*0x5277e1*/
          if ( !v18 ) /*0x5277e8*/
            goto LABEL_27; /*0x5277e8*/
          this->unknown38 = v18; /*0x5277ea*/
        }
        a2 = v16; /*0x5277f1*/
        if ( (unsigned __int8)HashTable::BinarySearch((int *)this + 10, (int *)&a2) ) /*0x5277f8*/
          v19 = (int *)(this->unknown38 + 4); /*0x527804*/
        else
          v19 = (int *)&unk_B7882C; /*0x527809*/
        v7 = *v19; /*0x52780e*/
        if ( v7 ) /*0x527812*/
        {
          v6 = a3; /*0x527814*/
          this->q008 = v7; /*0x527818*/
          this->headNode = v4; /*0x52781b*/
          goto LABEL_5; /*0x527820*/
        }
      }
LABEL_27:
      this->headNode = 0; /*0x527825*/
      this->q008 = 0; /*0x52782c*/
      return a4; /*0x527838*/
    }
  }
  return a4; /*0x527833*/
}



// ==== 0x005278F0  INIClass::ReadInt  this=INIClass  sig=csp ====
int __thiscall INIClass::ReadInt(bool *this, String *a2, String *a3, int a4)
{
  unsigned __int8 *v5; // eax
  unsigned __int8 *v7; // [esp-8h] [ebp-Ch]

  v7 = (unsigned __int8 *)String::GetOrEmpty_Alt(a3); /*0x527905*/
  v5 = (unsigned __int8 *)String::GetOrEmpty_Alt(a2); /*0x527906*/
  return INIClass::ReadInt_Overwrite(this, v5, v7, a4); /*0x527913*/
}



// ==== 0x00527920  INIClass::ReadGUID_Overwrite  this=INIClass  sig=csp ====
int __thiscall INIClass::ReadGUID_Overwrite(
        int this,
        int a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  unsigned __int8 *v9; // edx
  int v10; // esi
  int v11; // eax
  int v12; // ecx
  int v13; // esi
  _DWORD *v14; // ecx
  int v15; // eax
  int *v16; // esi
  int v17; // edi
  int v18; // eax
  int *v19; // esi
  int v20; // esi
  char *v21; // esi
  int v23; // [esp+Ch] [ebp-1ACh] BYREF
  char *Source; // [esp+10h] [ebp-1A8h]
  int v25; // [esp+14h] [ebp-1A4h] BYREF
  CLSID pclsid; // [esp+18h] [ebp-1A0h] BYREF
  int v27; // [esp+24h] [ebp-194h]
  int v28; // [esp+28h] [ebp-190h] BYREF
  unsigned int v29[3]; // [esp+2Ch] [ebp-18Ch] BYREF
  char Destination[128]; // [esp+38h] [ebp-180h] BYREF
  WCHAR WideCharStr[128]; // [esp+B8h] [ebp-100h] BYREF

  Source = &g_INI_DefaultBuffer; /*0x527931*/
  if ( !Destination ) /*0x527939*/
    goto LABEL_32; /*0x527939*/
  if ( !a3 ) /*0x52794a*/
    goto LABEL_32; /*0x52794a*/
  v9 = a4; /*0x527950*/
  if ( !a4 ) /*0x527959*/
    goto LABEL_32; /*0x527959*/
  if ( a3 != *(unsigned __int8 **)(this + 4) ) /*0x527965*/
  {
    memset(v29, 0, sizeof(v29)); /*0x5279ec*/
    v17 = Checksummer::Add_Buffer(v29, a3, strlen((const char *)a3)); /*0x527a12*/
    v25 = v17; /*0x527a14*/
    if ( *(_DWORD *)(this + 44) ) /*0x527a18*/
    {
      if ( !(unsigned __int8)SortedArray::CheckCache((_DWORD *)(this + 40), &v25) ) /*0x527a26*/
      {
        v18 = SortedArray::BinarySearch((char **)(this + 40), &v25); /*0x527a36*/
        if ( !v18 ) /*0x527a3d*/
          goto LABEL_23; /*0x527a3d*/
        *(_DWORD *)(this + 56) = v18; /*0x527a3f*/
      }
      v28 = v17; /*0x527a49*/
      if ( (unsigned __int8)HashTable::BinarySearch((int *)(this + 40), &v28) ) /*0x527a4d*/
        v19 = (int *)(*(_DWORD *)(this + 56) + 4); /*0x527a59*/
      else
        v19 = (int *)&unk_B7882C; /*0x527a5e*/
      v10 = *v19; /*0x527a63*/
      if ( v10 ) /*0x527a67*/
      {
        v9 = a4; /*0x527a69*/
        *(_DWORD *)(this + 8) = v10; /*0x527a70*/
        *(_DWORD *)(this + 4) = a3; /*0x527a73*/
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
    memset(&pclsid, 0, sizeof(pclsid)); /*0x527976*/
    v11 = Checksummer::Add_Buffer((unsigned int *)&pclsid, v9, strlen((const char *)v9)); /*0x527994*/
    v12 = *(_DWORD *)(v10 + 48); /*0x527999*/
    v13 = v10 + 44; /*0x52799c*/
    v23 = v11; /*0x5279a1*/
    if ( v12 ) /*0x5279a5*/
    {
      v14 = *(_DWORD **)(v13 + 16); /*0x5279ab*/
      if ( !v14 || *v14 != v11 ) /*0x5279b4*/
      {
        v15 = HashTable::BinarySearchAlt((char **)v13, &v23); /*0x5279bd*/
        if ( !v15 ) /*0x5279c4*/
          goto LABEL_28; /*0x5279c4*/
        *(_DWORD *)(v13 + 16) = v15; /*0x5279ca*/
      }
      if ( (unsigned __int8)SortedArray::Find((int *)v13, &v23) ) /*0x5279d4*/
        v16 = (int *)(*(_DWORD *)(v13 + 16) + 4); /*0x5279e4*/
      else
        v16 = (int *)&unk_B78830; /*0x527a87*/
      v20 = *v16; /*0x527a8c*/
      if ( v20 ) /*0x527a90*/
      {
        v21 = *(char **)(v20 + 16); /*0x527a92*/
        if ( v21 ) /*0x527a97*/
          Source = v21; /*0x527a99*/
      }
    }
  }
LABEL_28:
  if ( Source ) /*0x527aa6*/
  {
    strncpy(Destination, Source, 0x80u); /*0x527ab7*/
    Destination[127] = 0; /*0x527ac3*/
    String::Trim(Destination); /*0x527acb*/
    if ( strlen(Destination) ) /*0x527ad4*/
    {
      MultiByteToWideChar(0, 1u, Destination, -1, WideCharStr, 128); /*0x527af9*/
      if ( CLSIDFromString(WideCharStr, &pclsid) >= 0 ) /*0x527b14*/
      {
        *(CLSID *)a2 = pclsid; /*0x527b26*/
        *(_DWORD *)(a2 + 12) = v27; /*0x527b3a*/
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
char __thiscall INIClass::ReadDouble(INIClass *this, unsigned __int8 *Block, char *a3, IID *rclsid)
{
  LPOLESTR lpsz; // [esp+4h] [ebp-84h] BYREF
  CHAR MultiByteStr[128]; // [esp+8h] [ebp-80h] BYREF

  lpsz = 0; /*0x527ba6*/
  StringFromCLSID(rclsid, &lpsz); /*0x527bae*/
  if ( !WideCharToMultiByte(0, 0, lpsz, -1, MultiByteStr, 128, 0, 0) ) /*0x527bcd*/
    GetLastError(); /*0x527bd7*/
  SysFreeString(lpsz); /*0x527be2*/
  return INIClass::SetString(this->__pad_0, Block, a3, MultiByteStr); /*0x527c04*/
}



// ==== 0x00527C10  INIClass::SetRect  this=INIClass  sig=csp ====
char __thiscall INIClass_SetRect(char *this, unsigned __int8 *Block, char *a3, _DWORD *a4)
{
  char Buffer[64]; // [esp+4h] [ebp-40h] BYREF

  sprintf(Buffer, "%d,%d,%d,%d", *a4, a4[1], a4[2], a4[3]); /*0x527c33*/
  return INIClass::SetString(this, Block, a3, Buffer); /*0x527c51*/
}



// ==== 0x00527C60  INIClass::ReadFloat  this=INIClass  sig=csp ====
char __thiscall INIClass::ReadFloat(INIClass *this, char **a2, char **a3, _DWORD *a4)
{
  char *v5; // edi
  unsigned __int8 *v6; // ebx
  char Buffer[64]; // [esp+Ch] [ebp-40h] BYREF

  v5 = String::GetOrEmpty_Alt((String *)a3); /*0x527c75*/
  v6 = (unsigned __int8 *)String::GetOrEmpty_Alt((String *)a2); /*0x527c7c*/
  sprintf(Buffer, "%d,%d,%d,%d", *a4, a4[1], a4[2], a4[3]); /*0x527c9b*/
  return INIClass::SetString(this->__pad_0, v6, v5, Buffer); /*0x527cb1*/
}



// ==== 0x00527CC0  INIClass::ParseValue  this=INIClass  sig=csp ====
unsigned int *__thiscall INIClass::ParseValue(
        INIClass *this,
        unsigned int *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned int *a5)
{
  unsigned __int8 *v6; // ebx
  unsigned __int8 *v7; // edx
  int v8; // esi
  unsigned __int8 *v9; // eax
  int v10; // ecx
  HashTable *v11; // esi
  unsigned __int8 **HashTable_field_0x10; // ecx
  int v13; // eax
  int *v14; // esi
  unsigned __int8 *v15; // edi
  int v16; // eax
  int *v17; // esi
  int v18; // esi
  char *v19; // esi
  unsigned int *v21; // ecx
  char *Source; // [esp+10h] [ebp-64h]
  int v23; // [esp+14h] [ebp-60h] BYREF
  Checksummer v24; // [esp+18h] [ebp-5Ch] BYREF
  unsigned int v25; // [esp+28h] [ebp-4Ch] BYREF
  unsigned int v26; // [esp+2Ch] [ebp-48h] BYREF
  unsigned int v27; // [esp+30h] [ebp-44h] BYREF
  char Destination[64]; // [esp+34h] [ebp-40h] BYREF

  Source = a0000; /*0x527ccf*/
  if ( !Destination ) /*0x527cd7*/
    goto LABEL_31; /*0x527cd7*/
  v6 = a3; /*0x527cdd*/
  if ( !a3 ) /*0x527ce5*/
    goto LABEL_31; /*0x527ce5*/
  v7 = a4; /*0x527ceb*/
  if ( !a4 ) /*0x527cf4*/
    goto LABEL_31; /*0x527cf4*/
  if ( a3 != (unsigned __int8 *)this->headNode[0] ) /*0x527cfd*/
  {
    memset(&v24, 0, 12); /*0x527d8d*/
    v15 = (unsigned __int8 *)Checksummer::Add_Buffer(&v24, a3, strlen((const char *)a3)); /*0x527db3*/
    a3 = v15; /*0x527db5*/
    if ( this->INIClass_field_2C ) /*0x527db9*/
    {
      if ( !(unsigned __int8)SortedArray::CheckCache((SortedArray *)&this->__pad_20[8], &a3) ) /*0x527dc7*/
      {
        v16 = SortedArray::BinarySearch((SortedArray *)&this->__pad_20[8], (int *)&a3); /*0x527dd7*/
        if ( !v16 ) /*0x527dde*/
          goto LABEL_23; /*0x527dde*/
        this->unknown38 = v16; /*0x527de0*/
      }
      v23 = (int)v15; /*0x527dea*/
      if ( (unsigned __int8)HashTable::BinarySearch((int *)&this->__pad_20[8], &v23) ) /*0x527dee*/
        v17 = (int *)(this->unknown38 + 4); /*0x527dfa*/
      else
        v17 = (int *)&unk_B7882C; /*0x527dff*/
      v8 = *v17; /*0x527e04*/
      if ( v8 ) /*0x527e08*/
      {
        v7 = a4; /*0x527e0a*/
        this->headNode[1] = v8; /*0x527e11*/
        this->headNode[0] = (int)v6; /*0x527e14*/
        goto LABEL_6; /*0x527e19*/
      }
    }
LABEL_23:
    this->headNode[0] = 0; /*0x527e1e*/
    this->headNode[1] = 0; /*0x527e23*/
    goto LABEL_28; /*0x527e26*/
  }
  v8 = this->headNode[1]; /*0x527d03*/
LABEL_6:
  if ( v8 ) /*0x527d08*/
  {
    v24.buffer = 0; /*0x527d0e*/
    v25 = 0; /*0x527d12*/
    v26 = 0; /*0x527d16*/
    v9 = (unsigned __int8 *)Checksummer::Add_Buffer((Checksummer *)&v24.buffer, v7, strlen((const char *)v7)); /*0x527d2c*/
    v10 = *(_DWORD *)(v8 + 48); /*0x527d31*/
    v11 = (HashTable *)(v8 + 44); /*0x527d34*/
    a4 = v9; /*0x527d39*/
    if ( v10 ) /*0x527d40*/
    {
      HashTable_field_0x10 = (unsigned __int8 **)v11->HashTable_field_0x10; /*0x527d46*/
      if ( !HashTable_field_0x10 || *HashTable_field_0x10 != v9 ) /*0x527d4f*/
      {
        v13 = HashTable::BinarySearchAlt(v11, (int *)&a4); /*0x527d5b*/
        if ( !v13 ) /*0x527d62*/
          goto LABEL_28; /*0x527d62*/
        v11->HashTable_field_0x10 = v13; /*0x527d68*/
      }
      if ( (unsigned __int8)SortedArray::Find((int *)v11->__pad_0, (int *)&a4) ) /*0x527d75*/
        v14 = (int *)(v11->HashTable_field_0x10 + 4); /*0x527d85*/
      else
        v14 = (int *)&unk_B78830; /*0x527e28*/
      v18 = *v14; /*0x527e2d*/
      if ( v18 ) /*0x527e31*/
      {
        v19 = *(char **)(v18 + 16); /*0x527e33*/
        if ( v19 ) /*0x527e38*/
          Source = v19; /*0x527e3a*/
      }
    }
  }
LABEL_28:
  if ( Source ) /*0x527e46*/
  {
    strncpy(Destination, Source, 0x40u); /*0x527e54*/
    Destination[63] = 0; /*0x527e60*/
    String::Trim(Destination); /*0x527e65*/
    if ( strlen(Destination) ) /*0x527e6e*/
    {
      v24.buffer = *a5; /*0x527e85*/
      v25 = a5[1]; /*0x527e8c*/
      v26 = a5[2]; /*0x527e93*/
      v27 = a5[3]; /*0x527ea2*/
      sscanf(Destination, "%d,%d,%d,%d", &v24.buffer, &v25, &v26, &v27); /*0x527ebc*/
      *a2 = v24.buffer; /*0x527ed1*/
      a2[1] = v25; /*0x527ed9*/
      a2[2] = v26; /*0x527ee2*/
      a2[3] = v27; /*0x527ee9*/
      return a2; /*0x527eef*/
    }
  }
LABEL_31:
  v21 = a5; /*0x527ef2*/
  *a2 = *a5; /*0x527f02*/
  a2[1] = v21[1]; /*0x527f07*/
  a2[2] = v21[2]; /*0x527f0d*/
  a2[3] = v21[3]; /*0x527f15*/
  return a2; /*0x527ed7*/
}



// ==== 0x00527F20  INIClass::GetRect  this=INIClass  sig=csp ====
_DWORD *__thiscall INIClass::GetRect(INIClass *this, _DWORD *a2, char **a3, char **a4, int *a5)
{
  unsigned __int8 *v6; // edi
  unsigned __int8 *v7; // ebx
  int v8; // esi
  HashTable *v9; // esi
  int v10; // eax
  int *v11; // esi
  int v12; // edi
  int v13; // eax
  int v14; // esi
  char *v15; // esi
  int v16; // ecx
  int v17; // edx
  int v18; // esi
  int v19; // edi
  int v21; // [esp+0h] [ebp-88h] BYREF
  unsigned __int8 *v22; // [esp+10h] [ebp-78h] BYREF
  int v23; // [esp+14h] [ebp-74h] BYREF
  char *Source; // [esp+18h] [ebp-70h]
  int v25; // [esp+1Ch] [ebp-6Ch] BYREF
  Checksummer v26; // [esp+20h] [ebp-68h] BYREF
  int v27; // [esp+30h] [ebp-58h]
  int v28; // [esp+34h] [ebp-54h]
  int v29; // [esp+38h] [ebp-50h] BYREF
  int v30; // [esp+3Ch] [ebp-4Ch] BYREF
  int v31; // [esp+40h] [ebp-48h] BYREF
  int v32; // [esp+44h] [ebp-44h] BYREF
  char Destination[64]; // [esp+48h] [ebp-40h] BYREF

  v6 = (unsigned __int8 *)String::GetOrEmpty_Alt((String *)a4); /*0x527f3c*/
  v22 = v6; /*0x527f3e*/
  v7 = (unsigned __int8 *)String::GetOrEmpty_Alt((String *)a3); /*0x527f47*/
  Source = a0000; /*0x527f4f*/
  if ( &v21 == (int *)-72 || !v7 || !v6 ) /*0x527f69*/
    goto LABEL_27; /*0x527f69*/
  if ( v7 != (unsigned __int8 *)this->headNode[0] ) /*0x527f72*/
  {
    memset(&v26, 0, 12); /*0x528000*/
    v12 = Checksummer::Add_Buffer(&v26, v7, strlen((const char *)v7)); /*0x528026*/
    v23 = v12; /*0x528028*/
    if ( this->INIClass_field_2C ) /*0x52802c*/
    {
      if ( !(unsigned __int8)SortedArray::CheckCache((SortedArray *)&this->__pad_20[8], &v23) ) /*0x52803a*/
      {
        v13 = SortedArray::BinarySearch((SortedArray *)&this->__pad_20[8], &v23); /*0x52804a*/
        if ( !v13 ) /*0x528051*/
          goto LABEL_19; /*0x528051*/
        this->unknown38 = v13; /*0x528053*/
      }
      v25 = v12; /*0x52805d*/
      v8 = *(_DWORD *)SortedArray::FindValue((SortedArray *)&this->__pad_20[8], &v25); /*0x528066*/
      if ( v8 ) /*0x52806a*/
      {
        v6 = v22; /*0x52806c*/
        this->headNode[1] = v8; /*0x528070*/
        this->headNode[0] = (int)v7; /*0x528073*/
        goto LABEL_6; /*0x528078*/
      }
    }
LABEL_19:
    this->headNode[0] = 0; /*0x52807d*/
    this->headNode[1] = 0; /*0x528082*/
    goto LABEL_24; /*0x528085*/
  }
  v8 = this->headNode[1]; /*0x527f78*/
LABEL_6:
  if ( v8 ) /*0x527f7d*/
  {
    v26.buffer = 0; /*0x527f83*/
    v27 = 0; /*0x527f87*/
    v28 = 0; /*0x527f8b*/
    v9 = (HashTable *)(v8 + 44); /*0x527fa8*/
    v22 = (unsigned __int8 *)Checksummer::Add_Buffer((Checksummer *)&v26.buffer, v22, strlen((const char *)v6)); /*0x527fab*/
    if ( v9->HashTable_field_0x04 ) /*0x527faf*/
    {
      if ( !INIClass::deleteKey((INIClass *)v9, &v22) ) /*0x527fc1*/
      {
        v10 = HashTable::BinarySearchAlt(v9, (int *)&v22); /*0x527fd1*/
        if ( !v10 ) /*0x527fd8*/
          goto LABEL_24; /*0x527fd8*/
        v9->HashTable_field_0x10 = v10; /*0x527fde*/
      }
      if ( (unsigned __int8)SortedArray::Find((int *)v9->__pad_0, (int *)&v22) ) /*0x527fe8*/
        v11 = (int *)(v9->HashTable_field_0x10 + 4); /*0x527ff8*/
      else
        v11 = (int *)&unk_B78830; /*0x528087*/
      v14 = *v11; /*0x52808c*/
      if ( v14 ) /*0x528090*/
      {
        v15 = *(char **)(v14 + 16); /*0x528092*/
        if ( v15 ) /*0x528097*/
          Source = v15; /*0x528099*/
      }
    }
  }
LABEL_24:
  if ( !Source /*0x5280d0*/
    || (strncpy(Destination, Source, 0x40u), Destination[63] = 0, String::Trim(Destination), !strlen(Destination)) )
  {
LABEL_27:
    v16 = *a5; /*0x528138*/
    v17 = a5[1]; /*0x528141*/
    v18 = a5[2]; /*0x528144*/
    v19 = a5[3]; /*0x528147*/
    goto LABEL_28; /*0x528147*/
  }
  v29 = *a5; /*0x5280e7*/
  v30 = a5[1]; /*0x5280ee*/
  v31 = a5[2]; /*0x5280f5*/
  v32 = a5[3]; /*0x528104*/
  sscanf(Destination, "%d,%d,%d,%d", &v29, &v30, &v31, &v32); /*0x52811e*/
  v16 = v29; /*0x528123*/
  v17 = v30; /*0x528127*/
  v18 = v31; /*0x52812b*/
  v19 = v32; /*0x52812f*/
LABEL_28:
  *a2 = v16; /*0x52814a*/
  a2[1] = v17; /*0x528155*/
  a2[2] = v18; /*0x528158*/
  a2[3] = v19; /*0x52815b*/
  return a2; /*0x52815e*/
}



// ==== 0x00528170  INIClass::ReadDouble3  this=INIClass  sig=csp ====
char __thiscall INIClass::ReadDouble3(INIClass *this, unsigned __int8 *Block, char *a3, int a4)
{
  char Buffer[512]; // [esp+4h] [ebp-200h] BYREF

  sprintf(Buffer, "%X", a4); /*0x528188*/
  return INIClass::SetString(this->__pad_0, Block, a3, Buffer); /*0x5281ac*/
}



// ==== 0x005281C0  INIClass::ReadDouble2  this=INIClass  sig=csp ====
char __thiscall INIClass::ReadDouble2(INIClass *this, char **a2, char **a3, int a4)
{
  char *v5; // edi
  unsigned __int8 *v6; // ebx
  char Buffer[512]; // [esp+Ch] [ebp-200h] BYREF

  v5 = String::GetOrEmpty_Alt((String *)a3); /*0x5281de*/
  v6 = (unsigned __int8 *)String::GetOrEmpty_Alt((String *)a2); /*0x5281e5*/
  sprintf(Buffer, "%X", a4); /*0x5281f9*/
  return INIClass::SetString(this->__pad_0, v6, v5, Buffer); /*0x52820f*/
}



// ==== 0x00528220  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_528220(ObjectClass *this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  unsigned __int8 *v4; // ebp
  unsigned __int8 *v6; // edx
  _DWORD *vtable2; // esi
  unsigned __int8 *v8; // eax
  int v9; // ecx
  HashTable *v10; // esi
  unsigned __int8 **HashTable_field_0x10; // ecx
  int v12; // eax
  unsigned __int8 **v13; // ecx
  int v14; // eax
  int *v15; // esi
  unsigned __int8 *v16; // edi
  BombClass *attachedBomb; // eax
  BombClass *v18; // eax
  void **p_vtable1; // esi
  int v21; // esi
  const char *v22; // esi
  _BYTE v23[12]; // [esp+8h] [ebp-Ch] BYREF

  v4 = a2; /*0x528227*/
  if ( a2 ) /*0x52822f*/
  {
    v6 = a3; /*0x528235*/
    if ( a3 ) /*0x52823b*/
    {
      if ( a2 == this->? ) /*0x528248*/
      {
        vtable2 = this->?; /*0x52824e*/
LABEL_5:
        if ( vtable2 ) /*0x528253*/
        {
          memset(v23, 0, sizeof(v23)); /*0x528259*/
          v8 = (unsigned __int8 *)Checksummer::Add_Buffer((Checksummer *)v23, v6, strlen((const char *)v6)); /*0x528277*/
          v9 = vtable2[12]; /*0x52827c*/
          v10 = (HashTable *)(vtable2 + 11); /*0x52827f*/
          a3 = v8; /*0x528284*/
          if ( v9 ) /*0x528288*/
          {
            HashTable_field_0x10 = (unsigned __int8 **)v10->HashTable_field_0x10; /*0x52828e*/
            if ( HashTable_field_0x10 && *HashTable_field_0x10 == v8 ) /*0x528297*/
            {
LABEL_11:
              if ( v10->HashTable_field_0x04 ) /*0x5282b4*/
              {
                v13 = (unsigned __int8 **)v10->HashTable_field_0x10; /*0x5282bf*/
                if ( v13 && *v13 == v8 ) /*0x5282c8*/
                  goto LABEL_16; /*0x5282c8*/
                v14 = HashTable::BinarySearchAlt(v10, (int *)&a3); /*0x5282d1*/
                if ( v14 ) /*0x5282d8*/
                {
                  v10->HashTable_field_0x10 = v14; /*0x5282de*/
LABEL_16:
                  v15 = (int *)(v10->HashTable_field_0x10 + 4); /*0x5282e1*/
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
                  sscanf(v22, "%x", &a4); /*0x5283a8*/
              }
              return a4; /*0x5283a8*/
            }
            v12 = HashTable::BinarySearchAlt(v10, (int *)&a3); /*0x5282a0*/
            if ( v12 ) /*0x5282a7*/
            {
              v10->HashTable_field_0x10 = v12; /*0x5282ad*/
              v8 = a3; /*0x5282b0*/
              goto LABEL_11; /*0x5282b0*/
            }
          }
        }
        return a4; /*0x5283bb*/
      }
      memset(v23, 0, sizeof(v23)); /*0x5282ec*/
      v16 = (unsigned __int8 *)Checksummer::Add_Buffer((Checksummer *)v23, a2, strlen((const char *)a2)); /*0x528312*/
      a2 = v16; /*0x528314*/
      if ( this->fallRate ) /*0x528318*/
      {
        attachedBomb = this->attachedBomb; /*0x52831f*/
        if ( !attachedBomb || attachedBomb->AbstractClass != v16 ) /*0x528328*/
        {
          v18 = (BombClass *)SortedArray::BinarySearch((SortedArray *)&this->owningHouseIndex, (int *)&a2); /*0x528331*/
          if ( !v18 ) /*0x528338*/
            goto LABEL_27; /*0x528338*/
          this->attachedBomb = v18; /*0x52833a*/
        }
        a2 = v16; /*0x528341*/
        if ( (unsigned __int8)HashTable::BinarySearch(&this->owningHouseIndex, (int *)&a2) ) /*0x528348*/
          p_vtable1 = &this->attachedBomb->?; /*0x528354*/
        else
          p_vtable1 = (void **)&unk_B7882C; /*0x528359*/
        vtable2 = *p_vtable1; /*0x52835e*/
        if ( vtable2 ) /*0x528362*/
        {
          v6 = a3; /*0x528364*/
          this->? = vtable2; /*0x528368*/
          this->? = v4; /*0x52836b*/
          goto LABEL_5; /*0x528370*/
        }
      }
LABEL_27:
      this->? = 0; /*0x528375*/
      this->? = 0; /*0x52837c*/
      return a4; /*0x528388*/
    }
  }
  return a4; /*0x528383*/
}



// ==== 0x005283D0  INIClass::ReadDouble_Overwrite  this=INIClass  sig=csp ====
int __thiscall INIClass::ReadDouble_Overwrite(double *this, unsigned __int8 *a2, unsigned __int8 *a3, double a4)
{
  int result; // eax
  unsigned __int8 *v5; // ebp
  unsigned __int8 *v7; // edx
  int v8; // esi
  int v9; // ecx
  int v10; // esi
  _DWORD *v11; // ecx
  _DWORD *v12; // ecx
  int *v13; // esi
  unsigned __int8 *v14; // edi
  unsigned __int8 **v15; // eax
  int v16; // eax
  int *v17; // esi
  int v18; // esi
  const char *v19; // edx
  unsigned int v20; // [esp+8h] [ebp-Ch] BYREF
  int v21; // [esp+Ch] [ebp-8h]
  int v22; // [esp+10h] [ebp-4h]

  result = 0; /*0x5283d3*/
  v5 = a2; /*0x5283d7*/
  if ( *(float *)&a2 == 0.0 ) /*0x5283df*/
    return result; /*0x5283df*/
  v7 = a3; /*0x5283e5*/
  if ( !a3 ) /*0x5283eb*/
    return result; /*0x5283eb*/
  if ( a2 != *((unsigned __int8 **)this + 1) ) /*0x5283f8*/
  {
    v20 = 0; /*0x52849c*/
    v21 = 0; /*0x5284a0*/
    v22 = 0; /*0x5284a4*/
    v14 = (unsigned __int8 *)Checksummer::Add_Buffer(&v20, a2, strlen((const char *)a2)); /*0x5284c2*/
    a2 = v14; /*0x5284c4*/
    if ( this->INIClass_field_2C ) /*0x5284c8*/
    {
      v15 = (unsigned __int8 **)this->unknown38; /*0x5284cf*/
      if ( !v15 || *v15 != v14 ) /*0x5284d8*/
      {
        v16 = SortedArray::BinarySearch((char **)this + 10, (int *)&a2); /*0x5284e1*/
        if ( !v16 ) /*0x5284e8*/
          goto LABEL_27; /*0x5284e8*/
        this->unknown38 = v16; /*0x5284ea*/
      }
      a2 = v14; /*0x5284f1*/
      if ( (unsigned __int8)HashTable::BinarySearch((int *)this + 10, (int *)&a2) ) /*0x5284f8*/
        v17 = (int *)(this->unknown38 + 4); /*0x528504*/
      else
        v17 = (int *)&unk_B7882C; /*0x528509*/
      v8 = *v17; /*0x52850e*/
      if ( v8 ) /*0x528512*/
      {
        v7 = a3; /*0x528514*/
        this->q008 = v8; /*0x528518*/
        this->headNode = v5; /*0x52851b*/
        result = 0; /*0x52851e*/
        goto LABEL_5; /*0x528520*/
      }
    }
LABEL_27:
    this->headNode = 0; /*0x528525*/
    this->q008 = 0; /*0x528530*/
    return 0; /*0x528538*/
  }
  v8 = this->q008; /*0x5283fe*/
LABEL_5:
  if ( !v8 ) /*0x528403*/
    return result; /*0x528403*/
  v20 = 0; /*0x528409*/
  v21 = 0; /*0x52840d*/
  v22 = 0; /*0x528411*/
  result = Checksummer::Add_Buffer(&v20, v7, strlen((const char *)v7)); /*0x528427*/
  v9 = *(_DWORD *)(v8 + 48); /*0x52842c*/
  v10 = v8 + 44; /*0x52842f*/
  a3 = (unsigned __int8 *)result; /*0x528434*/
  if ( !v9 ) /*0x528438*/
    return result; /*0x528438*/
  v11 = *(_DWORD **)(v10 + 16); /*0x52843e*/
  if ( !v11 || *v11 != result ) /*0x528447*/
  {
    result = HashTable::BinarySearchAlt((char **)v10, (int *)&a3); /*0x528450*/
    if ( !result ) /*0x528457*/
      return result; /*0x528457*/
    *(_DWORD *)(v10 + 16) = result; /*0x52845d*/
    result = (int)a3; /*0x528460*/
  }
  if ( *(_DWORD *)(v10 + 4) ) /*0x528464*/
  {
    v12 = *(_DWORD **)(v10 + 16); /*0x52846f*/
    if ( v12 && *v12 == result ) /*0x528478*/
      goto LABEL_16; /*0x528478*/
    result = HashTable::BinarySearchAlt((char **)v10, (int *)&a3); /*0x528481*/
    if ( result ) /*0x528488*/
    {
      *(_DWORD *)(v10 + 16) = result; /*0x52848e*/
LABEL_16:
      v13 = (int *)(*(_DWORD *)(v10 + 16) + 4); /*0x528491*/
      goto LABEL_29; /*0x528497*/
    }
  }
  v13 = (int *)&unk_B78830; /*0x52853b*/
LABEL_29:
  v18 = *v13; /*0x528540*/
  if ( v18 ) /*0x528544*/
  {
    result = *(_DWORD *)(v18 + 16); /*0x528546*/
    if ( result ) /*0x52854b*/
    {
      sscanf((const char *const)result, "%f", &a2); /*0x528558*/
      v19 = *(const char **)(v18 + 16); /*0x528561*/
      a4 = *(float *)&a2; /*0x528569*/
      return (int)strchr(v19, 9509); /*0x52856e*/
    }
  }
  return result; /*0x528533*/
}



// ==== 0x005285B0  INIClass::SetDouble  this=INIClass  sig=csp ====
int __thiscall INIClass::SetDouble(char *this, unsigned __int8 *Block, char *a3, double a4)
{
  int result; // eax
  char Buffer[512]; // [esp+Ch] [ebp-200h] BYREF

  sprintf(Buffer, "%f", a4); /*0x5285cd*/
  LOBYTE(result) = INIClass::SetString(this, Block, a3, Buffer); /*0x5285ec*/
  return result; /*0x5285f8*/
}



// ==== 0x00528600  INIClass::GetString2  this=INIClass  sig=csp ====
char __thiscall INIClass::GetString2(INIClass *this, char **a2, char **a3, double a4)
{
  char *v5; // edi
  unsigned __int8 *v6; // ebx
  char Buffer[512]; // [esp+14h] [ebp-200h] BYREF

  v5 = String::GetOrEmpty_Alt((String *)a3); /*0x52861e*/
  v6 = (unsigned __int8 *)String::GetOrEmpty_Alt((String *)a2); /*0x52862f*/
  sprintf(Buffer, "%f", a4); /*0x52863e*/
  return INIClass::SetString(this->__pad_0, v6, v5, Buffer); /*0x528654*/
}



// ==== 0x00528660  INIClass::SetString  this=INIClass  sig=csp ====
char __thiscall INIClass_SetString(char *this, unsigned __int8 *Block, char *a3, char *Source)
{
  int v5; // esi
  char *v6; // ebp
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  char *v9; // edi
  unsigned __int8 *v10; // edx
  int v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // ebp
  int *v15; // esi
  _DWORD *v16; // eax
  int v17; // ecx
  int v18; // edx
  unsigned int v19; // kr10_4
  unsigned int *v20; // eax
  int v21; // eax
  int v22; // eax
  int i; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // edi
  int v27; // eax
  char *v28; // eax
  _DWORD *v29; // eax
  int v30; // esi
  unsigned int v32; // kr18_4
  unsigned int *v33; // eax
  char *v34; // [esp-18h] [ebp-60h]
  char *v35; // [esp-Ch] [ebp-54h]
  unsigned __int8 *v36; // [esp-8h] [ebp-50h]
  int v37; // [esp-8h] [ebp-50h]
  unsigned __int8 *v38; // [esp-8h] [ebp-50h]
  int v39; // [esp-4h] [ebp-4Ch]
  _DWORD *v40; // [esp+10h] [ebp-38h] BYREF
  _DWORD *v41; // [esp+14h] [ebp-34h]
  int v42; // [esp+18h] [ebp-30h] BYREF
  int v43; // [esp+1Ch] [ebp-2Ch]
  int v44; // [esp+20h] [ebp-28h]
  char *v45; // [esp+24h] [ebp-24h]
  int v46; // [esp+28h] [ebp-20h] BYREF
  int v47; // [esp+2Ch] [ebp-1Ch] BYREF
  unsigned int v48[3]; // [esp+30h] [ebp-18h] BYREF
  unsigned int v49; // [esp+3Ch] [ebp-Ch] BYREF
  int v50; // [esp+40h] [ebp-8h]
  int v51; // [esp+44h] [ebp-4h]
  void *Blocka; // [esp+4Ch] [ebp+4h]

  v45 = this; /*0x528671*/
  if ( !Block || !a3 ) /*0x52867f*/
    return 0; /*0x52867f*/
  memset(v48, 0, sizeof(v48)); /*0x52868c*/
  v5 = Checksummer::Add_Buffer(v48, Block, strlen((const char *)Block)); /*0x5286a8*/
  v6 = this + 40; /*0x5286aa*/
  v46 = v5; /*0x5286b4*/
  if ( (unsigned __int8)HashTable::BinarySearch(&v46) ) /*0x5286b8*/
  {
    v47 = v5; /*0x5286c5*/
    v7 = *(_DWORD **)SortedArray::FindValue(&v47); /*0x5286d1*/
  }
  else
  {
    v7 = 0; /*0x5286d5*/
  }
  v41 = v7; /*0x5286d9*/
  if ( !v7 ) /*0x5286dd*/
  {
    v8 = __2_YAPAXI_Z(0x44u); /*0x5286ea*/
    if ( !v8 ) /*0x5286f1*/
      return 0; /*0x5289d1*/
    v9 = _strdup((const char *)Block); /*0x528706*/
    GenericNode::Constructor(v8); /*0x528708*/
    *v8 = &Node<INIClass::INISection *>::`vftable'; /*0x528710*/
    v8[3] = v9; /*0x528716*/
    INIClass::sectionExists(v8 + 4); /*0x528719*/
    INIClass::getValue(v8 + 11); /*0x528721*/
    v8[16] = 0; /*0x52872a*/
    *v8 = &INIClass::INISection::`vftable'; /*0x52872d*/
    v41 = v8; /*0x528737*/
    LinkedList::Prepend(v8); /*0x52873b*/
    v10 = (unsigned __int8 *)v8[3]; /*0x528740*/
    v49 = 0; /*0x52874a*/
    v50 = 0; /*0x52874e*/
    v51 = 0; /*0x528752*/
    v11 = Checksummer::Add_Buffer(&v49, v10, strlen((const char *)v10)); /*0x528769*/
    v12 = *((_DWORD *)v6 + 2); /*0x52876b*/
    if ( *((_DWORD *)v6 + 1) + 1 <= v12 ) /*0x528771*/
      goto LABEL_12; /*0x528771*/
    if ( !v12 ) /*0x528775*/
      v12 = 10; /*0x528777*/
    if ( (unsigned __int8)INIClass::mergeSection(v12) ) /*0x52877f*/
    {
LABEL_12:
      *(_DWORD *)(*(_DWORD *)v6 + 8 * *((_DWORD *)v6 + 1)) = v11; /*0x52878e*/
      *(_DWORD *)(*(_DWORD *)v6 + 8 * *((_DWORD *)v6 + 1) + 4) = v8; /*0x528797*/
      v13 = *((_DWORD *)v6 + 1) + 1; /*0x52879e*/
      v6[12] = 0; /*0x52879f*/
      *((_DWORD *)v6 + 1) = v13; /*0x5287a2*/
    }
  }
  v14 = 0; /*0x5287b0*/
  Blocka = 0; /*0x5287b2*/
  v45 = 0; /*0x5287bb*/
  v44 = 0; /*0x5287c5*/
  v43 = 0; /*0x5287c9*/
  v49 = 0; /*0x5287cd*/
  v50 = 0; /*0x5287d1*/
  v51 = 0; /*0x5287d5*/
  v42 = Checksummer::Add_Buffer(&v49, (unsigned __int8 *)a3, strlen(a3)); /*0x5287de*/
  v15 = v41 + 11; /*0x5287ea*/
  if ( (unsigned __int8)SortedArray::Find(&v42) ) /*0x5287f0*/
    v16 = *(_DWORD **)SortedArray::BinarySearch2(&v42); /*0x528805*/
  else
    v16 = 0; /*0x528809*/
  v40 = v16; /*0x52880d*/
  if ( v16 ) /*0x528811*/
  {
    v14 = v16[5]; /*0x52881d*/
    Blocka = (void *)v16[6]; /*0x528820*/
    v17 = v16[7]; /*0x528824*/
    v45 = (char *)v16[9]; /*0x528827*/
    v18 = v16[8]; /*0x52882b*/
    v16[5] = 0; /*0x52882e*/
    v44 = v17; /*0x528835*/
    v43 = v18; /*0x528839*/
    v40[6] = 0; /*0x52883d*/
    v19 = strlen((const char *)v40[3]) + 1; /*0x52884e*/
    v36 = (unsigned __int8 *)v40[3]; /*0x528854*/
    v20 = (unsigned int *)KeyValuePair::Init(0); /*0x52885a*/
    v42 = Checksummer::Add_Buffer(v20, v36, v19 - 1); /*0x52886d*/
    v21 = HashTable::BinarySearchAlt(&v42); /*0x528871*/
    if ( v21 ) /*0x528878*/
    {
      v22 = (v21 - *v15) >> 3; /*0x52887c*/
      if ( v22 != -1 ) /*0x528882*/
      {
        for ( i = v22 + 1; i < v15[1]; *(_DWORD *)(v25 - 4) = *(_DWORD *)(v25 + 4) ) /*0x52888c*/
        {
          v24 = *(_DWORD *)(*v15 + 8 * i); /*0x528890*/
          v25 = *v15 + 8 * i++; /*0x528893*/
          *(_DWORD *)(v25 - 8) = v24; /*0x528897*/
        }
        v26 = *v15; /*0x5288aa*/
        v27 = v15[1] - 1; /*0x5288ac*/
        v15[1] = v27; /*0x5288af*/
        *(_DWORD *)(v26 + 8 * v27) = 0; /*0x5288b4*/
        *(_DWORD *)(v26 + 8 * v27 + 4) = 0; /*0x5288b7*/
        v15[4] = 0; /*0x5288bb*/
      }
    }
    if ( v40 ) /*0x5288c4*/
      (*(void (__thiscall **)(_DWORD *, int))*v40)(v40, 1); /*0x5288ca*/
  }
  if ( !Source || !strlen(Source) ) /*0x5288dd*/
    return 1; /*0x5288e2*/
  if ( __2_YAPAXI_Z(0x28u) ) /*0x5288ea*/
  {
    v39 = v43; /*0x528904*/
    v37 = v44; /*0x528909*/
    v35 = v45; /*0x52890e*/
    v34 = _strdup(Source); /*0x52891a*/
    v28 = _strdup(a3); /*0x528920*/
    v29 = (_DWORD *)INIClass::findSection(v28, v34, v14, Blocka, v35, v37, v39); /*0x52892b*/
    v40 = v29; /*0x528932*/
    if ( !v29 ) /*0x528936*/
      goto LABEL_28; /*0x528936*/
    LinkedList::Prepend(v29); /*0x528982*/
    v32 = strlen((const char *)v40[3]) + 1; /*0x528995*/
    v38 = (unsigned __int8 *)v40[3]; /*0x52899b*/
    v33 = (unsigned int *)KeyValuePair::Init(0); /*0x5289a1*/
    a3 = (char *)Checksummer::Add_Buffer(v33, v38, v32 - 1); /*0x5289ad*/
    INIClass::setValue(&a3, &v40); /*0x5289bd*/
    return 1; /*0x5289cb*/
  }
  v40 = 0; /*0x528974*/
LABEL_28:
  free(Blocka); /*0x528938*/
  if ( !v14 ) /*0x528947*/
    return 0; /*0x528947*/
  do /*0x528966*/
  {
    free(*(void **)v14); /*0x528951*/
    v30 = *(_DWORD *)(v14 + 4); /*0x528956*/
    __3_YAXPAX_Z((void *)v14); /*0x52895a*/
    v14 = v30; /*0x528964*/
  }
  while ( v30 ); /*0x528966*/
  return 0; /*0x528968*/
}



// ==== 0x005289E0  INIClass::SetStringOrEmpty  this=ObjectClass  sig=csp ====
char __thiscall INIClass_SetStringOrEmpty(char *this, char **a2, char **a3, char **a4)
{
  unsigned __int8 *v5; // eax
  char *v7; // [esp-8h] [ebp-Ch]
  char *v8; // [esp-4h] [ebp-8h]

  v8 = String::GetOrEmpty_Alt(a4); /*0x5289f0*/
  v7 = String::GetOrEmpty_Alt(a3); /*0x5289fa*/
  v5 = (unsigned __int8 *)String::GetOrEmpty_Alt(a2); /*0x5289fb*/
  return INIClass::SetString(this, v5, v7, v8); /*0x528a08*/
}



// ==== 0x00528A10  INIClass::GetString  this=INIClass  sig=csp ====
int __thiscall INIClass::GetString(
        INIClass *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        char *Source,
        char *Destination,
        int Count)
{
  char *v6; // edi
  unsigned __int8 *v8; // ebx
  unsigned __int8 *v9; // edx
  int v10; // esi
  unsigned __int8 *v11; // eax
  int v12; // ecx
  HashTable *v13; // esi
  unsigned __int8 **HashTable_field_0x10; // ecx
  int v15; // eax
  unsigned __int8 **v16; // ecx
  int v17; // eax
  int *v18; // esi
  unsigned __int8 *v19; // edi
  unsigned __int8 **unknown38; // eax
  int v21; // eax
  int *v22; // esi
  char *v23; // ecx
  int v24; // esi
  _BYTE v26[12]; // [esp+Ch] [ebp-Ch] BYREF

  v6 = Destination; /*0x528a18*/
  if ( !Destination ) /*0x528a20*/
    return 0; /*0x528a20*/
  if ( Count < 2 ) /*0x528a2b*/
    return 0; /*0x528a2b*/
  v8 = a2; /*0x528a31*/
  if ( !a2 ) /*0x528a37*/
    return 0; /*0x528a37*/
  v9 = a3; /*0x528a3d*/
  if ( !a3 ) /*0x528a43*/
    return 0; /*0x528a43*/
  if ( a2 == (unsigned __int8 *)this->headNode[0] ) /*0x528a4f*/
  {
    v10 = this->headNode[1]; /*0x528a55*/
    goto LABEL_7; /*0x528a55*/
  }
  memset(v26, 0, sizeof(v26)); /*0x528af3*/
  v19 = (unsigned __int8 *)Checksummer::Add_Buffer((Checksummer *)v26, a2, strlen((const char *)a2)); /*0x528b19*/
  a2 = v19; /*0x528b1b*/
  if ( !this->INIClass_field_2C ) /*0x528b1f*/
    goto LABEL_29; /*0x528b1f*/
  unknown38 = (unsigned __int8 **)this->unknown38; /*0x528b26*/
  if ( unknown38 && *unknown38 == v19 ) /*0x528b2f*/
    goto LABEL_24; /*0x528b2f*/
  v21 = SortedArray::BinarySearch((SortedArray *)&this->__pad_20[8], (int *)&a2); /*0x528b38*/
  if ( !v21 ) /*0x528b3f*/
  {
LABEL_29:
    v23 = Source; /*0x528b80*/
    v6 = Destination; /*0x528b84*/
    this->headNode[0] = 0; /*0x528b8a*/
    this->headNode[1] = 0; /*0x528b8d*/
    goto LABEL_36; /*0x528b90*/
  }
  this->unknown38 = v21; /*0x528b41*/
LABEL_24:
  a2 = v19; /*0x528b44*/
  if ( (unsigned __int8)HashTable::BinarySearch((int *)&this->__pad_20[8], (int *)&a2) ) /*0x528b4f*/
    v22 = (int *)(this->unknown38 + 4); /*0x528b5b*/
  else
    v22 = (int *)&unk_B7882C; /*0x528b60*/
  v10 = *v22; /*0x528b65*/
  if ( !v10 ) /*0x528b69*/
    goto LABEL_29; /*0x528b69*/
  v9 = a3; /*0x528b6b*/
  v6 = Destination; /*0x528b6f*/
  this->headNode[1] = v10; /*0x528b73*/
  this->headNode[0] = (int)v8; /*0x528b76*/
LABEL_7:
  if ( v10 ) /*0x528a5a*/
  {
    memset(v26, 0, sizeof(v26)); /*0x528a60*/
    v11 = (unsigned __int8 *)Checksummer::Add_Buffer((Checksummer *)v26, v9, strlen((const char *)v9)); /*0x528a7e*/
    v12 = *(_DWORD *)(v10 + 48); /*0x528a83*/
    v13 = (HashTable *)(v10 + 44); /*0x528a86*/
    a3 = v11; /*0x528a8b*/
    if ( v12 ) /*0x528a8f*/
    {
      HashTable_field_0x10 = (unsigned __int8 **)v13->HashTable_field_0x10; /*0x528a95*/
      if ( HashTable_field_0x10 && *HashTable_field_0x10 == v11 ) /*0x528a9e*/
      {
LABEL_13:
        if ( v13->HashTable_field_0x04 ) /*0x528abb*/
        {
          v16 = (unsigned __int8 **)v13->HashTable_field_0x10; /*0x528ac6*/
          if ( v16 && *v16 == v11 ) /*0x528acf*/
            goto LABEL_18; /*0x528acf*/
          v17 = HashTable::BinarySearchAlt(v13, (int *)&a3); /*0x528ad8*/
          if ( v17 ) /*0x528adf*/
          {
            v13->HashTable_field_0x10 = v17; /*0x528ae5*/
LABEL_18:
            v18 = (int *)(v13->HashTable_field_0x10 + 4); /*0x528ae8*/
LABEL_31:
            v24 = *v18; /*0x528b97*/
            if ( v24 ) /*0x528b9b*/
            {
              v23 = *(char **)(v24 + 16); /*0x528b9d*/
              if ( v23 ) /*0x528ba2*/
              {
                v6 = Destination; /*0x528ba4*/
                goto LABEL_36; /*0x528baa*/
              }
            }
            goto LABEL_34; /*0x528ba2*/
          }
        }
        v18 = (int *)&unk_B78830; /*0x528b92*/
        goto LABEL_31; /*0x528b92*/
      }
      v15 = HashTable::BinarySearchAlt(v13, (int *)&a3); /*0x528aa7*/
      if ( v15 ) /*0x528aae*/
      {
        v13->HashTable_field_0x10 = v15; /*0x528ab4*/
        v11 = a3; /*0x528ab7*/
        goto LABEL_13; /*0x528ab7*/
      }
    }
LABEL_34:
    v6 = Destination; /*0x528bac*/
  }
  v23 = Source; /*0x528bb2*/
LABEL_36:
  if ( !v23 ) /*0x528bb9*/
  {
    *v6 = 0; /*0x528bbb*/
    return 0; /*0x528bc6*/
  }
  strncpy(v6, v23, Count); /*0x528bd0*/
  v6[Count - 1] = 0; /*0x528bde*/
  String::Trim(v6); /*0x528be3*/
  return strlen(v6); /*0x528bbe*/
}



// ==== 0x00528C00  INIClass::ReadString  this=INIClass  sig=csp ====
int __thiscall INIClass::ReadString(INIClass *this, char **a2, char **a3, char **a4, int a5)
{
  unsigned __int8 *v6; // edi
  unsigned __int8 *v7; // ebx
  int v8; // esi
  unsigned __int8 *v9; // eax
  int v10; // ecx
  HashTable *v11; // esi
  unsigned __int8 **HashTable_field_0x10; // ecx
  int v13; // eax
  int *v14; // esi
  int v15; // edi
  int v16; // eax
  int *v17; // esi
  int v18; // esi
  char *v19; // esi
  int v20; // esi
  int v22; // [esp+0h] [ebp-428h] BYREF
  unsigned __int8 *v23; // [esp+10h] [ebp-418h] BYREF
  int v24; // [esp+14h] [ebp-414h] BYREF
  char *Source; // [esp+18h] [ebp-410h]
  Checksummer v26; // [esp+1Ch] [ebp-40Ch] BYREF
  char v27; // [esp+426h] [ebp-2h]

  Source = String::GetOrEmpty_Alt((String *)a4); /*0x528c1f*/
  v6 = (unsigned __int8 *)String::GetOrEmpty_Alt((String *)a3); /*0x528c2f*/
  v23 = v6; /*0x528c31*/
  v7 = (unsigned __int8 *)String::GetOrEmpty_Alt((String *)a2); /*0x528c3a*/
  if ( &v22 == (int *)-40 || !v7 || !v6 ) /*0x528c54*/
    goto LABEL_30; /*0x528c54*/
  if ( v7 != (unsigned __int8 *)this->headNode[0] ) /*0x528c5d*/
  {
    memset(&v26, 0, 12); /*0x528ce6*/
    v15 = Checksummer::Add_Buffer(&v26, v7, strlen((const char *)v7)); /*0x528d0c*/
    v24 = v15; /*0x528d0e*/
    if ( this->INIClass_field_2C ) /*0x528d12*/
    {
      if ( !(unsigned __int8)SortedArray::CheckCache((SortedArray *)&this->__pad_20[8], &v24) ) /*0x528d20*/
      {
        v16 = SortedArray::BinarySearch((SortedArray *)&this->__pad_20[8], &v24); /*0x528d30*/
        if ( !v16 ) /*0x528d37*/
          goto LABEL_23; /*0x528d37*/
        this->unknown38 = v16; /*0x528d39*/
      }
      v24 = v15; /*0x528d43*/
      if ( (unsigned __int8)HashTable::BinarySearch((int *)&this->__pad_20[8], &v24) ) /*0x528d47*/
        v17 = (int *)(this->unknown38 + 4); /*0x528d53*/
      else
        v17 = (int *)&unk_B7882C; /*0x528d58*/
      v8 = *v17; /*0x528d5d*/
      if ( v8 ) /*0x528d61*/
      {
        v6 = v23; /*0x528d63*/
        this->headNode[1] = v8; /*0x528d67*/
        this->headNode[0] = (int)v7; /*0x528d6a*/
        goto LABEL_6; /*0x528d6d*/
      }
    }
LABEL_23:
    this->headNode[0] = 0; /*0x528d72*/
    this->headNode[1] = 0; /*0x528d77*/
    goto LABEL_28; /*0x528d7a*/
  }
  v8 = this->headNode[1]; /*0x528c63*/
LABEL_6:
  if ( v8 ) /*0x528c6a*/
  {
    memset(&v26, 0, 12); /*0x528c73*/
    v9 = (unsigned __int8 *)Checksummer::Add_Buffer(&v26, v23, strlen((const char *)v6)); /*0x528c8e*/
    v10 = *(_DWORD *)(v8 + 48); /*0x528c93*/
    v11 = (HashTable *)(v8 + 44); /*0x528c96*/
    v23 = v9; /*0x528c9b*/
    if ( v10 ) /*0x528c9f*/
    {
      HashTable_field_0x10 = (unsigned __int8 **)v11->HashTable_field_0x10; /*0x528ca5*/
      if ( HashTable_field_0x10 && *HashTable_field_0x10 == v9 ) /*0x528cae*/
      {
LABEL_12:
        if ( (unsigned __int8)SortedArray::Find((int *)v11->__pad_0, (int *)&v23) ) /*0x528cce*/
          v14 = (int *)(v11->HashTable_field_0x10 + 4); /*0x528cde*/
        else
          v14 = (int *)&unk_B78830; /*0x528d7c*/
        v18 = *v14; /*0x528d81*/
        if ( v18 ) /*0x528d85*/
        {
          v19 = *(char **)(v18 + 16); /*0x528d87*/
          if ( v19 ) /*0x528d8c*/
            Source = v19; /*0x528d8e*/
        }
        goto LABEL_28; /*0x528d8e*/
      }
      v13 = HashTable::BinarySearchAlt(v11, (int *)&v23); /*0x528cb7*/
      if ( v13 ) /*0x528cbe*/
      {
        v11->HashTable_field_0x10 = v13; /*0x528cc4*/
        goto LABEL_12; /*0x528cc4*/
      }
    }
  }
LABEL_28:
  if ( Source ) /*0x528d98*/
  {
    strncpy((char *)&v26.buffer, Source, 0x3FFu); /*0x528dcb*/
    v27 = 0; /*0x528dd7*/
    String::Trim((char *)&v26.buffer); /*0x528ddf*/
    v20 = strlen((const char *)&v26.buffer); /*0x528df2*/
    goto LABEL_31; /*0x528df4*/
  }
  LOBYTE(v26.buffer) = 0; /*0x528d9a*/
LABEL_30:
  v20 = 0; /*0x528d9e*/
LABEL_31:
  String::Assign_Alt((String *)a5, (const char *)&v26.buffer); /*0x528da0*/
  return v20; /*0x528db3*/
}



// ==== 0x00528E00  INIClass::SetWideAsHex  this=INIClass  sig=csp ====
int __thiscall INIClass::SetWideAsHex(char *this, unsigned __int8 *Block, char *a3, wchar_t *String)
{
  int result; // eax
  char v5; // bl
  int v6; // eax
  char *v7; // ebp
  wchar_t v8; // ax
  char *i; // ebx

  v5 = 0; /*0x528e08*/
  if ( String ) /*0x528e10*/
  {
    v6 = wcslen(String); /*0x528e17*/
    result = (int)__2_YAPAXI_Z(8 * v6 + 1); /*0x528e21*/
    v7 = (char *)result; /*0x528e26*/
    if ( result ) /*0x528e2d*/
    {
      *(_BYTE *)result = 0; /*0x528e33*/
      v8 = *String; /*0x528e37*/
      for ( i = v7; *String; i = &v7[strlen(v7)] ) /*0x528e37*/
      {
        _itoa(v8, i, 16); /*0x528e4b*/
        strcat(i, Str); /*0x528e74*/
        v8 = *++String; /*0x528e94*/
      }
      v5 = INIClass::SetString(this, Block, a3, v7); /*0x528eb4*/
      __3_YAXPAX_Z(v7); /*0x528eb6*/
    }
  }
  LOBYTE(result) = v5; /*0x528ebf*/
  return result; /*0x528ebe*/
}



// ==== 0x00528F00  INIClass::ParseValue_Wide  this=INIClass  sig=csp ====
int __thiscall INIClass::ParseValue_Wide(
        INIClass *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        wchar_t *Source,
        wchar_t *String,
        size_t Count)
{
  unsigned __int8 *v7; // edx
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  HashTable *v11; // esi
  _DWORD *HashTable_field_0x10; // ecx
  int v13; // eax
  int *v14; // esi
  int v15; // edi
  int v16; // eax
  int *v17; // esi
  int v18; // esi
  const char *v19; // eax
  char *v21; // eax
  wchar_t *v22; // esi
  size_t v23; // edi
  int v24; // [esp+10h] [ebp-5014h] BYREF
  int v25; // [esp+14h] [ebp-5010h] BYREF
  Checksummer v26; // [esp+18h] [ebp-500Ch] BYREF
  char v27; // [esp+5023h] [ebp-1h]

  if ( &v26 == (Checksummer *)-12 ) /*0x528f16*/
    goto LABEL_29; /*0x528f16*/
  if ( !a2 ) /*0x528f27*/
    goto LABEL_29; /*0x528f27*/
  v7 = a3; /*0x528f2d*/
  if ( !a3 ) /*0x528f36*/
    goto LABEL_29; /*0x528f36*/
  if ( a2 == (unsigned __int8 *)this->headNode[0] ) /*0x528f3f*/
  {
    v8 = this->headNode[1]; /*0x528f45*/
    goto LABEL_6; /*0x528f45*/
  }
  memset(&v26, 0, 12); /*0x528fc6*/
  v15 = Checksummer::Add_Buffer(&v26, a2, strlen((const char *)a2)); /*0x528fec*/
  v24 = v15; /*0x528fee*/
  if ( !this->INIClass_field_2C ) /*0x528ff2*/
    goto LABEL_23; /*0x528ff2*/
  if ( (unsigned __int8)SortedArray::CheckCache((SortedArray *)&this->__pad_20[8], &v24) ) /*0x529000*/
    goto LABEL_18; /*0x529007*/
  v16 = SortedArray::BinarySearch((SortedArray *)&this->__pad_20[8], &v24); /*0x529010*/
  if ( !v16 ) /*0x529017*/
  {
LABEL_23:
    this->headNode[0] = 0; /*0x529057*/
    this->headNode[1] = 0; /*0x52905c*/
    LOBYTE(v26.buffer) = 0; /*0x52905f*/
LABEL_29:
    wcsncpy(String, Source, Count); /*0x5290b6*/
    return wcslen(String); /*0x5290e6*/
  }
  this->unknown38 = v16; /*0x529019*/
LABEL_18:
  v25 = v15; /*0x52901c*/
  if ( (unsigned __int8)HashTable::BinarySearch((int *)&this->__pad_20[8], &v25) ) /*0x529027*/
    v17 = (int *)(this->unknown38 + 4); /*0x529033*/
  else
    v17 = (int *)&unk_B7882C; /*0x529038*/
  v8 = *v17; /*0x52903d*/
  if ( !v8 ) /*0x529041*/
    goto LABEL_23; /*0x529041*/
  v7 = a3; /*0x529043*/
  this->headNode[1] = v8; /*0x52904a*/
  this->headNode[0] = (int)a2; /*0x52904d*/
LABEL_6:
  if ( !v8 ) /*0x528f4a*/
    goto LABEL_27; /*0x528f4a*/
  memset(&v26, 0, 12); /*0x528f50*/
  v9 = Checksummer::Add_Buffer(&v26, v7, strlen((const char *)v7)); /*0x528f6e*/
  v10 = *(_DWORD *)(v8 + 48); /*0x528f73*/
  v11 = (HashTable *)(v8 + 44); /*0x528f76*/
  v24 = v9; /*0x528f7b*/
  if ( !v10 ) /*0x528f7f*/
    goto LABEL_27; /*0x528f7f*/
  HashTable_field_0x10 = (_DWORD *)v11->HashTable_field_0x10; /*0x528f85*/
  if ( HashTable_field_0x10 && *HashTable_field_0x10 == v9 ) /*0x528f8e*/
    goto LABEL_12; /*0x528f8e*/
  v13 = HashTable::BinarySearchAlt(v11, &v24); /*0x528f97*/
  if ( !v13 ) /*0x528f9e*/
  {
LABEL_27:
    LOBYTE(v26.buffer) = 0; /*0x529079*/
    goto LABEL_29; /*0x52907e*/
  }
  v11->HashTable_field_0x10 = v13; /*0x528fa4*/
LABEL_12:
  if ( (unsigned __int8)SortedArray::Find((int *)v11->__pad_0, &v24) ) /*0x528fae*/
    v14 = (int *)(v11->HashTable_field_0x10 + 4); /*0x528fbe*/
  else
    v14 = (int *)&unk_B78830; /*0x529065*/
  v18 = *v14; /*0x52906a*/
  if ( !v18 ) /*0x52906e*/
    goto LABEL_27; /*0x52906e*/
  v19 = *(const char **)(v18 + 16); /*0x529070*/
  if ( !v19 ) /*0x529075*/
    goto LABEL_27; /*0x529075*/
  strncpy((char *)&v26.buffer, v19, 0x5000u); /*0x52908b*/
  v27 = 0; /*0x529097*/
  String::Trim((char *)&v26.buffer); /*0x52909f*/
  if ( !strlen((const char *)&v26.buffer) ) /*0x5290a8*/
    goto LABEL_29; /*0x5290b4*/
  v21 = strtok((char *)&v26.buffer, Str); /*0x5290f3*/
  v22 = String; /*0x529104*/
  if ( v21 ) /*0x529106*/
  {
    v23 = Count; /*0x529108*/
    do /*0x529140*/
    {
      if ( !v23 ) /*0x529111*/
        break; /*0x529111*/
      sscanf(v21, "%x", &v25); /*0x52911e*/
      *v22++ = v25; /*0x52912d*/
      v21 = strtok(0, Str); /*0x529135*/
      --v23; /*0x52913d*/
    }
    while ( v21 ); /*0x529140*/
  }
  *v22 = 0; /*0x529143*/
  return wcslen(String); /*0x5290dc*/
}



// ==== 0x00529160  INIClass::GetStringEx  this=INIClass  sig=csp ====
int __thiscall INIClass::GetStringEx(int this, unsigned __int8 *a2, unsigned __int8 *a3, wchar_t *String, size_t Count)
{
  unsigned __int8 *v6; // edx
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // esi
  _DWORD *v11; // ecx
  int v12; // eax
  int *v13; // esi
  int v14; // edi
  int v15; // eax
  int *v16; // esi
  int v17; // esi
  const char *v18; // eax
  wchar_t *StringCSF; // eax
  int v21; // [esp+10h] [ebp-414h] BYREF
  unsigned int v22; // [esp+14h] [ebp-410h] BYREF
  int v23; // [esp+18h] [ebp-40Ch]
  int v24; // [esp+1Ch] [ebp-408h]
  int v25; // [esp+20h] [ebp-404h] BYREF
  char Destination[1024]; // [esp+24h] [ebp-400h] BYREF

  if ( Destination ) /*0x529172*/
  {
    if ( a2 ) /*0x529183*/
    {
      v6 = a3; /*0x529189*/
      if ( a3 ) /*0x529192*/
      {
        if ( a2 == *(unsigned __int8 **)(this + 4) ) /*0x52919b*/
        {
          v7 = *(_DWORD *)(this + 8); /*0x5291a1*/
LABEL_6:
          if ( v7 ) /*0x5291a6*/
          {
            v22 = 0; /*0x5291ac*/
            v23 = 0; /*0x5291b0*/
            v24 = 0; /*0x5291b4*/
            v8 = Checksummer::Add_Buffer(&v22, v6, strlen((const char *)v6)); /*0x5291ca*/
            v9 = *(_DWORD *)(v7 + 48); /*0x5291cf*/
            v10 = v7 + 44; /*0x5291d2*/
            v21 = v8; /*0x5291d7*/
            if ( v9 ) /*0x5291db*/
            {
              v11 = *(_DWORD **)(v10 + 16); /*0x5291e1*/
              if ( v11 && *v11 == v8 ) /*0x5291ea*/
                goto LABEL_12; /*0x5291ea*/
              v12 = HashTable::BinarySearchAlt((char **)v10, &v21); /*0x5291f3*/
              if ( v12 ) /*0x5291fa*/
              {
                *(_DWORD *)(v10 + 16) = v12; /*0x529200*/
LABEL_12:
                if ( (unsigned __int8)SortedArray::Find(v10, &v21) ) /*0x52920a*/
                  v13 = (int *)(*(_DWORD *)(v10 + 16) + 4); /*0x52921a*/
                else
                  v13 = (int *)&unk_B78830; /*0x5292c4*/
                v17 = *v13; /*0x5292c9*/
                if ( v17 ) /*0x5292cd*/
                {
                  v18 = *(const char **)(v17 + 16); /*0x5292cf*/
                  if ( v18 ) /*0x5292d4*/
                  {
                    strncpy(Destination, v18, 0x400u); /*0x5292ec*/
                    Destination[1023] = 0; /*0x5292f8*/
                    String::Trim(Destination); /*0x529300*/
                    goto LABEL_29; /*0x529300*/
                  }
                }
              }
            }
          }
          Destination[0] = 0; /*0x5292da*/
          goto LABEL_29; /*0x5292df*/
        }
        v22 = 0; /*0x529222*/
        v23 = 0; /*0x529226*/
        v24 = 0; /*0x52922a*/
        v14 = Checksummer::Add_Buffer(&v22, a2, strlen((const char *)a2)); /*0x529248*/
        v21 = v14; /*0x52924a*/
        if ( !*(_DWORD *)(this + 44) ) /*0x529253*/
          goto LABEL_23; /*0x529253*/
        if ( !(unsigned __int8)SortedArray::CheckCache((_DWORD *)(this + 40), &v21) ) /*0x52925c*/
        {
          v15 = SortedArray::BinarySearch((char **)(this + 40), &v21); /*0x52926c*/
          if ( !v15 ) /*0x529273*/
          {
LABEL_23:
            *(_DWORD *)(this + 4) = 0; /*0x5292b3*/
            *(_DWORD *)(this + 8) = 0; /*0x5292ba*/
            Destination[0] = 0; /*0x5292bd*/
            goto LABEL_29; /*0x5292c2*/
          }
          *(_DWORD *)(this + 56) = v15; /*0x529275*/
        }
        v25 = v14; /*0x52927f*/
        if ( (unsigned __int8)HashTable::BinarySearch(this + 40, &v25) ) /*0x529283*/
          v16 = (int *)(*(_DWORD *)(this + 56) + 4); /*0x52928f*/
        else
          v16 = (int *)&unk_B7882C; /*0x529294*/
        v7 = *v16; /*0x529299*/
        if ( v7 ) /*0x52929d*/
        {
          v6 = a3; /*0x52929f*/
          *(_DWORD *)(this + 8) = v7; /*0x5292a6*/
          *(_DWORD *)(this + 4) = a2; /*0x5292a9*/
          goto LABEL_6; /*0x5292ae*/
        }
        goto LABEL_23; /*0x52929d*/
      }
    }
  }
LABEL_29:
  StringCSF = GetStringCSF((wchar_t *)Destination, 0, g_Str_File_Ini_CPP, 1858); /*0x529307*/
  wcsncpy(String, StringCSF, Count); /*0x52932d*/
  String[Count - 1] = 0; /*0x529333*/
  return wcslen(String); /*0x529340*/
}



// ==== 0x00529350  INIClass::GetCSFString  this=INIClass  sig=csp ====
int __thiscall INIClass::GetCSFString(
        INIClass *this,
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
  HashTable *v11; // esi
  _DWORD *HashTable_field_0x10; // ecx
  int v13; // eax
  int *v14; // esi
  int v15; // edi
  int v16; // eax
  int *v17; // esi
  int v18; // esi
  const char *v19; // eax
  wchar_t *StringCSF; // eax
  int v22; // [esp+10h] [ebp-414h] BYREF
  Checksummer v23; // [esp+14h] [ebp-410h] BYREF
  char Destination[1024]; // [esp+24h] [ebp-400h] BYREF

  if ( !Destination ) /*0x529362*/
    goto LABEL_29; /*0x529362*/
  if ( !a2 ) /*0x529373*/
    goto LABEL_29; /*0x529373*/
  v7 = a3; /*0x529379*/
  if ( !a3 ) /*0x529382*/
    goto LABEL_29; /*0x529382*/
  if ( a2 == (unsigned __int8 *)this->headNode[0] ) /*0x52938b*/
  {
    v8 = this->headNode[1]; /*0x529391*/
    goto LABEL_6; /*0x529391*/
  }
  memset(&v23, 0, 12); /*0x529412*/
  v15 = Checksummer::Add_Buffer(&v23, a2, strlen((const char *)a2)); /*0x529438*/
  v22 = v15; /*0x52943a*/
  if ( !this->INIClass_field_2C ) /*0x52943e*/
    goto LABEL_23; /*0x52943e*/
  if ( (unsigned __int8)SortedArray::CheckCache((SortedArray *)&this->__pad_20[8], &v22) ) /*0x52944c*/
    goto LABEL_18; /*0x529453*/
  v16 = SortedArray::BinarySearch((SortedArray *)&this->__pad_20[8], &v22); /*0x52945c*/
  if ( !v16 ) /*0x529463*/
  {
LABEL_23:
    this->headNode[0] = 0; /*0x5294a1*/
    this->headNode[1] = 0; /*0x5294a6*/
    Destination[0] = 0; /*0x5294a9*/
    goto LABEL_29; /*0x5294ad*/
  }
  this->unknown38 = v16; /*0x529465*/
LABEL_18:
  v23.buffer = v15; /*0x529468*/
  if ( (unsigned __int8)HashTable::BinarySearch((int *)&this->__pad_20[8], &v23.buffer) ) /*0x529473*/
    v17 = (int *)(this->unknown38 + 4); /*0x52947f*/
  else
    v17 = (int *)&unk_B7882C; /*0x529484*/
  v8 = *v17; /*0x529489*/
  if ( !v8 ) /*0x52948d*/
    goto LABEL_23; /*0x52948d*/
  v7 = a3; /*0x52948f*/
  this->headNode[1] = v8; /*0x529496*/
  this->headNode[0] = (int)a2; /*0x529499*/
LABEL_6:
  if ( !v8 ) /*0x529398*/
    goto LABEL_27; /*0x529398*/
  memset(&v23, 0, 12); /*0x5293a8*/
  v9 = Checksummer::Add_Buffer(&v23, v7, strlen((const char *)v7)); /*0x5293ba*/
  v10 = *(_DWORD *)(v8 + 48); /*0x5293bf*/
  v11 = (HashTable *)(v8 + 44); /*0x5293c2*/
  v22 = v9; /*0x5293c7*/
  if ( !v10 ) /*0x5293cb*/
    goto LABEL_27; /*0x5293cb*/
  HashTable_field_0x10 = (_DWORD *)v11->HashTable_field_0x10; /*0x5293d1*/
  if ( HashTable_field_0x10 && *HashTable_field_0x10 == v9 ) /*0x5293da*/
    goto LABEL_12; /*0x5293da*/
  v13 = HashTable::BinarySearchAlt(v11, &v22); /*0x5293e3*/
  if ( !v13 ) /*0x5293ea*/
  {
LABEL_27:
    Destination[0] = 0; /*0x5294c3*/
    goto LABEL_29; /*0x5294c8*/
  }
  v11->HashTable_field_0x10 = v13; /*0x5293f0*/
LABEL_12:
  if ( (unsigned __int8)SortedArray::Find((int *)v11->__pad_0, &v22) ) /*0x5293fa*/
    v14 = (int *)(v11->HashTable_field_0x10 + 4); /*0x52940a*/
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
    StringCSF = GetStringCSF((wchar_t *)Destination, 0, g_Str_File_Ini_CPP, 1874); /*0x52952b*/
  else
    StringCSF = GetStringCSF(a5, 0, g_Str_File_Ini_CPP, 1872); /*0x529519*/
  wcsncpy(String, StringCSF, Count); /*0x529539*/
  String[Count - 1] = 0; /*0x529541*/
  return wcslen(String); /*0x529551*/
}



// ==== 0x00529560  INIClass::SetBool  this=INIClass  sig=csp ====
char __thiscall INIClass_SetBool(char *this, unsigned __int8 *Block, char *a3, char a4)
{
  if ( a4 ) /*0x529566*/
    return INIClass::SetString(this, Block, a3, off_825BF8); /*0x529577*/
  else
    return INIClass::SetString(this, Block, a3, g_Str_no); /*0x52958e*/
}



// ==== 0x005295A0  INIClass::ReadBool3  this=INIClass  sig=csp ====
char __thiscall sub_5295A0(char *this, char **a2, char **a3, char a4)
{
  char *v5; // edi
  unsigned __int8 *v6; // eax

  v5 = String::GetOrEmpty_Alt(a3); /*0x5295b1*/
  v6 = (unsigned __int8 *)String::GetOrEmpty_Alt(a2); /*0x5295b3*/
  if ( a4 ) /*0x5295be*/
    return INIClass::SetString(this, v6, v5, off_825BF8); /*0x5295c9*/
  else
    return INIClass::SetString(this, v6, v5, g_Str_no); /*0x5295dc*/
}



// ==== 0x005295F0  INIClass::ReadBool_Overwrite  this=INIClass  sig=csp ====
int __thiscall INIClass::ReadBool_Overwrite(int *this, unsigned __int8 *a2, unsigned __int8 *a3, char a4)
{
  int result; // eax
  unsigned __int8 *v5; // ebp
  unsigned __int8 *v7; // edx
  int v8; // esi
  int v9; // ecx
  int v10; // esi
  _DWORD *v11; // ecx
  _DWORD *v12; // ecx
  int *v13; // esi
  unsigned __int8 *v14; // edi
  unsigned __int8 **v15; // eax
  int v16; // eax
  int *v17; // esi
  int v18; // esi
  char *v19; // esi
  unsigned int v20; // [esp+10h] [ebp-Ch] BYREF
  int v21; // [esp+14h] [ebp-8h]
  int v22; // [esp+18h] [ebp-4h]

  result = 0; /*0x5295f3*/
  v5 = a2; /*0x5295f7*/
  if ( !a2 ) /*0x529601*/
    goto LABEL_28; /*0x529601*/
  v7 = a3; /*0x529607*/
  if ( !a3 ) /*0x52960d*/
    goto LABEL_28; /*0x52960d*/
  if ( a2 != (unsigned __int8 *)this->headNode ) /*0x529616*/
  {
    v20 = 0; /*0x5296ba*/
    v21 = 0; /*0x5296be*/
    v22 = 0; /*0x5296c2*/
    v14 = (unsigned __int8 *)Checksummer::Add_Buffer(&v20, a2, strlen((const char *)a2)); /*0x5296e0*/
    a2 = v14; /*0x5296e2*/
    if ( this->INIClass_field_2C ) /*0x5296e6*/
    {
      v15 = (unsigned __int8 **)this->unknown38; /*0x5296ed*/
      if ( !v15 || *v15 != v14 ) /*0x5296f6*/
      {
        v16 = SortedArray::BinarySearch((char **)this + 10, (int *)&a2); /*0x5296ff*/
        if ( !v16 ) /*0x529706*/
          goto LABEL_27; /*0x529706*/
        this->unknown38 = v16; /*0x529708*/
      }
      a2 = v14; /*0x52970f*/
      if ( (unsigned __int8)HashTable::BinarySearch(this + 10, (int *)&a2) ) /*0x529716*/
        v17 = (int *)(this->unknown38 + 4); /*0x529722*/
      else
        v17 = (int *)&unk_B7882C; /*0x529727*/
      v8 = *v17; /*0x52972c*/
      if ( v8 ) /*0x529730*/
      {
        v7 = a3; /*0x529732*/
        this->q008 = v8; /*0x529736*/
        this->headNode = (int)v5; /*0x529739*/
        result = 0; /*0x52973c*/
        goto LABEL_5; /*0x52973e*/
      }
    }
LABEL_27:
    result = 0; /*0x529743*/
    this->headNode = 0; /*0x529745*/
    this->q008 = 0; /*0x529748*/
    goto LABEL_28; /*0x529748*/
  }
  v8 = this->q008; /*0x52961c*/
LABEL_5:
  if ( !v8 ) /*0x529621*/
    goto LABEL_28; /*0x529621*/
  v20 = 0; /*0x529627*/
  v21 = 0; /*0x52962b*/
  v22 = 0; /*0x52962f*/
  result = Checksummer::Add_Buffer(&v20, v7, strlen((const char *)v7)); /*0x529645*/
  v9 = *(_DWORD *)(v8 + 48); /*0x52964a*/
  v10 = v8 + 44; /*0x52964d*/
  a3 = (unsigned __int8 *)result; /*0x529652*/
  if ( !v9 ) /*0x529656*/
    goto LABEL_28; /*0x529656*/
  v11 = *(_DWORD **)(v10 + 16); /*0x52965c*/
  if ( v11 && *v11 == result ) /*0x529665*/
    goto LABEL_11; /*0x529665*/
  result = HashTable::BinarySearchAlt((char **)v10, (int *)&a3); /*0x52966e*/
  if ( !result ) /*0x529675*/
  {
LABEL_28:
    LOBYTE(result) = a4; /*0x52974b*/
    return result; /*0x529756*/
  }
  *(_DWORD *)(v10 + 16) = result; /*0x52967b*/
  result = (int)a3; /*0x52967e*/
LABEL_11:
  if ( !*(_DWORD *)(v10 + 4) ) /*0x529682*/
    goto LABEL_29; /*0x529682*/
  v12 = *(_DWORD **)(v10 + 16); /*0x52968d*/
  if ( v12 && *v12 == result ) /*0x529696*/
    goto LABEL_16; /*0x529696*/
  result = HashTable::BinarySearchAlt((char **)v10, (int *)&a3); /*0x52969f*/
  if ( !result ) /*0x5296a6*/
  {
LABEL_29:
    v13 = (int *)&unk_B78830; /*0x529759*/
    goto LABEL_30; /*0x529759*/
  }
  *(_DWORD *)(v10 + 16) = result; /*0x5296ac*/
LABEL_16:
  v13 = (int *)(*(_DWORD *)(v10 + 16) + 4); /*0x5296af*/
LABEL_30:
  v18 = *v13; /*0x52975e*/
  if ( !v18 ) /*0x529762*/
    goto LABEL_28; /*0x529762*/
  v19 = *(char **)(v18 + 16); /*0x529764*/
  if ( !v19 ) /*0x529769*/
    goto LABEL_28; /*0x529769*/
  result = toupper(*v19) - 48; /*0x529774*/
  switch ( result ) /*0x529787*/
  {
    case 0: /*0x529787*/
    case 22: /*0x529787*/
    case 30: /*0x529787*/
      LOBYTE(result) = 0; /*0x52979d*/
      break; /*0x52979d*/
    case 1: /*0x529787*/
    case 36: /*0x529787*/
    case 41: /*0x529787*/
      LOBYTE(result) = 1; /*0x529791*/
      break; /*0x529797*/
    default:
      goto LABEL_28;
  }
  return result; /*0x52974f*/
}



// ==== 0x005297E0  INIEntry::Write2Integers  this=INIClass  sig=csp ====
char __thiscall INIEntry::Write2Integers(char *this, unsigned __int8 *Block, char *a3, _DWORD *a4)
{
  char Buffer[56]; // [esp+4h] [ebp-38h] BYREF

  sprintf(Buffer, "%d,%d", *a4, a4[1]); /*0x5297fb*/
  return INIClass::SetString(this, Block, a3, Buffer); /*0x529819*/
}



// ==== 0x00529820  INIClass::GetInt  this=AbstractClass  sig=csp ====
char __thiscall sub_529820(char *this, char **a2, char **a3, _DWORD *a4)
{
  char *v5; // edi
  unsigned __int8 *v6; // ebx
  char Buffer[56]; // [esp+Ch] [ebp-38h] BYREF

  v5 = String::GetOrEmpty_Alt(a3); /*0x529835*/
  v6 = (unsigned __int8 *)String::GetOrEmpty_Alt(a2); /*0x52983c*/
  sprintf(Buffer, "%d,%d", *a4, a4[1]); /*0x529853*/
  return INIClass::SetString(this, v6, v5, Buffer); /*0x529869*/
}



// ==== 0x00529880  INIClass::ReadPoint2D_Overwrite  this=INIClass  sig=csp ====
int *__thiscall INIClass::ReadPoint2D_Overwrite(INIClass *this, int *a2, unsigned __int8 *a3, int a4, _DWORD *a5)
{
  unsigned __int8 *v6; // ebx
  const char *v7; // edx
  int v8; // esi
  unsigned int v9; // kr04_4
  Checksummer *v10; // eax
  int *v11; // esi
  int v12; // eax
  char *v13; // eax
  unsigned __int8 *v15; // edx
  unsigned __int8 *v16; // esi
  _DWORD *v17; // ecx
  unsigned __int8 *v18; // [esp-Ch] [ebp-78h]
  char *Source; // [esp+Ch] [ebp-60h]
  int v20; // [esp+10h] [ebp-5Ch] BYREF
  Checksummer v21; // [esp+14h] [ebp-58h] BYREF
  char Destination[64]; // [esp+2Ch] [ebp-40h] BYREF

  Source = &g_INI_DefaultBuffer; /*0x52988e*/
  if ( !Destination ) /*0x529896*/
    goto LABEL_18; /*0x529896*/
  v6 = a3; /*0x52989c*/
  if ( !a3 ) /*0x5298a4*/
    goto LABEL_18; /*0x5298a4*/
  v7 = (const char *)a4; /*0x5298aa*/
  if ( !a4 ) /*0x5298b0*/
    goto LABEL_18; /*0x5298b0*/
  if ( a3 == (unsigned __int8 *)this->headNode[0] ) /*0x5298bc*/
  {
    v8 = this->headNode[1]; /*0x5298c2*/
  }
  else
  {
    memset(&v21, 0, 12); /*0x52999c*/
    v16 = (unsigned __int8 *)Checksummer::Add_Buffer(&v21, a3, strlen((const char *)a3)); /*0x5299c6*/
    a3 = v16; /*0x5299cb*/
    if ( !(unsigned __int8)HashTable::BinarySearch((int *)&this->__pad_20[8], (int *)&a3) /*0x5299ec*/
      || (v20 = (int)v16, (v8 = *(_DWORD *)SortedArray::FindValue((SortedArray *)&this->__pad_20[8], &v20)) == 0) )
    {
      this->headNode[0] = 0; /*0x5299ff*/
      this->headNode[1] = 0; /*0x529a02*/
      goto LABEL_11; /*0x529a05*/
    }
    v7 = (const char *)a4; /*0x5299ee*/
    this->headNode[1] = v8; /*0x5299f2*/
    this->headNode[0] = (int)v6; /*0x5299f5*/
  }
  if ( v8 ) /*0x5298c7*/
  {
    v9 = strlen(v7) + 1; /*0x5298d0*/
    v18 = (unsigned __int8 *)v7; /*0x5298d6*/
    v10 = (Checksummer *)KeyValuePair::Init((KeyValuePair *)&v21.buffer, 0); /*0x5298dc*/
    a4 = Checksummer::Add_Buffer(v10, v18, v9 - 1); /*0x5298e8*/
    v11 = (int *)(v8 + 44); /*0x5298ec*/
    if ( (unsigned __int8)SortedArray::Find(v11, &a4) ) /*0x5298f6*/
    {
      v12 = *(_DWORD *)SortedArray::BinarySearch2((int)v11, &a4); /*0x52990b*/
      if ( v12 ) /*0x52990f*/
      {
        v13 = *(char **)(v12 + 16); /*0x529911*/
        if ( v13 ) /*0x529916*/
          Source = v13; /*0x529918*/
      }
    }
  }
LABEL_11:
  if ( Source ) /*0x529923*/
  {
    strncpy(Destination, Source, 0x40u); /*0x529931*/
    Destination[63] = 0; /*0x52993d*/
    String::Trim(Destination); /*0x529942*/
    if ( strlen(Destination) ) /*0x52994b*/
    {
      sscanf(Destination, "%d,%d", &a4, &a3); /*0x529971*/
      v15 = a3; /*0x529984*/
      *a2 = a4; /*0x52998e*/
      a2[1] = (int)v15; /*0x529990*/
      return a2; /*0x529999*/
    }
  }
LABEL_18:
  v17 = a5; /*0x529a0a*/
  *a2 = *a5; /*0x529a17*/
  a2[1] = v17[1]; /*0x529a1c*/
  return a2; /*0x529993*/
}



// ==== 0x00529A30  INIClass::GetCoordPair  this=INIClass  sig=csp ====
_DWORD *__thiscall INIClass::GetCoordPair(INIClass *this, _DWORD *a2, char *Source, char **a4, _DWORD *a5)
{
  char **v6; // edi
  char *v7; // ebp
  int v8; // ebx
  unsigned int v9; // kr04_4
  Checksummer *v10; // eax
  int *v11; // ebx
  int v12; // eax
  char *v13; // eax
  _DWORD *v15; // edx
  unsigned int v16; // kr0C_4
  Checksummer *v17; // eax
  int v18; // edi
  int v19; // edx
  unsigned __int8 *v20; // [esp-Ch] [ebp-78h]
  int v21; // [esp+0h] [ebp-6Ch] BYREF
  int v22; // [esp+Ch] [ebp-60h] BYREF
  int v23; // [esp+10h] [ebp-5Ch] BYREF
  KeyValuePair v24[3]; // [esp+14h] [ebp-58h] BYREF
  KeyValuePair v25[3]; // [esp+20h] [ebp-4Ch] BYREF
  char Destination[64]; // [esp+2Ch] [ebp-40h] BYREF

  v6 = (char **)String::GetOrEmpty_Alt((String *)a4); /*0x529a45*/
  a4 = v6; /*0x529a47*/
  v7 = String::GetOrEmpty_Alt((String *)Source); /*0x529a50*/
  Source = &g_INI_DefaultBuffer; /*0x529a58*/
  if ( &v21 == (int *)-44 || !v7 || !v6 ) /*0x529a70*/
    goto LABEL_18; /*0x529a70*/
  if ( v7 == (char *)this->headNode[0] ) /*0x529a7c*/
  {
    v8 = this->headNode[1]; /*0x529a82*/
  }
  else
  {
    v16 = strlen(v7) + 1; /*0x529b69*/
    v17 = (Checksummer *)KeyValuePair::Init(v24, 0); /*0x529b75*/
    v18 = Checksummer::Add_Buffer(v17, (unsigned __int8 *)v7, v16 - 1); /*0x529b88*/
    v22 = v18; /*0x529b8d*/
    if ( !(unsigned __int8)HashTable::BinarySearch((int *)&this->__pad_20[8], &v22) /*0x529bae*/
      || (v23 = v18, (v8 = *(_DWORD *)SortedArray::FindValue((SortedArray *)&this->__pad_20[8], &v23)) == 0) )
    {
      this->headNode[0] = 0; /*0x529bc1*/
      this->headNode[1] = 0; /*0x529bc4*/
      goto LABEL_11; /*0x529bc7*/
    }
    v6 = a4; /*0x529bb0*/
    this->headNode[1] = v8; /*0x529bb4*/
    this->headNode[0] = (int)v7; /*0x529bb7*/
  }
  if ( v8 ) /*0x529a87*/
  {
    v9 = strlen((const char *)v6) + 1; /*0x529a8e*/
    v20 = (unsigned __int8 *)a4; /*0x529a98*/
    v10 = (Checksummer *)KeyValuePair::Init(v25, 0); /*0x529a9f*/
    v11 = (int *)(v8 + 44); /*0x529aaf*/
    a4 = (char **)Checksummer::Add_Buffer(v10, v20, v9 - 1); /*0x529ab5*/
    if ( (unsigned __int8)SortedArray::Find(v11, (int *)&a4) ) /*0x529abc*/
    {
      v12 = *(_DWORD *)SortedArray::BinarySearch2((int)v11, (int *)&a4); /*0x529ad1*/
      if ( v12 ) /*0x529ad5*/
      {
        v13 = *(char **)(v12 + 16); /*0x529ad7*/
        if ( v13 ) /*0x529adc*/
          Source = v13; /*0x529ade*/
      }
    }
  }
LABEL_11:
  if ( Source ) /*0x529ae9*/
  {
    strncpy(Destination, Source, 0x40u); /*0x529af7*/
    Destination[63] = 0; /*0x529b03*/
    String::Trim(Destination); /*0x529b08*/
    if ( strlen(Destination) ) /*0x529b11*/
    {
      sscanf(Destination, "%d,%d", &Source, &a5); /*0x529b37*/
      v15 = a5; /*0x529b4a*/
      *a2 = Source; /*0x529b54*/
      a2[1] = v15; /*0x529b56*/
      return a2; /*0x529b5f*/
    }
  }
LABEL_18:
  v19 = a5[1]; /*0x529bcc*/
  *a2 = *a5; /*0x529bdc*/
  a2[1] = v19; /*0x529bde*/
  return a2; /*0x529b59*/
}



// ==== 0x00529BF0  INIClass::ReadCoord3  this=INIClass  sig=csp ====
char __thiscall INIClass::ReadCoord3(INIClass *this, unsigned __int8 *Block, char *a3, _DWORD *a4)
{
  char Buffer[56]; // [esp+4h] [ebp-38h] BYREF

  sprintf(Buffer, "%d,%d,%d", *a4, a4[1], a4[2]); /*0x529c0f*/
  return INIClass::SetString(this->__pad_0, Block, a3, Buffer); /*0x529c2d*/
}



// ==== 0x00529C40  INIClass::ReadCoord2  this=INIClass  sig=csp ====
char __thiscall INIClass::ReadCoord2(INIClass *this, char **a2, char **a3, _DWORD *a4)
{
  char *v5; // edi
  unsigned __int8 *v6; // ebx
  char Buffer[56]; // [esp+Ch] [ebp-38h] BYREF

  v5 = String::GetOrEmpty_Alt((String *)a3); /*0x529c55*/
  v6 = (unsigned __int8 *)String::GetOrEmpty_Alt((String *)a2); /*0x529c5c*/
  sprintf(Buffer, "%d,%d,%d", *a4, a4[1], a4[2]); /*0x529c77*/
  return INIClass::SetString(this->__pad_0, v6, v5, Buffer); /*0x529c8d*/
}



// ==== 0x00529CA0  INIClass::ReadPoint3D_Overwrite  this=INIClass  sig=csp ====
int *__thiscall INIClass::ReadPoint3D_Overwrite(INIClass *this, int *a2, unsigned __int8 *a3, int a4, _DWORD *a5)
{
  unsigned __int8 *v6; // ebx
  const char *v7; // edx
  int v8; // esi
  unsigned int v9; // kr04_4
  Checksummer *v10; // eax
  int *v11; // esi
  int v12; // eax
  char *v13; // eax
  unsigned __int8 *v15; // edx
  _DWORD *v16; // esi
  unsigned __int8 *v17; // esi
  _DWORD *v18; // ecx
  unsigned __int8 *v19; // [esp-8h] [ebp-78h]
  char *Source; // [esp+10h] [ebp-60h]
  int v21; // [esp+14h] [ebp-5Ch] BYREF
  Checksummer v22; // [esp+18h] [ebp-58h] BYREF
  char Destination[64]; // [esp+30h] [ebp-40h] BYREF

  Source = &g_INI_DefaultBuffer; /*0x529caf*/
  if ( !Destination ) /*0x529cb7*/
    goto LABEL_18; /*0x529cb7*/
  v6 = a3; /*0x529cbd*/
  if ( !a3 ) /*0x529cc5*/
    goto LABEL_18; /*0x529cc5*/
  v7 = (const char *)a4; /*0x529ccb*/
  if ( !a4 ) /*0x529cd1*/
    goto LABEL_18; /*0x529cd1*/
  if ( a3 == (unsigned __int8 *)this->headNode[0] ) /*0x529cda*/
  {
    v8 = this->headNode[1]; /*0x529ce0*/
  }
  else
  {
    memset(&v22, 0, 12); /*0x529dd1*/
    v17 = (unsigned __int8 *)Checksummer::Add_Buffer(&v22, a3, strlen((const char *)a3)); /*0x529dfb*/
    a3 = v17; /*0x529e00*/
    if ( !(unsigned __int8)HashTable::BinarySearch((int *)&this->__pad_20[8], (int *)&a3) /*0x529e21*/
      || (v21 = (int)v17, (v8 = *(_DWORD *)SortedArray::FindValue((SortedArray *)&this->__pad_20[8], &v21)) == 0) )
    {
      this->headNode[0] = 0; /*0x529e34*/
      this->headNode[1] = 0; /*0x529e37*/
      goto LABEL_11; /*0x529e3a*/
    }
    v7 = (const char *)a4; /*0x529e23*/
    this->headNode[1] = v8; /*0x529e27*/
    this->headNode[0] = (int)v6; /*0x529e2a*/
  }
  if ( v8 ) /*0x529ce5*/
  {
    v9 = strlen(v7) + 1; /*0x529cee*/
    v19 = (unsigned __int8 *)v7; /*0x529cf4*/
    v10 = (Checksummer *)KeyValuePair::Init((KeyValuePair *)&v22.buffer, 0); /*0x529cfa*/
    a4 = Checksummer::Add_Buffer(v10, v19, v9 - 1); /*0x529d06*/
    v11 = (int *)(v8 + 44); /*0x529d0a*/
    if ( (unsigned __int8)SortedArray::Find(v11, &a4) ) /*0x529d14*/
    {
      v12 = *(_DWORD *)SortedArray::BinarySearch2((int)v11, &a4); /*0x529d29*/
      if ( v12 ) /*0x529d2d*/
      {
        v13 = *(char **)(v12 + 16); /*0x529d2f*/
        if ( v13 ) /*0x529d34*/
          Source = v13; /*0x529d36*/
      }
    }
  }
LABEL_11:
  if ( Source ) /*0x529d40*/
  {
    strncpy(Destination, Source, 0x40u); /*0x529d4e*/
    Destination[63] = 0; /*0x529d5a*/
    String::Trim(Destination); /*0x529d5f*/
    if ( strlen(Destination) ) /*0x529d68*/
    {
      sscanf(Destination, "%d,%d,%d", &a4, &a3, &a5); /*0x529d99*/
      v15 = a3; /*0x529dac*/
      v16 = a5; /*0x529db3*/
      *a2 = a4; /*0x529dbf*/
      a2[1] = (int)v15; /*0x529dc1*/
      a2[2] = (int)v16; /*0x529dc4*/
      return a2; /*0x529dce*/
    }
  }
LABEL_18:
  v18 = a5; /*0x529e3f*/
  *a2 = *a5; /*0x529e4f*/
  a2[1] = v18[1]; /*0x529e54*/
  a2[2] = v18[2]; /*0x529e5c*/
  return a2; /*0x529dc7*/
}



// ==== 0x00529E70  ObjectClass::method_529E70  this=ObjectClass  sig=csp ====
char **__thiscall sub_529E70(ObjectClass *this, char **a2, char *Source, char **a4, char **a5)
{
  char **v6; // edi
  char *v7; // ebp
  int *vtable2; // ebx
  unsigned int v9; // kr04_4
  Checksummer *v10; // eax
  int *v11; // ebx
  int v12; // eax
  char *v13; // eax
  char *v14; // ecx
  char *v15; // edx
  char *v16; // esi
  unsigned int v17; // kr0C_4
  Checksummer *v18; // eax
  int v19; // edi
  unsigned __int8 *v21; // [esp-Ch] [ebp-7Ch]
  int v22; // [esp+0h] [ebp-70h] BYREF
  int v23; // [esp+Ch] [ebp-64h] BYREF
  int v24; // [esp+10h] [ebp-60h] BYREF
  char *v25; // [esp+14h] [ebp-5Ch] BYREF
  KeyValuePair v26[3]; // [esp+18h] [ebp-58h] BYREF
  KeyValuePair v27[3]; // [esp+24h] [ebp-4Ch] BYREF
  char Destination[64]; // [esp+30h] [ebp-40h] BYREF

  v6 = (char **)String::GetOrEmpty_Alt((String *)a4); /*0x529e85*/
  a4 = v6; /*0x529e87*/
  v7 = String::GetOrEmpty_Alt((String *)Source); /*0x529e90*/
  Source = &g_INI_DefaultBuffer; /*0x529e98*/
  if ( &v22 == (int *)-48 || !v7 || !v6 ) /*0x529eb0*/
    goto LABEL_18; /*0x529eb0*/
  if ( v7 == this->? ) /*0x529ebc*/
  {
    vtable2 = (int *)this->?; /*0x529ec2*/
  }
  else
  {
    v17 = strlen(v7) + 1; /*0x529fab*/
    v18 = (Checksummer *)KeyValuePair::Init(v26, 0); /*0x529fb7*/
    v19 = Checksummer::Add_Buffer(v18, (unsigned __int8 *)v7, v17 - 1); /*0x529fca*/
    v23 = v19; /*0x529fcf*/
    if ( !(unsigned __int8)HashTable::BinarySearch(&this->owningHouseIndex, &v23) /*0x529ff0*/
      || (v24 = v19, (vtable2 = *(int **)SortedArray::FindValue((SortedArray *)&this->owningHouseIndex, &v24)) == 0) )
    {
      this->? = 0; /*0x52a006*/
      this->? = 0; /*0x52a009*/
      goto LABEL_11; /*0x52a00c*/
    }
    v6 = a4; /*0x529ff2*/
    this->? = vtable2; /*0x529ff9*/
    this->? = v7; /*0x529ffc*/
  }
  if ( vtable2 ) /*0x529ec7*/
  {
    v9 = strlen((const char *)v6) + 1; /*0x529ece*/
    v21 = (unsigned __int8 *)a4; /*0x529edb*/
    v10 = (Checksummer *)KeyValuePair::Init(v27, 0); /*0x529ee2*/
    v11 = vtable2 + 11; /*0x529ef5*/
    a4 = (char **)Checksummer::Add_Buffer(v10, v21, v9 - 1); /*0x529efb*/
    if ( (unsigned __int8)SortedArray::Find(v11, (int *)&a4) ) /*0x529f02*/
    {
      v12 = *(_DWORD *)SortedArray::BinarySearch2((int)v11, (int *)&a4); /*0x529f1a*/
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
  sscanf(Destination, "%d,%d,%d", &Source, &a5, &v25); /*0x529f88*/
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
char __thiscall INIClass::ReadBool2(INIClass *this, unsigned __int8 *Block, char *a3, float *a4)
{
  char Buffer[56]; // [esp+1Ch] [ebp-38h] BYREF

  sprintf(Buffer, "%f,%f,%f", *a4, a4[1], a4[2]); /*0x52a06e*/
  return INIClass::SetString(this->__pad_0, Block, a3, Buffer); /*0x52a08c*/
}



// ==== 0x0052A0A0  INIClass::ReadBool  this=INIClass  sig=csp ====
char __thiscall INIClass::ReadBool(INIClass *this, char **a2, char **a3, float *a4)
{
  char *v5; // edi
  unsigned __int8 *v6; // ebx
  char Buffer[56]; // [esp+24h] [ebp-38h] BYREF

  v5 = String::GetOrEmpty_Alt((String *)a3); /*0x52a0b5*/
  v6 = (unsigned __int8 *)String::GetOrEmpty_Alt((String *)a2); /*0x52a0bc*/
  sprintf(Buffer, "%f,%f,%f", *a4, a4[1], a4[2]); /*0x52a0e6*/
  return INIClass::SetString(this->__pad_0, v6, v5, Buffer); /*0x52a0fc*/
}



// ==== 0x0052A110  ObjectClass::method_52A110  this=ObjectClass  sig=csp ====
float *__thiscall sub_52A110(ObjectClass *this, float *a2, unsigned __int8 *a3, float a4, float *a5)
{
  unsigned __int8 *v6; // ebx
  float v7; // edx
  int *vtable2; // esi
  unsigned int v9; // kr04_4
  Checksummer *v10; // eax
  int *v11; // esi
  int v12; // eax
  char *v13; // eax
  double v15; // st7
  unsigned __int8 *v16; // esi
  float *v17; // ecx
  unsigned __int8 *v18; // [esp-8h] [ebp-78h]
  char *Source; // [esp+10h] [ebp-60h]
  int v20; // [esp+14h] [ebp-5Ch] BYREF
  Checksummer v21; // [esp+18h] [ebp-58h] BYREF
  char Destination[64]; // [esp+30h] [ebp-40h] BYREF

  Source = &g_INI_DefaultBuffer; /*0x52a11f*/
  if ( !Destination ) /*0x52a127*/
    goto LABEL_18; /*0x52a127*/
  v6 = a3; /*0x52a12d*/
  if ( *(float *)&a3 == 0.0 ) /*0x52a135*/
    goto LABEL_18; /*0x52a135*/
  v7 = a4; /*0x52a13b*/
  if ( a4 == 0.0 ) /*0x52a141*/
    goto LABEL_18; /*0x52a141*/
  if ( a3 == this->? ) /*0x52a14a*/
  {
    vtable2 = (int *)this->?; /*0x52a150*/
  }
  else
  {
    memset(&v21, 0, 12); /*0x52a256*/
    *(float *)&v16 = COERCE_FLOAT(Checksummer::Add_Buffer(&v21, a3, strlen((const char *)a3))); /*0x52a280*/
    a3 = v16; /*0x52a285*/
    if ( !(unsigned __int8)HashTable::BinarySearch(&this->owningHouseIndex, (int *)&a3) /*0x52a2a6*/
      || (v20 = (int)v16, (vtable2 = *(int **)SortedArray::FindValue((SortedArray *)&this->owningHouseIndex, &v20)) == 0) )
    {
      this->? = 0; /*0x52a2b9*/
      this->? = 0; /*0x52a2bc*/
      goto LABEL_11; /*0x52a2bf*/
    }
    v7 = a4; /*0x52a2a8*/
    this->? = vtable2; /*0x52a2ac*/
    this->? = v6; /*0x52a2af*/
  }
  if ( vtable2 ) /*0x52a155*/
  {
    v9 = strlen((const char *)LODWORD(v7)) + 1; /*0x52a15e*/
    v18 = (unsigned __int8 *)LODWORD(v7); /*0x52a164*/
    v10 = (Checksummer *)KeyValuePair::Init((KeyValuePair *)&v21.buffer, 0); /*0x52a16a*/
    a4 = COERCE_FLOAT(Checksummer::Add_Buffer(v10, v18, v9 - 1)); /*0x52a176*/
    v11 = vtable2 + 11; /*0x52a17a*/
    if ( (unsigned __int8)SortedArray::Find(v11, (int *)&a4) ) /*0x52a184*/
    {
      v12 = *(_DWORD *)SortedArray::BinarySearch2((int)v11, (int *)&a4); /*0x52a199*/
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
      sscanf(Destination, "%f,%f,%f", &a4, &a3, &a5); /*0x52a209*/
      *(float *)&v21.crcValue = a4; /*0x52a21f*/
      v21.bytePos = (int)a3; /*0x52a22d*/
      v15 = *(float *)&a5; /*0x52a231*/
      *a2 = a4; /*0x52a238*/
      *(float *)&v21.state = v15; /*0x52a23e*/
      a2[1] = *(float *)&v21.bytePos; /*0x52a242*/
      a2[2] = *(float *)&v21.state; /*0x52a24c*/
      return a2; /*0x52a253*/
    }
  }
LABEL_18:
  v17 = a5; /*0x52a2c4*/
  *a2 = *a5; /*0x52a2d4*/
  a2[1] = v17[1]; /*0x52a2d9*/
  a2[2] = v17[2]; /*0x52a2e1*/
  return a2; /*0x52a249*/
}



// ==== 0x0052A2F0  ObjectClass::method_52A2F0  this=ObjectClass  sig=csp ====
float *__thiscall sub_52A2F0(ObjectClass *this, float *a2, float Source, char **a4, float *a5)
{
  char **v6; // edi
  char *v7; // ebp
  int *vtable2; // ebx
  unsigned int v9; // kr04_4
  Checksummer *v10; // eax
  int *v11; // ebx
  int v12; // eax
  float v13; // eax
  float v14; // ecx
  float *v15; // edx
  float v16; // esi
  unsigned int v17; // kr0C_4
  Checksummer *v18; // eax
  int v19; // edi
  unsigned __int8 *v21; // [esp-Ch] [ebp-7Ch]
  int v22; // [esp+0h] [ebp-70h] BYREF
  int v23; // [esp+Ch] [ebp-64h] BYREF
  int v24; // [esp+10h] [ebp-60h] BYREF
  float v25; // [esp+14h] [ebp-5Ch] BYREF
  KeyValuePair v26; // [esp+18h] [ebp-58h] BYREF
  float *v27; // [esp+1Ch] [ebp-54h]
  float v28; // [esp+20h] [ebp-50h]
  KeyValuePair v29[3]; // [esp+24h] [ebp-4Ch] BYREF
  char Destination[64]; // [esp+30h] [ebp-40h] BYREF

  v6 = (char **)String::GetOrEmpty_Alt((String *)a4); /*0x52a305*/
  a4 = v6; /*0x52a307*/
  v7 = String::GetOrEmpty_Alt((String *)LODWORD(Source)); /*0x52a310*/
  Source = COERCE_FLOAT(&g_INI_DefaultBuffer); /*0x52a318*/
  if ( &v22 == (int *)-48 || !v7 || !v6 ) /*0x52a330*/
    goto LABEL_18; /*0x52a330*/
  if ( v7 == this->? ) /*0x52a33c*/
  {
    vtable2 = (int *)this->?; /*0x52a342*/
  }
  else
  {
    v17 = strlen(v7) + 1; /*0x52a443*/
    v18 = (Checksummer *)KeyValuePair::Init(&v26, 0); /*0x52a44f*/
    v19 = Checksummer::Add_Buffer(v18, (unsigned __int8 *)v7, v17 - 1); /*0x52a462*/
    v23 = v19; /*0x52a467*/
    if ( !(unsigned __int8)HashTable::BinarySearch(&this->owningHouseIndex, &v23) /*0x52a488*/
      || (v24 = v19, (vtable2 = *(int **)SortedArray::FindValue((SortedArray *)&this->owningHouseIndex, &v24)) == 0) )
    {
      this->? = 0; /*0x52a49e*/
      this->? = 0; /*0x52a4a1*/
      goto LABEL_11; /*0x52a4a4*/
    }
    v6 = a4; /*0x52a48a*/
    this->? = vtable2; /*0x52a491*/
    this->? = v7; /*0x52a494*/
  }
  if ( vtable2 ) /*0x52a347*/
  {
    v9 = strlen((const char *)v6) + 1; /*0x52a34e*/
    v21 = (unsigned __int8 *)a4; /*0x52a35b*/
    v10 = (Checksummer *)KeyValuePair::Init(v29, 0); /*0x52a362*/
    v11 = vtable2 + 11; /*0x52a375*/
    a4 = (char **)Checksummer::Add_Buffer(v10, v21, v9 - 1); /*0x52a37b*/
    if ( (unsigned __int8)SortedArray::Find(v11, (int *)&a4) ) /*0x52a382*/
    {
      v12 = *(_DWORD *)SortedArray::BinarySearch2((int)v11, (int *)&a4); /*0x52a39a*/
      if ( v12 ) /*0x52a39e*/
      {
        v13 = *(float *)(v12 + 16); /*0x52a3a0*/
        if ( v13 != 0.0 ) /*0x52a3a5*/
          Source = v13; /*0x52a3a7*/
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
  sscanf(Destination, "%f,%f,%f", &Source, &a5, &v25); /*0x52a408*/
  *(float *)&v26 = Source; /*0x52a414*/
  v14 = Source; /*0x52a41f*/
  v27 = a5; /*0x52a426*/
  v15 = a5; /*0x52a42e*/
  v28 = v25; /*0x52a432*/
  v16 = v25; /*0x52a436*/
LABEL_19:
  *a2 = v14; /*0x52a4b8*/
  *((_DWORD *)a2 + 1) = v15; /*0x52a4c0*/
  a2[2] = v16; /*0x52a4c3*/
  return a2; /*0x52a4c6*/
}



// ==== 0x0052A4D0  ObjectClass::method_52A4D0  this=ObjectClass  sig=csp ====
int __thiscall sub_52A4D0(ObjectClass *this, unsigned __int8 *a2)
{
  int v3; // eax
  ObjectClass *nextObject; // ecx
  int v5; // edi
  _DWORD *v6; // eax
  ObjectClass *v7; // edx
  int fallRate; // ecx
  int v9; // eax
  ObjectClass *v10; // eax
  _DWORD *v11; // ecx
  ObjectClass *v12; // ecx
  int v13; // ebp
  unsigned __int8 *v14; // edi
  int v15; // edx
  _BYTE v17[12]; // [esp+Ch] [ebp-Ch] BYREF
  unsigned __int8 *v18; // [esp+1Ch] [ebp+4h]

  if ( !a2 ) /*0x52a4e0*/
    return 0; /*0x52a4e0*/
  memset(v17, 0, sizeof(v17)); /*0x52a4ed*/
  v3 = Checksummer::Add_Buffer((Checksummer *)v17, a2, strlen((const char *)a2)); /*0x52a504*/
  nextObject = this->nextObject; /*0x52a509*/
  v5 = v3; /*0x52a50c*/
  v18 = (unsigned __int8 *)v3; /*0x52a510*/
  if ( !nextObject ) /*0x52a514*/
    return 0; /*0x52a514*/
  v6 = (_DWORD *)this->ambientSoundController[0]; /*0x52a51a*/
  if ( v6 && *v6 == v5 ) /*0x52a523*/
    goto LABEL_9; /*0x52a523*/
  if ( !LOBYTE(this->attachedBomb) ) /*0x52a525*/
  {
    qsort((void *)this->fallRate, (size_t)nextObject, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc3Int); /*0x52a536*/
    this->ambientSoundController[0] = 0; /*0x52a53e*/
    LOBYTE(this->attachedBomb) = 1; /*0x52a541*/
  }
  v7 = this->nextObject; /*0x52a545*/
  fallRate = this->fallRate; /*0x52a54d*/
  *(_DWORD *)v17 = v5; /*0x52a550*/
  v9 = UI_Find(fallRate, (int)v7, (int *)v17); /*0x52a554*/
  if ( !v9 ) /*0x52a55b*/
    return 0; /*0x52a5f8*/
  this->ambientSoundController[0] = v9; /*0x52a561*/
LABEL_9:
  v10 = this->nextObject; /*0x52a564*/
  if ( !v10 ) /*0x52a56a*/
    return unk_B78830; /*0x52a56a*/
  v11 = (_DWORD *)this->ambientSoundController[0]; /*0x52a56c*/
  if ( v11 && *v11 == v5 ) /*0x52a575*/
    return *(_DWORD *)(this->ambientSoundController[0] + 4); /*0x52a5f3*/
  if ( !LOBYTE(this->attachedBomb) ) /*0x52a577*/
  {
    qsort((void *)this->fallRate, (size_t)v10, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc3Int); /*0x52a588*/
    this->ambientSoundController[0] = 0; /*0x52a590*/
    LOBYTE(this->attachedBomb) = 1; /*0x52a593*/
  }
  v12 = this->nextObject; /*0x52a597*/
  v13 = this->fallRate; /*0x52a59a*/
  if ( (int)v12 <= 0 ) /*0x52a59f*/
    return unk_B78830; /*0x52a59f*/
  while ( 1 ) /*0x52a5ac*/
  {
    v14 = *(unsigned __int8 **)(v13 + 8 * ((int)v12 / 2)); /*0x52a5ac*/
    v15 = v13 + 8 * ((int)v12 / 2); /*0x52a5b0*/
    if ( (int)v14 <= (int)v18 ) /*0x52a5b6*/
      break; /*0x52a5b6*/
    v12 = (ObjectClass *)((int)v12 / 2); /*0x52a5b8*/
LABEL_19:
    if ( (int)v12 <= 0 ) /*0x52a5ca*/
      return unk_B78830; /*0x52a5ca*/
  }
  if ( v14 != v18 ) /*0x52a5bc*/
  {
    v13 = v15 + 8; /*0x52a5be*/
    v12 = (ObjectClass *)((char *)v12 - 1 - (int)v12 / 2); /*0x52a5c6*/
    goto LABEL_19; /*0x52a5c6*/
  }
  if ( v15 ) /*0x52a5df*/
  {
    this->ambientSoundController[0] = v15; /*0x52a5e1*/
    return *(_DWORD *)(this->ambientSoundController[0] + 4); /*0x52a5e1*/
  }
  return unk_B78830; /*0x52a5d2*/
}



// ==== 0x0052A610  ObjectClass::method_52A610  this=ObjectClass  sig=csp ====
char __thiscall sub_52A610(ObjectClass *this, void *a2)
{
  signed int v3; // eax
  signed int v4; // eax
  _BYTE v6[512]; // [esp+8h] [ebp-200h] BYREF

  v3 = sub_631FC0((ObjectClass *)a2, v6); /*0x52a628*/
  INIClass::ReadBase64Data((char *)this, (unsigned __int8 *)aPublickey, (int)v6, v3); /*0x52a63a*/
  v4 = sub_631FE0((ObjectClass *)a2, v6); /*0x52a646*/
  INIClass::ReadBase64Data((char *)this, (unsigned __int8 *)aPrivatekey, (int)v6, v4); /*0x52a658*/
  return 1; /*0x52a65d*/
}



// ==== 0x0052A670  ObjectClass::WinMain_Init  this=ObjectClass  sig=csp ====
void *__thiscall WinMain_Init(ObjectClass *this, void *a2, char a3)
{
  ObjectClass v5[3]; // [esp+8h] [ebp-504h] BYREF
  _BYTE v6[512]; // [esp+20Ch] [ebp-300h] BYREF
  _DWORD v7[64]; // [esp+40Ch] [ebp-100h] BYREF

  InitArrayWithValue(v5, 0, 64); /*0x52a682*/
  InitArrayWithValue(&v5[1].customSound_controller[1], 0, 64); /*0x52a692*/
  v5[2].lineTrailer = 0; /*0x52a69e*/
  if ( a3 ) /*0x52a6ab*/
  {
    InitArrayWithValue(v7, 65537, 64); /*0x52a6bb*/
    EncodeVarInt((int)v7, v6, 64); /*0x52a6d0*/
  }
  else
  {
    INIClass::GetBase64Data((INIClass *)this, aPrivatekey, (int)v6, 0x200u); /*0x52a6f3*/
  }
  System_Init_632030(v5, v6); /*0x52a6dd*/
  INIClass::GetBase64Data((INIClass *)this, aPublickey, (int)v6, 0x200u); /*0x52a71d*/
  System_Init_632000(v5, v6); /*0x52a72e*/
  qmemcpy(a2, v5, 0x204u); /*0x52a745*/
  return a2; /*0x52a747*/
}



// ==== 0x0052A760  INIClass::ReadTimeString  this=INIClass  sig=csp ====
int __thiscall INIClass_ReadTimeString(int this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  unsigned __int8 *v5; // edx
  int v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // esi
  _DWORD *v10; // ecx
  size_t v11; // eax
  _DWORD *v12; // ecx
  size_t v13; // eax
  int *v14; // esi
  int v15; // edi
  _DWORD *v16; // eax
  size_t v17; // eax
  int *v18; // esi
  unsigned __int8 *v19; // edx
  int v21; // esi
  const char *v22; // eax
  int v23; // [esp+10h] [ebp-10h] BYREF
  unsigned int v24; // [esp+14h] [ebp-Ch] BYREF
  int v25; // [esp+18h] [ebp-8h]
  int v26; // [esp+1Ch] [ebp-4h]

  if ( !a2 ) /*0x52a771*/
    return a4; /*0x52a771*/
  v5 = a3; /*0x52a777*/
  if ( !a3 ) /*0x52a77d*/
    return a4; /*0x52a77d*/
  if ( a2 != *(unsigned __int8 **)(this + 4) ) /*0x52a786*/
  {
    v24 = 0; /*0x52a82f*/
    v25 = 0; /*0x52a838*/
    v26 = 0; /*0x52a842*/
    v15 = Checksummer::Add_Buffer(&v24, a2, strlen((const char *)a2)); /*0x52a84e*/
    v23 = v15; /*0x52a850*/
    if ( *(_DWORD *)(this + 44) ) /*0x52a854*/
    {
      v16 = *(_DWORD **)(this + 56); /*0x52a859*/
      if ( !v16 || *v16 != v15 ) /*0x52a862*/
      {
        v17 = SortedArray::BinarySearch((char **)(this + 40), &v23); /*0x52a86b*/
        if ( !v17 ) /*0x52a872*/
          goto LABEL_27; /*0x52a872*/
        *(_DWORD *)(this + 56) = v17; /*0x52a874*/
      }
      v23 = v15; /*0x52a87b*/
      if ( HashTable::BinarySearch(this + 40, &v23) ) /*0x52a882*/
        v18 = (int *)(*(_DWORD *)(this + 56) + 4); /*0x52a88e*/
      else
        v18 = (int *)&unk_B7882C; /*0x52a893*/
      v6 = *v18; /*0x52a898*/
      if ( v6 ) /*0x52a89c*/
      {
        v19 = a2; /*0x52a89e*/
        *(_DWORD *)(this + 8) = v6; /*0x52a8a2*/
        *(_DWORD *)(this + 4) = v19; /*0x52a8a5*/
        v5 = a3; /*0x52a8a8*/
        goto LABEL_5; /*0x52a8ac*/
      }
    }
LABEL_27:
    *(_DWORD *)(this + 4) = 0; /*0x52a8b1*/
    *(_DWORD *)(this + 8) = 0; /*0x52a8b4*/
    return a4; /*0x52a8b4*/
  }
  v6 = *(_DWORD *)(this + 8); /*0x52a78c*/
LABEL_5:
  if ( !v6 ) /*0x52a791*/
    return a4; /*0x52a791*/
  v24 = 0; /*0x52a79e*/
  v25 = 0; /*0x52a7a7*/
  v26 = 0; /*0x52a7b1*/
  v7 = Checksummer::Add_Buffer(&v24, v5, strlen((const char *)v5)); /*0x52a7b5*/
  v8 = *(_DWORD *)(v6 + 48); /*0x52a7ba*/
  v9 = v6 + 44; /*0x52a7bd*/
  a2 = (unsigned __int8 *)v7; /*0x52a7c2*/
  if ( !v8 ) /*0x52a7c6*/
    return a4; /*0x52a7c6*/
  v10 = *(_DWORD **)(v9 + 16); /*0x52a7cc*/
  if ( v10 && *v10 == v7 ) /*0x52a7d5*/
    goto LABEL_11; /*0x52a7d5*/
  v11 = HashTable::BinarySearchAlt((char **)v9, (int *)&a2); /*0x52a7de*/
  if ( !v11 ) /*0x52a7e5*/
    return a4; /*0x52a8c2*/
  *(_DWORD *)(v9 + 16) = v11; /*0x52a7eb*/
  v7 = (int)a2; /*0x52a7ee*/
LABEL_11:
  if ( !*(_DWORD *)(v9 + 4) ) /*0x52a7f2*/
    goto LABEL_29; /*0x52a7f2*/
  v12 = *(_DWORD **)(v9 + 16); /*0x52a7fb*/
  if ( v12 && *v12 == v7 ) /*0x52a804*/
    goto LABEL_16; /*0x52a804*/
  v13 = HashTable::BinarySearchAlt((char **)v9, (int *)&a2); /*0x52a80d*/
  if ( !v13 ) /*0x52a814*/
  {
LABEL_29:
    v14 = (int *)&unk_B78830; /*0x52a8c5*/
    goto LABEL_30; /*0x52a8c5*/
  }
  *(_DWORD *)(v9 + 16) = v13; /*0x52a81a*/
LABEL_16:
  v14 = (int *)(*(_DWORD *)(v9 + 16) + 4); /*0x52a81d*/
LABEL_30:
  v21 = *v14; /*0x52a8ca*/
  if ( !v21 ) /*0x52a8ce*/
    return a4; /*0x52a8ce*/
  v22 = *(const char **)(v21 + 16); /*0x52a8d0*/
  if ( !v22 ) /*0x52a8d5*/
    return a4; /*0x52a8d5*/
  a2 = 0; /*0x52a8ec*/
  a3 = 0; /*0x52a8f0*/
  a4 = 0; /*0x52a8f4*/
  sscanf(v22, "%02d:%02d:%02d", &a2, &a3, &a4); /*0x52a8f8*/
  return 60 * (a4 + 60 * (_DWORD)&a3[60 * (_DWORD)a2]); /*0x52a8bb*/
}



// ==== 0x0052A940  INIClass::SaveTimeField  this=INIClass  sig=csp ====
char __thiscall INIClass_SaveTimeField(char *this, unsigned __int8 *Block, char *a3, int a4)
{
  char Buffer[32]; // [esp+8h] [ebp-20h] BYREF

  sprintf(Buffer, "%02d:%02d:%02d", a4 / 60 / 60 / 60, a4 / 60 / 60 % 60, a4 / 60 % 60); /*0x52a9ab*/
  return INIClass::SetString(this, Block, a3, Buffer); /*0x52a9c9*/
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
void __thiscall sub_52AAF0(void *this)
{
  void *v2; // eax
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  void *v7; // [esp-8h] [ebp-10h]

  v2 = (void *)this->q00C; /*0x52aaf4*/
  *(_DWORD *)this = &INIClass::INIEntry::`vftable'; /*0x52aaf7*/
  free(v2); /*0x52aafe*/
  v7 = (void *)this->q004; /*0x52ab08*/
  this->q00C = 0; /*0x52ab09*/
  free(v7); /*0x52ab0c*/
  v3 = *((_DWORD *)this + 5); /*0x52ab11*/
  this->q004 = 0; /*0x52ab19*/
  if ( v3 ) /*0x52ab1c*/
  {
    do /*0x52ab40*/
    {
      free(**((void ***)this + 5)); /*0x52ab25*/
      v4 = *(_DWORD *)(*((_DWORD *)this + 5) + 4); /*0x52ab2f*/
      __3_YAXPAX_Z(*((void **)this + 5)); /*0x52ab33*/
      *((_DWORD *)this + 5) = v4; /*0x52ab3d*/
    }
    while ( v4 ); /*0x52ab40*/
  }
  free(*((void **)this + 6)); /*0x52ab47*/
  this->q018 = 0; /*0x52ab51*/
  *(_DWORD *)this = &GenericNode::`vftable'; /*0x52ab54*/
  if ( this ) /*0x52ab5a*/
  {
    v5 = this->q004; /*0x52ab5c*/
    if ( v5 ) /*0x52ab61*/
    {
      v6 = this->q008; /*0x52ab63*/
      if ( v6 ) /*0x52ab68*/
      {
        *(_DWORD *)(v6 + 4) = v5; /*0x52ab6a*/
        *(_DWORD *)(this->q004 + 8) = this->q008; /*0x52ab73*/
        this->q008 = 0; /*0x52ab76*/
        this->q004 = 0; /*0x52ab79*/
      }
    }
  }
}



// ==== 0x0052AB80  WarheadTypeClass::parseVerses  this=INISection@INIClass  sig=csp ====
char *__thiscall sub_52AB80(char *this)
{
  void *v2; // eax
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

  v2 = (void *)this->q00C; /*0x52ab84*/
  *(_DWORD *)this = &INIClass::INISection::`vftable'; /*0x52ab87*/
  free(v2); /*0x52ab8e*/
  this->q00C = 0; /*0x52ab98*/
  while ( 1 ) /*0x52ab9b*/
  {
    v3 = this->q018; /*0x52ab9b*/
    if ( !v3 || !*(_DWORD *)(v3 + 4) || !*(_DWORD *)(v3 + 8) ) /*0x52aba7*/
      break; /*0x52aba7*/
    (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x52abb4*/
  }
  __3_YAXPAX_Z(*((void **)this + 11)); /*0x52abbc*/
  this->q02C = 0; /*0x52abc1*/
  this->q00C = 0; /*0x52abc4*/
  *((_DWORD *)this + 13) = 0; /*0x52abc7*/
  *(this + 56) = 0; /*0x52abca*/
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
  __3_YAXPAX_Z(*((void **)this + 11)); /*0x52ac03*/
  this->q02C = 0; /*0x52ac08*/
  this->q00C = 0; /*0x52ac0b*/
  *((_DWORD *)this + 13) = 0; /*0x52ac0e*/
  *(this + 56) = 0; /*0x52ac11*/
  *((_DWORD *)this + 15) = 0; /*0x52ac14*/
  this->q004 = &GenericList::`vftable'; /*0x52ac1a*/
  while ( 1 ) /*0x52ac21*/
  {
    v5 = this->q018; /*0x52ac21*/
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
  this->q008 = &GenericNode::`vftable'; /*0x52ac5c*/
  if ( this != (char *)-32 ) /*0x52ac62*/
  {
    v8 = this->q024; /*0x52ac64*/
    if ( v8 ) /*0x52ac69*/
    {
      v9 = *((_DWORD *)this + 10); /*0x52ac6b*/
      if ( v9 ) /*0x52ac70*/
      {
        *(_DWORD *)(v9 + 4) = v8; /*0x52ac72*/
        *(_DWORD *)(this->q024 + 8) = *((_DWORD *)this + 10); /*0x52ac7b*/
        *((_DWORD *)this + 10) = 0; /*0x52ac7e*/
        this->q024 = 0; /*0x52ac81*/
      }
    }
  }
  result = this + 20; /*0x52ac84*/
  *((_DWORD *)this + 5) = &GenericNode::`vftable'; /*0x52ac89*/
  if ( this != (char *)-20 ) /*0x52ac8f*/
  {
    v11 = this->q018; /*0x52ac91*/
    if ( v11 ) /*0x52ac96*/
    {
      v12 = *((_DWORD *)this + 7); /*0x52ac98*/
      if ( v12 ) /*0x52ac9d*/
      {
        *(_DWORD *)(v12 + 4) = v11; /*0x52ac9f*/
        *(_DWORD *)(this->q018 + 8) = *((_DWORD *)this + 7); /*0x52aca8*/
        *((_DWORD *)this + 7) = 0; /*0x52acab*/
        this->q018 = 0; /*0x52acae*/
      }
    }
  }
  *(_DWORD *)this = &GenericNode::`vftable'; /*0x52acb3*/
  if ( this ) /*0x52acb9*/
  {
    v13 = this->q004; /*0x52acbb*/
    if ( v13 ) /*0x52acc0*/
    {
      result = (char *)this->q008; /*0x52acc2*/
      if ( result ) /*0x52acc7*/
      {
        *((_DWORD *)result + 1) = v13; /*0x52acc9*/
        result = (char *)this->q004; /*0x52accc*/
        *((_DWORD *)result + 2) = this->q008; /*0x52acd2*/
        this->q008 = 0; /*0x52acd5*/
        this->q004 = 0; /*0x52acd8*/
      }
    }
  }
  return result; /*0x52acdb*/
}



// ==== 0x0052ACE0  GenericList::Constructor  this=GenericList  sig=csp ====
_DWORD *__thiscall GenericList::Constructor(GenericList *this)
{
  _DWORD *result; // eax
  GenericList *v2; // edx
  int v3; // ebx
  int v4; // edi
  int v5; // edi
  int v6; // edi

  result = &this->vtable; /*0x52ace0*/
  v2 = this + 4; /*0x52ace9*/
  *((_DWORD *)this + 2) = 0; /*0x52acef*/
  *((_DWORD *)this + 3) = 0; /*0x52acf2*/
  *((_DWORD *)this + 1) = &GenericNode::`vftable'; /*0x52acf5*/
  *((_DWORD *)this + 5) = 0; /*0x52acfb*/
  *((_DWORD *)this + 6) = 0; /*0x52acfe*/
  *((_DWORD *)this + 4) = &GenericNode::`vftable'; /*0x52ad01*/
  this->vtable = &GenericList::`vftable'; /*0x52ad07*/
  if ( this != (GenericList *)-16 ) /*0x52ad0d*/
  {
    v3 = *((_DWORD *)this + 5); /*0x52ad0f*/
    if ( v3 ) /*0x52ad14*/
    {
      v4 = *((_DWORD *)this + 6); /*0x52ad16*/
      if ( v4 ) /*0x52ad1b*/
      {
        *(_DWORD *)(v4 + 4) = v3; /*0x52ad1d*/
        *(GenericList *)(*((_DWORD *)this + 5) + 8) = *(this + 6); /*0x52ad26*/
        *((_DWORD *)this + 6) = 0; /*0x52ad29*/
        *((_DWORD *)this + 5) = 0; /*0x52ad2c*/
      }
    }
  }
  v5 = *((_DWORD *)this + 2); /*0x52ad2f*/
  *((_DWORD *)this + 6) = this + 1; /*0x52ad32*/
  *((_DWORD *)this + 5) = v5; /*0x52ad35*/
  v6 = *((_DWORD *)this + 2); /*0x52ad38*/
  if ( v6 ) /*0x52ad3d*/
    *(_DWORD *)(v6 + 8) = v2; /*0x52ad3f*/
  *((_DWORD *)this + 2) = v2; /*0x52ad42*/
  return result; /*0x52ad45*/
}



// ==== 0x0052AD50  WarheadTypeClass::parseModifiers  this=INIEntry@INIClass  sig=csp ====
void *__thiscall WarheadTypeClass::parseModifiers(WarheadTypeClass *this, char a2)
{
  void *WarheadTypeClass_field_0xC; // eax
  int v4; // eax
  int v5; // edi
  void *WarheadTypeClass_field_0x4; // ecx
  _DWORD *WarheadTypeClass_field_0x8; // eax
  void *WarheadTypeClass_field_0x10; // [esp-8h] [ebp-10h]

  WarheadTypeClass_field_0xC = this->WarheadTypeClass_field_0xC; /*0x52ad54*/
  this->Deform = &INIClass::INIEntry::`vftable'; /*0x52ad57*/
  free(WarheadTypeClass_field_0xC); /*0x52ad5e*/
  WarheadTypeClass_field_0x10 = this->WarheadTypeClass_field_0x10; /*0x52ad68*/
  this->WarheadTypeClass_field_0xC = 0; /*0x52ad69*/
  free(WarheadTypeClass_field_0x10); /*0x52ad6c*/
  v4 = this->AnimList[0]; /*0x52ad71*/
  this->WarheadTypeClass_field_0x10 = 0; /*0x52ad79*/
  if ( v4 ) /*0x52ad7c*/
  {
    do /*0x52ada0*/
    {
      free(*(void **)this->AnimList[0]); /*0x52ad85*/
      v5 = *(_DWORD *)(this->AnimList[0] + 4); /*0x52ad8f*/
      __3_YAXPAX_Z((void *)this->AnimList[0]); /*0x52ad93*/
      this->AnimList[0] = v5; /*0x52ad9d*/
    }
    while ( v5 ); /*0x52ada0*/
  }
  free((void *)this->InfDeath[0]); /*0x52ada7*/
  this->InfDeath[0] = 0; /*0x52adb1*/
  this->Deform = &GenericNode::`vftable'; /*0x52adb4*/
  if ( this ) /*0x52adba*/
  {
    WarheadTypeClass_field_0x4 = this->WarheadTypeClass_field_0x4; /*0x52adbc*/
    if ( WarheadTypeClass_field_0x4 ) /*0x52adc1*/
    {
      WarheadTypeClass_field_0x8 = this->WarheadTypeClass_field_0x8; /*0x52adc3*/
      if ( WarheadTypeClass_field_0x8 ) /*0x52adc8*/
      {
        WarheadTypeClass_field_0x8[1] = WarheadTypeClass_field_0x4; /*0x52adca*/
        *((_DWORD *)this->WarheadTypeClass_field_0x4 + 2) = this->WarheadTypeClass_field_0x8; /*0x52add3*/
        this->WarheadTypeClass_field_0x8 = 0; /*0x52add6*/
        this->WarheadTypeClass_field_0x4 = 0; /*0x52add9*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x52ade1*/
    __3_YAXPAX_Z(this); /*0x52ade4*/
  return this; /*0x52adee*/
}



// ==== 0x0052AE00  WarheadTypeClass::parseAnimations  this=WarheadTypeClass  sig=csp ====
WarheadTypeClass *WarheadTypeClass::parseAnimations(WarheadTypeClass *this, char a2)
{
  char *v2; // ecx
  WarheadTypeClass *v3; // esi

  v3 = (WarheadTypeClass *)v2; /*0x52ae01*/
  WarheadTypeClass::parseVerses(v2); /*0x52ae03*/
  if ( ((unsigned __int8)this & 1) != 0 ) /*0x52ae0d*/
    __3_YAXPAX_Z(v3); /*0x52ae10*/
  return v3; /*0x52ae1a*/
}



// ==== 0x0052AE20  GenericNode::Constructor_GenericNode  this=GenericNode  sig=csp ====
_DWORD *__thiscall Delegate::Constructor_GenericNode(MixFileClass *this, char a2)
{
  int Previous; // ecx
  int v4; // eax

  *(_DWORD *)this->__pad_0 = &GenericNode::`vftable'; /*0x52ae27*/
  if ( this ) /*0x52ae2d*/
  {
    Previous = this->Previous; /*0x52ae2f*/
    if ( Previous ) /*0x52ae34*/
    {
      v4 = *(_DWORD *)this->Blowfish; /*0x52ae36*/
      if ( v4 ) /*0x52ae3b*/
      {
        *(_DWORD *)(v4 + 4) = Previous; /*0x52ae3d*/
        *(_DWORD *)(this->Previous + 8) = *(_DWORD *)this->Blowfish; /*0x52ae46*/
        *(_DWORD *)this->Blowfish = 0; /*0x52ae49*/
        this->Previous = 0; /*0x52ae4c*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x52ae54*/
    __3_YAXPAX_Z(this); /*0x52ae57*/
  return this->__pad_0; /*0x52ae61*/
}



// ==== 0x0052AE70  CacheStraw::ClearVectorAndStraw  this=CacheStraw  sig=csp ====
int *__thiscall Delegate::ClearVectorAndStraw(CacheStraw *this, char a2)
{
  Vector::Clear((int)&this->__pad_0[12]); /*0x52ae76*/
  Straw::Dtor((Straw *)this); /*0x52ae7d*/
  if ( (a2 & 1) != 0 ) /*0x52ae87*/
    __3_YAXPAX_Z(this); /*0x52ae8a*/
  return (int *)this->__pad_0; /*0x52ae94*/
}



// ==== 0x0052AEA0  Base64Straw::DestroyStraw  this=Base64Straw  sig=csp ====
int *__thiscall Delegate::DestroyStraw(Base64Straw *this, char a2)
{
  Straw::Dtor((Straw *)this); /*0x52aea3*/
  if ( (a2 & 1) != 0 ) /*0x52aead*/
    __3_YAXPAX_Z(this); /*0x52aeb0*/
  return (int *)this->__pad_0; /*0x52aeba*/
}



// ==== 0x0052AEC0  KeyValuePair::Init  this=KeyValuePair  sig=csp ====
_DWORD *__thiscall KeyValuePair::Init(KeyValuePair *this, int a2)
{
  *this = (KeyValuePair)a2; /*0x52aec6*/
  *((_DWORD *)this + 1) = 0; /*0x52aeca*/
  *((_DWORD *)this + 2) = 0; /*0x52aecd*/
  return this; /*0x52aed0*/
}



// ==== 0x0052AEE0  Base64Pipe::DestroyPipe  this=Base64Pipe  sig=csp ====
int *__thiscall Delegate::DestroyPipe(Base64Pipe *this, char a2)
{
  Pipe::Dtor((Pipe *)this); /*0x52aee3*/
  if ( (a2 & 1) != 0 ) /*0x52aeed*/
    __3_YAXPAX_Z(this); /*0x52aef0*/
  return (int *)this->__pad_0; /*0x52aefa*/
}



// ==== 0x0052AF00  INIClass::findSection  this=INIEntry@INIClass  sig=csp ====
_DWORD *__thiscall INIClass::findSection(INIClass *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  this->headNode[0] = 0; /*0x52af08*/
  this->headNode[1] = 0; /*0x52af0b*/
  this->sectionHead[0] = a3; /*0x52af12*/
  this->headNode[2] = a2; /*0x52af19*/
  this->sectionHead[2] = a5; /*0x52af20*/
  this->sectionHead[1] = a4; /*0x52af27*/
  *(_DWORD *)this->__pad_20 = a8; /*0x52af2e*/
  this->sectionCount = a7; /*0x52af31*/
  *(_DWORD *)&this->__pad_20[4] = a6; /*0x52af38*/
  *(_DWORD *)this->__pad_0 = &INIClass::INIEntry::`vftable'; /*0x52af3b*/
  return this->__pad_0; /*0x52af41*/
}



// ==== 0x0052AF50  INIClass::sectionExists  this=GenericList  sig=csp ====
_DWORD *__thiscall INIClass::sectionExists(INIClass *this)
{
  _DWORD *result; // eax
  int *sectionHead; // edx
  int v3; // ebx
  int v4; // edi
  int v5; // edi
  int v6; // edi

  result = this->__pad_0; /*0x52af50*/
  sectionHead = this->sectionHead; /*0x52af59*/
  this->headNode[1] = 0; /*0x52af5f*/
  this->headNode[2] = 0; /*0x52af62*/
  this->headNode[0] = (int)&GenericNode::`vftable'; /*0x52af65*/
  this->sectionHead[1] = 0; /*0x52af6b*/
  this->sectionHead[2] = 0; /*0x52af6e*/
  this->sectionHead[0] = (int)&GenericNode::`vftable'; /*0x52af71*/
  *(_DWORD *)this->__pad_0 = &GenericList::`vftable'; /*0x52af77*/
  if ( this != (INIClass *)-16 ) /*0x52af7d*/
  {
    v3 = this->sectionHead[1]; /*0x52af7f*/
    if ( v3 ) /*0x52af84*/
    {
      v4 = this->sectionHead[2]; /*0x52af86*/
      if ( v4 ) /*0x52af8b*/
      {
        *(_DWORD *)(v4 + 4) = v3; /*0x52af8d*/
        *(_DWORD *)(this->sectionHead[1] + 8) = this->sectionHead[2]; /*0x52af96*/
        this->sectionHead[2] = 0; /*0x52af99*/
        this->sectionHead[1] = 0; /*0x52af9c*/
      }
    }
  }
  v5 = this->headNode[1]; /*0x52af9f*/
  this->sectionHead[2] = (int)this->headNode; /*0x52afa2*/
  this->sectionHead[1] = v5; /*0x52afa5*/
  v6 = this->headNode[1]; /*0x52afa8*/
  if ( v6 ) /*0x52afad*/
    *(_DWORD *)(v6 + 8) = sectionHead; /*0x52afaf*/
  this->headNode[1] = (int)sectionHead; /*0x52afb2*/
  *(_DWORD *)this->__pad_0 = &List<INIClass::INIEntry *>::`vftable'; /*0x52afb7*/
  return result; /*0x52afb5*/
}



// ==== 0x0052AFC0  WarheadTypeClass::ReadParticleSystems  this=GenericList  sig=csp ====
_DWORD *__thiscall WarheadTypeClass::ReadParticleSystems(WarheadTypeClass *this, char a2)
{
  _DWORD *WarheadTypeClass_field_0x8; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // edx
  int v7; // ecx
  void *v8; // edx
  _DWORD *WarheadTypeClass_field_0xC; // ecx

  this->Deform = &GenericList::`vftable'; /*0x52afc6*/
  while ( 1 ) /*0x52afcc*/
  {
    WarheadTypeClass_field_0x8 = this->WarheadTypeClass_field_0x8; /*0x52afcc*/
    if ( !WarheadTypeClass_field_0x8 ) /*0x52afd1*/
      break; /*0x52afd1*/
    if ( !WarheadTypeClass_field_0x8[1] ) /*0x52afd3*/
      break; /*0x52afd3*/
    v4 = WarheadTypeClass_field_0x8[2]; /*0x52afd8*/
    if ( !v4 ) /*0x52afdd*/
      break; /*0x52afdd*/
    v5 = WarheadTypeClass_field_0x8[1]; /*0x52afe3*/
    if ( v5 ) /*0x52afe8*/
    {
      *(_DWORD *)(v4 + 4) = v5; /*0x52afee*/
      *(_DWORD *)(WarheadTypeClass_field_0x8[1] + 8) = WarheadTypeClass_field_0x8[2]; /*0x52aff7*/
      WarheadTypeClass_field_0x8[2] = 0; /*0x52affa*/
      WarheadTypeClass_field_0x8[1] = 0; /*0x52affd*/
    }
  }
  this->WarheadTypeClass_field_0x10 = &GenericNode::`vftable'; /*0x52b007*/
  if ( this != (WarheadTypeClass *)-16 ) /*0x52b00d*/
  {
    v6 = this->AnimList[0]; /*0x52b00f*/
    if ( v6 ) /*0x52b014*/
    {
      v7 = this->InfDeath[0]; /*0x52b016*/
      if ( v7 ) /*0x52b01b*/
      {
        *(_DWORD *)(v7 + 4) = v6; /*0x52b01d*/
        *(_DWORD *)(this->AnimList[0] + 8) = this->InfDeath[0]; /*0x52b026*/
        this->InfDeath[0] = 0; /*0x52b029*/
        this->AnimList[0] = 0; /*0x52b02c*/
      }
    }
  }
  this->WarheadTypeClass_field_0x4 = &GenericNode::`vftable'; /*0x52b034*/
  if ( this != (WarheadTypeClass *)-4 ) /*0x52b03a*/
  {
    v8 = this->WarheadTypeClass_field_0x8; /*0x52b03c*/
    if ( v8 ) /*0x52b041*/
    {
      WarheadTypeClass_field_0xC = this->WarheadTypeClass_field_0xC; /*0x52b043*/
      if ( WarheadTypeClass_field_0xC ) /*0x52b048*/
      {
        WarheadTypeClass_field_0xC[1] = v8; /*0x52b04a*/
        *((_DWORD *)this->WarheadTypeClass_field_0x8 + 2) = this->WarheadTypeClass_field_0xC; /*0x52b053*/
        this->WarheadTypeClass_field_0xC = 0; /*0x52b056*/
        this->WarheadTypeClass_field_0x8 = 0; /*0x52b059*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x52b061*/
    __3_YAXPAX_Z(this); /*0x52b064*/
  return &this->Deform; /*0x52b06e*/
}



// ==== 0x0052B080  INIClass::getValue  this=INIClass  sig=csp ====
_DWORD *__thiscall INIClass::getValue(INIClass *this)
{
  *(_DWORD *)this->__pad_0 = 0; /*0x52b084*/
  this->headNode[0] = 0; /*0x52b086*/
  this->headNode[1] = 0; /*0x52b089*/
  LOBYTE(this->headNode[2]) = 0; /*0x52b08c*/
  this->sectionHead[0] = 0; /*0x52b08f*/
  return this->__pad_0; /*0x52b092*/
}



// ==== 0x0052B0A0  INIClass::setValue  this=INIClass  sig=csp ====
char __thiscall sub_52B0A0(int this, _DWORD *a2, _DWORD *a3)
{
  int v4; // eax
  int v5; // ebx
  char *v6; // edi
  int i; // ecx
  int v8; // eax
  _DWORD *v9; // edx
  int v10; // eax
  int v11; // eax

  v4 = *(_DWORD *)(this + 8); /*0x52b0aa*/
  if ( *(_DWORD *)(this + 4) + 1 <= v4 ) /*0x52b0b0*/
  {
LABEL_9:
    *(_DWORD *)(*(_DWORD *)this + 8 * *(_DWORD *)(this + 4)) = *a2; /*0x52b12b*/
    *(_DWORD *)(*(_DWORD *)this + 8 * *(_DWORD *)(this + 4) + 4) = *a3; /*0x52b145*/
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
  v6 = (char *)__2_YAPAXI_Z(8 * (v4 + v5)); /*0x52b0d7*/
  if ( v6 ) /*0x52b0de*/
  {
    for ( i = 0; i < *(_DWORD *)(this + 4); *(_DWORD *)&v6[v8 + 4] = v9[1] ) /*0x52b0ec*/
    {
      v8 = 8 * i; /*0x52b0f0*/
      v9 = (_DWORD *)(*(_DWORD *)this + 8 * i++); /*0x52b0f9*/
      *(_DWORD *)&v6[v8] = *v9; /*0x52b0fe*/
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



// ==== 0x0052B170  SortedArray::Find  this=HashTable  sig=csp ====
int __thiscall SortedArray::Find(int *this, int *a2)
{
  int result; // eax
  size_t v4; // ecx
  int v5; // ecx
  int v6; // ebp
  int v7; // edi
  int v8; // esi
  int v9; // edx

  v4 = this->q004; /*0x52b175*/
  if ( !v4 ) /*0x52b17b*/
    goto LABEL_13; /*0x52b17b*/
  result = this->q004; /*0x52b17d*/
  if ( result ) /*0x52b186*/
  {
    result = *(_DWORD *)result; /*0x52b188*/
    if ( result == *a2 ) /*0x52b18e*/
    {
      LOBYTE(result) = 1; /*0x52b193*/
      return result; /*0x52b196*/
    }
  }
  if ( !this->q00C ) /*0x52b199*/
  {
    result = qsort((void *)*this, v4, 8u, CompareFunc3Int); /*0x52b1ab*/
    this->q004 = 0; /*0x52b1b3*/
    this->q00C = 1; /*0x52b1ba*/
  }
  v5 = this->q004; /*0x52b1be*/
  v6 = *a2; /*0x52b1c1*/
  v7 = *this; /*0x52b1c3*/
  if ( v5 <= 0 ) /*0x52b1c7*/
    goto LABEL_13; /*0x52b1c7*/
  while ( 1 ) /*0x52b1ce*/
  {
    result = v5 / 2; /*0x52b1ce*/
    v8 = *(_DWORD *)(v7 + 8 * (v5 / 2)); /*0x52b1d0*/
    v9 = v7 + 8 * (v5 / 2); /*0x52b1d3*/
    if ( v8 <= v6 ) /*0x52b1d8*/
      break; /*0x52b1d8*/
    v5 /= 2; /*0x52b1da*/
LABEL_12:
    if ( v5 <= 0 ) /*0x52b1ec*/
      goto LABEL_13; /*0x52b1ec*/
  }
  if ( v8 != v6 ) /*0x52b1de*/
  {
    v7 = v9 + 8; /*0x52b1e0*/
    v5 += -1 - result; /*0x52b1e8*/
    goto LABEL_12; /*0x52b1e8*/
  }
  if ( !v9 ) /*0x52b1f9*/
  {
LABEL_13:
    LOBYTE(result) = 0; /*0x52b1ee*/
    return result; /*0x52b1f4*/
  }
  this->q004 = v9; /*0x52b1fd*/
  LOBYTE(result) = 1; /*0x52b201*/
  return result; /*0x52b190*/
}



// ==== 0x0052B210  SortedArray::BinarySearch2  this=ObjectClass  sig=csp ====
void *__thiscall SortedArray_BinarySearch2(int this, int *a2)
{
  size_t v3; // ecx
  _DWORD *v4; // eax
  int v5; // ecx
  int v6; // ebp
  _DWORD *v7; // edi
  int v8; // esi
  char *v9; // edx

  v3 = *(_DWORD *)(this + 4); /*0x52b215*/
  if ( !v3 ) /*0x52b21b*/
    return &unk_B78830; /*0x52b21b*/
  v4 = *(_DWORD **)(this + 16); /*0x52b21d*/
  if ( v4 && *v4 == *a2 ) /*0x52b22e*/
    return (void *)(*(_DWORD *)(this + 16) + 4); /*0x52b29e*/
  if ( !*(_BYTE *)(this + 12) ) /*0x52b230*/
  {
    qsort(*(void **)this, v3, 8u, CompareFunc3Int); /*0x52b242*/
    *(_DWORD *)(this + 16) = 0; /*0x52b24a*/
    *(_BYTE *)(this + 12) = 1; /*0x52b251*/
  }
  v5 = *(_DWORD *)(this + 4); /*0x52b255*/
  v6 = *a2; /*0x52b258*/
  v7 = *(_DWORD **)this; /*0x52b25a*/
  if ( v5 <= 0 ) /*0x52b25e*/
    return &unk_B78830; /*0x52b25e*/
  while ( 1 ) /*0x52b267*/
  {
    v8 = v7[2 * (v5 / 2)]; /*0x52b267*/
    v9 = (char *)&v7[2 * (v5 / 2)]; /*0x52b26a*/
    if ( v8 <= v6 ) /*0x52b26f*/
      break; /*0x52b26f*/
    v5 /= 2; /*0x52b271*/
LABEL_11:
    if ( v5 <= 0 ) /*0x52b283*/
      return &unk_B78830; /*0x52b283*/
  }
  if ( v8 != v6 ) /*0x52b275*/
  {
    v7 = v9 + 8; /*0x52b277*/
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



// ==== 0x0052B390  HashTable::BinarySearch  this=VoxelStruct  sig=csp ====
int __thiscall HashTable::BinarySearch(int *this, int *a2)
{
  int result; // eax
  size_t v4; // ecx
  int v5; // ecx
  int v6; // ebp
  int v7; // edi
  int v8; // esi
  int v9; // edx

  v4 = *(this + 1); /*0x52b395*/
  if ( !v4 ) /*0x52b39b*/
    goto LABEL_13; /*0x52b39b*/
  result = *(this + 4); /*0x52b39d*/
  if ( result ) /*0x52b3a6*/
  {
    result = *(_DWORD *)result; /*0x52b3a8*/
    if ( result == *a2 ) /*0x52b3ae*/
    {
      LOBYTE(result) = 1; /*0x52b3b3*/
      return result; /*0x52b3b6*/
    }
  }
  if ( !*((_BYTE *)this + 12) ) /*0x52b3b9*/
  {
    result = qsort((void *)*this, v4, 8u, CompareFunc4Int); /*0x52b3cb*/
    *(this + 4) = 0; /*0x52b3d3*/
    *((_BYTE *)this + 12) = 1; /*0x52b3da*/
  }
  v5 = *(this + 1); /*0x52b3de*/
  v6 = *a2; /*0x52b3e1*/
  v7 = *this; /*0x52b3e3*/
  if ( v5 <= 0 ) /*0x52b3e7*/
    goto LABEL_13; /*0x52b3e7*/
  while ( 1 ) /*0x52b3ee*/
  {
    result = v5 / 2; /*0x52b3ee*/
    v8 = *(_DWORD *)(v7 + 8 * (v5 / 2)); /*0x52b3f0*/
    v9 = v7 + 8 * (v5 / 2); /*0x52b3f3*/
    if ( v8 <= v6 ) /*0x52b3f8*/
      break; /*0x52b3f8*/
    v5 /= 2; /*0x52b3fa*/
LABEL_12:
    if ( v5 <= 0 ) /*0x52b40c*/
      goto LABEL_13; /*0x52b40c*/
  }
  if ( v8 != v6 ) /*0x52b3fe*/
  {
    v7 = v9 + 8; /*0x52b400*/
    v5 += -1 - result; /*0x52b408*/
    goto LABEL_12; /*0x52b408*/
  }
  if ( !v9 ) /*0x52b419*/
  {
LABEL_13:
    LOBYTE(result) = 0; /*0x52b40e*/
    return result; /*0x52b414*/
  }
  *(this + 4) = v9; /*0x52b41d*/
  LOBYTE(result) = 1; /*0x52b421*/
  return result; /*0x52b3b0*/
}



// ==== 0x0052B430  SortedArray::FindValue  this=SortedArray  sig=csp ====
void *__thiscall SortedArray::FindValue(SortedArray *this, int *a2)
{
  size_t SortedArray_field_0x04; // ecx
  _DWORD *SortedArray_field_0x10; // eax
  int v5; // ecx
  int v6; // ebp
  int v7; // edi
  int v8; // esi
  int v9; // edx

  SortedArray_field_0x04 = this->SortedArray_field_0x04; /*0x52b435*/
  if ( !SortedArray_field_0x04 ) /*0x52b43b*/
    return &unk_B7882C; /*0x52b43b*/
  SortedArray_field_0x10 = (_DWORD *)this->SortedArray_field_0x10; /*0x52b43d*/
  if ( SortedArray_field_0x10 && *SortedArray_field_0x10 == *a2 ) /*0x52b44e*/
    return (void *)(this->SortedArray_field_0x10 + 4); /*0x52b4be*/
  if ( !LOBYTE(this->SortedArray_field_0x0C) ) /*0x52b450*/
  {
    qsort( /*0x52b462*/
      *(void **)this->__pad_0,
      SortedArray_field_0x04,
      8u,
      (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc4Int);
    this->SortedArray_field_0x10 = 0; /*0x52b46a*/
    LOBYTE(this->SortedArray_field_0x0C) = 1; /*0x52b471*/
  }
  v5 = this->SortedArray_field_0x04; /*0x52b475*/
  v6 = *a2; /*0x52b478*/
  v7 = *(_DWORD *)this->__pad_0; /*0x52b47a*/
  if ( v5 <= 0 ) /*0x52b47e*/
    return &unk_B7882C; /*0x52b47e*/
  while ( 1 ) /*0x52b487*/
  {
    v8 = *(_DWORD *)(v7 + 8 * (v5 / 2)); /*0x52b487*/
    v9 = v7 + 8 * (v5 / 2); /*0x52b48a*/
    if ( v8 <= v6 ) /*0x52b48f*/
      break; /*0x52b48f*/
    v5 /= 2; /*0x52b491*/
LABEL_11:
    if ( v5 <= 0 ) /*0x52b4a3*/
      return &unk_B7882C; /*0x52b4a3*/
  }
  if ( v8 != v6 ) /*0x52b495*/
  {
    v7 = v9 + 8; /*0x52b497*/
    v5 += -1 - v5 / 2; /*0x52b49f*/
    goto LABEL_11; /*0x52b49f*/
  }
  if ( v9 ) /*0x52b4b3*/
  {
    this->SortedArray_field_0x10 = v9; /*0x52b4b5*/
    return (void *)(this->SortedArray_field_0x10 + 4); /*0x52b4b5*/
  }
  return &unk_B7882C; /*0x52b4a5*/
}



// ==== 0x0052B4D0  INIClass::deleteKey  this=INIClass  sig=csp ====
bool __thiscall INIClass::deleteKey(INIClass *this, _DWORD *a2)
{
  _DWORD *v2; // eax

  v2 = (_DWORD *)this->sectionHead[0]; /*0x52b4d0*/
  return v2 && *v2 == *a2; /*0x52b4e3*/
}



// ==== 0x0052B4F0  HashTable::BinarySearchAlt  this=HashTable  sig=csp ====
int __thiscall HashTable::BinarySearchAlt(HashTable *this, int *a2)
{
  int result; // eax
  int v4; // edi
  int v5; // ebx
  int HashTable_field_0x04; // ecx
  int v7; // esi

  result = this->HashTable_field_0x04; /*0x52b4f3*/
  if ( result ) /*0x52b4f8*/
  {
    if ( !LOBYTE(this->HashTable_field_0x0C) ) /*0x52b4fe*/
    {
      qsort(*(void **)this->__pad_0, result, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc3Int); /*0x52b510*/
      this->HashTable_field_0x10 = 0; /*0x52b518*/
      LOBYTE(this->HashTable_field_0x0C) = 1; /*0x52b51f*/
    }
    v4 = *(_DWORD *)this->__pad_0; /*0x52b529*/
    v5 = *a2; /*0x52b52b*/
    HashTable_field_0x04 = this->HashTable_field_0x04; /*0x52b52d*/
    if ( HashTable_field_0x04 <= 0 ) /*0x52b532*/
      return 0; /*0x52b55e*/
    while ( 1 ) /*0x52b53b*/
    {
      v7 = *(_DWORD *)(v4 + 8 * (HashTable_field_0x04 / 2)); /*0x52b53b*/
      if ( v7 <= v5 ) /*0x52b543*/
      {
        if ( v7 == v5 ) /*0x52b549*/
          return v4 + 8 * (HashTable_field_0x04 / 2); /*0x52b563*/
        v4 += 8 * (HashTable_field_0x04 / 2) + 8; /*0x52b54b*/
        HashTable_field_0x04 += -1 - HashTable_field_0x04 / 2; /*0x52b553*/
      }
      else
      {
        HashTable_field_0x04 /= 2; /*0x52b545*/
      }
      if ( HashTable_field_0x04 <= 0 ) /*0x52b557*/
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



// ==== 0x0052B600  SortedArray::CheckCache  this=SortedArray  sig=csp ====
int __thiscall SortedArray::CheckCache(SortedArray *this, _DWORD *a2)
{
  int result; // eax

  result = this->SortedArray_field_0x10; /*0x52b600*/
  LOBYTE(result) = result && (result = *(_DWORD *)result, result == *a2); /*0x52b611*/
  return result; /*0x52b613*/
}



// ==== 0x0052B620  SortedArray::BinarySearch  this=SortedArray  sig=csp ====
int __thiscall SortedArray::BinarySearch(SortedArray *this, int *a2)
{
  int result; // eax
  int v4; // edi
  int v5; // ebx
  int SortedArray_field_0x04; // ecx
  int v7; // esi

  result = this->SortedArray_field_0x04; /*0x52b623*/
  if ( result ) /*0x52b628*/
  {
    if ( !LOBYTE(this->SortedArray_field_0x0C) ) /*0x52b62e*/
    {
      qsort(*(void **)this->__pad_0, result, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc4Int); /*0x52b640*/
      this->SortedArray_field_0x10 = 0; /*0x52b648*/
      LOBYTE(this->SortedArray_field_0x0C) = 1; /*0x52b64f*/
    }
    v4 = *(_DWORD *)this->__pad_0; /*0x52b659*/
    v5 = *a2; /*0x52b65b*/
    SortedArray_field_0x04 = this->SortedArray_field_0x04; /*0x52b65d*/
    if ( SortedArray_field_0x04 <= 0 ) /*0x52b662*/
      return 0; /*0x52b68e*/
    while ( 1 ) /*0x52b66b*/
    {
      v7 = *(_DWORD *)(v4 + 8 * (SortedArray_field_0x04 / 2)); /*0x52b66b*/
      if ( v7 <= v5 ) /*0x52b673*/
      {
        if ( v7 == v5 ) /*0x52b679*/
          return v4 + 8 * (SortedArray_field_0x04 / 2); /*0x52b693*/
        v4 += 8 * (SortedArray_field_0x04 / 2) + 8; /*0x52b67b*/
        SortedArray_field_0x04 += -1 - SortedArray_field_0x04 / 2; /*0x52b683*/
      }
      else
      {
        SortedArray_field_0x04 /= 2; /*0x52b675*/
      }
      if ( SortedArray_field_0x04 <= 0 ) /*0x52b687*/
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



// ==== 0x0052B6D0  UI_Find  this=HashTable  sig=csp ====
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
int __cdecl CompareFunc4Int(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x52b730*/
  else
    return *a1 >= *a2 ? 1 : -1;
}



// ==== 0x0052B750  System_Search  this=-  sig=csp ====
int __fastcall sub_52B750(int a1, int a2, int *a3)
{
  int v3; // esi
  int v4; // ebx
  int v5; // edi

  v3 = a2; /*0x52b755*/
  if ( a2 <= 0 ) /*0x52b757*/
    return 0; /*0x52b789*/
  v4 = *a3; /*0x52b75d*/
  while ( 1 ) /*0x52b766*/
  {
    v5 = *(_DWORD *)(a1 + 8 * (v3 / 2)); /*0x52b766*/
    if ( v5 <= v4 ) /*0x52b76e*/
      break; /*0x52b76e*/
    v3 /= 2; /*0x52b770*/
LABEL_7:
    if ( v3 <= 0 ) /*0x52b782*/
      return 0; /*0x52b782*/
  }
  if ( v5 != v4 ) /*0x52b774*/
  {
    a1 += 8 * (v3 / 2) + 8; /*0x52b776*/
    v3 += -1 - v3 / 2; /*0x52b77e*/
    goto LABEL_7; /*0x52b77e*/
  }
  return a1 + 8 * (v3 / 2); /*0x52b784*/
}



// ==== 0x0052B7A0  sub_52B7A0  this=-  sig=ida-proto ====
int sub_52B7A0()
{
  dword_A8F2E8 = 0; /*0x52b7a2*/
  dword_A8F2EC = 0; /*0x52b7a7*/
  dword_A8F2F0 = 0; /*0x52b7ac*/
  dword_A8F2F4 = 0; /*0x52b7b1*/
  return 0; /*0x52b7b6*/
}



// ==== 0x0052B7C0  sub_52B7C0  this=-  sig=ida-proto ====
void sub_52B7C0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x52b7cc*/
  dbl_A8F418 = Math::Sqrt(v0 + v0); /*0x52b7de*/
}



// ==== 0x0052B7F0  sub_52B7F0  this=-  sig=ida-proto ====
void sub_52B7F0()
{
  dbl_A8F778 = dbl_A8F418 / 60.0; /*0x52b7fc*/
}



// ==== 0x0052B810  sub_52B810  this=-  sig=ida-proto ====
void sub_52B810()
{
  dbl_A8F760 = 1.0 / dbl_A8F778; /*0x52b81c*/
}



// ==== 0x0052B830  sub_52B830  this=-  sig=ida-proto ====
void sub_52B830()
{
  dbl_A8F758 = 0.0174532925199433 * 45.0; /*0x52b83c*/
}



// ==== 0x0052B850  sub_52B850  this=-  sig=ida-proto ====
void sub_52B850()
{
  dbl_A8F5A0 = 0.0174532925199433 * 60.0; /*0x52b85c*/
}



// ==== 0x0052B870  sub_52B870  this=-  sig=ida-proto ====
void sub_52B870()
{
  dbl_A8F2E0 = 0.0174532925199433 * 90.0; /*0x52b87c*/
}



// ==== 0x0052B890  sub_52B890  this=-  sig=ida-proto ====
__int64 sub_52B890()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_A8F2E0 - dbl_A8F5A0); /*0x52b8a2*/
  result = Math::RoundToInt(v0 * dbl_A8F418 * 0.5); /*0x52b8b6*/
  dword_A8F780 = result; /*0x52b8bb*/
  return result; /*0x52b8c0*/
}



// ==== 0x0052B8D0  sub_52B8D0  this=-  sig=ida-proto ====
void sub_52B8D0()
{
  dbl_A8F5A8 = Math::ArcTan((double)dword_A8F780 * 0.00390625); /*0x52b8e7*/
}



// ==== 0x0052B900  sub_52B900  this=-  sig=ida-proto ====
void sub_52B900()
{
  dbl_A8F648 = Math::ArcTan((double)(2 * dword_A8F780) / dbl_A8F418); /*0x52b922*/
}



// ==== 0x0052B930  sub_52B930  this=-  sig=ida-proto ====
__int64 sub_52B930()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_A8F780) + 0.5); /*0x52b94b*/
  dword_A8F774 = result; /*0x52b950*/
  return result; /*0x52b956*/
}



// ==== 0x0052B960  sub_52B960  this=-  sig=ida-proto ====
int sub_52B960()
{
  word_A8F2F8 = 0; /*0x52b962*/
  word_A8F2FA = 0; /*0x52b968*/
  return 0; /*0x52b96e*/
}



// ==== 0x0052B970  sub_52B970  this=-  sig=ida-proto ====
int sub_52B970()
{
  dword_A8F638 = 0; /*0x52b972*/
  dword_A8F63C = 0; /*0x52b977*/
  dword_A8F640 = 0; /*0x52b97c*/
  return 0; /*0x52b981*/
}



// ==== 0x0052B990  sub_52B990  this=-  sig=ida-proto ====
int sub_52B990()
{
  dword_A8F770 = 0; /*0x52b995*/
  dword_A8F768 = 128; /*0x52b99f*/
  dword_A8F76C = 128; /*0x52b9a4*/
  return 128; /*0x52b9a9*/
}



// ==== 0x0052B9B0  BINK::Background_Setup  this=BINK  sig=csp ====
int __thiscall BINK::Background_Setup(BINK *this)
{
  int result; // eax
  HWND v2; // esi
  int v3; // ecx
  int v4; // eax

  result = (int)GetDlgItem((HWND)this, 1818); /*0x52b9b8*/
  v2 = (HWND)result; /*0x52b9be*/
  if ( result ) /*0x52b9c2*/
  {
    if ( (int)g_DisplayWidth > 800 ) /*0x52b9d2*/
      v3 = (int)&g_DisplayWidth[-13].LoadingScreen_field_0x20 / 2; /*0x52b9e2*/
    else
      v3 = 0; /*0x52b9d4*/
    if ( (int)*(&g_DisplayWidth + 1) > 600 ) /*0x52b9ee*/
      v4 = (int)&(*(&g_DisplayWidth + 1))[-10].LoadingScreen_field_0x28 / 2; /*0x52b9fc*/
    else
      v4 = 0; /*0x52b9f0*/
    SetWindowPos(v2, 0, v3, v4, -1, -1, 0xDu); /*0x52ba09*/
    SendMessageA(v2, 0x4E3u, 1u, 0); /*0x52ba1f*/
    if ( g_DisplayWidth == (LoadingScreen *)640 ) /*0x52ba2b*/
      return SendMessageA(v2, 0x4E4u, 0, (LPARAM)aRa2tsS); /*0x52ba3a*/
    else
      return SendMessageA(v2, 0x4E4u, 0, (LPARAM)aRa2tsL); /*0x52ba4c*/
  }
  return result; /*0x52ba3c*/
}



// ==== 0x0052BA60  ObjectClass::InitGame  this=ObjectClass  sig=csp ====
int __usercall InitGame@<eax>(double a1@<st1>, double a2@<st0>)
{
  ScenarioClass *v2; // eax
  int v3; // ebx
  RulesClass *v5; // eax
  TextBuffer *TextBufferEntry; // eax
  BitTextClass *v7; // eax
  void *v8; // eax
  int i; // edi
  char *v10; // esi
  _BYTE *v11; // eax
  void *v12; // eax
  int j; // edi
  char *v14; // esi
  _BYTE *v15; // eax
  void *v16; // eax
  int k; // edi
  char *v18; // esi
  _BYTE *v19; // eax
  int v20; // edi
  char *v21; // esi
  _BYTE *v22; // eax
  char *v23; // ecx
  ConvertClass *v24; // eax
  void *v25; // eax
  int m; // edi
  int v27; // eax
  _BYTE *v28; // esi
  _BYTE *v29; // eax
  ConvertClass *v30; // eax
  void *v31; // eax
  int n; // edi
  int v33; // eax
  _BYTE *v34; // esi
  _BYTE *v35; // eax
  ConvertClass *v36; // eax
  void *v37; // eax
  int ii; // edi
  int v39; // eax
  _BYTE *v40; // esi
  _BYTE *v41; // eax
  ConvertClass *v42; // eax
  void *v43; // eax
  int jj; // edi
  int v45; // eax
  _BYTE *v46; // esi
  _BYTE *v47;... [23904 chars total]



// ==== 0x0052CB50  PlayIntroSequence  this=-  sig=ida-proto ====
char __usercall Init::Intro@<al>(int a1@<ebx>, int a2@<ebp>, int a3@<edi>)
{
  if ( (dword_A8E960 & 4) != 0 ) /*0x52cb57*/
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
char sub_52CB90()
{
  HANDLE FirstFileA; // esi
  char *cAlternateFileName; // ebp
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // edi
  char result; // al
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  _DWORD *v8; // edi
  char v9; // [esp+Fh] [ebp-1B1h]
  HANDLE v10; // [esp+10h] [ebp-1B0h]
  _DWORD v11[22]; // [esp+14h] [ebp-1ACh] BYREF
  _BYTE v12[12]; // [esp+6Ch] [ebp-154h] BYREF
  int v13; // [esp+78h] [ebp-148h]
  struct _WIN32_FIND_DATAA FindFileData; // [esp+80h] [ebp-140h] BYREF

  v9 = 0; /*0x52cba5*/
  FirstFileA = FindFirstFileA(aBattlemdIni, &FindFileData); /*0x52cbaf*/
  v10 = FirstFileA; /*0x52cbb4*/
  if ( FirstFileA == (HANDLE)-1 ) /*0x52cbb8*/
    goto LABEL_15; /*0x52cbb8*/
  do /*0x52ccab*/
  {
    if ( (FindFileData.dwFileAttributes & 0x116) == 0 ) /*0x52cbca*/
    {
      cAlternateFileName = FindFileData.cAlternateFileName; /*0x52cbdc*/
      if ( !strlen(FindFileData.cAlternateFileName) ) /*0x52cbe3*/
        cAlternateFileName = FindFileData.cFileName; /*0x52cbea*/
      CCFileClass::Construct(v11, cAlternateFileName); /*0x52cbf6*/
      v2 = __2_YAPAXI_Z(0x58u); /*0x52cbfd*/
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
      CCINIClass::Load(v11, 0, 0); /*0x52cc49*/
      if ( !_strcmpi(cAlternateFileName, aBattlemdIni_0) ) /*0x52cc54*/
        v9 = 1; /*0x52cc60*/
      CampaignClass::LoadFromINIList(v3); /*0x52cc67*/
      if ( v3 ) /*0x52cc6e*/
        (*(void (__thiscall **)(_DWORD *, int))*v3)(v3, 1); /*0x52cc76*/
      v11[0] = &CCFileClass::`vftable'; /*0x52cc7c*/
      v13 = 0; /*0x52cc84*/
      Vector::Clear(v12); /*0x52cc88*/
      v11[0] = &off_7E1668; /*0x52cc91*/
      BufferIOFileClass::Dtor(v11); /*0x52cc99*/
      FirstFileA = v10; /*0x52cc9e*/
    }
  }
  while ( FindNextFileA(FirstFileA, &FindFileData) ); /*0x52ccab*/
  FindClose(FirstFileA); /*0x52ccba*/
  result = v9; /*0x52ccc0*/
  if ( !v9 ) /*0x52ccc7*/
  {
LABEL_15:
    CCFileClass::Construct(v11, aBattlemdIni_0); /*0x52ccd6*/
    v6 = __2_YAPAXI_Z(0x58u); /*0x52ccdd*/
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
      CCINIClass::Load(v11, 0, 0); /*0x52cd25*/
      CampaignClass::LoadFromINIList(v7); /*0x52cd2c*/
      (*(void (__thiscall **)(_DWORD *, int))*v7)(v7, 1); /*0x52cd37*/
    }
    v11[0] = &CCFileClass::`vftable'; /*0x52cd3d*/
    v13 = 0; /*0x52cd45*/
    Vector::Clear(v12); /*0x52cd49*/
    v11[0] = &off_7E1668; /*0x52cd52*/
    return BufferIOFileClass::Dtor(v11); /*0x52cd5a*/
  }
  return result; /*0x52cd5f*/
}



// ==== 0x0052CD70  ObjectClass::InitRules  this=ObjectClass  sig=csp ====
char InitRules(ObjectClass *this)
{
  HANDLE FirstFileA; // ebp
  char *cAlternateFileName; // edi
  INIClass *v3; // eax
  CCINIClass *v4; // esi
  int v5; // eax
  int v6; // eax
  INIClass *v7; // eax
  CCINIClass *v8; // esi
  int v9; // eax
  int v11; // eax
  INT_PTR v12; // eax
  int v13; // esi
  int v14; // eax
  void (__thiscall ***v15)(_DWORD, int); // ecx
  char v16; // [esp+13h] [ebp-309h]
  _VectorClass_PAVCCINIClass dwInitParam; // [esp+14h] [ebp-308h] BYREF
  int v18; // [esp+28h] [ebp-2F4h]
  CCINIClass v19; // [esp+2Ch] [ebp-2F0h] BYREF
  int v20[3]; // [esp+84h] [ebp-298h] BYREF
  int v21; // [esp+90h] [ebp-28Ch]
  CCFileClass v22; // [esp+98h] [ebp-284h] BYREF
  int v23[3]; // [esp+F0h] [ebp-22Ch] BYREF
  int v24; // [esp+FCh] [ebp-220h]
  CCFileClass v25; // [esp+104h] [ebp-218h] BYREF
  int v26[3]; // [esp+15Ch] [ebp-1C0h] BYREF
  int v27; // [esp+168h] [ebp-1B4h]
  CCFileClass v28; // [esp+170h] [ebp-1ACh] BYREF
  int v29[5]; // [esp+1C8h] [ebp-154h] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+1DCh] [ebp-140h] BYREF

  RulesClass::InitINIChain((RulesClass *)&dwInitParam, 0, 0); /*0x52cd82*/
  *(_DWORD *)dwInitParam.__pad_0 = &DynamicVectorClass<CCINIClass *>::`vftable'; /*0x52cd8e*/
  v18 = 10; /*0x52cd9c*/
  *(_DWORD *)dwInitParam.__tail_10 = 0; /*0x52cda4*/
  v16 = 0; /*0x52cda8*/
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
    CCFileClass::Construct((CCFileClass *)&v19, cAlternateFileName); /*0x52cdec*/
    v3 = (INIClass *)__2_YAPAXI_Z(0x58u); /*0x52cdf3*/
    v4 = (CCINIClass *)v3; /*0x52cdf8*/
    if ( v3 ) /*0x52cdff*/
    {
      INIClass::INIClass(v3); /*0x52ce03*/
      v4->ownsFile = 0; /*0x52ce08*/
      *(_DWORD *)v4->INIClass = &CCINIClass_Vtable; /*0x52ce0b*/
    }
    else
    {
      v4 = 0; /*0x52ce13*/
    }
    CCINIClass::Load(v4, (int)&v19, 0, 0); /*0x52ce1e*/
    if ( _strcmpi(cAlternateFileName, aRulesmdIni) ) /*0x52ce29*/
    {
      if ( *(int *)dwInitParam.__tail_10 < dwInitParam.m_8 /*0x52cecb*/
        || (BYTE1(dwInitParam.m_C) || !dwInitParam.m_8)
        && v18 > 0
        && (*(unsigned __int8 (__thiscall **)(_VectorClass_PAVCCINIClass *, int, _DWORD))(*(_DWORD *)dwInitParam.__pad_0
                                                                                        + 8))(
             &dwInitParam,
             v18 + dwInitParam.m_8,
             0) )
      {
        v6 = (*(_DWORD *)dwInitParam.__tail_10)++; /*0x52ced6*/
        *(_DWORD *)(*(_DWORD *)&dwInitParam.m_1[3] + 4 * v6) = v4; /*0x52cee1*/
      }
      goto LABEL_24; /*0x52cee1*/
    }
    v5 = *(_DWORD *)dwInitParam.__tail_10; /*0x52ce35*/
    v16 = 1; /*0x52ce3f*/
    if ( *(int *)dwInitParam.__tail_10 < dwInitParam.m_8 ) /*0x52ce44*/
      goto LABEL_15; /*0x52ce44*/
    if ( (BYTE1(dwInitParam.m_C) || !dwInitParam.m_8) /*0x52ce6c*/
      && v18 > 0
      && (*(unsigned __int8 (__thiscall **)(_VectorClass_PAVCCINIClass *, int, _DWORD))(*(_DWORD *)dwInitParam.__pad_0
                                                                                      + 8))(
           &dwInitParam,
           v18 + dwInitParam.m_8,
           0) )
    {
      v5 = *(_DWORD *)dwInitParam.__tail_10; /*0x52ce73*/
LABEL_15:
      if ( v5 ) /*0x52ce79*/
        memcpy((void *)(*(_DWORD *)&dwInitParam.m_1[3] + 4), *(const void **)&dwInitParam.m_1[3], 4 * v5); /*0x52ce88*/
      **(_DWORD **)&dwInitParam.m_1[3] = v4; /*0x52ce94*/
      ++*(_DWORD *)dwInitParam.__tail_10; /*0x52ce9b*/
    }
LABEL_24:
    *(_DWORD *)v19.INIClass = &CCFileClass::`vftable'; /*0x52cee4*/
    v21 = 0; /*0x52cef3*/
    Vector::Clear((int)v20); /*0x52cefa*/
    *(_DWORD *)v19.INIClass = &off_7E1668; /*0x52cf03*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v19); /*0x52cf0b*/
  }
  while ( FindNextFileA(FirstFileA, &FindFileData) ); /*0x52cf19*/
  FindClose(FirstFileA); /*0x52cf28*/
  if ( !v16 ) /*0x52cf32*/
  {
LABEL_27:
    CCFileClass::Construct((CCFileClass *)&v19, aRulesmdIni); /*0x52cf38*/
    v7 = (INIClass *)__2_YAPAXI_Z(0x58u); /*0x52cf48*/
    v8 = (CCINIClass *)v7; /*0x52cf4d*/
    if ( v7 ) /*0x52cf54*/
    {
      INIClass::INIClass(v7); /*0x52cf58*/
      v8->ownsFile = 0; /*0x52cf5d*/
      *(_DWORD *)v8->INIClass = &CCINIClass_Vtable; /*0x52cf60*/
    }
    else
    {
      v8 = 0; /*0x52cf68*/
    }
    CCINIClass::Load(v8, (int)&v19, 0, 0); /*0x52cf73*/
    v9 = *(_DWORD *)dwInitParam.__tail_10; /*0x52cf78*/
    if ( *(int *)dwInitParam.__tail_10 < dwInitParam.m_8 ) /*0x52cf82*/
    {
LABEL_36:
      if ( v9 ) /*0x52cfaf*/
        memcpy((void *)(*(_DWORD *)&dwInitParam.m_1[3] + 4), *(const void **)&dwInitParam.m_1[3], 4 * v9); /*0x52cfbe*/
      **(_DWORD **)&dwInitParam.m_1[3] = v8; /*0x52cfca*/
      ++*(_DWORD *)dwInitParam.__tail_10; /*0x52cfd1*/
    }
    else if ( (BYTE1(dwInitParam.m_C) || !dwInitParam.m_8) /*0x52cfa2*/
           && v18 > 0
           && (*(unsigned __int8 (__thiscall **)(_VectorClass_PAVCCINIClass *, int, _DWORD))(*(_DWORD *)dwInitParam.__pad_0
                                                                                           + 8))(
                &dwInitParam,
                v18 + dwInitParam.m_8,
                0) )
    {
      v9 = *(_DWORD *)dwInitParam.__tail_10; /*0x52cfa9*/
      goto LABEL_36; /*0x52cfa9*/
    }
    *(_DWORD *)v19.INIClass = &CCFileClass::`vftable'; /*0x52cfe1*/
    v21 = 0; /*0x52cfe5*/
    Vector::Clear((int)v20); /*0x52cfec*/
    *(_DWORD *)v19.INIClass = &off_7E1668; /*0x52cffa*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v19); /*0x52cffe*/
  }
  if ( *(int *)dwInitParam.__tail_10 <= 0 ) /*0x52d013*/
  {
    *(_DWORD *)dwInitParam.__pad_0 = &VectorClass<CCINIClass *>::`vftable'; /*0x52d019*/
    VectorClass_ptr_CCINIClass::ddtor(&dwInitParam); /*0x52d021*/
    return 0; /*0x52d032*/
  }
  CCFileClass::Construct(&v22, aArtmdIni); /*0x52d03f*/
  if ( !CCINIClass::Load((CCINIClass *)&DSurface_ViewBounds.__pad_FC[228], (int)&v22, 0, 0) ) /*0x52d053*/
  {
    Debug::Log(); /*0x52d061*/
    *(_DWORD *)v22.CDFileClass = &CCFileClass::`vftable'; /*0x52d070*/
    v24 = 0; /*0x52d077*/
    Vector::Clear((int)v23); /*0x52d07e*/
    *(_DWORD *)v22.CDFileClass = &off_7E1668; /*0x52d08a*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v22); /*0x52d091*/
    *(_DWORD *)dwInitParam.__pad_0 = &VectorClass<CCINIClass *>::`vftable'; /*0x52d09a*/
    VectorClass_ptr_CCINIClass::ddtor(&dwInitParam); /*0x52d0a2*/
    return 0; /*0x52d0b3*/
  }
  if ( *(_DWORD *)dwInitParam.__tail_10 == 1 ) /*0x52d0b9*/
  {
    v11 = **(_DWORD **)&dwInitParam.m_1[3]; /*0x52d0bf*/
  }
  else
  {
    v12 = DialogBoxParamA(g_hInstance, (LPCSTR)0x93, g_hWnd, (DLGPROC)ReadModConfigINI, (LPARAM)&dwInitParam); /*0x52d0df*/
    if ( v12 == -1 ) /*0x52d0e8*/
      v12 = 0; /*0x52d0ea*/
    v11 = *(_DWORD *)(*(_DWORD *)&dwInitParam.m_1[3] + 4 * v12); /*0x52d0f0*/
  }
  *(_DWORD *)&DSurface_ViewBounds.__pad_34[116] = v11; /*0x52d0fa*/
  RulesClass::ReadColors(*(RulesClass **)&DSurface_ViewBounds.__pad_FC[324]); /*0x52d0ff*/
  RulesClass::ReadColorAdd(*(RulesClass **)&DSurface_ViewBounds.__pad_FC[324]); /*0x52d111*/
  RulesClass::ReadMovies(*(RulesClass **)&DSurface_ViewBounds.__pad_FC[324]); /*0x52d121*/
  Rules::ReadMiscINI(*(Rules **)&DSurface_ViewBounds.__pad_FC[324]); /*0x52d132*/
  Dialog::ReadMultiplayerDialogSettings(*(Dialog **)&DSurface_ViewBounds.__pad_FC[324]); /*0x52d144*/
  *(_DWORD *)&stru_A8B250.__pad_0[12] = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5252); /*0x52d159*/
  *(_DWORD *)&stru_A8B250.__pad_0[32] = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5268); /*0x52d165*/
  g_RulesInitConfig = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5276); /*0x52d171*/
  *(_DWORD *)&stru_A8B250.__pad_0[24] = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5280); /*0x52d17d*/
  *(_DWORD *)&stru_A8B250.__pad_0[40] = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5284); /*0x52d189*/
  *(_DWORD *)&stru_A8B250.__pad_0[36] = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5288); /*0x52d195*/
  stru_A8B250.__pad_0[16] = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5292); /*0x52d1a1*/
  stru_A8B250.__pad_0[8] = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5295); /*0x52d1ad*/
  stru_A8B250.__pad_0[17] = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5297); /*0x52d1b9*/
  byte_A8B31E = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5298); /*0x52d1c5*/
  byte_A8B31D = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5299); /*0x52d1d1*/
  stru_A8B250.__pad_0[28] = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5300); /*0x52d1dd*/
  byte_A8B31C = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5301); /*0x52d1e9*/
  stru_A8B250.__pad_0[18] = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5302); /*0x52d1f5*/
  stru_A8B250.__pad_0[19] = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5305); /*0x52d201*/
  stru_A8B250.__pad_0[20] = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5306); /*0x52d20d*/
  byte_A8B31F = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5303); /*0x52d219*/
  dword_A8B320 = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5304); /*0x52d22c*/
  CCFileClass::Construct(&v25, aLangruleIni); /*0x52d231*/
  if ( (unsigned __int8)CCFileClass::Open(&v25, 0) == 1 ) /*0x52d245*/
  {
    INIClass::INIClass((INIClass *)&v19); /*0x52d24f*/
    v19.ownsFile = 0; /*0x52d25b*/
    *(_DWORD *)v19.INIClass = &CCINIClass_Vtable; /*0x52d267*/
    if ( CCINIClass::Load(&v19, (int)&v25, 1, 0) > 1 ) /*0x52d277*/
    {
      HashTable::DestroyHashTableINIClass((INIClass *)&v19); /*0x52d281*/
      *(_DWORD *)v25.CDFileClass = &CCFileClass::`vftable'; /*0x52d28d*/
      v27 = 0; /*0x52d294*/
      Vector::Clear((int)v26); /*0x52d29b*/
      *(_DWORD *)v25.CDFileClass = &off_7E1668; /*0x52d2a7*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v25); /*0x52d2ae*/
      *(_DWORD *)v22.CDFileClass = &CCFileClass::`vftable'; /*0x52d2ba*/
      v24 = 0; /*0x52d2c1*/
      Vector::Clear((int)v23); /*0x52d2c8*/
      *(_DWORD *)v22.CDFileClass = &off_7E1668; /*0x52d2d4*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v22); /*0x52d2db*/
      *(_DWORD *)dwInitParam.__pad_0 = &VectorClass<CCINIClass *>::`vftable'; /*0x52d2e4*/
      if ( *(_DWORD *)&dwInitParam.m_1[3] ) /*0x52d2ee*/
      {
        if ( BYTE1(dwInitParam.m_C) ) /*0x52d2f4*/
          __3_YAXPAX_Z(*(void **)&dwInitParam.m_1[3]); /*0x52d2f7*/
      }
      return 0; /*0x52d30b*/
    }
    RulesClass::Addition(*(RulesClass **)&DSurface_ViewBounds.__pad_FC[324]); /*0x52d317*/
    HashTable::DestroyHashTableINIClass((INIClass *)&v19); /*0x52d320*/
  }
  v13 = 0; /*0x52d329*/
  if ( *(int *)dwInitParam.__tail_10 > 0 ) /*0x52d32d*/
  {
    v14 = *(_DWORD *)&dwInitParam.m_1[3]; /*0x52d32f*/
    do /*0x52d355*/
    {
      v15 = *(void (__thiscall ****)(_DWORD, int))(v14 + 4 * v13); /*0x52d333*/
      if ( v15 != *(void (__thiscall ****)(_DWORD, int))&DSurface_ViewBounds.__pad_34[116] && v15 ) /*0x52d342*/
      {
        (**v15)(v15, 1); /*0x52d348*/
        v14 = *(_DWORD *)&dwInitParam.m_1[3]; /*0x52d34a*/
      }
      ++v13; /*0x52d352*/
    }
    while ( v13 < *(int *)dwInitParam.__tail_10 ); /*0x52d355*/
  }
  CCFileClass::Construct(&v28, aAimdIni); /*0x52d363*/
  CCINIClass::Load((CCINIClass *)&DSurface_ViewBounds.__pad_FC[140], (int)&v28, 1, 0); /*0x52d378*/
  *(_DWORD *)v28.CDFileClass = &CCFileClass::`vftable'; /*0x52d384*/
  v29[3] = 0; /*0x52d38b*/
  Vector::Clear((int)v29); /*0x52d392*/
  *(_DWORD *)v28.CDFileClass = &off_7E1668; /*0x52d39e*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v28); /*0x52d3a5*/
  *(_DWORD *)v25.CDFileClass = &CCFileClass::`vftable'; /*0x52d3b1*/
  v27 = 0; /*0x52d3b8*/
  Vector::Clear((int)v26); /*0x52d3bf*/
  *(_DWORD *)v25.CDFileClass = &off_7E1668; /*0x52d3cb*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v25); /*0x52d3d2*/
  *(_DWORD *)v22.CDFileClass = &CCFileClass::`vftable'; /*0x52d3de*/
  v24 = 0; /*0x52d3e5*/
  Vector::Clear((int)v23); /*0x52d3ec*/
  *(_DWORD *)v22.CDFileClass = &off_7E1668; /*0x52d3f8*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v22); /*0x52d3ff*/
  *(_DWORD *)dwInitParam.__pad_0 = &VectorClass<CCINIClass *>::`vftable'; /*0x52d408*/
  if ( *(_DWORD *)&dwInitParam.m_1[3] && BYTE1(dwInitParam.m_C) ) /*0x52d418*/
    __3_YAXPAX_Z(*(void **)&dwInitParam.m_1[3]); /*0x52d41b*/
  return 1; /*0x52d028*/
}



// ==== 0x0052D430  ReadModConfigINI  this=-  sig=csp ====
INT_PTR __stdcall sub_52D430(HWND hDlg, UINT a2, WPARAM a3, int *a4)
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
      (unsigned __int8 *)g_INI_Key_Name,
      &g_INI_DefaultBuffer,
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
      GameOptionsClass::PopulateMovieList(dword_A8EB60, DlgItem); /*0x52d8de*/
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
char MenuSelect(ObjectClass *this)
{
  double v1; // st7
  int v2; // eax
  int *p_vtable3; // edx
  int *v4; // eax
  int vtable3; // ecx
  int abstractFlags; // edx
  int v7; // edx
  int j; // edi
  int i; // eax
  int v10; // edx
  LONG v11; // esi
  int v12; // eax
  _DWORD *v13; // ecx
  int v14; // eax
  int v15; // eax
  int *StringCSF; // esi
  wchar_t *v17; // ebp
  int v18; // eax
  int v19; // eax
  LONG v20; // eax
  HWND Dialog; // eax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  LoadOptions *v25; // eax
  char v26; // bl
  _UNKNOWN **v27; // eax
  char v28; // al
  _UNKNOWN **v29; // eax
  char v30; // bl
  int v31; // eax
  int v32; // eax
  _UNKNOWN **v33; // eax
  IPXInterfaceClass *v34; // eax
  _DWORD *v35; // eax
  wchar_t *v36; // eax
  int v37; // eax
  int v38; // esi
  int Ticks; // ecx
  int v40; // esi
  int v41; // edi
  int v42; // esi
  char result; // al
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v... [31527 chars total]



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
        dword_825C7C = VocClass::FindIndex(stru_8263E0); /*0x52f002*/
        DlgItem = GetDlgItem(hDlg, 1109); /*0x52f009*/
        if ( byte_A8F7AD ) /*0x52f012*/
        {
          if ( DlgItem ) /*0x52f016*/
          {
            for ( i = 0; i < dword_A83D08; ++i ) /*0x52f021*/
              SendMessageA(DlgItem, 0x4CDu, 0, *((_DWORD *)dword_A83CFC + i) + 672); /*0x52f03a*/
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
          PostMessageA(v27, 0x405u, 1u, dword_A8EB64); /*0x52f123*/
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
        SendDlgItemMessageA(hDlg, dword_A8F7A8, 0x4D4u, 0, 0); /*0x52efbc*/
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
      if ( v31 == (HWND)dword_A8F7B0 ) /*0x52f219*/
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
            byte_ABCE08 = 0; /*0x52f28b*/
            SendDlgItemMessageA(hDlg, dword_A8F7A8, 0x4D5u, 0, 0); /*0x52f292*/
            SendDlgItemMessageA(hDlg, dword_A8F7A8, 0x4D4u, 0, 0); /*0x52f2a3*/
            v35 = GetDlgItem(hDlg, 1295); /*0x52f2ab*/
            if ( v35 ) /*0x52f2b3*/
              dword_A8EB64 = SendMessageA(v35, 0x400u, 0, 0); /*0x52f2c3*/
            if ( g_ScenarioLoadEvent != -1 ) /*0x52f2d2*/
            {
              AudioController::Stop(stru_A8F300); /*0x52f2dd*/
              PlayVocClass(g_ScenarioLoadEvent, 0x2000, 1.0, (int)stru_A8F300); /*0x52f2f7*/
              g_ScenarioLoadEvent = -1; /*0x52f2fc*/
            }
          }
        }
LABEL_86:
        if ( GetCapture() == hDlg ) /*0x52f3ce*/
          ReleaseCapture(); /*0x52f3d0*/
        dword_A8F7B0 = 0; /*0x52f3d6*/
        return 0; /*0x52f3d6*/
      }
      if ( DlgCtrlID == 1770 || DlgCtrlID == 1772 || DlgCtrlID == 1771 ) /*0x52f31d*/
      {
        if ( dword_A8F7A8 ) /*0x52f359*/
        {
          SendDlgItemMessageA(hDlg, dword_A8F7A8, 0x4D5u, 0, 0); /*0x52f364*/
          SendDlgItemMessageA(hDlg, dword_A8F7A8, 0x4D4u, 0, 0); /*0x52f375*/
        }
        SendDlgItemMessageA(hDlg, DlgCtrlID, 0x4D5u, 0, 0); /*0x52f380*/
        SendDlgItemMessageA(hDlg, DlgCtrlID, 0x4D3u, 0, 0); /*0x52f38b*/
        dword_A8F7A8 = DlgCtrlID; /*0x52f38d*/
        goto LABEL_86; /*0x52f393*/
      }
      if ( !dword_A8F7A8 ) /*0x52f326*/
        goto LABEL_86; /*0x52f326*/
    }
    else if ( !dword_A8F7A8 ) /*0x52f39c*/
    {
      goto LABEL_86; /*0x52f39c*/
    }
    SendDlgItemMessageA(hDlg, dword_A8F7A8, 0x4D5u, 0, 0); /*0x52f3ad*/
    SendDlgItemMessageA(hDlg, dword_A8F7A8, 0x4D4u, 0, 0); /*0x52f3be*/
    dword_A8F7A8 = 0; /*0x52f3c0*/
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
        PlayVocClass(dword_8871E0->ChronoInSound, 0x2000, 1.0, 0); /*0x52ef6a*/
        dword_A8F7B0 = v17; /*0x52ef70*/
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
            dword_A8EB64 = SendMessageA(v11, 0x400u, 0, 0); /*0x52ed51*/
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
  if ( dword_A8F7B0 ) /*0x52ed67*/
    return 0; /*0x52ed67*/
  GetWindowRect(hDlg, &Rect); /*0x52ed7e*/
  v36.y = HIWORD(a4) - Rect.top; /*0x52ed92*/
  v36.x = (unsigned __int16)a4 - Rect.left; /*0x52ed93*/
  v12 = ChildWindowFromPointEx(hDlg, v36, 1u); /*0x52ed95*/
  if ( !v12 ) /*0x52ed9d*/
  {
    if ( dword_A8F7A8 ) /*0x52eec2*/
    {
      SendDlgItemMessageA(hDlg, dword_A8F7A8, 0x4D5u, 0, 0); /*0x52eed9*/
      SendDlgItemMessageA(hDlg, dword_A8F7A8, 0x4D4u, 0, 0); /*0x52eeec*/
      return 0; /*0x52eef7*/
    }
    return 0; /*0x52eec2*/
  }
  v13 = GetDlgCtrlID(v12); /*0x52edb0*/
  v14 = dword_A8F7A8; /*0x52edb2*/
  if ( dword_A8F7A8 != v13 ) /*0x52edb9*/
  {
    SendDlgItemMessageA(hDlg, dword_A8F7A8, 0x4D5u, 0, 0); /*0x52edc6*/
    SendDlgItemMessageA(hDlg, dword_A8F7A8, 0x4D4u, 0, 0); /*0x52edd9*/
    LODWORD(v15) = Audio::Callback(); /*0x52eddb*/
    g_ScenarioLoadEvent = -1; /*0x52ede5*/
    qword_A8F7A0 = v15 + 500; /*0x52edf2*/
    v14 = 0; /*0x52edf7*/
    dword_A8F7A8 = 0; /*0x52edff*/
  }
  if ( v13 == 1770 ) /*0x52ee0a*/
  {
    if ( v14 != 1770 ) /*0x52ee0e*/
    {
      g_ScenarioLoadEvent = dword_825C78; /*0x52ee25*/
      SendDlgItemMessageA(hDlg, 1770, 0x4D3u, 0, 0); /*0x52ee2b*/
      dword_A8F7A8 = 1770; /*0x52ee2f*/
      return 0; /*0x52ee3c*/
    }
    return 0; /*0x52ee0e*/
  }
  if ( v13 == 1772 ) /*0x52ee45*/
  {
    if ( v14 != 1772 ) /*0x52ee49*/
    {
      g_ScenarioLoadEvent = dword_825C74; /*0x52ee5f*/
      SendDlgItemMessageA(hDlg, 1772, 0x4D3u, 0, 0); /*0x52ee64*/
      dword_A8F7A8 = 1772; /*0x52ee68*/
      return 0; /*0x52ee75*/
    }
    return 0; /*0x52ee49*/
  }
  if ( v13 != 1771 ) /*0x52ee7e*/
    return 0; /*0x52f3dc*/
  if ( v14 != 1771 ) /*0x52ee86*/
    g_ScenarioLoadEvent = dword_825C7C; /*0x52ee8e*/
  SendDlgItemMessageA(hDlg, 1771, 0x4D3u, 0, 0); /*0x52eea3*/
  dword_A8F7A8 = 1771; /*0x52eea8*/
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

  v0 = dword_887628; /*0x52f3f0*/
  if ( dword_887628 ) /*0x52f3fe*/
  {
    (**(void (__thiscall ***)(int, int))dword_887628)(dword_887628, 1); /*0x52f404*/
    v0 = 0; /*0x52f406*/
    dword_887628 = 0; /*0x52f408*/
  }
  v1 = 0; /*0x52f414*/
  if ( dword_A83CA8 > 0 ) /*0x52f419*/
  {
    do /*0x52f437*/
    {
      (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)dword_A83C9C + v1) + 100))( /*0x52f42c*/
        *((_DWORD *)dword_A83C9C + v1),
        dword_887048);
      ++v1; /*0x52f434*/
    }
    while ( v1 < dword_A83CA8 ); /*0x52f437*/
    v0 = dword_887628; /*0x52f439*/
  }
  if ( !v0 ) /*0x52f441*/
  {
    v2 = __2_YAPAXI_Z(0x3F5CCu); /*0x52f448*/
    if ( v2 ) /*0x52f452*/
      v0 = Network::finalizeSession(v2); /*0x52f45b*/
    else
      v0 = 0; /*0x52f45f*/
    dword_887628 = v0; /*0x52f461*/
  }
  dword_A8B24C = 2; /*0x52f467*/
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v0 + 60))(v0, 0); /*0x52f474*/
  Network::SetConnectionParams(30, -1, 600, 1); /*0x52f489*/
  Debug::Log(aAboutToInitial); /*0x52f493*/
  v4 = Network_Init_5DA6C0(); /*0x52f4a6*/
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_887628 + 28))(dword_887628); /*0x52f4ac*/
  dword_A8E2B2 = 0; /*0x52f4b3*/
  dword_A8E2B6 = 0; /*0x52f4be*/
  byte_A8E2B0 = 0; /*0x52f4c4*/
  dword_A8E2BA = 0; /*0x52f4ca*/
  byte_A8E2A4 = 0; /*0x52f4d0*/
  dword_A8E2BE = 0; /*0x52f4d6*/
  LOWORD(dword_A8DBBC) = 0; /*0x52f4e1*/
  word_A8E2A6 = 0; /*0x52f4e8*/
  dword_A8E2C4 = 0; /*0x52f4ef*/
  dword_A8E2CC = -1; /*0x52f4f5*/
  dword_A8E2D4 = 20; /*0x52f4fb*/
  dword_A8E2D8 = 0; /*0x52f505*/
  dword_A8E2DC = 0; /*0x52f50b*/
  dword_A8E2E0 = -1; /*0x52f511*/
  memset(&unk_A8DC4C, 0, 0x200u); /*0x52f517*/
  memset(&dword_A8DE4C, 0xFFu, 0x200u); /*0x52f527*/
  dword_A8E050 = 0; /*0x52f529*/
  dword_A8E054 = 0; /*0x52f534*/
  dword_A8E058 = 0; /*0x52f53c*/
  dword_A8E05C = 0; /*0x52f547*/
  memset(&dword_A8E230, 0, 0x20u); /*0x52f54d*/
  dword_A8E04C = 0; /*0x52f557*/
  if ( dword_A8E22C ) /*0x52f55e*/
  {
    dword_A8E228 = dword_A8E22C; /*0x52f560*/
  }
  else if ( byte_A8E250 ) /*0x52f56d*/
  {
    dword_A8E228 += 7; /*0x52f57c*/
    if ( dword_A8E228 >= 1950 ) /*0x52f581*/
      dword_A8E228 = 1250; /*0x52f583*/
    byte_A8E250 = 0; /*0x52f58d*/
  }
  RawFileClass::Construct(aRa2mdIni); /*0x52f59c*/
  INIClass::SetInt(aMultiplayer, aPortbase, dword_A8E228, 0); /*0x52f5b7*/
  INIClass::SetInt(aMultiplayer, aPortpool, dword_ABFED8, 0); /*0x52f5d3*/
  INIClass::WriteDigest(v5, 0); /*0x52f5e3*/
  Network::validatePacket(&unk_B052D0); /*0x52f5ed*/
  byte_A8D60E = 1; /*0x52f5f6*/
  RawFileClass::Dtor(v5); /*0x52f5fd*/
  return v4; /*0x52f606*/
}



// ==== 0x0052F620  ParseCommandLine  this=-  sig=ida-proto ====
char __fastcall CommandLine_Parse(int a1, int a2)
{
  char **v4; // esi
  char *v5; // esi
  int v6; // eax
  int v7; // edi
  char *v8; // eax
  int *v9; // eax
  __int16 v10; // ax
  unsigned __int16 v11; // ax
  int v12; // eax
  char *v13; // esi
  char v14; // al
  bool v15; // cc
  const wchar_t *v17; // eax
  const wchar_t *v18; // eax
  const wchar_t *v19; // eax
  const wchar_t *v20; // eax
  const wchar_t *v21; // eax
  const wchar_t *v22; // eax
  char v23; // [esp+10h] [ebp-28h] BYREF
  int v24; // [esp+14h] [ebp-24h]
  char **v25; // [esp+18h] [ebp-20h]
  _BYTE v26[4]; // [esp+1Ch] [ebp-1Ch] BYREF
  int v27; // [esp+20h] [ebp-18h]
  int v28; // [esp+24h] [ebp-14h] BYREF
  __int16 v29; // [esp+28h] [ebp-10h]

  v27 = a1; /*0x52f630*/
  ScenarioClass::ResetIntroFlags(&dword_A8E960); /*0x52f634*/
  byte_A8ED6B = 0; /*0x52f63e*/
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
    RestartNetworkSession(1); /*0x52f67f*/
LABEL_64:
    v4 = v25 + 1; /*0x52fb17*/
    v15 = ++v24 < v27; /*0x52fb27*/
    ++v25; /*0x52fb2d*/
    if ( !v15 ) /*0x52fb31*/
      return 1; /*0x52fb31*/
  }
  if ( !_strcmpi(aStr, v5) ) /*0x52f68f*/
  {
    ToggleNetworkSession(1); /*0x52f6a0*/
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
    dword_A8F784 = 1; /*0x52f6f7*/
    goto LABEL_64; /*0x52f701*/
  }
  if ( !_strcmpi(aPlay, v5) ) /*0x52f70c*/
  {
    dword_A8F784 = 2; /*0x52f718*/
    goto LABEL_64; /*0x52f71e*/
  }
  if ( !_strcmpi(&unk_8265B8, v5) /*0x52f76b*/
    || !_strcmpi(&unk_8265B4, v5)
    || !_strcmpi(&unk_8265B0, v5)
    || !_strcmpi(&unk_8265AC, v5) )
  {
    v18 = (const wchar_t *)GetStringCSF(aTxtOptionHelp0, (int)g_Str_File_Init_CPP, 3414); /*0x52fb7b*/
    _putws(v18); /*0x52fb81*/
    v19 = (const wchar_t *)GetStringCSF(aTxtOptionHelp0_0, (int)g_Str_File_Init_CPP, 3415); /*0x52fb9a*/
    _putws(v19); /*0x52fba0*/
    v20 = (const wchar_t *)GetStringCSF(aTxtOptionHelp0_1, (int)g_Str_File_Init_CPP, 3416); /*0x52fbb9*/
    _putws(v20); /*0x52fbbf*/
    v21 = (const wchar_t *)GetStringCSF(aTxtOptionHelp0_2, (int)g_Str_File_Init_CPP, 3417); /*0x52fbd8*/
    _putws(v21); /*0x52fbde*/
    v22 = (const wchar_t *)GetStringCSF(aTxtOptionHelp0_3, (int)g_Str_File_Init_CPP, 3418); /*0x52fbf7*/
    _putws(v22); /*0x52fbfd*/
    v17 = (const wchar_t *)GetStringCSF((wchar_t *)aTxtOptionHelp0_4, (int)g_Str_File_Init_CPP, 3419); /*0x52fc16*/
    goto LABEL_67; /*0x52fc16*/
  }
  if ( Checksummer::HashString(v5) == -648255326 ) /*0x52f787*/
  {
    v6 = dword_A8E960; /*0x52f789*/
    LOBYTE(v6) = dword_A8E960 | 4; /*0x52f78e*/
    dword_A8E960 = v6; /*0x52f790*/
    goto LABEL_64; /*0x52f795*/
  }
  if ( strstr(v5, SubStr) ) /*0x52f7a0*/
  {
    byte_89E3A0 = 1; /*0x52f7af*/
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
          v26[v7] = v23; /*0x52f80d*/
        ++v7; /*0x52f821*/
        v8 = strtok(0, asc_826598); /*0x52f822*/
      }
      while ( v8 ); /*0x52f82c*/
      if ( v7 >= 4 ) /*0x52f831*/
      {
        v28 = -1; /*0x52f83e*/
        v29 = -1; /*0x52f847*/
        dword_A8D5FC = 1; /*0x52f852*/
        v9 = (int *)NetworkAddress::Assign(v26, &v28, 0); /*0x52f85c*/
        stru_A8D600 = *v9; /*0x52f863*/
        dword_A8D604 = v9[1]; /*0x52f86c*/
        dword_A8D608 = v9[2]; /*0x52f875*/
      }
    }
    goto LABEL_64; /*0x52f87a*/
  }
  if ( strstr(v5, aSocket_0) ) /*0x52f885*/
  {
    v10 = atoi(&v5[strlen(aSocket_1)]) + 0x4000; /*0x52f8a8*/
    if ( v10 >= 0x4000 ) /*0x52f8b4*/
      Network::GetField(v10); /*0x52f8ca*/
    goto LABEL_64; /*0x52f8cf*/
  }
  SessionClass::SetInstance(0); /*0x52f8d6*/
  if ( strstr(v5, aMpdebug) ) /*0x52f8e1*/
  {
    byte_B04880 = 1; /*0x52f8ed*/
    byte_A8B8B4 = 1; /*0x52f8f4*/
  }
  if ( strstr(v5, aDrop) ) /*0x52f901*/
  {
    v11 = atoi(&v5[strlen(aDrop)]); /*0x52f91f*/
    SessionClass::SetInstance(v11); /*0x52f92f*/
    goto LABEL_64; /*0x52f934*/
  }
  if ( strstr(v5, aSpeedcontrol) ) /*0x52f93f*/
    byte_A8EDDC = 1; /*0x52f94b*/
  if ( strstr(v5, aDlink1) ) /*0x52f958*/
    dword_B77E18 = 1; /*0x52f964*/
  if ( strstr(v5, aNetgear) ) /*0x52f974*/
    dword_B77E18 = 2; /*0x52f980*/
  if ( strstr(v5, aNorouter) ) /*0x52f98c*/
    byte_A8E2C8 = 0; /*0x52f998*/
  if ( strstr(v5, aStealth) ) /*0x52f9a4*/
  {
    byte_A8D60C = 1; /*0x52f9b0*/
    goto LABEL_64; /*0x52f9b7*/
  }
  if ( strstr(v5, aMessages) ) /*0x52f9c2*/
  {
    byte_A8D60D = 0; /*0x52f9ce*/
    goto LABEL_64; /*0x52f9d4*/
  }
  if ( strstr(v5, aAttract) ) /*0x52f9df*/
  {
    v12 = dword_A8D5F8; /*0x52f9eb*/
    LOBYTE(v12) = dword_A8D5F8 | 4; /*0x52f9f0*/
    dword_A8D5F8 = v12; /*0x52f9f2*/
    goto LABEL_64; /*0x52f9f7*/
  }
  if ( isdigit(v5[1]) ) /*0x52fa01*/
  {
    sscanf(v5, "-%dX%d", &dword_A8EB84, &dword_A8EB88); /*0x52fa1d*/
    goto LABEL_64; /*0x52fa25*/
  }
  if ( !strcmp(v5, a480) ) /*0x52fa37*/
  {
    dword_A8EB88 = 480; /*0x52fa5c*/
    goto LABEL_64; /*0x52fa66*/
  }
  if ( !strcmp(v5, unk_82650C) ) /*0x52fa78*/
  {
    g_Is16BitMode = 1; /*0x52fa9d*/
    goto LABEL_64; /*0x52faa4*/
  }
  if ( !_strcmpi(v5, aWin) ) /*0x52faac*/
  {
    g_DDraw_Initialized = 1; /*0x52fab8*/
    goto LABEL_64; /*0x52fabf*/
  }
  if ( _strnicmp(v5, unk_8264FC, strlen(unk_826500)) ) /*0x52fad7*/
    goto LABEL_64; /*0x52fad7*/
  v13 = &v5[strlen(unk_8264FC)]; /*0x52faf0*/
  v14 = *v13; /*0x52faf2*/
  if ( !*v13 ) /*0x52faf2*/
    goto LABEL_64; /*0x52faf6*/
  while ( 1 ) /*0x52fafc*/
  {
    ++v13; /*0x52fafc*/
    if ( toupper(v14) != 81 ) /*0x52fb08*/
      break; /*0x52fb08*/
    byte_A8ED64 = 1; /*0x52fb0a*/
    v14 = *v13; /*0x52fb11*/
    if ( !*v13 ) /*0x52fb11*/
      goto LABEL_64; /*0x52fb15*/
  }
  v17 = (const wchar_t *)GetStringCSF(aTxtInvalid, (int)g_Str_File_Init_CPP, 3732); /*0x52fb52*/
LABEL_67:
  _putws(v17); /*0x52fb57*/
  return 0; /*0x52fb37*/
}



// ==== 0x0052FC20  ObjectClass::InitRandomSeed  this=ObjectClass  sig=csp ====
int InitRandomSeed(TechnoClass *this)
{
  DWORD TickCount; // eax
  int result; // eax
  struct _SYSTEMTIME SystemTime; // [esp+8h] [ebp-408h] BYREF
  _BYTE v4[1012]; // [esp+1Ch] [ebp-3F4h] BYREF

  Debug::Log(); /*0x52fc2d*/
  if ( dword_A8B8B8 || (dword_A8D5F8 & 2) != 0 || UI_Update() ) /*0x52fc4f*/
  {
    SeedInitRNG((ObjectClass *)v4, dword_A8ED94); /*0x52fe66*/
    qmemcpy(&dword_A8B230[14].NeedsSaveOrLink, v4, 0x3F4u); /*0x52fe80*/
    SeedInitRNG((ObjectClass *)v4, dword_A8ED94); /*0x52fe8d*/
    qmemcpy(&Randomizer_Global, v4, 0x3F4u); /*0x52feab*/
    return Debug::Log(); /*0x52fead*/
  }
  else
  {
    if ( !*(_DWORD *)&dword_A8B238 || *(_DWORD *)&dword_A8B238 == 5 ) /*0x52fc68*/
    {
      GetSystemTime(&SystemTime); /*0x52fc73*/
      Random::AdvanceRandomBytes(stru_A8E7B0.__pad_0, SystemTime.wMilliseconds); /*0x52fc83*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wSecond); /*0x52fc98*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wSecond >> 1); /*0x52fcae*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wSecond >> 2); /*0x52fcc6*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wSecond >> 3); /*0x52fcde*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wSecond >> 4); /*0x52fcf5*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wMinute); /*0x52fd0a*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wMinute >> 1); /*0x52fd21*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wMinute >> 2); /*0x52fd38*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wMinute >> 3); /*0x52fd50*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wMinute >> 4); /*0x52fd68*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wHour); /*0x52fd7c*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wDay); /*0x52fd91*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wDayOfWeek); /*0x52fda6*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wMonth); /*0x52fdba*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wYear); /*0x52fdcf*/
      TickCount = dword_A8ED98; /*0x52fdd4*/
      if ( !dword_A8ED98 ) /*0x52fddb*/
      {
        RandomStraw::Release((RandomStraw *)&stru_A8E7B0, (int)&dword_A8ED94, 4); /*0x52fde9*/
        TickCount = GetTickCount(); /*0x52fdee*/
      }
      dword_A8ED94 = TickCount; /*0x52fdf4*/
    }
    Debug::Log(); /*0x52fe05*/
    SeedInitRNG((ObjectClass *)v4, dword_A8ED94); /*0x52fe17*/
    qmemcpy(&dword_A8B230[14].NeedsSaveOrLink, v4, 0x3F4u); /*0x52fe31*/
    result = (int)SeedInitRNG((ObjectClass *)v4, dword_A8ED94); /*0x52fe3e*/
    qmemcpy(&Randomizer_Global, v4, 0x3F4u); /*0x52fe51*/
  }
  return result; /*0x52fe53*/
}



// ==== 0x0052FEC0  Screen::Capture  this=Screen  sig=csp ====
int __usercall Screen::Capture@<eax>(char a1@<dl>, int a2@<ecx>, int a3@<ebx>, int a4@<ebp>)
{
  int *v4; // edi
  int v5; // ebx
  int v6; // ebp
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  int result; // eax
  int v10; // [esp+Ah] [ebp-1Ch]
  int v11; // [esp+Eh] [ebp-18h]
  int *v12; // [esp+12h] [ebp-14h]
  int v13[2]; // [esp+1Eh] [ebp-8h] BYREF
  int retaddr; // [esp+26h] [ebp+0h]

  v4 = (int *)a2; /*0x52fec5*/
  HIBYTE(v12) = a1; /*0x52fecb*/
  if ( !a2 ) /*0x52fecf*/
    v4 = g_DSurface_Hidden; /*0x52fed1*/
  (*(void (__thiscall **)(int *, _DWORD, int, int))(*v4 + 24))(v4, 0, a4, a3); /*0x52fede*/
  v5 = (*(int (__thiscall **)(int *))(*v4 + 124))(v4); /*0x52fee8*/
  v6 = (*(int (__thiscall **)(int *))(*v4 + 128))(v4); /*0x52fef4*/
  v13[0] = 0; /*0x52fef6*/
  v13[1] = 0; /*0x52fefc*/
  retaddr = v5; /*0x52ff00*/
  v7 = __2_YAPAXI_Z(0x20u); /*0x52ff08*/
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
  result = (*(int (__thiscall **)(int *, _DWORD *))(*v4 + 4))(v4, v8); /*0x52ff60*/
  if ( v8 ) /*0x52ff67*/
    result = (*(int (__thiscall **)(_DWORD *, int))*v8)(v8, 1); /*0x52ff6f*/
  LOBYTE(result) = HIBYTE(v12); /*0x52ff71*/
  if ( HIBYTE(v12) ) /*0x52ff77*/
    return Frame::Present((int)v4, 1, 0, (int)v4, 0, v10, v11, v12); /*0x52ff7f*/
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

